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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007bf88 };

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
0x591f,	// (0x000818a7) Screen

0x5929,	// (0x000818b1) application_window

0x597b,	// (0x00081903) area_bottom_pane_ParamLimits

0x597b,	// (0x00081903) area_bottom_pane

0x59cc,	// (0x00081954) area_top_pane_ParamLimits

0x59cc,	// (0x00081954) area_top_pane

0x5a22,	// (0x000819aa) call_video_uplink_pane_ParamLimits

0x5a22,	// (0x000819aa) call_video_uplink_pane

0x5a5b,	// (0x000819e3) main_pane_ParamLimits

0x5a5b,	// (0x000819e3) main_pane

0x1828,	// (0x0007d7b0) context_pane

0x88cb,	// (0x00084853) navi_pane

0x88eb,	// (0x00084873) popup_cale_events_window_ParamLimits

0x88eb,	// (0x00084873) popup_cale_events_window

0x183b,	// (0x0007d7c3) popup_mup_playback_window

0x8902,	// (0x0008488a) signal_pane

0xe0df,	// (0x0008a067) main_browser_pane

0xe290,	// (0x0008a218) main_burst_pane

0x876b,	// (0x000846f3) main_calc_pane

0x17c6,	// (0x0007d74e) main_cale_day_pane

0x8778,	// (0x00084700) main_cale_month_pane

0x17c6,	// (0x0007d74e) main_cale_week_pane

0xe290,	// (0x0008a218) main_call_pane

0xddb3,	// (0x00089d3b) main_call_poc_pane

0xe290,	// (0x0008a218) main_camera_pane

0xe290,	// (0x0008a218) main_chi_dic_pane

0xea78,	// (0x0008aa00) main_clock_pane

0xddb3,	// (0x00089d3b) main_fmradio_pane

0xe290,	// (0x0008a218) main_graph_messa_pane

0xddb3,	// (0x00089d3b) main_help_pane

0xe0df,	// (0x0008a067) main_im_pane

0xe00e,	// (0x00089f96) main_image_pane_ParamLimits

0xe00e,	// (0x00089f96) main_image_pane

0xddb3,	// (0x00089d3b) main_location2_pane

0xe290,	// (0x0008a218) main_location_pane

0xe00e,	// (0x00089f96) main_messa_pane

0xddb3,	// (0x00089d3b) main_mp2_pane

0xe290,	// (0x0008a218) main_mp_pane

0xddb3,	// (0x00089d3b) main_msg_pane

0xddb3,	// (0x00089d3b) main_mup_eq_pane

0xddb3,	// (0x00089d3b) main_mup_pane

0xe0df,	// (0x0008a067) main_notes_pane

0xddb3,	// (0x00089d3b) main_pec_pane

0xddb3,	// (0x00089d3b) main_phob_pane

0xddb3,	// (0x00089d3b) main_pinb_pane

0xddb3,	// (0x00089d3b) main_postcard_pane

0xddb3,	// (0x00089d3b) main_qdial_pane

0xe290,	// (0x0008a218) main_skin_pane

0xddb3,	// (0x00089d3b) main_smil2_pane

0xe290,	// (0x0008a218) main_smil_pane

0xe290,	// (0x0008a218) main_video_pane

0xe290,	// (0x0008a218) main_video_tele_pane

0xe00e,	// (0x00089f96) main_viewer_pane_ParamLimits

0xe00e,	// (0x00089f96) main_viewer_pane

0xe290,	// (0x0008a218) main_vorec_pane

0x87c5,	// (0x0008474d) popup_blid_sat_info_window_ParamLimits

0x87c5,	// (0x0008474d) popup_blid_sat_info_window

0x87e1,	// (0x00084769) popup_dyc_status_message_window_ParamLimits

0x87e1,	// (0x00084769) popup_dyc_status_message_window

0x87ed,	// (0x00084775) popup_grid_large_graphic_window_ParamLimits

0x87ed,	// (0x00084775) popup_grid_large_graphic_window

0x8862,	// (0x000847ea) popup_loc_request_window_ParamLimits

0x8862,	// (0x000847ea) popup_loc_request_window

0x88a5,	// (0x0008482d) popup_wml_address_window_ParamLimits

0x88a5,	// (0x0008482d) popup_wml_address_window

0x8677,	// (0x000845ff) call_muted_g1

0x83b4,	// (0x0008433c) popup_call_audio_conf_window_ParamLimits

0x83b4,	// (0x0008433c) popup_call_audio_conf_window

0x8687,	// (0x0008460f) popup_call_audio_first_window_ParamLimits

0x8687,	// (0x0008460f) popup_call_audio_first_window

0x86bb,	// (0x00084643) popup_call_audio_in_window_ParamLimits

0x86bb,	// (0x00084643) popup_call_audio_in_window

0x86d7,	// (0x0008465f) popup_call_audio_out_window_ParamLimits

0x86d7,	// (0x0008465f) popup_call_audio_out_window

0x86f3,	// (0x0008467b) popup_call_audio_second_window_ParamLimits

0x86f3,	// (0x0008467b) popup_call_audio_second_window

0x871b,	// (0x000846a3) popup_call_audio_wait_window_ParamLimits

0x871b,	// (0x000846a3) popup_call_audio_wait_window

0x873a,	// (0x000846c2) popup_number_entry_window_ParamLimits

0x873a,	// (0x000846c2) popup_number_entry_window

0xd96e,	// (0x000898f6) bg_popup_call_pane_cp05_ParamLimits

0xd96e,	// (0x000898f6) bg_popup_call_pane_cp05

0xd98e,	// (0x00089916) popup_number_entry_window_t1

0xd9a1,	// (0x00089929) popup_number_entry_window_t2

0xd9b3,	// (0x0008993b) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008b052) popup_number_entry_window_t

0xd9f9,	// (0x00089981) text_title_cp2

0xda0c,	// (0x00089994) bg_popup_call_pane_cp_ParamLimits

0xda0c,	// (0x00089994) bg_popup_call_pane_cp

0xda1a,	// (0x000899a2) call_thumbnail_pane

0xda22,	// (0x000899aa) popup_call_audio_in_window_g1_ParamLimits

0xda22,	// (0x000899aa) popup_call_audio_in_window_g1

0xda2e,	// (0x000899b6) popup_call_audio_in_window_g2_ParamLimits

0xda2e,	// (0x000899b6) popup_call_audio_in_window_g2

0xda3a,	// (0x000899c2) popup_call_audio_in_window_g3_ParamLimits

0xda3a,	// (0x000899c2) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0008b05b) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0008b05b) popup_call_audio_in_window_g

0xda46,	// (0x000899ce) popup_call_audio_in_window_t1_ParamLimits

0xda46,	// (0x000899ce) popup_call_audio_in_window_t1

0xda61,	// (0x000899e9) popup_call_audio_in_window_t2_ParamLimits

0xda61,	// (0x000899e9) popup_call_audio_in_window_t2

0xda7c,	// (0x00089a04) popup_call_audio_in_window_t3_ParamLimits

0xda7c,	// (0x00089a04) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008b062) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008b062) popup_call_audio_in_window_t

0xda0c,	// (0x00089994) bg_popup_call_pane_cp01_ParamLimits

0xda0c,	// (0x00089994) bg_popup_call_pane_cp01

0xda1a,	// (0x000899a2) call_thumbnail_pane_cp02

0xda8f,	// (0x00089a17) call_type_pane_cp022

0xda97,	// (0x00089a1f) popup_call_audio_out_window_g1_ParamLimits

0xda97,	// (0x00089a1f) popup_call_audio_out_window_g1

0xdaa9,	// (0x00089a31) popup_call_audio_out_window_g2_ParamLimits

0xdaa9,	// (0x00089a31) popup_call_audio_out_window_g2

0xdab5,	// (0x00089a3d) popup_call_audio_out_window_g3_ParamLimits

0xdab5,	// (0x00089a3d) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008b069) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008b069) popup_call_audio_out_window_g

0xdac7,	// (0x00089a4f) popup_call_audio_out_window_t1_ParamLimits

0xdac7,	// (0x00089a4f) popup_call_audio_out_window_t1

0xdadf,	// (0x00089a67) popup_call_audio_out_window_t2_ParamLimits

0xdadf,	// (0x00089a67) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008b070) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008b070) popup_call_audio_out_window_t

0xdaf4,	// (0x00089a7c) bg_popup_call_pane_ParamLimits

0xdaf4,	// (0x00089a7c) bg_popup_call_pane

0x5c25,	// (0x00081bad) call_thumbnail_pane_cp_ParamLimits

0x5c25,	// (0x00081bad) call_thumbnail_pane_cp

0xdb78,	// (0x00089b00) call_type_pane_cp01_ParamLimits

0xdb78,	// (0x00089b00) call_type_pane_cp01

0xdbbc,	// (0x00089b44) popup_call_audio_first_window_g1_ParamLimits

0xdbbc,	// (0x00089b44) popup_call_audio_first_window_g1

0xdc08,	// (0x00089b90) popup_call_audio_first_window_g2_ParamLimits

0xdc08,	// (0x00089b90) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008b075) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008b075) popup_call_audio_first_window_g

0xdc4c,	// (0x00089bd4) popup_call_audio_first_window_t1_ParamLimits

0xdc4c,	// (0x00089bd4) popup_call_audio_first_window_t1

0xdcf8,	// (0x00089c80) popup_call_audio_first_window_t4_ParamLimits

0xdcf8,	// (0x00089c80) popup_call_audio_first_window_t4

0xdd84,	// (0x00089d0c) popup_call_audio_first_window_t5_ParamLimits

0xdd84,	// (0x00089d0c) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008b07a) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008b07a) popup_call_audio_first_window_t

0xddb3,	// (0x00089d3b) bg_popup_call_pane_cp02

0xddbd,	// (0x00089d45) call_type_pane_cp023

0xddc5,	// (0x00089d4d) popup_call_audio_wait_window_g1

0xddcd,	// (0x00089d55) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008b081) popup_call_audio_wait_window_g

0xddd5,	// (0x00089d5d) popup_call_audio_wait_window_t3

0xdde3,	// (0x00089d6b) bg_popup_call_pane_cp03_ParamLimits

0xdde3,	// (0x00089d6b) bg_popup_call_pane_cp03

0xde43,	// (0x00089dcb) call_thumbnail_pane_cp011_ParamLimits

0xde43,	// (0x00089dcb) call_thumbnail_pane_cp011

0xde4f,	// (0x00089dd7) call_type_pane_cp034_ParamLimits

0xde4f,	// (0x00089dd7) call_type_pane_cp034

0xde8b,	// (0x00089e13) popup_call_audio_second_window_g1_ParamLimits

0xde8b,	// (0x00089e13) popup_call_audio_second_window_g1

0xdec7,	// (0x00089e4f) popup_call_audio_second_window_g2_ParamLimits

0xdec7,	// (0x00089e4f) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008b086) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008b086) popup_call_audio_second_window_g

0xdf03,	// (0x00089e8b) popup_call_audio_second_window_t1_ParamLimits

0xdf03,	// (0x00089e8b) popup_call_audio_second_window_t1

0xdf84,	// (0x00089f0c) popup_call_audio_second_window_t2_ParamLimits

0xdf84,	// (0x00089f0c) popup_call_audio_second_window_t2

0xdfba,	// (0x00089f42) popup_call_audio_second_window_t3_ParamLimits

0xdfba,	// (0x00089f42) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008b08b) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008b08b) popup_call_audio_second_window_t

0xddb3,	// (0x00089d3b) bg_popup_call_pane_cp04

0xdff0,	// (0x00089f78) list_conf_pane

0xdff8,	// (0x00089f80) popup_call_audio_conf_window_t1

0xe006,	// (0x00089f8e) call_thumbnail_pane_g1

0xe00e,	// (0x00089f96) bg_pinb_pane_ParamLimits

0xe00e,	// (0x00089f96) bg_pinb_pane

0xe01c,	// (0x00089fa4) find_pinb_pane

0xe025,	// (0x00089fad) listscroll_pinb_pane_ParamLimits

0xe025,	// (0x00089fad) listscroll_pinb_pane

0xe034,	// (0x00089fbc) pinb_bg_pane_g1

0x5c49,	// (0x00081bd1) pinb_bg_pane_g2

0x5c53,	// (0x00081bdb) pinb_bg_pane_g3

0x5c5d,	// (0x00081be5) pinb_bg_pane_g4

0x5c67,	// (0x00081bef) pinb_bg_pane_g5

0x5c71,	// (0x00081bf9) pinb_bg_pane_g6

0x5c7c,	// (0x00081c04) pinb_bg_pane_g7

0x5c87,	// (0x00081c0f) pinb_bg_pane_g8

0x5c90,	// (0x00081c18) pinb_bg_pane_g9

0x5c98,	// (0x00081c20) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008b092) pinb_bg_pane_g

0x5cb5,	// (0x00081c3d) grid_pinb_pane

0x5cbe,	// (0x00081c46) list_pinb_pane

0x5cc9,	// (0x00081c51) scroll_pane_cp01_ParamLimits

0x5cc9,	// (0x00081c51) scroll_pane_cp01

0xe03e,	// (0x00089fc6) find_pinb_pane_g1_ParamLimits

0xe03e,	// (0x00089fc6) find_pinb_pane_g1

0xe056,	// (0x00089fde) find_pinb_pane_t1

0xe068,	// (0x00089ff0) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008b0ac) find_pinb_pane_t

0xe07d,	// (0x0008a005) input_focus_pane_cp01_ParamLimits

0xe07d,	// (0x0008a005) input_focus_pane_cp01

0x5cd9,	// (0x00081c61) cell_pinb_pane_ParamLimits

0x5cd9,	// (0x00081c61) cell_pinb_pane

0x5cf2,	// (0x00081c7a) cell_pinb_pane_g1_ParamLimits

0x5cf2,	// (0x00081c7a) cell_pinb_pane_g1

0x5d03,	// (0x00081c8b) cell_pinb_pane_g2_ParamLimits

0x5d03,	// (0x00081c8b) cell_pinb_pane_g2

0xe089,	// (0x0008a011) cell_pinb_pane_g3_ParamLimits

0xe089,	// (0x0008a011) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008b0b1) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008b0b1) cell_pinb_pane_g

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp01

0x5d0f,	// (0x00081c97) list_pinb_item_pane_ParamLimits

0x5d0f,	// (0x00081c97) list_pinb_item_pane

0xddb3,	// (0x00089d3b) list_highlight_pane_cp02

0x5d24,	// (0x00081cac) list_pinb_item_pane_g1_ParamLimits

0x5d24,	// (0x00081cac) list_pinb_item_pane_g1

0xe095,	// (0x0008a01d) list_pinb_item_pane_g2_ParamLimits

0xe095,	// (0x0008a01d) list_pinb_item_pane_g2

0x5d31,	// (0x00081cb9) list_pinb_item_pane_g3_ParamLimits

0x5d31,	// (0x00081cb9) list_pinb_item_pane_g3

0x5d40,	// (0x00081cc8) list_pinb_item_pane_g4_ParamLimits

0x5d40,	// (0x00081cc8) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0008b0b8) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0008b0b8) list_pinb_item_pane_g

0x5d4c,	// (0x00081cd4) list_pinb_item_pane_t1_ParamLimits

0x5d4c,	// (0x00081cd4) list_pinb_item_pane_t1

0x5d7d,	// (0x00081d05) calc_display_pane

0x5d97,	// (0x00081d1f) calc_paper_pane

0x5daf,	// (0x00081d37) grid_calc_pane

0xddb3,	// (0x00089d3b) bg_list_pane_cp01

0x5dd3,	// (0x00081d5b) clock_g1

0x5ddb,	// (0x00081d63) clock_g2

0x0001,

0xf139,	// (0x0008b0c1) clock_g

0x5de3,	// (0x00081d6b) clock_t1_ParamLimits

0x5de3,	// (0x00081d6b) clock_t1

0x5df8,	// (0x00081d80) clock_t2_ParamLimits

0x5df8,	// (0x00081d80) clock_t2

0x5e0a,	// (0x00081d92) clock_t3_ParamLimits

0x5e0a,	// (0x00081d92) clock_t3

0x5e1c,	// (0x00081da4) clock_t4_ParamLimits

0x5e1c,	// (0x00081da4) clock_t4

0x5e2e,	// (0x00081db6) clock_t5_ParamLimits

0x5e2e,	// (0x00081db6) clock_t5

0x5e43,	// (0x00081dcb) clock_t6_ParamLimits

0x5e43,	// (0x00081dcb) clock_t6

0x5e55,	// (0x00081ddd) clock_t7_ParamLimits

0x5e55,	// (0x00081ddd) clock_t7

0x5e67,	// (0x00081def) clock_t8_ParamLimits

0x5e67,	// (0x00081def) clock_t8

0x5e79,	// (0x00081e01) clock_t9_ParamLimits

0x5e79,	// (0x00081e01) clock_t9

0x0008,

0xf13e,	// (0x0008b0c6) clock_t_ParamLimits

0xf13e,	// (0x0008b0c6) clock_t

0xe0a1,	// (0x0008a029) popup_clock_analogue_window_cp02

0xe0a1,	// (0x0008a029) popup_clock_digital_window_cp01

0xe0a9,	// (0x0008a031) listscroll_help_pane

0xddb3,	// (0x00089d3b) phob_pre_status_pane

0xe0b3,	// (0x0008a03b) grid_qdial_pane

0xe00e,	// (0x00089f96) listscroll_mce_pane

0xe00e,	// (0x00089f96) bg_notes_pane

0xe0bd,	// (0x0008a045) list_notes_pane

0x5e8b,	// (0x00081e13) scroll_pane_cp06

0xe0cb,	// (0x0008a053) bg_calc_paper_pane

0x5e98,	// (0x00081e20) list_calc_pane

0xe0df,	// (0x0008a067) bg_calc_display_pane

0x5eb2,	// (0x00081e3a) calc_display_pane_t1

0x5ec7,	// (0x00081e4f) calc_display_pane_t2

0x5edc,	// (0x00081e64) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008b0d9) calc_display_pane_t

0x5eee,	// (0x00081e76) cell_calc_pane_ParamLimits

0x5eee,	// (0x00081e76) cell_calc_pane

0xe0eb,	// (0x0008a073) bg_calc_paper_pane_g1

0xe0f7,	// (0x0008a07f) bg_calc_paper_pane_g2

0xe103,	// (0x0008a08b) bg_calc_paper_pane_g3

0xe10f,	// (0x0008a097) bg_calc_paper_pane_g4

0xe11b,	// (0x0008a0a3) bg_calc_paper_pane_g5

0x5f15,	// (0x00081e9d) bg_calc_paper_pane_g6

0x5f24,	// (0x00081eac) bg_calc_paper_pane_g7

0x5f33,	// (0x00081ebb) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008b0e0) bg_calc_paper_pane_g

0x5f42,	// (0x00081eca) calc_bg_paper_pane_g9

0x5f51,	// (0x00081ed9) list_calc_item_pane_ParamLimits

0x5f51,	// (0x00081ed9) list_calc_item_pane

0xe127,	// (0x0008a0af) list_calc_item_pane_g1

0x5f69,	// (0x00081ef1) list_calc_item_pane_t1_ParamLimits

0x5f69,	// (0x00081ef1) list_calc_item_pane_t1

0x5f7b,	// (0x00081f03) list_calc_item_pane_t2_ParamLimits

0x5f7b,	// (0x00081f03) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008b0f1) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008b0f1) list_calc_item_pane_t

0xe134,	// (0x0008a0bc) cell_calc_pane_g1

0xe13e,	// (0x0008a0c6) grid_highlight_pane_cp02

0xe160,	// (0x0008a0e8) bg_calc_display_pane_g1

0x5fa9,	// (0x00081f31) bg_calc_display_pane_g2

0xe169,	// (0x0008a0f1) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008b0fb) bg_calc_display_pane_g

0x5fb3,	// (0x00081f3b) cell_qdial_pane_ParamLimits

0x5fb3,	// (0x00081f3b) cell_qdial_pane

0x5fc5,	// (0x00081f4d) cell_qdial_pane_g1_ParamLimits

0x5fc5,	// (0x00081f4d) cell_qdial_pane_g1

0x5fd2,	// (0x00081f5a) cell_qdial_pane_g2_ParamLimits

0x5fd2,	// (0x00081f5a) cell_qdial_pane_g2

0xe172,	// (0x0008a0fa) cell_qdial_pane_g3_ParamLimits

0xe172,	// (0x0008a0fa) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008b102) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008b102) cell_qdial_pane_g

0x5ff0,	// (0x00081f78) cell_qdial_pane_t1_ParamLimits

0x5ff0,	// (0x00081f78) cell_qdial_pane_t1

0x6008,	// (0x00081f90) cell_qdial_pane_t2_ParamLimits

0x6008,	// (0x00081f90) cell_qdial_pane_t2

0x601b,	// (0x00081fa3) cell_qdial_pane_t3_ParamLimits

0x601b,	// (0x00081fa3) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0008b10b) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0008b10b) cell_qdial_pane_t

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp04

0xe17e,	// (0x0008a106) thumbnail_qdial_pane_ParamLimits

0xe17e,	// (0x0008a106) thumbnail_qdial_pane

0xe1da,	// (0x0008a162) list_help_pane

0xe1e3,	// (0x0008a16b) scroll_pane_cp02

0x602e,	// (0x00081fb6) help_list_pane_t1_ParamLimits

0x602e,	// (0x00081fb6) help_list_pane_t1

0x604a,	// (0x00081fd2) bg_notes_pane_g2

0x6052,	// (0x00081fda) bg_notes_pane_g3

0x605a,	// (0x00081fe2) notes_bg_pane_g1

0x6062,	// (0x00081fea) notes_bg_pane_g4

0x606a,	// (0x00081ff2) notes_bg_pane_g5

0x6072,	// (0x00081ffa) notes_bg_pane_g6

0x607a,	// (0x00082002) notes_bg_pane_g7

0x6082,	// (0x0008200a) notes_bg_pane_g8

0x608a,	// (0x00082012) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008b129) notes_bg_pane_g

0x6092,	// (0x0008201a) list_notes_text_pane_ParamLimits

0x6092,	// (0x0008201a) list_notes_text_pane

0xe1ec,	// (0x0008a174) list_notes_text_pane_g1

0x06d1,	// (0x0007c659) list_notes_text_pane_t1

0x60b3,	// (0x0008203b) listscroll_cale_week_pane

0x60dd,	// (0x00082065) bg_cale_heading_pane

0x60fa,	// (0x00082082) bg_cale_pane_cp01

0x611c,	// (0x000820a4) cale_week_corner_pane

0x613b,	// (0x000820c3) cale_week_day_heading_pane

0x615d,	// (0x000820e5) cale_week_scroll_pane_g1

0x6175,	// (0x000820fd) cale_week_scroll_pane_g2

0x618d,	// (0x00082115) cale_week_scroll_pane_g3

0x61a5,	// (0x0008212d) cale_week_scroll_pane_g4

0x61bd,	// (0x00082145) cale_week_scroll_pane_g5

0x61d5,	// (0x0008215d) cale_week_scroll_pane_g6

0x61ed,	// (0x00082175) cale_week_scroll_pane_g7

0x6205,	// (0x0008218d) cale_week_scroll_pane_g8

0x621d,	// (0x000821a5) cale_week_scroll_pane_g9

0x623a,	// (0x000821c2) cale_week_scroll_pane_g10

0x6257,	// (0x000821df) cale_week_scroll_pane_g11

0x6274,	// (0x000821fc) cale_week_scroll_pane_g12

0x6291,	// (0x00082219) cale_week_scroll_pane_g13

0x62ae,	// (0x00082236) cale_week_scroll_pane_g14

0x62cb,	// (0x00082253) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008b138) cale_week_scroll_pane_g

0x6300,	// (0x00082288) cale_week_time_pane

0x6318,	// (0x000822a0) grid_cale_week_pane

0xe221,	// (0x0008a1a9) scroll_pane_cp08

0x6337,	// (0x000822bf) cell_cale_week_pane_ParamLimits

0x6337,	// (0x000822bf) cell_cale_week_pane

0x63ad,	// (0x00082335) cale_week_day_heading_pane_t1

0x63d5,	// (0x0008235d) cale_week_day_heading_pane_t2

0x6402,	// (0x0008238a) cale_week_day_heading_pane_t3

0x642f,	// (0x000823b7) cale_week_day_heading_pane_t4

0x645c,	// (0x000823e4) cale_week_day_heading_pane_t5

0x6489,	// (0x00082411) cale_week_day_heading_pane_t6

0x64b6,	// (0x0008243e) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008b159) cale_week_day_heading_pane_t

0xe23e,	// (0x0008a1c6) bg_cale_side_pane

0x64de,	// (0x00082466) cale_week_time_pane_t1

0x6522,	// (0x000824aa) cale_week_time_pane_t2

0x6566,	// (0x000824ee) cale_week_time_pane_t3

0x65aa,	// (0x00082532) cale_week_time_pane_t4

0x65ee,	// (0x00082576) cale_week_time_pane_t5

0x6632,	// (0x000825ba) cale_week_time_pane_t6

0x6676,	// (0x000825fe) cale_week_time_pane_t7

0x66ba,	// (0x00082642) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008b168) cale_week_time_pane_t

0x66fe,	// (0x00082686) cell_cale_week_pane_g2

0x6722,	// (0x000826aa) cell_cale_week_pane_g3_ParamLimits

0x6722,	// (0x000826aa) cell_cale_week_pane_g3

0xe24c,	// (0x0008a1d4) grid_highlight_pane_cp07

0xe254,	// (0x0008a1dc) listscroll_gms_pane

0xe25e,	// (0x0008a1e6) grid_gms_pane

0xe267,	// (0x0008a1ef) listscroll_gms_pane_g1

0xe26f,	// (0x0008a1f7) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008b179) listscroll_gms_pane_g

0x673a,	// (0x000826c2) scroll_pane_cp010

0x6743,	// (0x000826cb) cell_gms_pane_ParamLimits

0x6743,	// (0x000826cb) cell_gms_pane

0x6754,	// (0x000826dc) cell_gms_pane_g1

0xe277,	// (0x0008a1ff) cell_gms_pane_g2

0xe1ec,	// (0x0008a174) cell_gms_pane_g3

0xe27f,	// (0x0008a207) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008b17e) cell_gms_pane_g

0xe288,	// (0x0008a210) grid_highlight_pane_cp09

0x8625,	// (0x000845ad) phob_pre_status_pane_g1

0x862d,	// (0x000845b5) phob_pre_status_pane_g2

0x8635,	// (0x000845bd) phob_pre_status_pane_g3

0x863d,	// (0x000845c5) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0008b57c) phob_pre_status_pane_g

0x864d,	// (0x000845d5) phob_pre_status_pane_t1

0x865b,	// (0x000845e3) phob_pre_status_pane_t2

0x8669,	// (0x000845f1) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0008b587) phob_pre_status_pane_t

0xe290,	// (0x0008a218) bg_list_pane_cp05

0x6764,	// (0x000826ec) grid_vorec_pane

0x676c,	// (0x000826f4) vorec_t1

0x677a,	// (0x00082702) vorec_t2

0x6788,	// (0x00082710) vorec_t3

0x6796,	// (0x0008271e) vorec_t4

0xd940,	// (0x000898c8) vorec_t5

0xd94e,	// (0x000898d6) vorec_t6

0x0004,

0xf1ff,	// (0x0008b187) vorec_t

0xd95c,	// (0x000898e4) wait_bar_pane_cp01

0x67b2,	// (0x0008273a) cell_vorec_pane_ParamLimits

0x67b2,	// (0x0008273a) cell_vorec_pane

0x67c5,	// (0x0008274d) cell_vorec_pane_g1

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp05

0x67db,	// (0x00082763) cams_zoom_pane

0x67e7,	// (0x0008276f) image_vga_pane

0x67f4,	// (0x0008277c) main_camera_pane_g1

0x6800,	// (0x00082788) main_camera_pane_g2

0x680c,	// (0x00082794) main_camera_pane_g3

0x6818,	// (0x000827a0) main_camera_pane_g4

0x6824,	// (0x000827ac) main_camera_pane_g5

0x6830,	// (0x000827b8) main_camera_pane_g6

0x683c,	// (0x000827c4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008b192) main_camera_pane_g

0x6848,	// (0x000827d0) main_camera_pane_t1

0x685a,	// (0x000827e2) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008b1a3) main_camera_pane_t

0x687e,	// (0x00082806) cams_zoom_pane_cp_ParamLimits

0x687e,	// (0x00082806) cams_zoom_pane_cp

0x68a2,	// (0x0008282a) image_cif_pane_ParamLimits

0x68a2,	// (0x0008282a) image_cif_pane

0x68bc,	// (0x00082844) image_subqcif_pane

0x68c4,	// (0x0008284c) main_video_pane_g1_ParamLimits

0x68c4,	// (0x0008284c) main_video_pane_g1

0x68e4,	// (0x0008286c) main_video_pane_g2_ParamLimits

0x68e4,	// (0x0008286c) main_video_pane_g2

0x6912,	// (0x0008289a) main_video_pane_g3_ParamLimits

0x6912,	// (0x0008289a) main_video_pane_g3

0x693b,	// (0x000828c3) main_video_pane_g4_ParamLimits

0x693b,	// (0x000828c3) main_video_pane_g4

0x6964,	// (0x000828ec) main_video_pane_g5_ParamLimits

0x6964,	// (0x000828ec) main_video_pane_g5

0xe2a4,	// (0x0008a22c) main_video_pane_g6_ParamLimits

0xe2a4,	// (0x0008a22c) main_video_pane_g6

0x0006,

0xf220,	// (0x0008b1a8) main_video_pane_g_ParamLimits

0xf220,	// (0x0008b1a8) main_video_pane_g

0x6986,	// (0x0008290e) main_video_pane_t1_ParamLimits

0x6986,	// (0x0008290e) main_video_pane_t1

0xe2be,	// (0x0008a246) cams_zoom_pane_g1

0xe2c7,	// (0x0008a24f) cams_zoom_pane_g2

0xe2d0,	// (0x0008a258) cams_zoom_pane_g3

0xe2d9,	// (0x0008a261) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008b1b7) cams_zoom_pane_g

0x69d0,	// (0x00082958) grid_cams_pane

0x69dc,	// (0x00082964) linegrid_cams_pane

0x69e8,	// (0x00082970) cell_cams_pane_ParamLimits

0x69e8,	// (0x00082970) cell_cams_pane

0xe2e2,	// (0x0008a26a) cams_burst_image_pane

0xe2ea,	// (0x0008a272) cell_cams_pane_g1

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp03

0xe134,	// (0x0008a0bc) mp_bg_pane_g1

0xddb3,	// (0x00089d3b) bg_list_pane_cp03

0x16eb,	// (0x0007d673) bg_mp_pane

0x16f3,	// (0x0007d67b) grid_mp_pane

0x16fb,	// (0x0007d683) media_player_g1

0x1703,	// (0x0007d68b) media_player_t1

0x1711,	// (0x0007d699) media_player_t2

0x171f,	// (0x0007d6a7) media_player_t3

0x172d,	// (0x0007d6b5) media_player_t4

0x173b,	// (0x0007d6c3) media_player_t5

0x1749,	// (0x0007d6d1) media_player_t6

0x1757,	// (0x0007d6df) media_player_t7

0x0006,

0xf5de,	// (0x0008b566) media_player_t

0x1765,	// (0x0007d6ed) wait_bar_pane_cp02

0xf5c3,	// (0x0008b54b) main_usb_pane_t

0x861c,	// (0x000845a4) cell_mp_pane

0xe134,	// (0x0008a0bc) cell_mp_pane_g1

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp06

0xe2f2,	// (0x0008a27a) grid_skin_colour_pane

0xe2fa,	// (0x0008a282) list_highlight_pane_cp03

0x6b0f,	// (0x00082a97) skin_g1

0xe302,	// (0x0008a28a) skin_t1

0xe311,	// (0x0008a299) skin_t2

0x0001,

0xf264,	// (0x0008b1ec) skin_t

0x6b17,	// (0x00082a9f) cell_skin_colour_pane_ParamLimits

0x6b17,	// (0x00082a9f) cell_skin_colour_pane

0xe31f,	// (0x0008a2a7) cell_skin_colour_pane_g1

0x6b8d,	// (0x00082b15) call_video_g1_ParamLimits

0x6b8d,	// (0x00082b15) call_video_g1

0x6b99,	// (0x00082b21) call_video_g2_ParamLimits

0x6b99,	// (0x00082b21) call_video_g2

0x0001,

0xf269,	// (0x0008b1f1) call_video_g_ParamLimits

0xf269,	// (0x0008b1f1) call_video_g

0x6be9,	// (0x00082b71) call_video_uplink_pane_cp1_ParamLimits

0x6be9,	// (0x00082b71) call_video_uplink_pane_cp1

0xe331,	// (0x0008a2b9) call_video_uplink_pane_cp2

0x6ca5,	// (0x00082c2d) video_down_crop_pane_ParamLimits

0x6ca5,	// (0x00082c2d) video_down_crop_pane

0x6d6f,	// (0x00082cf7) video_down_pane_ParamLimits

0x6d6f,	// (0x00082cf7) video_down_pane

0xe339,	// (0x0008a2c1) video_down_subqcif_pane_ParamLimits

0xe339,	// (0x0008a2c1) video_down_subqcif_pane

0xe351,	// (0x0008a2d9) video_down_subqcif_pane_cp_ParamLimits

0xe351,	// (0x0008a2d9) video_down_subqcif_pane_cp

0xe375,	// (0x0008a2fd) im_reading_pane_ParamLimits

0xe375,	// (0x0008a2fd) im_reading_pane

0x6e39,	// (0x00082dc1) im_writing_pane_ParamLimits

0x6e39,	// (0x00082dc1) im_writing_pane

0x6e4f,	// (0x00082dd7) im_reading_pane_t1

0xe38f,	// (0x0008a317) list_im_pane

0xe3a0,	// (0x0008a328) scroll_pane_cp07

0x6e87,	// (0x00082e0f) im_writing_pane_t1_ParamLimits

0x6e87,	// (0x00082e0f) im_writing_pane_t1

0xe3b9,	// (0x0008a341) im_writing_pane_t2_ParamLimits

0xe3b9,	// (0x0008a341) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008b1fb) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008b1fb) im_writing_pane_t

0xddb3,	// (0x00089d3b) input_focus_pane_cp04

0xddb3,	// (0x00089d3b) input_focus_pane_cp05

0x6e99,	// (0x00082e21) list_im_single_pane_ParamLimits

0x6e99,	// (0x00082e21) list_im_single_pane

0xe3d6,	// (0x0008a35e) list_single_im_pane_t1

0x85e2,	// (0x0008456a) blid_accuracy_pane

0x85ea,	// (0x00084572) blid_compass_pane

0x85f2,	// (0x0008457a) main_location_t1

0x8600,	// (0x00084588) main_location_t2

0x860e,	// (0x00084596) main_location_t3

0x0002,

0xf5ed,	// (0x0008b575) main_location_t

0xddb3,	// (0x00089d3b) aid_levels_location

0xe134,	// (0x0008a0bc) blid_accuracy_pane_g1

0xe134,	// (0x0008a0bc) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008b25d) blid_accuracy_pane_g

0xe410,	// (0x0008a398) wml_content_pane

0xe44e,	// (0x0008a3d6) wml_button_pane_ParamLimits

0xe44e,	// (0x0008a3d6) wml_button_pane

0x6ead,	// (0x00082e35) wml_list_single_large_pane_ParamLimits

0x6ead,	// (0x00082e35) wml_list_single_large_pane

0x6ec3,	// (0x00082e4b) wml_list_single_medium_pane_ParamLimits

0x6ec3,	// (0x00082e4b) wml_list_single_medium_pane

0x6edb,	// (0x00082e63) wml_list_single_small_pane_ParamLimits

0x6edb,	// (0x00082e63) wml_list_single_small_pane

0xe462,	// (0x0008a3ea) wml_selection_box_pane_ParamLimits

0xe462,	// (0x0008a3ea) wml_selection_box_pane

0xe475,	// (0x0008a3fd) wml_list_single_pane_t1

0xe484,	// (0x0008a40c) wml_list_single_medium_pane_t1

0xe493,	// (0x0008a41b) wml_list_single_large_pane_t1

0xe4a2,	// (0x0008a42a) input_focus_pane_cp02_ParamLimits

0xe4a2,	// (0x0008a42a) input_focus_pane_cp02

0xe4b5,	// (0x0008a43d) wml_selection_box_pane_g1

0xe4be,	// (0x0008a446) wml_selection_box_pane_t1_ParamLimits

0xe4be,	// (0x0008a446) wml_selection_box_pane_t1

0xe00e,	// (0x00089f96) bg_wml_button_pane_ParamLimits

0xe00e,	// (0x00089f96) bg_wml_button_pane

0xe4d6,	// (0x0008a45e) wml_button_pane_g1

0xe4de,	// (0x0008a466) wml_button_pane_t1

0xe4d6,	// (0x0008a45e) wml_button_bg_pane_g1

0xe4ee,	// (0x0008a476) wml_button_bg_pane_g2

0xe4f6,	// (0x0008a47e) wml_button_bg_pane_g3

0xe4fe,	// (0x0008a486) wml_button_bg_pane_g4

0xe506,	// (0x0008a48e) wml_button_bg_pane_g5

0xe50e,	// (0x0008a496) wml_button_bg_pane_g6

0xe516,	// (0x0008a49e) wml_button_bg_pane_g7

0xe51e,	// (0x0008a4a6) wml_button_bg_pane_g8

0xe526,	// (0x0008a4ae) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008b200) wml_button_bg_pane_g

0x6ef5,	// (0x00082e7d) bg_list_pane_cp02

0xe52e,	// (0x0008a4b6) mce_header_pane_ParamLimits

0xe52e,	// (0x0008a4b6) mce_header_pane

0xe544,	// (0x0008a4cc) mce_icon_pane

0xe544,	// (0x0008a4cc) mce_image_pane

0xe54d,	// (0x0008a4d5) mce_text_pane_ParamLimits

0xe54d,	// (0x0008a4d5) mce_text_pane

0x6efd,	// (0x00082e85) scroll_pane_cp03

0xe446,	// (0x0008a3ce) scroll_pane_cp04

0xe560,	// (0x0008a4e8) scroll_pane_cp05_ParamLimits

0xe560,	// (0x0008a4e8) scroll_pane_cp05

0x6f05,	// (0x00082e8d) mce_header_field_pane_ParamLimits

0x6f05,	// (0x00082e8d) mce_header_field_pane

0x6f25,	// (0x00082ead) mce_header_field_pane_2_ParamLimits

0x6f25,	// (0x00082ead) mce_header_field_pane_2

0x6f3b,	// (0x00082ec3) mce_header_field_pane_3

0x6f43,	// (0x00082ecb) list_single_mce_message_pane_ParamLimits

0x6f43,	// (0x00082ecb) list_single_mce_message_pane

0x6f58,	// (0x00082ee0) list_single_mce_smart_pane_ParamLimits

0x6f58,	// (0x00082ee0) list_single_mce_smart_pane

0xe56c,	// (0x0008a4f4) input_focus_pane_cp03

0xe575,	// (0x0008a4fd) list_header_data_pane

0x6f78,	// (0x00082f00) mce_header_field_pane_t1

0x6f86,	// (0x00082f0e) list_single_mce_header_pane_ParamLimits

0x6f86,	// (0x00082f0e) list_single_mce_header_pane

0xe57d,	// (0x0008a505) list_single_mce_header_pane_t1

0xe58c,	// (0x0008a514) list_single_mce_message_pane_g1

0xe594,	// (0x0008a51c) list_single_mce_message_pane_t1

0x6fc2,	// (0x00082f4a) bg_cale_heading_pane_cp01_ParamLimits

0x6fc2,	// (0x00082f4a) bg_cale_heading_pane_cp01

0xe5a2,	// (0x0008a52a) bg_cale_pane_cp02_ParamLimits

0xe5a2,	// (0x0008a52a) bg_cale_pane_cp02

0x6ffc,	// (0x00082f84) cale_month_corner_pane

0x7014,	// (0x00082f9c) cale_month_day_heading_pane_ParamLimits

0x7014,	// (0x00082f9c) cale_month_day_heading_pane

0x704e,	// (0x00082fd6) cale_month_pane_g1_ParamLimits

0x704e,	// (0x00082fd6) cale_month_pane_g1

0x707d,	// (0x00083005) cale_month_pane_g2_ParamLimits

0x707d,	// (0x00083005) cale_month_pane_g2

0x70a1,	// (0x00083029) cale_month_pane_g3_ParamLimits

0x70a1,	// (0x00083029) cale_month_pane_g3

0x70dd,	// (0x00083065) cale_month_pane_g4_ParamLimits

0x70dd,	// (0x00083065) cale_month_pane_g4

0x7119,	// (0x000830a1) cale_month_pane_g5_ParamLimits

0x7119,	// (0x000830a1) cale_month_pane_g5

0x7155,	// (0x000830dd) cale_month_pane_g6_ParamLimits

0x7155,	// (0x000830dd) cale_month_pane_g6

0x7191,	// (0x00083119) cale_month_pane_g7_ParamLimits

0x7191,	// (0x00083119) cale_month_pane_g7

0x71cd,	// (0x00083155) cale_month_pane_g8_ParamLimits

0x71cd,	// (0x00083155) cale_month_pane_g8

0x7209,	// (0x00083191) cale_month_pane_g9_ParamLimits

0x7209,	// (0x00083191) cale_month_pane_g9

0x7243,	// (0x000831cb) cale_month_pane_g10_ParamLimits

0x7243,	// (0x000831cb) cale_month_pane_g10

0x727d,	// (0x00083205) cale_month_pane_g11_ParamLimits

0x727d,	// (0x00083205) cale_month_pane_g11

0x72b7,	// (0x0008323f) cale_month_pane_g12_ParamLimits

0x72b7,	// (0x0008323f) cale_month_pane_g12

0x72f1,	// (0x00083279) cale_month_pane_g13_ParamLimits

0x72f1,	// (0x00083279) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008b213) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008b213) cale_month_pane_g

0x732b,	// (0x000832b3) cale_month_week_pane

0x7343,	// (0x000832cb) grid_cale_month_pane_ParamLimits

0x7343,	// (0x000832cb) grid_cale_month_pane

0x7374,	// (0x000832fc) cale_month_day_heading_pane_t1

0x73a7,	// (0x0008332f) cale_month_day_heading_pane_t2

0x73d1,	// (0x00083359) cale_month_day_heading_pane_t3

0x73fb,	// (0x00083383) cale_month_day_heading_pane_t4

0x7425,	// (0x000833ad) cale_month_day_heading_pane_t5

0x744f,	// (0x000833d7) cale_month_day_heading_pane_t6

0x7479,	// (0x00083401) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008b22e) cale_month_day_heading_pane_t

0xe23e,	// (0x0008a1c6) bg_cale_side_pane_cp01

0x74a3,	// (0x0008342b) cale_month_week_pane_t1

0x74bc,	// (0x00083444) cale_month_week_pane_t2

0x74d5,	// (0x0008345d) cale_month_week_pane_t3

0x74ee,	// (0x00083476) cale_month_week_pane_t4

0x7507,	// (0x0008348f) cale_month_week_pane_t5

0x7520,	// (0x000834a8) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008b23d) cale_month_week_pane_t

0x7539,	// (0x000834c1) cell_cale_month_pane_ParamLimits

0x7539,	// (0x000834c1) cell_cale_month_pane

0x7651,	// (0x000835d9) cell_cale_month_pane_g1

0x765d,	// (0x000835e5) cell_cale_month_pane_t1_ParamLimits

0x765d,	// (0x000835e5) cell_cale_month_pane_t1

0xe24c,	// (0x0008a1d4) grid_highlight_pane_cp08

0xe134,	// (0x0008a0bc) main_smil_g1

0x7689,	// (0x00083611) smil_status_pane

0xe5e1,	// (0x0008a569) smil_text_pane

0x15cb,	// (0x0007d553) bg_popup_call3_rect_pane_g8

0x15d3,	// (0x0007d55b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008b4f6) bg_popup_call3_rect_pane_g

0x18b5,	// (0x0007d83d) smil_status_volume_pane_g1

0xe5eb,	// (0x0008a573) smil_status_pane_t1

0x8994,	// (0x0008491c) volume_smil_pane

0xe602,	// (0x0008a58a) list_smil_text_pane

0x769a,	// (0x00083622) scroll_pane_cp011

0x76a3,	// (0x0008362b) smil_text_list_pane_t1_ParamLimits

0x76a3,	// (0x0008362b) smil_text_list_pane_t1

0x76e2,	// (0x0008366a) aid_volume_smil_ParamLimits

0x76e2,	// (0x0008366a) aid_volume_smil

0xe134,	// (0x0008a0bc) smil_volume_pane_g1

0xe134,	// (0x0008a0bc) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008b25d) smil_volume_pane_g

0x60b3,	// (0x0008203b) listscroll_cale_day_pane

0xe60c,	// (0x0008a594) bg_cale_pane

0xe624,	// (0x0008a5ac) list_cale_pane

0xe647,	// (0x0008a5cf) scroll_pane_cp09

0xe658,	// (0x0008a5e0) cale_bg_pane_g1

0xe660,	// (0x0008a5e8) cale_bg_pane_g2

0xe668,	// (0x0008a5f0) cale_bg_pane_g3

0xe670,	// (0x0008a5f8) cale_bg_pane_g4

0xe678,	// (0x0008a600) cale_bg_pane_g5

0xe680,	// (0x0008a608) cale_bg_pane_g6

0xe688,	// (0x0008a610) cale_bg_pane_g7

0xe690,	// (0x0008a618) cale_bg_pane_g8

0xe698,	// (0x0008a620) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008b262) cale_bg_pane_g

0x7704,	// (0x0008368c) list_cale_time_pane_ParamLimits

0x7704,	// (0x0008368c) list_cale_time_pane

0xe6a8,	// (0x0008a630) list_cale_time_pane_g1_ParamLimits

0xe6a8,	// (0x0008a630) list_cale_time_pane_g1

0xe6b4,	// (0x0008a63c) list_cale_time_pane_g2_ParamLimits

0xe6b4,	// (0x0008a63c) list_cale_time_pane_g2

0x7716,	// (0x0008369e) list_cale_time_pane_g3_ParamLimits

0x7716,	// (0x0008369e) list_cale_time_pane_g3

0x7722,	// (0x000836aa) list_cale_time_pane_g4_ParamLimits

0x7722,	// (0x000836aa) list_cale_time_pane_g4

0x772e,	// (0x000836b6) list_cale_time_pane_g5_ParamLimits

0x772e,	// (0x000836b6) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008b275) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008b275) list_cale_time_pane_g

0xe6ce,	// (0x0008a656) list_cale_time_pane_t1_ParamLimits

0xe6ce,	// (0x0008a656) list_cale_time_pane_t1

0xe6f6,	// (0x0008a67e) list_cale_time_pane_t2_ParamLimits

0xe6f6,	// (0x0008a67e) list_cale_time_pane_t2

0x7ac3,	// (0x00083a4b) aid_blid_cardinal_pane

0x7b01,	// (0x00083a89) compass_pane_t4

0xe71e,	// (0x0008a6a6) list_cale_time_pane_t4_ParamLimits

0xe71e,	// (0x0008a6a6) list_cale_time_pane_t4

0x7b0f,	// (0x00083a97) compass_pane_t5

0x7b1d,	// (0x00083aa5) compass_pane_t6

0x7b2b,	// (0x00083ab3) compass_pane_t7

0xeb90,	// (0x0008ab18) navi_pane_cc_t1

0xed6b,	// (0x0008acf3) aid_phob_thumbnail_center_pane

0x816f,	// (0x000840f7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008b282) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008b282) list_cale_time_pane_t

0xda0c,	// (0x00089994) bg_popup_window_pane_cp02_ParamLimits

0xda0c,	// (0x00089994) bg_popup_window_pane_cp02

0xe746,	// (0x0008a6ce) heading_pane_cp01_ParamLimits

0xe746,	// (0x0008a6ce) heading_pane_cp01

0xe752,	// (0x0008a6da) loc_req_pane_ParamLimits

0xe752,	// (0x0008a6da) loc_req_pane

0xe762,	// (0x0008a6ea) loc_type_pane_ParamLimits

0xe762,	// (0x0008a6ea) loc_type_pane

0xe774,	// (0x0008a6fc) loc_type_pane_t1_ParamLimits

0xe774,	// (0x0008a6fc) loc_type_pane_t1

0xe786,	// (0x0008a70e) loc_type_pane_t2_ParamLimits

0xe786,	// (0x0008a70e) loc_type_pane_t2

0xe798,	// (0x0008a720) loc_type_pane_t3_ParamLimits

0xe798,	// (0x0008a720) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008b289) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008b289) loc_type_pane_t

0xe7aa,	// (0x0008a732) list_loc_req_pane

0xe7b4,	// (0x0008a73c) scroll_pane_cp012

0xe7bd,	// (0x0008a745) list_single_loc_request_popup_menu_pane_ParamLimits

0xe7bd,	// (0x0008a745) list_single_loc_request_popup_menu_pane

0xe7cf,	// (0x0008a757) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe7cf,	// (0x0008a757) list_single_loc_request_popup_menu_pane_g1

0xe7db,	// (0x0008a763) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe7db,	// (0x0008a763) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008b290) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008b290) list_single_loc_request_popup_menu_pane_g

0xe7e7,	// (0x0008a76f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe7e7,	// (0x0008a76f) list_single_loc_request_popup_menu_pane_t1

0x773a,	// (0x000836c2) bg_popup_window_pane_cp03_ParamLimits

0x773a,	// (0x000836c2) bg_popup_window_pane_cp03

0x7748,	// (0x000836d0) heading_loc_req_pane_ParamLimits

0x7748,	// (0x000836d0) heading_loc_req_pane

0x7754,	// (0x000836dc) popup_dyc_status_message_window_g1_ParamLimits

0x7754,	// (0x000836dc) popup_dyc_status_message_window_g1

0x7760,	// (0x000836e8) popup_dyc_status_message_window_t1_ParamLimits

0x7760,	// (0x000836e8) popup_dyc_status_message_window_t1

0x7772,	// (0x000836fa) popup_dyc_status_message_window_t2_ParamLimits

0x7772,	// (0x000836fa) popup_dyc_status_message_window_t2

0x7784,	// (0x0008370c) popup_dyc_status_message_window_t3_ParamLimits

0x7784,	// (0x0008370c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008b295) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008b295) popup_dyc_status_message_window_t

0xddb3,	// (0x00089d3b) bg_heading_pane_cp01

0xe7fd,	// (0x0008a785) heading_loc_req_pane_g1

0xe805,	// (0x0008a78d) heading_loc_req_pane_g2

0xe80d,	// (0x0008a795) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008b29c) heading_loc_req_pane_g

0xe815,	// (0x0008a79d) heading_loc_req_pane_t1

0xe824,	// (0x0008a7ac) bg_popup_sub_pane_cp01_ParamLimits

0xe824,	// (0x0008a7ac) bg_popup_sub_pane_cp01

0xe832,	// (0x0008a7ba) popup_cale_events_window_g1_ParamLimits

0xe832,	// (0x0008a7ba) popup_cale_events_window_g1

0xe852,	// (0x0008a7da) popup_cale_events_window_g2_ParamLimits

0xe852,	// (0x0008a7da) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008b2d0) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008b2d0) popup_cale_events_window_g

0xe872,	// (0x0008a7fa) popup_cale_events_window_t1_ParamLimits

0xe872,	// (0x0008a7fa) popup_cale_events_window_t1

0xe884,	// (0x0008a80c) popup_cale_events_window_t2_ParamLimits

0xe884,	// (0x0008a80c) popup_cale_events_window_t2

0xe8c2,	// (0x0008a84a) popup_cale_events_window_t3_ParamLimits

0xe8c2,	// (0x0008a84a) popup_cale_events_window_t3

0xe8fc,	// (0x0008a884) popup_cale_events_window_t4_ParamLimits

0xe8fc,	// (0x0008a884) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008b2d5) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008b2d5) popup_cale_events_window_t

0x787d,	// (0x00083805) call_type_pane

0xe932,	// (0x0008a8ba) popup_call_status_window_g1

0x7889,	// (0x00083811) popup_call_status_window_g2

0x7895,	// (0x0008381d) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008b2de) popup_call_status_window_g

0xe940,	// (0x0008a8c8) call_type_pane_g1

0xe949,	// (0x0008a8d1) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008b2e5) call_type_pane_g

0xddb3,	// (0x00089d3b) bg_popup_sub_pane_cp02

0xe952,	// (0x0008a8da) listscroll_popup_wml_pane

0xe95a,	// (0x0008a8e2) list_wml_pane

0xe964,	// (0x0008a8ec) scroll_pane_cp013

0x78a1,	// (0x00083829) list_single_graphic_popup_wml_pane_ParamLimits

0x78a1,	// (0x00083829) list_single_graphic_popup_wml_pane

0xe134,	// (0x0008a0bc) list_single_graphic_popup_wml_pane_g1

0xe96d,	// (0x0008a8f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008b2ea) list_single_graphic_popup_wml_pane_g

0xe975,	// (0x0008a8fd) list_single_graphic_popup_wml_pane_t1

0xe98b,	// (0x0008a913) aid_call_pane

0xe006,	// (0x00089f8e) popup_clock_analogue_window_g1

0xe006,	// (0x00089f8e) popup_clock_analogue_window_g2

0x78b5,	// (0x0008383d) popup_clock_analogue_window_g3

0x78b5,	// (0x0008383d) popup_clock_analogue_window_g4

0xe134,	// (0x0008a0bc) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008b2ef) popup_clock_analogue_window_g

0x78bd,	// (0x00083845) popup_clock_analogue_window_t1

0x78cb,	// (0x00083853) clock_digital_number_pane_ParamLimits

0x78cb,	// (0x00083853) clock_digital_number_pane

0x78d7,	// (0x0008385f) clock_digital_number_pane_cp02_ParamLimits

0x78d7,	// (0x0008385f) clock_digital_number_pane_cp02

0x78e3,	// (0x0008386b) clock_digital_number_pane_cp03_ParamLimits

0x78e3,	// (0x0008386b) clock_digital_number_pane_cp03

0x78ef,	// (0x00083877) clock_digital_number_pane_cp04_ParamLimits

0x78ef,	// (0x00083877) clock_digital_number_pane_cp04

0x78fb,	// (0x00083883) clock_digital_separator_pane_ParamLimits

0x78fb,	// (0x00083883) clock_digital_separator_pane

0x7907,	// (0x0008388f) popup_clock_digital_window_t1

0xe134,	// (0x0008a0bc) clock_digital_number_pane_g1

0xe134,	// (0x0008a0bc) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008b25d) clock_digital_number_pane_g

0xe134,	// (0x0008a0bc) clock_digital_separator_pane_g1

0xe134,	// (0x0008a0bc) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008b25d) clock_digital_separator_pane_g

0xddb3,	// (0x00089d3b) bg_popup_window_pane_cp04

0xe993,	// (0x0008a91b) heading_pane_cp03

0xe99b,	// (0x0008a923) listscroll_popup_gms_pane

0xe9a3,	// (0x0008a92b) grid_large_graphic_popup_pane

0xe9ad,	// (0x0008a935) listscroll_popup_gms_pane_g1

0xe9b5,	// (0x0008a93d) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008b2fa) listscroll_popup_gms_pane_g

0xe446,	// (0x0008a3ce) scroll_pane_cp014

0x7924,	// (0x000838ac) cell_large_graphic_popup_pane_ParamLimits

0x7924,	// (0x000838ac) cell_large_graphic_popup_pane

0x793b,	// (0x000838c3) cell_large_graphic_popup_pane_g1_ParamLimits

0x793b,	// (0x000838c3) cell_large_graphic_popup_pane_g1

0xe9bd,	// (0x0008a945) cell_large_graphic_popup_pane_g2_ParamLimits

0xe9bd,	// (0x0008a945) cell_large_graphic_popup_pane_g2

0xe9c9,	// (0x0008a951) cell_large_graphic_popup_pane_g3_ParamLimits

0xe9c9,	// (0x0008a951) cell_large_graphic_popup_pane_g3

0xe9d6,	// (0x0008a95e) cell_large_graphic_popup_pane_g4_ParamLimits

0xe9d6,	// (0x0008a95e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008b2ff) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008b2ff) cell_large_graphic_popup_pane_g

0xe9e6,	// (0x0008a96e) grid_highlight_pane_cp010

0xe134,	// (0x0008a0bc) bg_popup_call_pane_g1

0xe9f0,	// (0x0008a978) list_single_graphic_popup_conf_pane_ParamLimits

0xe9f0,	// (0x0008a978) list_single_graphic_popup_conf_pane

0xea03,	// (0x0008a98b) list_highlight_pane_cp01

0xea0c,	// (0x0008a994) list_single_graphic_popup_conf_pane_g1

0xea14,	// (0x0008a99c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008b308) list_single_graphic_popup_conf_pane_g

0xea1c,	// (0x0008a9a4) list_single_graphic_popup_conf_pane_t1

0xea2a,	// (0x0008a9b2) linegrid_cams_pane_g1

0x7947,	// (0x000838cf) linegrid_cams_pane_g2

0xe1ec,	// (0x0008a174) linegrid_cams_pane_g3

0xea33,	// (0x0008a9bb) linegrid_cams_pane_g4

0x7950,	// (0x000838d8) linegrid_cams_pane_g5

0x7959,	// (0x000838e1) linegrid_cams_pane_g6

0xe27f,	// (0x0008a207) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008b30d) linegrid_cams_pane_g

0xea3c,	// (0x0008a9c4) popup_clock_analogue_window

0xea3c,	// (0x0008a9c4) popup_clock_digital_window

0xddb3,	// (0x00089d3b) popup_phob_thumbnail_window

0xe134,	// (0x0008a0bc) call_video_uplink_pane_g1

0xea45,	// (0x0008a9cd) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008b31c) call_video_uplink_pane_g

0xe24c,	// (0x0008a1d4) video_uplink_pane

0xea4d,	// (0x0008a9d5) mce_image_pane_g1

0x7962,	// (0x000838ea) mce_image_pane_g2

0x796a,	// (0x000838f2) mce_image_pane_g3

0x7972,	// (0x000838fa) mce_image_pane_g4

0x797a,	// (0x00083902) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008b321) mce_image_pane_g

0xea57,	// (0x0008a9df) control_top_pane_stacon_cp01_ParamLimits

0xea57,	// (0x0008a9df) control_top_pane_stacon_cp01

0xea67,	// (0x0008a9ef) uni_indicator_pane_stacon_cp01_ParamLimits

0xea67,	// (0x0008a9ef) uni_indicator_pane_stacon_cp01

0xea78,	// (0x0008aa00) bg_popup_sub_pane_cp03

0x7982,	// (0x0008390a) chi_dic_find_pane

0x798a,	// (0x00083912) listscroll_chi_dic_pane

0x7993,	// (0x0008391b) main_pane_chidic_g1

0x79a4,	// (0x0008392c) chi_dic_find_pane_t1

0xea82,	// (0x0008aa0a) find_chidic_pane

0xea8b,	// (0x0008aa13) chi_dic_list_pane_ParamLimits

0xea8b,	// (0x0008aa13) chi_dic_list_pane

0xea9c,	// (0x0008aa24) scroll_pane_cp020

0x79b2,	// (0x0008393a) find_chidic_pane_t1

0xddb3,	// (0x00089d3b) input_focus_pane_cp06

0x79c1,	// (0x00083949) list_chi_dic_pane_ParamLimits

0x79c1,	// (0x00083949) list_chi_dic_pane

0x79d3,	// (0x0008395b) list_chi_dic_pane_t1_ParamLimits

0x79d3,	// (0x0008395b) list_chi_dic_pane_t1

0xddb3,	// (0x00089d3b) list_highlight_pane_cp020

0xeaa4,	// (0x0008aa2c) bg_cale_heading_pane_g1

0x79e6,	// (0x0008396e) bg_cale_heading_pane_g2

0x79ee,	// (0x00083976) bg_cale_heading_pane_g3

0x79f6,	// (0x0008397e) bg_cale_heading_pane_g4

0x79fe,	// (0x00083986) bg_cale_heading_pane_g5

0x7a06,	// (0x0008398e) bg_cale_heading_pane_g6

0x7a0e,	// (0x00083996) bg_cale_heading_pane_g7

0x7a16,	// (0x0008399e) bg_cale_heading_pane_g8

0x7a1e,	// (0x000839a6) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008b32c) bg_cale_heading_pane_g

0xeaa4,	// (0x0008aa2c) bg_cale_side_pane_g1

0x7a26,	// (0x000839ae) bg_cale_side_pane_g2

0x7a2e,	// (0x000839b6) bg_cale_side_pane_g3

0x7a36,	// (0x000839be) bg_cale_side_pane_g4

0x7a3e,	// (0x000839c6) bg_cale_side_pane_g5

0x7a46,	// (0x000839ce) bg_cale_side_pane_g6

0x7a4e,	// (0x000839d6) bg_cale_side_pane_g7

0x7a56,	// (0x000839de) bg_cale_side_pane_g8

0x7a5e,	// (0x000839e6) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008b33f) bg_cale_side_pane_g

0x7a66,	// (0x000839ee) popup_call_status_window_ParamLimits

0x7a66,	// (0x000839ee) popup_call_status_window

0xeaac,	// (0x0008aa34) stacon_top_pane

0xeab4,	// (0x0008aa3c) status_pane_ParamLimits

0xeab4,	// (0x0008aa3c) status_pane

0xeac9,	// (0x0008aa51) status_small_pane

0xead1,	// (0x0008aa59) control_pane

0xddb3,	// (0x00089d3b) stacon_bottom_pane

0xead9,	// (0x0008aa61) list_single_mce_smart_pane_t1_ParamLimits

0xead9,	// (0x0008aa61) list_single_mce_smart_pane_t1

0xeaec,	// (0x0008aa74) list_single_mce_smart_pane_t2_ParamLimits

0xeaec,	// (0x0008aa74) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008b352) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008b352) list_single_mce_smart_pane_t

0x7a72,	// (0x000839fa) compass_pane

0x7a7b,	// (0x00083a03) main_location2_pane_t1

0x7a8d,	// (0x00083a15) main_location2_pane_t2

0x7a9f,	// (0x00083a27) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008b357) main_location2_pane_t

0xeb0b,	// (0x0008aa93) compass_pane_g1_ParamLimits

0xeb0b,	// (0x0008aa93) compass_pane_g1

0x7ae3,	// (0x00083a6b) compass_pane_t1

0x7af2,	// (0x00083a7a) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008b360) compass_pane_t

0x7b39,	// (0x00083ac1) text_secondary_cp61

0xeb87,	// (0x0008ab0f) navi_pane_cams_g5

0xec01,	// (0x0008ab89) navi_pane_im_t1

0xec0f,	// (0x0008ab97) navi_pane_mp_g1_ParamLimits

0xec0f,	// (0x0008ab97) navi_pane_mp_g1

0xec23,	// (0x0008abab) navi_pane_mp_g2_ParamLimits

0xec23,	// (0x0008abab) navi_pane_mp_g2

0xec2f,	// (0x0008abb7) navi_pane_mp_g3_ParamLimits

0xec2f,	// (0x0008abb7) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008b374) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008b374) navi_pane_mp_g

0xec3b,	// (0x0008abc3) navi_pane_mp_t1

0xec49,	// (0x0008abd1) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008b37b) navi_pane_mp_t

0xecb4,	// (0x0008ac3c) navi_pane_vt_g1

0xec3b,	// (0x0008abc3) navi_pane_vt_t1

0xecbc,	// (0x0008ac44) navi_slider_pane

0xe290,	// (0x0008a218) zooming_pane

0xeccc,	// (0x0008ac54) navi_slider_pane_g1

0x7b74,	// (0x00083afc) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008b382) navi_slider_pane_g

0xecf0,	// (0x0008ac78) aid_levels_zoom

0xecf8,	// (0x0008ac80) zooming_pane_g1

0xed00,	// (0x0008ac88) zooming_pane_g2

0xed00,	// (0x0008ac88) zooming_pane_g3

0x0002,

0xf409,	// (0x0008b391) zooming_pane_g

0xed08,	// (0x0008ac90) level_10_zoom

0xed11,	// (0x0008ac99) level_11_zoom

0xed1a,	// (0x0008aca2) level_1_zoom

0xed23,	// (0x0008acab) level_2_zoom

0xed2c,	// (0x0008acb4) level_3_zoom

0xed35,	// (0x0008acbd) level_4_zoom

0xed3e,	// (0x0008acc6) level_5_zoom

0xed47,	// (0x0008accf) level_6_zoom

0xed50,	// (0x0008acd8) level_7_zoom

0xed59,	// (0x0008ace1) level_8_zoom

0xed62,	// (0x0008acea) level_9_zoom

0xed73,	// (0x0008acfb) popup_phob_thumbnail_window_g1

0xed7b,	// (0x0008ad03) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008b398) popup_phob_thumbnail_window_g

0x176d,	// (0x0007d6f5) level_1_location

0x1775,	// (0x0007d6fd) level_2_location

0x177d,	// (0x0007d705) level_3_location

0x1785,	// (0x0007d70d) level_4_location

0xe290,	// (0x0008a218) level_5_location

0x7b86,	// (0x00083b0e) mce_icon_pane_g1

0x7b8e,	// (0x00083b16) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008b39d) mce_icon_pane_g

0x7b96,	// (0x00083b1e) main_mup_pane_g1_ParamLimits

0x7b96,	// (0x00083b1e) main_mup_pane_g1

0x7bae,	// (0x00083b36) main_mup_pane_g2_ParamLimits

0x7bae,	// (0x00083b36) main_mup_pane_g2

0x7bca,	// (0x00083b52) main_mup_pane_g3_ParamLimits

0x7bca,	// (0x00083b52) main_mup_pane_g3

0x7be6,	// (0x00083b6e) main_mup_pane_g4_ParamLimits

0x7be6,	// (0x00083b6e) main_mup_pane_g4

0x7c02,	// (0x00083b8a) main_mup_pane_g5_ParamLimits

0x7c02,	// (0x00083b8a) main_mup_pane_g5

0x7c1f,	// (0x00083ba7) main_mup_pane_g6_ParamLimits

0x7c1f,	// (0x00083ba7) main_mup_pane_g6

0x7c3b,	// (0x00083bc3) main_mup_pane_g7_ParamLimits

0x7c3b,	// (0x00083bc3) main_mup_pane_g7

0x7c57,	// (0x00083bdf) main_mup_pane_g8_ParamLimits

0x7c57,	// (0x00083bdf) main_mup_pane_g8

0x7c73,	// (0x00083bfb) main_mup_pane_g9_ParamLimits

0x7c73,	// (0x00083bfb) main_mup_pane_g9

0x7c8a,	// (0x00083c12) main_mup_pane_g10_ParamLimits

0x7c8a,	// (0x00083c12) main_mup_pane_g10

0x7ca1,	// (0x00083c29) main_mup_pane_g11_ParamLimits

0x7ca1,	// (0x00083c29) main_mup_pane_g11

0x7cb5,	// (0x00083c3d) main_mup_pane_g12_ParamLimits

0x7cb5,	// (0x00083c3d) main_mup_pane_g12

0x7cc1,	// (0x00083c49) main_mup_pane_g13_ParamLimits

0x7cc1,	// (0x00083c49) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008b3a2) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008b3a2) main_mup_pane_g

0x7cd5,	// (0x00083c5d) main_mup_pane_t1_ParamLimits

0x7cd5,	// (0x00083c5d) main_mup_pane_t1

0x7cf2,	// (0x00083c7a) main_mup_pane_t2_ParamLimits

0x7cf2,	// (0x00083c7a) main_mup_pane_t2

0x7d0c,	// (0x00083c94) main_mup_pane_t3_ParamLimits

0x7d0c,	// (0x00083c94) main_mup_pane_t3

0x7d26,	// (0x00083cae) main_mup_pane_t4_ParamLimits

0x7d26,	// (0x00083cae) main_mup_pane_t4

0x7d38,	// (0x00083cc0) main_mup_pane_t5_ParamLimits

0x7d38,	// (0x00083cc0) main_mup_pane_t5

0x7d4a,	// (0x00083cd2) main_mup_pane_t6_ParamLimits

0x7d4a,	// (0x00083cd2) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008b3bd) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008b3bd) main_mup_pane_t

0x7d60,	// (0x00083ce8) mup_progress_pane_ParamLimits

0x7d60,	// (0x00083ce8) mup_progress_pane

0x7d6c,	// (0x00083cf4) mup_visualizer_pane_ParamLimits

0x7d6c,	// (0x00083cf4) mup_visualizer_pane

0x7d9a,	// (0x00083d22) mup_volume_pane_ParamLimits

0x7d9a,	// (0x00083d22) mup_volume_pane

0xe932,	// (0x0008a8ba) mup_visualizer_pane_g1_ParamLimits

0xe932,	// (0x0008a8ba) mup_visualizer_pane_g1

0xe932,	// (0x0008a8ba) mup_visualizer_pane_g2_ParamLimits

0xe932,	// (0x0008a8ba) mup_visualizer_pane_g2

0xeb0b,	// (0x0008aa93) mup_visualizer_pane_g3_ParamLimits

0xeb0b,	// (0x0008aa93) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008b3ca) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008b3ca) mup_visualizer_pane_g

0xe134,	// (0x0008a0bc) mup_volume_pane_g1

0xed8b,	// (0x0008ad13) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008b3d1) mup_volume_pane_g

0xe134,	// (0x0008a0bc) mup_progress_pane_g1

0xed94,	// (0x0008ad1c) mup_progress_pane_g2

0xed9d,	// (0x0008ad25) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008b3d6) mup_progress_pane_g

0xddb3,	// (0x00089d3b) bg_popup_window_pane_cp05

0x7dbd,	// (0x00083d45) heading_pane_cp02_ParamLimits

0x7dbd,	// (0x00083d45) heading_pane_cp02

0xeda6,	// (0x0008ad2e) list_popup_blid_pane

0x7dd7,	// (0x00083d5f) list_blid_sat_info_pane_ParamLimits

0x7dd7,	// (0x00083d5f) list_blid_sat_info_pane

0xedae,	// (0x0008ad36) list_blid_sat_info_pane_g1

0xedb6,	// (0x0008ad3e) list_blid_sat_info_pane_t1

0x7eba,	// (0x00083e42) mup_equalizer_pane_ParamLimits

0x7eba,	// (0x00083e42) mup_equalizer_pane

0x7ed3,	// (0x00083e5b) mup_equalizer_pane_cp1_ParamLimits

0x7ed3,	// (0x00083e5b) mup_equalizer_pane_cp1

0x7eec,	// (0x00083e74) mup_equalizer_pane_cp2_ParamLimits

0x7eec,	// (0x00083e74) mup_equalizer_pane_cp2

0x7f05,	// (0x00083e8d) mup_equalizer_pane_cp3_ParamLimits

0x7f05,	// (0x00083e8d) mup_equalizer_pane_cp3

0x7f1e,	// (0x00083ea6) mup_equalizer_pane_cp4_ParamLimits

0x7f1e,	// (0x00083ea6) mup_equalizer_pane_cp4

0x7f37,	// (0x00083ebf) mup_equalizer_pane_cp5

0x7f49,	// (0x00083ed1) mup_equalizer_pane_cp6

0x7f5b,	// (0x00083ee3) mup_equalizer_pane_cp7

0x164b,	// (0x0007d5d3) bg_popup_call_poc_act_pane_g9

0x1653,	// (0x0007d5db) bg_popup_call_poc_act_pane_g10

0x165b,	// (0x0007d5e3) bg_popup_call_poc_act_pane_g11

0x000a,

0xe00e,	// (0x00089f96) mup_scale_pane

0xe134,	// (0x0008a0bc) mup_scale_pane_g1

0xedc4,	// (0x0008ad4c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008b3f2) mup_scale_pane_g

0xede8,	// (0x0008ad70) msg_data_pane

0xedf0,	// (0x0008ad78) scroll_pane_cp017

0x7f7f,	// (0x00083f07) bg_list_pane_cp04_ParamLimits

0x7f7f,	// (0x00083f07) bg_list_pane_cp04

0xedf8,	// (0x0008ad80) msg_data_pane_g1

0x7f9f,	// (0x00083f27) msg_data_pane_g2

0x7fa7,	// (0x00083f2f) msg_data_pane_g3

0x7faf,	// (0x00083f37) msg_data_pane_g4

0x7fb7,	// (0x00083f3f) msg_data_pane_g5

0x7b86,	// (0x00083b0e) msg_data_pane_g6

0x7fbf,	// (0x00083f47) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008b401) msg_data_pane_g

0x7fc7,	// (0x00083f4f) msg_text_pane_ParamLimits

0x7fc7,	// (0x00083f4f) msg_text_pane

0x7fea,	// (0x00083f72) qrid_highlight_pane_cp011_ParamLimits

0x7fea,	// (0x00083f72) qrid_highlight_pane_cp011

0xddb3,	// (0x00089d3b) msg_body_pane

0xddb3,	// (0x00089d3b) msg_header_pane

0xee09,	// (0x0008ad91) input_focus_pane_cp07

0x800c,	// (0x00083f94) msg_header_pane_t1_ParamLimits

0x800c,	// (0x00083f94) msg_header_pane_t1

0x801e,	// (0x00083fa6) msg_header_pane_t2_ParamLimits

0x801e,	// (0x00083fa6) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008b415) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008b415) msg_header_pane_t

0xee1e,	// (0x0008ada6) msg_body_pane_g1

0x8030,	// (0x00083fb8) msg_body_pane_t1_ParamLimits

0x8030,	// (0x00083fb8) msg_body_pane_t1

0x8061,	// (0x00083fe9) msg_body_pane_t2_ParamLimits

0x8061,	// (0x00083fe9) msg_body_pane_t2

0x8073,	// (0x00083ffb) msg_body_pane_t3_ParamLimits

0x8073,	// (0x00083ffb) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008b41a) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008b41a) msg_body_pane_t

0x80d3,	// (0x0008405b) main_viewer_pane_g1_ParamLimits

0x80d3,	// (0x0008405b) main_viewer_pane_g1

0x80df,	// (0x00084067) main_viewer_pane_g2_ParamLimits

0x80df,	// (0x00084067) main_viewer_pane_g2

0x80eb,	// (0x00084073) main_viewer_pane_g3_ParamLimits

0x80eb,	// (0x00084073) main_viewer_pane_g3

0x80fa,	// (0x00084082) main_viewer_pane_g4_ParamLimits

0x80fa,	// (0x00084082) main_viewer_pane_g4

0x8109,	// (0x00084091) main_viewer_pane_g5_ParamLimits

0x8109,	// (0x00084091) main_viewer_pane_g5

0x8109,	// (0x00084091) main_viewer_pane_g7_ParamLimits

0x8109,	// (0x00084091) main_viewer_pane_g7

0x811b,	// (0x000840a3) main_viewer_pane_g8_ParamLimits

0x811b,	// (0x000840a3) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008b42a) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008b42a) main_viewer_pane_g

0xee26,	// (0x0008adae) viewer_content_pane_ParamLimits

0xee26,	// (0x0008adae) viewer_content_pane

0x814b,	// (0x000840d3) main_postcard_pane_g1_ParamLimits

0x814b,	// (0x000840d3) main_postcard_pane_g1

0x8157,	// (0x000840df) main_postcard_pane_g2_ParamLimits

0x8157,	// (0x000840df) main_postcard_pane_g2

0x8163,	// (0x000840eb) main_postcard_pane_g3_ParamLimits

0x8163,	// (0x000840eb) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008b43b) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008b43b) main_postcard_pane_g

0x816f,	// (0x000840f7) main_postcard_pane_g4

0x18a2,	// (0x0007d82a) smil_status_volume_pane_g2

0x8193,	// (0x0008411b) postcard_pane_ParamLimits

0x8193,	// (0x0008411b) postcard_pane

0xe932,	// (0x0008a8ba) postcard_pane_g1_ParamLimits

0xe932,	// (0x0008a8ba) postcard_pane_g1

0x81c3,	// (0x0008414b) postcard_pane_g2_ParamLimits

0x81c3,	// (0x0008414b) postcard_pane_g2

0x81cf,	// (0x00084157) postcard_pane_g3_ParamLimits

0x81cf,	// (0x00084157) postcard_pane_g3

0xee34,	// (0x0008adbc) postcard_pane_g4_ParamLimits

0xee34,	// (0x0008adbc) postcard_pane_g4

0x81db,	// (0x00084163) postcard_pane_g5_ParamLimits

0x81db,	// (0x00084163) postcard_pane_g5

0x81e7,	// (0x0008416f) postcard_pane_g6_ParamLimits

0x81e7,	// (0x0008416f) postcard_pane_g6

0xee42,	// (0x0008adca) postcard_pane_g7_ParamLimits

0xee42,	// (0x0008adca) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008b448) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008b448) postcard_pane_g

0x81f3,	// (0x0008417b) main_mp2_pane_g1_ParamLimits

0x81f3,	// (0x0008417b) main_mp2_pane_g1

0x81ff,	// (0x00084187) main_mp2_pane_g2_ParamLimits

0x81ff,	// (0x00084187) main_mp2_pane_g2

0x820b,	// (0x00084193) main_mp2_pane_g3_ParamLimits

0x820b,	// (0x00084193) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008b457) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008b457) main_mp2_pane_g

0x8217,	// (0x0008419f) main_mp2_pane_t1_ParamLimits

0x8217,	// (0x0008419f) main_mp2_pane_t1

0x822c,	// (0x000841b4) main_mp2_pane_t2_ParamLimits

0x822c,	// (0x000841b4) main_mp2_pane_t2

0x823e,	// (0x000841c6) main_mp2_pane_t3_ParamLimits

0x823e,	// (0x000841c6) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008b45e) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008b45e) main_mp2_pane_t

0xee50,	// (0x0008add8) pec_content_pane_ParamLimits

0xee50,	// (0x0008add8) pec_content_pane

0xe446,	// (0x0008a3ce) scroll_pane_cp015

0xee62,	// (0x0008adea) pec_attribute_pane_ParamLimits

0xee62,	// (0x0008adea) pec_attribute_pane

0x8250,	// (0x000841d8) pec_content_pane_g1_ParamLimits

0x8250,	// (0x000841d8) pec_content_pane_g1

0xee72,	// (0x0008adfa) pec_content_pane_t1_ParamLimits

0xee72,	// (0x0008adfa) pec_content_pane_t1

0xee84,	// (0x0008ae0c) pec_content_pane_t2_ParamLimits

0xee84,	// (0x0008ae0c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008b465) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008b465) pec_content_pane_t

0x825c,	// (0x000841e4) list_single_graphic_pane_cp01_ParamLimits

0x825c,	// (0x000841e4) list_single_graphic_pane_cp01

0xe00e,	// (0x00089f96) bg_popup_sub_pane_cp04

0xee96,	// (0x0008ae1e) popup_mup_playback_window_g1

0xeea2,	// (0x0008ae2a) popup_mup_playback_window_t1

0xeeb7,	// (0x0008ae3f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008b46a) popup_mup_playback_window_t

0xeeee,	// (0x0008ae76) main_image_pane_g1_ParamLimits

0xeeee,	// (0x0008ae76) main_image_pane_g1

0xef31,	// (0x0008aeb9) scroll_pane_cp018_ParamLimits

0xef31,	// (0x0008aeb9) scroll_pane_cp018

0xef49,	// (0x0008aed1) scroll_pane_cp016_ParamLimits

0xef49,	// (0x0008aed1) scroll_pane_cp016

0x82e0,	// (0x00084268) smil2_image_pane_ParamLimits

0x82e0,	// (0x00084268) smil2_image_pane

0x8308,	// (0x00084290) smil2_root_pane_ParamLimits

0x8308,	// (0x00084290) smil2_root_pane

0x8334,	// (0x000842bc) smil2_text_pane_ParamLimits

0x8334,	// (0x000842bc) smil2_text_pane

0xddb3,	// (0x00089d3b) bg_list_pane_cp06

0x8370,	// (0x000842f8) grid_radio_pane

0xddb3,	// (0x00089d3b) bg_popup_window_pane_cp06

0xef7d,	// (0x0008af05) main_fmradio_pane_t1

0xe993,	// (0x0008a91b) heading_pane_cp04

0xef8b,	// (0x0008af13) main_fmradio_pane_t2

0x16a3,	// (0x0007d62b) popup_cale_lunar_info_window_g1

0xef99,	// (0x0008af21) main_fmradio_pane_t3

0x16ab,	// (0x0007d633) popup_cale_lunar_info_window_g2

0xefa7,	// (0x0008af2f) main_fmradio_pane_t4

0x0001,

0xefb5,	// (0x0008af3d) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0008b558) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008b47f) main_fmradio_pane_t

0xefc3,	// (0x0008af4b) wait_bar_pane_cp03

0x8378,	// (0x00084300) cell_fmradio_pane_ParamLimits

0x8378,	// (0x00084300) cell_fmradio_pane

0xee42,	// (0x0008adca) cell_fmradio_pane_g1_ParamLimits

0xee42,	// (0x0008adca) cell_fmradio_pane_g1

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp011

0xefcb,	// (0x0008af53) poc_content_pane_ParamLimits

0xefcb,	// (0x0008af53) poc_content_pane

0xefdd,	// (0x0008af65) scroll_pane_cp019

0x838b,	// (0x00084313) popup_call_poc_act_window_ParamLimits

0x838b,	// (0x00084313) popup_call_poc_act_window

0x8398,	// (0x00084320) popup_call_poc_inact_window_ParamLimits

0x8398,	// (0x00084320) popup_call_poc_inact_window

0xf594,	// (0x0008b51c) bg_popup_call_poc_act_pane_g

0x1663,	// (0x0007d5eb) bg_popup_call_poc_inact_pane_g1

0x166b,	// (0x0007d5f3) bg_popup_call_poc_inact_pane_g2

0xefe5,	// (0x0008af6d) popup_call_poc_act_window_g2

0x1673,	// (0x0007d5fb) bg_popup_call_poc_inact_pane_g3

0x15f3,	// (0x0007d57b) bg_popup_call_poc_inact_pane_g4

0x167b,	// (0x0007d603) bg_popup_call_poc_inact_pane_g5

0xefed,	// (0x0008af75) popup_call_poc_act_window_t1_ParamLimits

0xefed,	// (0x0008af75) popup_call_poc_act_window_t1

0xf015,	// (0x0008af9d) popup_call_poc_act_window_t2_ParamLimits

0xf015,	// (0x0008af9d) popup_call_poc_act_window_t2

0xf03d,	// (0x0008afc5) popup_call_poc_act_window_t3_ParamLimits

0xf03d,	// (0x0008afc5) popup_call_poc_act_window_t3

0xf065,	// (0x0008afed) popup_call_poc_act_window_t4_ParamLimits

0xf065,	// (0x0008afed) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008b48a) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008b48a) popup_call_poc_act_window_t

0x1683,	// (0x0007d60b) bg_popup_call_poc_inact_pane_g6

0x168b,	// (0x0007d613) bg_popup_call_poc_inact_pane_g7

0x1693,	// (0x0007d61b) bg_popup_call_poc_inact_pane_g8

0xf077,	// (0x0008afff) popup_call_poc_inact_window_g2

0x169b,	// (0x0007d623) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0008b533) bg_popup_call_poc_inact_pane_g

0xf07f,	// (0x0008b007) popup_call_poc_inact_window_t1_ParamLimits

0xf07f,	// (0x0008b007) popup_call_poc_inact_window_t1

0xf094,	// (0x0008b01c) popup_call_poc_inact_window_t2_ParamLimits

0xf094,	// (0x0008b01c) popup_call_poc_inact_window_t2

0xf0a9,	// (0x0008b031) popup_call_poc_inact_window_t3_ParamLimits

0xf0a9,	// (0x0008b031) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008b493) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008b493) popup_call_poc_inact_window_t

0x1828,	// (0x0007d7b0) context_pane_ParamLimits

0x8902,	// (0x0008488a) signal_pane_ParamLimits

0xe290,	// (0x0008a218) main_call2_pane

0x887e,	// (0x00084806) popup_phob_thumbnail2_window_ParamLimits

0x887e,	// (0x00084806) popup_phob_thumbnail2_window

0x8085,	// (0x0008400d) aid_hotspot_pointer_arrow_pane

0x808d,	// (0x00084015) aid_hotspot_pointer_hand_pane

0x8645,	// (0x000845cd) phob_pre_status_pane_g5

0x67db,	// (0x00082763) cams_zoom_pane_ParamLimits

0x67e7,	// (0x0008276f) image_vga_pane_ParamLimits

0x67f4,	// (0x0008277c) main_camera_pane_g1_ParamLimits

0x6800,	// (0x00082788) main_camera_pane_g2_ParamLimits

0x680c,	// (0x00082794) main_camera_pane_g3_ParamLimits

0x6818,	// (0x000827a0) main_camera_pane_g4_ParamLimits

0x6824,	// (0x000827ac) main_camera_pane_g5_ParamLimits

0x6830,	// (0x000827b8) main_camera_pane_g6_ParamLimits

0x683c,	// (0x000827c4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008b192) main_camera_pane_g_ParamLimits

0x6848,	// (0x000827d0) main_camera_pane_t1_ParamLimits

0x685a,	// (0x000827e2) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008b1a3) main_camera_pane_t_ParamLimits

0xe00e,	// (0x00089f96) bg_popup_preview_window_pane_cp01_ParamLimits

0xe00e,	// (0x00089f96) bg_popup_preview_window_pane_cp01

0x07e6,	// (0x0007c76e) popup_phob_thumbnail2_window_g1_ParamLimits

0x07e6,	// (0x0007c76e) popup_phob_thumbnail2_window_g1

0xddb3,	// (0x00089d3b) call2_cli_visual_pane

0x83b4,	// (0x0008433c) popup_call2_audio_conf_window_ParamLimits

0x83b4,	// (0x0008433c) popup_call2_audio_conf_window

0x83c7,	// (0x0008434f) popup_call2_audio_first_window_ParamLimits

0x83c7,	// (0x0008434f) popup_call2_audio_first_window

0x8443,	// (0x000843cb) popup_call2_audio_in_window_ParamLimits

0x8443,	// (0x000843cb) popup_call2_audio_in_window

0x8473,	// (0x000843fb) popup_call2_audio_out_window_ParamLimits

0x8473,	// (0x000843fb) popup_call2_audio_out_window

0x84bf,	// (0x00084447) popup_call2_audio_second_window_ParamLimits

0x84bf,	// (0x00084447) popup_call2_audio_second_window

0x850b,	// (0x00084493) popup_call2_audio_wait_window_ParamLimits

0x850b,	// (0x00084493) popup_call2_audio_wait_window

0xddb3,	// (0x00089d3b) bg_popup_call2_act_pane_cp03

0xdff0,	// (0x00089f78) list_conf_pane_cp

0x07f2,	// (0x0007c77a) popup_call2_audio_conf_window_t1

0xe9f0,	// (0x0008a978) list_single_graphic_popup_conf2_pane_ParamLimits

0xe9f0,	// (0x0008a978) list_single_graphic_popup_conf2_pane

0xea03,	// (0x0008a98b) list_highlight_pane_cp04

0x0800,	// (0x0007c788) list_single_graphic_popup_conf2_pane_g1

0xea14,	// (0x0008a99c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008b49a) list_single_graphic_popup_conf2_pane_g

0x0808,	// (0x0007c790) list_single_graphic_popup_conf2_pane_t1

0x0816,	// (0x0007c79e) bg_popup_call2_act_pane_cp01_ParamLimits

0x0816,	// (0x0007c79e) bg_popup_call2_act_pane_cp01

0x08a0,	// (0x0007c828) call_type_pane_cp05_ParamLimits

0x08a0,	// (0x0007c828) call_type_pane_cp05

0x08f4,	// (0x0007c87c) popup_call2_audio_second_window_g1_ParamLimits

0x08f4,	// (0x0007c87c) popup_call2_audio_second_window_g1

0x0948,	// (0x0007c8d0) popup_call2_audio_second_window_g2_ParamLimits

0x0948,	// (0x0007c8d0) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008b49f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008b49f) popup_call2_audio_second_window_g

0x09ad,	// (0x0007c935) popup_call2_audio_second_window_t1_ParamLimits

0x09ad,	// (0x0007c935) popup_call2_audio_second_window_t1

0x0a68,	// (0x0007c9f0) popup_call2_audio_second_window_t2_ParamLimits

0x0a68,	// (0x0007c9f0) popup_call2_audio_second_window_t2

0x0abb,	// (0x0007ca43) popup_call2_audio_second_window_t3_ParamLimits

0x0abb,	// (0x0007ca43) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008b4a6) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008b4a6) popup_call2_audio_second_window_t

0xddb3,	// (0x00089d3b) bg_popup_call2_in_pane_cp02

0xddbd,	// (0x00089d45) call_type_pane_cp04

0xddc5,	// (0x00089d4d) popup_call2_audio_wait_window_g1

0xddcd,	// (0x00089d55) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008b081) popup_call2_audio_wait_window_g

0xddd5,	// (0x00089d5d) popup_call2_audio_wait_window_t3

0x0bae,	// (0x0007cb36) bg_popup_call2_act_pane_ParamLimits

0x0bae,	// (0x0007cb36) bg_popup_call2_act_pane

0x0c6e,	// (0x0007cbf6) call_type_pane_cp03_ParamLimits

0x0c6e,	// (0x0007cbf6) call_type_pane_cp03

0x0cd2,	// (0x0007cc5a) popup_call2_audio_first_window_g1_ParamLimits

0x0cd2,	// (0x0007cc5a) popup_call2_audio_first_window_g1

0x0d42,	// (0x0007ccca) popup_call2_audio_first_window_g2_ParamLimits

0x0d42,	// (0x0007ccca) popup_call2_audio_first_window_g2

0xe932,	// (0x0008a8ba) popup_call2_audio_first_window_g3_ParamLimits

0xe932,	// (0x0008a8ba) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008b4af) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008b4af) popup_call2_audio_first_window_g

0x0e20,	// (0x0007cda8) popup_call2_audio_first_window_t1_ParamLimits

0x0e20,	// (0x0007cda8) popup_call2_audio_first_window_t1

0x0f23,	// (0x0007ceab) popup_call2_audio_first_window_t4_ParamLimits

0x0f23,	// (0x0007ceab) popup_call2_audio_first_window_t4

0x1006,	// (0x0007cf8e) popup_call2_audio_first_window_t5_ParamLimits

0x1006,	// (0x0007cf8e) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008b4ba) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008b4ba) popup_call2_audio_first_window_t

0xe006,	// (0x00089f8e) bg_popup_call2_act_pane_g1

0x16b3,	// (0x0007d63b) popup_cale_lunar_info_window_t1

0x16c1,	// (0x0007d649) popup_cale_lunar_info_window_t2

0x16cf,	// (0x0007d657) popup_cale_lunar_info_window_t3

0xddb3,	// (0x00089d3b) bg_popup_call2_bubble_pane

0x1107,	// (0x0007d08f) bg_popup_call2_in_pane_cp01_ParamLimits

0x1107,	// (0x0007d08f) bg_popup_call2_in_pane_cp01

0xda8f,	// (0x00089a17) call_type_pane_cp02

0x114f,	// (0x0007d0d7) popup_call2_audio_out_window_g1_ParamLimits

0x114f,	// (0x0007d0d7) popup_call2_audio_out_window_g1

0x117b,	// (0x0007d103) popup_call2_audio_out_window_g2_ParamLimits

0x117b,	// (0x0007d103) popup_call2_audio_out_window_g2

0x11a3,	// (0x0007d12b) popup_call2_audio_out_window_g3_ParamLimits

0x11a3,	// (0x0007d12b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008b4c3) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008b4c3) popup_call2_audio_out_window_g

0x11de,	// (0x0007d166) popup_call2_audio_out_window_t1_ParamLimits

0x11de,	// (0x0007d166) popup_call2_audio_out_window_t1

0x123d,	// (0x0007d1c5) popup_call2_audio_out_window_t2_ParamLimits

0x123d,	// (0x0007d1c5) popup_call2_audio_out_window_t2

0x1291,	// (0x0007d219) popup_call2_audio_out_window_t3_ParamLimits

0x1291,	// (0x0007d219) popup_call2_audio_out_window_t3

0x12a7,	// (0x0007d22f) popup_call2_audio_out_window_t4_ParamLimits

0x12a7,	// (0x0007d22f) popup_call2_audio_out_window_t4

0x12bd,	// (0x0007d245) popup_call2_audio_out_window_t5_ParamLimits

0x12bd,	// (0x0007d245) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008b4cc) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008b4cc) popup_call2_audio_out_window_t

0x1321,	// (0x0007d2a9) bg_popup_call2_in_pane_ParamLimits

0x1321,	// (0x0007d2a9) bg_popup_call2_in_pane

0x137d,	// (0x0007d305) popup_call2_audio_in_window_g1_ParamLimits

0x137d,	// (0x0007d305) popup_call2_audio_in_window_g1

0x13b5,	// (0x0007d33d) popup_call2_audio_in_window_g2_ParamLimits

0x13b5,	// (0x0007d33d) popup_call2_audio_in_window_g2

0x13ed,	// (0x0007d375) popup_call2_audio_in_window_g3_ParamLimits

0x13ed,	// (0x0007d375) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008b4d9) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008b4d9) popup_call2_audio_in_window_g

0x1445,	// (0x0007d3cd) popup_call2_audio_in_window_t1_ParamLimits

0x1445,	// (0x0007d3cd) popup_call2_audio_in_window_t1

0x14c5,	// (0x0007d44d) popup_call2_audio_in_window_t2_ParamLimits

0x14c5,	// (0x0007d44d) popup_call2_audio_in_window_t2

0x1545,	// (0x0007d4cd) popup_call2_audio_in_window_t3_ParamLimits

0x1545,	// (0x0007d4cd) popup_call2_audio_in_window_t3

0x155f,	// (0x0007d4e7) popup_call2_audio_in_window_t4_ParamLimits

0x155f,	// (0x0007d4e7) popup_call2_audio_in_window_t4

0x1571,	// (0x0007d4f9) popup_call2_audio_in_window_t5_ParamLimits

0x1571,	// (0x0007d4f9) popup_call2_audio_in_window_t5

0x1586,	// (0x0007d50e) popup_call2_audio_in_window_t6_ParamLimits

0x1586,	// (0x0007d50e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008b4e2) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008b4e2) popup_call2_audio_in_window_t

0xe006,	// (0x00089f8e) bg_popup_call2_in_pane_g1

0x16dd,	// (0x0007d665) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0008b55d) popup_cale_lunar_info_window_t

0xe00e,	// (0x00089f96) bg_popup_call2_rect_pane_ParamLimits

0xe00e,	// (0x00089f96) bg_popup_call2_rect_pane

0xddb3,	// (0x00089d3b) call2_cli_visual_graphic_pane

0xddb3,	// (0x00089d3b) call2_cli_visual_text_pane

0x8987,	// (0x0008490f) smil_status_volume_pane_g3

0x0002,

0xe134,	// (0x0008a0bc) call2_cli_visual_graphic_pane_g1

0xe134,	// (0x0008a0bc) call2_cli_visual_graphic_pane_g2

0xe134,	// (0x0008a0bc) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008b4ef) call2_cli_visual_graphic_pane_g

0x159b,	// (0x0007d523) bg_popup_call2_rect_pane_g1

0xe1d2,	// (0x0008a15a) bg_popup_call2_rect_pane_g2

0x15a3,	// (0x0007d52b) bg_popup_call2_rect_pane_g3

0x15ab,	// (0x0007d533) bg_popup_call2_rect_pane_g4

0x15b3,	// (0x0007d53b) bg_popup_call2_rect_pane_g5

0x15bb,	// (0x0007d543) bg_popup_call2_rect_pane_g6

0x15c3,	// (0x0007d54b) bg_popup_call2_rect_pane_g7

0x15cb,	// (0x0007d553) bg_popup_call2_rect_pane_g8

0x15d3,	// (0x0007d55b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008b4f6) bg_popup_call2_rect_pane_g

0x15db,	// (0x0007d563) bg_popup_call2_bubble_pane_g1

0x15e3,	// (0x0007d56b) bg_popup_call2_bubble_pane_g2

0x15eb,	// (0x0007d573) bg_popup_call2_bubble_pane_g3

0x15f3,	// (0x0007d57b) bg_popup_call2_bubble_pane_g4

0x15fb,	// (0x0007d583) bg_popup_call2_bubble_pane_g5

0x1603,	// (0x0007d58b) bg_popup_call2_bubble_pane_g6

0x160b,	// (0x0007d593) bg_popup_call2_bubble_pane_g7

0x1613,	// (0x0007d59b) bg_popup_call2_bubble_pane_g8

0x161b,	// (0x0007d5a3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008b509) bg_popup_call2_bubble_pane_g

0x60c3,	// (0x0008204b) aid_cale_week_size_cell_pane

0x686c,	// (0x000827f4) aid_cams_cif_uncrop_pane_ParamLimits

0x686c,	// (0x000827f4) aid_cams_cif_uncrop_pane

0x69c4,	// (0x0008294c) aid_cams_size_cell_ParamLimits

0x69c4,	// (0x0008294c) aid_cams_size_cell

0x69d0,	// (0x00082958) grid_cams_pane_ParamLimits

0x69dc,	// (0x00082964) linegrid_cams_pane_ParamLimits

0x6baf,	// (0x00082b37) call_video_pane_t1

0x6bcc,	// (0x00082b54) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008b1f6) call_video_pane_t

0x6f9c,	// (0x00082f24) aid_cale_month_size_cell_pane_ParamLimits

0x6f9c,	// (0x00082f24) aid_cale_month_size_cell_pane

0xf61e,	// (0x0008b5a6) smil_status_volume_pane_g

0x8994,	// (0x0008491c) volume_smil_pane_ParamLimits

0x593b,	// (0x000818c3) aid_popup2_width_pane

0x5fe3,	// (0x00081f6b) cell_qdial_pane_g4_ParamLimits

0x5fe3,	// (0x00081f6b) cell_qdial_pane_g4

0x7ac3,	// (0x00083a4b) aid_blid_cardinal_pane_ParamLimits

0x7acf,	// (0x00083a57) aid_blid_destination_pane_ParamLimits

0x7acf,	// (0x00083a57) aid_blid_destination_pane

0xe00e,	// (0x00089f96) bg_popup_call_poc_act_pane_ParamLimits

0xe00e,	// (0x00089f96) bg_popup_call_poc_act_pane

0xe00e,	// (0x00089f96) bg_popup_call_poc_inact_pane_ParamLimits

0xe00e,	// (0x00089f96) bg_popup_call_poc_inact_pane

0x1623,	// (0x0007d5ab) bg_popup_call_poc_act_pane_g1

0x162b,	// (0x0007d5b3) bg_popup_call_poc_act_pane_g2

0x1633,	// (0x0007d5bb) bg_popup_call_poc_act_pane_g3

0x15f3,	// (0x0007d57b) bg_popup_call_poc_act_pane_g4

0x15fb,	// (0x0007d583) bg_popup_call_poc_act_pane_g5

0x163b,	// (0x0007d5c3) bg_popup_call_poc_act_pane_g6

0x160b,	// (0x0007d593) bg_popup_call_poc_act_pane_g7

0x1643,	// (0x0007d5cb) bg_popup_call_poc_act_pane_g8

0xddb3,	// (0x00089d3b) main_usb_pane

0x87d9,	// (0x00084761) popup_cale_lunar_info_window

0x6e4f,	// (0x00082dd7) im_reading_pane_t1_ParamLimits

0xe38f,	// (0x0008a317) list_im_pane_ParamLimits

0xe3a0,	// (0x0008a328) scroll_pane_cp07_ParamLimits

0xddb3,	// (0x00089d3b) grid_highlight_pane_cp012

0xe00e,	// (0x00089f96) mup_scale_pane_ParamLimits

0xe932,	// (0x0008a8ba) main_usb_pane_g1_ParamLimits

0xe932,	// (0x0008a8ba) main_usb_pane_g1

0x856a,	// (0x000844f2) main_usb_pane_g2_ParamLimits

0x856a,	// (0x000844f2) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0008b546) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0008b546) main_usb_pane_g

0x8576,	// (0x000844fe) main_usb_pane_t1_ParamLimits

0x8576,	// (0x000844fe) main_usb_pane_t1

0x8588,	// (0x00084510) main_usb_pane_t2_ParamLimits

0x8588,	// (0x00084510) main_usb_pane_t2

0x859a,	// (0x00084522) main_usb_pane_t3_ParamLimits

0x859a,	// (0x00084522) main_usb_pane_t3

0x85ac,	// (0x00084534) main_usb_pane_t4_ParamLimits

0x85ac,	// (0x00084534) main_usb_pane_t4

0x85be,	// (0x00084546) main_usb_pane_t5_ParamLimits

0x85be,	// (0x00084546) main_usb_pane_t5

0x85d0,	// (0x00084558) main_usb_pane_t6_ParamLimits

0x85d0,	// (0x00084558) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0008b54b) main_usb_pane_t_ParamLimits

0x7a72,	// (0x000839fa) aid_text_placing

0x7a7b,	// (0x00083a03) main_location2_pane_t1_ParamLimits

0x7a8d,	// (0x00083a15) main_location2_pane_t2_ParamLimits

0x7a9f,	// (0x00083a27) main_location2_pane_t3_ParamLimits

0x7ab1,	// (0x00083a39) main_location2_pane_t4_ParamLimits

0x7ab1,	// (0x00083a39) main_location2_pane_t4

0xf3cf,	// (0x0008b357) main_location2_pane_t_ParamLimits

0xe04a,	// (0x00089fd2) find_pinb_pane_g2_ParamLimits

0xe04a,	// (0x00089fd2) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0008b0a7) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0008b0a7) find_pinb_pane_g

0xe056,	// (0x00089fde) find_pinb_pane_t1_ParamLimits

0xe068,	// (0x00089ff0) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008b0ac) find_pinb_pane_t_ParamLimits

0xddb3,	// (0x00089d3b) main_call3_pane

0x7374,	// (0x000832fc) cale_month_day_heading_pane_t1_ParamLimits

0x73a7,	// (0x0008332f) cale_month_day_heading_pane_t2_ParamLimits

0x73d1,	// (0x00083359) cale_month_day_heading_pane_t3_ParamLimits

0x73fb,	// (0x00083383) cale_month_day_heading_pane_t4_ParamLimits

0x7425,	// (0x000833ad) cale_month_day_heading_pane_t5_ParamLimits

0x744f,	// (0x000833d7) cale_month_day_heading_pane_t6_ParamLimits

0x7479,	// (0x00083401) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008b22e) cale_month_day_heading_pane_t_ParamLimits

0xe5f9,	// (0x0008a581) smil_status_volume_pane

0x81ab,	// (0x00084133) postcard_address_pane_ParamLimits

0x81ab,	// (0x00084133) postcard_address_pane

0x81b7,	// (0x0008413f) postcard_message_pane_ParamLimits

0x81b7,	// (0x0008413f) postcard_message_pane

0x8548,	// (0x000844d0) call2_cli_visual_pane_t1_ParamLimits

0x8548,	// (0x000844d0) call2_cli_visual_pane_t1

0x8ae5,	// (0x00084a6d) postcard_message_pane_t1_ParamLimits

0x8ae5,	// (0x00084a6d) postcard_message_pane_t1

0x8ace,	// (0x00084a56) postcard_address_pane_t1_ParamLimits

0x8ace,	// (0x00084a56) postcard_address_pane_t1

0x8ac1,	// (0x00084a49) popup_call3_audio_in_window_ParamLimits

0x8ac1,	// (0x00084a49) popup_call3_audio_in_window

0x89a9,	// (0x00084931) bg_popup_call3_in_pane_ParamLimits

0x89a9,	// (0x00084931) bg_popup_call3_in_pane

0x8a07,	// (0x0008498f) popup_call3_audio_in_window_g1_ParamLimits

0x8a07,	// (0x0008498f) popup_call3_audio_in_window_g1

0x8a1f,	// (0x000849a7) popup_call3_audio_in_window_g2_ParamLimits

0x8a1f,	// (0x000849a7) popup_call3_audio_in_window_g2

0x8a37,	// (0x000849bf) popup_call3_audio_in_window_g3_ParamLimits

0x8a37,	// (0x000849bf) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0008b5ad) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0008b5ad) popup_call3_audio_in_window_g

0x8a5f,	// (0x000849e7) popup_call3_audio_in_window_t1_ParamLimits

0x8a5f,	// (0x000849e7) popup_call3_audio_in_window_t1

0x8a87,	// (0x00084a0f) popup_call3_audio_in_window_t2_ParamLimits

0x8a87,	// (0x00084a0f) popup_call3_audio_in_window_t2

0x8aaf,	// (0x00084a37) popup_call3_audio_in_window_t3_ParamLimits

0x8aaf,	// (0x00084a37) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0008b5b6) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0008b5b6) popup_call3_audio_in_window_t

0xe290,	// (0x0008a218) bg_popup_call3_rect_pane

0x159b,	// (0x0007d523) bg_popup_call3_rect_pane_g1

0xe1d2,	// (0x0008a15a) bg_popup_call3_rect_pane_g2

0x15a3,	// (0x0007d52b) bg_popup_call3_rect_pane_g3

0x15ab,	// (0x0007d533) bg_popup_call3_rect_pane_g4

0x15b3,	// (0x0007d53b) bg_popup_call3_rect_pane_g5

0x15bb,	// (0x0007d543) bg_popup_call3_rect_pane_g6

0x15c3,	// (0x0007d54b) bg_popup_call3_rect_pane_g7

0x7db5,	// (0x00083d3d) mup_visualizer_osc_pane

0xed83,	// (0x0008ad0b) mup_visualizer_spec_pane

0x89c9,	// (0x00084951) call3_video_qcif_pane_ParamLimits

0x89c9,	// (0x00084951) call3_video_qcif_pane

0x89d9,	// (0x00084961) call3_video_qcif_uncrop_pane_ParamLimits

0x89d9,	// (0x00084961) call3_video_qcif_uncrop_pane

0x89e5,	// (0x0008496d) call3_video_subqcif_pane_ParamLimits

0x89e5,	// (0x0008496d) call3_video_subqcif_pane

0x89f7,	// (0x0008497f) call3_video_subqcif_uncrop_pane_ParamLimits

0x89f7,	// (0x0008497f) call3_video_subqcif_uncrop_pane

0x8a4f,	// (0x000849d7) popup_call3_audio_in_window_g4_ParamLimits

0x8a4f,	// (0x000849d7) popup_call3_audio_in_window_g4

0x8976,	// (0x000848fe) mup_spec_half_pane

0x897f,	// (0x00084907) mup_spec_half_pane_cp

0x1888,	// (0x0007d810) mup_osc_middle_pane

0x1891,	// (0x0007d819) mup_visualizer_osc_pane_g1

0x8957,	// (0x000848df) mup_spec_bar_pane_ParamLimits

0x8957,	// (0x000848df) mup_spec_bar_pane

0x1875,	// (0x0007d7fd) mup_spec_bar_pane_g1

0x187f,	// (0x0007d807) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0008b5a1) mup_spec_bar_pane_g

0x60c3,	// (0x0008204b) aid_cale_week_size_cell_pane_ParamLimits

0x60dd,	// (0x00082065) bg_cale_heading_pane_ParamLimits

0x60fa,	// (0x00082082) bg_cale_pane_cp01_ParamLimits

0x611c,	// (0x000820a4) cale_week_corner_pane_ParamLimits

0x613b,	// (0x000820c3) cale_week_day_heading_pane_ParamLimits

0x615d,	// (0x000820e5) cale_week_scroll_pane_g1_ParamLimits

0x6175,	// (0x000820fd) cale_week_scroll_pane_g2_ParamLimits

0x618d,	// (0x00082115) cale_week_scroll_pane_g3_ParamLimits

0x61a5,	// (0x0008212d) cale_week_scroll_pane_g4_ParamLimits

0x61bd,	// (0x00082145) cale_week_scroll_pane_g5_ParamLimits

0x61d5,	// (0x0008215d) cale_week_scroll_pane_g6_ParamLimits

0x61ed,	// (0x00082175) cale_week_scroll_pane_g7_ParamLimits

0x6205,	// (0x0008218d) cale_week_scroll_pane_g8_ParamLimits

0x621d,	// (0x000821a5) cale_week_scroll_pane_g9_ParamLimits

0x623a,	// (0x000821c2) cale_week_scroll_pane_g10_ParamLimits

0x6257,	// (0x000821df) cale_week_scroll_pane_g11_ParamLimits

0x6274,	// (0x000821fc) cale_week_scroll_pane_g12_ParamLimits

0x6291,	// (0x00082219) cale_week_scroll_pane_g13_ParamLimits

0x62ae,	// (0x00082236) cale_week_scroll_pane_g14_ParamLimits

0x62cb,	// (0x00082253) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008b138) cale_week_scroll_pane_g_ParamLimits

0x6300,	// (0x00082288) cale_week_time_pane_ParamLimits

0x6318,	// (0x000822a0) grid_cale_week_pane_ParamLimits

0xe20f,	// (0x0008a197) listscroll_cale_week_pane_t1

0xe221,	// (0x0008a1a9) scroll_pane_cp08_ParamLimits

0x6ffc,	// (0x00082f84) cale_month_corner_pane_ParamLimits

0xe5cf,	// (0x0008a557) cale_month_pane_t1

0x732b,	// (0x000832b3) cale_month_week_pane_ParamLimits

0xe932,	// (0x0008a8ba) popup_call_status_window_g1_ParamLimits

0x7889,	// (0x00083811) popup_call_status_window_g2_ParamLimits

0x7895,	// (0x0008381d) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008b2de) popup_call_status_window_g_ParamLimits

0xe983,	// (0x0008a90b) aid_call2_pane

0x8000,	// (0x00083f88) msg_header_pane_g1

0x81ab,	// (0x00084133) postcard_address2_pane_ParamLimits

0x81ab,	// (0x00084133) postcard_address2_pane

0x81b7,	// (0x0008413f) postcard_message2_pane_ParamLimits

0x81b7,	// (0x0008413f) postcard_message2_pane

0x890e,	// (0x00084896) message2_row_pane_ParamLimits

0x890e,	// (0x00084896) message2_row_pane

0x8926,	// (0x000848ae) address2_row_pane_ParamLimits

0x8926,	// (0x000848ae) address2_row_pane

0x1843,	// (0x0007d7cb) postcard_message2_row_pane_g1

0x184b,	// (0x0007d7d3) postcard_message2_row_pane_t1

0x1843,	// (0x0007d7cb) address2_row_pane_g1

0x184b,	// (0x0007d7d3) address2_row_pane_t1

0x675c,	// (0x000826e4) aid_size_cell_vorec

0xddb3,	// (0x00089d3b) main_rss_pane

0x8939,	// (0x000848c1) rss_list_single_pane_ParamLimits

0x8939,	// (0x000848c1) rss_list_single_pane

0x1859,	// (0x0007d7e1) rss_list_single_pane_t1

0x1867,	// (0x0007d7ef) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0008b59c) rss_list_single_pane_t

0xddb3,	// (0x00089d3b) main_camera2_pane

0xddb3,	// (0x00089d3b) main_video2_pane

0x8b35,	// (0x00084abd) cams_zoom_pane_cp2_ParamLimits

0x8b35,	// (0x00084abd) cams_zoom_pane_cp2

0x8b41,	// (0x00084ac9) image2_vga_pane_ParamLimits

0x8b41,	// (0x00084ac9) image2_vga_pane

0x8b50,	// (0x00084ad8) main_camera2_pane_g1_ParamLimits

0x8b50,	// (0x00084ad8) main_camera2_pane_g1

0x8b5c,	// (0x00084ae4) main_camera2_pane_g2_ParamLimits

0x8b5c,	// (0x00084ae4) main_camera2_pane_g2

0x8b68,	// (0x00084af0) main_camera2_pane_g3_ParamLimits

0x8b68,	// (0x00084af0) main_camera2_pane_g3

0x8b74,	// (0x00084afc) main_camera2_pane_g4_ParamLimits

0x8b74,	// (0x00084afc) main_camera2_pane_g4

0x8b80,	// (0x00084b08) main_camera2_pane_g5_ParamLimits

0x8b80,	// (0x00084b08) main_camera2_pane_g5

0x8b8c,	// (0x00084b14) main_camera2_pane_g6_ParamLimits

0x8b8c,	// (0x00084b14) main_camera2_pane_g6

0x8b98,	// (0x00084b20) main_camera2_pane_g7_ParamLimits

0x8b98,	// (0x00084b20) main_camera2_pane_g7

0x8ba4,	// (0x00084b2c) main_camera2_pane_g8_ParamLimits

0x8ba4,	// (0x00084b2c) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0008b5bd) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0008b5bd) main_camera2_pane_g

0x8bbc,	// (0x00084b44) main_camera2_pane_t1_ParamLimits

0x8bbc,	// (0x00084b44) main_camera2_pane_t1

0x8bce,	// (0x00084b56) main_camera2_pane_t2_ParamLimits

0x8bce,	// (0x00084b56) main_camera2_pane_t2

0x8be0,	// (0x00084b68) main_camera2_pane_t3_ParamLimits

0x8be0,	// (0x00084b68) main_camera2_pane_t3

0x8bf2,	// (0x00084b7a) main_camera2_pane_t4_ParamLimits

0x8bf2,	// (0x00084b7a) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0008b5d0) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0008b5d0) main_camera2_pane_t

0x8c4d,	// (0x00084bd5) cams_zoom_pane_cp4_ParamLimits

0x8c4d,	// (0x00084bd5) cams_zoom_pane_cp4

0x8c5d,	// (0x00084be5) image2_cif_pane_ParamLimits

0x8c5d,	// (0x00084be5) image2_cif_pane

0x8c6e,	// (0x00084bf6) image2_subqcif_pane_ParamLimits

0x8c6e,	// (0x00084bf6) image2_subqcif_pane

0x8c7b,	// (0x00084c03) main_video2_pane_g1_ParamLimits

0x8c7b,	// (0x00084c03) main_video2_pane_g1

0x8c8d,	// (0x00084c15) main_video2_pane_g2_ParamLimits

0x8c8d,	// (0x00084c15) main_video2_pane_g2

0x8c9d,	// (0x00084c25) main_video2_pane_g3_ParamLimits

0x8c9d,	// (0x00084c25) main_video2_pane_g3

0x8cad,	// (0x00084c35) main_video2_pane_g4_ParamLimits

0x8cad,	// (0x00084c35) main_video2_pane_g4

0x8cbd,	// (0x00084c45) main_video2_pane_g5_ParamLimits

0x8cbd,	// (0x00084c45) main_video2_pane_g5

0x8ccd,	// (0x00084c55) main_video2_pane_g6_ParamLimits

0x8ccd,	// (0x00084c55) main_video2_pane_g6

0x0005,

0xf657,	// (0x0008b5df) main_video2_pane_g_ParamLimits

0xf657,	// (0x0008b5df) main_video2_pane_g

0x8cdf,	// (0x00084c67) main_video2_pane_t1_ParamLimits

0x8cdf,	// (0x00084c67) main_video2_pane_t1

0x8cf9,	// (0x00084c81) main_video2_pane_t2_ParamLimits

0x8cf9,	// (0x00084c81) main_video2_pane_t2

0x8d1f,	// (0x00084ca7) main_video2_pane_t3_ParamLimits

0x8d1f,	// (0x00084ca7) main_video2_pane_t3

0x0002,

0xf664,	// (0x0008b5ec) main_video2_pane_t_ParamLimits

0xf664,	// (0x0008b5ec) main_video2_pane_t

0x867f,	// (0x00084607) call_muted_g2

0x0001,

0xf606,	// (0x0008b58e) call_muted_g

0xddb3,	// (0x00089d3b) main_mup2_pane

0x1943,	// (0x0007d8cb) main_mup2_pane_g1_ParamLimits

0x1943,	// (0x0007d8cb) main_mup2_pane_g1

0x8d45,	// (0x00084ccd) main_mup2_pane_g2_ParamLimits

0x8d45,	// (0x00084ccd) main_mup2_pane_g2

0x8fb1,	// (0x00084f39) main_mup_pane_g13_cp1

0x8fb9,	// (0x00084f41) mup_volume_pane_cp1

0x8d65,	// (0x00084ced) main_mup2_pane_g4_ParamLimits

0x8d65,	// (0x00084ced) main_mup2_pane_g4

0x8d76,	// (0x00084cfe) main_mup2_pane_g5_ParamLimits

0x8d76,	// (0x00084cfe) main_mup2_pane_g5

0x8d87,	// (0x00084d0f) main_mup2_pane_g6_ParamLimits

0x8d87,	// (0x00084d0f) main_mup2_pane_g6

0x8d98,	// (0x00084d20) main_mup2_pane_g7_ParamLimits

0x8d98,	// (0x00084d20) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0008b5f3) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0008b5f3) main_mup2_pane_g

0x8db4,	// (0x00084d3c) main_mup2_pane_t1_ParamLimits

0x8db4,	// (0x00084d3c) main_mup2_pane_t1

0x8dcb,	// (0x00084d53) main_mup2_pane_t2_ParamLimits

0x8dcb,	// (0x00084d53) main_mup2_pane_t2

0x8de2,	// (0x00084d6a) main_mup2_pane_t3_ParamLimits

0x8de2,	// (0x00084d6a) main_mup2_pane_t3

0x8df9,	// (0x00084d81) main_mup2_pane_t4_ParamLimits

0x8df9,	// (0x00084d81) main_mup2_pane_t4

0x8e13,	// (0x00084d9b) main_mup2_pane_t5_ParamLimits

0x8e13,	// (0x00084d9b) main_mup2_pane_t5

0x8e2d,	// (0x00084db5) main_mup2_pane_t6_ParamLimits

0x8e2d,	// (0x00084db5) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0008b602) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0008b602) main_mup2_pane_t

0x8e61,	// (0x00084de9) mup2_visualizer_pane_ParamLimits

0x8e61,	// (0x00084de9) mup2_visualizer_pane

0x8e93,	// (0x00084e1b) mup_progress_pane_cp_ParamLimits

0x8e93,	// (0x00084e1b) mup_progress_pane_cp

0x8f9c,	// (0x00084f24) mup_volume_pane_cp_ParamLimits

0x8f9c,	// (0x00084f24) mup_volume_pane_cp

0x8eaa,	// (0x00084e32) mup2_visualizer_pane_g1_ParamLimits

0x8eaa,	// (0x00084e32) mup2_visualizer_pane_g1

0x1915,	// (0x0007d89d) mup2_visualizer_pane_g2_ParamLimits

0x1915,	// (0x0007d89d) mup2_visualizer_pane_g2

0x8ebf,	// (0x00084e47) mup2_visualizer_pane_g3_ParamLimits

0x8ebf,	// (0x00084e47) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0008b60f) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0008b60f) mup2_visualizer_pane_g

0x8368,	// (0x000842f0) aid_size_cell_fmradio

0x8761,	// (0x000846e9) aid_height_parent_landcape

0xe42d,	// (0x0008a3b5) wml_content_pane_cp

0xe435,	// (0x0008a3bd) wml_tabs_pane

0xe43e,	// (0x0008a3c6) popup_wml_miniature_window

0xe446,	// (0x0008a3ce) scroll_pane_cp021

0xe45a,	// (0x0008a3e2) wml_content_pane_comp8

0xddb3,	// (0x00089d3b) bg_popup_sub_pane_cp05

0x1933,	// (0x0007d8bb) popup_wml_miniature_window_g1

0x193b,	// (0x0007d8c3) wml_miniature_view_pane

0x8ecb,	// (0x00084e53) aid_size_wml_view

0x8ed3,	// (0x00084e5b) wml_miniature_view_pane_g1

0x8edc,	// (0x00084e64) wml_miniature_view_pane_g2

0x8ee5,	// (0x00084e6d) wml_miniature_view_pane_g3

0x8eed,	// (0x00084e75) wml_miniature_view_pane_g4

0x8ef5,	// (0x00084e7d) wml_miniature_view_pane_g5

0x8efd,	// (0x00084e85) wml_miniature_view_pane_g6

0x8f05,	// (0x00084e8d) wml_miniature_view_pane_g7

0x8f0d,	// (0x00084e95) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0008b616) wml_miniature_view_pane_g

0x1943,	// (0x0007d8cb) background_graphic_ParamLimits

0x1943,	// (0x0007d8cb) background_graphic

0x194f,	// (0x0007d8d7) wml_tabs_2_pane

0x1958,	// (0x0007d8e0) wml_tabs_3_pane_ParamLimits

0x1958,	// (0x0007d8e0) wml_tabs_3_pane

0x196a,	// (0x0007d8f2) wml_tabs_4_pane_ParamLimits

0x196a,	// (0x0007d8f2) wml_tabs_4_pane

0x1980,	// (0x0007d908) wml_tabs_5_pane_ParamLimits

0x1980,	// (0x0007d908) wml_tabs_5_pane

0x199a,	// (0x0007d922) wml_tabs_pane_g2_ParamLimits

0x199a,	// (0x0007d922) wml_tabs_pane_g2

0x19ae,	// (0x0007d936) wml_tabs_pane_g3_ParamLimits

0x19ae,	// (0x0007d936) wml_tabs_pane_g3

0x8f15,	// (0x00084e9d) wml_tabs_2_active_pane_ParamLimits

0x8f15,	// (0x00084e9d) wml_tabs_2_active_pane

0x8f25,	// (0x00084ead) wml_tabs_2_passive_pane_ParamLimits

0x8f25,	// (0x00084ead) wml_tabs_2_passive_pane

0x8f35,	// (0x00084ebd) wml_tabs_3_active_pane_cp_ParamLimits

0x8f35,	// (0x00084ebd) wml_tabs_3_active_pane_cp

0x8f46,	// (0x00084ece) wml_tabs_3_passive_pane_ParamLimits

0x8f46,	// (0x00084ece) wml_tabs_3_passive_pane

0x8f57,	// (0x00084edf) wml_tabs_3_passive_pane_cp_ParamLimits

0x8f57,	// (0x00084edf) wml_tabs_3_passive_pane_cp

0x8f68,	// (0x00084ef0) tabs_4_active_pane

0x8f70,	// (0x00084ef8) tabs_4_passive_pane

0x8f78,	// (0x00084f00) tabs_4_passive_pane_cp

0x8f80,	// (0x00084f08) tabs_4_passive_pane_cp2

0x8562,	// (0x000844ea) aid_height_text

0x7d82,	// (0x00083d0a) mup_volume_cont_pane_ParamLimits

0x7d82,	// (0x00083d0a) mup_volume_cont_pane

0x5ca3,	// (0x00081c2b) aid_size_cell_pinb

0x5cad,	// (0x00081c35) aid_size_list_pinb

0x8e7c,	// (0x00084e04) mup2_volume_cont_pane_ParamLimits

0x8e7c,	// (0x00084e04) mup2_volume_cont_pane

0x8f88,	// (0x00084f10) mup2_volume_cont_pane_g1_ParamLimits

0x8f88,	// (0x00084f10) mup2_volume_cont_pane_g1

0x5943,	// (0x000818cb) aid_size_cell_touch_ParamLimits

0x5943,	// (0x000818cb) aid_size_cell_touch

0x5bd8,	// (0x00081b60) touch_pane_ParamLimits

0x5bd8,	// (0x00081b60) touch_pane

0x5bce,	// (0x00081b56) main_rss2_pane

0x19cb,	// (0x0007d953) listscroll_rss2_pane

0x19d4,	// (0x0007d95c) rss2_navigation_pane

0x19dc,	// (0x0007d964) list_rss2_pane

0xea9c,	// (0x0008aa24) scroll_pane_cp22

0x19e4,	// (0x0007d96c) rss2_navigation_pane_g1

0x19ed,	// (0x0007d975) rss2_navigation_pane_g2

0x19f5,	// (0x0007d97d) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0008b627) rss2_navigation_pane_g

0x19fd,	// (0x0007d985) rss2_navigation_pane_t1

0x8fc1,	// (0x00084f49) rss2_list_single_pane_ParamLimits

0x8fc1,	// (0x00084f49) rss2_list_single_pane

0x1a0b,	// (0x0007d993) rss2_list_single_pane_t2

0x1a19,	// (0x0007d9a1) rss2_list_single_pane_t3_ParamLimits

0x1a19,	// (0x0007d9a1) rss2_list_single_pane_t3

0x1a36,	// (0x0007d9be) rss2_list_single_pane_t4

0x7692,	// (0x0008361a) smil_status_pane_g1

0x8788,	// (0x00084710) main_image2_pane_ParamLimits

0x8788,	// (0x00084710) main_image2_pane

0x8bb0,	// (0x00084b38) main_camera2_pane_g9_ParamLimits

0x8bb0,	// (0x00084b38) main_camera2_pane_g9

0x8c04,	// (0x00084b8c) main_camera2_pane_t5_ParamLimits

0x8c04,	// (0x00084b8c) main_camera2_pane_t5

0x8c16,	// (0x00084b9e) main_camera2_pane_t6_ParamLimits

0x8c16,	// (0x00084b9e) main_camera2_pane_t6

0x8fd7,	// (0x00084f5f) main_image2_pane_g1_ParamLimits

0x8fd7,	// (0x00084f5f) main_image2_pane_g1

0x8356,	// (0x000842de) smil2_video_pane_ParamLimits

0x8356,	// (0x000842de) smil2_video_pane

0x5973,	// (0x000818fb) aid_zoom_text_primary_cp

0x5b6f,	// (0x00081af7) popup_preview_fixed_window

0xe387,	// (0x0008a30f) im_reading_pane_g1

0x8b0c,	// (0x00084a94) cams2_bc_adjust_pane_cp_ParamLimits

0x8b0c,	// (0x00084a94) cams2_bc_adjust_pane_cp

0x8c41,	// (0x00084bc9) cams2_bc_adjust_pane_ParamLimits

0x8c41,	// (0x00084bc9) cams2_bc_adjust_pane

0x2a70,	// (0x0007e9f8) cams2_bc_adjust_pane_g1

0x8fe3,	// (0x00084f6b) cams2_slider_pane

0x8fec,	// (0x00084f74) cams2_slider_pane_g1

0x8ff5,	// (0x00084f7d) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0008b62e) cams2_slider_pane_g

0x5d7d,	// (0x00081d05) calc_display_pane_ParamLimits

0x5d97,	// (0x00081d1f) calc_paper_pane_ParamLimits

0x5daf,	// (0x00081d37) grid_calc_pane_ParamLimits

0x7907,	// (0x0008388f) popup_clock_digital_window_t1_ParamLimits

0xef1a,	// (0x0008aea2) main_image_pane_t1

0x5d63,	// (0x00081ceb) aid_size_cell_calc_ParamLimits

0x5d63,	// (0x00081ceb) aid_size_cell_calc

0x87b9,	// (0x00084741) popup_blid_sat_info2_window_ParamLimits

0x87b9,	// (0x00084741) popup_blid_sat_info2_window

0x1a4c,	// (0x0007d9d4) aid_size_cell_blid

0x1a54,	// (0x0007d9dc) bg_popup_window_pane_cp07

0x1a77,	// (0x0007d9ff) grid_popup_blid_pane

0x1a7f,	// (0x0007da07) heading_pane_cp05_ParamLimits

0x1a7f,	// (0x0007da07) heading_pane_cp05

0x1b47,	// (0x0007dacf) cell_popup_blid_pane_ParamLimits

0x1b47,	// (0x0007dacf) cell_popup_blid_pane

0x1b67,	// (0x0007daef) cell_popup_blid_pane_g1

0x1b6f,	// (0x0007daf7) cell_popup_blid_pane_t1

0x8e4a,	// (0x00084dd2) mup2_indicator_pane_ParamLimits

0x8e4a,	// (0x00084dd2) mup2_indicator_pane

0xe290,	// (0x0008a218) mup2_visualizer_osc_pane

0x1921,	// (0x0007d8a9) mup2_visualizer_spec_pane_ParamLimits

0x1921,	// (0x0007d8a9) mup2_visualizer_spec_pane

0x900f,	// (0x00084f97) mup2_spec_half_pane

0x9018,	// (0x00084fa0) mup2_spec_half_pane_cp

0x9020,	// (0x00084fa8) mup2_spec_bar_pane_ParamLimits

0x9020,	// (0x00084fa8) mup2_spec_bar_pane

0x1875,	// (0x0007d7fd) mup2_spec_bar_pane_g1

0x187f,	// (0x0007d807) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0008b5a1) mup2_spec_bar_pane_g

0x903f,	// (0x00084fc7) mup2_osc_middle_pane

0x1891,	// (0x0007d819) mup2_visualizer_osc_pane_g1

0xd98e,	// (0x00089916) popup_number_entry_window_t1_ParamLimits

0xd9a1,	// (0x00089929) popup_number_entry_window_t2_ParamLimits

0xd9b3,	// (0x0008993b) popup_number_entry_window_t3_ParamLimits

0xd9c5,	// (0x0008994d) popup_number_entry_window_t5_ParamLimits

0xd9c5,	// (0x0008994d) popup_number_entry_window_t5

0xf0ca,	// (0x0008b052) popup_number_entry_window_t_ParamLimits

0xd9f9,	// (0x00089981) text_title_cp2_ParamLimits

0x8095,	// (0x0008401d) aid_hotspot_pointer_text2_pane

0x8127,	// (0x000840af) main_viewer_pane_g9_ParamLimits

0x8127,	// (0x000840af) main_viewer_pane_g9

0xe5cf,	// (0x0008a557) cale_month_pane_t1_ParamLimits

0xe60c,	// (0x0008a594) bg_cale_pane_ParamLimits

0xe624,	// (0x0008a5ac) list_cale_pane_ParamLimits

0xe635,	// (0x0008a5bd) listscroll_cale_day_pane_t1

0xe647,	// (0x0008a5cf) scroll_pane_cp09_ParamLimits

0x7dea,	// (0x00083d72) main_mup_eq_pane_t1_ParamLimits

0x7dea,	// (0x00083d72) main_mup_eq_pane_t1

0x7e00,	// (0x00083d88) main_mup_eq_pane_t2_ParamLimits

0x7e00,	// (0x00083d88) main_mup_eq_pane_t2

0x7e16,	// (0x00083d9e) main_mup_eq_pane_t3_ParamLimits

0x7e16,	// (0x00083d9e) main_mup_eq_pane_t3

0x7e2c,	// (0x00083db4) main_mup_eq_pane_t4_ParamLimits

0x7e2c,	// (0x00083db4) main_mup_eq_pane_t4

0x7e42,	// (0x00083dca) main_mup_eq_pane_t5_ParamLimits

0x7e42,	// (0x00083dca) main_mup_eq_pane_t5

0x7e58,	// (0x00083de0) main_mup_eq_pane_t6_ParamLimits

0x7e58,	// (0x00083de0) main_mup_eq_pane_t6

0x7e6a,	// (0x00083df2) main_mup_eq_pane_t7_ParamLimits

0x7e6a,	// (0x00083df2) main_mup_eq_pane_t7

0x7e7c,	// (0x00083e04) main_mup_eq_pane_t8_ParamLimits

0x7e7c,	// (0x00083e04) main_mup_eq_pane_t8

0x7e8e,	// (0x00083e16) main_mup_eq_pane_t9_ParamLimits

0x7e8e,	// (0x00083e16) main_mup_eq_pane_t9

0x7ea4,	// (0x00083e2c) main_mup_eq_pane_t10_ParamLimits

0x7ea4,	// (0x00083e2c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008b3dd) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008b3dd) main_mup_eq_pane_t

0x7f37,	// (0x00083ebf) mup_equalizer_pane_cp5_ParamLimits

0x7f49,	// (0x00083ed1) mup_equalizer_pane_cp6_ParamLimits

0x7f5b,	// (0x00083ee3) mup_equalizer_pane_cp7_ParamLimits

0x5bce,	// (0x00081b56) main_gallery_pane

0x189a,	// (0x0007d822) smil2_volume_pane

0x18b5,	// (0x0007d83d) smil_status_volume_pane_g1_ParamLimits

0x18a2,	// (0x0007d82a) smil_status_volume_pane_g2_ParamLimits

0x8987,	// (0x0008490f) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0008b5a6) smil_status_volume_pane_g_ParamLimits

0x1a54,	// (0x0007d9dc) bg_popup_window_pane_cp07_ParamLimits

0x1a62,	// (0x0007d9ea) blid_firmament_pane

0x9048,	// (0x00084fd0) aid_size_cell_gallery_ParamLimits

0x9048,	// (0x00084fd0) aid_size_cell_gallery

0x9056,	// (0x00084fde) grid_gallery_pane_ParamLimits

0x9056,	// (0x00084fde) grid_gallery_pane

0x9062,	// (0x00084fea) cell_gallery_pane_ParamLimits

0x9062,	// (0x00084fea) cell_gallery_pane

0x1b7d,	// (0x0007db05) bg_cell_gallery_focus_pane_ParamLimits

0x1b7d,	// (0x0007db05) bg_cell_gallery_focus_pane

0x1b8f,	// (0x0007db17) cell_gallery_pane_g1_ParamLimits

0x1b8f,	// (0x0007db17) cell_gallery_pane_g1

0x909e,	// (0x00085026) cell_gallery_pane_g2_ParamLimits

0x909e,	// (0x00085026) cell_gallery_pane_g2

0x90ab,	// (0x00085033) cell_gallery_pane_g3_ParamLimits

0x90ab,	// (0x00085033) cell_gallery_pane_g3

0x1b9b,	// (0x0007db23) cell_gallery_pane_g4_ParamLimits

0x1b9b,	// (0x0007db23) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0008b654) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0008b654) cell_gallery_pane_g

0x1ba7,	// (0x0007db2f) bg_cell_gallery_focus_pane_g1

0x1baf,	// (0x0007db37) bg_cell_gallery_focus_pane_g2

0x1bb7,	// (0x0007db3f) bg_cell_gallery_focus_pane_g3

0x1bbf,	// (0x0007db47) bg_cell_gallery_focus_pane_g4

0x1bc7,	// (0x0007db4f) bg_cell_gallery_focus_pane_g5

0x1bcf,	// (0x0007db57) bg_cell_gallery_focus_pane_g6

0x1bd7,	// (0x0007db5f) bg_cell_gallery_focus_pane_g7

0x1bdf,	// (0x0007db67) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0008b65d) bg_cell_gallery_focus_pane_g

0x1be7,	// (0x0007db6f) aid_firma_cardinal

0x1bfb,	// (0x0007db83) blid_firmament_pane_t1

0x1c12,	// (0x0007db9a) blid_firmament_pane_t2

0x1c29,	// (0x0007dbb1) blid_firmament_pane_t3

0x1c40,	// (0x0007dbc8) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0008b66e) blid_firmament_pane_t

0x1c57,	// (0x0007dbdf) blid_sat_info_pane

0x1c67,	// (0x0007dbef) blid_sat_info_pane_g1

0x1c67,	// (0x0007dbef) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0008b677) blid_sat_info_pane_g

0x1c71,	// (0x0007dbf9) blid_sat_info_pane_t1

0x1c7f,	// (0x0007dc07) smil2_volume_content_pane

0x1c88,	// (0x0007dc10) smil2_volume_pane_g1

0x1c90,	// (0x0007dc18) smil2_volume_content_pane_g1

0x1c99,	// (0x0007dc21) smil2_volume_content_pane_g2

0x1ca2,	// (0x0007dc2a) smil2_volume_content_pane_g3

0x1cab,	// (0x0007dc33) smil2_volume_content_pane_g4

0x1cb4,	// (0x0007dc3c) smil2_volume_content_pane_g5

0x1cbd,	// (0x0007dc45) smil2_volume_content_pane_g6

0x1cc6,	// (0x0007dc4e) smil2_volume_content_pane_g7

0x1ccf,	// (0x0007dc57) smil2_volume_content_pane_g8

0x1cd8,	// (0x0007dc60) smil2_volume_content_pane_g9

0x1ce1,	// (0x0007dc69) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0008b67c) smil2_volume_content_pane_g

0x63ad,	// (0x00082335) cale_week_day_heading_pane_t1_ParamLimits

0x63d5,	// (0x0008235d) cale_week_day_heading_pane_t2_ParamLimits

0x6402,	// (0x0008238a) cale_week_day_heading_pane_t3_ParamLimits

0x642f,	// (0x000823b7) cale_week_day_heading_pane_t4_ParamLimits

0x645c,	// (0x000823e4) cale_week_day_heading_pane_t5_ParamLimits

0x6489,	// (0x00082411) cale_week_day_heading_pane_t6_ParamLimits

0x64b6,	// (0x0008243e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008b159) cale_week_day_heading_pane_t_ParamLimits

0xe23e,	// (0x0008a1c6) bg_cale_side_pane_ParamLimits

0x64de,	// (0x00082466) cale_week_time_pane_t1_ParamLimits

0x6522,	// (0x000824aa) cale_week_time_pane_t2_ParamLimits

0x6566,	// (0x000824ee) cale_week_time_pane_t3_ParamLimits

0x65aa,	// (0x00082532) cale_week_time_pane_t4_ParamLimits

0x65ee,	// (0x00082576) cale_week_time_pane_t5_ParamLimits

0x6632,	// (0x000825ba) cale_week_time_pane_t6_ParamLimits

0x6676,	// (0x000825fe) cale_week_time_pane_t7_ParamLimits

0x66ba,	// (0x00082642) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008b168) cale_week_time_pane_t_ParamLimits

0x66fe,	// (0x00082686) cell_cale_week_pane_g2_ParamLimits

0xe23e,	// (0x0008a1c6) bg_cale_side_pane_cp01_ParamLimits

0x74a3,	// (0x0008342b) cale_month_week_pane_t1_ParamLimits

0x74bc,	// (0x00083444) cale_month_week_pane_t2_ParamLimits

0x74d5,	// (0x0008345d) cale_month_week_pane_t3_ParamLimits

0x74ee,	// (0x00083476) cale_month_week_pane_t4_ParamLimits

0x7507,	// (0x0008348f) cale_month_week_pane_t5_ParamLimits

0x7520,	// (0x000834a8) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008b23d) cale_month_week_pane_t_ParamLimits

0x7651,	// (0x000835d9) cell_cale_month_pane_g1_ParamLimits

0x5bce,	// (0x00081b56) main_cale_event_viewer_pane

0xd964,	// (0x000898ec) listscroll_cale_event_viewer_pane

0x1cea,	// (0x0007dc72) list_cale_ev_pane

0x1cf2,	// (0x0007dc7a) scroll_pane_cp023

0x90b8,	// (0x00085040) field_cale_ev_pane_ParamLimits

0x90b8,	// (0x00085040) field_cale_ev_pane

0x1cfe,	// (0x0007dc86) field_cale_ev_content_pane_ParamLimits

0x1cfe,	// (0x0007dc86) field_cale_ev_content_pane

0x1d0a,	// (0x0007dc92) field_cale_ev_pane_g1_ParamLimits

0x1d0a,	// (0x0007dc92) field_cale_ev_pane_g1

0x1d16,	// (0x0007dc9e) field_cale_ev_pane_g2_ParamLimits

0x1d16,	// (0x0007dc9e) field_cale_ev_pane_g2

0x1d2e,	// (0x0007dcb6) field_cale_ev_pane_g3_ParamLimits

0x1d2e,	// (0x0007dcb6) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0008b691) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0008b691) field_cale_ev_pane_g

0x1d46,	// (0x0007dcce) field_cale_ev_pane_t1_ParamLimits

0x1d46,	// (0x0007dcce) field_cale_ev_pane_t1

0x90d2,	// (0x0008505a) field_cale_ev_content_pane_t1_ParamLimits

0x90d2,	// (0x0008505a) field_cale_ev_content_pane_t1

0xee00,	// (0x0008ad88) bg_button_pane_cp01

0x60b3,	// (0x0008203b) listscroll_cale_week_pane_ParamLimits

0xe206,	// (0x0008a18e) popup_toolbar_window_cp01

0xe20f,	// (0x0008a197) listscroll_cale_week_pane_t1_ParamLimits

0x60b3,	// (0x0008203b) listscroll_cale_day_pane_ParamLimits

0xe206,	// (0x0008a18e) popup_toolbar_window_cp02

0xe635,	// (0x0008a5bd) listscroll_cale_day_pane_t1_ParamLimits

0x8778,	// (0x00084700) main_cale_month_pane_ParamLimits

0x8890,	// (0x00084818) popup_toolbar_window_cp03_ParamLimits

0x8890,	// (0x00084818) popup_toolbar_window_cp03

0x827e,	// (0x00084206) main_image_pane_g2_ParamLimits

0x827e,	// (0x00084206) main_image_pane_g2

0x828a,	// (0x00084212) main_image_pane_g3_ParamLimits

0x828a,	// (0x00084212) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008b46f) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008b46f) main_image_pane_g

0xef1a,	// (0x0008aea2) main_image_pane_t1_ParamLimits

0x8296,	// (0x0008421e) main_image_pane_t2_ParamLimits

0x8296,	// (0x0008421e) main_image_pane_t2

0x82a8,	// (0x00084230) main_image_pane_t3_ParamLimits

0x82a8,	// (0x00084230) main_image_pane_t3

0x82ba,	// (0x00084242) main_image_pane_t4_ParamLimits

0x82ba,	// (0x00084242) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008b476) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008b476) main_image_pane_t

0x82cc,	// (0x00084254) popup_image_details_window_cp01

0x82d4,	// (0x0008425c) popup_toobar_trans_pane_cp01_ParamLimits

0x82d4,	// (0x0008425c) popup_toobar_trans_pane_cp01

0x8800,	// (0x00084788) popup_image_details_window_ParamLimits

0x8800,	// (0x00084788) popup_image_details_window

0x880c,	// (0x00084794) popup_image_focus_window

0x8b00,	// (0x00084a88) camera2_autofocus_pane_ParamLimits

0x8b00,	// (0x00084a88) camera2_autofocus_pane

0xd964,	// (0x000898ec) bg_popup_sub_pane_cp06

0x1d5d,	// (0x0007dce5) popup_image_focus_window_g1

0x1d65,	// (0x0007dced) popup_image_focus_window_g2

0x1d6d,	// (0x0007dcf5) popup_image_focus_window_g3

0x1d75,	// (0x0007dcfd) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0008b698) popup_image_focus_window_g

0x1d7d,	// (0x0007dd05) popup_image_focus_window_t1

0x1d8b,	// (0x0007dd13) popup_image_focus_window_t2

0x1d9a,	// (0x0007dd22) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0008b6a1) popup_image_focus_window_t

0x1da8,	// (0x0007dd30) camera2_autofocus_pane_g1

0x062b,	// (0x0007c5b3) bg_tb_trans_pane_cp01

0x1db6,	// (0x0007dd3e) popup_image_details_window_g1

0x1dc9,	// (0x0007dd51) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0008b6b3) popup_image_details_window_g

0x1df2,	// (0x0007dd7a) popup_image_details_window_t1

0x1e04,	// (0x0007dd8c) popup_image_details_window_t2

0x1e1d,	// (0x0007dda5) popup_image_details_window_t3

0x1e31,	// (0x0007ddb9) popup_image_details_window_t4

0x1e4c,	// (0x0007ddd4) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0008b6ba) popup_image_details_window_t

0xe0cb,	// (0x0008a053) bg_calc_paper_pane_ParamLimits

0x5bce,	// (0x00081b56) grid_highlight_pane_cp013

0x5e98,	// (0x00081e20) list_calc_pane_ParamLimits

0x5eaa,	// (0x00081e32) scroll_pane_cp024

0xe0df,	// (0x0008a067) bg_calc_display_pane_ParamLimits

0x5eb2,	// (0x00081e3a) calc_display_pane_t1_ParamLimits

0x5ec7,	// (0x00081e4f) calc_display_pane_t2_ParamLimits

0x5edc,	// (0x00081e64) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008b0d9) calc_display_pane_t_ParamLimits

0x5f91,	// (0x00081f19) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008b0f6) cell_calc_pane_g

0x5f9a,	// (0x00081f22) cell_calc_pane_t1

0xe13e,	// (0x0008a0c6) grid_highlight_pane_cp02_ParamLimits

0xe154,	// (0x0008a0dc) toolbar_button_pane_cp01_ParamLimits

0xe154,	// (0x0008a0dc) toolbar_button_pane_cp01

0xef5f,	// (0x0008aee7) temp_image_control_pane_ParamLimits

0xef5f,	// (0x0008aee7) temp_image_control_pane

0x8788,	// (0x00084710) main_mp3_pane

0x1e66,	// (0x0007ddee) temp_image_control_pane_g1_ParamLimits

0x1e66,	// (0x0007ddee) temp_image_control_pane_g1

0x1e74,	// (0x0007ddfc) temp_image_control_pane_g2_ParamLimits

0x1e74,	// (0x0007ddfc) temp_image_control_pane_g2

0x1e86,	// (0x0007de0e) temp_image_control_pane_g3_ParamLimits

0x1e86,	// (0x0007de0e) temp_image_control_pane_g3

0x911b,	// (0x000850a3) temp_image_control_pane_g4_ParamLimits

0x911b,	// (0x000850a3) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0008b6c5) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0008b6c5) temp_image_control_pane_g

0x1e66,	// (0x0007ddee) main_mp3_pane_g1

0x912c,	// (0x000850b4) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0008b6ce) main_mp3_pane_g

0x1ec9,	// (0x0007de51) main_mp3_pane_t1

0xe298,	// (0x0008a220) main_camera_pane_g8_ParamLimits

0xe298,	// (0x0008a220) main_camera_pane_g8

0x697a,	// (0x00082902) main_video_pane_g7_ParamLimits

0x697a,	// (0x00082902) main_video_pane_g7

0x8c2f,	// (0x00084bb7) main_camera2_pane_t7_ParamLimits

0x8c2f,	// (0x00084bb7) main_camera2_pane_t7

0xe3ed,	// (0x0008a375) scroll_pane_cp025_ParamLimits

0xe3ed,	// (0x0008a375) scroll_pane_cp025

0xe401,	// (0x0008a389) scroll_pane_cp026_ParamLimits

0xe401,	// (0x0008a389) scroll_pane_cp026

0xe410,	// (0x0008a398) wml_content_pane_ParamLimits

0x5bce,	// (0x00081b56) main_touch_calib_pane

0x91c4,	// (0x0008514c) main_touch_calib_pane_g1

0x91d0,	// (0x00085158) main_touch_calib_pane_g2

0x91dc,	// (0x00085164) main_touch_calib_pane_g3

0x91e8,	// (0x00085170) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0008b6ec) main_touch_calib_pane_g

0x91f4,	// (0x0008517c) main_touch_calib_pane_t1

0x9209,	// (0x00085191) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0008b6f5) main_touch_calib_pane_t

0xeb69,	// (0x0008aaf1) mup_progress_pane_cp02

0xeb9e,	// (0x0008ab26) navi_pane_g1

0xec57,	// (0x0008abdf) navi_pane_mp_t3

0x8788,	// (0x00084710) main_mp3_pane_ParamLimits

0x88cb,	// (0x00084853) navi_pane_ParamLimits

0x1e66,	// (0x0007ddee) main_mp3_pane_g1_ParamLimits

0x912c,	// (0x000850b4) main_mp3_pane_g2_ParamLimits

0x9138,	// (0x000850c0) main_mp3_pane_g3_ParamLimits

0x9138,	// (0x000850c0) main_mp3_pane_g3

0x9144,	// (0x000850cc) main_mp3_pane_g4_ParamLimits

0x9144,	// (0x000850cc) main_mp3_pane_g4

0x1e96,	// (0x0007de1e) main_mp3_pane_g5_ParamLimits

0x1e96,	// (0x0007de1e) main_mp3_pane_g5

0x1ea4,	// (0x0007de2c) main_mp3_pane_g6_ParamLimits

0x1ea4,	// (0x0007de2c) main_mp3_pane_g6

0x1eb1,	// (0x0007de39) main_mp3_pane_g7_ParamLimits

0x1eb1,	// (0x0007de39) main_mp3_pane_g7

0x1ebd,	// (0x0007de45) main_mp3_pane_g8_ParamLimits

0x1ebd,	// (0x0007de45) main_mp3_pane_g8

0xf746,	// (0x0008b6ce) main_mp3_pane_g_ParamLimits

0x9150,	// (0x000850d8) main_mp3_pane_t2

0x915e,	// (0x000850e6) main_mp3_pane_t3

0x1ed7,	// (0x0007de5f) main_mp3_pane_t4

0x1ee5,	// (0x0007de6d) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0008b6df) main_mp3_pane_t

0x1ef3,	// (0x0007de7b) mup_progress_pane_cp01

0x5973,	// (0x000818fb) aid_zoom_text_secondary2

0x1cea,	// (0x0007dc72) list_cale_ev2_pane

0x1cf2,	// (0x0007dc7a) scroll_pane_cp023_ParamLimits

0x9254,	// (0x000851dc) field_cale_ev2_pane_ParamLimits

0x9254,	// (0x000851dc) field_cale_ev2_pane

0x9269,	// (0x000851f1) field_cale_ev2_pane_g1_ParamLimits

0x9269,	// (0x000851f1) field_cale_ev2_pane_g1

0x9275,	// (0x000851fd) field_cale_ev2_pane_g2_ParamLimits

0x9275,	// (0x000851fd) field_cale_ev2_pane_g2

0x928d,	// (0x00085215) field_cale_ev2_pane_g3_ParamLimits

0x928d,	// (0x00085215) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0008b700) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0008b700) field_cale_ev2_pane_g

0x92a5,	// (0x0008522d) field_cale_ev2_pane_t1_ParamLimits

0x92a5,	// (0x0008522d) field_cale_ev2_pane_t1

0x92bc,	// (0x00085244) field_cale_ev2_pane_t2_ParamLimits

0x92bc,	// (0x00085244) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0008b709) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0008b709) field_cale_ev2_pane_t

0x817b,	// (0x00084103) main_postcard_pane_g5_ParamLimits

0x817b,	// (0x00084103) main_postcard_pane_g5

0x8187,	// (0x0008410f) main_postcard_pane_g6_ParamLimits

0x8187,	// (0x0008410f) main_postcard_pane_g6

0x67cf,	// (0x00082757) camera2_autofocus_pane_cp_ParamLimits

0x67cf,	// (0x00082757) camera2_autofocus_pane_cp

0x8788,	// (0x00084710) main_mup3_pane

0x92f1,	// (0x00085279) main_mup3_pane_g1_ParamLimits

0x92f1,	// (0x00085279) main_mup3_pane_g1

0x9312,	// (0x0008529a) main_mup3_pane_g2_ParamLimits

0x9312,	// (0x0008529a) main_mup3_pane_g2

0x937f,	// (0x00085307) main_mup3_pane_g3_ParamLimits

0x937f,	// (0x00085307) main_mup3_pane_g3

0x93ba,	// (0x00085342) main_mup3_pane_g4_ParamLimits

0x93ba,	// (0x00085342) main_mup3_pane_g4

0x93f5,	// (0x0008537d) main_mup3_pane_g5_ParamLimits

0x93f5,	// (0x0008537d) main_mup3_pane_g5

0x9430,	// (0x000853b8) main_mup3_pane_g6_ParamLimits

0x9430,	// (0x000853b8) main_mup3_pane_g6

0x1efb,	// (0x0007de83) main_mup3_pane_g7_ParamLimits

0x1efb,	// (0x0007de83) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0008b719) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0008b719) main_mup3_pane_g

0x949c,	// (0x00085424) main_mup3_pane_t1_ParamLimits

0x949c,	// (0x00085424) main_mup3_pane_t1

0x94fd,	// (0x00085485) main_mup3_pane_t2_ParamLimits

0x94fd,	// (0x00085485) main_mup3_pane_t2

0x95b8,	// (0x00085540) main_mup3_pane_t4_ParamLimits

0x95b8,	// (0x00085540) main_mup3_pane_t4

0x95fe,	// (0x00085586) main_mup3_pane_t5_ParamLimits

0x95fe,	// (0x00085586) main_mup3_pane_t5

0x96a2,	// (0x0008562a) main_mup3_pane_t6_ParamLimits

0x96a2,	// (0x0008562a) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0008b72a) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0008b72a) main_mup3_pane_t

0x974a,	// (0x000856d2) mup3_progress_pane_ParamLimits

0x974a,	// (0x000856d2) mup3_progress_pane

0x97ae,	// (0x00085736) popup_mup3_control_window_ParamLimits

0x97ae,	// (0x00085736) popup_mup3_control_window

0x1f09,	// (0x0007de91) popup_mup3_text_window

0x97c7,	// (0x0008574f) mup3_progress_pane_t1

0x97e5,	// (0x0008576d) mup3_progress_pane_t2

0x1f11,	// (0x0007de99) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0008b737) mup3_progress_pane_t

0x1f2e,	// (0x0007deb6) mup_progress_pane_cp03

0xd964,	// (0x000898ec) bg_tb_trans_pane_cp04

0x9803,	// (0x0008578b) mup3_volume_pane

0x980b,	// (0x00085793) popup_mup3_control_window_g1

0x9814,	// (0x0008579c) mup3_volume_pane_g1

0x981d,	// (0x000857a5) mup3_volume_pane_g2

0x9826,	// (0x000857ae) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0008b73e) mup3_volume_pane_g

0xd964,	// (0x000898ec) bg_tb_trans_pane_cp03

0x1f59,	// (0x0007dee1) popup_mup3_text_window_g1

0x1f61,	// (0x0007dee9) popup_mup3_text_window_t1

0xe127,	// (0x0008a0af) list_calc_item_pane_g1_ParamLimits

0x19c2,	// (0x0007d94a) mup_volume_pane_cp_g1

0x921e,	// (0x000851a6) main_touch_calib_pane_t3

0x9230,	// (0x000851b8) main_touch_calib_pane_t4

0x9242,	// (0x000851ca) main_touch_calib_pane_t5

0x5933,	// (0x000818bb) aid_cell_size_toolbar2

0x593b,	// (0x000818c3) aid_popup3_width_pane

0x5847,	// (0x000817cf) aid_zoom_text_msg_primary

0x67a4,	// (0x0008272c) vorec_t7

0xe0eb,	// (0x0008a073) bg_calc_paper_pane_g1_ParamLimits

0xe0f7,	// (0x0008a07f) bg_calc_paper_pane_g2_ParamLimits

0xe103,	// (0x0008a08b) bg_calc_paper_pane_g3_ParamLimits

0xe10f,	// (0x0008a097) bg_calc_paper_pane_g4_ParamLimits

0xe11b,	// (0x0008a0a3) bg_calc_paper_pane_g5_ParamLimits

0x5f15,	// (0x00081e9d) bg_calc_paper_pane_g6_ParamLimits

0x5f24,	// (0x00081eac) bg_calc_paper_pane_g7_ParamLimits

0x5f33,	// (0x00081ebb) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008b0e0) bg_calc_paper_pane_g_ParamLimits

0x5f42,	// (0x00081eca) calc_bg_paper_pane_g9_ParamLimits

0x68af,	// (0x00082837) image_qvga_pane_ParamLimits

0x68af,	// (0x00082837) image_qvga_pane

0xe00e,	// (0x00089f96) bg_popup_sub_pane_cp04_ParamLimits

0xee96,	// (0x0008ae1e) popup_mup_playback_window_g1_ParamLimits

0xeea2,	// (0x0008ae2a) popup_mup_playback_window_t1_ParamLimits

0xeeb7,	// (0x0008ae3f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008b46a) popup_mup_playback_window_t_ParamLimits

0x8d56,	// (0x00084cde) main_mup2_pane_g3_ParamLimits

0x8d56,	// (0x00084cde) main_mup2_pane_g3

0x6c53,	// (0x00082bdb) popup_toolbar_window_cp04

0x099c,	// (0x0007c924) popup_call2_audio_second_window_g3_ParamLimits

0x099c,	// (0x0007c924) popup_call2_audio_second_window_g3

0x0da6,	// (0x0007cd2e) popup_call2_audio_first_window_g4_ParamLimits

0x0da6,	// (0x0007cd2e) popup_call2_audio_first_window_g4

0x1425,	// (0x0007d3ad) popup_call2_audio_in_window_g4_ParamLimits

0x1425,	// (0x0007d3ad) popup_call2_audio_in_window_g4

0x8271,	// (0x000841f9) aid_area_sk_bg_cut_ParamLimits

0x8271,	// (0x000841f9) aid_area_sk_bg_cut

0xeecc,	// (0x0008ae54) aid_area_sk_bg_cut_2_ParamLimits

0xeecc,	// (0x0008ae54) aid_area_sk_bg_cut_2

0x908e,	// (0x00085016) aid_placing_details_win

0x9096,	// (0x0008501e) aid_placing_details_win_2

0x1da8,	// (0x0007dd30) camera2_autofocus_pane_g1_ParamLimits

0x5b60,	// (0x00081ae8) popup_fixed_preview_cale_window_ParamLimits

0x5b60,	// (0x00081ae8) popup_fixed_preview_cale_window

0xecd5,	// (0x0008ac5d) navi_slider_pane_g3

0xecde,	// (0x0008ac66) navi_slider_pane_g4

0xece7,	// (0x0008ac6f) navi_slider_pane_g5

0xecd5,	// (0x0008ac5d) navi_slider_pane_g6

0x7b7d,	// (0x00083b05) navi_slider_pane_g7

0xedcd,	// (0x0008ad55) mup_scale_pane_g3

0xedd6,	// (0x0008ad5e) mup_scale_pane_g4

0xeddf,	// (0x0008ad67) mup_scale_pane_g5

0x7f6d,	// (0x00083ef5) mup_scale_pane_g6

0x7f76,	// (0x00083efe) mup_scale_pane_g7

0xecd5,	// (0x0008ac5d) cams2_slider_pane_g3

0x1a44,	// (0x0007d9cc) cams2_slider_pane_g4

0x8ffe,	// (0x00084f86) cams2_slider_pane_g5

0xecd5,	// (0x0008ac5d) cams2_slider_pane_g6

0x9006,	// (0x00084f8e) cams2_slider_pane_g7

0x1c67,	// (0x0007dbef) camera2_autofocus_pane_cp_g1

0x17c6,	// (0x0007d74e) bg_popup_preview_window_pane_cp02_ParamLimits

0x17c6,	// (0x0007d74e) bg_popup_preview_window_pane_cp02

0x1f6f,	// (0x0007def7) list_fp_cale_pane_ParamLimits

0x1f6f,	// (0x0007def7) list_fp_cale_pane

0x1f7b,	// (0x0007df03) popup_fixed_preview_cale_window_t1_ParamLimits

0x1f7b,	// (0x0007df03) popup_fixed_preview_cale_window_t1

0x982f,	// (0x000857b7) popup_fixed_preview_cale_window_t2_ParamLimits

0x982f,	// (0x000857b7) popup_fixed_preview_cale_window_t2

0x9844,	// (0x000857cc) popup_fixed_preview_cale_window_t3_ParamLimits

0x9844,	// (0x000857cc) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0008b745) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0008b745) popup_fixed_preview_cale_window_t

0x9859,	// (0x000857e1) list_single_fp_cale_pane_ParamLimits

0x9859,	// (0x000857e1) list_single_fp_cale_pane

0x1f99,	// (0x0007df21) list_single_fp_cale_pane_g1_ParamLimits

0x1f99,	// (0x0007df21) list_single_fp_cale_pane_g1

0x1fa5,	// (0x0007df2d) list_single_fp_cale_pane_g2_ParamLimits

0x1fa5,	// (0x0007df2d) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0008b74c) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0008b74c) list_single_fp_cale_pane_g

0x1fbe,	// (0x0007df46) list_single_fp_cale_pane_t1_ParamLimits

0x1fbe,	// (0x0007df46) list_single_fp_cale_pane_t1

0x1fd0,	// (0x0007df58) list_single_fp_cale_pane_t2_ParamLimits

0x1fd0,	// (0x0007df58) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0008b753) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0008b753) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5bce,	// (0x00081b56) main_dialer_pane

0x9866,	// (0x000857ee) aid_cell_size_keypad

0x9870,	// (0x000857f8) dialer_ne_pane

0x9878,	// (0x00085800) grid_dialer_command_1_pane

0x9880,	// (0x00085808) grid_dialer_command_2_pane

0x9888,	// (0x00085810) grid_dialer_keypad_pane

0x9898,	// (0x00085820) bg_popup_call_pane_cp06_ParamLimits

0x9898,	// (0x00085820) bg_popup_call_pane_cp06

0x98a4,	// (0x0008582c) dialer_ne_clear_pane_ParamLimits

0x98a4,	// (0x0008582c) dialer_ne_clear_pane

0x2003,	// (0x0007df8b) dialer_ne_pane_g1

0x200b,	// (0x0007df93) dialer_ne_pane_t1_ParamLimits

0x200b,	// (0x0007df93) dialer_ne_pane_t1

0x98b0,	// (0x00085838) dialer_ne_pane_t2_ParamLimits

0x98b0,	// (0x00085838) dialer_ne_pane_t2

0x98cd,	// (0x00085855) dialer_ne_pane_t3_ParamLimits

0x98cd,	// (0x00085855) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0008b758) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0008b758) dialer_ne_pane_t

0x98f1,	// (0x00085879) dialer_ne_pane_t3_copy1_ParamLimits

0x98f1,	// (0x00085879) dialer_ne_pane_t3_copy1

0x9915,	// (0x0008589d) cell_dialer_keypad_pane_ParamLimits

0x9915,	// (0x0008589d) cell_dialer_keypad_pane

0x992a,	// (0x000858b2) cell_dialer_command_1_pane_ParamLimits

0x992a,	// (0x000858b2) cell_dialer_command_1_pane

0x9940,	// (0x000858c8) cell_dialer_command_2_pane_ParamLimits

0x9940,	// (0x000858c8) cell_dialer_command_2_pane

0x201d,	// (0x0007dfa5) bg_button_pane_cp02_ParamLimits

0x201d,	// (0x0007dfa5) bg_button_pane_cp02

0x994f,	// (0x000858d7) cell_dialer_keypad_pane_g1_ParamLimits

0x994f,	// (0x000858d7) cell_dialer_keypad_pane_g1

0x201d,	// (0x0007dfa5) bg_button_pane_cp03_ParamLimits

0x201d,	// (0x0007dfa5) bg_button_pane_cp03

0x9964,	// (0x000858ec) cell_dialer_command_1_pane_g1_ParamLimits

0x9964,	// (0x000858ec) cell_dialer_command_1_pane_g1

0x2029,	// (0x0007dfb1) bg_button_pane_cp04

0x9977,	// (0x000858ff) cell_dialer_command_2_pane_g1

0xe290,	// (0x0008a218) bg_button_pane_cp06

0x2031,	// (0x0007dfb9) dialer_ne_clear_pane_g1

0xebaa,	// (0x0008ab32) navi_pane_g2

0xebd8,	// (0x0008ab60) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008b36d) navi_pane_g

0xec65,	// (0x0008abed) navi_pane_mv_g2

0xec8c,	// (0x0008ac14) navi_pane_mv_g5

0x7b48,	// (0x00083ad0) navi_pane_mv_t1

0xe0df,	// (0x0008a067) main_clock2_pane

0x99b3,	// (0x0008593b) main_clock2_list_pane_ParamLimits

0x99b3,	// (0x0008593b) main_clock2_list_pane

0x99d9,	// (0x00085961) main_clock2_pane_t1_ParamLimits

0x99d9,	// (0x00085961) main_clock2_pane_t1

0x99f9,	// (0x00085981) main_clock2_pane_t2_ParamLimits

0x99f9,	// (0x00085981) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0008b764) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0008b764) main_clock2_pane_t

0x9a52,	// (0x000859da) popup_clock_analogue_window_cp03_ParamLimits

0x9a52,	// (0x000859da) popup_clock_analogue_window_cp03

0x9a6f,	// (0x000859f7) popup_clock_digital_window_cp02_ParamLimits

0x9a6f,	// (0x000859f7) popup_clock_digital_window_cp02

0x9adc,	// (0x00085a64) main_clock2_list_single_pane_ParamLimits

0x9adc,	// (0x00085a64) main_clock2_list_single_pane

0xe290,	// (0x0008a218) list_highlight_pane_cp05

0x2069,	// (0x0007dff1) main_clock2_list_single_pane_t1

0x6c53,	// (0x00082bdb) popup_toolbar_window_cp04_ParamLimits

0x90eb,	// (0x00085073) camera2_autofocus_pane_g2_ParamLimits

0x90eb,	// (0x00085073) camera2_autofocus_pane_g2

0x90f7,	// (0x0008507f) camera2_autofocus_pane_g3_ParamLimits

0x90f7,	// (0x0008507f) camera2_autofocus_pane_g3

0x9103,	// (0x0008508b) camera2_autofocus_pane_g4_ParamLimits

0x9103,	// (0x0008508b) camera2_autofocus_pane_g4

0x910f,	// (0x00085097) camera2_autofocus_pane_g5_ParamLimits

0x910f,	// (0x00085097) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0008b6a8) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0008b6a8) camera2_autofocus_pane_g

0x92d1,	// (0x00085259) camera2_autofocus_pane_cp_g2

0x92d9,	// (0x00085261) camera2_autofocus_pane_cp_g3

0x92e1,	// (0x00085269) camera2_autofocus_pane_cp_g4

0x92e9,	// (0x00085271) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0008b70e) camera2_autofocus_pane_cp_g

0x9890,	// (0x00085818) popup_dialer_spcha_window

0xd964,	// (0x000898ec) bg_popup_sub_pane_cp07

0x2077,	// (0x0007dfff) list_spcha_pane

0x207f,	// (0x0007e007) list_single_spcha_pane_ParamLimits

0x207f,	// (0x0007e007) list_single_spcha_pane

0xd964,	// (0x000898ec) list_highlight_pane_cp06

0x2090,	// (0x0007e018) list_single_spcha_pane_t1

0x11cf,	// (0x0007d157) popup_call2_audio_out_window_g4_ParamLimits

0x11cf,	// (0x0007d157) popup_call2_audio_out_window_g4

0x5bce,	// (0x00081b56) main_imed2_pane

0x8814,	// (0x0008479c) popup_imed_adjust2_window

0x8825,	// (0x000847ad) popup_imed_trans_window_ParamLimits

0x8825,	// (0x000847ad) popup_imed_trans_window

0x1aab,	// (0x0007da33) popup_blid_sat_info2_window_t1

0x1ab9,	// (0x0007da41) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0008b63d) popup_blid_sat_info2_window_t

0x9b86,	// (0x00085b0e) aid_size_cell_colour_35

0x9ba0,	// (0x00085b28) aid_size_cell_colour_112

0x9bb7,	// (0x00085b3f) aid_size_cell_effect

0x062b,	// (0x0007c5b3) bg_tb_trans_pane_cp02

0xf0be,	// (0x0008b046) heading_imed_pane

0x9bd1,	// (0x00085b59) listscroll_imed_pane

0x209e,	// (0x0007e026) heading_imed_pane_g1

0x20a6,	// (0x0007e02e) heading_imed_pane_t1

0x20b4,	// (0x0007e03c) grid_imed_colour_35_pane_ParamLimits

0x20b4,	// (0x0007e03c) grid_imed_colour_35_pane

0x9bdd,	// (0x00085b65) grid_imed_effect_pane

0x20c7,	// (0x0007e04f) list_imed_aspect_pane

0x9be9,	// (0x00085b71) scroll_pane_cp027_ParamLimits

0x9be9,	// (0x00085b71) scroll_pane_cp027

0x9bf5,	// (0x00085b7d) cell_imed_effect_pane_ParamLimits

0x9bf5,	// (0x00085b7d) cell_imed_effect_pane

0x20cf,	// (0x0007e057) cell_imed_colour_pane_ParamLimits

0x20cf,	// (0x0007e057) cell_imed_colour_pane

0x2109,	// (0x0007e091) cell_imed_colour_pane_g1_ParamLimits

0x2109,	// (0x0007e091) cell_imed_colour_pane_g1

0x211a,	// (0x0007e0a2) hgihlgiht_grid_pane_cp016_ParamLimits

0x211a,	// (0x0007e0a2) hgihlgiht_grid_pane_cp016

0x9c0b,	// (0x00085b93) cell_imed_effect_pane_g1

0x9c13,	// (0x00085b9b) grid_highlight_pane_cp017

0x212a,	// (0x0007e0b2) list_imed_single_pane_ParamLimits

0x212a,	// (0x0007e0b2) list_imed_single_pane

0xd964,	// (0x000898ec) list_highlight_pane_cp07

0x213d,	// (0x0007e0c5) list_imed_aspect_pane_comp1_t1

0x17d2,	// (0x0007d75a) bg_tb_trans_pane_cp05

0x215d,	// (0x0007e0e5) popup_imed_adjust2_window_g1

0x2184,	// (0x0007e10c) popup_imed_adjust2_window_t1

0x219c,	// (0x0007e124) slider_imed_adjust_pane

0x21b0,	// (0x0007e138) slider_imed_adjust_pane_g1

0x21c0,	// (0x0007e148) slider_imed_adjust_pane_g2

0x21d0,	// (0x0007e158) slider_imed_adjust_pane_g3

0x21e1,	// (0x0007e169) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0008b781) slider_imed_adjust_pane_g

0x9c1c,	// (0x00085ba4) aid_size_cell_clipart2

0x9c28,	// (0x00085bb0) grid_imed_clipart_pane

0x21f2,	// (0x0007e17a) scroll_pane_cp031

0x9c32,	// (0x00085bba) cell_imed_clipart_pane_ParamLimits

0x9c32,	// (0x00085bba) cell_imed_clipart_pane

0x9c46,	// (0x00085bce) cell_imed_clipart_pane_g1

0xd964,	// (0x000898ec) grid_highlight_pane_cp014

0x99bf,	// (0x00085947) main_clock2_pane_g1_ParamLimits

0x99bf,	// (0x00085947) main_clock2_pane_g1

0x9a87,	// (0x00085a0f) aid_call2_pane_cp10

0x9a99,	// (0x00085a21) aid_call_pane_cp10

0xeb0b,	// (0x0008aa93) popup_clock_analogue_window_cp10_g1

0xeb0b,	// (0x0008aa93) popup_clock_analogue_window_cp10_g2

0x9aab,	// (0x00085a33) popup_clock_analogue_window_cp10_g3

0x9aab,	// (0x00085a33) popup_clock_analogue_window_cp10_g4

0xeb0b,	// (0x0008aa93) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0008b76f) popup_clock_analogue_window_cp10_g

0x9abd,	// (0x00085a45) popup_clock_analogue_window_cp10_t1

0x9aee,	// (0x00085a76) clock_digital_number_pane_cp10_ParamLimits

0x9aee,	// (0x00085a76) clock_digital_number_pane_cp10

0x9b06,	// (0x00085a8e) clock_digital_number_pane_cp11_ParamLimits

0x9b06,	// (0x00085a8e) clock_digital_number_pane_cp11

0x9b1e,	// (0x00085aa6) clock_digital_number_pane_cp12_ParamLimits

0x9b1e,	// (0x00085aa6) clock_digital_number_pane_cp12

0x9b36,	// (0x00085abe) clock_digital_number_pane_cp13_ParamLimits

0x9b36,	// (0x00085abe) clock_digital_number_pane_cp13

0x9b4e,	// (0x00085ad6) clock_digital_separator_pane_cp10_ParamLimits

0x9b4e,	// (0x00085ad6) clock_digital_separator_pane_cp10

0x9b66,	// (0x00085aee) popup_clock_digital_window_cp02_t1_ParamLimits

0x9b66,	// (0x00085aee) popup_clock_digital_window_cp02_t1

0xe006,	// (0x00089f8e) clock_digital_number_pane_cp10_g1

0xe006,	// (0x00089f8e) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0008b78a) clock_digital_number_pane_cp10_g

0xe006,	// (0x00089f8e) clock_digital_separator_pane_cp10_g1

0xe006,	// (0x00089f8e) clock_digital_separator_pane_g2_cp10

0xec94,	// (0x0008ac1c) navi_pane_vded_g4

0xec9d,	// (0x0008ac25) navi_pane_vded_g5

0xeca6,	// (0x0008ac2e) navi_pane_vded_t1

0x5bce,	// (0x00081b56) main_vded_pane

0x9c4f,	// (0x00085bd7) main_vded_pane_g1

0x9c57,	// (0x00085bdf) main_vded_pane_g2

0x9c5f,	// (0x00085be7) main_vded_pane_g3

0x0002,

0xf807,	// (0x0008b78f) main_vded_pane_g

0x9c67,	// (0x00085bef) main_vded_pane_t1

0x9c75,	// (0x00085bfd) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0008b796) main_vded_pane_t

0x9c83,	// (0x00085c0b) vded_slider_pane

0x9c8b,	// (0x00085c13) vded_video_pane

0x21fa,	// (0x0007e182) vded_video_pane_g1

0x9c93,	// (0x00085c1b) vded_video_pane_g2

0x1c67,	// (0x0007dbef) vded_video_pane_g3

0x0002,

0xf813,	// (0x0008b79b) vded_video_pane_g

0x2204,	// (0x0007e18c) vded_slider_pane_g1

0x19c2,	// (0x0007d94a) vded_slider_pane_g2

0x220d,	// (0x0007e195) vded_slider_pane_g3

0x2216,	// (0x0007e19e) vded_slider_pane_g4

0x221f,	// (0x0007e1a7) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0008b7a2) vded_slider_pane_g

0x97a2,	// (0x0008572a) mup3_rocker_pane_ParamLimits

0x97a2,	// (0x0008572a) mup3_rocker_pane

0x9c9c,	// (0x00085c24) mup3_control_keys_pane_g1

0x9ca4,	// (0x00085c2c) mup3_control_keys_pane_g2

0x9cac,	// (0x00085c34) mup3_control_keys_pane_g3

0x9cb4,	// (0x00085c3c) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0008b7ad) mup3_control_keys_pane_g

0x5b86,	// (0x00081b0e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5b86,	// (0x00081b0e) popup_toolbar2_fixed_window_cp01

0x97ba,	// (0x00085742) popup_toolbar2_fixed_window_cp02_ParamLimits

0x97ba,	// (0x00085742) popup_toolbar2_fixed_window_cp02

0x0b0e,	// (0x0007ca96) popup_call2_audio_second_window_t4_ParamLimits

0x0b0e,	// (0x0007ca96) popup_call2_audio_second_window_t4

0x103c,	// (0x0007cfc4) popup_call2_audio_first_window_t6_ParamLimits

0x103c,	// (0x0007cfc4) popup_call2_audio_first_window_t6

0x12d2,	// (0x0007d25a) popup_call2_audio_out_window_t6_ParamLimits

0x12d2,	// (0x0007d25a) popup_call2_audio_out_window_t6

0x5bce,	// (0x00081b56) main_vitu_pane

0x9cc4,	// (0x00085c4c) aid_size_cell_itu_ParamLimits

0x9cc4,	// (0x00085c4c) aid_size_cell_itu

0x422b,	// (0x000801b3) bg_popup_window_pane_cp08_ParamLimits

0x422b,	// (0x000801b3) bg_popup_window_pane_cp08

0x9cd2,	// (0x00085c5a) field_vitu_entry_pane_ParamLimits

0x9cd2,	// (0x00085c5a) field_vitu_entry_pane

0x9cdf,	// (0x00085c67) grid_vitu_function_pane_ParamLimits

0x9cdf,	// (0x00085c67) grid_vitu_function_pane

0x9ceb,	// (0x00085c73) grid_vitu_itu_pane_ParamLimits

0x9ceb,	// (0x00085c73) grid_vitu_itu_pane

0x9cf7,	// (0x00085c7f) cell_vitu_itu_pane_ParamLimits

0x9cf7,	// (0x00085c7f) cell_vitu_itu_pane

0x9d0c,	// (0x00085c94) cell_vitu_function_pane_ParamLimits

0x9d0c,	// (0x00085c94) cell_vitu_function_pane

0x062b,	// (0x0007c5b3) bg_popup_sub_pane_cp08_ParamLimits

0x062b,	// (0x0007c5b3) bg_popup_sub_pane_cp08

0x9d1e,	// (0x00085ca6) field_vitu_entry_pane_t1_ParamLimits

0x9d1e,	// (0x00085ca6) field_vitu_entry_pane_t1

0x2240,	// (0x0007e1c8) field_vitu_entry_pane_t2_ParamLimits

0x2240,	// (0x0007e1c8) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0008b7bb) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0008b7bb) field_vitu_entry_pane_t

0x225d,	// (0x0007e1e5) bg_button_pane_cp05_ParamLimits

0x225d,	// (0x0007e1e5) bg_button_pane_cp05

0x9d37,	// (0x00085cbf) cell_vitu_itu_pane_g1

0x9d4f,	// (0x00085cd7) cell_vitu_itu_pane_t1_ParamLimits

0x9d4f,	// (0x00085cd7) cell_vitu_itu_pane_t1

0x9d61,	// (0x00085ce9) cell_vitu_itu_pane_t2_ParamLimits

0x9d61,	// (0x00085ce9) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0008b7c0) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0008b7c0) cell_vitu_itu_pane_t

0x226b,	// (0x0007e1f3) bg_button_pane_cp07

0x9d96,	// (0x00085d1e) cell_vitu_function_pane_g1

0x5dcb,	// (0x00081d53) main_calc_pane_g1

0x596b,	// (0x000818f3) aid_visual_content_pane

0x5bce,	// (0x00081b56) main_vradio_pane

0x9d9f,	// (0x00085d27) main_vradio_pane_g1_ParamLimits

0x9d9f,	// (0x00085d27) main_vradio_pane_g1

0x2275,	// (0x0007e1fd) main_vradio_pane_g2_ParamLimits

0x2275,	// (0x0007e1fd) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0008b7c7) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0008b7c7) main_vradio_pane_g

0x9dad,	// (0x00085d35) main_vradio_pane_t1_ParamLimits

0x9dad,	// (0x00085d35) main_vradio_pane_t1

0x9dbf,	// (0x00085d47) main_vradio_pane_t2_ParamLimits

0x9dbf,	// (0x00085d47) main_vradio_pane_t2

0x2282,	// (0x0007e20a) main_vradio_pane_t3_ParamLimits

0x2282,	// (0x0007e20a) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0008b7cc) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0008b7cc) main_vradio_pane_t

0x9dd1,	// (0x00085d59) vradio_rocker_control_pane_ParamLimits

0x9dd1,	// (0x00085d59) vradio_rocker_control_pane

0x9ddd,	// (0x00085d65) vradio_station_info_pane_ParamLimits

0x9ddd,	// (0x00085d65) vradio_station_info_pane

0x2294,	// (0x0007e21c) vradio_frequency_info_pane_ParamLimits

0x2294,	// (0x0007e21c) vradio_frequency_info_pane

0x1c67,	// (0x0007dbef) vradio_station_info_pane_g1

0x22a3,	// (0x0007e22b) vradio_station_info_pane_t1_ParamLimits

0x22a3,	// (0x0007e22b) vradio_station_info_pane_t1

0x22c5,	// (0x0007e24d) vradio_station_info_pane_t2_ParamLimits

0x22c5,	// (0x0007e24d) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0008b7d3) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0008b7d3) vradio_station_info_pane_t

0x22d7,	// (0x0007e25f) vradio_tuning_pane

0x22df,	// (0x0007e267) vradio_rocker_control_pane_g1

0x22e7,	// (0x0007e26f) vradio_rocker_control_pane_g2

0x22ef,	// (0x0007e277) vradio_rocker_control_pane_g3

0x22f7,	// (0x0007e27f) vradio_rocker_control_pane_g4

0x22ff,	// (0x0007e287) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0008b7d8) vradio_rocker_control_pane_g

0x9dea,	// (0x00085d72) vradio_frequency_info_pane_g1

0x2307,	// (0x0007e28f) vradio_frequency_info_pane_t1_ParamLimits

0x2307,	// (0x0007e28f) vradio_frequency_info_pane_t1

0x9df2,	// (0x00085d7a) vradio_tuning_pane_g1

0x9dfb,	// (0x00085d83) vradio_tuning_pane_t1

0x59a8,	// (0x00081930) area_side_right_pane_ParamLimits

0x59a8,	// (0x00081930) area_side_right_pane

0x178d,	// (0x0007d715) status_small_pane_g1

0x1795,	// (0x0007d71d) status_small_pane_g2

0x179e,	// (0x0007d726) status_small_pane_g3

0x17a7,	// (0x0007d72f) status_small_pane_g4

0x0003,

0xf60b,	// (0x0008b593) status_small_pane_g

0x17b0,	// (0x0007d738) status_small_pane_t1

0x5bce,	// (0x00081b56) main_video3_pane

0x231b,	// (0x0007e2a3) cams_zoom_vslider_pane

0x2323,	// (0x0007e2ab) image3_wide_pane_ParamLimits

0x2323,	// (0x0007e2ab) image3_wide_pane

0x233d,	// (0x0007e2c5) image3_wide_small_pane

0x2347,	// (0x0007e2cf) main_video3_pane_g1_ParamLimits

0x2347,	// (0x0007e2cf) main_video3_pane_g1

0x2363,	// (0x0007e2eb) main_video3_pane_g2_ParamLimits

0x2363,	// (0x0007e2eb) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0008b7e3) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0008b7e3) main_video3_pane_g

0x237f,	// (0x0007e307) main_video3_pane_t1_ParamLimits

0x237f,	// (0x0007e307) main_video3_pane_t1

0x23aa,	// (0x0007e332) main_video3_pane_t2_ParamLimits

0x23aa,	// (0x0007e332) main_video3_pane_t2

0x23d5,	// (0x0007e35d) main_video3_pane_t3_ParamLimits

0x23d5,	// (0x0007e35d) main_video3_pane_t3

0x0002,

0xf860,	// (0x0008b7e8) main_video3_pane_t_ParamLimits

0xf860,	// (0x0008b7e8) main_video3_pane_t

0x2400,	// (0x0007e388) cams_zoom_vslider_pane_g1

0x2409,	// (0x0007e391) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0008b7ef) cams_zoom_vslider_pane_g

0x2411,	// (0x0007e399) small_slider_vertical_pane

0x1c67,	// (0x0007dbef) small_slider_vertical_pane_g1

0x1c67,	// (0x0007dbef) small_slider_vertical_pane_g2

0x2419,	// (0x0007e3a1) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0008b7f4) small_slider_vertical_pane_g

0x5bce,	// (0x00081b56) main_hwr_training_pane

0x2422,	// (0x0007e3aa) hwr_training_instruct_pane_ParamLimits

0x2422,	// (0x0007e3aa) hwr_training_instruct_pane

0x9e0a,	// (0x00085d92) hwr_training_navi_pane_ParamLimits

0x9e0a,	// (0x00085d92) hwr_training_navi_pane

0x9e1e,	// (0x00085da6) hwr_training_write_pane_ParamLimits

0x9e1e,	// (0x00085da6) hwr_training_write_pane

0xd964,	// (0x000898ec) bg_frame_shadow_pane

0x2451,	// (0x0007e3d9) hwr_training_write_pane_g1

0x2459,	// (0x0007e3e1) hwr_training_write_pane_g2

0x2461,	// (0x0007e3e9) hwr_training_write_pane_g3

0x2469,	// (0x0007e3f1) hwr_training_write_pane_g4

0x2471,	// (0x0007e3f9) hwr_training_write_pane_g5

0x2479,	// (0x0007e401) hwr_training_write_pane_g6

0x2481,	// (0x0007e409) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0008b7fb) hwr_training_write_pane_g

0x9e4c,	// (0x00085dd4) hwr_training_navi_pane_g1_ParamLimits

0x9e4c,	// (0x00085dd4) hwr_training_navi_pane_g1

0x9e5e,	// (0x00085de6) hwr_training_navi_pane_g2_ParamLimits

0x9e5e,	// (0x00085de6) hwr_training_navi_pane_g2

0x9e70,	// (0x00085df8) hwr_training_navi_pane_g3_ParamLimits

0x9e70,	// (0x00085df8) hwr_training_navi_pane_g3

0x9e80,	// (0x00085e08) hwr_training_navi_pane_g4_ParamLimits

0x9e80,	// (0x00085e08) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0008b80a) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0008b80a) hwr_training_navi_pane_g

0x9e9a,	// (0x00085e22) hwr_training_navi_pane_t1

0x9ea8,	// (0x00085e30) list_single_hwr_training_instruct_pane_ParamLimits

0x9ea8,	// (0x00085e30) list_single_hwr_training_instruct_pane

0x2489,	// (0x0007e411) list_single_hwr_training_instruct_pane_t1

0x1ba7,	// (0x0007db2f) bg_frame_shadow_pane_g1

0x2498,	// (0x0007e420) bg_frame_shadow_pane_g2

0x24a0,	// (0x0007e428) bg_frame_shadow_pane_g3

0x24a8,	// (0x0007e430) bg_frame_shadow_pane_g4

0x24b0,	// (0x0007e438) bg_frame_shadow_pane_g5

0x24b8,	// (0x0007e440) bg_frame_shadow_pane_g6

0x24c0,	// (0x0007e448) bg_frame_shadow_pane_g7

0xe1aa,	// (0x0008a132) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0008b815) bg_frame_shadow_pane_g

0x5bce,	// (0x00081b56) main_video_tele_dialer_pane

0x9ebf,	// (0x00085e47) aid_size_cell_video_keypad_ParamLimits

0x9ebf,	// (0x00085e47) aid_size_cell_video_keypad

0x9ecf,	// (0x00085e57) grid_video_dialer_keypad_pane_ParamLimits

0x9ecf,	// (0x00085e57) grid_video_dialer_keypad_pane

0x9eff,	// (0x00085e87) video_down_pane_cp_ParamLimits

0x9eff,	// (0x00085e87) video_down_pane_cp

0x9f27,	// (0x00085eaf) cell_video_dialer_keypad_pane_ParamLimits

0x9f27,	// (0x00085eaf) cell_video_dialer_keypad_pane

0x24c8,	// (0x0007e450) bg_button_pane_cp08_ParamLimits

0x24c8,	// (0x0007e450) bg_button_pane_cp08

0x9f3c,	// (0x00085ec4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9f3c,	// (0x00085ec4) cell_video_dialer_keypad_pane_g1

0x9796,	// (0x0008571e) mup3_rocker2_pane_ParamLimits

0x9796,	// (0x0008571e) mup3_rocker2_pane

0x1c67,	// (0x0007dbef) mup3_rocker2_pane_g1

0x8796,	// (0x0008471e) main_dialer2_pane

0x5bce,	// (0x00081b56) main_mp4_pane

0x9f7f,	// (0x00085f07) main_mp4_pane_g1_ParamLimits

0x9f7f,	// (0x00085f07) main_mp4_pane_g1

0x9f8d,	// (0x00085f15) main_mp4_pane_g2_ParamLimits

0x9f8d,	// (0x00085f15) main_mp4_pane_g2

0x9f9b,	// (0x00085f23) main_mp4_pane_g3_ParamLimits

0x9f9b,	// (0x00085f23) main_mp4_pane_g3

0x9fd0,	// (0x00085f58) main_mp4_pane_g4_ParamLimits

0x9fd0,	// (0x00085f58) main_mp4_pane_g4

0x9ff8,	// (0x00085f80) main_mp4_pane_g5_ParamLimits

0x9ff8,	// (0x00085f80) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0008b835) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0008b835) main_mp4_pane_g

0xa048,	// (0x00085fd0) main_mp4_pane_t1_ParamLimits

0xa048,	// (0x00085fd0) main_mp4_pane_t1

0xa0a0,	// (0x00086028) main_mp4_pane_t2_ParamLimits

0xa0a0,	// (0x00086028) main_mp4_pane_t2

0x474f,	// (0x000806d7) main_mp4_pane_t3_ParamLimits

0x474f,	// (0x000806d7) main_mp4_pane_t3

0xa0f2,	// (0x0008607a) main_mp4_pane_t4_ParamLimits

0xa0f2,	// (0x0008607a) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0008b842) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0008b842) main_mp4_pane_t

0xa132,	// (0x000860ba) mp4_progress_pane_ParamLimits

0xa132,	// (0x000860ba) mp4_progress_pane

0xa17c,	// (0x00086104) mp4_rocker_pane_ParamLimits

0xa17c,	// (0x00086104) mp4_rocker_pane

0x4777,	// (0x000806ff) mp4_progress_pane_t1

0x478e,	// (0x00080716) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0008b84b) mp4_progress_pane_t

0x47a5,	// (0x0008072d) mup_progress_pane_cp04

0x2b11,	// (0x0007ea99) mp4_rocker_pane_g1

0xa19a,	// (0x00086122) aid_cell_size_keypad2_ParamLimits

0xa19a,	// (0x00086122) aid_cell_size_keypad2

0xa1aa,	// (0x00086132) dialer2_ne_pane_ParamLimits

0xa1aa,	// (0x00086132) dialer2_ne_pane

0xa1b6,	// (0x0008613e) grid_dialer2_keypad_pane_ParamLimits

0xa1b6,	// (0x0008613e) grid_dialer2_keypad_pane

0x2b6c,	// (0x0007eaf4) bg_popup_call_pane_cp07_ParamLimits

0x2b6c,	// (0x0007eaf4) bg_popup_call_pane_cp07

0xa1c2,	// (0x0008614a) dialer2_ne_pane_t1_ParamLimits

0xa1c2,	// (0x0008614a) dialer2_ne_pane_t1

0xa1e7,	// (0x0008616f) cell_dialer2_keypad_pane_ParamLimits

0xa1e7,	// (0x0008616f) cell_dialer2_keypad_pane

0x47c3,	// (0x0008074b) bg_button_pane_pane_cp04_ParamLimits

0x47c3,	// (0x0008074b) bg_button_pane_pane_cp04

0xa1fc,	// (0x00086184) cell_dialer2_keypad_pane_g1_ParamLimits

0xa1fc,	// (0x00086184) cell_dialer2_keypad_pane_g1

0x6b2f,	// (0x00082ab7) aid_placing_vt_set_content_ParamLimits

0x6b2f,	// (0x00082ab7) aid_placing_vt_set_content

0x6b55,	// (0x00082add) aid_placing_vt_set_title_ParamLimits

0x6b55,	// (0x00082add) aid_placing_vt_set_title

0x5bce,	// (0x00081b56) main_image3_pane

0xa28c,	// (0x00086214) area_side_right_pane_cp01_ParamLimits

0xa28c,	// (0x00086214) area_side_right_pane_cp01

0xa2b9,	// (0x00086241) main_image3_pane_g1_ParamLimits

0xa2b9,	// (0x00086241) main_image3_pane_g1

0xa2c7,	// (0x0008624f) main_image3_pane_g2_ParamLimits

0xa2c7,	// (0x0008624f) main_image3_pane_g2

0xa2de,	// (0x00086266) main_image3_pane_g3_ParamLimits

0xa2de,	// (0x00086266) main_image3_pane_g3

0xa2f5,	// (0x0008627d) main_image3_pane_g4_ParamLimits

0xa2f5,	// (0x0008627d) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0008b85a) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0008b85a) main_image3_pane_g

0xa30c,	// (0x00086294) main_image3_pane_t1_ParamLimits

0xa30c,	// (0x00086294) main_image3_pane_t1

0xa331,	// (0x000862b9) main_image3_pane_t2_ParamLimits

0xa331,	// (0x000862b9) main_image3_pane_t2

0xa350,	// (0x000862d8) main_image3_pane_t3_ParamLimits

0xa350,	// (0x000862d8) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0008b863) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0008b863) main_image3_pane_t

0x422b,	// (0x000801b3) grid_sctrl_middle_pane_cp01_ParamLimits

0x422b,	// (0x000801b3) grid_sctrl_middle_pane_cp01

0xa3ab,	// (0x00086333) cell_sctrl_middle_pane_cp01_ParamLimits

0xa3ab,	// (0x00086333) cell_sctrl_middle_pane_cp01

0xa3bc,	// (0x00086344) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa3bc,	// (0x00086344) cell_sctrl_middle_pane_cp01_g1

0x5bce,	// (0x00081b56) main_call4_pane

0xa3c9,	// (0x00086351) aid_size_button_call4_ParamLimits

0xa3c9,	// (0x00086351) aid_size_button_call4

0xa3f7,	// (0x0008637f) call4_windows_pane_ParamLimits

0xa3f7,	// (0x0008637f) call4_windows_pane

0xa40f,	// (0x00086397) grid_call4_button_pane_ParamLimits

0xa40f,	// (0x00086397) grid_call4_button_pane

0x47cf,	// (0x00080757) call4_windows_conf_pane

0xa429,	// (0x000863b1) popup_call4_audio_first_window_ParamLimits

0xa429,	// (0x000863b1) popup_call4_audio_first_window

0xa449,	// (0x000863d1) popup_call4_audio_second_window_ParamLimits

0xa449,	// (0x000863d1) popup_call4_audio_second_window

0x4802,	// (0x0008078a) popup_call4_audio_wait_window_ParamLimits

0x4802,	// (0x0008078a) popup_call4_audio_wait_window

0xa45b,	// (0x000863e3) cell_call4_button_pane_ParamLimits

0xa45b,	// (0x000863e3) cell_call4_button_pane

0xa47e,	// (0x00086406) bg_button_pane_cp09_ParamLimits

0xa47e,	// (0x00086406) bg_button_pane_cp09

0xa48a,	// (0x00086412) cell_call4_button_pane_g1_ParamLimits

0xa48a,	// (0x00086412) cell_call4_button_pane_g1

0xa497,	// (0x0008641f) cell_call4_button_pane_t1_ParamLimits

0xa497,	// (0x0008641f) cell_call4_button_pane_t1

0x4848,	// (0x000807d0) popup_call4_audio_conf_window_ParamLimits

0x4848,	// (0x000807d0) popup_call4_audio_conf_window

0x97c7,	// (0x0008574f) mup3_progress_pane_t1_ParamLimits

0x97e5,	// (0x0008576d) mup3_progress_pane_t2_ParamLimits

0x1f11,	// (0x0007de99) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0008b737) mup3_progress_pane_t_ParamLimits

0x1f2e,	// (0x0007deb6) mup_progress_pane_cp03_ParamLimits

0x9cbc,	// (0x00085c44) mup3_control_keys_pane_g4_copy1

0xa160,	// (0x000860e8) mp4_rocker2_pane_ParamLimits

0xa160,	// (0x000860e8) mp4_rocker2_pane

0x4864,	// (0x000807ec) mp4_rocker2_pane_g1

0x485c,	// (0x000807e4) mp4_rocker2_pane_g2

0xa4a9,	// (0x00086431) mp4_rocker2_pane_g3

0xa4b1,	// (0x00086439) mp4_rocker2_pane_g4

0xa4b9,	// (0x00086441) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0008b86c) mp4_rocker2_pane_g

0x5bce,	// (0x00081b56) main_camera4_pane

0x5bce,	// (0x00081b56) main_video4_pane

0x9edb,	// (0x00085e63) main_video_tele_dialer_pane_t1_ParamLimits

0x9edb,	// (0x00085e63) main_video_tele_dialer_pane_t1

0x9eed,	// (0x00085e75) main_video_tele_dialer_pane_t2_ParamLimits

0x9eed,	// (0x00085e75) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0008b826) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0008b826) main_video_tele_dialer_pane_t

0xa4d7,	// (0x0008645f) cam4_autofocus_pane_ParamLimits

0xa4d7,	// (0x0008645f) cam4_autofocus_pane

0xa4ed,	// (0x00086475) cam4_image_uncrop_pane_ParamLimits

0xa4ed,	// (0x00086475) cam4_image_uncrop_pane

0xa502,	// (0x0008648a) cam4_indicators_pane_ParamLimits

0xa502,	// (0x0008648a) cam4_indicators_pane

0xa51c,	// (0x000864a4) main_camera4_pane_g1_ParamLimits

0xa51c,	// (0x000864a4) main_camera4_pane_g1

0xa528,	// (0x000864b0) main_camera4_pane_g2_ParamLimits

0xa528,	// (0x000864b0) main_camera4_pane_g2

0xa528,	// (0x000864b0) main_camera4_pane_g3_ParamLimits

0xa528,	// (0x000864b0) main_camera4_pane_g3

0xa534,	// (0x000864bc) main_camera4_pane_g4_ParamLimits

0xa534,	// (0x000864bc) main_camera4_pane_g4

0xa540,	// (0x000864c8) main_camera4_pane_g5_ParamLimits

0xa540,	// (0x000864c8) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0008b877) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0008b877) main_camera4_pane_g

0xa55a,	// (0x000864e2) main_camera4_pane_t1_ParamLimits

0xa55a,	// (0x000864e2) main_camera4_pane_t1

0xa5a2,	// (0x0008652a) bg_tb_trans_pane_cp06

0xa5b8,	// (0x00086540) cam4_indicators_pane_g1

0xa5c9,	// (0x00086551) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0008b892) cam4_indicators_pane_g

0xa5e1,	// (0x00086569) cam4_indicators_pane_t1

0xa609,	// (0x00086591) main_video4_pane_g1_ParamLimits

0xa609,	// (0x00086591) main_video4_pane_g1

0xa615,	// (0x0008659d) main_video4_pane_g2_ParamLimits

0xa615,	// (0x0008659d) main_video4_pane_g2

0xa621,	// (0x000865a9) main_video4_pane_g3_ParamLimits

0xa621,	// (0x000865a9) main_video4_pane_g3

0xa62d,	// (0x000865b5) main_video4_pane_g4_ParamLimits

0xa62d,	// (0x000865b5) main_video4_pane_g4

0x0004,

0xf911,	// (0x0008b899) main_video4_pane_g_ParamLimits

0xf911,	// (0x0008b899) main_video4_pane_g

0xa64d,	// (0x000865d5) vid4_indicators_pane_ParamLimits

0xa64d,	// (0x000865d5) vid4_indicators_pane

0xa66a,	// (0x000865f2) video4_image_uncrop_cif_pane_ParamLimits

0xa66a,	// (0x000865f2) video4_image_uncrop_cif_pane

0xa677,	// (0x000865ff) video4_image_uncrop_nhd_pane_ParamLimits

0xa677,	// (0x000865ff) video4_image_uncrop_nhd_pane

0xa4ed,	// (0x00086475) video4_image_uncrop_vga_pane_ParamLimits

0xa4ed,	// (0x00086475) video4_image_uncrop_vga_pane

0x8788,	// (0x00084710) bg_tb_trans_pane_cp07

0xa68c,	// (0x00086614) vid4_indicators_pane_g1

0xa6a0,	// (0x00086628) vid4_indicators_pane_g2

0xa6b4,	// (0x0008663c) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0008b8a4) vid4_indicators_pane_g

0xa6e1,	// (0x00086669) vid4_indicators_pane_t1

0xa6f8,	// (0x00086680) cam4_autofocus_pane_g1

0xa700,	// (0x00086688) cam4_autofocus_pane_g2

0xa708,	// (0x00086690) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0008b8af) cam4_autofocus_pane_g

0xa710,	// (0x00086698) cam4_autofocus_pane_g3_copy1

0x9f0b,	// (0x00085e93) video_down_pane_cp_t1

0x9f19,	// (0x00085ea1) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0008b82b) video_down_pane_cp_t

0x5bb8,	// (0x00081b40) popup_vitu2_window_ParamLimits

0x5bb8,	// (0x00081b40) popup_vitu2_window

0xa718,	// (0x000866a0) aid_size_cell2_itu2_ParamLimits

0xa718,	// (0x000866a0) aid_size_cell2_itu2

0xa73a,	// (0x000866c2) aid_size_cell_itu2_ParamLimits

0xa73a,	// (0x000866c2) aid_size_cell_itu2

0xa778,	// (0x00086700) bg_popup_window_pane_cp09_ParamLimits

0xa778,	// (0x00086700) bg_popup_window_pane_cp09

0xa786,	// (0x0008670e) field_vitu2_entry_pane_ParamLimits

0xa786,	// (0x0008670e) field_vitu2_entry_pane

0xa79a,	// (0x00086722) grid_vitu2_function_pane_ParamLimits

0xa79a,	// (0x00086722) grid_vitu2_function_pane

0xa7c8,	// (0x00086750) grid_vitu2_itu_pane_ParamLimits

0xa7c8,	// (0x00086750) grid_vitu2_itu_pane

0xa820,	// (0x000867a8) cell_vitu2_itu_pane_ParamLimits

0xa820,	// (0x000867a8) cell_vitu2_itu_pane

0xa838,	// (0x000867c0) cell_vitu2_function_pane_ParamLimits

0xa838,	// (0x000867c0) cell_vitu2_function_pane

0x486c,	// (0x000807f4) bg_popup_call_pane_cp08_ParamLimits

0x486c,	// (0x000807f4) bg_popup_call_pane_cp08

0x4883,	// (0x0008080b) field_vitu2_entry_pane_g1

0x488f,	// (0x00080817) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0008b8b6) field_vitu2_entry_pane_g

0xa877,	// (0x000867ff) field_vitu2_entry_pane_t1_ParamLimits

0xa877,	// (0x000867ff) field_vitu2_entry_pane_t1

0x24d4,	// (0x0007e45c) field_vitu2_entry_pane_t2_ParamLimits

0x24d4,	// (0x0007e45c) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0008b8bd) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0008b8bd) field_vitu2_entry_pane_t

0xa8a5,	// (0x0008682d) bg_button_pane_cp010_ParamLimits

0xa8a5,	// (0x0008682d) bg_button_pane_cp010

0xa8b3,	// (0x0008683b) cell_vitu2_itu_pane_g1

0xa8d3,	// (0x0008685b) cell_vitu2_itu_pane_t1_ParamLimits

0xa8d3,	// (0x0008685b) cell_vitu2_itu_pane_t1

0x5857,	// (0x000817df) cell_vitu2_itu_pane_t2_ParamLimits

0x5857,	// (0x000817df) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0008b8c7) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0008b8c7) cell_vitu2_itu_pane_t

0x8788,	// (0x00084710) bg_button_pane_cp011

0xa91f,	// (0x000868a7) cell_vitu2_function_pane_g1

0x5bce,	// (0x00081b56) main_myfav_hc_pane

0xa390,	// (0x00086318) popup_image3_note_pane_ParamLimits

0xa390,	// (0x00086318) popup_image3_note_pane

0xa39c,	// (0x00086324) popup_image3_tool_bar_pane_ParamLimits

0xa39c,	// (0x00086324) popup_image3_tool_bar_pane

0x58cd,	// (0x00081855) cell_vitu2_itu_pane_t3_ParamLimits

0x58cd,	// (0x00081855) cell_vitu2_itu_pane_t3

0xd964,	// (0x000898ec) bg_popup_trans_pane

0x48c3,	// (0x0008084b) grid_image3_tool_bar_pane

0x48cd,	// (0x00080855) bg_popup_trans_pane_g1

0xe4f6,	// (0x0008a47e) bg_popup_trans_pane_g2

0x48d5,	// (0x0008085d) bg_popup_trans_pane_g3

0x48dd,	// (0x00080865) bg_popup_trans_pane_g4

0x48e5,	// (0x0008086d) bg_popup_trans_pane_g5

0x48ed,	// (0x00080875) bg_popup_trans_pane_g6

0x48f5,	// (0x0008087d) bg_popup_trans_pane_g7

0x48fd,	// (0x00080885) bg_popup_trans_pane_g8

0xe4d6,	// (0x0008a45e) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0008b8ce) bg_popup_trans_pane_g

0x4905,	// (0x0008088d) cell_image3_tool_bar_pane_ParamLimits

0x4905,	// (0x0008088d) cell_image3_tool_bar_pane

0x1c67,	// (0x0007dbef) cell_image3_tool_bar_pane_g1

0xd964,	// (0x000898ec) bg_popup_trans_pane_cp1

0x4919,	// (0x000808a1) popup_image3_note_pane_t1

0x4927,	// (0x000808af) popup_image3_note_pane_t2

0x4935,	// (0x000808bd) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0008b8e1) popup_image3_note_pane_t

0x4943,	// (0x000808cb) popup_image3_note_pane_t3_copy1

0xa933,	// (0x000868bb) bg_myfav_hc_instruction_pane_ParamLimits

0xa933,	// (0x000868bb) bg_myfav_hc_instruction_pane

0xa945,	// (0x000868cd) cell_myfav_contact_pane_ParamLimits

0xa945,	// (0x000868cd) cell_myfav_contact_pane

0xa95f,	// (0x000868e7) cell_myfav_contact_pane_cp1_ParamLimits

0xa95f,	// (0x000868e7) cell_myfav_contact_pane_cp1

0xa975,	// (0x000868fd) cell_myfav_contact_pane_cp2_ParamLimits

0xa975,	// (0x000868fd) cell_myfav_contact_pane_cp2

0xa98b,	// (0x00086913) cell_myfav_contact_pane_cp3_ParamLimits

0xa98b,	// (0x00086913) cell_myfav_contact_pane_cp3

0xa9a0,	// (0x00086928) cell_myfav_contact_pane_cp4_ParamLimits

0xa9a0,	// (0x00086928) cell_myfav_contact_pane_cp4

0xa9b4,	// (0x0008693c) cell_myfav_contact_pane_cp5_ParamLimits

0xa9b4,	// (0x0008693c) cell_myfav_contact_pane_cp5

0xa9c8,	// (0x00086950) cell_myfav_contact_pane_cp6_ParamLimits

0xa9c8,	// (0x00086950) cell_myfav_contact_pane_cp6

0xa9dc,	// (0x00086964) cell_myfav_contact_pane_cp7_ParamLimits

0xa9dc,	// (0x00086964) cell_myfav_contact_pane_cp7

0x4951,	// (0x000808d9) listscroll_gen_pane_cp05

0xa9f4,	// (0x0008697c) main_myfav_hc_pane_g1_ParamLimits

0xa9f4,	// (0x0008697c) main_myfav_hc_pane_g1

0xaa0a,	// (0x00086992) main_myfav_hc_pane_g2_ParamLimits

0xaa0a,	// (0x00086992) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0008b8e8) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0008b8e8) main_myfav_hc_pane_g

0xaa34,	// (0x000869bc) main_myfav_hc_pane_t1_ParamLimits

0xaa34,	// (0x000869bc) main_myfav_hc_pane_t1

0x495a,	// (0x000808e2) main_myfav_hc_pane_t2_ParamLimits

0x495a,	// (0x000808e2) main_myfav_hc_pane_t2

0x496c,	// (0x000808f4) main_myfav_hc_pane_t3_ParamLimits

0x496c,	// (0x000808f4) main_myfav_hc_pane_t3

0xaa49,	// (0x000869d1) main_myfav_hc_pane_t4_ParamLimits

0xaa49,	// (0x000869d1) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0008b8ef) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0008b8ef) main_myfav_hc_pane_t

0x1c67,	// (0x0007dbef) bg_myfav_hc_instruction_pane_g1

0x497e,	// (0x00080906) cell_myfav_contact_pane_g1_ParamLimits

0x497e,	// (0x00080906) cell_myfav_contact_pane_g1

0x497e,	// (0x00080906) cell_myfav_contact_pane_g2_ParamLimits

0x497e,	// (0x00080906) cell_myfav_contact_pane_g2

0x498a,	// (0x00080912) cell_myfav_contact_pane_g3_ParamLimits

0x498a,	// (0x00080912) cell_myfav_contact_pane_g3

0x1efb,	// (0x0007de83) cell_myfav_contact_pane_g4_ParamLimits

0x1efb,	// (0x0007de83) cell_myfav_contact_pane_g4

0x4997,	// (0x0008091f) cell_myfav_contact_pane_g5_ParamLimits

0x4997,	// (0x0008091f) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0008b8fa) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0008b8fa) cell_myfav_contact_pane_g

0xaa20,	// (0x000869a8) main_myfav_hc_pane_g3_ParamLimits

0xaa20,	// (0x000869a8) main_myfav_hc_pane_g3

0x5ac9,	// (0x00081a51) popup_adpt_find_window

0xaa6d,	// (0x000869f5) afind_page_pane_ParamLimits

0xaa6d,	// (0x000869f5) afind_page_pane

0xaa7a,	// (0x00086a02) aid_size_cell_afind_ParamLimits

0xaa7a,	// (0x00086a02) aid_size_cell_afind

0xaa94,	// (0x00086a1c) bg_popup_sub_pane_cp09_ParamLimits

0xaa94,	// (0x00086a1c) bg_popup_sub_pane_cp09

0xaaa1,	// (0x00086a29) find_pane_cp01_ParamLimits

0xaaa1,	// (0x00086a29) find_pane_cp01

0x24f1,	// (0x0007e479) grid_afind_control_pane_ParamLimits

0x24f1,	// (0x0007e479) grid_afind_control_pane

0xaaae,	// (0x00086a36) grid_afind_pane_ParamLimits

0xaaae,	// (0x00086a36) grid_afind_pane

0xaac6,	// (0x00086a4e) cell_afind_pane_ParamLimits

0xaac6,	// (0x00086a4e) cell_afind_pane

0x1c67,	// (0x0007dbef) afind_page_pane_g1

0xaafc,	// (0x00086a84) afind_page_pane_g2

0xab05,	// (0x00086a8d) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0008b905) afind_page_pane_g

0xab0e,	// (0x00086a96) afind_page_pane_t1

0x2505,	// (0x0007e48d) cell_afind_grid_control_pane_ParamLimits

0x2505,	// (0x0007e48d) cell_afind_grid_control_pane

0x47c3,	// (0x0008074b) bg_button_pane_cp69_ParamLimits

0x47c3,	// (0x0008074b) bg_button_pane_cp69

0xab2e,	// (0x00086ab6) cell_afind_pane_g1_ParamLimits

0xab2e,	// (0x00086ab6) cell_afind_pane_g1

0xab3b,	// (0x00086ac3) cell_afind_pane_t1_ParamLimits

0xab3b,	// (0x00086ac3) cell_afind_pane_t1

0xe2e2,	// (0x0008a26a) bg_button_pane_cp72

0x2514,	// (0x0007e49c) cell_afind_grid_control_pane_g1

0x83a5,	// (0x0008432d) aid_image_placing_area_ParamLimits

0x83a5,	// (0x0008432d) aid_image_placing_area

0x2228,	// (0x0007e1b0) field_vitu_entry_pane_g1_ParamLimits

0x2228,	// (0x0007e1b0) field_vitu_entry_pane_g1

0x2234,	// (0x0007e1bc) field_vitu_entry_pane_g2_ParamLimits

0x2234,	// (0x0007e1bc) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0008b7b6) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0008b7b6) field_vitu_entry_pane_g

0x9d37,	// (0x00085cbf) cell_vitu_itu_pane_g1_ParamLimits

0x9d79,	// (0x00085d01) cell_vitu_itu_pane_t3_ParamLimits

0x9d79,	// (0x00085d01) cell_vitu_itu_pane_t3

0x4777,	// (0x000806ff) mp4_progress_pane_t1_ParamLimits

0x478e,	// (0x00080716) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0008b84b) mp4_progress_pane_t_ParamLimits

0x47a5,	// (0x0008072d) mup_progress_pane_cp04_ParamLimits

0xaa5b,	// (0x000869e3) main_myfav_hc_pane_t5_ParamLimits

0xaa5b,	// (0x000869e3) main_myfav_hc_pane_t5

0x584f,	// (0x000817d7) aid_zoom_text_primary

0x5ac9,	// (0x00081a51) popup_adpt_find_window_ParamLimits

0x8788,	// (0x00084710) main_cam_set_pane

0xa510,	// (0x00086498) cam4_zoom_pane_ParamLimits

0xa510,	// (0x00086498) cam4_zoom_pane

0xab4d,	// (0x00086ad5) main_cam_set_pane_g1_ParamLimits

0xab4d,	// (0x00086ad5) main_cam_set_pane_g1

0xab5b,	// (0x00086ae3) main_cam_set_pane_g2_ParamLimits

0xab5b,	// (0x00086ae3) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0008b90c) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0008b90c) main_cam_set_pane_g

0xab67,	// (0x00086aef) main_cam_set_pane_t1_ParamLimits

0xab67,	// (0x00086aef) main_cam_set_pane_t1

0xab83,	// (0x00086b0b) main_cset_listscroll_pane_ParamLimits

0xab83,	// (0x00086b0b) main_cset_listscroll_pane

0xabac,	// (0x00086b34) main_cset_slider_pane_ParamLimits

0xabac,	// (0x00086b34) main_cset_slider_pane

0x2525,	// (0x0007e4ad) main_cset_list_pane_ParamLimits

0x2525,	// (0x0007e4ad) main_cset_list_pane

0x2535,	// (0x0007e4bd) scroll_pane_cp028

0xabcb,	// (0x00086b53) aid_area_touch_slider

0x253e,	// (0x0007e4c6) cset_slider_pane

0xabe7,	// (0x00086b6f) main_cset_slider_pane_g1

0xabfc,	// (0x00086b84) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0008b911) main_cset_slider_pane_g

0x25b0,	// (0x0007e538) main_cset_slider_pane_t1

0xaca0,	// (0x00086c28) main_cset_slider_pane_t2

0xacba,	// (0x00086c42) main_cset_slider_pane_t3

0xacd4,	// (0x00086c5c) main_cset_slider_pane_t4

0xacee,	// (0x00086c76) main_cset_slider_pane_t5

0xad08,	// (0x00086c90) main_cset_slider_pane_t6

0xad1d,	// (0x00086ca5) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0008b936) main_cset_slider_pane_t

0xae21,	// (0x00086da9) cset_list_set_pane_ParamLimits

0xae21,	// (0x00086da9) cset_list_set_pane

0xae30,	// (0x00086db8) aid_position_infowindow_above

0xae38,	// (0x00086dc0) aid_position_infowindow_below

0xae40,	// (0x00086dc8) cset_list_set_pane_g1_ParamLimits

0xae40,	// (0x00086dc8) cset_list_set_pane_g1

0xae4c,	// (0x00086dd4) cset_list_set_pane_g3_ParamLimits

0xae4c,	// (0x00086dd4) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0008b955) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0008b955) cset_list_set_pane_g

0xae5b,	// (0x00086de3) cset_list_set_pane_t1_ParamLimits

0xae5b,	// (0x00086de3) cset_list_set_pane_t1

0x062b,	// (0x0007c5b3) list_highlight_pane_cp021_ParamLimits

0x062b,	// (0x0007c5b3) list_highlight_pane_cp021

0xedcd,	// (0x0008ad55) cset_slider_pane_g1

0xeddf,	// (0x0008ad67) cset_slider_pane_g2

0xedd6,	// (0x0008ad5e) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0008b95a) cset_slider_pane_g

0xae70,	// (0x00086df8) aid_area_touch_cam4_zoom

0xae78,	// (0x00086e00) cam4_zoom_cont_pane

0xae80,	// (0x00086e08) cam4_zoom_pane_g1

0xae88,	// (0x00086e10) cam4_zoom_pane_g2

0xae90,	// (0x00086e18) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0008b961) cam4_zoom_pane_g

0xae98,	// (0x00086e20) cam4_zoom_cont_pane_g1

0xaea1,	// (0x00086e29) cam4_zoom_cont_pane_g2

0xaeaa,	// (0x00086e32) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0008b968) cam4_zoom_cont_pane_g

0xa3e3,	// (0x0008636b) call4_image_pane_ParamLimits

0xa3e3,	// (0x0008636b) call4_image_pane

0x47cf,	// (0x00080757) call4_windows_conf_pane_ParamLimits

0x47e2,	// (0x0008076a) popup_call4_audio_in_window_ParamLimits

0x47e2,	// (0x0008076a) popup_call4_audio_in_window

0xd964,	// (0x000898ec) bg_popup_call2_act_pane_cp02

0x4840,	// (0x000807c8) call4_list_conf_pane

0x1c67,	// (0x0007dbef) call4_image_pane_g1

0x1c67,	// (0x0007dbef) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0008b677) call4_image_pane_g

0x266b,	// (0x0007e5f3) list_single_graphic_popup_conf4_pane_ParamLimits

0x266b,	// (0x0007e5f3) list_single_graphic_popup_conf4_pane

0xd964,	// (0x000898ec) list_highlight_pane_cp022

0x267e,	// (0x0007e606) list_single_graphic_popup_conf4_pane_g1

0xea14,	// (0x0008a99c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0008b96f) list_single_graphic_popup_conf4_pane_g

0x2686,	// (0x0007e60e) list_single_graphic_popup_conf4_pane_t1

0x6c99,	// (0x00082c21) popup_vtel_slider_window_ParamLimits

0x6c99,	// (0x00082c21) popup_vtel_slider_window

0x47b1,	// (0x00080739) dialer2_ne_pane_t2_ParamLimits

0x47b1,	// (0x00080739) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0008b850) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0008b850) dialer2_ne_pane_t

0x062b,	// (0x0007c5b3) bg_popup_sub_pane_cp010_ParamLimits

0x062b,	// (0x0007c5b3) bg_popup_sub_pane_cp010

0xaeb3,	// (0x00086e3b) popup_vtel_slider_window_g1_ParamLimits

0xaeb3,	// (0x00086e3b) popup_vtel_slider_window_g1

0xaebf,	// (0x00086e47) popup_vtel_slider_window_g2_ParamLimits

0xaebf,	// (0x00086e47) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0008b974) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0008b974) popup_vtel_slider_window_g

0xaf05,	// (0x00086e8d) vtel_slider_pane_ParamLimits

0xaf05,	// (0x00086e8d) vtel_slider_pane

0xaf14,	// (0x00086e9c) vtel_slider_pane_g1_ParamLimits

0xaf14,	// (0x00086e9c) vtel_slider_pane_g1

0xaf21,	// (0x00086ea9) vtel_slider_pane_g2_ParamLimits

0xaf21,	// (0x00086ea9) vtel_slider_pane_g2

0xaf2e,	// (0x00086eb6) vtel_slider_pane_g3_ParamLimits

0xaf2e,	// (0x00086eb6) vtel_slider_pane_g3

0xaf14,	// (0x00086e9c) vtel_slider_pane_g4_ParamLimits

0xaf14,	// (0x00086e9c) vtel_slider_pane_g4

0xaf3b,	// (0x00086ec3) vtel_slider_pane_g5_ParamLimits

0xaf3b,	// (0x00086ec3) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0008b97d) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0008b97d) vtel_slider_pane_g

0x8788,	// (0x00084710) main_gallery2_pane

0xa760,	// (0x000866e8) aid_size_row_itut2_dropdow_list_ParamLimits

0xa760,	// (0x000866e8) aid_size_row_itut2_dropdow_list

0xa7b0,	// (0x00086738) grid_vitu2_function_top_pane_ParamLimits

0xa7b0,	// (0x00086738) grid_vitu2_function_top_pane

0xa7ec,	// (0x00086774) popup_vitu2_dropdown_list_window_ParamLimits

0xa7ec,	// (0x00086774) popup_vitu2_dropdown_list_window

0xa804,	// (0x0008678c) popup_vitu2_match_list_window

0xaf56,	// (0x00086ede) cell_vitu2_function_top_pane_ParamLimits

0xaf56,	// (0x00086ede) cell_vitu2_function_top_pane

0xaf6e,	// (0x00086ef6) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaf6e,	// (0x00086ef6) cell_vitu2_function_top_pane_cp01

0xaf8a,	// (0x00086f12) cell_vitu2_function_top_wide_pane_ParamLimits

0xaf8a,	// (0x00086f12) cell_vitu2_function_top_wide_pane

0x8788,	// (0x00084710) bg_button_pane_cp012

0xafa6,	// (0x00086f2e) cell_vitu2_function_top_pane_g1

0xafba,	// (0x00086f42) bg_button_pane_cp013_ParamLimits

0xafba,	// (0x00086f42) bg_button_pane_cp013

0xafd6,	// (0x00086f5e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xafd6,	// (0x00086f5e) cell_vitu2_function_top_wide_pane_g1

0x5bb8,	// (0x00081b40) bg_popup_sub_pane_cp20

0xafee,	// (0x00086f76) list_vitu2_match_list_pane

0x48cd,	// (0x00080855) bg_popup_sub_pane_cp20_g1

0x48d5,	// (0x0008085d) bg_popup_sub_pane_cp20_g2

0xe4f6,	// (0x0008a47e) bg_popup_sub_pane_cp20_g3

0x48dd,	// (0x00080865) bg_popup_sub_pane_cp20_g4

0xe4d6,	// (0x0008a45e) bg_popup_sub_pane_cp20_g5

0x269c,	// (0x0007e624) bg_popup_sub_pane_cp20_g6

0x48ed,	// (0x00080875) bg_popup_sub_pane_cp20_g7

0x48f5,	// (0x0008087d) bg_popup_sub_pane_cp20_g8

0x48fd,	// (0x00080885) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0008b988) bg_popup_sub_pane_cp20_g

0xb006,	// (0x00086f8e) list_vitu2_match_list_item_pane_ParamLimits

0xb006,	// (0x00086f8e) list_vitu2_match_list_item_pane

0xb018,	// (0x00086fa0) list_vitu2_match_list_item_pane_t1

0x5bce,	// (0x00081b56) bg_popup_sub_pane_cp21

0xb06e,	// (0x00086ff6) grid_vitu2_dropdown_list_pane

0xb076,	// (0x00086ffe) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb076,	// (0x00086ffe) cell_vitu2_dropdown_list_char_pane

0xb097,	// (0x0008701f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb097,	// (0x0008701f) cell_vitu2_dropdown_list_ctrl_pane

0x26b6,	// (0x0007e63e) cell_vitu2_dropdown_list_char_pane_g1

0x26ad,	// (0x0007e635) cell_vitu2_dropdown_list_char_pane_g2

0x26a4,	// (0x0007e62c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0008b9a5) cell_vitu2_dropdown_list_char_pane_g

0xb0c3,	// (0x0008704b) cell_vitu2_dropdown_list_char_pane_t1

0xb0d1,	// (0x00087059) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb0d1,	// (0x00087059) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb0e1,	// (0x00087069) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb0e1,	// (0x00087069) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb0f2,	// (0x0008707a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb0f2,	// (0x0008707a) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb102,	// (0x0008708a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb102,	// (0x0008708a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa5a2,	// (0x0008652a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa5a2,	// (0x0008652a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0008b9ac) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0008b9ac) cell_vitu2_dropdown_list_ctrl_pane_g

0xb11b,	// (0x000870a3) aid_size_cell_gallery2_ParamLimits

0xb11b,	// (0x000870a3) aid_size_cell_gallery2

0xb135,	// (0x000870bd) grid_gallery2_pane_ParamLimits

0xb135,	// (0x000870bd) grid_gallery2_pane

0x9be9,	// (0x00085b71) scroll_pane_cp029_ParamLimits

0x9be9,	// (0x00085b71) scroll_pane_cp029

0xb146,	// (0x000870ce) cell_gallery2_pane_ParamLimits

0xb146,	// (0x000870ce) cell_gallery2_pane

0x26bf,	// (0x0007e647) cell_gallery2_pane_g2

0xb18e,	// (0x00087116) cell_gallery2_pane_g3

0x26c7,	// (0x0007e64f) cell_gallery2_pane_g4

0x26cf,	// (0x0007e657) cell_gallery2_pane_g5

0xe290,	// (0x0008a218) grid_highlight_pane_cp10

0xa804,	// (0x0008678c) popup_vitu2_match_list_window_ParamLimits

0xa814,	// (0x0008679c) popup_vitu2_query_window_ParamLimits

0xa814,	// (0x0008679c) popup_vitu2_query_window

0x5bce,	// (0x00081b56) bg_vitu2_candi_button_pane

0x26b6,	// (0x0007e63e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x26ad,	// (0x0007e635) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x26a4,	// (0x0007e62c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb196,	// (0x0008711e) bg_button_pane_cp015

0xb1a6,	// (0x0008712e) bg_button_pane_cp016

0xb1b9,	// (0x00087141) bg_button_pane_cp017

0x17d2,	// (0x0007d75a) bg_popup_sub_pane_cp22

0x26d7,	// (0x0007e65f) popup_vitu2_query_window_g1

0xb1fc,	// (0x00087184) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0008b9b7) popup_vitu2_query_window_g

0xb217,	// (0x0008719f) popup_vitu2_query_window_t1_ParamLimits

0xb217,	// (0x0008719f) popup_vitu2_query_window_t1

0xb24a,	// (0x000871d2) popup_vitu2_query_window_t2_ParamLimits

0xb24a,	// (0x000871d2) popup_vitu2_query_window_t2

0xb25c,	// (0x000871e4) popup_vitu2_query_window_t3_ParamLimits

0xb25c,	// (0x000871e4) popup_vitu2_query_window_t3

0xb284,	// (0x0008720c) popup_vitu2_query_window_t4_ParamLimits

0xb284,	// (0x0008720c) popup_vitu2_query_window_t4

0xb2a1,	// (0x00087229) popup_vitu2_query_window_t5_ParamLimits

0xb2a1,	// (0x00087229) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0008b9be) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0008b9be) popup_vitu2_query_window_t

0x251d,	// (0x0007e4a5) main_cset_text_pane

0xabcb,	// (0x00086b53) aid_area_touch_slider_ParamLimits

0x253e,	// (0x0007e4c6) cset_slider_pane_ParamLimits

0xabe7,	// (0x00086b6f) main_cset_slider_pane_g1_ParamLimits

0xabfc,	// (0x00086b84) main_cset_slider_pane_g2_ParamLimits

0x2568,	// (0x0007e4f0) main_cset_slider_pane_g3_ParamLimits

0x2568,	// (0x0007e4f0) main_cset_slider_pane_g3

0xac11,	// (0x00086b99) main_cset_slider_pane_g4_ParamLimits

0xac11,	// (0x00086b99) main_cset_slider_pane_g4

0xac20,	// (0x00086ba8) main_cset_slider_pane_g5_ParamLimits

0xac20,	// (0x00086ba8) main_cset_slider_pane_g5

0xac2c,	// (0x00086bb4) main_cset_slider_pane_g6_ParamLimits

0xac2c,	// (0x00086bb4) main_cset_slider_pane_g6

0xf989,	// (0x0008b911) main_cset_slider_pane_g_ParamLimits

0x25b0,	// (0x0007e538) main_cset_slider_pane_t1_ParamLimits

0xaca0,	// (0x00086c28) main_cset_slider_pane_t2_ParamLimits

0xacba,	// (0x00086c42) main_cset_slider_pane_t3_ParamLimits

0xacd4,	// (0x00086c5c) main_cset_slider_pane_t4_ParamLimits

0xacee,	// (0x00086c76) main_cset_slider_pane_t5_ParamLimits

0xad08,	// (0x00086c90) main_cset_slider_pane_t6_ParamLimits

0xad1d,	// (0x00086ca5) main_cset_slider_pane_t7_ParamLimits

0xad47,	// (0x00086ccf) main_cset_slider_pane_t8_ParamLimits

0xad47,	// (0x00086ccf) main_cset_slider_pane_t8

0xad6f,	// (0x00086cf7) main_cset_slider_pane_t9_ParamLimits

0xad6f,	// (0x00086cf7) main_cset_slider_pane_t9

0xad97,	// (0x00086d1f) main_cset_slider_pane_t10_ParamLimits

0xad97,	// (0x00086d1f) main_cset_slider_pane_t10

0xadbf,	// (0x00086d47) main_cset_slider_pane_t11_ParamLimits

0xadbf,	// (0x00086d47) main_cset_slider_pane_t11

0xade7,	// (0x00086d6f) main_cset_slider_pane_t12_ParamLimits

0xade7,	// (0x00086d6f) main_cset_slider_pane_t12

0xae04,	// (0x00086d8c) main_cset_slider_pane_t13_ParamLimits

0xae04,	// (0x00086d8c) main_cset_slider_pane_t13

0xf9ae,	// (0x0008b936) main_cset_slider_pane_t_ParamLimits

0xd964,	// (0x000898ec) bg_popup_sub_pane_cp011

0x26e3,	// (0x0007e66b) main_cset_text_pane_g1

0x26eb,	// (0x0007e673) main_cset_text_pane_t1

0x26f9,	// (0x0007e681) main_cset_text_pane_t2

0x2707,	// (0x0007e68f) main_cset_text_pane_t3

0x2715,	// (0x0007e69d) main_cset_text_pane_t4

0x2723,	// (0x0007e6ab) main_cset_text_pane_t5

0x2731,	// (0x0007e6b9) main_cset_text_pane_t6

0x273f,	// (0x0007e6c7) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0008b9cd) main_cset_text_pane_t

0x5bce,	// (0x00081b56) main_cam4_burst_pane

0x5bce,	// (0x00081b56) main_cam5_pane

0xab1c,	// (0x00086aa4) bg_button_pane_cp019

0xab25,	// (0x00086aad) bg_button_pane_cp020

0x2574,	// (0x0007e4fc) main_cset_slider_pane_g7_ParamLimits

0x2574,	// (0x0007e4fc) main_cset_slider_pane_g7

0x2580,	// (0x0007e508) main_cset_slider_pane_g8_ParamLimits

0x2580,	// (0x0007e508) main_cset_slider_pane_g8

0xac40,	// (0x00086bc8) main_cset_slider_pane_g9_ParamLimits

0xac40,	// (0x00086bc8) main_cset_slider_pane_g9

0xac4c,	// (0x00086bd4) main_cset_slider_pane_g10_ParamLimits

0xac4c,	// (0x00086bd4) main_cset_slider_pane_g10

0xac58,	// (0x00086be0) main_cset_slider_pane_g11_ParamLimits

0xac58,	// (0x00086be0) main_cset_slider_pane_g11

0xac64,	// (0x00086bec) main_cset_slider_pane_g12_ParamLimits

0xac64,	// (0x00086bec) main_cset_slider_pane_g12

0xac70,	// (0x00086bf8) main_cset_slider_pane_g13_ParamLimits

0xac70,	// (0x00086bf8) main_cset_slider_pane_g13

0xac7c,	// (0x00086c04) main_cset_slider_pane_g14_ParamLimits

0xac7c,	// (0x00086c04) main_cset_slider_pane_g14

0xac88,	// (0x00086c10) main_cset_slider_pane_g15_ParamLimits

0xac88,	// (0x00086c10) main_cset_slider_pane_g15

0x25de,	// (0x0007e566) main_cset_slider_pane_t14_ParamLimits

0x25de,	// (0x0007e566) main_cset_slider_pane_t14

0x2617,	// (0x0007e59f) main_cset_slider_pane_t15_ParamLimits

0x2617,	// (0x0007e59f) main_cset_slider_pane_t15

0xb314,	// (0x0008729c) aid_cam4_burst_size_cell_ParamLimits

0xb314,	// (0x0008729c) aid_cam4_burst_size_cell

0xb330,	// (0x000872b8) grid_cam4_burst_pane_ParamLimits

0xb330,	// (0x000872b8) grid_cam4_burst_pane

0xb354,	// (0x000872dc) linegrid_cam4_burst_pane_ParamLimits

0xb354,	// (0x000872dc) linegrid_cam4_burst_pane

0xb372,	// (0x000872fa) scroll_pane_cp30_ParamLimits

0xb372,	// (0x000872fa) scroll_pane_cp30

0xb37e,	// (0x00087306) cell_cam4_burst_pane_ParamLimits

0xb37e,	// (0x00087306) cell_cam4_burst_pane

0x2759,	// (0x0007e6e1) linegrid_cam4_burst_pane_g1_ParamLimits

0x2759,	// (0x0007e6e1) linegrid_cam4_burst_pane_g1

0xb3b6,	// (0x0008733e) linegrid_cam4_burst_pane_g2_ParamLimits

0xb3b6,	// (0x0008733e) linegrid_cam4_burst_pane_g2

0x2766,	// (0x0007e6ee) linegrid_cam4_burst_pane_g3_ParamLimits

0x2766,	// (0x0007e6ee) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0008b9dc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0008b9dc) linegrid_cam4_burst_pane_g

0xb3c7,	// (0x0008734f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb3c7,	// (0x0008734f) linegrid_cam4_burst_pane_g3_copy1

0x2773,	// (0x0007e6fb) linegrid_cam4_burst_pane_g4_ParamLimits

0x2773,	// (0x0007e6fb) linegrid_cam4_burst_pane_g4

0xb3e1,	// (0x00087369) linegrid_cam4_burst_pane_g5_ParamLimits

0xb3e1,	// (0x00087369) linegrid_cam4_burst_pane_g5

0xb3f2,	// (0x0008737a) linegrid_cam4_burst_pane_g6_ParamLimits

0xb3f2,	// (0x0008737a) linegrid_cam4_burst_pane_g6

0x2780,	// (0x0007e708) linegrid_cam4_burst_pane_g7_ParamLimits

0x2780,	// (0x0007e708) linegrid_cam4_burst_pane_g7

0xb403,	// (0x0008738b) cell_cam4_burst_pane_g1

0x2799,	// (0x0007e721) main_cam5_pane_t1_ParamLimits

0x2799,	// (0x0007e721) main_cam5_pane_t1

0x27ab,	// (0x0007e733) main_cam5_pane_t2_ParamLimits

0x27ab,	// (0x0007e733) main_cam5_pane_t2

0x27bd,	// (0x0007e745) main_cam5_pane_t3_ParamLimits

0x27bd,	// (0x0007e745) main_cam5_pane_t3

0x27cf,	// (0x0007e757) main_cam5_pane_t4_ParamLimits

0x27cf,	// (0x0007e757) main_cam5_pane_t4

0x27e5,	// (0x0007e76d) main_cam5_pane_t5_ParamLimits

0x27e5,	// (0x0007e76d) main_cam5_pane_t5

0x27f7,	// (0x0007e77f) main_cam5_pane_t6_ParamLimits

0x27f7,	// (0x0007e77f) main_cam5_pane_t6

0x2809,	// (0x0007e791) main_cam5_pane_t7_ParamLimits

0x2809,	// (0x0007e791) main_cam5_pane_t7

0x281b,	// (0x0007e7a3) main_cam5_pane_t8_ParamLimits

0x281b,	// (0x0007e7a3) main_cam5_pane_t8

0x2837,	// (0x0007e7bf) main_cam5_pane_t9_ParamLimits

0x2837,	// (0x0007e7bf) main_cam5_pane_t9

0x2849,	// (0x0007e7d1) main_cam5_pane_t10_ParamLimits

0x2849,	// (0x0007e7d1) main_cam5_pane_t10

0x285b,	// (0x0007e7e3) main_cam5_pane_t11_ParamLimits

0x285b,	// (0x0007e7e3) main_cam5_pane_t11

0x286d,	// (0x0007e7f5) main_cam5_pane_t12_ParamLimits

0x286d,	// (0x0007e7f5) main_cam5_pane_t12

0x2882,	// (0x0007e80a) main_cam5_pane_t13_ParamLimits

0x2882,	// (0x0007e80a) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0008b9e8) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0008b9e8) main_cam5_pane_t

0x5b77,	// (0x00081aff) popup_scut_keymap_window_ParamLimits

0x5b77,	// (0x00081aff) popup_scut_keymap_window

0xb416,	// (0x0008739e) aid_size_cell_brow_shortcut

0xe290,	// (0x0008a218) bg_popup_window_pane_cp010

0xb422,	// (0x000873aa) grid_scut_pane

0xb42c,	// (0x000873b4) cell_scut_pane_ParamLimits

0xb42c,	// (0x000873b4) cell_scut_pane

0xb441,	// (0x000873c9) cell_scut_pane_g1

0x289f,	// (0x0007e827) cell_scut_pane_t1

0x28ae,	// (0x0007e836) cell_scut_pane_t2

0xb44a,	// (0x000873d2) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0008ba03) cell_scut_pane_t

0x943c,	// (0x000853c4) main_mup3_pane_g8_ParamLimits

0x943c,	// (0x000853c4) main_mup3_pane_g8

0xa76c,	// (0x000866f4) area_vitu2_query_pane_ParamLimits

0xa76c,	// (0x000866f4) area_vitu2_query_pane

0xb1cc,	// (0x00087154) input_focus_pane_cp08

0x28bd,	// (0x0007e845) area_vitu2_query_pane_g1

0xb458,	// (0x000873e0) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0008ba0a) area_vitu2_query_pane_g

0xb467,	// (0x000873ef) area_vitu2_query_pane_t1_ParamLimits

0xb467,	// (0x000873ef) area_vitu2_query_pane_t1

0xb479,	// (0x00087401) area_vitu2_query_pane_t2_ParamLimits

0xb479,	// (0x00087401) area_vitu2_query_pane_t2

0xb48b,	// (0x00087413) area_vitu2_query_pane_t3_ParamLimits

0xb48b,	// (0x00087413) area_vitu2_query_pane_t3

0x28c9,	// (0x0007e851) area_vitu2_query_pane_t4_ParamLimits

0x28c9,	// (0x0007e851) area_vitu2_query_pane_t4

0x28f1,	// (0x0007e879) area_vitu2_query_pane_t5_ParamLimits

0x28f1,	// (0x0007e879) area_vitu2_query_pane_t5

0x2919,	// (0x0007e8a1) area_vitu2_query_pane_t6_ParamLimits

0x2919,	// (0x0007e8a1) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0008ba0f) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0008ba0f) area_vitu2_query_pane_t

0xb4b3,	// (0x0008743b) bg_button_pane_cp018

0xb4c0,	// (0x00087448) bg_button_pane_cp021

0xb4cc,	// (0x00087454) bg_button_pane_cp022

0xb4db,	// (0x00087463) input_focus_pane_cp09

0xeb17,	// (0x0008aa9f) aid_size_touch_mv_arrow_left

0xeb40,	// (0x0008aac8) aid_size_touch_mv_arrow_right

0x258c,	// (0x0007e514) main_cset_slider_pane_g16_ParamLimits

0x258c,	// (0x0007e514) main_cset_slider_pane_g16

0x2598,	// (0x0007e520) main_cset_slider_pane_g17_ParamLimits

0x2598,	// (0x0007e520) main_cset_slider_pane_g17

0xb403,	// (0x0008738b) cell_cam4_burst_pane_g1_ParamLimits

0xd964,	// (0x000898ec) compa_mode_pane

0xaecb,	// (0x00086e53) popup_vtel_slider_window_g3_ParamLimits

0xaecb,	// (0x00086e53) popup_vtel_slider_window_g3

0xaedf,	// (0x00086e67) popup_vtel_slider_window_g4_ParamLimits

0xaedf,	// (0x00086e67) popup_vtel_slider_window_g4

0xaef3,	// (0x00086e7b) popup_vtel_slider_window_t1_ParamLimits

0xaef3,	// (0x00086e7b) popup_vtel_slider_window_t1

0x5bce,	// (0x00081b56) main_cl_pane

0x8814,	// (0x0008479c) popup_imed_adjust2_window_ParamLimits

0x17d2,	// (0x0007d75a) bg_tb_trans_pane_cp05_ParamLimits

0x215d,	// (0x0007e0e5) popup_imed_adjust2_window_g1_ParamLimits

0x216c,	// (0x0007e0f4) popup_imed_adjust2_window_g2_ParamLimits

0x216c,	// (0x0007e0f4) popup_imed_adjust2_window_g2

0x2178,	// (0x0007e100) popup_imed_adjust2_window_g3_ParamLimits

0x2178,	// (0x0007e100) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0008b77a) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0008b77a) popup_imed_adjust2_window_g

0x2184,	// (0x0007e10c) popup_imed_adjust2_window_t1_ParamLimits

0x219c,	// (0x0007e124) slider_imed_adjust_pane_ParamLimits

0x21b0,	// (0x0007e138) slider_imed_adjust_pane_g1_ParamLimits

0x21c0,	// (0x0007e148) slider_imed_adjust_pane_g2_ParamLimits

0x21d0,	// (0x0007e158) slider_imed_adjust_pane_g3_ParamLimits

0x21e1,	// (0x0007e169) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0008b781) slider_imed_adjust_pane_g_ParamLimits

0xa4c1,	// (0x00086449) aid_touch_area_cam4_ParamLimits

0xa4c1,	// (0x00086449) aid_touch_area_cam4

0xa4cf,	// (0x00086457) battery_pane_cp01

0xa54e,	// (0x000864d6) main_camera4_pane_g6_ParamLimits

0xa54e,	// (0x000864d6) main_camera4_pane_g6

0xa56c,	// (0x000864f4) main_camera4_pane_t2_ParamLimits

0xa56c,	// (0x000864f4) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0008b884) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0008b884) main_camera4_pane_t

0xa5fb,	// (0x00086583) aid_touch_area_vid4_ParamLimits

0xa5fb,	// (0x00086583) aid_touch_area_vid4

0xa639,	// (0x000865c1) main_video4_pane_g5_ParamLimits

0xa639,	// (0x000865c1) main_video4_pane_g5

0xa65b,	// (0x000865e3) vid4_progress_pane_ParamLimits

0xa65b,	// (0x000865e3) vid4_progress_pane

0x25a4,	// (0x0007e52c) main_cset_slider_pane_g18_ParamLimits

0x25a4,	// (0x0007e52c) main_cset_slider_pane_g18

0x278d,	// (0x0007e715) cell_cam4_burst_pane_g2_ParamLimits

0x278d,	// (0x0007e715) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0008b9e3) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0008b9e3) cell_cam4_burst_pane_g

0xb4ea,	// (0x00087472) bg_cl_pane_ParamLimits

0xb4ea,	// (0x00087472) bg_cl_pane

0xb4f6,	// (0x0008747e) cl_header_pane_ParamLimits

0xb4f6,	// (0x0008747e) cl_header_pane

0xb502,	// (0x0008748a) cl_listscroll_pane_ParamLimits

0xb502,	// (0x0008748a) cl_listscroll_pane

0x2965,	// (0x0007e8ed) bg_cl_pane_g1

0x296d,	// (0x0007e8f5) bg_cl_pane_g2

0x2975,	// (0x0007e8fd) bg_cl_pane_g3

0x297d,	// (0x0007e905) bg_cl_pane_g4

0x2985,	// (0x0007e90d) bg_cl_pane_g5

0x298d,	// (0x0007e915) bg_cl_pane_g6

0x2995,	// (0x0007e91d) bg_cl_pane_g7

0x299d,	// (0x0007e925) bg_cl_pane_g8

0x29a5,	// (0x0007e92d) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0008ba1e) bg_cl_pane_g

0xb50e,	// (0x00087496) aid_height_cl_leading_ParamLimits

0xb50e,	// (0x00087496) aid_height_cl_leading

0xb51a,	// (0x000874a2) aid_height_cl_text_ParamLimits

0xb51a,	// (0x000874a2) aid_height_cl_text

0x422b,	// (0x000801b3) bg_cl_header_pane_ParamLimits

0x422b,	// (0x000801b3) bg_cl_header_pane

0xb532,	// (0x000874ba) cl_header_pane_g1_ParamLimits

0xb532,	// (0x000874ba) cl_header_pane_g1

0xb53f,	// (0x000874c7) cl_header_pane_t1_ParamLimits

0xb53f,	// (0x000874c7) cl_header_pane_t1

0x29ad,	// (0x0007e935) cl_list_pane

0x2535,	// (0x0007e4bd) hc_scroll_pane_cp01

0xe4d6,	// (0x0008a45e) bg_cl_header_pane_g1

0x48cd,	// (0x00080855) bg_cl_header_pane_g2

0xe4f6,	// (0x0008a47e) bg_cl_header_pane_g3

0x48dd,	// (0x00080865) bg_cl_header_pane_g4

0x48d5,	// (0x0008085d) bg_cl_header_pane_g5

0x269c,	// (0x0007e624) bg_cl_header_pane_g6

0x48f5,	// (0x0008087d) bg_cl_header_pane_g7

0x48fd,	// (0x00080885) bg_cl_header_pane_g8

0x48ed,	// (0x00080875) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0008ba31) bg_cl_header_pane_g

0xb551,	// (0x000874d9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb551,	// (0x000874d9) hc_cl_list_double_graphic_heading_pane

0xb55e,	// (0x000874e6) hc_cl_list_single_graphic_pane_ParamLimits

0xb55e,	// (0x000874e6) hc_cl_list_single_graphic_pane

0xb56f,	// (0x000874f7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb56f,	// (0x000874f7) hc_cl_list_single_graphic_pane_g1

0xb57b,	// (0x00087503) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb57b,	// (0x00087503) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0008ba44) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0008ba44) hc_cl_list_single_graphic_pane_g

0xb58f,	// (0x00087517) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb58f,	// (0x00087517) hc_cl_list_single_graphic_pane_t1

0xb56f,	// (0x000874f7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb56f,	// (0x000874f7) hc_cl_list_double_graphic_heading_pane_g1

0xb5a4,	// (0x0008752c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb5a4,	// (0x0008752c) hc_cl_list_double_graphic_heading_pane_g2

0xb5b8,	// (0x00087540) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb5b8,	// (0x00087540) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0008ba49) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0008ba49) hc_cl_list_double_graphic_heading_pane_g

0xb5cc,	// (0x00087554) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb5cc,	// (0x00087554) hc_cl_list_double_graphic_heading_pane_t1

0xb5e1,	// (0x00087569) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb5e1,	// (0x00087569) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0008ba50) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0008ba50) hc_cl_list_double_graphic_heading_pane_t

0xb5fe,	// (0x00087586) vid4_progress_pane_g1

0xb60e,	// (0x00087596) vid4_progress_pane_g2

0xb61e,	// (0x000875a6) vid4_progress_pane_g3

0xb62e,	// (0x000875b6) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0008ba55) vid4_progress_pane_g

0xb64c,	// (0x000875d4) vid4_progress_pane_t1

0xb662,	// (0x000875ea) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0008ba60) vid4_progress_pane_t

0xb68d,	// (0x00087615) wait_bar_pane_cp07

0x1a62,	// (0x0007d9ea) blid_firmament_pane_ParamLimits

0x1aa3,	// (0x0007da2b) popup_blid_sat_info2_window_g1

0x1ac7,	// (0x0007da4f) popup_blid_sat_info2_window_t3

0x1ad5,	// (0x0007da5d) popup_blid_sat_info2_window_t4

0x1ae3,	// (0x0007da6b) popup_blid_sat_info2_window_t5

0x1af1,	// (0x0007da79) popup_blid_sat_info2_window_t6

0x1b01,	// (0x0007da89) popup_blid_sat_info2_window_t7

0x1b0f,	// (0x0007da97) popup_blid_sat_info2_window_t8

0x1b1d,	// (0x0007daa5) popup_blid_sat_info2_window_t9

0x1b2b,	// (0x0007dab3) popup_blid_sat_info2_window_t10

0x1be7,	// (0x0007db6f) aid_firma_cardinal_ParamLimits

0x1bfb,	// (0x0007db83) blid_firmament_pane_t1_ParamLimits

0x1c12,	// (0x0007db9a) blid_firmament_pane_t2_ParamLimits

0x1c29,	// (0x0007dbb1) blid_firmament_pane_t3_ParamLimits

0x1c40,	// (0x0007dbc8) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0008b66e) blid_firmament_pane_t_ParamLimits

0x1c57,	// (0x0007dbdf) blid_sat_info_pane_ParamLimits

0x8788,	// (0x00084710) main_cam_set_pane_ParamLimits

0x9b86,	// (0x00085b0e) aid_size_cell_colour_35_ParamLimits

0x9ba0,	// (0x00085b28) aid_size_cell_colour_112_ParamLimits

0x9bb7,	// (0x00085b3f) aid_size_cell_effect_ParamLimits

0x062b,	// (0x0007c5b3) bg_tb_trans_pane_cp02_ParamLimits

0xf0be,	// (0x0008b046) heading_imed_pane_ParamLimits

0x9bd1,	// (0x00085b59) listscroll_imed_pane_ParamLimits

0x0db8,	// (0x0007cd40) popup_call2_audio_first_window_g5_ParamLimits

0x0db8,	// (0x0007cd40) popup_call2_audio_first_window_g5

0xa264,	// (0x000861ec) aid_size_touch_image3_arrow_left_ParamLimits

0xa264,	// (0x000861ec) aid_size_touch_image3_arrow_left

0xa278,	// (0x00086200) aid_size_touch_image3_arrow_right_ParamLimits

0xa278,	// (0x00086200) aid_size_touch_image3_arrow_right

0xb677,	// (0x000875ff) vid4_progress_pane_t3

0x9e32,	// (0x00085dba) main_hwr_training_symbol_option_pane_ParamLimits

0x9e32,	// (0x00085dba) main_hwr_training_symbol_option_pane

0x243c,	// (0x0007e3c4) popup_hwr_training_preview_window_ParamLimits

0x243c,	// (0x0007e3c4) popup_hwr_training_preview_window

0x9e8d,	// (0x00085e15) hwr_training_navi_pane_g5_ParamLimits

0x9e8d,	// (0x00085e15) hwr_training_navi_pane_g5

0x48bb,	// (0x00080843) popup_char_count_window

0x5bb8,	// (0x00081b40) bg_popup_sub_pane_cp20_ParamLimits

0xafee,	// (0x00086f76) list_vitu2_match_list_pane_ParamLimits

0xaffa,	// (0x00086f82) vitu2_page_scroll_pane_ParamLimits

0xaffa,	// (0x00086f82) vitu2_page_scroll_pane

0x29d0,	// (0x0007e958) list_single_hwr_training_symbol_option_pane_ParamLimits

0x29d0,	// (0x0007e958) list_single_hwr_training_symbol_option_pane

0x29e3,	// (0x0007e96b) list_single_hwr_training_symbol_option_pane_g1

0x29eb,	// (0x0007e973) list_single_hwr_training_symbol_option_pane_t1

0x29f9,	// (0x0007e981) bg_button_pane_cp023

0x2a02,	// (0x0007e98a) bg_button_pane_cp024

0xb6d6,	// (0x0008765e) vitu2_page_scroll_pane_g1

0xb6de,	// (0x00087666) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0008ba67) vitu2_page_scroll_pane_g

0xb6e6,	// (0x0008766e) vitu2_page_scroll_pane_t1

0x1c90,	// (0x0007dc18) popup_char_count_window_g1

0x2a35,	// (0x0007e9bd) popup_char_count_window_g2

0x2a3e,	// (0x0007e9c6) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0008ba6c) popup_char_count_window_g

0x2a47,	// (0x0007e9cf) popup_char_count_window_t1

0x5bce,	// (0x00081b56) main_vded2_pane

0x214b,	// (0x0007e0d3) aid_size_cell_imed_line

0x2155,	// (0x0007e0dd) grid_imed_line_width_pane

0xa6c5,	// (0x0008664d) vid4_indicators_pane_g4

0x2a55,	// (0x0007e9dd) cell_imed_line_width_pane_ParamLimits

0x2a55,	// (0x0007e9dd) cell_imed_line_width_pane

0x2a67,	// (0x0007e9ef) cell_imed_line_width_pane_g1

0x2a70,	// (0x0007e9f8) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0008ba73) cell_imed_line_width_pane_g

0xb6f5,	// (0x0008767d) main_vded2_pane_g1_ParamLimits

0xb6f5,	// (0x0008767d) main_vded2_pane_g1

0xb702,	// (0x0008768a) main_vded2_pane_g2_ParamLimits

0xb702,	// (0x0008768a) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0008ba78) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0008ba78) main_vded2_pane_g

0xb70e,	// (0x00087696) vded2_slider_pane_ParamLimits

0xb70e,	// (0x00087696) vded2_slider_pane

0xb71b,	// (0x000876a3) aid_size_touch_vded2_end

0xb723,	// (0x000876ab) aid_size_touch_vded2_playhead

0x2a78,	// (0x0007ea00) aid_size_touch_vded2_start

0x2a80,	// (0x0007ea08) vded2_slider_bg_pane

0x2a89,	// (0x0007ea11) vded2_slider_pane_g1

0x2a92,	// (0x0007ea1a) vded2_slider_pane_g2

0xb72b,	// (0x000876b3) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0008ba7d) vded2_slider_pane_g

0x2a9a,	// (0x0007ea22) vded2_slider_bg_pane_g1

0x2aa3,	// (0x0007ea2b) vded2_slider_bg_pane_g2

0x2aac,	// (0x0007ea34) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0008ba84) vded2_slider_bg_pane_g

0x8133,	// (0x000840bb) aid_postcard_touch_down_pane_ParamLimits

0x8133,	// (0x000840bb) aid_postcard_touch_down_pane

0x813f,	// (0x000840c7) aid_postcard_touch_up_pane_ParamLimits

0x813f,	// (0x000840c7) aid_postcard_touch_up_pane

0x5bce,	// (0x00081b56) main_blid2_pane

0x87b1,	// (0x00084739) popup_blid2_search_window

0xd964,	// (0x000898ec) blid2_gps_pane

0xd964,	// (0x000898ec) blid2_navig_pane

0xd964,	// (0x000898ec) blid2_search_pane

0xd964,	// (0x000898ec) blid2_tripm_pane

0xb734,	// (0x000876bc) blid2_search_pane_g1_ParamLimits

0xb734,	// (0x000876bc) blid2_search_pane_g1

0xb740,	// (0x000876c8) blid2_search_pane_t1_ParamLimits

0xb740,	// (0x000876c8) blid2_search_pane_t1

0xb752,	// (0x000876da) aid_size_cell_blid2_gps_ParamLimits

0xb752,	// (0x000876da) aid_size_cell_blid2_gps

0xb762,	// (0x000876ea) blid2_gps_pane_g1_ParamLimits

0xb762,	// (0x000876ea) blid2_gps_pane_g1

0xb76e,	// (0x000876f6) grid_blid2_satellite_pane_ParamLimits

0xb76e,	// (0x000876f6) grid_blid2_satellite_pane

0xb77a,	// (0x00087702) blid2_navig_pane_g1_ParamLimits

0xb77a,	// (0x00087702) blid2_navig_pane_g1

0xb786,	// (0x0008770e) blid2_navig_pane_t1_ParamLimits

0xb786,	// (0x0008770e) blid2_navig_pane_t1

0xb798,	// (0x00087720) blid2_navig_pane_t2_ParamLimits

0xb798,	// (0x00087720) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0008ba8b) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0008ba8b) blid2_navig_pane_t

0xb7aa,	// (0x00087732) blid2_navig_ring_pane_ParamLimits

0xb7aa,	// (0x00087732) blid2_navig_ring_pane

0xb7b6,	// (0x0008773e) blid2_speed_pane_ParamLimits

0xb7b6,	// (0x0008773e) blid2_speed_pane

0xb7c2,	// (0x0008774a) blid2_tripm_pane_g1_ParamLimits

0xb7c2,	// (0x0008774a) blid2_tripm_pane_g1

0xb7ce,	// (0x00087756) blid2_tripm_pane_g2_ParamLimits

0xb7ce,	// (0x00087756) blid2_tripm_pane_g2

0xb7da,	// (0x00087762) blid2_tripm_pane_g3_ParamLimits

0xb7da,	// (0x00087762) blid2_tripm_pane_g3

0xb7e6,	// (0x0008776e) blid2_tripm_pane_g4_ParamLimits

0xb7e6,	// (0x0008776e) blid2_tripm_pane_g4

0xb7f2,	// (0x0008777a) blid2_tripm_pane_g5_ParamLimits

0xb7f2,	// (0x0008777a) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0008ba90) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0008ba90) blid2_tripm_pane_g

0xb80a,	// (0x00087792) blid2_tripm_pane_t1_ParamLimits

0xb80a,	// (0x00087792) blid2_tripm_pane_t1

0xb81c,	// (0x000877a4) blid2_tripm_pane_t2_ParamLimits

0xb81c,	// (0x000877a4) blid2_tripm_pane_t2

0xb82e,	// (0x000877b6) blid2_tripm_pane_t3_ParamLimits

0xb82e,	// (0x000877b6) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0008ba9d) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0008ba9d) blid2_tripm_pane_t

0xb85e,	// (0x000877e6) cell_blid2_satellite_pane_ParamLimits

0xb85e,	// (0x000877e6) cell_blid2_satellite_pane

0xb876,	// (0x000877fe) cell_blid2_satellite_pane_g1

0x2ab5,	// (0x0007ea3d) cell_blid2_satellite_pane_t1

0x1c67,	// (0x0007dbef) blid2_speed_pane_g1

0x2ac3,	// (0x0007ea4b) blid2_speed_pane_t1

0x2ad1,	// (0x0007ea59) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0008baa6) blid2_speed_pane_t

0x1c67,	// (0x0007dbef) blid2_navig_ring_pane_g1

0xb87f,	// (0x00087807) blid2_navig_ring_pane_g2

0xb887,	// (0x0008780f) blid2_navig_ring_pane_g3

0xb88f,	// (0x00087817) blid2_navig_ring_pane_g4

0xb897,	// (0x0008781f) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0008baab) blid2_navig_ring_pane_g

0xd964,	// (0x000898ec) bg_popup_window_pane_cp011

0x2adf,	// (0x0007ea67) popup_blid2_search_window_g1

0x2ae7,	// (0x0007ea6f) popup_blid2_search_window_t1

0x2af5,	// (0x0007ea7d) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0008bab6) popup_blid2_search_window_t

0xe3e5,	// (0x0008a36d) main_browser_pane_g1

0xe0df,	// (0x0008a067) main_browser_pane_ParamLimits

0x8788,	// (0x00084710) bg_button_pane_cp011_ParamLimits

0xa91f,	// (0x000868a7) cell_vitu2_function_pane_g1_ParamLimits

0x17d2,	// (0x0007d75a) bg_popup_sub_pane_cp22_ParamLimits

0xb1cc,	// (0x00087154) input_focus_pane_cp08_ParamLimits

0xb1e3,	// (0x0008716b) popup_vitu2_query_button_pane_ParamLimits

0xb1e3,	// (0x0008716b) popup_vitu2_query_button_pane

0xb1f4,	// (0x0008717c) popup_vitu2_query_input_button_pane

0x26d7,	// (0x0007e65f) popup_vitu2_query_window_g1_ParamLimits

0xb1fc,	// (0x00087184) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0008b9b7) popup_vitu2_query_window_g_ParamLimits

0xd964,	// (0x000898ec) bg_button_pane_cp026

0xb89f,	// (0x00087827) popup_vitu2_query_input_button_pane_g1

0xd964,	// (0x000898ec) bg_button_pane_cp025

0x2b03,	// (0x0007ea8b) popup_vitu2_query_button_pane_t1

0x916c,	// (0x000850f4) main_mp3_pane_t6

0x917a,	// (0x00085102) popup_slider_window_cp01

0xa5b0,	// (0x00086538) cam4_battery_pane

0xa684,	// (0x0008660c) cam4_battery_pane_cp02

0xb5f6,	// (0x0008757e) cam4_battery_pane_cp01

0xb5f6,	// (0x0008757e) cam4_battery_pane_cp03

0x2b11,	// (0x0007ea99) cam4_battery_pane_g1

0x1c67,	// (0x0007dbef) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0008babb) cam4_battery_pane_g

0x1b39,	// (0x0007dac1) popup_blid_sat_info2_window_t11

0xeb17,	// (0x0008aa9f) aid_size_touch_mv_arrow_left_ParamLimits

0xeb40,	// (0x0008aac8) aid_size_touch_mv_arrow_right_ParamLimits

0xeb9e,	// (0x0008ab26) navi_pane_g1_ParamLimits

0xebaa,	// (0x0008ab32) navi_pane_g2_ParamLimits

0xebd8,	// (0x0008ab60) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008b36d) navi_pane_g_ParamLimits

0x7b48,	// (0x00083ad0) navi_pane_mv_t1_ParamLimits

0x9bdd,	// (0x00085b65) grid_imed_effect_pane_ParamLimits

0x6b75,	// (0x00082afd) aid_placing_vt_slider_lsc

0xe327,	// (0x0008a2af) aid_placing_vt_slider_prt

0x062b,	// (0x0007c5b3) bg_tb_trans_pane_cp01_ParamLimits

0x1db6,	// (0x0007dd3e) popup_image_details_window_g1_ParamLimits

0x1dc9,	// (0x0007dd51) popup_image_details_window_g2_ParamLimits

0x1dde,	// (0x0007dd66) popup_image_details_window_g3_ParamLimits

0x1dde,	// (0x0007dd66) popup_image_details_window_g3

0xf72b,	// (0x0008b6b3) popup_image_details_window_g_ParamLimits

0x1df2,	// (0x0007dd7a) popup_image_details_window_t1_ParamLimits

0x1e04,	// (0x0007dd8c) popup_image_details_window_t2_ParamLimits

0x1e1d,	// (0x0007dda5) popup_image_details_window_t3_ParamLimits

0x1e31,	// (0x0007ddb9) popup_image_details_window_t4_ParamLimits

0x1e4c,	// (0x0007ddd4) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0008b6ba) popup_image_details_window_t_ParamLimits

0xb526,	// (0x000874ae) cl_header_name_pane_ParamLimits

0xb526,	// (0x000874ae) cl_header_name_pane

0xb8a7,	// (0x0008782f) cl_header_name_pane_t1_ParamLimits

0xb8a7,	// (0x0008782f) cl_header_name_pane_t1

0xb8be,	// (0x00087846) cl_header_name_pane_t2_ParamLimits

0xb8be,	// (0x00087846) cl_header_name_pane_t2

0xb8e8,	// (0x00087870) cl_header_name_pane_t3_ParamLimits

0xb8e8,	// (0x00087870) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0008bac0) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0008bac0) cl_header_name_pane_t

0xec65,	// (0x0008abed) navi_pane_mv_g2_ParamLimits

0x4883,	// (0x0008080b) field_vitu2_entry_pane_g1_ParamLimits

0x488f,	// (0x00080817) field_vitu2_entry_pane_g2_ParamLimits

0x489b,	// (0x00080823) field_vitu2_entry_pane_g3_ParamLimits

0x489b,	// (0x00080823) field_vitu2_entry_pane_g3

0xf92e,	// (0x0008b8b6) field_vitu2_entry_pane_g_ParamLimits

0xa8b3,	// (0x0008683b) cell_vitu2_itu_pane_g1_ParamLimits

0xa8c5,	// (0x0008684d) cell_vitu2_itu_pane_g2_ParamLimits

0xa8c5,	// (0x0008684d) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0008b8c2) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0008b8c2) cell_vitu2_itu_pane_g

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp05_ParamLimits

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp05

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp03

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp04

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp10_ParamLimits

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp10

0xb4cc,	// (0x00087454) bg_vkb2_func_pane_cp08

0xb4b3,	// (0x0008743b) bg_vkb2_func_pane_cp06

0xb4c0,	// (0x00087448) bg_vkb2_func_pane_cp07

0x2a0b,	// (0x0007e993) bg_vkb2_func_pane_cp11_ParamLimits

0x2a0b,	// (0x0007e993) bg_vkb2_func_pane_cp11

0x2a20,	// (0x0007e9a8) bg_vkb2_func_pane_cp12_ParamLimits

0x2a20,	// (0x0007e9a8) bg_vkb2_func_pane_cp12

0xd964,	// (0x000898ec) bg_vkb2_func_pane_cp09

0x48cd,	// (0x00080855) bg_vkb2_func_pane_g1

0xe4f6,	// (0x0008a47e) bg_vkb2_func_pane_g2

0x48d5,	// (0x0008085d) bg_vkb2_func_pane_g3

0x48dd,	// (0x00080865) bg_vkb2_func_pane_g4

0x269c,	// (0x0007e624) bg_vkb2_func_pane_g5

0x48f5,	// (0x0008087d) bg_vkb2_func_pane_g6

0x48fd,	// (0x00080885) bg_vkb2_func_pane_g7

0x48ed,	// (0x00080875) bg_vkb2_func_pane_g8

0xe4d6,	// (0x0008a45e) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0008bac7) bg_vkb2_func_pane_g

0xb7fe,	// (0x00087786) blid2_tripm_pane_g6_ParamLimits

0xb7fe,	// (0x00087786) blid2_tripm_pane_g6

0x476f,	// (0x000806f7) mp4_progress_pane_g1

0xb852,	// (0x000877da) blid2_tripm_values_pane_ParamLimits

0xb852,	// (0x000877da) blid2_tripm_values_pane

0xb90d,	// (0x00087895) blid2_tripm_values_pane_t1

0xb91b,	// (0x000878a3) blid2_tripm_values_pane_t2

0xb929,	// (0x000878b1) blid2_tripm_values_pane_t3

0xb937,	// (0x000878bf) blid2_tripm_values_pane_t4

0xb945,	// (0x000878cd) blid2_tripm_values_pane_t5

0xb953,	// (0x000878db) blid2_tripm_values_pane_t6

0xb961,	// (0x000878e9) blid2_tripm_values_pane_t7

0xb96f,	// (0x000878f7) blid2_tripm_values_pane_t8

0xb97d,	// (0x00087905) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0008bada) blid2_tripm_values_pane_t

0x6baf,	// (0x00082b37) call_video_pane_t1_ParamLimits

0x6bcc,	// (0x00082b54) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008b1f6) call_video_pane_t_ParamLimits

0x8000,	// (0x00083f88) msg_header_pane_g1_ParamLimits

0xee12,	// (0x0008ad9a) msg_header_pane_g2_ParamLimits

0xee12,	// (0x0008ad9a) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008b410) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008b410) msg_header_pane_g

0xe0df,	// (0x0008a067) main_clock2_pane_ParamLimits

0x997f,	// (0x00085907) grid_clock2_toolbar_pane_ParamLimits

0x997f,	// (0x00085907) grid_clock2_toolbar_pane

0x997f,	// (0x00085907) listscroll_clock2_pane_ParamLimits

0x997f,	// (0x00085907) listscroll_clock2_pane

0x9a1b,	// (0x000859a3) main_clock2_pane_t3_ParamLimits

0x9a1b,	// (0x000859a3) main_clock2_pane_t3

0x9a2d,	// (0x000859b5) main_clock2_pane_t4_ParamLimits

0x9a2d,	// (0x000859b5) main_clock2_pane_t4

0x2b1b,	// (0x0007eaa3) cell_clock2_toolbar_pane

0x2b23,	// (0x0007eaab) cell_clock2_toolbar_pane_cp01

0x2b23,	// (0x0007eaab) cell_clock2_toolbar_pane_cp02

0x2b2b,	// (0x0007eab3) cell_clock2_toolbar_pane_cp03

0x2b33,	// (0x0007eabb) list_clock2_pane

0xea9c,	// (0x0008aa24) scroll_pane_cp10

0x2b3b,	// (0x0007eac3) list_single_clock2_pane_ParamLimits

0x2b3b,	// (0x0007eac3) list_single_clock2_pane

0xe290,	// (0x0008a218) list_highlight_pane_cp08

0x2b48,	// (0x0007ead0) list_single_clock2_pane_t1

0x2b56,	// (0x0007eade) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0008baed) list_single_clock2_pane_t

0xd964,	// (0x000898ec) bg_button_pane_cp10

0x2b64,	// (0x0007eaec) cell_clock2_toolbar_pane_g1

0x809d,	// (0x00084025) aid_main_viewer_pane_g1_ParamLimits

0x809d,	// (0x00084025) aid_main_viewer_pane_g1

0x80a9,	// (0x00084031) aid_main_viewer_pane_g2_ParamLimits

0x80a9,	// (0x00084031) aid_main_viewer_pane_g2

0x80b5,	// (0x0008403d) aid_main_viewer_pane_g3_ParamLimits

0x80b5,	// (0x0008403d) aid_main_viewer_pane_g3

0x80c4,	// (0x0008404c) aid_main_viewer_pane_g4_ParamLimits

0x80c4,	// (0x0008404c) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008b421) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008b421) aid_main_viewer_pane_g

0x876b,	// (0x000846f3) main_calc_pane_ParamLimits

0x8796,	// (0x0008471e) main_dialer2_pane_ParamLimits

0x5bce,	// (0x00081b56) main_cam6_pane

0x5bce,	// (0x00081b56) main_vid6_pane

0x998b,	// (0x00085913) listscroll_gen_pane_cp06_ParamLimits

0x998b,	// (0x00085913) listscroll_gen_pane_cp06

0x9a3f,	// (0x000859c7) main_clock2_pane_t5_ParamLimits

0x9a3f,	// (0x000859c7) main_clock2_pane_t5

0x9a87,	// (0x00085a0f) aid_call2_pane_cp10_ParamLimits

0x9a99,	// (0x00085a21) aid_call_pane_cp10_ParamLimits

0xeb0b,	// (0x0008aa93) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeb0b,	// (0x0008aa93) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9aab,	// (0x00085a33) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9aab,	// (0x00085a33) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeb0b,	// (0x0008aa93) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0008b76f) popup_clock_analogue_window_cp10_g_ParamLimits

0x9abd,	// (0x00085a45) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa211,	// (0x00086199) cell_dialer2_keypad_pane_g2_ParamLimits

0xa211,	// (0x00086199) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0008b855) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0008b855) cell_dialer2_keypad_pane_g

0xa22d,	// (0x000861b5) cell_dialer2_keypad_pane_t1

0xabb8,	// (0x00086b40) main_cset_text2_pane_ParamLimits

0xabb8,	// (0x00086b40) main_cset_text2_pane

0x28bd,	// (0x0007e845) area_vitu2_query_pane_g1_ParamLimits

0xb458,	// (0x000873e0) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0008ba0a) area_vitu2_query_pane_g_ParamLimits

0x2941,	// (0x0007e8c9) area_vitu2_query_pane_t7_ParamLimits

0x2941,	// (0x0007e8c9) area_vitu2_query_pane_t7

0xb4b3,	// (0x0008743b) bg_button_pane_cp018_ParamLimits

0xb4c0,	// (0x00087448) bg_button_pane_cp021_ParamLimits

0xb4cc,	// (0x00087454) bg_button_pane_cp022_ParamLimits

0xb4cc,	// (0x00087454) bg_vkb2_func_pane_cp08_ParamLimits

0xb4b3,	// (0x0008743b) bg_vkb2_func_pane_cp06_ParamLimits

0xb4c0,	// (0x00087448) bg_vkb2_func_pane_cp07_ParamLimits

0xb4db,	// (0x00087463) input_focus_pane_cp09_ParamLimits

0xb98b,	// (0x00087913) cam6_autofocus_pane_ParamLimits

0xb98b,	// (0x00087913) cam6_autofocus_pane

0xb9a7,	// (0x0008792f) cam6_image_uncrop_pane_ParamLimits

0xb9a7,	// (0x0008792f) cam6_image_uncrop_pane

0xb9ca,	// (0x00087952) cam6_indi_pane_ParamLimits

0xb9ca,	// (0x00087952) cam6_indi_pane

0xb9e4,	// (0x0008796c) cam6_mode_pane_ParamLimits

0xb9e4,	// (0x0008796c) cam6_mode_pane

0xb9f8,	// (0x00087980) cam6_timer_pane_ParamLimits

0xb9f8,	// (0x00087980) cam6_timer_pane

0xba04,	// (0x0008798c) cam6_zoom_pane_ParamLimits

0xba04,	// (0x0008798c) cam6_zoom_pane

0xba1a,	// (0x000879a2) cam6_mode_pane_g1_ParamLimits

0xba1a,	// (0x000879a2) cam6_mode_pane_g1

0xba26,	// (0x000879ae) cam6_mode_pane_g2_ParamLimits

0xba26,	// (0x000879ae) cam6_mode_pane_g2

0xba32,	// (0x000879ba) cam6_mode_pane_g3_ParamLimits

0xba32,	// (0x000879ba) cam6_mode_pane_g3

0xba3e,	// (0x000879c6) cam6_mode_pane_g4_ParamLimits

0xba3e,	// (0x000879c6) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0008baf2) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0008baf2) cam6_mode_pane_g

0x2b6c,	// (0x0007eaf4) bg_tb_trans_pane_cp08_ParamLimits

0x2b6c,	// (0x0007eaf4) bg_tb_trans_pane_cp08

0x2b7a,	// (0x0007eb02) cam6_battery_pane_ParamLimits

0x2b7a,	// (0x0007eb02) cam6_battery_pane

0x2b90,	// (0x0007eb18) cam6_indi_pane_g1_ParamLimits

0x2b90,	// (0x0007eb18) cam6_indi_pane_g1

0x2ba2,	// (0x0007eb2a) cam6_indi_pane_g2_ParamLimits

0x2ba2,	// (0x0007eb2a) cam6_indi_pane_g2

0x2bb4,	// (0x0007eb3c) cam6_indi_pane_g3_ParamLimits

0x2bb4,	// (0x0007eb3c) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0008bafb) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0008bafb) cam6_indi_pane_g

0x2bc6,	// (0x0007eb4e) cam6_indi_pane_t1_ParamLimits

0x2bc6,	// (0x0007eb4e) cam6_indi_pane_t1

0xa700,	// (0x00086688) cam6_autofocus_pane_g1

0xa6f8,	// (0x00086680) cam6_autofocus_pane_g2

0xa710,	// (0x00086698) cam6_autofocus_pane_g3

0xa708,	// (0x00086690) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0008bb02) cam6_autofocus_pane_g

0x2bec,	// (0x0007eb74) cam6_timer_pane_g1

0x2bf4,	// (0x0007eb7c) cam6_timer_pane_t1

0x2c02,	// (0x0007eb8a) cam6_zoom_cont_pane

0x2c0a,	// (0x0007eb92) cam6_zoom_pane_g1

0x2c12,	// (0x0007eb9a) cam6_zoom_pane_g2

0xba4a,	// (0x000879d2) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0008bb0b) cam6_zoom_pane_g

0x1c67,	// (0x0007dbef) cam6_battery_pane_g1

0x1c67,	// (0x0007dbef) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0008b677) cam6_battery_pane_g

0x2c1a,	// (0x0007eba2) cam6_zoom_cont_pane_g1

0x2c23,	// (0x0007ebab) cam6_zoom_cont_pane_g2

0x2c2c,	// (0x0007ebb4) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0008bb12) cam6_zoom_cont_pane_g

0xba67,	// (0x000879ef) cam6_mode_pane_cp_ParamLimits

0xba67,	// (0x000879ef) cam6_mode_pane_cp

0xba7b,	// (0x00087a03) cam6_zoom_pane_cp_ParamLimits

0xba7b,	// (0x00087a03) cam6_zoom_pane_cp

0xba91,	// (0x00087a19) vid6_image_uncrop_cif_pane_ParamLimits

0xba91,	// (0x00087a19) vid6_image_uncrop_cif_pane

0xbab3,	// (0x00087a3b) vid6_image_uncrop_nhd_pane_ParamLimits

0xbab3,	// (0x00087a3b) vid6_image_uncrop_nhd_pane

0xbaca,	// (0x00087a52) vid6_image_uncrop_vga_pane_ParamLimits

0xbaca,	// (0x00087a52) vid6_image_uncrop_vga_pane

0xbae1,	// (0x00087a69) vid6_image_uncrop_wvga_pane_ParamLimits

0xbae1,	// (0x00087a69) vid6_image_uncrop_wvga_pane

0xbaf8,	// (0x00087a80) vid6_indi_pane_ParamLimits

0xbaf8,	// (0x00087a80) vid6_indi_pane

0x2b6c,	// (0x0007eaf4) bg_tb_trans_pane_cp09_ParamLimits

0x2b6c,	// (0x0007eaf4) bg_tb_trans_pane_cp09

0x2c40,	// (0x0007ebc8) cam6_battery_pane_cp_ParamLimits

0x2c40,	// (0x0007ebc8) cam6_battery_pane_cp

0x2c4c,	// (0x0007ebd4) vid6_indi_pane_g1_ParamLimits

0x2c4c,	// (0x0007ebd4) vid6_indi_pane_g1

0x2c5e,	// (0x0007ebe6) vid6_indi_pane_g2_ParamLimits

0x2c5e,	// (0x0007ebe6) vid6_indi_pane_g2

0x2c70,	// (0x0007ebf8) vid6_indi_pane_g3_ParamLimits

0x2c70,	// (0x0007ebf8) vid6_indi_pane_g3

0x2c85,	// (0x0007ec0d) vid6_indi_pane_g4_ParamLimits

0x2c85,	// (0x0007ec0d) vid6_indi_pane_g4

0x2c9a,	// (0x0007ec22) vid6_indi_pane_g5_ParamLimits

0x2c9a,	// (0x0007ec22) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0008bb19) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0008bb19) vid6_indi_pane_g

0x2cb4,	// (0x0007ec3c) vid6_indi_pane_t1_ParamLimits

0x2cb4,	// (0x0007ec3c) vid6_indi_pane_t1

0x2cca,	// (0x0007ec52) vid6_indi_pane_t2_ParamLimits

0x2cca,	// (0x0007ec52) vid6_indi_pane_t2

0x2cf2,	// (0x0007ec7a) vid6_indi_pane_t3_ParamLimits

0x2cf2,	// (0x0007ec7a) vid6_indi_pane_t3

0x2d1a,	// (0x0007eca2) vid6_indi_pane_t4_ParamLimits

0x2d1a,	// (0x0007eca2) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0008bb24) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0008bb24) vid6_indi_pane_t

0x2d3e,	// (0x0007ecc6) wait_bar_pane_cp08

0xbb18,	// (0x00087aa0) main_cset_text2_pane_t1_ParamLimits

0xbb18,	// (0x00087aa0) main_cset_text2_pane_t1

0xba52,	// (0x000879da) listscroll_gen_pane_cp06_t1_ParamLimits

0xba52,	// (0x000879da) listscroll_gen_pane_cp06_t1

0x5bce,	// (0x00081b56) main_cam6_set_pane

0xa5a2,	// (0x0008652a) bg_tb_trans_pane_cp06_ParamLimits

0xa5b8,	// (0x00086540) cam4_indicators_pane_g1_ParamLimits

0xa5c9,	// (0x00086551) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0008b892) cam4_indicators_pane_g_ParamLimits

0xa5e1,	// (0x00086569) cam4_indicators_pane_t1_ParamLimits

0x8788,	// (0x00084710) bg_tb_trans_pane_cp07_ParamLimits

0xa68c,	// (0x00086614) vid4_indicators_pane_g1_ParamLimits

0xa6a0,	// (0x00086628) vid4_indicators_pane_g2_ParamLimits

0xa6b4,	// (0x0008663c) vid4_indicators_pane_g3_ParamLimits

0xa6c5,	// (0x0008664d) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0008b8a4) vid4_indicators_pane_g_ParamLimits

0xa6e1,	// (0x00086669) vid4_indicators_pane_t1_ParamLimits

0xb5fe,	// (0x00087586) vid4_progress_pane_g1_ParamLimits

0xb60e,	// (0x00087596) vid4_progress_pane_g2_ParamLimits

0xb61e,	// (0x000875a6) vid4_progress_pane_g3_ParamLimits

0xb62e,	// (0x000875b6) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0008ba55) vid4_progress_pane_g_ParamLimits

0xb64c,	// (0x000875d4) vid4_progress_pane_t1_ParamLimits

0xb662,	// (0x000875ea) vid4_progress_pane_t2_ParamLimits

0xb677,	// (0x000875ff) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0008ba60) vid4_progress_pane_t_ParamLimits

0xb68d,	// (0x00087615) wait_bar_pane_cp07_ParamLimits

0xbb34,	// (0x00087abc) main_cam6_set_pane_g2_ParamLimits

0xbb34,	// (0x00087abc) main_cam6_set_pane_g2

0xbb40,	// (0x00087ac8) main_cset6_listscroll_pane_ParamLimits

0xbb40,	// (0x00087ac8) main_cset6_listscroll_pane

0xbb69,	// (0x00087af1) main_cset6_slider_pane_ParamLimits

0xbb69,	// (0x00087af1) main_cset6_slider_pane

0xbb75,	// (0x00087afd) main_cset6_text2_pane_ParamLimits

0xbb75,	// (0x00087afd) main_cset6_text2_pane

0x2d4d,	// (0x0007ecd5) main_cset6_text_pane

0x2d55,	// (0x0007ecdd) main_cset_list_pane_copy1_ParamLimits

0x2d55,	// (0x0007ecdd) main_cset_list_pane_copy1

0x2d65,	// (0x0007eced) scroll_pane_cp028_copy1

0xbb88,	// (0x00087b10) cset_list_set_pane_copy1

0xbb94,	// (0x00087b1c) aid_position_infowindow_above_copy1

0xbb9c,	// (0x00087b24) aid_position_infowindow_below_copy1

0xbba4,	// (0x00087b2c) cset_list_set_pane_g1_copy1

0xbbac,	// (0x00087b34) cset_list_set_pane_g3_copy1_ParamLimits

0xbbac,	// (0x00087b34) cset_list_set_pane_g3_copy1

0xbbbb,	// (0x00087b43) cset_list_set_pane_t1_copy1_ParamLimits

0xbbbb,	// (0x00087b43) cset_list_set_pane_t1_copy1

0x062b,	// (0x0007c5b3) list_highlight_pane_cp021_copy1_ParamLimits

0x062b,	// (0x0007c5b3) list_highlight_pane_cp021_copy1

0x2d6e,	// (0x0007ecf6) cset6_slider_pane_ParamLimits

0x2d6e,	// (0x0007ecf6) cset6_slider_pane

0x2d9a,	// (0x0007ed22) main_cset6_slider_pane_g1_ParamLimits

0x2d9a,	// (0x0007ed22) main_cset6_slider_pane_g1

0xbbd0,	// (0x00087b58) main_cset6_slider_pane_g2_ParamLimits

0xbbd0,	// (0x00087b58) main_cset6_slider_pane_g2

0x2574,	// (0x0007e4fc) main_cset6_slider_pane_g3_ParamLimits

0x2574,	// (0x0007e4fc) main_cset6_slider_pane_g3

0xbbf8,	// (0x00087b80) main_cset6_slider_pane_g4_ParamLimits

0xbbf8,	// (0x00087b80) main_cset6_slider_pane_g4

0xbc04,	// (0x00087b8c) main_cset6_slider_pane_g5_ParamLimits

0xbc04,	// (0x00087b8c) main_cset6_slider_pane_g5

0x2574,	// (0x0007e4fc) main_cset6_slider_pane_g7_ParamLimits

0x2574,	// (0x0007e4fc) main_cset6_slider_pane_g7

0x2580,	// (0x0007e508) main_cset6_slider_pane_g8_ParamLimits

0x2580,	// (0x0007e508) main_cset6_slider_pane_g8

0xbc10,	// (0x00087b98) main_cset6_slider_pane_g9_ParamLimits

0xbc10,	// (0x00087b98) main_cset6_slider_pane_g9

0xbc1c,	// (0x00087ba4) main_cset6_slider_pane_g10_ParamLimits

0xbc1c,	// (0x00087ba4) main_cset6_slider_pane_g10

0xbc28,	// (0x00087bb0) main_cset6_slider_pane_g11_ParamLimits

0xbc28,	// (0x00087bb0) main_cset6_slider_pane_g11

0xbc34,	// (0x00087bbc) main_cset6_slider_pane_g12_ParamLimits

0xbc34,	// (0x00087bbc) main_cset6_slider_pane_g12

0xac40,	// (0x00086bc8) main_cset6_slider_pane_g13_ParamLimits

0xac40,	// (0x00086bc8) main_cset6_slider_pane_g13

0xac4c,	// (0x00086bd4) main_cset6_slider_pane_g14_ParamLimits

0xac4c,	// (0x00086bd4) main_cset6_slider_pane_g14

0xbc40,	// (0x00087bc8) main_cset6_slider_pane_g15_ParamLimits

0xbc40,	// (0x00087bc8) main_cset6_slider_pane_g15

0xbc04,	// (0x00087b8c) main_cset6_slider_pane_g16_ParamLimits

0xbc04,	// (0x00087b8c) main_cset6_slider_pane_g16

0xbc58,	// (0x00087be0) main_cset6_slider_pane_g17_ParamLimits

0xbc58,	// (0x00087be0) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0008bb2d) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0008bb2d) main_cset6_slider_pane_g

0x2dc2,	// (0x0007ed4a) main_cset6_slider_pane_t1_ParamLimits

0x2dc2,	// (0x0007ed4a) main_cset6_slider_pane_t1

0xbc70,	// (0x00087bf8) main_cset6_slider_pane_t2_ParamLimits

0xbc70,	// (0x00087bf8) main_cset6_slider_pane_t2

0xbc9b,	// (0x00087c23) main_cset6_slider_pane_t3_ParamLimits

0xbc9b,	// (0x00087c23) main_cset6_slider_pane_t3

0xbcc6,	// (0x00087c4e) main_cset6_slider_pane_t4_ParamLimits

0xbcc6,	// (0x00087c4e) main_cset6_slider_pane_t4

0xbcf1,	// (0x00087c79) main_cset6_slider_pane_t5_ParamLimits

0xbcf1,	// (0x00087c79) main_cset6_slider_pane_t5

0x2e03,	// (0x0007ed8b) main_cset6_slider_pane_t7_ParamLimits

0x2e03,	// (0x0007ed8b) main_cset6_slider_pane_t7

0xbd1c,	// (0x00087ca4) main_cset6_slider_pane_t8_ParamLimits

0xbd1c,	// (0x00087ca4) main_cset6_slider_pane_t8

0xbd40,	// (0x00087cc8) main_cset6_slider_pane_t9_ParamLimits

0xbd40,	// (0x00087cc8) main_cset6_slider_pane_t9

0xbd64,	// (0x00087cec) main_cset6_slider_pane_t10_ParamLimits

0xbd64,	// (0x00087cec) main_cset6_slider_pane_t10

0xbd88,	// (0x00087d10) main_cset6_slider_pane_t11_ParamLimits

0xbd88,	// (0x00087d10) main_cset6_slider_pane_t11

0x2e39,	// (0x0007edc1) main_cset6_slider_pane_t14_ParamLimits

0x2e39,	// (0x0007edc1) main_cset6_slider_pane_t14

0x2e72,	// (0x0007edfa) main_cset6_slider_pane_t15_ParamLimits

0x2e72,	// (0x0007edfa) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0008bb52) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0008bb52) main_cset6_slider_pane_t

0x2650,	// (0x0007e5d8) cset_slider_pane_g1_copy1

0x2659,	// (0x0007e5e1) cset_slider_pane_g2_copy1

0x2662,	// (0x0007e5ea) cset_slider_pane_g3_copy1

0xd964,	// (0x000898ec) bg_popup_sub_pane_cp011_copy1

0x2eab,	// (0x0007ee33) main_cset_text_pane_g1_copy1

0x26eb,	// (0x0007e673) main_cset_text_pane_t1_copy1

0x26f9,	// (0x0007e681) main_cset_text_pane_t2_copy1

0x2707,	// (0x0007e68f) main_cset_text_pane_t3_copy1

0x2715,	// (0x0007e69d) main_cset_text_pane_t4_copy1

0x2eb3,	// (0x0007ee3b) main_cset_text_pane_t5_copy1

0x2ec1,	// (0x0007ee49) main_cset_text_pane_t6_copy1

0x2ecf,	// (0x0007ee57) main_cset_text_pane_t7_copy1

0x4128,	// (0x000800b0) main_cset_text2_pane_t1_copy1

0x8788,	// (0x00084710) main_ncimui_pane

0x87e1,	// (0x00084769) popup_query_ncimui_window_ParamLimits

0x87e1,	// (0x00084769) popup_query_ncimui_window

0x42e1,	// (0x00080269) field_cale_ev2_pane_g4_ParamLimits

0x42e1,	// (0x00080269) field_cale_ev2_pane_g4

0x9f51,	// (0x00085ed9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9f51,	// (0x00085ed9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0008b830) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0008b830) cell_video_dialer_keypad_pane_g

0x9f69,	// (0x00085ef1) cell_video_dialer_keypad_pane_t1

0xd964,	// (0x000898ec) bg_popup_window_pane_cp012

0xe993,	// (0x0008a91b) heading_pane_cp06

0x2efb,	// (0x0007ee83) ncim_query_content_pane

0xd964,	// (0x000898ec) bg_popup_heading_pane_cp01

0x2f03,	// (0x0007ee8b) ncim_heading_pane_t1

0x2f11,	// (0x0007ee99) ncim_indicator_popup_pane

0x2f23,	// (0x0007eeab) ncim_query_button_pane

0x2f37,	// (0x0007eebf) ncim_query_content_pane_t1

0x2f49,	// (0x0007eed1) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0008bb96) ncim_query_content_pane_t

0x2f83,	// (0x0007ef0b) ncim_query_list_pane

0x2f95,	// (0x0007ef1d) ncim_query_popup_pane

0x2f11,	// (0x0007ee99) ncim_indicator_popup_pane_ParamLimits

0xbfa4,	// (0x00087f2c) ncim_query_content_pane_g1_ParamLimits

0xbfa4,	// (0x00087f2c) ncim_query_content_pane_g1

0x2f37,	// (0x0007eebf) ncim_query_content_pane_t1_ParamLimits

0x2f49,	// (0x0007eed1) ncim_query_content_pane_t2_ParamLimits

0xbfb0,	// (0x00087f38) ncim_query_content_pane_t3_ParamLimits

0xbfb0,	// (0x00087f38) ncim_query_content_pane_t3

0xbfcd,	// (0x00087f55) ncim_query_content_pane_t4_ParamLimits

0xbfcd,	// (0x00087f55) ncim_query_content_pane_t4

0xbfea,	// (0x00087f72) ncim_query_content_pane_t5_ParamLimits

0xbfea,	// (0x00087f72) ncim_query_content_pane_t5

0x2f5b,	// (0x0007eee3) ncim_query_content_pane_t6_ParamLimits

0x2f5b,	// (0x0007eee3) ncim_query_content_pane_t6

0xfc0e,	// (0x0008bb96) ncim_query_content_pane_t_ParamLimits

0x2f83,	// (0x0007ef0b) ncim_query_list_pane_ParamLimits

0x2f95,	// (0x0007ef1d) ncim_query_popup_pane_ParamLimits

0x2fa9,	// (0x0007ef31) wait_bar_pane_cp04

0xd964,	// (0x000898ec) input_focus_pane_cp011

0x2fb1,	// (0x0007ef39) ncim_query_popup_pane_t1

0x2fbf,	// (0x0007ef47) ncim_list_query_list_pane_ParamLimits

0x2fbf,	// (0x0007ef47) ncim_list_query_list_pane

0xd964,	// (0x000898ec) bg_button_pane_cp027

0x2fd2,	// (0x0007ef5a) ncim_query_button_pane_g1

0xd964,	// (0x000898ec) list_highlight_pane_cp012

0x2fdc,	// (0x0007ef64) ncim_list_query_list_pane_g1

0x2fe4,	// (0x0007ef6c) ncim_list_query_list_pane_t1

0xa5d5,	// (0x0008655d) cam4_indicators_pane_g3_ParamLimits

0xa5d5,	// (0x0008655d) cam4_indicators_pane_g3

0xa6d1,	// (0x00086659) vid4_indicators_pane_g5_ParamLimits

0xa6d1,	// (0x00086659) vid4_indicators_pane_g5

0xb63d,	// (0x000875c5) vid4_progress_pane_g5_ParamLimits

0xb63d,	// (0x000875c5) vid4_progress_pane_g5

0xbe93,	// (0x00087e1b) main_ncimui_pane_g1

0xbef9,	// (0x00087e81) ncimui_group_query_pane_ParamLimits

0xbef9,	// (0x00087e81) ncimui_group_query_pane

0xbf41,	// (0x00087ec9) ncimui_list_pane_ParamLimits

0xbf41,	// (0x00087ec9) ncimui_list_pane

0xbf67,	// (0x00087eef) ncimui_text_pane_ParamLimits

0xbf67,	// (0x00087eef) ncimui_text_pane

0xc007,	// (0x00087f8f) ncimui_text_pane_t1_ParamLimits

0xc007,	// (0x00087f8f) ncimui_text_pane_t1

0x2ff2,	// (0x0007ef7a) ncimui_list_single_graphic_pane_ParamLimits

0x2ff2,	// (0x0007ef7a) ncimui_list_single_graphic_pane

0xc026,	// (0x00087fae) ncimui_query_pane_ParamLimits

0xc026,	// (0x00087fae) ncimui_query_pane

0xd964,	// (0x000898ec) list_highlight_pane_cp013

0x3002,	// (0x0007ef8a) ncim_list_query_list_pane_t1_copy1

0x3010,	// (0x0007ef98) ncim_list_single_graphic_pane_g1

0xc039,	// (0x00087fc1) ncim_query_button_pane_cp01

0xc045,	// (0x00087fcd) ncim_query_entry_pane_ParamLimits

0xc045,	// (0x00087fcd) ncim_query_entry_pane

0xc058,	// (0x00087fe0) ncimui_query_pane_g1

0xc064,	// (0x00087fec) ncimui_query_pane_t1_ParamLimits

0xc064,	// (0x00087fec) ncimui_query_pane_t1

0x062b,	// (0x0007c5b3) input_focus_pane_cp012

0x3018,	// (0x0007efa0) ncim_query_entry_pane_t1

0xe0df,	// (0x0008a067) main_im_pane_ParamLimits

0x8788,	// (0x00084710) main_mobtv_pane_ParamLimits

0x8788,	// (0x00084710) main_mobtv_pane

0xbc10,	// (0x00087b98) main_cset6_slider_pane_g18_ParamLimits

0xbc10,	// (0x00087b98) main_cset6_slider_pane_g18

0xbc64,	// (0x00087bec) main_cset6_slider_pane_g19_ParamLimits

0xbc64,	// (0x00087bec) main_cset6_slider_pane_g19

0x489b,	// (0x00080823) bg_main_mobtv_pane_ParamLimits

0x489b,	// (0x00080823) bg_main_mobtv_pane

0xc07d,	// (0x00088005) main_mobtv_info_pane

0xc086,	// (0x0008800e) main_mobtv_loading_pane_ParamLimits

0xc086,	// (0x0008800e) main_mobtv_loading_pane

0x3038,	// (0x0007efc0) main_mobtv_pg_channel_list_pane

0x3042,	// (0x0007efca) main_mobtv_pg_hdr_pane

0xc093,	// (0x0008801b) main_mobtv_programe_curr_pane_ParamLimits

0xc093,	// (0x0008801b) main_mobtv_programe_curr_pane

0xc0a0,	// (0x00088028) main_mobtv_programe_next_pane_ParamLimits

0xc0a0,	// (0x00088028) main_mobtv_programe_next_pane

0x304b,	// (0x0007efd3) popup_mobtv_noti_window

0x1c67,	// (0x0007dbef) main_tv_pg_hdr_pane_g1

0x3053,	// (0x0007efdb) main_tv_pg_hdr_pane_g2

0x305b,	// (0x0007efe3) main_tv_pg_hdr_pane_g3

0x3063,	// (0x0007efeb) main_tv_pg_hdr_pane_g4

0x306b,	// (0x0007eff3) main_tv_pg_hdr_pane_g5

0x3073,	// (0x0007effb) main_tv_pg_hdr_pane_g6

0x307b,	// (0x0007f003) main_tv_pg_hdr_pane_g7

0x3083,	// (0x0007f00b) main_tv_pg_hdr_pane_g8

0x308b,	// (0x0007f013) main_tv_pg_hdr_pane_g9

0x3093,	// (0x0007f01b) main_tv_pg_hdr_pane_g10

0x309d,	// (0x0007f025) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0008bba3) main_tv_pg_hdr_pane_g

0x30a7,	// (0x0007f02f) main_tv_pg_hdr_pane_t1

0x30b5,	// (0x0007f03d) main_tv_pg_hdr_pane_t2

0x30c3,	// (0x0007f04b) main_tv_pg_hdr_pane_t3

0x30d1,	// (0x0007f059) main_tv_pg_hdr_pane_t4

0x30df,	// (0x0007f067) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0008bbba) main_tv_pg_hdr_pane_t

0x30ed,	// (0x0007f075) single_mobtv_pg_channel_pane_ParamLimits

0x30ed,	// (0x0007f075) single_mobtv_pg_channel_pane

0x30ff,	// (0x0007f087) single_mobtv_pg_channel_table_pane

0x3108,	// (0x0007f090) single_mobtv_pg_channel_thumb_pane

0x3111,	// (0x0007f099) single_tv_pg_channel_pane_g1

0x311a,	// (0x0007f0a2) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0008bbc5) single_tv_pg_channel_pane_g

0x1e96,	// (0x0007de1e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1e96,	// (0x0007de1e) bg_single_mobtv_pg_channel_thumb_pane

0x3123,	// (0x0007f0ab) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3123,	// (0x0007f0ab) single_mobtv_pg_channel_thumb_pane_g1

0x3131,	// (0x0007f0b9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3131,	// (0x0007f0b9) single_mobtv_pg_channel_thumb_pane_g2

0x313d,	// (0x0007f0c5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x313d,	// (0x0007f0c5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0008bbca) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0008bbca) single_mobtv_pg_channel_thumb_pane_g

0x3149,	// (0x0007f0d1) single_mobtv_pg_channel_thumb_pane_t1

0x3157,	// (0x0007f0df) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0008bbd1) single_mobtv_pg_channel_thumb_pane_t

0x1c67,	// (0x0007dbef) bg_single_mobtv_pg_channel_table_pane_g1

0x1c67,	// (0x0007dbef) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0008b677) bg_single_mobtv_pg_channel_table_pane_g

0x3165,	// (0x0007f0ed) single_mobtv_pg_channel_table_pane_t1

0x3173,	// (0x0007f0fb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0008bbd6) single_mobtv_pg_channel_table_pane_t

0xc0b5,	// (0x0008803d) main_mobtv_info_pane_g1_ParamLimits

0xc0b5,	// (0x0008803d) main_mobtv_info_pane_g1

0xc0d1,	// (0x00088059) main_mobtv_info_pane_t1_ParamLimits

0xc0d1,	// (0x00088059) main_mobtv_info_pane_t1

0xc137,	// (0x000880bf) main_mobtv_info_pane_t2_ParamLimits

0xc137,	// (0x000880bf) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0008bbe0) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0008bbe0) main_mobtv_info_pane_t

0xc1ba,	// (0x00088142) wait_bar_pane_cp05

0xc1ca,	// (0x00088152) main_mobtv_loading_pane_g1_ParamLimits

0xc1ca,	// (0x00088152) main_mobtv_loading_pane_g1

0xc1d6,	// (0x0008815e) main_mobtv_loading_pane_g2_ParamLimits

0xc1d6,	// (0x0008815e) main_mobtv_loading_pane_g2

0xc1e2,	// (0x0008816a) main_mobtv_loading_pane_g3_ParamLimits

0xc1e2,	// (0x0008816a) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0008bbe7) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0008bbe7) main_mobtv_loading_pane_g

0x3181,	// (0x0007f109) main_mobtv_loading_pane_t1_ParamLimits

0x3181,	// (0x0007f109) main_mobtv_loading_pane_t1

0x3199,	// (0x0007f121) main_mobtv_loading_pane_t2_ParamLimits

0x3199,	// (0x0007f121) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0008bbee) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0008bbee) main_mobtv_loading_pane_t

0xc1ee,	// (0x00088176) wait_bar_pane_cp06_ParamLimits

0xc1ee,	// (0x00088176) wait_bar_pane_cp06

0x31bd,	// (0x0007f145) main_mobtv_programe_curr_pane_t1

0x31cb,	// (0x0007f153) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0008bbf3) main_mobtv_programe_curr_pane_t

0x31d9,	// (0x0007f161) main_mobtv_programe_next_pane_t1

0x31e7,	// (0x0007f16f) main_mobtv_programe_next_pane_t2

0x31f5,	// (0x0007f17d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0008bbf8) main_mobtv_programe_next_pane_t

0xd964,	// (0x000898ec) bg_popup_mobtv_noti_window_pane

0x3203,	// (0x0007f18b) popup_mobtv_noti_window_g1

0x320b,	// (0x0007f193) popup_mobtv_noti_window_t1

0x3219,	// (0x0007f1a1) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0008bbff) popup_mobtv_noti_window_t

0x1c67,	// (0x0007dbef) bg_popup_mobtv_noti_window_pane_g1

0x5bce,	// (0x00081b56) sc_clock_pane

0x5bce,	// (0x00081b56) main_fs_bigclock_pane

0xb840,	// (0x000877c8) blid2_tripm_pane_t4_ParamLimits

0xb840,	// (0x000877c8) blid2_tripm_pane_t4

0xc1fa,	// (0x00088182) sc_clock_pane_g1_ParamLimits

0xc1fa,	// (0x00088182) sc_clock_pane_g1

0xc208,	// (0x00088190) sc_clock_pane_t1_ParamLimits

0xc208,	// (0x00088190) sc_clock_pane_t1

0xc21b,	// (0x000881a3) sc_clock_pane_t2_ParamLimits

0xc21b,	// (0x000881a3) sc_clock_pane_t2

0xc22d,	// (0x000881b5) sc_clock_pane_t3_ParamLimits

0xc22d,	// (0x000881b5) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0008bc04) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0008bc04) sc_clock_pane_t

0xcfec,	// (0x00088f74) main_fs_bigclock_indicator_pane_ParamLimits

0xcfec,	// (0x00088f74) main_fs_bigclock_indicator_pane

0xc2a2,	// (0x0008822a) main_fs_bigclock_pane_g1_ParamLimits

0xc2a2,	// (0x0008822a) main_fs_bigclock_pane_g1

0xcff8,	// (0x00088f80) main_fs_bigclock_pane_t1_ParamLimits

0xcff8,	// (0x00088f80) main_fs_bigclock_pane_t1

0xd00a,	// (0x00088f92) main_fs_bigclock_pane_t2_ParamLimits

0xd00a,	// (0x00088f92) main_fs_bigclock_pane_t2

0xd01c,	// (0x00088fa4) main_fs_bigclock_pane_t3_ParamLimits

0xd01c,	// (0x00088fa4) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0008be0e) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0008be0e) main_fs_bigclock_pane_t

0x3e22,	// (0x0007fdaa) main_fs_bigclock_indicator_pane_g1

0x2f2b,	// (0x0007eeb3) ncim_query_content_pane_g2_ParamLimits

0x2f2b,	// (0x0007eeb3) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0008bb91) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0008bb91) ncim_query_content_pane_g

0xc23f,	// (0x000881c7) sc_clock_pane_t4_ParamLimits

0xc23f,	// (0x000881c7) sc_clock_pane_t4

0x8788,	// (0x00084710) main_radioblah_pane

0x480e,	// (0x00080796) cell_call4_button_pane_t1_copy1_ParamLimits

0x480e,	// (0x00080796) cell_call4_button_pane_t1_copy1

0xbeab,	// (0x00087e33) main_ncimui_pane_t1_ParamLimits

0xbeab,	// (0x00087e33) main_ncimui_pane_t1

0xbec5,	// (0x00087e4d) main_ncimui_pane_t2_ParamLimits

0xbec5,	// (0x00087e4d) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0008bb8a) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0008bb8a) main_ncimui_pane_t

0x335a,	// (0x0007f2e2) main_radioblah_anim_pane_ParamLimits

0x335a,	// (0x0007f2e2) main_radioblah_anim_pane

0x336b,	// (0x0007f2f3) main_radioblah_info_pane_ParamLimits

0x336b,	// (0x0007f2f3) main_radioblah_info_pane

0x337f,	// (0x0007f307) main_radioblah_pane_t1_ParamLimits

0x337f,	// (0x0007f307) main_radioblah_pane_t1

0x339b,	// (0x0007f323) main_radioblah_pane_t2_ParamLimits

0x339b,	// (0x0007f323) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0008bc25) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0008bc25) main_radioblah_pane_t

0xc2ec,	// (0x00088274) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc2ec,	// (0x00088274) main_radioblah_rocker_ctrl_pane

0x33e3,	// (0x0007f36b) main_radioblah_info_pane_t1_ParamLimits

0x33e3,	// (0x0007f36b) main_radioblah_info_pane_t1

0xc331,	// (0x000882b9) main_radioblah_info_pane_t2_ParamLimits

0xc331,	// (0x000882b9) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0008bc2e) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0008bc2e) main_radioblah_info_pane_t

0x1c67,	// (0x0007dbef) main_radioblah_rocker_ctrl_pane_g1

0xc3d9,	// (0x00088361) main_radioblah_rocker_ctrl_pane_g2

0xc3e1,	// (0x00088369) main_radioblah_rocker_ctrl_pane_g3

0xc3e9,	// (0x00088371) main_radioblah_rocker_ctrl_pane_g4

0xc3f1,	// (0x00088379) main_radioblah_rocker_ctrl_pane_g5

0xc3f9,	// (0x00088381) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0008bc37) main_radioblah_rocker_ctrl_pane_g

0x4128,	// (0x000800b0) main_cset_text2_pane_t1_copy1_ParamLimits

0xa4fa,	// (0x00086482) cam4_image_uncrop_qvga_pane

0xa645,	// (0x000865cd) vid4_image_uncrop_qcif_pane

0xb9be,	// (0x00087946) cam6_image_uncrop_qvga_pane_ParamLimits

0xb9be,	// (0x00087946) cam6_image_uncrop_qvga_pane

0x2c34,	// (0x0007ebbc) vid6_image_uncrop_qcif_pane_ParamLimits

0x2c34,	// (0x0007ebbc) vid6_image_uncrop_qcif_pane

0xd964,	// (0x000898ec) bg_popup_preview_window_pane_cp03

0x2edd,	// (0x0007ee65) list_cset_text2_pane

0x2ee5,	// (0x0007ee6d) main_cset6_text2_pane_g1

0x2eed,	// (0x0007ee75) main_cset6_text2_pane_t1

0xc401,	// (0x00088389) list_cset_text2_pane_t1_ParamLimits

0xc401,	// (0x00088389) list_cset_text2_pane_t1

0x8788,	// (0x00084710) main_radioblah_pane_ParamLimits

0xc1a8,	// (0x00088130) main_mobtv_info_pane_t3_ParamLimits

0xc1a8,	// (0x00088130) main_mobtv_info_pane_t3

0xc2da,	// (0x00088262) main_radioblah_pane_g1

0xc305,	// (0x0008828d) main_radioblah_info_pane_g1

0xc380,	// (0x00088308) main_radioblah_info_pane_t3_ParamLimits

0xc380,	// (0x00088308) main_radioblah_info_pane_t3

0x7601,	// (0x00083589) highlight_cell_cale_month_pane_ParamLimits

0x7601,	// (0x00083589) highlight_cell_cale_month_pane

0x5bce,	// (0x00081b56) main_phob_fisheye_pane

0x1f8d,	// (0x0007df15) scroll_pane_cp0031_ParamLimits

0x1f8d,	// (0x0007df15) scroll_pane_cp0031

0x2d3e,	// (0x0007ecc6) wait_bar_pane_cp08_ParamLimits

0xbb88,	// (0x00087b10) cset_list_set_pane_copy1_ParamLimits

0x3434,	// (0x0007f3bc) highlight_cell_cale_month_pane_g1

0xc416,	// (0x0008839e) highlight_cell_cale_month_pane_t1

0x29ad,	// (0x0007e935) list_gen_pane_cp01

0x2535,	// (0x0007e4bd) scroll_pane_01

0xc424,	// (0x000883ac) list_single_double_fisheye_pane

0xc42d,	// (0x000883b5) list_double_fisheye_pane_g1_ParamLimits

0xc42d,	// (0x000883b5) list_double_fisheye_pane_g1

0xc439,	// (0x000883c1) list_double_fisheye_pane_g2_ParamLimits

0xc439,	// (0x000883c1) list_double_fisheye_pane_g2

0xc44d,	// (0x000883d5) list_double_fisheye_pane_g3_ParamLimits

0xc44d,	// (0x000883d5) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0008bc44) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0008bc44) list_double_fisheye_pane_g

0xc476,	// (0x000883fe) list_double_fisheye_pane_t1_ParamLimits

0xc476,	// (0x000883fe) list_double_fisheye_pane_t1

0xc491,	// (0x00088419) list_double_fisheye_pane_t2_ParamLimits

0xc491,	// (0x00088419) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0008bc4f) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0008bc4f) list_double_fisheye_pane_t

0x5bce,	// (0x00081b56) main_call5_pane

0xc265,	// (0x000881ed) sc_swipe_pane_ParamLimits

0xc265,	// (0x000881ed) sc_swipe_pane

0xc4bf,	// (0x00088447) call5_image_pane_ParamLimits

0xc4bf,	// (0x00088447) call5_image_pane

0xc4cb,	// (0x00088453) call5_swipe_1_pane_ParamLimits

0xc4cb,	// (0x00088453) call5_swipe_1_pane

0xc4d7,	// (0x0008845f) call5_swipe_2_pane_ParamLimits

0xc4d7,	// (0x0008845f) call5_swipe_2_pane

0xc4ef,	// (0x00088477) popup_call5_audio_first_window_ParamLimits

0xc4ef,	// (0x00088477) popup_call5_audio_first_window

0x1e96,	// (0x0007de1e) call5_swipe_1_pane_g1_ParamLimits

0x1e96,	// (0x0007de1e) call5_swipe_1_pane_g1

0x343c,	// (0x0007f3c4) call5_swipe_1_pane_g2_ParamLimits

0x343c,	// (0x0007f3c4) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0008bc54) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0008bc54) call5_swipe_1_pane_g

0x3448,	// (0x0007f3d0) call5_swipe_1_pane_t1_ParamLimits

0x3448,	// (0x0007f3d0) call5_swipe_1_pane_t1

0x1e96,	// (0x0007de1e) call5_swipe_2_pane_g1_ParamLimits

0x1e96,	// (0x0007de1e) call5_swipe_2_pane_g1

0x345d,	// (0x0007f3e5) call5_swipe_2_pane_g2_ParamLimits

0x345d,	// (0x0007f3e5) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0008bc59) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0008bc59) call5_swipe_2_pane_g

0x3469,	// (0x0007f3f1) call5_swipe_2_pane_t1_ParamLimits

0x3469,	// (0x0007f3f1) call5_swipe_2_pane_t1

0x347e,	// (0x0007f406) sc_swipe_pane_g1_ParamLimits

0x347e,	// (0x0007f406) sc_swipe_pane_g1

0x348b,	// (0x0007f413) sc_swipe_pane_g2_ParamLimits

0x348b,	// (0x0007f413) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0008bc5e) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0008bc5e) sc_swipe_pane_g

0x3497,	// (0x0007f41f) sc_swipe_pane_t1_ParamLimits

0x3497,	// (0x0007f41f) sc_swipe_pane_t1

0x5bce,	// (0x00081b56) main_cmail_launcher_pane

0xc4fb,	// (0x00088483) aid_size_cell_cmail_l_ParamLimits

0xc4fb,	// (0x00088483) aid_size_cell_cmail_l

0xc50b,	// (0x00088493) grid_cmail_l_pane_ParamLimits

0xc50b,	// (0x00088493) grid_cmail_l_pane

0xc517,	// (0x0008849f) cell_cmail_l_pane_ParamLimits

0xc517,	// (0x0008849f) cell_cmail_l_pane

0xc529,	// (0x000884b1) cell_cmail_l_pane_g1_ParamLimits

0xc529,	// (0x000884b1) cell_cmail_l_pane_g1

0xc53a,	// (0x000884c2) cell_cmail_l_pane_t1_ParamLimits

0xc53a,	// (0x000884c2) cell_cmail_l_pane_t1

0x34ac,	// (0x0007f434) cell_cmail_l_pane_t2_ParamLimits

0x34ac,	// (0x0007f434) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0008bc63) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0008bc63) cell_cmail_l_pane_t

0x062b,	// (0x0007c5b3) grid_highlight_pane_cp018_ParamLimits

0x062b,	// (0x0007c5b3) grid_highlight_pane_cp018

0x5a36,	// (0x000819be) main2_pane_ParamLimits

0x5a36,	// (0x000819be) main2_pane

0xe18a,	// (0x0008a112) popup_sp_fs_action_menu_bg_pane_g1

0xe192,	// (0x0008a11a) popup_sp_fs_action_menu_bg_pane_g2

0xe19a,	// (0x0008a122) popup_sp_fs_action_menu_bg_pane_g3

0xe1a2,	// (0x0008a12a) popup_sp_fs_action_menu_bg_pane_g4

0xe1aa,	// (0x0008a132) popup_sp_fs_action_menu_bg_pane_g5

0xe1b2,	// (0x0008a13a) popup_sp_fs_action_menu_bg_pane_g6

0xe1ba,	// (0x0008a142) popup_sp_fs_action_menu_bg_pane_g7

0xe1c2,	// (0x0008a14a) popup_sp_fs_action_menu_bg_pane_g8

0xe1ca,	// (0x0008a152) popup_sp_fs_action_menu_bg_pane_g9

0xe1d2,	// (0x0008a15a) popup_sp_fs_action_menu_bg_pane_g10

0xe1d2,	// (0x0008a15a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008b112) popup_sp_fs_action_menu_bg_pane_g

0x69fb,	// (0x00082983) list_medium_line_x2_t3_g3_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t3_g3_g1

0x6a07,	// (0x0008298f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x2_t3_g3_g2

0x6a13,	// (0x0008299b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008b1c0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008b1c0) list_medium_line_x2_t3_g3_g

0x6a1f,	// (0x000829a7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x6a1f,	// (0x000829a7) list_medium_line_x2_t3_g3_t1

0x6a34,	// (0x000829bc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6a34,	// (0x000829bc) list_medium_line_x2_t3_g3_t2

0x6a46,	// (0x000829ce) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008b1c7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008b1c7) list_medium_line_x2_t3_g3_t

0x69fb,	// (0x00082983) list_medium_line_x2_t3_g2_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t3_g2_g1

0x6a13,	// (0x0008299b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008b1ce) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008b1ce) list_medium_line_x2_t3_g2_g

0x6a5b,	// (0x000829e3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6a5b,	// (0x000829e3) list_medium_line_x2_t3_g2_t1

0x6a71,	// (0x000829f9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6a71,	// (0x000829f9) list_medium_line_x2_t3_g2_t2

0x6a83,	// (0x00082a0b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6a83,	// (0x00082a0b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008b1d3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008b1d3) list_medium_line_x2_t3_g2_t

0x69fb,	// (0x00082983) list_medium_line_x2_t4_g4_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t4_g4_g1

0x6aa0,	// (0x00082a28) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6aa0,	// (0x00082a28) list_medium_line_x2_t4_g4_g2

0x6a07,	// (0x0008298f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x2_t4_g4_g3

0x6aac,	// (0x00082a34) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6aac,	// (0x00082a34) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008b1da) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008b1da) list_medium_line_x2_t4_g4_g

0x6ab8,	// (0x00082a40) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6ab8,	// (0x00082a40) list_medium_line_x2_t4_g4_t1

0x6ad2,	// (0x00082a5a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6ad2,	// (0x00082a5a) list_medium_line_x2_t4_g4_t2

0x6ae8,	// (0x00082a70) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6ae8,	// (0x00082a70) list_medium_line_x2_t4_g4_t3

0x6afd,	// (0x00082a85) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6afd,	// (0x00082a85) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008b1e3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008b1e3) list_medium_line_x2_t4_g4_t

0x69fb,	// (0x00082983) list_medium_line_x2_t2_g4_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t2_g4_g1

0x6aa0,	// (0x00082a28) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6aa0,	// (0x00082a28) list_medium_line_x2_t2_g4_g2

0x6a07,	// (0x0008298f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x2_t2_g4_g3

0x6a13,	// (0x0008299b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008b24a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008b24a) list_medium_line_x2_t2_g4_g

0x7627,	// (0x000835af) list_medium_line_x2_t2_g4_t1_ParamLimits

0x7627,	// (0x000835af) list_medium_line_x2_t2_g4_t1

0x6a46,	// (0x000829ce) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008b253) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008b253) list_medium_line_x2_t2_g4_t

0x69fb,	// (0x00082983) list_medium_line_x2_t2_g3_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t2_g3_g1

0x6a07,	// (0x0008298f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x2_t2_g3_g2

0x6a13,	// (0x0008299b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008b1c0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008b1c0) list_medium_line_x2_t2_g3_g

0x763c,	// (0x000835c4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x763c,	// (0x000835c4) list_medium_line_x2_t2_g3_t1

0x6a46,	// (0x000829ce) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008b258) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008b258) list_medium_line_x2_t2_g3_t

0x7796,	// (0x0008371e) main_sp_fs_list_pane_ParamLimits

0x7796,	// (0x0008371e) main_sp_fs_list_pane

0x77a2,	// (0x0008372a) sp_fs_scroll_pane_ParamLimits

0x77a2,	// (0x0008372a) sp_fs_scroll_pane

0x77ae,	// (0x00083736) list_medium_line_x2_t3_t1

0x77be,	// (0x00083746) list_medium_line_x2_t3_t2

0x77cc,	// (0x00083754) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008b2a3) list_medium_line_x2_t3_t

0x77da,	// (0x00083762) list_medium_line_x3_t4_t1

0x77ea,	// (0x00083772) list_medium_line_x3_t4_t2

0x77f8,	// (0x00083780) list_medium_line_x3_t4_t3

0x77cc,	// (0x00083754) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008b2aa) list_medium_line_x3_t4_t

0x7806,	// (0x0008378e) list_medium_line_x4_t5_t1

0x7816,	// (0x0008379e) list_medium_line_x4_t5_t2

0x77f8,	// (0x00083780) list_medium_line_x4_t5_t3

0x7824,	// (0x000837ac) list_medium_line_x4_t5_t4

0x77cc,	// (0x00083754) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008b2b3) list_medium_line_x4_t5_t

0x69fb,	// (0x00082983) list_medium_line_t4_g4_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_t4_g4_g1

0x6aac,	// (0x00082a34) list_medium_line_t4_g4_g2_ParamLimits

0x6aac,	// (0x00082a34) list_medium_line_t4_g4_g2

0x7832,	// (0x000837ba) list_medium_line_t4_g4_g3_ParamLimits

0x7832,	// (0x000837ba) list_medium_line_t4_g4_g3

0x6a13,	// (0x0008299b) list_medium_line_t4_g4_g4_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008b2be) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008b2be) list_medium_line_t4_g4_g

0x783e,	// (0x000837c6) list_medium_line_t4_g4_t1_ParamLimits

0x783e,	// (0x000837c6) list_medium_line_t4_g4_t1

0x7853,	// (0x000837db) list_medium_line_t4_g4_t2_ParamLimits

0x7853,	// (0x000837db) list_medium_line_t4_g4_t2

0x7868,	// (0x000837f0) list_medium_line_t4_g4_t3_ParamLimits

0x7868,	// (0x000837f0) list_medium_line_t4_g4_t3

0x6a46,	// (0x000829ce) list_medium_line_t4_g4_t4_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008b2c7) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008b2c7) list_medium_line_t4_g4_t

0x799b,	// (0x00083923) chi_dic_find_pane_g1

0x87a4,	// (0x0008472c) main_tport_pane

0xaf48,	// (0x00086ed0) list_medium_line_plain_t1

0xb026,	// (0x00086fae) list_medium_line_t2_g2_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_t2_g2_g1

0xb032,	// (0x00086fba) list_medium_line_t2_g2_g2_ParamLimits

0xb032,	// (0x00086fba) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0008b99b) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0008b99b) list_medium_line_t2_g2_g

0xb03e,	// (0x00086fc6) list_medium_line_t2_g2_t1_ParamLimits

0xb03e,	// (0x00086fc6) list_medium_line_t2_g2_t1

0xb058,	// (0x00086fe0) list_medium_line_t2_g2_t2_ParamLimits

0xb058,	// (0x00086fe0) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0008b9a0) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0008b9a0) list_medium_line_t2_g2_t

0x29b6,	// (0x0007e93e) aid_sp_fs_list_icon_a_sm

0x4726,	// (0x000806ae) aid_sp_fs_list_icon_d

0x29be,	// (0x0007e946) aid_sp_fs_text_primary

0x29c7,	// (0x0007e94f) aid_sp_fs_text_secondary

0xb69e,	// (0x00087626) list_medium_line

0xb69e,	// (0x00087626) list_medium_line_g2

0xb69e,	// (0x00087626) list_medium_line_g3

0xb69e,	// (0x00087626) list_medium_line_plain

0xb69e,	// (0x00087626) list_medium_line_plain_t2

0xb69e,	// (0x00087626) list_medium_line_plain_t3

0xb69e,	// (0x00087626) list_medium_line_right_icon

0xb69e,	// (0x00087626) list_medium_line_right_iconx2

0xb69e,	// (0x00087626) list_medium_line_t2

0xb69e,	// (0x00087626) list_medium_line_t2_g2

0xb69e,	// (0x00087626) list_medium_line_t2_g3

0xb69e,	// (0x00087626) list_medium_line_t2_right_icon

0xb69e,	// (0x00087626) list_medium_line_t2_right_iconx2

0xb69e,	// (0x00087626) list_medium_line_t3

0xb69e,	// (0x00087626) list_medium_line_t3_g2

0xb69e,	// (0x00087626) list_medium_line_t3_g3

0xb69e,	// (0x00087626) list_medium_line_t3_right_iconx2

0xb6a7,	// (0x0008762f) list_medium_line_t4_g4

0xb6b0,	// (0x00087638) list_medium_line_x2

0xb6b0,	// (0x00087638) list_medium_line_x2_t2_g2

0xb6b0,	// (0x00087638) list_medium_line_x2_t2_g3

0xb6b0,	// (0x00087638) list_medium_line_x2_t2_g4

0xb6b0,	// (0x00087638) list_medium_line_x2_t3

0xb6b0,	// (0x00087638) list_medium_line_x2_t3_g2

0xb6b0,	// (0x00087638) list_medium_line_x2_t3_g3

0xb6b0,	// (0x00087638) list_medium_line_x2_t3_g4

0xb6b0,	// (0x00087638) list_medium_line_x2_t4_g2

0xb6b0,	// (0x00087638) list_medium_line_x2_t4_g4

0xb6b9,	// (0x00087641) list_medium_line_x3

0xb6b9,	// (0x00087641) list_medium_line_x3_t4

0xb6b9,	// (0x00087641) list_medium_line_x3_t4_g4

0xb6a7,	// (0x0008762f) list_medium_line_x4_t4

0xb6a7,	// (0x0008762f) list_medium_line_x4_t4_g7

0xb6a7,	// (0x0008762f) list_medium_line_x4_t5

0xb6c2,	// (0x0008764a) list_single_fs_dyc_pane_ParamLimits

0xb6c2,	// (0x0008764a) list_single_fs_dyc_pane

0x69fb,	// (0x00082983) list_medium_line_x4_t4_g7_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x4_t4_g7_g1

0xbdac,	// (0x00087d34) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbdac,	// (0x00087d34) list_medium_line_x4_t4_g7_g2

0xbdb8,	// (0x00087d40) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbdb8,	// (0x00087d40) list_medium_line_x4_t4_g7_g3

0xbdc7,	// (0x00087d4f) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbdc7,	// (0x00087d4f) list_medium_line_x4_t4_g7_g4

0xbdd3,	// (0x00087d5b) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbdd3,	// (0x00087d5b) list_medium_line_x4_t4_g7_g5

0xbde2,	// (0x00087d6a) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbde2,	// (0x00087d6a) list_medium_line_x4_t4_g7_g6

0xbdf1,	// (0x00087d79) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbdf1,	// (0x00087d79) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0008bb6b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0008bb6b) list_medium_line_x4_t4_g7_g

0xbdfd,	// (0x00087d85) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbdfd,	// (0x00087d85) list_medium_line_x4_t4_g7_t1

0xbe12,	// (0x00087d9a) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbe12,	// (0x00087d9a) list_medium_line_x4_t4_g7_t2

0xbe27,	// (0x00087daf) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbe27,	// (0x00087daf) list_medium_line_x4_t4_g7_t3

0xbe3c,	// (0x00087dc4) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbe3c,	// (0x00087dc4) list_medium_line_x4_t4_g7_t4

0xbe4e,	// (0x00087dd6) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbe4e,	// (0x00087dd6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0008bb7a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0008bb7a) list_medium_line_x4_t4_g7_t

0xbe60,	// (0x00087de8) list_single_dyc_row_pane_ParamLimits

0xbe60,	// (0x00087de8) list_single_dyc_row_pane

0xc4b3,	// (0x0008843b) call5_gesture_pane_ParamLimits

0xc4b3,	// (0x0008843b) call5_gesture_pane

0xc4e3,	// (0x0008846b) call5_windows_pane_ParamLimits

0xc4e3,	// (0x0008846b) call5_windows_pane

0xc550,	// (0x000884d8) call5_swipe_1_pane_cp_ParamLimits

0xc550,	// (0x000884d8) call5_swipe_1_pane_cp

0xc55c,	// (0x000884e4) call5_swipe_2_pane_cp_ParamLimits

0xc55c,	// (0x000884e4) call5_swipe_2_pane_cp

0xe290,	// (0x0008a218) call5_image_pane_cp

0xc568,	// (0x000884f0) popup_call5_audio_first_window_cp_ParamLimits

0xc568,	// (0x000884f0) popup_call5_audio_first_window_cp

0x347e,	// (0x0007f406) call5_swipe_1_pane_g1_cp_ParamLimits

0x347e,	// (0x0007f406) call5_swipe_1_pane_g1_cp

0x34be,	// (0x0007f446) call5_swipe_1_pane_g2_cp

0x3497,	// (0x0007f41f) call5_swipe_1_pane_t1_cp_ParamLimits

0x3497,	// (0x0007f41f) call5_swipe_1_pane_t1_cp

0x347e,	// (0x0007f406) call5_swipe_2_pane_g1_cp_ParamLimits

0x347e,	// (0x0007f406) call5_swipe_2_pane_g1_cp

0x34c6,	// (0x0007f44e) call5_swipe_2_pane_g2_cp

0x34ce,	// (0x0007f456) call5_swipe_2_pane_t1_cp_ParamLimits

0x34ce,	// (0x0007f456) call5_swipe_2_pane_t1_cp

0x062b,	// (0x0007c5b3) main_sp_fs_email_pane

0x34e3,	// (0x0007f46b) main_sp_fs_listscroll_pane_te

0xc574,	// (0x000884fc) popup_sp_fs_action_menu_pane_ParamLimits

0xc574,	// (0x000884fc) popup_sp_fs_action_menu_pane

0x1c67,	// (0x0007dbef) bg_sp_fs_ctrlbar_pane_g1

0x1f3e,	// (0x0007dec6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1f50,	// (0x0007ded8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1f47,	// (0x0007decf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c67,	// (0x0007dbef) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0008bc68) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1a54,	// (0x0007d9dc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1a54,	// (0x0007d9dc) bg_sp_fs_ctrlbar_ddmenu_pane

0x34ec,	// (0x0007f474) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x34ec,	// (0x0007f474) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x34f8,	// (0x0007f480) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x34f8,	// (0x0007f480) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0008bc71) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0008bc71) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3504,	// (0x0007f48c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3504,	// (0x0007f48c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc5a8,	// (0x00088530) list_medium_line_t2_right_icon_g1

0xc5b0,	// (0x00088538) list_medium_line_t2_right_icon_t1

0xc5bf,	// (0x00088547) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0008bc76) list_medium_line_t2_right_icon_t

0x17d2,	// (0x0007d75a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x17d2,	// (0x0007d75a) bg_sp_fs_ctrlbar_pane

0xc622,	// (0x000885aa) main_sp_fs_ctrlbar_button_pane_cp01

0xc62a,	// (0x000885b2) main_sp_fs_ctrlbar_ddmenu_pane

0x3556,	// (0x0007f4de) main_sp_fs_ctrlbar_pane_g1

0x3562,	// (0x0007f4ea) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0008bc7b) main_sp_fs_ctrlbar_pane_g

0x356e,	// (0x0007f4f6) main_sp_fs_ctrlbar_pane_t1

0xc634,	// (0x000885bc) main_sp_fs_ctrlbar_pane

0xc64a,	// (0x000885d2) main_sp_fs_listscroll_pane_te_cp01

0xc65b,	// (0x000885e3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc65b,	// (0x000885e3) popup_sp_fs_action_menu_pane_cp01

0x062b,	// (0x0007c5b3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x062b,	// (0x0007c5b3) bg_sp_fs_highlight_list_pane_cp01

0x359e,	// (0x0007f526) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x359e,	// (0x0007f526) sp_fs_action_menu_list_gene_pane_g1

0x35ad,	// (0x0007f535) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x35ad,	// (0x0007f535) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0008bc85) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0008bc85) sp_fs_action_menu_list_gene_pane_g

0x35ba,	// (0x0007f542) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x35ba,	// (0x0007f542) sp_fs_action_menu_list_gene_pane_t1

0x35d2,	// (0x0007f55a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x35d2,	// (0x0007f55a) sp_fs_action_menu_list_gene_pane

0x35f1,	// (0x0007f579) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x35f1,	// (0x0007f579) popup_sp_fs_action_menu_bg_pane

0x35ff,	// (0x0007f587) sp_fs_action_menu_list_pane_ParamLimits

0x35ff,	// (0x0007f587) sp_fs_action_menu_list_pane

0xc681,	// (0x00088609) sp_fs_scroll_pane_cp01_ParamLimits

0xc681,	// (0x00088609) sp_fs_scroll_pane_cp01

0xc6a7,	// (0x0008862f) list_medium_line_plain_t2_t1

0xc6b6,	// (0x0008863e) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0008bc8a) list_medium_line_plain_t2_t

0xc6c4,	// (0x0008864c) list_medium_line_plain_t3_t1

0xc6d4,	// (0x0008865c) list_medium_line_plain_t3_t2

0xc6e2,	// (0x0008866a) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0008bc8f) list_medium_line_plain_t3_t

0x69fb,	// (0x00082983) list_medium_line_x2_t2_g2_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t2_g2_g1

0x6a13,	// (0x0008299b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008b1ce) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008b1ce) list_medium_line_x2_t2_g2_g

0x783e,	// (0x000837c6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x783e,	// (0x000837c6) list_medium_line_x2_t2_g2_t1

0x6a46,	// (0x000829ce) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0008bc96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0008bc96) list_medium_line_x2_t2_g2_t

0x69fb,	// (0x00082983) list_medium_line_x2_t4_g2_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t4_g2_g1

0xc6f0,	// (0x00088678) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc6f0,	// (0x00088678) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0008bc9b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0008bc9b) list_medium_line_x2_t4_g2_g

0xc701,	// (0x00088689) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc701,	// (0x00088689) list_medium_line_x2_t4_g2_t1

0xc71b,	// (0x000886a3) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc71b,	// (0x000886a3) list_medium_line_x2_t4_g2_t2

0xc731,	// (0x000886b9) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc731,	// (0x000886b9) list_medium_line_x2_t4_g2_t3

0x6a46,	// (0x000829ce) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0008bca0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0008bca0) list_medium_line_x2_t4_g2_t

0xc746,	// (0x000886ce) list_medium_line_t3_right_iconx2_g1

0xc5a8,	// (0x00088530) list_medium_line_t3_right_iconx2_g2

0xc74e,	// (0x000886d6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0008bca9) list_medium_line_t3_right_iconx2_g

0xc756,	// (0x000886de) list_medium_line_t3_right_iconx2_t1

0xc766,	// (0x000886ee) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0008bcb0) list_medium_line_t3_right_iconx2_t

0x69fb,	// (0x00082983) list_medium_line_x3_t4_g4_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x3_t4_g4_g1

0x6a07,	// (0x0008298f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x3_t4_g4_g2

0x6aac,	// (0x00082a34) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6aac,	// (0x00082a34) list_medium_line_x3_t4_g4_g3

0xc774,	// (0x000886fc) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc774,	// (0x000886fc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0008bcb5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0008bcb5) list_medium_line_x3_t4_g4_g

0xc780,	// (0x00088708) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc780,	// (0x00088708) list_medium_line_x3_t4_g4_t1

0xc797,	// (0x0008871f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc797,	// (0x0008871f) list_medium_line_x3_t4_g4_t2

0x7853,	// (0x000837db) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7853,	// (0x000837db) list_medium_line_x3_t4_g4_t3

0xc7ac,	// (0x00088734) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc7ac,	// (0x00088734) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0008bcbe) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0008bcbe) list_medium_line_x3_t4_g4_t

0xc7c9,	// (0x00088751) list_single_dyc_row_text_pane_t1_ParamLimits

0xc7c9,	// (0x00088751) list_single_dyc_row_text_pane_t1

0xc800,	// (0x00088788) list_single_dyc_row_text_pane_t2_ParamLimits

0xc800,	// (0x00088788) list_single_dyc_row_text_pane_t2

0x3645,	// (0x0007f5cd) list_single_dyc_row_text_pane_t3_ParamLimits

0x3645,	// (0x0007f5cd) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0008bcc7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0008bcc7) list_single_dyc_row_text_pane_t

0x3669,	// (0x0007f5f1) list_single_dyc_row_pane_g1_ParamLimits

0x3669,	// (0x0007f5f1) list_single_dyc_row_pane_g1

0x3675,	// (0x0007f5fd) list_single_dyc_row_pane_g2_ParamLimits

0x3675,	// (0x0007f5fd) list_single_dyc_row_pane_g2

0x3681,	// (0x0007f609) list_single_dyc_row_pane_g3_ParamLimits

0x3681,	// (0x0007f609) list_single_dyc_row_pane_g3

0x368d,	// (0x0007f615) list_single_dyc_row_pane_g4_ParamLimits

0x368d,	// (0x0007f615) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0008bcd4) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0008bcd4) list_single_dyc_row_pane_g

0x3699,	// (0x0007f621) list_single_dyc_row_text_pane_ParamLimits

0x3699,	// (0x0007f621) list_single_dyc_row_text_pane

0xd964,	// (0x000898ec) bg_sp_fs_scroll_pane

0x36b8,	// (0x0007f640) thumb_sp_fs_scroll_pane

0xb026,	// (0x00086fae) list_medium_line_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_g1

0xc91e,	// (0x000888a6) list_medium_line_t1_ParamLimits

0xc91e,	// (0x000888a6) list_medium_line_t1

0x69fb,	// (0x00082983) list_medium_line_x2_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_g1

0x6a07,	// (0x0008298f) list_medium_line_x2_g2_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0008bcdd) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0008bcdd) list_medium_line_x2_g

0x36c1,	// (0x0007f649) list_medium_line_x2_t1_ParamLimits

0x36c1,	// (0x0007f649) list_medium_line_x2_t1

0x69fb,	// (0x00082983) list_medium_line_x3_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x3_g1

0x6a07,	// (0x0008298f) list_medium_line_x3_g2_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0008bcdd) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0008bcdd) list_medium_line_x3_g

0x36c1,	// (0x0007f649) list_medium_line_x3_t1_ParamLimits

0x36c1,	// (0x0007f649) list_medium_line_x3_t1

0x36d7,	// (0x0007f65f) thumb_sp_fs_scroll_pane_g1

0x36e0,	// (0x0007f668) thumb_sp_fs_scroll_pane_g2

0x36e9,	// (0x0007f671) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0008bce2) thumb_sp_fs_scroll_pane_g

0x36d7,	// (0x0007f65f) bg_sp_fs_scroll_pane_g1

0x36e0,	// (0x0007f668) bg_sp_fs_scroll_pane_g2

0x36e9,	// (0x0007f671) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0008bce2) bg_sp_fs_scroll_pane_g

0x69fb,	// (0x00082983) list_medium_line_x2_t3_g4_g1_ParamLimits

0x69fb,	// (0x00082983) list_medium_line_x2_t3_g4_g1

0x6aa0,	// (0x00082a28) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6aa0,	// (0x00082a28) list_medium_line_x2_t3_g4_g2

0x6a07,	// (0x0008298f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6a07,	// (0x0008298f) list_medium_line_x2_t3_g4_g3

0x6a13,	// (0x0008299b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6a13,	// (0x0008299b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008b24a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008b24a) list_medium_line_x2_t3_g4_g

0xc933,	// (0x000888bb) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc933,	// (0x000888bb) list_medium_line_x2_t3_g4_t1

0xc949,	// (0x000888d1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc949,	// (0x000888d1) list_medium_line_x2_t3_g4_t2

0x6a46,	// (0x000829ce) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6a46,	// (0x000829ce) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0008bce9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0008bce9) list_medium_line_x2_t3_g4_t

0xb026,	// (0x00086fae) list_medium_line_g2_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_g2_g1

0xb032,	// (0x00086fba) list_medium_line_g2_g2_ParamLimits

0xb032,	// (0x00086fba) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0008b99b) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0008b99b) list_medium_line_g2_g

0xc963,	// (0x000888eb) list_medium_line_g2_t1_ParamLimits

0xc963,	// (0x000888eb) list_medium_line_g2_t1

0xb026,	// (0x00086fae) list_medium_line_t3_g2_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_t3_g2_g1

0xb032,	// (0x00086fba) list_medium_line_t3_g2_g2_ParamLimits

0xb032,	// (0x00086fba) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0008b99b) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0008b99b) list_medium_line_t3_g2_g

0xc978,	// (0x00088900) list_medium_line_t3_g2_t1_ParamLimits

0xc978,	// (0x00088900) list_medium_line_t3_g2_t1

0xc992,	// (0x0008891a) list_medium_line_t3_g2_t2_ParamLimits

0xc992,	// (0x0008891a) list_medium_line_t3_g2_t2

0xc9a8,	// (0x00088930) list_medium_line_t3_g2_t3_ParamLimits

0xc9a8,	// (0x00088930) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0008bcf0) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0008bcf0) list_medium_line_t3_g2_t

0xc5a8,	// (0x00088530) list_medium_line_right_icon_g1

0xc9be,	// (0x00088946) list_medium_line_right_icon_t1

0xb026,	// (0x00086fae) list_medium_line_t2_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_t2_g1

0xc9cc,	// (0x00088954) list_medium_line_t2_t1_ParamLimits

0xc9cc,	// (0x00088954) list_medium_line_t2_t1

0xc9e5,	// (0x0008896d) list_medium_line_t2_t2_ParamLimits

0xc9e5,	// (0x0008896d) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0008bcf7) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0008bcf7) list_medium_line_t2_t

0xb026,	// (0x00086fae) list_medium_line_t3_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_t3_g1

0xc9fa,	// (0x00088982) list_medium_line_t3_t1_ParamLimits

0xc9fa,	// (0x00088982) list_medium_line_t3_t1

0xca14,	// (0x0008899c) list_medium_line_t3_t2_ParamLimits

0xca14,	// (0x0008899c) list_medium_line_t3_t2

0xca2a,	// (0x000889b2) list_medium_line_t3_t3_ParamLimits

0xca2a,	// (0x000889b2) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0008bcfc) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0008bcfc) list_medium_line_t3_t

0xb026,	// (0x00086fae) list_medium_line_g3_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_g3_g1

0xca3f,	// (0x000889c7) list_medium_line_g3_g2_ParamLimits

0xca3f,	// (0x000889c7) list_medium_line_g3_g2

0xb032,	// (0x00086fba) list_medium_line_g3_g3_ParamLimits

0xb032,	// (0x00086fba) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0008bd03) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0008bd03) list_medium_line_g3_g

0xca4b,	// (0x000889d3) list_medium_line_g3_t1_ParamLimits

0xca4b,	// (0x000889d3) list_medium_line_g3_t1

0xb026,	// (0x00086fae) list_medium_line_t2_g3_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_t2_g3_g1

0xca3f,	// (0x000889c7) list_medium_line_t2_g3_g2_ParamLimits

0xca3f,	// (0x000889c7) list_medium_line_t2_g3_g2

0xb032,	// (0x00086fba) list_medium_line_t2_g3_g3_ParamLimits

0xb032,	// (0x00086fba) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0008bd03) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0008bd03) list_medium_line_t2_g3_g

0xca60,	// (0x000889e8) list_medium_line_t2_g3_t1_ParamLimits

0xca60,	// (0x000889e8) list_medium_line_t2_g3_t1

0xca7a,	// (0x00088a02) list_medium_line_t2_g3_t2_ParamLimits

0xca7a,	// (0x00088a02) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0008bd0a) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0008bd0a) list_medium_line_t2_g3_t

0xb026,	// (0x00086fae) list_medium_line_t3_g3_g1_ParamLimits

0xb026,	// (0x00086fae) list_medium_line_t3_g3_g1

0xca3f,	// (0x000889c7) list_medium_line_t3_g3_g2_ParamLimits

0xca3f,	// (0x000889c7) list_medium_line_t3_g3_g2

0xb032,	// (0x00086fba) list_medium_line_t3_g3_g3_ParamLimits

0xb032,	// (0x00086fba) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0008bd03) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0008bd03) list_medium_line_t3_g3_g

0xca90,	// (0x00088a18) list_medium_line_t3_g3_t1_ParamLimits

0xca90,	// (0x00088a18) list_medium_line_t3_g3_t1

0xcaa9,	// (0x00088a31) list_medium_line_t3_g3_t2_ParamLimits

0xcaa9,	// (0x00088a31) list_medium_line_t3_g3_t2

0xcabf,	// (0x00088a47) list_medium_line_t3_g3_t3_ParamLimits

0xcabf,	// (0x00088a47) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0008bd0f) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0008bd0f) list_medium_line_t3_g3_t

0xc746,	// (0x000886ce) list_medium_line_right_iconx2_g1

0xc5a8,	// (0x00088530) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0008bd16) list_medium_line_right_iconx2_g

0xcad5,	// (0x00088a5d) list_medium_line_right_iconx2_t1

0xc746,	// (0x000886ce) list_medium_line_t2_right_iconx2_g1

0xc5a8,	// (0x00088530) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0008bd16) list_medium_line_t2_right_iconx2_g

0xcae3,	// (0x00088a6b) list_medium_line_t2_right_iconx2_t1

0xcaf3,	// (0x00088a7b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0008bd1b) list_medium_line_t2_right_iconx2_t

0xcb01,	// (0x00088a89) list_medium_line_x4_t4_t1

0xcb0f,	// (0x00088a97) list_medium_line_x4_t4_t2

0xcb1d,	// (0x00088aa5) list_medium_line_x4_t4_t3

0xcb2b,	// (0x00088ab3) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0008bd20) list_medium_line_x4_t4_t

0xcb5d,	// (0x00088ae5) tport_appsw_pane_ParamLimits

0xcb5d,	// (0x00088ae5) tport_appsw_pane

0xcb69,	// (0x00088af1) tport_contact_pane_ParamLimits

0xcb69,	// (0x00088af1) tport_contact_pane

0xcb77,	// (0x00088aff) tport_listscroll_pane_ParamLimits

0xcb77,	// (0x00088aff) tport_listscroll_pane

0xcb85,	// (0x00088b0d) cell_tport_appsw_pane_ParamLimits

0xcb85,	// (0x00088b0d) cell_tport_appsw_pane

0x1efb,	// (0x0007de83) tport_appsw_pane_g1_ParamLimits

0x1efb,	// (0x0007de83) tport_appsw_pane_g1

0x36f2,	// (0x0007f67a) tport_contact_pane_g1

0x36fb,	// (0x0007f683) tport_contact_pane_t1

0x3709,	// (0x0007f691) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0008bd29) tport_contact_pane_t

0x3717,	// (0x0007f69f) list_tport_pane

0x3720,	// (0x0007f6a8) scroll_pane_cp_030

0x3731,	// (0x0007f6b9) cell_tport_appsw_pane_g1

0x3741,	// (0x0007f6c9) cell_tport_appsw_pane_t1

0x374f,	// (0x0007f6d7) grid_highlight_pane_cp019

0xcbac,	// (0x00088b34) list_tport_double_graphic_pane_ParamLimits

0xcbac,	// (0x00088b34) list_tport_double_graphic_pane

0x062b,	// (0x0007c5b3) list_highlight_pane_cp023_ParamLimits

0x062b,	// (0x0007c5b3) list_highlight_pane_cp023

0xcbb9,	// (0x00088b41) list_tport_double_graphic_pane_g1_ParamLimits

0xcbb9,	// (0x00088b41) list_tport_double_graphic_pane_g1

0xcbc6,	// (0x00088b4e) list_tport_double_graphic_pane_t1_ParamLimits

0xcbc6,	// (0x00088b4e) list_tport_double_graphic_pane_t1

0xcbdb,	// (0x00088b63) list_tport_double_graphic_pane_t2_ParamLimits

0xcbdb,	// (0x00088b63) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0008bd35) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0008bd35) list_tport_double_graphic_pane_t

0xd964,	// (0x000898ec) main_cale_note_pane

0xa85d,	// (0x000867e5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa85d,	// (0x000867e5) cell_vitu2_function_top_wide_pane_cp01

0xc1ba,	// (0x00088142) wait_bar_pane_cp05_ParamLimits

0x062b,	// (0x0007c5b3) listscroll_cmail_pane

0x3757,	// (0x0007f6df) list_cmail_pane

0xcbed,	// (0x00088b75) list_cmail_body_pane

0xcc02,	// (0x00088b8a) list_single_cmail_header_caption_pane

0xcc18,	// (0x00088ba0) list_single_cmail_header_detail_pane_ParamLimits

0xcc18,	// (0x00088ba0) list_single_cmail_header_detail_pane

0x3767,	// (0x0007f6ef) list_single_cmail_header_caption_pane_t1

0xcc3f,	// (0x00088bc7) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc3f,	// (0x00088bc7) list_single_cmail_header_detail_pane_g1

0x473a,	// (0x000806c2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x473a,	// (0x000806c2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0008bd3a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0008bd3a) list_single_cmail_header_detail_pane_g

0x378b,	// (0x0007f713) list_single_cmail_header_detail_pane_t1_ParamLimits

0x378b,	// (0x0007f713) list_single_cmail_header_detail_pane_t1

0x37eb,	// (0x0007f773) list_single_cmail_header_editor_pane_bg_ParamLimits

0x37eb,	// (0x0007f773) list_single_cmail_header_editor_pane_bg

0x3802,	// (0x0007f78a) list_cmail_body_pane_g1

0x380b,	// (0x0007f793) list_cmail_body_pane_t1

0x48cd,	// (0x00080855) list_single_cmail_header_editor_pane_bg_g1

0xe4f6,	// (0x0008a47e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x48dd,	// (0x00080865) list_single_cmail_header_editor_pane_bg_g1_copy2

0x48d5,	// (0x0008085d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x269c,	// (0x0007e624) list_single_cmail_header_editor_pane_bg_g1_copy4

0x48fd,	// (0x00080885) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x48ed,	// (0x00080875) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x48f5,	// (0x0008087d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe4d6,	// (0x0008a45e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc55,	// (0x00088bdd) calenote_gesture_pane_ParamLimits

0xcc55,	// (0x00088bdd) calenote_gesture_pane

0xcc6d,	// (0x00088bf5) calenote_window_pane_ParamLimits

0xcc6d,	// (0x00088bf5) calenote_window_pane

0x3819,	// (0x0007f7a1) popup_note_window_cp01

0xcc85,	// (0x00088c0d) calenote_swipe_1_pane_ParamLimits

0xcc85,	// (0x00088c0d) calenote_swipe_1_pane

0xc55c,	// (0x000884e4) calenote_swipe_2_pane_ParamLimits

0xc55c,	// (0x000884e4) calenote_swipe_2_pane

0x347e,	// (0x0007f406) calenote_swipe_1_pane_g1_ParamLimits

0x347e,	// (0x0007f406) calenote_swipe_1_pane_g1

0x348b,	// (0x0007f413) calenote_swipe_1_pane_g2_ParamLimits

0x348b,	// (0x0007f413) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0008bc5e) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0008bc5e) calenote_swipe_1_pane_g

0x382b,	// (0x0007f7b3) calenote_swipe_1_pane_t1_ParamLimits

0x382b,	// (0x0007f7b3) calenote_swipe_1_pane_t1

0x347e,	// (0x0007f406) calenote_swipe_2_pane_g1_ParamLimits

0x347e,	// (0x0007f406) calenote_swipe_2_pane_g1

0x384a,	// (0x0007f7d2) calenote_swipe_2_pane_g2_ParamLimits

0x384a,	// (0x0007f7d2) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0008bd46) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0008bd46) calenote_swipe_2_pane_g

0x3856,	// (0x0007f7de) calenote_swipe_2_pane_t1_ParamLimits

0x3856,	// (0x0007f7de) calenote_swipe_2_pane_t1

0xd964,	// (0x000898ec) main_mup_navstr_pane

0x96b4,	// (0x0008563c) main_mup3_pane_t7_ParamLimits

0x96b4,	// (0x0008563c) main_mup3_pane_t7

0xa020,	// (0x00085fa8) main_mp4_pane_g6_ParamLimits

0xa020,	// (0x00085fa8) main_mp4_pane_g6

0xa37e,	// (0x00086306) main_image3_pane_t4_ParamLimits

0xa37e,	// (0x00086306) main_image3_pane_t4

0xcc98,	// (0x00088c20) popup_navstr_preview_pane_ParamLimits

0xcc98,	// (0x00088c20) popup_navstr_preview_pane

0xcca4,	// (0x00088c2c) scroll_navstr_pane_ParamLimits

0xcca4,	// (0x00088c2c) scroll_navstr_pane

0xd964,	// (0x000898ec) bg_popup_preview_window_pane_cp04

0x387d,	// (0x0007f805) popup_navstr_preview_pane_t1

0xccb0,	// (0x00088c38) scroll_navstr_pane_g1_ParamLimits

0xccb0,	// (0x00088c38) scroll_navstr_pane_g1

0xccbd,	// (0x00088c45) scroll_navstr_pane_t1_ParamLimits

0xccbd,	// (0x00088c45) scroll_navstr_pane_t1

0x3822,	// (0x0007f7aa) bg_button_pane_cp014

0x3822,	// (0x0007f7aa) bg_button_pane_cp030

0xc459,	// (0x000883e1) list_double_fisheye_pane_g4_ParamLimits

0xc459,	// (0x000883e1) list_double_fisheye_pane_g4

0xc465,	// (0x000883ed) list_double_fisheye_pane_g5_ParamLimits

0xc465,	// (0x000883ed) list_double_fisheye_pane_g5

0x0717,	// (0x0007c69f) sp_fs_scroll_pane_cp03

0x3556,	// (0x0007f4de) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3562,	// (0x0007f4ea) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0008bc7b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x356e,	// (0x0007f4f6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x375f,	// (0x0007f6e7) sp_fs_scroll_pane_cp02

0xe1f5,	// (0x0008a17d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe1f5,	// (0x0008a17d) popup_sp_fs_calendar_preview_list_single_pane

0xd964,	// (0x000898ec) main_cam6_pano_pane

0x8788,	// (0x00084710) main_mup3_pane_ParamLimits

0xd964,	// (0x000898ec) main_phacti_pane

0xc0ad,	// (0x00088035) bg_button_pane_cp11

0xc0c5,	// (0x0008804d) main_mobtv_info_pane_g2_ParamLimits

0xc0c5,	// (0x0008804d) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0008bbdb) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0008bbdb) main_mobtv_info_pane_g

0xc251,	// (0x000881d9) sc_clock_pane_t5_ParamLimits

0xc251,	// (0x000881d9) sc_clock_pane_t5

0xc2da,	// (0x00088262) main_radioblah_pane_g1_ParamLimits

0x33b3,	// (0x0007f33b) main_radioblah_pane_t3_ParamLimits

0x33b3,	// (0x0007f33b) main_radioblah_pane_t3

0x33cb,	// (0x0007f353) main_radioblah_pane_t4_ParamLimits

0x33cb,	// (0x0007f353) main_radioblah_pane_t4

0xc2f8,	// (0x00088280) main_radioblah_text_pane_ParamLimits

0xc2f8,	// (0x00088280) main_radioblah_text_pane

0xc305,	// (0x0008828d) main_radioblah_info_pane_g1_ParamLimits

0xc392,	// (0x0008831a) main_radioblah_info_pane_t4_ParamLimits

0xc392,	// (0x0008831a) main_radioblah_info_pane_t4

0x062b,	// (0x0007c5b3) main_sp_fs_calendar_pane

0xcccf,	// (0x00088c57) main_phacti_pane_g1

0xccd7,	// (0x00088c5f) phacti_note_pane_ParamLimits

0xccd7,	// (0x00088c5f) phacti_note_pane

0x3894,	// (0x0007f81c) phacti_term_pane_ParamLimits

0x3894,	// (0x0007f81c) phacti_term_pane

0x38a9,	// (0x0007f831) phacti_note_pane_t1_ParamLimits

0x38a9,	// (0x0007f831) phacti_note_pane_t1

0x38c0,	// (0x0007f848) phacti_term_pane_g1

0x38c8,	// (0x0007f850) phacti_term_pane_t1_ParamLimits

0x38c8,	// (0x0007f850) phacti_term_pane_t1

0x38f2,	// (0x0007f87a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x38fa,	// (0x0007f882) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0008bd50) popup_sp_fs_calendar_preview_list_single_pane_g

0x3902,	// (0x0007f88a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3902,	// (0x0007f88a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3918,	// (0x0007f8a0) aid_popup_sp_fs_bg_corner_pane

0x1c67,	// (0x0007dbef) popup_sp_fs_calendar_preview_bg_pane_g1

0xd964,	// (0x000898ec) popup_sp_fs_calendar_preview_bg_pane

0x3920,	// (0x0007f8a8) popup_sp_fs_calendar_preview_list_pane

0x17d2,	// (0x0007d75a) bg_main_sp_fs_cale_pane_ParamLimits

0x17d2,	// (0x0007d75a) bg_main_sp_fs_cale_pane

0x3928,	// (0x0007f8b0) listscroll_cale_mrui_pane_ParamLimits

0x3928,	// (0x0007f8b0) listscroll_cale_mrui_pane

0x393d,	// (0x0007f8c5) listscroll_sp_fs_schedule_track_pane

0x3946,	// (0x0007f8ce) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3946,	// (0x0007f8ce) main_sp_fs_ctrlbar_pane_cp01

0x3959,	// (0x0007f8e1) main_sp_fs_ribbon_pane

0x3961,	// (0x0007f8e9) popup_sp_fs_cale_preview_window

0x4218,	// (0x000801a0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x4218,	// (0x000801a0) list_single_sp_fs_schedule_track_pane

0x422b,	// (0x000801b3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x422b,	// (0x000801b3) bg_sp_fs_highlight_list_pane_cp03

0xcd2d,	// (0x00088cb5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd2d,	// (0x00088cb5) list_single_sp_fs_schedule_track_pane_g1

0xcd39,	// (0x00088cc1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd39,	// (0x00088cc1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0008bd55) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0008bd55) list_single_sp_fs_schedule_track_pane_g

0xcd45,	// (0x00088ccd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd45,	// (0x00088ccd) list_single_sp_fs_schedule_track_pane_t1

0xcd5d,	// (0x00088ce5) sp_fs_schedule_track_pane_ParamLimits

0xcd5d,	// (0x00088ce5) sp_fs_schedule_track_pane

0x3973,	// (0x0007f8fb) sp_fs_schedule_track_pane_g1

0x397b,	// (0x0007f903) sp_fs_schedule_track_pane_g2

0x3983,	// (0x0007f90b) sp_fs_schedule_track_pane_g3

0x398b,	// (0x0007f913) sp_fs_schedule_track_pane_g4

0x3993,	// (0x0007f91b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0008bd5a) sp_fs_schedule_track_pane_g

0x48cd,	// (0x00080855) bg_sp_fs_schedule_viewer_highlight_g1

0xe4f6,	// (0x0008a47e) bg_sp_fs_schedule_viewer_highlight_g2

0x48d5,	// (0x0008085d) bg_sp_fs_schedule_viewer_highlight_g3

0x48dd,	// (0x00080865) bg_sp_fs_schedule_viewer_highlight_g4

0x269c,	// (0x0007e624) bg_sp_fs_schedule_viewer_highlight_g5

0x48ed,	// (0x00080875) bg_sp_fs_schedule_viewer_highlight_g6

0x48f5,	// (0x0008087d) bg_sp_fs_schedule_viewer_highlight_g7

0x48fd,	// (0x00080885) bg_sp_fs_schedule_viewer_highlight_g8

0xe4d6,	// (0x0008a45e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0008bd65) bg_sp_fs_schedule_viewer_highlight_g

0xd964,	// (0x000898ec) bg_main_sp_fs_ribbon_pane

0xcd6d,	// (0x00088cf5) main_sp_fs_ribbon_pane_g1

0x399b,	// (0x0007f923) main_sp_fs_ribbon_pane_t1

0xcd76,	// (0x00088cfe) main_sp_fs_ribbon_pane_t2

0x39aa,	// (0x0007f932) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0008bd78) main_sp_fs_ribbon_pane_t

0x39b9,	// (0x0007f941) main_sp_fs_ribbon_scheduler_pane

0x39c1,	// (0x0007f949) bg_main_sp_fs_ribbon_pane_g1

0x39ca,	// (0x0007f952) bg_main_sp_fs_ribbon_pane_g2

0x39d3,	// (0x0007f95b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0008bd7f) bg_main_sp_fs_ribbon_pane_g

0x39db,	// (0x0007f963) main_sp_fs_ribbon_scheduler_pane_g1

0x39e4,	// (0x0007f96c) main_sp_fs_ribbon_scheduler_pane_g2

0x39ed,	// (0x0007f975) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0008bd86) main_sp_fs_ribbon_scheduler_pane_g

0x39f6,	// (0x0007f97e) list_cale_mrui_pane

0xcd85,	// (0x00088d0d) sp_fs_scroll_pane_cp07_ParamLimits

0xcd85,	// (0x00088d0d) sp_fs_scroll_pane_cp07

0xcd9d,	// (0x00088d25) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcd9d,	// (0x00088d25) bg_sp_fs_schedule_viewer_highlight

0x3a03,	// (0x0007f98b) list_single_sp_fs_schedule_track_pane_cp01

0x3a0b,	// (0x0007f993) list_sp_fs_schedule_track_pane

0x3a13,	// (0x0007f99b) sp_fs_scroll_pane_cp06_ParamLimits

0x3a13,	// (0x0007f99b) sp_fs_scroll_pane_cp06

0x1c67,	// (0x0007dbef) bgmain_sp_fs_calendar_pane_g1

0xcdaa,	// (0x00088d32) list_single_cale_mrui_pane_ParamLimits

0xcdaa,	// (0x00088d32) list_single_cale_mrui_pane

0x3a25,	// (0x0007f9ad) list_single_cale_mrui_row_pane_ParamLimits

0x3a25,	// (0x0007f9ad) list_single_cale_mrui_row_pane

0x3a32,	// (0x0007f9ba) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3a32,	// (0x0007f9ba) list_single_cale_mrui_row_pane_g1

0x3a77,	// (0x0007f9ff) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3a77,	// (0x0007f9ff) list_single_cale_mrui_row_pane_t1

0xcdca,	// (0x00088d52) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcdca,	// (0x00088d52) list_single_cale_mrui_row_pane_t2

0x3a89,	// (0x0007fa11) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3a89,	// (0x0007fa11) list_single_cale_mrui_row_pane_t3

0x3ab8,	// (0x0007fa40) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3ab8,	// (0x0007fa40) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0008bd94) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0008bd94) list_single_cale_mrui_row_pane_t

0xce30,	// (0x00088db8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce30,	// (0x00088db8) list_single_cmail_header_editor_pane_bg_cp01

0xce50,	// (0x00088dd8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce50,	// (0x00088dd8) list_single_cmail_header_editor_pane_bg_cp02

0xce6c,	// (0x00088df4) main_radioblah_text_pane_t1_ParamLimits

0xce6c,	// (0x00088df4) main_radioblah_text_pane_t1

0x3ae7,	// (0x0007fa6f) cam6_indi_pane_cp01

0x3aef,	// (0x0007fa77) cam6_mode_pane_cp01

0x3af7,	// (0x0007fa7f) cam6_pano_pane

0x3b00,	// (0x0007fa88) cam6_zoom_pane_cp01

0x3b08,	// (0x0007fa90) cam6_pano_image_pane

0x3b11,	// (0x0007fa99) cam6_pano_pane_g1

0x311a,	// (0x0007f0a2) cam6_pano_pane_g2

0x3b1a,	// (0x0007faa2) cam6_pano_pane_g3

0x3b23,	// (0x0007faab) cam6_pano_pane_g4

0x21fa,	// (0x0007e182) cam6_pano_pane_g5

0x3b2c,	// (0x0007fab4) cam6_pano_pane_g6

0x3b34,	// (0x0007fabc) cam6_pano_pane_g7

0x3b3c,	// (0x0007fac4) cam6_pano_pane_g8

0x3b45,	// (0x0007facd) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0008bd9d) cam6_pano_pane_g

0xd964,	// (0x000898ec) main_browser_tag_pane

0x3875,	// (0x0007f7fd) grid_navstr_albumart_pane

0x3b4e,	// (0x0007fad6) cell_navstr_albumart_pane_ParamLimits

0x3b4e,	// (0x0007fad6) cell_navstr_albumart_pane

0xedf8,	// (0x0008ad80) cell_navstr_albumart_pane_g1

0x15a3,	// (0x0007d52b) cell_navstr_albumart_pane_g2

0x15b3,	// (0x0007d53b) cell_navstr_albumart_pane_g3

0x15ab,	// (0x0007d533) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0008bdb0) cell_navstr_albumart_pane_g

0xce86,	// (0x00088e0e) bt_list_pane_ParamLimits

0xce86,	// (0x00088e0e) bt_list_pane

0xce99,	// (0x00088e21) bt_list_pane_t1

0xcea8,	// (0x00088e30) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0008bdb9) bt_list_pane_t

0xd964,	// (0x000898ec) main_cale_prevew_pane

0xceb7,	// (0x00088e3f) popup_cale_preview_window_ParamLimits

0xceb7,	// (0x00088e3f) popup_cale_preview_window

0x062b,	// (0x0007c5b3) bg_popup_preview_window_pane_cp05_ParamLimits

0x062b,	// (0x0007c5b3) bg_popup_preview_window_pane_cp05

0x3b66,	// (0x0007faee) list_cale_preview_pane_ParamLimits

0x3b66,	// (0x0007faee) list_cale_preview_pane

0x3b72,	// (0x0007fafa) list_double_cale_preview_pane_ParamLimits

0x3b72,	// (0x0007fafa) list_double_cale_preview_pane

0x3b84,	// (0x0007fb0c) list_single_cale_preview_pane_ParamLimits

0x3b84,	// (0x0007fb0c) list_single_cale_preview_pane

0x3b98,	// (0x0007fb20) list_single_cale_preview_pane_g1

0x3ba0,	// (0x0007fb28) list_single_cale_preview_pane_t1_ParamLimits

0x3ba0,	// (0x0007fb28) list_single_cale_preview_pane_t1

0x3bb5,	// (0x0007fb3d) list_double_cale_preview_pane_g1

0x3bbd,	// (0x0007fb45) list_double_cale_preview_pane_t1_ParamLimits

0x3bbd,	// (0x0007fb45) list_double_cale_preview_pane_t1

0x3bd2,	// (0x0007fb5a) list_double_cale_preview_pane_t2_ParamLimits

0x3bd2,	// (0x0007fb5a) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0008bdbe) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0008bdbe) list_double_cale_preview_pane_t

0xd964,	// (0x000898ec) main_ezdial_pane

0x062b,	// (0x0007c5b3) main_sp_fs_email_pane_ParamLimits

0xc5cd,	// (0x00088555) cmail_ddmenu_btn01_pane_ParamLimits

0xc5cd,	// (0x00088555) cmail_ddmenu_btn01_pane

0xc5ea,	// (0x00088572) cmail_ddmenu_btn02_pane_ParamLimits

0xc5ea,	// (0x00088572) cmail_ddmenu_btn02_pane

0xc608,	// (0x00088590) cmail_ddmenu_btn03_pane_ParamLimits

0xc608,	// (0x00088590) cmail_ddmenu_btn03_pane

0xc634,	// (0x000885bc) main_sp_fs_ctrlbar_pane_ParamLimits

0xc64a,	// (0x000885d2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcbed,	// (0x00088b75) list_cmail_body_pane_ParamLimits

0x3775,	// (0x0007f6fd) bg_button_pane_cp12

0x377e,	// (0x0007f706) list_single_cmail_header_detail_pane_g3_ParamLimits

0x377e,	// (0x0007f706) list_single_cmail_header_detail_pane_g3

0x37c7,	// (0x0007f74f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x37c7,	// (0x0007f74f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0008bd41) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0008bd41) list_single_cmail_header_detail_pane_t

0x38dd,	// (0x0007f865) phacti_term_pane_t2_ParamLimits

0x38dd,	// (0x0007f865) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0008bd4b) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0008bd4b) phacti_term_pane_t

0x3bea,	// (0x0007fb72) aid_size_list_single_double

0xcecc,	// (0x00088e54) popup_ezdial_listscroll_window

0xcee5,	// (0x00088e6d) popup_number_entry_window_cp01

0xe290,	// (0x0008a218) bg_popup_call_pane_cp09

0x3bf6,	// (0x0007fb7e) ezdial_list_pane

0x3bfe,	// (0x0007fb86) scroll_pane_cp23

0x1a54,	// (0x0007d9dc) bg_button_pane_cp028_ParamLimits

0x1a54,	// (0x0007d9dc) bg_button_pane_cp028

0xcef1,	// (0x00088e79) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcef1,	// (0x00088e79) cmail_ddmenu_btn01_pane_g1

0xcf01,	// (0x00088e89) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcf01,	// (0x00088e89) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0008bdc3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0008bdc3) cmail_ddmenu_btn01_pane_g

0x3c06,	// (0x0007fb8e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3c06,	// (0x0007fb8e) cmail_ddmenu_btn01_pane_t1

0x17d2,	// (0x0007d75a) bg_button_pane_cp029_ParamLimits

0x17d2,	// (0x0007d75a) bg_button_pane_cp029

0xcf0d,	// (0x00088e95) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcf0d,	// (0x00088e95) cmail_ddmenu_btn02_pane_g1

0xcf26,	// (0x00088eae) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcf26,	// (0x00088eae) cmail_ddmenu_btn02_pane_t1

0x422b,	// (0x000801b3) bg_button_pane_cp031_ParamLimits

0x422b,	// (0x000801b3) bg_button_pane_cp031

0xcf0d,	// (0x00088e95) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcf0d,	// (0x00088e95) cmail_ddmenu_btn03_pane_g1

0xcf26,	// (0x00088eae) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcf26,	// (0x00088eae) cmail_ddmenu_btn03_pane_t1

0xa22d,	// (0x000861b5) cell_dialer2_keypad_pane_t1_ParamLimits

0xa247,	// (0x000861cf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa247,	// (0x000861cf) cell_dialer2_keypad_pane_t1_copy1

0xbef1,	// (0x00087e79) ncimui_group_button_pane

0x062b,	// (0x0007c5b3) main_sp_fs_calendar_pane_ParamLimits

0xcc02,	// (0x00088b8a) list_single_cmail_header_caption_pane_ParamLimits

0x4746,	// (0x000806ce) aid_recal_txt_sm_pane

0xd964,	// (0x000898ec) mian_recal_day_pane

0x3961,	// (0x0007f8e9) popup_sp_fs_cale_preview_window_ParamLimits

0x3c1c,	// (0x0007fba4) list_recal_day_pane

0x3c5e,	// (0x0007fbe6) list_single_recal_day_pane_ParamLimits

0x3c5e,	// (0x0007fbe6) list_single_recal_day_pane

0x3c70,	// (0x0007fbf8) list_single_recal_day_pane_g1_ParamLimits

0x3c70,	// (0x0007fbf8) list_single_recal_day_pane_g1

0x3c7c,	// (0x0007fc04) list_single_recal_day_pane_g2_ParamLimits

0x3c7c,	// (0x0007fc04) list_single_recal_day_pane_g2

0x3c88,	// (0x0007fc10) list_single_recal_day_pane_g3_ParamLimits

0x3c88,	// (0x0007fc10) list_single_recal_day_pane_g3

0xcf4a,	// (0x00088ed2) list_single_recal_day_pane_g4_ParamLimits

0xcf4a,	// (0x00088ed2) list_single_recal_day_pane_g4

0x3c94,	// (0x0007fc1c) list_single_recal_day_pane_g5_ParamLimits

0x3c94,	// (0x0007fc1c) list_single_recal_day_pane_g5

0x3ca0,	// (0x0007fc28) list_single_recal_day_pane_g6_ParamLimits

0x3ca0,	// (0x0007fc28) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0008bdd2) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0008bdd2) list_single_recal_day_pane_g

0x3cb4,	// (0x0007fc3c) list_single_recal_day_pane_t1

0x3cc6,	// (0x0007fc4e) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0008bddd) list_single_recal_day_pane_t

0xcf5e,	// (0x00088ee6) ncimui_query_button_pane_ParamLimits

0xcf5e,	// (0x00088ee6) ncimui_query_button_pane

0xcf6e,	// (0x00088ef6) ncimui_query_button_pane_t1_ParamLimits

0xcf6e,	// (0x00088ef6) ncimui_query_button_pane_t1

0x3cd8,	// (0x0007fc60) ncimui_query_button_pane_t2_ParamLimits

0x3cd8,	// (0x0007fc60) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0008bde2) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0008bde2) ncimui_query_button_pane_t

0xcf81,	// (0x00088f09) query_button_pane_ParamLimits

0xcf81,	// (0x00088f09) query_button_pane

0xd964,	// (0x000898ec) bg_button_pane_cp0028

0x3ceb,	// (0x0007fc73) query_button_pane_t1

0x87a4,	// (0x0008472c) main_tport_pane_ParamLimits

0xcb39,	// (0x00088ac1) bg_popup_window_pane_cp01_ParamLimits

0xcb39,	// (0x00088ac1) bg_popup_window_pane_cp01

0xcb45,	// (0x00088acd) heading_pane_cp08_ParamLimits

0xcb45,	// (0x00088acd) heading_pane_cp08

0xcb51,	// (0x00088ad9) heading_pane_cp07_ParamLimits

0xcb51,	// (0x00088ad9) heading_pane_cp07

0x3731,	// (0x0007f6b9) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0008bd2e) cell_tport_appsw_pane_g

0x7f97,	// (0x00083f1f) input_candi_list_open_g1

0xe6c1,	// (0x0008a649) list_cale_time_pane_g6_ParamLimits

0xe6c1,	// (0x0008a649) list_cale_time_pane_g6

0x9182,	// (0x0008510a) aid_size_touch_calib_1_ParamLimits

0x9182,	// (0x0008510a) aid_size_touch_calib_1

0x918e,	// (0x00085116) aid_size_touch_calib_2_ParamLimits

0x918e,	// (0x00085116) aid_size_touch_calib_2

0x919a,	// (0x00085122) aid_size_touch_calib_3_ParamLimits

0x919a,	// (0x00085122) aid_size_touch_calib_3

0x91a8,	// (0x00085130) aid_size_touch_calib_4_ParamLimits

0x91a8,	// (0x00085130) aid_size_touch_calib_4

0x91b6,	// (0x0008513e) main_touch_calib_button_group_pane_ParamLimits

0x91b6,	// (0x0008513e) main_touch_calib_button_group_pane

0x91c4,	// (0x0008514c) main_touch_calib_pane_g1_ParamLimits

0x91d0,	// (0x00085158) main_touch_calib_pane_g2_ParamLimits

0x91dc,	// (0x00085164) main_touch_calib_pane_g3_ParamLimits

0x91e8,	// (0x00085170) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0008b6ec) main_touch_calib_pane_g_ParamLimits

0x91f4,	// (0x0008517c) main_touch_calib_pane_t1_ParamLimits

0x9209,	// (0x00085191) main_touch_calib_pane_t2_ParamLimits

0x921e,	// (0x000851a6) main_touch_calib_pane_t3_ParamLimits

0x9230,	// (0x000851b8) main_touch_calib_pane_t4_ParamLimits

0x9242,	// (0x000851ca) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0008b6f5) main_touch_calib_pane_t_ParamLimits

0x1fb1,	// (0x0007df39) list_single_fp_cale_pane_g3_ParamLimits

0x1fb1,	// (0x0007df39) list_single_fp_cale_pane_g3

0x8788,	// (0x00084710) bg_button_pane_cp012_ParamLimits

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp03_ParamLimits

0xafa6,	// (0x00086f2e) cell_vitu2_function_top_pane_g1_ParamLimits

0x8788,	// (0x00084710) bg_vkb2_func_pane_cp04_ParamLimits

0xbe7d,	// (0x00087e05) main_ncimui_button_group_pane_ParamLimits

0xbe7d,	// (0x00087e05) main_ncimui_button_group_pane

0xbedf,	// (0x00087e67) main_ncimui_pane_t3_ParamLimits

0xbedf,	// (0x00087e67) main_ncimui_pane_t3

0x388b,	// (0x0007f813) phacti_button_group_pane

0x3bea,	// (0x0007fb72) aid_size_list_single_double_ParamLimits

0xcecc,	// (0x00088e54) popup_ezdial_listscroll_window_ParamLimits

0xcee5,	// (0x00088e6d) popup_number_entry_window_cp01_ParamLimits

0xcf8e,	// (0x00088f16) phacti_button_pane_ParamLimits

0xcf8e,	// (0x00088f16) phacti_button_pane

0xd964,	// (0x000898ec) bg_button_pane_cp14

0x3cf9,	// (0x0007fc81) phacti_button_pane_t1

0xcf9d,	// (0x00088f25) main_touch_calib_button_pane_ParamLimits

0xcf9d,	// (0x00088f25) main_touch_calib_button_pane

0xe0df,	// (0x0008a067) bg_button_pane_cp18_ParamLimits

0xe0df,	// (0x0008a067) bg_button_pane_cp18

0x3d07,	// (0x0007fc8f) main_touch_calib_button_pane_t1_ParamLimits

0x3d07,	// (0x0007fc8f) main_touch_calib_button_pane_t1

0x3d1d,	// (0x0007fca5) main_touch_calib_button_pane_t2_ParamLimits

0x3d1d,	// (0x0007fca5) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0008bde7) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0008bde7) main_touch_calib_button_pane_t

0xd964,	// (0x000898ec) cell_ncimui_button_pane

0xd964,	// (0x000898ec) bg_button_pane_cp032

0x3d3b,	// (0x0007fcc3) cell_ncimui_button_pane_t1

0xa299,	// (0x00086221) image3_infobar_pane_ParamLimits

0xa299,	// (0x00086221) image3_infobar_pane

0xc271,	// (0x000881f9) fs_bigclock_status_pane_ParamLimits

0xc271,	// (0x000881f9) fs_bigclock_status_pane

0xc27e,	// (0x00088206) main_fs_bigclock_clock_pane_ParamLimits

0xc27e,	// (0x00088206) main_fs_bigclock_clock_pane

0xc290,	// (0x00088218) main_fs_bigclock_indi_pane_ParamLimits

0xc290,	// (0x00088218) main_fs_bigclock_indi_pane

0xc2b0,	// (0x00088238) main_fs_bigclock_swipe_pane_ParamLimits

0xc2b0,	// (0x00088238) main_fs_bigclock_swipe_pane

0xd964,	// (0x000898ec) main_fs_clock_dumped_data

0x3227,	// (0x0007f1af) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3227,	// (0x0007f1af) list_single_fs_bigclock_indicator_pane_g1

0x3241,	// (0x0007f1c9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3241,	// (0x0007f1c9) list_single_fs_bigclock_indicator_pane_g2

0x325b,	// (0x0007f1e3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x325b,	// (0x0007f1e3) list_single_fs_bigclock_indicator_pane_g3

0x3275,	// (0x0007f1fd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3275,	// (0x0007f1fd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0008bc0f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0008bc0f) list_single_fs_bigclock_indicator_pane_g

0x329e,	// (0x0007f226) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x329e,	// (0x0007f226) list_single_fs_bigclock_indicator_pane_t1

0x32c6,	// (0x0007f24e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x32c6,	// (0x0007f24e) list_single_fs_bigclock_indicator_pane_t2

0x32ee,	// (0x0007f276) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x32ee,	// (0x0007f276) list_single_fs_bigclock_indicator_pane_t3

0x3316,	// (0x0007f29e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3316,	// (0x0007f29e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0008bc1a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0008bc1a) list_single_fs_bigclock_indicator_pane_t

0x3d49,	// (0x0007fcd1) image3_infobar_fav_pane_ParamLimits

0x3d49,	// (0x0007fcd1) image3_infobar_fav_pane

0x3d59,	// (0x0007fce1) image3_infobar_loc_pane_ParamLimits

0x3d59,	// (0x0007fce1) image3_infobar_loc_pane

0x3d6d,	// (0x0007fcf5) image3_infobar_time_pane_ParamLimits

0x3d6d,	// (0x0007fcf5) image3_infobar_time_pane

0x1c67,	// (0x0007dbef) image3_infobar_time_pane_g1

0x3d7d,	// (0x0007fd05) image3_infobar_time_pane_t1

0x1c67,	// (0x0007dbef) image3_infobar_loc_pane_g1

0x3d8b,	// (0x0007fd13) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0008bdec) image3_infobar_loc_pane_g

0x3d93,	// (0x0007fd1b) image3_infobar_loc_pane_t1

0x1c67,	// (0x0007dbef) image3_infobar_fav_pane_g1

0x3da1,	// (0x0007fd29) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0008bdf1) image3_infobar_fav_pane_g

0x3da9,	// (0x0007fd31) fs_bigclock_status_battery_pane

0x3db2,	// (0x0007fd3a) fs_bigclock_status_signal_pane

0x3dbb,	// (0x0007fd43) fs_bigclock_status_title_pane

0x3dc4,	// (0x0007fd4c) fs_bigclock_status_signal_pane_g1

0x3dcd,	// (0x0007fd55) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0008bdf6) fs_bigclock_status_signal_pane_g

0x3dd5,	// (0x0007fd5d) fs_bigclock_status_battery_pane_g1

0x3dde,	// (0x0007fd66) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0008bdfb) fs_bigclock_status_battery_pane_g

0x3de6,	// (0x0007fd6e) fs_bigclock_status_title_pane_t1

0xcfad,	// (0x00088f35) main_fs_bigclock_clock_pane_g1

0xcfad,	// (0x00088f35) main_fs_bigclock_clock_pane_g2

0xcfba,	// (0x00088f42) main_fs_bigclock_clock_pane_g3

0xcfba,	// (0x00088f42) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0008be00) main_fs_bigclock_clock_pane_g

0xcfc6,	// (0x00088f4e) main_fs_bigclock_clock_pane_t1

0xcfd9,	// (0x00088f61) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0008be09) main_fs_bigclock_clock_pane_t

0x3df4,	// (0x0007fd7c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3df4,	// (0x0007fd7c) list_single_fs_bigclock_indicator_pane

0x3e05,	// (0x0007fd8d) list_single_fs_bigclock_pane_ParamLimits

0x3e05,	// (0x0007fd8d) list_single_fs_bigclock_pane

0x3e2b,	// (0x0007fdb3) main_fs_bigclock_indicator_pane_t1

0x3e3a,	// (0x0007fdc2) list_single_fs_bigclock_pane_g1

0x3e42,	// (0x0007fdca) list_single_fs_bigclock_pane_t1

0x1c67,	// (0x0007dbef) main_fs_bigclock_swipe_pane_g1

0x3e85,	// (0x0007fe0d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0008be1a) main_fs_bigclock_swipe_pane_g

0x3e8d,	// (0x0007fe15) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3e8d,	// (0x0007fe15) main_fs_bigclock_swipe_pane_t1

0x787d,	// (0x00083805) call_type_pane_ParamLimits

0xd964,	// (0x000898ec) main_btmg_pane

0x3a5e,	// (0x0007f9e6) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3a5e,	// (0x0007f9e6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0008bd8d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0008bd8d) list_single_cale_mrui_row_pane_g

0x3c45,	// (0x0007fbcd) list_recal_vselct_arw_lo_pane

0x3c4d,	// (0x0007fbd5) list_recal_vselct_arw_up_pane

0x3c55,	// (0x0007fbdd) list_recal_vselct_pane

0xd02e,	// (0x00088fb6) btmg_button_pane

0xd036,	// (0x00088fbe) main_btmg_pane_g1

0xd964,	// (0x000898ec) bg_button_pane_cp044

0x3eaa,	// (0x0007fe32) btmg_button_pane_t1

0x17be,	// (0x0007d746) aid_listscroll_gen

0x062b,	// (0x0007c5b3) main_cntbar_detail_pane

0x3757,	// (0x0007f6df) list_cmail_folder_pane

0x0717,	// (0x0007c69f) sp_fs_scroll_pane_cp03_ParamLimits

0xcbed,	// (0x00088b75) list_single_fs_dyc_pane_cp01_ParamLimits

0xcbed,	// (0x00088b75) list_single_fs_dyc_pane_cp01

0x3eb8,	// (0x0007fe40) aid_size_cmail_indent

0x3ec1,	// (0x0007fe49) list_single_dyc_row_pane_cp01

0xd058,	// (0x00088fe0) cntbar_detail_list_pane_ParamLimits

0xd058,	// (0x00088fe0) cntbar_detail_list_pane

0xd08e,	// (0x00089016) main_cntbar_detail_cont_pane_ParamLimits

0xd08e,	// (0x00089016) main_cntbar_detail_cont_pane

0x77a2,	// (0x0008372a) scroll_pane_cp032_ParamLimits

0x77a2,	// (0x0008372a) scroll_pane_cp032

0xd09a,	// (0x00089022) cntbar_detail_list_event_pane_ParamLimits

0xd09a,	// (0x00089022) cntbar_detail_list_event_pane

0xd064,	// (0x00088fec) cntbar_detail_list_shct_pane

0xe544,	// (0x0008a4cc) aid_list_gen

0x3eca,	// (0x0007fe52) aid_scroll

0x3ed3,	// (0x0007fe5b) aid_size_touch_scroll_bar

0xb6b0,	// (0x00087638) aid_list_double

0xb69e,	// (0x00087626) aid_list_single

0xb69e,	// (0x00087626) aid_list_single_lg

0xd0aa,	// (0x00089032) aid_list_z_g_a_sm

0x5dd3,	// (0x00081d5b) aid_list_z_g_d

0xd0b2,	// (0x0008903a) aid_txt_z_prm

0xd0c0,	// (0x00089048) aid_txt_z_prm_cp01

0xd0ce,	// (0x00089056) aid_txt_z_sec

0xd0dc,	// (0x00089064) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd0dc,	// (0x00089064) main_cntbar_detail_cont_pane_g1

0xd0e9,	// (0x00089071) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd0e9,	// (0x00089071) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0008be1f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0008be1f) main_cntbar_detail_cont_pane_g

0x3edc,	// (0x0007fe64) main_cntbar_detail_cont_pane_t1

0x3eea,	// (0x0007fe72) main_cntbar_detail_cont_pane_t2

0x3ef8,	// (0x0007fe80) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0008be24) main_cntbar_detail_cont_pane_t

0xd0f5,	// (0x0008907d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd0f5,	// (0x0008907d) cell_cntbar_detail_list_shct_pane

0x3f06,	// (0x0007fe8e) cntbar_detail_list_shct_pane_g1

0x3f0f,	// (0x0007fe97) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0008be2b) cntbar_detail_list_shct_pane_g

0xd107,	// (0x0008908f) cntbar_detail_list_event_pane_g1_ParamLimits

0xd107,	// (0x0008908f) cntbar_detail_list_event_pane_g1

0xd113,	// (0x0008909b) cntbar_detail_list_event_pane_g2_ParamLimits

0xd113,	// (0x0008909b) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0008be30) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0008be30) cntbar_detail_list_event_pane_g

0xd17f,	// (0x00089107) cntbar_detail_list_event_pane_t1_ParamLimits

0xd17f,	// (0x00089107) cntbar_detail_list_event_pane_t1

0xd194,	// (0x0008911c) cntbar_detail_list_event_pane_t2_ParamLimits

0xd194,	// (0x0008911c) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0008be3d) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0008be3d) cntbar_detail_list_event_pane_t

0x1c67,	// (0x0007dbef) cell_cntbar_detail_list_shct_pane_g1

0xec84,	// (0x0008ac0c) navi_pane_mv_g3

0x062b,	// (0x0007c5b3) main_cntbar_detail_pane_ParamLimits

0xd964,	// (0x000898ec) main_notif_wgt_pane

0x9f77,	// (0x00085eff) aid_tch_main_mp4_pane_g4

0xa192,	// (0x0008611a) popup_slider_window_cp02

0x3c3b,	// (0x0007fbc3) list_recal_day_event_pane

0xd03e,	// (0x00088fc6) cntbar_detail_btn_pane_ParamLimits

0xd03e,	// (0x00088fc6) cntbar_detail_btn_pane

0xd04a,	// (0x00088fd2) cntbar_detail_btn_pane_cp01_ParamLimits

0xd04a,	// (0x00088fd2) cntbar_detail_btn_pane_cp01

0xd064,	// (0x00088fec) cntbar_detail_list_shct_pane_ParamLimits

0xd070,	// (0x00088ff8) cntbar_detail_pane_g1_ParamLimits

0xd070,	// (0x00088ff8) cntbar_detail_pane_g1

0xd07c,	// (0x00089004) cntbar_detail_pane_t1_ParamLimits

0xd07c,	// (0x00089004) cntbar_detail_pane_t1

0xd11f,	// (0x000890a7) cntbar_detail_list_event_pane_g3_ParamLimits

0xd11f,	// (0x000890a7) cntbar_detail_list_event_pane_g3

0xd137,	// (0x000890bf) cntbar_detail_list_event_pane_g4_ParamLimits

0xd137,	// (0x000890bf) cntbar_detail_list_event_pane_g4

0xd14f,	// (0x000890d7) cntbar_detail_list_event_pane_g5_ParamLimits

0xd14f,	// (0x000890d7) cntbar_detail_list_event_pane_g5

0xd167,	// (0x000890ef) cntbar_detail_list_event_pane_g6_ParamLimits

0xd167,	// (0x000890ef) cntbar_detail_list_event_pane_g6

0xd1a9,	// (0x00089131) cntbar_detail_list_event_pane_t3_ParamLimits

0xd1a9,	// (0x00089131) cntbar_detail_list_event_pane_t3

0xd1bb,	// (0x00089143) popup_notif_wgt_window_ParamLimits

0xd1bb,	// (0x00089143) popup_notif_wgt_window

0xd1c9,	// (0x00089151) popup_submenu_window_cp01_ParamLimits

0xd1c9,	// (0x00089151) popup_submenu_window_cp01

0xe290,	// (0x0008a218) bg_popup_window_pane_cp10

0x3f18,	// (0x0007fea0) listscroll_notif_wgt_pane

0x3f29,	// (0x0007feb1) list_notif_wgt_window

0x3f32,	// (0x0007feba) scroll_pane_cp033

0xd1d5,	// (0x0008915d) list_notif_wgt_row_pane_ParamLimits

0xd1d5,	// (0x0008915d) list_notif_wgt_row_pane

0x3f3b,	// (0x0007fec3) aid_size_list_notif_wgt_del

0x3f48,	// (0x0007fed0) list_notif_wgt_row_pane_g1

0x3f54,	// (0x0007fedc) list_notif_wgt_row_pane_g2

0x3f63,	// (0x0007feeb) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0008be44) list_notif_wgt_row_pane_g

0x3f70,	// (0x0007fef8) list_notif_wgt_row_pane_t1

0x3f86,	// (0x0007ff0e) list_notif_wgt_row_pane_t2

0x3f98,	// (0x0007ff20) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0008be4b) list_notif_wgt_row_pane_t

0x26a4,	// (0x0007e62c) list_recal_day_event_pane_g1

0x3faa,	// (0x0007ff32) list_recal_day_event_pane_t1

0xd964,	// (0x000898ec) bg_button_pane_cp045

0xd1e7,	// (0x0008916f) cntbar_detail_btn_pane_t1

0x17d2,	// (0x0007d75a) main_callh_pane_ParamLimits

0x17d2,	// (0x0007d75a) main_callh_pane

0xd964,	// (0x000898ec) main_coverflow0_pane

0xd964,	// (0x000898ec) main_wgtman_pane

0xc2c2,	// (0x0008824a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc2c2,	// (0x0008824a) main_fs_bigclock_unlock_btn_pane

0x3729,	// (0x0007f6b1) bg_button_pane_cp16

0x3739,	// (0x0007f6c1) cell_tport_appsw_pane_g3

0xd1f5,	// (0x0008917d) cf0_flow_pane_ParamLimits

0xd1f5,	// (0x0008917d) cf0_flow_pane

0x3fb9,	// (0x0007ff41) listscroll_cf0_pane

0x3fc2,	// (0x0007ff4a) main_cf0_pane_g1

0xd204,	// (0x0008918c) main_cf0_pane_t1_ParamLimits

0xd204,	// (0x0008918c) main_cf0_pane_t1

0xd216,	// (0x0008919e) main_cf0_pane_t2_ParamLimits

0xd216,	// (0x0008919e) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0008be57) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0008be57) main_cf0_pane_t

0x3fd4,	// (0x0007ff5c) scroll_pane_cp11

0xd228,	// (0x000891b0) cf0_flow_pane_g1

0xd230,	// (0x000891b8) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0008be5c) cf0_flow_pane_g

0xd238,	// (0x000891c0) cf0_flow_pane_t1

0xd964,	// (0x000898ec) main_call6_pane

0xd964,	// (0x000898ec) main_calllock_pane

0xd246,	// (0x000891ce) call6_btn_grp_pane_ParamLimits

0xd246,	// (0x000891ce) call6_btn_grp_pane

0xd253,	// (0x000891db) call6_pane_g1_ParamLimits

0xd253,	// (0x000891db) call6_pane_g1

0xd260,	// (0x000891e8) popup_call6_1st_window_ParamLimits

0xd260,	// (0x000891e8) popup_call6_1st_window

0xd26c,	// (0x000891f4) popup_call6_2nd_window_ParamLimits

0xd26c,	// (0x000891f4) popup_call6_2nd_window

0xd278,	// (0x00089200) cell_call6_btn_pane_ParamLimits

0xd278,	// (0x00089200) cell_call6_btn_pane

0xe290,	// (0x0008a218) bg_popup_call2_in_pane_cp03

0x3fdd,	// (0x0007ff65) popup_call6_1st_window_g1

0x3fe5,	// (0x0007ff6d) popup_call6_1st_window_g2

0x3fed,	// (0x0007ff75) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0008be61) popup_call6_1st_window_g

0x3ff5,	// (0x0007ff7d) popup_call6_1st_window_t1

0x4004,	// (0x0007ff8c) popup_call6_1st_window_t2

0x4012,	// (0x0007ff9a) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0008be68) popup_call6_1st_window_t

0xe290,	// (0x0008a218) bg_popup_call2_in_pane_cp04

0x3fdd,	// (0x0007ff65) popup_call6_2nd_window_g1

0x3fe5,	// (0x0007ff6d) popup_call6_2nd_window_g2

0x3fed,	// (0x0007ff75) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0008be61) popup_call6_2nd_window_g

0x3ff5,	// (0x0007ff7d) popup_call6_2nd_window_t1

0xd964,	// (0x000898ec) bg_button_pane_cp15

0x4020,	// (0x0007ffa8) cell_call6_btn_pane_g1

0x4029,	// (0x0007ffb1) cell_call6_btn_pane_t1

0xd287,	// (0x0008920f) listscroll_wgtman_pane_ParamLimits

0xd287,	// (0x0008920f) listscroll_wgtman_pane

0xd2a3,	// (0x0008922b) wgtman_btn_pane_ParamLimits

0xd2a3,	// (0x0008922b) wgtman_btn_pane

0xea9c,	// (0x0008aa24) aid_scroll_copy1

0x4038,	// (0x0007ffc0) list_wgtman_pane

0xd2d6,	// (0x0008925e) wgtman_btn_pane_g1_ParamLimits

0xd2d6,	// (0x0008925e) wgtman_btn_pane_g1

0xd2fe,	// (0x00089286) wgtman_btn_pane_t1_ParamLimits

0xd2fe,	// (0x00089286) wgtman_btn_pane_t1

0x4042,	// (0x0007ffca) wgtman_btn_pane_t2_ParamLimits

0x4042,	// (0x0007ffca) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0008be6f) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0008be6f) wgtman_btn_pane_t

0xd1d5,	// (0x0008915d) listrow_wgtman_pane_ParamLimits

0xd1d5,	// (0x0008915d) listrow_wgtman_pane

0xd335,	// (0x000892bd) listrow_wgtman_pane_g1

0xd342,	// (0x000892ca) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0008be74) listrow_wgtman_pane_g

0xd35a,	// (0x000892e2) listrow_wgtman_pane_t1

0xd372,	// (0x000892fa) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0008be79) listrow_wgtman_pane_t

0xd398,	// (0x00089320) wait_bar_pane_cp09

0x4059,	// (0x0007ffe1) main_calllock_btn_pane

0x4061,	// (0x0007ffe9) main_calllock_pane_g1

0xd964,	// (0x000898ec) bg_button_pane_cp17

0x406a,	// (0x0007fff2) main_calllock_btn_pane_g1

0x4073,	// (0x0007fffb) main_calllock_btn_pane_t1

0xd964,	// (0x000898ec) main_dialer3_pane

0xd964,	// (0x000898ec) main_fmrd2_pane

0x1c67,	// (0x0007dbef) main_fs_bigclock_unlock_btn_pane_g1

0x408a,	// (0x00080012) main_fs_bigclock_unlock_btn_pane_t1

0xd3aa,	// (0x00089332) area_fmrd2_info_pane_ParamLimits

0xd3aa,	// (0x00089332) area_fmrd2_info_pane

0xd3b6,	// (0x0008933e) area_fmrd2_visual_pane_ParamLimits

0xd3b6,	// (0x0008933e) area_fmrd2_visual_pane

0xd3c4,	// (0x0008934c) fmrd2_indi_pane_ParamLimits

0xd3c4,	// (0x0008934c) fmrd2_indi_pane

0xd3d1,	// (0x00089359) area_fmrd2_visual_pane_g1

0xd3d9,	// (0x00089361) area_fmrd2_visual_pane_t1

0xd3e7,	// (0x0008936f) area_fmrd2_visual_pane_t2

0xd3f5,	// (0x0008937d) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0008be83) area_fmrd2_visual_pane_t

0xd403,	// (0x0008938b) area_fmrd2_info_pane_g1

0xd40b,	// (0x00089393) area_fmrd2_info_pane_t1

0xd419,	// (0x000893a1) area_fmrd2_info_pane_t2

0xd427,	// (0x000893af) area_fmrd2_info_pane_t3

0xd435,	// (0x000893bd) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0008be8a) area_fmrd2_info_pane_t

0xd443,	// (0x000893cb) fmrd2_indi_pane_t1

0xd451,	// (0x000893d9) fmrd2_indi_pane_t2

0xd45f,	// (0x000893e7) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0008be93) fmrd2_indi_pane_t

0x3284,	// (0x0007f20c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3284,	// (0x0007f20c) list_single_fs_bigclock_indicator_pane_g5

0x3332,	// (0x0007f2ba) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3332,	// (0x0007f2ba) list_single_fs_bigclock_indicator_pane_t5

0xcceb,	// (0x00088c73) aid_cell_bcale_month_pane_ParamLimits

0xcceb,	// (0x00088c73) aid_cell_bcale_month_pane

0xcd09,	// (0x00088c91) bcale_month_pane_ParamLimits

0xcd09,	// (0x00088c91) bcale_month_pane

0xcd1f,	// (0x00088ca7) bcale_preview_pane_ParamLimits

0xcd1f,	// (0x00088ca7) bcale_preview_pane

0x3e42,	// (0x0007fdca) list_single_fs_bigclock_pane_t1_ParamLimits

0x3e61,	// (0x0007fde9) list_single_fs_bigclock_pane_t2_ParamLimits

0x3e61,	// (0x0007fde9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0008be15) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0008be15) list_single_fs_bigclock_pane_t

0x4082,	// (0x0008000a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0008be7e) main_fs_bigclock_unlock_btn_pane_g

0xd46d,	// (0x000893f5) aid_dia3_key_size_ParamLimits

0xd46d,	// (0x000893f5) aid_dia3_key_size

0xd479,	// (0x00089401) aid_dia3_listrow_size_ParamLimits

0xd479,	// (0x00089401) aid_dia3_listrow_size

0xd487,	// (0x0008940f) dia3_keypad_fun_pane_ParamLimits

0xd487,	// (0x0008940f) dia3_keypad_fun_pane

0xd493,	// (0x0008941b) dia3_keypad_num_pane_ParamLimits

0xd493,	// (0x0008941b) dia3_keypad_num_pane

0xd49f,	// (0x00089427) dia3_listscroll_pane_ParamLimits

0xd49f,	// (0x00089427) dia3_listscroll_pane

0xd4ab,	// (0x00089433) dia3_numentry_pane_ParamLimits

0xd4ab,	// (0x00089433) dia3_numentry_pane

0x4098,	// (0x00080020) dia3_list_pane

0x40a1,	// (0x00080029) scroll_pane_cp12

0xd964,	// (0x000898ec) bg_dia3_numentry_pane

0xd4b7,	// (0x0008943f) dia3_numentry_pane_t1

0xd4c6,	// (0x0008944e) cell_dia3_key_num_pane

0xd4ce,	// (0x00089456) cell_dia3_key0_fun_pane_ParamLimits

0xd4ce,	// (0x00089456) cell_dia3_key0_fun_pane

0xd4db,	// (0x00089463) cell_dia3_key1_fun_pane_ParamLimits

0xd4db,	// (0x00089463) cell_dia3_key1_fun_pane

0xd4e8,	// (0x00089470) dia3_listrow_pane

0x2fd2,	// (0x0007ef5a) bg_dia3_numentry_pane_g1

0xd964,	// (0x000898ec) bg_button_pane_cp21

0x40aa,	// (0x00080032) cell_dia3_key_num_pane_t1

0x40b8,	// (0x00080040) cell_dia3_key_num_pane_t2

0x40c7,	// (0x0008004f) cell_dia3_key_num_pane_t3

0x40d6,	// (0x0008005e) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0008be9a) cell_dia3_key_num_pane_t

0xd964,	// (0x000898ec) bg_button_pane_cp19

0x40e5,	// (0x0008006d) cell_dia3_key0_fun_pane_g1

0xd964,	// (0x000898ec) bg_button_pane_cp20

0xd4f5,	// (0x0008947d) cell_dia3_key1_fun_pane_g1

0xd4fd,	// (0x00089485) area_left_week_number_pane

0xd50e,	// (0x00089496) area_top_day_name_pane

0xd51a,	// (0x000894a2) frame_month_view_pane

0x40ed,	// (0x00080075) grid_month_view_pane

0xd52b,	// (0x000894b3) cell_top_day_name_pane_ParamLimits

0xd52b,	// (0x000894b3) cell_top_day_name_pane

0xd541,	// (0x000894c9) cell_area_left_week_number_pane_ParamLimits

0xd541,	// (0x000894c9) cell_area_left_week_number_pane

0xd560,	// (0x000894e8) cell_month_view_pane_ParamLimits

0xd560,	// (0x000894e8) cell_month_view_pane

0x40fb,	// (0x00080083) frm_month_g1

0xd586,	// (0x0008950e) frm_month_g2

0xd595,	// (0x0008951d) frm_month_g3

0xd5a4,	// (0x0008952c) frm_month_g4

0xd5b3,	// (0x0008953b) frm_month_g5

0xd5c2,	// (0x0008954a) frm_month_g6

0xd5d1,	// (0x00089559) frm_month_g7

0x4108,	// (0x00080090) frm_month_g8

0xd5e0,	// (0x00089568) frm_month_g9

0xd5ed,	// (0x00089575) frm_month_g10

0xd5fa,	// (0x00089582) frm_month_g11

0xd607,	// (0x0008958f) frm_month_g12

0xd614,	// (0x0008959c) frm_month_g13

0xd621,	// (0x000895a9) frm_month_g14

0xd62e,	// (0x000895b6) frm_month_g15

0xd63b,	// (0x000895c3) frm_month_g16

0x000f,

0xff1b,	// (0x0008bea3) frm_month_g

0x4115,	// (0x0008009d) cell_top_day_name_pane_t1

0xd648,	// (0x000895d0) cell_area_left_week_number_pane_g1

0xd657,	// (0x000895df) cell_area_left_week_number_pane_t1

0x1e96,	// (0x0007de1e) cell_month_view_pane_g1

0xd66d,	// (0x000895f5) cell_month_view_pane_t1

0xd964,	// (0x000898ec) main_fps_pane

0x351e,	// (0x0007f4a6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x351e,	// (0x0007f4a6) cmail_ddmenu_btn02_pane_cp1

0x353a,	// (0x0007f4c2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x353a,	// (0x0007f4c2) cmail_ddmenu_btn02_pane_cp2

0xcf19,	// (0x00088ea1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcf19,	// (0x00088ea1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0008bdc8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0008bdc8) cmail_ddmenu_btn02_pane_g

0xcf38,	// (0x00088ec0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcf38,	// (0x00088ec0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0008bdcd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0008bdcd) cmail_ddmenu_btn02_pane_t

0xd683,	// (0x0008960b) fps_text_pane_ParamLimits

0xd683,	// (0x0008960b) fps_text_pane

0xd690,	// (0x00089618) main_fps_pane_g1_ParamLimits

0xd690,	// (0x00089618) main_fps_pane_g1

0xd69c,	// (0x00089624) wait_bar_pane_cp010_ParamLimits

0xd69c,	// (0x00089624) wait_bar_pane_cp010

0xd6a8,	// (0x00089630) fps_text_pane_t1_ParamLimits

0xd6a8,	// (0x00089630) fps_text_pane_t1

0xa57e,	// (0x00086506) cam4_image_uncrop_pane_g1

0xa587,	// (0x0008650f) cam4_image_uncrop_pane_g2

0xa590,	// (0x00086518) cam4_image_uncrop_pane_g3

0xa599,	// (0x00086521) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0008b889) cam4_image_uncrop_pane_g

0xd4e8,	// (0x00089470) dia3_listrow_pane_ParamLimits

0xd964,	// (0x000898ec) main_phob2_pane

0xcb92,	// (0x00088b1a) cell_tport_appsw_pane_cp02_ParamLimits

0xcb92,	// (0x00088b1a) cell_tport_appsw_pane_cp02

0xcb9f,	// (0x00088b27) cell_tport_appsw_pane_cp03_ParamLimits

0xcb9f,	// (0x00088b27) cell_tport_appsw_pane_cp03

0xd964,	// (0x000898ec) phob2_contact_card_pane

0xd964,	// (0x000898ec) phob2_listscroll_pane

0x4140,	// (0x000800c8) phob2_list_pane

0x4148,	// (0x000800d0) scroll_pane_cp034

0xd6c1,	// (0x00089649) phob2_cc_data_pane_ParamLimits

0xd6c1,	// (0x00089649) phob2_cc_data_pane

0xd6d9,	// (0x00089661) phob2_cc_listscroll_pane_ParamLimits

0xd6d9,	// (0x00089661) phob2_cc_listscroll_pane

0xd6f1,	// (0x00089679) list_double_large_graphic_phob2_pane_ParamLimits

0xd6f1,	// (0x00089679) list_double_large_graphic_phob2_pane

0xd704,	// (0x0008968c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd704,	// (0x0008968c) list_double_large_graphic_phob2_pane_g1

0xd71a,	// (0x000896a2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd71a,	// (0x000896a2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0008bec4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0008bec4) list_double_large_graphic_phob2_pane_g

0xd726,	// (0x000896ae) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd726,	// (0x000896ae) list_double_large_graphic_phob2_pane_t1

0xd73c,	// (0x000896c4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd73c,	// (0x000896c4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0008bec9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0008bec9) list_double_large_graphic_phob2_pane_t

0xd964,	// (0x000898ec) list_highlight_pane_cp024

0xd751,	// (0x000896d9) phob2_cc_button_pane

0xd759,	// (0x000896e1) phob2_cc_data_pane_g1_ParamLimits

0xd759,	// (0x000896e1) phob2_cc_data_pane_g1

0xd765,	// (0x000896ed) phob2_cc_data_pane_g2_ParamLimits

0xd765,	// (0x000896ed) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0008bece) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0008bece) phob2_cc_data_pane_g

0xd771,	// (0x000896f9) phob2_cc_data_pane_t1_ParamLimits

0xd771,	// (0x000896f9) phob2_cc_data_pane_t1

0xd783,	// (0x0008970b) phob2_cc_data_pane_t2_ParamLimits

0xd783,	// (0x0008970b) phob2_cc_data_pane_t2

0xd795,	// (0x0008971d) phob2_cc_data_pane_t3_ParamLimits

0xd795,	// (0x0008971d) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0008bed3) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0008bed3) phob2_cc_data_pane_t

0x4150,	// (0x000800d8) phob2_cc_list_pane_ParamLimits

0x4150,	// (0x000800d8) phob2_cc_list_pane

0x274d,	// (0x0007e6d5) scroll_pane_cp035_ParamLimits

0x274d,	// (0x0007e6d5) scroll_pane_cp035

0x062b,	// (0x0007c5b3) bg_button_pane_cp033

0x415c,	// (0x000800e4) phob2_cc_button_pane_g1

0x4168,	// (0x000800f0) phob2_cc_button_pane_t1

0x417d,	// (0x00080105) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0008beda) phob2_cc_button_pane_t

0xd7a7,	// (0x0008972f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd7a7,	// (0x0008972f) list_double_large_graphic_phob2_cc_pane

0xd7c0,	// (0x00089748) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd7c0,	// (0x00089748) list_double_large_graphic_phob2_cc_pane_g1

0xd7d1,	// (0x00089759) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd7d1,	// (0x00089759) list_double_large_graphic_phob2_cc_pane_g2

0xd7e0,	// (0x00089768) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd7e0,	// (0x00089768) list_double_large_graphic_phob2_cc_pane_g3

0xd7ef,	// (0x00089777) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd7ef,	// (0x00089777) list_double_large_graphic_phob2_cc_pane_g4

0xd800,	// (0x00089788) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd800,	// (0x00089788) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0008bedf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0008bedf) list_double_large_graphic_phob2_cc_pane_g

0xd80f,	// (0x00089797) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd80f,	// (0x00089797) list_double_large_graphic_phob2_cc_pane_t1

0xd838,	// (0x000897c0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd838,	// (0x000897c0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0008beea) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0008beea) list_double_large_graphic_phob2_cc_pane_t

0x418f,	// (0x00080117) list_highlight_pane_cp025_ParamLimits

0x418f,	// (0x00080117) list_highlight_pane_cp025

0x062b,	// (0x0007c5b3) bg_button_pane_cp033_ParamLimits

0x415c,	// (0x000800e4) phob2_cc_button_pane_g1_ParamLimits

0x4168,	// (0x000800f0) phob2_cc_button_pane_t1_ParamLimits

0x417d,	// (0x00080105) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0008beda) phob2_cc_button_pane_t_ParamLimits

0x5bc6,	// (0x00081b4e) popup_wgtman_window

0x2535,	// (0x0007e4bd) scroll_pane_cp038

0xd2be,	// (0x00089246) wgtman_btn_pane_cp_01_ParamLimits

0xd2be,	// (0x00089246) wgtman_btn_pane_cp_01

0x419d,	// (0x00080125) wgtman_content_pane

0x41a6,	// (0x0008012e) wgtman_heading_pane

0xd964,	// (0x000898ec) bg_heading_pane_cp02

0x41af,	// (0x00080137) wgtman_heading_pane_g1

0x41b7,	// (0x0008013f) wgtman_heading_pane_t1

0x41c5,	// (0x0008014d) scroll_pane_cp036

0x41cd,	// (0x00080155) wgtman_list_pane

0x341d,	// (0x0007f3a5) wgtman_list_pane_t1_ParamLimits

0x341d,	// (0x0007f3a5) wgtman_list_pane_t1

0xa4e3,	// (0x0008646b) cam4_grid_pane

0xb196,	// (0x0008711e) bg_button_pane_cp015_ParamLimits

0xb1a6,	// (0x0008712e) bg_button_pane_cp016_ParamLimits

0xb1b9,	// (0x00087141) bg_button_pane_cp017_ParamLimits

0xb20b,	// (0x00087193) popup_vitu2_query_window_g3_ParamLimits

0xb20b,	// (0x00087193) popup_vitu2_query_window_g3

0xb2be,	// (0x00087246) popup_vitu2_query_window_t6_ParamLimits

0xb2be,	// (0x00087246) popup_vitu2_query_window_t6

0xb2e9,	// (0x00087271) popup_vitu2_query_window_t7_ParamLimits

0xb2e9,	// (0x00087271) popup_vitu2_query_window_t7

0x48a9,	// (0x00080831) cam4_grid_pane_g1

0x48b2,	// (0x0008083a) cam4_grid_pane_g2

0x41d5,	// (0x0008015d) cam4_grid_pane_g3

0x41de,	// (0x00080166) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0008beef) cam4_grid_pane_g

0x6b75,	// (0x00082afd) aid_placing_vt_slider_lsc_ParamLimits

0x6e1f,	// (0x00082da7) vidtel_button_pane_ParamLimits

0x6e1f,	// (0x00082da7) vidtel_button_pane

0xd964,	// (0x000898ec) bg_button_pane_cp034

0xd861,	// (0x000897e9) vidtel_button_pane_g1

0xd869,	// (0x000897f1) vidtel_button_pane_t1

0x2694,	// (0x0007e61c) aid_size_vtel_slider_touch

0x274d,	// (0x0007e6d5) scroll_pane_cp039

0xc039,	// (0x00087fc1) ncim_query_button_pane_cp01_ParamLimits

0xc058,	// (0x00087fe0) ncimui_query_pane_g1_ParamLimits

0x062b,	// (0x0007c5b3) input_focus_pane_cp012_ParamLimits

0x3018,	// (0x0007efa0) ncim_query_entry_pane_t1_ParamLimits

0x274d,	// (0x0007e6d5) scroll_pane_cp039_ParamLimits

0xeb71,	// (0x0008aaf9) navi_pane_bcale_mc_g1

0xeb79,	// (0x0008ab01) navi_pane_bcale_mc_t1

0x3583,	// (0x0007f50b) main_sp_fs_email_pane_g1

0x358f,	// (0x0007f517) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0008bc80) main_sp_fs_email_pane_g

0x3a6a,	// (0x0007f9f2) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3a6a,	// (0x0007f9f2) list_single_cale_mrui_row_pane_g3

0xcf56,	// (0x00088ede) list_single_recal_day_pane_g5_event_pane

0x3cac,	// (0x0007fc34) list_single_recal_day_pane_g7

0x41e7,	// (0x0008016f) list_recal_day_event_pane_cp01

0x41f0,	// (0x00080178) list_recal_vselct_arw_lo_pane_cp01

0x41f8,	// (0x00080180) list_recal_vselct_arw_up_pane_cp01

0x4200,	// (0x00080188) list_recal_vselct_pane_cp01

0x26a4,	// (0x0007e62c) list_recal_day_event_pane_cp01_g1

0x420a,	// (0x00080192) list_recal_day_event_pane_cp01_t1

0x3cb4,	// (0x0007fc3c) list_single_recal_day_pane_t1_ParamLimits

0x3cc6,	// (0x0007fc4e) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0008bddd) list_single_recal_day_pane_t_ParamLimits

0xe00e,	// (0x00089f96) bg_notes_pane_ParamLimits

0xe0bd,	// (0x0008a045) list_notes_pane_ParamLimits

0x5e8b,	// (0x00081e13) scroll_pane_cp06_ParamLimits

0xe0df,	// (0x0008a067) main_notes_pane_ParamLimits

0xd964,	// (0x000898ec) main_welc_pane

0xd87f,	// (0x00089807) main_welc_body_pane_ParamLimits

0xd87f,	// (0x00089807) main_welc_body_pane

0xd898,	// (0x00089820) main_welc_opti_pane_ParamLimits

0xd898,	// (0x00089820) main_welc_opti_pane

0xd8c5,	// (0x0008984d) main_welc_pane_t1_ParamLimits

0xd8c5,	// (0x0008984d) main_welc_pane_t1

0xd8dd,	// (0x00089865) main_welc_body_row_pane_ParamLimits

0xd8dd,	// (0x00089865) main_welc_body_row_pane

0x422b,	// (0x000801b3) main_welc_opti_row_pane_ParamLimits

0x422b,	// (0x000801b3) main_welc_opti_row_pane

0x4239,	// (0x000801c1) main_welc_opti_row_pane_g1

0xd8f1,	// (0x00089879) main_welc_opti_row_pane_t1

0x4241,	// (0x000801c9) main_welc_body_row_pane_t1

0x3f21,	// (0x0007fea9) popup_notif_wgt_heading_pane

0x3f3b,	// (0x0007fec3) aid_size_list_notif_wgt_del_ParamLimits

0x3f48,	// (0x0007fed0) list_notif_wgt_row_pane_g1_ParamLimits

0x3f54,	// (0x0007fedc) list_notif_wgt_row_pane_g2_ParamLimits

0x3f63,	// (0x0007feeb) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0008be44) list_notif_wgt_row_pane_g_ParamLimits

0x3f70,	// (0x0007fef8) list_notif_wgt_row_pane_t1_ParamLimits

0x3f86,	// (0x0007ff0e) list_notif_wgt_row_pane_t2_ParamLimits

0x3f98,	// (0x0007ff20) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0008be4b) list_notif_wgt_row_pane_t_ParamLimits

0xd335,	// (0x000892bd) listrow_wgtman_pane_g1_ParamLimits

0xd342,	// (0x000892ca) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0008be74) listrow_wgtman_pane_g_ParamLimits

0xd35a,	// (0x000892e2) listrow_wgtman_pane_t1_ParamLimits

0xd372,	// (0x000892fa) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0008be79) listrow_wgtman_pane_t_ParamLimits

0xd398,	// (0x00089320) wait_bar_pane_cp09_ParamLimits

0xd964,	// (0x000898ec) bg_popup_heading_pane_cp02

0x4250,	// (0x000801d8) popup_notif_wgt_heading_pane_g1

0x4258,	// (0x000801e0) popup_notif_wgt_heading_pane_t1

0xd964,	// (0x000898ec) main_vids_pane

0xd964,	// (0x000898ec) vids_listscroll_pane

0xd900,	// (0x00089888) scroll_pane_cp040

0xd964,	// (0x000898ec) vids_list_pane

0xd909,	// (0x00089891) vids_list_double_pane_ParamLimits

0xd909,	// (0x00089891) vids_list_double_pane

0xd91a,	// (0x000898a2) vids_list_double_pane_g1

0xd923,	// (0x000898ab) vids_list_double_pane_t1

0xd932,	// (0x000898ba) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x0008befd) vids_list_double_pane_t

0x8788,	// (0x00084710) main_ncimui_pane_ParamLimits

0xbe93,	// (0x00087e1b) main_ncimui_pane_g1_ParamLimits

0xbe9f,	// (0x00087e27) main_ncimui_pane_g2_ParamLimits

0xbe9f,	// (0x00087e27) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0008bb85) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0008bb85) main_ncimui_pane_g

0xd8ad,	// (0x00089835) main_welc_pane_g1_ParamLimits

0xd8ad,	// (0x00089835) main_welc_pane_g1

0xd8b9,	// (0x00089841) main_welc_pane_g2_ParamLimits

0xd8b9,	// (0x00089841) main_welc_pane_g2

0x0001,

0xff70,	// (0x0008bef8) main_welc_pane_g_ParamLimits

0xff70,	// (0x0008bef8) main_welc_pane_g

0xe00e,	// (0x00089f96) listscroll_mce_pane_ParamLimits

0xecc4,	// (0x0008ac4c) wait_bar_pane_cp10

0x17c6,	// (0x0007d74e) main_cale_day_pane_ParamLimits

0x17c6,	// (0x0007d74e) main_cale_week_pane_ParamLimits

0xe00e,	// (0x00089f96) main_messa_pane_ParamLimits

0x99a7,	// (0x0008592f) main_clock2_btn_pane_ParamLimits

0x99a7,	// (0x0008592f) main_clock2_btn_pane

0x2039,	// (0x0007dfc1) main_clock2_btn_pane_cp01_ParamLimits

0x2039,	// (0x0007dfc1) main_clock2_btn_pane_cp01

0x39f6,	// (0x0007f97e) list_cale_mrui_pane_ParamLimits

0x3fcc,	// (0x0007ff54) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0008be52) main_cf0_pane_g

0xd4fd,	// (0x00089485) area_left_week_number_pane_ParamLimits

0xd50e,	// (0x00089496) area_top_day_name_pane_ParamLimits

0xd51a,	// (0x000894a2) frame_month_view_pane_ParamLimits

0x40ed,	// (0x00080075) grid_month_view_pane_ParamLimits

0x40fb,	// (0x00080083) frm_month_g1_ParamLimits

0xd586,	// (0x0008950e) frm_month_g2_ParamLimits

0xd595,	// (0x0008951d) frm_month_g3_ParamLimits

0xd5a4,	// (0x0008952c) frm_month_g4_ParamLimits

0xd5b3,	// (0x0008953b) frm_month_g5_ParamLimits

0xd5c2,	// (0x0008954a) frm_month_g6_ParamLimits

0xd5d1,	// (0x00089559) frm_month_g7_ParamLimits

0x4108,	// (0x00080090) frm_month_g8_ParamLimits

0xd5e0,	// (0x00089568) frm_month_g9_ParamLimits

0xd5ed,	// (0x00089575) frm_month_g10_ParamLimits

0xd5fa,	// (0x00089582) frm_month_g11_ParamLimits

0xd607,	// (0x0008958f) frm_month_g12_ParamLimits

0xd614,	// (0x0008959c) frm_month_g13_ParamLimits

0xd621,	// (0x000895a9) frm_month_g14_ParamLimits

0xd62e,	// (0x000895b6) frm_month_g15_ParamLimits

0xd63b,	// (0x000895c3) frm_month_g16_ParamLimits

0xff1b,	// (0x0008bea3) frm_month_g_ParamLimits

0x4115,	// (0x0008009d) cell_top_day_name_pane_t1_ParamLimits

0xd648,	// (0x000895d0) cell_area_left_week_number_pane_g1_ParamLimits

0xd657,	// (0x000895df) cell_area_left_week_number_pane_t1_ParamLimits

0x1e96,	// (0x0007de1e) cell_month_view_pane_g1_ParamLimits

0xd66d,	// (0x000895f5) cell_month_view_pane_t1_ParamLimits

0xe006,	// (0x00089f8e) main_clock2_btn_pane_g1

0x4266,	// (0x000801ee) main_clock2_btn_pane_t1

0x062b,	// (0x0007c5b3) listscroll_cmail_pane_ParamLimits

0x3583,	// (0x0007f50b) main_sp_fs_email_pane_g1_ParamLimits

0x358f,	// (0x0007f517) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0008bc80) main_sp_fs_email_pane_g_ParamLimits

0x3c1c,	// (0x0007fba4) list_recal_day_pane_ParamLimits

0x3c2d,	// (0x0007fbb5) mian_recal_day_pane_t1

0xc873,	// (0x000887fb) list_single_dyc_row_text_pane_t4_ParamLimits

0xc873,	// (0x000887fb) list_single_dyc_row_text_pane_t4

0xc8aa,	// (0x00088832) list_single_dyc_row_text_pane_t5_ParamLimits

0xc8aa,	// (0x00088832) list_single_dyc_row_text_pane_t5

0x3657,	// (0x0007f5df) list_single_dyc_row_text_pane_t6_ParamLimits

0x3657,	// (0x0007f5df) list_single_dyc_row_text_pane_t6

0xe6a0,	// (0x0008a628) aid_mgn_list_cale_time_pane

0x8788,	// (0x00084710) main_gallery2_pane_ParamLimits

0x204d,	// (0x0007dfd5) main_clock2_pane_cp01_t1

0x205b,	// (0x0007dfe3) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0008b75f) main_clock2_pane_cp01_t

0x62e8,	// (0x00082270) cale_week_scroll_pane_g16_ParamLimits

0x62e8,	// (0x00082270) cale_week_scroll_pane_g16

0xe290,	// (0x0008a218) vorec_slider_pane

0xd869,	// (0x000897f1) vidtel_button_pane_t1_ParamLimits

0xcfad,	// (0x00088f35) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcfad,	// (0x00088f35) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcfba,	// (0x00088f42) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcfba,	// (0x00088f42) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x0008be00) main_fs_bigclock_clock_pane_g_ParamLimits

0xcfc6,	// (0x00088f4e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcfd9,	// (0x00088f61) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x0008be09) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
