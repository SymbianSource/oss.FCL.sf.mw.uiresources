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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00050d62 };

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
0x328a,	// (0x00053fec) Screen

0x3296,	// (0x00053ff8) application_window

0x32f2,	// (0x00054054) area_bottom_pane_ParamLimits

0x32f2,	// (0x00054054) area_bottom_pane

0x334a,	// (0x000540ac) area_top_pane_ParamLimits

0x334a,	// (0x000540ac) area_top_pane

0x33ae,	// (0x00054110) call_video_uplink_pane_ParamLimits

0x33ae,	// (0x00054110) call_video_uplink_pane

0x33ed,	// (0x0005414f) main_pane_ParamLimits

0x33ed,	// (0x0005414f) main_pane

0xe44d,	// (0x0005f1af) context_pane

0x6074,	// (0x00056dd6) navi_pane

0x609a,	// (0x00056dfc) popup_cale_events_window_ParamLimits

0x609a,	// (0x00056dfc) popup_cale_events_window

0xe460,	// (0x0005f1c2) popup_mup_playback_window

0x60b2,	// (0x00056e14) signal_pane

0xbfa0,	// (0x0005cd02) main_browser_pane

0xc707,	// (0x0005d469) main_burst_pane

0x5ef6,	// (0x00056c58) main_calc_pane

0xe441,	// (0x0005f1a3) main_cale_day_pane

0x387d,	// (0x000545df) main_cale_month_pane

0xe441,	// (0x0005f1a3) main_cale_week_pane

0xc707,	// (0x0005d469) main_call_pane

0xbc20,	// (0x0005c982) main_call_poc_pane

0xc707,	// (0x0005d469) main_camera_pane

0xc707,	// (0x0005d469) main_chi_dic_pane

0xce99,	// (0x0005dbfb) main_clock_pane

0xbc20,	// (0x0005c982) main_fmradio_pane

0xc707,	// (0x0005d469) main_graph_messa_pane

0xbc20,	// (0x0005c982) main_help_pane

0xbfa0,	// (0x0005cd02) main_im_pane

0xbe7b,	// (0x0005cbdd) main_image_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) main_image_pane

0xbc20,	// (0x0005c982) main_location2_pane

0xc707,	// (0x0005d469) main_location_pane

0xbe7b,	// (0x0005cbdd) main_messa_pane

0xbc20,	// (0x0005c982) main_mp2_pane

0xc707,	// (0x0005d469) main_mp_pane

0xbc20,	// (0x0005c982) main_msg_pane

0xbc20,	// (0x0005c982) main_mup_eq_pane

0xbc20,	// (0x0005c982) main_mup_pane

0xbfa0,	// (0x0005cd02) main_notes_pane

0xbc20,	// (0x0005c982) main_pec_pane

0xbc20,	// (0x0005c982) main_phob_pane

0xbc20,	// (0x0005c982) main_pinb_pane

0xbc20,	// (0x0005c982) main_postcard_pane

0xbc20,	// (0x0005c982) main_qdial_pane

0xc707,	// (0x0005d469) main_skin_pane

0xbc20,	// (0x0005c982) main_smil2_pane

0xc707,	// (0x0005d469) main_smil_pane

0xc707,	// (0x0005d469) main_video_pane

0xc707,	// (0x0005d469) main_video_tele_pane

0xbe7b,	// (0x0005cbdd) main_viewer_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) main_viewer_pane

0xc707,	// (0x0005d469) main_vorec_pane

0x5f42,	// (0x00056ca4) popup_blid_sat_info_window_ParamLimits

0x5f42,	// (0x00056ca4) popup_blid_sat_info_window

0x5f62,	// (0x00056cc4) popup_dyc_status_message_window_ParamLimits

0x5f62,	// (0x00056cc4) popup_dyc_status_message_window

0x5f70,	// (0x00056cd2) popup_grid_large_graphic_window_ParamLimits

0x5f70,	// (0x00056cd2) popup_grid_large_graphic_window

0x5fff,	// (0x00056d61) popup_loc_request_window_ParamLimits

0x5fff,	// (0x00056d61) popup_loc_request_window

0x604c,	// (0x00056dae) popup_wml_address_window_ParamLimits

0x604c,	// (0x00056dae) popup_wml_address_window

0x5dce,	// (0x00056b30) call_muted_g1

0x5abb,	// (0x0005681d) popup_call_audio_conf_window_ParamLimits

0x5abb,	// (0x0005681d) popup_call_audio_conf_window

0x5dde,	// (0x00056b40) popup_call_audio_first_window_ParamLimits

0x5dde,	// (0x00056b40) popup_call_audio_first_window

0x5e1e,	// (0x00056b80) popup_call_audio_in_window_ParamLimits

0x5e1e,	// (0x00056b80) popup_call_audio_in_window

0x5e42,	// (0x00056ba4) popup_call_audio_out_window_ParamLimits

0x5e42,	// (0x00056ba4) popup_call_audio_out_window

0x5e64,	// (0x00056bc6) popup_call_audio_second_window_ParamLimits

0x5e64,	// (0x00056bc6) popup_call_audio_second_window

0x5e94,	// (0x00056bf6) popup_call_audio_wait_window_ParamLimits

0x5e94,	// (0x00056bf6) popup_call_audio_wait_window

0x5eb5,	// (0x00056c17) popup_number_entry_window_ParamLimits

0x5eb5,	// (0x00056c17) popup_number_entry_window

0xb80d,	// (0x0005c56f) bg_popup_call_pane_cp05_ParamLimits

0xb80d,	// (0x0005c56f) bg_popup_call_pane_cp05

0xb82d,	// (0x0005c58f) popup_number_entry_window_t1

0xb840,	// (0x0005c5a2) popup_number_entry_window_t2

0xb852,	// (0x0005c5b4) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0005fd7f) popup_number_entry_window_t

0xb864,	// (0x0005c5c6) text_title_cp2

0xb877,	// (0x0005c5d9) bg_popup_call_pane_cp_ParamLimits

0xb877,	// (0x0005c5d9) bg_popup_call_pane_cp

0xb885,	// (0x0005c5e7) call_thumbnail_pane

0xb88d,	// (0x0005c5ef) popup_call_audio_in_window_g1_ParamLimits

0xb88d,	// (0x0005c5ef) popup_call_audio_in_window_g1

0xb899,	// (0x0005c5fb) popup_call_audio_in_window_g2_ParamLimits

0xb899,	// (0x0005c5fb) popup_call_audio_in_window_g2

0xb8a5,	// (0x0005c607) popup_call_audio_in_window_g3_ParamLimits

0xb8a5,	// (0x0005c607) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0005fd88) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0005fd88) popup_call_audio_in_window_g

0xb8b1,	// (0x0005c613) popup_call_audio_in_window_t1_ParamLimits

0xb8b1,	// (0x0005c613) popup_call_audio_in_window_t1

0xb8cd,	// (0x0005c62f) popup_call_audio_in_window_t2_ParamLimits

0xb8cd,	// (0x0005c62f) popup_call_audio_in_window_t2

0xb8e9,	// (0x0005c64b) popup_call_audio_in_window_t3_ParamLimits

0xb8e9,	// (0x0005c64b) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0005fd8f) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0005fd8f) popup_call_audio_in_window_t

0xb877,	// (0x0005c5d9) bg_popup_call_pane_cp01_ParamLimits

0xb877,	// (0x0005c5d9) bg_popup_call_pane_cp01

0xb885,	// (0x0005c5e7) call_thumbnail_pane_cp02

0xb8fc,	// (0x0005c65e) call_type_pane_cp022

0xb904,	// (0x0005c666) popup_call_audio_out_window_g1_ParamLimits

0xb904,	// (0x0005c666) popup_call_audio_out_window_g1

0xb916,	// (0x0005c678) popup_call_audio_out_window_g2_ParamLimits

0xb916,	// (0x0005c678) popup_call_audio_out_window_g2

0xb922,	// (0x0005c684) popup_call_audio_out_window_g3_ParamLimits

0xb922,	// (0x0005c684) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0005fd96) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0005fd96) popup_call_audio_out_window_g

0xb934,	// (0x0005c696) popup_call_audio_out_window_t1_ParamLimits

0xb934,	// (0x0005c696) popup_call_audio_out_window_t1

0xb94c,	// (0x0005c6ae) popup_call_audio_out_window_t2_ParamLimits

0xb94c,	// (0x0005c6ae) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0005fd9d) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0005fd9d) popup_call_audio_out_window_t

0xb961,	// (0x0005c6c3) bg_popup_call_pane_ParamLimits

0xb961,	// (0x0005c6c3) bg_popup_call_pane

0x356c,	// (0x000542ce) call_thumbnail_pane_cp_ParamLimits

0x356c,	// (0x000542ce) call_thumbnail_pane_cp

0xb9e5,	// (0x0005c747) call_type_pane_cp01_ParamLimits

0xb9e5,	// (0x0005c747) call_type_pane_cp01

0xba29,	// (0x0005c78b) popup_call_audio_first_window_g1_ParamLimits

0xba29,	// (0x0005c78b) popup_call_audio_first_window_g1

0xba75,	// (0x0005c7d7) popup_call_audio_first_window_g2_ParamLimits

0xba75,	// (0x0005c7d7) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0005fda2) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0005fda2) popup_call_audio_first_window_g

0xbab9,	// (0x0005c81b) popup_call_audio_first_window_t1_ParamLimits

0xbab9,	// (0x0005c81b) popup_call_audio_first_window_t1

0xbb65,	// (0x0005c8c7) popup_call_audio_first_window_t4_ParamLimits

0xbb65,	// (0x0005c8c7) popup_call_audio_first_window_t4

0xbbf1,	// (0x0005c953) popup_call_audio_first_window_t5_ParamLimits

0xbbf1,	// (0x0005c953) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0005fda7) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0005fda7) popup_call_audio_first_window_t

0xbc20,	// (0x0005c982) bg_popup_call_pane_cp02

0xbc2a,	// (0x0005c98c) call_type_pane_cp023

0xbc32,	// (0x0005c994) popup_call_audio_wait_window_g1

0xbc3a,	// (0x0005c99c) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0005fdae) popup_call_audio_wait_window_g

0xbc42,	// (0x0005c9a4) popup_call_audio_wait_window_t3

0xbc50,	// (0x0005c9b2) bg_popup_call_pane_cp03_ParamLimits

0xbc50,	// (0x0005c9b2) bg_popup_call_pane_cp03

0xbcb0,	// (0x0005ca12) call_thumbnail_pane_cp011_ParamLimits

0xbcb0,	// (0x0005ca12) call_thumbnail_pane_cp011

0xbcbc,	// (0x0005ca1e) call_type_pane_cp034_ParamLimits

0xbcbc,	// (0x0005ca1e) call_type_pane_cp034

0xbcf8,	// (0x0005ca5a) popup_call_audio_second_window_g1_ParamLimits

0xbcf8,	// (0x0005ca5a) popup_call_audio_second_window_g1

0xbd34,	// (0x0005ca96) popup_call_audio_second_window_g2_ParamLimits

0xbd34,	// (0x0005ca96) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0005fdb3) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0005fdb3) popup_call_audio_second_window_g

0xbd70,	// (0x0005cad2) popup_call_audio_second_window_t1_ParamLimits

0xbd70,	// (0x0005cad2) popup_call_audio_second_window_t1

0xbdf1,	// (0x0005cb53) popup_call_audio_second_window_t2_ParamLimits

0xbdf1,	// (0x0005cb53) popup_call_audio_second_window_t2

0xbe27,	// (0x0005cb89) popup_call_audio_second_window_t3_ParamLimits

0xbe27,	// (0x0005cb89) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0005fdb8) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0005fdb8) popup_call_audio_second_window_t

0xbc20,	// (0x0005c982) bg_popup_call_pane_cp04

0xbe5d,	// (0x0005cbbf) list_conf_pane

0xbe65,	// (0x0005cbc7) popup_call_audio_conf_window_t1

0xbe73,	// (0x0005cbd5) call_thumbnail_pane_g1

0xbe7b,	// (0x0005cbdd) bg_pinb_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_pinb_pane

0xbe89,	// (0x0005cbeb) find_pinb_pane

0xbe7b,	// (0x0005cbdd) listscroll_pinb_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) listscroll_pinb_pane

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g1

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g2

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g3

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g4

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g5

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g6

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g7

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g8

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g9

0xbe93,	// (0x0005cbf5) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0005fdbf) pinb_bg_pane_g

0xb803,	// (0x0005c565) grid_pinb_pane

0xb803,	// (0x0005c565) list_pinb_pane

0xbe9d,	// (0x0005cbff) scroll_pane_cp01_ParamLimits

0xbe9d,	// (0x0005cbff) scroll_pane_cp01

0xbeab,	// (0x0005cc0d) find_pinb_pane_g1_ParamLimits

0xbeab,	// (0x0005cc0d) find_pinb_pane_g1

0xbec3,	// (0x0005cc25) find_pinb_pane_t1

0xbed5,	// (0x0005cc37) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0005fdd9) find_pinb_pane_t

0xbeea,	// (0x0005cc4c) input_focus_pane_cp01_ParamLimits

0xbeea,	// (0x0005cc4c) input_focus_pane_cp01

0xbef6,	// (0x0005cc58) cell_pinb_pane_ParamLimits

0xbef6,	// (0x0005cc58) cell_pinb_pane

0xbf04,	// (0x0005cc66) cell_pinb_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_pinb_pane_g1

0xbf12,	// (0x0005cc74) cell_pinb_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) cell_pinb_pane_g2

0xbf12,	// (0x0005cc74) cell_pinb_pane_g3_ParamLimits

0xbf12,	// (0x0005cc74) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0005fdde) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0005fdde) cell_pinb_pane_g

0xbc20,	// (0x0005c982) grid_highlight_pane_cp01

0xbef6,	// (0x0005cc58) list_pinb_item_pane_ParamLimits

0xbef6,	// (0x0005cc58) list_pinb_item_pane

0xb803,	// (0x0005c565) list_highlight_pane_cp02

0xbf20,	// (0x0005cc82) list_pinb_item_pane_g1_ParamLimits

0xbf20,	// (0x0005cc82) list_pinb_item_pane_g1

0xbf12,	// (0x0005cc74) list_pinb_item_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) list_pinb_item_pane_g2

0xbf04,	// (0x0005cc66) list_pinb_item_pane_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_pinb_item_pane_g3

0xbf12,	// (0x0005cc74) list_pinb_item_pane_g4_ParamLimits

0xbf12,	// (0x0005cc74) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0005fde5) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0005fde5) list_pinb_item_pane_g

0xbf2e,	// (0x0005cc90) list_pinb_item_pane_t1_ParamLimits

0xbf2e,	// (0x0005cc90) list_pinb_item_pane_t1

0x35aa,	// (0x0005430c) calc_display_pane

0x35c8,	// (0x0005432a) calc_paper_pane

0x35e4,	// (0x00054346) grid_calc_pane

0xb803,	// (0x0005c565) bg_list_pane_cp01

0xbf42,	// (0x0005cca4) clock_g1

0xbf42,	// (0x0005cca4) clock_g2

0x0001,

0xf08c,	// (0x0005fdee) clock_g

0xbf4c,	// (0x0005ccae) clock_t1_ParamLimits

0xbf4c,	// (0x0005ccae) clock_t1

0xbf60,	// (0x0005ccc2) clock_t2_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t2

0xbf60,	// (0x0005ccc2) clock_t3_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t3

0xbf60,	// (0x0005ccc2) clock_t4_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t4

0xbf4c,	// (0x0005ccae) clock_t5_ParamLimits

0xbf4c,	// (0x0005ccae) clock_t5

0xbf60,	// (0x0005ccc2) clock_t6_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t6

0xbf60,	// (0x0005ccc2) clock_t7_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t7

0xbf60,	// (0x0005ccc2) clock_t8_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t8

0xbf60,	// (0x0005ccc2) clock_t9_ParamLimits

0xbf60,	// (0x0005ccc2) clock_t9

0x0008,

0xf091,	// (0x0005fdf3) clock_t_ParamLimits

0xf091,	// (0x0005fdf3) clock_t

0xb803,	// (0x0005c565) popup_clock_analogue_window_cp02

0xb803,	// (0x0005c565) popup_clock_digital_window_cp01

0xbc20,	// (0x0005c982) listscroll_help_pane

0xbc20,	// (0x0005c982) phob_pre_status_pane

0xbf74,	// (0x0005ccd6) grid_qdial_pane

0xbe7b,	// (0x0005cbdd) listscroll_mce_pane

0xbe7b,	// (0x0005cbdd) bg_notes_pane

0xbf7e,	// (0x0005cce0) list_notes_pane

0x3610,	// (0x00054372) scroll_pane_cp06

0xbf8c,	// (0x0005ccee) bg_calc_paper_pane

0x361f,	// (0x00054381) list_calc_pane

0xbfa0,	// (0x0005cd02) bg_calc_display_pane

0x3639,	// (0x0005439b) calc_display_pane_t1

0x364e,	// (0x000543b0) calc_display_pane_t2

0x3663,	// (0x000543c5) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0005fe06) calc_display_pane_t

0x3675,	// (0x000543d7) cell_calc_pane_ParamLimits

0x3675,	// (0x000543d7) cell_calc_pane

0xbfac,	// (0x0005cd0e) bg_calc_paper_pane_g1

0xbfb8,	// (0x0005cd1a) bg_calc_paper_pane_g2

0xbfc4,	// (0x0005cd26) bg_calc_paper_pane_g3

0xbfd0,	// (0x0005cd32) bg_calc_paper_pane_g4

0xbfdc,	// (0x0005cd3e) bg_calc_paper_pane_g5

0x36a2,	// (0x00054404) bg_calc_paper_pane_g6

0x36b3,	// (0x00054415) bg_calc_paper_pane_g7

0x36c4,	// (0x00054426) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0005fe0d) bg_calc_paper_pane_g

0x36d5,	// (0x00054437) calc_bg_paper_pane_g9

0x36e6,	// (0x00054448) list_calc_item_pane_ParamLimits

0x36e6,	// (0x00054448) list_calc_item_pane

0xbfe8,	// (0x0005cd4a) list_calc_item_pane_g1

0x3713,	// (0x00054475) list_calc_item_pane_t1_ParamLimits

0x3713,	// (0x00054475) list_calc_item_pane_t1

0x3725,	// (0x00054487) list_calc_item_pane_t2_ParamLimits

0x3725,	// (0x00054487) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0005fe1e) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0005fe1e) list_calc_item_pane_t

0xbe93,	// (0x0005cbf5) cell_calc_pane_g1

0xbff5,	// (0x0005cd57) grid_highlight_pane_cp02

0x3755,	// (0x000544b7) bg_calc_display_pane_g1

0x375e,	// (0x000544c0) bg_calc_display_pane_g2

0x3768,	// (0x000544ca) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0005fe28) bg_calc_display_pane_g

0x3771,	// (0x000544d3) cell_qdial_pane_ParamLimits

0x3771,	// (0x000544d3) cell_qdial_pane

0x3785,	// (0x000544e7) cell_qdial_pane_g1_ParamLimits

0x3785,	// (0x000544e7) cell_qdial_pane_g1

0x3792,	// (0x000544f4) cell_qdial_pane_g2_ParamLimits

0x3792,	// (0x000544f4) cell_qdial_pane_g2

0xc017,	// (0x0005cd79) cell_qdial_pane_g3_ParamLimits

0xc017,	// (0x0005cd79) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0005fe2f) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0005fe2f) cell_qdial_pane_g

0x37af,	// (0x00054511) cell_qdial_pane_t1_ParamLimits

0x37af,	// (0x00054511) cell_qdial_pane_t1

0x37c7,	// (0x00054529) cell_qdial_pane_t2_ParamLimits

0x37c7,	// (0x00054529) cell_qdial_pane_t2

0x37da,	// (0x0005453c) cell_qdial_pane_t3_ParamLimits

0x37da,	// (0x0005453c) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0005fe38) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0005fe38) cell_qdial_pane_t

0xbc20,	// (0x0005c982) grid_highlight_pane_cp04

0xc023,	// (0x0005cd85) thumbnail_qdial_pane_ParamLimits

0xc023,	// (0x0005cd85) thumbnail_qdial_pane

0xc5f5,	// (0x0005d357) list_help_pane

0xc5fe,	// (0x0005d360) scroll_pane_cp02

0x37ed,	// (0x0005454f) help_list_pane_t1_ParamLimits

0x37ed,	// (0x0005454f) help_list_pane_t1

0xc607,	// (0x0005d369) bg_notes_pane_g2

0xc60f,	// (0x0005d371) bg_notes_pane_g3

0xc617,	// (0x0005d379) notes_bg_pane_g1

0xc61f,	// (0x0005d381) notes_bg_pane_g4

0xc627,	// (0x0005d389) notes_bg_pane_g5

0xc62f,	// (0x0005d391) notes_bg_pane_g6

0xc637,	// (0x0005d399) notes_bg_pane_g7

0xc63f,	// (0x0005d3a1) notes_bg_pane_g8

0xc647,	// (0x0005d3a9) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0005fe56) notes_bg_pane_g

0x3827,	// (0x00054589) list_notes_text_pane_ParamLimits

0x3827,	// (0x00054589) list_notes_text_pane

0xc64f,	// (0x0005d3b1) list_notes_text_pane_g1

0x386f,	// (0x000545d1) list_notes_text_pane_t1

0x387d,	// (0x000545df) listscroll_cale_week_pane

0x38ab,	// (0x0005460d) bg_cale_heading_pane

0xc669,	// (0x0005d3cb) bg_cale_pane_cp01

0x38cd,	// (0x0005462f) cale_week_corner_pane

0x38e7,	// (0x00054649) cale_week_day_heading_pane

0x3909,	// (0x0005466b) cale_week_scroll_pane_g1

0x3926,	// (0x00054688) cale_week_scroll_pane_g2

0x3939,	// (0x0005469b) cale_week_scroll_pane_g3

0x394c,	// (0x000546ae) cale_week_scroll_pane_g4

0x395f,	// (0x000546c1) cale_week_scroll_pane_g5

0x3972,	// (0x000546d4) cale_week_scroll_pane_g6

0x3985,	// (0x000546e7) cale_week_scroll_pane_g7

0x399a,	// (0x000546fc) cale_week_scroll_pane_g8

0x39af,	// (0x00054711) cale_week_scroll_pane_g9

0x39c2,	// (0x00054724) cale_week_scroll_pane_g10

0x39d5,	// (0x00054737) cale_week_scroll_pane_g11

0x39e8,	// (0x0005474a) cale_week_scroll_pane_g12

0x39ff,	// (0x00054761) cale_week_scroll_pane_g13

0x3a1a,	// (0x0005477c) cale_week_scroll_pane_g14

0x3a35,	// (0x00054797) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0005fe65) cale_week_scroll_pane_g

0x3a65,	// (0x000547c7) cale_week_time_pane

0x3a7a,	// (0x000547dc) grid_cale_week_pane

0xc698,	// (0x0005d3fa) scroll_pane_cp08

0x3a99,	// (0x000547fb) cell_cale_week_pane_ParamLimits

0x3a99,	// (0x000547fb) cell_cale_week_pane

0x3afb,	// (0x0005485d) cale_week_day_heading_pane_t1

0x3b16,	// (0x00054878) cale_week_day_heading_pane_t2

0x3b31,	// (0x00054893) cale_week_day_heading_pane_t3

0x3b4c,	// (0x000548ae) cale_week_day_heading_pane_t4

0x3b67,	// (0x000548c9) cale_week_day_heading_pane_t5

0x3b82,	// (0x000548e4) cale_week_day_heading_pane_t6

0x3b9d,	// (0x000548ff) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0005fe86) cale_week_day_heading_pane_t

0xc6b5,	// (0x0005d417) bg_cale_side_pane

0x3bb8,	// (0x0005491a) cale_week_time_pane_t1

0x3bd2,	// (0x00054934) cale_week_time_pane_t2

0x3bec,	// (0x0005494e) cale_week_time_pane_t3

0x3c06,	// (0x00054968) cale_week_time_pane_t4

0x3c20,	// (0x00054982) cale_week_time_pane_t5

0x3c3a,	// (0x0005499c) cale_week_time_pane_t6

0x3c5a,	// (0x000549bc) cale_week_time_pane_t7

0x3c7c,	// (0x000549de) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0005fe95) cale_week_time_pane_t

0x3ca0,	// (0x00054a02) cell_cale_week_pane_g2

0x3cc4,	// (0x00054a26) cell_cale_week_pane_g3_ParamLimits

0x3cc4,	// (0x00054a26) cell_cale_week_pane_g3

0xc6c3,	// (0x0005d425) grid_highlight_pane_cp07

0xc6cb,	// (0x0005d42d) listscroll_gms_pane

0xc6d5,	// (0x0005d437) grid_gms_pane

0xc6de,	// (0x0005d440) listscroll_gms_pane_g1

0xc6e6,	// (0x0005d448) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0005fea6) listscroll_gms_pane_g

0x3cdc,	// (0x00054a3e) scroll_pane_cp010

0x3ce7,	// (0x00054a49) cell_gms_pane_ParamLimits

0x3ce7,	// (0x00054a49) cell_gms_pane

0x3cf7,	// (0x00054a59) cell_gms_pane_g1

0xc6ee,	// (0x0005d450) cell_gms_pane_g2

0xc64f,	// (0x0005d3b1) cell_gms_pane_g3

0xc6f6,	// (0x0005d458) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0005feab) cell_gms_pane_g

0xc6ff,	// (0x0005d461) grid_highlight_pane_cp09

0x5d52,	// (0x00056ab4) phob_pre_status_pane_g1

0x5d5a,	// (0x00056abc) phob_pre_status_pane_g2

0x5d62,	// (0x00056ac4) phob_pre_status_pane_g3

0x5d6a,	// (0x00056acc) phob_pre_status_pane_g4

0x0004,

0xf502,	// (0x00060264) phob_pre_status_pane_g

0x5d7a,	// (0x00056adc) phob_pre_status_pane_t1

0x5d8a,	// (0x00056aec) phob_pre_status_pane_t2

0x5d9a,	// (0x00056afc) phob_pre_status_pane_t3

0x0002,

0xf50d,	// (0x0006026f) phob_pre_status_pane_t

0xc707,	// (0x0005d469) bg_list_pane_cp05

0x3d07,	// (0x00054a69) grid_vorec_pane

0x3d11,	// (0x00054a73) vorec_t1

0x3d1f,	// (0x00054a81) vorec_t2

0x3d2d,	// (0x00054a8f) vorec_t3

0x3d3b,	// (0x00054a9d) vorec_t4

0xaa92,	// (0x0005b7f4) vorec_t5

0xaaa0,	// (0x0005b802) vorec_t6

0x0004,

0xf152,	// (0x0005feb4) vorec_t

0xaaae,	// (0x0005b810) wait_bar_pane_cp01

0x3d57,	// (0x00054ab9) cell_vorec_pane_ParamLimits

0x3d57,	// (0x00054ab9) cell_vorec_pane

0x3d6a,	// (0x00054acc) cell_vorec_pane_g1

0xbc20,	// (0x0005c982) grid_highlight_pane_cp05

0xbef6,	// (0x0005cc58) cams_zoom_pane

0xbef6,	// (0x0005cc58) image_vga_pane

0xbf12,	// (0x0005cc74) main_camera_pane_g1

0xbf12,	// (0x0005cc74) main_camera_pane_g2

0xbf12,	// (0x0005cc74) main_camera_pane_g3

0xbf12,	// (0x0005cc74) main_camera_pane_g4

0xbf12,	// (0x0005cc74) main_camera_pane_g5

0xbf12,	// (0x0005cc74) main_camera_pane_g6

0xbf12,	// (0x0005cc74) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0005febf) main_camera_pane_g

0xbf60,	// (0x0005ccc2) main_camera_pane_t1

0xbf60,	// (0x0005ccc2) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0005fed0) main_camera_pane_t

0x3d74,	// (0x00054ad6) cams_zoom_pane_cp_ParamLimits

0x3d74,	// (0x00054ad6) cams_zoom_pane_cp

0x3da2,	// (0x00054b04) image_cif_pane_ParamLimits

0x3da2,	// (0x00054b04) image_cif_pane

0xb803,	// (0x0005c565) image_subqcif_pane

0x3db0,	// (0x00054b12) main_video_pane_g1_ParamLimits

0x3db0,	// (0x00054b12) main_video_pane_g1

0x3dd8,	// (0x00054b3a) main_video_pane_g2_ParamLimits

0x3dd8,	// (0x00054b3a) main_video_pane_g2

0x3e0b,	// (0x00054b6d) main_video_pane_g3_ParamLimits

0x3e0b,	// (0x00054b6d) main_video_pane_g3

0x3e0b,	// (0x00054b6d) main_video_pane_g4_ParamLimits

0x3e0b,	// (0x00054b6d) main_video_pane_g4

0x3e39,	// (0x00054b9b) main_video_pane_g5_ParamLimits

0x3e39,	// (0x00054b9b) main_video_pane_g5

0xc70f,	// (0x0005d471) main_video_pane_g6_ParamLimits

0xc70f,	// (0x0005d471) main_video_pane_g6

0x0006,

0xf173,	// (0x0005fed5) main_video_pane_g_ParamLimits

0xf173,	// (0x0005fed5) main_video_pane_g

0x3e55,	// (0x00054bb7) main_video_pane_t1_ParamLimits

0x3e55,	// (0x00054bb7) main_video_pane_t1

0xbf42,	// (0x0005cca4) cams_zoom_pane_g1

0xbf42,	// (0x0005cca4) cams_zoom_pane_g2

0xbf42,	// (0x0005cca4) cams_zoom_pane_g3

0xbf42,	// (0x0005cca4) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0005fee4) cams_zoom_pane_g

0xbef6,	// (0x0005cc58) grid_cams_pane

0xbef6,	// (0x0005cc58) linegrid_cams_pane

0x3e8f,	// (0x00054bf1) cell_cams_pane_ParamLimits

0x3e8f,	// (0x00054bf1) cell_cams_pane

0xb803,	// (0x0005c565) cams_burst_image_pane

0xbf42,	// (0x0005cca4) cell_cams_pane_g1

0xb803,	// (0x0005c565) grid_highlight_pane_cp03

0xbe93,	// (0x0005cbf5) mp_bg_pane_g1

0xb803,	// (0x0005c565) bg_list_pane_cp03

0xb803,	// (0x0005c565) bg_mp_pane

0xb803,	// (0x0005c565) grid_mp_pane

0xbf42,	// (0x0005cca4) media_player_g1

0xcc22,	// (0x0005d984) media_player_t1

0xcc22,	// (0x0005d984) media_player_t2

0xcc22,	// (0x0005d984) media_player_t3

0xcc22,	// (0x0005d984) media_player_t4

0xcc22,	// (0x0005d984) media_player_t5

0xcc22,	// (0x0005d984) media_player_t6

0xcc22,	// (0x0005d984) media_player_t7

0x0006,

0xf4ec,	// (0x0006024e) media_player_t

0xb803,	// (0x0005c565) wait_bar_pane_cp02

0xf4d1,	// (0x00060233) main_usb_pane_t

0xce99,	// (0x0005dbfb) cell_mp_pane

0xbe93,	// (0x0005cbf5) cell_mp_pane_g1

0xbc20,	// (0x0005c982) grid_highlight_pane_cp06

0xc729,	// (0x0005d48b) grid_skin_colour_pane

0xc731,	// (0x0005d493) list_highlight_pane_cp03

0x3ea4,	// (0x00054c06) skin_g1

0xc739,	// (0x0005d49b) skin_t1

0xc748,	// (0x0005d4aa) skin_t2

0x0001,

0xf1b0,	// (0x0005ff12) skin_t

0x3eae,	// (0x00054c10) cell_skin_colour_pane_ParamLimits

0x3eae,	// (0x00054c10) cell_skin_colour_pane

0xc756,	// (0x0005d4b8) cell_skin_colour_pane_g1

0x3f32,	// (0x00054c94) call_video_g1_ParamLimits

0x3f32,	// (0x00054c94) call_video_g1

0x3f42,	// (0x00054ca4) call_video_g2_ParamLimits

0x3f42,	// (0x00054ca4) call_video_g2

0x0001,

0xf1b5,	// (0x0005ff17) call_video_g_ParamLimits

0xf1b5,	// (0x0005ff17) call_video_g

0x3f9c,	// (0x00054cfe) call_video_uplink_pane_cp1_ParamLimits

0x3f9c,	// (0x00054cfe) call_video_uplink_pane_cp1

0xc768,	// (0x0005d4ca) call_video_uplink_pane_cp2

0x4068,	// (0x00054dca) video_down_crop_pane_ParamLimits

0x4068,	// (0x00054dca) video_down_crop_pane

0x415a,	// (0x00054ebc) video_down_pane_ParamLimits

0x415a,	// (0x00054ebc) video_down_pane

0xc770,	// (0x0005d4d2) video_down_subqcif_pane_ParamLimits

0xc770,	// (0x0005d4d2) video_down_subqcif_pane

0xc788,	// (0x0005d4ea) video_down_subqcif_pane_cp_ParamLimits

0xc788,	// (0x0005d4ea) video_down_subqcif_pane_cp

0xc7ae,	// (0x0005d510) im_reading_pane_ParamLimits

0xc7ae,	// (0x0005d510) im_reading_pane

0x427a,	// (0x00054fdc) im_writing_pane_ParamLimits

0x427a,	// (0x00054fdc) im_writing_pane

0x4298,	// (0x00054ffa) im_reading_pane_t1

0xc7c8,	// (0x0005d52a) list_im_pane

0xc7d9,	// (0x0005d53b) scroll_pane_cp07

0x42f0,	// (0x00055052) im_writing_pane_t1_ParamLimits

0x42f0,	// (0x00055052) im_writing_pane_t1

0xc824,	// (0x0005d586) im_writing_pane_t2_ParamLimits

0xc824,	// (0x0005d586) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0005ff21) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0005ff21) im_writing_pane_t

0xbc20,	// (0x0005c982) input_focus_pane_cp04

0xbc20,	// (0x0005c982) input_focus_pane_cp05

0x4302,	// (0x00055064) list_im_single_pane_ParamLimits

0x4302,	// (0x00055064) list_im_single_pane

0x4329,	// (0x0005508b) list_single_im_pane_t1

0xc707,	// (0x0005d469) blid_accuracy_pane

0xc707,	// (0x0005d469) blid_compass_pane

0xe3f9,	// (0x0005f15b) main_location_t1

0xe3f9,	// (0x0005f15b) main_location_t2

0xe3f9,	// (0x0005f15b) main_location_t3

0x0002,

0xf4fb,	// (0x0006025d) main_location_t

0xbc20,	// (0x0005c982) aid_levels_location

0xbe93,	// (0x0005cbf5) blid_accuracy_pane_g1

0xbe93,	// (0x0005cbf5) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x0005ff75) blid_accuracy_pane_g

0xc86c,	// (0x0005d5ce) wml_content_pane

0xc8aa,	// (0x0005d60c) wml_button_pane_ParamLimits

0xc8aa,	// (0x0005d60c) wml_button_pane

0x4338,	// (0x0005509a) wml_list_single_large_pane_ParamLimits

0x4338,	// (0x0005509a) wml_list_single_large_pane

0x4363,	// (0x000550c5) wml_list_single_medium_pane_ParamLimits

0x4363,	// (0x000550c5) wml_list_single_medium_pane

0x4395,	// (0x000550f7) wml_list_single_small_pane_ParamLimits

0x4395,	// (0x000550f7) wml_list_single_small_pane

0xc8be,	// (0x0005d620) wml_selection_box_pane_ParamLimits

0xc8be,	// (0x0005d620) wml_selection_box_pane

0xc8d1,	// (0x0005d633) wml_list_single_pane_t1

0xc8e0,	// (0x0005d642) wml_list_single_medium_pane_t1

0xc8ef,	// (0x0005d651) wml_list_single_large_pane_t1

0xc8fe,	// (0x0005d660) input_focus_pane_cp02_ParamLimits

0xc8fe,	// (0x0005d660) input_focus_pane_cp02

0xc911,	// (0x0005d673) wml_selection_box_pane_g1

0xc91a,	// (0x0005d67c) wml_selection_box_pane_t1_ParamLimits

0xc91a,	// (0x0005d67c) wml_selection_box_pane_t1

0xbe7b,	// (0x0005cbdd) bg_wml_button_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_wml_button_pane

0xc932,	// (0x0005d694) wml_button_pane_g1

0xc93a,	// (0x0005d69c) wml_button_pane_t1

0xc932,	// (0x0005d694) wml_button_bg_pane_g1

0xc94a,	// (0x0005d6ac) wml_button_bg_pane_g2

0xc952,	// (0x0005d6b4) wml_button_bg_pane_g3

0xc95a,	// (0x0005d6bc) wml_button_bg_pane_g4

0xc962,	// (0x0005d6c4) wml_button_bg_pane_g5

0xc96a,	// (0x0005d6cc) wml_button_bg_pane_g6

0xc972,	// (0x0005d6d4) wml_button_bg_pane_g7

0xc97a,	// (0x0005d6dc) wml_button_bg_pane_g8

0xc982,	// (0x0005d6e4) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0005ff26) wml_button_bg_pane_g

0x43d2,	// (0x00055134) bg_list_pane_cp02

0xc98a,	// (0x0005d6ec) mce_header_pane_ParamLimits

0xc98a,	// (0x0005d6ec) mce_header_pane

0xc9a0,	// (0x0005d702) mce_icon_pane

0xc9a0,	// (0x0005d702) mce_image_pane

0xc9a9,	// (0x0005d70b) mce_text_pane_ParamLimits

0xc9a9,	// (0x0005d70b) mce_text_pane

0x43dc,	// (0x0005513e) scroll_pane_cp03

0xc8a2,	// (0x0005d604) scroll_pane_cp04

0xc9bc,	// (0x0005d71e) scroll_pane_cp05_ParamLimits

0xc9bc,	// (0x0005d71e) scroll_pane_cp05

0x43e6,	// (0x00055148) mce_header_field_pane_ParamLimits

0x43e6,	// (0x00055148) mce_header_field_pane

0x4406,	// (0x00055168) mce_header_field_pane_2_ParamLimits

0x4406,	// (0x00055168) mce_header_field_pane_2

0x441c,	// (0x0005517e) mce_header_field_pane_3

0x4424,	// (0x00055186) list_single_mce_message_pane_ParamLimits

0x4424,	// (0x00055186) list_single_mce_message_pane

0x4452,	// (0x000551b4) list_single_mce_smart_pane_ParamLimits

0x4452,	// (0x000551b4) list_single_mce_smart_pane

0xc9c8,	// (0x0005d72a) input_focus_pane_cp03

0xc9d1,	// (0x0005d733) list_header_data_pane

0x448b,	// (0x000551ed) mce_header_field_pane_t1

0x4499,	// (0x000551fb) list_single_mce_header_pane_ParamLimits

0x4499,	// (0x000551fb) list_single_mce_header_pane

0xc9d9,	// (0x0005d73b) list_single_mce_header_pane_t1

0xc9e8,	// (0x0005d74a) list_single_mce_message_pane_g1

0xc9f0,	// (0x0005d752) list_single_mce_message_pane_t1

0x44ef,	// (0x00055251) bg_cale_heading_pane_cp01_ParamLimits

0x44ef,	// (0x00055251) bg_cale_heading_pane_cp01

0xc9fe,	// (0x0005d760) bg_cale_pane_cp02_ParamLimits

0xc9fe,	// (0x0005d760) bg_cale_pane_cp02

0x453d,	// (0x0005529f) cale_month_corner_pane

0x455c,	// (0x000552be) cale_month_day_heading_pane_ParamLimits

0x455c,	// (0x000552be) cale_month_day_heading_pane

0x45c2,	// (0x00055324) cale_month_pane_g1_ParamLimits

0x45c2,	// (0x00055324) cale_month_pane_g1

0x4605,	// (0x00055367) cale_month_pane_g2_ParamLimits

0x4605,	// (0x00055367) cale_month_pane_g2

0x463f,	// (0x000553a1) cale_month_pane_g3_ParamLimits

0x463f,	// (0x000553a1) cale_month_pane_g3

0x468f,	// (0x000553f1) cale_month_pane_g4_ParamLimits

0x468f,	// (0x000553f1) cale_month_pane_g4

0x46df,	// (0x00055441) cale_month_pane_g5_ParamLimits

0x46df,	// (0x00055441) cale_month_pane_g5

0x472f,	// (0x00055491) cale_month_pane_g6_ParamLimits

0x472f,	// (0x00055491) cale_month_pane_g6

0x477f,	// (0x000554e1) cale_month_pane_g7_ParamLimits

0x477f,	// (0x000554e1) cale_month_pane_g7

0x47e7,	// (0x00055549) cale_month_pane_g8_ParamLimits

0x47e7,	// (0x00055549) cale_month_pane_g8

0x484f,	// (0x000555b1) cale_month_pane_g9_ParamLimits

0x484f,	// (0x000555b1) cale_month_pane_g9

0x48ad,	// (0x0005560f) cale_month_pane_g10_ParamLimits

0x48ad,	// (0x0005560f) cale_month_pane_g10

0x490b,	// (0x0005566d) cale_month_pane_g11_ParamLimits

0x490b,	// (0x0005566d) cale_month_pane_g11

0x495f,	// (0x000556c1) cale_month_pane_g12_ParamLimits

0x495f,	// (0x000556c1) cale_month_pane_g12

0x49b5,	// (0x00055717) cale_month_pane_g13_ParamLimits

0x49b5,	// (0x00055717) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0005ff39) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0005ff39) cale_month_pane_g

0x4a0b,	// (0x0005576d) cale_month_week_pane

0x4a2f,	// (0x00055791) grid_cale_month_pane_ParamLimits

0x4a2f,	// (0x00055791) grid_cale_month_pane

0x4a8c,	// (0x000557ee) cale_month_day_heading_pane_t1

0x4b12,	// (0x00055874) cale_month_day_heading_pane_t2

0x4b8b,	// (0x000558ed) cale_month_day_heading_pane_t3

0x4c04,	// (0x00055966) cale_month_day_heading_pane_t4

0x4c7d,	// (0x000559df) cale_month_day_heading_pane_t5

0x4cf6,	// (0x00055a58) cale_month_day_heading_pane_t6

0x4d6f,	// (0x00055ad1) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0005ff54) cale_month_day_heading_pane_t

0xc6b5,	// (0x0005d417) bg_cale_side_pane_cp01

0x4e00,	// (0x00055b62) cale_month_week_pane_t1

0x4e19,	// (0x00055b7b) cale_month_week_pane_t2

0x4e32,	// (0x00055b94) cale_month_week_pane_t3

0x4e4b,	// (0x00055bad) cale_month_week_pane_t4

0x4e66,	// (0x00055bc8) cale_month_week_pane_t5

0x4e87,	// (0x00055be9) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0005ff63) cale_month_week_pane_t

0x4ea8,	// (0x00055c0a) cell_cale_month_pane_ParamLimits

0x4ea8,	// (0x00055c0a) cell_cale_month_pane

0x4fce,	// (0x00055d30) cell_cale_month_pane_g1

0x4fda,	// (0x00055d3c) cell_cale_month_pane_t1_ParamLimits

0x4fda,	// (0x00055d3c) cell_cale_month_pane_t1

0xc6c3,	// (0x0005d425) grid_highlight_pane_cp08

0xbe93,	// (0x0005cbf5) main_smil_g1

0x5006,	// (0x00055d68) smil_status_pane

0xca3d,	// (0x0005d79f) smil_text_pane

0xc647,	// (0x0005d3a9) bg_popup_call3_rect_pane_g8

0xc63f,	// (0x0005d3a1) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0005ff7a) bg_popup_call3_rect_pane_g

0xe4e3,	// (0x0005f245) smil_status_volume_pane_g1

0xca47,	// (0x0005d7a9) smil_status_pane_t1

0x60fb,	// (0x00056e5d) volume_smil_pane

0xca5e,	// (0x0005d7c0) list_smil_text_pane

0x5019,	// (0x00055d7b) scroll_pane_cp011

0x5024,	// (0x00055d86) smil_text_list_pane_t1_ParamLimits

0x5024,	// (0x00055d86) smil_text_list_pane_t1

0x50b1,	// (0x00055e13) aid_volume_smil_ParamLimits

0x50b1,	// (0x00055e13) aid_volume_smil

0xbe93,	// (0x0005cbf5) smil_volume_pane_g1

0xbe93,	// (0x0005cbf5) smil_volume_pane_g2

0x0001,

0xf213,	// (0x0005ff75) smil_volume_pane_g

0x387d,	// (0x000545df) listscroll_cale_day_pane

0xca68,	// (0x0005d7ca) bg_cale_pane

0xca80,	// (0x0005d7e2) list_cale_pane

0xcaa3,	// (0x0005d805) scroll_pane_cp09

0xc617,	// (0x0005d379) cale_bg_pane_g1

0xc60f,	// (0x0005d371) cale_bg_pane_g2

0xc607,	// (0x0005d369) cale_bg_pane_g3

0xc627,	// (0x0005d389) cale_bg_pane_g4

0xc61f,	// (0x0005d381) cale_bg_pane_g5

0xc62f,	// (0x0005d391) cale_bg_pane_g6

0xc637,	// (0x0005d399) cale_bg_pane_g7

0xc647,	// (0x0005d3a9) cale_bg_pane_g8

0xc63f,	// (0x0005d3a1) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0005ff7a) cale_bg_pane_g

0x50db,	// (0x00055e3d) list_cale_time_pane_ParamLimits

0x50db,	// (0x00055e3d) list_cale_time_pane

0xcab4,	// (0x0005d816) list_cale_time_pane_g1_ParamLimits

0xcab4,	// (0x0005d816) list_cale_time_pane_g1

0xcac0,	// (0x0005d822) list_cale_time_pane_g2_ParamLimits

0xcac0,	// (0x0005d822) list_cale_time_pane_g2

0x5103,	// (0x00055e65) list_cale_time_pane_g3_ParamLimits

0x5103,	// (0x00055e65) list_cale_time_pane_g3

0x5111,	// (0x00055e73) list_cale_time_pane_g4_ParamLimits

0x5111,	// (0x00055e73) list_cale_time_pane_g4

0x511f,	// (0x00055e81) list_cale_time_pane_g5_ParamLimits

0x511f,	// (0x00055e81) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x0005ff8d) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x0005ff8d) list_cale_time_pane_g

0xcada,	// (0x0005d83c) list_cale_time_pane_t1_ParamLimits

0xcada,	// (0x0005d83c) list_cale_time_pane_t1

0xcb02,	// (0x0005d864) list_cale_time_pane_t2_ParamLimits

0xcb02,	// (0x0005d864) list_cale_time_pane_t2

0x53f3,	// (0x00056155) aid_blid_cardinal_pane

0x5435,	// (0x00056197) compass_pane_t4

0xcb2a,	// (0x0005d88c) list_cale_time_pane_t4_ParamLimits

0xcb2a,	// (0x0005d88c) list_cale_time_pane_t4

0x5443,	// (0x000561a5) compass_pane_t5

0x5453,	// (0x000561b5) compass_pane_t6

0x5461,	// (0x000561c3) compass_pane_t7

0xcfb3,	// (0x0005dd15) navi_pane_cc_t1

0xd190,	// (0x0005def2) aid_phob_thumbnail_center_pane

0x5898,	// (0x000565fa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0005ff9a) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0005ff9a) list_cale_time_pane_t

0xb877,	// (0x0005c5d9) bg_popup_window_pane_cp02_ParamLimits

0xb877,	// (0x0005c5d9) bg_popup_window_pane_cp02

0xcb52,	// (0x0005d8b4) heading_pane_cp01_ParamLimits

0xcb52,	// (0x0005d8b4) heading_pane_cp01

0xcb5e,	// (0x0005d8c0) loc_req_pane_ParamLimits

0xcb5e,	// (0x0005d8c0) loc_req_pane

0xcb70,	// (0x0005d8d2) loc_type_pane_ParamLimits

0xcb70,	// (0x0005d8d2) loc_type_pane

0xcb82,	// (0x0005d8e4) loc_type_pane_t1_ParamLimits

0xcb82,	// (0x0005d8e4) loc_type_pane_t1

0xcb94,	// (0x0005d8f6) loc_type_pane_t2_ParamLimits

0xcb94,	// (0x0005d8f6) loc_type_pane_t2

0xcba6,	// (0x0005d908) loc_type_pane_t3_ParamLimits

0xcba6,	// (0x0005d908) loc_type_pane_t3

0x0002,

0xf23f,	// (0x0005ffa1) loc_type_pane_t_ParamLimits

0xf23f,	// (0x0005ffa1) loc_type_pane_t

0xcbb8,	// (0x0005d91a) list_loc_req_pane

0xcbc2,	// (0x0005d924) scroll_pane_cp012

0x512d,	// (0x00055e8f) list_single_loc_request_popup_menu_pane_ParamLimits

0x512d,	// (0x00055e8f) list_single_loc_request_popup_menu_pane

0xcbcd,	// (0x0005d92f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbcd,	// (0x0005d92f) list_single_loc_request_popup_menu_pane_g1

0xcbd9,	// (0x0005d93b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbd9,	// (0x0005d93b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0005ffa8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0005ffa8) list_single_loc_request_popup_menu_pane_g

0xcbe5,	// (0x0005d947) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbe5,	// (0x0005d947) list_single_loc_request_popup_menu_pane_t1

0x5146,	// (0x00055ea8) bg_popup_window_pane_cp03_ParamLimits

0x5146,	// (0x00055ea8) bg_popup_window_pane_cp03

0x5154,	// (0x00055eb6) heading_loc_req_pane_ParamLimits

0x5154,	// (0x00055eb6) heading_loc_req_pane

0x5160,	// (0x00055ec2) popup_dyc_status_message_window_g1_ParamLimits

0x5160,	// (0x00055ec2) popup_dyc_status_message_window_g1

0x516c,	// (0x00055ece) popup_dyc_status_message_window_t1_ParamLimits

0x516c,	// (0x00055ece) popup_dyc_status_message_window_t1

0x517e,	// (0x00055ee0) popup_dyc_status_message_window_t2_ParamLimits

0x517e,	// (0x00055ee0) popup_dyc_status_message_window_t2

0x5190,	// (0x00055ef2) popup_dyc_status_message_window_t3_ParamLimits

0x5190,	// (0x00055ef2) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x0005ffad) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x0005ffad) popup_dyc_status_message_window_t

0xbc20,	// (0x0005c982) bg_heading_pane_cp01

0xcbfb,	// (0x0005d95d) heading_loc_req_pane_g1

0xcc03,	// (0x0005d965) heading_loc_req_pane_g2

0xcc0b,	// (0x0005d96d) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x0005ffb4) heading_loc_req_pane_g

0xcc13,	// (0x0005d975) heading_loc_req_pane_t1

0xcc32,	// (0x0005d994) bg_popup_sub_pane_cp01_ParamLimits

0xcc32,	// (0x0005d994) bg_popup_sub_pane_cp01

0xcc4c,	// (0x0005d9ae) popup_cale_events_window_g1_ParamLimits

0xcc4c,	// (0x0005d9ae) popup_cale_events_window_g1

0xcc6c,	// (0x0005d9ce) popup_cale_events_window_g2_ParamLimits

0xcc6c,	// (0x0005d9ce) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x0005ffd6) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x0005ffd6) popup_cale_events_window_g

0xcc8c,	// (0x0005d9ee) popup_cale_events_window_t1_ParamLimits

0xcc8c,	// (0x0005d9ee) popup_cale_events_window_t1

0xcc9e,	// (0x0005da00) popup_cale_events_window_t2_ParamLimits

0xcc9e,	// (0x0005da00) popup_cale_events_window_t2

0xccdc,	// (0x0005da3e) popup_cale_events_window_t3_ParamLimits

0xccdc,	// (0x0005da3e) popup_cale_events_window_t3

0xcd16,	// (0x0005da78) popup_cale_events_window_t4_ParamLimits

0xcd16,	// (0x0005da78) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0005ffdb) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0005ffdb) popup_cale_events_window_t

0x51ba,	// (0x00055f1c) call_type_pane

0xdae0,	// (0x0005e842) popup_call_status_window_g1

0x51c6,	// (0x00055f28) popup_call_status_window_g2

0x51d2,	// (0x00055f34) popup_call_status_window_g3

0x0002,

0xf282,	// (0x0005ffe4) popup_call_status_window_g

0xcd4c,	// (0x0005daae) call_type_pane_g1

0xcd55,	// (0x0005dab7) call_type_pane_g2

0x0001,

0xf289,	// (0x0005ffeb) call_type_pane_g

0xbc20,	// (0x0005c982) bg_popup_sub_pane_cp02

0xcd5e,	// (0x0005dac0) listscroll_popup_wml_pane

0xcd66,	// (0x0005dac8) list_wml_pane

0xcd70,	// (0x0005dad2) scroll_pane_cp013

0xcd7b,	// (0x0005dadd) list_single_graphic_popup_wml_pane_ParamLimits

0xcd7b,	// (0x0005dadd) list_single_graphic_popup_wml_pane

0xbe93,	// (0x0005cbf5) list_single_graphic_popup_wml_pane_g1

0xcd8f,	// (0x0005daf1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x0005fff0) list_single_graphic_popup_wml_pane_g

0xcd97,	// (0x0005daf9) list_single_graphic_popup_wml_pane_t1

0xcdad,	// (0x0005db0f) aid_call_pane

0xbe73,	// (0x0005cbd5) popup_clock_analogue_window_g1

0xbe73,	// (0x0005cbd5) popup_clock_analogue_window_g2

0x51de,	// (0x00055f40) popup_clock_analogue_window_g3

0x51de,	// (0x00055f40) popup_clock_analogue_window_g4

0xbe93,	// (0x0005cbf5) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x0005fff5) popup_clock_analogue_window_g

0x51e6,	// (0x00055f48) popup_clock_analogue_window_t1

0x51f4,	// (0x00055f56) clock_digital_number_pane_ParamLimits

0x51f4,	// (0x00055f56) clock_digital_number_pane

0x5200,	// (0x00055f62) clock_digital_number_pane_cp02_ParamLimits

0x5200,	// (0x00055f62) clock_digital_number_pane_cp02

0x520c,	// (0x00055f6e) clock_digital_number_pane_cp03_ParamLimits

0x520c,	// (0x00055f6e) clock_digital_number_pane_cp03

0x5218,	// (0x00055f7a) clock_digital_number_pane_cp04_ParamLimits

0x5218,	// (0x00055f7a) clock_digital_number_pane_cp04

0x5224,	// (0x00055f86) clock_digital_separator_pane_ParamLimits

0x5224,	// (0x00055f86) clock_digital_separator_pane

0x5230,	// (0x00055f92) popup_clock_digital_window_t1

0xbe93,	// (0x0005cbf5) clock_digital_number_pane_g1

0xbe93,	// (0x0005cbf5) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x0005ff75) clock_digital_number_pane_g

0xbe93,	// (0x0005cbf5) clock_digital_separator_pane_g1

0xbe93,	// (0x0005cbf5) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x0005ff75) clock_digital_separator_pane_g

0xbc20,	// (0x0005c982) bg_popup_window_pane_cp04

0xcdb5,	// (0x0005db17) heading_pane_cp03

0xc707,	// (0x0005d469) listscroll_popup_gms_pane

0xbc20,	// (0x0005c982) grid_large_graphic_popup_pane

0xcdbd,	// (0x0005db1f) listscroll_popup_gms_pane_g1

0xcdc6,	// (0x0005db28) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00060000) listscroll_popup_gms_pane_g

0xcdcf,	// (0x0005db31) scroll_pane_cp014

0xbef6,	// (0x0005cc58) cell_large_graphic_popup_pane_ParamLimits

0xbef6,	// (0x0005cc58) cell_large_graphic_popup_pane

0xbf04,	// (0x0005cc66) cell_large_graphic_popup_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_large_graphic_popup_pane_g1

0xcdd8,	// (0x0005db3a) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdd8,	// (0x0005db3a) cell_large_graphic_popup_pane_g2

0xcde6,	// (0x0005db48) cell_large_graphic_popup_pane_g3_ParamLimits

0xcde6,	// (0x0005db48) cell_large_graphic_popup_pane_g3

0xcdf4,	// (0x0005db56) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdf4,	// (0x0005db56) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00060005) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00060005) cell_large_graphic_popup_pane_g

0xbc20,	// (0x0005c982) grid_highlight_pane_cp010

0xbe93,	// (0x0005cbf5) bg_popup_call_pane_g1

0xce05,	// (0x0005db67) list_single_graphic_popup_conf_pane_ParamLimits

0xce05,	// (0x0005db67) list_single_graphic_popup_conf_pane

0xce18,	// (0x0005db7a) list_highlight_pane_cp01

0xce21,	// (0x0005db83) list_single_graphic_popup_conf_pane_g1

0xce29,	// (0x0005db8b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x0006000e) list_single_graphic_popup_conf_pane_g

0xce31,	// (0x0005db93) list_single_graphic_popup_conf_pane_t1

0xce3f,	// (0x0005dba1) linegrid_cams_pane_g1

0x524d,	// (0x00055faf) linegrid_cams_pane_g2

0xc64f,	// (0x0005d3b1) linegrid_cams_pane_g3

0xce48,	// (0x0005dbaa) linegrid_cams_pane_g4

0x5256,	// (0x00055fb8) linegrid_cams_pane_g5

0x525f,	// (0x00055fc1) linegrid_cams_pane_g6

0xc6f6,	// (0x0005d458) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00060013) linegrid_cams_pane_g

0xce51,	// (0x0005dbb3) popup_clock_analogue_window

0xce51,	// (0x0005dbb3) popup_clock_digital_window

0xbc20,	// (0x0005c982) popup_phob_thumbnail_window

0xbe93,	// (0x0005cbf5) call_video_uplink_pane_g1

0xce5a,	// (0x0005dbbc) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00060022) call_video_uplink_pane_g

0xce62,	// (0x0005dbc4) video_uplink_pane

0xce6a,	// (0x0005dbcc) mce_image_pane_g1

0x5268,	// (0x00055fca) mce_image_pane_g2

0x5270,	// (0x00055fd2) mce_image_pane_g3

0x5278,	// (0x00055fda) mce_image_pane_g4

0x5280,	// (0x00055fe2) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00060027) mce_image_pane_g

0xce74,	// (0x0005dbd6) control_top_pane_stacon_cp01_ParamLimits

0xce74,	// (0x0005dbd6) control_top_pane_stacon_cp01

0xce88,	// (0x0005dbea) uni_indicator_pane_stacon_cp01_ParamLimits

0xce88,	// (0x0005dbea) uni_indicator_pane_stacon_cp01

0xce99,	// (0x0005dbfb) bg_popup_sub_pane_cp03

0x5288,	// (0x00055fea) chi_dic_find_pane

0x5290,	// (0x00055ff2) listscroll_chi_dic_pane

0x5299,	// (0x00055ffb) main_pane_chidic_g1

0x52ac,	// (0x0005600e) chi_dic_find_pane_t1

0xcea3,	// (0x0005dc05) find_chidic_pane

0xceac,	// (0x0005dc0e) chi_dic_list_pane_ParamLimits

0xceac,	// (0x0005dc0e) chi_dic_list_pane

0xcebd,	// (0x0005dc1f) scroll_pane_cp020

0x52ba,	// (0x0005601c) find_chidic_pane_t1

0xbc20,	// (0x0005c982) input_focus_pane_cp06

0x52c9,	// (0x0005602b) list_chi_dic_pane_ParamLimits

0x52c9,	// (0x0005602b) list_chi_dic_pane

0x52e6,	// (0x00056048) list_chi_dic_pane_t1_ParamLimits

0x52e6,	// (0x00056048) list_chi_dic_pane_t1

0xbc20,	// (0x0005c982) list_highlight_pane_cp020

0xcec5,	// (0x0005dc27) bg_cale_heading_pane_g1

0x52f9,	// (0x0005605b) bg_cale_heading_pane_g2

0x5301,	// (0x00056063) bg_cale_heading_pane_g3

0x5309,	// (0x0005606b) bg_cale_heading_pane_g4

0x5313,	// (0x00056075) bg_cale_heading_pane_g5

0x531d,	// (0x0005607f) bg_cale_heading_pane_g6

0x5325,	// (0x00056087) bg_cale_heading_pane_g7

0x532d,	// (0x0005608f) bg_cale_heading_pane_g8

0x5337,	// (0x00056099) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00060032) bg_cale_heading_pane_g

0xcec5,	// (0x0005dc27) bg_cale_side_pane_g1

0x5341,	// (0x000560a3) bg_cale_side_pane_g2

0x534b,	// (0x000560ad) bg_cale_side_pane_g3

0x5355,	// (0x000560b7) bg_cale_side_pane_g4

0x535f,	// (0x000560c1) bg_cale_side_pane_g5

0x5369,	// (0x000560cb) bg_cale_side_pane_g6

0x5373,	// (0x000560d5) bg_cale_side_pane_g7

0x537d,	// (0x000560df) bg_cale_side_pane_g8

0x5385,	// (0x000560e7) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00060045) bg_cale_side_pane_g

0x538d,	// (0x000560ef) popup_call_status_window_ParamLimits

0x538d,	// (0x000560ef) popup_call_status_window

0xcecd,	// (0x0005dc2f) stacon_top_pane

0xced5,	// (0x0005dc37) status_pane_ParamLimits

0xced5,	// (0x0005dc37) status_pane

0xceea,	// (0x0005dc4c) status_small_pane

0xcef2,	// (0x0005dc54) control_pane

0xbc20,	// (0x0005c982) stacon_bottom_pane

0xcefa,	// (0x0005dc5c) list_single_mce_smart_pane_t1_ParamLimits

0xcefa,	// (0x0005dc5c) list_single_mce_smart_pane_t1

0xcf0d,	// (0x0005dc6f) list_single_mce_smart_pane_t2_ParamLimits

0xcf0d,	// (0x0005dc6f) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00060058) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00060058) list_single_mce_smart_pane_t

0x5399,	// (0x000560fb) compass_pane

0x53a5,	// (0x00056107) main_location2_pane_t1

0x53b9,	// (0x0005611b) main_location2_pane_t2

0x53cd,	// (0x0005612f) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x0006005d) main_location2_pane_t

0xcf2c,	// (0x0005dc8e) compass_pane_g1_ParamLimits

0xcf2c,	// (0x0005dc8e) compass_pane_g1

0x5417,	// (0x00056179) compass_pane_t1

0x5426,	// (0x00056188) compass_pane_t2

0x0005,

0xf304,	// (0x00060066) compass_pane_t

0x5471,	// (0x000561d3) text_secondary_cp61

0xcfaa,	// (0x0005dd0c) navi_pane_cams_g5

0xd026,	// (0x0005dd88) navi_pane_im_t1

0xd034,	// (0x0005dd96) navi_pane_mp_g1_ParamLimits

0xd034,	// (0x0005dd96) navi_pane_mp_g1

0xd048,	// (0x0005ddaa) navi_pane_mp_g2_ParamLimits

0xd048,	// (0x0005ddaa) navi_pane_mp_g2

0xd054,	// (0x0005ddb6) navi_pane_mp_g3_ParamLimits

0xd054,	// (0x0005ddb6) navi_pane_mp_g3

0x0002,

0xf318,	// (0x0006007a) navi_pane_mp_g_ParamLimits

0xf318,	// (0x0006007a) navi_pane_mp_g

0xd060,	// (0x0005ddc2) navi_pane_mp_t1

0xd06e,	// (0x0005ddd0) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00060081) navi_pane_mp_t

0xd0d9,	// (0x0005de3b) navi_pane_vt_g1

0xd060,	// (0x0005ddc2) navi_pane_vt_t1

0xd0e1,	// (0x0005de43) navi_slider_pane

0xc707,	// (0x0005d469) zooming_pane

0xd0f1,	// (0x0005de53) navi_slider_pane_g1

0x54ac,	// (0x0005620e) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00060088) navi_slider_pane_g

0xd115,	// (0x0005de77) aid_levels_zoom

0xd11d,	// (0x0005de7f) zooming_pane_g1

0xd125,	// (0x0005de87) zooming_pane_g2

0xd125,	// (0x0005de87) zooming_pane_g3

0x0002,

0xf335,	// (0x00060097) zooming_pane_g

0xd12d,	// (0x0005de8f) level_10_zoom

0xd136,	// (0x0005de98) level_11_zoom

0xd13f,	// (0x0005dea1) level_1_zoom

0xd148,	// (0x0005deaa) level_2_zoom

0xd151,	// (0x0005deb3) level_3_zoom

0xd15a,	// (0x0005debc) level_4_zoom

0xd163,	// (0x0005dec5) level_5_zoom

0xd16c,	// (0x0005dece) level_6_zoom

0xd175,	// (0x0005ded7) level_7_zoom

0xd17e,	// (0x0005dee0) level_8_zoom

0xd187,	// (0x0005dee9) level_9_zoom

0xd198,	// (0x0005defa) popup_phob_thumbnail_window_g1

0xd1a0,	// (0x0005df02) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x0006009e) popup_phob_thumbnail_window_g

0x5daa,	// (0x00056b0c) level_1_location

0x5db2,	// (0x00056b14) level_2_location

0x5dba,	// (0x00056b1c) level_3_location

0x5dc4,	// (0x00056b26) level_4_location

0xc707,	// (0x0005d469) level_5_location

0x54be,	// (0x00056220) mce_icon_pane_g1

0x54c6,	// (0x00056228) mce_icon_pane_g2

0x0001,

0xf341,	// (0x000600a3) mce_icon_pane_g

0x54ce,	// (0x00056230) main_mup_pane_g1_ParamLimits

0x54ce,	// (0x00056230) main_mup_pane_g1

0xbf20,	// (0x0005cc82) main_mup_pane_g2_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g2

0xbf20,	// (0x0005cc82) main_mup_pane_g3_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g3

0xbf20,	// (0x0005cc82) main_mup_pane_g4_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g4

0xbf20,	// (0x0005cc82) main_mup_pane_g5_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g5

0xbf20,	// (0x0005cc82) main_mup_pane_g6_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g6

0xbf20,	// (0x0005cc82) main_mup_pane_g7_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g7

0xbf20,	// (0x0005cc82) main_mup_pane_g8_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g8

0xbf20,	// (0x0005cc82) main_mup_pane_g9_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g9

0xbf20,	// (0x0005cc82) main_mup_pane_g10_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g10

0xbf20,	// (0x0005cc82) main_mup_pane_g11_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g11

0xbf12,	// (0x0005cc74) main_mup_pane_g12_ParamLimits

0xbf12,	// (0x0005cc74) main_mup_pane_g12

0xbf20,	// (0x0005cc82) main_mup_pane_g13_ParamLimits

0xbf20,	// (0x0005cc82) main_mup_pane_g13

0x000c,

0xf346,	// (0x000600a8) main_mup_pane_g_ParamLimits

0xf346,	// (0x000600a8) main_mup_pane_g

0xbf2e,	// (0x0005cc90) main_mup_pane_t1_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup_pane_t1

0xbf2e,	// (0x0005cc90) main_mup_pane_t2_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup_pane_t2

0xbf2e,	// (0x0005cc90) main_mup_pane_t3_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup_pane_t3

0xbf60,	// (0x0005ccc2) main_mup_pane_t4_ParamLimits

0xbf60,	// (0x0005ccc2) main_mup_pane_t4

0xbf60,	// (0x0005ccc2) main_mup_pane_t5_ParamLimits

0xbf60,	// (0x0005ccc2) main_mup_pane_t5

0xbf4c,	// (0x0005ccae) main_mup_pane_t6_ParamLimits

0xbf4c,	// (0x0005ccae) main_mup_pane_t6

0x0005,

0xf361,	// (0x000600c3) main_mup_pane_t_ParamLimits

0xf361,	// (0x000600c3) main_mup_pane_t

0xbe9d,	// (0x0005cbff) mup_progress_pane_ParamLimits

0xbe9d,	// (0x0005cbff) mup_progress_pane

0xe4d5,	// (0x0005f237) mup_visualizer_pane_ParamLimits

0xe4d5,	// (0x0005f237) mup_visualizer_pane

0xe4d5,	// (0x0005f237) mup_volume_pane_ParamLimits

0xe4d5,	// (0x0005f237) mup_volume_pane

0xbf12,	// (0x0005cc74) mup_visualizer_pane_g1_ParamLimits

0xbf12,	// (0x0005cc74) mup_visualizer_pane_g1

0xd1a8,	// (0x0005df0a) mup_visualizer_pane_g2_ParamLimits

0xd1a8,	// (0x0005df0a) mup_visualizer_pane_g2

0xbf04,	// (0x0005cc66) mup_visualizer_pane_g3_ParamLimits

0xbf04,	// (0x0005cc66) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x000600d0) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x000600d0) mup_visualizer_pane_g

0xbf42,	// (0x0005cca4) mup_volume_pane_g1

0xbf42,	// (0x0005cca4) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) mup_volume_pane_g

0xbf42,	// (0x0005cca4) mup_progress_pane_g1

0xbf42,	// (0x0005cca4) mup_progress_pane_g2

0xbf42,	// (0x0005cca4) mup_progress_pane_g3

0x0002,

0xf375,	// (0x000600d7) mup_progress_pane_g

0xbc20,	// (0x0005c982) bg_popup_window_pane_cp05

0xd1b6,	// (0x0005df18) heading_pane_cp02_ParamLimits

0xd1b6,	// (0x0005df18) heading_pane_cp02

0xd1d0,	// (0x0005df32) list_popup_blid_pane

0xd1d8,	// (0x0005df3a) list_blid_sat_info_pane_ParamLimits

0xd1d8,	// (0x0005df3a) list_blid_sat_info_pane

0xd1eb,	// (0x0005df4d) list_blid_sat_info_pane_g1

0xd1f3,	// (0x0005df55) list_blid_sat_info_pane_t1

0x55c9,	// (0x0005632b) mup_equalizer_pane_ParamLimits

0x55c9,	// (0x0005632b) mup_equalizer_pane

0x55ea,	// (0x0005634c) mup_equalizer_pane_cp1_ParamLimits

0x55ea,	// (0x0005634c) mup_equalizer_pane_cp1

0x560b,	// (0x0005636d) mup_equalizer_pane_cp2_ParamLimits

0x560b,	// (0x0005636d) mup_equalizer_pane_cp2

0x562c,	// (0x0005638e) mup_equalizer_pane_cp3_ParamLimits

0x562c,	// (0x0005638e) mup_equalizer_pane_cp3

0x564d,	// (0x000563af) mup_equalizer_pane_cp4_ParamLimits

0x564d,	// (0x000563af) mup_equalizer_pane_cp4

0x566e,	// (0x000563d0) mup_equalizer_pane_cp5

0x5684,	// (0x000563e6) mup_equalizer_pane_cp6

0x569c,	// (0x000563fe) mup_equalizer_pane_cp7

0xe359,	// (0x0005f0bb) bg_popup_call_poc_act_pane_g9

0xe361,	// (0x0005f0c3) bg_popup_call_poc_act_pane_g10

0xe369,	// (0x0005f0cb) bg_popup_call_poc_act_pane_g11

0x000a,

0xbe7b,	// (0x0005cbdd) mup_scale_pane

0xbe93,	// (0x0005cbf5) mup_scale_pane_g1

0xd201,	// (0x0005df63) mup_scale_pane_g2

0x0006,

0xf391,	// (0x000600f3) mup_scale_pane_g

0xd225,	// (0x0005df87) msg_data_pane

0xd22d,	// (0x0005df8f) scroll_pane_cp017

0x56c6,	// (0x00056428) bg_list_pane_cp04_ParamLimits

0x56c6,	// (0x00056428) bg_list_pane_cp04

0xd23d,	// (0x0005df9f) msg_data_pane_g1

0x56de,	// (0x00056440) msg_data_pane_g2

0x56e6,	// (0x00056448) msg_data_pane_g3

0x56ee,	// (0x00056450) msg_data_pane_g4

0x56f6,	// (0x00056458) msg_data_pane_g5

0x56fe,	// (0x00056460) msg_data_pane_g6

0x5706,	// (0x00056468) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00060102) msg_data_pane_g

0x570e,	// (0x00056470) msg_text_pane_ParamLimits

0x570e,	// (0x00056470) msg_text_pane

0x577a,	// (0x000564dc) qrid_highlight_pane_cp011_ParamLimits

0x577a,	// (0x000564dc) qrid_highlight_pane_cp011

0xbc20,	// (0x0005c982) msg_body_pane

0xbe7b,	// (0x0005cbdd) msg_header_pane

0xd259,	// (0x0005dfbb) input_focus_pane_cp07

0xd2aa,	// (0x0005e00c) msg_header_pane_t1_ParamLimits

0xd2aa,	// (0x0005e00c) msg_header_pane_t1

0xd2c6,	// (0x0005e028) msg_header_pane_t2_ParamLimits

0xd2c6,	// (0x0005e028) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00060116) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00060116) msg_header_pane_t

0xd2e6,	// (0x0005e048) msg_body_pane_g1

0xd2ee,	// (0x0005e050) msg_body_pane_t1_ParamLimits

0xd2ee,	// (0x0005e050) msg_body_pane_t1

0xd31f,	// (0x0005e081) msg_body_pane_t2_ParamLimits

0xd31f,	// (0x0005e081) msg_body_pane_t2

0xd331,	// (0x0005e093) msg_body_pane_t3_ParamLimits

0xd331,	// (0x0005e093) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0006011b) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0006011b) msg_body_pane_t

0x57f4,	// (0x00056556) main_viewer_pane_g1_ParamLimits

0x57f4,	// (0x00056556) main_viewer_pane_g1

0x5800,	// (0x00056562) main_viewer_pane_g2_ParamLimits

0x5800,	// (0x00056562) main_viewer_pane_g2

0x580c,	// (0x0005656e) main_viewer_pane_g3_ParamLimits

0x580c,	// (0x0005656e) main_viewer_pane_g3

0x581d,	// (0x0005657f) main_viewer_pane_g4_ParamLimits

0x581d,	// (0x0005657f) main_viewer_pane_g4

0x582e,	// (0x00056590) main_viewer_pane_g5_ParamLimits

0x582e,	// (0x00056590) main_viewer_pane_g5

0x582e,	// (0x00056590) main_viewer_pane_g7_ParamLimits

0x582e,	// (0x00056590) main_viewer_pane_g7

0xcbcd,	// (0x0005d92f) main_viewer_pane_g8_ParamLimits

0xcbcd,	// (0x0005d92f) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0006012b) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0006012b) main_viewer_pane_g

0xd343,	// (0x0005e0a5) viewer_content_pane_ParamLimits

0xd343,	// (0x0005e0a5) viewer_content_pane

0x586c,	// (0x000565ce) main_postcard_pane_g1_ParamLimits

0x586c,	// (0x000565ce) main_postcard_pane_g1

0x587a,	// (0x000565dc) main_postcard_pane_g2_ParamLimits

0x587a,	// (0x000565dc) main_postcard_pane_g2

0x5888,	// (0x000565ea) main_postcard_pane_g3_ParamLimits

0x5888,	// (0x000565ea) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0006013c) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0006013c) main_postcard_pane_g

0x5898,	// (0x000565fa) main_postcard_pane_g4

0xe4c2,	// (0x0005f224) smil_status_volume_pane_g2

0x58c4,	// (0x00056626) postcard_pane_ParamLimits

0x58c4,	// (0x00056626) postcard_pane

0xdae0,	// (0x0005e842) postcard_pane_g1_ParamLimits

0xdae0,	// (0x0005e842) postcard_pane_g1

0x58f6,	// (0x00056658) postcard_pane_g2_ParamLimits

0x58f6,	// (0x00056658) postcard_pane_g2

0x5902,	// (0x00056664) postcard_pane_g3_ParamLimits

0x5902,	// (0x00056664) postcard_pane_g3

0xd351,	// (0x0005e0b3) postcard_pane_g4_ParamLimits

0xd351,	// (0x0005e0b3) postcard_pane_g4

0x590e,	// (0x00056670) postcard_pane_g5_ParamLimits

0x590e,	// (0x00056670) postcard_pane_g5

0x591a,	// (0x0005667c) postcard_pane_g6_ParamLimits

0x591a,	// (0x0005667c) postcard_pane_g6

0xd35f,	// (0x0005e0c1) postcard_pane_g7_ParamLimits

0xd35f,	// (0x0005e0c1) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00060149) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00060149) postcard_pane_g

0x5926,	// (0x00056688) main_mp2_pane_g1_ParamLimits

0x5926,	// (0x00056688) main_mp2_pane_g1

0x5932,	// (0x00056694) main_mp2_pane_g2_ParamLimits

0x5932,	// (0x00056694) main_mp2_pane_g2

0x593e,	// (0x000566a0) main_mp2_pane_g3_ParamLimits

0x593e,	// (0x000566a0) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00060158) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00060158) main_mp2_pane_g

0x594a,	// (0x000566ac) main_mp2_pane_t1_ParamLimits

0x594a,	// (0x000566ac) main_mp2_pane_t1

0x5961,	// (0x000566c3) main_mp2_pane_t2_ParamLimits

0x5961,	// (0x000566c3) main_mp2_pane_t2

0x5973,	// (0x000566d5) main_mp2_pane_t3_ParamLimits

0x5973,	// (0x000566d5) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x0006015f) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x0006015f) main_mp2_pane_t

0xbe9d,	// (0x0005cbff) pec_content_pane_ParamLimits

0xbe9d,	// (0x0005cbff) pec_content_pane

0xb803,	// (0x0005c565) scroll_pane_cp015

0xd26e,	// (0x0005dfd0) pec_attribute_pane_ParamLimits

0xd26e,	// (0x0005dfd0) pec_attribute_pane

0xbf04,	// (0x0005cc66) pec_content_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) pec_content_pane_g1

0xd36d,	// (0x0005e0cf) pec_content_pane_t1_ParamLimits

0xd36d,	// (0x0005e0cf) pec_content_pane_t1

0xd381,	// (0x0005e0e3) pec_content_pane_t2_ParamLimits

0xd381,	// (0x0005e0e3) pec_content_pane_t2

0x0001,

0xf404,	// (0x00060166) pec_content_pane_t_ParamLimits

0xf404,	// (0x00060166) pec_content_pane_t

0xbef6,	// (0x0005cc58) list_single_graphic_pane_cp01_ParamLimits

0xbef6,	// (0x0005cc58) list_single_graphic_pane_cp01

0xbe7b,	// (0x0005cbdd) bg_popup_sub_pane_cp04

0xd395,	// (0x0005e0f7) popup_mup_playback_window_g1

0xd3a1,	// (0x0005e103) popup_mup_playback_window_t1

0xd3b6,	// (0x0005e118) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x0006016b) popup_mup_playback_window_t

0xd3ed,	// (0x0005e14f) main_image_pane_g1_ParamLimits

0xd3ed,	// (0x0005e14f) main_image_pane_g1

0xd430,	// (0x0005e192) scroll_pane_cp018_ParamLimits

0xd430,	// (0x0005e192) scroll_pane_cp018

0xd448,	// (0x0005e1aa) scroll_pane_cp016_ParamLimits

0xd448,	// (0x0005e1aa) scroll_pane_cp016

0x59f6,	// (0x00056758) smil2_image_pane_ParamLimits

0x59f6,	// (0x00056758) smil2_image_pane

0x5a26,	// (0x00056788) smil2_root_pane_ParamLimits

0x5a26,	// (0x00056788) smil2_root_pane

0x5a52,	// (0x000567b4) smil2_text_pane_ParamLimits

0x5a52,	// (0x000567b4) smil2_text_pane

0xb803,	// (0x0005c565) bg_list_pane_cp06

0xb803,	// (0x0005c565) grid_radio_pane

0xbc20,	// (0x0005c982) bg_popup_window_pane_cp06

0xcc22,	// (0x0005d984) main_fmradio_pane_t1

0xcdb5,	// (0x0005db17) heading_pane_cp04

0xcc22,	// (0x0005d984) main_fmradio_pane_t2

0xe3b1,	// (0x0005f113) popup_cale_lunar_info_window_g1

0xcc22,	// (0x0005d984) main_fmradio_pane_t3

0xe3b9,	// (0x0005f11b) popup_cale_lunar_info_window_g2

0xcc22,	// (0x0005d984) main_fmradio_pane_t4

0x0001,

0xcc22,	// (0x0005d984) main_fmradio_pane_t5

0x0004,

0xf4de,	// (0x00060240) popup_cale_lunar_info_window_g

0xf269,	// (0x0005ffcb) main_fmradio_pane_t

0xb803,	// (0x0005c565) wait_bar_pane_cp03

0xbef6,	// (0x0005cc58) cell_fmradio_pane_ParamLimits

0xbef6,	// (0x0005cc58) cell_fmradio_pane

0xbf04,	// (0x0005cc66) cell_fmradio_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_fmradio_pane_g1

0xb803,	// (0x0005c565) grid_highlight_pane_cp011

0xd47c,	// (0x0005e1de) poc_content_pane_ParamLimits

0xd47c,	// (0x0005e1de) poc_content_pane

0xd48e,	// (0x0005e1f0) scroll_pane_cp019

0x5a92,	// (0x000567f4) popup_call_poc_act_window_ParamLimits

0x5a92,	// (0x000567f4) popup_call_poc_act_window

0x5a9f,	// (0x00056801) popup_call_poc_inact_window_ParamLimits

0x5a9f,	// (0x00056801) popup_call_poc_inact_window

0xf4a2,	// (0x00060204) bg_popup_call_poc_act_pane_g

0xe371,	// (0x0005f0d3) bg_popup_call_poc_inact_pane_g1

0xe379,	// (0x0005f0db) bg_popup_call_poc_inact_pane_g2

0xd496,	// (0x0005e1f8) popup_call_poc_act_window_g2

0xe381,	// (0x0005f0e3) bg_popup_call_poc_inact_pane_g3

0xe301,	// (0x0005f063) bg_popup_call_poc_inact_pane_g4

0xe389,	// (0x0005f0eb) bg_popup_call_poc_inact_pane_g5

0xd49e,	// (0x0005e200) popup_call_poc_act_window_t1_ParamLimits

0xd49e,	// (0x0005e200) popup_call_poc_act_window_t1

0xd4c6,	// (0x0005e228) popup_call_poc_act_window_t2_ParamLimits

0xd4c6,	// (0x0005e228) popup_call_poc_act_window_t2

0xd4ee,	// (0x0005e250) popup_call_poc_act_window_t3_ParamLimits

0xd4ee,	// (0x0005e250) popup_call_poc_act_window_t3

0xd516,	// (0x0005e278) popup_call_poc_act_window_t4_ParamLimits

0xd516,	// (0x0005e278) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00060180) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00060180) popup_call_poc_act_window_t

0xe391,	// (0x0005f0f3) bg_popup_call_poc_inact_pane_g6

0xe399,	// (0x0005f0fb) bg_popup_call_poc_inact_pane_g7

0xe3a1,	// (0x0005f103) bg_popup_call_poc_inact_pane_g8

0xd528,	// (0x0005e28a) popup_call_poc_inact_window_g2

0xe3a9,	// (0x0005f10b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b9,	// (0x0006021b) bg_popup_call_poc_inact_pane_g

0xd530,	// (0x0005e292) popup_call_poc_inact_window_t1_ParamLimits

0xd530,	// (0x0005e292) popup_call_poc_inact_window_t1

0xd545,	// (0x0005e2a7) popup_call_poc_inact_window_t2_ParamLimits

0xd545,	// (0x0005e2a7) popup_call_poc_inact_window_t2

0xd55a,	// (0x0005e2bc) popup_call_poc_inact_window_t3_ParamLimits

0xd55a,	// (0x0005e2bc) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00060189) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00060189) popup_call_poc_inact_window_t

0xe44d,	// (0x0005f1af) context_pane_ParamLimits

0x60b2,	// (0x00056e14) signal_pane_ParamLimits

0xc707,	// (0x0005d469) main_call2_pane

0x6025,	// (0x00056d87) popup_phob_thumbnail2_window_ParamLimits

0x6025,	// (0x00056d87) popup_phob_thumbnail2_window

0x57a2,	// (0x00056504) aid_hotspot_pointer_arrow_pane

0x57aa,	// (0x0005650c) aid_hotspot_pointer_hand_pane

0x5d72,	// (0x00056ad4) phob_pre_status_pane_g5

0xbef6,	// (0x0005cc58) cams_zoom_pane_ParamLimits

0xbef6,	// (0x0005cc58) image_vga_pane_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g1_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g3_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g4_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g5_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g6_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0005febf) main_camera_pane_g_ParamLimits

0xbf60,	// (0x0005ccc2) main_camera_pane_t1_ParamLimits

0xbf60,	// (0x0005ccc2) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0005fed0) main_camera_pane_t_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_popup_preview_window_pane_cp01_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_popup_preview_window_pane_cp01

0xd56f,	// (0x0005e2d1) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56f,	// (0x0005e2d1) popup_phob_thumbnail2_window_g1

0xbc20,	// (0x0005c982) call2_cli_visual_pane

0x5abb,	// (0x0005681d) popup_call2_audio_conf_window_ParamLimits

0x5abb,	// (0x0005681d) popup_call2_audio_conf_window

0x5ad0,	// (0x00056832) popup_call2_audio_first_window_ParamLimits

0x5ad0,	// (0x00056832) popup_call2_audio_first_window

0x5b6e,	// (0x000568d0) popup_call2_audio_in_window_ParamLimits

0x5b6e,	// (0x000568d0) popup_call2_audio_in_window

0x5bb0,	// (0x00056912) popup_call2_audio_out_window_ParamLimits

0x5bb0,	// (0x00056912) popup_call2_audio_out_window

0x5c12,	// (0x00056974) popup_call2_audio_second_window_ParamLimits

0x5c12,	// (0x00056974) popup_call2_audio_second_window

0x5c70,	// (0x000569d2) popup_call2_audio_wait_window_ParamLimits

0x5c70,	// (0x000569d2) popup_call2_audio_wait_window

0xbc20,	// (0x0005c982) bg_popup_call2_act_pane_cp03

0xbe5d,	// (0x0005cbbf) list_conf_pane_cp

0xd57b,	// (0x0005e2dd) popup_call2_audio_conf_window_t1

0xd589,	// (0x0005e2eb) list_single_graphic_popup_conf2_pane_ParamLimits

0xd589,	// (0x0005e2eb) list_single_graphic_popup_conf2_pane

0xce18,	// (0x0005db7a) list_highlight_pane_cp04

0xd59c,	// (0x0005e2fe) list_single_graphic_popup_conf2_pane_g1

0xce29,	// (0x0005db8b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00060190) list_single_graphic_popup_conf2_pane_g

0xd5a6,	// (0x0005e308) list_single_graphic_popup_conf2_pane_t1

0xd5b4,	// (0x0005e316) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5b4,	// (0x0005e316) bg_popup_call2_act_pane_cp01

0xd63e,	// (0x0005e3a0) call_type_pane_cp05_ParamLimits

0xd63e,	// (0x0005e3a0) call_type_pane_cp05

0xd692,	// (0x0005e3f4) popup_call2_audio_second_window_g1_ParamLimits

0xd692,	// (0x0005e3f4) popup_call2_audio_second_window_g1

0xd6e6,	// (0x0005e448) popup_call2_audio_second_window_g2_ParamLimits

0xd6e6,	// (0x0005e448) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00060195) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00060195) popup_call2_audio_second_window_g

0xd74b,	// (0x0005e4ad) popup_call2_audio_second_window_t1_ParamLimits

0xd74b,	// (0x0005e4ad) popup_call2_audio_second_window_t1

0xd806,	// (0x0005e568) popup_call2_audio_second_window_t2_ParamLimits

0xd806,	// (0x0005e568) popup_call2_audio_second_window_t2

0xd859,	// (0x0005e5bb) popup_call2_audio_second_window_t3_ParamLimits

0xd859,	// (0x0005e5bb) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x0006019c) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x0006019c) popup_call2_audio_second_window_t

0xbc20,	// (0x0005c982) bg_popup_call2_in_pane_cp02

0xbc2a,	// (0x0005c98c) call_type_pane_cp04

0x5caf,	// (0x00056a11) popup_call2_audio_wait_window_g1

0x5cb7,	// (0x00056a19) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x000601a5) popup_call2_audio_wait_window_g

0xbc42,	// (0x0005c9a4) popup_call2_audio_wait_window_t3

0xd94c,	// (0x0005e6ae) bg_popup_call2_act_pane_ParamLimits

0xd94c,	// (0x0005e6ae) bg_popup_call2_act_pane

0xda0c,	// (0x0005e76e) call_type_pane_cp03_ParamLimits

0xda0c,	// (0x0005e76e) call_type_pane_cp03

0xda70,	// (0x0005e7d2) popup_call2_audio_first_window_g1_ParamLimits

0xda70,	// (0x0005e7d2) popup_call2_audio_first_window_g1

0xdaee,	// (0x0005e850) popup_call2_audio_first_window_g2_ParamLimits

0xdaee,	// (0x0005e850) popup_call2_audio_first_window_g2

0xdae0,	// (0x0005e842) popup_call2_audio_first_window_g3_ParamLimits

0xdae0,	// (0x0005e842) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x000601aa) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x000601aa) popup_call2_audio_first_window_g

0xdbcc,	// (0x0005e92e) popup_call2_audio_first_window_t1_ParamLimits

0xdbcc,	// (0x0005e92e) popup_call2_audio_first_window_t1

0xdccf,	// (0x0005ea31) popup_call2_audio_first_window_t4_ParamLimits

0xdccf,	// (0x0005ea31) popup_call2_audio_first_window_t4

0xddb2,	// (0x0005eb14) popup_call2_audio_first_window_t5_ParamLimits

0xddb2,	// (0x0005eb14) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x000601b5) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x000601b5) popup_call2_audio_first_window_t

0xbe73,	// (0x0005cbd5) bg_popup_call2_act_pane_g1

0xe3c1,	// (0x0005f123) popup_cale_lunar_info_window_t1

0xe3cf,	// (0x0005f131) popup_cale_lunar_info_window_t2

0xe3dd,	// (0x0005f13f) popup_cale_lunar_info_window_t3

0xbc20,	// (0x0005c982) bg_popup_call2_bubble_pane

0xdeb3,	// (0x0005ec15) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeb3,	// (0x0005ec15) bg_popup_call2_in_pane_cp01

0xb8fc,	// (0x0005c65e) call_type_pane_cp02

0x5cbf,	// (0x00056a21) popup_call2_audio_out_window_g1_ParamLimits

0x5cbf,	// (0x00056a21) popup_call2_audio_out_window_g1

0xdefb,	// (0x0005ec5d) popup_call2_audio_out_window_g2_ParamLimits

0xdefb,	// (0x0005ec5d) popup_call2_audio_out_window_g2

0x5ceb,	// (0x00056a4d) popup_call2_audio_out_window_g3_ParamLimits

0x5ceb,	// (0x00056a4d) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x000601be) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x000601be) popup_call2_audio_out_window_g

0xdf32,	// (0x0005ec94) popup_call2_audio_out_window_t1_ParamLimits

0xdf32,	// (0x0005ec94) popup_call2_audio_out_window_t1

0xdf91,	// (0x0005ecf3) popup_call2_audio_out_window_t2_ParamLimits

0xdf91,	// (0x0005ecf3) popup_call2_audio_out_window_t2

0xdfe5,	// (0x0005ed47) popup_call2_audio_out_window_t3_ParamLimits

0xdfe5,	// (0x0005ed47) popup_call2_audio_out_window_t3

0xdffb,	// (0x0005ed5d) popup_call2_audio_out_window_t4_ParamLimits

0xdffb,	// (0x0005ed5d) popup_call2_audio_out_window_t4

0xe011,	// (0x0005ed73) popup_call2_audio_out_window_t5_ParamLimits

0xe011,	// (0x0005ed73) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x000601c7) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x000601c7) popup_call2_audio_out_window_t

0xe075,	// (0x0005edd7) bg_popup_call2_in_pane_ParamLimits

0xe075,	// (0x0005edd7) bg_popup_call2_in_pane

0xe0d1,	// (0x0005ee33) popup_call2_audio_in_window_g1_ParamLimits

0xe0d1,	// (0x0005ee33) popup_call2_audio_in_window_g1

0xe109,	// (0x0005ee6b) popup_call2_audio_in_window_g2_ParamLimits

0xe109,	// (0x0005ee6b) popup_call2_audio_in_window_g2

0xe141,	// (0x0005eea3) popup_call2_audio_in_window_g3_ParamLimits

0xe141,	// (0x0005eea3) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x000601d4) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x000601d4) popup_call2_audio_in_window_g

0xe199,	// (0x0005eefb) popup_call2_audio_in_window_t1_ParamLimits

0xe199,	// (0x0005eefb) popup_call2_audio_in_window_t1

0xe219,	// (0x0005ef7b) popup_call2_audio_in_window_t2_ParamLimits

0xe219,	// (0x0005ef7b) popup_call2_audio_in_window_t2

0xe299,	// (0x0005effb) popup_call2_audio_in_window_t3_ParamLimits

0xe299,	// (0x0005effb) popup_call2_audio_in_window_t3

0xe2b3,	// (0x0005f015) popup_call2_audio_in_window_t4_ParamLimits

0xe2b3,	// (0x0005f015) popup_call2_audio_in_window_t4

0xe2c5,	// (0x0005f027) popup_call2_audio_in_window_t5_ParamLimits

0xe2c5,	// (0x0005f027) popup_call2_audio_in_window_t5

0xe2d7,	// (0x0005f039) popup_call2_audio_in_window_t6_ParamLimits

0xe2d7,	// (0x0005f039) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x000601dd) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x000601dd) popup_call2_audio_in_window_t

0xbe73,	// (0x0005cbd5) bg_popup_call2_in_pane_g1

0xe3eb,	// (0x0005f14d) popup_cale_lunar_info_window_t4

0x0003,

0xf4e3,	// (0x00060245) popup_cale_lunar_info_window_t

0xbe7b,	// (0x0005cbdd) bg_popup_call2_rect_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_popup_call2_rect_pane

0xbc20,	// (0x0005c982) call2_cli_visual_graphic_pane

0xbc20,	// (0x0005c982) call2_cli_visual_text_pane

0x60ee,	// (0x00056e50) smil_status_volume_pane_g3

0x0002,

0xbe93,	// (0x0005cbf5) call2_cli_visual_graphic_pane_g1

0xbe93,	// (0x0005cbf5) call2_cli_visual_graphic_pane_g2

0xbe93,	// (0x0005cbf5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x000601ea) call2_cli_visual_graphic_pane_g

0xc617,	// (0x0005d379) bg_popup_call2_rect_pane_g1

0xc60f,	// (0x0005d371) bg_popup_call2_rect_pane_g2

0xc607,	// (0x0005d369) bg_popup_call2_rect_pane_g3

0xc627,	// (0x0005d389) bg_popup_call2_rect_pane_g4

0xc61f,	// (0x0005d381) bg_popup_call2_rect_pane_g5

0xc62f,	// (0x0005d391) bg_popup_call2_rect_pane_g6

0xc637,	// (0x0005d399) bg_popup_call2_rect_pane_g7

0xc647,	// (0x0005d3a9) bg_popup_call2_rect_pane_g8

0xc63f,	// (0x0005d3a1) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0005ff7a) bg_popup_call2_rect_pane_g

0xe2e9,	// (0x0005f04b) bg_popup_call2_bubble_pane_g1

0xe2f1,	// (0x0005f053) bg_popup_call2_bubble_pane_g2

0xe2f9,	// (0x0005f05b) bg_popup_call2_bubble_pane_g3

0xe301,	// (0x0005f063) bg_popup_call2_bubble_pane_g4

0xe309,	// (0x0005f06b) bg_popup_call2_bubble_pane_g5

0xe311,	// (0x0005f073) bg_popup_call2_bubble_pane_g6

0xe319,	// (0x0005f07b) bg_popup_call2_bubble_pane_g7

0xe321,	// (0x0005f083) bg_popup_call2_bubble_pane_g8

0xe329,	// (0x0005f08b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x000601f1) bg_popup_call2_bubble_pane_g

0x3896,	// (0x000545f8) aid_cale_week_size_cell_pane

0xbe7b,	// (0x0005cbdd) aid_cams_cif_uncrop_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) aid_cams_cif_uncrop_pane

0xbef6,	// (0x0005cc58) aid_cams_size_cell_ParamLimits

0xbef6,	// (0x0005cc58) aid_cams_size_cell

0xbef6,	// (0x0005cc58) grid_cams_pane_ParamLimits

0xbef6,	// (0x0005cc58) linegrid_cams_pane_ParamLimits

0x3f5a,	// (0x00054cbc) call_video_pane_t1

0x3f7b,	// (0x00054cdd) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0005ff1c) call_video_pane_t

0x44c9,	// (0x0005522b) aid_cale_month_size_cell_pane_ParamLimits

0x44c9,	// (0x0005522b) aid_cale_month_size_cell_pane

0xf527,	// (0x00060289) smil_status_volume_pane_g

0x60fb,	// (0x00056e5d) volume_smil_pane_ParamLimits

0x32aa,	// (0x0005400c) aid_popup2_width_pane

0x37a2,	// (0x00054504) cell_qdial_pane_g4_ParamLimits

0x37a2,	// (0x00054504) cell_qdial_pane_g4

0x53f3,	// (0x00056155) aid_blid_cardinal_pane_ParamLimits

0x5403,	// (0x00056165) aid_blid_destination_pane_ParamLimits

0x5403,	// (0x00056165) aid_blid_destination_pane

0xbe7b,	// (0x0005cbdd) bg_popup_call_poc_act_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_popup_call_poc_act_pane

0xbe7b,	// (0x0005cbdd) bg_popup_call_poc_inact_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_popup_call_poc_inact_pane

0xe331,	// (0x0005f093) bg_popup_call_poc_act_pane_g1

0xe339,	// (0x0005f09b) bg_popup_call_poc_act_pane_g2

0xe341,	// (0x0005f0a3) bg_popup_call_poc_act_pane_g3

0xe301,	// (0x0005f063) bg_popup_call_poc_act_pane_g4

0xe309,	// (0x0005f06b) bg_popup_call_poc_act_pane_g5

0xe349,	// (0x0005f0ab) bg_popup_call_poc_act_pane_g6

0xe319,	// (0x0005f07b) bg_popup_call_poc_act_pane_g7

0xe351,	// (0x0005f0b3) bg_popup_call_poc_act_pane_g8

0xbc20,	// (0x0005c982) main_usb_pane

0x5f58,	// (0x00056cba) popup_cale_lunar_info_window

0x4298,	// (0x00054ffa) im_reading_pane_t1_ParamLimits

0xc7c8,	// (0x0005d52a) list_im_pane_ParamLimits

0xc7d9,	// (0x0005d53b) scroll_pane_cp07_ParamLimits

0xbc20,	// (0x0005c982) grid_highlight_pane_cp012

0xbe7b,	// (0x0005cbdd) mup_scale_pane_ParamLimits

0xbf12,	// (0x0005cc74) main_usb_pane_g1_ParamLimits

0xbf12,	// (0x0005cc74) main_usb_pane_g1

0xbf12,	// (0x0005cc74) main_usb_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) main_usb_pane_g2

0x0001,

0xf4cc,	// (0x0006022e) main_usb_pane_g_ParamLimits

0xf4cc,	// (0x0006022e) main_usb_pane_g

0xbf60,	// (0x0005ccc2) main_usb_pane_t1_ParamLimits

0xbf60,	// (0x0005ccc2) main_usb_pane_t1

0xbf60,	// (0x0005ccc2) main_usb_pane_t2_ParamLimits

0xbf60,	// (0x0005ccc2) main_usb_pane_t2

0xbf60,	// (0x0005ccc2) main_usb_pane_t3_ParamLimits

0xbf60,	// (0x0005ccc2) main_usb_pane_t3

0xbf60,	// (0x0005ccc2) main_usb_pane_t4_ParamLimits

0xbf60,	// (0x0005ccc2) main_usb_pane_t4

0xbf60,	// (0x0005ccc2) main_usb_pane_t5_ParamLimits

0xbf60,	// (0x0005ccc2) main_usb_pane_t5

0xbf60,	// (0x0005ccc2) main_usb_pane_t6_ParamLimits

0xbf60,	// (0x0005ccc2) main_usb_pane_t6

0x0005,

0xf4d1,	// (0x00060233) main_usb_pane_t_ParamLimits

0x5399,	// (0x000560fb) aid_text_placing

0x53a5,	// (0x00056107) main_location2_pane_t1_ParamLimits

0x53b9,	// (0x0005611b) main_location2_pane_t2_ParamLimits

0x53cd,	// (0x0005612f) main_location2_pane_t3_ParamLimits

0x53e1,	// (0x00056143) main_location2_pane_t4_ParamLimits

0x53e1,	// (0x00056143) main_location2_pane_t4

0xf2fb,	// (0x0006005d) main_location2_pane_t_ParamLimits

0xbeb7,	// (0x0005cc19) find_pinb_pane_g2_ParamLimits

0xbeb7,	// (0x0005cc19) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0005fdd4) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0005fdd4) find_pinb_pane_g

0xbec3,	// (0x0005cc25) find_pinb_pane_t1_ParamLimits

0xbed5,	// (0x0005cc37) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0005fdd9) find_pinb_pane_t_ParamLimits

0xbc20,	// (0x0005c982) main_call3_pane

0x4a8c,	// (0x000557ee) cale_month_day_heading_pane_t1_ParamLimits

0x4b12,	// (0x00055874) cale_month_day_heading_pane_t2_ParamLimits

0x4b8b,	// (0x000558ed) cale_month_day_heading_pane_t3_ParamLimits

0x4c04,	// (0x00055966) cale_month_day_heading_pane_t4_ParamLimits

0x4c7d,	// (0x000559df) cale_month_day_heading_pane_t5_ParamLimits

0x4cf6,	// (0x00055a58) cale_month_day_heading_pane_t6_ParamLimits

0x4d6f,	// (0x00055ad1) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0005ff54) cale_month_day_heading_pane_t_ParamLimits

0xca55,	// (0x0005d7b7) smil_status_volume_pane

0x58de,	// (0x00056640) postcard_address_pane_ParamLimits

0x58de,	// (0x00056640) postcard_address_pane

0x58ea,	// (0x0005664c) postcard_message_pane_ParamLimits

0x58ea,	// (0x0005664c) postcard_message_pane

0x5d17,	// (0x00056a79) call2_cli_visual_pane_t1_ParamLimits

0x5d17,	// (0x00056a79) call2_cli_visual_pane_t1

0xe50e,	// (0x0005f270) postcard_message_pane_t1_ParamLimits

0xe50e,	// (0x0005f270) postcard_message_pane_t1

0xe4f6,	// (0x0005f258) postcard_address_pane_t1_ParamLimits

0xe4f6,	// (0x0005f258) postcard_address_pane_t1

0x622c,	// (0x00056f8e) popup_call3_audio_in_window_ParamLimits

0x622c,	// (0x00056f8e) popup_call3_audio_in_window

0x6110,	// (0x00056e72) bg_popup_call3_in_pane_ParamLimits

0x6110,	// (0x00056e72) bg_popup_call3_in_pane

0x6172,	// (0x00056ed4) popup_call3_audio_in_window_g1_ParamLimits

0x6172,	// (0x00056ed4) popup_call3_audio_in_window_g1

0x618a,	// (0x00056eec) popup_call3_audio_in_window_g2_ParamLimits

0x618a,	// (0x00056eec) popup_call3_audio_in_window_g2

0x61a2,	// (0x00056f04) popup_call3_audio_in_window_g3_ParamLimits

0x61a2,	// (0x00056f04) popup_call3_audio_in_window_g3

0x0003,

0xf52e,	// (0x00060290) popup_call3_audio_in_window_g_ParamLimits

0xf52e,	// (0x00060290) popup_call3_audio_in_window_g

0x61ca,	// (0x00056f2c) popup_call3_audio_in_window_t1_ParamLimits

0x61ca,	// (0x00056f2c) popup_call3_audio_in_window_t1

0x61f2,	// (0x00056f54) popup_call3_audio_in_window_t2_ParamLimits

0x61f2,	// (0x00056f54) popup_call3_audio_in_window_t2

0x621a,	// (0x00056f7c) popup_call3_audio_in_window_t3_ParamLimits

0x621a,	// (0x00056f7c) popup_call3_audio_in_window_t3

0x0002,

0xf537,	// (0x00060299) popup_call3_audio_in_window_t_ParamLimits

0xf537,	// (0x00060299) popup_call3_audio_in_window_t

0xc707,	// (0x0005d469) bg_popup_call3_rect_pane

0xc617,	// (0x0005d379) bg_popup_call3_rect_pane_g1

0xc60f,	// (0x0005d371) bg_popup_call3_rect_pane_g2

0xc607,	// (0x0005d369) bg_popup_call3_rect_pane_g3

0xc627,	// (0x0005d389) bg_popup_call3_rect_pane_g4

0xc61f,	// (0x0005d381) bg_popup_call3_rect_pane_g5

0xc62f,	// (0x0005d391) bg_popup_call3_rect_pane_g6

0xc637,	// (0x0005d399) bg_popup_call3_rect_pane_g7

0xb803,	// (0x0005c565) mup_visualizer_osc_pane

0xb803,	// (0x0005c565) mup_visualizer_spec_pane

0x6130,	// (0x00056e92) call3_video_qcif_pane_ParamLimits

0x6130,	// (0x00056e92) call3_video_qcif_pane

0x6142,	// (0x00056ea4) call3_video_qcif_uncrop_pane_ParamLimits

0x6142,	// (0x00056ea4) call3_video_qcif_uncrop_pane

0x6150,	// (0x00056eb2) call3_video_subqcif_pane_ParamLimits

0x6150,	// (0x00056eb2) call3_video_subqcif_pane

0x6162,	// (0x00056ec4) call3_video_subqcif_uncrop_pane_ParamLimits

0x6162,	// (0x00056ec4) call3_video_subqcif_uncrop_pane

0x61ba,	// (0x00056f1c) popup_call3_audio_in_window_g4_ParamLimits

0x61ba,	// (0x00056f1c) popup_call3_audio_in_window_g4

0xb803,	// (0x0005c565) mup_spec_half_pane

0xb803,	// (0x0005c565) mup_spec_half_pane_cp

0xb803,	// (0x0005c565) mup_osc_middle_pane

0xbf42,	// (0x0005cca4) mup_visualizer_osc_pane_g1

0xe49b,	// (0x0005f1fd) mup_spec_bar_pane_ParamLimits

0xe49b,	// (0x0005f1fd) mup_spec_bar_pane

0xbf42,	// (0x0005cca4) mup_spec_bar_pane_g1

0xbf42,	// (0x0005cca4) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) mup_spec_bar_pane_g

0x3896,	// (0x000545f8) aid_cale_week_size_cell_pane_ParamLimits

0x38ab,	// (0x0005460d) bg_cale_heading_pane_ParamLimits

0xc669,	// (0x0005d3cb) bg_cale_pane_cp01_ParamLimits

0x38cd,	// (0x0005462f) cale_week_corner_pane_ParamLimits

0x38e7,	// (0x00054649) cale_week_day_heading_pane_ParamLimits

0x3909,	// (0x0005466b) cale_week_scroll_pane_g1_ParamLimits

0x3926,	// (0x00054688) cale_week_scroll_pane_g2_ParamLimits

0x3939,	// (0x0005469b) cale_week_scroll_pane_g3_ParamLimits

0x394c,	// (0x000546ae) cale_week_scroll_pane_g4_ParamLimits

0x395f,	// (0x000546c1) cale_week_scroll_pane_g5_ParamLimits

0x3972,	// (0x000546d4) cale_week_scroll_pane_g6_ParamLimits

0x3985,	// (0x000546e7) cale_week_scroll_pane_g7_ParamLimits

0x399a,	// (0x000546fc) cale_week_scroll_pane_g8_ParamLimits

0x39af,	// (0x00054711) cale_week_scroll_pane_g9_ParamLimits

0x39c2,	// (0x00054724) cale_week_scroll_pane_g10_ParamLimits

0x39d5,	// (0x00054737) cale_week_scroll_pane_g11_ParamLimits

0x39e8,	// (0x0005474a) cale_week_scroll_pane_g12_ParamLimits

0x39ff,	// (0x00054761) cale_week_scroll_pane_g13_ParamLimits

0x3a1a,	// (0x0005477c) cale_week_scroll_pane_g14_ParamLimits

0x3a35,	// (0x00054797) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0005fe65) cale_week_scroll_pane_g_ParamLimits

0x3a65,	// (0x000547c7) cale_week_time_pane_ParamLimits

0x3a7a,	// (0x000547dc) grid_cale_week_pane_ParamLimits

0xc686,	// (0x0005d3e8) listscroll_cale_week_pane_t1

0xc698,	// (0x0005d3fa) scroll_pane_cp08_ParamLimits

0x453d,	// (0x0005529f) cale_month_corner_pane_ParamLimits

0xca2b,	// (0x0005d78d) cale_month_pane_t1

0x4a0b,	// (0x0005576d) cale_month_week_pane_ParamLimits

0xdae0,	// (0x0005e842) popup_call_status_window_g1_ParamLimits

0x51c6,	// (0x00055f28) popup_call_status_window_g2_ParamLimits

0x51d2,	// (0x00055f34) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x0005ffe4) popup_call_status_window_g_ParamLimits

0xcda5,	// (0x0005db07) aid_call2_pane

0x5796,	// (0x000564f8) msg_header_pane_g1

0x58de,	// (0x00056640) postcard_address2_pane_ParamLimits

0x58de,	// (0x00056640) postcard_address2_pane

0x58ea,	// (0x0005664c) postcard_message2_pane_ParamLimits

0x58ea,	// (0x0005664c) postcard_message2_pane

0x60c0,	// (0x00056e22) message2_row_pane_ParamLimits

0x60c0,	// (0x00056e22) message2_row_pane

0x60db,	// (0x00056e3d) address2_row_pane_ParamLimits

0x60db,	// (0x00056e3d) address2_row_pane

0xe468,	// (0x0005f1ca) postcard_message2_row_pane_g1

0xe470,	// (0x0005f1d2) postcard_message2_row_pane_t1

0xe468,	// (0x0005f1ca) address2_row_pane_g1

0xe470,	// (0x0005f1d2) address2_row_pane_t1

0x3cff,	// (0x00054a61) aid_size_cell_vorec

0xbc20,	// (0x0005c982) main_rss_pane

0xe47e,	// (0x0005f1e0) rss_list_single_pane_ParamLimits

0xe47e,	// (0x0005f1e0) rss_list_single_pane

0xe48c,	// (0x0005f1ee) rss_list_single_pane_t1

0xe48c,	// (0x0005f1ee) rss_list_single_pane_t2

0x0001,

0xf522,	// (0x00060284) rss_list_single_pane_t

0xbc20,	// (0x0005c982) main_camera2_pane

0xbc20,	// (0x0005c982) main_video2_pane

0x34b5,	// (0x00054217) cams_zoom_pane_cp2_ParamLimits

0x34b5,	// (0x00054217) cams_zoom_pane_cp2

0x34b5,	// (0x00054217) image2_vga_pane_ParamLimits

0x34b5,	// (0x00054217) image2_vga_pane

0xcdd8,	// (0x0005db3a) main_camera2_pane_g1_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g1

0xcdd8,	// (0x0005db3a) main_camera2_pane_g2_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g2

0xcdd8,	// (0x0005db3a) main_camera2_pane_g3_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g3

0xcdd8,	// (0x0005db3a) main_camera2_pane_g4_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g4

0xcdd8,	// (0x0005db3a) main_camera2_pane_g5_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g5

0xcdd8,	// (0x0005db3a) main_camera2_pane_g6_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g6

0xcdd8,	// (0x0005db3a) main_camera2_pane_g7_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g7

0xcdd8,	// (0x0005db3a) main_camera2_pane_g8_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g8

0x0008,

0xf53e,	// (0x000602a0) main_camera2_pane_g_ParamLimits

0xf53e,	// (0x000602a0) main_camera2_pane_g

0x6249,	// (0x00056fab) main_camera2_pane_t1_ParamLimits

0x6249,	// (0x00056fab) main_camera2_pane_t1

0x6249,	// (0x00056fab) main_camera2_pane_t2_ParamLimits

0x6249,	// (0x00056fab) main_camera2_pane_t2

0x6249,	// (0x00056fab) main_camera2_pane_t3_ParamLimits

0x6249,	// (0x00056fab) main_camera2_pane_t3

0x6249,	// (0x00056fab) main_camera2_pane_t4_ParamLimits

0x6249,	// (0x00056fab) main_camera2_pane_t4

0x0006,

0xf551,	// (0x000602b3) main_camera2_pane_t_ParamLimits

0xf551,	// (0x000602b3) main_camera2_pane_t

0x6271,	// (0x00056fd3) cams_zoom_pane_cp4_ParamLimits

0x6271,	// (0x00056fd3) cams_zoom_pane_cp4

0x5f03,	// (0x00056c65) image2_cif_pane_ParamLimits

0x5f03,	// (0x00056c65) image2_cif_pane

0x34b5,	// (0x00054217) image2_subqcif_pane_ParamLimits

0x34b5,	// (0x00054217) image2_subqcif_pane

0x627f,	// (0x00056fe1) main_video2_pane_g1_ParamLimits

0x627f,	// (0x00056fe1) main_video2_pane_g1

0x627f,	// (0x00056fe1) main_video2_pane_g2_ParamLimits

0x627f,	// (0x00056fe1) main_video2_pane_g2

0x627f,	// (0x00056fe1) main_video2_pane_g3_ParamLimits

0x627f,	// (0x00056fe1) main_video2_pane_g3

0x627f,	// (0x00056fe1) main_video2_pane_g4_ParamLimits

0x627f,	// (0x00056fe1) main_video2_pane_g4

0x627f,	// (0x00056fe1) main_video2_pane_g5_ParamLimits

0x627f,	// (0x00056fe1) main_video2_pane_g5

0x627f,	// (0x00056fe1) main_video2_pane_g6_ParamLimits

0x627f,	// (0x00056fe1) main_video2_pane_g6

0x0005,

0xf560,	// (0x000602c2) main_video2_pane_g_ParamLimits

0xf560,	// (0x000602c2) main_video2_pane_g

0x628d,	// (0x00056fef) main_video2_pane_t1_ParamLimits

0x628d,	// (0x00056fef) main_video2_pane_t1

0x628d,	// (0x00056fef) main_video2_pane_t2_ParamLimits

0x628d,	// (0x00056fef) main_video2_pane_t2

0x628d,	// (0x00056fef) main_video2_pane_t3_ParamLimits

0x628d,	// (0x00056fef) main_video2_pane_t3

0x0002,

0xf56d,	// (0x000602cf) main_video2_pane_t_ParamLimits

0xf56d,	// (0x000602cf) main_video2_pane_t

0x5dd6,	// (0x00056b38) call_muted_g2

0x0001,

0xf514,	// (0x00060276) call_muted_g

0xbc20,	// (0x0005c982) main_mup2_pane

0xbf20,	// (0x0005cc82) main_mup2_pane_g1_ParamLimits

0xbf20,	// (0x0005cc82) main_mup2_pane_g1

0xbf20,	// (0x0005cc82) main_mup2_pane_g2_ParamLimits

0xbf20,	// (0x0005cc82) main_mup2_pane_g2

0x0fef,	// (0x00051d51) main_mup_pane_g13_cp1

0x34cf,	// (0x00054231) mup_volume_pane_cp1

0xbf20,	// (0x0005cc82) main_mup2_pane_g4_ParamLimits

0xbf20,	// (0x0005cc82) main_mup2_pane_g4

0xbf20,	// (0x0005cc82) main_mup2_pane_g5_ParamLimits

0xbf20,	// (0x0005cc82) main_mup2_pane_g5

0xbf20,	// (0x0005cc82) main_mup2_pane_g6_ParamLimits

0xbf20,	// (0x0005cc82) main_mup2_pane_g6

0xbf20,	// (0x0005cc82) main_mup2_pane_g7_ParamLimits

0xbf20,	// (0x0005cc82) main_mup2_pane_g7

0x0006,

0xf574,	// (0x000602d6) main_mup2_pane_g_ParamLimits

0xf574,	// (0x000602d6) main_mup2_pane_g

0xbf2e,	// (0x0005cc90) main_mup2_pane_t1_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup2_pane_t1

0xbf2e,	// (0x0005cc90) main_mup2_pane_t2_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup2_pane_t2

0xbf2e,	// (0x0005cc90) main_mup2_pane_t3_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup2_pane_t3

0xbf2e,	// (0x0005cc90) main_mup2_pane_t4_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup2_pane_t4

0xbf2e,	// (0x0005cc90) main_mup2_pane_t5_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup2_pane_t5

0xbf2e,	// (0x0005cc90) main_mup2_pane_t6_ParamLimits

0xbf2e,	// (0x0005cc90) main_mup2_pane_t6

0x0005,

0xf583,	// (0x000602e5) main_mup2_pane_t_ParamLimits

0xf583,	// (0x000602e5) main_mup2_pane_t

0xe4d5,	// (0x0005f237) mup2_visualizer_pane_ParamLimits

0xe4d5,	// (0x0005f237) mup2_visualizer_pane

0xe4d5,	// (0x0005f237) mup_progress_pane_cp_ParamLimits

0xe4d5,	// (0x0005f237) mup_progress_pane_cp

0x6354,	// (0x000570b6) mup_volume_pane_cp_ParamLimits

0x6354,	// (0x000570b6) mup_volume_pane_cp

0xbf04,	// (0x0005cc66) mup2_visualizer_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) mup2_visualizer_pane_g1

0xbf12,	// (0x0005cc74) mup2_visualizer_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) mup2_visualizer_pane_g2

0xbf12,	// (0x0005cc74) mup2_visualizer_pane_g3_ParamLimits

0xbf12,	// (0x0005cc74) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0005fdde) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0005fdde) mup2_visualizer_pane_g

0xb803,	// (0x0005c565) aid_size_cell_fmradio

0x5eec,	// (0x00056c4e) aid_height_parent_landcape

0xc889,	// (0x0005d5eb) wml_content_pane_cp

0xc891,	// (0x0005d5f3) wml_tabs_pane

0xc89a,	// (0x0005d5fc) popup_wml_miniature_window

0xc8a2,	// (0x0005d604) scroll_pane_cp021

0xc8b6,	// (0x0005d618) wml_content_pane_comp8

0xbc20,	// (0x0005c982) bg_popup_sub_pane_cp05

0xe540,	// (0x0005f2a2) popup_wml_miniature_window_g1

0xe548,	// (0x0005f2aa) wml_miniature_view_pane

0x62a1,	// (0x00057003) aid_size_wml_view

0x62a9,	// (0x0005700b) wml_miniature_view_pane_g1

0x62b2,	// (0x00057014) wml_miniature_view_pane_g2

0x62bb,	// (0x0005701d) wml_miniature_view_pane_g3

0x62c3,	// (0x00057025) wml_miniature_view_pane_g4

0x62cb,	// (0x0005702d) wml_miniature_view_pane_g5

0x62d3,	// (0x00057035) wml_miniature_view_pane_g6

0x62db,	// (0x0005703d) wml_miniature_view_pane_g7

0x62e3,	// (0x00057045) wml_miniature_view_pane_g8

0x0007,

0xf590,	// (0x000602f2) wml_miniature_view_pane_g

0xe550,	// (0x0005f2b2) background_graphic_ParamLimits

0xe550,	// (0x0005f2b2) background_graphic

0xe55c,	// (0x0005f2be) wml_tabs_2_pane

0xe587,	// (0x0005f2e9) wml_tabs_3_pane_ParamLimits

0xe587,	// (0x0005f2e9) wml_tabs_3_pane

0xe599,	// (0x0005f2fb) wml_tabs_4_pane_ParamLimits

0xe599,	// (0x0005f2fb) wml_tabs_4_pane

0xe5af,	// (0x0005f311) wml_tabs_5_pane_ParamLimits

0xe5af,	// (0x0005f311) wml_tabs_5_pane

0xe5c9,	// (0x0005f32b) wml_tabs_pane_g2_ParamLimits

0xe5c9,	// (0x0005f32b) wml_tabs_pane_g2

0xe5de,	// (0x0005f340) wml_tabs_pane_g3_ParamLimits

0xe5de,	// (0x0005f340) wml_tabs_pane_g3

0xe5f3,	// (0x0005f355) wml_tabs_2_active_pane_ParamLimits

0xe5f3,	// (0x0005f355) wml_tabs_2_active_pane

0xe5f3,	// (0x0005f355) wml_tabs_2_passive_pane_ParamLimits

0xe5f3,	// (0x0005f355) wml_tabs_2_passive_pane

0x62eb,	// (0x0005704d) wml_tabs_3_active_pane_cp_ParamLimits

0x62eb,	// (0x0005704d) wml_tabs_3_active_pane_cp

0x62fc,	// (0x0005705e) wml_tabs_3_passive_pane_ParamLimits

0x62fc,	// (0x0005705e) wml_tabs_3_passive_pane

0x630d,	// (0x0005706f) wml_tabs_3_passive_pane_cp_ParamLimits

0x630d,	// (0x0005706f) wml_tabs_3_passive_pane_cp

0x631e,	// (0x00057080) tabs_4_active_pane

0x6326,	// (0x00057088) tabs_4_passive_pane

0x632e,	// (0x00057090) tabs_4_passive_pane_cp

0x6336,	// (0x00057098) tabs_4_passive_pane_cp2

0x5d4a,	// (0x00056aac) aid_height_text

0xe4d5,	// (0x0005f237) mup_volume_cont_pane_ParamLimits

0xe4d5,	// (0x0005f237) mup_volume_cont_pane

0xb803,	// (0x0005c565) aid_size_cell_pinb

0xb803,	// (0x0005c565) aid_size_list_pinb

0xe4d5,	// (0x0005f237) mup2_volume_cont_pane_ParamLimits

0xe4d5,	// (0x0005f237) mup2_volume_cont_pane

0x633e,	// (0x000570a0) mup2_volume_cont_pane_g1_ParamLimits

0x633e,	// (0x000570a0) mup2_volume_cont_pane_g1

0x32b6,	// (0x00054018) aid_size_cell_touch_ParamLimits

0x32b6,	// (0x00054018) aid_size_cell_touch

0x34d9,	// (0x0005423b) touch_pane_ParamLimits

0x34d9,	// (0x0005423b) touch_pane

0x34cf,	// (0x00054231) main_rss2_pane

0xe60a,	// (0x0005f36c) listscroll_rss2_pane

0xe613,	// (0x0005f375) rss2_navigation_pane

0xe61b,	// (0x0005f37d) list_rss2_pane

0xcebd,	// (0x0005dc1f) scroll_pane_cp22

0xe623,	// (0x0005f385) rss2_navigation_pane_g1

0xe62c,	// (0x0005f38e) rss2_navigation_pane_g2

0xe634,	// (0x0005f396) rss2_navigation_pane_g3

0x0002,

0xf5a1,	// (0x00060303) rss2_navigation_pane_g

0xe63c,	// (0x0005f39e) rss2_navigation_pane_t1

0x636a,	// (0x000570cc) rss2_list_single_pane_ParamLimits

0x636a,	// (0x000570cc) rss2_list_single_pane

0xe64a,	// (0x0005f3ac) rss2_list_single_pane_t2

0xe658,	// (0x0005f3ba) rss2_list_single_pane_t3_ParamLimits

0xe658,	// (0x0005f3ba) rss2_list_single_pane_t3

0xe675,	// (0x0005f3d7) rss2_list_single_pane_t4

0x5011,	// (0x00055d73) smil_status_pane_g1

0x5f03,	// (0x00056c65) main_image2_pane_ParamLimits

0x5f03,	// (0x00056c65) main_image2_pane

0xcdd8,	// (0x0005db3a) main_camera2_pane_g9_ParamLimits

0xcdd8,	// (0x0005db3a) main_camera2_pane_g9

0x6249,	// (0x00056fab) main_camera2_pane_t5_ParamLimits

0x6249,	// (0x00056fab) main_camera2_pane_t5

0x625d,	// (0x00056fbf) main_camera2_pane_t6_ParamLimits

0x625d,	// (0x00056fbf) main_camera2_pane_t6

0x639e,	// (0x00057100) main_image2_pane_g1_ParamLimits

0x639e,	// (0x00057100) main_image2_pane_g1

0x5a7c,	// (0x000567de) smil2_video_pane_ParamLimits

0x5a7c,	// (0x000567de) smil2_video_pane

0x31e6,	// (0x00053f48) aid_zoom_text_primary_cp

0x346a,	// (0x000541cc) popup_preview_fixed_window

0xc7c0,	// (0x0005d522) im_reading_pane_g1

0x623b,	// (0x00056f9d) cams2_bc_adjust_pane_cp_ParamLimits

0x623b,	// (0x00056f9d) cams2_bc_adjust_pane_cp

0x34b5,	// (0x00054217) cams2_bc_adjust_pane_ParamLimits

0x34b5,	// (0x00054217) cams2_bc_adjust_pane

0x0fef,	// (0x00051d51) cams2_bc_adjust_pane_g1

0x34cf,	// (0x00054231) cams2_slider_pane

0x0fef,	// (0x00051d51) cams2_slider_pane_g1

0x0fef,	// (0x00051d51) cams2_slider_pane_g2

0x0006,

0xf5a8,	// (0x0006030a) cams2_slider_pane_g

0x35aa,	// (0x0005430c) calc_display_pane_ParamLimits

0x35c8,	// (0x0005432a) calc_paper_pane_ParamLimits

0x35e4,	// (0x00054346) grid_calc_pane_ParamLimits

0x5230,	// (0x00055f92) popup_clock_digital_window_t1_ParamLimits

0xd419,	// (0x0005e17b) main_image_pane_t1

0x3590,	// (0x000542f2) aid_size_cell_calc_ParamLimits

0x3590,	// (0x000542f2) aid_size_cell_calc

0x5f34,	// (0x00056c96) popup_blid_sat_info2_window_ParamLimits

0x5f34,	// (0x00056c96) popup_blid_sat_info2_window

0xe683,	// (0x0005f3e5) aid_size_cell_blid

0xe4d5,	// (0x0005f237) bg_popup_window_pane_cp07

0xe6a0,	// (0x0005f402) grid_popup_blid_pane

0xe6aa,	// (0x0005f40c) heading_pane_cp05_ParamLimits

0xe6aa,	// (0x0005f40c) heading_pane_cp05

0xe774,	// (0x0005f4d6) cell_popup_blid_pane_ParamLimits

0xe774,	// (0x0005f4d6) cell_popup_blid_pane

0xe798,	// (0x0005f4fa) cell_popup_blid_pane_g1

0xe7a0,	// (0x0005f502) cell_popup_blid_pane_t1

0xe4d5,	// (0x0005f237) mup2_indicator_pane_ParamLimits

0xe4d5,	// (0x0005f237) mup2_indicator_pane

0xb803,	// (0x0005c565) mup2_visualizer_osc_pane

0xe52a,	// (0x0005f28c) mup2_visualizer_spec_pane_ParamLimits

0xe52a,	// (0x0005f28c) mup2_visualizer_spec_pane

0xb803,	// (0x0005c565) mup2_spec_half_pane

0xb803,	// (0x0005c565) mup2_spec_half_pane_cp

0xe7ae,	// (0x0005f510) mup2_spec_bar_pane_ParamLimits

0xe7ae,	// (0x0005f510) mup2_spec_bar_pane

0xbf42,	// (0x0005cca4) mup2_spec_bar_pane_g1

0xe7cd,	// (0x0005f52f) mup2_spec_bar_pane_g2

0x0001,

0xf5ce,	// (0x00060330) mup2_spec_bar_pane_g

0xb803,	// (0x0005c565) mup2_osc_middle_pane

0xbf42,	// (0x0005cca4) mup2_visualizer_osc_pane_g1

0xb82d,	// (0x0005c58f) popup_number_entry_window_t1_ParamLimits

0xb840,	// (0x0005c5a2) popup_number_entry_window_t2_ParamLimits

0xb852,	// (0x0005c5b4) popup_number_entry_window_t3_ParamLimits

0x3530,	// (0x00054292) popup_number_entry_window_t5_ParamLimits

0x3530,	// (0x00054292) popup_number_entry_window_t5

0xf01d,	// (0x0005fd7f) popup_number_entry_window_t_ParamLimits

0xb864,	// (0x0005c5c6) text_title_cp2_ParamLimits

0x57b2,	// (0x00056514) aid_hotspot_pointer_text2_pane

0x5840,	// (0x000565a2) main_viewer_pane_g9_ParamLimits

0x5840,	// (0x000565a2) main_viewer_pane_g9

0xca2b,	// (0x0005d78d) cale_month_pane_t1_ParamLimits

0xca68,	// (0x0005d7ca) bg_cale_pane_ParamLimits

0xca80,	// (0x0005d7e2) list_cale_pane_ParamLimits

0xca91,	// (0x0005d7f3) listscroll_cale_day_pane_t1

0xcaa3,	// (0x0005d805) scroll_pane_cp09_ParamLimits

0x54e1,	// (0x00056243) main_mup_eq_pane_t1_ParamLimits

0x54e1,	// (0x00056243) main_mup_eq_pane_t1

0x54fb,	// (0x0005625d) main_mup_eq_pane_t2_ParamLimits

0x54fb,	// (0x0005625d) main_mup_eq_pane_t2

0x5513,	// (0x00056275) main_mup_eq_pane_t3_ParamLimits

0x5513,	// (0x00056275) main_mup_eq_pane_t3

0x552b,	// (0x0005628d) main_mup_eq_pane_t4_ParamLimits

0x552b,	// (0x0005628d) main_mup_eq_pane_t4

0x5543,	// (0x000562a5) main_mup_eq_pane_t5_ParamLimits

0x5543,	// (0x000562a5) main_mup_eq_pane_t5

0x555b,	// (0x000562bd) main_mup_eq_pane_t6_ParamLimits

0x555b,	// (0x000562bd) main_mup_eq_pane_t6

0x556f,	// (0x000562d1) main_mup_eq_pane_t7_ParamLimits

0x556f,	// (0x000562d1) main_mup_eq_pane_t7

0x5583,	// (0x000562e5) main_mup_eq_pane_t8_ParamLimits

0x5583,	// (0x000562e5) main_mup_eq_pane_t8

0x5599,	// (0x000562fb) main_mup_eq_pane_t9_ParamLimits

0x5599,	// (0x000562fb) main_mup_eq_pane_t9

0x55b1,	// (0x00056313) main_mup_eq_pane_t10_ParamLimits

0x55b1,	// (0x00056313) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x000600de) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x000600de) main_mup_eq_pane_t

0x566e,	// (0x000563d0) mup_equalizer_pane_cp5_ParamLimits

0x5684,	// (0x000563e6) mup_equalizer_pane_cp6_ParamLimits

0x569c,	// (0x000563fe) mup_equalizer_pane_cp7_ParamLimits

0x34cf,	// (0x00054231) main_gallery_pane

0xe4ba,	// (0x0005f21c) smil2_volume_pane

0xe4e3,	// (0x0005f245) smil_status_volume_pane_g1_ParamLimits

0xe4c2,	// (0x0005f224) smil_status_volume_pane_g2_ParamLimits

0x60ee,	// (0x00056e50) smil_status_volume_pane_g3_ParamLimits

0xf527,	// (0x00060289) smil_status_volume_pane_g_ParamLimits

0xe4d5,	// (0x0005f237) bg_popup_window_pane_cp07_ParamLimits

0xe68b,	// (0x0005f3ed) blid_firmament_pane

0xbef6,	// (0x0005cc58) aid_size_cell_gallery_ParamLimits

0xbef6,	// (0x0005cc58) aid_size_cell_gallery

0xbef6,	// (0x0005cc58) grid_gallery_pane_ParamLimits

0xbef6,	// (0x0005cc58) grid_gallery_pane

0xd26e,	// (0x0005dfd0) cell_gallery_pane_ParamLimits

0xd26e,	// (0x0005dfd0) cell_gallery_pane

0xbe9d,	// (0x0005cbff) bg_cell_gallery_focus_pane_ParamLimits

0xbe9d,	// (0x0005cbff) bg_cell_gallery_focus_pane

0xbf04,	// (0x0005cc66) cell_gallery_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_gallery_pane_g1

0xbf04,	// (0x0005cc66) cell_gallery_pane_g2_ParamLimits

0xbf04,	// (0x0005cc66) cell_gallery_pane_g2

0xbf04,	// (0x0005cc66) cell_gallery_pane_g3_ParamLimits

0xbf04,	// (0x0005cc66) cell_gallery_pane_g3

0xbf12,	// (0x0005cc74) cell_gallery_pane_g4_ParamLimits

0xbf12,	// (0x0005cc74) cell_gallery_pane_g4

0x0003,

0xf5d3,	// (0x00060335) cell_gallery_pane_g_ParamLimits

0xf5d3,	// (0x00060335) cell_gallery_pane_g

0xe7d7,	// (0x0005f539) bg_cell_gallery_focus_pane_g1

0xe7df,	// (0x0005f541) bg_cell_gallery_focus_pane_g2

0xe7e7,	// (0x0005f549) bg_cell_gallery_focus_pane_g3

0xe7ef,	// (0x0005f551) bg_cell_gallery_focus_pane_g4

0xe7f7,	// (0x0005f559) bg_cell_gallery_focus_pane_g5

0xe7ff,	// (0x0005f561) bg_cell_gallery_focus_pane_g6

0xe807,	// (0x0005f569) bg_cell_gallery_focus_pane_g7

0xe80f,	// (0x0005f571) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5dc,	// (0x0006033e) bg_cell_gallery_focus_pane_g

0xe817,	// (0x0005f579) aid_firma_cardinal

0xe82b,	// (0x0005f58d) blid_firmament_pane_t1

0xe842,	// (0x0005f5a4) blid_firmament_pane_t2

0xe859,	// (0x0005f5bb) blid_firmament_pane_t3

0xe870,	// (0x0005f5d2) blid_firmament_pane_t4

0x0003,

0xf5ed,	// (0x0006034f) blid_firmament_pane_t

0xe887,	// (0x0005f5e9) blid_sat_info_pane

0xbf42,	// (0x0005cca4) blid_sat_info_pane_g1

0xbf42,	// (0x0005cca4) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) blid_sat_info_pane_g

0xe897,	// (0x0005f5f9) blid_sat_info_pane_t1

0xe8a5,	// (0x0005f607) smil2_volume_content_pane

0xe8ae,	// (0x0005f610) smil2_volume_pane_g1

0xc077,	// (0x0005cdd9) smil2_volume_content_pane_g1

0xe8b6,	// (0x0005f618) smil2_volume_content_pane_g2

0xe8bf,	// (0x0005f621) smil2_volume_content_pane_g3

0xe8c8,	// (0x0005f62a) smil2_volume_content_pane_g4

0xe8d1,	// (0x0005f633) smil2_volume_content_pane_g5

0xe8da,	// (0x0005f63c) smil2_volume_content_pane_g6

0xe8e3,	// (0x0005f645) smil2_volume_content_pane_g7

0xe8ec,	// (0x0005f64e) smil2_volume_content_pane_g8

0xe8f5,	// (0x0005f657) smil2_volume_content_pane_g9

0xe8fe,	// (0x0005f660) smil2_volume_content_pane_g10

0x0009,

0xf5f6,	// (0x00060358) smil2_volume_content_pane_g

0x3afb,	// (0x0005485d) cale_week_day_heading_pane_t1_ParamLimits

0x3b16,	// (0x00054878) cale_week_day_heading_pane_t2_ParamLimits

0x3b31,	// (0x00054893) cale_week_day_heading_pane_t3_ParamLimits

0x3b4c,	// (0x000548ae) cale_week_day_heading_pane_t4_ParamLimits

0x3b67,	// (0x000548c9) cale_week_day_heading_pane_t5_ParamLimits

0x3b82,	// (0x000548e4) cale_week_day_heading_pane_t6_ParamLimits

0x3b9d,	// (0x000548ff) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0005fe86) cale_week_day_heading_pane_t_ParamLimits

0xc6b5,	// (0x0005d417) bg_cale_side_pane_ParamLimits

0x3bb8,	// (0x0005491a) cale_week_time_pane_t1_ParamLimits

0x3bd2,	// (0x00054934) cale_week_time_pane_t2_ParamLimits

0x3bec,	// (0x0005494e) cale_week_time_pane_t3_ParamLimits

0x3c06,	// (0x00054968) cale_week_time_pane_t4_ParamLimits

0x3c20,	// (0x00054982) cale_week_time_pane_t5_ParamLimits

0x3c3a,	// (0x0005499c) cale_week_time_pane_t6_ParamLimits

0x3c5a,	// (0x000549bc) cale_week_time_pane_t7_ParamLimits

0x3c7c,	// (0x000549de) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0005fe95) cale_week_time_pane_t_ParamLimits

0x3ca0,	// (0x00054a02) cell_cale_week_pane_g2_ParamLimits

0xc6b5,	// (0x0005d417) bg_cale_side_pane_cp01_ParamLimits

0x4e00,	// (0x00055b62) cale_month_week_pane_t1_ParamLimits

0x4e19,	// (0x00055b7b) cale_month_week_pane_t2_ParamLimits

0x4e32,	// (0x00055b94) cale_month_week_pane_t3_ParamLimits

0x4e4b,	// (0x00055bad) cale_month_week_pane_t4_ParamLimits

0x4e66,	// (0x00055bc8) cale_month_week_pane_t5_ParamLimits

0x4e87,	// (0x00055be9) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0005ff63) cale_month_week_pane_t_ParamLimits

0x4fce,	// (0x00055d30) cell_cale_month_pane_g1_ParamLimits

0x34cf,	// (0x00054231) main_cale_event_viewer_pane

0xb803,	// (0x0005c565) listscroll_cale_event_viewer_pane

0xe907,	// (0x0005f669) list_cale_ev_pane

0xe90f,	// (0x0005f671) scroll_pane_cp023

0xe91b,	// (0x0005f67d) field_cale_ev_pane_ParamLimits

0xe91b,	// (0x0005f67d) field_cale_ev_pane

0xe939,	// (0x0005f69b) field_cale_ev_content_pane_ParamLimits

0xe939,	// (0x0005f69b) field_cale_ev_content_pane

0xe945,	// (0x0005f6a7) field_cale_ev_pane_g1_ParamLimits

0xe945,	// (0x0005f6a7) field_cale_ev_pane_g1

0xe951,	// (0x0005f6b3) field_cale_ev_pane_g2_ParamLimits

0xe951,	// (0x0005f6b3) field_cale_ev_pane_g2

0xe969,	// (0x0005f6cb) field_cale_ev_pane_g3_ParamLimits

0xe969,	// (0x0005f6cb) field_cale_ev_pane_g3

0x0002,

0xf60b,	// (0x0006036d) field_cale_ev_pane_g_ParamLimits

0xf60b,	// (0x0006036d) field_cale_ev_pane_g

0xe981,	// (0x0005f6e3) field_cale_ev_pane_t1_ParamLimits

0xe981,	// (0x0005f6e3) field_cale_ev_pane_t1

0xe998,	// (0x0005f6fa) field_cale_ev_content_pane_t1_ParamLimits

0xe998,	// (0x0005f6fa) field_cale_ev_content_pane_t1

0xd245,	// (0x0005dfa7) bg_button_pane_cp01

0x387d,	// (0x000545df) listscroll_cale_week_pane_ParamLimits

0x388d,	// (0x000545ef) popup_toolbar_window_cp01

0xc686,	// (0x0005d3e8) listscroll_cale_week_pane_t1_ParamLimits

0x387d,	// (0x000545df) listscroll_cale_day_pane_ParamLimits

0xc7f2,	// (0x0005d554) popup_toolbar_window_cp02

0xca91,	// (0x0005d7f3) listscroll_cale_day_pane_t1_ParamLimits

0x387d,	// (0x000545df) main_cale_month_pane_ParamLimits

0x6037,	// (0x00056d99) popup_toolbar_window_cp03_ParamLimits

0x6037,	// (0x00056d99) popup_toolbar_window_cp03

0x5992,	// (0x000566f4) main_image_pane_g2_ParamLimits

0x5992,	// (0x000566f4) main_image_pane_g2

0x599e,	// (0x00056700) main_image_pane_g3_ParamLimits

0x599e,	// (0x00056700) main_image_pane_g3

0x0002,

0xf40e,	// (0x00060170) main_image_pane_g_ParamLimits

0xf40e,	// (0x00060170) main_image_pane_g

0xd419,	// (0x0005e17b) main_image_pane_t1_ParamLimits

0x59aa,	// (0x0005670c) main_image_pane_t2_ParamLimits

0x59aa,	// (0x0005670c) main_image_pane_t2

0x59bc,	// (0x0005671e) main_image_pane_t3_ParamLimits

0x59bc,	// (0x0005671e) main_image_pane_t3

0x59ce,	// (0x00056730) main_image_pane_t4_ParamLimits

0x59ce,	// (0x00056730) main_image_pane_t4

0x0003,

0xf415,	// (0x00060177) main_image_pane_t_ParamLimits

0xf415,	// (0x00060177) main_image_pane_t

0x59e0,	// (0x00056742) popup_image_details_window_cp01

0x59ea,	// (0x0005674c) popup_toobar_trans_pane_cp01_ParamLimits

0x59ea,	// (0x0005674c) popup_toobar_trans_pane_cp01

0x5f87,	// (0x00056ce9) popup_image_details_window_ParamLimits

0x5f87,	// (0x00056ce9) popup_image_details_window

0x5f95,	// (0x00056cf7) popup_image_focus_window

0x34b5,	// (0x00054217) camera2_autofocus_pane_ParamLimits

0x34b5,	// (0x00054217) camera2_autofocus_pane

0xb803,	// (0x0005c565) bg_popup_sub_pane_cp06

0xe9b6,	// (0x0005f718) popup_image_focus_window_g1

0xe9be,	// (0x0005f720) popup_image_focus_window_g2

0xe9c6,	// (0x0005f728) popup_image_focus_window_g3

0xe9ce,	// (0x0005f730) popup_image_focus_window_g4

0x0003,

0xf612,	// (0x00060374) popup_image_focus_window_g

0xe9d6,	// (0x0005f738) popup_image_focus_window_t1

0xe9e4,	// (0x0005f746) popup_image_focus_window_t2

0xe9f4,	// (0x0005f756) popup_image_focus_window_t3

0x0002,

0xf61b,	// (0x0006037d) popup_image_focus_window_t

0xbf04,	// (0x0005cc66) camera2_autofocus_pane_g1

0xbe9d,	// (0x0005cbff) bg_tb_trans_pane_cp01

0xea02,	// (0x0005f764) popup_image_details_window_g1

0xea15,	// (0x0005f777) popup_image_details_window_g2

0x0002,

0xf62d,	// (0x0006038f) popup_image_details_window_g

0xea3e,	// (0x0005f7a0) popup_image_details_window_t1

0xea50,	// (0x0005f7b2) popup_image_details_window_t2

0xea69,	// (0x0005f7cb) popup_image_details_window_t3

0xea7d,	// (0x0005f7df) popup_image_details_window_t4

0xea98,	// (0x0005f7fa) popup_image_details_window_t5

0x0004,

0xf634,	// (0x00060396) popup_image_details_window_t

0xbf8c,	// (0x0005ccee) bg_calc_paper_pane_ParamLimits

0x34cf,	// (0x00054231) grid_highlight_pane_cp013

0x361f,	// (0x00054381) list_calc_pane_ParamLimits

0x3631,	// (0x00054393) scroll_pane_cp024

0xbfa0,	// (0x0005cd02) bg_calc_display_pane_ParamLimits

0x3639,	// (0x0005439b) calc_display_pane_t1_ParamLimits

0x364e,	// (0x000543b0) calc_display_pane_t2_ParamLimits

0x3663,	// (0x000543c5) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0005fe06) calc_display_pane_t_ParamLimits

0x373d,	// (0x0005449f) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0005fe23) cell_calc_pane_g

0x3746,	// (0x000544a8) cell_calc_pane_t1

0xbff5,	// (0x0005cd57) grid_highlight_pane_cp02_ParamLimits

0xc00b,	// (0x0005cd6d) toolbar_button_pane_cp01_ParamLimits

0xc00b,	// (0x0005cd6d) toolbar_button_pane_cp01

0xd45e,	// (0x0005e1c0) temp_image_control_pane_ParamLimits

0xd45e,	// (0x0005e1c0) temp_image_control_pane

0x5f03,	// (0x00056c65) main_mp3_pane

0xeab2,	// (0x0005f814) temp_image_control_pane_g1_ParamLimits

0xeab2,	// (0x0005f814) temp_image_control_pane_g1

0xeac0,	// (0x0005f822) temp_image_control_pane_g2_ParamLimits

0xeac0,	// (0x0005f822) temp_image_control_pane_g2

0xead2,	// (0x0005f834) temp_image_control_pane_g3_ParamLimits

0xead2,	// (0x0005f834) temp_image_control_pane_g3

0x63aa,	// (0x0005710c) temp_image_control_pane_g4_ParamLimits

0x63aa,	// (0x0005710c) temp_image_control_pane_g4

0x0003,

0xf63f,	// (0x000603a1) temp_image_control_pane_g_ParamLimits

0xf63f,	// (0x000603a1) temp_image_control_pane_g

0xeab2,	// (0x0005f814) main_mp3_pane_g1

0x63bb,	// (0x0005711d) main_mp3_pane_g2

0x0007,

0xf648,	// (0x000603aa) main_mp3_pane_g

0xeb07,	// (0x0005f869) main_mp3_pane_t1

0xbf12,	// (0x0005cc74) main_camera_pane_g8_ParamLimits

0xbf12,	// (0x0005cc74) main_camera_pane_g8

0x3e47,	// (0x00054ba9) main_video_pane_g7_ParamLimits

0x3e47,	// (0x00054ba9) main_video_pane_g7

0x6249,	// (0x00056fab) main_camera2_pane_t7_ParamLimits

0x6249,	// (0x00056fab) main_camera2_pane_t7

0xc849,	// (0x0005d5ab) scroll_pane_cp025_ParamLimits

0xc849,	// (0x0005d5ab) scroll_pane_cp025

0xc85d,	// (0x0005d5bf) scroll_pane_cp026_ParamLimits

0xc85d,	// (0x0005d5bf) scroll_pane_cp026

0xc86c,	// (0x0005d5ce) wml_content_pane_ParamLimits

0x34cf,	// (0x00054231) main_touch_calib_pane

0x645f,	// (0x000571c1) main_touch_calib_pane_g1

0x646b,	// (0x000571cd) main_touch_calib_pane_g2

0x6477,	// (0x000571d9) main_touch_calib_pane_g3

0x6483,	// (0x000571e5) main_touch_calib_pane_g4

0x0003,

0xf666,	// (0x000603c8) main_touch_calib_pane_g

0x648f,	// (0x000571f1) main_touch_calib_pane_t1

0x64a8,	// (0x0005720a) main_touch_calib_pane_t2

0x0004,

0xf66f,	// (0x000603d1) main_touch_calib_pane_t

0xcf8c,	// (0x0005dcee) mup_progress_pane_cp02

0xcfc1,	// (0x0005dd23) navi_pane_g1

0xd07c,	// (0x0005ddde) navi_pane_mp_t3

0x5f03,	// (0x00056c65) main_mp3_pane_ParamLimits

0x6074,	// (0x00056dd6) navi_pane_ParamLimits

0xeab2,	// (0x0005f814) main_mp3_pane_g1_ParamLimits

0x63bb,	// (0x0005711d) main_mp3_pane_g2_ParamLimits

0x63c7,	// (0x00057129) main_mp3_pane_g3_ParamLimits

0x63c7,	// (0x00057129) main_mp3_pane_g3

0x63d3,	// (0x00057135) main_mp3_pane_g4_ParamLimits

0x63d3,	// (0x00057135) main_mp3_pane_g4

0xbf04,	// (0x0005cc66) main_mp3_pane_g5_ParamLimits

0xbf04,	// (0x0005cc66) main_mp3_pane_g5

0xeae2,	// (0x0005f844) main_mp3_pane_g6_ParamLimits

0xeae2,	// (0x0005f844) main_mp3_pane_g6

0xeaef,	// (0x0005f851) main_mp3_pane_g7_ParamLimits

0xeaef,	// (0x0005f851) main_mp3_pane_g7

0xeafb,	// (0x0005f85d) main_mp3_pane_g8_ParamLimits

0xeafb,	// (0x0005f85d) main_mp3_pane_g8

0xf648,	// (0x000603aa) main_mp3_pane_g_ParamLimits

0x63df,	// (0x00057141) main_mp3_pane_t2

0x63ef,	// (0x00057151) main_mp3_pane_t3

0xeb15,	// (0x0005f877) main_mp3_pane_t4

0xeb23,	// (0x0005f885) main_mp3_pane_t5

0x0005,

0xf659,	// (0x000603bb) main_mp3_pane_t

0xeb31,	// (0x0005f893) mup_progress_pane_cp01

0x32ea,	// (0x0005404c) aid_zoom_text_secondary2

0xe907,	// (0x0005f669) list_cale_ev2_pane

0xe90f,	// (0x0005f671) scroll_pane_cp023_ParamLimits

0x6503,	// (0x00057265) field_cale_ev2_pane_ParamLimits

0x6503,	// (0x00057265) field_cale_ev2_pane

0xeb39,	// (0x0005f89b) field_cale_ev2_pane_g1_ParamLimits

0xeb39,	// (0x0005f89b) field_cale_ev2_pane_g1

0xeb45,	// (0x0005f8a7) field_cale_ev2_pane_g2_ParamLimits

0xeb45,	// (0x0005f8a7) field_cale_ev2_pane_g2

0xeb5d,	// (0x0005f8bf) field_cale_ev2_pane_g3_ParamLimits

0xeb5d,	// (0x0005f8bf) field_cale_ev2_pane_g3

0x0003,

0xf67a,	// (0x000603dc) field_cale_ev2_pane_g_ParamLimits

0xf67a,	// (0x000603dc) field_cale_ev2_pane_g

0xeb81,	// (0x0005f8e3) field_cale_ev2_pane_t1_ParamLimits

0xeb81,	// (0x0005f8e3) field_cale_ev2_pane_t1

0xeb98,	// (0x0005f8fa) field_cale_ev2_pane_t2_ParamLimits

0xeb98,	// (0x0005f8fa) field_cale_ev2_pane_t2

0x0001,

0xf683,	// (0x000603e5) field_cale_ev2_pane_t_ParamLimits

0xf683,	// (0x000603e5) field_cale_ev2_pane_t

0x58a8,	// (0x0005660a) main_postcard_pane_g5_ParamLimits

0x58a8,	// (0x0005660a) main_postcard_pane_g5

0x58b6,	// (0x00056618) main_postcard_pane_g6_ParamLimits

0x58b6,	// (0x00056618) main_postcard_pane_g6

0xbef6,	// (0x0005cc58) camera2_autofocus_pane_cp_ParamLimits

0xbef6,	// (0x0005cc58) camera2_autofocus_pane_cp

0x5f03,	// (0x00056c65) main_mup3_pane

0x656c,	// (0x000572ce) main_mup3_pane_g1_ParamLimits

0x656c,	// (0x000572ce) main_mup3_pane_g1

0x65bb,	// (0x0005731d) main_mup3_pane_g2_ParamLimits

0x65bb,	// (0x0005731d) main_mup3_pane_g2

0x661e,	// (0x00057380) main_mup3_pane_g3_ParamLimits

0x661e,	// (0x00057380) main_mup3_pane_g3

0x667d,	// (0x000573df) main_mup3_pane_g4_ParamLimits

0x667d,	// (0x000573df) main_mup3_pane_g4

0x66dc,	// (0x0005743e) main_mup3_pane_g5_ParamLimits

0x66dc,	// (0x0005743e) main_mup3_pane_g5

0x673b,	// (0x0005749d) main_mup3_pane_g6_ParamLimits

0x673b,	// (0x0005749d) main_mup3_pane_g6

0xbf12,	// (0x0005cc74) main_mup3_pane_g7_ParamLimits

0xbf12,	// (0x0005cc74) main_mup3_pane_g7

0x0007,

0xf693,	// (0x000603f5) main_mup3_pane_g_ParamLimits

0xf693,	// (0x000603f5) main_mup3_pane_g

0x67ab,	// (0x0005750d) main_mup3_pane_t1_ParamLimits

0x67ab,	// (0x0005750d) main_mup3_pane_t1

0x688c,	// (0x000575ee) main_mup3_pane_t2_ParamLimits

0x688c,	// (0x000575ee) main_mup3_pane_t2

0x696d,	// (0x000576cf) main_mup3_pane_t4_ParamLimits

0x696d,	// (0x000576cf) main_mup3_pane_t4

0x697f,	// (0x000576e1) main_mup3_pane_t5_ParamLimits

0x697f,	// (0x000576e1) main_mup3_pane_t5

0x6a45,	// (0x000577a7) main_mup3_pane_t6_ParamLimits

0x6a45,	// (0x000577a7) main_mup3_pane_t6

0x0005,

0xf6a4,	// (0x00060406) main_mup3_pane_t_ParamLimits

0xf6a4,	// (0x00060406) main_mup3_pane_t

0x6ae2,	// (0x00057844) mup3_progress_pane_ParamLimits

0x6ae2,	// (0x00057844) mup3_progress_pane

0x0a44,	// (0x000517a6) popup_mup3_control_window_ParamLimits

0x0a44,	// (0x000517a6) popup_mup3_control_window

0xebad,	// (0x0005f90f) popup_mup3_text_window

0x6b45,	// (0x000578a7) mup3_progress_pane_t1

0x6b64,	// (0x000578c6) mup3_progress_pane_t2

0xebb5,	// (0x0005f917) mup3_progress_pane_t3

0x0002,

0xf6b1,	// (0x00060413) mup3_progress_pane_t

0xebd2,	// (0x0005f934) mup_progress_pane_cp03

0xebe2,	// (0x0005f944) bg_tb_trans_pane_cp04

0xebe2,	// (0x0005f944) mup3_volume_pane

0xebea,	// (0x0005f94c) popup_mup3_control_window_g1

0xebea,	// (0x0005f94c) mup3_volume_pane_g1

0xebea,	// (0x0005f94c) mup3_volume_pane_g2

0xebea,	// (0x0005f94c) mup3_volume_pane_g3

0x0002,

0xf6b8,	// (0x0006041a) mup3_volume_pane_g

0xb803,	// (0x0005c565) bg_tb_trans_pane_cp03

0xebf2,	// (0x0005f954) popup_mup3_text_window_g1

0xebfa,	// (0x0005f95c) popup_mup3_text_window_t1

0xbfe8,	// (0x0005cd4a) list_calc_item_pane_g1_ParamLimits

0xe601,	// (0x0005f363) mup_volume_pane_cp_g1

0x64c1,	// (0x00057223) main_touch_calib_pane_t3

0x64d7,	// (0x00057239) main_touch_calib_pane_t4

0x64ed,	// (0x0005724f) main_touch_calib_pane_t5

0x32a2,	// (0x00054004) aid_cell_size_toolbar2

0x32aa,	// (0x0005400c) aid_popup3_width_pane

0x31de,	// (0x00053f40) aid_zoom_text_msg_primary

0x3d49,	// (0x00054aab) vorec_t7

0xbfac,	// (0x0005cd0e) bg_calc_paper_pane_g1_ParamLimits

0xbfb8,	// (0x0005cd1a) bg_calc_paper_pane_g2_ParamLimits

0xbfc4,	// (0x0005cd26) bg_calc_paper_pane_g3_ParamLimits

0xbfd0,	// (0x0005cd32) bg_calc_paper_pane_g4_ParamLimits

0xbfdc,	// (0x0005cd3e) bg_calc_paper_pane_g5_ParamLimits

0x36a2,	// (0x00054404) bg_calc_paper_pane_g6_ParamLimits

0x36b3,	// (0x00054415) bg_calc_paper_pane_g7_ParamLimits

0x36c4,	// (0x00054426) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0005fe0d) bg_calc_paper_pane_g_ParamLimits

0x36d5,	// (0x00054437) calc_bg_paper_pane_g9_ParamLimits

0xbef6,	// (0x0005cc58) image_qvga_pane_ParamLimits

0xbef6,	// (0x0005cc58) image_qvga_pane

0xbe7b,	// (0x0005cbdd) bg_popup_sub_pane_cp04_ParamLimits

0xd395,	// (0x0005e0f7) popup_mup_playback_window_g1_ParamLimits

0xd3a1,	// (0x0005e103) popup_mup_playback_window_t1_ParamLimits

0xd3b6,	// (0x0005e118) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x0006016b) popup_mup_playback_window_t_ParamLimits

0xbf04,	// (0x0005cc66) main_mup2_pane_g3_ParamLimits

0xbf04,	// (0x0005cc66) main_mup2_pane_g3

0x4008,	// (0x00054d6a) popup_toolbar_window_cp04

0xd73a,	// (0x0005e49c) popup_call2_audio_second_window_g3_ParamLimits

0xd73a,	// (0x0005e49c) popup_call2_audio_second_window_g3

0xdb52,	// (0x0005e8b4) popup_call2_audio_first_window_g4_ParamLimits

0xdb52,	// (0x0005e8b4) popup_call2_audio_first_window_g4

0xe179,	// (0x0005eedb) popup_call2_audio_in_window_g4_ParamLimits

0xe179,	// (0x0005eedb) popup_call2_audio_in_window_g4

0x5985,	// (0x000566e7) aid_area_sk_bg_cut_ParamLimits

0x5985,	// (0x000566e7) aid_area_sk_bg_cut

0xd3cb,	// (0x0005e12d) aid_area_sk_bg_cut_2_ParamLimits

0xd3cb,	// (0x0005e12d) aid_area_sk_bg_cut_2

0xb803,	// (0x0005c565) aid_placing_details_win

0xb803,	// (0x0005c565) aid_placing_details_win_2

0xbf04,	// (0x0005cc66) camera2_autofocus_pane_g1_ParamLimits

0x345b,	// (0x000541bd) popup_fixed_preview_cale_window_ParamLimits

0x345b,	// (0x000541bd) popup_fixed_preview_cale_window

0xd0fa,	// (0x0005de5c) navi_slider_pane_g3

0xd103,	// (0x0005de65) navi_slider_pane_g4

0xd10c,	// (0x0005de6e) navi_slider_pane_g5

0xd0fa,	// (0x0005de5c) navi_slider_pane_g6

0x54b5,	// (0x00056217) navi_slider_pane_g7

0xd20a,	// (0x0005df6c) mup_scale_pane_g3

0xd213,	// (0x0005df75) mup_scale_pane_g4

0xd21c,	// (0x0005df7e) mup_scale_pane_g5

0x56b4,	// (0x00056416) mup_scale_pane_g6

0x56bd,	// (0x0005641f) mup_scale_pane_g7

0x0fef,	// (0x00051d51) cams2_slider_pane_g3

0x0fef,	// (0x00051d51) cams2_slider_pane_g4

0x0fef,	// (0x00051d51) cams2_slider_pane_g5

0x0fef,	// (0x00051d51) cams2_slider_pane_g6

0x0fef,	// (0x00051d51) cams2_slider_pane_g7

0xbf42,	// (0x0005cca4) camera2_autofocus_pane_cp_g1

0xe441,	// (0x0005f1a3) bg_popup_preview_window_pane_cp02_ParamLimits

0xe441,	// (0x0005f1a3) bg_popup_preview_window_pane_cp02

0xec08,	// (0x0005f96a) list_fp_cale_pane_ParamLimits

0xec08,	// (0x0005f96a) list_fp_cale_pane

0xec14,	// (0x0005f976) popup_fixed_preview_cale_window_t1_ParamLimits

0xec14,	// (0x0005f976) popup_fixed_preview_cale_window_t1

0x6b83,	// (0x000578e5) popup_fixed_preview_cale_window_t2_ParamLimits

0x6b83,	// (0x000578e5) popup_fixed_preview_cale_window_t2

0x6b98,	// (0x000578fa) popup_fixed_preview_cale_window_t3_ParamLimits

0x6b98,	// (0x000578fa) popup_fixed_preview_cale_window_t3

0x0002,

0xf6bf,	// (0x00060421) popup_fixed_preview_cale_window_t_ParamLimits

0xf6bf,	// (0x00060421) popup_fixed_preview_cale_window_t

0x6bad,	// (0x0005790f) list_single_fp_cale_pane_ParamLimits

0x6bad,	// (0x0005790f) list_single_fp_cale_pane

0xec32,	// (0x0005f994) list_single_fp_cale_pane_g1_ParamLimits

0xec32,	// (0x0005f994) list_single_fp_cale_pane_g1

0xec3e,	// (0x0005f9a0) list_single_fp_cale_pane_g2_ParamLimits

0xec3e,	// (0x0005f9a0) list_single_fp_cale_pane_g2

0x0002,

0xf6c6,	// (0x00060428) list_single_fp_cale_pane_g_ParamLimits

0xf6c6,	// (0x00060428) list_single_fp_cale_pane_g

0xec57,	// (0x0005f9b9) list_single_fp_cale_pane_t1_ParamLimits

0xec57,	// (0x0005f9b9) list_single_fp_cale_pane_t1

0xec69,	// (0x0005f9cb) list_single_fp_cale_pane_t2_ParamLimits

0xec69,	// (0x0005f9cb) list_single_fp_cale_pane_t2

0x0001,

0xf6cd,	// (0x0006042f) list_single_fp_cale_pane_t_ParamLimits

0xf6cd,	// (0x0006042f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x34cf,	// (0x00054231) main_dialer_pane

0xb803,	// (0x0005c565) aid_cell_size_keypad

0xb803,	// (0x0005c565) dialer_ne_pane

0xb803,	// (0x0005c565) grid_dialer_command_1_pane

0xb803,	// (0x0005c565) grid_dialer_command_2_pane

0xb803,	// (0x0005c565) grid_dialer_keypad_pane

0xe4d5,	// (0x0005f237) bg_popup_call_pane_cp06_ParamLimits

0xe4d5,	// (0x0005f237) bg_popup_call_pane_cp06

0xe4d5,	// (0x0005f237) dialer_ne_clear_pane_ParamLimits

0xe4d5,	// (0x0005f237) dialer_ne_clear_pane

0xbf42,	// (0x0005cca4) dialer_ne_pane_g1

0xbf60,	// (0x0005ccc2) dialer_ne_pane_t1_ParamLimits

0xbf60,	// (0x0005ccc2) dialer_ne_pane_t1

0xee26,	// (0x0005fb88) dialer_ne_pane_t2_ParamLimits

0xee26,	// (0x0005fb88) dialer_ne_pane_t2

0x6bc0,	// (0x00057922) dialer_ne_pane_t3_ParamLimits

0x6bc0,	// (0x00057922) dialer_ne_pane_t3

0x0002,

0xf6d2,	// (0x00060434) dialer_ne_pane_t_ParamLimits

0xf6d2,	// (0x00060434) dialer_ne_pane_t

0x6bc0,	// (0x00057922) dialer_ne_pane_t3_copy1_ParamLimits

0x6bc0,	// (0x00057922) dialer_ne_pane_t3_copy1

0xec9c,	// (0x0005f9fe) cell_dialer_keypad_pane_ParamLimits

0xec9c,	// (0x0005f9fe) cell_dialer_keypad_pane

0xbe9d,	// (0x0005cbff) cell_dialer_command_1_pane_ParamLimits

0xbe9d,	// (0x0005cbff) cell_dialer_command_1_pane

0xecb3,	// (0x0005fa15) cell_dialer_command_2_pane_ParamLimits

0xecb3,	// (0x0005fa15) cell_dialer_command_2_pane

0xbe9d,	// (0x0005cbff) bg_button_pane_cp02_ParamLimits

0xbe9d,	// (0x0005cbff) bg_button_pane_cp02

0xbf04,	// (0x0005cc66) cell_dialer_keypad_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_dialer_keypad_pane_g1

0xbe9d,	// (0x0005cbff) bg_button_pane_cp03_ParamLimits

0xbe9d,	// (0x0005cbff) bg_button_pane_cp03

0xbf04,	// (0x0005cc66) cell_dialer_command_1_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_dialer_command_1_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp04

0xbf42,	// (0x0005cca4) cell_dialer_command_2_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp06

0xbf42,	// (0x0005cca4) dialer_ne_clear_pane_g1

0xcfcd,	// (0x0005dd2f) navi_pane_g2

0xcffb,	// (0x0005dd5d) navi_pane_g3

0x0002,

0xf311,	// (0x00060073) navi_pane_g

0xd08a,	// (0x0005ddec) navi_pane_mv_g2

0xd0b1,	// (0x0005de13) navi_pane_mv_g5

0x5480,	// (0x000561e2) navi_pane_mv_t1

0xbfa0,	// (0x0005cd02) main_clock2_pane

0xbef6,	// (0x0005cc58) main_clock2_list_pane_ParamLimits

0xbef6,	// (0x0005cc58) main_clock2_list_pane

0x6c36,	// (0x00057998) main_clock2_pane_t1_ParamLimits

0x6c36,	// (0x00057998) main_clock2_pane_t1

0x6c64,	// (0x000579c6) main_clock2_pane_t2_ParamLimits

0x6c64,	// (0x000579c6) main_clock2_pane_t2

0x0004,

0xf6de,	// (0x00060440) main_clock2_pane_t_ParamLimits

0xf6de,	// (0x00060440) main_clock2_pane_t

0x6cc9,	// (0x00057a2b) popup_clock_analogue_window_cp03_ParamLimits

0x6cc9,	// (0x00057a2b) popup_clock_analogue_window_cp03

0x6ce7,	// (0x00057a49) popup_clock_digital_window_cp02_ParamLimits

0x6ce7,	// (0x00057a49) popup_clock_digital_window_cp02

0x6d5c,	// (0x00057abe) main_clock2_list_single_pane_ParamLimits

0x6d5c,	// (0x00057abe) main_clock2_list_single_pane

0xc707,	// (0x0005d469) list_highlight_pane_cp05

0xecf6,	// (0x0005fa58) main_clock2_list_single_pane_t1

0x4008,	// (0x00054d6a) popup_toolbar_window_cp04_ParamLimits

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g2

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g3_ParamLimits

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g3

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g4_ParamLimits

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g4

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g5_ParamLimits

0xbf12,	// (0x0005cc74) camera2_autofocus_pane_g5

0x0004,

0xf622,	// (0x00060384) camera2_autofocus_pane_g_ParamLimits

0xf622,	// (0x00060384) camera2_autofocus_pane_g

0x652d,	// (0x0005728f) camera2_autofocus_pane_cp_g2

0x6535,	// (0x00057297) camera2_autofocus_pane_cp_g3

0x653d,	// (0x0005729f) camera2_autofocus_pane_cp_g4

0x6545,	// (0x000572a7) camera2_autofocus_pane_cp_g5

0x0004,

0xf688,	// (0x000603ea) camera2_autofocus_pane_cp_g

0xb803,	// (0x0005c565) popup_dialer_spcha_window

0xb803,	// (0x0005c565) bg_popup_sub_pane_cp07

0xb803,	// (0x0005c565) list_spcha_pane

0xed04,	// (0x0005fa66) list_single_spcha_pane_ParamLimits

0xed04,	// (0x0005fa66) list_single_spcha_pane

0xb803,	// (0x0005c565) list_highlight_pane_cp06

0xcc22,	// (0x0005d984) list_single_spcha_pane_t1

0xdf23,	// (0x0005ec85) popup_call2_audio_out_window_g4_ParamLimits

0xdf23,	// (0x0005ec85) popup_call2_audio_out_window_g4

0x34cf,	// (0x00054231) main_imed2_pane

0x5f9d,	// (0x00056cff) popup_imed_adjust2_window

0x5fb0,	// (0x00056d12) popup_imed_trans_window_ParamLimits

0x5fb0,	// (0x00056d12) popup_imed_trans_window

0xe6d6,	// (0x0005f438) popup_blid_sat_info2_window_t1

0xe6e4,	// (0x0005f446) popup_blid_sat_info2_window_t2

0x000a,

0xf5b7,	// (0x00060319) popup_blid_sat_info2_window_t

0x6e11,	// (0x00057b73) aid_size_cell_colour_35

0x6e2b,	// (0x00057b8d) aid_size_cell_colour_112

0x6e42,	// (0x00057ba4) aid_size_cell_effect

0xbe9d,	// (0x0005cbff) bg_tb_trans_pane_cp02

0xcc40,	// (0x0005d9a2) heading_imed_pane

0x6e5c,	// (0x00057bbe) listscroll_imed_pane

0xed16,	// (0x0005fa78) heading_imed_pane_g1

0xed1e,	// (0x0005fa80) heading_imed_pane_t1

0xed2c,	// (0x0005fa8e) grid_imed_colour_35_pane_ParamLimits

0xed2c,	// (0x0005fa8e) grid_imed_colour_35_pane

0x6e68,	// (0x00057bca) grid_imed_effect_pane

0xed44,	// (0x0005faa6) list_imed_aspect_pane

0x6e78,	// (0x00057bda) scroll_pane_cp027_ParamLimits

0x6e78,	// (0x00057bda) scroll_pane_cp027

0x6e84,	// (0x00057be6) cell_imed_effect_pane_ParamLimits

0x6e84,	// (0x00057be6) cell_imed_effect_pane

0xed4c,	// (0x0005faae) cell_imed_colour_pane_ParamLimits

0xed4c,	// (0x0005faae) cell_imed_colour_pane

0xed8e,	// (0x0005faf0) cell_imed_colour_pane_g1_ParamLimits

0xed8e,	// (0x0005faf0) cell_imed_colour_pane_g1

0xed9f,	// (0x0005fb01) hgihlgiht_grid_pane_cp016_ParamLimits

0xed9f,	// (0x0005fb01) hgihlgiht_grid_pane_cp016

0x6e9c,	// (0x00057bfe) cell_imed_effect_pane_g1

0x6ea4,	// (0x00057c06) grid_highlight_pane_cp017

0xedb0,	// (0x0005fb12) list_imed_single_pane_ParamLimits

0xedb0,	// (0x0005fb12) list_imed_single_pane

0xb803,	// (0x0005c565) list_highlight_pane_cp07

0xedc5,	// (0x0005fb27) list_imed_aspect_pane_comp1_t1

0xd26e,	// (0x0005dfd0) bg_tb_trans_pane_cp05

0xede7,	// (0x0005fb49) popup_imed_adjust2_window_g1

0xee0e,	// (0x0005fb70) popup_imed_adjust2_window_t1

0xee43,	// (0x0005fba5) slider_imed_adjust_pane

0xee57,	// (0x0005fbb9) slider_imed_adjust_pane_g1

0xee67,	// (0x0005fbc9) slider_imed_adjust_pane_g2

0xee77,	// (0x0005fbd9) slider_imed_adjust_pane_g3

0xee88,	// (0x0005fbea) slider_imed_adjust_pane_g4

0x0003,

0xf6fb,	// (0x0006045d) slider_imed_adjust_pane_g

0x6ead,	// (0x00057c0f) aid_size_cell_clipart2

0x6eb9,	// (0x00057c1b) grid_imed_clipart_pane

0xd22d,	// (0x0005df8f) scroll_pane_cp031

0x6ec3,	// (0x00057c25) cell_imed_clipart_pane_ParamLimits

0x6ec3,	// (0x00057c25) cell_imed_clipart_pane

0x6ee6,	// (0x00057c48) cell_imed_clipart_pane_g1

0xb803,	// (0x0005c565) grid_highlight_pane_cp014

0x6c18,	// (0x0005797a) main_clock2_pane_g1_ParamLimits

0x6c18,	// (0x0005797a) main_clock2_pane_g1

0x6d03,	// (0x00057a65) aid_call2_pane_cp10

0x6d15,	// (0x00057a77) aid_call_pane_cp10

0xcf2c,	// (0x0005dc8e) popup_clock_analogue_window_cp10_g1

0xcf2c,	// (0x0005dc8e) popup_clock_analogue_window_cp10_g2

0x6d27,	// (0x00057a89) popup_clock_analogue_window_cp10_g3

0x6d27,	// (0x00057a89) popup_clock_analogue_window_cp10_g4

0xcf2c,	// (0x0005dc8e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6e9,	// (0x0006044b) popup_clock_analogue_window_cp10_g

0x6d3d,	// (0x00057a9f) popup_clock_analogue_window_cp10_t1

0x6d6e,	// (0x00057ad0) clock_digital_number_pane_cp10_ParamLimits

0x6d6e,	// (0x00057ad0) clock_digital_number_pane_cp10

0x6d88,	// (0x00057aea) clock_digital_number_pane_cp11_ParamLimits

0x6d88,	// (0x00057aea) clock_digital_number_pane_cp11

0x6da2,	// (0x00057b04) clock_digital_number_pane_cp12_ParamLimits

0x6da2,	// (0x00057b04) clock_digital_number_pane_cp12

0x6dbc,	// (0x00057b1e) clock_digital_number_pane_cp13_ParamLimits

0x6dbc,	// (0x00057b1e) clock_digital_number_pane_cp13

0x6dd6,	// (0x00057b38) clock_digital_separator_pane_cp10_ParamLimits

0x6dd6,	// (0x00057b38) clock_digital_separator_pane_cp10

0x6df0,	// (0x00057b52) popup_clock_digital_window_cp02_t1_ParamLimits

0x6df0,	// (0x00057b52) popup_clock_digital_window_cp02_t1

0xbe73,	// (0x0005cbd5) clock_digital_number_pane_cp10_g1

0xbe73,	// (0x0005cbd5) clock_digital_number_pane_cp10_g2

0x0001,

0xf704,	// (0x00060466) clock_digital_number_pane_cp10_g

0xbe73,	// (0x0005cbd5) clock_digital_separator_pane_cp10_g1

0xbe73,	// (0x0005cbd5) clock_digital_separator_pane_g2_cp10

0xd0b9,	// (0x0005de1b) navi_pane_vded_g4

0xd0c2,	// (0x0005de24) navi_pane_vded_g5

0xd0cb,	// (0x0005de2d) navi_pane_vded_t1

0x34cf,	// (0x00054231) main_vded_pane

0x6eef,	// (0x00057c51) main_vded_pane_g1

0x6efb,	// (0x00057c5d) main_vded_pane_g2

0x6f05,	// (0x00057c67) main_vded_pane_g3

0x0002,

0xf709,	// (0x0006046b) main_vded_pane_g

0x6f0f,	// (0x00057c71) main_vded_pane_t1

0x6f1d,	// (0x00057c7f) main_vded_pane_t2

0x0001,

0xf710,	// (0x00060472) main_vded_pane_t

0x6f2b,	// (0x00057c8d) vded_slider_pane

0x6f35,	// (0x00057c97) vded_video_pane

0xee99,	// (0x0005fbfb) vded_video_pane_g1

0x6f3f,	// (0x00057ca1) vded_video_pane_g2

0xbf42,	// (0x0005cca4) vded_video_pane_g3

0x0002,

0xf715,	// (0x00060477) vded_video_pane_g

0xeea3,	// (0x0005fc05) vded_slider_pane_g1

0xe601,	// (0x0005f363) vded_slider_pane_g2

0xeeac,	// (0x0005fc0e) vded_slider_pane_g3

0xeeb5,	// (0x0005fc17) vded_slider_pane_g4

0xeebe,	// (0x0005fc20) vded_slider_pane_g5

0x0004,

0xf71c,	// (0x0006047e) vded_slider_pane_g

0x0a44,	// (0x000517a6) mup3_rocker_pane_ParamLimits

0x0a44,	// (0x000517a6) mup3_rocker_pane

0xebea,	// (0x0005f94c) mup3_control_keys_pane_g1

0xeec7,	// (0x0005fc29) mup3_control_keys_pane_g2

0xebea,	// (0x0005f94c) mup3_control_keys_pane_g3

0xeecf,	// (0x0005fc31) mup3_control_keys_pane_g4

0x0003,

0xf727,	// (0x00060489) mup3_control_keys_pane_g

0x3483,	// (0x000541e5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3483,	// (0x000541e5) popup_toolbar2_fixed_window_cp01

0x0a44,	// (0x000517a6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x0a44,	// (0x000517a6) popup_toolbar2_fixed_window_cp02

0xd8ac,	// (0x0005e60e) popup_call2_audio_second_window_t4_ParamLimits

0xd8ac,	// (0x0005e60e) popup_call2_audio_second_window_t4

0xdde8,	// (0x0005eb4a) popup_call2_audio_first_window_t6_ParamLimits

0xdde8,	// (0x0005eb4a) popup_call2_audio_first_window_t6

0xe026,	// (0x0005ed88) popup_call2_audio_out_window_t6_ParamLimits

0xe026,	// (0x0005ed88) popup_call2_audio_out_window_t6

0x34cf,	// (0x00054231) main_vitu_pane

0xbef6,	// (0x0005cc58) aid_size_cell_itu_ParamLimits

0xbef6,	// (0x0005cc58) aid_size_cell_itu

0xbef6,	// (0x0005cc58) bg_popup_window_pane_cp08_ParamLimits

0xbef6,	// (0x0005cc58) bg_popup_window_pane_cp08

0xbef6,	// (0x0005cc58) field_vitu_entry_pane_ParamLimits

0xbef6,	// (0x0005cc58) field_vitu_entry_pane

0xbef6,	// (0x0005cc58) grid_vitu_function_pane_ParamLimits

0xbef6,	// (0x0005cc58) grid_vitu_function_pane

0xbef6,	// (0x0005cc58) grid_vitu_itu_pane_ParamLimits

0xbef6,	// (0x0005cc58) grid_vitu_itu_pane

0xbef6,	// (0x0005cc58) cell_vitu_itu_pane_ParamLimits

0xbef6,	// (0x0005cc58) cell_vitu_itu_pane

0xbef6,	// (0x0005cc58) cell_vitu_function_pane_ParamLimits

0xbef6,	// (0x0005cc58) cell_vitu_function_pane

0xbe9d,	// (0x0005cbff) bg_popup_sub_pane_cp08_ParamLimits

0xbe9d,	// (0x0005cbff) bg_popup_sub_pane_cp08

0xbf4c,	// (0x0005ccae) field_vitu_entry_pane_t1_ParamLimits

0xbf4c,	// (0x0005ccae) field_vitu_entry_pane_t1

0xee26,	// (0x0005fb88) field_vitu_entry_pane_t2_ParamLimits

0xee26,	// (0x0005fb88) field_vitu_entry_pane_t2

0x0001,

0xf730,	// (0x00060492) field_vitu_entry_pane_t_ParamLimits

0xf730,	// (0x00060492) field_vitu_entry_pane_t

0xe4d5,	// (0x0005f237) bg_button_pane_cp05_ParamLimits

0xe4d5,	// (0x0005f237) bg_button_pane_cp05

0xeed7,	// (0x0005fc39) cell_vitu_itu_pane_g1

0xd27c,	// (0x0005dfde) cell_vitu_itu_pane_t1_ParamLimits

0xd27c,	// (0x0005dfde) cell_vitu_itu_pane_t1

0xd27c,	// (0x0005dfde) cell_vitu_itu_pane_t2_ParamLimits

0xd27c,	// (0x0005dfde) cell_vitu_itu_pane_t2

0x0002,

0xf735,	// (0x00060497) cell_vitu_itu_pane_t_ParamLimits

0xf735,	// (0x00060497) cell_vitu_itu_pane_t

0xb803,	// (0x0005c565) bg_button_pane_cp07

0xbf42,	// (0x0005cca4) cell_vitu_function_pane_g1

0x3608,	// (0x0005436a) main_calc_pane_g1

0x32de,	// (0x00054040) aid_visual_content_pane

0x34cf,	// (0x00054231) main_vradio_pane

0xbf12,	// (0x0005cc74) main_vradio_pane_g1_ParamLimits

0xbf12,	// (0x0005cc74) main_vradio_pane_g1

0xbf12,	// (0x0005cc74) main_vradio_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) main_vradio_pane_g2

0x0001,

0xf4cc,	// (0x0006022e) main_vradio_pane_g_ParamLimits

0xf4cc,	// (0x0006022e) main_vradio_pane_g

0xbf60,	// (0x0005ccc2) main_vradio_pane_t1_ParamLimits

0xbf60,	// (0x0005ccc2) main_vradio_pane_t1

0xbf60,	// (0x0005ccc2) main_vradio_pane_t2_ParamLimits

0xbf60,	// (0x0005ccc2) main_vradio_pane_t2

0xbf60,	// (0x0005ccc2) main_vradio_pane_t3_ParamLimits

0xbf60,	// (0x0005ccc2) main_vradio_pane_t3

0x0002,

0xf73c,	// (0x0006049e) main_vradio_pane_t_ParamLimits

0xf73c,	// (0x0006049e) main_vradio_pane_t

0xbef6,	// (0x0005cc58) vradio_rocker_control_pane_ParamLimits

0xbef6,	// (0x0005cc58) vradio_rocker_control_pane

0xbef6,	// (0x0005cc58) vradio_station_info_pane_ParamLimits

0xbef6,	// (0x0005cc58) vradio_station_info_pane

0xbe9d,	// (0x0005cbff) vradio_frequency_info_pane_ParamLimits

0xbe9d,	// (0x0005cbff) vradio_frequency_info_pane

0xbf42,	// (0x0005cca4) vradio_station_info_pane_g1

0xd27c,	// (0x0005dfde) vradio_station_info_pane_t1_ParamLimits

0xd27c,	// (0x0005dfde) vradio_station_info_pane_t1

0xbf60,	// (0x0005ccc2) vradio_station_info_pane_t2_ParamLimits

0xbf60,	// (0x0005ccc2) vradio_station_info_pane_t2

0x0001,

0xf743,	// (0x000604a5) vradio_station_info_pane_t_ParamLimits

0xf743,	// (0x000604a5) vradio_station_info_pane_t

0xb803,	// (0x0005c565) vradio_tuning_pane

0x6f48,	// (0x00057caa) vradio_rocker_control_pane_g1

0xeef3,	// (0x0005fc55) vradio_rocker_control_pane_g2

0x6f50,	// (0x00057cb2) vradio_rocker_control_pane_g3

0x6f58,	// (0x00057cba) vradio_rocker_control_pane_g4

0x6f60,	// (0x00057cc2) vradio_rocker_control_pane_g5

0x0004,

0xf748,	// (0x000604aa) vradio_rocker_control_pane_g

0xbf42,	// (0x0005cca4) vradio_frequency_info_pane_g1

0xbf4c,	// (0x0005ccae) vradio_frequency_info_pane_t1_ParamLimits

0xbf4c,	// (0x0005ccae) vradio_frequency_info_pane_t1

0x6f68,	// (0x00057cca) vradio_tuning_pane_g1

0x6f75,	// (0x00057cd7) vradio_tuning_pane_t1

0x3327,	// (0x00054089) area_side_right_pane_ParamLimits

0x3327,	// (0x00054089) area_side_right_pane

0xe408,	// (0x0005f16a) status_small_pane_g1

0xe410,	// (0x0005f172) status_small_pane_g2

0xe419,	// (0x0005f17b) status_small_pane_g3

0xe422,	// (0x0005f184) status_small_pane_g4

0x0003,

0xf519,	// (0x0006027b) status_small_pane_g

0xe42b,	// (0x0005f18d) status_small_pane_t1

0x34cf,	// (0x00054231) main_video3_pane

0xb803,	// (0x0005c565) cams_zoom_vslider_pane

0xeefb,	// (0x0005fc5d) image3_wide_pane_ParamLimits

0xeefb,	// (0x0005fc5d) image3_wide_pane

0xb803,	// (0x0005c565) image3_wide_small_pane

0xef15,	// (0x0005fc77) main_video3_pane_g1_ParamLimits

0xef15,	// (0x0005fc77) main_video3_pane_g1

0xef15,	// (0x0005fc77) main_video3_pane_g2_ParamLimits

0xef15,	// (0x0005fc77) main_video3_pane_g2

0x0001,

0xf753,	// (0x000604b5) main_video3_pane_g_ParamLimits

0xf753,	// (0x000604b5) main_video3_pane_g

0xef33,	// (0x0005fc95) main_video3_pane_t1_ParamLimits

0xef33,	// (0x0005fc95) main_video3_pane_t1

0xef33,	// (0x0005fc95) main_video3_pane_t2_ParamLimits

0xef33,	// (0x0005fc95) main_video3_pane_t2

0xef33,	// (0x0005fc95) main_video3_pane_t3_ParamLimits

0xef33,	// (0x0005fc95) main_video3_pane_t3

0x0002,

0xf758,	// (0x000604ba) main_video3_pane_t_ParamLimits

0xf758,	// (0x000604ba) main_video3_pane_t

0xbf42,	// (0x0005cca4) cams_zoom_vslider_pane_g1

0xbf42,	// (0x0005cca4) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) cams_zoom_vslider_pane_g

0xb803,	// (0x0005c565) small_slider_vertical_pane

0xbf42,	// (0x0005cca4) small_slider_vertical_pane_g1

0xbf42,	// (0x0005cca4) small_slider_vertical_pane_g2

0xef5a,	// (0x0005fcbc) small_slider_vertical_pane_g3

0x0002,

0xf75f,	// (0x000604c1) small_slider_vertical_pane_g

0x34cf,	// (0x00054231) main_hwr_training_pane

0xef63,	// (0x0005fcc5) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x0005fcc5) hwr_training_instruct_pane

0x6f84,	// (0x00057ce6) hwr_training_navi_pane_ParamLimits

0x6f84,	// (0x00057ce6) hwr_training_navi_pane

0x6f9e,	// (0x00057d00) hwr_training_write_pane_ParamLimits

0x6f9e,	// (0x00057d00) hwr_training_write_pane

0xb803,	// (0x0005c565) bg_frame_shadow_pane

0xef9a,	// (0x0005fcfc) hwr_training_write_pane_g1

0xefa2,	// (0x0005fd04) hwr_training_write_pane_g2

0xefaa,	// (0x0005fd0c) hwr_training_write_pane_g3

0xefb2,	// (0x0005fd14) hwr_training_write_pane_g4

0xefba,	// (0x0005fd1c) hwr_training_write_pane_g5

0xefc2,	// (0x0005fd24) hwr_training_write_pane_g6

0xefca,	// (0x0005fd2c) hwr_training_write_pane_g7

0x0006,

0xf766,	// (0x000604c8) hwr_training_write_pane_g

0x6fd6,	// (0x00057d38) hwr_training_navi_pane_g1_ParamLimits

0x6fd6,	// (0x00057d38) hwr_training_navi_pane_g1

0x6fe8,	// (0x00057d4a) hwr_training_navi_pane_g2_ParamLimits

0x6fe8,	// (0x00057d4a) hwr_training_navi_pane_g2

0x6ffa,	// (0x00057d5c) hwr_training_navi_pane_g3_ParamLimits

0x6ffa,	// (0x00057d5c) hwr_training_navi_pane_g3

0x700a,	// (0x00057d6c) hwr_training_navi_pane_g4_ParamLimits

0x700a,	// (0x00057d6c) hwr_training_navi_pane_g4

0x0004,

0xf775,	// (0x000604d7) hwr_training_navi_pane_g_ParamLimits

0xf775,	// (0x000604d7) hwr_training_navi_pane_g

0x7024,	// (0x00057d86) hwr_training_navi_pane_t1

0x7032,	// (0x00057d94) list_single_hwr_training_instruct_pane_ParamLimits

0x7032,	// (0x00057d94) list_single_hwr_training_instruct_pane

0xefd2,	// (0x0005fd34) list_single_hwr_training_instruct_pane_t1

0xe7d7,	// (0x0005f539) bg_frame_shadow_pane_g1

0xefe1,	// (0x0005fd43) bg_frame_shadow_pane_g2

0xefe9,	// (0x0005fd4b) bg_frame_shadow_pane_g3

0xeff1,	// (0x0005fd53) bg_frame_shadow_pane_g4

0xeff9,	// (0x0005fd5b) bg_frame_shadow_pane_g5

0xf001,	// (0x0005fd63) bg_frame_shadow_pane_g6

0xf009,	// (0x0005fd6b) bg_frame_shadow_pane_g7

0xc04f,	// (0x0005cdb1) bg_frame_shadow_pane_g8

0x0007,

0xf780,	// (0x000604e2) bg_frame_shadow_pane_g

0x34cf,	// (0x00054231) main_video_tele_dialer_pane

0x705b,	// (0x00057dbd) aid_size_cell_video_keypad_ParamLimits

0x705b,	// (0x00057dbd) aid_size_cell_video_keypad

0x706b,	// (0x00057dcd) grid_video_dialer_keypad_pane_ParamLimits

0x706b,	// (0x00057dcd) grid_video_dialer_keypad_pane

0x709f,	// (0x00057e01) video_down_pane_cp_ParamLimits

0x709f,	// (0x00057e01) video_down_pane_cp

0x70c9,	// (0x00057e2b) cell_video_dialer_keypad_pane_ParamLimits

0x70c9,	// (0x00057e2b) cell_video_dialer_keypad_pane

0xf011,	// (0x0005fd73) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x0005fd73) bg_button_pane_cp08

0x70de,	// (0x00057e40) cell_video_dialer_keypad_pane_g1_ParamLimits

0x70de,	// (0x00057e40) cell_video_dialer_keypad_pane_g1

0x0a44,	// (0x000517a6) mup3_rocker2_pane_ParamLimits

0x0a44,	// (0x000517a6) mup3_rocker2_pane

0xbf42,	// (0x0005cca4) mup3_rocker2_pane_g1

0x5f11,	// (0x00056c73) main_dialer2_pane

0x34cf,	// (0x00054231) main_mp4_pane

0x7136,	// (0x00057e98) main_mp4_pane_g1_ParamLimits

0x7136,	// (0x00057e98) main_mp4_pane_g1

0x7158,	// (0x00057eba) main_mp4_pane_g2_ParamLimits

0x7158,	// (0x00057eba) main_mp4_pane_g2

0x7176,	// (0x00057ed8) main_mp4_pane_g3_ParamLimits

0x7176,	// (0x00057ed8) main_mp4_pane_g3

0x71af,	// (0x00057f11) main_mp4_pane_g4_ParamLimits

0x71af,	// (0x00057f11) main_mp4_pane_g4

0x71d7,	// (0x00057f39) main_mp4_pane_g5_ParamLimits

0x71d7,	// (0x00057f39) main_mp4_pane_g5

0x0007,

0xf7a0,	// (0x00060502) main_mp4_pane_g_ParamLimits

0xf7a0,	// (0x00060502) main_mp4_pane_g

0x723f,	// (0x00057fa1) main_mp4_pane_t1_ParamLimits

0x723f,	// (0x00057fa1) main_mp4_pane_t1

0x72a1,	// (0x00058003) main_mp4_pane_t2_ParamLimits

0x72a1,	// (0x00058003) main_mp4_pane_t2

0x7305,	// (0x00058067) main_mp4_pane_t3_ParamLimits

0x7305,	// (0x00058067) main_mp4_pane_t3

0x7363,	// (0x000580c5) main_mp4_pane_t4_ParamLimits

0x7363,	// (0x000580c5) main_mp4_pane_t4

0x0003,

0xf7b1,	// (0x00060513) main_mp4_pane_t_ParamLimits

0xf7b1,	// (0x00060513) main_mp4_pane_t

0x73c1,	// (0x00058123) mp4_progress_pane_ParamLimits

0x73c1,	// (0x00058123) mp4_progress_pane

0x73f5,	// (0x00058157) mp4_rocker_pane_ParamLimits

0x73f5,	// (0x00058157) mp4_rocker_pane

0x0721,	// (0x00051483) mp4_progress_pane_t1

0x0740,	// (0x000514a2) mp4_progress_pane_t2

0x0001,

0xf7ba,	// (0x0006051c) mp4_progress_pane_t

0x075f,	// (0x000514c1) mup_progress_pane_cp04

0x0fef,	// (0x00051d51) mp4_rocker_pane_g1

0x34b5,	// (0x00054217) aid_cell_size_keypad2_ParamLimits

0x34b5,	// (0x00054217) aid_cell_size_keypad2

0x34b5,	// (0x00054217) dialer2_ne_pane_ParamLimits

0x34b5,	// (0x00054217) dialer2_ne_pane

0x34b5,	// (0x00054217) grid_dialer2_keypad_pane_ParamLimits

0x34b5,	// (0x00054217) grid_dialer2_keypad_pane

0xe565,	// (0x0005f2c7) bg_popup_call_pane_cp07_ParamLimits

0xe565,	// (0x0005f2c7) bg_popup_call_pane_cp07

0x7409,	// (0x0005816b) dialer2_ne_pane_t1_ParamLimits

0x7409,	// (0x0005816b) dialer2_ne_pane_t1

0x7430,	// (0x00058192) cell_dialer2_keypad_pane_ParamLimits

0x7430,	// (0x00058192) cell_dialer2_keypad_pane

0xe4d5,	// (0x0005f237) bg_button_pane_pane_cp04_ParamLimits

0xe4d5,	// (0x0005f237) bg_button_pane_pane_cp04

0xbf04,	// (0x0005cc66) cell_dialer2_keypad_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) cell_dialer2_keypad_pane_g1

0x3eca,	// (0x00054c2c) aid_placing_vt_set_content_ParamLimits

0x3eca,	// (0x00054c2c) aid_placing_vt_set_content

0x3ef6,	// (0x00054c58) aid_placing_vt_set_title_ParamLimits

0x3ef6,	// (0x00054c58) aid_placing_vt_set_title

0x34cf,	// (0x00054231) main_image3_pane

0x7479,	// (0x000581db) area_side_right_pane_cp01_ParamLimits

0x7479,	// (0x000581db) area_side_right_pane_cp01

0x74a6,	// (0x00058208) main_image3_pane_g1_ParamLimits

0x74a6,	// (0x00058208) main_image3_pane_g1

0x74b4,	// (0x00058216) main_image3_pane_g2_ParamLimits

0x74b4,	// (0x00058216) main_image3_pane_g2

0x74cd,	// (0x0005822f) main_image3_pane_g3_ParamLimits

0x74cd,	// (0x0005822f) main_image3_pane_g3

0x74e6,	// (0x00058248) main_image3_pane_g4_ParamLimits

0x74e6,	// (0x00058248) main_image3_pane_g4

0x0003,

0xf7c9,	// (0x0006052b) main_image3_pane_g_ParamLimits

0xf7c9,	// (0x0006052b) main_image3_pane_g

0x74ff,	// (0x00058261) main_image3_pane_t1_ParamLimits

0x74ff,	// (0x00058261) main_image3_pane_t1

0x7524,	// (0x00058286) main_image3_pane_t2_ParamLimits

0x7524,	// (0x00058286) main_image3_pane_t2

0x7543,	// (0x000582a5) main_image3_pane_t3_ParamLimits

0x7543,	// (0x000582a5) main_image3_pane_t3

0x0003,

0xf7d2,	// (0x00060534) main_image3_pane_t_ParamLimits

0xf7d2,	// (0x00060534) main_image3_pane_t

0xbef6,	// (0x0005cc58) grid_sctrl_middle_pane_cp01_ParamLimits

0xbef6,	// (0x0005cc58) grid_sctrl_middle_pane_cp01

0x75a4,	// (0x00058306) cell_sctrl_middle_pane_cp01_ParamLimits

0x75a4,	// (0x00058306) cell_sctrl_middle_pane_cp01

0x75b5,	// (0x00058317) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x75b5,	// (0x00058317) cell_sctrl_middle_pane_cp01_g1

0x34cf,	// (0x00054231) main_call4_pane

0x75c2,	// (0x00058324) aid_size_button_call4_ParamLimits

0x75c2,	// (0x00058324) aid_size_button_call4

0x75f8,	// (0x0005835a) call4_windows_pane_ParamLimits

0x75f8,	// (0x0005835a) call4_windows_pane

0x760d,	// (0x0005836f) grid_call4_button_pane_ParamLimits

0x760d,	// (0x0005836f) grid_call4_button_pane

0x763b,	// (0x0005839d) call4_windows_conf_pane

0x7650,	// (0x000583b2) popup_call4_audio_first_window_ParamLimits

0x7650,	// (0x000583b2) popup_call4_audio_first_window

0x76a0,	// (0x00058402) popup_call4_audio_second_window_ParamLimits

0x76a0,	// (0x00058402) popup_call4_audio_second_window

0x76b9,	// (0x0005841b) popup_call4_audio_wait_window_ParamLimits

0x76b9,	// (0x0005841b) popup_call4_audio_wait_window

0x76c7,	// (0x00058429) cell_call4_button_pane_ParamLimits

0x76c7,	// (0x00058429) cell_call4_button_pane

0x76ea,	// (0x0005844c) bg_button_pane_cp09_ParamLimits

0x76ea,	// (0x0005844c) bg_button_pane_cp09

0x76f6,	// (0x00058458) cell_call4_button_pane_g1_ParamLimits

0x76f6,	// (0x00058458) cell_call4_button_pane_g1

0x7703,	// (0x00058465) cell_call4_button_pane_t1_ParamLimits

0x7703,	// (0x00058465) cell_call4_button_pane_t1

0x07a8,	// (0x0005150a) popup_call4_audio_conf_window_ParamLimits

0x07a8,	// (0x0005150a) popup_call4_audio_conf_window

0x6b45,	// (0x000578a7) mup3_progress_pane_t1_ParamLimits

0x6b64,	// (0x000578c6) mup3_progress_pane_t2_ParamLimits

0xebb5,	// (0x0005f917) mup3_progress_pane_t3_ParamLimits

0xf6b1,	// (0x00060413) mup3_progress_pane_t_ParamLimits

0xebd2,	// (0x0005f934) mup_progress_pane_cp03_ParamLimits

0xebea,	// (0x0005f94c) mup3_control_keys_pane_g4_copy1

0x73f5,	// (0x00058157) mp4_rocker2_pane_ParamLimits

0x73f5,	// (0x00058157) mp4_rocker2_pane

0xeec7,	// (0x0005fc29) mp4_rocker2_pane_g1

0xeec7,	// (0x0005fc29) mp4_rocker2_pane_g2

0xeec7,	// (0x0005fc29) mp4_rocker2_pane_g3

0xeec7,	// (0x0005fc29) mp4_rocker2_pane_g4

0xeec7,	// (0x0005fc29) mp4_rocker2_pane_g5

0x0004,

0xf7db,	// (0x0006053d) mp4_rocker2_pane_g

0x34cf,	// (0x00054231) main_camera4_pane

0x34cf,	// (0x00054231) main_video4_pane

0x707b,	// (0x00057ddd) main_video_tele_dialer_pane_t1_ParamLimits

0x707b,	// (0x00057ddd) main_video_tele_dialer_pane_t1

0x708d,	// (0x00057def) main_video_tele_dialer_pane_t2_ParamLimits

0x708d,	// (0x00057def) main_video_tele_dialer_pane_t2

0x0001,

0xf791,	// (0x000604f3) main_video_tele_dialer_pane_t_ParamLimits

0xf791,	// (0x000604f3) main_video_tele_dialer_pane_t

0x775f,	// (0x000584c1) cam4_autofocus_pane_ParamLimits

0x775f,	// (0x000584c1) cam4_autofocus_pane

0x7779,	// (0x000584db) cam4_image_uncrop_pane_ParamLimits

0x7779,	// (0x000584db) cam4_image_uncrop_pane

0x7790,	// (0x000584f2) cam4_indicators_pane_ParamLimits

0x7790,	// (0x000584f2) cam4_indicators_pane

0x77ac,	// (0x0005850e) main_camera4_pane_g1_ParamLimits

0x77ac,	// (0x0005850e) main_camera4_pane_g1

0x77b8,	// (0x0005851a) main_camera4_pane_g2_ParamLimits

0x77b8,	// (0x0005851a) main_camera4_pane_g2

0x77b8,	// (0x0005851a) main_camera4_pane_g3_ParamLimits

0x77b8,	// (0x0005851a) main_camera4_pane_g3

0x77c4,	// (0x00058526) main_camera4_pane_g4_ParamLimits

0x77c4,	// (0x00058526) main_camera4_pane_g4

0x77d0,	// (0x00058532) main_camera4_pane_g5_ParamLimits

0x77d0,	// (0x00058532) main_camera4_pane_g5

0x0005,

0xf7e6,	// (0x00060548) main_camera4_pane_g_ParamLimits

0xf7e6,	// (0x00060548) main_camera4_pane_g

0x77ea,	// (0x0005854c) main_camera4_pane_t1_ParamLimits

0x77ea,	// (0x0005854c) main_camera4_pane_t1

0x1a78,	// (0x000527da) bg_tb_trans_pane_cp06

0x783a,	// (0x0005859c) cam4_indicators_pane_g1

0x784b,	// (0x000585ad) cam4_indicators_pane_g2

0x0002,

0xf801,	// (0x00060563) cam4_indicators_pane_g

0x7863,	// (0x000585c5) cam4_indicators_pane_t1

0x788d,	// (0x000585ef) main_video4_pane_g1_ParamLimits

0x788d,	// (0x000585ef) main_video4_pane_g1

0x7899,	// (0x000585fb) main_video4_pane_g2_ParamLimits

0x7899,	// (0x000585fb) main_video4_pane_g2

0x78a5,	// (0x00058607) main_video4_pane_g3_ParamLimits

0x78a5,	// (0x00058607) main_video4_pane_g3

0x78b1,	// (0x00058613) main_video4_pane_g4_ParamLimits

0x78b1,	// (0x00058613) main_video4_pane_g4

0x0004,

0xf808,	// (0x0006056a) main_video4_pane_g_ParamLimits

0xf808,	// (0x0006056a) main_video4_pane_g

0x78d1,	// (0x00058633) vid4_indicators_pane_ParamLimits

0x78d1,	// (0x00058633) vid4_indicators_pane

0x78f0,	// (0x00058652) video4_image_uncrop_cif_pane_ParamLimits

0x78f0,	// (0x00058652) video4_image_uncrop_cif_pane

0x78ff,	// (0x00058661) video4_image_uncrop_nhd_pane_ParamLimits

0x78ff,	// (0x00058661) video4_image_uncrop_nhd_pane

0x7779,	// (0x000584db) video4_image_uncrop_vga_pane_ParamLimits

0x7779,	// (0x000584db) video4_image_uncrop_vga_pane

0x5f03,	// (0x00056c65) bg_tb_trans_pane_cp07

0x7914,	// (0x00058676) vid4_indicators_pane_g1

0x7928,	// (0x0005868a) vid4_indicators_pane_g2

0x793c,	// (0x0005869e) vid4_indicators_pane_g3

0x0004,

0xf813,	// (0x00060575) vid4_indicators_pane_g

0x7969,	// (0x000586cb) vid4_indicators_pane_t1

0x7980,	// (0x000586e2) cam4_autofocus_pane_g1

0x7988,	// (0x000586ea) cam4_autofocus_pane_g2

0x7990,	// (0x000586f2) cam4_autofocus_pane_g3

0x0002,

0xf81e,	// (0x00060580) cam4_autofocus_pane_g

0x7998,	// (0x000586fa) cam4_autofocus_pane_g3_copy1

0x70ad,	// (0x00057e0f) video_down_pane_cp_t1

0x70bb,	// (0x00057e1d) video_down_pane_cp_t2

0x0001,

0xf796,	// (0x000604f8) video_down_pane_cp_t

0x34b5,	// (0x00054217) popup_vitu2_window_ParamLimits

0x34b5,	// (0x00054217) popup_vitu2_window

0x79a0,	// (0x00058702) aid_size_cell2_itu2_ParamLimits

0x79a0,	// (0x00058702) aid_size_cell2_itu2

0x79c2,	// (0x00058724) aid_size_cell_itu2_ParamLimits

0x79c2,	// (0x00058724) aid_size_cell_itu2

0x7a06,	// (0x00058768) bg_popup_window_pane_cp09_ParamLimits

0x7a06,	// (0x00058768) bg_popup_window_pane_cp09

0x7a14,	// (0x00058776) field_vitu2_entry_pane_ParamLimits

0x7a14,	// (0x00058776) field_vitu2_entry_pane

0x7a34,	// (0x00058796) grid_vitu2_function_pane_ParamLimits

0x7a34,	// (0x00058796) grid_vitu2_function_pane

0x7a74,	// (0x000587d6) grid_vitu2_itu_pane_ParamLimits

0x7a74,	// (0x000587d6) grid_vitu2_itu_pane

0x7ae8,	// (0x0005884a) cell_vitu2_itu_pane_ParamLimits

0x7ae8,	// (0x0005884a) cell_vitu2_itu_pane

0x7b01,	// (0x00058863) cell_vitu2_function_pane_ParamLimits

0x7b01,	// (0x00058863) cell_vitu2_function_pane

0x07bc,	// (0x0005151e) bg_popup_call_pane_cp08_ParamLimits

0x07bc,	// (0x0005151e) bg_popup_call_pane_cp08

0x07d3,	// (0x00051535) field_vitu2_entry_pane_g1

0x07df,	// (0x00051541) field_vitu2_entry_pane_g2

0x0002,

0xf825,	// (0x00060587) field_vitu2_entry_pane_g

0x7b42,	// (0x000588a4) field_vitu2_entry_pane_t1_ParamLimits

0x7b42,	// (0x000588a4) field_vitu2_entry_pane_t1

0x07eb,	// (0x0005154d) field_vitu2_entry_pane_t2_ParamLimits

0x07eb,	// (0x0005154d) field_vitu2_entry_pane_t2

0x0001,

0xf82c,	// (0x0006058e) field_vitu2_entry_pane_t_ParamLimits

0xf82c,	// (0x0006058e) field_vitu2_entry_pane_t

0x623b,	// (0x00056f9d) bg_button_pane_cp010_ParamLimits

0x623b,	// (0x00056f9d) bg_button_pane_cp010

0x7b7d,	// (0x000588df) cell_vitu2_itu_pane_g1

0x7ba3,	// (0x00058905) cell_vitu2_itu_pane_t1_ParamLimits

0x7ba3,	// (0x00058905) cell_vitu2_itu_pane_t1

0x7bef,	// (0x00058951) cell_vitu2_itu_pane_t2_ParamLimits

0x7bef,	// (0x00058951) cell_vitu2_itu_pane_t2

0x0002,

0xf836,	// (0x00060598) cell_vitu2_itu_pane_t_ParamLimits

0xf836,	// (0x00060598) cell_vitu2_itu_pane_t

0x5f03,	// (0x00056c65) bg_button_pane_cp011

0x7cb7,	// (0x00058a19) cell_vitu2_function_pane_g1

0x34cf,	// (0x00054231) main_myfav_hc_pane

0x7585,	// (0x000582e7) popup_image3_note_pane_ParamLimits

0x7585,	// (0x000582e7) popup_image3_note_pane

0x7593,	// (0x000582f5) popup_image3_tool_bar_pane_ParamLimits

0x7593,	// (0x000582f5) popup_image3_tool_bar_pane

0x7c65,	// (0x000589c7) cell_vitu2_itu_pane_t3_ParamLimits

0x7c65,	// (0x000589c7) cell_vitu2_itu_pane_t3

0xb803,	// (0x0005c565) bg_popup_trans_pane

0x0810,	// (0x00051572) grid_image3_tool_bar_pane

0x081a,	// (0x0005157c) bg_popup_trans_pane_g1

0xc952,	// (0x0005d6b4) bg_popup_trans_pane_g2

0x0822,	// (0x00051584) bg_popup_trans_pane_g3

0x082a,	// (0x0005158c) bg_popup_trans_pane_g4

0x0832,	// (0x00051594) bg_popup_trans_pane_g5

0x083a,	// (0x0005159c) bg_popup_trans_pane_g6

0x0842,	// (0x000515a4) bg_popup_trans_pane_g7

0x084a,	// (0x000515ac) bg_popup_trans_pane_g8

0xc932,	// (0x0005d694) bg_popup_trans_pane_g9

0x0008,

0xf83d,	// (0x0006059f) bg_popup_trans_pane_g

0x0852,	// (0x000515b4) cell_image3_tool_bar_pane_ParamLimits

0x0852,	// (0x000515b4) cell_image3_tool_bar_pane

0xbf42,	// (0x0005cca4) cell_image3_tool_bar_pane_g1

0xb803,	// (0x0005c565) bg_popup_trans_pane_cp1

0x0866,	// (0x000515c8) popup_image3_note_pane_t1

0x0874,	// (0x000515d6) popup_image3_note_pane_t2

0x0882,	// (0x000515e4) popup_image3_note_pane_t3

0x0002,

0xf850,	// (0x000605b2) popup_image3_note_pane_t

0x0890,	// (0x000515f2) popup_image3_note_pane_t3_copy1

0x7ccb,	// (0x00058a2d) bg_myfav_hc_instruction_pane_ParamLimits

0x7ccb,	// (0x00058a2d) bg_myfav_hc_instruction_pane

0x7ce3,	// (0x00058a45) cell_myfav_contact_pane_ParamLimits

0x7ce3,	// (0x00058a45) cell_myfav_contact_pane

0x7cfd,	// (0x00058a5f) cell_myfav_contact_pane_cp1_ParamLimits

0x7cfd,	// (0x00058a5f) cell_myfav_contact_pane_cp1

0x7d15,	// (0x00058a77) cell_myfav_contact_pane_cp2_ParamLimits

0x7d15,	// (0x00058a77) cell_myfav_contact_pane_cp2

0x7d2d,	// (0x00058a8f) cell_myfav_contact_pane_cp3_ParamLimits

0x7d2d,	// (0x00058a8f) cell_myfav_contact_pane_cp3

0x7d44,	// (0x00058aa6) cell_myfav_contact_pane_cp4_ParamLimits

0x7d44,	// (0x00058aa6) cell_myfav_contact_pane_cp4

0x7d5a,	// (0x00058abc) cell_myfav_contact_pane_cp5_ParamLimits

0x7d5a,	// (0x00058abc) cell_myfav_contact_pane_cp5

0x7d6e,	// (0x00058ad0) cell_myfav_contact_pane_cp6_ParamLimits

0x7d6e,	// (0x00058ad0) cell_myfav_contact_pane_cp6

0x7d82,	// (0x00058ae4) cell_myfav_contact_pane_cp7_ParamLimits

0x7d82,	// (0x00058ae4) cell_myfav_contact_pane_cp7

0x089e,	// (0x00051600) listscroll_gen_pane_cp05

0x7d9a,	// (0x00058afc) main_myfav_hc_pane_g1_ParamLimits

0x7d9a,	// (0x00058afc) main_myfav_hc_pane_g1

0x7db0,	// (0x00058b12) main_myfav_hc_pane_g2_ParamLimits

0x7db0,	// (0x00058b12) main_myfav_hc_pane_g2

0x0002,

0xf857,	// (0x000605b9) main_myfav_hc_pane_g_ParamLimits

0xf857,	// (0x000605b9) main_myfav_hc_pane_g

0x7de0,	// (0x00058b42) main_myfav_hc_pane_t1_ParamLimits

0x7de0,	// (0x00058b42) main_myfav_hc_pane_t1

0x08a7,	// (0x00051609) main_myfav_hc_pane_t2_ParamLimits

0x08a7,	// (0x00051609) main_myfav_hc_pane_t2

0x08b9,	// (0x0005161b) main_myfav_hc_pane_t3_ParamLimits

0x08b9,	// (0x0005161b) main_myfav_hc_pane_t3

0x7df7,	// (0x00058b59) main_myfav_hc_pane_t4_ParamLimits

0x7df7,	// (0x00058b59) main_myfav_hc_pane_t4

0x0004,

0xf85e,	// (0x000605c0) main_myfav_hc_pane_t_ParamLimits

0xf85e,	// (0x000605c0) main_myfav_hc_pane_t

0xbf42,	// (0x0005cca4) bg_myfav_hc_instruction_pane_g1

0x08cb,	// (0x0005162d) cell_myfav_contact_pane_g1_ParamLimits

0x08cb,	// (0x0005162d) cell_myfav_contact_pane_g1

0x08cb,	// (0x0005162d) cell_myfav_contact_pane_g2_ParamLimits

0x08cb,	// (0x0005162d) cell_myfav_contact_pane_g2

0x08d7,	// (0x00051639) cell_myfav_contact_pane_g3_ParamLimits

0x08d7,	// (0x00051639) cell_myfav_contact_pane_g3

0xbf12,	// (0x0005cc74) cell_myfav_contact_pane_g4_ParamLimits

0xbf12,	// (0x0005cc74) cell_myfav_contact_pane_g4

0x08e4,	// (0x00051646) cell_myfav_contact_pane_g5_ParamLimits

0x08e4,	// (0x00051646) cell_myfav_contact_pane_g5

0x0004,

0xf869,	// (0x000605cb) cell_myfav_contact_pane_g_ParamLimits

0xf869,	// (0x000605cb) cell_myfav_contact_pane_g

0x7dc8,	// (0x00058b2a) main_myfav_hc_pane_g3_ParamLimits

0x7dc8,	// (0x00058b2a) main_myfav_hc_pane_g3

0x31ee,	// (0x00053f50) popup_adpt_find_window

0x7e21,	// (0x00058b83) afind_page_pane_ParamLimits

0x7e21,	// (0x00058b83) afind_page_pane

0x7e2e,	// (0x00058b90) aid_size_cell_afind_ParamLimits

0x7e2e,	// (0x00058b90) aid_size_cell_afind

0x7e48,	// (0x00058baa) bg_popup_sub_pane_cp09_ParamLimits

0x7e48,	// (0x00058baa) bg_popup_sub_pane_cp09

0x7e59,	// (0x00058bbb) find_pane_cp01_ParamLimits

0x7e59,	// (0x00058bbb) find_pane_cp01

0x08f0,	// (0x00051652) grid_afind_control_pane_ParamLimits

0x08f0,	// (0x00051652) grid_afind_control_pane

0x7e6c,	// (0x00058bce) grid_afind_pane_ParamLimits

0x7e6c,	// (0x00058bce) grid_afind_pane

0x7e88,	// (0x00058bea) cell_afind_pane_ParamLimits

0x7e88,	// (0x00058bea) cell_afind_pane

0xbf42,	// (0x0005cca4) afind_page_pane_g1

0x7ed0,	// (0x00058c32) afind_page_pane_g2

0x7ed8,	// (0x00058c3a) afind_page_pane_g3

0x0002,

0xf874,	// (0x000605d6) afind_page_pane_g

0x7ee0,	// (0x00058c42) afind_page_pane_t1

0x0916,	// (0x00051678) cell_afind_grid_control_pane_ParamLimits

0x0916,	// (0x00051678) cell_afind_grid_control_pane

0x0925,	// (0x00051687) bg_button_pane_cp69_ParamLimits

0x0925,	// (0x00051687) bg_button_pane_cp69

0x7eee,	// (0x00058c50) cell_afind_pane_g1_ParamLimits

0x7eee,	// (0x00058c50) cell_afind_pane_g1

0x7efb,	// (0x00058c5d) cell_afind_pane_t1_ParamLimits

0x7efb,	// (0x00058c5d) cell_afind_pane_t1

0x0931,	// (0x00051693) bg_button_pane_cp72

0x0939,	// (0x0005169b) cell_afind_grid_control_pane_g1

0x5aac,	// (0x0005680e) aid_image_placing_area_ParamLimits

0x5aac,	// (0x0005680e) aid_image_placing_area

0xbf04,	// (0x0005cc66) field_vitu_entry_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) field_vitu_entry_pane_g1

0xbf04,	// (0x0005cc66) field_vitu_entry_pane_g2_ParamLimits

0xbf04,	// (0x0005cc66) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0005fefb) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0005fefb) field_vitu_entry_pane_g

0xeed7,	// (0x0005fc39) cell_vitu_itu_pane_g1_ParamLimits

0xee26,	// (0x0005fb88) cell_vitu_itu_pane_t3_ParamLimits

0xee26,	// (0x0005fb88) cell_vitu_itu_pane_t3

0x0721,	// (0x00051483) mp4_progress_pane_t1_ParamLimits

0x0740,	// (0x000514a2) mp4_progress_pane_t2_ParamLimits

0xf7ba,	// (0x0006051c) mp4_progress_pane_t_ParamLimits

0x075f,	// (0x000514c1) mup_progress_pane_cp04_ParamLimits

0x7e0b,	// (0x00058b6d) main_myfav_hc_pane_t5_ParamLimits

0x7e0b,	// (0x00058b6d) main_myfav_hc_pane_t5

0x32ea,	// (0x0005404c) aid_zoom_text_primary

0x31ee,	// (0x00053f50) popup_adpt_find_window_ParamLimits

0x5f03,	// (0x00056c65) main_cam_set_pane

0x779e,	// (0x00058500) cam4_zoom_pane_ParamLimits

0x779e,	// (0x00058500) cam4_zoom_pane

0x7f0d,	// (0x00058c6f) main_cam_set_pane_g1_ParamLimits

0x7f0d,	// (0x00058c6f) main_cam_set_pane_g1

0x7f1b,	// (0x00058c7d) main_cam_set_pane_g2_ParamLimits

0x7f1b,	// (0x00058c7d) main_cam_set_pane_g2

0x0001,

0xf87b,	// (0x000605dd) main_cam_set_pane_g_ParamLimits

0xf87b,	// (0x000605dd) main_cam_set_pane_g

0x7f27,	// (0x00058c89) main_cam_set_pane_t1_ParamLimits

0x7f27,	// (0x00058c89) main_cam_set_pane_t1

0x7f43,	// (0x00058ca5) main_cset_listscroll_pane_ParamLimits

0x7f43,	// (0x00058ca5) main_cset_listscroll_pane

0x7f75,	// (0x00058cd7) main_cset_slider_pane_ParamLimits

0x7f75,	// (0x00058cd7) main_cset_slider_pane

0x094a,	// (0x000516ac) main_cset_list_pane_ParamLimits

0x094a,	// (0x000516ac) main_cset_list_pane

0x095a,	// (0x000516bc) scroll_pane_cp028

0x7f94,	// (0x00058cf6) aid_area_touch_slider

0x7fb0,	// (0x00058d12) cset_slider_pane

0x7fd3,	// (0x00058d35) main_cset_slider_pane_g1

0x7fe8,	// (0x00058d4a) main_cset_slider_pane_g2

0x0011,

0xf880,	// (0x000605e2) main_cset_slider_pane_g

0x0a82,	// (0x000517e4) main_cset_slider_pane_t1

0x80ae,	// (0x00058e10) main_cset_slider_pane_t2

0x80c8,	// (0x00058e2a) main_cset_slider_pane_t3

0x80e2,	// (0x00058e44) main_cset_slider_pane_t4

0x8100,	// (0x00058e62) main_cset_slider_pane_t5

0x811e,	// (0x00058e80) main_cset_slider_pane_t6

0x8135,	// (0x00058e97) main_cset_slider_pane_t7

0x000e,

0xf8a5,	// (0x00060607) main_cset_slider_pane_t

0x8243,	// (0x00058fa5) cset_list_set_pane_ParamLimits

0x8243,	// (0x00058fa5) cset_list_set_pane

0x0b1c,	// (0x0005187e) aid_position_infowindow_above

0x0b24,	// (0x00051886) aid_position_infowindow_below

0x825c,	// (0x00058fbe) cset_list_set_pane_g1_ParamLimits

0x825c,	// (0x00058fbe) cset_list_set_pane_g1

0x8268,	// (0x00058fca) cset_list_set_pane_g3_ParamLimits

0x8268,	// (0x00058fca) cset_list_set_pane_g3

0x0001,

0xf8c4,	// (0x00060626) cset_list_set_pane_g_ParamLimits

0xf8c4,	// (0x00060626) cset_list_set_pane_g

0x8277,	// (0x00058fd9) cset_list_set_pane_t1_ParamLimits

0x8277,	// (0x00058fd9) cset_list_set_pane_t1

0xbe9d,	// (0x0005cbff) list_highlight_pane_cp021_ParamLimits

0xbe9d,	// (0x0005cbff) list_highlight_pane_cp021

0xd20a,	// (0x0005df6c) cset_slider_pane_g1

0xd21c,	// (0x0005df7e) cset_slider_pane_g2

0xd213,	// (0x0005df75) cset_slider_pane_g3

0x0002,

0xf8c9,	// (0x0006062b) cset_slider_pane_g

0x828c,	// (0x00058fee) aid_area_touch_cam4_zoom

0x8294,	// (0x00058ff6) cam4_zoom_cont_pane

0x829c,	// (0x00058ffe) cam4_zoom_pane_g1

0x82a4,	// (0x00059006) cam4_zoom_pane_g2

0x82ac,	// (0x0005900e) cam4_zoom_pane_g3

0x0002,

0xf8d0,	// (0x00060632) cam4_zoom_pane_g

0x82b4,	// (0x00059016) cam4_zoom_cont_pane_g1

0x82bd,	// (0x0005901f) cam4_zoom_cont_pane_g2

0x82c6,	// (0x00059028) cam4_zoom_cont_pane_g3

0x0002,

0xf8d7,	// (0x00060639) cam4_zoom_cont_pane_g

0x75dc,	// (0x0005833e) call4_image_pane_ParamLimits

0x75dc,	// (0x0005833e) call4_image_pane

0x763b,	// (0x0005839d) call4_windows_conf_pane_ParamLimits

0x767e,	// (0x000583e0) popup_call4_audio_in_window_ParamLimits

0x767e,	// (0x000583e0) popup_call4_audio_in_window

0xb803,	// (0x0005c565) bg_popup_call2_act_pane_cp02

0x07a0,	// (0x00051502) call4_list_conf_pane

0xbf42,	// (0x0005cca4) call4_image_pane_g1

0xbf42,	// (0x0005cca4) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) call4_image_pane_g

0x0b47,	// (0x000518a9) list_single_graphic_popup_conf4_pane_ParamLimits

0x0b47,	// (0x000518a9) list_single_graphic_popup_conf4_pane

0xb803,	// (0x0005c565) list_highlight_pane_cp022

0x0b5a,	// (0x000518bc) list_single_graphic_popup_conf4_pane_g1

0xce29,	// (0x0005db8b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8de,	// (0x00060640) list_single_graphic_popup_conf4_pane_g

0x0b62,	// (0x000518c4) list_single_graphic_popup_conf4_pane_t1

0x405a,	// (0x00054dbc) popup_vtel_slider_window_ParamLimits

0x405a,	// (0x00054dbc) popup_vtel_slider_window

0x0772,	// (0x000514d4) dialer2_ne_pane_t2_ParamLimits

0x0772,	// (0x000514d4) dialer2_ne_pane_t2

0x0001,

0xf7bf,	// (0x00060521) dialer2_ne_pane_t_ParamLimits

0xf7bf,	// (0x00060521) dialer2_ne_pane_t

0xbe9d,	// (0x0005cbff) bg_popup_sub_pane_cp010_ParamLimits

0xbe9d,	// (0x0005cbff) bg_popup_sub_pane_cp010

0x82cf,	// (0x00059031) popup_vtel_slider_window_g1_ParamLimits

0x82cf,	// (0x00059031) popup_vtel_slider_window_g1

0x82db,	// (0x0005903d) popup_vtel_slider_window_g2_ParamLimits

0x82db,	// (0x0005903d) popup_vtel_slider_window_g2

0x0003,

0xf8e3,	// (0x00060645) popup_vtel_slider_window_g_ParamLimits

0xf8e3,	// (0x00060645) popup_vtel_slider_window_g

0x8323,	// (0x00059085) vtel_slider_pane_ParamLimits

0x8323,	// (0x00059085) vtel_slider_pane

0x8332,	// (0x00059094) vtel_slider_pane_g1_ParamLimits

0x8332,	// (0x00059094) vtel_slider_pane_g1

0x833f,	// (0x000590a1) vtel_slider_pane_g2_ParamLimits

0x833f,	// (0x000590a1) vtel_slider_pane_g2

0x834c,	// (0x000590ae) vtel_slider_pane_g3_ParamLimits

0x834c,	// (0x000590ae) vtel_slider_pane_g3

0x8332,	// (0x00059094) vtel_slider_pane_g4_ParamLimits

0x8332,	// (0x00059094) vtel_slider_pane_g4

0x8359,	// (0x000590bb) vtel_slider_pane_g5_ParamLimits

0x8359,	// (0x000590bb) vtel_slider_pane_g5

0x0004,

0xf8ec,	// (0x0006064e) vtel_slider_pane_g_ParamLimits

0xf8ec,	// (0x0006064e) vtel_slider_pane_g

0x5f03,	// (0x00056c65) main_gallery2_pane

0x79e8,	// (0x0005874a) aid_size_row_itut2_dropdow_list_ParamLimits

0x79e8,	// (0x0005874a) aid_size_row_itut2_dropdow_list

0x7a52,	// (0x000587b4) grid_vitu2_function_top_pane_ParamLimits

0x7a52,	// (0x000587b4) grid_vitu2_function_top_pane

0x7aa6,	// (0x00058808) popup_vitu2_dropdown_list_window_ParamLimits

0x7aa6,	// (0x00058808) popup_vitu2_dropdown_list_window

0x7ac8,	// (0x0005882a) popup_vitu2_match_list_window

0x8366,	// (0x000590c8) cell_vitu2_function_top_pane_ParamLimits

0x8366,	// (0x000590c8) cell_vitu2_function_top_pane

0x8380,	// (0x000590e2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8380,	// (0x000590e2) cell_vitu2_function_top_pane_cp01

0x839c,	// (0x000590fe) cell_vitu2_function_top_wide_pane_ParamLimits

0x839c,	// (0x000590fe) cell_vitu2_function_top_wide_pane

0x5f03,	// (0x00056c65) bg_button_pane_cp012

0x83ba,	// (0x0005911c) cell_vitu2_function_top_pane_g1

0x83ce,	// (0x00059130) bg_button_pane_cp013_ParamLimits

0x83ce,	// (0x00059130) bg_button_pane_cp013

0x83ea,	// (0x0005914c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x83ea,	// (0x0005914c) cell_vitu2_function_top_wide_pane_g1

0x34b5,	// (0x00054217) bg_popup_sub_pane_cp20

0x8402,	// (0x00059164) list_vitu2_match_list_pane

0x081a,	// (0x0005157c) bg_popup_sub_pane_cp20_g1

0x0822,	// (0x00051584) bg_popup_sub_pane_cp20_g2

0xc952,	// (0x0005d6b4) bg_popup_sub_pane_cp20_g3

0x082a,	// (0x0005158c) bg_popup_sub_pane_cp20_g4

0xc932,	// (0x0005d694) bg_popup_sub_pane_cp20_g5

0x0b78,	// (0x000518da) bg_popup_sub_pane_cp20_g6

0x083a,	// (0x0005159c) bg_popup_sub_pane_cp20_g7

0x0842,	// (0x000515a4) bg_popup_sub_pane_cp20_g8

0x084a,	// (0x000515ac) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f7,	// (0x00060659) bg_popup_sub_pane_cp20_g

0x841a,	// (0x0005917c) list_vitu2_match_list_item_pane_ParamLimits

0x841a,	// (0x0005917c) list_vitu2_match_list_item_pane

0x842c,	// (0x0005918e) list_vitu2_match_list_item_pane_t1

0x34cf,	// (0x00054231) bg_popup_sub_pane_cp21

0xc707,	// (0x0005d469) grid_vitu2_dropdown_list_pane

0x843a,	// (0x0005919c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x843a,	// (0x0005919c) cell_vitu2_dropdown_list_char_pane

0x845c,	// (0x000591be) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x845c,	// (0x000591be) cell_vitu2_dropdown_list_ctrl_pane

0x0b92,	// (0x000518f4) cell_vitu2_dropdown_list_char_pane_g1

0x0b89,	// (0x000518eb) cell_vitu2_dropdown_list_char_pane_g2

0x0b80,	// (0x000518e2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf90a,	// (0x0006066c) cell_vitu2_dropdown_list_char_pane_g

0x8484,	// (0x000591e6) cell_vitu2_dropdown_list_char_pane_t1

0x8492,	// (0x000591f4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8492,	// (0x000591f4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x84a2,	// (0x00059204) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x84a2,	// (0x00059204) cell_vitu2_dropdown_list_ctrl_pane_g2

0x84b3,	// (0x00059215) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x84b3,	// (0x00059215) cell_vitu2_dropdown_list_ctrl_pane_g3

0x84c3,	// (0x00059225) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x84c3,	// (0x00059225) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1a78,	// (0x000527da) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1a78,	// (0x000527da) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf911,	// (0x00060673) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf911,	// (0x00060673) cell_vitu2_dropdown_list_ctrl_pane_g

0x84dc,	// (0x0005923e) aid_size_cell_gallery2_ParamLimits

0x84dc,	// (0x0005923e) aid_size_cell_gallery2

0x84f6,	// (0x00059258) grid_gallery2_pane_ParamLimits

0x84f6,	// (0x00059258) grid_gallery2_pane

0x850d,	// (0x0005926f) scroll_pane_cp029_ParamLimits

0x850d,	// (0x0005926f) scroll_pane_cp029

0x851d,	// (0x0005927f) cell_gallery2_pane_ParamLimits

0x851d,	// (0x0005927f) cell_gallery2_pane

0xc756,	// (0x0005d4b8) cell_gallery2_pane_g2

0x8572,	// (0x000592d4) cell_gallery2_pane_g3

0x0b9b,	// (0x000518fd) cell_gallery2_pane_g4

0x0ba3,	// (0x00051905) cell_gallery2_pane_g5

0xc707,	// (0x0005d469) grid_highlight_pane_cp10

0x7ac8,	// (0x0005882a) popup_vitu2_match_list_window_ParamLimits

0x7ada,	// (0x0005883c) popup_vitu2_query_window_ParamLimits

0x7ada,	// (0x0005883c) popup_vitu2_query_window

0x34cf,	// (0x00054231) bg_vitu2_candi_button_pane

0x0b92,	// (0x000518f4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0b89,	// (0x000518eb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0b80,	// (0x000518e2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x857a,	// (0x000592dc) bg_button_pane_cp015

0x858f,	// (0x000592f1) bg_button_pane_cp016

0x859b,	// (0x000592fd) bg_button_pane_cp017

0xd26e,	// (0x0005dfd0) bg_popup_sub_pane_cp22

0x0bab,	// (0x0005190d) popup_vitu2_query_window_g1

0x85db,	// (0x0005933d) popup_vitu2_query_window_g2

0x0002,

0xf91c,	// (0x0006067e) popup_vitu2_query_window_g

0x85ff,	// (0x00059361) popup_vitu2_query_window_t1_ParamLimits

0x85ff,	// (0x00059361) popup_vitu2_query_window_t1

0x8632,	// (0x00059394) popup_vitu2_query_window_t2_ParamLimits

0x8632,	// (0x00059394) popup_vitu2_query_window_t2

0x8644,	// (0x000593a6) popup_vitu2_query_window_t3_ParamLimits

0x8644,	// (0x000593a6) popup_vitu2_query_window_t3

0x866c,	// (0x000593ce) popup_vitu2_query_window_t4_ParamLimits

0x866c,	// (0x000593ce) popup_vitu2_query_window_t4

0x8680,	// (0x000593e2) popup_vitu2_query_window_t5_ParamLimits

0x8680,	// (0x000593e2) popup_vitu2_query_window_t5

0x0006,

0xf923,	// (0x00060685) popup_vitu2_query_window_t_ParamLimits

0xf923,	// (0x00060685) popup_vitu2_query_window_t

0x0942,	// (0x000516a4) main_cset_text_pane

0x7f94,	// (0x00058cf6) aid_area_touch_slider_ParamLimits

0x7fb0,	// (0x00058d12) cset_slider_pane_ParamLimits

0x7fd3,	// (0x00058d35) main_cset_slider_pane_g1_ParamLimits

0x7fe8,	// (0x00058d4a) main_cset_slider_pane_g2_ParamLimits

0x0963,	// (0x000516c5) main_cset_slider_pane_g3_ParamLimits

0x0963,	// (0x000516c5) main_cset_slider_pane_g3

0x7ffd,	// (0x00058d5f) main_cset_slider_pane_g4_ParamLimits

0x7ffd,	// (0x00058d5f) main_cset_slider_pane_g4

0x800c,	// (0x00058d6e) main_cset_slider_pane_g5_ParamLimits

0x800c,	// (0x00058d6e) main_cset_slider_pane_g5

0x801a,	// (0x00058d7c) main_cset_slider_pane_g6_ParamLimits

0x801a,	// (0x00058d7c) main_cset_slider_pane_g6

0xf880,	// (0x000605e2) main_cset_slider_pane_g_ParamLimits

0x0a82,	// (0x000517e4) main_cset_slider_pane_t1_ParamLimits

0x80ae,	// (0x00058e10) main_cset_slider_pane_t2_ParamLimits

0x80c8,	// (0x00058e2a) main_cset_slider_pane_t3_ParamLimits

0x80e2,	// (0x00058e44) main_cset_slider_pane_t4_ParamLimits

0x8100,	// (0x00058e62) main_cset_slider_pane_t5_ParamLimits

0x811e,	// (0x00058e80) main_cset_slider_pane_t6_ParamLimits

0x8135,	// (0x00058e97) main_cset_slider_pane_t7_ParamLimits

0x8163,	// (0x00058ec5) main_cset_slider_pane_t8_ParamLimits

0x8163,	// (0x00058ec5) main_cset_slider_pane_t8

0x818b,	// (0x00058eed) main_cset_slider_pane_t9_ParamLimits

0x818b,	// (0x00058eed) main_cset_slider_pane_t9

0x81b3,	// (0x00058f15) main_cset_slider_pane_t10_ParamLimits

0x81b3,	// (0x00058f15) main_cset_slider_pane_t10

0x81db,	// (0x00058f3d) main_cset_slider_pane_t11_ParamLimits

0x81db,	// (0x00058f3d) main_cset_slider_pane_t11

0x8205,	// (0x00058f67) main_cset_slider_pane_t12_ParamLimits

0x8205,	// (0x00058f67) main_cset_slider_pane_t12

0x8224,	// (0x00058f86) main_cset_slider_pane_t13_ParamLimits

0x8224,	// (0x00058f86) main_cset_slider_pane_t13

0xf8a5,	// (0x00060607) main_cset_slider_pane_t_ParamLimits

0xb803,	// (0x0005c565) bg_popup_sub_pane_cp011

0x0bb7,	// (0x00051919) main_cset_text_pane_g1

0x0bbf,	// (0x00051921) main_cset_text_pane_t1

0x0bcd,	// (0x0005192f) main_cset_text_pane_t2

0x0bdb,	// (0x0005193d) main_cset_text_pane_t3

0x0be9,	// (0x0005194b) main_cset_text_pane_t4

0x0bf7,	// (0x00051959) main_cset_text_pane_t5

0x0c05,	// (0x00051967) main_cset_text_pane_t6

0x0c13,	// (0x00051975) main_cset_text_pane_t7

0x0006,

0xf932,	// (0x00060694) main_cset_text_pane_t

0x34cf,	// (0x00054231) main_cam4_burst_pane

0x34cf,	// (0x00054231) main_cam5_pane

0x0904,	// (0x00051666) bg_button_pane_cp019

0x090d,	// (0x0005166f) bg_button_pane_cp020

0x0a5e,	// (0x000517c0) main_cset_slider_pane_g7_ParamLimits

0x0a5e,	// (0x000517c0) main_cset_slider_pane_g7

0x0a6a,	// (0x000517cc) main_cset_slider_pane_g8_ParamLimits

0x0a6a,	// (0x000517cc) main_cset_slider_pane_g8

0x802e,	// (0x00058d90) main_cset_slider_pane_g9_ParamLimits

0x802e,	// (0x00058d90) main_cset_slider_pane_g9

0x803a,	// (0x00058d9c) main_cset_slider_pane_g10_ParamLimits

0x803a,	// (0x00058d9c) main_cset_slider_pane_g10

0x8046,	// (0x00058da8) main_cset_slider_pane_g11_ParamLimits

0x8046,	// (0x00058da8) main_cset_slider_pane_g11

0x8052,	// (0x00058db4) main_cset_slider_pane_g12_ParamLimits

0x8052,	// (0x00058db4) main_cset_slider_pane_g12

0x805e,	// (0x00058dc0) main_cset_slider_pane_g13_ParamLimits

0x805e,	// (0x00058dc0) main_cset_slider_pane_g13

0x806c,	// (0x00058dce) main_cset_slider_pane_g14_ParamLimits

0x806c,	// (0x00058dce) main_cset_slider_pane_g14

0x807a,	// (0x00058ddc) main_cset_slider_pane_g15_ParamLimits

0x807a,	// (0x00058ddc) main_cset_slider_pane_g15

0x0aaa,	// (0x0005180c) main_cset_slider_pane_t14_ParamLimits

0x0aaa,	// (0x0005180c) main_cset_slider_pane_t14

0x0ae3,	// (0x00051845) main_cset_slider_pane_t15_ParamLimits

0x0ae3,	// (0x00051845) main_cset_slider_pane_t15

0x86ea,	// (0x0005944c) aid_cam4_burst_size_cell_ParamLimits

0x86ea,	// (0x0005944c) aid_cam4_burst_size_cell

0x8706,	// (0x00059468) grid_cam4_burst_pane_ParamLimits

0x8706,	// (0x00059468) grid_cam4_burst_pane

0x8736,	// (0x00059498) linegrid_cam4_burst_pane_ParamLimits

0x8736,	// (0x00059498) linegrid_cam4_burst_pane

0x8756,	// (0x000594b8) scroll_pane_cp30_ParamLimits

0x8756,	// (0x000594b8) scroll_pane_cp30

0x8762,	// (0x000594c4) cell_cam4_burst_pane_ParamLimits

0x8762,	// (0x000594c4) cell_cam4_burst_pane

0x0c21,	// (0x00051983) linegrid_cam4_burst_pane_g1_ParamLimits

0x0c21,	// (0x00051983) linegrid_cam4_burst_pane_g1

0x879e,	// (0x00059500) linegrid_cam4_burst_pane_g2_ParamLimits

0x879e,	// (0x00059500) linegrid_cam4_burst_pane_g2

0x0c2e,	// (0x00051990) linegrid_cam4_burst_pane_g3_ParamLimits

0x0c2e,	// (0x00051990) linegrid_cam4_burst_pane_g3

0x0002,

0xf941,	// (0x000606a3) linegrid_cam4_burst_pane_g_ParamLimits

0xf941,	// (0x000606a3) linegrid_cam4_burst_pane_g

0x87af,	// (0x00059511) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x87af,	// (0x00059511) linegrid_cam4_burst_pane_g3_copy1

0x0c3b,	// (0x0005199d) linegrid_cam4_burst_pane_g4_ParamLimits

0x0c3b,	// (0x0005199d) linegrid_cam4_burst_pane_g4

0x87c9,	// (0x0005952b) linegrid_cam4_burst_pane_g5_ParamLimits

0x87c9,	// (0x0005952b) linegrid_cam4_burst_pane_g5

0x87da,	// (0x0005953c) linegrid_cam4_burst_pane_g6_ParamLimits

0x87da,	// (0x0005953c) linegrid_cam4_burst_pane_g6

0x0c48,	// (0x000519aa) linegrid_cam4_burst_pane_g7_ParamLimits

0x0c48,	// (0x000519aa) linegrid_cam4_burst_pane_g7

0x87eb,	// (0x0005954d) cell_cam4_burst_pane_g1

0x0c61,	// (0x000519c3) main_cam5_pane_t1_ParamLimits

0x0c61,	// (0x000519c3) main_cam5_pane_t1

0x0c73,	// (0x000519d5) main_cam5_pane_t2_ParamLimits

0x0c73,	// (0x000519d5) main_cam5_pane_t2

0x0c85,	// (0x000519e7) main_cam5_pane_t3_ParamLimits

0x0c85,	// (0x000519e7) main_cam5_pane_t3

0x0c97,	// (0x000519f9) main_cam5_pane_t4_ParamLimits

0x0c97,	// (0x000519f9) main_cam5_pane_t4

0x0caf,	// (0x00051a11) main_cam5_pane_t5_ParamLimits

0x0caf,	// (0x00051a11) main_cam5_pane_t5

0x0cc3,	// (0x00051a25) main_cam5_pane_t6_ParamLimits

0x0cc3,	// (0x00051a25) main_cam5_pane_t6

0x0cd7,	// (0x00051a39) main_cam5_pane_t7_ParamLimits

0x0cd7,	// (0x00051a39) main_cam5_pane_t7

0x0ce9,	// (0x00051a4b) main_cam5_pane_t8_ParamLimits

0x0ce9,	// (0x00051a4b) main_cam5_pane_t8

0x0d05,	// (0x00051a67) main_cam5_pane_t9_ParamLimits

0x0d05,	// (0x00051a67) main_cam5_pane_t9

0x0d17,	// (0x00051a79) main_cam5_pane_t10_ParamLimits

0x0d17,	// (0x00051a79) main_cam5_pane_t10

0x0d29,	// (0x00051a8b) main_cam5_pane_t11_ParamLimits

0x0d29,	// (0x00051a8b) main_cam5_pane_t11

0x0d3b,	// (0x00051a9d) main_cam5_pane_t12_ParamLimits

0x0d3b,	// (0x00051a9d) main_cam5_pane_t12

0x0d50,	// (0x00051ab2) main_cam5_pane_t13_ParamLimits

0x0d50,	// (0x00051ab2) main_cam5_pane_t13

0x000c,

0xf94d,	// (0x000606af) main_cam5_pane_t_ParamLimits

0xf94d,	// (0x000606af) main_cam5_pane_t

0x3474,	// (0x000541d6) popup_scut_keymap_window_ParamLimits

0x3474,	// (0x000541d6) popup_scut_keymap_window

0x87fe,	// (0x00059560) aid_size_cell_brow_shortcut

0xc707,	// (0x0005d469) bg_popup_window_pane_cp010

0x880a,	// (0x0005956c) grid_scut_pane

0x8816,	// (0x00059578) cell_scut_pane_ParamLimits

0x8816,	// (0x00059578) cell_scut_pane

0x882d,	// (0x0005958f) cell_scut_pane_g1

0x0d6d,	// (0x00051acf) cell_scut_pane_t1

0x0d7c,	// (0x00051ade) cell_scut_pane_t2

0x8836,	// (0x00059598) cell_scut_pane_t3

0x0002,

0xf968,	// (0x000606ca) cell_scut_pane_t

0x6747,	// (0x000574a9) main_mup3_pane_g8_ParamLimits

0x6747,	// (0x000574a9) main_mup3_pane_g8

0x79f8,	// (0x0005875a) area_vitu2_query_pane_ParamLimits

0x79f8,	// (0x0005875a) area_vitu2_query_pane

0x85a7,	// (0x00059309) input_focus_pane_cp08

0x0d8b,	// (0x00051aed) area_vitu2_query_pane_g1

0x8844,	// (0x000595a6) area_vitu2_query_pane_g2

0x0001,

0xf96f,	// (0x000606d1) area_vitu2_query_pane_g

0x8855,	// (0x000595b7) area_vitu2_query_pane_t1_ParamLimits

0x8855,	// (0x000595b7) area_vitu2_query_pane_t1

0x8869,	// (0x000595cb) area_vitu2_query_pane_t2_ParamLimits

0x8869,	// (0x000595cb) area_vitu2_query_pane_t2

0x887d,	// (0x000595df) area_vitu2_query_pane_t3_ParamLimits

0x887d,	// (0x000595df) area_vitu2_query_pane_t3

0x0d97,	// (0x00051af9) area_vitu2_query_pane_t4_ParamLimits

0x0d97,	// (0x00051af9) area_vitu2_query_pane_t4

0x0dc8,	// (0x00051b2a) area_vitu2_query_pane_t5_ParamLimits

0x0dc8,	// (0x00051b2a) area_vitu2_query_pane_t5

0x0df0,	// (0x00051b52) area_vitu2_query_pane_t6_ParamLimits

0x0df0,	// (0x00051b52) area_vitu2_query_pane_t6

0x0006,

0xf974,	// (0x000606d6) area_vitu2_query_pane_t_ParamLimits

0xf974,	// (0x000606d6) area_vitu2_query_pane_t

0x858f,	// (0x000592f1) bg_button_pane_cp018

0x88a5,	// (0x00059607) bg_button_pane_cp021

0x88b1,	// (0x00059613) bg_button_pane_cp022

0x88d4,	// (0x00059636) input_focus_pane_cp09

0xcf38,	// (0x0005dc9a) aid_size_touch_mv_arrow_left

0xcf63,	// (0x0005dcc5) aid_size_touch_mv_arrow_right

0x8092,	// (0x00058df4) main_cset_slider_pane_g16_ParamLimits

0x8092,	// (0x00058df4) main_cset_slider_pane_g16

0x80a0,	// (0x00058e02) main_cset_slider_pane_g17_ParamLimits

0x80a0,	// (0x00058e02) main_cset_slider_pane_g17

0x87eb,	// (0x0005954d) cell_cam4_burst_pane_g1_ParamLimits

0xb803,	// (0x0005c565) compa_mode_pane

0x82e7,	// (0x00059049) popup_vtel_slider_window_g3_ParamLimits

0x82e7,	// (0x00059049) popup_vtel_slider_window_g3

0x82fb,	// (0x0005905d) popup_vtel_slider_window_g4_ParamLimits

0x82fb,	// (0x0005905d) popup_vtel_slider_window_g4

0x830f,	// (0x00059071) popup_vtel_slider_window_t1_ParamLimits

0x830f,	// (0x00059071) popup_vtel_slider_window_t1

0x34cf,	// (0x00054231) main_cl_pane

0x5f9d,	// (0x00056cff) popup_imed_adjust2_window_ParamLimits

0xd26e,	// (0x0005dfd0) bg_tb_trans_pane_cp05_ParamLimits

0xede7,	// (0x0005fb49) popup_imed_adjust2_window_g1_ParamLimits

0xedf6,	// (0x0005fb58) popup_imed_adjust2_window_g2_ParamLimits

0xedf6,	// (0x0005fb58) popup_imed_adjust2_window_g2

0xee02,	// (0x0005fb64) popup_imed_adjust2_window_g3_ParamLimits

0xee02,	// (0x0005fb64) popup_imed_adjust2_window_g3

0x0002,

0xf6f4,	// (0x00060456) popup_imed_adjust2_window_g_ParamLimits

0xf6f4,	// (0x00060456) popup_imed_adjust2_window_g

0xee0e,	// (0x0005fb70) popup_imed_adjust2_window_t1_ParamLimits

0xee43,	// (0x0005fba5) slider_imed_adjust_pane_ParamLimits

0xee57,	// (0x0005fbb9) slider_imed_adjust_pane_g1_ParamLimits

0xee67,	// (0x0005fbc9) slider_imed_adjust_pane_g2_ParamLimits

0xee77,	// (0x0005fbd9) slider_imed_adjust_pane_g3_ParamLimits

0xee88,	// (0x0005fbea) slider_imed_adjust_pane_g4_ParamLimits

0xf6fb,	// (0x0006045d) slider_imed_adjust_pane_g_ParamLimits

0x7747,	// (0x000584a9) aid_touch_area_cam4_ParamLimits

0x7747,	// (0x000584a9) aid_touch_area_cam4

0x7757,	// (0x000584b9) battery_pane_cp01

0x77de,	// (0x00058540) main_camera4_pane_g6_ParamLimits

0x77de,	// (0x00058540) main_camera4_pane_g6

0x77fc,	// (0x0005855e) main_camera4_pane_t2_ParamLimits

0x77fc,	// (0x0005855e) main_camera4_pane_t2

0x0001,

0xf7f3,	// (0x00060555) main_camera4_pane_t_ParamLimits

0xf7f3,	// (0x00060555) main_camera4_pane_t

0x787d,	// (0x000585df) aid_touch_area_vid4_ParamLimits

0x787d,	// (0x000585df) aid_touch_area_vid4

0x78bd,	// (0x0005861f) main_video4_pane_g5_ParamLimits

0x78bd,	// (0x0005861f) main_video4_pane_g5

0x78e1,	// (0x00058643) vid4_progress_pane_ParamLimits

0x78e1,	// (0x00058643) vid4_progress_pane

0x0a76,	// (0x000517d8) main_cset_slider_pane_g18_ParamLimits

0x0a76,	// (0x000517d8) main_cset_slider_pane_g18

0x0c55,	// (0x000519b7) cell_cam4_burst_pane_g2_ParamLimits

0x0c55,	// (0x000519b7) cell_cam4_burst_pane_g2

0x0001,

0xf948,	// (0x000606aa) cell_cam4_burst_pane_g_ParamLimits

0xf948,	// (0x000606aa) cell_cam4_burst_pane_g

0x88e4,	// (0x00059646) bg_cl_pane_ParamLimits

0x88e4,	// (0x00059646) bg_cl_pane

0x88f0,	// (0x00059652) cl_header_pane_ParamLimits

0x88f0,	// (0x00059652) cl_header_pane

0x88fc,	// (0x0005965e) cl_listscroll_pane_ParamLimits

0x88fc,	// (0x0005965e) cl_listscroll_pane

0x0e3c,	// (0x00051b9e) bg_cl_pane_g1

0x0e44,	// (0x00051ba6) bg_cl_pane_g2

0x0e4c,	// (0x00051bae) bg_cl_pane_g3

0x0e54,	// (0x00051bb6) bg_cl_pane_g4

0x0e5c,	// (0x00051bbe) bg_cl_pane_g5

0x0e64,	// (0x00051bc6) bg_cl_pane_g6

0x0e6c,	// (0x00051bce) bg_cl_pane_g7

0x0e74,	// (0x00051bd6) bg_cl_pane_g8

0x0e7c,	// (0x00051bde) bg_cl_pane_g9

0x0008,

0xf983,	// (0x000606e5) bg_cl_pane_g

0x8908,	// (0x0005966a) aid_height_cl_leading_ParamLimits

0x8908,	// (0x0005966a) aid_height_cl_leading

0x8914,	// (0x00059676) aid_height_cl_text_ParamLimits

0x8914,	// (0x00059676) aid_height_cl_text

0xbef6,	// (0x0005cc58) bg_cl_header_pane_ParamLimits

0xbef6,	// (0x0005cc58) bg_cl_header_pane

0x892c,	// (0x0005968e) cl_header_pane_g1_ParamLimits

0x892c,	// (0x0005968e) cl_header_pane_g1

0x8939,	// (0x0005969b) cl_header_pane_t1_ParamLimits

0x8939,	// (0x0005969b) cl_header_pane_t1

0x0e84,	// (0x00051be6) cl_list_pane

0x095a,	// (0x000516bc) hc_scroll_pane_cp01

0xc932,	// (0x0005d694) bg_cl_header_pane_g1

0x081a,	// (0x0005157c) bg_cl_header_pane_g2

0xc952,	// (0x0005d6b4) bg_cl_header_pane_g3

0x082a,	// (0x0005158c) bg_cl_header_pane_g4

0x0822,	// (0x00051584) bg_cl_header_pane_g5

0x0b78,	// (0x000518da) bg_cl_header_pane_g6

0x0842,	// (0x000515a4) bg_cl_header_pane_g7

0x084a,	// (0x000515ac) bg_cl_header_pane_g8

0x083a,	// (0x0005159c) bg_cl_header_pane_g9

0x0008,

0xf996,	// (0x000606f8) bg_cl_header_pane_g

0x894b,	// (0x000596ad) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x894b,	// (0x000596ad) hc_cl_list_double_graphic_heading_pane

0x895f,	// (0x000596c1) hc_cl_list_single_graphic_pane_ParamLimits

0x895f,	// (0x000596c1) hc_cl_list_single_graphic_pane

0x8979,	// (0x000596db) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8979,	// (0x000596db) hc_cl_list_single_graphic_pane_g1

0x8985,	// (0x000596e7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8985,	// (0x000596e7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0006070b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0006070b) hc_cl_list_single_graphic_pane_g

0x8999,	// (0x000596fb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8999,	// (0x000596fb) hc_cl_list_single_graphic_pane_t1

0x8979,	// (0x000596db) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8979,	// (0x000596db) hc_cl_list_double_graphic_heading_pane_g1

0x89ae,	// (0x00059710) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x89ae,	// (0x00059710) hc_cl_list_double_graphic_heading_pane_g2

0x89c2,	// (0x00059724) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x89c2,	// (0x00059724) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ae,	// (0x00060710) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ae,	// (0x00060710) hc_cl_list_double_graphic_heading_pane_g

0x89d6,	// (0x00059738) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x89d6,	// (0x00059738) hc_cl_list_double_graphic_heading_pane_t1

0x89eb,	// (0x0005974d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x89eb,	// (0x0005974d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b5,	// (0x00060717) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b5,	// (0x00060717) hc_cl_list_double_graphic_heading_pane_t

0x8a08,	// (0x0005976a) vid4_progress_pane_g1

0x8a18,	// (0x0005977a) vid4_progress_pane_g2

0x8a28,	// (0x0005978a) vid4_progress_pane_g3

0x8a3a,	// (0x0005979c) vid4_progress_pane_g4

0x0004,

0xf9ba,	// (0x0006071c) vid4_progress_pane_g

0x8a52,	// (0x000597b4) vid4_progress_pane_t1

0x8a68,	// (0x000597ca) vid4_progress_pane_t2

0x0002,

0xf9c5,	// (0x00060727) vid4_progress_pane_t

0x8a93,	// (0x000597f5) wait_bar_pane_cp07

0xe68b,	// (0x0005f3ed) blid_firmament_pane_ParamLimits

0xe6ce,	// (0x0005f430) popup_blid_sat_info2_window_g1

0xe6f2,	// (0x0005f454) popup_blid_sat_info2_window_t3

0xe700,	// (0x0005f462) popup_blid_sat_info2_window_t4

0xe70e,	// (0x0005f470) popup_blid_sat_info2_window_t5

0xe71c,	// (0x0005f47e) popup_blid_sat_info2_window_t6

0xe72c,	// (0x0005f48e) popup_blid_sat_info2_window_t7

0xe73a,	// (0x0005f49c) popup_blid_sat_info2_window_t8

0xe748,	// (0x0005f4aa) popup_blid_sat_info2_window_t9

0xe756,	// (0x0005f4b8) popup_blid_sat_info2_window_t10

0xe817,	// (0x0005f579) aid_firma_cardinal_ParamLimits

0xe82b,	// (0x0005f58d) blid_firmament_pane_t1_ParamLimits

0xe842,	// (0x0005f5a4) blid_firmament_pane_t2_ParamLimits

0xe859,	// (0x0005f5bb) blid_firmament_pane_t3_ParamLimits

0xe870,	// (0x0005f5d2) blid_firmament_pane_t4_ParamLimits

0xf5ed,	// (0x0006034f) blid_firmament_pane_t_ParamLimits

0xe887,	// (0x0005f5e9) blid_sat_info_pane_ParamLimits

0x5f03,	// (0x00056c65) main_cam_set_pane_ParamLimits

0x6e11,	// (0x00057b73) aid_size_cell_colour_35_ParamLimits

0x6e2b,	// (0x00057b8d) aid_size_cell_colour_112_ParamLimits

0x6e42,	// (0x00057ba4) aid_size_cell_effect_ParamLimits

0xbe9d,	// (0x0005cbff) bg_tb_trans_pane_cp02_ParamLimits

0xcc40,	// (0x0005d9a2) heading_imed_pane_ParamLimits

0x6e5c,	// (0x00057bbe) listscroll_imed_pane_ParamLimits

0xdb64,	// (0x0005e8c6) popup_call2_audio_first_window_g5_ParamLimits

0xdb64,	// (0x0005e8c6) popup_call2_audio_first_window_g5

0x7447,	// (0x000581a9) aid_size_touch_image3_arrow_left_ParamLimits

0x7447,	// (0x000581a9) aid_size_touch_image3_arrow_left

0x745d,	// (0x000581bf) aid_size_touch_image3_arrow_right_ParamLimits

0x745d,	// (0x000581bf) aid_size_touch_image3_arrow_right

0x8a7d,	// (0x000597df) vid4_progress_pane_t3

0x6fb6,	// (0x00057d18) main_hwr_training_symbol_option_pane_ParamLimits

0x6fb6,	// (0x00057d18) main_hwr_training_symbol_option_pane

0xef85,	// (0x0005fce7) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x0005fce7) popup_hwr_training_preview_window

0x7017,	// (0x00057d79) hwr_training_navi_pane_g5_ParamLimits

0x7017,	// (0x00057d79) hwr_training_navi_pane_g5

0x0808,	// (0x0005156a) popup_char_count_window

0x34b5,	// (0x00054217) bg_popup_sub_pane_cp20_ParamLimits

0x8402,	// (0x00059164) list_vitu2_match_list_pane_ParamLimits

0x840e,	// (0x00059170) vitu2_page_scroll_pane_ParamLimits

0x840e,	// (0x00059170) vitu2_page_scroll_pane

0x0e96,	// (0x00051bf8) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0e96,	// (0x00051bf8) list_single_hwr_training_symbol_option_pane

0x0ea9,	// (0x00051c0b) list_single_hwr_training_symbol_option_pane_g1

0x0eb1,	// (0x00051c13) list_single_hwr_training_symbol_option_pane_t1

0x0ebf,	// (0x00051c21) bg_button_pane_cp023

0x0ec8,	// (0x00051c2a) bg_button_pane_cp024

0x0efb,	// (0x00051c5d) vitu2_page_scroll_pane_g1

0x0f03,	// (0x00051c65) vitu2_page_scroll_pane_g2

0x0001,

0xf9cc,	// (0x0006072e) vitu2_page_scroll_pane_g

0x0f0b,	// (0x00051c6d) vitu2_page_scroll_pane_t1

0xc077,	// (0x0005cdd9) popup_char_count_window_g1

0x0f1a,	// (0x00051c7c) popup_char_count_window_g2

0x0dbf,	// (0x00051b21) popup_char_count_window_g3

0x0002,

0xf9d1,	// (0x00060733) popup_char_count_window_g

0x0f23,	// (0x00051c85) popup_char_count_window_t1

0x34cf,	// (0x00054231) main_vded2_pane

0xedd3,	// (0x0005fb35) aid_size_cell_imed_line

0xeddd,	// (0x0005fb3f) grid_imed_line_width_pane

0x794d,	// (0x000586af) vid4_indicators_pane_g4

0x0f31,	// (0x00051c93) cell_imed_line_width_pane_ParamLimits

0x0f31,	// (0x00051c93) cell_imed_line_width_pane

0x0f45,	// (0x00051ca7) cell_imed_line_width_pane_g1

0x0f4e,	// (0x00051cb0) cell_imed_line_width_pane_g2

0x0001,

0xf9d8,	// (0x0006073a) cell_imed_line_width_pane_g

0x8ab8,	// (0x0005981a) main_vded2_pane_g1_ParamLimits

0x8ab8,	// (0x0005981a) main_vded2_pane_g1

0x8ac5,	// (0x00059827) main_vded2_pane_g2_ParamLimits

0x8ac5,	// (0x00059827) main_vded2_pane_g2

0x0001,

0xf9dd,	// (0x0006073f) main_vded2_pane_g_ParamLimits

0xf9dd,	// (0x0006073f) main_vded2_pane_g

0x8ad3,	// (0x00059835) vded2_slider_pane_ParamLimits

0x8ad3,	// (0x00059835) vded2_slider_pane

0x8ae0,	// (0x00059842) aid_size_touch_vded2_end

0x8aea,	// (0x0005984c) aid_size_touch_vded2_playhead

0x0f56,	// (0x00051cb8) aid_size_touch_vded2_start

0x0f5e,	// (0x00051cc0) vded2_slider_bg_pane

0x0f67,	// (0x00051cc9) vded2_slider_pane_g1

0x0f70,	// (0x00051cd2) vded2_slider_pane_g2

0x8af2,	// (0x00059854) vded2_slider_pane_g3

0x0002,

0xf9e2,	// (0x00060744) vded2_slider_pane_g

0x0f78,	// (0x00051cda) vded2_slider_bg_pane_g1

0x0f81,	// (0x00051ce3) vded2_slider_bg_pane_g2

0x0f8a,	// (0x00051cec) vded2_slider_bg_pane_g3

0x0002,

0xf9e9,	// (0x0006074b) vded2_slider_bg_pane_g

0x584c,	// (0x000565ae) aid_postcard_touch_down_pane_ParamLimits

0x584c,	// (0x000565ae) aid_postcard_touch_down_pane

0x585c,	// (0x000565be) aid_postcard_touch_up_pane_ParamLimits

0x585c,	// (0x000565be) aid_postcard_touch_up_pane

0x34cf,	// (0x00054231) main_blid2_pane

0x5f2c,	// (0x00056c8e) popup_blid2_search_window

0xb803,	// (0x0005c565) blid2_gps_pane

0xb803,	// (0x0005c565) blid2_navig_pane

0xb803,	// (0x0005c565) blid2_search_pane

0xb803,	// (0x0005c565) blid2_tripm_pane

0x8afb,	// (0x0005985d) blid2_search_pane_g1_ParamLimits

0x8afb,	// (0x0005985d) blid2_search_pane_g1

0x8b0b,	// (0x0005986d) blid2_search_pane_t1_ParamLimits

0x8b0b,	// (0x0005986d) blid2_search_pane_t1

0x8b1d,	// (0x0005987f) aid_size_cell_blid2_gps_ParamLimits

0x8b1d,	// (0x0005987f) aid_size_cell_blid2_gps

0x8b2d,	// (0x0005988f) blid2_gps_pane_g1_ParamLimits

0x8b2d,	// (0x0005988f) blid2_gps_pane_g1

0x8b39,	// (0x0005989b) grid_blid2_satellite_pane_ParamLimits

0x8b39,	// (0x0005989b) grid_blid2_satellite_pane

0x8b49,	// (0x000598ab) blid2_navig_pane_g1_ParamLimits

0x8b49,	// (0x000598ab) blid2_navig_pane_g1

0x8b55,	// (0x000598b7) blid2_navig_pane_t1_ParamLimits

0x8b55,	// (0x000598b7) blid2_navig_pane_t1

0x8b67,	// (0x000598c9) blid2_navig_pane_t2_ParamLimits

0x8b67,	// (0x000598c9) blid2_navig_pane_t2

0x0001,

0xf9f0,	// (0x00060752) blid2_navig_pane_t_ParamLimits

0xf9f0,	// (0x00060752) blid2_navig_pane_t

0x8b79,	// (0x000598db) blid2_navig_ring_pane_ParamLimits

0x8b79,	// (0x000598db) blid2_navig_ring_pane

0x8b89,	// (0x000598eb) blid2_speed_pane_ParamLimits

0x8b89,	// (0x000598eb) blid2_speed_pane

0x8b95,	// (0x000598f7) blid2_tripm_pane_g1_ParamLimits

0x8b95,	// (0x000598f7) blid2_tripm_pane_g1

0x8ba5,	// (0x00059907) blid2_tripm_pane_g2_ParamLimits

0x8ba5,	// (0x00059907) blid2_tripm_pane_g2

0x8bb1,	// (0x00059913) blid2_tripm_pane_g3_ParamLimits

0x8bb1,	// (0x00059913) blid2_tripm_pane_g3

0x8bbd,	// (0x0005991f) blid2_tripm_pane_g4_ParamLimits

0x8bbd,	// (0x0005991f) blid2_tripm_pane_g4

0x8bc9,	// (0x0005992b) blid2_tripm_pane_g5_ParamLimits

0x8bc9,	// (0x0005992b) blid2_tripm_pane_g5

0x0005,

0xf9f5,	// (0x00060757) blid2_tripm_pane_g_ParamLimits

0xf9f5,	// (0x00060757) blid2_tripm_pane_g

0x8be5,	// (0x00059947) blid2_tripm_pane_t1_ParamLimits

0x8be5,	// (0x00059947) blid2_tripm_pane_t1

0x8bf9,	// (0x0005995b) blid2_tripm_pane_t2_ParamLimits

0x8bf9,	// (0x0005995b) blid2_tripm_pane_t2

0x8c0b,	// (0x0005996d) blid2_tripm_pane_t3_ParamLimits

0x8c0b,	// (0x0005996d) blid2_tripm_pane_t3

0x0003,

0xfa02,	// (0x00060764) blid2_tripm_pane_t_ParamLimits

0xfa02,	// (0x00060764) blid2_tripm_pane_t

0x8c3d,	// (0x0005999f) cell_blid2_satellite_pane_ParamLimits

0x8c3d,	// (0x0005999f) cell_blid2_satellite_pane

0x8c57,	// (0x000599b9) cell_blid2_satellite_pane_g1

0x0f93,	// (0x00051cf5) cell_blid2_satellite_pane_t1

0xbf42,	// (0x0005cca4) blid2_speed_pane_g1

0x0fa1,	// (0x00051d03) blid2_speed_pane_t1

0x0faf,	// (0x00051d11) blid2_speed_pane_t2

0x0001,

0xfa0b,	// (0x0006076d) blid2_speed_pane_t

0xbf42,	// (0x0005cca4) blid2_navig_ring_pane_g1

0x8c60,	// (0x000599c2) blid2_navig_ring_pane_g2

0x8c68,	// (0x000599ca) blid2_navig_ring_pane_g3

0x8c70,	// (0x000599d2) blid2_navig_ring_pane_g4

0x8c78,	// (0x000599da) blid2_navig_ring_pane_g5

0x0004,

0xfa10,	// (0x00060772) blid2_navig_ring_pane_g

0xb803,	// (0x0005c565) bg_popup_window_pane_cp011

0x0fbd,	// (0x00051d1f) popup_blid2_search_window_g1

0x0fc5,	// (0x00051d27) popup_blid2_search_window_t1

0x0fd3,	// (0x00051d35) popup_blid2_search_window_t2

0x0001,

0xfa1b,	// (0x0006077d) popup_blid2_search_window_t

0xc841,	// (0x0005d5a3) main_browser_pane_g1

0xbfa0,	// (0x0005cd02) main_browser_pane_ParamLimits

0x5f03,	// (0x00056c65) bg_button_pane_cp011_ParamLimits

0x7cb7,	// (0x00058a19) cell_vitu2_function_pane_g1_ParamLimits

0xd26e,	// (0x0005dfd0) bg_popup_sub_pane_cp22_ParamLimits

0x85a7,	// (0x00059309) input_focus_pane_cp08_ParamLimits

0x85c2,	// (0x00059324) popup_vitu2_query_button_pane_ParamLimits

0x85c2,	// (0x00059324) popup_vitu2_query_button_pane

0x85d1,	// (0x00059333) popup_vitu2_query_input_button_pane

0x0bab,	// (0x0005190d) popup_vitu2_query_window_g1_ParamLimits

0x85db,	// (0x0005933d) popup_vitu2_query_window_g2_ParamLimits

0xf91c,	// (0x0006067e) popup_vitu2_query_window_g_ParamLimits

0xb803,	// (0x0005c565) bg_button_pane_cp026

0x8c80,	// (0x000599e2) popup_vitu2_query_input_button_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp025

0x0fe1,	// (0x00051d43) popup_vitu2_query_button_pane_t1

0x63ff,	// (0x00057161) main_mp3_pane_t6

0x640f,	// (0x00057171) popup_slider_window_cp01

0x7832,	// (0x00058594) cam4_battery_pane

0x790c,	// (0x0005866e) cam4_battery_pane_cp02

0x8a00,	// (0x00059762) cam4_battery_pane_cp01

0x8a00,	// (0x00059762) cam4_battery_pane_cp03

0x0fef,	// (0x00051d51) cam4_battery_pane_g1

0xbf42,	// (0x0005cca4) cam4_battery_pane_g2

0x0001,

0xfa20,	// (0x00060782) cam4_battery_pane_g

0xe764,	// (0x0005f4c6) popup_blid_sat_info2_window_t11

0xcf38,	// (0x0005dc9a) aid_size_touch_mv_arrow_left_ParamLimits

0xcf63,	// (0x0005dcc5) aid_size_touch_mv_arrow_right_ParamLimits

0xcfc1,	// (0x0005dd23) navi_pane_g1_ParamLimits

0xcfcd,	// (0x0005dd2f) navi_pane_g2_ParamLimits

0xcffb,	// (0x0005dd5d) navi_pane_g3_ParamLimits

0xf311,	// (0x00060073) navi_pane_g_ParamLimits

0x5480,	// (0x000561e2) navi_pane_mv_t1_ParamLimits

0x6e68,	// (0x00057bca) grid_imed_effect_pane_ParamLimits

0x3f1a,	// (0x00054c7c) aid_placing_vt_slider_lsc

0xc75e,	// (0x0005d4c0) aid_placing_vt_slider_prt

0xbe9d,	// (0x0005cbff) bg_tb_trans_pane_cp01_ParamLimits

0xea02,	// (0x0005f764) popup_image_details_window_g1_ParamLimits

0xea15,	// (0x0005f777) popup_image_details_window_g2_ParamLimits

0xea2a,	// (0x0005f78c) popup_image_details_window_g3_ParamLimits

0xea2a,	// (0x0005f78c) popup_image_details_window_g3

0xf62d,	// (0x0006038f) popup_image_details_window_g_ParamLimits

0xea3e,	// (0x0005f7a0) popup_image_details_window_t1_ParamLimits

0xea50,	// (0x0005f7b2) popup_image_details_window_t2_ParamLimits

0xea69,	// (0x0005f7cb) popup_image_details_window_t3_ParamLimits

0xea7d,	// (0x0005f7df) popup_image_details_window_t4_ParamLimits

0xea98,	// (0x0005f7fa) popup_image_details_window_t5_ParamLimits

0xf634,	// (0x00060396) popup_image_details_window_t_ParamLimits

0x8920,	// (0x00059682) cl_header_name_pane_ParamLimits

0x8920,	// (0x00059682) cl_header_name_pane

0x8c88,	// (0x000599ea) cl_header_name_pane_t1_ParamLimits

0x8c88,	// (0x000599ea) cl_header_name_pane_t1

0x8c9f,	// (0x00059a01) cl_header_name_pane_t2_ParamLimits

0x8c9f,	// (0x00059a01) cl_header_name_pane_t2

0x8cc9,	// (0x00059a2b) cl_header_name_pane_t3_ParamLimits

0x8cc9,	// (0x00059a2b) cl_header_name_pane_t3

0x0002,

0xfa25,	// (0x00060787) cl_header_name_pane_t_ParamLimits

0xfa25,	// (0x00060787) cl_header_name_pane_t

0xd08a,	// (0x0005ddec) navi_pane_mv_g2_ParamLimits

0x07d3,	// (0x00051535) field_vitu2_entry_pane_g1_ParamLimits

0x07df,	// (0x00051541) field_vitu2_entry_pane_g2_ParamLimits

0xd290,	// (0x0005dff2) field_vitu2_entry_pane_g3_ParamLimits

0xd290,	// (0x0005dff2) field_vitu2_entry_pane_g3

0xf825,	// (0x00060587) field_vitu2_entry_pane_g_ParamLimits

0x7b7d,	// (0x000588df) cell_vitu2_itu_pane_g1_ParamLimits

0x7b95,	// (0x000588f7) cell_vitu2_itu_pane_g2_ParamLimits

0x7b95,	// (0x000588f7) cell_vitu2_itu_pane_g2

0x0001,

0xf831,	// (0x00060593) cell_vitu2_itu_pane_g_ParamLimits

0xf831,	// (0x00060593) cell_vitu2_itu_pane_g

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp05_ParamLimits

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp05

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp03

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp04

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp10_ParamLimits

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp10

0x88c2,	// (0x00059624) bg_vkb2_func_pane_cp08

0x858f,	// (0x000592f1) bg_vkb2_func_pane_cp06

0x88a5,	// (0x00059607) bg_vkb2_func_pane_cp07

0x0ed1,	// (0x00051c33) bg_vkb2_func_pane_cp11_ParamLimits

0x0ed1,	// (0x00051c33) bg_vkb2_func_pane_cp11

0x0ee6,	// (0x00051c48) bg_vkb2_func_pane_cp12_ParamLimits

0x0ee6,	// (0x00051c48) bg_vkb2_func_pane_cp12

0xb803,	// (0x0005c565) bg_vkb2_func_pane_cp09

0x081a,	// (0x0005157c) bg_vkb2_func_pane_g1

0xc952,	// (0x0005d6b4) bg_vkb2_func_pane_g2

0x0822,	// (0x00051584) bg_vkb2_func_pane_g3

0x082a,	// (0x0005158c) bg_vkb2_func_pane_g4

0x0b78,	// (0x000518da) bg_vkb2_func_pane_g5

0x0842,	// (0x000515a4) bg_vkb2_func_pane_g6

0x084a,	// (0x000515ac) bg_vkb2_func_pane_g7

0x083a,	// (0x0005159c) bg_vkb2_func_pane_g8

0xc932,	// (0x0005d694) bg_vkb2_func_pane_g9

0x0008,

0xfa2c,	// (0x0006078e) bg_vkb2_func_pane_g

0x8bd7,	// (0x00059939) blid2_tripm_pane_g6_ParamLimits

0x8bd7,	// (0x00059939) blid2_tripm_pane_g6

0x0719,	// (0x0005147b) mp4_progress_pane_g1

0x8c31,	// (0x00059993) blid2_tripm_values_pane_ParamLimits

0x8c31,	// (0x00059993) blid2_tripm_values_pane

0x8cee,	// (0x00059a50) blid2_tripm_values_pane_t1

0x8cfc,	// (0x00059a5e) blid2_tripm_values_pane_t2

0x8d0a,	// (0x00059a6c) blid2_tripm_values_pane_t3

0x8d18,	// (0x00059a7a) blid2_tripm_values_pane_t4

0x8d26,	// (0x00059a88) blid2_tripm_values_pane_t5

0x8d34,	// (0x00059a96) blid2_tripm_values_pane_t6

0x8d42,	// (0x00059aa4) blid2_tripm_values_pane_t7

0x8d50,	// (0x00059ab2) blid2_tripm_values_pane_t8

0x8d5e,	// (0x00059ac0) blid2_tripm_values_pane_t9

0x0008,

0xfa3f,	// (0x000607a1) blid2_tripm_values_pane_t

0x3f5a,	// (0x00054cbc) call_video_pane_t1_ParamLimits

0x3f7b,	// (0x00054cdd) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0005ff1c) call_video_pane_t_ParamLimits

0x5796,	// (0x000564f8) msg_header_pane_g1_ParamLimits

0xd29e,	// (0x0005e000) msg_header_pane_g2_ParamLimits

0xd29e,	// (0x0005e000) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00060111) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00060111) msg_header_pane_g

0xbfa0,	// (0x0005cd02) main_clock2_pane_ParamLimits

0x6be2,	// (0x00057944) grid_clock2_toolbar_pane_ParamLimits

0x6be2,	// (0x00057944) grid_clock2_toolbar_pane

0x6be2,	// (0x00057944) listscroll_clock2_pane_ParamLimits

0x6be2,	// (0x00057944) listscroll_clock2_pane

0x6c92,	// (0x000579f4) main_clock2_pane_t3_ParamLimits

0x6c92,	// (0x000579f4) main_clock2_pane_t3

0x6ca4,	// (0x00057a06) main_clock2_pane_t4_ParamLimits

0x6ca4,	// (0x00057a06) main_clock2_pane_t4

0x0ff9,	// (0x00051d5b) cell_clock2_toolbar_pane

0x1001,	// (0x00051d63) cell_clock2_toolbar_pane_cp01

0x1001,	// (0x00051d63) cell_clock2_toolbar_pane_cp02

0x1009,	// (0x00051d6b) cell_clock2_toolbar_pane_cp03

0x1011,	// (0x00051d73) list_clock2_pane

0xcebd,	// (0x0005dc1f) scroll_pane_cp10

0x1019,	// (0x00051d7b) list_single_clock2_pane_ParamLimits

0x1019,	// (0x00051d7b) list_single_clock2_pane

0xc707,	// (0x0005d469) list_highlight_pane_cp08

0x1026,	// (0x00051d88) list_single_clock2_pane_t1

0x1034,	// (0x00051d96) list_single_clock2_pane_t2

0x0001,

0xfa52,	// (0x000607b4) list_single_clock2_pane_t

0xb803,	// (0x0005c565) bg_button_pane_cp10

0x1042,	// (0x00051da4) cell_clock2_toolbar_pane_g1

0x57ba,	// (0x0005651c) aid_main_viewer_pane_g1_ParamLimits

0x57ba,	// (0x0005651c) aid_main_viewer_pane_g1

0x57c6,	// (0x00056528) aid_main_viewer_pane_g2_ParamLimits

0x57c6,	// (0x00056528) aid_main_viewer_pane_g2

0x57d2,	// (0x00056534) aid_main_viewer_pane_g3_ParamLimits

0x57d2,	// (0x00056534) aid_main_viewer_pane_g3

0x57e3,	// (0x00056545) aid_main_viewer_pane_g4_ParamLimits

0x57e3,	// (0x00056545) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00060122) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00060122) aid_main_viewer_pane_g

0x5ef6,	// (0x00056c58) main_calc_pane_ParamLimits

0x5f11,	// (0x00056c73) main_dialer2_pane_ParamLimits

0x34cf,	// (0x00054231) main_cam6_pane

0x34cf,	// (0x00054231) main_vid6_pane

0x6bee,	// (0x00057950) listscroll_gen_pane_cp06_ParamLimits

0x6bee,	// (0x00057950) listscroll_gen_pane_cp06

0x6cb6,	// (0x00057a18) main_clock2_pane_t5_ParamLimits

0x6cb6,	// (0x00057a18) main_clock2_pane_t5

0x6d03,	// (0x00057a65) aid_call2_pane_cp10_ParamLimits

0x6d15,	// (0x00057a77) aid_call_pane_cp10_ParamLimits

0xcf2c,	// (0x0005dc8e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf2c,	// (0x0005dc8e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6d27,	// (0x00057a89) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6d27,	// (0x00057a89) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf2c,	// (0x0005dc8e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6e9,	// (0x0006044b) popup_clock_analogue_window_cp10_g_ParamLimits

0x6d3d,	// (0x00057a9f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0784,	// (0x000514e6) cell_dialer2_keypad_pane_g2_ParamLimits

0x0784,	// (0x000514e6) cell_dialer2_keypad_pane_g2

0x0001,

0xf7c4,	// (0x00060526) cell_dialer2_keypad_pane_g_ParamLimits

0xf7c4,	// (0x00060526) cell_dialer2_keypad_pane_g

0xbf4c,	// (0x0005ccae) cell_dialer2_keypad_pane_t1

0x7f81,	// (0x00058ce3) main_cset_text2_pane_ParamLimits

0x7f81,	// (0x00058ce3) main_cset_text2_pane

0x0d8b,	// (0x00051aed) area_vitu2_query_pane_g1_ParamLimits

0x8844,	// (0x000595a6) area_vitu2_query_pane_g2_ParamLimits

0xf96f,	// (0x000606d1) area_vitu2_query_pane_g_ParamLimits

0x0e18,	// (0x00051b7a) area_vitu2_query_pane_t7_ParamLimits

0x0e18,	// (0x00051b7a) area_vitu2_query_pane_t7

0x858f,	// (0x000592f1) bg_button_pane_cp018_ParamLimits

0x88a5,	// (0x00059607) bg_button_pane_cp021_ParamLimits

0x88b1,	// (0x00059613) bg_button_pane_cp022_ParamLimits

0x88c2,	// (0x00059624) bg_vkb2_func_pane_cp08_ParamLimits

0x858f,	// (0x000592f1) bg_vkb2_func_pane_cp06_ParamLimits

0x88a5,	// (0x00059607) bg_vkb2_func_pane_cp07_ParamLimits

0x88d4,	// (0x00059636) input_focus_pane_cp09_ParamLimits

0x8d6c,	// (0x00059ace) cam6_autofocus_pane_ParamLimits

0x8d6c,	// (0x00059ace) cam6_autofocus_pane

0x8d88,	// (0x00059aea) cam6_image_uncrop_pane_ParamLimits

0x8d88,	// (0x00059aea) cam6_image_uncrop_pane

0x8dc1,	// (0x00059b23) cam6_indi_pane_ParamLimits

0x8dc1,	// (0x00059b23) cam6_indi_pane

0x8ddb,	// (0x00059b3d) cam6_mode_pane_ParamLimits

0x8ddb,	// (0x00059b3d) cam6_mode_pane

0x8def,	// (0x00059b51) cam6_timer_pane_ParamLimits

0x8def,	// (0x00059b51) cam6_timer_pane

0x8e03,	// (0x00059b65) cam6_zoom_pane_ParamLimits

0x8e03,	// (0x00059b65) cam6_zoom_pane

0x8e1e,	// (0x00059b80) cam6_mode_pane_g1_ParamLimits

0x8e1e,	// (0x00059b80) cam6_mode_pane_g1

0x8e2a,	// (0x00059b8c) cam6_mode_pane_g2_ParamLimits

0x8e2a,	// (0x00059b8c) cam6_mode_pane_g2

0x8e36,	// (0x00059b98) cam6_mode_pane_g3_ParamLimits

0x8e36,	// (0x00059b98) cam6_mode_pane_g3

0x8e42,	// (0x00059ba4) cam6_mode_pane_g4_ParamLimits

0x8e42,	// (0x00059ba4) cam6_mode_pane_g4

0x0003,

0xfa57,	// (0x000607b9) cam6_mode_pane_g_ParamLimits

0xfa57,	// (0x000607b9) cam6_mode_pane_g

0xe565,	// (0x0005f2c7) bg_tb_trans_pane_cp08_ParamLimits

0xe565,	// (0x0005f2c7) bg_tb_trans_pane_cp08

0x104a,	// (0x00051dac) cam6_battery_pane_ParamLimits

0x104a,	// (0x00051dac) cam6_battery_pane

0x1060,	// (0x00051dc2) cam6_indi_pane_g1_ParamLimits

0x1060,	// (0x00051dc2) cam6_indi_pane_g1

0x1072,	// (0x00051dd4) cam6_indi_pane_g2_ParamLimits

0x1072,	// (0x00051dd4) cam6_indi_pane_g2

0x1084,	// (0x00051de6) cam6_indi_pane_g3_ParamLimits

0x1084,	// (0x00051de6) cam6_indi_pane_g3

0x0002,

0xfa60,	// (0x000607c2) cam6_indi_pane_g_ParamLimits

0xfa60,	// (0x000607c2) cam6_indi_pane_g

0x1096,	// (0x00051df8) cam6_indi_pane_t1_ParamLimits

0x1096,	// (0x00051df8) cam6_indi_pane_t1

0x7988,	// (0x000586ea) cam6_autofocus_pane_g1

0x7980,	// (0x000586e2) cam6_autofocus_pane_g2

0x7998,	// (0x000586fa) cam6_autofocus_pane_g3

0x7990,	// (0x000586f2) cam6_autofocus_pane_g4

0x0003,

0xfa67,	// (0x000607c9) cam6_autofocus_pane_g

0x10bc,	// (0x00051e1e) cam6_timer_pane_g1

0x10c4,	// (0x00051e26) cam6_timer_pane_t1

0x10d2,	// (0x00051e34) cam6_zoom_cont_pane

0x10da,	// (0x00051e3c) cam6_zoom_pane_g1

0x10e3,	// (0x00051e45) cam6_zoom_pane_g2

0x8e4e,	// (0x00059bb0) cam6_zoom_pane_g3

0x0002,

0xfa70,	// (0x000607d2) cam6_zoom_pane_g

0xbf42,	// (0x0005cca4) cam6_battery_pane_g1

0xbf42,	// (0x0005cca4) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) cam6_battery_pane_g

0x10da,	// (0x00051e3c) cam6_zoom_cont_pane_g1

0x10e3,	// (0x00051e45) cam6_zoom_cont_pane_g2

0x10ec,	// (0x00051e4e) cam6_zoom_cont_pane_g3

0x0002,

0xfa77,	// (0x000607d9) cam6_zoom_cont_pane_g

0x8e6c,	// (0x00059bce) cam6_mode_pane_cp_ParamLimits

0x8e6c,	// (0x00059bce) cam6_mode_pane_cp

0x8e80,	// (0x00059be2) cam6_zoom_pane_cp_ParamLimits

0x8e80,	// (0x00059be2) cam6_zoom_pane_cp

0x8e98,	// (0x00059bfa) vid6_image_uncrop_cif_pane_ParamLimits

0x8e98,	// (0x00059bfa) vid6_image_uncrop_cif_pane

0x8ec4,	// (0x00059c26) vid6_image_uncrop_nhd_pane_ParamLimits

0x8ec4,	// (0x00059c26) vid6_image_uncrop_nhd_pane

0x8ee1,	// (0x00059c43) vid6_image_uncrop_vga_pane_ParamLimits

0x8ee1,	// (0x00059c43) vid6_image_uncrop_vga_pane

0x8f00,	// (0x00059c62) vid6_image_uncrop_wvga_pane_ParamLimits

0x8f00,	// (0x00059c62) vid6_image_uncrop_wvga_pane

0x8f1d,	// (0x00059c7f) vid6_indi_pane_ParamLimits

0x8f1d,	// (0x00059c7f) vid6_indi_pane

0xe565,	// (0x0005f2c7) bg_tb_trans_pane_cp09_ParamLimits

0xe565,	// (0x0005f2c7) bg_tb_trans_pane_cp09

0x1104,	// (0x00051e66) cam6_battery_pane_cp_ParamLimits

0x1104,	// (0x00051e66) cam6_battery_pane_cp

0x1134,	// (0x00051e96) vid6_indi_pane_g1_ParamLimits

0x1134,	// (0x00051e96) vid6_indi_pane_g1

0x1146,	// (0x00051ea8) vid6_indi_pane_g2_ParamLimits

0x1146,	// (0x00051ea8) vid6_indi_pane_g2

0x1158,	// (0x00051eba) vid6_indi_pane_g3_ParamLimits

0x1158,	// (0x00051eba) vid6_indi_pane_g3

0x116d,	// (0x00051ecf) vid6_indi_pane_g4_ParamLimits

0x116d,	// (0x00051ecf) vid6_indi_pane_g4

0x1182,	// (0x00051ee4) vid6_indi_pane_g5_ParamLimits

0x1182,	// (0x00051ee4) vid6_indi_pane_g5

0x0004,

0xfa7e,	// (0x000607e0) vid6_indi_pane_g_ParamLimits

0xfa7e,	// (0x000607e0) vid6_indi_pane_g

0x119c,	// (0x00051efe) vid6_indi_pane_t1_ParamLimits

0x119c,	// (0x00051efe) vid6_indi_pane_t1

0x11b2,	// (0x00051f14) vid6_indi_pane_t2_ParamLimits

0x11b2,	// (0x00051f14) vid6_indi_pane_t2

0x11da,	// (0x00051f3c) vid6_indi_pane_t3_ParamLimits

0x11da,	// (0x00051f3c) vid6_indi_pane_t3

0x1202,	// (0x00051f64) vid6_indi_pane_t4_ParamLimits

0x1202,	// (0x00051f64) vid6_indi_pane_t4

0x0003,

0xfa89,	// (0x000607eb) vid6_indi_pane_t_ParamLimits

0xfa89,	// (0x000607eb) vid6_indi_pane_t

0x1226,	// (0x00051f88) wait_bar_pane_cp08

0x8f40,	// (0x00059ca2) main_cset_text2_pane_t1_ParamLimits

0x8f40,	// (0x00059ca2) main_cset_text2_pane_t1

0x8e57,	// (0x00059bb9) listscroll_gen_pane_cp06_t1_ParamLimits

0x8e57,	// (0x00059bb9) listscroll_gen_pane_cp06_t1

0x34cf,	// (0x00054231) main_cam6_set_pane

0x1a78,	// (0x000527da) bg_tb_trans_pane_cp06_ParamLimits

0x783a,	// (0x0005859c) cam4_indicators_pane_g1_ParamLimits

0x784b,	// (0x000585ad) cam4_indicators_pane_g2_ParamLimits

0xf801,	// (0x00060563) cam4_indicators_pane_g_ParamLimits

0x7863,	// (0x000585c5) cam4_indicators_pane_t1_ParamLimits

0x5f03,	// (0x00056c65) bg_tb_trans_pane_cp07_ParamLimits

0x7914,	// (0x00058676) vid4_indicators_pane_g1_ParamLimits

0x7928,	// (0x0005868a) vid4_indicators_pane_g2_ParamLimits

0x793c,	// (0x0005869e) vid4_indicators_pane_g3_ParamLimits

0x794d,	// (0x000586af) vid4_indicators_pane_g4_ParamLimits

0xf813,	// (0x00060575) vid4_indicators_pane_g_ParamLimits

0x7969,	// (0x000586cb) vid4_indicators_pane_t1_ParamLimits

0x8a08,	// (0x0005976a) vid4_progress_pane_g1_ParamLimits

0x8a18,	// (0x0005977a) vid4_progress_pane_g2_ParamLimits

0x8a28,	// (0x0005978a) vid4_progress_pane_g3_ParamLimits

0x8a3a,	// (0x0005979c) vid4_progress_pane_g4_ParamLimits

0xf9ba,	// (0x0006071c) vid4_progress_pane_g_ParamLimits

0x8a52,	// (0x000597b4) vid4_progress_pane_t1_ParamLimits

0x8a68,	// (0x000597ca) vid4_progress_pane_t2_ParamLimits

0x8a7d,	// (0x000597df) vid4_progress_pane_t3_ParamLimits

0xf9c5,	// (0x00060727) vid4_progress_pane_t_ParamLimits

0x8a93,	// (0x000597f5) wait_bar_pane_cp07_ParamLimits

0x8f77,	// (0x00059cd9) main_cam6_set_pane_g2_ParamLimits

0x8f77,	// (0x00059cd9) main_cam6_set_pane_g2

0x8f83,	// (0x00059ce5) main_cset6_listscroll_pane_ParamLimits

0x8f83,	// (0x00059ce5) main_cset6_listscroll_pane

0x8fae,	// (0x00059d10) main_cset6_slider_pane_ParamLimits

0x8fae,	// (0x00059d10) main_cset6_slider_pane

0x8fba,	// (0x00059d1c) main_cset6_text2_pane_ParamLimits

0x8fba,	// (0x00059d1c) main_cset6_text2_pane

0x1235,	// (0x00051f97) main_cset6_text_pane

0x123d,	// (0x00051f9f) main_cset_list_pane_copy1_ParamLimits

0x123d,	// (0x00051f9f) main_cset_list_pane_copy1

0x124d,	// (0x00051faf) scroll_pane_cp028_copy1

0x8fcd,	// (0x00059d2f) cset_list_set_pane_copy1

0x8fe3,	// (0x00059d45) aid_position_infowindow_above_copy1

0x8feb,	// (0x00059d4d) aid_position_infowindow_below_copy1

0x8ff3,	// (0x00059d55) cset_list_set_pane_g1_copy1

0x8268,	// (0x00058fca) cset_list_set_pane_g3_copy1_ParamLimits

0x8268,	// (0x00058fca) cset_list_set_pane_g3_copy1

0x8277,	// (0x00058fd9) cset_list_set_pane_t1_copy1_ParamLimits

0x8277,	// (0x00058fd9) cset_list_set_pane_t1_copy1

0xbe9d,	// (0x0005cbff) list_highlight_pane_cp021_copy1_ParamLimits

0xbe9d,	// (0x0005cbff) list_highlight_pane_cp021_copy1

0x1256,	// (0x00051fb8) cset6_slider_pane_ParamLimits

0x1256,	// (0x00051fb8) cset6_slider_pane

0x1282,	// (0x00051fe4) main_cset6_slider_pane_g1_ParamLimits

0x1282,	// (0x00051fe4) main_cset6_slider_pane_g1

0x8ffb,	// (0x00059d5d) main_cset6_slider_pane_g2_ParamLimits

0x8ffb,	// (0x00059d5d) main_cset6_slider_pane_g2

0x12aa,	// (0x0005200c) main_cset6_slider_pane_g3_ParamLimits

0x12aa,	// (0x0005200c) main_cset6_slider_pane_g3

0x9023,	// (0x00059d85) main_cset6_slider_pane_g4_ParamLimits

0x9023,	// (0x00059d85) main_cset6_slider_pane_g4

0x902f,	// (0x00059d91) main_cset6_slider_pane_g5_ParamLimits

0x902f,	// (0x00059d91) main_cset6_slider_pane_g5

0x0a5e,	// (0x000517c0) main_cset6_slider_pane_g7_ParamLimits

0x0a5e,	// (0x000517c0) main_cset6_slider_pane_g7

0x0a6a,	// (0x000517cc) main_cset6_slider_pane_g8_ParamLimits

0x0a6a,	// (0x000517cc) main_cset6_slider_pane_g8

0x903d,	// (0x00059d9f) main_cset6_slider_pane_g9_ParamLimits

0x903d,	// (0x00059d9f) main_cset6_slider_pane_g9

0x9049,	// (0x00059dab) main_cset6_slider_pane_g10_ParamLimits

0x9049,	// (0x00059dab) main_cset6_slider_pane_g10

0x9055,	// (0x00059db7) main_cset6_slider_pane_g11_ParamLimits

0x9055,	// (0x00059db7) main_cset6_slider_pane_g11

0x9061,	// (0x00059dc3) main_cset6_slider_pane_g12_ParamLimits

0x9061,	// (0x00059dc3) main_cset6_slider_pane_g12

0x1110,	// (0x00051e72) main_cset6_slider_pane_g13_ParamLimits

0x1110,	// (0x00051e72) main_cset6_slider_pane_g13

0x111c,	// (0x00051e7e) main_cset6_slider_pane_g14_ParamLimits

0x111c,	// (0x00051e7e) main_cset6_slider_pane_g14

0x906d,	// (0x00059dcf) main_cset6_slider_pane_g15_ParamLimits

0x906d,	// (0x00059dcf) main_cset6_slider_pane_g15

0x9085,	// (0x00059de7) main_cset6_slider_pane_g16_ParamLimits

0x9085,	// (0x00059de7) main_cset6_slider_pane_g16

0x9093,	// (0x00059df5) main_cset6_slider_pane_g17_ParamLimits

0x9093,	// (0x00059df5) main_cset6_slider_pane_g17

0x0011,

0xfa92,	// (0x000607f4) main_cset6_slider_pane_g_ParamLimits

0xfa92,	// (0x000607f4) main_cset6_slider_pane_g

0x12c2,	// (0x00052024) main_cset6_slider_pane_t1_ParamLimits

0x12c2,	// (0x00052024) main_cset6_slider_pane_t1

0x90ad,	// (0x00059e0f) main_cset6_slider_pane_t2_ParamLimits

0x90ad,	// (0x00059e0f) main_cset6_slider_pane_t2

0x90d8,	// (0x00059e3a) main_cset6_slider_pane_t3_ParamLimits

0x90d8,	// (0x00059e3a) main_cset6_slider_pane_t3

0x9103,	// (0x00059e65) main_cset6_slider_pane_t4_ParamLimits

0x9103,	// (0x00059e65) main_cset6_slider_pane_t4

0x912e,	// (0x00059e90) main_cset6_slider_pane_t5_ParamLimits

0x912e,	// (0x00059e90) main_cset6_slider_pane_t5

0x1303,	// (0x00052065) main_cset6_slider_pane_t7_ParamLimits

0x1303,	// (0x00052065) main_cset6_slider_pane_t7

0x915b,	// (0x00059ebd) main_cset6_slider_pane_t8_ParamLimits

0x915b,	// (0x00059ebd) main_cset6_slider_pane_t8

0x917f,	// (0x00059ee1) main_cset6_slider_pane_t9_ParamLimits

0x917f,	// (0x00059ee1) main_cset6_slider_pane_t9

0x91a3,	// (0x00059f05) main_cset6_slider_pane_t10_ParamLimits

0x91a3,	// (0x00059f05) main_cset6_slider_pane_t10

0x91c7,	// (0x00059f29) main_cset6_slider_pane_t11_ParamLimits

0x91c7,	// (0x00059f29) main_cset6_slider_pane_t11

0x1339,	// (0x0005209b) main_cset6_slider_pane_t14_ParamLimits

0x1339,	// (0x0005209b) main_cset6_slider_pane_t14

0x1372,	// (0x000520d4) main_cset6_slider_pane_t15_ParamLimits

0x1372,	// (0x000520d4) main_cset6_slider_pane_t15

0x000b,

0xfab7,	// (0x00060819) main_cset6_slider_pane_t_ParamLimits

0xfab7,	// (0x00060819) main_cset6_slider_pane_t

0x0b2c,	// (0x0005188e) cset_slider_pane_g1_copy1

0x0b35,	// (0x00051897) cset_slider_pane_g2_copy1

0x0b3e,	// (0x000518a0) cset_slider_pane_g3_copy1

0xb803,	// (0x0005c565) bg_popup_sub_pane_cp011_copy1

0x13b4,	// (0x00052116) main_cset_text_pane_g1_copy1

0x0bbf,	// (0x00051921) main_cset_text_pane_t1_copy1

0x0bcd,	// (0x0005192f) main_cset_text_pane_t2_copy1

0x0bdb,	// (0x0005193d) main_cset_text_pane_t3_copy1

0x0be9,	// (0x0005194b) main_cset_text_pane_t4_copy1

0x0bf7,	// (0x00051959) main_cset_text_pane_t5_copy1

0x13bc,	// (0x0005211e) main_cset_text_pane_t6_copy1

0x13ca,	// (0x0005212c) main_cset_text_pane_t7_copy1

0x920a,	// (0x00059f6c) main_cset_text2_pane_t1_copy1

0x5f03,	// (0x00056c65) main_ncimui_pane

0x5f62,	// (0x00056cc4) popup_query_ncimui_window_ParamLimits

0x5f62,	// (0x00056cc4) popup_query_ncimui_window

0xeb75,	// (0x0005f8d7) field_cale_ev2_pane_g4_ParamLimits

0xeb75,	// (0x0005f8d7) field_cale_ev2_pane_g4

0x70f2,	// (0x00057e54) cell_video_dialer_keypad_pane_g2_ParamLimits

0x70f2,	// (0x00057e54) cell_video_dialer_keypad_pane_g2

0x0001,

0xf79b,	// (0x000604fd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf79b,	// (0x000604fd) cell_video_dialer_keypad_pane_g

0x710a,	// (0x00057e6c) cell_video_dialer_keypad_pane_t1

0xb803,	// (0x0005c565) bg_popup_window_pane_cp012

0xcdb5,	// (0x0005db17) heading_pane_cp06

0x13f6,	// (0x00052158) ncim_query_content_pane

0xb803,	// (0x0005c565) bg_popup_heading_pane_cp01

0x13fe,	// (0x00052160) ncim_heading_pane_t1

0x140c,	// (0x0005216e) ncim_indicator_popup_pane

0x141e,	// (0x00052180) ncim_query_button_pane

0x1432,	// (0x00052194) ncim_query_content_pane_t1

0x1444,	// (0x000521a6) ncim_query_content_pane_t2

0x0005,

0xfafb,	// (0x0006085d) ncim_query_content_pane_t

0x147e,	// (0x000521e0) ncim_query_list_pane

0x1490,	// (0x000521f2) ncim_query_popup_pane

0x140c,	// (0x0005216e) ncim_indicator_popup_pane_ParamLimits

0x935e,	// (0x0005a0c0) ncim_query_content_pane_g1_ParamLimits

0x935e,	// (0x0005a0c0) ncim_query_content_pane_g1

0x1432,	// (0x00052194) ncim_query_content_pane_t1_ParamLimits

0x1444,	// (0x000521a6) ncim_query_content_pane_t2_ParamLimits

0x936a,	// (0x0005a0cc) ncim_query_content_pane_t3_ParamLimits

0x936a,	// (0x0005a0cc) ncim_query_content_pane_t3

0x9387,	// (0x0005a0e9) ncim_query_content_pane_t4_ParamLimits

0x9387,	// (0x0005a0e9) ncim_query_content_pane_t4

0x93a4,	// (0x0005a106) ncim_query_content_pane_t5_ParamLimits

0x93a4,	// (0x0005a106) ncim_query_content_pane_t5

0x1456,	// (0x000521b8) ncim_query_content_pane_t6_ParamLimits

0x1456,	// (0x000521b8) ncim_query_content_pane_t6

0xfafb,	// (0x0006085d) ncim_query_content_pane_t_ParamLimits

0x147e,	// (0x000521e0) ncim_query_list_pane_ParamLimits

0x1490,	// (0x000521f2) ncim_query_popup_pane_ParamLimits

0x14a4,	// (0x00052206) wait_bar_pane_cp04

0xb803,	// (0x0005c565) input_focus_pane_cp011

0x14ac,	// (0x0005220e) ncim_query_popup_pane_t1

0x14ba,	// (0x0005221c) ncim_list_query_list_pane_ParamLimits

0x14ba,	// (0x0005221c) ncim_list_query_list_pane

0xb803,	// (0x0005c565) bg_button_pane_cp027

0x14c7,	// (0x00052229) ncim_query_button_pane_g1

0xb803,	// (0x0005c565) list_highlight_pane_cp012

0x14d1,	// (0x00052233) ncim_list_query_list_pane_g1

0x14d9,	// (0x0005223b) ncim_list_query_list_pane_t1

0x7857,	// (0x000585b9) cam4_indicators_pane_g3_ParamLimits

0x7857,	// (0x000585b9) cam4_indicators_pane_g3

0x7959,	// (0x000586bb) vid4_indicators_pane_g5_ParamLimits

0x7959,	// (0x000586bb) vid4_indicators_pane_g5

0x8a46,	// (0x000597a8) vid4_progress_pane_g5_ParamLimits

0x8a46,	// (0x000597a8) vid4_progress_pane_g5

0x924a,	// (0x00059fac) main_ncimui_pane_g1

0x92b2,	// (0x0005a014) ncimui_group_query_pane_ParamLimits

0x92b2,	// (0x0005a014) ncimui_group_query_pane

0x92fa,	// (0x0005a05c) ncimui_list_pane_ParamLimits

0x92fa,	// (0x0005a05c) ncimui_list_pane

0x9321,	// (0x0005a083) ncimui_text_pane_ParamLimits

0x9321,	// (0x0005a083) ncimui_text_pane

0x93c1,	// (0x0005a123) ncimui_text_pane_t1_ParamLimits

0x93c1,	// (0x0005a123) ncimui_text_pane_t1

0x14e7,	// (0x00052249) ncimui_list_single_graphic_pane_ParamLimits

0x14e7,	// (0x00052249) ncimui_list_single_graphic_pane

0x93e0,	// (0x0005a142) ncimui_query_pane_ParamLimits

0x93e0,	// (0x0005a142) ncimui_query_pane

0xb803,	// (0x0005c565) list_highlight_pane_cp013

0x14f7,	// (0x00052259) ncim_list_query_list_pane_t1_copy1

0x1505,	// (0x00052267) ncim_list_single_graphic_pane_g1

0x93f3,	// (0x0005a155) ncim_query_button_pane_cp01

0x93ff,	// (0x0005a161) ncim_query_entry_pane_ParamLimits

0x93ff,	// (0x0005a161) ncim_query_entry_pane

0x9412,	// (0x0005a174) ncimui_query_pane_g1

0x941e,	// (0x0005a180) ncimui_query_pane_t1_ParamLimits

0x941e,	// (0x0005a180) ncimui_query_pane_t1

0xbe9d,	// (0x0005cbff) input_focus_pane_cp012

0x150d,	// (0x0005226f) ncim_query_entry_pane_t1

0xbfa0,	// (0x0005cd02) main_im_pane_ParamLimits

0x5f03,	// (0x00056c65) main_mobtv_pane_ParamLimits

0x5f03,	// (0x00056c65) main_mobtv_pane

0x90a1,	// (0x00059e03) main_cset6_slider_pane_g18_ParamLimits

0x90a1,	// (0x00059e03) main_cset6_slider_pane_g18

0x12b6,	// (0x00052018) main_cset6_slider_pane_g19_ParamLimits

0x12b6,	// (0x00052018) main_cset6_slider_pane_g19

0xd290,	// (0x0005dff2) bg_main_mobtv_pane_ParamLimits

0xd290,	// (0x0005dff2) bg_main_mobtv_pane

0x9437,	// (0x0005a199) main_mobtv_info_pane

0x9442,	// (0x0005a1a4) main_mobtv_loading_pane_ParamLimits

0x9442,	// (0x0005a1a4) main_mobtv_loading_pane

0x151f,	// (0x00052281) main_mobtv_pg_channel_list_pane

0x1529,	// (0x0005228b) main_mobtv_pg_hdr_pane

0x944f,	// (0x0005a1b1) main_mobtv_programe_curr_pane_ParamLimits

0x944f,	// (0x0005a1b1) main_mobtv_programe_curr_pane

0x945c,	// (0x0005a1be) main_mobtv_programe_next_pane_ParamLimits

0x945c,	// (0x0005a1be) main_mobtv_programe_next_pane

0x1532,	// (0x00052294) popup_mobtv_noti_window

0xbf42,	// (0x0005cca4) main_tv_pg_hdr_pane_g1

0x153a,	// (0x0005229c) main_tv_pg_hdr_pane_g2

0x1542,	// (0x000522a4) main_tv_pg_hdr_pane_g3

0x154a,	// (0x000522ac) main_tv_pg_hdr_pane_g4

0x1552,	// (0x000522b4) main_tv_pg_hdr_pane_g5

0x155c,	// (0x000522be) main_tv_pg_hdr_pane_g6

0x1566,	// (0x000522c8) main_tv_pg_hdr_pane_g7

0x1570,	// (0x000522d2) main_tv_pg_hdr_pane_g8

0x157a,	// (0x000522dc) main_tv_pg_hdr_pane_g9

0x1584,	// (0x000522e6) main_tv_pg_hdr_pane_g10

0x158e,	// (0x000522f0) main_tv_pg_hdr_pane_g11

0x000a,

0xfb08,	// (0x0006086a) main_tv_pg_hdr_pane_g

0x1598,	// (0x000522fa) main_tv_pg_hdr_pane_t1

0x15a6,	// (0x00052308) main_tv_pg_hdr_pane_t2

0x15b4,	// (0x00052316) main_tv_pg_hdr_pane_t3

0x15c4,	// (0x00052326) main_tv_pg_hdr_pane_t4

0x15d4,	// (0x00052336) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1f,	// (0x00060881) main_tv_pg_hdr_pane_t

0x15e4,	// (0x00052346) single_mobtv_pg_channel_pane_ParamLimits

0x15e4,	// (0x00052346) single_mobtv_pg_channel_pane

0x15f6,	// (0x00052358) single_mobtv_pg_channel_table_pane

0xca55,	// (0x0005d7b7) single_mobtv_pg_channel_thumb_pane

0x15ff,	// (0x00052361) single_tv_pg_channel_pane_g1

0x1608,	// (0x0005236a) single_tv_pg_channel_pane_g2

0x0001,

0xfb2a,	// (0x0006088c) single_tv_pg_channel_pane_g

0xbf04,	// (0x0005cc66) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbf04,	// (0x0005cc66) bg_single_mobtv_pg_channel_thumb_pane

0x1611,	// (0x00052373) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1611,	// (0x00052373) single_mobtv_pg_channel_thumb_pane_g1

0x161f,	// (0x00052381) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x161f,	// (0x00052381) single_mobtv_pg_channel_thumb_pane_g2

0x162b,	// (0x0005238d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x162b,	// (0x0005238d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2f,	// (0x00060891) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2f,	// (0x00060891) single_mobtv_pg_channel_thumb_pane_g

0x1637,	// (0x00052399) single_mobtv_pg_channel_thumb_pane_t1

0x1645,	// (0x000523a7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb36,	// (0x00060898) single_mobtv_pg_channel_thumb_pane_t

0xbf42,	// (0x0005cca4) bg_single_mobtv_pg_channel_table_pane_g1

0xbf42,	// (0x0005cca4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0005fdee) bg_single_mobtv_pg_channel_table_pane_g

0x1653,	// (0x000523b5) single_mobtv_pg_channel_table_pane_t1

0x1661,	// (0x000523c3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb3b,	// (0x0006089d) single_mobtv_pg_channel_table_pane_t

0x9471,	// (0x0005a1d3) main_mobtv_info_pane_g1_ParamLimits

0x9471,	// (0x0005a1d3) main_mobtv_info_pane_g1

0x948d,	// (0x0005a1ef) main_mobtv_info_pane_t1_ParamLimits

0x948d,	// (0x0005a1ef) main_mobtv_info_pane_t1

0x9505,	// (0x0005a267) main_mobtv_info_pane_t2_ParamLimits

0x9505,	// (0x0005a267) main_mobtv_info_pane_t2

0x0002,

0xfb45,	// (0x000608a7) main_mobtv_info_pane_t_ParamLimits

0xfb45,	// (0x000608a7) main_mobtv_info_pane_t

0x9594,	// (0x0005a2f6) wait_bar_pane_cp05

0x95a6,	// (0x0005a308) main_mobtv_loading_pane_g1_ParamLimits

0x95a6,	// (0x0005a308) main_mobtv_loading_pane_g1

0x95b4,	// (0x0005a316) main_mobtv_loading_pane_g2_ParamLimits

0x95b4,	// (0x0005a316) main_mobtv_loading_pane_g2

0x95c0,	// (0x0005a322) main_mobtv_loading_pane_g3_ParamLimits

0x95c0,	// (0x0005a322) main_mobtv_loading_pane_g3

0x0002,

0xfb4c,	// (0x000608ae) main_mobtv_loading_pane_g_ParamLimits

0xfb4c,	// (0x000608ae) main_mobtv_loading_pane_g

0x166f,	// (0x000523d1) main_mobtv_loading_pane_t1_ParamLimits

0x166f,	// (0x000523d1) main_mobtv_loading_pane_t1

0x1687,	// (0x000523e9) main_mobtv_loading_pane_t2_ParamLimits

0x1687,	// (0x000523e9) main_mobtv_loading_pane_t2

0x0001,

0xfb53,	// (0x000608b5) main_mobtv_loading_pane_t_ParamLimits

0xfb53,	// (0x000608b5) main_mobtv_loading_pane_t

0x95ce,	// (0x0005a330) wait_bar_pane_cp06_ParamLimits

0x95ce,	// (0x0005a330) wait_bar_pane_cp06

0x16ab,	// (0x0005240d) main_mobtv_programe_curr_pane_t1

0x16b9,	// (0x0005241b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb58,	// (0x000608ba) main_mobtv_programe_curr_pane_t

0x16c7,	// (0x00052429) main_mobtv_programe_next_pane_t1

0x16d5,	// (0x00052437) main_mobtv_programe_next_pane_t2

0x16e3,	// (0x00052445) main_mobtv_programe_next_pane_t3

0x0002,

0xfb5d,	// (0x000608bf) main_mobtv_programe_next_pane_t

0xb803,	// (0x0005c565) bg_popup_mobtv_noti_window_pane

0x16f1,	// (0x00052453) popup_mobtv_noti_window_g1

0x16f9,	// (0x0005245b) popup_mobtv_noti_window_t1

0x1707,	// (0x00052469) popup_mobtv_noti_window_t2

0x0001,

0xfb64,	// (0x000608c6) popup_mobtv_noti_window_t

0xbf42,	// (0x0005cca4) bg_popup_mobtv_noti_window_pane_g1

0x34cf,	// (0x00054231) sc_clock_pane

0x34cf,	// (0x00054231) main_fs_bigclock_pane

0x8c1f,	// (0x00059981) blid2_tripm_pane_t4_ParamLimits

0x8c1f,	// (0x00059981) blid2_tripm_pane_t4

0xbf12,	// (0x0005cc74) sc_clock_pane_g1_ParamLimits

0xbf12,	// (0x0005cc74) sc_clock_pane_g1

0xbf60,	// (0x0005ccc2) sc_clock_pane_t1_ParamLimits

0xbf60,	// (0x0005ccc2) sc_clock_pane_t1

0xbf60,	// (0x0005ccc2) sc_clock_pane_t2_ParamLimits

0xbf60,	// (0x0005ccc2) sc_clock_pane_t2

0xbf60,	// (0x0005ccc2) sc_clock_pane_t3_ParamLimits

0xbf60,	// (0x0005ccc2) sc_clock_pane_t3

0x0004,

0xfb69,	// (0x000608cb) sc_clock_pane_t_ParamLimits

0xfb69,	// (0x000608cb) sc_clock_pane_t

0x9ffd,	// (0x0005ad5f) main_fs_bigclock_indicator_pane_ParamLimits

0x9ffd,	// (0x0005ad5f) main_fs_bigclock_indicator_pane

0x9615,	// (0x0005a377) main_fs_bigclock_pane_g1_ParamLimits

0x9615,	// (0x0005a377) main_fs_bigclock_pane_g1

0xa009,	// (0x0005ad6b) main_fs_bigclock_pane_t1_ParamLimits

0xa009,	// (0x0005ad6b) main_fs_bigclock_pane_t1

0xa01b,	// (0x0005ad7d) main_fs_bigclock_pane_t2_ParamLimits

0xa01b,	// (0x0005ad7d) main_fs_bigclock_pane_t2

0xa02f,	// (0x0005ad91) main_fs_bigclock_pane_t3_ParamLimits

0xa02f,	// (0x0005ad91) main_fs_bigclock_pane_t3

0x0002,

0xfcf7,	// (0x00060a59) main_fs_bigclock_pane_t_ParamLimits

0xfcf7,	// (0x00060a59) main_fs_bigclock_pane_t

0x1f71,	// (0x00052cd3) main_fs_bigclock_indicator_pane_g1

0x1426,	// (0x00052188) ncim_query_content_pane_g2_ParamLimits

0x1426,	// (0x00052188) ncim_query_content_pane_g2

0x0001,

0xfaf6,	// (0x00060858) ncim_query_content_pane_g_ParamLimits

0xfaf6,	// (0x00060858) ncim_query_content_pane_g

0xbf60,	// (0x0005ccc2) sc_clock_pane_t4_ParamLimits

0xbf60,	// (0x0005ccc2) sc_clock_pane_t4

0x5f03,	// (0x00056c65) main_radioblah_pane

0x7715,	// (0x00058477) cell_call4_button_pane_t1_copy1_ParamLimits

0x7715,	// (0x00058477) cell_call4_button_pane_t1_copy1

0x9264,	// (0x00059fc6) main_ncimui_pane_t1_ParamLimits

0x9264,	// (0x00059fc6) main_ncimui_pane_t1

0x927e,	// (0x00059fe0) main_ncimui_pane_t2_ParamLimits

0x927e,	// (0x00059fe0) main_ncimui_pane_t2

0x0002,

0xfaef,	// (0x00060851) main_ncimui_pane_t_ParamLimits

0xfaef,	// (0x00060851) main_ncimui_pane_t

0xd26e,	// (0x0005dfd0) main_radioblah_anim_pane_ParamLimits

0xd26e,	// (0x0005dfd0) main_radioblah_anim_pane

0xd26e,	// (0x0005dfd0) main_radioblah_info_pane_ParamLimits

0xd26e,	// (0x0005dfd0) main_radioblah_info_pane

0xd27c,	// (0x0005dfde) main_radioblah_pane_t1_ParamLimits

0xd27c,	// (0x0005dfde) main_radioblah_pane_t1

0xd27c,	// (0x0005dfde) main_radioblah_pane_t2_ParamLimits

0xd27c,	// (0x0005dfde) main_radioblah_pane_t2

0x0003,

0xfb8a,	// (0x000608ec) main_radioblah_pane_t_ParamLimits

0xfb8a,	// (0x000608ec) main_radioblah_pane_t

0xbef6,	// (0x0005cc58) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbef6,	// (0x0005cc58) main_radioblah_rocker_ctrl_pane

0xe573,	// (0x0005f2d5) main_radioblah_info_pane_t1_ParamLimits

0xe573,	// (0x0005f2d5) main_radioblah_info_pane_t1

0x187d,	// (0x000525df) main_radioblah_info_pane_t2_ParamLimits

0x187d,	// (0x000525df) main_radioblah_info_pane_t2

0x0003,

0xfb93,	// (0x000608f5) main_radioblah_info_pane_t_ParamLimits

0xfb93,	// (0x000608f5) main_radioblah_info_pane_t

0xbf42,	// (0x0005cca4) main_radioblah_rocker_ctrl_pane_g1

0xbf42,	// (0x0005cca4) main_radioblah_rocker_ctrl_pane_g2

0xbf42,	// (0x0005cca4) main_radioblah_rocker_ctrl_pane_g3

0xbf42,	// (0x0005cca4) main_radioblah_rocker_ctrl_pane_g4

0xbf42,	// (0x0005cca4) main_radioblah_rocker_ctrl_pane_g5

0xbf42,	// (0x0005cca4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb9c,	// (0x000608fe) main_radioblah_rocker_ctrl_pane_g

0x920a,	// (0x00059f6c) main_cset_text2_pane_t1_copy1_ParamLimits

0x7788,	// (0x000584ea) cam4_image_uncrop_qvga_pane

0x78c9,	// (0x0005862b) vid4_image_uncrop_qcif_pane

0x8db3,	// (0x00059b15) cam6_image_uncrop_qvga_pane_ParamLimits

0x8db3,	// (0x00059b15) cam6_image_uncrop_qvga_pane

0x10f4,	// (0x00051e56) vid6_image_uncrop_qcif_pane_ParamLimits

0x10f4,	// (0x00051e56) vid6_image_uncrop_qcif_pane

0xb803,	// (0x0005c565) bg_popup_preview_window_pane_cp03

0x13d8,	// (0x0005213a) list_cset_text2_pane

0x13e0,	// (0x00052142) main_cset6_text2_pane_g1

0x13e8,	// (0x0005214a) main_cset6_text2_pane_t1

0x9659,	// (0x0005a3bb) list_cset_text2_pane_t1_ParamLimits

0x9659,	// (0x0005a3bb) list_cset_text2_pane_t1

0x5f03,	// (0x00056c65) main_radioblah_pane_ParamLimits

0x9580,	// (0x0005a2e2) main_mobtv_info_pane_t3_ParamLimits

0x9580,	// (0x0005a2e2) main_mobtv_info_pane_t3

0xd290,	// (0x0005dff2) main_radioblah_pane_g1

0x184d,	// (0x000525af) main_radioblah_info_pane_g1

0xbf60,	// (0x0005ccc2) main_radioblah_info_pane_t3_ParamLimits

0xbf60,	// (0x0005ccc2) main_radioblah_info_pane_t3

0x4fa8,	// (0x00055d0a) highlight_cell_cale_month_pane_ParamLimits

0x4fa8,	// (0x00055d0a) highlight_cell_cale_month_pane

0x34cf,	// (0x00054231) main_phob_fisheye_pane

0xec26,	// (0x0005f988) scroll_pane_cp0031_ParamLimits

0xec26,	// (0x0005f988) scroll_pane_cp0031

0x1226,	// (0x00051f88) wait_bar_pane_cp08_ParamLimits

0x8fcd,	// (0x00059d2f) cset_list_set_pane_copy1_ParamLimits

0x18cc,	// (0x0005262e) highlight_cell_cale_month_pane_g1

0x967a,	// (0x0005a3dc) highlight_cell_cale_month_pane_t1

0x0e84,	// (0x00051be6) list_gen_pane_cp01

0x095a,	// (0x000516bc) scroll_pane_01

0x9688,	// (0x0005a3ea) list_single_double_fisheye_pane

0x9691,	// (0x0005a3f3) list_double_fisheye_pane_g1_ParamLimits

0x9691,	// (0x0005a3f3) list_double_fisheye_pane_g1

0x969d,	// (0x0005a3ff) list_double_fisheye_pane_g2_ParamLimits

0x969d,	// (0x0005a3ff) list_double_fisheye_pane_g2

0x96b1,	// (0x0005a413) list_double_fisheye_pane_g3_ParamLimits

0x96b1,	// (0x0005a413) list_double_fisheye_pane_g3

0x0004,

0xfba9,	// (0x0006090b) list_double_fisheye_pane_g_ParamLimits

0xfba9,	// (0x0006090b) list_double_fisheye_pane_g

0x96da,	// (0x0005a43c) list_double_fisheye_pane_t1_ParamLimits

0x96da,	// (0x0005a43c) list_double_fisheye_pane_t1

0x96f5,	// (0x0005a457) list_double_fisheye_pane_t2_ParamLimits

0x96f5,	// (0x0005a457) list_double_fisheye_pane_t2

0x0001,

0xfbb4,	// (0x00060916) list_double_fisheye_pane_t_ParamLimits

0xfbb4,	// (0x00060916) list_double_fisheye_pane_t

0x34cf,	// (0x00054231) main_call5_pane

0xbef6,	// (0x0005cc58) sc_swipe_pane_ParamLimits

0xbef6,	// (0x0005cc58) sc_swipe_pane

0x9723,	// (0x0005a485) call5_image_pane_ParamLimits

0x9723,	// (0x0005a485) call5_image_pane

0x9733,	// (0x0005a495) call5_swipe_1_pane_ParamLimits

0x9733,	// (0x0005a495) call5_swipe_1_pane

0x973f,	// (0x0005a4a1) call5_swipe_2_pane_ParamLimits

0x973f,	// (0x0005a4a1) call5_swipe_2_pane

0x9759,	// (0x0005a4bb) popup_call5_audio_first_window_ParamLimits

0x9759,	// (0x0005a4bb) popup_call5_audio_first_window

0xbf04,	// (0x0005cc66) call5_swipe_1_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) call5_swipe_1_pane_g1

0x18d4,	// (0x00052636) call5_swipe_1_pane_g2_ParamLimits

0x18d4,	// (0x00052636) call5_swipe_1_pane_g2

0x0001,

0xfbb9,	// (0x0006091b) call5_swipe_1_pane_g_ParamLimits

0xfbb9,	// (0x0006091b) call5_swipe_1_pane_g

0x18e0,	// (0x00052642) call5_swipe_1_pane_t1_ParamLimits

0x18e0,	// (0x00052642) call5_swipe_1_pane_t1

0xbf04,	// (0x0005cc66) call5_swipe_2_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) call5_swipe_2_pane_g1

0x18f5,	// (0x00052657) call5_swipe_2_pane_g2_ParamLimits

0x18f5,	// (0x00052657) call5_swipe_2_pane_g2

0x0001,

0xfbbe,	// (0x00060920) call5_swipe_2_pane_g_ParamLimits

0xfbbe,	// (0x00060920) call5_swipe_2_pane_g

0x1901,	// (0x00052663) call5_swipe_2_pane_t1_ParamLimits

0x1901,	// (0x00052663) call5_swipe_2_pane_t1

0xbf04,	// (0x0005cc66) sc_swipe_pane_g1_ParamLimits

0xbf04,	// (0x0005cc66) sc_swipe_pane_g1

0xbf12,	// (0x0005cc74) sc_swipe_pane_g2_ParamLimits

0xbf12,	// (0x0005cc74) sc_swipe_pane_g2

0x0001,

0xfbc3,	// (0x00060925) sc_swipe_pane_g_ParamLimits

0xfbc3,	// (0x00060925) sc_swipe_pane_g

0xbf4c,	// (0x0005ccae) sc_swipe_pane_t1_ParamLimits

0xbf4c,	// (0x0005ccae) sc_swipe_pane_t1

0x34cf,	// (0x00054231) main_cmail_launcher_pane

0x9767,	// (0x0005a4c9) aid_size_cell_cmail_l_ParamLimits

0x9767,	// (0x0005a4c9) aid_size_cell_cmail_l

0x9775,	// (0x0005a4d7) grid_cmail_l_pane_ParamLimits

0x9775,	// (0x0005a4d7) grid_cmail_l_pane

0x9785,	// (0x0005a4e7) cell_cmail_l_pane_ParamLimits

0x9785,	// (0x0005a4e7) cell_cmail_l_pane

0x1916,	// (0x00052678) cell_cmail_l_pane_g1_ParamLimits

0x1916,	// (0x00052678) cell_cmail_l_pane_g1

0x1922,	// (0x00052684) cell_cmail_l_pane_t1_ParamLimits

0x1922,	// (0x00052684) cell_cmail_l_pane_t1

0x1938,	// (0x0005269a) cell_cmail_l_pane_t2_ParamLimits

0x1938,	// (0x0005269a) cell_cmail_l_pane_t2

0x0001,

0xfbc8,	// (0x0006092a) cell_cmail_l_pane_t_ParamLimits

0xfbc8,	// (0x0006092a) cell_cmail_l_pane_t

0xbe9d,	// (0x0005cbff) grid_highlight_pane_cp018_ParamLimits

0xbe9d,	// (0x0005cbff) grid_highlight_pane_cp018

0x33c2,	// (0x00054124) main2_pane_ParamLimits

0x33c2,	// (0x00054124) main2_pane

0xc02f,	// (0x0005cd91) popup_sp_fs_action_menu_bg_pane_g1

0xc037,	// (0x0005cd99) popup_sp_fs_action_menu_bg_pane_g2

0xc03f,	// (0x0005cda1) popup_sp_fs_action_menu_bg_pane_g3

0xc047,	// (0x0005cda9) popup_sp_fs_action_menu_bg_pane_g4

0xc04f,	// (0x0005cdb1) popup_sp_fs_action_menu_bg_pane_g5

0xc057,	// (0x0005cdb9) popup_sp_fs_action_menu_bg_pane_g6

0xc05f,	// (0x0005cdc1) popup_sp_fs_action_menu_bg_pane_g7

0xc067,	// (0x0005cdc9) popup_sp_fs_action_menu_bg_pane_g8

0xc06f,	// (0x0005cdd1) popup_sp_fs_action_menu_bg_pane_g9

0xc5ed,	// (0x0005d34f) popup_sp_fs_action_menu_bg_pane_g10

0xc5ed,	// (0x0005d34f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0005fe3f) popup_sp_fs_action_menu_bg_pane_g

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g3_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g3_g2

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0005feed) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0005feed) list_medium_line_x2_t3_g3_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g3_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g3_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0005fef4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0005fef4) list_medium_line_x2_t3_g3_t

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g2_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_x2_t3_g2_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g2_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g2_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0005fef4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0005fef4) list_medium_line_x2_t3_g2_t

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g2

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g3

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0005ff00) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0005ff00) list_medium_line_x2_t4_g4_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t3

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0005ff09) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0005ff09) list_medium_line_x2_t4_g4_t

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g2

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g3

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0005ff00) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0005ff00) list_medium_line_x2_t2_g4_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g4_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x0005ff70) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x0005ff70) list_medium_line_x2_t2_g4_t

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g3_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g3_g2

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0005feed) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0005feed) list_medium_line_x2_t2_g3_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g3_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x0005ff70) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x0005ff70) list_medium_line_x2_t2_g3_t

0x51a2,	// (0x00055f04) main_sp_fs_list_pane_ParamLimits

0x51a2,	// (0x00055f04) main_sp_fs_list_pane

0x51ae,	// (0x00055f10) sp_fs_scroll_pane_ParamLimits

0x51ae,	// (0x00055f10) sp_fs_scroll_pane

0xcc22,	// (0x0005d984) list_medium_line_x2_t3_t1

0xcc22,	// (0x0005d984) list_medium_line_x2_t3_t2

0xcc22,	// (0x0005d984) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0005ffbb) list_medium_line_x2_t3_t

0xcc22,	// (0x0005d984) list_medium_line_x3_t4_t1

0xcc22,	// (0x0005d984) list_medium_line_x3_t4_t2

0xcc22,	// (0x0005d984) list_medium_line_x3_t4_t3

0xcc22,	// (0x0005d984) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x0005ffc2) list_medium_line_x3_t4_t

0xcc22,	// (0x0005d984) list_medium_line_x4_t5_t1

0xcc22,	// (0x0005d984) list_medium_line_x4_t5_t2

0xcc22,	// (0x0005d984) list_medium_line_x4_t5_t3

0xcc22,	// (0x0005d984) list_medium_line_x4_t5_t4

0xcc22,	// (0x0005d984) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0005ffcb) list_medium_line_x4_t5_t

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g1

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g2

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g3

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g4_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0005ff00) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0005ff00) list_medium_line_t4_g4_g

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t2

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t3

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t4_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0005ff09) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0005ff09) list_medium_line_t4_g4_t

0x52a1,	// (0x00056003) chi_dic_find_pane_g1

0x5f1f,	// (0x00056c81) main_tport_pane

0xcc22,	// (0x0005d984) list_medium_line_plain_t1

0xbf04,	// (0x0005cc66) list_medium_line_t2_g2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t2_g2_g1

0xbf04,	// (0x0005cc66) list_medium_line_t2_g2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_t2_g2_g

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g2_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g2_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x0005ff70) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x0005ff70) list_medium_line_t2_g2_t

0x038a,	// (0x000510ec) aid_sp_fs_list_icon_a_sm

0x0392,	// (0x000510f4) aid_sp_fs_list_icon_d

0x039a,	// (0x000510fc) aid_sp_fs_text_primary

0x0e8d,	// (0x00051bef) aid_sp_fs_text_secondary

0xb803,	// (0x0005c565) list_medium_line

0xb803,	// (0x0005c565) list_medium_line_g2

0xb803,	// (0x0005c565) list_medium_line_g3

0xb803,	// (0x0005c565) list_medium_line_plain

0xb803,	// (0x0005c565) list_medium_line_plain_t2

0xb803,	// (0x0005c565) list_medium_line_plain_t3

0xb803,	// (0x0005c565) list_medium_line_right_icon

0xb803,	// (0x0005c565) list_medium_line_right_iconx2

0xb803,	// (0x0005c565) list_medium_line_t2

0xb803,	// (0x0005c565) list_medium_line_t2_g2

0xb803,	// (0x0005c565) list_medium_line_t2_g3

0xb803,	// (0x0005c565) list_medium_line_t2_right_icon

0xb803,	// (0x0005c565) list_medium_line_t2_right_iconx2

0xb803,	// (0x0005c565) list_medium_line_t3

0xb803,	// (0x0005c565) list_medium_line_t3_g2

0xb803,	// (0x0005c565) list_medium_line_t3_g3

0xb803,	// (0x0005c565) list_medium_line_t3_right_iconx2

0xb803,	// (0x0005c565) list_medium_line_t4_g4

0xb803,	// (0x0005c565) list_medium_line_x2

0xb803,	// (0x0005c565) list_medium_line_x2_t2_g2

0xb803,	// (0x0005c565) list_medium_line_x2_t2_g3

0xb803,	// (0x0005c565) list_medium_line_x2_t2_g4

0xb803,	// (0x0005c565) list_medium_line_x2_t3

0xb803,	// (0x0005c565) list_medium_line_x2_t3_g2

0xb803,	// (0x0005c565) list_medium_line_x2_t3_g3

0xb803,	// (0x0005c565) list_medium_line_x2_t3_g4

0xb803,	// (0x0005c565) list_medium_line_x2_t4_g2

0xb803,	// (0x0005c565) list_medium_line_x2_t4_g4

0xb803,	// (0x0005c565) list_medium_line_x3

0xb803,	// (0x0005c565) list_medium_line_x3_t4

0xb803,	// (0x0005c565) list_medium_line_x3_t4_g4

0xb803,	// (0x0005c565) list_medium_line_x4_t4

0xb803,	// (0x0005c565) list_medium_line_x4_t4_g7

0xb803,	// (0x0005c565) list_medium_line_x4_t5

0x8aa4,	// (0x00059806) list_single_fs_dyc_pane_ParamLimits

0x8aa4,	// (0x00059806) list_single_fs_dyc_pane

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g1

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g2

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g3

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g4

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g5

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x4_t4_g7_g6

0xbf12,	// (0x0005cc74) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbf12,	// (0x0005cc74) list_medium_line_x4_t4_g7_g7

0x0006,

0xfad0,	// (0x00060832) list_medium_line_x4_t4_g7_g_ParamLimits

0xfad0,	// (0x00060832) list_medium_line_x4_t4_g7_g

0xbf4c,	// (0x0005ccae) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x4_t4_g7_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x4_t4_g7_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x4_t4_g7_t3

0xbf60,	// (0x0005ccc2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbf60,	// (0x0005ccc2) list_medium_line_x4_t4_g7_t4

0xbf60,	// (0x0005ccc2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbf60,	// (0x0005ccc2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfadf,	// (0x00060841) list_medium_line_x4_t4_g7_t_ParamLimits

0xfadf,	// (0x00060841) list_medium_line_x4_t4_g7_t

0x91ed,	// (0x00059f4f) list_single_dyc_row_pane_ParamLimits

0x91ed,	// (0x00059f4f) list_single_dyc_row_pane

0x9717,	// (0x0005a479) call5_gesture_pane_ParamLimits

0x9717,	// (0x0005a479) call5_gesture_pane

0x974b,	// (0x0005a4ad) call5_windows_pane_ParamLimits

0x974b,	// (0x0005a4ad) call5_windows_pane

0x979e,	// (0x0005a500) call5_swipe_1_pane_cp_ParamLimits

0x979e,	// (0x0005a500) call5_swipe_1_pane_cp

0x97aa,	// (0x0005a50c) call5_swipe_2_pane_cp_ParamLimits

0x97aa,	// (0x0005a50c) call5_swipe_2_pane_cp

0xc707,	// (0x0005d469) call5_image_pane_cp

0x97b6,	// (0x0005a518) popup_call5_audio_first_window_cp_ParamLimits

0x97b6,	// (0x0005a518) popup_call5_audio_first_window_cp

0x1955,	// (0x000526b7) call5_swipe_1_pane_g1_cp_ParamLimits

0x1955,	// (0x000526b7) call5_swipe_1_pane_g1_cp

0x1962,	// (0x000526c4) call5_swipe_1_pane_g2_cp

0x196a,	// (0x000526cc) call5_swipe_1_pane_t1_cp_ParamLimits

0x196a,	// (0x000526cc) call5_swipe_1_pane_t1_cp

0x1955,	// (0x000526b7) call5_swipe_2_pane_g1_cp_ParamLimits

0x1955,	// (0x000526b7) call5_swipe_2_pane_g1_cp

0x197f,	// (0x000526e1) call5_swipe_2_pane_g2_cp

0x1987,	// (0x000526e9) call5_swipe_2_pane_t1_cp_ParamLimits

0x1987,	// (0x000526e9) call5_swipe_2_pane_t1_cp

0xbe9d,	// (0x0005cbff) main_sp_fs_email_pane

0x199c,	// (0x000526fe) main_sp_fs_listscroll_pane_te

0x97c4,	// (0x0005a526) popup_sp_fs_action_menu_pane_ParamLimits

0x97c4,	// (0x0005a526) popup_sp_fs_action_menu_pane

0xbf42,	// (0x0005cca4) bg_sp_fs_ctrlbar_pane_g1

0x19a5,	// (0x00052707) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x19ae,	// (0x00052710) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe422,	// (0x0005f184) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbf42,	// (0x0005cca4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbcd,	// (0x0006092f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe4d5,	// (0x0005f237) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe4d5,	// (0x0005f237) bg_sp_fs_ctrlbar_ddmenu_pane

0x19b7,	// (0x00052719) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x19b7,	// (0x00052719) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x19c3,	// (0x00052725) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x19c3,	// (0x00052725) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbd6,	// (0x00060938) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbd6,	// (0x00060938) main_sp_fs_ctrlbar_ddmenu_pane_g

0x19cf,	// (0x00052731) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x19cf,	// (0x00052731) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbf42,	// (0x0005cca4) list_medium_line_t2_right_icon_g1

0xcc22,	// (0x0005d984) list_medium_line_t2_right_icon_t1

0xcc22,	// (0x0005d984) list_medium_line_t2_right_icon_t2

0x0001,

0xfbdb,	// (0x0006093d) list_medium_line_t2_right_icon_t

0xd26e,	// (0x0005dfd0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd26e,	// (0x0005dfd0) bg_sp_fs_ctrlbar_pane

0x9849,	// (0x0005a5ab) main_sp_fs_ctrlbar_button_pane_cp01

0x9851,	// (0x0005a5b3) main_sp_fs_ctrlbar_ddmenu_pane

0x1a21,	// (0x00052783) main_sp_fs_ctrlbar_pane_g1

0x1a2d,	// (0x0005278f) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbe0,	// (0x00060942) main_sp_fs_ctrlbar_pane_g

0x988d,	// (0x0005a5ef) main_sp_fs_ctrlbar_pane_t1

0x98c8,	// (0x0005a62a) main_sp_fs_ctrlbar_pane

0x98de,	// (0x0005a640) main_sp_fs_listscroll_pane_te_cp01

0x98f9,	// (0x0005a65b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x98f9,	// (0x0005a65b) popup_sp_fs_action_menu_pane_cp01

0xbe9d,	// (0x0005cbff) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbe9d,	// (0x0005cbff) bg_sp_fs_highlight_list_pane_cp01

0x03a3,	// (0x00051105) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x03a3,	// (0x00051105) sp_fs_action_menu_list_gene_pane_g1

0x1a54,	// (0x000527b6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1a54,	// (0x000527b6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbee,	// (0x00060950) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbee,	// (0x00060950) sp_fs_action_menu_list_gene_pane_g

0x03b2,	// (0x00051114) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x03b2,	// (0x00051114) sp_fs_action_menu_list_gene_pane_t1

0x03ca,	// (0x0005112c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x03ca,	// (0x0005112c) sp_fs_action_menu_list_gene_pane

0x1a61,	// (0x000527c3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1a61,	// (0x000527c3) popup_sp_fs_action_menu_bg_pane

0x03e9,	// (0x0005114b) sp_fs_action_menu_list_pane_ParamLimits

0x03e9,	// (0x0005114b) sp_fs_action_menu_list_pane

0x9919,	// (0x0005a67b) sp_fs_scroll_pane_cp01_ParamLimits

0x9919,	// (0x0005a67b) sp_fs_scroll_pane_cp01

0xcc22,	// (0x0005d984) list_medium_line_plain_t2_t1

0xcc22,	// (0x0005d984) list_medium_line_plain_t2_t2

0x0001,

0xfbdb,	// (0x0006093d) list_medium_line_plain_t2_t

0xcc22,	// (0x0005d984) list_medium_line_plain_t3_t1

0xcc22,	// (0x0005d984) list_medium_line_plain_t3_t2

0xcc22,	// (0x0005d984) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0005ffbb) list_medium_line_plain_t3_t

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g2_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_x2_t2_g2_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g2_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x0005ff70) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x0005ff70) list_medium_line_x2_t2_g2_t

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g2_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_x2_t4_g2_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t3

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0005ff09) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0005ff09) list_medium_line_x2_t4_g2_t

0xbf42,	// (0x0005cca4) list_medium_line_t3_right_iconx2_g1

0xbf42,	// (0x0005cca4) list_medium_line_t3_right_iconx2_g2

0xbf42,	// (0x0005cca4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x000600d7) list_medium_line_t3_right_iconx2_g

0xcc22,	// (0x0005d984) list_medium_line_t3_right_iconx2_t1

0xcc22,	// (0x0005d984) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0006093d) list_medium_line_t3_right_iconx2_t

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g1

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g2

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g3

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0005ff00) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0005ff00) list_medium_line_x3_t4_g4_g

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t3

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0005ff09) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0005ff09) list_medium_line_x3_t4_g4_t

0x993f,	// (0x0005a6a1) list_single_dyc_row_text_pane_t1_ParamLimits

0x993f,	// (0x0005a6a1) list_single_dyc_row_text_pane_t1

0x9976,	// (0x0005a6d8) list_single_dyc_row_text_pane_t2_ParamLimits

0x9976,	// (0x0005a6d8) list_single_dyc_row_text_pane_t2

0x0409,	// (0x0005116b) list_single_dyc_row_text_pane_t3_ParamLimits

0x0409,	// (0x0005116b) list_single_dyc_row_text_pane_t3

0x0005,

0xfbf3,	// (0x00060955) list_single_dyc_row_text_pane_t_ParamLimits

0xfbf3,	// (0x00060955) list_single_dyc_row_text_pane_t

0x042d,	// (0x0005118f) list_single_dyc_row_pane_g1_ParamLimits

0x042d,	// (0x0005118f) list_single_dyc_row_pane_g1

0x0439,	// (0x0005119b) list_single_dyc_row_pane_g2_ParamLimits

0x0439,	// (0x0005119b) list_single_dyc_row_pane_g2

0x0445,	// (0x000511a7) list_single_dyc_row_pane_g3_ParamLimits

0x0445,	// (0x000511a7) list_single_dyc_row_pane_g3

0x0458,	// (0x000511ba) list_single_dyc_row_pane_g4_ParamLimits

0x0458,	// (0x000511ba) list_single_dyc_row_pane_g4

0x0006,

0xfc00,	// (0x00060962) list_single_dyc_row_pane_g_ParamLimits

0xfc00,	// (0x00060962) list_single_dyc_row_pane_g

0x04aa,	// (0x0005120c) list_single_dyc_row_text_pane_ParamLimits

0x04aa,	// (0x0005120c) list_single_dyc_row_text_pane

0xb803,	// (0x0005c565) bg_sp_fs_scroll_pane

0x1a6f,	// (0x000527d1) thumb_sp_fs_scroll_pane

0xbf04,	// (0x0005cc66) list_medium_line_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_g1

0xbf4c,	// (0x0005ccae) list_medium_line_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t1

0xbf04,	// (0x0005cc66) list_medium_line_x2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_x2_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t1

0xbf04,	// (0x0005cc66) list_medium_line_x3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x3_g1

0x1a78,	// (0x000527da) list_medium_line_x3_g2_ParamLimits

0x1a78,	// (0x000527da) list_medium_line_x3_g2

0x0001,

0xfc0f,	// (0x00060971) list_medium_line_x3_g_ParamLimits

0xfc0f,	// (0x00060971) list_medium_line_x3_g

0x1a86,	// (0x000527e8) list_medium_line_x3_t1_ParamLimits

0x1a86,	// (0x000527e8) list_medium_line_x3_t1

0x1a9a,	// (0x000527fc) thumb_sp_fs_scroll_pane_g1

0x1aa3,	// (0x00052805) thumb_sp_fs_scroll_pane_g2

0x1aac,	// (0x0005280e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x00060976) thumb_sp_fs_scroll_pane_g

0x1a9a,	// (0x000527fc) bg_sp_fs_scroll_pane_g1

0x1aa3,	// (0x00052805) bg_sp_fs_scroll_pane_g2

0x1aac,	// (0x0005280e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x00060976) bg_sp_fs_scroll_pane_g

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g1

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g2

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g3

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0005ff00) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0005ff00) list_medium_line_x2_t3_g4_g

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g4_t1

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g4_t2

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0005fef4) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0005fef4) list_medium_line_x2_t3_g4_t

0xbf04,	// (0x0005cc66) list_medium_line_g2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_g2_g1

0xbf04,	// (0x0005cc66) list_medium_line_g2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_g2_g

0xbf4c,	// (0x0005ccae) list_medium_line_g2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_g2_t1

0xbf04,	// (0x0005cc66) list_medium_line_t3_g2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t3_g2_g1

0xbf04,	// (0x0005cc66) list_medium_line_t3_g2_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0005fefb) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0005fefb) list_medium_line_t3_g2_g

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g2_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g2_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g2_t2

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g2_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0005fef4) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0005fef4) list_medium_line_t3_g2_t

0xbf42,	// (0x0005cca4) list_medium_line_right_icon_g1

0xcc22,	// (0x0005d984) list_medium_line_right_icon_t1

0xbf04,	// (0x0005cc66) list_medium_line_t2_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t2_g1

0xbf4c,	// (0x0005ccae) list_medium_line_t2_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t2_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t2_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x0005ff70) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x0005ff70) list_medium_line_t2_t

0xbf04,	// (0x0005cc66) list_medium_line_t3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t3_g1

0xbf4c,	// (0x0005ccae) list_medium_line_t3_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t3_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_t2

0xbf4c,	// (0x0005ccae) list_medium_line_t3_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0005fef4) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0005fef4) list_medium_line_t3_t

0xbf04,	// (0x0005cc66) list_medium_line_g3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_g3_g1

0xbf04,	// (0x0005cc66) list_medium_line_g3_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_g3_g2

0xbf04,	// (0x0005cc66) list_medium_line_g3_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0005feed) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0005feed) list_medium_line_g3_g

0xbf4c,	// (0x0005ccae) list_medium_line_g3_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_g3_t1

0xbf04,	// (0x0005cc66) list_medium_line_t2_g3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t2_g3_g1

0xbf04,	// (0x0005cc66) list_medium_line_t2_g3_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t2_g3_g2

0xbf04,	// (0x0005cc66) list_medium_line_t2_g3_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0005feed) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0005feed) list_medium_line_t2_g3_g

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g3_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g3_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g3_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x0005ff70) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x0005ff70) list_medium_line_t2_g3_t

0xbf04,	// (0x0005cc66) list_medium_line_t3_g3_g1_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t3_g3_g1

0xbf04,	// (0x0005cc66) list_medium_line_t3_g3_g2_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t3_g3_g2

0xbf04,	// (0x0005cc66) list_medium_line_t3_g3_g3_ParamLimits

0xbf04,	// (0x0005cc66) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0005feed) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0005feed) list_medium_line_t3_g3_g

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g3_t1_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g3_t1

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g3_t2_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g3_t2

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g3_t3_ParamLimits

0xbf4c,	// (0x0005ccae) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0005fef4) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0005fef4) list_medium_line_t3_g3_t

0xbf42,	// (0x0005cca4) list_medium_line_right_iconx2_g1

0xbf42,	// (0x0005cca4) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005fdee) list_medium_line_right_iconx2_g

0xcc22,	// (0x0005d984) list_medium_line_right_iconx2_t1

0xbf42,	// (0x0005cca4) list_medium_line_t2_right_iconx2_g1

0xbf42,	// (0x0005cca4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005fdee) list_medium_line_t2_right_iconx2_g

0xcc22,	// (0x0005d984) list_medium_line_t2_right_iconx2_t1

0xcc22,	// (0x0005d984) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0006093d) list_medium_line_t2_right_iconx2_t

0xcc22,	// (0x0005d984) list_medium_line_x4_t4_t1

0xcc22,	// (0x0005d984) list_medium_line_x4_t4_t2

0xcc22,	// (0x0005d984) list_medium_line_x4_t4_t3

0xcc22,	// (0x0005d984) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x0005ffc2) list_medium_line_x4_t4_t

0x9ac3,	// (0x0005a825) tport_appsw_pane_ParamLimits

0x9ac3,	// (0x0005a825) tport_appsw_pane

0x9ad1,	// (0x0005a833) tport_contact_pane_ParamLimits

0x9ad1,	// (0x0005a833) tport_contact_pane

0x9ae1,	// (0x0005a843) tport_listscroll_pane_ParamLimits

0x9ae1,	// (0x0005a843) tport_listscroll_pane

0x9af1,	// (0x0005a853) cell_tport_appsw_pane_ParamLimits

0x9af1,	// (0x0005a853) cell_tport_appsw_pane

0xbf12,	// (0x0005cc74) tport_appsw_pane_g1_ParamLimits

0xbf12,	// (0x0005cc74) tport_appsw_pane_g1

0x1ab5,	// (0x00052817) tport_contact_pane_g1

0x1abe,	// (0x00052820) tport_contact_pane_t1

0x1acc,	// (0x0005282e) tport_contact_pane_t2

0x0001,

0xfc1b,	// (0x0006097d) tport_contact_pane_t

0x1ada,	// (0x0005283c) list_tport_pane

0x1ae3,	// (0x00052845) scroll_pane_cp_030

0x9b24,	// (0x0005a886) cell_tport_appsw_pane_g1

0x9b34,	// (0x0005a896) cell_tport_appsw_pane_t1

0x9b42,	// (0x0005a8a4) grid_highlight_pane_cp019

0x9b4a,	// (0x0005a8ac) list_tport_double_graphic_pane_ParamLimits

0x9b4a,	// (0x0005a8ac) list_tport_double_graphic_pane

0xbe9d,	// (0x0005cbff) list_highlight_pane_cp023_ParamLimits

0xbe9d,	// (0x0005cbff) list_highlight_pane_cp023

0x9b5b,	// (0x0005a8bd) list_tport_double_graphic_pane_g1_ParamLimits

0x9b5b,	// (0x0005a8bd) list_tport_double_graphic_pane_g1

0x9b68,	// (0x0005a8ca) list_tport_double_graphic_pane_t1_ParamLimits

0x9b68,	// (0x0005a8ca) list_tport_double_graphic_pane_t1

0x9b7d,	// (0x0005a8df) list_tport_double_graphic_pane_t2_ParamLimits

0x9b7d,	// (0x0005a8df) list_tport_double_graphic_pane_t2

0x0001,

0xfc27,	// (0x00060989) list_tport_double_graphic_pane_t_ParamLimits

0xfc27,	// (0x00060989) list_tport_double_graphic_pane_t

0xb803,	// (0x0005c565) main_cale_note_pane

0x7b28,	// (0x0005888a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7b28,	// (0x0005888a) cell_vitu2_function_top_wide_pane_cp01

0x9594,	// (0x0005a2f6) wait_bar_pane_cp05_ParamLimits

0xbe9d,	// (0x0005cbff) listscroll_cmail_pane

0x1af4,	// (0x00052856) list_cmail_pane

0x9b8f,	// (0x0005a8f1) list_cmail_body_pane

0x9bb7,	// (0x0005a919) list_single_cmail_header_caption_pane

0x9be6,	// (0x0005a948) list_single_cmail_header_detail_pane_ParamLimits

0x9be6,	// (0x0005a948) list_single_cmail_header_detail_pane

0x1b17,	// (0x00052879) list_single_cmail_header_caption_pane_t1

0x9c23,	// (0x0005a985) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9c23,	// (0x0005a985) list_single_cmail_header_detail_pane_g1

0x04cf,	// (0x00051231) list_single_cmail_header_detail_pane_g2_ParamLimits

0x04cf,	// (0x00051231) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc2c,	// (0x0006098e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc2c,	// (0x0006098e) list_single_cmail_header_detail_pane_g

0x9c39,	// (0x0005a99b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9c39,	// (0x0005a99b) list_single_cmail_header_detail_pane_t1

0x9c75,	// (0x0005a9d7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9c75,	// (0x0005a9d7) list_single_cmail_header_editor_pane_bg

0x1608,	// (0x0005236a) list_cmail_body_pane_g1

0x1b3b,	// (0x0005289d) list_cmail_body_pane_t1

0x081a,	// (0x0005157c) list_single_cmail_header_editor_pane_bg_g1

0xc952,	// (0x0005d6b4) list_single_cmail_header_editor_pane_bg_g1_copy1

0x082a,	// (0x0005158c) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0822,	// (0x00051584) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0b78,	// (0x000518da) list_single_cmail_header_editor_pane_bg_g1_copy4

0x084a,	// (0x000515ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x083a,	// (0x0005159c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0842,	// (0x000515a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc932,	// (0x0005d694) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9c8c,	// (0x0005a9ee) calenote_gesture_pane_ParamLimits

0x9c8c,	// (0x0005a9ee) calenote_gesture_pane

0x9ca6,	// (0x0005aa08) calenote_window_pane_ParamLimits

0x9ca6,	// (0x0005aa08) calenote_window_pane

0x1b49,	// (0x000528ab) popup_note_window_cp01

0x9cbe,	// (0x0005aa20) calenote_swipe_1_pane_ParamLimits

0x9cbe,	// (0x0005aa20) calenote_swipe_1_pane

0x97aa,	// (0x0005a50c) calenote_swipe_2_pane_ParamLimits

0x97aa,	// (0x0005a50c) calenote_swipe_2_pane

0x1955,	// (0x000526b7) calenote_swipe_1_pane_g1_ParamLimits

0x1955,	// (0x000526b7) calenote_swipe_1_pane_g1

0x1b5b,	// (0x000528bd) calenote_swipe_1_pane_g2_ParamLimits

0x1b5b,	// (0x000528bd) calenote_swipe_1_pane_g2

0x0001,

0xfc38,	// (0x0006099a) calenote_swipe_1_pane_g_ParamLimits

0xfc38,	// (0x0006099a) calenote_swipe_1_pane_g

0x1b67,	// (0x000528c9) calenote_swipe_1_pane_t1_ParamLimits

0x1b67,	// (0x000528c9) calenote_swipe_1_pane_t1

0x1955,	// (0x000526b7) calenote_swipe_2_pane_g1_ParamLimits

0x1955,	// (0x000526b7) calenote_swipe_2_pane_g1

0x1b86,	// (0x000528e8) calenote_swipe_2_pane_g2_ParamLimits

0x1b86,	// (0x000528e8) calenote_swipe_2_pane_g2

0x0001,

0xfc3d,	// (0x0006099f) calenote_swipe_2_pane_g_ParamLimits

0xfc3d,	// (0x0006099f) calenote_swipe_2_pane_g

0x1b92,	// (0x000528f4) calenote_swipe_2_pane_t1_ParamLimits

0x1b92,	// (0x000528f4) calenote_swipe_2_pane_t1

0xb803,	// (0x0005c565) main_mup_navstr_pane

0x6a57,	// (0x000577b9) main_mup3_pane_t7_ParamLimits

0x6a57,	// (0x000577b9) main_mup3_pane_t7

0x71ff,	// (0x00057f61) main_mp4_pane_g6_ParamLimits

0x71ff,	// (0x00057f61) main_mp4_pane_g6

0x7573,	// (0x000582d5) main_image3_pane_t4_ParamLimits

0x7573,	// (0x000582d5) main_image3_pane_t4

0x9cd1,	// (0x0005aa33) popup_navstr_preview_pane_ParamLimits

0x9cd1,	// (0x0005aa33) popup_navstr_preview_pane

0x9cdd,	// (0x0005aa3f) scroll_navstr_pane_ParamLimits

0x9cdd,	// (0x0005aa3f) scroll_navstr_pane

0xb803,	// (0x0005c565) bg_popup_preview_window_pane_cp04

0x1bb9,	// (0x0005291b) popup_navstr_preview_pane_t1

0x9ce9,	// (0x0005aa4b) scroll_navstr_pane_g1_ParamLimits

0x9ce9,	// (0x0005aa4b) scroll_navstr_pane_g1

0x9cf6,	// (0x0005aa58) scroll_navstr_pane_t1_ParamLimits

0x9cf6,	// (0x0005aa58) scroll_navstr_pane_t1

0x1b52,	// (0x000528b4) bg_button_pane_cp014

0x1b52,	// (0x000528b4) bg_button_pane_cp030

0x96bd,	// (0x0005a41f) list_double_fisheye_pane_g4_ParamLimits

0x96bd,	// (0x0005a41f) list_double_fisheye_pane_g4

0x96c9,	// (0x0005a42b) list_double_fisheye_pane_g5_ParamLimits

0x96c9,	// (0x0005a42b) list_double_fisheye_pane_g5

0x1b03,	// (0x00052865) sp_fs_scroll_pane_cp03

0x1a21,	// (0x00052783) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1a2d,	// (0x0005278f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbe0,	// (0x00060942) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x988d,	// (0x0005a5ef) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1b0f,	// (0x00052871) sp_fs_scroll_pane_cp02

0xc658,	// (0x0005d3ba) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc658,	// (0x0005d3ba) popup_sp_fs_calendar_preview_list_single_pane

0xb803,	// (0x0005c565) main_cam6_pano_pane

0x5f03,	// (0x00056c65) main_mup3_pane_ParamLimits

0xb803,	// (0x0005c565) main_phacti_pane

0x9469,	// (0x0005a1cb) bg_button_pane_cp11

0x9481,	// (0x0005a1e3) main_mobtv_info_pane_g2_ParamLimits

0x9481,	// (0x0005a1e3) main_mobtv_info_pane_g2

0x0001,

0xfb40,	// (0x000608a2) main_mobtv_info_pane_g_ParamLimits

0xfb40,	// (0x000608a2) main_mobtv_info_pane_g

0xbf60,	// (0x0005ccc2) sc_clock_pane_t5_ParamLimits

0xbf60,	// (0x0005ccc2) sc_clock_pane_t5

0xd290,	// (0x0005dff2) main_radioblah_pane_g1_ParamLimits

0xd27c,	// (0x0005dfde) main_radioblah_pane_t3_ParamLimits

0xd27c,	// (0x0005dfde) main_radioblah_pane_t3

0xd27c,	// (0x0005dfde) main_radioblah_pane_t4_ParamLimits

0xd27c,	// (0x0005dfde) main_radioblah_pane_t4

0xbef6,	// (0x0005cc58) main_radioblah_text_pane_ParamLimits

0xbef6,	// (0x0005cc58) main_radioblah_text_pane

0x184d,	// (0x000525af) main_radioblah_info_pane_g1_ParamLimits

0x1891,	// (0x000525f3) main_radioblah_info_pane_t4_ParamLimits

0x1891,	// (0x000525f3) main_radioblah_info_pane_t4

0xbe9d,	// (0x0005cbff) main_sp_fs_calendar_pane

0x9d08,	// (0x0005aa6a) main_phacti_pane_g1

0x9d10,	// (0x0005aa72) phacti_note_pane_ParamLimits

0x9d10,	// (0x0005aa72) phacti_note_pane

0x1bd0,	// (0x00052932) phacti_term_pane_ParamLimits

0x1bd0,	// (0x00052932) phacti_term_pane

0x1be5,	// (0x00052947) phacti_note_pane_t1_ParamLimits

0x1be5,	// (0x00052947) phacti_note_pane_t1

0x04ff,	// (0x00051261) phacti_term_pane_g1

0x0507,	// (0x00051269) phacti_term_pane_t1_ParamLimits

0x0507,	// (0x00051269) phacti_term_pane_t1

0x1bfc,	// (0x0005295e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1c04,	// (0x00052966) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc47,	// (0x000609a9) popup_sp_fs_calendar_preview_list_single_pane_g

0x1c0c,	// (0x0005296e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1c0c,	// (0x0005296e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1c22,	// (0x00052984) aid_popup_sp_fs_bg_corner_pane

0xbf42,	// (0x0005cca4) popup_sp_fs_calendar_preview_bg_pane_g1

0xb803,	// (0x0005c565) popup_sp_fs_calendar_preview_bg_pane

0x1c2a,	// (0x0005298c) popup_sp_fs_calendar_preview_list_pane

0x1c32,	// (0x00052994) bg_main_sp_fs_cale_pane_ParamLimits

0x1c32,	// (0x00052994) bg_main_sp_fs_cale_pane

0x1c4a,	// (0x000529ac) listscroll_cale_mrui_pane_ParamLimits

0x1c4a,	// (0x000529ac) listscroll_cale_mrui_pane

0xebe2,	// (0x0005f944) listscroll_sp_fs_schedule_track_pane

0x053a,	// (0x0005129c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x053a,	// (0x0005129c) main_sp_fs_ctrlbar_pane_cp01

0xebe2,	// (0x0005f944) main_sp_fs_ribbon_pane

0x0550,	// (0x000512b2) popup_sp_fs_cale_preview_window

0x0a44,	// (0x000517a6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x0a44,	// (0x000517a6) list_single_sp_fs_schedule_track_pane

0x0a44,	// (0x000517a6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0a44,	// (0x000517a6) bg_sp_fs_highlight_list_pane_cp03

0x673b,	// (0x0005749d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x673b,	// (0x0005749d) list_single_sp_fs_schedule_track_pane_g1

0x673b,	// (0x0005749d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x673b,	// (0x0005749d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc4c,	// (0x000609ae) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc4c,	// (0x000609ae) list_single_sp_fs_schedule_track_pane_g

0x9d26,	// (0x0005aa88) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9d26,	// (0x0005aa88) list_single_sp_fs_schedule_track_pane_t1

0x070d,	// (0x0005146f) sp_fs_schedule_track_pane_ParamLimits

0x070d,	// (0x0005146f) sp_fs_schedule_track_pane

0xebea,	// (0x0005f94c) sp_fs_schedule_track_pane_g1

0xebea,	// (0x0005f94c) sp_fs_schedule_track_pane_g2

0xebea,	// (0x0005f94c) sp_fs_schedule_track_pane_g3

0xebea,	// (0x0005f94c) sp_fs_schedule_track_pane_g4

0xebea,	// (0x0005f94c) sp_fs_schedule_track_pane_g5

0x0004,

0xfc51,	// (0x000609b3) sp_fs_schedule_track_pane_g

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g1

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g2

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g3

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g4

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g5

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g6

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g7

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g8

0xebea,	// (0x0005f94c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc5c,	// (0x000609be) bg_sp_fs_schedule_viewer_highlight_g

0xebe2,	// (0x0005f944) bg_main_sp_fs_ribbon_pane

0xebea,	// (0x0005f94c) main_sp_fs_ribbon_pane_g1

0x1c62,	// (0x000529c4) main_sp_fs_ribbon_pane_t1

0x1c62,	// (0x000529c4) main_sp_fs_ribbon_pane_t2

0x1c62,	// (0x000529c4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc6f,	// (0x000609d1) main_sp_fs_ribbon_pane_t

0xebe2,	// (0x0005f944) main_sp_fs_ribbon_scheduler_pane

0xebea,	// (0x0005f94c) bg_main_sp_fs_ribbon_pane_g1

0xebea,	// (0x0005f94c) bg_main_sp_fs_ribbon_pane_g2

0xebea,	// (0x0005f94c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6b8,	// (0x0006041a) bg_main_sp_fs_ribbon_pane_g

0xebea,	// (0x0005f94c) main_sp_fs_ribbon_scheduler_pane_g1

0xebea,	// (0x0005f94c) main_sp_fs_ribbon_scheduler_pane_g2

0xebea,	// (0x0005f94c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6b8,	// (0x0006041a) main_sp_fs_ribbon_scheduler_pane_g

0x1c70,	// (0x000529d2) list_cale_mrui_pane

0x9d38,	// (0x0005aa9a) sp_fs_scroll_pane_cp07_ParamLimits

0x9d38,	// (0x0005aa9a) sp_fs_scroll_pane_cp07

0x0a44,	// (0x000517a6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x0a44,	// (0x000517a6) bg_sp_fs_schedule_viewer_highlight

0xebe2,	// (0x0005f944) list_single_sp_fs_schedule_track_pane_cp01

0xebe2,	// (0x0005f944) list_sp_fs_schedule_track_pane

0x1c7d,	// (0x000529df) sp_fs_scroll_pane_cp06_ParamLimits

0x1c7d,	// (0x000529df) sp_fs_scroll_pane_cp06

0xbf42,	// (0x0005cca4) bgmain_sp_fs_calendar_pane_g1

0x9d54,	// (0x0005aab6) list_single_cale_mrui_pane_ParamLimits

0x9d54,	// (0x0005aab6) list_single_cale_mrui_pane

0x0562,	// (0x000512c4) list_single_cale_mrui_row_pane_ParamLimits

0x0562,	// (0x000512c4) list_single_cale_mrui_row_pane

0x056f,	// (0x000512d1) list_single_cale_mrui_row_pane_g1_ParamLimits

0x056f,	// (0x000512d1) list_single_cale_mrui_row_pane_g1

0x05a7,	// (0x00051309) list_single_cale_mrui_row_pane_t1_ParamLimits

0x05a7,	// (0x00051309) list_single_cale_mrui_row_pane_t1

0x9d82,	// (0x0005aae4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9d82,	// (0x0005aae4) list_single_cale_mrui_row_pane_t2

0x05b9,	// (0x0005131b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x05b9,	// (0x0005131b) list_single_cale_mrui_row_pane_t3

0x05e8,	// (0x0005134a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x05e8,	// (0x0005134a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc7d,	// (0x000609df) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc7d,	// (0x000609df) list_single_cale_mrui_row_pane_t

0x9de8,	// (0x0005ab4a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9de8,	// (0x0005ab4a) list_single_cmail_header_editor_pane_bg_cp01

0x9e10,	// (0x0005ab72) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9e10,	// (0x0005ab72) list_single_cmail_header_editor_pane_bg_cp02

0x1c9e,	// (0x00052a00) main_radioblah_text_pane_t1_ParamLimits

0x1c9e,	// (0x00052a00) main_radioblah_text_pane_t1

0x1cb8,	// (0x00052a1a) cam6_indi_pane_cp01

0x1cc0,	// (0x00052a22) cam6_mode_pane_cp01

0x1cc8,	// (0x00052a2a) cam6_pano_pane

0x1cd1,	// (0x00052a33) cam6_zoom_pane_cp01

0x1cd9,	// (0x00052a3b) cam6_pano_image_pane

0x1ce4,	// (0x00052a46) cam6_pano_pane_g1

0x1608,	// (0x0005236a) cam6_pano_pane_g2

0x1ced,	// (0x00052a4f) cam6_pano_pane_g3

0x1cf6,	// (0x00052a58) cam6_pano_pane_g4

0xee99,	// (0x0005fbfb) cam6_pano_pane_g5

0x1cff,	// (0x00052a61) cam6_pano_pane_g6

0x1d09,	// (0x00052a6b) cam6_pano_pane_g7

0x1d11,	// (0x00052a73) cam6_pano_pane_g8

0x1d1a,	// (0x00052a7c) cam6_pano_pane_g9

0x0008,

0xfc86,	// (0x000609e8) cam6_pano_pane_g

0xb803,	// (0x0005c565) main_browser_tag_pane

0x1bb1,	// (0x00052913) grid_navstr_albumart_pane

0x1d25,	// (0x00052a87) cell_navstr_albumart_pane_ParamLimits

0x1d25,	// (0x00052a87) cell_navstr_albumart_pane

0x1d45,	// (0x00052aa7) cell_navstr_albumart_pane_g1

0x1d4d,	// (0x00052aaf) cell_navstr_albumart_pane_g2

0x1d55,	// (0x00052ab7) cell_navstr_albumart_pane_g3

0x1d5d,	// (0x00052abf) cell_navstr_albumart_pane_g4

0x0003,

0xfc99,	// (0x000609fb) cell_navstr_albumart_pane_g

0x9e2c,	// (0x0005ab8e) bt_list_pane_ParamLimits

0x9e2c,	// (0x0005ab8e) bt_list_pane

0x9e4d,	// (0x0005abaf) bt_list_pane_t1

0x9e5c,	// (0x0005abbe) bt_list_pane_t2

0x0001,

0xfca2,	// (0x00060a04) bt_list_pane_t

0xb803,	// (0x0005c565) main_cale_prevew_pane

0x9e6b,	// (0x0005abcd) popup_cale_preview_window_ParamLimits

0x9e6b,	// (0x0005abcd) popup_cale_preview_window

0xbe9d,	// (0x0005cbff) bg_popup_preview_window_pane_cp05_ParamLimits

0xbe9d,	// (0x0005cbff) bg_popup_preview_window_pane_cp05

0x1d65,	// (0x00052ac7) list_cale_preview_pane_ParamLimits

0x1d65,	// (0x00052ac7) list_cale_preview_pane

0x9e84,	// (0x0005abe6) list_double_cale_preview_pane_ParamLimits

0x9e84,	// (0x0005abe6) list_double_cale_preview_pane

0x9e96,	// (0x0005abf8) list_single_cale_preview_pane_ParamLimits

0x9e96,	// (0x0005abf8) list_single_cale_preview_pane

0x9eaa,	// (0x0005ac0c) list_single_cale_preview_pane_g1

0x9eb2,	// (0x0005ac14) list_single_cale_preview_pane_t1_ParamLimits

0x9eb2,	// (0x0005ac14) list_single_cale_preview_pane_t1

0x9ec7,	// (0x0005ac29) list_double_cale_preview_pane_g1

0x9ecf,	// (0x0005ac31) list_double_cale_preview_pane_t1_ParamLimits

0x9ecf,	// (0x0005ac31) list_double_cale_preview_pane_t1

0x9ee4,	// (0x0005ac46) list_double_cale_preview_pane_t2_ParamLimits

0x9ee4,	// (0x0005ac46) list_double_cale_preview_pane_t2

0x0001,

0xfca7,	// (0x00060a09) list_double_cale_preview_pane_t_ParamLimits

0xfca7,	// (0x00060a09) list_double_cale_preview_pane_t

0xb803,	// (0x0005c565) main_ezdial_pane

0xbe9d,	// (0x0005cbff) main_sp_fs_email_pane_ParamLimits

0x9806,	// (0x0005a568) cmail_ddmenu_btn01_pane_ParamLimits

0x9806,	// (0x0005a568) cmail_ddmenu_btn01_pane

0x981b,	// (0x0005a57d) cmail_ddmenu_btn02_pane_ParamLimits

0x981b,	// (0x0005a57d) cmail_ddmenu_btn02_pane

0x9833,	// (0x0005a595) cmail_ddmenu_btn03_pane_ParamLimits

0x9833,	// (0x0005a595) cmail_ddmenu_btn03_pane

0x98c8,	// (0x0005a62a) main_sp_fs_ctrlbar_pane_ParamLimits

0x98de,	// (0x0005a640) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9b8f,	// (0x0005a8f1) list_cmail_body_pane_ParamLimits

0x1b25,	// (0x00052887) bg_button_pane_cp12

0x1b2e,	// (0x00052890) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1b2e,	// (0x00052890) list_single_cmail_header_detail_pane_g3

0x04db,	// (0x0005123d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x04db,	// (0x0005123d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc33,	// (0x00060995) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc33,	// (0x00060995) list_single_cmail_header_detail_pane_t

0x051c,	// (0x0005127e) phacti_term_pane_t2_ParamLimits

0x051c,	// (0x0005127e) phacti_term_pane_t2

0x0001,

0xfc42,	// (0x000609a4) phacti_term_pane_t_ParamLimits

0xfc42,	// (0x000609a4) phacti_term_pane_t

0x1d71,	// (0x00052ad3) aid_size_list_single_double

0x9efc,	// (0x0005ac5e) popup_ezdial_listscroll_window

0x1d7d,	// (0x00052adf) popup_number_entry_window_cp01

0xc707,	// (0x0005d469) bg_popup_call_pane_cp09

0x1d8a,	// (0x00052aec) ezdial_list_pane

0x1d92,	// (0x00052af4) scroll_pane_cp23

0xe4d5,	// (0x0005f237) bg_button_pane_cp028_ParamLimits

0xe4d5,	// (0x0005f237) bg_button_pane_cp028

0x9f15,	// (0x0005ac77) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9f15,	// (0x0005ac77) cmail_ddmenu_btn01_pane_g1

0x9f25,	// (0x0005ac87) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9f25,	// (0x0005ac87) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcac,	// (0x00060a0e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcac,	// (0x00060a0e) cmail_ddmenu_btn01_pane_g

0x1d9a,	// (0x00052afc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1d9a,	// (0x00052afc) cmail_ddmenu_btn01_pane_t1

0xd26e,	// (0x0005dfd0) bg_button_pane_cp029_ParamLimits

0xd26e,	// (0x0005dfd0) bg_button_pane_cp029

0x9f25,	// (0x0005ac87) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9f25,	// (0x0005ac87) cmail_ddmenu_btn02_pane_g1

0x9f3d,	// (0x0005ac9f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9f3d,	// (0x0005ac9f) cmail_ddmenu_btn02_pane_t1

0xbef6,	// (0x0005cc58) bg_button_pane_cp031_ParamLimits

0xbef6,	// (0x0005cc58) bg_button_pane_cp031

0x9f25,	// (0x0005ac87) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9f25,	// (0x0005ac87) cmail_ddmenu_btn03_pane_g1

0x9f3d,	// (0x0005ac9f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9f3d,	// (0x0005ac9f) cmail_ddmenu_btn03_pane_t1

0xbf4c,	// (0x0005ccae) cell_dialer2_keypad_pane_t1_ParamLimits

0xee26,	// (0x0005fb88) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee26,	// (0x0005fb88) cell_dialer2_keypad_pane_t1_copy1

0x92aa,	// (0x0005a00c) ncimui_group_button_pane

0xbe9d,	// (0x0005cbff) main_sp_fs_calendar_pane_ParamLimits

0x9bb7,	// (0x0005a919) list_single_cmail_header_caption_pane_ParamLimits

0x0531,	// (0x00051293) aid_recal_txt_sm_pane

0xb803,	// (0x0005c565) mian_recal_day_pane

0x0550,	// (0x000512b2) popup_sp_fs_cale_preview_window_ParamLimits

0x1daf,	// (0x00052b11) list_recal_day_pane

0x0632,	// (0x00051394) list_single_recal_day_pane_ParamLimits

0x0632,	// (0x00051394) list_single_recal_day_pane

0x1dd6,	// (0x00052b38) list_single_recal_day_pane_g1_ParamLimits

0x1dd6,	// (0x00052b38) list_single_recal_day_pane_g1

0x0644,	// (0x000513a6) list_single_recal_day_pane_g2_ParamLimits

0x0644,	// (0x000513a6) list_single_recal_day_pane_g2

0x0650,	// (0x000513b2) list_single_recal_day_pane_g3_ParamLimits

0x0650,	// (0x000513b2) list_single_recal_day_pane_g3

0x9f61,	// (0x0005acc3) list_single_recal_day_pane_g4_ParamLimits

0x9f61,	// (0x0005acc3) list_single_recal_day_pane_g4

0x065c,	// (0x000513be) list_single_recal_day_pane_g5_ParamLimits

0x065c,	// (0x000513be) list_single_recal_day_pane_g5

0x0668,	// (0x000513ca) list_single_recal_day_pane_g6_ParamLimits

0x0668,	// (0x000513ca) list_single_recal_day_pane_g6

0x0004,

0xfcbb,	// (0x00060a1d) list_single_recal_day_pane_g_ParamLimits

0xfcbb,	// (0x00060a1d) list_single_recal_day_pane_g

0x067c,	// (0x000513de) list_single_recal_day_pane_t1

0x068e,	// (0x000513f0) list_single_recal_day_pane_t2

0x0001,

0xfcc6,	// (0x00060a28) list_single_recal_day_pane_t

0x9f79,	// (0x0005acdb) ncimui_query_button_pane_ParamLimits

0x9f79,	// (0x0005acdb) ncimui_query_button_pane

0x9f89,	// (0x0005aceb) ncimui_query_button_pane_t1_ParamLimits

0x9f89,	// (0x0005aceb) ncimui_query_button_pane_t1

0x1de2,	// (0x00052b44) ncimui_query_button_pane_t2_ParamLimits

0x1de2,	// (0x00052b44) ncimui_query_button_pane_t2

0x0001,

0xfccb,	// (0x00060a2d) ncimui_query_button_pane_t_ParamLimits

0xfccb,	// (0x00060a2d) ncimui_query_button_pane_t

0x9f9c,	// (0x0005acfe) query_button_pane_ParamLimits

0x9f9c,	// (0x0005acfe) query_button_pane

0xb803,	// (0x0005c565) bg_button_pane_cp0028

0x1df5,	// (0x00052b57) query_button_pane_t1

0x5f1f,	// (0x00056c81) main_tport_pane_ParamLimits

0x9a99,	// (0x0005a7fb) bg_popup_window_pane_cp01_ParamLimits

0x9a99,	// (0x0005a7fb) bg_popup_window_pane_cp01

0x9aa7,	// (0x0005a809) heading_pane_cp08_ParamLimits

0x9aa7,	// (0x0005a809) heading_pane_cp08

0x9ab5,	// (0x0005a817) heading_pane_cp07_ParamLimits

0x9ab5,	// (0x0005a817) heading_pane_cp07

0x9b24,	// (0x0005a886) cell_tport_appsw_pane_g2

0x0002,

0xfc20,	// (0x00060982) cell_tport_appsw_pane_g

0xd235,	// (0x0005df97) input_candi_list_open_g1

0xcacd,	// (0x0005d82f) list_cale_time_pane_g6_ParamLimits

0xcacd,	// (0x0005d82f) list_cale_time_pane_g6

0x6419,	// (0x0005717b) aid_size_touch_calib_1_ParamLimits

0x6419,	// (0x0005717b) aid_size_touch_calib_1

0x6425,	// (0x00057187) aid_size_touch_calib_2_ParamLimits

0x6425,	// (0x00057187) aid_size_touch_calib_2

0x6433,	// (0x00057195) aid_size_touch_calib_3_ParamLimits

0x6433,	// (0x00057195) aid_size_touch_calib_3

0x6443,	// (0x000571a5) aid_size_touch_calib_4_ParamLimits

0x6443,	// (0x000571a5) aid_size_touch_calib_4

0x6451,	// (0x000571b3) main_touch_calib_button_group_pane_ParamLimits

0x6451,	// (0x000571b3) main_touch_calib_button_group_pane

0x645f,	// (0x000571c1) main_touch_calib_pane_g1_ParamLimits

0x646b,	// (0x000571cd) main_touch_calib_pane_g2_ParamLimits

0x6477,	// (0x000571d9) main_touch_calib_pane_g3_ParamLimits

0x6483,	// (0x000571e5) main_touch_calib_pane_g4_ParamLimits

0xf666,	// (0x000603c8) main_touch_calib_pane_g_ParamLimits

0x648f,	// (0x000571f1) main_touch_calib_pane_t1_ParamLimits

0x64a8,	// (0x0005720a) main_touch_calib_pane_t2_ParamLimits

0x64c1,	// (0x00057223) main_touch_calib_pane_t3_ParamLimits

0x64d7,	// (0x00057239) main_touch_calib_pane_t4_ParamLimits

0x64ed,	// (0x0005724f) main_touch_calib_pane_t5_ParamLimits

0xf66f,	// (0x000603d1) main_touch_calib_pane_t_ParamLimits

0xec4a,	// (0x0005f9ac) list_single_fp_cale_pane_g3_ParamLimits

0xec4a,	// (0x0005f9ac) list_single_fp_cale_pane_g3

0x5f03,	// (0x00056c65) bg_button_pane_cp012_ParamLimits

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp03_ParamLimits

0x83ba,	// (0x0005911c) cell_vitu2_function_top_pane_g1_ParamLimits

0x5f03,	// (0x00056c65) bg_vkb2_func_pane_cp04_ParamLimits

0x9232,	// (0x00059f94) main_ncimui_button_group_pane_ParamLimits

0x9232,	// (0x00059f94) main_ncimui_button_group_pane

0x9298,	// (0x00059ffa) main_ncimui_pane_t3_ParamLimits

0x9298,	// (0x00059ffa) main_ncimui_pane_t3

0x1bc7,	// (0x00052929) phacti_button_group_pane

0x1d71,	// (0x00052ad3) aid_size_list_single_double_ParamLimits

0x9efc,	// (0x0005ac5e) popup_ezdial_listscroll_window_ParamLimits

0x1d7d,	// (0x00052adf) popup_number_entry_window_cp01_ParamLimits

0x9fa9,	// (0x0005ad0b) phacti_button_pane_ParamLimits

0x9fa9,	// (0x0005ad0b) phacti_button_pane

0xb803,	// (0x0005c565) bg_button_pane_cp14

0x1e03,	// (0x00052b65) phacti_button_pane_t1

0x9fba,	// (0x0005ad1c) main_touch_calib_button_pane_ParamLimits

0x9fba,	// (0x0005ad1c) main_touch_calib_button_pane

0xbfa0,	// (0x0005cd02) bg_button_pane_cp18_ParamLimits

0xbfa0,	// (0x0005cd02) bg_button_pane_cp18

0x1e11,	// (0x00052b73) main_touch_calib_button_pane_t1_ParamLimits

0x1e11,	// (0x00052b73) main_touch_calib_button_pane_t1

0x1e6c,	// (0x00052bce) main_touch_calib_button_pane_t2_ParamLimits

0x1e6c,	// (0x00052bce) main_touch_calib_button_pane_t2

0x0001,

0xfcd0,	// (0x00060a32) main_touch_calib_button_pane_t_ParamLimits

0xfcd0,	// (0x00060a32) main_touch_calib_button_pane_t

0xb803,	// (0x0005c565) cell_ncimui_button_pane

0xb803,	// (0x0005c565) bg_button_pane_cp032

0x1e8a,	// (0x00052bec) cell_ncimui_button_pane_t1

0x7486,	// (0x000581e8) image3_infobar_pane_ParamLimits

0x7486,	// (0x000581e8) image3_infobar_pane

0x95da,	// (0x0005a33c) fs_bigclock_status_pane_ParamLimits

0x95da,	// (0x0005a33c) fs_bigclock_status_pane

0x95e7,	// (0x0005a349) main_fs_bigclock_clock_pane_ParamLimits

0x95e7,	// (0x0005a349) main_fs_bigclock_clock_pane

0x95fb,	// (0x0005a35d) main_fs_bigclock_indi_pane_ParamLimits

0x95fb,	// (0x0005a35d) main_fs_bigclock_indi_pane

0x9623,	// (0x0005a385) main_fs_bigclock_swipe_pane_ParamLimits

0x9623,	// (0x0005a385) main_fs_bigclock_swipe_pane

0xb803,	// (0x0005c565) main_fs_clock_dumped_data

0x1715,	// (0x00052477) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1715,	// (0x00052477) list_single_fs_bigclock_indicator_pane_g1

0x1731,	// (0x00052493) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1731,	// (0x00052493) list_single_fs_bigclock_indicator_pane_g2

0x174b,	// (0x000524ad) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x174b,	// (0x000524ad) list_single_fs_bigclock_indicator_pane_g3

0x1765,	// (0x000524c7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1765,	// (0x000524c7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb74,	// (0x000608d6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb74,	// (0x000608d6) list_single_fs_bigclock_indicator_pane_g

0x1790,	// (0x000524f2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1790,	// (0x000524f2) list_single_fs_bigclock_indicator_pane_t1

0x17b8,	// (0x0005251a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x17b8,	// (0x0005251a) list_single_fs_bigclock_indicator_pane_t2

0x17e0,	// (0x00052542) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x17e0,	// (0x00052542) list_single_fs_bigclock_indicator_pane_t3

0x1808,	// (0x0005256a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1808,	// (0x0005256a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7f,	// (0x000608e1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7f,	// (0x000608e1) list_single_fs_bigclock_indicator_pane_t

0x1e98,	// (0x00052bfa) image3_infobar_fav_pane_ParamLimits

0x1e98,	// (0x00052bfa) image3_infobar_fav_pane

0x1ea8,	// (0x00052c0a) image3_infobar_loc_pane_ParamLimits

0x1ea8,	// (0x00052c0a) image3_infobar_loc_pane

0x1ebc,	// (0x00052c1e) image3_infobar_time_pane_ParamLimits

0x1ebc,	// (0x00052c1e) image3_infobar_time_pane

0xbf42,	// (0x0005cca4) image3_infobar_time_pane_g1

0x1ecc,	// (0x00052c2e) image3_infobar_time_pane_t1

0xbf42,	// (0x0005cca4) image3_infobar_loc_pane_g1

0x1eda,	// (0x00052c3c) image3_infobar_loc_pane_g2

0x0001,

0xfcd5,	// (0x00060a37) image3_infobar_loc_pane_g

0x1ee2,	// (0x00052c44) image3_infobar_loc_pane_t1

0xbf42,	// (0x0005cca4) image3_infobar_fav_pane_g1

0x1ef0,	// (0x00052c52) image3_infobar_fav_pane_g2

0x0001,

0xfcda,	// (0x00060a3c) image3_infobar_fav_pane_g

0x1ef8,	// (0x00052c5a) fs_bigclock_status_battery_pane

0x1f01,	// (0x00052c63) fs_bigclock_status_signal_pane

0x1f0a,	// (0x00052c6c) fs_bigclock_status_title_pane

0x1f13,	// (0x00052c75) fs_bigclock_status_signal_pane_g1

0x1f1c,	// (0x00052c7e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcdf,	// (0x00060a41) fs_bigclock_status_signal_pane_g

0x1f24,	// (0x00052c86) fs_bigclock_status_battery_pane_g1

0x1f2d,	// (0x00052c8f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfce4,	// (0x00060a46) fs_bigclock_status_battery_pane_g

0x1f35,	// (0x00052c97) fs_bigclock_status_title_pane_t1

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g1

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g2

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g3

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfce9,	// (0x00060a4b) main_fs_bigclock_clock_pane_g

0x9fd6,	// (0x0005ad38) main_fs_bigclock_clock_pane_t1

0x9fea,	// (0x0005ad4c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf2,	// (0x00060a54) main_fs_bigclock_clock_pane_t

0x1f43,	// (0x00052ca5) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1f43,	// (0x00052ca5) list_single_fs_bigclock_indicator_pane

0x1f54,	// (0x00052cb6) list_single_fs_bigclock_pane_ParamLimits

0x1f54,	// (0x00052cb6) list_single_fs_bigclock_pane

0x1f7a,	// (0x00052cdc) main_fs_bigclock_indicator_pane_t1

0x1f89,	// (0x00052ceb) list_single_fs_bigclock_pane_g1

0x1f91,	// (0x00052cf3) list_single_fs_bigclock_pane_t1

0xbf42,	// (0x0005cca4) main_fs_bigclock_swipe_pane_g1

0x1fd4,	// (0x00052d36) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd03,	// (0x00060a65) main_fs_bigclock_swipe_pane_g

0x1fdc,	// (0x00052d3e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1fdc,	// (0x00052d3e) main_fs_bigclock_swipe_pane_t1

0x51ba,	// (0x00055f1c) call_type_pane_ParamLimits

0xb803,	// (0x0005c565) main_btmg_pane

0x059b,	// (0x000512fd) list_single_cale_mrui_row_pane_g2_ParamLimits

0x059b,	// (0x000512fd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc76,	// (0x000609d8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc76,	// (0x000609d8) list_single_cale_mrui_row_pane_g

0x0621,	// (0x00051383) list_recal_vselct_arw_lo_pane

0x1dce,	// (0x00052b30) list_recal_vselct_arw_up_pane

0x0629,	// (0x0005138b) list_recal_vselct_pane

0xa041,	// (0x0005ada3) btmg_button_pane

0xa04d,	// (0x0005adaf) main_btmg_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp044

0x1ff9,	// (0x00052d5b) btmg_button_pane_t1

0xe439,	// (0x0005f19b) aid_listscroll_gen

0xbe9d,	// (0x0005cbff) main_cntbar_detail_pane

0x1aec,	// (0x0005284e) list_cmail_folder_pane

0x1b03,	// (0x00052865) sp_fs_scroll_pane_cp03_ParamLimits

0x9bb7,	// (0x0005a919) list_single_fs_dyc_pane_cp01_ParamLimits

0x9bb7,	// (0x0005a919) list_single_fs_dyc_pane_cp01

0x2007,	// (0x00052d69) aid_size_cmail_indent

0x06a0,	// (0x00051402) list_single_dyc_row_pane_cp01

0xa075,	// (0x0005add7) cntbar_detail_list_pane_ParamLimits

0xa075,	// (0x0005add7) cntbar_detail_list_pane

0xa0af,	// (0x0005ae11) main_cntbar_detail_cont_pane_ParamLimits

0xa0af,	// (0x0005ae11) main_cntbar_detail_cont_pane

0x51ae,	// (0x00055f10) scroll_pane_cp032_ParamLimits

0x51ae,	// (0x00055f10) scroll_pane_cp032

0xa0bb,	// (0x0005ae1d) cntbar_detail_list_event_pane_ParamLimits

0xa0bb,	// (0x0005ae1d) cntbar_detail_list_event_pane

0xa081,	// (0x0005ade3) cntbar_detail_list_shct_pane

0xc9a0,	// (0x0005d702) aid_list_gen

0x2010,	// (0x00052d72) aid_scroll

0x2019,	// (0x00052d7b) aid_size_touch_scroll_bar

0x2022,	// (0x00052d84) aid_list_double

0xa0cf,	// (0x0005ae31) aid_list_single

0xa0d8,	// (0x0005ae3a) aid_list_single_lg

0x06a9,	// (0x0005140b) aid_list_z_g_a_sm

0x06b1,	// (0x00051413) aid_list_z_g_d

0x06b9,	// (0x0005141b) aid_txt_z_prm

0x06c7,	// (0x00051429) aid_txt_z_prm_cp01

0x06d5,	// (0x00051437) aid_txt_z_sec

0xa0e1,	// (0x0005ae43) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa0e1,	// (0x0005ae43) main_cntbar_detail_cont_pane_g1

0xa0ee,	// (0x0005ae50) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa0ee,	// (0x0005ae50) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd08,	// (0x00060a6a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd08,	// (0x00060a6a) main_cntbar_detail_cont_pane_g

0x202b,	// (0x00052d8d) main_cntbar_detail_cont_pane_t1

0x2039,	// (0x00052d9b) main_cntbar_detail_cont_pane_t2

0x2047,	// (0x00052da9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd0d,	// (0x00060a6f) main_cntbar_detail_cont_pane_t

0xa0fa,	// (0x0005ae5c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa0fa,	// (0x0005ae5c) cell_cntbar_detail_list_shct_pane

0x2055,	// (0x00052db7) cntbar_detail_list_shct_pane_g1

0x205e,	// (0x00052dc0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd14,	// (0x00060a76) cntbar_detail_list_shct_pane_g

0xa10e,	// (0x0005ae70) cntbar_detail_list_event_pane_g1_ParamLimits

0xa10e,	// (0x0005ae70) cntbar_detail_list_event_pane_g1

0xa11a,	// (0x0005ae7c) cntbar_detail_list_event_pane_g2_ParamLimits

0xa11a,	// (0x0005ae7c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd19,	// (0x00060a7b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd19,	// (0x00060a7b) cntbar_detail_list_event_pane_g

0xa186,	// (0x0005aee8) cntbar_detail_list_event_pane_t1_ParamLimits

0xa186,	// (0x0005aee8) cntbar_detail_list_event_pane_t1

0xa19b,	// (0x0005aefd) cntbar_detail_list_event_pane_t2_ParamLimits

0xa19b,	// (0x0005aefd) cntbar_detail_list_event_pane_t2

0x0002,

0xfd26,	// (0x00060a88) cntbar_detail_list_event_pane_t_ParamLimits

0xfd26,	// (0x00060a88) cntbar_detail_list_event_pane_t

0xbf42,	// (0x0005cca4) cell_cntbar_detail_list_shct_pane_g1

0xd0a9,	// (0x0005de0b) navi_pane_mv_g3

0xbe9d,	// (0x0005cbff) main_cntbar_detail_pane_ParamLimits

0xb803,	// (0x0005c565) main_notif_wgt_pane

0x712e,	// (0x00057e90) aid_tch_main_mp4_pane_g4

0x7401,	// (0x00058163) popup_slider_window_cp02

0x0617,	// (0x00051379) list_recal_day_event_pane

0xa055,	// (0x0005adb7) cntbar_detail_btn_pane_ParamLimits

0xa055,	// (0x0005adb7) cntbar_detail_btn_pane

0xa065,	// (0x0005adc7) cntbar_detail_btn_pane_cp01_ParamLimits

0xa065,	// (0x0005adc7) cntbar_detail_btn_pane_cp01

0xa081,	// (0x0005ade3) cntbar_detail_list_shct_pane_ParamLimits

0xa08d,	// (0x0005adef) cntbar_detail_pane_g1_ParamLimits

0xa08d,	// (0x0005adef) cntbar_detail_pane_g1

0xa099,	// (0x0005adfb) cntbar_detail_pane_t1_ParamLimits

0xa099,	// (0x0005adfb) cntbar_detail_pane_t1

0xa126,	// (0x0005ae88) cntbar_detail_list_event_pane_g3_ParamLimits

0xa126,	// (0x0005ae88) cntbar_detail_list_event_pane_g3

0xa13e,	// (0x0005aea0) cntbar_detail_list_event_pane_g4_ParamLimits

0xa13e,	// (0x0005aea0) cntbar_detail_list_event_pane_g4

0xa156,	// (0x0005aeb8) cntbar_detail_list_event_pane_g5_ParamLimits

0xa156,	// (0x0005aeb8) cntbar_detail_list_event_pane_g5

0xa16e,	// (0x0005aed0) cntbar_detail_list_event_pane_g6_ParamLimits

0xa16e,	// (0x0005aed0) cntbar_detail_list_event_pane_g6

0xa1b0,	// (0x0005af12) cntbar_detail_list_event_pane_t3_ParamLimits

0xa1b0,	// (0x0005af12) cntbar_detail_list_event_pane_t3

0xa1c2,	// (0x0005af24) popup_notif_wgt_window_ParamLimits

0xa1c2,	// (0x0005af24) popup_notif_wgt_window

0xa1d2,	// (0x0005af34) popup_submenu_window_cp01_ParamLimits

0xa1d2,	// (0x0005af34) popup_submenu_window_cp01

0xc707,	// (0x0005d469) bg_popup_window_pane_cp10

0x2067,	// (0x00052dc9) listscroll_notif_wgt_pane

0x2079,	// (0x00052ddb) list_notif_wgt_window

0x2082,	// (0x00052de4) scroll_pane_cp033

0xa1e0,	// (0x0005af42) list_notif_wgt_row_pane_ParamLimits

0xa1e0,	// (0x0005af42) list_notif_wgt_row_pane

0x208b,	// (0x00052ded) aid_size_list_notif_wgt_del

0x2098,	// (0x00052dfa) list_notif_wgt_row_pane_g1

0x20a4,	// (0x00052e06) list_notif_wgt_row_pane_g2

0x20b3,	// (0x00052e15) list_notif_wgt_row_pane_g3

0x0002,

0xfd2d,	// (0x00060a8f) list_notif_wgt_row_pane_g

0x20c0,	// (0x00052e22) list_notif_wgt_row_pane_t1

0x20d6,	// (0x00052e38) list_notif_wgt_row_pane_t2

0x20e8,	// (0x00052e4a) list_notif_wgt_row_pane_t3

0x0002,

0xfd34,	// (0x00060a96) list_notif_wgt_row_pane_t

0x0b80,	// (0x000518e2) list_recal_day_event_pane_g1

0x20fa,	// (0x00052e5c) list_recal_day_event_pane_t1

0xb803,	// (0x0005c565) bg_button_pane_cp045

0xa1f2,	// (0x0005af54) cntbar_detail_btn_pane_t1

0xd26e,	// (0x0005dfd0) main_callh_pane_ParamLimits

0xd26e,	// (0x0005dfd0) main_callh_pane

0xb803,	// (0x0005c565) main_coverflow0_pane

0xb803,	// (0x0005c565) main_wgtman_pane

0x963b,	// (0x0005a39d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x963b,	// (0x0005a39d) main_fs_bigclock_unlock_btn_pane

0x9b1c,	// (0x0005a87e) bg_button_pane_cp16

0x9b2c,	// (0x0005a88e) cell_tport_appsw_pane_g3

0xa200,	// (0x0005af62) cf0_flow_pane_ParamLimits

0xa200,	// (0x0005af62) cf0_flow_pane

0x2109,	// (0x00052e6b) listscroll_cf0_pane

0x2114,	// (0x00052e76) main_cf0_pane_g1

0xa20f,	// (0x0005af71) main_cf0_pane_t1_ParamLimits

0xa20f,	// (0x0005af71) main_cf0_pane_t1

0xa223,	// (0x0005af85) main_cf0_pane_t2_ParamLimits

0xa223,	// (0x0005af85) main_cf0_pane_t2

0x0001,

0xfd40,	// (0x00060aa2) main_cf0_pane_t_ParamLimits

0xfd40,	// (0x00060aa2) main_cf0_pane_t

0x2126,	// (0x00052e88) scroll_pane_cp11

0xa237,	// (0x0005af99) cf0_flow_pane_g1

0xa23f,	// (0x0005afa1) cf0_flow_pane_g2

0x0001,

0xfd45,	// (0x00060aa7) cf0_flow_pane_g

0xa247,	// (0x0005afa9) cf0_flow_pane_t1

0xb803,	// (0x0005c565) main_call6_pane

0xb803,	// (0x0005c565) main_calllock_pane

0xa255,	// (0x0005afb7) call6_btn_grp_pane_ParamLimits

0xa255,	// (0x0005afb7) call6_btn_grp_pane

0xa264,	// (0x0005afc6) call6_pane_g1_ParamLimits

0xa264,	// (0x0005afc6) call6_pane_g1

0xa274,	// (0x0005afd6) popup_call6_1st_window_ParamLimits

0xa274,	// (0x0005afd6) popup_call6_1st_window

0xa282,	// (0x0005afe4) popup_call6_2nd_window_ParamLimits

0xa282,	// (0x0005afe4) popup_call6_2nd_window

0xa290,	// (0x0005aff2) cell_call6_btn_pane_ParamLimits

0xa290,	// (0x0005aff2) cell_call6_btn_pane

0xc707,	// (0x0005d469) bg_popup_call2_in_pane_cp03

0x2131,	// (0x00052e93) popup_call6_1st_window_g1

0x2139,	// (0x00052e9b) popup_call6_1st_window_g2

0x2141,	// (0x00052ea3) popup_call6_1st_window_g3

0x0002,

0xfd4a,	// (0x00060aac) popup_call6_1st_window_g

0x2149,	// (0x00052eab) popup_call6_1st_window_t1

0x2158,	// (0x00052eba) popup_call6_1st_window_t2

0x2166,	// (0x00052ec8) popup_call6_1st_window_t3

0x0002,

0xfd51,	// (0x00060ab3) popup_call6_1st_window_t

0xc707,	// (0x0005d469) bg_popup_call2_in_pane_cp04

0x2174,	// (0x00052ed6) popup_call6_2nd_window_g1

0x217c,	// (0x00052ede) popup_call6_2nd_window_g2

0x2184,	// (0x00052ee6) popup_call6_2nd_window_g3

0x0002,

0xfd58,	// (0x00060aba) popup_call6_2nd_window_g

0x218c,	// (0x00052eee) popup_call6_2nd_window_t1

0x34cf,	// (0x00054231) bg_button_pane_cp15

0xa29f,	// (0x0005b001) cell_call6_btn_pane_g1

0xa2a8,	// (0x0005b00a) cell_call6_btn_pane_t1

0xa2b7,	// (0x0005b019) listscroll_wgtman_pane_ParamLimits

0xa2b7,	// (0x0005b019) listscroll_wgtman_pane

0xa2d3,	// (0x0005b035) wgtman_btn_pane_ParamLimits

0xa2d3,	// (0x0005b035) wgtman_btn_pane

0xcebd,	// (0x0005dc1f) aid_scroll_copy1

0x21b3,	// (0x00052f15) list_wgtman_pane

0xa308,	// (0x0005b06a) wgtman_btn_pane_g1_ParamLimits

0xa308,	// (0x0005b06a) wgtman_btn_pane_g1

0xa330,	// (0x0005b092) wgtman_btn_pane_t1_ParamLimits

0xa330,	// (0x0005b092) wgtman_btn_pane_t1

0x21bd,	// (0x00052f1f) wgtman_btn_pane_t2_ParamLimits

0x21bd,	// (0x00052f1f) wgtman_btn_pane_t2

0x0001,

0xfd5f,	// (0x00060ac1) wgtman_btn_pane_t_ParamLimits

0xfd5f,	// (0x00060ac1) wgtman_btn_pane_t

0xa367,	// (0x0005b0c9) listrow_wgtman_pane_ParamLimits

0xa367,	// (0x0005b0c9) listrow_wgtman_pane

0xa383,	// (0x0005b0e5) listrow_wgtman_pane_g1

0xa390,	// (0x0005b0f2) listrow_wgtman_pane_g2

0x0001,

0xfd64,	// (0x00060ac6) listrow_wgtman_pane_g

0xa3ae,	// (0x0005b110) listrow_wgtman_pane_t1

0xa3c6,	// (0x0005b128) listrow_wgtman_pane_t2

0x0001,

0xfd69,	// (0x00060acb) listrow_wgtman_pane_t

0xa3ec,	// (0x0005b14e) wait_bar_pane_cp09

0x21d4,	// (0x00052f36) main_calllock_btn_pane

0x21de,	// (0x00052f40) main_calllock_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp17

0x219b,	// (0x00052efd) main_calllock_btn_pane_g1

0x21e6,	// (0x00052f48) main_calllock_btn_pane_t1

0xb803,	// (0x0005c565) main_dialer3_pane

0xb803,	// (0x0005c565) main_fmrd2_pane

0xbf42,	// (0x0005cca4) main_fs_bigclock_unlock_btn_pane_g1

0xa406,	// (0x0005b168) main_fs_bigclock_unlock_btn_pane_t1

0xa414,	// (0x0005b176) area_fmrd2_info_pane_ParamLimits

0xa414,	// (0x0005b176) area_fmrd2_info_pane

0xa422,	// (0x0005b184) area_fmrd2_visual_pane_ParamLimits

0xa422,	// (0x0005b184) area_fmrd2_visual_pane

0xa430,	// (0x0005b192) fmrd2_indi_pane_ParamLimits

0xa430,	// (0x0005b192) fmrd2_indi_pane

0xa43d,	// (0x0005b19f) area_fmrd2_visual_pane_g1

0xa445,	// (0x0005b1a7) area_fmrd2_visual_pane_t1

0xa455,	// (0x0005b1b7) area_fmrd2_visual_pane_t2

0xa465,	// (0x0005b1c7) area_fmrd2_visual_pane_t3

0x0002,

0xfd73,	// (0x00060ad5) area_fmrd2_visual_pane_t

0xa475,	// (0x0005b1d7) area_fmrd2_info_pane_g1

0xa47d,	// (0x0005b1df) area_fmrd2_info_pane_t1

0xa48d,	// (0x0005b1ef) area_fmrd2_info_pane_t2

0xa49d,	// (0x0005b1ff) area_fmrd2_info_pane_t3

0xa4ad,	// (0x0005b20f) area_fmrd2_info_pane_t4

0x0003,

0xfd7a,	// (0x00060adc) area_fmrd2_info_pane_t

0xa4bb,	// (0x0005b21d) fmrd2_indi_pane_t1

0xa4cb,	// (0x0005b22d) fmrd2_indi_pane_t2

0xa4db,	// (0x0005b23d) fmrd2_indi_pane_t3

0x0002,

0xfd83,	// (0x00060ae5) fmrd2_indi_pane_t

0x1774,	// (0x000524d6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1774,	// (0x000524d6) list_single_fs_bigclock_indicator_pane_g5

0x1825,	// (0x00052587) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1825,	// (0x00052587) list_single_fs_bigclock_indicator_pane_t5

0x070d,	// (0x0005146f) aid_cell_bcale_month_pane_ParamLimits

0x070d,	// (0x0005146f) aid_cell_bcale_month_pane

0x070d,	// (0x0005146f) bcale_month_pane_ParamLimits

0x070d,	// (0x0005146f) bcale_month_pane

0x0a44,	// (0x000517a6) bcale_preview_pane_ParamLimits

0x0a44,	// (0x000517a6) bcale_preview_pane

0x1f91,	// (0x00052cf3) list_single_fs_bigclock_pane_t1_ParamLimits

0x1fb0,	// (0x00052d12) list_single_fs_bigclock_pane_t2_ParamLimits

0x1fb0,	// (0x00052d12) list_single_fs_bigclock_pane_t2

0x0001,

0xfcfe,	// (0x00060a60) list_single_fs_bigclock_pane_t_ParamLimits

0xfcfe,	// (0x00060a60) list_single_fs_bigclock_pane_t

0xa3fe,	// (0x0005b160) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd6e,	// (0x00060ad0) main_fs_bigclock_unlock_btn_pane_g

0xa4e9,	// (0x0005b24b) aid_dia3_key_size_ParamLimits

0xa4e9,	// (0x0005b24b) aid_dia3_key_size

0xa4f5,	// (0x0005b257) aid_dia3_listrow_size_ParamLimits

0xa4f5,	// (0x0005b257) aid_dia3_listrow_size

0xa505,	// (0x0005b267) dia3_keypad_fun_pane_ParamLimits

0xa505,	// (0x0005b267) dia3_keypad_fun_pane

0xa517,	// (0x0005b279) dia3_keypad_num_pane_ParamLimits

0xa517,	// (0x0005b279) dia3_keypad_num_pane

0xa529,	// (0x0005b28b) dia3_listscroll_pane_ParamLimits

0xa529,	// (0x0005b28b) dia3_listscroll_pane

0xa537,	// (0x0005b299) dia3_numentry_pane_ParamLimits

0xa537,	// (0x0005b299) dia3_numentry_pane

0x21f5,	// (0x00052f57) dia3_list_pane

0x2200,	// (0x00052f62) scroll_pane_cp12

0xb803,	// (0x0005c565) bg_dia3_numentry_pane

0xa545,	// (0x0005b2a7) dia3_numentry_pane_t1

0xa554,	// (0x0005b2b6) cell_dia3_key_num_pane

0xa55c,	// (0x0005b2be) cell_dia3_key0_fun_pane_ParamLimits

0xa55c,	// (0x0005b2be) cell_dia3_key0_fun_pane

0xa569,	// (0x0005b2cb) cell_dia3_key1_fun_pane_ParamLimits

0xa569,	// (0x0005b2cb) cell_dia3_key1_fun_pane

0xa576,	// (0x0005b2d8) dia3_listrow_pane

0x14c7,	// (0x00052229) bg_dia3_numentry_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp21

0x220b,	// (0x00052f6d) cell_dia3_key_num_pane_t1

0x2219,	// (0x00052f7b) cell_dia3_key_num_pane_t2

0x2228,	// (0x00052f8a) cell_dia3_key_num_pane_t3

0x2237,	// (0x00052f99) cell_dia3_key_num_pane_t4

0x0003,

0xfd8a,	// (0x00060aec) cell_dia3_key_num_pane_t

0xb803,	// (0x0005c565) bg_button_pane_cp19

0xa583,	// (0x0005b2e5) cell_dia3_key0_fun_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp20

0xa58b,	// (0x0005b2ed) cell_dia3_key1_fun_pane_g1

0x1e33,	// (0x00052b95) area_left_week_number_pane

0x1e33,	// (0x00052b95) area_top_day_name_pane

0x1e33,	// (0x00052b95) frame_month_view_pane

0x1e33,	// (0x00052b95) grid_month_view_pane

0x1e33,	// (0x00052b95) cell_top_day_name_pane_ParamLimits

0x1e33,	// (0x00052b95) cell_top_day_name_pane

0x1e33,	// (0x00052b95) cell_area_left_week_number_pane_ParamLimits

0x1e33,	// (0x00052b95) cell_area_left_week_number_pane

0x1e33,	// (0x00052b95) cell_month_view_pane_ParamLimits

0x1e33,	// (0x00052b95) cell_month_view_pane

0x1e27,	// (0x00052b89) frm_month_g1

0x1e27,	// (0x00052b89) frm_month_g2

0x1e27,	// (0x00052b89) frm_month_g3

0x1e27,	// (0x00052b89) frm_month_g4

0x1e27,	// (0x00052b89) frm_month_g5

0x1e27,	// (0x00052b89) frm_month_g6

0x1e27,	// (0x00052b89) frm_month_g7

0x1e27,	// (0x00052b89) frm_month_g8

0x1e27,	// (0x00052b89) frm_month_g9

0x1e27,	// (0x00052b89) frm_month_g10

0x1e27,	// (0x00052b89) frm_month_g11

0x1e27,	// (0x00052b89) frm_month_g12

0x1e27,	// (0x00052b89) frm_month_g13

0x1e27,	// (0x00052b89) frm_month_g14

0x1e27,	// (0x00052b89) frm_month_g15

0x1e27,	// (0x00052b89) frm_month_g16

0x000f,

0xfd93,	// (0x00060af5) frm_month_g

0x2246,	// (0x00052fa8) cell_top_day_name_pane_t1

0x1e27,	// (0x00052b89) cell_area_left_week_number_pane_g1

0x2246,	// (0x00052fa8) cell_area_left_week_number_pane_t1

0x1e27,	// (0x00052b89) cell_month_view_pane_g1

0x2246,	// (0x00052fa8) cell_month_view_pane_t1

0xb803,	// (0x0005c565) main_fps_pane

0x19e9,	// (0x0005274b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x19e9,	// (0x0005274b) cmail_ddmenu_btn02_pane_cp1

0x1a05,	// (0x00052767) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1a05,	// (0x00052767) cmail_ddmenu_btn02_pane_cp2

0x9f31,	// (0x0005ac93) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9f31,	// (0x0005ac93) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb1,	// (0x00060a13) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb1,	// (0x00060a13) cmail_ddmenu_btn02_pane_g

0x9f4f,	// (0x0005acb1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9f4f,	// (0x0005acb1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcb6,	// (0x00060a18) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcb6,	// (0x00060a18) cmail_ddmenu_btn02_pane_t

0xa593,	// (0x0005b2f5) fps_text_pane_ParamLimits

0xa593,	// (0x0005b2f5) fps_text_pane

0xa5a0,	// (0x0005b302) main_fps_pane_g1_ParamLimits

0xa5a0,	// (0x0005b302) main_fps_pane_g1

0xa5ae,	// (0x0005b310) wait_bar_pane_cp010_ParamLimits

0xa5ae,	// (0x0005b310) wait_bar_pane_cp010

0xa5ba,	// (0x0005b31c) fps_text_pane_t1_ParamLimits

0xa5ba,	// (0x0005b31c) fps_text_pane_t1

0x780e,	// (0x00058570) cam4_image_uncrop_pane_g1

0x7817,	// (0x00058579) cam4_image_uncrop_pane_g2

0x7820,	// (0x00058582) cam4_image_uncrop_pane_g3

0x7829,	// (0x0005858b) cam4_image_uncrop_pane_g4

0x0003,

0xf7f8,	// (0x0006055a) cam4_image_uncrop_pane_g

0xa576,	// (0x0005b2d8) dia3_listrow_pane_ParamLimits

0xb803,	// (0x0005c565) main_phob2_pane

0x9afe,	// (0x0005a860) cell_tport_appsw_pane_cp02_ParamLimits

0x9afe,	// (0x0005a860) cell_tport_appsw_pane_cp02

0x9b0d,	// (0x0005a86f) cell_tport_appsw_pane_cp03_ParamLimits

0x9b0d,	// (0x0005a86f) cell_tport_appsw_pane_cp03

0xb803,	// (0x0005c565) phob2_contact_card_pane

0xb803,	// (0x0005c565) phob2_listscroll_pane

0x2258,	// (0x00052fba) phob2_list_pane

0x1d92,	// (0x00052af4) scroll_pane_cp034

0xa5d3,	// (0x0005b335) phob2_cc_data_pane_ParamLimits

0xa5d3,	// (0x0005b335) phob2_cc_data_pane

0xa5ed,	// (0x0005b34f) phob2_cc_listscroll_pane_ParamLimits

0xa5ed,	// (0x0005b34f) phob2_cc_listscroll_pane

0xa367,	// (0x0005b0c9) list_double_large_graphic_phob2_pane_ParamLimits

0xa367,	// (0x0005b0c9) list_double_large_graphic_phob2_pane

0xa607,	// (0x0005b369) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa607,	// (0x0005b369) list_double_large_graphic_phob2_pane_g1

0xa614,	// (0x0005b376) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa614,	// (0x0005b376) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdb4,	// (0x00060b16) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdb4,	// (0x00060b16) list_double_large_graphic_phob2_pane_g

0xa63a,	// (0x0005b39c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa63a,	// (0x0005b39c) list_double_large_graphic_phob2_pane_t1

0xa64f,	// (0x0005b3b1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa64f,	// (0x0005b3b1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdbd,	// (0x00060b1f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdbd,	// (0x00060b1f) list_double_large_graphic_phob2_pane_t

0xbef6,	// (0x0005cc58) list_highlight_pane_cp024

0x2260,	// (0x00052fc2) phob2_cc_button_pane

0xa664,	// (0x0005b3c6) phob2_cc_data_pane_g1_ParamLimits

0xa664,	// (0x0005b3c6) phob2_cc_data_pane_g1

0xa673,	// (0x0005b3d5) phob2_cc_data_pane_g2_ParamLimits

0xa673,	// (0x0005b3d5) phob2_cc_data_pane_g2

0x0001,

0xfdc2,	// (0x00060b24) phob2_cc_data_pane_g_ParamLimits

0xfdc2,	// (0x00060b24) phob2_cc_data_pane_g

0xa682,	// (0x0005b3e4) phob2_cc_data_pane_t1_ParamLimits

0xa682,	// (0x0005b3e4) phob2_cc_data_pane_t1

0xa697,	// (0x0005b3f9) phob2_cc_data_pane_t2_ParamLimits

0xa697,	// (0x0005b3f9) phob2_cc_data_pane_t2

0xa6ac,	// (0x0005b40e) phob2_cc_data_pane_t3_ParamLimits

0xa6ac,	// (0x0005b40e) phob2_cc_data_pane_t3

0x0002,

0xfdc7,	// (0x00060b29) phob2_cc_data_pane_t_ParamLimits

0xfdc7,	// (0x00060b29) phob2_cc_data_pane_t

0x2268,	// (0x00052fca) phob2_cc_list_pane_ParamLimits

0x2268,	// (0x00052fca) phob2_cc_list_pane

0x1128,	// (0x00051e8a) scroll_pane_cp035_ParamLimits

0x1128,	// (0x00051e8a) scroll_pane_cp035

0xbe9d,	// (0x0005cbff) bg_button_pane_cp033

0x2274,	// (0x00052fd6) phob2_cc_button_pane_g1

0x2280,	// (0x00052fe2) phob2_cc_button_pane_t1

0x2295,	// (0x00052ff7) phob2_cc_button_pane_t2

0x0001,

0xfdce,	// (0x00060b30) phob2_cc_button_pane_t

0xa6c1,	// (0x0005b423) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa6c1,	// (0x0005b423) list_double_large_graphic_phob2_cc_pane

0xa735,	// (0x0005b497) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa735,	// (0x0005b497) list_double_large_graphic_phob2_cc_pane_g1

0xa746,	// (0x0005b4a8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa746,	// (0x0005b4a8) list_double_large_graphic_phob2_cc_pane_g2

0xa752,	// (0x0005b4b4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa752,	// (0x0005b4b4) list_double_large_graphic_phob2_cc_pane_g3

0xa75e,	// (0x0005b4c0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa75e,	// (0x0005b4c0) list_double_large_graphic_phob2_cc_pane_g4

0xa76a,	// (0x0005b4cc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa76a,	// (0x0005b4cc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdd3,	// (0x00060b35) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdd3,	// (0x00060b35) list_double_large_graphic_phob2_cc_pane_g

0xa776,	// (0x0005b4d8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa776,	// (0x0005b4d8) list_double_large_graphic_phob2_cc_pane_t1

0xa79f,	// (0x0005b501) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa79f,	// (0x0005b501) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdde,	// (0x00060b40) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdde,	// (0x00060b40) list_double_large_graphic_phob2_cc_pane_t

0x22a7,	// (0x00053009) list_highlight_pane_cp025_ParamLimits

0x22a7,	// (0x00053009) list_highlight_pane_cp025

0xbe9d,	// (0x0005cbff) bg_button_pane_cp033_ParamLimits

0x2274,	// (0x00052fd6) phob2_cc_button_pane_g1_ParamLimits

0x2280,	// (0x00052fe2) phob2_cc_button_pane_t1_ParamLimits

0x2295,	// (0x00052ff7) phob2_cc_button_pane_t2_ParamLimits

0xfdce,	// (0x00060b30) phob2_cc_button_pane_t_ParamLimits

0x34c3,	// (0x00054225) popup_wgtman_window

0x095a,	// (0x000516bc) scroll_pane_cp038

0xa2f0,	// (0x0005b052) wgtman_btn_pane_cp_01_ParamLimits

0xa2f0,	// (0x0005b052) wgtman_btn_pane_cp_01

0x22b5,	// (0x00053017) wgtman_content_pane

0x22be,	// (0x00053020) wgtman_heading_pane

0xb803,	// (0x0005c565) bg_heading_pane_cp02

0x22c7,	// (0x00053029) wgtman_heading_pane_g1

0x22cf,	// (0x00053031) wgtman_heading_pane_t1

0x22dd,	// (0x0005303f) scroll_pane_cp036

0x22e5,	// (0x00053047) wgtman_list_pane

0x1e51,	// (0x00052bb3) wgtman_list_pane_t1_ParamLimits

0x1e51,	// (0x00052bb3) wgtman_list_pane_t1

0x776d,	// (0x000584cf) cam4_grid_pane

0x857a,	// (0x000592dc) bg_button_pane_cp015_ParamLimits

0x858f,	// (0x000592f1) bg_button_pane_cp016_ParamLimits

0x859b,	// (0x000592fd) bg_button_pane_cp017_ParamLimits

0x85f3,	// (0x00059355) popup_vitu2_query_window_g3_ParamLimits

0x85f3,	// (0x00059355) popup_vitu2_query_window_g3

0x8694,	// (0x000593f6) popup_vitu2_query_window_t6_ParamLimits

0x8694,	// (0x000593f6) popup_vitu2_query_window_t6

0x86bf,	// (0x00059421) popup_vitu2_query_window_t7_ParamLimits

0x86bf,	// (0x00059421) popup_vitu2_query_window_t7

0x1e3f,	// (0x00052ba1) cam4_grid_pane_g1

0x1e48,	// (0x00052baa) cam4_grid_pane_g2

0x22ed,	// (0x0005304f) cam4_grid_pane_g3

0x22f6,	// (0x00053058) cam4_grid_pane_g4

0x0003,

0xfde3,	// (0x00060b45) cam4_grid_pane_g

0x3f1a,	// (0x00054c7c) aid_placing_vt_slider_lsc_ParamLimits

0x425a,	// (0x00054fbc) vidtel_button_pane_ParamLimits

0x425a,	// (0x00054fbc) vidtel_button_pane

0xb803,	// (0x0005c565) bg_button_pane_cp034

0x2301,	// (0x00053063) vidtel_button_pane_g1

0x2309,	// (0x0005306b) vidtel_button_pane_t1

0x0b70,	// (0x000518d2) aid_size_vtel_slider_touch

0x1128,	// (0x00051e8a) scroll_pane_cp039

0x93f3,	// (0x0005a155) ncim_query_button_pane_cp01_ParamLimits

0x9412,	// (0x0005a174) ncimui_query_pane_g1_ParamLimits

0xbe9d,	// (0x0005cbff) input_focus_pane_cp012_ParamLimits

0x150d,	// (0x0005226f) ncim_query_entry_pane_t1_ParamLimits

0x1128,	// (0x00051e8a) scroll_pane_cp039_ParamLimits

0xcf94,	// (0x0005dcf6) navi_pane_bcale_mc_g1

0xcf9c,	// (0x0005dcfe) navi_pane_bcale_mc_t1

0x1a39,	// (0x0005279b) main_sp_fs_email_pane_g1

0x1a45,	// (0x000527a7) main_sp_fs_email_pane_g2

0x0001,

0xfbe9,	// (0x0006094b) main_sp_fs_email_pane_g

0x1c91,	// (0x000529f3) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1c91,	// (0x000529f3) list_single_cale_mrui_row_pane_g3

0x9f6f,	// (0x0005acd1) list_single_recal_day_pane_g5_event_pane

0x0674,	// (0x000513d6) list_single_recal_day_pane_g7

0x231f,	// (0x00053081) list_recal_day_event_pane_cp01

0x2328,	// (0x0005308a) list_recal_vselct_arw_lo_pane_cp01

0x2330,	// (0x00053092) list_recal_vselct_arw_up_pane_cp01

0x2338,	// (0x0005309a) list_recal_vselct_pane_cp01

0x0b80,	// (0x000518e2) list_recal_day_event_pane_cp01_g1

0x06e3,	// (0x00051445) list_recal_day_event_pane_cp01_t1

0x067c,	// (0x000513de) list_single_recal_day_pane_t1_ParamLimits

0x068e,	// (0x000513f0) list_single_recal_day_pane_t2_ParamLimits

0xfcc6,	// (0x00060a28) list_single_recal_day_pane_t_ParamLimits

0xbe7b,	// (0x0005cbdd) bg_notes_pane_ParamLimits

0xbf7e,	// (0x0005cce0) list_notes_pane_ParamLimits

0x3610,	// (0x00054372) scroll_pane_cp06_ParamLimits

0xbfa0,	// (0x0005cd02) main_notes_pane_ParamLimits

0xbe9d,	// (0x0005cbff) main_welc_pane

0xa7f6,	// (0x0005b558) main_welc_body_pane_ParamLimits

0xa7f6,	// (0x0005b558) main_welc_body_pane

0xa80f,	// (0x0005b571) main_welc_opti_pane_ParamLimits

0xa80f,	// (0x0005b571) main_welc_opti_pane

0xa864,	// (0x0005b5c6) main_welc_pane_t1_ParamLimits

0xa864,	// (0x0005b5c6) main_welc_pane_t1

0xaa10,	// (0x0005b772) main_welc_body_row_pane_ParamLimits

0xaa10,	// (0x0005b772) main_welc_body_row_pane

0xbef6,	// (0x0005cc58) main_welc_opti_row_pane_ParamLimits

0xbef6,	// (0x0005cc58) main_welc_opti_row_pane

0x234a,	// (0x000530ac) main_welc_opti_row_pane_g1

0xaa39,	// (0x0005b79b) main_welc_opti_row_pane_t1

0x2352,	// (0x000530b4) main_welc_body_row_pane_t1

0x2071,	// (0x00052dd3) popup_notif_wgt_heading_pane

0x208b,	// (0x00052ded) aid_size_list_notif_wgt_del_ParamLimits

0x2098,	// (0x00052dfa) list_notif_wgt_row_pane_g1_ParamLimits

0x20a4,	// (0x00052e06) list_notif_wgt_row_pane_g2_ParamLimits

0x20b3,	// (0x00052e15) list_notif_wgt_row_pane_g3_ParamLimits

0xfd2d,	// (0x00060a8f) list_notif_wgt_row_pane_g_ParamLimits

0x20c0,	// (0x00052e22) list_notif_wgt_row_pane_t1_ParamLimits

0x20d6,	// (0x00052e38) list_notif_wgt_row_pane_t2_ParamLimits

0x20e8,	// (0x00052e4a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd34,	// (0x00060a96) list_notif_wgt_row_pane_t_ParamLimits

0xa383,	// (0x0005b0e5) listrow_wgtman_pane_g1_ParamLimits

0xa390,	// (0x0005b0f2) listrow_wgtman_pane_g2_ParamLimits

0xfd64,	// (0x00060ac6) listrow_wgtman_pane_g_ParamLimits

0xa3ae,	// (0x0005b110) listrow_wgtman_pane_t1_ParamLimits

0xa3c6,	// (0x0005b128) listrow_wgtman_pane_t2_ParamLimits

0xfd69,	// (0x00060acb) listrow_wgtman_pane_t_ParamLimits

0xa3ec,	// (0x0005b14e) wait_bar_pane_cp09_ParamLimits

0xb803,	// (0x0005c565) bg_popup_heading_pane_cp02

0x2361,	// (0x000530c3) popup_notif_wgt_heading_pane_g1

0x2369,	// (0x000530cb) popup_notif_wgt_heading_pane_t1

0xb803,	// (0x0005c565) main_vids_pane

0xb803,	// (0x0005c565) vids_listscroll_pane

0xaa48,	// (0x0005b7aa) scroll_pane_cp040

0xb803,	// (0x0005c565) vids_list_pane

0xaa53,	// (0x0005b7b5) vids_list_double_pane_ParamLimits

0xaa53,	// (0x0005b7b5) vids_list_double_pane

0xaa6b,	// (0x0005b7cd) vids_list_double_pane_g1

0xaa74,	// (0x0005b7d6) vids_list_double_pane_t1

0xaa84,	// (0x0005b7e6) vids_list_double_pane_t2

0x0001,

0xfe02,	// (0x00060b64) vids_list_double_pane_t

0x5f03,	// (0x00056c65) main_ncimui_pane_ParamLimits

0x924a,	// (0x00059fac) main_ncimui_pane_g1_ParamLimits

0x9256,	// (0x00059fb8) main_ncimui_pane_g2_ParamLimits

0x9256,	// (0x00059fb8) main_ncimui_pane_g2

0x0001,

0xfaea,	// (0x0006084c) main_ncimui_pane_g_ParamLimits

0xfaea,	// (0x0006084c) main_ncimui_pane_g

0xa828,	// (0x0005b58a) main_welc_pane_g1_ParamLimits

0xa828,	// (0x0005b58a) main_welc_pane_g1

0xa834,	// (0x0005b596) main_welc_pane_g2_ParamLimits

0xa834,	// (0x0005b596) main_welc_pane_g2

0x0003,

0xfdec,	// (0x00060b4e) main_welc_pane_g_ParamLimits

0xfdec,	// (0x00060b4e) main_welc_pane_g

0xbe7b,	// (0x0005cbdd) listscroll_mce_pane_ParamLimits

0xd0e9,	// (0x0005de4b) wait_bar_pane_cp10

0xe441,	// (0x0005f1a3) main_cale_day_pane_ParamLimits

0xe441,	// (0x0005f1a3) main_cale_week_pane_ParamLimits

0xbe7b,	// (0x0005cbdd) main_messa_pane_ParamLimits

0x6c0c,	// (0x0005796e) main_clock2_btn_pane_ParamLimits

0x6c0c,	// (0x0005796e) main_clock2_btn_pane

0xecc4,	// (0x0005fa26) main_clock2_btn_pane_cp01_ParamLimits

0xecc4,	// (0x0005fa26) main_clock2_btn_pane_cp01

0x1c70,	// (0x000529d2) list_cale_mrui_pane_ParamLimits

0x211e,	// (0x00052e80) main_cf0_pane_g2

0x0001,

0xfd3b,	// (0x00060a9d) main_cf0_pane_g

0x1e33,	// (0x00052b95) area_left_week_number_pane_ParamLimits

0x1e33,	// (0x00052b95) area_top_day_name_pane_ParamLimits

0x1e33,	// (0x00052b95) frame_month_view_pane_ParamLimits

0x1e33,	// (0x00052b95) grid_month_view_pane_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g1_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g2_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g3_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g4_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g5_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g6_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g7_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g8_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g9_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g10_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g11_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g12_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g13_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g14_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g15_ParamLimits

0x1e27,	// (0x00052b89) frm_month_g16_ParamLimits

0xfd93,	// (0x00060af5) frm_month_g_ParamLimits

0x2246,	// (0x00052fa8) cell_top_day_name_pane_t1_ParamLimits

0x1e27,	// (0x00052b89) cell_area_left_week_number_pane_g1_ParamLimits

0x2246,	// (0x00052fa8) cell_area_left_week_number_pane_t1_ParamLimits

0x1e27,	// (0x00052b89) cell_month_view_pane_g1_ParamLimits

0x2246,	// (0x00052fa8) cell_month_view_pane_t1_ParamLimits

0xbe73,	// (0x0005cbd5) main_clock2_btn_pane_g1

0x2377,	// (0x000530d9) main_clock2_btn_pane_t1

0xbe9d,	// (0x0005cbff) listscroll_cmail_pane_ParamLimits

0x1a39,	// (0x0005279b) main_sp_fs_email_pane_g1_ParamLimits

0x1a45,	// (0x000527a7) main_sp_fs_email_pane_g2_ParamLimits

0xfbe9,	// (0x0006094b) main_sp_fs_email_pane_g_ParamLimits

0x1daf,	// (0x00052b11) list_recal_day_pane_ParamLimits

0x1dc0,	// (0x00052b22) mian_recal_day_pane_t1

0x99ec,	// (0x0005a74e) list_single_dyc_row_text_pane_t4_ParamLimits

0x99ec,	// (0x0005a74e) list_single_dyc_row_text_pane_t4

0x9a23,	// (0x0005a785) list_single_dyc_row_text_pane_t5_ParamLimits

0x9a23,	// (0x0005a785) list_single_dyc_row_text_pane_t5

0x041b,	// (0x0005117d) list_single_dyc_row_text_pane_t6_ParamLimits

0x041b,	// (0x0005117d) list_single_dyc_row_text_pane_t6

0x50d3,	// (0x00055e35) aid_mgn_list_cale_time_pane

0x5f03,	// (0x00056c65) main_gallery2_pane_ParamLimits

0xecda,	// (0x0005fa3c) main_clock2_pane_cp01_t1

0xece8,	// (0x0005fa4a) main_clock2_pane_cp01_t3

0x0001,

0xf6d9,	// (0x0006043b) main_clock2_pane_cp01_t

0x3a50,	// (0x000547b2) cale_week_scroll_pane_g16_ParamLimits

0x3a50,	// (0x000547b2) cale_week_scroll_pane_g16

0xc707,	// (0x0005d469) vorec_slider_pane

0x2309,	// (0x0005306b) vidtel_button_pane_t1_ParamLimits

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9fca,	// (0x0005ad2c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfce9,	// (0x00060a4b) main_fs_bigclock_clock_pane_g_ParamLimits

0x9fd6,	// (0x0005ad38) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9fea,	// (0x0005ad4c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf2,	// (0x00060a54) main_fs_bigclock_clock_pane_t_ParamLimits

0x654d,	// (0x000572af) main_mup3_lyrics_pane_ParamLimits

0x654d,	// (0x000572af) main_mup3_lyrics_pane

0xaab7,	// (0x0005b819) main_mup3_lyrics_pane_t1_ParamLimits

0xaab7,	// (0x0005b819) main_mup3_lyrics_pane_t1

0x7118,	// (0x00057e7a) aid_main_mp4_pane_t1_area

0x7122,	// (0x00057e84) aid_main_mp4_pane_t2_area

0x7227,	// (0x00057f89) main_mp4_pane_g7_ParamLimits

0x7227,	// (0x00057f89) main_mp4_pane_g7

0x7233,	// (0x00057f95) main_mp4_pane_g8_ParamLimits

0x7233,	// (0x00057f95) main_mp4_pane_g8

0x762f,	// (0x00058391) aid_call6_pane_g1_size

0xa707,	// (0x0005b469) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa707,	// (0x0005b469) list_double_large_graphic_phob2_other_pane

0xc617,	// (0x0005d379) list_double_large_graphic_phob2_other_pane_g1

0xb803,	// (0x0005c565) list_highlight_pane_cp026

0xbe9d,	// (0x0005cbff) main_welc_pane_ParamLimits

0x985b,	// (0x0005a5bd) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x985b,	// (0x0005a5bd) main_sp_fs_ctrlbar_pane_g3

0x9873,	// (0x0005a5d5) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9873,	// (0x0005a5d5) main_sp_fs_ctrlbar_pane_g4

0x98a5,	// (0x0005a607) toolbar2_fixed_button_pane_cp01

0x98b0,	// (0x0005a612) toolbar2_fixed_button_pane_cp02

0x98bb,	// (0x0005a61d) toolbar2_fixed_button_pane_cp03

0xa7da,	// (0x0005b53c) list_welc_entry_pane_ParamLimits

0xa7da,	// (0x0005b53c) list_welc_entry_pane

0xa842,	// (0x0005b5a4) main_welc_pane_g3_ParamLimits

0xa842,	// (0x0005b5a4) main_welc_pane_g3

0xa87e,	// (0x0005b5e0) main_welc_pane_t2_ParamLimits

0xa87e,	// (0x0005b5e0) main_welc_pane_t2

0xa892,	// (0x0005b5f4) main_welc_pane_t3_ParamLimits

0xa892,	// (0x0005b5f4) main_welc_pane_t3

0x0005,

0xfdf5,	// (0x00060b57) main_welc_pane_t_ParamLimits

0xfdf5,	// (0x00060b57) main_welc_pane_t

0xa998,	// (0x0005b6fa) welc_button_pane_ParamLimits

0xa998,	// (0x0005b6fa) welc_button_pane

0xaa02,	// (0x0005b764) welc_service_logo_pane_ParamLimits

0xaa02,	// (0x0005b764) welc_service_logo_pane

0xaaed,	// (0x0005b84f) list_single_welc_entry_pane_ParamLimits

0xaaed,	// (0x0005b84f) list_single_welc_entry_pane

0xaafe,	// (0x0005b860) list_single_welc_entry_pane_g1

0xab06,	// (0x0005b868) list_single_welc_entry_pane_t1

0xab14,	// (0x0005b876) list_single_welc_entry_pane_t2

0x0001,

0xfe07,	// (0x00060b69) list_single_welc_entry_pane_t

0xb803,	// (0x0005c565) bg_button_pane_cp035

0xab22,	// (0x0005b884) welc_button_pane_t1

0x2385,	// (0x000530e7) welc_service_logo_pane_g1

0x238e,	// (0x000530f0) welc_service_logo_pane_g2

0x0001,

0xfe0c,	// (0x00060b6e) welc_service_logo_pane_g

0x34cf,	// (0x00054231) main_int_radio_pane

0x13ab,	// (0x0005210d) list_single_fs_dyc_pane_g1

0xa620,	// (0x0005b382) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa620,	// (0x0005b382) list_double_large_graphic_phob2_pane_g3

0xa62c,	// (0x0005b38e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa62c,	// (0x0005b38e) list_double_large_graphic_phob2_pane_g4

0xab30,	// (0x0005b892) main_int_radio1_pane_ParamLimits

0xab30,	// (0x0005b892) main_int_radio1_pane

0x2397,	// (0x000530f9) find_pane_cp02

0xab42,	// (0x0005b8a4) input_focus_pane_cp12_ParamLimits

0xab42,	// (0x0005b8a4) input_focus_pane_cp12

0xab4e,	// (0x0005b8b0) input_focus_pane_cp13_ParamLimits

0xab4e,	// (0x0005b8b0) input_focus_pane_cp13

0xab66,	// (0x0005b8c8) input_focus_pane_cp14_ParamLimits

0xab66,	// (0x0005b8c8) input_focus_pane_cp14

0x23a0,	// (0x00053102) int_radio1_listscroll_pane

0xab7e,	// (0x0005b8e0) main_int_radio1_pane_g1_ParamLimits

0xab7e,	// (0x0005b8e0) main_int_radio1_pane_g1

0xab8e,	// (0x0005b8f0) main_int_radio1_pane_t1_ParamLimits

0xab8e,	// (0x0005b8f0) main_int_radio1_pane_t1

0xaba2,	// (0x0005b904) main_int_radio1_pane_t2_ParamLimits

0xaba2,	// (0x0005b904) main_int_radio1_pane_t2

0xabb6,	// (0x0005b918) main_int_radio1_pane_t3_ParamLimits

0xabb6,	// (0x0005b918) main_int_radio1_pane_t3

0xabca,	// (0x0005b92c) main_int_radio1_pane_t4_ParamLimits

0xabca,	// (0x0005b92c) main_int_radio1_pane_t4

0x23aa,	// (0x0005310c) main_int_radio1_pane_t5_ParamLimits

0x23aa,	// (0x0005310c) main_int_radio1_pane_t5

0xabe1,	// (0x0005b943) main_int_radio1_pane_t6_ParamLimits

0xabe1,	// (0x0005b943) main_int_radio1_pane_t6

0xabf3,	// (0x0005b955) main_int_radio1_pane_t7_ParamLimits

0xabf3,	// (0x0005b955) main_int_radio1_pane_t7

0xac05,	// (0x0005b967) main_int_radio1_pane_t8_ParamLimits

0xac05,	// (0x0005b967) main_int_radio1_pane_t8

0xac19,	// (0x0005b97b) main_int_radio1_pane_t9_ParamLimits

0xac19,	// (0x0005b97b) main_int_radio1_pane_t9

0xac2b,	// (0x0005b98d) main_int_radio1_pane_t10_ParamLimits

0xac2b,	// (0x0005b98d) main_int_radio1_pane_t10

0xac5c,	// (0x0005b9be) main_int_radio1_pane_t11_ParamLimits

0xac5c,	// (0x0005b9be) main_int_radio1_pane_t11

0xac8d,	// (0x0005b9ef) main_int_radio1_pane_t12_ParamLimits

0xac8d,	// (0x0005b9ef) main_int_radio1_pane_t12

0x000b,

0xfe11,	// (0x00060b73) main_int_radio1_pane_t_ParamLimits

0xfe11,	// (0x00060b73) main_int_radio1_pane_t

0xc080,	// (0x0005cde2) int_radio_list_pane

0x1d92,	// (0x00052af4) scroll_pane_cp037

0xc088,	// (0x0005cdea) list_double_large_graphic_int_radio_pane_ParamLimits

0xc088,	// (0x0005cdea) list_double_large_graphic_int_radio_pane

0xc0a1,	// (0x0005ce03) list_double_large_graphic_int_radio_pane_g1

0x06f1,	// (0x00051453) list_double_large_graphic_int_radio_pane_t1

0x06ff,	// (0x00051461) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe2a,	// (0x00060b8c) list_double_large_graphic_int_radio_pane_t

0xb803,	// (0x0005c565) list_highlight_pane_cp027

0x2342,	// (0x000530a4) main_button_pane_4

0xa84e,	// (0x0005b5b0) main_welc_pane_g4_ParamLimits

0xa84e,	// (0x0005b5b0) main_welc_pane_g4

0xa8a4,	// (0x0005b606) main_welc_pane_t4_ParamLimits

0xa8a4,	// (0x0005b606) main_welc_pane_t4

0xa8b8,	// (0x0005b61a) main_welc_pane_t5_ParamLimits

0xa8b8,	// (0x0005b61a) main_welc_pane_t5

0xa8f0,	// (0x0005b652) main_welc_pane_t6_ParamLimits

0xa8f0,	// (0x0005b652) main_welc_pane_t6

0xa9a6,	// (0x0005b708) welc_button_pane_2_ParamLimits

0xa9a6,	// (0x0005b708) welc_button_pane_2

0xa9c4,	// (0x0005b726) welc_button_pane_3_ParamLimits

0xa9c4,	// (0x0005b726) welc_button_pane_3

0x2342,	// (0x000530a4) welc_button_pane_4

0xa9e4,	// (0x0005b746) welc_button_pane_5_ParamLimits

0xa9e4,	// (0x0005b746) welc_button_pane_5

0x32de,	// (0x00054040) main_popup_welc_pane

0xc0c2,	// (0x0005ce24) main_welc_sk_g3

0xc0cc,	// (0x0005ce2e) main_welc_sk_g4

0xc0d6,	// (0x0005ce38) main_welc_sk_t3

0xc0e6,	// (0x0005ce48) main_welc_sk_t4

0xc0f6,	// (0x0005ce58) popup_welc_pane_t4

0xc104,	// (0x0005ce66) popup_welc_pane_t5

0xc112,	// (0x0005ce74) popup_welc_pane_t6

0x34cf,	// (0x00054231) main_acti_pane

0xb803,	// (0x0005c565) main_sso_pane

0xaca4,	// (0x0005ba06) sso_body_pane_ParamLimits

0xaca4,	// (0x0005ba06) sso_body_pane

0xacbe,	// (0x0005ba20) sso_logo_pane_ParamLimits

0xacbe,	// (0x0005ba20) sso_logo_pane

0xacef,	// (0x0005ba51) sso_sk_pane_ParamLimits

0xacef,	// (0x0005ba51) sso_sk_pane

0xc150,	// (0x0005ceb2) main_sso_logo_pane_g1

0xacfc,	// (0x0005ba5e) sso_sk_pane_t1_ParamLimits

0xacfc,	// (0x0005ba5e) sso_sk_pane_t1

0xad10,	// (0x0005ba72) sso_sk_pane_t2_ParamLimits

0xad10,	// (0x0005ba72) sso_sk_pane_t2

0x0001,

0xfe2f,	// (0x00060b91) sso_sk_pane_t_ParamLimits

0xfe2f,	// (0x00060b91) sso_sk_pane_t

0xc159,	// (0x0005cebb) aid_sso_gap

0xc162,	// (0x0005cec4) aid_sso_txt1

0xc16c,	// (0x0005cece) aid_sso_txt2

0xc176,	// (0x0005ced8) aid_sso_txt3

0x0002,

0xfe34,	// (0x00060b96) aid_sso_txt

0xc180,	// (0x0005cee2) aid_sso_widget

0xad6d,	// (0x0005bacf) sso_btn_pane_ParamLimits

0xad6d,	// (0x0005bacf) sso_btn_pane

0xadf3,	// (0x0005bb55) sso_option_pane_ParamLimits

0xadf3,	// (0x0005bb55) sso_option_pane

0xae9d,	// (0x0005bbff) sso_query_pane_ParamLimits

0xae9d,	// (0x0005bbff) sso_query_pane

0xaeed,	// (0x0005bc4f) sso_query_pane_cp01_ParamLimits

0xaeed,	// (0x0005bc4f) sso_query_pane_cp01

0xaf3d,	// (0x0005bc9f) sso_t_hdr_pane_ParamLimits

0xaf3d,	// (0x0005bc9f) sso_t_hdr_pane

0xaf61,	// (0x0005bcc3) sso_t_nml_pane_ParamLimits

0xaf61,	// (0x0005bcc3) sso_t_nml_pane

0xafb1,	// (0x0005bd13) sso_t_sub_pane

0xaccb,	// (0x0005ba2d) sso_popup_window_ParamLimits

0xaccb,	// (0x0005ba2d) sso_popup_window

0xad22,	// (0x0005ba84) sso_apps_pane_ParamLimits

0xad22,	// (0x0005ba84) sso_apps_pane

0xad45,	// (0x0005baa7) sso_body_pane_g1

0xad4d,	// (0x0005baaf) sso_body_pane_t1

0xad5d,	// (0x0005babf) sso_body_pane_t2

0x0001,

0xfe3b,	// (0x00060b9d) sso_body_pane_t

0xadb3,	// (0x0005bb15) sso_btn_pane_cp01_ParamLimits

0xadb3,	// (0x0005bb15) sso_btn_pane_cp01

0xae6f,	// (0x0005bbd1) sso_prog_pane_ParamLimits

0xae6f,	// (0x0005bbd1) sso_prog_pane

0xafd6,	// (0x0005bd38) sso_t_hdr_pane_t1_ParamLimits

0xafd6,	// (0x0005bd38) sso_t_hdr_pane_t1

0xc18a,	// (0x0005ceec) input_focus_pane_cp10_ParamLimits

0xc18a,	// (0x0005ceec) input_focus_pane_cp10

0xc19e,	// (0x0005cf00) sso_query_pane_t1_ParamLimits

0xc19e,	// (0x0005cf00) sso_query_pane_t1

0xc1b1,	// (0x0005cf13) sso_query_pane_t2_ParamLimits

0xc1b1,	// (0x0005cf13) sso_query_pane_t2

0xc1ca,	// (0x0005cf2c) sso_query_pane_t3_ParamLimits

0xc1ca,	// (0x0005cf2c) sso_query_pane_t3

0xc1f4,	// (0x0005cf56) sso_query_pane_t4_ParamLimits

0xc1f4,	// (0x0005cf56) sso_query_pane_t4

0x0003,

0xfe40,	// (0x00060ba2) sso_query_pane_t_ParamLimits

0xfe40,	// (0x00060ba2) sso_query_pane_t

0xc218,	// (0x0005cf7a) bg_button_pane_cp22

0xc0aa,	// (0x0005ce0c) sso_btn_pane_t1

0xafef,	// (0x0005bd51) sso_t_nml_pane_t1_ParamLimits

0xafef,	// (0x0005bd51) sso_t_nml_pane_t1

0xc221,	// (0x0005cf83) sso_option_row_pane_ParamLimits

0xc221,	// (0x0005cf83) sso_option_row_pane

0xc22e,	// (0x0005cf90) sso_t_sub_pane_t1_ParamLimits

0xc22e,	// (0x0005cf90) sso_t_sub_pane_t1

0xbe9d,	// (0x0005cbff) bg_popup_window_pane_cp11_ParamLimits

0xbe9d,	// (0x0005cbff) bg_popup_window_pane_cp11

0xc24b,	// (0x0005cfad) popup_sk_window_cp01_ParamLimits

0xc24b,	// (0x0005cfad) popup_sk_window_cp01

0xc258,	// (0x0005cfba) sso_popup_body_pane_ParamLimits

0xc258,	// (0x0005cfba) sso_popup_body_pane

0xc265,	// (0x0005cfc7) scroll_pane_cp21_ParamLimits

0xc265,	// (0x0005cfc7) scroll_pane_cp21

0xc272,	// (0x0005cfd4) sso_popup_body_t_pane_ParamLimits

0xc272,	// (0x0005cfd4) sso_popup_body_t_pane

0xc27f,	// (0x0005cfe1) sso_popup_body_t_hdr_pane_ParamLimits

0xc27f,	// (0x0005cfe1) sso_popup_body_t_hdr_pane

0xb00c,	// (0x0005bd6e) sso_popup_body_t_nml_pane_ParamLimits

0xb00c,	// (0x0005bd6e) sso_popup_body_t_nml_pane

0xb02a,	// (0x0005bd8c) sso_popup_body_t_sub_pane_ParamLimits

0xb02a,	// (0x0005bd8c) sso_popup_body_t_sub_pane

0xc291,	// (0x0005cff3) sso_popup_body_t_hdr_pane_t1

0xb04d,	// (0x0005bdaf) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb04d,	// (0x0005bdaf) sso_popup_body_t_nml_pane_t1

0xc2a1,	// (0x0005d003) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc2a1,	// (0x0005d003) sso_popup_body_t_sub_pane_t1

0xbf42,	// (0x0005cca4) sso_prog_pane_g1

0xb094,	// (0x0005bdf6) sso_apps_pane_comp1_ParamLimits

0xb094,	// (0x0005bdf6) sso_apps_pane_comp1

0xc2c6,	// (0x0005d028) sso_apps_pane_comp1_g1

0xc2ce,	// (0x0005d030) sso_apps_pane_comp1_t1

0xc2ea,	// (0x0005d04c) sso_option_row_pane_g1

0xc302,	// (0x0005d064) sso_option_row_pane_t1

0x1af4,	// (0x00052856) list_cmail_pane_ParamLimits

0xb803,	// (0x0005c565) main_call7_pane

0xa7c8,	// (0x0005b52a) bg_welc_area_ParamLimits

0xa7c8,	// (0x0005b52a) bg_welc_area

0xa926,	// (0x0005b688) sso_t_hdr_pane_a_t1_ParamLimits

0xa926,	// (0x0005b688) sso_t_hdr_pane_a_t1

0xa93a,	// (0x0005b69c) sso_t_nml_pane_a_t1_ParamLimits

0xa93a,	// (0x0005b69c) sso_t_nml_pane_a_t1

0xa964,	// (0x0005b6c6) sso_t_sub_pane_a_t1_ParamLimits

0xa964,	// (0x0005b6c6) sso_t_sub_pane_a_t1

0xa9f4,	// (0x0005b756) welc_button_pane_cp01_ParamLimits

0xa9f4,	// (0x0005b756) welc_button_pane_cp01

0xc0aa,	// (0x0005ce0c) sso_btn_pane_t1_copy1

0xc0b9,	// (0x0005ce1b) welc_button_pane_2_comp1

0xc120,	// (0x0005ce82) sso_t_hdr_pane_p_t1

0xc130,	// (0x0005ce92) sso_t_nml_pane_p_t1

0xc140,	// (0x0005cea2) sso_t_sub_pane_p_t1

0xb803,	// (0x0005c565) main_att_pane

0xb803,	// (0x0005c565) main_vod_pane

0xafb1,	// (0x0005bd13) sso_t_sub_pane_ParamLimits

0xc2dc,	// (0x0005d03e) input_focus_pane_cp10_t1

0xc302,	// (0x0005d064) sso_option_row_pane_t1_ParamLimits

0xb0ae,	// (0x0005be10) main_att_body_pane_ParamLimits

0xb0ae,	// (0x0005be10) main_att_body_pane

0xb0c2,	// (0x0005be24) att_btn_emg_pane_ParamLimits

0xb0c2,	// (0x0005be24) att_btn_emg_pane

0xb0da,	// (0x0005be3c) att_btn_pane_ParamLimits

0xb0da,	// (0x0005be3c) att_btn_pane

0xb140,	// (0x0005bea2) att_btn_pane_cp01_ParamLimits

0xb140,	// (0x0005bea2) att_btn_pane_cp01

0xb172,	// (0x0005bed4) att_li_srv_pane_ParamLimits

0xb172,	// (0x0005bed4) att_li_srv_pane

0xb184,	// (0x0005bee6) att_opt_pane_ParamLimits

0xb184,	// (0x0005bee6) att_opt_pane

0xb1c8,	// (0x0005bf2a) att_query_pane_ParamLimits

0xb1c8,	// (0x0005bf2a) att_query_pane

0xb238,	// (0x0005bf9a) att_query_pane_cp01_ParamLimits

0xb238,	// (0x0005bf9a) att_query_pane_cp01

0xb27c,	// (0x0005bfde) att_t_hdr_pane_ParamLimits

0xb27c,	// (0x0005bfde) att_t_hdr_pane

0xb2e2,	// (0x0005c044) att_t_nml_pane_ParamLimits

0xb2e2,	// (0x0005c044) att_t_nml_pane

0xb34a,	// (0x0005c0ac) att_t_nml_pane_cp01_ParamLimits

0xb34a,	// (0x0005c0ac) att_t_nml_pane_cp01

0xb36e,	// (0x0005c0d0) att_t_nmlb_pane_ParamLimits

0xb36e,	// (0x0005c0d0) att_t_nmlb_pane

0xb3d2,	// (0x0005c134) att_term_pane_ParamLimits

0xb3d2,	// (0x0005c134) att_term_pane

0xb414,	// (0x0005c176) main_att_body_pane_g1_ParamLimits

0xb414,	// (0x0005c176) main_att_body_pane_g1

0xc31e,	// (0x0005d080) att_t_hdr_pane_t1_ParamLimits

0xc31e,	// (0x0005d080) att_t_hdr_pane_t1

0xc337,	// (0x0005d099) att_t_nml_pane_t1_ParamLimits

0xc337,	// (0x0005d099) att_t_nml_pane_t1

0xc35c,	// (0x0005d0be) att_btn_pane_t1

0xc218,	// (0x0005cf7a) bg_button_pane_cp23

0xb43e,	// (0x0005c1a0) att_li_srv_row_pane_ParamLimits

0xb43e,	// (0x0005c1a0) att_li_srv_row_pane

0xc36b,	// (0x0005d0cd) att_t_nmlb_pane_t1_ParamLimits

0xc36b,	// (0x0005d0cd) att_t_nmlb_pane_t1

0xc387,	// (0x0005d0e9) att_query_pane_t1

0xc396,	// (0x0005d0f8) att_query_pane_t2

0xc3a5,	// (0x0005d107) att_query_pane_t3

0x0002,

0xfe4e,	// (0x00060bb0) att_query_pane_t

0xc3b4,	// (0x0005d116) input_focus_pane_cp11

0xc3bd,	// (0x0005d11f) att_term_pane_t1_ParamLimits

0xc3bd,	// (0x0005d11f) att_term_pane_t1

0xb803,	// (0x0005c565) att_opt_row_pane

0xc3da,	// (0x0005d13c) att_opt_row_pane_g1

0xc3e2,	// (0x0005d144) att_opt_row_pane_t1_ParamLimits

0xc3e2,	// (0x0005d144) att_opt_row_pane_t1

0xb44e,	// (0x0005c1b0) att_li_srv_row_pane_g1

0xb456,	// (0x0005c1b8) att_li_srv_row_pane_t1_ParamLimits

0xb456,	// (0x0005c1b8) att_li_srv_row_pane_t1

0xb456,	// (0x0005c1b8) att_li_srv_row_pane_t2_ParamLimits

0xb456,	// (0x0005c1b8) att_li_srv_row_pane_t2

0x0001,

0xfe55,	// (0x00060bb7) att_li_srv_row_pane_t_ParamLimits

0xfe55,	// (0x00060bb7) att_li_srv_row_pane_t

0xc3fb,	// (0x0005d15d) att_btn_close_pane_g1

0xb803,	// (0x0005c565) bg_button_pane_cp24

0xb46b,	// (0x0005c1cd) main_vod_body_pane_ParamLimits

0xb46b,	// (0x0005c1cd) main_vod_body_pane

0xb479,	// (0x0005c1db) main_vod_body_pane_g1_ParamLimits

0xb479,	// (0x0005c1db) main_vod_body_pane_g1

0xb4a9,	// (0x0005c20b) scroll_pane_cp24_ParamLimits

0xb4a9,	// (0x0005c20b) scroll_pane_cp24

0xb4f1,	// (0x0005c253) vod_btn_pane_ParamLimits

0xb4f1,	// (0x0005c253) vod_btn_pane

0xb52f,	// (0x0005c291) vod_det_pane_ParamLimits

0xb52f,	// (0x0005c291) vod_det_pane

0xb559,	// (0x0005c2bb) vod_logo_g1_ParamLimits

0xb559,	// (0x0005c2bb) vod_logo_g1

0xb593,	// (0x0005c2f5) vod_opt_pane_ParamLimits

0xb593,	// (0x0005c2f5) vod_opt_pane

0xb5c3,	// (0x0005c325) vod_opt_pane_cp01_ParamLimits

0xb5c3,	// (0x0005c325) vod_opt_pane_cp01

0xb5eb,	// (0x0005c34d) vod_query_pane_ParamLimits

0xb5eb,	// (0x0005c34d) vod_query_pane

0xb613,	// (0x0005c375) vod_query_pane_cp01_ParamLimits

0xb613,	// (0x0005c375) vod_query_pane_cp01

0xb61f,	// (0x0005c381) vod_t_nml_pane_ParamLimits

0xb61f,	// (0x0005c381) vod_t_nml_pane

0xb6c1,	// (0x0005c423) vod_t_nml_pane_cp01_ParamLimits

0xb6c1,	// (0x0005c423) vod_t_nml_pane_cp01

0xb6f9,	// (0x0005c45b) vod_t_sub_pane_ParamLimits

0xb6f9,	// (0x0005c45b) vod_t_sub_pane

0xb725,	// (0x0005c487) vod_t_sub_pane_cp01_ParamLimits

0xb725,	// (0x0005c487) vod_t_sub_pane_cp01

0xc3b4,	// (0x0005d116) vod_query_field_pane

0xc403,	// (0x0005d165) vod_query_pane_t1

0xc412,	// (0x0005d174) bg_button_pane_cp25

0xc0aa,	// (0x0005ce0c) sso_btn_pane_t1_copy2

0xb74d,	// (0x0005c4af) vod_t_nml_pane_t1_ParamLimits

0xb74d,	// (0x0005c4af) vod_t_nml_pane_t1

0xc41b,	// (0x0005d17d) vod_opt_row_pane_ParamLimits

0xc41b,	// (0x0005d17d) vod_opt_row_pane

0xc42d,	// (0x0005d18f) vod_t_sub_pane_t1_ParamLimits

0xc42d,	// (0x0005d18f) vod_t_sub_pane_t1

0xc446,	// (0x0005d1a8) vod_det_cell_pane_ParamLimits

0xc446,	// (0x0005d1a8) vod_det_cell_pane

0xb803,	// (0x0005c565) input_focus_pane_cp15

0xc457,	// (0x0005d1b9) vod_query_field_pane_t1

0xc465,	// (0x0005d1c7) vod_opt_row_pane_g1_ParamLimits

0xc465,	// (0x0005d1c7) vod_opt_row_pane_g1

0xc471,	// (0x0005d1d3) vod_opt_row_pane_t1_ParamLimits

0xc471,	// (0x0005d1d3) vod_opt_row_pane_t1

0xc491,	// (0x0005d1f3) vod_det_cell_field_pane

0xc49a,	// (0x0005d1fc) vod_det_cell_pane_g1

0xc4a2,	// (0x0005d204) vod_det_cell_pane_t1

0xb803,	// (0x0005c565) input_focus_pane_cp16

0xc4b1,	// (0x0005d213) vod_det_cell_field_pane_t1

0xb782,	// (0x0005c4e4) call7_btn_grp_pane_ParamLimits

0xb782,	// (0x0005c4e4) call7_btn_grp_pane

0xb791,	// (0x0005c4f3) call7_bubble_pane_ParamLimits

0xb791,	// (0x0005c4f3) call7_bubble_pane

0xb79f,	// (0x0005c501) cell_call7_btn_pane_ParamLimits

0xb79f,	// (0x0005c501) cell_call7_btn_pane

0xb7ae,	// (0x0005c510) call7_pane_g1_ParamLimits

0xb7ae,	// (0x0005c510) call7_pane_g1

0xb7bd,	// (0x0005c51f) call7_windows_conf_pane_ParamLimits

0xb7bd,	// (0x0005c51f) call7_windows_conf_pane

0xb7d9,	// (0x0005c53b) popup_call7_1st_window_ParamLimits

0xb7d9,	// (0x0005c53b) popup_call7_1st_window

0xb7e7,	// (0x0005c549) popup_call7_2nd_window_ParamLimits

0xb7e7,	// (0x0005c549) popup_call7_2nd_window

0xb7f5,	// (0x0005c557) popup_call7_3rd_window_ParamLimits

0xb7f5,	// (0x0005c557) popup_call7_3rd_window

0xb803,	// (0x0005c565) bg_button_pane_cp26

0x219b,	// (0x00052efd) cell_call7_btn_pane_g1

0x21a4,	// (0x00052f06) cell_call7_btn_pane_t1

0xb803,	// (0x0005c565) bg_popup_window_pane_cp12

0xc4bf,	// (0x0005d221) popup_call7_1st_window_g1

0xc4c7,	// (0x0005d229) popup_call7_1st_window_g2

0xc4cf,	// (0x0005d231) popup_call7_1st_window_g3

0x0002,

0xfe5a,	// (0x00060bbc) popup_call7_1st_window_g

0xc4d7,	// (0x0005d239) popup_call7_1st_window_t1

0xc4e6,	// (0x0005d248) popup_call7_1st_window_t2

0xc4f4,	// (0x0005d256) popup_call7_1st_window_t3

0x0002,

0xfe61,	// (0x00060bc3) popup_call7_1st_window_t

0xb803,	// (0x0005c565) bg_popup_window_pane_cp13

0xc502,	// (0x0005d264) popup_call7_2nd_window_g1

0xc50a,	// (0x0005d26c) popup_call7_2nd_window_g2

0xc512,	// (0x0005d274) popup_call7_2nd_window_g3

0x0002,

0xfe68,	// (0x00060bca) popup_call7_2nd_window_g

0xc51a,	// (0x0005d27c) popup_call7_2nd_window_t1

0xb803,	// (0x0005c565) bg_popup_window_pane_cp14

0xc529,	// (0x0005d28b) call7_list_conf_pane

0xc531,	// (0x0005d293) call7_list_conf_row_pane_ParamLimits

0xc531,	// (0x0005d293) call7_list_conf_row_pane

0xc544,	// (0x0005d2a6) call7_list_conf_row_pane_g1

0xc54c,	// (0x0005d2ae) call7_list_conf_row_pane_g2

0x0001,

0xfe6f,	// (0x00060bd1) call7_list_conf_row_pane_g

0xc554,	// (0x0005d2b6) call7_list_conf_row_pane_t1

0xb803,	// (0x0005c565) list_highlight_pane_cp22

0xae41,	// (0x0005bba3) sso_option_pane_cp01_ParamLimits

0xae41,	// (0x0005bba3) sso_option_pane_cp01

0xbe7b,	// (0x0005cbdd) msg_header_pane_ParamLimits

0xd245,	// (0x0005dfa7) bg_button_pane_cp01_ParamLimits

0xd259,	// (0x0005dfbb) input_focus_pane_cp07_ParamLimits

0x98ef,	// (0x0005a651) popup_email_progress_window

0xbf42,	// (0x0005cca4) popup_email_progress_window_g1

0xc562,	// (0x0005d2c4) popup_email_progress_window_g2

0x0001,

0xfe74,	// (0x00060bd6) popup_email_progress_window_g

0xc56a,	// (0x0005d2cc) popup_email_progress_window_t1

0xb803,	// (0x0005c565) cmail_conv_pane

0x046e,	// (0x000511d0) list_single_dyc_row_pane_g5_ParamLimits

0x046e,	// (0x000511d0) list_single_dyc_row_pane_g5

0x047a,	// (0x000511dc) list_single_dyc_row_pane_g6_ParamLimits

0x047a,	// (0x000511dc) list_single_dyc_row_pane_g6

0x0492,	// (0x000511f4) list_single_dyc_row_pane_g7_ParamLimits

0x0492,	// (0x000511f4) list_single_dyc_row_pane_g7

0xa7ea,	// (0x0005b54c) main_button_pane_5_ParamLimits

0xa7ea,	// (0x0005b54c) main_button_pane_5

0xacb2,	// (0x0005ba14) sso_emg_call_btn_pane_ParamLimits

0xacb2,	// (0x0005ba14) sso_emg_call_btn_pane

0xafc6,	// (0x0005bd28) sso_t_sub_pane_cp01_ParamLimits

0xafc6,	// (0x0005bd28) sso_t_sub_pane_cp01

0xc2ea,	// (0x0005d04c) sso_option_row_pane_g1_ParamLimits

0xc2f6,	// (0x0005d058) sso_option_row_pane_g2_ParamLimits

0xc2f6,	// (0x0005d058) sso_option_row_pane_g2

0x0001,

0xfe49,	// (0x00060bab) sso_option_row_pane_g_ParamLimits

0xfe49,	// (0x00060bab) sso_option_row_pane_g

0xb158,	// (0x0005beba) att_btn_pane_cp02_ParamLimits

0xb158,	// (0x0005beba) att_btn_pane_cp02

0xc578,	// (0x0005d2da) cmail_conv_hdr_pane

0xc581,	// (0x0005d2e3) list_cmail_conv_pane

0xc58b,	// (0x0005d2ed) scroll_pane_cp31

0xc593,	// (0x0005d2f5) cmail_conv_hdr_pane_t1

0xc5a1,	// (0x0005d303) cmail_conv_hdr_pane_t2

0x0001,

0xfe79,	// (0x00060bdb) cmail_conv_hdr_pane_t

0xc5af,	// (0x0005d311) bubble_cmail_conv_pane_ParamLimits

0xc5af,	// (0x0005d311) bubble_cmail_conv_pane

0x1c22,	// (0x00052984) aid_size_colorization_pane

0xc707,	// (0x0005d469) bg_bubble_cmail_conv_pane

0xc5c7,	// (0x0005d329) body_bubble_cmail_conv_pane

0xcbfb,	// (0x0005d95d) bubble_cmail_conv_pane_g1

0xc5cf,	// (0x0005d331) bubble_cmail_conv_pane_g2

0xc5d7,	// (0x0005d339) bubble_cmail_conv_pane_g3

0x0002,

0xfe7e,	// (0x00060be0) bubble_cmail_conv_pane_g

0xc5df,	// (0x0005d341) bubble_cmail_conv_pane_t1

0x1a9a,	// (0x000527fc) bg_bubble_cmail_conv_pane_g1

0x1aa3,	// (0x00052805) bg_bubble_cmail_conv_pane_g2

0x1aac,	// (0x0005280e) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfc14,	// (0x00060976) bg_bubble_cmail_conv_pane_g

0xc7fb,	// (0x0005d55d) body_bubble_cmail_conv_pane_t1_ParamLimits

0xc7fb,	// (0x0005d55d) body_bubble_cmail_conv_pane_t1

0xc812,	// (0x0005d574) body_bubble_cmail_conv_pane_t2_ParamLimits

0xc812,	// (0x0005d574) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe85,	// (0x00060be7) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe85,	// (0x00060be7) body_bubble_cmail_conv_pane_t

0xbef6,	// (0x0005cc58) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
