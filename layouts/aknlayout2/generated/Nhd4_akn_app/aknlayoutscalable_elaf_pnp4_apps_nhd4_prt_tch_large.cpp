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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007402b };

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
0x6453,	// (0x0007a47e) Screen

0x645f,	// (0x0007a48a) application_window

0x64bb,	// (0x0007a4e6) area_bottom_pane_ParamLimits

0x64bb,	// (0x0007a4e6) area_bottom_pane

0x6513,	// (0x0007a53e) area_top_pane_ParamLimits

0x6513,	// (0x0007a53e) area_top_pane

0x6577,	// (0x0007a5a2) call_video_uplink_pane_ParamLimits

0x6577,	// (0x0007a5a2) call_video_uplink_pane

0x65b6,	// (0x0007a5e1) main_pane_ParamLimits

0x65b6,	// (0x0007a5e1) main_pane

0x2805,	// (0x00076830) context_pane

0x93c0,	// (0x0007d3eb) navi_pane

0x93e6,	// (0x0007d411) popup_cale_events_window_ParamLimits

0x93e6,	// (0x0007d411) popup_cale_events_window

0x2818,	// (0x00076843) popup_mup_playback_window

0x93fe,	// (0x0007d429) signal_pane

0x086f,	// (0x0007489a) main_browser_pane

0x0a2a,	// (0x00074a55) main_burst_pane

0x9250,	// (0x0007d27b) main_calc_pane

0x27f9,	// (0x00076824) main_cale_day_pane

0x6baa,	// (0x0007abd5) main_cale_month_pane

0x27f9,	// (0x00076824) main_cale_week_pane

0x0a2a,	// (0x00074a55) main_call_pane

0x0527,	// (0x00074552) main_call_poc_pane

0x0a2a,	// (0x00074a55) main_camera_pane

0x0a2a,	// (0x00074a55) main_chi_dic_pane

0x1208,	// (0x00075233) main_clock_pane

0x0527,	// (0x00074552) main_fmradio_pane

0x0a2a,	// (0x00074a55) main_graph_messa_pane

0x0527,	// (0x00074552) main_help_pane

0x086f,	// (0x0007489a) main_im_pane

0x0782,	// (0x000747ad) main_image_pane_ParamLimits

0x0782,	// (0x000747ad) main_image_pane

0x0527,	// (0x00074552) main_location2_pane

0x0a2a,	// (0x00074a55) main_location_pane

0x0782,	// (0x000747ad) main_messa_pane

0x0527,	// (0x00074552) main_mp2_pane

0x0a2a,	// (0x00074a55) main_mp_pane

0x0527,	// (0x00074552) main_msg_pane

0x0527,	// (0x00074552) main_mup_eq_pane

0x0527,	// (0x00074552) main_mup_pane

0x086f,	// (0x0007489a) main_notes_pane

0x0527,	// (0x00074552) main_pec_pane

0x0527,	// (0x00074552) main_phob_pane

0x0527,	// (0x00074552) main_pinb_pane

0x0527,	// (0x00074552) main_postcard_pane

0x0527,	// (0x00074552) main_qdial_pane

0x0a2a,	// (0x00074a55) main_skin_pane

0x0527,	// (0x00074552) main_smil2_pane

0x0a2a,	// (0x00074a55) main_smil_pane

0x0a2a,	// (0x00074a55) main_video_pane

0x0a2a,	// (0x00074a55) main_video_tele_pane

0x0782,	// (0x000747ad) main_viewer_pane_ParamLimits

0x0782,	// (0x000747ad) main_viewer_pane

0x0a2a,	// (0x00074a55) main_vorec_pane

0x928e,	// (0x0007d2b9) popup_blid_sat_info_window_ParamLimits

0x928e,	// (0x0007d2b9) popup_blid_sat_info_window

0x92ae,	// (0x0007d2d9) popup_dyc_status_message_window_ParamLimits

0x92ae,	// (0x0007d2d9) popup_dyc_status_message_window

0x92bc,	// (0x0007d2e7) popup_grid_large_graphic_window_ParamLimits

0x92bc,	// (0x0007d2e7) popup_grid_large_graphic_window

0x934b,	// (0x0007d376) popup_loc_request_window_ParamLimits

0x934b,	// (0x0007d376) popup_loc_request_window

0x9398,	// (0x0007d3c3) popup_wml_address_window_ParamLimits

0x9398,	// (0x0007d3c3) popup_wml_address_window

0x9128,	// (0x0007d153) call_muted_g1

0x8d9d,	// (0x0007cdc8) popup_call_audio_conf_window_ParamLimits

0x8d9d,	// (0x0007cdc8) popup_call_audio_conf_window

0x9138,	// (0x0007d163) popup_call_audio_first_window_ParamLimits

0x9138,	// (0x0007d163) popup_call_audio_first_window

0x9178,	// (0x0007d1a3) popup_call_audio_in_window_ParamLimits

0x9178,	// (0x0007d1a3) popup_call_audio_in_window

0x919c,	// (0x0007d1c7) popup_call_audio_out_window_ParamLimits

0x919c,	// (0x0007d1c7) popup_call_audio_out_window

0x91be,	// (0x0007d1e9) popup_call_audio_second_window_ParamLimits

0x91be,	// (0x0007d1e9) popup_call_audio_second_window

0x91ee,	// (0x0007d219) popup_call_audio_wait_window_ParamLimits

0x91ee,	// (0x0007d219) popup_call_audio_wait_window

0x920f,	// (0x0007d23a) popup_number_entry_window_ParamLimits

0x920f,	// (0x0007d23a) popup_number_entry_window

0xee33,	// (0x00082e5e) bg_popup_call_pane_cp05_ParamLimits

0xee33,	// (0x00082e5e) bg_popup_call_pane_cp05

0xee53,	// (0x00082e7e) popup_number_entry_window_t1

0xee66,	// (0x00082e91) popup_number_entry_window_t2

0xee78,	// (0x00082ea3) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00083070) popup_number_entry_window_t

0x016b,	// (0x00074196) text_title_cp2

0x017e,	// (0x000741a9) bg_popup_call_pane_cp_ParamLimits

0x017e,	// (0x000741a9) bg_popup_call_pane_cp

0x018c,	// (0x000741b7) call_thumbnail_pane

0x0194,	// (0x000741bf) popup_call_audio_in_window_g1_ParamLimits

0x0194,	// (0x000741bf) popup_call_audio_in_window_g1

0x01a0,	// (0x000741cb) popup_call_audio_in_window_g2_ParamLimits

0x01a0,	// (0x000741cb) popup_call_audio_in_window_g2

0x01ac,	// (0x000741d7) popup_call_audio_in_window_g3_ParamLimits

0x01ac,	// (0x000741d7) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x00083079) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x00083079) popup_call_audio_in_window_g

0x01b8,	// (0x000741e3) popup_call_audio_in_window_t1_ParamLimits

0x01b8,	// (0x000741e3) popup_call_audio_in_window_t1

0x01d4,	// (0x000741ff) popup_call_audio_in_window_t2_ParamLimits

0x01d4,	// (0x000741ff) popup_call_audio_in_window_t2

0x01f0,	// (0x0007421b) popup_call_audio_in_window_t3_ParamLimits

0x01f0,	// (0x0007421b) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00083080) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00083080) popup_call_audio_in_window_t

0x017e,	// (0x000741a9) bg_popup_call_pane_cp01_ParamLimits

0x017e,	// (0x000741a9) bg_popup_call_pane_cp01

0x018c,	// (0x000741b7) call_thumbnail_pane_cp02

0x0203,	// (0x0007422e) call_type_pane_cp022

0x020b,	// (0x00074236) popup_call_audio_out_window_g1_ParamLimits

0x020b,	// (0x00074236) popup_call_audio_out_window_g1

0x021d,	// (0x00074248) popup_call_audio_out_window_g2_ParamLimits

0x021d,	// (0x00074248) popup_call_audio_out_window_g2

0x0229,	// (0x00074254) popup_call_audio_out_window_g3_ParamLimits

0x0229,	// (0x00074254) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x00083087) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x00083087) popup_call_audio_out_window_g

0x023b,	// (0x00074266) popup_call_audio_out_window_t1_ParamLimits

0x023b,	// (0x00074266) popup_call_audio_out_window_t1

0x0253,	// (0x0007427e) popup_call_audio_out_window_t2_ParamLimits

0x0253,	// (0x0007427e) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0008308e) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0008308e) popup_call_audio_out_window_t

0x0268,	// (0x00074293) bg_popup_call_pane_ParamLimits

0x0268,	// (0x00074293) bg_popup_call_pane

0x67b9,	// (0x0007a7e4) call_thumbnail_pane_cp_ParamLimits

0x67b9,	// (0x0007a7e4) call_thumbnail_pane_cp

0x02ec,	// (0x00074317) call_type_pane_cp01_ParamLimits

0x02ec,	// (0x00074317) call_type_pane_cp01

0x0330,	// (0x0007435b) popup_call_audio_first_window_g1_ParamLimits

0x0330,	// (0x0007435b) popup_call_audio_first_window_g1

0x037c,	// (0x000743a7) popup_call_audio_first_window_g2_ParamLimits

0x037c,	// (0x000743a7) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00083093) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00083093) popup_call_audio_first_window_g

0x03c0,	// (0x000743eb) popup_call_audio_first_window_t1_ParamLimits

0x03c0,	// (0x000743eb) popup_call_audio_first_window_t1

0x046c,	// (0x00074497) popup_call_audio_first_window_t4_ParamLimits

0x046c,	// (0x00074497) popup_call_audio_first_window_t4

0x04f8,	// (0x00074523) popup_call_audio_first_window_t5_ParamLimits

0x04f8,	// (0x00074523) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x00083098) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x00083098) popup_call_audio_first_window_t

0x0527,	// (0x00074552) bg_popup_call_pane_cp02

0x0531,	// (0x0007455c) call_type_pane_cp023

0x0539,	// (0x00074564) popup_call_audio_wait_window_g1

0x0541,	// (0x0007456c) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0008309f) popup_call_audio_wait_window_g

0x0549,	// (0x00074574) popup_call_audio_wait_window_t3

0x0557,	// (0x00074582) bg_popup_call_pane_cp03_ParamLimits

0x0557,	// (0x00074582) bg_popup_call_pane_cp03

0x05b7,	// (0x000745e2) call_thumbnail_pane_cp011_ParamLimits

0x05b7,	// (0x000745e2) call_thumbnail_pane_cp011

0x05c3,	// (0x000745ee) call_type_pane_cp034_ParamLimits

0x05c3,	// (0x000745ee) call_type_pane_cp034

0x05ff,	// (0x0007462a) popup_call_audio_second_window_g1_ParamLimits

0x05ff,	// (0x0007462a) popup_call_audio_second_window_g1

0x063b,	// (0x00074666) popup_call_audio_second_window_g2_ParamLimits

0x063b,	// (0x00074666) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000830a4) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000830a4) popup_call_audio_second_window_g

0x0677,	// (0x000746a2) popup_call_audio_second_window_t1_ParamLimits

0x0677,	// (0x000746a2) popup_call_audio_second_window_t1

0x06f8,	// (0x00074723) popup_call_audio_second_window_t2_ParamLimits

0x06f8,	// (0x00074723) popup_call_audio_second_window_t2

0x072e,	// (0x00074759) popup_call_audio_second_window_t3_ParamLimits

0x072e,	// (0x00074759) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000830a9) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000830a9) popup_call_audio_second_window_t

0x0527,	// (0x00074552) bg_popup_call_pane_cp04

0x0764,	// (0x0007478f) list_conf_pane

0x076c,	// (0x00074797) popup_call_audio_conf_window_t1

0x077a,	// (0x000747a5) call_thumbnail_pane_g1

0x0782,	// (0x000747ad) bg_pinb_pane_ParamLimits

0x0782,	// (0x000747ad) bg_pinb_pane

0x0790,	// (0x000747bb) find_pinb_pane

0x0782,	// (0x000747ad) listscroll_pinb_pane_ParamLimits

0x0782,	// (0x000747ad) listscroll_pinb_pane

0x079a,	// (0x000747c5) pinb_bg_pane_g1

0x079a,	// (0x000747c5) pinb_bg_pane_g2

0x079a,	// (0x000747c5) pinb_bg_pane_g3

0x079a,	// (0x000747c5) pinb_bg_pane_g4

0x079a,	// (0x000747c5) pinb_bg_pane_g5

0x079a,	// (0x000747c5) pinb_bg_pane_g6

0x079a,	// (0x000747c5) pinb_bg_pane_g7

0x079a,	// (0x000747c5) pinb_bg_pane_g8

0x079a,	// (0x000747c5) pinb_bg_pane_g9

0x079a,	// (0x000747c5) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000830b0) pinb_bg_pane_g

0xee29,	// (0x00082e54) grid_pinb_pane

0xee29,	// (0x00082e54) list_pinb_pane

0xee8a,	// (0x00082eb5) scroll_pane_cp01_ParamLimits

0xee8a,	// (0x00082eb5) scroll_pane_cp01

0x07a4,	// (0x000747cf) find_pinb_pane_g1_ParamLimits

0x07a4,	// (0x000747cf) find_pinb_pane_g1

0x07bc,	// (0x000747e7) find_pinb_pane_t1

0x07ce,	// (0x000747f9) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000830ca) find_pinb_pane_t

0x07e3,	// (0x0007480e) input_focus_pane_cp01_ParamLimits

0x07e3,	// (0x0007480e) input_focus_pane_cp01

0x07ef,	// (0x0007481a) cell_pinb_pane_ParamLimits

0x07ef,	// (0x0007481a) cell_pinb_pane

0x07fd,	// (0x00074828) cell_pinb_pane_g1_ParamLimits

0x07fd,	// (0x00074828) cell_pinb_pane_g1

0x080b,	// (0x00074836) cell_pinb_pane_g2_ParamLimits

0x080b,	// (0x00074836) cell_pinb_pane_g2

0x080b,	// (0x00074836) cell_pinb_pane_g3_ParamLimits

0x080b,	// (0x00074836) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000830cf) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000830cf) cell_pinb_pane_g

0x0527,	// (0x00074552) grid_highlight_pane_cp01

0x07ef,	// (0x0007481a) list_pinb_item_pane_ParamLimits

0x07ef,	// (0x0007481a) list_pinb_item_pane

0xee29,	// (0x00082e54) list_highlight_pane_cp02

0x0819,	// (0x00074844) list_pinb_item_pane_g1_ParamLimits

0x0819,	// (0x00074844) list_pinb_item_pane_g1

0x080b,	// (0x00074836) list_pinb_item_pane_g2_ParamLimits

0x080b,	// (0x00074836) list_pinb_item_pane_g2

0x07fd,	// (0x00074828) list_pinb_item_pane_g3_ParamLimits

0x07fd,	// (0x00074828) list_pinb_item_pane_g3

0x080b,	// (0x00074836) list_pinb_item_pane_g4_ParamLimits

0x080b,	// (0x00074836) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000830d6) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000830d6) list_pinb_item_pane_g

0x0827,	// (0x00074852) list_pinb_item_pane_t1_ParamLimits

0x0827,	// (0x00074852) list_pinb_item_pane_t1

0x67f7,	// (0x0007a822) calc_display_pane

0x6815,	// (0x0007a840) calc_paper_pane

0x6831,	// (0x0007a85c) grid_calc_pane

0x0527,	// (0x00074552) bg_list_pane_cp01

0x685d,	// (0x0007a888) clock_g1

0x6865,	// (0x0007a890) clock_g2

0x0001,

0xf0b4,	// (0x000830df) clock_g

0x686f,	// (0x0007a89a) clock_t1_ParamLimits

0x686f,	// (0x0007a89a) clock_t1

0x6884,	// (0x0007a8af) clock_t2_ParamLimits

0x6884,	// (0x0007a8af) clock_t2

0x6896,	// (0x0007a8c1) clock_t3_ParamLimits

0x6896,	// (0x0007a8c1) clock_t3

0x68a8,	// (0x0007a8d3) clock_t4_ParamLimits

0x68a8,	// (0x0007a8d3) clock_t4

0x68ba,	// (0x0007a8e5) clock_t5_ParamLimits

0x68ba,	// (0x0007a8e5) clock_t5

0x68cf,	// (0x0007a8fa) clock_t6_ParamLimits

0x68cf,	// (0x0007a8fa) clock_t6

0x68e1,	// (0x0007a90c) clock_t7_ParamLimits

0x68e1,	// (0x0007a90c) clock_t7

0x68f3,	// (0x0007a91e) clock_t8_ParamLimits

0x68f3,	// (0x0007a91e) clock_t8

0x6909,	// (0x0007a934) clock_t9_ParamLimits

0x6909,	// (0x0007a934) clock_t9

0x0008,

0xf0b9,	// (0x000830e4) clock_t_ParamLimits

0xf0b9,	// (0x000830e4) clock_t

0x083b,	// (0x00074866) popup_clock_analogue_window_cp02

0x083b,	// (0x00074866) popup_clock_digital_window_cp01

0x0527,	// (0x00074552) listscroll_help_pane

0x0527,	// (0x00074552) phob_pre_status_pane

0x0843,	// (0x0007486e) grid_qdial_pane

0x0782,	// (0x000747ad) listscroll_mce_pane

0x0782,	// (0x000747ad) bg_notes_pane

0x084d,	// (0x00074878) list_notes_pane

0x691f,	// (0x0007a94a) scroll_pane_cp06

0x085b,	// (0x00074886) bg_calc_paper_pane

0x692e,	// (0x0007a959) list_calc_pane

0x086f,	// (0x0007489a) bg_calc_display_pane

0x6948,	// (0x0007a973) calc_display_pane_t1

0x695d,	// (0x0007a988) calc_display_pane_t2

0x6972,	// (0x0007a99d) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000830f7) calc_display_pane_t

0x6984,	// (0x0007a9af) cell_calc_pane_ParamLimits

0x6984,	// (0x0007a9af) cell_calc_pane

0x087b,	// (0x000748a6) bg_calc_paper_pane_g1

0x0893,	// (0x000748be) bg_calc_paper_pane_g2

0x0887,	// (0x000748b2) bg_calc_paper_pane_g3

0x08ab,	// (0x000748d6) bg_calc_paper_pane_g4

0x089f,	// (0x000748ca) bg_calc_paper_pane_g5

0x69b1,	// (0x0007a9dc) bg_calc_paper_pane_g6

0x69c2,	// (0x0007a9ed) bg_calc_paper_pane_g7

0x69d3,	// (0x0007a9fe) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000830fe) bg_calc_paper_pane_g

0x69e4,	// (0x0007aa0f) calc_bg_paper_pane_g9

0x69f5,	// (0x0007aa20) list_calc_item_pane_ParamLimits

0x69f5,	// (0x0007aa20) list_calc_item_pane

0x08b7,	// (0x000748e2) list_calc_item_pane_g1

0x6a22,	// (0x0007aa4d) list_calc_item_pane_t1_ParamLimits

0x6a22,	// (0x0007aa4d) list_calc_item_pane_t1

0x6a34,	// (0x0007aa5f) list_calc_item_pane_t2_ParamLimits

0x6a34,	// (0x0007aa5f) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0008310f) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0008310f) list_calc_item_pane_t

0x079a,	// (0x000747c5) cell_calc_pane_g1

0x08c4,	// (0x000748ef) grid_highlight_pane_cp02

0x6a64,	// (0x0007aa8f) bg_calc_display_pane_g1

0x6a6d,	// (0x0007aa98) bg_calc_display_pane_g2

0x6a77,	// (0x0007aaa2) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x00083119) bg_calc_display_pane_g

0x6a80,	// (0x0007aaab) cell_qdial_pane_ParamLimits

0x6a80,	// (0x0007aaab) cell_qdial_pane

0x6a94,	// (0x0007aabf) cell_qdial_pane_g1_ParamLimits

0x6a94,	// (0x0007aabf) cell_qdial_pane_g1

0x6aa1,	// (0x0007aacc) cell_qdial_pane_g2_ParamLimits

0x6aa1,	// (0x0007aacc) cell_qdial_pane_g2

0x08ef,	// (0x0007491a) cell_qdial_pane_g3_ParamLimits

0x08ef,	// (0x0007491a) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x00083120) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x00083120) cell_qdial_pane_g

0x6abe,	// (0x0007aae9) cell_qdial_pane_t1_ParamLimits

0x6abe,	// (0x0007aae9) cell_qdial_pane_t1

0x6ad6,	// (0x0007ab01) cell_qdial_pane_t2_ParamLimits

0x6ad6,	// (0x0007ab01) cell_qdial_pane_t2

0x6ae9,	// (0x0007ab14) cell_qdial_pane_t3_ParamLimits

0x6ae9,	// (0x0007ab14) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x00083129) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x00083129) cell_qdial_pane_t

0x0527,	// (0x00074552) grid_highlight_pane_cp04

0x08fb,	// (0x00074926) thumbnail_qdial_pane_ParamLimits

0x08fb,	// (0x00074926) thumbnail_qdial_pane

0x0957,	// (0x00074982) list_help_pane

0x0960,	// (0x0007498b) scroll_pane_cp02

0x6afc,	// (0x0007ab27) help_list_pane_t1_ParamLimits

0x6afc,	// (0x0007ab27) help_list_pane_t1

0x6b36,	// (0x0007ab61) bg_notes_pane_g2

0x6b3e,	// (0x0007ab69) bg_notes_pane_g3

0x6b46,	// (0x0007ab71) notes_bg_pane_g1

0x6b4e,	// (0x0007ab79) notes_bg_pane_g4

0x6b56,	// (0x0007ab81) notes_bg_pane_g5

0x6b5e,	// (0x0007ab89) notes_bg_pane_g6

0x6b66,	// (0x0007ab91) notes_bg_pane_g7

0x6b6e,	// (0x0007ab99) notes_bg_pane_g8

0x6b76,	// (0x0007aba1) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x00083147) notes_bg_pane_g

0x6b7e,	// (0x0007aba9) list_notes_text_pane_ParamLimits

0x6b7e,	// (0x0007aba9) list_notes_text_pane

0x0969,	// (0x00074994) list_notes_text_pane_g1

0x5773,	// (0x0007979e) list_notes_text_pane_t1

0x6baa,	// (0x0007abd5) listscroll_cale_week_pane

0x6bcf,	// (0x0007abfa) bg_cale_heading_pane

0x098c,	// (0x000749b7) bg_cale_pane_cp01

0x6bf1,	// (0x0007ac1c) cale_week_corner_pane

0x6c0b,	// (0x0007ac36) cale_week_day_heading_pane

0x6c2d,	// (0x0007ac58) cale_week_scroll_pane_g1

0x6c4a,	// (0x0007ac75) cale_week_scroll_pane_g2

0x6c5d,	// (0x0007ac88) cale_week_scroll_pane_g3

0x6c70,	// (0x0007ac9b) cale_week_scroll_pane_g4

0x6c83,	// (0x0007acae) cale_week_scroll_pane_g5

0x6c96,	// (0x0007acc1) cale_week_scroll_pane_g6

0x6ca9,	// (0x0007acd4) cale_week_scroll_pane_g7

0x6cbe,	// (0x0007ace9) cale_week_scroll_pane_g8

0x6cd3,	// (0x0007acfe) cale_week_scroll_pane_g9

0x6ce6,	// (0x0007ad11) cale_week_scroll_pane_g10

0x6cf9,	// (0x0007ad24) cale_week_scroll_pane_g11

0x6d0c,	// (0x0007ad37) cale_week_scroll_pane_g12

0x6d23,	// (0x0007ad4e) cale_week_scroll_pane_g13

0x6d3e,	// (0x0007ad69) cale_week_scroll_pane_g14

0x6d59,	// (0x0007ad84) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x00083156) cale_week_scroll_pane_g

0x6d89,	// (0x0007adb4) cale_week_time_pane

0x6d9e,	// (0x0007adc9) grid_cale_week_pane

0x09bb,	// (0x000749e6) scroll_pane_cp08

0x6dbd,	// (0x0007ade8) cell_cale_week_pane_ParamLimits

0x6dbd,	// (0x0007ade8) cell_cale_week_pane

0x6e1f,	// (0x0007ae4a) cale_week_day_heading_pane_t1

0x6e3a,	// (0x0007ae65) cale_week_day_heading_pane_t2

0x6e55,	// (0x0007ae80) cale_week_day_heading_pane_t3

0x6e70,	// (0x0007ae9b) cale_week_day_heading_pane_t4

0x6e8b,	// (0x0007aeb6) cale_week_day_heading_pane_t5

0x6ea6,	// (0x0007aed1) cale_week_day_heading_pane_t6

0x6ec1,	// (0x0007aeec) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x00083177) cale_week_day_heading_pane_t

0x09d8,	// (0x00074a03) bg_cale_side_pane

0x6edc,	// (0x0007af07) cale_week_time_pane_t1

0x6ef6,	// (0x0007af21) cale_week_time_pane_t2

0x6f10,	// (0x0007af3b) cale_week_time_pane_t3

0x6f2a,	// (0x0007af55) cale_week_time_pane_t4

0x6f44,	// (0x0007af6f) cale_week_time_pane_t5

0x6f5e,	// (0x0007af89) cale_week_time_pane_t6

0x6f7e,	// (0x0007afa9) cale_week_time_pane_t7

0x6fa0,	// (0x0007afcb) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00083186) cale_week_time_pane_t

0x6fc4,	// (0x0007afef) cell_cale_week_pane_g2

0x6fe8,	// (0x0007b013) cell_cale_week_pane_g3_ParamLimits

0x6fe8,	// (0x0007b013) cell_cale_week_pane_g3

0x09e6,	// (0x00074a11) grid_highlight_pane_cp07

0x09ee,	// (0x00074a19) listscroll_gms_pane

0x09f8,	// (0x00074a23) grid_gms_pane

0x0a01,	// (0x00074a2c) listscroll_gms_pane_g1

0x0a09,	// (0x00074a34) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x00083197) listscroll_gms_pane_g

0x7000,	// (0x0007b02b) scroll_pane_cp010

0x700b,	// (0x0007b036) cell_gms_pane_ParamLimits

0x700b,	// (0x0007b036) cell_gms_pane

0x701b,	// (0x0007b046) cell_gms_pane_g1

0x0a11,	// (0x00074a3c) cell_gms_pane_g2

0x0969,	// (0x00074994) cell_gms_pane_g3

0x0a19,	// (0x00074a44) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0008319c) cell_gms_pane_g

0x0a22,	// (0x00074a4d) grid_highlight_pane_cp09

0x90ac,	// (0x0007d0d7) phob_pre_status_pane_g1

0x90b4,	// (0x0007d0df) phob_pre_status_pane_g2

0x90bc,	// (0x0007d0e7) phob_pre_status_pane_g3

0x90c4,	// (0x0007d0ef) phob_pre_status_pane_g4

0x0004,

0xf54d,	// (0x00083578) phob_pre_status_pane_g

0x90d4,	// (0x0007d0ff) phob_pre_status_pane_t1

0x90e4,	// (0x0007d10f) phob_pre_status_pane_t2

0x90f4,	// (0x0007d11f) phob_pre_status_pane_t3

0x0002,

0xf558,	// (0x00083583) phob_pre_status_pane_t

0x0a2a,	// (0x00074a55) bg_list_pane_cp05

0x702b,	// (0x0007b056) grid_vorec_pane

0x7035,	// (0x0007b060) vorec_t1

0x7043,	// (0x0007b06e) vorec_t2

0x7051,	// (0x0007b07c) vorec_t3

0x705f,	// (0x0007b08a) vorec_t4

0xda85,	// (0x00081ab0) vorec_t5

0xda93,	// (0x00081abe) vorec_t6

0x0004,

0xf17a,	// (0x000831a5) vorec_t

0xdaa1,	// (0x00081acc) wait_bar_pane_cp01

0x707b,	// (0x0007b0a6) cell_vorec_pane_ParamLimits

0x707b,	// (0x0007b0a6) cell_vorec_pane

0x708e,	// (0x0007b0b9) cell_vorec_pane_g1

0x0527,	// (0x00074552) grid_highlight_pane_cp05

0x07ef,	// (0x0007481a) cams_zoom_pane

0x07ef,	// (0x0007481a) image_vga_pane

0x080b,	// (0x00074836) main_camera_pane_g1

0x080b,	// (0x00074836) main_camera_pane_g2

0x080b,	// (0x00074836) main_camera_pane_g3

0x080b,	// (0x00074836) main_camera_pane_g4

0x080b,	// (0x00074836) main_camera_pane_g5

0x080b,	// (0x00074836) main_camera_pane_g6

0x080b,	// (0x00074836) main_camera_pane_g7

0x0007,

0xf185,	// (0x000831b0) main_camera_pane_g

0x1539,	// (0x00075564) main_camera_pane_t1

0x1539,	// (0x00075564) main_camera_pane_t2

0x0001,

0xf196,	// (0x000831c1) main_camera_pane_t

0x7098,	// (0x0007b0c3) cams_zoom_pane_cp_ParamLimits

0x7098,	// (0x0007b0c3) cams_zoom_pane_cp

0x70c6,	// (0x0007b0f1) image_cif_pane_ParamLimits

0x70c6,	// (0x0007b0f1) image_cif_pane

0xee29,	// (0x00082e54) image_subqcif_pane

0x70d4,	// (0x0007b0ff) main_video_pane_g1_ParamLimits

0x70d4,	// (0x0007b0ff) main_video_pane_g1

0x70fc,	// (0x0007b127) main_video_pane_g2_ParamLimits

0x70fc,	// (0x0007b127) main_video_pane_g2

0x712f,	// (0x0007b15a) main_video_pane_g3_ParamLimits

0x712f,	// (0x0007b15a) main_video_pane_g3

0x712f,	// (0x0007b15a) main_video_pane_g4_ParamLimits

0x712f,	// (0x0007b15a) main_video_pane_g4

0x715d,	// (0x0007b188) main_video_pane_g5_ParamLimits

0x715d,	// (0x0007b188) main_video_pane_g5

0x0a46,	// (0x00074a71) main_video_pane_g6_ParamLimits

0x0a46,	// (0x00074a71) main_video_pane_g6

0x0006,

0xf19b,	// (0x000831c6) main_video_pane_g_ParamLimits

0xf19b,	// (0x000831c6) main_video_pane_g

0x7179,	// (0x0007b1a4) main_video_pane_t1_ParamLimits

0x7179,	// (0x0007b1a4) main_video_pane_t1

0x0a60,	// (0x00074a8b) cams_zoom_pane_g1

0x0a60,	// (0x00074a8b) cams_zoom_pane_g2

0x0a60,	// (0x00074a8b) cams_zoom_pane_g3

0x0a60,	// (0x00074a8b) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000831d5) cams_zoom_pane_g

0x71bf,	// (0x0007b1ea) grid_cams_pane

0x71cd,	// (0x0007b1f8) linegrid_cams_pane

0x71db,	// (0x0007b206) cell_cams_pane_ParamLimits

0x71db,	// (0x0007b206) cell_cams_pane

0x0a6a,	// (0x00074a95) cams_burst_image_pane

0x0a72,	// (0x00074a9d) cell_cams_pane_g1

0x0527,	// (0x00074552) grid_highlight_pane_cp03

0x079a,	// (0x000747c5) mp_bg_pane_g1

0xee29,	// (0x00082e54) bg_list_pane_cp03

0xee29,	// (0x00082e54) bg_mp_pane

0xee29,	// (0x00082e54) grid_mp_pane

0x0a60,	// (0x00074a8b) media_player_g1

0x0f9c,	// (0x00074fc7) media_player_t1

0x0f9c,	// (0x00074fc7) media_player_t2

0x0f9c,	// (0x00074fc7) media_player_t3

0x0f9c,	// (0x00074fc7) media_player_t4

0x0f9c,	// (0x00074fc7) media_player_t5

0x0f9c,	// (0x00074fc7) media_player_t6

0x0f9c,	// (0x00074fc7) media_player_t7

0x0006,

0xf537,	// (0x00083562) media_player_t

0xee29,	// (0x00082e54) wait_bar_pane_cp02

0xf51c,	// (0x00083547) main_usb_pane_t

0x1208,	// (0x00075233) cell_mp_pane

0x079a,	// (0x000747c5) cell_mp_pane_g1

0x0527,	// (0x00074552) grid_highlight_pane_cp06

0x0a7a,	// (0x00074aa5) grid_skin_colour_pane

0x0a82,	// (0x00074aad) list_highlight_pane_cp03

0x71ee,	// (0x0007b219) skin_g1

0x0a8a,	// (0x00074ab5) skin_t1

0x0a99,	// (0x00074ac4) skin_t2

0x0001,

0xf1d8,	// (0x00083203) skin_t

0x71f8,	// (0x0007b223) cell_skin_colour_pane_ParamLimits

0x71f8,	// (0x0007b223) cell_skin_colour_pane

0x0aa7,	// (0x00074ad2) cell_skin_colour_pane_g1

0x727c,	// (0x0007b2a7) call_video_g1_ParamLimits

0x727c,	// (0x0007b2a7) call_video_g1

0x728c,	// (0x0007b2b7) call_video_g2_ParamLimits

0x728c,	// (0x0007b2b7) call_video_g2

0x0001,

0xf1dd,	// (0x00083208) call_video_g_ParamLimits

0xf1dd,	// (0x00083208) call_video_g

0x72e6,	// (0x0007b311) call_video_uplink_pane_cp1_ParamLimits

0x72e6,	// (0x0007b311) call_video_uplink_pane_cp1

0x0ab9,	// (0x00074ae4) call_video_uplink_pane_cp2

0x73b2,	// (0x0007b3dd) video_down_crop_pane_ParamLimits

0x73b2,	// (0x0007b3dd) video_down_crop_pane

0x74a4,	// (0x0007b4cf) video_down_pane_ParamLimits

0x74a4,	// (0x0007b4cf) video_down_pane

0x0ac1,	// (0x00074aec) video_down_subqcif_pane_ParamLimits

0x0ac1,	// (0x00074aec) video_down_subqcif_pane

0x0ad9,	// (0x00074b04) video_down_subqcif_pane_cp_ParamLimits

0x0ad9,	// (0x00074b04) video_down_subqcif_pane_cp

0x0aff,	// (0x00074b2a) im_reading_pane_ParamLimits

0x0aff,	// (0x00074b2a) im_reading_pane

0x75c4,	// (0x0007b5ef) im_writing_pane_ParamLimits

0x75c4,	// (0x0007b5ef) im_writing_pane

0x75e2,	// (0x0007b60d) im_reading_pane_t1

0x0b19,	// (0x00074b44) list_im_pane

0x0b2a,	// (0x00074b55) scroll_pane_cp07

0x763a,	// (0x0007b665) im_writing_pane_t1_ParamLimits

0x763a,	// (0x0007b665) im_writing_pane_t1

0x0b43,	// (0x00074b6e) im_writing_pane_t2_ParamLimits

0x0b43,	// (0x00074b6e) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x00083212) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x00083212) im_writing_pane_t

0x0527,	// (0x00074552) input_focus_pane_cp04

0x0527,	// (0x00074552) input_focus_pane_cp05

0x764c,	// (0x0007b677) list_im_single_pane_ParamLimits

0x764c,	// (0x0007b677) list_im_single_pane

0x7673,	// (0x0007b69e) list_single_im_pane_t1

0x0a2a,	// (0x00074a55) blid_accuracy_pane

0x0a2a,	// (0x00074a55) blid_compass_pane

0x27b1,	// (0x000767dc) main_location_t1

0x27b1,	// (0x000767dc) main_location_t2

0x27b1,	// (0x000767dc) main_location_t3

0x0002,

0xf546,	// (0x00083571) main_location_t

0x0527,	// (0x00074552) aid_levels_location

0x079a,	// (0x000747c5) blid_accuracy_pane_g1

0x079a,	// (0x000747c5) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x00083266) blid_accuracy_pane_g

0x0b8b,	// (0x00074bb6) wml_content_pane

0x0bc9,	// (0x00074bf4) wml_button_pane_ParamLimits

0x0bc9,	// (0x00074bf4) wml_button_pane

0x7682,	// (0x0007b6ad) wml_list_single_large_pane_ParamLimits

0x7682,	// (0x0007b6ad) wml_list_single_large_pane

0x76ad,	// (0x0007b6d8) wml_list_single_medium_pane_ParamLimits

0x76ad,	// (0x0007b6d8) wml_list_single_medium_pane

0x76df,	// (0x0007b70a) wml_list_single_small_pane_ParamLimits

0x76df,	// (0x0007b70a) wml_list_single_small_pane

0x0bdd,	// (0x00074c08) wml_selection_box_pane_ParamLimits

0x0bdd,	// (0x00074c08) wml_selection_box_pane

0x0bf0,	// (0x00074c1b) wml_list_single_pane_t1

0x0bff,	// (0x00074c2a) wml_list_single_medium_pane_t1

0x0c0e,	// (0x00074c39) wml_list_single_large_pane_t1

0x0c1d,	// (0x00074c48) input_focus_pane_cp02_ParamLimits

0x0c1d,	// (0x00074c48) input_focus_pane_cp02

0x0c30,	// (0x00074c5b) wml_selection_box_pane_g1

0x0c39,	// (0x00074c64) wml_selection_box_pane_t1_ParamLimits

0x0c39,	// (0x00074c64) wml_selection_box_pane_t1

0x0782,	// (0x000747ad) bg_wml_button_pane_ParamLimits

0x0782,	// (0x000747ad) bg_wml_button_pane

0x0c5a,	// (0x00074c85) wml_button_pane_g1

0x0c62,	// (0x00074c8d) wml_button_pane_t1

0x0c5a,	// (0x00074c85) wml_button_bg_pane_g1

0x0c72,	// (0x00074c9d) wml_button_bg_pane_g2

0x0c7a,	// (0x00074ca5) wml_button_bg_pane_g3

0x0c82,	// (0x00074cad) wml_button_bg_pane_g4

0x0c8a,	// (0x00074cb5) wml_button_bg_pane_g5

0x0c92,	// (0x00074cbd) wml_button_bg_pane_g6

0x0c9a,	// (0x00074cc5) wml_button_bg_pane_g7

0x0ca2,	// (0x00074ccd) wml_button_bg_pane_g8

0x0caa,	// (0x00074cd5) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x00083217) wml_button_bg_pane_g

0x771c,	// (0x0007b747) bg_list_pane_cp02

0x0cb2,	// (0x00074cdd) mce_header_pane_ParamLimits

0x0cb2,	// (0x00074cdd) mce_header_pane

0x0cc8,	// (0x00074cf3) mce_icon_pane

0x0cc8,	// (0x00074cf3) mce_image_pane

0x0cd1,	// (0x00074cfc) mce_text_pane_ParamLimits

0x0cd1,	// (0x00074cfc) mce_text_pane

0x7726,	// (0x0007b751) scroll_pane_cp03

0x0bc1,	// (0x00074bec) scroll_pane_cp04

0x0ce4,	// (0x00074d0f) scroll_pane_cp05_ParamLimits

0x0ce4,	// (0x00074d0f) scroll_pane_cp05

0x7730,	// (0x0007b75b) mce_header_field_pane_ParamLimits

0x7730,	// (0x0007b75b) mce_header_field_pane

0x7750,	// (0x0007b77b) mce_header_field_pane_2_ParamLimits

0x7750,	// (0x0007b77b) mce_header_field_pane_2

0x7766,	// (0x0007b791) mce_header_field_pane_3

0x776e,	// (0x0007b799) list_single_mce_message_pane_ParamLimits

0x776e,	// (0x0007b799) list_single_mce_message_pane

0x779c,	// (0x0007b7c7) list_single_mce_smart_pane_ParamLimits

0x779c,	// (0x0007b7c7) list_single_mce_smart_pane

0x0cf0,	// (0x00074d1b) input_focus_pane_cp03

0x0cf9,	// (0x00074d24) list_header_data_pane

0x77d5,	// (0x0007b800) mce_header_field_pane_t1

0x77e3,	// (0x0007b80e) list_single_mce_header_pane_ParamLimits

0x77e3,	// (0x0007b80e) list_single_mce_header_pane

0x0d01,	// (0x00074d2c) list_single_mce_header_pane_t1

0x0d10,	// (0x00074d3b) list_single_mce_message_pane_g1

0x0d18,	// (0x00074d43) list_single_mce_message_pane_t1

0x7839,	// (0x0007b864) bg_cale_heading_pane_cp01_ParamLimits

0x7839,	// (0x0007b864) bg_cale_heading_pane_cp01

0x0d26,	// (0x00074d51) bg_cale_pane_cp02_ParamLimits

0x0d26,	// (0x00074d51) bg_cale_pane_cp02

0x7887,	// (0x0007b8b2) cale_month_corner_pane

0x78a6,	// (0x0007b8d1) cale_month_day_heading_pane_ParamLimits

0x78a6,	// (0x0007b8d1) cale_month_day_heading_pane

0x790c,	// (0x0007b937) cale_month_pane_g1_ParamLimits

0x790c,	// (0x0007b937) cale_month_pane_g1

0x794f,	// (0x0007b97a) cale_month_pane_g2_ParamLimits

0x794f,	// (0x0007b97a) cale_month_pane_g2

0x7989,	// (0x0007b9b4) cale_month_pane_g3_ParamLimits

0x7989,	// (0x0007b9b4) cale_month_pane_g3

0x79d9,	// (0x0007ba04) cale_month_pane_g4_ParamLimits

0x79d9,	// (0x0007ba04) cale_month_pane_g4

0x7a29,	// (0x0007ba54) cale_month_pane_g5_ParamLimits

0x7a29,	// (0x0007ba54) cale_month_pane_g5

0x7a79,	// (0x0007baa4) cale_month_pane_g6_ParamLimits

0x7a79,	// (0x0007baa4) cale_month_pane_g6

0x7ac9,	// (0x0007baf4) cale_month_pane_g7_ParamLimits

0x7ac9,	// (0x0007baf4) cale_month_pane_g7

0x7b31,	// (0x0007bb5c) cale_month_pane_g8_ParamLimits

0x7b31,	// (0x0007bb5c) cale_month_pane_g8

0x7b99,	// (0x0007bbc4) cale_month_pane_g9_ParamLimits

0x7b99,	// (0x0007bbc4) cale_month_pane_g9

0x7bf7,	// (0x0007bc22) cale_month_pane_g10_ParamLimits

0x7bf7,	// (0x0007bc22) cale_month_pane_g10

0x7c55,	// (0x0007bc80) cale_month_pane_g11_ParamLimits

0x7c55,	// (0x0007bc80) cale_month_pane_g11

0x7ca9,	// (0x0007bcd4) cale_month_pane_g12_ParamLimits

0x7ca9,	// (0x0007bcd4) cale_month_pane_g12

0x7cff,	// (0x0007bd2a) cale_month_pane_g13_ParamLimits

0x7cff,	// (0x0007bd2a) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0008322a) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0008322a) cale_month_pane_g

0x7d55,	// (0x0007bd80) cale_month_week_pane

0x7d79,	// (0x0007bda4) grid_cale_month_pane_ParamLimits

0x7d79,	// (0x0007bda4) grid_cale_month_pane

0x7dd6,	// (0x0007be01) cale_month_day_heading_pane_t1

0x7e5c,	// (0x0007be87) cale_month_day_heading_pane_t2

0x7ed5,	// (0x0007bf00) cale_month_day_heading_pane_t3

0x7f4e,	// (0x0007bf79) cale_month_day_heading_pane_t4

0x7fc7,	// (0x0007bff2) cale_month_day_heading_pane_t5

0x8040,	// (0x0007c06b) cale_month_day_heading_pane_t6

0x80b9,	// (0x0007c0e4) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x00083245) cale_month_day_heading_pane_t

0x09d8,	// (0x00074a03) bg_cale_side_pane_cp01

0x814a,	// (0x0007c175) cale_month_week_pane_t1

0x8163,	// (0x0007c18e) cale_month_week_pane_t2

0x817c,	// (0x0007c1a7) cale_month_week_pane_t3

0x8195,	// (0x0007c1c0) cale_month_week_pane_t4

0x81b0,	// (0x0007c1db) cale_month_week_pane_t5

0x81d1,	// (0x0007c1fc) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x00083254) cale_month_week_pane_t

0x81f2,	// (0x0007c21d) cell_cale_month_pane_ParamLimits

0x81f2,	// (0x0007c21d) cell_cale_month_pane

0x8318,	// (0x0007c343) cell_cale_month_pane_g1

0x8324,	// (0x0007c34f) cell_cale_month_pane_t1_ParamLimits

0x8324,	// (0x0007c34f) cell_cale_month_pane_t1

0x09e6,	// (0x00074a11) grid_highlight_pane_cp08

0x079a,	// (0x000747c5) main_smil_g1

0x8350,	// (0x0007c37b) smil_status_pane

0x0d65,	// (0x00074d90) smil_text_pane

0x267b,	// (0x000766a6) bg_popup_call3_rect_pane_g8

0x2683,	// (0x000766ae) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x000834f2) bg_popup_call3_rect_pane_g

0x288d,	// (0x000768b8) smil_status_volume_pane_g1

0x0d6f,	// (0x00074d9a) smil_status_pane_t1

0x9447,	// (0x0007d472) volume_smil_pane

0x0d86,	// (0x00074db1) list_smil_text_pane

0x8363,	// (0x0007c38e) scroll_pane_cp011

0x836e,	// (0x0007c399) smil_text_list_pane_t1_ParamLimits

0x836e,	// (0x0007c399) smil_text_list_pane_t1

0x83fb,	// (0x0007c426) aid_volume_smil_ParamLimits

0x83fb,	// (0x0007c426) aid_volume_smil

0x079a,	// (0x000747c5) smil_volume_pane_g1

0x079a,	// (0x000747c5) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x00083266) smil_volume_pane_g

0x6baa,	// (0x0007abd5) listscroll_cale_day_pane

0x0d90,	// (0x00074dbb) bg_cale_pane

0x0da8,	// (0x00074dd3) list_cale_pane

0x0dcb,	// (0x00074df6) scroll_pane_cp09

0x0ddc,	// (0x00074e07) cale_bg_pane_g1

0x0de4,	// (0x00074e0f) cale_bg_pane_g2

0x0dec,	// (0x00074e17) cale_bg_pane_g3

0x0df4,	// (0x00074e1f) cale_bg_pane_g4

0x0dfc,	// (0x00074e27) cale_bg_pane_g5

0x0e04,	// (0x00074e2f) cale_bg_pane_g6

0x0e0c,	// (0x00074e37) cale_bg_pane_g7

0x0e14,	// (0x00074e3f) cale_bg_pane_g8

0x0e1c,	// (0x00074e47) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0008326b) cale_bg_pane_g

0x8425,	// (0x0007c450) list_cale_time_pane_ParamLimits

0x8425,	// (0x0007c450) list_cale_time_pane

0x0e24,	// (0x00074e4f) list_cale_time_pane_g1_ParamLimits

0x0e24,	// (0x00074e4f) list_cale_time_pane_g1

0x0e30,	// (0x00074e5b) list_cale_time_pane_g2_ParamLimits

0x0e30,	// (0x00074e5b) list_cale_time_pane_g2

0x844d,	// (0x0007c478) list_cale_time_pane_g3_ParamLimits

0x844d,	// (0x0007c478) list_cale_time_pane_g3

0x845b,	// (0x0007c486) list_cale_time_pane_g4_ParamLimits

0x845b,	// (0x0007c486) list_cale_time_pane_g4

0x8469,	// (0x0007c494) list_cale_time_pane_g5_ParamLimits

0x8469,	// (0x0007c494) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0008327e) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0008327e) list_cale_time_pane_g

0x0e4a,	// (0x00074e75) list_cale_time_pane_t1_ParamLimits

0x0e4a,	// (0x00074e75) list_cale_time_pane_t1

0x0e72,	// (0x00074e9d) list_cale_time_pane_t2_ParamLimits

0x0e72,	// (0x00074e9d) list_cale_time_pane_t2

0x8724,	// (0x0007c74f) aid_blid_cardinal_pane

0x8766,	// (0x0007c791) compass_pane_t4

0x0e9a,	// (0x00074ec5) list_cale_time_pane_t4_ParamLimits

0x0e9a,	// (0x00074ec5) list_cale_time_pane_t4

0x8774,	// (0x0007c79f) compass_pane_t5

0x8784,	// (0x0007c7af) compass_pane_t6

0x8792,	// (0x0007c7bd) compass_pane_t7

0x1322,	// (0x0007534d) navi_pane_cc_t1

0x14ff,	// (0x0007552a) aid_phob_thumbnail_center_pane

0x8b45,	// (0x0007cb70) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0008328b) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0008328b) list_cale_time_pane_t

0x017e,	// (0x000741a9) bg_popup_window_pane_cp02_ParamLimits

0x017e,	// (0x000741a9) bg_popup_window_pane_cp02

0x0ec2,	// (0x00074eed) heading_pane_cp01_ParamLimits

0x0ec2,	// (0x00074eed) heading_pane_cp01

0x0ece,	// (0x00074ef9) loc_req_pane_ParamLimits

0x0ece,	// (0x00074ef9) loc_req_pane

0x0ede,	// (0x00074f09) loc_type_pane_ParamLimits

0x0ede,	// (0x00074f09) loc_type_pane

0x0ef0,	// (0x00074f1b) loc_type_pane_t1_ParamLimits

0x0ef0,	// (0x00074f1b) loc_type_pane_t1

0x0f02,	// (0x00074f2d) loc_type_pane_t2_ParamLimits

0x0f02,	// (0x00074f2d) loc_type_pane_t2

0x0f14,	// (0x00074f3f) loc_type_pane_t3_ParamLimits

0x0f14,	// (0x00074f3f) loc_type_pane_t3

0x0002,

0xf267,	// (0x00083292) loc_type_pane_t_ParamLimits

0xf267,	// (0x00083292) loc_type_pane_t

0x0f26,	// (0x00074f51) list_loc_req_pane

0x0f30,	// (0x00074f5b) scroll_pane_cp012

0x5781,	// (0x000797ac) list_single_loc_request_popup_menu_pane_ParamLimits

0x5781,	// (0x000797ac) list_single_loc_request_popup_menu_pane

0x0f3b,	// (0x00074f66) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0f3b,	// (0x00074f66) list_single_loc_request_popup_menu_pane_g1

0x0f47,	// (0x00074f72) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0f47,	// (0x00074f72) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x00083299) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x00083299) list_single_loc_request_popup_menu_pane_g

0x0f53,	// (0x00074f7e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0f53,	// (0x00074f7e) list_single_loc_request_popup_menu_pane_t1

0x8477,	// (0x0007c4a2) bg_popup_window_pane_cp03_ParamLimits

0x8477,	// (0x0007c4a2) bg_popup_window_pane_cp03

0x8485,	// (0x0007c4b0) heading_loc_req_pane_ParamLimits

0x8485,	// (0x0007c4b0) heading_loc_req_pane

0x8491,	// (0x0007c4bc) popup_dyc_status_message_window_g1_ParamLimits

0x8491,	// (0x0007c4bc) popup_dyc_status_message_window_g1

0x849d,	// (0x0007c4c8) popup_dyc_status_message_window_t1_ParamLimits

0x849d,	// (0x0007c4c8) popup_dyc_status_message_window_t1

0x84af,	// (0x0007c4da) popup_dyc_status_message_window_t2_ParamLimits

0x84af,	// (0x0007c4da) popup_dyc_status_message_window_t2

0x84c1,	// (0x0007c4ec) popup_dyc_status_message_window_t3_ParamLimits

0x84c1,	// (0x0007c4ec) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0008329e) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0008329e) popup_dyc_status_message_window_t

0x0527,	// (0x00074552) bg_heading_pane_cp01

0x0f75,	// (0x00074fa0) heading_loc_req_pane_g1

0x0f7d,	// (0x00074fa8) heading_loc_req_pane_g2

0x0f85,	// (0x00074fb0) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x000832a5) heading_loc_req_pane_g

0x0f8d,	// (0x00074fb8) heading_loc_req_pane_t1

0x0fac,	// (0x00074fd7) bg_popup_sub_pane_cp01_ParamLimits

0x0fac,	// (0x00074fd7) bg_popup_sub_pane_cp01

0x0fba,	// (0x00074fe5) popup_cale_events_window_g1_ParamLimits

0x0fba,	// (0x00074fe5) popup_cale_events_window_g1

0x0fda,	// (0x00075005) popup_cale_events_window_g2_ParamLimits

0x0fda,	// (0x00075005) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x000832c7) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x000832c7) popup_cale_events_window_g

0x0ffa,	// (0x00075025) popup_cale_events_window_t1_ParamLimits

0x0ffa,	// (0x00075025) popup_cale_events_window_t1

0x100c,	// (0x00075037) popup_cale_events_window_t2_ParamLimits

0x100c,	// (0x00075037) popup_cale_events_window_t2

0x104a,	// (0x00075075) popup_cale_events_window_t3_ParamLimits

0x104a,	// (0x00075075) popup_cale_events_window_t3

0x1084,	// (0x000750af) popup_cale_events_window_t4_ParamLimits

0x1084,	// (0x000750af) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x000832cc) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x000832cc) popup_cale_events_window_t

0x84eb,	// (0x0007c516) call_type_pane

0x1ea6,	// (0x00075ed1) popup_call_status_window_g1

0x84f7,	// (0x0007c522) popup_call_status_window_g2

0x8503,	// (0x0007c52e) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x000832d5) popup_call_status_window_g

0x10ba,	// (0x000750e5) call_type_pane_g1

0x10c3,	// (0x000750ee) call_type_pane_g2

0x0001,

0xf2b1,	// (0x000832dc) call_type_pane_g

0x0527,	// (0x00074552) bg_popup_sub_pane_cp02

0x10cc,	// (0x000750f7) listscroll_popup_wml_pane

0x10d4,	// (0x000750ff) list_wml_pane

0x10de,	// (0x00075109) scroll_pane_cp013

0x10e9,	// (0x00075114) list_single_graphic_popup_wml_pane_ParamLimits

0x10e9,	// (0x00075114) list_single_graphic_popup_wml_pane

0x079a,	// (0x000747c5) list_single_graphic_popup_wml_pane_g1

0x10fd,	// (0x00075128) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x000832e1) list_single_graphic_popup_wml_pane_g

0x1105,	// (0x00075130) list_single_graphic_popup_wml_pane_t1

0x1113,	// (0x0007513e) aid_call_pane

0x077a,	// (0x000747a5) popup_clock_analogue_window_g1

0x077a,	// (0x000747a5) popup_clock_analogue_window_g2

0x850f,	// (0x0007c53a) popup_clock_analogue_window_g3

0x850f,	// (0x0007c53a) popup_clock_analogue_window_g4

0x079a,	// (0x000747c5) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x000832e6) popup_clock_analogue_window_g

0x8517,	// (0x0007c542) popup_clock_analogue_window_t1

0x8525,	// (0x0007c550) clock_digital_number_pane_ParamLimits

0x8525,	// (0x0007c550) clock_digital_number_pane

0x8531,	// (0x0007c55c) clock_digital_number_pane_cp02_ParamLimits

0x8531,	// (0x0007c55c) clock_digital_number_pane_cp02

0x853d,	// (0x0007c568) clock_digital_number_pane_cp03_ParamLimits

0x853d,	// (0x0007c568) clock_digital_number_pane_cp03

0x8549,	// (0x0007c574) clock_digital_number_pane_cp04_ParamLimits

0x8549,	// (0x0007c574) clock_digital_number_pane_cp04

0x8555,	// (0x0007c580) clock_digital_separator_pane_ParamLimits

0x8555,	// (0x0007c580) clock_digital_separator_pane

0x8561,	// (0x0007c58c) popup_clock_digital_window_t1

0x079a,	// (0x000747c5) clock_digital_number_pane_g1

0x079a,	// (0x000747c5) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x00083266) clock_digital_number_pane_g

0x079a,	// (0x000747c5) clock_digital_separator_pane_g1

0x079a,	// (0x000747c5) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x00083266) clock_digital_separator_pane_g

0x0527,	// (0x00074552) bg_popup_window_pane_cp04

0x1123,	// (0x0007514e) heading_pane_cp03

0x0a2a,	// (0x00074a55) listscroll_popup_gms_pane

0x0527,	// (0x00074552) grid_large_graphic_popup_pane

0x112c,	// (0x00075157) listscroll_popup_gms_pane_g1

0x1135,	// (0x00075160) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x000832f1) listscroll_popup_gms_pane_g

0x113e,	// (0x00075169) scroll_pane_cp014

0x07ef,	// (0x0007481a) cell_large_graphic_popup_pane_ParamLimits

0x07ef,	// (0x0007481a) cell_large_graphic_popup_pane

0x07fd,	// (0x00074828) cell_large_graphic_popup_pane_g1_ParamLimits

0x07fd,	// (0x00074828) cell_large_graphic_popup_pane_g1

0x1147,	// (0x00075172) cell_large_graphic_popup_pane_g2_ParamLimits

0x1147,	// (0x00075172) cell_large_graphic_popup_pane_g2

0x1155,	// (0x00075180) cell_large_graphic_popup_pane_g3_ParamLimits

0x1155,	// (0x00075180) cell_large_graphic_popup_pane_g3

0x1163,	// (0x0007518e) cell_large_graphic_popup_pane_g4_ParamLimits

0x1163,	// (0x0007518e) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x000832f6) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x000832f6) cell_large_graphic_popup_pane_g

0x0527,	// (0x00074552) grid_highlight_pane_cp010

0x079a,	// (0x000747c5) bg_popup_call_pane_g1

0x1174,	// (0x0007519f) list_single_graphic_popup_conf_pane_ParamLimits

0x1174,	// (0x0007519f) list_single_graphic_popup_conf_pane

0x1187,	// (0x000751b2) list_highlight_pane_cp01

0x1190,	// (0x000751bb) list_single_graphic_popup_conf_pane_g1

0x1198,	// (0x000751c3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x000832ff) list_single_graphic_popup_conf_pane_g

0x11a0,	// (0x000751cb) list_single_graphic_popup_conf_pane_t1

0x11ae,	// (0x000751d9) linegrid_cams_pane_g1

0x857e,	// (0x0007c5a9) linegrid_cams_pane_g2

0x0969,	// (0x00074994) linegrid_cams_pane_g3

0x11b7,	// (0x000751e2) linegrid_cams_pane_g4

0x8587,	// (0x0007c5b2) linegrid_cams_pane_g5

0x8590,	// (0x0007c5bb) linegrid_cams_pane_g6

0x0a19,	// (0x00074a44) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x00083304) linegrid_cams_pane_g

0x11c0,	// (0x000751eb) popup_clock_analogue_window

0x11c0,	// (0x000751eb) popup_clock_digital_window

0x0527,	// (0x00074552) popup_phob_thumbnail_window

0x079a,	// (0x000747c5) call_video_uplink_pane_g1

0x11c9,	// (0x000751f4) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x00083313) call_video_uplink_pane_g

0x11d1,	// (0x000751fc) video_uplink_pane

0x11d9,	// (0x00075204) mce_image_pane_g1

0x8599,	// (0x0007c5c4) mce_image_pane_g2

0x85a1,	// (0x0007c5cc) mce_image_pane_g3

0x85a9,	// (0x0007c5d4) mce_image_pane_g4

0x85b1,	// (0x0007c5dc) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x00083318) mce_image_pane_g

0x11e3,	// (0x0007520e) control_top_pane_stacon_cp01_ParamLimits

0x11e3,	// (0x0007520e) control_top_pane_stacon_cp01

0x11f7,	// (0x00075222) uni_indicator_pane_stacon_cp01_ParamLimits

0x11f7,	// (0x00075222) uni_indicator_pane_stacon_cp01

0x1208,	// (0x00075233) bg_popup_sub_pane_cp03

0x85b9,	// (0x0007c5e4) chi_dic_find_pane

0x85c1,	// (0x0007c5ec) listscroll_chi_dic_pane

0x85ca,	// (0x0007c5f5) main_pane_chidic_g1

0x85dd,	// (0x0007c608) chi_dic_find_pane_t1

0x1212,	// (0x0007523d) find_chidic_pane

0x121b,	// (0x00075246) chi_dic_list_pane_ParamLimits

0x121b,	// (0x00075246) chi_dic_list_pane

0x122c,	// (0x00075257) scroll_pane_cp020

0x85eb,	// (0x0007c616) find_chidic_pane_t1

0x0527,	// (0x00074552) input_focus_pane_cp06

0x85fa,	// (0x0007c625) list_chi_dic_pane_ParamLimits

0x85fa,	// (0x0007c625) list_chi_dic_pane

0x8617,	// (0x0007c642) list_chi_dic_pane_t1_ParamLimits

0x8617,	// (0x0007c642) list_chi_dic_pane_t1

0x0527,	// (0x00074552) list_highlight_pane_cp020

0x1234,	// (0x0007525f) bg_cale_heading_pane_g1

0x862a,	// (0x0007c655) bg_cale_heading_pane_g2

0x8632,	// (0x0007c65d) bg_cale_heading_pane_g3

0x863a,	// (0x0007c665) bg_cale_heading_pane_g4

0x8644,	// (0x0007c66f) bg_cale_heading_pane_g5

0x864e,	// (0x0007c679) bg_cale_heading_pane_g6

0x8656,	// (0x0007c681) bg_cale_heading_pane_g7

0x865e,	// (0x0007c689) bg_cale_heading_pane_g8

0x8668,	// (0x0007c693) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x00083323) bg_cale_heading_pane_g

0x1234,	// (0x0007525f) bg_cale_side_pane_g1

0x8672,	// (0x0007c69d) bg_cale_side_pane_g2

0x867c,	// (0x0007c6a7) bg_cale_side_pane_g3

0x8686,	// (0x0007c6b1) bg_cale_side_pane_g4

0x8690,	// (0x0007c6bb) bg_cale_side_pane_g5

0x869a,	// (0x0007c6c5) bg_cale_side_pane_g6

0x86a4,	// (0x0007c6cf) bg_cale_side_pane_g7

0x86ae,	// (0x0007c6d9) bg_cale_side_pane_g8

0x86b6,	// (0x0007c6e1) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x00083336) bg_cale_side_pane_g

0x86be,	// (0x0007c6e9) popup_call_status_window_ParamLimits

0x86be,	// (0x0007c6e9) popup_call_status_window

0x123c,	// (0x00075267) stacon_top_pane

0x1244,	// (0x0007526f) status_pane_ParamLimits

0x1244,	// (0x0007526f) status_pane

0x1259,	// (0x00075284) status_small_pane

0x1261,	// (0x0007528c) control_pane

0x0527,	// (0x00074552) stacon_bottom_pane

0x1269,	// (0x00075294) list_single_mce_smart_pane_t1_ParamLimits

0x1269,	// (0x00075294) list_single_mce_smart_pane_t1

0x127c,	// (0x000752a7) list_single_mce_smart_pane_t2_ParamLimits

0x127c,	// (0x000752a7) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x00083349) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x00083349) list_single_mce_smart_pane_t

0x86ca,	// (0x0007c6f5) compass_pane

0x86d6,	// (0x0007c701) main_location2_pane_t1

0x86ea,	// (0x0007c715) main_location2_pane_t2

0x86fe,	// (0x0007c729) main_location2_pane_t3

0x0003,

0xf323,	// (0x0008334e) main_location2_pane_t

0x129b,	// (0x000752c6) compass_pane_g1_ParamLimits

0x129b,	// (0x000752c6) compass_pane_g1

0x8748,	// (0x0007c773) compass_pane_t1

0x8757,	// (0x0007c782) compass_pane_t2

0x0005,

0xf32c,	// (0x00083357) compass_pane_t

0x87a2,	// (0x0007c7cd) text_secondary_cp61

0x1319,	// (0x00075344) navi_pane_cams_g5

0x1395,	// (0x000753c0) navi_pane_im_t1

0x13a3,	// (0x000753ce) navi_pane_mp_g1_ParamLimits

0x13a3,	// (0x000753ce) navi_pane_mp_g1

0x13b7,	// (0x000753e2) navi_pane_mp_g2_ParamLimits

0x13b7,	// (0x000753e2) navi_pane_mp_g2

0x13c3,	// (0x000753ee) navi_pane_mp_g3_ParamLimits

0x13c3,	// (0x000753ee) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0008336b) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0008336b) navi_pane_mp_g

0x13cf,	// (0x000753fa) navi_pane_mp_t1

0x13dd,	// (0x00075408) navi_pane_mp_t2

0x0002,

0xf347,	// (0x00083372) navi_pane_mp_t

0x1448,	// (0x00075473) navi_pane_vt_g1

0x13cf,	// (0x000753fa) navi_pane_vt_t1

0x1450,	// (0x0007547b) navi_slider_pane

0x0a2a,	// (0x00074a55) zooming_pane

0x1460,	// (0x0007548b) navi_slider_pane_g1

0x87dd,	// (0x0007c808) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x00083379) navi_slider_pane_g

0x1484,	// (0x000754af) aid_levels_zoom

0x148c,	// (0x000754b7) zooming_pane_g1

0x1494,	// (0x000754bf) zooming_pane_g2

0x1494,	// (0x000754bf) zooming_pane_g3

0x0002,

0xf35d,	// (0x00083388) zooming_pane_g

0x149c,	// (0x000754c7) level_10_zoom

0x14a5,	// (0x000754d0) level_11_zoom

0x14ae,	// (0x000754d9) level_1_zoom

0x14b7,	// (0x000754e2) level_2_zoom

0x14c0,	// (0x000754eb) level_3_zoom

0x14c9,	// (0x000754f4) level_4_zoom

0x14d2,	// (0x000754fd) level_5_zoom

0x14db,	// (0x00075506) level_6_zoom

0x14e4,	// (0x0007550f) level_7_zoom

0x14ed,	// (0x00075518) level_8_zoom

0x14f6,	// (0x00075521) level_9_zoom

0x1507,	// (0x00075532) popup_phob_thumbnail_window_g1

0x150f,	// (0x0007553a) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0008338f) popup_phob_thumbnail_window_g

0x9104,	// (0x0007d12f) level_1_location

0x910c,	// (0x0007d137) level_2_location

0x9114,	// (0x0007d13f) level_3_location

0x911e,	// (0x0007d149) level_4_location

0x0a2a,	// (0x00074a55) level_5_location

0x87ef,	// (0x0007c81a) mce_icon_pane_g1

0x87f7,	// (0x0007c822) mce_icon_pane_g2

0x0001,

0xf369,	// (0x00083394) mce_icon_pane_g

0x87ff,	// (0x0007c82a) main_mup_pane_g1_ParamLimits

0x87ff,	// (0x0007c82a) main_mup_pane_g1

0x0819,	// (0x00074844) main_mup_pane_g2_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g2

0x0819,	// (0x00074844) main_mup_pane_g3_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g3

0x0819,	// (0x00074844) main_mup_pane_g4_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g4

0x0819,	// (0x00074844) main_mup_pane_g5_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g5

0x0819,	// (0x00074844) main_mup_pane_g6_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g6

0x0819,	// (0x00074844) main_mup_pane_g7_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g7

0x0819,	// (0x00074844) main_mup_pane_g8_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g8

0x0819,	// (0x00074844) main_mup_pane_g9_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g9

0x0819,	// (0x00074844) main_mup_pane_g10_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g10

0x0819,	// (0x00074844) main_mup_pane_g11_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g11

0x080b,	// (0x00074836) main_mup_pane_g12_ParamLimits

0x080b,	// (0x00074836) main_mup_pane_g12

0x0819,	// (0x00074844) main_mup_pane_g13_ParamLimits

0x0819,	// (0x00074844) main_mup_pane_g13

0x000c,

0xf36e,	// (0x00083399) main_mup_pane_g_ParamLimits

0xf36e,	// (0x00083399) main_mup_pane_g

0x0827,	// (0x00074852) main_mup_pane_t1_ParamLimits

0x0827,	// (0x00074852) main_mup_pane_t1

0x0827,	// (0x00074852) main_mup_pane_t2_ParamLimits

0x0827,	// (0x00074852) main_mup_pane_t2

0x0827,	// (0x00074852) main_mup_pane_t3_ParamLimits

0x0827,	// (0x00074852) main_mup_pane_t3

0x1539,	// (0x00075564) main_mup_pane_t4_ParamLimits

0x1539,	// (0x00075564) main_mup_pane_t4

0x1539,	// (0x00075564) main_mup_pane_t5_ParamLimits

0x1539,	// (0x00075564) main_mup_pane_t5

0x0a32,	// (0x00074a5d) main_mup_pane_t6_ParamLimits

0x0a32,	// (0x00074a5d) main_mup_pane_t6

0x0005,

0xf389,	// (0x000833b4) main_mup_pane_t_ParamLimits

0xf389,	// (0x000833b4) main_mup_pane_t

0xee8a,	// (0x00082eb5) mup_progress_pane_ParamLimits

0xee8a,	// (0x00082eb5) mup_progress_pane

0x2763,	// (0x0007678e) mup_visualizer_pane_ParamLimits

0x2763,	// (0x0007678e) mup_visualizer_pane

0x2763,	// (0x0007678e) mup_volume_pane_ParamLimits

0x2763,	// (0x0007678e) mup_volume_pane

0x080b,	// (0x00074836) mup_visualizer_pane_g1_ParamLimits

0x080b,	// (0x00074836) mup_visualizer_pane_g1

0x155b,	// (0x00075586) mup_visualizer_pane_g2_ParamLimits

0x155b,	// (0x00075586) mup_visualizer_pane_g2

0x07fd,	// (0x00074828) mup_visualizer_pane_g3_ParamLimits

0x07fd,	// (0x00074828) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x000833c1) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x000833c1) mup_visualizer_pane_g

0x0a60,	// (0x00074a8b) mup_volume_pane_g1

0x0a60,	// (0x00074a8b) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x000833c8) mup_volume_pane_g

0x0a60,	// (0x00074a8b) mup_progress_pane_g1

0x0a60,	// (0x00074a8b) mup_progress_pane_g2

0x0a60,	// (0x00074a8b) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x000833cd) mup_progress_pane_g

0x0527,	// (0x00074552) bg_popup_window_pane_cp05

0x1569,	// (0x00075594) heading_pane_cp02_ParamLimits

0x1569,	// (0x00075594) heading_pane_cp02

0x1583,	// (0x000755ae) list_popup_blid_pane

0x158b,	// (0x000755b6) list_blid_sat_info_pane_ParamLimits

0x158b,	// (0x000755b6) list_blid_sat_info_pane

0x159e,	// (0x000755c9) list_blid_sat_info_pane_g1

0x15a6,	// (0x000755d1) list_blid_sat_info_pane_t1

0x88fa,	// (0x0007c925) mup_equalizer_pane_ParamLimits

0x88fa,	// (0x0007c925) mup_equalizer_pane

0x891b,	// (0x0007c946) mup_equalizer_pane_cp1_ParamLimits

0x891b,	// (0x0007c946) mup_equalizer_pane_cp1

0x893c,	// (0x0007c967) mup_equalizer_pane_cp2_ParamLimits

0x893c,	// (0x0007c967) mup_equalizer_pane_cp2

0x895d,	// (0x0007c988) mup_equalizer_pane_cp3_ParamLimits

0x895d,	// (0x0007c988) mup_equalizer_pane_cp3

0x897e,	// (0x0007c9a9) mup_equalizer_pane_cp4_ParamLimits

0x897e,	// (0x0007c9a9) mup_equalizer_pane_cp4

0x899f,	// (0x0007c9ca) mup_equalizer_pane_cp5

0x89b5,	// (0x0007c9e0) mup_equalizer_pane_cp6

0x89cd,	// (0x0007c9f8) mup_equalizer_pane_cp7

0x26fb,	// (0x00076726) bg_popup_call_poc_act_pane_g9

0x2703,	// (0x0007672e) bg_popup_call_poc_act_pane_g10

0x270b,	// (0x00076736) bg_popup_call_poc_act_pane_g11

0x000a,

0x0782,	// (0x000747ad) mup_scale_pane

0x079a,	// (0x000747c5) mup_scale_pane_g1

0x15b4,	// (0x000755df) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x000833e9) mup_scale_pane_g

0x15d8,	// (0x00075603) msg_data_pane

0x15e0,	// (0x0007560b) scroll_pane_cp017

0x579b,	// (0x000797c6) bg_list_pane_cp04_ParamLimits

0x579b,	// (0x000797c6) bg_list_pane_cp04

0x15e8,	// (0x00075613) msg_data_pane_g1

0x89f7,	// (0x0007ca22) msg_data_pane_g2

0x89ff,	// (0x0007ca2a) msg_data_pane_g3

0x8a07,	// (0x0007ca32) msg_data_pane_g4

0x8a0f,	// (0x0007ca3a) msg_data_pane_g5

0x8a17,	// (0x0007ca42) msg_data_pane_g6

0x8a1f,	// (0x0007ca4a) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x000833f8) msg_data_pane_g

0x57bf,	// (0x000797ea) msg_text_pane_ParamLimits

0x57bf,	// (0x000797ea) msg_text_pane

0x8a27,	// (0x0007ca52) qrid_highlight_pane_cp011_ParamLimits

0x8a27,	// (0x0007ca52) qrid_highlight_pane_cp011

0x0527,	// (0x00074552) msg_body_pane

0x0527,	// (0x00074552) msg_header_pane

0x15f9,	// (0x00075624) input_focus_pane_cp07

0x5819,	// (0x00079844) msg_header_pane_t1_ParamLimits

0x5819,	// (0x00079844) msg_header_pane_t1

0x582f,	// (0x0007985a) msg_header_pane_t2_ParamLimits

0x582f,	// (0x0007985a) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0008340c) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0008340c) msg_header_pane_t

0x160e,	// (0x00075639) msg_body_pane_g1

0x5846,	// (0x00079871) msg_body_pane_t1_ParamLimits

0x5846,	// (0x00079871) msg_body_pane_t1

0x5877,	// (0x000798a2) msg_body_pane_t2_ParamLimits

0x5877,	// (0x000798a2) msg_body_pane_t2

0x5889,	// (0x000798b4) msg_body_pane_t3_ParamLimits

0x5889,	// (0x000798b4) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x00083411) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x00083411) msg_body_pane_t

0x8a95,	// (0x0007cac0) main_viewer_pane_g1_ParamLimits

0x8a95,	// (0x0007cac0) main_viewer_pane_g1

0x8aa1,	// (0x0007cacc) main_viewer_pane_g2_ParamLimits

0x8aa1,	// (0x0007cacc) main_viewer_pane_g2

0x8aad,	// (0x0007cad8) main_viewer_pane_g3_ParamLimits

0x8aad,	// (0x0007cad8) main_viewer_pane_g3

0x8abe,	// (0x0007cae9) main_viewer_pane_g4_ParamLimits

0x8abe,	// (0x0007cae9) main_viewer_pane_g4

0x8acf,	// (0x0007cafa) main_viewer_pane_g5_ParamLimits

0x8acf,	// (0x0007cafa) main_viewer_pane_g5

0x8acf,	// (0x0007cafa) main_viewer_pane_g7_ParamLimits

0x8acf,	// (0x0007cafa) main_viewer_pane_g7

0x8ae1,	// (0x0007cb0c) main_viewer_pane_g8_ParamLimits

0x8ae1,	// (0x0007cb0c) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x00083421) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x00083421) main_viewer_pane_g

0x1616,	// (0x00075641) viewer_content_pane_ParamLimits

0x1616,	// (0x00075641) viewer_content_pane

0x8b19,	// (0x0007cb44) main_postcard_pane_g1_ParamLimits

0x8b19,	// (0x0007cb44) main_postcard_pane_g1

0x8b27,	// (0x0007cb52) main_postcard_pane_g2_ParamLimits

0x8b27,	// (0x0007cb52) main_postcard_pane_g2

0x8b35,	// (0x0007cb60) main_postcard_pane_g3_ParamLimits

0x8b35,	// (0x0007cb60) main_postcard_pane_g3

0x0005,

0xf407,	// (0x00083432) main_postcard_pane_g_ParamLimits

0xf407,	// (0x00083432) main_postcard_pane_g

0x8b45,	// (0x0007cb70) main_postcard_pane_g4

0x287a,	// (0x000768a5) smil_status_volume_pane_g2

0x8b71,	// (0x0007cb9c) postcard_pane_ParamLimits

0x8b71,	// (0x0007cb9c) postcard_pane

0x1ea6,	// (0x00075ed1) postcard_pane_g1_ParamLimits

0x1ea6,	// (0x00075ed1) postcard_pane_g1

0x8ba3,	// (0x0007cbce) postcard_pane_g2_ParamLimits

0x8ba3,	// (0x0007cbce) postcard_pane_g2

0x8baf,	// (0x0007cbda) postcard_pane_g3_ParamLimits

0x8baf,	// (0x0007cbda) postcard_pane_g3

0x1632,	// (0x0007565d) postcard_pane_g4_ParamLimits

0x1632,	// (0x0007565d) postcard_pane_g4

0x8bbb,	// (0x0007cbe6) postcard_pane_g5_ParamLimits

0x8bbb,	// (0x0007cbe6) postcard_pane_g5

0x8bc7,	// (0x0007cbf2) postcard_pane_g6_ParamLimits

0x8bc7,	// (0x0007cbf2) postcard_pane_g6

0x1624,	// (0x0007564f) postcard_pane_g7_ParamLimits

0x1624,	// (0x0007564f) postcard_pane_g7

0x0006,

0xf414,	// (0x0008343f) postcard_pane_g_ParamLimits

0xf414,	// (0x0008343f) postcard_pane_g

0x8bd3,	// (0x0007cbfe) main_mp2_pane_g1_ParamLimits

0x8bd3,	// (0x0007cbfe) main_mp2_pane_g1

0x8bdf,	// (0x0007cc0a) main_mp2_pane_g2_ParamLimits

0x8bdf,	// (0x0007cc0a) main_mp2_pane_g2

0x8beb,	// (0x0007cc16) main_mp2_pane_g3_ParamLimits

0x8beb,	// (0x0007cc16) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0008344e) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0008344e) main_mp2_pane_g

0x8bf7,	// (0x0007cc22) main_mp2_pane_t1_ParamLimits

0x8bf7,	// (0x0007cc22) main_mp2_pane_t1

0x8c0e,	// (0x0007cc39) main_mp2_pane_t2_ParamLimits

0x8c0e,	// (0x0007cc39) main_mp2_pane_t2

0x8c20,	// (0x0007cc4b) main_mp2_pane_t3_ParamLimits

0x8c20,	// (0x0007cc4b) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x00083455) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x00083455) main_mp2_pane_t

0x1640,	// (0x0007566b) pec_content_pane_ParamLimits

0x1640,	// (0x0007566b) pec_content_pane

0x0bc1,	// (0x00074bec) scroll_pane_cp015

0x1652,	// (0x0007567d) pec_attribute_pane_ParamLimits

0x1652,	// (0x0007567d) pec_attribute_pane

0x8c32,	// (0x0007cc5d) pec_content_pane_g1_ParamLimits

0x8c32,	// (0x0007cc5d) pec_content_pane_g1

0x1662,	// (0x0007568d) pec_content_pane_t1_ParamLimits

0x1662,	// (0x0007568d) pec_content_pane_t1

0x1674,	// (0x0007569f) pec_content_pane_t2_ParamLimits

0x1674,	// (0x0007569f) pec_content_pane_t2

0x0001,

0xf431,	// (0x0008345c) pec_content_pane_t_ParamLimits

0xf431,	// (0x0008345c) pec_content_pane_t

0x8c3e,	// (0x0007cc69) list_single_graphic_pane_cp01_ParamLimits

0x8c3e,	// (0x0007cc69) list_single_graphic_pane_cp01

0x0782,	// (0x000747ad) bg_popup_sub_pane_cp04

0x1686,	// (0x000756b1) popup_mup_playback_window_g1

0x1692,	// (0x000756bd) popup_mup_playback_window_t1

0x16a7,	// (0x000756d2) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x00083461) popup_mup_playback_window_t

0x16de,	// (0x00075709) main_image_pane_g1_ParamLimits

0x16de,	// (0x00075709) main_image_pane_g1

0x1721,	// (0x0007574c) scroll_pane_cp018_ParamLimits

0x1721,	// (0x0007574c) scroll_pane_cp018

0x1739,	// (0x00075764) scroll_pane_cp016_ParamLimits

0x1739,	// (0x00075764) scroll_pane_cp016

0x8cd8,	// (0x0007cd03) smil2_image_pane_ParamLimits

0x8cd8,	// (0x0007cd03) smil2_image_pane

0x8d08,	// (0x0007cd33) smil2_root_pane_ParamLimits

0x8d08,	// (0x0007cd33) smil2_root_pane

0x8d34,	// (0x0007cd5f) smil2_text_pane_ParamLimits

0x8d34,	// (0x0007cd5f) smil2_text_pane

0x0527,	// (0x00074552) bg_list_pane_cp06

0x1775,	// (0x000757a0) grid_radio_pane

0x0527,	// (0x00074552) bg_popup_window_pane_cp06

0x177d,	// (0x000757a8) main_fmradio_pane_t1

0x2753,	// (0x0007677e) heading_pane_cp04

0x178b,	// (0x000757b6) main_fmradio_pane_t2

0x275b,	// (0x00076786) popup_cale_lunar_info_window_g1

0x1799,	// (0x000757c4) main_fmradio_pane_t3

0x2771,	// (0x0007679c) popup_cale_lunar_info_window_g2

0x17a7,	// (0x000757d2) main_fmradio_pane_t4

0x0001,

0x17b5,	// (0x000757e0) main_fmradio_pane_t5

0x0004,

0xf529,	// (0x00083554) popup_cale_lunar_info_window_g

0xf44b,	// (0x00083476) main_fmradio_pane_t

0x17c3,	// (0x000757ee) wait_bar_pane_cp03

0x17cb,	// (0x000757f6) cell_fmradio_pane_ParamLimits

0x17cb,	// (0x000757f6) cell_fmradio_pane

0x1624,	// (0x0007564f) cell_fmradio_pane_g1_ParamLimits

0x1624,	// (0x0007564f) cell_fmradio_pane_g1

0x0527,	// (0x00074552) grid_highlight_pane_cp011

0x17de,	// (0x00075809) poc_content_pane_ParamLimits

0x17de,	// (0x00075809) poc_content_pane

0x17f0,	// (0x0007581b) scroll_pane_cp019

0x8d74,	// (0x0007cd9f) popup_call_poc_act_window_ParamLimits

0x8d74,	// (0x0007cd9f) popup_call_poc_act_window

0x8d81,	// (0x0007cdac) popup_call_poc_inact_window_ParamLimits

0x8d81,	// (0x0007cdac) popup_call_poc_inact_window

0xf4ed,	// (0x00083518) bg_popup_call_poc_act_pane_g

0x2713,	// (0x0007673e) bg_popup_call_poc_inact_pane_g1

0x271b,	// (0x00076746) bg_popup_call_poc_inact_pane_g2

0x17f8,	// (0x00075823) popup_call_poc_act_window_g2

0x2723,	// (0x0007674e) bg_popup_call_poc_inact_pane_g3

0x26a3,	// (0x000766ce) bg_popup_call_poc_inact_pane_g4

0x272b,	// (0x00076756) bg_popup_call_poc_inact_pane_g5

0x1800,	// (0x0007582b) popup_call_poc_act_window_t1_ParamLimits

0x1800,	// (0x0007582b) popup_call_poc_act_window_t1

0x1828,	// (0x00075853) popup_call_poc_act_window_t2_ParamLimits

0x1828,	// (0x00075853) popup_call_poc_act_window_t2

0x1850,	// (0x0007587b) popup_call_poc_act_window_t3_ParamLimits

0x1850,	// (0x0007587b) popup_call_poc_act_window_t3

0x1878,	// (0x000758a3) popup_call_poc_act_window_t4_ParamLimits

0x1878,	// (0x000758a3) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x00083481) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x00083481) popup_call_poc_act_window_t

0x2733,	// (0x0007675e) bg_popup_call_poc_inact_pane_g6

0x273b,	// (0x00076766) bg_popup_call_poc_inact_pane_g7

0x2743,	// (0x0007676e) bg_popup_call_poc_inact_pane_g8

0x188a,	// (0x000758b5) popup_call_poc_inact_window_g2

0x274b,	// (0x00076776) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf504,	// (0x0008352f) bg_popup_call_poc_inact_pane_g

0x1892,	// (0x000758bd) popup_call_poc_inact_window_t1_ParamLimits

0x1892,	// (0x000758bd) popup_call_poc_inact_window_t1

0x18a7,	// (0x000758d2) popup_call_poc_inact_window_t2_ParamLimits

0x18a7,	// (0x000758d2) popup_call_poc_inact_window_t2

0x18bc,	// (0x000758e7) popup_call_poc_inact_window_t3_ParamLimits

0x18bc,	// (0x000758e7) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0008348a) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0008348a) popup_call_poc_inact_window_t

0x2805,	// (0x00076830) context_pane_ParamLimits

0x93fe,	// (0x0007d429) signal_pane_ParamLimits

0x0a2a,	// (0x00074a55) main_call2_pane

0x9371,	// (0x0007d39c) popup_phob_thumbnail2_window_ParamLimits

0x9371,	// (0x0007d39c) popup_phob_thumbnail2_window

0x8a43,	// (0x0007ca6e) aid_hotspot_pointer_arrow_pane

0x8a4b,	// (0x0007ca76) aid_hotspot_pointer_hand_pane

0x90cc,	// (0x0007d0f7) phob_pre_status_pane_g5

0x07ef,	// (0x0007481a) cams_zoom_pane_ParamLimits

0x07ef,	// (0x0007481a) image_vga_pane_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g1_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g2_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g3_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g4_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g5_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g6_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g7_ParamLimits

0xf185,	// (0x000831b0) main_camera_pane_g_ParamLimits

0x1539,	// (0x00075564) main_camera_pane_t1_ParamLimits

0x1539,	// (0x00075564) main_camera_pane_t2_ParamLimits

0xf196,	// (0x000831c1) main_camera_pane_t_ParamLimits

0x0782,	// (0x000747ad) bg_popup_preview_window_pane_cp01_ParamLimits

0x0782,	// (0x000747ad) bg_popup_preview_window_pane_cp01

0x18d1,	// (0x000758fc) popup_phob_thumbnail2_window_g1_ParamLimits

0x18d1,	// (0x000758fc) popup_phob_thumbnail2_window_g1

0x0527,	// (0x00074552) call2_cli_visual_pane

0x8d9d,	// (0x0007cdc8) popup_call2_audio_conf_window_ParamLimits

0x8d9d,	// (0x0007cdc8) popup_call2_audio_conf_window

0x8db2,	// (0x0007cddd) popup_call2_audio_first_window_ParamLimits

0x8db2,	// (0x0007cddd) popup_call2_audio_first_window

0x8e50,	// (0x0007ce7b) popup_call2_audio_in_window_ParamLimits

0x8e50,	// (0x0007ce7b) popup_call2_audio_in_window

0x8e92,	// (0x0007cebd) popup_call2_audio_out_window_ParamLimits

0x8e92,	// (0x0007cebd) popup_call2_audio_out_window

0x8ef4,	// (0x0007cf1f) popup_call2_audio_second_window_ParamLimits

0x8ef4,	// (0x0007cf1f) popup_call2_audio_second_window

0x8f52,	// (0x0007cf7d) popup_call2_audio_wait_window_ParamLimits

0x8f52,	// (0x0007cf7d) popup_call2_audio_wait_window

0x0527,	// (0x00074552) bg_popup_call2_act_pane_cp03

0x0764,	// (0x0007478f) list_conf_pane_cp

0x18dd,	// (0x00075908) popup_call2_audio_conf_window_t1

0x18eb,	// (0x00075916) list_single_graphic_popup_conf2_pane_ParamLimits

0x18eb,	// (0x00075916) list_single_graphic_popup_conf2_pane

0x1187,	// (0x000751b2) list_highlight_pane_cp04

0x18fe,	// (0x00075929) list_single_graphic_popup_conf2_pane_g1

0x1198,	// (0x000751c3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x00083491) list_single_graphic_popup_conf2_pane_g

0x1908,	// (0x00075933) list_single_graphic_popup_conf2_pane_t1

0x1916,	// (0x00075941) bg_popup_call2_act_pane_cp01_ParamLimits

0x1916,	// (0x00075941) bg_popup_call2_act_pane_cp01

0x19a0,	// (0x000759cb) call_type_pane_cp05_ParamLimits

0x19a0,	// (0x000759cb) call_type_pane_cp05

0x19f4,	// (0x00075a1f) popup_call2_audio_second_window_g1_ParamLimits

0x19f4,	// (0x00075a1f) popup_call2_audio_second_window_g1

0x1a48,	// (0x00075a73) popup_call2_audio_second_window_g2_ParamLimits

0x1a48,	// (0x00075a73) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x00083496) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x00083496) popup_call2_audio_second_window_g

0x1aad,	// (0x00075ad8) popup_call2_audio_second_window_t1_ParamLimits

0x1aad,	// (0x00075ad8) popup_call2_audio_second_window_t1

0x1b68,	// (0x00075b93) popup_call2_audio_second_window_t2_ParamLimits

0x1b68,	// (0x00075b93) popup_call2_audio_second_window_t2

0x1bbb,	// (0x00075be6) popup_call2_audio_second_window_t3_ParamLimits

0x1bbb,	// (0x00075be6) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0008349d) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0008349d) popup_call2_audio_second_window_t

0x0527,	// (0x00074552) bg_popup_call2_in_pane_cp02

0x0531,	// (0x0007455c) call_type_pane_cp04

0x8f91,	// (0x0007cfbc) popup_call2_audio_wait_window_g1

0x8f99,	// (0x0007cfc4) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x000834a6) popup_call2_audio_wait_window_g

0x0549,	// (0x00074574) popup_call2_audio_wait_window_t3

0x1cae,	// (0x00075cd9) bg_popup_call2_act_pane_ParamLimits

0x1cae,	// (0x00075cd9) bg_popup_call2_act_pane

0x1d6e,	// (0x00075d99) call_type_pane_cp03_ParamLimits

0x1d6e,	// (0x00075d99) call_type_pane_cp03

0x1dd2,	// (0x00075dfd) popup_call2_audio_first_window_g1_ParamLimits

0x1dd2,	// (0x00075dfd) popup_call2_audio_first_window_g1

0x1e42,	// (0x00075e6d) popup_call2_audio_first_window_g2_ParamLimits

0x1e42,	// (0x00075e6d) popup_call2_audio_first_window_g2

0x1ea6,	// (0x00075ed1) popup_call2_audio_first_window_g3_ParamLimits

0x1ea6,	// (0x00075ed1) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x000834ab) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x000834ab) popup_call2_audio_first_window_g

0x1f2e,	// (0x00075f59) popup_call2_audio_first_window_t1_ParamLimits

0x1f2e,	// (0x00075f59) popup_call2_audio_first_window_t1

0x2031,	// (0x0007605c) popup_call2_audio_first_window_t4_ParamLimits

0x2031,	// (0x0007605c) popup_call2_audio_first_window_t4

0x2114,	// (0x0007613f) popup_call2_audio_first_window_t5_ParamLimits

0x2114,	// (0x0007613f) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x000834b6) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x000834b6) popup_call2_audio_first_window_t

0x077a,	// (0x000747a5) bg_popup_call2_act_pane_g1

0x2779,	// (0x000767a4) popup_cale_lunar_info_window_t1

0x2787,	// (0x000767b2) popup_cale_lunar_info_window_t2

0x2795,	// (0x000767c0) popup_cale_lunar_info_window_t3

0x0527,	// (0x00074552) bg_popup_call2_bubble_pane

0x2215,	// (0x00076240) bg_popup_call2_in_pane_cp01_ParamLimits

0x2215,	// (0x00076240) bg_popup_call2_in_pane_cp01

0x0203,	// (0x0007422e) call_type_pane_cp02

0x8fa1,	// (0x0007cfcc) popup_call2_audio_out_window_g1_ParamLimits

0x8fa1,	// (0x0007cfcc) popup_call2_audio_out_window_g1

0x225d,	// (0x00076288) popup_call2_audio_out_window_g2_ParamLimits

0x225d,	// (0x00076288) popup_call2_audio_out_window_g2

0x8fcd,	// (0x0007cff8) popup_call2_audio_out_window_g3_ParamLimits

0x8fcd,	// (0x0007cff8) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x000834bf) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x000834bf) popup_call2_audio_out_window_g

0x2294,	// (0x000762bf) popup_call2_audio_out_window_t1_ParamLimits

0x2294,	// (0x000762bf) popup_call2_audio_out_window_t1

0x22f3,	// (0x0007631e) popup_call2_audio_out_window_t2_ParamLimits

0x22f3,	// (0x0007631e) popup_call2_audio_out_window_t2

0x2347,	// (0x00076372) popup_call2_audio_out_window_t3_ParamLimits

0x2347,	// (0x00076372) popup_call2_audio_out_window_t3

0x235d,	// (0x00076388) popup_call2_audio_out_window_t4_ParamLimits

0x235d,	// (0x00076388) popup_call2_audio_out_window_t4

0x2373,	// (0x0007639e) popup_call2_audio_out_window_t5_ParamLimits

0x2373,	// (0x0007639e) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x000834c8) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x000834c8) popup_call2_audio_out_window_t

0x23d7,	// (0x00076402) bg_popup_call2_in_pane_ParamLimits

0x23d7,	// (0x00076402) bg_popup_call2_in_pane

0x2433,	// (0x0007645e) popup_call2_audio_in_window_g1_ParamLimits

0x2433,	// (0x0007645e) popup_call2_audio_in_window_g1

0x246b,	// (0x00076496) popup_call2_audio_in_window_g2_ParamLimits

0x246b,	// (0x00076496) popup_call2_audio_in_window_g2

0x24a3,	// (0x000764ce) popup_call2_audio_in_window_g3_ParamLimits

0x24a3,	// (0x000764ce) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x000834d5) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x000834d5) popup_call2_audio_in_window_g

0x24fb,	// (0x00076526) popup_call2_audio_in_window_t1_ParamLimits

0x24fb,	// (0x00076526) popup_call2_audio_in_window_t1

0x257b,	// (0x000765a6) popup_call2_audio_in_window_t2_ParamLimits

0x257b,	// (0x000765a6) popup_call2_audio_in_window_t2

0x25fb,	// (0x00076626) popup_call2_audio_in_window_t3_ParamLimits

0x25fb,	// (0x00076626) popup_call2_audio_in_window_t3

0x2615,	// (0x00076640) popup_call2_audio_in_window_t4_ParamLimits

0x2615,	// (0x00076640) popup_call2_audio_in_window_t4

0x2627,	// (0x00076652) popup_call2_audio_in_window_t5_ParamLimits

0x2627,	// (0x00076652) popup_call2_audio_in_window_t5

0x2639,	// (0x00076664) popup_call2_audio_in_window_t6_ParamLimits

0x2639,	// (0x00076664) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x000834de) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x000834de) popup_call2_audio_in_window_t

0x077a,	// (0x000747a5) bg_popup_call2_in_pane_g1

0x27a3,	// (0x000767ce) popup_cale_lunar_info_window_t4

0x0003,

0xf52e,	// (0x00083559) popup_cale_lunar_info_window_t

0x0782,	// (0x000747ad) bg_popup_call2_rect_pane_ParamLimits

0x0782,	// (0x000747ad) bg_popup_call2_rect_pane

0x0527,	// (0x00074552) call2_cli_visual_graphic_pane

0x0527,	// (0x00074552) call2_cli_visual_text_pane

0x943a,	// (0x0007d465) smil_status_volume_pane_g3

0x0002,

0x079a,	// (0x000747c5) call2_cli_visual_graphic_pane_g1

0x079a,	// (0x000747c5) call2_cli_visual_graphic_pane_g2

0x079a,	// (0x000747c5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x000834eb) call2_cli_visual_graphic_pane_g

0x264b,	// (0x00076676) bg_popup_call2_rect_pane_g1

0x094f,	// (0x0007497a) bg_popup_call2_rect_pane_g2

0x2653,	// (0x0007667e) bg_popup_call2_rect_pane_g3

0x265b,	// (0x00076686) bg_popup_call2_rect_pane_g4

0x2663,	// (0x0007668e) bg_popup_call2_rect_pane_g5

0x266b,	// (0x00076696) bg_popup_call2_rect_pane_g6

0x2673,	// (0x0007669e) bg_popup_call2_rect_pane_g7

0x267b,	// (0x000766a6) bg_popup_call2_rect_pane_g8

0x2683,	// (0x000766ae) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x000834f2) bg_popup_call2_rect_pane_g

0x268b,	// (0x000766b6) bg_popup_call2_bubble_pane_g1

0x2693,	// (0x000766be) bg_popup_call2_bubble_pane_g2

0x269b,	// (0x000766c6) bg_popup_call2_bubble_pane_g3

0x26a3,	// (0x000766ce) bg_popup_call2_bubble_pane_g4

0x26ab,	// (0x000766d6) bg_popup_call2_bubble_pane_g5

0x26b3,	// (0x000766de) bg_popup_call2_bubble_pane_g6

0x26bb,	// (0x000766e6) bg_popup_call2_bubble_pane_g7

0x26c3,	// (0x000766ee) bg_popup_call2_bubble_pane_g8

0x26cb,	// (0x000766f6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x00083505) bg_popup_call2_bubble_pane_g

0x6bba,	// (0x0007abe5) aid_cale_week_size_cell_pane

0x0782,	// (0x000747ad) aid_cams_cif_uncrop_pane_ParamLimits

0x0782,	// (0x000747ad) aid_cams_cif_uncrop_pane

0x71b3,	// (0x0007b1de) aid_cams_size_cell_ParamLimits

0x71b3,	// (0x0007b1de) aid_cams_size_cell

0x71bf,	// (0x0007b1ea) grid_cams_pane_ParamLimits

0x71cd,	// (0x0007b1f8) linegrid_cams_pane_ParamLimits

0x72a4,	// (0x0007b2cf) call_video_pane_t1

0x72c5,	// (0x0007b2f0) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0008320d) call_video_pane_t

0x7813,	// (0x0007b83e) aid_cale_month_size_cell_pane_ParamLimits

0x7813,	// (0x0007b83e) aid_cale_month_size_cell_pane

0xf572,	// (0x0008359d) smil_status_volume_pane_g

0x9447,	// (0x0007d472) volume_smil_pane_ParamLimits

0x6473,	// (0x0007a49e) aid_popup2_width_pane

0x6ab1,	// (0x0007aadc) cell_qdial_pane_g4_ParamLimits

0x6ab1,	// (0x0007aadc) cell_qdial_pane_g4

0x8724,	// (0x0007c74f) aid_blid_cardinal_pane_ParamLimits

0x8734,	// (0x0007c75f) aid_blid_destination_pane_ParamLimits

0x8734,	// (0x0007c75f) aid_blid_destination_pane

0x0782,	// (0x000747ad) bg_popup_call_poc_act_pane_ParamLimits

0x0782,	// (0x000747ad) bg_popup_call_poc_act_pane

0x0782,	// (0x000747ad) bg_popup_call_poc_inact_pane_ParamLimits

0x0782,	// (0x000747ad) bg_popup_call_poc_inact_pane

0x26d3,	// (0x000766fe) bg_popup_call_poc_act_pane_g1

0x26db,	// (0x00076706) bg_popup_call_poc_act_pane_g2

0x26e3,	// (0x0007670e) bg_popup_call_poc_act_pane_g3

0x26a3,	// (0x000766ce) bg_popup_call_poc_act_pane_g4

0x26ab,	// (0x000766d6) bg_popup_call_poc_act_pane_g5

0x26eb,	// (0x00076716) bg_popup_call_poc_act_pane_g6

0x26bb,	// (0x000766e6) bg_popup_call_poc_act_pane_g7

0x26f3,	// (0x0007671e) bg_popup_call_poc_act_pane_g8

0x0527,	// (0x00074552) main_usb_pane

0x92a4,	// (0x0007d2cf) popup_cale_lunar_info_window

0x75e2,	// (0x0007b60d) im_reading_pane_t1_ParamLimits

0x0b19,	// (0x00074b44) list_im_pane_ParamLimits

0x0b2a,	// (0x00074b55) scroll_pane_cp07_ParamLimits

0x0527,	// (0x00074552) grid_highlight_pane_cp012

0x0782,	// (0x000747ad) mup_scale_pane_ParamLimits

0x1ea6,	// (0x00075ed1) main_usb_pane_g1_ParamLimits

0x1ea6,	// (0x00075ed1) main_usb_pane_g1

0x9034,	// (0x0007d05f) main_usb_pane_g2_ParamLimits

0x9034,	// (0x0007d05f) main_usb_pane_g2

0x0001,

0xf517,	// (0x00083542) main_usb_pane_g_ParamLimits

0xf517,	// (0x00083542) main_usb_pane_g

0x9040,	// (0x0007d06b) main_usb_pane_t1_ParamLimits

0x9040,	// (0x0007d06b) main_usb_pane_t1

0x9052,	// (0x0007d07d) main_usb_pane_t2_ParamLimits

0x9052,	// (0x0007d07d) main_usb_pane_t2

0x9064,	// (0x0007d08f) main_usb_pane_t3_ParamLimits

0x9064,	// (0x0007d08f) main_usb_pane_t3

0x9076,	// (0x0007d0a1) main_usb_pane_t4_ParamLimits

0x9076,	// (0x0007d0a1) main_usb_pane_t4

0x9088,	// (0x0007d0b3) main_usb_pane_t5_ParamLimits

0x9088,	// (0x0007d0b3) main_usb_pane_t5

0x909a,	// (0x0007d0c5) main_usb_pane_t6_ParamLimits

0x909a,	// (0x0007d0c5) main_usb_pane_t6

0x0005,

0xf51c,	// (0x00083547) main_usb_pane_t_ParamLimits

0x86ca,	// (0x0007c6f5) aid_text_placing

0x86d6,	// (0x0007c701) main_location2_pane_t1_ParamLimits

0x86ea,	// (0x0007c715) main_location2_pane_t2_ParamLimits

0x86fe,	// (0x0007c729) main_location2_pane_t3_ParamLimits

0x8712,	// (0x0007c73d) main_location2_pane_t4_ParamLimits

0x8712,	// (0x0007c73d) main_location2_pane_t4

0xf323,	// (0x0008334e) main_location2_pane_t_ParamLimits

0x07b0,	// (0x000747db) find_pinb_pane_g2_ParamLimits

0x07b0,	// (0x000747db) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000830c5) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000830c5) find_pinb_pane_g

0x07bc,	// (0x000747e7) find_pinb_pane_t1_ParamLimits

0x07ce,	// (0x000747f9) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000830ca) find_pinb_pane_t_ParamLimits

0x0527,	// (0x00074552) main_call3_pane

0x7dd6,	// (0x0007be01) cale_month_day_heading_pane_t1_ParamLimits

0x7e5c,	// (0x0007be87) cale_month_day_heading_pane_t2_ParamLimits

0x7ed5,	// (0x0007bf00) cale_month_day_heading_pane_t3_ParamLimits

0x7f4e,	// (0x0007bf79) cale_month_day_heading_pane_t4_ParamLimits

0x7fc7,	// (0x0007bff2) cale_month_day_heading_pane_t5_ParamLimits

0x8040,	// (0x0007c06b) cale_month_day_heading_pane_t6_ParamLimits

0x80b9,	// (0x0007c0e4) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x00083245) cale_month_day_heading_pane_t_ParamLimits

0x0d7d,	// (0x00074da8) smil_status_volume_pane

0x8b8b,	// (0x0007cbb6) postcard_address_pane_ParamLimits

0x8b8b,	// (0x0007cbb6) postcard_address_pane

0x8b97,	// (0x0007cbc2) postcard_message_pane_ParamLimits

0x8b97,	// (0x0007cbc2) postcard_message_pane

0x8ff9,	// (0x0007d024) call2_cli_visual_pane_t1_ParamLimits

0x8ff9,	// (0x0007d024) call2_cli_visual_pane_t1

0x28b8,	// (0x000768e3) postcard_message_pane_t1_ParamLimits

0x28b8,	// (0x000768e3) postcard_message_pane_t1

0x28a0,	// (0x000768cb) postcard_address_pane_t1_ParamLimits

0x28a0,	// (0x000768cb) postcard_address_pane_t1

0x9578,	// (0x0007d5a3) popup_call3_audio_in_window_ParamLimits

0x9578,	// (0x0007d5a3) popup_call3_audio_in_window

0x945c,	// (0x0007d487) bg_popup_call3_in_pane_ParamLimits

0x945c,	// (0x0007d487) bg_popup_call3_in_pane

0x94be,	// (0x0007d4e9) popup_call3_audio_in_window_g1_ParamLimits

0x94be,	// (0x0007d4e9) popup_call3_audio_in_window_g1

0x94d6,	// (0x0007d501) popup_call3_audio_in_window_g2_ParamLimits

0x94d6,	// (0x0007d501) popup_call3_audio_in_window_g2

0x94ee,	// (0x0007d519) popup_call3_audio_in_window_g3_ParamLimits

0x94ee,	// (0x0007d519) popup_call3_audio_in_window_g3

0x0003,

0xf579,	// (0x000835a4) popup_call3_audio_in_window_g_ParamLimits

0xf579,	// (0x000835a4) popup_call3_audio_in_window_g

0x9516,	// (0x0007d541) popup_call3_audio_in_window_t1_ParamLimits

0x9516,	// (0x0007d541) popup_call3_audio_in_window_t1

0x953e,	// (0x0007d569) popup_call3_audio_in_window_t2_ParamLimits

0x953e,	// (0x0007d569) popup_call3_audio_in_window_t2

0x9566,	// (0x0007d591) popup_call3_audio_in_window_t3_ParamLimits

0x9566,	// (0x0007d591) popup_call3_audio_in_window_t3

0x0002,

0xf582,	// (0x000835ad) popup_call3_audio_in_window_t_ParamLimits

0xf582,	// (0x000835ad) popup_call3_audio_in_window_t

0x0a2a,	// (0x00074a55) bg_popup_call3_rect_pane

0x264b,	// (0x00076676) bg_popup_call3_rect_pane_g1

0x094f,	// (0x0007497a) bg_popup_call3_rect_pane_g2

0x2653,	// (0x0007667e) bg_popup_call3_rect_pane_g3

0x265b,	// (0x00076686) bg_popup_call3_rect_pane_g4

0x2663,	// (0x0007668e) bg_popup_call3_rect_pane_g5

0x266b,	// (0x00076696) bg_popup_call3_rect_pane_g6

0x2673,	// (0x0007669e) bg_popup_call3_rect_pane_g7

0xee29,	// (0x00082e54) mup_visualizer_osc_pane

0xee29,	// (0x00082e54) mup_visualizer_spec_pane

0x947c,	// (0x0007d4a7) call3_video_qcif_pane_ParamLimits

0x947c,	// (0x0007d4a7) call3_video_qcif_pane

0x948e,	// (0x0007d4b9) call3_video_qcif_uncrop_pane_ParamLimits

0x948e,	// (0x0007d4b9) call3_video_qcif_uncrop_pane

0x949c,	// (0x0007d4c7) call3_video_subqcif_pane_ParamLimits

0x949c,	// (0x0007d4c7) call3_video_subqcif_pane

0x94ae,	// (0x0007d4d9) call3_video_subqcif_uncrop_pane_ParamLimits

0x94ae,	// (0x0007d4d9) call3_video_subqcif_uncrop_pane

0x9506,	// (0x0007d531) popup_call3_audio_in_window_g4_ParamLimits

0x9506,	// (0x0007d531) popup_call3_audio_in_window_g4

0xee29,	// (0x00082e54) mup_spec_half_pane

0xee29,	// (0x00082e54) mup_spec_half_pane_cp

0xee29,	// (0x00082e54) mup_osc_middle_pane

0x0a60,	// (0x00074a8b) mup_visualizer_osc_pane_g1

0x2853,	// (0x0007687e) mup_spec_bar_pane_ParamLimits

0x2853,	// (0x0007687e) mup_spec_bar_pane

0x0a60,	// (0x00074a8b) mup_spec_bar_pane_g1

0x0a60,	// (0x00074a8b) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x000833c8) mup_spec_bar_pane_g

0x6bba,	// (0x0007abe5) aid_cale_week_size_cell_pane_ParamLimits

0x6bcf,	// (0x0007abfa) bg_cale_heading_pane_ParamLimits

0x098c,	// (0x000749b7) bg_cale_pane_cp01_ParamLimits

0x6bf1,	// (0x0007ac1c) cale_week_corner_pane_ParamLimits

0x6c0b,	// (0x0007ac36) cale_week_day_heading_pane_ParamLimits

0x6c2d,	// (0x0007ac58) cale_week_scroll_pane_g1_ParamLimits

0x6c4a,	// (0x0007ac75) cale_week_scroll_pane_g2_ParamLimits

0x6c5d,	// (0x0007ac88) cale_week_scroll_pane_g3_ParamLimits

0x6c70,	// (0x0007ac9b) cale_week_scroll_pane_g4_ParamLimits

0x6c83,	// (0x0007acae) cale_week_scroll_pane_g5_ParamLimits

0x6c96,	// (0x0007acc1) cale_week_scroll_pane_g6_ParamLimits

0x6ca9,	// (0x0007acd4) cale_week_scroll_pane_g7_ParamLimits

0x6cbe,	// (0x0007ace9) cale_week_scroll_pane_g8_ParamLimits

0x6cd3,	// (0x0007acfe) cale_week_scroll_pane_g9_ParamLimits

0x6ce6,	// (0x0007ad11) cale_week_scroll_pane_g10_ParamLimits

0x6cf9,	// (0x0007ad24) cale_week_scroll_pane_g11_ParamLimits

0x6d0c,	// (0x0007ad37) cale_week_scroll_pane_g12_ParamLimits

0x6d23,	// (0x0007ad4e) cale_week_scroll_pane_g13_ParamLimits

0x6d3e,	// (0x0007ad69) cale_week_scroll_pane_g14_ParamLimits

0x6d59,	// (0x0007ad84) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x00083156) cale_week_scroll_pane_g_ParamLimits

0x6d89,	// (0x0007adb4) cale_week_time_pane_ParamLimits

0x6d9e,	// (0x0007adc9) grid_cale_week_pane_ParamLimits

0x09a9,	// (0x000749d4) listscroll_cale_week_pane_t1

0x09bb,	// (0x000749e6) scroll_pane_cp08_ParamLimits

0x7887,	// (0x0007b8b2) cale_month_corner_pane_ParamLimits

0x0d53,	// (0x00074d7e) cale_month_pane_t1

0x7d55,	// (0x0007bd80) cale_month_week_pane_ParamLimits

0x1ea6,	// (0x00075ed1) popup_call_status_window_g1_ParamLimits

0x84f7,	// (0x0007c522) popup_call_status_window_g2_ParamLimits

0x8503,	// (0x0007c52e) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x000832d5) popup_call_status_window_g_ParamLimits

0x111b,	// (0x00075146) aid_call2_pane

0x580d,	// (0x00079838) msg_header_pane_g1

0x8b8b,	// (0x0007cbb6) postcard_address2_pane_ParamLimits

0x8b8b,	// (0x0007cbb6) postcard_address2_pane

0x8b97,	// (0x0007cbc2) postcard_message2_pane_ParamLimits

0x8b97,	// (0x0007cbc2) postcard_message2_pane

0x940c,	// (0x0007d437) message2_row_pane_ParamLimits

0x940c,	// (0x0007d437) message2_row_pane

0x9427,	// (0x0007d452) address2_row_pane_ParamLimits

0x9427,	// (0x0007d452) address2_row_pane

0x2820,	// (0x0007684b) postcard_message2_row_pane_g1

0x2828,	// (0x00076853) postcard_message2_row_pane_t1

0x2820,	// (0x0007684b) address2_row_pane_g1

0x2828,	// (0x00076853) address2_row_pane_t1

0x7023,	// (0x0007b04e) aid_size_cell_vorec

0x0527,	// (0x00074552) main_rss_pane

0x2836,	// (0x00076861) rss_list_single_pane_ParamLimits

0x2836,	// (0x00076861) rss_list_single_pane

0x2844,	// (0x0007686f) rss_list_single_pane_t1

0x2844,	// (0x0007686f) rss_list_single_pane_t2

0x0001,

0xf56d,	// (0x00083598) rss_list_single_pane_t

0x0527,	// (0x00074552) main_camera2_pane

0x0527,	// (0x00074552) main_video2_pane

0x07ef,	// (0x0007481a) cams_zoom_pane_cp2_ParamLimits

0x07ef,	// (0x0007481a) cams_zoom_pane_cp2

0x07ef,	// (0x0007481a) image2_vga_pane_ParamLimits

0x07ef,	// (0x0007481a) image2_vga_pane

0x080b,	// (0x00074836) main_camera2_pane_g1_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g1

0x080b,	// (0x00074836) main_camera2_pane_g2_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g2

0x080b,	// (0x00074836) main_camera2_pane_g3_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g3

0x080b,	// (0x00074836) main_camera2_pane_g4_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g4

0x080b,	// (0x00074836) main_camera2_pane_g5_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g5

0x080b,	// (0x00074836) main_camera2_pane_g6_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g6

0x080b,	// (0x00074836) main_camera2_pane_g7_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g7

0x080b,	// (0x00074836) main_camera2_pane_g8_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g8

0x0008,

0xf589,	// (0x000835b4) main_camera2_pane_g_ParamLimits

0xf589,	// (0x000835b4) main_camera2_pane_g

0x1539,	// (0x00075564) main_camera2_pane_t1_ParamLimits

0x1539,	// (0x00075564) main_camera2_pane_t1

0x1539,	// (0x00075564) main_camera2_pane_t2_ParamLimits

0x1539,	// (0x00075564) main_camera2_pane_t2

0x1539,	// (0x00075564) main_camera2_pane_t3_ParamLimits

0x1539,	// (0x00075564) main_camera2_pane_t3

0x1539,	// (0x00075564) main_camera2_pane_t4_ParamLimits

0x1539,	// (0x00075564) main_camera2_pane_t4

0x0006,

0xf59c,	// (0x000835c7) main_camera2_pane_t_ParamLimits

0xf59c,	// (0x000835c7) main_camera2_pane_t

0x154d,	// (0x00075578) cams_zoom_pane_cp4_ParamLimits

0x154d,	// (0x00075578) cams_zoom_pane_cp4

0xee8a,	// (0x00082eb5) image2_cif_pane_ParamLimits

0xee8a,	// (0x00082eb5) image2_cif_pane

0x07ef,	// (0x0007481a) image2_subqcif_pane_ParamLimits

0x07ef,	// (0x0007481a) image2_subqcif_pane

0x1517,	// (0x00075542) main_video2_pane_g1_ParamLimits

0x1517,	// (0x00075542) main_video2_pane_g1

0x1517,	// (0x00075542) main_video2_pane_g2_ParamLimits

0x1517,	// (0x00075542) main_video2_pane_g2

0x1517,	// (0x00075542) main_video2_pane_g3_ParamLimits

0x1517,	// (0x00075542) main_video2_pane_g3

0x1517,	// (0x00075542) main_video2_pane_g4_ParamLimits

0x1517,	// (0x00075542) main_video2_pane_g4

0x1517,	// (0x00075542) main_video2_pane_g5_ParamLimits

0x1517,	// (0x00075542) main_video2_pane_g5

0x1517,	// (0x00075542) main_video2_pane_g6_ParamLimits

0x1517,	// (0x00075542) main_video2_pane_g6

0x0005,

0xf5ab,	// (0x000835d6) main_video2_pane_g_ParamLimits

0xf5ab,	// (0x000835d6) main_video2_pane_g

0x1525,	// (0x00075550) main_video2_pane_t1_ParamLimits

0x1525,	// (0x00075550) main_video2_pane_t1

0x1525,	// (0x00075550) main_video2_pane_t2_ParamLimits

0x1525,	// (0x00075550) main_video2_pane_t2

0x1525,	// (0x00075550) main_video2_pane_t3_ParamLimits

0x1525,	// (0x00075550) main_video2_pane_t3

0x0002,

0xf5b8,	// (0x000835e3) main_video2_pane_t_ParamLimits

0xf5b8,	// (0x000835e3) main_video2_pane_t

0x9130,	// (0x0007d15b) call_muted_g2

0x0001,

0xf55f,	// (0x0008358a) call_muted_g

0x0527,	// (0x00074552) main_mup2_pane

0x0819,	// (0x00074844) main_mup2_pane_g1_ParamLimits

0x0819,	// (0x00074844) main_mup2_pane_g1

0x0819,	// (0x00074844) main_mup2_pane_g2_ParamLimits

0x0819,	// (0x00074844) main_mup2_pane_g2

0x0a60,	// (0x00074a8b) main_mup_pane_g13_cp1

0xee29,	// (0x00082e54) mup_volume_pane_cp1

0x0819,	// (0x00074844) main_mup2_pane_g4_ParamLimits

0x0819,	// (0x00074844) main_mup2_pane_g4

0x0819,	// (0x00074844) main_mup2_pane_g5_ParamLimits

0x0819,	// (0x00074844) main_mup2_pane_g5

0x0819,	// (0x00074844) main_mup2_pane_g6_ParamLimits

0x0819,	// (0x00074844) main_mup2_pane_g6

0x0819,	// (0x00074844) main_mup2_pane_g7_ParamLimits

0x0819,	// (0x00074844) main_mup2_pane_g7

0x0006,

0xf5bf,	// (0x000835ea) main_mup2_pane_g_ParamLimits

0xf5bf,	// (0x000835ea) main_mup2_pane_g

0x0827,	// (0x00074852) main_mup2_pane_t1_ParamLimits

0x0827,	// (0x00074852) main_mup2_pane_t1

0x0827,	// (0x00074852) main_mup2_pane_t2_ParamLimits

0x0827,	// (0x00074852) main_mup2_pane_t2

0x0827,	// (0x00074852) main_mup2_pane_t3_ParamLimits

0x0827,	// (0x00074852) main_mup2_pane_t3

0x0827,	// (0x00074852) main_mup2_pane_t4_ParamLimits

0x0827,	// (0x00074852) main_mup2_pane_t4

0x0827,	// (0x00074852) main_mup2_pane_t5_ParamLimits

0x0827,	// (0x00074852) main_mup2_pane_t5

0x0827,	// (0x00074852) main_mup2_pane_t6_ParamLimits

0x0827,	// (0x00074852) main_mup2_pane_t6

0x0005,

0xf5ce,	// (0x000835f9) main_mup2_pane_t_ParamLimits

0xf5ce,	// (0x000835f9) main_mup2_pane_t

0x2763,	// (0x0007678e) mup2_visualizer_pane_ParamLimits

0x2763,	// (0x0007678e) mup2_visualizer_pane

0x2763,	// (0x0007678e) mup_progress_pane_cp_ParamLimits

0x2763,	// (0x0007678e) mup_progress_pane_cp

0x28d4,	// (0x000768ff) mup_volume_pane_cp_ParamLimits

0x28d4,	// (0x000768ff) mup_volume_pane_cp

0x07fd,	// (0x00074828) mup2_visualizer_pane_g1_ParamLimits

0x07fd,	// (0x00074828) mup2_visualizer_pane_g1

0x080b,	// (0x00074836) mup2_visualizer_pane_g2_ParamLimits

0x080b,	// (0x00074836) mup2_visualizer_pane_g2

0x080b,	// (0x00074836) mup2_visualizer_pane_g3_ParamLimits

0x080b,	// (0x00074836) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000830cf) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000830cf) mup2_visualizer_pane_g

0x176d,	// (0x00075798) aid_size_cell_fmradio

0x9246,	// (0x0007d271) aid_height_parent_landcape

0x0ba8,	// (0x00074bd3) wml_content_pane_cp

0x0bb0,	// (0x00074bdb) wml_tabs_pane

0x0bb9,	// (0x00074be4) popup_wml_miniature_window

0x0bc1,	// (0x00074bec) scroll_pane_cp021

0x0bd5,	// (0x00074c00) wml_content_pane_comp8

0x0527,	// (0x00074552) bg_popup_sub_pane_cp05

0x28ea,	// (0x00076915) popup_wml_miniature_window_g1

0x28f2,	// (0x0007691d) wml_miniature_view_pane

0x95a9,	// (0x0007d5d4) aid_size_wml_view

0x95b1,	// (0x0007d5dc) wml_miniature_view_pane_g1

0x95ba,	// (0x0007d5e5) wml_miniature_view_pane_g2

0x95c3,	// (0x0007d5ee) wml_miniature_view_pane_g3

0x95cb,	// (0x0007d5f6) wml_miniature_view_pane_g4

0x95d3,	// (0x0007d5fe) wml_miniature_view_pane_g5

0x95db,	// (0x0007d606) wml_miniature_view_pane_g6

0x95e3,	// (0x0007d60e) wml_miniature_view_pane_g7

0x95eb,	// (0x0007d616) wml_miniature_view_pane_g8

0x0007,

0xf5db,	// (0x00083606) wml_miniature_view_pane_g

0x28fa,	// (0x00076925) background_graphic_ParamLimits

0x28fa,	// (0x00076925) background_graphic

0x2906,	// (0x00076931) wml_tabs_2_pane

0x290f,	// (0x0007693a) wml_tabs_3_pane_ParamLimits

0x290f,	// (0x0007693a) wml_tabs_3_pane

0x2921,	// (0x0007694c) wml_tabs_4_pane_ParamLimits

0x2921,	// (0x0007694c) wml_tabs_4_pane

0x2937,	// (0x00076962) wml_tabs_5_pane_ParamLimits

0x2937,	// (0x00076962) wml_tabs_5_pane

0x2951,	// (0x0007697c) wml_tabs_pane_g2_ParamLimits

0x2951,	// (0x0007697c) wml_tabs_pane_g2

0x2966,	// (0x00076991) wml_tabs_pane_g3_ParamLimits

0x2966,	// (0x00076991) wml_tabs_pane_g3

0x297b,	// (0x000769a6) wml_tabs_2_active_pane_ParamLimits

0x297b,	// (0x000769a6) wml_tabs_2_active_pane

0x297b,	// (0x000769a6) wml_tabs_2_passive_pane_ParamLimits

0x297b,	// (0x000769a6) wml_tabs_2_passive_pane

0x95f3,	// (0x0007d61e) wml_tabs_3_active_pane_cp_ParamLimits

0x95f3,	// (0x0007d61e) wml_tabs_3_active_pane_cp

0x9604,	// (0x0007d62f) wml_tabs_3_passive_pane_ParamLimits

0x9604,	// (0x0007d62f) wml_tabs_3_passive_pane

0x9615,	// (0x0007d640) wml_tabs_3_passive_pane_cp_ParamLimits

0x9615,	// (0x0007d640) wml_tabs_3_passive_pane_cp

0x9626,	// (0x0007d651) tabs_4_active_pane

0x962e,	// (0x0007d659) tabs_4_passive_pane

0x9636,	// (0x0007d661) tabs_4_passive_pane_cp

0x963e,	// (0x0007d669) tabs_4_passive_pane_cp2

0x902c,	// (0x0007d057) aid_height_text

0x2763,	// (0x0007678e) mup_volume_cont_pane_ParamLimits

0x2763,	// (0x0007678e) mup_volume_cont_pane

0xee29,	// (0x00082e54) aid_size_cell_pinb

0xee29,	// (0x00082e54) aid_size_list_pinb

0x2763,	// (0x0007678e) mup2_volume_cont_pane_ParamLimits

0x2763,	// (0x0007678e) mup2_volume_cont_pane

0x9646,	// (0x0007d671) mup2_volume_cont_pane_g1_ParamLimits

0x9646,	// (0x0007d671) mup2_volume_cont_pane_g1

0x647f,	// (0x0007a4aa) aid_size_cell_touch_ParamLimits

0x647f,	// (0x0007a4aa) aid_size_cell_touch

0x6726,	// (0x0007a751) touch_pane_ParamLimits

0x6726,	// (0x0007a751) touch_pane

0xee29,	// (0x00082e54) main_rss2_pane

0x2992,	// (0x000769bd) listscroll_rss2_pane

0x299b,	// (0x000769c6) rss2_navigation_pane

0x29a3,	// (0x000769ce) list_rss2_pane

0x122c,	// (0x00075257) scroll_pane_cp22

0x29ab,	// (0x000769d6) rss2_navigation_pane_g1

0x29b4,	// (0x000769df) rss2_navigation_pane_g2

0x29bc,	// (0x000769e7) rss2_navigation_pane_g3

0x0002,

0xf5ec,	// (0x00083617) rss2_navigation_pane_g

0x29c4,	// (0x000769ef) rss2_navigation_pane_t1

0x965c,	// (0x0007d687) rss2_list_single_pane_ParamLimits

0x965c,	// (0x0007d687) rss2_list_single_pane

0x29d2,	// (0x000769fd) rss2_list_single_pane_t2

0x29e0,	// (0x00076a0b) rss2_list_single_pane_t3_ParamLimits

0x29e0,	// (0x00076a0b) rss2_list_single_pane_t3

0x29fd,	// (0x00076a28) rss2_list_single_pane_t4

0x835b,	// (0x0007c386) smil_status_pane_g1

0xee8a,	// (0x00082eb5) main_image2_pane_ParamLimits

0xee8a,	// (0x00082eb5) main_image2_pane

0x080b,	// (0x00074836) main_camera2_pane_g9_ParamLimits

0x080b,	// (0x00074836) main_camera2_pane_g9

0x1539,	// (0x00075564) main_camera2_pane_t5_ParamLimits

0x1539,	// (0x00075564) main_camera2_pane_t5

0x9595,	// (0x0007d5c0) main_camera2_pane_t6_ParamLimits

0x9595,	// (0x0007d5c0) main_camera2_pane_t6

0x9690,	// (0x0007d6bb) main_image2_pane_g1_ParamLimits

0x9690,	// (0x0007d6bb) main_image2_pane_g1

0x8d5e,	// (0x0007cd89) smil2_video_pane_ParamLimits

0x8d5e,	// (0x0007cd89) smil2_video_pane

0x64b3,	// (0x0007a4de) aid_zoom_text_primary_cp

0x66cf,	// (0x0007a6fa) popup_preview_fixed_window

0x0b11,	// (0x00074b3c) im_reading_pane_g1

0x9587,	// (0x0007d5b2) cams2_bc_adjust_pane_cp_ParamLimits

0x9587,	// (0x0007d5b2) cams2_bc_adjust_pane_cp

0x07ef,	// (0x0007481a) cams2_bc_adjust_pane_ParamLimits

0x07ef,	// (0x0007481a) cams2_bc_adjust_pane

0x0a60,	// (0x00074a8b) cams2_bc_adjust_pane_g1

0xee29,	// (0x00082e54) cams2_slider_pane

0x0a60,	// (0x00074a8b) cams2_slider_pane_g1

0x0a60,	// (0x00074a8b) cams2_slider_pane_g2

0x0006,

0xf5f3,	// (0x0008361e) cams2_slider_pane_g

0x67f7,	// (0x0007a822) calc_display_pane_ParamLimits

0x6815,	// (0x0007a840) calc_paper_pane_ParamLimits

0x6831,	// (0x0007a85c) grid_calc_pane_ParamLimits

0x8561,	// (0x0007c58c) popup_clock_digital_window_t1_ParamLimits

0x170a,	// (0x00075735) main_image_pane_t1

0x67dd,	// (0x0007a808) aid_size_cell_calc_ParamLimits

0x67dd,	// (0x0007a808) aid_size_cell_calc

0x9280,	// (0x0007d2ab) popup_blid_sat_info2_window_ParamLimits

0x9280,	// (0x0007d2ab) popup_blid_sat_info2_window

0x2a0b,	// (0x00076a36) aid_size_cell_blid

0x2763,	// (0x0007678e) bg_popup_window_pane_cp07

0x2a28,	// (0x00076a53) grid_popup_blid_pane

0x2a32,	// (0x00076a5d) heading_pane_cp05_ParamLimits

0x2a32,	// (0x00076a5d) heading_pane_cp05

0x2afc,	// (0x00076b27) cell_popup_blid_pane_ParamLimits

0x2afc,	// (0x00076b27) cell_popup_blid_pane

0x2b20,	// (0x00076b4b) cell_popup_blid_pane_g1

0x2b28,	// (0x00076b53) cell_popup_blid_pane_t1

0x2763,	// (0x0007678e) mup2_indicator_pane_ParamLimits

0x2763,	// (0x0007678e) mup2_indicator_pane

0xee29,	// (0x00082e54) mup2_visualizer_osc_pane

0x28d4,	// (0x000768ff) mup2_visualizer_spec_pane_ParamLimits

0x28d4,	// (0x000768ff) mup2_visualizer_spec_pane

0xee29,	// (0x00082e54) mup2_spec_half_pane

0xee29,	// (0x00082e54) mup2_spec_half_pane_cp

0x2b36,	// (0x00076b61) mup2_spec_bar_pane_ParamLimits

0x2b36,	// (0x00076b61) mup2_spec_bar_pane

0x0a60,	// (0x00074a8b) mup2_spec_bar_pane_g1

0x2b55,	// (0x00076b80) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00083644) mup2_spec_bar_pane_g

0xee29,	// (0x00082e54) mup2_osc_middle_pane

0x0a60,	// (0x00074a8b) mup2_visualizer_osc_pane_g1

0xee53,	// (0x00082e7e) popup_number_entry_window_t1_ParamLimits

0xee66,	// (0x00082e91) popup_number_entry_window_t2_ParamLimits

0xee78,	// (0x00082ea3) popup_number_entry_window_t3_ParamLimits

0x677d,	// (0x0007a7a8) popup_number_entry_window_t5_ParamLimits

0x677d,	// (0x0007a7a8) popup_number_entry_window_t5

0xf045,	// (0x00083070) popup_number_entry_window_t_ParamLimits

0x016b,	// (0x00074196) text_title_cp2_ParamLimits

0x8a53,	// (0x0007ca7e) aid_hotspot_pointer_text2_pane

0x8aed,	// (0x0007cb18) main_viewer_pane_g9_ParamLimits

0x8aed,	// (0x0007cb18) main_viewer_pane_g9

0x0d53,	// (0x00074d7e) cale_month_pane_t1_ParamLimits

0x0d90,	// (0x00074dbb) bg_cale_pane_ParamLimits

0x0da8,	// (0x00074dd3) list_cale_pane_ParamLimits

0x0db9,	// (0x00074de4) listscroll_cale_day_pane_t1

0x0dcb,	// (0x00074df6) scroll_pane_cp09_ParamLimits

0x8812,	// (0x0007c83d) main_mup_eq_pane_t1_ParamLimits

0x8812,	// (0x0007c83d) main_mup_eq_pane_t1

0x882c,	// (0x0007c857) main_mup_eq_pane_t2_ParamLimits

0x882c,	// (0x0007c857) main_mup_eq_pane_t2

0x8844,	// (0x0007c86f) main_mup_eq_pane_t3_ParamLimits

0x8844,	// (0x0007c86f) main_mup_eq_pane_t3

0x885c,	// (0x0007c887) main_mup_eq_pane_t4_ParamLimits

0x885c,	// (0x0007c887) main_mup_eq_pane_t4

0x8874,	// (0x0007c89f) main_mup_eq_pane_t5_ParamLimits

0x8874,	// (0x0007c89f) main_mup_eq_pane_t5

0x888c,	// (0x0007c8b7) main_mup_eq_pane_t6_ParamLimits

0x888c,	// (0x0007c8b7) main_mup_eq_pane_t6

0x88a0,	// (0x0007c8cb) main_mup_eq_pane_t7_ParamLimits

0x88a0,	// (0x0007c8cb) main_mup_eq_pane_t7

0x88b4,	// (0x0007c8df) main_mup_eq_pane_t8_ParamLimits

0x88b4,	// (0x0007c8df) main_mup_eq_pane_t8

0x88ca,	// (0x0007c8f5) main_mup_eq_pane_t9_ParamLimits

0x88ca,	// (0x0007c8f5) main_mup_eq_pane_t9

0x88e2,	// (0x0007c90d) main_mup_eq_pane_t10_ParamLimits

0x88e2,	// (0x0007c90d) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x000833d4) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x000833d4) main_mup_eq_pane_t

0x899f,	// (0x0007c9ca) mup_equalizer_pane_cp5_ParamLimits

0x89b5,	// (0x0007c9e0) mup_equalizer_pane_cp6_ParamLimits

0x89cd,	// (0x0007c9f8) mup_equalizer_pane_cp7_ParamLimits

0xee29,	// (0x00082e54) main_gallery_pane

0x2872,	// (0x0007689d) smil2_volume_pane

0x288d,	// (0x000768b8) smil_status_volume_pane_g1_ParamLimits

0x287a,	// (0x000768a5) smil_status_volume_pane_g2_ParamLimits

0x943a,	// (0x0007d465) smil_status_volume_pane_g3_ParamLimits

0xf572,	// (0x0008359d) smil_status_volume_pane_g_ParamLimits

0x2763,	// (0x0007678e) bg_popup_window_pane_cp07_ParamLimits

0x2a13,	// (0x00076a3e) blid_firmament_pane

0x07ef,	// (0x0007481a) aid_size_cell_gallery_ParamLimits

0x07ef,	// (0x0007481a) aid_size_cell_gallery

0x07ef,	// (0x0007481a) grid_gallery_pane_ParamLimits

0x07ef,	// (0x0007481a) grid_gallery_pane

0x154d,	// (0x00075578) cell_gallery_pane_ParamLimits

0x154d,	// (0x00075578) cell_gallery_pane

0xee8a,	// (0x00082eb5) bg_cell_gallery_focus_pane_ParamLimits

0xee8a,	// (0x00082eb5) bg_cell_gallery_focus_pane

0x07fd,	// (0x00074828) cell_gallery_pane_g1_ParamLimits

0x07fd,	// (0x00074828) cell_gallery_pane_g1

0x07fd,	// (0x00074828) cell_gallery_pane_g2_ParamLimits

0x07fd,	// (0x00074828) cell_gallery_pane_g2

0x07fd,	// (0x00074828) cell_gallery_pane_g3_ParamLimits

0x07fd,	// (0x00074828) cell_gallery_pane_g3

0x080b,	// (0x00074836) cell_gallery_pane_g4_ParamLimits

0x080b,	// (0x00074836) cell_gallery_pane_g4

0x0003,

0xf61e,	// (0x00083649) cell_gallery_pane_g_ParamLimits

0xf61e,	// (0x00083649) cell_gallery_pane_g

0x2b5f,	// (0x00076b8a) bg_cell_gallery_focus_pane_g1

0x2b67,	// (0x00076b92) bg_cell_gallery_focus_pane_g2

0x2b6f,	// (0x00076b9a) bg_cell_gallery_focus_pane_g3

0x2b77,	// (0x00076ba2) bg_cell_gallery_focus_pane_g4

0x2b7f,	// (0x00076baa) bg_cell_gallery_focus_pane_g5

0x2b87,	// (0x00076bb2) bg_cell_gallery_focus_pane_g6

0x2b8f,	// (0x00076bba) bg_cell_gallery_focus_pane_g7

0x2b97,	// (0x00076bc2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf627,	// (0x00083652) bg_cell_gallery_focus_pane_g

0x2b9f,	// (0x00076bca) aid_firma_cardinal

0x2bb3,	// (0x00076bde) blid_firmament_pane_t1

0x2bca,	// (0x00076bf5) blid_firmament_pane_t2

0x2be1,	// (0x00076c0c) blid_firmament_pane_t3

0x2bf8,	// (0x00076c23) blid_firmament_pane_t4

0x0003,

0xf638,	// (0x00083663) blid_firmament_pane_t

0x2c0f,	// (0x00076c3a) blid_sat_info_pane

0x0a60,	// (0x00074a8b) blid_sat_info_pane_g1

0x0a60,	// (0x00074a8b) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x000833c8) blid_sat_info_pane_g

0x2c1f,	// (0x00076c4a) blid_sat_info_pane_t1

0x2c2d,	// (0x00076c58) smil2_volume_content_pane

0x2c36,	// (0x00076c61) smil2_volume_pane_g1

0x08e6,	// (0x00074911) smil2_volume_content_pane_g1

0x2c3e,	// (0x00076c69) smil2_volume_content_pane_g2

0x2c47,	// (0x00076c72) smil2_volume_content_pane_g3

0x2c50,	// (0x00076c7b) smil2_volume_content_pane_g4

0x2c59,	// (0x00076c84) smil2_volume_content_pane_g5

0x2c62,	// (0x00076c8d) smil2_volume_content_pane_g6

0x2c6b,	// (0x00076c96) smil2_volume_content_pane_g7

0x2c74,	// (0x00076c9f) smil2_volume_content_pane_g8

0x2c7d,	// (0x00076ca8) smil2_volume_content_pane_g9

0x2c86,	// (0x00076cb1) smil2_volume_content_pane_g10

0x0009,

0xf641,	// (0x0008366c) smil2_volume_content_pane_g

0x6e1f,	// (0x0007ae4a) cale_week_day_heading_pane_t1_ParamLimits

0x6e3a,	// (0x0007ae65) cale_week_day_heading_pane_t2_ParamLimits

0x6e55,	// (0x0007ae80) cale_week_day_heading_pane_t3_ParamLimits

0x6e70,	// (0x0007ae9b) cale_week_day_heading_pane_t4_ParamLimits

0x6e8b,	// (0x0007aeb6) cale_week_day_heading_pane_t5_ParamLimits

0x6ea6,	// (0x0007aed1) cale_week_day_heading_pane_t6_ParamLimits

0x6ec1,	// (0x0007aeec) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x00083177) cale_week_day_heading_pane_t_ParamLimits

0x09d8,	// (0x00074a03) bg_cale_side_pane_ParamLimits

0x6edc,	// (0x0007af07) cale_week_time_pane_t1_ParamLimits

0x6ef6,	// (0x0007af21) cale_week_time_pane_t2_ParamLimits

0x6f10,	// (0x0007af3b) cale_week_time_pane_t3_ParamLimits

0x6f2a,	// (0x0007af55) cale_week_time_pane_t4_ParamLimits

0x6f44,	// (0x0007af6f) cale_week_time_pane_t5_ParamLimits

0x6f5e,	// (0x0007af89) cale_week_time_pane_t6_ParamLimits

0x6f7e,	// (0x0007afa9) cale_week_time_pane_t7_ParamLimits

0x6fa0,	// (0x0007afcb) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00083186) cale_week_time_pane_t_ParamLimits

0x6fc4,	// (0x0007afef) cell_cale_week_pane_g2_ParamLimits

0x09d8,	// (0x00074a03) bg_cale_side_pane_cp01_ParamLimits

0x814a,	// (0x0007c175) cale_month_week_pane_t1_ParamLimits

0x8163,	// (0x0007c18e) cale_month_week_pane_t2_ParamLimits

0x817c,	// (0x0007c1a7) cale_month_week_pane_t3_ParamLimits

0x8195,	// (0x0007c1c0) cale_month_week_pane_t4_ParamLimits

0x81b0,	// (0x0007c1db) cale_month_week_pane_t5_ParamLimits

0x81d1,	// (0x0007c1fc) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x00083254) cale_month_week_pane_t_ParamLimits

0x8318,	// (0x0007c343) cell_cale_month_pane_g1_ParamLimits

0xee29,	// (0x00082e54) main_cale_event_viewer_pane

0xee29,	// (0x00082e54) listscroll_cale_event_viewer_pane

0x2c8f,	// (0x00076cba) list_cale_ev_pane

0x2c97,	// (0x00076cc2) scroll_pane_cp023

0x2ca3,	// (0x00076cce) field_cale_ev_pane_ParamLimits

0x2ca3,	// (0x00076cce) field_cale_ev_pane

0x2cc1,	// (0x00076cec) field_cale_ev_content_pane_ParamLimits

0x2cc1,	// (0x00076cec) field_cale_ev_content_pane

0x2ccd,	// (0x00076cf8) field_cale_ev_pane_g1_ParamLimits

0x2ccd,	// (0x00076cf8) field_cale_ev_pane_g1

0x2cd9,	// (0x00076d04) field_cale_ev_pane_g2_ParamLimits

0x2cd9,	// (0x00076d04) field_cale_ev_pane_g2

0x2cf1,	// (0x00076d1c) field_cale_ev_pane_g3_ParamLimits

0x2cf1,	// (0x00076d1c) field_cale_ev_pane_g3

0x0002,

0xf656,	// (0x00083681) field_cale_ev_pane_g_ParamLimits

0xf656,	// (0x00083681) field_cale_ev_pane_g

0x2d09,	// (0x00076d34) field_cale_ev_pane_t1_ParamLimits

0x2d09,	// (0x00076d34) field_cale_ev_pane_t1

0x2d20,	// (0x00076d4b) field_cale_ev_content_pane_t1_ParamLimits

0x2d20,	// (0x00076d4b) field_cale_ev_content_pane_t1

0x15f0,	// (0x0007561b) bg_button_pane_cp01

0x6baa,	// (0x0007abd5) listscroll_cale_week_pane_ParamLimits

0x0983,	// (0x000749ae) popup_toolbar_window_cp01

0x09a9,	// (0x000749d4) listscroll_cale_week_pane_t1_ParamLimits

0x6baa,	// (0x0007abd5) listscroll_cale_day_pane_ParamLimits

0x0983,	// (0x000749ae) popup_toolbar_window_cp02

0x0db9,	// (0x00074de4) listscroll_cale_day_pane_t1_ParamLimits

0x6baa,	// (0x0007abd5) main_cale_month_pane_ParamLimits

0x9383,	// (0x0007d3ae) popup_toolbar_window_cp03_ParamLimits

0x9383,	// (0x0007d3ae) popup_toolbar_window_cp03

0x8c74,	// (0x0007cc9f) main_image_pane_g2_ParamLimits

0x8c74,	// (0x0007cc9f) main_image_pane_g2

0x8c80,	// (0x0007ccab) main_image_pane_g3_ParamLimits

0x8c80,	// (0x0007ccab) main_image_pane_g3

0x0002,

0xf43b,	// (0x00083466) main_image_pane_g_ParamLimits

0xf43b,	// (0x00083466) main_image_pane_g

0x170a,	// (0x00075735) main_image_pane_t1_ParamLimits

0x8c8c,	// (0x0007ccb7) main_image_pane_t2_ParamLimits

0x8c8c,	// (0x0007ccb7) main_image_pane_t2

0x8c9e,	// (0x0007ccc9) main_image_pane_t3_ParamLimits

0x8c9e,	// (0x0007ccc9) main_image_pane_t3

0x8cb0,	// (0x0007ccdb) main_image_pane_t4_ParamLimits

0x8cb0,	// (0x0007ccdb) main_image_pane_t4

0x0003,

0xf442,	// (0x0008346d) main_image_pane_t_ParamLimits

0xf442,	// (0x0008346d) main_image_pane_t

0x8cc2,	// (0x0007cced) popup_image_details_window_cp01

0x8ccc,	// (0x0007ccf7) popup_toobar_trans_pane_cp01_ParamLimits

0x8ccc,	// (0x0007ccf7) popup_toobar_trans_pane_cp01

0x92d3,	// (0x0007d2fe) popup_image_details_window_ParamLimits

0x92d3,	// (0x0007d2fe) popup_image_details_window

0x92e1,	// (0x0007d30c) popup_image_focus_window

0x07ef,	// (0x0007481a) camera2_autofocus_pane_ParamLimits

0x07ef,	// (0x0007481a) camera2_autofocus_pane

0xee29,	// (0x00082e54) bg_popup_sub_pane_cp06

0x2d3e,	// (0x00076d69) popup_image_focus_window_g1

0x2d46,	// (0x00076d71) popup_image_focus_window_g2

0x2d4e,	// (0x00076d79) popup_image_focus_window_g3

0x2d56,	// (0x00076d81) popup_image_focus_window_g4

0x0003,

0xf65d,	// (0x00083688) popup_image_focus_window_g

0x2d5e,	// (0x00076d89) popup_image_focus_window_t1

0x2d6c,	// (0x00076d97) popup_image_focus_window_t2

0x2d7c,	// (0x00076da7) popup_image_focus_window_t3

0x0002,

0xf666,	// (0x00083691) popup_image_focus_window_t

0x07fd,	// (0x00074828) camera2_autofocus_pane_g1

0xee8a,	// (0x00082eb5) bg_tb_trans_pane_cp01

0x2d8a,	// (0x00076db5) popup_image_details_window_g1

0x2d9d,	// (0x00076dc8) popup_image_details_window_g2

0x0002,

0xf678,	// (0x000836a3) popup_image_details_window_g

0x2dc6,	// (0x00076df1) popup_image_details_window_t1

0x2dd8,	// (0x00076e03) popup_image_details_window_t2

0x2df1,	// (0x00076e1c) popup_image_details_window_t3

0x2e05,	// (0x00076e30) popup_image_details_window_t4

0x2e20,	// (0x00076e4b) popup_image_details_window_t5

0x0004,

0xf67f,	// (0x000836aa) popup_image_details_window_t

0x085b,	// (0x00074886) bg_calc_paper_pane_ParamLimits

0xee29,	// (0x00082e54) grid_highlight_pane_cp013

0x692e,	// (0x0007a959) list_calc_pane_ParamLimits

0x6940,	// (0x0007a96b) scroll_pane_cp024

0x086f,	// (0x0007489a) bg_calc_display_pane_ParamLimits

0x6948,	// (0x0007a973) calc_display_pane_t1_ParamLimits

0x695d,	// (0x0007a988) calc_display_pane_t2_ParamLimits

0x6972,	// (0x0007a99d) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000830f7) calc_display_pane_t_ParamLimits

0x6a4c,	// (0x0007aa77) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x00083114) cell_calc_pane_g

0x6a55,	// (0x0007aa80) cell_calc_pane_t1

0x08c4,	// (0x000748ef) grid_highlight_pane_cp02_ParamLimits

0x08da,	// (0x00074905) toolbar_button_pane_cp01_ParamLimits

0x08da,	// (0x00074905) toolbar_button_pane_cp01

0x174f,	// (0x0007577a) temp_image_control_pane_ParamLimits

0x174f,	// (0x0007577a) temp_image_control_pane

0xee8a,	// (0x00082eb5) main_mp3_pane

0x2e3a,	// (0x00076e65) temp_image_control_pane_g1_ParamLimits

0x2e3a,	// (0x00076e65) temp_image_control_pane_g1

0x2e48,	// (0x00076e73) temp_image_control_pane_g2_ParamLimits

0x2e48,	// (0x00076e73) temp_image_control_pane_g2

0x2e5a,	// (0x00076e85) temp_image_control_pane_g3_ParamLimits

0x2e5a,	// (0x00076e85) temp_image_control_pane_g3

0x969c,	// (0x0007d6c7) temp_image_control_pane_g4_ParamLimits

0x969c,	// (0x0007d6c7) temp_image_control_pane_g4

0x0003,

0xf68a,	// (0x000836b5) temp_image_control_pane_g_ParamLimits

0xf68a,	// (0x000836b5) temp_image_control_pane_g

0x2e3a,	// (0x00076e65) main_mp3_pane_g1

0x96ad,	// (0x0007d6d8) main_mp3_pane_g2

0x0007,

0xf693,	// (0x000836be) main_mp3_pane_g

0x2e8f,	// (0x00076eba) main_mp3_pane_t1

0x080b,	// (0x00074836) main_camera_pane_g8_ParamLimits

0x080b,	// (0x00074836) main_camera_pane_g8

0x716b,	// (0x0007b196) main_video_pane_g7_ParamLimits

0x716b,	// (0x0007b196) main_video_pane_g7

0x1539,	// (0x00075564) main_camera2_pane_t7_ParamLimits

0x1539,	// (0x00075564) main_camera2_pane_t7

0x0b68,	// (0x00074b93) scroll_pane_cp025_ParamLimits

0x0b68,	// (0x00074b93) scroll_pane_cp025

0x0b7c,	// (0x00074ba7) scroll_pane_cp026_ParamLimits

0x0b7c,	// (0x00074ba7) scroll_pane_cp026

0x0b8b,	// (0x00074bb6) wml_content_pane_ParamLimits

0xee29,	// (0x00082e54) main_touch_calib_pane

0x9751,	// (0x0007d77c) main_touch_calib_pane_g1

0x975d,	// (0x0007d788) main_touch_calib_pane_g2

0x9769,	// (0x0007d794) main_touch_calib_pane_g3

0x9775,	// (0x0007d7a0) main_touch_calib_pane_g4

0x0003,

0xf6b1,	// (0x000836dc) main_touch_calib_pane_g

0x9781,	// (0x0007d7ac) main_touch_calib_pane_t1

0x979a,	// (0x0007d7c5) main_touch_calib_pane_t2

0x0004,

0xf6ba,	// (0x000836e5) main_touch_calib_pane_t

0x12fb,	// (0x00075326) mup_progress_pane_cp02

0x1330,	// (0x0007535b) navi_pane_g1

0x13eb,	// (0x00075416) navi_pane_mp_t3

0xee8a,	// (0x00082eb5) main_mp3_pane_ParamLimits

0x93c0,	// (0x0007d3eb) navi_pane_ParamLimits

0x2e3a,	// (0x00076e65) main_mp3_pane_g1_ParamLimits

0x96ad,	// (0x0007d6d8) main_mp3_pane_g2_ParamLimits

0x96b9,	// (0x0007d6e4) main_mp3_pane_g3_ParamLimits

0x96b9,	// (0x0007d6e4) main_mp3_pane_g3

0x96c5,	// (0x0007d6f0) main_mp3_pane_g4_ParamLimits

0x96c5,	// (0x0007d6f0) main_mp3_pane_g4

0x07fd,	// (0x00074828) main_mp3_pane_g5_ParamLimits

0x07fd,	// (0x00074828) main_mp3_pane_g5

0x2e6a,	// (0x00076e95) main_mp3_pane_g6_ParamLimits

0x2e6a,	// (0x00076e95) main_mp3_pane_g6

0x2e77,	// (0x00076ea2) main_mp3_pane_g7_ParamLimits

0x2e77,	// (0x00076ea2) main_mp3_pane_g7

0x2e83,	// (0x00076eae) main_mp3_pane_g8_ParamLimits

0x2e83,	// (0x00076eae) main_mp3_pane_g8

0xf693,	// (0x000836be) main_mp3_pane_g_ParamLimits

0x96d1,	// (0x0007d6fc) main_mp3_pane_t2

0x96e1,	// (0x0007d70c) main_mp3_pane_t3

0x2e9d,	// (0x00076ec8) main_mp3_pane_t4

0x2eab,	// (0x00076ed6) main_mp3_pane_t5

0x0005,

0xf6a4,	// (0x000836cf) main_mp3_pane_t

0x2eb9,	// (0x00076ee4) mup_progress_pane_cp01

0x64b3,	// (0x0007a4de) aid_zoom_text_secondary2

0x2c8f,	// (0x00076cba) list_cale_ev2_pane

0x2c97,	// (0x00076cc2) scroll_pane_cp023_ParamLimits

0x97f5,	// (0x0007d820) field_cale_ev2_pane_ParamLimits

0x97f5,	// (0x0007d820) field_cale_ev2_pane

0x981f,	// (0x0007d84a) field_cale_ev2_pane_g1_ParamLimits

0x981f,	// (0x0007d84a) field_cale_ev2_pane_g1

0x982b,	// (0x0007d856) field_cale_ev2_pane_g2_ParamLimits

0x982b,	// (0x0007d856) field_cale_ev2_pane_g2

0x9843,	// (0x0007d86e) field_cale_ev2_pane_g3_ParamLimits

0x9843,	// (0x0007d86e) field_cale_ev2_pane_g3

0x0003,

0xf6c5,	// (0x000836f0) field_cale_ev2_pane_g_ParamLimits

0xf6c5,	// (0x000836f0) field_cale_ev2_pane_g

0x589b,	// (0x000798c6) field_cale_ev2_pane_t1_ParamLimits

0x589b,	// (0x000798c6) field_cale_ev2_pane_t1

0x58b2,	// (0x000798dd) field_cale_ev2_pane_t2_ParamLimits

0x58b2,	// (0x000798dd) field_cale_ev2_pane_t2

0x0001,

0xf6ce,	// (0x000836f9) field_cale_ev2_pane_t_ParamLimits

0xf6ce,	// (0x000836f9) field_cale_ev2_pane_t

0x8b55,	// (0x0007cb80) main_postcard_pane_g5_ParamLimits

0x8b55,	// (0x0007cb80) main_postcard_pane_g5

0x8b63,	// (0x0007cb8e) main_postcard_pane_g6_ParamLimits

0x8b63,	// (0x0007cb8e) main_postcard_pane_g6

0x07ef,	// (0x0007481a) camera2_autofocus_pane_cp_ParamLimits

0x07ef,	// (0x0007481a) camera2_autofocus_pane_cp

0xee8a,	// (0x00082eb5) main_mup3_pane

0x98a6,	// (0x0007d8d1) main_mup3_pane_g1_ParamLimits

0x98a6,	// (0x0007d8d1) main_mup3_pane_g1

0x98c7,	// (0x0007d8f2) main_mup3_pane_g2_ParamLimits

0x98c7,	// (0x0007d8f2) main_mup3_pane_g2

0x9941,	// (0x0007d96c) main_mup3_pane_g3_ParamLimits

0x9941,	// (0x0007d96c) main_mup3_pane_g3

0x9984,	// (0x0007d9af) main_mup3_pane_g4_ParamLimits

0x9984,	// (0x0007d9af) main_mup3_pane_g4

0x99c7,	// (0x0007d9f2) main_mup3_pane_g5_ParamLimits

0x99c7,	// (0x0007d9f2) main_mup3_pane_g5

0x9a0a,	// (0x0007da35) main_mup3_pane_g6_ParamLimits

0x9a0a,	// (0x0007da35) main_mup3_pane_g6

0x080b,	// (0x00074836) main_mup3_pane_g7_ParamLimits

0x080b,	// (0x00074836) main_mup3_pane_g7

0x0007,

0xf6de,	// (0x00083709) main_mup3_pane_g_ParamLimits

0xf6de,	// (0x00083709) main_mup3_pane_g

0x9a80,	// (0x0007daab) main_mup3_pane_t1_ParamLimits

0x9a80,	// (0x0007daab) main_mup3_pane_t1

0x9aef,	// (0x0007db1a) main_mup3_pane_t2_ParamLimits

0x9aef,	// (0x0007db1a) main_mup3_pane_t2

0x9bb8,	// (0x0007dbe3) main_mup3_pane_t4_ParamLimits

0x9bb8,	// (0x0007dbe3) main_mup3_pane_t4

0x9c06,	// (0x0007dc31) main_mup3_pane_t5_ParamLimits

0x9c06,	// (0x0007dc31) main_mup3_pane_t5

0x9cb6,	// (0x0007dce1) main_mup3_pane_t6_ParamLimits

0x9cb6,	// (0x0007dce1) main_mup3_pane_t6

0x0005,

0xf6ef,	// (0x0008371a) main_mup3_pane_t_ParamLimits

0xf6ef,	// (0x0008371a) main_mup3_pane_t

0x9d62,	// (0x0007dd8d) mup3_progress_pane_ParamLimits

0x9d62,	// (0x0007dd8d) mup3_progress_pane

0x9dd6,	// (0x0007de01) popup_mup3_control_window_ParamLimits

0x9dd6,	// (0x0007de01) popup_mup3_control_window

0x2ec1,	// (0x00076eec) popup_mup3_text_window

0x9def,	// (0x0007de1a) mup3_progress_pane_t1

0x9e0e,	// (0x0007de39) mup3_progress_pane_t2

0x2ec9,	// (0x00076ef4) mup3_progress_pane_t3

0x0002,

0xf6fc,	// (0x00083727) mup3_progress_pane_t

0x2ee6,	// (0x00076f11) mup_progress_pane_cp03

0xee29,	// (0x00082e54) bg_tb_trans_pane_cp04

0x9e2d,	// (0x0007de58) mup3_volume_pane

0x9e35,	// (0x0007de60) popup_mup3_control_window_g1

0x9e3e,	// (0x0007de69) mup3_volume_pane_g1

0x9e47,	// (0x0007de72) mup3_volume_pane_g2

0x9e50,	// (0x0007de7b) mup3_volume_pane_g3

0x0002,

0xf703,	// (0x0008372e) mup3_volume_pane_g

0xee29,	// (0x00082e54) bg_tb_trans_pane_cp03

0x2ef6,	// (0x00076f21) popup_mup3_text_window_g1

0x2efe,	// (0x00076f29) popup_mup3_text_window_t1

0x08b7,	// (0x000748e2) list_calc_item_pane_g1_ParamLimits

0x2989,	// (0x000769b4) mup_volume_pane_cp_g1

0x97b3,	// (0x0007d7de) main_touch_calib_pane_t3

0x97c9,	// (0x0007d7f4) main_touch_calib_pane_t4

0x97df,	// (0x0007d80a) main_touch_calib_pane_t5

0x646b,	// (0x0007a496) aid_cell_size_toolbar2

0x6473,	// (0x0007a49e) aid_popup3_width_pane

0x5763,	// (0x0007978e) aid_zoom_text_msg_primary

0x706d,	// (0x0007b098) vorec_t7

0x087b,	// (0x000748a6) bg_calc_paper_pane_g1_ParamLimits

0x0893,	// (0x000748be) bg_calc_paper_pane_g2_ParamLimits

0x0887,	// (0x000748b2) bg_calc_paper_pane_g3_ParamLimits

0x08ab,	// (0x000748d6) bg_calc_paper_pane_g4_ParamLimits

0x089f,	// (0x000748ca) bg_calc_paper_pane_g5_ParamLimits

0x69b1,	// (0x0007a9dc) bg_calc_paper_pane_g6_ParamLimits

0x69c2,	// (0x0007a9ed) bg_calc_paper_pane_g7_ParamLimits

0x69d3,	// (0x0007a9fe) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000830fe) bg_calc_paper_pane_g_ParamLimits

0x69e4,	// (0x0007aa0f) calc_bg_paper_pane_g9_ParamLimits

0x07ef,	// (0x0007481a) image_qvga_pane_ParamLimits

0x07ef,	// (0x0007481a) image_qvga_pane

0x0782,	// (0x000747ad) bg_popup_sub_pane_cp04_ParamLimits

0x1686,	// (0x000756b1) popup_mup_playback_window_g1_ParamLimits

0x1692,	// (0x000756bd) popup_mup_playback_window_t1_ParamLimits

0x16a7,	// (0x000756d2) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x00083461) popup_mup_playback_window_t_ParamLimits

0x07fd,	// (0x00074828) main_mup2_pane_g3_ParamLimits

0x07fd,	// (0x00074828) main_mup2_pane_g3

0x7352,	// (0x0007b37d) popup_toolbar_window_cp04

0x1a9c,	// (0x00075ac7) popup_call2_audio_second_window_g3_ParamLimits

0x1a9c,	// (0x00075ac7) popup_call2_audio_second_window_g3

0x1eb4,	// (0x00075edf) popup_call2_audio_first_window_g4_ParamLimits

0x1eb4,	// (0x00075edf) popup_call2_audio_first_window_g4

0x24db,	// (0x00076506) popup_call2_audio_in_window_g4_ParamLimits

0x24db,	// (0x00076506) popup_call2_audio_in_window_g4

0x8c67,	// (0x0007cc92) aid_area_sk_bg_cut_ParamLimits

0x8c67,	// (0x0007cc92) aid_area_sk_bg_cut

0x16bc,	// (0x000756e7) aid_area_sk_bg_cut_2_ParamLimits

0x16bc,	// (0x000756e7) aid_area_sk_bg_cut_2

0xee29,	// (0x00082e54) aid_placing_details_win

0xee29,	// (0x00082e54) aid_placing_details_win_2

0x07fd,	// (0x00074828) camera2_autofocus_pane_g1_ParamLimits

0x66c0,	// (0x0007a6eb) popup_fixed_preview_cale_window_ParamLimits

0x66c0,	// (0x0007a6eb) popup_fixed_preview_cale_window

0x147b,	// (0x000754a6) navi_slider_pane_g3

0x1472,	// (0x0007549d) navi_slider_pane_g4

0x1469,	// (0x00075494) navi_slider_pane_g5

0x147b,	// (0x000754a6) navi_slider_pane_g6

0x87e6,	// (0x0007c811) navi_slider_pane_g7

0x15bd,	// (0x000755e8) mup_scale_pane_g3

0x15c6,	// (0x000755f1) mup_scale_pane_g4

0x15cf,	// (0x000755fa) mup_scale_pane_g5

0x89e5,	// (0x0007ca10) mup_scale_pane_g6

0x89ee,	// (0x0007ca19) mup_scale_pane_g7

0x0a60,	// (0x00074a8b) cams2_slider_pane_g3

0x0a60,	// (0x00074a8b) cams2_slider_pane_g4

0x0a60,	// (0x00074a8b) cams2_slider_pane_g5

0x0a60,	// (0x00074a8b) cams2_slider_pane_g6

0x0a60,	// (0x00074a8b) cams2_slider_pane_g7

0x0a60,	// (0x00074a8b) camera2_autofocus_pane_cp_g1

0x27f9,	// (0x00076824) bg_popup_preview_window_pane_cp02_ParamLimits

0x27f9,	// (0x00076824) bg_popup_preview_window_pane_cp02

0x2f0c,	// (0x00076f37) list_fp_cale_pane_ParamLimits

0x2f0c,	// (0x00076f37) list_fp_cale_pane

0x2f18,	// (0x00076f43) popup_fixed_preview_cale_window_t1_ParamLimits

0x2f18,	// (0x00076f43) popup_fixed_preview_cale_window_t1

0x9e59,	// (0x0007de84) popup_fixed_preview_cale_window_t2_ParamLimits

0x9e59,	// (0x0007de84) popup_fixed_preview_cale_window_t2

0x9e6e,	// (0x0007de99) popup_fixed_preview_cale_window_t3_ParamLimits

0x9e6e,	// (0x0007de99) popup_fixed_preview_cale_window_t3

0x0002,

0xf70a,	// (0x00083735) popup_fixed_preview_cale_window_t_ParamLimits

0xf70a,	// (0x00083735) popup_fixed_preview_cale_window_t

0x9e83,	// (0x0007deae) list_single_fp_cale_pane_ParamLimits

0x9e83,	// (0x0007deae) list_single_fp_cale_pane

0x2f36,	// (0x00076f61) list_single_fp_cale_pane_g1_ParamLimits

0x2f36,	// (0x00076f61) list_single_fp_cale_pane_g1

0x2f42,	// (0x00076f6d) list_single_fp_cale_pane_g2_ParamLimits

0x2f42,	// (0x00076f6d) list_single_fp_cale_pane_g2

0x0002,

0xf711,	// (0x0008373c) list_single_fp_cale_pane_g_ParamLimits

0xf711,	// (0x0008373c) list_single_fp_cale_pane_g

0x2f5b,	// (0x00076f86) list_single_fp_cale_pane_t1_ParamLimits

0x2f5b,	// (0x00076f86) list_single_fp_cale_pane_t1

0x2f6d,	// (0x00076f98) list_single_fp_cale_pane_t2_ParamLimits

0x2f6d,	// (0x00076f98) list_single_fp_cale_pane_t2

0x0001,

0xf718,	// (0x00083743) list_single_fp_cale_pane_t_ParamLimits

0xf718,	// (0x00083743) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee29,	// (0x00082e54) main_dialer_pane

0xee29,	// (0x00082e54) aid_cell_size_keypad

0xee29,	// (0x00082e54) dialer_ne_pane

0xee29,	// (0x00082e54) grid_dialer_command_1_pane

0xee29,	// (0x00082e54) grid_dialer_command_2_pane

0xee29,	// (0x00082e54) grid_dialer_keypad_pane

0x2763,	// (0x0007678e) bg_popup_call_pane_cp06_ParamLimits

0x2763,	// (0x0007678e) bg_popup_call_pane_cp06

0x2763,	// (0x0007678e) dialer_ne_clear_pane_ParamLimits

0x2763,	// (0x0007678e) dialer_ne_clear_pane

0x0a60,	// (0x00074a8b) dialer_ne_pane_g1

0x1539,	// (0x00075564) dialer_ne_pane_t1_ParamLimits

0x1539,	// (0x00075564) dialer_ne_pane_t1

0x31b6,	// (0x000771e1) dialer_ne_pane_t2_ParamLimits

0x31b6,	// (0x000771e1) dialer_ne_pane_t2

0x9e96,	// (0x0007dec1) dialer_ne_pane_t3_ParamLimits

0x9e96,	// (0x0007dec1) dialer_ne_pane_t3

0x0002,

0xf71d,	// (0x00083748) dialer_ne_pane_t_ParamLimits

0xf71d,	// (0x00083748) dialer_ne_pane_t

0x9e96,	// (0x0007dec1) dialer_ne_pane_t3_copy1_ParamLimits

0x9e96,	// (0x0007dec1) dialer_ne_pane_t3_copy1

0x2fa0,	// (0x00076fcb) cell_dialer_keypad_pane_ParamLimits

0x2fa0,	// (0x00076fcb) cell_dialer_keypad_pane

0xee8a,	// (0x00082eb5) cell_dialer_command_1_pane_ParamLimits

0xee8a,	// (0x00082eb5) cell_dialer_command_1_pane

0x2fb7,	// (0x00076fe2) cell_dialer_command_2_pane_ParamLimits

0x2fb7,	// (0x00076fe2) cell_dialer_command_2_pane

0xee8a,	// (0x00082eb5) bg_button_pane_cp02_ParamLimits

0xee8a,	// (0x00082eb5) bg_button_pane_cp02

0x07fd,	// (0x00074828) cell_dialer_keypad_pane_g1_ParamLimits

0x07fd,	// (0x00074828) cell_dialer_keypad_pane_g1

0xee8a,	// (0x00082eb5) bg_button_pane_cp03_ParamLimits

0xee8a,	// (0x00082eb5) bg_button_pane_cp03

0x07fd,	// (0x00074828) cell_dialer_command_1_pane_g1_ParamLimits

0x07fd,	// (0x00074828) cell_dialer_command_1_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp04

0x0a60,	// (0x00074a8b) cell_dialer_command_2_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp06

0x0a60,	// (0x00074a8b) dialer_ne_clear_pane_g1

0x133c,	// (0x00075367) navi_pane_g2

0x136a,	// (0x00075395) navi_pane_g3

0x0002,

0xf339,	// (0x00083364) navi_pane_g

0x13f9,	// (0x00075424) navi_pane_mv_g2

0x1420,	// (0x0007544b) navi_pane_mv_g5

0x87b1,	// (0x0007c7dc) navi_pane_mv_t1

0x086f,	// (0x0007489a) main_clock2_pane

0x07ef,	// (0x0007481a) main_clock2_list_pane_ParamLimits

0x07ef,	// (0x0007481a) main_clock2_list_pane

0x9f0c,	// (0x0007df37) main_clock2_pane_t1_ParamLimits

0x9f0c,	// (0x0007df37) main_clock2_pane_t1

0x9f3a,	// (0x0007df65) main_clock2_pane_t2_ParamLimits

0x9f3a,	// (0x0007df65) main_clock2_pane_t2

0x0004,

0xf729,	// (0x00083754) main_clock2_pane_t_ParamLimits

0xf729,	// (0x00083754) main_clock2_pane_t

0x9f9f,	// (0x0007dfca) popup_clock_analogue_window_cp03_ParamLimits

0x9f9f,	// (0x0007dfca) popup_clock_analogue_window_cp03

0x9fbd,	// (0x0007dfe8) popup_clock_digital_window_cp02_ParamLimits

0x9fbd,	// (0x0007dfe8) popup_clock_digital_window_cp02

0xa032,	// (0x0007e05d) main_clock2_list_single_pane_ParamLimits

0xa032,	// (0x0007e05d) main_clock2_list_single_pane

0x0a2a,	// (0x00074a55) list_highlight_pane_cp05

0x2ffa,	// (0x00077025) main_clock2_list_single_pane_t1

0x7352,	// (0x0007b37d) popup_toolbar_window_cp04_ParamLimits

0x080b,	// (0x00074836) camera2_autofocus_pane_g2_ParamLimits

0x080b,	// (0x00074836) camera2_autofocus_pane_g2

0x080b,	// (0x00074836) camera2_autofocus_pane_g3_ParamLimits

0x080b,	// (0x00074836) camera2_autofocus_pane_g3

0x080b,	// (0x00074836) camera2_autofocus_pane_g4_ParamLimits

0x080b,	// (0x00074836) camera2_autofocus_pane_g4

0x080b,	// (0x00074836) camera2_autofocus_pane_g5_ParamLimits

0x080b,	// (0x00074836) camera2_autofocus_pane_g5

0x0004,

0xf66d,	// (0x00083698) camera2_autofocus_pane_g_ParamLimits

0xf66d,	// (0x00083698) camera2_autofocus_pane_g

0x9867,	// (0x0007d892) camera2_autofocus_pane_cp_g2

0x986f,	// (0x0007d89a) camera2_autofocus_pane_cp_g3

0x9877,	// (0x0007d8a2) camera2_autofocus_pane_cp_g4

0x987f,	// (0x0007d8aa) camera2_autofocus_pane_cp_g5

0x0004,

0xf6d3,	// (0x000836fe) camera2_autofocus_pane_cp_g

0xee29,	// (0x00082e54) popup_dialer_spcha_window

0xee29,	// (0x00082e54) bg_popup_sub_pane_cp07

0xee29,	// (0x00082e54) list_spcha_pane

0x3008,	// (0x00077033) list_single_spcha_pane_ParamLimits

0x3008,	// (0x00077033) list_single_spcha_pane

0xee29,	// (0x00082e54) list_highlight_pane_cp06

0x0f9c,	// (0x00074fc7) list_single_spcha_pane_t1

0x2285,	// (0x000762b0) popup_call2_audio_out_window_g4_ParamLimits

0x2285,	// (0x000762b0) popup_call2_audio_out_window_g4

0xee29,	// (0x00082e54) main_imed2_pane

0x92e9,	// (0x0007d314) popup_imed_adjust2_window

0x92fc,	// (0x0007d327) popup_imed_trans_window_ParamLimits

0x92fc,	// (0x0007d327) popup_imed_trans_window

0x2a5e,	// (0x00076a89) popup_blid_sat_info2_window_t1

0x2a6c,	// (0x00076a97) popup_blid_sat_info2_window_t2

0x000a,

0xf602,	// (0x0008362d) popup_blid_sat_info2_window_t

0xa0e7,	// (0x0007e112) aid_size_cell_colour_35

0xa101,	// (0x0007e12c) aid_size_cell_colour_112

0xa118,	// (0x0007e143) aid_size_cell_effect

0xee8a,	// (0x00082eb5) bg_tb_trans_pane_cp02

0x0f69,	// (0x00074f94) heading_imed_pane

0xa132,	// (0x0007e15d) listscroll_imed_pane

0x301a,	// (0x00077045) heading_imed_pane_g1

0x3022,	// (0x0007704d) heading_imed_pane_t1

0x3030,	// (0x0007705b) grid_imed_colour_35_pane_ParamLimits

0x3030,	// (0x0007705b) grid_imed_colour_35_pane

0xa13e,	// (0x0007e169) grid_imed_effect_pane

0x3048,	// (0x00077073) list_imed_aspect_pane

0xa14e,	// (0x0007e179) scroll_pane_cp027_ParamLimits

0xa14e,	// (0x0007e179) scroll_pane_cp027

0xa15a,	// (0x0007e185) cell_imed_effect_pane_ParamLimits

0xa15a,	// (0x0007e185) cell_imed_effect_pane

0x3050,	// (0x0007707b) cell_imed_colour_pane_ParamLimits

0x3050,	// (0x0007707b) cell_imed_colour_pane

0x3092,	// (0x000770bd) cell_imed_colour_pane_g1_ParamLimits

0x3092,	// (0x000770bd) cell_imed_colour_pane_g1

0x30a3,	// (0x000770ce) hgihlgiht_grid_pane_cp016_ParamLimits

0x30a3,	// (0x000770ce) hgihlgiht_grid_pane_cp016

0xa172,	// (0x0007e19d) cell_imed_effect_pane_g1

0xa17a,	// (0x0007e1a5) grid_highlight_pane_cp017

0x30b4,	// (0x000770df) list_imed_single_pane_ParamLimits

0x30b4,	// (0x000770df) list_imed_single_pane

0xee29,	// (0x00082e54) list_highlight_pane_cp07

0x30c9,	// (0x000770f4) list_imed_aspect_pane_comp1_t1

0x154d,	// (0x00075578) bg_tb_trans_pane_cp05

0x30eb,	// (0x00077116) popup_imed_adjust2_window_g1

0x3112,	// (0x0007713d) popup_imed_adjust2_window_t1

0x312a,	// (0x00077155) slider_imed_adjust_pane

0x313e,	// (0x00077169) slider_imed_adjust_pane_g1

0x314e,	// (0x00077179) slider_imed_adjust_pane_g2

0x315e,	// (0x00077189) slider_imed_adjust_pane_g3

0x316f,	// (0x0007719a) slider_imed_adjust_pane_g4

0x0003,

0xf746,	// (0x00083771) slider_imed_adjust_pane_g

0xa183,	// (0x0007e1ae) aid_size_cell_clipart2

0xa18f,	// (0x0007e1ba) grid_imed_clipart_pane

0x3180,	// (0x000771ab) scroll_pane_cp031

0xa199,	// (0x0007e1c4) cell_imed_clipart_pane_ParamLimits

0xa199,	// (0x0007e1c4) cell_imed_clipart_pane

0xa1bc,	// (0x0007e1e7) cell_imed_clipart_pane_g1

0xee29,	// (0x00082e54) grid_highlight_pane_cp014

0x9eee,	// (0x0007df19) main_clock2_pane_g1_ParamLimits

0x9eee,	// (0x0007df19) main_clock2_pane_g1

0x9fd9,	// (0x0007e004) aid_call2_pane_cp10

0x9feb,	// (0x0007e016) aid_call_pane_cp10

0x129b,	// (0x000752c6) popup_clock_analogue_window_cp10_g1

0x129b,	// (0x000752c6) popup_clock_analogue_window_cp10_g2

0x9ffd,	// (0x0007e028) popup_clock_analogue_window_cp10_g3

0x9ffd,	// (0x0007e028) popup_clock_analogue_window_cp10_g4

0x129b,	// (0x000752c6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf734,	// (0x0008375f) popup_clock_analogue_window_cp10_g

0xa013,	// (0x0007e03e) popup_clock_analogue_window_cp10_t1

0xa044,	// (0x0007e06f) clock_digital_number_pane_cp10_ParamLimits

0xa044,	// (0x0007e06f) clock_digital_number_pane_cp10

0xa05e,	// (0x0007e089) clock_digital_number_pane_cp11_ParamLimits

0xa05e,	// (0x0007e089) clock_digital_number_pane_cp11

0xa078,	// (0x0007e0a3) clock_digital_number_pane_cp12_ParamLimits

0xa078,	// (0x0007e0a3) clock_digital_number_pane_cp12

0xa092,	// (0x0007e0bd) clock_digital_number_pane_cp13_ParamLimits

0xa092,	// (0x0007e0bd) clock_digital_number_pane_cp13

0xa0ac,	// (0x0007e0d7) clock_digital_separator_pane_cp10_ParamLimits

0xa0ac,	// (0x0007e0d7) clock_digital_separator_pane_cp10

0xa0c6,	// (0x0007e0f1) popup_clock_digital_window_cp02_t1_ParamLimits

0xa0c6,	// (0x0007e0f1) popup_clock_digital_window_cp02_t1

0x077a,	// (0x000747a5) clock_digital_number_pane_cp10_g1

0x077a,	// (0x000747a5) clock_digital_number_pane_cp10_g2

0x0001,

0xf74f,	// (0x0008377a) clock_digital_number_pane_cp10_g

0x077a,	// (0x000747a5) clock_digital_separator_pane_cp10_g1

0x077a,	// (0x000747a5) clock_digital_separator_pane_g2_cp10

0x1428,	// (0x00075453) navi_pane_vded_g4

0x1431,	// (0x0007545c) navi_pane_vded_g5

0x143a,	// (0x00075465) navi_pane_vded_t1

0xee29,	// (0x00082e54) main_vded_pane

0xa1c5,	// (0x0007e1f0) main_vded_pane_g1

0xa1d1,	// (0x0007e1fc) main_vded_pane_g2

0xa1db,	// (0x0007e206) main_vded_pane_g3

0x0002,

0xf754,	// (0x0008377f) main_vded_pane_g

0xa1e5,	// (0x0007e210) main_vded_pane_t1

0xa1f3,	// (0x0007e21e) main_vded_pane_t2

0x0001,

0xf75b,	// (0x00083786) main_vded_pane_t

0xa201,	// (0x0007e22c) vded_slider_pane

0xa20b,	// (0x0007e236) vded_video_pane

0x3188,	// (0x000771b3) vded_video_pane_g1

0xa215,	// (0x0007e240) vded_video_pane_g2

0x0a60,	// (0x00074a8b) vded_video_pane_g3

0x0002,

0xf760,	// (0x0008378b) vded_video_pane_g

0x3192,	// (0x000771bd) vded_slider_pane_g1

0x2989,	// (0x000769b4) vded_slider_pane_g2

0x319b,	// (0x000771c6) vded_slider_pane_g3

0x31a4,	// (0x000771cf) vded_slider_pane_g4

0x31ad,	// (0x000771d8) vded_slider_pane_g5

0x0004,

0xf767,	// (0x00083792) vded_slider_pane_g

0x9dc8,	// (0x0007ddf3) mup3_rocker_pane_ParamLimits

0x9dc8,	// (0x0007ddf3) mup3_rocker_pane

0xa21e,	// (0x0007e249) mup3_control_keys_pane_g1

0xa226,	// (0x0007e251) mup3_control_keys_pane_g2

0xa22e,	// (0x0007e259) mup3_control_keys_pane_g3

0xa236,	// (0x0007e261) mup3_control_keys_pane_g4

0x0003,

0xf772,	// (0x0008379d) mup3_control_keys_pane_g

0x66e8,	// (0x0007a713) popup_toolbar2_fixed_window_cp01_ParamLimits

0x66e8,	// (0x0007a713) popup_toolbar2_fixed_window_cp01

0x9de2,	// (0x0007de0d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9de2,	// (0x0007de0d) popup_toolbar2_fixed_window_cp02

0x1c0e,	// (0x00075c39) popup_call2_audio_second_window_t4_ParamLimits

0x1c0e,	// (0x00075c39) popup_call2_audio_second_window_t4

0x214a,	// (0x00076175) popup_call2_audio_first_window_t6_ParamLimits

0x214a,	// (0x00076175) popup_call2_audio_first_window_t6

0x2388,	// (0x000763b3) popup_call2_audio_out_window_t6_ParamLimits

0x2388,	// (0x000763b3) popup_call2_audio_out_window_t6

0xee29,	// (0x00082e54) main_vitu_pane

0x07ef,	// (0x0007481a) aid_size_cell_itu_ParamLimits

0x07ef,	// (0x0007481a) aid_size_cell_itu

0x07ef,	// (0x0007481a) bg_popup_window_pane_cp08_ParamLimits

0x07ef,	// (0x0007481a) bg_popup_window_pane_cp08

0x07ef,	// (0x0007481a) field_vitu_entry_pane_ParamLimits

0x07ef,	// (0x0007481a) field_vitu_entry_pane

0x07ef,	// (0x0007481a) grid_vitu_function_pane_ParamLimits

0x07ef,	// (0x0007481a) grid_vitu_function_pane

0x07ef,	// (0x0007481a) grid_vitu_itu_pane_ParamLimits

0x07ef,	// (0x0007481a) grid_vitu_itu_pane

0x07ef,	// (0x0007481a) cell_vitu_itu_pane_ParamLimits

0x07ef,	// (0x0007481a) cell_vitu_itu_pane

0x07ef,	// (0x0007481a) cell_vitu_function_pane_ParamLimits

0x07ef,	// (0x0007481a) cell_vitu_function_pane

0xee8a,	// (0x00082eb5) bg_popup_sub_pane_cp08_ParamLimits

0xee8a,	// (0x00082eb5) bg_popup_sub_pane_cp08

0x0a32,	// (0x00074a5d) field_vitu_entry_pane_t1_ParamLimits

0x0a32,	// (0x00074a5d) field_vitu_entry_pane_t1

0x31b6,	// (0x000771e1) field_vitu_entry_pane_t2_ParamLimits

0x31b6,	// (0x000771e1) field_vitu_entry_pane_t2

0x0001,

0xf77b,	// (0x000837a6) field_vitu_entry_pane_t_ParamLimits

0xf77b,	// (0x000837a6) field_vitu_entry_pane_t

0x2763,	// (0x0007678e) bg_button_pane_cp05_ParamLimits

0x2763,	// (0x0007678e) bg_button_pane_cp05

0x31d3,	// (0x000771fe) cell_vitu_itu_pane_g1

0x1525,	// (0x00075550) cell_vitu_itu_pane_t1_ParamLimits

0x1525,	// (0x00075550) cell_vitu_itu_pane_t1

0x1525,	// (0x00075550) cell_vitu_itu_pane_t2_ParamLimits

0x1525,	// (0x00075550) cell_vitu_itu_pane_t2

0x0002,

0xf780,	// (0x000837ab) cell_vitu_itu_pane_t_ParamLimits

0xf780,	// (0x000837ab) cell_vitu_itu_pane_t

0xee29,	// (0x00082e54) bg_button_pane_cp07

0x0a60,	// (0x00074a8b) cell_vitu_function_pane_g1

0x6855,	// (0x0007a880) main_calc_pane_g1

0x64a7,	// (0x0007a4d2) aid_visual_content_pane

0xee29,	// (0x00082e54) main_vradio_pane

0x080b,	// (0x00074836) main_vradio_pane_g1_ParamLimits

0x080b,	// (0x00074836) main_vradio_pane_g1

0x080b,	// (0x00074836) main_vradio_pane_g2_ParamLimits

0x080b,	// (0x00074836) main_vradio_pane_g2

0x0001,

0xf787,	// (0x000837b2) main_vradio_pane_g_ParamLimits

0xf787,	// (0x000837b2) main_vradio_pane_g

0x1539,	// (0x00075564) main_vradio_pane_t1_ParamLimits

0x1539,	// (0x00075564) main_vradio_pane_t1

0x1539,	// (0x00075564) main_vradio_pane_t2_ParamLimits

0x1539,	// (0x00075564) main_vradio_pane_t2

0x1539,	// (0x00075564) main_vradio_pane_t3_ParamLimits

0x1539,	// (0x00075564) main_vradio_pane_t3

0x0002,

0xf78c,	// (0x000837b7) main_vradio_pane_t_ParamLimits

0xf78c,	// (0x000837b7) main_vradio_pane_t

0x07ef,	// (0x0007481a) vradio_rocker_control_pane_ParamLimits

0x07ef,	// (0x0007481a) vradio_rocker_control_pane

0x07ef,	// (0x0007481a) vradio_station_info_pane_ParamLimits

0x07ef,	// (0x0007481a) vradio_station_info_pane

0xee8a,	// (0x00082eb5) vradio_frequency_info_pane_ParamLimits

0xee8a,	// (0x00082eb5) vradio_frequency_info_pane

0x0a60,	// (0x00074a8b) vradio_station_info_pane_g1

0x1525,	// (0x00075550) vradio_station_info_pane_t1_ParamLimits

0x1525,	// (0x00075550) vradio_station_info_pane_t1

0x1539,	// (0x00075564) vradio_station_info_pane_t2_ParamLimits

0x1539,	// (0x00075564) vradio_station_info_pane_t2

0x0001,

0xf793,	// (0x000837be) vradio_station_info_pane_t_ParamLimits

0xf793,	// (0x000837be) vradio_station_info_pane_t

0xee29,	// (0x00082e54) vradio_tuning_pane

0xa246,	// (0x0007e271) vradio_rocker_control_pane_g1

0x31ef,	// (0x0007721a) vradio_rocker_control_pane_g2

0xa24e,	// (0x0007e279) vradio_rocker_control_pane_g3

0xa256,	// (0x0007e281) vradio_rocker_control_pane_g4

0xa25e,	// (0x0007e289) vradio_rocker_control_pane_g5

0x0004,

0xf798,	// (0x000837c3) vradio_rocker_control_pane_g

0x0a60,	// (0x00074a8b) vradio_frequency_info_pane_g1

0x0a32,	// (0x00074a5d) vradio_frequency_info_pane_t1_ParamLimits

0x0a32,	// (0x00074a5d) vradio_frequency_info_pane_t1

0xa266,	// (0x0007e291) vradio_tuning_pane_g1

0xa273,	// (0x0007e29e) vradio_tuning_pane_t1

0x64f0,	// (0x0007a51b) area_side_right_pane_ParamLimits

0x64f0,	// (0x0007a51b) area_side_right_pane

0x27c0,	// (0x000767eb) status_small_pane_g1

0x27c8,	// (0x000767f3) status_small_pane_g2

0x27d1,	// (0x000767fc) status_small_pane_g3

0x27da,	// (0x00076805) status_small_pane_g4

0x0003,

0xf564,	// (0x0008358f) status_small_pane_g

0x27e3,	// (0x0007680e) status_small_pane_t1

0xee29,	// (0x00082e54) main_video3_pane

0x31f7,	// (0x00077222) cams_zoom_vslider_pane

0x31ff,	// (0x0007722a) image3_wide_pane_ParamLimits

0x31ff,	// (0x0007722a) image3_wide_pane

0x323c,	// (0x00077267) image3_wide_small_pane

0x3248,	// (0x00077273) main_video3_pane_g1_ParamLimits

0x3248,	// (0x00077273) main_video3_pane_g1

0x3264,	// (0x0007728f) main_video3_pane_g2_ParamLimits

0x3264,	// (0x0007728f) main_video3_pane_g2

0x0001,

0xf7a3,	// (0x000837ce) main_video3_pane_g_ParamLimits

0xf7a3,	// (0x000837ce) main_video3_pane_g

0x3280,	// (0x000772ab) main_video3_pane_t1_ParamLimits

0x3280,	// (0x000772ab) main_video3_pane_t1

0x32ab,	// (0x000772d6) main_video3_pane_t2_ParamLimits

0x32ab,	// (0x000772d6) main_video3_pane_t2

0x32d6,	// (0x00077301) main_video3_pane_t3_ParamLimits

0x32d6,	// (0x00077301) main_video3_pane_t3

0x0002,

0xf7a8,	// (0x000837d3) main_video3_pane_t_ParamLimits

0xf7a8,	// (0x000837d3) main_video3_pane_t

0x3303,	// (0x0007732e) cams_zoom_vslider_pane_g1

0x330c,	// (0x00077337) cams_zoom_vslider_pane_g2

0x0001,

0xf7af,	// (0x000837da) cams_zoom_vslider_pane_g

0x3314,	// (0x0007733f) small_slider_vertical_pane

0x0a60,	// (0x00074a8b) small_slider_vertical_pane_g1

0x0a60,	// (0x00074a8b) small_slider_vertical_pane_g2

0x331c,	// (0x00077347) small_slider_vertical_pane_g3

0x0002,

0xf7b4,	// (0x000837df) small_slider_vertical_pane_g

0xee29,	// (0x00082e54) main_hwr_training_pane

0x3325,	// (0x00077350) hwr_training_instruct_pane_ParamLimits

0x3325,	// (0x00077350) hwr_training_instruct_pane

0xa282,	// (0x0007e2ad) hwr_training_navi_pane_ParamLimits

0xa282,	// (0x0007e2ad) hwr_training_navi_pane

0xa29c,	// (0x0007e2c7) hwr_training_write_pane_ParamLimits

0xa29c,	// (0x0007e2c7) hwr_training_write_pane

0xee29,	// (0x00082e54) bg_frame_shadow_pane

0x335c,	// (0x00077387) hwr_training_write_pane_g1

0x3364,	// (0x0007738f) hwr_training_write_pane_g2

0x336c,	// (0x00077397) hwr_training_write_pane_g3

0x3374,	// (0x0007739f) hwr_training_write_pane_g4

0x337c,	// (0x000773a7) hwr_training_write_pane_g5

0x3384,	// (0x000773af) hwr_training_write_pane_g6

0x338c,	// (0x000773b7) hwr_training_write_pane_g7

0x0006,

0xf7bb,	// (0x000837e6) hwr_training_write_pane_g

0xa2d4,	// (0x0007e2ff) hwr_training_navi_pane_g1_ParamLimits

0xa2d4,	// (0x0007e2ff) hwr_training_navi_pane_g1

0xa2e6,	// (0x0007e311) hwr_training_navi_pane_g2_ParamLimits

0xa2e6,	// (0x0007e311) hwr_training_navi_pane_g2

0xa2f8,	// (0x0007e323) hwr_training_navi_pane_g3_ParamLimits

0xa2f8,	// (0x0007e323) hwr_training_navi_pane_g3

0xa308,	// (0x0007e333) hwr_training_navi_pane_g4_ParamLimits

0xa308,	// (0x0007e333) hwr_training_navi_pane_g4

0x0004,

0xf7ca,	// (0x000837f5) hwr_training_navi_pane_g_ParamLimits

0xf7ca,	// (0x000837f5) hwr_training_navi_pane_g

0xa322,	// (0x0007e34d) hwr_training_navi_pane_t1

0xa330,	// (0x0007e35b) list_single_hwr_training_instruct_pane_ParamLimits

0xa330,	// (0x0007e35b) list_single_hwr_training_instruct_pane

0x3394,	// (0x000773bf) list_single_hwr_training_instruct_pane_t1

0x2b5f,	// (0x00076b8a) bg_frame_shadow_pane_g1

0x33a3,	// (0x000773ce) bg_frame_shadow_pane_g2

0x33ab,	// (0x000773d6) bg_frame_shadow_pane_g3

0x33b3,	// (0x000773de) bg_frame_shadow_pane_g4

0x33bb,	// (0x000773e6) bg_frame_shadow_pane_g5

0x33c3,	// (0x000773ee) bg_frame_shadow_pane_g6

0x33cb,	// (0x000773f6) bg_frame_shadow_pane_g7

0x0927,	// (0x00074952) bg_frame_shadow_pane_g8

0x0007,

0xf7d5,	// (0x00083800) bg_frame_shadow_pane_g

0xee29,	// (0x00082e54) main_video_tele_dialer_pane

0xa359,	// (0x0007e384) aid_size_cell_video_keypad_ParamLimits

0xa359,	// (0x0007e384) aid_size_cell_video_keypad

0xa369,	// (0x0007e394) grid_video_dialer_keypad_pane_ParamLimits

0xa369,	// (0x0007e394) grid_video_dialer_keypad_pane

0xa39d,	// (0x0007e3c8) video_down_pane_cp_ParamLimits

0xa39d,	// (0x0007e3c8) video_down_pane_cp

0xa3c7,	// (0x0007e3f2) cell_video_dialer_keypad_pane_ParamLimits

0xa3c7,	// (0x0007e3f2) cell_video_dialer_keypad_pane

0x33d3,	// (0x000773fe) bg_button_pane_cp08_ParamLimits

0x33d3,	// (0x000773fe) bg_button_pane_cp08

0xa3dc,	// (0x0007e407) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa3dc,	// (0x0007e407) cell_video_dialer_keypad_pane_g1

0x9dbc,	// (0x0007dde7) mup3_rocker2_pane_ParamLimits

0x9dbc,	// (0x0007dde7) mup3_rocker2_pane

0x0a60,	// (0x00074a8b) mup3_rocker2_pane_g1

0x925d,	// (0x0007d288) main_dialer2_pane

0xee29,	// (0x00082e54) main_mp4_pane

0xa434,	// (0x0007e45f) main_mp4_pane_g1_ParamLimits

0xa434,	// (0x0007e45f) main_mp4_pane_g1

0xa442,	// (0x0007e46d) main_mp4_pane_g2_ParamLimits

0xa442,	// (0x0007e46d) main_mp4_pane_g2

0xa450,	// (0x0007e47b) main_mp4_pane_g3_ParamLimits

0xa450,	// (0x0007e47b) main_mp4_pane_g3

0xa495,	// (0x0007e4c0) main_mp4_pane_g4_ParamLimits

0xa495,	// (0x0007e4c0) main_mp4_pane_g4

0xa4c3,	// (0x0007e4ee) main_mp4_pane_g5_ParamLimits

0xa4c3,	// (0x0007e4ee) main_mp4_pane_g5

0x0007,

0xf7f5,	// (0x00083820) main_mp4_pane_g_ParamLimits

0xf7f5,	// (0x00083820) main_mp4_pane_g

0xa537,	// (0x0007e562) main_mp4_pane_t1_ParamLimits

0xa537,	// (0x0007e562) main_mp4_pane_t1

0xa593,	// (0x0007e5be) main_mp4_pane_t2_ParamLimits

0xa593,	// (0x0007e5be) main_mp4_pane_t2

0x33df,	// (0x0007740a) main_mp4_pane_t3_ParamLimits

0x33df,	// (0x0007740a) main_mp4_pane_t3

0xa5e5,	// (0x0007e610) main_mp4_pane_t4_ParamLimits

0xa5e5,	// (0x0007e610) main_mp4_pane_t4

0x0003,

0xf806,	// (0x00083831) main_mp4_pane_t_ParamLimits

0xf806,	// (0x00083831) main_mp4_pane_t

0xa629,	// (0x0007e654) mp4_progress_pane_ParamLimits

0xa629,	// (0x0007e654) mp4_progress_pane

0xa673,	// (0x0007e69e) mp4_rocker_pane_ParamLimits

0xa673,	// (0x0007e69e) mp4_rocker_pane

0x340d,	// (0x00077438) mp4_progress_pane_t1

0x3426,	// (0x00077451) mp4_progress_pane_t2

0x0001,

0xf80f,	// (0x0008383a) mp4_progress_pane_t

0x343f,	// (0x0007746a) mup_progress_pane_cp04

0x0a60,	// (0x00074a8b) mp4_rocker_pane_g1

0xa693,	// (0x0007e6be) aid_cell_size_keypad2_ParamLimits

0xa693,	// (0x0007e6be) aid_cell_size_keypad2

0xa6a3,	// (0x0007e6ce) dialer2_ne_pane_ParamLimits

0xa6a3,	// (0x0007e6ce) dialer2_ne_pane

0xa6b1,	// (0x0007e6dc) grid_dialer2_keypad_pane_ParamLimits

0xa6b1,	// (0x0007e6dc) grid_dialer2_keypad_pane

0x3219,	// (0x00077244) bg_popup_call_pane_cp07_ParamLimits

0x3219,	// (0x00077244) bg_popup_call_pane_cp07

0xa6c1,	// (0x0007e6ec) dialer2_ne_pane_t1_ParamLimits

0xa6c1,	// (0x0007e6ec) dialer2_ne_pane_t1

0xa6e6,	// (0x0007e711) cell_dialer2_keypad_pane_ParamLimits

0xa6e6,	// (0x0007e711) cell_dialer2_keypad_pane

0x3464,	// (0x0007748f) bg_button_pane_pane_cp04_ParamLimits

0x3464,	// (0x0007748f) bg_button_pane_pane_cp04

0xa6fb,	// (0x0007e726) cell_dialer2_keypad_pane_g1_ParamLimits

0xa6fb,	// (0x0007e726) cell_dialer2_keypad_pane_g1

0x7214,	// (0x0007b23f) aid_placing_vt_set_content_ParamLimits

0x7214,	// (0x0007b23f) aid_placing_vt_set_content

0x7240,	// (0x0007b26b) aid_placing_vt_set_title_ParamLimits

0x7240,	// (0x0007b26b) aid_placing_vt_set_title

0xee29,	// (0x00082e54) main_image3_pane

0xa795,	// (0x0007e7c0) area_side_right_pane_cp01_ParamLimits

0xa795,	// (0x0007e7c0) area_side_right_pane_cp01

0x0819,	// (0x00074844) main_image3_pane_g1_ParamLimits

0x0819,	// (0x00074844) main_image3_pane_g1

0xa7c2,	// (0x0007e7ed) main_image3_pane_g2_ParamLimits

0xa7c2,	// (0x0007e7ed) main_image3_pane_g2

0xa7db,	// (0x0007e806) main_image3_pane_g3_ParamLimits

0xa7db,	// (0x0007e806) main_image3_pane_g3

0xa7f4,	// (0x0007e81f) main_image3_pane_g4_ParamLimits

0xa7f4,	// (0x0007e81f) main_image3_pane_g4

0x0003,

0xf81e,	// (0x00083849) main_image3_pane_g_ParamLimits

0xf81e,	// (0x00083849) main_image3_pane_g

0xa80d,	// (0x0007e838) main_image3_pane_t1_ParamLimits

0xa80d,	// (0x0007e838) main_image3_pane_t1

0xa832,	// (0x0007e85d) main_image3_pane_t2_ParamLimits

0xa832,	// (0x0007e85d) main_image3_pane_t2

0xa851,	// (0x0007e87c) main_image3_pane_t3_ParamLimits

0xa851,	// (0x0007e87c) main_image3_pane_t3

0x0003,

0xf827,	// (0x00083852) main_image3_pane_t_ParamLimits

0xf827,	// (0x00083852) main_image3_pane_t

0x07ef,	// (0x0007481a) grid_sctrl_middle_pane_cp01_ParamLimits

0x07ef,	// (0x0007481a) grid_sctrl_middle_pane_cp01

0xa8b2,	// (0x0007e8dd) cell_sctrl_middle_pane_cp01_ParamLimits

0xa8b2,	// (0x0007e8dd) cell_sctrl_middle_pane_cp01

0xa8c3,	// (0x0007e8ee) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa8c3,	// (0x0007e8ee) cell_sctrl_middle_pane_cp01_g1

0xee29,	// (0x00082e54) main_call4_pane

0xa8d0,	// (0x0007e8fb) aid_size_button_call4_ParamLimits

0xa8d0,	// (0x0007e8fb) aid_size_button_call4

0xa906,	// (0x0007e931) call4_windows_pane_ParamLimits

0xa906,	// (0x0007e931) call4_windows_pane

0xa91b,	// (0x0007e946) grid_call4_button_pane_ParamLimits

0xa91b,	// (0x0007e946) grid_call4_button_pane

0xa949,	// (0x0007e974) call4_windows_conf_pane

0xa95e,	// (0x0007e989) popup_call4_audio_first_window_ParamLimits

0xa95e,	// (0x0007e989) popup_call4_audio_first_window

0xa9ae,	// (0x0007e9d9) popup_call4_audio_second_window_ParamLimits

0xa9ae,	// (0x0007e9d9) popup_call4_audio_second_window

0xa9c7,	// (0x0007e9f2) popup_call4_audio_wait_window_ParamLimits

0xa9c7,	// (0x0007e9f2) popup_call4_audio_wait_window

0xa9d5,	// (0x0007ea00) cell_call4_button_pane_ParamLimits

0xa9d5,	// (0x0007ea00) cell_call4_button_pane

0xa9f8,	// (0x0007ea23) bg_button_pane_cp09_ParamLimits

0xa9f8,	// (0x0007ea23) bg_button_pane_cp09

0xaa04,	// (0x0007ea2f) cell_call4_button_pane_g1_ParamLimits

0xaa04,	// (0x0007ea2f) cell_call4_button_pane_g1

0xaa11,	// (0x0007ea3c) cell_call4_button_pane_t1_ParamLimits

0xaa11,	// (0x0007ea3c) cell_call4_button_pane_t1

0x3478,	// (0x000774a3) popup_call4_audio_conf_window_ParamLimits

0x3478,	// (0x000774a3) popup_call4_audio_conf_window

0x9def,	// (0x0007de1a) mup3_progress_pane_t1_ParamLimits

0x9e0e,	// (0x0007de39) mup3_progress_pane_t2_ParamLimits

0x2ec9,	// (0x00076ef4) mup3_progress_pane_t3_ParamLimits

0xf6fc,	// (0x00083727) mup3_progress_pane_t_ParamLimits

0x2ee6,	// (0x00076f11) mup_progress_pane_cp03_ParamLimits

0xa23e,	// (0x0007e269) mup3_control_keys_pane_g4_copy1

0xa657,	// (0x0007e682) mp4_rocker2_pane_ParamLimits

0xa657,	// (0x0007e682) mp4_rocker2_pane

0x3494,	// (0x000774bf) mp4_rocker2_pane_g1

0x348c,	// (0x000774b7) mp4_rocker2_pane_g2

0xaa55,	// (0x0007ea80) mp4_rocker2_pane_g3

0xaa5d,	// (0x0007ea88) mp4_rocker2_pane_g4

0xaa65,	// (0x0007ea90) mp4_rocker2_pane_g5

0x0004,

0xf830,	// (0x0008385b) mp4_rocker2_pane_g

0xee29,	// (0x00082e54) main_camera4_pane

0xee29,	// (0x00082e54) main_video4_pane

0xa379,	// (0x0007e3a4) main_video_tele_dialer_pane_t1_ParamLimits

0xa379,	// (0x0007e3a4) main_video_tele_dialer_pane_t1

0xa38b,	// (0x0007e3b6) main_video_tele_dialer_pane_t2_ParamLimits

0xa38b,	// (0x0007e3b6) main_video_tele_dialer_pane_t2

0x0001,

0xf7e6,	// (0x00083811) main_video_tele_dialer_pane_t_ParamLimits

0xf7e6,	// (0x00083811) main_video_tele_dialer_pane_t

0xaa85,	// (0x0007eab0) cam4_autofocus_pane_ParamLimits

0xaa85,	// (0x0007eab0) cam4_autofocus_pane

0xaa9f,	// (0x0007eaca) cam4_image_uncrop_pane_ParamLimits

0xaa9f,	// (0x0007eaca) cam4_image_uncrop_pane

0xaab6,	// (0x0007eae1) cam4_indicators_pane_ParamLimits

0xaab6,	// (0x0007eae1) cam4_indicators_pane

0xaad2,	// (0x0007eafd) main_camera4_pane_g1_ParamLimits

0xaad2,	// (0x0007eafd) main_camera4_pane_g1

0xaade,	// (0x0007eb09) main_camera4_pane_g2_ParamLimits

0xaade,	// (0x0007eb09) main_camera4_pane_g2

0xaade,	// (0x0007eb09) main_camera4_pane_g3_ParamLimits

0xaade,	// (0x0007eb09) main_camera4_pane_g3

0xaaea,	// (0x0007eb15) main_camera4_pane_g4_ParamLimits

0xaaea,	// (0x0007eb15) main_camera4_pane_g4

0xaaf6,	// (0x0007eb21) main_camera4_pane_g5_ParamLimits

0xaaf6,	// (0x0007eb21) main_camera4_pane_g5

0x0005,

0xf83b,	// (0x00083866) main_camera4_pane_g_ParamLimits

0xf83b,	// (0x00083866) main_camera4_pane_g

0xab10,	// (0x0007eb3b) main_camera4_pane_t1_ParamLimits

0xab10,	// (0x0007eb3b) main_camera4_pane_t1

0x07fd,	// (0x00074828) bg_tb_trans_pane_cp06

0xab60,	// (0x0007eb8b) cam4_indicators_pane_g1

0xab71,	// (0x0007eb9c) cam4_indicators_pane_g2

0x0002,

0xf856,	// (0x00083881) cam4_indicators_pane_g

0xab89,	// (0x0007ebb4) cam4_indicators_pane_t1

0xabb3,	// (0x0007ebde) main_video4_pane_g1_ParamLimits

0xabb3,	// (0x0007ebde) main_video4_pane_g1

0xabbf,	// (0x0007ebea) main_video4_pane_g2_ParamLimits

0xabbf,	// (0x0007ebea) main_video4_pane_g2

0xabcb,	// (0x0007ebf6) main_video4_pane_g3_ParamLimits

0xabcb,	// (0x0007ebf6) main_video4_pane_g3

0xabd7,	// (0x0007ec02) main_video4_pane_g4_ParamLimits

0xabd7,	// (0x0007ec02) main_video4_pane_g4

0x0004,

0xf85d,	// (0x00083888) main_video4_pane_g_ParamLimits

0xf85d,	// (0x00083888) main_video4_pane_g

0xabf7,	// (0x0007ec22) vid4_indicators_pane_ParamLimits

0xabf7,	// (0x0007ec22) vid4_indicators_pane

0xac16,	// (0x0007ec41) video4_image_uncrop_cif_pane_ParamLimits

0xac16,	// (0x0007ec41) video4_image_uncrop_cif_pane

0xac25,	// (0x0007ec50) video4_image_uncrop_nhd_pane_ParamLimits

0xac25,	// (0x0007ec50) video4_image_uncrop_nhd_pane

0xaa9f,	// (0x0007eaca) video4_image_uncrop_vga_pane_ParamLimits

0xaa9f,	// (0x0007eaca) video4_image_uncrop_vga_pane

0xee8a,	// (0x00082eb5) bg_tb_trans_pane_cp07

0xac3a,	// (0x0007ec65) vid4_indicators_pane_g1

0xac4e,	// (0x0007ec79) vid4_indicators_pane_g2

0xac62,	// (0x0007ec8d) vid4_indicators_pane_g3

0x0004,

0xf868,	// (0x00083893) vid4_indicators_pane_g

0xac8f,	// (0x0007ecba) vid4_indicators_pane_t1

0xaca6,	// (0x0007ecd1) cam4_autofocus_pane_g1

0xacae,	// (0x0007ecd9) cam4_autofocus_pane_g2

0xacb6,	// (0x0007ece1) cam4_autofocus_pane_g3

0x0002,

0xf873,	// (0x0008389e) cam4_autofocus_pane_g

0xacbe,	// (0x0007ece9) cam4_autofocus_pane_g3_copy1

0xa3ab,	// (0x0007e3d6) video_down_pane_cp_t1

0xa3b9,	// (0x0007e3e4) video_down_pane_cp_t2

0x0001,

0xf7eb,	// (0x00083816) video_down_pane_cp_t

0x07ef,	// (0x0007481a) popup_vitu2_window_ParamLimits

0x07ef,	// (0x0007481a) popup_vitu2_window

0xacc6,	// (0x0007ecf1) aid_size_cell2_itu2_ParamLimits

0xacc6,	// (0x0007ecf1) aid_size_cell2_itu2

0xace8,	// (0x0007ed13) aid_size_cell_itu2_ParamLimits

0xace8,	// (0x0007ed13) aid_size_cell_itu2

0x3219,	// (0x00077244) bg_popup_window_pane_cp09_ParamLimits

0x3219,	// (0x00077244) bg_popup_window_pane_cp09

0xad2c,	// (0x0007ed57) field_vitu2_entry_pane_ParamLimits

0xad2c,	// (0x0007ed57) field_vitu2_entry_pane

0xad4c,	// (0x0007ed77) grid_vitu2_function_pane_ParamLimits

0xad4c,	// (0x0007ed77) grid_vitu2_function_pane

0xad90,	// (0x0007edbb) grid_vitu2_itu_pane_ParamLimits

0xad90,	// (0x0007edbb) grid_vitu2_itu_pane

0xae08,	// (0x0007ee33) cell_vitu2_itu_pane_ParamLimits

0xae08,	// (0x0007ee33) cell_vitu2_itu_pane

0xae21,	// (0x0007ee4c) cell_vitu2_function_pane_ParamLimits

0xae21,	// (0x0007ee4c) cell_vitu2_function_pane

0x349c,	// (0x000774c7) bg_popup_call_pane_cp08_ParamLimits

0x349c,	// (0x000774c7) bg_popup_call_pane_cp08

0x34b3,	// (0x000774de) field_vitu2_entry_pane_g1

0x34bf,	// (0x000774ea) field_vitu2_entry_pane_g2

0x0002,

0xf87a,	// (0x000838a5) field_vitu2_entry_pane_g

0x58c7,	// (0x000798f2) field_vitu2_entry_pane_t1_ParamLimits

0x58c7,	// (0x000798f2) field_vitu2_entry_pane_t1

0x58fa,	// (0x00079925) field_vitu2_entry_pane_t2_ParamLimits

0x58fa,	// (0x00079925) field_vitu2_entry_pane_t2

0x0001,

0xf881,	// (0x000838ac) field_vitu2_entry_pane_t_ParamLimits

0xf881,	// (0x000838ac) field_vitu2_entry_pane_t

0x9587,	// (0x0007d5b2) bg_button_pane_cp010_ParamLimits

0x9587,	// (0x0007d5b2) bg_button_pane_cp010

0xae62,	// (0x0007ee8d) cell_vitu2_itu_pane_g1

0xae88,	// (0x0007eeb3) cell_vitu2_itu_pane_t1_ParamLimits

0xae88,	// (0x0007eeb3) cell_vitu2_itu_pane_t1

0x5917,	// (0x00079942) cell_vitu2_itu_pane_t2_ParamLimits

0x5917,	// (0x00079942) cell_vitu2_itu_pane_t2

0x0002,

0xf88b,	// (0x000838b6) cell_vitu2_itu_pane_t_ParamLimits

0xf88b,	// (0x000838b6) cell_vitu2_itu_pane_t

0xee8a,	// (0x00082eb5) bg_button_pane_cp011

0xaed4,	// (0x0007eeff) cell_vitu2_function_pane_g1

0xee29,	// (0x00082e54) main_myfav_hc_pane

0xa893,	// (0x0007e8be) popup_image3_note_pane_ParamLimits

0xa893,	// (0x0007e8be) popup_image3_note_pane

0xa8a1,	// (0x0007e8cc) popup_image3_tool_bar_pane_ParamLimits

0xa8a1,	// (0x0007e8cc) popup_image3_tool_bar_pane

0x598d,	// (0x000799b8) cell_vitu2_itu_pane_t3_ParamLimits

0x598d,	// (0x000799b8) cell_vitu2_itu_pane_t3

0xee29,	// (0x00082e54) bg_popup_trans_pane

0x34d3,	// (0x000774fe) grid_image3_tool_bar_pane

0x34dd,	// (0x00077508) bg_popup_trans_pane_g1

0x0c7a,	// (0x00074ca5) bg_popup_trans_pane_g2

0x34e5,	// (0x00077510) bg_popup_trans_pane_g3

0x34ed,	// (0x00077518) bg_popup_trans_pane_g4

0x34f5,	// (0x00077520) bg_popup_trans_pane_g5

0x34fd,	// (0x00077528) bg_popup_trans_pane_g6

0x3505,	// (0x00077530) bg_popup_trans_pane_g7

0x350d,	// (0x00077538) bg_popup_trans_pane_g8

0x0c5a,	// (0x00074c85) bg_popup_trans_pane_g9

0x0008,

0xf892,	// (0x000838bd) bg_popup_trans_pane_g

0x3515,	// (0x00077540) cell_image3_tool_bar_pane_ParamLimits

0x3515,	// (0x00077540) cell_image3_tool_bar_pane

0x0a60,	// (0x00074a8b) cell_image3_tool_bar_pane_g1

0xee29,	// (0x00082e54) bg_popup_trans_pane_cp1

0x3529,	// (0x00077554) popup_image3_note_pane_t1

0x3537,	// (0x00077562) popup_image3_note_pane_t2

0x3545,	// (0x00077570) popup_image3_note_pane_t3

0x0002,

0xf8a5,	// (0x000838d0) popup_image3_note_pane_t

0x3553,	// (0x0007757e) popup_image3_note_pane_t3_copy1

0xaee8,	// (0x0007ef13) bg_myfav_hc_instruction_pane_ParamLimits

0xaee8,	// (0x0007ef13) bg_myfav_hc_instruction_pane

0xaf00,	// (0x0007ef2b) cell_myfav_contact_pane_ParamLimits

0xaf00,	// (0x0007ef2b) cell_myfav_contact_pane

0xaf1a,	// (0x0007ef45) cell_myfav_contact_pane_cp1_ParamLimits

0xaf1a,	// (0x0007ef45) cell_myfav_contact_pane_cp1

0xaf32,	// (0x0007ef5d) cell_myfav_contact_pane_cp2_ParamLimits

0xaf32,	// (0x0007ef5d) cell_myfav_contact_pane_cp2

0xaf4a,	// (0x0007ef75) cell_myfav_contact_pane_cp3_ParamLimits

0xaf4a,	// (0x0007ef75) cell_myfav_contact_pane_cp3

0xaf61,	// (0x0007ef8c) cell_myfav_contact_pane_cp4_ParamLimits

0xaf61,	// (0x0007ef8c) cell_myfav_contact_pane_cp4

0xaf77,	// (0x0007efa2) cell_myfav_contact_pane_cp5_ParamLimits

0xaf77,	// (0x0007efa2) cell_myfav_contact_pane_cp5

0xaf8b,	// (0x0007efb6) cell_myfav_contact_pane_cp6_ParamLimits

0xaf8b,	// (0x0007efb6) cell_myfav_contact_pane_cp6

0xaf9f,	// (0x0007efca) cell_myfav_contact_pane_cp7_ParamLimits

0xaf9f,	// (0x0007efca) cell_myfav_contact_pane_cp7

0x3561,	// (0x0007758c) listscroll_gen_pane_cp05

0xafb7,	// (0x0007efe2) main_myfav_hc_pane_g1_ParamLimits

0xafb7,	// (0x0007efe2) main_myfav_hc_pane_g1

0xafcd,	// (0x0007eff8) main_myfav_hc_pane_g2_ParamLimits

0xafcd,	// (0x0007eff8) main_myfav_hc_pane_g2

0x0002,

0xf8ac,	// (0x000838d7) main_myfav_hc_pane_g_ParamLimits

0xf8ac,	// (0x000838d7) main_myfav_hc_pane_g

0xaffd,	// (0x0007f028) main_myfav_hc_pane_t1_ParamLimits

0xaffd,	// (0x0007f028) main_myfav_hc_pane_t1

0x356a,	// (0x00077595) main_myfav_hc_pane_t2_ParamLimits

0x356a,	// (0x00077595) main_myfav_hc_pane_t2

0x357c,	// (0x000775a7) main_myfav_hc_pane_t3_ParamLimits

0x357c,	// (0x000775a7) main_myfav_hc_pane_t3

0xb014,	// (0x0007f03f) main_myfav_hc_pane_t4_ParamLimits

0xb014,	// (0x0007f03f) main_myfav_hc_pane_t4

0x0004,

0xf8b3,	// (0x000838de) main_myfav_hc_pane_t_ParamLimits

0xf8b3,	// (0x000838de) main_myfav_hc_pane_t

0x0a60,	// (0x00074a8b) bg_myfav_hc_instruction_pane_g1

0x358e,	// (0x000775b9) cell_myfav_contact_pane_g1_ParamLimits

0x358e,	// (0x000775b9) cell_myfav_contact_pane_g1

0x358e,	// (0x000775b9) cell_myfav_contact_pane_g2_ParamLimits

0x358e,	// (0x000775b9) cell_myfav_contact_pane_g2

0x359a,	// (0x000775c5) cell_myfav_contact_pane_g3_ParamLimits

0x359a,	// (0x000775c5) cell_myfav_contact_pane_g3

0x080b,	// (0x00074836) cell_myfav_contact_pane_g4_ParamLimits

0x080b,	// (0x00074836) cell_myfav_contact_pane_g4

0x35a7,	// (0x000775d2) cell_myfav_contact_pane_g5_ParamLimits

0x35a7,	// (0x000775d2) cell_myfav_contact_pane_g5

0x0004,

0xf8be,	// (0x000838e9) cell_myfav_contact_pane_g_ParamLimits

0xf8be,	// (0x000838e9) cell_myfav_contact_pane_g

0xafe5,	// (0x0007f010) main_myfav_hc_pane_g3_ParamLimits

0xafe5,	// (0x0007f010) main_myfav_hc_pane_g3

0x6624,	// (0x0007a64f) popup_adpt_find_window

0xb03e,	// (0x0007f069) afind_page_pane_ParamLimits

0xb03e,	// (0x0007f069) afind_page_pane

0xb04b,	// (0x0007f076) aid_size_cell_afind_ParamLimits

0xb04b,	// (0x0007f076) aid_size_cell_afind

0xb065,	// (0x0007f090) bg_popup_sub_pane_cp09_ParamLimits

0xb065,	// (0x0007f090) bg_popup_sub_pane_cp09

0xb076,	// (0x0007f0a1) find_pane_cp01_ParamLimits

0xb076,	// (0x0007f0a1) find_pane_cp01

0x35b3,	// (0x000775de) grid_afind_control_pane_ParamLimits

0x35b3,	// (0x000775de) grid_afind_control_pane

0xb089,	// (0x0007f0b4) grid_afind_pane_ParamLimits

0xb089,	// (0x0007f0b4) grid_afind_pane

0xb0a5,	// (0x0007f0d0) cell_afind_pane_ParamLimits

0xb0a5,	// (0x0007f0d0) cell_afind_pane

0x0a60,	// (0x00074a8b) afind_page_pane_g1

0xb0ed,	// (0x0007f118) afind_page_pane_g2

0xb0f5,	// (0x0007f120) afind_page_pane_g3

0x0002,

0xf8c9,	// (0x000838f4) afind_page_pane_g

0xb0fd,	// (0x0007f128) afind_page_pane_t1

0x35d9,	// (0x00077604) cell_afind_grid_control_pane_ParamLimits

0x35d9,	// (0x00077604) cell_afind_grid_control_pane

0x3464,	// (0x0007748f) bg_button_pane_cp69_ParamLimits

0x3464,	// (0x0007748f) bg_button_pane_cp69

0xb10b,	// (0x0007f136) cell_afind_pane_g1_ParamLimits

0xb10b,	// (0x0007f136) cell_afind_pane_g1

0xb118,	// (0x0007f143) cell_afind_pane_t1_ParamLimits

0xb118,	// (0x0007f143) cell_afind_pane_t1

0x0a6a,	// (0x00074a95) bg_button_pane_cp72

0x35e8,	// (0x00077613) cell_afind_grid_control_pane_g1

0x8d8e,	// (0x0007cdb9) aid_image_placing_area_ParamLimits

0x8d8e,	// (0x0007cdb9) aid_image_placing_area

0x07fd,	// (0x00074828) field_vitu_entry_pane_g1_ParamLimits

0x07fd,	// (0x00074828) field_vitu_entry_pane_g1

0x07fd,	// (0x00074828) field_vitu_entry_pane_g2_ParamLimits

0x07fd,	// (0x00074828) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000831ec) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000831ec) field_vitu_entry_pane_g

0x31d3,	// (0x000771fe) cell_vitu_itu_pane_g1_ParamLimits

0x31b6,	// (0x000771e1) cell_vitu_itu_pane_t3_ParamLimits

0x31b6,	// (0x000771e1) cell_vitu_itu_pane_t3

0x340d,	// (0x00077438) mp4_progress_pane_t1_ParamLimits

0x3426,	// (0x00077451) mp4_progress_pane_t2_ParamLimits

0xf80f,	// (0x0008383a) mp4_progress_pane_t_ParamLimits

0x343f,	// (0x0007746a) mup_progress_pane_cp04_ParamLimits

0xb028,	// (0x0007f053) main_myfav_hc_pane_t5_ParamLimits

0xb028,	// (0x0007f053) main_myfav_hc_pane_t5

0x576b,	// (0x00079796) aid_zoom_text_primary

0x6624,	// (0x0007a64f) popup_adpt_find_window_ParamLimits

0xee8a,	// (0x00082eb5) main_cam_set_pane

0xaac4,	// (0x0007eaef) cam4_zoom_pane_ParamLimits

0xaac4,	// (0x0007eaef) cam4_zoom_pane

0xb12a,	// (0x0007f155) main_cam_set_pane_g1_ParamLimits

0xb12a,	// (0x0007f155) main_cam_set_pane_g1

0xb138,	// (0x0007f163) main_cam_set_pane_g2_ParamLimits

0xb138,	// (0x0007f163) main_cam_set_pane_g2

0x0001,

0xf8d0,	// (0x000838fb) main_cam_set_pane_g_ParamLimits

0xf8d0,	// (0x000838fb) main_cam_set_pane_g

0xb144,	// (0x0007f16f) main_cam_set_pane_t1_ParamLimits

0xb144,	// (0x0007f16f) main_cam_set_pane_t1

0xb160,	// (0x0007f18b) main_cset_listscroll_pane_ParamLimits

0xb160,	// (0x0007f18b) main_cset_listscroll_pane

0xb192,	// (0x0007f1bd) main_cset_slider_pane_ParamLimits

0xb192,	// (0x0007f1bd) main_cset_slider_pane

0x35f9,	// (0x00077624) main_cset_list_pane_ParamLimits

0x35f9,	// (0x00077624) main_cset_list_pane

0x3609,	// (0x00077634) scroll_pane_cp028

0xb1b1,	// (0x0007f1dc) aid_area_touch_slider

0xb1cd,	// (0x0007f1f8) cset_slider_pane

0xb1f0,	// (0x0007f21b) main_cset_slider_pane_g1

0xb205,	// (0x0007f230) main_cset_slider_pane_g2

0x0011,

0xf8d5,	// (0x00083900) main_cset_slider_pane_g

0x365a,	// (0x00077685) main_cset_slider_pane_t1

0xb2cb,	// (0x0007f2f6) main_cset_slider_pane_t2

0xb2e5,	// (0x0007f310) main_cset_slider_pane_t3

0xb2ff,	// (0x0007f32a) main_cset_slider_pane_t4

0xb31d,	// (0x0007f348) main_cset_slider_pane_t5

0xb33b,	// (0x0007f366) main_cset_slider_pane_t6

0xb352,	// (0x0007f37d) main_cset_slider_pane_t7

0x000e,

0xf8fa,	// (0x00083925) main_cset_slider_pane_t

0xb460,	// (0x0007f48b) cset_list_set_pane_ParamLimits

0xb460,	// (0x0007f48b) cset_list_set_pane

0x36f4,	// (0x0007771f) aid_position_infowindow_above

0x36fc,	// (0x00077727) aid_position_infowindow_below

0xb479,	// (0x0007f4a4) cset_list_set_pane_g1_ParamLimits

0xb479,	// (0x0007f4a4) cset_list_set_pane_g1

0x59df,	// (0x00079a0a) cset_list_set_pane_g3_ParamLimits

0x59df,	// (0x00079a0a) cset_list_set_pane_g3

0x0001,

0xf919,	// (0x00083944) cset_list_set_pane_g_ParamLimits

0xf919,	// (0x00083944) cset_list_set_pane_g

0x59ee,	// (0x00079a19) cset_list_set_pane_t1_ParamLimits

0x59ee,	// (0x00079a19) cset_list_set_pane_t1

0xee8a,	// (0x00082eb5) list_highlight_pane_cp021_ParamLimits

0xee8a,	// (0x00082eb5) list_highlight_pane_cp021

0x15bd,	// (0x000755e8) cset_slider_pane_g1

0x15cf,	// (0x000755fa) cset_slider_pane_g2

0x15c6,	// (0x000755f1) cset_slider_pane_g3

0x0002,

0xf91e,	// (0x00083949) cset_slider_pane_g

0xb485,	// (0x0007f4b0) aid_area_touch_cam4_zoom

0xb48d,	// (0x0007f4b8) cam4_zoom_cont_pane

0xb495,	// (0x0007f4c0) cam4_zoom_pane_g1

0xb49d,	// (0x0007f4c8) cam4_zoom_pane_g2

0xb4a5,	// (0x0007f4d0) cam4_zoom_pane_g3

0x0002,

0xf925,	// (0x00083950) cam4_zoom_pane_g

0x331c,	// (0x00077347) cam4_zoom_cont_pane_g1

0x3eaa,	// (0x00077ed5) cam4_zoom_cont_pane_g2

0x3eb3,	// (0x00077ede) cam4_zoom_cont_pane_g3

0x0002,

0xf92c,	// (0x00083957) cam4_zoom_cont_pane_g

0xa8ea,	// (0x0007e915) call4_image_pane_ParamLimits

0xa8ea,	// (0x0007e915) call4_image_pane

0xa949,	// (0x0007e974) call4_windows_conf_pane_ParamLimits

0xa98c,	// (0x0007e9b7) popup_call4_audio_in_window_ParamLimits

0xa98c,	// (0x0007e9b7) popup_call4_audio_in_window

0xee29,	// (0x00082e54) bg_popup_call2_act_pane_cp02

0x3470,	// (0x0007749b) call4_list_conf_pane

0x0a60,	// (0x00074a8b) call4_image_pane_g1

0x0a60,	// (0x00074a8b) call4_image_pane_g2

0x0001,

0xf39d,	// (0x000833c8) call4_image_pane_g

0x3704,	// (0x0007772f) list_single_graphic_popup_conf4_pane_ParamLimits

0x3704,	// (0x0007772f) list_single_graphic_popup_conf4_pane

0xee29,	// (0x00082e54) list_highlight_pane_cp022

0x3717,	// (0x00077742) list_single_graphic_popup_conf4_pane_g1

0x1198,	// (0x000751c3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf933,	// (0x0008395e) list_single_graphic_popup_conf4_pane_g

0x371f,	// (0x0007774a) list_single_graphic_popup_conf4_pane_t1

0x73a4,	// (0x0007b3cf) popup_vtel_slider_window_ParamLimits

0x73a4,	// (0x0007b3cf) popup_vtel_slider_window

0x3452,	// (0x0007747d) dialer2_ne_pane_t2_ParamLimits

0x3452,	// (0x0007747d) dialer2_ne_pane_t2

0x0001,

0xf814,	// (0x0008383f) dialer2_ne_pane_t_ParamLimits

0xf814,	// (0x0008383f) dialer2_ne_pane_t

0xee8a,	// (0x00082eb5) bg_popup_sub_pane_cp010_ParamLimits

0xee8a,	// (0x00082eb5) bg_popup_sub_pane_cp010

0xb4ad,	// (0x0007f4d8) popup_vtel_slider_window_g1_ParamLimits

0xb4ad,	// (0x0007f4d8) popup_vtel_slider_window_g1

0xb4b9,	// (0x0007f4e4) popup_vtel_slider_window_g2_ParamLimits

0xb4b9,	// (0x0007f4e4) popup_vtel_slider_window_g2

0x0003,

0xf938,	// (0x00083963) popup_vtel_slider_window_g_ParamLimits

0xf938,	// (0x00083963) popup_vtel_slider_window_g

0xb501,	// (0x0007f52c) vtel_slider_pane_ParamLimits

0xb501,	// (0x0007f52c) vtel_slider_pane

0xb510,	// (0x0007f53b) vtel_slider_pane_g1_ParamLimits

0xb510,	// (0x0007f53b) vtel_slider_pane_g1

0xb51d,	// (0x0007f548) vtel_slider_pane_g2_ParamLimits

0xb51d,	// (0x0007f548) vtel_slider_pane_g2

0xb52a,	// (0x0007f555) vtel_slider_pane_g3_ParamLimits

0xb52a,	// (0x0007f555) vtel_slider_pane_g3

0xb510,	// (0x0007f53b) vtel_slider_pane_g4_ParamLimits

0xb510,	// (0x0007f53b) vtel_slider_pane_g4

0xb537,	// (0x0007f562) vtel_slider_pane_g5_ParamLimits

0xb537,	// (0x0007f562) vtel_slider_pane_g5

0x0004,

0xf941,	// (0x0008396c) vtel_slider_pane_g_ParamLimits

0xf941,	// (0x0008396c) vtel_slider_pane_g

0xee8a,	// (0x00082eb5) main_gallery2_pane

0xad0e,	// (0x0007ed39) aid_size_row_itut2_dropdow_list_ParamLimits

0xad0e,	// (0x0007ed39) aid_size_row_itut2_dropdow_list

0xad6e,	// (0x0007ed99) grid_vitu2_function_top_pane_ParamLimits

0xad6e,	// (0x0007ed99) grid_vitu2_function_top_pane

0xadc8,	// (0x0007edf3) popup_vitu2_dropdown_list_window_ParamLimits

0xadc8,	// (0x0007edf3) popup_vitu2_dropdown_list_window

0xade6,	// (0x0007ee11) popup_vitu2_match_list_window

0xb544,	// (0x0007f56f) cell_vitu2_function_top_pane_ParamLimits

0xb544,	// (0x0007f56f) cell_vitu2_function_top_pane

0xb55e,	// (0x0007f589) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb55e,	// (0x0007f589) cell_vitu2_function_top_pane_cp01

0xb57a,	// (0x0007f5a5) cell_vitu2_function_top_wide_pane_ParamLimits

0xb57a,	// (0x0007f5a5) cell_vitu2_function_top_wide_pane

0xee8a,	// (0x00082eb5) bg_button_pane_cp012

0xb598,	// (0x0007f5c3) cell_vitu2_function_top_pane_g1

0xb5ac,	// (0x0007f5d7) bg_button_pane_cp013_ParamLimits

0xb5ac,	// (0x0007f5d7) bg_button_pane_cp013

0xb5c8,	// (0x0007f5f3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb5c8,	// (0x0007f5f3) cell_vitu2_function_top_wide_pane_g1

0x07ef,	// (0x0007481a) bg_popup_sub_pane_cp20

0xb5e0,	// (0x0007f60b) list_vitu2_match_list_pane

0x34dd,	// (0x00077508) bg_popup_sub_pane_cp20_g1

0x34e5,	// (0x00077510) bg_popup_sub_pane_cp20_g2

0x0c7a,	// (0x00074ca5) bg_popup_sub_pane_cp20_g3

0x34ed,	// (0x00077518) bg_popup_sub_pane_cp20_g4

0x0c5a,	// (0x00074c85) bg_popup_sub_pane_cp20_g5

0x3735,	// (0x00077760) bg_popup_sub_pane_cp20_g6

0x34fd,	// (0x00077528) bg_popup_sub_pane_cp20_g7

0x3505,	// (0x00077530) bg_popup_sub_pane_cp20_g8

0x350d,	// (0x00077538) bg_popup_sub_pane_cp20_g9

0x0008,

0xf94c,	// (0x00083977) bg_popup_sub_pane_cp20_g

0xb5f8,	// (0x0007f623) list_vitu2_match_list_item_pane_ParamLimits

0xb5f8,	// (0x0007f623) list_vitu2_match_list_item_pane

0xb60a,	// (0x0007f635) list_vitu2_match_list_item_pane_t1

0xee29,	// (0x00082e54) bg_popup_sub_pane_cp21

0x0a2a,	// (0x00074a55) grid_vitu2_dropdown_list_pane

0xb618,	// (0x0007f643) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb618,	// (0x0007f643) cell_vitu2_dropdown_list_char_pane

0xb63a,	// (0x0007f665) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb63a,	// (0x0007f665) cell_vitu2_dropdown_list_ctrl_pane

0x374f,	// (0x0007777a) cell_vitu2_dropdown_list_char_pane_g1

0x3746,	// (0x00077771) cell_vitu2_dropdown_list_char_pane_g2

0x373d,	// (0x00077768) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95f,	// (0x0008398a) cell_vitu2_dropdown_list_char_pane_g

0xb662,	// (0x0007f68d) cell_vitu2_dropdown_list_char_pane_t1

0xb670,	// (0x0007f69b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb670,	// (0x0007f69b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb67d,	// (0x0007f6a8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb67d,	// (0x0007f6a8) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb68a,	// (0x0007f6b5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb68a,	// (0x0007f6b5) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb697,	// (0x0007f6c2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb697,	// (0x0007f6c2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x07fd,	// (0x00074828) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x07fd,	// (0x00074828) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf966,	// (0x00083991) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf966,	// (0x00083991) cell_vitu2_dropdown_list_ctrl_pane_g

0xb6b3,	// (0x0007f6de) aid_size_cell_gallery2_ParamLimits

0xb6b3,	// (0x0007f6de) aid_size_cell_gallery2

0xb6cd,	// (0x0007f6f8) grid_gallery2_pane_ParamLimits

0xb6cd,	// (0x0007f6f8) grid_gallery2_pane

0xb6e4,	// (0x0007f70f) scroll_pane_cp029_ParamLimits

0xb6e4,	// (0x0007f70f) scroll_pane_cp029

0xb6f4,	// (0x0007f71f) cell_gallery2_pane_ParamLimits

0xb6f4,	// (0x0007f71f) cell_gallery2_pane

0x3758,	// (0x00077783) cell_gallery2_pane_g2

0xb749,	// (0x0007f774) cell_gallery2_pane_g3

0x3760,	// (0x0007778b) cell_gallery2_pane_g4

0x3768,	// (0x00077793) cell_gallery2_pane_g5

0x0a2a,	// (0x00074a55) grid_highlight_pane_cp10

0xade6,	// (0x0007ee11) popup_vitu2_match_list_window_ParamLimits

0xadf8,	// (0x0007ee23) popup_vitu2_query_window_ParamLimits

0xadf8,	// (0x0007ee23) popup_vitu2_query_window

0xee29,	// (0x00082e54) bg_vitu2_candi_button_pane

0x374f,	// (0x0007777a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3746,	// (0x00077771) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x373d,	// (0x00077768) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5a03,	// (0x00079a2e) bg_button_pane_cp015

0xb751,	// (0x0007f77c) bg_button_pane_cp016

0xb75d,	// (0x0007f788) bg_button_pane_cp017

0x154d,	// (0x00075578) bg_popup_sub_pane_cp22

0x3770,	// (0x0007779b) popup_vitu2_query_window_g1

0x5a3d,	// (0x00079a68) popup_vitu2_query_window_g2

0x0002,

0xf971,	// (0x0008399c) popup_vitu2_query_window_g

0x5a55,	// (0x00079a80) popup_vitu2_query_window_t1_ParamLimits

0x5a55,	// (0x00079a80) popup_vitu2_query_window_t1

0x5a88,	// (0x00079ab3) popup_vitu2_query_window_t2_ParamLimits

0x5a88,	// (0x00079ab3) popup_vitu2_query_window_t2

0x5a9a,	// (0x00079ac5) popup_vitu2_query_window_t3_ParamLimits

0x5a9a,	// (0x00079ac5) popup_vitu2_query_window_t3

0xb784,	// (0x0007f7af) popup_vitu2_query_window_t4_ParamLimits

0xb784,	// (0x0007f7af) popup_vitu2_query_window_t4

0xb798,	// (0x0007f7c3) popup_vitu2_query_window_t5_ParamLimits

0xb798,	// (0x0007f7c3) popup_vitu2_query_window_t5

0x0006,

0xf978,	// (0x000839a3) popup_vitu2_query_window_t_ParamLimits

0xf978,	// (0x000839a3) popup_vitu2_query_window_t

0x35f1,	// (0x0007761c) main_cset_text_pane

0xb1b1,	// (0x0007f1dc) aid_area_touch_slider_ParamLimits

0xb1cd,	// (0x0007f1f8) cset_slider_pane_ParamLimits

0xb1f0,	// (0x0007f21b) main_cset_slider_pane_g1_ParamLimits

0xb205,	// (0x0007f230) main_cset_slider_pane_g2_ParamLimits

0x3612,	// (0x0007763d) main_cset_slider_pane_g3_ParamLimits

0x3612,	// (0x0007763d) main_cset_slider_pane_g3

0xb21a,	// (0x0007f245) main_cset_slider_pane_g4_ParamLimits

0xb21a,	// (0x0007f245) main_cset_slider_pane_g4

0xb229,	// (0x0007f254) main_cset_slider_pane_g5_ParamLimits

0xb229,	// (0x0007f254) main_cset_slider_pane_g5

0xb237,	// (0x0007f262) main_cset_slider_pane_g6_ParamLimits

0xb237,	// (0x0007f262) main_cset_slider_pane_g6

0xf8d5,	// (0x00083900) main_cset_slider_pane_g_ParamLimits

0x365a,	// (0x00077685) main_cset_slider_pane_t1_ParamLimits

0xb2cb,	// (0x0007f2f6) main_cset_slider_pane_t2_ParamLimits

0xb2e5,	// (0x0007f310) main_cset_slider_pane_t3_ParamLimits

0xb2ff,	// (0x0007f32a) main_cset_slider_pane_t4_ParamLimits

0xb31d,	// (0x0007f348) main_cset_slider_pane_t5_ParamLimits

0xb33b,	// (0x0007f366) main_cset_slider_pane_t6_ParamLimits

0xb352,	// (0x0007f37d) main_cset_slider_pane_t7_ParamLimits

0xb380,	// (0x0007f3ab) main_cset_slider_pane_t8_ParamLimits

0xb380,	// (0x0007f3ab) main_cset_slider_pane_t8

0xb3a8,	// (0x0007f3d3) main_cset_slider_pane_t9_ParamLimits

0xb3a8,	// (0x0007f3d3) main_cset_slider_pane_t9

0xb3d0,	// (0x0007f3fb) main_cset_slider_pane_t10_ParamLimits

0xb3d0,	// (0x0007f3fb) main_cset_slider_pane_t10

0xb3f8,	// (0x0007f423) main_cset_slider_pane_t11_ParamLimits

0xb3f8,	// (0x0007f423) main_cset_slider_pane_t11

0xb422,	// (0x0007f44d) main_cset_slider_pane_t12_ParamLimits

0xb422,	// (0x0007f44d) main_cset_slider_pane_t12

0xb441,	// (0x0007f46c) main_cset_slider_pane_t13_ParamLimits

0xb441,	// (0x0007f46c) main_cset_slider_pane_t13

0xf8fa,	// (0x00083925) main_cset_slider_pane_t_ParamLimits

0xee29,	// (0x00082e54) bg_popup_sub_pane_cp011

0x377c,	// (0x000777a7) main_cset_text_pane_g1

0x378e,	// (0x000777b9) main_cset_text_pane_t1

0x379c,	// (0x000777c7) main_cset_text_pane_t2

0x37aa,	// (0x000777d5) main_cset_text_pane_t3

0x37b8,	// (0x000777e3) main_cset_text_pane_t4

0x37c6,	// (0x000777f1) main_cset_text_pane_t5

0x37d4,	// (0x000777ff) main_cset_text_pane_t6

0x37e2,	// (0x0007780d) main_cset_text_pane_t7

0x0006,

0xf987,	// (0x000839b2) main_cset_text_pane_t

0xee29,	// (0x00082e54) main_cam4_burst_pane

0xee29,	// (0x00082e54) main_cam5_pane

0x35c7,	// (0x000775f2) bg_button_pane_cp019

0x35d0,	// (0x000775fb) bg_button_pane_cp020

0x361e,	// (0x00077649) main_cset_slider_pane_g7_ParamLimits

0x361e,	// (0x00077649) main_cset_slider_pane_g7

0x362a,	// (0x00077655) main_cset_slider_pane_g8_ParamLimits

0x362a,	// (0x00077655) main_cset_slider_pane_g8

0xb24b,	// (0x0007f276) main_cset_slider_pane_g9_ParamLimits

0xb24b,	// (0x0007f276) main_cset_slider_pane_g9

0xb257,	// (0x0007f282) main_cset_slider_pane_g10_ParamLimits

0xb257,	// (0x0007f282) main_cset_slider_pane_g10

0xb263,	// (0x0007f28e) main_cset_slider_pane_g11_ParamLimits

0xb263,	// (0x0007f28e) main_cset_slider_pane_g11

0xb26f,	// (0x0007f29a) main_cset_slider_pane_g12_ParamLimits

0xb26f,	// (0x0007f29a) main_cset_slider_pane_g12

0xb27b,	// (0x0007f2a6) main_cset_slider_pane_g13_ParamLimits

0xb27b,	// (0x0007f2a6) main_cset_slider_pane_g13

0xb289,	// (0x0007f2b4) main_cset_slider_pane_g14_ParamLimits

0xb289,	// (0x0007f2b4) main_cset_slider_pane_g14

0xb297,	// (0x0007f2c2) main_cset_slider_pane_g15_ParamLimits

0xb297,	// (0x0007f2c2) main_cset_slider_pane_g15

0x3682,	// (0x000776ad) main_cset_slider_pane_t14_ParamLimits

0x3682,	// (0x000776ad) main_cset_slider_pane_t14

0x36bb,	// (0x000776e6) main_cset_slider_pane_t15_ParamLimits

0x36bb,	// (0x000776e6) main_cset_slider_pane_t15

0xb7ac,	// (0x0007f7d7) aid_cam4_burst_size_cell_ParamLimits

0xb7ac,	// (0x0007f7d7) aid_cam4_burst_size_cell

0xb7c8,	// (0x0007f7f3) grid_cam4_burst_pane_ParamLimits

0xb7c8,	// (0x0007f7f3) grid_cam4_burst_pane

0xb7f8,	// (0x0007f823) linegrid_cam4_burst_pane_ParamLimits

0xb7f8,	// (0x0007f823) linegrid_cam4_burst_pane

0xb818,	// (0x0007f843) scroll_pane_cp30_ParamLimits

0xb818,	// (0x0007f843) scroll_pane_cp30

0xb824,	// (0x0007f84f) cell_cam4_burst_pane_ParamLimits

0xb824,	// (0x0007f84f) cell_cam4_burst_pane

0x37fc,	// (0x00077827) linegrid_cam4_burst_pane_g1_ParamLimits

0x37fc,	// (0x00077827) linegrid_cam4_burst_pane_g1

0xb860,	// (0x0007f88b) linegrid_cam4_burst_pane_g2_ParamLimits

0xb860,	// (0x0007f88b) linegrid_cam4_burst_pane_g2

0x3809,	// (0x00077834) linegrid_cam4_burst_pane_g3_ParamLimits

0x3809,	// (0x00077834) linegrid_cam4_burst_pane_g3

0x0002,

0xf996,	// (0x000839c1) linegrid_cam4_burst_pane_g_ParamLimits

0xf996,	// (0x000839c1) linegrid_cam4_burst_pane_g

0xb871,	// (0x0007f89c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb871,	// (0x0007f89c) linegrid_cam4_burst_pane_g3_copy1

0x3816,	// (0x00077841) linegrid_cam4_burst_pane_g4_ParamLimits

0x3816,	// (0x00077841) linegrid_cam4_burst_pane_g4

0xb88b,	// (0x0007f8b6) linegrid_cam4_burst_pane_g5_ParamLimits

0xb88b,	// (0x0007f8b6) linegrid_cam4_burst_pane_g5

0xb89c,	// (0x0007f8c7) linegrid_cam4_burst_pane_g6_ParamLimits

0xb89c,	// (0x0007f8c7) linegrid_cam4_burst_pane_g6

0x3823,	// (0x0007784e) linegrid_cam4_burst_pane_g7_ParamLimits

0x3823,	// (0x0007784e) linegrid_cam4_burst_pane_g7

0xb8ad,	// (0x0007f8d8) cell_cam4_burst_pane_g1

0x383c,	// (0x00077867) main_cam5_pane_t1_ParamLimits

0x383c,	// (0x00077867) main_cam5_pane_t1

0x384e,	// (0x00077879) main_cam5_pane_t2_ParamLimits

0x384e,	// (0x00077879) main_cam5_pane_t2

0x3860,	// (0x0007788b) main_cam5_pane_t3_ParamLimits

0x3860,	// (0x0007788b) main_cam5_pane_t3

0x3872,	// (0x0007789d) main_cam5_pane_t4_ParamLimits

0x3872,	// (0x0007789d) main_cam5_pane_t4

0x388a,	// (0x000778b5) main_cam5_pane_t5_ParamLimits

0x388a,	// (0x000778b5) main_cam5_pane_t5

0x389e,	// (0x000778c9) main_cam5_pane_t6_ParamLimits

0x389e,	// (0x000778c9) main_cam5_pane_t6

0x38b2,	// (0x000778dd) main_cam5_pane_t7_ParamLimits

0x38b2,	// (0x000778dd) main_cam5_pane_t7

0x38c4,	// (0x000778ef) main_cam5_pane_t8_ParamLimits

0x38c4,	// (0x000778ef) main_cam5_pane_t8

0x38e0,	// (0x0007790b) main_cam5_pane_t9_ParamLimits

0x38e0,	// (0x0007790b) main_cam5_pane_t9

0x38f2,	// (0x0007791d) main_cam5_pane_t10_ParamLimits

0x38f2,	// (0x0007791d) main_cam5_pane_t10

0x3904,	// (0x0007792f) main_cam5_pane_t11_ParamLimits

0x3904,	// (0x0007792f) main_cam5_pane_t11

0x3916,	// (0x00077941) main_cam5_pane_t12_ParamLimits

0x3916,	// (0x00077941) main_cam5_pane_t12

0x392b,	// (0x00077956) main_cam5_pane_t13_ParamLimits

0x392b,	// (0x00077956) main_cam5_pane_t13

0x000c,

0xf9a2,	// (0x000839cd) main_cam5_pane_t_ParamLimits

0xf9a2,	// (0x000839cd) main_cam5_pane_t

0x66d9,	// (0x0007a704) popup_scut_keymap_window_ParamLimits

0x66d9,	// (0x0007a704) popup_scut_keymap_window

0xb8c0,	// (0x0007f8eb) aid_size_cell_brow_shortcut

0x0a2a,	// (0x00074a55) bg_popup_window_pane_cp010

0xb8cc,	// (0x0007f8f7) grid_scut_pane

0xb8d8,	// (0x0007f903) cell_scut_pane_ParamLimits

0xb8d8,	// (0x0007f903) cell_scut_pane

0xb8ef,	// (0x0007f91a) cell_scut_pane_g1

0x3948,	// (0x00077973) cell_scut_pane_t1

0x3957,	// (0x00077982) cell_scut_pane_t2

0xb8f8,	// (0x0007f923) cell_scut_pane_t3

0x0002,

0xf9bd,	// (0x000839e8) cell_scut_pane_t

0x9a18,	// (0x0007da43) main_mup3_pane_g8_ParamLimits

0x9a18,	// (0x0007da43) main_mup3_pane_g8

0xad1c,	// (0x0007ed47) area_vitu2_query_pane_ParamLimits

0xad1c,	// (0x0007ed47) area_vitu2_query_pane

0x5a18,	// (0x00079a43) input_focus_pane_cp08

0x3966,	// (0x00077991) area_vitu2_query_pane_g1

0x5b18,	// (0x00079b43) area_vitu2_query_pane_g2

0x0001,

0xf9c4,	// (0x000839ef) area_vitu2_query_pane_g

0xb906,	// (0x0007f931) area_vitu2_query_pane_t1_ParamLimits

0xb906,	// (0x0007f931) area_vitu2_query_pane_t1

0xb91a,	// (0x0007f945) area_vitu2_query_pane_t2_ParamLimits

0xb91a,	// (0x0007f945) area_vitu2_query_pane_t2

0x5b29,	// (0x00079b54) area_vitu2_query_pane_t3_ParamLimits

0x5b29,	// (0x00079b54) area_vitu2_query_pane_t3

0x5b51,	// (0x00079b7c) area_vitu2_query_pane_t4_ParamLimits

0x5b51,	// (0x00079b7c) area_vitu2_query_pane_t4

0x5b79,	// (0x00079ba4) area_vitu2_query_pane_t5_ParamLimits

0x5b79,	// (0x00079ba4) area_vitu2_query_pane_t5

0x5ba1,	// (0x00079bcc) area_vitu2_query_pane_t6_ParamLimits

0x5ba1,	// (0x00079bcc) area_vitu2_query_pane_t6

0x0006,

0xf9c9,	// (0x000839f4) area_vitu2_query_pane_t_ParamLimits

0xf9c9,	// (0x000839f4) area_vitu2_query_pane_t

0xb751,	// (0x0007f77c) bg_button_pane_cp018

0xb92e,	// (0x0007f959) bg_button_pane_cp021

0x5bed,	// (0x00079c18) bg_button_pane_cp022

0x5c10,	// (0x00079c3b) input_focus_pane_cp09

0x12a7,	// (0x000752d2) aid_size_touch_mv_arrow_left

0x12d2,	// (0x000752fd) aid_size_touch_mv_arrow_right

0xb2af,	// (0x0007f2da) main_cset_slider_pane_g16_ParamLimits

0xb2af,	// (0x0007f2da) main_cset_slider_pane_g16

0xb2bd,	// (0x0007f2e8) main_cset_slider_pane_g17_ParamLimits

0xb2bd,	// (0x0007f2e8) main_cset_slider_pane_g17

0xb8ad,	// (0x0007f8d8) cell_cam4_burst_pane_g1_ParamLimits

0xee29,	// (0x00082e54) compa_mode_pane

0xb4c5,	// (0x0007f4f0) popup_vtel_slider_window_g3_ParamLimits

0xb4c5,	// (0x0007f4f0) popup_vtel_slider_window_g3

0xb4d9,	// (0x0007f504) popup_vtel_slider_window_g4_ParamLimits

0xb4d9,	// (0x0007f504) popup_vtel_slider_window_g4

0xb4ed,	// (0x0007f518) popup_vtel_slider_window_t1_ParamLimits

0xb4ed,	// (0x0007f518) popup_vtel_slider_window_t1

0xee29,	// (0x00082e54) main_cl_pane

0x92e9,	// (0x0007d314) popup_imed_adjust2_window_ParamLimits

0x154d,	// (0x00075578) bg_tb_trans_pane_cp05_ParamLimits

0x30eb,	// (0x00077116) popup_imed_adjust2_window_g1_ParamLimits

0x30fa,	// (0x00077125) popup_imed_adjust2_window_g2_ParamLimits

0x30fa,	// (0x00077125) popup_imed_adjust2_window_g2

0x3106,	// (0x00077131) popup_imed_adjust2_window_g3_ParamLimits

0x3106,	// (0x00077131) popup_imed_adjust2_window_g3

0x0002,

0xf73f,	// (0x0008376a) popup_imed_adjust2_window_g_ParamLimits

0xf73f,	// (0x0008376a) popup_imed_adjust2_window_g

0x3112,	// (0x0007713d) popup_imed_adjust2_window_t1_ParamLimits

0x312a,	// (0x00077155) slider_imed_adjust_pane_ParamLimits

0x313e,	// (0x00077169) slider_imed_adjust_pane_g1_ParamLimits

0x314e,	// (0x00077179) slider_imed_adjust_pane_g2_ParamLimits

0x315e,	// (0x00077189) slider_imed_adjust_pane_g3_ParamLimits

0x316f,	// (0x0007719a) slider_imed_adjust_pane_g4_ParamLimits

0xf746,	// (0x00083771) slider_imed_adjust_pane_g_ParamLimits

0xaa6d,	// (0x0007ea98) aid_touch_area_cam4_ParamLimits

0xaa6d,	// (0x0007ea98) aid_touch_area_cam4

0xaa7d,	// (0x0007eaa8) battery_pane_cp01

0xab04,	// (0x0007eb2f) main_camera4_pane_g6_ParamLimits

0xab04,	// (0x0007eb2f) main_camera4_pane_g6

0xab22,	// (0x0007eb4d) main_camera4_pane_t2_ParamLimits

0xab22,	// (0x0007eb4d) main_camera4_pane_t2

0x0001,

0xf848,	// (0x00083873) main_camera4_pane_t_ParamLimits

0xf848,	// (0x00083873) main_camera4_pane_t

0xaba3,	// (0x0007ebce) aid_touch_area_vid4_ParamLimits

0xaba3,	// (0x0007ebce) aid_touch_area_vid4

0xabe3,	// (0x0007ec0e) main_video4_pane_g5_ParamLimits

0xabe3,	// (0x0007ec0e) main_video4_pane_g5

0xac07,	// (0x0007ec32) vid4_progress_pane_ParamLimits

0xac07,	// (0x0007ec32) vid4_progress_pane

0x364e,	// (0x00077679) main_cset_slider_pane_g18_ParamLimits

0x364e,	// (0x00077679) main_cset_slider_pane_g18

0x3830,	// (0x0007785b) cell_cam4_burst_pane_g2_ParamLimits

0x3830,	// (0x0007785b) cell_cam4_burst_pane_g2

0x0001,

0xf99d,	// (0x000839c8) cell_cam4_burst_pane_g_ParamLimits

0xf99d,	// (0x000839c8) cell_cam4_burst_pane_g

0xb93a,	// (0x0007f965) bg_cl_pane_ParamLimits

0xb93a,	// (0x0007f965) bg_cl_pane

0xb946,	// (0x0007f971) cl_header_pane_ParamLimits

0xb946,	// (0x0007f971) cl_header_pane

0xb952,	// (0x0007f97d) cl_listscroll_pane_ParamLimits

0xb952,	// (0x0007f97d) cl_listscroll_pane

0x3972,	// (0x0007799d) bg_cl_pane_g1

0x397a,	// (0x000779a5) bg_cl_pane_g2

0x3982,	// (0x000779ad) bg_cl_pane_g3

0x398a,	// (0x000779b5) bg_cl_pane_g4

0x3992,	// (0x000779bd) bg_cl_pane_g5

0x399a,	// (0x000779c5) bg_cl_pane_g6

0x39a2,	// (0x000779cd) bg_cl_pane_g7

0x39aa,	// (0x000779d5) bg_cl_pane_g8

0x39b2,	// (0x000779dd) bg_cl_pane_g9

0x0008,

0xf9d8,	// (0x00083a03) bg_cl_pane_g

0xb95e,	// (0x0007f989) aid_height_cl_leading_ParamLimits

0xb95e,	// (0x0007f989) aid_height_cl_leading

0xb96a,	// (0x0007f995) aid_height_cl_text_ParamLimits

0xb96a,	// (0x0007f995) aid_height_cl_text

0x07ef,	// (0x0007481a) bg_cl_header_pane_ParamLimits

0x07ef,	// (0x0007481a) bg_cl_header_pane

0xb982,	// (0x0007f9ad) cl_header_pane_g1_ParamLimits

0xb982,	// (0x0007f9ad) cl_header_pane_g1

0xb98f,	// (0x0007f9ba) cl_header_pane_t1_ParamLimits

0xb98f,	// (0x0007f9ba) cl_header_pane_t1

0x39ba,	// (0x000779e5) cl_list_pane

0x3609,	// (0x00077634) hc_scroll_pane_cp01

0x0c5a,	// (0x00074c85) bg_cl_header_pane_g1

0x34dd,	// (0x00077508) bg_cl_header_pane_g2

0x0c7a,	// (0x00074ca5) bg_cl_header_pane_g3

0x34ed,	// (0x00077518) bg_cl_header_pane_g4

0x34e5,	// (0x00077510) bg_cl_header_pane_g5

0x3735,	// (0x00077760) bg_cl_header_pane_g6

0x3505,	// (0x00077530) bg_cl_header_pane_g7

0x350d,	// (0x00077538) bg_cl_header_pane_g8

0x34fd,	// (0x00077528) bg_cl_header_pane_g9

0x0008,

0xf9eb,	// (0x00083a16) bg_cl_header_pane_g

0xb9a1,	// (0x0007f9cc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb9a1,	// (0x0007f9cc) hc_cl_list_double_graphic_heading_pane

0xb9b5,	// (0x0007f9e0) hc_cl_list_single_graphic_pane_ParamLimits

0xb9b5,	// (0x0007f9e0) hc_cl_list_single_graphic_pane

0xb9cf,	// (0x0007f9fa) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb9cf,	// (0x0007f9fa) hc_cl_list_single_graphic_pane_g1

0xb9db,	// (0x0007fa06) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb9db,	// (0x0007fa06) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9fe,	// (0x00083a29) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9fe,	// (0x00083a29) hc_cl_list_single_graphic_pane_g

0xb9ef,	// (0x0007fa1a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb9ef,	// (0x0007fa1a) hc_cl_list_single_graphic_pane_t1

0xb9cf,	// (0x0007f9fa) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb9cf,	// (0x0007f9fa) hc_cl_list_double_graphic_heading_pane_g1

0xba04,	// (0x0007fa2f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xba04,	// (0x0007fa2f) hc_cl_list_double_graphic_heading_pane_g2

0xba18,	// (0x0007fa43) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xba18,	// (0x0007fa43) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa03,	// (0x00083a2e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa03,	// (0x00083a2e) hc_cl_list_double_graphic_heading_pane_g

0xba2c,	// (0x0007fa57) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xba2c,	// (0x0007fa57) hc_cl_list_double_graphic_heading_pane_t1

0xba41,	// (0x0007fa6c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xba41,	// (0x0007fa6c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa0a,	// (0x00083a35) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa0a,	// (0x00083a35) hc_cl_list_double_graphic_heading_pane_t

0xba5e,	// (0x0007fa89) vid4_progress_pane_g1

0xba6e,	// (0x0007fa99) vid4_progress_pane_g2

0xba7e,	// (0x0007faa9) vid4_progress_pane_g3

0xba90,	// (0x0007fabb) vid4_progress_pane_g4

0x0004,

0xfa0f,	// (0x00083a3a) vid4_progress_pane_g

0xbaa8,	// (0x0007fad3) vid4_progress_pane_t1

0xbabe,	// (0x0007fae9) vid4_progress_pane_t2

0x0002,

0xfa1a,	// (0x00083a45) vid4_progress_pane_t

0xbae9,	// (0x0007fb14) wait_bar_pane_cp07

0x2a13,	// (0x00076a3e) blid_firmament_pane_ParamLimits

0x2a56,	// (0x00076a81) popup_blid_sat_info2_window_g1

0x2a7a,	// (0x00076aa5) popup_blid_sat_info2_window_t3

0x2a88,	// (0x00076ab3) popup_blid_sat_info2_window_t4

0x2a96,	// (0x00076ac1) popup_blid_sat_info2_window_t5

0x2aa4,	// (0x00076acf) popup_blid_sat_info2_window_t6

0x2ab4,	// (0x00076adf) popup_blid_sat_info2_window_t7

0x2ac2,	// (0x00076aed) popup_blid_sat_info2_window_t8

0x2ad0,	// (0x00076afb) popup_blid_sat_info2_window_t9

0x2ade,	// (0x00076b09) popup_blid_sat_info2_window_t10

0x2b9f,	// (0x00076bca) aid_firma_cardinal_ParamLimits

0x2bb3,	// (0x00076bde) blid_firmament_pane_t1_ParamLimits

0x2bca,	// (0x00076bf5) blid_firmament_pane_t2_ParamLimits

0x2be1,	// (0x00076c0c) blid_firmament_pane_t3_ParamLimits

0x2bf8,	// (0x00076c23) blid_firmament_pane_t4_ParamLimits

0xf638,	// (0x00083663) blid_firmament_pane_t_ParamLimits

0x2c0f,	// (0x00076c3a) blid_sat_info_pane_ParamLimits

0xee8a,	// (0x00082eb5) main_cam_set_pane_ParamLimits

0xa0e7,	// (0x0007e112) aid_size_cell_colour_35_ParamLimits

0xa101,	// (0x0007e12c) aid_size_cell_colour_112_ParamLimits

0xa118,	// (0x0007e143) aid_size_cell_effect_ParamLimits

0xee8a,	// (0x00082eb5) bg_tb_trans_pane_cp02_ParamLimits

0x0f69,	// (0x00074f94) heading_imed_pane_ParamLimits

0xa132,	// (0x0007e15d) listscroll_imed_pane_ParamLimits

0x1ec6,	// (0x00075ef1) popup_call2_audio_first_window_g5_ParamLimits

0x1ec6,	// (0x00075ef1) popup_call2_audio_first_window_g5

0xa763,	// (0x0007e78e) aid_size_touch_image3_arrow_left_ParamLimits

0xa763,	// (0x0007e78e) aid_size_touch_image3_arrow_left

0xa779,	// (0x0007e7a4) aid_size_touch_image3_arrow_right_ParamLimits

0xa779,	// (0x0007e7a4) aid_size_touch_image3_arrow_right

0xbad3,	// (0x0007fafe) vid4_progress_pane_t3

0xa2b4,	// (0x0007e2df) main_hwr_training_symbol_option_pane_ParamLimits

0xa2b4,	// (0x0007e2df) main_hwr_training_symbol_option_pane

0x3347,	// (0x00077372) popup_hwr_training_preview_window_ParamLimits

0x3347,	// (0x00077372) popup_hwr_training_preview_window

0xa315,	// (0x0007e340) hwr_training_navi_pane_g5_ParamLimits

0xa315,	// (0x0007e340) hwr_training_navi_pane_g5

0x34cb,	// (0x000774f6) popup_char_count_window

0x07ef,	// (0x0007481a) bg_popup_sub_pane_cp20_ParamLimits

0xb5e0,	// (0x0007f60b) list_vitu2_match_list_pane_ParamLimits

0xb5ec,	// (0x0007f617) vitu2_page_scroll_pane_ParamLimits

0xb5ec,	// (0x0007f617) vitu2_page_scroll_pane

0x39c3,	// (0x000779ee) list_single_hwr_training_symbol_option_pane_ParamLimits

0x39c3,	// (0x000779ee) list_single_hwr_training_symbol_option_pane

0x39d6,	// (0x00077a01) list_single_hwr_training_symbol_option_pane_g1

0x39de,	// (0x00077a09) list_single_hwr_training_symbol_option_pane_t1

0x39ec,	// (0x00077a17) bg_button_pane_cp023

0x39f5,	// (0x00077a20) bg_button_pane_cp024

0x3a28,	// (0x00077a53) vitu2_page_scroll_pane_g1

0x3a30,	// (0x00077a5b) vitu2_page_scroll_pane_g2

0x0001,

0xfa21,	// (0x00083a4c) vitu2_page_scroll_pane_g

0x3a38,	// (0x00077a63) vitu2_page_scroll_pane_t1

0x08e6,	// (0x00074911) popup_char_count_window_g1

0x3a47,	// (0x00077a72) popup_char_count_window_g2

0x3227,	// (0x00077252) popup_char_count_window_g3

0x0002,

0xfa26,	// (0x00083a51) popup_char_count_window_g

0x3a50,	// (0x00077a7b) popup_char_count_window_t1

0xee29,	// (0x00082e54) main_vded2_pane

0x30d7,	// (0x00077102) aid_size_cell_imed_line

0x30e1,	// (0x0007710c) grid_imed_line_width_pane

0xac73,	// (0x0007ec9e) vid4_indicators_pane_g4

0x3a5e,	// (0x00077a89) cell_imed_line_width_pane_ParamLimits

0x3a5e,	// (0x00077a89) cell_imed_line_width_pane

0x3a72,	// (0x00077a9d) cell_imed_line_width_pane_g1

0x3a7b,	// (0x00077aa6) cell_imed_line_width_pane_g2

0x0001,

0xfa2d,	// (0x00083a58) cell_imed_line_width_pane_g

0xbb02,	// (0x0007fb2d) main_vded2_pane_g1_ParamLimits

0xbb02,	// (0x0007fb2d) main_vded2_pane_g1

0xbb0f,	// (0x0007fb3a) main_vded2_pane_g2_ParamLimits

0xbb0f,	// (0x0007fb3a) main_vded2_pane_g2

0x0001,

0xfa32,	// (0x00083a5d) main_vded2_pane_g_ParamLimits

0xfa32,	// (0x00083a5d) main_vded2_pane_g

0xbb1d,	// (0x0007fb48) vded2_slider_pane_ParamLimits

0xbb1d,	// (0x0007fb48) vded2_slider_pane

0xbb2a,	// (0x0007fb55) aid_size_touch_vded2_end

0xbb34,	// (0x0007fb5f) aid_size_touch_vded2_playhead

0x3a83,	// (0x00077aae) aid_size_touch_vded2_start

0x3a8b,	// (0x00077ab6) vded2_slider_bg_pane

0x3a94,	// (0x00077abf) vded2_slider_pane_g1

0x3a9d,	// (0x00077ac8) vded2_slider_pane_g2

0xbb3c,	// (0x0007fb67) vded2_slider_pane_g3

0x0002,

0xfa37,	// (0x00083a62) vded2_slider_pane_g

0x3aa5,	// (0x00077ad0) vded2_slider_bg_pane_g1

0x3aae,	// (0x00077ad9) vded2_slider_bg_pane_g2

0x3ab7,	// (0x00077ae2) vded2_slider_bg_pane_g3

0x0002,

0xfa3e,	// (0x00083a69) vded2_slider_bg_pane_g

0x8af9,	// (0x0007cb24) aid_postcard_touch_down_pane_ParamLimits

0x8af9,	// (0x0007cb24) aid_postcard_touch_down_pane

0x8b09,	// (0x0007cb34) aid_postcard_touch_up_pane_ParamLimits

0x8b09,	// (0x0007cb34) aid_postcard_touch_up_pane

0xee29,	// (0x00082e54) main_blid2_pane

0x9278,	// (0x0007d2a3) popup_blid2_search_window

0xee29,	// (0x00082e54) blid2_gps_pane

0xee29,	// (0x00082e54) blid2_navig_pane

0xee29,	// (0x00082e54) blid2_search_pane

0xee29,	// (0x00082e54) blid2_tripm_pane

0xbb45,	// (0x0007fb70) blid2_search_pane_g1_ParamLimits

0xbb45,	// (0x0007fb70) blid2_search_pane_g1

0xbb55,	// (0x0007fb80) blid2_search_pane_t1_ParamLimits

0xbb55,	// (0x0007fb80) blid2_search_pane_t1

0xbb67,	// (0x0007fb92) aid_size_cell_blid2_gps_ParamLimits

0xbb67,	// (0x0007fb92) aid_size_cell_blid2_gps

0xbb77,	// (0x0007fba2) blid2_gps_pane_g1_ParamLimits

0xbb77,	// (0x0007fba2) blid2_gps_pane_g1

0xbb83,	// (0x0007fbae) grid_blid2_satellite_pane_ParamLimits

0xbb83,	// (0x0007fbae) grid_blid2_satellite_pane

0xbb93,	// (0x0007fbbe) blid2_navig_pane_g1_ParamLimits

0xbb93,	// (0x0007fbbe) blid2_navig_pane_g1

0xbb9f,	// (0x0007fbca) blid2_navig_pane_t1_ParamLimits

0xbb9f,	// (0x0007fbca) blid2_navig_pane_t1

0xbbb1,	// (0x0007fbdc) blid2_navig_pane_t2_ParamLimits

0xbbb1,	// (0x0007fbdc) blid2_navig_pane_t2

0x0001,

0xfa45,	// (0x00083a70) blid2_navig_pane_t_ParamLimits

0xfa45,	// (0x00083a70) blid2_navig_pane_t

0xbbc3,	// (0x0007fbee) blid2_navig_ring_pane_ParamLimits

0xbbc3,	// (0x0007fbee) blid2_navig_ring_pane

0xbbd3,	// (0x0007fbfe) blid2_speed_pane_ParamLimits

0xbbd3,	// (0x0007fbfe) blid2_speed_pane

0xbbdf,	// (0x0007fc0a) blid2_tripm_pane_g1_ParamLimits

0xbbdf,	// (0x0007fc0a) blid2_tripm_pane_g1

0xbbef,	// (0x0007fc1a) blid2_tripm_pane_g2_ParamLimits

0xbbef,	// (0x0007fc1a) blid2_tripm_pane_g2

0xbbfb,	// (0x0007fc26) blid2_tripm_pane_g3_ParamLimits

0xbbfb,	// (0x0007fc26) blid2_tripm_pane_g3

0xbc07,	// (0x0007fc32) blid2_tripm_pane_g4_ParamLimits

0xbc07,	// (0x0007fc32) blid2_tripm_pane_g4

0xbc13,	// (0x0007fc3e) blid2_tripm_pane_g5_ParamLimits

0xbc13,	// (0x0007fc3e) blid2_tripm_pane_g5

0x0005,

0xfa4a,	// (0x00083a75) blid2_tripm_pane_g_ParamLimits

0xfa4a,	// (0x00083a75) blid2_tripm_pane_g

0xbc2f,	// (0x0007fc5a) blid2_tripm_pane_t1_ParamLimits

0xbc2f,	// (0x0007fc5a) blid2_tripm_pane_t1

0xbc43,	// (0x0007fc6e) blid2_tripm_pane_t2_ParamLimits

0xbc43,	// (0x0007fc6e) blid2_tripm_pane_t2

0xbc55,	// (0x0007fc80) blid2_tripm_pane_t3_ParamLimits

0xbc55,	// (0x0007fc80) blid2_tripm_pane_t3

0x0003,

0xfa57,	// (0x00083a82) blid2_tripm_pane_t_ParamLimits

0xfa57,	// (0x00083a82) blid2_tripm_pane_t

0xbc87,	// (0x0007fcb2) cell_blid2_satellite_pane_ParamLimits

0xbc87,	// (0x0007fcb2) cell_blid2_satellite_pane

0xbca1,	// (0x0007fccc) cell_blid2_satellite_pane_g1

0x3ac0,	// (0x00077aeb) cell_blid2_satellite_pane_t1

0x0a60,	// (0x00074a8b) blid2_speed_pane_g1

0x3ace,	// (0x00077af9) blid2_speed_pane_t1

0x3adc,	// (0x00077b07) blid2_speed_pane_t2

0x0001,

0xfa60,	// (0x00083a8b) blid2_speed_pane_t

0x0a60,	// (0x00074a8b) blid2_navig_ring_pane_g1

0xbcaa,	// (0x0007fcd5) blid2_navig_ring_pane_g2

0xbcb2,	// (0x0007fcdd) blid2_navig_ring_pane_g3

0xbcba,	// (0x0007fce5) blid2_navig_ring_pane_g4

0xbcc2,	// (0x0007fced) blid2_navig_ring_pane_g5

0x0004,

0xfa65,	// (0x00083a90) blid2_navig_ring_pane_g

0xee29,	// (0x00082e54) bg_popup_window_pane_cp011

0x3aea,	// (0x00077b15) popup_blid2_search_window_g1

0x3af2,	// (0x00077b1d) popup_blid2_search_window_t1

0x3b00,	// (0x00077b2b) popup_blid2_search_window_t2

0x0001,

0xfa70,	// (0x00083a9b) popup_blid2_search_window_t

0x0b60,	// (0x00074b8b) main_browser_pane_g1

0x086f,	// (0x0007489a) main_browser_pane_ParamLimits

0xee8a,	// (0x00082eb5) bg_button_pane_cp011_ParamLimits

0xaed4,	// (0x0007eeff) cell_vitu2_function_pane_g1_ParamLimits

0x154d,	// (0x00075578) bg_popup_sub_pane_cp22_ParamLimits

0x5a18,	// (0x00079a43) input_focus_pane_cp08_ParamLimits

0xb769,	// (0x0007f794) popup_vitu2_query_button_pane_ParamLimits

0xb769,	// (0x0007f794) popup_vitu2_query_button_pane

0x5a33,	// (0x00079a5e) popup_vitu2_query_input_button_pane

0x3770,	// (0x0007779b) popup_vitu2_query_window_g1_ParamLimits

0x5a3d,	// (0x00079a68) popup_vitu2_query_window_g2_ParamLimits

0xf971,	// (0x0008399c) popup_vitu2_query_window_g_ParamLimits

0xee29,	// (0x00082e54) bg_button_pane_cp026

0xbcca,	// (0x0007fcf5) popup_vitu2_query_input_button_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp025

0x3b0e,	// (0x00077b39) popup_vitu2_query_button_pane_t1

0x96f1,	// (0x0007d71c) main_mp3_pane_t6

0x9701,	// (0x0007d72c) popup_slider_window_cp01

0xab58,	// (0x0007eb83) cam4_battery_pane

0xac32,	// (0x0007ec5d) cam4_battery_pane_cp02

0xba56,	// (0x0007fa81) cam4_battery_pane_cp01

0xba56,	// (0x0007fa81) cam4_battery_pane_cp03

0x0a60,	// (0x00074a8b) cam4_battery_pane_g1

0x3784,	// (0x000777af) cam4_battery_pane_g2

0x0001,

0xfa75,	// (0x00083aa0) cam4_battery_pane_g

0x2aec,	// (0x00076b17) popup_blid_sat_info2_window_t11

0x12a7,	// (0x000752d2) aid_size_touch_mv_arrow_left_ParamLimits

0x12d2,	// (0x000752fd) aid_size_touch_mv_arrow_right_ParamLimits

0x1330,	// (0x0007535b) navi_pane_g1_ParamLimits

0x133c,	// (0x00075367) navi_pane_g2_ParamLimits

0x136a,	// (0x00075395) navi_pane_g3_ParamLimits

0xf339,	// (0x00083364) navi_pane_g_ParamLimits

0x87b1,	// (0x0007c7dc) navi_pane_mv_t1_ParamLimits

0xa13e,	// (0x0007e169) grid_imed_effect_pane_ParamLimits

0x7264,	// (0x0007b28f) aid_placing_vt_slider_lsc

0x0aaf,	// (0x00074ada) aid_placing_vt_slider_prt

0xee8a,	// (0x00082eb5) bg_tb_trans_pane_cp01_ParamLimits

0x2d8a,	// (0x00076db5) popup_image_details_window_g1_ParamLimits

0x2d9d,	// (0x00076dc8) popup_image_details_window_g2_ParamLimits

0x2db2,	// (0x00076ddd) popup_image_details_window_g3_ParamLimits

0x2db2,	// (0x00076ddd) popup_image_details_window_g3

0xf678,	// (0x000836a3) popup_image_details_window_g_ParamLimits

0x2dc6,	// (0x00076df1) popup_image_details_window_t1_ParamLimits

0x2dd8,	// (0x00076e03) popup_image_details_window_t2_ParamLimits

0x2df1,	// (0x00076e1c) popup_image_details_window_t3_ParamLimits

0x2e05,	// (0x00076e30) popup_image_details_window_t4_ParamLimits

0x2e20,	// (0x00076e4b) popup_image_details_window_t5_ParamLimits

0xf67f,	// (0x000836aa) popup_image_details_window_t_ParamLimits

0xb976,	// (0x0007f9a1) cl_header_name_pane_ParamLimits

0xb976,	// (0x0007f9a1) cl_header_name_pane

0xbcd2,	// (0x0007fcfd) cl_header_name_pane_t1_ParamLimits

0xbcd2,	// (0x0007fcfd) cl_header_name_pane_t1

0xbce9,	// (0x0007fd14) cl_header_name_pane_t2_ParamLimits

0xbce9,	// (0x0007fd14) cl_header_name_pane_t2

0xbd13,	// (0x0007fd3e) cl_header_name_pane_t3_ParamLimits

0xbd13,	// (0x0007fd3e) cl_header_name_pane_t3

0x0002,

0xfa7a,	// (0x00083aa5) cl_header_name_pane_t_ParamLimits

0xfa7a,	// (0x00083aa5) cl_header_name_pane_t

0x13f9,	// (0x00075424) navi_pane_mv_g2_ParamLimits

0x34b3,	// (0x000774de) field_vitu2_entry_pane_g1_ParamLimits

0x34bf,	// (0x000774ea) field_vitu2_entry_pane_g2_ParamLimits

0x1517,	// (0x00075542) field_vitu2_entry_pane_g3_ParamLimits

0x1517,	// (0x00075542) field_vitu2_entry_pane_g3

0xf87a,	// (0x000838a5) field_vitu2_entry_pane_g_ParamLimits

0xae62,	// (0x0007ee8d) cell_vitu2_itu_pane_g1_ParamLimits

0xae7a,	// (0x0007eea5) cell_vitu2_itu_pane_g2_ParamLimits

0xae7a,	// (0x0007eea5) cell_vitu2_itu_pane_g2

0x0001,

0xf886,	// (0x000838b1) cell_vitu2_itu_pane_g_ParamLimits

0xf886,	// (0x000838b1) cell_vitu2_itu_pane_g

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp05_ParamLimits

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp05

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp03

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp04

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp10_ParamLimits

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp10

0x5bfe,	// (0x00079c29) bg_vkb2_func_pane_cp08

0xb751,	// (0x0007f77c) bg_vkb2_func_pane_cp06

0xb92e,	// (0x0007f959) bg_vkb2_func_pane_cp07

0x39fe,	// (0x00077a29) bg_vkb2_func_pane_cp11_ParamLimits

0x39fe,	// (0x00077a29) bg_vkb2_func_pane_cp11

0x3a13,	// (0x00077a3e) bg_vkb2_func_pane_cp12_ParamLimits

0x3a13,	// (0x00077a3e) bg_vkb2_func_pane_cp12

0xee29,	// (0x00082e54) bg_vkb2_func_pane_cp09

0x34dd,	// (0x00077508) bg_vkb2_func_pane_g1

0x0c7a,	// (0x00074ca5) bg_vkb2_func_pane_g2

0x34e5,	// (0x00077510) bg_vkb2_func_pane_g3

0x34ed,	// (0x00077518) bg_vkb2_func_pane_g4

0x3735,	// (0x00077760) bg_vkb2_func_pane_g5

0x3505,	// (0x00077530) bg_vkb2_func_pane_g6

0x350d,	// (0x00077538) bg_vkb2_func_pane_g7

0x34fd,	// (0x00077528) bg_vkb2_func_pane_g8

0x0c5a,	// (0x00074c85) bg_vkb2_func_pane_g9

0x0008,

0xfa81,	// (0x00083aac) bg_vkb2_func_pane_g

0xbc21,	// (0x0007fc4c) blid2_tripm_pane_g6_ParamLimits

0xbc21,	// (0x0007fc4c) blid2_tripm_pane_g6

0x3405,	// (0x00077430) mp4_progress_pane_g1

0xbc7b,	// (0x0007fca6) blid2_tripm_values_pane_ParamLimits

0xbc7b,	// (0x0007fca6) blid2_tripm_values_pane

0xbd38,	// (0x0007fd63) blid2_tripm_values_pane_t1

0xbd46,	// (0x0007fd71) blid2_tripm_values_pane_t2

0xbd54,	// (0x0007fd7f) blid2_tripm_values_pane_t3

0xbd62,	// (0x0007fd8d) blid2_tripm_values_pane_t4

0xbd70,	// (0x0007fd9b) blid2_tripm_values_pane_t5

0xbd7e,	// (0x0007fda9) blid2_tripm_values_pane_t6

0xbd8c,	// (0x0007fdb7) blid2_tripm_values_pane_t7

0xbd9a,	// (0x0007fdc5) blid2_tripm_values_pane_t8

0xbda8,	// (0x0007fdd3) blid2_tripm_values_pane_t9

0x0008,

0xfa94,	// (0x00083abf) blid2_tripm_values_pane_t

0x72a4,	// (0x0007b2cf) call_video_pane_t1_ParamLimits

0x72c5,	// (0x0007b2f0) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0008320d) call_video_pane_t_ParamLimits

0x580d,	// (0x00079838) msg_header_pane_g1_ParamLimits

0x1602,	// (0x0007562d) msg_header_pane_g2_ParamLimits

0x1602,	// (0x0007562d) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x00083407) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x00083407) msg_header_pane_g

0x086f,	// (0x0007489a) main_clock2_pane_ParamLimits

0x9eb8,	// (0x0007dee3) grid_clock2_toolbar_pane_ParamLimits

0x9eb8,	// (0x0007dee3) grid_clock2_toolbar_pane

0x9eb8,	// (0x0007dee3) listscroll_clock2_pane_ParamLimits

0x9eb8,	// (0x0007dee3) listscroll_clock2_pane

0x9f68,	// (0x0007df93) main_clock2_pane_t3_ParamLimits

0x9f68,	// (0x0007df93) main_clock2_pane_t3

0x9f7a,	// (0x0007dfa5) main_clock2_pane_t4_ParamLimits

0x9f7a,	// (0x0007dfa5) main_clock2_pane_t4

0x3b1c,	// (0x00077b47) cell_clock2_toolbar_pane

0x3b24,	// (0x00077b4f) cell_clock2_toolbar_pane_cp01

0x3b24,	// (0x00077b4f) cell_clock2_toolbar_pane_cp02

0x3b2c,	// (0x00077b57) cell_clock2_toolbar_pane_cp03

0x3b34,	// (0x00077b5f) list_clock2_pane

0x122c,	// (0x00075257) scroll_pane_cp10

0x3b3c,	// (0x00077b67) list_single_clock2_pane_ParamLimits

0x3b3c,	// (0x00077b67) list_single_clock2_pane

0x0a2a,	// (0x00074a55) list_highlight_pane_cp08

0x3b49,	// (0x00077b74) list_single_clock2_pane_t1

0x3b57,	// (0x00077b82) list_single_clock2_pane_t2

0x0001,

0xfaa7,	// (0x00083ad2) list_single_clock2_pane_t

0xee29,	// (0x00082e54) bg_button_pane_cp10

0x3b65,	// (0x00077b90) cell_clock2_toolbar_pane_g1

0x8a5b,	// (0x0007ca86) aid_main_viewer_pane_g1_ParamLimits

0x8a5b,	// (0x0007ca86) aid_main_viewer_pane_g1

0x8a67,	// (0x0007ca92) aid_main_viewer_pane_g2_ParamLimits

0x8a67,	// (0x0007ca92) aid_main_viewer_pane_g2

0x8a73,	// (0x0007ca9e) aid_main_viewer_pane_g3_ParamLimits

0x8a73,	// (0x0007ca9e) aid_main_viewer_pane_g3

0x8a84,	// (0x0007caaf) aid_main_viewer_pane_g4_ParamLimits

0x8a84,	// (0x0007caaf) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x00083418) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x00083418) aid_main_viewer_pane_g

0x9250,	// (0x0007d27b) main_calc_pane_ParamLimits

0x925d,	// (0x0007d288) main_dialer2_pane_ParamLimits

0xee29,	// (0x00082e54) main_cam6_pane

0xee29,	// (0x00082e54) main_vid6_pane

0x9ec4,	// (0x0007deef) listscroll_gen_pane_cp06_ParamLimits

0x9ec4,	// (0x0007deef) listscroll_gen_pane_cp06

0x9f8c,	// (0x0007dfb7) main_clock2_pane_t5_ParamLimits

0x9f8c,	// (0x0007dfb7) main_clock2_pane_t5

0x9fd9,	// (0x0007e004) aid_call2_pane_cp10_ParamLimits

0x9feb,	// (0x0007e016) aid_call_pane_cp10_ParamLimits

0x129b,	// (0x000752c6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x129b,	// (0x000752c6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9ffd,	// (0x0007e028) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9ffd,	// (0x0007e028) popup_clock_analogue_window_cp10_g4_ParamLimits

0x129b,	// (0x000752c6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf734,	// (0x0008375f) popup_clock_analogue_window_cp10_g_ParamLimits

0xa013,	// (0x0007e03e) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa710,	// (0x0007e73b) cell_dialer2_keypad_pane_g2_ParamLimits

0xa710,	// (0x0007e73b) cell_dialer2_keypad_pane_g2

0x0001,

0xf819,	// (0x00083844) cell_dialer2_keypad_pane_g_ParamLimits

0xf819,	// (0x00083844) cell_dialer2_keypad_pane_g

0xa72c,	// (0x0007e757) cell_dialer2_keypad_pane_t1

0xb19e,	// (0x0007f1c9) main_cset_text2_pane_ParamLimits

0xb19e,	// (0x0007f1c9) main_cset_text2_pane

0x3966,	// (0x00077991) area_vitu2_query_pane_g1_ParamLimits

0x5b18,	// (0x00079b43) area_vitu2_query_pane_g2_ParamLimits

0xf9c4,	// (0x000839ef) area_vitu2_query_pane_g_ParamLimits

0x5bc9,	// (0x00079bf4) area_vitu2_query_pane_t7_ParamLimits

0x5bc9,	// (0x00079bf4) area_vitu2_query_pane_t7

0xb751,	// (0x0007f77c) bg_button_pane_cp018_ParamLimits

0xb92e,	// (0x0007f959) bg_button_pane_cp021_ParamLimits

0x5bed,	// (0x00079c18) bg_button_pane_cp022_ParamLimits

0x5bfe,	// (0x00079c29) bg_vkb2_func_pane_cp08_ParamLimits

0xb751,	// (0x0007f77c) bg_vkb2_func_pane_cp06_ParamLimits

0xb92e,	// (0x0007f959) bg_vkb2_func_pane_cp07_ParamLimits

0x5c10,	// (0x00079c3b) input_focus_pane_cp09_ParamLimits

0xbdb6,	// (0x0007fde1) cam6_autofocus_pane_ParamLimits

0xbdb6,	// (0x0007fde1) cam6_autofocus_pane

0xbdd2,	// (0x0007fdfd) cam6_image_uncrop_pane_ParamLimits

0xbdd2,	// (0x0007fdfd) cam6_image_uncrop_pane

0xbe0b,	// (0x0007fe36) cam6_indi_pane_ParamLimits

0xbe0b,	// (0x0007fe36) cam6_indi_pane

0xbe25,	// (0x0007fe50) cam6_mode_pane_ParamLimits

0xbe25,	// (0x0007fe50) cam6_mode_pane

0xbe39,	// (0x0007fe64) cam6_timer_pane_ParamLimits

0xbe39,	// (0x0007fe64) cam6_timer_pane

0xbe4d,	// (0x0007fe78) cam6_zoom_pane_ParamLimits

0xbe4d,	// (0x0007fe78) cam6_zoom_pane

0xbe68,	// (0x0007fe93) cam6_mode_pane_g1_ParamLimits

0xbe68,	// (0x0007fe93) cam6_mode_pane_g1

0xbe74,	// (0x0007fe9f) cam6_mode_pane_g2_ParamLimits

0xbe74,	// (0x0007fe9f) cam6_mode_pane_g2

0xbe80,	// (0x0007feab) cam6_mode_pane_g3_ParamLimits

0xbe80,	// (0x0007feab) cam6_mode_pane_g3

0xbe8c,	// (0x0007feb7) cam6_mode_pane_g4_ParamLimits

0xbe8c,	// (0x0007feb7) cam6_mode_pane_g4

0x0003,

0xfaac,	// (0x00083ad7) cam6_mode_pane_g_ParamLimits

0xfaac,	// (0x00083ad7) cam6_mode_pane_g

0x3219,	// (0x00077244) bg_tb_trans_pane_cp08_ParamLimits

0x3219,	// (0x00077244) bg_tb_trans_pane_cp08

0x3b6d,	// (0x00077b98) cam6_battery_pane_ParamLimits

0x3b6d,	// (0x00077b98) cam6_battery_pane

0x3b83,	// (0x00077bae) cam6_indi_pane_g1_ParamLimits

0x3b83,	// (0x00077bae) cam6_indi_pane_g1

0x3b95,	// (0x00077bc0) cam6_indi_pane_g2_ParamLimits

0x3b95,	// (0x00077bc0) cam6_indi_pane_g2

0x3ba7,	// (0x00077bd2) cam6_indi_pane_g3_ParamLimits

0x3ba7,	// (0x00077bd2) cam6_indi_pane_g3

0x0002,

0xfab5,	// (0x00083ae0) cam6_indi_pane_g_ParamLimits

0xfab5,	// (0x00083ae0) cam6_indi_pane_g

0x3bb9,	// (0x00077be4) cam6_indi_pane_t1_ParamLimits

0x3bb9,	// (0x00077be4) cam6_indi_pane_t1

0xaca6,	// (0x0007ecd1) cam6_autofocus_pane_g1

0xacae,	// (0x0007ecd9) cam6_autofocus_pane_g2

0xacb6,	// (0x0007ece1) cam6_autofocus_pane_g3

0xacbe,	// (0x0007ece9) cam6_autofocus_pane_g4

0x0003,

0xfabc,	// (0x00083ae7) cam6_autofocus_pane_g

0x3bdf,	// (0x00077c0a) cam6_timer_pane_g1

0x3be7,	// (0x00077c12) cam6_timer_pane_t1

0x3bf5,	// (0x00077c20) cam6_zoom_cont_pane

0x3bfd,	// (0x00077c28) cam6_zoom_pane_g1

0x3c06,	// (0x00077c31) cam6_zoom_pane_g2

0xbe98,	// (0x0007fec3) cam6_zoom_pane_g3

0x0002,

0xfac5,	// (0x00083af0) cam6_zoom_pane_g

0x0a60,	// (0x00074a8b) cam6_battery_pane_g1

0x0a60,	// (0x00074a8b) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x000833c8) cam6_battery_pane_g

0x3bfd,	// (0x00077c28) cam6_zoom_cont_pane_g1

0x3c06,	// (0x00077c31) cam6_zoom_cont_pane_g2

0x3c0f,	// (0x00077c3a) cam6_zoom_cont_pane_g3

0x0002,

0xfacc,	// (0x00083af7) cam6_zoom_cont_pane_g

0xbeb6,	// (0x0007fee1) cam6_mode_pane_cp_ParamLimits

0xbeb6,	// (0x0007fee1) cam6_mode_pane_cp

0xbeca,	// (0x0007fef5) cam6_zoom_pane_cp_ParamLimits

0xbeca,	// (0x0007fef5) cam6_zoom_pane_cp

0xbee2,	// (0x0007ff0d) vid6_image_uncrop_cif_pane_ParamLimits

0xbee2,	// (0x0007ff0d) vid6_image_uncrop_cif_pane

0xbf0e,	// (0x0007ff39) vid6_image_uncrop_nhd_pane_ParamLimits

0xbf0e,	// (0x0007ff39) vid6_image_uncrop_nhd_pane

0xbf2b,	// (0x0007ff56) vid6_image_uncrop_vga_pane_ParamLimits

0xbf2b,	// (0x0007ff56) vid6_image_uncrop_vga_pane

0xbf4a,	// (0x0007ff75) vid6_image_uncrop_wvga_pane_ParamLimits

0xbf4a,	// (0x0007ff75) vid6_image_uncrop_wvga_pane

0xbf67,	// (0x0007ff92) vid6_indi_pane_ParamLimits

0xbf67,	// (0x0007ff92) vid6_indi_pane

0x3219,	// (0x00077244) bg_tb_trans_pane_cp09_ParamLimits

0x3219,	// (0x00077244) bg_tb_trans_pane_cp09

0x3c27,	// (0x00077c52) cam6_battery_pane_cp_ParamLimits

0x3c27,	// (0x00077c52) cam6_battery_pane_cp

0x3c33,	// (0x00077c5e) vid6_indi_pane_g1_ParamLimits

0x3c33,	// (0x00077c5e) vid6_indi_pane_g1

0x3c45,	// (0x00077c70) vid6_indi_pane_g2_ParamLimits

0x3c45,	// (0x00077c70) vid6_indi_pane_g2

0x3c57,	// (0x00077c82) vid6_indi_pane_g3_ParamLimits

0x3c57,	// (0x00077c82) vid6_indi_pane_g3

0x3c6c,	// (0x00077c97) vid6_indi_pane_g4_ParamLimits

0x3c6c,	// (0x00077c97) vid6_indi_pane_g4

0x3c81,	// (0x00077cac) vid6_indi_pane_g5_ParamLimits

0x3c81,	// (0x00077cac) vid6_indi_pane_g5

0x0004,

0xfad3,	// (0x00083afe) vid6_indi_pane_g_ParamLimits

0xfad3,	// (0x00083afe) vid6_indi_pane_g

0x3c9b,	// (0x00077cc6) vid6_indi_pane_t1_ParamLimits

0x3c9b,	// (0x00077cc6) vid6_indi_pane_t1

0x3cb1,	// (0x00077cdc) vid6_indi_pane_t2_ParamLimits

0x3cb1,	// (0x00077cdc) vid6_indi_pane_t2

0x3cd9,	// (0x00077d04) vid6_indi_pane_t3_ParamLimits

0x3cd9,	// (0x00077d04) vid6_indi_pane_t3

0x3d01,	// (0x00077d2c) vid6_indi_pane_t4_ParamLimits

0x3d01,	// (0x00077d2c) vid6_indi_pane_t4

0x0003,

0xfade,	// (0x00083b09) vid6_indi_pane_t_ParamLimits

0xfade,	// (0x00083b09) vid6_indi_pane_t

0x3d25,	// (0x00077d50) wait_bar_pane_cp08

0xbf8a,	// (0x0007ffb5) main_cset_text2_pane_t1_ParamLimits

0xbf8a,	// (0x0007ffb5) main_cset_text2_pane_t1

0xbea1,	// (0x0007fecc) listscroll_gen_pane_cp06_t1_ParamLimits

0xbea1,	// (0x0007fecc) listscroll_gen_pane_cp06_t1

0xee29,	// (0x00082e54) main_cam6_set_pane

0x07fd,	// (0x00074828) bg_tb_trans_pane_cp06_ParamLimits

0xab60,	// (0x0007eb8b) cam4_indicators_pane_g1_ParamLimits

0xab71,	// (0x0007eb9c) cam4_indicators_pane_g2_ParamLimits

0xf856,	// (0x00083881) cam4_indicators_pane_g_ParamLimits

0xab89,	// (0x0007ebb4) cam4_indicators_pane_t1_ParamLimits

0xee8a,	// (0x00082eb5) bg_tb_trans_pane_cp07_ParamLimits

0xac3a,	// (0x0007ec65) vid4_indicators_pane_g1_ParamLimits

0xac4e,	// (0x0007ec79) vid4_indicators_pane_g2_ParamLimits

0xac62,	// (0x0007ec8d) vid4_indicators_pane_g3_ParamLimits

0xac73,	// (0x0007ec9e) vid4_indicators_pane_g4_ParamLimits

0xf868,	// (0x00083893) vid4_indicators_pane_g_ParamLimits

0xac8f,	// (0x0007ecba) vid4_indicators_pane_t1_ParamLimits

0xba5e,	// (0x0007fa89) vid4_progress_pane_g1_ParamLimits

0xba6e,	// (0x0007fa99) vid4_progress_pane_g2_ParamLimits

0xba7e,	// (0x0007faa9) vid4_progress_pane_g3_ParamLimits

0xba90,	// (0x0007fabb) vid4_progress_pane_g4_ParamLimits

0xfa0f,	// (0x00083a3a) vid4_progress_pane_g_ParamLimits

0xbaa8,	// (0x0007fad3) vid4_progress_pane_t1_ParamLimits

0xbabe,	// (0x0007fae9) vid4_progress_pane_t2_ParamLimits

0xbad3,	// (0x0007fafe) vid4_progress_pane_t3_ParamLimits

0xfa1a,	// (0x00083a45) vid4_progress_pane_t_ParamLimits

0xbae9,	// (0x0007fb14) wait_bar_pane_cp07_ParamLimits

0xbfc1,	// (0x0007ffec) main_cam6_set_pane_g2_ParamLimits

0xbfc1,	// (0x0007ffec) main_cam6_set_pane_g2

0xbfcd,	// (0x0007fff8) main_cset6_listscroll_pane_ParamLimits

0xbfcd,	// (0x0007fff8) main_cset6_listscroll_pane

0xbff8,	// (0x00080023) main_cset6_slider_pane_ParamLimits

0xbff8,	// (0x00080023) main_cset6_slider_pane

0xc004,	// (0x0008002f) main_cset6_text2_pane_ParamLimits

0xc004,	// (0x0008002f) main_cset6_text2_pane

0x3d34,	// (0x00077d5f) main_cset6_text_pane

0x3d3c,	// (0x00077d67) main_cset_list_pane_copy1_ParamLimits

0x3d3c,	// (0x00077d67) main_cset_list_pane_copy1

0x3d4c,	// (0x00077d77) scroll_pane_cp028_copy1

0xc017,	// (0x00080042) cset_list_set_pane_copy1

0xc02d,	// (0x00080058) aid_position_infowindow_above_copy1

0xc035,	// (0x00080060) aid_position_infowindow_below_copy1

0xc03d,	// (0x00080068) cset_list_set_pane_g1_copy1

0x5c45,	// (0x00079c70) cset_list_set_pane_g3_copy1_ParamLimits

0x5c45,	// (0x00079c70) cset_list_set_pane_g3_copy1

0x5c54,	// (0x00079c7f) cset_list_set_pane_t1_copy1_ParamLimits

0x5c54,	// (0x00079c7f) cset_list_set_pane_t1_copy1

0xee8a,	// (0x00082eb5) list_highlight_pane_cp021_copy1_ParamLimits

0xee8a,	// (0x00082eb5) list_highlight_pane_cp021_copy1

0x3d55,	// (0x00077d80) cset6_slider_pane_ParamLimits

0x3d55,	// (0x00077d80) cset6_slider_pane

0x3d81,	// (0x00077dac) main_cset6_slider_pane_g1_ParamLimits

0x3d81,	// (0x00077dac) main_cset6_slider_pane_g1

0xc045,	// (0x00080070) main_cset6_slider_pane_g2_ParamLimits

0xc045,	// (0x00080070) main_cset6_slider_pane_g2

0x3da9,	// (0x00077dd4) main_cset6_slider_pane_g3_ParamLimits

0x3da9,	// (0x00077dd4) main_cset6_slider_pane_g3

0xc06d,	// (0x00080098) main_cset6_slider_pane_g4_ParamLimits

0xc06d,	// (0x00080098) main_cset6_slider_pane_g4

0xc079,	// (0x000800a4) main_cset6_slider_pane_g5_ParamLimits

0xc079,	// (0x000800a4) main_cset6_slider_pane_g5

0x361e,	// (0x00077649) main_cset6_slider_pane_g7_ParamLimits

0x361e,	// (0x00077649) main_cset6_slider_pane_g7

0x362a,	// (0x00077655) main_cset6_slider_pane_g8_ParamLimits

0x362a,	// (0x00077655) main_cset6_slider_pane_g8

0xc087,	// (0x000800b2) main_cset6_slider_pane_g9_ParamLimits

0xc087,	// (0x000800b2) main_cset6_slider_pane_g9

0xc093,	// (0x000800be) main_cset6_slider_pane_g10_ParamLimits

0xc093,	// (0x000800be) main_cset6_slider_pane_g10

0xc09f,	// (0x000800ca) main_cset6_slider_pane_g11_ParamLimits

0xc09f,	// (0x000800ca) main_cset6_slider_pane_g11

0xc0ab,	// (0x000800d6) main_cset6_slider_pane_g12_ParamLimits

0xc0ab,	// (0x000800d6) main_cset6_slider_pane_g12

0x3636,	// (0x00077661) main_cset6_slider_pane_g13_ParamLimits

0x3636,	// (0x00077661) main_cset6_slider_pane_g13

0x3642,	// (0x0007766d) main_cset6_slider_pane_g14_ParamLimits

0x3642,	// (0x0007766d) main_cset6_slider_pane_g14

0xc0b7,	// (0x000800e2) main_cset6_slider_pane_g15_ParamLimits

0xc0b7,	// (0x000800e2) main_cset6_slider_pane_g15

0xc0cf,	// (0x000800fa) main_cset6_slider_pane_g16_ParamLimits

0xc0cf,	// (0x000800fa) main_cset6_slider_pane_g16

0xc0dd,	// (0x00080108) main_cset6_slider_pane_g17_ParamLimits

0xc0dd,	// (0x00080108) main_cset6_slider_pane_g17

0x0011,

0xfae7,	// (0x00083b12) main_cset6_slider_pane_g_ParamLimits

0xfae7,	// (0x00083b12) main_cset6_slider_pane_g

0x3dc1,	// (0x00077dec) main_cset6_slider_pane_t1_ParamLimits

0x3dc1,	// (0x00077dec) main_cset6_slider_pane_t1

0xc0f7,	// (0x00080122) main_cset6_slider_pane_t2_ParamLimits

0xc0f7,	// (0x00080122) main_cset6_slider_pane_t2

0xc122,	// (0x0008014d) main_cset6_slider_pane_t3_ParamLimits

0xc122,	// (0x0008014d) main_cset6_slider_pane_t3

0xc14d,	// (0x00080178) main_cset6_slider_pane_t4_ParamLimits

0xc14d,	// (0x00080178) main_cset6_slider_pane_t4

0xc178,	// (0x000801a3) main_cset6_slider_pane_t5_ParamLimits

0xc178,	// (0x000801a3) main_cset6_slider_pane_t5

0x3e02,	// (0x00077e2d) main_cset6_slider_pane_t7_ParamLimits

0x3e02,	// (0x00077e2d) main_cset6_slider_pane_t7

0xc1a5,	// (0x000801d0) main_cset6_slider_pane_t8_ParamLimits

0xc1a5,	// (0x000801d0) main_cset6_slider_pane_t8

0xc1c9,	// (0x000801f4) main_cset6_slider_pane_t9_ParamLimits

0xc1c9,	// (0x000801f4) main_cset6_slider_pane_t9

0xc1ed,	// (0x00080218) main_cset6_slider_pane_t10_ParamLimits

0xc1ed,	// (0x00080218) main_cset6_slider_pane_t10

0xc211,	// (0x0008023c) main_cset6_slider_pane_t11_ParamLimits

0xc211,	// (0x0008023c) main_cset6_slider_pane_t11

0x3e38,	// (0x00077e63) main_cset6_slider_pane_t14_ParamLimits

0x3e38,	// (0x00077e63) main_cset6_slider_pane_t14

0x3e71,	// (0x00077e9c) main_cset6_slider_pane_t15_ParamLimits

0x3e71,	// (0x00077e9c) main_cset6_slider_pane_t15

0x000b,

0xfb0c,	// (0x00083b37) main_cset6_slider_pane_t_ParamLimits

0xfb0c,	// (0x00083b37) main_cset6_slider_pane_t

0x331c,	// (0x00077347) cset_slider_pane_g1_copy1

0x3eaa,	// (0x00077ed5) cset_slider_pane_g2_copy1

0x3eb3,	// (0x00077ede) cset_slider_pane_g3_copy1

0xee29,	// (0x00082e54) bg_popup_sub_pane_cp011_copy1

0x3ec5,	// (0x00077ef0) main_cset_text_pane_g1_copy1

0x378e,	// (0x000777b9) main_cset_text_pane_t1_copy1

0x379c,	// (0x000777c7) main_cset_text_pane_t2_copy1

0x37aa,	// (0x000777d5) main_cset_text_pane_t3_copy1

0x37b8,	// (0x000777e3) main_cset_text_pane_t4_copy1

0x37c6,	// (0x000777f1) main_cset_text_pane_t5_copy1

0x3ecd,	// (0x00077ef8) main_cset_text_pane_t6_copy1

0x3edb,	// (0x00077f06) main_cset_text_pane_t7_copy1

0xc237,	// (0x00080262) main_cset_text2_pane_t1_copy1

0xee8a,	// (0x00082eb5) main_ncimui_pane

0x92ae,	// (0x0007d2d9) popup_query_ncimui_window_ParamLimits

0x92ae,	// (0x0007d2d9) popup_query_ncimui_window

0x985b,	// (0x0007d886) field_cale_ev2_pane_g4_ParamLimits

0x985b,	// (0x0007d886) field_cale_ev2_pane_g4

0xa3f0,	// (0x0007e41b) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa3f0,	// (0x0007e41b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f0,	// (0x0008381b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f0,	// (0x0008381b) cell_video_dialer_keypad_pane_g

0xa408,	// (0x0007e433) cell_video_dialer_keypad_pane_t1

0xee29,	// (0x00082e54) bg_popup_window_pane_cp012

0x2753,	// (0x0007677e) heading_pane_cp06

0x3f07,	// (0x00077f32) ncim_query_content_pane

0xee29,	// (0x00082e54) bg_popup_heading_pane_cp01

0x3f0f,	// (0x00077f3a) ncim_heading_pane_t1

0x3f1d,	// (0x00077f48) ncim_indicator_popup_pane

0x3f2f,	// (0x00077f5a) ncim_query_button_pane

0x3f43,	// (0x00077f6e) ncim_query_content_pane_t1

0x3f55,	// (0x00077f80) ncim_query_content_pane_t2

0x0005,

0xfb50,	// (0x00083b7b) ncim_query_content_pane_t

0x3f8f,	// (0x00077fba) ncim_query_list_pane

0x3fa1,	// (0x00077fcc) ncim_query_popup_pane

0x3f1d,	// (0x00077f48) ncim_indicator_popup_pane_ParamLimits

0xc38b,	// (0x000803b6) ncim_query_content_pane_g1_ParamLimits

0xc38b,	// (0x000803b6) ncim_query_content_pane_g1

0x3f43,	// (0x00077f6e) ncim_query_content_pane_t1_ParamLimits

0x3f55,	// (0x00077f80) ncim_query_content_pane_t2_ParamLimits

0xc397,	// (0x000803c2) ncim_query_content_pane_t3_ParamLimits

0xc397,	// (0x000803c2) ncim_query_content_pane_t3

0xc3b4,	// (0x000803df) ncim_query_content_pane_t4_ParamLimits

0xc3b4,	// (0x000803df) ncim_query_content_pane_t4

0xc3d1,	// (0x000803fc) ncim_query_content_pane_t5_ParamLimits

0xc3d1,	// (0x000803fc) ncim_query_content_pane_t5

0x3f67,	// (0x00077f92) ncim_query_content_pane_t6_ParamLimits

0x3f67,	// (0x00077f92) ncim_query_content_pane_t6

0xfb50,	// (0x00083b7b) ncim_query_content_pane_t_ParamLimits

0x3f8f,	// (0x00077fba) ncim_query_list_pane_ParamLimits

0x3fa1,	// (0x00077fcc) ncim_query_popup_pane_ParamLimits

0x3fb5,	// (0x00077fe0) wait_bar_pane_cp04

0xee29,	// (0x00082e54) input_focus_pane_cp011

0x3fbd,	// (0x00077fe8) ncim_query_popup_pane_t1

0x3fcb,	// (0x00077ff6) ncim_list_query_list_pane_ParamLimits

0x3fcb,	// (0x00077ff6) ncim_list_query_list_pane

0xee29,	// (0x00082e54) bg_button_pane_cp027

0x3fd8,	// (0x00078003) ncim_query_button_pane_g1

0xee29,	// (0x00082e54) list_highlight_pane_cp012

0x3fe2,	// (0x0007800d) ncim_list_query_list_pane_g1

0x3fea,	// (0x00078015) ncim_list_query_list_pane_t1

0xab7d,	// (0x0007eba8) cam4_indicators_pane_g3_ParamLimits

0xab7d,	// (0x0007eba8) cam4_indicators_pane_g3

0xac7f,	// (0x0007ecaa) vid4_indicators_pane_g5_ParamLimits

0xac7f,	// (0x0007ecaa) vid4_indicators_pane_g5

0xba9c,	// (0x0007fac7) vid4_progress_pane_g5_ParamLimits

0xba9c,	// (0x0007fac7) vid4_progress_pane_g5

0xc277,	// (0x000802a2) main_ncimui_pane_g1

0xc2df,	// (0x0008030a) ncimui_group_query_pane_ParamLimits

0xc2df,	// (0x0008030a) ncimui_group_query_pane

0xc327,	// (0x00080352) ncimui_list_pane_ParamLimits

0xc327,	// (0x00080352) ncimui_list_pane

0xc34e,	// (0x00080379) ncimui_text_pane_ParamLimits

0xc34e,	// (0x00080379) ncimui_text_pane

0xc3ee,	// (0x00080419) ncimui_text_pane_t1_ParamLimits

0xc3ee,	// (0x00080419) ncimui_text_pane_t1

0x3ff8,	// (0x00078023) ncimui_list_single_graphic_pane_ParamLimits

0x3ff8,	// (0x00078023) ncimui_list_single_graphic_pane

0xc40d,	// (0x00080438) ncimui_query_pane_ParamLimits

0xc40d,	// (0x00080438) ncimui_query_pane

0xee29,	// (0x00082e54) list_highlight_pane_cp013

0x4008,	// (0x00078033) ncim_list_query_list_pane_t1_copy1

0x4016,	// (0x00078041) ncim_list_single_graphic_pane_g1

0xc420,	// (0x0008044b) ncim_query_button_pane_cp01

0xc42c,	// (0x00080457) ncim_query_entry_pane_ParamLimits

0xc42c,	// (0x00080457) ncim_query_entry_pane

0xc43f,	// (0x0008046a) ncimui_query_pane_g1

0xc44b,	// (0x00080476) ncimui_query_pane_t1_ParamLimits

0xc44b,	// (0x00080476) ncimui_query_pane_t1

0xee8a,	// (0x00082eb5) input_focus_pane_cp012

0x401e,	// (0x00078049) ncim_query_entry_pane_t1

0x086f,	// (0x0007489a) main_im_pane_ParamLimits

0xee8a,	// (0x00082eb5) main_mobtv_pane_ParamLimits

0xee8a,	// (0x00082eb5) main_mobtv_pane

0xc0eb,	// (0x00080116) main_cset6_slider_pane_g18_ParamLimits

0xc0eb,	// (0x00080116) main_cset6_slider_pane_g18

0x3db5,	// (0x00077de0) main_cset6_slider_pane_g19_ParamLimits

0x3db5,	// (0x00077de0) main_cset6_slider_pane_g19

0x1517,	// (0x00075542) bg_main_mobtv_pane_ParamLimits

0x1517,	// (0x00075542) bg_main_mobtv_pane

0xc464,	// (0x0008048f) main_mobtv_info_pane

0xc46f,	// (0x0008049a) main_mobtv_loading_pane_ParamLimits

0xc46f,	// (0x0008049a) main_mobtv_loading_pane

0x4030,	// (0x0007805b) main_mobtv_pg_channel_list_pane

0x403a,	// (0x00078065) main_mobtv_pg_hdr_pane

0xc47c,	// (0x000804a7) main_mobtv_programe_curr_pane_ParamLimits

0xc47c,	// (0x000804a7) main_mobtv_programe_curr_pane

0xc489,	// (0x000804b4) main_mobtv_programe_next_pane_ParamLimits

0xc489,	// (0x000804b4) main_mobtv_programe_next_pane

0x4043,	// (0x0007806e) popup_mobtv_noti_window

0x0a60,	// (0x00074a8b) main_tv_pg_hdr_pane_g1

0x404b,	// (0x00078076) main_tv_pg_hdr_pane_g2

0x4053,	// (0x0007807e) main_tv_pg_hdr_pane_g3

0x405b,	// (0x00078086) main_tv_pg_hdr_pane_g4

0x4063,	// (0x0007808e) main_tv_pg_hdr_pane_g5

0x406d,	// (0x00078098) main_tv_pg_hdr_pane_g6

0x4077,	// (0x000780a2) main_tv_pg_hdr_pane_g7

0x4081,	// (0x000780ac) main_tv_pg_hdr_pane_g8

0x408b,	// (0x000780b6) main_tv_pg_hdr_pane_g9

0x4095,	// (0x000780c0) main_tv_pg_hdr_pane_g10

0x409f,	// (0x000780ca) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5d,	// (0x00083b88) main_tv_pg_hdr_pane_g

0x40a9,	// (0x000780d4) main_tv_pg_hdr_pane_t1

0x40b7,	// (0x000780e2) main_tv_pg_hdr_pane_t2

0x40c5,	// (0x000780f0) main_tv_pg_hdr_pane_t3

0x40d5,	// (0x00078100) main_tv_pg_hdr_pane_t4

0x40e5,	// (0x00078110) main_tv_pg_hdr_pane_t5

0x0004,

0xfb74,	// (0x00083b9f) main_tv_pg_hdr_pane_t

0x40f5,	// (0x00078120) single_mobtv_pg_channel_pane_ParamLimits

0x40f5,	// (0x00078120) single_mobtv_pg_channel_pane

0x4107,	// (0x00078132) single_mobtv_pg_channel_table_pane

0x0d7d,	// (0x00074da8) single_mobtv_pg_channel_thumb_pane

0x4110,	// (0x0007813b) single_tv_pg_channel_pane_g1

0x4119,	// (0x00078144) single_tv_pg_channel_pane_g2

0x0001,

0xfb7f,	// (0x00083baa) single_tv_pg_channel_pane_g

0x07fd,	// (0x00074828) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x07fd,	// (0x00074828) bg_single_mobtv_pg_channel_thumb_pane

0x4122,	// (0x0007814d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4122,	// (0x0007814d) single_mobtv_pg_channel_thumb_pane_g1

0x4130,	// (0x0007815b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4130,	// (0x0007815b) single_mobtv_pg_channel_thumb_pane_g2

0x413c,	// (0x00078167) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x413c,	// (0x00078167) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb84,	// (0x00083baf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb84,	// (0x00083baf) single_mobtv_pg_channel_thumb_pane_g

0x4148,	// (0x00078173) single_mobtv_pg_channel_thumb_pane_t1

0x4156,	// (0x00078181) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb8b,	// (0x00083bb6) single_mobtv_pg_channel_thumb_pane_t

0x0a60,	// (0x00074a8b) bg_single_mobtv_pg_channel_table_pane_g1

0x0a60,	// (0x00074a8b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x000833c8) bg_single_mobtv_pg_channel_table_pane_g

0x4164,	// (0x0007818f) single_mobtv_pg_channel_table_pane_t1

0x4172,	// (0x0007819d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb90,	// (0x00083bbb) single_mobtv_pg_channel_table_pane_t

0xc49e,	// (0x000804c9) main_mobtv_info_pane_g1_ParamLimits

0xc49e,	// (0x000804c9) main_mobtv_info_pane_g1

0xc4ba,	// (0x000804e5) main_mobtv_info_pane_t1_ParamLimits

0xc4ba,	// (0x000804e5) main_mobtv_info_pane_t1

0xc532,	// (0x0008055d) main_mobtv_info_pane_t2_ParamLimits

0xc532,	// (0x0008055d) main_mobtv_info_pane_t2

0x0002,

0xfb9a,	// (0x00083bc5) main_mobtv_info_pane_t_ParamLimits

0xfb9a,	// (0x00083bc5) main_mobtv_info_pane_t

0xc5c1,	// (0x000805ec) wait_bar_pane_cp05

0xc5d3,	// (0x000805fe) main_mobtv_loading_pane_g1_ParamLimits

0xc5d3,	// (0x000805fe) main_mobtv_loading_pane_g1

0xc5e1,	// (0x0008060c) main_mobtv_loading_pane_g2_ParamLimits

0xc5e1,	// (0x0008060c) main_mobtv_loading_pane_g2

0xc5ed,	// (0x00080618) main_mobtv_loading_pane_g3_ParamLimits

0xc5ed,	// (0x00080618) main_mobtv_loading_pane_g3

0x0002,

0xfba1,	// (0x00083bcc) main_mobtv_loading_pane_g_ParamLimits

0xfba1,	// (0x00083bcc) main_mobtv_loading_pane_g

0x4180,	// (0x000781ab) main_mobtv_loading_pane_t1_ParamLimits

0x4180,	// (0x000781ab) main_mobtv_loading_pane_t1

0x4198,	// (0x000781c3) main_mobtv_loading_pane_t2_ParamLimits

0x4198,	// (0x000781c3) main_mobtv_loading_pane_t2

0x0001,

0xfba8,	// (0x00083bd3) main_mobtv_loading_pane_t_ParamLimits

0xfba8,	// (0x00083bd3) main_mobtv_loading_pane_t

0xc5fb,	// (0x00080626) wait_bar_pane_cp06_ParamLimits

0xc5fb,	// (0x00080626) wait_bar_pane_cp06

0x41bc,	// (0x000781e7) main_mobtv_programe_curr_pane_t1

0x41ca,	// (0x000781f5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbad,	// (0x00083bd8) main_mobtv_programe_curr_pane_t

0x41d8,	// (0x00078203) main_mobtv_programe_next_pane_t1

0x41e6,	// (0x00078211) main_mobtv_programe_next_pane_t2

0x41f4,	// (0x0007821f) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb2,	// (0x00083bdd) main_mobtv_programe_next_pane_t

0xee29,	// (0x00082e54) bg_popup_mobtv_noti_window_pane

0x4202,	// (0x0007822d) popup_mobtv_noti_window_g1

0x420a,	// (0x00078235) popup_mobtv_noti_window_t1

0x4218,	// (0x00078243) popup_mobtv_noti_window_t2

0x0001,

0xfbb9,	// (0x00083be4) popup_mobtv_noti_window_t

0x0a60,	// (0x00074a8b) bg_popup_mobtv_noti_window_pane_g1

0xee29,	// (0x00082e54) sc_clock_pane

0xee29,	// (0x00082e54) main_fs_bigclock_pane

0xbc69,	// (0x0007fc94) blid2_tripm_pane_t4_ParamLimits

0xbc69,	// (0x0007fc94) blid2_tripm_pane_t4

0xc607,	// (0x00080632) sc_clock_pane_g1_ParamLimits

0xc607,	// (0x00080632) sc_clock_pane_g1

0xc615,	// (0x00080640) sc_clock_pane_t1_ParamLimits

0xc615,	// (0x00080640) sc_clock_pane_t1

0xc628,	// (0x00080653) sc_clock_pane_t2_ParamLimits

0xc628,	// (0x00080653) sc_clock_pane_t2

0xc63a,	// (0x00080665) sc_clock_pane_t3_ParamLimits

0xc63a,	// (0x00080665) sc_clock_pane_t3

0x0004,

0xfbbe,	// (0x00083be9) sc_clock_pane_t_ParamLimits

0xfbbe,	// (0x00083be9) sc_clock_pane_t

0xcf7c,	// (0x00080fa7) main_fs_bigclock_indicator_pane_ParamLimits

0xcf7c,	// (0x00080fa7) main_fs_bigclock_indicator_pane

0xc6bd,	// (0x000806e8) main_fs_bigclock_pane_g1_ParamLimits

0xc6bd,	// (0x000806e8) main_fs_bigclock_pane_g1

0xcf88,	// (0x00080fb3) main_fs_bigclock_pane_t1_ParamLimits

0xcf88,	// (0x00080fb3) main_fs_bigclock_pane_t1

0xcf9a,	// (0x00080fc5) main_fs_bigclock_pane_t2_ParamLimits

0xcf9a,	// (0x00080fc5) main_fs_bigclock_pane_t2

0xcfae,	// (0x00080fd9) main_fs_bigclock_pane_t3_ParamLimits

0xcfae,	// (0x00080fd9) main_fs_bigclock_pane_t3

0x0002,

0xfd4f,	// (0x00083d7a) main_fs_bigclock_pane_t_ParamLimits

0xfd4f,	// (0x00083d7a) main_fs_bigclock_pane_t

0xe752,	// (0x0008277d) main_fs_bigclock_indicator_pane_g1

0x3f37,	// (0x00077f62) ncim_query_content_pane_g2_ParamLimits

0x3f37,	// (0x00077f62) ncim_query_content_pane_g2

0x0001,

0xfb4b,	// (0x00083b76) ncim_query_content_pane_g_ParamLimits

0xfb4b,	// (0x00083b76) ncim_query_content_pane_g

0xc64e,	// (0x00080679) sc_clock_pane_t4_ParamLimits

0xc64e,	// (0x00080679) sc_clock_pane_t4

0xee8a,	// (0x00082eb5) main_radioblah_pane

0xaa23,	// (0x0007ea4e) cell_call4_button_pane_t1_copy1_ParamLimits

0xaa23,	// (0x0007ea4e) cell_call4_button_pane_t1_copy1

0xc291,	// (0x000802bc) main_ncimui_pane_t1_ParamLimits

0xc291,	// (0x000802bc) main_ncimui_pane_t1

0xc2ab,	// (0x000802d6) main_ncimui_pane_t2_ParamLimits

0xc2ab,	// (0x000802d6) main_ncimui_pane_t2

0x0002,

0xfb44,	// (0x00083b6f) main_ncimui_pane_t_ParamLimits

0xfb44,	// (0x00083b6f) main_ncimui_pane_t

0x4387,	// (0x000783b2) main_radioblah_anim_pane_ParamLimits

0x4387,	// (0x000783b2) main_radioblah_anim_pane

0x4398,	// (0x000783c3) main_radioblah_info_pane_ParamLimits

0x4398,	// (0x000783c3) main_radioblah_info_pane

0x43ac,	// (0x000783d7) main_radioblah_pane_t1_ParamLimits

0x43ac,	// (0x000783d7) main_radioblah_pane_t1

0x43c8,	// (0x000783f3) main_radioblah_pane_t2_ParamLimits

0x43c8,	// (0x000783f3) main_radioblah_pane_t2

0x0003,

0xfbdf,	// (0x00083c0a) main_radioblah_pane_t_ParamLimits

0xfbdf,	// (0x00083c0a) main_radioblah_pane_t

0xc713,	// (0x0008073e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc713,	// (0x0008073e) main_radioblah_rocker_ctrl_pane

0x4410,	// (0x0007843b) main_radioblah_info_pane_t1_ParamLimits

0x4410,	// (0x0007843b) main_radioblah_info_pane_t1

0xc758,	// (0x00080783) main_radioblah_info_pane_t2_ParamLimits

0xc758,	// (0x00080783) main_radioblah_info_pane_t2

0x0003,

0xfbe8,	// (0x00083c13) main_radioblah_info_pane_t_ParamLimits

0xfbe8,	// (0x00083c13) main_radioblah_info_pane_t

0x0a60,	// (0x00074a8b) main_radioblah_rocker_ctrl_pane_g1

0xc808,	// (0x00080833) main_radioblah_rocker_ctrl_pane_g2

0xc810,	// (0x0008083b) main_radioblah_rocker_ctrl_pane_g3

0xc818,	// (0x00080843) main_radioblah_rocker_ctrl_pane_g4

0xc820,	// (0x0008084b) main_radioblah_rocker_ctrl_pane_g5

0xc828,	// (0x00080853) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf1,	// (0x00083c1c) main_radioblah_rocker_ctrl_pane_g

0xc237,	// (0x00080262) main_cset_text2_pane_t1_copy1_ParamLimits

0xaaae,	// (0x0007ead9) cam4_image_uncrop_qvga_pane

0xabef,	// (0x0007ec1a) vid4_image_uncrop_qcif_pane

0xbdfd,	// (0x0007fe28) cam6_image_uncrop_qvga_pane_ParamLimits

0xbdfd,	// (0x0007fe28) cam6_image_uncrop_qvga_pane

0x3c17,	// (0x00077c42) vid6_image_uncrop_qcif_pane_ParamLimits

0x3c17,	// (0x00077c42) vid6_image_uncrop_qcif_pane

0xee29,	// (0x00082e54) bg_popup_preview_window_pane_cp03

0x3ee9,	// (0x00077f14) list_cset_text2_pane

0x3ef1,	// (0x00077f1c) main_cset6_text2_pane_g1

0x3ef9,	// (0x00077f24) main_cset6_text2_pane_t1

0xc830,	// (0x0008085b) list_cset_text2_pane_t1_ParamLimits

0xc830,	// (0x0008085b) list_cset_text2_pane_t1

0xee8a,	// (0x00082eb5) main_radioblah_pane_ParamLimits

0xc5ad,	// (0x000805d8) main_mobtv_info_pane_t3_ParamLimits

0xc5ad,	// (0x000805d8) main_mobtv_info_pane_t3

0xc701,	// (0x0008072c) main_radioblah_pane_g1

0xc72c,	// (0x00080757) main_radioblah_info_pane_g1

0xc7ad,	// (0x000807d8) main_radioblah_info_pane_t3_ParamLimits

0xc7ad,	// (0x000807d8) main_radioblah_info_pane_t3

0x82f2,	// (0x0007c31d) highlight_cell_cale_month_pane_ParamLimits

0x82f2,	// (0x0007c31d) highlight_cell_cale_month_pane

0xee29,	// (0x00082e54) main_phob_fisheye_pane

0x2f2a,	// (0x00076f55) scroll_pane_cp0031_ParamLimits

0x2f2a,	// (0x00076f55) scroll_pane_cp0031

0x3d25,	// (0x00077d50) wait_bar_pane_cp08_ParamLimits

0xc017,	// (0x00080042) cset_list_set_pane_copy1_ParamLimits

0x4465,	// (0x00078490) highlight_cell_cale_month_pane_g1

0xc851,	// (0x0008087c) highlight_cell_cale_month_pane_t1

0x39ba,	// (0x000779e5) list_gen_pane_cp01

0x3609,	// (0x00077634) scroll_pane_01

0x5c86,	// (0x00079cb1) list_single_double_fisheye_pane

0x5c8f,	// (0x00079cba) list_double_fisheye_pane_g1_ParamLimits

0x5c8f,	// (0x00079cba) list_double_fisheye_pane_g1

0x5c9b,	// (0x00079cc6) list_double_fisheye_pane_g2_ParamLimits

0x5c9b,	// (0x00079cc6) list_double_fisheye_pane_g2

0x5caf,	// (0x00079cda) list_double_fisheye_pane_g3_ParamLimits

0x5caf,	// (0x00079cda) list_double_fisheye_pane_g3

0x0004,

0xfbfe,	// (0x00083c29) list_double_fisheye_pane_g_ParamLimits

0xfbfe,	// (0x00083c29) list_double_fisheye_pane_g

0x5cd8,	// (0x00079d03) list_double_fisheye_pane_t1_ParamLimits

0x5cd8,	// (0x00079d03) list_double_fisheye_pane_t1

0x5cf3,	// (0x00079d1e) list_double_fisheye_pane_t2_ParamLimits

0x5cf3,	// (0x00079d1e) list_double_fisheye_pane_t2

0x0001,

0xfc09,	// (0x00083c34) list_double_fisheye_pane_t_ParamLimits

0xfc09,	// (0x00083c34) list_double_fisheye_pane_t

0xee29,	// (0x00082e54) main_call5_pane

0xc674,	// (0x0008069f) sc_swipe_pane_ParamLimits

0xc674,	// (0x0008069f) sc_swipe_pane

0xc86b,	// (0x00080896) call5_image_pane_ParamLimits

0xc86b,	// (0x00080896) call5_image_pane

0xc87b,	// (0x000808a6) call5_swipe_1_pane_ParamLimits

0xc87b,	// (0x000808a6) call5_swipe_1_pane

0xc887,	// (0x000808b2) call5_swipe_2_pane_ParamLimits

0xc887,	// (0x000808b2) call5_swipe_2_pane

0xc8a1,	// (0x000808cc) popup_call5_audio_first_window_ParamLimits

0xc8a1,	// (0x000808cc) popup_call5_audio_first_window

0x07fd,	// (0x00074828) call5_swipe_1_pane_g1_ParamLimits

0x07fd,	// (0x00074828) call5_swipe_1_pane_g1

0x446d,	// (0x00078498) call5_swipe_1_pane_g2_ParamLimits

0x446d,	// (0x00078498) call5_swipe_1_pane_g2

0x0001,

0xfc0e,	// (0x00083c39) call5_swipe_1_pane_g_ParamLimits

0xfc0e,	// (0x00083c39) call5_swipe_1_pane_g

0x4479,	// (0x000784a4) call5_swipe_1_pane_t1_ParamLimits

0x4479,	// (0x000784a4) call5_swipe_1_pane_t1

0x07fd,	// (0x00074828) call5_swipe_2_pane_g1_ParamLimits

0x07fd,	// (0x00074828) call5_swipe_2_pane_g1

0x448e,	// (0x000784b9) call5_swipe_2_pane_g2_ParamLimits

0x448e,	// (0x000784b9) call5_swipe_2_pane_g2

0x0001,

0xfc13,	// (0x00083c3e) call5_swipe_2_pane_g_ParamLimits

0xfc13,	// (0x00083c3e) call5_swipe_2_pane_g

0x449a,	// (0x000784c5) call5_swipe_2_pane_t1_ParamLimits

0x449a,	// (0x000784c5) call5_swipe_2_pane_t1

0x44af,	// (0x000784da) sc_swipe_pane_g1_ParamLimits

0x44af,	// (0x000784da) sc_swipe_pane_g1

0x44bc,	// (0x000784e7) sc_swipe_pane_g2_ParamLimits

0x44bc,	// (0x000784e7) sc_swipe_pane_g2

0x0001,

0xfc18,	// (0x00083c43) sc_swipe_pane_g_ParamLimits

0xfc18,	// (0x00083c43) sc_swipe_pane_g

0x44c8,	// (0x000784f3) sc_swipe_pane_t1_ParamLimits

0x44c8,	// (0x000784f3) sc_swipe_pane_t1

0xee29,	// (0x00082e54) main_cmail_launcher_pane

0xc8af,	// (0x000808da) aid_size_cell_cmail_l_ParamLimits

0xc8af,	// (0x000808da) aid_size_cell_cmail_l

0xc8bd,	// (0x000808e8) grid_cmail_l_pane_ParamLimits

0xc8bd,	// (0x000808e8) grid_cmail_l_pane

0xc8cd,	// (0x000808f8) cell_cmail_l_pane_ParamLimits

0xc8cd,	// (0x000808f8) cell_cmail_l_pane

0x44dd,	// (0x00078508) cell_cmail_l_pane_g1_ParamLimits

0x44dd,	// (0x00078508) cell_cmail_l_pane_g1

0x44e9,	// (0x00078514) cell_cmail_l_pane_t1_ParamLimits

0x44e9,	// (0x00078514) cell_cmail_l_pane_t1

0x44ff,	// (0x0007852a) cell_cmail_l_pane_t2_ParamLimits

0x44ff,	// (0x0007852a) cell_cmail_l_pane_t2

0x0001,

0xfc1d,	// (0x00083c48) cell_cmail_l_pane_t_ParamLimits

0xfc1d,	// (0x00083c48) cell_cmail_l_pane_t

0xee8a,	// (0x00082eb5) grid_highlight_pane_cp018_ParamLimits

0xee8a,	// (0x00082eb5) grid_highlight_pane_cp018

0x658b,	// (0x0007a5b6) main2_pane_ParamLimits

0x658b,	// (0x0007a5b6) main2_pane

0x0907,	// (0x00074932) popup_sp_fs_action_menu_bg_pane_g1

0x090f,	// (0x0007493a) popup_sp_fs_action_menu_bg_pane_g2

0x0917,	// (0x00074942) popup_sp_fs_action_menu_bg_pane_g3

0x091f,	// (0x0007494a) popup_sp_fs_action_menu_bg_pane_g4

0x0927,	// (0x00074952) popup_sp_fs_action_menu_bg_pane_g5

0x092f,	// (0x0007495a) popup_sp_fs_action_menu_bg_pane_g6

0x0937,	// (0x00074962) popup_sp_fs_action_menu_bg_pane_g7

0x093f,	// (0x0007496a) popup_sp_fs_action_menu_bg_pane_g8

0x0947,	// (0x00074972) popup_sp_fs_action_menu_bg_pane_g9

0x094f,	// (0x0007497a) popup_sp_fs_action_menu_bg_pane_g10

0x094f,	// (0x0007497a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00083130) popup_sp_fs_action_menu_bg_pane_g

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g3_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g3_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g3_g2

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g3_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000831de) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000831de) list_medium_line_x2_t3_g3_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g3_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g3_t2

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000831e5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000831e5) list_medium_line_x2_t3_g3_t

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g2_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_x2_t3_g2_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g2_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g2_t2

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000831e5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000831e5) list_medium_line_x2_t3_g2_t

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g2

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g3

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g4_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000831f1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000831f1) list_medium_line_x2_t4_g4_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t2

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t3

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000831fa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000831fa) list_medium_line_x2_t4_g4_t

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g2

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g3

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g4_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000831f1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000831f1) list_medium_line_x2_t2_g4_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g4_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x00083261) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x00083261) list_medium_line_x2_t2_g4_t

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g3_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g3_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g3_g2

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g3_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000831de) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000831de) list_medium_line_x2_t2_g3_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g3_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x00083261) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x00083261) list_medium_line_x2_t2_g3_t

0x84d3,	// (0x0007c4fe) main_sp_fs_list_pane_ParamLimits

0x84d3,	// (0x0007c4fe) main_sp_fs_list_pane

0x84df,	// (0x0007c50a) sp_fs_scroll_pane_ParamLimits

0x84df,	// (0x0007c50a) sp_fs_scroll_pane

0x0f9c,	// (0x00074fc7) list_medium_line_x2_t3_t1

0x0f9c,	// (0x00074fc7) list_medium_line_x2_t3_t2

0x0f9c,	// (0x00074fc7) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x000832ac) list_medium_line_x2_t3_t

0x0f9c,	// (0x00074fc7) list_medium_line_x3_t4_t1

0x0f9c,	// (0x00074fc7) list_medium_line_x3_t4_t2

0x0f9c,	// (0x00074fc7) list_medium_line_x3_t4_t3

0x0f9c,	// (0x00074fc7) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x000832b3) list_medium_line_x3_t4_t

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t5_t1

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t5_t2

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t5_t3

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t5_t4

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x000832bc) list_medium_line_x4_t5_t

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g1

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g2

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g3

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g4_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000831f1) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000831f1) list_medium_line_t4_g4_g

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t1

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t2

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t3

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t4_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000831fa) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000831fa) list_medium_line_t4_g4_t

0x85d2,	// (0x0007c5fd) chi_dic_find_pane_g1

0x926b,	// (0x0007d296) main_tport_pane

0x0f9c,	// (0x00074fc7) list_medium_line_plain_t1

0x07fd,	// (0x00074828) list_medium_line_t2_g2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t2_g2_g1

0x07fd,	// (0x00074828) list_medium_line_t2_g2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_t2_g2_g

0x0a32,	// (0x00074a5d) list_medium_line_t2_g2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t2_g2_t1

0x0a32,	// (0x00074a5d) list_medium_line_t2_g2_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x00083261) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x00083261) list_medium_line_t2_g2_t

0x5c20,	// (0x00079c4b) aid_sp_fs_list_icon_a_sm

0xbafa,	// (0x0007fb25) aid_sp_fs_list_icon_d

0x5c28,	// (0x00079c53) aid_sp_fs_text_primary

0xee98,	// (0x00082ec3) aid_sp_fs_text_secondary

0xee29,	// (0x00082e54) list_medium_line

0xee29,	// (0x00082e54) list_medium_line_g2

0xee29,	// (0x00082e54) list_medium_line_g3

0xee29,	// (0x00082e54) list_medium_line_plain

0xee29,	// (0x00082e54) list_medium_line_plain_t2

0xee29,	// (0x00082e54) list_medium_line_plain_t3

0xee29,	// (0x00082e54) list_medium_line_right_icon

0xee29,	// (0x00082e54) list_medium_line_right_iconx2

0xee29,	// (0x00082e54) list_medium_line_t2

0xee29,	// (0x00082e54) list_medium_line_t2_g2

0xee29,	// (0x00082e54) list_medium_line_t2_g3

0xee29,	// (0x00082e54) list_medium_line_t2_right_icon

0xee29,	// (0x00082e54) list_medium_line_t2_right_iconx2

0xee29,	// (0x00082e54) list_medium_line_t3

0xee29,	// (0x00082e54) list_medium_line_t3_g2

0xee29,	// (0x00082e54) list_medium_line_t3_g3

0xee29,	// (0x00082e54) list_medium_line_t3_right_iconx2

0xee29,	// (0x00082e54) list_medium_line_t4_g4

0xee29,	// (0x00082e54) list_medium_line_x2

0xee29,	// (0x00082e54) list_medium_line_x2_t2_g2

0xee29,	// (0x00082e54) list_medium_line_x2_t2_g3

0xee29,	// (0x00082e54) list_medium_line_x2_t2_g4

0xee29,	// (0x00082e54) list_medium_line_x2_t3

0xee29,	// (0x00082e54) list_medium_line_x2_t3_g2

0xee29,	// (0x00082e54) list_medium_line_x2_t3_g3

0xee29,	// (0x00082e54) list_medium_line_x2_t3_g4

0xee29,	// (0x00082e54) list_medium_line_x2_t4_g2

0xee29,	// (0x00082e54) list_medium_line_x2_t4_g4

0xee29,	// (0x00082e54) list_medium_line_x3

0xee29,	// (0x00082e54) list_medium_line_x3_t4

0xee29,	// (0x00082e54) list_medium_line_x3_t4_g4

0xee29,	// (0x00082e54) list_medium_line_x4_t4

0xee29,	// (0x00082e54) list_medium_line_x4_t4_g7

0xee29,	// (0x00082e54) list_medium_line_x4_t5

0x5c31,	// (0x00079c5c) list_single_fs_dyc_pane_ParamLimits

0x5c31,	// (0x00079c5c) list_single_fs_dyc_pane

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g1

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g2

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g3

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g4

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g5

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x4_t4_g7_g6

0x080b,	// (0x00074836) list_medium_line_x4_t4_g7_g7_ParamLimits

0x080b,	// (0x00074836) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb25,	// (0x00083b50) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb25,	// (0x00083b50) list_medium_line_x4_t4_g7_g

0x0a32,	// (0x00074a5d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x4_t4_g7_t1

0x0a32,	// (0x00074a5d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x4_t4_g7_t2

0x0a32,	// (0x00074a5d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x4_t4_g7_t3

0x1539,	// (0x00075564) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1539,	// (0x00075564) list_medium_line_x4_t4_g7_t4

0x1539,	// (0x00075564) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1539,	// (0x00075564) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb34,	// (0x00083b5f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb34,	// (0x00083b5f) list_medium_line_x4_t4_g7_t

0x5c69,	// (0x00079c94) list_single_dyc_row_pane_ParamLimits

0x5c69,	// (0x00079c94) list_single_dyc_row_pane

0xc85f,	// (0x0008088a) call5_gesture_pane_ParamLimits

0xc85f,	// (0x0008088a) call5_gesture_pane

0xc893,	// (0x000808be) call5_windows_pane_ParamLimits

0xc893,	// (0x000808be) call5_windows_pane

0xc8e6,	// (0x00080911) call5_swipe_1_pane_cp_ParamLimits

0xc8e6,	// (0x00080911) call5_swipe_1_pane_cp

0xc8f2,	// (0x0008091d) call5_swipe_2_pane_cp_ParamLimits

0xc8f2,	// (0x0008091d) call5_swipe_2_pane_cp

0x0a2a,	// (0x00074a55) call5_image_pane_cp

0xc8fe,	// (0x00080929) popup_call5_audio_first_window_cp_ParamLimits

0xc8fe,	// (0x00080929) popup_call5_audio_first_window_cp

0x44af,	// (0x000784da) call5_swipe_1_pane_g1_cp_ParamLimits

0x44af,	// (0x000784da) call5_swipe_1_pane_g1_cp

0x451c,	// (0x00078547) call5_swipe_1_pane_g2_cp

0x44c8,	// (0x000784f3) call5_swipe_1_pane_t1_cp_ParamLimits

0x44c8,	// (0x000784f3) call5_swipe_1_pane_t1_cp

0x44af,	// (0x000784da) call5_swipe_2_pane_g1_cp_ParamLimits

0x44af,	// (0x000784da) call5_swipe_2_pane_g1_cp

0x4524,	// (0x0007854f) call5_swipe_2_pane_g2_cp

0x452c,	// (0x00078557) call5_swipe_2_pane_t1_cp_ParamLimits

0x452c,	// (0x00078557) call5_swipe_2_pane_t1_cp

0xee8a,	// (0x00082eb5) main_sp_fs_email_pane

0x4541,	// (0x0007856c) main_sp_fs_listscroll_pane_te

0xc90c,	// (0x00080937) popup_sp_fs_action_menu_pane_ParamLimits

0xc90c,	// (0x00080937) popup_sp_fs_action_menu_pane

0x0a60,	// (0x00074a8b) bg_sp_fs_ctrlbar_pane_g1

0x454a,	// (0x00078575) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4553,	// (0x0007857e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x27da,	// (0x00076805) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0a60,	// (0x00074a8b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc22,	// (0x00083c4d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2763,	// (0x0007678e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2763,	// (0x0007678e) bg_sp_fs_ctrlbar_ddmenu_pane

0x455c,	// (0x00078587) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x455c,	// (0x00078587) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4568,	// (0x00078593) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4568,	// (0x00078593) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc2b,	// (0x00083c56) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc2b,	// (0x00083c56) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4574,	// (0x0007859f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4574,	// (0x0007859f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0a60,	// (0x00074a8b) list_medium_line_t2_right_icon_g1

0x0f9c,	// (0x00074fc7) list_medium_line_t2_right_icon_t1

0x0f9c,	// (0x00074fc7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc30,	// (0x00083c5b) list_medium_line_t2_right_icon_t

0x154d,	// (0x00075578) bg_sp_fs_ctrlbar_pane_ParamLimits

0x154d,	// (0x00075578) bg_sp_fs_ctrlbar_pane

0xc993,	// (0x000809be) main_sp_fs_ctrlbar_button_pane_cp01

0xc99b,	// (0x000809c6) main_sp_fs_ctrlbar_ddmenu_pane

0x45c6,	// (0x000785f1) main_sp_fs_ctrlbar_pane_g1

0x45d2,	// (0x000785fd) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc35,	// (0x00083c60) main_sp_fs_ctrlbar_pane_g

0xc9d7,	// (0x00080a02) main_sp_fs_ctrlbar_pane_t1

0xca12,	// (0x00080a3d) main_sp_fs_ctrlbar_pane

0xca28,	// (0x00080a53) main_sp_fs_listscroll_pane_te_cp01

0x5d15,	// (0x00079d40) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5d15,	// (0x00079d40) popup_sp_fs_action_menu_pane_cp01

0xee8a,	// (0x00082eb5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xee8a,	// (0x00082eb5) bg_sp_fs_highlight_list_pane_cp01

0x5d35,	// (0x00079d60) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5d35,	// (0x00079d60) sp_fs_action_menu_list_gene_pane_g1

0x45f9,	// (0x00078624) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x45f9,	// (0x00078624) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc43,	// (0x00083c6e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc43,	// (0x00083c6e) sp_fs_action_menu_list_gene_pane_g

0x5d44,	// (0x00079d6f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5d44,	// (0x00079d6f) sp_fs_action_menu_list_gene_pane_t1

0x5d5c,	// (0x00079d87) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5d5c,	// (0x00079d87) sp_fs_action_menu_list_gene_pane

0x4606,	// (0x00078631) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4606,	// (0x00078631) popup_sp_fs_action_menu_bg_pane

0x5d7b,	// (0x00079da6) sp_fs_action_menu_list_pane_ParamLimits

0x5d7b,	// (0x00079da6) sp_fs_action_menu_list_pane

0xca39,	// (0x00080a64) sp_fs_scroll_pane_cp01_ParamLimits

0xca39,	// (0x00080a64) sp_fs_scroll_pane_cp01

0x0f9c,	// (0x00074fc7) list_medium_line_plain_t2_t1

0x0f9c,	// (0x00074fc7) list_medium_line_plain_t2_t2

0x0001,

0xfc30,	// (0x00083c5b) list_medium_line_plain_t2_t

0x0f9c,	// (0x00074fc7) list_medium_line_plain_t3_t1

0x0f9c,	// (0x00074fc7) list_medium_line_plain_t3_t2

0x0f9c,	// (0x00074fc7) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x000832ac) list_medium_line_plain_t3_t

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g2_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_x2_t2_g2_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g2_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x00083261) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x00083261) list_medium_line_x2_t2_g2_t

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g2_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_x2_t4_g2_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t2

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t3

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000831fa) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000831fa) list_medium_line_x2_t4_g2_t

0x0a60,	// (0x00074a8b) list_medium_line_t3_right_iconx2_g1

0x0a60,	// (0x00074a8b) list_medium_line_t3_right_iconx2_g2

0x0a60,	// (0x00074a8b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x000833cd) list_medium_line_t3_right_iconx2_g

0x0f9c,	// (0x00074fc7) list_medium_line_t3_right_iconx2_t1

0x0f9c,	// (0x00074fc7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc30,	// (0x00083c5b) list_medium_line_t3_right_iconx2_t

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g1

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g2

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g3

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g4_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000831f1) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000831f1) list_medium_line_x3_t4_g4_g

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t1

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t2

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t3

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000831fa) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000831fa) list_medium_line_x3_t4_g4_t

0x5d9b,	// (0x00079dc6) list_single_dyc_row_text_pane_t1_ParamLimits

0x5d9b,	// (0x00079dc6) list_single_dyc_row_text_pane_t1

0x5dd2,	// (0x00079dfd) list_single_dyc_row_text_pane_t2_ParamLimits

0x5dd2,	// (0x00079dfd) list_single_dyc_row_text_pane_t2

0x5e48,	// (0x00079e73) list_single_dyc_row_text_pane_t3_ParamLimits

0x5e48,	// (0x00079e73) list_single_dyc_row_text_pane_t3

0x0005,

0xfc48,	// (0x00083c73) list_single_dyc_row_text_pane_t_ParamLimits

0xfc48,	// (0x00083c73) list_single_dyc_row_text_pane_t

0x5f19,	// (0x00079f44) list_single_dyc_row_pane_g1_ParamLimits

0x5f19,	// (0x00079f44) list_single_dyc_row_pane_g1

0x5f25,	// (0x00079f50) list_single_dyc_row_pane_g2_ParamLimits

0x5f25,	// (0x00079f50) list_single_dyc_row_pane_g2

0x5f31,	// (0x00079f5c) list_single_dyc_row_pane_g3_ParamLimits

0x5f31,	// (0x00079f5c) list_single_dyc_row_pane_g3

0x5f3d,	// (0x00079f68) list_single_dyc_row_pane_g4_ParamLimits

0x5f3d,	// (0x00079f68) list_single_dyc_row_pane_g4

0x0003,

0xfc55,	// (0x00083c80) list_single_dyc_row_pane_g_ParamLimits

0xfc55,	// (0x00083c80) list_single_dyc_row_pane_g

0x5f49,	// (0x00079f74) list_single_dyc_row_text_pane_ParamLimits

0x5f49,	// (0x00079f74) list_single_dyc_row_text_pane

0xee29,	// (0x00082e54) bg_sp_fs_scroll_pane

0x4614,	// (0x0007863f) thumb_sp_fs_scroll_pane

0x07fd,	// (0x00074828) list_medium_line_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_g1

0x0a32,	// (0x00074a5d) list_medium_line_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t1

0x07fd,	// (0x00074828) list_medium_line_x2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_g1

0x07fd,	// (0x00074828) list_medium_line_x2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_x2_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t1

0x07fd,	// (0x00074828) list_medium_line_x3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x3_g1

0x426e,	// (0x00078299) list_medium_line_x3_g2_ParamLimits

0x426e,	// (0x00078299) list_medium_line_x3_g2

0x0001,

0xfc5e,	// (0x00083c89) list_medium_line_x3_g_ParamLimits

0xfc5e,	// (0x00083c89) list_medium_line_x3_g

0x461d,	// (0x00078648) list_medium_line_x3_t1_ParamLimits

0x461d,	// (0x00078648) list_medium_line_x3_t1

0x4631,	// (0x0007865c) thumb_sp_fs_scroll_pane_g1

0x463a,	// (0x00078665) thumb_sp_fs_scroll_pane_g2

0x4643,	// (0x0007866e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x00083c8e) thumb_sp_fs_scroll_pane_g

0x4631,	// (0x0007865c) bg_sp_fs_scroll_pane_g1

0x463a,	// (0x00078665) bg_sp_fs_scroll_pane_g2

0x4643,	// (0x0007866e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x00083c8e) bg_sp_fs_scroll_pane_g

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g1

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g2

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g3

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g4_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000831f1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000831f1) list_medium_line_x2_t3_g4_g

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g4_t1

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g4_t2

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000831e5) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000831e5) list_medium_line_x2_t3_g4_t

0x07fd,	// (0x00074828) list_medium_line_g2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_g2_g1

0x07fd,	// (0x00074828) list_medium_line_g2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_g2_g

0x0a32,	// (0x00074a5d) list_medium_line_g2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_g2_t1

0x07fd,	// (0x00074828) list_medium_line_t3_g2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t3_g2_g1

0x07fd,	// (0x00074828) list_medium_line_t3_g2_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000831ec) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000831ec) list_medium_line_t3_g2_g

0x0a32,	// (0x00074a5d) list_medium_line_t3_g2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_g2_t1

0x0a32,	// (0x00074a5d) list_medium_line_t3_g2_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_g2_t2

0x0a32,	// (0x00074a5d) list_medium_line_t3_g2_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000831e5) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000831e5) list_medium_line_t3_g2_t

0x0a60,	// (0x00074a8b) list_medium_line_right_icon_g1

0x0f9c,	// (0x00074fc7) list_medium_line_right_icon_t1

0x07fd,	// (0x00074828) list_medium_line_t2_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t2_g1

0x0a32,	// (0x00074a5d) list_medium_line_t2_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t2_t1

0x0a32,	// (0x00074a5d) list_medium_line_t2_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x00083261) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x00083261) list_medium_line_t2_t

0x07fd,	// (0x00074828) list_medium_line_t3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t3_g1

0x0a32,	// (0x00074a5d) list_medium_line_t3_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_t1

0x0a32,	// (0x00074a5d) list_medium_line_t3_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_t2

0x0a32,	// (0x00074a5d) list_medium_line_t3_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000831e5) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000831e5) list_medium_line_t3_t

0x07fd,	// (0x00074828) list_medium_line_g3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_g3_g1

0x07fd,	// (0x00074828) list_medium_line_g3_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_g3_g2

0x07fd,	// (0x00074828) list_medium_line_g3_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000831de) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000831de) list_medium_line_g3_g

0x0a32,	// (0x00074a5d) list_medium_line_g3_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_g3_t1

0x07fd,	// (0x00074828) list_medium_line_t2_g3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t2_g3_g1

0x07fd,	// (0x00074828) list_medium_line_t2_g3_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t2_g3_g2

0x07fd,	// (0x00074828) list_medium_line_t2_g3_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000831de) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000831de) list_medium_line_t2_g3_g

0x0a32,	// (0x00074a5d) list_medium_line_t2_g3_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t2_g3_t1

0x0a32,	// (0x00074a5d) list_medium_line_t2_g3_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x00083261) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x00083261) list_medium_line_t2_g3_t

0x07fd,	// (0x00074828) list_medium_line_t3_g3_g1_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t3_g3_g1

0x07fd,	// (0x00074828) list_medium_line_t3_g3_g2_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t3_g3_g2

0x07fd,	// (0x00074828) list_medium_line_t3_g3_g3_ParamLimits

0x07fd,	// (0x00074828) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000831de) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000831de) list_medium_line_t3_g3_g

0x0a32,	// (0x00074a5d) list_medium_line_t3_g3_t1_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_g3_t1

0x0a32,	// (0x00074a5d) list_medium_line_t3_g3_t2_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_g3_t2

0x0a32,	// (0x00074a5d) list_medium_line_t3_g3_t3_ParamLimits

0x0a32,	// (0x00074a5d) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000831e5) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000831e5) list_medium_line_t3_g3_t

0x0a60,	// (0x00074a8b) list_medium_line_right_iconx2_g1

0x0a60,	// (0x00074a8b) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x000833c8) list_medium_line_right_iconx2_g

0x0f9c,	// (0x00074fc7) list_medium_line_right_iconx2_t1

0x0a60,	// (0x00074a8b) list_medium_line_t2_right_iconx2_g1

0x0a60,	// (0x00074a8b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x000833c8) list_medium_line_t2_right_iconx2_g

0x0f9c,	// (0x00074fc7) list_medium_line_t2_right_iconx2_t1

0x0f9c,	// (0x00074fc7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc30,	// (0x00083c5b) list_medium_line_t2_right_iconx2_t

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t4_t1

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t4_t2

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t4_t3

0x0f9c,	// (0x00074fc7) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x000832b3) list_medium_line_x4_t4_t

0xca89,	// (0x00080ab4) tport_appsw_pane_ParamLimits

0xca89,	// (0x00080ab4) tport_appsw_pane

0xca97,	// (0x00080ac2) tport_contact_pane_ParamLimits

0xca97,	// (0x00080ac2) tport_contact_pane

0xcaa7,	// (0x00080ad2) tport_listscroll_pane_ParamLimits

0xcaa7,	// (0x00080ad2) tport_listscroll_pane

0xcab7,	// (0x00080ae2) cell_tport_appsw_pane_ParamLimits

0xcab7,	// (0x00080ae2) cell_tport_appsw_pane

0x080b,	// (0x00074836) tport_appsw_pane_g1_ParamLimits

0x080b,	// (0x00074836) tport_appsw_pane_g1

0x464c,	// (0x00078677) tport_contact_pane_g1

0x4655,	// (0x00078680) tport_contact_pane_t1

0x4663,	// (0x0007868e) tport_contact_pane_t2

0x0001,

0xfc6a,	// (0x00083c95) tport_contact_pane_t

0x4671,	// (0x0007869c) list_tport_pane

0x467a,	// (0x000786a5) scroll_pane_cp_030

0xcaea,	// (0x00080b15) cell_tport_appsw_pane_g1

0xcafa,	// (0x00080b25) cell_tport_appsw_pane_t1

0xcb08,	// (0x00080b33) grid_highlight_pane_cp019

0xcb10,	// (0x00080b3b) list_tport_double_graphic_pane_ParamLimits

0xcb10,	// (0x00080b3b) list_tport_double_graphic_pane

0xee8a,	// (0x00082eb5) list_highlight_pane_cp023_ParamLimits

0xee8a,	// (0x00082eb5) list_highlight_pane_cp023

0xcb21,	// (0x00080b4c) list_tport_double_graphic_pane_g1_ParamLimits

0xcb21,	// (0x00080b4c) list_tport_double_graphic_pane_g1

0xcb2e,	// (0x00080b59) list_tport_double_graphic_pane_t1_ParamLimits

0xcb2e,	// (0x00080b59) list_tport_double_graphic_pane_t1

0xcb43,	// (0x00080b6e) list_tport_double_graphic_pane_t2_ParamLimits

0xcb43,	// (0x00080b6e) list_tport_double_graphic_pane_t2

0x0001,

0xfc76,	// (0x00083ca1) list_tport_double_graphic_pane_t_ParamLimits

0xfc76,	// (0x00083ca1) list_tport_double_graphic_pane_t

0xee29,	// (0x00082e54) main_cale_note_pane

0xae48,	// (0x0007ee73) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xae48,	// (0x0007ee73) cell_vitu2_function_top_wide_pane_cp01

0xc5c1,	// (0x000805ec) wait_bar_pane_cp05_ParamLimits

0xee8a,	// (0x00082eb5) listscroll_cmail_pane

0x468b,	// (0x000786b6) list_cmail_pane

0xcb55,	// (0x00080b80) list_cmail_body_pane

0xcb7d,	// (0x00080ba8) list_single_cmail_header_caption_pane

0xcbac,	// (0x00080bd7) list_single_cmail_header_detail_pane_ParamLimits

0xcbac,	// (0x00080bd7) list_single_cmail_header_detail_pane

0x46a2,	// (0x000786cd) list_single_cmail_header_caption_pane_t1

0x5f68,	// (0x00079f93) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5f68,	// (0x00079f93) list_single_cmail_header_detail_pane_g1

0xcbe9,	// (0x00080c14) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcbe9,	// (0x00080c14) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc7b,	// (0x00083ca6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc7b,	// (0x00083ca6) list_single_cmail_header_detail_pane_g

0x5f7e,	// (0x00079fa9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5f7e,	// (0x00079fa9) list_single_cmail_header_detail_pane_t1

0x5fde,	// (0x0007a009) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5fde,	// (0x0007a009) list_single_cmail_header_editor_pane_bg

0x4119,	// (0x00078144) list_cmail_body_pane_g1

0x46c6,	// (0x000786f1) list_cmail_body_pane_t1

0x34dd,	// (0x00077508) list_single_cmail_header_editor_pane_bg_g1

0x0c7a,	// (0x00074ca5) list_single_cmail_header_editor_pane_bg_g1_copy1

0x34ed,	// (0x00077518) list_single_cmail_header_editor_pane_bg_g1_copy2

0x34e5,	// (0x00077510) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3735,	// (0x00077760) list_single_cmail_header_editor_pane_bg_g1_copy4

0x350d,	// (0x00077538) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x34fd,	// (0x00077528) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3505,	// (0x00077530) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0c5a,	// (0x00074c85) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcbf5,	// (0x00080c20) calenote_gesture_pane_ParamLimits

0xcbf5,	// (0x00080c20) calenote_gesture_pane

0xcc0f,	// (0x00080c3a) calenote_window_pane_ParamLimits

0xcc0f,	// (0x00080c3a) calenote_window_pane

0x46d4,	// (0x000786ff) popup_note_window_cp01

0xcc27,	// (0x00080c52) calenote_swipe_1_pane_ParamLimits

0xcc27,	// (0x00080c52) calenote_swipe_1_pane

0xc8f2,	// (0x0008091d) calenote_swipe_2_pane_ParamLimits

0xc8f2,	// (0x0008091d) calenote_swipe_2_pane

0x44af,	// (0x000784da) calenote_swipe_1_pane_g1_ParamLimits

0x44af,	// (0x000784da) calenote_swipe_1_pane_g1

0x44bc,	// (0x000784e7) calenote_swipe_1_pane_g2_ParamLimits

0x44bc,	// (0x000784e7) calenote_swipe_1_pane_g2

0x0001,

0xfc18,	// (0x00083c43) calenote_swipe_1_pane_g_ParamLimits

0xfc18,	// (0x00083c43) calenote_swipe_1_pane_g

0x46e6,	// (0x00078711) calenote_swipe_1_pane_t1_ParamLimits

0x46e6,	// (0x00078711) calenote_swipe_1_pane_t1

0x44af,	// (0x000784da) calenote_swipe_2_pane_g1_ParamLimits

0x44af,	// (0x000784da) calenote_swipe_2_pane_g1

0x4705,	// (0x00078730) calenote_swipe_2_pane_g2_ParamLimits

0x4705,	// (0x00078730) calenote_swipe_2_pane_g2

0x0001,

0xfc87,	// (0x00083cb2) calenote_swipe_2_pane_g_ParamLimits

0xfc87,	// (0x00083cb2) calenote_swipe_2_pane_g

0x4711,	// (0x0007873c) calenote_swipe_2_pane_t1_ParamLimits

0x4711,	// (0x0007873c) calenote_swipe_2_pane_t1

0xee29,	// (0x00082e54) main_mup_navstr_pane

0x9cc8,	// (0x0007dcf3) main_mup3_pane_t7_ParamLimits

0x9cc8,	// (0x0007dcf3) main_mup3_pane_t7

0xa4f1,	// (0x0007e51c) main_mp4_pane_g6_ParamLimits

0xa4f1,	// (0x0007e51c) main_mp4_pane_g6

0xa881,	// (0x0007e8ac) main_image3_pane_t4_ParamLimits

0xa881,	// (0x0007e8ac) main_image3_pane_t4

0xcc3a,	// (0x00080c65) popup_navstr_preview_pane_ParamLimits

0xcc3a,	// (0x00080c65) popup_navstr_preview_pane

0xcc46,	// (0x00080c71) scroll_navstr_pane_ParamLimits

0xcc46,	// (0x00080c71) scroll_navstr_pane

0xee29,	// (0x00082e54) bg_popup_preview_window_pane_cp04

0x4738,	// (0x00078763) popup_navstr_preview_pane_t1

0xcc52,	// (0x00080c7d) scroll_navstr_pane_g1_ParamLimits

0xcc52,	// (0x00080c7d) scroll_navstr_pane_g1

0xcc5f,	// (0x00080c8a) scroll_navstr_pane_t1_ParamLimits

0xcc5f,	// (0x00080c8a) scroll_navstr_pane_t1

0x46dd,	// (0x00078708) bg_button_pane_cp014

0x46dd,	// (0x00078708) bg_button_pane_cp030

0x5cbb,	// (0x00079ce6) list_double_fisheye_pane_g4_ParamLimits

0x5cbb,	// (0x00079ce6) list_double_fisheye_pane_g4

0x5cc7,	// (0x00079cf2) list_double_fisheye_pane_g5_ParamLimits

0x5cc7,	// (0x00079cf2) list_double_fisheye_pane_g5

0x3230,	// (0x0007725b) sp_fs_scroll_pane_cp03

0x45c6,	// (0x000785f1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x45d2,	// (0x000785fd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc35,	// (0x00083c60) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc9d7,	// (0x00080a02) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x469a,	// (0x000786c5) sp_fs_scroll_pane_cp02

0x0972,	// (0x0007499d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0972,	// (0x0007499d) popup_sp_fs_calendar_preview_list_single_pane

0xee29,	// (0x00082e54) main_cam6_pano_pane

0xee8a,	// (0x00082eb5) main_mup3_pane_ParamLimits

0xee29,	// (0x00082e54) main_phacti_pane

0xc496,	// (0x000804c1) bg_button_pane_cp11

0xc4ae,	// (0x000804d9) main_mobtv_info_pane_g2_ParamLimits

0xc4ae,	// (0x000804d9) main_mobtv_info_pane_g2

0x0001,

0xfb95,	// (0x00083bc0) main_mobtv_info_pane_g_ParamLimits

0xfb95,	// (0x00083bc0) main_mobtv_info_pane_g

0xc660,	// (0x0008068b) sc_clock_pane_t5_ParamLimits

0xc660,	// (0x0008068b) sc_clock_pane_t5

0xc701,	// (0x0008072c) main_radioblah_pane_g1_ParamLimits

0x43e0,	// (0x0007840b) main_radioblah_pane_t3_ParamLimits

0x43e0,	// (0x0007840b) main_radioblah_pane_t3

0x43f8,	// (0x00078423) main_radioblah_pane_t4_ParamLimits

0x43f8,	// (0x00078423) main_radioblah_pane_t4

0xc71f,	// (0x0008074a) main_radioblah_text_pane_ParamLimits

0xc71f,	// (0x0008074a) main_radioblah_text_pane

0xc72c,	// (0x00080757) main_radioblah_info_pane_g1_ParamLimits

0xc7c1,	// (0x000807ec) main_radioblah_info_pane_t4_ParamLimits

0xc7c1,	// (0x000807ec) main_radioblah_info_pane_t4

0xee8a,	// (0x00082eb5) main_sp_fs_calendar_pane

0xcc71,	// (0x00080c9c) main_phacti_pane_g1

0xcc79,	// (0x00080ca4) phacti_note_pane_ParamLimits

0xcc79,	// (0x00080ca4) phacti_note_pane

0x474f,	// (0x0007877a) phacti_term_pane_ParamLimits

0x474f,	// (0x0007877a) phacti_term_pane

0x4764,	// (0x0007878f) phacti_note_pane_t1_ParamLimits

0x4764,	// (0x0007878f) phacti_note_pane_t1

0x5ff5,	// (0x0007a020) phacti_term_pane_g1

0x5ffd,	// (0x0007a028) phacti_term_pane_t1_ParamLimits

0x5ffd,	// (0x0007a028) phacti_term_pane_t1

0x477b,	// (0x000787a6) popup_sp_fs_calendar_preview_list_single_pane_g1

0x4783,	// (0x000787ae) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc91,	// (0x00083cbc) popup_sp_fs_calendar_preview_list_single_pane_g

0x478b,	// (0x000787b6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x478b,	// (0x000787b6) popup_sp_fs_calendar_preview_list_single_pane_t1

0x47a1,	// (0x000787cc) aid_popup_sp_fs_bg_corner_pane

0x0a60,	// (0x00074a8b) popup_sp_fs_calendar_preview_bg_pane_g1

0xee29,	// (0x00082e54) popup_sp_fs_calendar_preview_bg_pane

0x47a9,	// (0x000787d4) popup_sp_fs_calendar_preview_list_pane

0x154d,	// (0x00075578) bg_main_sp_fs_cale_pane_ParamLimits

0x154d,	// (0x00075578) bg_main_sp_fs_cale_pane

0x6030,	// (0x0007a05b) listscroll_cale_mrui_pane_ParamLimits

0x6030,	// (0x0007a05b) listscroll_cale_mrui_pane

0x6045,	// (0x0007a070) listscroll_sp_fs_schedule_track_pane

0x604e,	// (0x0007a079) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x604e,	// (0x0007a079) main_sp_fs_ctrlbar_pane_cp01

0x47b1,	// (0x000787dc) main_sp_fs_ribbon_pane

0x6061,	// (0x0007a08c) popup_sp_fs_cale_preview_window

0xccdc,	// (0x00080d07) list_single_sp_fs_schedule_track_pane_ParamLimits

0xccdc,	// (0x00080d07) list_single_sp_fs_schedule_track_pane

0x07ef,	// (0x0007481a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x07ef,	// (0x0007481a) bg_sp_fs_highlight_list_pane_cp03

0xcd02,	// (0x00080d2d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd02,	// (0x00080d2d) list_single_sp_fs_schedule_track_pane_g1

0xcd0e,	// (0x00080d39) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd0e,	// (0x00080d39) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc96,	// (0x00083cc1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc96,	// (0x00083cc1) list_single_sp_fs_schedule_track_pane_g

0xcd1a,	// (0x00080d45) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd1a,	// (0x00080d45) list_single_sp_fs_schedule_track_pane_t1

0xcd32,	// (0x00080d5d) sp_fs_schedule_track_pane_ParamLimits

0xcd32,	// (0x00080d5d) sp_fs_schedule_track_pane

0x47b9,	// (0x000787e4) sp_fs_schedule_track_pane_g1

0x47c1,	// (0x000787ec) sp_fs_schedule_track_pane_g2

0x47c9,	// (0x000787f4) sp_fs_schedule_track_pane_g3

0x47d1,	// (0x000787fc) sp_fs_schedule_track_pane_g4

0x47d9,	// (0x00078804) sp_fs_schedule_track_pane_g5

0x0004,

0xfc9b,	// (0x00083cc6) sp_fs_schedule_track_pane_g

0x34dd,	// (0x00077508) bg_sp_fs_schedule_viewer_highlight_g1

0x0c7a,	// (0x00074ca5) bg_sp_fs_schedule_viewer_highlight_g2

0x34e5,	// (0x00077510) bg_sp_fs_schedule_viewer_highlight_g3

0x34ed,	// (0x00077518) bg_sp_fs_schedule_viewer_highlight_g4

0x3735,	// (0x00077760) bg_sp_fs_schedule_viewer_highlight_g5

0x34fd,	// (0x00077528) bg_sp_fs_schedule_viewer_highlight_g6

0x3505,	// (0x00077530) bg_sp_fs_schedule_viewer_highlight_g7

0x350d,	// (0x00077538) bg_sp_fs_schedule_viewer_highlight_g8

0x0c5a,	// (0x00074c85) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca6,	// (0x00083cd1) bg_sp_fs_schedule_viewer_highlight_g

0xee29,	// (0x00082e54) bg_main_sp_fs_ribbon_pane

0xcd42,	// (0x00080d6d) main_sp_fs_ribbon_pane_g1

0x47e1,	// (0x0007880c) main_sp_fs_ribbon_pane_t1

0xcd4b,	// (0x00080d76) main_sp_fs_ribbon_pane_t2

0x47f0,	// (0x0007881b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb9,	// (0x00083ce4) main_sp_fs_ribbon_pane_t

0x47ff,	// (0x0007882a) main_sp_fs_ribbon_scheduler_pane

0x4807,	// (0x00078832) bg_main_sp_fs_ribbon_pane_g1

0x4810,	// (0x0007883b) bg_main_sp_fs_ribbon_pane_g2

0x4819,	// (0x00078844) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcc0,	// (0x00083ceb) bg_main_sp_fs_ribbon_pane_g

0x4821,	// (0x0007884c) main_sp_fs_ribbon_scheduler_pane_g1

0x482a,	// (0x00078855) main_sp_fs_ribbon_scheduler_pane_g2

0x4833,	// (0x0007885e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc7,	// (0x00083cf2) main_sp_fs_ribbon_scheduler_pane_g

0x483c,	// (0x00078867) list_cale_mrui_pane

0xcd5a,	// (0x00080d85) sp_fs_scroll_pane_cp07_ParamLimits

0xcd5a,	// (0x00080d85) sp_fs_scroll_pane_cp07

0xcd76,	// (0x00080da1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcd76,	// (0x00080da1) bg_sp_fs_schedule_viewer_highlight

0x4849,	// (0x00078874) list_single_sp_fs_schedule_track_pane_cp01

0x4851,	// (0x0007887c) list_sp_fs_schedule_track_pane

0x4859,	// (0x00078884) sp_fs_scroll_pane_cp06_ParamLimits

0x4859,	// (0x00078884) sp_fs_scroll_pane_cp06

0x0a60,	// (0x00074a8b) bgmain_sp_fs_calendar_pane_g1

0x6073,	// (0x0007a09e) list_single_cale_mrui_pane_ParamLimits

0x6073,	// (0x0007a09e) list_single_cale_mrui_pane

0x60a1,	// (0x0007a0cc) list_single_cale_mrui_row_pane_ParamLimits

0x60a1,	// (0x0007a0cc) list_single_cale_mrui_row_pane

0x60ae,	// (0x0007a0d9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x60ae,	// (0x0007a0d9) list_single_cale_mrui_row_pane_g1

0x60e6,	// (0x0007a111) list_single_cale_mrui_row_pane_t1_ParamLimits

0x60e6,	// (0x0007a111) list_single_cale_mrui_row_pane_t1

0x60f8,	// (0x0007a123) list_single_cale_mrui_row_pane_t2_ParamLimits

0x60f8,	// (0x0007a123) list_single_cale_mrui_row_pane_t2

0x615e,	// (0x0007a189) list_single_cale_mrui_row_pane_t3_ParamLimits

0x615e,	// (0x0007a189) list_single_cale_mrui_row_pane_t3

0x618d,	// (0x0007a1b8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x618d,	// (0x0007a1b8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd5,	// (0x00083d00) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd5,	// (0x00083d00) list_single_cale_mrui_row_pane_t

0x61bc,	// (0x0007a1e7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x61bc,	// (0x0007a1e7) list_single_cmail_header_editor_pane_bg_cp01

0x61e4,	// (0x0007a20f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x61e4,	// (0x0007a20f) list_single_cmail_header_editor_pane_bg_cp02

0xcd83,	// (0x00080dae) main_radioblah_text_pane_t1_ParamLimits

0xcd83,	// (0x00080dae) main_radioblah_text_pane_t1

0x4878,	// (0x000788a3) cam6_indi_pane_cp01

0x4880,	// (0x000788ab) cam6_mode_pane_cp01

0x4888,	// (0x000788b3) cam6_pano_pane

0x4891,	// (0x000788bc) cam6_zoom_pane_cp01

0x4899,	// (0x000788c4) cam6_pano_image_pane

0x48a4,	// (0x000788cf) cam6_pano_pane_g1

0x4119,	// (0x00078144) cam6_pano_pane_g2

0x48ad,	// (0x000788d8) cam6_pano_pane_g3

0x48b6,	// (0x000788e1) cam6_pano_pane_g4

0x3188,	// (0x000771b3) cam6_pano_pane_g5

0x48bf,	// (0x000788ea) cam6_pano_pane_g6

0x48c9,	// (0x000788f4) cam6_pano_pane_g7

0x48d1,	// (0x000788fc) cam6_pano_pane_g8

0x48da,	// (0x00078905) cam6_pano_pane_g9

0x0008,

0xfcde,	// (0x00083d09) cam6_pano_pane_g

0xee29,	// (0x00082e54) main_browser_tag_pane

0x4730,	// (0x0007875b) grid_navstr_albumart_pane

0x48e5,	// (0x00078910) cell_navstr_albumart_pane_ParamLimits

0x48e5,	// (0x00078910) cell_navstr_albumart_pane

0x4905,	// (0x00078930) cell_navstr_albumart_pane_g1

0x2653,	// (0x0007667e) cell_navstr_albumart_pane_g2

0x2663,	// (0x0007668e) cell_navstr_albumart_pane_g3

0x265b,	// (0x00076686) cell_navstr_albumart_pane_g4

0x0003,

0xfcf1,	// (0x00083d1c) cell_navstr_albumart_pane_g

0xcd9e,	// (0x00080dc9) bt_list_pane_ParamLimits

0xcd9e,	// (0x00080dc9) bt_list_pane

0xcdbf,	// (0x00080dea) bt_list_pane_t1

0xcdce,	// (0x00080df9) bt_list_pane_t2

0x0001,

0xfcfa,	// (0x00083d25) bt_list_pane_t

0xee29,	// (0x00082e54) main_cale_prevew_pane

0xcddd,	// (0x00080e08) popup_cale_preview_window_ParamLimits

0xcddd,	// (0x00080e08) popup_cale_preview_window

0xee8a,	// (0x00082eb5) bg_popup_preview_window_pane_cp05_ParamLimits

0xee8a,	// (0x00082eb5) bg_popup_preview_window_pane_cp05

0x490d,	// (0x00078938) list_cale_preview_pane_ParamLimits

0x490d,	// (0x00078938) list_cale_preview_pane

0xcdf6,	// (0x00080e21) list_double_cale_preview_pane_ParamLimits

0xcdf6,	// (0x00080e21) list_double_cale_preview_pane

0xce08,	// (0x00080e33) list_single_cale_preview_pane_ParamLimits

0xce08,	// (0x00080e33) list_single_cale_preview_pane

0xce1c,	// (0x00080e47) list_single_cale_preview_pane_g1

0xce24,	// (0x00080e4f) list_single_cale_preview_pane_t1_ParamLimits

0xce24,	// (0x00080e4f) list_single_cale_preview_pane_t1

0xce39,	// (0x00080e64) list_double_cale_preview_pane_g1

0xce41,	// (0x00080e6c) list_double_cale_preview_pane_t1_ParamLimits

0xce41,	// (0x00080e6c) list_double_cale_preview_pane_t1

0xce56,	// (0x00080e81) list_double_cale_preview_pane_t2_ParamLimits

0xce56,	// (0x00080e81) list_double_cale_preview_pane_t2

0x0001,

0xfcff,	// (0x00083d2a) list_double_cale_preview_pane_t_ParamLimits

0xfcff,	// (0x00083d2a) list_double_cale_preview_pane_t

0xee29,	// (0x00082e54) main_ezdial_pane

0xee8a,	// (0x00082eb5) main_sp_fs_email_pane_ParamLimits

0xc950,	// (0x0008097b) cmail_ddmenu_btn01_pane_ParamLimits

0xc950,	// (0x0008097b) cmail_ddmenu_btn01_pane

0xc965,	// (0x00080990) cmail_ddmenu_btn02_pane_ParamLimits

0xc965,	// (0x00080990) cmail_ddmenu_btn02_pane

0xc97d,	// (0x000809a8) cmail_ddmenu_btn03_pane_ParamLimits

0xc97d,	// (0x000809a8) cmail_ddmenu_btn03_pane

0xca12,	// (0x00080a3d) main_sp_fs_ctrlbar_pane_ParamLimits

0xca28,	// (0x00080a53) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb55,	// (0x00080b80) list_cmail_body_pane_ParamLimits

0x46b0,	// (0x000786db) bg_button_pane_cp12

0x46b9,	// (0x000786e4) list_single_cmail_header_detail_pane_g3_ParamLimits

0x46b9,	// (0x000786e4) list_single_cmail_header_detail_pane_g3

0x5fba,	// (0x00079fe5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5fba,	// (0x00079fe5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc82,	// (0x00083cad) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc82,	// (0x00083cad) list_single_cmail_header_detail_pane_t

0x6012,	// (0x0007a03d) phacti_term_pane_t2_ParamLimits

0x6012,	// (0x0007a03d) phacti_term_pane_t2

0x0001,

0xfc8c,	// (0x00083cb7) phacti_term_pane_t_ParamLimits

0xfc8c,	// (0x00083cb7) phacti_term_pane_t

0x4919,	// (0x00078944) aid_size_list_single_double

0xce6e,	// (0x00080e99) popup_ezdial_listscroll_window

0xce92,	// (0x00080ebd) popup_number_entry_window_cp01

0x0a2a,	// (0x00074a55) bg_popup_call_pane_cp09

0x4925,	// (0x00078950) ezdial_list_pane

0x492d,	// (0x00078958) scroll_pane_cp23

0x2763,	// (0x0007678e) bg_button_pane_cp028_ParamLimits

0x2763,	// (0x0007678e) bg_button_pane_cp028

0xcea0,	// (0x00080ecb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcea0,	// (0x00080ecb) cmail_ddmenu_btn01_pane_g1

0xceb0,	// (0x00080edb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xceb0,	// (0x00080edb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd04,	// (0x00083d2f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd04,	// (0x00083d2f) cmail_ddmenu_btn01_pane_g

0x4935,	// (0x00078960) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4935,	// (0x00078960) cmail_ddmenu_btn01_pane_t1

0x154d,	// (0x00075578) bg_button_pane_cp029_ParamLimits

0x154d,	// (0x00075578) bg_button_pane_cp029

0xceb0,	// (0x00080edb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xceb0,	// (0x00080edb) cmail_ddmenu_btn02_pane_g1

0xcec8,	// (0x00080ef3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcec8,	// (0x00080ef3) cmail_ddmenu_btn02_pane_t1

0x07ef,	// (0x0007481a) bg_button_pane_cp031_ParamLimits

0x07ef,	// (0x0007481a) bg_button_pane_cp031

0xceb0,	// (0x00080edb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xceb0,	// (0x00080edb) cmail_ddmenu_btn03_pane_g1

0xcec8,	// (0x00080ef3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcec8,	// (0x00080ef3) cmail_ddmenu_btn03_pane_t1

0xa72c,	// (0x0007e757) cell_dialer2_keypad_pane_t1_ParamLimits

0xa746,	// (0x0007e771) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa746,	// (0x0007e771) cell_dialer2_keypad_pane_t1_copy1

0xc2d7,	// (0x00080302) ncimui_group_button_pane

0xee8a,	// (0x00082eb5) main_sp_fs_calendar_pane_ParamLimits

0xcb7d,	// (0x00080ba8) list_single_cmail_header_caption_pane_ParamLimits

0x6027,	// (0x0007a052) aid_recal_txt_sm_pane

0xee29,	// (0x00082e54) mian_recal_day_pane

0x6061,	// (0x0007a08c) popup_sp_fs_cale_preview_window_ParamLimits

0x494a,	// (0x00078975) list_recal_day_pane

0x621b,	// (0x0007a246) list_single_recal_day_pane_ParamLimits

0x621b,	// (0x0007a246) list_single_recal_day_pane

0x4971,	// (0x0007899c) list_single_recal_day_pane_g1_ParamLimits

0x4971,	// (0x0007899c) list_single_recal_day_pane_g1

0x622d,	// (0x0007a258) list_single_recal_day_pane_g2_ParamLimits

0x622d,	// (0x0007a258) list_single_recal_day_pane_g2

0x6239,	// (0x0007a264) list_single_recal_day_pane_g3_ParamLimits

0x6239,	// (0x0007a264) list_single_recal_day_pane_g3

0x6245,	// (0x0007a270) list_single_recal_day_pane_g4_ParamLimits

0x6245,	// (0x0007a270) list_single_recal_day_pane_g4

0x6253,	// (0x0007a27e) list_single_recal_day_pane_g5_ParamLimits

0x6253,	// (0x0007a27e) list_single_recal_day_pane_g5

0x6269,	// (0x0007a294) list_single_recal_day_pane_g6_ParamLimits

0x6269,	// (0x0007a294) list_single_recal_day_pane_g6

0x0004,

0xfd13,	// (0x00083d3e) list_single_recal_day_pane_g_ParamLimits

0xfd13,	// (0x00083d3e) list_single_recal_day_pane_g

0x627d,	// (0x0007a2a8) list_single_recal_day_pane_t1

0x628f,	// (0x0007a2ba) list_single_recal_day_pane_t2

0x0001,

0xfd1e,	// (0x00083d49) list_single_recal_day_pane_t

0xceec,	// (0x00080f17) ncimui_query_button_pane_ParamLimits

0xceec,	// (0x00080f17) ncimui_query_button_pane

0xcefc,	// (0x00080f27) ncimui_query_button_pane_t1_ParamLimits

0xcefc,	// (0x00080f27) ncimui_query_button_pane_t1

0xe608,	// (0x00082633) ncimui_query_button_pane_t2_ParamLimits

0xe608,	// (0x00082633) ncimui_query_button_pane_t2

0x0001,

0xfd23,	// (0x00083d4e) ncimui_query_button_pane_t_ParamLimits

0xfd23,	// (0x00083d4e) ncimui_query_button_pane_t

0xcf0f,	// (0x00080f3a) query_button_pane_ParamLimits

0xcf0f,	// (0x00080f3a) query_button_pane

0xee29,	// (0x00082e54) bg_button_pane_cp0028

0xe61b,	// (0x00082646) query_button_pane_t1

0x926b,	// (0x0007d296) main_tport_pane_ParamLimits

0xca5f,	// (0x00080a8a) bg_popup_window_pane_cp01_ParamLimits

0xca5f,	// (0x00080a8a) bg_popup_window_pane_cp01

0xca6d,	// (0x00080a98) heading_pane_cp08_ParamLimits

0xca6d,	// (0x00080a98) heading_pane_cp08

0xca7b,	// (0x00080aa6) heading_pane_cp07_ParamLimits

0xca7b,	// (0x00080aa6) heading_pane_cp07

0xcaea,	// (0x00080b15) cell_tport_appsw_pane_g2

0x0002,

0xfc6f,	// (0x00083c9a) cell_tport_appsw_pane_g

0x57b7,	// (0x000797e2) input_candi_list_open_g1

0x0e3d,	// (0x00074e68) list_cale_time_pane_g6_ParamLimits

0x0e3d,	// (0x00074e68) list_cale_time_pane_g6

0x970b,	// (0x0007d736) aid_size_touch_calib_1_ParamLimits

0x970b,	// (0x0007d736) aid_size_touch_calib_1

0x9717,	// (0x0007d742) aid_size_touch_calib_2_ParamLimits

0x9717,	// (0x0007d742) aid_size_touch_calib_2

0x9725,	// (0x0007d750) aid_size_touch_calib_3_ParamLimits

0x9725,	// (0x0007d750) aid_size_touch_calib_3

0x9735,	// (0x0007d760) aid_size_touch_calib_4_ParamLimits

0x9735,	// (0x0007d760) aid_size_touch_calib_4

0x9743,	// (0x0007d76e) main_touch_calib_button_group_pane_ParamLimits

0x9743,	// (0x0007d76e) main_touch_calib_button_group_pane

0x9751,	// (0x0007d77c) main_touch_calib_pane_g1_ParamLimits

0x975d,	// (0x0007d788) main_touch_calib_pane_g2_ParamLimits

0x9769,	// (0x0007d794) main_touch_calib_pane_g3_ParamLimits

0x9775,	// (0x0007d7a0) main_touch_calib_pane_g4_ParamLimits

0xf6b1,	// (0x000836dc) main_touch_calib_pane_g_ParamLimits

0x9781,	// (0x0007d7ac) main_touch_calib_pane_t1_ParamLimits

0x979a,	// (0x0007d7c5) main_touch_calib_pane_t2_ParamLimits

0x97b3,	// (0x0007d7de) main_touch_calib_pane_t3_ParamLimits

0x97c9,	// (0x0007d7f4) main_touch_calib_pane_t4_ParamLimits

0x97df,	// (0x0007d80a) main_touch_calib_pane_t5_ParamLimits

0xf6ba,	// (0x000836e5) main_touch_calib_pane_t_ParamLimits

0x2f4e,	// (0x00076f79) list_single_fp_cale_pane_g3_ParamLimits

0x2f4e,	// (0x00076f79) list_single_fp_cale_pane_g3

0xee8a,	// (0x00082eb5) bg_button_pane_cp012_ParamLimits

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp03_ParamLimits

0xb598,	// (0x0007f5c3) cell_vitu2_function_top_pane_g1_ParamLimits

0xee8a,	// (0x00082eb5) bg_vkb2_func_pane_cp04_ParamLimits

0xc25f,	// (0x0008028a) main_ncimui_button_group_pane_ParamLimits

0xc25f,	// (0x0008028a) main_ncimui_button_group_pane

0xc2c5,	// (0x000802f0) main_ncimui_pane_t3_ParamLimits

0xc2c5,	// (0x000802f0) main_ncimui_pane_t3

0x4746,	// (0x00078771) phacti_button_group_pane

0x4919,	// (0x00078944) aid_size_list_single_double_ParamLimits

0xce6e,	// (0x00080e99) popup_ezdial_listscroll_window_ParamLimits

0xce92,	// (0x00080ebd) popup_number_entry_window_cp01_ParamLimits

0xcf1c,	// (0x00080f47) phacti_button_pane_ParamLimits

0xcf1c,	// (0x00080f47) phacti_button_pane

0xee29,	// (0x00082e54) bg_button_pane_cp14

0xe629,	// (0x00082654) phacti_button_pane_t1

0xcf2d,	// (0x00080f58) main_touch_calib_button_pane_ParamLimits

0xcf2d,	// (0x00080f58) main_touch_calib_button_pane

0x086f,	// (0x0007489a) bg_button_pane_cp18_ParamLimits

0x086f,	// (0x0007489a) bg_button_pane_cp18

0xe637,	// (0x00082662) main_touch_calib_button_pane_t1_ParamLimits

0xe637,	// (0x00082662) main_touch_calib_button_pane_t1

0xe64d,	// (0x00082678) main_touch_calib_button_pane_t2_ParamLimits

0xe64d,	// (0x00082678) main_touch_calib_button_pane_t2

0x0001,

0xfd28,	// (0x00083d53) main_touch_calib_button_pane_t_ParamLimits

0xfd28,	// (0x00083d53) main_touch_calib_button_pane_t

0xee29,	// (0x00082e54) cell_ncimui_button_pane

0xee29,	// (0x00082e54) bg_button_pane_cp032

0xe66b,	// (0x00082696) cell_ncimui_button_pane_t1

0xa7a2,	// (0x0007e7cd) image3_infobar_pane_ParamLimits

0xa7a2,	// (0x0007e7cd) image3_infobar_pane

0xc682,	// (0x000806ad) fs_bigclock_status_pane_ParamLimits

0xc682,	// (0x000806ad) fs_bigclock_status_pane

0xc68f,	// (0x000806ba) main_fs_bigclock_clock_pane_ParamLimits

0xc68f,	// (0x000806ba) main_fs_bigclock_clock_pane

0xc6a3,	// (0x000806ce) main_fs_bigclock_indi_pane_ParamLimits

0xc6a3,	// (0x000806ce) main_fs_bigclock_indi_pane

0xc6cb,	// (0x000806f6) main_fs_bigclock_swipe_pane_ParamLimits

0xc6cb,	// (0x000806f6) main_fs_bigclock_swipe_pane

0xee29,	// (0x00082e54) main_fs_clock_dumped_data

0x4226,	// (0x00078251) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4226,	// (0x00078251) list_single_fs_bigclock_indicator_pane_g1

0x4242,	// (0x0007826d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4242,	// (0x0007826d) list_single_fs_bigclock_indicator_pane_g2

0x4285,	// (0x000782b0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4285,	// (0x000782b0) list_single_fs_bigclock_indicator_pane_g3

0x429f,	// (0x000782ca) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x429f,	// (0x000782ca) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc9,	// (0x00083bf4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc9,	// (0x00083bf4) list_single_fs_bigclock_indicator_pane_g

0x42ca,	// (0x000782f5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x42ca,	// (0x000782f5) list_single_fs_bigclock_indicator_pane_t1

0x42f2,	// (0x0007831d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x42f2,	// (0x0007831d) list_single_fs_bigclock_indicator_pane_t2

0x431a,	// (0x00078345) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x431a,	// (0x00078345) list_single_fs_bigclock_indicator_pane_t3

0x4342,	// (0x0007836d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4342,	// (0x0007836d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbd4,	// (0x00083bff) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbd4,	// (0x00083bff) list_single_fs_bigclock_indicator_pane_t

0xe679,	// (0x000826a4) image3_infobar_fav_pane_ParamLimits

0xe679,	// (0x000826a4) image3_infobar_fav_pane

0xe689,	// (0x000826b4) image3_infobar_loc_pane_ParamLimits

0xe689,	// (0x000826b4) image3_infobar_loc_pane

0xe69d,	// (0x000826c8) image3_infobar_time_pane_ParamLimits

0xe69d,	// (0x000826c8) image3_infobar_time_pane

0x0a60,	// (0x00074a8b) image3_infobar_time_pane_g1

0xe6ad,	// (0x000826d8) image3_infobar_time_pane_t1

0x0a60,	// (0x00074a8b) image3_infobar_loc_pane_g1

0xe6bb,	// (0x000826e6) image3_infobar_loc_pane_g2

0x0001,

0xfd2d,	// (0x00083d58) image3_infobar_loc_pane_g

0xe6c3,	// (0x000826ee) image3_infobar_loc_pane_t1

0x0a60,	// (0x00074a8b) image3_infobar_fav_pane_g1

0xe6d1,	// (0x000826fc) image3_infobar_fav_pane_g2

0x0001,

0xfd32,	// (0x00083d5d) image3_infobar_fav_pane_g

0xe6d9,	// (0x00082704) fs_bigclock_status_battery_pane

0xe6e2,	// (0x0008270d) fs_bigclock_status_signal_pane

0xe6eb,	// (0x00082716) fs_bigclock_status_title_pane

0xe6f4,	// (0x0008271f) fs_bigclock_status_signal_pane_g1

0xe6fd,	// (0x00082728) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd37,	// (0x00083d62) fs_bigclock_status_signal_pane_g

0xe705,	// (0x00082730) fs_bigclock_status_battery_pane_g1

0xe70e,	// (0x00082739) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd3c,	// (0x00083d67) fs_bigclock_status_battery_pane_g

0xe716,	// (0x00082741) fs_bigclock_status_title_pane_t1

0xcf3d,	// (0x00080f68) main_fs_bigclock_clock_pane_g1

0xcf3d,	// (0x00080f68) main_fs_bigclock_clock_pane_g2

0xcf4a,	// (0x00080f75) main_fs_bigclock_clock_pane_g3

0xcf4a,	// (0x00080f75) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd41,	// (0x00083d6c) main_fs_bigclock_clock_pane_g

0xcf56,	// (0x00080f81) main_fs_bigclock_clock_pane_t1

0xcf69,	// (0x00080f94) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd4a,	// (0x00083d75) main_fs_bigclock_clock_pane_t

0xe724,	// (0x0008274f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe724,	// (0x0008274f) list_single_fs_bigclock_indicator_pane

0xe735,	// (0x00082760) list_single_fs_bigclock_pane_ParamLimits

0xe735,	// (0x00082760) list_single_fs_bigclock_pane

0xe75b,	// (0x00082786) main_fs_bigclock_indicator_pane_t1

0xe76a,	// (0x00082795) list_single_fs_bigclock_pane_g1

0xe772,	// (0x0008279d) list_single_fs_bigclock_pane_t1

0x0a60,	// (0x00074a8b) main_fs_bigclock_swipe_pane_g1

0xe7b5,	// (0x000827e0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd5b,	// (0x00083d86) main_fs_bigclock_swipe_pane_g

0xe7bd,	// (0x000827e8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7bd,	// (0x000827e8) main_fs_bigclock_swipe_pane_t1

0x84eb,	// (0x0007c516) call_type_pane_ParamLimits

0xee29,	// (0x00082e54) main_btmg_pane

0x60da,	// (0x0007a105) list_single_cale_mrui_row_pane_g2_ParamLimits

0x60da,	// (0x0007a105) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcce,	// (0x00083cf9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcce,	// (0x00083cf9) list_single_cale_mrui_row_pane_g

0x620a,	// (0x0007a235) list_recal_vselct_arw_lo_pane

0x4969,	// (0x00078994) list_recal_vselct_arw_up_pane

0x6212,	// (0x0007a23d) list_recal_vselct_pane

0xcfc0,	// (0x00080feb) btmg_button_pane

0xcfcc,	// (0x00080ff7) main_btmg_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp044

0xe7da,	// (0x00082805) btmg_button_pane_t1

0x27f1,	// (0x0007681c) aid_listscroll_gen

0xee8a,	// (0x00082eb5) main_cntbar_detail_pane

0x4683,	// (0x000786ae) list_cmail_folder_pane

0x3230,	// (0x0007725b) sp_fs_scroll_pane_cp03_ParamLimits

0x62a1,	// (0x0007a2cc) list_single_fs_dyc_pane_cp01_ParamLimits

0x62a1,	// (0x0007a2cc) list_single_fs_dyc_pane_cp01

0xe7e8,	// (0x00082813) aid_size_cmail_indent

0x62cc,	// (0x0007a2f7) list_single_dyc_row_pane_cp01

0xcff4,	// (0x0008101f) cntbar_detail_list_pane_ParamLimits

0xcff4,	// (0x0008101f) cntbar_detail_list_pane

0xd02e,	// (0x00081059) main_cntbar_detail_cont_pane_ParamLimits

0xd02e,	// (0x00081059) main_cntbar_detail_cont_pane

0x84df,	// (0x0007c50a) scroll_pane_cp032_ParamLimits

0x84df,	// (0x0007c50a) scroll_pane_cp032

0xd03a,	// (0x00081065) cntbar_detail_list_event_pane_ParamLimits

0xd03a,	// (0x00081065) cntbar_detail_list_event_pane

0xd000,	// (0x0008102b) cntbar_detail_list_shct_pane

0x0cc8,	// (0x00074cf3) aid_list_gen

0xe7f1,	// (0x0008281c) aid_scroll

0xe7fa,	// (0x00082825) aid_size_touch_scroll_bar

0xd04e,	// (0x00081079) aid_list_double

0xd057,	// (0x00081082) aid_list_single

0x0c51,	// (0x00074c7c) aid_list_single_lg

0x62d5,	// (0x0007a300) aid_list_z_g_a_sm

0xd060,	// (0x0008108b) aid_list_z_g_d

0x62dd,	// (0x0007a308) aid_txt_z_prm

0x62eb,	// (0x0007a316) aid_txt_z_prm_cp01

0x62f9,	// (0x0007a324) aid_txt_z_sec

0xd068,	// (0x00081093) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd068,	// (0x00081093) main_cntbar_detail_cont_pane_g1

0xd075,	// (0x000810a0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd075,	// (0x000810a0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd60,	// (0x00083d8b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd60,	// (0x00083d8b) main_cntbar_detail_cont_pane_g

0xe803,	// (0x0008282e) main_cntbar_detail_cont_pane_t1

0xe811,	// (0x0008283c) main_cntbar_detail_cont_pane_t2

0xe81f,	// (0x0008284a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd65,	// (0x00083d90) main_cntbar_detail_cont_pane_t

0xd081,	// (0x000810ac) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd081,	// (0x000810ac) cell_cntbar_detail_list_shct_pane

0xe82d,	// (0x00082858) cntbar_detail_list_shct_pane_g1

0xe836,	// (0x00082861) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd6c,	// (0x00083d97) cntbar_detail_list_shct_pane_g

0xd095,	// (0x000810c0) cntbar_detail_list_event_pane_g1_ParamLimits

0xd095,	// (0x000810c0) cntbar_detail_list_event_pane_g1

0xd0a1,	// (0x000810cc) cntbar_detail_list_event_pane_g2_ParamLimits

0xd0a1,	// (0x000810cc) cntbar_detail_list_event_pane_g2

0x0005,

0xfd71,	// (0x00083d9c) cntbar_detail_list_event_pane_g_ParamLimits

0xfd71,	// (0x00083d9c) cntbar_detail_list_event_pane_g

0xd10d,	// (0x00081138) cntbar_detail_list_event_pane_t1_ParamLimits

0xd10d,	// (0x00081138) cntbar_detail_list_event_pane_t1

0xd122,	// (0x0008114d) cntbar_detail_list_event_pane_t2_ParamLimits

0xd122,	// (0x0008114d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd7e,	// (0x00083da9) cntbar_detail_list_event_pane_t_ParamLimits

0xfd7e,	// (0x00083da9) cntbar_detail_list_event_pane_t

0x0a60,	// (0x00074a8b) cell_cntbar_detail_list_shct_pane_g1

0x1418,	// (0x00075443) navi_pane_mv_g3

0xee8a,	// (0x00082eb5) main_cntbar_detail_pane_ParamLimits

0xee29,	// (0x00082e54) main_notif_wgt_pane

0xa42c,	// (0x0007e457) aid_tch_main_mp4_pane_g4

0xa68b,	// (0x0007e6b6) popup_slider_window_cp02

0x6200,	// (0x0007a22b) list_recal_day_event_pane

0xcfd4,	// (0x00080fff) cntbar_detail_btn_pane_ParamLimits

0xcfd4,	// (0x00080fff) cntbar_detail_btn_pane

0xcfe4,	// (0x0008100f) cntbar_detail_btn_pane_cp01_ParamLimits

0xcfe4,	// (0x0008100f) cntbar_detail_btn_pane_cp01

0xd000,	// (0x0008102b) cntbar_detail_list_shct_pane_ParamLimits

0xd00c,	// (0x00081037) cntbar_detail_pane_g1_ParamLimits

0xd00c,	// (0x00081037) cntbar_detail_pane_g1

0xd018,	// (0x00081043) cntbar_detail_pane_t1_ParamLimits

0xd018,	// (0x00081043) cntbar_detail_pane_t1

0xd0ad,	// (0x000810d8) cntbar_detail_list_event_pane_g3_ParamLimits

0xd0ad,	// (0x000810d8) cntbar_detail_list_event_pane_g3

0xd0c5,	// (0x000810f0) cntbar_detail_list_event_pane_g4_ParamLimits

0xd0c5,	// (0x000810f0) cntbar_detail_list_event_pane_g4

0xd0dd,	// (0x00081108) cntbar_detail_list_event_pane_g5_ParamLimits

0xd0dd,	// (0x00081108) cntbar_detail_list_event_pane_g5

0xd0f5,	// (0x00081120) cntbar_detail_list_event_pane_g6_ParamLimits

0xd0f5,	// (0x00081120) cntbar_detail_list_event_pane_g6

0xd137,	// (0x00081162) cntbar_detail_list_event_pane_t3_ParamLimits

0xd137,	// (0x00081162) cntbar_detail_list_event_pane_t3

0xd149,	// (0x00081174) popup_notif_wgt_window_ParamLimits

0xd149,	// (0x00081174) popup_notif_wgt_window

0xd159,	// (0x00081184) popup_submenu_window_cp01_ParamLimits

0xd159,	// (0x00081184) popup_submenu_window_cp01

0x0a2a,	// (0x00074a55) bg_popup_window_pane_cp10

0xe83f,	// (0x0008286a) listscroll_notif_wgt_pane

0xe851,	// (0x0008287c) list_notif_wgt_window

0xe85a,	// (0x00082885) scroll_pane_cp033

0xd167,	// (0x00081192) list_notif_wgt_row_pane_ParamLimits

0xd167,	// (0x00081192) list_notif_wgt_row_pane

0xe863,	// (0x0008288e) aid_size_list_notif_wgt_del

0xe870,	// (0x0008289b) list_notif_wgt_row_pane_g1

0xe87c,	// (0x000828a7) list_notif_wgt_row_pane_g2

0xe88b,	// (0x000828b6) list_notif_wgt_row_pane_g3

0x0002,

0xfd85,	// (0x00083db0) list_notif_wgt_row_pane_g

0xe898,	// (0x000828c3) list_notif_wgt_row_pane_t1

0xe8ae,	// (0x000828d9) list_notif_wgt_row_pane_t2

0xe8c0,	// (0x000828eb) list_notif_wgt_row_pane_t3

0x0002,

0xfd8c,	// (0x00083db7) list_notif_wgt_row_pane_t

0x374f,	// (0x0007777a) list_recal_day_event_pane_g1

0xe8d2,	// (0x000828fd) list_recal_day_event_pane_t1

0xee29,	// (0x00082e54) bg_button_pane_cp045

0xd179,	// (0x000811a4) cntbar_detail_btn_pane_t1

0x154d,	// (0x00075578) main_callh_pane_ParamLimits

0x154d,	// (0x00075578) main_callh_pane

0xee29,	// (0x00082e54) main_coverflow0_pane

0xee29,	// (0x00082e54) main_wgtman_pane

0xc6e3,	// (0x0008070e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc6e3,	// (0x0008070e) main_fs_bigclock_unlock_btn_pane

0xcae2,	// (0x00080b0d) bg_button_pane_cp16

0xcaf2,	// (0x00080b1d) cell_tport_appsw_pane_g3

0xd187,	// (0x000811b2) cf0_flow_pane_ParamLimits

0xd187,	// (0x000811b2) cf0_flow_pane

0xe8e1,	// (0x0008290c) listscroll_cf0_pane

0xe8ec,	// (0x00082917) main_cf0_pane_g1

0xd196,	// (0x000811c1) main_cf0_pane_t1_ParamLimits

0xd196,	// (0x000811c1) main_cf0_pane_t1

0xd1aa,	// (0x000811d5) main_cf0_pane_t2_ParamLimits

0xd1aa,	// (0x000811d5) main_cf0_pane_t2

0x0001,

0xfd98,	// (0x00083dc3) main_cf0_pane_t_ParamLimits

0xfd98,	// (0x00083dc3) main_cf0_pane_t

0xe8fe,	// (0x00082929) scroll_pane_cp11

0xd1be,	// (0x000811e9) cf0_flow_pane_g1

0xd1c6,	// (0x000811f1) cf0_flow_pane_g2

0x0001,

0xfd9d,	// (0x00083dc8) cf0_flow_pane_g

0xd1ce,	// (0x000811f9) cf0_flow_pane_t1

0xee29,	// (0x00082e54) main_call6_pane

0xee29,	// (0x00082e54) main_calllock_pane

0xd1dc,	// (0x00081207) call6_btn_grp_pane_ParamLimits

0xd1dc,	// (0x00081207) call6_btn_grp_pane

0xd1eb,	// (0x00081216) call6_pane_g1_ParamLimits

0xd1eb,	// (0x00081216) call6_pane_g1

0xd1fb,	// (0x00081226) popup_call6_1st_window_ParamLimits

0xd1fb,	// (0x00081226) popup_call6_1st_window

0xd209,	// (0x00081234) popup_call6_2nd_window_ParamLimits

0xd209,	// (0x00081234) popup_call6_2nd_window

0xd217,	// (0x00081242) cell_call6_btn_pane_ParamLimits

0xd217,	// (0x00081242) cell_call6_btn_pane

0x0a2a,	// (0x00074a55) bg_popup_call2_in_pane_cp03

0xe909,	// (0x00082934) popup_call6_1st_window_g1

0xe911,	// (0x0008293c) popup_call6_1st_window_g2

0xe919,	// (0x00082944) popup_call6_1st_window_g3

0x0002,

0xfda2,	// (0x00083dcd) popup_call6_1st_window_g

0xe921,	// (0x0008294c) popup_call6_1st_window_t1

0xe930,	// (0x0008295b) popup_call6_1st_window_t2

0xe93e,	// (0x00082969) popup_call6_1st_window_t3

0x0002,

0xfda9,	// (0x00083dd4) popup_call6_1st_window_t

0x0a2a,	// (0x00074a55) bg_popup_call2_in_pane_cp04

0xe94c,	// (0x00082977) popup_call6_2nd_window_g1

0xe954,	// (0x0008297f) popup_call6_2nd_window_g2

0xe95c,	// (0x00082987) popup_call6_2nd_window_g3

0x0002,

0xfdb0,	// (0x00083ddb) popup_call6_2nd_window_g

0xe964,	// (0x0008298f) popup_call6_2nd_window_t1

0xee29,	// (0x00082e54) bg_button_pane_cp15

0xe973,	// (0x0008299e) cell_call6_btn_pane_g1

0xeea1,	// (0x00082ecc) cell_call6_btn_pane_t1

0xd226,	// (0x00081251) listscroll_wgtman_pane_ParamLimits

0xd226,	// (0x00081251) listscroll_wgtman_pane

0xd242,	// (0x0008126d) wgtman_btn_pane_ParamLimits

0xd242,	// (0x0008126d) wgtman_btn_pane

0x122c,	// (0x00075257) aid_scroll_copy1

0xe97c,	// (0x000829a7) list_wgtman_pane

0xd277,	// (0x000812a2) wgtman_btn_pane_g1_ParamLimits

0xd277,	// (0x000812a2) wgtman_btn_pane_g1

0xd29f,	// (0x000812ca) wgtman_btn_pane_t1_ParamLimits

0xd29f,	// (0x000812ca) wgtman_btn_pane_t1

0xe986,	// (0x000829b1) wgtman_btn_pane_t2_ParamLimits

0xe986,	// (0x000829b1) wgtman_btn_pane_t2

0x0001,

0xfdb7,	// (0x00083de2) wgtman_btn_pane_t_ParamLimits

0xfdb7,	// (0x00083de2) wgtman_btn_pane_t

0xd2d6,	// (0x00081301) listrow_wgtman_pane_ParamLimits

0xd2d6,	// (0x00081301) listrow_wgtman_pane

0xd2f2,	// (0x0008131d) listrow_wgtman_pane_g1

0xd2ff,	// (0x0008132a) listrow_wgtman_pane_g2

0x0001,

0xfdbc,	// (0x00083de7) listrow_wgtman_pane_g

0x6307,	// (0x0007a332) listrow_wgtman_pane_t1

0x631f,	// (0x0007a34a) listrow_wgtman_pane_t2

0x0001,

0xfdc1,	// (0x00083dec) listrow_wgtman_pane_t

0x6345,	// (0x0007a370) wait_bar_pane_cp09

0xe99d,	// (0x000829c8) main_calllock_btn_pane

0xe9a7,	// (0x000829d2) main_calllock_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp17

0xe973,	// (0x0008299e) main_calllock_btn_pane_g1

0xe9af,	// (0x000829da) main_calllock_btn_pane_t1

0xee29,	// (0x00082e54) main_dialer3_pane

0xee29,	// (0x00082e54) main_fmrd2_pane

0x0a60,	// (0x00074a8b) main_fs_bigclock_unlock_btn_pane_g1

0xd325,	// (0x00081350) main_fs_bigclock_unlock_btn_pane_t1

0xd333,	// (0x0008135e) area_fmrd2_info_pane_ParamLimits

0xd333,	// (0x0008135e) area_fmrd2_info_pane

0xd341,	// (0x0008136c) area_fmrd2_visual_pane_ParamLimits

0xd341,	// (0x0008136c) area_fmrd2_visual_pane

0xd34f,	// (0x0008137a) fmrd2_indi_pane_ParamLimits

0xd34f,	// (0x0008137a) fmrd2_indi_pane

0xd35c,	// (0x00081387) area_fmrd2_visual_pane_g1

0xd364,	// (0x0008138f) area_fmrd2_visual_pane_t1

0xd374,	// (0x0008139f) area_fmrd2_visual_pane_t2

0xd384,	// (0x000813af) area_fmrd2_visual_pane_t3

0x0002,

0xfdcb,	// (0x00083df6) area_fmrd2_visual_pane_t

0xd394,	// (0x000813bf) area_fmrd2_info_pane_g1

0xd39c,	// (0x000813c7) area_fmrd2_info_pane_t1

0xd3ac,	// (0x000813d7) area_fmrd2_info_pane_t2

0xd3bc,	// (0x000813e7) area_fmrd2_info_pane_t3

0xd3cc,	// (0x000813f7) area_fmrd2_info_pane_t4

0x0003,

0xfdd2,	// (0x00083dfd) area_fmrd2_info_pane_t

0xd3da,	// (0x00081405) fmrd2_indi_pane_t1

0xd3ea,	// (0x00081415) fmrd2_indi_pane_t2

0xd3fa,	// (0x00081425) fmrd2_indi_pane_t3

0x0002,

0xfddb,	// (0x00083e06) fmrd2_indi_pane_t

0x42ae,	// (0x000782d9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x42ae,	// (0x000782d9) list_single_fs_bigclock_indicator_pane_g5

0x435f,	// (0x0007838a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x435f,	// (0x0007838a) list_single_fs_bigclock_indicator_pane_t5

0xcc8f,	// (0x00080cba) aid_cell_bcale_month_pane_ParamLimits

0xcc8f,	// (0x00080cba) aid_cell_bcale_month_pane

0xccad,	// (0x00080cd8) bcale_month_pane_ParamLimits

0xccad,	// (0x00080cd8) bcale_month_pane

0xcccb,	// (0x00080cf6) bcale_preview_pane_ParamLimits

0xcccb,	// (0x00080cf6) bcale_preview_pane

0xe772,	// (0x0008279d) list_single_fs_bigclock_pane_t1_ParamLimits

0xe791,	// (0x000827bc) list_single_fs_bigclock_pane_t2_ParamLimits

0xe791,	// (0x000827bc) list_single_fs_bigclock_pane_t2

0x0001,

0xfd56,	// (0x00083d81) list_single_fs_bigclock_pane_t_ParamLimits

0xfd56,	// (0x00083d81) list_single_fs_bigclock_pane_t

0xd31d,	// (0x00081348) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc6,	// (0x00083df1) main_fs_bigclock_unlock_btn_pane_g

0xd408,	// (0x00081433) aid_dia3_key_size_ParamLimits

0xd408,	// (0x00081433) aid_dia3_key_size

0xd414,	// (0x0008143f) aid_dia3_listrow_size_ParamLimits

0xd414,	// (0x0008143f) aid_dia3_listrow_size

0xd424,	// (0x0008144f) dia3_keypad_fun_pane_ParamLimits

0xd424,	// (0x0008144f) dia3_keypad_fun_pane

0xd436,	// (0x00081461) dia3_keypad_num_pane_ParamLimits

0xd436,	// (0x00081461) dia3_keypad_num_pane

0xd448,	// (0x00081473) dia3_listscroll_pane_ParamLimits

0xd448,	// (0x00081473) dia3_listscroll_pane

0xd456,	// (0x00081481) dia3_numentry_pane_ParamLimits

0xd456,	// (0x00081481) dia3_numentry_pane

0xe9be,	// (0x000829e9) dia3_list_pane

0xe9c9,	// (0x000829f4) scroll_pane_cp12

0xee29,	// (0x00082e54) bg_dia3_numentry_pane

0xd464,	// (0x0008148f) dia3_numentry_pane_t1

0xd473,	// (0x0008149e) cell_dia3_key_num_pane

0xd47b,	// (0x000814a6) cell_dia3_key0_fun_pane_ParamLimits

0xd47b,	// (0x000814a6) cell_dia3_key0_fun_pane

0xd488,	// (0x000814b3) cell_dia3_key1_fun_pane_ParamLimits

0xd488,	// (0x000814b3) cell_dia3_key1_fun_pane

0xd495,	// (0x000814c0) dia3_listrow_pane

0x3fd8,	// (0x00078003) bg_dia3_numentry_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp21

0xe9d4,	// (0x000829ff) cell_dia3_key_num_pane_t1

0xe9e2,	// (0x00082a0d) cell_dia3_key_num_pane_t2

0xe9f1,	// (0x00082a1c) cell_dia3_key_num_pane_t3

0xea00,	// (0x00082a2b) cell_dia3_key_num_pane_t4

0x0003,

0xfde2,	// (0x00083e0d) cell_dia3_key_num_pane_t

0xee29,	// (0x00082e54) bg_button_pane_cp19

0xd4a2,	// (0x000814cd) cell_dia3_key0_fun_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp20

0xd4aa,	// (0x000814d5) cell_dia3_key1_fun_pane_g1

0xd4b2,	// (0x000814dd) area_left_week_number_pane

0xd4c5,	// (0x000814f0) area_top_day_name_pane

0xd4d3,	// (0x000814fe) frame_month_view_pane

0xea0f,	// (0x00082a3a) grid_month_view_pane

0xd4e8,	// (0x00081513) cell_top_day_name_pane_ParamLimits

0xd4e8,	// (0x00081513) cell_top_day_name_pane

0xd502,	// (0x0008152d) cell_area_left_week_number_pane_ParamLimits

0xd502,	// (0x0008152d) cell_area_left_week_number_pane

0xd525,	// (0x00081550) cell_month_view_pane_ParamLimits

0xd525,	// (0x00081550) cell_month_view_pane

0xea1d,	// (0x00082a48) frm_month_g1

0xd551,	// (0x0008157c) frm_month_g2

0xd562,	// (0x0008158d) frm_month_g3

0xd573,	// (0x0008159e) frm_month_g4

0xd584,	// (0x000815af) frm_month_g5

0xd597,	// (0x000815c2) frm_month_g6

0xd5aa,	// (0x000815d5) frm_month_g7

0xea2a,	// (0x00082a55) frm_month_g8

0xd5bd,	// (0x000815e8) frm_month_g9

0xd5ca,	// (0x000815f5) frm_month_g10

0xd5d7,	// (0x00081602) frm_month_g11

0xd5e4,	// (0x0008160f) frm_month_g12

0xd5f1,	// (0x0008161c) frm_month_g13

0xd5fe,	// (0x00081629) frm_month_g14

0xd60d,	// (0x00081638) frm_month_g15

0xd61c,	// (0x00081647) frm_month_g16

0x000f,

0xfdeb,	// (0x00083e16) frm_month_g

0xea37,	// (0x00082a62) cell_top_day_name_pane_t1

0xd62b,	// (0x00081656) cell_area_left_week_number_pane_g1

0xd63a,	// (0x00081665) cell_area_left_week_number_pane_t1

0x07fd,	// (0x00074828) cell_month_view_pane_g1

0xd650,	// (0x0008167b) cell_month_view_pane_t1

0xee29,	// (0x00082e54) main_fps_pane

0x458e,	// (0x000785b9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x458e,	// (0x000785b9) cmail_ddmenu_btn02_pane_cp1

0x45aa,	// (0x000785d5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x45aa,	// (0x000785d5) cmail_ddmenu_btn02_pane_cp2

0xcebc,	// (0x00080ee7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcebc,	// (0x00080ee7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd09,	// (0x00083d34) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd09,	// (0x00083d34) cmail_ddmenu_btn02_pane_g

0xceda,	// (0x00080f05) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xceda,	// (0x00080f05) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd0e,	// (0x00083d39) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd0e,	// (0x00083d39) cmail_ddmenu_btn02_pane_t

0xd666,	// (0x00081691) fps_text_pane_ParamLimits

0xd666,	// (0x00081691) fps_text_pane

0xd673,	// (0x0008169e) main_fps_pane_g1_ParamLimits

0xd673,	// (0x0008169e) main_fps_pane_g1

0xd681,	// (0x000816ac) wait_bar_pane_cp010_ParamLimits

0xd681,	// (0x000816ac) wait_bar_pane_cp010

0xd68d,	// (0x000816b8) fps_text_pane_t1_ParamLimits

0xd68d,	// (0x000816b8) fps_text_pane_t1

0xab34,	// (0x0007eb5f) cam4_image_uncrop_pane_g1

0xab3d,	// (0x0007eb68) cam4_image_uncrop_pane_g2

0xab46,	// (0x0007eb71) cam4_image_uncrop_pane_g3

0xab4f,	// (0x0007eb7a) cam4_image_uncrop_pane_g4

0x0003,

0xf84d,	// (0x00083878) cam4_image_uncrop_pane_g

0xd495,	// (0x000814c0) dia3_listrow_pane_ParamLimits

0xee29,	// (0x00082e54) main_phob2_pane

0xcac4,	// (0x00080aef) cell_tport_appsw_pane_cp02_ParamLimits

0xcac4,	// (0x00080aef) cell_tport_appsw_pane_cp02

0xcad3,	// (0x00080afe) cell_tport_appsw_pane_cp03_ParamLimits

0xcad3,	// (0x00080afe) cell_tport_appsw_pane_cp03

0xee29,	// (0x00082e54) phob2_contact_card_pane

0xee29,	// (0x00082e54) phob2_listscroll_pane

0xea4a,	// (0x00082a75) phob2_list_pane

0xea52,	// (0x00082a7d) scroll_pane_cp034

0xd6a6,	// (0x000816d1) phob2_cc_data_pane_ParamLimits

0xd6a6,	// (0x000816d1) phob2_cc_data_pane

0xd6c0,	// (0x000816eb) phob2_cc_listscroll_pane_ParamLimits

0xd6c0,	// (0x000816eb) phob2_cc_listscroll_pane

0xd2d6,	// (0x00081301) list_double_large_graphic_phob2_pane_ParamLimits

0xd2d6,	// (0x00081301) list_double_large_graphic_phob2_pane

0xd6da,	// (0x00081705) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd6da,	// (0x00081705) list_double_large_graphic_phob2_pane_g1

0x6357,	// (0x0007a382) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6357,	// (0x0007a382) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe0c,	// (0x00083e37) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0c,	// (0x00083e37) list_double_large_graphic_phob2_pane_g

0x636f,	// (0x0007a39a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x636f,	// (0x0007a39a) list_double_large_graphic_phob2_pane_t1

0x6384,	// (0x0007a3af) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6384,	// (0x0007a3af) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe15,	// (0x00083e40) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe15,	// (0x00083e40) list_double_large_graphic_phob2_pane_t

0xee29,	// (0x00082e54) list_highlight_pane_cp024

0xea5a,	// (0x00082a85) phob2_cc_button_pane

0xd6f5,	// (0x00081720) phob2_cc_data_pane_g1_ParamLimits

0xd6f5,	// (0x00081720) phob2_cc_data_pane_g1

0xd704,	// (0x0008172f) phob2_cc_data_pane_g2_ParamLimits

0xd704,	// (0x0008172f) phob2_cc_data_pane_g2

0x0001,

0xfe1a,	// (0x00083e45) phob2_cc_data_pane_g_ParamLimits

0xfe1a,	// (0x00083e45) phob2_cc_data_pane_g

0xd713,	// (0x0008173e) phob2_cc_data_pane_t1_ParamLimits

0xd713,	// (0x0008173e) phob2_cc_data_pane_t1

0xd728,	// (0x00081753) phob2_cc_data_pane_t2_ParamLimits

0xd728,	// (0x00081753) phob2_cc_data_pane_t2

0xd73d,	// (0x00081768) phob2_cc_data_pane_t3_ParamLimits

0xd73d,	// (0x00081768) phob2_cc_data_pane_t3

0x0002,

0xfe1f,	// (0x00083e4a) phob2_cc_data_pane_t_ParamLimits

0xfe1f,	// (0x00083e4a) phob2_cc_data_pane_t

0xea62,	// (0x00082a8d) phob2_cc_list_pane_ParamLimits

0xea62,	// (0x00082a8d) phob2_cc_list_pane

0x37f0,	// (0x0007781b) scroll_pane_cp035_ParamLimits

0x37f0,	// (0x0007781b) scroll_pane_cp035

0xee8a,	// (0x00082eb5) bg_button_pane_cp033

0xea6e,	// (0x00082a99) phob2_cc_button_pane_g1

0xea7a,	// (0x00082aa5) phob2_cc_button_pane_t1

0xea8f,	// (0x00082aba) phob2_cc_button_pane_t2

0x0001,

0xfe26,	// (0x00083e51) phob2_cc_button_pane_t

0xd752,	// (0x0008177d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd752,	// (0x0008177d) list_double_large_graphic_phob2_cc_pane

0xd7c6,	// (0x000817f1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd7c6,	// (0x000817f1) list_double_large_graphic_phob2_cc_pane_g1

0x6399,	// (0x0007a3c4) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6399,	// (0x0007a3c4) list_double_large_graphic_phob2_cc_pane_g2

0x63a8,	// (0x0007a3d3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x63a8,	// (0x0007a3d3) list_double_large_graphic_phob2_cc_pane_g3

0x63b7,	// (0x0007a3e2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x63b7,	// (0x0007a3e2) list_double_large_graphic_phob2_cc_pane_g4

0x63c8,	// (0x0007a3f3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x63c8,	// (0x0007a3f3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe2b,	// (0x00083e56) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe2b,	// (0x00083e56) list_double_large_graphic_phob2_cc_pane_g

0x63d7,	// (0x0007a402) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x63d7,	// (0x0007a402) list_double_large_graphic_phob2_cc_pane_t1

0x6400,	// (0x0007a42b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6400,	// (0x0007a42b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe36,	// (0x00083e61) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe36,	// (0x00083e61) list_double_large_graphic_phob2_cc_pane_t

0xeaa1,	// (0x00082acc) list_highlight_pane_cp025_ParamLimits

0xeaa1,	// (0x00082acc) list_highlight_pane_cp025

0xee8a,	// (0x00082eb5) bg_button_pane_cp033_ParamLimits

0xea6e,	// (0x00082a99) phob2_cc_button_pane_g1_ParamLimits

0xea7a,	// (0x00082aa5) phob2_cc_button_pane_t1_ParamLimits

0xea8f,	// (0x00082aba) phob2_cc_button_pane_t2_ParamLimits

0xfe26,	// (0x00083e51) phob2_cc_button_pane_t_ParamLimits

0x671a,	// (0x0007a745) popup_wgtman_window

0x3609,	// (0x00077634) scroll_pane_cp038

0xd25f,	// (0x0008128a) wgtman_btn_pane_cp_01_ParamLimits

0xd25f,	// (0x0008128a) wgtman_btn_pane_cp_01

0xeaaf,	// (0x00082ada) wgtman_content_pane

0xeab8,	// (0x00082ae3) wgtman_heading_pane

0xee29,	// (0x00082e54) bg_heading_pane_cp02

0xeac1,	// (0x00082aec) wgtman_heading_pane_g1

0xeac9,	// (0x00082af4) wgtman_heading_pane_t1

0xead7,	// (0x00082b02) scroll_pane_cp036

0xeadf,	// (0x00082b0a) wgtman_list_pane

0x444a,	// (0x00078475) wgtman_list_pane_t1_ParamLimits

0x444a,	// (0x00078475) wgtman_list_pane_t1

0xaa93,	// (0x0007eabe) cam4_grid_pane

0x5a03,	// (0x00079a2e) bg_button_pane_cp015_ParamLimits

0xb751,	// (0x0007f77c) bg_button_pane_cp016_ParamLimits

0xb75d,	// (0x0007f788) bg_button_pane_cp017_ParamLimits

0xb778,	// (0x0007f7a3) popup_vitu2_query_window_g3_ParamLimits

0xb778,	// (0x0007f7a3) popup_vitu2_query_window_g3

0x5ac2,	// (0x00079aed) popup_vitu2_query_window_t6_ParamLimits

0x5ac2,	// (0x00079aed) popup_vitu2_query_window_t6

0x5aed,	// (0x00079b18) popup_vitu2_query_window_t7_ParamLimits

0x5aed,	// (0x00079b18) popup_vitu2_query_window_t7

0x425c,	// (0x00078287) cam4_grid_pane_g1

0x4265,	// (0x00078290) cam4_grid_pane_g2

0xeae7,	// (0x00082b12) cam4_grid_pane_g3

0xeaf0,	// (0x00082b1b) cam4_grid_pane_g4

0x0003,

0xfe3b,	// (0x00083e66) cam4_grid_pane_g

0x7264,	// (0x0007b28f) aid_placing_vt_slider_lsc_ParamLimits

0x75a4,	// (0x0007b5cf) vidtel_button_pane_ParamLimits

0x75a4,	// (0x0007b5cf) vidtel_button_pane

0xee29,	// (0x00082e54) bg_button_pane_cp034

0xeafb,	// (0x00082b26) vidtel_button_pane_g1

0xeb03,	// (0x00082b2e) vidtel_button_pane_t1

0x372d,	// (0x00077758) aid_size_vtel_slider_touch

0x37f0,	// (0x0007781b) scroll_pane_cp039

0xc420,	// (0x0008044b) ncim_query_button_pane_cp01_ParamLimits

0xc43f,	// (0x0008046a) ncimui_query_pane_g1_ParamLimits

0xee8a,	// (0x00082eb5) input_focus_pane_cp012_ParamLimits

0x401e,	// (0x00078049) ncim_query_entry_pane_t1_ParamLimits

0x37f0,	// (0x0007781b) scroll_pane_cp039_ParamLimits

0x1303,	// (0x0007532e) navi_pane_bcale_mc_g1

0x130b,	// (0x00075336) navi_pane_bcale_mc_t1

0x45de,	// (0x00078609) main_sp_fs_email_pane_g1

0x45ea,	// (0x00078615) main_sp_fs_email_pane_g2

0x0001,

0xfc3e,	// (0x00083c69) main_sp_fs_email_pane_g

0x486b,	// (0x00078896) list_single_cale_mrui_row_pane_g3_ParamLimits

0x486b,	// (0x00078896) list_single_cale_mrui_row_pane_g3

0x625f,	// (0x0007a28a) list_single_recal_day_pane_g5_event_pane

0x6275,	// (0x0007a2a0) list_single_recal_day_pane_g7

0xeb19,	// (0x00082b44) list_recal_day_event_pane_cp01

0xeb22,	// (0x00082b4d) list_recal_vselct_arw_lo_pane_cp01

0xeb2a,	// (0x00082b55) list_recal_vselct_arw_up_pane_cp01

0xeb32,	// (0x00082b5d) list_recal_vselct_pane_cp01

0x374f,	// (0x0007777a) list_recal_day_event_pane_cp01_g1

0x6429,	// (0x0007a454) list_recal_day_event_pane_cp01_t1

0x627d,	// (0x0007a2a8) list_single_recal_day_pane_t1_ParamLimits

0x628f,	// (0x0007a2ba) list_single_recal_day_pane_t2_ParamLimits

0xfd1e,	// (0x00083d49) list_single_recal_day_pane_t_ParamLimits

0x0782,	// (0x000747ad) bg_notes_pane_ParamLimits

0x084d,	// (0x00074878) list_notes_pane_ParamLimits

0x691f,	// (0x0007a94a) scroll_pane_cp06_ParamLimits

0x086f,	// (0x0007489a) main_notes_pane_ParamLimits

0xee8a,	// (0x00082eb5) main_welc_pane

0xd7f9,	// (0x00081824) main_welc_body_pane_ParamLimits

0xd7f9,	// (0x00081824) main_welc_body_pane

0xd812,	// (0x0008183d) main_welc_opti_pane_ParamLimits

0xd812,	// (0x0008183d) main_welc_opti_pane

0xd86d,	// (0x00081898) main_welc_pane_t1_ParamLimits

0xd86d,	// (0x00081898) main_welc_pane_t1

0xda03,	// (0x00081a2e) main_welc_body_row_pane_ParamLimits

0xda03,	// (0x00081a2e) main_welc_body_row_pane

0x07ef,	// (0x0007481a) main_welc_opti_row_pane_ParamLimits

0x07ef,	// (0x0007481a) main_welc_opti_row_pane

0xeb4c,	// (0x00082b77) main_welc_opti_row_pane_g1

0xda2c,	// (0x00081a57) main_welc_opti_row_pane_t1

0xeb54,	// (0x00082b7f) main_welc_body_row_pane_t1

0xe849,	// (0x00082874) popup_notif_wgt_heading_pane

0xe863,	// (0x0008288e) aid_size_list_notif_wgt_del_ParamLimits

0xe870,	// (0x0008289b) list_notif_wgt_row_pane_g1_ParamLimits

0xe87c,	// (0x000828a7) list_notif_wgt_row_pane_g2_ParamLimits

0xe88b,	// (0x000828b6) list_notif_wgt_row_pane_g3_ParamLimits

0xfd85,	// (0x00083db0) list_notif_wgt_row_pane_g_ParamLimits

0xe898,	// (0x000828c3) list_notif_wgt_row_pane_t1_ParamLimits

0xe8ae,	// (0x000828d9) list_notif_wgt_row_pane_t2_ParamLimits

0xe8c0,	// (0x000828eb) list_notif_wgt_row_pane_t3_ParamLimits

0xfd8c,	// (0x00083db7) list_notif_wgt_row_pane_t_ParamLimits

0xd2f2,	// (0x0008131d) listrow_wgtman_pane_g1_ParamLimits

0xd2ff,	// (0x0008132a) listrow_wgtman_pane_g2_ParamLimits

0xfdbc,	// (0x00083de7) listrow_wgtman_pane_g_ParamLimits

0x6307,	// (0x0007a332) listrow_wgtman_pane_t1_ParamLimits

0x631f,	// (0x0007a34a) listrow_wgtman_pane_t2_ParamLimits

0xfdc1,	// (0x00083dec) listrow_wgtman_pane_t_ParamLimits

0x6345,	// (0x0007a370) wait_bar_pane_cp09_ParamLimits

0xee29,	// (0x00082e54) bg_popup_heading_pane_cp02

0xeb63,	// (0x00082b8e) popup_notif_wgt_heading_pane_g1

0xeb6b,	// (0x00082b96) popup_notif_wgt_heading_pane_t1

0xee29,	// (0x00082e54) main_vids_pane

0xee29,	// (0x00082e54) vids_listscroll_pane

0xda3b,	// (0x00081a66) scroll_pane_cp040

0xee29,	// (0x00082e54) vids_list_pane

0xda46,	// (0x00081a71) vids_list_double_pane_ParamLimits

0xda46,	// (0x00081a71) vids_list_double_pane

0xda5e,	// (0x00081a89) vids_list_double_pane_g1

0xda67,	// (0x00081a92) vids_list_double_pane_t1

0xda77,	// (0x00081aa2) vids_list_double_pane_t2

0x0001,

0xfe5a,	// (0x00083e85) vids_list_double_pane_t

0xee8a,	// (0x00082eb5) main_ncimui_pane_ParamLimits

0xc277,	// (0x000802a2) main_ncimui_pane_g1_ParamLimits

0xc283,	// (0x000802ae) main_ncimui_pane_g2_ParamLimits

0xc283,	// (0x000802ae) main_ncimui_pane_g2

0x0001,

0xfb3f,	// (0x00083b6a) main_ncimui_pane_g_ParamLimits

0xfb3f,	// (0x00083b6a) main_ncimui_pane_g

0xd82b,	// (0x00081856) main_welc_pane_g1_ParamLimits

0xd82b,	// (0x00081856) main_welc_pane_g1

0xd837,	// (0x00081862) main_welc_pane_g2_ParamLimits

0xd837,	// (0x00081862) main_welc_pane_g2

0x0003,

0xfe44,	// (0x00083e6f) main_welc_pane_g_ParamLimits

0xfe44,	// (0x00083e6f) main_welc_pane_g

0x0782,	// (0x000747ad) listscroll_mce_pane_ParamLimits

0x1458,	// (0x00075483) wait_bar_pane_cp10

0x27f9,	// (0x00076824) main_cale_day_pane_ParamLimits

0x27f9,	// (0x00076824) main_cale_week_pane_ParamLimits

0x0782,	// (0x000747ad) main_messa_pane_ParamLimits

0x9ee2,	// (0x0007df0d) main_clock2_btn_pane_ParamLimits

0x9ee2,	// (0x0007df0d) main_clock2_btn_pane

0x2fc8,	// (0x00076ff3) main_clock2_btn_pane_cp01_ParamLimits

0x2fc8,	// (0x00076ff3) main_clock2_btn_pane_cp01

0x483c,	// (0x00078867) list_cale_mrui_pane_ParamLimits

0xe8f6,	// (0x00082921) main_cf0_pane_g2

0x0001,

0xfd93,	// (0x00083dbe) main_cf0_pane_g

0xd4b2,	// (0x000814dd) area_left_week_number_pane_ParamLimits

0xd4c5,	// (0x000814f0) area_top_day_name_pane_ParamLimits

0xd4d3,	// (0x000814fe) frame_month_view_pane_ParamLimits

0xea0f,	// (0x00082a3a) grid_month_view_pane_ParamLimits

0xea1d,	// (0x00082a48) frm_month_g1_ParamLimits

0xd551,	// (0x0008157c) frm_month_g2_ParamLimits

0xd562,	// (0x0008158d) frm_month_g3_ParamLimits

0xd573,	// (0x0008159e) frm_month_g4_ParamLimits

0xd584,	// (0x000815af) frm_month_g5_ParamLimits

0xd597,	// (0x000815c2) frm_month_g6_ParamLimits

0xd5aa,	// (0x000815d5) frm_month_g7_ParamLimits

0xea2a,	// (0x00082a55) frm_month_g8_ParamLimits

0xd5bd,	// (0x000815e8) frm_month_g9_ParamLimits

0xd5ca,	// (0x000815f5) frm_month_g10_ParamLimits

0xd5d7,	// (0x00081602) frm_month_g11_ParamLimits

0xd5e4,	// (0x0008160f) frm_month_g12_ParamLimits

0xd5f1,	// (0x0008161c) frm_month_g13_ParamLimits

0xd5fe,	// (0x00081629) frm_month_g14_ParamLimits

0xd60d,	// (0x00081638) frm_month_g15_ParamLimits

0xd61c,	// (0x00081647) frm_month_g16_ParamLimits

0xfdeb,	// (0x00083e16) frm_month_g_ParamLimits

0xea37,	// (0x00082a62) cell_top_day_name_pane_t1_ParamLimits

0xd62b,	// (0x00081656) cell_area_left_week_number_pane_g1_ParamLimits

0xd63a,	// (0x00081665) cell_area_left_week_number_pane_t1_ParamLimits

0x07fd,	// (0x00074828) cell_month_view_pane_g1_ParamLimits

0xd650,	// (0x0008167b) cell_month_view_pane_t1_ParamLimits

0x077a,	// (0x000747a5) main_clock2_btn_pane_g1

0xeb79,	// (0x00082ba4) main_clock2_btn_pane_t1

0xee8a,	// (0x00082eb5) listscroll_cmail_pane_ParamLimits

0x45de,	// (0x00078609) main_sp_fs_email_pane_g1_ParamLimits

0x45ea,	// (0x00078615) main_sp_fs_email_pane_g2_ParamLimits

0xfc3e,	// (0x00083c69) main_sp_fs_email_pane_g_ParamLimits

0x494a,	// (0x00078975) list_recal_day_pane_ParamLimits

0x495b,	// (0x00078986) mian_recal_day_pane_t1

0x5e5a,	// (0x00079e85) list_single_dyc_row_text_pane_t4_ParamLimits

0x5e5a,	// (0x00079e85) list_single_dyc_row_text_pane_t4

0x5e91,	// (0x00079ebc) list_single_dyc_row_text_pane_t5_ParamLimits

0x5e91,	// (0x00079ebc) list_single_dyc_row_text_pane_t5

0x5f07,	// (0x00079f32) list_single_dyc_row_text_pane_t6_ParamLimits

0x5f07,	// (0x00079f32) list_single_dyc_row_text_pane_t6

0x841d,	// (0x0007c448) aid_mgn_list_cale_time_pane

0xee8a,	// (0x00082eb5) main_gallery2_pane_ParamLimits

0x2fde,	// (0x00077009) main_clock2_pane_cp01_t1

0x2fec,	// (0x00077017) main_clock2_pane_cp01_t3

0x0001,

0xf724,	// (0x0008374f) main_clock2_pane_cp01_t

0x6d74,	// (0x0007ad9f) cale_week_scroll_pane_g16_ParamLimits

0x6d74,	// (0x0007ad9f) cale_week_scroll_pane_g16

0x0a2a,	// (0x00074a55) vorec_slider_pane

0xeb03,	// (0x00082b2e) vidtel_button_pane_t1_ParamLimits

0xcf3d,	// (0x00080f68) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcf3d,	// (0x00080f68) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcf4a,	// (0x00080f75) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcf4a,	// (0x00080f75) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd41,	// (0x00083d6c) main_fs_bigclock_clock_pane_g_ParamLimits

0xcf56,	// (0x00080f81) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcf69,	// (0x00080f94) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd4a,	// (0x00083d75) main_fs_bigclock_clock_pane_t_ParamLimits

0x9887,	// (0x0007d8b2) main_mup3_lyrics_pane_ParamLimits

0x9887,	// (0x0007d8b2) main_mup3_lyrics_pane

0xdaaa,	// (0x00081ad5) main_mup3_lyrics_pane_t1_ParamLimits

0xdaaa,	// (0x00081ad5) main_mup3_lyrics_pane_t1

0xa416,	// (0x0007e441) aid_main_mp4_pane_t1_area

0xa420,	// (0x0007e44b) aid_main_mp4_pane_t2_area

0xa51f,	// (0x0007e54a) main_mp4_pane_g7_ParamLimits

0xa51f,	// (0x0007e54a) main_mp4_pane_g7

0xa52b,	// (0x0007e556) main_mp4_pane_g8_ParamLimits

0xa52b,	// (0x0007e556) main_mp4_pane_g8

0xa93d,	// (0x0007e968) aid_call6_pane_g1_size

0xd798,	// (0x000817c3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd798,	// (0x000817c3) list_double_large_graphic_phob2_other_pane

0x0ddc,	// (0x00074e07) list_double_large_graphic_phob2_other_pane_g1

0xee29,	// (0x00082e54) list_highlight_pane_cp026

0xee8a,	// (0x00082eb5) main_welc_pane_ParamLimits

0xc9a5,	// (0x000809d0) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc9a5,	// (0x000809d0) main_sp_fs_ctrlbar_pane_g3

0xc9bd,	// (0x000809e8) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc9bd,	// (0x000809e8) main_sp_fs_ctrlbar_pane_g4

0xc9ef,	// (0x00080a1a) toolbar2_fixed_button_pane_cp01

0xc9fa,	// (0x00080a25) toolbar2_fixed_button_pane_cp02

0xca05,	// (0x00080a30) toolbar2_fixed_button_pane_cp03

0xd7e9,	// (0x00081814) list_welc_entry_pane_ParamLimits

0xd7e9,	// (0x00081814) list_welc_entry_pane

0xd845,	// (0x00081870) main_welc_pane_g3_ParamLimits

0xd845,	// (0x00081870) main_welc_pane_g3

0xd887,	// (0x000818b2) main_welc_pane_t2_ParamLimits

0xd887,	// (0x000818b2) main_welc_pane_t2

0xd89b,	// (0x000818c6) main_welc_pane_t3_ParamLimits

0xd89b,	// (0x000818c6) main_welc_pane_t3

0x0005,

0xfe4d,	// (0x00083e78) main_welc_pane_t_ParamLimits

0xfe4d,	// (0x00083e78) main_welc_pane_t

0xd997,	// (0x000819c2) welc_button_pane_ParamLimits

0xd997,	// (0x000819c2) welc_button_pane

0xd9f5,	// (0x00081a20) welc_service_logo_pane_ParamLimits

0xd9f5,	// (0x00081a20) welc_service_logo_pane

0xdae0,	// (0x00081b0b) list_single_welc_entry_pane_ParamLimits

0xdae0,	// (0x00081b0b) list_single_welc_entry_pane

0xdaf1,	// (0x00081b1c) list_single_welc_entry_pane_g1

0xdaf9,	// (0x00081b24) list_single_welc_entry_pane_t1

0xdb07,	// (0x00081b32) list_single_welc_entry_pane_t2

0x0001,

0xfe5f,	// (0x00083e8a) list_single_welc_entry_pane_t

0xee29,	// (0x00082e54) bg_button_pane_cp035

0xdb15,	// (0x00081b40) welc_button_pane_t1

0xeb87,	// (0x00082bb2) welc_service_logo_pane_g1

0xeb90,	// (0x00082bbb) welc_service_logo_pane_g2

0x0001,

0xfe64,	// (0x00083e8f) welc_service_logo_pane_g

0xee29,	// (0x00082e54) main_int_radio_pane

0x3ebc,	// (0x00077ee7) list_single_fs_dyc_pane_g1

0x6363,	// (0x0007a38e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x6363,	// (0x0007a38e) list_double_large_graphic_phob2_pane_g3

0xd6e7,	// (0x00081712) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd6e7,	// (0x00081712) list_double_large_graphic_phob2_pane_g4

0xdb23,	// (0x00081b4e) main_int_radio1_pane_ParamLimits

0xdb23,	// (0x00081b4e) main_int_radio1_pane

0xeb99,	// (0x00082bc4) find_pane_cp02

0xdb35,	// (0x00081b60) input_focus_pane_cp12_ParamLimits

0xdb35,	// (0x00081b60) input_focus_pane_cp12

0xdb41,	// (0x00081b6c) input_focus_pane_cp13_ParamLimits

0xdb41,	// (0x00081b6c) input_focus_pane_cp13

0xdb59,	// (0x00081b84) input_focus_pane_cp14_ParamLimits

0xdb59,	// (0x00081b84) input_focus_pane_cp14

0xeba2,	// (0x00082bcd) int_radio1_listscroll_pane

0xdb71,	// (0x00081b9c) main_int_radio1_pane_g1_ParamLimits

0xdb71,	// (0x00081b9c) main_int_radio1_pane_g1

0xdb81,	// (0x00081bac) main_int_radio1_pane_t1_ParamLimits

0xdb81,	// (0x00081bac) main_int_radio1_pane_t1

0xdb95,	// (0x00081bc0) main_int_radio1_pane_t2_ParamLimits

0xdb95,	// (0x00081bc0) main_int_radio1_pane_t2

0xdba9,	// (0x00081bd4) main_int_radio1_pane_t3_ParamLimits

0xdba9,	// (0x00081bd4) main_int_radio1_pane_t3

0xdbbd,	// (0x00081be8) main_int_radio1_pane_t4_ParamLimits

0xdbbd,	// (0x00081be8) main_int_radio1_pane_t4

0xebac,	// (0x00082bd7) main_int_radio1_pane_t5_ParamLimits

0xebac,	// (0x00082bd7) main_int_radio1_pane_t5

0xdbd4,	// (0x00081bff) main_int_radio1_pane_t6_ParamLimits

0xdbd4,	// (0x00081bff) main_int_radio1_pane_t6

0xdbe6,	// (0x00081c11) main_int_radio1_pane_t7_ParamLimits

0xdbe6,	// (0x00081c11) main_int_radio1_pane_t7

0xdbf8,	// (0x00081c23) main_int_radio1_pane_t8_ParamLimits

0xdbf8,	// (0x00081c23) main_int_radio1_pane_t8

0xdc0c,	// (0x00081c37) main_int_radio1_pane_t9_ParamLimits

0xdc0c,	// (0x00081c37) main_int_radio1_pane_t9

0xdc1e,	// (0x00081c49) main_int_radio1_pane_t10_ParamLimits

0xdc1e,	// (0x00081c49) main_int_radio1_pane_t10

0xdc4f,	// (0x00081c7a) main_int_radio1_pane_t11_ParamLimits

0xdc4f,	// (0x00081c7a) main_int_radio1_pane_t11

0xdc80,	// (0x00081cab) main_int_radio1_pane_t12_ParamLimits

0xdc80,	// (0x00081cab) main_int_radio1_pane_t12

0x000b,

0xfe69,	// (0x00083e94) main_int_radio1_pane_t_ParamLimits

0xfe69,	// (0x00083e94) main_int_radio1_pane_t

0xebbe,	// (0x00082be9) int_radio_list_pane

0xea52,	// (0x00082a7d) scroll_pane_cp037

0xebc6,	// (0x00082bf1) list_double_large_graphic_int_radio_pane_ParamLimits

0xebc6,	// (0x00082bf1) list_double_large_graphic_int_radio_pane

0xebdf,	// (0x00082c0a) list_double_large_graphic_int_radio_pane_g1

0x6437,	// (0x0007a462) list_double_large_graphic_int_radio_pane_t1

0x6445,	// (0x0007a470) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe82,	// (0x00083ead) list_double_large_graphic_int_radio_pane_t

0xee29,	// (0x00082e54) list_highlight_pane_cp027

0xeb3c,	// (0x00082b67) main_button_pane_4

0xd851,	// (0x0008187c) main_welc_pane_g4_ParamLimits

0xd851,	// (0x0008187c) main_welc_pane_g4

0xd8ad,	// (0x000818d8) main_welc_pane_t4_ParamLimits

0xd8ad,	// (0x000818d8) main_welc_pane_t4

0xd8bf,	// (0x000818ea) main_welc_pane_t5_ParamLimits

0xd8bf,	// (0x000818ea) main_welc_pane_t5

0xd8ef,	// (0x0008191a) main_welc_pane_t6_ParamLimits

0xd8ef,	// (0x0008191a) main_welc_pane_t6

0xd9a5,	// (0x000819d0) welc_button_pane_2_ParamLimits

0xd9a5,	// (0x000819d0) welc_button_pane_2

0xd9bd,	// (0x000819e8) welc_button_pane_3_ParamLimits

0xd9bd,	// (0x000819e8) welc_button_pane_3

0xeb44,	// (0x00082b6f) welc_button_pane_4

0xd9d7,	// (0x00081a02) welc_button_pane_5_ParamLimits

0xd9d7,	// (0x00081a02) welc_button_pane_5

0x64a7,	// (0x0007a4d2) main_popup_welc_pane

0xebf7,	// (0x00082c22) main_welc_sk_g3

0xec01,	// (0x00082c2c) main_welc_sk_g4

0xec0b,	// (0x00082c36) main_welc_sk_t3

0xec1b,	// (0x00082c46) main_welc_sk_t4

0xec2b,	// (0x00082c56) popup_welc_pane_t4

0xec39,	// (0x00082c64) popup_welc_pane_t5

0xec47,	// (0x00082c72) popup_welc_pane_t6

0xee29,	// (0x00082e54) main_acti_pane

0xee29,	// (0x00082e54) main_sso_pane

0xdc97,	// (0x00081cc2) sso_body_pane_ParamLimits

0xdc97,	// (0x00081cc2) sso_body_pane

0xdca5,	// (0x00081cd0) sso_logo_pane_ParamLimits

0xdca5,	// (0x00081cd0) sso_logo_pane

0xdcce,	// (0x00081cf9) sso_sk_pane_ParamLimits

0xdcce,	// (0x00081cf9) sso_sk_pane

0x0a60,	// (0x00074a8b) main_sso_logo_pane_g1

0xdcdb,	// (0x00081d06) sso_sk_pane_t1_ParamLimits

0xdcdb,	// (0x00081d06) sso_sk_pane_t1

0xdcef,	// (0x00081d1a) sso_sk_pane_t2_ParamLimits

0xdcef,	// (0x00081d1a) sso_sk_pane_t2

0x0001,

0xfe87,	// (0x00083eb2) sso_sk_pane_t_ParamLimits

0xfe87,	// (0x00083eb2) sso_sk_pane_t

0xec85,	// (0x00082cb0) aid_sso_gap

0xec8e,	// (0x00082cb9) aid_sso_txt1

0xec98,	// (0x00082cc3) aid_sso_txt2

0xeca2,	// (0x00082ccd) aid_sso_txt3

0x0002,

0xfe8c,	// (0x00083eb7) aid_sso_txt

0xecac,	// (0x00082cd7) aid_sso_widget

0xdd4e,	// (0x00081d79) sso_btn_pane_ParamLimits

0xdd4e,	// (0x00081d79) sso_btn_pane

0xddc7,	// (0x00081df2) sso_option_pane_ParamLimits

0xddc7,	// (0x00081df2) sso_option_pane

0xde41,	// (0x00081e6c) sso_query_pane_ParamLimits

0xde41,	// (0x00081e6c) sso_query_pane

0xde91,	// (0x00081ebc) sso_query_pane_cp01_ParamLimits

0xde91,	// (0x00081ebc) sso_query_pane_cp01

0xdee1,	// (0x00081f0c) sso_t_hdr_pane_ParamLimits

0xdee1,	// (0x00081f0c) sso_t_hdr_pane

0xdf05,	// (0x00081f30) sso_t_nml_pane_ParamLimits

0xdf05,	// (0x00081f30) sso_t_nml_pane

0xecb6,	// (0x00082ce1) sso_t_sub_pane

0xdcb2,	// (0x00081cdd) sso_popup_window_ParamLimits

0xdcb2,	// (0x00081cdd) sso_popup_window

0xdd01,	// (0x00081d2c) sso_apps_pane_ParamLimits

0xdd01,	// (0x00081d2c) sso_apps_pane

0xdd24,	// (0x00081d4f) sso_body_pane_g1

0xdd2e,	// (0x00081d59) sso_body_pane_t1

0xdd3e,	// (0x00081d69) sso_body_pane_t2

0x0001,

0xfe93,	// (0x00083ebe) sso_body_pane_t

0xdd99,	// (0x00081dc4) sso_btn_pane_cp01_ParamLimits

0xdd99,	// (0x00081dc4) sso_btn_pane_cp01

0xde13,	// (0x00081e3e) sso_prog_pane_ParamLimits

0xde13,	// (0x00081e3e) sso_prog_pane

0xeeb0,	// (0x00082edb) sso_t_hdr_pane_t1_ParamLimits

0xeeb0,	// (0x00082edb) sso_t_hdr_pane_t1

0xeccb,	// (0x00082cf6) input_focus_pane_cp10_ParamLimits

0xeccb,	// (0x00082cf6) input_focus_pane_cp10

0xece5,	// (0x00082d10) sso_query_pane_t1_ParamLimits

0xece5,	// (0x00082d10) sso_query_pane_t1

0xecf8,	// (0x00082d23) sso_query_pane_t2_ParamLimits

0xecf8,	// (0x00082d23) sso_query_pane_t2

0xed13,	// (0x00082d3e) sso_query_pane_t3_ParamLimits

0xed13,	// (0x00082d3e) sso_query_pane_t3

0xed3d,	// (0x00082d68) sso_query_pane_t4_ParamLimits

0xed3d,	// (0x00082d68) sso_query_pane_t4

0x0003,

0xfe98,	// (0x00083ec3) sso_query_pane_t_ParamLimits

0xfe98,	// (0x00083ec3) sso_query_pane_t

0xee29,	// (0x00082e54) bg_button_pane_cp22

0xebe8,	// (0x00082c13) sso_btn_pane_t1

0xdf55,	// (0x00081f80) sso_t_nml_pane_t1_ParamLimits

0xdf55,	// (0x00081f80) sso_t_nml_pane_t1

0xed61,	// (0x00082d8c) sso_option_row_pane_ParamLimits

0xed61,	// (0x00082d8c) sso_option_row_pane

0xed74,	// (0x00082d9f) sso_t_sub_pane_t1_ParamLimits

0xed74,	// (0x00082d9f) sso_t_sub_pane_t1

0xee8a,	// (0x00082eb5) bg_popup_window_pane_cp11_ParamLimits

0xee8a,	// (0x00082eb5) bg_popup_window_pane_cp11

0xed91,	// (0x00082dbc) popup_sk_window_cp01_ParamLimits

0xed91,	// (0x00082dbc) popup_sk_window_cp01

0xed9e,	// (0x00082dc9) sso_popup_body_pane_ParamLimits

0xed9e,	// (0x00082dc9) sso_popup_body_pane

0xedab,	// (0x00082dd6) scroll_pane_cp21_ParamLimits

0xedab,	// (0x00082dd6) scroll_pane_cp21

0xedb8,	// (0x00082de3) sso_popup_body_t_pane_ParamLimits

0xedb8,	// (0x00082de3) sso_popup_body_t_pane

0xedc5,	// (0x00082df0) sso_popup_body_t_hdr_pane_ParamLimits

0xedc5,	// (0x00082df0) sso_popup_body_t_hdr_pane

0xedd8,	// (0x00082e03) sso_popup_body_t_nml_pane_ParamLimits

0xedd8,	// (0x00082e03) sso_popup_body_t_nml_pane

0xedf6,	// (0x00082e21) sso_popup_body_t_sub_pane_ParamLimits

0xedf6,	// (0x00082e21) sso_popup_body_t_sub_pane

0xeec9,	// (0x00082ef4) sso_popup_body_t_hdr_pane_t1

0xdf72,	// (0x00081f9d) sso_popup_body_t_nml_pane_t1_ParamLimits

0xdf72,	// (0x00081f9d) sso_popup_body_t_nml_pane_t1

0xeed9,	// (0x00082f04) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeed9,	// (0x00082f04) sso_popup_body_t_sub_pane_t1

0x0a60,	// (0x00074a8b) sso_prog_pane_g1

0xdfb6,	// (0x00081fe1) sso_apps_pane_comp1_ParamLimits

0xdfb6,	// (0x00081fe1) sso_apps_pane_comp1

0xeefe,	// (0x00082f29) sso_apps_pane_comp1_g1

0xef06,	// (0x00082f31) sso_apps_pane_comp1_t1

0xef22,	// (0x00082f4d) sso_option_row_pane_g1

0xef2a,	// (0x00082f55) sso_option_row_pane_t1

0xd7d7,	// (0x00081802) bg_welc_area_ParamLimits

0xd7d7,	// (0x00081802) bg_welc_area

0xd925,	// (0x00081950) sso_t_hdr_pane_a_t1_ParamLimits

0xd925,	// (0x00081950) sso_t_hdr_pane_a_t1

0xd939,	// (0x00081964) sso_t_nml_pane_a_t1_ParamLimits

0xd939,	// (0x00081964) sso_t_nml_pane_a_t1

0xd963,	// (0x0008198e) sso_t_sub_pane_a_t1_ParamLimits

0xd963,	// (0x0008198e) sso_t_sub_pane_a_t1

0xebe8,	// (0x00082c13) sso_btn_pane_t1_copy1

0xee29,	// (0x00082e54) welc_button_pane_2_comp1

0xec55,	// (0x00082c80) sso_t_hdr_pane_p_t1

0xec65,	// (0x00082c90) sso_t_nml_pane_p_t1

0xec75,	// (0x00082ca0) sso_t_sub_pane_p_t1

0x468b,	// (0x000786b6) list_cmail_pane_ParamLimits

0xd9e7,	// (0x00081a12) welc_button_pane_cp01_ParamLimits

0xd9e7,	// (0x00081a12) welc_button_pane_cp01

0xee29,	// (0x00082e54) main_att_pane

0xef14,	// (0x00082f3f) input_focus_pane_cp10_t1

0xef2a,	// (0x00082f55) sso_option_row_pane_t1_ParamLimits

0xdfd0,	// (0x00081ffb) main_att_body_pane_ParamLimits

0xdfd0,	// (0x00081ffb) main_att_body_pane

0xdffc,	// (0x00082027) att_btn_pane_ParamLimits

0xdffc,	// (0x00082027) att_btn_pane

0xe01e,	// (0x00082049) att_btn_pane_cp01_ParamLimits

0xe01e,	// (0x00082049) att_btn_pane_cp01

0xe038,	// (0x00082063) att_li_srv_pane_ParamLimits

0xe038,	// (0x00082063) att_li_srv_pane

0xe04a,	// (0x00082075) att_opt_pane_ParamLimits

0xe04a,	// (0x00082075) att_opt_pane

0xe08e,	// (0x000820b9) att_query_pane_ParamLimits

0xe08e,	// (0x000820b9) att_query_pane

0xe0d2,	// (0x000820fd) att_query_pane_cp01_ParamLimits

0xe0d2,	// (0x000820fd) att_query_pane_cp01

0xe116,	// (0x00082141) att_t_hdr_pane_ParamLimits

0xe116,	// (0x00082141) att_t_hdr_pane

0xe168,	// (0x00082193) att_t_nml_pane_ParamLimits

0xe168,	// (0x00082193) att_t_nml_pane

0xe19c,	// (0x000821c7) att_t_nml_pane_cp01_ParamLimits

0xe19c,	// (0x000821c7) att_t_nml_pane_cp01

0xe1c0,	// (0x000821eb) att_t_nmlb_pane_ParamLimits

0xe1c0,	// (0x000821eb) att_t_nmlb_pane

0xe1da,	// (0x00082205) att_term_pane_ParamLimits

0xe1da,	// (0x00082205) att_term_pane

0xe21e,	// (0x00082249) main_att_body_pane_g1_ParamLimits

0xe21e,	// (0x00082249) main_att_body_pane_g1

0xeeb0,	// (0x00082edb) att_t_hdr_pane_t1_ParamLimits

0xeeb0,	// (0x00082edb) att_t_hdr_pane_t1

0xef40,	// (0x00082f6b) att_t_nml_pane_t1_ParamLimits

0xef40,	// (0x00082f6b) att_t_nml_pane_t1

0xef65,	// (0x00082f90) att_btn_pane_t1

0xee29,	// (0x00082e54) bg_button_pane_cp23

0xee19,	// (0x00082e44) att_li_srv_row_pane_ParamLimits

0xee19,	// (0x00082e44) att_li_srv_row_pane

0xef75,	// (0x00082fa0) att_t_nmlb_pane_t1_ParamLimits

0xef75,	// (0x00082fa0) att_t_nmlb_pane_t1

0xef8e,	// (0x00082fb9) att_query_pane_t1

0xef9d,	// (0x00082fc8) att_query_pane_t2

0xefac,	// (0x00082fd7) att_query_pane_t3

0x0002,

0xfea1,	// (0x00083ecc) att_query_pane_t

0xefbb,	// (0x00082fe6) input_focus_pane_cp11

0xefc4,	// (0x00082fef) att_term_pane_t1_ParamLimits

0xefc4,	// (0x00082fef) att_term_pane_t1

0xee29,	// (0x00082e54) att_opt_row_pane

0xefe1,	// (0x0008300c) att_opt_row_pane_g1

0xefe9,	// (0x00083014) att_opt_row_pane_t1_ParamLimits

0xefe9,	// (0x00083014) att_opt_row_pane_t1

0xe252,	// (0x0008227d) att_li_srv_row_pane_g1

0xe25a,	// (0x00082285) att_li_srv_row_pane_t1

0xe26f,	// (0x0008229a) att_li_srv_row_pane_t2

0x0001,

0xfea8,	// (0x00083ed3) att_li_srv_row_pane_t

0xee29,	// (0x00082e54) main_call7_pane

0xee29,	// (0x00082e54) main_vod_pane

0xecb6,	// (0x00082ce1) sso_t_sub_pane_ParamLimits

0xdfe4,	// (0x0008200f) att_btn_emg_pane_ParamLimits

0xdfe4,	// (0x0008200f) att_btn_emg_pane

0xe25a,	// (0x00082285) att_li_srv_row_pane_t1_ParamLimits

0xe26f,	// (0x0008229a) att_li_srv_row_pane_t2_ParamLimits

0xfea8,	// (0x00083ed3) att_li_srv_row_pane_t_ParamLimits

0xf002,	// (0x0008302d) att_btn_close_pane_g1

0xee29,	// (0x00082e54) bg_button_pane_cp24

0x925d,	// (0x0007d288) main_vod_body_pane_ParamLimits

0x925d,	// (0x0007d288) main_vod_body_pane

0xe284,	// (0x000822af) main_vod_body_pane_g1_ParamLimits

0xe284,	// (0x000822af) main_vod_body_pane_g1

0xe2b4,	// (0x000822df) scroll_pane_cp24_ParamLimits

0xe2b4,	// (0x000822df) scroll_pane_cp24

0xe2fc,	// (0x00082327) vod_btn_pane_ParamLimits

0xe2fc,	// (0x00082327) vod_btn_pane

0xe33c,	// (0x00082367) vod_det_pane_ParamLimits

0xe33c,	// (0x00082367) vod_det_pane

0xe366,	// (0x00082391) vod_logo_g1_ParamLimits

0xe366,	// (0x00082391) vod_logo_g1

0xe3a0,	// (0x000823cb) vod_opt_pane_ParamLimits

0xe3a0,	// (0x000823cb) vod_opt_pane

0xe3d0,	// (0x000823fb) vod_opt_pane_cp01_ParamLimits

0xe3d0,	// (0x000823fb) vod_opt_pane_cp01

0xe3f8,	// (0x00082423) vod_query_pane_ParamLimits

0xe3f8,	// (0x00082423) vod_query_pane

0xe422,	// (0x0008244d) vod_query_pane_cp01_ParamLimits

0xe422,	// (0x0008244d) vod_query_pane_cp01

0xe42e,	// (0x00082459) vod_t_nml_pane_ParamLimits

0xe42e,	// (0x00082459) vod_t_nml_pane

0xe4d0,	// (0x000824fb) vod_t_nml_pane_cp01_ParamLimits

0xe4d0,	// (0x000824fb) vod_t_nml_pane_cp01

0xe508,	// (0x00082533) vod_t_sub_pane_ParamLimits

0xe508,	// (0x00082533) vod_t_sub_pane

0xe536,	// (0x00082561) vod_t_sub_pane_cp01_ParamLimits

0xe536,	// (0x00082561) vod_t_sub_pane_cp01

0xefbb,	// (0x00082fe6) vod_query_field_pane

0xef8e,	// (0x00082fb9) vod_query_pane_t1

0xee29,	// (0x00082e54) bg_button_pane_cp25

0xf00a,	// (0x00083035) sso_btn_pane_t1_copy2

0xe55e,	// (0x00082589) vod_t_nml_pane_t1_ParamLimits

0xe55e,	// (0x00082589) vod_t_nml_pane_t1

0xf01a,	// (0x00083045) vod_opt_row_pane_ParamLimits

0xf01a,	// (0x00083045) vod_opt_row_pane

0xf02c,	// (0x00083057) vod_t_sub_pane_t1_ParamLimits

0xf02c,	// (0x00083057) vod_t_sub_pane_t1

0xe593,	// (0x000825be) vod_det_cell_pane_ParamLimits

0xe593,	// (0x000825be) vod_det_cell_pane

0xee29,	// (0x00082e54) input_focus_pane_cp15

0x0078,	// (0x000740a3) vod_query_field_pane_t1

0x0086,	// (0x000740b1) vod_opt_row_pane_g1_ParamLimits

0x0086,	// (0x000740b1) vod_opt_row_pane_g1

0x0092,	// (0x000740bd) vod_opt_row_pane_t1_ParamLimits

0x0092,	// (0x000740bd) vod_opt_row_pane_t1

0x00b7,	// (0x000740e2) vod_det_cell_field_pane

0x00c0,	// (0x000740eb) vod_det_cell_pane_g1

0xef8e,	// (0x00082fb9) vod_det_cell_pane_t1

0xee29,	// (0x00082e54) input_focus_pane_cp16

0x0078,	// (0x000740a3) vod_det_cell_field_pane_t1

0xd1dc,	// (0x00081207) call7_btn_grp_pane_ParamLimits

0xd1dc,	// (0x00081207) call7_btn_grp_pane

0xe5a5,	// (0x000825d0) call7_bubble_pane_ParamLimits

0xe5a5,	// (0x000825d0) call7_bubble_pane

0xd217,	// (0x00081242) cell_call7_btn_pane_ParamLimits

0xd217,	// (0x00081242) cell_call7_btn_pane

0xe5b3,	// (0x000825de) call7_pane_g1_ParamLimits

0xe5b3,	// (0x000825de) call7_pane_g1

0xe5c2,	// (0x000825ed) call7_windows_conf_pane_ParamLimits

0xe5c2,	// (0x000825ed) call7_windows_conf_pane

0xe5de,	// (0x00082609) popup_call7_1st_window_ParamLimits

0xe5de,	// (0x00082609) popup_call7_1st_window

0xe5ec,	// (0x00082617) popup_call7_2nd_window_ParamLimits

0xe5ec,	// (0x00082617) popup_call7_2nd_window

0xe5fa,	// (0x00082625) popup_call7_3rd_window_ParamLimits

0xe5fa,	// (0x00082625) popup_call7_3rd_window

0xee29,	// (0x00082e54) bg_button_pane_cp26

0xe973,	// (0x0008299e) cell_call7_btn_pane_g1

0xeea1,	// (0x00082ecc) cell_call7_btn_pane_t1

0xee29,	// (0x00082e54) bg_popup_window_pane_cp12

0x00c8,	// (0x000740f3) popup_call7_1st_window_g1

0x00d0,	// (0x000740fb) popup_call7_1st_window_g2

0x00d8,	// (0x00074103) popup_call7_1st_window_g3

0x0002,

0xfead,	// (0x00083ed8) popup_call7_1st_window_g

0x00e0,	// (0x0007410b) popup_call7_1st_window_t1

0x00ef,	// (0x0007411a) popup_call7_1st_window_t2

0x00fd,	// (0x00074128) popup_call7_1st_window_t3

0x0002,

0xfeb4,	// (0x00083edf) popup_call7_1st_window_t

0xee29,	// (0x00082e54) bg_popup_window_pane_cp13

0x010b,	// (0x00074136) popup_call7_2nd_window_g1

0x0113,	// (0x0007413e) popup_call7_2nd_window_g2

0x011b,	// (0x00074146) popup_call7_2nd_window_g3

0x0002,

0xfebb,	// (0x00083ee6) popup_call7_2nd_window_g

0x0123,	// (0x0007414e) popup_call7_2nd_window_t1

0xee29,	// (0x00082e54) bg_popup_window_pane_cp14

0x0132,	// (0x0007415d) call7_list_conf_pane

0x013a,	// (0x00074165) call7_list_conf_row_pane_ParamLimits

0x013a,	// (0x00074165) call7_list_conf_row_pane

0x014d,	// (0x00074178) call7_list_conf_row_pane_g1

0x0155,	// (0x00074180) call7_list_conf_row_pane_g2

0x0001,

0xfec2,	// (0x00083eed) call7_list_conf_row_pane_g

0x015d,	// (0x00074188) call7_list_conf_row_pane_t1

0xee29,	// (0x00082e54) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
