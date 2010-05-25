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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0008b216 };

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
0x0dd8,	// (0x0008bfee) Screen

0x0de2,	// (0x0008bff8) application_window

0x0e18,	// (0x0008c02e) area_bottom_pane_ParamLimits

0x0e18,	// (0x0008c02e) area_bottom_pane

0x0e49,	// (0x0008c05f) area_top_pane_ParamLimits

0x0e49,	// (0x0008c05f) area_top_pane

0x9dd7,	// (0x00094fed) call_video_uplink_pane_ParamLimits

0x9dd7,	// (0x00094fed) call_video_uplink_pane

0x0ec3,	// (0x0008c0d9) main_pane_ParamLimits

0x0ec3,	// (0x0008c0d9) main_pane

0xa7c0,	// (0x000959d6) context_pane

0x4898,	// (0x0008faae) navi_pane

0x48c0,	// (0x0008fad6) popup_cale_events_window_ParamLimits

0x48c0,	// (0x0008fad6) popup_cale_events_window

0xa7d3,	// (0x000959e9) popup_mup_playback_window

0x48d7,	// (0x0008faed) signal_pane

0xe0df,	// (0x000992f5) main_browser_pane

0xe290,	// (0x000994a6) main_burst_pane

0x4610,	// (0x0008f826) main_calc_pane

0xa75e,	// (0x00095974) main_cale_day_pane

0x4624,	// (0x0008f83a) main_cale_month_pane

0xa75e,	// (0x00095974) main_cale_week_pane

0xe290,	// (0x000994a6) main_call_pane

0xddb3,	// (0x00098fc9) main_call_poc_pane

0xe290,	// (0x000994a6) main_camera_pane

0xe290,	// (0x000994a6) main_chi_dic_pane

0xea78,	// (0x00099c8e) main_clock_pane

0xddb3,	// (0x00098fc9) main_fmradio_pane

0xe290,	// (0x000994a6) main_graph_messa_pane

0xddb3,	// (0x00098fc9) main_help_pane

0xe0df,	// (0x000992f5) main_im_pane

0xe00e,	// (0x00099224) main_image_pane_ParamLimits

0xe00e,	// (0x00099224) main_image_pane

0xddb3,	// (0x00098fc9) main_location2_pane

0xe290,	// (0x000994a6) main_location_pane

0xe00e,	// (0x00099224) main_messa_pane

0xddb3,	// (0x00098fc9) main_mp2_pane

0xe290,	// (0x000994a6) main_mp_pane

0xddb3,	// (0x00098fc9) main_msg_pane

0xddb3,	// (0x00098fc9) main_mup_eq_pane

0xddb3,	// (0x00098fc9) main_mup_pane

0xe0df,	// (0x000992f5) main_notes_pane

0xddb3,	// (0x00098fc9) main_pec_pane

0xddb3,	// (0x00098fc9) main_phob_pane

0xddb3,	// (0x00098fc9) main_pinb_pane

0xddb3,	// (0x00098fc9) main_postcard_pane

0xddb3,	// (0x00098fc9) main_qdial_pane

0xe290,	// (0x000994a6) main_skin_pane

0xddb3,	// (0x00098fc9) main_smil2_pane

0xe290,	// (0x000994a6) main_smil_pane

0xe290,	// (0x000994a6) main_video_pane

0xe290,	// (0x000994a6) main_video_tele_pane

0xe00e,	// (0x00099224) main_viewer_pane_ParamLimits

0xe00e,	// (0x00099224) main_viewer_pane

0xe290,	// (0x000994a6) main_vorec_pane

0x4680,	// (0x0008f896) popup_blid_sat_info_window_ParamLimits

0x4680,	// (0x0008f896) popup_blid_sat_info_window

0x46de,	// (0x0008f8f4) popup_dyc_status_message_window_ParamLimits

0x46de,	// (0x0008f8f4) popup_dyc_status_message_window

0x46f4,	// (0x0008f90a) popup_grid_large_graphic_window_ParamLimits

0x46f4,	// (0x0008f90a) popup_grid_large_graphic_window

0x478e,	// (0x0008f9a4) popup_loc_request_window_ParamLimits

0x478e,	// (0x0008f9a4) popup_loc_request_window

0x4872,	// (0x0008fa88) popup_wml_address_window_ParamLimits

0x4872,	// (0x0008fa88) popup_wml_address_window

0x44a4,	// (0x0008f6ba) call_muted_g1

0x39b6,	// (0x0008ebcc) popup_call_audio_conf_window_ParamLimits

0x39b6,	// (0x0008ebcc) popup_call_audio_conf_window

0x44b4,	// (0x0008f6ca) popup_call_audio_first_window_ParamLimits

0x44b4,	// (0x0008f6ca) popup_call_audio_first_window

0x4512,	// (0x0008f728) popup_call_audio_in_window_ParamLimits

0x4512,	// (0x0008f728) popup_call_audio_in_window

0x453e,	// (0x0008f754) popup_call_audio_out_window_ParamLimits

0x453e,	// (0x0008f754) popup_call_audio_out_window

0x456c,	// (0x0008f782) popup_call_audio_second_window_ParamLimits

0x456c,	// (0x0008f782) popup_call_audio_second_window

0x45b2,	// (0x0008f7c8) popup_call_audio_wait_window_ParamLimits

0x45b2,	// (0x0008f7c8) popup_call_audio_wait_window

0x45e5,	// (0x0008f7fb) popup_number_entry_window_ParamLimits

0x45e5,	// (0x0008f7fb) popup_number_entry_window

0xd96e,	// (0x00098b84) bg_popup_call_pane_cp05_ParamLimits

0xd96e,	// (0x00098b84) bg_popup_call_pane_cp05

0xd98e,	// (0x00098ba4) popup_number_entry_window_t1

0xd9a1,	// (0x00098bb7) popup_number_entry_window_t2

0xd9b3,	// (0x00098bc9) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0009a2e0) popup_number_entry_window_t

0xd9f9,	// (0x00098c0f) text_title_cp2

0xda0c,	// (0x00098c22) bg_popup_call_pane_cp_ParamLimits

0xda0c,	// (0x00098c22) bg_popup_call_pane_cp

0xda1a,	// (0x00098c30) call_thumbnail_pane

0xda22,	// (0x00098c38) popup_call_audio_in_window_g1_ParamLimits

0xda22,	// (0x00098c38) popup_call_audio_in_window_g1

0xda2e,	// (0x00098c44) popup_call_audio_in_window_g2_ParamLimits

0xda2e,	// (0x00098c44) popup_call_audio_in_window_g2

0xda3a,	// (0x00098c50) popup_call_audio_in_window_g3_ParamLimits

0xda3a,	// (0x00098c50) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0009a2e9) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0009a2e9) popup_call_audio_in_window_g

0xda46,	// (0x00098c5c) popup_call_audio_in_window_t1_ParamLimits

0xda46,	// (0x00098c5c) popup_call_audio_in_window_t1

0xda61,	// (0x00098c77) popup_call_audio_in_window_t2_ParamLimits

0xda61,	// (0x00098c77) popup_call_audio_in_window_t2

0xda7c,	// (0x00098c92) popup_call_audio_in_window_t3_ParamLimits

0xda7c,	// (0x00098c92) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0009a2f0) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0009a2f0) popup_call_audio_in_window_t

0xda0c,	// (0x00098c22) bg_popup_call_pane_cp01_ParamLimits

0xda0c,	// (0x00098c22) bg_popup_call_pane_cp01

0xda1a,	// (0x00098c30) call_thumbnail_pane_cp02

0xda8f,	// (0x00098ca5) call_type_pane_cp022

0xda97,	// (0x00098cad) popup_call_audio_out_window_g1_ParamLimits

0xda97,	// (0x00098cad) popup_call_audio_out_window_g1

0xdaa9,	// (0x00098cbf) popup_call_audio_out_window_g2_ParamLimits

0xdaa9,	// (0x00098cbf) popup_call_audio_out_window_g2

0xdab5,	// (0x00098ccb) popup_call_audio_out_window_g3_ParamLimits

0xdab5,	// (0x00098ccb) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009a2f7) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009a2f7) popup_call_audio_out_window_g

0xdac7,	// (0x00098cdd) popup_call_audio_out_window_t1_ParamLimits

0xdac7,	// (0x00098cdd) popup_call_audio_out_window_t1

0xdadf,	// (0x00098cf5) popup_call_audio_out_window_t2_ParamLimits

0xdadf,	// (0x00098cf5) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0009a2fe) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0009a2fe) popup_call_audio_out_window_t

0xdaf4,	// (0x00098d0a) bg_popup_call_pane_ParamLimits

0xdaf4,	// (0x00098d0a) bg_popup_call_pane

0x1039,	// (0x0008c24f) call_thumbnail_pane_cp_ParamLimits

0x1039,	// (0x0008c24f) call_thumbnail_pane_cp

0xdb78,	// (0x00098d8e) call_type_pane_cp01_ParamLimits

0xdb78,	// (0x00098d8e) call_type_pane_cp01

0xdbbc,	// (0x00098dd2) popup_call_audio_first_window_g1_ParamLimits

0xdbbc,	// (0x00098dd2) popup_call_audio_first_window_g1

0xdc08,	// (0x00098e1e) popup_call_audio_first_window_g2_ParamLimits

0xdc08,	// (0x00098e1e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0009a303) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0009a303) popup_call_audio_first_window_g

0xdc4c,	// (0x00098e62) popup_call_audio_first_window_t1_ParamLimits

0xdc4c,	// (0x00098e62) popup_call_audio_first_window_t1

0xdcf8,	// (0x00098f0e) popup_call_audio_first_window_t4_ParamLimits

0xdcf8,	// (0x00098f0e) popup_call_audio_first_window_t4

0xdd84,	// (0x00098f9a) popup_call_audio_first_window_t5_ParamLimits

0xdd84,	// (0x00098f9a) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009a308) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009a308) popup_call_audio_first_window_t

0xddb3,	// (0x00098fc9) bg_popup_call_pane_cp02

0xddbd,	// (0x00098fd3) call_type_pane_cp023

0xddc5,	// (0x00098fdb) popup_call_audio_wait_window_g1

0xddcd,	// (0x00098fe3) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009a30f) popup_call_audio_wait_window_g

0xddd5,	// (0x00098feb) popup_call_audio_wait_window_t3

0xdde3,	// (0x00098ff9) bg_popup_call_pane_cp03_ParamLimits

0xdde3,	// (0x00098ff9) bg_popup_call_pane_cp03

0xde43,	// (0x00099059) call_thumbnail_pane_cp011_ParamLimits

0xde43,	// (0x00099059) call_thumbnail_pane_cp011

0xde4f,	// (0x00099065) call_type_pane_cp034_ParamLimits

0xde4f,	// (0x00099065) call_type_pane_cp034

0xde8b,	// (0x000990a1) popup_call_audio_second_window_g1_ParamLimits

0xde8b,	// (0x000990a1) popup_call_audio_second_window_g1

0xdec7,	// (0x000990dd) popup_call_audio_second_window_g2_ParamLimits

0xdec7,	// (0x000990dd) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009a314) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009a314) popup_call_audio_second_window_g

0xdf03,	// (0x00099119) popup_call_audio_second_window_t1_ParamLimits

0xdf03,	// (0x00099119) popup_call_audio_second_window_t1

0xdf84,	// (0x0009919a) popup_call_audio_second_window_t2_ParamLimits

0xdf84,	// (0x0009919a) popup_call_audio_second_window_t2

0xdfba,	// (0x000991d0) popup_call_audio_second_window_t3_ParamLimits

0xdfba,	// (0x000991d0) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009a319) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009a319) popup_call_audio_second_window_t

0xddb3,	// (0x00098fc9) bg_popup_call_pane_cp04

0xdff0,	// (0x00099206) list_conf_pane

0xdff8,	// (0x0009920e) popup_call_audio_conf_window_t1

0xe006,	// (0x0009921c) call_thumbnail_pane_g1

0xe00e,	// (0x00099224) bg_pinb_pane_ParamLimits

0xe00e,	// (0x00099224) bg_pinb_pane

0xe01c,	// (0x00099232) find_pinb_pane

0xe025,	// (0x0009923b) listscroll_pinb_pane_ParamLimits

0xe025,	// (0x0009923b) listscroll_pinb_pane

0xe034,	// (0x0009924a) pinb_bg_pane_g1

0x105d,	// (0x0008c273) pinb_bg_pane_g2

0x1067,	// (0x0008c27d) pinb_bg_pane_g3

0x1071,	// (0x0008c287) pinb_bg_pane_g4

0x107b,	// (0x0008c291) pinb_bg_pane_g5

0x1085,	// (0x0008c29b) pinb_bg_pane_g6

0x108e,	// (0x0008c2a4) pinb_bg_pane_g7

0x1097,	// (0x0008c2ad) pinb_bg_pane_g8

0x10a2,	// (0x0008c2b8) pinb_bg_pane_g9

0x10ac,	// (0x0008c2c2) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009a320) pinb_bg_pane_g

0x10c7,	// (0x0008c2dd) grid_pinb_pane

0x10d0,	// (0x0008c2e6) list_pinb_pane

0x10d9,	// (0x0008c2ef) scroll_pane_cp01_ParamLimits

0x10d9,	// (0x0008c2ef) scroll_pane_cp01

0xe03e,	// (0x00099254) find_pinb_pane_g1_ParamLimits

0xe03e,	// (0x00099254) find_pinb_pane_g1

0xe056,	// (0x0009926c) find_pinb_pane_t1

0xe068,	// (0x0009927e) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009a33a) find_pinb_pane_t

0xe07d,	// (0x00099293) input_focus_pane_cp01_ParamLimits

0xe07d,	// (0x00099293) input_focus_pane_cp01

0x10eb,	// (0x0008c301) cell_pinb_pane_ParamLimits

0x10eb,	// (0x0008c301) cell_pinb_pane

0x1103,	// (0x0008c319) cell_pinb_pane_g1_ParamLimits

0x1103,	// (0x0008c319) cell_pinb_pane_g1

0x1117,	// (0x0008c32d) cell_pinb_pane_g2_ParamLimits

0x1117,	// (0x0008c32d) cell_pinb_pane_g2

0xe089,	// (0x0009929f) cell_pinb_pane_g3_ParamLimits

0xe089,	// (0x0009929f) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0009a33f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0009a33f) cell_pinb_pane_g

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp01

0x1123,	// (0x0008c339) list_pinb_item_pane_ParamLimits

0x1123,	// (0x0008c339) list_pinb_item_pane

0xddb3,	// (0x00098fc9) list_highlight_pane_cp02

0x1134,	// (0x0008c34a) list_pinb_item_pane_g1_ParamLimits

0x1134,	// (0x0008c34a) list_pinb_item_pane_g1

0xe095,	// (0x000992ab) list_pinb_item_pane_g2_ParamLimits

0xe095,	// (0x000992ab) list_pinb_item_pane_g2

0x1141,	// (0x0008c357) list_pinb_item_pane_g3_ParamLimits

0x1141,	// (0x0008c357) list_pinb_item_pane_g3

0x1152,	// (0x0008c368) list_pinb_item_pane_g4_ParamLimits

0x1152,	// (0x0008c368) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009a346) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009a346) list_pinb_item_pane_g

0x115e,	// (0x0008c374) list_pinb_item_pane_t1_ParamLimits

0x115e,	// (0x0008c374) list_pinb_item_pane_t1

0x1193,	// (0x0008c3a9) calc_display_pane

0x11b5,	// (0x0008c3cb) calc_paper_pane

0x11d2,	// (0x0008c3e8) grid_calc_pane

0xddb3,	// (0x00098fc9) bg_list_pane_cp01

0x11f4,	// (0x0008c40a) clock_g1

0x11fc,	// (0x0008c412) clock_g2

0x0001,

0xf139,	// (0x0009a34f) clock_g

0x1204,	// (0x0008c41a) clock_t1_ParamLimits

0x1204,	// (0x0008c41a) clock_t1

0x1219,	// (0x0008c42f) clock_t2_ParamLimits

0x1219,	// (0x0008c42f) clock_t2

0x122b,	// (0x0008c441) clock_t3_ParamLimits

0x122b,	// (0x0008c441) clock_t3

0x123d,	// (0x0008c453) clock_t4_ParamLimits

0x123d,	// (0x0008c453) clock_t4

0x124f,	// (0x0008c465) clock_t5_ParamLimits

0x124f,	// (0x0008c465) clock_t5

0x1264,	// (0x0008c47a) clock_t6_ParamLimits

0x1264,	// (0x0008c47a) clock_t6

0x1276,	// (0x0008c48c) clock_t7_ParamLimits

0x1276,	// (0x0008c48c) clock_t7

0x1288,	// (0x0008c49e) clock_t8_ParamLimits

0x1288,	// (0x0008c49e) clock_t8

0x129a,	// (0x0008c4b0) clock_t9_ParamLimits

0x129a,	// (0x0008c4b0) clock_t9

0x0008,

0xf13e,	// (0x0009a354) clock_t_ParamLimits

0xf13e,	// (0x0009a354) clock_t

0xe0a1,	// (0x000992b7) popup_clock_analogue_window_cp02

0xe0a1,	// (0x000992b7) popup_clock_digital_window_cp01

0xe0a9,	// (0x000992bf) listscroll_help_pane

0xddb3,	// (0x00098fc9) phob_pre_status_pane

0xe0b3,	// (0x000992c9) grid_qdial_pane

0xe00e,	// (0x00099224) listscroll_mce_pane

0xe00e,	// (0x00099224) bg_notes_pane

0xe0bd,	// (0x000992d3) list_notes_pane

0x12ac,	// (0x0008c4c2) scroll_pane_cp06

0xe0cb,	// (0x000992e1) bg_calc_paper_pane

0x9e13,	// (0x00095029) list_calc_pane

0xe0df,	// (0x000992f5) bg_calc_display_pane

0x12be,	// (0x0008c4d4) calc_display_pane_t1

0x12d0,	// (0x0008c4e6) calc_display_pane_t2

0x9e2d,	// (0x00095043) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009a367) calc_display_pane_t

0x12e2,	// (0x0008c4f8) cell_calc_pane_ParamLimits

0x12e2,	// (0x0008c4f8) cell_calc_pane

0xe0eb,	// (0x00099301) bg_calc_paper_pane_g1

0xe0f7,	// (0x0009930d) bg_calc_paper_pane_g2

0xe103,	// (0x00099319) bg_calc_paper_pane_g3

0xe10f,	// (0x00099325) bg_calc_paper_pane_g4

0xe11b,	// (0x00099331) bg_calc_paper_pane_g5

0x1315,	// (0x0008c52b) bg_calc_paper_pane_g6

0x1324,	// (0x0008c53a) bg_calc_paper_pane_g7

0x1333,	// (0x0008c549) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0009a36e) bg_calc_paper_pane_g

0x1342,	// (0x0008c558) calc_bg_paper_pane_g9

0x1351,	// (0x0008c567) list_calc_item_pane_ParamLimits

0x1351,	// (0x0008c567) list_calc_item_pane

0xe127,	// (0x0009933d) list_calc_item_pane_g1

0x9e3f,	// (0x00095055) list_calc_item_pane_t1_ParamLimits

0x9e3f,	// (0x00095055) list_calc_item_pane_t1

0x1364,	// (0x0008c57a) list_calc_item_pane_t2_ParamLimits

0x1364,	// (0x0008c57a) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0009a37f) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0009a37f) list_calc_item_pane_t

0xe134,	// (0x0009934a) cell_calc_pane_g1

0xe13e,	// (0x00099354) grid_highlight_pane_cp02

0xe160,	// (0x00099376) bg_calc_display_pane_g1

0x9e51,	// (0x00095067) bg_calc_display_pane_g2

0xe169,	// (0x0009937f) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009a389) bg_calc_display_pane_g

0x1392,	// (0x0008c5a8) cell_qdial_pane_ParamLimits

0x1392,	// (0x0008c5a8) cell_qdial_pane

0x13a4,	// (0x0008c5ba) cell_qdial_pane_g1_ParamLimits

0x13a4,	// (0x0008c5ba) cell_qdial_pane_g1

0x13ba,	// (0x0008c5d0) cell_qdial_pane_g2_ParamLimits

0x13ba,	// (0x0008c5d0) cell_qdial_pane_g2

0xe172,	// (0x00099388) cell_qdial_pane_g3_ParamLimits

0xe172,	// (0x00099388) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009a390) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009a390) cell_qdial_pane_g

0x13e1,	// (0x0008c5f7) cell_qdial_pane_t1_ParamLimits

0x13e1,	// (0x0008c5f7) cell_qdial_pane_t1

0x13f9,	// (0x0008c60f) cell_qdial_pane_t2_ParamLimits

0x13f9,	// (0x0008c60f) cell_qdial_pane_t2

0x140c,	// (0x0008c622) cell_qdial_pane_t3_ParamLimits

0x140c,	// (0x0008c622) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009a399) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009a399) cell_qdial_pane_t

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp04

0xe17e,	// (0x00099394) thumbnail_qdial_pane_ParamLimits

0xe17e,	// (0x00099394) thumbnail_qdial_pane

0xe1da,	// (0x000993f0) list_help_pane

0xe1e3,	// (0x000993f9) scroll_pane_cp02

0x141f,	// (0x0008c635) help_list_pane_t1_ParamLimits

0x141f,	// (0x0008c635) help_list_pane_t1

0x9e5b,	// (0x00095071) bg_notes_pane_g2

0x9e63,	// (0x00095079) bg_notes_pane_g3

0x9e6b,	// (0x00095081) notes_bg_pane_g1

0x9e73,	// (0x00095089) notes_bg_pane_g4

0x9e7b,	// (0x00095091) notes_bg_pane_g5

0x9e83,	// (0x00095099) notes_bg_pane_g6

0x9e8b,	// (0x000950a1) notes_bg_pane_g7

0x9e93,	// (0x000950a9) notes_bg_pane_g8

0x9e9b,	// (0x000950b1) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0009a3b7) notes_bg_pane_g

0x143a,	// (0x0008c650) list_notes_text_pane_ParamLimits

0x143a,	// (0x0008c650) list_notes_text_pane

0xe1ec,	// (0x00099402) list_notes_text_pane_g1

0x144d,	// (0x0008c663) list_notes_text_pane_t1

0x145b,	// (0x0008c671) listscroll_cale_week_pane

0x1485,	// (0x0008c69b) bg_cale_heading_pane

0x149d,	// (0x0008c6b3) bg_cale_pane_cp01

0x14ba,	// (0x0008c6d0) cale_week_corner_pane

0x14d9,	// (0x0008c6ef) cale_week_day_heading_pane

0x14f6,	// (0x0008c70c) cale_week_scroll_pane_g1

0x1509,	// (0x0008c71f) cale_week_scroll_pane_g2

0x1521,	// (0x0008c737) cale_week_scroll_pane_g3

0x1539,	// (0x0008c74f) cale_week_scroll_pane_g4

0x1551,	// (0x0008c767) cale_week_scroll_pane_g5

0x1569,	// (0x0008c77f) cale_week_scroll_pane_g6

0x1581,	// (0x0008c797) cale_week_scroll_pane_g7

0x1599,	// (0x0008c7af) cale_week_scroll_pane_g8

0x15b5,	// (0x0008c7cb) cale_week_scroll_pane_g9

0x15cd,	// (0x0008c7e3) cale_week_scroll_pane_g10

0x15e5,	// (0x0008c7fb) cale_week_scroll_pane_g11

0x15fd,	// (0x0008c813) cale_week_scroll_pane_g12

0x1615,	// (0x0008c82b) cale_week_scroll_pane_g13

0x1615,	// (0x0008c82b) cale_week_scroll_pane_g14

0x1615,	// (0x0008c82b) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0009a3c6) cale_week_scroll_pane_g

0x1649,	// (0x0008c85f) cale_week_time_pane

0x1665,	// (0x0008c87b) grid_cale_week_pane

0xe221,	// (0x00099437) scroll_pane_cp08

0x167f,	// (0x0008c895) cell_cale_week_pane_ParamLimits

0x167f,	// (0x0008c895) cell_cale_week_pane

0x16f5,	// (0x0008c90b) cale_week_day_heading_pane_t1

0x171a,	// (0x0008c930) cale_week_day_heading_pane_t2

0x1744,	// (0x0008c95a) cale_week_day_heading_pane_t3

0x176e,	// (0x0008c984) cale_week_day_heading_pane_t4

0x1798,	// (0x0008c9ae) cale_week_day_heading_pane_t5

0x17c2,	// (0x0008c9d8) cale_week_day_heading_pane_t6

0x17ec,	// (0x0008ca02) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0009a3e7) cale_week_day_heading_pane_t

0xe23e,	// (0x00099454) bg_cale_side_pane

0x1811,	// (0x0008ca27) cale_week_time_pane_t1

0x184b,	// (0x0008ca61) cale_week_time_pane_t2

0x1885,	// (0x0008ca9b) cale_week_time_pane_t3

0x18bf,	// (0x0008cad5) cale_week_time_pane_t4

0x18f9,	// (0x0008cb0f) cale_week_time_pane_t5

0x1933,	// (0x0008cb49) cale_week_time_pane_t6

0x196d,	// (0x0008cb83) cale_week_time_pane_t7

0x19a7,	// (0x0008cbbd) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009a3f6) cale_week_time_pane_t

0x19e1,	// (0x0008cbf7) cell_cale_week_pane_g2

0x1a00,	// (0x0008cc16) cell_cale_week_pane_g3_ParamLimits

0x1a00,	// (0x0008cc16) cell_cale_week_pane_g3

0xe24c,	// (0x00099462) grid_highlight_pane_cp07

0xe254,	// (0x0009946a) listscroll_gms_pane

0xe25e,	// (0x00099474) grid_gms_pane

0xe267,	// (0x0009947d) listscroll_gms_pane_g1

0xe26f,	// (0x00099485) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009a407) listscroll_gms_pane_g

0x1a18,	// (0x0008cc2e) scroll_pane_cp010

0x1a23,	// (0x0008cc39) cell_gms_pane_ParamLimits

0x1a23,	// (0x0008cc39) cell_gms_pane

0x1a34,	// (0x0008cc4a) cell_gms_pane_g1

0xe277,	// (0x0009948d) cell_gms_pane_g2

0xe1ec,	// (0x00099402) cell_gms_pane_g3

0xe27f,	// (0x00099495) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009a40c) cell_gms_pane_g

0xe288,	// (0x0009949e) grid_highlight_pane_cp09

0x4452,	// (0x0008f668) phob_pre_status_pane_g1

0x445a,	// (0x0008f670) phob_pre_status_pane_g2

0x4462,	// (0x0008f678) phob_pre_status_pane_g3

0x446a,	// (0x0008f680) phob_pre_status_pane_g4

0x0004,

0xf58b,	// (0x0009a7a1) phob_pre_status_pane_g

0x447a,	// (0x0008f690) phob_pre_status_pane_t1

0x4488,	// (0x0008f69e) phob_pre_status_pane_t2

0x4496,	// (0x0008f6ac) phob_pre_status_pane_t3

0x0002,

0xf596,	// (0x0009a7ac) phob_pre_status_pane_t

0xe290,	// (0x000994a6) bg_list_pane_cp05

0x1a44,	// (0x0008cc5a) grid_vorec_pane

0x1a4c,	// (0x0008cc62) vorec_t1

0x1a5a,	// (0x0008cc70) vorec_t2

0x1a68,	// (0x0008cc7e) vorec_t3

0x1a76,	// (0x0008cc8c) vorec_t4

0x9d67,	// (0x00094f7d) vorec_t5

0x9d75,	// (0x00094f8b) vorec_t6

0x0004,

0xf1ff,	// (0x0009a415) vorec_t

0x9d83,	// (0x00094f99) wait_bar_pane_cp01

0x1a92,	// (0x0008cca8) cell_vorec_pane_ParamLimits

0x1a92,	// (0x0008cca8) cell_vorec_pane

0x9ea3,	// (0x000950b9) cell_vorec_pane_g1

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp05

0x1ab7,	// (0x0008cccd) cams_zoom_pane

0x1ac6,	// (0x0008ccdc) image_vga_pane

0x1adc,	// (0x0008ccf2) main_camera_pane_g1

0x1aec,	// (0x0008cd02) main_camera_pane_g2

0x1afc,	// (0x0008cd12) main_camera_pane_g3

0x1b0c,	// (0x0008cd22) main_camera_pane_g4

0x1b1c,	// (0x0008cd32) main_camera_pane_g5

0x1b2c,	// (0x0008cd42) main_camera_pane_g6

0x1b3c,	// (0x0008cd52) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009a420) main_camera_pane_g

0x1b4c,	// (0x0008cd62) main_camera_pane_t1

0x1b62,	// (0x0008cd78) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009a431) main_camera_pane_t

0x1b94,	// (0x0008cdaa) cams_zoom_pane_cp_ParamLimits

0x1b94,	// (0x0008cdaa) cams_zoom_pane_cp

0x1bbc,	// (0x0008cdd2) image_cif_pane_ParamLimits

0x1bbc,	// (0x0008cdd2) image_cif_pane

0x1beb,	// (0x0008ce01) image_subqcif_pane

0x1bf3,	// (0x0008ce09) main_video_pane_g1_ParamLimits

0x1bf3,	// (0x0008ce09) main_video_pane_g1

0x1c17,	// (0x0008ce2d) main_video_pane_g2_ParamLimits

0x1c17,	// (0x0008ce2d) main_video_pane_g2

0x1c4b,	// (0x0008ce61) main_video_pane_g3_ParamLimits

0x1c4b,	// (0x0008ce61) main_video_pane_g3

0x1c79,	// (0x0008ce8f) main_video_pane_g4_ParamLimits

0x1c79,	// (0x0008ce8f) main_video_pane_g4

0x1ca7,	// (0x0008cebd) main_video_pane_g5_ParamLimits

0x1ca7,	// (0x0008cebd) main_video_pane_g5

0xe2a4,	// (0x000994ba) main_video_pane_g6_ParamLimits

0xe2a4,	// (0x000994ba) main_video_pane_g6

0x0006,

0xf220,	// (0x0009a436) main_video_pane_g_ParamLimits

0xf220,	// (0x0009a436) main_video_pane_g

0x1cce,	// (0x0008cee4) main_video_pane_t1_ParamLimits

0x1cce,	// (0x0008cee4) main_video_pane_t1

0xe2be,	// (0x000994d4) cams_zoom_pane_g1

0xe2c7,	// (0x000994dd) cams_zoom_pane_g2

0xe2d0,	// (0x000994e6) cams_zoom_pane_g3

0xe2d9,	// (0x000994ef) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009a445) cams_zoom_pane_g

0x1d2b,	// (0x0008cf41) grid_cams_pane

0x1d40,	// (0x0008cf56) linegrid_cams_pane

0x1d51,	// (0x0008cf67) cell_cams_pane_ParamLimits

0x1d51,	// (0x0008cf67) cell_cams_pane

0xe2e2,	// (0x000994f8) cams_burst_image_pane

0xe2ea,	// (0x00099500) cell_cams_pane_g1

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp03

0xe134,	// (0x0009934a) mp_bg_pane_g1

0xddb3,	// (0x00098fc9) bg_list_pane_cp03

0xa683,	// (0x00095899) bg_mp_pane

0xa68b,	// (0x000958a1) grid_mp_pane

0xa693,	// (0x000958a9) media_player_g1

0xa69b,	// (0x000958b1) media_player_t1

0xa6a9,	// (0x000958bf) media_player_t2

0xa6b7,	// (0x000958cd) media_player_t3

0xa6c5,	// (0x000958db) media_player_t4

0xa6d3,	// (0x000958e9) media_player_t5

0xa6e1,	// (0x000958f7) media_player_t6

0xa6ef,	// (0x00095905) media_player_t7

0x0006,

0xf575,	// (0x0009a78b) media_player_t

0xa6fd,	// (0x00095913) wait_bar_pane_cp02

0xf55a,	// (0x0009a770) main_usb_pane_t

0x4449,	// (0x0008f65f) cell_mp_pane

0xe134,	// (0x0009934a) cell_mp_pane_g1

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp06

0xe2f2,	// (0x00099508) grid_skin_colour_pane

0xe2fa,	// (0x00099510) list_highlight_pane_cp03

0x1e83,	// (0x0008d099) skin_g1

0xe302,	// (0x00099518) skin_t1

0xe311,	// (0x00099527) skin_t2

0x0001,

0xf264,	// (0x0009a47a) skin_t

0x1e8b,	// (0x0008d0a1) cell_skin_colour_pane_ParamLimits

0x1e8b,	// (0x0008d0a1) cell_skin_colour_pane

0xe31f,	// (0x00099535) cell_skin_colour_pane_g1

0x1ef4,	// (0x0008d10a) call_video_g1_ParamLimits

0x1ef4,	// (0x0008d10a) call_video_g1

0x1f0a,	// (0x0008d120) call_video_g2_ParamLimits

0x1f0a,	// (0x0008d120) call_video_g2

0x0001,

0xf269,	// (0x0009a47f) call_video_g_ParamLimits

0xf269,	// (0x0009a47f) call_video_g

0x1f4f,	// (0x0008d165) call_video_uplink_pane_cp1_ParamLimits

0x1f4f,	// (0x0008d165) call_video_uplink_pane_cp1

0xe331,	// (0x00099547) call_video_uplink_pane_cp2

0x1fe4,	// (0x0008d1fa) video_down_crop_pane_ParamLimits

0x1fe4,	// (0x0008d1fa) video_down_crop_pane

0x20a7,	// (0x0008d2bd) video_down_pane_ParamLimits

0x20a7,	// (0x0008d2bd) video_down_pane

0xe339,	// (0x0009954f) video_down_subqcif_pane_ParamLimits

0xe339,	// (0x0009954f) video_down_subqcif_pane

0xe351,	// (0x00099567) video_down_subqcif_pane_cp_ParamLimits

0xe351,	// (0x00099567) video_down_subqcif_pane_cp

0xe375,	// (0x0009958b) im_reading_pane_ParamLimits

0xe375,	// (0x0009958b) im_reading_pane

0x2164,	// (0x0008d37a) im_writing_pane_ParamLimits

0x2164,	// (0x0008d37a) im_writing_pane

0x217a,	// (0x0008d390) im_reading_pane_t1

0xe38f,	// (0x000995a5) list_im_pane

0xe3a0,	// (0x000995b6) scroll_pane_cp07

0x21b0,	// (0x0008d3c6) im_writing_pane_t1_ParamLimits

0x21b0,	// (0x0008d3c6) im_writing_pane_t1

0xe3b9,	// (0x000995cf) im_writing_pane_t2_ParamLimits

0xe3b9,	// (0x000995cf) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009a489) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009a489) im_writing_pane_t

0xddb3,	// (0x00098fc9) input_focus_pane_cp04

0xddb3,	// (0x00098fc9) input_focus_pane_cp05

0x21c5,	// (0x0008d3db) list_im_single_pane_ParamLimits

0x21c5,	// (0x0008d3db) list_im_single_pane

0xe3d6,	// (0x000995ec) list_single_im_pane_t1

0x440f,	// (0x0008f625) blid_accuracy_pane

0x4417,	// (0x0008f62d) blid_compass_pane

0x441f,	// (0x0008f635) main_location_t1

0x442d,	// (0x0008f643) main_location_t2

0x443b,	// (0x0008f651) main_location_t3

0x0002,

0xf584,	// (0x0009a79a) main_location_t

0xddb3,	// (0x00098fc9) aid_levels_location

0xe134,	// (0x0009934a) blid_accuracy_pane_g1

0xe134,	// (0x0009934a) blid_accuracy_pane_g2

0x0001,

0x0047,	// (0x0008b25d) blid_accuracy_pane_g

0xe410,	// (0x00099626) wml_content_pane

0xe44e,	// (0x00099664) wml_button_pane_ParamLimits

0xe44e,	// (0x00099664) wml_button_pane

0x1a92,	// (0x0008cca8) wml_list_single_large_pane_ParamLimits

0x1a92,	// (0x0008cca8) wml_list_single_large_pane

0x21d8,	// (0x0008d3ee) wml_list_single_medium_pane_ParamLimits

0x21d8,	// (0x0008d3ee) wml_list_single_medium_pane

0x21ec,	// (0x0008d402) wml_list_single_small_pane_ParamLimits

0x21ec,	// (0x0008d402) wml_list_single_small_pane

0xe462,	// (0x00099678) wml_selection_box_pane_ParamLimits

0xe462,	// (0x00099678) wml_selection_box_pane

0xe475,	// (0x0009968b) wml_list_single_pane_t1

0xe484,	// (0x0009969a) wml_list_single_medium_pane_t1

0xe493,	// (0x000996a9) wml_list_single_large_pane_t1

0xe4a2,	// (0x000996b8) input_focus_pane_cp02_ParamLimits

0xe4a2,	// (0x000996b8) input_focus_pane_cp02

0xe4b5,	// (0x000996cb) wml_selection_box_pane_g1

0xe4be,	// (0x000996d4) wml_selection_box_pane_t1_ParamLimits

0xe4be,	// (0x000996d4) wml_selection_box_pane_t1

0xe00e,	// (0x00099224) bg_wml_button_pane_ParamLimits

0xe00e,	// (0x00099224) bg_wml_button_pane

0xe4d6,	// (0x000996ec) wml_button_pane_g1

0xe4de,	// (0x000996f4) wml_button_pane_t1

0xe4d6,	// (0x000996ec) wml_button_bg_pane_g1

0xe4ee,	// (0x00099704) wml_button_bg_pane_g2

0xe4f6,	// (0x0009970c) wml_button_bg_pane_g3

0xe4fe,	// (0x00099714) wml_button_bg_pane_g4

0xe506,	// (0x0009971c) wml_button_bg_pane_g5

0xe50e,	// (0x00099724) wml_button_bg_pane_g6

0xe516,	// (0x0009972c) wml_button_bg_pane_g7

0xe51e,	// (0x00099734) wml_button_bg_pane_g8

0xe526,	// (0x0009973c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009a48e) wml_button_bg_pane_g

0x2202,	// (0x0008d418) bg_list_pane_cp02

0xe52e,	// (0x00099744) mce_header_pane_ParamLimits

0xe52e,	// (0x00099744) mce_header_pane

0xe544,	// (0x0009975a) mce_icon_pane

0xe544,	// (0x0009975a) mce_image_pane

0xe54d,	// (0x00099763) mce_text_pane_ParamLimits

0xe54d,	// (0x00099763) mce_text_pane

0x220a,	// (0x0008d420) scroll_pane_cp03

0xe446,	// (0x0009965c) scroll_pane_cp04

0xe560,	// (0x00099776) scroll_pane_cp05_ParamLimits

0xe560,	// (0x00099776) scroll_pane_cp05

0x2214,	// (0x0008d42a) mce_header_field_pane_ParamLimits

0x2214,	// (0x0008d42a) mce_header_field_pane

0x222b,	// (0x0008d441) mce_header_field_pane_2_ParamLimits

0x222b,	// (0x0008d441) mce_header_field_pane_2

0x2241,	// (0x0008d457) mce_header_field_pane_3

0x2249,	// (0x0008d45f) list_single_mce_message_pane_ParamLimits

0x2249,	// (0x0008d45f) list_single_mce_message_pane

0x225c,	// (0x0008d472) list_single_mce_smart_pane_ParamLimits

0x225c,	// (0x0008d472) list_single_mce_smart_pane

0xe56c,	// (0x00099782) input_focus_pane_cp03

0xe575,	// (0x0009978b) list_header_data_pane

0x227a,	// (0x0008d490) mce_header_field_pane_t1

0x2288,	// (0x0008d49e) list_single_mce_header_pane_ParamLimits

0x2288,	// (0x0008d49e) list_single_mce_header_pane

0xe57d,	// (0x00099793) list_single_mce_header_pane_t1

0xe58c,	// (0x000997a2) list_single_mce_message_pane_g1

0xe594,	// (0x000997aa) list_single_mce_message_pane_t1

0x22c2,	// (0x0008d4d8) bg_cale_heading_pane_cp01_ParamLimits

0x22c2,	// (0x0008d4d8) bg_cale_heading_pane_cp01

0xe5a2,	// (0x000997b8) bg_cale_pane_cp02_ParamLimits

0xe5a2,	// (0x000997b8) bg_cale_pane_cp02

0x22fc,	// (0x0008d512) cale_month_corner_pane

0x231b,	// (0x0008d531) cale_month_day_heading_pane_ParamLimits

0x231b,	// (0x0008d531) cale_month_day_heading_pane

0x2361,	// (0x0008d577) cale_month_pane_g1_ParamLimits

0x2361,	// (0x0008d577) cale_month_pane_g1

0x2390,	// (0x0008d5a6) cale_month_pane_g2_ParamLimits

0x2390,	// (0x0008d5a6) cale_month_pane_g2

0x23b8,	// (0x0008d5ce) cale_month_pane_g3_ParamLimits

0x23b8,	// (0x0008d5ce) cale_month_pane_g3

0x23f4,	// (0x0008d60a) cale_month_pane_g4_ParamLimits

0x23f4,	// (0x0008d60a) cale_month_pane_g4

0x2430,	// (0x0008d646) cale_month_pane_g5_ParamLimits

0x2430,	// (0x0008d646) cale_month_pane_g5

0x246c,	// (0x0008d682) cale_month_pane_g6_ParamLimits

0x246c,	// (0x0008d682) cale_month_pane_g6

0x24a8,	// (0x0008d6be) cale_month_pane_g7_ParamLimits

0x24a8,	// (0x0008d6be) cale_month_pane_g7

0x24e4,	// (0x0008d6fa) cale_month_pane_g8_ParamLimits

0x24e4,	// (0x0008d6fa) cale_month_pane_g8

0x2528,	// (0x0008d73e) cale_month_pane_g9_ParamLimits

0x2528,	// (0x0008d73e) cale_month_pane_g9

0x256e,	// (0x0008d784) cale_month_pane_g10_ParamLimits

0x256e,	// (0x0008d784) cale_month_pane_g10

0x25b4,	// (0x0008d7ca) cale_month_pane_g11_ParamLimits

0x25b4,	// (0x0008d7ca) cale_month_pane_g11

0x25fa,	// (0x0008d810) cale_month_pane_g12_ParamLimits

0x25fa,	// (0x0008d810) cale_month_pane_g12

0x2640,	// (0x0008d856) cale_month_pane_g13_ParamLimits

0x2640,	// (0x0008d856) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009a4a1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009a4a1) cale_month_pane_g

0x2686,	// (0x0008d89c) cale_month_week_pane

0x26a2,	// (0x0008d8b8) grid_cale_month_pane_ParamLimits

0x26a2,	// (0x0008d8b8) grid_cale_month_pane

0x26df,	// (0x0008d8f5) cale_month_day_heading_pane_t1

0x2765,	// (0x0008d97b) cale_month_day_heading_pane_t2

0x27de,	// (0x0008d9f4) cale_month_day_heading_pane_t3

0x2857,	// (0x0008da6d) cale_month_day_heading_pane_t4

0x28d0,	// (0x0008dae6) cale_month_day_heading_pane_t5

0x2949,	// (0x0008db5f) cale_month_day_heading_pane_t6

0x29c2,	// (0x0008dbd8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009a4bc) cale_month_day_heading_pane_t

0xe23e,	// (0x00099454) bg_cale_side_pane_cp01

0x2a3f,	// (0x0008dc55) cale_month_week_pane_t1

0x2a58,	// (0x0008dc6e) cale_month_week_pane_t2

0x2a71,	// (0x0008dc87) cale_month_week_pane_t3

0x2a8a,	// (0x0008dca0) cale_month_week_pane_t4

0x2aa3,	// (0x0008dcb9) cale_month_week_pane_t5

0x2abc,	// (0x0008dcd2) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009a4cb) cale_month_week_pane_t

0x2ad5,	// (0x0008dceb) cell_cale_month_pane_ParamLimits

0x2ad5,	// (0x0008dceb) cell_cale_month_pane

0x9ead,	// (0x000950c3) cell_cale_month_pane_g1

0x2bf1,	// (0x0008de07) cell_cale_month_pane_t1_ParamLimits

0x2bf1,	// (0x0008de07) cell_cale_month_pane_t1

0xe24c,	// (0x00099462) grid_highlight_pane_cp08

0xe134,	// (0x0009934a) main_smil_g1

0x2c1d,	// (0x0008de33) smil_status_pane

0xe5e1,	// (0x000997f7) smil_text_pane

0xa563,	// (0x00095779) bg_popup_call3_rect_pane_g8

0xa56b,	// (0x00095781) bg_popup_call3_rect_pane_g9

0x0008,

0xf505,	// (0x0009a71b) bg_popup_call3_rect_pane_g

0xa83a,	// (0x00095a50) smil_status_volume_pane_g1

0xe5eb,	// (0x00099801) smil_status_pane_t1

0xa86d,	// (0x00095a83) volume_smil_pane

0xe602,	// (0x00099818) list_smil_text_pane

0x2c2e,	// (0x0008de44) scroll_pane_cp011

0x2c39,	// (0x0008de4f) smil_text_list_pane_t1_ParamLimits

0x2c39,	// (0x0008de4f) smil_text_list_pane_t1

0x9eb9,	// (0x000950cf) aid_volume_smil_ParamLimits

0x9eb9,	// (0x000950cf) aid_volume_smil

0xe134,	// (0x0009934a) smil_volume_pane_g1

0xe134,	// (0x0009934a) smil_volume_pane_g2

0x0001,

0x0047,	// (0x0008b25d) smil_volume_pane_g

0x145b,	// (0x0008c671) listscroll_cale_day_pane

0xe60c,	// (0x00099822) bg_cale_pane

0xe624,	// (0x0009983a) list_cale_pane

0xe647,	// (0x0009985d) scroll_pane_cp09

0xe658,	// (0x0009986e) cale_bg_pane_g1

0xe660,	// (0x00099876) cale_bg_pane_g2

0xe668,	// (0x0009987e) cale_bg_pane_g3

0xe670,	// (0x00099886) cale_bg_pane_g4

0xe678,	// (0x0009988e) cale_bg_pane_g5

0xe680,	// (0x00099896) cale_bg_pane_g6

0xe688,	// (0x0009989e) cale_bg_pane_g7

0xe690,	// (0x000998a6) cale_bg_pane_g8

0xe698,	// (0x000998ae) cale_bg_pane_g9

0x0008,

0x004c,	// (0x0008b262) cale_bg_pane_g

0x2c6f,	// (0x0008de85) list_cale_time_pane_ParamLimits

0x2c6f,	// (0x0008de85) list_cale_time_pane

0xe6a8,	// (0x000998be) list_cale_time_pane_g1_ParamLimits

0xe6a8,	// (0x000998be) list_cale_time_pane_g1

0xe6b4,	// (0x000998ca) list_cale_time_pane_g2_ParamLimits

0xe6b4,	// (0x000998ca) list_cale_time_pane_g2

0x2c82,	// (0x0008de98) list_cale_time_pane_g3_ParamLimits

0x2c82,	// (0x0008de98) list_cale_time_pane_g3

0x2c8e,	// (0x0008dea4) list_cale_time_pane_g4_ParamLimits

0x2c8e,	// (0x0008dea4) list_cale_time_pane_g4

0x2c9a,	// (0x0008deb0) list_cale_time_pane_g5_ParamLimits

0x2c9a,	// (0x0008deb0) list_cale_time_pane_g5

0x0005,

0xf2d5,	// (0x0009a4eb) list_cale_time_pane_g_ParamLimits

0xf2d5,	// (0x0009a4eb) list_cale_time_pane_g

0xe6ce,	// (0x000998e4) list_cale_time_pane_t1_ParamLimits

0xe6ce,	// (0x000998e4) list_cale_time_pane_t1

0xe6f6,	// (0x0009990c) list_cale_time_pane_t2_ParamLimits

0xe6f6,	// (0x0009990c) list_cale_time_pane_t2

0x3027,	// (0x0008e23d) aid_blid_cardinal_pane

0x3065,	// (0x0008e27b) compass_pane_t4

0xe71e,	// (0x00099934) list_cale_time_pane_t4_ParamLimits

0xe71e,	// (0x00099934) list_cale_time_pane_t4

0x3073,	// (0x0008e289) compass_pane_t5

0x3081,	// (0x0008e297) compass_pane_t6

0x308f,	// (0x0008e2a5) compass_pane_t7

0xeb90,	// (0x00099da6) navi_pane_cc_t1

0xed6b,	// (0x00099f81) aid_phob_thumbnail_center_pane

0x368d,	// (0x0008e8a3) main_postcard_pane_g4_ParamLimits

0x0002,

0x006c,	// (0x0008b282) list_cale_time_pane_t_ParamLimits

0x006c,	// (0x0008b282) list_cale_time_pane_t

0xda0c,	// (0x00098c22) bg_popup_window_pane_cp02_ParamLimits

0xda0c,	// (0x00098c22) bg_popup_window_pane_cp02

0xe746,	// (0x0009995c) heading_pane_cp01_ParamLimits

0xe746,	// (0x0009995c) heading_pane_cp01

0xe752,	// (0x00099968) loc_req_pane_ParamLimits

0xe752,	// (0x00099968) loc_req_pane

0xe762,	// (0x00099978) loc_type_pane_ParamLimits

0xe762,	// (0x00099978) loc_type_pane

0xe774,	// (0x0009998a) loc_type_pane_t1_ParamLimits

0xe774,	// (0x0009998a) loc_type_pane_t1

0xe786,	// (0x0009999c) loc_type_pane_t2_ParamLimits

0xe786,	// (0x0009999c) loc_type_pane_t2

0xe798,	// (0x000999ae) loc_type_pane_t3_ParamLimits

0xe798,	// (0x000999ae) loc_type_pane_t3

0x0002,

0x0073,	// (0x0008b289) loc_type_pane_t_ParamLimits

0x0073,	// (0x0008b289) loc_type_pane_t

0xe7aa,	// (0x000999c0) list_loc_req_pane

0xe7b4,	// (0x000999ca) scroll_pane_cp012

0x2ca6,	// (0x0008debc) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ca6,	// (0x0008debc) list_single_loc_request_popup_menu_pane

0xe7bd,	// (0x000999d3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe7bd,	// (0x000999d3) list_single_loc_request_popup_menu_pane_g1

0xe7c9,	// (0x000999df) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe7c9,	// (0x000999df) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2e2,	// (0x0009a4f8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2e2,	// (0x0009a4f8) list_single_loc_request_popup_menu_pane_g

0xe7d5,	// (0x000999eb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe7d5,	// (0x000999eb) list_single_loc_request_popup_menu_pane_t1

0xe00e,	// (0x00099224) bg_popup_window_pane_cp03_ParamLimits

0xe00e,	// (0x00099224) bg_popup_window_pane_cp03

0xefb5,	// (0x0009a1cb) heading_loc_req_pane_ParamLimits

0xefb5,	// (0x0009a1cb) heading_loc_req_pane

0x2cb3,	// (0x0008dec9) popup_dyc_status_message_window_g1_ParamLimits

0x2cb3,	// (0x0008dec9) popup_dyc_status_message_window_g1

0x2cc7,	// (0x0008dedd) popup_dyc_status_message_window_t1_ParamLimits

0x2cc7,	// (0x0008dedd) popup_dyc_status_message_window_t1

0x2cdc,	// (0x0008def2) popup_dyc_status_message_window_t2_ParamLimits

0x2cdc,	// (0x0008def2) popup_dyc_status_message_window_t2

0x2cf1,	// (0x0008df07) popup_dyc_status_message_window_t3_ParamLimits

0x2cf1,	// (0x0008df07) popup_dyc_status_message_window_t3

0x0002,

0xf2e7,	// (0x0009a4fd) popup_dyc_status_message_window_t_ParamLimits

0xf2e7,	// (0x0009a4fd) popup_dyc_status_message_window_t

0xddb3,	// (0x00098fc9) bg_heading_pane_cp01

0xe7eb,	// (0x00099a01) heading_loc_req_pane_g1

0xe7f3,	// (0x00099a09) heading_loc_req_pane_g2

0xe7fb,	// (0x00099a11) heading_loc_req_pane_g3

0x0002,

0xf2ee,	// (0x0009a504) heading_loc_req_pane_g

0xe803,	// (0x00099a19) heading_loc_req_pane_t1

0xe812,	// (0x00099a28) bg_popup_sub_pane_cp01_ParamLimits

0xe812,	// (0x00099a28) bg_popup_sub_pane_cp01

0xe820,	// (0x00099a36) popup_cale_events_window_g1_ParamLimits

0xe820,	// (0x00099a36) popup_cale_events_window_g1

0xe840,	// (0x00099a56) popup_cale_events_window_g2_ParamLimits

0xe840,	// (0x00099a56) popup_cale_events_window_g2

0x0001,

0xf322,	// (0x0009a538) popup_cale_events_window_g_ParamLimits

0xf322,	// (0x0009a538) popup_cale_events_window_g

0xe860,	// (0x00099a76) popup_cale_events_window_t1_ParamLimits

0xe860,	// (0x00099a76) popup_cale_events_window_t1

0xe884,	// (0x00099a9a) popup_cale_events_window_t2_ParamLimits

0xe884,	// (0x00099a9a) popup_cale_events_window_t2

0xe8c2,	// (0x00099ad8) popup_cale_events_window_t3_ParamLimits

0xe8c2,	// (0x00099ad8) popup_cale_events_window_t3

0xe8fc,	// (0x00099b12) popup_cale_events_window_t4_ParamLimits

0xe8fc,	// (0x00099b12) popup_cale_events_window_t4

0x0003,

0xf327,	// (0x0009a53d) popup_cale_events_window_t_ParamLimits

0xf327,	// (0x0009a53d) popup_cale_events_window_t

0x2df4,	// (0x0008e00a) call_type_pane

0x2e04,	// (0x0008e01a) popup_call_status_window_g1

0x2e18,	// (0x0008e02e) popup_call_status_window_g2

0x2e2c,	// (0x0008e042) popup_call_status_window_g3

0x0002,

0xf330,	// (0x0009a546) popup_call_status_window_g

0xe932,	// (0x00099b48) call_type_pane_g1

0xe93b,	// (0x00099b51) call_type_pane_g2

0x0001,

0xf337,	// (0x0009a54d) call_type_pane_g

0xddb3,	// (0x00098fc9) bg_popup_sub_pane_cp02

0xe944,	// (0x00099b5a) listscroll_popup_wml_pane

0xe94c,	// (0x00099b62) list_wml_pane

0xe956,	// (0x00099b6c) scroll_pane_cp013

0x2e3b,	// (0x0008e051) list_single_graphic_popup_wml_pane_ParamLimits

0x2e3b,	// (0x0008e051) list_single_graphic_popup_wml_pane

0xe134,	// (0x0009934a) list_single_graphic_popup_wml_pane_g1

0xe95f,	// (0x00099b75) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf33c,	// (0x0009a552) list_single_graphic_popup_wml_pane_g

0xe967,	// (0x00099b7d) list_single_graphic_popup_wml_pane_t1

0xe97d,	// (0x00099b93) aid_call_pane

0xe006,	// (0x0009921c) popup_clock_analogue_window_g1

0xe006,	// (0x0009921c) popup_clock_analogue_window_g2

0x9edb,	// (0x000950f1) popup_clock_analogue_window_g3

0x9edb,	// (0x000950f1) popup_clock_analogue_window_g4

0xe134,	// (0x0009934a) popup_clock_analogue_window_g5

0x0004,

0xf341,	// (0x0009a557) popup_clock_analogue_window_g

0x9ee3,	// (0x000950f9) popup_clock_analogue_window_t1

0x9ef1,	// (0x00095107) clock_digital_number_pane_ParamLimits

0x9ef1,	// (0x00095107) clock_digital_number_pane

0x9efd,	// (0x00095113) clock_digital_number_pane_cp02_ParamLimits

0x9efd,	// (0x00095113) clock_digital_number_pane_cp02

0x9f09,	// (0x0009511f) clock_digital_number_pane_cp03_ParamLimits

0x9f09,	// (0x0009511f) clock_digital_number_pane_cp03

0x9f15,	// (0x0009512b) clock_digital_number_pane_cp04_ParamLimits

0x9f15,	// (0x0009512b) clock_digital_number_pane_cp04

0x9f21,	// (0x00095137) clock_digital_separator_pane_ParamLimits

0x9f21,	// (0x00095137) clock_digital_separator_pane

0x9f2d,	// (0x00095143) popup_clock_digital_window_t1

0xe134,	// (0x0009934a) clock_digital_number_pane_g1

0xe134,	// (0x0009934a) clock_digital_number_pane_g2

0x0001,

0x0047,	// (0x0008b25d) clock_digital_number_pane_g

0xe134,	// (0x0009934a) clock_digital_separator_pane_g1

0xe134,	// (0x0009934a) clock_digital_separator_pane_g2

0x0001,

0x0047,	// (0x0008b25d) clock_digital_separator_pane_g

0xddb3,	// (0x00098fc9) bg_popup_window_pane_cp04

0xe985,	// (0x00099b9b) heading_pane_cp03

0xe98d,	// (0x00099ba3) listscroll_popup_gms_pane

0xe995,	// (0x00099bab) grid_large_graphic_popup_pane

0xe99f,	// (0x00099bb5) listscroll_popup_gms_pane_g1

0xe9a7,	// (0x00099bbd) listscroll_popup_gms_pane_g2

0x0001,

0xf34c,	// (0x0009a562) listscroll_popup_gms_pane_g

0xe446,	// (0x0009965c) scroll_pane_cp014

0x2e4d,	// (0x0008e063) cell_large_graphic_popup_pane_ParamLimits

0x2e4d,	// (0x0008e063) cell_large_graphic_popup_pane

0x2e63,	// (0x0008e079) cell_large_graphic_popup_pane_g1_ParamLimits

0x2e63,	// (0x0008e079) cell_large_graphic_popup_pane_g1

0xe9af,	// (0x00099bc5) cell_large_graphic_popup_pane_g2_ParamLimits

0xe9af,	// (0x00099bc5) cell_large_graphic_popup_pane_g2

0xe9bb,	// (0x00099bd1) cell_large_graphic_popup_pane_g3_ParamLimits

0xe9bb,	// (0x00099bd1) cell_large_graphic_popup_pane_g3

0xe9c8,	// (0x00099bde) cell_large_graphic_popup_pane_g4_ParamLimits

0xe9c8,	// (0x00099bde) cell_large_graphic_popup_pane_g4

0x0003,

0xf351,	// (0x0009a567) cell_large_graphic_popup_pane_g_ParamLimits

0xf351,	// (0x0009a567) cell_large_graphic_popup_pane_g

0xe9d8,	// (0x00099bee) grid_highlight_pane_cp010

0xe134,	// (0x0009934a) bg_popup_call_pane_g1

0xe9e2,	// (0x00099bf8) list_single_graphic_popup_conf_pane_ParamLimits

0xe9e2,	// (0x00099bf8) list_single_graphic_popup_conf_pane

0xe9f5,	// (0x00099c0b) list_highlight_pane_cp01

0xe9fe,	// (0x00099c14) list_single_graphic_popup_conf_pane_g1

0xea06,	// (0x00099c1c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf35a,	// (0x0009a570) list_single_graphic_popup_conf_pane_g

0xea0e,	// (0x00099c24) list_single_graphic_popup_conf_pane_t1

0xea1c,	// (0x00099c32) linegrid_cams_pane_g1

0x2e6f,	// (0x0008e085) linegrid_cams_pane_g2

0xe1ec,	// (0x00099402) linegrid_cams_pane_g3

0xea25,	// (0x00099c3b) linegrid_cams_pane_g4

0x2e78,	// (0x0008e08e) linegrid_cams_pane_g5

0x2e81,	// (0x0008e097) linegrid_cams_pane_g6

0xe27f,	// (0x00099495) linegrid_cams_pane_g7

0x0006,

0xf35f,	// (0x0009a575) linegrid_cams_pane_g

0xea2e,	// (0x00099c44) popup_clock_analogue_window

0xea2e,	// (0x00099c44) popup_clock_digital_window

0xddb3,	// (0x00098fc9) popup_phob_thumbnail_window

0xe134,	// (0x0009934a) call_video_uplink_pane_g1

0xea37,	// (0x00099c4d) call_video_uplink_pane_g2

0x0001,

0xf36e,	// (0x0009a584) call_video_uplink_pane_g

0xe24c,	// (0x00099462) video_uplink_pane

0xea4d,	// (0x00099c63) mce_image_pane_g1

0x2e8a,	// (0x0008e0a0) mce_image_pane_g2

0x2e92,	// (0x0008e0a8) mce_image_pane_g3

0x2e9a,	// (0x0008e0b0) mce_image_pane_g4

0x2ea2,	// (0x0008e0b8) mce_image_pane_g5

0x0004,

0xf373,	// (0x0009a589) mce_image_pane_g

0xea57,	// (0x00099c6d) control_top_pane_stacon_cp01_ParamLimits

0xea57,	// (0x00099c6d) control_top_pane_stacon_cp01

0xea67,	// (0x00099c7d) uni_indicator_pane_stacon_cp01_ParamLimits

0xea67,	// (0x00099c7d) uni_indicator_pane_stacon_cp01

0xea78,	// (0x00099c8e) bg_popup_sub_pane_cp03

0x2eaa,	// (0x0008e0c0) chi_dic_find_pane

0x2eb2,	// (0x0008e0c8) listscroll_chi_dic_pane

0x2ebb,	// (0x0008e0d1) main_pane_chidic_g1

0x2ece,	// (0x0008e0e4) chi_dic_find_pane_t1

0xea82,	// (0x00099c98) find_chidic_pane

0xea8b,	// (0x00099ca1) chi_dic_list_pane_ParamLimits

0xea8b,	// (0x00099ca1) chi_dic_list_pane

0xea9c,	// (0x00099cb2) scroll_pane_cp020

0x2edc,	// (0x0008e0f2) find_chidic_pane_t1

0xddb3,	// (0x00098fc9) input_focus_pane_cp06

0x2eeb,	// (0x0008e101) list_chi_dic_pane_ParamLimits

0x2eeb,	// (0x0008e101) list_chi_dic_pane

0x2efc,	// (0x0008e112) list_chi_dic_pane_t1_ParamLimits

0x2efc,	// (0x0008e112) list_chi_dic_pane_t1

0xddb3,	// (0x00098fc9) list_highlight_pane_cp020

0xeaa4,	// (0x00099cba) bg_cale_heading_pane_g1

0x2f0f,	// (0x0008e125) bg_cale_heading_pane_g2

0x2f17,	// (0x0008e12d) bg_cale_heading_pane_g3

0x2f1f,	// (0x0008e135) bg_cale_heading_pane_g4

0x2f27,	// (0x0008e13d) bg_cale_heading_pane_g5

0x2f2f,	// (0x0008e145) bg_cale_heading_pane_g6

0x2f37,	// (0x0008e14d) bg_cale_heading_pane_g7

0x2f3f,	// (0x0008e155) bg_cale_heading_pane_g8

0x2f47,	// (0x0008e15d) bg_cale_heading_pane_g9

0x0008,

0xf37e,	// (0x0009a594) bg_cale_heading_pane_g

0xeaa4,	// (0x00099cba) bg_cale_side_pane_g1

0x2f4f,	// (0x0008e165) bg_cale_side_pane_g2

0x2f57,	// (0x0008e16d) bg_cale_side_pane_g3

0x2f5f,	// (0x0008e175) bg_cale_side_pane_g4

0x2f67,	// (0x0008e17d) bg_cale_side_pane_g5

0x2f6f,	// (0x0008e185) bg_cale_side_pane_g6

0x2f77,	// (0x0008e18d) bg_cale_side_pane_g7

0x2f7f,	// (0x0008e195) bg_cale_side_pane_g8

0x2f87,	// (0x0008e19d) bg_cale_side_pane_g9

0x0008,

0xf391,	// (0x0009a5a7) bg_cale_side_pane_g

0x2f8f,	// (0x0008e1a5) popup_call_status_window_ParamLimits

0x2f8f,	// (0x0008e1a5) popup_call_status_window

0xeaac,	// (0x00099cc2) stacon_top_pane

0xeab4,	// (0x00099cca) status_pane_ParamLimits

0xeab4,	// (0x00099cca) status_pane

0xeac9,	// (0x00099cdf) status_small_pane

0xead1,	// (0x00099ce7) control_pane

0xddb3,	// (0x00098fc9) stacon_bottom_pane

0xead9,	// (0x00099cef) list_single_mce_smart_pane_t1_ParamLimits

0xead9,	// (0x00099cef) list_single_mce_smart_pane_t1

0xeaec,	// (0x00099d02) list_single_mce_smart_pane_t2_ParamLimits

0xeaec,	// (0x00099d02) list_single_mce_smart_pane_t2

0x0001,

0x013c,	// (0x0008b352) list_single_mce_smart_pane_t_ParamLimits

0x013c,	// (0x0008b352) list_single_mce_smart_pane_t

0x2fd6,	// (0x0008e1ec) compass_pane

0x2fdf,	// (0x0008e1f5) main_location2_pane_t1

0x2ff1,	// (0x0008e207) main_location2_pane_t2

0x3003,	// (0x0008e219) main_location2_pane_t3

0x0003,

0xf3a4,	// (0x0009a5ba) main_location2_pane_t

0xeb0b,	// (0x00099d21) compass_pane_g1_ParamLimits

0xeb0b,	// (0x00099d21) compass_pane_g1

0x3047,	// (0x0008e25d) compass_pane_t1

0x3056,	// (0x0008e26c) compass_pane_t2

0x0005,

0xf3ad,	// (0x0009a5c3) compass_pane_t

0x309d,	// (0x0008e2b3) text_secondary_cp61

0xeb87,	// (0x00099d9d) navi_pane_cams_g5

0xec01,	// (0x00099e17) navi_pane_im_t1

0xec0f,	// (0x00099e25) navi_pane_mp_g1_ParamLimits

0xec0f,	// (0x00099e25) navi_pane_mp_g1

0xec23,	// (0x00099e39) navi_pane_mp_g2_ParamLimits

0xec23,	// (0x00099e39) navi_pane_mp_g2

0xec2f,	// (0x00099e45) navi_pane_mp_g3_ParamLimits

0xec2f,	// (0x00099e45) navi_pane_mp_g3

0x0002,

0x015e,	// (0x0008b374) navi_pane_mp_g_ParamLimits

0x015e,	// (0x0008b374) navi_pane_mp_g

0xec3b,	// (0x00099e51) navi_pane_mp_t1

0xec49,	// (0x00099e5f) navi_pane_mp_t2

0x0002,

0x0165,	// (0x0008b37b) navi_pane_mp_t

0xecb4,	// (0x00099eca) navi_pane_vt_g1

0xec3b,	// (0x00099e51) navi_pane_vt_t1

0xecbc,	// (0x00099ed2) navi_slider_pane

0xe290,	// (0x000994a6) zooming_pane

0xeccc,	// (0x00099ee2) navi_slider_pane_g1

0x9f4a,	// (0x00095160) navi_slider_pane_g2

0x0006,

0xf3ba,	// (0x0009a5d0) navi_slider_pane_g

0xecf0,	// (0x00099f06) aid_levels_zoom

0xecf8,	// (0x00099f0e) zooming_pane_g1

0xed00,	// (0x00099f16) zooming_pane_g2

0xed00,	// (0x00099f16) zooming_pane_g3

0x0002,

0x017b,	// (0x0008b391) zooming_pane_g

0xed08,	// (0x00099f1e) level_10_zoom

0xed11,	// (0x00099f27) level_11_zoom

0xed1a,	// (0x00099f30) level_1_zoom

0xed23,	// (0x00099f39) level_2_zoom

0xed2c,	// (0x00099f42) level_3_zoom

0xed35,	// (0x00099f4b) level_4_zoom

0xed3e,	// (0x00099f54) level_5_zoom

0xed47,	// (0x00099f5d) level_6_zoom

0xed50,	// (0x00099f66) level_7_zoom

0xed59,	// (0x00099f6f) level_8_zoom

0xed62,	// (0x00099f78) level_9_zoom

0xed73,	// (0x00099f89) popup_phob_thumbnail_window_g1

0xed7b,	// (0x00099f91) popup_phob_thumbnail_window_g2

0x0001,

0x0182,	// (0x0008b398) popup_phob_thumbnail_window_g

0xa705,	// (0x0009591b) level_1_location

0xa70d,	// (0x00095923) level_2_location

0xa715,	// (0x0009592b) level_3_location

0xa71d,	// (0x00095933) level_4_location

0xe290,	// (0x000994a6) level_5_location

0x30ee,	// (0x0008e304) mce_icon_pane_g1

0x30f6,	// (0x0008e30c) mce_icon_pane_g2

0x0001,

0xf3c9,	// (0x0009a5df) mce_icon_pane_g

0x30fe,	// (0x0008e314) main_mup_pane_g1_ParamLimits

0x30fe,	// (0x0008e314) main_mup_pane_g1

0x3114,	// (0x0008e32a) main_mup_pane_g2_ParamLimits

0x3114,	// (0x0008e32a) main_mup_pane_g2

0x312c,	// (0x0008e342) main_mup_pane_g3_ParamLimits

0x312c,	// (0x0008e342) main_mup_pane_g3

0x3144,	// (0x0008e35a) main_mup_pane_g4_ParamLimits

0x3144,	// (0x0008e35a) main_mup_pane_g4

0x315c,	// (0x0008e372) main_mup_pane_g5_ParamLimits

0x315c,	// (0x0008e372) main_mup_pane_g5

0x3176,	// (0x0008e38c) main_mup_pane_g6_ParamLimits

0x3176,	// (0x0008e38c) main_mup_pane_g6

0x318e,	// (0x0008e3a4) main_mup_pane_g7_ParamLimits

0x318e,	// (0x0008e3a4) main_mup_pane_g7

0x31a6,	// (0x0008e3bc) main_mup_pane_g8_ParamLimits

0x31a6,	// (0x0008e3bc) main_mup_pane_g8

0x31be,	// (0x0008e3d4) main_mup_pane_g9_ParamLimits

0x31be,	// (0x0008e3d4) main_mup_pane_g9

0x31d2,	// (0x0008e3e8) main_mup_pane_g10_ParamLimits

0x31d2,	// (0x0008e3e8) main_mup_pane_g10

0x31e6,	// (0x0008e3fc) main_mup_pane_g11_ParamLimits

0x31e6,	// (0x0008e3fc) main_mup_pane_g11

0x31f8,	// (0x0008e40e) main_mup_pane_g12_ParamLimits

0x31f8,	// (0x0008e40e) main_mup_pane_g12

0x320c,	// (0x0008e422) main_mup_pane_g13_ParamLimits

0x320c,	// (0x0008e422) main_mup_pane_g13

0x000c,

0xf3ce,	// (0x0009a5e4) main_mup_pane_g_ParamLimits

0xf3ce,	// (0x0009a5e4) main_mup_pane_g

0x321e,	// (0x0008e434) main_mup_pane_t1_ParamLimits

0x321e,	// (0x0008e434) main_mup_pane_t1

0x3238,	// (0x0008e44e) main_mup_pane_t2_ParamLimits

0x3238,	// (0x0008e44e) main_mup_pane_t2

0x3250,	// (0x0008e466) main_mup_pane_t3_ParamLimits

0x3250,	// (0x0008e466) main_mup_pane_t3

0x3268,	// (0x0008e47e) main_mup_pane_t4_ParamLimits

0x3268,	// (0x0008e47e) main_mup_pane_t4

0x3286,	// (0x0008e49c) main_mup_pane_t5_ParamLimits

0x3286,	// (0x0008e49c) main_mup_pane_t5

0x329b,	// (0x0008e4b1) main_mup_pane_t6_ParamLimits

0x329b,	// (0x0008e4b1) main_mup_pane_t6

0x0005,

0xf3e9,	// (0x0009a5ff) main_mup_pane_t_ParamLimits

0xf3e9,	// (0x0009a5ff) main_mup_pane_t

0x32ad,	// (0x0008e4c3) mup_progress_pane_ParamLimits

0x32ad,	// (0x0008e4c3) mup_progress_pane

0x32b9,	// (0x0008e4cf) mup_visualizer_pane_ParamLimits

0x32b9,	// (0x0008e4cf) mup_visualizer_pane

0x32e1,	// (0x0008e4f7) mup_volume_pane_ParamLimits

0x32e1,	// (0x0008e4f7) mup_volume_pane

0xea3f,	// (0x00099c55) mup_visualizer_pane_g1_ParamLimits

0xea3f,	// (0x00099c55) mup_visualizer_pane_g1

0xea3f,	// (0x00099c55) mup_visualizer_pane_g2_ParamLimits

0xea3f,	// (0x00099c55) mup_visualizer_pane_g2

0xeb0b,	// (0x00099d21) mup_visualizer_pane_g3_ParamLimits

0xeb0b,	// (0x00099d21) mup_visualizer_pane_g3

0x0002,

0xf3f6,	// (0x0009a60c) mup_visualizer_pane_g_ParamLimits

0xf3f6,	// (0x0009a60c) mup_visualizer_pane_g

0xe134,	// (0x0009934a) mup_volume_pane_g1

0xed8b,	// (0x00099fa1) mup_volume_pane_g2

0x0001,

0x01bb,	// (0x0008b3d1) mup_volume_pane_g

0xe134,	// (0x0009934a) mup_progress_pane_g1

0xed94,	// (0x00099faa) mup_progress_pane_g2

0xed9d,	// (0x00099fb3) mup_progress_pane_g3

0x0002,

0x01c0,	// (0x0008b3d6) mup_progress_pane_g

0xddb3,	// (0x00098fc9) bg_popup_window_pane_cp05

0x32ff,	// (0x0008e515) heading_pane_cp02_ParamLimits

0x32ff,	// (0x0008e515) heading_pane_cp02

0xeda6,	// (0x00099fbc) list_popup_blid_pane

0xe872,	// (0x00099a88) list_blid_sat_info_pane_ParamLimits

0xe872,	// (0x00099a88) list_blid_sat_info_pane

0xedae,	// (0x00099fc4) list_blid_sat_info_pane_g1

0xedb6,	// (0x00099fcc) list_blid_sat_info_pane_t1

0x33eb,	// (0x0008e601) mup_equalizer_pane_ParamLimits

0x33eb,	// (0x0008e601) mup_equalizer_pane

0x3404,	// (0x0008e61a) mup_equalizer_pane_cp1_ParamLimits

0x3404,	// (0x0008e61a) mup_equalizer_pane_cp1

0x341d,	// (0x0008e633) mup_equalizer_pane_cp2_ParamLimits

0x341d,	// (0x0008e633) mup_equalizer_pane_cp2

0x3436,	// (0x0008e64c) mup_equalizer_pane_cp3_ParamLimits

0x3436,	// (0x0008e64c) mup_equalizer_pane_cp3

0x344f,	// (0x0008e665) mup_equalizer_pane_cp4_ParamLimits

0x344f,	// (0x0008e665) mup_equalizer_pane_cp4

0x3468,	// (0x0008e67e) mup_equalizer_pane_cp5

0x347a,	// (0x0008e690) mup_equalizer_pane_cp6

0x348c,	// (0x0008e6a2) mup_equalizer_pane_cp7

0xa5e3,	// (0x000957f9) bg_popup_call_poc_act_pane_g9

0xa5eb,	// (0x00095801) bg_popup_call_poc_act_pane_g10

0xa5f3,	// (0x00095809) bg_popup_call_poc_act_pane_g11

0x000a,

0xe00e,	// (0x00099224) mup_scale_pane

0xe134,	// (0x0009934a) mup_scale_pane_g1

0xedc4,	// (0x00099fda) mup_scale_pane_g2

0x0006,

0xf412,	// (0x0009a628) mup_scale_pane_g

0xede8,	// (0x00099ffe) msg_data_pane

0xedf0,	// (0x0009a006) scroll_pane_cp017

0x34b2,	// (0x0008e6c8) bg_list_pane_cp04_ParamLimits

0x34b2,	// (0x0008e6c8) bg_list_pane_cp04

0xedf8,	// (0x0009a00e) msg_data_pane_g1

0x34d2,	// (0x0008e6e8) msg_data_pane_g2

0x34da,	// (0x0008e6f0) msg_data_pane_g3

0x34e2,	// (0x0008e6f8) msg_data_pane_g4

0x34ea,	// (0x0008e700) msg_data_pane_g5

0x34f2,	// (0x0008e708) msg_data_pane_g6

0x34fa,	// (0x0008e710) msg_data_pane_g7

0x0006,

0xf421,	// (0x0009a637) msg_data_pane_g

0x3502,	// (0x0008e718) msg_text_pane_ParamLimits

0x3502,	// (0x0008e718) msg_text_pane

0x3526,	// (0x0008e73c) qrid_highlight_pane_cp011_ParamLimits

0x3526,	// (0x0008e73c) qrid_highlight_pane_cp011

0xddb3,	// (0x00098fc9) msg_body_pane

0xddb3,	// (0x00098fc9) msg_header_pane

0xee09,	// (0x0009a01f) input_focus_pane_cp07

0x3548,	// (0x0008e75e) msg_header_pane_t1_ParamLimits

0x3548,	// (0x0008e75e) msg_header_pane_t1

0x355a,	// (0x0008e770) msg_header_pane_t2_ParamLimits

0x355a,	// (0x0008e770) msg_header_pane_t2

0x0001,

0xf435,	// (0x0009a64b) msg_header_pane_t_ParamLimits

0xf435,	// (0x0009a64b) msg_header_pane_t

0xee1e,	// (0x0009a034) msg_body_pane_g1

0x356c,	// (0x0008e782) msg_body_pane_t1_ParamLimits

0x356c,	// (0x0008e782) msg_body_pane_t1

0x359d,	// (0x0008e7b3) msg_body_pane_t2_ParamLimits

0x359d,	// (0x0008e7b3) msg_body_pane_t2

0x35af,	// (0x0008e7c5) msg_body_pane_t3_ParamLimits

0x35af,	// (0x0008e7c5) msg_body_pane_t3

0x0002,

0xf43a,	// (0x0009a650) msg_body_pane_t_ParamLimits

0xf43a,	// (0x0009a650) msg_body_pane_t

0x35f7,	// (0x0008e80d) main_viewer_pane_g1_ParamLimits

0x35f7,	// (0x0008e80d) main_viewer_pane_g1

0x3603,	// (0x0008e819) main_viewer_pane_g2_ParamLimits

0x3603,	// (0x0008e819) main_viewer_pane_g2

0x360f,	// (0x0008e825) main_viewer_pane_g3_ParamLimits

0x360f,	// (0x0008e825) main_viewer_pane_g3

0x361e,	// (0x0008e834) main_viewer_pane_g4_ParamLimits

0x361e,	// (0x0008e834) main_viewer_pane_g4

0x9f74,	// (0x0009518a) main_viewer_pane_g5_ParamLimits

0x9f74,	// (0x0009518a) main_viewer_pane_g5

0x9f74,	// (0x0009518a) main_viewer_pane_g7_ParamLimits

0x9f74,	// (0x0009518a) main_viewer_pane_g7

0x9f86,	// (0x0009519c) main_viewer_pane_g8_ParamLimits

0x9f86,	// (0x0009519c) main_viewer_pane_g8

0x0007,

0xf44a,	// (0x0009a660) main_viewer_pane_g_ParamLimits

0xf44a,	// (0x0009a660) main_viewer_pane_g

0xee26,	// (0x0009a03c) viewer_content_pane_ParamLimits

0xee26,	// (0x0009a03c) viewer_content_pane

0x3652,	// (0x0008e868) main_postcard_pane_g1_ParamLimits

0x3652,	// (0x0008e868) main_postcard_pane_g1

0x3666,	// (0x0008e87c) main_postcard_pane_g2_ParamLimits

0x3666,	// (0x0008e87c) main_postcard_pane_g2

0x367a,	// (0x0008e890) main_postcard_pane_g3_ParamLimits

0x367a,	// (0x0008e890) main_postcard_pane_g3

0x0005,

0xf45b,	// (0x0009a671) main_postcard_pane_g_ParamLimits

0xf45b,	// (0x0009a671) main_postcard_pane_g

0x368d,	// (0x0008e8a3) main_postcard_pane_g4

0xa84d,	// (0x00095a63) smil_status_volume_pane_g2

0x36c8,	// (0x0008e8de) postcard_pane_ParamLimits

0x36c8,	// (0x0008e8de) postcard_pane

0xee34,	// (0x0009a04a) postcard_pane_g1_ParamLimits

0xee34,	// (0x0009a04a) postcard_pane_g1

0x3704,	// (0x0008e91a) postcard_pane_g2_ParamLimits

0x3704,	// (0x0008e91a) postcard_pane_g2

0x3710,	// (0x0008e926) postcard_pane_g3_ParamLimits

0x3710,	// (0x0008e926) postcard_pane_g3

0xee42,	// (0x0009a058) postcard_pane_g4_ParamLimits

0xee42,	// (0x0009a058) postcard_pane_g4

0x371c,	// (0x0008e932) postcard_pane_g5_ParamLimits

0x371c,	// (0x0008e932) postcard_pane_g5

0x3730,	// (0x0008e946) postcard_pane_g6_ParamLimits

0x3730,	// (0x0008e946) postcard_pane_g6

0xee34,	// (0x0009a04a) postcard_pane_g7_ParamLimits

0xee34,	// (0x0009a04a) postcard_pane_g7

0x0006,

0xf468,	// (0x0009a67e) postcard_pane_g_ParamLimits

0xf468,	// (0x0009a67e) postcard_pane_g

0x3742,	// (0x0008e958) main_mp2_pane_g1_ParamLimits

0x3742,	// (0x0008e958) main_mp2_pane_g1

0x374e,	// (0x0008e964) main_mp2_pane_g2_ParamLimits

0x374e,	// (0x0008e964) main_mp2_pane_g2

0x375a,	// (0x0008e970) main_mp2_pane_g3_ParamLimits

0x375a,	// (0x0008e970) main_mp2_pane_g3

0x0002,

0xf477,	// (0x0009a68d) main_mp2_pane_g_ParamLimits

0xf477,	// (0x0009a68d) main_mp2_pane_g

0x3766,	// (0x0008e97c) main_mp2_pane_t1_ParamLimits

0x3766,	// (0x0008e97c) main_mp2_pane_t1

0x377b,	// (0x0008e991) main_mp2_pane_t2_ParamLimits

0x377b,	// (0x0008e991) main_mp2_pane_t2

0x378d,	// (0x0008e9a3) main_mp2_pane_t3_ParamLimits

0x378d,	// (0x0008e9a3) main_mp2_pane_t3

0x0002,

0xf47e,	// (0x0009a694) main_mp2_pane_t_ParamLimits

0xf47e,	// (0x0009a694) main_mp2_pane_t

0xee50,	// (0x0009a066) pec_content_pane_ParamLimits

0xee50,	// (0x0009a066) pec_content_pane

0xe446,	// (0x0009965c) scroll_pane_cp015

0xee62,	// (0x0009a078) pec_attribute_pane_ParamLimits

0xee62,	// (0x0009a078) pec_attribute_pane

0x379f,	// (0x0008e9b5) pec_content_pane_g1_ParamLimits

0x379f,	// (0x0008e9b5) pec_content_pane_g1

0xee72,	// (0x0009a088) pec_content_pane_t1_ParamLimits

0xee72,	// (0x0009a088) pec_content_pane_t1

0xee84,	// (0x0009a09a) pec_content_pane_t2_ParamLimits

0xee84,	// (0x0009a09a) pec_content_pane_t2

0x0001,

0x024f,	// (0x0008b465) pec_content_pane_t_ParamLimits

0x024f,	// (0x0008b465) pec_content_pane_t

0x37ab,	// (0x0008e9c1) list_single_graphic_pane_cp01_ParamLimits

0x37ab,	// (0x0008e9c1) list_single_graphic_pane_cp01

0xe00e,	// (0x00099224) bg_popup_sub_pane_cp04

0xee96,	// (0x0009a0ac) popup_mup_playback_window_g1

0xeea2,	// (0x0009a0b8) popup_mup_playback_window_t1

0xeeb7,	// (0x0009a0cd) popup_mup_playback_window_t2

0x0001,

0x0254,	// (0x0008b46a) popup_mup_playback_window_t

0xeeee,	// (0x0009a104) main_image_pane_g1_ParamLimits

0xeeee,	// (0x0009a104) main_image_pane_g1

0xef31,	// (0x0009a147) scroll_pane_cp018_ParamLimits

0xef31,	// (0x0009a147) scroll_pane_cp018

0xef49,	// (0x0009a15f) scroll_pane_cp016_ParamLimits

0xef49,	// (0x0009a15f) scroll_pane_cp016

0x3875,	// (0x0008ea8b) smil2_image_pane_ParamLimits

0x3875,	// (0x0008ea8b) smil2_image_pane

0x389d,	// (0x0008eab3) smil2_root_pane_ParamLimits

0x389d,	// (0x0008eab3) smil2_root_pane

0x38d5,	// (0x0008eaeb) smil2_text_pane_ParamLimits

0x38d5,	// (0x0008eaeb) smil2_text_pane

0xddb3,	// (0x00098fc9) bg_list_pane_cp06

0x3943,	// (0x0008eb59) grid_radio_pane

0xddb3,	// (0x00098fc9) bg_popup_window_pane_cp06

0xef7d,	// (0x0009a193) main_fmradio_pane_t1

0xe985,	// (0x00099b9b) heading_pane_cp04

0xef8b,	// (0x0009a1a1) main_fmradio_pane_t2

0xa63b,	// (0x00095851) popup_cale_lunar_info_window_g1

0xef99,	// (0x0009a1af) main_fmradio_pane_t3

0xa643,	// (0x00095859) popup_cale_lunar_info_window_g2

0xefa7,	// (0x0009a1bd) main_fmradio_pane_t4

0x0001,

0xefc1,	// (0x0009a1d7) main_fmradio_pane_t5

0x0004,

0xf567,	// (0x0009a77d) popup_cale_lunar_info_window_g

0xf495,	// (0x0009a6ab) main_fmradio_pane_t

0xefcf,	// (0x0009a1e5) wait_bar_pane_cp03

0x394b,	// (0x0008eb61) cell_fmradio_pane_ParamLimits

0x394b,	// (0x0008eb61) cell_fmradio_pane

0xee34,	// (0x0009a04a) cell_fmradio_pane_g1_ParamLimits

0xee34,	// (0x0009a04a) cell_fmradio_pane_g1

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp011

0xefd7,	// (0x0009a1ed) poc_content_pane_ParamLimits

0xefd7,	// (0x0009a1ed) poc_content_pane

0xefe9,	// (0x0009a1ff) scroll_pane_cp019

0x395e,	// (0x0008eb74) popup_call_poc_act_window_ParamLimits

0x395e,	// (0x0008eb74) popup_call_poc_act_window

0x397e,	// (0x0008eb94) popup_call_poc_inact_window_ParamLimits

0x397e,	// (0x0008eb94) popup_call_poc_inact_window

0xf52b,	// (0x0009a741) bg_popup_call_poc_act_pane_g

0xa5fb,	// (0x00095811) bg_popup_call_poc_inact_pane_g1

0xa603,	// (0x00095819) bg_popup_call_poc_inact_pane_g2

0xeff1,	// (0x0009a207) popup_call_poc_act_window_g2

0xa60b,	// (0x00095821) bg_popup_call_poc_inact_pane_g3

0xa58b,	// (0x000957a1) bg_popup_call_poc_inact_pane_g4

0xa613,	// (0x00095829) bg_popup_call_poc_inact_pane_g5

0xeff9,	// (0x0009a20f) popup_call_poc_act_window_t1_ParamLimits

0xeff9,	// (0x0009a20f) popup_call_poc_act_window_t1

0xf021,	// (0x0009a237) popup_call_poc_act_window_t2_ParamLimits

0xf021,	// (0x0009a237) popup_call_poc_act_window_t2

0xf049,	// (0x0009a25f) popup_call_poc_act_window_t3_ParamLimits

0xf049,	// (0x0009a25f) popup_call_poc_act_window_t3

0xf071,	// (0x0009a287) popup_call_poc_act_window_t4_ParamLimits

0xf071,	// (0x0009a287) popup_call_poc_act_window_t4

0x0003,

0xf4a0,	// (0x0009a6b6) popup_call_poc_act_window_t_ParamLimits

0xf4a0,	// (0x0009a6b6) popup_call_poc_act_window_t

0xa61b,	// (0x00095831) bg_popup_call_poc_inact_pane_g6

0xa623,	// (0x00095839) bg_popup_call_poc_inact_pane_g7

0xa62b,	// (0x00095841) bg_popup_call_poc_inact_pane_g8

0xf083,	// (0x0009a299) popup_call_poc_inact_window_g2

0xa633,	// (0x00095849) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf542,	// (0x0009a758) bg_popup_call_poc_inact_pane_g

0xf08b,	// (0x0009a2a1) popup_call_poc_inact_window_t1_ParamLimits

0xf08b,	// (0x0009a2a1) popup_call_poc_inact_window_t1

0xf0a0,	// (0x0009a2b6) popup_call_poc_inact_window_t2_ParamLimits

0xf0a0,	// (0x0009a2b6) popup_call_poc_inact_window_t2

0xf0b5,	// (0x0009a2cb) popup_call_poc_inact_window_t3_ParamLimits

0xf0b5,	// (0x0009a2cb) popup_call_poc_inact_window_t3

0x0002,

0xf4a9,	// (0x0009a6bf) popup_call_poc_inact_window_t_ParamLimits

0xf4a9,	// (0x0009a6bf) popup_call_poc_inact_window_t

0xa7c0,	// (0x000959d6) context_pane_ParamLimits

0x48d7,	// (0x0008faed) signal_pane_ParamLimits

0xe290,	// (0x000994a6) main_call2_pane

0xa799,	// (0x000959af) popup_phob_thumbnail2_window_ParamLimits

0xa799,	// (0x000959af) popup_phob_thumbnail2_window

0x9f5c,	// (0x00095172) aid_hotspot_pointer_arrow_pane

0x9f64,	// (0x0009517a) aid_hotspot_pointer_hand_pane

0x4472,	// (0x0008f688) phob_pre_status_pane_g5

0x1ab7,	// (0x0008cccd) cams_zoom_pane_ParamLimits

0x1ac6,	// (0x0008ccdc) image_vga_pane_ParamLimits

0x1adc,	// (0x0008ccf2) main_camera_pane_g1_ParamLimits

0x1aec,	// (0x0008cd02) main_camera_pane_g2_ParamLimits

0x1afc,	// (0x0008cd12) main_camera_pane_g3_ParamLimits

0x1b0c,	// (0x0008cd22) main_camera_pane_g4_ParamLimits

0x1b1c,	// (0x0008cd32) main_camera_pane_g5_ParamLimits

0x1b2c,	// (0x0008cd42) main_camera_pane_g6_ParamLimits

0x1b3c,	// (0x0008cd52) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009a420) main_camera_pane_g_ParamLimits

0x1b4c,	// (0x0008cd62) main_camera_pane_t1_ParamLimits

0x1b62,	// (0x0008cd78) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009a431) main_camera_pane_t_ParamLimits

0xe00e,	// (0x00099224) bg_popup_preview_window_pane_cp01_ParamLimits

0xe00e,	// (0x00099224) bg_popup_preview_window_pane_cp01

0x3993,	// (0x0008eba9) popup_phob_thumbnail2_window_g1_ParamLimits

0x3993,	// (0x0008eba9) popup_phob_thumbnail2_window_g1

0xddb3,	// (0x00098fc9) call2_cli_visual_pane

0x39b6,	// (0x0008ebcc) popup_call2_audio_conf_window_ParamLimits

0x39b6,	// (0x0008ebcc) popup_call2_audio_conf_window

0x39d4,	// (0x0008ebea) popup_call2_audio_first_window_ParamLimits

0x39d4,	// (0x0008ebea) popup_call2_audio_first_window

0x3a4a,	// (0x0008ec60) popup_call2_audio_in_window_ParamLimits

0x3a4a,	// (0x0008ec60) popup_call2_audio_in_window

0x3a7e,	// (0x0008ec94) popup_call2_audio_out_window_ParamLimits

0x3a7e,	// (0x0008ec94) popup_call2_audio_out_window

0x3ad0,	// (0x0008ece6) popup_call2_audio_second_window_ParamLimits

0x3ad0,	// (0x0008ece6) popup_call2_audio_second_window

0x3b22,	// (0x0008ed38) popup_call2_audio_wait_window_ParamLimits

0x3b22,	// (0x0008ed38) popup_call2_audio_wait_window

0xddb3,	// (0x00098fc9) bg_popup_call2_act_pane_cp03

0xdff0,	// (0x00099206) list_conf_pane_cp

0x3b5a,	// (0x0008ed70) popup_call2_audio_conf_window_t1

0xe9e2,	// (0x00099bf8) list_single_graphic_popup_conf2_pane_ParamLimits

0xe9e2,	// (0x00099bf8) list_single_graphic_popup_conf2_pane

0xe9f5,	// (0x00099c0b) list_highlight_pane_cp04

0x3b68,	// (0x0008ed7e) list_single_graphic_popup_conf2_pane_g1

0xea06,	// (0x00099c1c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b0,	// (0x0009a6c6) list_single_graphic_popup_conf2_pane_g

0x3b70,	// (0x0008ed86) list_single_graphic_popup_conf2_pane_t1

0x3b7e,	// (0x0008ed94) bg_popup_call2_act_pane_cp01_ParamLimits

0x3b7e,	// (0x0008ed94) bg_popup_call2_act_pane_cp01

0x3c08,	// (0x0008ee1e) call_type_pane_cp05_ParamLimits

0x3c08,	// (0x0008ee1e) call_type_pane_cp05

0x3c5c,	// (0x0008ee72) popup_call2_audio_second_window_g1_ParamLimits

0x3c5c,	// (0x0008ee72) popup_call2_audio_second_window_g1

0x3cb0,	// (0x0008eec6) popup_call2_audio_second_window_g2_ParamLimits

0x3cb0,	// (0x0008eec6) popup_call2_audio_second_window_g2

0x0002,

0xf4b5,	// (0x0009a6cb) popup_call2_audio_second_window_g_ParamLimits

0xf4b5,	// (0x0009a6cb) popup_call2_audio_second_window_g

0x3d15,	// (0x0008ef2b) popup_call2_audio_second_window_t1_ParamLimits

0x3d15,	// (0x0008ef2b) popup_call2_audio_second_window_t1

0x3dd0,	// (0x0008efe6) popup_call2_audio_second_window_t2_ParamLimits

0x3dd0,	// (0x0008efe6) popup_call2_audio_second_window_t2

0x3e23,	// (0x0008f039) popup_call2_audio_second_window_t3_ParamLimits

0x3e23,	// (0x0008f039) popup_call2_audio_second_window_t3

0x0003,

0xf4bc,	// (0x0009a6d2) popup_call2_audio_second_window_t_ParamLimits

0xf4bc,	// (0x0009a6d2) popup_call2_audio_second_window_t

0xddb3,	// (0x00098fc9) bg_popup_call2_in_pane_cp02

0xddbd,	// (0x00098fd3) call_type_pane_cp04

0xddc5,	// (0x00098fdb) popup_call2_audio_wait_window_g1

0xddcd,	// (0x00098fe3) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009a30f) popup_call2_audio_wait_window_g

0xddd5,	// (0x00098feb) popup_call2_audio_wait_window_t3

0x3f16,	// (0x0008f12c) bg_popup_call2_act_pane_ParamLimits

0x3f16,	// (0x0008f12c) bg_popup_call2_act_pane

0x3fd6,	// (0x0008f1ec) call_type_pane_cp03_ParamLimits

0x3fd6,	// (0x0008f1ec) call_type_pane_cp03

0x403a,	// (0x0008f250) popup_call2_audio_first_window_g1_ParamLimits

0x403a,	// (0x0008f250) popup_call2_audio_first_window_g1

0x40aa,	// (0x0008f2c0) popup_call2_audio_first_window_g2_ParamLimits

0x40aa,	// (0x0008f2c0) popup_call2_audio_first_window_g2

0xea3f,	// (0x00099c55) popup_call2_audio_first_window_g3_ParamLimits

0xea3f,	// (0x00099c55) popup_call2_audio_first_window_g3

0x0004,

0xf4c5,	// (0x0009a6db) popup_call2_audio_first_window_g_ParamLimits

0xf4c5,	// (0x0009a6db) popup_call2_audio_first_window_g

0x4188,	// (0x0008f39e) popup_call2_audio_first_window_t1_ParamLimits

0x4188,	// (0x0008f39e) popup_call2_audio_first_window_t1

0x428b,	// (0x0008f4a1) popup_call2_audio_first_window_t4_ParamLimits

0x428b,	// (0x0008f4a1) popup_call2_audio_first_window_t4

0x9f9e,	// (0x000951b4) popup_call2_audio_first_window_t5_ParamLimits

0x9f9e,	// (0x000951b4) popup_call2_audio_first_window_t5

0x0003,

0xf4d0,	// (0x0009a6e6) popup_call2_audio_first_window_t_ParamLimits

0xf4d0,	// (0x0009a6e6) popup_call2_audio_first_window_t

0xe006,	// (0x0009921c) bg_popup_call2_act_pane_g1

0xa64b,	// (0x00095861) popup_cale_lunar_info_window_t1

0xa659,	// (0x0009586f) popup_cale_lunar_info_window_t2

0xa667,	// (0x0009587d) popup_cale_lunar_info_window_t3

0xddb3,	// (0x00098fc9) bg_popup_call2_bubble_pane

0xa09f,	// (0x000952b5) bg_popup_call2_in_pane_cp01_ParamLimits

0xa09f,	// (0x000952b5) bg_popup_call2_in_pane_cp01

0xda8f,	// (0x00098ca5) call_type_pane_cp02

0xa0e7,	// (0x000952fd) popup_call2_audio_out_window_g1_ParamLimits

0xa0e7,	// (0x000952fd) popup_call2_audio_out_window_g1

0xa113,	// (0x00095329) popup_call2_audio_out_window_g2_ParamLimits

0xa113,	// (0x00095329) popup_call2_audio_out_window_g2

0xa13b,	// (0x00095351) popup_call2_audio_out_window_g3_ParamLimits

0xa13b,	// (0x00095351) popup_call2_audio_out_window_g3

0x0003,

0xf4d9,	// (0x0009a6ef) popup_call2_audio_out_window_g_ParamLimits

0xf4d9,	// (0x0009a6ef) popup_call2_audio_out_window_g

0xa176,	// (0x0009538c) popup_call2_audio_out_window_t1_ParamLimits

0xa176,	// (0x0009538c) popup_call2_audio_out_window_t1

0xa1d5,	// (0x000953eb) popup_call2_audio_out_window_t2_ParamLimits

0xa1d5,	// (0x000953eb) popup_call2_audio_out_window_t2

0xa229,	// (0x0009543f) popup_call2_audio_out_window_t3_ParamLimits

0xa229,	// (0x0009543f) popup_call2_audio_out_window_t3

0xa23f,	// (0x00095455) popup_call2_audio_out_window_t4_ParamLimits

0xa23f,	// (0x00095455) popup_call2_audio_out_window_t4

0xa255,	// (0x0009546b) popup_call2_audio_out_window_t5_ParamLimits

0xa255,	// (0x0009546b) popup_call2_audio_out_window_t5

0x0005,

0xf4e2,	// (0x0009a6f8) popup_call2_audio_out_window_t_ParamLimits

0xf4e2,	// (0x0009a6f8) popup_call2_audio_out_window_t

0xa2b9,	// (0x000954cf) bg_popup_call2_in_pane_ParamLimits

0xa2b9,	// (0x000954cf) bg_popup_call2_in_pane

0xa315,	// (0x0009552b) popup_call2_audio_in_window_g1_ParamLimits

0xa315,	// (0x0009552b) popup_call2_audio_in_window_g1

0xa34d,	// (0x00095563) popup_call2_audio_in_window_g2_ParamLimits

0xa34d,	// (0x00095563) popup_call2_audio_in_window_g2

0xa385,	// (0x0009559b) popup_call2_audio_in_window_g3_ParamLimits

0xa385,	// (0x0009559b) popup_call2_audio_in_window_g3

0x0003,

0xf4ef,	// (0x0009a705) popup_call2_audio_in_window_g_ParamLimits

0xf4ef,	// (0x0009a705) popup_call2_audio_in_window_g

0xa3dd,	// (0x000955f3) popup_call2_audio_in_window_t1_ParamLimits

0xa3dd,	// (0x000955f3) popup_call2_audio_in_window_t1

0xa45d,	// (0x00095673) popup_call2_audio_in_window_t2_ParamLimits

0xa45d,	// (0x00095673) popup_call2_audio_in_window_t2

0xa4dd,	// (0x000956f3) popup_call2_audio_in_window_t3_ParamLimits

0xa4dd,	// (0x000956f3) popup_call2_audio_in_window_t3

0xa4f7,	// (0x0009570d) popup_call2_audio_in_window_t4_ParamLimits

0xa4f7,	// (0x0009570d) popup_call2_audio_in_window_t4

0xa509,	// (0x0009571f) popup_call2_audio_in_window_t5_ParamLimits

0xa509,	// (0x0009571f) popup_call2_audio_in_window_t5

0xa51e,	// (0x00095734) popup_call2_audio_in_window_t6_ParamLimits

0xa51e,	// (0x00095734) popup_call2_audio_in_window_t6

0x0005,

0xf4f8,	// (0x0009a70e) popup_call2_audio_in_window_t_ParamLimits

0xf4f8,	// (0x0009a70e) popup_call2_audio_in_window_t

0xe006,	// (0x0009921c) bg_popup_call2_in_pane_g1

0xa675,	// (0x0009588b) popup_cale_lunar_info_window_t4

0x0003,

0xf56c,	// (0x0009a782) popup_cale_lunar_info_window_t

0xe00e,	// (0x00099224) bg_popup_call2_rect_pane_ParamLimits

0xe00e,	// (0x00099224) bg_popup_call2_rect_pane

0xddb3,	// (0x00098fc9) call2_cli_visual_graphic_pane

0xddb3,	// (0x00098fc9) call2_cli_visual_text_pane

0xa860,	// (0x00095a76) smil_status_volume_pane_g3

0x0002,

0xe134,	// (0x0009934a) call2_cli_visual_graphic_pane_g1

0xe134,	// (0x0009934a) call2_cli_visual_graphic_pane_g2

0xe134,	// (0x0009934a) call2_cli_visual_graphic_pane_g3

0x0002,

0x02d9,	// (0x0008b4ef) call2_cli_visual_graphic_pane_g

0xa533,	// (0x00095749) bg_popup_call2_rect_pane_g1

0xe1d2,	// (0x000993e8) bg_popup_call2_rect_pane_g2

0xa53b,	// (0x00095751) bg_popup_call2_rect_pane_g3

0xa543,	// (0x00095759) bg_popup_call2_rect_pane_g4

0xa54b,	// (0x00095761) bg_popup_call2_rect_pane_g5

0xa553,	// (0x00095769) bg_popup_call2_rect_pane_g6

0xa55b,	// (0x00095771) bg_popup_call2_rect_pane_g7

0xa563,	// (0x00095779) bg_popup_call2_rect_pane_g8

0xa56b,	// (0x00095781) bg_popup_call2_rect_pane_g9

0x0008,

0xf505,	// (0x0009a71b) bg_popup_call2_rect_pane_g

0xa573,	// (0x00095789) bg_popup_call2_bubble_pane_g1

0xa57b,	// (0x00095791) bg_popup_call2_bubble_pane_g2

0xa583,	// (0x00095799) bg_popup_call2_bubble_pane_g3

0xa58b,	// (0x000957a1) bg_popup_call2_bubble_pane_g4

0xa593,	// (0x000957a9) bg_popup_call2_bubble_pane_g5

0xa59b,	// (0x000957b1) bg_popup_call2_bubble_pane_g6

0xa5a3,	// (0x000957b9) bg_popup_call2_bubble_pane_g7

0xa5ab,	// (0x000957c1) bg_popup_call2_bubble_pane_g8

0xa5b3,	// (0x000957c9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf518,	// (0x0009a72e) bg_popup_call2_bubble_pane_g

0x146b,	// (0x0008c681) aid_cale_week_size_cell_pane

0x1b78,	// (0x0008cd8e) aid_cams_cif_uncrop_pane_ParamLimits

0x1b78,	// (0x0008cd8e) aid_cams_cif_uncrop_pane

0x1d17,	// (0x0008cf2d) aid_cams_size_cell_ParamLimits

0x1d17,	// (0x0008cf2d) aid_cams_size_cell

0x1d2b,	// (0x0008cf41) grid_cams_pane_ParamLimits

0x1d40,	// (0x0008cf56) linegrid_cams_pane_ParamLimits

0x1f1b,	// (0x0008d131) call_video_pane_t1

0x1f35,	// (0x0008d14b) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009a484) call_video_pane_t

0x229c,	// (0x0008d4b2) aid_cale_month_size_cell_pane_ParamLimits

0x229c,	// (0x0008d4b2) aid_cale_month_size_cell_pane

0xf5b5,	// (0x0009a7cb) smil_status_volume_pane_g

0xa86d,	// (0x00095a83) volume_smil_pane_ParamLimits

0x9d93,	// (0x00094fa9) aid_popup2_width_pane

0x13cb,	// (0x0008c5e1) cell_qdial_pane_g4_ParamLimits

0x13cb,	// (0x0008c5e1) cell_qdial_pane_g4

0x3027,	// (0x0008e23d) aid_blid_cardinal_pane_ParamLimits

0x3033,	// (0x0008e249) aid_blid_destination_pane_ParamLimits

0x3033,	// (0x0008e249) aid_blid_destination_pane

0xe00e,	// (0x00099224) bg_popup_call_poc_act_pane_ParamLimits

0xe00e,	// (0x00099224) bg_popup_call_poc_act_pane

0xe00e,	// (0x00099224) bg_popup_call_poc_inact_pane_ParamLimits

0xe00e,	// (0x00099224) bg_popup_call_poc_inact_pane

0xa5bb,	// (0x000957d1) bg_popup_call_poc_act_pane_g1

0xa5c3,	// (0x000957d9) bg_popup_call_poc_act_pane_g2

0xa5cb,	// (0x000957e1) bg_popup_call_poc_act_pane_g3

0xa58b,	// (0x000957a1) bg_popup_call_poc_act_pane_g4

0xa593,	// (0x000957a9) bg_popup_call_poc_act_pane_g5

0xa5d3,	// (0x000957e9) bg_popup_call_poc_act_pane_g6

0xa5a3,	// (0x000957b9) bg_popup_call_poc_act_pane_g7

0xa5db,	// (0x000957f1) bg_popup_call_poc_act_pane_g8

0xddb3,	// (0x00098fc9) main_usb_pane

0x46d6,	// (0x0008f8ec) popup_cale_lunar_info_window

0x217a,	// (0x0008d390) im_reading_pane_t1_ParamLimits

0xe38f,	// (0x000995a5) list_im_pane_ParamLimits

0xe3a0,	// (0x000995b6) scroll_pane_cp07_ParamLimits

0xddb3,	// (0x00098fc9) grid_highlight_pane_cp012

0xe00e,	// (0x00099224) mup_scale_pane_ParamLimits

0xee34,	// (0x0009a04a) main_usb_pane_g1_ParamLimits

0xee34,	// (0x0009a04a) main_usb_pane_g1

0x438f,	// (0x0008f5a5) main_usb_pane_g2_ParamLimits

0x438f,	// (0x0008f5a5) main_usb_pane_g2

0x0001,

0xf555,	// (0x0009a76b) main_usb_pane_g_ParamLimits

0xf555,	// (0x0009a76b) main_usb_pane_g

0x43a3,	// (0x0008f5b9) main_usb_pane_t1_ParamLimits

0x43a3,	// (0x0008f5b9) main_usb_pane_t1

0x43b5,	// (0x0008f5cb) main_usb_pane_t2_ParamLimits

0x43b5,	// (0x0008f5cb) main_usb_pane_t2

0x43c7,	// (0x0008f5dd) main_usb_pane_t3_ParamLimits

0x43c7,	// (0x0008f5dd) main_usb_pane_t3

0x43d9,	// (0x0008f5ef) main_usb_pane_t4_ParamLimits

0x43d9,	// (0x0008f5ef) main_usb_pane_t4

0x43eb,	// (0x0008f601) main_usb_pane_t5_ParamLimits

0x43eb,	// (0x0008f601) main_usb_pane_t5

0x43fd,	// (0x0008f613) main_usb_pane_t6_ParamLimits

0x43fd,	// (0x0008f613) main_usb_pane_t6

0x0005,

0xf55a,	// (0x0009a770) main_usb_pane_t_ParamLimits

0x2fd6,	// (0x0008e1ec) aid_text_placing

0x2fdf,	// (0x0008e1f5) main_location2_pane_t1_ParamLimits

0x2ff1,	// (0x0008e207) main_location2_pane_t2_ParamLimits

0x3003,	// (0x0008e219) main_location2_pane_t3_ParamLimits

0x3015,	// (0x0008e22b) main_location2_pane_t4_ParamLimits

0x3015,	// (0x0008e22b) main_location2_pane_t4

0xf3a4,	// (0x0009a5ba) main_location2_pane_t_ParamLimits

0xe04a,	// (0x00099260) find_pinb_pane_g2_ParamLimits

0xe04a,	// (0x00099260) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009a335) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009a335) find_pinb_pane_g

0xe056,	// (0x0009926c) find_pinb_pane_t1_ParamLimits

0xe068,	// (0x0009927e) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009a33a) find_pinb_pane_t_ParamLimits

0xddb3,	// (0x00098fc9) main_call3_pane

0x26df,	// (0x0008d8f5) cale_month_day_heading_pane_t1_ParamLimits

0x2765,	// (0x0008d97b) cale_month_day_heading_pane_t2_ParamLimits

0x27de,	// (0x0008d9f4) cale_month_day_heading_pane_t3_ParamLimits

0x2857,	// (0x0008da6d) cale_month_day_heading_pane_t4_ParamLimits

0x28d0,	// (0x0008dae6) cale_month_day_heading_pane_t5_ParamLimits

0x2949,	// (0x0008db5f) cale_month_day_heading_pane_t6_ParamLimits

0x29c2,	// (0x0008dbd8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009a4bc) cale_month_day_heading_pane_t_ParamLimits

0xe5f9,	// (0x0009980f) smil_status_volume_pane

0x36e4,	// (0x0008e8fa) postcard_address_pane_ParamLimits

0x36e4,	// (0x0008e8fa) postcard_address_pane

0x36f4,	// (0x0008e90a) postcard_message_pane_ParamLimits

0x36f4,	// (0x0008e90a) postcard_message_pane

0x436e,	// (0x0008f584) call2_cli_visual_pane_t1_ParamLimits

0x436e,	// (0x0008f584) call2_cli_visual_pane_t1

0x4af1,	// (0x0008fd07) postcard_message_pane_t1_ParamLimits

0x4af1,	// (0x0008fd07) postcard_message_pane_t1

0x4ada,	// (0x0008fcf0) postcard_address_pane_t1_ParamLimits

0x4ada,	// (0x0008fcf0) postcard_address_pane_t1

0x4ac8,	// (0x0008fcde) popup_call3_audio_in_window_ParamLimits

0x4ac8,	// (0x0008fcde) popup_call3_audio_in_window

0x4957,	// (0x0008fb6d) bg_popup_call3_in_pane_ParamLimits

0x4957,	// (0x0008fb6d) bg_popup_call3_in_pane

0x49c9,	// (0x0008fbdf) popup_call3_audio_in_window_g1_ParamLimits

0x49c9,	// (0x0008fbdf) popup_call3_audio_in_window_g1

0x49e9,	// (0x0008fbff) popup_call3_audio_in_window_g2_ParamLimits

0x49e9,	// (0x0008fbff) popup_call3_audio_in_window_g2

0x4a09,	// (0x0008fc1f) popup_call3_audio_in_window_g3_ParamLimits

0x4a09,	// (0x0008fc1f) popup_call3_audio_in_window_g3

0x0003,

0xf5bc,	// (0x0009a7d2) popup_call3_audio_in_window_g_ParamLimits

0xf5bc,	// (0x0009a7d2) popup_call3_audio_in_window_g

0x4a3a,	// (0x0008fc50) popup_call3_audio_in_window_t1_ParamLimits

0x4a3a,	// (0x0008fc50) popup_call3_audio_in_window_t1

0x4a78,	// (0x0008fc8e) popup_call3_audio_in_window_t2_ParamLimits

0x4a78,	// (0x0008fc8e) popup_call3_audio_in_window_t2

0x4ab6,	// (0x0008fccc) popup_call3_audio_in_window_t3_ParamLimits

0x4ab6,	// (0x0008fccc) popup_call3_audio_in_window_t3

0x0002,

0xf5c5,	// (0x0009a7db) popup_call3_audio_in_window_t_ParamLimits

0xf5c5,	// (0x0009a7db) popup_call3_audio_in_window_t

0xe290,	// (0x000994a6) bg_popup_call3_rect_pane

0xa533,	// (0x00095749) bg_popup_call3_rect_pane_g1

0xe1d2,	// (0x000993e8) bg_popup_call3_rect_pane_g2

0xa53b,	// (0x00095751) bg_popup_call3_rect_pane_g3

0xa543,	// (0x00095759) bg_popup_call3_rect_pane_g4

0xa54b,	// (0x00095761) bg_popup_call3_rect_pane_g5

0xa553,	// (0x00095769) bg_popup_call3_rect_pane_g6

0xa55b,	// (0x00095771) bg_popup_call3_rect_pane_g7

0x32f7,	// (0x0008e50d) mup_visualizer_osc_pane

0xed83,	// (0x00099f99) mup_visualizer_spec_pane

0x4987,	// (0x0008fb9d) call3_video_qcif_pane_ParamLimits

0x4987,	// (0x0008fb9d) call3_video_qcif_pane

0x4998,	// (0x0008fbae) call3_video_qcif_uncrop_pane_ParamLimits

0x4998,	// (0x0008fbae) call3_video_qcif_uncrop_pane

0x49a4,	// (0x0008fbba) call3_video_subqcif_pane_ParamLimits

0x49a4,	// (0x0008fbba) call3_video_subqcif_pane

0x49b8,	// (0x0008fbce) call3_video_subqcif_uncrop_pane_ParamLimits

0x49b8,	// (0x0008fbce) call3_video_subqcif_uncrop_pane

0x4a29,	// (0x0008fc3f) popup_call3_audio_in_window_g4_ParamLimits

0x4a29,	// (0x0008fc3f) popup_call3_audio_in_window_g4

0x4946,	// (0x0008fb5c) mup_spec_half_pane

0x494f,	// (0x0008fb65) mup_spec_half_pane_cp

0xa820,	// (0x00095a36) mup_osc_middle_pane

0xa829,	// (0x00095a3f) mup_visualizer_osc_pane_g1

0x4927,	// (0x0008fb3d) mup_spec_bar_pane_ParamLimits

0x4927,	// (0x0008fb3d) mup_spec_bar_pane

0xa80d,	// (0x00095a23) mup_spec_bar_pane_g1

0xa817,	// (0x00095a2d) mup_spec_bar_pane_g2

0x0001,

0xf5b0,	// (0x0009a7c6) mup_spec_bar_pane_g

0x146b,	// (0x0008c681) aid_cale_week_size_cell_pane_ParamLimits

0x1485,	// (0x0008c69b) bg_cale_heading_pane_ParamLimits

0x149d,	// (0x0008c6b3) bg_cale_pane_cp01_ParamLimits

0x14ba,	// (0x0008c6d0) cale_week_corner_pane_ParamLimits

0x14d9,	// (0x0008c6ef) cale_week_day_heading_pane_ParamLimits

0x14f6,	// (0x0008c70c) cale_week_scroll_pane_g1_ParamLimits

0x1509,	// (0x0008c71f) cale_week_scroll_pane_g2_ParamLimits

0x1521,	// (0x0008c737) cale_week_scroll_pane_g3_ParamLimits

0x1539,	// (0x0008c74f) cale_week_scroll_pane_g4_ParamLimits

0x1551,	// (0x0008c767) cale_week_scroll_pane_g5_ParamLimits

0x1569,	// (0x0008c77f) cale_week_scroll_pane_g6_ParamLimits

0x1581,	// (0x0008c797) cale_week_scroll_pane_g7_ParamLimits

0x1599,	// (0x0008c7af) cale_week_scroll_pane_g8_ParamLimits

0x15b5,	// (0x0008c7cb) cale_week_scroll_pane_g9_ParamLimits

0x15cd,	// (0x0008c7e3) cale_week_scroll_pane_g10_ParamLimits

0x15e5,	// (0x0008c7fb) cale_week_scroll_pane_g11_ParamLimits

0x15fd,	// (0x0008c813) cale_week_scroll_pane_g12_ParamLimits

0x1615,	// (0x0008c82b) cale_week_scroll_pane_g13_ParamLimits

0x1615,	// (0x0008c82b) cale_week_scroll_pane_g14_ParamLimits

0x1615,	// (0x0008c82b) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0009a3c6) cale_week_scroll_pane_g_ParamLimits

0x1649,	// (0x0008c85f) cale_week_time_pane_ParamLimits

0x1665,	// (0x0008c87b) grid_cale_week_pane_ParamLimits

0xe20f,	// (0x00099425) listscroll_cale_week_pane_t1

0xe221,	// (0x00099437) scroll_pane_cp08_ParamLimits

0x22fc,	// (0x0008d512) cale_month_corner_pane_ParamLimits

0xe5cf,	// (0x000997e5) cale_month_pane_t1

0x2686,	// (0x0008d89c) cale_month_week_pane_ParamLimits

0x2e04,	// (0x0008e01a) popup_call_status_window_g1_ParamLimits

0x2e18,	// (0x0008e02e) popup_call_status_window_g2_ParamLimits

0x2e2c,	// (0x0008e042) popup_call_status_window_g3_ParamLimits

0xf330,	// (0x0009a546) popup_call_status_window_g_ParamLimits

0xe975,	// (0x00099b8b) aid_call2_pane

0x353c,	// (0x0008e752) msg_header_pane_g1

0x36e4,	// (0x0008e8fa) postcard_address2_pane_ParamLimits

0x36e4,	// (0x0008e8fa) postcard_address2_pane

0x36f4,	// (0x0008e90a) postcard_message2_pane_ParamLimits

0x36f4,	// (0x0008e90a) postcard_message2_pane

0x48e5,	// (0x0008fafb) message2_row_pane_ParamLimits

0x48e5,	// (0x0008fafb) message2_row_pane

0x48fd,	// (0x0008fb13) address2_row_pane_ParamLimits

0x48fd,	// (0x0008fb13) address2_row_pane

0xa7db,	// (0x000959f1) postcard_message2_row_pane_g1

0xa7e3,	// (0x000959f9) postcard_message2_row_pane_t1

0xa7db,	// (0x000959f1) address2_row_pane_g1

0xa7e3,	// (0x000959f9) address2_row_pane_t1

0x1a3c,	// (0x0008cc52) aid_size_cell_vorec

0xddb3,	// (0x00098fc9) main_rss_pane

0x4910,	// (0x0008fb26) rss_list_single_pane_ParamLimits

0x4910,	// (0x0008fb26) rss_list_single_pane

0xa7f1,	// (0x00095a07) rss_list_single_pane_t1

0xa7ff,	// (0x00095a15) rss_list_single_pane_t2

0x0001,

0xf5ab,	// (0x0009a7c1) rss_list_single_pane_t

0xddb3,	// (0x00098fc9) main_camera2_pane

0xddb3,	// (0x00098fc9) main_video2_pane

0x4b4a,	// (0x0008fd60) cams_zoom_pane_cp2_ParamLimits

0x4b4a,	// (0x0008fd60) cams_zoom_pane_cp2

0x4b61,	// (0x0008fd77) image2_vga_pane_ParamLimits

0x4b61,	// (0x0008fd77) image2_vga_pane

0x4b97,	// (0x0008fdad) main_camera2_pane_g1_ParamLimits

0x4b97,	// (0x0008fdad) main_camera2_pane_g1

0x4bb7,	// (0x0008fdcd) main_camera2_pane_g2_ParamLimits

0x4bb7,	// (0x0008fdcd) main_camera2_pane_g2

0x4bce,	// (0x0008fde4) main_camera2_pane_g3_ParamLimits

0x4bce,	// (0x0008fde4) main_camera2_pane_g3

0x4be5,	// (0x0008fdfb) main_camera2_pane_g4_ParamLimits

0x4be5,	// (0x0008fdfb) main_camera2_pane_g4

0x4bfc,	// (0x0008fe12) main_camera2_pane_g5_ParamLimits

0x4bfc,	// (0x0008fe12) main_camera2_pane_g5

0x4c13,	// (0x0008fe29) main_camera2_pane_g6_ParamLimits

0x4c13,	// (0x0008fe29) main_camera2_pane_g6

0x4c2a,	// (0x0008fe40) main_camera2_pane_g7_ParamLimits

0x4c2a,	// (0x0008fe40) main_camera2_pane_g7

0x4c41,	// (0x0008fe57) main_camera2_pane_g8_ParamLimits

0x4c41,	// (0x0008fe57) main_camera2_pane_g8

0x0008,

0xf5cc,	// (0x0009a7e2) main_camera2_pane_g_ParamLimits

0xf5cc,	// (0x0009a7e2) main_camera2_pane_g

0x4c6f,	// (0x0008fe85) main_camera2_pane_t1_ParamLimits

0x4c6f,	// (0x0008fe85) main_camera2_pane_t1

0x4c9e,	// (0x0008feb4) main_camera2_pane_t2_ParamLimits

0x4c9e,	// (0x0008feb4) main_camera2_pane_t2

0x4cbb,	// (0x0008fed1) main_camera2_pane_t3_ParamLimits

0x4cbb,	// (0x0008fed1) main_camera2_pane_t3

0x4d07,	// (0x0008ff1d) main_camera2_pane_t4_ParamLimits

0x4d07,	// (0x0008ff1d) main_camera2_pane_t4

0x0006,

0xf5df,	// (0x0009a7f5) main_camera2_pane_t_ParamLimits

0xf5df,	// (0x0009a7f5) main_camera2_pane_t

0x4d7c,	// (0x0008ff92) cams_zoom_pane_cp4_ParamLimits

0x4d7c,	// (0x0008ff92) cams_zoom_pane_cp4

0x4d92,	// (0x0008ffa8) image2_cif_pane_ParamLimits

0x4d92,	// (0x0008ffa8) image2_cif_pane

0x4db5,	// (0x0008ffcb) image2_subqcif_pane_ParamLimits

0x4db5,	// (0x0008ffcb) image2_subqcif_pane

0x4dcb,	// (0x0008ffe1) main_video2_pane_g1_ParamLimits

0x4dcb,	// (0x0008ffe1) main_video2_pane_g1

0x4de5,	// (0x0008fffb) main_video2_pane_g2_ParamLimits

0x4de5,	// (0x0008fffb) main_video2_pane_g2

0x4dfb,	// (0x00090011) main_video2_pane_g3_ParamLimits

0x4dfb,	// (0x00090011) main_video2_pane_g3

0x4e11,	// (0x00090027) main_video2_pane_g4_ParamLimits

0x4e11,	// (0x00090027) main_video2_pane_g4

0x4e27,	// (0x0009003d) main_video2_pane_g5_ParamLimits

0x4e27,	// (0x0009003d) main_video2_pane_g5

0x4e3d,	// (0x00090053) main_video2_pane_g6_ParamLimits

0x4e3d,	// (0x00090053) main_video2_pane_g6

0x0005,

0xf5ee,	// (0x0009a804) main_video2_pane_g_ParamLimits

0xf5ee,	// (0x0009a804) main_video2_pane_g

0x4e57,	// (0x0009006d) main_video2_pane_t1_ParamLimits

0x4e57,	// (0x0009006d) main_video2_pane_t1

0x4e7b,	// (0x00090091) main_video2_pane_t2_ParamLimits

0x4e7b,	// (0x00090091) main_video2_pane_t2

0x4ec5,	// (0x000900db) main_video2_pane_t3_ParamLimits

0x4ec5,	// (0x000900db) main_video2_pane_t3

0x0002,

0xf5fb,	// (0x0009a811) main_video2_pane_t_ParamLimits

0xf5fb,	// (0x0009a811) main_video2_pane_t

0x44ac,	// (0x0008f6c2) call_muted_g2

0x0001,

0xf59d,	// (0x0009a7b3) call_muted_g

0xddb3,	// (0x00098fc9) main_mup2_pane

0x4f07,	// (0x0009011d) main_mup2_pane_g1_ParamLimits

0x4f07,	// (0x0009011d) main_mup2_pane_g1

0x4f13,	// (0x00090129) main_mup2_pane_g2_ParamLimits

0x4f13,	// (0x00090129) main_mup2_pane_g2

0xa98c,	// (0x00095ba2) main_mup_pane_g13_cp1

0xa994,	// (0x00095baa) mup_volume_pane_cp1

0x4f2f,	// (0x00090145) main_mup2_pane_g4_ParamLimits

0x4f2f,	// (0x00090145) main_mup2_pane_g4

0x4f3f,	// (0x00090155) main_mup2_pane_g5_ParamLimits

0x4f3f,	// (0x00090155) main_mup2_pane_g5

0x4f4f,	// (0x00090165) main_mup2_pane_g6_ParamLimits

0x4f4f,	// (0x00090165) main_mup2_pane_g6

0x4f5f,	// (0x00090175) main_mup2_pane_g7_ParamLimits

0x4f5f,	// (0x00090175) main_mup2_pane_g7

0x0006,

0xf602,	// (0x0009a818) main_mup2_pane_g_ParamLimits

0xf602,	// (0x0009a818) main_mup2_pane_g

0x4f77,	// (0x0009018d) main_mup2_pane_t1_ParamLimits

0x4f77,	// (0x0009018d) main_mup2_pane_t1

0x4f8d,	// (0x000901a3) main_mup2_pane_t2_ParamLimits

0x4f8d,	// (0x000901a3) main_mup2_pane_t2

0x4fa3,	// (0x000901b9) main_mup2_pane_t3_ParamLimits

0x4fa3,	// (0x000901b9) main_mup2_pane_t3

0x4fb9,	// (0x000901cf) main_mup2_pane_t4_ParamLimits

0x4fb9,	// (0x000901cf) main_mup2_pane_t4

0x4fd1,	// (0x000901e7) main_mup2_pane_t5_ParamLimits

0x4fd1,	// (0x000901e7) main_mup2_pane_t5

0x4fe9,	// (0x000901ff) main_mup2_pane_t6_ParamLimits

0x4fe9,	// (0x000901ff) main_mup2_pane_t6

0x0005,

0xf611,	// (0x0009a827) main_mup2_pane_t_ParamLimits

0xf611,	// (0x0009a827) main_mup2_pane_t

0x5017,	// (0x0009022d) mup2_visualizer_pane_ParamLimits

0x5017,	// (0x0009022d) mup2_visualizer_pane

0x5042,	// (0x00090258) mup_progress_pane_cp_ParamLimits

0x5042,	// (0x00090258) mup_progress_pane_cp

0xa96e,	// (0x00095b84) mup_volume_pane_cp_ParamLimits

0xa96e,	// (0x00095b84) mup_volume_pane_cp

0x5056,	// (0x0009026c) mup2_visualizer_pane_g1_ParamLimits

0x5056,	// (0x0009026c) mup2_visualizer_pane_g1

0xa8ad,	// (0x00095ac3) mup2_visualizer_pane_g2_ParamLimits

0xa8ad,	// (0x00095ac3) mup2_visualizer_pane_g2

0x506b,	// (0x00090281) mup2_visualizer_pane_g3_ParamLimits

0x506b,	// (0x00090281) mup2_visualizer_pane_g3

0x0002,

0xf61e,	// (0x0009a834) mup2_visualizer_pane_g_ParamLimits

0xf61e,	// (0x0009a834) mup2_visualizer_pane_g

0x393b,	// (0x0008eb51) aid_size_cell_fmradio

0x4608,	// (0x0008f81e) aid_height_parent_landcape

0xe42d,	// (0x00099643) wml_content_pane_cp

0xe435,	// (0x0009964b) wml_tabs_pane

0xe43e,	// (0x00099654) popup_wml_miniature_window

0xe446,	// (0x0009965c) scroll_pane_cp021

0xe45a,	// (0x00099670) wml_content_pane_comp8

0xddb3,	// (0x00098fc9) bg_popup_sub_pane_cp05

0xa8cb,	// (0x00095ae1) popup_wml_miniature_window_g1

0xa8d3,	// (0x00095ae9) wml_miniature_view_pane

0x5077,	// (0x0009028d) aid_size_wml_view

0x507f,	// (0x00090295) wml_miniature_view_pane_g1

0x5088,	// (0x0009029e) wml_miniature_view_pane_g2

0x5091,	// (0x000902a7) wml_miniature_view_pane_g3

0x5099,	// (0x000902af) wml_miniature_view_pane_g4

0x50a1,	// (0x000902b7) wml_miniature_view_pane_g5

0x50a9,	// (0x000902bf) wml_miniature_view_pane_g6

0x50b1,	// (0x000902c7) wml_miniature_view_pane_g7

0x50b9,	// (0x000902cf) wml_miniature_view_pane_g8

0x0007,

0xf625,	// (0x0009a83b) wml_miniature_view_pane_g

0xa8db,	// (0x00095af1) background_graphic_ParamLimits

0xa8db,	// (0x00095af1) background_graphic

0xa8e7,	// (0x00095afd) wml_tabs_2_pane

0xa8f0,	// (0x00095b06) wml_tabs_3_pane_ParamLimits

0xa8f0,	// (0x00095b06) wml_tabs_3_pane

0xa902,	// (0x00095b18) wml_tabs_4_pane_ParamLimits

0xa902,	// (0x00095b18) wml_tabs_4_pane

0xa918,	// (0x00095b2e) wml_tabs_5_pane_ParamLimits

0xa918,	// (0x00095b2e) wml_tabs_5_pane

0xa932,	// (0x00095b48) wml_tabs_pane_g2_ParamLimits

0xa932,	// (0x00095b48) wml_tabs_pane_g2

0xa946,	// (0x00095b5c) wml_tabs_pane_g3_ParamLimits

0xa946,	// (0x00095b5c) wml_tabs_pane_g3

0x50c1,	// (0x000902d7) wml_tabs_2_active_pane_ParamLimits

0x50c1,	// (0x000902d7) wml_tabs_2_active_pane

0x50d1,	// (0x000902e7) wml_tabs_2_passive_pane_ParamLimits

0x50d1,	// (0x000902e7) wml_tabs_2_passive_pane

0x50e1,	// (0x000902f7) wml_tabs_3_active_pane_cp_ParamLimits

0x50e1,	// (0x000902f7) wml_tabs_3_active_pane_cp

0x50f2,	// (0x00090308) wml_tabs_3_passive_pane_ParamLimits

0x50f2,	// (0x00090308) wml_tabs_3_passive_pane

0x5103,	// (0x00090319) wml_tabs_3_passive_pane_cp_ParamLimits

0x5103,	// (0x00090319) wml_tabs_3_passive_pane_cp

0x5114,	// (0x0009032a) tabs_4_active_pane

0x511c,	// (0x00090332) tabs_4_passive_pane

0x5124,	// (0x0009033a) tabs_4_passive_pane_cp

0x512c,	// (0x00090342) tabs_4_passive_pane_cp2

0x4387,	// (0x0008f59d) aid_height_text

0x32cd,	// (0x0008e4e3) mup_volume_cont_pane_ParamLimits

0x32cd,	// (0x0008e4e3) mup_volume_cont_pane

0x10b5,	// (0x0008c2cb) aid_size_cell_pinb

0x10bf,	// (0x0008c2d5) aid_size_list_pinb

0x502e,	// (0x00090244) mup2_volume_cont_pane_ParamLimits

0x502e,	// (0x00090244) mup2_volume_cont_pane

0xa95a,	// (0x00095b70) mup2_volume_cont_pane_g1_ParamLimits

0xa95a,	// (0x00095b70) mup2_volume_cont_pane_g1

0x0dec,	// (0x0008c002) aid_size_cell_touch_ParamLimits

0x0dec,	// (0x0008c002) aid_size_cell_touch

0x0ff1,	// (0x0008c207) touch_pane_ParamLimits

0x0ff1,	// (0x0008c207) touch_pane

0x9e01,	// (0x00095017) main_rss2_pane

0xa99c,	// (0x00095bb2) listscroll_rss2_pane

0xa9a5,	// (0x00095bbb) rss2_navigation_pane

0xa9ad,	// (0x00095bc3) list_rss2_pane

0xea9c,	// (0x00099cb2) scroll_pane_cp22

0xa9b5,	// (0x00095bcb) rss2_navigation_pane_g1

0xa9be,	// (0x00095bd4) rss2_navigation_pane_g2

0xa9c6,	// (0x00095bdc) rss2_navigation_pane_g3

0x0002,

0xf636,	// (0x0009a84c) rss2_navigation_pane_g

0xa9ce,	// (0x00095be4) rss2_navigation_pane_t1

0x5134,	// (0x0009034a) rss2_list_single_pane_ParamLimits

0x5134,	// (0x0009034a) rss2_list_single_pane

0xa9dc,	// (0x00095bf2) rss2_list_single_pane_t2

0xa9ea,	// (0x00095c00) rss2_list_single_pane_t3_ParamLimits

0xa9ea,	// (0x00095c00) rss2_list_single_pane_t3

0xaa07,	// (0x00095c1d) rss2_list_single_pane_t4

0x2c26,	// (0x0008de3c) smil_status_pane_g1

0x9df3,	// (0x00095009) main_image2_pane_ParamLimits

0x9df3,	// (0x00095009) main_image2_pane

0x4c58,	// (0x0008fe6e) main_camera2_pane_g9_ParamLimits

0x4c58,	// (0x0008fe6e) main_camera2_pane_g9

0x4d4a,	// (0x0008ff60) main_camera2_pane_t5_ParamLimits

0x4d4a,	// (0x0008ff60) main_camera2_pane_t5

0xa882,	// (0x00095a98) main_camera2_pane_t6_ParamLimits

0xa882,	// (0x00095a98) main_camera2_pane_t6

0x5147,	// (0x0009035d) main_image2_pane_g1_ParamLimits

0x5147,	// (0x0009035d) main_image2_pane_g1

0x3903,	// (0x0008eb19) smil2_video_pane_ParamLimits

0x3903,	// (0x0008eb19) smil2_video_pane

0x9dab,	// (0x00094fc1) aid_zoom_text_primary_cp

0x9deb,	// (0x00095001) popup_preview_fixed_window

0xe387,	// (0x0009959d) im_reading_pane_g1

0x4b3e,	// (0x0008fd54) cams2_bc_adjust_pane_cp_ParamLimits

0x4b3e,	// (0x0008fd54) cams2_bc_adjust_pane_cp

0x4d70,	// (0x0008ff86) cams2_bc_adjust_pane_ParamLimits

0x4d70,	// (0x0008ff86) cams2_bc_adjust_pane

0xaa15,	// (0x00095c2b) cams2_bc_adjust_pane_g1

0xaa1d,	// (0x00095c33) cams2_slider_pane

0xaa26,	// (0x00095c3c) cams2_slider_pane_g1

0xaa2f,	// (0x00095c45) cams2_slider_pane_g2

0x0006,

0xf63d,	// (0x0009a853) cams2_slider_pane_g

0x1193,	// (0x0008c3a9) calc_display_pane_ParamLimits

0x11b5,	// (0x0008c3cb) calc_paper_pane_ParamLimits

0x11d2,	// (0x0008c3e8) grid_calc_pane_ParamLimits

0x9f2d,	// (0x00095143) popup_clock_digital_window_t1_ParamLimits

0xef1a,	// (0x0009a130) main_image_pane_t1

0x1175,	// (0x0008c38b) aid_size_cell_calc_ParamLimits

0x1175,	// (0x0008c38b) aid_size_cell_calc

0x466a,	// (0x0008f880) popup_blid_sat_info2_window_ParamLimits

0x466a,	// (0x0008f880) popup_blid_sat_info2_window

0xaa51,	// (0x00095c67) aid_size_cell_blid

0xaa59,	// (0x00095c6f) bg_popup_window_pane_cp07

0xaa7c,	// (0x00095c92) grid_popup_blid_pane

0xaa84,	// (0x00095c9a) heading_pane_cp05_ParamLimits

0xaa84,	// (0x00095c9a) heading_pane_cp05

0xab4c,	// (0x00095d62) cell_popup_blid_pane_ParamLimits

0xab4c,	// (0x00095d62) cell_popup_blid_pane

0xab6c,	// (0x00095d82) cell_popup_blid_pane_g1

0xab74,	// (0x00095d8a) cell_popup_blid_pane_t1

0x5003,	// (0x00090219) mup2_indicator_pane_ParamLimits

0x5003,	// (0x00090219) mup2_indicator_pane

0xe290,	// (0x000994a6) mup2_visualizer_osc_pane

0xa8b9,	// (0x00095acf) mup2_visualizer_spec_pane_ParamLimits

0xa8b9,	// (0x00095acf) mup2_visualizer_spec_pane

0x515b,	// (0x00090371) mup2_spec_half_pane

0x5164,	// (0x0009037a) mup2_spec_half_pane_cp

0x516c,	// (0x00090382) mup2_spec_bar_pane_ParamLimits

0x516c,	// (0x00090382) mup2_spec_bar_pane

0xa80d,	// (0x00095a23) mup2_spec_bar_pane_g1

0xa817,	// (0x00095a2d) mup2_spec_bar_pane_g2

0x0001,

0xf5b0,	// (0x0009a7c6) mup2_spec_bar_pane_g

0xa820,	// (0x00095a36) mup2_osc_middle_pane

0xa829,	// (0x00095a3f) mup2_visualizer_osc_pane_g1

0xd98e,	// (0x00098ba4) popup_number_entry_window_t1_ParamLimits

0xd9a1,	// (0x00098bb7) popup_number_entry_window_t2_ParamLimits

0xd9b3,	// (0x00098bc9) popup_number_entry_window_t3_ParamLimits

0xd9c5,	// (0x00098bdb) popup_number_entry_window_t5_ParamLimits

0xd9c5,	// (0x00098bdb) popup_number_entry_window_t5

0xf0ca,	// (0x0009a2e0) popup_number_entry_window_t_ParamLimits

0xd9f9,	// (0x00098c0f) text_title_cp2_ParamLimits

0x9f6c,	// (0x00095182) aid_hotspot_pointer_text2_pane

0x9f92,	// (0x000951a8) main_viewer_pane_g9_ParamLimits

0x9f92,	// (0x000951a8) main_viewer_pane_g9

0xe5cf,	// (0x000997e5) cale_month_pane_t1_ParamLimits

0xe60c,	// (0x00099822) bg_cale_pane_ParamLimits

0xe624,	// (0x0009983a) list_cale_pane_ParamLimits

0xe635,	// (0x0009984b) listscroll_cale_day_pane_t1

0xe647,	// (0x0009985d) scroll_pane_cp09_ParamLimits

0x3319,	// (0x0008e52f) main_mup_eq_pane_t1_ParamLimits

0x3319,	// (0x0008e52f) main_mup_eq_pane_t1

0x3331,	// (0x0008e547) main_mup_eq_pane_t2_ParamLimits

0x3331,	// (0x0008e547) main_mup_eq_pane_t2

0x3347,	// (0x0008e55d) main_mup_eq_pane_t3_ParamLimits

0x3347,	// (0x0008e55d) main_mup_eq_pane_t3

0x335d,	// (0x0008e573) main_mup_eq_pane_t4_ParamLimits

0x335d,	// (0x0008e573) main_mup_eq_pane_t4

0x3373,	// (0x0008e589) main_mup_eq_pane_t5_ParamLimits

0x3373,	// (0x0008e589) main_mup_eq_pane_t5

0x3389,	// (0x0008e59f) main_mup_eq_pane_t6_ParamLimits

0x3389,	// (0x0008e59f) main_mup_eq_pane_t6

0x339b,	// (0x0008e5b1) main_mup_eq_pane_t7_ParamLimits

0x339b,	// (0x0008e5b1) main_mup_eq_pane_t7

0x33ad,	// (0x0008e5c3) main_mup_eq_pane_t8_ParamLimits

0x33ad,	// (0x0008e5c3) main_mup_eq_pane_t8

0x33bf,	// (0x0008e5d5) main_mup_eq_pane_t9_ParamLimits

0x33bf,	// (0x0008e5d5) main_mup_eq_pane_t9

0x33d5,	// (0x0008e5eb) main_mup_eq_pane_t10_ParamLimits

0x33d5,	// (0x0008e5eb) main_mup_eq_pane_t10

0x0009,

0xf3fd,	// (0x0009a613) main_mup_eq_pane_t_ParamLimits

0xf3fd,	// (0x0009a613) main_mup_eq_pane_t

0x3468,	// (0x0008e67e) mup_equalizer_pane_cp5_ParamLimits

0x347a,	// (0x0008e690) mup_equalizer_pane_cp6_ParamLimits

0x348c,	// (0x0008e6a2) mup_equalizer_pane_cp7_ParamLimits

0x9e01,	// (0x00095017) main_gallery_pane

0xa832,	// (0x00095a48) smil2_volume_pane

0xa83a,	// (0x00095a50) smil_status_volume_pane_g1_ParamLimits

0xa84d,	// (0x00095a63) smil_status_volume_pane_g2_ParamLimits

0xa860,	// (0x00095a76) smil_status_volume_pane_g3_ParamLimits

0xf5b5,	// (0x0009a7cb) smil_status_volume_pane_g_ParamLimits

0xaa59,	// (0x00095c6f) bg_popup_window_pane_cp07_ParamLimits

0xaa67,	// (0x00095c7d) blid_firmament_pane

0x518b,	// (0x000903a1) aid_size_cell_gallery_ParamLimits

0x518b,	// (0x000903a1) aid_size_cell_gallery

0x51a1,	// (0x000903b7) grid_gallery_pane_ParamLimits

0x51a1,	// (0x000903b7) grid_gallery_pane

0x51b6,	// (0x000903cc) cell_gallery_pane_ParamLimits

0x51b6,	// (0x000903cc) cell_gallery_pane

0xab82,	// (0x00095d98) bg_cell_gallery_focus_pane_ParamLimits

0xab82,	// (0x00095d98) bg_cell_gallery_focus_pane

0xab94,	// (0x00095daa) cell_gallery_pane_g1_ParamLimits

0xab94,	// (0x00095daa) cell_gallery_pane_g1

0x51fb,	// (0x00090411) cell_gallery_pane_g2_ParamLimits

0x51fb,	// (0x00090411) cell_gallery_pane_g2

0x5208,	// (0x0009041e) cell_gallery_pane_g3_ParamLimits

0x5208,	// (0x0009041e) cell_gallery_pane_g3

0xaba0,	// (0x00095db6) cell_gallery_pane_g4_ParamLimits

0xaba0,	// (0x00095db6) cell_gallery_pane_g4

0x0003,

0xf663,	// (0x0009a879) cell_gallery_pane_g_ParamLimits

0xf663,	// (0x0009a879) cell_gallery_pane_g

0xabac,	// (0x00095dc2) bg_cell_gallery_focus_pane_g1

0xabb4,	// (0x00095dca) bg_cell_gallery_focus_pane_g2

0xabbc,	// (0x00095dd2) bg_cell_gallery_focus_pane_g3

0xabc4,	// (0x00095dda) bg_cell_gallery_focus_pane_g4

0xabcc,	// (0x00095de2) bg_cell_gallery_focus_pane_g5

0xabd4,	// (0x00095dea) bg_cell_gallery_focus_pane_g6

0xabdc,	// (0x00095df2) bg_cell_gallery_focus_pane_g7

0xabe4,	// (0x00095dfa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf66c,	// (0x0009a882) bg_cell_gallery_focus_pane_g

0xabec,	// (0x00095e02) aid_firma_cardinal

0xac00,	// (0x00095e16) blid_firmament_pane_t1

0xac17,	// (0x00095e2d) blid_firmament_pane_t2

0xac2e,	// (0x00095e44) blid_firmament_pane_t3

0xac45,	// (0x00095e5b) blid_firmament_pane_t4

0x0003,

0xf67d,	// (0x0009a893) blid_firmament_pane_t

0xac5c,	// (0x00095e72) blid_sat_info_pane

0xac6c,	// (0x00095e82) blid_sat_info_pane_g1

0xac6c,	// (0x00095e82) blid_sat_info_pane_g2

0x0001,

0xf686,	// (0x0009a89c) blid_sat_info_pane_g

0xac76,	// (0x00095e8c) blid_sat_info_pane_t1

0xac84,	// (0x00095e9a) smil2_volume_content_pane

0xac8d,	// (0x00095ea3) smil2_volume_pane_g1

0xac95,	// (0x00095eab) smil2_volume_content_pane_g1

0xac9e,	// (0x00095eb4) smil2_volume_content_pane_g2

0xaca7,	// (0x00095ebd) smil2_volume_content_pane_g3

0xacb0,	// (0x00095ec6) smil2_volume_content_pane_g4

0xacb9,	// (0x00095ecf) smil2_volume_content_pane_g5

0xacc2,	// (0x00095ed8) smil2_volume_content_pane_g6

0xaccb,	// (0x00095ee1) smil2_volume_content_pane_g7

0xacd4,	// (0x00095eea) smil2_volume_content_pane_g8

0xacdd,	// (0x00095ef3) smil2_volume_content_pane_g9

0xace6,	// (0x00095efc) smil2_volume_content_pane_g10

0x0009,

0xf68b,	// (0x0009a8a1) smil2_volume_content_pane_g

0x16f5,	// (0x0008c90b) cale_week_day_heading_pane_t1_ParamLimits

0x171a,	// (0x0008c930) cale_week_day_heading_pane_t2_ParamLimits

0x1744,	// (0x0008c95a) cale_week_day_heading_pane_t3_ParamLimits

0x176e,	// (0x0008c984) cale_week_day_heading_pane_t4_ParamLimits

0x1798,	// (0x0008c9ae) cale_week_day_heading_pane_t5_ParamLimits

0x17c2,	// (0x0008c9d8) cale_week_day_heading_pane_t6_ParamLimits

0x17ec,	// (0x0008ca02) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0009a3e7) cale_week_day_heading_pane_t_ParamLimits

0xe23e,	// (0x00099454) bg_cale_side_pane_ParamLimits

0x1811,	// (0x0008ca27) cale_week_time_pane_t1_ParamLimits

0x184b,	// (0x0008ca61) cale_week_time_pane_t2_ParamLimits

0x1885,	// (0x0008ca9b) cale_week_time_pane_t3_ParamLimits

0x18bf,	// (0x0008cad5) cale_week_time_pane_t4_ParamLimits

0x18f9,	// (0x0008cb0f) cale_week_time_pane_t5_ParamLimits

0x1933,	// (0x0008cb49) cale_week_time_pane_t6_ParamLimits

0x196d,	// (0x0008cb83) cale_week_time_pane_t7_ParamLimits

0x19a7,	// (0x0008cbbd) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009a3f6) cale_week_time_pane_t_ParamLimits

0x19e1,	// (0x0008cbf7) cell_cale_week_pane_g2_ParamLimits

0xe23e,	// (0x00099454) bg_cale_side_pane_cp01_ParamLimits

0x2a3f,	// (0x0008dc55) cale_month_week_pane_t1_ParamLimits

0x2a58,	// (0x0008dc6e) cale_month_week_pane_t2_ParamLimits

0x2a71,	// (0x0008dc87) cale_month_week_pane_t3_ParamLimits

0x2a8a,	// (0x0008dca0) cale_month_week_pane_t4_ParamLimits

0x2aa3,	// (0x0008dcb9) cale_month_week_pane_t5_ParamLimits

0x2abc,	// (0x0008dcd2) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009a4cb) cale_month_week_pane_t_ParamLimits

0x9ead,	// (0x000950c3) cell_cale_month_pane_g1_ParamLimits

0x9e01,	// (0x00095017) main_cale_event_viewer_pane

0xd964,	// (0x00098b7a) listscroll_cale_event_viewer_pane

0xacef,	// (0x00095f05) list_cale_ev_pane

0xacf7,	// (0x00095f0d) scroll_pane_cp023

0x5215,	// (0x0009042b) field_cale_ev_pane_ParamLimits

0x5215,	// (0x0009042b) field_cale_ev_pane

0xad03,	// (0x00095f19) field_cale_ev_content_pane_ParamLimits

0xad03,	// (0x00095f19) field_cale_ev_content_pane

0xad0f,	// (0x00095f25) field_cale_ev_pane_g1_ParamLimits

0xad0f,	// (0x00095f25) field_cale_ev_pane_g1

0xad1b,	// (0x00095f31) field_cale_ev_pane_g2_ParamLimits

0xad1b,	// (0x00095f31) field_cale_ev_pane_g2

0xad33,	// (0x00095f49) field_cale_ev_pane_g3_ParamLimits

0xad33,	// (0x00095f49) field_cale_ev_pane_g3

0x0002,

0xf6a0,	// (0x0009a8b6) field_cale_ev_pane_g_ParamLimits

0xf6a0,	// (0x0009a8b6) field_cale_ev_pane_g

0xad4b,	// (0x00095f61) field_cale_ev_pane_t1_ParamLimits

0xad4b,	// (0x00095f61) field_cale_ev_pane_t1

0x522f,	// (0x00090445) field_cale_ev_content_pane_t1_ParamLimits

0x522f,	// (0x00090445) field_cale_ev_content_pane_t1

0xee00,	// (0x0009a016) bg_button_pane_cp01

0x145b,	// (0x0008c671) listscroll_cale_week_pane_ParamLimits

0xe206,	// (0x0009941c) popup_toolbar_window_cp01

0xe20f,	// (0x00099425) listscroll_cale_week_pane_t1_ParamLimits

0x145b,	// (0x0008c671) listscroll_cale_day_pane_ParamLimits

0xe206,	// (0x0009941c) popup_toolbar_window_cp02

0xe635,	// (0x0009984b) listscroll_cale_day_pane_t1_ParamLimits

0x4624,	// (0x0008f83a) main_cale_month_pane_ParamLimits

0xa7ab,	// (0x000959c1) popup_toolbar_window_cp03_ParamLimits

0xa7ab,	// (0x000959c1) popup_toolbar_window_cp03

0x37dd,	// (0x0008e9f3) main_image_pane_g2_ParamLimits

0x37dd,	// (0x0008e9f3) main_image_pane_g2

0x37ee,	// (0x0008ea04) main_image_pane_g3_ParamLimits

0x37ee,	// (0x0008ea04) main_image_pane_g3

0x0002,

0xf485,	// (0x0009a69b) main_image_pane_g_ParamLimits

0xf485,	// (0x0009a69b) main_image_pane_g

0xef1a,	// (0x0009a130) main_image_pane_t1_ParamLimits

0x37ff,	// (0x0008ea15) main_image_pane_t2_ParamLimits

0x37ff,	// (0x0008ea15) main_image_pane_t2

0x3811,	// (0x0008ea27) main_image_pane_t3_ParamLimits

0x3811,	// (0x0008ea27) main_image_pane_t3

0x3839,	// (0x0008ea4f) main_image_pane_t4_ParamLimits

0x3839,	// (0x0008ea4f) main_image_pane_t4

0x0003,

0xf48c,	// (0x0009a6a2) main_image_pane_t_ParamLimits

0xf48c,	// (0x0009a6a2) main_image_pane_t

0x3859,	// (0x0008ea6f) popup_image_details_window_cp01

0x3861,	// (0x0008ea77) popup_toobar_trans_pane_cp01_ParamLimits

0x3861,	// (0x0008ea77) popup_toobar_trans_pane_cp01

0x473b,	// (0x0008f951) popup_image_details_window_ParamLimits

0x473b,	// (0x0008f951) popup_image_details_window

0xa780,	// (0x00095996) popup_image_focus_window

0x4b0c,	// (0x0008fd22) camera2_autofocus_pane_ParamLimits

0x4b0c,	// (0x0008fd22) camera2_autofocus_pane

0xd964,	// (0x00098b7a) bg_popup_sub_pane_cp06

0xad62,	// (0x00095f78) popup_image_focus_window_g1

0xad6a,	// (0x00095f80) popup_image_focus_window_g2

0xad72,	// (0x00095f88) popup_image_focus_window_g3

0xad7a,	// (0x00095f90) popup_image_focus_window_g4

0x0003,

0xf6a7,	// (0x0009a8bd) popup_image_focus_window_g

0xad82,	// (0x00095f98) popup_image_focus_window_t1

0xad90,	// (0x00095fa6) popup_image_focus_window_t2

0xad9f,	// (0x00095fb5) popup_image_focus_window_t3

0x0002,

0xf6b0,	// (0x0009a8c6) popup_image_focus_window_t

0xadad,	// (0x00095fc3) camera2_autofocus_pane_g1

0x4634,	// (0x0008f84a) bg_tb_trans_pane_cp01

0xadbb,	// (0x00095fd1) popup_image_details_window_g1

0xadce,	// (0x00095fe4) popup_image_details_window_g2

0x0002,

0xf6c2,	// (0x0009a8d8) popup_image_details_window_g

0xadf7,	// (0x0009600d) popup_image_details_window_t1

0xae09,	// (0x0009601f) popup_image_details_window_t2

0xae22,	// (0x00096038) popup_image_details_window_t3

0xae36,	// (0x0009604c) popup_image_details_window_t4

0xae51,	// (0x00096067) popup_image_details_window_t5

0x0004,

0xf6c9,	// (0x0009a8df) popup_image_details_window_t

0xe0cb,	// (0x000992e1) bg_calc_paper_pane_ParamLimits

0x9e01,	// (0x00095017) grid_highlight_pane_cp013

0x9e13,	// (0x00095029) list_calc_pane_ParamLimits

0x9e25,	// (0x0009503b) scroll_pane_cp024

0xe0df,	// (0x000992f5) bg_calc_display_pane_ParamLimits

0x12be,	// (0x0008c4d4) calc_display_pane_t1_ParamLimits

0x12d0,	// (0x0008c4e6) calc_display_pane_t2_ParamLimits

0x9e2d,	// (0x00095043) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009a367) calc_display_pane_t_ParamLimits

0x137a,	// (0x0008c590) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009a384) cell_calc_pane_g

0x1383,	// (0x0008c599) cell_calc_pane_t1

0xe13e,	// (0x00099354) grid_highlight_pane_cp02_ParamLimits

0xe154,	// (0x0009936a) toolbar_button_pane_cp01_ParamLimits

0xe154,	// (0x0009936a) toolbar_button_pane_cp01

0xef5f,	// (0x0009a175) temp_image_control_pane_ParamLimits

0xef5f,	// (0x0009a175) temp_image_control_pane

0x9df3,	// (0x00095009) main_mp3_pane

0xae6b,	// (0x00096081) temp_image_control_pane_g1_ParamLimits

0xae6b,	// (0x00096081) temp_image_control_pane_g1

0xae79,	// (0x0009608f) temp_image_control_pane_g2_ParamLimits

0xae79,	// (0x0009608f) temp_image_control_pane_g2

0xae8b,	// (0x000960a1) temp_image_control_pane_g3_ParamLimits

0xae8b,	// (0x000960a1) temp_image_control_pane_g3

0x527c,	// (0x00090492) temp_image_control_pane_g4_ParamLimits

0x527c,	// (0x00090492) temp_image_control_pane_g4

0x0003,

0xf6d4,	// (0x0009a8ea) temp_image_control_pane_g_ParamLimits

0xf6d4,	// (0x0009a8ea) temp_image_control_pane_g

0xae6b,	// (0x00096081) main_mp3_pane_g1

0x528d,	// (0x000904a3) main_mp3_pane_g2

0x0007,

0xf6dd,	// (0x0009a8f3) main_mp3_pane_g

0xaece,	// (0x000960e4) main_mp3_pane_t1

0xe298,	// (0x000994ae) main_camera_pane_g8_ParamLimits

0xe298,	// (0x000994ae) main_camera_pane_g8

0x1cbf,	// (0x0008ced5) main_video_pane_g7_ParamLimits

0x1cbf,	// (0x0008ced5) main_video_pane_g7

0xa89b,	// (0x00095ab1) main_camera2_pane_t7_ParamLimits

0xa89b,	// (0x00095ab1) main_camera2_pane_t7

0xe3ed,	// (0x00099603) scroll_pane_cp025_ParamLimits

0xe3ed,	// (0x00099603) scroll_pane_cp025

0xe401,	// (0x00099617) scroll_pane_cp026_ParamLimits

0xe401,	// (0x00099617) scroll_pane_cp026

0xe410,	// (0x00099626) wml_content_pane_ParamLimits

0x9e01,	// (0x00095017) main_touch_calib_pane

0x534f,	// (0x00090565) main_touch_calib_pane_g1

0x5361,	// (0x00090577) main_touch_calib_pane_g2

0x5373,	// (0x00090589) main_touch_calib_pane_g3

0x5385,	// (0x0009059b) main_touch_calib_pane_g4

0x0003,

0xf6fb,	// (0x0009a911) main_touch_calib_pane_g

0x5397,	// (0x000905ad) main_touch_calib_pane_t1

0x53af,	// (0x000905c5) main_touch_calib_pane_t2

0x0004,

0xf704,	// (0x0009a91a) main_touch_calib_pane_t

0xeb69,	// (0x00099d7f) mup_progress_pane_cp02

0xeb9e,	// (0x00099db4) navi_pane_g1

0xec57,	// (0x00099e6d) navi_pane_mp_t3

0x9df3,	// (0x00095009) main_mp3_pane_ParamLimits

0x4898,	// (0x0008faae) navi_pane_ParamLimits

0xae6b,	// (0x00096081) main_mp3_pane_g1_ParamLimits

0x528d,	// (0x000904a3) main_mp3_pane_g2_ParamLimits

0x5299,	// (0x000904af) main_mp3_pane_g3_ParamLimits

0x5299,	// (0x000904af) main_mp3_pane_g3

0x52a5,	// (0x000904bb) main_mp3_pane_g4_ParamLimits

0x52a5,	// (0x000904bb) main_mp3_pane_g4

0xae9b,	// (0x000960b1) main_mp3_pane_g5_ParamLimits

0xae9b,	// (0x000960b1) main_mp3_pane_g5

0xaea9,	// (0x000960bf) main_mp3_pane_g6_ParamLimits

0xaea9,	// (0x000960bf) main_mp3_pane_g6

0xaeb6,	// (0x000960cc) main_mp3_pane_g7_ParamLimits

0xaeb6,	// (0x000960cc) main_mp3_pane_g7

0xaec2,	// (0x000960d8) main_mp3_pane_g8_ParamLimits

0xaec2,	// (0x000960d8) main_mp3_pane_g8

0xf6dd,	// (0x0009a8f3) main_mp3_pane_g_ParamLimits

0x52b1,	// (0x000904c7) main_mp3_pane_t2

0x52bf,	// (0x000904d5) main_mp3_pane_t3

0xaedc,	// (0x000960f2) main_mp3_pane_t4

0xaeea,	// (0x00096100) main_mp3_pane_t5

0x0005,

0xf6ee,	// (0x0009a904) main_mp3_pane_t

0xaef8,	// (0x0009610e) mup_progress_pane_cp01

0x9dab,	// (0x00094fc1) aid_zoom_text_secondary2

0xacef,	// (0x00095f05) list_cale_ev2_pane

0xacf7,	// (0x00095f0d) scroll_pane_cp023_ParamLimits

0x53fd,	// (0x00090613) field_cale_ev2_pane_ParamLimits

0x53fd,	// (0x00090613) field_cale_ev2_pane

0x5415,	// (0x0009062b) field_cale_ev2_pane_g1_ParamLimits

0x5415,	// (0x0009062b) field_cale_ev2_pane_g1

0x5421,	// (0x00090637) field_cale_ev2_pane_g2_ParamLimits

0x5421,	// (0x00090637) field_cale_ev2_pane_g2

0x5439,	// (0x0009064f) field_cale_ev2_pane_g3_ParamLimits

0x5439,	// (0x0009064f) field_cale_ev2_pane_g3

0x0003,

0xf70f,	// (0x0009a925) field_cale_ev2_pane_g_ParamLimits

0xf70f,	// (0x0009a925) field_cale_ev2_pane_g

0x5451,	// (0x00090667) field_cale_ev2_pane_t1_ParamLimits

0x5451,	// (0x00090667) field_cale_ev2_pane_t1

0x5468,	// (0x0009067e) field_cale_ev2_pane_t2_ParamLimits

0x5468,	// (0x0009067e) field_cale_ev2_pane_t2

0x0001,

0xf718,	// (0x0009a92e) field_cale_ev2_pane_t_ParamLimits

0xf718,	// (0x0009a92e) field_cale_ev2_pane_t

0x36a0,	// (0x0008e8b6) main_postcard_pane_g5_ParamLimits

0x36a0,	// (0x0008e8b6) main_postcard_pane_g5

0x36b4,	// (0x0008e8ca) main_postcard_pane_g6_ParamLimits

0x36b4,	// (0x0008e8ca) main_postcard_pane_g6

0x1aa5,	// (0x0008ccbb) camera2_autofocus_pane_cp_ParamLimits

0x1aa5,	// (0x0008ccbb) camera2_autofocus_pane_cp

0x9df3,	// (0x00095009) main_mup3_pane

0x549d,	// (0x000906b3) main_mup3_pane_g1_ParamLimits

0x549d,	// (0x000906b3) main_mup3_pane_g1

0x54bf,	// (0x000906d5) main_mup3_pane_g2_ParamLimits

0x54bf,	// (0x000906d5) main_mup3_pane_g2

0x5532,	// (0x00090748) main_mup3_pane_g3_ParamLimits

0x5532,	// (0x00090748) main_mup3_pane_g3

0x5570,	// (0x00090786) main_mup3_pane_g4_ParamLimits

0x5570,	// (0x00090786) main_mup3_pane_g4

0x55ae,	// (0x000907c4) main_mup3_pane_g5_ParamLimits

0x55ae,	// (0x000907c4) main_mup3_pane_g5

0x55ec,	// (0x00090802) main_mup3_pane_g6_ParamLimits

0x55ec,	// (0x00090802) main_mup3_pane_g6

0xaf0c,	// (0x00096122) main_mup3_pane_g7_ParamLimits

0xaf0c,	// (0x00096122) main_mup3_pane_g7

0x0007,

0xf728,	// (0x0009a93e) main_mup3_pane_g_ParamLimits

0xf728,	// (0x0009a93e) main_mup3_pane_g

0x5660,	// (0x00090876) main_mup3_pane_t1_ParamLimits

0x5660,	// (0x00090876) main_mup3_pane_t1

0x56c6,	// (0x000908dc) main_mup3_pane_t2_ParamLimits

0x56c6,	// (0x000908dc) main_mup3_pane_t2

0x578c,	// (0x000909a2) main_mup3_pane_t4_ParamLimits

0x578c,	// (0x000909a2) main_mup3_pane_t4

0x57da,	// (0x000909f0) main_mup3_pane_t5_ParamLimits

0x57da,	// (0x000909f0) main_mup3_pane_t5

0x5888,	// (0x00090a9e) main_mup3_pane_t6_ParamLimits

0x5888,	// (0x00090a9e) main_mup3_pane_t6

0x0005,

0xf739,	// (0x0009a94f) main_mup3_pane_t_ParamLimits

0xf739,	// (0x0009a94f) main_mup3_pane_t

0x593c,	// (0x00090b52) mup3_progress_pane_ParamLimits

0x593c,	// (0x00090b52) mup3_progress_pane

0x59b8,	// (0x00090bce) popup_mup3_control_window_ParamLimits

0x59b8,	// (0x00090bce) popup_mup3_control_window

0xaf1a,	// (0x00096130) popup_mup3_text_window

0x59e6,	// (0x00090bfc) mup3_progress_pane_t1

0x5a04,	// (0x00090c1a) mup3_progress_pane_t2

0xaf22,	// (0x00096138) mup3_progress_pane_t3

0x0002,

0xf746,	// (0x0009a95c) mup3_progress_pane_t

0xaf3f,	// (0x00096155) mup_progress_pane_cp03

0xd964,	// (0x00098b7a) bg_tb_trans_pane_cp04

0x5a22,	// (0x00090c38) mup3_volume_pane

0x5a2a,	// (0x00090c40) popup_mup3_control_window_g1

0xaf4f,	// (0x00096165) mup3_volume_pane_g1

0xaf58,	// (0x0009616e) mup3_volume_pane_g2

0xaf61,	// (0x00096177) mup3_volume_pane_g3

0x0002,

0xf74d,	// (0x0009a963) mup3_volume_pane_g

0xd964,	// (0x00098b7a) bg_tb_trans_pane_cp03

0xaf6a,	// (0x00096180) popup_mup3_text_window_g1

0xaf72,	// (0x00096188) popup_mup3_text_window_t1

0xe127,	// (0x0009933d) list_calc_item_pane_g1_ParamLimits

0xa983,	// (0x00095b99) mup_volume_pane_cp_g1

0x53c7,	// (0x000905dd) main_touch_calib_pane_t3

0x53d9,	// (0x000905ef) main_touch_calib_pane_t4

0x53eb,	// (0x00090601) main_touch_calib_pane_t5

0x9d8b,	// (0x00094fa1) aid_cell_size_toolbar2

0x9d93,	// (0x00094fa9) aid_popup3_width_pane

0x9d9b,	// (0x00094fb1) aid_zoom_text_msg_primary

0x1a84,	// (0x0008cc9a) vorec_t7

0xe0eb,	// (0x00099301) bg_calc_paper_pane_g1_ParamLimits

0xe0f7,	// (0x0009930d) bg_calc_paper_pane_g2_ParamLimits

0xe103,	// (0x00099319) bg_calc_paper_pane_g3_ParamLimits

0xe10f,	// (0x00099325) bg_calc_paper_pane_g4_ParamLimits

0xe11b,	// (0x00099331) bg_calc_paper_pane_g5_ParamLimits

0x1315,	// (0x0008c52b) bg_calc_paper_pane_g6_ParamLimits

0x1324,	// (0x0008c53a) bg_calc_paper_pane_g7_ParamLimits

0x1333,	// (0x0008c549) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0009a36e) bg_calc_paper_pane_g_ParamLimits

0x1342,	// (0x0008c558) calc_bg_paper_pane_g9_ParamLimits

0x1bd7,	// (0x0008cded) image_qvga_pane_ParamLimits

0x1bd7,	// (0x0008cded) image_qvga_pane

0xe00e,	// (0x00099224) bg_popup_sub_pane_cp04_ParamLimits

0xee96,	// (0x0009a0ac) popup_mup_playback_window_g1_ParamLimits

0xeea2,	// (0x0009a0b8) popup_mup_playback_window_t1_ParamLimits

0xeeb7,	// (0x0009a0cd) popup_mup_playback_window_t2_ParamLimits

0x0254,	// (0x0008b46a) popup_mup_playback_window_t_ParamLimits

0x4f23,	// (0x00090139) main_mup2_pane_g3_ParamLimits

0x4f23,	// (0x00090139) main_mup2_pane_g3

0x1fb4,	// (0x0008d1ca) popup_toolbar_window_cp04

0x3d04,	// (0x0008ef1a) popup_call2_audio_second_window_g3_ParamLimits

0x3d04,	// (0x0008ef1a) popup_call2_audio_second_window_g3

0x410e,	// (0x0008f324) popup_call2_audio_first_window_g4_ParamLimits

0x410e,	// (0x0008f324) popup_call2_audio_first_window_g4

0xa3bd,	// (0x000955d3) popup_call2_audio_in_window_g4_ParamLimits

0xa3bd,	// (0x000955d3) popup_call2_audio_in_window_g4

0x37bf,	// (0x0008e9d5) aid_area_sk_bg_cut_ParamLimits

0x37bf,	// (0x0008e9d5) aid_area_sk_bg_cut

0xeecc,	// (0x0009a0e2) aid_area_sk_bg_cut_2_ParamLimits

0xeecc,	// (0x0009a0e2) aid_area_sk_bg_cut_2

0x51eb,	// (0x00090401) aid_placing_details_win

0x51f3,	// (0x00090409) aid_placing_details_win_2

0xadad,	// (0x00095fc3) camera2_autofocus_pane_g1_ParamLimits

0x0f8e,	// (0x0008c1a4) popup_fixed_preview_cale_window_ParamLimits

0x0f8e,	// (0x0008c1a4) popup_fixed_preview_cale_window

0xecd5,	// (0x00099eeb) navi_slider_pane_g3

0xecde,	// (0x00099ef4) navi_slider_pane_g4

0xece7,	// (0x00099efd) navi_slider_pane_g5

0xecd5,	// (0x00099eeb) navi_slider_pane_g6

0x9f53,	// (0x00095169) navi_slider_pane_g7

0xedcd,	// (0x00099fe3) mup_scale_pane_g3

0xedd6,	// (0x00099fec) mup_scale_pane_g4

0xeddf,	// (0x00099ff5) mup_scale_pane_g5

0x34a0,	// (0x0008e6b6) mup_scale_pane_g6

0x34a9,	// (0x0008e6bf) mup_scale_pane_g7

0xecd5,	// (0x00099eeb) cams2_slider_pane_g3

0xaa38,	// (0x00095c4e) cams2_slider_pane_g4

0xaa40,	// (0x00095c56) cams2_slider_pane_g5

0xecd5,	// (0x00099eeb) cams2_slider_pane_g6

0xaa48,	// (0x00095c5e) cams2_slider_pane_g7

0xac6c,	// (0x00095e82) camera2_autofocus_pane_cp_g1

0xa75e,	// (0x00095974) bg_popup_preview_window_pane_cp02_ParamLimits

0xa75e,	// (0x00095974) bg_popup_preview_window_pane_cp02

0xaf80,	// (0x00096196) list_fp_cale_pane_ParamLimits

0xaf80,	// (0x00096196) list_fp_cale_pane

0xaf8c,	// (0x000961a2) popup_fixed_preview_cale_window_t1_ParamLimits

0xaf8c,	// (0x000961a2) popup_fixed_preview_cale_window_t1

0x5a33,	// (0x00090c49) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a33,	// (0x00090c49) popup_fixed_preview_cale_window_t2

0x5a48,	// (0x00090c5e) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a48,	// (0x00090c5e) popup_fixed_preview_cale_window_t3

0x0002,

0xf754,	// (0x0009a96a) popup_fixed_preview_cale_window_t_ParamLimits

0xf754,	// (0x0009a96a) popup_fixed_preview_cale_window_t

0x5a5d,	// (0x00090c73) list_single_fp_cale_pane_ParamLimits

0x5a5d,	// (0x00090c73) list_single_fp_cale_pane

0xafaa,	// (0x000961c0) list_single_fp_cale_pane_g1_ParamLimits

0xafaa,	// (0x000961c0) list_single_fp_cale_pane_g1

0xafb6,	// (0x000961cc) list_single_fp_cale_pane_g2_ParamLimits

0xafb6,	// (0x000961cc) list_single_fp_cale_pane_g2

0x0002,

0xf75b,	// (0x0009a971) list_single_fp_cale_pane_g_ParamLimits

0xf75b,	// (0x0009a971) list_single_fp_cale_pane_g

0xafcf,	// (0x000961e5) list_single_fp_cale_pane_t1_ParamLimits

0xafcf,	// (0x000961e5) list_single_fp_cale_pane_t1

0xafe1,	// (0x000961f7) list_single_fp_cale_pane_t2_ParamLimits

0xafe1,	// (0x000961f7) list_single_fp_cale_pane_t2

0x0001,

0xf762,	// (0x0009a978) list_single_fp_cale_pane_t_ParamLimits

0xf762,	// (0x0009a978) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9e01,	// (0x00095017) main_dialer_pane

0x5a70,	// (0x00090c86) aid_cell_size_keypad

0x5a7a,	// (0x00090c90) dialer_ne_pane

0x5a82,	// (0x00090c98) grid_dialer_command_1_pane

0x5a8a,	// (0x00090ca0) grid_dialer_command_2_pane

0x5a92,	// (0x00090ca8) grid_dialer_keypad_pane

0x5aa2,	// (0x00090cb8) bg_popup_call_pane_cp06_ParamLimits

0x5aa2,	// (0x00090cb8) bg_popup_call_pane_cp06

0x5aae,	// (0x00090cc4) dialer_ne_clear_pane_ParamLimits

0x5aae,	// (0x00090cc4) dialer_ne_clear_pane

0xb014,	// (0x0009622a) dialer_ne_pane_g1

0xb01c,	// (0x00096232) dialer_ne_pane_t1_ParamLimits

0xb01c,	// (0x00096232) dialer_ne_pane_t1

0x5aba,	// (0x00090cd0) dialer_ne_pane_t2_ParamLimits

0x5aba,	// (0x00090cd0) dialer_ne_pane_t2

0x5ae4,	// (0x00090cfa) dialer_ne_pane_t3_ParamLimits

0x5ae4,	// (0x00090cfa) dialer_ne_pane_t3

0x0002,

0xf767,	// (0x0009a97d) dialer_ne_pane_t_ParamLimits

0xf767,	// (0x0009a97d) dialer_ne_pane_t

0x5b14,	// (0x00090d2a) dialer_ne_pane_t3_copy1_ParamLimits

0x5b14,	// (0x00090d2a) dialer_ne_pane_t3_copy1

0x5b43,	// (0x00090d59) cell_dialer_keypad_pane_ParamLimits

0x5b43,	// (0x00090d59) cell_dialer_keypad_pane

0x5b58,	// (0x00090d6e) cell_dialer_command_1_pane_ParamLimits

0x5b58,	// (0x00090d6e) cell_dialer_command_1_pane

0x5b6e,	// (0x00090d84) cell_dialer_command_2_pane_ParamLimits

0x5b6e,	// (0x00090d84) cell_dialer_command_2_pane

0xb02e,	// (0x00096244) bg_button_pane_cp02_ParamLimits

0xb02e,	// (0x00096244) bg_button_pane_cp02

0x5b7d,	// (0x00090d93) cell_dialer_keypad_pane_g1_ParamLimits

0x5b7d,	// (0x00090d93) cell_dialer_keypad_pane_g1

0xb02e,	// (0x00096244) bg_button_pane_cp03_ParamLimits

0xb02e,	// (0x00096244) bg_button_pane_cp03

0x5b92,	// (0x00090da8) cell_dialer_command_1_pane_g1_ParamLimits

0x5b92,	// (0x00090da8) cell_dialer_command_1_pane_g1

0xb03a,	// (0x00096250) bg_button_pane_cp04

0x5ba5,	// (0x00090dbb) cell_dialer_command_2_pane_g1

0xe290,	// (0x000994a6) bg_button_pane_cp06

0xb042,	// (0x00096258) dialer_ne_clear_pane_g1

0xebaa,	// (0x00099dc0) navi_pane_g2

0xebd8,	// (0x00099dee) navi_pane_g3

0x0002,

0x0157,	// (0x0008b36d) navi_pane_g

0xec65,	// (0x00099e7b) navi_pane_mv_g2

0xec8c,	// (0x00099ea2) navi_pane_mv_g5

0x30ac,	// (0x0008e2c2) navi_pane_mv_t1

0xe0df,	// (0x000992f5) main_clock2_pane

0x5bea,	// (0x00090e00) main_clock2_list_pane_ParamLimits

0x5bea,	// (0x00090e00) main_clock2_list_pane

0x5c1c,	// (0x00090e32) main_clock2_pane_t1_ParamLimits

0x5c1c,	// (0x00090e32) main_clock2_pane_t1

0x5c56,	// (0x00090e6c) main_clock2_pane_t2_ParamLimits

0x5c56,	// (0x00090e6c) main_clock2_pane_t2

0x0004,

0xf773,	// (0x0009a989) main_clock2_pane_t_ParamLimits

0xf773,	// (0x0009a989) main_clock2_pane_t

0x5cea,	// (0x00090f00) popup_clock_analogue_window_cp03_ParamLimits

0x5cea,	// (0x00090f00) popup_clock_analogue_window_cp03

0x5d0e,	// (0x00090f24) popup_clock_digital_window_cp02_ParamLimits

0x5d0e,	// (0x00090f24) popup_clock_digital_window_cp02

0x5d7f,	// (0x00090f95) main_clock2_list_single_pane_ParamLimits

0x5d7f,	// (0x00090f95) main_clock2_list_single_pane

0xe290,	// (0x000994a6) list_highlight_pane_cp05

0xb07a,	// (0x00096290) main_clock2_list_single_pane_t1

0x1fb4,	// (0x0008d1ca) popup_toolbar_window_cp04_ParamLimits

0x524c,	// (0x00090462) camera2_autofocus_pane_g2_ParamLimits

0x524c,	// (0x00090462) camera2_autofocus_pane_g2

0x5258,	// (0x0009046e) camera2_autofocus_pane_g3_ParamLimits

0x5258,	// (0x0009046e) camera2_autofocus_pane_g3

0x5264,	// (0x0009047a) camera2_autofocus_pane_g4_ParamLimits

0x5264,	// (0x0009047a) camera2_autofocus_pane_g4

0x5270,	// (0x00090486) camera2_autofocus_pane_g5_ParamLimits

0x5270,	// (0x00090486) camera2_autofocus_pane_g5

0x0004,

0xf6b7,	// (0x0009a8cd) camera2_autofocus_pane_g_ParamLimits

0xf6b7,	// (0x0009a8cd) camera2_autofocus_pane_g

0x547d,	// (0x00090693) camera2_autofocus_pane_cp_g2

0x5485,	// (0x0009069b) camera2_autofocus_pane_cp_g3

0x548d,	// (0x000906a3) camera2_autofocus_pane_cp_g4

0x5495,	// (0x000906ab) camera2_autofocus_pane_cp_g5

0x0004,

0xf71d,	// (0x0009a933) camera2_autofocus_pane_cp_g

0x5a9a,	// (0x00090cb0) popup_dialer_spcha_window

0xd964,	// (0x00098b7a) bg_popup_sub_pane_cp07

0xb088,	// (0x0009629e) list_spcha_pane

0xb090,	// (0x000962a6) list_single_spcha_pane_ParamLimits

0xb090,	// (0x000962a6) list_single_spcha_pane

0xd964,	// (0x00098b7a) list_highlight_pane_cp06

0xb0a1,	// (0x000962b7) list_single_spcha_pane_t1

0xa167,	// (0x0009537d) popup_call2_audio_out_window_g4_ParamLimits

0xa167,	// (0x0009537d) popup_call2_audio_out_window_g4

0x9e01,	// (0x00095017) main_imed2_pane

0xa788,	// (0x0009599e) popup_imed_adjust2_window

0x4751,	// (0x0008f967) popup_imed_trans_window_ParamLimits

0x4751,	// (0x0008f967) popup_imed_trans_window

0xaab0,	// (0x00095cc6) popup_blid_sat_info2_window_t1

0xaabe,	// (0x00095cd4) popup_blid_sat_info2_window_t2

0x000a,

0xf64c,	// (0x0009a862) popup_blid_sat_info2_window_t

0x5e29,	// (0x0009103f) aid_size_cell_colour_35

0x5e49,	// (0x0009105f) aid_size_cell_colour_112

0x5e69,	// (0x0009107f) aid_size_cell_effect

0xa76a,	// (0x00095980) bg_tb_trans_pane_cp02

0xe746,	// (0x0009995c) heading_imed_pane

0x5e88,	// (0x0009109e) listscroll_imed_pane

0xb0af,	// (0x000962c5) heading_imed_pane_g1

0xb0b7,	// (0x000962cd) heading_imed_pane_t1

0xb0c5,	// (0x000962db) grid_imed_colour_35_pane_ParamLimits

0xb0c5,	// (0x000962db) grid_imed_colour_35_pane

0x5e94,	// (0x000910aa) grid_imed_effect_pane

0xb0d8,	// (0x000962ee) list_imed_aspect_pane

0x5ea9,	// (0x000910bf) scroll_pane_cp027_ParamLimits

0x5ea9,	// (0x000910bf) scroll_pane_cp027

0x5eba,	// (0x000910d0) cell_imed_effect_pane_ParamLimits

0x5eba,	// (0x000910d0) cell_imed_effect_pane

0xb0e0,	// (0x000962f6) cell_imed_colour_pane_ParamLimits

0xb0e0,	// (0x000962f6) cell_imed_colour_pane

0xb11a,	// (0x00096330) cell_imed_colour_pane_g1_ParamLimits

0xb11a,	// (0x00096330) cell_imed_colour_pane_g1

0xb12b,	// (0x00096341) hgihlgiht_grid_pane_cp016_ParamLimits

0xb12b,	// (0x00096341) hgihlgiht_grid_pane_cp016

0x5edf,	// (0x000910f5) cell_imed_effect_pane_g1

0x5ee7,	// (0x000910fd) grid_highlight_pane_cp017

0xb13b,	// (0x00096351) list_imed_single_pane_ParamLimits

0xb13b,	// (0x00096351) list_imed_single_pane

0xd964,	// (0x00098b7a) list_highlight_pane_cp07

0xb14e,	// (0x00096364) list_imed_aspect_pane_comp1_t1

0xa76a,	// (0x00095980) bg_tb_trans_pane_cp05

0xb16e,	// (0x00096384) popup_imed_adjust2_window_g1

0xb195,	// (0x000963ab) popup_imed_adjust2_window_t1

0xb1ad,	// (0x000963c3) slider_imed_adjust_pane

0xb1c1,	// (0x000963d7) slider_imed_adjust_pane_g1

0xb1d1,	// (0x000963e7) slider_imed_adjust_pane_g2

0xb1e1,	// (0x000963f7) slider_imed_adjust_pane_g3

0xb1f2,	// (0x00096408) slider_imed_adjust_pane_g4

0x0003,

0xf790,	// (0x0009a9a6) slider_imed_adjust_pane_g

0x5ef0,	// (0x00091106) aid_size_cell_clipart2

0x5efb,	// (0x00091111) grid_imed_clipart_pane

0xb203,	// (0x00096419) scroll_pane_cp031

0x5f05,	// (0x0009111b) cell_imed_clipart_pane_ParamLimits

0x5f05,	// (0x0009111b) cell_imed_clipart_pane

0x5f1a,	// (0x00091130) cell_imed_clipart_pane_g1

0xd964,	// (0x00098b7a) grid_highlight_pane_cp014

0x5bfd,	// (0x00090e13) main_clock2_pane_g1_ParamLimits

0x5bfd,	// (0x00090e13) main_clock2_pane_g1

0x5d2a,	// (0x00090f40) aid_call2_pane_cp10

0x5d3c,	// (0x00090f52) aid_call_pane_cp10

0xeb0b,	// (0x00099d21) popup_clock_analogue_window_cp10_g1

0xeb0b,	// (0x00099d21) popup_clock_analogue_window_cp10_g2

0x5d4e,	// (0x00090f64) popup_clock_analogue_window_cp10_g3

0x5d4e,	// (0x00090f64) popup_clock_analogue_window_cp10_g4

0xeb0b,	// (0x00099d21) popup_clock_analogue_window_cp10_g5

0x0004,

0xf77e,	// (0x0009a994) popup_clock_analogue_window_cp10_g

0x5d60,	// (0x00090f76) popup_clock_analogue_window_cp10_t1

0x5d91,	// (0x00090fa7) clock_digital_number_pane_cp10_ParamLimits

0x5d91,	// (0x00090fa7) clock_digital_number_pane_cp10

0x5da9,	// (0x00090fbf) clock_digital_number_pane_cp11_ParamLimits

0x5da9,	// (0x00090fbf) clock_digital_number_pane_cp11

0x5dc1,	// (0x00090fd7) clock_digital_number_pane_cp12_ParamLimits

0x5dc1,	// (0x00090fd7) clock_digital_number_pane_cp12

0x5dd9,	// (0x00090fef) clock_digital_number_pane_cp13_ParamLimits

0x5dd9,	// (0x00090fef) clock_digital_number_pane_cp13

0x5df1,	// (0x00091007) clock_digital_separator_pane_cp10_ParamLimits

0x5df1,	// (0x00091007) clock_digital_separator_pane_cp10

0x5e09,	// (0x0009101f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5e09,	// (0x0009101f) popup_clock_digital_window_cp02_t1

0xe006,	// (0x0009921c) clock_digital_number_pane_cp10_g1

0xe006,	// (0x0009921c) clock_digital_number_pane_cp10_g2

0x0001,

0x0574,	// (0x0008b78a) clock_digital_number_pane_cp10_g

0xe006,	// (0x0009921c) clock_digital_separator_pane_cp10_g1

0xe006,	// (0x0009921c) clock_digital_separator_pane_g2_cp10

0xec94,	// (0x00099eaa) navi_pane_vded_g4

0xec9d,	// (0x00099eb3) navi_pane_vded_g5

0xeca6,	// (0x00099ebc) navi_pane_vded_t1

0x9e01,	// (0x00095017) main_vded_pane

0x5f23,	// (0x00091139) main_vded_pane_g1

0x5f2b,	// (0x00091141) main_vded_pane_g2

0x5f33,	// (0x00091149) main_vded_pane_g3

0x0002,

0xf799,	// (0x0009a9af) main_vded_pane_g

0x5f3b,	// (0x00091151) main_vded_pane_t1

0x5f49,	// (0x0009115f) main_vded_pane_t2

0x0001,

0xf7a0,	// (0x0009a9b6) main_vded_pane_t

0x5f57,	// (0x0009116d) vded_slider_pane

0x5f5f,	// (0x00091175) vded_video_pane

0xb20b,	// (0x00096421) vded_video_pane_g1

0x5f67,	// (0x0009117d) vded_video_pane_g2

0xac6c,	// (0x00095e82) vded_video_pane_g3

0x0002,

0xf7a5,	// (0x0009a9bb) vded_video_pane_g

0xb215,	// (0x0009642b) vded_slider_pane_g1

0xa983,	// (0x00095b99) vded_slider_pane_g2

0xb21e,	// (0x00096434) vded_slider_pane_g3

0xb227,	// (0x0009643d) vded_slider_pane_g4

0xb230,	// (0x00096446) vded_slider_pane_g5

0x0004,

0xf7ac,	// (0x0009a9c2) vded_slider_pane_g

0x59a2,	// (0x00090bb8) mup3_rocker_pane_ParamLimits

0x59a2,	// (0x00090bb8) mup3_rocker_pane

0x5f70,	// (0x00091186) mup3_control_keys_pane_g1

0x5f78,	// (0x0009118e) mup3_control_keys_pane_g2

0x5f80,	// (0x00091196) mup3_control_keys_pane_g3

0x5f88,	// (0x0009119e) mup3_control_keys_pane_g4

0x0003,

0xf7b7,	// (0x0009a9cd) mup3_control_keys_pane_g

0x0fc5,	// (0x0008c1db) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fc5,	// (0x0008c1db) popup_toolbar2_fixed_window_cp01

0x59d0,	// (0x00090be6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x59d0,	// (0x00090be6) popup_toolbar2_fixed_window_cp02

0x3e76,	// (0x0008f08c) popup_call2_audio_second_window_t4_ParamLimits

0x3e76,	// (0x0008f08c) popup_call2_audio_second_window_t4

0x9fd4,	// (0x000951ea) popup_call2_audio_first_window_t6_ParamLimits

0x9fd4,	// (0x000951ea) popup_call2_audio_first_window_t6

0xa26a,	// (0x00095480) popup_call2_audio_out_window_t6_ParamLimits

0xa26a,	// (0x00095480) popup_call2_audio_out_window_t6

0x9e01,	// (0x00095017) main_vitu_pane

0x5f98,	// (0x000911ae) aid_size_cell_itu_ParamLimits

0x5f98,	// (0x000911ae) aid_size_cell_itu

0x4634,	// (0x0008f84a) bg_popup_window_pane_cp08_ParamLimits

0x4634,	// (0x0008f84a) bg_popup_window_pane_cp08

0x5fae,	// (0x000911c4) field_vitu_entry_pane_ParamLimits

0x5fae,	// (0x000911c4) field_vitu_entry_pane

0x5fc1,	// (0x000911d7) grid_vitu_function_pane_ParamLimits

0x5fc1,	// (0x000911d7) grid_vitu_function_pane

0x5fd6,	// (0x000911ec) grid_vitu_itu_pane_ParamLimits

0x5fd6,	// (0x000911ec) grid_vitu_itu_pane

0x5fec,	// (0x00091202) cell_vitu_itu_pane_ParamLimits

0x5fec,	// (0x00091202) cell_vitu_itu_pane

0x600e,	// (0x00091224) cell_vitu_function_pane_ParamLimits

0x600e,	// (0x00091224) cell_vitu_function_pane

0x4634,	// (0x0008f84a) bg_popup_sub_pane_cp08_ParamLimits

0x4634,	// (0x0008f84a) bg_popup_sub_pane_cp08

0x6027,	// (0x0009123d) field_vitu_entry_pane_t1_ParamLimits

0x6027,	// (0x0009123d) field_vitu_entry_pane_t1

0xb251,	// (0x00096467) field_vitu_entry_pane_t2_ParamLimits

0xb251,	// (0x00096467) field_vitu_entry_pane_t2

0x0001,

0xf7c5,	// (0x0009a9db) field_vitu_entry_pane_t_ParamLimits

0xf7c5,	// (0x0009a9db) field_vitu_entry_pane_t

0xb26e,	// (0x00096484) bg_button_pane_cp05_ParamLimits

0xb26e,	// (0x00096484) bg_button_pane_cp05

0x6043,	// (0x00091259) cell_vitu_itu_pane_g1

0x605b,	// (0x00091271) cell_vitu_itu_pane_t1_ParamLimits

0x605b,	// (0x00091271) cell_vitu_itu_pane_t1

0x606d,	// (0x00091283) cell_vitu_itu_pane_t2_ParamLimits

0x606d,	// (0x00091283) cell_vitu_itu_pane_t2

0x0002,

0xf7ca,	// (0x0009a9e0) cell_vitu_itu_pane_t_ParamLimits

0xf7ca,	// (0x0009a9e0) cell_vitu_itu_pane_t

0xb27c,	// (0x00096492) bg_button_pane_cp07

0x60a2,	// (0x000912b8) cell_vitu_function_pane_g1

0x9e0b,	// (0x00095021) main_calc_pane_g1

0x0e10,	// (0x0008c026) aid_visual_content_pane

0x9e01,	// (0x00095017) main_vradio_pane

0x60ab,	// (0x000912c1) main_vradio_pane_g1_ParamLimits

0x60ab,	// (0x000912c1) main_vradio_pane_g1

0xb286,	// (0x0009649c) main_vradio_pane_g2_ParamLimits

0xb286,	// (0x0009649c) main_vradio_pane_g2

0x0001,

0xf7d1,	// (0x0009a9e7) main_vradio_pane_g_ParamLimits

0xf7d1,	// (0x0009a9e7) main_vradio_pane_g

0x60c1,	// (0x000912d7) main_vradio_pane_t1_ParamLimits

0x60c1,	// (0x000912d7) main_vradio_pane_t1

0x60d6,	// (0x000912ec) main_vradio_pane_t2_ParamLimits

0x60d6,	// (0x000912ec) main_vradio_pane_t2

0xb293,	// (0x000964a9) main_vradio_pane_t3_ParamLimits

0xb293,	// (0x000964a9) main_vradio_pane_t3

0x0002,

0xf7d6,	// (0x0009a9ec) main_vradio_pane_t_ParamLimits

0xf7d6,	// (0x0009a9ec) main_vradio_pane_t

0x60eb,	// (0x00091301) vradio_rocker_control_pane_ParamLimits

0x60eb,	// (0x00091301) vradio_rocker_control_pane

0x60fd,	// (0x00091313) vradio_station_info_pane_ParamLimits

0x60fd,	// (0x00091313) vradio_station_info_pane

0xb2a5,	// (0x000964bb) vradio_frequency_info_pane_ParamLimits

0xb2a5,	// (0x000964bb) vradio_frequency_info_pane

0xac6c,	// (0x00095e82) vradio_station_info_pane_g1

0xb2b4,	// (0x000964ca) vradio_station_info_pane_t1_ParamLimits

0xb2b4,	// (0x000964ca) vradio_station_info_pane_t1

0xb2d6,	// (0x000964ec) vradio_station_info_pane_t2_ParamLimits

0xb2d6,	// (0x000964ec) vradio_station_info_pane_t2

0x0001,

0xf7dd,	// (0x0009a9f3) vradio_station_info_pane_t_ParamLimits

0xf7dd,	// (0x0009a9f3) vradio_station_info_pane_t

0xb2e8,	// (0x000964fe) vradio_tuning_pane

0xb2f0,	// (0x00096506) vradio_rocker_control_pane_g1

0xb2f8,	// (0x0009650e) vradio_rocker_control_pane_g2

0xb300,	// (0x00096516) vradio_rocker_control_pane_g3

0xb308,	// (0x0009651e) vradio_rocker_control_pane_g4

0xb310,	// (0x00096526) vradio_rocker_control_pane_g5

0x0004,

0xf7e2,	// (0x0009a9f8) vradio_rocker_control_pane_g

0x610d,	// (0x00091323) vradio_frequency_info_pane_g1

0xb318,	// (0x0009652e) vradio_frequency_info_pane_t1_ParamLimits

0xb318,	// (0x0009652e) vradio_frequency_info_pane_t1

0x6117,	// (0x0009132d) vradio_tuning_pane_g1

0x6120,	// (0x00091336) vradio_tuning_pane_t1

0x9db3,	// (0x00094fc9) area_side_right_pane_ParamLimits

0x9db3,	// (0x00094fc9) area_side_right_pane

0xa725,	// (0x0009593b) status_small_pane_g1

0xa72d,	// (0x00095943) status_small_pane_g2

0xa736,	// (0x0009594c) status_small_pane_g3

0xa73f,	// (0x00095955) status_small_pane_g4

0x0003,

0xf5a2,	// (0x0009a7b8) status_small_pane_g

0xa748,	// (0x0009595e) status_small_pane_t1

0x9e01,	// (0x00095017) main_video3_pane

0xb32c,	// (0x00096542) cams_zoom_vslider_pane

0xb334,	// (0x0009654a) image3_wide_pane_ParamLimits

0xb334,	// (0x0009654a) image3_wide_pane

0xb34e,	// (0x00096564) image3_wide_small_pane

0xb358,	// (0x0009656e) main_video3_pane_g1_ParamLimits

0xb358,	// (0x0009656e) main_video3_pane_g1

0xb374,	// (0x0009658a) main_video3_pane_g2_ParamLimits

0xb374,	// (0x0009658a) main_video3_pane_g2

0x0001,

0xf7ed,	// (0x0009aa03) main_video3_pane_g_ParamLimits

0xf7ed,	// (0x0009aa03) main_video3_pane_g

0xb390,	// (0x000965a6) main_video3_pane_t1_ParamLimits

0xb390,	// (0x000965a6) main_video3_pane_t1

0xb3bb,	// (0x000965d1) main_video3_pane_t2_ParamLimits

0xb3bb,	// (0x000965d1) main_video3_pane_t2

0xb3e6,	// (0x000965fc) main_video3_pane_t3_ParamLimits

0xb3e6,	// (0x000965fc) main_video3_pane_t3

0x0002,

0xf7f2,	// (0x0009aa08) main_video3_pane_t_ParamLimits

0xf7f2,	// (0x0009aa08) main_video3_pane_t

0xb411,	// (0x00096627) cams_zoom_vslider_pane_g1

0xb41a,	// (0x00096630) cams_zoom_vslider_pane_g2

0x0001,

0xf7f9,	// (0x0009aa0f) cams_zoom_vslider_pane_g

0xb422,	// (0x00096638) small_slider_vertical_pane

0xac6c,	// (0x00095e82) small_slider_vertical_pane_g1

0xac6c,	// (0x00095e82) small_slider_vertical_pane_g2

0xb42a,	// (0x00096640) small_slider_vertical_pane_g3

0x0002,

0xf7fe,	// (0x0009aa14) small_slider_vertical_pane_g

0x9e01,	// (0x00095017) main_hwr_training_pane

0xb433,	// (0x00096649) hwr_training_instruct_pane_ParamLimits

0xb433,	// (0x00096649) hwr_training_instruct_pane

0x612f,	// (0x00091345) hwr_training_navi_pane_ParamLimits

0x612f,	// (0x00091345) hwr_training_navi_pane

0x6146,	// (0x0009135c) hwr_training_write_pane_ParamLimits

0x6146,	// (0x0009135c) hwr_training_write_pane

0xd964,	// (0x00098b7a) bg_frame_shadow_pane

0xb462,	// (0x00096678) hwr_training_write_pane_g1

0xb46a,	// (0x00096680) hwr_training_write_pane_g2

0xb472,	// (0x00096688) hwr_training_write_pane_g3

0xb47a,	// (0x00096690) hwr_training_write_pane_g4

0xb482,	// (0x00096698) hwr_training_write_pane_g5

0xb48a,	// (0x000966a0) hwr_training_write_pane_g6

0xb492,	// (0x000966a8) hwr_training_write_pane_g7

0x0006,

0xf805,	// (0x0009aa1b) hwr_training_write_pane_g

0xb49a,	// (0x000966b0) hwr_training_navi_pane_g1_ParamLimits

0xb49a,	// (0x000966b0) hwr_training_navi_pane_g1

0xb4ac,	// (0x000966c2) hwr_training_navi_pane_g2_ParamLimits

0xb4ac,	// (0x000966c2) hwr_training_navi_pane_g2

0xb4be,	// (0x000966d4) hwr_training_navi_pane_g3_ParamLimits

0xb4be,	// (0x000966d4) hwr_training_navi_pane_g3

0xb4ce,	// (0x000966e4) hwr_training_navi_pane_g4_ParamLimits

0xb4ce,	// (0x000966e4) hwr_training_navi_pane_g4

0x0004,

0xf814,	// (0x0009aa2a) hwr_training_navi_pane_g_ParamLimits

0xf814,	// (0x0009aa2a) hwr_training_navi_pane_g

0xb4db,	// (0x000966f1) hwr_training_navi_pane_t1

0x6186,	// (0x0009139c) list_single_hwr_training_instruct_pane_ParamLimits

0x6186,	// (0x0009139c) list_single_hwr_training_instruct_pane

0xb4e9,	// (0x000966ff) list_single_hwr_training_instruct_pane_t1

0xabac,	// (0x00095dc2) bg_frame_shadow_pane_g1

0xb4f8,	// (0x0009670e) bg_frame_shadow_pane_g2

0xb500,	// (0x00096716) bg_frame_shadow_pane_g3

0xb508,	// (0x0009671e) bg_frame_shadow_pane_g4

0xb510,	// (0x00096726) bg_frame_shadow_pane_g5

0xb518,	// (0x0009672e) bg_frame_shadow_pane_g6

0xb520,	// (0x00096736) bg_frame_shadow_pane_g7

0xe1aa,	// (0x000993c0) bg_frame_shadow_pane_g8

0x0007,

0xf81f,	// (0x0009aa35) bg_frame_shadow_pane_g

0x9e01,	// (0x00095017) main_video_tele_dialer_pane

0x6199,	// (0x000913af) aid_size_cell_video_keypad_ParamLimits

0x6199,	// (0x000913af) aid_size_cell_video_keypad

0x61b3,	// (0x000913c9) grid_video_dialer_keypad_pane_ParamLimits

0x61b3,	// (0x000913c9) grid_video_dialer_keypad_pane

0x61f5,	// (0x0009140b) video_down_pane_cp_ParamLimits

0x61f5,	// (0x0009140b) video_down_pane_cp

0x6225,	// (0x0009143b) cell_video_dialer_keypad_pane_ParamLimits

0x6225,	// (0x0009143b) cell_video_dialer_keypad_pane

0xb528,	// (0x0009673e) bg_button_pane_cp08_ParamLimits

0xb528,	// (0x0009673e) bg_button_pane_cp08

0x6247,	// (0x0009145d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6247,	// (0x0009145d) cell_video_dialer_keypad_pane_g1

0x598c,	// (0x00090ba2) mup3_rocker2_pane_ParamLimits

0x598c,	// (0x00090ba2) mup3_rocker2_pane

0xac6c,	// (0x00095e82) mup3_rocker2_pane_g1

0x4642,	// (0x0008f858) main_dialer2_pane

0x9e01,	// (0x00095017) main_mp4_pane

0xd545,	// (0x0009875b) main_mp4_pane_g1_ParamLimits

0xd545,	// (0x0009875b) main_mp4_pane_g1

0xd545,	// (0x0009875b) main_mp4_pane_g2_ParamLimits

0xd545,	// (0x0009875b) main_mp4_pane_g2

0x6282,	// (0x00091498) main_mp4_pane_g3_ParamLimits

0x6282,	// (0x00091498) main_mp4_pane_g3

0xd553,	// (0x00098769) main_mp4_pane_g4_ParamLimits

0xd553,	// (0x00098769) main_mp4_pane_g4

0xd57b,	// (0x00098791) main_mp4_pane_g5_ParamLimits

0xd57b,	// (0x00098791) main_mp4_pane_g5

0x0005,

0xf83f,	// (0x0009aa55) main_mp4_pane_g_ParamLimits

0xf83f,	// (0x0009aa55) main_mp4_pane_g

0xd5cb,	// (0x000987e1) main_mp4_pane_t1_ParamLimits

0xd5cb,	// (0x000987e1) main_mp4_pane_t1

0xd623,	// (0x00098839) main_mp4_pane_t2_ParamLimits

0xd623,	// (0x00098839) main_mp4_pane_t2

0xb534,	// (0x0009674a) main_mp4_pane_t3_ParamLimits

0xb534,	// (0x0009674a) main_mp4_pane_t3

0xd675,	// (0x0009888b) main_mp4_pane_t4_ParamLimits

0xd675,	// (0x0009888b) main_mp4_pane_t4

0x0003,

0xf84c,	// (0x0009aa62) main_mp4_pane_t_ParamLimits

0xf84c,	// (0x0009aa62) main_mp4_pane_t

0xd6b5,	// (0x000988cb) mp4_progress_pane_ParamLimits

0xd6b5,	// (0x000988cb) mp4_progress_pane

0xd6ff,	// (0x00098915) mp4_rocker_pane_ParamLimits

0xd6ff,	// (0x00098915) mp4_rocker_pane

0xb55c,	// (0x00096772) mp4_progress_pane_t1

0xb573,	// (0x00096789) mp4_progress_pane_t2

0x0001,

0xf855,	// (0x0009aa6b) mp4_progress_pane_t

0xb58a,	// (0x000967a0) mup_progress_pane_cp04

0xb596,	// (0x000967ac) mp4_rocker_pane_g1

0x62b2,	// (0x000914c8) aid_cell_size_keypad2_ParamLimits

0x62b2,	// (0x000914c8) aid_cell_size_keypad2

0x62c8,	// (0x000914de) dialer2_ne_pane_ParamLimits

0x62c8,	// (0x000914de) dialer2_ne_pane

0x62dc,	// (0x000914f2) grid_dialer2_keypad_pane_ParamLimits

0x62dc,	// (0x000914f2) grid_dialer2_keypad_pane

0xaa59,	// (0x00095c6f) bg_popup_call_pane_cp07_ParamLimits

0xaa59,	// (0x00095c6f) bg_popup_call_pane_cp07

0x62f2,	// (0x00091508) dialer2_ne_pane_t1_ParamLimits

0x62f2,	// (0x00091508) dialer2_ne_pane_t1

0x632c,	// (0x00091542) cell_dialer2_keypad_pane_ParamLimits

0x632c,	// (0x00091542) cell_dialer2_keypad_pane

0xb5b2,	// (0x000967c8) bg_button_pane_pane_cp04_ParamLimits

0xb5b2,	// (0x000967c8) bg_button_pane_pane_cp04

0x634e,	// (0x00091564) cell_dialer2_keypad_pane_g1_ParamLimits

0x634e,	// (0x00091564) cell_dialer2_keypad_pane_g1

0x1ea5,	// (0x0008d0bb) aid_placing_vt_set_content_ParamLimits

0x1ea5,	// (0x0008d0bb) aid_placing_vt_set_content

0x1ec7,	// (0x0008d0dd) aid_placing_vt_set_title_ParamLimits

0x1ec7,	// (0x0008d0dd) aid_placing_vt_set_title

0x9e01,	// (0x00095017) main_image3_pane

0x63fa,	// (0x00091610) area_side_right_pane_cp01_ParamLimits

0x63fa,	// (0x00091610) area_side_right_pane_cp01

0xd545,	// (0x0009875b) main_image3_pane_g1_ParamLimits

0xd545,	// (0x0009875b) main_image3_pane_g1

0x6411,	// (0x00091627) main_image3_pane_g2_ParamLimits

0x6411,	// (0x00091627) main_image3_pane_g2

0x6437,	// (0x0009164d) main_image3_pane_g3_ParamLimits

0x6437,	// (0x0009164d) main_image3_pane_g3

0x645d,	// (0x00091673) main_image3_pane_g4_ParamLimits

0x645d,	// (0x00091673) main_image3_pane_g4

0x0003,

0xf864,	// (0x0009aa7a) main_image3_pane_g_ParamLimits

0xf864,	// (0x0009aa7a) main_image3_pane_g

0x6483,	// (0x00091699) main_image3_pane_t1_ParamLimits

0x6483,	// (0x00091699) main_image3_pane_t1

0x64db,	// (0x000916f1) main_image3_pane_t2_ParamLimits

0x64db,	// (0x000916f1) main_image3_pane_t2

0x652d,	// (0x00091743) main_image3_pane_t3_ParamLimits

0x652d,	// (0x00091743) main_image3_pane_t3

0x0003,

0xf86d,	// (0x0009aa83) main_image3_pane_t_ParamLimits

0xf86d,	// (0x0009aa83) main_image3_pane_t

0x4634,	// (0x0008f84a) grid_sctrl_middle_pane_cp01_ParamLimits

0x4634,	// (0x0008f84a) grid_sctrl_middle_pane_cp01

0x65ad,	// (0x000917c3) cell_sctrl_middle_pane_cp01_ParamLimits

0x65ad,	// (0x000917c3) cell_sctrl_middle_pane_cp01

0x65ca,	// (0x000917e0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x65ca,	// (0x000917e0) cell_sctrl_middle_pane_cp01_g1

0x9e01,	// (0x00095017) main_call4_pane

0x65e0,	// (0x000917f6) aid_size_button_call4_ParamLimits

0x65e0,	// (0x000917f6) aid_size_button_call4

0x660f,	// (0x00091825) call4_windows_pane_ParamLimits

0x660f,	// (0x00091825) call4_windows_pane

0x662b,	// (0x00091841) grid_call4_button_pane_ParamLimits

0x662b,	// (0x00091841) grid_call4_button_pane

0xb5be,	// (0x000967d4) call4_windows_conf_pane

0x664a,	// (0x00091860) popup_call4_audio_first_window_ParamLimits

0x664a,	// (0x00091860) popup_call4_audio_first_window

0x666a,	// (0x00091880) popup_call4_audio_second_window_ParamLimits

0x666a,	// (0x00091880) popup_call4_audio_second_window

0xb5f1,	// (0x00096807) popup_call4_audio_wait_window_ParamLimits

0xb5f1,	// (0x00096807) popup_call4_audio_wait_window

0x667c,	// (0x00091892) cell_call4_button_pane_ParamLimits

0x667c,	// (0x00091892) cell_call4_button_pane

0x66a1,	// (0x000918b7) bg_button_pane_cp09_ParamLimits

0x66a1,	// (0x000918b7) bg_button_pane_cp09

0x66ad,	// (0x000918c3) cell_call4_button_pane_g1_ParamLimits

0x66ad,	// (0x000918c3) cell_call4_button_pane_g1

0x66d3,	// (0x000918e9) cell_call4_button_pane_t1_ParamLimits

0x66d3,	// (0x000918e9) cell_call4_button_pane_t1

0xb637,	// (0x0009684d) popup_call4_audio_conf_window_ParamLimits

0xb637,	// (0x0009684d) popup_call4_audio_conf_window

0x59e6,	// (0x00090bfc) mup3_progress_pane_t1_ParamLimits

0x5a04,	// (0x00090c1a) mup3_progress_pane_t2_ParamLimits

0xaf22,	// (0x00096138) mup3_progress_pane_t3_ParamLimits

0xf746,	// (0x0009a95c) mup3_progress_pane_t_ParamLimits

0xaf3f,	// (0x00096155) mup_progress_pane_cp03_ParamLimits

0x5f90,	// (0x000911a6) mup3_control_keys_pane_g4_copy1

0xd6e3,	// (0x000988f9) mp4_rocker2_pane_ParamLimits

0xd6e3,	// (0x000988f9) mp4_rocker2_pane

0xb64b,	// (0x00096861) mp4_rocker2_pane_g1

0xb653,	// (0x00096869) mp4_rocker2_pane_g2

0xd74f,	// (0x00098965) mp4_rocker2_pane_g3

0xd757,	// (0x0009896d) mp4_rocker2_pane_g4

0xd75f,	// (0x00098975) mp4_rocker2_pane_g5

0x0004,

0xf876,	// (0x0009aa8c) mp4_rocker2_pane_g

0x9e01,	// (0x00095017) main_camera4_pane

0x9e01,	// (0x00095017) main_video4_pane

0x61c7,	// (0x000913dd) main_video_tele_dialer_pane_t1_ParamLimits

0x61c7,	// (0x000913dd) main_video_tele_dialer_pane_t1

0x61de,	// (0x000913f4) main_video_tele_dialer_pane_t2_ParamLimits

0x61de,	// (0x000913f4) main_video_tele_dialer_pane_t2

0x0001,

0xf830,	// (0x0009aa46) main_video_tele_dialer_pane_t_ParamLimits

0xf830,	// (0x0009aa46) main_video_tele_dialer_pane_t

0x6711,	// (0x00091927) cam4_autofocus_pane_ParamLimits

0x6711,	// (0x00091927) cam4_autofocus_pane

0x6725,	// (0x0009193b) cam4_image_uncrop_pane_ParamLimits

0x6725,	// (0x0009193b) cam4_image_uncrop_pane

0x673c,	// (0x00091952) cam4_indicators_pane_ParamLimits

0x673c,	// (0x00091952) cam4_indicators_pane

0x6761,	// (0x00091977) main_camera4_pane_g1_ParamLimits

0x6761,	// (0x00091977) main_camera4_pane_g1

0x6773,	// (0x00091989) main_camera4_pane_g2_ParamLimits

0x6773,	// (0x00091989) main_camera4_pane_g2

0x6786,	// (0x0009199c) main_camera4_pane_g3_ParamLimits

0x6786,	// (0x0009199c) main_camera4_pane_g3

0x6799,	// (0x000919af) main_camera4_pane_g4_ParamLimits

0x6799,	// (0x000919af) main_camera4_pane_g4

0x67ac,	// (0x000919c2) main_camera4_pane_g5_ParamLimits

0x67ac,	// (0x000919c2) main_camera4_pane_g5

0x0005,

0xf881,	// (0x0009aa97) main_camera4_pane_g_ParamLimits

0xf881,	// (0x0009aa97) main_camera4_pane_g

0x67d0,	// (0x000919e6) main_camera4_pane_t1_ParamLimits

0x67d0,	// (0x000919e6) main_camera4_pane_t1

0xd781,	// (0x00098997) bg_tb_trans_pane_cp06

0xd797,	// (0x000989ad) cam4_indicators_pane_g1

0xd7a8,	// (0x000989be) cam4_indicators_pane_g2

0x0002,

0xf89c,	// (0x0009aab2) cam4_indicators_pane_g

0xd7c0,	// (0x000989d6) cam4_indicators_pane_t1

0x6828,	// (0x00091a3e) main_video4_pane_g1_ParamLimits

0x6828,	// (0x00091a3e) main_video4_pane_g1

0x6837,	// (0x00091a4d) main_video4_pane_g2_ParamLimits

0x6837,	// (0x00091a4d) main_video4_pane_g2

0x6846,	// (0x00091a5c) main_video4_pane_g3_ParamLimits

0x6846,	// (0x00091a5c) main_video4_pane_g3

0x6855,	// (0x00091a6b) main_video4_pane_g4_ParamLimits

0x6855,	// (0x00091a6b) main_video4_pane_g4

0x0004,

0xf8a3,	// (0x0009aab9) main_video4_pane_g_ParamLimits

0xf8a3,	// (0x0009aab9) main_video4_pane_g

0x6873,	// (0x00091a89) vid4_indicators_pane_ParamLimits

0x6873,	// (0x00091a89) vid4_indicators_pane

0x689b,	// (0x00091ab1) video4_image_uncrop_cif_pane_ParamLimits

0x689b,	// (0x00091ab1) video4_image_uncrop_cif_pane

0x68b3,	// (0x00091ac9) video4_image_uncrop_nhd_pane_ParamLimits

0x68b3,	// (0x00091ac9) video4_image_uncrop_nhd_pane

0x6725,	// (0x0009193b) video4_image_uncrop_vga_pane_ParamLimits

0x6725,	// (0x0009193b) video4_image_uncrop_vga_pane

0x9df3,	// (0x00095009) bg_tb_trans_pane_cp07

0xd7ea,	// (0x00098a00) vid4_indicators_pane_g1

0xd7fe,	// (0x00098a14) vid4_indicators_pane_g2

0xd812,	// (0x00098a28) vid4_indicators_pane_g3

0x0004,

0xf8ae,	// (0x0009aac4) vid4_indicators_pane_g

0xd83f,	// (0x00098a55) vid4_indicators_pane_t1

0x68c7,	// (0x00091add) cam4_autofocus_pane_g1

0x68cf,	// (0x00091ae5) cam4_autofocus_pane_g2

0x68d7,	// (0x00091aed) cam4_autofocus_pane_g3

0x0002,

0xf8b9,	// (0x0009aacf) cam4_autofocus_pane_g

0x68df,	// (0x00091af5) cam4_autofocus_pane_g3_copy1

0x6209,	// (0x0009141f) video_down_pane_cp_t1

0x6217,	// (0x0009142d) video_down_pane_cp_t2

0x0001,

0xf835,	// (0x0009aa4b) video_down_pane_cp_t

0x9df3,	// (0x00095009) popup_vitu2_window_ParamLimits

0x9df3,	// (0x00095009) popup_vitu2_window

0x68e7,	// (0x00091afd) aid_size_cell2_itu2_ParamLimits

0x68e7,	// (0x00091afd) aid_size_cell2_itu2

0x690d,	// (0x00091b23) aid_size_cell_itu2_ParamLimits

0x690d,	// (0x00091b23) aid_size_cell_itu2

0x695e,	// (0x00091b74) bg_popup_window_pane_cp09_ParamLimits

0x695e,	// (0x00091b74) bg_popup_window_pane_cp09

0x696c,	// (0x00091b82) field_vitu2_entry_pane_ParamLimits

0x696c,	// (0x00091b82) field_vitu2_entry_pane

0x6983,	// (0x00091b99) grid_vitu2_function_pane_ParamLimits

0x6983,	// (0x00091b99) grid_vitu2_function_pane

0x69b8,	// (0x00091bce) grid_vitu2_itu_pane_ParamLimits

0x69b8,	// (0x00091bce) grid_vitu2_itu_pane

0x6a1f,	// (0x00091c35) cell_vitu2_itu_pane_ParamLimits

0x6a1f,	// (0x00091c35) cell_vitu2_itu_pane

0x6a47,	// (0x00091c5d) cell_vitu2_function_pane_ParamLimits

0x6a47,	// (0x00091c5d) cell_vitu2_function_pane

0xb66d,	// (0x00096883) bg_popup_call_pane_cp08_ParamLimits

0xb66d,	// (0x00096883) bg_popup_call_pane_cp08

0xb684,	// (0x0009689a) field_vitu2_entry_pane_g1

0xb690,	// (0x000968a6) field_vitu2_entry_pane_g2

0x0002,

0xf8c0,	// (0x0009aad6) field_vitu2_entry_pane_g

0x6a86,	// (0x00091c9c) field_vitu2_entry_pane_t1_ParamLimits

0x6a86,	// (0x00091c9c) field_vitu2_entry_pane_t1

0xb6aa,	// (0x000968c0) field_vitu2_entry_pane_t2_ParamLimits

0xb6aa,	// (0x000968c0) field_vitu2_entry_pane_t2

0x0001,

0xf8c7,	// (0x0009aadd) field_vitu2_entry_pane_t_ParamLimits

0xf8c7,	// (0x0009aadd) field_vitu2_entry_pane_t

0x6ab3,	// (0x00091cc9) bg_button_pane_cp010_ParamLimits

0x6ab3,	// (0x00091cc9) bg_button_pane_cp010

0xd856,	// (0x00098a6c) cell_vitu2_itu_pane_g1

0x6acf,	// (0x00091ce5) cell_vitu2_itu_pane_t1_ParamLimits

0x6acf,	// (0x00091ce5) cell_vitu2_itu_pane_t1

0x0cec,	// (0x0008bf02) cell_vitu2_itu_pane_t2_ParamLimits

0x0cec,	// (0x0008bf02) cell_vitu2_itu_pane_t2

0x0002,

0xf8d1,	// (0x0009aae7) cell_vitu2_itu_pane_t_ParamLimits

0xf8d1,	// (0x0009aae7) cell_vitu2_itu_pane_t

0x9df3,	// (0x00095009) bg_button_pane_cp011

0x6b2d,	// (0x00091d43) cell_vitu2_function_pane_g1

0x9e01,	// (0x00095017) main_myfav_hc_pane

0x6579,	// (0x0009178f) popup_image3_note_pane_ParamLimits

0x6579,	// (0x0009178f) popup_image3_note_pane

0x6593,	// (0x000917a9) popup_image3_tool_bar_pane_ParamLimits

0x6593,	// (0x000917a9) popup_image3_tool_bar_pane

0x0d7a,	// (0x0008bf90) cell_vitu2_itu_pane_t3_ParamLimits

0x0d7a,	// (0x0008bf90) cell_vitu2_itu_pane_t3

0xd964,	// (0x00098b7a) bg_popup_trans_pane

0xb6cf,	// (0x000968e5) grid_image3_tool_bar_pane

0xb6d9,	// (0x000968ef) bg_popup_trans_pane_g1

0xe4f6,	// (0x0009970c) bg_popup_trans_pane_g2

0xb6e1,	// (0x000968f7) bg_popup_trans_pane_g3

0xb6e9,	// (0x000968ff) bg_popup_trans_pane_g4

0xb6f1,	// (0x00096907) bg_popup_trans_pane_g5

0xb6f9,	// (0x0009690f) bg_popup_trans_pane_g6

0xb701,	// (0x00096917) bg_popup_trans_pane_g7

0xb709,	// (0x0009691f) bg_popup_trans_pane_g8

0xe4d6,	// (0x000996ec) bg_popup_trans_pane_g9

0x0008,

0xf8d8,	// (0x0009aaee) bg_popup_trans_pane_g

0xb711,	// (0x00096927) cell_image3_tool_bar_pane_ParamLimits

0xb711,	// (0x00096927) cell_image3_tool_bar_pane

0xac6c,	// (0x00095e82) cell_image3_tool_bar_pane_g1

0xd964,	// (0x00098b7a) bg_popup_trans_pane_cp1

0xb725,	// (0x0009693b) popup_image3_note_pane_t1

0xb733,	// (0x00096949) popup_image3_note_pane_t2

0xb741,	// (0x00096957) popup_image3_note_pane_t3

0x0002,

0xf8eb,	// (0x0009ab01) popup_image3_note_pane_t

0xb74f,	// (0x00096965) popup_image3_note_pane_t3_copy1

0x6b40,	// (0x00091d56) bg_myfav_hc_instruction_pane_ParamLimits

0x6b40,	// (0x00091d56) bg_myfav_hc_instruction_pane

0x6b52,	// (0x00091d68) cell_myfav_contact_pane_ParamLimits

0x6b52,	// (0x00091d68) cell_myfav_contact_pane

0x6b6c,	// (0x00091d82) cell_myfav_contact_pane_cp1_ParamLimits

0x6b6c,	// (0x00091d82) cell_myfav_contact_pane_cp1

0x6b82,	// (0x00091d98) cell_myfav_contact_pane_cp2_ParamLimits

0x6b82,	// (0x00091d98) cell_myfav_contact_pane_cp2

0x6b98,	// (0x00091dae) cell_myfav_contact_pane_cp3_ParamLimits

0x6b98,	// (0x00091dae) cell_myfav_contact_pane_cp3

0x6bad,	// (0x00091dc3) cell_myfav_contact_pane_cp4_ParamLimits

0x6bad,	// (0x00091dc3) cell_myfav_contact_pane_cp4

0x6bc1,	// (0x00091dd7) cell_myfav_contact_pane_cp5_ParamLimits

0x6bc1,	// (0x00091dd7) cell_myfav_contact_pane_cp5

0x6bd5,	// (0x00091deb) cell_myfav_contact_pane_cp6_ParamLimits

0x6bd5,	// (0x00091deb) cell_myfav_contact_pane_cp6

0x6be9,	// (0x00091dff) cell_myfav_contact_pane_cp7_ParamLimits

0x6be9,	// (0x00091dff) cell_myfav_contact_pane_cp7

0xb75d,	// (0x00096973) listscroll_gen_pane_cp05

0x6c01,	// (0x00091e17) main_myfav_hc_pane_g1_ParamLimits

0x6c01,	// (0x00091e17) main_myfav_hc_pane_g1

0x6c17,	// (0x00091e2d) main_myfav_hc_pane_g2_ParamLimits

0x6c17,	// (0x00091e2d) main_myfav_hc_pane_g2

0x0002,

0xf8f2,	// (0x0009ab08) main_myfav_hc_pane_g_ParamLimits

0xf8f2,	// (0x0009ab08) main_myfav_hc_pane_g

0x6c41,	// (0x00091e57) main_myfav_hc_pane_t1_ParamLimits

0x6c41,	// (0x00091e57) main_myfav_hc_pane_t1

0xb766,	// (0x0009697c) main_myfav_hc_pane_t2_ParamLimits

0xb766,	// (0x0009697c) main_myfav_hc_pane_t2

0xb778,	// (0x0009698e) main_myfav_hc_pane_t3_ParamLimits

0xb778,	// (0x0009698e) main_myfav_hc_pane_t3

0x6c56,	// (0x00091e6c) main_myfav_hc_pane_t4_ParamLimits

0x6c56,	// (0x00091e6c) main_myfav_hc_pane_t4

0x0004,

0xf8f9,	// (0x0009ab0f) main_myfav_hc_pane_t_ParamLimits

0xf8f9,	// (0x0009ab0f) main_myfav_hc_pane_t

0xac6c,	// (0x00095e82) bg_myfav_hc_instruction_pane_g1

0xb78a,	// (0x000969a0) cell_myfav_contact_pane_g1_ParamLimits

0xb78a,	// (0x000969a0) cell_myfav_contact_pane_g1

0xb78a,	// (0x000969a0) cell_myfav_contact_pane_g2_ParamLimits

0xb78a,	// (0x000969a0) cell_myfav_contact_pane_g2

0xb796,	// (0x000969ac) cell_myfav_contact_pane_g3_ParamLimits

0xb796,	// (0x000969ac) cell_myfav_contact_pane_g3

0xaf0c,	// (0x00096122) cell_myfav_contact_pane_g4_ParamLimits

0xaf0c,	// (0x00096122) cell_myfav_contact_pane_g4

0xb7a3,	// (0x000969b9) cell_myfav_contact_pane_g5_ParamLimits

0xb7a3,	// (0x000969b9) cell_myfav_contact_pane_g5

0x0004,

0xf904,	// (0x0009ab1a) cell_myfav_contact_pane_g_ParamLimits

0xf904,	// (0x0009ab1a) cell_myfav_contact_pane_g

0x6c2d,	// (0x00091e43) main_myfav_hc_pane_g3_ParamLimits

0x6c2d,	// (0x00091e43) main_myfav_hc_pane_g3

0x0f2b,	// (0x0008c141) popup_adpt_find_window

0x6c7a,	// (0x00091e90) afind_page_pane_ParamLimits

0x6c7a,	// (0x00091e90) afind_page_pane

0x6c8f,	// (0x00091ea5) aid_size_cell_afind_ParamLimits

0x6c8f,	// (0x00091ea5) aid_size_cell_afind

0x6cad,	// (0x00091ec3) bg_popup_sub_pane_cp09_ParamLimits

0x6cad,	// (0x00091ec3) bg_popup_sub_pane_cp09

0x6cba,	// (0x00091ed0) find_pane_cp01_ParamLimits

0x6cba,	// (0x00091ed0) find_pane_cp01

0xb7af,	// (0x000969c5) grid_afind_control_pane_ParamLimits

0xb7af,	// (0x000969c5) grid_afind_control_pane

0x6cc7,	// (0x00091edd) grid_afind_pane_ParamLimits

0x6cc7,	// (0x00091edd) grid_afind_pane

0x6ce5,	// (0x00091efb) cell_afind_pane_ParamLimits

0x6ce5,	// (0x00091efb) cell_afind_pane

0xac6c,	// (0x00095e82) afind_page_pane_g1

0x6d34,	// (0x00091f4a) afind_page_pane_g2

0x6d3d,	// (0x00091f53) afind_page_pane_g3

0x0002,

0xf90f,	// (0x0009ab25) afind_page_pane_g

0x6d46,	// (0x00091f5c) afind_page_pane_t1

0xb7c3,	// (0x000969d9) cell_afind_grid_control_pane_ParamLimits

0xb7c3,	// (0x000969d9) cell_afind_grid_control_pane

0xb5b2,	// (0x000967c8) bg_button_pane_cp69_ParamLimits

0xb5b2,	// (0x000967c8) bg_button_pane_cp69

0x6d66,	// (0x00091f7c) cell_afind_pane_g1_ParamLimits

0x6d66,	// (0x00091f7c) cell_afind_pane_g1

0x6d73,	// (0x00091f89) cell_afind_pane_t1_ParamLimits

0x6d73,	// (0x00091f89) cell_afind_pane_t1

0xe2e2,	// (0x000994f8) bg_button_pane_cp72

0xb7d2,	// (0x000969e8) cell_afind_grid_control_pane_g1

0x399f,	// (0x0008ebb5) aid_image_placing_area_ParamLimits

0x399f,	// (0x0008ebb5) aid_image_placing_area

0xb239,	// (0x0009644f) field_vitu_entry_pane_g1_ParamLimits

0xb239,	// (0x0009644f) field_vitu_entry_pane_g1

0xb245,	// (0x0009645b) field_vitu_entry_pane_g2_ParamLimits

0xb245,	// (0x0009645b) field_vitu_entry_pane_g2

0x0001,

0xf7c0,	// (0x0009a9d6) field_vitu_entry_pane_g_ParamLimits

0xf7c0,	// (0x0009a9d6) field_vitu_entry_pane_g

0x6043,	// (0x00091259) cell_vitu_itu_pane_g1_ParamLimits

0x6085,	// (0x0009129b) cell_vitu_itu_pane_t3_ParamLimits

0x6085,	// (0x0009129b) cell_vitu_itu_pane_t3

0xb55c,	// (0x00096772) mp4_progress_pane_t1_ParamLimits

0xb573,	// (0x00096789) mp4_progress_pane_t2_ParamLimits

0xf855,	// (0x0009aa6b) mp4_progress_pane_t_ParamLimits

0xb58a,	// (0x000967a0) mup_progress_pane_cp04_ParamLimits

0x6c68,	// (0x00091e7e) main_myfav_hc_pane_t5_ParamLimits

0x6c68,	// (0x00091e7e) main_myfav_hc_pane_t5

0x9da3,	// (0x00094fb9) aid_zoom_text_primary

0x0f2b,	// (0x0008c141) popup_adpt_find_window_ParamLimits

0x9df3,	// (0x00095009) main_cam_set_pane

0x674f,	// (0x00091965) cam4_zoom_pane_ParamLimits

0x674f,	// (0x00091965) cam4_zoom_pane

0x6d85,	// (0x00091f9b) main_cam_set_pane_g1_ParamLimits

0x6d85,	// (0x00091f9b) main_cam_set_pane_g1

0x6d93,	// (0x00091fa9) main_cam_set_pane_g2_ParamLimits

0x6d93,	// (0x00091fa9) main_cam_set_pane_g2

0x0001,

0xf916,	// (0x0009ab2c) main_cam_set_pane_g_ParamLimits

0xf916,	// (0x0009ab2c) main_cam_set_pane_g

0x6db4,	// (0x00091fca) main_cam_set_pane_t1_ParamLimits

0x6db4,	// (0x00091fca) main_cam_set_pane_t1

0x6dcf,	// (0x00091fe5) main_cset_listscroll_pane_ParamLimits

0x6dcf,	// (0x00091fe5) main_cset_listscroll_pane

0x6ded,	// (0x00092003) main_cset_slider_pane_ParamLimits

0x6ded,	// (0x00092003) main_cset_slider_pane

0xb7e3,	// (0x000969f9) main_cset_list_pane_ParamLimits

0xb7e3,	// (0x000969f9) main_cset_list_pane

0xb7f3,	// (0x00096a09) scroll_pane_cp028

0x6e11,	// (0x00092027) aid_area_touch_slider

0xb7fc,	// (0x00096a12) cset_slider_pane

0x6e2d,	// (0x00092043) main_cset_slider_pane_g1

0x6e42,	// (0x00092058) main_cset_slider_pane_g2

0x0011,

0xf91b,	// (0x0009ab31) main_cset_slider_pane_g

0xb86e,	// (0x00096a84) main_cset_slider_pane_t1

0x6ee6,	// (0x000920fc) main_cset_slider_pane_t2

0x6f00,	// (0x00092116) main_cset_slider_pane_t3

0x6f1a,	// (0x00092130) main_cset_slider_pane_t4

0x6f34,	// (0x0009214a) main_cset_slider_pane_t5

0x6f4e,	// (0x00092164) main_cset_slider_pane_t6

0x6f63,	// (0x00092179) main_cset_slider_pane_t7

0x000e,

0xf940,	// (0x0009ab56) main_cset_slider_pane_t

0x7067,	// (0x0009227d) cset_list_set_pane_ParamLimits

0x7067,	// (0x0009227d) cset_list_set_pane

0x7078,	// (0x0009228e) aid_position_infowindow_above

0x7080,	// (0x00092296) aid_position_infowindow_below

0x7088,	// (0x0009229e) cset_list_set_pane_g1_ParamLimits

0x7088,	// (0x0009229e) cset_list_set_pane_g1

0x7094,	// (0x000922aa) cset_list_set_pane_g3_ParamLimits

0x7094,	// (0x000922aa) cset_list_set_pane_g3

0x0001,

0xf95f,	// (0x0009ab75) cset_list_set_pane_g_ParamLimits

0xf95f,	// (0x0009ab75) cset_list_set_pane_g

0x70a3,	// (0x000922b9) cset_list_set_pane_t1_ParamLimits

0x70a3,	// (0x000922b9) cset_list_set_pane_t1

0x4634,	// (0x0008f84a) list_highlight_pane_cp021_ParamLimits

0x4634,	// (0x0008f84a) list_highlight_pane_cp021

0xedcd,	// (0x00099fe3) cset_slider_pane_g1

0xeddf,	// (0x00099ff5) cset_slider_pane_g2

0xedd6,	// (0x00099fec) cset_slider_pane_g3

0x0002,

0x0744,	// (0x0008b95a) cset_slider_pane_g

0xd868,	// (0x00098a7e) aid_area_touch_cam4_zoom

0xd870,	// (0x00098a86) cam4_zoom_cont_pane

0xd878,	// (0x00098a8e) cam4_zoom_pane_g1

0xd880,	// (0x00098a96) cam4_zoom_pane_g2

0x70b8,	// (0x000922ce) cam4_zoom_pane_g3

0x0002,

0xf964,	// (0x0009ab7a) cam4_zoom_pane_g

0xd888,	// (0x00098a9e) cam4_zoom_cont_pane_g1

0xd891,	// (0x00098aa7) cam4_zoom_cont_pane_g2

0xd89a,	// (0x00098ab0) cam4_zoom_cont_pane_g3

0x0002,

0xf96b,	// (0x0009ab81) cam4_zoom_cont_pane_g

0x65fe,	// (0x00091814) call4_image_pane_ParamLimits

0x65fe,	// (0x00091814) call4_image_pane

0xb5be,	// (0x000967d4) call4_windows_conf_pane_ParamLimits

0xb5d1,	// (0x000967e7) popup_call4_audio_in_window_ParamLimits

0xb5d1,	// (0x000967e7) popup_call4_audio_in_window

0xd964,	// (0x00098b7a) bg_popup_call2_act_pane_cp02

0xb62f,	// (0x00096845) call4_list_conf_pane

0xac6c,	// (0x00095e82) call4_image_pane_g1

0xac6c,	// (0x00095e82) call4_image_pane_g2

0x0001,

0xf686,	// (0x0009a89c) call4_image_pane_g

0xb90e,	// (0x00096b24) list_single_graphic_popup_conf4_pane_ParamLimits

0xb90e,	// (0x00096b24) list_single_graphic_popup_conf4_pane

0xd964,	// (0x00098b7a) list_highlight_pane_cp022

0xb921,	// (0x00096b37) list_single_graphic_popup_conf4_pane_g1

0xea06,	// (0x00099c1c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf972,	// (0x0009ab88) list_single_graphic_popup_conf4_pane_g

0xb929,	// (0x00096b3f) list_single_graphic_popup_conf4_pane_t1

0x1fce,	// (0x0008d1e4) popup_vtel_slider_window_ParamLimits

0x1fce,	// (0x0008d1e4) popup_vtel_slider_window

0xb5a0,	// (0x000967b6) dialer2_ne_pane_t2_ParamLimits

0xb5a0,	// (0x000967b6) dialer2_ne_pane_t2

0x0001,

0xf85a,	// (0x0009aa70) dialer2_ne_pane_t_ParamLimits

0xf85a,	// (0x0009aa70) dialer2_ne_pane_t

0xaa59,	// (0x00095c6f) bg_popup_sub_pane_cp010_ParamLimits

0xaa59,	// (0x00095c6f) bg_popup_sub_pane_cp010

0x70c0,	// (0x000922d6) popup_vtel_slider_window_g1_ParamLimits

0x70c0,	// (0x000922d6) popup_vtel_slider_window_g1

0x70d3,	// (0x000922e9) popup_vtel_slider_window_g2_ParamLimits

0x70d3,	// (0x000922e9) popup_vtel_slider_window_g2

0x0003,

0xf977,	// (0x0009ab8d) popup_vtel_slider_window_g_ParamLimits

0xf977,	// (0x0009ab8d) popup_vtel_slider_window_g

0x7127,	// (0x0009233d) vtel_slider_pane_ParamLimits

0x7127,	// (0x0009233d) vtel_slider_pane

0x7149,	// (0x0009235f) vtel_slider_pane_g1_ParamLimits

0x7149,	// (0x0009235f) vtel_slider_pane_g1

0x715d,	// (0x00092373) vtel_slider_pane_g2_ParamLimits

0x715d,	// (0x00092373) vtel_slider_pane_g2

0x7175,	// (0x0009238b) vtel_slider_pane_g3_ParamLimits

0x7175,	// (0x0009238b) vtel_slider_pane_g3

0x7149,	// (0x0009235f) vtel_slider_pane_g4_ParamLimits

0x7149,	// (0x0009235f) vtel_slider_pane_g4

0x718b,	// (0x000923a1) vtel_slider_pane_g5_ParamLimits

0x718b,	// (0x000923a1) vtel_slider_pane_g5

0x0004,

0xf980,	// (0x0009ab96) vtel_slider_pane_g_ParamLimits

0xf980,	// (0x0009ab96) vtel_slider_pane_g

0x9df3,	// (0x00095009) main_gallery2_pane

0x6939,	// (0x00091b4f) aid_size_row_itut2_dropdow_list_ParamLimits

0x6939,	// (0x00091b4f) aid_size_row_itut2_dropdow_list

0x699c,	// (0x00091bb2) grid_vitu2_function_top_pane_ParamLimits

0x699c,	// (0x00091bb2) grid_vitu2_function_top_pane

0x69e1,	// (0x00091bf7) popup_vitu2_dropdown_list_window_ParamLimits

0x69e1,	// (0x00091bf7) popup_vitu2_dropdown_list_window

0x69fd,	// (0x00091c13) popup_vitu2_match_list_window

0x71af,	// (0x000923c5) cell_vitu2_function_top_pane_ParamLimits

0x71af,	// (0x000923c5) cell_vitu2_function_top_pane

0x71c7,	// (0x000923dd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x71c7,	// (0x000923dd) cell_vitu2_function_top_pane_cp01

0x71e3,	// (0x000923f9) cell_vitu2_function_top_wide_pane_ParamLimits

0x71e3,	// (0x000923f9) cell_vitu2_function_top_wide_pane

0x9df3,	// (0x00095009) bg_button_pane_cp012

0x71ff,	// (0x00092415) cell_vitu2_function_top_pane_g1

0xd8a3,	// (0x00098ab9) bg_button_pane_cp013_ParamLimits

0xd8a3,	// (0x00098ab9) bg_button_pane_cp013

0x7213,	// (0x00092429) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7213,	// (0x00092429) cell_vitu2_function_top_wide_pane_g1

0x9df3,	// (0x00095009) bg_popup_sub_pane_cp20

0x722b,	// (0x00092441) list_vitu2_match_list_pane

0xb6d9,	// (0x000968ef) bg_popup_sub_pane_cp20_g1

0xb6e1,	// (0x000968f7) bg_popup_sub_pane_cp20_g2

0xe4f6,	// (0x0009970c) bg_popup_sub_pane_cp20_g3

0xb6e9,	// (0x000968ff) bg_popup_sub_pane_cp20_g4

0xe4d6,	// (0x000996ec) bg_popup_sub_pane_cp20_g5

0xb93f,	// (0x00096b55) bg_popup_sub_pane_cp20_g6

0xb6f9,	// (0x0009690f) bg_popup_sub_pane_cp20_g7

0xb701,	// (0x00096917) bg_popup_sub_pane_cp20_g8

0xb709,	// (0x0009691f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf98b,	// (0x0009aba1) bg_popup_sub_pane_cp20_g

0xd8bf,	// (0x00098ad5) list_vitu2_match_list_item_pane_ParamLimits

0xd8bf,	// (0x00098ad5) list_vitu2_match_list_item_pane

0xd8d1,	// (0x00098ae7) list_vitu2_match_list_item_pane_t1

0x9e01,	// (0x00095017) bg_popup_sub_pane_cp21

0xd8df,	// (0x00098af5) grid_vitu2_dropdown_list_pane

0x7291,	// (0x000924a7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7291,	// (0x000924a7) cell_vitu2_dropdown_list_char_pane

0x72b2,	// (0x000924c8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x72b2,	// (0x000924c8) cell_vitu2_dropdown_list_ctrl_pane

0xb947,	// (0x00096b5d) cell_vitu2_dropdown_list_char_pane_g1

0xb950,	// (0x00096b66) cell_vitu2_dropdown_list_char_pane_g2

0xb959,	// (0x00096b6f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9a8,	// (0x0009abbe) cell_vitu2_dropdown_list_char_pane_g

0x72de,	// (0x000924f4) cell_vitu2_dropdown_list_char_pane_t1

0x72ec,	// (0x00092502) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x72ec,	// (0x00092502) cell_vitu2_dropdown_list_ctrl_pane_g1

0x72f9,	// (0x0009250f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x72f9,	// (0x0009250f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7306,	// (0x0009251c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7306,	// (0x0009251c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7313,	// (0x00092529) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7313,	// (0x00092529) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd781,	// (0x00098997) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd781,	// (0x00098997) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9af,	// (0x0009abc5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9af,	// (0x0009abc5) cell_vitu2_dropdown_list_ctrl_pane_g

0x732f,	// (0x00092545) aid_size_cell_gallery2_ParamLimits

0x732f,	// (0x00092545) aid_size_cell_gallery2

0x734d,	// (0x00092563) grid_gallery2_pane_ParamLimits

0x734d,	// (0x00092563) grid_gallery2_pane

0x735f,	// (0x00092575) scroll_pane_cp029_ParamLimits

0x735f,	// (0x00092575) scroll_pane_cp029

0x736b,	// (0x00092581) cell_gallery2_pane_ParamLimits

0x736b,	// (0x00092581) cell_gallery2_pane

0xb962,	// (0x00096b78) cell_gallery2_pane_g2

0x73c1,	// (0x000925d7) cell_gallery2_pane_g3

0xb96a,	// (0x00096b80) cell_gallery2_pane_g4

0xb972,	// (0x00096b88) cell_gallery2_pane_g5

0xe290,	// (0x000994a6) grid_highlight_pane_cp10

0x69fd,	// (0x00091c13) popup_vitu2_match_list_window_ParamLimits

0x6a0e,	// (0x00091c24) popup_vitu2_query_window_ParamLimits

0x6a0e,	// (0x00091c24) popup_vitu2_query_window

0x9e01,	// (0x00095017) bg_vitu2_candi_button_pane

0xb947,	// (0x00096b5d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb950,	// (0x00096b66) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb959,	// (0x00096b6f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x73c9,	// (0x000925df) bg_button_pane_cp015

0x73d9,	// (0x000925ef) bg_button_pane_cp016

0x73eb,	// (0x00092601) bg_button_pane_cp017

0xa76a,	// (0x00095980) bg_popup_sub_pane_cp22

0xb97a,	// (0x00096b90) popup_vitu2_query_window_g1

0x742c,	// (0x00092642) popup_vitu2_query_window_g2

0x0002,

0xf9ba,	// (0x0009abd0) popup_vitu2_query_window_g

0x7447,	// (0x0009265d) popup_vitu2_query_window_t1_ParamLimits

0x7447,	// (0x0009265d) popup_vitu2_query_window_t1

0x747a,	// (0x00092690) popup_vitu2_query_window_t2_ParamLimits

0x747a,	// (0x00092690) popup_vitu2_query_window_t2

0x748c,	// (0x000926a2) popup_vitu2_query_window_t3_ParamLimits

0x748c,	// (0x000926a2) popup_vitu2_query_window_t3

0x74b4,	// (0x000926ca) popup_vitu2_query_window_t4_ParamLimits

0x74b4,	// (0x000926ca) popup_vitu2_query_window_t4

0x74d1,	// (0x000926e7) popup_vitu2_query_window_t5_ParamLimits

0x74d1,	// (0x000926e7) popup_vitu2_query_window_t5

0x0006,

0xf9c1,	// (0x0009abd7) popup_vitu2_query_window_t_ParamLimits

0xf9c1,	// (0x0009abd7) popup_vitu2_query_window_t

0xb7db,	// (0x000969f1) main_cset_text_pane

0x6e11,	// (0x00092027) aid_area_touch_slider_ParamLimits

0xb7fc,	// (0x00096a12) cset_slider_pane_ParamLimits

0x6e2d,	// (0x00092043) main_cset_slider_pane_g1_ParamLimits

0x6e42,	// (0x00092058) main_cset_slider_pane_g2_ParamLimits

0xb826,	// (0x00096a3c) main_cset_slider_pane_g3_ParamLimits

0xb826,	// (0x00096a3c) main_cset_slider_pane_g3

0x6e57,	// (0x0009206d) main_cset_slider_pane_g4_ParamLimits

0x6e57,	// (0x0009206d) main_cset_slider_pane_g4

0x6e66,	// (0x0009207c) main_cset_slider_pane_g5_ParamLimits

0x6e66,	// (0x0009207c) main_cset_slider_pane_g5

0x6e72,	// (0x00092088) main_cset_slider_pane_g6_ParamLimits

0x6e72,	// (0x00092088) main_cset_slider_pane_g6

0xf91b,	// (0x0009ab31) main_cset_slider_pane_g_ParamLimits

0xb86e,	// (0x00096a84) main_cset_slider_pane_t1_ParamLimits

0x6ee6,	// (0x000920fc) main_cset_slider_pane_t2_ParamLimits

0x6f00,	// (0x00092116) main_cset_slider_pane_t3_ParamLimits

0x6f1a,	// (0x00092130) main_cset_slider_pane_t4_ParamLimits

0x6f34,	// (0x0009214a) main_cset_slider_pane_t5_ParamLimits

0x6f4e,	// (0x00092164) main_cset_slider_pane_t6_ParamLimits

0x6f63,	// (0x00092179) main_cset_slider_pane_t7_ParamLimits

0x6f8d,	// (0x000921a3) main_cset_slider_pane_t8_ParamLimits

0x6f8d,	// (0x000921a3) main_cset_slider_pane_t8

0x6fb5,	// (0x000921cb) main_cset_slider_pane_t9_ParamLimits

0x6fb5,	// (0x000921cb) main_cset_slider_pane_t9

0x6fdd,	// (0x000921f3) main_cset_slider_pane_t10_ParamLimits

0x6fdd,	// (0x000921f3) main_cset_slider_pane_t10

0x7005,	// (0x0009221b) main_cset_slider_pane_t11_ParamLimits

0x7005,	// (0x0009221b) main_cset_slider_pane_t11

0x702d,	// (0x00092243) main_cset_slider_pane_t12_ParamLimits

0x702d,	// (0x00092243) main_cset_slider_pane_t12

0x704a,	// (0x00092260) main_cset_slider_pane_t13_ParamLimits

0x704a,	// (0x00092260) main_cset_slider_pane_t13

0xf940,	// (0x0009ab56) main_cset_slider_pane_t_ParamLimits

0xd964,	// (0x00098b7a) bg_popup_sub_pane_cp011

0xb986,	// (0x00096b9c) main_cset_text_pane_g1

0xb98e,	// (0x00096ba4) main_cset_text_pane_t1

0xb99c,	// (0x00096bb2) main_cset_text_pane_t2

0xb9aa,	// (0x00096bc0) main_cset_text_pane_t3

0xb9b8,	// (0x00096bce) main_cset_text_pane_t4

0xb9c6,	// (0x00096bdc) main_cset_text_pane_t5

0xb9d4,	// (0x00096bea) main_cset_text_pane_t6

0xb9e2,	// (0x00096bf8) main_cset_text_pane_t7

0x0006,

0xf9d0,	// (0x0009abe6) main_cset_text_pane_t

0x9e01,	// (0x00095017) main_cam4_burst_pane

0x9e01,	// (0x00095017) main_cam5_pane

0x6d54,	// (0x00091f6a) bg_button_pane_cp019

0x6d5d,	// (0x00091f73) bg_button_pane_cp020

0xb832,	// (0x00096a48) main_cset_slider_pane_g7_ParamLimits

0xb832,	// (0x00096a48) main_cset_slider_pane_g7

0xb83e,	// (0x00096a54) main_cset_slider_pane_g8_ParamLimits

0xb83e,	// (0x00096a54) main_cset_slider_pane_g8

0x6e86,	// (0x0009209c) main_cset_slider_pane_g9_ParamLimits

0x6e86,	// (0x0009209c) main_cset_slider_pane_g9

0x6e92,	// (0x000920a8) main_cset_slider_pane_g10_ParamLimits

0x6e92,	// (0x000920a8) main_cset_slider_pane_g10

0xb84a,	// (0x00096a60) main_cset_slider_pane_g11_ParamLimits

0xb84a,	// (0x00096a60) main_cset_slider_pane_g11

0xb856,	// (0x00096a6c) main_cset_slider_pane_g12_ParamLimits

0xb856,	// (0x00096a6c) main_cset_slider_pane_g12

0x6e9e,	// (0x000920b4) main_cset_slider_pane_g13_ParamLimits

0x6e9e,	// (0x000920b4) main_cset_slider_pane_g13

0x6eaa,	// (0x000920c0) main_cset_slider_pane_g14_ParamLimits

0x6eaa,	// (0x000920c0) main_cset_slider_pane_g14

0x6eb6,	// (0x000920cc) main_cset_slider_pane_g15_ParamLimits

0x6eb6,	// (0x000920cc) main_cset_slider_pane_g15

0xb89c,	// (0x00096ab2) main_cset_slider_pane_t14_ParamLimits

0xb89c,	// (0x00096ab2) main_cset_slider_pane_t14

0xb8d5,	// (0x00096aeb) main_cset_slider_pane_t15_ParamLimits

0xb8d5,	// (0x00096aeb) main_cset_slider_pane_t15

0x7544,	// (0x0009275a) aid_cam4_burst_size_cell_ParamLimits

0x7544,	// (0x0009275a) aid_cam4_burst_size_cell

0x7564,	// (0x0009277a) grid_cam4_burst_pane_ParamLimits

0x7564,	// (0x0009277a) grid_cam4_burst_pane

0x758e,	// (0x000927a4) linegrid_cam4_burst_pane_ParamLimits

0x758e,	// (0x000927a4) linegrid_cam4_burst_pane

0xb9f0,	// (0x00096c06) scroll_pane_cp30_ParamLimits

0xb9f0,	// (0x00096c06) scroll_pane_cp30

0x75b0,	// (0x000927c6) cell_cam4_burst_pane_ParamLimits

0x75b0,	// (0x000927c6) cell_cam4_burst_pane

0xb9fc,	// (0x00096c12) linegrid_cam4_burst_pane_g1_ParamLimits

0xb9fc,	// (0x00096c12) linegrid_cam4_burst_pane_g1

0x75f7,	// (0x0009280d) linegrid_cam4_burst_pane_g2_ParamLimits

0x75f7,	// (0x0009280d) linegrid_cam4_burst_pane_g2

0xba09,	// (0x00096c1f) linegrid_cam4_burst_pane_g3_ParamLimits

0xba09,	// (0x00096c1f) linegrid_cam4_burst_pane_g3

0x0002,

0xf9df,	// (0x0009abf5) linegrid_cam4_burst_pane_g_ParamLimits

0xf9df,	// (0x0009abf5) linegrid_cam4_burst_pane_g

0x7608,	// (0x0009281e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7608,	// (0x0009281e) linegrid_cam4_burst_pane_g3_copy1

0xba16,	// (0x00096c2c) linegrid_cam4_burst_pane_g4_ParamLimits

0xba16,	// (0x00096c2c) linegrid_cam4_burst_pane_g4

0x7622,	// (0x00092838) linegrid_cam4_burst_pane_g5_ParamLimits

0x7622,	// (0x00092838) linegrid_cam4_burst_pane_g5

0x7633,	// (0x00092849) linegrid_cam4_burst_pane_g6_ParamLimits

0x7633,	// (0x00092849) linegrid_cam4_burst_pane_g6

0xba23,	// (0x00096c39) linegrid_cam4_burst_pane_g7_ParamLimits

0xba23,	// (0x00096c39) linegrid_cam4_burst_pane_g7

0x7644,	// (0x0009285a) cell_cam4_burst_pane_g1

0xba3c,	// (0x00096c52) main_cam5_pane_t1_ParamLimits

0xba3c,	// (0x00096c52) main_cam5_pane_t1

0xba4e,	// (0x00096c64) main_cam5_pane_t2_ParamLimits

0xba4e,	// (0x00096c64) main_cam5_pane_t2

0xba60,	// (0x00096c76) main_cam5_pane_t3_ParamLimits

0xba60,	// (0x00096c76) main_cam5_pane_t3

0xba72,	// (0x00096c88) main_cam5_pane_t4_ParamLimits

0xba72,	// (0x00096c88) main_cam5_pane_t4

0xba88,	// (0x00096c9e) main_cam5_pane_t5_ParamLimits

0xba88,	// (0x00096c9e) main_cam5_pane_t5

0xba9a,	// (0x00096cb0) main_cam5_pane_t6_ParamLimits

0xba9a,	// (0x00096cb0) main_cam5_pane_t6

0xbaac,	// (0x00096cc2) main_cam5_pane_t7_ParamLimits

0xbaac,	// (0x00096cc2) main_cam5_pane_t7

0xbabe,	// (0x00096cd4) main_cam5_pane_t8_ParamLimits

0xbabe,	// (0x00096cd4) main_cam5_pane_t8

0xbada,	// (0x00096cf0) main_cam5_pane_t9_ParamLimits

0xbada,	// (0x00096cf0) main_cam5_pane_t9

0xbaec,	// (0x00096d02) main_cam5_pane_t10_ParamLimits

0xbaec,	// (0x00096d02) main_cam5_pane_t10

0xbafe,	// (0x00096d14) main_cam5_pane_t11_ParamLimits

0xbafe,	// (0x00096d14) main_cam5_pane_t11

0xbb10,	// (0x00096d26) main_cam5_pane_t12_ParamLimits

0xbb10,	// (0x00096d26) main_cam5_pane_t12

0xbb25,	// (0x00096d3b) main_cam5_pane_t13_ParamLimits

0xbb25,	// (0x00096d3b) main_cam5_pane_t13

0x000c,

0xf9eb,	// (0x0009ac01) main_cam5_pane_t_ParamLimits

0xf9eb,	// (0x0009ac01) main_cam5_pane_t

0x0fa9,	// (0x0008c1bf) popup_scut_keymap_window_ParamLimits

0x0fa9,	// (0x0008c1bf) popup_scut_keymap_window

0x7657,	// (0x0009286d) aid_size_cell_brow_shortcut

0xe290,	// (0x000994a6) bg_popup_window_pane_cp010

0x7663,	// (0x00092879) grid_scut_pane

0x766d,	// (0x00092883) cell_scut_pane_ParamLimits

0x766d,	// (0x00092883) cell_scut_pane

0x7682,	// (0x00092898) cell_scut_pane_g1

0xbb42,	// (0x00096d58) cell_scut_pane_t1

0xbb51,	// (0x00096d67) cell_scut_pane_t2

0x768b,	// (0x000928a1) cell_scut_pane_t3

0x0002,

0xfa06,	// (0x0009ac1c) cell_scut_pane_t

0x55fb,	// (0x00090811) main_mup3_pane_g8_ParamLimits

0x55fb,	// (0x00090811) main_mup3_pane_g8

0x694c,	// (0x00091b62) area_vitu2_query_pane_ParamLimits

0x694c,	// (0x00091b62) area_vitu2_query_pane

0x73fd,	// (0x00092613) input_focus_pane_cp08

0xbb60,	// (0x00096d76) area_vitu2_query_pane_g1

0x7699,	// (0x000928af) area_vitu2_query_pane_g2

0x0001,

0xfa0d,	// (0x0009ac23) area_vitu2_query_pane_g

0x76a8,	// (0x000928be) area_vitu2_query_pane_t1_ParamLimits

0x76a8,	// (0x000928be) area_vitu2_query_pane_t1

0x76ba,	// (0x000928d0) area_vitu2_query_pane_t2_ParamLimits

0x76ba,	// (0x000928d0) area_vitu2_query_pane_t2

0x76cc,	// (0x000928e2) area_vitu2_query_pane_t3_ParamLimits

0x76cc,	// (0x000928e2) area_vitu2_query_pane_t3

0xbb6c,	// (0x00096d82) area_vitu2_query_pane_t4_ParamLimits

0xbb6c,	// (0x00096d82) area_vitu2_query_pane_t4

0xbb94,	// (0x00096daa) area_vitu2_query_pane_t5_ParamLimits

0xbb94,	// (0x00096daa) area_vitu2_query_pane_t5

0xbbbc,	// (0x00096dd2) area_vitu2_query_pane_t6_ParamLimits

0xbbbc,	// (0x00096dd2) area_vitu2_query_pane_t6

0x0006,

0xfa12,	// (0x0009ac28) area_vitu2_query_pane_t_ParamLimits

0xfa12,	// (0x0009ac28) area_vitu2_query_pane_t

0x76f4,	// (0x0009290a) bg_button_pane_cp018

0x7701,	// (0x00092917) bg_button_pane_cp021

0x770d,	// (0x00092923) bg_button_pane_cp022

0x771c,	// (0x00092932) input_focus_pane_cp09

0xeb17,	// (0x00099d2d) aid_size_touch_mv_arrow_left

0xeb40,	// (0x00099d56) aid_size_touch_mv_arrow_right

0x6ece,	// (0x000920e4) main_cset_slider_pane_g16_ParamLimits

0x6ece,	// (0x000920e4) main_cset_slider_pane_g16

0x6eda,	// (0x000920f0) main_cset_slider_pane_g17_ParamLimits

0x6eda,	// (0x000920f0) main_cset_slider_pane_g17

0x7644,	// (0x0009285a) cell_cam4_burst_pane_g1_ParamLimits

0xd964,	// (0x00098b7a) compa_mode_pane

0x70e3,	// (0x000922f9) popup_vtel_slider_window_g3_ParamLimits

0x70e3,	// (0x000922f9) popup_vtel_slider_window_g3

0x70fa,	// (0x00092310) popup_vtel_slider_window_g4_ParamLimits

0x70fa,	// (0x00092310) popup_vtel_slider_window_g4

0x7111,	// (0x00092327) popup_vtel_slider_window_t1_ParamLimits

0x7111,	// (0x00092327) popup_vtel_slider_window_t1

0x9e01,	// (0x00095017) main_cl_pane

0xa788,	// (0x0009599e) popup_imed_adjust2_window_ParamLimits

0xa76a,	// (0x00095980) bg_tb_trans_pane_cp05_ParamLimits

0xb16e,	// (0x00096384) popup_imed_adjust2_window_g1_ParamLimits

0xb17d,	// (0x00096393) popup_imed_adjust2_window_g2_ParamLimits

0xb17d,	// (0x00096393) popup_imed_adjust2_window_g2

0xb189,	// (0x0009639f) popup_imed_adjust2_window_g3_ParamLimits

0xb189,	// (0x0009639f) popup_imed_adjust2_window_g3

0x0002,

0xf789,	// (0x0009a99f) popup_imed_adjust2_window_g_ParamLimits

0xf789,	// (0x0009a99f) popup_imed_adjust2_window_g

0xb195,	// (0x000963ab) popup_imed_adjust2_window_t1_ParamLimits

0xb1ad,	// (0x000963c3) slider_imed_adjust_pane_ParamLimits

0xb1c1,	// (0x000963d7) slider_imed_adjust_pane_g1_ParamLimits

0xb1d1,	// (0x000963e7) slider_imed_adjust_pane_g2_ParamLimits

0xb1e1,	// (0x000963f7) slider_imed_adjust_pane_g3_ParamLimits

0xb1f2,	// (0x00096408) slider_imed_adjust_pane_g4_ParamLimits

0xf790,	// (0x0009a9a6) slider_imed_adjust_pane_g_ParamLimits

0x66fd,	// (0x00091913) aid_touch_area_cam4_ParamLimits

0x66fd,	// (0x00091913) aid_touch_area_cam4

0xd767,	// (0x0009897d) battery_pane_cp01

0x67bd,	// (0x000919d3) main_camera4_pane_g6_ParamLimits

0x67bd,	// (0x000919d3) main_camera4_pane_g6

0x67e5,	// (0x000919fb) main_camera4_pane_t2_ParamLimits

0x67e5,	// (0x000919fb) main_camera4_pane_t2

0x0001,

0xf88e,	// (0x0009aaa4) main_camera4_pane_t_ParamLimits

0xf88e,	// (0x0009aaa4) main_camera4_pane_t

0x6814,	// (0x00091a2a) aid_touch_area_vid4_ParamLimits

0x6814,	// (0x00091a2a) aid_touch_area_vid4

0x6864,	// (0x00091a7a) main_video4_pane_g5_ParamLimits

0x6864,	// (0x00091a7a) main_video4_pane_g5

0x6885,	// (0x00091a9b) vid4_progress_pane_ParamLimits

0x6885,	// (0x00091a9b) vid4_progress_pane

0xb862,	// (0x00096a78) main_cset_slider_pane_g18_ParamLimits

0xb862,	// (0x00096a78) main_cset_slider_pane_g18

0xba30,	// (0x00096c46) cell_cam4_burst_pane_g2_ParamLimits

0xba30,	// (0x00096c46) cell_cam4_burst_pane_g2

0x0001,

0xf9e6,	// (0x0009abfc) cell_cam4_burst_pane_g_ParamLimits

0xf9e6,	// (0x0009abfc) cell_cam4_burst_pane_g

0xe0df,	// (0x000992f5) bg_cl_pane_ParamLimits

0xe0df,	// (0x000992f5) bg_cl_pane

0x772b,	// (0x00092941) cl_header_pane_ParamLimits

0x772b,	// (0x00092941) cl_header_pane

0x773f,	// (0x00092955) cl_listscroll_pane_ParamLimits

0x773f,	// (0x00092955) cl_listscroll_pane

0xbc08,	// (0x00096e1e) bg_cl_pane_g1

0xbc10,	// (0x00096e26) bg_cl_pane_g2

0xbc18,	// (0x00096e2e) bg_cl_pane_g3

0xbc20,	// (0x00096e36) bg_cl_pane_g4

0xbc28,	// (0x00096e3e) bg_cl_pane_g5

0xbc30,	// (0x00096e46) bg_cl_pane_g6

0xbc38,	// (0x00096e4e) bg_cl_pane_g7

0xbc40,	// (0x00096e56) bg_cl_pane_g8

0xbc48,	// (0x00096e5e) bg_cl_pane_g9

0x0008,

0xfa21,	// (0x0009ac37) bg_cl_pane_g

0x774f,	// (0x00092965) aid_height_cl_leading_ParamLimits

0x774f,	// (0x00092965) aid_height_cl_leading

0x775b,	// (0x00092971) aid_height_cl_text_ParamLimits

0x775b,	// (0x00092971) aid_height_cl_text

0x4634,	// (0x0008f84a) bg_cl_header_pane_ParamLimits

0x4634,	// (0x0008f84a) bg_cl_header_pane

0x777a,	// (0x00092990) cl_header_pane_g1_ParamLimits

0x777a,	// (0x00092990) cl_header_pane_g1

0x7790,	// (0x000929a6) cl_header_pane_t1_ParamLimits

0x7790,	// (0x000929a6) cl_header_pane_t1

0xbc50,	// (0x00096e66) cl_list_pane

0xb7f3,	// (0x00096a09) hc_scroll_pane_cp01

0xe4d6,	// (0x000996ec) bg_cl_header_pane_g1

0xb6d9,	// (0x000968ef) bg_cl_header_pane_g2

0xe4f6,	// (0x0009970c) bg_cl_header_pane_g3

0xb6e9,	// (0x000968ff) bg_cl_header_pane_g4

0xb6e1,	// (0x000968f7) bg_cl_header_pane_g5

0xb93f,	// (0x00096b55) bg_cl_header_pane_g6

0xb701,	// (0x00096917) bg_cl_header_pane_g7

0xb709,	// (0x0009691f) bg_cl_header_pane_g8

0xb6f9,	// (0x0009690f) bg_cl_header_pane_g9

0x0008,

0xfa34,	// (0x0009ac4a) bg_cl_header_pane_g

0x77a9,	// (0x000929bf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x77a9,	// (0x000929bf) hc_cl_list_double_graphic_heading_pane

0x77b9,	// (0x000929cf) hc_cl_list_single_graphic_pane_ParamLimits

0x77b9,	// (0x000929cf) hc_cl_list_single_graphic_pane

0x77cc,	// (0x000929e2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x77cc,	// (0x000929e2) hc_cl_list_single_graphic_pane_g1

0x77d8,	// (0x000929ee) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x77d8,	// (0x000929ee) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa47,	// (0x0009ac5d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa47,	// (0x0009ac5d) hc_cl_list_single_graphic_pane_g

0x77ec,	// (0x00092a02) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x77ec,	// (0x00092a02) hc_cl_list_single_graphic_pane_t1

0x77cc,	// (0x000929e2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x77cc,	// (0x000929e2) hc_cl_list_double_graphic_heading_pane_g1

0x7801,	// (0x00092a17) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7801,	// (0x00092a17) hc_cl_list_double_graphic_heading_pane_g2

0x7815,	// (0x00092a2b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7815,	// (0x00092a2b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa4c,	// (0x0009ac62) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa4c,	// (0x0009ac62) hc_cl_list_double_graphic_heading_pane_g

0x7829,	// (0x00092a3f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7829,	// (0x00092a3f) hc_cl_list_double_graphic_heading_pane_t1

0x783e,	// (0x00092a54) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x783e,	// (0x00092a54) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa53,	// (0x0009ac69) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa53,	// (0x0009ac69) hc_cl_list_double_graphic_heading_pane_t

0xd8ef,	// (0x00098b05) vid4_progress_pane_g1

0xd8ff,	// (0x00098b15) vid4_progress_pane_g2

0x7853,	// (0x00092a69) vid4_progress_pane_g3

0xd90f,	// (0x00098b25) vid4_progress_pane_g4

0x0004,

0xfa58,	// (0x0009ac6e) vid4_progress_pane_g

0x7865,	// (0x00092a7b) vid4_progress_pane_t1

0xd92d,	// (0x00098b43) vid4_progress_pane_t2

0x0002,

0xfa63,	// (0x0009ac79) vid4_progress_pane_t

0x787b,	// (0x00092a91) wait_bar_pane_cp07

0xaa67,	// (0x00095c7d) blid_firmament_pane_ParamLimits

0xaaa8,	// (0x00095cbe) popup_blid_sat_info2_window_g1

0xaacc,	// (0x00095ce2) popup_blid_sat_info2_window_t3

0xaada,	// (0x00095cf0) popup_blid_sat_info2_window_t4

0xaae8,	// (0x00095cfe) popup_blid_sat_info2_window_t5

0xaaf6,	// (0x00095d0c) popup_blid_sat_info2_window_t6

0xab06,	// (0x00095d1c) popup_blid_sat_info2_window_t7

0xab14,	// (0x00095d2a) popup_blid_sat_info2_window_t8

0xab22,	// (0x00095d38) popup_blid_sat_info2_window_t9

0xab30,	// (0x00095d46) popup_blid_sat_info2_window_t10

0xabec,	// (0x00095e02) aid_firma_cardinal_ParamLimits

0xac00,	// (0x00095e16) blid_firmament_pane_t1_ParamLimits

0xac17,	// (0x00095e2d) blid_firmament_pane_t2_ParamLimits

0xac2e,	// (0x00095e44) blid_firmament_pane_t3_ParamLimits

0xac45,	// (0x00095e5b) blid_firmament_pane_t4_ParamLimits

0xf67d,	// (0x0009a893) blid_firmament_pane_t_ParamLimits

0xac5c,	// (0x00095e72) blid_sat_info_pane_ParamLimits

0x9df3,	// (0x00095009) main_cam_set_pane_ParamLimits

0x5e29,	// (0x0009103f) aid_size_cell_colour_35_ParamLimits

0x5e49,	// (0x0009105f) aid_size_cell_colour_112_ParamLimits

0x5e69,	// (0x0009107f) aid_size_cell_effect_ParamLimits

0xa76a,	// (0x00095980) bg_tb_trans_pane_cp02_ParamLimits

0xe746,	// (0x0009995c) heading_imed_pane_ParamLimits

0x5e88,	// (0x0009109e) listscroll_imed_pane_ParamLimits

0x4120,	// (0x0008f336) popup_call2_audio_first_window_g5_ParamLimits

0x4120,	// (0x0008f336) popup_call2_audio_first_window_g5

0x63b6,	// (0x000915cc) aid_size_touch_image3_arrow_left_ParamLimits

0x63b6,	// (0x000915cc) aid_size_touch_image3_arrow_left

0x63d6,	// (0x000915ec) aid_size_touch_image3_arrow_right_ParamLimits

0x63d6,	// (0x000915ec) aid_size_touch_image3_arrow_right

0xd942,	// (0x00098b58) vid4_progress_pane_t3

0x615d,	// (0x00091373) main_hwr_training_symbol_option_pane_ParamLimits

0x615d,	// (0x00091373) main_hwr_training_symbol_option_pane

0xb44d,	// (0x00096663) popup_hwr_training_preview_window_ParamLimits

0xb44d,	// (0x00096663) popup_hwr_training_preview_window

0x6179,	// (0x0009138f) hwr_training_navi_pane_g5_ParamLimits

0x6179,	// (0x0009138f) hwr_training_navi_pane_g5

0xb6c7,	// (0x000968dd) popup_char_count_window

0x9df3,	// (0x00095009) bg_popup_sub_pane_cp20_ParamLimits

0x722b,	// (0x00092441) list_vitu2_match_list_pane_ParamLimits

0x723a,	// (0x00092450) vitu2_page_scroll_pane_ParamLimits

0x723a,	// (0x00092450) vitu2_page_scroll_pane

0xbc7b,	// (0x00096e91) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbc7b,	// (0x00096e91) list_single_hwr_training_symbol_option_pane

0xbc8e,	// (0x00096ea4) list_single_hwr_training_symbol_option_pane_g1

0xbc96,	// (0x00096eac) list_single_hwr_training_symbol_option_pane_t1

0xbca4,	// (0x00096eba) bg_button_pane_cp023

0xbcad,	// (0x00096ec3) bg_button_pane_cp024

0x78bb,	// (0x00092ad1) vitu2_page_scroll_pane_g1

0x78c3,	// (0x00092ad9) vitu2_page_scroll_pane_g2

0x0001,

0xfa6a,	// (0x0009ac80) vitu2_page_scroll_pane_g

0x78cb,	// (0x00092ae1) vitu2_page_scroll_pane_t1

0xac95,	// (0x00095eab) popup_char_count_window_g1

0xbce0,	// (0x00096ef6) popup_char_count_window_g2

0xbce9,	// (0x00096eff) popup_char_count_window_g3

0x0002,

0xfa6f,	// (0x0009ac85) popup_char_count_window_g

0xbcf2,	// (0x00096f08) popup_char_count_window_t1

0x9e01,	// (0x00095017) main_vded2_pane

0xb15c,	// (0x00096372) aid_size_cell_imed_line

0xb166,	// (0x0009637c) grid_imed_line_width_pane

0xd823,	// (0x00098a39) vid4_indicators_pane_g4

0xbd00,	// (0x00096f16) cell_imed_line_width_pane_ParamLimits

0xbd00,	// (0x00096f16) cell_imed_line_width_pane

0xbd12,	// (0x00096f28) cell_imed_line_width_pane_g1

0xaa15,	// (0x00095c2b) cell_imed_line_width_pane_g2

0x0001,

0xfa76,	// (0x0009ac8c) cell_imed_line_width_pane_g

0x78da,	// (0x00092af0) main_vded2_pane_g1_ParamLimits

0x78da,	// (0x00092af0) main_vded2_pane_g1

0x78f0,	// (0x00092b06) main_vded2_pane_g2_ParamLimits

0x78f0,	// (0x00092b06) main_vded2_pane_g2

0x0001,

0xfa7b,	// (0x0009ac91) main_vded2_pane_g_ParamLimits

0xfa7b,	// (0x0009ac91) main_vded2_pane_g

0x7900,	// (0x00092b16) vded2_slider_pane_ParamLimits

0x7900,	// (0x00092b16) vded2_slider_pane

0x7910,	// (0x00092b26) aid_size_touch_vded2_end

0x7918,	// (0x00092b2e) aid_size_touch_vded2_playhead

0xbd1b,	// (0x00096f31) aid_size_touch_vded2_start

0xbd23,	// (0x00096f39) vded2_slider_bg_pane

0xbd2c,	// (0x00096f42) vded2_slider_pane_g1

0xbd35,	// (0x00096f4b) vded2_slider_pane_g2

0x7920,	// (0x00092b36) vded2_slider_pane_g3

0x0002,

0xfa80,	// (0x0009ac96) vded2_slider_pane_g

0xbd3d,	// (0x00096f53) vded2_slider_bg_pane_g1

0xbd46,	// (0x00096f5c) vded2_slider_bg_pane_g2

0xbd4f,	// (0x00096f65) vded2_slider_bg_pane_g3

0x0002,

0xfa87,	// (0x0009ac9d) vded2_slider_bg_pane_g

0x362d,	// (0x0008e843) aid_postcard_touch_down_pane_ParamLimits

0x362d,	// (0x0008e843) aid_postcard_touch_down_pane

0x363f,	// (0x0008e855) aid_postcard_touch_up_pane_ParamLimits

0x363f,	// (0x0008e855) aid_postcard_touch_up_pane

0x9e01,	// (0x00095017) main_blid2_pane

0xa778,	// (0x0009598e) popup_blid2_search_window

0xd964,	// (0x00098b7a) blid2_gps_pane

0xd964,	// (0x00098b7a) blid2_navig_pane

0xd964,	// (0x00098b7a) blid2_search_pane

0xd964,	// (0x00098b7a) blid2_tripm_pane

0x7929,	// (0x00092b3f) blid2_search_pane_g1_ParamLimits

0x7929,	// (0x00092b3f) blid2_search_pane_g1

0x793c,	// (0x00092b52) blid2_search_pane_t1_ParamLimits

0x793c,	// (0x00092b52) blid2_search_pane_t1

0x794e,	// (0x00092b64) aid_size_cell_blid2_gps_ParamLimits

0x794e,	// (0x00092b64) aid_size_cell_blid2_gps

0x7966,	// (0x00092b7c) blid2_gps_pane_g1_ParamLimits

0x7966,	// (0x00092b7c) blid2_gps_pane_g1

0x797a,	// (0x00092b90) grid_blid2_satellite_pane_ParamLimits

0x797a,	// (0x00092b90) grid_blid2_satellite_pane

0x798e,	// (0x00092ba4) blid2_navig_pane_g1_ParamLimits

0x798e,	// (0x00092ba4) blid2_navig_pane_g1

0x799a,	// (0x00092bb0) blid2_navig_pane_t1_ParamLimits

0x799a,	// (0x00092bb0) blid2_navig_pane_t1

0x79b3,	// (0x00092bc9) blid2_navig_pane_t2_ParamLimits

0x79b3,	// (0x00092bc9) blid2_navig_pane_t2

0x0001,

0xfa8e,	// (0x0009aca4) blid2_navig_pane_t_ParamLimits

0xfa8e,	// (0x0009aca4) blid2_navig_pane_t

0x79cc,	// (0x00092be2) blid2_navig_ring_pane_ParamLimits

0x79cc,	// (0x00092be2) blid2_navig_ring_pane

0x79e1,	// (0x00092bf7) blid2_speed_pane_ParamLimits

0x79e1,	// (0x00092bf7) blid2_speed_pane

0x79ed,	// (0x00092c03) blid2_tripm_pane_g1_ParamLimits

0x79ed,	// (0x00092c03) blid2_tripm_pane_g1

0x7a02,	// (0x00092c18) blid2_tripm_pane_g2_ParamLimits

0x7a02,	// (0x00092c18) blid2_tripm_pane_g2

0x7a16,	// (0x00092c2c) blid2_tripm_pane_g3_ParamLimits

0x7a16,	// (0x00092c2c) blid2_tripm_pane_g3

0x7a2a,	// (0x00092c40) blid2_tripm_pane_g4_ParamLimits

0x7a2a,	// (0x00092c40) blid2_tripm_pane_g4

0x7a3e,	// (0x00092c54) blid2_tripm_pane_g5_ParamLimits

0x7a3e,	// (0x00092c54) blid2_tripm_pane_g5

0x0005,

0xfa93,	// (0x0009aca9) blid2_tripm_pane_g_ParamLimits

0xfa93,	// (0x0009aca9) blid2_tripm_pane_g

0x7a60,	// (0x00092c76) blid2_tripm_pane_t1_ParamLimits

0x7a60,	// (0x00092c76) blid2_tripm_pane_t1

0x7a77,	// (0x00092c8d) blid2_tripm_pane_t2_ParamLimits

0x7a77,	// (0x00092c8d) blid2_tripm_pane_t2

0x7a8e,	// (0x00092ca4) blid2_tripm_pane_t3_ParamLimits

0x7a8e,	// (0x00092ca4) blid2_tripm_pane_t3

0x0003,

0xfaa0,	// (0x0009acb6) blid2_tripm_pane_t_ParamLimits

0xfaa0,	// (0x0009acb6) blid2_tripm_pane_t

0x7ad1,	// (0x00092ce7) cell_blid2_satellite_pane_ParamLimits

0x7ad1,	// (0x00092ce7) cell_blid2_satellite_pane

0x7ae9,	// (0x00092cff) cell_blid2_satellite_pane_g1

0xbd58,	// (0x00096f6e) cell_blid2_satellite_pane_t1

0xac6c,	// (0x00095e82) blid2_speed_pane_g1

0xbd66,	// (0x00096f7c) blid2_speed_pane_t1

0xbd74,	// (0x00096f8a) blid2_speed_pane_t2

0x0001,

0xfaa9,	// (0x0009acbf) blid2_speed_pane_t

0xac6c,	// (0x00095e82) blid2_navig_ring_pane_g1

0x7af2,	// (0x00092d08) blid2_navig_ring_pane_g2

0x7afa,	// (0x00092d10) blid2_navig_ring_pane_g3

0x7b02,	// (0x00092d18) blid2_navig_ring_pane_g4

0x7b0a,	// (0x00092d20) blid2_navig_ring_pane_g5

0x0004,

0xfaae,	// (0x0009acc4) blid2_navig_ring_pane_g

0xd964,	// (0x00098b7a) bg_popup_window_pane_cp011

0xbd82,	// (0x00096f98) popup_blid2_search_window_g1

0xbd8a,	// (0x00096fa0) popup_blid2_search_window_t1

0xbd98,	// (0x00096fae) popup_blid2_search_window_t2

0x0001,

0xfab9,	// (0x0009accf) popup_blid2_search_window_t

0xe3e5,	// (0x000995fb) main_browser_pane_g1

0xe0df,	// (0x000992f5) main_browser_pane_ParamLimits

0x9df3,	// (0x00095009) bg_button_pane_cp011_ParamLimits

0x6b2d,	// (0x00091d43) cell_vitu2_function_pane_g1_ParamLimits

0xa76a,	// (0x00095980) bg_popup_sub_pane_cp22_ParamLimits

0x73fd,	// (0x00092613) input_focus_pane_cp08_ParamLimits

0x7414,	// (0x0009262a) popup_vitu2_query_button_pane_ParamLimits

0x7414,	// (0x0009262a) popup_vitu2_query_button_pane

0x7424,	// (0x0009263a) popup_vitu2_query_input_button_pane

0xb97a,	// (0x00096b90) popup_vitu2_query_window_g1_ParamLimits

0x742c,	// (0x00092642) popup_vitu2_query_window_g2_ParamLimits

0xf9ba,	// (0x0009abd0) popup_vitu2_query_window_g_ParamLimits

0xd964,	// (0x00098b7a) bg_button_pane_cp026

0x7b12,	// (0x00092d28) popup_vitu2_query_input_button_pane_g1

0xd964,	// (0x00098b7a) bg_button_pane_cp025

0xbda6,	// (0x00096fbc) popup_vitu2_query_button_pane_t1

0x52cd,	// (0x000904e3) main_mp3_pane_t6

0x52db,	// (0x000904f1) popup_slider_window_cp01

0xd78f,	// (0x000989a5) cam4_battery_pane

0xd7e2,	// (0x000989f8) cam4_battery_pane_cp02

0xd8e7,	// (0x00098afd) cam4_battery_pane_cp01

0xd8e7,	// (0x00098afd) cam4_battery_pane_cp03

0xb596,	// (0x000967ac) cam4_battery_pane_g1

0xac6c,	// (0x00095e82) cam4_battery_pane_g2

0x0001,

0xfabe,	// (0x0009acd4) cam4_battery_pane_g

0xab3e,	// (0x00095d54) popup_blid_sat_info2_window_t11

0xeb17,	// (0x00099d2d) aid_size_touch_mv_arrow_left_ParamLimits

0xeb40,	// (0x00099d56) aid_size_touch_mv_arrow_right_ParamLimits

0xeb9e,	// (0x00099db4) navi_pane_g1_ParamLimits

0xebaa,	// (0x00099dc0) navi_pane_g2_ParamLimits

0xebd8,	// (0x00099dee) navi_pane_g3_ParamLimits

0x0157,	// (0x0008b36d) navi_pane_g_ParamLimits

0x30ac,	// (0x0008e2c2) navi_pane_mv_t1_ParamLimits

0x5e94,	// (0x000910aa) grid_imed_effect_pane_ParamLimits

0x1ee4,	// (0x0008d0fa) aid_placing_vt_slider_lsc

0xe327,	// (0x0009953d) aid_placing_vt_slider_prt

0x4634,	// (0x0008f84a) bg_tb_trans_pane_cp01_ParamLimits

0xadbb,	// (0x00095fd1) popup_image_details_window_g1_ParamLimits

0xadce,	// (0x00095fe4) popup_image_details_window_g2_ParamLimits

0xade3,	// (0x00095ff9) popup_image_details_window_g3_ParamLimits

0xade3,	// (0x00095ff9) popup_image_details_window_g3

0xf6c2,	// (0x0009a8d8) popup_image_details_window_g_ParamLimits

0xadf7,	// (0x0009600d) popup_image_details_window_t1_ParamLimits

0xae09,	// (0x0009601f) popup_image_details_window_t2_ParamLimits

0xae22,	// (0x00096038) popup_image_details_window_t3_ParamLimits

0xae36,	// (0x0009604c) popup_image_details_window_t4_ParamLimits

0xae51,	// (0x00096067) popup_image_details_window_t5_ParamLimits

0xf6c9,	// (0x0009a8df) popup_image_details_window_t_ParamLimits

0x7767,	// (0x0009297d) cl_header_name_pane_ParamLimits

0x7767,	// (0x0009297d) cl_header_name_pane

0x7b1a,	// (0x00092d30) cl_header_name_pane_t1_ParamLimits

0x7b1a,	// (0x00092d30) cl_header_name_pane_t1

0x7b3b,	// (0x00092d51) cl_header_name_pane_t2_ParamLimits

0x7b3b,	// (0x00092d51) cl_header_name_pane_t2

0x7b7d,	// (0x00092d93) cl_header_name_pane_t3_ParamLimits

0x7b7d,	// (0x00092d93) cl_header_name_pane_t3

0x0002,

0xfac3,	// (0x0009acd9) cl_header_name_pane_t_ParamLimits

0xfac3,	// (0x0009acd9) cl_header_name_pane_t

0xec65,	// (0x00099e7b) navi_pane_mv_g2_ParamLimits

0xb684,	// (0x0009689a) field_vitu2_entry_pane_g1_ParamLimits

0xb690,	// (0x000968a6) field_vitu2_entry_pane_g2_ParamLimits

0xb69c,	// (0x000968b2) field_vitu2_entry_pane_g3_ParamLimits

0xb69c,	// (0x000968b2) field_vitu2_entry_pane_g3

0xf8c0,	// (0x0009aad6) field_vitu2_entry_pane_g_ParamLimits

0xd856,	// (0x00098a6c) cell_vitu2_itu_pane_g1_ParamLimits

0x6ac1,	// (0x00091cd7) cell_vitu2_itu_pane_g2_ParamLimits

0x6ac1,	// (0x00091cd7) cell_vitu2_itu_pane_g2

0x0001,

0xf8cc,	// (0x0009aae2) cell_vitu2_itu_pane_g_ParamLimits

0xf8cc,	// (0x0009aae2) cell_vitu2_itu_pane_g

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp05_ParamLimits

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp05

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp03

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp04

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp10_ParamLimits

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp10

0x770d,	// (0x00092923) bg_vkb2_func_pane_cp08

0x76f4,	// (0x0009290a) bg_vkb2_func_pane_cp06

0x7701,	// (0x00092917) bg_vkb2_func_pane_cp07

0xbcb6,	// (0x00096ecc) bg_vkb2_func_pane_cp11_ParamLimits

0xbcb6,	// (0x00096ecc) bg_vkb2_func_pane_cp11

0xbccb,	// (0x00096ee1) bg_vkb2_func_pane_cp12_ParamLimits

0xbccb,	// (0x00096ee1) bg_vkb2_func_pane_cp12

0xd964,	// (0x00098b7a) bg_vkb2_func_pane_cp09

0xb6d9,	// (0x000968ef) bg_vkb2_func_pane_g1

0xe4f6,	// (0x0009970c) bg_vkb2_func_pane_g2

0xb6e1,	// (0x000968f7) bg_vkb2_func_pane_g3

0xb6e9,	// (0x000968ff) bg_vkb2_func_pane_g4

0xb93f,	// (0x00096b55) bg_vkb2_func_pane_g5

0xb701,	// (0x00096917) bg_vkb2_func_pane_g6

0xb709,	// (0x0009691f) bg_vkb2_func_pane_g7

0xb6f9,	// (0x0009690f) bg_vkb2_func_pane_g8

0xe4d6,	// (0x000996ec) bg_vkb2_func_pane_g9

0x0008,

0xfaca,	// (0x0009ace0) bg_vkb2_func_pane_g

0x7a50,	// (0x00092c66) blid2_tripm_pane_g6_ParamLimits

0x7a50,	// (0x00092c66) blid2_tripm_pane_g6

0xb554,	// (0x0009676a) mp4_progress_pane_g1

0x7abf,	// (0x00092cd5) blid2_tripm_values_pane_ParamLimits

0x7abf,	// (0x00092cd5) blid2_tripm_values_pane

0x7bae,	// (0x00092dc4) blid2_tripm_values_pane_t1

0x7bbc,	// (0x00092dd2) blid2_tripm_values_pane_t2

0x7bca,	// (0x00092de0) blid2_tripm_values_pane_t3

0x7bd8,	// (0x00092dee) blid2_tripm_values_pane_t4

0x7be6,	// (0x00092dfc) blid2_tripm_values_pane_t5

0x7bf4,	// (0x00092e0a) blid2_tripm_values_pane_t6

0x7c02,	// (0x00092e18) blid2_tripm_values_pane_t7

0x7c10,	// (0x00092e26) blid2_tripm_values_pane_t8

0x7c1e,	// (0x00092e34) blid2_tripm_values_pane_t9

0x0008,

0xfadd,	// (0x0009acf3) blid2_tripm_values_pane_t

0x1f1b,	// (0x0008d131) call_video_pane_t1_ParamLimits

0x1f35,	// (0x0008d14b) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009a484) call_video_pane_t_ParamLimits

0x353c,	// (0x0008e752) msg_header_pane_g1_ParamLimits

0xee12,	// (0x0009a028) msg_header_pane_g2_ParamLimits

0xee12,	// (0x0009a028) msg_header_pane_g2

0x0001,

0xf430,	// (0x0009a646) msg_header_pane_g_ParamLimits

0xf430,	// (0x0009a646) msg_header_pane_g

0xe0df,	// (0x000992f5) main_clock2_pane_ParamLimits

0x5bad,	// (0x00090dc3) grid_clock2_toolbar_pane_ParamLimits

0x5bad,	// (0x00090dc3) grid_clock2_toolbar_pane

0x5bad,	// (0x00090dc3) listscroll_clock2_pane_ParamLimits

0x5bad,	// (0x00090dc3) listscroll_clock2_pane

0x5c90,	// (0x00090ea6) main_clock2_pane_t3_ParamLimits

0x5c90,	// (0x00090ea6) main_clock2_pane_t3

0x5cb2,	// (0x00090ec8) main_clock2_pane_t4_ParamLimits

0x5cb2,	// (0x00090ec8) main_clock2_pane_t4

0xbdb4,	// (0x00096fca) cell_clock2_toolbar_pane

0xbdbc,	// (0x00096fd2) cell_clock2_toolbar_pane_cp01

0xbdbc,	// (0x00096fd2) cell_clock2_toolbar_pane_cp02

0xbdc4,	// (0x00096fda) cell_clock2_toolbar_pane_cp03

0xbdcc,	// (0x00096fe2) list_clock2_pane

0xea9c,	// (0x00099cb2) scroll_pane_cp10

0xbdd4,	// (0x00096fea) list_single_clock2_pane_ParamLimits

0xbdd4,	// (0x00096fea) list_single_clock2_pane

0xe290,	// (0x000994a6) list_highlight_pane_cp08

0xbde1,	// (0x00096ff7) list_single_clock2_pane_t1

0xbdef,	// (0x00097005) list_single_clock2_pane_t2

0x0001,

0xfaf0,	// (0x0009ad06) list_single_clock2_pane_t

0xd964,	// (0x00098b7a) bg_button_pane_cp10

0xbdfd,	// (0x00097013) cell_clock2_toolbar_pane_g1

0x35c1,	// (0x0008e7d7) aid_main_viewer_pane_g1_ParamLimits

0x35c1,	// (0x0008e7d7) aid_main_viewer_pane_g1

0x35cd,	// (0x0008e7e3) aid_main_viewer_pane_g2_ParamLimits

0x35cd,	// (0x0008e7e3) aid_main_viewer_pane_g2

0x35d9,	// (0x0008e7ef) aid_main_viewer_pane_g3_ParamLimits

0x35d9,	// (0x0008e7ef) aid_main_viewer_pane_g3

0x35e8,	// (0x0008e7fe) aid_main_viewer_pane_g4_ParamLimits

0x35e8,	// (0x0008e7fe) aid_main_viewer_pane_g4

0x0003,

0xf441,	// (0x0009a657) aid_main_viewer_pane_g_ParamLimits

0xf441,	// (0x0009a657) aid_main_viewer_pane_g

0x4610,	// (0x0008f826) main_calc_pane_ParamLimits

0x4642,	// (0x0008f858) main_dialer2_pane_ParamLimits

0x9e01,	// (0x00095017) main_cam6_pane

0x9e01,	// (0x00095017) main_vid6_pane

0x5bb9,	// (0x00090dcf) listscroll_gen_pane_cp06_ParamLimits

0x5bb9,	// (0x00090dcf) listscroll_gen_pane_cp06

0x5cd3,	// (0x00090ee9) main_clock2_pane_t5_ParamLimits

0x5cd3,	// (0x00090ee9) main_clock2_pane_t5

0x5d2a,	// (0x00090f40) aid_call2_pane_cp10_ParamLimits

0x5d3c,	// (0x00090f52) aid_call_pane_cp10_ParamLimits

0xeb0b,	// (0x00099d21) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeb0b,	// (0x00099d21) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5d4e,	// (0x00090f64) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5d4e,	// (0x00090f64) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeb0b,	// (0x00099d21) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf77e,	// (0x0009a994) popup_clock_analogue_window_cp10_g_ParamLimits

0x5d60,	// (0x00090f76) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6363,	// (0x00091579) cell_dialer2_keypad_pane_g2_ParamLimits

0x6363,	// (0x00091579) cell_dialer2_keypad_pane_g2

0x0001,

0xf85f,	// (0x0009aa75) cell_dialer2_keypad_pane_g_ParamLimits

0xf85f,	// (0x0009aa75) cell_dialer2_keypad_pane_g

0x637f,	// (0x00091595) cell_dialer2_keypad_pane_t1

0x6e03,	// (0x00092019) main_cset_text2_pane_ParamLimits

0x6e03,	// (0x00092019) main_cset_text2_pane

0xbb60,	// (0x00096d76) area_vitu2_query_pane_g1_ParamLimits

0x7699,	// (0x000928af) area_vitu2_query_pane_g2_ParamLimits

0xfa0d,	// (0x0009ac23) area_vitu2_query_pane_g_ParamLimits

0xbbe4,	// (0x00096dfa) area_vitu2_query_pane_t7_ParamLimits

0xbbe4,	// (0x00096dfa) area_vitu2_query_pane_t7

0x76f4,	// (0x0009290a) bg_button_pane_cp018_ParamLimits

0x7701,	// (0x00092917) bg_button_pane_cp021_ParamLimits

0x770d,	// (0x00092923) bg_button_pane_cp022_ParamLimits

0x770d,	// (0x00092923) bg_vkb2_func_pane_cp08_ParamLimits

0x76f4,	// (0x0009290a) bg_vkb2_func_pane_cp06_ParamLimits

0x7701,	// (0x00092917) bg_vkb2_func_pane_cp07_ParamLimits

0x771c,	// (0x00092932) input_focus_pane_cp09_ParamLimits

0xd958,	// (0x00098b6e) cam6_autofocus_pane_ParamLimits

0xd958,	// (0x00098b6e) cam6_autofocus_pane

0x7c2c,	// (0x00092e42) cam6_image_uncrop_pane_ParamLimits

0x7c2c,	// (0x00092e42) cam6_image_uncrop_pane

0x7c39,	// (0x00092e4f) cam6_indi_pane_ParamLimits

0x7c39,	// (0x00092e4f) cam6_indi_pane

0x7c4f,	// (0x00092e65) cam6_mode_pane_ParamLimits

0x7c4f,	// (0x00092e65) cam6_mode_pane

0x7c61,	// (0x00092e77) cam6_timer_pane_ParamLimits

0x7c61,	// (0x00092e77) cam6_timer_pane

0x7c6d,	// (0x00092e83) cam6_zoom_pane_ParamLimits

0x7c6d,	// (0x00092e83) cam6_zoom_pane

0x7c79,	// (0x00092e8f) cam6_mode_pane_g1_ParamLimits

0x7c79,	// (0x00092e8f) cam6_mode_pane_g1

0x7c89,	// (0x00092e9f) cam6_mode_pane_g2_ParamLimits

0x7c89,	// (0x00092e9f) cam6_mode_pane_g2

0x7c99,	// (0x00092eaf) cam6_mode_pane_g3_ParamLimits

0x7c99,	// (0x00092eaf) cam6_mode_pane_g3

0x7ca9,	// (0x00092ebf) cam6_mode_pane_g4_ParamLimits

0x7ca9,	// (0x00092ebf) cam6_mode_pane_g4

0x0003,

0xfaf5,	// (0x0009ad0b) cam6_mode_pane_g_ParamLimits

0xfaf5,	// (0x0009ad0b) cam6_mode_pane_g

0xbe05,	// (0x0009701b) bg_tb_trans_pane_cp08_ParamLimits

0xbe05,	// (0x0009701b) bg_tb_trans_pane_cp08

0xbe13,	// (0x00097029) cam6_battery_pane_ParamLimits

0xbe13,	// (0x00097029) cam6_battery_pane

0xbe29,	// (0x0009703f) cam6_indi_pane_g1_ParamLimits

0xbe29,	// (0x0009703f) cam6_indi_pane_g1

0xbe3b,	// (0x00097051) cam6_indi_pane_g2_ParamLimits

0xbe3b,	// (0x00097051) cam6_indi_pane_g2

0xbe4d,	// (0x00097063) cam6_indi_pane_g3_ParamLimits

0xbe4d,	// (0x00097063) cam6_indi_pane_g3

0x0002,

0xfafe,	// (0x0009ad14) cam6_indi_pane_g_ParamLimits

0xfafe,	// (0x0009ad14) cam6_indi_pane_g

0xbe5f,	// (0x00097075) cam6_indi_pane_t1_ParamLimits

0xbe5f,	// (0x00097075) cam6_indi_pane_t1

0x68cf,	// (0x00091ae5) cam6_autofocus_pane_g1

0x68c7,	// (0x00091add) cam6_autofocus_pane_g2

0x68df,	// (0x00091af5) cam6_autofocus_pane_g3

0x68d7,	// (0x00091aed) cam6_autofocus_pane_g4

0x0003,

0xfb05,	// (0x0009ad1b) cam6_autofocus_pane_g

0xbe85,	// (0x0009709b) cam6_timer_pane_g1

0xbe8d,	// (0x000970a3) cam6_timer_pane_t1

0xbe9b,	// (0x000970b1) cam6_zoom_cont_pane

0xbea3,	// (0x000970b9) cam6_zoom_pane_g1

0xbeab,	// (0x000970c1) cam6_zoom_pane_g2

0x7cb9,	// (0x00092ecf) cam6_zoom_pane_g3

0x0002,

0xfb0e,	// (0x0009ad24) cam6_zoom_pane_g

0xac6c,	// (0x00095e82) cam6_battery_pane_g1

0xac6c,	// (0x00095e82) cam6_battery_pane_g2

0x0001,

0xf686,	// (0x0009a89c) cam6_battery_pane_g

0xbeb3,	// (0x000970c9) cam6_zoom_cont_pane_g1

0xbebc,	// (0x000970d2) cam6_zoom_cont_pane_g2

0xbec5,	// (0x000970db) cam6_zoom_cont_pane_g3

0x0002,

0xfb15,	// (0x0009ad2b) cam6_zoom_cont_pane_g

0x7cd6,	// (0x00092eec) cam6_mode_pane_cp_ParamLimits

0x7cd6,	// (0x00092eec) cam6_mode_pane_cp

0x7ce8,	// (0x00092efe) cam6_zoom_pane_cp_ParamLimits

0x7ce8,	// (0x00092efe) cam6_zoom_pane_cp

0x7cf4,	// (0x00092f0a) vid6_image_uncrop_cif_pane_ParamLimits

0x7cf4,	// (0x00092f0a) vid6_image_uncrop_cif_pane

0x7d02,	// (0x00092f18) vid6_image_uncrop_nhd_pane_ParamLimits

0x7d02,	// (0x00092f18) vid6_image_uncrop_nhd_pane

0x7d0f,	// (0x00092f25) vid6_image_uncrop_vga_pane_ParamLimits

0x7d0f,	// (0x00092f25) vid6_image_uncrop_vga_pane

0x7d1c,	// (0x00092f32) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d1c,	// (0x00092f32) vid6_image_uncrop_wvga_pane

0x7d29,	// (0x00092f3f) vid6_indi_pane_ParamLimits

0x7d29,	// (0x00092f3f) vid6_indi_pane

0xbe05,	// (0x0009701b) bg_tb_trans_pane_cp09_ParamLimits

0xbe05,	// (0x0009701b) bg_tb_trans_pane_cp09

0xbed9,	// (0x000970ef) cam6_battery_pane_cp_ParamLimits

0xbed9,	// (0x000970ef) cam6_battery_pane_cp

0xbee5,	// (0x000970fb) vid6_indi_pane_g1_ParamLimits

0xbee5,	// (0x000970fb) vid6_indi_pane_g1

0xbef7,	// (0x0009710d) vid6_indi_pane_g2_ParamLimits

0xbef7,	// (0x0009710d) vid6_indi_pane_g2

0xbf09,	// (0x0009711f) vid6_indi_pane_g3_ParamLimits

0xbf09,	// (0x0009711f) vid6_indi_pane_g3

0xbf1e,	// (0x00097134) vid6_indi_pane_g4_ParamLimits

0xbf1e,	// (0x00097134) vid6_indi_pane_g4

0xbf33,	// (0x00097149) vid6_indi_pane_g5_ParamLimits

0xbf33,	// (0x00097149) vid6_indi_pane_g5

0x0004,

0xfb1c,	// (0x0009ad32) vid6_indi_pane_g_ParamLimits

0xfb1c,	// (0x0009ad32) vid6_indi_pane_g

0xbf4d,	// (0x00097163) vid6_indi_pane_t1_ParamLimits

0xbf4d,	// (0x00097163) vid6_indi_pane_t1

0xbf63,	// (0x00097179) vid6_indi_pane_t2_ParamLimits

0xbf63,	// (0x00097179) vid6_indi_pane_t2

0xbf8b,	// (0x000971a1) vid6_indi_pane_t3_ParamLimits

0xbf8b,	// (0x000971a1) vid6_indi_pane_t3

0xbfb3,	// (0x000971c9) vid6_indi_pane_t4_ParamLimits

0xbfb3,	// (0x000971c9) vid6_indi_pane_t4

0x0003,

0xfb27,	// (0x0009ad3d) vid6_indi_pane_t_ParamLimits

0xfb27,	// (0x0009ad3d) vid6_indi_pane_t

0xbfd7,	// (0x000971ed) wait_bar_pane_cp08

0x7d40,	// (0x00092f56) main_cset_text2_pane_t1_ParamLimits

0x7d40,	// (0x00092f56) main_cset_text2_pane_t1

0x7cc1,	// (0x00092ed7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7cc1,	// (0x00092ed7) listscroll_gen_pane_cp06_t1

0x9e01,	// (0x00095017) main_cam6_set_pane

0xd781,	// (0x00098997) bg_tb_trans_pane_cp06_ParamLimits

0xd797,	// (0x000989ad) cam4_indicators_pane_g1_ParamLimits

0xd7a8,	// (0x000989be) cam4_indicators_pane_g2_ParamLimits

0xf89c,	// (0x0009aab2) cam4_indicators_pane_g_ParamLimits

0xd7c0,	// (0x000989d6) cam4_indicators_pane_t1_ParamLimits

0x9df3,	// (0x00095009) bg_tb_trans_pane_cp07_ParamLimits

0xd7ea,	// (0x00098a00) vid4_indicators_pane_g1_ParamLimits

0xd7fe,	// (0x00098a14) vid4_indicators_pane_g2_ParamLimits

0xd812,	// (0x00098a28) vid4_indicators_pane_g3_ParamLimits

0xd823,	// (0x00098a39) vid4_indicators_pane_g4_ParamLimits

0xf8ae,	// (0x0009aac4) vid4_indicators_pane_g_ParamLimits

0xd83f,	// (0x00098a55) vid4_indicators_pane_t1_ParamLimits

0xd8ef,	// (0x00098b05) vid4_progress_pane_g1_ParamLimits

0xd8ff,	// (0x00098b15) vid4_progress_pane_g2_ParamLimits

0x7853,	// (0x00092a69) vid4_progress_pane_g3_ParamLimits

0xd90f,	// (0x00098b25) vid4_progress_pane_g4_ParamLimits

0xfa58,	// (0x0009ac6e) vid4_progress_pane_g_ParamLimits

0x7865,	// (0x00092a7b) vid4_progress_pane_t1_ParamLimits

0xd92d,	// (0x00098b43) vid4_progress_pane_t2_ParamLimits

0xd942,	// (0x00098b58) vid4_progress_pane_t3_ParamLimits

0xfa63,	// (0x0009ac79) vid4_progress_pane_t_ParamLimits

0x787b,	// (0x00092a91) wait_bar_pane_cp07_ParamLimits

0x7d5b,	// (0x00092f71) main_cam6_set_pane_g2_ParamLimits

0x7d5b,	// (0x00092f71) main_cam6_set_pane_g2

0x7d7d,	// (0x00092f93) main_cset6_listscroll_pane_ParamLimits

0x7d7d,	// (0x00092f93) main_cset6_listscroll_pane

0x7d97,	// (0x00092fad) main_cset6_slider_pane_ParamLimits

0x7d97,	// (0x00092fad) main_cset6_slider_pane

0x7dad,	// (0x00092fc3) main_cset6_text2_pane_ParamLimits

0x7dad,	// (0x00092fc3) main_cset6_text2_pane

0xbfe6,	// (0x000971fc) main_cset6_text_pane

0xbfee,	// (0x00097204) main_cset_list_pane_copy1_ParamLimits

0xbfee,	// (0x00097204) main_cset_list_pane_copy1

0xbffe,	// (0x00097214) scroll_pane_cp028_copy1

0x7dbb,	// (0x00092fd1) cset_list_set_pane_copy1

0x7dcc,	// (0x00092fe2) aid_position_infowindow_above_copy1

0x7dd4,	// (0x00092fea) aid_position_infowindow_below_copy1

0x7ddc,	// (0x00092ff2) cset_list_set_pane_g1_copy1

0x7de4,	// (0x00092ffa) cset_list_set_pane_g3_copy1_ParamLimits

0x7de4,	// (0x00092ffa) cset_list_set_pane_g3_copy1

0x7df3,	// (0x00093009) cset_list_set_pane_t1_copy1_ParamLimits

0x7df3,	// (0x00093009) cset_list_set_pane_t1_copy1

0x4634,	// (0x0008f84a) list_highlight_pane_cp021_copy1_ParamLimits

0x4634,	// (0x0008f84a) list_highlight_pane_cp021_copy1

0xc007,	// (0x0009721d) cset6_slider_pane_ParamLimits

0xc007,	// (0x0009721d) cset6_slider_pane

0xc033,	// (0x00097249) main_cset6_slider_pane_g1_ParamLimits

0xc033,	// (0x00097249) main_cset6_slider_pane_g1

0x7e08,	// (0x0009301e) main_cset6_slider_pane_g2_ParamLimits

0x7e08,	// (0x0009301e) main_cset6_slider_pane_g2

0xb832,	// (0x00096a48) main_cset6_slider_pane_g3_ParamLimits

0xb832,	// (0x00096a48) main_cset6_slider_pane_g3

0x7e30,	// (0x00093046) main_cset6_slider_pane_g4_ParamLimits

0x7e30,	// (0x00093046) main_cset6_slider_pane_g4

0x6ece,	// (0x000920e4) main_cset6_slider_pane_g5_ParamLimits

0x6ece,	// (0x000920e4) main_cset6_slider_pane_g5

0xb832,	// (0x00096a48) main_cset6_slider_pane_g7_ParamLimits

0xb832,	// (0x00096a48) main_cset6_slider_pane_g7

0xb83e,	// (0x00096a54) main_cset6_slider_pane_g8_ParamLimits

0xb83e,	// (0x00096a54) main_cset6_slider_pane_g8

0x6e86,	// (0x0009209c) main_cset6_slider_pane_g9_ParamLimits

0x6e86,	// (0x0009209c) main_cset6_slider_pane_g9

0x6e92,	// (0x000920a8) main_cset6_slider_pane_g10_ParamLimits

0x6e92,	// (0x000920a8) main_cset6_slider_pane_g10

0xb84a,	// (0x00096a60) main_cset6_slider_pane_g11_ParamLimits

0xb84a,	// (0x00096a60) main_cset6_slider_pane_g11

0xb856,	// (0x00096a6c) main_cset6_slider_pane_g12_ParamLimits

0xb856,	// (0x00096a6c) main_cset6_slider_pane_g12

0x6e9e,	// (0x000920b4) main_cset6_slider_pane_g13_ParamLimits

0x6e9e,	// (0x000920b4) main_cset6_slider_pane_g13

0x6eaa,	// (0x000920c0) main_cset6_slider_pane_g14_ParamLimits

0x6eaa,	// (0x000920c0) main_cset6_slider_pane_g14

0x7e3c,	// (0x00093052) main_cset6_slider_pane_g15_ParamLimits

0x7e3c,	// (0x00093052) main_cset6_slider_pane_g15

0x6ece,	// (0x000920e4) main_cset6_slider_pane_g16_ParamLimits

0x6ece,	// (0x000920e4) main_cset6_slider_pane_g16

0x6eda,	// (0x000920f0) main_cset6_slider_pane_g17_ParamLimits

0x6eda,	// (0x000920f0) main_cset6_slider_pane_g17

0x0011,

0xfb30,	// (0x0009ad46) main_cset6_slider_pane_g_ParamLimits

0xfb30,	// (0x0009ad46) main_cset6_slider_pane_g

0xc05b,	// (0x00097271) main_cset6_slider_pane_t1_ParamLimits

0xc05b,	// (0x00097271) main_cset6_slider_pane_t1

0x7e60,	// (0x00093076) main_cset6_slider_pane_t2_ParamLimits

0x7e60,	// (0x00093076) main_cset6_slider_pane_t2

0x7e8b,	// (0x000930a1) main_cset6_slider_pane_t3_ParamLimits

0x7e8b,	// (0x000930a1) main_cset6_slider_pane_t3

0x7eb6,	// (0x000930cc) main_cset6_slider_pane_t4_ParamLimits

0x7eb6,	// (0x000930cc) main_cset6_slider_pane_t4

0x7ee1,	// (0x000930f7) main_cset6_slider_pane_t5_ParamLimits

0x7ee1,	// (0x000930f7) main_cset6_slider_pane_t5

0xc09c,	// (0x000972b2) main_cset6_slider_pane_t7_ParamLimits

0xc09c,	// (0x000972b2) main_cset6_slider_pane_t7

0x7f0c,	// (0x00093122) main_cset6_slider_pane_t8_ParamLimits

0x7f0c,	// (0x00093122) main_cset6_slider_pane_t8

0x7f30,	// (0x00093146) main_cset6_slider_pane_t9_ParamLimits

0x7f30,	// (0x00093146) main_cset6_slider_pane_t9

0x7f54,	// (0x0009316a) main_cset6_slider_pane_t10_ParamLimits

0x7f54,	// (0x0009316a) main_cset6_slider_pane_t10

0x7f78,	// (0x0009318e) main_cset6_slider_pane_t11_ParamLimits

0x7f78,	// (0x0009318e) main_cset6_slider_pane_t11

0xc0d2,	// (0x000972e8) main_cset6_slider_pane_t14_ParamLimits

0xc0d2,	// (0x000972e8) main_cset6_slider_pane_t14

0xc10b,	// (0x00097321) main_cset6_slider_pane_t15_ParamLimits

0xc10b,	// (0x00097321) main_cset6_slider_pane_t15

0x000b,

0xfb55,	// (0x0009ad6b) main_cset6_slider_pane_t_ParamLimits

0xfb55,	// (0x0009ad6b) main_cset6_slider_pane_t

0xc144,	// (0x0009735a) cset_slider_pane_g1_copy1

0xc14d,	// (0x00097363) cset_slider_pane_g2_copy1

0xc156,	// (0x0009736c) cset_slider_pane_g3_copy1

0xd964,	// (0x00098b7a) bg_popup_sub_pane_cp011_copy1

0xc15f,	// (0x00097375) main_cset_text_pane_g1_copy1

0xb98e,	// (0x00096ba4) main_cset_text_pane_t1_copy1

0xb99c,	// (0x00096bb2) main_cset_text_pane_t2_copy1

0xb9aa,	// (0x00096bc0) main_cset_text_pane_t3_copy1

0xb9b8,	// (0x00096bce) main_cset_text_pane_t4_copy1

0xc167,	// (0x0009737d) main_cset_text_pane_t5_copy1

0xc175,	// (0x0009738b) main_cset_text_pane_t6_copy1

0xc183,	// (0x00097399) main_cset_text_pane_t7_copy1

0x806c,	// (0x00093282) main_cset_text2_pane_t1_copy1

0x9df3,	// (0x00095009) main_ncimui_pane

0x485c,	// (0x0008fa72) popup_query_ncimui_window_ParamLimits

0x485c,	// (0x0008fa72) popup_query_ncimui_window

0xaf00,	// (0x00096116) field_cale_ev2_pane_g4_ParamLimits

0xaf00,	// (0x00096116) field_cale_ev2_pane_g4

0x625c,	// (0x00091472) cell_video_dialer_keypad_pane_g2_ParamLimits

0x625c,	// (0x00091472) cell_video_dialer_keypad_pane_g2

0x0001,

0xf83a,	// (0x0009aa50) cell_video_dialer_keypad_pane_g_ParamLimits

0xf83a,	// (0x0009aa50) cell_video_dialer_keypad_pane_g

0x6274,	// (0x0009148a) cell_video_dialer_keypad_pane_t1

0xd964,	// (0x00098b7a) bg_popup_window_pane_cp012

0xe985,	// (0x00099b9b) heading_pane_cp06

0xc1af,	// (0x000973c5) ncim_query_content_pane

0xd964,	// (0x00098b7a) bg_popup_heading_pane_cp01

0xc1b7,	// (0x000973cd) ncim_heading_pane_t1

0xc1c5,	// (0x000973db) ncim_indicator_popup_pane

0xc1d7,	// (0x000973ed) ncim_query_button_pane

0xc1eb,	// (0x00097401) ncim_query_content_pane_t1

0xc1fd,	// (0x00097413) ncim_query_content_pane_t2

0x0005,

0xfb99,	// (0x0009adaf) ncim_query_content_pane_t

0xc237,	// (0x0009744d) ncim_query_list_pane

0xc249,	// (0x0009745f) ncim_query_popup_pane

0xc1c5,	// (0x000973db) ncim_indicator_popup_pane_ParamLimits

0x81ac,	// (0x000933c2) ncim_query_content_pane_g1_ParamLimits

0x81ac,	// (0x000933c2) ncim_query_content_pane_g1

0xc1eb,	// (0x00097401) ncim_query_content_pane_t1_ParamLimits

0xc1fd,	// (0x00097413) ncim_query_content_pane_t2_ParamLimits

0x81b8,	// (0x000933ce) ncim_query_content_pane_t3_ParamLimits

0x81b8,	// (0x000933ce) ncim_query_content_pane_t3

0x81e0,	// (0x000933f6) ncim_query_content_pane_t4_ParamLimits

0x81e0,	// (0x000933f6) ncim_query_content_pane_t4

0x8208,	// (0x0009341e) ncim_query_content_pane_t5_ParamLimits

0x8208,	// (0x0009341e) ncim_query_content_pane_t5

0xc20f,	// (0x00097425) ncim_query_content_pane_t6_ParamLimits

0xc20f,	// (0x00097425) ncim_query_content_pane_t6

0xfb99,	// (0x0009adaf) ncim_query_content_pane_t_ParamLimits

0xc237,	// (0x0009744d) ncim_query_list_pane_ParamLimits

0xc249,	// (0x0009745f) ncim_query_popup_pane_ParamLimits

0xc25d,	// (0x00097473) wait_bar_pane_cp04

0xd964,	// (0x00098b7a) input_focus_pane_cp011

0xc265,	// (0x0009747b) ncim_query_popup_pane_t1

0xc273,	// (0x00097489) ncim_list_query_list_pane_ParamLimits

0xc273,	// (0x00097489) ncim_list_query_list_pane

0xd964,	// (0x00098b7a) bg_button_pane_cp027

0xc286,	// (0x0009749c) ncim_query_button_pane_g1

0xd964,	// (0x00098b7a) list_highlight_pane_cp012

0xc290,	// (0x000974a6) ncim_list_query_list_pane_g1

0xc298,	// (0x000974ae) ncim_list_query_list_pane_t1

0xd7b4,	// (0x000989ca) cam4_indicators_pane_g3_ParamLimits

0xd7b4,	// (0x000989ca) cam4_indicators_pane_g3

0xd82f,	// (0x00098a45) vid4_indicators_pane_g5_ParamLimits

0xd82f,	// (0x00098a45) vid4_indicators_pane_g5

0xd91e,	// (0x00098b34) vid4_progress_pane_g5_ParamLimits

0xd91e,	// (0x00098b34) vid4_progress_pane_g5

0x8098,	// (0x000932ae) main_ncimui_pane_g1

0x8101,	// (0x00093317) ncimui_group_query_pane_ParamLimits

0x8101,	// (0x00093317) ncimui_group_query_pane

0x8149,	// (0x0009335f) ncimui_list_pane_ParamLimits

0x8149,	// (0x0009335f) ncimui_list_pane

0x816f,	// (0x00093385) ncimui_text_pane_ParamLimits

0x816f,	// (0x00093385) ncimui_text_pane

0x8230,	// (0x00093446) ncimui_text_pane_t1_ParamLimits

0x8230,	// (0x00093446) ncimui_text_pane_t1

0xc2a6,	// (0x000974bc) ncimui_list_single_graphic_pane_ParamLimits

0xc2a6,	// (0x000974bc) ncimui_list_single_graphic_pane

0x824d,	// (0x00093463) ncimui_query_pane_ParamLimits

0x824d,	// (0x00093463) ncimui_query_pane

0xd964,	// (0x00098b7a) list_highlight_pane_cp013

0xc2b6,	// (0x000974cc) ncim_list_query_list_pane_t1_copy1

0xc2c4,	// (0x000974da) ncim_list_single_graphic_pane_g1

0x8260,	// (0x00093476) ncim_query_button_pane_cp01

0x826c,	// (0x00093482) ncim_query_entry_pane_ParamLimits

0x826c,	// (0x00093482) ncim_query_entry_pane

0x827f,	// (0x00093495) ncimui_query_pane_g1

0x828b,	// (0x000934a1) ncimui_query_pane_t1_ParamLimits

0x828b,	// (0x000934a1) ncimui_query_pane_t1

0x4634,	// (0x0008f84a) input_focus_pane_cp012

0xc2cc,	// (0x000974e2) ncim_query_entry_pane_t1

0xe0df,	// (0x000992f5) main_im_pane_ParamLimits

0x9df3,	// (0x00095009) main_mobtv_pane_ParamLimits

0x9df3,	// (0x00095009) main_mobtv_pane

0x6e86,	// (0x0009209c) main_cset6_slider_pane_g18_ParamLimits

0x6e86,	// (0x0009209c) main_cset6_slider_pane_g18

0x7e54,	// (0x0009306a) main_cset6_slider_pane_g19_ParamLimits

0x7e54,	// (0x0009306a) main_cset6_slider_pane_g19

0xc2de,	// (0x000974f4) bg_main_mobtv_pane_ParamLimits

0xc2de,	// (0x000974f4) bg_main_mobtv_pane

0x82a4,	// (0x000934ba) main_mobtv_info_pane

0x82ad,	// (0x000934c3) main_mobtv_loading_pane_ParamLimits

0x82ad,	// (0x000934c3) main_mobtv_loading_pane

0xc2ec,	// (0x00097502) main_mobtv_pg_channel_list_pane

0xc2f6,	// (0x0009750c) main_mobtv_pg_hdr_pane

0x82ba,	// (0x000934d0) main_mobtv_programe_curr_pane_ParamLimits

0x82ba,	// (0x000934d0) main_mobtv_programe_curr_pane

0x82c7,	// (0x000934dd) main_mobtv_programe_next_pane_ParamLimits

0x82c7,	// (0x000934dd) main_mobtv_programe_next_pane

0xc2ff,	// (0x00097515) popup_mobtv_noti_window

0xac6c,	// (0x00095e82) main_tv_pg_hdr_pane_g1

0xc307,	// (0x0009751d) main_tv_pg_hdr_pane_g2

0xc30f,	// (0x00097525) main_tv_pg_hdr_pane_g3

0xc317,	// (0x0009752d) main_tv_pg_hdr_pane_g4

0xc31f,	// (0x00097535) main_tv_pg_hdr_pane_g5

0xc327,	// (0x0009753d) main_tv_pg_hdr_pane_g6

0xc32f,	// (0x00097545) main_tv_pg_hdr_pane_g7

0xc337,	// (0x0009754d) main_tv_pg_hdr_pane_g8

0xc33f,	// (0x00097555) main_tv_pg_hdr_pane_g9

0xc347,	// (0x0009755d) main_tv_pg_hdr_pane_g10

0xc351,	// (0x00097567) main_tv_pg_hdr_pane_g11

0x000a,

0xfba6,	// (0x0009adbc) main_tv_pg_hdr_pane_g

0xc35b,	// (0x00097571) main_tv_pg_hdr_pane_t1

0xc369,	// (0x0009757f) main_tv_pg_hdr_pane_t2

0xc377,	// (0x0009758d) main_tv_pg_hdr_pane_t3

0xc385,	// (0x0009759b) main_tv_pg_hdr_pane_t4

0xc393,	// (0x000975a9) main_tv_pg_hdr_pane_t5

0x0004,

0xfbbd,	// (0x0009add3) main_tv_pg_hdr_pane_t

0xc3a1,	// (0x000975b7) single_mobtv_pg_channel_pane_ParamLimits

0xc3a1,	// (0x000975b7) single_mobtv_pg_channel_pane

0xc3b3,	// (0x000975c9) single_mobtv_pg_channel_table_pane

0xc3bc,	// (0x000975d2) single_mobtv_pg_channel_thumb_pane

0xc3c5,	// (0x000975db) single_tv_pg_channel_pane_g1

0xc3ce,	// (0x000975e4) single_tv_pg_channel_pane_g2

0x0001,

0xfbc8,	// (0x0009adde) single_tv_pg_channel_pane_g

0xae9b,	// (0x000960b1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xae9b,	// (0x000960b1) bg_single_mobtv_pg_channel_thumb_pane

0xc3d7,	// (0x000975ed) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc3d7,	// (0x000975ed) single_mobtv_pg_channel_thumb_pane_g1

0xc3e5,	// (0x000975fb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc3e5,	// (0x000975fb) single_mobtv_pg_channel_thumb_pane_g2

0xc3f1,	// (0x00097607) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc3f1,	// (0x00097607) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbcd,	// (0x0009ade3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbcd,	// (0x0009ade3) single_mobtv_pg_channel_thumb_pane_g

0xc3fd,	// (0x00097613) single_mobtv_pg_channel_thumb_pane_t1

0xc40b,	// (0x00097621) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbd4,	// (0x0009adea) single_mobtv_pg_channel_thumb_pane_t

0xac6c,	// (0x00095e82) bg_single_mobtv_pg_channel_table_pane_g1

0xac6c,	// (0x00095e82) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf686,	// (0x0009a89c) bg_single_mobtv_pg_channel_table_pane_g

0xc419,	// (0x0009762f) single_mobtv_pg_channel_table_pane_t1

0xc427,	// (0x0009763d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbd9,	// (0x0009adef) single_mobtv_pg_channel_table_pane_t

0x82dc,	// (0x000934f2) main_mobtv_info_pane_g1_ParamLimits

0x82dc,	// (0x000934f2) main_mobtv_info_pane_g1

0x82f8,	// (0x0009350e) main_mobtv_info_pane_t1_ParamLimits

0x82f8,	// (0x0009350e) main_mobtv_info_pane_t1

0x835e,	// (0x00093574) main_mobtv_info_pane_t2_ParamLimits

0x835e,	// (0x00093574) main_mobtv_info_pane_t2

0x0002,

0xfbe3,	// (0x0009adf9) main_mobtv_info_pane_t_ParamLimits

0xfbe3,	// (0x0009adf9) main_mobtv_info_pane_t

0x83e1,	// (0x000935f7) wait_bar_pane_cp05

0x83f1,	// (0x00093607) main_mobtv_loading_pane_g1_ParamLimits

0x83f1,	// (0x00093607) main_mobtv_loading_pane_g1

0x8402,	// (0x00093618) main_mobtv_loading_pane_g2_ParamLimits

0x8402,	// (0x00093618) main_mobtv_loading_pane_g2

0x840e,	// (0x00093624) main_mobtv_loading_pane_g3_ParamLimits

0x840e,	// (0x00093624) main_mobtv_loading_pane_g3

0x0002,

0xfbea,	// (0x0009ae00) main_mobtv_loading_pane_g_ParamLimits

0xfbea,	// (0x0009ae00) main_mobtv_loading_pane_g

0xc435,	// (0x0009764b) main_mobtv_loading_pane_t1_ParamLimits

0xc435,	// (0x0009764b) main_mobtv_loading_pane_t1

0xc44d,	// (0x00097663) main_mobtv_loading_pane_t2_ParamLimits

0xc44d,	// (0x00097663) main_mobtv_loading_pane_t2

0x0001,

0xfbf1,	// (0x0009ae07) main_mobtv_loading_pane_t_ParamLimits

0xfbf1,	// (0x0009ae07) main_mobtv_loading_pane_t

0x841f,	// (0x00093635) wait_bar_pane_cp06_ParamLimits

0x841f,	// (0x00093635) wait_bar_pane_cp06

0xc471,	// (0x00097687) main_mobtv_programe_curr_pane_t1

0xc47f,	// (0x00097695) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbf6,	// (0x0009ae0c) main_mobtv_programe_curr_pane_t

0xc48d,	// (0x000976a3) main_mobtv_programe_next_pane_t1

0xc49b,	// (0x000976b1) main_mobtv_programe_next_pane_t2

0xc4a9,	// (0x000976bf) main_mobtv_programe_next_pane_t3

0x0002,

0xfbfb,	// (0x0009ae11) main_mobtv_programe_next_pane_t

0xd964,	// (0x00098b7a) bg_popup_mobtv_noti_window_pane

0xc4b7,	// (0x000976cd) popup_mobtv_noti_window_g1

0xc4bf,	// (0x000976d5) popup_mobtv_noti_window_t1

0xc4cd,	// (0x000976e3) popup_mobtv_noti_window_t2

0x0001,

0xfc02,	// (0x0009ae18) popup_mobtv_noti_window_t

0xac6c,	// (0x00095e82) bg_popup_mobtv_noti_window_pane_g1

0x9e01,	// (0x00095017) sc_clock_pane

0x9e01,	// (0x00095017) main_fs_bigclock_pane

0x7aa9,	// (0x00092cbf) blid2_tripm_pane_t4_ParamLimits

0x7aa9,	// (0x00092cbf) blid2_tripm_pane_t4

0x842e,	// (0x00093644) sc_clock_pane_g1_ParamLimits

0x842e,	// (0x00093644) sc_clock_pane_g1

0x8440,	// (0x00093656) sc_clock_pane_t1_ParamLimits

0x8440,	// (0x00093656) sc_clock_pane_t1

0x8462,	// (0x00093678) sc_clock_pane_t2_ParamLimits

0x8462,	// (0x00093678) sc_clock_pane_t2

0x8478,	// (0x0009368e) sc_clock_pane_t3_ParamLimits

0x8478,	// (0x0009368e) sc_clock_pane_t3

0x0004,

0xfc07,	// (0x0009ae1d) sc_clock_pane_t_ParamLimits

0xfc07,	// (0x0009ae1d) sc_clock_pane_t

0x932b,	// (0x00094541) main_fs_bigclock_indicator_pane_ParamLimits

0x932b,	// (0x00094541) main_fs_bigclock_indicator_pane

0x850e,	// (0x00093724) main_fs_bigclock_pane_g1_ParamLimits

0x850e,	// (0x00093724) main_fs_bigclock_pane_g1

0x9337,	// (0x0009454d) main_fs_bigclock_pane_t1_ParamLimits

0x9337,	// (0x0009454d) main_fs_bigclock_pane_t1

0x9349,	// (0x0009455f) main_fs_bigclock_pane_t2_ParamLimits

0x9349,	// (0x0009455f) main_fs_bigclock_pane_t2

0x935b,	// (0x00094571) main_fs_bigclock_pane_t3_ParamLimits

0x935b,	// (0x00094571) main_fs_bigclock_pane_t3

0x0002,

0xfe11,	// (0x0009b027) main_fs_bigclock_pane_t_ParamLimits

0xfe11,	// (0x0009b027) main_fs_bigclock_pane_t

0xd0eb,	// (0x00098301) main_fs_bigclock_indicator_pane_g1

0xc1df,	// (0x000973f5) ncim_query_content_pane_g2_ParamLimits

0xc1df,	// (0x000973f5) ncim_query_content_pane_g2

0x0001,

0xfb94,	// (0x0009adaa) ncim_query_content_pane_g_ParamLimits

0xfb94,	// (0x0009adaa) ncim_query_content_pane_g

0x848f,	// (0x000936a5) sc_clock_pane_t4_ParamLimits

0x848f,	// (0x000936a5) sc_clock_pane_t4

0x9df3,	// (0x00095009) main_radioblah_pane

0xb5fd,	// (0x00096813) cell_call4_button_pane_t1_copy1_ParamLimits

0xb5fd,	// (0x00096813) cell_call4_button_pane_t1_copy1

0x80b0,	// (0x000932c6) main_ncimui_pane_t1_ParamLimits

0x80b0,	// (0x000932c6) main_ncimui_pane_t1

0x80ca,	// (0x000932e0) main_ncimui_pane_t2_ParamLimits

0x80ca,	// (0x000932e0) main_ncimui_pane_t2

0x0002,

0xfb8d,	// (0x0009ada3) main_ncimui_pane_t_ParamLimits

0xfb8d,	// (0x0009ada3) main_ncimui_pane_t

0xc60e,	// (0x00097824) main_radioblah_anim_pane_ParamLimits

0xc60e,	// (0x00097824) main_radioblah_anim_pane

0xc61f,	// (0x00097835) main_radioblah_info_pane_ParamLimits

0xc61f,	// (0x00097835) main_radioblah_info_pane

0xc633,	// (0x00097849) main_radioblah_pane_t1_ParamLimits

0xc633,	// (0x00097849) main_radioblah_pane_t1

0xc64f,	// (0x00097865) main_radioblah_pane_t2_ParamLimits

0xc64f,	// (0x00097865) main_radioblah_pane_t2

0x0003,

0xfc28,	// (0x0009ae3e) main_radioblah_pane_t_ParamLimits

0xfc28,	// (0x0009ae3e) main_radioblah_pane_t

0x855b,	// (0x00093771) main_radioblah_rocker_ctrl_pane_ParamLimits

0x855b,	// (0x00093771) main_radioblah_rocker_ctrl_pane

0xc697,	// (0x000978ad) main_radioblah_info_pane_t1_ParamLimits

0xc697,	// (0x000978ad) main_radioblah_info_pane_t1

0x85af,	// (0x000937c5) main_radioblah_info_pane_t2_ParamLimits

0x85af,	// (0x000937c5) main_radioblah_info_pane_t2

0x0003,

0xfc31,	// (0x0009ae47) main_radioblah_info_pane_t_ParamLimits

0xfc31,	// (0x0009ae47) main_radioblah_info_pane_t

0xac6c,	// (0x00095e82) main_radioblah_rocker_ctrl_pane_g1

0x865b,	// (0x00093871) main_radioblah_rocker_ctrl_pane_g2

0x8663,	// (0x00093879) main_radioblah_rocker_ctrl_pane_g3

0x866b,	// (0x00093881) main_radioblah_rocker_ctrl_pane_g4

0x8673,	// (0x00093889) main_radioblah_rocker_ctrl_pane_g5

0x867b,	// (0x00093891) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc3a,	// (0x0009ae50) main_radioblah_rocker_ctrl_pane_g

0x806c,	// (0x00093282) main_cset_text2_pane_t1_copy1_ParamLimits

0xd779,	// (0x0009898f) cam4_image_uncrop_qvga_pane

0xd7da,	// (0x000989f0) vid4_image_uncrop_qcif_pane

0xd958,	// (0x00098b6e) cam6_image_uncrop_qvga_pane_ParamLimits

0xd958,	// (0x00098b6e) cam6_image_uncrop_qvga_pane

0xbecd,	// (0x000970e3) vid6_image_uncrop_qcif_pane_ParamLimits

0xbecd,	// (0x000970e3) vid6_image_uncrop_qcif_pane

0xd964,	// (0x00098b7a) bg_popup_preview_window_pane_cp03

0xc191,	// (0x000973a7) list_cset_text2_pane

0xc199,	// (0x000973af) main_cset6_text2_pane_g1

0xc1a1,	// (0x000973b7) main_cset6_text2_pane_t1

0xc6d1,	// (0x000978e7) list_cset_text2_pane_t1_ParamLimits

0xc6d1,	// (0x000978e7) list_cset_text2_pane_t1

0x9df3,	// (0x00095009) main_radioblah_pane_ParamLimits

0x83cf,	// (0x000935e5) main_mobtv_info_pane_t3_ParamLimits

0x83cf,	// (0x000935e5) main_mobtv_info_pane_t3

0x8549,	// (0x0009375f) main_radioblah_pane_g1

0x8583,	// (0x00093799) main_radioblah_info_pane_g1

0x8600,	// (0x00093816) main_radioblah_info_pane_t3_ParamLimits

0x8600,	// (0x00093816) main_radioblah_info_pane_t3

0x2ba1,	// (0x0008ddb7) highlight_cell_cale_month_pane_ParamLimits

0x2ba1,	// (0x0008ddb7) highlight_cell_cale_month_pane

0x9e01,	// (0x00095017) main_phob_fisheye_pane

0xaf9e,	// (0x000961b4) scroll_pane_cp0031_ParamLimits

0xaf9e,	// (0x000961b4) scroll_pane_cp0031

0xbfd7,	// (0x000971ed) wait_bar_pane_cp08_ParamLimits

0x7dbb,	// (0x00092fd1) cset_list_set_pane_copy1_ParamLimits

0xc6e8,	// (0x000978fe) highlight_cell_cale_month_pane_g1

0x8683,	// (0x00093899) highlight_cell_cale_month_pane_t1

0xbc50,	// (0x00096e66) list_gen_pane_cp01

0xb7f3,	// (0x00096a09) scroll_pane_01

0x8691,	// (0x000938a7) list_single_double_fisheye_pane

0x869a,	// (0x000938b0) list_double_fisheye_pane_g1_ParamLimits

0x869a,	// (0x000938b0) list_double_fisheye_pane_g1

0x86a6,	// (0x000938bc) list_double_fisheye_pane_g2_ParamLimits

0x86a6,	// (0x000938bc) list_double_fisheye_pane_g2

0x86ba,	// (0x000938d0) list_double_fisheye_pane_g3_ParamLimits

0x86ba,	// (0x000938d0) list_double_fisheye_pane_g3

0x0004,

0xfc47,	// (0x0009ae5d) list_double_fisheye_pane_g_ParamLimits

0xfc47,	// (0x0009ae5d) list_double_fisheye_pane_g

0x86e3,	// (0x000938f9) list_double_fisheye_pane_t1_ParamLimits

0x86e3,	// (0x000938f9) list_double_fisheye_pane_t1

0x86fe,	// (0x00093914) list_double_fisheye_pane_t2_ParamLimits

0x86fe,	// (0x00093914) list_double_fisheye_pane_t2

0x0001,

0xfc52,	// (0x0009ae68) list_double_fisheye_pane_t_ParamLimits

0xfc52,	// (0x0009ae68) list_double_fisheye_pane_t

0x9e01,	// (0x00095017) main_call5_pane

0x84b8,	// (0x000936ce) sc_swipe_pane_ParamLimits

0x84b8,	// (0x000936ce) sc_swipe_pane

0x8731,	// (0x00093947) call5_image_pane_ParamLimits

0x8731,	// (0x00093947) call5_image_pane

0x8746,	// (0x0009395c) call5_swipe_1_pane_ParamLimits

0x8746,	// (0x0009395c) call5_swipe_1_pane

0x8757,	// (0x0009396d) call5_swipe_2_pane_ParamLimits

0x8757,	// (0x0009396d) call5_swipe_2_pane

0x877c,	// (0x00093992) popup_call5_audio_first_window_ParamLimits

0x877c,	// (0x00093992) popup_call5_audio_first_window

0xae9b,	// (0x000960b1) call5_swipe_1_pane_g1_ParamLimits

0xae9b,	// (0x000960b1) call5_swipe_1_pane_g1

0xc6f0,	// (0x00097906) call5_swipe_1_pane_g2_ParamLimits

0xc6f0,	// (0x00097906) call5_swipe_1_pane_g2

0x0001,

0xfc57,	// (0x0009ae6d) call5_swipe_1_pane_g_ParamLimits

0xfc57,	// (0x0009ae6d) call5_swipe_1_pane_g

0xc6fc,	// (0x00097912) call5_swipe_1_pane_t1_ParamLimits

0xc6fc,	// (0x00097912) call5_swipe_1_pane_t1

0xae9b,	// (0x000960b1) call5_swipe_2_pane_g1_ParamLimits

0xae9b,	// (0x000960b1) call5_swipe_2_pane_g1

0xc711,	// (0x00097927) call5_swipe_2_pane_g2_ParamLimits

0xc711,	// (0x00097927) call5_swipe_2_pane_g2

0x0001,

0xfc5c,	// (0x0009ae72) call5_swipe_2_pane_g_ParamLimits

0xfc5c,	// (0x0009ae72) call5_swipe_2_pane_g

0xc71d,	// (0x00097933) call5_swipe_2_pane_t1_ParamLimits

0xc71d,	// (0x00097933) call5_swipe_2_pane_t1

0xc732,	// (0x00097948) sc_swipe_pane_g1_ParamLimits

0xc732,	// (0x00097948) sc_swipe_pane_g1

0xc73f,	// (0x00097955) sc_swipe_pane_g2_ParamLimits

0xc73f,	// (0x00097955) sc_swipe_pane_g2

0x0001,

0xfc61,	// (0x0009ae77) sc_swipe_pane_g_ParamLimits

0xfc61,	// (0x0009ae77) sc_swipe_pane_g

0xc74b,	// (0x00097961) sc_swipe_pane_t1_ParamLimits

0xc74b,	// (0x00097961) sc_swipe_pane_t1

0x9e01,	// (0x00095017) main_cmail_launcher_pane

0x878b,	// (0x000939a1) aid_size_cell_cmail_l_ParamLimits

0x878b,	// (0x000939a1) aid_size_cell_cmail_l

0x87a4,	// (0x000939ba) grid_cmail_l_pane_ParamLimits

0x87a4,	// (0x000939ba) grid_cmail_l_pane

0x87b8,	// (0x000939ce) cell_cmail_l_pane_ParamLimits

0x87b8,	// (0x000939ce) cell_cmail_l_pane

0x87da,	// (0x000939f0) cell_cmail_l_pane_g1_ParamLimits

0x87da,	// (0x000939f0) cell_cmail_l_pane_g1

0x87eb,	// (0x00093a01) cell_cmail_l_pane_t1_ParamLimits

0x87eb,	// (0x00093a01) cell_cmail_l_pane_t1

0xc760,	// (0x00097976) cell_cmail_l_pane_t2_ParamLimits

0xc760,	// (0x00097976) cell_cmail_l_pane_t2

0x0001,

0xfc66,	// (0x0009ae7c) cell_cmail_l_pane_t_ParamLimits

0xfc66,	// (0x0009ae7c) cell_cmail_l_pane_t

0x4634,	// (0x0008f84a) grid_highlight_pane_cp018_ParamLimits

0x4634,	// (0x0008f84a) grid_highlight_pane_cp018

0x0e98,	// (0x0008c0ae) main2_pane_ParamLimits

0x0e98,	// (0x0008c0ae) main2_pane

0xe18a,	// (0x000993a0) popup_sp_fs_action_menu_bg_pane_g1

0xe192,	// (0x000993a8) popup_sp_fs_action_menu_bg_pane_g2

0xe19a,	// (0x000993b0) popup_sp_fs_action_menu_bg_pane_g3

0xe1a2,	// (0x000993b8) popup_sp_fs_action_menu_bg_pane_g4

0xe1aa,	// (0x000993c0) popup_sp_fs_action_menu_bg_pane_g5

0xe1b2,	// (0x000993c8) popup_sp_fs_action_menu_bg_pane_g6

0xe1ba,	// (0x000993d0) popup_sp_fs_action_menu_bg_pane_g7

0xe1c2,	// (0x000993d8) popup_sp_fs_action_menu_bg_pane_g8

0xe1ca,	// (0x000993e0) popup_sp_fs_action_menu_bg_pane_g9

0xe1d2,	// (0x000993e8) popup_sp_fs_action_menu_bg_pane_g10

0xe1d2,	// (0x000993e8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009a3a0) popup_sp_fs_action_menu_bg_pane_g

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t3_g3_g1

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t3_g3_g2

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009a44e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009a44e) list_medium_line_x2_t3_g3_g

0x1d93,	// (0x0008cfa9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d93,	// (0x0008cfa9) list_medium_line_x2_t3_g3_t1

0x1da8,	// (0x0008cfbe) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1da8,	// (0x0008cfbe) list_medium_line_x2_t3_g3_t2

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009a455) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009a455) list_medium_line_x2_t3_g3_t

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t3_g2_g1

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009a45c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009a45c) list_medium_line_x2_t3_g2_g

0x1dcf,	// (0x0008cfe5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dcf,	// (0x0008cfe5) list_medium_line_x2_t3_g2_t1

0x1de5,	// (0x0008cffb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1de5,	// (0x0008cffb) list_medium_line_x2_t3_g2_t2

0x1df7,	// (0x0008d00d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1df7,	// (0x0008d00d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009a461) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009a461) list_medium_line_x2_t3_g2_t

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t4_g4_g1

0x1e14,	// (0x0008d02a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e14,	// (0x0008d02a) list_medium_line_x2_t4_g4_g2

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t4_g4_g3

0x1e20,	// (0x0008d036) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e20,	// (0x0008d036) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009a468) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009a468) list_medium_line_x2_t4_g4_g

0x1e2c,	// (0x0008d042) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e2c,	// (0x0008d042) list_medium_line_x2_t4_g4_t1

0x1e46,	// (0x0008d05c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e46,	// (0x0008d05c) list_medium_line_x2_t4_g4_t2

0x1e5c,	// (0x0008d072) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e5c,	// (0x0008d072) list_medium_line_x2_t4_g4_t3

0x1e71,	// (0x0008d087) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e71,	// (0x0008d087) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009a471) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009a471) list_medium_line_x2_t4_g4_t

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t2_g4_g1

0x1e14,	// (0x0008d02a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e14,	// (0x0008d02a) list_medium_line_x2_t2_g4_g2

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t2_g4_g3

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009a4d8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009a4d8) list_medium_line_x2_t2_g4_g

0x2bc7,	// (0x0008dddd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2bc7,	// (0x0008dddd) list_medium_line_x2_t2_g4_t1

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009a4e1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009a4e1) list_medium_line_x2_t2_g4_t

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t2_g3_g1

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t2_g3_g2

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0009a44e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0009a44e) list_medium_line_x2_t2_g3_g

0x2bdc,	// (0x0008ddf2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2bdc,	// (0x0008ddf2) list_medium_line_x2_t2_g3_t1

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0009a4e6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0009a4e6) list_medium_line_x2_t2_g3_t

0x2d0d,	// (0x0008df23) main_sp_fs_list_pane_ParamLimits

0x2d0d,	// (0x0008df23) main_sp_fs_list_pane

0x2d19,	// (0x0008df2f) sp_fs_scroll_pane_ParamLimits

0x2d19,	// (0x0008df2f) sp_fs_scroll_pane

0x2d25,	// (0x0008df3b) list_medium_line_x2_t3_t1

0x2d35,	// (0x0008df4b) list_medium_line_x2_t3_t2

0x2d43,	// (0x0008df59) list_medium_line_x2_t3_t3

0x0002,

0xf2f5,	// (0x0009a50b) list_medium_line_x2_t3_t

0x2d51,	// (0x0008df67) list_medium_line_x3_t4_t1

0x2d61,	// (0x0008df77) list_medium_line_x3_t4_t2

0x2d6f,	// (0x0008df85) list_medium_line_x3_t4_t3

0x2d43,	// (0x0008df59) list_medium_line_x3_t4_t4

0x0003,

0xf2fc,	// (0x0009a512) list_medium_line_x3_t4_t

0x2d7d,	// (0x0008df93) list_medium_line_x4_t5_t1

0x2d8d,	// (0x0008dfa3) list_medium_line_x4_t5_t2

0x2d6f,	// (0x0008df85) list_medium_line_x4_t5_t3

0x2d9b,	// (0x0008dfb1) list_medium_line_x4_t5_t4

0x2d43,	// (0x0008df59) list_medium_line_x4_t5_t5

0x0004,

0xf305,	// (0x0009a51b) list_medium_line_x4_t5_t

0x1d6f,	// (0x0008cf85) list_medium_line_t4_g4_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_t4_g4_g1

0x1e20,	// (0x0008d036) list_medium_line_t4_g4_g2_ParamLimits

0x1e20,	// (0x0008d036) list_medium_line_t4_g4_g2

0x2da9,	// (0x0008dfbf) list_medium_line_t4_g4_g3_ParamLimits

0x2da9,	// (0x0008dfbf) list_medium_line_t4_g4_g3

0x1d87,	// (0x0008cf9d) list_medium_line_t4_g4_g4_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_t4_g4_g4

0x0003,

0xf310,	// (0x0009a526) list_medium_line_t4_g4_g_ParamLimits

0xf310,	// (0x0009a526) list_medium_line_t4_g4_g

0x2db5,	// (0x0008dfcb) list_medium_line_t4_g4_t1_ParamLimits

0x2db5,	// (0x0008dfcb) list_medium_line_t4_g4_t1

0x2dca,	// (0x0008dfe0) list_medium_line_t4_g4_t2_ParamLimits

0x2dca,	// (0x0008dfe0) list_medium_line_t4_g4_t2

0x2ddf,	// (0x0008dff5) list_medium_line_t4_g4_t3_ParamLimits

0x2ddf,	// (0x0008dff5) list_medium_line_t4_g4_t3

0x1dba,	// (0x0008cfd0) list_medium_line_t4_g4_t4_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_t4_g4_t4

0x0003,

0xf319,	// (0x0009a52f) list_medium_line_t4_g4_t_ParamLimits

0xf319,	// (0x0009a52f) list_medium_line_t4_g4_t

0x2ec3,	// (0x0008e0d9) chi_dic_find_pane_g1

0x4656,	// (0x0008f86c) main_tport_pane

0x71a1,	// (0x000923b7) list_medium_line_plain_t1

0x7249,	// (0x0009245f) list_medium_line_t2_g2_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_t2_g2_g1

0x7255,	// (0x0009246b) list_medium_line_t2_g2_g2_ParamLimits

0x7255,	// (0x0009246b) list_medium_line_t2_g2_g2

0x0001,

0xf99e,	// (0x0009abb4) list_medium_line_t2_g2_g_ParamLimits

0xf99e,	// (0x0009abb4) list_medium_line_t2_g2_g

0x7261,	// (0x00092477) list_medium_line_t2_g2_t1_ParamLimits

0x7261,	// (0x00092477) list_medium_line_t2_g2_t1

0x727b,	// (0x00092491) list_medium_line_t2_g2_t2_ParamLimits

0x727b,	// (0x00092491) list_medium_line_t2_g2_t2

0x0001,

0xf9a3,	// (0x0009abb9) list_medium_line_t2_g2_t_ParamLimits

0xf9a3,	// (0x0009abb9) list_medium_line_t2_g2_t

0xbc59,	// (0x00096e6f) aid_sp_fs_list_icon_a_sm

0xbc61,	// (0x00096e77) aid_sp_fs_list_icon_d

0xbc69,	// (0x00096e7f) aid_sp_fs_text_primary

0xbc72,	// (0x00096e88) aid_sp_fs_text_secondary

0x788c,	// (0x00092aa2) list_medium_line

0x788c,	// (0x00092aa2) list_medium_line_g2

0x788c,	// (0x00092aa2) list_medium_line_g3

0x788c,	// (0x00092aa2) list_medium_line_plain

0x788c,	// (0x00092aa2) list_medium_line_plain_t2

0x788c,	// (0x00092aa2) list_medium_line_plain_t3

0x788c,	// (0x00092aa2) list_medium_line_right_icon

0x788c,	// (0x00092aa2) list_medium_line_right_iconx2

0x788c,	// (0x00092aa2) list_medium_line_t2

0x788c,	// (0x00092aa2) list_medium_line_t2_g2

0x788c,	// (0x00092aa2) list_medium_line_t2_g3

0x788c,	// (0x00092aa2) list_medium_line_t2_right_icon

0x788c,	// (0x00092aa2) list_medium_line_t2_right_iconx2

0x788c,	// (0x00092aa2) list_medium_line_t3

0x788c,	// (0x00092aa2) list_medium_line_t3_g2

0x788c,	// (0x00092aa2) list_medium_line_t3_g3

0x788c,	// (0x00092aa2) list_medium_line_t3_right_iconx2

0x7895,	// (0x00092aab) list_medium_line_t4_g4

0x788c,	// (0x00092aa2) list_medium_line_x2

0x788c,	// (0x00092aa2) list_medium_line_x2_t2_g2

0x788c,	// (0x00092aa2) list_medium_line_x2_t2_g3

0x788c,	// (0x00092aa2) list_medium_line_x2_t2_g4

0x788c,	// (0x00092aa2) list_medium_line_x2_t3

0x788c,	// (0x00092aa2) list_medium_line_x2_t3_g2

0x788c,	// (0x00092aa2) list_medium_line_x2_t3_g3

0x788c,	// (0x00092aa2) list_medium_line_x2_t3_g4

0x788c,	// (0x00092aa2) list_medium_line_x2_t4_g2

0x788c,	// (0x00092aa2) list_medium_line_x2_t4_g4

0x789e,	// (0x00092ab4) list_medium_line_x3

0x789e,	// (0x00092ab4) list_medium_line_x3_t4

0x789e,	// (0x00092ab4) list_medium_line_x3_t4_g4

0x7895,	// (0x00092aab) list_medium_line_x4_t4

0x7895,	// (0x00092aab) list_medium_line_x4_t4_g7

0x7895,	// (0x00092aab) list_medium_line_x4_t5

0x78a7,	// (0x00092abd) list_single_fs_dyc_pane_ParamLimits

0x78a7,	// (0x00092abd) list_single_fs_dyc_pane

0x1d6f,	// (0x0008cf85) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x4_t4_g7_g1

0x7f9c,	// (0x000931b2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7f9c,	// (0x000931b2) list_medium_line_x4_t4_g7_g2

0x7fa8,	// (0x000931be) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7fa8,	// (0x000931be) list_medium_line_x4_t4_g7_g3

0x7fb7,	// (0x000931cd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7fb7,	// (0x000931cd) list_medium_line_x4_t4_g7_g4

0x7fc3,	// (0x000931d9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7fc3,	// (0x000931d9) list_medium_line_x4_t4_g7_g5

0x7fd2,	// (0x000931e8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7fd2,	// (0x000931e8) list_medium_line_x4_t4_g7_g6

0x7fe1,	// (0x000931f7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7fe1,	// (0x000931f7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb6e,	// (0x0009ad84) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb6e,	// (0x0009ad84) list_medium_line_x4_t4_g7_g

0x7fed,	// (0x00093203) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7fed,	// (0x00093203) list_medium_line_x4_t4_g7_t1

0x8002,	// (0x00093218) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8002,	// (0x00093218) list_medium_line_x4_t4_g7_t2

0x8017,	// (0x0009322d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8017,	// (0x0009322d) list_medium_line_x4_t4_g7_t3

0x802c,	// (0x00093242) list_medium_line_x4_t4_g7_t4_ParamLimits

0x802c,	// (0x00093242) list_medium_line_x4_t4_g7_t4

0x803e,	// (0x00093254) list_medium_line_x4_t4_g7_t5_ParamLimits

0x803e,	// (0x00093254) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb7d,	// (0x0009ad93) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb7d,	// (0x0009ad93) list_medium_line_x4_t4_g7_t

0x8050,	// (0x00093266) list_single_dyc_row_pane_ParamLimits

0x8050,	// (0x00093266) list_single_dyc_row_pane

0x8720,	// (0x00093936) call5_gesture_pane_ParamLimits

0x8720,	// (0x00093936) call5_gesture_pane

0x8768,	// (0x0009397e) call5_windows_pane_ParamLimits

0x8768,	// (0x0009397e) call5_windows_pane

0x8801,	// (0x00093a17) call5_swipe_1_pane_cp_ParamLimits

0x8801,	// (0x00093a17) call5_swipe_1_pane_cp

0x880d,	// (0x00093a23) call5_swipe_2_pane_cp_ParamLimits

0x880d,	// (0x00093a23) call5_swipe_2_pane_cp

0xe290,	// (0x000994a6) call5_image_pane_cp

0x8819,	// (0x00093a2f) popup_call5_audio_first_window_cp_ParamLimits

0x8819,	// (0x00093a2f) popup_call5_audio_first_window_cp

0xc732,	// (0x00097948) call5_swipe_1_pane_g1_cp_ParamLimits

0xc732,	// (0x00097948) call5_swipe_1_pane_g1_cp

0xc772,	// (0x00097988) call5_swipe_1_pane_g2_cp

0xc74b,	// (0x00097961) call5_swipe_1_pane_t1_cp_ParamLimits

0xc74b,	// (0x00097961) call5_swipe_1_pane_t1_cp

0xc732,	// (0x00097948) call5_swipe_2_pane_g1_cp_ParamLimits

0xc732,	// (0x00097948) call5_swipe_2_pane_g1_cp

0xc77a,	// (0x00097990) call5_swipe_2_pane_g2_cp

0xc782,	// (0x00097998) call5_swipe_2_pane_t1_cp_ParamLimits

0xc782,	// (0x00097998) call5_swipe_2_pane_t1_cp

0x4634,	// (0x0008f84a) main_sp_fs_email_pane

0xc797,	// (0x000979ad) main_sp_fs_listscroll_pane_te

0x8825,	// (0x00093a3b) popup_sp_fs_action_menu_pane_ParamLimits

0x8825,	// (0x00093a3b) popup_sp_fs_action_menu_pane

0xac6c,	// (0x00095e82) bg_sp_fs_ctrlbar_pane_g1

0xaf4f,	// (0x00096165) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xaf61,	// (0x00096177) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xaf58,	// (0x0009616e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xac6c,	// (0x00095e82) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc6b,	// (0x0009ae81) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xaa59,	// (0x00095c6f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xaa59,	// (0x00095c6f) bg_sp_fs_ctrlbar_ddmenu_pane

0xc7a0,	// (0x000979b6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc7a0,	// (0x000979b6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc7ac,	// (0x000979c2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc7ac,	// (0x000979c2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc74,	// (0x0009ae8a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc74,	// (0x0009ae8a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc7b8,	// (0x000979ce) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc7b8,	// (0x000979ce) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8857,	// (0x00093a6d) list_medium_line_t2_right_icon_g1

0x885f,	// (0x00093a75) list_medium_line_t2_right_icon_t1

0x886f,	// (0x00093a85) list_medium_line_t2_right_icon_t2

0x0001,

0xfc79,	// (0x0009ae8f) list_medium_line_t2_right_icon_t

0xa76a,	// (0x00095980) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa76a,	// (0x00095980) bg_sp_fs_ctrlbar_pane

0x88c3,	// (0x00093ad9) main_sp_fs_ctrlbar_button_pane_cp01

0x88cb,	// (0x00093ae1) main_sp_fs_ctrlbar_ddmenu_pane

0xc80a,	// (0x00097a20) main_sp_fs_ctrlbar_pane_g1

0xc816,	// (0x00097a2c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc7e,	// (0x0009ae94) main_sp_fs_ctrlbar_pane_g

0xc822,	// (0x00097a38) main_sp_fs_ctrlbar_pane_t1

0x88d5,	// (0x00093aeb) main_sp_fs_ctrlbar_pane

0x88f9,	// (0x00093b0f) main_sp_fs_listscroll_pane_te_cp01

0x8919,	// (0x00093b2f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8919,	// (0x00093b2f) popup_sp_fs_action_menu_pane_cp01

0x4634,	// (0x0008f84a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4634,	// (0x0008f84a) bg_sp_fs_highlight_list_pane_cp01

0xc852,	// (0x00097a68) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc852,	// (0x00097a68) sp_fs_action_menu_list_gene_pane_g1

0xc861,	// (0x00097a77) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc861,	// (0x00097a77) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc88,	// (0x0009ae9e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc88,	// (0x0009ae9e) sp_fs_action_menu_list_gene_pane_g

0xc86e,	// (0x00097a84) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc86e,	// (0x00097a84) sp_fs_action_menu_list_gene_pane_t1

0xc886,	// (0x00097a9c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc886,	// (0x00097a9c) sp_fs_action_menu_list_gene_pane

0xc8a5,	// (0x00097abb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc8a5,	// (0x00097abb) popup_sp_fs_action_menu_bg_pane

0xc8b3,	// (0x00097ac9) sp_fs_action_menu_list_pane_ParamLimits

0xc8b3,	// (0x00097ac9) sp_fs_action_menu_list_pane

0xc8d3,	// (0x00097ae9) sp_fs_scroll_pane_cp01_ParamLimits

0xc8d3,	// (0x00097ae9) sp_fs_scroll_pane_cp01

0x8943,	// (0x00093b59) list_medium_line_plain_t2_t1

0x8953,	// (0x00093b69) list_medium_line_plain_t2_t2

0x0001,

0xfc8d,	// (0x0009aea3) list_medium_line_plain_t2_t

0x8961,	// (0x00093b77) list_medium_line_plain_t3_t1

0x8971,	// (0x00093b87) list_medium_line_plain_t3_t2

0x897f,	// (0x00093b95) list_medium_line_plain_t3_t3

0x0002,

0xfc92,	// (0x0009aea8) list_medium_line_plain_t3_t

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t2_g2_g1

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009a45c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009a45c) list_medium_line_x2_t2_g2_g

0x2db5,	// (0x0008dfcb) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2db5,	// (0x0008dfcb) list_medium_line_x2_t2_g2_t1

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc99,	// (0x0009aeaf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc99,	// (0x0009aeaf) list_medium_line_x2_t2_g2_t

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t4_g2_g1

0x898d,	// (0x00093ba3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x898d,	// (0x00093ba3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc9e,	// (0x0009aeb4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc9e,	// (0x0009aeb4) list_medium_line_x2_t4_g2_g

0x899e,	// (0x00093bb4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x899e,	// (0x00093bb4) list_medium_line_x2_t4_g2_t1

0x89b8,	// (0x00093bce) list_medium_line_x2_t4_g2_t2_ParamLimits

0x89b8,	// (0x00093bce) list_medium_line_x2_t4_g2_t2

0x89ce,	// (0x00093be4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x89ce,	// (0x00093be4) list_medium_line_x2_t4_g2_t3

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfca3,	// (0x0009aeb9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfca3,	// (0x0009aeb9) list_medium_line_x2_t4_g2_t

0x89e3,	// (0x00093bf9) list_medium_line_t3_right_iconx2_g1

0x8857,	// (0x00093a6d) list_medium_line_t3_right_iconx2_g2

0x89eb,	// (0x00093c01) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcac,	// (0x0009aec2) list_medium_line_t3_right_iconx2_g

0x89f3,	// (0x00093c09) list_medium_line_t3_right_iconx2_t1

0x8a03,	// (0x00093c19) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcb3,	// (0x0009aec9) list_medium_line_t3_right_iconx2_t

0x1d6f,	// (0x0008cf85) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x3_t4_g4_g1

0x1d7b,	// (0x0008cf91) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x3_t4_g4_g2

0x1e20,	// (0x0008d036) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e20,	// (0x0008d036) list_medium_line_x3_t4_g4_g3

0x8a11,	// (0x00093c27) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8a11,	// (0x00093c27) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcb8,	// (0x0009aece) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcb8,	// (0x0009aece) list_medium_line_x3_t4_g4_g

0x8a1d,	// (0x00093c33) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8a1d,	// (0x00093c33) list_medium_line_x3_t4_g4_t1

0x8a34,	// (0x00093c4a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8a34,	// (0x00093c4a) list_medium_line_x3_t4_g4_t2

0x2dca,	// (0x0008dfe0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2dca,	// (0x0008dfe0) list_medium_line_x3_t4_g4_t3

0x8a49,	// (0x00093c5f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8a49,	// (0x00093c5f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc1,	// (0x0009aed7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc1,	// (0x0009aed7) list_medium_line_x3_t4_g4_t

0x8a66,	// (0x00093c7c) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a66,	// (0x00093c7c) list_single_dyc_row_text_pane_t1

0x8a9d,	// (0x00093cb3) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a9d,	// (0x00093cb3) list_single_dyc_row_text_pane_t2

0xc8f9,	// (0x00097b0f) list_single_dyc_row_text_pane_t3_ParamLimits

0xc8f9,	// (0x00097b0f) list_single_dyc_row_text_pane_t3

0x0005,

0xfcca,	// (0x0009aee0) list_single_dyc_row_text_pane_t_ParamLimits

0xfcca,	// (0x0009aee0) list_single_dyc_row_text_pane_t

0xc91d,	// (0x00097b33) list_single_dyc_row_pane_g1_ParamLimits

0xc91d,	// (0x00097b33) list_single_dyc_row_pane_g1

0xc929,	// (0x00097b3f) list_single_dyc_row_pane_g2_ParamLimits

0xc929,	// (0x00097b3f) list_single_dyc_row_pane_g2

0xc935,	// (0x00097b4b) list_single_dyc_row_pane_g3_ParamLimits

0xc935,	// (0x00097b4b) list_single_dyc_row_pane_g3

0xc941,	// (0x00097b57) list_single_dyc_row_pane_g4_ParamLimits

0xc941,	// (0x00097b57) list_single_dyc_row_pane_g4

0x0003,

0xfcd7,	// (0x0009aeed) list_single_dyc_row_pane_g_ParamLimits

0xfcd7,	// (0x0009aeed) list_single_dyc_row_pane_g

0xc94d,	// (0x00097b63) list_single_dyc_row_text_pane_ParamLimits

0xc94d,	// (0x00097b63) list_single_dyc_row_text_pane

0xd964,	// (0x00098b7a) bg_sp_fs_scroll_pane

0xc96c,	// (0x00097b82) thumb_sp_fs_scroll_pane

0x7249,	// (0x0009245f) list_medium_line_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_g1

0x8bc0,	// (0x00093dd6) list_medium_line_t1_ParamLimits

0x8bc0,	// (0x00093dd6) list_medium_line_t1

0x1d6f,	// (0x0008cf85) list_medium_line_x2_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_g1

0x1d7b,	// (0x0008cf91) list_medium_line_x2_g2_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x2_g2

0x0001,

0xfce0,	// (0x0009aef6) list_medium_line_x2_g_ParamLimits

0xfce0,	// (0x0009aef6) list_medium_line_x2_g

0xc975,	// (0x00097b8b) list_medium_line_x2_t1_ParamLimits

0xc975,	// (0x00097b8b) list_medium_line_x2_t1

0x1d6f,	// (0x0008cf85) list_medium_line_x3_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x3_g1

0x1d7b,	// (0x0008cf91) list_medium_line_x3_g2_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x3_g2

0x0001,

0xfce0,	// (0x0009aef6) list_medium_line_x3_g_ParamLimits

0xfce0,	// (0x0009aef6) list_medium_line_x3_g

0xc975,	// (0x00097b8b) list_medium_line_x3_t1_ParamLimits

0xc975,	// (0x00097b8b) list_medium_line_x3_t1

0xc98b,	// (0x00097ba1) thumb_sp_fs_scroll_pane_g1

0xc994,	// (0x00097baa) thumb_sp_fs_scroll_pane_g2

0xc99d,	// (0x00097bb3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce5,	// (0x0009aefb) thumb_sp_fs_scroll_pane_g

0xc98b,	// (0x00097ba1) bg_sp_fs_scroll_pane_g1

0xc994,	// (0x00097baa) bg_sp_fs_scroll_pane_g2

0xc99d,	// (0x00097bb3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce5,	// (0x0009aefb) bg_sp_fs_scroll_pane_g

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d6f,	// (0x0008cf85) list_medium_line_x2_t3_g4_g1

0x1e14,	// (0x0008d02a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e14,	// (0x0008d02a) list_medium_line_x2_t3_g4_g2

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d7b,	// (0x0008cf91) list_medium_line_x2_t3_g4_g3

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d87,	// (0x0008cf9d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009a4d8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009a4d8) list_medium_line_x2_t3_g4_g

0x8bd5,	// (0x00093deb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8bd5,	// (0x00093deb) list_medium_line_x2_t3_g4_t1

0x8beb,	// (0x00093e01) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8beb,	// (0x00093e01) list_medium_line_x2_t3_g4_t2

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1dba,	// (0x0008cfd0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcec,	// (0x0009af02) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcec,	// (0x0009af02) list_medium_line_x2_t3_g4_t

0x7249,	// (0x0009245f) list_medium_line_g2_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_g2_g1

0x7255,	// (0x0009246b) list_medium_line_g2_g2_ParamLimits

0x7255,	// (0x0009246b) list_medium_line_g2_g2

0x0001,

0xf99e,	// (0x0009abb4) list_medium_line_g2_g_ParamLimits

0xf99e,	// (0x0009abb4) list_medium_line_g2_g

0x8c05,	// (0x00093e1b) list_medium_line_g2_t1_ParamLimits

0x8c05,	// (0x00093e1b) list_medium_line_g2_t1

0x7249,	// (0x0009245f) list_medium_line_t3_g2_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_t3_g2_g1

0x7255,	// (0x0009246b) list_medium_line_t3_g2_g2_ParamLimits

0x7255,	// (0x0009246b) list_medium_line_t3_g2_g2

0x0001,

0xf99e,	// (0x0009abb4) list_medium_line_t3_g2_g_ParamLimits

0xf99e,	// (0x0009abb4) list_medium_line_t3_g2_g

0x8c1a,	// (0x00093e30) list_medium_line_t3_g2_t1_ParamLimits

0x8c1a,	// (0x00093e30) list_medium_line_t3_g2_t1

0x8c34,	// (0x00093e4a) list_medium_line_t3_g2_t2_ParamLimits

0x8c34,	// (0x00093e4a) list_medium_line_t3_g2_t2

0x8c4a,	// (0x00093e60) list_medium_line_t3_g2_t3_ParamLimits

0x8c4a,	// (0x00093e60) list_medium_line_t3_g2_t3

0x0002,

0xfcf3,	// (0x0009af09) list_medium_line_t3_g2_t_ParamLimits

0xfcf3,	// (0x0009af09) list_medium_line_t3_g2_t

0x8857,	// (0x00093a6d) list_medium_line_right_icon_g1

0x8c60,	// (0x00093e76) list_medium_line_right_icon_t1

0x7249,	// (0x0009245f) list_medium_line_t2_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_t2_g1

0x8c6e,	// (0x00093e84) list_medium_line_t2_t1_ParamLimits

0x8c6e,	// (0x00093e84) list_medium_line_t2_t1

0x8c88,	// (0x00093e9e) list_medium_line_t2_t2_ParamLimits

0x8c88,	// (0x00093e9e) list_medium_line_t2_t2

0x0001,

0xfcfa,	// (0x0009af10) list_medium_line_t2_t_ParamLimits

0xfcfa,	// (0x0009af10) list_medium_line_t2_t

0x7249,	// (0x0009245f) list_medium_line_t3_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_t3_g1

0x8c9d,	// (0x00093eb3) list_medium_line_t3_t1_ParamLimits

0x8c9d,	// (0x00093eb3) list_medium_line_t3_t1

0x8cb7,	// (0x00093ecd) list_medium_line_t3_t2_ParamLimits

0x8cb7,	// (0x00093ecd) list_medium_line_t3_t2

0x8ccd,	// (0x00093ee3) list_medium_line_t3_t3_ParamLimits

0x8ccd,	// (0x00093ee3) list_medium_line_t3_t3

0x0002,

0xfcff,	// (0x0009af15) list_medium_line_t3_t_ParamLimits

0xfcff,	// (0x0009af15) list_medium_line_t3_t

0x7249,	// (0x0009245f) list_medium_line_g3_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_g3_g1

0x8ce2,	// (0x00093ef8) list_medium_line_g3_g2_ParamLimits

0x8ce2,	// (0x00093ef8) list_medium_line_g3_g2

0x7255,	// (0x0009246b) list_medium_line_g3_g3_ParamLimits

0x7255,	// (0x0009246b) list_medium_line_g3_g3

0x0002,

0xfd06,	// (0x0009af1c) list_medium_line_g3_g_ParamLimits

0xfd06,	// (0x0009af1c) list_medium_line_g3_g

0x8cee,	// (0x00093f04) list_medium_line_g3_t1_ParamLimits

0x8cee,	// (0x00093f04) list_medium_line_g3_t1

0x7249,	// (0x0009245f) list_medium_line_t2_g3_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_t2_g3_g1

0x8ce2,	// (0x00093ef8) list_medium_line_t2_g3_g2_ParamLimits

0x8ce2,	// (0x00093ef8) list_medium_line_t2_g3_g2

0x7255,	// (0x0009246b) list_medium_line_t2_g3_g3_ParamLimits

0x7255,	// (0x0009246b) list_medium_line_t2_g3_g3

0x0002,

0xfd06,	// (0x0009af1c) list_medium_line_t2_g3_g_ParamLimits

0xfd06,	// (0x0009af1c) list_medium_line_t2_g3_g

0x8d03,	// (0x00093f19) list_medium_line_t2_g3_t1_ParamLimits

0x8d03,	// (0x00093f19) list_medium_line_t2_g3_t1

0x8d1d,	// (0x00093f33) list_medium_line_t2_g3_t2_ParamLimits

0x8d1d,	// (0x00093f33) list_medium_line_t2_g3_t2

0x0001,

0xfd0d,	// (0x0009af23) list_medium_line_t2_g3_t_ParamLimits

0xfd0d,	// (0x0009af23) list_medium_line_t2_g3_t

0x7249,	// (0x0009245f) list_medium_line_t3_g3_g1_ParamLimits

0x7249,	// (0x0009245f) list_medium_line_t3_g3_g1

0x8ce2,	// (0x00093ef8) list_medium_line_t3_g3_g2_ParamLimits

0x8ce2,	// (0x00093ef8) list_medium_line_t3_g3_g2

0x7255,	// (0x0009246b) list_medium_line_t3_g3_g3_ParamLimits

0x7255,	// (0x0009246b) list_medium_line_t3_g3_g3

0x0002,

0xfd06,	// (0x0009af1c) list_medium_line_t3_g3_g_ParamLimits

0xfd06,	// (0x0009af1c) list_medium_line_t3_g3_g

0x8d33,	// (0x00093f49) list_medium_line_t3_g3_t1_ParamLimits

0x8d33,	// (0x00093f49) list_medium_line_t3_g3_t1

0x8d4c,	// (0x00093f62) list_medium_line_t3_g3_t2_ParamLimits

0x8d4c,	// (0x00093f62) list_medium_line_t3_g3_t2

0x8d62,	// (0x00093f78) list_medium_line_t3_g3_t3_ParamLimits

0x8d62,	// (0x00093f78) list_medium_line_t3_g3_t3

0x0002,

0xfd12,	// (0x0009af28) list_medium_line_t3_g3_t_ParamLimits

0xfd12,	// (0x0009af28) list_medium_line_t3_g3_t

0x89e3,	// (0x00093bf9) list_medium_line_right_iconx2_g1

0x8857,	// (0x00093a6d) list_medium_line_right_iconx2_g2

0x0001,

0xfd19,	// (0x0009af2f) list_medium_line_right_iconx2_g

0x8d78,	// (0x00093f8e) list_medium_line_right_iconx2_t1

0x89e3,	// (0x00093bf9) list_medium_line_t2_right_iconx2_g1

0x8857,	// (0x00093a6d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd19,	// (0x0009af2f) list_medium_line_t2_right_iconx2_g

0x8d86,	// (0x00093f9c) list_medium_line_t2_right_iconx2_t1

0x8d96,	// (0x00093fac) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd1e,	// (0x0009af34) list_medium_line_t2_right_iconx2_t

0x8da4,	// (0x00093fba) list_medium_line_x4_t4_t1

0x8db2,	// (0x00093fc8) list_medium_line_x4_t4_t2

0x8dc2,	// (0x00093fd8) list_medium_line_x4_t4_t3

0x8dd2,	// (0x00093fe8) list_medium_line_x4_t4_t4

0x0003,

0xfd23,	// (0x0009af39) list_medium_line_x4_t4_t

0x8e1b,	// (0x00094031) tport_appsw_pane_ParamLimits

0x8e1b,	// (0x00094031) tport_appsw_pane

0x8e2c,	// (0x00094042) tport_contact_pane_ParamLimits

0x8e2c,	// (0x00094042) tport_contact_pane

0x8e40,	// (0x00094056) tport_listscroll_pane_ParamLimits

0x8e40,	// (0x00094056) tport_listscroll_pane

0x8e58,	// (0x0009406e) cell_tport_appsw_pane_ParamLimits

0x8e58,	// (0x0009406e) cell_tport_appsw_pane

0xb69c,	// (0x000968b2) tport_appsw_pane_g1_ParamLimits

0xb69c,	// (0x000968b2) tport_appsw_pane_g1

0xc9a6,	// (0x00097bbc) tport_contact_pane_g1

0xc9af,	// (0x00097bc5) tport_contact_pane_t1

0xc9bd,	// (0x00097bd3) tport_contact_pane_t2

0x0001,

0xfd2c,	// (0x0009af42) tport_contact_pane_t

0xc9cb,	// (0x00097be1) list_tport_pane

0xc9d4,	// (0x00097bea) scroll_pane_cp_030

0xc9e5,	// (0x00097bfb) cell_tport_appsw_pane_g1

0xc9f5,	// (0x00097c0b) cell_tport_appsw_pane_t1

0xca03,	// (0x00097c19) grid_highlight_pane_cp019

0x8e8e,	// (0x000940a4) list_tport_double_graphic_pane_ParamLimits

0x8e8e,	// (0x000940a4) list_tport_double_graphic_pane

0x4634,	// (0x0008f84a) list_highlight_pane_cp023_ParamLimits

0x4634,	// (0x0008f84a) list_highlight_pane_cp023

0x8e9b,	// (0x000940b1) list_tport_double_graphic_pane_g1_ParamLimits

0x8e9b,	// (0x000940b1) list_tport_double_graphic_pane_g1

0x8ea8,	// (0x000940be) list_tport_double_graphic_pane_t1_ParamLimits

0x8ea8,	// (0x000940be) list_tport_double_graphic_pane_t1

0x8ebd,	// (0x000940d3) list_tport_double_graphic_pane_t2_ParamLimits

0x8ebd,	// (0x000940d3) list_tport_double_graphic_pane_t2

0x0001,

0xfd38,	// (0x0009af4e) list_tport_double_graphic_pane_t_ParamLimits

0xfd38,	// (0x0009af4e) list_tport_double_graphic_pane_t

0xd964,	// (0x00098b7a) main_cale_note_pane

0x6a6c,	// (0x00091c82) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6a6c,	// (0x00091c82) cell_vitu2_function_top_wide_pane_cp01

0x83e1,	// (0x000935f7) wait_bar_pane_cp05_ParamLimits

0x4634,	// (0x0008f84a) listscroll_cmail_pane

0xca0b,	// (0x00097c21) list_cmail_pane

0x8ecf,	// (0x000940e5) list_cmail_body_pane

0x8ee2,	// (0x000940f8) list_single_cmail_header_caption_pane

0x8ef6,	// (0x0009410c) list_single_cmail_header_detail_pane_ParamLimits

0x8ef6,	// (0x0009410c) list_single_cmail_header_detail_pane

0xca1b,	// (0x00097c31) list_single_cmail_header_caption_pane_t1

0x8f1c,	// (0x00094132) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8f1c,	// (0x00094132) list_single_cmail_header_detail_pane_g1

0xca32,	// (0x00097c48) list_single_cmail_header_detail_pane_g2_ParamLimits

0xca32,	// (0x00097c48) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd3d,	// (0x0009af53) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd3d,	// (0x0009af53) list_single_cmail_header_detail_pane_g

0xca4b,	// (0x00097c61) list_single_cmail_header_detail_pane_t1_ParamLimits

0xca4b,	// (0x00097c61) list_single_cmail_header_detail_pane_t1

0xcaab,	// (0x00097cc1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcaab,	// (0x00097cc1) list_single_cmail_header_editor_pane_bg

0xcac2,	// (0x00097cd8) list_cmail_body_pane_g1

0xcacb,	// (0x00097ce1) list_cmail_body_pane_t1

0xb6d9,	// (0x000968ef) list_single_cmail_header_editor_pane_bg_g1

0xe4f6,	// (0x0009970c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb6e9,	// (0x000968ff) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb6e1,	// (0x000968f7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb93f,	// (0x00096b55) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb709,	// (0x0009691f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb6f9,	// (0x0009690f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb701,	// (0x00096917) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe4d6,	// (0x000996ec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8f32,	// (0x00094148) calenote_gesture_pane_ParamLimits

0x8f32,	// (0x00094148) calenote_gesture_pane

0x8f4e,	// (0x00094164) calenote_window_pane_ParamLimits

0x8f4e,	// (0x00094164) calenote_window_pane

0xcad9,	// (0x00097cef) popup_note_window_cp01

0x8f6a,	// (0x00094180) calenote_swipe_1_pane_ParamLimits

0x8f6a,	// (0x00094180) calenote_swipe_1_pane

0x880d,	// (0x00093a23) calenote_swipe_2_pane_ParamLimits

0x880d,	// (0x00093a23) calenote_swipe_2_pane

0xc732,	// (0x00097948) calenote_swipe_1_pane_g1_ParamLimits

0xc732,	// (0x00097948) calenote_swipe_1_pane_g1

0xc73f,	// (0x00097955) calenote_swipe_1_pane_g2_ParamLimits

0xc73f,	// (0x00097955) calenote_swipe_1_pane_g2

0x0001,

0xfc61,	// (0x0009ae77) calenote_swipe_1_pane_g_ParamLimits

0xfc61,	// (0x0009ae77) calenote_swipe_1_pane_g

0xcaeb,	// (0x00097d01) calenote_swipe_1_pane_t1_ParamLimits

0xcaeb,	// (0x00097d01) calenote_swipe_1_pane_t1

0xc732,	// (0x00097948) calenote_swipe_2_pane_g1_ParamLimits

0xc732,	// (0x00097948) calenote_swipe_2_pane_g1

0xcb0a,	// (0x00097d20) calenote_swipe_2_pane_g2_ParamLimits

0xcb0a,	// (0x00097d20) calenote_swipe_2_pane_g2

0x0001,

0xfd49,	// (0x0009af5f) calenote_swipe_2_pane_g_ParamLimits

0xfd49,	// (0x0009af5f) calenote_swipe_2_pane_g

0xcb16,	// (0x00097d2c) calenote_swipe_2_pane_t1_ParamLimits

0xcb16,	// (0x00097d2c) calenote_swipe_2_pane_t1

0xd964,	// (0x00098b7a) main_mup_navstr_pane

0x589a,	// (0x00090ab0) main_mup3_pane_t7_ParamLimits

0x589a,	// (0x00090ab0) main_mup3_pane_t7

0xd5a3,	// (0x000987b9) main_mp4_pane_g6_ParamLimits

0xd5a3,	// (0x000987b9) main_mp4_pane_g6

0xd73d,	// (0x00098953) main_image3_pane_t4_ParamLimits

0xd73d,	// (0x00098953) main_image3_pane_t4

0x8f7f,	// (0x00094195) popup_navstr_preview_pane_ParamLimits

0x8f7f,	// (0x00094195) popup_navstr_preview_pane

0x8f8f,	// (0x000941a5) scroll_navstr_pane_ParamLimits

0x8f8f,	// (0x000941a5) scroll_navstr_pane

0xd964,	// (0x00098b7a) bg_popup_preview_window_pane_cp04

0xcb3d,	// (0x00097d53) popup_navstr_preview_pane_t1

0x8fa3,	// (0x000941b9) scroll_navstr_pane_g1_ParamLimits

0x8fa3,	// (0x000941b9) scroll_navstr_pane_g1

0x8fb7,	// (0x000941cd) scroll_navstr_pane_t1_ParamLimits

0x8fb7,	// (0x000941cd) scroll_navstr_pane_t1

0xcae2,	// (0x00097cf8) bg_button_pane_cp014

0xcae2,	// (0x00097cf8) bg_button_pane_cp030

0x86c6,	// (0x000938dc) list_double_fisheye_pane_g4_ParamLimits

0x86c6,	// (0x000938dc) list_double_fisheye_pane_g4

0x86d2,	// (0x000938e8) list_double_fisheye_pane_g5_ParamLimits

0x86d2,	// (0x000938e8) list_double_fisheye_pane_g5

0x2d19,	// (0x0008df2f) sp_fs_scroll_pane_cp03

0xc80a,	// (0x00097a20) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc816,	// (0x00097a2c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc7e,	// (0x0009ae94) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc822,	// (0x00097a38) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xca13,	// (0x00097c29) sp_fs_scroll_pane_cp02

0xe1f5,	// (0x0009940b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe1f5,	// (0x0009940b) popup_sp_fs_calendar_preview_list_single_pane

0xd964,	// (0x00098b7a) main_cam6_pano_pane

0x9df3,	// (0x00095009) main_mup3_pane_ParamLimits

0xd964,	// (0x00098b7a) main_phacti_pane

0x82d4,	// (0x000934ea) bg_button_pane_cp11

0x82ec,	// (0x00093502) main_mobtv_info_pane_g2_ParamLimits

0x82ec,	// (0x00093502) main_mobtv_info_pane_g2

0x0001,

0xfbde,	// (0x0009adf4) main_mobtv_info_pane_g_ParamLimits

0xfbde,	// (0x0009adf4) main_mobtv_info_pane_g

0x84a1,	// (0x000936b7) sc_clock_pane_t5_ParamLimits

0x84a1,	// (0x000936b7) sc_clock_pane_t5

0x8549,	// (0x0009375f) main_radioblah_pane_g1_ParamLimits

0xc667,	// (0x0009787d) main_radioblah_pane_t3_ParamLimits

0xc667,	// (0x0009787d) main_radioblah_pane_t3

0xc67f,	// (0x00097895) main_radioblah_pane_t4_ParamLimits

0xc67f,	// (0x00097895) main_radioblah_pane_t4

0x8571,	// (0x00093787) main_radioblah_text_pane_ParamLimits

0x8571,	// (0x00093787) main_radioblah_text_pane

0x8583,	// (0x00093799) main_radioblah_info_pane_g1_ParamLimits

0x8614,	// (0x0009382a) main_radioblah_info_pane_t4_ParamLimits

0x8614,	// (0x0009382a) main_radioblah_info_pane_t4

0x4634,	// (0x0008f84a) main_sp_fs_calendar_pane

0x8fcd,	// (0x000941e3) main_phacti_pane_g1

0x8fd5,	// (0x000941eb) phacti_note_pane_ParamLimits

0x8fd5,	// (0x000941eb) phacti_note_pane

0xcb54,	// (0x00097d6a) phacti_term_pane_ParamLimits

0xcb54,	// (0x00097d6a) phacti_term_pane

0xcb69,	// (0x00097d7f) phacti_note_pane_t1_ParamLimits

0xcb69,	// (0x00097d7f) phacti_note_pane_t1

0xcb80,	// (0x00097d96) phacti_term_pane_g1

0xcb88,	// (0x00097d9e) phacti_term_pane_t1_ParamLimits

0xcb88,	// (0x00097d9e) phacti_term_pane_t1

0xcbb2,	// (0x00097dc8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcbba,	// (0x00097dd0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd53,	// (0x0009af69) popup_sp_fs_calendar_preview_list_single_pane_g

0xcbc2,	// (0x00097dd8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcbc2,	// (0x00097dd8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcbd8,	// (0x00097dee) aid_popup_sp_fs_bg_corner_pane

0xac6c,	// (0x00095e82) popup_sp_fs_calendar_preview_bg_pane_g1

0xd964,	// (0x00098b7a) popup_sp_fs_calendar_preview_bg_pane

0xcbe0,	// (0x00097df6) popup_sp_fs_calendar_preview_list_pane

0xa76a,	// (0x00095980) bg_main_sp_fs_cale_pane_ParamLimits

0xa76a,	// (0x00095980) bg_main_sp_fs_cale_pane

0xcbf1,	// (0x00097e07) listscroll_cale_mrui_pane_ParamLimits

0xcbf1,	// (0x00097e07) listscroll_cale_mrui_pane

0xcc06,	// (0x00097e1c) listscroll_sp_fs_schedule_track_pane

0xcc0f,	// (0x00097e25) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcc0f,	// (0x00097e25) main_sp_fs_ctrlbar_pane_cp01

0xcc22,	// (0x00097e38) main_sp_fs_ribbon_pane

0xcc2a,	// (0x00097e40) popup_sp_fs_cale_preview_window

0x9037,	// (0x0009424d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9037,	// (0x0009424d) list_single_sp_fs_schedule_track_pane

0x4634,	// (0x0008f84a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4634,	// (0x0008f84a) bg_sp_fs_highlight_list_pane_cp03

0x9048,	// (0x0009425e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9048,	// (0x0009425e) list_single_sp_fs_schedule_track_pane_g1

0x9054,	// (0x0009426a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9054,	// (0x0009426a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd58,	// (0x0009af6e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd58,	// (0x0009af6e) list_single_sp_fs_schedule_track_pane_g

0x9060,	// (0x00094276) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9060,	// (0x00094276) list_single_sp_fs_schedule_track_pane_t1

0x907a,	// (0x00094290) sp_fs_schedule_track_pane_ParamLimits

0x907a,	// (0x00094290) sp_fs_schedule_track_pane

0xcc3c,	// (0x00097e52) sp_fs_schedule_track_pane_g1

0xcc44,	// (0x00097e5a) sp_fs_schedule_track_pane_g2

0xcc4c,	// (0x00097e62) sp_fs_schedule_track_pane_g3

0xcc54,	// (0x00097e6a) sp_fs_schedule_track_pane_g4

0xcc5c,	// (0x00097e72) sp_fs_schedule_track_pane_g5

0x0004,

0xfd5d,	// (0x0009af73) sp_fs_schedule_track_pane_g

0xb6d9,	// (0x000968ef) bg_sp_fs_schedule_viewer_highlight_g1

0xe4f6,	// (0x0009970c) bg_sp_fs_schedule_viewer_highlight_g2

0xb6e1,	// (0x000968f7) bg_sp_fs_schedule_viewer_highlight_g3

0xb6e9,	// (0x000968ff) bg_sp_fs_schedule_viewer_highlight_g4

0xb93f,	// (0x00096b55) bg_sp_fs_schedule_viewer_highlight_g5

0xb6f9,	// (0x0009690f) bg_sp_fs_schedule_viewer_highlight_g6

0xb701,	// (0x00096917) bg_sp_fs_schedule_viewer_highlight_g7

0xb709,	// (0x0009691f) bg_sp_fs_schedule_viewer_highlight_g8

0xe4d6,	// (0x000996ec) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd68,	// (0x0009af7e) bg_sp_fs_schedule_viewer_highlight_g

0xd964,	// (0x00098b7a) bg_main_sp_fs_ribbon_pane

0x908b,	// (0x000942a1) main_sp_fs_ribbon_pane_g1

0xcc64,	// (0x00097e7a) main_sp_fs_ribbon_pane_t1

0x9094,	// (0x000942aa) main_sp_fs_ribbon_pane_t2

0xcc73,	// (0x00097e89) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd7b,	// (0x0009af91) main_sp_fs_ribbon_pane_t

0xcc82,	// (0x00097e98) main_sp_fs_ribbon_scheduler_pane

0xcc8a,	// (0x00097ea0) bg_main_sp_fs_ribbon_pane_g1

0xcc93,	// (0x00097ea9) bg_main_sp_fs_ribbon_pane_g2

0xcc9c,	// (0x00097eb2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd82,	// (0x0009af98) bg_main_sp_fs_ribbon_pane_g

0xcca4,	// (0x00097eba) main_sp_fs_ribbon_scheduler_pane_g1

0xccad,	// (0x00097ec3) main_sp_fs_ribbon_scheduler_pane_g2

0xccb6,	// (0x00097ecc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd89,	// (0x0009af9f) main_sp_fs_ribbon_scheduler_pane_g

0xccbf,	// (0x00097ed5) list_cale_mrui_pane

0x90a3,	// (0x000942b9) sp_fs_scroll_pane_cp07_ParamLimits

0x90a3,	// (0x000942b9) sp_fs_scroll_pane_cp07

0x90bb,	// (0x000942d1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x90bb,	// (0x000942d1) bg_sp_fs_schedule_viewer_highlight

0xcccc,	// (0x00097ee2) list_single_sp_fs_schedule_track_pane_cp01

0xccd4,	// (0x00097eea) list_sp_fs_schedule_track_pane

0xccdc,	// (0x00097ef2) sp_fs_scroll_pane_cp06_ParamLimits

0xccdc,	// (0x00097ef2) sp_fs_scroll_pane_cp06

0xac6c,	// (0x00095e82) bgmain_sp_fs_calendar_pane_g1

0x90cb,	// (0x000942e1) list_single_cale_mrui_pane_ParamLimits

0x90cb,	// (0x000942e1) list_single_cale_mrui_pane

0xccee,	// (0x00097f04) list_single_cale_mrui_row_pane_ParamLimits

0xccee,	// (0x00097f04) list_single_cale_mrui_row_pane

0xccfb,	// (0x00097f11) list_single_cale_mrui_row_pane_g1_ParamLimits

0xccfb,	// (0x00097f11) list_single_cale_mrui_row_pane_g1

0xcd40,	// (0x00097f56) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcd40,	// (0x00097f56) list_single_cale_mrui_row_pane_t1

0x90eb,	// (0x00094301) list_single_cale_mrui_row_pane_t2_ParamLimits

0x90eb,	// (0x00094301) list_single_cale_mrui_row_pane_t2

0xcd52,	// (0x00097f68) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcd52,	// (0x00097f68) list_single_cale_mrui_row_pane_t3

0xcd81,	// (0x00097f97) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcd81,	// (0x00097f97) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd97,	// (0x0009afad) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd97,	// (0x0009afad) list_single_cale_mrui_row_pane_t

0x9151,	// (0x00094367) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9151,	// (0x00094367) list_single_cmail_header_editor_pane_bg_cp01

0x9171,	// (0x00094387) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9171,	// (0x00094387) list_single_cmail_header_editor_pane_bg_cp02

0x918d,	// (0x000943a3) main_radioblah_text_pane_t1_ParamLimits

0x918d,	// (0x000943a3) main_radioblah_text_pane_t1

0xcdb0,	// (0x00097fc6) cam6_indi_pane_cp01

0xcdb8,	// (0x00097fce) cam6_mode_pane_cp01

0xcdc0,	// (0x00097fd6) cam6_pano_pane

0xcdc9,	// (0x00097fdf) cam6_zoom_pane_cp01

0xcdd1,	// (0x00097fe7) cam6_pano_image_pane

0xcdda,	// (0x00097ff0) cam6_pano_pane_g1

0xc3ce,	// (0x000975e4) cam6_pano_pane_g2

0xcde3,	// (0x00097ff9) cam6_pano_pane_g3

0xcdec,	// (0x00098002) cam6_pano_pane_g4

0xb20b,	// (0x00096421) cam6_pano_pane_g5

0xcdf5,	// (0x0009800b) cam6_pano_pane_g6

0xcdfd,	// (0x00098013) cam6_pano_pane_g7

0xce05,	// (0x0009801b) cam6_pano_pane_g8

0xce0e,	// (0x00098024) cam6_pano_pane_g9

0x0008,

0xfda0,	// (0x0009afb6) cam6_pano_pane_g

0xd964,	// (0x00098b7a) main_browser_tag_pane

0xcb35,	// (0x00097d4b) grid_navstr_albumart_pane

0xce17,	// (0x0009802d) cell_navstr_albumart_pane_ParamLimits

0xce17,	// (0x0009802d) cell_navstr_albumart_pane

0xedf8,	// (0x0009a00e) cell_navstr_albumart_pane_g1

0xa53b,	// (0x00095751) cell_navstr_albumart_pane_g2

0xa54b,	// (0x00095761) cell_navstr_albumart_pane_g3

0xa543,	// (0x00095759) cell_navstr_albumart_pane_g4

0x0003,

0xfdb3,	// (0x0009afc9) cell_navstr_albumart_pane_g

0x91a7,	// (0x000943bd) bt_list_pane_ParamLimits

0x91a7,	// (0x000943bd) bt_list_pane

0x91ba,	// (0x000943d0) bt_list_pane_t1

0x91c9,	// (0x000943df) bt_list_pane_t2

0x0001,

0xfdbc,	// (0x0009afd2) bt_list_pane_t

0xd964,	// (0x00098b7a) main_cale_prevew_pane

0x91d8,	// (0x000943ee) popup_cale_preview_window_ParamLimits

0x91d8,	// (0x000943ee) popup_cale_preview_window

0x4634,	// (0x0008f84a) bg_popup_preview_window_pane_cp05_ParamLimits

0x4634,	// (0x0008f84a) bg_popup_preview_window_pane_cp05

0xce2f,	// (0x00098045) list_cale_preview_pane_ParamLimits

0xce2f,	// (0x00098045) list_cale_preview_pane

0xce3b,	// (0x00098051) list_double_cale_preview_pane_ParamLimits

0xce3b,	// (0x00098051) list_double_cale_preview_pane

0xce4d,	// (0x00098063) list_single_cale_preview_pane_ParamLimits

0xce4d,	// (0x00098063) list_single_cale_preview_pane

0xce61,	// (0x00098077) list_single_cale_preview_pane_g1

0xce69,	// (0x0009807f) list_single_cale_preview_pane_t1_ParamLimits

0xce69,	// (0x0009807f) list_single_cale_preview_pane_t1

0xce7e,	// (0x00098094) list_double_cale_preview_pane_g1

0xce86,	// (0x0009809c) list_double_cale_preview_pane_t1_ParamLimits

0xce86,	// (0x0009809c) list_double_cale_preview_pane_t1

0xce9b,	// (0x000980b1) list_double_cale_preview_pane_t2_ParamLimits

0xce9b,	// (0x000980b1) list_double_cale_preview_pane_t2

0x0001,

0xfdc1,	// (0x0009afd7) list_double_cale_preview_pane_t_ParamLimits

0xfdc1,	// (0x0009afd7) list_double_cale_preview_pane_t

0xd964,	// (0x00098b7a) main_ezdial_pane

0x4634,	// (0x0008f84a) main_sp_fs_email_pane_ParamLimits

0x887d,	// (0x00093a93) cmail_ddmenu_btn01_pane_ParamLimits

0x887d,	// (0x00093a93) cmail_ddmenu_btn01_pane

0x8890,	// (0x00093aa6) cmail_ddmenu_btn02_pane_ParamLimits

0x8890,	// (0x00093aa6) cmail_ddmenu_btn02_pane

0x88b3,	// (0x00093ac9) cmail_ddmenu_btn03_pane_ParamLimits

0x88b3,	// (0x00093ac9) cmail_ddmenu_btn03_pane

0x88d5,	// (0x00093aeb) main_sp_fs_ctrlbar_pane_ParamLimits

0x88f9,	// (0x00093b0f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ecf,	// (0x000940e5) list_cmail_body_pane_ParamLimits

0xca29,	// (0x00097c3f) bg_button_pane_cp12

0xca3e,	// (0x00097c54) list_single_cmail_header_detail_pane_g3_ParamLimits

0xca3e,	// (0x00097c54) list_single_cmail_header_detail_pane_g3

0xca87,	// (0x00097c9d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xca87,	// (0x00097c9d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd44,	// (0x0009af5a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd44,	// (0x0009af5a) list_single_cmail_header_detail_pane_t

0xcb9d,	// (0x00097db3) phacti_term_pane_t2_ParamLimits

0xcb9d,	// (0x00097db3) phacti_term_pane_t2

0x0001,

0xfd4e,	// (0x0009af64) phacti_term_pane_t_ParamLimits

0xfd4e,	// (0x0009af64) phacti_term_pane_t

0xceb3,	// (0x000980c9) aid_size_list_single_double

0x91ed,	// (0x00094403) popup_ezdial_listscroll_window

0x9203,	// (0x00094419) popup_number_entry_window_cp01

0xe290,	// (0x000994a6) bg_popup_call_pane_cp09

0xcebf,	// (0x000980d5) ezdial_list_pane

0xcec7,	// (0x000980dd) scroll_pane_cp23

0xa76a,	// (0x00095980) bg_button_pane_cp028_ParamLimits

0xa76a,	// (0x00095980) bg_button_pane_cp028

0x920f,	// (0x00094425) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x920f,	// (0x00094425) cmail_ddmenu_btn01_pane_g1

0x921b,	// (0x00094431) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x921b,	// (0x00094431) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdc6,	// (0x0009afdc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdc6,	// (0x0009afdc) cmail_ddmenu_btn01_pane_g

0xcecf,	// (0x000980e5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcecf,	// (0x000980e5) cmail_ddmenu_btn01_pane_t1

0xa76a,	// (0x00095980) bg_button_pane_cp029_ParamLimits

0xa76a,	// (0x00095980) bg_button_pane_cp029

0x922f,	// (0x00094445) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x922f,	// (0x00094445) cmail_ddmenu_btn02_pane_g1

0x9248,	// (0x0009445e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9248,	// (0x0009445e) cmail_ddmenu_btn02_pane_t1

0x4634,	// (0x0008f84a) bg_button_pane_cp031_ParamLimits

0x4634,	// (0x0008f84a) bg_button_pane_cp031

0x922f,	// (0x00094445) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x922f,	// (0x00094445) cmail_ddmenu_btn03_pane_g1

0x9248,	// (0x0009445e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9248,	// (0x0009445e) cmail_ddmenu_btn03_pane_t1

0x637f,	// (0x00091595) cell_dialer2_keypad_pane_t1_ParamLimits

0x6399,	// (0x000915af) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6399,	// (0x000915af) cell_dialer2_keypad_pane_t1_copy1

0x80f9,	// (0x0009330f) ncimui_group_button_pane

0x4634,	// (0x0008f84a) main_sp_fs_calendar_pane_ParamLimits

0x8ee2,	// (0x000940f8) list_single_cmail_header_caption_pane_ParamLimits

0xcbe8,	// (0x00097dfe) aid_recal_txt_sm_pane

0xd964,	// (0x00098b7a) mian_recal_day_pane

0xcc2a,	// (0x00097e40) popup_sp_fs_cale_preview_window_ParamLimits

0xcee5,	// (0x000980fb) list_recal_day_pane

0xcf27,	// (0x0009813d) list_single_recal_day_pane_ParamLimits

0xcf27,	// (0x0009813d) list_single_recal_day_pane

0xcf39,	// (0x0009814f) list_single_recal_day_pane_g1_ParamLimits

0xcf39,	// (0x0009814f) list_single_recal_day_pane_g1

0xcf45,	// (0x0009815b) list_single_recal_day_pane_g2_ParamLimits

0xcf45,	// (0x0009815b) list_single_recal_day_pane_g2

0xcf51,	// (0x00098167) list_single_recal_day_pane_g3_ParamLimits

0xcf51,	// (0x00098167) list_single_recal_day_pane_g3

0x926c,	// (0x00094482) list_single_recal_day_pane_g4_ParamLimits

0x926c,	// (0x00094482) list_single_recal_day_pane_g4

0xcf5d,	// (0x00098173) list_single_recal_day_pane_g5_ParamLimits

0xcf5d,	// (0x00098173) list_single_recal_day_pane_g5

0xcf69,	// (0x0009817f) list_single_recal_day_pane_g6_ParamLimits

0xcf69,	// (0x0009817f) list_single_recal_day_pane_g6

0x0004,

0xfdd5,	// (0x0009afeb) list_single_recal_day_pane_g_ParamLimits

0xfdd5,	// (0x0009afeb) list_single_recal_day_pane_g

0xcf7d,	// (0x00098193) list_single_recal_day_pane_t1

0xcf8f,	// (0x000981a5) list_single_recal_day_pane_t2

0x0001,

0xfde0,	// (0x0009aff6) list_single_recal_day_pane_t

0x9284,	// (0x0009449a) ncimui_query_button_pane_ParamLimits

0x9284,	// (0x0009449a) ncimui_query_button_pane

0x9294,	// (0x000944aa) ncimui_query_button_pane_t1_ParamLimits

0x9294,	// (0x000944aa) ncimui_query_button_pane_t1

0xcfa1,	// (0x000981b7) ncimui_query_button_pane_t2_ParamLimits

0xcfa1,	// (0x000981b7) ncimui_query_button_pane_t2

0x0001,

0xfde5,	// (0x0009affb) ncimui_query_button_pane_t_ParamLimits

0xfde5,	// (0x0009affb) ncimui_query_button_pane_t

0x92a7,	// (0x000944bd) query_button_pane_ParamLimits

0x92a7,	// (0x000944bd) query_button_pane

0xd964,	// (0x00098b7a) bg_button_pane_cp0028

0xcfb4,	// (0x000981ca) query_button_pane_t1

0x4656,	// (0x0008f86c) main_tport_pane_ParamLimits

0x8de2,	// (0x00093ff8) bg_popup_window_pane_cp01_ParamLimits

0x8de2,	// (0x00093ff8) bg_popup_window_pane_cp01

0x8df9,	// (0x0009400f) heading_pane_cp08_ParamLimits

0x8df9,	// (0x0009400f) heading_pane_cp08

0x8e0a,	// (0x00094020) heading_pane_cp07_ParamLimits

0x8e0a,	// (0x00094020) heading_pane_cp07

0xc9e5,	// (0x00097bfb) cell_tport_appsw_pane_g2

0x0002,

0xfd31,	// (0x0009af47) cell_tport_appsw_pane_g

0x34ca,	// (0x0008e6e0) input_candi_list_open_g1

0xe6c1,	// (0x000998d7) list_cale_time_pane_g6_ParamLimits

0xe6c1,	// (0x000998d7) list_cale_time_pane_g6

0x52e3,	// (0x000904f9) aid_size_touch_calib_1_ParamLimits

0x52e3,	// (0x000904f9) aid_size_touch_calib_1

0x52f5,	// (0x0009050b) aid_size_touch_calib_2_ParamLimits

0x52f5,	// (0x0009050b) aid_size_touch_calib_2

0x530b,	// (0x00090521) aid_size_touch_calib_3_ParamLimits

0x530b,	// (0x00090521) aid_size_touch_calib_3

0x5323,	// (0x00090539) aid_size_touch_calib_4_ParamLimits

0x5323,	// (0x00090539) aid_size_touch_calib_4

0x5337,	// (0x0009054d) main_touch_calib_button_group_pane_ParamLimits

0x5337,	// (0x0009054d) main_touch_calib_button_group_pane

0x534f,	// (0x00090565) main_touch_calib_pane_g1_ParamLimits

0x5361,	// (0x00090577) main_touch_calib_pane_g2_ParamLimits

0x5373,	// (0x00090589) main_touch_calib_pane_g3_ParamLimits

0x5385,	// (0x0009059b) main_touch_calib_pane_g4_ParamLimits

0xf6fb,	// (0x0009a911) main_touch_calib_pane_g_ParamLimits

0x5397,	// (0x000905ad) main_touch_calib_pane_t1_ParamLimits

0x53af,	// (0x000905c5) main_touch_calib_pane_t2_ParamLimits

0x53c7,	// (0x000905dd) main_touch_calib_pane_t3_ParamLimits

0x53d9,	// (0x000905ef) main_touch_calib_pane_t4_ParamLimits

0x53eb,	// (0x00090601) main_touch_calib_pane_t5_ParamLimits

0xf704,	// (0x0009a91a) main_touch_calib_pane_t_ParamLimits

0xafc2,	// (0x000961d8) list_single_fp_cale_pane_g3_ParamLimits

0xafc2,	// (0x000961d8) list_single_fp_cale_pane_g3

0x9df3,	// (0x00095009) bg_button_pane_cp012_ParamLimits

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp03_ParamLimits

0x71ff,	// (0x00092415) cell_vitu2_function_top_pane_g1_ParamLimits

0x9df3,	// (0x00095009) bg_vkb2_func_pane_cp04_ParamLimits

0x8086,	// (0x0009329c) main_ncimui_button_group_pane_ParamLimits

0x8086,	// (0x0009329c) main_ncimui_button_group_pane

0x80e4,	// (0x000932fa) main_ncimui_pane_t3_ParamLimits

0x80e4,	// (0x000932fa) main_ncimui_pane_t3

0xcb4b,	// (0x00097d61) phacti_button_group_pane

0xceb3,	// (0x000980c9) aid_size_list_single_double_ParamLimits

0x91ed,	// (0x00094403) popup_ezdial_listscroll_window_ParamLimits

0x9203,	// (0x00094419) popup_number_entry_window_cp01_ParamLimits

0x92b9,	// (0x000944cf) phacti_button_pane_ParamLimits

0x92b9,	// (0x000944cf) phacti_button_pane

0xd964,	// (0x00098b7a) bg_button_pane_cp14

0xcfc2,	// (0x000981d8) phacti_button_pane_t1

0x92c8,	// (0x000944de) main_touch_calib_button_pane_ParamLimits

0x92c8,	// (0x000944de) main_touch_calib_button_pane

0xe0df,	// (0x000992f5) bg_button_pane_cp18_ParamLimits

0xe0df,	// (0x000992f5) bg_button_pane_cp18

0xcfd0,	// (0x000981e6) main_touch_calib_button_pane_t1_ParamLimits

0xcfd0,	// (0x000981e6) main_touch_calib_button_pane_t1

0xcfe6,	// (0x000981fc) main_touch_calib_button_pane_t2_ParamLimits

0xcfe6,	// (0x000981fc) main_touch_calib_button_pane_t2

0x0001,

0xfdea,	// (0x0009b000) main_touch_calib_button_pane_t_ParamLimits

0xfdea,	// (0x0009b000) main_touch_calib_button_pane_t

0xd964,	// (0x00098b7a) cell_ncimui_button_pane

0xd964,	// (0x00098b7a) bg_button_pane_cp032

0xd004,	// (0x0009821a) cell_ncimui_button_pane_t1

0xd71d,	// (0x00098933) image3_infobar_pane_ParamLimits

0xd71d,	// (0x00098933) image3_infobar_pane

0x84c9,	// (0x000936df) fs_bigclock_status_pane_ParamLimits

0x84c9,	// (0x000936df) fs_bigclock_status_pane

0x84d6,	// (0x000936ec) main_fs_bigclock_clock_pane_ParamLimits

0x84d6,	// (0x000936ec) main_fs_bigclock_clock_pane

0x84f2,	// (0x00093708) main_fs_bigclock_indi_pane_ParamLimits

0x84f2,	// (0x00093708) main_fs_bigclock_indi_pane

0x851c,	// (0x00093732) main_fs_bigclock_swipe_pane_ParamLimits

0x851c,	// (0x00093732) main_fs_bigclock_swipe_pane

0xd964,	// (0x00098b7a) main_fs_clock_dumped_data

0xc4db,	// (0x000976f1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc4db,	// (0x000976f1) list_single_fs_bigclock_indicator_pane_g1

0xc4f5,	// (0x0009770b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc4f5,	// (0x0009770b) list_single_fs_bigclock_indicator_pane_g2

0xc50f,	// (0x00097725) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc50f,	// (0x00097725) list_single_fs_bigclock_indicator_pane_g3

0xc529,	// (0x0009773f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc529,	// (0x0009773f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc12,	// (0x0009ae28) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc12,	// (0x0009ae28) list_single_fs_bigclock_indicator_pane_g

0xc552,	// (0x00097768) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc552,	// (0x00097768) list_single_fs_bigclock_indicator_pane_t1

0xc57a,	// (0x00097790) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc57a,	// (0x00097790) list_single_fs_bigclock_indicator_pane_t2

0xc5a2,	// (0x000977b8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc5a2,	// (0x000977b8) list_single_fs_bigclock_indicator_pane_t3

0xc5ca,	// (0x000977e0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc5ca,	// (0x000977e0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc1d,	// (0x0009ae33) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc1d,	// (0x0009ae33) list_single_fs_bigclock_indicator_pane_t

0xd012,	// (0x00098228) image3_infobar_fav_pane_ParamLimits

0xd012,	// (0x00098228) image3_infobar_fav_pane

0xd022,	// (0x00098238) image3_infobar_loc_pane_ParamLimits

0xd022,	// (0x00098238) image3_infobar_loc_pane

0xd036,	// (0x0009824c) image3_infobar_time_pane_ParamLimits

0xd036,	// (0x0009824c) image3_infobar_time_pane

0xac6c,	// (0x00095e82) image3_infobar_time_pane_g1

0xd046,	// (0x0009825c) image3_infobar_time_pane_t1

0xac6c,	// (0x00095e82) image3_infobar_loc_pane_g1

0xd054,	// (0x0009826a) image3_infobar_loc_pane_g2

0x0001,

0xfdef,	// (0x0009b005) image3_infobar_loc_pane_g

0xd05c,	// (0x00098272) image3_infobar_loc_pane_t1

0xac6c,	// (0x00095e82) image3_infobar_fav_pane_g1

0xd06a,	// (0x00098280) image3_infobar_fav_pane_g2

0x0001,

0xfdf4,	// (0x0009b00a) image3_infobar_fav_pane_g

0xd072,	// (0x00098288) fs_bigclock_status_battery_pane

0xd07b,	// (0x00098291) fs_bigclock_status_signal_pane

0xd084,	// (0x0009829a) fs_bigclock_status_title_pane

0xd08d,	// (0x000982a3) fs_bigclock_status_signal_pane_g1

0xd096,	// (0x000982ac) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdf9,	// (0x0009b00f) fs_bigclock_status_signal_pane_g

0xd09e,	// (0x000982b4) fs_bigclock_status_battery_pane_g1

0xd0a7,	// (0x000982bd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdfe,	// (0x0009b014) fs_bigclock_status_battery_pane_g

0xd0af,	// (0x000982c5) fs_bigclock_status_title_pane_t1

0x92db,	// (0x000944f1) main_fs_bigclock_clock_pane_g1

0x92db,	// (0x000944f1) main_fs_bigclock_clock_pane_g2

0x92ec,	// (0x00094502) main_fs_bigclock_clock_pane_g3

0x92ec,	// (0x00094502) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe03,	// (0x0009b019) main_fs_bigclock_clock_pane_g

0x92ff,	// (0x00094515) main_fs_bigclock_clock_pane_t1

0x9315,	// (0x0009452b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe0c,	// (0x0009b022) main_fs_bigclock_clock_pane_t

0xd0bd,	// (0x000982d3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd0bd,	// (0x000982d3) list_single_fs_bigclock_indicator_pane

0xd0ce,	// (0x000982e4) list_single_fs_bigclock_pane_ParamLimits

0xd0ce,	// (0x000982e4) list_single_fs_bigclock_pane

0xd0f4,	// (0x0009830a) main_fs_bigclock_indicator_pane_t1

0xd103,	// (0x00098319) list_single_fs_bigclock_pane_g1

0xd10b,	// (0x00098321) list_single_fs_bigclock_pane_t1

0xac6c,	// (0x00095e82) main_fs_bigclock_swipe_pane_g1

0xd14e,	// (0x00098364) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe1d,	// (0x0009b033) main_fs_bigclock_swipe_pane_g

0xd156,	// (0x0009836c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd156,	// (0x0009836c) main_fs_bigclock_swipe_pane_t1

0x2df4,	// (0x0008e00a) call_type_pane_ParamLimits

0xd964,	// (0x00098b7a) main_btmg_pane

0xcd27,	// (0x00097f3d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcd27,	// (0x00097f3d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd90,	// (0x0009afa6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd90,	// (0x0009afa6) list_single_cale_mrui_row_pane_g

0xcf0e,	// (0x00098124) list_recal_vselct_arw_lo_pane

0xcf16,	// (0x0009812c) list_recal_vselct_arw_up_pane

0xcf1e,	// (0x00098134) list_recal_vselct_pane

0x936d,	// (0x00094583) btmg_button_pane

0x9375,	// (0x0009458b) main_btmg_pane_g1

0xd964,	// (0x00098b7a) bg_button_pane_cp044

0xd173,	// (0x00098389) btmg_button_pane_t1

0xa756,	// (0x0009596c) aid_listscroll_gen

0x4634,	// (0x0008f84a) main_cntbar_detail_pane

0xca0b,	// (0x00097c21) list_cmail_folder_pane

0x2d19,	// (0x0008df2f) sp_fs_scroll_pane_cp03_ParamLimits

0x8ecf,	// (0x000940e5) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ecf,	// (0x000940e5) list_single_fs_dyc_pane_cp01

0xd181,	// (0x00098397) aid_size_cmail_indent

0xd18a,	// (0x000983a0) list_single_dyc_row_pane_cp01

0x93a5,	// (0x000945bb) cntbar_detail_list_pane_ParamLimits

0x93a5,	// (0x000945bb) cntbar_detail_list_pane

0x93eb,	// (0x00094601) main_cntbar_detail_cont_pane_ParamLimits

0x93eb,	// (0x00094601) main_cntbar_detail_cont_pane

0x2d19,	// (0x0008df2f) scroll_pane_cp032_ParamLimits

0x2d19,	// (0x0008df2f) scroll_pane_cp032

0x93ff,	// (0x00094615) cntbar_detail_list_event_pane_ParamLimits

0x93ff,	// (0x00094615) cntbar_detail_list_event_pane

0x93b5,	// (0x000945cb) cntbar_detail_list_shct_pane

0xe544,	// (0x0009975a) aid_list_gen

0xd193,	// (0x000983a9) aid_scroll

0xd19c,	// (0x000983b2) aid_size_touch_scroll_bar

0x788c,	// (0x00092aa2) aid_list_double

0xbca4,	// (0x00096eba) aid_list_single

0x788c,	// (0x00092aa2) aid_list_single_lg

0x940f,	// (0x00094625) aid_list_z_g_a_sm

0x9417,	// (0x0009462d) aid_list_z_g_d

0x941f,	// (0x00094635) aid_txt_z_prm

0x942d,	// (0x00094643) aid_txt_z_prm_cp01

0x943b,	// (0x00094651) aid_txt_z_sec

0x9449,	// (0x0009465f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9449,	// (0x0009465f) main_cntbar_detail_cont_pane_g1

0x945c,	// (0x00094672) main_cntbar_detail_cont_pane_g2_ParamLimits

0x945c,	// (0x00094672) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe22,	// (0x0009b038) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe22,	// (0x0009b038) main_cntbar_detail_cont_pane_g

0xd1a5,	// (0x000983bb) main_cntbar_detail_cont_pane_t1

0xd1b3,	// (0x000983c9) main_cntbar_detail_cont_pane_t2

0xd1c1,	// (0x000983d7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe27,	// (0x0009b03d) main_cntbar_detail_cont_pane_t

0x946c,	// (0x00094682) cell_cntbar_detail_list_shct_pane_ParamLimits

0x946c,	// (0x00094682) cell_cntbar_detail_list_shct_pane

0xd1cf,	// (0x000983e5) cntbar_detail_list_shct_pane_g1

0xd1d8,	// (0x000983ee) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe2e,	// (0x0009b044) cntbar_detail_list_shct_pane_g

0x947e,	// (0x00094694) cntbar_detail_list_event_pane_g1_ParamLimits

0x947e,	// (0x00094694) cntbar_detail_list_event_pane_g1

0x948a,	// (0x000946a0) cntbar_detail_list_event_pane_g2_ParamLimits

0x948a,	// (0x000946a0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe33,	// (0x0009b049) cntbar_detail_list_event_pane_g_ParamLimits

0xfe33,	// (0x0009b049) cntbar_detail_list_event_pane_g

0x94f6,	// (0x0009470c) cntbar_detail_list_event_pane_t1_ParamLimits

0x94f6,	// (0x0009470c) cntbar_detail_list_event_pane_t1

0x950b,	// (0x00094721) cntbar_detail_list_event_pane_t2_ParamLimits

0x950b,	// (0x00094721) cntbar_detail_list_event_pane_t2

0x0002,

0xfe40,	// (0x0009b056) cntbar_detail_list_event_pane_t_ParamLimits

0xfe40,	// (0x0009b056) cntbar_detail_list_event_pane_t

0xac6c,	// (0x00095e82) cell_cntbar_detail_list_shct_pane_g1

0xec84,	// (0x00099e9a) navi_pane_mv_g3

0x4634,	// (0x0008f84a) main_cntbar_detail_pane_ParamLimits

0xd964,	// (0x00098b7a) main_notif_wgt_pane

0xd53d,	// (0x00098753) aid_tch_main_mp4_pane_g4

0xd715,	// (0x0009892b) popup_slider_window_cp02

0xcf04,	// (0x0009811a) list_recal_day_event_pane

0x937d,	// (0x00094593) cntbar_detail_btn_pane_ParamLimits

0x937d,	// (0x00094593) cntbar_detail_btn_pane

0x9390,	// (0x000945a6) cntbar_detail_btn_pane_cp01_ParamLimits

0x9390,	// (0x000945a6) cntbar_detail_btn_pane_cp01

0x93b5,	// (0x000945cb) cntbar_detail_list_shct_pane_ParamLimits

0x93c5,	// (0x000945db) cntbar_detail_pane_g1_ParamLimits

0x93c5,	// (0x000945db) cntbar_detail_pane_g1

0x93d5,	// (0x000945eb) cntbar_detail_pane_t1_ParamLimits

0x93d5,	// (0x000945eb) cntbar_detail_pane_t1

0x9496,	// (0x000946ac) cntbar_detail_list_event_pane_g3_ParamLimits

0x9496,	// (0x000946ac) cntbar_detail_list_event_pane_g3

0x94ae,	// (0x000946c4) cntbar_detail_list_event_pane_g4_ParamLimits

0x94ae,	// (0x000946c4) cntbar_detail_list_event_pane_g4

0x94c6,	// (0x000946dc) cntbar_detail_list_event_pane_g5_ParamLimits

0x94c6,	// (0x000946dc) cntbar_detail_list_event_pane_g5

0x94de,	// (0x000946f4) cntbar_detail_list_event_pane_g6_ParamLimits

0x94de,	// (0x000946f4) cntbar_detail_list_event_pane_g6

0x9520,	// (0x00094736) cntbar_detail_list_event_pane_t3_ParamLimits

0x9520,	// (0x00094736) cntbar_detail_list_event_pane_t3

0x9532,	// (0x00094748) popup_notif_wgt_window_ParamLimits

0x9532,	// (0x00094748) popup_notif_wgt_window

0x9547,	// (0x0009475d) popup_submenu_window_cp01_ParamLimits

0x9547,	// (0x0009475d) popup_submenu_window_cp01

0xe290,	// (0x000994a6) bg_popup_window_pane_cp10

0xd1e1,	// (0x000983f7) listscroll_notif_wgt_pane

0xd1f2,	// (0x00098408) list_notif_wgt_window

0xd1fb,	// (0x00098411) scroll_pane_cp033

0x9557,	// (0x0009476d) list_notif_wgt_row_pane_ParamLimits

0x9557,	// (0x0009476d) list_notif_wgt_row_pane

0xd204,	// (0x0009841a) aid_size_list_notif_wgt_del

0xd211,	// (0x00098427) list_notif_wgt_row_pane_g1

0xd21d,	// (0x00098433) list_notif_wgt_row_pane_g2

0xd22c,	// (0x00098442) list_notif_wgt_row_pane_g3

0x0002,

0xfe47,	// (0x0009b05d) list_notif_wgt_row_pane_g

0xd239,	// (0x0009844f) list_notif_wgt_row_pane_t1

0xd24f,	// (0x00098465) list_notif_wgt_row_pane_t2

0xd261,	// (0x00098477) list_notif_wgt_row_pane_t3

0x0002,

0xfe4e,	// (0x0009b064) list_notif_wgt_row_pane_t

0xb959,	// (0x00096b6f) list_recal_day_event_pane_g1

0xd273,	// (0x00098489) list_recal_day_event_pane_t1

0xd964,	// (0x00098b7a) bg_button_pane_cp045

0x9567,	// (0x0009477d) cntbar_detail_btn_pane_t1

0xa76a,	// (0x00095980) main_callh_pane_ParamLimits

0xa76a,	// (0x00095980) main_callh_pane

0xd964,	// (0x00098b7a) main_coverflow0_pane

0xd964,	// (0x00098b7a) main_wgtman_pane

0x8530,	// (0x00093746) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8530,	// (0x00093746) main_fs_bigclock_unlock_btn_pane

0xc9dd,	// (0x00097bf3) bg_button_pane_cp16

0xc9ed,	// (0x00097c03) cell_tport_appsw_pane_g3

0x9575,	// (0x0009478b) cf0_flow_pane_ParamLimits

0x9575,	// (0x0009478b) cf0_flow_pane

0xd282,	// (0x00098498) listscroll_cf0_pane

0xd28b,	// (0x000984a1) main_cf0_pane_g1

0x958a,	// (0x000947a0) main_cf0_pane_t1_ParamLimits

0x958a,	// (0x000947a0) main_cf0_pane_t1

0x959f,	// (0x000947b5) main_cf0_pane_t2_ParamLimits

0x959f,	// (0x000947b5) main_cf0_pane_t2

0x0001,

0xfe5a,	// (0x0009b070) main_cf0_pane_t_ParamLimits

0xfe5a,	// (0x0009b070) main_cf0_pane_t

0xd29d,	// (0x000984b3) scroll_pane_cp11

0x95b4,	// (0x000947ca) cf0_flow_pane_g1

0x95bc,	// (0x000947d2) cf0_flow_pane_g2

0x0001,

0xfe5f,	// (0x0009b075) cf0_flow_pane_g

0x95c4,	// (0x000947da) cf0_flow_pane_t1

0xd964,	// (0x00098b7a) main_call6_pane

0xd964,	// (0x00098b7a) main_calllock_pane

0x95d2,	// (0x000947e8) call6_btn_grp_pane_ParamLimits

0x95d2,	// (0x000947e8) call6_btn_grp_pane

0x95e8,	// (0x000947fe) call6_pane_g1_ParamLimits

0x95e8,	// (0x000947fe) call6_pane_g1

0x95fb,	// (0x00094811) popup_call6_1st_window_ParamLimits

0x95fb,	// (0x00094811) popup_call6_1st_window

0x960a,	// (0x00094820) popup_call6_2nd_window_ParamLimits

0x960a,	// (0x00094820) popup_call6_2nd_window

0x9619,	// (0x0009482f) cell_call6_btn_pane_ParamLimits

0x9619,	// (0x0009482f) cell_call6_btn_pane

0xe290,	// (0x000994a6) bg_popup_call2_in_pane_cp03

0xd2a6,	// (0x000984bc) popup_call6_1st_window_g1

0xd2ae,	// (0x000984c4) popup_call6_1st_window_g2

0xd2b6,	// (0x000984cc) popup_call6_1st_window_g3

0x0002,

0xfe64,	// (0x0009b07a) popup_call6_1st_window_g

0xd2be,	// (0x000984d4) popup_call6_1st_window_t1

0xd2cd,	// (0x000984e3) popup_call6_1st_window_t2

0xd2db,	// (0x000984f1) popup_call6_1st_window_t3

0x0002,

0xfe6b,	// (0x0009b081) popup_call6_1st_window_t

0xe290,	// (0x000994a6) bg_popup_call2_in_pane_cp04

0xd2a6,	// (0x000984bc) popup_call6_2nd_window_g1

0xd2ae,	// (0x000984c4) popup_call6_2nd_window_g2

0xd2b6,	// (0x000984cc) popup_call6_2nd_window_g3

0x0002,

0xfe64,	// (0x0009b07a) popup_call6_2nd_window_g

0xd2be,	// (0x000984d4) popup_call6_2nd_window_t1

0xd964,	// (0x00098b7a) bg_button_pane_cp15

0xd2e9,	// (0x000984ff) cell_call6_btn_pane_g1

0xd2f2,	// (0x00098508) cell_call6_btn_pane_t1

0x962d,	// (0x00094843) listscroll_wgtman_pane_ParamLimits

0x962d,	// (0x00094843) listscroll_wgtman_pane

0x964e,	// (0x00094864) wgtman_btn_pane_ParamLimits

0x964e,	// (0x00094864) wgtman_btn_pane

0xea9c,	// (0x00099cb2) aid_scroll_copy1

0xd301,	// (0x00098517) list_wgtman_pane

0x968e,	// (0x000948a4) wgtman_btn_pane_g1_ParamLimits

0x968e,	// (0x000948a4) wgtman_btn_pane_g1

0x96ba,	// (0x000948d0) wgtman_btn_pane_t1_ParamLimits

0x96ba,	// (0x000948d0) wgtman_btn_pane_t1

0xd30b,	// (0x00098521) wgtman_btn_pane_t2_ParamLimits

0xd30b,	// (0x00098521) wgtman_btn_pane_t2

0x0001,

0xfe72,	// (0x0009b088) wgtman_btn_pane_t_ParamLimits

0xfe72,	// (0x0009b088) wgtman_btn_pane_t

0x96f7,	// (0x0009490d) listrow_wgtman_pane_ParamLimits

0x96f7,	// (0x0009490d) listrow_wgtman_pane

0x9708,	// (0x0009491e) listrow_wgtman_pane_g1

0x9715,	// (0x0009492b) listrow_wgtman_pane_g2

0x0001,

0xfe77,	// (0x0009b08d) listrow_wgtman_pane_g

0x972d,	// (0x00094943) listrow_wgtman_pane_t1

0x9745,	// (0x0009495b) listrow_wgtman_pane_t2

0x0001,

0xfe7c,	// (0x0009b092) listrow_wgtman_pane_t

0x976b,	// (0x00094981) wait_bar_pane_cp09

0xd322,	// (0x00098538) main_calllock_btn_pane

0xd32a,	// (0x00098540) main_calllock_pane_g1

0xd964,	// (0x00098b7a) bg_button_pane_cp17

0xd333,	// (0x00098549) main_calllock_btn_pane_g1

0xd33c,	// (0x00098552) main_calllock_btn_pane_t1

0xd964,	// (0x00098b7a) main_dialer3_pane

0xd964,	// (0x00098b7a) main_fmrd2_pane

0xac6c,	// (0x00095e82) main_fs_bigclock_unlock_btn_pane_g1

0xd353,	// (0x00098569) main_fs_bigclock_unlock_btn_pane_t1

0x977d,	// (0x00094993) area_fmrd2_info_pane_ParamLimits

0x977d,	// (0x00094993) area_fmrd2_info_pane

0x978c,	// (0x000949a2) area_fmrd2_visual_pane_ParamLimits

0x978c,	// (0x000949a2) area_fmrd2_visual_pane

0x979a,	// (0x000949b0) fmrd2_indi_pane_ParamLimits

0x979a,	// (0x000949b0) fmrd2_indi_pane

0x97a7,	// (0x000949bd) area_fmrd2_visual_pane_g1

0x97af,	// (0x000949c5) area_fmrd2_visual_pane_t1

0x97bd,	// (0x000949d3) area_fmrd2_visual_pane_t2

0x97cb,	// (0x000949e1) area_fmrd2_visual_pane_t3

0x0002,

0xfe86,	// (0x0009b09c) area_fmrd2_visual_pane_t

0x97d9,	// (0x000949ef) area_fmrd2_info_pane_g1

0x97e1,	// (0x000949f7) area_fmrd2_info_pane_t1

0x97ef,	// (0x00094a05) area_fmrd2_info_pane_t2

0x97fd,	// (0x00094a13) area_fmrd2_info_pane_t3

0x980b,	// (0x00094a21) area_fmrd2_info_pane_t4

0x0003,

0xfe8d,	// (0x0009b0a3) area_fmrd2_info_pane_t

0x9819,	// (0x00094a2f) fmrd2_indi_pane_t1

0x9827,	// (0x00094a3d) fmrd2_indi_pane_t2

0x9835,	// (0x00094a4b) fmrd2_indi_pane_t3

0x0002,

0xfe96,	// (0x0009b0ac) fmrd2_indi_pane_t

0xc538,	// (0x0009774e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc538,	// (0x0009774e) list_single_fs_bigclock_indicator_pane_g5

0xc5e6,	// (0x000977fc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc5e6,	// (0x000977fc) list_single_fs_bigclock_indicator_pane_t5

0x8fe9,	// (0x000941ff) aid_cell_bcale_month_pane_ParamLimits

0x8fe9,	// (0x000941ff) aid_cell_bcale_month_pane

0x9007,	// (0x0009421d) bcale_month_pane_ParamLimits

0x9007,	// (0x0009421d) bcale_month_pane

0x901f,	// (0x00094235) bcale_preview_pane_ParamLimits

0x901f,	// (0x00094235) bcale_preview_pane

0xd10b,	// (0x00098321) list_single_fs_bigclock_pane_t1_ParamLimits

0xd12a,	// (0x00098340) list_single_fs_bigclock_pane_t2_ParamLimits

0xd12a,	// (0x00098340) list_single_fs_bigclock_pane_t2

0x0001,

0xfe18,	// (0x0009b02e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe18,	// (0x0009b02e) list_single_fs_bigclock_pane_t

0xd34b,	// (0x00098561) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe81,	// (0x0009b097) main_fs_bigclock_unlock_btn_pane_g

0x9843,	// (0x00094a59) aid_dia3_key_size_ParamLimits

0x9843,	// (0x00094a59) aid_dia3_key_size

0x9852,	// (0x00094a68) aid_dia3_listrow_size_ParamLimits

0x9852,	// (0x00094a68) aid_dia3_listrow_size

0x9865,	// (0x00094a7b) dia3_keypad_fun_pane_ParamLimits

0x9865,	// (0x00094a7b) dia3_keypad_fun_pane

0x9879,	// (0x00094a8f) dia3_keypad_num_pane_ParamLimits

0x9879,	// (0x00094a8f) dia3_keypad_num_pane

0x988a,	// (0x00094aa0) dia3_listscroll_pane_ParamLimits

0x988a,	// (0x00094aa0) dia3_listscroll_pane

0x989b,	// (0x00094ab1) dia3_numentry_pane_ParamLimits

0x989b,	// (0x00094ab1) dia3_numentry_pane

0xd361,	// (0x00098577) dia3_list_pane

0xd36a,	// (0x00098580) scroll_pane_cp12

0xd964,	// (0x00098b7a) bg_dia3_numentry_pane

0x98ad,	// (0x00094ac3) dia3_numentry_pane_t1

0x98bc,	// (0x00094ad2) cell_dia3_key_num_pane

0x98c4,	// (0x00094ada) cell_dia3_key0_fun_pane_ParamLimits

0x98c4,	// (0x00094ada) cell_dia3_key0_fun_pane

0x98d8,	// (0x00094aee) cell_dia3_key1_fun_pane_ParamLimits

0x98d8,	// (0x00094aee) cell_dia3_key1_fun_pane

0x98ef,	// (0x00094b05) dia3_listrow_pane

0xc286,	// (0x0009749c) bg_dia3_numentry_pane_g1

0xd964,	// (0x00098b7a) bg_button_pane_cp21

0xd373,	// (0x00098589) cell_dia3_key_num_pane_t1

0xd381,	// (0x00098597) cell_dia3_key_num_pane_t2

0xd390,	// (0x000985a6) cell_dia3_key_num_pane_t3

0xd39f,	// (0x000985b5) cell_dia3_key_num_pane_t4

0x0003,

0xfe9d,	// (0x0009b0b3) cell_dia3_key_num_pane_t

0xd964,	// (0x00098b7a) bg_button_pane_cp19

0xd3ae,	// (0x000985c4) cell_dia3_key0_fun_pane_g1

0xd964,	// (0x00098b7a) bg_button_pane_cp20

0x9901,	// (0x00094b17) cell_dia3_key1_fun_pane_g1

0x9909,	// (0x00094b1f) area_left_week_number_pane

0x9915,	// (0x00094b2b) area_top_day_name_pane

0x9926,	// (0x00094b3c) frame_month_view_pane

0xd3b6,	// (0x000985cc) grid_month_view_pane

0x9937,	// (0x00094b4d) cell_top_day_name_pane_ParamLimits

0x9937,	// (0x00094b4d) cell_top_day_name_pane

0x995a,	// (0x00094b70) cell_area_left_week_number_pane_ParamLimits

0x995a,	// (0x00094b70) cell_area_left_week_number_pane

0x996e,	// (0x00094b84) cell_month_view_pane_ParamLimits

0x996e,	// (0x00094b84) cell_month_view_pane

0xd3c4,	// (0x000985da) frm_month_g1

0x9993,	// (0x00094ba9) frm_month_g2

0x99a4,	// (0x00094bba) frm_month_g3

0x99b5,	// (0x00094bcb) frm_month_g4

0x99c6,	// (0x00094bdc) frm_month_g5

0x99d7,	// (0x00094bed) frm_month_g6

0x99e8,	// (0x00094bfe) frm_month_g7

0xd3d1,	// (0x000985e7) frm_month_g8

0x99f9,	// (0x00094c0f) frm_month_g9

0x9a09,	// (0x00094c1f) frm_month_g10

0x9a19,	// (0x00094c2f) frm_month_g11

0x9a29,	// (0x00094c3f) frm_month_g12

0x9a39,	// (0x00094c4f) frm_month_g13

0x9a49,	// (0x00094c5f) frm_month_g14

0x9a59,	// (0x00094c6f) frm_month_g15

0x9a6b,	// (0x00094c81) frm_month_g16

0x000f,

0xfea6,	// (0x0009b0bc) frm_month_g

0xd3de,	// (0x000985f4) cell_top_day_name_pane_t1

0x9a7d,	// (0x00094c93) cell_area_left_week_number_pane_g1

0x9a89,	// (0x00094c9f) cell_area_left_week_number_pane_t1

0xae9b,	// (0x000960b1) cell_month_view_pane_g1

0x9a9c,	// (0x00094cb2) cell_month_view_pane_t1

0xd964,	// (0x00098b7a) main_fps_pane

0xc7d2,	// (0x000979e8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc7d2,	// (0x000979e8) cmail_ddmenu_btn02_pane_cp1

0xc7ee,	// (0x00097a04) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc7ee,	// (0x00097a04) cmail_ddmenu_btn02_pane_cp2

0x923b,	// (0x00094451) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x923b,	// (0x00094451) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdcb,	// (0x0009afe1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdcb,	// (0x0009afe1) cmail_ddmenu_btn02_pane_g

0x925a,	// (0x00094470) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x925a,	// (0x00094470) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdd0,	// (0x0009afe6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdd0,	// (0x0009afe6) cmail_ddmenu_btn02_pane_t

0x9aaf,	// (0x00094cc5) fps_text_pane_ParamLimits

0x9aaf,	// (0x00094cc5) fps_text_pane

0x9ac5,	// (0x00094cdb) main_fps_pane_g1_ParamLimits

0x9ac5,	// (0x00094cdb) main_fps_pane_g1

0x9adb,	// (0x00094cf1) wait_bar_pane_cp010_ParamLimits

0x9adb,	// (0x00094cf1) wait_bar_pane_cp010

0xd3f1,	// (0x00098607) fps_text_pane_t1_ParamLimits

0xd3f1,	// (0x00098607) fps_text_pane_t1

0xb65b,	// (0x00096871) cam4_image_uncrop_pane_g1

0xb664,	// (0x0009687a) cam4_image_uncrop_pane_g2

0x6802,	// (0x00091a18) cam4_image_uncrop_pane_g3

0x680b,	// (0x00091a21) cam4_image_uncrop_pane_g4

0x0003,

0xf893,	// (0x0009aaa9) cam4_image_uncrop_pane_g

0x98ef,	// (0x00094b05) dia3_listrow_pane_ParamLimits

0xd964,	// (0x00098b7a) main_phob2_pane

0x8e69,	// (0x0009407f) cell_tport_appsw_pane_cp02_ParamLimits

0x8e69,	// (0x0009407f) cell_tport_appsw_pane_cp02

0x8e79,	// (0x0009408f) cell_tport_appsw_pane_cp03_ParamLimits

0x8e79,	// (0x0009408f) cell_tport_appsw_pane_cp03

0xd964,	// (0x00098b7a) phob2_contact_card_pane

0xd964,	// (0x00098b7a) phob2_listscroll_pane

0xd409,	// (0x0009861f) phob2_list_pane

0xd411,	// (0x00098627) scroll_pane_cp034

0x9aec,	// (0x00094d02) phob2_cc_data_pane_ParamLimits

0x9aec,	// (0x00094d02) phob2_cc_data_pane

0x9b09,	// (0x00094d1f) phob2_cc_listscroll_pane_ParamLimits

0x9b09,	// (0x00094d1f) phob2_cc_listscroll_pane

0x96f7,	// (0x0009490d) list_double_large_graphic_phob2_pane_ParamLimits

0x96f7,	// (0x0009490d) list_double_large_graphic_phob2_pane

0x9b25,	// (0x00094d3b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b25,	// (0x00094d3b) list_double_large_graphic_phob2_pane_g1

0x9b3b,	// (0x00094d51) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9b3b,	// (0x00094d51) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec7,	// (0x0009b0dd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec7,	// (0x0009b0dd) list_double_large_graphic_phob2_pane_g

0x9b47,	// (0x00094d5d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b47,	// (0x00094d5d) list_double_large_graphic_phob2_pane_t1

0x9b5d,	// (0x00094d73) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b5d,	// (0x00094d73) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfecc,	// (0x0009b0e2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfecc,	// (0x0009b0e2) list_double_large_graphic_phob2_pane_t

0xd964,	// (0x00098b7a) list_highlight_pane_cp024

0x9b72,	// (0x00094d88) phob2_cc_button_pane

0x9b7a,	// (0x00094d90) phob2_cc_data_pane_g1_ParamLimits

0x9b7a,	// (0x00094d90) phob2_cc_data_pane_g1

0x9b8f,	// (0x00094da5) phob2_cc_data_pane_g2_ParamLimits

0x9b8f,	// (0x00094da5) phob2_cc_data_pane_g2

0x0001,

0xfed1,	// (0x0009b0e7) phob2_cc_data_pane_g_ParamLimits

0xfed1,	// (0x0009b0e7) phob2_cc_data_pane_g

0x9b9f,	// (0x00094db5) phob2_cc_data_pane_t1_ParamLimits

0x9b9f,	// (0x00094db5) phob2_cc_data_pane_t1

0x9bb7,	// (0x00094dcd) phob2_cc_data_pane_t2_ParamLimits

0x9bb7,	// (0x00094dcd) phob2_cc_data_pane_t2

0x9bcf,	// (0x00094de5) phob2_cc_data_pane_t3_ParamLimits

0x9bcf,	// (0x00094de5) phob2_cc_data_pane_t3

0x0002,

0xfed6,	// (0x0009b0ec) phob2_cc_data_pane_t_ParamLimits

0xfed6,	// (0x0009b0ec) phob2_cc_data_pane_t

0xd419,	// (0x0009862f) phob2_cc_list_pane_ParamLimits

0xd419,	// (0x0009862f) phob2_cc_list_pane

0xb9f0,	// (0x00096c06) scroll_pane_cp035_ParamLimits

0xb9f0,	// (0x00096c06) scroll_pane_cp035

0x4634,	// (0x0008f84a) bg_button_pane_cp033

0xd425,	// (0x0009863b) phob2_cc_button_pane_g1

0xd431,	// (0x00098647) phob2_cc_button_pane_t1

0xd446,	// (0x0009865c) phob2_cc_button_pane_t2

0x0001,

0xfedd,	// (0x0009b0f3) phob2_cc_button_pane_t

0x9be7,	// (0x00094dfd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9be7,	// (0x00094dfd) list_double_large_graphic_phob2_cc_pane

0x9bf8,	// (0x00094e0e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9bf8,	// (0x00094e0e) list_double_large_graphic_phob2_cc_pane_g1

0x9c04,	// (0x00094e1a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9c04,	// (0x00094e1a) list_double_large_graphic_phob2_cc_pane_g2

0x9c10,	// (0x00094e26) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9c10,	// (0x00094e26) list_double_large_graphic_phob2_cc_pane_g3

0x9c1c,	// (0x00094e32) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9c1c,	// (0x00094e32) list_double_large_graphic_phob2_cc_pane_g4

0x9c28,	// (0x00094e3e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9c28,	// (0x00094e3e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfee2,	// (0x0009b0f8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfee2,	// (0x0009b0f8) list_double_large_graphic_phob2_cc_pane_g

0x9c34,	// (0x00094e4a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9c34,	// (0x00094e4a) list_double_large_graphic_phob2_cc_pane_t1

0x9c5d,	// (0x00094e73) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c5d,	// (0x00094e73) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeed,	// (0x0009b103) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeed,	// (0x0009b103) list_double_large_graphic_phob2_cc_pane_t

0xd458,	// (0x0009866e) list_highlight_pane_cp025_ParamLimits

0xd458,	// (0x0009866e) list_highlight_pane_cp025

0x4634,	// (0x0008f84a) bg_button_pane_cp033_ParamLimits

0xd425,	// (0x0009863b) phob2_cc_button_pane_g1_ParamLimits

0xd431,	// (0x00098647) phob2_cc_button_pane_t1_ParamLimits

0xd446,	// (0x0009865c) phob2_cc_button_pane_t2_ParamLimits

0xfedd,	// (0x0009b0f3) phob2_cc_button_pane_t_ParamLimits

0x0fe9,	// (0x0008c1ff) popup_wgtman_window

0xb7f3,	// (0x00096a09) scroll_pane_cp038

0x9670,	// (0x00094886) wgtman_btn_pane_cp_01_ParamLimits

0x9670,	// (0x00094886) wgtman_btn_pane_cp_01

0xd466,	// (0x0009867c) wgtman_content_pane

0xd46f,	// (0x00098685) wgtman_heading_pane

0xd964,	// (0x00098b7a) bg_heading_pane_cp02

0xd478,	// (0x0009868e) wgtman_heading_pane_g1

0xd480,	// (0x00098696) wgtman_heading_pane_t1

0xd48e,	// (0x000986a4) scroll_pane_cp036

0xd496,	// (0x000986ac) wgtman_list_pane

0xc6d1,	// (0x000978e7) wgtman_list_pane_t1_ParamLimits

0xc6d1,	// (0x000978e7) wgtman_list_pane_t1

0xd76f,	// (0x00098985) cam4_grid_pane

0x73c9,	// (0x000925df) bg_button_pane_cp015_ParamLimits

0x73d9,	// (0x000925ef) bg_button_pane_cp016_ParamLimits

0x73eb,	// (0x00092601) bg_button_pane_cp017_ParamLimits

0x743b,	// (0x00092651) popup_vitu2_query_window_g3_ParamLimits

0x743b,	// (0x00092651) popup_vitu2_query_window_g3

0x74ee,	// (0x00092704) popup_vitu2_query_window_t6_ParamLimits

0x74ee,	// (0x00092704) popup_vitu2_query_window_t6

0x7519,	// (0x0009272f) popup_vitu2_query_window_t7_ParamLimits

0x7519,	// (0x0009272f) popup_vitu2_query_window_t7

0xb65b,	// (0x00096871) cam4_grid_pane_g1

0xb664,	// (0x0009687a) cam4_grid_pane_g2

0xd49e,	// (0x000986b4) cam4_grid_pane_g3

0xd4a7,	// (0x000986bd) cam4_grid_pane_g4

0x0003,

0xfef2,	// (0x0009b108) cam4_grid_pane_g

0x1ee4,	// (0x0008d0fa) aid_placing_vt_slider_lsc_ParamLimits

0x2151,	// (0x0008d367) vidtel_button_pane_ParamLimits

0x2151,	// (0x0008d367) vidtel_button_pane

0xd964,	// (0x00098b7a) bg_button_pane_cp034

0x9c86,	// (0x00094e9c) vidtel_button_pane_g1

0x9c8e,	// (0x00094ea4) vidtel_button_pane_t1

0xb937,	// (0x00096b4d) aid_size_vtel_slider_touch

0xb9f0,	// (0x00096c06) scroll_pane_cp039

0x8260,	// (0x00093476) ncim_query_button_pane_cp01_ParamLimits

0x827f,	// (0x00093495) ncimui_query_pane_g1_ParamLimits

0x4634,	// (0x0008f84a) input_focus_pane_cp012_ParamLimits

0xc2cc,	// (0x000974e2) ncim_query_entry_pane_t1_ParamLimits

0xb9f0,	// (0x00096c06) scroll_pane_cp039_ParamLimits

0xeb71,	// (0x00099d87) navi_pane_bcale_mc_g1

0xeb79,	// (0x00099d8f) navi_pane_bcale_mc_t1

0xc837,	// (0x00097a4d) main_sp_fs_email_pane_g1

0xc843,	// (0x00097a59) main_sp_fs_email_pane_g2

0x0001,

0xfc83,	// (0x0009ae99) main_sp_fs_email_pane_g

0xcd33,	// (0x00097f49) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcd33,	// (0x00097f49) list_single_cale_mrui_row_pane_g3

0x927a,	// (0x00094490) list_single_recal_day_pane_g5_event_pane

0xcf75,	// (0x0009818b) list_single_recal_day_pane_g7

0xd4b0,	// (0x000986c6) list_recal_day_event_pane_cp01

0xd4b9,	// (0x000986cf) list_recal_vselct_arw_lo_pane_cp01

0xd4c1,	// (0x000986d7) list_recal_vselct_arw_up_pane_cp01

0xd4c9,	// (0x000986df) list_recal_vselct_pane_cp01

0xb959,	// (0x00096b6f) list_recal_day_event_pane_cp01_g1

0xd4d3,	// (0x000986e9) list_recal_day_event_pane_cp01_t1

0xcf7d,	// (0x00098193) list_single_recal_day_pane_t1_ParamLimits

0xcf8f,	// (0x000981a5) list_single_recal_day_pane_t2_ParamLimits

0xfde0,	// (0x0009aff6) list_single_recal_day_pane_t_ParamLimits

0xe00e,	// (0x00099224) bg_notes_pane_ParamLimits

0xe0bd,	// (0x000992d3) list_notes_pane_ParamLimits

0x12ac,	// (0x0008c4c2) scroll_pane_cp06_ParamLimits

0xe0df,	// (0x000992f5) main_notes_pane_ParamLimits

0xd964,	// (0x00098b7a) main_welc_pane

0x9ca4,	// (0x00094eba) main_welc_body_pane_ParamLimits

0x9ca4,	// (0x00094eba) main_welc_body_pane

0x9cc0,	// (0x00094ed6) main_welc_opti_pane_ParamLimits

0x9cc0,	// (0x00094ed6) main_welc_opti_pane

0x9cfd,	// (0x00094f13) main_welc_pane_t1_ParamLimits

0x9cfd,	// (0x00094f13) main_welc_pane_t1

0xd4e1,	// (0x000986f7) main_welc_body_row_pane_ParamLimits

0xd4e1,	// (0x000986f7) main_welc_body_row_pane

0xd4f4,	// (0x0009870a) main_welc_opti_row_pane_ParamLimits

0xd4f4,	// (0x0009870a) main_welc_opti_row_pane

0xd502,	// (0x00098718) main_welc_opti_row_pane_g1

0x9d17,	// (0x00094f2d) main_welc_opti_row_pane_t1

0xd50a,	// (0x00098720) main_welc_body_row_pane_t1

0xd1ea,	// (0x00098400) popup_notif_wgt_heading_pane

0xd204,	// (0x0009841a) aid_size_list_notif_wgt_del_ParamLimits

0xd211,	// (0x00098427) list_notif_wgt_row_pane_g1_ParamLimits

0xd21d,	// (0x00098433) list_notif_wgt_row_pane_g2_ParamLimits

0xd22c,	// (0x00098442) list_notif_wgt_row_pane_g3_ParamLimits

0xfe47,	// (0x0009b05d) list_notif_wgt_row_pane_g_ParamLimits

0xd239,	// (0x0009844f) list_notif_wgt_row_pane_t1_ParamLimits

0xd24f,	// (0x00098465) list_notif_wgt_row_pane_t2_ParamLimits

0xd261,	// (0x00098477) list_notif_wgt_row_pane_t3_ParamLimits

0xfe4e,	// (0x0009b064) list_notif_wgt_row_pane_t_ParamLimits

0x9708,	// (0x0009491e) listrow_wgtman_pane_g1_ParamLimits

0x9715,	// (0x0009492b) listrow_wgtman_pane_g2_ParamLimits

0xfe77,	// (0x0009b08d) listrow_wgtman_pane_g_ParamLimits

0x972d,	// (0x00094943) listrow_wgtman_pane_t1_ParamLimits

0x9745,	// (0x0009495b) listrow_wgtman_pane_t2_ParamLimits

0xfe7c,	// (0x0009b092) listrow_wgtman_pane_t_ParamLimits

0x976b,	// (0x00094981) wait_bar_pane_cp09_ParamLimits

0xd964,	// (0x00098b7a) bg_popup_heading_pane_cp02

0xd519,	// (0x0009872f) popup_notif_wgt_heading_pane_g1

0xd521,	// (0x00098737) popup_notif_wgt_heading_pane_t1

0xd964,	// (0x00098b7a) main_vids_pane

0xd964,	// (0x00098b7a) vids_listscroll_pane

0x9d26,	// (0x00094f3c) scroll_pane_cp040

0xd964,	// (0x00098b7a) vids_list_pane

0x9d31,	// (0x00094f47) vids_list_double_pane_ParamLimits

0x9d31,	// (0x00094f47) vids_list_double_pane

0x9d41,	// (0x00094f57) vids_list_double_pane_g1

0x9d4a,	// (0x00094f60) vids_list_double_pane_t1

0x9d59,	// (0x00094f6f) vids_list_double_pane_t2

0x0001,

0xff00,	// (0x0009b116) vids_list_double_pane_t

0x9df3,	// (0x00095009) main_ncimui_pane_ParamLimits

0x8098,	// (0x000932ae) main_ncimui_pane_g1_ParamLimits

0x80a4,	// (0x000932ba) main_ncimui_pane_g2_ParamLimits

0x80a4,	// (0x000932ba) main_ncimui_pane_g2

0x0001,

0xfb88,	// (0x0009ad9e) main_ncimui_pane_g_ParamLimits

0xfb88,	// (0x0009ad9e) main_ncimui_pane_g

0x9cd7,	// (0x00094eed) main_welc_pane_g1_ParamLimits

0x9cd7,	// (0x00094eed) main_welc_pane_g1

0x9cea,	// (0x00094f00) main_welc_pane_g2_ParamLimits

0x9cea,	// (0x00094f00) main_welc_pane_g2

0x0001,

0xfefb,	// (0x0009b111) main_welc_pane_g_ParamLimits

0xfefb,	// (0x0009b111) main_welc_pane_g

0xe00e,	// (0x00099224) listscroll_mce_pane_ParamLimits

0xecc4,	// (0x00099eda) wait_bar_pane_cp10

0xa75e,	// (0x00095974) main_cale_day_pane_ParamLimits

0xa75e,	// (0x00095974) main_cale_week_pane_ParamLimits

0xe00e,	// (0x00099224) main_messa_pane_ParamLimits

0x5bda,	// (0x00090df0) main_clock2_btn_pane_ParamLimits

0x5bda,	// (0x00090df0) main_clock2_btn_pane

0xb04a,	// (0x00096260) main_clock2_btn_pane_cp01_ParamLimits

0xb04a,	// (0x00096260) main_clock2_btn_pane_cp01

0xccbf,	// (0x00097ed5) list_cale_mrui_pane_ParamLimits

0xd295,	// (0x000984ab) main_cf0_pane_g2

0x0001,

0xfe55,	// (0x0009b06b) main_cf0_pane_g

0x9909,	// (0x00094b1f) area_left_week_number_pane_ParamLimits

0x9915,	// (0x00094b2b) area_top_day_name_pane_ParamLimits

0x9926,	// (0x00094b3c) frame_month_view_pane_ParamLimits

0xd3b6,	// (0x000985cc) grid_month_view_pane_ParamLimits

0xd3c4,	// (0x000985da) frm_month_g1_ParamLimits

0x9993,	// (0x00094ba9) frm_month_g2_ParamLimits

0x99a4,	// (0x00094bba) frm_month_g3_ParamLimits

0x99b5,	// (0x00094bcb) frm_month_g4_ParamLimits

0x99c6,	// (0x00094bdc) frm_month_g5_ParamLimits

0x99d7,	// (0x00094bed) frm_month_g6_ParamLimits

0x99e8,	// (0x00094bfe) frm_month_g7_ParamLimits

0xd3d1,	// (0x000985e7) frm_month_g8_ParamLimits

0x99f9,	// (0x00094c0f) frm_month_g9_ParamLimits

0x9a09,	// (0x00094c1f) frm_month_g10_ParamLimits

0x9a19,	// (0x00094c2f) frm_month_g11_ParamLimits

0x9a29,	// (0x00094c3f) frm_month_g12_ParamLimits

0x9a39,	// (0x00094c4f) frm_month_g13_ParamLimits

0x9a49,	// (0x00094c5f) frm_month_g14_ParamLimits

0x9a59,	// (0x00094c6f) frm_month_g15_ParamLimits

0x9a6b,	// (0x00094c81) frm_month_g16_ParamLimits

0xfea6,	// (0x0009b0bc) frm_month_g_ParamLimits

0xd3de,	// (0x000985f4) cell_top_day_name_pane_t1_ParamLimits

0x9a7d,	// (0x00094c93) cell_area_left_week_number_pane_g1_ParamLimits

0x9a89,	// (0x00094c9f) cell_area_left_week_number_pane_t1_ParamLimits

0xae9b,	// (0x000960b1) cell_month_view_pane_g1_ParamLimits

0x9a9c,	// (0x00094cb2) cell_month_view_pane_t1_ParamLimits

0xe006,	// (0x0009921c) main_clock2_btn_pane_g1

0xd52f,	// (0x00098745) main_clock2_btn_pane_t1

0x4634,	// (0x0008f84a) listscroll_cmail_pane_ParamLimits

0xc837,	// (0x00097a4d) main_sp_fs_email_pane_g1_ParamLimits

0xc843,	// (0x00097a59) main_sp_fs_email_pane_g2_ParamLimits

0xfc83,	// (0x0009ae99) main_sp_fs_email_pane_g_ParamLimits

0xcee5,	// (0x000980fb) list_recal_day_pane_ParamLimits

0xcef6,	// (0x0009810c) mian_recal_day_pane_t1

0x8b13,	// (0x00093d29) list_single_dyc_row_text_pane_t4_ParamLimits

0x8b13,	// (0x00093d29) list_single_dyc_row_text_pane_t4

0x8b4a,	// (0x00093d60) list_single_dyc_row_text_pane_t5_ParamLimits

0x8b4a,	// (0x00093d60) list_single_dyc_row_text_pane_t5

0xc90b,	// (0x00097b21) list_single_dyc_row_text_pane_t6_ParamLimits

0xc90b,	// (0x00097b21) list_single_dyc_row_text_pane_t6

0xe6a0,	// (0x000998b6) aid_mgn_list_cale_time_pane

0x9df3,	// (0x00095009) main_gallery2_pane_ParamLimits

0xb05e,	// (0x00096274) main_clock2_pane_cp01_t1

0xb06c,	// (0x00096282) main_clock2_pane_cp01_t3

0x0001,

0xf76e,	// (0x0009a984) main_clock2_pane_cp01_t

0x162d,	// (0x0008c843) cale_week_scroll_pane_g16_ParamLimits

0x162d,	// (0x0008c843) cale_week_scroll_pane_g16

0xe290,	// (0x000994a6) vorec_slider_pane

0x9c8e,	// (0x00094ea4) vidtel_button_pane_t1_ParamLimits

0x92db,	// (0x000944f1) main_fs_bigclock_clock_pane_g1_ParamLimits

0x92db,	// (0x000944f1) main_fs_bigclock_clock_pane_g2_ParamLimits

0x92ec,	// (0x00094502) main_fs_bigclock_clock_pane_g3_ParamLimits

0x92ec,	// (0x00094502) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe03,	// (0x0009b019) main_fs_bigclock_clock_pane_g_ParamLimits

0x92ff,	// (0x00094515) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9315,	// (0x0009452b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe0c,	// (0x0009b022) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
