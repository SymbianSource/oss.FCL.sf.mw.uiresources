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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00017176 };

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
0x8166,	// (0x0001f2dc) Screen

0x8172,	// (0x0001f2e8) application_window

0x81b2,	// (0x0001f328) area_bottom_pane_ParamLimits

0x81b2,	// (0x0001f328) area_bottom_pane

0x81e7,	// (0x0001f35d) area_top_pane_ParamLimits

0x81e7,	// (0x0001f35d) area_top_pane

0x01f1,	// (0x00017367) call_video_uplink_pane_ParamLimits

0x01f1,	// (0x00017367) call_video_uplink_pane

0x8274,	// (0x0001f3ea) main_pane_ParamLimits

0x8274,	// (0x0001f3ea) main_pane

0x2be1,	// (0x00019d57) context_pane

0xaf7d,	// (0x000220f3) navi_pane

0xafa1,	// (0x00022117) popup_cale_events_window_ParamLimits

0xafa1,	// (0x00022117) popup_cale_events_window

0x2bf4,	// (0x00019d6a) popup_mup_playback_window

0xafb9,	// (0x0002212f) signal_pane

0x09b5,	// (0x00017b2b) main_browser_pane

0x16e5,	// (0x0001885b) main_burst_pane

0xae2f,	// (0x00021fa5) main_calc_pane

0x16e5,	// (0x0001885b) main_cale_day_pane

0x09b5,	// (0x00017b2b) main_cale_month_pane

0x16e5,	// (0x0001885b) main_cale_week_pane

0x16e5,	// (0x0001885b) main_call_pane

0x0665,	// (0x000177db) main_call_poc_pane

0x16e5,	// (0x0001885b) main_camera_pane

0x16e5,	// (0x0001885b) main_chi_dic_pane

0x1587,	// (0x000186fd) main_clock_pane

0x0665,	// (0x000177db) main_fmradio_pane

0x16e5,	// (0x0001885b) main_graph_messa_pane

0x0665,	// (0x000177db) main_help_pane

0x09b5,	// (0x00017b2b) main_im_pane

0x08c0,	// (0x00017a36) main_image_pane_ParamLimits

0x08c0,	// (0x00017a36) main_image_pane

0x0665,	// (0x000177db) main_location2_pane

0x16e5,	// (0x0001885b) main_location_pane

0x0665,	// (0x000177db) main_messa_pane

0x0665,	// (0x000177db) main_mp2_pane

0x16e5,	// (0x0001885b) main_mp_pane

0x0665,	// (0x000177db) main_msg_pane

0x0665,	// (0x000177db) main_mup_eq_pane

0x0665,	// (0x000177db) main_mup_pane

0x09b5,	// (0x00017b2b) main_notes_pane

0x0665,	// (0x000177db) main_pec_pane

0x0665,	// (0x000177db) main_phob_pane

0x0665,	// (0x000177db) main_pinb_pane

0x0665,	// (0x000177db) main_postcard_pane

0x0665,	// (0x000177db) main_qdial_pane

0x16e5,	// (0x0001885b) main_skin_pane

0x0665,	// (0x000177db) main_smil2_pane

0x16e5,	// (0x0001885b) main_smil_pane

0x16e5,	// (0x0001885b) main_video_pane

0x16e5,	// (0x0001885b) main_video_tele_pane

0x08c0,	// (0x00017a36) main_viewer_pane_ParamLimits

0x08c0,	// (0x00017a36) main_viewer_pane

0x16e5,	// (0x0001885b) main_vorec_pane

0xae67,	// (0x00021fdd) popup_blid_sat_info_window_ParamLimits

0xae67,	// (0x00021fdd) popup_blid_sat_info_window

0xae81,	// (0x00021ff7) popup_dyc_status_message_window_ParamLimits

0xae81,	// (0x00021ff7) popup_dyc_status_message_window

0xae91,	// (0x00022007) popup_grid_large_graphic_window_ParamLimits

0xae91,	// (0x00022007) popup_grid_large_graphic_window

0xaf09,	// (0x0002207f) popup_loc_request_window_ParamLimits

0xaf09,	// (0x0002207f) popup_loc_request_window

0xaf51,	// (0x000220c7) popup_wml_address_window_ParamLimits

0xaf51,	// (0x000220c7) popup_wml_address_window

0xad07,	// (0x00021e7d) call_muted_g1

0xa9c6,	// (0x00021b3c) popup_call_audio_conf_window_ParamLimits

0xa9c6,	// (0x00021b3c) popup_call_audio_conf_window

0xad17,	// (0x00021e8d) popup_call_audio_first_window_ParamLimits

0xad17,	// (0x00021e8d) popup_call_audio_first_window

0xad57,	// (0x00021ecd) popup_call_audio_in_window_ParamLimits

0xad57,	// (0x00021ecd) popup_call_audio_in_window

0xad7b,	// (0x00021ef1) popup_call_audio_out_window_ParamLimits

0xad7b,	// (0x00021ef1) popup_call_audio_out_window

0xad9d,	// (0x00021f13) popup_call_audio_second_window_ParamLimits

0xad9d,	// (0x00021f13) popup_call_audio_second_window

0xadcd,	// (0x00021f43) popup_call_audio_wait_window_ParamLimits

0xadcd,	// (0x00021f43) popup_call_audio_wait_window

0xadee,	// (0x00021f64) popup_number_entry_window_ParamLimits

0xadee,	// (0x00021f64) popup_number_entry_window

0x021d,	// (0x00017393) bg_popup_call_pane_cp05_ParamLimits

0x021d,	// (0x00017393) bg_popup_call_pane_cp05

0x023d,	// (0x000173b3) popup_number_entry_window_t1

0x0250,	// (0x000173c6) popup_number_entry_window_t2

0x0262,	// (0x000173d8) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0002625d) popup_number_entry_window_t

0x02a9,	// (0x0001741f) text_title_cp2

0x02bc,	// (0x00017432) bg_popup_call_pane_cp_ParamLimits

0x02bc,	// (0x00017432) bg_popup_call_pane_cp

0x02ca,	// (0x00017440) call_thumbnail_pane

0x02d2,	// (0x00017448) popup_call_audio_in_window_g1_ParamLimits

0x02d2,	// (0x00017448) popup_call_audio_in_window_g1

0x02de,	// (0x00017454) popup_call_audio_in_window_g2_ParamLimits

0x02de,	// (0x00017454) popup_call_audio_in_window_g2

0x02ea,	// (0x00017460) popup_call_audio_in_window_g3_ParamLimits

0x02ea,	// (0x00017460) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00026266) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00026266) popup_call_audio_in_window_g

0x02f6,	// (0x0001746c) popup_call_audio_in_window_t1_ParamLimits

0x02f6,	// (0x0001746c) popup_call_audio_in_window_t1

0x0312,	// (0x00017488) popup_call_audio_in_window_t2_ParamLimits

0x0312,	// (0x00017488) popup_call_audio_in_window_t2

0x032e,	// (0x000174a4) popup_call_audio_in_window_t3_ParamLimits

0x032e,	// (0x000174a4) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0002626d) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0002626d) popup_call_audio_in_window_t

0x02bc,	// (0x00017432) bg_popup_call_pane_cp01_ParamLimits

0x02bc,	// (0x00017432) bg_popup_call_pane_cp01

0x02ca,	// (0x00017440) call_thumbnail_pane_cp02

0x0341,	// (0x000174b7) call_type_pane_cp022

0x0349,	// (0x000174bf) popup_call_audio_out_window_g1_ParamLimits

0x0349,	// (0x000174bf) popup_call_audio_out_window_g1

0x035b,	// (0x000174d1) popup_call_audio_out_window_g2_ParamLimits

0x035b,	// (0x000174d1) popup_call_audio_out_window_g2

0x0367,	// (0x000174dd) popup_call_audio_out_window_g3_ParamLimits

0x0367,	// (0x000174dd) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00026274) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00026274) popup_call_audio_out_window_g

0x0379,	// (0x000174ef) popup_call_audio_out_window_t1_ParamLimits

0x0379,	// (0x000174ef) popup_call_audio_out_window_t1

0x0391,	// (0x00017507) popup_call_audio_out_window_t2_ParamLimits

0x0391,	// (0x00017507) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0002627b) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0002627b) popup_call_audio_out_window_t

0x03a6,	// (0x0001751c) bg_popup_call_pane_ParamLimits

0x03a6,	// (0x0001751c) bg_popup_call_pane

0x842d,	// (0x0001f5a3) call_thumbnail_pane_cp_ParamLimits

0x842d,	// (0x0001f5a3) call_thumbnail_pane_cp

0x042a,	// (0x000175a0) call_type_pane_cp01_ParamLimits

0x042a,	// (0x000175a0) call_type_pane_cp01

0x046e,	// (0x000175e4) popup_call_audio_first_window_g1_ParamLimits

0x046e,	// (0x000175e4) popup_call_audio_first_window_g1

0x04ba,	// (0x00017630) popup_call_audio_first_window_g2_ParamLimits

0x04ba,	// (0x00017630) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00026280) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00026280) popup_call_audio_first_window_g

0x04fe,	// (0x00017674) popup_call_audio_first_window_t1_ParamLimits

0x04fe,	// (0x00017674) popup_call_audio_first_window_t1

0x05aa,	// (0x00017720) popup_call_audio_first_window_t4_ParamLimits

0x05aa,	// (0x00017720) popup_call_audio_first_window_t4

0x0636,	// (0x000177ac) popup_call_audio_first_window_t5_ParamLimits

0x0636,	// (0x000177ac) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00026285) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00026285) popup_call_audio_first_window_t

0x0665,	// (0x000177db) bg_popup_call_pane_cp02

0x066f,	// (0x000177e5) call_type_pane_cp023

0x0677,	// (0x000177ed) popup_call_audio_wait_window_g1

0x067f,	// (0x000177f5) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0002628c) popup_call_audio_wait_window_g

0x0687,	// (0x000177fd) popup_call_audio_wait_window_t3

0x0695,	// (0x0001780b) bg_popup_call_pane_cp03_ParamLimits

0x0695,	// (0x0001780b) bg_popup_call_pane_cp03

0x06f5,	// (0x0001786b) call_thumbnail_pane_cp011_ParamLimits

0x06f5,	// (0x0001786b) call_thumbnail_pane_cp011

0x0701,	// (0x00017877) call_type_pane_cp034_ParamLimits

0x0701,	// (0x00017877) call_type_pane_cp034

0x073d,	// (0x000178b3) popup_call_audio_second_window_g1_ParamLimits

0x073d,	// (0x000178b3) popup_call_audio_second_window_g1

0x0779,	// (0x000178ef) popup_call_audio_second_window_g2_ParamLimits

0x0779,	// (0x000178ef) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00026291) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00026291) popup_call_audio_second_window_g

0x07b5,	// (0x0001792b) popup_call_audio_second_window_t1_ParamLimits

0x07b5,	// (0x0001792b) popup_call_audio_second_window_t1

0x0836,	// (0x000179ac) popup_call_audio_second_window_t2_ParamLimits

0x0836,	// (0x000179ac) popup_call_audio_second_window_t2

0x086c,	// (0x000179e2) popup_call_audio_second_window_t3_ParamLimits

0x086c,	// (0x000179e2) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00026296) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00026296) popup_call_audio_second_window_t

0x0665,	// (0x000177db) bg_popup_call_pane_cp04

0x08a2,	// (0x00017a18) list_conf_pane

0x08aa,	// (0x00017a20) popup_call_audio_conf_window_t1

0x08b8,	// (0x00017a2e) call_thumbnail_pane_g1

0x08c0,	// (0x00017a36) bg_pinb_pane_ParamLimits

0x08c0,	// (0x00017a36) bg_pinb_pane

0x08ce,	// (0x00017a44) find_pinb_pane

0x08d7,	// (0x00017a4d) listscroll_pinb_pane_ParamLimits

0x08d7,	// (0x00017a4d) listscroll_pinb_pane

0x08e6,	// (0x00017a5c) pinb_bg_pane_g1

0x8451,	// (0x0001f5c7) pinb_bg_pane_g2

0x845d,	// (0x0001f5d3) pinb_bg_pane_g3

0x8469,	// (0x0001f5df) pinb_bg_pane_g4

0x8475,	// (0x0001f5eb) pinb_bg_pane_g5

0x8481,	// (0x0001f5f7) pinb_bg_pane_g6

0x848c,	// (0x0001f602) pinb_bg_pane_g7

0x8497,	// (0x0001f60d) pinb_bg_pane_g8

0x84a2,	// (0x0001f618) pinb_bg_pane_g9

0x84ac,	// (0x0001f622) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0002629d) pinb_bg_pane_g

0x84c9,	// (0x0001f63f) grid_pinb_pane

0x84d4,	// (0x0001f64a) list_pinb_pane

0x84df,	// (0x0001f655) scroll_pane_cp01_ParamLimits

0x84df,	// (0x0001f655) scroll_pane_cp01

0x08f0,	// (0x00017a66) find_pinb_pane_g1_ParamLimits

0x08f0,	// (0x00017a66) find_pinb_pane_g1

0x0908,	// (0x00017a7e) find_pinb_pane_t1

0x091a,	// (0x00017a90) find_pinb_pane_t2

0x0001,

0xf141,	// (0x000262b7) find_pinb_pane_t

0x092f,	// (0x00017aa5) input_focus_pane_cp01_ParamLimits

0x092f,	// (0x00017aa5) input_focus_pane_cp01

0x84f1,	// (0x0001f667) cell_pinb_pane_ParamLimits

0x84f1,	// (0x0001f667) cell_pinb_pane

0x850f,	// (0x0001f685) cell_pinb_pane_g1_ParamLimits

0x850f,	// (0x0001f685) cell_pinb_pane_g1

0x8524,	// (0x0001f69a) cell_pinb_pane_g2_ParamLimits

0x8524,	// (0x0001f69a) cell_pinb_pane_g2

0x093b,	// (0x00017ab1) cell_pinb_pane_g3_ParamLimits

0x093b,	// (0x00017ab1) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x000262bc) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x000262bc) cell_pinb_pane_g

0x0665,	// (0x000177db) grid_highlight_pane_cp01

0x8530,	// (0x0001f6a6) list_pinb_item_pane_ParamLimits

0x8530,	// (0x0001f6a6) list_pinb_item_pane

0x0665,	// (0x000177db) list_highlight_pane_cp02

0x854b,	// (0x0001f6c1) list_pinb_item_pane_g1_ParamLimits

0x854b,	// (0x0001f6c1) list_pinb_item_pane_g1

0x8558,	// (0x0001f6ce) list_pinb_item_pane_g2_ParamLimits

0x8558,	// (0x0001f6ce) list_pinb_item_pane_g2

0x8564,	// (0x0001f6da) list_pinb_item_pane_g3_ParamLimits

0x8564,	// (0x0001f6da) list_pinb_item_pane_g3

0x8575,	// (0x0001f6eb) list_pinb_item_pane_g4_ParamLimits

0x8575,	// (0x0001f6eb) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x000262c3) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x000262c3) list_pinb_item_pane_g

0x8581,	// (0x0001f6f7) list_pinb_item_pane_t1_ParamLimits

0x8581,	// (0x0001f6f7) list_pinb_item_pane_t1

0x6d3a,	// (0x0001deb0) calc_display_pane

0x6d58,	// (0x0001dece) calc_paper_pane

0x6d74,	// (0x0001deea) grid_calc_pane

0x0665,	// (0x000177db) bg_list_pane_cp01

0x8598,	// (0x0001f70e) clock_g1

0x85a0,	// (0x0001f716) clock_g2

0x0001,

0xf156,	// (0x000262cc) clock_g

0x85aa,	// (0x0001f720) clock_t1_ParamLimits

0x85aa,	// (0x0001f720) clock_t1

0x85bf,	// (0x0001f735) clock_t2_ParamLimits

0x85bf,	// (0x0001f735) clock_t2

0x85d1,	// (0x0001f747) clock_t3_ParamLimits

0x85d1,	// (0x0001f747) clock_t3

0x85e3,	// (0x0001f759) clock_t4_ParamLimits

0x85e3,	// (0x0001f759) clock_t4

0x85f5,	// (0x0001f76b) clock_t5_ParamLimits

0x85f5,	// (0x0001f76b) clock_t5

0x860a,	// (0x0001f780) clock_t6_ParamLimits

0x860a,	// (0x0001f780) clock_t6

0x861c,	// (0x0001f792) clock_t7_ParamLimits

0x861c,	// (0x0001f792) clock_t7

0x862e,	// (0x0001f7a4) clock_t8_ParamLimits

0x862e,	// (0x0001f7a4) clock_t8

0x8644,	// (0x0001f7ba) clock_t9_ParamLimits

0x8644,	// (0x0001f7ba) clock_t9

0x0008,

0xf15b,	// (0x000262d1) clock_t_ParamLimits

0xf15b,	// (0x000262d1) clock_t

0x094f,	// (0x00017ac5) popup_clock_analogue_window_cp02

0x094f,	// (0x00017ac5) popup_clock_digital_window_cp01

0x0957,	// (0x00017acd) listscroll_help_pane

0x0665,	// (0x000177db) phob_pre_status_pane

0x0961,	// (0x00017ad7) grid_qdial_pane

0x0665,	// (0x000177db) listscroll_mce_pane

0x096b,	// (0x00017ae1) bg_notes_pane

0x0979,	// (0x00017aef) list_notes_pane

0x865a,	// (0x0001f7d0) scroll_pane_cp06

0x0987,	// (0x00017afd) bg_calc_paper_pane

0x6daa,	// (0x0001df20) list_calc_pane

0x09b5,	// (0x00017b2b) bg_calc_display_pane

0x6dc4,	// (0x0001df3a) calc_display_pane_t1

0x6dd9,	// (0x0001df4f) calc_display_pane_t2

0x6dee,	// (0x0001df64) calc_display_pane_t3

0x0002,

0xf16e,	// (0x000262e4) calc_display_pane_t

0x6e00,	// (0x0001df76) cell_calc_pane_ParamLimits

0x6e00,	// (0x0001df76) cell_calc_pane

0x09d3,	// (0x00017b49) bg_calc_paper_pane_g1

0x09eb,	// (0x00017b61) bg_calc_paper_pane_g2

0x09df,	// (0x00017b55) bg_calc_paper_pane_g3

0x0a03,	// (0x00017b79) bg_calc_paper_pane_g4

0x09f7,	// (0x00017b6d) bg_calc_paper_pane_g5

0x8669,	// (0x0001f7df) bg_calc_paper_pane_g6

0x867a,	// (0x0001f7f0) bg_calc_paper_pane_g7

0x868b,	// (0x0001f801) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x000262eb) bg_calc_paper_pane_g

0x869e,	// (0x0001f814) calc_bg_paper_pane_g9

0x86b1,	// (0x0001f827) list_calc_item_pane_ParamLimits

0x86b1,	// (0x0001f827) list_calc_item_pane

0x0a0f,	// (0x00017b85) list_calc_item_pane_g1

0x6e2f,	// (0x0001dfa5) list_calc_item_pane_t1_ParamLimits

0x6e2f,	// (0x0001dfa5) list_calc_item_pane_t1

0x6e41,	// (0x0001dfb7) list_calc_item_pane_t2_ParamLimits

0x6e41,	// (0x0001dfb7) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000262fc) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000262fc) list_calc_item_pane_t

0x0a2e,	// (0x00017ba4) cell_calc_pane_g1

0x0a38,	// (0x00017bae) grid_highlight_pane_cp02

0x0a6d,	// (0x00017be3) bg_calc_display_pane_g1

0x6e71,	// (0x0001dfe7) bg_calc_display_pane_g2

0x0a5a,	// (0x00017bd0) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00026306) bg_calc_display_pane_g

0x6e7b,	// (0x0001dff1) cell_qdial_pane_ParamLimits

0x6e7b,	// (0x0001dff1) cell_qdial_pane

0x86d2,	// (0x0001f848) cell_qdial_pane_g1_ParamLimits

0x86d2,	// (0x0001f848) cell_qdial_pane_g1

0x86df,	// (0x0001f855) cell_qdial_pane_g2_ParamLimits

0x86df,	// (0x0001f855) cell_qdial_pane_g2

0x0a76,	// (0x00017bec) cell_qdial_pane_g3_ParamLimits

0x0a76,	// (0x00017bec) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0002630d) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0002630d) cell_qdial_pane_g

0x86fd,	// (0x0001f873) cell_qdial_pane_t1_ParamLimits

0x86fd,	// (0x0001f873) cell_qdial_pane_t1

0x8715,	// (0x0001f88b) cell_qdial_pane_t2_ParamLimits

0x8715,	// (0x0001f88b) cell_qdial_pane_t2

0x8728,	// (0x0001f89e) cell_qdial_pane_t3_ParamLimits

0x8728,	// (0x0001f89e) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00026316) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00026316) cell_qdial_pane_t

0x0665,	// (0x000177db) grid_highlight_pane_cp04

0x0a82,	// (0x00017bf8) thumbnail_qdial_pane_ParamLimits

0x0a82,	// (0x00017bf8) thumbnail_qdial_pane

0x0ade,	// (0x00017c54) list_help_pane

0x0ae7,	// (0x00017c5d) scroll_pane_cp02

0x873b,	// (0x0001f8b1) help_list_pane_t1_ParamLimits

0x873b,	// (0x0001f8b1) help_list_pane_t1

0x6e91,	// (0x0001e007) bg_notes_pane_g2

0x6e99,	// (0x0001e00f) bg_notes_pane_g3

0x6ea1,	// (0x0001e017) notes_bg_pane_g1

0x6ea9,	// (0x0001e01f) notes_bg_pane_g4

0x6eb1,	// (0x0001e027) notes_bg_pane_g5

0x6eb9,	// (0x0001e02f) notes_bg_pane_g6

0x6ec1,	// (0x0001e037) notes_bg_pane_g7

0x6ec9,	// (0x0001e03f) notes_bg_pane_g8

0x6ed1,	// (0x0001e047) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00026334) notes_bg_pane_g

0x8762,	// (0x0001f8d8) list_notes_text_pane_ParamLimits

0x8762,	// (0x0001f8d8) list_notes_text_pane

0x0b38,	// (0x00017cae) list_notes_text_pane_g1

0x8784,	// (0x0001f8fa) list_notes_text_pane_t1

0x09b5,	// (0x00017b2b) listscroll_cale_week_pane

0x87af,	// (0x0001f925) bg_cale_heading_pane

0x0b52,	// (0x00017cc8) bg_cale_pane_cp01

0x87cb,	// (0x0001f941) cale_week_corner_pane

0x87e1,	// (0x0001f957) cale_week_day_heading_pane

0x87fd,	// (0x0001f973) cale_week_scroll_pane_g1

0x8816,	// (0x0001f98c) cale_week_scroll_pane_g2

0x8827,	// (0x0001f99d) cale_week_scroll_pane_g3

0x8838,	// (0x0001f9ae) cale_week_scroll_pane_g4

0x8849,	// (0x0001f9bf) cale_week_scroll_pane_g5

0x885a,	// (0x0001f9d0) cale_week_scroll_pane_g6

0x886d,	// (0x0001f9e3) cale_week_scroll_pane_g7

0x8880,	// (0x0001f9f6) cale_week_scroll_pane_g8

0x8893,	// (0x0001fa09) cale_week_scroll_pane_g9

0x88a4,	// (0x0001fa1a) cale_week_scroll_pane_g10

0x88b5,	// (0x0001fa2b) cale_week_scroll_pane_g11

0x88c6,	// (0x0001fa3c) cale_week_scroll_pane_g12

0x88d7,	// (0x0001fa4d) cale_week_scroll_pane_g13

0x88e8,	// (0x0001fa5e) cale_week_scroll_pane_g14

0x8901,	// (0x0001fa77) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00026343) cale_week_scroll_pane_g

0x891a,	// (0x0001fa90) cale_week_time_pane

0x892d,	// (0x0001faa3) grid_cale_week_pane

0x894a,	// (0x0001fac0) scroll_pane_cp08

0x8964,	// (0x0001fada) cell_cale_week_pane_ParamLimits

0x8964,	// (0x0001fada) cell_cale_week_pane

0x89a6,	// (0x0001fb1c) cale_week_day_heading_pane_t1

0x89d3,	// (0x0001fb49) cale_week_day_heading_pane_t2

0x8a00,	// (0x0001fb76) cale_week_day_heading_pane_t3

0x8a2d,	// (0x0001fba3) cale_week_day_heading_pane_t4

0x8a5a,	// (0x0001fbd0) cale_week_day_heading_pane_t5

0x8a87,	// (0x0001fbfd) cale_week_day_heading_pane_t6

0x8ab4,	// (0x0001fc2a) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00026362) cale_week_day_heading_pane_t

0x0b7d,	// (0x00017cf3) bg_cale_side_pane

0x6ed9,	// (0x0001e04f) cale_week_time_pane_t1

0x6ef1,	// (0x0001e067) cale_week_time_pane_t2

0x6f09,	// (0x0001e07f) cale_week_time_pane_t3

0x6f21,	// (0x0001e097) cale_week_time_pane_t4

0x6f39,	// (0x0001e0af) cale_week_time_pane_t5

0x6f51,	// (0x0001e0c7) cale_week_time_pane_t6

0x6f69,	// (0x0001e0df) cale_week_time_pane_t7

0x6f81,	// (0x0001e0f7) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00026371) cale_week_time_pane_t

0x8ae1,	// (0x0001fc57) cell_cale_week_pane_g2

0x8afa,	// (0x0001fc70) cell_cale_week_pane_g3_ParamLimits

0x8afa,	// (0x0001fc70) cell_cale_week_pane_g3

0x0b8b,	// (0x00017d01) grid_highlight_pane_cp07

0x0b93,	// (0x00017d09) listscroll_gms_pane

0x0b9d,	// (0x00017d13) grid_gms_pane

0x0ba6,	// (0x00017d1c) listscroll_gms_pane_g1

0x0bae,	// (0x00017d24) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00026382) listscroll_gms_pane_g

0x8b12,	// (0x0001fc88) scroll_pane_cp010

0x8b1d,	// (0x0001fc93) cell_gms_pane_ParamLimits

0x8b1d,	// (0x0001fc93) cell_gms_pane

0x8b30,	// (0x0001fca6) cell_gms_pane_g1

0x0bb6,	// (0x00017d2c) cell_gms_pane_g2

0x0bbe,	// (0x00017d34) cell_gms_pane_g3

0x0bc7,	// (0x00017d3d) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00026387) cell_gms_pane_g

0x0bd0,	// (0x00017d46) grid_highlight_pane_cp09

0xacaf,	// (0x00021e25) phob_pre_status_pane_g1

0xacb7,	// (0x00021e2d) phob_pre_status_pane_g2

0xacbf,	// (0x00021e35) phob_pre_status_pane_g3

0xacc7,	// (0x00021e3d) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00026776) phob_pre_status_pane_g

0xacd7,	// (0x00021e4d) phob_pre_status_pane_t1

0xace7,	// (0x00021e5d) phob_pre_status_pane_t2

0xacf7,	// (0x00021e6d) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00026781) phob_pre_status_pane_t

0x0665,	// (0x000177db) bg_list_pane_cp05

0x6fa5,	// (0x0001e11b) grid_vorec_pane

0x6faf,	// (0x0001e125) vorec_t1

0x6fbd,	// (0x0001e133) vorec_t2

0x6fcb,	// (0x0001e141) vorec_t3

0x6fd9,	// (0x0001e14f) vorec_t4

0x6fe7,	// (0x0001e15d) vorec_t5

0x6ff5,	// (0x0001e16b) vorec_t6

0x0006,

0xf21a,	// (0x00026390) vorec_t

0x7011,	// (0x0001e187) wait_bar_pane_cp01

0x8b38,	// (0x0001fcae) cell_vorec_pane_ParamLimits

0x8b38,	// (0x0001fcae) cell_vorec_pane

0x0c42,	// (0x00017db8) cell_vorec_pane_g1

0x0665,	// (0x000177db) grid_highlight_pane_cp05

0x8b5b,	// (0x0001fcd1) cams_zoom_pane

0x8b67,	// (0x0001fcdd) image_vga_pane

0x8b76,	// (0x0001fcec) main_camera_pane_g1

0x8b84,	// (0x0001fcfa) main_camera_pane_g2

0x8b90,	// (0x0001fd06) main_camera_pane_g3

0x8b9e,	// (0x0001fd14) main_camera_pane_g4

0x8bac,	// (0x0001fd22) main_camera_pane_g5

0x8bba,	// (0x0001fd30) main_camera_pane_g6

0x8bc8,	// (0x0001fd3e) main_camera_pane_g7

0x0007,

0xf229,	// (0x0002639f) main_camera_pane_g

0x8bd6,	// (0x0001fd4c) main_camera_pane_t1

0x8be8,	// (0x0001fd5e) main_camera_pane_t2

0x0001,

0xf23a,	// (0x000263b0) main_camera_pane_t

0x8c0b,	// (0x0001fd81) cams_zoom_pane_cp_ParamLimits

0x8c0b,	// (0x0001fd81) cams_zoom_pane_cp

0x8c2f,	// (0x0001fda5) image_cif_pane_ParamLimits

0x8c2f,	// (0x0001fda5) image_cif_pane

0x8c4d,	// (0x0001fdc3) image_subqcif_pane

0x8c57,	// (0x0001fdcd) main_video_pane_g1_ParamLimits

0x8c57,	// (0x0001fdcd) main_video_pane_g1

0x8c77,	// (0x0001fded) main_video_pane_g2_ParamLimits

0x8c77,	// (0x0001fded) main_video_pane_g2

0x8ca7,	// (0x0001fe1d) main_video_pane_g3_ParamLimits

0x8ca7,	// (0x0001fe1d) main_video_pane_g3

0x8cd0,	// (0x0001fe46) main_video_pane_g4_ParamLimits

0x8cd0,	// (0x0001fe46) main_video_pane_g4

0x8cf9,	// (0x0001fe6f) main_video_pane_g5_ParamLimits

0x8cf9,	// (0x0001fe6f) main_video_pane_g5

0x0c58,	// (0x00017dce) main_video_pane_g6_ParamLimits

0x0c58,	// (0x00017dce) main_video_pane_g6

0x0006,

0xf23f,	// (0x000263b5) main_video_pane_g_ParamLimits

0xf23f,	// (0x000263b5) main_video_pane_g

0x8d1b,	// (0x0001fe91) main_video_pane_t1_ParamLimits

0x8d1b,	// (0x0001fe91) main_video_pane_t1

0x0c72,	// (0x00017de8) cams_zoom_pane_g1

0x0c7b,	// (0x00017df1) cams_zoom_pane_g2

0x0c84,	// (0x00017dfa) cams_zoom_pane_g3

0x0c8d,	// (0x00017e03) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x000263c4) cams_zoom_pane_g

0x8d65,	// (0x0001fedb) grid_cams_pane

0x8d73,	// (0x0001fee9) linegrid_cams_pane

0x8d7f,	// (0x0001fef5) cell_cams_pane_ParamLimits

0x8d7f,	// (0x0001fef5) cell_cams_pane

0x0c96,	// (0x00017e0c) cams_burst_image_pane

0x0c9e,	// (0x00017e14) cell_cams_pane_g1

0x0665,	// (0x000177db) grid_highlight_pane_cp03

0x0a2e,	// (0x00017ba4) mp_bg_pane_g1

0x0665,	// (0x000177db) bg_list_pane_cp03

0x2ab3,	// (0x00019c29) bg_mp_pane

0x2abb,	// (0x00019c31) grid_mp_pane

0x2ac3,	// (0x00019c39) media_player_g1

0x2acd,	// (0x00019c43) media_player_t1

0x2adb,	// (0x00019c51) media_player_t2

0x2ae9,	// (0x00019c5f) media_player_t3

0x2af7,	// (0x00019c6d) media_player_t4

0x2b05,	// (0x00019c7b) media_player_t5

0x2b13,	// (0x00019c89) media_player_t6

0x2b21,	// (0x00019c97) media_player_t7

0x0006,

0xf5ea,	// (0x00026760) media_player_t

0x2b2f,	// (0x00019ca5) wait_bar_pane_cp02

0xf5cf,	// (0x00026745) main_usb_pane_t

0xaca6,	// (0x00021e1c) cell_mp_pane

0x0a2e,	// (0x00017ba4) cell_mp_pane_g1

0x0665,	// (0x000177db) grid_highlight_pane_cp06

0x0d64,	// (0x00017eda) grid_skin_colour_pane

0x0d6c,	// (0x00017ee2) list_highlight_pane_cp03

0x8ded,	// (0x0001ff63) skin_g1

0x0d74,	// (0x00017eea) skin_t1

0x0d83,	// (0x00017ef9) skin_t2

0x0001,

0xf283,	// (0x000263f9) skin_t

0x8df7,	// (0x0001ff6d) cell_skin_colour_pane_ParamLimits

0x8df7,	// (0x0001ff6d) cell_skin_colour_pane

0x0d91,	// (0x00017f07) cell_skin_colour_pane_g1

0x8e77,	// (0x0001ffed) call_video_g1_ParamLimits

0x8e77,	// (0x0001ffed) call_video_g1

0x8e87,	// (0x0001fffd) call_video_g2_ParamLimits

0x8e87,	// (0x0001fffd) call_video_g2

0x0001,

0xf288,	// (0x000263fe) call_video_g_ParamLimits

0xf288,	// (0x000263fe) call_video_g

0x8ed7,	// (0x0002004d) call_video_uplink_pane_cp1_ParamLimits

0x8ed7,	// (0x0002004d) call_video_uplink_pane_cp1

0x0da3,	// (0x00017f19) call_video_uplink_pane_cp2

0x8fa5,	// (0x0002011b) video_down_crop_pane_ParamLimits

0x8fa5,	// (0x0002011b) video_down_crop_pane

0x9097,	// (0x0002020d) video_down_pane_ParamLimits

0x9097,	// (0x0002020d) video_down_pane

0x0dab,	// (0x00017f21) video_down_subqcif_pane_ParamLimits

0x0dab,	// (0x00017f21) video_down_subqcif_pane

0x0dc5,	// (0x00017f3b) video_down_subqcif_pane_cp_ParamLimits

0x0dc5,	// (0x00017f3b) video_down_subqcif_pane_cp

0x0ded,	// (0x00017f63) im_reading_pane_ParamLimits

0x0ded,	// (0x00017f63) im_reading_pane

0x91b4,	// (0x0002032a) im_writing_pane_ParamLimits

0x91b4,	// (0x0002032a) im_writing_pane

0x91d2,	// (0x00020348) im_reading_pane_t1

0x0e07,	// (0x00017f7d) list_im_pane

0x0e18,	// (0x00017f8e) scroll_pane_cp07

0x9214,	// (0x0002038a) im_writing_pane_t1_ParamLimits

0x9214,	// (0x0002038a) im_writing_pane_t1

0x0e31,	// (0x00017fa7) im_writing_pane_t2_ParamLimits

0x0e31,	// (0x00017fa7) im_writing_pane_t2

0x0001,

0xf292,	// (0x00026408) im_writing_pane_t_ParamLimits

0xf292,	// (0x00026408) im_writing_pane_t

0x0665,	// (0x000177db) input_focus_pane_cp04

0x0665,	// (0x000177db) input_focus_pane_cp05

0x9226,	// (0x0002039c) list_im_single_pane_ParamLimits

0x9226,	// (0x0002039c) list_im_single_pane

0x923f,	// (0x000203b5) list_single_im_pane_t1

0xac6a,	// (0x00021de0) blid_accuracy_pane

0xac72,	// (0x00021de8) blid_compass_pane

0xac7c,	// (0x00021df2) main_location_t1

0xac8a,	// (0x00021e00) main_location_t2

0xac98,	// (0x00021e0e) main_location_t3

0x0002,

0xf5f9,	// (0x0002676f) main_location_t

0x0665,	// (0x000177db) aid_levels_location

0x0a2e,	// (0x00017ba4) blid_accuracy_pane_g1

0x0a2e,	// (0x00017ba4) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0002646a) blid_accuracy_pane_g

0x0e79,	// (0x00017fef) wml_content_pane

0x0eb7,	// (0x0001802d) wml_button_pane_ParamLimits

0x0eb7,	// (0x0001802d) wml_button_pane

0x924e,	// (0x000203c4) wml_list_single_large_pane_ParamLimits

0x924e,	// (0x000203c4) wml_list_single_large_pane

0x9270,	// (0x000203e6) wml_list_single_medium_pane_ParamLimits

0x9270,	// (0x000203e6) wml_list_single_medium_pane

0x9293,	// (0x00020409) wml_list_single_small_pane_ParamLimits

0x9293,	// (0x00020409) wml_list_single_small_pane

0x0ecb,	// (0x00018041) wml_selection_box_pane_ParamLimits

0x0ecb,	// (0x00018041) wml_selection_box_pane

0x0ede,	// (0x00018054) wml_list_single_pane_t1

0x0eed,	// (0x00018063) wml_list_single_medium_pane_t1

0x0efc,	// (0x00018072) wml_list_single_large_pane_t1

0x0f0b,	// (0x00018081) input_focus_pane_cp02_ParamLimits

0x0f0b,	// (0x00018081) input_focus_pane_cp02

0x0f1e,	// (0x00018094) wml_selection_box_pane_g1

0x0f27,	// (0x0001809d) wml_selection_box_pane_t1_ParamLimits

0x0f27,	// (0x0001809d) wml_selection_box_pane_t1

0x08c0,	// (0x00017a36) bg_wml_button_pane_ParamLimits

0x08c0,	// (0x00017a36) bg_wml_button_pane

0x0f3f,	// (0x000180b5) wml_button_pane_g1

0x0f47,	// (0x000180bd) wml_button_pane_t1

0x0f3f,	// (0x000180b5) wml_button_bg_pane_g1

0x0f57,	// (0x000180cd) wml_button_bg_pane_g2

0x0f5f,	// (0x000180d5) wml_button_bg_pane_g3

0x0f67,	// (0x000180dd) wml_button_bg_pane_g4

0x0f6f,	// (0x000180e5) wml_button_bg_pane_g5

0x0f77,	// (0x000180ed) wml_button_bg_pane_g6

0x0f7f,	// (0x000180f5) wml_button_bg_pane_g7

0x0f87,	// (0x000180fd) wml_button_bg_pane_g8

0x0f8f,	// (0x00018105) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0002640d) wml_button_bg_pane_g

0x92bb,	// (0x00020431) bg_list_pane_cp02

0x0f97,	// (0x0001810d) mce_header_pane_ParamLimits

0x0f97,	// (0x0001810d) mce_header_pane

0x0fad,	// (0x00018123) mce_icon_pane

0x0fad,	// (0x00018123) mce_image_pane

0x0fb6,	// (0x0001812c) mce_text_pane_ParamLimits

0x0fb6,	// (0x0001812c) mce_text_pane

0x92c5,	// (0x0002043b) scroll_pane_cp03

0x0eaf,	// (0x00018025) scroll_pane_cp04

0x0fc9,	// (0x0001813f) scroll_pane_cp05_ParamLimits

0x0fc9,	// (0x0001813f) scroll_pane_cp05

0x92cf,	// (0x00020445) mce_header_field_pane_ParamLimits

0x92cf,	// (0x00020445) mce_header_field_pane

0x92f1,	// (0x00020467) mce_header_field_pane_2_ParamLimits

0x92f1,	// (0x00020467) mce_header_field_pane_2

0x9307,	// (0x0002047d) mce_header_field_pane_3

0x930f,	// (0x00020485) list_single_mce_message_pane_ParamLimits

0x930f,	// (0x00020485) list_single_mce_message_pane

0x9328,	// (0x0002049e) list_single_mce_smart_pane_ParamLimits

0x9328,	// (0x0002049e) list_single_mce_smart_pane

0x0fd5,	// (0x0001814b) input_focus_pane_cp03

0x0fde,	// (0x00018154) list_header_data_pane

0x934c,	// (0x000204c2) mce_header_field_pane_t1

0x935c,	// (0x000204d2) list_single_mce_header_pane_ParamLimits

0x935c,	// (0x000204d2) list_single_mce_header_pane

0x0fe6,	// (0x0001815c) list_single_mce_header_pane_t1

0x0ff5,	// (0x0001816b) list_single_mce_message_pane_g1

0x0ffd,	// (0x00018173) list_single_mce_message_pane_t1

0x9392,	// (0x00020508) bg_cale_heading_pane_cp01_ParamLimits

0x9392,	// (0x00020508) bg_cale_heading_pane_cp01

0x100b,	// (0x00018181) bg_cale_pane_cp02_ParamLimits

0x100b,	// (0x00018181) bg_cale_pane_cp02

0x93c5,	// (0x0002053b) cale_month_corner_pane

0x93db,	// (0x00020551) cale_month_day_heading_pane_ParamLimits

0x93db,	// (0x00020551) cale_month_day_heading_pane

0x941e,	// (0x00020594) cale_month_pane_g1_ParamLimits

0x941e,	// (0x00020594) cale_month_pane_g1

0x944a,	// (0x000205c0) cale_month_pane_g2_ParamLimits

0x944a,	// (0x000205c0) cale_month_pane_g2

0x946d,	// (0x000205e3) cale_month_pane_g3_ParamLimits

0x946d,	// (0x000205e3) cale_month_pane_g3

0x94a9,	// (0x0002061f) cale_month_pane_g4_ParamLimits

0x94a9,	// (0x0002061f) cale_month_pane_g4

0x94e5,	// (0x0002065b) cale_month_pane_g5_ParamLimits

0x94e5,	// (0x0002065b) cale_month_pane_g5

0x9521,	// (0x00020697) cale_month_pane_g6_ParamLimits

0x9521,	// (0x00020697) cale_month_pane_g6

0x956d,	// (0x000206e3) cale_month_pane_g7_ParamLimits

0x956d,	// (0x000206e3) cale_month_pane_g7

0x95b9,	// (0x0002072f) cale_month_pane_g8_ParamLimits

0x95b9,	// (0x0002072f) cale_month_pane_g8

0x9605,	// (0x0002077b) cale_month_pane_g9_ParamLimits

0x9605,	// (0x0002077b) cale_month_pane_g9

0x963f,	// (0x000207b5) cale_month_pane_g10_ParamLimits

0x963f,	// (0x000207b5) cale_month_pane_g10

0x9679,	// (0x000207ef) cale_month_pane_g11_ParamLimits

0x9679,	// (0x000207ef) cale_month_pane_g11

0x96b3,	// (0x00020829) cale_month_pane_g12_ParamLimits

0x96b3,	// (0x00020829) cale_month_pane_g12

0x96f1,	// (0x00020867) cale_month_pane_g13_ParamLimits

0x96f1,	// (0x00020867) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00026420) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00026420) cale_month_pane_g

0x972f,	// (0x000208a5) cale_month_week_pane

0x9742,	// (0x000208b8) grid_cale_month_pane_ParamLimits

0x9742,	// (0x000208b8) grid_cale_month_pane

0x9780,	// (0x000208f6) cale_month_day_heading_pane_t1

0x97de,	// (0x00020954) cale_month_day_heading_pane_t2

0x9843,	// (0x000209b9) cale_month_day_heading_pane_t3

0x98a8,	// (0x00020a1e) cale_month_day_heading_pane_t4

0x990d,	// (0x00020a83) cale_month_day_heading_pane_t5

0x997a,	// (0x00020af0) cale_month_day_heading_pane_t6

0x99ef,	// (0x00020b65) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0002643b) cale_month_day_heading_pane_t

0x0b7d,	// (0x00017cf3) bg_cale_side_pane_cp01

0x9a64,	// (0x00020bda) cale_month_week_pane_t1

0x9a7b,	// (0x00020bf1) cale_month_week_pane_t2

0x9a92,	// (0x00020c08) cale_month_week_pane_t3

0x9aa9,	// (0x00020c1f) cale_month_week_pane_t4

0x9ac0,	// (0x00020c36) cale_month_week_pane_t5

0x9ad7,	// (0x00020c4d) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0002644a) cale_month_week_pane_t

0x9aee,	// (0x00020c64) cell_cale_month_pane_ParamLimits

0x9aee,	// (0x00020c64) cell_cale_month_pane

0x7019,	// (0x0001e18f) cell_cale_month_pane_g1

0x7025,	// (0x0001e19b) cell_cale_month_pane_t1_ParamLimits

0x7025,	// (0x0001e19b) cell_cale_month_pane_t1

0x0b8b,	// (0x00017d01) grid_highlight_pane_cp08

0x0a2e,	// (0x00017ba4) main_smil_g1

0x9bbc,	// (0x00020d32) smil_status_pane

0x1076,	// (0x000181ec) smil_text_pane

0x29d1,	// (0x00019b47) bg_popup_call3_rect_pane_g8

0x29d9,	// (0x00019b4f) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x00026703) bg_popup_call3_rect_pane_g

0x2c81,	// (0x00019df7) smil_status_volume_pane_g1

0x1080,	// (0x000181f6) smil_status_pane_t1

0x7163,	// (0x0001e2d9) volume_smil_pane

0x1097,	// (0x0001820d) list_smil_text_pane

0x9bcf,	// (0x00020d45) scroll_pane_cp011

0x9bda,	// (0x00020d50) smil_text_list_pane_t1_ParamLimits

0x9bda,	// (0x00020d50) smil_text_list_pane_t1

0x7041,	// (0x0001e1b7) aid_volume_smil_ParamLimits

0x7041,	// (0x0001e1b7) aid_volume_smil

0x0a2e,	// (0x00017ba4) smil_volume_pane_g1

0x0a2e,	// (0x00017ba4) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0002646a) smil_volume_pane_g

0x09b5,	// (0x00017b2b) listscroll_cale_day_pane

0x10c3,	// (0x00018239) bg_cale_pane

0x10db,	// (0x00018251) list_cale_pane

0x10ec,	// (0x00018262) scroll_pane_cp09

0x10fd,	// (0x00018273) cale_bg_pane_g1

0x1105,	// (0x0001827b) cale_bg_pane_g2

0x110d,	// (0x00018283) cale_bg_pane_g3

0x1115,	// (0x0001828b) cale_bg_pane_g4

0x111d,	// (0x00018293) cale_bg_pane_g5

0x1125,	// (0x0001829b) cale_bg_pane_g6

0x112d,	// (0x000182a3) cale_bg_pane_g7

0x1135,	// (0x000182ab) cale_bg_pane_g8

0x113d,	// (0x000182b3) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0002646f) cale_bg_pane_g

0x9c2e,	// (0x00020da4) list_cale_time_pane_ParamLimits

0x9c2e,	// (0x00020da4) list_cale_time_pane

0x9c43,	// (0x00020db9) list_cale_time_pane_g1_ParamLimits

0x9c43,	// (0x00020db9) list_cale_time_pane_g1

0x1145,	// (0x000182bb) list_cale_time_pane_g2_ParamLimits

0x1145,	// (0x000182bb) list_cale_time_pane_g2

0x9c4f,	// (0x00020dc5) list_cale_time_pane_g3_ParamLimits

0x9c4f,	// (0x00020dc5) list_cale_time_pane_g3

0x9c5d,	// (0x00020dd3) list_cale_time_pane_g4_ParamLimits

0x9c5d,	// (0x00020dd3) list_cale_time_pane_g4

0x9c6b,	// (0x00020de1) list_cale_time_pane_g5_ParamLimits

0x9c6b,	// (0x00020de1) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00026482) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00026482) list_cale_time_pane_g

0x9c79,	// (0x00020def) list_cale_time_pane_t1_ParamLimits

0x9c79,	// (0x00020def) list_cale_time_pane_t1

0x9ca1,	// (0x00020e17) list_cale_time_pane_t2_ParamLimits

0x9ca1,	// (0x00020e17) list_cale_time_pane_t2

0x9fc6,	// (0x0002113c) aid_blid_cardinal_pane

0xa008,	// (0x0002117e) compass_pane_t4

0x9cc9,	// (0x00020e3f) list_cale_time_pane_t4_ParamLimits

0x9cc9,	// (0x00020e3f) list_cale_time_pane_t4

0xa016,	// (0x0002118c) compass_pane_t5

0xa026,	// (0x0002119c) compass_pane_t6

0xa034,	// (0x000211aa) compass_pane_t7

0x1637,	// (0x000187ad) navi_pane_cc_t1

0x179e,	// (0x00018914) aid_phob_thumbnail_center_pane

0xa766,	// (0x000218dc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0002648f) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0002648f) list_cale_time_pane_t

0x02bc,	// (0x00017432) bg_popup_window_pane_cp02_ParamLimits

0x02bc,	// (0x00017432) bg_popup_window_pane_cp02

0x115f,	// (0x000182d5) heading_pane_cp01_ParamLimits

0x115f,	// (0x000182d5) heading_pane_cp01

0x116b,	// (0x000182e1) loc_req_pane_ParamLimits

0x116b,	// (0x000182e1) loc_req_pane

0x117b,	// (0x000182f1) loc_type_pane_ParamLimits

0x117b,	// (0x000182f1) loc_type_pane

0x118d,	// (0x00018303) loc_type_pane_t1_ParamLimits

0x118d,	// (0x00018303) loc_type_pane_t1

0x119f,	// (0x00018315) loc_type_pane_t2_ParamLimits

0x119f,	// (0x00018315) loc_type_pane_t2

0x11b1,	// (0x00018327) loc_type_pane_t3_ParamLimits

0x11b1,	// (0x00018327) loc_type_pane_t3

0x0002,

0xf320,	// (0x00026496) loc_type_pane_t_ParamLimits

0xf320,	// (0x00026496) loc_type_pane_t

0x11c3,	// (0x00018339) list_loc_req_pane

0x11cd,	// (0x00018343) scroll_pane_cp012

0x9cf1,	// (0x00020e67) list_single_loc_request_popup_menu_pane_ParamLimits

0x9cf1,	// (0x00020e67) list_single_loc_request_popup_menu_pane

0x11d8,	// (0x0001834e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x11d8,	// (0x0001834e) list_single_loc_request_popup_menu_pane_g1

0x11e4,	// (0x0001835a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x11e4,	// (0x0001835a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0002649d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0002649d) list_single_loc_request_popup_menu_pane_g

0x11f0,	// (0x00018366) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x11f0,	// (0x00018366) list_single_loc_request_popup_menu_pane_t1

0x9d03,	// (0x00020e79) bg_popup_window_pane_cp03_ParamLimits

0x9d03,	// (0x00020e79) bg_popup_window_pane_cp03

0x9d11,	// (0x00020e87) heading_loc_req_pane_ParamLimits

0x9d11,	// (0x00020e87) heading_loc_req_pane

0x9d1d,	// (0x00020e93) popup_dyc_status_message_window_g1_ParamLimits

0x9d1d,	// (0x00020e93) popup_dyc_status_message_window_g1

0x9d29,	// (0x00020e9f) popup_dyc_status_message_window_t1_ParamLimits

0x9d29,	// (0x00020e9f) popup_dyc_status_message_window_t1

0x9d3b,	// (0x00020eb1) popup_dyc_status_message_window_t2_ParamLimits

0x9d3b,	// (0x00020eb1) popup_dyc_status_message_window_t2

0x9d4d,	// (0x00020ec3) popup_dyc_status_message_window_t3_ParamLimits

0x9d4d,	// (0x00020ec3) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x000264a2) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x000264a2) popup_dyc_status_message_window_t

0x0665,	// (0x000177db) bg_heading_pane_cp01

0x1212,	// (0x00018388) heading_loc_req_pane_g1

0x121a,	// (0x00018390) heading_loc_req_pane_g2

0x1222,	// (0x00018398) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x000264a9) heading_loc_req_pane_g

0x122a,	// (0x000183a0) heading_loc_req_pane_t1

0x12b1,	// (0x00018427) bg_popup_sub_pane_cp01_ParamLimits

0x12b1,	// (0x00018427) bg_popup_sub_pane_cp01

0x12bf,	// (0x00018435) popup_cale_events_window_g1_ParamLimits

0x12bf,	// (0x00018435) popup_cale_events_window_g1

0x12df,	// (0x00018455) popup_cale_events_window_g2_ParamLimits

0x12df,	// (0x00018455) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x000264dd) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x000264dd) popup_cale_events_window_g

0x12ff,	// (0x00018475) popup_cale_events_window_t1_ParamLimits

0x12ff,	// (0x00018475) popup_cale_events_window_t1

0x1311,	// (0x00018487) popup_cale_events_window_t2_ParamLimits

0x1311,	// (0x00018487) popup_cale_events_window_t2

0x134f,	// (0x000184c5) popup_cale_events_window_t3_ParamLimits

0x134f,	// (0x000184c5) popup_cale_events_window_t3

0x1389,	// (0x000184ff) popup_cale_events_window_t4_ParamLimits

0x1389,	// (0x000184ff) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000264e2) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000264e2) popup_cale_events_window_t

0x9dd1,	// (0x00020f47) call_type_pane

0x17b6,	// (0x0001892c) popup_call_status_window_g1

0x9ddd,	// (0x00020f53) popup_call_status_window_g2

0x9de9,	// (0x00020f5f) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000264eb) popup_call_status_window_g

0x13bf,	// (0x00018535) call_type_pane_g1

0x13c8,	// (0x0001853e) call_type_pane_g2

0x0001,

0xf37c,	// (0x000264f2) call_type_pane_g

0x0665,	// (0x000177db) bg_popup_sub_pane_cp02

0x13d1,	// (0x00018547) listscroll_popup_wml_pane

0x13d9,	// (0x0001854f) list_wml_pane

0x13e3,	// (0x00018559) scroll_pane_cp013

0x13ee,	// (0x00018564) list_single_graphic_popup_wml_pane_ParamLimits

0x13ee,	// (0x00018564) list_single_graphic_popup_wml_pane

0x0a2e,	// (0x00017ba4) list_single_graphic_popup_wml_pane_g1

0x1402,	// (0x00018578) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000264f7) list_single_graphic_popup_wml_pane_g

0x140a,	// (0x00018580) list_single_graphic_popup_wml_pane_t1

0x1418,	// (0x0001858e) aid_call_pane

0x08b8,	// (0x00017a2e) popup_clock_analogue_window_g1

0x08b8,	// (0x00017a2e) popup_clock_analogue_window_g2

0x7063,	// (0x0001e1d9) popup_clock_analogue_window_g3

0x7063,	// (0x0001e1d9) popup_clock_analogue_window_g4

0x0a2e,	// (0x00017ba4) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000264fc) popup_clock_analogue_window_g

0x706b,	// (0x0001e1e1) popup_clock_analogue_window_t1

0x7079,	// (0x0001e1ef) clock_digital_number_pane_ParamLimits

0x7079,	// (0x0001e1ef) clock_digital_number_pane

0x7085,	// (0x0001e1fb) clock_digital_number_pane_cp02_ParamLimits

0x7085,	// (0x0001e1fb) clock_digital_number_pane_cp02

0x7091,	// (0x0001e207) clock_digital_number_pane_cp03_ParamLimits

0x7091,	// (0x0001e207) clock_digital_number_pane_cp03

0x709d,	// (0x0001e213) clock_digital_number_pane_cp04_ParamLimits

0x709d,	// (0x0001e213) clock_digital_number_pane_cp04

0x70a9,	// (0x0001e21f) clock_digital_separator_pane_ParamLimits

0x70a9,	// (0x0001e21f) clock_digital_separator_pane

0x70b5,	// (0x0001e22b) popup_clock_digital_window_t1

0x0a2e,	// (0x00017ba4) clock_digital_number_pane_g1

0x0a2e,	// (0x00017ba4) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0002646a) clock_digital_number_pane_g

0x0a2e,	// (0x00017ba4) clock_digital_separator_pane_g1

0x0a2e,	// (0x00017ba4) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0002646a) clock_digital_separator_pane_g

0x0665,	// (0x000177db) bg_popup_window_pane_cp04

0x1497,	// (0x0001860d) heading_pane_cp03

0x149f,	// (0x00018615) listscroll_popup_gms_pane

0x14a7,	// (0x0001861d) grid_large_graphic_popup_pane

0x14b1,	// (0x00018627) listscroll_popup_gms_pane_g1

0x14b9,	// (0x0001862f) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00026507) listscroll_popup_gms_pane_g

0x0eaf,	// (0x00018025) scroll_pane_cp014

0x9df5,	// (0x00020f6b) cell_large_graphic_popup_pane_ParamLimits

0x9df5,	// (0x00020f6b) cell_large_graphic_popup_pane

0x9e0f,	// (0x00020f85) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e0f,	// (0x00020f85) cell_large_graphic_popup_pane_g1

0x14c1,	// (0x00018637) cell_large_graphic_popup_pane_g2_ParamLimits

0x14c1,	// (0x00018637) cell_large_graphic_popup_pane_g2

0x14cd,	// (0x00018643) cell_large_graphic_popup_pane_g3_ParamLimits

0x14cd,	// (0x00018643) cell_large_graphic_popup_pane_g3

0x14da,	// (0x00018650) cell_large_graphic_popup_pane_g4_ParamLimits

0x14da,	// (0x00018650) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0002650c) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0002650c) cell_large_graphic_popup_pane_g

0x14ea,	// (0x00018660) grid_highlight_pane_cp010

0x0a2e,	// (0x00017ba4) bg_popup_call_pane_g1

0x14f4,	// (0x0001866a) list_single_graphic_popup_conf_pane_ParamLimits

0x14f4,	// (0x0001866a) list_single_graphic_popup_conf_pane

0x1506,	// (0x0001867c) list_highlight_pane_cp01

0x150f,	// (0x00018685) list_single_graphic_popup_conf_pane_g1

0x1517,	// (0x0001868d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00026515) list_single_graphic_popup_conf_pane_g

0x151f,	// (0x00018695) list_single_graphic_popup_conf_pane_t1

0x152d,	// (0x000186a3) linegrid_cams_pane_g1

0x9e1b,	// (0x00020f91) linegrid_cams_pane_g2

0x0bbe,	// (0x00017d34) linegrid_cams_pane_g3

0x1536,	// (0x000186ac) linegrid_cams_pane_g4

0x9e24,	// (0x00020f9a) linegrid_cams_pane_g5

0x9e2d,	// (0x00020fa3) linegrid_cams_pane_g6

0x0bc7,	// (0x00017d3d) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0002651a) linegrid_cams_pane_g

0x153f,	// (0x000186b5) popup_clock_analogue_window

0x153f,	// (0x000186b5) popup_clock_digital_window

0x0665,	// (0x000177db) popup_phob_thumbnail_window

0x0a2e,	// (0x00017ba4) call_video_uplink_pane_g1

0x1548,	// (0x000186be) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00026529) call_video_uplink_pane_g

0x1550,	// (0x000186c6) video_uplink_pane

0x1558,	// (0x000186ce) mce_image_pane_g1

0x9e38,	// (0x00020fae) mce_image_pane_g2

0x9e42,	// (0x00020fb8) mce_image_pane_g3

0x9e4c,	// (0x00020fc2) mce_image_pane_g4

0x9e54,	// (0x00020fca) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0002652e) mce_image_pane_g

0x1562,	// (0x000186d8) control_top_pane_stacon_cp01_ParamLimits

0x1562,	// (0x000186d8) control_top_pane_stacon_cp01

0x1576,	// (0x000186ec) uni_indicator_pane_stacon_cp01_ParamLimits

0x1576,	// (0x000186ec) uni_indicator_pane_stacon_cp01

0x1587,	// (0x000186fd) bg_popup_sub_pane_cp03

0x9e5c,	// (0x00020fd2) chi_dic_find_pane

0x9e64,	// (0x00020fda) listscroll_chi_dic_pane

0x9e6d,	// (0x00020fe3) main_pane_chidic_g1

0x9e80,	// (0x00020ff6) chi_dic_find_pane_t1

0x1591,	// (0x00018707) find_chidic_pane

0x159a,	// (0x00018710) chi_dic_list_pane_ParamLimits

0x159a,	// (0x00018710) chi_dic_list_pane

0x15ab,	// (0x00018721) scroll_pane_cp020

0x9e8e,	// (0x00021004) find_chidic_pane_t1

0x0665,	// (0x000177db) input_focus_pane_cp06

0x9e9d,	// (0x00021013) list_chi_dic_pane_ParamLimits

0x9e9d,	// (0x00021013) list_chi_dic_pane

0x9eb2,	// (0x00021028) list_chi_dic_pane_t1_ParamLimits

0x9eb2,	// (0x00021028) list_chi_dic_pane_t1

0x0665,	// (0x000177db) list_highlight_pane_cp020

0x15b3,	// (0x00018729) bg_cale_heading_pane_g1

0x9ec5,	// (0x0002103b) bg_cale_heading_pane_g2

0x9ecd,	// (0x00021043) bg_cale_heading_pane_g3

0x9ed5,	// (0x0002104b) bg_cale_heading_pane_g4

0x9edf,	// (0x00021055) bg_cale_heading_pane_g5

0x9ee9,	// (0x0002105f) bg_cale_heading_pane_g6

0x9ef1,	// (0x00021067) bg_cale_heading_pane_g7

0x9ef9,	// (0x0002106f) bg_cale_heading_pane_g8

0x9f03,	// (0x00021079) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00026539) bg_cale_heading_pane_g

0x15b3,	// (0x00018729) bg_cale_side_pane_g1

0x9f0d,	// (0x00021083) bg_cale_side_pane_g2

0x9f17,	// (0x0002108d) bg_cale_side_pane_g3

0x9f21,	// (0x00021097) bg_cale_side_pane_g4

0x9f2b,	// (0x000210a1) bg_cale_side_pane_g5

0x9f35,	// (0x000210ab) bg_cale_side_pane_g6

0x9f3f,	// (0x000210b5) bg_cale_side_pane_g7

0x9f49,	// (0x000210bf) bg_cale_side_pane_g8

0x9f51,	// (0x000210c7) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0002654c) bg_cale_side_pane_g

0x9f59,	// (0x000210cf) popup_call_status_window_ParamLimits

0x9f59,	// (0x000210cf) popup_call_status_window

0x15bb,	// (0x00018731) stacon_top_pane

0x15c3,	// (0x00018739) status_pane_ParamLimits

0x15c3,	// (0x00018739) status_pane

0x15d8,	// (0x0001874e) status_small_pane

0x15e0,	// (0x00018756) control_pane

0x0665,	// (0x000177db) stacon_bottom_pane

0x15e8,	// (0x0001875e) list_single_mce_smart_pane_t1_ParamLimits

0x15e8,	// (0x0001875e) list_single_mce_smart_pane_t1

0x15fb,	// (0x00018771) list_single_mce_smart_pane_t2_ParamLimits

0x15fb,	// (0x00018771) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0002655f) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0002655f) list_single_mce_smart_pane_t

0x9f65,	// (0x000210db) compass_pane

0x9f70,	// (0x000210e6) main_location2_pane_t1

0x9f86,	// (0x000210fc) main_location2_pane_t2

0x9f9c,	// (0x00021112) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00026564) main_location2_pane_t

0x161a,	// (0x00018790) compass_pane_g1_ParamLimits

0x161a,	// (0x00018790) compass_pane_g1

0x9fea,	// (0x00021160) compass_pane_t1

0x9ff9,	// (0x0002116f) compass_pane_t2

0x0005,

0xf3f7,	// (0x0002656d) compass_pane_t

0xa044,	// (0x000211ba) text_secondary_cp61

0x162e,	// (0x000187a4) navi_pane_cams_g5

0x1651,	// (0x000187c7) navi_pane_im_t1

0x165f,	// (0x000187d5) navi_pane_mp_g1_ParamLimits

0x165f,	// (0x000187d5) navi_pane_mp_g1

0x1673,	// (0x000187e9) navi_pane_mp_g2_ParamLimits

0x1673,	// (0x000187e9) navi_pane_mp_g2

0x167f,	// (0x000187f5) navi_pane_mp_g3_ParamLimits

0x167f,	// (0x000187f5) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00026581) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00026581) navi_pane_mp_g

0x168b,	// (0x00018801) navi_pane_mp_t1

0x1699,	// (0x0001880f) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00026588) navi_pane_mp_t

0x16d5,	// (0x0001884b) navi_pane_vt_g1

0x168b,	// (0x00018801) navi_pane_vt_t1

0x16dd,	// (0x00018853) navi_slider_pane

0x16e5,	// (0x0001885b) zooming_pane

0x16ed,	// (0x00018863) navi_slider_pane_g1

0x70d2,	// (0x0001e248) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0002658f) navi_slider_pane_g

0x1723,	// (0x00018899) aid_levels_zoom

0x172b,	// (0x000188a1) zooming_pane_g1

0x1733,	// (0x000188a9) zooming_pane_g2

0x1733,	// (0x000188a9) zooming_pane_g3

0x0002,

0xf428,	// (0x0002659e) zooming_pane_g

0x173b,	// (0x000188b1) level_10_zoom

0x1744,	// (0x000188ba) level_11_zoom

0x174d,	// (0x000188c3) level_1_zoom

0x1756,	// (0x000188cc) level_2_zoom

0x175f,	// (0x000188d5) level_3_zoom

0x1768,	// (0x000188de) level_4_zoom

0x1771,	// (0x000188e7) level_5_zoom

0x177a,	// (0x000188f0) level_6_zoom

0x1783,	// (0x000188f9) level_7_zoom

0x178c,	// (0x00018902) level_8_zoom

0x1795,	// (0x0001890b) level_9_zoom

0x17a6,	// (0x0001891c) popup_phob_thumbnail_window_g1

0x17ae,	// (0x00018924) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x000265a5) popup_phob_thumbnail_window_g

0x2b37,	// (0x00019cad) level_1_location

0x2b3f,	// (0x00019cb5) level_2_location

0x2b47,	// (0x00019cbd) level_3_location

0x2b4f,	// (0x00019cc5) level_4_location

0x16e5,	// (0x0001885b) level_5_location

0xa171,	// (0x000212e7) mce_icon_pane_g1

0xa179,	// (0x000212ef) mce_icon_pane_g2

0x0001,

0xf434,	// (0x000265aa) mce_icon_pane_g

0xa181,	// (0x000212f7) main_mup_pane_g1_ParamLimits

0xa181,	// (0x000212f7) main_mup_pane_g1

0xa199,	// (0x0002130f) main_mup_pane_g2_ParamLimits

0xa199,	// (0x0002130f) main_mup_pane_g2

0xa1b5,	// (0x0002132b) main_mup_pane_g3_ParamLimits

0xa1b5,	// (0x0002132b) main_mup_pane_g3

0xa1d1,	// (0x00021347) main_mup_pane_g4_ParamLimits

0xa1d1,	// (0x00021347) main_mup_pane_g4

0xa1e5,	// (0x0002135b) main_mup_pane_g5_ParamLimits

0xa1e5,	// (0x0002135b) main_mup_pane_g5

0xa206,	// (0x0002137c) main_mup_pane_g6_ParamLimits

0xa206,	// (0x0002137c) main_mup_pane_g6

0xa226,	// (0x0002139c) main_mup_pane_g7_ParamLimits

0xa226,	// (0x0002139c) main_mup_pane_g7

0xa24a,	// (0x000213c0) main_mup_pane_g8_ParamLimits

0xa24a,	// (0x000213c0) main_mup_pane_g8

0xa26e,	// (0x000213e4) main_mup_pane_g9_ParamLimits

0xa26e,	// (0x000213e4) main_mup_pane_g9

0xa291,	// (0x00021407) main_mup_pane_g10_ParamLimits

0xa291,	// (0x00021407) main_mup_pane_g10

0xa2b4,	// (0x0002142a) main_mup_pane_g11_ParamLimits

0xa2b4,	// (0x0002142a) main_mup_pane_g11

0xa2d4,	// (0x0002144a) main_mup_pane_g12_ParamLimits

0xa2d4,	// (0x0002144a) main_mup_pane_g12

0xa2e2,	// (0x00021458) main_mup_pane_g13_ParamLimits

0xa2e2,	// (0x00021458) main_mup_pane_g13

0x000c,

0xf439,	// (0x000265af) main_mup_pane_g_ParamLimits

0xf439,	// (0x000265af) main_mup_pane_g

0xa2f8,	// (0x0002146e) main_mup_pane_t1_ParamLimits

0xa2f8,	// (0x0002146e) main_mup_pane_t1

0xa317,	// (0x0002148d) main_mup_pane_t2_ParamLimits

0xa317,	// (0x0002148d) main_mup_pane_t2

0xa331,	// (0x000214a7) main_mup_pane_t3_ParamLimits

0xa331,	// (0x000214a7) main_mup_pane_t3

0xa34b,	// (0x000214c1) main_mup_pane_t4_ParamLimits

0xa34b,	// (0x000214c1) main_mup_pane_t4

0xa35d,	// (0x000214d3) main_mup_pane_t5_ParamLimits

0xa35d,	// (0x000214d3) main_mup_pane_t5

0xa36f,	// (0x000214e5) main_mup_pane_t6_ParamLimits

0xa36f,	// (0x000214e5) main_mup_pane_t6

0x0005,

0xf454,	// (0x000265ca) main_mup_pane_t_ParamLimits

0xf454,	// (0x000265ca) main_mup_pane_t

0xa385,	// (0x000214fb) mup_progress_pane_ParamLimits

0xa385,	// (0x000214fb) mup_progress_pane

0xa391,	// (0x00021507) mup_visualizer_pane_ParamLimits

0xa391,	// (0x00021507) mup_visualizer_pane

0xa3cb,	// (0x00021541) mup_volume_pane_ParamLimits

0xa3cb,	// (0x00021541) mup_volume_pane

0x17b6,	// (0x0001892c) mup_visualizer_pane_g1_ParamLimits

0x17b6,	// (0x0001892c) mup_visualizer_pane_g1

0x17b6,	// (0x0001892c) mup_visualizer_pane_g2_ParamLimits

0x17b6,	// (0x0001892c) mup_visualizer_pane_g2

0x161a,	// (0x00018790) mup_visualizer_pane_g3_ParamLimits

0x161a,	// (0x00018790) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x000265d7) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x000265d7) mup_visualizer_pane_g

0x0a2e,	// (0x00017ba4) mup_volume_pane_g1

0x17cc,	// (0x00018942) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000265de) mup_volume_pane_g

0x0a2e,	// (0x00017ba4) mup_progress_pane_g1

0x17d5,	// (0x0001894b) mup_progress_pane_g2

0x17de,	// (0x00018954) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000265e3) mup_progress_pane_g

0x0665,	// (0x000177db) bg_popup_window_pane_cp05

0x17e7,	// (0x0001895d) heading_pane_cp02_ParamLimits

0x17e7,	// (0x0001895d) heading_pane_cp02

0x1803,	// (0x00018979) list_popup_blid_pane

0x180b,	// (0x00018981) list_blid_sat_info_pane_ParamLimits

0x180b,	// (0x00018981) list_blid_sat_info_pane

0x181e,	// (0x00018994) list_blid_sat_info_pane_g1

0x1826,	// (0x0001899c) list_blid_sat_info_pane_t1

0xa4ea,	// (0x00021660) mup_equalizer_pane_ParamLimits

0xa4ea,	// (0x00021660) mup_equalizer_pane

0xa50b,	// (0x00021681) mup_equalizer_pane_cp1_ParamLimits

0xa50b,	// (0x00021681) mup_equalizer_pane_cp1

0xa52c,	// (0x000216a2) mup_equalizer_pane_cp2_ParamLimits

0xa52c,	// (0x000216a2) mup_equalizer_pane_cp2

0xa54d,	// (0x000216c3) mup_equalizer_pane_cp3_ParamLimits

0xa54d,	// (0x000216c3) mup_equalizer_pane_cp3

0xa572,	// (0x000216e8) mup_equalizer_pane_cp4_ParamLimits

0xa572,	// (0x000216e8) mup_equalizer_pane_cp4

0xa597,	// (0x0002170d) mup_equalizer_pane_cp5

0xa5af,	// (0x00021725) mup_equalizer_pane_cp6

0xa5c7,	// (0x0002173d) mup_equalizer_pane_cp7

0x2a51,	// (0x00019bc7) bg_popup_call_poc_act_pane_g9

0x2a59,	// (0x00019bcf) bg_popup_call_poc_act_pane_g10

0x2a61,	// (0x00019bd7) bg_popup_call_poc_act_pane_g11

0x000a,

0x08c0,	// (0x00017a36) mup_scale_pane

0x0a2e,	// (0x00017ba4) mup_scale_pane_g1

0x1834,	// (0x000189aa) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000265ff) mup_scale_pane_g

0x1858,	// (0x000189ce) msg_data_pane

0x1860,	// (0x000189d6) scroll_pane_cp017

0xa5f1,	// (0x00021767) bg_list_pane_cp04_ParamLimits

0xa5f1,	// (0x00021767) bg_list_pane_cp04

0x1870,	// (0x000189e6) msg_data_pane_g1

0xa611,	// (0x00021787) msg_data_pane_g2

0xa61b,	// (0x00021791) msg_data_pane_g3

0xa625,	// (0x0002179b) msg_data_pane_g4

0xa62d,	// (0x000217a3) msg_data_pane_g5

0xa635,	// (0x000217ab) msg_data_pane_g6

0xa63d,	// (0x000217b3) msg_data_pane_g7

0x0006,

0xf498,	// (0x0002660e) msg_data_pane_g

0xa645,	// (0x000217bb) msg_text_pane_ParamLimits

0xa645,	// (0x000217bb) msg_text_pane

0xa66d,	// (0x000217e3) qrid_highlight_pane_cp011_ParamLimits

0xa66d,	// (0x000217e3) qrid_highlight_pane_cp011

0x0665,	// (0x000177db) msg_body_pane

0x0665,	// (0x000177db) msg_header_pane

0x1881,	// (0x000189f7) input_focus_pane_cp07

0xa691,	// (0x00021807) msg_header_pane_t1_ParamLimits

0xa691,	// (0x00021807) msg_header_pane_t1

0x1896,	// (0x00018a0c) msg_header_pane_t2_ParamLimits

0x1896,	// (0x00018a0c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00026622) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00026622) msg_header_pane_t

0x18a8,	// (0x00018a1e) msg_body_pane_g1

0xa6a5,	// (0x0002181b) msg_body_pane_t1_ParamLimits

0xa6a5,	// (0x0002181b) msg_body_pane_t1

0x18b0,	// (0x00018a26) msg_body_pane_t2_ParamLimits

0x18b0,	// (0x00018a26) msg_body_pane_t2

0x18c2,	// (0x00018a38) msg_body_pane_t3_ParamLimits

0x18c2,	// (0x00018a38) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00026627) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00026627) msg_body_pane_t

0x7114,	// (0x0001e28a) main_viewer_pane_g1_ParamLimits

0x7114,	// (0x0001e28a) main_viewer_pane_g1

0x7120,	// (0x0001e296) main_viewer_pane_g2_ParamLimits

0x7120,	// (0x0001e296) main_viewer_pane_g2

0xa6f8,	// (0x0002186e) main_viewer_pane_g3_ParamLimits

0xa6f8,	// (0x0002186e) main_viewer_pane_g3

0xa709,	// (0x0002187f) main_viewer_pane_g4_ParamLimits

0xa709,	// (0x0002187f) main_viewer_pane_g4

0x712c,	// (0x0001e2a2) main_viewer_pane_g5_ParamLimits

0x712c,	// (0x0001e2a2) main_viewer_pane_g5

0x712c,	// (0x0001e2a2) main_viewer_pane_g7_ParamLimits

0x712c,	// (0x0001e2a2) main_viewer_pane_g7

0x713e,	// (0x0001e2b4) main_viewer_pane_g8_ParamLimits

0x713e,	// (0x0001e2b4) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00026637) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00026637) main_viewer_pane_g

0x1916,	// (0x00018a8c) viewer_content_pane_ParamLimits

0x1916,	// (0x00018a8c) viewer_content_pane

0xa73a,	// (0x000218b0) main_postcard_pane_g1_ParamLimits

0xa73a,	// (0x000218b0) main_postcard_pane_g1

0xa748,	// (0x000218be) main_postcard_pane_g2_ParamLimits

0xa748,	// (0x000218be) main_postcard_pane_g2

0xa756,	// (0x000218cc) main_postcard_pane_g3_ParamLimits

0xa756,	// (0x000218cc) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00026648) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00026648) main_postcard_pane_g

0xa766,	// (0x000218dc) main_postcard_pane_g4

0x2c6e,	// (0x00019de4) smil_status_volume_pane_g2

0xa792,	// (0x00021908) postcard_pane_ParamLimits

0xa792,	// (0x00021908) postcard_pane

0x17b6,	// (0x0001892c) postcard_pane_g1_ParamLimits

0x17b6,	// (0x0001892c) postcard_pane_g1

0xa7cc,	// (0x00021942) postcard_pane_g2_ParamLimits

0xa7cc,	// (0x00021942) postcard_pane_g2

0xa7d8,	// (0x0002194e) postcard_pane_g3_ParamLimits

0xa7d8,	// (0x0002194e) postcard_pane_g3

0x1932,	// (0x00018aa8) postcard_pane_g4_ParamLimits

0x1932,	// (0x00018aa8) postcard_pane_g4

0xa7e4,	// (0x0002195a) postcard_pane_g5_ParamLimits

0xa7e4,	// (0x0002195a) postcard_pane_g5

0xa7f0,	// (0x00021966) postcard_pane_g6_ParamLimits

0xa7f0,	// (0x00021966) postcard_pane_g6

0x1924,	// (0x00018a9a) postcard_pane_g7_ParamLimits

0x1924,	// (0x00018a9a) postcard_pane_g7

0x0006,

0xf4df,	// (0x00026655) postcard_pane_g_ParamLimits

0xf4df,	// (0x00026655) postcard_pane_g

0xa7fe,	// (0x00021974) main_mp2_pane_g1_ParamLimits

0xa7fe,	// (0x00021974) main_mp2_pane_g1

0xa80c,	// (0x00021982) main_mp2_pane_g2_ParamLimits

0xa80c,	// (0x00021982) main_mp2_pane_g2

0xa818,	// (0x0002198e) main_mp2_pane_g3_ParamLimits

0xa818,	// (0x0002198e) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00026664) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00026664) main_mp2_pane_g

0xa824,	// (0x0002199a) main_mp2_pane_t1_ParamLimits

0xa824,	// (0x0002199a) main_mp2_pane_t1

0xa83b,	// (0x000219b1) main_mp2_pane_t2_ParamLimits

0xa83b,	// (0x000219b1) main_mp2_pane_t2

0xa84f,	// (0x000219c5) main_mp2_pane_t3_ParamLimits

0xa84f,	// (0x000219c5) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0002666b) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0002666b) main_mp2_pane_t

0x1940,	// (0x00018ab6) pec_content_pane_ParamLimits

0x1940,	// (0x00018ab6) pec_content_pane

0x0eaf,	// (0x00018025) scroll_pane_cp015

0x1952,	// (0x00018ac8) pec_attribute_pane_ParamLimits

0x1952,	// (0x00018ac8) pec_attribute_pane

0xa861,	// (0x000219d7) pec_content_pane_g1_ParamLimits

0xa861,	// (0x000219d7) pec_content_pane_g1

0x1962,	// (0x00018ad8) pec_content_pane_t1_ParamLimits

0x1962,	// (0x00018ad8) pec_content_pane_t1

0x1974,	// (0x00018aea) pec_content_pane_t2_ParamLimits

0x1974,	// (0x00018aea) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00026672) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00026672) pec_content_pane_t

0xa86d,	// (0x000219e3) list_single_graphic_pane_cp01_ParamLimits

0xa86d,	// (0x000219e3) list_single_graphic_pane_cp01

0x08c0,	// (0x00017a36) bg_popup_sub_pane_cp04

0x1986,	// (0x00018afc) popup_mup_playback_window_g1

0x1992,	// (0x00018b08) popup_mup_playback_window_t1

0x19a7,	// (0x00018b1d) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00026677) popup_mup_playback_window_t

0x19de,	// (0x00018b54) main_image_pane_g1_ParamLimits

0x19de,	// (0x00018b54) main_image_pane_g1

0x1a21,	// (0x00018b97) scroll_pane_cp018_ParamLimits

0x1a21,	// (0x00018b97) scroll_pane_cp018

0x1a39,	// (0x00018baf) scroll_pane_cp016_ParamLimits

0x1a39,	// (0x00018baf) scroll_pane_cp016

0xa8fb,	// (0x00021a71) smil2_image_pane_ParamLimits

0xa8fb,	// (0x00021a71) smil2_image_pane

0xa931,	// (0x00021aa7) smil2_root_pane_ParamLimits

0xa931,	// (0x00021aa7) smil2_root_pane

0xa95d,	// (0x00021ad3) smil2_text_pane_ParamLimits

0xa95d,	// (0x00021ad3) smil2_text_pane

0x0665,	// (0x000177db) bg_list_pane_cp06

0x1a75,	// (0x00018beb) grid_radio_pane

0x0665,	// (0x000177db) bg_popup_window_pane_cp06

0x1a7f,	// (0x00018bf5) main_fmradio_pane_t1

0x1497,	// (0x0001860d) heading_pane_cp04

0x1a8d,	// (0x00018c03) main_fmradio_pane_t2

0x2a69,	// (0x00019bdf) popup_cale_lunar_info_window_g1

0x1a9b,	// (0x00018c11) main_fmradio_pane_t3

0x2a71,	// (0x00019be7) popup_cale_lunar_info_window_g2

0x1aab,	// (0x00018c21) main_fmradio_pane_t4

0x0001,

0x1ab9,	// (0x00018c2f) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00026752) popup_cale_lunar_info_window_g

0xf516,	// (0x0002668c) main_fmradio_pane_t

0x1ac7,	// (0x00018c3d) wait_bar_pane_cp03

0x1acf,	// (0x00018c45) cell_fmradio_pane_ParamLimits

0x1acf,	// (0x00018c45) cell_fmradio_pane

0x1924,	// (0x00018a9a) cell_fmradio_pane_g1_ParamLimits

0x1924,	// (0x00018a9a) cell_fmradio_pane_g1

0x0665,	// (0x000177db) grid_highlight_pane_cp011

0x1ae4,	// (0x00018c5a) poc_content_pane_ParamLimits

0x1ae4,	// (0x00018c5a) poc_content_pane

0x1af6,	// (0x00018c6c) scroll_pane_cp019

0xa99d,	// (0x00021b13) popup_call_poc_act_window_ParamLimits

0xa99d,	// (0x00021b13) popup_call_poc_act_window

0xa9aa,	// (0x00021b20) popup_call_poc_inact_window_ParamLimits

0xa9aa,	// (0x00021b20) popup_call_poc_inact_window

0xf5b3,	// (0x00026729) bg_popup_call_poc_act_pane_g

0x29e1,	// (0x00019b57) bg_popup_call_poc_inact_pane_g1

0x29e9,	// (0x00019b5f) bg_popup_call_poc_inact_pane_g2

0x1afe,	// (0x00018c74) popup_call_poc_act_window_g2

0x29f1,	// (0x00019b67) bg_popup_call_poc_inact_pane_g3

0x29f9,	// (0x00019b6f) bg_popup_call_poc_inact_pane_g4

0x2a01,	// (0x00019b77) bg_popup_call_poc_inact_pane_g5

0x1b06,	// (0x00018c7c) popup_call_poc_act_window_t1_ParamLimits

0x1b06,	// (0x00018c7c) popup_call_poc_act_window_t1

0x1b2e,	// (0x00018ca4) popup_call_poc_act_window_t2_ParamLimits

0x1b2e,	// (0x00018ca4) popup_call_poc_act_window_t2

0x1b56,	// (0x00018ccc) popup_call_poc_act_window_t3_ParamLimits

0x1b56,	// (0x00018ccc) popup_call_poc_act_window_t3

0x1b7e,	// (0x00018cf4) popup_call_poc_act_window_t4_ParamLimits

0x1b7e,	// (0x00018cf4) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00026697) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00026697) popup_call_poc_act_window_t

0x2a09,	// (0x00019b7f) bg_popup_call_poc_inact_pane_g6

0x2a11,	// (0x00019b87) bg_popup_call_poc_inact_pane_g7

0x2a19,	// (0x00019b8f) bg_popup_call_poc_inact_pane_g8

0x1b90,	// (0x00018d06) popup_call_poc_inact_window_g2

0x2a21,	// (0x00019b97) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00026716) bg_popup_call_poc_inact_pane_g

0x1b98,	// (0x00018d0e) popup_call_poc_inact_window_t1_ParamLimits

0x1b98,	// (0x00018d0e) popup_call_poc_inact_window_t1

0x1bad,	// (0x00018d23) popup_call_poc_inact_window_t2_ParamLimits

0x1bad,	// (0x00018d23) popup_call_poc_inact_window_t2

0x1bc2,	// (0x00018d38) popup_call_poc_inact_window_t3_ParamLimits

0x1bc2,	// (0x00018d38) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x000266a0) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x000266a0) popup_call_poc_inact_window_t

0x2be1,	// (0x00019d57) context_pane_ParamLimits

0xafb9,	// (0x0002212f) signal_pane_ParamLimits

0x16e5,	// (0x0001885b) main_call2_pane

0x2bcf,	// (0x00019d45) popup_phob_thumbnail2_window_ParamLimits

0x2bcf,	// (0x00019d45) popup_phob_thumbnail2_window

0x70e4,	// (0x0001e25a) aid_hotspot_pointer_arrow_pane

0x70ec,	// (0x0001e262) aid_hotspot_pointer_hand_pane

0xaccf,	// (0x00021e45) phob_pre_status_pane_g5

0x8b5b,	// (0x0001fcd1) cams_zoom_pane_ParamLimits

0x8b67,	// (0x0001fcdd) image_vga_pane_ParamLimits

0x8b76,	// (0x0001fcec) main_camera_pane_g1_ParamLimits

0x8b84,	// (0x0001fcfa) main_camera_pane_g2_ParamLimits

0x8b90,	// (0x0001fd06) main_camera_pane_g3_ParamLimits

0x8b9e,	// (0x0001fd14) main_camera_pane_g4_ParamLimits

0x8bac,	// (0x0001fd22) main_camera_pane_g5_ParamLimits

0x8bba,	// (0x0001fd30) main_camera_pane_g6_ParamLimits

0x8bc8,	// (0x0001fd3e) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0002639f) main_camera_pane_g_ParamLimits

0x8bd6,	// (0x0001fd4c) main_camera_pane_t1_ParamLimits

0x8be8,	// (0x0001fd5e) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x000263b0) main_camera_pane_t_ParamLimits

0x08c0,	// (0x00017a36) bg_popup_preview_window_pane_cp01_ParamLimits

0x08c0,	// (0x00017a36) bg_popup_preview_window_pane_cp01

0x1bd7,	// (0x00018d4d) popup_phob_thumbnail2_window_g1_ParamLimits

0x1bd7,	// (0x00018d4d) popup_phob_thumbnail2_window_g1

0x0665,	// (0x000177db) call2_cli_visual_pane

0xa9c6,	// (0x00021b3c) popup_call2_audio_conf_window_ParamLimits

0xa9c6,	// (0x00021b3c) popup_call2_audio_conf_window

0xa9df,	// (0x00021b55) popup_call2_audio_first_window_ParamLimits

0xa9df,	// (0x00021b55) popup_call2_audio_first_window

0xaa7d,	// (0x00021bf3) popup_call2_audio_in_window_ParamLimits

0xaa7d,	// (0x00021bf3) popup_call2_audio_in_window

0xaac1,	// (0x00021c37) popup_call2_audio_out_window_ParamLimits

0xaac1,	// (0x00021c37) popup_call2_audio_out_window

0xab2b,	// (0x00021ca1) popup_call2_audio_second_window_ParamLimits

0xab2b,	// (0x00021ca1) popup_call2_audio_second_window

0xab89,	// (0x00021cff) popup_call2_audio_wait_window_ParamLimits

0xab89,	// (0x00021cff) popup_call2_audio_wait_window

0x0665,	// (0x000177db) bg_popup_call2_act_pane_cp03

0x08a2,	// (0x00017a18) list_conf_pane_cp

0x1be3,	// (0x00018d59) popup_call2_audio_conf_window_t1

0x1bf1,	// (0x00018d67) list_single_graphic_popup_conf2_pane_ParamLimits

0x1bf1,	// (0x00018d67) list_single_graphic_popup_conf2_pane

0x1506,	// (0x0001867c) list_highlight_pane_cp04

0x1c04,	// (0x00018d7a) list_single_graphic_popup_conf2_pane_g1

0x1517,	// (0x0001868d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x000266a7) list_single_graphic_popup_conf2_pane_g

0x1c0e,	// (0x00018d84) list_single_graphic_popup_conf2_pane_t1

0x1c1c,	// (0x00018d92) bg_popup_call2_act_pane_cp01_ParamLimits

0x1c1c,	// (0x00018d92) bg_popup_call2_act_pane_cp01

0x1ca6,	// (0x00018e1c) call_type_pane_cp05_ParamLimits

0x1ca6,	// (0x00018e1c) call_type_pane_cp05

0x1cfa,	// (0x00018e70) popup_call2_audio_second_window_g1_ParamLimits

0x1cfa,	// (0x00018e70) popup_call2_audio_second_window_g1

0x1d4e,	// (0x00018ec4) popup_call2_audio_second_window_g2_ParamLimits

0x1d4e,	// (0x00018ec4) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x000266ac) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x000266ac) popup_call2_audio_second_window_g

0x1db3,	// (0x00018f29) popup_call2_audio_second_window_t1_ParamLimits

0x1db3,	// (0x00018f29) popup_call2_audio_second_window_t1

0x1e6e,	// (0x00018fe4) popup_call2_audio_second_window_t2_ParamLimits

0x1e6e,	// (0x00018fe4) popup_call2_audio_second_window_t2

0x1ec1,	// (0x00019037) popup_call2_audio_second_window_t3_ParamLimits

0x1ec1,	// (0x00019037) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x000266b3) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x000266b3) popup_call2_audio_second_window_t

0x0665,	// (0x000177db) bg_popup_call2_in_pane_cp02

0x066f,	// (0x000177e5) call_type_pane_cp04

0x0677,	// (0x000177ed) popup_call2_audio_wait_window_g1

0x067f,	// (0x000177f5) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0002628c) popup_call2_audio_wait_window_g

0x0687,	// (0x000177fd) popup_call2_audio_wait_window_t3

0x1fb4,	// (0x0001912a) bg_popup_call2_act_pane_ParamLimits

0x1fb4,	// (0x0001912a) bg_popup_call2_act_pane

0x2074,	// (0x000191ea) call_type_pane_cp03_ParamLimits

0x2074,	// (0x000191ea) call_type_pane_cp03

0x20d8,	// (0x0001924e) popup_call2_audio_first_window_g1_ParamLimits

0x20d8,	// (0x0001924e) popup_call2_audio_first_window_g1

0x2148,	// (0x000192be) popup_call2_audio_first_window_g2_ParamLimits

0x2148,	// (0x000192be) popup_call2_audio_first_window_g2

0x17b6,	// (0x0001892c) popup_call2_audio_first_window_g3_ParamLimits

0x17b6,	// (0x0001892c) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x000266bc) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x000266bc) popup_call2_audio_first_window_g

0x2226,	// (0x0001939c) popup_call2_audio_first_window_t1_ParamLimits

0x2226,	// (0x0001939c) popup_call2_audio_first_window_t1

0x2329,	// (0x0001949f) popup_call2_audio_first_window_t4_ParamLimits

0x2329,	// (0x0001949f) popup_call2_audio_first_window_t4

0x240c,	// (0x00019582) popup_call2_audio_first_window_t5_ParamLimits

0x240c,	// (0x00019582) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x000266c7) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x000266c7) popup_call2_audio_first_window_t

0x08b8,	// (0x00017a2e) bg_popup_call2_act_pane_g1

0x2a7b,	// (0x00019bf1) popup_cale_lunar_info_window_t1

0x2a89,	// (0x00019bff) popup_cale_lunar_info_window_t2

0x2a97,	// (0x00019c0d) popup_cale_lunar_info_window_t3

0x0665,	// (0x000177db) bg_popup_call2_bubble_pane

0x250d,	// (0x00019683) bg_popup_call2_in_pane_cp01_ParamLimits

0x250d,	// (0x00019683) bg_popup_call2_in_pane_cp01

0x0341,	// (0x000174b7) call_type_pane_cp02

0x2555,	// (0x000196cb) popup_call2_audio_out_window_g1_ParamLimits

0x2555,	// (0x000196cb) popup_call2_audio_out_window_g1

0x2581,	// (0x000196f7) popup_call2_audio_out_window_g2_ParamLimits

0x2581,	// (0x000196f7) popup_call2_audio_out_window_g2

0x25a9,	// (0x0001971f) popup_call2_audio_out_window_g3_ParamLimits

0x25a9,	// (0x0001971f) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x000266d0) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x000266d0) popup_call2_audio_out_window_g

0x25e4,	// (0x0001975a) popup_call2_audio_out_window_t1_ParamLimits

0x25e4,	// (0x0001975a) popup_call2_audio_out_window_t1

0x2643,	// (0x000197b9) popup_call2_audio_out_window_t2_ParamLimits

0x2643,	// (0x000197b9) popup_call2_audio_out_window_t2

0x2697,	// (0x0001980d) popup_call2_audio_out_window_t3_ParamLimits

0x2697,	// (0x0001980d) popup_call2_audio_out_window_t3

0x26ad,	// (0x00019823) popup_call2_audio_out_window_t4_ParamLimits

0x26ad,	// (0x00019823) popup_call2_audio_out_window_t4

0x26c3,	// (0x00019839) popup_call2_audio_out_window_t5_ParamLimits

0x26c3,	// (0x00019839) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x000266d9) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x000266d9) popup_call2_audio_out_window_t

0x2727,	// (0x0001989d) bg_popup_call2_in_pane_ParamLimits

0x2727,	// (0x0001989d) bg_popup_call2_in_pane

0x2783,	// (0x000198f9) popup_call2_audio_in_window_g1_ParamLimits

0x2783,	// (0x000198f9) popup_call2_audio_in_window_g1

0x27bb,	// (0x00019931) popup_call2_audio_in_window_g2_ParamLimits

0x27bb,	// (0x00019931) popup_call2_audio_in_window_g2

0x27f3,	// (0x00019969) popup_call2_audio_in_window_g3_ParamLimits

0x27f3,	// (0x00019969) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000266e6) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000266e6) popup_call2_audio_in_window_g

0x284b,	// (0x000199c1) popup_call2_audio_in_window_t1_ParamLimits

0x284b,	// (0x000199c1) popup_call2_audio_in_window_t1

0x28cb,	// (0x00019a41) popup_call2_audio_in_window_t2_ParamLimits

0x28cb,	// (0x00019a41) popup_call2_audio_in_window_t2

0x294b,	// (0x00019ac1) popup_call2_audio_in_window_t3_ParamLimits

0x294b,	// (0x00019ac1) popup_call2_audio_in_window_t3

0x2965,	// (0x00019adb) popup_call2_audio_in_window_t4_ParamLimits

0x2965,	// (0x00019adb) popup_call2_audio_in_window_t4

0x2977,	// (0x00019aed) popup_call2_audio_in_window_t5_ParamLimits

0x2977,	// (0x00019aed) popup_call2_audio_in_window_t5

0x298c,	// (0x00019b02) popup_call2_audio_in_window_t6_ParamLimits

0x298c,	// (0x00019b02) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000266ef) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000266ef) popup_call2_audio_in_window_t

0x08b8,	// (0x00017a2e) bg_popup_call2_in_pane_g1

0x2aa5,	// (0x00019c1b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00026757) popup_cale_lunar_info_window_t

0x08c0,	// (0x00017a36) bg_popup_call2_rect_pane_ParamLimits

0x08c0,	// (0x00017a36) bg_popup_call2_rect_pane

0x0665,	// (0x000177db) call2_cli_visual_graphic_pane

0x0665,	// (0x000177db) call2_cli_visual_text_pane

0x7156,	// (0x0001e2cc) smil_status_volume_pane_g3

0x0002,

0x0a2e,	// (0x00017ba4) call2_cli_visual_graphic_pane_g1

0x0a2e,	// (0x00017ba4) call2_cli_visual_graphic_pane_g2

0x0a2e,	// (0x00017ba4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000266fc) call2_cli_visual_graphic_pane_g

0x29a1,	// (0x00019b17) bg_popup_call2_rect_pane_g1

0x0ad6,	// (0x00017c4c) bg_popup_call2_rect_pane_g2

0x29a9,	// (0x00019b1f) bg_popup_call2_rect_pane_g3

0x29b1,	// (0x00019b27) bg_popup_call2_rect_pane_g4

0x29b9,	// (0x00019b2f) bg_popup_call2_rect_pane_g5

0x29c1,	// (0x00019b37) bg_popup_call2_rect_pane_g6

0x29c9,	// (0x00019b3f) bg_popup_call2_rect_pane_g7

0x29d1,	// (0x00019b47) bg_popup_call2_rect_pane_g8

0x29d9,	// (0x00019b4f) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x00026703) bg_popup_call2_rect_pane_g

0x29e1,	// (0x00019b57) bg_popup_call2_bubble_pane_g1

0x29e9,	// (0x00019b5f) bg_popup_call2_bubble_pane_g2

0x29f1,	// (0x00019b67) bg_popup_call2_bubble_pane_g3

0x29f9,	// (0x00019b6f) bg_popup_call2_bubble_pane_g4

0x2a01,	// (0x00019b77) bg_popup_call2_bubble_pane_g5

0x2a09,	// (0x00019b7f) bg_popup_call2_bubble_pane_g6

0x2a11,	// (0x00019b87) bg_popup_call2_bubble_pane_g7

0x2a19,	// (0x00019b8f) bg_popup_call2_bubble_pane_g8

0x2a21,	// (0x00019b97) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00026716) bg_popup_call2_bubble_pane_g

0x879c,	// (0x0001f912) aid_cale_week_size_cell_pane

0x8bfc,	// (0x0001fd72) aid_cams_cif_uncrop_pane_ParamLimits

0x8bfc,	// (0x0001fd72) aid_cams_cif_uncrop_pane

0x8d59,	// (0x0001fecf) aid_cams_size_cell_ParamLimits

0x8d59,	// (0x0001fecf) aid_cams_size_cell

0x8d65,	// (0x0001fedb) grid_cams_pane_ParamLimits

0x8d73,	// (0x0001fee9) linegrid_cams_pane_ParamLimits

0x8e9d,	// (0x00020013) call_video_pane_t1

0x8eba,	// (0x00020030) call_video_pane_t2

0x0001,

0xf28d,	// (0x00026403) call_video_pane_t

0x9374,	// (0x000204ea) aid_cale_month_size_cell_pane_ParamLimits

0x9374,	// (0x000204ea) aid_cale_month_size_cell_pane

0xf62a,	// (0x000267a0) smil_status_volume_pane_g

0x7163,	// (0x0001e2d9) volume_smil_pane_ParamLimits

0x01b0,	// (0x00017326) aid_popup2_width_pane

0x86f0,	// (0x0001f866) cell_qdial_pane_g4_ParamLimits

0x86f0,	// (0x0001f866) cell_qdial_pane_g4

0x9fc6,	// (0x0002113c) aid_blid_cardinal_pane_ParamLimits

0x9fd6,	// (0x0002114c) aid_blid_destination_pane_ParamLimits

0x9fd6,	// (0x0002114c) aid_blid_destination_pane

0x08c0,	// (0x00017a36) bg_popup_call_poc_act_pane_ParamLimits

0x08c0,	// (0x00017a36) bg_popup_call_poc_act_pane

0x08c0,	// (0x00017a36) bg_popup_call_poc_inact_pane_ParamLimits

0x08c0,	// (0x00017a36) bg_popup_call_poc_inact_pane

0x2a29,	// (0x00019b9f) bg_popup_call_poc_act_pane_g1

0x2a31,	// (0x00019ba7) bg_popup_call_poc_act_pane_g2

0x2a39,	// (0x00019baf) bg_popup_call_poc_act_pane_g3

0x29f9,	// (0x00019b6f) bg_popup_call_poc_act_pane_g4

0x2a01,	// (0x00019b77) bg_popup_call_poc_act_pane_g5

0x2a41,	// (0x00019bb7) bg_popup_call_poc_act_pane_g6

0x2a11,	// (0x00019b87) bg_popup_call_poc_act_pane_g7

0x2a49,	// (0x00019bbf) bg_popup_call_poc_act_pane_g8

0x0665,	// (0x000177db) main_usb_pane

0x2ba6,	// (0x00019d1c) popup_cale_lunar_info_window

0x91d2,	// (0x00020348) im_reading_pane_t1_ParamLimits

0x0e07,	// (0x00017f7d) list_im_pane_ParamLimits

0x0e18,	// (0x00017f8e) scroll_pane_cp07_ParamLimits

0x0665,	// (0x000177db) grid_highlight_pane_cp012

0x08c0,	// (0x00017a36) mup_scale_pane_ParamLimits

0x17b6,	// (0x0001892c) main_usb_pane_g1_ParamLimits

0x17b6,	// (0x0001892c) main_usb_pane_g1

0xabf2,	// (0x00021d68) main_usb_pane_g2_ParamLimits

0xabf2,	// (0x00021d68) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00026740) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00026740) main_usb_pane_g

0xabfe,	// (0x00021d74) main_usb_pane_t1_ParamLimits

0xabfe,	// (0x00021d74) main_usb_pane_t1

0xac10,	// (0x00021d86) main_usb_pane_t2_ParamLimits

0xac10,	// (0x00021d86) main_usb_pane_t2

0xac22,	// (0x00021d98) main_usb_pane_t3_ParamLimits

0xac22,	// (0x00021d98) main_usb_pane_t3

0xac34,	// (0x00021daa) main_usb_pane_t4_ParamLimits

0xac34,	// (0x00021daa) main_usb_pane_t4

0xac46,	// (0x00021dbc) main_usb_pane_t5_ParamLimits

0xac46,	// (0x00021dbc) main_usb_pane_t5

0xac58,	// (0x00021dce) main_usb_pane_t6_ParamLimits

0xac58,	// (0x00021dce) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00026745) main_usb_pane_t_ParamLimits

0x9f65,	// (0x000210db) aid_text_placing

0x9f70,	// (0x000210e6) main_location2_pane_t1_ParamLimits

0x9f86,	// (0x000210fc) main_location2_pane_t2_ParamLimits

0x9f9c,	// (0x00021112) main_location2_pane_t3_ParamLimits

0x9fb2,	// (0x00021128) main_location2_pane_t4_ParamLimits

0x9fb2,	// (0x00021128) main_location2_pane_t4

0xf3ee,	// (0x00026564) main_location2_pane_t_ParamLimits

0x08fc,	// (0x00017a72) find_pinb_pane_g2_ParamLimits

0x08fc,	// (0x00017a72) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x000262b2) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x000262b2) find_pinb_pane_g

0x0908,	// (0x00017a7e) find_pinb_pane_t1_ParamLimits

0x091a,	// (0x00017a90) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x000262b7) find_pinb_pane_t_ParamLimits

0x0665,	// (0x000177db) main_call3_pane

0x9780,	// (0x000208f6) cale_month_day_heading_pane_t1_ParamLimits

0x97de,	// (0x00020954) cale_month_day_heading_pane_t2_ParamLimits

0x9843,	// (0x000209b9) cale_month_day_heading_pane_t3_ParamLimits

0x98a8,	// (0x00020a1e) cale_month_day_heading_pane_t4_ParamLimits

0x990d,	// (0x00020a83) cale_month_day_heading_pane_t5_ParamLimits

0x997a,	// (0x00020af0) cale_month_day_heading_pane_t6_ParamLimits

0x99ef,	// (0x00020b65) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0002643b) cale_month_day_heading_pane_t_ParamLimits

0x108e,	// (0x00018204) smil_status_volume_pane

0xa7b0,	// (0x00021926) postcard_address_pane_ParamLimits

0xa7b0,	// (0x00021926) postcard_address_pane

0xa7be,	// (0x00021934) postcard_message_pane_ParamLimits

0xa7be,	// (0x00021934) postcard_message_pane

0xabc8,	// (0x00021d3e) call2_cli_visual_pane_t1_ParamLimits

0xabc8,	// (0x00021d3e) call2_cli_visual_pane_t1

0xb16f,	// (0x000222e5) postcard_message_pane_t1_ParamLimits

0xb16f,	// (0x000222e5) postcard_message_pane_t1

0x2cb6,	// (0x00019e2c) postcard_address_pane_t1_ParamLimits

0x2cb6,	// (0x00019e2c) postcard_address_pane_t1

0xb160,	// (0x000222d6) popup_call3_audio_in_window_ParamLimits

0xb160,	// (0x000222d6) popup_call3_audio_in_window

0xb03e,	// (0x000221b4) bg_popup_call3_in_pane_ParamLimits

0xb03e,	// (0x000221b4) bg_popup_call3_in_pane

0xb0a6,	// (0x0002221c) popup_call3_audio_in_window_g1_ParamLimits

0xb0a6,	// (0x0002221c) popup_call3_audio_in_window_g1

0xb0be,	// (0x00022234) popup_call3_audio_in_window_g2_ParamLimits

0xb0be,	// (0x00022234) popup_call3_audio_in_window_g2

0xb0d6,	// (0x0002224c) popup_call3_audio_in_window_g3_ParamLimits

0xb0d6,	// (0x0002224c) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x000267a7) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x000267a7) popup_call3_audio_in_window_g

0xb0fe,	// (0x00022274) popup_call3_audio_in_window_t1_ParamLimits

0xb0fe,	// (0x00022274) popup_call3_audio_in_window_t1

0xb126,	// (0x0002229c) popup_call3_audio_in_window_t2_ParamLimits

0xb126,	// (0x0002229c) popup_call3_audio_in_window_t2

0xb14e,	// (0x000222c4) popup_call3_audio_in_window_t3_ParamLimits

0xb14e,	// (0x000222c4) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x000267b0) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x000267b0) popup_call3_audio_in_window_t

0x16e5,	// (0x0001885b) bg_popup_call3_rect_pane

0x29a1,	// (0x00019b17) bg_popup_call3_rect_pane_g1

0x0ad6,	// (0x00017c4c) bg_popup_call3_rect_pane_g2

0x29a9,	// (0x00019b1f) bg_popup_call3_rect_pane_g3

0x29b1,	// (0x00019b27) bg_popup_call3_rect_pane_g4

0x29b9,	// (0x00019b2f) bg_popup_call3_rect_pane_g5

0x29c1,	// (0x00019b37) bg_popup_call3_rect_pane_g6

0x29c9,	// (0x00019b3f) bg_popup_call3_rect_pane_g7

0xa3e6,	// (0x0002155c) mup_visualizer_osc_pane

0x17c4,	// (0x0001893a) mup_visualizer_spec_pane

0xb05e,	// (0x000221d4) call3_video_qcif_pane_ParamLimits

0xb05e,	// (0x000221d4) call3_video_qcif_pane

0xb070,	// (0x000221e6) call3_video_qcif_uncrop_pane_ParamLimits

0xb070,	// (0x000221e6) call3_video_qcif_uncrop_pane

0xb080,	// (0x000221f6) call3_video_subqcif_pane_ParamLimits

0xb080,	// (0x000221f6) call3_video_subqcif_pane

0xb094,	// (0x0002220a) call3_video_subqcif_uncrop_pane_ParamLimits

0xb094,	// (0x0002220a) call3_video_subqcif_uncrop_pane

0xb0ee,	// (0x00022264) popup_call3_audio_in_window_g4_ParamLimits

0xb0ee,	// (0x00022264) popup_call3_audio_in_window_g4

0xb02d,	// (0x000221a3) mup_spec_half_pane

0xb036,	// (0x000221ac) mup_spec_half_pane_cp

0x2c54,	// (0x00019dca) mup_osc_middle_pane

0x2c5d,	// (0x00019dd3) mup_visualizer_osc_pane_g1

0xb00d,	// (0x00022183) mup_spec_bar_pane_ParamLimits

0xb00d,	// (0x00022183) mup_spec_bar_pane

0x2c41,	// (0x00019db7) mup_spec_bar_pane_g1

0x2c4b,	// (0x00019dc1) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0002679b) mup_spec_bar_pane_g

0x879c,	// (0x0001f912) aid_cale_week_size_cell_pane_ParamLimits

0x87af,	// (0x0001f925) bg_cale_heading_pane_ParamLimits

0x0b52,	// (0x00017cc8) bg_cale_pane_cp01_ParamLimits

0x87cb,	// (0x0001f941) cale_week_corner_pane_ParamLimits

0x87e1,	// (0x0001f957) cale_week_day_heading_pane_ParamLimits

0x87fd,	// (0x0001f973) cale_week_scroll_pane_g1_ParamLimits

0x8816,	// (0x0001f98c) cale_week_scroll_pane_g2_ParamLimits

0x8827,	// (0x0001f99d) cale_week_scroll_pane_g3_ParamLimits

0x8838,	// (0x0001f9ae) cale_week_scroll_pane_g4_ParamLimits

0x8849,	// (0x0001f9bf) cale_week_scroll_pane_g5_ParamLimits

0x885a,	// (0x0001f9d0) cale_week_scroll_pane_g6_ParamLimits

0x886d,	// (0x0001f9e3) cale_week_scroll_pane_g7_ParamLimits

0x8880,	// (0x0001f9f6) cale_week_scroll_pane_g8_ParamLimits

0x8893,	// (0x0001fa09) cale_week_scroll_pane_g9_ParamLimits

0x88a4,	// (0x0001fa1a) cale_week_scroll_pane_g10_ParamLimits

0x88b5,	// (0x0001fa2b) cale_week_scroll_pane_g11_ParamLimits

0x88c6,	// (0x0001fa3c) cale_week_scroll_pane_g12_ParamLimits

0x88d7,	// (0x0001fa4d) cale_week_scroll_pane_g13_ParamLimits

0x88e8,	// (0x0001fa5e) cale_week_scroll_pane_g14_ParamLimits

0x8901,	// (0x0001fa77) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00026343) cale_week_scroll_pane_g_ParamLimits

0x891a,	// (0x0001fa90) cale_week_time_pane_ParamLimits

0x892d,	// (0x0001faa3) grid_cale_week_pane_ParamLimits

0x0b6b,	// (0x00017ce1) listscroll_cale_week_pane_t1

0x894a,	// (0x0001fac0) scroll_pane_cp08_ParamLimits

0x93c5,	// (0x0002053b) cale_month_corner_pane_ParamLimits

0x102e,	// (0x000181a4) cale_month_pane_t1

0x972f,	// (0x000208a5) cale_month_week_pane_ParamLimits

0x17b6,	// (0x0001892c) popup_call_status_window_g1_ParamLimits

0x9ddd,	// (0x00020f53) popup_call_status_window_g2_ParamLimits

0x9de9,	// (0x00020f5f) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000264eb) popup_call_status_window_g_ParamLimits

0x1420,	// (0x00018596) aid_call2_pane

0xa683,	// (0x000217f9) msg_header_pane_g1

0xa7b0,	// (0x00021926) postcard_address2_pane_ParamLimits

0xa7b0,	// (0x00021926) postcard_address2_pane

0xa7be,	// (0x00021934) postcard_message2_pane_ParamLimits

0xa7be,	// (0x00021934) postcard_message2_pane

0xafc7,	// (0x0002213d) message2_row_pane_ParamLimits

0xafc7,	// (0x0002213d) message2_row_pane

0x2bfc,	// (0x00019d72) address2_row_pane_ParamLimits

0x2bfc,	// (0x00019d72) address2_row_pane

0x2c0f,	// (0x00019d85) postcard_message2_row_pane_g1

0x2c17,	// (0x00019d8d) postcard_message2_row_pane_t1

0x2c0f,	// (0x00019d85) address2_row_pane_g1

0x2c17,	// (0x00019d8d) address2_row_pane_t1

0x6f9d,	// (0x0001e113) aid_size_cell_vorec

0x0665,	// (0x000177db) main_rss_pane

0xafe1,	// (0x00022157) rss_list_single_pane_ParamLimits

0xafe1,	// (0x00022157) rss_list_single_pane

0x2c25,	// (0x00019d9b) rss_list_single_pane_t1

0x2c33,	// (0x00019da9) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00026796) rss_list_single_pane_t

0x0665,	// (0x000177db) main_camera2_pane

0x0665,	// (0x000177db) main_video2_pane

0x71c1,	// (0x0001e337) cams_zoom_pane_cp2_ParamLimits

0x71c1,	// (0x0001e337) cams_zoom_pane_cp2

0x71cd,	// (0x0001e343) image2_vga_pane_ParamLimits

0x71cd,	// (0x0001e343) image2_vga_pane

0x71dc,	// (0x0001e352) main_camera2_pane_g1_ParamLimits

0x71dc,	// (0x0001e352) main_camera2_pane_g1

0x71e8,	// (0x0001e35e) main_camera2_pane_g2_ParamLimits

0x71e8,	// (0x0001e35e) main_camera2_pane_g2

0x71f4,	// (0x0001e36a) main_camera2_pane_g3_ParamLimits

0x71f4,	// (0x0001e36a) main_camera2_pane_g3

0x7200,	// (0x0001e376) main_camera2_pane_g4_ParamLimits

0x7200,	// (0x0001e376) main_camera2_pane_g4

0x720c,	// (0x0001e382) main_camera2_pane_g5_ParamLimits

0x720c,	// (0x0001e382) main_camera2_pane_g5

0x7218,	// (0x0001e38e) main_camera2_pane_g6_ParamLimits

0x7218,	// (0x0001e38e) main_camera2_pane_g6

0x7224,	// (0x0001e39a) main_camera2_pane_g7_ParamLimits

0x7224,	// (0x0001e39a) main_camera2_pane_g7

0x7230,	// (0x0001e3a6) main_camera2_pane_g8_ParamLimits

0x7230,	// (0x0001e3a6) main_camera2_pane_g8

0x0008,

0xf641,	// (0x000267b7) main_camera2_pane_g_ParamLimits

0xf641,	// (0x000267b7) main_camera2_pane_g

0x7248,	// (0x0001e3be) main_camera2_pane_t1_ParamLimits

0x7248,	// (0x0001e3be) main_camera2_pane_t1

0x725a,	// (0x0001e3d0) main_camera2_pane_t2_ParamLimits

0x725a,	// (0x0001e3d0) main_camera2_pane_t2

0x726c,	// (0x0001e3e2) main_camera2_pane_t3_ParamLimits

0x726c,	// (0x0001e3e2) main_camera2_pane_t3

0x727e,	// (0x0001e3f4) main_camera2_pane_t4_ParamLimits

0x727e,	// (0x0001e3f4) main_camera2_pane_t4

0x0006,

0xf654,	// (0x000267ca) main_camera2_pane_t_ParamLimits

0xf654,	// (0x000267ca) main_camera2_pane_t

0x72db,	// (0x0001e451) cams_zoom_pane_cp4_ParamLimits

0x72db,	// (0x0001e451) cams_zoom_pane_cp4

0x72eb,	// (0x0001e461) image2_cif_pane_ParamLimits

0x72eb,	// (0x0001e461) image2_cif_pane

0x7300,	// (0x0001e476) image2_subqcif_pane_ParamLimits

0x7300,	// (0x0001e476) image2_subqcif_pane

0x730f,	// (0x0001e485) main_video2_pane_g1_ParamLimits

0x730f,	// (0x0001e485) main_video2_pane_g1

0x7321,	// (0x0001e497) main_video2_pane_g2_ParamLimits

0x7321,	// (0x0001e497) main_video2_pane_g2

0x7331,	// (0x0001e4a7) main_video2_pane_g3_ParamLimits

0x7331,	// (0x0001e4a7) main_video2_pane_g3

0x7341,	// (0x0001e4b7) main_video2_pane_g4_ParamLimits

0x7341,	// (0x0001e4b7) main_video2_pane_g4

0x7351,	// (0x0001e4c7) main_video2_pane_g5_ParamLimits

0x7351,	// (0x0001e4c7) main_video2_pane_g5

0x7361,	// (0x0001e4d7) main_video2_pane_g6_ParamLimits

0x7361,	// (0x0001e4d7) main_video2_pane_g6

0x0005,

0xf663,	// (0x000267d9) main_video2_pane_g_ParamLimits

0xf663,	// (0x000267d9) main_video2_pane_g

0x7373,	// (0x0001e4e9) main_video2_pane_t1_ParamLimits

0x7373,	// (0x0001e4e9) main_video2_pane_t1

0x738d,	// (0x0001e503) main_video2_pane_t2_ParamLimits

0x738d,	// (0x0001e503) main_video2_pane_t2

0x73b3,	// (0x0001e529) main_video2_pane_t3_ParamLimits

0x73b3,	// (0x0001e529) main_video2_pane_t3

0x0002,

0xf670,	// (0x000267e6) main_video2_pane_t_ParamLimits

0xf670,	// (0x000267e6) main_video2_pane_t

0xad0f,	// (0x00021e85) call_muted_g2

0x0001,

0xf612,	// (0x00026788) call_muted_g

0x0665,	// (0x000177db) main_mup2_pane

0x2d26,	// (0x00019e9c) main_mup2_pane_g1_ParamLimits

0x2d26,	// (0x00019e9c) main_mup2_pane_g1

0xb18a,	// (0x00022300) main_mup2_pane_g2_ParamLimits

0xb18a,	// (0x00022300) main_mup2_pane_g2

0x7402,	// (0x0001e578) main_mup_pane_g13_cp1

0x740a,	// (0x0001e580) mup_volume_pane_cp1

0xb1ac,	// (0x00022322) main_mup2_pane_g4_ParamLimits

0xb1ac,	// (0x00022322) main_mup2_pane_g4

0xb1bd,	// (0x00022333) main_mup2_pane_g5_ParamLimits

0xb1bd,	// (0x00022333) main_mup2_pane_g5

0xb1ce,	// (0x00022344) main_mup2_pane_g6_ParamLimits

0xb1ce,	// (0x00022344) main_mup2_pane_g6

0xb1df,	// (0x00022355) main_mup2_pane_g7_ParamLimits

0xb1df,	// (0x00022355) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000267ed) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000267ed) main_mup2_pane_g

0xb1fb,	// (0x00022371) main_mup2_pane_t1_ParamLimits

0xb1fb,	// (0x00022371) main_mup2_pane_t1

0xb212,	// (0x00022388) main_mup2_pane_t2_ParamLimits

0xb212,	// (0x00022388) main_mup2_pane_t2

0xb229,	// (0x0002239f) main_mup2_pane_t3_ParamLimits

0xb229,	// (0x0002239f) main_mup2_pane_t3

0xb240,	// (0x000223b6) main_mup2_pane_t4_ParamLimits

0xb240,	// (0x000223b6) main_mup2_pane_t4

0xb25a,	// (0x000223d0) main_mup2_pane_t5_ParamLimits

0xb25a,	// (0x000223d0) main_mup2_pane_t5

0xb274,	// (0x000223ea) main_mup2_pane_t6_ParamLimits

0xb274,	// (0x000223ea) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000267fc) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000267fc) main_mup2_pane_t

0xb2ac,	// (0x00022422) mup2_visualizer_pane_ParamLimits

0xb2ac,	// (0x00022422) mup2_visualizer_pane

0xb2e2,	// (0x00022458) mup_progress_pane_cp_ParamLimits

0xb2e2,	// (0x00022458) mup_progress_pane_cp

0x73ed,	// (0x0001e563) mup_volume_pane_cp_ParamLimits

0x73ed,	// (0x0001e563) mup_volume_pane_cp

0xb2fb,	// (0x00022471) mup2_visualizer_pane_g1_ParamLimits

0xb2fb,	// (0x00022471) mup2_visualizer_pane_g1

0x2cf8,	// (0x00019e6e) mup2_visualizer_pane_g2_ParamLimits

0x2cf8,	// (0x00019e6e) mup2_visualizer_pane_g2

0xb310,	// (0x00022486) mup2_visualizer_pane_g3_ParamLimits

0xb310,	// (0x00022486) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00026809) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00026809) mup2_visualizer_pane_g

0x1a6d,	// (0x00018be3) aid_size_cell_fmradio

0xae25,	// (0x00021f9b) aid_height_parent_landcape

0x0e96,	// (0x0001800c) wml_content_pane_cp

0x0e9e,	// (0x00018014) wml_tabs_pane

0x0ea7,	// (0x0001801d) popup_wml_miniature_window

0x0eaf,	// (0x00018025) scroll_pane_cp021

0x0ec3,	// (0x00018039) wml_content_pane_comp8

0x0665,	// (0x000177db) bg_popup_sub_pane_cp05

0x2d16,	// (0x00019e8c) popup_wml_miniature_window_g1

0x2d1e,	// (0x00019e94) wml_miniature_view_pane

0xb31c,	// (0x00022492) aid_size_wml_view

0xb324,	// (0x0002249a) wml_miniature_view_pane_g1

0xb32d,	// (0x000224a3) wml_miniature_view_pane_g2

0xb336,	// (0x000224ac) wml_miniature_view_pane_g3

0xb33e,	// (0x000224b4) wml_miniature_view_pane_g4

0xb346,	// (0x000224bc) wml_miniature_view_pane_g5

0xb34e,	// (0x000224c4) wml_miniature_view_pane_g6

0xb356,	// (0x000224cc) wml_miniature_view_pane_g7

0xb35e,	// (0x000224d4) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00026810) wml_miniature_view_pane_g

0x2d26,	// (0x00019e9c) background_graphic_ParamLimits

0x2d26,	// (0x00019e9c) background_graphic

0x2d32,	// (0x00019ea8) wml_tabs_2_pane

0x2d3b,	// (0x00019eb1) wml_tabs_3_pane_ParamLimits

0x2d3b,	// (0x00019eb1) wml_tabs_3_pane

0x2d4d,	// (0x00019ec3) wml_tabs_4_pane_ParamLimits

0x2d4d,	// (0x00019ec3) wml_tabs_4_pane

0x2d63,	// (0x00019ed9) wml_tabs_5_pane_ParamLimits

0x2d63,	// (0x00019ed9) wml_tabs_5_pane

0x2d7d,	// (0x00019ef3) wml_tabs_pane_g2_ParamLimits

0x2d7d,	// (0x00019ef3) wml_tabs_pane_g2

0x2d91,	// (0x00019f07) wml_tabs_pane_g3_ParamLimits

0x2d91,	// (0x00019f07) wml_tabs_pane_g3

0xb366,	// (0x000224dc) wml_tabs_2_active_pane_ParamLimits

0xb366,	// (0x000224dc) wml_tabs_2_active_pane

0xb378,	// (0x000224ee) wml_tabs_2_passive_pane_ParamLimits

0xb378,	// (0x000224ee) wml_tabs_2_passive_pane

0xb38a,	// (0x00022500) wml_tabs_3_active_pane_cp_ParamLimits

0xb38a,	// (0x00022500) wml_tabs_3_active_pane_cp

0xb39d,	// (0x00022513) wml_tabs_3_passive_pane_ParamLimits

0xb39d,	// (0x00022513) wml_tabs_3_passive_pane

0xb3ae,	// (0x00022524) wml_tabs_3_passive_pane_cp_ParamLimits

0xb3ae,	// (0x00022524) wml_tabs_3_passive_pane_cp

0xb3c3,	// (0x00022539) tabs_4_active_pane

0xb3cb,	// (0x00022541) tabs_4_passive_pane

0xb3d3,	// (0x00022549) tabs_4_passive_pane_cp

0xb3db,	// (0x00022551) tabs_4_passive_pane_cp2

0xabea,	// (0x00021d60) aid_height_text

0xa3af,	// (0x00021525) mup_volume_cont_pane_ParamLimits

0xa3af,	// (0x00021525) mup_volume_cont_pane

0x84b7,	// (0x0001f62d) aid_size_cell_pinb

0x84c1,	// (0x0001f637) aid_size_list_pinb

0xb2cb,	// (0x00022441) mup2_volume_cont_pane_ParamLimits

0xb2cb,	// (0x00022441) mup2_volume_cont_pane

0x73d9,	// (0x0001e54f) mup2_volume_cont_pane_g1_ParamLimits

0x73d9,	// (0x0001e54f) mup2_volume_cont_pane_g1

0x817e,	// (0x0001f2f4) aid_size_cell_touch_ParamLimits

0x817e,	// (0x0001f2f4) aid_size_cell_touch

0x83d6,	// (0x0001f54c) touch_pane_ParamLimits

0x83d6,	// (0x0001f54c) touch_pane

0x019e,	// (0x00017314) main_rss2_pane

0x2de7,	// (0x00019f5d) listscroll_rss2_pane

0x2df0,	// (0x00019f66) rss2_navigation_pane

0x2df8,	// (0x00019f6e) list_rss2_pane

0x15ab,	// (0x00018721) scroll_pane_cp22

0x2e00,	// (0x00019f76) rss2_navigation_pane_g1

0x2e09,	// (0x00019f7f) rss2_navigation_pane_g2

0x2e11,	// (0x00019f87) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00026821) rss2_navigation_pane_g

0x2e19,	// (0x00019f8f) rss2_navigation_pane_t1

0xb3e5,	// (0x0002255b) rss2_list_single_pane_ParamLimits

0xb3e5,	// (0x0002255b) rss2_list_single_pane

0x2e27,	// (0x00019f9d) rss2_list_single_pane_t2

0x2e35,	// (0x00019fab) rss2_list_single_pane_t3_ParamLimits

0x2e35,	// (0x00019fab) rss2_list_single_pane_t3

0x2e52,	// (0x00019fc8) rss2_list_single_pane_t4

0x9bc7,	// (0x00020d3d) smil_status_pane_g1

0x020f,	// (0x00017385) main_image2_pane_ParamLimits

0x020f,	// (0x00017385) main_image2_pane

0x723c,	// (0x0001e3b2) main_camera2_pane_g9_ParamLimits

0x723c,	// (0x0001e3b2) main_camera2_pane_g9

0x7290,	// (0x0001e406) main_camera2_pane_t5_ParamLimits

0x7290,	// (0x0001e406) main_camera2_pane_t5

0x72a2,	// (0x0001e418) main_camera2_pane_t6_ParamLimits

0x72a2,	// (0x0001e418) main_camera2_pane_t6

0xb408,	// (0x0002257e) main_image2_pane_g1_ParamLimits

0xb408,	// (0x0002257e) main_image2_pane_g1

0xa987,	// (0x00021afd) smil2_video_pane_ParamLimits

0xa987,	// (0x00021afd) smil2_video_pane

0x01bc,	// (0x00017332) aid_zoom_text_primary_cp

0x0205,	// (0x0001737b) popup_preview_fixed_window

0x0dff,	// (0x00017f75) im_reading_pane_g1

0x7186,	// (0x0001e2fc) cams2_bc_adjust_pane_cp_ParamLimits

0x7186,	// (0x0001e2fc) cams2_bc_adjust_pane_cp

0x72cd,	// (0x0001e443) cams2_bc_adjust_pane_ParamLimits

0x72cd,	// (0x0001e443) cams2_bc_adjust_pane

0x4510,	// (0x0001b686) cams2_bc_adjust_pane_g1

0x7412,	// (0x0001e588) cams2_slider_pane

0x741b,	// (0x0001e591) cams2_slider_pane_g1

0x7424,	// (0x0001e59a) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00026828) cams2_slider_pane_g

0x6d3a,	// (0x0001deb0) calc_display_pane_ParamLimits

0x6d58,	// (0x0001dece) calc_paper_pane_ParamLimits

0x6d74,	// (0x0001deea) grid_calc_pane_ParamLimits

0x70b5,	// (0x0001e22b) popup_clock_digital_window_t1_ParamLimits

0x1a0a,	// (0x00018b80) main_image_pane_t1

0x6d20,	// (0x0001de96) aid_size_cell_calc_ParamLimits

0x6d20,	// (0x0001de96) aid_size_cell_calc

0xae57,	// (0x00021fcd) popup_blid_sat_info2_window_ParamLimits

0xae57,	// (0x00021fcd) popup_blid_sat_info2_window

0x2e9c,	// (0x0001a012) aid_size_cell_blid

0x2ea4,	// (0x0001a01a) bg_popup_window_pane_cp07

0x2ec7,	// (0x0001a03d) grid_popup_blid_pane

0x2ed1,	// (0x0001a047) heading_pane_cp05_ParamLimits

0x2ed1,	// (0x0001a047) heading_pane_cp05

0x2f9b,	// (0x0001a111) cell_popup_blid_pane_ParamLimits

0x2f9b,	// (0x0001a111) cell_popup_blid_pane

0x2fc5,	// (0x0001a13b) cell_popup_blid_pane_g1

0x2fcd,	// (0x0001a143) cell_popup_blid_pane_t1

0xb291,	// (0x00022407) mup2_indicator_pane_ParamLimits

0xb291,	// (0x00022407) mup2_indicator_pane

0x16e5,	// (0x0001885b) mup2_visualizer_osc_pane

0x2d04,	// (0x00019e7a) mup2_visualizer_spec_pane_ParamLimits

0x2d04,	// (0x00019e7a) mup2_visualizer_spec_pane

0xb414,	// (0x0002258a) mup2_spec_half_pane

0xb41d,	// (0x00022593) mup2_spec_half_pane_cp

0xb425,	// (0x0002259b) mup2_spec_bar_pane_ParamLimits

0xb425,	// (0x0002259b) mup2_spec_bar_pane

0x2c41,	// (0x00019db7) mup2_spec_bar_pane_g1

0x2c4b,	// (0x00019dc1) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0002679b) mup2_spec_bar_pane_g

0xb444,	// (0x000225ba) mup2_osc_middle_pane

0x2c5d,	// (0x00019dd3) mup2_visualizer_osc_pane_g1

0x023d,	// (0x000173b3) popup_number_entry_window_t1_ParamLimits

0x0250,	// (0x000173c6) popup_number_entry_window_t2_ParamLimits

0x0262,	// (0x000173d8) popup_number_entry_window_t3_ParamLimits

0x0274,	// (0x000173ea) popup_number_entry_window_t5_ParamLimits

0x0274,	// (0x000173ea) popup_number_entry_window_t5

0xf0e7,	// (0x0002625d) popup_number_entry_window_t_ParamLimits

0x02a9,	// (0x0001741f) text_title_cp2_ParamLimits

0x70f4,	// (0x0001e26a) aid_hotspot_pointer_text2_pane

0x714a,	// (0x0001e2c0) main_viewer_pane_g9_ParamLimits

0x714a,	// (0x0001e2c0) main_viewer_pane_g9

0x102e,	// (0x000181a4) cale_month_pane_t1_ParamLimits

0x10c3,	// (0x00018239) bg_cale_pane_ParamLimits

0x10db,	// (0x00018251) list_cale_pane_ParamLimits

0x0b6b,	// (0x00017ce1) listscroll_cale_day_pane_t1

0x10ec,	// (0x00018262) scroll_pane_cp09_ParamLimits

0xa3ee,	// (0x00021564) main_mup_eq_pane_t1_ParamLimits

0xa3ee,	// (0x00021564) main_mup_eq_pane_t1

0xa40a,	// (0x00021580) main_mup_eq_pane_t2_ParamLimits

0xa40a,	// (0x00021580) main_mup_eq_pane_t2

0xa426,	// (0x0002159c) main_mup_eq_pane_t3_ParamLimits

0xa426,	// (0x0002159c) main_mup_eq_pane_t3

0xa440,	// (0x000215b6) main_mup_eq_pane_t4_ParamLimits

0xa440,	// (0x000215b6) main_mup_eq_pane_t4

0xa45a,	// (0x000215d0) main_mup_eq_pane_t5_ParamLimits

0xa45a,	// (0x000215d0) main_mup_eq_pane_t5

0xa474,	// (0x000215ea) main_mup_eq_pane_t6_ParamLimits

0xa474,	// (0x000215ea) main_mup_eq_pane_t6

0xa48a,	// (0x00021600) main_mup_eq_pane_t7_ParamLimits

0xa48a,	// (0x00021600) main_mup_eq_pane_t7

0xa4a0,	// (0x00021616) main_mup_eq_pane_t8_ParamLimits

0xa4a0,	// (0x00021616) main_mup_eq_pane_t8

0xa4b6,	// (0x0002162c) main_mup_eq_pane_t9_ParamLimits

0xa4b6,	// (0x0002162c) main_mup_eq_pane_t9

0xa4d2,	// (0x00021648) main_mup_eq_pane_t10_ParamLimits

0xa4d2,	// (0x00021648) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000265ea) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000265ea) main_mup_eq_pane_t

0xa597,	// (0x0002170d) mup_equalizer_pane_cp5_ParamLimits

0xa5af,	// (0x00021725) mup_equalizer_pane_cp6_ParamLimits

0xa5c7,	// (0x0002173d) mup_equalizer_pane_cp7_ParamLimits

0x019e,	// (0x00017314) main_gallery_pane

0x2c66,	// (0x00019ddc) smil2_volume_pane

0x2c81,	// (0x00019df7) smil_status_volume_pane_g1_ParamLimits

0x2c6e,	// (0x00019de4) smil_status_volume_pane_g2_ParamLimits

0x7156,	// (0x0001e2cc) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x000267a0) smil_status_volume_pane_g_ParamLimits

0x2ea4,	// (0x0001a01a) bg_popup_window_pane_cp07_ParamLimits

0x2eb2,	// (0x0001a028) blid_firmament_pane

0xb44d,	// (0x000225c3) aid_size_cell_gallery_ParamLimits

0xb44d,	// (0x000225c3) aid_size_cell_gallery

0xb45b,	// (0x000225d1) grid_gallery_pane_ParamLimits

0xb45b,	// (0x000225d1) grid_gallery_pane

0xb46b,	// (0x000225e1) cell_gallery_pane_ParamLimits

0xb46b,	// (0x000225e1) cell_gallery_pane

0x2fdb,	// (0x0001a151) bg_cell_gallery_focus_pane_ParamLimits

0x2fdb,	// (0x0001a151) bg_cell_gallery_focus_pane

0x2fed,	// (0x0001a163) cell_gallery_pane_g1_ParamLimits

0x2fed,	// (0x0001a163) cell_gallery_pane_g1

0xb4b6,	// (0x0002262c) cell_gallery_pane_g2_ParamLimits

0xb4b6,	// (0x0002262c) cell_gallery_pane_g2

0xb4c3,	// (0x00022639) cell_gallery_pane_g3_ParamLimits

0xb4c3,	// (0x00022639) cell_gallery_pane_g3

0x2ff9,	// (0x0001a16f) cell_gallery_pane_g4_ParamLimits

0x2ff9,	// (0x0001a16f) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0002684e) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0002684e) cell_gallery_pane_g

0x3005,	// (0x0001a17b) bg_cell_gallery_focus_pane_g1

0x300d,	// (0x0001a183) bg_cell_gallery_focus_pane_g2

0x3015,	// (0x0001a18b) bg_cell_gallery_focus_pane_g3

0x301d,	// (0x0001a193) bg_cell_gallery_focus_pane_g4

0x3025,	// (0x0001a19b) bg_cell_gallery_focus_pane_g5

0x302d,	// (0x0001a1a3) bg_cell_gallery_focus_pane_g6

0x3035,	// (0x0001a1ab) bg_cell_gallery_focus_pane_g7

0x303d,	// (0x0001a1b3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00026857) bg_cell_gallery_focus_pane_g

0x3045,	// (0x0001a1bb) aid_firma_cardinal

0x3059,	// (0x0001a1cf) blid_firmament_pane_t1

0x3070,	// (0x0001a1e6) blid_firmament_pane_t2

0x3087,	// (0x0001a1fd) blid_firmament_pane_t3

0x309e,	// (0x0001a214) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00026868) blid_firmament_pane_t

0x30b5,	// (0x0001a22b) blid_sat_info_pane

0x30c5,	// (0x0001a23b) blid_sat_info_pane_g1

0x30c5,	// (0x0001a23b) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00026871) blid_sat_info_pane_g

0x30cf,	// (0x0001a245) blid_sat_info_pane_t1

0x30dd,	// (0x0001a253) smil2_volume_content_pane

0x30e6,	// (0x0001a25c) smil2_volume_pane_g1

0x30ee,	// (0x0001a264) smil2_volume_content_pane_g1

0x30f7,	// (0x0001a26d) smil2_volume_content_pane_g2

0x3100,	// (0x0001a276) smil2_volume_content_pane_g3

0x3109,	// (0x0001a27f) smil2_volume_content_pane_g4

0x3112,	// (0x0001a288) smil2_volume_content_pane_g5

0x311b,	// (0x0001a291) smil2_volume_content_pane_g6

0x3124,	// (0x0001a29a) smil2_volume_content_pane_g7

0x312d,	// (0x0001a2a3) smil2_volume_content_pane_g8

0x3136,	// (0x0001a2ac) smil2_volume_content_pane_g9

0x313f,	// (0x0001a2b5) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00026876) smil2_volume_content_pane_g

0x89a6,	// (0x0001fb1c) cale_week_day_heading_pane_t1_ParamLimits

0x89d3,	// (0x0001fb49) cale_week_day_heading_pane_t2_ParamLimits

0x8a00,	// (0x0001fb76) cale_week_day_heading_pane_t3_ParamLimits

0x8a2d,	// (0x0001fba3) cale_week_day_heading_pane_t4_ParamLimits

0x8a5a,	// (0x0001fbd0) cale_week_day_heading_pane_t5_ParamLimits

0x8a87,	// (0x0001fbfd) cale_week_day_heading_pane_t6_ParamLimits

0x8ab4,	// (0x0001fc2a) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00026362) cale_week_day_heading_pane_t_ParamLimits

0x0b7d,	// (0x00017cf3) bg_cale_side_pane_ParamLimits

0x6ed9,	// (0x0001e04f) cale_week_time_pane_t1_ParamLimits

0x6ef1,	// (0x0001e067) cale_week_time_pane_t2_ParamLimits

0x6f09,	// (0x0001e07f) cale_week_time_pane_t3_ParamLimits

0x6f21,	// (0x0001e097) cale_week_time_pane_t4_ParamLimits

0x6f39,	// (0x0001e0af) cale_week_time_pane_t5_ParamLimits

0x6f51,	// (0x0001e0c7) cale_week_time_pane_t6_ParamLimits

0x6f69,	// (0x0001e0df) cale_week_time_pane_t7_ParamLimits

0x6f81,	// (0x0001e0f7) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00026371) cale_week_time_pane_t_ParamLimits

0x8ae1,	// (0x0001fc57) cell_cale_week_pane_g2_ParamLimits

0x0b7d,	// (0x00017cf3) bg_cale_side_pane_cp01_ParamLimits

0x9a64,	// (0x00020bda) cale_month_week_pane_t1_ParamLimits

0x9a7b,	// (0x00020bf1) cale_month_week_pane_t2_ParamLimits

0x9a92,	// (0x00020c08) cale_month_week_pane_t3_ParamLimits

0x9aa9,	// (0x00020c1f) cale_month_week_pane_t4_ParamLimits

0x9ac0,	// (0x00020c36) cale_month_week_pane_t5_ParamLimits

0x9ad7,	// (0x00020c4d) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0002644a) cale_month_week_pane_t_ParamLimits

0x7019,	// (0x0001e18f) cell_cale_month_pane_g1_ParamLimits

0x019e,	// (0x00017314) main_cale_event_viewer_pane

0x019e,	// (0x00017314) listscroll_cale_event_viewer_pane

0x3148,	// (0x0001a2be) list_cale_ev_pane

0x3150,	// (0x0001a2c6) scroll_pane_cp023

0xb4d0,	// (0x00022646) field_cale_ev_pane_ParamLimits

0xb4d0,	// (0x00022646) field_cale_ev_pane

0x315c,	// (0x0001a2d2) field_cale_ev_content_pane_ParamLimits

0x315c,	// (0x0001a2d2) field_cale_ev_content_pane

0x3168,	// (0x0001a2de) field_cale_ev_pane_g1_ParamLimits

0x3168,	// (0x0001a2de) field_cale_ev_pane_g1

0x3174,	// (0x0001a2ea) field_cale_ev_pane_g2_ParamLimits

0x3174,	// (0x0001a2ea) field_cale_ev_pane_g2

0x318c,	// (0x0001a302) field_cale_ev_pane_g3_ParamLimits

0x318c,	// (0x0001a302) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0002688b) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0002688b) field_cale_ev_pane_g

0x31a4,	// (0x0001a31a) field_cale_ev_pane_t1_ParamLimits

0x31a4,	// (0x0001a31a) field_cale_ev_pane_t1

0xb4f4,	// (0x0002266a) field_cale_ev_content_pane_t1_ParamLimits

0xb4f4,	// (0x0002266a) field_cale_ev_content_pane_t1

0x1878,	// (0x000189ee) bg_button_pane_cp01

0x09b5,	// (0x00017b2b) listscroll_cale_week_pane_ParamLimits

0x8792,	// (0x0001f908) popup_toolbar_window_cp01

0x0b6b,	// (0x00017ce1) listscroll_cale_week_pane_t1_ParamLimits

0x09b5,	// (0x00017b2b) listscroll_cale_day_pane_ParamLimits

0x8792,	// (0x0001f908) popup_toolbar_window_cp02

0x0b6b,	// (0x00017ce1) listscroll_cale_day_pane_t1_ParamLimits

0x09b5,	// (0x00017b2b) main_cale_month_pane_ParamLimits

0xaf3b,	// (0x000220b1) popup_toolbar_window_cp03_ParamLimits

0xaf3b,	// (0x000220b1) popup_toolbar_window_cp03

0xa897,	// (0x00021a0d) main_image_pane_g2_ParamLimits

0xa897,	// (0x00021a0d) main_image_pane_g2

0xa8a3,	// (0x00021a19) main_image_pane_g3_ParamLimits

0xa8a3,	// (0x00021a19) main_image_pane_g3

0x0002,

0xf506,	// (0x0002667c) main_image_pane_g_ParamLimits

0xf506,	// (0x0002667c) main_image_pane_g

0x1a0a,	// (0x00018b80) main_image_pane_t1_ParamLimits

0xa8af,	// (0x00021a25) main_image_pane_t2_ParamLimits

0xa8af,	// (0x00021a25) main_image_pane_t2

0xa8c1,	// (0x00021a37) main_image_pane_t3_ParamLimits

0xa8c1,	// (0x00021a37) main_image_pane_t3

0xa8d3,	// (0x00021a49) main_image_pane_t4_ParamLimits

0xa8d3,	// (0x00021a49) main_image_pane_t4

0x0003,

0xf50d,	// (0x00026683) main_image_pane_t_ParamLimits

0xf50d,	// (0x00026683) main_image_pane_t

0xa8e5,	// (0x00021a5b) popup_image_details_window_cp01

0xa8ef,	// (0x00021a65) popup_toobar_trans_pane_cp01_ParamLimits

0xa8ef,	// (0x00021a65) popup_toobar_trans_pane_cp01

0xaeac,	// (0x00022022) popup_image_details_window_ParamLimits

0xaeac,	// (0x00022022) popup_image_details_window

0x2bb2,	// (0x00019d28) popup_image_focus_window

0x7178,	// (0x0001e2ee) camera2_autofocus_pane_ParamLimits

0x7178,	// (0x0001e2ee) camera2_autofocus_pane

0x019e,	// (0x00017314) bg_popup_sub_pane_cp06

0x31bb,	// (0x0001a331) popup_image_focus_window_g1

0x31c3,	// (0x0001a339) popup_image_focus_window_g2

0x31cb,	// (0x0001a341) popup_image_focus_window_g3

0x31d3,	// (0x0001a349) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00026892) popup_image_focus_window_g

0x31db,	// (0x0001a351) popup_image_focus_window_t1

0x31e9,	// (0x0001a35f) popup_image_focus_window_t2

0x31f9,	// (0x0001a36f) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0002689b) popup_image_focus_window_t

0x3207,	// (0x0001a37d) camera2_autofocus_pane_g1

0x020f,	// (0x00017385) bg_tb_trans_pane_cp01

0x3215,	// (0x0001a38b) popup_image_details_window_g1

0x3228,	// (0x0001a39e) popup_image_details_window_g2

0x0002,

0xf737,	// (0x000268ad) popup_image_details_window_g

0x3251,	// (0x0001a3c7) popup_image_details_window_t1

0x3263,	// (0x0001a3d9) popup_image_details_window_t2

0x327c,	// (0x0001a3f2) popup_image_details_window_t3

0x3290,	// (0x0001a406) popup_image_details_window_t4

0x32ab,	// (0x0001a421) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x000268b4) popup_image_details_window_t

0x0987,	// (0x00017afd) bg_calc_paper_pane_ParamLimits

0x6da0,	// (0x0001df16) grid_highlight_pane_cp013

0x6daa,	// (0x0001df20) list_calc_pane_ParamLimits

0x6dbc,	// (0x0001df32) scroll_pane_cp024

0x09b5,	// (0x00017b2b) bg_calc_display_pane_ParamLimits

0x6dc4,	// (0x0001df3a) calc_display_pane_t1_ParamLimits

0x6dd9,	// (0x0001df4f) calc_display_pane_t2_ParamLimits

0x6dee,	// (0x0001df64) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x000262e4) calc_display_pane_t_ParamLimits

0x6e59,	// (0x0001dfcf) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00026301) cell_calc_pane_g

0x6e62,	// (0x0001dfd8) cell_calc_pane_t1

0x0a38,	// (0x00017bae) grid_highlight_pane_cp02_ParamLimits

0x0a4e,	// (0x00017bc4) toolbar_button_pane_cp01_ParamLimits

0x0a4e,	// (0x00017bc4) toolbar_button_pane_cp01

0x1a4f,	// (0x00018bc5) temp_image_control_pane_ParamLimits

0x1a4f,	// (0x00018bc5) temp_image_control_pane

0x020f,	// (0x00017385) main_mp3_pane

0x32c5,	// (0x0001a43b) temp_image_control_pane_g1_ParamLimits

0x32c5,	// (0x0001a43b) temp_image_control_pane_g1

0x32d3,	// (0x0001a449) temp_image_control_pane_g2_ParamLimits

0x32d3,	// (0x0001a449) temp_image_control_pane_g2

0x32e5,	// (0x0001a45b) temp_image_control_pane_g3_ParamLimits

0x32e5,	// (0x0001a45b) temp_image_control_pane_g3

0xb53f,	// (0x000226b5) temp_image_control_pane_g4_ParamLimits

0xb53f,	// (0x000226b5) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x000268bf) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x000268bf) temp_image_control_pane_g

0x32c5,	// (0x0001a43b) main_mp3_pane_g1

0xb550,	// (0x000226c6) main_mp3_pane_g2

0x0007,

0xf752,	// (0x000268c8) main_mp3_pane_g

0x3328,	// (0x0001a49e) main_mp3_pane_t1

0x0c4c,	// (0x00017dc2) main_camera_pane_g8_ParamLimits

0x0c4c,	// (0x00017dc2) main_camera_pane_g8

0x8d0f,	// (0x0001fe85) main_video_pane_g7_ParamLimits

0x8d0f,	// (0x0001fe85) main_video_pane_g7

0x72bb,	// (0x0001e431) main_camera2_pane_t7_ParamLimits

0x72bb,	// (0x0001e431) main_camera2_pane_t7

0x0e56,	// (0x00017fcc) scroll_pane_cp025_ParamLimits

0x0e56,	// (0x00017fcc) scroll_pane_cp025

0x0e6a,	// (0x00017fe0) scroll_pane_cp026_ParamLimits

0x0e6a,	// (0x00017fe0) scroll_pane_cp026

0x0e79,	// (0x00017fef) wml_content_pane_ParamLimits

0x019e,	// (0x00017314) main_touch_calib_pane

0xb5f4,	// (0x0002276a) main_touch_calib_pane_g1

0xb600,	// (0x00022776) main_touch_calib_pane_g2

0xb60c,	// (0x00022782) main_touch_calib_pane_g3

0xb618,	// (0x0002278e) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x000268e6) main_touch_calib_pane_g

0xb624,	// (0x0002279a) main_touch_calib_pane_t1

0xb63b,	// (0x000227b1) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x000268ef) main_touch_calib_pane_t

0x1626,	// (0x0001879c) mup_progress_pane_cp02

0x1645,	// (0x000187bb) navi_pane_g1

0x16a7,	// (0x0001881d) navi_pane_mp_t3

0x020f,	// (0x00017385) main_mp3_pane_ParamLimits

0xaf7d,	// (0x000220f3) navi_pane_ParamLimits

0x32c5,	// (0x0001a43b) main_mp3_pane_g1_ParamLimits

0xb550,	// (0x000226c6) main_mp3_pane_g2_ParamLimits

0xb55c,	// (0x000226d2) main_mp3_pane_g3_ParamLimits

0xb55c,	// (0x000226d2) main_mp3_pane_g3

0xb568,	// (0x000226de) main_mp3_pane_g4_ParamLimits

0xb568,	// (0x000226de) main_mp3_pane_g4

0x32f5,	// (0x0001a46b) main_mp3_pane_g5_ParamLimits

0x32f5,	// (0x0001a46b) main_mp3_pane_g5

0x3303,	// (0x0001a479) main_mp3_pane_g6_ParamLimits

0x3303,	// (0x0001a479) main_mp3_pane_g6

0x3310,	// (0x0001a486) main_mp3_pane_g7_ParamLimits

0x3310,	// (0x0001a486) main_mp3_pane_g7

0x331c,	// (0x0001a492) main_mp3_pane_g8_ParamLimits

0x331c,	// (0x0001a492) main_mp3_pane_g8

0xf752,	// (0x000268c8) main_mp3_pane_g_ParamLimits

0xb574,	// (0x000226ea) main_mp3_pane_t2

0xb584,	// (0x000226fa) main_mp3_pane_t3

0x3336,	// (0x0001a4ac) main_mp3_pane_t4

0x3344,	// (0x0001a4ba) main_mp3_pane_t5

0x0005,

0xf763,	// (0x000268d9) main_mp3_pane_t

0x3352,	// (0x0001a4c8) mup_progress_pane_cp01

0x01bc,	// (0x00017332) aid_zoom_text_secondary2

0x3148,	// (0x0001a2be) list_cale_ev2_pane

0x3150,	// (0x0001a2c6) scroll_pane_cp023_ParamLimits

0xb692,	// (0x00022808) field_cale_ev2_pane_ParamLimits

0xb692,	// (0x00022808) field_cale_ev2_pane

0xb6ad,	// (0x00022823) field_cale_ev2_pane_g1_ParamLimits

0xb6ad,	// (0x00022823) field_cale_ev2_pane_g1

0xb6b9,	// (0x0002282f) field_cale_ev2_pane_g2_ParamLimits

0xb6b9,	// (0x0002282f) field_cale_ev2_pane_g2

0xb6d1,	// (0x00022847) field_cale_ev2_pane_g3_ParamLimits

0xb6d1,	// (0x00022847) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000268fa) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000268fa) field_cale_ev2_pane_g

0xb6e9,	// (0x0002285f) field_cale_ev2_pane_t1_ParamLimits

0xb6e9,	// (0x0002285f) field_cale_ev2_pane_t1

0xb700,	// (0x00022876) field_cale_ev2_pane_t2_ParamLimits

0xb700,	// (0x00022876) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00026903) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00026903) field_cale_ev2_pane_t

0xa776,	// (0x000218ec) main_postcard_pane_g5_ParamLimits

0xa776,	// (0x000218ec) main_postcard_pane_g5

0xa784,	// (0x000218fa) main_postcard_pane_g6_ParamLimits

0xa784,	// (0x000218fa) main_postcard_pane_g6

0x8b4d,	// (0x0001fcc3) camera2_autofocus_pane_cp_ParamLimits

0x8b4d,	// (0x0001fcc3) camera2_autofocus_pane_cp

0x020f,	// (0x00017385) main_mup3_pane

0xb735,	// (0x000228ab) main_mup3_pane_g1_ParamLimits

0xb735,	// (0x000228ab) main_mup3_pane_g1

0xb756,	// (0x000228cc) main_mup3_pane_g2_ParamLimits

0xb756,	// (0x000228cc) main_mup3_pane_g2

0xb7d2,	// (0x00022948) main_mup3_pane_g3_ParamLimits

0xb7d2,	// (0x00022948) main_mup3_pane_g3

0xb817,	// (0x0002298d) main_mup3_pane_g4_ParamLimits

0xb817,	// (0x0002298d) main_mup3_pane_g4

0xb85c,	// (0x000229d2) main_mup3_pane_g5_ParamLimits

0xb85c,	// (0x000229d2) main_mup3_pane_g5

0xb8a1,	// (0x00022a17) main_mup3_pane_g6_ParamLimits

0xb8a1,	// (0x00022a17) main_mup3_pane_g6

0x3366,	// (0x0001a4dc) main_mup3_pane_g7_ParamLimits

0x3366,	// (0x0001a4dc) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00026913) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00026913) main_mup3_pane_g

0xb917,	// (0x00022a8d) main_mup3_pane_t1_ParamLimits

0xb917,	// (0x00022a8d) main_mup3_pane_t1

0xb982,	// (0x00022af8) main_mup3_pane_t2_ParamLimits

0xb982,	// (0x00022af8) main_mup3_pane_t2

0xba4b,	// (0x00022bc1) main_mup3_pane_t4_ParamLimits

0xba4b,	// (0x00022bc1) main_mup3_pane_t4

0xba9f,	// (0x00022c15) main_mup3_pane_t5_ParamLimits

0xba9f,	// (0x00022c15) main_mup3_pane_t5

0xbb4f,	// (0x00022cc5) main_mup3_pane_t6_ParamLimits

0xbb4f,	// (0x00022cc5) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00026924) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00026924) main_mup3_pane_t

0xbbf7,	// (0x00022d6d) mup3_progress_pane_ParamLimits

0xbbf7,	// (0x00022d6d) mup3_progress_pane

0xbc71,	// (0x00022de7) popup_mup3_control_window_ParamLimits

0xbc71,	// (0x00022de7) popup_mup3_control_window

0x3374,	// (0x0001a4ea) popup_mup3_text_window

0xbc8e,	// (0x00022e04) mup3_progress_pane_t1

0xbca5,	// (0x00022e1b) mup3_progress_pane_t2

0x337c,	// (0x0001a4f2) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00026931) mup3_progress_pane_t

0x3393,	// (0x0001a509) mup_progress_pane_cp03

0x019e,	// (0x00017314) bg_tb_trans_pane_cp04

0xbcbc,	// (0x00022e32) mup3_volume_pane

0xbcc4,	// (0x00022e3a) popup_mup3_control_window_g1

0x3bd2,	// (0x0001ad48) mup3_volume_pane_g1

0x3bdb,	// (0x0001ad51) mup3_volume_pane_g2

0x3be4,	// (0x0001ad5a) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00026938) mup3_volume_pane_g

0x019e,	// (0x00017314) bg_tb_trans_pane_cp03

0x33a3,	// (0x0001a519) popup_mup3_text_window_g1

0x33ab,	// (0x0001a521) popup_mup3_text_window_t1

0x0a0f,	// (0x00017b85) list_calc_item_pane_g1_ParamLimits

0x2dce,	// (0x00019f44) mup_volume_pane_cp_g1

0xb652,	// (0x000227c8) main_touch_calib_pane_t3

0xb666,	// (0x000227dc) main_touch_calib_pane_t4

0xb67c,	// (0x000227f2) main_touch_calib_pane_t5

0x01a8,	// (0x0001731e) aid_cell_size_toolbar2

0x01b0,	// (0x00017326) aid_popup3_width_pane

0x01bc,	// (0x00017332) aid_zoom_text_msg_primary

0x7003,	// (0x0001e179) vorec_t7

0x09d3,	// (0x00017b49) bg_calc_paper_pane_g1_ParamLimits

0x09eb,	// (0x00017b61) bg_calc_paper_pane_g2_ParamLimits

0x09df,	// (0x00017b55) bg_calc_paper_pane_g3_ParamLimits

0x0a03,	// (0x00017b79) bg_calc_paper_pane_g4_ParamLimits

0x09f7,	// (0x00017b6d) bg_calc_paper_pane_g5_ParamLimits

0x8669,	// (0x0001f7df) bg_calc_paper_pane_g6_ParamLimits

0x867a,	// (0x0001f7f0) bg_calc_paper_pane_g7_ParamLimits

0x868b,	// (0x0001f801) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x000262eb) bg_calc_paper_pane_g_ParamLimits

0x869e,	// (0x0001f814) calc_bg_paper_pane_g9_ParamLimits

0x8c3e,	// (0x0001fdb4) image_qvga_pane_ParamLimits

0x8c3e,	// (0x0001fdb4) image_qvga_pane

0x08c0,	// (0x00017a36) bg_popup_sub_pane_cp04_ParamLimits

0x1986,	// (0x00018afc) popup_mup_playback_window_g1_ParamLimits

0x1992,	// (0x00018b08) popup_mup_playback_window_t1_ParamLimits

0x19a7,	// (0x00018b1d) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00026677) popup_mup_playback_window_t_ParamLimits

0xb19b,	// (0x00022311) main_mup2_pane_g3_ParamLimits

0xb19b,	// (0x00022311) main_mup2_pane_g3

0x8f43,	// (0x000200b9) popup_toolbar_window_cp04

0x1da2,	// (0x00018f18) popup_call2_audio_second_window_g3_ParamLimits

0x1da2,	// (0x00018f18) popup_call2_audio_second_window_g3

0x21ac,	// (0x00019322) popup_call2_audio_first_window_g4_ParamLimits

0x21ac,	// (0x00019322) popup_call2_audio_first_window_g4

0x282b,	// (0x000199a1) popup_call2_audio_in_window_g4_ParamLimits

0x282b,	// (0x000199a1) popup_call2_audio_in_window_g4

0xa88a,	// (0x00021a00) aid_area_sk_bg_cut_ParamLimits

0xa88a,	// (0x00021a00) aid_area_sk_bg_cut

0x19bc,	// (0x00018b32) aid_area_sk_bg_cut_2_ParamLimits

0x19bc,	// (0x00018b32) aid_area_sk_bg_cut_2

0xb4a6,	// (0x0002261c) aid_placing_details_win

0xb4ae,	// (0x00022624) aid_placing_details_win_2

0x3207,	// (0x0001a37d) camera2_autofocus_pane_g1_ParamLimits

0x8384,	// (0x0001f4fa) popup_fixed_preview_cale_window_ParamLimits

0x8384,	// (0x0001f4fa) popup_fixed_preview_cale_window

0x1711,	// (0x00018887) navi_slider_pane_g3

0x1708,	// (0x0001887e) navi_slider_pane_g4

0x16ff,	// (0x00018875) navi_slider_pane_g5

0x1711,	// (0x00018887) navi_slider_pane_g6

0x70db,	// (0x0001e251) navi_slider_pane_g7

0x183d,	// (0x000189b3) mup_scale_pane_g3

0x1846,	// (0x000189bc) mup_scale_pane_g4

0x184f,	// (0x000189c5) mup_scale_pane_g5

0xa5df,	// (0x00021755) mup_scale_pane_g6

0xa5e8,	// (0x0002175e) mup_scale_pane_g7

0x1711,	// (0x00018887) cams2_slider_pane_g3

0x2e83,	// (0x00019ff9) cams2_slider_pane_g4

0x742d,	// (0x0001e5a3) cams2_slider_pane_g5

0x1711,	// (0x00018887) cams2_slider_pane_g6

0x7435,	// (0x0001e5ab) cams2_slider_pane_g7

0x30c5,	// (0x0001a23b) camera2_autofocus_pane_cp_g1

0x33b9,	// (0x0001a52f) bg_popup_preview_window_pane_cp02_ParamLimits

0x33b9,	// (0x0001a52f) bg_popup_preview_window_pane_cp02

0x33c5,	// (0x0001a53b) list_fp_cale_pane_ParamLimits

0x33c5,	// (0x0001a53b) list_fp_cale_pane

0x33d1,	// (0x0001a547) popup_fixed_preview_cale_window_t1_ParamLimits

0x33d1,	// (0x0001a547) popup_fixed_preview_cale_window_t1

0xbccd,	// (0x00022e43) popup_fixed_preview_cale_window_t2_ParamLimits

0xbccd,	// (0x00022e43) popup_fixed_preview_cale_window_t2

0xbce2,	// (0x00022e58) popup_fixed_preview_cale_window_t3_ParamLimits

0xbce2,	// (0x00022e58) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0002693f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0002693f) popup_fixed_preview_cale_window_t

0xbcf7,	// (0x00022e6d) list_single_fp_cale_pane_ParamLimits

0xbcf7,	// (0x00022e6d) list_single_fp_cale_pane

0x33ef,	// (0x0001a565) list_single_fp_cale_pane_g1_ParamLimits

0x33ef,	// (0x0001a565) list_single_fp_cale_pane_g1

0x33fb,	// (0x0001a571) list_single_fp_cale_pane_g2_ParamLimits

0x33fb,	// (0x0001a571) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00026946) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00026946) list_single_fp_cale_pane_g

0x3414,	// (0x0001a58a) list_single_fp_cale_pane_t1_ParamLimits

0x3414,	// (0x0001a58a) list_single_fp_cale_pane_t1

0x3426,	// (0x0001a59c) list_single_fp_cale_pane_t2_ParamLimits

0x3426,	// (0x0001a59c) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0002694d) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0002694d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x019e,	// (0x00017314) main_dialer_pane

0xbd04,	// (0x00022e7a) aid_cell_size_keypad

0xbd0e,	// (0x00022e84) dialer_ne_pane

0xbd18,	// (0x00022e8e) grid_dialer_command_1_pane

0xbd20,	// (0x00022e96) grid_dialer_command_2_pane

0xbd28,	// (0x00022e9e) grid_dialer_keypad_pane

0xbd3c,	// (0x00022eb2) bg_popup_call_pane_cp06_ParamLimits

0xbd3c,	// (0x00022eb2) bg_popup_call_pane_cp06

0xbd48,	// (0x00022ebe) dialer_ne_clear_pane_ParamLimits

0xbd48,	// (0x00022ebe) dialer_ne_clear_pane

0x3459,	// (0x0001a5cf) dialer_ne_pane_g1

0x3461,	// (0x0001a5d7) dialer_ne_pane_t1_ParamLimits

0x3461,	// (0x0001a5d7) dialer_ne_pane_t1

0xbd54,	// (0x00022eca) dialer_ne_pane_t2_ParamLimits

0xbd54,	// (0x00022eca) dialer_ne_pane_t2

0xbd71,	// (0x00022ee7) dialer_ne_pane_t3_ParamLimits

0xbd71,	// (0x00022ee7) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00026952) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00026952) dialer_ne_pane_t

0xbd95,	// (0x00022f0b) dialer_ne_pane_t3_copy1_ParamLimits

0xbd95,	// (0x00022f0b) dialer_ne_pane_t3_copy1

0xbdb9,	// (0x00022f2f) cell_dialer_keypad_pane_ParamLimits

0xbdb9,	// (0x00022f2f) cell_dialer_keypad_pane

0xbdce,	// (0x00022f44) cell_dialer_command_1_pane_ParamLimits

0xbdce,	// (0x00022f44) cell_dialer_command_1_pane

0xbde4,	// (0x00022f5a) cell_dialer_command_2_pane_ParamLimits

0xbde4,	// (0x00022f5a) cell_dialer_command_2_pane

0x3473,	// (0x0001a5e9) bg_button_pane_cp02_ParamLimits

0x3473,	// (0x0001a5e9) bg_button_pane_cp02

0xbdf3,	// (0x00022f69) cell_dialer_keypad_pane_g1_ParamLimits

0xbdf3,	// (0x00022f69) cell_dialer_keypad_pane_g1

0x3473,	// (0x0001a5e9) bg_button_pane_cp03_ParamLimits

0x3473,	// (0x0001a5e9) bg_button_pane_cp03

0xbe08,	// (0x00022f7e) cell_dialer_command_1_pane_g1_ParamLimits

0xbe08,	// (0x00022f7e) cell_dialer_command_1_pane_g1

0x347f,	// (0x0001a5f5) bg_button_pane_cp04

0xbe1c,	// (0x00022f92) cell_dialer_command_2_pane_g1

0x16e5,	// (0x0001885b) bg_button_pane_cp06

0x3487,	// (0x0001a5fd) dialer_ne_clear_pane_g1

0xa0bd,	// (0x00021233) navi_pane_g2

0xa0eb,	// (0x00021261) navi_pane_g3

0x0002,

0xf404,	// (0x0002657a) navi_pane_g

0xa116,	// (0x0002128c) navi_pane_mv_g2

0xa13d,	// (0x000212b3) navi_pane_mv_g5

0xa145,	// (0x000212bb) navi_pane_mv_t1

0x09b5,	// (0x00017b2b) main_clock2_pane

0xbe4e,	// (0x00022fc4) main_clock2_list_pane_ParamLimits

0xbe4e,	// (0x00022fc4) main_clock2_list_pane

0xbe78,	// (0x00022fee) main_clock2_pane_t1_ParamLimits

0xbe78,	// (0x00022fee) main_clock2_pane_t1

0xbea6,	// (0x0002301c) main_clock2_pane_t2_ParamLimits

0xbea6,	// (0x0002301c) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00026959) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00026959) main_clock2_pane_t

0xbf0f,	// (0x00023085) popup_clock_analogue_window_cp03_ParamLimits

0xbf0f,	// (0x00023085) popup_clock_analogue_window_cp03

0xbf2f,	// (0x000230a5) popup_clock_digital_window_cp02_ParamLimits

0xbf2f,	// (0x000230a5) popup_clock_digital_window_cp02

0xbfa0,	// (0x00023116) main_clock2_list_single_pane_ParamLimits

0xbfa0,	// (0x00023116) main_clock2_list_single_pane

0x16e5,	// (0x0001885b) list_highlight_pane_cp05

0x348f,	// (0x0001a605) main_clock2_list_single_pane_t1

0x8f43,	// (0x000200b9) popup_toolbar_window_cp04_ParamLimits

0xb50f,	// (0x00022685) camera2_autofocus_pane_g2_ParamLimits

0xb50f,	// (0x00022685) camera2_autofocus_pane_g2

0xb51b,	// (0x00022691) camera2_autofocus_pane_g3_ParamLimits

0xb51b,	// (0x00022691) camera2_autofocus_pane_g3

0xb527,	// (0x0002269d) camera2_autofocus_pane_g4_ParamLimits

0xb527,	// (0x0002269d) camera2_autofocus_pane_g4

0xb533,	// (0x000226a9) camera2_autofocus_pane_g5_ParamLimits

0xb533,	// (0x000226a9) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x000268a2) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x000268a2) camera2_autofocus_pane_g

0xb715,	// (0x0002288b) camera2_autofocus_pane_cp_g2

0xb71d,	// (0x00022893) camera2_autofocus_pane_cp_g3

0xb725,	// (0x0002289b) camera2_autofocus_pane_cp_g4

0xb72d,	// (0x000228a3) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00026908) camera2_autofocus_pane_cp_g

0xbd34,	// (0x00022eaa) popup_dialer_spcha_window

0x019e,	// (0x00017314) bg_popup_sub_pane_cp07

0x349d,	// (0x0001a613) list_spcha_pane

0x34a5,	// (0x0001a61b) list_single_spcha_pane_ParamLimits

0x34a5,	// (0x0001a61b) list_single_spcha_pane

0x019e,	// (0x00017314) list_highlight_pane_cp06

0x34b6,	// (0x0001a62c) list_single_spcha_pane_t1

0x25d5,	// (0x0001974b) popup_call2_audio_out_window_g4_ParamLimits

0x25d5,	// (0x0001974b) popup_call2_audio_out_window_g4

0x019e,	// (0x00017314) main_imed2_pane

0x2bbc,	// (0x00019d32) popup_imed_adjust2_window

0xaeba,	// (0x00022030) popup_imed_trans_window_ParamLimits

0xaeba,	// (0x00022030) popup_imed_trans_window

0x2efd,	// (0x0001a073) popup_blid_sat_info2_window_t1

0x2f0b,	// (0x0001a081) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00026837) popup_blid_sat_info2_window_t

0xbfd2,	// (0x00023148) aid_size_cell_colour_35

0xbfec,	// (0x00023162) aid_size_cell_colour_112

0xc003,	// (0x00023179) aid_size_cell_effect

0x020f,	// (0x00017385) bg_tb_trans_pane_cp02

0x1206,	// (0x0001837c) heading_imed_pane

0xc01d,	// (0x00023193) listscroll_imed_pane

0x34c4,	// (0x0001a63a) heading_imed_pane_g1

0x34cc,	// (0x0001a642) heading_imed_pane_t1

0x34da,	// (0x0001a650) grid_imed_colour_35_pane_ParamLimits

0x34da,	// (0x0001a650) grid_imed_colour_35_pane

0xc029,	// (0x0002319f) grid_imed_effect_pane

0x34f6,	// (0x0001a66c) list_imed_aspect_pane

0xc039,	// (0x000231af) scroll_pane_cp027_ParamLimits

0xc039,	// (0x000231af) scroll_pane_cp027

0xc045,	// (0x000231bb) cell_imed_effect_pane_ParamLimits

0xc045,	// (0x000231bb) cell_imed_effect_pane

0x34fe,	// (0x0001a674) cell_imed_colour_pane_ParamLimits

0x34fe,	// (0x0001a674) cell_imed_colour_pane

0x3548,	// (0x0001a6be) cell_imed_colour_pane_g1_ParamLimits

0x3548,	// (0x0001a6be) cell_imed_colour_pane_g1

0x3559,	// (0x0001a6cf) hgihlgiht_grid_pane_cp016_ParamLimits

0x3559,	// (0x0001a6cf) hgihlgiht_grid_pane_cp016

0xc061,	// (0x000231d7) cell_imed_effect_pane_g1

0xc069,	// (0x000231df) grid_highlight_pane_cp017

0x356a,	// (0x0001a6e0) list_imed_single_pane_ParamLimits

0x356a,	// (0x0001a6e0) list_imed_single_pane

0x019e,	// (0x00017314) list_highlight_pane_cp07

0x357e,	// (0x0001a6f4) list_imed_aspect_pane_comp1_t1

0x2b90,	// (0x00019d06) bg_tb_trans_pane_cp05

0x35a0,	// (0x0001a716) popup_imed_adjust2_window_g1

0x35c7,	// (0x0001a73d) popup_imed_adjust2_window_t1

0x35df,	// (0x0001a755) slider_imed_adjust_pane

0x35f3,	// (0x0001a769) slider_imed_adjust_pane_g1

0x3603,	// (0x0001a779) slider_imed_adjust_pane_g2

0x3613,	// (0x0001a789) slider_imed_adjust_pane_g3

0x3624,	// (0x0001a79a) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00026976) slider_imed_adjust_pane_g

0xc072,	// (0x000231e8) aid_size_cell_clipart2

0xc07e,	// (0x000231f4) grid_imed_clipart_pane

0x3635,	// (0x0001a7ab) scroll_pane_cp031

0xc088,	// (0x000231fe) cell_imed_clipart_pane_ParamLimits

0xc088,	// (0x000231fe) cell_imed_clipart_pane

0xc0a6,	// (0x0002321c) cell_imed_clipart_pane_g1

0x019e,	// (0x00017314) grid_highlight_pane_cp014

0xbe5a,	// (0x00022fd0) main_clock2_pane_g1_ParamLimits

0xbe5a,	// (0x00022fd0) main_clock2_pane_g1

0xbf4b,	// (0x000230c1) aid_call2_pane_cp10

0xbf5d,	// (0x000230d3) aid_call_pane_cp10

0x161a,	// (0x00018790) popup_clock_analogue_window_cp10_g1

0x161a,	// (0x00018790) popup_clock_analogue_window_cp10_g2

0xbf6f,	// (0x000230e5) popup_clock_analogue_window_cp10_g3

0xbf6f,	// (0x000230e5) popup_clock_analogue_window_cp10_g4

0x161a,	// (0x00018790) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00026964) popup_clock_analogue_window_cp10_g

0xbf81,	// (0x000230f7) popup_clock_analogue_window_cp10_t1

0x743e,	// (0x0001e5b4) clock_digital_number_pane_cp10_ParamLimits

0x743e,	// (0x0001e5b4) clock_digital_number_pane_cp10

0x7456,	// (0x0001e5cc) clock_digital_number_pane_cp11_ParamLimits

0x7456,	// (0x0001e5cc) clock_digital_number_pane_cp11

0x746e,	// (0x0001e5e4) clock_digital_number_pane_cp12_ParamLimits

0x746e,	// (0x0001e5e4) clock_digital_number_pane_cp12

0x7486,	// (0x0001e5fc) clock_digital_number_pane_cp13_ParamLimits

0x7486,	// (0x0001e5fc) clock_digital_number_pane_cp13

0x749e,	// (0x0001e614) clock_digital_separator_pane_cp10_ParamLimits

0x749e,	// (0x0001e614) clock_digital_separator_pane_cp10

0xbfb2,	// (0x00023128) popup_clock_digital_window_cp02_t1_ParamLimits

0xbfb2,	// (0x00023128) popup_clock_digital_window_cp02_t1

0x08b8,	// (0x00017a2e) clock_digital_number_pane_cp10_g1

0x08b8,	// (0x00017a2e) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0002697f) clock_digital_number_pane_cp10_g

0x08b8,	// (0x00017a2e) clock_digital_separator_pane_cp10_g1

0x08b8,	// (0x00017a2e) clock_digital_separator_pane_g2_cp10

0x16b5,	// (0x0001882b) navi_pane_vded_g4

0x16be,	// (0x00018834) navi_pane_vded_g5

0x16c7,	// (0x0001883d) navi_pane_vded_t1

0x019e,	// (0x00017314) main_vded_pane

0xc0af,	// (0x00023225) main_vded_pane_g1

0xc0bb,	// (0x00023231) main_vded_pane_g2

0xc0c5,	// (0x0002323b) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00026984) main_vded_pane_g

0xc0cf,	// (0x00023245) main_vded_pane_t1

0xc0dd,	// (0x00023253) main_vded_pane_t2

0x0001,

0xf815,	// (0x0002698b) main_vded_pane_t

0xc0eb,	// (0x00023261) vded_slider_pane

0xc0f5,	// (0x0002326b) vded_video_pane

0x363d,	// (0x0001a7b3) vded_video_pane_g1

0xc101,	// (0x00023277) vded_video_pane_g2

0x30c5,	// (0x0001a23b) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00026990) vded_video_pane_g

0x3647,	// (0x0001a7bd) vded_slider_pane_g1

0x2dce,	// (0x00019f44) vded_slider_pane_g2

0x3650,	// (0x0001a7c6) vded_slider_pane_g3

0x3659,	// (0x0001a7cf) vded_slider_pane_g4

0x3662,	// (0x0001a7d8) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00026997) vded_slider_pane_g

0xbc65,	// (0x00022ddb) mup3_rocker_pane_ParamLimits

0xbc65,	// (0x00022ddb) mup3_rocker_pane

0xc10a,	// (0x00023280) mup3_control_keys_pane_g1

0xc112,	// (0x00023288) mup3_control_keys_pane_g2

0xc11a,	// (0x00023290) mup3_control_keys_pane_g3

0xc122,	// (0x00023298) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x000269a2) mup3_control_keys_pane_g

0x83a2,	// (0x0001f518) popup_toolbar2_fixed_window_cp01_ParamLimits

0x83a2,	// (0x0001f518) popup_toolbar2_fixed_window_cp01

0xbc81,	// (0x00022df7) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbc81,	// (0x00022df7) popup_toolbar2_fixed_window_cp02

0x1f14,	// (0x0001908a) popup_call2_audio_second_window_t4_ParamLimits

0x1f14,	// (0x0001908a) popup_call2_audio_second_window_t4

0x2442,	// (0x000195b8) popup_call2_audio_first_window_t6_ParamLimits

0x2442,	// (0x000195b8) popup_call2_audio_first_window_t6

0x26d8,	// (0x0001984e) popup_call2_audio_out_window_t6_ParamLimits

0x26d8,	// (0x0001984e) popup_call2_audio_out_window_t6

0x019e,	// (0x00017314) main_vitu_pane

0xc132,	// (0x000232a8) aid_size_cell_itu_ParamLimits

0xc132,	// (0x000232a8) aid_size_cell_itu

0x3bc4,	// (0x0001ad3a) bg_popup_window_pane_cp08_ParamLimits

0x3bc4,	// (0x0001ad3a) bg_popup_window_pane_cp08

0xc140,	// (0x000232b6) field_vitu_entry_pane_ParamLimits

0xc140,	// (0x000232b6) field_vitu_entry_pane

0xc14f,	// (0x000232c5) grid_vitu_function_pane_ParamLimits

0xc14f,	// (0x000232c5) grid_vitu_function_pane

0xc15f,	// (0x000232d5) grid_vitu_itu_pane_ParamLimits

0xc15f,	// (0x000232d5) grid_vitu_itu_pane

0xc16d,	// (0x000232e3) cell_vitu_itu_pane_ParamLimits

0xc16d,	// (0x000232e3) cell_vitu_itu_pane

0xc184,	// (0x000232fa) cell_vitu_function_pane_ParamLimits

0xc184,	// (0x000232fa) cell_vitu_function_pane

0x020f,	// (0x00017385) bg_popup_sub_pane_cp08_ParamLimits

0x020f,	// (0x00017385) bg_popup_sub_pane_cp08

0xc198,	// (0x0002330e) field_vitu_entry_pane_t1_ParamLimits

0xc198,	// (0x0002330e) field_vitu_entry_pane_t1

0x3683,	// (0x0001a7f9) field_vitu_entry_pane_t2_ParamLimits

0x3683,	// (0x0001a7f9) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x000269b0) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x000269b0) field_vitu_entry_pane_t

0x36a0,	// (0x0001a816) bg_button_pane_cp05_ParamLimits

0x36a0,	// (0x0001a816) bg_button_pane_cp05

0xc1b1,	// (0x00023327) cell_vitu_itu_pane_g1

0xc1c9,	// (0x0002333f) cell_vitu_itu_pane_t1_ParamLimits

0xc1c9,	// (0x0002333f) cell_vitu_itu_pane_t1

0xc1db,	// (0x00023351) cell_vitu_itu_pane_t2_ParamLimits

0xc1db,	// (0x00023351) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x000269b5) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x000269b5) cell_vitu_itu_pane_t

0x36ae,	// (0x0001a824) bg_button_pane_cp07

0xc21e,	// (0x00023394) cell_vitu_function_pane_g1

0x6d98,	// (0x0001df0e) main_calc_pane_g1

0x81a6,	// (0x0001f31c) aid_visual_content_pane

0x019e,	// (0x00017314) main_vradio_pane

0xc227,	// (0x0002339d) main_vradio_pane_g1_ParamLimits

0xc227,	// (0x0002339d) main_vradio_pane_g1

0x36b8,	// (0x0001a82e) main_vradio_pane_g2_ParamLimits

0x36b8,	// (0x0001a82e) main_vradio_pane_g2

0x0001,

0xf846,	// (0x000269bc) main_vradio_pane_g_ParamLimits

0xf846,	// (0x000269bc) main_vradio_pane_g

0xc235,	// (0x000233ab) main_vradio_pane_t1_ParamLimits

0xc235,	// (0x000233ab) main_vradio_pane_t1

0xc247,	// (0x000233bd) main_vradio_pane_t2_ParamLimits

0xc247,	// (0x000233bd) main_vradio_pane_t2

0x36c5,	// (0x0001a83b) main_vradio_pane_t3_ParamLimits

0x36c5,	// (0x0001a83b) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x000269c1) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x000269c1) main_vradio_pane_t

0xc259,	// (0x000233cf) vradio_rocker_control_pane_ParamLimits

0xc259,	// (0x000233cf) vradio_rocker_control_pane

0xc265,	// (0x000233db) vradio_station_info_pane_ParamLimits

0xc265,	// (0x000233db) vradio_station_info_pane

0x36d9,	// (0x0001a84f) vradio_frequency_info_pane_ParamLimits

0x36d9,	// (0x0001a84f) vradio_frequency_info_pane

0x30c5,	// (0x0001a23b) vradio_station_info_pane_g1

0x36e8,	// (0x0001a85e) vradio_station_info_pane_t1_ParamLimits

0x36e8,	// (0x0001a85e) vradio_station_info_pane_t1

0x370a,	// (0x0001a880) vradio_station_info_pane_t2_ParamLimits

0x370a,	// (0x0001a880) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x000269c8) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x000269c8) vradio_station_info_pane_t

0x371c,	// (0x0001a892) vradio_tuning_pane

0x3724,	// (0x0001a89a) vradio_rocker_control_pane_g1

0x372c,	// (0x0001a8a2) vradio_rocker_control_pane_g2

0x3734,	// (0x0001a8aa) vradio_rocker_control_pane_g3

0x373c,	// (0x0001a8b2) vradio_rocker_control_pane_g4

0x3744,	// (0x0001a8ba) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x000269cd) vradio_rocker_control_pane_g

0xc272,	// (0x000233e8) vradio_frequency_info_pane_g1

0x374c,	// (0x0001a8c2) vradio_frequency_info_pane_t1_ParamLimits

0x374c,	// (0x0001a8c2) vradio_frequency_info_pane_t1

0xc27c,	// (0x000233f2) vradio_tuning_pane_g1

0xc287,	// (0x000233fd) vradio_tuning_pane_t1

0x01cc,	// (0x00017342) area_side_right_pane_ParamLimits

0x01cc,	// (0x00017342) area_side_right_pane

0x2b57,	// (0x00019ccd) status_small_pane_g1

0x2b5f,	// (0x00019cd5) status_small_pane_g2

0x2b68,	// (0x00019cde) status_small_pane_g3

0x2b71,	// (0x00019ce7) status_small_pane_g4

0x0003,

0xf617,	// (0x0002678d) status_small_pane_g

0x2b7a,	// (0x00019cf0) status_small_pane_t1

0x019e,	// (0x00017314) main_video3_pane

0x3760,	// (0x0001a8d6) cams_zoom_vslider_pane

0x3768,	// (0x0001a8de) image3_wide_pane_ParamLimits

0x3768,	// (0x0001a8de) image3_wide_pane

0x3782,	// (0x0001a8f8) image3_wide_small_pane

0x378e,	// (0x0001a904) main_video3_pane_g1_ParamLimits

0x378e,	// (0x0001a904) main_video3_pane_g1

0x37aa,	// (0x0001a920) main_video3_pane_g2_ParamLimits

0x37aa,	// (0x0001a920) main_video3_pane_g2

0x0001,

0xf862,	// (0x000269d8) main_video3_pane_g_ParamLimits

0xf862,	// (0x000269d8) main_video3_pane_g

0x37c6,	// (0x0001a93c) main_video3_pane_t1_ParamLimits

0x37c6,	// (0x0001a93c) main_video3_pane_t1

0x37f1,	// (0x0001a967) main_video3_pane_t2_ParamLimits

0x37f1,	// (0x0001a967) main_video3_pane_t2

0x381e,	// (0x0001a994) main_video3_pane_t3_ParamLimits

0x381e,	// (0x0001a994) main_video3_pane_t3

0x0002,

0xf867,	// (0x000269dd) main_video3_pane_t_ParamLimits

0xf867,	// (0x000269dd) main_video3_pane_t

0x384b,	// (0x0001a9c1) cams_zoom_vslider_pane_g1

0x3854,	// (0x0001a9ca) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x000269e4) cams_zoom_vslider_pane_g

0x385c,	// (0x0001a9d2) small_slider_vertical_pane

0x30c5,	// (0x0001a23b) small_slider_vertical_pane_g1

0x30c5,	// (0x0001a23b) small_slider_vertical_pane_g2

0x3864,	// (0x0001a9da) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x000269e9) small_slider_vertical_pane_g

0x019e,	// (0x00017314) main_hwr_training_pane

0x386d,	// (0x0001a9e3) hwr_training_instruct_pane_ParamLimits

0x386d,	// (0x0001a9e3) hwr_training_instruct_pane

0xc296,	// (0x0002340c) hwr_training_navi_pane_ParamLimits

0xc296,	// (0x0002340c) hwr_training_navi_pane

0xc2b0,	// (0x00023426) hwr_training_write_pane_ParamLimits

0xc2b0,	// (0x00023426) hwr_training_write_pane

0x019e,	// (0x00017314) bg_frame_shadow_pane

0x38a4,	// (0x0001aa1a) hwr_training_write_pane_g1

0x38ac,	// (0x0001aa22) hwr_training_write_pane_g2

0x38b4,	// (0x0001aa2a) hwr_training_write_pane_g3

0x38bc,	// (0x0001aa32) hwr_training_write_pane_g4

0x38c4,	// (0x0001aa3a) hwr_training_write_pane_g5

0x38cc,	// (0x0001aa42) hwr_training_write_pane_g6

0x38d4,	// (0x0001aa4a) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000269f0) hwr_training_write_pane_g

0x74b6,	// (0x0001e62c) hwr_training_navi_pane_g1_ParamLimits

0x74b6,	// (0x0001e62c) hwr_training_navi_pane_g1

0x74c8,	// (0x0001e63e) hwr_training_navi_pane_g2_ParamLimits

0x74c8,	// (0x0001e63e) hwr_training_navi_pane_g2

0x74da,	// (0x0001e650) hwr_training_navi_pane_g3_ParamLimits

0x74da,	// (0x0001e650) hwr_training_navi_pane_g3

0x74ea,	// (0x0001e660) hwr_training_navi_pane_g4_ParamLimits

0x74ea,	// (0x0001e660) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000269ff) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000269ff) hwr_training_navi_pane_g

0x7504,	// (0x0001e67a) hwr_training_navi_pane_t1

0xc2e8,	// (0x0002345e) list_single_hwr_training_instruct_pane_ParamLimits

0xc2e8,	// (0x0002345e) list_single_hwr_training_instruct_pane

0x392b,	// (0x0001aaa1) list_single_hwr_training_instruct_pane_t1

0x3005,	// (0x0001a17b) bg_frame_shadow_pane_g1

0x393a,	// (0x0001aab0) bg_frame_shadow_pane_g2

0x3942,	// (0x0001aab8) bg_frame_shadow_pane_g3

0x394a,	// (0x0001aac0) bg_frame_shadow_pane_g4

0x3952,	// (0x0001aac8) bg_frame_shadow_pane_g5

0x395a,	// (0x0001aad0) bg_frame_shadow_pane_g6

0x3962,	// (0x0001aad8) bg_frame_shadow_pane_g7

0x0aae,	// (0x00017c24) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00026a0a) bg_frame_shadow_pane_g

0x019e,	// (0x00017314) main_video_tele_dialer_pane

0x7512,	// (0x0001e688) aid_size_cell_video_keypad_ParamLimits

0x7512,	// (0x0001e688) aid_size_cell_video_keypad

0x7522,	// (0x0001e698) grid_video_dialer_keypad_pane_ParamLimits

0x7522,	// (0x0001e698) grid_video_dialer_keypad_pane

0x7554,	// (0x0001e6ca) video_down_pane_cp_ParamLimits

0x7554,	// (0x0001e6ca) video_down_pane_cp

0x7560,	// (0x0001e6d6) cell_video_dialer_keypad_pane_ParamLimits

0x7560,	// (0x0001e6d6) cell_video_dialer_keypad_pane

0x396a,	// (0x0001aae0) bg_button_pane_cp08_ParamLimits

0x396a,	// (0x0001aae0) bg_button_pane_cp08

0xc31d,	// (0x00023493) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc31d,	// (0x00023493) cell_video_dialer_keypad_pane_g1

0xbc59,	// (0x00022dcf) mup3_rocker2_pane_ParamLimits

0xbc59,	// (0x00022dcf) mup3_rocker2_pane

0x30c5,	// (0x0001a23b) mup3_rocker2_pane_g1

0xae3c,	// (0x00021fb2) main_dialer2_pane

0x019e,	// (0x00017314) main_mp4_pane

0x757f,	// (0x0001e6f5) main_mp4_pane_g1_ParamLimits

0x757f,	// (0x0001e6f5) main_mp4_pane_g1

0x758d,	// (0x0001e703) main_mp4_pane_g2_ParamLimits

0x758d,	// (0x0001e703) main_mp4_pane_g2

0x759b,	// (0x0001e711) main_mp4_pane_g3_ParamLimits

0x759b,	// (0x0001e711) main_mp4_pane_g3

0x75ee,	// (0x0001e764) main_mp4_pane_g4_ParamLimits

0x75ee,	// (0x0001e764) main_mp4_pane_g4

0x7616,	// (0x0001e78c) main_mp4_pane_g5_ParamLimits

0x7616,	// (0x0001e78c) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00026a2a) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00026a2a) main_mp4_pane_g

0x7666,	// (0x0001e7dc) main_mp4_pane_t1_ParamLimits

0x7666,	// (0x0001e7dc) main_mp4_pane_t1

0x76c2,	// (0x0001e838) main_mp4_pane_t2_ParamLimits

0x76c2,	// (0x0001e838) main_mp4_pane_t2

0x3ab2,	// (0x0001ac28) main_mp4_pane_t3_ParamLimits

0x3ab2,	// (0x0001ac28) main_mp4_pane_t3

0x7714,	// (0x0001e88a) main_mp4_pane_t4_ParamLimits

0x7714,	// (0x0001e88a) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00026a37) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00026a37) main_mp4_pane_t

0x7754,	// (0x0001e8ca) mp4_progress_pane_ParamLimits

0x7754,	// (0x0001e8ca) mp4_progress_pane

0x779e,	// (0x0001e914) mp4_rocker_pane_ParamLimits

0x779e,	// (0x0001e914) mp4_rocker_pane

0x3b86,	// (0x0001acfc) mp4_progress_pane_t1

0x3b9f,	// (0x0001ad15) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00026a40) mp4_progress_pane_t

0x3bb8,	// (0x0001ad2e) mup_progress_pane_cp04

0x4596,	// (0x0001b70c) mp4_rocker_pane_g1

0x77c0,	// (0x0001e936) aid_cell_size_keypad2_ParamLimits

0x77c0,	// (0x0001e936) aid_cell_size_keypad2

0x77d0,	// (0x0001e946) dialer2_ne_pane_ParamLimits

0x77d0,	// (0x0001e946) dialer2_ne_pane

0x77dc,	// (0x0001e952) grid_dialer2_keypad_pane_ParamLimits

0x77dc,	// (0x0001e952) grid_dialer2_keypad_pane

0x3bed,	// (0x0001ad63) bg_popup_call_pane_cp07_ParamLimits

0x3bed,	// (0x0001ad63) bg_popup_call_pane_cp07

0xc354,	// (0x000234ca) dialer2_ne_pane_t1_ParamLimits

0xc354,	// (0x000234ca) dialer2_ne_pane_t1

0x77ea,	// (0x0001e960) cell_dialer2_keypad_pane_ParamLimits

0x77ea,	// (0x0001e960) cell_dialer2_keypad_pane

0x3c0d,	// (0x0001ad83) bg_button_pane_pane_cp04_ParamLimits

0x3c0d,	// (0x0001ad83) bg_button_pane_pane_cp04

0xc379,	// (0x000234ef) cell_dialer2_keypad_pane_g1_ParamLimits

0xc379,	// (0x000234ef) cell_dialer2_keypad_pane_g1

0x8e15,	// (0x0001ff8b) aid_placing_vt_set_content_ParamLimits

0x8e15,	// (0x0001ff8b) aid_placing_vt_set_content

0x8e3d,	// (0x0001ffb3) aid_placing_vt_set_title_ParamLimits

0x8e3d,	// (0x0001ffb3) aid_placing_vt_set_title

0x019e,	// (0x00017314) main_image3_pane

0x7833,	// (0x0001e9a9) area_side_right_pane_cp01_ParamLimits

0x7833,	// (0x0001e9a9) area_side_right_pane_cp01

0x7862,	// (0x0001e9d8) main_image3_pane_g1_ParamLimits

0x7862,	// (0x0001e9d8) main_image3_pane_g1

0x7870,	// (0x0001e9e6) main_image3_pane_g2_ParamLimits

0x7870,	// (0x0001e9e6) main_image3_pane_g2

0x7889,	// (0x0001e9ff) main_image3_pane_g3_ParamLimits

0x7889,	// (0x0001e9ff) main_image3_pane_g3

0x78a2,	// (0x0001ea18) main_image3_pane_g4_ParamLimits

0x78a2,	// (0x0001ea18) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00026a4f) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00026a4f) main_image3_pane_g

0x78bb,	// (0x0001ea31) main_image3_pane_t1_ParamLimits

0x78bb,	// (0x0001ea31) main_image3_pane_t1

0x78e0,	// (0x0001ea56) main_image3_pane_t2_ParamLimits

0x78e0,	// (0x0001ea56) main_image3_pane_t2

0x78ff,	// (0x0001ea75) main_image3_pane_t3_ParamLimits

0x78ff,	// (0x0001ea75) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00026a58) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00026a58) main_image3_pane_t

0x3bc4,	// (0x0001ad3a) grid_sctrl_middle_pane_cp01_ParamLimits

0x3bc4,	// (0x0001ad3a) grid_sctrl_middle_pane_cp01

0xc3e1,	// (0x00023557) cell_sctrl_middle_pane_cp01_ParamLimits

0xc3e1,	// (0x00023557) cell_sctrl_middle_pane_cp01

0xc3f2,	// (0x00023568) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc3f2,	// (0x00023568) cell_sctrl_middle_pane_cp01_g1

0x019e,	// (0x00017314) main_call4_pane

0xc3ff,	// (0x00023575) aid_size_button_call4_ParamLimits

0xc3ff,	// (0x00023575) aid_size_button_call4

0xc431,	// (0x000235a7) call4_windows_pane_ParamLimits

0xc431,	// (0x000235a7) call4_windows_pane

0xc44d,	// (0x000235c3) grid_call4_button_pane_ParamLimits

0xc44d,	// (0x000235c3) grid_call4_button_pane

0x3c4d,	// (0x0001adc3) call4_windows_conf_pane

0xc471,	// (0x000235e7) popup_call4_audio_first_window_ParamLimits

0xc471,	// (0x000235e7) popup_call4_audio_first_window

0xc49d,	// (0x00023613) popup_call4_audio_second_window_ParamLimits

0xc49d,	// (0x00023613) popup_call4_audio_second_window

0x3c8a,	// (0x0001ae00) popup_call4_audio_wait_window_ParamLimits

0x3c8a,	// (0x0001ae00) popup_call4_audio_wait_window

0xc4b1,	// (0x00023627) cell_call4_button_pane_ParamLimits

0xc4b1,	// (0x00023627) cell_call4_button_pane

0xc4d4,	// (0x0002364a) bg_button_pane_cp09_ParamLimits

0xc4d4,	// (0x0002364a) bg_button_pane_cp09

0xc4e0,	// (0x00023656) cell_call4_button_pane_g1_ParamLimits

0xc4e0,	// (0x00023656) cell_call4_button_pane_g1

0xc4ed,	// (0x00023663) cell_call4_button_pane_t1_ParamLimits

0xc4ed,	// (0x00023663) cell_call4_button_pane_t1

0x3cd2,	// (0x0001ae48) popup_call4_audio_conf_window_ParamLimits

0x3cd2,	// (0x0001ae48) popup_call4_audio_conf_window

0xbc8e,	// (0x00022e04) mup3_progress_pane_t1_ParamLimits

0xbca5,	// (0x00022e1b) mup3_progress_pane_t2_ParamLimits

0x337c,	// (0x0001a4f2) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00026931) mup3_progress_pane_t_ParamLimits

0x3393,	// (0x0001a509) mup_progress_pane_cp03_ParamLimits

0xc12a,	// (0x000232a0) mup3_control_keys_pane_g4_copy1

0x7782,	// (0x0001e8f8) mp4_rocker2_pane_ParamLimits

0x7782,	// (0x0001e8f8) mp4_rocker2_pane

0x3cf4,	// (0x0001ae6a) mp4_rocker2_pane_g1

0x3cec,	// (0x0001ae62) mp4_rocker2_pane_g2

0x7960,	// (0x0001ead6) mp4_rocker2_pane_g3

0x7968,	// (0x0001eade) mp4_rocker2_pane_g4

0x7970,	// (0x0001eae6) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00026a61) mp4_rocker2_pane_g

0x019e,	// (0x00017314) main_camera4_pane

0x019e,	// (0x00017314) main_video4_pane

0x7530,	// (0x0001e6a6) main_video_tele_dialer_pane_t1_ParamLimits

0x7530,	// (0x0001e6a6) main_video_tele_dialer_pane_t1

0x7542,	// (0x0001e6b8) main_video_tele_dialer_pane_t2_ParamLimits

0x7542,	// (0x0001e6b8) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00026a1b) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00026a1b) main_video_tele_dialer_pane_t

0x7990,	// (0x0001eb06) cam4_autofocus_pane_ParamLimits

0x7990,	// (0x0001eb06) cam4_autofocus_pane

0x79a8,	// (0x0001eb1e) cam4_image_uncrop_pane_ParamLimits

0x79a8,	// (0x0001eb1e) cam4_image_uncrop_pane

0x79c1,	// (0x0001eb37) cam4_indicators_pane_ParamLimits

0x79c1,	// (0x0001eb37) cam4_indicators_pane

0x79dd,	// (0x0001eb53) main_camera4_pane_g1_ParamLimits

0x79dd,	// (0x0001eb53) main_camera4_pane_g1

0x79e9,	// (0x0001eb5f) main_camera4_pane_g2_ParamLimits

0x79e9,	// (0x0001eb5f) main_camera4_pane_g2

0x79e9,	// (0x0001eb5f) main_camera4_pane_g3_ParamLimits

0x79e9,	// (0x0001eb5f) main_camera4_pane_g3

0x79f5,	// (0x0001eb6b) main_camera4_pane_g4_ParamLimits

0x79f5,	// (0x0001eb6b) main_camera4_pane_g4

0x7a01,	// (0x0001eb77) main_camera4_pane_g5_ParamLimits

0x7a01,	// (0x0001eb77) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00026a6c) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00026a6c) main_camera4_pane_g

0x7a1b,	// (0x0001eb91) main_camera4_pane_t1_ParamLimits

0x7a1b,	// (0x0001eb91) main_camera4_pane_t1

0x7a3f,	// (0x0001ebb5) bg_tb_trans_pane_cp06

0x7a55,	// (0x0001ebcb) cam4_indicators_pane_g1

0x7a65,	// (0x0001ebdb) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00026a87) cam4_indicators_pane_g

0x7a7d,	// (0x0001ebf3) cam4_indicators_pane_t1

0x7aa9,	// (0x0001ec1f) main_video4_pane_g1_ParamLimits

0x7aa9,	// (0x0001ec1f) main_video4_pane_g1

0x7ab5,	// (0x0001ec2b) main_video4_pane_g2_ParamLimits

0x7ab5,	// (0x0001ec2b) main_video4_pane_g2

0x7ac1,	// (0x0001ec37) main_video4_pane_g3_ParamLimits

0x7ac1,	// (0x0001ec37) main_video4_pane_g3

0x7acd,	// (0x0001ec43) main_video4_pane_g4_ParamLimits

0x7acd,	// (0x0001ec43) main_video4_pane_g4

0x0004,

0xf918,	// (0x00026a8e) main_video4_pane_g_ParamLimits

0xf918,	// (0x00026a8e) main_video4_pane_g

0x7aef,	// (0x0001ec65) vid4_indicators_pane_ParamLimits

0x7aef,	// (0x0001ec65) vid4_indicators_pane

0x7b0d,	// (0x0001ec83) video4_image_uncrop_cif_pane_ParamLimits

0x7b0d,	// (0x0001ec83) video4_image_uncrop_cif_pane

0x7b1c,	// (0x0001ec92) video4_image_uncrop_nhd_pane_ParamLimits

0x7b1c,	// (0x0001ec92) video4_image_uncrop_nhd_pane

0x79a8,	// (0x0001eb1e) video4_image_uncrop_vga_pane_ParamLimits

0x79a8,	// (0x0001eb1e) video4_image_uncrop_vga_pane

0x7b2b,	// (0x0001eca1) bg_tb_trans_pane_cp07

0x7b43,	// (0x0001ecb9) vid4_indicators_pane_g1

0x7b55,	// (0x0001eccb) vid4_indicators_pane_g2

0x7b68,	// (0x0001ecde) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00026a99) vid4_indicators_pane_g

0x7b95,	// (0x0001ed0b) vid4_indicators_pane_t1

0xc525,	// (0x0002369b) cam4_autofocus_pane_g1

0xc52d,	// (0x000236a3) cam4_autofocus_pane_g2

0xc535,	// (0x000236ab) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00026aa4) cam4_autofocus_pane_g

0xc53d,	// (0x000236b3) cam4_autofocus_pane_g3_copy1

0xc301,	// (0x00023477) video_down_pane_cp_t1

0xc30f,	// (0x00023485) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00026a20) video_down_pane_cp_t

0x3bc4,	// (0x0001ad3a) popup_vitu2_window_ParamLimits

0x3bc4,	// (0x0001ad3a) popup_vitu2_window

0x7bb0,	// (0x0001ed26) aid_size_cell2_itu2_ParamLimits

0x7bb0,	// (0x0001ed26) aid_size_cell2_itu2

0x7bd2,	// (0x0001ed48) aid_size_cell_itu2_ParamLimits

0x7bd2,	// (0x0001ed48) aid_size_cell_itu2

0x7c16,	// (0x0001ed8c) bg_popup_window_pane_cp09_ParamLimits

0x7c16,	// (0x0001ed8c) bg_popup_window_pane_cp09

0x7c24,	// (0x0001ed9a) field_vitu2_entry_pane_ParamLimits

0x7c24,	// (0x0001ed9a) field_vitu2_entry_pane

0x7c44,	// (0x0001edba) grid_vitu2_function_pane_ParamLimits

0x7c44,	// (0x0001edba) grid_vitu2_function_pane

0x7c88,	// (0x0001edfe) grid_vitu2_itu_pane_ParamLimits

0x7c88,	// (0x0001edfe) grid_vitu2_itu_pane

0x7cfc,	// (0x0001ee72) cell_vitu2_itu_pane_ParamLimits

0x7cfc,	// (0x0001ee72) cell_vitu2_itu_pane

0x7d13,	// (0x0001ee89) cell_vitu2_function_pane_ParamLimits

0x7d13,	// (0x0001ee89) cell_vitu2_function_pane

0x3d92,	// (0x0001af08) bg_popup_call_pane_cp08_ParamLimits

0x3d92,	// (0x0001af08) bg_popup_call_pane_cp08

0x3dab,	// (0x0001af21) field_vitu2_entry_pane_g1

0x3db7,	// (0x0001af2d) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00026aab) field_vitu2_entry_pane_g

0xc545,	// (0x000236bb) field_vitu2_entry_pane_t1_ParamLimits

0xc545,	// (0x000236bb) field_vitu2_entry_pane_t1

0x3dd1,	// (0x0001af47) field_vitu2_entry_pane_t2_ParamLimits

0x3dd1,	// (0x0001af47) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00026ab2) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00026ab2) field_vitu2_entry_pane_t

0x7d57,	// (0x0001eecd) bg_button_pane_cp010_ParamLimits

0x7d57,	// (0x0001eecd) bg_button_pane_cp010

0x7d65,	// (0x0001eedb) cell_vitu2_itu_pane_g1

0x7d83,	// (0x0001eef9) cell_vitu2_itu_pane_t1_ParamLimits

0x7d83,	// (0x0001eef9) cell_vitu2_itu_pane_t1

0x7dd5,	// (0x0001ef4b) cell_vitu2_itu_pane_t2_ParamLimits

0x7dd5,	// (0x0001ef4b) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00026abc) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00026abc) cell_vitu2_itu_pane_t

0x7b2b,	// (0x0001eca1) bg_button_pane_cp011

0x7e90,	// (0x0001f006) cell_vitu2_function_pane_g1

0x019e,	// (0x00017314) main_myfav_hc_pane

0x7941,	// (0x0001eab7) popup_image3_note_pane_ParamLimits

0x7941,	// (0x0001eab7) popup_image3_note_pane

0x794f,	// (0x0001eac5) popup_image3_tool_bar_pane_ParamLimits

0x794f,	// (0x0001eac5) popup_image3_tool_bar_pane

0x7e43,	// (0x0001efb9) cell_vitu2_itu_pane_t3_ParamLimits

0x7e43,	// (0x0001efb9) cell_vitu2_itu_pane_t3

0x019e,	// (0x00017314) bg_popup_trans_pane

0x3df6,	// (0x0001af6c) grid_image3_tool_bar_pane

0x3e00,	// (0x0001af76) bg_popup_trans_pane_g1

0x0f5f,	// (0x000180d5) bg_popup_trans_pane_g2

0x3e08,	// (0x0001af7e) bg_popup_trans_pane_g3

0x3e10,	// (0x0001af86) bg_popup_trans_pane_g4

0x3e18,	// (0x0001af8e) bg_popup_trans_pane_g5

0x3e20,	// (0x0001af96) bg_popup_trans_pane_g6

0x3e28,	// (0x0001af9e) bg_popup_trans_pane_g7

0x3e30,	// (0x0001afa6) bg_popup_trans_pane_g8

0x0f3f,	// (0x000180b5) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00026ac3) bg_popup_trans_pane_g

0x3e38,	// (0x0001afae) cell_image3_tool_bar_pane_ParamLimits

0x3e38,	// (0x0001afae) cell_image3_tool_bar_pane

0x30c5,	// (0x0001a23b) cell_image3_tool_bar_pane_g1

0x019e,	// (0x00017314) bg_popup_trans_pane_cp1

0x3e4e,	// (0x0001afc4) popup_image3_note_pane_t1

0x3e5c,	// (0x0001afd2) popup_image3_note_pane_t2

0x3e6a,	// (0x0001afe0) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00026ad6) popup_image3_note_pane_t

0x3e7a,	// (0x0001aff0) popup_image3_note_pane_t3_copy1

0xc572,	// (0x000236e8) bg_myfav_hc_instruction_pane_ParamLimits

0xc572,	// (0x000236e8) bg_myfav_hc_instruction_pane

0xc58a,	// (0x00023700) cell_myfav_contact_pane_ParamLimits

0xc58a,	// (0x00023700) cell_myfav_contact_pane

0xc5a4,	// (0x0002371a) cell_myfav_contact_pane_cp1_ParamLimits

0xc5a4,	// (0x0002371a) cell_myfav_contact_pane_cp1

0xc5bc,	// (0x00023732) cell_myfav_contact_pane_cp2_ParamLimits

0xc5bc,	// (0x00023732) cell_myfav_contact_pane_cp2

0xc5d4,	// (0x0002374a) cell_myfav_contact_pane_cp3_ParamLimits

0xc5d4,	// (0x0002374a) cell_myfav_contact_pane_cp3

0xc5eb,	// (0x00023761) cell_myfav_contact_pane_cp4_ParamLimits

0xc5eb,	// (0x00023761) cell_myfav_contact_pane_cp4

0xc601,	// (0x00023777) cell_myfav_contact_pane_cp5_ParamLimits

0xc601,	// (0x00023777) cell_myfav_contact_pane_cp5

0xc615,	// (0x0002378b) cell_myfav_contact_pane_cp6_ParamLimits

0xc615,	// (0x0002378b) cell_myfav_contact_pane_cp6

0xc629,	// (0x0002379f) cell_myfav_contact_pane_cp7_ParamLimits

0xc629,	// (0x0002379f) cell_myfav_contact_pane_cp7

0x3e88,	// (0x0001affe) listscroll_gen_pane_cp05

0xc641,	// (0x000237b7) main_myfav_hc_pane_g1_ParamLimits

0xc641,	// (0x000237b7) main_myfav_hc_pane_g1

0xc65b,	// (0x000237d1) main_myfav_hc_pane_g2_ParamLimits

0xc65b,	// (0x000237d1) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00026add) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00026add) main_myfav_hc_pane_g

0xc68d,	// (0x00023803) main_myfav_hc_pane_t1_ParamLimits

0xc68d,	// (0x00023803) main_myfav_hc_pane_t1

0x3e91,	// (0x0001b007) main_myfav_hc_pane_t2_ParamLimits

0x3e91,	// (0x0001b007) main_myfav_hc_pane_t2

0x3ea3,	// (0x0001b019) main_myfav_hc_pane_t3_ParamLimits

0x3ea3,	// (0x0001b019) main_myfav_hc_pane_t3

0xc6a4,	// (0x0002381a) main_myfav_hc_pane_t4_ParamLimits

0xc6a4,	// (0x0002381a) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00026ae4) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00026ae4) main_myfav_hc_pane_t

0x30c5,	// (0x0001a23b) bg_myfav_hc_instruction_pane_g1

0x3eb5,	// (0x0001b02b) cell_myfav_contact_pane_g1_ParamLimits

0x3eb5,	// (0x0001b02b) cell_myfav_contact_pane_g1

0x3eb5,	// (0x0001b02b) cell_myfav_contact_pane_g2_ParamLimits

0x3eb5,	// (0x0001b02b) cell_myfav_contact_pane_g2

0x3ec1,	// (0x0001b037) cell_myfav_contact_pane_g3_ParamLimits

0x3ec1,	// (0x0001b037) cell_myfav_contact_pane_g3

0x3366,	// (0x0001a4dc) cell_myfav_contact_pane_g4_ParamLimits

0x3366,	// (0x0001a4dc) cell_myfav_contact_pane_g4

0x3ece,	// (0x0001b044) cell_myfav_contact_pane_g5_ParamLimits

0x3ece,	// (0x0001b044) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00026aef) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00026aef) cell_myfav_contact_pane_g

0xc675,	// (0x000237eb) main_myfav_hc_pane_g3_ParamLimits

0xc675,	// (0x000237eb) main_myfav_hc_pane_g3

0x82e6,	// (0x0001f45c) popup_adpt_find_window

0xc6ce,	// (0x00023844) afind_page_pane_ParamLimits

0xc6ce,	// (0x00023844) afind_page_pane

0xc6db,	// (0x00023851) aid_size_cell_afind_ParamLimits

0xc6db,	// (0x00023851) aid_size_cell_afind

0xc6f5,	// (0x0002386b) bg_popup_sub_pane_cp09_ParamLimits

0xc6f5,	// (0x0002386b) bg_popup_sub_pane_cp09

0xc702,	// (0x00023878) find_pane_cp01_ParamLimits

0xc702,	// (0x00023878) find_pane_cp01

0x3eda,	// (0x0001b050) grid_afind_control_pane_ParamLimits

0x3eda,	// (0x0001b050) grid_afind_control_pane

0xc70f,	// (0x00023885) grid_afind_pane_ParamLimits

0xc70f,	// (0x00023885) grid_afind_pane

0xc72b,	// (0x000238a1) cell_afind_pane_ParamLimits

0xc72b,	// (0x000238a1) cell_afind_pane

0x30c5,	// (0x0001a23b) afind_page_pane_g1

0xc775,	// (0x000238eb) afind_page_pane_g2

0xc77e,	// (0x000238f4) afind_page_pane_g3

0x0002,

0xf984,	// (0x00026afa) afind_page_pane_g

0xc787,	// (0x000238fd) afind_page_pane_t1

0x3eee,	// (0x0001b064) cell_afind_grid_control_pane_ParamLimits

0x3eee,	// (0x0001b064) cell_afind_grid_control_pane

0x3c0d,	// (0x0001ad83) bg_button_pane_cp69_ParamLimits

0x3c0d,	// (0x0001ad83) bg_button_pane_cp69

0xc7a7,	// (0x0002391d) cell_afind_pane_g1_ParamLimits

0xc7a7,	// (0x0002391d) cell_afind_pane_g1

0xc7b4,	// (0x0002392a) cell_afind_pane_t1_ParamLimits

0xc7b4,	// (0x0002392a) cell_afind_pane_t1

0x0c96,	// (0x00017e0c) bg_button_pane_cp72

0x3efd,	// (0x0001b073) cell_afind_grid_control_pane_g1

0xa9b7,	// (0x00021b2d) aid_image_placing_area_ParamLimits

0xa9b7,	// (0x00021b2d) aid_image_placing_area

0x366b,	// (0x0001a7e1) field_vitu_entry_pane_g1_ParamLimits

0x366b,	// (0x0001a7e1) field_vitu_entry_pane_g1

0x3677,	// (0x0001a7ed) field_vitu_entry_pane_g2_ParamLimits

0x3677,	// (0x0001a7ed) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x000269ab) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x000269ab) field_vitu_entry_pane_g

0xc1b1,	// (0x00023327) cell_vitu_itu_pane_g1_ParamLimits

0xc201,	// (0x00023377) cell_vitu_itu_pane_t3_ParamLimits

0xc201,	// (0x00023377) cell_vitu_itu_pane_t3

0x3b86,	// (0x0001acfc) mp4_progress_pane_t1_ParamLimits

0x3b9f,	// (0x0001ad15) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00026a40) mp4_progress_pane_t_ParamLimits

0x3bb8,	// (0x0001ad2e) mup_progress_pane_cp04_ParamLimits

0xc6b8,	// (0x0002382e) main_myfav_hc_pane_t5_ParamLimits

0xc6b8,	// (0x0002382e) main_myfav_hc_pane_t5

0x01c4,	// (0x0001733a) aid_zoom_text_primary

0x82e6,	// (0x0001f45c) popup_adpt_find_window_ParamLimits

0x020f,	// (0x00017385) main_cam_set_pane

0x79cf,	// (0x0001eb45) cam4_zoom_pane_ParamLimits

0x79cf,	// (0x0001eb45) cam4_zoom_pane

0xc7c6,	// (0x0002393c) main_cam_set_pane_g1_ParamLimits

0xc7c6,	// (0x0002393c) main_cam_set_pane_g1

0xc7d4,	// (0x0002394a) main_cam_set_pane_g2_ParamLimits

0xc7d4,	// (0x0002394a) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00026b01) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00026b01) main_cam_set_pane_g

0xc7e0,	// (0x00023956) main_cam_set_pane_t1_ParamLimits

0xc7e0,	// (0x00023956) main_cam_set_pane_t1

0xc7fc,	// (0x00023972) main_cset_listscroll_pane_ParamLimits

0xc7fc,	// (0x00023972) main_cset_listscroll_pane

0xc82b,	// (0x000239a1) main_cset_slider_pane_ParamLimits

0xc82b,	// (0x000239a1) main_cset_slider_pane

0x3f0e,	// (0x0001b084) main_cset_list_pane_ParamLimits

0x3f0e,	// (0x0001b084) main_cset_list_pane

0x3f1e,	// (0x0001b094) scroll_pane_cp028

0xc84c,	// (0x000239c2) aid_area_touch_slider

0xc868,	// (0x000239de) cset_slider_pane

0xc892,	// (0x00023a08) main_cset_slider_pane_g1

0xc8a7,	// (0x00023a1d) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00026b06) main_cset_slider_pane_g

0x3f57,	// (0x0001b0cd) main_cset_slider_pane_t1

0xc963,	// (0x00023ad9) main_cset_slider_pane_t2

0xc97d,	// (0x00023af3) main_cset_slider_pane_t3

0xc997,	// (0x00023b0d) main_cset_slider_pane_t4

0xc9b1,	// (0x00023b27) main_cset_slider_pane_t5

0xc9cb,	// (0x00023b41) main_cset_slider_pane_t6

0xc9e0,	// (0x00023b56) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00026b2b) main_cset_slider_pane_t

0xcae4,	// (0x00023c5a) cset_list_set_pane_ParamLimits

0xcae4,	// (0x00023c5a) cset_list_set_pane

0xcaf5,	// (0x00023c6b) aid_position_infowindow_above

0xcafd,	// (0x00023c73) aid_position_infowindow_below

0xcb05,	// (0x00023c7b) cset_list_set_pane_g1_ParamLimits

0xcb05,	// (0x00023c7b) cset_list_set_pane_g1

0xcb11,	// (0x00023c87) cset_list_set_pane_g3_ParamLimits

0xcb11,	// (0x00023c87) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00026b4a) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00026b4a) cset_list_set_pane_g

0xcb20,	// (0x00023c96) cset_list_set_pane_t1_ParamLimits

0xcb20,	// (0x00023c96) cset_list_set_pane_t1

0x020f,	// (0x00017385) list_highlight_pane_cp021_ParamLimits

0x020f,	// (0x00017385) list_highlight_pane_cp021

0x183d,	// (0x000189b3) cset_slider_pane_g1

0x184f,	// (0x000189c5) cset_slider_pane_g2

0x1846,	// (0x000189bc) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00026b4f) cset_slider_pane_g

0x7ea4,	// (0x0001f01a) aid_area_touch_cam4_zoom

0x7eac,	// (0x0001f022) cam4_zoom_cont_pane

0x7eb4,	// (0x0001f02a) cam4_zoom_pane_g1

0x7ebc,	// (0x0001f032) cam4_zoom_pane_g2

0x7ec4,	// (0x0001f03a) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00026b56) cam4_zoom_pane_g

0x7ecc,	// (0x0001f042) cam4_zoom_cont_pane_g1

0x7ed5,	// (0x0001f04b) cam4_zoom_cont_pane_g2

0x7ede,	// (0x0001f054) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00026b5d) cam4_zoom_cont_pane_g

0xc419,	// (0x0002358f) call4_image_pane_ParamLimits

0xc419,	// (0x0002358f) call4_image_pane

0x3c4d,	// (0x0001adc3) call4_windows_conf_pane_ParamLimits

0x3c68,	// (0x0001adde) popup_call4_audio_in_window_ParamLimits

0x3c68,	// (0x0001adde) popup_call4_audio_in_window

0x019e,	// (0x00017314) bg_popup_call2_act_pane_cp02

0x3cca,	// (0x0001ae40) call4_list_conf_pane

0x30c5,	// (0x0001a23b) call4_image_pane_g1

0x30c5,	// (0x0001a23b) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00026871) call4_image_pane_g

0x4032,	// (0x0001b1a8) list_single_graphic_popup_conf4_pane_ParamLimits

0x4032,	// (0x0001b1a8) list_single_graphic_popup_conf4_pane

0x019e,	// (0x00017314) list_highlight_pane_cp022

0x4047,	// (0x0001b1bd) list_single_graphic_popup_conf4_pane_g1

0x1517,	// (0x0001868d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00026b64) list_single_graphic_popup_conf4_pane_g

0x404f,	// (0x0001b1c5) list_single_graphic_popup_conf4_pane_t1

0x8f97,	// (0x0002010d) popup_vtel_slider_window_ParamLimits

0x8f97,	// (0x0002010d) popup_vtel_slider_window

0x3bfb,	// (0x0001ad71) dialer2_ne_pane_t2_ParamLimits

0x3bfb,	// (0x0001ad71) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00026a45) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00026a45) dialer2_ne_pane_t

0x020f,	// (0x00017385) bg_popup_sub_pane_cp010_ParamLimits

0x020f,	// (0x00017385) bg_popup_sub_pane_cp010

0xcb35,	// (0x00023cab) popup_vtel_slider_window_g1_ParamLimits

0xcb35,	// (0x00023cab) popup_vtel_slider_window_g1

0xcb41,	// (0x00023cb7) popup_vtel_slider_window_g2_ParamLimits

0xcb41,	// (0x00023cb7) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00026b69) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00026b69) popup_vtel_slider_window_g

0xcb89,	// (0x00023cff) vtel_slider_pane_ParamLimits

0xcb89,	// (0x00023cff) vtel_slider_pane

0xcb98,	// (0x00023d0e) vtel_slider_pane_g1_ParamLimits

0xcb98,	// (0x00023d0e) vtel_slider_pane_g1

0xcba5,	// (0x00023d1b) vtel_slider_pane_g2_ParamLimits

0xcba5,	// (0x00023d1b) vtel_slider_pane_g2

0xcbb2,	// (0x00023d28) vtel_slider_pane_g3_ParamLimits

0xcbb2,	// (0x00023d28) vtel_slider_pane_g3

0xcb98,	// (0x00023d0e) vtel_slider_pane_g4_ParamLimits

0xcb98,	// (0x00023d0e) vtel_slider_pane_g4

0xcbbf,	// (0x00023d35) vtel_slider_pane_g5_ParamLimits

0xcbbf,	// (0x00023d35) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00026b72) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00026b72) vtel_slider_pane_g

0x019e,	// (0x00017314) main_gallery2_pane

0x7bf8,	// (0x0001ed6e) aid_size_row_itut2_dropdow_list_ParamLimits

0x7bf8,	// (0x0001ed6e) aid_size_row_itut2_dropdow_list

0x7c66,	// (0x0001eddc) grid_vitu2_function_top_pane_ParamLimits

0x7c66,	// (0x0001eddc) grid_vitu2_function_top_pane

0x7cb8,	// (0x0001ee2e) popup_vitu2_dropdown_list_window_ParamLimits

0x7cb8,	// (0x0001ee2e) popup_vitu2_dropdown_list_window

0x7cd8,	// (0x0001ee4e) popup_vitu2_match_list_window

0x7ee7,	// (0x0001f05d) cell_vitu2_function_top_pane_ParamLimits

0x7ee7,	// (0x0001f05d) cell_vitu2_function_top_pane

0x7f07,	// (0x0001f07d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f07,	// (0x0001f07d) cell_vitu2_function_top_pane_cp01

0x7f25,	// (0x0001f09b) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f25,	// (0x0001f09b) cell_vitu2_function_top_wide_pane

0x7b2b,	// (0x0001eca1) bg_button_pane_cp012

0x7f43,	// (0x0001f0b9) cell_vitu2_function_top_pane_g1

0x7f52,	// (0x0001f0c8) bg_button_pane_cp013_ParamLimits

0x7f52,	// (0x0001f0c8) bg_button_pane_cp013

0xcbcc,	// (0x00023d42) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcbcc,	// (0x00023d42) cell_vitu2_function_top_wide_pane_g1

0x7f6e,	// (0x0001f0e4) bg_popup_sub_pane_cp20

0x7f7c,	// (0x0001f0f2) list_vitu2_match_list_pane

0x3e00,	// (0x0001af76) bg_popup_sub_pane_cp20_g1

0x3e08,	// (0x0001af7e) bg_popup_sub_pane_cp20_g2

0x0f5f,	// (0x000180d5) bg_popup_sub_pane_cp20_g3

0x3e10,	// (0x0001af86) bg_popup_sub_pane_cp20_g4

0x0f3f,	// (0x000180b5) bg_popup_sub_pane_cp20_g5

0x408f,	// (0x0001b205) bg_popup_sub_pane_cp20_g6

0x3e20,	// (0x0001af96) bg_popup_sub_pane_cp20_g7

0x3e28,	// (0x0001af9e) bg_popup_sub_pane_cp20_g8

0x3e30,	// (0x0001afa6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00026b7d) bg_popup_sub_pane_cp20_g

0x7f94,	// (0x0001f10a) list_vitu2_match_list_item_pane_ParamLimits

0x7f94,	// (0x0001f10a) list_vitu2_match_list_item_pane

0x7fa6,	// (0x0001f11c) list_vitu2_match_list_item_pane_t1

0x6da0,	// (0x0001df16) bg_popup_sub_pane_cp21

0x7fb4,	// (0x0001f12a) grid_vitu2_dropdown_list_pane

0x7fbc,	// (0x0001f132) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7fbc,	// (0x0001f132) cell_vitu2_dropdown_list_char_pane

0x7fe1,	// (0x0001f157) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fe1,	// (0x0001f157) cell_vitu2_dropdown_list_ctrl_pane

0x40e1,	// (0x0001b257) cell_vitu2_dropdown_list_char_pane_g1

0x40d8,	// (0x0001b24e) cell_vitu2_dropdown_list_char_pane_g2

0x40cf,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00026b9a) cell_vitu2_dropdown_list_char_pane_g

0x800f,	// (0x0001f185) cell_vitu2_dropdown_list_char_pane_t1

0xcc10,	// (0x00023d86) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc10,	// (0x00023d86) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcc20,	// (0x00023d96) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcc20,	// (0x00023d96) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcc31,	// (0x00023da7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcc31,	// (0x00023da7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x801d,	// (0x0001f193) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x801d,	// (0x0001f193) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7a3f,	// (0x0001ebb5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7a3f,	// (0x0001ebb5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00026ba1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00026ba1) cell_vitu2_dropdown_list_ctrl_pane_g

0xcc41,	// (0x00023db7) aid_size_cell_gallery2_ParamLimits

0xcc41,	// (0x00023db7) aid_size_cell_gallery2

0xcc4f,	// (0x00023dc5) grid_gallery2_pane_ParamLimits

0xcc4f,	// (0x00023dc5) grid_gallery2_pane

0xcc5e,	// (0x00023dd4) scroll_pane_cp029_ParamLimits

0xcc5e,	// (0x00023dd4) scroll_pane_cp029

0xcc6a,	// (0x00023de0) cell_gallery2_pane_ParamLimits

0xcc6a,	// (0x00023de0) cell_gallery2_pane

0x40ea,	// (0x0001b260) cell_gallery2_pane_g2

0xcc94,	// (0x00023e0a) cell_gallery2_pane_g3

0x40f4,	// (0x0001b26a) cell_gallery2_pane_g4

0x40fc,	// (0x0001b272) cell_gallery2_pane_g5

0x16e5,	// (0x0001885b) grid_highlight_pane_cp10

0x7cd8,	// (0x0001ee4e) popup_vitu2_match_list_window_ParamLimits

0x7cec,	// (0x0001ee62) popup_vitu2_query_window_ParamLimits

0x7cec,	// (0x0001ee62) popup_vitu2_query_window

0x6da0,	// (0x0001df16) bg_vitu2_candi_button_pane

0x40e1,	// (0x0001b257) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x40d8,	// (0x0001b24e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x40cf,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcc9c,	// (0x00023e12) bg_button_pane_cp015

0xccae,	// (0x00023e24) bg_button_pane_cp016

0xccc1,	// (0x00023e37) bg_button_pane_cp017

0x2b90,	// (0x00019d06) bg_popup_sub_pane_cp22

0x4104,	// (0x0001b27a) popup_vitu2_query_window_g1

0xcd06,	// (0x00023e7c) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00026bac) popup_vitu2_query_window_g

0xcd23,	// (0x00023e99) popup_vitu2_query_window_t1_ParamLimits

0xcd23,	// (0x00023e99) popup_vitu2_query_window_t1

0xcd56,	// (0x00023ecc) popup_vitu2_query_window_t2_ParamLimits

0xcd56,	// (0x00023ecc) popup_vitu2_query_window_t2

0xcd68,	// (0x00023ede) popup_vitu2_query_window_t3_ParamLimits

0xcd68,	// (0x00023ede) popup_vitu2_query_window_t3

0xcd90,	// (0x00023f06) popup_vitu2_query_window_t4_ParamLimits

0xcd90,	// (0x00023f06) popup_vitu2_query_window_t4

0xcdb3,	// (0x00023f29) popup_vitu2_query_window_t5_ParamLimits

0xcdb3,	// (0x00023f29) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00026bb3) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00026bb3) popup_vitu2_query_window_t

0x3f06,	// (0x0001b07c) main_cset_text_pane

0xc84c,	// (0x000239c2) aid_area_touch_slider_ParamLimits

0xc868,	// (0x000239de) cset_slider_pane_ParamLimits

0xc892,	// (0x00023a08) main_cset_slider_pane_g1_ParamLimits

0xc8a7,	// (0x00023a1d) main_cset_slider_pane_g2_ParamLimits

0x3f27,	// (0x0001b09d) main_cset_slider_pane_g3_ParamLimits

0x3f27,	// (0x0001b09d) main_cset_slider_pane_g3

0xc8bc,	// (0x00023a32) main_cset_slider_pane_g4_ParamLimits

0xc8bc,	// (0x00023a32) main_cset_slider_pane_g4

0xc8cb,	// (0x00023a41) main_cset_slider_pane_g5_ParamLimits

0xc8cb,	// (0x00023a41) main_cset_slider_pane_g5

0xc8d7,	// (0x00023a4d) main_cset_slider_pane_g6_ParamLimits

0xc8d7,	// (0x00023a4d) main_cset_slider_pane_g6

0xf990,	// (0x00026b06) main_cset_slider_pane_g_ParamLimits

0x3f57,	// (0x0001b0cd) main_cset_slider_pane_t1_ParamLimits

0xc963,	// (0x00023ad9) main_cset_slider_pane_t2_ParamLimits

0xc97d,	// (0x00023af3) main_cset_slider_pane_t3_ParamLimits

0xc997,	// (0x00023b0d) main_cset_slider_pane_t4_ParamLimits

0xc9b1,	// (0x00023b27) main_cset_slider_pane_t5_ParamLimits

0xc9cb,	// (0x00023b41) main_cset_slider_pane_t6_ParamLimits

0xc9e0,	// (0x00023b56) main_cset_slider_pane_t7_ParamLimits

0xca0a,	// (0x00023b80) main_cset_slider_pane_t8_ParamLimits

0xca0a,	// (0x00023b80) main_cset_slider_pane_t8

0xca32,	// (0x00023ba8) main_cset_slider_pane_t9_ParamLimits

0xca32,	// (0x00023ba8) main_cset_slider_pane_t9

0xca5a,	// (0x00023bd0) main_cset_slider_pane_t10_ParamLimits

0xca5a,	// (0x00023bd0) main_cset_slider_pane_t10

0xca82,	// (0x00023bf8) main_cset_slider_pane_t11_ParamLimits

0xca82,	// (0x00023bf8) main_cset_slider_pane_t11

0xcaaa,	// (0x00023c20) main_cset_slider_pane_t12_ParamLimits

0xcaaa,	// (0x00023c20) main_cset_slider_pane_t12

0xcac7,	// (0x00023c3d) main_cset_slider_pane_t13_ParamLimits

0xcac7,	// (0x00023c3d) main_cset_slider_pane_t13

0xf9b5,	// (0x00026b2b) main_cset_slider_pane_t_ParamLimits

0x019e,	// (0x00017314) bg_popup_sub_pane_cp011

0x4110,	// (0x0001b286) main_cset_text_pane_g1

0x4118,	// (0x0001b28e) main_cset_text_pane_t1

0x4126,	// (0x0001b29c) main_cset_text_pane_t2

0x4134,	// (0x0001b2aa) main_cset_text_pane_t3

0x4142,	// (0x0001b2b8) main_cset_text_pane_t4

0x4150,	// (0x0001b2c6) main_cset_text_pane_t5

0x415e,	// (0x0001b2d4) main_cset_text_pane_t6

0x416c,	// (0x0001b2e2) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00026bc2) main_cset_text_pane_t

0x019e,	// (0x00017314) main_cam4_burst_pane

0x019e,	// (0x00017314) main_cam5_pane

0xc795,	// (0x0002390b) bg_button_pane_cp019

0xc79e,	// (0x00023914) bg_button_pane_cp020

0x3f33,	// (0x0001b0a9) main_cset_slider_pane_g7_ParamLimits

0x3f33,	// (0x0001b0a9) main_cset_slider_pane_g7

0x3f3f,	// (0x0001b0b5) main_cset_slider_pane_g8_ParamLimits

0x3f3f,	// (0x0001b0b5) main_cset_slider_pane_g8

0xc8eb,	// (0x00023a61) main_cset_slider_pane_g9_ParamLimits

0xc8eb,	// (0x00023a61) main_cset_slider_pane_g9

0xc8f7,	// (0x00023a6d) main_cset_slider_pane_g10_ParamLimits

0xc8f7,	// (0x00023a6d) main_cset_slider_pane_g10

0xc903,	// (0x00023a79) main_cset_slider_pane_g11_ParamLimits

0xc903,	// (0x00023a79) main_cset_slider_pane_g11

0xc90f,	// (0x00023a85) main_cset_slider_pane_g12_ParamLimits

0xc90f,	// (0x00023a85) main_cset_slider_pane_g12

0xc91b,	// (0x00023a91) main_cset_slider_pane_g13_ParamLimits

0xc91b,	// (0x00023a91) main_cset_slider_pane_g13

0xc927,	// (0x00023a9d) main_cset_slider_pane_g14_ParamLimits

0xc927,	// (0x00023a9d) main_cset_slider_pane_g14

0xc933,	// (0x00023aa9) main_cset_slider_pane_g15_ParamLimits

0xc933,	// (0x00023aa9) main_cset_slider_pane_g15

0x3f85,	// (0x0001b0fb) main_cset_slider_pane_t14_ParamLimits

0x3f85,	// (0x0001b0fb) main_cset_slider_pane_t14

0x3fbe,	// (0x0001b134) main_cset_slider_pane_t15_ParamLimits

0x3fbe,	// (0x0001b134) main_cset_slider_pane_t15

0xce2c,	// (0x00023fa2) aid_cam4_burst_size_cell_ParamLimits

0xce2c,	// (0x00023fa2) aid_cam4_burst_size_cell

0xce48,	// (0x00023fbe) grid_cam4_burst_pane_ParamLimits

0xce48,	// (0x00023fbe) grid_cam4_burst_pane

0xce7a,	// (0x00023ff0) linegrid_cam4_burst_pane_ParamLimits

0xce7a,	// (0x00023ff0) linegrid_cam4_burst_pane

0xce98,	// (0x0002400e) scroll_pane_cp30_ParamLimits

0xce98,	// (0x0002400e) scroll_pane_cp30

0xcea4,	// (0x0002401a) cell_cam4_burst_pane_ParamLimits

0xcea4,	// (0x0002401a) cell_cam4_burst_pane

0x4186,	// (0x0001b2fc) linegrid_cam4_burst_pane_g1_ParamLimits

0x4186,	// (0x0001b2fc) linegrid_cam4_burst_pane_g1

0xcee4,	// (0x0002405a) linegrid_cam4_burst_pane_g2_ParamLimits

0xcee4,	// (0x0002405a) linegrid_cam4_burst_pane_g2

0x4193,	// (0x0001b309) linegrid_cam4_burst_pane_g3_ParamLimits

0x4193,	// (0x0001b309) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00026bd1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00026bd1) linegrid_cam4_burst_pane_g

0xcef5,	// (0x0002406b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcef5,	// (0x0002406b) linegrid_cam4_burst_pane_g3_copy1

0x41a0,	// (0x0001b316) linegrid_cam4_burst_pane_g4_ParamLimits

0x41a0,	// (0x0001b316) linegrid_cam4_burst_pane_g4

0xcf0f,	// (0x00024085) linegrid_cam4_burst_pane_g5_ParamLimits

0xcf0f,	// (0x00024085) linegrid_cam4_burst_pane_g5

0xcf20,	// (0x00024096) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf20,	// (0x00024096) linegrid_cam4_burst_pane_g6

0x41ad,	// (0x0001b323) linegrid_cam4_burst_pane_g7_ParamLimits

0x41ad,	// (0x0001b323) linegrid_cam4_burst_pane_g7

0xcf37,	// (0x000240ad) cell_cam4_burst_pane_g1

0x41c6,	// (0x0001b33c) main_cam5_pane_t1_ParamLimits

0x41c6,	// (0x0001b33c) main_cam5_pane_t1

0x41d8,	// (0x0001b34e) main_cam5_pane_t2_ParamLimits

0x41d8,	// (0x0001b34e) main_cam5_pane_t2

0x41ea,	// (0x0001b360) main_cam5_pane_t3_ParamLimits

0x41ea,	// (0x0001b360) main_cam5_pane_t3

0x41fc,	// (0x0001b372) main_cam5_pane_t4_ParamLimits

0x41fc,	// (0x0001b372) main_cam5_pane_t4

0x4214,	// (0x0001b38a) main_cam5_pane_t5_ParamLimits

0x4214,	// (0x0001b38a) main_cam5_pane_t5

0x4228,	// (0x0001b39e) main_cam5_pane_t6_ParamLimits

0x4228,	// (0x0001b39e) main_cam5_pane_t6

0x423c,	// (0x0001b3b2) main_cam5_pane_t7_ParamLimits

0x423c,	// (0x0001b3b2) main_cam5_pane_t7

0x424e,	// (0x0001b3c4) main_cam5_pane_t8_ParamLimits

0x424e,	// (0x0001b3c4) main_cam5_pane_t8

0x426c,	// (0x0001b3e2) main_cam5_pane_t9_ParamLimits

0x426c,	// (0x0001b3e2) main_cam5_pane_t9

0x427e,	// (0x0001b3f4) main_cam5_pane_t10_ParamLimits

0x427e,	// (0x0001b3f4) main_cam5_pane_t10

0x4290,	// (0x0001b406) main_cam5_pane_t11_ParamLimits

0x4290,	// (0x0001b406) main_cam5_pane_t11

0x42a4,	// (0x0001b41a) main_cam5_pane_t12_ParamLimits

0x42a4,	// (0x0001b41a) main_cam5_pane_t12

0x42bb,	// (0x0001b431) main_cam5_pane_t13_ParamLimits

0x42bb,	// (0x0001b431) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00026bdd) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00026bdd) main_cam5_pane_t

0x8393,	// (0x0001f509) popup_scut_keymap_window_ParamLimits

0x8393,	// (0x0001f509) popup_scut_keymap_window

0xcf4a,	// (0x000240c0) aid_size_cell_brow_shortcut

0x16e5,	// (0x0001885b) bg_popup_window_pane_cp010

0xcf56,	// (0x000240cc) grid_scut_pane

0xcf62,	// (0x000240d8) cell_scut_pane_ParamLimits

0xcf62,	// (0x000240d8) cell_scut_pane

0xcf7d,	// (0x000240f3) cell_scut_pane_g1

0x42de,	// (0x0001b454) cell_scut_pane_t1

0x42ed,	// (0x0001b463) cell_scut_pane_t2

0xcf86,	// (0x000240fc) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00026bf8) cell_scut_pane_t

0xb8af,	// (0x00022a25) main_mup3_pane_g8_ParamLimits

0xb8af,	// (0x00022a25) main_mup3_pane_g8

0x7c06,	// (0x0001ed7c) area_vitu2_query_pane_ParamLimits

0x7c06,	// (0x0001ed7c) area_vitu2_query_pane

0xccd4,	// (0x00023e4a) input_focus_pane_cp08

0x42fc,	// (0x0001b472) area_vitu2_query_pane_g1

0xcf94,	// (0x0002410a) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00026bff) area_vitu2_query_pane_g

0xcfa5,	// (0x0002411b) area_vitu2_query_pane_t1_ParamLimits

0xcfa5,	// (0x0002411b) area_vitu2_query_pane_t1

0xcfb9,	// (0x0002412f) area_vitu2_query_pane_t2_ParamLimits

0xcfb9,	// (0x0002412f) area_vitu2_query_pane_t2

0xcfcd,	// (0x00024143) area_vitu2_query_pane_t3_ParamLimits

0xcfcd,	// (0x00024143) area_vitu2_query_pane_t3

0x4308,	// (0x0001b47e) area_vitu2_query_pane_t4_ParamLimits

0x4308,	// (0x0001b47e) area_vitu2_query_pane_t4

0x4330,	// (0x0001b4a6) area_vitu2_query_pane_t5_ParamLimits

0x4330,	// (0x0001b4a6) area_vitu2_query_pane_t5

0x4358,	// (0x0001b4ce) area_vitu2_query_pane_t6_ParamLimits

0x4358,	// (0x0001b4ce) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00026c04) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00026c04) area_vitu2_query_pane_t

0xcff5,	// (0x0002416b) bg_button_pane_cp018

0xd003,	// (0x00024179) bg_button_pane_cp021

0xd00f,	// (0x00024185) bg_button_pane_cp022

0xd020,	// (0x00024196) input_focus_pane_cp09

0xa053,	// (0x000211c9) aid_size_touch_mv_arrow_left

0xa07e,	// (0x000211f4) aid_size_touch_mv_arrow_right

0xc94b,	// (0x00023ac1) main_cset_slider_pane_g16_ParamLimits

0xc94b,	// (0x00023ac1) main_cset_slider_pane_g16

0xc957,	// (0x00023acd) main_cset_slider_pane_g17_ParamLimits

0xc957,	// (0x00023acd) main_cset_slider_pane_g17

0xcf37,	// (0x000240ad) cell_cam4_burst_pane_g1_ParamLimits

0x019e,	// (0x00017314) compa_mode_pane

0xcb4d,	// (0x00023cc3) popup_vtel_slider_window_g3_ParamLimits

0xcb4d,	// (0x00023cc3) popup_vtel_slider_window_g3

0xcb61,	// (0x00023cd7) popup_vtel_slider_window_g4_ParamLimits

0xcb61,	// (0x00023cd7) popup_vtel_slider_window_g4

0xcb75,	// (0x00023ceb) popup_vtel_slider_window_t1_ParamLimits

0xcb75,	// (0x00023ceb) popup_vtel_slider_window_t1

0x019e,	// (0x00017314) main_cl_pane

0x2bbc,	// (0x00019d32) popup_imed_adjust2_window_ParamLimits

0x2b90,	// (0x00019d06) bg_tb_trans_pane_cp05_ParamLimits

0x35a0,	// (0x0001a716) popup_imed_adjust2_window_g1_ParamLimits

0x35af,	// (0x0001a725) popup_imed_adjust2_window_g2_ParamLimits

0x35af,	// (0x0001a725) popup_imed_adjust2_window_g2

0x35bb,	// (0x0001a731) popup_imed_adjust2_window_g3_ParamLimits

0x35bb,	// (0x0001a731) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0002696f) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0002696f) popup_imed_adjust2_window_g

0x35c7,	// (0x0001a73d) popup_imed_adjust2_window_t1_ParamLimits

0x35df,	// (0x0001a755) slider_imed_adjust_pane_ParamLimits

0x35f3,	// (0x0001a769) slider_imed_adjust_pane_g1_ParamLimits

0x3603,	// (0x0001a779) slider_imed_adjust_pane_g2_ParamLimits

0x3613,	// (0x0001a789) slider_imed_adjust_pane_g3_ParamLimits

0x3624,	// (0x0001a79a) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00026976) slider_imed_adjust_pane_g_ParamLimits

0x7978,	// (0x0001eaee) aid_touch_area_cam4_ParamLimits

0x7978,	// (0x0001eaee) aid_touch_area_cam4

0x7988,	// (0x0001eafe) battery_pane_cp01

0x7a0f,	// (0x0001eb85) main_camera4_pane_g6_ParamLimits

0x7a0f,	// (0x0001eb85) main_camera4_pane_g6

0x7a2d,	// (0x0001eba3) main_camera4_pane_t2_ParamLimits

0x7a2d,	// (0x0001eba3) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00026a79) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00026a79) main_camera4_pane_t

0x7a99,	// (0x0001ec0f) aid_touch_area_vid4_ParamLimits

0x7a99,	// (0x0001ec0f) aid_touch_area_vid4

0x7ad9,	// (0x0001ec4f) main_video4_pane_g5_ParamLimits

0x7ad9,	// (0x0001ec4f) main_video4_pane_g5

0x7afd,	// (0x0001ec73) vid4_progress_pane_ParamLimits

0x7afd,	// (0x0001ec73) vid4_progress_pane

0x3f4b,	// (0x0001b0c1) main_cset_slider_pane_g18_ParamLimits

0x3f4b,	// (0x0001b0c1) main_cset_slider_pane_g18

0x41ba,	// (0x0001b330) cell_cam4_burst_pane_g2_ParamLimits

0x41ba,	// (0x0001b330) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00026bd8) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00026bd8) cell_cam4_burst_pane_g

0xd031,	// (0x000241a7) bg_cl_pane_ParamLimits

0xd031,	// (0x000241a7) bg_cl_pane

0xd03d,	// (0x000241b3) cl_header_pane_ParamLimits

0xd03d,	// (0x000241b3) cl_header_pane

0xd049,	// (0x000241bf) cl_listscroll_pane_ParamLimits

0xd049,	// (0x000241bf) cl_listscroll_pane

0x43a4,	// (0x0001b51a) bg_cl_pane_g1

0x43ac,	// (0x0001b522) bg_cl_pane_g2

0x43b4,	// (0x0001b52a) bg_cl_pane_g3

0x43bc,	// (0x0001b532) bg_cl_pane_g4

0x43c4,	// (0x0001b53a) bg_cl_pane_g5

0x43cc,	// (0x0001b542) bg_cl_pane_g6

0x43d4,	// (0x0001b54a) bg_cl_pane_g7

0x43dc,	// (0x0001b552) bg_cl_pane_g8

0x43e4,	// (0x0001b55a) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00026c13) bg_cl_pane_g

0xd055,	// (0x000241cb) aid_height_cl_leading_ParamLimits

0xd055,	// (0x000241cb) aid_height_cl_leading

0xd061,	// (0x000241d7) aid_height_cl_text_ParamLimits

0xd061,	// (0x000241d7) aid_height_cl_text

0x3bc4,	// (0x0001ad3a) bg_cl_header_pane_ParamLimits

0x3bc4,	// (0x0001ad3a) bg_cl_header_pane

0xd079,	// (0x000241ef) cl_header_pane_g1_ParamLimits

0xd079,	// (0x000241ef) cl_header_pane_g1

0xd086,	// (0x000241fc) cl_header_pane_t1_ParamLimits

0xd086,	// (0x000241fc) cl_header_pane_t1

0x43ec,	// (0x0001b562) cl_list_pane

0x3f1e,	// (0x0001b094) hc_scroll_pane_cp01

0x0f3f,	// (0x000180b5) bg_cl_header_pane_g1

0x3e00,	// (0x0001af76) bg_cl_header_pane_g2

0x0f5f,	// (0x000180d5) bg_cl_header_pane_g3

0x3e10,	// (0x0001af86) bg_cl_header_pane_g4

0x3e08,	// (0x0001af7e) bg_cl_header_pane_g5

0x408f,	// (0x0001b205) bg_cl_header_pane_g6

0x3e28,	// (0x0001af9e) bg_cl_header_pane_g7

0x3e30,	// (0x0001afa6) bg_cl_header_pane_g8

0x3e20,	// (0x0001af96) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00026c26) bg_cl_header_pane_g

0xd098,	// (0x0002420e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd098,	// (0x0002420e) hc_cl_list_double_graphic_heading_pane

0xd0a8,	// (0x0002421e) hc_cl_list_single_graphic_pane_ParamLimits

0xd0a8,	// (0x0002421e) hc_cl_list_single_graphic_pane

0xd0ba,	// (0x00024230) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd0ba,	// (0x00024230) hc_cl_list_single_graphic_pane_g1

0xd0c6,	// (0x0002423c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd0c6,	// (0x0002423c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00026c39) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00026c39) hc_cl_list_single_graphic_pane_g

0xd0da,	// (0x00024250) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd0da,	// (0x00024250) hc_cl_list_single_graphic_pane_t1

0xd0ba,	// (0x00024230) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd0ba,	// (0x00024230) hc_cl_list_double_graphic_heading_pane_g1

0xd0ef,	// (0x00024265) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd0ef,	// (0x00024265) hc_cl_list_double_graphic_heading_pane_g2

0xd103,	// (0x00024279) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd103,	// (0x00024279) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00026c3e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00026c3e) hc_cl_list_double_graphic_heading_pane_g

0xd117,	// (0x0002428d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd117,	// (0x0002428d) hc_cl_list_double_graphic_heading_pane_t1

0xd12c,	// (0x000242a2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd12c,	// (0x000242a2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00026c45) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00026c45) hc_cl_list_double_graphic_heading_pane_t

0x8048,	// (0x0001f1be) vid4_progress_pane_g1

0x8059,	// (0x0001f1cf) vid4_progress_pane_g2

0x713e,	// (0x0001e2b4) vid4_progress_pane_g3

0x7a65,	// (0x0001ebdb) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00026c4a) vid4_progress_pane_g

0x806b,	// (0x0001f1e1) vid4_progress_pane_t1

0x8080,	// (0x0001f1f6) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00026c55) vid4_progress_pane_t

0x80af,	// (0x0001f225) wait_bar_pane_cp07

0x2eb2,	// (0x0001a028) blid_firmament_pane_ParamLimits

0x2ef5,	// (0x0001a06b) popup_blid_sat_info2_window_g1

0x2f19,	// (0x0001a08f) popup_blid_sat_info2_window_t3

0x2f27,	// (0x0001a09d) popup_blid_sat_info2_window_t4

0x2f35,	// (0x0001a0ab) popup_blid_sat_info2_window_t5

0x2f43,	// (0x0001a0b9) popup_blid_sat_info2_window_t6

0x2f53,	// (0x0001a0c9) popup_blid_sat_info2_window_t7

0x2f61,	// (0x0001a0d7) popup_blid_sat_info2_window_t8

0x2f6f,	// (0x0001a0e5) popup_blid_sat_info2_window_t9

0x2f7d,	// (0x0001a0f3) popup_blid_sat_info2_window_t10

0x3045,	// (0x0001a1bb) aid_firma_cardinal_ParamLimits

0x3059,	// (0x0001a1cf) blid_firmament_pane_t1_ParamLimits

0x3070,	// (0x0001a1e6) blid_firmament_pane_t2_ParamLimits

0x3087,	// (0x0001a1fd) blid_firmament_pane_t3_ParamLimits

0x309e,	// (0x0001a214) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00026868) blid_firmament_pane_t_ParamLimits

0x30b5,	// (0x0001a22b) blid_sat_info_pane_ParamLimits

0x020f,	// (0x00017385) main_cam_set_pane_ParamLimits

0xbfd2,	// (0x00023148) aid_size_cell_colour_35_ParamLimits

0xbfec,	// (0x00023162) aid_size_cell_colour_112_ParamLimits

0xc003,	// (0x00023179) aid_size_cell_effect_ParamLimits

0x020f,	// (0x00017385) bg_tb_trans_pane_cp02_ParamLimits

0x1206,	// (0x0001837c) heading_imed_pane_ParamLimits

0xc01d,	// (0x00023193) listscroll_imed_pane_ParamLimits

0x21be,	// (0x00019334) popup_call2_audio_first_window_g5_ParamLimits

0x21be,	// (0x00019334) popup_call2_audio_first_window_g5

0x7801,	// (0x0001e977) aid_size_touch_image3_arrow_left_ParamLimits

0x7801,	// (0x0001e977) aid_size_touch_image3_arrow_left

0x7817,	// (0x0001e98d) aid_size_touch_image3_arrow_right_ParamLimits

0x7817,	// (0x0001e98d) aid_size_touch_image3_arrow_right

0x8098,	// (0x0001f20e) vid4_progress_pane_t3

0xc2c8,	// (0x0002343e) main_hwr_training_symbol_option_pane_ParamLimits

0xc2c8,	// (0x0002343e) main_hwr_training_symbol_option_pane

0x388f,	// (0x0001aa05) popup_hwr_training_preview_window_ParamLimits

0x388f,	// (0x0001aa05) popup_hwr_training_preview_window

0x74f7,	// (0x0001e66d) hwr_training_navi_pane_g5_ParamLimits

0x74f7,	// (0x0001e66d) hwr_training_navi_pane_g5

0x3dee,	// (0x0001af64) popup_char_count_window

0x7f6e,	// (0x0001f0e4) bg_popup_sub_pane_cp20_ParamLimits

0x7f7c,	// (0x0001f0f2) list_vitu2_match_list_pane_ParamLimits

0x7f88,	// (0x0001f0fe) vitu2_page_scroll_pane_ParamLimits

0x7f88,	// (0x0001f0fe) vitu2_page_scroll_pane

0x446c,	// (0x0001b5e2) list_single_hwr_training_symbol_option_pane_ParamLimits

0x446c,	// (0x0001b5e2) list_single_hwr_training_symbol_option_pane

0x447f,	// (0x0001b5f5) list_single_hwr_training_symbol_option_pane_g1

0x4487,	// (0x0001b5fd) list_single_hwr_training_symbol_option_pane_t1

0x4495,	// (0x0001b60b) bg_button_pane_cp023

0x449e,	// (0x0001b614) bg_button_pane_cp024

0xd141,	// (0x000242b7) vitu2_page_scroll_pane_g1

0xd149,	// (0x000242bf) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00026c5c) vitu2_page_scroll_pane_g

0xd153,	// (0x000242c9) vitu2_page_scroll_pane_t1

0x2dce,	// (0x00019f44) popup_char_count_window_g1

0x44d1,	// (0x0001b647) popup_char_count_window_g2

0x44da,	// (0x0001b650) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00026c61) popup_char_count_window_g

0x44e3,	// (0x0001b659) popup_char_count_window_t1

0x019e,	// (0x00017314) main_vded2_pane

0x358c,	// (0x0001a702) aid_size_cell_imed_line

0x3596,	// (0x0001a70c) grid_imed_line_width_pane

0x7b79,	// (0x0001ecef) vid4_indicators_pane_g4

0x44f1,	// (0x0001b667) cell_imed_line_width_pane_ParamLimits

0x44f1,	// (0x0001b667) cell_imed_line_width_pane

0x4507,	// (0x0001b67d) cell_imed_line_width_pane_g1

0x4510,	// (0x0001b686) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00026c68) cell_imed_line_width_pane_g

0xd162,	// (0x000242d8) main_vded2_pane_g1_ParamLimits

0xd162,	// (0x000242d8) main_vded2_pane_g1

0xd171,	// (0x000242e7) main_vded2_pane_g2_ParamLimits

0xd171,	// (0x000242e7) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00026c6d) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00026c6d) main_vded2_pane_g

0xd17f,	// (0x000242f5) vded2_slider_pane_ParamLimits

0xd17f,	// (0x000242f5) vded2_slider_pane

0xd18c,	// (0x00024302) aid_size_touch_vded2_end

0xd196,	// (0x0002430c) aid_size_touch_vded2_playhead

0x4518,	// (0x0001b68e) aid_size_touch_vded2_start

0x4520,	// (0x0001b696) vded2_slider_bg_pane

0x4529,	// (0x0001b69f) vded2_slider_pane_g1

0x4532,	// (0x0001b6a8) vded2_slider_pane_g2

0xd19e,	// (0x00024314) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00026c72) vded2_slider_pane_g

0x3bd2,	// (0x0001ad48) vded2_slider_bg_pane_g1

0x3bdb,	// (0x0001ad51) vded2_slider_bg_pane_g2

0x3be4,	// (0x0001ad5a) vded2_slider_bg_pane_g3

0x0002,

0xf7c2,	// (0x00026938) vded2_slider_bg_pane_g

0xa71a,	// (0x00021890) aid_postcard_touch_down_pane_ParamLimits

0xa71a,	// (0x00021890) aid_postcard_touch_down_pane

0xa72a,	// (0x000218a0) aid_postcard_touch_up_pane_ParamLimits

0xa72a,	// (0x000218a0) aid_postcard_touch_up_pane

0x019e,	// (0x00017314) main_blid2_pane

0x2b9e,	// (0x00019d14) popup_blid2_search_window

0x019e,	// (0x00017314) blid2_gps_pane

0x019e,	// (0x00017314) blid2_navig_pane

0x019e,	// (0x00017314) blid2_search_pane

0x019e,	// (0x00017314) blid2_tripm_pane

0xd1a7,	// (0x0002431d) blid2_search_pane_g1_ParamLimits

0xd1a7,	// (0x0002431d) blid2_search_pane_g1

0xd1b3,	// (0x00024329) blid2_search_pane_t1_ParamLimits

0xd1b3,	// (0x00024329) blid2_search_pane_t1

0xd1c5,	// (0x0002433b) aid_size_cell_blid2_gps_ParamLimits

0xd1c5,	// (0x0002433b) aid_size_cell_blid2_gps

0xd1d5,	// (0x0002434b) blid2_gps_pane_g1_ParamLimits

0xd1d5,	// (0x0002434b) blid2_gps_pane_g1

0xd1e1,	// (0x00024357) grid_blid2_satellite_pane_ParamLimits

0xd1e1,	// (0x00024357) grid_blid2_satellite_pane

0xd1ef,	// (0x00024365) blid2_navig_pane_g1_ParamLimits

0xd1ef,	// (0x00024365) blid2_navig_pane_g1

0xd1fb,	// (0x00024371) blid2_navig_pane_t1_ParamLimits

0xd1fb,	// (0x00024371) blid2_navig_pane_t1

0xd20d,	// (0x00024383) blid2_navig_pane_t2_ParamLimits

0xd20d,	// (0x00024383) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00026c79) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00026c79) blid2_navig_pane_t

0xd21f,	// (0x00024395) blid2_navig_ring_pane_ParamLimits

0xd21f,	// (0x00024395) blid2_navig_ring_pane

0xd22f,	// (0x000243a5) blid2_speed_pane_ParamLimits

0xd22f,	// (0x000243a5) blid2_speed_pane

0xd23b,	// (0x000243b1) blid2_tripm_pane_g1_ParamLimits

0xd23b,	// (0x000243b1) blid2_tripm_pane_g1

0xd24b,	// (0x000243c1) blid2_tripm_pane_g2_ParamLimits

0xd24b,	// (0x000243c1) blid2_tripm_pane_g2

0xd257,	// (0x000243cd) blid2_tripm_pane_g3_ParamLimits

0xd257,	// (0x000243cd) blid2_tripm_pane_g3

0xd263,	// (0x000243d9) blid2_tripm_pane_g4_ParamLimits

0xd263,	// (0x000243d9) blid2_tripm_pane_g4

0xd26f,	// (0x000243e5) blid2_tripm_pane_g5_ParamLimits

0xd26f,	// (0x000243e5) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00026c7e) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00026c7e) blid2_tripm_pane_g

0xd28b,	// (0x00024401) blid2_tripm_pane_t1_ParamLimits

0xd28b,	// (0x00024401) blid2_tripm_pane_t1

0xd29d,	// (0x00024413) blid2_tripm_pane_t2_ParamLimits

0xd29d,	// (0x00024413) blid2_tripm_pane_t2

0xd2af,	// (0x00024425) blid2_tripm_pane_t3_ParamLimits

0xd2af,	// (0x00024425) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00026c8b) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00026c8b) blid2_tripm_pane_t

0xd2e1,	// (0x00024457) cell_blid2_satellite_pane_ParamLimits

0xd2e1,	// (0x00024457) cell_blid2_satellite_pane

0xd2ff,	// (0x00024475) cell_blid2_satellite_pane_g1

0x453a,	// (0x0001b6b0) cell_blid2_satellite_pane_t1

0x30c5,	// (0x0001a23b) blid2_speed_pane_g1

0x4548,	// (0x0001b6be) blid2_speed_pane_t1

0x4556,	// (0x0001b6cc) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00026c94) blid2_speed_pane_t

0x30c5,	// (0x0001a23b) blid2_navig_ring_pane_g1

0xd308,	// (0x0002447e) blid2_navig_ring_pane_g2

0xd310,	// (0x00024486) blid2_navig_ring_pane_g3

0xd318,	// (0x0002448e) blid2_navig_ring_pane_g4

0xd320,	// (0x00024496) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00026c99) blid2_navig_ring_pane_g

0x019e,	// (0x00017314) bg_popup_window_pane_cp011

0x4564,	// (0x0001b6da) popup_blid2_search_window_g1

0x456c,	// (0x0001b6e2) popup_blid2_search_window_t1

0x457a,	// (0x0001b6f0) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00026ca4) popup_blid2_search_window_t

0x0e4e,	// (0x00017fc4) main_browser_pane_g1

0x09b5,	// (0x00017b2b) main_browser_pane_ParamLimits

0x7b2b,	// (0x0001eca1) bg_button_pane_cp011_ParamLimits

0x7e90,	// (0x0001f006) cell_vitu2_function_pane_g1_ParamLimits

0x2b90,	// (0x00019d06) bg_popup_sub_pane_cp22_ParamLimits

0xccd4,	// (0x00023e4a) input_focus_pane_cp08_ParamLimits

0xcceb,	// (0x00023e61) popup_vitu2_query_button_pane_ParamLimits

0xcceb,	// (0x00023e61) popup_vitu2_query_button_pane

0xccfc,	// (0x00023e72) popup_vitu2_query_input_button_pane

0x4104,	// (0x0001b27a) popup_vitu2_query_window_g1_ParamLimits

0xcd06,	// (0x00023e7c) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00026bac) popup_vitu2_query_window_g_ParamLimits

0x019e,	// (0x00017314) bg_button_pane_cp026

0xd328,	// (0x0002449e) popup_vitu2_query_input_button_pane_g1

0x019e,	// (0x00017314) bg_button_pane_cp025

0x4588,	// (0x0001b6fe) popup_vitu2_query_button_pane_t1

0xb594,	// (0x0002270a) main_mp3_pane_t6

0xb5a4,	// (0x0002271a) popup_slider_window_cp01

0x7a4d,	// (0x0001ebc3) cam4_battery_pane

0x7b39,	// (0x0001ecaf) cam4_battery_pane_cp02

0x8036,	// (0x0001f1ac) cam4_battery_pane_cp01

0x8040,	// (0x0001f1b6) cam4_battery_pane_cp03

0x4596,	// (0x0001b70c) cam4_battery_pane_g1

0x30c5,	// (0x0001a23b) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00026ca9) cam4_battery_pane_g

0x2f8b,	// (0x0001a101) popup_blid_sat_info2_window_t11

0xa053,	// (0x000211c9) aid_size_touch_mv_arrow_left_ParamLimits

0xa07e,	// (0x000211f4) aid_size_touch_mv_arrow_right_ParamLimits

0x1645,	// (0x000187bb) navi_pane_g1_ParamLimits

0xa0bd,	// (0x00021233) navi_pane_g2_ParamLimits

0xa0eb,	// (0x00021261) navi_pane_g3_ParamLimits

0xf404,	// (0x0002657a) navi_pane_g_ParamLimits

0xa145,	// (0x000212bb) navi_pane_mv_t1_ParamLimits

0xc029,	// (0x0002319f) grid_imed_effect_pane_ParamLimits

0x8e5f,	// (0x0001ffd5) aid_placing_vt_slider_lsc

0x0d99,	// (0x00017f0f) aid_placing_vt_slider_prt

0x020f,	// (0x00017385) bg_tb_trans_pane_cp01_ParamLimits

0x3215,	// (0x0001a38b) popup_image_details_window_g1_ParamLimits

0x3228,	// (0x0001a39e) popup_image_details_window_g2_ParamLimits

0x323d,	// (0x0001a3b3) popup_image_details_window_g3_ParamLimits

0x323d,	// (0x0001a3b3) popup_image_details_window_g3

0xf737,	// (0x000268ad) popup_image_details_window_g_ParamLimits

0x3251,	// (0x0001a3c7) popup_image_details_window_t1_ParamLimits

0x3263,	// (0x0001a3d9) popup_image_details_window_t2_ParamLimits

0x327c,	// (0x0001a3f2) popup_image_details_window_t3_ParamLimits

0x3290,	// (0x0001a406) popup_image_details_window_t4_ParamLimits

0x32ab,	// (0x0001a421) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x000268b4) popup_image_details_window_t_ParamLimits

0xd06d,	// (0x000241e3) cl_header_name_pane_ParamLimits

0xd06d,	// (0x000241e3) cl_header_name_pane

0xd330,	// (0x000244a6) cl_header_name_pane_t1_ParamLimits

0xd330,	// (0x000244a6) cl_header_name_pane_t1

0xd347,	// (0x000244bd) cl_header_name_pane_t2_ParamLimits

0xd347,	// (0x000244bd) cl_header_name_pane_t2

0xd371,	// (0x000244e7) cl_header_name_pane_t3_ParamLimits

0xd371,	// (0x000244e7) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00026cae) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00026cae) cl_header_name_pane_t

0xa116,	// (0x0002128c) navi_pane_mv_g2_ParamLimits

0x3dab,	// (0x0001af21) field_vitu2_entry_pane_g1_ParamLimits

0x3db7,	// (0x0001af2d) field_vitu2_entry_pane_g2_ParamLimits

0x3dc3,	// (0x0001af39) field_vitu2_entry_pane_g3_ParamLimits

0x3dc3,	// (0x0001af39) field_vitu2_entry_pane_g3

0xf935,	// (0x00026aab) field_vitu2_entry_pane_g_ParamLimits

0x7d65,	// (0x0001eedb) cell_vitu2_itu_pane_g1_ParamLimits

0x7d75,	// (0x0001eeeb) cell_vitu2_itu_pane_g2_ParamLimits

0x7d75,	// (0x0001eeeb) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00026ab7) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00026ab7) cell_vitu2_itu_pane_g

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp05_ParamLimits

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp05

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp03

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp04

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp10_ParamLimits

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp10

0xd00f,	// (0x00024185) bg_vkb2_func_pane_cp08

0xcff5,	// (0x0002416b) bg_vkb2_func_pane_cp06

0xd003,	// (0x00024179) bg_vkb2_func_pane_cp07

0x44a7,	// (0x0001b61d) bg_vkb2_func_pane_cp11_ParamLimits

0x44a7,	// (0x0001b61d) bg_vkb2_func_pane_cp11

0x44bc,	// (0x0001b632) bg_vkb2_func_pane_cp12_ParamLimits

0x44bc,	// (0x0001b632) bg_vkb2_func_pane_cp12

0x019e,	// (0x00017314) bg_vkb2_func_pane_cp09

0x3e00,	// (0x0001af76) bg_vkb2_func_pane_g1

0x0f5f,	// (0x000180d5) bg_vkb2_func_pane_g2

0x3e08,	// (0x0001af7e) bg_vkb2_func_pane_g3

0x3e10,	// (0x0001af86) bg_vkb2_func_pane_g4

0x408f,	// (0x0001b205) bg_vkb2_func_pane_g5

0x3e28,	// (0x0001af9e) bg_vkb2_func_pane_g6

0x3e30,	// (0x0001afa6) bg_vkb2_func_pane_g7

0x3e20,	// (0x0001af96) bg_vkb2_func_pane_g8

0x0f3f,	// (0x000180b5) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00026cb5) bg_vkb2_func_pane_g

0xd27d,	// (0x000243f3) blid2_tripm_pane_g6_ParamLimits

0xd27d,	// (0x000243f3) blid2_tripm_pane_g6

0x3b7e,	// (0x0001acf4) mp4_progress_pane_g1

0xd2d5,	// (0x0002444b) blid2_tripm_values_pane_ParamLimits

0xd2d5,	// (0x0002444b) blid2_tripm_values_pane

0xd396,	// (0x0002450c) blid2_tripm_values_pane_t1

0xd3a4,	// (0x0002451a) blid2_tripm_values_pane_t2

0xd3b2,	// (0x00024528) blid2_tripm_values_pane_t3

0xd3c0,	// (0x00024536) blid2_tripm_values_pane_t4

0xd3ce,	// (0x00024544) blid2_tripm_values_pane_t5

0xd3dc,	// (0x00024552) blid2_tripm_values_pane_t6

0xd3ea,	// (0x00024560) blid2_tripm_values_pane_t7

0xd3f8,	// (0x0002456e) blid2_tripm_values_pane_t8

0xd406,	// (0x0002457c) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00026cc8) blid2_tripm_values_pane_t

0x8e9d,	// (0x00020013) call_video_pane_t1_ParamLimits

0x8eba,	// (0x00020030) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00026403) call_video_pane_t_ParamLimits

0xa683,	// (0x000217f9) msg_header_pane_g1_ParamLimits

0x188a,	// (0x00018a00) msg_header_pane_g2_ParamLimits

0x188a,	// (0x00018a00) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0002661d) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0002661d) msg_header_pane_g

0x09b5,	// (0x00017b2b) main_clock2_pane_ParamLimits

0xbe24,	// (0x00022f9a) grid_clock2_toolbar_pane_ParamLimits

0xbe24,	// (0x00022f9a) grid_clock2_toolbar_pane

0xbe24,	// (0x00022f9a) listscroll_clock2_pane_ParamLimits

0xbe24,	// (0x00022f9a) listscroll_clock2_pane

0xbed8,	// (0x0002304e) main_clock2_pane_t3_ParamLimits

0xbed8,	// (0x0002304e) main_clock2_pane_t3

0xbeea,	// (0x00023060) main_clock2_pane_t4_ParamLimits

0xbeea,	// (0x00023060) main_clock2_pane_t4

0x45a0,	// (0x0001b716) cell_clock2_toolbar_pane

0x45a8,	// (0x0001b71e) cell_clock2_toolbar_pane_cp01

0x45a8,	// (0x0001b71e) cell_clock2_toolbar_pane_cp02

0x45b0,	// (0x0001b726) cell_clock2_toolbar_pane_cp03

0x45b8,	// (0x0001b72e) list_clock2_pane

0x15ab,	// (0x00018721) scroll_pane_cp10

0x45c0,	// (0x0001b736) list_single_clock2_pane_ParamLimits

0x45c0,	// (0x0001b736) list_single_clock2_pane

0x16e5,	// (0x0001885b) list_highlight_pane_cp08

0x45cd,	// (0x0001b743) list_single_clock2_pane_t1

0x45db,	// (0x0001b751) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00026cdb) list_single_clock2_pane_t

0x019e,	// (0x00017314) bg_button_pane_cp10

0x45e9,	// (0x0001b75f) cell_clock2_toolbar_pane_g1

0x70fc,	// (0x0001e272) aid_main_viewer_pane_g1_ParamLimits

0x70fc,	// (0x0001e272) aid_main_viewer_pane_g1

0x7108,	// (0x0001e27e) aid_main_viewer_pane_g2_ParamLimits

0x7108,	// (0x0001e27e) aid_main_viewer_pane_g2

0xa6d6,	// (0x0002184c) aid_main_viewer_pane_g3_ParamLimits

0xa6d6,	// (0x0002184c) aid_main_viewer_pane_g3

0xa6e7,	// (0x0002185d) aid_main_viewer_pane_g4_ParamLimits

0xa6e7,	// (0x0002185d) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0002662e) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0002662e) aid_main_viewer_pane_g

0xae2f,	// (0x00021fa5) main_calc_pane_ParamLimits

0xae3c,	// (0x00021fb2) main_dialer2_pane_ParamLimits

0x019e,	// (0x00017314) main_cam6_pane

0x019e,	// (0x00017314) main_vid6_pane

0xbe30,	// (0x00022fa6) listscroll_gen_pane_cp06_ParamLimits

0xbe30,	// (0x00022fa6) listscroll_gen_pane_cp06

0xbefc,	// (0x00023072) main_clock2_pane_t5_ParamLimits

0xbefc,	// (0x00023072) main_clock2_pane_t5

0xbf4b,	// (0x000230c1) aid_call2_pane_cp10_ParamLimits

0xbf5d,	// (0x000230d3) aid_call_pane_cp10_ParamLimits

0x161a,	// (0x00018790) popup_clock_analogue_window_cp10_g1_ParamLimits

0x161a,	// (0x00018790) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbf6f,	// (0x000230e5) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbf6f,	// (0x000230e5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x161a,	// (0x00018790) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00026964) popup_clock_analogue_window_cp10_g_ParamLimits

0xbf81,	// (0x000230f7) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc38e,	// (0x00023504) cell_dialer2_keypad_pane_g2_ParamLimits

0xc38e,	// (0x00023504) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00026a4a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00026a4a) cell_dialer2_keypad_pane_g

0xc3aa,	// (0x00023520) cell_dialer2_keypad_pane_t1

0xc839,	// (0x000239af) main_cset_text2_pane_ParamLimits

0xc839,	// (0x000239af) main_cset_text2_pane

0x42fc,	// (0x0001b472) area_vitu2_query_pane_g1_ParamLimits

0xcf94,	// (0x0002410a) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00026bff) area_vitu2_query_pane_g_ParamLimits

0x4380,	// (0x0001b4f6) area_vitu2_query_pane_t7_ParamLimits

0x4380,	// (0x0001b4f6) area_vitu2_query_pane_t7

0xcff5,	// (0x0002416b) bg_button_pane_cp018_ParamLimits

0xd003,	// (0x00024179) bg_button_pane_cp021_ParamLimits

0xd00f,	// (0x00024185) bg_button_pane_cp022_ParamLimits

0xd00f,	// (0x00024185) bg_vkb2_func_pane_cp08_ParamLimits

0xcff5,	// (0x0002416b) bg_vkb2_func_pane_cp06_ParamLimits

0xd003,	// (0x00024179) bg_vkb2_func_pane_cp07_ParamLimits

0xd020,	// (0x00024196) input_focus_pane_cp09_ParamLimits

0x80c1,	// (0x0001f237) cam6_autofocus_pane_ParamLimits

0x80c1,	// (0x0001f237) cam6_autofocus_pane

0x80e3,	// (0x0001f259) cam6_image_uncrop_pane_ParamLimits

0x80e3,	// (0x0001f259) cam6_image_uncrop_pane

0x8110,	// (0x0001f286) cam6_indi_pane_ParamLimits

0x8110,	// (0x0001f286) cam6_indi_pane

0x812a,	// (0x0001f2a0) cam6_mode_pane_ParamLimits

0x812a,	// (0x0001f2a0) cam6_mode_pane

0x813e,	// (0x0001f2b4) cam6_timer_pane_ParamLimits

0x813e,	// (0x0001f2b4) cam6_timer_pane

0x814a,	// (0x0001f2c0) cam6_zoom_pane_ParamLimits

0x814a,	// (0x0001f2c0) cam6_zoom_pane

0xd414,	// (0x0002458a) cam6_mode_pane_g1_ParamLimits

0xd414,	// (0x0002458a) cam6_mode_pane_g1

0xd420,	// (0x00024596) cam6_mode_pane_g2_ParamLimits

0xd420,	// (0x00024596) cam6_mode_pane_g2

0xd42c,	// (0x000245a2) cam6_mode_pane_g3_ParamLimits

0xd42c,	// (0x000245a2) cam6_mode_pane_g3

0xd438,	// (0x000245ae) cam6_mode_pane_g4_ParamLimits

0xd438,	// (0x000245ae) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00026ce0) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00026ce0) cam6_mode_pane_g

0x3bed,	// (0x0001ad63) bg_tb_trans_pane_cp08_ParamLimits

0x3bed,	// (0x0001ad63) bg_tb_trans_pane_cp08

0x45ff,	// (0x0001b775) cam6_battery_pane_ParamLimits

0x45ff,	// (0x0001b775) cam6_battery_pane

0x4615,	// (0x0001b78b) cam6_indi_pane_g1_ParamLimits

0x4615,	// (0x0001b78b) cam6_indi_pane_g1

0x4627,	// (0x0001b79d) cam6_indi_pane_g2_ParamLimits

0x4627,	// (0x0001b79d) cam6_indi_pane_g2

0x4639,	// (0x0001b7af) cam6_indi_pane_g3_ParamLimits

0x4639,	// (0x0001b7af) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00026ce9) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00026ce9) cam6_indi_pane_g

0x464b,	// (0x0001b7c1) cam6_indi_pane_t1_ParamLimits

0x464b,	// (0x0001b7c1) cam6_indi_pane_t1

0xc52d,	// (0x000236a3) cam6_autofocus_pane_g1

0xc525,	// (0x0002369b) cam6_autofocus_pane_g2

0xc53d,	// (0x000236b3) cam6_autofocus_pane_g3

0xc535,	// (0x000236ab) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00026cf0) cam6_autofocus_pane_g

0x4671,	// (0x0001b7e7) cam6_timer_pane_g1

0x4679,	// (0x0001b7ef) cam6_timer_pane_t1

0x4687,	// (0x0001b7fd) cam6_zoom_cont_pane

0x468f,	// (0x0001b805) cam6_zoom_pane_g1

0x4697,	// (0x0001b80d) cam6_zoom_pane_g2

0xd444,	// (0x000245ba) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00026cf9) cam6_zoom_pane_g

0x30c5,	// (0x0001a23b) cam6_battery_pane_g1

0x30c5,	// (0x0001a23b) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00026871) cam6_battery_pane_g

0x469f,	// (0x0001b815) cam6_zoom_cont_pane_g1

0x46a8,	// (0x0001b81e) cam6_zoom_cont_pane_g2

0x46b1,	// (0x0001b827) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00026d00) cam6_zoom_cont_pane_g

0xd461,	// (0x000245d7) cam6_mode_pane_cp_ParamLimits

0xd461,	// (0x000245d7) cam6_mode_pane_cp

0xd475,	// (0x000245eb) cam6_zoom_pane_cp_ParamLimits

0xd475,	// (0x000245eb) cam6_zoom_pane_cp

0xd491,	// (0x00024607) vid6_image_uncrop_cif_pane_ParamLimits

0xd491,	// (0x00024607) vid6_image_uncrop_cif_pane

0xd4bd,	// (0x00024633) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4bd,	// (0x00024633) vid6_image_uncrop_nhd_pane

0xd4dc,	// (0x00024652) vid6_image_uncrop_vga_pane_ParamLimits

0xd4dc,	// (0x00024652) vid6_image_uncrop_vga_pane

0xd4fb,	// (0x00024671) vid6_image_uncrop_wvga_pane_ParamLimits

0xd4fb,	// (0x00024671) vid6_image_uncrop_wvga_pane

0xd51a,	// (0x00024690) vid6_indi_pane_ParamLimits

0xd51a,	// (0x00024690) vid6_indi_pane

0x3bed,	// (0x0001ad63) bg_tb_trans_pane_cp09_ParamLimits

0x3bed,	// (0x0001ad63) bg_tb_trans_pane_cp09

0x46c9,	// (0x0001b83f) cam6_battery_pane_cp_ParamLimits

0x46c9,	// (0x0001b83f) cam6_battery_pane_cp

0x46d5,	// (0x0001b84b) vid6_indi_pane_g1_ParamLimits

0x46d5,	// (0x0001b84b) vid6_indi_pane_g1

0x46e7,	// (0x0001b85d) vid6_indi_pane_g2_ParamLimits

0x46e7,	// (0x0001b85d) vid6_indi_pane_g2

0x46f9,	// (0x0001b86f) vid6_indi_pane_g3_ParamLimits

0x46f9,	// (0x0001b86f) vid6_indi_pane_g3

0x4710,	// (0x0001b886) vid6_indi_pane_g4_ParamLimits

0x4710,	// (0x0001b886) vid6_indi_pane_g4

0x4727,	// (0x0001b89d) vid6_indi_pane_g5_ParamLimits

0x4727,	// (0x0001b89d) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00026d07) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00026d07) vid6_indi_pane_g

0x4741,	// (0x0001b8b7) vid6_indi_pane_t1_ParamLimits

0x4741,	// (0x0001b8b7) vid6_indi_pane_t1

0x4757,	// (0x0001b8cd) vid6_indi_pane_t2_ParamLimits

0x4757,	// (0x0001b8cd) vid6_indi_pane_t2

0x477f,	// (0x0001b8f5) vid6_indi_pane_t3_ParamLimits

0x477f,	// (0x0001b8f5) vid6_indi_pane_t3

0x47a7,	// (0x0001b91d) vid6_indi_pane_t4_ParamLimits

0x47a7,	// (0x0001b91d) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00026d12) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00026d12) vid6_indi_pane_t

0x47cb,	// (0x0001b941) wait_bar_pane_cp08

0xd53f,	// (0x000246b5) main_cset_text2_pane_t1_ParamLimits

0xd53f,	// (0x000246b5) main_cset_text2_pane_t1

0xd44c,	// (0x000245c2) listscroll_gen_pane_cp06_t1_ParamLimits

0xd44c,	// (0x000245c2) listscroll_gen_pane_cp06_t1

0x019e,	// (0x00017314) main_cam6_set_pane

0x7a3f,	// (0x0001ebb5) bg_tb_trans_pane_cp06_ParamLimits

0x7a55,	// (0x0001ebcb) cam4_indicators_pane_g1_ParamLimits

0x7a65,	// (0x0001ebdb) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00026a87) cam4_indicators_pane_g_ParamLimits

0x7a7d,	// (0x0001ebf3) cam4_indicators_pane_t1_ParamLimits

0x7b2b,	// (0x0001eca1) bg_tb_trans_pane_cp07_ParamLimits

0x7b43,	// (0x0001ecb9) vid4_indicators_pane_g1_ParamLimits

0x7b55,	// (0x0001eccb) vid4_indicators_pane_g2_ParamLimits

0x7b68,	// (0x0001ecde) vid4_indicators_pane_g3_ParamLimits

0x7b79,	// (0x0001ecef) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00026a99) vid4_indicators_pane_g_ParamLimits

0x7b95,	// (0x0001ed0b) vid4_indicators_pane_t1_ParamLimits

0x8048,	// (0x0001f1be) vid4_progress_pane_g1_ParamLimits

0x8059,	// (0x0001f1cf) vid4_progress_pane_g2_ParamLimits

0x713e,	// (0x0001e2b4) vid4_progress_pane_g3_ParamLimits

0x7a65,	// (0x0001ebdb) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00026c4a) vid4_progress_pane_g_ParamLimits

0x806b,	// (0x0001f1e1) vid4_progress_pane_t1_ParamLimits

0x8080,	// (0x0001f1f6) vid4_progress_pane_t2_ParamLimits

0x8098,	// (0x0001f20e) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00026c55) vid4_progress_pane_t_ParamLimits

0x80af,	// (0x0001f225) wait_bar_pane_cp07_ParamLimits

0xd566,	// (0x000246dc) main_cam6_set_pane_g2_ParamLimits

0xd566,	// (0x000246dc) main_cam6_set_pane_g2

0xd572,	// (0x000246e8) main_cset6_listscroll_pane_ParamLimits

0xd572,	// (0x000246e8) main_cset6_listscroll_pane

0xd59f,	// (0x00024715) main_cset6_slider_pane_ParamLimits

0xd59f,	// (0x00024715) main_cset6_slider_pane

0xd5ab,	// (0x00024721) main_cset6_text2_pane_ParamLimits

0xd5ab,	// (0x00024721) main_cset6_text2_pane

0x47da,	// (0x0001b950) main_cset6_text_pane

0x47e2,	// (0x0001b958) main_cset_list_pane_copy1_ParamLimits

0x47e2,	// (0x0001b958) main_cset_list_pane_copy1

0x47f2,	// (0x0001b968) scroll_pane_cp028_copy1

0xd5be,	// (0x00024734) cset_list_set_pane_copy1

0xd5ce,	// (0x00024744) aid_position_infowindow_above_copy1

0xd5d6,	// (0x0002474c) aid_position_infowindow_below_copy1

0xd5de,	// (0x00024754) cset_list_set_pane_g1_copy1

0xd5e6,	// (0x0002475c) cset_list_set_pane_g3_copy1_ParamLimits

0xd5e6,	// (0x0002475c) cset_list_set_pane_g3_copy1

0xd5f5,	// (0x0002476b) cset_list_set_pane_t1_copy1_ParamLimits

0xd5f5,	// (0x0002476b) cset_list_set_pane_t1_copy1

0x020f,	// (0x00017385) list_highlight_pane_cp021_copy1_ParamLimits

0x020f,	// (0x00017385) list_highlight_pane_cp021_copy1

0x47fb,	// (0x0001b971) cset6_slider_pane_ParamLimits

0x47fb,	// (0x0001b971) cset6_slider_pane

0x4827,	// (0x0001b99d) main_cset6_slider_pane_g1_ParamLimits

0x4827,	// (0x0001b99d) main_cset6_slider_pane_g1

0xd60a,	// (0x00024780) main_cset6_slider_pane_g2_ParamLimits

0xd60a,	// (0x00024780) main_cset6_slider_pane_g2

0x484f,	// (0x0001b9c5) main_cset6_slider_pane_g3_ParamLimits

0x484f,	// (0x0001b9c5) main_cset6_slider_pane_g3

0xd632,	// (0x000247a8) main_cset6_slider_pane_g4_ParamLimits

0xd632,	// (0x000247a8) main_cset6_slider_pane_g4

0xd63e,	// (0x000247b4) main_cset6_slider_pane_g5_ParamLimits

0xd63e,	// (0x000247b4) main_cset6_slider_pane_g5

0x3f33,	// (0x0001b0a9) main_cset6_slider_pane_g7_ParamLimits

0x3f33,	// (0x0001b0a9) main_cset6_slider_pane_g7

0x3f3f,	// (0x0001b0b5) main_cset6_slider_pane_g8_ParamLimits

0x3f3f,	// (0x0001b0b5) main_cset6_slider_pane_g8

0xd64a,	// (0x000247c0) main_cset6_slider_pane_g9_ParamLimits

0xd64a,	// (0x000247c0) main_cset6_slider_pane_g9

0xd656,	// (0x000247cc) main_cset6_slider_pane_g10_ParamLimits

0xd656,	// (0x000247cc) main_cset6_slider_pane_g10

0xd662,	// (0x000247d8) main_cset6_slider_pane_g11_ParamLimits

0xd662,	// (0x000247d8) main_cset6_slider_pane_g11

0xd66e,	// (0x000247e4) main_cset6_slider_pane_g12_ParamLimits

0xd66e,	// (0x000247e4) main_cset6_slider_pane_g12

0xd67a,	// (0x000247f0) main_cset6_slider_pane_g13_ParamLimits

0xd67a,	// (0x000247f0) main_cset6_slider_pane_g13

0xd686,	// (0x000247fc) main_cset6_slider_pane_g14_ParamLimits

0xd686,	// (0x000247fc) main_cset6_slider_pane_g14

0xd692,	// (0x00024808) main_cset6_slider_pane_g15_ParamLimits

0xd692,	// (0x00024808) main_cset6_slider_pane_g15

0xd6aa,	// (0x00024820) main_cset6_slider_pane_g16_ParamLimits

0xd6aa,	// (0x00024820) main_cset6_slider_pane_g16

0xd6b6,	// (0x0002482c) main_cset6_slider_pane_g17_ParamLimits

0xd6b6,	// (0x0002482c) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00026d1b) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00026d1b) main_cset6_slider_pane_g

0x485b,	// (0x0001b9d1) main_cset6_slider_pane_t1_ParamLimits

0x485b,	// (0x0001b9d1) main_cset6_slider_pane_t1

0xd6da,	// (0x00024850) main_cset6_slider_pane_t2_ParamLimits

0xd6da,	// (0x00024850) main_cset6_slider_pane_t2

0xd705,	// (0x0002487b) main_cset6_slider_pane_t3_ParamLimits

0xd705,	// (0x0002487b) main_cset6_slider_pane_t3

0xd730,	// (0x000248a6) main_cset6_slider_pane_t4_ParamLimits

0xd730,	// (0x000248a6) main_cset6_slider_pane_t4

0xd75b,	// (0x000248d1) main_cset6_slider_pane_t5_ParamLimits

0xd75b,	// (0x000248d1) main_cset6_slider_pane_t5

0x489c,	// (0x0001ba12) main_cset6_slider_pane_t7_ParamLimits

0x489c,	// (0x0001ba12) main_cset6_slider_pane_t7

0xd786,	// (0x000248fc) main_cset6_slider_pane_t8_ParamLimits

0xd786,	// (0x000248fc) main_cset6_slider_pane_t8

0xd7aa,	// (0x00024920) main_cset6_slider_pane_t9_ParamLimits

0xd7aa,	// (0x00024920) main_cset6_slider_pane_t9

0xd7ce,	// (0x00024944) main_cset6_slider_pane_t10_ParamLimits

0xd7ce,	// (0x00024944) main_cset6_slider_pane_t10

0xd7f2,	// (0x00024968) main_cset6_slider_pane_t11_ParamLimits

0xd7f2,	// (0x00024968) main_cset6_slider_pane_t11

0x48d2,	// (0x0001ba48) main_cset6_slider_pane_t14_ParamLimits

0x48d2,	// (0x0001ba48) main_cset6_slider_pane_t14

0x490b,	// (0x0001ba81) main_cset6_slider_pane_t15_ParamLimits

0x490b,	// (0x0001ba81) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00026d40) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00026d40) main_cset6_slider_pane_t

0x4017,	// (0x0001b18d) cset_slider_pane_g1_copy1

0x4020,	// (0x0001b196) cset_slider_pane_g2_copy1

0x4029,	// (0x0001b19f) cset_slider_pane_g3_copy1

0x019e,	// (0x00017314) bg_popup_sub_pane_cp011_copy1

0x4110,	// (0x0001b286) main_cset_text_pane_g1_copy1

0x4118,	// (0x0001b28e) main_cset_text_pane_t1_copy1

0x4126,	// (0x0001b29c) main_cset_text_pane_t2_copy1

0x4134,	// (0x0001b2aa) main_cset_text_pane_t3_copy1

0x4142,	// (0x0001b2b8) main_cset_text_pane_t4_copy1

0x4150,	// (0x0001b2c6) main_cset_text_pane_t5_copy1

0x415e,	// (0x0001b2d4) main_cset_text_pane_t6_copy1

0x416c,	// (0x0001b2e2) main_cset_text_pane_t7_copy1

0xd816,	// (0x0002498c) main_cset_text2_pane_t1_copy1

0x019e,	// (0x00017314) main_ncimui_pane

0xae81,	// (0x00021ff7) popup_query_ncimui_window_ParamLimits

0xae81,	// (0x00021ff7) popup_query_ncimui_window

0x335a,	// (0x0001a4d0) field_cale_ev2_pane_g4_ParamLimits

0x335a,	// (0x0001a4d0) field_cale_ev2_pane_g4

0xc32e,	// (0x000234a4) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc32e,	// (0x000234a4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00026a25) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00026a25) cell_video_dialer_keypad_pane_g

0xc346,	// (0x000234bc) cell_video_dialer_keypad_pane_t1

0x019e,	// (0x00017314) bg_popup_window_pane_cp012

0x1497,	// (0x0001860d) heading_pane_cp06

0x4a33,	// (0x0001bba9) ncim_query_content_pane

0x019e,	// (0x00017314) bg_popup_heading_pane_cp01

0x4a3b,	// (0x0001bbb1) ncim_heading_pane_t1

0x4a49,	// (0x0001bbbf) ncim_indicator_popup_pane

0x4a5b,	// (0x0001bbd1) ncim_query_button_pane

0x4a71,	// (0x0001bbe7) ncim_query_content_pane_t1

0x4a83,	// (0x0001bbf9) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x00026d7f) ncim_query_content_pane_t

0x4abd,	// (0x0001bc33) ncim_query_list_pane

0x4acf,	// (0x0001bc45) ncim_query_popup_pane

0x4a49,	// (0x0001bbbf) ncim_indicator_popup_pane_ParamLimits

0xd93d,	// (0x00024ab3) ncim_query_content_pane_g1_ParamLimits

0xd93d,	// (0x00024ab3) ncim_query_content_pane_g1

0x4a71,	// (0x0001bbe7) ncim_query_content_pane_t1_ParamLimits

0x4a83,	// (0x0001bbf9) ncim_query_content_pane_t2_ParamLimits

0xd949,	// (0x00024abf) ncim_query_content_pane_t3_ParamLimits

0xd949,	// (0x00024abf) ncim_query_content_pane_t3

0xd966,	// (0x00024adc) ncim_query_content_pane_t4_ParamLimits

0xd966,	// (0x00024adc) ncim_query_content_pane_t4

0xd983,	// (0x00024af9) ncim_query_content_pane_t5_ParamLimits

0xd983,	// (0x00024af9) ncim_query_content_pane_t5

0x4a95,	// (0x0001bc0b) ncim_query_content_pane_t6_ParamLimits

0x4a95,	// (0x0001bc0b) ncim_query_content_pane_t6

0xfc09,	// (0x00026d7f) ncim_query_content_pane_t_ParamLimits

0x4abd,	// (0x0001bc33) ncim_query_list_pane_ParamLimits

0x4acf,	// (0x0001bc45) ncim_query_popup_pane_ParamLimits

0x4ae3,	// (0x0001bc59) wait_bar_pane_cp04

0x019e,	// (0x00017314) input_focus_pane_cp011

0x4aeb,	// (0x0001bc61) ncim_query_popup_pane_t1

0x4af9,	// (0x0001bc6f) ncim_list_query_list_pane_ParamLimits

0x4af9,	// (0x0001bc6f) ncim_list_query_list_pane

0x019e,	// (0x00017314) bg_button_pane_cp027

0x4b0c,	// (0x0001bc82) ncim_query_button_pane_g1

0x019e,	// (0x00017314) list_highlight_pane_cp012

0x4b16,	// (0x0001bc8c) ncim_list_query_list_pane_g1

0x4b1e,	// (0x0001bc94) ncim_list_query_list_pane_t1

0x7a71,	// (0x0001ebe7) cam4_indicators_pane_g3_ParamLimits

0x7a71,	// (0x0001ebe7) cam4_indicators_pane_g3

0x7b85,	// (0x0001ecfb) vid4_indicators_pane_g5_ParamLimits

0x7b85,	// (0x0001ecfb) vid4_indicators_pane_g5

0x7a71,	// (0x0001ebe7) vid4_progress_pane_g5_ParamLimits

0x7a71,	// (0x0001ebe7) vid4_progress_pane_g5

0xd844,	// (0x000249ba) main_ncimui_pane_g1

0xd89e,	// (0x00024a14) ncimui_group_query_pane_ParamLimits

0xd89e,	// (0x00024a14) ncimui_group_query_pane

0xd8e8,	// (0x00024a5e) ncimui_list_pane_ParamLimits

0xd8e8,	// (0x00024a5e) ncimui_list_pane

0xd909,	// (0x00024a7f) ncimui_text_pane_ParamLimits

0xd909,	// (0x00024a7f) ncimui_text_pane

0xd9a0,	// (0x00024b16) ncimui_text_pane_t1_ParamLimits

0xd9a0,	// (0x00024b16) ncimui_text_pane_t1

0x4b2c,	// (0x0001bca2) ncimui_list_single_graphic_pane_ParamLimits

0x4b2c,	// (0x0001bca2) ncimui_list_single_graphic_pane

0xd9bf,	// (0x00024b35) ncimui_query_pane_ParamLimits

0xd9bf,	// (0x00024b35) ncimui_query_pane

0x019e,	// (0x00017314) list_highlight_pane_cp013

0x4b3c,	// (0x0001bcb2) ncim_list_query_list_pane_t1_copy1

0x4b16,	// (0x0001bc8c) ncim_list_single_graphic_pane_g1

0x4b4a,	// (0x0001bcc0) ncim_query_button_pane_cp01

0x4b56,	// (0x0001bccc) ncim_query_entry_pane_ParamLimits

0x4b56,	// (0x0001bccc) ncim_query_entry_pane

0x4b69,	// (0x0001bcdf) ncimui_query_pane_g1

0x4b75,	// (0x0001bceb) ncimui_query_pane_t1_ParamLimits

0x4b75,	// (0x0001bceb) ncimui_query_pane_t1

0x020f,	// (0x00017385) input_focus_pane_cp012

0x4b8e,	// (0x0001bd04) ncim_query_entry_pane_t1

0x09b5,	// (0x00017b2b) main_im_pane_ParamLimits

0x020f,	// (0x00017385) main_mobtv_pane_ParamLimits

0x020f,	// (0x00017385) main_mobtv_pane

0xd6c2,	// (0x00024838) main_cset6_slider_pane_g18_ParamLimits

0xd6c2,	// (0x00024838) main_cset6_slider_pane_g18

0xd6ce,	// (0x00024844) main_cset6_slider_pane_g19_ParamLimits

0xd6ce,	// (0x00024844) main_cset6_slider_pane_g19

0x3dc3,	// (0x0001af39) bg_main_mobtv_pane_ParamLimits

0x3dc3,	// (0x0001af39) bg_main_mobtv_pane

0xd9d2,	// (0x00024b48) main_mobtv_info_pane

0xd9dd,	// (0x00024b53) main_mobtv_loading_pane_ParamLimits

0xd9dd,	// (0x00024b53) main_mobtv_loading_pane

0x4bae,	// (0x0001bd24) main_mobtv_pg_channel_list_pane

0x4bb8,	// (0x0001bd2e) main_mobtv_pg_hdr_pane

0xd9ea,	// (0x00024b60) main_mobtv_programe_curr_pane_ParamLimits

0xd9ea,	// (0x00024b60) main_mobtv_programe_curr_pane

0xd9f7,	// (0x00024b6d) main_mobtv_programe_next_pane_ParamLimits

0xd9f7,	// (0x00024b6d) main_mobtv_programe_next_pane

0x4bc1,	// (0x0001bd37) popup_mobtv_noti_window

0x30c5,	// (0x0001a23b) main_tv_pg_hdr_pane_g1

0x4bcb,	// (0x0001bd41) main_tv_pg_hdr_pane_g2

0x4bd3,	// (0x0001bd49) main_tv_pg_hdr_pane_g3

0x4bdb,	// (0x0001bd51) main_tv_pg_hdr_pane_g4

0x4be3,	// (0x0001bd59) main_tv_pg_hdr_pane_g5

0x4bed,	// (0x0001bd63) main_tv_pg_hdr_pane_g6

0x4bf7,	// (0x0001bd6d) main_tv_pg_hdr_pane_g7

0x4c01,	// (0x0001bd77) main_tv_pg_hdr_pane_g8

0x4c0b,	// (0x0001bd81) main_tv_pg_hdr_pane_g9

0x4c15,	// (0x0001bd8b) main_tv_pg_hdr_pane_g10

0x4c1f,	// (0x0001bd95) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x00026d8c) main_tv_pg_hdr_pane_g

0x4c29,	// (0x0001bd9f) main_tv_pg_hdr_pane_t1

0x4c37,	// (0x0001bdad) main_tv_pg_hdr_pane_t2

0x4c45,	// (0x0001bdbb) main_tv_pg_hdr_pane_t3

0x4c55,	// (0x0001bdcb) main_tv_pg_hdr_pane_t4

0x4c65,	// (0x0001bddb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x00026da3) main_tv_pg_hdr_pane_t

0x4c75,	// (0x0001bdeb) single_mobtv_pg_channel_pane_ParamLimits

0x4c75,	// (0x0001bdeb) single_mobtv_pg_channel_pane

0x4c87,	// (0x0001bdfd) single_mobtv_pg_channel_table_pane

0x4c90,	// (0x0001be06) single_mobtv_pg_channel_thumb_pane

0x4c99,	// (0x0001be0f) single_tv_pg_channel_pane_g1

0x4ca2,	// (0x0001be18) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x00026dae) single_tv_pg_channel_pane_g

0x32f5,	// (0x0001a46b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x32f5,	// (0x0001a46b) bg_single_mobtv_pg_channel_thumb_pane

0x4cab,	// (0x0001be21) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4cab,	// (0x0001be21) single_mobtv_pg_channel_thumb_pane_g1

0x4cb9,	// (0x0001be2f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4cb9,	// (0x0001be2f) single_mobtv_pg_channel_thumb_pane_g2

0x4cc5,	// (0x0001be3b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4cc5,	// (0x0001be3b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x00026db3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x00026db3) single_mobtv_pg_channel_thumb_pane_g

0x4cd1,	// (0x0001be47) single_mobtv_pg_channel_thumb_pane_t1

0x4cdf,	// (0x0001be55) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x00026dba) single_mobtv_pg_channel_thumb_pane_t

0x30c5,	// (0x0001a23b) bg_single_mobtv_pg_channel_table_pane_g1

0x30c5,	// (0x0001a23b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00026871) bg_single_mobtv_pg_channel_table_pane_g

0x4ced,	// (0x0001be63) single_mobtv_pg_channel_table_pane_t1

0x4cfb,	// (0x0001be71) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x00026dbf) single_mobtv_pg_channel_table_pane_t

0xda0c,	// (0x00024b82) main_mobtv_info_pane_g1_ParamLimits

0xda0c,	// (0x00024b82) main_mobtv_info_pane_g1

0xda28,	// (0x00024b9e) main_mobtv_info_pane_t1_ParamLimits

0xda28,	// (0x00024b9e) main_mobtv_info_pane_t1

0xdaa0,	// (0x00024c16) main_mobtv_info_pane_t2_ParamLimits

0xdaa0,	// (0x00024c16) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x00026dc9) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x00026dc9) main_mobtv_info_pane_t

0xdb31,	// (0x00024ca7) wait_bar_pane_cp05

0xdb43,	// (0x00024cb9) main_mobtv_loading_pane_g1_ParamLimits

0xdb43,	// (0x00024cb9) main_mobtv_loading_pane_g1

0xdb4f,	// (0x00024cc5) main_mobtv_loading_pane_g2_ParamLimits

0xdb4f,	// (0x00024cc5) main_mobtv_loading_pane_g2

0xdb5b,	// (0x00024cd1) main_mobtv_loading_pane_g3_ParamLimits

0xdb5b,	// (0x00024cd1) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x00026dd0) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x00026dd0) main_mobtv_loading_pane_g

0x4d09,	// (0x0001be7f) main_mobtv_loading_pane_t1_ParamLimits

0x4d09,	// (0x0001be7f) main_mobtv_loading_pane_t1

0x4d21,	// (0x0001be97) main_mobtv_loading_pane_t2_ParamLimits

0x4d21,	// (0x0001be97) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x00026dd7) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x00026dd7) main_mobtv_loading_pane_t

0xdb69,	// (0x00024cdf) wait_bar_pane_cp06_ParamLimits

0xdb69,	// (0x00024cdf) wait_bar_pane_cp06

0x4d45,	// (0x0001bebb) main_mobtv_programe_curr_pane_t1

0x4d53,	// (0x0001bec9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x00026ddc) main_mobtv_programe_curr_pane_t

0x4d61,	// (0x0001bed7) main_mobtv_programe_next_pane_t1

0x4d6f,	// (0x0001bee5) main_mobtv_programe_next_pane_t2

0x4d7d,	// (0x0001bef3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x00026de1) main_mobtv_programe_next_pane_t

0x019e,	// (0x00017314) bg_popup_mobtv_noti_window_pane

0x4d8b,	// (0x0001bf01) popup_mobtv_noti_window_g1

0x4d93,	// (0x0001bf09) popup_mobtv_noti_window_t1

0x4da1,	// (0x0001bf17) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x00026de8) popup_mobtv_noti_window_t

0x30c5,	// (0x0001a23b) bg_popup_mobtv_noti_window_pane_g1

0x019e,	// (0x00017314) sc_clock_pane

0x019e,	// (0x00017314) main_fs_bigclock_pane

0xd2c3,	// (0x00024439) blid2_tripm_pane_t4_ParamLimits

0xd2c3,	// (0x00024439) blid2_tripm_pane_t4

0xdb75,	// (0x00024ceb) sc_clock_pane_g1_ParamLimits

0xdb75,	// (0x00024ceb) sc_clock_pane_g1

0xdb83,	// (0x00024cf9) sc_clock_pane_t1_ParamLimits

0xdb83,	// (0x00024cf9) sc_clock_pane_t1

0xdb98,	// (0x00024d0e) sc_clock_pane_t2_ParamLimits

0xdb98,	// (0x00024d0e) sc_clock_pane_t2

0xdbaa,	// (0x00024d20) sc_clock_pane_t3_ParamLimits

0xdbaa,	// (0x00024d20) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x00026ded) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x00026ded) sc_clock_pane_t

0xe8a5,	// (0x00025a1b) main_fs_bigclock_indicator_pane_ParamLimits

0xe8a5,	// (0x00025a1b) main_fs_bigclock_indicator_pane

0xdc37,	// (0x00024dad) main_fs_bigclock_pane_g1_ParamLimits

0xdc37,	// (0x00024dad) main_fs_bigclock_pane_g1

0xe8b1,	// (0x00025a27) main_fs_bigclock_pane_t1_ParamLimits

0xe8b1,	// (0x00025a27) main_fs_bigclock_pane_t1

0xe8c3,	// (0x00025a39) main_fs_bigclock_pane_t2_ParamLimits

0xe8c3,	// (0x00025a39) main_fs_bigclock_pane_t2

0xe8d7,	// (0x00025a4d) main_fs_bigclock_pane_t3_ParamLimits

0xe8d7,	// (0x00025a4d) main_fs_bigclock_pane_t3

0x0002,

0xfe76,	// (0x00026fec) main_fs_bigclock_pane_t_ParamLimits

0xfe76,	// (0x00026fec) main_fs_bigclock_pane_t

0x5a23,	// (0x0001cb99) main_fs_bigclock_indicator_pane_g1

0x4a63,	// (0x0001bbd9) ncim_query_content_pane_g2_ParamLimits

0x4a63,	// (0x0001bbd9) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x00026d7a) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x00026d7a) ncim_query_content_pane_g

0xdbbc,	// (0x00024d32) sc_clock_pane_t4_ParamLimits

0xdbbc,	// (0x00024d32) sc_clock_pane_t4

0x020f,	// (0x00017385) main_radioblah_pane

0x3c98,	// (0x0001ae0e) cell_call4_button_pane_t1_copy1_ParamLimits

0x3c98,	// (0x0001ae0e) cell_call4_button_pane_t1_copy1

0xd84e,	// (0x000249c4) main_ncimui_pane_t1_ParamLimits

0xd84e,	// (0x000249c4) main_ncimui_pane_t1

0xd868,	// (0x000249de) main_ncimui_pane_t2_ParamLimits

0xd868,	// (0x000249de) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x00026d73) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x00026d73) main_ncimui_pane_t

0x4eed,	// (0x0001c063) main_radioblah_anim_pane_ParamLimits

0x4eed,	// (0x0001c063) main_radioblah_anim_pane

0x4efe,	// (0x0001c074) main_radioblah_info_pane_ParamLimits

0x4efe,	// (0x0001c074) main_radioblah_info_pane

0x4f12,	// (0x0001c088) main_radioblah_pane_t1_ParamLimits

0x4f12,	// (0x0001c088) main_radioblah_pane_t1

0x4f2e,	// (0x0001c0a4) main_radioblah_pane_t2_ParamLimits

0x4f2e,	// (0x0001c0a4) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x00026e0e) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x00026e0e) main_radioblah_pane_t

0xdc89,	// (0x00024dff) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc89,	// (0x00024dff) main_radioblah_rocker_ctrl_pane

0x4f76,	// (0x0001c0ec) main_radioblah_info_pane_t1_ParamLimits

0x4f76,	// (0x0001c0ec) main_radioblah_info_pane_t1

0xdcd2,	// (0x00024e48) main_radioblah_info_pane_t2_ParamLimits

0xdcd2,	// (0x00024e48) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x00026e17) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x00026e17) main_radioblah_info_pane_t

0x30c5,	// (0x0001a23b) main_radioblah_rocker_ctrl_pane_g1

0xdd82,	// (0x00024ef8) main_radioblah_rocker_ctrl_pane_g2

0xdd8a,	// (0x00024f00) main_radioblah_rocker_ctrl_pane_g3

0xdd92,	// (0x00024f08) main_radioblah_rocker_ctrl_pane_g4

0xdd9a,	// (0x00024f10) main_radioblah_rocker_ctrl_pane_g5

0xdda2,	// (0x00024f18) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x00026e20) main_radioblah_rocker_ctrl_pane_g

0xd816,	// (0x0002498c) main_cset_text2_pane_t1_copy1_ParamLimits

0x79b7,	// (0x0001eb2d) cam4_image_uncrop_qvga_pane

0x7ae5,	// (0x0001ec5b) vid4_image_uncrop_qcif_pane

0x8102,	// (0x0001f278) cam6_image_uncrop_qvga_pane_ParamLimits

0x8102,	// (0x0001f278) cam6_image_uncrop_qvga_pane

0x46b9,	// (0x0001b82f) vid6_image_uncrop_qcif_pane_ParamLimits

0x46b9,	// (0x0001b82f) vid6_image_uncrop_qcif_pane

0x019e,	// (0x00017314) bg_popup_preview_window_pane_cp03

0x4a15,	// (0x0001bb8b) list_cset_text2_pane

0x4a1d,	// (0x0001bb93) main_cset6_text2_pane_g1

0x4a25,	// (0x0001bb9b) main_cset6_text2_pane_t1

0xddaa,	// (0x00024f20) list_cset_text2_pane_t1_ParamLimits

0xddaa,	// (0x00024f20) list_cset_text2_pane_t1

0x020f,	// (0x00017385) main_radioblah_pane_ParamLimits

0xdb1d,	// (0x00024c93) main_mobtv_info_pane_t3_ParamLimits

0xdb1d,	// (0x00024c93) main_mobtv_info_pane_t3

0xdc77,	// (0x00024ded) main_radioblah_pane_g1

0xdca2,	// (0x00024e18) main_radioblah_info_pane_g1

0xdd27,	// (0x00024e9d) main_radioblah_info_pane_t3_ParamLimits

0xdd27,	// (0x00024e9d) main_radioblah_info_pane_t3

0x9b9e,	// (0x00020d14) highlight_cell_cale_month_pane_ParamLimits

0x9b9e,	// (0x00020d14) highlight_cell_cale_month_pane

0x019e,	// (0x00017314) main_phob_fisheye_pane

0x33e3,	// (0x0001a559) scroll_pane_cp0031_ParamLimits

0x33e3,	// (0x0001a559) scroll_pane_cp0031

0x47cb,	// (0x0001b941) wait_bar_pane_cp08_ParamLimits

0xd5be,	// (0x00024734) cset_list_set_pane_copy1_ParamLimits

0x4fb0,	// (0x0001c126) highlight_cell_cale_month_pane_g1

0xddc1,	// (0x00024f37) highlight_cell_cale_month_pane_t1

0x43ec,	// (0x0001b562) list_gen_pane_cp01

0x3f1e,	// (0x0001b094) scroll_pane_01

0xddcf,	// (0x00024f45) list_single_double_fisheye_pane

0xddd8,	// (0x00024f4e) list_double_fisheye_pane_g1_ParamLimits

0xddd8,	// (0x00024f4e) list_double_fisheye_pane_g1

0xdde4,	// (0x00024f5a) list_double_fisheye_pane_g2_ParamLimits

0xdde4,	// (0x00024f5a) list_double_fisheye_pane_g2

0xddf8,	// (0x00024f6e) list_double_fisheye_pane_g3_ParamLimits

0xddf8,	// (0x00024f6e) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x00026e2d) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x00026e2d) list_double_fisheye_pane_g

0xde21,	// (0x00024f97) list_double_fisheye_pane_t1_ParamLimits

0xde21,	// (0x00024f97) list_double_fisheye_pane_t1

0xde3c,	// (0x00024fb2) list_double_fisheye_pane_t2_ParamLimits

0xde3c,	// (0x00024fb2) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x00026e38) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x00026e38) list_double_fisheye_pane_t

0x019e,	// (0x00017314) main_call5_pane

0xdbe2,	// (0x00024d58) sc_swipe_pane_ParamLimits

0xdbe2,	// (0x00024d58) sc_swipe_pane

0xde6a,	// (0x00024fe0) call5_image_pane_ParamLimits

0xde6a,	// (0x00024fe0) call5_image_pane

0xde7c,	// (0x00024ff2) call5_swipe_1_pane_ParamLimits

0xde7c,	// (0x00024ff2) call5_swipe_1_pane

0xde88,	// (0x00024ffe) call5_swipe_2_pane_ParamLimits

0xde88,	// (0x00024ffe) call5_swipe_2_pane

0xdea4,	// (0x0002501a) popup_call5_audio_first_window_ParamLimits

0xdea4,	// (0x0002501a) popup_call5_audio_first_window

0x32f5,	// (0x0001a46b) call5_swipe_1_pane_g1_ParamLimits

0x32f5,	// (0x0001a46b) call5_swipe_1_pane_g1

0x4fb8,	// (0x0001c12e) call5_swipe_1_pane_g2_ParamLimits

0x4fb8,	// (0x0001c12e) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00026e3d) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00026e3d) call5_swipe_1_pane_g

0x4fc4,	// (0x0001c13a) call5_swipe_1_pane_t1_ParamLimits

0x4fc4,	// (0x0001c13a) call5_swipe_1_pane_t1

0x32f5,	// (0x0001a46b) call5_swipe_2_pane_g1_ParamLimits

0x32f5,	// (0x0001a46b) call5_swipe_2_pane_g1

0x4fd9,	// (0x0001c14f) call5_swipe_2_pane_g2_ParamLimits

0x4fd9,	// (0x0001c14f) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x00026e42) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x00026e42) call5_swipe_2_pane_g

0x4fe5,	// (0x0001c15b) call5_swipe_2_pane_t1_ParamLimits

0x4fe5,	// (0x0001c15b) call5_swipe_2_pane_t1

0x4ffa,	// (0x0001c170) sc_swipe_pane_g1_ParamLimits

0x4ffa,	// (0x0001c170) sc_swipe_pane_g1

0x5007,	// (0x0001c17d) sc_swipe_pane_g2_ParamLimits

0x5007,	// (0x0001c17d) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x00026e47) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x00026e47) sc_swipe_pane_g

0x5013,	// (0x0001c189) sc_swipe_pane_t1_ParamLimits

0x5013,	// (0x0001c189) sc_swipe_pane_t1

0x019e,	// (0x00017314) main_cmail_launcher_pane

0xdeb4,	// (0x0002502a) aid_size_cell_cmail_l_ParamLimits

0xdeb4,	// (0x0002502a) aid_size_cell_cmail_l

0xdec4,	// (0x0002503a) grid_cmail_l_pane_ParamLimits

0xdec4,	// (0x0002503a) grid_cmail_l_pane

0xded4,	// (0x0002504a) cell_cmail_l_pane_ParamLimits

0xded4,	// (0x0002504a) cell_cmail_l_pane

0xdeea,	// (0x00025060) cell_cmail_l_pane_g1_ParamLimits

0xdeea,	// (0x00025060) cell_cmail_l_pane_g1

0xdef6,	// (0x0002506c) cell_cmail_l_pane_t1_ParamLimits

0xdef6,	// (0x0002506c) cell_cmail_l_pane_t1

0x5028,	// (0x0001c19e) cell_cmail_l_pane_t2_ParamLimits

0x5028,	// (0x0001c19e) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x00026e4c) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x00026e4c) cell_cmail_l_pane_t

0x020f,	// (0x00017385) grid_highlight_pane_cp018_ParamLimits

0x020f,	// (0x00017385) grid_highlight_pane_cp018

0x824b,	// (0x0001f3c1) main2_pane_ParamLimits

0x824b,	// (0x0001f3c1) main2_pane

0x0a8e,	// (0x00017c04) popup_sp_fs_action_menu_bg_pane_g1

0x0a96,	// (0x00017c0c) popup_sp_fs_action_menu_bg_pane_g2

0x0a9e,	// (0x00017c14) popup_sp_fs_action_menu_bg_pane_g3

0x0aa6,	// (0x00017c1c) popup_sp_fs_action_menu_bg_pane_g4

0x0aae,	// (0x00017c24) popup_sp_fs_action_menu_bg_pane_g5

0x0ab6,	// (0x00017c2c) popup_sp_fs_action_menu_bg_pane_g6

0x0abe,	// (0x00017c34) popup_sp_fs_action_menu_bg_pane_g7

0x0ac6,	// (0x00017c3c) popup_sp_fs_action_menu_bg_pane_g8

0x0ace,	// (0x00017c44) popup_sp_fs_action_menu_bg_pane_g9

0x0ad6,	// (0x00017c4c) popup_sp_fs_action_menu_bg_pane_g10

0x0ad6,	// (0x00017c4c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0002631d) popup_sp_fs_action_menu_bg_pane_g

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t3_g3_g1

0x0cb2,	// (0x00017e28) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x2_t3_g3_g2

0x0cbe,	// (0x00017e34) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x000263cd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x000263cd) list_medium_line_x2_t3_g3_g

0x0cca,	// (0x00017e40) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0cca,	// (0x00017e40) list_medium_line_x2_t3_g3_t1

0x8d94,	// (0x0001ff0a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8d94,	// (0x0001ff0a) list_medium_line_x2_t3_g3_t2

0x0cdf,	// (0x00017e55) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x000263d4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x000263d4) list_medium_line_x2_t3_g3_t

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t3_g2_g1

0x0cbe,	// (0x00017e34) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x000263db) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x000263db) list_medium_line_x2_t3_g2_g

0x0cf4,	// (0x00017e6a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0cf4,	// (0x00017e6a) list_medium_line_x2_t3_g2_t1

0x0d0a,	// (0x00017e80) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d0a,	// (0x00017e80) list_medium_line_x2_t3_g2_t2

0x0d1c,	// (0x00017e92) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d1c,	// (0x00017e92) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x000263e0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x000263e0) list_medium_line_x2_t3_g2_t

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t4_g4_g1

0x0d3a,	// (0x00017eb0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d3a,	// (0x00017eb0) list_medium_line_x2_t4_g4_g2

0x0cb2,	// (0x00017e28) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x2_t4_g4_g3

0x0d46,	// (0x00017ebc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d46,	// (0x00017ebc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x000263e7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x000263e7) list_medium_line_x2_t4_g4_g

0x8da8,	// (0x0001ff1e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8da8,	// (0x0001ff1e) list_medium_line_x2_t4_g4_t1

0x8dc2,	// (0x0001ff38) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8dc2,	// (0x0001ff38) list_medium_line_x2_t4_g4_t2

0x8dd8,	// (0x0001ff4e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8dd8,	// (0x0001ff4e) list_medium_line_x2_t4_g4_t3

0x0d52,	// (0x00017ec8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d52,	// (0x00017ec8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x000263f0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x000263f0) list_medium_line_x2_t4_g4_t

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t2_g4_g1

0x0d3a,	// (0x00017eb0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d3a,	// (0x00017eb0) list_medium_line_x2_t2_g4_g2

0x0cb2,	// (0x00017e28) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x2_t2_g4_g3

0x0cbe,	// (0x00017e34) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00026457) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00026457) list_medium_line_x2_t2_g4_g

0x1040,	// (0x000181b6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1040,	// (0x000181b6) list_medium_line_x2_t2_g4_t1

0x0cdf,	// (0x00017e55) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00026460) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00026460) list_medium_line_x2_t2_g4_t

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t2_g3_g1

0x0cb2,	// (0x00017e28) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x2_t2_g3_g2

0x0cbe,	// (0x00017e34) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x000263cd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x000263cd) list_medium_line_x2_t2_g3_g

0x1055,	// (0x000181cb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1055,	// (0x000181cb) list_medium_line_x2_t2_g3_t1

0x0cdf,	// (0x00017e55) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00026465) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00026465) list_medium_line_x2_t2_g3_t

0x9d5f,	// (0x00020ed5) main_sp_fs_list_pane_ParamLimits

0x9d5f,	// (0x00020ed5) main_sp_fs_list_pane

0x9d6b,	// (0x00020ee1) sp_fs_scroll_pane_ParamLimits

0x9d6b,	// (0x00020ee1) sp_fs_scroll_pane

0x9d77,	// (0x00020eed) list_medium_line_x2_t3_t1

0x9d87,	// (0x00020efd) list_medium_line_x2_t3_t2

0x123a,	// (0x000183b0) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x000264b0) list_medium_line_x2_t3_t

0x9d95,	// (0x00020f0b) list_medium_line_x3_t4_t1

0x9da5,	// (0x00020f1b) list_medium_line_x3_t4_t2

0x1248,	// (0x000183be) list_medium_line_x3_t4_t3

0x123a,	// (0x000183b0) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x000264b7) list_medium_line_x3_t4_t

0x9db3,	// (0x00020f29) list_medium_line_x4_t5_t1

0x9dc3,	// (0x00020f39) list_medium_line_x4_t5_t2

0x1248,	// (0x000183be) list_medium_line_x4_t5_t3

0x1256,	// (0x000183cc) list_medium_line_x4_t5_t4

0x123a,	// (0x000183b0) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x000264c0) list_medium_line_x4_t5_t

0x0ca6,	// (0x00017e1c) list_medium_line_t4_g4_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_t4_g4_g1

0x0d46,	// (0x00017ebc) list_medium_line_t4_g4_g2_ParamLimits

0x0d46,	// (0x00017ebc) list_medium_line_t4_g4_g2

0x1264,	// (0x000183da) list_medium_line_t4_g4_g3_ParamLimits

0x1264,	// (0x000183da) list_medium_line_t4_g4_g3

0x0cbe,	// (0x00017e34) list_medium_line_t4_g4_g4_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x000264cb) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x000264cb) list_medium_line_t4_g4_g

0x1270,	// (0x000183e6) list_medium_line_t4_g4_t1_ParamLimits

0x1270,	// (0x000183e6) list_medium_line_t4_g4_t1

0x1285,	// (0x000183fb) list_medium_line_t4_g4_t2_ParamLimits

0x1285,	// (0x000183fb) list_medium_line_t4_g4_t2

0x129b,	// (0x00018411) list_medium_line_t4_g4_t3_ParamLimits

0x129b,	// (0x00018411) list_medium_line_t4_g4_t3

0x0cdf,	// (0x00017e55) list_medium_line_t4_g4_t4_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x000264d4) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x000264d4) list_medium_line_t4_g4_t

0x9e75,	// (0x00020feb) chi_dic_find_pane_g1

0xae4a,	// (0x00021fc0) main_tport_pane

0x4065,	// (0x0001b1db) list_medium_line_plain_t1

0x40b7,	// (0x0001b22d) list_medium_line_t2_g2_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_t2_g2_g1

0x40c3,	// (0x0001b239) list_medium_line_t2_g2_g2_ParamLimits

0x40c3,	// (0x0001b239) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00026b90) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00026b90) list_medium_line_t2_g2_g

0xcbe4,	// (0x00023d5a) list_medium_line_t2_g2_t1_ParamLimits

0xcbe4,	// (0x00023d5a) list_medium_line_t2_g2_t1

0xcbfb,	// (0x00023d71) list_medium_line_t2_g2_t2_ParamLimits

0xcbfb,	// (0x00023d71) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00026b95) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00026b95) list_medium_line_t2_g2_t

0x4412,	// (0x0001b588) aid_sp_fs_list_icon_a_sm

0x441a,	// (0x0001b590) aid_sp_fs_list_icon_d

0x4422,	// (0x0001b598) aid_sp_fs_text_primary

0x442b,	// (0x0001b5a1) aid_sp_fs_text_secondary

0x4434,	// (0x0001b5aa) list_medium_line

0x4434,	// (0x0001b5aa) list_medium_line_g2

0x4434,	// (0x0001b5aa) list_medium_line_g3

0x4434,	// (0x0001b5aa) list_medium_line_plain

0x4434,	// (0x0001b5aa) list_medium_line_plain_t2

0x4434,	// (0x0001b5aa) list_medium_line_plain_t3

0x4434,	// (0x0001b5aa) list_medium_line_right_icon

0x4434,	// (0x0001b5aa) list_medium_line_right_iconx2

0x4434,	// (0x0001b5aa) list_medium_line_t2

0x4434,	// (0x0001b5aa) list_medium_line_t2_g2

0x4434,	// (0x0001b5aa) list_medium_line_t2_g3

0x4434,	// (0x0001b5aa) list_medium_line_t2_right_icon

0x4434,	// (0x0001b5aa) list_medium_line_t2_right_iconx2

0x4434,	// (0x0001b5aa) list_medium_line_t3

0x4434,	// (0x0001b5aa) list_medium_line_t3_g2

0x4434,	// (0x0001b5aa) list_medium_line_t3_g3

0x4434,	// (0x0001b5aa) list_medium_line_t3_right_iconx2

0x443d,	// (0x0001b5b3) list_medium_line_t4_g4

0x4446,	// (0x0001b5bc) list_medium_line_x2

0x4446,	// (0x0001b5bc) list_medium_line_x2_t2_g2

0x4446,	// (0x0001b5bc) list_medium_line_x2_t2_g3

0x4446,	// (0x0001b5bc) list_medium_line_x2_t2_g4

0x4446,	// (0x0001b5bc) list_medium_line_x2_t3

0x4446,	// (0x0001b5bc) list_medium_line_x2_t3_g2

0x4446,	// (0x0001b5bc) list_medium_line_x2_t3_g3

0x4446,	// (0x0001b5bc) list_medium_line_x2_t3_g4

0x4446,	// (0x0001b5bc) list_medium_line_x2_t4_g2

0x4446,	// (0x0001b5bc) list_medium_line_x2_t4_g4

0x444f,	// (0x0001b5c5) list_medium_line_x3

0x444f,	// (0x0001b5c5) list_medium_line_x3_t4

0x444f,	// (0x0001b5c5) list_medium_line_x3_t4_g4

0x443d,	// (0x0001b5b3) list_medium_line_x4_t4

0x443d,	// (0x0001b5b3) list_medium_line_x4_t4_g7

0x443d,	// (0x0001b5b3) list_medium_line_x4_t5

0x4458,	// (0x0001b5ce) list_single_fs_dyc_pane_ParamLimits

0x4458,	// (0x0001b5ce) list_single_fs_dyc_pane

0x0ca6,	// (0x00017e1c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x4_t4_g7_g1

0x4944,	// (0x0001baba) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4944,	// (0x0001baba) list_medium_line_x4_t4_g7_g2

0x4950,	// (0x0001bac6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4950,	// (0x0001bac6) list_medium_line_x4_t4_g7_g3

0x495f,	// (0x0001bad5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x495f,	// (0x0001bad5) list_medium_line_x4_t4_g7_g4

0x496b,	// (0x0001bae1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x496b,	// (0x0001bae1) list_medium_line_x4_t4_g7_g5

0x497a,	// (0x0001baf0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x497a,	// (0x0001baf0) list_medium_line_x4_t4_g7_g6

0x4989,	// (0x0001baff) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4989,	// (0x0001baff) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00026d59) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00026d59) list_medium_line_x4_t4_g7_g

0x4995,	// (0x0001bb0b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4995,	// (0x0001bb0b) list_medium_line_x4_t4_g7_t1

0x49aa,	// (0x0001bb20) list_medium_line_x4_t4_g7_t2_ParamLimits

0x49aa,	// (0x0001bb20) list_medium_line_x4_t4_g7_t2

0x49bf,	// (0x0001bb35) list_medium_line_x4_t4_g7_t3_ParamLimits

0x49bf,	// (0x0001bb35) list_medium_line_x4_t4_g7_t3

0x49d4,	// (0x0001bb4a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x49d4,	// (0x0001bb4a) list_medium_line_x4_t4_g7_t4

0x49e6,	// (0x0001bb5c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x49e6,	// (0x0001bb5c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00026d68) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00026d68) list_medium_line_x4_t4_g7_t

0x49f8,	// (0x0001bb6e) list_single_dyc_row_pane_ParamLimits

0x49f8,	// (0x0001bb6e) list_single_dyc_row_pane

0xde5e,	// (0x00024fd4) call5_gesture_pane_ParamLimits

0xde5e,	// (0x00024fd4) call5_gesture_pane

0xde94,	// (0x0002500a) call5_windows_pane_ParamLimits

0xde94,	// (0x0002500a) call5_windows_pane

0xdf0c,	// (0x00025082) call5_swipe_1_pane_cp_ParamLimits

0xdf0c,	// (0x00025082) call5_swipe_1_pane_cp

0xdf18,	// (0x0002508e) call5_swipe_2_pane_cp_ParamLimits

0xdf18,	// (0x0002508e) call5_swipe_2_pane_cp

0x16e5,	// (0x0001885b) call5_image_pane_cp

0xdf24,	// (0x0002509a) popup_call5_audio_first_window_cp_ParamLimits

0xdf24,	// (0x0002509a) popup_call5_audio_first_window_cp

0x4ffa,	// (0x0001c170) call5_swipe_1_pane_g1_cp_ParamLimits

0x4ffa,	// (0x0001c170) call5_swipe_1_pane_g1_cp

0x503a,	// (0x0001c1b0) call5_swipe_1_pane_g2_cp

0x5013,	// (0x0001c189) call5_swipe_1_pane_t1_cp_ParamLimits

0x5013,	// (0x0001c189) call5_swipe_1_pane_t1_cp

0x4ffa,	// (0x0001c170) call5_swipe_2_pane_g1_cp_ParamLimits

0x4ffa,	// (0x0001c170) call5_swipe_2_pane_g1_cp

0x5042,	// (0x0001c1b8) call5_swipe_2_pane_g2_cp

0x504a,	// (0x0001c1c0) call5_swipe_2_pane_t1_cp_ParamLimits

0x504a,	// (0x0001c1c0) call5_swipe_2_pane_t1_cp

0x020f,	// (0x00017385) main_sp_fs_email_pane

0x505f,	// (0x0001c1d5) main_sp_fs_listscroll_pane_te

0x5068,	// (0x0001c1de) popup_sp_fs_action_menu_pane_ParamLimits

0x5068,	// (0x0001c1de) popup_sp_fs_action_menu_pane

0x30c5,	// (0x0001a23b) bg_sp_fs_ctrlbar_pane_g1

0x50ae,	// (0x0001c224) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x50b7,	// (0x0001c22d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x50c0,	// (0x0001c236) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x30c5,	// (0x0001a23b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x00026e51) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2ea4,	// (0x0001a01a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2ea4,	// (0x0001a01a) bg_sp_fs_ctrlbar_ddmenu_pane

0x50c9,	// (0x0001c23f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x50c9,	// (0x0001c23f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x50d5,	// (0x0001c24b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x50d5,	// (0x0001c24b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x00026e5a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x00026e5a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x50e1,	// (0x0001c257) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x50e1,	// (0x0001c257) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x50fb,	// (0x0001c271) list_medium_line_t2_right_icon_g1

0xdf32,	// (0x000250a8) list_medium_line_t2_right_icon_t1

0xdf42,	// (0x000250b8) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x00026e5f) list_medium_line_t2_right_icon_t

0x2b90,	// (0x00019d06) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2b90,	// (0x00019d06) bg_sp_fs_ctrlbar_pane

0xdfa7,	// (0x0002511d) main_sp_fs_ctrlbar_button_pane_cp01

0xdfaf,	// (0x00025125) main_sp_fs_ctrlbar_ddmenu_pane

0x513d,	// (0x0001c2b3) main_sp_fs_ctrlbar_pane_g1

0x5149,	// (0x0001c2bf) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x00026e64) main_sp_fs_ctrlbar_pane_g

0x5155,	// (0x0001c2cb) main_sp_fs_ctrlbar_pane_t1

0xdfb9,	// (0x0002512f) main_sp_fs_ctrlbar_pane

0xdfd5,	// (0x0002514b) main_sp_fs_listscroll_pane_te_cp01

0xdfe6,	// (0x0002515c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdfe6,	// (0x0002515c) popup_sp_fs_action_menu_pane_cp01

0x020f,	// (0x00017385) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x020f,	// (0x00017385) bg_sp_fs_highlight_list_pane_cp01

0x517a,	// (0x0001c2f0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x517a,	// (0x0001c2f0) sp_fs_action_menu_list_gene_pane_g1

0x5189,	// (0x0001c2ff) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5189,	// (0x0001c2ff) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00026e6e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00026e6e) sp_fs_action_menu_list_gene_pane_g

0x5196,	// (0x0001c30c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5196,	// (0x0001c30c) sp_fs_action_menu_list_gene_pane_t1

0x51ae,	// (0x0001c324) sp_fs_action_menu_list_gene_pane_ParamLimits

0x51ae,	// (0x0001c324) sp_fs_action_menu_list_gene_pane

0x51d1,	// (0x0001c347) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x51d1,	// (0x0001c347) popup_sp_fs_action_menu_bg_pane

0x51df,	// (0x0001c355) sp_fs_action_menu_list_pane_ParamLimits

0x51df,	// (0x0001c355) sp_fs_action_menu_list_pane

0x5203,	// (0x0001c379) sp_fs_scroll_pane_cp01_ParamLimits

0x5203,	// (0x0001c379) sp_fs_scroll_pane_cp01

0xe000,	// (0x00025176) list_medium_line_plain_t2_t1

0xe010,	// (0x00025186) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00026e73) list_medium_line_plain_t2_t

0xe01e,	// (0x00025194) list_medium_line_plain_t3_t1

0xe02e,	// (0x000251a4) list_medium_line_plain_t3_t2

0xe03c,	// (0x000251b2) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00026e78) list_medium_line_plain_t3_t

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t2_g2_g1

0x0cbe,	// (0x00017e34) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x000263db) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x000263db) list_medium_line_x2_t2_g2_g

0x1270,	// (0x000183e6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1270,	// (0x000183e6) list_medium_line_x2_t2_g2_t1

0x0cdf,	// (0x00017e55) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00026e7f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00026e7f) list_medium_line_x2_t2_g2_t

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t4_g2_g1

0x0cbe,	// (0x00017e34) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x000263db) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x000263db) list_medium_line_x2_t4_g2_g

0xe04a,	// (0x000251c0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe04a,	// (0x000251c0) list_medium_line_x2_t4_g2_t1

0xe064,	// (0x000251da) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe064,	// (0x000251da) list_medium_line_x2_t4_g2_t2

0xe07a,	// (0x000251f0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe07a,	// (0x000251f0) list_medium_line_x2_t4_g2_t3

0x0cdf,	// (0x00017e55) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0e,	// (0x00026e84) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0e,	// (0x00026e84) list_medium_line_x2_t4_g2_t

0x5229,	// (0x0001c39f) list_medium_line_t3_right_iconx2_g1

0x50fb,	// (0x0001c271) list_medium_line_t3_right_iconx2_g2

0xe08f,	// (0x00025205) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd17,	// (0x00026e8d) list_medium_line_t3_right_iconx2_g

0xe097,	// (0x0002520d) list_medium_line_t3_right_iconx2_t1

0xe0a7,	// (0x0002521d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1e,	// (0x00026e94) list_medium_line_t3_right_iconx2_t

0x0ca6,	// (0x00017e1c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x3_t4_g4_g1

0x0cb2,	// (0x00017e28) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x3_t4_g4_g2

0x0d46,	// (0x00017ebc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d46,	// (0x00017ebc) list_medium_line_x3_t4_g4_g3

0x5231,	// (0x0001c3a7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5231,	// (0x0001c3a7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd23,	// (0x00026e99) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd23,	// (0x00026e99) list_medium_line_x3_t4_g4_g

0xe0b5,	// (0x0002522b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe0b5,	// (0x0002522b) list_medium_line_x3_t4_g4_t1

0xe0cc,	// (0x00025242) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe0cc,	// (0x00025242) list_medium_line_x3_t4_g4_t2

0x523d,	// (0x0001c3b3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x523d,	// (0x0001c3b3) list_medium_line_x3_t4_g4_t3

0x5252,	// (0x0001c3c8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5252,	// (0x0001c3c8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2c,	// (0x00026ea2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2c,	// (0x00026ea2) list_medium_line_x3_t4_g4_t

0xe0e1,	// (0x00025257) list_single_dyc_row_text_pane_t1_ParamLimits

0xe0e1,	// (0x00025257) list_single_dyc_row_text_pane_t1

0xe120,	// (0x00025296) list_single_dyc_row_text_pane_t2_ParamLimits

0xe120,	// (0x00025296) list_single_dyc_row_text_pane_t2

0x526f,	// (0x0001c3e5) list_single_dyc_row_text_pane_t3_ParamLimits

0x526f,	// (0x0001c3e5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd35,	// (0x00026eab) list_single_dyc_row_text_pane_t_ParamLimits

0xfd35,	// (0x00026eab) list_single_dyc_row_text_pane_t

0x5281,	// (0x0001c3f7) list_single_dyc_row_pane_g1_ParamLimits

0x5281,	// (0x0001c3f7) list_single_dyc_row_pane_g1

0x528d,	// (0x0001c403) list_single_dyc_row_pane_g2_ParamLimits

0x528d,	// (0x0001c403) list_single_dyc_row_pane_g2

0x5299,	// (0x0001c40f) list_single_dyc_row_pane_g3_ParamLimits

0x5299,	// (0x0001c40f) list_single_dyc_row_pane_g3

0x52a5,	// (0x0001c41b) list_single_dyc_row_pane_g4_ParamLimits

0x52a5,	// (0x0001c41b) list_single_dyc_row_pane_g4

0x0003,

0xfd3c,	// (0x00026eb2) list_single_dyc_row_pane_g_ParamLimits

0xfd3c,	// (0x00026eb2) list_single_dyc_row_pane_g

0x52b1,	// (0x0001c427) list_single_dyc_row_text_pane_ParamLimits

0x52b1,	// (0x0001c427) list_single_dyc_row_text_pane

0x019e,	// (0x00017314) bg_sp_fs_scroll_pane

0x52d0,	// (0x0001c446) thumb_sp_fs_scroll_pane

0x40b7,	// (0x0001b22d) list_medium_line_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_g1

0x52d9,	// (0x0001c44f) list_medium_line_t1_ParamLimits

0x52d9,	// (0x0001c44f) list_medium_line_t1

0x0ca6,	// (0x00017e1c) list_medium_line_x2_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_g1

0x0cb2,	// (0x00017e28) list_medium_line_x2_g2_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x2_g2

0x0001,

0xfd45,	// (0x00026ebb) list_medium_line_x2_g_ParamLimits

0xfd45,	// (0x00026ebb) list_medium_line_x2_g

0x52ee,	// (0x0001c464) list_medium_line_x2_t1_ParamLimits

0x52ee,	// (0x0001c464) list_medium_line_x2_t1

0x0ca6,	// (0x00017e1c) list_medium_line_x3_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x3_g1

0x0cb2,	// (0x00017e28) list_medium_line_x3_g2_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x3_g2

0x0001,

0xfd45,	// (0x00026ebb) list_medium_line_x3_g_ParamLimits

0xfd45,	// (0x00026ebb) list_medium_line_x3_g

0x52ee,	// (0x0001c464) list_medium_line_x3_t1_ParamLimits

0x52ee,	// (0x0001c464) list_medium_line_x3_t1

0x5304,	// (0x0001c47a) thumb_sp_fs_scroll_pane_g1

0x530d,	// (0x0001c483) thumb_sp_fs_scroll_pane_g2

0x5316,	// (0x0001c48c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x00026ec0) thumb_sp_fs_scroll_pane_g

0x5304,	// (0x0001c47a) bg_sp_fs_scroll_pane_g1

0x530d,	// (0x0001c483) bg_sp_fs_scroll_pane_g2

0x5316,	// (0x0001c48c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x00026ec0) bg_sp_fs_scroll_pane_g

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ca6,	// (0x00017e1c) list_medium_line_x2_t3_g4_g1

0x0d3a,	// (0x00017eb0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d3a,	// (0x00017eb0) list_medium_line_x2_t3_g4_g2

0x0cb2,	// (0x00017e28) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0cb2,	// (0x00017e28) list_medium_line_x2_t3_g4_g3

0x0cbe,	// (0x00017e34) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0cbe,	// (0x00017e34) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00026457) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00026457) list_medium_line_x2_t3_g4_g

0xe17a,	// (0x000252f0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe17a,	// (0x000252f0) list_medium_line_x2_t3_g4_t1

0xe190,	// (0x00025306) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe190,	// (0x00025306) list_medium_line_x2_t3_g4_t2

0x0cdf,	// (0x00017e55) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0cdf,	// (0x00017e55) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd51,	// (0x00026ec7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd51,	// (0x00026ec7) list_medium_line_x2_t3_g4_t

0x40b7,	// (0x0001b22d) list_medium_line_g2_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_g2_g1

0x40c3,	// (0x0001b239) list_medium_line_g2_g2_ParamLimits

0x40c3,	// (0x0001b239) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00026b90) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00026b90) list_medium_line_g2_g

0x531f,	// (0x0001c495) list_medium_line_g2_t1_ParamLimits

0x531f,	// (0x0001c495) list_medium_line_g2_t1

0x40b7,	// (0x0001b22d) list_medium_line_t3_g2_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_t3_g2_g1

0x40c3,	// (0x0001b239) list_medium_line_t3_g2_g2_ParamLimits

0x40c3,	// (0x0001b239) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00026b90) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00026b90) list_medium_line_t3_g2_g

0xe1a9,	// (0x0002531f) list_medium_line_t3_g2_t1_ParamLimits

0xe1a9,	// (0x0002531f) list_medium_line_t3_g2_t1

0xe1c0,	// (0x00025336) list_medium_line_t3_g2_t2_ParamLimits

0xe1c0,	// (0x00025336) list_medium_line_t3_g2_t2

0xe1d5,	// (0x0002534b) list_medium_line_t3_g2_t3_ParamLimits

0xe1d5,	// (0x0002534b) list_medium_line_t3_g2_t3

0x0002,

0xfd58,	// (0x00026ece) list_medium_line_t3_g2_t_ParamLimits

0xfd58,	// (0x00026ece) list_medium_line_t3_g2_t

0x50fb,	// (0x0001c271) list_medium_line_right_icon_g1

0x5334,	// (0x0001c4aa) list_medium_line_right_icon_t1

0x40b7,	// (0x0001b22d) list_medium_line_t2_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_t2_g1

0xe1ee,	// (0x00025364) list_medium_line_t2_t1_ParamLimits

0xe1ee,	// (0x00025364) list_medium_line_t2_t1

0xe208,	// (0x0002537e) list_medium_line_t2_t2_ParamLimits

0xe208,	// (0x0002537e) list_medium_line_t2_t2

0x0001,

0xfd5f,	// (0x00026ed5) list_medium_line_t2_t_ParamLimits

0xfd5f,	// (0x00026ed5) list_medium_line_t2_t

0x40b7,	// (0x0001b22d) list_medium_line_t3_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_t3_g1

0xe21d,	// (0x00025393) list_medium_line_t3_t1_ParamLimits

0xe21d,	// (0x00025393) list_medium_line_t3_t1

0xe234,	// (0x000253aa) list_medium_line_t3_t2_ParamLimits

0xe234,	// (0x000253aa) list_medium_line_t3_t2

0xe249,	// (0x000253bf) list_medium_line_t3_t3_ParamLimits

0xe249,	// (0x000253bf) list_medium_line_t3_t3

0x0002,

0xfd64,	// (0x00026eda) list_medium_line_t3_t_ParamLimits

0xfd64,	// (0x00026eda) list_medium_line_t3_t

0x40b7,	// (0x0001b22d) list_medium_line_g3_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_g3_g1

0x5342,	// (0x0001c4b8) list_medium_line_g3_g2_ParamLimits

0x5342,	// (0x0001c4b8) list_medium_line_g3_g2

0x40c3,	// (0x0001b239) list_medium_line_g3_g3_ParamLimits

0x40c3,	// (0x0001b239) list_medium_line_g3_g3

0x0002,

0xfd6b,	// (0x00026ee1) list_medium_line_g3_g_ParamLimits

0xfd6b,	// (0x00026ee1) list_medium_line_g3_g

0x534e,	// (0x0001c4c4) list_medium_line_g3_t1_ParamLimits

0x534e,	// (0x0001c4c4) list_medium_line_g3_t1

0x40b7,	// (0x0001b22d) list_medium_line_t2_g3_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_t2_g3_g1

0x5342,	// (0x0001c4b8) list_medium_line_t2_g3_g2_ParamLimits

0x5342,	// (0x0001c4b8) list_medium_line_t2_g3_g2

0x40c3,	// (0x0001b239) list_medium_line_t2_g3_g3_ParamLimits

0x40c3,	// (0x0001b239) list_medium_line_t2_g3_g3

0x0002,

0xfd6b,	// (0x00026ee1) list_medium_line_t2_g3_g_ParamLimits

0xfd6b,	// (0x00026ee1) list_medium_line_t2_g3_g

0xe25b,	// (0x000253d1) list_medium_line_t2_g3_t1_ParamLimits

0xe25b,	// (0x000253d1) list_medium_line_t2_g3_t1

0xe272,	// (0x000253e8) list_medium_line_t2_g3_t2_ParamLimits

0xe272,	// (0x000253e8) list_medium_line_t2_g3_t2

0x0001,

0xfd72,	// (0x00026ee8) list_medium_line_t2_g3_t_ParamLimits

0xfd72,	// (0x00026ee8) list_medium_line_t2_g3_t

0x40b7,	// (0x0001b22d) list_medium_line_t3_g3_g1_ParamLimits

0x40b7,	// (0x0001b22d) list_medium_line_t3_g3_g1

0x5342,	// (0x0001c4b8) list_medium_line_t3_g3_g2_ParamLimits

0x5342,	// (0x0001c4b8) list_medium_line_t3_g3_g2

0x40c3,	// (0x0001b239) list_medium_line_t3_g3_g3_ParamLimits

0x40c3,	// (0x0001b239) list_medium_line_t3_g3_g3

0x0002,

0xfd6b,	// (0x00026ee1) list_medium_line_t3_g3_g_ParamLimits

0xfd6b,	// (0x00026ee1) list_medium_line_t3_g3_g

0xe287,	// (0x000253fd) list_medium_line_t3_g3_t1_ParamLimits

0xe287,	// (0x000253fd) list_medium_line_t3_g3_t1

0xe2a0,	// (0x00025416) list_medium_line_t3_g3_t2_ParamLimits

0xe2a0,	// (0x00025416) list_medium_line_t3_g3_t2

0xe2b6,	// (0x0002542c) list_medium_line_t3_g3_t3_ParamLimits

0xe2b6,	// (0x0002542c) list_medium_line_t3_g3_t3

0x0002,

0xfd77,	// (0x00026eed) list_medium_line_t3_g3_t_ParamLimits

0xfd77,	// (0x00026eed) list_medium_line_t3_g3_t

0x5229,	// (0x0001c39f) list_medium_line_right_iconx2_g1

0x50fb,	// (0x0001c271) list_medium_line_right_iconx2_g2

0x0001,

0xfd7e,	// (0x00026ef4) list_medium_line_right_iconx2_g

0x5363,	// (0x0001c4d9) list_medium_line_right_iconx2_t1

0x5229,	// (0x0001c39f) list_medium_line_t2_right_iconx2_g1

0x50fb,	// (0x0001c271) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7e,	// (0x00026ef4) list_medium_line_t2_right_iconx2_g

0xe2d0,	// (0x00025446) list_medium_line_t2_right_iconx2_t1

0xe2e0,	// (0x00025456) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd83,	// (0x00026ef9) list_medium_line_t2_right_iconx2_t

0x5371,	// (0x0001c4e7) list_medium_line_x4_t4_t1

0xe2ee,	// (0x00025464) list_medium_line_x4_t4_t2

0xe2fe,	// (0x00025474) list_medium_line_x4_t4_t3

0xe30e,	// (0x00025484) list_medium_line_x4_t4_t4

0x0003,

0xfd88,	// (0x00026efe) list_medium_line_x4_t4_t

0xe347,	// (0x000254bd) tport_appsw_pane_ParamLimits

0xe347,	// (0x000254bd) tport_appsw_pane

0xe355,	// (0x000254cb) tport_contact_pane_ParamLimits

0xe355,	// (0x000254cb) tport_contact_pane

0xe363,	// (0x000254d9) tport_listscroll_pane_ParamLimits

0xe363,	// (0x000254d9) tport_listscroll_pane

0xe371,	// (0x000254e7) cell_tport_appsw_pane_ParamLimits

0xe371,	// (0x000254e7) cell_tport_appsw_pane

0x3366,	// (0x0001a4dc) tport_appsw_pane_g1_ParamLimits

0x3366,	// (0x0001a4dc) tport_appsw_pane_g1

0x537f,	// (0x0001c4f5) tport_contact_pane_g1

0x5388,	// (0x0001c4fe) tport_contact_pane_t1

0x5396,	// (0x0001c50c) tport_contact_pane_t2

0x0001,

0xfd91,	// (0x00026f07) tport_contact_pane_t

0x53a4,	// (0x0001c51a) list_tport_pane

0x53ad,	// (0x0001c523) scroll_pane_cp_030

0xe39c,	// (0x00025512) cell_tport_appsw_pane_g1

0x53c6,	// (0x0001c53c) cell_tport_appsw_pane_t1

0x019e,	// (0x00017314) grid_highlight_pane_cp019

0xe3ac,	// (0x00025522) list_tport_double_graphic_pane_ParamLimits

0xe3ac,	// (0x00025522) list_tport_double_graphic_pane

0x020f,	// (0x00017385) list_highlight_pane_cp023_ParamLimits

0x020f,	// (0x00017385) list_highlight_pane_cp023

0xe3bd,	// (0x00025533) list_tport_double_graphic_pane_g1_ParamLimits

0xe3bd,	// (0x00025533) list_tport_double_graphic_pane_g1

0xe3ca,	// (0x00025540) list_tport_double_graphic_pane_t1_ParamLimits

0xe3ca,	// (0x00025540) list_tport_double_graphic_pane_t1

0xe3df,	// (0x00025555) list_tport_double_graphic_pane_t2_ParamLimits

0xe3df,	// (0x00025555) list_tport_double_graphic_pane_t2

0x0001,

0xfd9d,	// (0x00026f13) list_tport_double_graphic_pane_t_ParamLimits

0xfd9d,	// (0x00026f13) list_tport_double_graphic_pane_t

0x019e,	// (0x00017314) main_cale_note_pane

0x7d3c,	// (0x0001eeb2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d3c,	// (0x0001eeb2) cell_vitu2_function_top_wide_pane_cp01

0xdb31,	// (0x00024ca7) wait_bar_pane_cp05_ParamLimits

0x019e,	// (0x00017314) listscroll_cmail_pane

0x53dc,	// (0x0001c552) list_cmail_pane

0xe3fb,	// (0x00025571) list_cmail_body_pane

0xe410,	// (0x00025586) list_single_cmail_header_caption_pane

0xe42a,	// (0x000255a0) list_single_cmail_header_detail_pane_ParamLimits

0xe42a,	// (0x000255a0) list_single_cmail_header_detail_pane

0xe459,	// (0x000255cf) list_single_cmail_header_caption_pane_t1

0xe469,	// (0x000255df) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe469,	// (0x000255df) list_single_cmail_header_detail_pane_g1

0x53fc,	// (0x0001c572) list_single_cmail_header_detail_pane_g2_ParamLimits

0x53fc,	// (0x0001c572) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda2,	// (0x00026f18) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda2,	// (0x00026f18) list_single_cmail_header_detail_pane_g

0x5415,	// (0x0001c58b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5415,	// (0x0001c58b) list_single_cmail_header_detail_pane_t1

0x5453,	// (0x0001c5c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5453,	// (0x0001c5c9) list_single_cmail_header_editor_pane_bg

0x4ca2,	// (0x0001be18) list_cmail_body_pane_g1

0x5465,	// (0x0001c5db) list_cmail_body_pane_t1

0x3e00,	// (0x0001af76) list_single_cmail_header_editor_pane_bg_g1

0x0f5f,	// (0x000180d5) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3e10,	// (0x0001af86) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3e08,	// (0x0001af7e) list_single_cmail_header_editor_pane_bg_g1_copy3

0x408f,	// (0x0001b205) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3e30,	// (0x0001afa6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3e20,	// (0x0001af96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3e28,	// (0x0001af9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0f3f,	// (0x000180b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe4a7,	// (0x0002561d) calenote_gesture_pane_ParamLimits

0xe4a7,	// (0x0002561d) calenote_gesture_pane

0xe4c1,	// (0x00025637) calenote_window_pane_ParamLimits

0xe4c1,	// (0x00025637) calenote_window_pane

0x5473,	// (0x0001c5e9) popup_note_window_cp01

0xe4d9,	// (0x0002564f) calenote_swipe_1_pane_ParamLimits

0xe4d9,	// (0x0002564f) calenote_swipe_1_pane

0xdf18,	// (0x0002508e) calenote_swipe_2_pane_ParamLimits

0xdf18,	// (0x0002508e) calenote_swipe_2_pane

0x4ffa,	// (0x0001c170) calenote_swipe_1_pane_g1_ParamLimits

0x4ffa,	// (0x0001c170) calenote_swipe_1_pane_g1

0x5007,	// (0x0001c17d) calenote_swipe_1_pane_g2_ParamLimits

0x5007,	// (0x0001c17d) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x00026e47) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x00026e47) calenote_swipe_1_pane_g

0x5485,	// (0x0001c5fb) calenote_swipe_1_pane_t1_ParamLimits

0x5485,	// (0x0001c5fb) calenote_swipe_1_pane_t1

0x4ffa,	// (0x0001c170) calenote_swipe_2_pane_g1_ParamLimits

0x4ffa,	// (0x0001c170) calenote_swipe_2_pane_g1

0x54a4,	// (0x0001c61a) calenote_swipe_2_pane_g2_ParamLimits

0x54a4,	// (0x0001c61a) calenote_swipe_2_pane_g2

0x0001,

0xfdae,	// (0x00026f24) calenote_swipe_2_pane_g_ParamLimits

0xfdae,	// (0x00026f24) calenote_swipe_2_pane_g

0x54b0,	// (0x0001c626) calenote_swipe_2_pane_t1_ParamLimits

0x54b0,	// (0x0001c626) calenote_swipe_2_pane_t1

0x019e,	// (0x00017314) main_mup_navstr_pane

0xbb61,	// (0x00022cd7) main_mup3_pane_t7_ParamLimits

0xbb61,	// (0x00022cd7) main_mup3_pane_t7

0x763e,	// (0x0001e7b4) main_mp4_pane_g6_ParamLimits

0x763e,	// (0x0001e7b4) main_mp4_pane_g6

0x792f,	// (0x0001eaa5) main_image3_pane_t4_ParamLimits

0x792f,	// (0x0001eaa5) main_image3_pane_t4

0xe4ec,	// (0x00025662) popup_navstr_preview_pane_ParamLimits

0xe4ec,	// (0x00025662) popup_navstr_preview_pane

0xe4f8,	// (0x0002566e) scroll_navstr_pane_ParamLimits

0xe4f8,	// (0x0002566e) scroll_navstr_pane

0x019e,	// (0x00017314) bg_popup_preview_window_pane_cp04

0x54d7,	// (0x0001c64d) popup_navstr_preview_pane_t1

0xe504,	// (0x0002567a) scroll_navstr_pane_g1_ParamLimits

0xe504,	// (0x0002567a) scroll_navstr_pane_g1

0xe511,	// (0x00025687) scroll_navstr_pane_t1_ParamLimits

0xe511,	// (0x00025687) scroll_navstr_pane_t1

0x547c,	// (0x0001c5f2) bg_button_pane_cp014

0x547c,	// (0x0001c5f2) bg_button_pane_cp030

0xde04,	// (0x00024f7a) list_double_fisheye_pane_g4_ParamLimits

0xde04,	// (0x00024f7a) list_double_fisheye_pane_g4

0xde10,	// (0x00024f86) list_double_fisheye_pane_g5_ParamLimits

0xde10,	// (0x00024f86) list_double_fisheye_pane_g5

0x53e4,	// (0x0001c55a) sp_fs_scroll_pane_cp03

0x513d,	// (0x0001c2b3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5149,	// (0x0001c2bf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x00026e64) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5155,	// (0x0001c2cb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe3f1,	// (0x00025567) sp_fs_scroll_pane_cp02

0x0b41,	// (0x00017cb7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b41,	// (0x00017cb7) popup_sp_fs_calendar_preview_list_single_pane

0x019e,	// (0x00017314) main_cam6_pano_pane

0x020f,	// (0x00017385) main_mup3_pane_ParamLimits

0x019e,	// (0x00017314) main_phacti_pane

0xda04,	// (0x00024b7a) bg_button_pane_cp11

0xda1c,	// (0x00024b92) main_mobtv_info_pane_g2_ParamLimits

0xda1c,	// (0x00024b92) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x00026dc4) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x00026dc4) main_mobtv_info_pane_g

0xdbce,	// (0x00024d44) sc_clock_pane_t5_ParamLimits

0xdbce,	// (0x00024d44) sc_clock_pane_t5

0xdc77,	// (0x00024ded) main_radioblah_pane_g1_ParamLimits

0x4f46,	// (0x0001c0bc) main_radioblah_pane_t3_ParamLimits

0x4f46,	// (0x0001c0bc) main_radioblah_pane_t3

0x4f5e,	// (0x0001c0d4) main_radioblah_pane_t4_ParamLimits

0x4f5e,	// (0x0001c0d4) main_radioblah_pane_t4

0xdc95,	// (0x00024e0b) main_radioblah_text_pane_ParamLimits

0xdc95,	// (0x00024e0b) main_radioblah_text_pane

0xdca2,	// (0x00024e18) main_radioblah_info_pane_g1_ParamLimits

0xdd3b,	// (0x00024eb1) main_radioblah_info_pane_t4_ParamLimits

0xdd3b,	// (0x00024eb1) main_radioblah_info_pane_t4

0x020f,	// (0x00017385) main_sp_fs_calendar_pane

0xe523,	// (0x00025699) main_phacti_pane_g1

0xe52b,	// (0x000256a1) phacti_note_pane_ParamLimits

0xe52b,	// (0x000256a1) phacti_note_pane

0x54ee,	// (0x0001c664) phacti_term_pane_ParamLimits

0x54ee,	// (0x0001c664) phacti_term_pane

0x5503,	// (0x0001c679) phacti_note_pane_t1_ParamLimits

0x5503,	// (0x0001c679) phacti_note_pane_t1

0x551a,	// (0x0001c690) phacti_term_pane_g1

0x5522,	// (0x0001c698) phacti_term_pane_t1_ParamLimits

0x5522,	// (0x0001c698) phacti_term_pane_t1

0x554c,	// (0x0001c6c2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5554,	// (0x0001c6ca) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb8,	// (0x00026f2e) popup_sp_fs_calendar_preview_list_single_pane_g

0x555c,	// (0x0001c6d2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x555c,	// (0x0001c6d2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5572,	// (0x0001c6e8) aid_popup_sp_fs_bg_corner_pane

0x30c5,	// (0x0001a23b) popup_sp_fs_calendar_preview_bg_pane_g1

0x019e,	// (0x00017314) popup_sp_fs_calendar_preview_bg_pane

0x557a,	// (0x0001c6f0) popup_sp_fs_calendar_preview_list_pane

0x020f,	// (0x00017385) bg_main_sp_fs_cale_pane_ParamLimits

0x020f,	// (0x00017385) bg_main_sp_fs_cale_pane

0x558b,	// (0x0001c701) listscroll_cale_mrui_pane_ParamLimits

0x558b,	// (0x0001c701) listscroll_cale_mrui_pane

0x559f,	// (0x0001c715) listscroll_sp_fs_schedule_track_pane

0x55a8,	// (0x0001c71e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x55a8,	// (0x0001c71e) main_sp_fs_ctrlbar_pane_cp01

0x55b9,	// (0x0001c72f) main_sp_fs_ribbon_pane

0x55c1,	// (0x0001c737) popup_sp_fs_cale_preview_window

0xe56e,	// (0x000256e4) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe56e,	// (0x000256e4) list_single_sp_fs_schedule_track_pane

0x3bc4,	// (0x0001ad3a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3bc4,	// (0x0001ad3a) bg_sp_fs_highlight_list_pane_cp03

0xe582,	// (0x000256f8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe582,	// (0x000256f8) list_single_sp_fs_schedule_track_pane_g1

0xe58e,	// (0x00025704) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe58e,	// (0x00025704) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbd,	// (0x00026f33) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbd,	// (0x00026f33) list_single_sp_fs_schedule_track_pane_g

0xe59a,	// (0x00025710) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe59a,	// (0x00025710) list_single_sp_fs_schedule_track_pane_t1

0xe5b8,	// (0x0002572e) sp_fs_schedule_track_pane_ParamLimits

0xe5b8,	// (0x0002572e) sp_fs_schedule_track_pane

0x55d3,	// (0x0001c749) sp_fs_schedule_track_pane_g1

0x55db,	// (0x0001c751) sp_fs_schedule_track_pane_g2

0x55e3,	// (0x0001c759) sp_fs_schedule_track_pane_g3

0x55eb,	// (0x0001c761) sp_fs_schedule_track_pane_g4

0x55f3,	// (0x0001c769) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc2,	// (0x00026f38) sp_fs_schedule_track_pane_g

0x3e00,	// (0x0001af76) bg_sp_fs_schedule_viewer_highlight_g1

0x0f5f,	// (0x000180d5) bg_sp_fs_schedule_viewer_highlight_g2

0x3e08,	// (0x0001af7e) bg_sp_fs_schedule_viewer_highlight_g3

0x3e10,	// (0x0001af86) bg_sp_fs_schedule_viewer_highlight_g4

0x408f,	// (0x0001b205) bg_sp_fs_schedule_viewer_highlight_g5

0x3e20,	// (0x0001af96) bg_sp_fs_schedule_viewer_highlight_g6

0x3e28,	// (0x0001af9e) bg_sp_fs_schedule_viewer_highlight_g7

0x3e30,	// (0x0001afa6) bg_sp_fs_schedule_viewer_highlight_g8

0x0f3f,	// (0x000180b5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcd,	// (0x00026f43) bg_sp_fs_schedule_viewer_highlight_g

0x019e,	// (0x00017314) bg_main_sp_fs_ribbon_pane

0xe5ca,	// (0x00025740) main_sp_fs_ribbon_pane_g1

0x55fb,	// (0x0001c771) main_sp_fs_ribbon_pane_t1

0xe5d3,	// (0x00025749) main_sp_fs_ribbon_pane_t2

0x560a,	// (0x0001c780) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde0,	// (0x00026f56) main_sp_fs_ribbon_pane_t

0x5619,	// (0x0001c78f) main_sp_fs_ribbon_scheduler_pane

0x5621,	// (0x0001c797) bg_main_sp_fs_ribbon_pane_g1

0x562a,	// (0x0001c7a0) bg_main_sp_fs_ribbon_pane_g2

0x5633,	// (0x0001c7a9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde7,	// (0x00026f5d) bg_main_sp_fs_ribbon_pane_g

0x563b,	// (0x0001c7b1) main_sp_fs_ribbon_scheduler_pane_g1

0x5644,	// (0x0001c7ba) main_sp_fs_ribbon_scheduler_pane_g2

0x564d,	// (0x0001c7c3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdee,	// (0x00026f64) main_sp_fs_ribbon_scheduler_pane_g

0x5656,	// (0x0001c7cc) list_cale_mrui_pane

0xe5e2,	// (0x00025758) sp_fs_scroll_pane_cp07_ParamLimits

0xe5e2,	// (0x00025758) sp_fs_scroll_pane_cp07

0xe5f8,	// (0x0002576e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe5f8,	// (0x0002576e) bg_sp_fs_schedule_viewer_highlight

0x565f,	// (0x0001c7d5) list_single_sp_fs_schedule_track_pane_cp01

0x5667,	// (0x0001c7dd) list_sp_fs_schedule_track_pane

0x566f,	// (0x0001c7e5) sp_fs_scroll_pane_cp06_ParamLimits

0x566f,	// (0x0001c7e5) sp_fs_scroll_pane_cp06

0x30c5,	// (0x0001a23b) bgmain_sp_fs_calendar_pane_g1

0x5681,	// (0x0001c7f7) list_single_cale_mrui_pane_ParamLimits

0x5681,	// (0x0001c7f7) list_single_cale_mrui_pane

0x56a8,	// (0x0001c81e) list_single_cale_mrui_row_pane_ParamLimits

0x56a8,	// (0x0001c81e) list_single_cale_mrui_row_pane

0x56b5,	// (0x0001c82b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x56b5,	// (0x0001c82b) list_single_cale_mrui_row_pane_g1

0x56fa,	// (0x0001c870) list_single_cale_mrui_row_pane_t1_ParamLimits

0x56fa,	// (0x0001c870) list_single_cale_mrui_row_pane_t1

0xe605,	// (0x0002577b) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe605,	// (0x0002577b) list_single_cale_mrui_row_pane_t2

0x570c,	// (0x0001c882) list_single_cale_mrui_row_pane_t3_ParamLimits

0x570c,	// (0x0001c882) list_single_cale_mrui_row_pane_t3

0x573b,	// (0x0001c8b1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x573b,	// (0x0001c8b1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfc,	// (0x00026f72) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfc,	// (0x00026f72) list_single_cale_mrui_row_pane_t

0xe66b,	// (0x000257e1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe66b,	// (0x000257e1) list_single_cmail_header_editor_pane_bg_cp01

0xe68f,	// (0x00025805) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe68f,	// (0x00025805) list_single_cmail_header_editor_pane_bg_cp02

0xe6ab,	// (0x00025821) main_radioblah_text_pane_t1_ParamLimits

0xe6ab,	// (0x00025821) main_radioblah_text_pane_t1

0x576a,	// (0x0001c8e0) cam6_indi_pane_cp01

0x5772,	// (0x0001c8e8) cam6_mode_pane_cp01

0x577a,	// (0x0001c8f0) cam6_pano_pane

0x5783,	// (0x0001c8f9) cam6_zoom_pane_cp01

0x578d,	// (0x0001c903) cam6_pano_image_pane

0x5796,	// (0x0001c90c) cam6_pano_pane_g1

0x4ca2,	// (0x0001be18) cam6_pano_pane_g2

0x579f,	// (0x0001c915) cam6_pano_pane_g3

0x57a8,	// (0x0001c91e) cam6_pano_pane_g4

0x363d,	// (0x0001a7b3) cam6_pano_pane_g5

0x57b1,	// (0x0001c927) cam6_pano_pane_g6

0x57b9,	// (0x0001c92f) cam6_pano_pane_g7

0x57c1,	// (0x0001c937) cam6_pano_pane_g8

0x57ca,	// (0x0001c940) cam6_pano_pane_g9

0x0008,

0xfe05,	// (0x00026f7b) cam6_pano_pane_g

0x019e,	// (0x00017314) main_browser_tag_pane

0x54cf,	// (0x0001c645) grid_navstr_albumart_pane

0x57d5,	// (0x0001c94b) cell_navstr_albumart_pane_ParamLimits

0x57d5,	// (0x0001c94b) cell_navstr_albumart_pane

0x57f1,	// (0x0001c967) cell_navstr_albumart_pane_g1

0x29a9,	// (0x00019b1f) cell_navstr_albumart_pane_g2

0x29b9,	// (0x00019b2f) cell_navstr_albumart_pane_g3

0x29b1,	// (0x00019b27) cell_navstr_albumart_pane_g4

0x0003,

0xfe18,	// (0x00026f8e) cell_navstr_albumart_pane_g

0xe6c5,	// (0x0002583b) bt_list_pane_ParamLimits

0xe6c5,	// (0x0002583b) bt_list_pane

0xe6de,	// (0x00025854) bt_list_pane_t1

0xe6ed,	// (0x00025863) bt_list_pane_t2

0x0001,

0xfe21,	// (0x00026f97) bt_list_pane_t

0x019e,	// (0x00017314) main_cale_prevew_pane

0xe6fc,	// (0x00025872) popup_cale_preview_window_ParamLimits

0xe6fc,	// (0x00025872) popup_cale_preview_window

0x020f,	// (0x00017385) bg_popup_preview_window_pane_cp05_ParamLimits

0x020f,	// (0x00017385) bg_popup_preview_window_pane_cp05

0x57f9,	// (0x0001c96f) list_cale_preview_pane_ParamLimits

0x57f9,	// (0x0001c96f) list_cale_preview_pane

0xe717,	// (0x0002588d) list_double_cale_preview_pane_ParamLimits

0xe717,	// (0x0002588d) list_double_cale_preview_pane

0xe72b,	// (0x000258a1) list_single_cale_preview_pane_ParamLimits

0xe72b,	// (0x000258a1) list_single_cale_preview_pane

0xe743,	// (0x000258b9) list_single_cale_preview_pane_g1

0xe74b,	// (0x000258c1) list_single_cale_preview_pane_t1_ParamLimits

0xe74b,	// (0x000258c1) list_single_cale_preview_pane_t1

0xe760,	// (0x000258d6) list_double_cale_preview_pane_g1

0xe768,	// (0x000258de) list_double_cale_preview_pane_t1_ParamLimits

0xe768,	// (0x000258de) list_double_cale_preview_pane_t1

0xe77d,	// (0x000258f3) list_double_cale_preview_pane_t2_ParamLimits

0xe77d,	// (0x000258f3) list_double_cale_preview_pane_t2

0x0001,

0xfe26,	// (0x00026f9c) list_double_cale_preview_pane_t_ParamLimits

0xfe26,	// (0x00026f9c) list_double_cale_preview_pane_t

0x019e,	// (0x00017314) main_ezdial_pane

0x020f,	// (0x00017385) main_sp_fs_email_pane_ParamLimits

0xdf50,	// (0x000250c6) cmail_ddmenu_btn01_pane_ParamLimits

0xdf50,	// (0x000250c6) cmail_ddmenu_btn01_pane

0xdf6d,	// (0x000250e3) cmail_ddmenu_btn02_pane_ParamLimits

0xdf6d,	// (0x000250e3) cmail_ddmenu_btn02_pane

0xdf8b,	// (0x00025101) cmail_ddmenu_btn03_pane_ParamLimits

0xdf8b,	// (0x00025101) cmail_ddmenu_btn03_pane

0xdfb9,	// (0x0002512f) main_sp_fs_ctrlbar_pane_ParamLimits

0xdfd5,	// (0x0002514b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe3fb,	// (0x00025571) list_cmail_body_pane_ParamLimits

0x53f3,	// (0x0001c569) bg_button_pane_cp12

0x5408,	// (0x0001c57e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5408,	// (0x0001c57e) list_single_cmail_header_detail_pane_g3

0xe481,	// (0x000255f7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe481,	// (0x000255f7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda9,	// (0x00026f1f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda9,	// (0x00026f1f) list_single_cmail_header_detail_pane_t

0x5537,	// (0x0001c6ad) phacti_term_pane_t2_ParamLimits

0x5537,	// (0x0001c6ad) phacti_term_pane_t2

0x0001,

0xfdb3,	// (0x00026f29) phacti_term_pane_t_ParamLimits

0xfdb3,	// (0x00026f29) phacti_term_pane_t

0x5805,	// (0x0001c97b) aid_size_list_single_double

0xe795,	// (0x0002590b) popup_ezdial_listscroll_window

0xe7b5,	// (0x0002592b) popup_number_entry_window_cp01

0x16e5,	// (0x0001885b) bg_popup_call_pane_cp09

0x5811,	// (0x0001c987) ezdial_list_pane

0x5819,	// (0x0001c98f) scroll_pane_cp23

0x2ea4,	// (0x0001a01a) bg_button_pane_cp028_ParamLimits

0x2ea4,	// (0x0001a01a) bg_button_pane_cp028

0xe7c3,	// (0x00025939) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe7c3,	// (0x00025939) cmail_ddmenu_btn01_pane_g1

0xe7d3,	// (0x00025949) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe7d3,	// (0x00025949) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2b,	// (0x00026fa1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2b,	// (0x00026fa1) cmail_ddmenu_btn01_pane_g

0x5821,	// (0x0001c997) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5821,	// (0x0001c997) cmail_ddmenu_btn01_pane_t1

0x2b90,	// (0x00019d06) bg_button_pane_cp029_ParamLimits

0x2b90,	// (0x00019d06) bg_button_pane_cp029

0xe7d3,	// (0x00025949) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe7d3,	// (0x00025949) cmail_ddmenu_btn02_pane_g1

0xe7eb,	// (0x00025961) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe7eb,	// (0x00025961) cmail_ddmenu_btn02_pane_t1

0x3bc4,	// (0x0001ad3a) bg_button_pane_cp031_ParamLimits

0x3bc4,	// (0x0001ad3a) bg_button_pane_cp031

0xe7d3,	// (0x00025949) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe7d3,	// (0x00025949) cmail_ddmenu_btn03_pane_g1

0xe7eb,	// (0x00025961) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe7eb,	// (0x00025961) cmail_ddmenu_btn03_pane_t1

0xc3aa,	// (0x00023520) cell_dialer2_keypad_pane_t1_ParamLimits

0xc3c4,	// (0x0002353a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc3c4,	// (0x0002353a) cell_dialer2_keypad_pane_t1_copy1

0xd894,	// (0x00024a0a) ncimui_group_button_pane

0x020f,	// (0x00017385) main_sp_fs_calendar_pane_ParamLimits

0xe410,	// (0x00025586) list_single_cmail_header_caption_pane_ParamLimits

0x5582,	// (0x0001c6f8) aid_recal_txt_sm_pane

0x019e,	// (0x00017314) mian_recal_day_pane

0x55c1,	// (0x0001c737) popup_sp_fs_cale_preview_window_ParamLimits

0x019e,	// (0x00017314) list_recal_day_pane

0x5858,	// (0x0001c9ce) list_single_recal_day_pane_ParamLimits

0x5858,	// (0x0001c9ce) list_single_recal_day_pane

0x586a,	// (0x0001c9e0) list_single_recal_day_pane_g1_ParamLimits

0x586a,	// (0x0001c9e0) list_single_recal_day_pane_g1

0x5876,	// (0x0001c9ec) list_single_recal_day_pane_g2_ParamLimits

0x5876,	// (0x0001c9ec) list_single_recal_day_pane_g2

0x5886,	// (0x0001c9fc) list_single_recal_day_pane_g3_ParamLimits

0x5886,	// (0x0001c9fc) list_single_recal_day_pane_g3

0xe80f,	// (0x00025985) list_single_recal_day_pane_g4_ParamLimits

0xe80f,	// (0x00025985) list_single_recal_day_pane_g4

0x5892,	// (0x0001ca08) list_single_recal_day_pane_g5_ParamLimits

0x5892,	// (0x0001ca08) list_single_recal_day_pane_g5

0x58a2,	// (0x0001ca18) list_single_recal_day_pane_g6_ParamLimits

0x58a2,	// (0x0001ca18) list_single_recal_day_pane_g6

0x0004,

0xfe3a,	// (0x00026fb0) list_single_recal_day_pane_g_ParamLimits

0xfe3a,	// (0x00026fb0) list_single_recal_day_pane_g

0x58b9,	// (0x0001ca2f) list_single_recal_day_pane_t1

0x58cb,	// (0x0001ca41) list_single_recal_day_pane_t2

0x0001,

0xfe45,	// (0x00026fbb) list_single_recal_day_pane_t

0xe82f,	// (0x000259a5) ncimui_query_button_pane_ParamLimits

0xe82f,	// (0x000259a5) ncimui_query_button_pane

0xe83f,	// (0x000259b5) ncimui_query_button_pane_t1_ParamLimits

0xe83f,	// (0x000259b5) ncimui_query_button_pane_t1

0x58e0,	// (0x0001ca56) ncimui_query_button_pane_t2_ParamLimits

0x58e0,	// (0x0001ca56) ncimui_query_button_pane_t2

0x0001,

0xfe4a,	// (0x00026fc0) ncimui_query_button_pane_t_ParamLimits

0xfe4a,	// (0x00026fc0) ncimui_query_button_pane_t

0xe852,	// (0x000259c8) query_button_pane_ParamLimits

0xe852,	// (0x000259c8) query_button_pane

0x019e,	// (0x00017314) bg_button_pane_cp0028

0x58f3,	// (0x0001ca69) query_button_pane_t1

0xae4a,	// (0x00021fc0) main_tport_pane_ParamLimits

0xe31e,	// (0x00025494) bg_popup_window_pane_cp01_ParamLimits

0xe31e,	// (0x00025494) bg_popup_window_pane_cp01

0xe32b,	// (0x000254a1) heading_pane_cp08_ParamLimits

0xe32b,	// (0x000254a1) heading_pane_cp08

0xe339,	// (0x000254af) heading_pane_cp07_ParamLimits

0xe339,	// (0x000254af) heading_pane_cp07

0x53be,	// (0x0001c534) cell_tport_appsw_pane_g2

0x0002,

0xfd96,	// (0x00026f0c) cell_tport_appsw_pane_g

0x1868,	// (0x000189de) input_candi_list_open_g1

0x1152,	// (0x000182c8) list_cale_time_pane_g6_ParamLimits

0x1152,	// (0x000182c8) list_cale_time_pane_g6

0xb5ae,	// (0x00022724) aid_size_touch_calib_1_ParamLimits

0xb5ae,	// (0x00022724) aid_size_touch_calib_1

0xb5ba,	// (0x00022730) aid_size_touch_calib_2_ParamLimits

0xb5ba,	// (0x00022730) aid_size_touch_calib_2

0xb5c8,	// (0x0002273e) aid_size_touch_calib_3_ParamLimits

0xb5c8,	// (0x0002273e) aid_size_touch_calib_3

0xb5d8,	// (0x0002274e) aid_size_touch_calib_4_ParamLimits

0xb5d8,	// (0x0002274e) aid_size_touch_calib_4

0xb5e6,	// (0x0002275c) main_touch_calib_button_group_pane_ParamLimits

0xb5e6,	// (0x0002275c) main_touch_calib_button_group_pane

0xb5f4,	// (0x0002276a) main_touch_calib_pane_g1_ParamLimits

0xb600,	// (0x00022776) main_touch_calib_pane_g2_ParamLimits

0xb60c,	// (0x00022782) main_touch_calib_pane_g3_ParamLimits

0xb618,	// (0x0002278e) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x000268e6) main_touch_calib_pane_g_ParamLimits

0xb624,	// (0x0002279a) main_touch_calib_pane_t1_ParamLimits

0xb63b,	// (0x000227b1) main_touch_calib_pane_t2_ParamLimits

0xb652,	// (0x000227c8) main_touch_calib_pane_t3_ParamLimits

0xb666,	// (0x000227dc) main_touch_calib_pane_t4_ParamLimits

0xb67c,	// (0x000227f2) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x000268ef) main_touch_calib_pane_t_ParamLimits

0x3407,	// (0x0001a57d) list_single_fp_cale_pane_g3_ParamLimits

0x3407,	// (0x0001a57d) list_single_fp_cale_pane_g3

0x7b2b,	// (0x0001eca1) bg_button_pane_cp012_ParamLimits

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp03_ParamLimits

0x7f43,	// (0x0001f0b9) cell_vitu2_function_top_pane_g1_ParamLimits

0x7b2b,	// (0x0001eca1) bg_vkb2_func_pane_cp04_ParamLimits

0xd830,	// (0x000249a6) main_ncimui_button_group_pane_ParamLimits

0xd830,	// (0x000249a6) main_ncimui_button_group_pane

0xd882,	// (0x000249f8) main_ncimui_pane_t3_ParamLimits

0xd882,	// (0x000249f8) main_ncimui_pane_t3

0x54e5,	// (0x0001c65b) phacti_button_group_pane

0x5805,	// (0x0001c97b) aid_size_list_single_double_ParamLimits

0xe795,	// (0x0002590b) popup_ezdial_listscroll_window_ParamLimits

0xe7b5,	// (0x0002592b) popup_number_entry_window_cp01_ParamLimits

0xe85f,	// (0x000259d5) phacti_button_pane_ParamLimits

0xe85f,	// (0x000259d5) phacti_button_pane

0x019e,	// (0x00017314) bg_button_pane_cp14

0x5901,	// (0x0001ca77) phacti_button_pane_t1

0xe870,	// (0x000259e6) main_touch_calib_button_pane_ParamLimits

0xe870,	// (0x000259e6) main_touch_calib_button_pane

0x09b5,	// (0x00017b2b) bg_button_pane_cp18_ParamLimits

0x09b5,	// (0x00017b2b) bg_button_pane_cp18

0x590f,	// (0x0001ca85) main_touch_calib_button_pane_t1_ParamLimits

0x590f,	// (0x0001ca85) main_touch_calib_button_pane_t1

0x5925,	// (0x0001ca9b) main_touch_calib_button_pane_t2_ParamLimits

0x5925,	// (0x0001ca9b) main_touch_calib_button_pane_t2

0x0001,

0xfe4f,	// (0x00026fc5) main_touch_calib_button_pane_t_ParamLimits

0xfe4f,	// (0x00026fc5) main_touch_calib_button_pane_t

0x019e,	// (0x00017314) cell_ncimui_button_pane

0x019e,	// (0x00017314) bg_button_pane_cp032

0x5943,	// (0x0001cab9) cell_ncimui_button_pane_t1

0x7840,	// (0x0001e9b6) image3_infobar_pane_ParamLimits

0x7840,	// (0x0001e9b6) image3_infobar_pane

0xdbf0,	// (0x00024d66) fs_bigclock_status_pane_ParamLimits

0xdbf0,	// (0x00024d66) fs_bigclock_status_pane

0xdbfd,	// (0x00024d73) main_fs_bigclock_clock_pane_ParamLimits

0xdbfd,	// (0x00024d73) main_fs_bigclock_clock_pane

0xdc13,	// (0x00024d89) main_fs_bigclock_indi_pane_ParamLimits

0xdc13,	// (0x00024d89) main_fs_bigclock_indi_pane

0xdc45,	// (0x00024dbb) main_fs_bigclock_swipe_pane_ParamLimits

0xdc45,	// (0x00024dbb) main_fs_bigclock_swipe_pane

0x019e,	// (0x00017314) main_fs_clock_dumped_data

0x4daf,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4daf,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g1

0x4dd9,	// (0x0001bf4f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4dd9,	// (0x0001bf4f) list_single_fs_bigclock_indicator_pane_g2

0x4df3,	// (0x0001bf69) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4df3,	// (0x0001bf69) list_single_fs_bigclock_indicator_pane_g3

0x4e0d,	// (0x0001bf83) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4e0d,	// (0x0001bf83) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x00026df8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x00026df8) list_single_fs_bigclock_indicator_pane_g

0x4e38,	// (0x0001bfae) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4e38,	// (0x0001bfae) list_single_fs_bigclock_indicator_pane_t1

0x4e60,	// (0x0001bfd6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4e60,	// (0x0001bfd6) list_single_fs_bigclock_indicator_pane_t2

0x4e88,	// (0x0001bffe) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4e88,	// (0x0001bffe) list_single_fs_bigclock_indicator_pane_t3

0x4eb0,	// (0x0001c026) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4eb0,	// (0x0001c026) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x00026e03) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x00026e03) list_single_fs_bigclock_indicator_pane_t

0x5951,	// (0x0001cac7) image3_infobar_fav_pane_ParamLimits

0x5951,	// (0x0001cac7) image3_infobar_fav_pane

0x5961,	// (0x0001cad7) image3_infobar_loc_pane_ParamLimits

0x5961,	// (0x0001cad7) image3_infobar_loc_pane

0x5977,	// (0x0001caed) image3_infobar_time_pane_ParamLimits

0x5977,	// (0x0001caed) image3_infobar_time_pane

0x30c5,	// (0x0001a23b) image3_infobar_time_pane_g1

0x5987,	// (0x0001cafd) image3_infobar_time_pane_t1

0x30c5,	// (0x0001a23b) image3_infobar_loc_pane_g1

0x5995,	// (0x0001cb0b) image3_infobar_loc_pane_g2

0x0001,

0xfe54,	// (0x00026fca) image3_infobar_loc_pane_g

0x599d,	// (0x0001cb13) image3_infobar_loc_pane_t1

0x30c5,	// (0x0001a23b) image3_infobar_fav_pane_g1

0x59ab,	// (0x0001cb21) image3_infobar_fav_pane_g2

0x0001,

0xfe59,	// (0x00026fcf) image3_infobar_fav_pane_g

0x59b3,	// (0x0001cb29) fs_bigclock_status_battery_pane

0x59bc,	// (0x0001cb32) fs_bigclock_status_signal_pane

0x59c5,	// (0x0001cb3b) fs_bigclock_status_title_pane

0x59ce,	// (0x0001cb44) fs_bigclock_status_signal_pane_g1

0x59d7,	// (0x0001cb4d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5e,	// (0x00026fd4) fs_bigclock_status_signal_pane_g

0x59df,	// (0x0001cb55) fs_bigclock_status_battery_pane_g1

0x59e8,	// (0x0001cb5e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe63,	// (0x00026fd9) fs_bigclock_status_battery_pane_g

0x59f0,	// (0x0001cb66) fs_bigclock_status_title_pane_t1

0x30c5,	// (0x0001a23b) main_fs_bigclock_clock_pane_g1

0x59fe,	// (0x0001cb74) main_fs_bigclock_clock_pane_g2

0x59fe,	// (0x0001cb74) main_fs_bigclock_clock_pane_g3

0x59fe,	// (0x0001cb74) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe68,	// (0x00026fde) main_fs_bigclock_clock_pane_g

0x5a06,	// (0x0001cb7c) main_fs_bigclock_clock_pane_t1

0x5a14,	// (0x0001cb8a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe71,	// (0x00026fe7) main_fs_bigclock_clock_pane_t

0xe882,	// (0x000259f8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe882,	// (0x000259f8) list_single_fs_bigclock_indicator_pane

0xe893,	// (0x00025a09) list_single_fs_bigclock_pane_ParamLimits

0xe893,	// (0x00025a09) list_single_fs_bigclock_pane

0x5a2c,	// (0x0001cba2) main_fs_bigclock_indicator_pane_t1

0x5a3b,	// (0x0001cbb1) list_single_fs_bigclock_pane_g1

0x5a43,	// (0x0001cbb9) list_single_fs_bigclock_pane_t1

0x30c5,	// (0x0001a23b) main_fs_bigclock_swipe_pane_g1

0x5a86,	// (0x0001cbfc) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe82,	// (0x00026ff8) main_fs_bigclock_swipe_pane_g

0x5a8e,	// (0x0001cc04) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5a8e,	// (0x0001cc04) main_fs_bigclock_swipe_pane_t1

0x9dd1,	// (0x00020f47) call_type_pane_ParamLimits

0x019e,	// (0x00017314) main_btmg_pane

0x56e1,	// (0x0001c857) list_single_cale_mrui_row_pane_g2_ParamLimits

0x56e1,	// (0x0001c857) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf5,	// (0x00026f6b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf5,	// (0x00026f6b) list_single_cale_mrui_row_pane_g

0x583f,	// (0x0001c9b5) list_recal_vselct_arw_lo_pane

0x5847,	// (0x0001c9bd) list_recal_vselct_arw_up_pane

0x584f,	// (0x0001c9c5) list_recal_vselct_pane

0x5aab,	// (0x0001cc21) btmg_button_pane

0xe8e9,	// (0x00025a5f) main_btmg_pane_g1

0x019e,	// (0x00017314) bg_button_pane_cp044

0x5ab5,	// (0x0001cc2b) btmg_button_pane_t1

0x2b88,	// (0x00019cfe) aid_listscroll_gen

0x020f,	// (0x00017385) main_cntbar_detail_pane

0x53d4,	// (0x0001c54a) list_cmail_folder_pane

0x53e4,	// (0x0001c55a) sp_fs_scroll_pane_cp03_ParamLimits

0x5c81,	// (0x0001cdf7) list_single_fs_dyc_pane_cp01_ParamLimits

0x5c81,	// (0x0001cdf7) list_single_fs_dyc_pane_cp01

0x5ac3,	// (0x0001cc39) aid_size_cmail_indent

0x5acc,	// (0x0001cc42) list_single_dyc_row_pane_cp01

0xe911,	// (0x00025a87) cntbar_detail_list_pane_ParamLimits

0xe911,	// (0x00025a87) cntbar_detail_list_pane

0xe951,	// (0x00025ac7) main_cntbar_detail_cont_pane_ParamLimits

0xe951,	// (0x00025ac7) main_cntbar_detail_cont_pane

0x9d6b,	// (0x00020ee1) scroll_pane_cp032_ParamLimits

0x9d6b,	// (0x00020ee1) scroll_pane_cp032

0xe95d,	// (0x00025ad3) cntbar_detail_list_event_pane_ParamLimits

0xe95d,	// (0x00025ad3) cntbar_detail_list_event_pane

0xe91f,	// (0x00025a95) cntbar_detail_list_shct_pane

0x0fad,	// (0x00018123) aid_list_gen

0x5ad5,	// (0x0001cc4b) aid_scroll

0x5ade,	// (0x0001cc54) aid_size_touch_scroll_bar

0xe96d,	// (0x00025ae3) aid_list_double

0x5ae7,	// (0x0001cc5d) aid_list_single

0xe976,	// (0x00025aec) aid_list_single_lg

0x5af0,	// (0x0001cc66) aid_list_z_g_a_sm

0x5af8,	// (0x0001cc6e) aid_list_z_g_d

0x5b00,	// (0x0001cc76) aid_txt_z_prm

0xe97f,	// (0x00025af5) aid_txt_z_prm_cp01

0xe98d,	// (0x00025b03) aid_txt_z_sec

0xe99b,	// (0x00025b11) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe99b,	// (0x00025b11) main_cntbar_detail_cont_pane_g1

0xe9a8,	// (0x00025b1e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe9a8,	// (0x00025b1e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe87,	// (0x00026ffd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe87,	// (0x00026ffd) main_cntbar_detail_cont_pane_g

0x5b0e,	// (0x0001cc84) main_cntbar_detail_cont_pane_t1

0x5b1c,	// (0x0001cc92) main_cntbar_detail_cont_pane_t2

0x5b2a,	// (0x0001cca0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8c,	// (0x00027002) main_cntbar_detail_cont_pane_t

0xe9b4,	// (0x00025b2a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe9b4,	// (0x00025b2a) cell_cntbar_detail_list_shct_pane

0x5b38,	// (0x0001ccae) cntbar_detail_list_shct_pane_g1

0x5b41,	// (0x0001ccb7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe93,	// (0x00027009) cntbar_detail_list_shct_pane_g

0xe9c8,	// (0x00025b3e) cntbar_detail_list_event_pane_g1_ParamLimits

0xe9c8,	// (0x00025b3e) cntbar_detail_list_event_pane_g1

0xe9d4,	// (0x00025b4a) cntbar_detail_list_event_pane_g2_ParamLimits

0xe9d4,	// (0x00025b4a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe98,	// (0x0002700e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe98,	// (0x0002700e) cntbar_detail_list_event_pane_g

0xea42,	// (0x00025bb8) cntbar_detail_list_event_pane_t1_ParamLimits

0xea42,	// (0x00025bb8) cntbar_detail_list_event_pane_t1

0xea57,	// (0x00025bcd) cntbar_detail_list_event_pane_t2_ParamLimits

0xea57,	// (0x00025bcd) cntbar_detail_list_event_pane_t2

0x0002,

0xfea5,	// (0x0002701b) cntbar_detail_list_event_pane_t_ParamLimits

0xfea5,	// (0x0002701b) cntbar_detail_list_event_pane_t

0x30c5,	// (0x0001a23b) cell_cntbar_detail_list_shct_pane_g1

0xa135,	// (0x000212ab) navi_pane_mv_g3

0x020f,	// (0x00017385) main_cntbar_detail_pane_ParamLimits

0x019e,	// (0x00017314) main_notif_wgt_pane

0x7577,	// (0x0001e6ed) aid_tch_main_mp4_pane_g4

0x77b6,	// (0x0001e92c) popup_slider_window_cp02

0x5836,	// (0x0001c9ac) list_recal_day_event_pane

0xe8f1,	// (0x00025a67) cntbar_detail_btn_pane_ParamLimits

0xe8f1,	// (0x00025a67) cntbar_detail_btn_pane

0xe901,	// (0x00025a77) cntbar_detail_btn_pane_cp01_ParamLimits

0xe901,	// (0x00025a77) cntbar_detail_btn_pane_cp01

0xe91f,	// (0x00025a95) cntbar_detail_list_shct_pane_ParamLimits

0xe92b,	// (0x00025aa1) cntbar_detail_pane_g1_ParamLimits

0xe92b,	// (0x00025aa1) cntbar_detail_pane_g1

0xe93b,	// (0x00025ab1) cntbar_detail_pane_t1_ParamLimits

0xe93b,	// (0x00025ab1) cntbar_detail_pane_t1

0xe9e0,	// (0x00025b56) cntbar_detail_list_event_pane_g3_ParamLimits

0xe9e0,	// (0x00025b56) cntbar_detail_list_event_pane_g3

0xe9f8,	// (0x00025b6e) cntbar_detail_list_event_pane_g4_ParamLimits

0xe9f8,	// (0x00025b6e) cntbar_detail_list_event_pane_g4

0xea10,	// (0x00025b86) cntbar_detail_list_event_pane_g5_ParamLimits

0xea10,	// (0x00025b86) cntbar_detail_list_event_pane_g5

0xea28,	// (0x00025b9e) cntbar_detail_list_event_pane_g6_ParamLimits

0xea28,	// (0x00025b9e) cntbar_detail_list_event_pane_g6

0xea6c,	// (0x00025be2) cntbar_detail_list_event_pane_t3_ParamLimits

0xea6c,	// (0x00025be2) cntbar_detail_list_event_pane_t3

0xea7e,	// (0x00025bf4) popup_notif_wgt_window_ParamLimits

0xea7e,	// (0x00025bf4) popup_notif_wgt_window

0xea8e,	// (0x00025c04) popup_submenu_window_cp01_ParamLimits

0xea8e,	// (0x00025c04) popup_submenu_window_cp01

0x16e5,	// (0x0001885b) bg_popup_window_pane_cp10

0x5b4a,	// (0x0001ccc0) listscroll_notif_wgt_pane

0x5b54,	// (0x0001ccca) list_notif_wgt_window

0x5b5d,	// (0x0001ccd3) scroll_pane_cp033

0x5b66,	// (0x0001ccdc) list_notif_wgt_row_pane_ParamLimits

0x5b66,	// (0x0001ccdc) list_notif_wgt_row_pane

0x5b7a,	// (0x0001ccf0) aid_size_list_notif_wgt_del

0x5b83,	// (0x0001ccf9) list_notif_wgt_row_pane_g1

0x5b8b,	// (0x0001cd01) list_notif_wgt_row_pane_g2

0x5b93,	// (0x0001cd09) list_notif_wgt_row_pane_g3

0x0002,

0xfeac,	// (0x00027022) list_notif_wgt_row_pane_g

0x5b9c,	// (0x0001cd12) list_notif_wgt_row_pane_t1

0x5baa,	// (0x0001cd20) list_notif_wgt_row_pane_t2

0x5bb8,	// (0x0001cd2e) list_notif_wgt_row_pane_t3

0x0002,

0xfeb3,	// (0x00027029) list_notif_wgt_row_pane_t

0x40cf,	// (0x0001b245) list_recal_day_event_pane_g1

0x5bc6,	// (0x0001cd3c) list_recal_day_event_pane_t1

0x019e,	// (0x00017314) bg_button_pane_cp045

0x5bd5,	// (0x0001cd4b) cntbar_detail_btn_pane_t1

0x2b90,	// (0x00019d06) main_callh_pane_ParamLimits

0x2b90,	// (0x00019d06) main_callh_pane

0x019e,	// (0x00017314) main_coverflow0_pane

0x019e,	// (0x00017314) main_wgtman_pane

0xdc5d,	// (0x00024dd3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc5d,	// (0x00024dd3) main_fs_bigclock_unlock_btn_pane

0x53b6,	// (0x0001c52c) bg_button_pane_cp16

0xe3a4,	// (0x0002551a) cell_tport_appsw_pane_g3

0xea9e,	// (0x00025c14) cf0_flow_pane_ParamLimits

0xea9e,	// (0x00025c14) cf0_flow_pane

0x5be3,	// (0x0001cd59) listscroll_cf0_pane

0x5bec,	// (0x0001cd62) main_cf0_pane_g1

0xeaad,	// (0x00025c23) main_cf0_pane_t1_ParamLimits

0xeaad,	// (0x00025c23) main_cf0_pane_t1

0xeac1,	// (0x00025c37) main_cf0_pane_t2_ParamLimits

0xeac1,	// (0x00025c37) main_cf0_pane_t2

0x0001,

0xfeba,	// (0x00027030) main_cf0_pane_t_ParamLimits

0xfeba,	// (0x00027030) main_cf0_pane_t

0x5bf6,	// (0x0001cd6c) scroll_pane_cp11

0xead5,	// (0x00025c4b) cf0_flow_pane_g1

0xeadd,	// (0x00025c53) cf0_flow_pane_g2

0x0001,

0xfebf,	// (0x00027035) cf0_flow_pane_g

0xeae5,	// (0x00025c5b) cf0_flow_pane_t1

0x019e,	// (0x00017314) main_call6_pane

0x019e,	// (0x00017314) main_calllock_pane

0xeaf3,	// (0x00025c69) call6_btn_grp_pane_ParamLimits

0xeaf3,	// (0x00025c69) call6_btn_grp_pane

0xeb00,	// (0x00025c76) call6_pane_g1_ParamLimits

0xeb00,	// (0x00025c76) call6_pane_g1

0xeb10,	// (0x00025c86) popup_call6_1st_window_ParamLimits

0xeb10,	// (0x00025c86) popup_call6_1st_window

0xeb1e,	// (0x00025c94) popup_call6_2nd_window_ParamLimits

0xeb1e,	// (0x00025c94) popup_call6_2nd_window

0xeb2c,	// (0x00025ca2) cell_call6_btn_pane_ParamLimits

0xeb2c,	// (0x00025ca2) cell_call6_btn_pane

0x16e5,	// (0x0001885b) bg_popup_call2_in_pane_cp03

0x5c01,	// (0x0001cd77) popup_call6_1st_window_g1

0x5c09,	// (0x0001cd7f) popup_call6_1st_window_g2

0x5c11,	// (0x0001cd87) popup_call6_1st_window_g3

0x0002,

0xfec4,	// (0x0002703a) popup_call6_1st_window_g

0x5c19,	// (0x0001cd8f) popup_call6_1st_window_t1

0x5c28,	// (0x0001cd9e) popup_call6_1st_window_t2

0x5c38,	// (0x0001cdae) popup_call6_1st_window_t3

0x0002,

0xfecb,	// (0x00027041) popup_call6_1st_window_t

0x16e5,	// (0x0001885b) bg_popup_call2_in_pane_cp04

0x5c01,	// (0x0001cd77) popup_call6_2nd_window_g1

0x5c09,	// (0x0001cd7f) popup_call6_2nd_window_g2

0x5c11,	// (0x0001cd87) popup_call6_2nd_window_g3

0x0002,

0xfec4,	// (0x0002703a) popup_call6_2nd_window_g

0x5c19,	// (0x0001cd8f) popup_call6_2nd_window_t1

0x019e,	// (0x00017314) bg_button_pane_cp15

0x5c48,	// (0x0001cdbe) cell_call6_btn_pane_g1

0x5c51,	// (0x0001cdc7) cell_call6_btn_pane_t1

0xeb3b,	// (0x00025cb1) listscroll_wgtman_pane_ParamLimits

0xeb3b,	// (0x00025cb1) listscroll_wgtman_pane

0xeb59,	// (0x00025ccf) wgtman_btn_pane_ParamLimits

0xeb59,	// (0x00025ccf) wgtman_btn_pane

0x15ab,	// (0x00018721) aid_scroll_copy1

0x5c60,	// (0x0001cdd6) list_wgtman_pane

0xeb8e,	// (0x00025d04) wgtman_btn_pane_g1_ParamLimits

0xeb8e,	// (0x00025d04) wgtman_btn_pane_g1

0xebb6,	// (0x00025d2c) wgtman_btn_pane_t1_ParamLimits

0xebb6,	// (0x00025d2c) wgtman_btn_pane_t1

0x5c6a,	// (0x0001cde0) wgtman_btn_pane_t2_ParamLimits

0x5c6a,	// (0x0001cde0) wgtman_btn_pane_t2

0x0001,

0xfed2,	// (0x00027048) wgtman_btn_pane_t_ParamLimits

0xfed2,	// (0x00027048) wgtman_btn_pane_t

0xebed,	// (0x00025d63) listrow_wgtman_pane_ParamLimits

0xebed,	// (0x00025d63) listrow_wgtman_pane

0xebfe,	// (0x00025d74) listrow_wgtman_pane_g1

0xec07,	// (0x00025d7d) listrow_wgtman_pane_g2

0x0001,

0xfed7,	// (0x0002704d) listrow_wgtman_pane_g

0xec11,	// (0x00025d87) listrow_wgtman_pane_t1

0xec1f,	// (0x00025d95) listrow_wgtman_pane_t2

0x0001,

0xfedc,	// (0x00027052) listrow_wgtman_pane_t

0xec2d,	// (0x00025da3) wait_bar_pane_cp09

0x5cac,	// (0x0001ce22) main_calllock_btn_pane

0x5cb6,	// (0x0001ce2c) main_calllock_pane_g1

0x019e,	// (0x00017314) bg_button_pane_cp17

0x5cc2,	// (0x0001ce38) main_calllock_btn_pane_g1

0x5ccb,	// (0x0001ce41) main_calllock_btn_pane_t1

0x019e,	// (0x00017314) main_dialer3_pane

0x019e,	// (0x00017314) main_fmrd2_pane

0x30c5,	// (0x0001a23b) main_fs_bigclock_unlock_btn_pane_g1

0x5ce2,	// (0x0001ce58) main_fs_bigclock_unlock_btn_pane_t1

0xec35,	// (0x00025dab) area_fmrd2_info_pane_ParamLimits

0xec35,	// (0x00025dab) area_fmrd2_info_pane

0xec41,	// (0x00025db7) area_fmrd2_visual_pane_ParamLimits

0xec41,	// (0x00025db7) area_fmrd2_visual_pane

0xec4f,	// (0x00025dc5) fmrd2_indi_pane_ParamLimits

0xec4f,	// (0x00025dc5) fmrd2_indi_pane

0xec5c,	// (0x00025dd2) area_fmrd2_visual_pane_g1

0xec64,	// (0x00025dda) area_fmrd2_visual_pane_t1

0xec74,	// (0x00025dea) area_fmrd2_visual_pane_t2

0xec84,	// (0x00025dfa) area_fmrd2_visual_pane_t3

0x0002,

0xfee6,	// (0x0002705c) area_fmrd2_visual_pane_t

0xec94,	// (0x00025e0a) area_fmrd2_info_pane_g1

0xec9c,	// (0x00025e12) area_fmrd2_info_pane_t1

0xecac,	// (0x00025e22) area_fmrd2_info_pane_t2

0xecbc,	// (0x00025e32) area_fmrd2_info_pane_t3

0xeccc,	// (0x00025e42) area_fmrd2_info_pane_t4

0x0003,

0xfeed,	// (0x00027063) area_fmrd2_info_pane_t

0xecdc,	// (0x00025e52) fmrd2_indi_pane_t1

0xecec,	// (0x00025e62) fmrd2_indi_pane_t2

0xecfc,	// (0x00025e72) fmrd2_indi_pane_t3

0x0002,

0xfef6,	// (0x0002706c) fmrd2_indi_pane_t

0x4e1c,	// (0x0001bf92) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4e1c,	// (0x0001bf92) list_single_fs_bigclock_indicator_pane_g5

0x4ec5,	// (0x0001c03b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4ec5,	// (0x0001c03b) list_single_fs_bigclock_indicator_pane_t5

0xe541,	// (0x000256b7) aid_cell_bcale_month_pane_ParamLimits

0xe541,	// (0x000256b7) aid_cell_bcale_month_pane

0xe54d,	// (0x000256c3) bcale_month_pane_ParamLimits

0xe54d,	// (0x000256c3) bcale_month_pane

0xe55d,	// (0x000256d3) bcale_preview_pane_ParamLimits

0xe55d,	// (0x000256d3) bcale_preview_pane

0x5a43,	// (0x0001cbb9) list_single_fs_bigclock_pane_t1_ParamLimits

0x5a62,	// (0x0001cbd8) list_single_fs_bigclock_pane_t2_ParamLimits

0x5a62,	// (0x0001cbd8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7d,	// (0x00026ff3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00026ff3) list_single_fs_bigclock_pane_t

0x5cda,	// (0x0001ce50) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee1,	// (0x00027057) main_fs_bigclock_unlock_btn_pane_g

0xed0c,	// (0x00025e82) aid_dia3_key_size_ParamLimits

0xed0c,	// (0x00025e82) aid_dia3_key_size

0xed18,	// (0x00025e8e) aid_dia3_listrow_size_ParamLimits

0xed18,	// (0x00025e8e) aid_dia3_listrow_size

0xed26,	// (0x00025e9c) dia3_keypad_fun_pane_ParamLimits

0xed26,	// (0x00025e9c) dia3_keypad_fun_pane

0xed36,	// (0x00025eac) dia3_keypad_num_pane_ParamLimits

0xed36,	// (0x00025eac) dia3_keypad_num_pane

0xed46,	// (0x00025ebc) dia3_listscroll_pane_ParamLimits

0xed46,	// (0x00025ebc) dia3_listscroll_pane

0xed56,	// (0x00025ecc) dia3_numentry_pane_ParamLimits

0xed56,	// (0x00025ecc) dia3_numentry_pane

0x5cf0,	// (0x0001ce66) dia3_list_pane

0x5cfb,	// (0x0001ce71) scroll_pane_cp12

0x019e,	// (0x00017314) bg_dia3_numentry_pane

0x5d06,	// (0x0001ce7c) dia3_numentry_pane_t1

0xed66,	// (0x00025edc) cell_dia3_key_num_pane

0xed6e,	// (0x00025ee4) cell_dia3_key0_fun_pane_ParamLimits

0xed6e,	// (0x00025ee4) cell_dia3_key0_fun_pane

0xed7b,	// (0x00025ef1) cell_dia3_key1_fun_pane_ParamLimits

0xed7b,	// (0x00025ef1) cell_dia3_key1_fun_pane

0xed88,	// (0x00025efe) dia3_listrow_pane

0x4b0c,	// (0x0001bc82) bg_dia3_numentry_pane_g1

0x019e,	// (0x00017314) bg_button_pane_cp21

0x5d15,	// (0x0001ce8b) cell_dia3_key_num_pane_t1

0x5d23,	// (0x0001ce99) cell_dia3_key_num_pane_t2

0x5d32,	// (0x0001cea8) cell_dia3_key_num_pane_t3

0x5d41,	// (0x0001ceb7) cell_dia3_key_num_pane_t4

0x0003,

0xfefd,	// (0x00027073) cell_dia3_key_num_pane_t

0x019e,	// (0x00017314) bg_button_pane_cp19

0xed95,	// (0x00025f0b) cell_dia3_key0_fun_pane_g1

0x019e,	// (0x00017314) bg_button_pane_cp20

0xed9d,	// (0x00025f13) cell_dia3_key1_fun_pane_g1

0xeda5,	// (0x00025f1b) area_left_week_number_pane

0x4422,	// (0x0001b598) area_top_day_name_pane

0xedae,	// (0x00025f24) frame_month_view_pane

0xedb8,	// (0x00025f2e) grid_month_view_pane

0xedc2,	// (0x00025f38) cell_top_day_name_pane_ParamLimits

0xedc2,	// (0x00025f38) cell_top_day_name_pane

0xedde,	// (0x00025f54) cell_area_left_week_number_pane_ParamLimits

0xedde,	// (0x00025f54) cell_area_left_week_number_pane

0xedf2,	// (0x00025f68) cell_month_view_pane_ParamLimits

0xedf2,	// (0x00025f68) cell_month_view_pane

0x5d50,	// (0x0001cec6) frm_month_g1

0xee11,	// (0x00025f87) frm_month_g2

0xee1b,	// (0x00025f91) frm_month_g3

0xee25,	// (0x00025f9b) frm_month_g4

0xee2f,	// (0x00025fa5) frm_month_g5

0xee39,	// (0x00025faf) frm_month_g6

0xee43,	// (0x00025fb9) frm_month_g7

0x5d59,	// (0x0001cecf) frm_month_g8

0xee4d,	// (0x00025fc3) frm_month_g9

0xee56,	// (0x00025fcc) frm_month_g10

0xee5f,	// (0x00025fd5) frm_month_g11

0xee68,	// (0x00025fde) frm_month_g12

0xee71,	// (0x00025fe7) frm_month_g13

0xee7c,	// (0x00025ff2) frm_month_g14

0xee87,	// (0x00025ffd) frm_month_g15

0xee92,	// (0x00026008) frm_month_g16

0x000f,

0xff06,	// (0x0002707c) frm_month_g

0xee9d,	// (0x00026013) cell_top_day_name_pane_t1

0xeeac,	// (0x00026022) cell_area_left_week_number_pane_g1

0xee9d,	// (0x00026013) cell_area_left_week_number_pane_t1

0x30c5,	// (0x0001a23b) cell_month_view_pane_g1

0xeeb4,	// (0x0002602a) cell_month_view_pane_t1

0x019e,	// (0x00017314) main_fps_pane

0x5103,	// (0x0001c279) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5103,	// (0x0001c279) cmail_ddmenu_btn02_pane_cp1

0x511f,	// (0x0001c295) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x511f,	// (0x0001c295) cmail_ddmenu_btn02_pane_cp2

0xe7df,	// (0x00025955) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe7df,	// (0x00025955) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe30,	// (0x00026fa6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe30,	// (0x00026fa6) cmail_ddmenu_btn02_pane_g

0xe7fd,	// (0x00025973) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7fd,	// (0x00025973) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe35,	// (0x00026fab) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe35,	// (0x00026fab) cmail_ddmenu_btn02_pane_t

0xeec3,	// (0x00026039) fps_text_pane_ParamLimits

0xeec3,	// (0x00026039) fps_text_pane

0xeed0,	// (0x00026046) main_fps_pane_g1_ParamLimits

0xeed0,	// (0x00026046) main_fps_pane_g1

0xeedc,	// (0x00026052) wait_bar_pane_cp010_ParamLimits

0xeedc,	// (0x00026052) wait_bar_pane_cp010

0xeee8,	// (0x0002605e) fps_text_pane_t1_ParamLimits

0xeee8,	// (0x0002605e) fps_text_pane_t1

0xc4ff,	// (0x00023675) cam4_image_uncrop_pane_g1

0xc508,	// (0x0002367e) cam4_image_uncrop_pane_g2

0xc511,	// (0x00023687) cam4_image_uncrop_pane_g3

0xc51a,	// (0x00023690) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00026a7e) cam4_image_uncrop_pane_g

0xed88,	// (0x00025efe) dia3_listrow_pane_ParamLimits

0x019e,	// (0x00017314) main_phob2_pane

0xe37e,	// (0x000254f4) cell_tport_appsw_pane_cp02_ParamLimits

0xe37e,	// (0x000254f4) cell_tport_appsw_pane_cp02

0xe38d,	// (0x00025503) cell_tport_appsw_pane_cp03_ParamLimits

0xe38d,	// (0x00025503) cell_tport_appsw_pane_cp03

0x019e,	// (0x00017314) phob2_contact_card_pane

0x019e,	// (0x00017314) phob2_listscroll_pane

0x5d62,	// (0x0001ced8) phob2_list_pane

0x5d6a,	// (0x0001cee0) scroll_pane_cp034

0xef01,	// (0x00026077) phob2_cc_data_pane_ParamLimits

0xef01,	// (0x00026077) phob2_cc_data_pane

0xef1d,	// (0x00026093) phob2_cc_listscroll_pane_ParamLimits

0xef1d,	// (0x00026093) phob2_cc_listscroll_pane

0xef39,	// (0x000260af) list_double_large_graphic_phob2_pane_ParamLimits

0xef39,	// (0x000260af) list_double_large_graphic_phob2_pane

0xef51,	// (0x000260c7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef51,	// (0x000260c7) list_double_large_graphic_phob2_pane_g1

0xef5e,	// (0x000260d4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef5e,	// (0x000260d4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff27,	// (0x0002709d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff27,	// (0x0002709d) list_double_large_graphic_phob2_pane_g

0xef6a,	// (0x000260e0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef6a,	// (0x000260e0) list_double_large_graphic_phob2_pane_t1

0xef7f,	// (0x000260f5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xef7f,	// (0x000260f5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2c,	// (0x000270a2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2c,	// (0x000270a2) list_double_large_graphic_phob2_pane_t

0x019e,	// (0x00017314) list_highlight_pane_cp024

0x5d72,	// (0x0001cee8) phob2_cc_button_pane

0xef91,	// (0x00026107) phob2_cc_data_pane_g1_ParamLimits

0xef91,	// (0x00026107) phob2_cc_data_pane_g1

0xef9d,	// (0x00026113) phob2_cc_data_pane_g2_ParamLimits

0xef9d,	// (0x00026113) phob2_cc_data_pane_g2

0x0001,

0xff31,	// (0x000270a7) phob2_cc_data_pane_g_ParamLimits

0xff31,	// (0x000270a7) phob2_cc_data_pane_g

0xefa9,	// (0x0002611f) phob2_cc_data_pane_t1_ParamLimits

0xefa9,	// (0x0002611f) phob2_cc_data_pane_t1

0xefbb,	// (0x00026131) phob2_cc_data_pane_t2_ParamLimits

0xefbb,	// (0x00026131) phob2_cc_data_pane_t2

0xefcd,	// (0x00026143) phob2_cc_data_pane_t3_ParamLimits

0xefcd,	// (0x00026143) phob2_cc_data_pane_t3

0x0002,

0xff36,	// (0x000270ac) phob2_cc_data_pane_t_ParamLimits

0xff36,	// (0x000270ac) phob2_cc_data_pane_t

0x5d7a,	// (0x0001cef0) phob2_cc_list_pane_ParamLimits

0x5d7a,	// (0x0001cef0) phob2_cc_list_pane

0x417a,	// (0x0001b2f0) scroll_pane_cp035_ParamLimits

0x417a,	// (0x0001b2f0) scroll_pane_cp035

0x020f,	// (0x00017385) bg_button_pane_cp033

0x5d86,	// (0x0001cefc) phob2_cc_button_pane_g1

0x5d92,	// (0x0001cf08) phob2_cc_button_pane_t1

0x5da7,	// (0x0001cf1d) phob2_cc_button_pane_t2

0x0001,

0xff3d,	// (0x000270b3) phob2_cc_button_pane_t

0xefdf,	// (0x00026155) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xefdf,	// (0x00026155) list_double_large_graphic_phob2_cc_pane

0xeffb,	// (0x00026171) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeffb,	// (0x00026171) list_double_large_graphic_phob2_cc_pane_g1

0xf00c,	// (0x00026182) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf00c,	// (0x00026182) list_double_large_graphic_phob2_cc_pane_g2

0xf01b,	// (0x00026191) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf01b,	// (0x00026191) list_double_large_graphic_phob2_cc_pane_g3

0xf02a,	// (0x000261a0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf02a,	// (0x000261a0) list_double_large_graphic_phob2_cc_pane_g4

0xf03b,	// (0x000261b1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf03b,	// (0x000261b1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff42,	// (0x000270b8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff42,	// (0x000270b8) list_double_large_graphic_phob2_cc_pane_g

0xf04a,	// (0x000261c0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf04a,	// (0x000261c0) list_double_large_graphic_phob2_cc_pane_t1

0xf073,	// (0x000261e9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf073,	// (0x000261e9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4d,	// (0x000270c3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4d,	// (0x000270c3) list_double_large_graphic_phob2_cc_pane_t

0x5db9,	// (0x0001cf2f) list_highlight_pane_cp025_ParamLimits

0x5db9,	// (0x0001cf2f) list_highlight_pane_cp025

0x020f,	// (0x00017385) bg_button_pane_cp033_ParamLimits

0x5d86,	// (0x0001cefc) phob2_cc_button_pane_g1_ParamLimits

0x5d92,	// (0x0001cf08) phob2_cc_button_pane_t1_ParamLimits

0x5da7,	// (0x0001cf1d) phob2_cc_button_pane_t2_ParamLimits

0xff3d,	// (0x000270b3) phob2_cc_button_pane_t_ParamLimits

0x83ca,	// (0x0001f540) popup_wgtman_window

0x3f1e,	// (0x0001b094) scroll_pane_cp038

0xeb76,	// (0x00025cec) wgtman_btn_pane_cp_01_ParamLimits

0xeb76,	// (0x00025cec) wgtman_btn_pane_cp_01

0x5dc7,	// (0x0001cf3d) wgtman_content_pane

0x5dd0,	// (0x0001cf46) wgtman_heading_pane

0x019e,	// (0x00017314) bg_heading_pane_cp02

0x5dd9,	// (0x0001cf4f) wgtman_heading_pane_g1

0x5de1,	// (0x0001cf57) wgtman_heading_pane_t1

0x5def,	// (0x0001cf65) scroll_pane_cp036

0x5df7,	// (0x0001cf6d) wgtman_list_pane

0x5dff,	// (0x0001cf75) wgtman_list_pane_t1_ParamLimits

0x5dff,	// (0x0001cf75) wgtman_list_pane_t1

0x799c,	// (0x0001eb12) cam4_grid_pane

0xcc9c,	// (0x00023e12) bg_button_pane_cp015_ParamLimits

0xccae,	// (0x00023e24) bg_button_pane_cp016_ParamLimits

0xccc1,	// (0x00023e37) bg_button_pane_cp017_ParamLimits

0xcd17,	// (0x00023e8d) popup_vitu2_query_window_g3_ParamLimits

0xcd17,	// (0x00023e8d) popup_vitu2_query_window_g3

0xcdd6,	// (0x00023f4c) popup_vitu2_query_window_t6_ParamLimits

0xcdd6,	// (0x00023f4c) popup_vitu2_query_window_t6

0xce01,	// (0x00023f77) popup_vitu2_query_window_t7_ParamLimits

0xce01,	// (0x00023f77) popup_vitu2_query_window_t7

0x5c98,	// (0x0001ce0e) cam4_grid_pane_g1

0x5ca1,	// (0x0001ce17) cam4_grid_pane_g2

0x5e22,	// (0x0001cf98) cam4_grid_pane_g3

0x5e2b,	// (0x0001cfa1) cam4_grid_pane_g4

0x0003,

0xff52,	// (0x000270c8) cam4_grid_pane_g

0x8e5f,	// (0x0001ffd5) aid_placing_vt_slider_lsc_ParamLimits

0x9192,	// (0x00020308) vidtel_button_pane_ParamLimits

0x9192,	// (0x00020308) vidtel_button_pane

0x5e36,	// (0x0001cfac) bg_button_pane_cp034

0xf09c,	// (0x00026212) vidtel_button_pane_g1

0x5e40,	// (0x0001cfb6) vidtel_button_pane_t1

0x405d,	// (0x0001b1d3) aid_size_vtel_slider_touch

0x417a,	// (0x0001b2f0) scroll_pane_cp039

0x4b4a,	// (0x0001bcc0) ncim_query_button_pane_cp01_ParamLimits

0x4b69,	// (0x0001bcdf) ncimui_query_pane_g1_ParamLimits

0x020f,	// (0x00017385) input_focus_pane_cp012_ParamLimits

0x4b8e,	// (0x0001bd04) ncim_query_entry_pane_t1_ParamLimits

0x417a,	// (0x0001b2f0) scroll_pane_cp039_ParamLimits

0xa0a7,	// (0x0002121d) navi_pane_bcale_mc_g1

0xa0af,	// (0x00021225) navi_pane_bcale_mc_t1

0x516a,	// (0x0001c2e0) main_sp_fs_email_pane_g1

0x5172,	// (0x0001c2e8) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x00026e69) main_sp_fs_email_pane_g

0x56ed,	// (0x0001c863) list_single_cale_mrui_row_pane_g3_ParamLimits

0x56ed,	// (0x0001c863) list_single_cale_mrui_row_pane_g3

0xe825,	// (0x0002599b) list_single_recal_day_pane_g5_event_pane

0x58b1,	// (0x0001ca27) list_single_recal_day_pane_g7

0x5e4e,	// (0x0001cfc4) list_recal_day_event_pane_cp01

0x5e57,	// (0x0001cfcd) list_recal_vselct_arw_lo_pane_cp01

0x5e5f,	// (0x0001cfd5) list_recal_vselct_arw_up_pane_cp01

0x5e67,	// (0x0001cfdd) list_recal_vselct_pane_cp01

0x40cf,	// (0x0001b245) list_recal_day_event_pane_cp01_g1

0x5e71,	// (0x0001cfe7) list_recal_day_event_pane_cp01_t1

0x58b9,	// (0x0001ca2f) list_single_recal_day_pane_t1_ParamLimits

0x58cb,	// (0x0001ca41) list_single_recal_day_pane_t2_ParamLimits

0xfe45,	// (0x00026fbb) list_single_recal_day_pane_t_ParamLimits

0x096b,	// (0x00017ae1) bg_notes_pane_ParamLimits

0x0979,	// (0x00017aef) list_notes_pane_ParamLimits

0x865a,	// (0x0001f7d0) scroll_pane_cp06_ParamLimits

0x09b5,	// (0x00017b2b) main_notes_pane_ParamLimits

0x019e,	// (0x00017314) main_welc_pane

0xf0a4,	// (0x0002621a) main_welc_body_pane_ParamLimits

0xf0a4,	// (0x0002621a) main_welc_body_pane

0xf0b3,	// (0x00026229) main_welc_opti_pane_ParamLimits

0xf0b3,	// (0x00026229) main_welc_opti_pane

0xf0c2,	// (0x00026238) main_welc_pane_t1_ParamLimits

0xf0c2,	// (0x00026238) main_welc_pane_t1

0xe56e,	// (0x000256e4) main_welc_body_row_pane_ParamLimits

0xe56e,	// (0x000256e4) main_welc_body_row_pane

0xf0d6,	// (0x0002624c) main_welc_opti_row_pane_ParamLimits

0xf0d6,	// (0x0002624c) main_welc_opti_row_pane

0x5e7f,	// (0x0001cff5) main_welc_opti_row_pane_g1

0x5e87,	// (0x0001cffd) main_welc_opti_row_pane_t1

0x5e96,	// (0x0001d00c) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
