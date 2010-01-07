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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00025049 };

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
0x2322,	// (0x0002736b) Screen

0x232e,	// (0x00027377) application_window

0x2398,	// (0x000273e1) area_bottom_pane_ParamLimits

0x2398,	// (0x000273e1) area_bottom_pane

0x23f5,	// (0x0002743e) area_top_pane_ParamLimits

0x23f5,	// (0x0002743e) area_top_pane

0x2452,	// (0x0002749b) call_video_uplink_pane_ParamLimits

0x2452,	// (0x0002749b) call_video_uplink_pane

0x2483,	// (0x000274cc) main_pane_ParamLimits

0x2483,	// (0x000274cc) main_pane

0xbf2c,	// (0x00030f75) context_pane

0x69c1,	// (0x0002ba0a) navi_pane

0x69e9,	// (0x0002ba32) popup_cale_events_window_ParamLimits

0x69e9,	// (0x0002ba32) popup_cale_events_window

0xbf3f,	// (0x00030f88) popup_mup_playback_window

0x6a01,	// (0x0002ba4a) signal_pane

0x2fc4,	// (0x0002800d) main_browser_pane

0x53d7,	// (0x0002a420) main_burst_pane

0x6721,	// (0x0002b76a) main_calc_pane

0x53d7,	// (0x0002a420) main_cale_day_pane

0x2fc4,	// (0x0002800d) main_cale_month_pane

0x53d7,	// (0x0002a420) main_cale_week_pane

0x53d7,	// (0x0002a420) main_call_pane

0x2a8c,	// (0x00027ad5) main_call_poc_pane

0x53d7,	// (0x0002a420) main_camera_pane

0x53d7,	// (0x0002a420) main_chi_dic_pane

0x4f48,	// (0x00029f91) main_clock_pane

0x2a8c,	// (0x00027ad5) main_fmradio_pane

0x53d7,	// (0x0002a420) main_graph_messa_pane

0x2a8c,	// (0x00027ad5) main_help_pane

0x2fc4,	// (0x0002800d) main_im_pane

0x2ce7,	// (0x00027d30) main_image_pane_ParamLimits

0x2ce7,	// (0x00027d30) main_image_pane

0x2a8c,	// (0x00027ad5) main_location2_pane

0x53d7,	// (0x0002a420) main_location_pane

0x2a8c,	// (0x00027ad5) main_messa_pane

0x2a8c,	// (0x00027ad5) main_mp2_pane

0x53d7,	// (0x0002a420) main_mp_pane

0x2a8c,	// (0x00027ad5) main_msg_pane

0x2a8c,	// (0x00027ad5) main_mup_eq_pane

0x2a8c,	// (0x00027ad5) main_mup_pane

0x53d7,	// (0x0002a420) main_notes_pane

0x2a8c,	// (0x00027ad5) main_pec_pane

0x2a8c,	// (0x00027ad5) main_phob_pane

0x2a8c,	// (0x00027ad5) main_pinb_pane

0x2a8c,	// (0x00027ad5) main_postcard_pane

0x2a8c,	// (0x00027ad5) main_qdial_pane

0x53d7,	// (0x0002a420) main_skin_pane

0x2a8c,	// (0x00027ad5) main_smil2_pane

0x53d7,	// (0x0002a420) main_smil_pane

0x53d7,	// (0x0002a420) main_video_pane

0x53d7,	// (0x0002a420) main_video_tele_pane

0x2ce7,	// (0x00027d30) main_viewer_pane_ParamLimits

0x2ce7,	// (0x00027d30) main_viewer_pane

0x53d7,	// (0x0002a420) main_vorec_pane

0x6775,	// (0x0002b7be) popup_blid_sat_info_window_ParamLimits

0x6775,	// (0x0002b7be) popup_blid_sat_info_window

0x67cd,	// (0x0002b816) popup_dyc_status_message_window_ParamLimits

0x67cd,	// (0x0002b816) popup_dyc_status_message_window

0x67e5,	// (0x0002b82e) popup_grid_large_graphic_window_ParamLimits

0x67e5,	// (0x0002b82e) popup_grid_large_graphic_window

0x689b,	// (0x0002b8e4) popup_loc_request_window_ParamLimits

0x689b,	// (0x0002b8e4) popup_loc_request_window

0x6999,	// (0x0002b9e2) popup_wml_address_window_ParamLimits

0x6999,	// (0x0002b9e2) popup_wml_address_window

0x655b,	// (0x0002b5a4) call_muted_g1

0x6148,	// (0x0002b191) popup_call_audio_conf_window_ParamLimits

0x6148,	// (0x0002b191) popup_call_audio_conf_window

0x656f,	// (0x0002b5b8) popup_call_audio_first_window_ParamLimits

0x656f,	// (0x0002b5b8) popup_call_audio_first_window

0x65e5,	// (0x0002b62e) popup_call_audio_in_window_ParamLimits

0x65e5,	// (0x0002b62e) popup_call_audio_in_window

0x6621,	// (0x0002b66a) popup_call_audio_out_window_ParamLimits

0x6621,	// (0x0002b66a) popup_call_audio_out_window

0x665b,	// (0x0002b6a4) popup_call_audio_second_window_ParamLimits

0x665b,	// (0x0002b6a4) popup_call_audio_second_window

0x66b1,	// (0x0002b6fa) popup_call_audio_wait_window_ParamLimits

0x66b1,	// (0x0002b6fa) popup_call_audio_wait_window

0x66e6,	// (0x0002b72f) popup_number_entry_window_ParamLimits

0x66e6,	// (0x0002b72f) popup_number_entry_window

0x2622,	// (0x0002766b) bg_popup_call_pane_cp05_ParamLimits

0x2622,	// (0x0002766b) bg_popup_call_pane_cp05

0x2642,	// (0x0002768b) popup_number_entry_window_t1

0x2655,	// (0x0002769e) popup_number_entry_window_t2

0x2667,	// (0x000276b0) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00034144) popup_number_entry_window_t

0x26ae,	// (0x000276f7) text_title_cp2

0x26c1,	// (0x0002770a) bg_popup_call_pane_cp_ParamLimits

0x26c1,	// (0x0002770a) bg_popup_call_pane_cp

0x26cf,	// (0x00027718) call_thumbnail_pane

0x26d7,	// (0x00027720) popup_call_audio_in_window_g1_ParamLimits

0x26d7,	// (0x00027720) popup_call_audio_in_window_g1

0x26e3,	// (0x0002772c) popup_call_audio_in_window_g2_ParamLimits

0x26e3,	// (0x0002772c) popup_call_audio_in_window_g2

0x26ef,	// (0x00027738) popup_call_audio_in_window_g3_ParamLimits

0x26ef,	// (0x00027738) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0003414d) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0003414d) popup_call_audio_in_window_g

0x26fb,	// (0x00027744) popup_call_audio_in_window_t1_ParamLimits

0x26fb,	// (0x00027744) popup_call_audio_in_window_t1

0x2716,	// (0x0002775f) popup_call_audio_in_window_t2_ParamLimits

0x2716,	// (0x0002775f) popup_call_audio_in_window_t2

0x2731,	// (0x0002777a) popup_call_audio_in_window_t3_ParamLimits

0x2731,	// (0x0002777a) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00034154) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00034154) popup_call_audio_in_window_t

0x26c1,	// (0x0002770a) bg_popup_call_pane_cp01_ParamLimits

0x26c1,	// (0x0002770a) bg_popup_call_pane_cp01

0x26cf,	// (0x00027718) call_thumbnail_pane_cp02

0x2744,	// (0x0002778d) call_type_pane_cp022

0x274c,	// (0x00027795) popup_call_audio_out_window_g1_ParamLimits

0x274c,	// (0x00027795) popup_call_audio_out_window_g1

0x275e,	// (0x000277a7) popup_call_audio_out_window_g2_ParamLimits

0x275e,	// (0x000277a7) popup_call_audio_out_window_g2

0x276a,	// (0x000277b3) popup_call_audio_out_window_g3_ParamLimits

0x276a,	// (0x000277b3) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0003415b) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0003415b) popup_call_audio_out_window_g

0x277c,	// (0x000277c5) popup_call_audio_out_window_t1_ParamLimits

0x277c,	// (0x000277c5) popup_call_audio_out_window_t1

0x2794,	// (0x000277dd) popup_call_audio_out_window_t2_ParamLimits

0x2794,	// (0x000277dd) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00034162) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00034162) popup_call_audio_out_window_t

0x27a9,	// (0x000277f2) bg_popup_call_pane_ParamLimits

0x27a9,	// (0x000277f2) bg_popup_call_pane

0x282d,	// (0x00027876) call_thumbnail_pane_cp_ParamLimits

0x282d,	// (0x00027876) call_thumbnail_pane_cp

0x2851,	// (0x0002789a) call_type_pane_cp01_ParamLimits

0x2851,	// (0x0002789a) call_type_pane_cp01

0x2895,	// (0x000278de) popup_call_audio_first_window_g1_ParamLimits

0x2895,	// (0x000278de) popup_call_audio_first_window_g1

0x28e1,	// (0x0002792a) popup_call_audio_first_window_g2_ParamLimits

0x28e1,	// (0x0002792a) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00034167) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00034167) popup_call_audio_first_window_g

0x2925,	// (0x0002796e) popup_call_audio_first_window_t1_ParamLimits

0x2925,	// (0x0002796e) popup_call_audio_first_window_t1

0x29d1,	// (0x00027a1a) popup_call_audio_first_window_t4_ParamLimits

0x29d1,	// (0x00027a1a) popup_call_audio_first_window_t4

0x2a5d,	// (0x00027aa6) popup_call_audio_first_window_t5_ParamLimits

0x2a5d,	// (0x00027aa6) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0003416c) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0003416c) popup_call_audio_first_window_t

0x2a8c,	// (0x00027ad5) bg_popup_call_pane_cp02

0x2a96,	// (0x00027adf) call_type_pane_cp023

0x2a9e,	// (0x00027ae7) popup_call_audio_wait_window_g1

0x2aa6,	// (0x00027aef) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00034173) popup_call_audio_wait_window_g

0x2aae,	// (0x00027af7) popup_call_audio_wait_window_t3

0x2abc,	// (0x00027b05) bg_popup_call_pane_cp03_ParamLimits

0x2abc,	// (0x00027b05) bg_popup_call_pane_cp03

0x2b1c,	// (0x00027b65) call_thumbnail_pane_cp011_ParamLimits

0x2b1c,	// (0x00027b65) call_thumbnail_pane_cp011

0x2b28,	// (0x00027b71) call_type_pane_cp034_ParamLimits

0x2b28,	// (0x00027b71) call_type_pane_cp034

0x2b64,	// (0x00027bad) popup_call_audio_second_window_g1_ParamLimits

0x2b64,	// (0x00027bad) popup_call_audio_second_window_g1

0x2ba0,	// (0x00027be9) popup_call_audio_second_window_g2_ParamLimits

0x2ba0,	// (0x00027be9) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00034178) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00034178) popup_call_audio_second_window_g

0x2bdc,	// (0x00027c25) popup_call_audio_second_window_t1_ParamLimits

0x2bdc,	// (0x00027c25) popup_call_audio_second_window_t1

0x2c5d,	// (0x00027ca6) popup_call_audio_second_window_t2_ParamLimits

0x2c5d,	// (0x00027ca6) popup_call_audio_second_window_t2

0x2c93,	// (0x00027cdc) popup_call_audio_second_window_t3_ParamLimits

0x2c93,	// (0x00027cdc) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0003417d) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0003417d) popup_call_audio_second_window_t

0x2a8c,	// (0x00027ad5) bg_popup_call_pane_cp04

0x2cc9,	// (0x00027d12) list_conf_pane

0x2cd1,	// (0x00027d1a) popup_call_audio_conf_window_t1

0x2cdf,	// (0x00027d28) call_thumbnail_pane_g1

0x2ce7,	// (0x00027d30) bg_pinb_pane_ParamLimits

0x2ce7,	// (0x00027d30) bg_pinb_pane

0x2cf5,	// (0x00027d3e) find_pinb_pane

0x2cfe,	// (0x00027d47) listscroll_pinb_pane_ParamLimits

0x2cfe,	// (0x00027d47) listscroll_pinb_pane

0x2d0d,	// (0x00027d56) pinb_bg_pane_g1

0x2d17,	// (0x00027d60) pinb_bg_pane_g2

0x2d23,	// (0x00027d6c) pinb_bg_pane_g3

0x2d2f,	// (0x00027d78) pinb_bg_pane_g4

0x2d3b,	// (0x00027d84) pinb_bg_pane_g5

0x2d47,	// (0x00027d90) pinb_bg_pane_g6

0x2d52,	// (0x00027d9b) pinb_bg_pane_g7

0x2d5d,	// (0x00027da6) pinb_bg_pane_g8

0x2d68,	// (0x00027db1) pinb_bg_pane_g9

0x2d72,	// (0x00027dbb) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00034184) pinb_bg_pane_g

0x2d8f,	// (0x00027dd8) grid_pinb_pane

0x2d98,	// (0x00027de1) list_pinb_pane

0x2da1,	// (0x00027dea) scroll_pane_cp01_ParamLimits

0x2da1,	// (0x00027dea) scroll_pane_cp01

0x2db3,	// (0x00027dfc) find_pinb_pane_g1_ParamLimits

0x2db3,	// (0x00027dfc) find_pinb_pane_g1

0x2dcb,	// (0x00027e14) find_pinb_pane_t1

0x2ddd,	// (0x00027e26) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0003419e) find_pinb_pane_t

0x2df2,	// (0x00027e3b) input_focus_pane_cp01_ParamLimits

0x2df2,	// (0x00027e3b) input_focus_pane_cp01

0x2dfe,	// (0x00027e47) cell_pinb_pane_ParamLimits

0x2dfe,	// (0x00027e47) cell_pinb_pane

0x2e30,	// (0x00027e79) cell_pinb_pane_g1_ParamLimits

0x2e30,	// (0x00027e79) cell_pinb_pane_g1

0x2e40,	// (0x00027e89) cell_pinb_pane_g2_ParamLimits

0x2e40,	// (0x00027e89) cell_pinb_pane_g2

0x2e4c,	// (0x00027e95) cell_pinb_pane_g3_ParamLimits

0x2e4c,	// (0x00027e95) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x000341a3) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x000341a3) cell_pinb_pane_g

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp01

0x2e58,	// (0x00027ea1) list_pinb_item_pane_ParamLimits

0x2e58,	// (0x00027ea1) list_pinb_item_pane

0x2a8c,	// (0x00027ad5) list_highlight_pane_cp02

0x2e6c,	// (0x00027eb5) list_pinb_item_pane_g1_ParamLimits

0x2e6c,	// (0x00027eb5) list_pinb_item_pane_g1

0x2e79,	// (0x00027ec2) list_pinb_item_pane_g2_ParamLimits

0x2e79,	// (0x00027ec2) list_pinb_item_pane_g2

0x2e85,	// (0x00027ece) list_pinb_item_pane_g3_ParamLimits

0x2e85,	// (0x00027ece) list_pinb_item_pane_g3

0x2e96,	// (0x00027edf) list_pinb_item_pane_g4_ParamLimits

0x2e96,	// (0x00027edf) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x000341aa) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x000341aa) list_pinb_item_pane_g

0x2ea2,	// (0x00027eeb) list_pinb_item_pane_t1_ParamLimits

0x2ea2,	// (0x00027eeb) list_pinb_item_pane_t1

0x1107,	// (0x00026150) calc_display_pane

0x112d,	// (0x00026176) calc_paper_pane

0x1150,	// (0x00026199) grid_calc_pane

0x2a8c,	// (0x00027ad5) bg_list_pane_cp01

0x2eb9,	// (0x00027f02) clock_g1

0x2ec1,	// (0x00027f0a) clock_g2

0x0001,

0xf16a,	// (0x000341b3) clock_g

0x2ec9,	// (0x00027f12) clock_t1_ParamLimits

0x2ec9,	// (0x00027f12) clock_t1

0x2ede,	// (0x00027f27) clock_t2_ParamLimits

0x2ede,	// (0x00027f27) clock_t2

0x2ef0,	// (0x00027f39) clock_t3_ParamLimits

0x2ef0,	// (0x00027f39) clock_t3

0x2f02,	// (0x00027f4b) clock_t4_ParamLimits

0x2f02,	// (0x00027f4b) clock_t4

0x2f14,	// (0x00027f5d) clock_t5_ParamLimits

0x2f14,	// (0x00027f5d) clock_t5

0x2f29,	// (0x00027f72) clock_t6_ParamLimits

0x2f29,	// (0x00027f72) clock_t6

0x2f3b,	// (0x00027f84) clock_t7_ParamLimits

0x2f3b,	// (0x00027f84) clock_t7

0x2f4d,	// (0x00027f96) clock_t8_ParamLimits

0x2f4d,	// (0x00027f96) clock_t8

0x2f61,	// (0x00027faa) clock_t9_ParamLimits

0x2f61,	// (0x00027faa) clock_t9

0x0008,

0xf16f,	// (0x000341b8) clock_t_ParamLimits

0xf16f,	// (0x000341b8) clock_t

0x2f75,	// (0x00027fbe) popup_clock_analogue_window_cp02

0x2f75,	// (0x00027fbe) popup_clock_digital_window_cp01

0x2f7d,	// (0x00027fc6) listscroll_help_pane

0x2a8c,	// (0x00027ad5) phob_pre_status_pane

0x2f87,	// (0x00027fd0) grid_qdial_pane

0x2a8c,	// (0x00027ad5) listscroll_mce_pane

0x2f91,	// (0x00027fda) bg_notes_pane

0x2f9b,	// (0x00027fe4) list_notes_pane

0x2fa5,	// (0x00027fee) scroll_pane_cp06

0x2fb0,	// (0x00027ff9) bg_calc_paper_pane

0xadfe,	// (0x0002fe47) list_calc_pane

0x2fc4,	// (0x0002800d) bg_calc_display_pane

0x117c,	// (0x000261c5) calc_display_pane_t1

0x118e,	// (0x000261d7) calc_display_pane_t2

0xae18,	// (0x0002fe61) calc_display_pane_t3

0x0002,

0xf182,	// (0x000341cb) calc_display_pane_t

0x11a0,	// (0x000261e9) cell_calc_pane_ParamLimits

0x11a0,	// (0x000261e9) cell_calc_pane

0x2fd0,	// (0x00028019) bg_calc_paper_pane_g1

0x2fdc,	// (0x00028025) bg_calc_paper_pane_g2

0x2fe8,	// (0x00028031) bg_calc_paper_pane_g3

0x2ff4,	// (0x0002803d) bg_calc_paper_pane_g4

0x3000,	// (0x00028049) bg_calc_paper_pane_g5

0x300c,	// (0x00028055) bg_calc_paper_pane_g6

0x301b,	// (0x00028064) bg_calc_paper_pane_g7

0x302a,	// (0x00028073) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x000341d2) bg_calc_paper_pane_g

0x303d,	// (0x00028086) calc_bg_paper_pane_g9

0x3050,	// (0x00028099) list_calc_item_pane_ParamLimits

0x3050,	// (0x00028099) list_calc_item_pane

0x3066,	// (0x000280af) list_calc_item_pane_g1

0xae2a,	// (0x0002fe73) list_calc_item_pane_t1_ParamLimits

0xae2a,	// (0x0002fe73) list_calc_item_pane_t1

0x11d5,	// (0x0002621e) list_calc_item_pane_t2_ParamLimits

0x11d5,	// (0x0002621e) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x000341e3) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x000341e3) list_calc_item_pane_t

0x3073,	// (0x000280bc) cell_calc_pane_g1

0x307d,	// (0x000280c6) grid_highlight_pane_cp02

0x309f,	// (0x000280e8) bg_calc_display_pane_g1

0xae3c,	// (0x0002fe85) bg_calc_display_pane_g2

0x30a8,	// (0x000280f1) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x000341ed) bg_calc_display_pane_g

0x1209,	// (0x00026252) cell_qdial_pane_ParamLimits

0x1209,	// (0x00026252) cell_qdial_pane

0x30b1,	// (0x000280fa) cell_qdial_pane_g1_ParamLimits

0x30b1,	// (0x000280fa) cell_qdial_pane_g1

0x30c7,	// (0x00028110) cell_qdial_pane_g2_ParamLimits

0x30c7,	// (0x00028110) cell_qdial_pane_g2

0x30d8,	// (0x00028121) cell_qdial_pane_g3_ParamLimits

0x30d8,	// (0x00028121) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x000341f4) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x000341f4) cell_qdial_pane_g

0x30fa,	// (0x00028143) cell_qdial_pane_t1_ParamLimits

0x30fa,	// (0x00028143) cell_qdial_pane_t1

0x3112,	// (0x0002815b) cell_qdial_pane_t2_ParamLimits

0x3112,	// (0x0002815b) cell_qdial_pane_t2

0x3125,	// (0x0002816e) cell_qdial_pane_t3_ParamLimits

0x3125,	// (0x0002816e) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x000341fd) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x000341fd) cell_qdial_pane_t

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp04

0x3138,	// (0x00028181) thumbnail_qdial_pane_ParamLimits

0x3138,	// (0x00028181) thumbnail_qdial_pane

0x3194,	// (0x000281dd) list_help_pane

0x319d,	// (0x000281e6) scroll_pane_cp02

0x31a6,	// (0x000281ef) help_list_pane_t1_ParamLimits

0x31a6,	// (0x000281ef) help_list_pane_t1

0xae46,	// (0x0002fe8f) bg_notes_pane_g2

0xae4e,	// (0x0002fe97) bg_notes_pane_g3

0xae56,	// (0x0002fe9f) notes_bg_pane_g1

0xae5e,	// (0x0002fea7) notes_bg_pane_g4

0xae66,	// (0x0002feaf) notes_bg_pane_g5

0xae6e,	// (0x0002feb7) notes_bg_pane_g6

0xae76,	// (0x0002febf) notes_bg_pane_g7

0xae7e,	// (0x0002fec7) notes_bg_pane_g8

0xae86,	// (0x0002fecf) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0003421b) notes_bg_pane_g

0x31c6,	// (0x0002820f) list_notes_text_pane_ParamLimits

0x31c6,	// (0x0002820f) list_notes_text_pane

0x31dd,	// (0x00028226) list_notes_text_pane_g1

0x31e6,	// (0x0002822f) list_notes_text_pane_t1

0x2fc4,	// (0x0002800d) listscroll_cale_week_pane

0x3222,	// (0x0002826b) bg_cale_heading_pane

0x323a,	// (0x00028283) bg_cale_pane_cp01

0x3253,	// (0x0002829c) cale_week_corner_pane

0x3264,	// (0x000282ad) cale_week_day_heading_pane

0x327c,	// (0x000282c5) cale_week_scroll_pane_g1

0x3291,	// (0x000282da) cale_week_scroll_pane_g2

0x32a2,	// (0x000282eb) cale_week_scroll_pane_g3

0x32b3,	// (0x000282fc) cale_week_scroll_pane_g4

0x32c4,	// (0x0002830d) cale_week_scroll_pane_g5

0x32d5,	// (0x0002831e) cale_week_scroll_pane_g6

0x32e6,	// (0x0002832f) cale_week_scroll_pane_g7

0x32f7,	// (0x00028340) cale_week_scroll_pane_g8

0x3308,	// (0x00028351) cale_week_scroll_pane_g9

0x3319,	// (0x00028362) cale_week_scroll_pane_g10

0x332a,	// (0x00028373) cale_week_scroll_pane_g11

0x333b,	// (0x00028384) cale_week_scroll_pane_g12

0x334c,	// (0x00028395) cale_week_scroll_pane_g13

0x335d,	// (0x000283a6) cale_week_scroll_pane_g14

0x336e,	// (0x000283b7) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0003422a) cale_week_scroll_pane_g

0x337f,	// (0x000283c8) cale_week_time_pane

0x3390,	// (0x000283d9) grid_cale_week_pane

0x33b5,	// (0x000283fe) scroll_pane_cp08

0x33cf,	// (0x00028418) cell_cale_week_pane_ParamLimits

0x33cf,	// (0x00028418) cell_cale_week_pane

0x340b,	// (0x00028454) cale_week_day_heading_pane_t1

0x341f,	// (0x00028468) cale_week_day_heading_pane_t2

0x3433,	// (0x0002847c) cale_week_day_heading_pane_t3

0x3447,	// (0x00028490) cale_week_day_heading_pane_t4

0x345b,	// (0x000284a4) cale_week_day_heading_pane_t5

0x346f,	// (0x000284b8) cale_week_day_heading_pane_t6

0x3483,	// (0x000284cc) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00034249) cale_week_day_heading_pane_t

0x3497,	// (0x000284e0) bg_cale_side_pane

0x121d,	// (0x00026266) cale_week_time_pane_t1

0x1235,	// (0x0002627e) cale_week_time_pane_t2

0x124d,	// (0x00026296) cale_week_time_pane_t3

0x1265,	// (0x000262ae) cale_week_time_pane_t4

0x127d,	// (0x000262c6) cale_week_time_pane_t5

0x1295,	// (0x000262de) cale_week_time_pane_t6

0x12ad,	// (0x000262f6) cale_week_time_pane_t7

0x12c5,	// (0x0002630e) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00034258) cale_week_time_pane_t

0x34a5,	// (0x000284ee) cell_cale_week_pane_g2

0x34c1,	// (0x0002850a) cell_cale_week_pane_g3_ParamLimits

0x34c1,	// (0x0002850a) cell_cale_week_pane_g3

0x34d9,	// (0x00028522) grid_highlight_pane_cp07

0x34e1,	// (0x0002852a) listscroll_gms_pane

0x34eb,	// (0x00028534) grid_gms_pane

0x34f4,	// (0x0002853d) listscroll_gms_pane_g1

0x34fc,	// (0x00028545) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00034269) listscroll_gms_pane_g

0x3504,	// (0x0002854d) scroll_pane_cp010

0x350f,	// (0x00028558) cell_gms_pane_ParamLimits

0x350f,	// (0x00028558) cell_gms_pane

0x3522,	// (0x0002856b) cell_gms_pane_g1

0x352a,	// (0x00028573) cell_gms_pane_g2

0x31dd,	// (0x00028226) cell_gms_pane_g3

0x3532,	// (0x0002857b) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0003426e) cell_gms_pane_g

0x353b,	// (0x00028584) grid_highlight_pane_cp09

0x6503,	// (0x0002b54c) phob_pre_status_pane_g1

0x650b,	// (0x0002b554) phob_pre_status_pane_g2

0x6513,	// (0x0002b55c) phob_pre_status_pane_g3

0x651b,	// (0x0002b564) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0003465d) phob_pre_status_pane_g

0x652d,	// (0x0002b576) phob_pre_status_pane_t1

0x653b,	// (0x0002b584) phob_pre_status_pane_t2

0x654b,	// (0x0002b594) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00034668) phob_pre_status_pane_t

0x2a8c,	// (0x00027ad5) bg_list_pane_cp05

0xae96,	// (0x0002fedf) grid_vorec_pane

0xae9e,	// (0x0002fee7) vorec_t1

0xaeac,	// (0x0002fef5) vorec_t2

0xaeba,	// (0x0002ff03) vorec_t3

0xaec8,	// (0x0002ff11) vorec_t4

0xaed6,	// (0x0002ff1f) vorec_t5

0xaee4,	// (0x0002ff2d) vorec_t6

0x0006,

0xf22e,	// (0x00034277) vorec_t

0xaf00,	// (0x0002ff49) wait_bar_pane_cp01

0x3543,	// (0x0002858c) cell_vorec_pane_ParamLimits

0x3543,	// (0x0002858c) cell_vorec_pane

0x3556,	// (0x0002859f) cell_vorec_pane_g1

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp05

0x3578,	// (0x000285c1) cams_zoom_pane

0x3587,	// (0x000285d0) image_vga_pane

0x35a1,	// (0x000285ea) main_camera_pane_g1

0x35b3,	// (0x000285fc) main_camera_pane_g2

0x35c5,	// (0x0002860e) main_camera_pane_g3

0x35d7,	// (0x00028620) main_camera_pane_g4

0x35e9,	// (0x00028632) main_camera_pane_g5

0x35fb,	// (0x00028644) main_camera_pane_g6

0x360d,	// (0x00028656) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00034286) main_camera_pane_g

0x362b,	// (0x00028674) main_camera_pane_t1

0x3641,	// (0x0002868a) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00034297) main_camera_pane_t

0x367d,	// (0x000286c6) cams_zoom_pane_cp_ParamLimits

0x367d,	// (0x000286c6) cams_zoom_pane_cp

0x36a5,	// (0x000286ee) image_cif_pane_ParamLimits

0x36a5,	// (0x000286ee) image_cif_pane

0x36e0,	// (0x00028729) image_subqcif_pane

0x36e8,	// (0x00028731) main_video_pane_g1_ParamLimits

0x36e8,	// (0x00028731) main_video_pane_g1

0x370c,	// (0x00028755) main_video_pane_g2_ParamLimits

0x370c,	// (0x00028755) main_video_pane_g2

0x3742,	// (0x0002878b) main_video_pane_g3_ParamLimits

0x3742,	// (0x0002878b) main_video_pane_g3

0x3772,	// (0x000287bb) main_video_pane_g4_ParamLimits

0x3772,	// (0x000287bb) main_video_pane_g4

0x37a2,	// (0x000287eb) main_video_pane_g5_ParamLimits

0x37a2,	// (0x000287eb) main_video_pane_g5

0x37bc,	// (0x00028805) main_video_pane_g6_ParamLimits

0x37bc,	// (0x00028805) main_video_pane_g6

0x0006,

0xf253,	// (0x0003429c) main_video_pane_g_ParamLimits

0xf253,	// (0x0003429c) main_video_pane_g

0x37e7,	// (0x00028830) main_video_pane_t1_ParamLimits

0x37e7,	// (0x00028830) main_video_pane_t1

0x3830,	// (0x00028879) cams_zoom_pane_g1

0x3839,	// (0x00028882) cams_zoom_pane_g2

0x3842,	// (0x0002888b) cams_zoom_pane_g3

0x384b,	// (0x00028894) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x000342ab) cams_zoom_pane_g

0x3868,	// (0x000288b1) grid_cams_pane

0x3882,	// (0x000288cb) linegrid_cams_pane

0x3895,	// (0x000288de) cell_cams_pane_ParamLimits

0x3895,	// (0x000288de) cell_cams_pane

0x38b5,	// (0x000288fe) cams_burst_image_pane

0x38bd,	// (0x00028906) cell_cams_pane_g1

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp03

0x3073,	// (0x000280bc) mp_bg_pane_g1

0x2a8c,	// (0x00027ad5) bg_list_pane_cp03

0xbe04,	// (0x00030e4d) bg_mp_pane

0xbe0c,	// (0x00030e55) grid_mp_pane

0xbe14,	// (0x00030e5d) media_player_g1

0xbe1c,	// (0x00030e65) media_player_t1

0xbe2a,	// (0x00030e73) media_player_t2

0xbe38,	// (0x00030e81) media_player_t3

0xbe46,	// (0x00030e8f) media_player_t4

0xbe54,	// (0x00030e9d) media_player_t5

0xbe62,	// (0x00030eab) media_player_t6

0xbe70,	// (0x00030eb9) media_player_t7

0x0006,

0xf5fe,	// (0x00034647) media_player_t

0xbe7e,	// (0x00030ec7) wait_bar_pane_cp02

0xf5e3,	// (0x0003462c) main_usb_pane_t

0x64fa,	// (0x0002b543) cell_mp_pane

0x3073,	// (0x000280bc) cell_mp_pane_g1

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp06

0x39d4,	// (0x00028a1d) grid_skin_colour_pane

0x39dc,	// (0x00028a25) list_highlight_pane_cp03

0x39e4,	// (0x00028a2d) skin_g1

0x39ec,	// (0x00028a35) skin_t1

0x39fb,	// (0x00028a44) skin_t2

0x0001,

0xf297,	// (0x000342e0) skin_t

0x3a09,	// (0x00028a52) cell_skin_colour_pane_ParamLimits

0x3a09,	// (0x00028a52) cell_skin_colour_pane

0x3a29,	// (0x00028a72) cell_skin_colour_pane_g1

0x3a81,	// (0x00028aca) call_video_g1_ParamLimits

0x3a81,	// (0x00028aca) call_video_g1

0x3a9d,	// (0x00028ae6) call_video_g2_ParamLimits

0x3a9d,	// (0x00028ae6) call_video_g2

0x0001,

0xf29c,	// (0x000342e5) call_video_g_ParamLimits

0xf29c,	// (0x000342e5) call_video_g

0x3ad3,	// (0x00028b1c) call_video_uplink_pane_cp1_ParamLimits

0x3ad3,	// (0x00028b1c) call_video_uplink_pane_cp1

0x3b17,	// (0x00028b60) call_video_uplink_pane_cp2

0x3b59,	// (0x00028ba2) video_down_crop_pane_ParamLimits

0x3b59,	// (0x00028ba2) video_down_crop_pane

0x3c1f,	// (0x00028c68) video_down_pane_ParamLimits

0x3c1f,	// (0x00028c68) video_down_pane

0x3cf0,	// (0x00028d39) video_down_subqcif_pane_ParamLimits

0x3cf0,	// (0x00028d39) video_down_subqcif_pane

0x3d08,	// (0x00028d51) video_down_subqcif_pane_cp_ParamLimits

0x3d08,	// (0x00028d51) video_down_subqcif_pane_cp

0x3d2c,	// (0x00028d75) im_reading_pane_ParamLimits

0x3d2c,	// (0x00028d75) im_reading_pane

0x3d3e,	// (0x00028d87) im_writing_pane_ParamLimits

0x3d3e,	// (0x00028d87) im_writing_pane

0x3d5c,	// (0x00028da5) im_reading_pane_t1

0x3d98,	// (0x00028de1) list_im_pane

0x3da9,	// (0x00028df2) scroll_pane_cp07

0x3dc2,	// (0x00028e0b) im_writing_pane_t1_ParamLimits

0x3dc2,	// (0x00028e0b) im_writing_pane_t1

0x3dd7,	// (0x00028e20) im_writing_pane_t2_ParamLimits

0x3dd7,	// (0x00028e20) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x000342ef) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x000342ef) im_writing_pane_t

0x2a8c,	// (0x00027ad5) input_focus_pane_cp04

0x2a8c,	// (0x00027ad5) input_focus_pane_cp05

0x3df4,	// (0x00028e3d) list_im_single_pane_ParamLimits

0x3df4,	// (0x00028e3d) list_im_single_pane

0x3e0a,	// (0x00028e53) list_single_im_pane_t1

0x64ba,	// (0x0002b503) blid_accuracy_pane

0x64c2,	// (0x0002b50b) blid_compass_pane

0x64cc,	// (0x0002b515) main_location_t1

0x64dc,	// (0x0002b525) main_location_t2

0x64ec,	// (0x0002b535) main_location_t3

0x0002,

0xf60d,	// (0x00034656) main_location_t

0x2a8c,	// (0x00027ad5) aid_levels_location

0x3073,	// (0x000280bc) blid_accuracy_pane_g1

0x3073,	// (0x000280bc) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00034351) blid_accuracy_pane_g

0x3e44,	// (0x00028e8d) wml_content_pane

0x3e82,	// (0x00028ecb) wml_button_pane_ParamLimits

0x3e82,	// (0x00028ecb) wml_button_pane

0x3e96,	// (0x00028edf) wml_list_single_large_pane_ParamLimits

0x3e96,	// (0x00028edf) wml_list_single_large_pane

0x3ead,	// (0x00028ef6) wml_list_single_medium_pane_ParamLimits

0x3ead,	// (0x00028ef6) wml_list_single_medium_pane

0x3ec5,	// (0x00028f0e) wml_list_single_small_pane_ParamLimits

0x3ec5,	// (0x00028f0e) wml_list_single_small_pane

0x3ee3,	// (0x00028f2c) wml_selection_box_pane_ParamLimits

0x3ee3,	// (0x00028f2c) wml_selection_box_pane

0x3ef6,	// (0x00028f3f) wml_list_single_pane_t1

0x3f05,	// (0x00028f4e) wml_list_single_medium_pane_t1

0x3f14,	// (0x00028f5d) wml_list_single_large_pane_t1

0x3f23,	// (0x00028f6c) input_focus_pane_cp02_ParamLimits

0x3f23,	// (0x00028f6c) input_focus_pane_cp02

0x3f36,	// (0x00028f7f) wml_selection_box_pane_g1

0x3f3f,	// (0x00028f88) wml_selection_box_pane_t1_ParamLimits

0x3f3f,	// (0x00028f88) wml_selection_box_pane_t1

0x2ce7,	// (0x00027d30) bg_wml_button_pane_ParamLimits

0x2ce7,	// (0x00027d30) bg_wml_button_pane

0x3f57,	// (0x00028fa0) wml_button_pane_g1

0x3f5f,	// (0x00028fa8) wml_button_pane_t1

0x3f57,	// (0x00028fa0) wml_button_bg_pane_g1

0x3f6f,	// (0x00028fb8) wml_button_bg_pane_g2

0x3f77,	// (0x00028fc0) wml_button_bg_pane_g3

0x3f7f,	// (0x00028fc8) wml_button_bg_pane_g4

0x3f87,	// (0x00028fd0) wml_button_bg_pane_g5

0x3f8f,	// (0x00028fd8) wml_button_bg_pane_g6

0x3f97,	// (0x00028fe0) wml_button_bg_pane_g7

0x3f9f,	// (0x00028fe8) wml_button_bg_pane_g8

0x3fa7,	// (0x00028ff0) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x000342f4) wml_button_bg_pane_g

0x3faf,	// (0x00028ff8) bg_list_pane_cp02

0x3fb7,	// (0x00029000) mce_header_pane_ParamLimits

0x3fb7,	// (0x00029000) mce_header_pane

0x3fcd,	// (0x00029016) mce_icon_pane

0x3fcd,	// (0x00029016) mce_image_pane

0x3fd6,	// (0x0002901f) mce_text_pane_ParamLimits

0x3fd6,	// (0x0002901f) mce_text_pane

0x3fe9,	// (0x00029032) scroll_pane_cp03

0x3e7a,	// (0x00028ec3) scroll_pane_cp04

0x3ff3,	// (0x0002903c) scroll_pane_cp05_ParamLimits

0x3ff3,	// (0x0002903c) scroll_pane_cp05

0x3fff,	// (0x00029048) mce_header_field_pane_ParamLimits

0x3fff,	// (0x00029048) mce_header_field_pane

0x4016,	// (0x0002905f) mce_header_field_pane_2_ParamLimits

0x4016,	// (0x0002905f) mce_header_field_pane_2

0x402c,	// (0x00029075) mce_header_field_pane_3

0x4034,	// (0x0002907d) list_single_mce_message_pane_ParamLimits

0x4034,	// (0x0002907d) list_single_mce_message_pane

0x404c,	// (0x00029095) list_single_mce_smart_pane_ParamLimits

0x404c,	// (0x00029095) list_single_mce_smart_pane

0x406f,	// (0x000290b8) input_focus_pane_cp03

0x4078,	// (0x000290c1) list_header_data_pane

0x4080,	// (0x000290c9) mce_header_field_pane_t1

0x4090,	// (0x000290d9) list_single_mce_header_pane_ParamLimits

0x4090,	// (0x000290d9) list_single_mce_header_pane

0x40a4,	// (0x000290ed) list_single_mce_header_pane_t1

0x40b3,	// (0x000290fc) list_single_mce_message_pane_g1

0x40bb,	// (0x00029104) list_single_mce_message_pane_t1

0x40e7,	// (0x00029130) bg_cale_heading_pane_cp01_ParamLimits

0x40e7,	// (0x00029130) bg_cale_heading_pane_cp01

0x410a,	// (0x00029153) bg_cale_pane_cp02_ParamLimits

0x410a,	// (0x00029153) bg_cale_pane_cp02

0x412d,	// (0x00029176) cale_month_corner_pane

0x4143,	// (0x0002918c) cale_month_day_heading_pane_ParamLimits

0x4143,	// (0x0002918c) cale_month_day_heading_pane

0x416e,	// (0x000291b7) cale_month_pane_g1_ParamLimits

0x416e,	// (0x000291b7) cale_month_pane_g1

0x418a,	// (0x000291d3) cale_month_pane_g2_ParamLimits

0x418a,	// (0x000291d3) cale_month_pane_g2

0x41a3,	// (0x000291ec) cale_month_pane_g3_ParamLimits

0x41a3,	// (0x000291ec) cale_month_pane_g3

0x41cf,	// (0x00029218) cale_month_pane_g4_ParamLimits

0x41cf,	// (0x00029218) cale_month_pane_g4

0x41fb,	// (0x00029244) cale_month_pane_g5_ParamLimits

0x41fb,	// (0x00029244) cale_month_pane_g5

0x4227,	// (0x00029270) cale_month_pane_g6_ParamLimits

0x4227,	// (0x00029270) cale_month_pane_g6

0x4253,	// (0x0002929c) cale_month_pane_g7_ParamLimits

0x4253,	// (0x0002929c) cale_month_pane_g7

0x427f,	// (0x000292c8) cale_month_pane_g8_ParamLimits

0x427f,	// (0x000292c8) cale_month_pane_g8

0x42b3,	// (0x000292fc) cale_month_pane_g9_ParamLimits

0x42b3,	// (0x000292fc) cale_month_pane_g9

0x42e5,	// (0x0002932e) cale_month_pane_g10_ParamLimits

0x42e5,	// (0x0002932e) cale_month_pane_g10

0x4317,	// (0x00029360) cale_month_pane_g11_ParamLimits

0x4317,	// (0x00029360) cale_month_pane_g11

0x4349,	// (0x00029392) cale_month_pane_g12_ParamLimits

0x4349,	// (0x00029392) cale_month_pane_g12

0x437b,	// (0x000293c4) cale_month_pane_g13_ParamLimits

0x437b,	// (0x000293c4) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00034307) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00034307) cale_month_pane_g

0x43bf,	// (0x00029408) cale_month_week_pane

0x43d0,	// (0x00029419) grid_cale_month_pane_ParamLimits

0x43d0,	// (0x00029419) grid_cale_month_pane

0x43f6,	// (0x0002943f) cale_month_day_heading_pane_t1

0x4454,	// (0x0002949d) cale_month_day_heading_pane_t2

0x44b9,	// (0x00029502) cale_month_day_heading_pane_t3

0x451e,	// (0x00029567) cale_month_day_heading_pane_t4

0x4583,	// (0x000295cc) cale_month_day_heading_pane_t5

0x45e8,	// (0x00029631) cale_month_day_heading_pane_t6

0x464d,	// (0x00029696) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00034322) cale_month_day_heading_pane_t

0x3497,	// (0x000284e0) bg_cale_side_pane_cp01

0x46b2,	// (0x000296fb) cale_month_week_pane_t1

0x46c9,	// (0x00029712) cale_month_week_pane_t2

0x46e0,	// (0x00029729) cale_month_week_pane_t3

0x46f7,	// (0x00029740) cale_month_week_pane_t4

0x470e,	// (0x00029757) cale_month_week_pane_t5

0x4725,	// (0x0002976e) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00034331) cale_month_week_pane_t

0x473c,	// (0x00029785) cell_cale_month_pane_ParamLimits

0x473c,	// (0x00029785) cell_cale_month_pane

0xaf08,	// (0x0002ff51) cell_cale_month_pane_g1

0x12dd,	// (0x00026326) cell_cale_month_pane_t1_ParamLimits

0x12dd,	// (0x00026326) cell_cale_month_pane_t1

0x34d9,	// (0x00028522) grid_highlight_pane_cp08

0x3073,	// (0x000280bc) main_smil_g1

0x480c,	// (0x00029855) smil_status_pane

0x4817,	// (0x00029860) smil_text_pane

0xbd24,	// (0x00030d6d) bg_popup_call3_rect_pane_g8

0xbd2c,	// (0x00030d75) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000345ea) bg_popup_call3_rect_pane_g

0xbfa6,	// (0x00030fef) smil_status_volume_pane_g1

0x482b,	// (0x00029874) smil_status_pane_t1

0xbfd9,	// (0x00031022) volume_smil_pane

0x4842,	// (0x0002988b) list_smil_text_pane

0x484c,	// (0x00029895) scroll_pane_cp011

0x4857,	// (0x000298a0) smil_text_list_pane_t1_ParamLimits

0x4857,	// (0x000298a0) smil_text_list_pane_t1

0xaf14,	// (0x0002ff5d) aid_volume_smil_ParamLimits

0xaf14,	// (0x0002ff5d) aid_volume_smil

0x3073,	// (0x000280bc) smil_volume_pane_g1

0x3073,	// (0x000280bc) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00034351) smil_volume_pane_g

0x2fc4,	// (0x0002800d) listscroll_cale_day_pane

0x48ab,	// (0x000298f4) bg_cale_pane

0x48c3,	// (0x0002990c) list_cale_pane

0x48d4,	// (0x0002991d) scroll_pane_cp09

0x48e5,	// (0x0002992e) cale_bg_pane_g1

0x48ed,	// (0x00029936) cale_bg_pane_g2

0x48f5,	// (0x0002993e) cale_bg_pane_g3

0x48fd,	// (0x00029946) cale_bg_pane_g4

0x4905,	// (0x0002994e) cale_bg_pane_g5

0x490d,	// (0x00029956) cale_bg_pane_g6

0x4915,	// (0x0002995e) cale_bg_pane_g7

0x491d,	// (0x00029966) cale_bg_pane_g8

0x4925,	// (0x0002996e) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00034356) cale_bg_pane_g

0x492d,	// (0x00029976) list_cale_time_pane_ParamLimits

0x492d,	// (0x00029976) list_cale_time_pane

0x4942,	// (0x0002998b) list_cale_time_pane_g1_ParamLimits

0x4942,	// (0x0002998b) list_cale_time_pane_g1

0x494e,	// (0x00029997) list_cale_time_pane_g2_ParamLimits

0x494e,	// (0x00029997) list_cale_time_pane_g2

0x495b,	// (0x000299a4) list_cale_time_pane_g3_ParamLimits

0x495b,	// (0x000299a4) list_cale_time_pane_g3

0x4977,	// (0x000299c0) list_cale_time_pane_g4_ParamLimits

0x4977,	// (0x000299c0) list_cale_time_pane_g4

0x4985,	// (0x000299ce) list_cale_time_pane_g5_ParamLimits

0x4985,	// (0x000299ce) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00034369) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00034369) list_cale_time_pane_g

0x49a0,	// (0x000299e9) list_cale_time_pane_t1_ParamLimits

0x49a0,	// (0x000299e9) list_cale_time_pane_t1

0x49c8,	// (0x00029a11) list_cale_time_pane_t2_ParamLimits

0x49c8,	// (0x00029a11) list_cale_time_pane_t2

0x516d,	// (0x0002a1b6) aid_blid_cardinal_pane

0x51b7,	// (0x0002a200) compass_pane_t4

0x49f0,	// (0x00029a39) list_cale_time_pane_t4_ParamLimits

0x49f0,	// (0x00029a39) list_cale_time_pane_t4

0x51c5,	// (0x0002a20e) compass_pane_t5

0x51d3,	// (0x0002a21c) compass_pane_t6

0x51e1,	// (0x0002a22a) compass_pane_t7

0x5261,	// (0x0002a2aa) navi_pane_cc_t1

0x547e,	// (0x0002a4c7) aid_phob_thumbnail_center_pane

0x5b4a,	// (0x0002ab93) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00034376) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00034376) list_cale_time_pane_t

0x26c1,	// (0x0002770a) bg_popup_window_pane_cp02_ParamLimits

0x26c1,	// (0x0002770a) bg_popup_window_pane_cp02

0x4a18,	// (0x00029a61) heading_pane_cp01_ParamLimits

0x4a18,	// (0x00029a61) heading_pane_cp01

0x4a24,	// (0x00029a6d) loc_req_pane_ParamLimits

0x4a24,	// (0x00029a6d) loc_req_pane

0x4a34,	// (0x00029a7d) loc_type_pane_ParamLimits

0x4a34,	// (0x00029a7d) loc_type_pane

0x4a46,	// (0x00029a8f) loc_type_pane_t1_ParamLimits

0x4a46,	// (0x00029a8f) loc_type_pane_t1

0x4a58,	// (0x00029aa1) loc_type_pane_t2_ParamLimits

0x4a58,	// (0x00029aa1) loc_type_pane_t2

0x4a6a,	// (0x00029ab3) loc_type_pane_t3_ParamLimits

0x4a6a,	// (0x00029ab3) loc_type_pane_t3

0x0002,

0xf334,	// (0x0003437d) loc_type_pane_t_ParamLimits

0xf334,	// (0x0003437d) loc_type_pane_t

0x4a7c,	// (0x00029ac5) list_loc_req_pane

0x4a86,	// (0x00029acf) scroll_pane_cp012

0x4a91,	// (0x00029ada) list_single_loc_request_popup_menu_pane_ParamLimits

0x4a91,	// (0x00029ada) list_single_loc_request_popup_menu_pane

0x4a9e,	// (0x00029ae7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4a9e,	// (0x00029ae7) list_single_loc_request_popup_menu_pane_g1

0x4aaa,	// (0x00029af3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4aaa,	// (0x00029af3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00034384) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00034384) list_single_loc_request_popup_menu_pane_g

0x4ab6,	// (0x00029aff) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4ab6,	// (0x00029aff) list_single_loc_request_popup_menu_pane_t1

0x2ce7,	// (0x00027d30) bg_popup_window_pane_cp03_ParamLimits

0x2ce7,	// (0x00027d30) bg_popup_window_pane_cp03

0x4acc,	// (0x00029b15) heading_loc_req_pane_ParamLimits

0x4acc,	// (0x00029b15) heading_loc_req_pane

0x4ad8,	// (0x00029b21) popup_dyc_status_message_window_g1_ParamLimits

0x4ad8,	// (0x00029b21) popup_dyc_status_message_window_g1

0x4aec,	// (0x00029b35) popup_dyc_status_message_window_t1_ParamLimits

0x4aec,	// (0x00029b35) popup_dyc_status_message_window_t1

0x4b01,	// (0x00029b4a) popup_dyc_status_message_window_t2_ParamLimits

0x4b01,	// (0x00029b4a) popup_dyc_status_message_window_t2

0x4b16,	// (0x00029b5f) popup_dyc_status_message_window_t3_ParamLimits

0x4b16,	// (0x00029b5f) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00034389) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00034389) popup_dyc_status_message_window_t

0x2a8c,	// (0x00027ad5) bg_heading_pane_cp01

0x4b32,	// (0x00029b7b) heading_loc_req_pane_g1

0x4b3a,	// (0x00029b83) heading_loc_req_pane_g2

0x4b42,	// (0x00029b8b) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00034390) heading_loc_req_pane_g

0x4b4a,	// (0x00029b93) heading_loc_req_pane_t1

0x4c40,	// (0x00029c89) bg_popup_sub_pane_cp01_ParamLimits

0x4c40,	// (0x00029c89) bg_popup_sub_pane_cp01

0x4c4e,	// (0x00029c97) popup_cale_events_window_g1_ParamLimits

0x4c4e,	// (0x00029c97) popup_cale_events_window_g1

0x4c6e,	// (0x00029cb7) popup_cale_events_window_g2_ParamLimits

0x4c6e,	// (0x00029cb7) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x000343c4) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x000343c4) popup_cale_events_window_g

0x4c8e,	// (0x00029cd7) popup_cale_events_window_t1_ParamLimits

0x4c8e,	// (0x00029cd7) popup_cale_events_window_t1

0x4ca0,	// (0x00029ce9) popup_cale_events_window_t2_ParamLimits

0x4ca0,	// (0x00029ce9) popup_cale_events_window_t2

0x4cde,	// (0x00029d27) popup_cale_events_window_t3_ParamLimits

0x4cde,	// (0x00029d27) popup_cale_events_window_t3

0x4d18,	// (0x00029d61) popup_cale_events_window_t4_ParamLimits

0x4d18,	// (0x00029d61) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x000343c9) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x000343c9) popup_cale_events_window_t

0x4d4e,	// (0x00029d97) call_type_pane

0x4d5e,	// (0x00029da7) popup_call_status_window_g1

0x4d72,	// (0x00029dbb) popup_call_status_window_g2

0x4d86,	// (0x00029dcf) popup_call_status_window_g3

0x0002,

0xf389,	// (0x000343d2) popup_call_status_window_g

0x4d96,	// (0x00029ddf) call_type_pane_g1

0x4d9f,	// (0x00029de8) call_type_pane_g2

0x0001,

0xf390,	// (0x000343d9) call_type_pane_g

0x2a8c,	// (0x00027ad5) bg_popup_sub_pane_cp02

0x4da8,	// (0x00029df1) listscroll_popup_wml_pane

0x4db0,	// (0x00029df9) list_wml_pane

0x4dba,	// (0x00029e03) scroll_pane_cp013

0x4dc5,	// (0x00029e0e) list_single_graphic_popup_wml_pane_ParamLimits

0x4dc5,	// (0x00029e0e) list_single_graphic_popup_wml_pane

0x3073,	// (0x000280bc) list_single_graphic_popup_wml_pane_g1

0x4dd9,	// (0x00029e22) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x000343de) list_single_graphic_popup_wml_pane_g

0x4de1,	// (0x00029e2a) list_single_graphic_popup_wml_pane_t1

0x4df7,	// (0x00029e40) aid_call_pane

0x2cdf,	// (0x00027d28) popup_clock_analogue_window_g1

0x2cdf,	// (0x00027d28) popup_clock_analogue_window_g2

0xaf36,	// (0x0002ff7f) popup_clock_analogue_window_g3

0xaf36,	// (0x0002ff7f) popup_clock_analogue_window_g4

0x3073,	// (0x000280bc) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x000343e3) popup_clock_analogue_window_g

0xaf3e,	// (0x0002ff87) popup_clock_analogue_window_t1

0xaf4c,	// (0x0002ff95) clock_digital_number_pane_ParamLimits

0xaf4c,	// (0x0002ff95) clock_digital_number_pane

0xaf58,	// (0x0002ffa1) clock_digital_number_pane_cp02_ParamLimits

0xaf58,	// (0x0002ffa1) clock_digital_number_pane_cp02

0xaf64,	// (0x0002ffad) clock_digital_number_pane_cp03_ParamLimits

0xaf64,	// (0x0002ffad) clock_digital_number_pane_cp03

0xaf70,	// (0x0002ffb9) clock_digital_number_pane_cp04_ParamLimits

0xaf70,	// (0x0002ffb9) clock_digital_number_pane_cp04

0xaf7c,	// (0x0002ffc5) clock_digital_separator_pane_ParamLimits

0xaf7c,	// (0x0002ffc5) clock_digital_separator_pane

0xaf88,	// (0x0002ffd1) popup_clock_digital_window_t1

0x3073,	// (0x000280bc) clock_digital_number_pane_g1

0x3073,	// (0x000280bc) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00034351) clock_digital_number_pane_g

0x3073,	// (0x000280bc) clock_digital_separator_pane_g1

0x3073,	// (0x000280bc) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00034351) clock_digital_separator_pane_g

0x2a8c,	// (0x00027ad5) bg_popup_window_pane_cp04

0x4dff,	// (0x00029e48) heading_pane_cp03

0x4e07,	// (0x00029e50) listscroll_popup_gms_pane

0x4e0f,	// (0x00029e58) grid_large_graphic_popup_pane

0x4e19,	// (0x00029e62) listscroll_popup_gms_pane_g1

0x4e21,	// (0x00029e6a) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x000343ee) listscroll_popup_gms_pane_g

0x3e7a,	// (0x00028ec3) scroll_pane_cp014

0x4e29,	// (0x00029e72) cell_large_graphic_popup_pane_ParamLimits

0x4e29,	// (0x00029e72) cell_large_graphic_popup_pane

0x4e41,	// (0x00029e8a) cell_large_graphic_popup_pane_g1_ParamLimits

0x4e41,	// (0x00029e8a) cell_large_graphic_popup_pane_g1

0x4e4d,	// (0x00029e96) cell_large_graphic_popup_pane_g2_ParamLimits

0x4e4d,	// (0x00029e96) cell_large_graphic_popup_pane_g2

0x4e59,	// (0x00029ea2) cell_large_graphic_popup_pane_g3_ParamLimits

0x4e59,	// (0x00029ea2) cell_large_graphic_popup_pane_g3

0x4e66,	// (0x00029eaf) cell_large_graphic_popup_pane_g4_ParamLimits

0x4e66,	// (0x00029eaf) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x000343f3) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x000343f3) cell_large_graphic_popup_pane_g

0x4e76,	// (0x00029ebf) grid_highlight_pane_cp010

0x3073,	// (0x000280bc) bg_popup_call_pane_g1

0x4e80,	// (0x00029ec9) list_single_graphic_popup_conf_pane_ParamLimits

0x4e80,	// (0x00029ec9) list_single_graphic_popup_conf_pane

0x4e92,	// (0x00029edb) list_highlight_pane_cp01

0x4e9b,	// (0x00029ee4) list_single_graphic_popup_conf_pane_g1

0x4ea3,	// (0x00029eec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x000343fc) list_single_graphic_popup_conf_pane_g

0x4eab,	// (0x00029ef4) list_single_graphic_popup_conf_pane_t1

0x4eb9,	// (0x00029f02) linegrid_cams_pane_g1

0x4ec2,	// (0x00029f0b) linegrid_cams_pane_g2

0x31dd,	// (0x00028226) linegrid_cams_pane_g3

0x4ecb,	// (0x00029f14) linegrid_cams_pane_g4

0x4ed4,	// (0x00029f1d) linegrid_cams_pane_g5

0x4edd,	// (0x00029f26) linegrid_cams_pane_g6

0x3532,	// (0x0002857b) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00034401) linegrid_cams_pane_g

0x4ee8,	// (0x00029f31) popup_clock_analogue_window

0x4ee8,	// (0x00029f31) popup_clock_digital_window

0x2a8c,	// (0x00027ad5) popup_phob_thumbnail_window

0x3073,	// (0x000280bc) call_video_uplink_pane_g1

0x4ef1,	// (0x00029f3a) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00034410) call_video_uplink_pane_g

0x34d9,	// (0x00028522) video_uplink_pane

0x4ef9,	// (0x00029f42) mce_image_pane_g1

0x4f03,	// (0x00029f4c) mce_image_pane_g2

0x4f0b,	// (0x00029f54) mce_image_pane_g3

0x4f13,	// (0x00029f5c) mce_image_pane_g4

0x4f1b,	// (0x00029f64) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00034415) mce_image_pane_g

0x4f23,	// (0x00029f6c) control_top_pane_stacon_cp01_ParamLimits

0x4f23,	// (0x00029f6c) control_top_pane_stacon_cp01

0x4f37,	// (0x00029f80) uni_indicator_pane_stacon_cp01_ParamLimits

0x4f37,	// (0x00029f80) uni_indicator_pane_stacon_cp01

0x4f48,	// (0x00029f91) bg_popup_sub_pane_cp03

0x4f52,	// (0x00029f9b) chi_dic_find_pane

0x4f5a,	// (0x00029fa3) listscroll_chi_dic_pane

0x4f63,	// (0x00029fac) main_pane_chidic_g1

0x4f76,	// (0x00029fbf) chi_dic_find_pane_t1

0x4f84,	// (0x00029fcd) find_chidic_pane

0x4f8d,	// (0x00029fd6) chi_dic_list_pane_ParamLimits

0x4f8d,	// (0x00029fd6) chi_dic_list_pane

0x4f9e,	// (0x00029fe7) scroll_pane_cp020

0x4fa6,	// (0x00029fef) find_chidic_pane_t1

0x2a8c,	// (0x00027ad5) input_focus_pane_cp06

0x4fb5,	// (0x00029ffe) list_chi_dic_pane_ParamLimits

0x4fb5,	// (0x00029ffe) list_chi_dic_pane

0x4fc9,	// (0x0002a012) list_chi_dic_pane_t1_ParamLimits

0x4fc9,	// (0x0002a012) list_chi_dic_pane_t1

0x2a8c,	// (0x00027ad5) list_highlight_pane_cp020

0x4fdc,	// (0x0002a025) bg_cale_heading_pane_g1

0x4fe4,	// (0x0002a02d) bg_cale_heading_pane_g2

0x4fec,	// (0x0002a035) bg_cale_heading_pane_g3

0x4ff4,	// (0x0002a03d) bg_cale_heading_pane_g4

0x4ffe,	// (0x0002a047) bg_cale_heading_pane_g5

0x5008,	// (0x0002a051) bg_cale_heading_pane_g6

0x5010,	// (0x0002a059) bg_cale_heading_pane_g7

0x5018,	// (0x0002a061) bg_cale_heading_pane_g8

0x5022,	// (0x0002a06b) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00034420) bg_cale_heading_pane_g

0x4fdc,	// (0x0002a025) bg_cale_side_pane_g1

0x502c,	// (0x0002a075) bg_cale_side_pane_g2

0x5034,	// (0x0002a07d) bg_cale_side_pane_g3

0x503c,	// (0x0002a085) bg_cale_side_pane_g4

0x5044,	// (0x0002a08d) bg_cale_side_pane_g5

0x504c,	// (0x0002a095) bg_cale_side_pane_g6

0x5054,	// (0x0002a09d) bg_cale_side_pane_g7

0x505c,	// (0x0002a0a5) bg_cale_side_pane_g8

0x5064,	// (0x0002a0ad) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00034433) bg_cale_side_pane_g

0x506c,	// (0x0002a0b5) popup_call_status_window_ParamLimits

0x506c,	// (0x0002a0b5) popup_call_status_window

0x50b3,	// (0x0002a0fc) stacon_top_pane

0x50bb,	// (0x0002a104) status_pane_ParamLimits

0x50bb,	// (0x0002a104) status_pane

0x50d0,	// (0x0002a119) status_small_pane

0x50d8,	// (0x0002a121) control_pane

0x2a8c,	// (0x00027ad5) stacon_bottom_pane

0x50e0,	// (0x0002a129) list_single_mce_smart_pane_t1_ParamLimits

0x50e0,	// (0x0002a129) list_single_mce_smart_pane_t1

0x50f3,	// (0x0002a13c) list_single_mce_smart_pane_t2_ParamLimits

0x50f3,	// (0x0002a13c) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00034446) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00034446) list_single_mce_smart_pane_t

0x5112,	// (0x0002a15b) compass_pane

0x511b,	// (0x0002a164) main_location2_pane_t1

0x512f,	// (0x0002a178) main_location2_pane_t2

0x5143,	// (0x0002a18c) main_location2_pane_t3

0x0003,

0xf402,	// (0x0003444b) main_location2_pane_t

0x518d,	// (0x0002a1d6) compass_pane_g1_ParamLimits

0x518d,	// (0x0002a1d6) compass_pane_g1

0x5199,	// (0x0002a1e2) compass_pane_t1

0x51a8,	// (0x0002a1f1) compass_pane_t2

0x0005,

0xf40b,	// (0x00034454) compass_pane_t

0x51ef,	// (0x0002a238) text_secondary_cp61

0x5258,	// (0x0002a2a1) navi_pane_cams_g5

0x52d2,	// (0x0002a31b) navi_pane_im_t1

0x52e0,	// (0x0002a329) navi_pane_mp_g1_ParamLimits

0x52e0,	// (0x0002a329) navi_pane_mp_g1

0x52f4,	// (0x0002a33d) navi_pane_mp_g2_ParamLimits

0x52f4,	// (0x0002a33d) navi_pane_mp_g2

0x5300,	// (0x0002a349) navi_pane_mp_g3_ParamLimits

0x5300,	// (0x0002a349) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00034468) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00034468) navi_pane_mp_g

0x530c,	// (0x0002a355) navi_pane_mp_t1

0x531a,	// (0x0002a363) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003446f) navi_pane_mp_t

0x53c7,	// (0x0002a410) navi_pane_vt_g1

0x530c,	// (0x0002a355) navi_pane_vt_t1

0x53cf,	// (0x0002a418) navi_slider_pane

0x53d7,	// (0x0002a420) zooming_pane

0x53df,	// (0x0002a428) navi_slider_pane_g1

0xafa5,	// (0x0002ffee) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00034476) navi_slider_pane_g

0x5403,	// (0x0002a44c) aid_levels_zoom

0x540b,	// (0x0002a454) zooming_pane_g1

0x5413,	// (0x0002a45c) zooming_pane_g2

0x5413,	// (0x0002a45c) zooming_pane_g3

0x0002,

0xf43c,	// (0x00034485) zooming_pane_g

0x541b,	// (0x0002a464) level_10_zoom

0x5424,	// (0x0002a46d) level_11_zoom

0x542d,	// (0x0002a476) level_1_zoom

0x5436,	// (0x0002a47f) level_2_zoom

0x543f,	// (0x0002a488) level_3_zoom

0x5448,	// (0x0002a491) level_4_zoom

0x5451,	// (0x0002a49a) level_5_zoom

0x545a,	// (0x0002a4a3) level_6_zoom

0x5463,	// (0x0002a4ac) level_7_zoom

0x546c,	// (0x0002a4b5) level_8_zoom

0x5475,	// (0x0002a4be) level_9_zoom

0x5486,	// (0x0002a4cf) popup_phob_thumbnail_window_g1

0x548e,	// (0x0002a4d7) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0003448c) popup_phob_thumbnail_window_g

0xbe86,	// (0x00030ecf) level_1_location

0xbe8e,	// (0x00030ed7) level_2_location

0xbe96,	// (0x00030edf) level_3_location

0xbe9e,	// (0x00030ee7) level_4_location

0x53d7,	// (0x0002a420) level_5_location

0x5496,	// (0x0002a4df) mce_icon_pane_g1

0x549e,	// (0x0002a4e7) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00034491) mce_icon_pane_g

0x54a6,	// (0x0002a4ef) main_mup_pane_g1_ParamLimits

0x54a6,	// (0x0002a4ef) main_mup_pane_g1

0x54bc,	// (0x0002a505) main_mup_pane_g2_ParamLimits

0x54bc,	// (0x0002a505) main_mup_pane_g2

0x54d4,	// (0x0002a51d) main_mup_pane_g3_ParamLimits

0x54d4,	// (0x0002a51d) main_mup_pane_g3

0x54ec,	// (0x0002a535) main_mup_pane_g4_ParamLimits

0x54ec,	// (0x0002a535) main_mup_pane_g4

0x5504,	// (0x0002a54d) main_mup_pane_g5_ParamLimits

0x5504,	// (0x0002a54d) main_mup_pane_g5

0x5520,	// (0x0002a569) main_mup_pane_g6_ParamLimits

0x5520,	// (0x0002a569) main_mup_pane_g6

0x5538,	// (0x0002a581) main_mup_pane_g7_ParamLimits

0x5538,	// (0x0002a581) main_mup_pane_g7

0x5550,	// (0x0002a599) main_mup_pane_g8_ParamLimits

0x5550,	// (0x0002a599) main_mup_pane_g8

0x5568,	// (0x0002a5b1) main_mup_pane_g9_ParamLimits

0x5568,	// (0x0002a5b1) main_mup_pane_g9

0x5582,	// (0x0002a5cb) main_mup_pane_g10_ParamLimits

0x5582,	// (0x0002a5cb) main_mup_pane_g10

0x559c,	// (0x0002a5e5) main_mup_pane_g11_ParamLimits

0x559c,	// (0x0002a5e5) main_mup_pane_g11

0x55b0,	// (0x0002a5f9) main_mup_pane_g12_ParamLimits

0x55b0,	// (0x0002a5f9) main_mup_pane_g12

0x55c6,	// (0x0002a60f) main_mup_pane_g13_ParamLimits

0x55c6,	// (0x0002a60f) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00034496) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00034496) main_mup_pane_g

0x55da,	// (0x0002a623) main_mup_pane_t1_ParamLimits

0x55da,	// (0x0002a623) main_mup_pane_t1

0x55f4,	// (0x0002a63d) main_mup_pane_t2_ParamLimits

0x55f4,	// (0x0002a63d) main_mup_pane_t2

0x560c,	// (0x0002a655) main_mup_pane_t3_ParamLimits

0x560c,	// (0x0002a655) main_mup_pane_t3

0x5624,	// (0x0002a66d) main_mup_pane_t4_ParamLimits

0x5624,	// (0x0002a66d) main_mup_pane_t4

0x5642,	// (0x0002a68b) main_mup_pane_t5_ParamLimits

0x5642,	// (0x0002a68b) main_mup_pane_t5

0x5657,	// (0x0002a6a0) main_mup_pane_t6_ParamLimits

0x5657,	// (0x0002a6a0) main_mup_pane_t6

0x0005,

0xf468,	// (0x000344b1) main_mup_pane_t_ParamLimits

0xf468,	// (0x000344b1) main_mup_pane_t

0x5669,	// (0x0002a6b2) mup_progress_pane_ParamLimits

0x5669,	// (0x0002a6b2) mup_progress_pane

0x5675,	// (0x0002a6be) mup_visualizer_pane_ParamLimits

0x5675,	// (0x0002a6be) mup_visualizer_pane

0x56a9,	// (0x0002a6f2) mup_volume_pane_ParamLimits

0x56a9,	// (0x0002a6f2) mup_volume_pane

0x56c7,	// (0x0002a710) mup_visualizer_pane_g1_ParamLimits

0x56c7,	// (0x0002a710) mup_visualizer_pane_g1

0x56c7,	// (0x0002a710) mup_visualizer_pane_g2_ParamLimits

0x56c7,	// (0x0002a710) mup_visualizer_pane_g2

0x518d,	// (0x0002a1d6) mup_visualizer_pane_g3_ParamLimits

0x518d,	// (0x0002a1d6) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x000344be) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x000344be) mup_visualizer_pane_g

0x3073,	// (0x000280bc) mup_volume_pane_g1

0x56dd,	// (0x0002a726) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x000344c5) mup_volume_pane_g

0x3073,	// (0x000280bc) mup_progress_pane_g1

0x56e6,	// (0x0002a72f) mup_progress_pane_g2

0x56ef,	// (0x0002a738) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000344ca) mup_progress_pane_g

0x2a8c,	// (0x00027ad5) bg_popup_window_pane_cp05

0x56f8,	// (0x0002a741) heading_pane_cp02_ParamLimits

0x56f8,	// (0x0002a741) heading_pane_cp02

0x5712,	// (0x0002a75b) list_popup_blid_pane

0x571a,	// (0x0002a763) list_blid_sat_info_pane_ParamLimits

0x571a,	// (0x0002a763) list_blid_sat_info_pane

0x572d,	// (0x0002a776) list_blid_sat_info_pane_g1

0x5735,	// (0x0002a77e) list_blid_sat_info_pane_t1

0x583b,	// (0x0002a884) mup_equalizer_pane_ParamLimits

0x583b,	// (0x0002a884) mup_equalizer_pane

0x5854,	// (0x0002a89d) mup_equalizer_pane_cp1_ParamLimits

0x5854,	// (0x0002a89d) mup_equalizer_pane_cp1

0x5871,	// (0x0002a8ba) mup_equalizer_pane_cp2_ParamLimits

0x5871,	// (0x0002a8ba) mup_equalizer_pane_cp2

0x588e,	// (0x0002a8d7) mup_equalizer_pane_cp3_ParamLimits

0x588e,	// (0x0002a8d7) mup_equalizer_pane_cp3

0x58af,	// (0x0002a8f8) mup_equalizer_pane_cp4_ParamLimits

0x58af,	// (0x0002a8f8) mup_equalizer_pane_cp4

0x58d0,	// (0x0002a919) mup_equalizer_pane_cp5

0x58e4,	// (0x0002a92d) mup_equalizer_pane_cp6

0x58f8,	// (0x0002a941) mup_equalizer_pane_cp7

0xbda4,	// (0x00030ded) bg_popup_call_poc_act_pane_g9

0xbdac,	// (0x00030df5) bg_popup_call_poc_act_pane_g10

0xbdb4,	// (0x00030dfd) bg_popup_call_poc_act_pane_g11

0x000a,

0x2ce7,	// (0x00027d30) mup_scale_pane

0x3073,	// (0x000280bc) mup_scale_pane_g1

0x590c,	// (0x0002a955) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x000344e6) mup_scale_pane_g

0x5942,	// (0x0002a98b) msg_data_pane

0x594a,	// (0x0002a993) scroll_pane_cp017

0x5952,	// (0x0002a99b) bg_list_pane_cp04_ParamLimits

0x5952,	// (0x0002a99b) bg_list_pane_cp04

0x5972,	// (0x0002a9bb) msg_data_pane_g1

0x597a,	// (0x0002a9c3) msg_data_pane_g2

0x4f0b,	// (0x00029f54) msg_data_pane_g3

0x5982,	// (0x0002a9cb) msg_data_pane_g4

0x598a,	// (0x0002a9d3) msg_data_pane_g5

0x5992,	// (0x0002a9db) msg_data_pane_g6

0x599a,	// (0x0002a9e3) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x000344f5) msg_data_pane_g

0x59a2,	// (0x0002a9eb) msg_text_pane_ParamLimits

0x59a2,	// (0x0002a9eb) msg_text_pane

0x59cb,	// (0x0002aa14) qrid_highlight_pane_cp011_ParamLimits

0x59cb,	// (0x0002aa14) qrid_highlight_pane_cp011

0x2a8c,	// (0x00027ad5) msg_body_pane

0x2a8c,	// (0x00027ad5) msg_header_pane

0x59ea,	// (0x0002aa33) input_focus_pane_cp07

0x5a0d,	// (0x0002aa56) msg_header_pane_t1_ParamLimits

0x5a0d,	// (0x0002aa56) msg_header_pane_t1

0x5a21,	// (0x0002aa6a) msg_header_pane_t2_ParamLimits

0x5a21,	// (0x0002aa6a) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00034509) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00034509) msg_header_pane_t

0x5a33,	// (0x0002aa7c) msg_body_pane_g1

0x5a3b,	// (0x0002aa84) msg_body_pane_t1_ParamLimits

0x5a3b,	// (0x0002aa84) msg_body_pane_t1

0x5a6c,	// (0x0002aab5) msg_body_pane_t2_ParamLimits

0x5a6c,	// (0x0002aab5) msg_body_pane_t2

0x5a7e,	// (0x0002aac7) msg_body_pane_t3_ParamLimits

0x5a7e,	// (0x0002aac7) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003450e) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003450e) msg_body_pane_t

0x1315,	// (0x0002635e) main_viewer_pane_g1_ParamLimits

0x1315,	// (0x0002635e) main_viewer_pane_g1

0x1323,	// (0x0002636c) main_viewer_pane_g2_ParamLimits

0x1323,	// (0x0002636c) main_viewer_pane_g2

0x5aae,	// (0x0002aaf7) main_viewer_pane_g3_ParamLimits

0x5aae,	// (0x0002aaf7) main_viewer_pane_g3

0x5abd,	// (0x0002ab06) main_viewer_pane_g4_ParamLimits

0x5abd,	// (0x0002ab06) main_viewer_pane_g4

0xafcf,	// (0x00030018) main_viewer_pane_g5_ParamLimits

0xafcf,	// (0x00030018) main_viewer_pane_g5

0xafcf,	// (0x00030018) main_viewer_pane_g7_ParamLimits

0xafcf,	// (0x00030018) main_viewer_pane_g7

0xafe1,	// (0x0003002a) main_viewer_pane_g8_ParamLimits

0xafe1,	// (0x0003002a) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003451e) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003451e) main_viewer_pane_g

0x5acc,	// (0x0002ab15) viewer_content_pane_ParamLimits

0x5acc,	// (0x0002ab15) viewer_content_pane

0x5b07,	// (0x0002ab50) main_postcard_pane_g1_ParamLimits

0x5b07,	// (0x0002ab50) main_postcard_pane_g1

0x5b1d,	// (0x0002ab66) main_postcard_pane_g2_ParamLimits

0x5b1d,	// (0x0002ab66) main_postcard_pane_g2

0x5b33,	// (0x0002ab7c) main_postcard_pane_g3_ParamLimits

0x5b33,	// (0x0002ab7c) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003452f) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003452f) main_postcard_pane_g

0x5b4a,	// (0x0002ab93) main_postcard_pane_g4

0xbfb9,	// (0x00031002) smil_status_volume_pane_g2

0x5b8d,	// (0x0002abd6) postcard_pane_ParamLimits

0x5b8d,	// (0x0002abd6) postcard_pane

0x5bcf,	// (0x0002ac18) postcard_pane_g1_ParamLimits

0x5bcf,	// (0x0002ac18) postcard_pane_g1

0x5bdd,	// (0x0002ac26) postcard_pane_g2_ParamLimits

0x5bdd,	// (0x0002ac26) postcard_pane_g2

0x5be9,	// (0x0002ac32) postcard_pane_g3_ParamLimits

0x5be9,	// (0x0002ac32) postcard_pane_g3

0x5bf5,	// (0x0002ac3e) postcard_pane_g4_ParamLimits

0x5bf5,	// (0x0002ac3e) postcard_pane_g4

0x5c03,	// (0x0002ac4c) postcard_pane_g5_ParamLimits

0x5c03,	// (0x0002ac4c) postcard_pane_g5

0x5c18,	// (0x0002ac61) postcard_pane_g6_ParamLimits

0x5c18,	// (0x0002ac61) postcard_pane_g6

0x5bcf,	// (0x0002ac18) postcard_pane_g7_ParamLimits

0x5bcf,	// (0x0002ac18) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0003453c) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0003453c) postcard_pane_g

0x5c2c,	// (0x0002ac75) main_mp2_pane_g1_ParamLimits

0x5c2c,	// (0x0002ac75) main_mp2_pane_g1

0x5c38,	// (0x0002ac81) main_mp2_pane_g2_ParamLimits

0x5c38,	// (0x0002ac81) main_mp2_pane_g2

0x5c44,	// (0x0002ac8d) main_mp2_pane_g3_ParamLimits

0x5c44,	// (0x0002ac8d) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0003454b) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0003454b) main_mp2_pane_g

0x5c50,	// (0x0002ac99) main_mp2_pane_t1_ParamLimits

0x5c50,	// (0x0002ac99) main_mp2_pane_t1

0x5c65,	// (0x0002acae) main_mp2_pane_t2_ParamLimits

0x5c65,	// (0x0002acae) main_mp2_pane_t2

0x5c77,	// (0x0002acc0) main_mp2_pane_t3_ParamLimits

0x5c77,	// (0x0002acc0) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00034552) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00034552) main_mp2_pane_t

0x5c89,	// (0x0002acd2) pec_content_pane_ParamLimits

0x5c89,	// (0x0002acd2) pec_content_pane

0x3e7a,	// (0x00028ec3) scroll_pane_cp015

0x5c9b,	// (0x0002ace4) pec_attribute_pane_ParamLimits

0x5c9b,	// (0x0002ace4) pec_attribute_pane

0x5cab,	// (0x0002acf4) pec_content_pane_g1_ParamLimits

0x5cab,	// (0x0002acf4) pec_content_pane_g1

0x5cb9,	// (0x0002ad02) pec_content_pane_t1_ParamLimits

0x5cb9,	// (0x0002ad02) pec_content_pane_t1

0x5ccb,	// (0x0002ad14) pec_content_pane_t2_ParamLimits

0x5ccb,	// (0x0002ad14) pec_content_pane_t2

0x0001,

0xf510,	// (0x00034559) pec_content_pane_t_ParamLimits

0xf510,	// (0x00034559) pec_content_pane_t

0x5cdd,	// (0x0002ad26) list_single_graphic_pane_cp01_ParamLimits

0x5cdd,	// (0x0002ad26) list_single_graphic_pane_cp01

0x2ce7,	// (0x00027d30) bg_popup_sub_pane_cp04

0x5cf5,	// (0x0002ad3e) popup_mup_playback_window_g1

0x5d01,	// (0x0002ad4a) popup_mup_playback_window_t1

0x5d16,	// (0x0002ad5f) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003455e) popup_mup_playback_window_t

0x5d6b,	// (0x0002adb4) main_image_pane_g1_ParamLimits

0x5d6b,	// (0x0002adb4) main_image_pane_g1

0x5e48,	// (0x0002ae91) scroll_pane_cp018_ParamLimits

0x5e48,	// (0x0002ae91) scroll_pane_cp018

0x5e60,	// (0x0002aea9) scroll_pane_cp016_ParamLimits

0x5e60,	// (0x0002aea9) scroll_pane_cp016

0x5e94,	// (0x0002aedd) smil2_image_pane_ParamLimits

0x5e94,	// (0x0002aedd) smil2_image_pane

0x5ec8,	// (0x0002af11) smil2_root_pane_ParamLimits

0x5ec8,	// (0x0002af11) smil2_root_pane

0x5f00,	// (0x0002af49) smil2_text_pane_ParamLimits

0x5f00,	// (0x0002af49) smil2_text_pane

0x2a8c,	// (0x00027ad5) bg_list_pane_cp06

0x5f88,	// (0x0002afd1) grid_radio_pane

0x2a8c,	// (0x00027ad5) bg_popup_window_pane_cp06

0x5f90,	// (0x0002afd9) main_fmradio_pane_t1

0x4dff,	// (0x00029e48) heading_pane_cp04

0x5f9e,	// (0x0002afe7) main_fmradio_pane_t2

0xbdbc,	// (0x00030e05) popup_cale_lunar_info_window_g1

0x5fac,	// (0x0002aff5) main_fmradio_pane_t3

0xbdc4,	// (0x00030e0d) popup_cale_lunar_info_window_g2

0x5fba,	// (0x0002b003) main_fmradio_pane_t4

0x0001,

0x5fc8,	// (0x0002b011) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00034639) popup_cale_lunar_info_window_g

0xf52a,	// (0x00034573) main_fmradio_pane_t

0x5fd6,	// (0x0002b01f) wait_bar_pane_cp03

0x5fde,	// (0x0002b027) cell_fmradio_pane_ParamLimits

0x5fde,	// (0x0002b027) cell_fmradio_pane

0x5bcf,	// (0x0002ac18) cell_fmradio_pane_g1_ParamLimits

0x5bcf,	// (0x0002ac18) cell_fmradio_pane_g1

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp011

0x5ff1,	// (0x0002b03a) poc_content_pane_ParamLimits

0x5ff1,	// (0x0002b03a) poc_content_pane

0x6003,	// (0x0002b04c) scroll_pane_cp019

0x600b,	// (0x0002b054) popup_call_poc_act_window_ParamLimits

0x600b,	// (0x0002b054) popup_call_poc_act_window

0x602f,	// (0x0002b078) popup_call_poc_inact_window_ParamLimits

0x602f,	// (0x0002b078) popup_call_poc_inact_window

0xf5c7,	// (0x00034610) bg_popup_call_poc_act_pane_g

0xbd34,	// (0x00030d7d) bg_popup_call_poc_inact_pane_g1

0xbd3c,	// (0x00030d85) bg_popup_call_poc_inact_pane_g2

0x6048,	// (0x0002b091) popup_call_poc_act_window_g2

0xbd44,	// (0x00030d8d) bg_popup_call_poc_inact_pane_g3

0xbd4c,	// (0x00030d95) bg_popup_call_poc_inact_pane_g4

0xbd54,	// (0x00030d9d) bg_popup_call_poc_inact_pane_g5

0x6050,	// (0x0002b099) popup_call_poc_act_window_t1_ParamLimits

0x6050,	// (0x0002b099) popup_call_poc_act_window_t1

0x6078,	// (0x0002b0c1) popup_call_poc_act_window_t2_ParamLimits

0x6078,	// (0x0002b0c1) popup_call_poc_act_window_t2

0x60a0,	// (0x0002b0e9) popup_call_poc_act_window_t3_ParamLimits

0x60a0,	// (0x0002b0e9) popup_call_poc_act_window_t3

0x60c8,	// (0x0002b111) popup_call_poc_act_window_t4_ParamLimits

0x60c8,	// (0x0002b111) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0003457e) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0003457e) popup_call_poc_act_window_t

0xbd5c,	// (0x00030da5) bg_popup_call_poc_inact_pane_g6

0xbd64,	// (0x00030dad) bg_popup_call_poc_inact_pane_g7

0xbd6c,	// (0x00030db5) bg_popup_call_poc_inact_pane_g8

0x60da,	// (0x0002b123) popup_call_poc_inact_window_g2

0xbd74,	// (0x00030dbd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x000345fd) bg_popup_call_poc_inact_pane_g

0x60e2,	// (0x0002b12b) popup_call_poc_inact_window_t1_ParamLimits

0x60e2,	// (0x0002b12b) popup_call_poc_inact_window_t1

0x60f7,	// (0x0002b140) popup_call_poc_inact_window_t2_ParamLimits

0x60f7,	// (0x0002b140) popup_call_poc_inact_window_t2

0x610c,	// (0x0002b155) popup_call_poc_inact_window_t3_ParamLimits

0x610c,	// (0x0002b155) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00034587) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00034587) popup_call_poc_inact_window_t

0xbf2c,	// (0x00030f75) context_pane_ParamLimits

0x6a01,	// (0x0002ba4a) signal_pane_ParamLimits

0x53d7,	// (0x0002a420) main_call2_pane

0xbf1a,	// (0x00030f63) popup_phob_thumbnail2_window_ParamLimits

0xbf1a,	// (0x00030f63) popup_phob_thumbnail2_window

0xafb7,	// (0x00030000) aid_hotspot_pointer_arrow_pane

0xafbf,	// (0x00030008) aid_hotspot_pointer_hand_pane

0x6525,	// (0x0002b56e) phob_pre_status_pane_g5

0x3578,	// (0x000285c1) cams_zoom_pane_ParamLimits

0x3587,	// (0x000285d0) image_vga_pane_ParamLimits

0x35a1,	// (0x000285ea) main_camera_pane_g1_ParamLimits

0x35b3,	// (0x000285fc) main_camera_pane_g2_ParamLimits

0x35c5,	// (0x0002860e) main_camera_pane_g3_ParamLimits

0x35d7,	// (0x00028620) main_camera_pane_g4_ParamLimits

0x35e9,	// (0x00028632) main_camera_pane_g5_ParamLimits

0x35fb,	// (0x00028644) main_camera_pane_g6_ParamLimits

0x360d,	// (0x00028656) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00034286) main_camera_pane_g_ParamLimits

0x362b,	// (0x00028674) main_camera_pane_t1_ParamLimits

0x3641,	// (0x0002868a) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00034297) main_camera_pane_t_ParamLimits

0x2ce7,	// (0x00027d30) bg_popup_preview_window_pane_cp01_ParamLimits

0x2ce7,	// (0x00027d30) bg_popup_preview_window_pane_cp01

0x6121,	// (0x0002b16a) popup_phob_thumbnail2_window_g1_ParamLimits

0x6121,	// (0x0002b16a) popup_phob_thumbnail2_window_g1

0x2a8c,	// (0x00027ad5) call2_cli_visual_pane

0x6148,	// (0x0002b191) popup_call2_audio_conf_window_ParamLimits

0x6148,	// (0x0002b191) popup_call2_audio_conf_window

0x6168,	// (0x0002b1b1) popup_call2_audio_first_window_ParamLimits

0x6168,	// (0x0002b1b1) popup_call2_audio_first_window

0x61fe,	// (0x0002b247) popup_call2_audio_in_window_ParamLimits

0x61fe,	// (0x0002b247) popup_call2_audio_in_window

0x6246,	// (0x0002b28f) popup_call2_audio_out_window_ParamLimits

0x6246,	// (0x0002b28f) popup_call2_audio_out_window

0x62b0,	// (0x0002b2f9) popup_call2_audio_second_window_ParamLimits

0x62b0,	// (0x0002b2f9) popup_call2_audio_second_window

0x6316,	// (0x0002b35f) popup_call2_audio_wait_window_ParamLimits

0x6316,	// (0x0002b35f) popup_call2_audio_wait_window

0x2a8c,	// (0x00027ad5) bg_popup_call2_act_pane_cp03

0x2cc9,	// (0x00027d12) list_conf_pane_cp

0x6350,	// (0x0002b399) popup_call2_audio_conf_window_t1

0x635e,	// (0x0002b3a7) list_single_graphic_popup_conf2_pane_ParamLimits

0x635e,	// (0x0002b3a7) list_single_graphic_popup_conf2_pane

0x4e92,	// (0x00029edb) list_highlight_pane_cp04

0x6371,	// (0x0002b3ba) list_single_graphic_popup_conf2_pane_g1

0x4ea3,	// (0x00029eec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0003458e) list_single_graphic_popup_conf2_pane_g

0x637b,	// (0x0002b3c4) list_single_graphic_popup_conf2_pane_t1

0x6389,	// (0x0002b3d2) bg_popup_call2_act_pane_cp01_ParamLimits

0x6389,	// (0x0002b3d2) bg_popup_call2_act_pane_cp01

0xaff9,	// (0x00030042) call_type_pane_cp05_ParamLimits

0xaff9,	// (0x00030042) call_type_pane_cp05

0xb04d,	// (0x00030096) popup_call2_audio_second_window_g1_ParamLimits

0xb04d,	// (0x00030096) popup_call2_audio_second_window_g1

0xb0a1,	// (0x000300ea) popup_call2_audio_second_window_g2_ParamLimits

0xb0a1,	// (0x000300ea) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00034593) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00034593) popup_call2_audio_second_window_g

0xb106,	// (0x0003014f) popup_call2_audio_second_window_t1_ParamLimits

0xb106,	// (0x0003014f) popup_call2_audio_second_window_t1

0xb1c1,	// (0x0003020a) popup_call2_audio_second_window_t2_ParamLimits

0xb1c1,	// (0x0003020a) popup_call2_audio_second_window_t2

0xb214,	// (0x0003025d) popup_call2_audio_second_window_t3_ParamLimits

0xb214,	// (0x0003025d) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0003459a) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0003459a) popup_call2_audio_second_window_t

0x2a8c,	// (0x00027ad5) bg_popup_call2_in_pane_cp02

0x2a96,	// (0x00027adf) call_type_pane_cp04

0x2a9e,	// (0x00027ae7) popup_call2_audio_wait_window_g1

0x2aa6,	// (0x00027aef) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00034173) popup_call2_audio_wait_window_g

0x2aae,	// (0x00027af7) popup_call2_audio_wait_window_t3

0xb307,	// (0x00030350) bg_popup_call2_act_pane_ParamLimits

0xb307,	// (0x00030350) bg_popup_call2_act_pane

0xb3c7,	// (0x00030410) call_type_pane_cp03_ParamLimits

0xb3c7,	// (0x00030410) call_type_pane_cp03

0xb42b,	// (0x00030474) popup_call2_audio_first_window_g1_ParamLimits

0xb42b,	// (0x00030474) popup_call2_audio_first_window_g1

0xb49b,	// (0x000304e4) popup_call2_audio_first_window_g2_ParamLimits

0xb49b,	// (0x000304e4) popup_call2_audio_first_window_g2

0x56c7,	// (0x0002a710) popup_call2_audio_first_window_g3_ParamLimits

0x56c7,	// (0x0002a710) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x000345a3) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x000345a3) popup_call2_audio_first_window_g

0xb579,	// (0x000305c2) popup_call2_audio_first_window_t1_ParamLimits

0xb579,	// (0x000305c2) popup_call2_audio_first_window_t1

0xb67c,	// (0x000306c5) popup_call2_audio_first_window_t4_ParamLimits

0xb67c,	// (0x000306c5) popup_call2_audio_first_window_t4

0xb75f,	// (0x000307a8) popup_call2_audio_first_window_t5_ParamLimits

0xb75f,	// (0x000307a8) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x000345ae) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x000345ae) popup_call2_audio_first_window_t

0x2cdf,	// (0x00027d28) bg_popup_call2_act_pane_g1

0xbdcc,	// (0x00030e15) popup_cale_lunar_info_window_t1

0xbdda,	// (0x00030e23) popup_cale_lunar_info_window_t2

0xbde8,	// (0x00030e31) popup_cale_lunar_info_window_t3

0x2a8c,	// (0x00027ad5) bg_popup_call2_bubble_pane

0xb860,	// (0x000308a9) bg_popup_call2_in_pane_cp01_ParamLimits

0xb860,	// (0x000308a9) bg_popup_call2_in_pane_cp01

0x2744,	// (0x0002778d) call_type_pane_cp02

0xb8a8,	// (0x000308f1) popup_call2_audio_out_window_g1_ParamLimits

0xb8a8,	// (0x000308f1) popup_call2_audio_out_window_g1

0xb8d4,	// (0x0003091d) popup_call2_audio_out_window_g2_ParamLimits

0xb8d4,	// (0x0003091d) popup_call2_audio_out_window_g2

0xb8fc,	// (0x00030945) popup_call2_audio_out_window_g3_ParamLimits

0xb8fc,	// (0x00030945) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x000345b7) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x000345b7) popup_call2_audio_out_window_g

0xb937,	// (0x00030980) popup_call2_audio_out_window_t1_ParamLimits

0xb937,	// (0x00030980) popup_call2_audio_out_window_t1

0xb996,	// (0x000309df) popup_call2_audio_out_window_t2_ParamLimits

0xb996,	// (0x000309df) popup_call2_audio_out_window_t2

0xb9ea,	// (0x00030a33) popup_call2_audio_out_window_t3_ParamLimits

0xb9ea,	// (0x00030a33) popup_call2_audio_out_window_t3

0xba00,	// (0x00030a49) popup_call2_audio_out_window_t4_ParamLimits

0xba00,	// (0x00030a49) popup_call2_audio_out_window_t4

0xba16,	// (0x00030a5f) popup_call2_audio_out_window_t5_ParamLimits

0xba16,	// (0x00030a5f) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x000345c0) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x000345c0) popup_call2_audio_out_window_t

0xba7a,	// (0x00030ac3) bg_popup_call2_in_pane_ParamLimits

0xba7a,	// (0x00030ac3) bg_popup_call2_in_pane

0xbad6,	// (0x00030b1f) popup_call2_audio_in_window_g1_ParamLimits

0xbad6,	// (0x00030b1f) popup_call2_audio_in_window_g1

0xbb0e,	// (0x00030b57) popup_call2_audio_in_window_g2_ParamLimits

0xbb0e,	// (0x00030b57) popup_call2_audio_in_window_g2

0xbb46,	// (0x00030b8f) popup_call2_audio_in_window_g3_ParamLimits

0xbb46,	// (0x00030b8f) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000345cd) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000345cd) popup_call2_audio_in_window_g

0xbb9e,	// (0x00030be7) popup_call2_audio_in_window_t1_ParamLimits

0xbb9e,	// (0x00030be7) popup_call2_audio_in_window_t1

0xbc1e,	// (0x00030c67) popup_call2_audio_in_window_t2_ParamLimits

0xbc1e,	// (0x00030c67) popup_call2_audio_in_window_t2

0xbc9e,	// (0x00030ce7) popup_call2_audio_in_window_t3_ParamLimits

0xbc9e,	// (0x00030ce7) popup_call2_audio_in_window_t3

0xbcb8,	// (0x00030d01) popup_call2_audio_in_window_t4_ParamLimits

0xbcb8,	// (0x00030d01) popup_call2_audio_in_window_t4

0xbcca,	// (0x00030d13) popup_call2_audio_in_window_t5_ParamLimits

0xbcca,	// (0x00030d13) popup_call2_audio_in_window_t5

0xbcdf,	// (0x00030d28) popup_call2_audio_in_window_t6_ParamLimits

0xbcdf,	// (0x00030d28) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000345d6) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000345d6) popup_call2_audio_in_window_t

0x2cdf,	// (0x00027d28) bg_popup_call2_in_pane_g1

0xbdf6,	// (0x00030e3f) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0003463e) popup_cale_lunar_info_window_t

0x2ce7,	// (0x00027d30) bg_popup_call2_rect_pane_ParamLimits

0x2ce7,	// (0x00027d30) bg_popup_call2_rect_pane

0x2a8c,	// (0x00027ad5) call2_cli_visual_graphic_pane

0x2a8c,	// (0x00027ad5) call2_cli_visual_text_pane

0xbfcc,	// (0x00031015) smil_status_volume_pane_g3

0x0002,

0x3073,	// (0x000280bc) call2_cli_visual_graphic_pane_g1

0x3073,	// (0x000280bc) call2_cli_visual_graphic_pane_g2

0x3073,	// (0x000280bc) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x000345e3) call2_cli_visual_graphic_pane_g

0xbcf4,	// (0x00030d3d) bg_popup_call2_rect_pane_g1

0x318c,	// (0x000281d5) bg_popup_call2_rect_pane_g2

0xbcfc,	// (0x00030d45) bg_popup_call2_rect_pane_g3

0xbd04,	// (0x00030d4d) bg_popup_call2_rect_pane_g4

0xbd0c,	// (0x00030d55) bg_popup_call2_rect_pane_g5

0xbd14,	// (0x00030d5d) bg_popup_call2_rect_pane_g6

0xbd1c,	// (0x00030d65) bg_popup_call2_rect_pane_g7

0xbd24,	// (0x00030d6d) bg_popup_call2_rect_pane_g8

0xbd2c,	// (0x00030d75) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000345ea) bg_popup_call2_rect_pane_g

0xbd34,	// (0x00030d7d) bg_popup_call2_bubble_pane_g1

0xbd3c,	// (0x00030d85) bg_popup_call2_bubble_pane_g2

0xbd44,	// (0x00030d8d) bg_popup_call2_bubble_pane_g3

0xbd4c,	// (0x00030d95) bg_popup_call2_bubble_pane_g4

0xbd54,	// (0x00030d9d) bg_popup_call2_bubble_pane_g5

0xbd5c,	// (0x00030da5) bg_popup_call2_bubble_pane_g6

0xbd64,	// (0x00030dad) bg_popup_call2_bubble_pane_g7

0xbd6c,	// (0x00030db5) bg_popup_call2_bubble_pane_g8

0xbd74,	// (0x00030dbd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000345fd) bg_popup_call2_bubble_pane_g

0x320f,	// (0x00028258) aid_cale_week_size_cell_pane

0x3659,	// (0x000286a2) aid_cams_cif_uncrop_pane_ParamLimits

0x3659,	// (0x000286a2) aid_cams_cif_uncrop_pane

0x3854,	// (0x0002889d) aid_cams_size_cell_ParamLimits

0x3854,	// (0x0002889d) aid_cams_size_cell

0x3868,	// (0x000288b1) grid_cams_pane_ParamLimits

0x3882,	// (0x000288cb) linegrid_cams_pane_ParamLimits

0x3aaf,	// (0x00028af8) call_video_pane_t1

0x3ac1,	// (0x00028b0a) call_video_pane_t2

0x0001,

0xf2a1,	// (0x000342ea) call_video_pane_t

0x40c9,	// (0x00029112) aid_cale_month_size_cell_pane_ParamLimits

0x40c9,	// (0x00029112) aid_cale_month_size_cell_pane

0xf63e,	// (0x00034687) smil_status_volume_pane_g

0xbfd9,	// (0x00031022) volume_smil_pane_ParamLimits

0x234c,	// (0x00027395) aid_popup2_width_pane

0x30e4,	// (0x0002812d) cell_qdial_pane_g4_ParamLimits

0x30e4,	// (0x0002812d) cell_qdial_pane_g4

0x516d,	// (0x0002a1b6) aid_blid_cardinal_pane_ParamLimits

0x5179,	// (0x0002a1c2) aid_blid_destination_pane_ParamLimits

0x5179,	// (0x0002a1c2) aid_blid_destination_pane

0x2ce7,	// (0x00027d30) bg_popup_call_poc_act_pane_ParamLimits

0x2ce7,	// (0x00027d30) bg_popup_call_poc_act_pane

0x2ce7,	// (0x00027d30) bg_popup_call_poc_inact_pane_ParamLimits

0x2ce7,	// (0x00027d30) bg_popup_call_poc_inact_pane

0xbd7c,	// (0x00030dc5) bg_popup_call_poc_act_pane_g1

0xbd84,	// (0x00030dcd) bg_popup_call_poc_act_pane_g2

0xbd8c,	// (0x00030dd5) bg_popup_call_poc_act_pane_g3

0xbd4c,	// (0x00030d95) bg_popup_call_poc_act_pane_g4

0xbd54,	// (0x00030d9d) bg_popup_call_poc_act_pane_g5

0xbd94,	// (0x00030ddd) bg_popup_call_poc_act_pane_g6

0xbd64,	// (0x00030dad) bg_popup_call_poc_act_pane_g7

0xbd9c,	// (0x00030de5) bg_popup_call_poc_act_pane_g8

0x2a8c,	// (0x00027ad5) main_usb_pane

0xbef5,	// (0x00030f3e) popup_cale_lunar_info_window

0x3d5c,	// (0x00028da5) im_reading_pane_t1_ParamLimits

0x3d98,	// (0x00028de1) list_im_pane_ParamLimits

0x3da9,	// (0x00028df2) scroll_pane_cp07_ParamLimits

0x2a8c,	// (0x00027ad5) grid_highlight_pane_cp012

0x2ce7,	// (0x00027d30) mup_scale_pane_ParamLimits

0x5bcf,	// (0x0002ac18) main_usb_pane_g1_ParamLimits

0x5bcf,	// (0x0002ac18) main_usb_pane_g1

0x6438,	// (0x0002b481) main_usb_pane_g2_ParamLimits

0x6438,	// (0x0002b481) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00034627) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00034627) main_usb_pane_g

0x644e,	// (0x0002b497) main_usb_pane_t1_ParamLimits

0x644e,	// (0x0002b497) main_usb_pane_t1

0x6460,	// (0x0002b4a9) main_usb_pane_t2_ParamLimits

0x6460,	// (0x0002b4a9) main_usb_pane_t2

0x6472,	// (0x0002b4bb) main_usb_pane_t3_ParamLimits

0x6472,	// (0x0002b4bb) main_usb_pane_t3

0x6484,	// (0x0002b4cd) main_usb_pane_t4_ParamLimits

0x6484,	// (0x0002b4cd) main_usb_pane_t4

0x6496,	// (0x0002b4df) main_usb_pane_t5_ParamLimits

0x6496,	// (0x0002b4df) main_usb_pane_t5

0x64a8,	// (0x0002b4f1) main_usb_pane_t6_ParamLimits

0x64a8,	// (0x0002b4f1) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0003462c) main_usb_pane_t_ParamLimits

0x5112,	// (0x0002a15b) aid_text_placing

0x511b,	// (0x0002a164) main_location2_pane_t1_ParamLimits

0x512f,	// (0x0002a178) main_location2_pane_t2_ParamLimits

0x5143,	// (0x0002a18c) main_location2_pane_t3_ParamLimits

0x5159,	// (0x0002a1a2) main_location2_pane_t4_ParamLimits

0x5159,	// (0x0002a1a2) main_location2_pane_t4

0xf402,	// (0x0003444b) main_location2_pane_t_ParamLimits

0x2dbf,	// (0x00027e08) find_pinb_pane_g2_ParamLimits

0x2dbf,	// (0x00027e08) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00034199) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00034199) find_pinb_pane_g

0x2dcb,	// (0x00027e14) find_pinb_pane_t1_ParamLimits

0x2ddd,	// (0x00027e26) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0003419e) find_pinb_pane_t_ParamLimits

0x2a8c,	// (0x00027ad5) main_call3_pane

0x43f6,	// (0x0002943f) cale_month_day_heading_pane_t1_ParamLimits

0x4454,	// (0x0002949d) cale_month_day_heading_pane_t2_ParamLimits

0x44b9,	// (0x00029502) cale_month_day_heading_pane_t3_ParamLimits

0x451e,	// (0x00029567) cale_month_day_heading_pane_t4_ParamLimits

0x4583,	// (0x000295cc) cale_month_day_heading_pane_t5_ParamLimits

0x45e8,	// (0x00029631) cale_month_day_heading_pane_t6_ParamLimits

0x464d,	// (0x00029696) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00034322) cale_month_day_heading_pane_t_ParamLimits

0x4839,	// (0x00029882) smil_status_volume_pane

0x5bab,	// (0x0002abf4) postcard_address_pane_ParamLimits

0x5bab,	// (0x0002abf4) postcard_address_pane

0x5bbd,	// (0x0002ac06) postcard_message_pane_ParamLimits

0x5bbd,	// (0x0002ac06) postcard_message_pane

0x6413,	// (0x0002b45c) call2_cli_visual_pane_t1_ParamLimits

0x6413,	// (0x0002b45c) call2_cli_visual_pane_t1

0x6c2f,	// (0x0002bc78) postcard_message_pane_t1_ParamLimits

0x6c2f,	// (0x0002bc78) postcard_message_pane_t1

0x6c18,	// (0x0002bc61) postcard_address_pane_t1_ParamLimits

0x6c18,	// (0x0002bc61) postcard_address_pane_t1

0x6c04,	// (0x0002bc4d) popup_call3_audio_in_window_ParamLimits

0x6c04,	// (0x0002bc4d) popup_call3_audio_in_window

0x6a93,	// (0x0002badc) bg_popup_call3_in_pane_ParamLimits

0x6a93,	// (0x0002badc) bg_popup_call3_in_pane

0x6b05,	// (0x0002bb4e) popup_call3_audio_in_window_g1_ParamLimits

0x6b05,	// (0x0002bb4e) popup_call3_audio_in_window_g1

0x6b25,	// (0x0002bb6e) popup_call3_audio_in_window_g2_ParamLimits

0x6b25,	// (0x0002bb6e) popup_call3_audio_in_window_g2

0x6b45,	// (0x0002bb8e) popup_call3_audio_in_window_g3_ParamLimits

0x6b45,	// (0x0002bb8e) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0003468e) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0003468e) popup_call3_audio_in_window_g

0x6b76,	// (0x0002bbbf) popup_call3_audio_in_window_t1_ParamLimits

0x6b76,	// (0x0002bbbf) popup_call3_audio_in_window_t1

0x6bb4,	// (0x0002bbfd) popup_call3_audio_in_window_t2_ParamLimits

0x6bb4,	// (0x0002bbfd) popup_call3_audio_in_window_t2

0x6bf2,	// (0x0002bc3b) popup_call3_audio_in_window_t3_ParamLimits

0x6bf2,	// (0x0002bc3b) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00034697) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00034697) popup_call3_audio_in_window_t

0x53d7,	// (0x0002a420) bg_popup_call3_rect_pane

0xbcf4,	// (0x00030d3d) bg_popup_call3_rect_pane_g1

0x318c,	// (0x000281d5) bg_popup_call3_rect_pane_g2

0xbcfc,	// (0x00030d45) bg_popup_call3_rect_pane_g3

0xbd04,	// (0x00030d4d) bg_popup_call3_rect_pane_g4

0xbd0c,	// (0x00030d55) bg_popup_call3_rect_pane_g5

0xbd14,	// (0x00030d5d) bg_popup_call3_rect_pane_g6

0xbd1c,	// (0x00030d65) bg_popup_call3_rect_pane_g7

0x56bf,	// (0x0002a708) mup_visualizer_osc_pane

0x56d5,	// (0x0002a71e) mup_visualizer_spec_pane

0x6ac3,	// (0x0002bb0c) call3_video_qcif_pane_ParamLimits

0x6ac3,	// (0x0002bb0c) call3_video_qcif_pane

0x6ad4,	// (0x0002bb1d) call3_video_qcif_uncrop_pane_ParamLimits

0x6ad4,	// (0x0002bb1d) call3_video_qcif_uncrop_pane

0x6ae0,	// (0x0002bb29) call3_video_subqcif_pane_ParamLimits

0x6ae0,	// (0x0002bb29) call3_video_subqcif_pane

0x6af4,	// (0x0002bb3d) call3_video_subqcif_uncrop_pane_ParamLimits

0x6af4,	// (0x0002bb3d) call3_video_subqcif_uncrop_pane

0x6b65,	// (0x0002bbae) popup_call3_audio_in_window_g4_ParamLimits

0x6b65,	// (0x0002bbae) popup_call3_audio_in_window_g4

0x6a82,	// (0x0002bacb) mup_spec_half_pane

0x6a8b,	// (0x0002bad4) mup_spec_half_pane_cp

0xbf8c,	// (0x00030fd5) mup_osc_middle_pane

0xbf95,	// (0x00030fde) mup_visualizer_osc_pane_g1

0x6a62,	// (0x0002baab) mup_spec_bar_pane_ParamLimits

0x6a62,	// (0x0002baab) mup_spec_bar_pane

0xbf79,	// (0x00030fc2) mup_spec_bar_pane_g1

0xbf83,	// (0x00030fcc) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00034682) mup_spec_bar_pane_g

0x320f,	// (0x00028258) aid_cale_week_size_cell_pane_ParamLimits

0x3222,	// (0x0002826b) bg_cale_heading_pane_ParamLimits

0x323a,	// (0x00028283) bg_cale_pane_cp01_ParamLimits

0x3253,	// (0x0002829c) cale_week_corner_pane_ParamLimits

0x3264,	// (0x000282ad) cale_week_day_heading_pane_ParamLimits

0x327c,	// (0x000282c5) cale_week_scroll_pane_g1_ParamLimits

0x3291,	// (0x000282da) cale_week_scroll_pane_g2_ParamLimits

0x32a2,	// (0x000282eb) cale_week_scroll_pane_g3_ParamLimits

0x32b3,	// (0x000282fc) cale_week_scroll_pane_g4_ParamLimits

0x32c4,	// (0x0002830d) cale_week_scroll_pane_g5_ParamLimits

0x32d5,	// (0x0002831e) cale_week_scroll_pane_g6_ParamLimits

0x32e6,	// (0x0002832f) cale_week_scroll_pane_g7_ParamLimits

0x32f7,	// (0x00028340) cale_week_scroll_pane_g8_ParamLimits

0x3308,	// (0x00028351) cale_week_scroll_pane_g9_ParamLimits

0x3319,	// (0x00028362) cale_week_scroll_pane_g10_ParamLimits

0x332a,	// (0x00028373) cale_week_scroll_pane_g11_ParamLimits

0x333b,	// (0x00028384) cale_week_scroll_pane_g12_ParamLimits

0x334c,	// (0x00028395) cale_week_scroll_pane_g13_ParamLimits

0x335d,	// (0x000283a6) cale_week_scroll_pane_g14_ParamLimits

0x336e,	// (0x000283b7) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0003422a) cale_week_scroll_pane_g_ParamLimits

0x337f,	// (0x000283c8) cale_week_time_pane_ParamLimits

0x3390,	// (0x000283d9) grid_cale_week_pane_ParamLimits

0x33a3,	// (0x000283ec) listscroll_cale_week_pane_t1

0x33b5,	// (0x000283fe) scroll_pane_cp08_ParamLimits

0x412d,	// (0x00029176) cale_month_corner_pane_ParamLimits

0x43ad,	// (0x000293f6) cale_month_pane_t1

0x43bf,	// (0x00029408) cale_month_week_pane_ParamLimits

0x4d5e,	// (0x00029da7) popup_call_status_window_g1_ParamLimits

0x4d72,	// (0x00029dbb) popup_call_status_window_g2_ParamLimits

0x4d86,	// (0x00029dcf) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x000343d2) popup_call_status_window_g_ParamLimits

0x4def,	// (0x00029e38) aid_call2_pane

0x59f3,	// (0x0002aa3c) msg_header_pane_g1

0x5bab,	// (0x0002abf4) postcard_address2_pane_ParamLimits

0x5bab,	// (0x0002abf4) postcard_address2_pane

0x5bbd,	// (0x0002ac06) postcard_message2_pane_ParamLimits

0x5bbd,	// (0x0002ac06) postcard_message2_pane

0x6a0f,	// (0x0002ba58) message2_row_pane_ParamLimits

0x6a0f,	// (0x0002ba58) message2_row_pane

0x6a2e,	// (0x0002ba77) address2_row_pane_ParamLimits

0x6a2e,	// (0x0002ba77) address2_row_pane

0xbf47,	// (0x00030f90) postcard_message2_row_pane_g1

0xbf4f,	// (0x00030f98) postcard_message2_row_pane_t1

0xbf47,	// (0x00030f90) address2_row_pane_g1

0xbf4f,	// (0x00030f98) address2_row_pane_t1

0xae8e,	// (0x0002fed7) aid_size_cell_vorec

0x2a8c,	// (0x00027ad5) main_rss_pane

0x6a41,	// (0x0002ba8a) rss_list_single_pane_ParamLimits

0x6a41,	// (0x0002ba8a) rss_list_single_pane

0xbf5d,	// (0x00030fa6) rss_list_single_pane_t1

0xbf6b,	// (0x00030fb4) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0003467d) rss_list_single_pane_t

0x2a8c,	// (0x00027ad5) main_camera2_pane

0x2a8c,	// (0x00027ad5) main_video2_pane

0x138f,	// (0x000263d8) cams_zoom_pane_cp2_ParamLimits

0x138f,	// (0x000263d8) cams_zoom_pane_cp2

0x13af,	// (0x000263f8) image2_vga_pane_ParamLimits

0x13af,	// (0x000263f8) image2_vga_pane

0x1400,	// (0x00026449) main_camera2_pane_g1_ParamLimits

0x1400,	// (0x00026449) main_camera2_pane_g1

0x1420,	// (0x00026469) main_camera2_pane_g2_ParamLimits

0x1420,	// (0x00026469) main_camera2_pane_g2

0x1440,	// (0x00026489) main_camera2_pane_g3_ParamLimits

0x1440,	// (0x00026489) main_camera2_pane_g3

0x1460,	// (0x000264a9) main_camera2_pane_g4_ParamLimits

0x1460,	// (0x000264a9) main_camera2_pane_g4

0x1480,	// (0x000264c9) main_camera2_pane_g5_ParamLimits

0x1480,	// (0x000264c9) main_camera2_pane_g5

0x14a0,	// (0x000264e9) main_camera2_pane_g6_ParamLimits

0x14a0,	// (0x000264e9) main_camera2_pane_g6

0x14c0,	// (0x00026509) main_camera2_pane_g7_ParamLimits

0x14c0,	// (0x00026509) main_camera2_pane_g7

0x14e0,	// (0x00026529) main_camera2_pane_g8_ParamLimits

0x14e0,	// (0x00026529) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0003469e) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0003469e) main_camera2_pane_g

0x1520,	// (0x00026569) main_camera2_pane_t1_ParamLimits

0x1520,	// (0x00026569) main_camera2_pane_t1

0x1555,	// (0x0002659e) main_camera2_pane_t2_ParamLimits

0x1555,	// (0x0002659e) main_camera2_pane_t2

0x157b,	// (0x000265c4) main_camera2_pane_t3_ParamLimits

0x157b,	// (0x000265c4) main_camera2_pane_t3

0x15d9,	// (0x00026622) main_camera2_pane_t4_ParamLimits

0x15d9,	// (0x00026622) main_camera2_pane_t4

0x0006,

0xf668,	// (0x000346b1) main_camera2_pane_t_ParamLimits

0xf668,	// (0x000346b1) main_camera2_pane_t

0x166b,	// (0x000266b4) cams_zoom_pane_cp4_ParamLimits

0x166b,	// (0x000266b4) cams_zoom_pane_cp4

0x1681,	// (0x000266ca) image2_cif_pane_ParamLimits

0x1681,	// (0x000266ca) image2_cif_pane

0x16ac,	// (0x000266f5) image2_subqcif_pane_ParamLimits

0x16ac,	// (0x000266f5) image2_subqcif_pane

0x16c6,	// (0x0002670f) main_video2_pane_g1_ParamLimits

0x16c6,	// (0x0002670f) main_video2_pane_g1

0x16e0,	// (0x00026729) main_video2_pane_g2_ParamLimits

0x16e0,	// (0x00026729) main_video2_pane_g2

0x16f6,	// (0x0002673f) main_video2_pane_g3_ParamLimits

0x16f6,	// (0x0002673f) main_video2_pane_g3

0x170c,	// (0x00026755) main_video2_pane_g4_ParamLimits

0x170c,	// (0x00026755) main_video2_pane_g4

0x1722,	// (0x0002676b) main_video2_pane_g5_ParamLimits

0x1722,	// (0x0002676b) main_video2_pane_g5

0x1738,	// (0x00026781) main_video2_pane_g6_ParamLimits

0x1738,	// (0x00026781) main_video2_pane_g6

0x0005,

0xf677,	// (0x000346c0) main_video2_pane_g_ParamLimits

0xf677,	// (0x000346c0) main_video2_pane_g

0x1752,	// (0x0002679b) main_video2_pane_t1_ParamLimits

0x1752,	// (0x0002679b) main_video2_pane_t1

0x1776,	// (0x000267bf) main_video2_pane_t2_ParamLimits

0x1776,	// (0x000267bf) main_video2_pane_t2

0x17c4,	// (0x0002680d) main_video2_pane_t3_ParamLimits

0x17c4,	// (0x0002680d) main_video2_pane_t3

0x0002,

0xf684,	// (0x000346cd) main_video2_pane_t_ParamLimits

0xf684,	// (0x000346cd) main_video2_pane_t

0x6565,	// (0x0002b5ae) call_muted_g2

0x0001,

0xf626,	// (0x0003466f) call_muted_g

0x2a8c,	// (0x00027ad5) main_mup2_pane

0x6c4a,	// (0x0002bc93) main_mup2_pane_g1_ParamLimits

0x6c4a,	// (0x0002bc93) main_mup2_pane_g1

0x6c56,	// (0x0002bc9f) main_mup2_pane_g2_ParamLimits

0x6c56,	// (0x0002bc9f) main_mup2_pane_g2

0xc0fd,	// (0x00031146) main_mup_pane_g13_cp1

0xc105,	// (0x0003114e) mup_volume_pane_cp1

0x6c72,	// (0x0002bcbb) main_mup2_pane_g4_ParamLimits

0x6c72,	// (0x0002bcbb) main_mup2_pane_g4

0x6c84,	// (0x0002bccd) main_mup2_pane_g5_ParamLimits

0x6c84,	// (0x0002bccd) main_mup2_pane_g5

0x6c96,	// (0x0002bcdf) main_mup2_pane_g6_ParamLimits

0x6c96,	// (0x0002bcdf) main_mup2_pane_g6

0x6ca8,	// (0x0002bcf1) main_mup2_pane_g7_ParamLimits

0x6ca8,	// (0x0002bcf1) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000346d4) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000346d4) main_mup2_pane_g

0x6cc0,	// (0x0002bd09) main_mup2_pane_t1_ParamLimits

0x6cc0,	// (0x0002bd09) main_mup2_pane_t1

0x6cd6,	// (0x0002bd1f) main_mup2_pane_t2_ParamLimits

0x6cd6,	// (0x0002bd1f) main_mup2_pane_t2

0x6cec,	// (0x0002bd35) main_mup2_pane_t3_ParamLimits

0x6cec,	// (0x0002bd35) main_mup2_pane_t3

0x6d02,	// (0x0002bd4b) main_mup2_pane_t4_ParamLimits

0x6d02,	// (0x0002bd4b) main_mup2_pane_t4

0x6d1a,	// (0x0002bd63) main_mup2_pane_t5_ParamLimits

0x6d1a,	// (0x0002bd63) main_mup2_pane_t5

0x6d32,	// (0x0002bd7b) main_mup2_pane_t6_ParamLimits

0x6d32,	// (0x0002bd7b) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000346e3) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000346e3) main_mup2_pane_t

0x6d62,	// (0x0002bdab) mup2_visualizer_pane_ParamLimits

0x6d62,	// (0x0002bdab) mup2_visualizer_pane

0x6d90,	// (0x0002bdd9) mup_progress_pane_cp_ParamLimits

0x6d90,	// (0x0002bdd9) mup_progress_pane_cp

0xc0df,	// (0x00031128) mup_volume_pane_cp_ParamLimits

0xc0df,	// (0x00031128) mup_volume_pane_cp

0x6da4,	// (0x0002bded) mup2_visualizer_pane_g1_ParamLimits

0x6da4,	// (0x0002bded) mup2_visualizer_pane_g1

0xc01e,	// (0x00031067) mup2_visualizer_pane_g2_ParamLimits

0xc01e,	// (0x00031067) mup2_visualizer_pane_g2

0x6dbb,	// (0x0002be04) mup2_visualizer_pane_g3_ParamLimits

0x6dbb,	// (0x0002be04) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000346f0) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000346f0) mup2_visualizer_pane_g

0x5f80,	// (0x0002afc9) aid_size_cell_fmradio

0x6717,	// (0x0002b760) aid_height_parent_landcape

0x3e61,	// (0x00028eaa) wml_content_pane_cp

0x3e69,	// (0x00028eb2) wml_tabs_pane

0x3e72,	// (0x00028ebb) popup_wml_miniature_window

0x3e7a,	// (0x00028ec3) scroll_pane_cp021

0x3e8e,	// (0x00028ed7) wml_content_pane_comp8

0x2a8c,	// (0x00027ad5) bg_popup_sub_pane_cp05

0xc03c,	// (0x00031085) popup_wml_miniature_window_g1

0xc044,	// (0x0003108d) wml_miniature_view_pane

0x6dc7,	// (0x0002be10) aid_size_wml_view

0x6dcf,	// (0x0002be18) wml_miniature_view_pane_g1

0x6dd8,	// (0x0002be21) wml_miniature_view_pane_g2

0x6de1,	// (0x0002be2a) wml_miniature_view_pane_g3

0x6de9,	// (0x0002be32) wml_miniature_view_pane_g4

0x6df1,	// (0x0002be3a) wml_miniature_view_pane_g5

0x6df9,	// (0x0002be42) wml_miniature_view_pane_g6

0x6e01,	// (0x0002be4a) wml_miniature_view_pane_g7

0x6e09,	// (0x0002be52) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x000346f7) wml_miniature_view_pane_g

0xc04c,	// (0x00031095) background_graphic_ParamLimits

0xc04c,	// (0x00031095) background_graphic

0xc058,	// (0x000310a1) wml_tabs_2_pane

0xc061,	// (0x000310aa) wml_tabs_3_pane_ParamLimits

0xc061,	// (0x000310aa) wml_tabs_3_pane

0xc073,	// (0x000310bc) wml_tabs_4_pane_ParamLimits

0xc073,	// (0x000310bc) wml_tabs_4_pane

0xc089,	// (0x000310d2) wml_tabs_5_pane_ParamLimits

0xc089,	// (0x000310d2) wml_tabs_5_pane

0xc0a3,	// (0x000310ec) wml_tabs_pane_g2_ParamLimits

0xc0a3,	// (0x000310ec) wml_tabs_pane_g2

0xc0b7,	// (0x00031100) wml_tabs_pane_g3_ParamLimits

0xc0b7,	// (0x00031100) wml_tabs_pane_g3

0x6e11,	// (0x0002be5a) wml_tabs_2_active_pane_ParamLimits

0x6e11,	// (0x0002be5a) wml_tabs_2_active_pane

0x6e25,	// (0x0002be6e) wml_tabs_2_passive_pane_ParamLimits

0x6e25,	// (0x0002be6e) wml_tabs_2_passive_pane

0x6e39,	// (0x0002be82) wml_tabs_3_active_pane_cp_ParamLimits

0x6e39,	// (0x0002be82) wml_tabs_3_active_pane_cp

0x6e4e,	// (0x0002be97) wml_tabs_3_passive_pane_ParamLimits

0x6e4e,	// (0x0002be97) wml_tabs_3_passive_pane

0x6e61,	// (0x0002beaa) wml_tabs_3_passive_pane_cp_ParamLimits

0x6e61,	// (0x0002beaa) wml_tabs_3_passive_pane_cp

0x6e78,	// (0x0002bec1) tabs_4_active_pane

0x6e80,	// (0x0002bec9) tabs_4_passive_pane

0x6e8a,	// (0x0002bed3) tabs_4_passive_pane_cp

0x6e92,	// (0x0002bedb) tabs_4_passive_pane_cp2

0x6430,	// (0x0002b479) aid_height_text

0x5691,	// (0x0002a6da) mup_volume_cont_pane_ParamLimits

0x5691,	// (0x0002a6da) mup_volume_cont_pane

0x2d7d,	// (0x00027dc6) aid_size_cell_pinb

0x2d87,	// (0x00027dd0) aid_size_list_pinb

0x6d7c,	// (0x0002bdc5) mup2_volume_cont_pane_ParamLimits

0x6d7c,	// (0x0002bdc5) mup2_volume_cont_pane

0xc0cb,	// (0x00031114) mup2_volume_cont_pane_g1_ParamLimits

0xc0cb,	// (0x00031114) mup2_volume_cont_pane_g1

0x2358,	// (0x000273a1) aid_size_cell_touch_ParamLimits

0x2358,	// (0x000273a1) aid_size_cell_touch

0x25d0,	// (0x00027619) touch_pane_ParamLimits

0x25d0,	// (0x00027619) touch_pane

0x233a,	// (0x00027383) main_rss2_pane

0xc10d,	// (0x00031156) listscroll_rss2_pane

0xc116,	// (0x0003115f) rss2_navigation_pane

0xc11e,	// (0x00031167) list_rss2_pane

0x4f9e,	// (0x00029fe7) scroll_pane_cp22

0xc126,	// (0x0003116f) rss2_navigation_pane_g1

0xc12f,	// (0x00031178) rss2_navigation_pane_g2

0xc137,	// (0x00031180) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x00034708) rss2_navigation_pane_g

0xc13f,	// (0x00031188) rss2_navigation_pane_t1

0x6e9c,	// (0x0002bee5) rss2_list_single_pane_ParamLimits

0x6e9c,	// (0x0002bee5) rss2_list_single_pane

0xc14d,	// (0x00031196) rss2_list_single_pane_t2

0xc15b,	// (0x000311a4) rss2_list_single_pane_t3_ParamLimits

0xc15b,	// (0x000311a4) rss2_list_single_pane_t3

0xc178,	// (0x000311c1) rss2_list_single_pane_t4

0x4821,	// (0x0002986a) smil_status_pane_g1

0x25b6,	// (0x000275ff) main_image2_pane_ParamLimits

0x25b6,	// (0x000275ff) main_image2_pane

0x1500,	// (0x00026549) main_camera2_pane_g9_ParamLimits

0x1500,	// (0x00026549) main_camera2_pane_g9

0x162e,	// (0x00026677) main_camera2_pane_t5_ParamLimits

0x162e,	// (0x00026677) main_camera2_pane_t5

0xbfee,	// (0x00031037) main_camera2_pane_t6_ParamLimits

0xbfee,	// (0x00031037) main_camera2_pane_t6

0x6eb4,	// (0x0002befd) main_image2_pane_g1_ParamLimits

0x6eb4,	// (0x0002befd) main_image2_pane_g1

0x5f36,	// (0x0002af7f) smil2_video_pane_ParamLimits

0x5f36,	// (0x0002af7f) smil2_video_pane

0x2388,	// (0x000273d1) aid_zoom_text_primary_cp

0x2572,	// (0x000275bb) popup_preview_fixed_window

0x3d54,	// (0x00028d9d) im_reading_pane_g1

0x1377,	// (0x000263c0) cams2_bc_adjust_pane_cp_ParamLimits

0x1377,	// (0x000263c0) cams2_bc_adjust_pane_cp

0x165d,	// (0x000266a6) cams2_bc_adjust_pane_ParamLimits

0x165d,	// (0x000266a6) cams2_bc_adjust_pane

0xc186,	// (0x000311cf) cams2_bc_adjust_pane_g1

0xc18e,	// (0x000311d7) cams2_slider_pane

0xc197,	// (0x000311e0) cams2_slider_pane_g1

0xc1a0,	// (0x000311e9) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0003470f) cams2_slider_pane_g

0x1107,	// (0x00026150) calc_display_pane_ParamLimits

0x112d,	// (0x00026176) calc_paper_pane_ParamLimits

0x1150,	// (0x00026199) grid_calc_pane_ParamLimits

0xaf88,	// (0x0002ffd1) popup_clock_digital_window_t1_ParamLimits

0x5db9,	// (0x0002ae02) main_image_pane_t1

0x10e9,	// (0x00026132) aid_size_cell_calc_ParamLimits

0x10e9,	// (0x00026132) aid_size_cell_calc

0x675d,	// (0x0002b7a6) popup_blid_sat_info2_window_ParamLimits

0x675d,	// (0x0002b7a6) popup_blid_sat_info2_window

0xc1c2,	// (0x0003120b) aid_size_cell_blid

0xc1ca,	// (0x00031213) bg_popup_window_pane_cp07

0xc1ed,	// (0x00031236) grid_popup_blid_pane

0xc1f7,	// (0x00031240) heading_pane_cp05_ParamLimits

0xc1f7,	// (0x00031240) heading_pane_cp05

0xc2c1,	// (0x0003130a) cell_popup_blid_pane_ParamLimits

0xc2c1,	// (0x0003130a) cell_popup_blid_pane

0xc2e7,	// (0x00031330) cell_popup_blid_pane_g1

0xc2ef,	// (0x00031338) cell_popup_blid_pane_t1

0x6d4c,	// (0x0002bd95) mup2_indicator_pane_ParamLimits

0x6d4c,	// (0x0002bd95) mup2_indicator_pane

0x53d7,	// (0x0002a420) mup2_visualizer_osc_pane

0xc02a,	// (0x00031073) mup2_visualizer_spec_pane_ParamLimits

0xc02a,	// (0x00031073) mup2_visualizer_spec_pane

0x6eca,	// (0x0002bf13) mup2_spec_half_pane

0x6ed3,	// (0x0002bf1c) mup2_spec_half_pane_cp

0x6edb,	// (0x0002bf24) mup2_spec_bar_pane_ParamLimits

0x6edb,	// (0x0002bf24) mup2_spec_bar_pane

0xbf79,	// (0x00030fc2) mup2_spec_bar_pane_g1

0xbf83,	// (0x00030fcc) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00034682) mup2_spec_bar_pane_g

0x6efb,	// (0x0002bf44) mup2_osc_middle_pane

0xbf95,	// (0x00030fde) mup2_visualizer_osc_pane_g1

0x2642,	// (0x0002768b) popup_number_entry_window_t1_ParamLimits

0x2655,	// (0x0002769e) popup_number_entry_window_t2_ParamLimits

0x2667,	// (0x000276b0) popup_number_entry_window_t3_ParamLimits

0x2679,	// (0x000276c2) popup_number_entry_window_t5_ParamLimits

0x2679,	// (0x000276c2) popup_number_entry_window_t5

0xf0fb,	// (0x00034144) popup_number_entry_window_t_ParamLimits

0x26ae,	// (0x000276f7) text_title_cp2_ParamLimits

0xafc7,	// (0x00030010) aid_hotspot_pointer_text2_pane

0xafed,	// (0x00030036) main_viewer_pane_g9_ParamLimits

0xafed,	// (0x00030036) main_viewer_pane_g9

0x43ad,	// (0x000293f6) cale_month_pane_t1_ParamLimits

0x48ab,	// (0x000298f4) bg_cale_pane_ParamLimits

0x48c3,	// (0x0002990c) list_cale_pane_ParamLimits

0x33a3,	// (0x000283ec) listscroll_cale_day_pane_t1

0x48d4,	// (0x0002991d) scroll_pane_cp09_ParamLimits

0x5743,	// (0x0002a78c) main_mup_eq_pane_t1_ParamLimits

0x5743,	// (0x0002a78c) main_mup_eq_pane_t1

0x575d,	// (0x0002a7a6) main_mup_eq_pane_t2_ParamLimits

0x575d,	// (0x0002a7a6) main_mup_eq_pane_t2

0x5777,	// (0x0002a7c0) main_mup_eq_pane_t3_ParamLimits

0x5777,	// (0x0002a7c0) main_mup_eq_pane_t3

0x5793,	// (0x0002a7dc) main_mup_eq_pane_t4_ParamLimits

0x5793,	// (0x0002a7dc) main_mup_eq_pane_t4

0x57af,	// (0x0002a7f8) main_mup_eq_pane_t5_ParamLimits

0x57af,	// (0x0002a7f8) main_mup_eq_pane_t5

0x57cb,	// (0x0002a814) main_mup_eq_pane_t6_ParamLimits

0x57cb,	// (0x0002a814) main_mup_eq_pane_t6

0x57df,	// (0x0002a828) main_mup_eq_pane_t7_ParamLimits

0x57df,	// (0x0002a828) main_mup_eq_pane_t7

0x57f3,	// (0x0002a83c) main_mup_eq_pane_t8_ParamLimits

0x57f3,	// (0x0002a83c) main_mup_eq_pane_t8

0x5807,	// (0x0002a850) main_mup_eq_pane_t9_ParamLimits

0x5807,	// (0x0002a850) main_mup_eq_pane_t9

0x5821,	// (0x0002a86a) main_mup_eq_pane_t10_ParamLimits

0x5821,	// (0x0002a86a) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x000344d1) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x000344d1) main_mup_eq_pane_t

0x58d0,	// (0x0002a919) mup_equalizer_pane_cp5_ParamLimits

0x58e4,	// (0x0002a92d) mup_equalizer_pane_cp6_ParamLimits

0x58f8,	// (0x0002a941) mup_equalizer_pane_cp7_ParamLimits

0x233a,	// (0x00027383) main_gallery_pane

0xbf9e,	// (0x00030fe7) smil2_volume_pane

0xbfa6,	// (0x00030fef) smil_status_volume_pane_g1_ParamLimits

0xbfb9,	// (0x00031002) smil_status_volume_pane_g2_ParamLimits

0xbfcc,	// (0x00031015) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00034687) smil_status_volume_pane_g_ParamLimits

0xc1ca,	// (0x00031213) bg_popup_window_pane_cp07_ParamLimits

0xc1d8,	// (0x00031221) blid_firmament_pane

0x6f04,	// (0x0002bf4d) aid_size_cell_gallery_ParamLimits

0x6f04,	// (0x0002bf4d) aid_size_cell_gallery

0x6f1a,	// (0x0002bf63) grid_gallery_pane_ParamLimits

0x6f1a,	// (0x0002bf63) grid_gallery_pane

0x6f33,	// (0x0002bf7c) cell_gallery_pane_ParamLimits

0x6f33,	// (0x0002bf7c) cell_gallery_pane

0xc2fd,	// (0x00031346) bg_cell_gallery_focus_pane_ParamLimits

0xc2fd,	// (0x00031346) bg_cell_gallery_focus_pane

0xc30f,	// (0x00031358) cell_gallery_pane_g1_ParamLimits

0xc30f,	// (0x00031358) cell_gallery_pane_g1

0x6f7c,	// (0x0002bfc5) cell_gallery_pane_g2_ParamLimits

0x6f7c,	// (0x0002bfc5) cell_gallery_pane_g2

0x6f89,	// (0x0002bfd2) cell_gallery_pane_g3_ParamLimits

0x6f89,	// (0x0002bfd2) cell_gallery_pane_g3

0xc31b,	// (0x00031364) cell_gallery_pane_g4_ParamLimits

0xc31b,	// (0x00031364) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00034735) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00034735) cell_gallery_pane_g

0xc327,	// (0x00031370) bg_cell_gallery_focus_pane_g1

0xc32f,	// (0x00031378) bg_cell_gallery_focus_pane_g2

0xc337,	// (0x00031380) bg_cell_gallery_focus_pane_g3

0xc33f,	// (0x00031388) bg_cell_gallery_focus_pane_g4

0xc347,	// (0x00031390) bg_cell_gallery_focus_pane_g5

0xc34f,	// (0x00031398) bg_cell_gallery_focus_pane_g6

0xc357,	// (0x000313a0) bg_cell_gallery_focus_pane_g7

0xc35f,	// (0x000313a8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0003473e) bg_cell_gallery_focus_pane_g

0xc367,	// (0x000313b0) aid_firma_cardinal

0xc37b,	// (0x000313c4) blid_firmament_pane_t1

0xc392,	// (0x000313db) blid_firmament_pane_t2

0xc3a9,	// (0x000313f2) blid_firmament_pane_t3

0xc3c0,	// (0x00031409) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0003474f) blid_firmament_pane_t

0xc3d7,	// (0x00031420) blid_sat_info_pane

0xc3e7,	// (0x00031430) blid_sat_info_pane_g1

0xc3e7,	// (0x00031430) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00034758) blid_sat_info_pane_g

0xc3f1,	// (0x0003143a) blid_sat_info_pane_t1

0xc3ff,	// (0x00031448) smil2_volume_content_pane

0xc408,	// (0x00031451) smil2_volume_pane_g1

0xc410,	// (0x00031459) smil2_volume_content_pane_g1

0xc419,	// (0x00031462) smil2_volume_content_pane_g2

0xc422,	// (0x0003146b) smil2_volume_content_pane_g3

0xc42b,	// (0x00031474) smil2_volume_content_pane_g4

0xc434,	// (0x0003147d) smil2_volume_content_pane_g5

0xc43d,	// (0x00031486) smil2_volume_content_pane_g6

0xc446,	// (0x0003148f) smil2_volume_content_pane_g7

0xc44f,	// (0x00031498) smil2_volume_content_pane_g8

0xc458,	// (0x000314a1) smil2_volume_content_pane_g9

0xc461,	// (0x000314aa) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0003475d) smil2_volume_content_pane_g

0x340b,	// (0x00028454) cale_week_day_heading_pane_t1_ParamLimits

0x341f,	// (0x00028468) cale_week_day_heading_pane_t2_ParamLimits

0x3433,	// (0x0002847c) cale_week_day_heading_pane_t3_ParamLimits

0x3447,	// (0x00028490) cale_week_day_heading_pane_t4_ParamLimits

0x345b,	// (0x000284a4) cale_week_day_heading_pane_t5_ParamLimits

0x346f,	// (0x000284b8) cale_week_day_heading_pane_t6_ParamLimits

0x3483,	// (0x000284cc) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00034249) cale_week_day_heading_pane_t_ParamLimits

0x3497,	// (0x000284e0) bg_cale_side_pane_ParamLimits

0x121d,	// (0x00026266) cale_week_time_pane_t1_ParamLimits

0x1235,	// (0x0002627e) cale_week_time_pane_t2_ParamLimits

0x124d,	// (0x00026296) cale_week_time_pane_t3_ParamLimits

0x1265,	// (0x000262ae) cale_week_time_pane_t4_ParamLimits

0x127d,	// (0x000262c6) cale_week_time_pane_t5_ParamLimits

0x1295,	// (0x000262de) cale_week_time_pane_t6_ParamLimits

0x12ad,	// (0x000262f6) cale_week_time_pane_t7_ParamLimits

0x12c5,	// (0x0002630e) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00034258) cale_week_time_pane_t_ParamLimits

0x34a5,	// (0x000284ee) cell_cale_week_pane_g2_ParamLimits

0x3497,	// (0x000284e0) bg_cale_side_pane_cp01_ParamLimits

0x46b2,	// (0x000296fb) cale_month_week_pane_t1_ParamLimits

0x46c9,	// (0x00029712) cale_month_week_pane_t2_ParamLimits

0x46e0,	// (0x00029729) cale_month_week_pane_t3_ParamLimits

0x46f7,	// (0x00029740) cale_month_week_pane_t4_ParamLimits

0x470e,	// (0x00029757) cale_month_week_pane_t5_ParamLimits

0x4725,	// (0x0002976e) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00034331) cale_month_week_pane_t_ParamLimits

0xaf08,	// (0x0002ff51) cell_cale_month_pane_g1_ParamLimits

0x233a,	// (0x00027383) main_cale_event_viewer_pane

0x233a,	// (0x00027383) listscroll_cale_event_viewer_pane

0xc46a,	// (0x000314b3) list_cale_ev_pane

0xc472,	// (0x000314bb) scroll_pane_cp023

0xc47e,	// (0x000314c7) field_cale_ev_pane_ParamLimits

0xc47e,	// (0x000314c7) field_cale_ev_pane

0xc498,	// (0x000314e1) field_cale_ev_content_pane_ParamLimits

0xc498,	// (0x000314e1) field_cale_ev_content_pane

0xc4a4,	// (0x000314ed) field_cale_ev_pane_g1_ParamLimits

0xc4a4,	// (0x000314ed) field_cale_ev_pane_g1

0xc4b0,	// (0x000314f9) field_cale_ev_pane_g2_ParamLimits

0xc4b0,	// (0x000314f9) field_cale_ev_pane_g2

0xc4c8,	// (0x00031511) field_cale_ev_pane_g3_ParamLimits

0xc4c8,	// (0x00031511) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00034772) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00034772) field_cale_ev_pane_g

0xc4e0,	// (0x00031529) field_cale_ev_pane_t1_ParamLimits

0xc4e0,	// (0x00031529) field_cale_ev_pane_t1

0xc4f7,	// (0x00031540) field_cale_ev_content_pane_t1_ParamLimits

0xc4f7,	// (0x00031540) field_cale_ev_content_pane_t1

0x59e1,	// (0x0002aa2a) bg_button_pane_cp01

0x2fc4,	// (0x0002800d) listscroll_cale_week_pane_ParamLimits

0x3205,	// (0x0002824e) popup_toolbar_window_cp01

0x33a3,	// (0x000283ec) listscroll_cale_week_pane_t1_ParamLimits

0x2fc4,	// (0x0002800d) listscroll_cale_day_pane_ParamLimits

0x48a1,	// (0x000298ea) popup_toolbar_window_cp02

0x33a3,	// (0x000283ec) listscroll_cale_day_pane_t1_ParamLimits

0x2fc4,	// (0x0002800d) main_cale_month_pane_ParamLimits

0x6983,	// (0x0002b9cc) popup_toolbar_window_cp03_ParamLimits

0x6983,	// (0x0002b9cc) popup_toolbar_window_cp03

0x5d97,	// (0x0002ade0) main_image_pane_g2_ParamLimits

0x5d97,	// (0x0002ade0) main_image_pane_g2

0x5da8,	// (0x0002adf1) main_image_pane_g3_ParamLimits

0x5da8,	// (0x0002adf1) main_image_pane_g3

0x0002,

0xf51a,	// (0x00034563) main_image_pane_g_ParamLimits

0xf51a,	// (0x00034563) main_image_pane_g

0x5db9,	// (0x0002ae02) main_image_pane_t1_ParamLimits

0x5dd0,	// (0x0002ae19) main_image_pane_t2_ParamLimits

0x5dd0,	// (0x0002ae19) main_image_pane_t2

0x5de2,	// (0x0002ae2b) main_image_pane_t3_ParamLimits

0x5de2,	// (0x0002ae2b) main_image_pane_t3

0x5e0a,	// (0x0002ae53) main_image_pane_t4_ParamLimits

0x5e0a,	// (0x0002ae53) main_image_pane_t4

0x0003,

0xf521,	// (0x0003456a) main_image_pane_t_ParamLimits

0xf521,	// (0x0003456a) main_image_pane_t

0x5e2a,	// (0x0002ae73) popup_image_details_window_cp01

0x5e34,	// (0x0002ae7d) popup_toobar_trans_pane_cp01_ParamLimits

0x5e34,	// (0x0002ae7d) popup_toobar_trans_pane_cp01

0x6834,	// (0x0002b87d) popup_image_details_window_ParamLimits

0x6834,	// (0x0002b87d) popup_image_details_window

0xbeff,	// (0x00030f48) popup_image_focus_window

0x1331,	// (0x0002637a) camera2_autofocus_pane_ParamLimits

0x1331,	// (0x0002637a) camera2_autofocus_pane

0x233a,	// (0x00027383) bg_popup_sub_pane_cp06

0xc514,	// (0x0003155d) popup_image_focus_window_g1

0xc51c,	// (0x00031565) popup_image_focus_window_g2

0xc524,	// (0x0003156d) popup_image_focus_window_g3

0xc52c,	// (0x00031575) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00034779) popup_image_focus_window_g

0xc534,	// (0x0003157d) popup_image_focus_window_t1

0xc542,	// (0x0003158b) popup_image_focus_window_t2

0xc552,	// (0x0003159b) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00034782) popup_image_focus_window_t

0xc560,	// (0x000315a9) camera2_autofocus_pane_g1

0x25b6,	// (0x000275ff) bg_tb_trans_pane_cp01

0xc56e,	// (0x000315b7) popup_image_details_window_g1

0xc581,	// (0x000315ca) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00034794) popup_image_details_window_g

0xc5aa,	// (0x000315f3) popup_image_details_window_t1

0xc5bc,	// (0x00031605) popup_image_details_window_t2

0xc5d5,	// (0x0003161e) popup_image_details_window_t3

0xc5e9,	// (0x00031632) popup_image_details_window_t4

0xc604,	// (0x0003164d) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0003479b) popup_image_details_window_t

0x2fb0,	// (0x00027ff9) bg_calc_paper_pane_ParamLimits

0xadf4,	// (0x0002fe3d) grid_highlight_pane_cp013

0xadfe,	// (0x0002fe47) list_calc_pane_ParamLimits

0xae10,	// (0x0002fe59) scroll_pane_cp024

0x2fc4,	// (0x0002800d) bg_calc_display_pane_ParamLimits

0x117c,	// (0x000261c5) calc_display_pane_t1_ParamLimits

0x118e,	// (0x000261d7) calc_display_pane_t2_ParamLimits

0xae18,	// (0x0002fe61) calc_display_pane_t3_ParamLimits

0xf182,	// (0x000341cb) calc_display_pane_t_ParamLimits

0x11f1,	// (0x0002623a) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x000341e8) cell_calc_pane_g

0x11fa,	// (0x00026243) cell_calc_pane_t1

0x307d,	// (0x000280c6) grid_highlight_pane_cp02_ParamLimits

0x3093,	// (0x000280dc) toolbar_button_pane_cp01_ParamLimits

0x3093,	// (0x000280dc) toolbar_button_pane_cp01

0x5e76,	// (0x0002aebf) temp_image_control_pane_ParamLimits

0x5e76,	// (0x0002aebf) temp_image_control_pane

0x25b6,	// (0x000275ff) main_mp3_pane

0xc61e,	// (0x00031667) temp_image_control_pane_g1_ParamLimits

0xc61e,	// (0x00031667) temp_image_control_pane_g1

0xc62c,	// (0x00031675) temp_image_control_pane_g2_ParamLimits

0xc62c,	// (0x00031675) temp_image_control_pane_g2

0xc63e,	// (0x00031687) temp_image_control_pane_g3_ParamLimits

0xc63e,	// (0x00031687) temp_image_control_pane_g3

0x6fc6,	// (0x0002c00f) temp_image_control_pane_g4_ParamLimits

0x6fc6,	// (0x0002c00f) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x000347a6) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x000347a6) temp_image_control_pane_g

0xc61e,	// (0x00031667) main_mp3_pane_g1

0x6fd9,	// (0x0002c022) main_mp3_pane_g2

0x0007,

0xf766,	// (0x000347af) main_mp3_pane_g

0xc681,	// (0x000316ca) main_mp3_pane_t1

0x361f,	// (0x00028668) main_camera_pane_g8_ParamLimits

0x361f,	// (0x00028668) main_camera_pane_g8

0x37d6,	// (0x0002881f) main_video_pane_g7_ParamLimits

0x37d6,	// (0x0002881f) main_video_pane_g7

0xc00c,	// (0x00031055) main_camera2_pane_t7_ParamLimits

0xc00c,	// (0x00031055) main_camera2_pane_t7

0x3e21,	// (0x00028e6a) scroll_pane_cp025_ParamLimits

0x3e21,	// (0x00028e6a) scroll_pane_cp025

0x3e35,	// (0x00028e7e) scroll_pane_cp026_ParamLimits

0x3e35,	// (0x00028e7e) scroll_pane_cp026

0x3e44,	// (0x00028e8d) wml_content_pane_ParamLimits

0x233a,	// (0x00027383) main_touch_calib_pane

0x70a4,	// (0x0002c0ed) main_touch_calib_pane_g1

0x70b0,	// (0x0002c0f9) main_touch_calib_pane_g2

0x70bc,	// (0x0002c105) main_touch_calib_pane_g3

0x70c8,	// (0x0002c111) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000347cd) main_touch_calib_pane_g

0x70d4,	// (0x0002c11d) main_touch_calib_pane_t1

0x70ee,	// (0x0002c137) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000347d6) main_touch_calib_pane_t

0x5250,	// (0x0002a299) mup_progress_pane_cp02

0x526f,	// (0x0002a2b8) navi_pane_g1

0x5328,	// (0x0002a371) navi_pane_mp_t3

0x25b6,	// (0x000275ff) main_mp3_pane_ParamLimits

0x69c1,	// (0x0002ba0a) navi_pane_ParamLimits

0xc61e,	// (0x00031667) main_mp3_pane_g1_ParamLimits

0x6fd9,	// (0x0002c022) main_mp3_pane_g2_ParamLimits

0x6fe7,	// (0x0002c030) main_mp3_pane_g3_ParamLimits

0x6fe7,	// (0x0002c030) main_mp3_pane_g3

0x6ff5,	// (0x0002c03e) main_mp3_pane_g4_ParamLimits

0x6ff5,	// (0x0002c03e) main_mp3_pane_g4

0xc64e,	// (0x00031697) main_mp3_pane_g5_ParamLimits

0xc64e,	// (0x00031697) main_mp3_pane_g5

0xc65c,	// (0x000316a5) main_mp3_pane_g6_ParamLimits

0xc65c,	// (0x000316a5) main_mp3_pane_g6

0xc669,	// (0x000316b2) main_mp3_pane_g7_ParamLimits

0xc669,	// (0x000316b2) main_mp3_pane_g7

0xc675,	// (0x000316be) main_mp3_pane_g8_ParamLimits

0xc675,	// (0x000316be) main_mp3_pane_g8

0xf766,	// (0x000347af) main_mp3_pane_g_ParamLimits

0x7003,	// (0x0002c04c) main_mp3_pane_t2

0x7011,	// (0x0002c05a) main_mp3_pane_t3

0xc68f,	// (0x000316d8) main_mp3_pane_t4

0xc69d,	// (0x000316e6) main_mp3_pane_t5

0x0005,

0xf777,	// (0x000347c0) main_mp3_pane_t

0xc6ab,	// (0x000316f4) mup_progress_pane_cp01

0x2388,	// (0x000273d1) aid_zoom_text_secondary2

0xc46a,	// (0x000314b3) list_cale_ev2_pane

0xc472,	// (0x000314bb) scroll_pane_cp023_ParamLimits

0x7144,	// (0x0002c18d) field_cale_ev2_pane_ParamLimits

0x7144,	// (0x0002c18d) field_cale_ev2_pane

0x716a,	// (0x0002c1b3) field_cale_ev2_pane_g1_ParamLimits

0x716a,	// (0x0002c1b3) field_cale_ev2_pane_g1

0x7176,	// (0x0002c1bf) field_cale_ev2_pane_g2_ParamLimits

0x7176,	// (0x0002c1bf) field_cale_ev2_pane_g2

0x718e,	// (0x0002c1d7) field_cale_ev2_pane_g3_ParamLimits

0x718e,	// (0x0002c1d7) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000347e1) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000347e1) field_cale_ev2_pane_g

0xc6bf,	// (0x00031708) field_cale_ev2_pane_t1_ParamLimits

0xc6bf,	// (0x00031708) field_cale_ev2_pane_t1

0xc6d6,	// (0x0003171f) field_cale_ev2_pane_t2_ParamLimits

0xc6d6,	// (0x0003171f) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000347ea) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000347ea) field_cale_ev2_pane_t

0x5b61,	// (0x0002abaa) main_postcard_pane_g5_ParamLimits

0x5b61,	// (0x0002abaa) main_postcard_pane_g5

0x5b77,	// (0x0002abc0) main_postcard_pane_g6_ParamLimits

0x5b77,	// (0x0002abc0) main_postcard_pane_g6

0x3560,	// (0x000285a9) camera2_autofocus_pane_cp_ParamLimits

0x3560,	// (0x000285a9) camera2_autofocus_pane_cp

0x25b6,	// (0x000275ff) main_mup3_pane

0x71c6,	// (0x0002c20f) main_mup3_pane_g1_ParamLimits

0x71c6,	// (0x0002c20f) main_mup3_pane_g1

0x71e8,	// (0x0002c231) main_mup3_pane_g2_ParamLimits

0x71e8,	// (0x0002c231) main_mup3_pane_g2

0x7269,	// (0x0002c2b2) main_mup3_pane_g3_ParamLimits

0x7269,	// (0x0002c2b2) main_mup3_pane_g3

0x72ab,	// (0x0002c2f4) main_mup3_pane_g4_ParamLimits

0x72ab,	// (0x0002c2f4) main_mup3_pane_g4

0x72ed,	// (0x0002c336) main_mup3_pane_g5_ParamLimits

0x72ed,	// (0x0002c336) main_mup3_pane_g5

0x7331,	// (0x0002c37a) main_mup3_pane_g6_ParamLimits

0x7331,	// (0x0002c37a) main_mup3_pane_g6

0xc6eb,	// (0x00031734) main_mup3_pane_g7_ParamLimits

0xc6eb,	// (0x00031734) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000347fa) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000347fa) main_mup3_pane_g

0x73ad,	// (0x0002c3f6) main_mup3_pane_t1_ParamLimits

0x73ad,	// (0x0002c3f6) main_mup3_pane_t1

0x7421,	// (0x0002c46a) main_mup3_pane_t2_ParamLimits

0x7421,	// (0x0002c46a) main_mup3_pane_t2

0x74f5,	// (0x0002c53e) main_mup3_pane_t4_ParamLimits

0x74f5,	// (0x0002c53e) main_mup3_pane_t4

0x754f,	// (0x0002c598) main_mup3_pane_t5_ParamLimits

0x754f,	// (0x0002c598) main_mup3_pane_t5

0x7603,	// (0x0002c64c) main_mup3_pane_t6_ParamLimits

0x7603,	// (0x0002c64c) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0003480b) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0003480b) main_mup3_pane_t

0x76b7,	// (0x0002c700) mup3_progress_pane_ParamLimits

0x76b7,	// (0x0002c700) mup3_progress_pane

0x7733,	// (0x0002c77c) popup_mup3_control_window_ParamLimits

0x7733,	// (0x0002c77c) popup_mup3_control_window

0xc6f9,	// (0x00031742) popup_mup3_text_window

0x7765,	// (0x0002c7ae) mup3_progress_pane_t1

0x777c,	// (0x0002c7c5) mup3_progress_pane_t2

0xc701,	// (0x0003174a) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x00034818) mup3_progress_pane_t

0xc718,	// (0x00031761) mup_progress_pane_cp03

0x233a,	// (0x00027383) bg_tb_trans_pane_cp04

0x7793,	// (0x0002c7dc) mup3_volume_pane

0x779b,	// (0x0002c7e4) popup_mup3_control_window_g1

0x77a4,	// (0x0002c7ed) mup3_volume_pane_g1

0x77ad,	// (0x0002c7f6) mup3_volume_pane_g2

0x77b6,	// (0x0002c7ff) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0003481f) mup3_volume_pane_g

0x233a,	// (0x00027383) bg_tb_trans_pane_cp03

0xc728,	// (0x00031771) popup_mup3_text_window_g1

0xc730,	// (0x00031779) popup_mup3_text_window_t1

0x3066,	// (0x000280af) list_calc_item_pane_g1_ParamLimits

0xc0f4,	// (0x0003113d) mup_volume_pane_cp_g1

0x7108,	// (0x0002c151) main_touch_calib_pane_t3

0x711c,	// (0x0002c165) main_touch_calib_pane_t4

0x7130,	// (0x0002c179) main_touch_calib_pane_t5

0x2344,	// (0x0002738d) aid_cell_size_toolbar2

0x234c,	// (0x00027395) aid_popup3_width_pane

0x2388,	// (0x000273d1) aid_zoom_text_msg_primary

0xaef2,	// (0x0002ff3b) vorec_t7

0x2fd0,	// (0x00028019) bg_calc_paper_pane_g1_ParamLimits

0x2fdc,	// (0x00028025) bg_calc_paper_pane_g2_ParamLimits

0x2fe8,	// (0x00028031) bg_calc_paper_pane_g3_ParamLimits

0x2ff4,	// (0x0002803d) bg_calc_paper_pane_g4_ParamLimits

0x3000,	// (0x00028049) bg_calc_paper_pane_g5_ParamLimits

0x300c,	// (0x00028055) bg_calc_paper_pane_g6_ParamLimits

0x301b,	// (0x00028064) bg_calc_paper_pane_g7_ParamLimits

0x302a,	// (0x00028073) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x000341d2) bg_calc_paper_pane_g_ParamLimits

0x303d,	// (0x00028086) calc_bg_paper_pane_g9_ParamLimits

0x36c6,	// (0x0002870f) image_qvga_pane_ParamLimits

0x36c6,	// (0x0002870f) image_qvga_pane

0x2ce7,	// (0x00027d30) bg_popup_sub_pane_cp04_ParamLimits

0x5cf5,	// (0x0002ad3e) popup_mup_playback_window_g1_ParamLimits

0x5d01,	// (0x0002ad4a) popup_mup_playback_window_t1_ParamLimits

0x5d16,	// (0x0002ad5f) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003455e) popup_mup_playback_window_t_ParamLimits

0x6c66,	// (0x0002bcaf) main_mup2_pane_g3_ParamLimits

0x6c66,	// (0x0002bcaf) main_mup2_pane_g3

0x3b1f,	// (0x00028b68) popup_toolbar_window_cp04

0xb0f5,	// (0x0003013e) popup_call2_audio_second_window_g3_ParamLimits

0xb0f5,	// (0x0003013e) popup_call2_audio_second_window_g3

0xb4ff,	// (0x00030548) popup_call2_audio_first_window_g4_ParamLimits

0xb4ff,	// (0x00030548) popup_call2_audio_first_window_g4

0xbb7e,	// (0x00030bc7) popup_call2_audio_in_window_g4_ParamLimits

0xbb7e,	// (0x00030bc7) popup_call2_audio_in_window_g4

0x5d2b,	// (0x0002ad74) aid_area_sk_bg_cut_ParamLimits

0x5d2b,	// (0x0002ad74) aid_area_sk_bg_cut

0x5d49,	// (0x0002ad92) aid_area_sk_bg_cut_2_ParamLimits

0x5d49,	// (0x0002ad92) aid_area_sk_bg_cut_2

0x6f6c,	// (0x0002bfb5) aid_placing_details_win

0x6f74,	// (0x0002bfbd) aid_placing_details_win_2

0xc560,	// (0x000315a9) camera2_autofocus_pane_g1_ParamLimits

0x2557,	// (0x000275a0) popup_fixed_preview_cale_window_ParamLimits

0x2557,	// (0x000275a0) popup_fixed_preview_cale_window

0x53e8,	// (0x0002a431) navi_slider_pane_g3

0x53f1,	// (0x0002a43a) navi_slider_pane_g4

0x53fa,	// (0x0002a443) navi_slider_pane_g5

0x53e8,	// (0x0002a431) navi_slider_pane_g6

0xafae,	// (0x0002fff7) navi_slider_pane_g7

0x5915,	// (0x0002a95e) mup_scale_pane_g3

0x591e,	// (0x0002a967) mup_scale_pane_g4

0x5927,	// (0x0002a970) mup_scale_pane_g5

0x5930,	// (0x0002a979) mup_scale_pane_g6

0x5939,	// (0x0002a982) mup_scale_pane_g7

0x53e8,	// (0x0002a431) cams2_slider_pane_g3

0xc1a9,	// (0x000311f2) cams2_slider_pane_g4

0xc1b1,	// (0x000311fa) cams2_slider_pane_g5

0x53e8,	// (0x0002a431) cams2_slider_pane_g6

0xc1b9,	// (0x00031202) cams2_slider_pane_g7

0xc3e7,	// (0x00031430) camera2_autofocus_pane_cp_g1

0xc73e,	// (0x00031787) bg_popup_preview_window_pane_cp02_ParamLimits

0xc73e,	// (0x00031787) bg_popup_preview_window_pane_cp02

0xc74a,	// (0x00031793) list_fp_cale_pane_ParamLimits

0xc74a,	// (0x00031793) list_fp_cale_pane

0xc756,	// (0x0003179f) popup_fixed_preview_cale_window_t1_ParamLimits

0xc756,	// (0x0003179f) popup_fixed_preview_cale_window_t1

0x77bf,	// (0x0002c808) popup_fixed_preview_cale_window_t2_ParamLimits

0x77bf,	// (0x0002c808) popup_fixed_preview_cale_window_t2

0x77d4,	// (0x0002c81d) popup_fixed_preview_cale_window_t3_ParamLimits

0x77d4,	// (0x0002c81d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00034826) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00034826) popup_fixed_preview_cale_window_t

0x77e9,	// (0x0002c832) list_single_fp_cale_pane_ParamLimits

0x77e9,	// (0x0002c832) list_single_fp_cale_pane

0xc774,	// (0x000317bd) list_single_fp_cale_pane_g1_ParamLimits

0xc774,	// (0x000317bd) list_single_fp_cale_pane_g1

0xc780,	// (0x000317c9) list_single_fp_cale_pane_g2_ParamLimits

0xc780,	// (0x000317c9) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0003482d) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0003482d) list_single_fp_cale_pane_g

0xc799,	// (0x000317e2) list_single_fp_cale_pane_t1_ParamLimits

0xc799,	// (0x000317e2) list_single_fp_cale_pane_t1

0xc7ab,	// (0x000317f4) list_single_fp_cale_pane_t2_ParamLimits

0xc7ab,	// (0x000317f4) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00034834) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00034834) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x233a,	// (0x00027383) main_dialer_pane

0x7801,	// (0x0002c84a) aid_cell_size_keypad

0x780b,	// (0x0002c854) dialer_ne_pane

0x7813,	// (0x0002c85c) grid_dialer_command_1_pane

0x781b,	// (0x0002c864) grid_dialer_command_2_pane

0x7823,	// (0x0002c86c) grid_dialer_keypad_pane

0x7835,	// (0x0002c87e) bg_popup_call_pane_cp06_ParamLimits

0x7835,	// (0x0002c87e) bg_popup_call_pane_cp06

0x7841,	// (0x0002c88a) dialer_ne_clear_pane_ParamLimits

0x7841,	// (0x0002c88a) dialer_ne_clear_pane

0xc7de,	// (0x00031827) dialer_ne_pane_g1

0xc7e6,	// (0x0003182f) dialer_ne_pane_t1_ParamLimits

0xc7e6,	// (0x0003182f) dialer_ne_pane_t1

0x784d,	// (0x0002c896) dialer_ne_pane_t2_ParamLimits

0x784d,	// (0x0002c896) dialer_ne_pane_t2

0x7877,	// (0x0002c8c0) dialer_ne_pane_t3_ParamLimits

0x7877,	// (0x0002c8c0) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00034839) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00034839) dialer_ne_pane_t

0x78a7,	// (0x0002c8f0) dialer_ne_pane_t3_copy1_ParamLimits

0x78a7,	// (0x0002c8f0) dialer_ne_pane_t3_copy1

0x78d6,	// (0x0002c91f) cell_dialer_keypad_pane_ParamLimits

0x78d6,	// (0x0002c91f) cell_dialer_keypad_pane

0x78ed,	// (0x0002c936) cell_dialer_command_1_pane_ParamLimits

0x78ed,	// (0x0002c936) cell_dialer_command_1_pane

0x7903,	// (0x0002c94c) cell_dialer_command_2_pane_ParamLimits

0x7903,	// (0x0002c94c) cell_dialer_command_2_pane

0xc7f8,	// (0x00031841) bg_button_pane_cp02_ParamLimits

0xc7f8,	// (0x00031841) bg_button_pane_cp02

0x7912,	// (0x0002c95b) cell_dialer_keypad_pane_g1_ParamLimits

0x7912,	// (0x0002c95b) cell_dialer_keypad_pane_g1

0xc7f8,	// (0x00031841) bg_button_pane_cp03_ParamLimits

0xc7f8,	// (0x00031841) bg_button_pane_cp03

0x7927,	// (0x0002c970) cell_dialer_command_1_pane_g1_ParamLimits

0x7927,	// (0x0002c970) cell_dialer_command_1_pane_g1

0xc804,	// (0x0003184d) bg_button_pane_cp04

0x793b,	// (0x0002c984) cell_dialer_command_2_pane_g1

0x53d7,	// (0x0002a420) bg_button_pane_cp06

0xc80c,	// (0x00031855) dialer_ne_clear_pane_g1

0x527b,	// (0x0002a2c4) navi_pane_g2

0x52a9,	// (0x0002a2f2) navi_pane_g3

0x0002,

0xf418,	// (0x00034461) navi_pane_g

0x5336,	// (0x0002a37f) navi_pane_mv_g2

0x535d,	// (0x0002a3a6) navi_pane_mv_g5

0x5365,	// (0x0002a3ae) navi_pane_mv_t1

0x2fc4,	// (0x0002800d) main_clock2_pane

0x796e,	// (0x0002c9b7) main_clock2_list_pane_ParamLimits

0x796e,	// (0x0002c9b7) main_clock2_list_pane

0x79a4,	// (0x0002c9ed) main_clock2_pane_t1_ParamLimits

0x79a4,	// (0x0002c9ed) main_clock2_pane_t1

0x79e2,	// (0x0002ca2b) main_clock2_pane_t2_ParamLimits

0x79e2,	// (0x0002ca2b) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00034840) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00034840) main_clock2_pane_t

0x7a6c,	// (0x0002cab5) popup_clock_analogue_window_cp03_ParamLimits

0x7a6c,	// (0x0002cab5) popup_clock_analogue_window_cp03

0x7a93,	// (0x0002cadc) popup_clock_digital_window_cp02_ParamLimits

0x7a93,	// (0x0002cadc) popup_clock_digital_window_cp02

0x7b08,	// (0x0002cb51) main_clock2_list_single_pane_ParamLimits

0x7b08,	// (0x0002cb51) main_clock2_list_single_pane

0x53d7,	// (0x0002a420) list_highlight_pane_cp05

0xc814,	// (0x0003185d) main_clock2_list_single_pane_t1

0x3b1f,	// (0x00028b68) popup_toolbar_window_cp04_ParamLimits

0x6f96,	// (0x0002bfdf) camera2_autofocus_pane_g2_ParamLimits

0x6f96,	// (0x0002bfdf) camera2_autofocus_pane_g2

0x6fa2,	// (0x0002bfeb) camera2_autofocus_pane_g3_ParamLimits

0x6fa2,	// (0x0002bfeb) camera2_autofocus_pane_g3

0x6fae,	// (0x0002bff7) camera2_autofocus_pane_g4_ParamLimits

0x6fae,	// (0x0002bff7) camera2_autofocus_pane_g4

0x6fba,	// (0x0002c003) camera2_autofocus_pane_g5_ParamLimits

0x6fba,	// (0x0002c003) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00034789) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00034789) camera2_autofocus_pane_g

0x71a6,	// (0x0002c1ef) camera2_autofocus_pane_cp_g2

0x71ae,	// (0x0002c1f7) camera2_autofocus_pane_cp_g3

0x71b6,	// (0x0002c1ff) camera2_autofocus_pane_cp_g4

0x71be,	// (0x0002c207) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000347ef) camera2_autofocus_pane_cp_g

0x782d,	// (0x0002c876) popup_dialer_spcha_window

0x233a,	// (0x00027383) bg_popup_sub_pane_cp07

0xc822,	// (0x0003186b) list_spcha_pane

0xc82a,	// (0x00031873) list_single_spcha_pane_ParamLimits

0xc82a,	// (0x00031873) list_single_spcha_pane

0x233a,	// (0x00027383) list_highlight_pane_cp06

0xc83b,	// (0x00031884) list_single_spcha_pane_t1

0xb928,	// (0x00030971) popup_call2_audio_out_window_g4_ParamLimits

0xb928,	// (0x00030971) popup_call2_audio_out_window_g4

0x233a,	// (0x00027383) main_imed2_pane

0xbf07,	// (0x00030f50) popup_imed_adjust2_window

0x684c,	// (0x0002b895) popup_imed_trans_window_ParamLimits

0x684c,	// (0x0002b895) popup_imed_trans_window

0xc223,	// (0x0003126c) popup_blid_sat_info2_window_t1

0xc231,	// (0x0003127a) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0003471e) popup_blid_sat_info2_window_t

0x7b3a,	// (0x0002cb83) aid_size_cell_colour_35

0x7b5a,	// (0x0002cba3) aid_size_cell_colour_112

0x7b7a,	// (0x0002cbc3) aid_size_cell_effect

0xbedf,	// (0x00030f28) bg_tb_trans_pane_cp02

0x4a18,	// (0x00029a61) heading_imed_pane

0x7b9a,	// (0x0002cbe3) listscroll_imed_pane

0xc849,	// (0x00031892) heading_imed_pane_g1

0xc851,	// (0x0003189a) heading_imed_pane_t1

0xc85f,	// (0x000318a8) grid_imed_colour_35_pane_ParamLimits

0xc85f,	// (0x000318a8) grid_imed_colour_35_pane

0x7ba6,	// (0x0002cbef) grid_imed_effect_pane

0xc87a,	// (0x000318c3) list_imed_aspect_pane

0x7bbb,	// (0x0002cc04) scroll_pane_cp027_ParamLimits

0x7bbb,	// (0x0002cc04) scroll_pane_cp027

0x7bcc,	// (0x0002cc15) cell_imed_effect_pane_ParamLimits

0x7bcc,	// (0x0002cc15) cell_imed_effect_pane

0xc882,	// (0x000318cb) cell_imed_colour_pane_ParamLimits

0xc882,	// (0x000318cb) cell_imed_colour_pane

0xc8c4,	// (0x0003190d) cell_imed_colour_pane_g1_ParamLimits

0xc8c4,	// (0x0003190d) cell_imed_colour_pane_g1

0xc8d5,	// (0x0003191e) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8d5,	// (0x0003191e) hgihlgiht_grid_pane_cp016

0x7bf3,	// (0x0002cc3c) cell_imed_effect_pane_g1

0x7bfb,	// (0x0002cc44) grid_highlight_pane_cp017

0x31c6,	// (0x0002820f) list_imed_single_pane_ParamLimits

0x31c6,	// (0x0002820f) list_imed_single_pane

0x233a,	// (0x00027383) list_highlight_pane_cp07

0xc8e6,	// (0x0003192f) list_imed_aspect_pane_comp1_t1

0xbedf,	// (0x00030f28) bg_tb_trans_pane_cp05

0xc908,	// (0x00031951) popup_imed_adjust2_window_g1

0xc92f,	// (0x00031978) popup_imed_adjust2_window_t1

0xc947,	// (0x00031990) slider_imed_adjust_pane

0xc95b,	// (0x000319a4) slider_imed_adjust_pane_g1

0xc96b,	// (0x000319b4) slider_imed_adjust_pane_g2

0xc97b,	// (0x000319c4) slider_imed_adjust_pane_g3

0xc98c,	// (0x000319d5) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0003485d) slider_imed_adjust_pane_g

0x7c04,	// (0x0002cc4d) aid_size_cell_clipart2

0x7c10,	// (0x0002cc59) grid_imed_clipart_pane

0xc99d,	// (0x000319e6) scroll_pane_cp031

0x7c1a,	// (0x0002cc63) cell_imed_clipart_pane_ParamLimits

0x7c1a,	// (0x0002cc63) cell_imed_clipart_pane

0x7c41,	// (0x0002cc8a) cell_imed_clipart_pane_g1

0x233a,	// (0x00027383) grid_highlight_pane_cp014

0x7983,	// (0x0002c9cc) main_clock2_pane_g1_ParamLimits

0x7983,	// (0x0002c9cc) main_clock2_pane_g1

0x7ab3,	// (0x0002cafc) aid_call2_pane_cp10

0x7ac5,	// (0x0002cb0e) aid_call_pane_cp10

0x518d,	// (0x0002a1d6) popup_clock_analogue_window_cp10_g1

0x518d,	// (0x0002a1d6) popup_clock_analogue_window_cp10_g2

0x7ad7,	// (0x0002cb20) popup_clock_analogue_window_cp10_g3

0x7ad7,	// (0x0002cb20) popup_clock_analogue_window_cp10_g4

0x518d,	// (0x0002a1d6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0003484b) popup_clock_analogue_window_cp10_g

0x7ae9,	// (0x0002cb32) popup_clock_analogue_window_cp10_t1

0x180c,	// (0x00026855) clock_digital_number_pane_cp10_ParamLimits

0x180c,	// (0x00026855) clock_digital_number_pane_cp10

0x1824,	// (0x0002686d) clock_digital_number_pane_cp11_ParamLimits

0x1824,	// (0x0002686d) clock_digital_number_pane_cp11

0x183c,	// (0x00026885) clock_digital_number_pane_cp12_ParamLimits

0x183c,	// (0x00026885) clock_digital_number_pane_cp12

0x1854,	// (0x0002689d) clock_digital_number_pane_cp13_ParamLimits

0x1854,	// (0x0002689d) clock_digital_number_pane_cp13

0x186c,	// (0x000268b5) clock_digital_separator_pane_cp10_ParamLimits

0x186c,	// (0x000268b5) clock_digital_separator_pane_cp10

0x7b1a,	// (0x0002cb63) popup_clock_digital_window_cp02_t1_ParamLimits

0x7b1a,	// (0x0002cb63) popup_clock_digital_window_cp02_t1

0x2cdf,	// (0x00027d28) clock_digital_number_pane_cp10_g1

0x2cdf,	// (0x00027d28) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00034866) clock_digital_number_pane_cp10_g

0x2cdf,	// (0x00027d28) clock_digital_separator_pane_cp10_g1

0x2cdf,	// (0x00027d28) clock_digital_separator_pane_g2_cp10

0x53a7,	// (0x0002a3f0) navi_pane_vded_g4

0x53b0,	// (0x0002a3f9) navi_pane_vded_g5

0x53b9,	// (0x0002a402) navi_pane_vded_t1

0x233a,	// (0x00027383) main_vded_pane

0x7c4a,	// (0x0002cc93) main_vded_pane_g1

0x7c56,	// (0x0002cc9f) main_vded_pane_g2

0x7c60,	// (0x0002cca9) main_vded_pane_g3

0x0002,

0xf822,	// (0x0003486b) main_vded_pane_g

0x7c6a,	// (0x0002ccb3) main_vded_pane_t1

0x7c78,	// (0x0002ccc1) main_vded_pane_t2

0x0001,

0xf829,	// (0x00034872) main_vded_pane_t

0x7c86,	// (0x0002cccf) vded_slider_pane

0x7c90,	// (0x0002ccd9) vded_video_pane

0xc9a5,	// (0x000319ee) vded_video_pane_g1

0x7c9a,	// (0x0002cce3) vded_video_pane_g2

0xc3e7,	// (0x00031430) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00034877) vded_video_pane_g

0xc9af,	// (0x000319f8) vded_slider_pane_g1

0xc0f4,	// (0x0003113d) vded_slider_pane_g2

0xc9b8,	// (0x00031a01) vded_slider_pane_g3

0xc9c1,	// (0x00031a0a) vded_slider_pane_g4

0xc9ca,	// (0x00031a13) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0003487e) vded_slider_pane_g

0x771b,	// (0x0002c764) mup3_rocker_pane_ParamLimits

0x771b,	// (0x0002c764) mup3_rocker_pane

0x7ca3,	// (0x0002ccec) mup3_control_keys_pane_g1

0x7cab,	// (0x0002ccf4) mup3_control_keys_pane_g2

0x7cb3,	// (0x0002ccfc) mup3_control_keys_pane_g3

0x7cbb,	// (0x0002cd04) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00034889) mup3_control_keys_pane_g

0x2598,	// (0x000275e1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2598,	// (0x000275e1) popup_toolbar2_fixed_window_cp01

0x774f,	// (0x0002c798) popup_toolbar2_fixed_window_cp02_ParamLimits

0x774f,	// (0x0002c798) popup_toolbar2_fixed_window_cp02

0xb267,	// (0x000302b0) popup_call2_audio_second_window_t4_ParamLimits

0xb267,	// (0x000302b0) popup_call2_audio_second_window_t4

0xb795,	// (0x000307de) popup_call2_audio_first_window_t6_ParamLimits

0xb795,	// (0x000307de) popup_call2_audio_first_window_t6

0xba2b,	// (0x00030a74) popup_call2_audio_out_window_t6_ParamLimits

0xba2b,	// (0x00030a74) popup_call2_audio_out_window_t6

0x233a,	// (0x00027383) main_vitu_pane

0x7ccb,	// (0x0002cd14) aid_size_cell_itu_ParamLimits

0x7ccb,	// (0x0002cd14) aid_size_cell_itu

0x25b6,	// (0x000275ff) bg_popup_window_pane_cp08_ParamLimits

0x25b6,	// (0x000275ff) bg_popup_window_pane_cp08

0x7ce1,	// (0x0002cd2a) field_vitu_entry_pane_ParamLimits

0x7ce1,	// (0x0002cd2a) field_vitu_entry_pane

0x7cf8,	// (0x0002cd41) grid_vitu_function_pane_ParamLimits

0x7cf8,	// (0x0002cd41) grid_vitu_function_pane

0x7d13,	// (0x0002cd5c) grid_vitu_itu_pane_ParamLimits

0x7d13,	// (0x0002cd5c) grid_vitu_itu_pane

0x7d31,	// (0x0002cd7a) cell_vitu_itu_pane_ParamLimits

0x7d31,	// (0x0002cd7a) cell_vitu_itu_pane

0x7d55,	// (0x0002cd9e) cell_vitu_function_pane_ParamLimits

0x7d55,	// (0x0002cd9e) cell_vitu_function_pane

0x25b6,	// (0x000275ff) bg_popup_sub_pane_cp08_ParamLimits

0x25b6,	// (0x000275ff) bg_popup_sub_pane_cp08

0x7d70,	// (0x0002cdb9) field_vitu_entry_pane_t1_ParamLimits

0x7d70,	// (0x0002cdb9) field_vitu_entry_pane_t1

0xc9eb,	// (0x00031a34) field_vitu_entry_pane_t2_ParamLimits

0xc9eb,	// (0x00031a34) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00034897) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00034897) field_vitu_entry_pane_t

0xca08,	// (0x00031a51) bg_button_pane_cp05_ParamLimits

0xca08,	// (0x00031a51) bg_button_pane_cp05

0x7d90,	// (0x0002cdd9) cell_vitu_itu_pane_g1

0x7da8,	// (0x0002cdf1) cell_vitu_itu_pane_t1_ParamLimits

0x7da8,	// (0x0002cdf1) cell_vitu_itu_pane_t1

0x7dba,	// (0x0002ce03) cell_vitu_itu_pane_t2_ParamLimits

0x7dba,	// (0x0002ce03) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0003489c) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0003489c) cell_vitu_itu_pane_t

0xca16,	// (0x00031a5f) bg_button_pane_cp07

0x7def,	// (0x0002ce38) cell_vitu_function_pane_g1

0xadec,	// (0x0002fe35) main_calc_pane_g1

0x237c,	// (0x000273c5) aid_visual_content_pane

0x233a,	// (0x00027383) main_vradio_pane

0x7df8,	// (0x0002ce41) main_vradio_pane_g1_ParamLimits

0x7df8,	// (0x0002ce41) main_vradio_pane_g1

0xca20,	// (0x00031a69) main_vradio_pane_g2_ParamLimits

0xca20,	// (0x00031a69) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x000348a3) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x000348a3) main_vradio_pane_g

0x7e11,	// (0x0002ce5a) main_vradio_pane_t1_ParamLimits

0x7e11,	// (0x0002ce5a) main_vradio_pane_t1

0x7e26,	// (0x0002ce6f) main_vradio_pane_t2_ParamLimits

0x7e26,	// (0x0002ce6f) main_vradio_pane_t2

0xca2d,	// (0x00031a76) main_vradio_pane_t3_ParamLimits

0xca2d,	// (0x00031a76) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x000348a8) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x000348a8) main_vradio_pane_t

0x7e3b,	// (0x0002ce84) vradio_rocker_control_pane_ParamLimits

0x7e3b,	// (0x0002ce84) vradio_rocker_control_pane

0x7e4d,	// (0x0002ce96) vradio_station_info_pane_ParamLimits

0x7e4d,	// (0x0002ce96) vradio_station_info_pane

0xca41,	// (0x00031a8a) vradio_frequency_info_pane_ParamLimits

0xca41,	// (0x00031a8a) vradio_frequency_info_pane

0xc3e7,	// (0x00031430) vradio_station_info_pane_g1

0xca50,	// (0x00031a99) vradio_station_info_pane_t1_ParamLimits

0xca50,	// (0x00031a99) vradio_station_info_pane_t1

0xca72,	// (0x00031abb) vradio_station_info_pane_t2_ParamLimits

0xca72,	// (0x00031abb) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x000348af) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x000348af) vradio_station_info_pane_t

0xca84,	// (0x00031acd) vradio_tuning_pane

0xca8c,	// (0x00031ad5) vradio_rocker_control_pane_g1

0xca94,	// (0x00031add) vradio_rocker_control_pane_g2

0xca9c,	// (0x00031ae5) vradio_rocker_control_pane_g3

0xcaa4,	// (0x00031aed) vradio_rocker_control_pane_g4

0xcaac,	// (0x00031af5) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x000348b4) vradio_rocker_control_pane_g

0x7e5f,	// (0x0002cea8) vradio_frequency_info_pane_g1

0xcab4,	// (0x00031afd) vradio_frequency_info_pane_t1_ParamLimits

0xcab4,	// (0x00031afd) vradio_frequency_info_pane_t1

0x7e69,	// (0x0002ceb2) vradio_tuning_pane_g1

0x7e74,	// (0x0002cebd) vradio_tuning_pane_t1

0x23d1,	// (0x0002741a) area_side_right_pane_ParamLimits

0x23d1,	// (0x0002741a) area_side_right_pane

0xbea6,	// (0x00030eef) status_small_pane_g1

0xbeae,	// (0x00030ef7) status_small_pane_g2

0xbeb7,	// (0x00030f00) status_small_pane_g3

0xbec0,	// (0x00030f09) status_small_pane_g4

0x0003,

0xf62b,	// (0x00034674) status_small_pane_g

0xbec9,	// (0x00030f12) status_small_pane_t1

0x233a,	// (0x00027383) main_video3_pane

0xcac8,	// (0x00031b11) cams_zoom_vslider_pane

0xcad0,	// (0x00031b19) image3_wide_pane_ParamLimits

0xcad0,	// (0x00031b19) image3_wide_pane

0xcaea,	// (0x00031b33) image3_wide_small_pane

0xcaf6,	// (0x00031b3f) main_video3_pane_g1_ParamLimits

0xcaf6,	// (0x00031b3f) main_video3_pane_g1

0xcb12,	// (0x00031b5b) main_video3_pane_g2_ParamLimits

0xcb12,	// (0x00031b5b) main_video3_pane_g2

0x0001,

0xf876,	// (0x000348bf) main_video3_pane_g_ParamLimits

0xf876,	// (0x000348bf) main_video3_pane_g

0xcb2e,	// (0x00031b77) main_video3_pane_t1_ParamLimits

0xcb2e,	// (0x00031b77) main_video3_pane_t1

0xcb59,	// (0x00031ba2) main_video3_pane_t2_ParamLimits

0xcb59,	// (0x00031ba2) main_video3_pane_t2

0xcb84,	// (0x00031bcd) main_video3_pane_t3_ParamLimits

0xcb84,	// (0x00031bcd) main_video3_pane_t3

0x0002,

0xf87b,	// (0x000348c4) main_video3_pane_t_ParamLimits

0xf87b,	// (0x000348c4) main_video3_pane_t

0xcbb1,	// (0x00031bfa) cams_zoom_vslider_pane_g1

0xcbba,	// (0x00031c03) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x000348cb) cams_zoom_vslider_pane_g

0xcbc2,	// (0x00031c0b) small_slider_vertical_pane

0xc3e7,	// (0x00031430) small_slider_vertical_pane_g1

0xc3e7,	// (0x00031430) small_slider_vertical_pane_g2

0xcbca,	// (0x00031c13) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x000348d0) small_slider_vertical_pane_g

0x233a,	// (0x00027383) main_hwr_training_pane

0xcbd3,	// (0x00031c1c) hwr_training_instruct_pane_ParamLimits

0xcbd3,	// (0x00031c1c) hwr_training_instruct_pane

0x7e83,	// (0x0002cecc) hwr_training_navi_pane_ParamLimits

0x7e83,	// (0x0002cecc) hwr_training_navi_pane

0x7ea2,	// (0x0002ceeb) hwr_training_write_pane_ParamLimits

0x7ea2,	// (0x0002ceeb) hwr_training_write_pane

0x233a,	// (0x00027383) bg_frame_shadow_pane

0xcc0a,	// (0x00031c53) hwr_training_write_pane_g1

0xcc12,	// (0x00031c5b) hwr_training_write_pane_g2

0xcc1a,	// (0x00031c63) hwr_training_write_pane_g3

0xcc22,	// (0x00031c6b) hwr_training_write_pane_g4

0xcc2a,	// (0x00031c73) hwr_training_write_pane_g5

0xcc32,	// (0x00031c7b) hwr_training_write_pane_g6

0xcc3a,	// (0x00031c83) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x000348d7) hwr_training_write_pane_g

0xcc42,	// (0x00031c8b) hwr_training_navi_pane_g1_ParamLimits

0xcc42,	// (0x00031c8b) hwr_training_navi_pane_g1

0xcc54,	// (0x00031c9d) hwr_training_navi_pane_g2_ParamLimits

0xcc54,	// (0x00031c9d) hwr_training_navi_pane_g2

0xcc66,	// (0x00031caf) hwr_training_navi_pane_g3_ParamLimits

0xcc66,	// (0x00031caf) hwr_training_navi_pane_g3

0xcc76,	// (0x00031cbf) hwr_training_navi_pane_g4_ParamLimits

0xcc76,	// (0x00031cbf) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000348e6) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000348e6) hwr_training_navi_pane_g

0xcc83,	// (0x00031ccc) hwr_training_navi_pane_t1

0x7edd,	// (0x0002cf26) list_single_hwr_training_instruct_pane_ParamLimits

0x7edd,	// (0x0002cf26) list_single_hwr_training_instruct_pane

0xcc91,	// (0x00031cda) list_single_hwr_training_instruct_pane_t1

0xc327,	// (0x00031370) bg_frame_shadow_pane_g1

0xcca0,	// (0x00031ce9) bg_frame_shadow_pane_g2

0xcca8,	// (0x00031cf1) bg_frame_shadow_pane_g3

0xccb0,	// (0x00031cf9) bg_frame_shadow_pane_g4

0xccb8,	// (0x00031d01) bg_frame_shadow_pane_g5

0xccc0,	// (0x00031d09) bg_frame_shadow_pane_g6

0xccc8,	// (0x00031d11) bg_frame_shadow_pane_g7

0x3164,	// (0x000281ad) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000348f1) bg_frame_shadow_pane_g

0x233a,	// (0x00027383) main_video_tele_dialer_pane

0x1893,	// (0x000268dc) aid_size_cell_video_keypad_ParamLimits

0x1893,	// (0x000268dc) aid_size_cell_video_keypad

0x18ad,	// (0x000268f6) grid_video_dialer_keypad_pane_ParamLimits

0x18ad,	// (0x000268f6) grid_video_dialer_keypad_pane

0x18f9,	// (0x00026942) video_down_pane_cp_ParamLimits

0x18f9,	// (0x00026942) video_down_pane_cp

0x1911,	// (0x0002695a) cell_video_dialer_keypad_pane_ParamLimits

0x1911,	// (0x0002695a) cell_video_dialer_keypad_pane

0xccd0,	// (0x00031d19) bg_button_pane_cp08_ParamLimits

0xccd0,	// (0x00031d19) bg_button_pane_cp08

0x7f16,	// (0x0002cf5f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f16,	// (0x0002cf5f) cell_video_dialer_keypad_pane_g1

0x7705,	// (0x0002c74e) mup3_rocker2_pane_ParamLimits

0x7705,	// (0x0002c74e) mup3_rocker2_pane

0xc3e7,	// (0x00031430) mup3_rocker2_pane_g1

0x6735,	// (0x0002b77e) main_dialer2_pane

0x233a,	// (0x00027383) main_mp4_pane

0xcce4,	// (0x00031d2d) main_mp4_pane_g1_ParamLimits

0xcce4,	// (0x00031d2d) main_mp4_pane_g1

0xcce4,	// (0x00031d2d) main_mp4_pane_g2_ParamLimits

0xcce4,	// (0x00031d2d) main_mp4_pane_g2

0x1933,	// (0x0002697c) main_mp4_pane_g3_ParamLimits

0x1933,	// (0x0002697c) main_mp4_pane_g3

0xccf2,	// (0x00031d3b) main_mp4_pane_g4_ParamLimits

0xccf2,	// (0x00031d3b) main_mp4_pane_g4

0xcd1a,	// (0x00031d63) main_mp4_pane_g5_ParamLimits

0xcd1a,	// (0x00031d63) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00034911) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00034911) main_mp4_pane_g

0xcd6a,	// (0x00031db3) main_mp4_pane_t1_ParamLimits

0xcd6a,	// (0x00031db3) main_mp4_pane_t1

0xcdc6,	// (0x00031e0f) main_mp4_pane_t2_ParamLimits

0xcdc6,	// (0x00031e0f) main_mp4_pane_t2

0xce18,	// (0x00031e61) main_mp4_pane_t3_ParamLimits

0xce18,	// (0x00031e61) main_mp4_pane_t3

0xce38,	// (0x00031e81) main_mp4_pane_t4_ParamLimits

0xce38,	// (0x00031e81) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0003491e) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0003491e) main_mp4_pane_t

0xce7c,	// (0x00031ec5) mp4_progress_pane_ParamLimits

0xce7c,	// (0x00031ec5) mp4_progress_pane

0xcec6,	// (0x00031f0f) mp4_rocker_pane_ParamLimits

0xcec6,	// (0x00031f0f) mp4_rocker_pane

0xceee,	// (0x00031f37) mp4_progress_pane_t1

0xcf07,	// (0x00031f50) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00034927) mp4_progress_pane_t

0xcf20,	// (0x00031f69) mup_progress_pane_cp04

0xcf2c,	// (0x00031f75) mp4_rocker_pane_g1

0x196f,	// (0x000269b8) aid_cell_size_keypad2_ParamLimits

0x196f,	// (0x000269b8) aid_cell_size_keypad2

0x1985,	// (0x000269ce) dialer2_ne_pane_ParamLimits

0x1985,	// (0x000269ce) dialer2_ne_pane

0x199f,	// (0x000269e8) grid_dialer2_keypad_pane_ParamLimits

0x199f,	// (0x000269e8) grid_dialer2_keypad_pane

0xc1ca,	// (0x00031213) bg_popup_call_pane_cp07_ParamLimits

0xc1ca,	// (0x00031213) bg_popup_call_pane_cp07

0x7f51,	// (0x0002cf9a) dialer2_ne_pane_t1_ParamLimits

0x7f51,	// (0x0002cf9a) dialer2_ne_pane_t1

0x19bd,	// (0x00026a06) cell_dialer2_keypad_pane_ParamLimits

0x19bd,	// (0x00026a06) cell_dialer2_keypad_pane

0xcf48,	// (0x00031f91) bg_button_pane_pane_cp04_ParamLimits

0xcf48,	// (0x00031f91) bg_button_pane_pane_cp04

0x7f90,	// (0x0002cfd9) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f90,	// (0x0002cfd9) cell_dialer2_keypad_pane_g1

0x3a31,	// (0x00028a7a) aid_placing_vt_set_content_ParamLimits

0x3a31,	// (0x00028a7a) aid_placing_vt_set_content

0x3a53,	// (0x00028a9c) aid_placing_vt_set_title_ParamLimits

0x3a53,	// (0x00028a9c) aid_placing_vt_set_title

0x233a,	// (0x00027383) main_image3_pane

0x1a3f,	// (0x00026a88) area_side_right_pane_cp01_ParamLimits

0x1a3f,	// (0x00026a88) area_side_right_pane_cp01

0xcce4,	// (0x00031d2d) main_image3_pane_g1_ParamLimits

0xcce4,	// (0x00031d2d) main_image3_pane_g1

0x1a56,	// (0x00026a9f) main_image3_pane_g2_ParamLimits

0x1a56,	// (0x00026a9f) main_image3_pane_g2

0x1a7e,	// (0x00026ac7) main_image3_pane_g3_ParamLimits

0x1a7e,	// (0x00026ac7) main_image3_pane_g3

0x1aa8,	// (0x00026af1) main_image3_pane_g4_ParamLimits

0x1aa8,	// (0x00026af1) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00034936) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00034936) main_image3_pane_g

0x1ad2,	// (0x00026b1b) main_image3_pane_t1_ParamLimits

0x1ad2,	// (0x00026b1b) main_image3_pane_t1

0x1b2a,	// (0x00026b73) main_image3_pane_t2_ParamLimits

0x1b2a,	// (0x00026b73) main_image3_pane_t2

0x1b7c,	// (0x00026bc5) main_image3_pane_t3_ParamLimits

0x1b7c,	// (0x00026bc5) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0003493f) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0003493f) main_image3_pane_t

0x25b6,	// (0x000275ff) grid_sctrl_middle_pane_cp01_ParamLimits

0x25b6,	// (0x000275ff) grid_sctrl_middle_pane_cp01

0x7ff8,	// (0x0002d041) cell_sctrl_middle_pane_cp01_ParamLimits

0x7ff8,	// (0x0002d041) cell_sctrl_middle_pane_cp01

0x8015,	// (0x0002d05e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8015,	// (0x0002d05e) cell_sctrl_middle_pane_cp01_g1

0x233a,	// (0x00027383) main_call4_pane

0x802b,	// (0x0002d074) aid_size_button_call4_ParamLimits

0x802b,	// (0x0002d074) aid_size_button_call4

0x805c,	// (0x0002d0a5) call4_windows_pane_ParamLimits

0x805c,	// (0x0002d0a5) call4_windows_pane

0x807c,	// (0x0002d0c5) grid_call4_button_pane_ParamLimits

0x807c,	// (0x0002d0c5) grid_call4_button_pane

0xcf86,	// (0x00031fcf) call4_windows_conf_pane

0xcf9b,	// (0x00031fe4) popup_call4_audio_first_window_ParamLimits

0xcf9b,	// (0x00031fe4) popup_call4_audio_first_window

0xcfe7,	// (0x00032030) popup_call4_audio_second_window_ParamLimits

0xcfe7,	// (0x00032030) popup_call4_audio_second_window

0xcffb,	// (0x00032044) popup_call4_audio_wait_window_ParamLimits

0xcffb,	// (0x00032044) popup_call4_audio_wait_window

0x80a9,	// (0x0002d0f2) cell_call4_button_pane_ParamLimits

0x80a9,	// (0x0002d0f2) cell_call4_button_pane

0x80d2,	// (0x0002d11b) bg_button_pane_cp09_ParamLimits

0x80d2,	// (0x0002d11b) bg_button_pane_cp09

0x80de,	// (0x0002d127) cell_call4_button_pane_g1_ParamLimits

0x80de,	// (0x0002d127) cell_call4_button_pane_g1

0x8104,	// (0x0002d14d) cell_call4_button_pane_t1_ParamLimits

0x8104,	// (0x0002d14d) cell_call4_button_pane_t1

0xd043,	// (0x0003208c) popup_call4_audio_conf_window_ParamLimits

0xd043,	// (0x0003208c) popup_call4_audio_conf_window

0x7765,	// (0x0002c7ae) mup3_progress_pane_t1_ParamLimits

0x777c,	// (0x0002c7c5) mup3_progress_pane_t2_ParamLimits

0xc701,	// (0x0003174a) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x00034818) mup3_progress_pane_t_ParamLimits

0xc718,	// (0x00031761) mup_progress_pane_cp03_ParamLimits

0x7cc3,	// (0x0002cd0c) mup3_control_keys_pane_g4_copy1

0xceaa,	// (0x00031ef3) mp4_rocker2_pane_ParamLimits

0xceaa,	// (0x00031ef3) mp4_rocker2_pane

0xd057,	// (0x000320a0) mp4_rocker2_pane_g1

0xd05f,	// (0x000320a8) mp4_rocker2_pane_g2

0xd067,	// (0x000320b0) mp4_rocker2_pane_g3

0xd06f,	// (0x000320b8) mp4_rocker2_pane_g4

0xd077,	// (0x000320c0) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00034948) mp4_rocker2_pane_g

0x233a,	// (0x00027383) main_camera4_pane

0x233a,	// (0x00027383) main_video4_pane

0x18c9,	// (0x00026912) main_video_tele_dialer_pane_t1_ParamLimits

0x18c9,	// (0x00026912) main_video_tele_dialer_pane_t1

0x18e1,	// (0x0002692a) main_video_tele_dialer_pane_t2_ParamLimits

0x18e1,	// (0x0002692a) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00034902) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00034902) main_video_tele_dialer_pane_t

0x1c1c,	// (0x00026c65) cam4_autofocus_pane_ParamLimits

0x1c1c,	// (0x00026c65) cam4_autofocus_pane

0x1c32,	// (0x00026c7b) cam4_image_uncrop_pane_ParamLimits

0x1c32,	// (0x00026c7b) cam4_image_uncrop_pane

0x1c4c,	// (0x00026c95) cam4_indicators_pane_ParamLimits

0x1c4c,	// (0x00026c95) cam4_indicators_pane

0x1c77,	// (0x00026cc0) main_camera4_pane_g1_ParamLimits

0x1c77,	// (0x00026cc0) main_camera4_pane_g1

0x1c8a,	// (0x00026cd3) main_camera4_pane_g2_ParamLimits

0x1c8a,	// (0x00026cd3) main_camera4_pane_g2

0x1c9d,	// (0x00026ce6) main_camera4_pane_g3_ParamLimits

0x1c9d,	// (0x00026ce6) main_camera4_pane_g3

0x1cb0,	// (0x00026cf9) main_camera4_pane_g4_ParamLimits

0x1cb0,	// (0x00026cf9) main_camera4_pane_g4

0x1cc3,	// (0x00026d0c) main_camera4_pane_g5_ParamLimits

0x1cc3,	// (0x00026d0c) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00034953) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00034953) main_camera4_pane_g

0x1ce7,	// (0x00026d30) main_camera4_pane_t1_ParamLimits

0x1ce7,	// (0x00026d30) main_camera4_pane_t1

0xd08f,	// (0x000320d8) bg_tb_trans_pane_cp06

0xd0a5,	// (0x000320ee) cam4_indicators_pane_g1

0xd0b6,	// (0x000320ff) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0003496e) cam4_indicators_pane_g

0xd0d4,	// (0x0003211d) cam4_indicators_pane_t1

0x1d37,	// (0x00026d80) main_video4_pane_g1_ParamLimits

0x1d37,	// (0x00026d80) main_video4_pane_g1

0x1d4a,	// (0x00026d93) main_video4_pane_g2_ParamLimits

0x1d4a,	// (0x00026d93) main_video4_pane_g2

0x1d5e,	// (0x00026da7) main_video4_pane_g3_ParamLimits

0x1d5e,	// (0x00026da7) main_video4_pane_g3

0x1d72,	// (0x00026dbb) main_video4_pane_g4_ParamLimits

0x1d72,	// (0x00026dbb) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00034975) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00034975) main_video4_pane_g

0x1d9a,	// (0x00026de3) vid4_indicators_pane_ParamLimits

0x1d9a,	// (0x00026de3) vid4_indicators_pane

0x1dcc,	// (0x00026e15) video4_image_uncrop_cif_pane_ParamLimits

0x1dcc,	// (0x00026e15) video4_image_uncrop_cif_pane

0x1de6,	// (0x00026e2f) video4_image_uncrop_nhd_pane_ParamLimits

0x1de6,	// (0x00026e2f) video4_image_uncrop_nhd_pane

0x1c32,	// (0x00026c7b) video4_image_uncrop_vga_pane_ParamLimits

0x1c32,	// (0x00026c7b) video4_image_uncrop_vga_pane

0xd0f6,	// (0x0003213f) bg_tb_trans_pane_cp07

0x1dfa,	// (0x00026e43) vid4_indicators_pane_g1

0x1e07,	// (0x00026e50) vid4_indicators_pane_g2

0x1e14,	// (0x00026e5d) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00034980) vid4_indicators_pane_g

0x1e39,	// (0x00026e82) vid4_indicators_pane_t1

0x8154,	// (0x0002d19d) cam4_autofocus_pane_g1

0x815c,	// (0x0002d1a5) cam4_autofocus_pane_g2

0x8164,	// (0x0002d1ad) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0003498b) cam4_autofocus_pane_g

0x816c,	// (0x0002d1b5) cam4_autofocus_pane_g3_copy1

0x7efa,	// (0x0002cf43) video_down_pane_cp_t1

0x7f08,	// (0x0002cf51) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00034907) video_down_pane_cp_t

0x25b6,	// (0x000275ff) popup_vitu2_window_ParamLimits

0x25b6,	// (0x000275ff) popup_vitu2_window

0x1e4b,	// (0x00026e94) aid_size_cell2_itu2_ParamLimits

0x1e4b,	// (0x00026e94) aid_size_cell2_itu2

0x1e71,	// (0x00026eba) aid_size_cell_itu2_ParamLimits

0x1e71,	// (0x00026eba) aid_size_cell_itu2

0x1ecd,	// (0x00026f16) bg_popup_window_pane_cp09_ParamLimits

0x1ecd,	// (0x00026f16) bg_popup_window_pane_cp09

0x1edb,	// (0x00026f24) field_vitu2_entry_pane_ParamLimits

0x1edb,	// (0x00026f24) field_vitu2_entry_pane

0x1f01,	// (0x00026f4a) grid_vitu2_function_pane_ParamLimits

0x1f01,	// (0x00026f4a) grid_vitu2_function_pane

0x1f52,	// (0x00026f9b) grid_vitu2_itu_pane_ParamLimits

0x1f52,	// (0x00026f9b) grid_vitu2_itu_pane

0x1fe3,	// (0x0002702c) cell_vitu2_itu_pane_ParamLimits

0x1fe3,	// (0x0002702c) cell_vitu2_itu_pane

0x2007,	// (0x00027050) cell_vitu2_function_pane_ParamLimits

0x2007,	// (0x00027050) cell_vitu2_function_pane

0xd10c,	// (0x00032155) bg_popup_call_pane_cp08_ParamLimits

0xd10c,	// (0x00032155) bg_popup_call_pane_cp08

0xd125,	// (0x0003216e) field_vitu2_entry_pane_g1

0xd131,	// (0x0003217a) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00034992) field_vitu2_entry_pane_g

0xd14b,	// (0x00032194) field_vitu2_entry_pane_t1_ParamLimits

0xd14b,	// (0x00032194) field_vitu2_entry_pane_t1

0xd17c,	// (0x000321c5) field_vitu2_entry_pane_t2_ParamLimits

0xd17c,	// (0x000321c5) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00034999) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00034999) field_vitu2_entry_pane_t

0x2046,	// (0x0002708f) bg_button_pane_cp010_ParamLimits

0x2046,	// (0x0002708f) bg_button_pane_cp010

0x2054,	// (0x0002709d) cell_vitu2_itu_pane_g1

0x2072,	// (0x000270bb) cell_vitu2_itu_pane_t1_ParamLimits

0x2072,	// (0x000270bb) cell_vitu2_itu_pane_t1

0x20d8,	// (0x00027121) cell_vitu2_itu_pane_t2_ParamLimits

0x20d8,	// (0x00027121) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x000349a3) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x000349a3) cell_vitu2_itu_pane_t

0xd1a1,	// (0x000321ea) bg_button_pane_cp011

0x21b4,	// (0x000271fd) cell_vitu2_function_pane_g1

0x233a,	// (0x00027383) main_myfav_hc_pane

0x1bcc,	// (0x00026c15) popup_image3_note_pane_ParamLimits

0x1bcc,	// (0x00026c15) popup_image3_note_pane

0x1be8,	// (0x00026c31) popup_image3_tool_bar_pane_ParamLimits

0x1be8,	// (0x00026c31) popup_image3_tool_bar_pane

0x215c,	// (0x000271a5) cell_vitu2_itu_pane_t3_ParamLimits

0x215c,	// (0x000271a5) cell_vitu2_itu_pane_t3

0x233a,	// (0x00027383) bg_popup_trans_pane

0xd1af,	// (0x000321f8) grid_image3_tool_bar_pane

0xd1b9,	// (0x00032202) bg_popup_trans_pane_g1

0x3f77,	// (0x00028fc0) bg_popup_trans_pane_g2

0xd1c1,	// (0x0003220a) bg_popup_trans_pane_g3

0xd1c9,	// (0x00032212) bg_popup_trans_pane_g4

0xd1d1,	// (0x0003221a) bg_popup_trans_pane_g5

0xd1d9,	// (0x00032222) bg_popup_trans_pane_g6

0xd1e1,	// (0x0003222a) bg_popup_trans_pane_g7

0xd1e9,	// (0x00032232) bg_popup_trans_pane_g8

0x3f57,	// (0x00028fa0) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x000349aa) bg_popup_trans_pane_g

0xd1f1,	// (0x0003223a) cell_image3_tool_bar_pane_ParamLimits

0xd1f1,	// (0x0003223a) cell_image3_tool_bar_pane

0xc3e7,	// (0x00031430) cell_image3_tool_bar_pane_g1

0x233a,	// (0x00027383) bg_popup_trans_pane_cp1

0xd205,	// (0x0003224e) popup_image3_note_pane_t1

0xd213,	// (0x0003225c) popup_image3_note_pane_t2

0xd221,	// (0x0003226a) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x000349bd) popup_image3_note_pane_t

0xd22f,	// (0x00032278) popup_image3_note_pane_t3_copy1

0x8174,	// (0x0002d1bd) bg_myfav_hc_instruction_pane_ParamLimits

0x8174,	// (0x0002d1bd) bg_myfav_hc_instruction_pane

0x818a,	// (0x0002d1d3) cell_myfav_contact_pane_ParamLimits

0x818a,	// (0x0002d1d3) cell_myfav_contact_pane

0x81a6,	// (0x0002d1ef) cell_myfav_contact_pane_cp1_ParamLimits

0x81a6,	// (0x0002d1ef) cell_myfav_contact_pane_cp1

0x81be,	// (0x0002d207) cell_myfav_contact_pane_cp2_ParamLimits

0x81be,	// (0x0002d207) cell_myfav_contact_pane_cp2

0x81d6,	// (0x0002d21f) cell_myfav_contact_pane_cp3_ParamLimits

0x81d6,	// (0x0002d21f) cell_myfav_contact_pane_cp3

0x81ed,	// (0x0002d236) cell_myfav_contact_pane_cp4_ParamLimits

0x81ed,	// (0x0002d236) cell_myfav_contact_pane_cp4

0x8205,	// (0x0002d24e) cell_myfav_contact_pane_cp5_ParamLimits

0x8205,	// (0x0002d24e) cell_myfav_contact_pane_cp5

0x8219,	// (0x0002d262) cell_myfav_contact_pane_cp6_ParamLimits

0x8219,	// (0x0002d262) cell_myfav_contact_pane_cp6

0x822f,	// (0x0002d278) cell_myfav_contact_pane_cp7_ParamLimits

0x822f,	// (0x0002d278) cell_myfav_contact_pane_cp7

0xd23d,	// (0x00032286) listscroll_gen_pane_cp05

0x8249,	// (0x0002d292) main_myfav_hc_pane_g1_ParamLimits

0x8249,	// (0x0002d292) main_myfav_hc_pane_g1

0x8263,	// (0x0002d2ac) main_myfav_hc_pane_g2_ParamLimits

0x8263,	// (0x0002d2ac) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x000349c4) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x000349c4) main_myfav_hc_pane_g

0x8295,	// (0x0002d2de) main_myfav_hc_pane_t1_ParamLimits

0x8295,	// (0x0002d2de) main_myfav_hc_pane_t1

0xd246,	// (0x0003228f) main_myfav_hc_pane_t2_ParamLimits

0xd246,	// (0x0003228f) main_myfav_hc_pane_t2

0xd258,	// (0x000322a1) main_myfav_hc_pane_t3_ParamLimits

0xd258,	// (0x000322a1) main_myfav_hc_pane_t3

0x82ac,	// (0x0002d2f5) main_myfav_hc_pane_t4_ParamLimits

0x82ac,	// (0x0002d2f5) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x000349cb) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x000349cb) main_myfav_hc_pane_t

0xc3e7,	// (0x00031430) bg_myfav_hc_instruction_pane_g1

0xd26a,	// (0x000322b3) cell_myfav_contact_pane_g1_ParamLimits

0xd26a,	// (0x000322b3) cell_myfav_contact_pane_g1

0xd26a,	// (0x000322b3) cell_myfav_contact_pane_g2_ParamLimits

0xd26a,	// (0x000322b3) cell_myfav_contact_pane_g2

0xd276,	// (0x000322bf) cell_myfav_contact_pane_g3_ParamLimits

0xd276,	// (0x000322bf) cell_myfav_contact_pane_g3

0xc6eb,	// (0x00031734) cell_myfav_contact_pane_g4_ParamLimits

0xc6eb,	// (0x00031734) cell_myfav_contact_pane_g4

0xd283,	// (0x000322cc) cell_myfav_contact_pane_g5_ParamLimits

0xd283,	// (0x000322cc) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x000349d6) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x000349d6) cell_myfav_contact_pane_g

0x827d,	// (0x0002d2c6) main_myfav_hc_pane_g3_ParamLimits

0x827d,	// (0x0002d2c6) main_myfav_hc_pane_g3

0x24ef,	// (0x00027538) popup_adpt_find_window

0x82d4,	// (0x0002d31d) afind_page_pane_ParamLimits

0x82d4,	// (0x0002d31d) afind_page_pane

0x82e9,	// (0x0002d332) aid_size_cell_afind_ParamLimits

0x82e9,	// (0x0002d332) aid_size_cell_afind

0x8307,	// (0x0002d350) bg_popup_sub_pane_cp09_ParamLimits

0x8307,	// (0x0002d350) bg_popup_sub_pane_cp09

0x8314,	// (0x0002d35d) find_pane_cp01_ParamLimits

0x8314,	// (0x0002d35d) find_pane_cp01

0xd28f,	// (0x000322d8) grid_afind_control_pane_ParamLimits

0xd28f,	// (0x000322d8) grid_afind_control_pane

0x8321,	// (0x0002d36a) grid_afind_pane_ParamLimits

0x8321,	// (0x0002d36a) grid_afind_pane

0x8343,	// (0x0002d38c) cell_afind_pane_ParamLimits

0x8343,	// (0x0002d38c) cell_afind_pane

0xc3e7,	// (0x00031430) afind_page_pane_g1

0x83a4,	// (0x0002d3ed) afind_page_pane_g2

0x83ad,	// (0x0002d3f6) afind_page_pane_g3

0x0002,

0xf998,	// (0x000349e1) afind_page_pane_g

0x83b6,	// (0x0002d3ff) afind_page_pane_t1

0xd2a3,	// (0x000322ec) cell_afind_grid_control_pane_ParamLimits

0xd2a3,	// (0x000322ec) cell_afind_grid_control_pane

0xcf48,	// (0x00031f91) bg_button_pane_cp69_ParamLimits

0xcf48,	// (0x00031f91) bg_button_pane_cp69

0x83d6,	// (0x0002d41f) cell_afind_pane_g1_ParamLimits

0x83d6,	// (0x0002d41f) cell_afind_pane_g1

0x83e3,	// (0x0002d42c) cell_afind_pane_t1_ParamLimits

0x83e3,	// (0x0002d42c) cell_afind_pane_t1

0x38b5,	// (0x000288fe) bg_button_pane_cp72

0xd2b2,	// (0x000322fb) cell_afind_grid_control_pane_g1

0x612d,	// (0x0002b176) aid_image_placing_area_ParamLimits

0x612d,	// (0x0002b176) aid_image_placing_area

0xc9d3,	// (0x00031a1c) field_vitu_entry_pane_g1_ParamLimits

0xc9d3,	// (0x00031a1c) field_vitu_entry_pane_g1

0xc9df,	// (0x00031a28) field_vitu_entry_pane_g2_ParamLimits

0xc9df,	// (0x00031a28) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00034892) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00034892) field_vitu_entry_pane_g

0x7d90,	// (0x0002cdd9) cell_vitu_itu_pane_g1_ParamLimits

0x7dd2,	// (0x0002ce1b) cell_vitu_itu_pane_t3_ParamLimits

0x7dd2,	// (0x0002ce1b) cell_vitu_itu_pane_t3

0xceee,	// (0x00031f37) mp4_progress_pane_t1_ParamLimits

0xcf07,	// (0x00031f50) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00034927) mp4_progress_pane_t_ParamLimits

0xcf20,	// (0x00031f69) mup_progress_pane_cp04_ParamLimits

0x82c0,	// (0x0002d309) main_myfav_hc_pane_t5_ParamLimits

0x82c0,	// (0x0002d309) main_myfav_hc_pane_t5

0x2390,	// (0x000273d9) aid_zoom_text_primary

0x24ef,	// (0x00027538) popup_adpt_find_window_ParamLimits

0x25b6,	// (0x000275ff) main_cam_set_pane

0x1c63,	// (0x00026cac) cam4_zoom_pane_ParamLimits

0x1c63,	// (0x00026cac) cam4_zoom_pane

0x83f5,	// (0x0002d43e) main_cam_set_pane_g1_ParamLimits

0x83f5,	// (0x0002d43e) main_cam_set_pane_g1

0x8403,	// (0x0002d44c) main_cam_set_pane_g2_ParamLimits

0x8403,	// (0x0002d44c) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000349e8) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000349e8) main_cam_set_pane_g

0x8424,	// (0x0002d46d) main_cam_set_pane_t1_ParamLimits

0x8424,	// (0x0002d46d) main_cam_set_pane_t1

0x843f,	// (0x0002d488) main_cset_listscroll_pane_ParamLimits

0x843f,	// (0x0002d488) main_cset_listscroll_pane

0x845f,	// (0x0002d4a8) main_cset_slider_pane_ParamLimits

0x845f,	// (0x0002d4a8) main_cset_slider_pane

0xd2c3,	// (0x0003230c) main_cset_list_pane_ParamLimits

0xd2c3,	// (0x0003230c) main_cset_list_pane

0xd2d3,	// (0x0003231c) scroll_pane_cp028

0x8485,	// (0x0002d4ce) aid_area_touch_slider

0x84a1,	// (0x0002d4ea) cset_slider_pane

0x84cb,	// (0x0002d514) main_cset_slider_pane_g1

0x84e0,	// (0x0002d529) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000349ed) main_cset_slider_pane_g

0xd30c,	// (0x00032355) main_cset_slider_pane_t1

0x859c,	// (0x0002d5e5) main_cset_slider_pane_t2

0x85b6,	// (0x0002d5ff) main_cset_slider_pane_t3

0x85d0,	// (0x0002d619) main_cset_slider_pane_t4

0x85ea,	// (0x0002d633) main_cset_slider_pane_t5

0x8606,	// (0x0002d64f) main_cset_slider_pane_t6

0x861b,	// (0x0002d664) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00034a12) main_cset_slider_pane_t

0x871f,	// (0x0002d768) cset_list_set_pane_ParamLimits

0x871f,	// (0x0002d768) cset_list_set_pane

0x8733,	// (0x0002d77c) aid_position_infowindow_above

0x873b,	// (0x0002d784) aid_position_infowindow_below

0x8743,	// (0x0002d78c) cset_list_set_pane_g1_ParamLimits

0x8743,	// (0x0002d78c) cset_list_set_pane_g1

0x874f,	// (0x0002d798) cset_list_set_pane_g3_ParamLimits

0x874f,	// (0x0002d798) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00034a31) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00034a31) cset_list_set_pane_g

0x875e,	// (0x0002d7a7) cset_list_set_pane_t1_ParamLimits

0x875e,	// (0x0002d7a7) cset_list_set_pane_t1

0x25b6,	// (0x000275ff) list_highlight_pane_cp021_ParamLimits

0x25b6,	// (0x000275ff) list_highlight_pane_cp021

0x5915,	// (0x0002a95e) cset_slider_pane_g1

0x5927,	// (0x0002a970) cset_slider_pane_g2

0x591e,	// (0x0002a967) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00034a36) cset_slider_pane_g

0xd3ac,	// (0x000323f5) aid_area_touch_cam4_zoom

0xd3b4,	// (0x000323fd) cam4_zoom_cont_pane

0xd3bc,	// (0x00032405) cam4_zoom_pane_g1

0xd3c4,	// (0x0003240d) cam4_zoom_pane_g2

0x21c8,	// (0x00027211) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00034a3d) cam4_zoom_pane_g

0xd3cc,	// (0x00032415) cam4_zoom_cont_pane_g1

0xd3d5,	// (0x0003241e) cam4_zoom_cont_pane_g2

0xd3de,	// (0x00032427) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00034a44) cam4_zoom_cont_pane_g

0x8049,	// (0x0002d092) call4_image_pane_ParamLimits

0x8049,	// (0x0002d092) call4_image_pane

0xcf86,	// (0x00031fcf) call4_windows_conf_pane_ParamLimits

0xcfc5,	// (0x0003200e) popup_call4_audio_in_window_ParamLimits

0xcfc5,	// (0x0003200e) popup_call4_audio_in_window

0x233a,	// (0x00027383) bg_popup_call2_act_pane_cp02

0xd03b,	// (0x00032084) call4_list_conf_pane

0xc3e7,	// (0x00031430) call4_image_pane_g1

0xc3e7,	// (0x00031430) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00034758) call4_image_pane_g

0xd3e7,	// (0x00032430) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3e7,	// (0x00032430) list_single_graphic_popup_conf4_pane

0x233a,	// (0x00027383) list_highlight_pane_cp022

0xd3fa,	// (0x00032443) list_single_graphic_popup_conf4_pane_g1

0x4ea3,	// (0x00029eec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00034a4b) list_single_graphic_popup_conf4_pane_g

0xd402,	// (0x0003244b) list_single_graphic_popup_conf4_pane_t1

0x3b3f,	// (0x00028b88) popup_vtel_slider_window_ParamLimits

0x3b3f,	// (0x00028b88) popup_vtel_slider_window

0xcf36,	// (0x00031f7f) dialer2_ne_pane_t2_ParamLimits

0xcf36,	// (0x00031f7f) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0003492c) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0003492c) dialer2_ne_pane_t

0xc1ca,	// (0x00031213) bg_popup_sub_pane_cp010_ParamLimits

0xc1ca,	// (0x00031213) bg_popup_sub_pane_cp010

0x8773,	// (0x0002d7bc) popup_vtel_slider_window_g1_ParamLimits

0x8773,	// (0x0002d7bc) popup_vtel_slider_window_g1

0x8786,	// (0x0002d7cf) popup_vtel_slider_window_g2_ParamLimits

0x8786,	// (0x0002d7cf) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00034a50) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00034a50) popup_vtel_slider_window_g

0x87dc,	// (0x0002d825) vtel_slider_pane_ParamLimits

0x87dc,	// (0x0002d825) vtel_slider_pane

0x87fe,	// (0x0002d847) vtel_slider_pane_g1_ParamLimits

0x87fe,	// (0x0002d847) vtel_slider_pane_g1

0x8812,	// (0x0002d85b) vtel_slider_pane_g2_ParamLimits

0x8812,	// (0x0002d85b) vtel_slider_pane_g2

0x882a,	// (0x0002d873) vtel_slider_pane_g3_ParamLimits

0x882a,	// (0x0002d873) vtel_slider_pane_g3

0x87fe,	// (0x0002d847) vtel_slider_pane_g4_ParamLimits

0x87fe,	// (0x0002d847) vtel_slider_pane_g4

0x8840,	// (0x0002d889) vtel_slider_pane_g5_ParamLimits

0x8840,	// (0x0002d889) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00034a59) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00034a59) vtel_slider_pane_g

0x233a,	// (0x00027383) main_gallery2_pane

0x1e9d,	// (0x00026ee6) aid_size_row_itut2_dropdow_list_ParamLimits

0x1e9d,	// (0x00026ee6) aid_size_row_itut2_dropdow_list

0x1f29,	// (0x00026f72) grid_vitu2_function_top_pane_ParamLimits

0x1f29,	// (0x00026f72) grid_vitu2_function_top_pane

0x1f8e,	// (0x00026fd7) popup_vitu2_dropdown_list_window_ParamLimits

0x1f8e,	// (0x00026fd7) popup_vitu2_dropdown_list_window

0x1fb7,	// (0x00027000) popup_vitu2_match_list_window

0x21d0,	// (0x00027219) cell_vitu2_function_top_pane_ParamLimits

0x21d0,	// (0x00027219) cell_vitu2_function_top_pane

0x21ee,	// (0x00027237) cell_vitu2_function_top_pane_cp01_ParamLimits

0x21ee,	// (0x00027237) cell_vitu2_function_top_pane_cp01

0x220c,	// (0x00027255) cell_vitu2_function_top_wide_pane_ParamLimits

0x220c,	// (0x00027255) cell_vitu2_function_top_wide_pane

0xd1a1,	// (0x000321ea) bg_button_pane_cp012

0x222a,	// (0x00027273) cell_vitu2_function_top_pane_g1

0xd41e,	// (0x00032467) bg_button_pane_cp013_ParamLimits

0xd41e,	// (0x00032467) bg_button_pane_cp013

0x8856,	// (0x0002d89f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8856,	// (0x0002d89f) cell_vitu2_function_top_wide_pane_g1

0xd1a1,	// (0x000321ea) bg_popup_sub_pane_cp20

0x223e,	// (0x00027287) list_vitu2_match_list_pane

0xd1b9,	// (0x00032202) bg_popup_sub_pane_cp20_g1

0xd1c1,	// (0x0003220a) bg_popup_sub_pane_cp20_g2

0x3f77,	// (0x00028fc0) bg_popup_sub_pane_cp20_g3

0xd1c9,	// (0x00032212) bg_popup_sub_pane_cp20_g4

0x3f57,	// (0x00028fa0) bg_popup_sub_pane_cp20_g5

0xd43a,	// (0x00032483) bg_popup_sub_pane_cp20_g6

0xd1d9,	// (0x00032222) bg_popup_sub_pane_cp20_g7

0xd1e1,	// (0x0003222a) bg_popup_sub_pane_cp20_g8

0xd1e9,	// (0x00032232) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00034a64) bg_popup_sub_pane_cp20_g

0xd442,	// (0x0003248b) list_vitu2_match_list_item_pane_ParamLimits

0xd442,	// (0x0003248b) list_vitu2_match_list_item_pane

0xd454,	// (0x0003249d) list_vitu2_match_list_item_pane_t1

0xadf4,	// (0x0002fe3d) bg_popup_sub_pane_cp21

0xd47a,	// (0x000324c3) grid_vitu2_dropdown_list_pane

0x225c,	// (0x000272a5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x225c,	// (0x000272a5) cell_vitu2_dropdown_list_char_pane

0x227d,	// (0x000272c6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x227d,	// (0x000272c6) cell_vitu2_dropdown_list_ctrl_pane

0xd482,	// (0x000324cb) cell_vitu2_dropdown_list_char_pane_g1

0xd48b,	// (0x000324d4) cell_vitu2_dropdown_list_char_pane_g2

0xd494,	// (0x000324dd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00034a81) cell_vitu2_dropdown_list_char_pane_g

0x22a9,	// (0x000272f2) cell_vitu2_dropdown_list_char_pane_t1

0x889f,	// (0x0002d8e8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x889f,	// (0x0002d8e8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x88af,	// (0x0002d8f8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x88af,	// (0x0002d8f8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x88c0,	// (0x0002d909) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x88c0,	// (0x0002d909) cell_vitu2_dropdown_list_ctrl_pane_g3

0x22b7,	// (0x00027300) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x22b7,	// (0x00027300) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd08f,	// (0x000320d8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd08f,	// (0x000320d8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00034a88) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00034a88) cell_vitu2_dropdown_list_ctrl_pane_g

0x88d0,	// (0x0002d919) aid_size_cell_gallery2_ParamLimits

0x88d0,	// (0x0002d919) aid_size_cell_gallery2

0x88e6,	// (0x0002d92f) grid_gallery2_pane_ParamLimits

0x88e6,	// (0x0002d92f) grid_gallery2_pane

0x88fa,	// (0x0002d943) scroll_pane_cp029_ParamLimits

0x88fa,	// (0x0002d943) scroll_pane_cp029

0x8906,	// (0x0002d94f) cell_gallery2_pane_ParamLimits

0x8906,	// (0x0002d94f) cell_gallery2_pane

0xd49d,	// (0x000324e6) cell_gallery2_pane_g2

0x893c,	// (0x0002d985) cell_gallery2_pane_g3

0xd4a7,	// (0x000324f0) cell_gallery2_pane_g4

0xd4af,	// (0x000324f8) cell_gallery2_pane_g5

0x53d7,	// (0x0002a420) grid_highlight_pane_cp10

0x1fb7,	// (0x00027000) popup_vitu2_match_list_window_ParamLimits

0x1fcc,	// (0x00027015) popup_vitu2_query_window_ParamLimits

0x1fcc,	// (0x00027015) popup_vitu2_query_window

0xadf4,	// (0x0002fe3d) bg_vitu2_candi_button_pane

0xd482,	// (0x000324cb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd48b,	// (0x000324d4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd494,	// (0x000324dd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8944,	// (0x0002d98d) bg_button_pane_cp015

0x894e,	// (0x0002d997) bg_button_pane_cp016

0x8958,	// (0x0002d9a1) bg_button_pane_cp017

0x25b6,	// (0x000275ff) bg_popup_sub_pane_cp22

0xd4b7,	// (0x00032500) popup_vitu2_query_window_g1

0x8980,	// (0x0002d9c9) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00034a93) popup_vitu2_query_window_g

0x898e,	// (0x0002d9d7) popup_vitu2_query_window_t1_ParamLimits

0x898e,	// (0x0002d9d7) popup_vitu2_query_window_t1

0x89b6,	// (0x0002d9ff) popup_vitu2_query_window_t2_ParamLimits

0x89b6,	// (0x0002d9ff) popup_vitu2_query_window_t2

0x89c8,	// (0x0002da11) popup_vitu2_query_window_t3_ParamLimits

0x89c8,	// (0x0002da11) popup_vitu2_query_window_t3

0x89f0,	// (0x0002da39) popup_vitu2_query_window_t4_ParamLimits

0x89f0,	// (0x0002da39) popup_vitu2_query_window_t4

0x8a04,	// (0x0002da4d) popup_vitu2_query_window_t5_ParamLimits

0x8a04,	// (0x0002da4d) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00034a98) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00034a98) popup_vitu2_query_window_t

0xd2bb,	// (0x00032304) main_cset_text_pane

0x8485,	// (0x0002d4ce) aid_area_touch_slider_ParamLimits

0x84a1,	// (0x0002d4ea) cset_slider_pane_ParamLimits

0x84cb,	// (0x0002d514) main_cset_slider_pane_g1_ParamLimits

0x84e0,	// (0x0002d529) main_cset_slider_pane_g2_ParamLimits

0xd2dc,	// (0x00032325) main_cset_slider_pane_g3_ParamLimits

0xd2dc,	// (0x00032325) main_cset_slider_pane_g3

0x84f5,	// (0x0002d53e) main_cset_slider_pane_g4_ParamLimits

0x84f5,	// (0x0002d53e) main_cset_slider_pane_g4

0x8504,	// (0x0002d54d) main_cset_slider_pane_g5_ParamLimits

0x8504,	// (0x0002d54d) main_cset_slider_pane_g5

0x8510,	// (0x0002d559) main_cset_slider_pane_g6_ParamLimits

0x8510,	// (0x0002d559) main_cset_slider_pane_g6

0xf9a4,	// (0x000349ed) main_cset_slider_pane_g_ParamLimits

0xd30c,	// (0x00032355) main_cset_slider_pane_t1_ParamLimits

0x859c,	// (0x0002d5e5) main_cset_slider_pane_t2_ParamLimits

0x85b6,	// (0x0002d5ff) main_cset_slider_pane_t3_ParamLimits

0x85d0,	// (0x0002d619) main_cset_slider_pane_t4_ParamLimits

0x85ea,	// (0x0002d633) main_cset_slider_pane_t5_ParamLimits

0x8606,	// (0x0002d64f) main_cset_slider_pane_t6_ParamLimits

0x861b,	// (0x0002d664) main_cset_slider_pane_t7_ParamLimits

0x8645,	// (0x0002d68e) main_cset_slider_pane_t8_ParamLimits

0x8645,	// (0x0002d68e) main_cset_slider_pane_t8

0x866d,	// (0x0002d6b6) main_cset_slider_pane_t9_ParamLimits

0x866d,	// (0x0002d6b6) main_cset_slider_pane_t9

0x8695,	// (0x0002d6de) main_cset_slider_pane_t10_ParamLimits

0x8695,	// (0x0002d6de) main_cset_slider_pane_t10

0x86bd,	// (0x0002d706) main_cset_slider_pane_t11_ParamLimits

0x86bd,	// (0x0002d706) main_cset_slider_pane_t11

0x86e5,	// (0x0002d72e) main_cset_slider_pane_t12_ParamLimits

0x86e5,	// (0x0002d72e) main_cset_slider_pane_t12

0x8702,	// (0x0002d74b) main_cset_slider_pane_t13_ParamLimits

0x8702,	// (0x0002d74b) main_cset_slider_pane_t13

0xf9c9,	// (0x00034a12) main_cset_slider_pane_t_ParamLimits

0x233a,	// (0x00027383) bg_popup_sub_pane_cp011

0xd4c3,	// (0x0003250c) main_cset_text_pane_g1

0xd4cb,	// (0x00032514) main_cset_text_pane_t1

0xd4d9,	// (0x00032522) main_cset_text_pane_t2

0xd4e7,	// (0x00032530) main_cset_text_pane_t3

0xd4f5,	// (0x0003253e) main_cset_text_pane_t4

0xd503,	// (0x0003254c) main_cset_text_pane_t5

0xd511,	// (0x0003255a) main_cset_text_pane_t6

0xd51f,	// (0x00032568) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00034aa3) main_cset_text_pane_t

0x233a,	// (0x00027383) main_cam4_burst_pane

0x233a,	// (0x00027383) main_cam5_pane

0x83c4,	// (0x0002d40d) bg_button_pane_cp019

0x83cd,	// (0x0002d416) bg_button_pane_cp020

0xd2e8,	// (0x00032331) main_cset_slider_pane_g7_ParamLimits

0xd2e8,	// (0x00032331) main_cset_slider_pane_g7

0xd2f4,	// (0x0003233d) main_cset_slider_pane_g8_ParamLimits

0xd2f4,	// (0x0003233d) main_cset_slider_pane_g8

0x8524,	// (0x0002d56d) main_cset_slider_pane_g9_ParamLimits

0x8524,	// (0x0002d56d) main_cset_slider_pane_g9

0x8530,	// (0x0002d579) main_cset_slider_pane_g10_ParamLimits

0x8530,	// (0x0002d579) main_cset_slider_pane_g10

0x853c,	// (0x0002d585) main_cset_slider_pane_g11_ParamLimits

0x853c,	// (0x0002d585) main_cset_slider_pane_g11

0x8548,	// (0x0002d591) main_cset_slider_pane_g12_ParamLimits

0x8548,	// (0x0002d591) main_cset_slider_pane_g12

0x8554,	// (0x0002d59d) main_cset_slider_pane_g13_ParamLimits

0x8554,	// (0x0002d59d) main_cset_slider_pane_g13

0x8560,	// (0x0002d5a9) main_cset_slider_pane_g14_ParamLimits

0x8560,	// (0x0002d5a9) main_cset_slider_pane_g14

0x856c,	// (0x0002d5b5) main_cset_slider_pane_g15_ParamLimits

0x856c,	// (0x0002d5b5) main_cset_slider_pane_g15

0xd33a,	// (0x00032383) main_cset_slider_pane_t14_ParamLimits

0xd33a,	// (0x00032383) main_cset_slider_pane_t14

0xd373,	// (0x000323bc) main_cset_slider_pane_t15_ParamLimits

0xd373,	// (0x000323bc) main_cset_slider_pane_t15

0x8a18,	// (0x0002da61) aid_cam4_burst_size_cell_ParamLimits

0x8a18,	// (0x0002da61) aid_cam4_burst_size_cell

0x8a38,	// (0x0002da81) grid_cam4_burst_pane_ParamLimits

0x8a38,	// (0x0002da81) grid_cam4_burst_pane

0x8a70,	// (0x0002dab9) linegrid_cam4_burst_pane_ParamLimits

0x8a70,	// (0x0002dab9) linegrid_cam4_burst_pane

0x010e,	// (0x00025157) scroll_pane_cp30_ParamLimits

0x010e,	// (0x00025157) scroll_pane_cp30

0x8a96,	// (0x0002dadf) cell_cam4_burst_pane_ParamLimits

0x8a96,	// (0x0002dadf) cell_cam4_burst_pane

0xd52d,	// (0x00032576) linegrid_cam4_burst_pane_g1_ParamLimits

0xd52d,	// (0x00032576) linegrid_cam4_burst_pane_g1

0x8ae3,	// (0x0002db2c) linegrid_cam4_burst_pane_g2_ParamLimits

0x8ae3,	// (0x0002db2c) linegrid_cam4_burst_pane_g2

0xd53a,	// (0x00032583) linegrid_cam4_burst_pane_g3_ParamLimits

0xd53a,	// (0x00032583) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00034ab2) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00034ab2) linegrid_cam4_burst_pane_g

0x8af4,	// (0x0002db3d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8af4,	// (0x0002db3d) linegrid_cam4_burst_pane_g3_copy1

0xd547,	// (0x00032590) linegrid_cam4_burst_pane_g4_ParamLimits

0xd547,	// (0x00032590) linegrid_cam4_burst_pane_g4

0x8b0e,	// (0x0002db57) linegrid_cam4_burst_pane_g5_ParamLimits

0x8b0e,	// (0x0002db57) linegrid_cam4_burst_pane_g5

0x8b1f,	// (0x0002db68) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b1f,	// (0x0002db68) linegrid_cam4_burst_pane_g6

0xd554,	// (0x0003259d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd554,	// (0x0003259d) linegrid_cam4_burst_pane_g7

0x8b36,	// (0x0002db7f) cell_cam4_burst_pane_g1

0xd56d,	// (0x000325b6) main_cam5_pane_t1_ParamLimits

0xd56d,	// (0x000325b6) main_cam5_pane_t1

0xd57f,	// (0x000325c8) main_cam5_pane_t2_ParamLimits

0xd57f,	// (0x000325c8) main_cam5_pane_t2

0xd591,	// (0x000325da) main_cam5_pane_t3_ParamLimits

0xd591,	// (0x000325da) main_cam5_pane_t3

0xd5a3,	// (0x000325ec) main_cam5_pane_t4_ParamLimits

0xd5a3,	// (0x000325ec) main_cam5_pane_t4

0xd5b9,	// (0x00032602) main_cam5_pane_t5_ParamLimits

0xd5b9,	// (0x00032602) main_cam5_pane_t5

0xd5cb,	// (0x00032614) main_cam5_pane_t6_ParamLimits

0xd5cb,	// (0x00032614) main_cam5_pane_t6

0xd5df,	// (0x00032628) main_cam5_pane_t7_ParamLimits

0xd5df,	// (0x00032628) main_cam5_pane_t7

0xd5f1,	// (0x0003263a) main_cam5_pane_t8_ParamLimits

0xd5f1,	// (0x0003263a) main_cam5_pane_t8

0xd60d,	// (0x00032656) main_cam5_pane_t9_ParamLimits

0xd60d,	// (0x00032656) main_cam5_pane_t9

0xd61f,	// (0x00032668) main_cam5_pane_t10_ParamLimits

0xd61f,	// (0x00032668) main_cam5_pane_t10

0xd631,	// (0x0003267a) main_cam5_pane_t11_ParamLimits

0xd631,	// (0x0003267a) main_cam5_pane_t11

0xd643,	// (0x0003268c) main_cam5_pane_t12_ParamLimits

0xd643,	// (0x0003268c) main_cam5_pane_t12

0xd658,	// (0x000326a1) main_cam5_pane_t13_ParamLimits

0xd658,	// (0x000326a1) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00034abe) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00034abe) main_cam5_pane_t

0x257c,	// (0x000275c5) popup_scut_keymap_window_ParamLimits

0x257c,	// (0x000275c5) popup_scut_keymap_window

0x8b49,	// (0x0002db92) aid_size_cell_brow_shortcut

0x53d7,	// (0x0002a420) bg_popup_window_pane_cp010

0x8b55,	// (0x0002db9e) grid_scut_pane

0x8b61,	// (0x0002dbaa) cell_scut_pane_ParamLimits

0x8b61,	// (0x0002dbaa) cell_scut_pane

0x8b78,	// (0x0002dbc1) cell_scut_pane_g1

0xd675,	// (0x000326be) cell_scut_pane_t1

0xd684,	// (0x000326cd) cell_scut_pane_t2

0x8b81,	// (0x0002dbca) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00034ad9) cell_scut_pane_t

0x7344,	// (0x0002c38d) main_mup3_pane_g8_ParamLimits

0x7344,	// (0x0002c38d) main_mup3_pane_g8

0x1eb5,	// (0x00026efe) area_vitu2_query_pane_ParamLimits

0x1eb5,	// (0x00026efe) area_vitu2_query_pane

0x8962,	// (0x0002d9ab) input_focus_pane_cp08

0xd693,	// (0x000326dc) area_vitu2_query_pane_g1

0x8b8f,	// (0x0002dbd8) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00034ae0) area_vitu2_query_pane_g

0x8ba0,	// (0x0002dbe9) area_vitu2_query_pane_t1_ParamLimits

0x8ba0,	// (0x0002dbe9) area_vitu2_query_pane_t1

0x8bb4,	// (0x0002dbfd) area_vitu2_query_pane_t2_ParamLimits

0x8bb4,	// (0x0002dbfd) area_vitu2_query_pane_t2

0x8bc8,	// (0x0002dc11) area_vitu2_query_pane_t3_ParamLimits

0x8bc8,	// (0x0002dc11) area_vitu2_query_pane_t3

0xd69f,	// (0x000326e8) area_vitu2_query_pane_t4_ParamLimits

0xd69f,	// (0x000326e8) area_vitu2_query_pane_t4

0xd6c7,	// (0x00032710) area_vitu2_query_pane_t5_ParamLimits

0xd6c7,	// (0x00032710) area_vitu2_query_pane_t5

0xd6ef,	// (0x00032738) area_vitu2_query_pane_t6_ParamLimits

0xd6ef,	// (0x00032738) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00034ae5) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00034ae5) area_vitu2_query_pane_t

0x8bf0,	// (0x0002dc39) bg_button_pane_cp018

0x8bfe,	// (0x0002dc47) bg_button_pane_cp021

0x8c0a,	// (0x0002dc53) bg_button_pane_cp022

0x8c1b,	// (0x0002dc64) input_focus_pane_cp09

0x51fe,	// (0x0002a247) aid_size_touch_mv_arrow_left

0x5227,	// (0x0002a270) aid_size_touch_mv_arrow_right

0x8584,	// (0x0002d5cd) main_cset_slider_pane_g16_ParamLimits

0x8584,	// (0x0002d5cd) main_cset_slider_pane_g16

0x8590,	// (0x0002d5d9) main_cset_slider_pane_g17_ParamLimits

0x8590,	// (0x0002d5d9) main_cset_slider_pane_g17

0x8b36,	// (0x0002db7f) cell_cam4_burst_pane_g1_ParamLimits

0x233a,	// (0x00027383) compa_mode_pane

0x8796,	// (0x0002d7df) popup_vtel_slider_window_g3_ParamLimits

0x8796,	// (0x0002d7df) popup_vtel_slider_window_g3

0x87ad,	// (0x0002d7f6) popup_vtel_slider_window_g4_ParamLimits

0x87ad,	// (0x0002d7f6) popup_vtel_slider_window_g4

0x87c4,	// (0x0002d80d) popup_vtel_slider_window_t1_ParamLimits

0x87c4,	// (0x0002d80d) popup_vtel_slider_window_t1

0x233a,	// (0x00027383) main_cl_pane

0xbf07,	// (0x00030f50) popup_imed_adjust2_window_ParamLimits

0xbedf,	// (0x00030f28) bg_tb_trans_pane_cp05_ParamLimits

0xc908,	// (0x00031951) popup_imed_adjust2_window_g1_ParamLimits

0xc917,	// (0x00031960) popup_imed_adjust2_window_g2_ParamLimits

0xc917,	// (0x00031960) popup_imed_adjust2_window_g2

0xc923,	// (0x0003196c) popup_imed_adjust2_window_g3_ParamLimits

0xc923,	// (0x0003196c) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00034856) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00034856) popup_imed_adjust2_window_g

0xc92f,	// (0x00031978) popup_imed_adjust2_window_t1_ParamLimits

0xc947,	// (0x00031990) slider_imed_adjust_pane_ParamLimits

0xc95b,	// (0x000319a4) slider_imed_adjust_pane_g1_ParamLimits

0xc96b,	// (0x000319b4) slider_imed_adjust_pane_g2_ParamLimits

0xc97b,	// (0x000319c4) slider_imed_adjust_pane_g3_ParamLimits

0xc98c,	// (0x000319d5) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0003485d) slider_imed_adjust_pane_g_ParamLimits

0x1c04,	// (0x00026c4d) aid_touch_area_cam4_ParamLimits

0x1c04,	// (0x00026c4d) aid_touch_area_cam4

0xd07f,	// (0x000320c8) battery_pane_cp01

0x1cd4,	// (0x00026d1d) main_camera4_pane_g6_ParamLimits

0x1cd4,	// (0x00026d1d) main_camera4_pane_g6

0x1cfe,	// (0x00026d47) main_camera4_pane_t2_ParamLimits

0x1cfe,	// (0x00026d47) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00034960) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00034960) main_camera4_pane_t

0x1d1f,	// (0x00026d68) aid_touch_area_vid4_ParamLimits

0x1d1f,	// (0x00026d68) aid_touch_area_vid4

0x1d86,	// (0x00026dcf) main_video4_pane_g5_ParamLimits

0x1d86,	// (0x00026dcf) main_video4_pane_g5

0x1db1,	// (0x00026dfa) vid4_progress_pane_ParamLimits

0x1db1,	// (0x00026dfa) vid4_progress_pane

0xd300,	// (0x00032349) main_cset_slider_pane_g18_ParamLimits

0xd300,	// (0x00032349) main_cset_slider_pane_g18

0xd561,	// (0x000325aa) cell_cam4_burst_pane_g2_ParamLimits

0xd561,	// (0x000325aa) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00034ab9) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00034ab9) cell_cam4_burst_pane_g

0x2fc4,	// (0x0002800d) bg_cl_pane_ParamLimits

0x2fc4,	// (0x0002800d) bg_cl_pane

0x8c2c,	// (0x0002dc75) cl_header_pane_ParamLimits

0x8c2c,	// (0x0002dc75) cl_header_pane

0x8c40,	// (0x0002dc89) cl_listscroll_pane_ParamLimits

0x8c40,	// (0x0002dc89) cl_listscroll_pane

0xd73b,	// (0x00032784) bg_cl_pane_g1

0xd743,	// (0x0003278c) bg_cl_pane_g2

0xd74b,	// (0x00032794) bg_cl_pane_g3

0xd753,	// (0x0003279c) bg_cl_pane_g4

0xd75b,	// (0x000327a4) bg_cl_pane_g5

0xd763,	// (0x000327ac) bg_cl_pane_g6

0xd76b,	// (0x000327b4) bg_cl_pane_g7

0xd773,	// (0x000327bc) bg_cl_pane_g8

0xd77b,	// (0x000327c4) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00034af4) bg_cl_pane_g

0x8c50,	// (0x0002dc99) aid_height_cl_leading_ParamLimits

0x8c50,	// (0x0002dc99) aid_height_cl_leading

0x8c5c,	// (0x0002dca5) aid_height_cl_text_ParamLimits

0x8c5c,	// (0x0002dca5) aid_height_cl_text

0x25b6,	// (0x000275ff) bg_cl_header_pane_ParamLimits

0x25b6,	// (0x000275ff) bg_cl_header_pane

0x8c7b,	// (0x0002dcc4) cl_header_pane_g1_ParamLimits

0x8c7b,	// (0x0002dcc4) cl_header_pane_g1

0x8c91,	// (0x0002dcda) cl_header_pane_t1_ParamLimits

0x8c91,	// (0x0002dcda) cl_header_pane_t1

0xd783,	// (0x000327cc) cl_list_pane

0xd2d3,	// (0x0003231c) hc_scroll_pane_cp01

0x3f57,	// (0x00028fa0) bg_cl_header_pane_g1

0xd1b9,	// (0x00032202) bg_cl_header_pane_g2

0x3f77,	// (0x00028fc0) bg_cl_header_pane_g3

0xd1c9,	// (0x00032212) bg_cl_header_pane_g4

0xd1c1,	// (0x0003220a) bg_cl_header_pane_g5

0xd43a,	// (0x00032483) bg_cl_header_pane_g6

0xd1e1,	// (0x0003222a) bg_cl_header_pane_g7

0xd1e9,	// (0x00032232) bg_cl_header_pane_g8

0xd1d9,	// (0x00032222) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00034b07) bg_cl_header_pane_g

0x8caa,	// (0x0002dcf3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8caa,	// (0x0002dcf3) hc_cl_list_double_graphic_heading_pane

0x8cbe,	// (0x0002dd07) hc_cl_list_single_graphic_pane_ParamLimits

0x8cbe,	// (0x0002dd07) hc_cl_list_single_graphic_pane

0x8cd8,	// (0x0002dd21) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8cd8,	// (0x0002dd21) hc_cl_list_single_graphic_pane_g1

0x8ce4,	// (0x0002dd2d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8ce4,	// (0x0002dd2d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00034b1a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00034b1a) hc_cl_list_single_graphic_pane_g

0x8cf8,	// (0x0002dd41) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8cf8,	// (0x0002dd41) hc_cl_list_single_graphic_pane_t1

0x8cd8,	// (0x0002dd21) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8cd8,	// (0x0002dd21) hc_cl_list_double_graphic_heading_pane_g1

0x8d0d,	// (0x0002dd56) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d0d,	// (0x0002dd56) hc_cl_list_double_graphic_heading_pane_g2

0x8d21,	// (0x0002dd6a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d21,	// (0x0002dd6a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00034b1f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00034b1f) hc_cl_list_double_graphic_heading_pane_g

0x8d35,	// (0x0002dd7e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d35,	// (0x0002dd7e) hc_cl_list_double_graphic_heading_pane_t1

0x8d4a,	// (0x0002dd93) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d4a,	// (0x0002dd93) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00034b26) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00034b26) hc_cl_list_double_graphic_heading_pane_t

0xd794,	// (0x000327dd) vid4_progress_pane_g1

0xd7a4,	// (0x000327ed) vid4_progress_pane_g2

0x4a9e,	// (0x00029ae7) vid4_progress_pane_g3

0xd0b6,	// (0x000320ff) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00034b2b) vid4_progress_pane_g

0xd7b4,	// (0x000327fd) vid4_progress_pane_t1

0xd7c9,	// (0x00032812) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00034b36) vid4_progress_pane_t

0xd7f4,	// (0x0003283d) wait_bar_pane_cp07

0xc1d8,	// (0x00031221) blid_firmament_pane_ParamLimits

0xc21b,	// (0x00031264) popup_blid_sat_info2_window_g1

0xc23f,	// (0x00031288) popup_blid_sat_info2_window_t3

0xc24d,	// (0x00031296) popup_blid_sat_info2_window_t4

0xc25b,	// (0x000312a4) popup_blid_sat_info2_window_t5

0xc269,	// (0x000312b2) popup_blid_sat_info2_window_t6

0xc279,	// (0x000312c2) popup_blid_sat_info2_window_t7

0xc287,	// (0x000312d0) popup_blid_sat_info2_window_t8

0xc295,	// (0x000312de) popup_blid_sat_info2_window_t9

0xc2a3,	// (0x000312ec) popup_blid_sat_info2_window_t10

0xc367,	// (0x000313b0) aid_firma_cardinal_ParamLimits

0xc37b,	// (0x000313c4) blid_firmament_pane_t1_ParamLimits

0xc392,	// (0x000313db) blid_firmament_pane_t2_ParamLimits

0xc3a9,	// (0x000313f2) blid_firmament_pane_t3_ParamLimits

0xc3c0,	// (0x00031409) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0003474f) blid_firmament_pane_t_ParamLimits

0xc3d7,	// (0x00031420) blid_sat_info_pane_ParamLimits

0x25b6,	// (0x000275ff) main_cam_set_pane_ParamLimits

0x7b3a,	// (0x0002cb83) aid_size_cell_colour_35_ParamLimits

0x7b5a,	// (0x0002cba3) aid_size_cell_colour_112_ParamLimits

0x7b7a,	// (0x0002cbc3) aid_size_cell_effect_ParamLimits

0xbedf,	// (0x00030f28) bg_tb_trans_pane_cp02_ParamLimits

0x4a18,	// (0x00029a61) heading_imed_pane_ParamLimits

0x7b9a,	// (0x0002cbe3) listscroll_imed_pane_ParamLimits

0xb511,	// (0x0003055a) popup_call2_audio_first_window_g5_ParamLimits

0xb511,	// (0x0003055a) popup_call2_audio_first_window_g5

0x19e1,	// (0x00026a2a) aid_size_touch_image3_arrow_left_ParamLimits

0x19e1,	// (0x00026a2a) aid_size_touch_image3_arrow_left

0x1a0d,	// (0x00026a56) aid_size_touch_image3_arrow_right_ParamLimits

0x1a0d,	// (0x00026a56) aid_size_touch_image3_arrow_right

0xd7df,	// (0x00032828) vid4_progress_pane_t3

0x7ebd,	// (0x0002cf06) main_hwr_training_symbol_option_pane_ParamLimits

0x7ebd,	// (0x0002cf06) main_hwr_training_symbol_option_pane

0xcbf5,	// (0x00031c3e) popup_hwr_training_preview_window_ParamLimits

0xcbf5,	// (0x00031c3e) popup_hwr_training_preview_window

0x1884,	// (0x000268cd) hwr_training_navi_pane_g5_ParamLimits

0x1884,	// (0x000268cd) hwr_training_navi_pane_g5

0xd199,	// (0x000321e2) popup_char_count_window

0xd1a1,	// (0x000321ea) bg_popup_sub_pane_cp20_ParamLimits

0x223e,	// (0x00027287) list_vitu2_match_list_pane_ParamLimits

0x224d,	// (0x00027296) vitu2_page_scroll_pane_ParamLimits

0x224d,	// (0x00027296) vitu2_page_scroll_pane

0xd85e,	// (0x000328a7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd85e,	// (0x000328a7) list_single_hwr_training_symbol_option_pane

0xd871,	// (0x000328ba) list_single_hwr_training_symbol_option_pane_g1

0xd879,	// (0x000328c2) list_single_hwr_training_symbol_option_pane_t1

0xd887,	// (0x000328d0) bg_button_pane_cp023

0xd890,	// (0x000328d9) bg_button_pane_cp024

0x8d5f,	// (0x0002dda8) vitu2_page_scroll_pane_g1

0x8d67,	// (0x0002ddb0) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00034b3d) vitu2_page_scroll_pane_g

0x8d6f,	// (0x0002ddb8) vitu2_page_scroll_pane_t1

0xc0f4,	// (0x0003113d) popup_char_count_window_g1

0xd8c3,	// (0x0003290c) popup_char_count_window_g2

0xd8cc,	// (0x00032915) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00034b42) popup_char_count_window_g

0xd8d5,	// (0x0003291e) popup_char_count_window_t1

0x233a,	// (0x00027383) main_vded2_pane

0xc8f4,	// (0x0003193d) aid_size_cell_imed_line

0xc8fe,	// (0x00031947) grid_imed_line_width_pane

0x1e21,	// (0x00026e6a) vid4_indicators_pane_g4

0xd8e3,	// (0x0003292c) cell_imed_line_width_pane_ParamLimits

0xd8e3,	// (0x0003292c) cell_imed_line_width_pane

0xd8f7,	// (0x00032940) cell_imed_line_width_pane_g1

0xc186,	// (0x000311cf) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00034b49) cell_imed_line_width_pane_g

0x8d7e,	// (0x0002ddc7) main_vded2_pane_g1_ParamLimits

0x8d7e,	// (0x0002ddc7) main_vded2_pane_g1

0x8d94,	// (0x0002dddd) main_vded2_pane_g2_ParamLimits

0x8d94,	// (0x0002dddd) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00034b4e) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00034b4e) main_vded2_pane_g

0x8da6,	// (0x0002ddef) vded2_slider_pane_ParamLimits

0x8da6,	// (0x0002ddef) vded2_slider_pane

0x8db6,	// (0x0002ddff) aid_size_touch_vded2_end

0x8dc0,	// (0x0002de09) aid_size_touch_vded2_playhead

0xd900,	// (0x00032949) aid_size_touch_vded2_start

0xd908,	// (0x00032951) vded2_slider_bg_pane

0xd911,	// (0x0003295a) vded2_slider_pane_g1

0xd91a,	// (0x00032963) vded2_slider_pane_g2

0x8dca,	// (0x0002de13) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00034b53) vded2_slider_pane_g

0xd922,	// (0x0003296b) vded2_slider_bg_pane_g1

0xd92b,	// (0x00032974) vded2_slider_bg_pane_g2

0xd934,	// (0x0003297d) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00034b5a) vded2_slider_bg_pane_g

0x5ada,	// (0x0002ab23) aid_postcard_touch_down_pane_ParamLimits

0x5ada,	// (0x0002ab23) aid_postcard_touch_down_pane

0x5af0,	// (0x0002ab39) aid_postcard_touch_up_pane_ParamLimits

0x5af0,	// (0x0002ab39) aid_postcard_touch_up_pane

0x233a,	// (0x00027383) main_blid2_pane

0xbeed,	// (0x00030f36) popup_blid2_search_window

0x233a,	// (0x00027383) blid2_gps_pane

0x233a,	// (0x00027383) blid2_navig_pane

0x233a,	// (0x00027383) blid2_search_pane

0x233a,	// (0x00027383) blid2_tripm_pane

0x8dd5,	// (0x0002de1e) blid2_search_pane_g1_ParamLimits

0x8dd5,	// (0x0002de1e) blid2_search_pane_g1

0x8ded,	// (0x0002de36) blid2_search_pane_t1_ParamLimits

0x8ded,	// (0x0002de36) blid2_search_pane_t1

0x8dff,	// (0x0002de48) aid_size_cell_blid2_gps_ParamLimits

0x8dff,	// (0x0002de48) aid_size_cell_blid2_gps

0x8e17,	// (0x0002de60) blid2_gps_pane_g1_ParamLimits

0x8e17,	// (0x0002de60) blid2_gps_pane_g1

0x8e2b,	// (0x0002de74) grid_blid2_satellite_pane_ParamLimits

0x8e2b,	// (0x0002de74) grid_blid2_satellite_pane

0x8e45,	// (0x0002de8e) blid2_navig_pane_g1_ParamLimits

0x8e45,	// (0x0002de8e) blid2_navig_pane_g1

0x8e51,	// (0x0002de9a) blid2_navig_pane_t1_ParamLimits

0x8e51,	// (0x0002de9a) blid2_navig_pane_t1

0x8e6c,	// (0x0002deb5) blid2_navig_pane_t2_ParamLimits

0x8e6c,	// (0x0002deb5) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00034b61) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00034b61) blid2_navig_pane_t

0x8e87,	// (0x0002ded0) blid2_navig_ring_pane_ParamLimits

0x8e87,	// (0x0002ded0) blid2_navig_ring_pane

0x8ea0,	// (0x0002dee9) blid2_speed_pane_ParamLimits

0x8ea0,	// (0x0002dee9) blid2_speed_pane

0x8eac,	// (0x0002def5) blid2_tripm_pane_g1_ParamLimits

0x8eac,	// (0x0002def5) blid2_tripm_pane_g1

0x8ec7,	// (0x0002df10) blid2_tripm_pane_g2_ParamLimits

0x8ec7,	// (0x0002df10) blid2_tripm_pane_g2

0x8edb,	// (0x0002df24) blid2_tripm_pane_g3_ParamLimits

0x8edb,	// (0x0002df24) blid2_tripm_pane_g3

0x8eef,	// (0x0002df38) blid2_tripm_pane_g4_ParamLimits

0x8eef,	// (0x0002df38) blid2_tripm_pane_g4

0x8f03,	// (0x0002df4c) blid2_tripm_pane_g5_ParamLimits

0x8f03,	// (0x0002df4c) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00034b66) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00034b66) blid2_tripm_pane_g

0x8f29,	// (0x0002df72) blid2_tripm_pane_t1_ParamLimits

0x8f29,	// (0x0002df72) blid2_tripm_pane_t1

0x8f44,	// (0x0002df8d) blid2_tripm_pane_t2_ParamLimits

0x8f44,	// (0x0002df8d) blid2_tripm_pane_t2

0x8f5f,	// (0x0002dfa8) blid2_tripm_pane_t3_ParamLimits

0x8f5f,	// (0x0002dfa8) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00034b73) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00034b73) blid2_tripm_pane_t

0x8fa6,	// (0x0002dfef) cell_blid2_satellite_pane_ParamLimits

0x8fa6,	// (0x0002dfef) cell_blid2_satellite_pane

0x8fc4,	// (0x0002e00d) cell_blid2_satellite_pane_g1

0xd93d,	// (0x00032986) cell_blid2_satellite_pane_t1

0xc3e7,	// (0x00031430) blid2_speed_pane_g1

0xd94b,	// (0x00032994) blid2_speed_pane_t1

0xd959,	// (0x000329a2) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00034b7c) blid2_speed_pane_t

0xc3e7,	// (0x00031430) blid2_navig_ring_pane_g1

0x8fcd,	// (0x0002e016) blid2_navig_ring_pane_g2

0x8fd5,	// (0x0002e01e) blid2_navig_ring_pane_g3

0x8fdd,	// (0x0002e026) blid2_navig_ring_pane_g4

0x8fe5,	// (0x0002e02e) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00034b81) blid2_navig_ring_pane_g

0x233a,	// (0x00027383) bg_popup_window_pane_cp011

0xd967,	// (0x000329b0) popup_blid2_search_window_g1

0xd96f,	// (0x000329b8) popup_blid2_search_window_t1

0xd97d,	// (0x000329c6) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00034b8c) popup_blid2_search_window_t

0x3e19,	// (0x00028e62) main_browser_pane_g1

0x2fc4,	// (0x0002800d) main_browser_pane_ParamLimits

0xd1a1,	// (0x000321ea) bg_button_pane_cp011_ParamLimits

0x21b4,	// (0x000271fd) cell_vitu2_function_pane_g1_ParamLimits

0x25b6,	// (0x000275ff) bg_popup_sub_pane_cp22_ParamLimits

0x8962,	// (0x0002d9ab) input_focus_pane_cp08_ParamLimits

0x896f,	// (0x0002d9b8) popup_vitu2_query_button_pane_ParamLimits

0x896f,	// (0x0002d9b8) popup_vitu2_query_button_pane

0x8944,	// (0x0002d98d) popup_vitu2_query_input_button_pane

0xd4b7,	// (0x00032500) popup_vitu2_query_window_g1_ParamLimits

0x8980,	// (0x0002d9c9) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00034a93) popup_vitu2_query_window_g_ParamLimits

0x233a,	// (0x00027383) bg_button_pane_cp026

0x8fed,	// (0x0002e036) popup_vitu2_query_input_button_pane_g1

0x233a,	// (0x00027383) bg_button_pane_cp025

0xd98b,	// (0x000329d4) popup_vitu2_query_button_pane_t1

0x701f,	// (0x0002c068) main_mp3_pane_t6

0x702d,	// (0x0002c076) popup_slider_window_cp01

0xd09d,	// (0x000320e6) cam4_battery_pane

0xd104,	// (0x0003214d) cam4_battery_pane_cp02

0xd78c,	// (0x000327d5) cam4_battery_pane_cp01

0xd78c,	// (0x000327d5) cam4_battery_pane_cp03

0xcf2c,	// (0x00031f75) cam4_battery_pane_g1

0xc3e7,	// (0x00031430) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00034b91) cam4_battery_pane_g

0xc2b1,	// (0x000312fa) popup_blid_sat_info2_window_t11

0x51fe,	// (0x0002a247) aid_size_touch_mv_arrow_left_ParamLimits

0x5227,	// (0x0002a270) aid_size_touch_mv_arrow_right_ParamLimits

0x526f,	// (0x0002a2b8) navi_pane_g1_ParamLimits

0x527b,	// (0x0002a2c4) navi_pane_g2_ParamLimits

0x52a9,	// (0x0002a2f2) navi_pane_g3_ParamLimits

0xf418,	// (0x00034461) navi_pane_g_ParamLimits

0x5365,	// (0x0002a3ae) navi_pane_mv_t1_ParamLimits

0x7ba6,	// (0x0002cbef) grid_imed_effect_pane_ParamLimits

0x3a6f,	// (0x00028ab8) aid_placing_vt_slider_lsc

0x3a77,	// (0x00028ac0) aid_placing_vt_slider_prt

0x25b6,	// (0x000275ff) bg_tb_trans_pane_cp01_ParamLimits

0xc56e,	// (0x000315b7) popup_image_details_window_g1_ParamLimits

0xc581,	// (0x000315ca) popup_image_details_window_g2_ParamLimits

0xc596,	// (0x000315df) popup_image_details_window_g3_ParamLimits

0xc596,	// (0x000315df) popup_image_details_window_g3

0xf74b,	// (0x00034794) popup_image_details_window_g_ParamLimits

0xc5aa,	// (0x000315f3) popup_image_details_window_t1_ParamLimits

0xc5bc,	// (0x00031605) popup_image_details_window_t2_ParamLimits

0xc5d5,	// (0x0003161e) popup_image_details_window_t3_ParamLimits

0xc5e9,	// (0x00031632) popup_image_details_window_t4_ParamLimits

0xc604,	// (0x0003164d) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0003479b) popup_image_details_window_t_ParamLimits

0x8c68,	// (0x0002dcb1) cl_header_name_pane_ParamLimits

0x8c68,	// (0x0002dcb1) cl_header_name_pane

0x8ff5,	// (0x0002e03e) cl_header_name_pane_t1_ParamLimits

0x8ff5,	// (0x0002e03e) cl_header_name_pane_t1

0x9016,	// (0x0002e05f) cl_header_name_pane_t2_ParamLimits

0x9016,	// (0x0002e05f) cl_header_name_pane_t2

0x9058,	// (0x0002e0a1) cl_header_name_pane_t3_ParamLimits

0x9058,	// (0x0002e0a1) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00034b96) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00034b96) cl_header_name_pane_t

0x5336,	// (0x0002a37f) navi_pane_mv_g2_ParamLimits

0xd125,	// (0x0003216e) field_vitu2_entry_pane_g1_ParamLimits

0xd131,	// (0x0003217a) field_vitu2_entry_pane_g2_ParamLimits

0xd13d,	// (0x00032186) field_vitu2_entry_pane_g3_ParamLimits

0xd13d,	// (0x00032186) field_vitu2_entry_pane_g3

0xf949,	// (0x00034992) field_vitu2_entry_pane_g_ParamLimits

0x2054,	// (0x0002709d) cell_vitu2_itu_pane_g1_ParamLimits

0x2064,	// (0x000270ad) cell_vitu2_itu_pane_g2_ParamLimits

0x2064,	// (0x000270ad) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0003499e) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0003499e) cell_vitu2_itu_pane_g

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp05_ParamLimits

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp05

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp03

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp04

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp10_ParamLimits

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp10

0x8c0a,	// (0x0002dc53) bg_vkb2_func_pane_cp08

0x8bf0,	// (0x0002dc39) bg_vkb2_func_pane_cp06

0x8bfe,	// (0x0002dc47) bg_vkb2_func_pane_cp07

0xd899,	// (0x000328e2) bg_vkb2_func_pane_cp11_ParamLimits

0xd899,	// (0x000328e2) bg_vkb2_func_pane_cp11

0xd8ae,	// (0x000328f7) bg_vkb2_func_pane_cp12_ParamLimits

0xd8ae,	// (0x000328f7) bg_vkb2_func_pane_cp12

0x233a,	// (0x00027383) bg_vkb2_func_pane_cp09

0xd1b9,	// (0x00032202) bg_vkb2_func_pane_g1

0x3f77,	// (0x00028fc0) bg_vkb2_func_pane_g2

0xd1c1,	// (0x0003220a) bg_vkb2_func_pane_g3

0xd1c9,	// (0x00032212) bg_vkb2_func_pane_g4

0xd43a,	// (0x00032483) bg_vkb2_func_pane_g5

0xd1e1,	// (0x0003222a) bg_vkb2_func_pane_g6

0xd1e9,	// (0x00032232) bg_vkb2_func_pane_g7

0xd1d9,	// (0x00032222) bg_vkb2_func_pane_g8

0x3f57,	// (0x00028fa0) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00034b9d) bg_vkb2_func_pane_g

0x8f17,	// (0x0002df60) blid2_tripm_pane_g6_ParamLimits

0x8f17,	// (0x0002df60) blid2_tripm_pane_g6

0xcee6,	// (0x00031f2f) mp4_progress_pane_g1

0x8f92,	// (0x0002dfdb) blid2_tripm_values_pane_ParamLimits

0x8f92,	// (0x0002dfdb) blid2_tripm_values_pane

0x9089,	// (0x0002e0d2) blid2_tripm_values_pane_t1

0x9097,	// (0x0002e0e0) blid2_tripm_values_pane_t2

0x90a5,	// (0x0002e0ee) blid2_tripm_values_pane_t3

0x90b3,	// (0x0002e0fc) blid2_tripm_values_pane_t4

0x90c1,	// (0x0002e10a) blid2_tripm_values_pane_t5

0x90cf,	// (0x0002e118) blid2_tripm_values_pane_t6

0x90dd,	// (0x0002e126) blid2_tripm_values_pane_t7

0x90eb,	// (0x0002e134) blid2_tripm_values_pane_t8

0x90f9,	// (0x0002e142) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00034bb0) blid2_tripm_values_pane_t

0x3aaf,	// (0x00028af8) call_video_pane_t1_ParamLimits

0x3ac1,	// (0x00028b0a) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x000342ea) call_video_pane_t_ParamLimits

0x59f3,	// (0x0002aa3c) msg_header_pane_g1_ParamLimits

0x5a01,	// (0x0002aa4a) msg_header_pane_g2_ParamLimits

0x5a01,	// (0x0002aa4a) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00034504) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00034504) msg_header_pane_g

0x2fc4,	// (0x0002800d) main_clock2_pane_ParamLimits

0x7943,	// (0x0002c98c) grid_clock2_toolbar_pane_ParamLimits

0x7943,	// (0x0002c98c) grid_clock2_toolbar_pane

0x7943,	// (0x0002c98c) listscroll_clock2_pane_ParamLimits

0x7943,	// (0x0002c98c) listscroll_clock2_pane

0x7a20,	// (0x0002ca69) main_clock2_pane_t3_ParamLimits

0x7a20,	// (0x0002ca69) main_clock2_pane_t3

0x7a3b,	// (0x0002ca84) main_clock2_pane_t4_ParamLimits

0x7a3b,	// (0x0002ca84) main_clock2_pane_t4

0xd999,	// (0x000329e2) cell_clock2_toolbar_pane

0xd9a1,	// (0x000329ea) cell_clock2_toolbar_pane_cp01

0xd9a1,	// (0x000329ea) cell_clock2_toolbar_pane_cp02

0xd9a9,	// (0x000329f2) cell_clock2_toolbar_pane_cp03

0xd9b1,	// (0x000329fa) list_clock2_pane

0x4f9e,	// (0x00029fe7) scroll_pane_cp10

0xd9b9,	// (0x00032a02) list_single_clock2_pane_ParamLimits

0xd9b9,	// (0x00032a02) list_single_clock2_pane

0x53d7,	// (0x0002a420) list_highlight_pane_cp08

0xd9c6,	// (0x00032a0f) list_single_clock2_pane_t1

0xd9d4,	// (0x00032a1d) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00034bc3) list_single_clock2_pane_t

0x233a,	// (0x00027383) bg_button_pane_cp10

0xd9e2,	// (0x00032a2b) cell_clock2_toolbar_pane_g1

0x12f9,	// (0x00026342) aid_main_viewer_pane_g1_ParamLimits

0x12f9,	// (0x00026342) aid_main_viewer_pane_g1

0x1307,	// (0x00026350) aid_main_viewer_pane_g2_ParamLimits

0x1307,	// (0x00026350) aid_main_viewer_pane_g2

0x5a90,	// (0x0002aad9) aid_main_viewer_pane_g3_ParamLimits

0x5a90,	// (0x0002aad9) aid_main_viewer_pane_g3

0x5a9f,	// (0x0002aae8) aid_main_viewer_pane_g4_ParamLimits

0x5a9f,	// (0x0002aae8) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00034515) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00034515) aid_main_viewer_pane_g

0x6721,	// (0x0002b76a) main_calc_pane_ParamLimits

0x6735,	// (0x0002b77e) main_dialer2_pane_ParamLimits

0x233a,	// (0x00027383) main_cam6_pane

0x233a,	// (0x00027383) main_vid6_pane

0x794f,	// (0x0002c998) listscroll_gen_pane_cp06_ParamLimits

0x794f,	// (0x0002c998) listscroll_gen_pane_cp06

0x7a56,	// (0x0002ca9f) main_clock2_pane_t5_ParamLimits

0x7a56,	// (0x0002ca9f) main_clock2_pane_t5

0x7ab3,	// (0x0002cafc) aid_call2_pane_cp10_ParamLimits

0x7ac5,	// (0x0002cb0e) aid_call_pane_cp10_ParamLimits

0x518d,	// (0x0002a1d6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x518d,	// (0x0002a1d6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7ad7,	// (0x0002cb20) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7ad7,	// (0x0002cb20) popup_clock_analogue_window_cp10_g4_ParamLimits

0x518d,	// (0x0002a1d6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0003484b) popup_clock_analogue_window_cp10_g_ParamLimits

0x7ae9,	// (0x0002cb32) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7fa5,	// (0x0002cfee) cell_dialer2_keypad_pane_g2_ParamLimits

0x7fa5,	// (0x0002cfee) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00034931) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00034931) cell_dialer2_keypad_pane_g

0x7fc1,	// (0x0002d00a) cell_dialer2_keypad_pane_t1

0x8477,	// (0x0002d4c0) main_cset_text2_pane_ParamLimits

0x8477,	// (0x0002d4c0) main_cset_text2_pane

0xd693,	// (0x000326dc) area_vitu2_query_pane_g1_ParamLimits

0x8b8f,	// (0x0002dbd8) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00034ae0) area_vitu2_query_pane_g_ParamLimits

0xd717,	// (0x00032760) area_vitu2_query_pane_t7_ParamLimits

0xd717,	// (0x00032760) area_vitu2_query_pane_t7

0x8bf0,	// (0x0002dc39) bg_button_pane_cp018_ParamLimits

0x8bfe,	// (0x0002dc47) bg_button_pane_cp021_ParamLimits

0x8c0a,	// (0x0002dc53) bg_button_pane_cp022_ParamLimits

0x8c0a,	// (0x0002dc53) bg_vkb2_func_pane_cp08_ParamLimits

0x8bf0,	// (0x0002dc39) bg_vkb2_func_pane_cp06_ParamLimits

0x8bfe,	// (0x0002dc47) bg_vkb2_func_pane_cp07_ParamLimits

0x8c1b,	// (0x0002dc64) input_focus_pane_cp09_ParamLimits

0xd9ea,	// (0x00032a33) cam6_autofocus_pane_ParamLimits

0xd9ea,	// (0x00032a33) cam6_autofocus_pane

0x22d3,	// (0x0002731c) cam6_image_uncrop_pane_ParamLimits

0x22d3,	// (0x0002731c) cam6_image_uncrop_pane

0x22e2,	// (0x0002732b) cam6_indi_pane_ParamLimits

0x22e2,	// (0x0002732b) cam6_indi_pane

0x22f8,	// (0x00027341) cam6_mode_pane_ParamLimits

0x22f8,	// (0x00027341) cam6_mode_pane

0x230a,	// (0x00027353) cam6_timer_pane_ParamLimits

0x230a,	// (0x00027353) cam6_timer_pane

0x2316,	// (0x0002735f) cam6_zoom_pane_ParamLimits

0x2316,	// (0x0002735f) cam6_zoom_pane

0x9107,	// (0x0002e150) cam6_mode_pane_g1_ParamLimits

0x9107,	// (0x0002e150) cam6_mode_pane_g1

0x9117,	// (0x0002e160) cam6_mode_pane_g2_ParamLimits

0x9117,	// (0x0002e160) cam6_mode_pane_g2

0x9127,	// (0x0002e170) cam6_mode_pane_g3_ParamLimits

0x9127,	// (0x0002e170) cam6_mode_pane_g3

0x9137,	// (0x0002e180) cam6_mode_pane_g4_ParamLimits

0x9137,	// (0x0002e180) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00034bc8) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00034bc8) cam6_mode_pane_g

0xd9f8,	// (0x00032a41) bg_tb_trans_pane_cp08_ParamLimits

0xd9f8,	// (0x00032a41) bg_tb_trans_pane_cp08

0xda06,	// (0x00032a4f) cam6_battery_pane_ParamLimits

0xda06,	// (0x00032a4f) cam6_battery_pane

0xda1c,	// (0x00032a65) cam6_indi_pane_g1_ParamLimits

0xda1c,	// (0x00032a65) cam6_indi_pane_g1

0xda2e,	// (0x00032a77) cam6_indi_pane_g2_ParamLimits

0xda2e,	// (0x00032a77) cam6_indi_pane_g2

0xda40,	// (0x00032a89) cam6_indi_pane_g3_ParamLimits

0xda40,	// (0x00032a89) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00034bd1) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00034bd1) cam6_indi_pane_g

0xda52,	// (0x00032a9b) cam6_indi_pane_t1_ParamLimits

0xda52,	// (0x00032a9b) cam6_indi_pane_t1

0x9147,	// (0x0002e190) cam6_autofocus_pane_g1

0x914f,	// (0x0002e198) cam6_autofocus_pane_g2

0x9157,	// (0x0002e1a0) cam6_autofocus_pane_g3

0x915f,	// (0x0002e1a8) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00034bd8) cam6_autofocus_pane_g

0xda78,	// (0x00032ac1) cam6_timer_pane_g1

0xda80,	// (0x00032ac9) cam6_timer_pane_t1

0xda8e,	// (0x00032ad7) cam6_zoom_cont_pane

0xda96,	// (0x00032adf) cam6_zoom_pane_g1

0xda9e,	// (0x00032ae7) cam6_zoom_pane_g2

0x9167,	// (0x0002e1b0) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00034be1) cam6_zoom_pane_g

0xc3e7,	// (0x00031430) cam6_battery_pane_g1

0xc3e7,	// (0x00031430) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00034758) cam6_battery_pane_g

0xdaa6,	// (0x00032aef) cam6_zoom_cont_pane_g1

0xdaaf,	// (0x00032af8) cam6_zoom_cont_pane_g2

0xdab8,	// (0x00032b01) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00034be8) cam6_zoom_cont_pane_g

0x9184,	// (0x0002e1cd) cam6_mode_pane_cp_ParamLimits

0x9184,	// (0x0002e1cd) cam6_mode_pane_cp

0x9196,	// (0x0002e1df) cam6_zoom_pane_cp_ParamLimits

0x9196,	// (0x0002e1df) cam6_zoom_pane_cp

0x91a2,	// (0x0002e1eb) vid6_image_uncrop_cif_pane_ParamLimits

0x91a2,	// (0x0002e1eb) vid6_image_uncrop_cif_pane

0x91b2,	// (0x0002e1fb) vid6_image_uncrop_nhd_pane_ParamLimits

0x91b2,	// (0x0002e1fb) vid6_image_uncrop_nhd_pane

0x91c1,	// (0x0002e20a) vid6_image_uncrop_vga_pane_ParamLimits

0x91c1,	// (0x0002e20a) vid6_image_uncrop_vga_pane

0x91d0,	// (0x0002e219) vid6_image_uncrop_wvga_pane_ParamLimits

0x91d0,	// (0x0002e219) vid6_image_uncrop_wvga_pane

0x91df,	// (0x0002e228) vid6_indi_pane_ParamLimits

0x91df,	// (0x0002e228) vid6_indi_pane

0xd9f8,	// (0x00032a41) bg_tb_trans_pane_cp09_ParamLimits

0xd9f8,	// (0x00032a41) bg_tb_trans_pane_cp09

0xdad0,	// (0x00032b19) cam6_battery_pane_cp_ParamLimits

0xdad0,	// (0x00032b19) cam6_battery_pane_cp

0xdadc,	// (0x00032b25) vid6_indi_pane_g1_ParamLimits

0xdadc,	// (0x00032b25) vid6_indi_pane_g1

0xdaee,	// (0x00032b37) vid6_indi_pane_g2_ParamLimits

0xdaee,	// (0x00032b37) vid6_indi_pane_g2

0xdb00,	// (0x00032b49) vid6_indi_pane_g3_ParamLimits

0xdb00,	// (0x00032b49) vid6_indi_pane_g3

0xdb15,	// (0x00032b5e) vid6_indi_pane_g4_ParamLimits

0xdb15,	// (0x00032b5e) vid6_indi_pane_g4

0xdb2a,	// (0x00032b73) vid6_indi_pane_g5_ParamLimits

0xdb2a,	// (0x00032b73) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00034bef) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00034bef) vid6_indi_pane_g

0xdb44,	// (0x00032b8d) vid6_indi_pane_t1_ParamLimits

0xdb44,	// (0x00032b8d) vid6_indi_pane_t1

0xdb5a,	// (0x00032ba3) vid6_indi_pane_t2_ParamLimits

0xdb5a,	// (0x00032ba3) vid6_indi_pane_t2

0xdb82,	// (0x00032bcb) vid6_indi_pane_t3_ParamLimits

0xdb82,	// (0x00032bcb) vid6_indi_pane_t3

0xdbaa,	// (0x00032bf3) vid6_indi_pane_t4_ParamLimits

0xdbaa,	// (0x00032bf3) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00034bfa) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00034bfa) vid6_indi_pane_t

0xdbce,	// (0x00032c17) wait_bar_pane_cp08

0x91f7,	// (0x0002e240) main_cset_text2_pane_t1_ParamLimits

0x91f7,	// (0x0002e240) main_cset_text2_pane_t1

0x916f,	// (0x0002e1b8) listscroll_gen_pane_cp06_t1_ParamLimits

0x916f,	// (0x0002e1b8) listscroll_gen_pane_cp06_t1

0x233a,	// (0x00027383) main_cam6_set_pane

0xd08f,	// (0x000320d8) bg_tb_trans_pane_cp06_ParamLimits

0xd0a5,	// (0x000320ee) cam4_indicators_pane_g1_ParamLimits

0xd0b6,	// (0x000320ff) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0003496e) cam4_indicators_pane_g_ParamLimits

0xd0d4,	// (0x0003211d) cam4_indicators_pane_t1_ParamLimits

0xd0f6,	// (0x0003213f) bg_tb_trans_pane_cp07_ParamLimits

0x1dfa,	// (0x00026e43) vid4_indicators_pane_g1_ParamLimits

0x1e07,	// (0x00026e50) vid4_indicators_pane_g2_ParamLimits

0x1e14,	// (0x00026e5d) vid4_indicators_pane_g3_ParamLimits

0x1e21,	// (0x00026e6a) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00034980) vid4_indicators_pane_g_ParamLimits

0x1e39,	// (0x00026e82) vid4_indicators_pane_t1_ParamLimits

0xd794,	// (0x000327dd) vid4_progress_pane_g1_ParamLimits

0xd7a4,	// (0x000327ed) vid4_progress_pane_g2_ParamLimits

0x4a9e,	// (0x00029ae7) vid4_progress_pane_g3_ParamLimits

0xd0b6,	// (0x000320ff) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00034b2b) vid4_progress_pane_g_ParamLimits

0xd7b4,	// (0x000327fd) vid4_progress_pane_t1_ParamLimits

0xd7c9,	// (0x00032812) vid4_progress_pane_t2_ParamLimits

0xd7df,	// (0x00032828) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00034b36) vid4_progress_pane_t_ParamLimits

0xd7f4,	// (0x0003283d) wait_bar_pane_cp07_ParamLimits

0x9217,	// (0x0002e260) main_cam6_set_pane_g2_ParamLimits

0x9217,	// (0x0002e260) main_cam6_set_pane_g2

0x923b,	// (0x0002e284) main_cset6_listscroll_pane_ParamLimits

0x923b,	// (0x0002e284) main_cset6_listscroll_pane

0x9257,	// (0x0002e2a0) main_cset6_slider_pane_ParamLimits

0x9257,	// (0x0002e2a0) main_cset6_slider_pane

0x926d,	// (0x0002e2b6) main_cset6_text2_pane_ParamLimits

0x926d,	// (0x0002e2b6) main_cset6_text2_pane

0xdbdd,	// (0x00032c26) main_cset6_text_pane

0xdbe5,	// (0x00032c2e) main_cset_list_pane_copy1_ParamLimits

0xdbe5,	// (0x00032c2e) main_cset_list_pane_copy1

0xdbf5,	// (0x00032c3e) scroll_pane_cp028_copy1

0x927b,	// (0x0002e2c4) cset_list_set_pane_copy1

0x928e,	// (0x0002e2d7) aid_position_infowindow_above_copy1

0x9296,	// (0x0002e2df) aid_position_infowindow_below_copy1

0xdbfe,	// (0x00032c47) cset_list_set_pane_g1_copy1

0xdc06,	// (0x00032c4f) cset_list_set_pane_g3_copy1_ParamLimits

0xdc06,	// (0x00032c4f) cset_list_set_pane_g3_copy1

0xdc15,	// (0x00032c5e) cset_list_set_pane_t1_copy1_ParamLimits

0xdc15,	// (0x00032c5e) cset_list_set_pane_t1_copy1

0x25b6,	// (0x000275ff) list_highlight_pane_cp021_copy1_ParamLimits

0x25b6,	// (0x000275ff) list_highlight_pane_cp021_copy1

0xdc2a,	// (0x00032c73) cset6_slider_pane_ParamLimits

0xdc2a,	// (0x00032c73) cset6_slider_pane

0xdc56,	// (0x00032c9f) main_cset6_slider_pane_g1_ParamLimits

0xdc56,	// (0x00032c9f) main_cset6_slider_pane_g1

0x929e,	// (0x0002e2e7) main_cset6_slider_pane_g2_ParamLimits

0x929e,	// (0x0002e2e7) main_cset6_slider_pane_g2

0xd2e8,	// (0x00032331) main_cset6_slider_pane_g3_ParamLimits

0xd2e8,	// (0x00032331) main_cset6_slider_pane_g3

0x853c,	// (0x0002d585) main_cset6_slider_pane_g4_ParamLimits

0x853c,	// (0x0002d585) main_cset6_slider_pane_g4

0x8584,	// (0x0002d5cd) main_cset6_slider_pane_g5_ParamLimits

0x8584,	// (0x0002d5cd) main_cset6_slider_pane_g5

0xd2e8,	// (0x00032331) main_cset6_slider_pane_g7_ParamLimits

0xd2e8,	// (0x00032331) main_cset6_slider_pane_g7

0xd2f4,	// (0x0003233d) main_cset6_slider_pane_g8_ParamLimits

0xd2f4,	// (0x0003233d) main_cset6_slider_pane_g8

0x8524,	// (0x0002d56d) main_cset6_slider_pane_g9_ParamLimits

0x8524,	// (0x0002d56d) main_cset6_slider_pane_g9

0x8530,	// (0x0002d579) main_cset6_slider_pane_g10_ParamLimits

0x8530,	// (0x0002d579) main_cset6_slider_pane_g10

0x853c,	// (0x0002d585) main_cset6_slider_pane_g11_ParamLimits

0x853c,	// (0x0002d585) main_cset6_slider_pane_g11

0x8548,	// (0x0002d591) main_cset6_slider_pane_g12_ParamLimits

0x8548,	// (0x0002d591) main_cset6_slider_pane_g12

0x8554,	// (0x0002d59d) main_cset6_slider_pane_g13_ParamLimits

0x8554,	// (0x0002d59d) main_cset6_slider_pane_g13

0x8560,	// (0x0002d5a9) main_cset6_slider_pane_g14_ParamLimits

0x8560,	// (0x0002d5a9) main_cset6_slider_pane_g14

0x92c6,	// (0x0002e30f) main_cset6_slider_pane_g15_ParamLimits

0x92c6,	// (0x0002e30f) main_cset6_slider_pane_g15

0x8584,	// (0x0002d5cd) main_cset6_slider_pane_g16_ParamLimits

0x8584,	// (0x0002d5cd) main_cset6_slider_pane_g16

0x8590,	// (0x0002d5d9) main_cset6_slider_pane_g17_ParamLimits

0x8590,	// (0x0002d5d9) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00034c03) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00034c03) main_cset6_slider_pane_g

0xdc7e,	// (0x00032cc7) main_cset6_slider_pane_t1_ParamLimits

0xdc7e,	// (0x00032cc7) main_cset6_slider_pane_t1

0x92de,	// (0x0002e327) main_cset6_slider_pane_t2_ParamLimits

0x92de,	// (0x0002e327) main_cset6_slider_pane_t2

0x9309,	// (0x0002e352) main_cset6_slider_pane_t3_ParamLimits

0x9309,	// (0x0002e352) main_cset6_slider_pane_t3

0x9334,	// (0x0002e37d) main_cset6_slider_pane_t4_ParamLimits

0x9334,	// (0x0002e37d) main_cset6_slider_pane_t4

0x935f,	// (0x0002e3a8) main_cset6_slider_pane_t5_ParamLimits

0x935f,	// (0x0002e3a8) main_cset6_slider_pane_t5

0xdcbf,	// (0x00032d08) main_cset6_slider_pane_t7_ParamLimits

0xdcbf,	// (0x00032d08) main_cset6_slider_pane_t7

0x938a,	// (0x0002e3d3) main_cset6_slider_pane_t8_ParamLimits

0x938a,	// (0x0002e3d3) main_cset6_slider_pane_t8

0x93ae,	// (0x0002e3f7) main_cset6_slider_pane_t9_ParamLimits

0x93ae,	// (0x0002e3f7) main_cset6_slider_pane_t9

0x93d2,	// (0x0002e41b) main_cset6_slider_pane_t10_ParamLimits

0x93d2,	// (0x0002e41b) main_cset6_slider_pane_t10

0x93f6,	// (0x0002e43f) main_cset6_slider_pane_t11_ParamLimits

0x93f6,	// (0x0002e43f) main_cset6_slider_pane_t11

0xdcf5,	// (0x00032d3e) main_cset6_slider_pane_t14_ParamLimits

0xdcf5,	// (0x00032d3e) main_cset6_slider_pane_t14

0xdd2e,	// (0x00032d77) main_cset6_slider_pane_t15_ParamLimits

0xdd2e,	// (0x00032d77) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00034c28) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00034c28) main_cset6_slider_pane_t

0xdd67,	// (0x00032db0) cset_slider_pane_g1_copy1

0xdd70,	// (0x00032db9) cset_slider_pane_g2_copy1

0xdd79,	// (0x00032dc2) cset_slider_pane_g3_copy1

0x233a,	// (0x00027383) bg_popup_sub_pane_cp011_copy1

0xd4c3,	// (0x0003250c) main_cset_text_pane_g1_copy1

0xd4cb,	// (0x00032514) main_cset_text_pane_t1_copy1

0xd4d9,	// (0x00032522) main_cset_text_pane_t2_copy1

0xd4e7,	// (0x00032530) main_cset_text_pane_t3_copy1

0xd4f5,	// (0x0003253e) main_cset_text_pane_t4_copy1

0xd503,	// (0x0003254c) main_cset_text_pane_t5_copy1

0xd511,	// (0x0003255a) main_cset_text_pane_t6_copy1

0xd51f,	// (0x00032568) main_cset_text_pane_t7_copy1

0x91f7,	// (0x0002e240) main_cset_text2_pane_t1_copy1

0x233a,	// (0x00027383) main_ncimui_pane

0x696b,	// (0x0002b9b4) popup_query_ncimui_window_ParamLimits

0x696b,	// (0x0002b9b4) popup_query_ncimui_window

0xc6b3,	// (0x000316fc) field_cale_ev2_pane_g4_ParamLimits

0xc6b3,	// (0x000316fc) field_cale_ev2_pane_g4

0x7f2b,	// (0x0002cf74) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f2b,	// (0x0002cf74) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0003490c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0003490c) cell_video_dialer_keypad_pane_g

0x7f43,	// (0x0002cf8c) cell_video_dialer_keypad_pane_t1

0x233a,	// (0x00027383) bg_popup_window_pane_cp012

0x4dff,	// (0x00029e48) heading_pane_cp06

0xde71,	// (0x00032eba) ncim_query_content_pane

0x233a,	// (0x00027383) bg_popup_heading_pane_cp01

0xde79,	// (0x00032ec2) ncim_heading_pane_t1

0xde87,	// (0x00032ed0) ncim_indicator_popup_pane

0xde99,	// (0x00032ee2) ncim_query_button_pane

0xdead,	// (0x00032ef6) ncim_query_content_pane_t1

0xdebf,	// (0x00032f08) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00034c67) ncim_query_content_pane_t

0xdef9,	// (0x00032f42) ncim_query_list_pane

0xdf0b,	// (0x00032f54) ncim_query_popup_pane

0xde87,	// (0x00032ed0) ncim_indicator_popup_pane_ParamLimits

0x94e0,	// (0x0002e529) ncim_query_content_pane_g1_ParamLimits

0x94e0,	// (0x0002e529) ncim_query_content_pane_g1

0xdead,	// (0x00032ef6) ncim_query_content_pane_t1_ParamLimits

0xdebf,	// (0x00032f08) ncim_query_content_pane_t2_ParamLimits

0x94ec,	// (0x0002e535) ncim_query_content_pane_t3_ParamLimits

0x94ec,	// (0x0002e535) ncim_query_content_pane_t3

0x9514,	// (0x0002e55d) ncim_query_content_pane_t4_ParamLimits

0x9514,	// (0x0002e55d) ncim_query_content_pane_t4

0x953c,	// (0x0002e585) ncim_query_content_pane_t5_ParamLimits

0x953c,	// (0x0002e585) ncim_query_content_pane_t5

0xded1,	// (0x00032f1a) ncim_query_content_pane_t6_ParamLimits

0xded1,	// (0x00032f1a) ncim_query_content_pane_t6

0xfc1e,	// (0x00034c67) ncim_query_content_pane_t_ParamLimits

0xdef9,	// (0x00032f42) ncim_query_list_pane_ParamLimits

0xdf0b,	// (0x00032f54) ncim_query_popup_pane_ParamLimits

0xdf1f,	// (0x00032f68) wait_bar_pane_cp04

0x233a,	// (0x00027383) input_focus_pane_cp011

0xdf27,	// (0x00032f70) ncim_query_popup_pane_t1

0xdf35,	// (0x00032f7e) ncim_list_query_list_pane_ParamLimits

0xdf35,	// (0x00032f7e) ncim_list_query_list_pane

0x233a,	// (0x00027383) bg_button_pane_cp027

0xdf48,	// (0x00032f91) ncim_query_button_pane_g1

0x233a,	// (0x00027383) list_highlight_pane_cp012

0xdf52,	// (0x00032f9b) ncim_list_query_list_pane_g1

0xdf5a,	// (0x00032fa3) ncim_list_query_list_pane_t1

0xd0c5,	// (0x0003210e) cam4_indicators_pane_g3_ParamLimits

0xd0c5,	// (0x0003210e) cam4_indicators_pane_g3

0x1e2d,	// (0x00026e76) vid4_indicators_pane_g5_ParamLimits

0x1e2d,	// (0x00026e76) vid4_indicators_pane_g5

0xd0c5,	// (0x0003210e) vid4_progress_pane_g5_ParamLimits

0xd0c5,	// (0x0003210e) vid4_progress_pane_g5

0x9428,	// (0x0002e471) main_ncimui_pane_g1

0x946e,	// (0x0002e4b7) ncimui_group_query_pane_ParamLimits

0x946e,	// (0x0002e4b7) ncimui_group_query_pane

0x94a2,	// (0x0002e4eb) ncimui_list_pane_ParamLimits

0x94a2,	// (0x0002e4eb) ncimui_list_pane

0x94bc,	// (0x0002e505) ncimui_text_pane_ParamLimits

0x94bc,	// (0x0002e505) ncimui_text_pane

0x9564,	// (0x0002e5ad) ncimui_text_pane_t1_ParamLimits

0x9564,	// (0x0002e5ad) ncimui_text_pane_t1

0xdf68,	// (0x00032fb1) ncimui_list_single_graphic_pane_ParamLimits

0xdf68,	// (0x00032fb1) ncimui_list_single_graphic_pane

0x958a,	// (0x0002e5d3) ncimui_query_pane_ParamLimits

0x958a,	// (0x0002e5d3) ncimui_query_pane

0x233a,	// (0x00027383) list_highlight_pane_cp013

0xdf78,	// (0x00032fc1) ncim_list_query_list_pane_t1_copy1

0xdf52,	// (0x00032f9b) ncim_list_single_graphic_pane_g1

0xdf86,	// (0x00032fcf) ncim_query_button_pane_cp01

0xdf8e,	// (0x00032fd7) ncim_query_entry_pane_ParamLimits

0xdf8e,	// (0x00032fd7) ncim_query_entry_pane

0xdf9e,	// (0x00032fe7) ncimui_query_pane_g1

0xdfa6,	// (0x00032fef) ncimui_query_pane_t1_ParamLimits

0xdfa6,	// (0x00032fef) ncimui_query_pane_t1

0x233a,	// (0x00027383) input_focus_pane_cp012

0xdf27,	// (0x00032f70) ncim_query_entry_pane_t1

0x2fc4,	// (0x0002800d) main_im_pane_ParamLimits

0x25b6,	// (0x000275ff) main_mobtv_pane_ParamLimits

0x25b6,	// (0x000275ff) main_mobtv_pane

0x8524,	// (0x0002d56d) main_cset6_slider_pane_g18_ParamLimits

0x8524,	// (0x0002d56d) main_cset6_slider_pane_g18

0x8554,	// (0x0002d59d) main_cset6_slider_pane_g19_ParamLimits

0x8554,	// (0x0002d59d) main_cset6_slider_pane_g19

0xdfbc,	// (0x00033005) bg_main_mobtv_pane_ParamLimits

0xdfbc,	// (0x00033005) bg_main_mobtv_pane

0x959a,	// (0x0002e5e3) main_mobtv_info_pane

0x95a3,	// (0x0002e5ec) main_mobtv_loading_pane_ParamLimits

0x95a3,	// (0x0002e5ec) main_mobtv_loading_pane

0xdfca,	// (0x00033013) main_mobtv_pg_channel_list_pane

0xdfd4,	// (0x0003301d) main_mobtv_pg_hdr_pane

0x95b0,	// (0x0002e5f9) main_mobtv_programe_curr_pane_ParamLimits

0x95b0,	// (0x0002e5f9) main_mobtv_programe_curr_pane

0x95bd,	// (0x0002e606) main_mobtv_programe_next_pane_ParamLimits

0x95bd,	// (0x0002e606) main_mobtv_programe_next_pane

0xdfdd,	// (0x00033026) popup_mobtv_noti_window

0xc3e7,	// (0x00031430) main_tv_pg_hdr_pane_g1

0xdfe5,	// (0x0003302e) main_tv_pg_hdr_pane_g2

0xdfed,	// (0x00033036) main_tv_pg_hdr_pane_g3

0xdff5,	// (0x0003303e) main_tv_pg_hdr_pane_g4

0xdffd,	// (0x00033046) main_tv_pg_hdr_pane_g5

0xe007,	// (0x00033050) main_tv_pg_hdr_pane_g6

0xe011,	// (0x0003305a) main_tv_pg_hdr_pane_g7

0xe01b,	// (0x00033064) main_tv_pg_hdr_pane_g8

0xe025,	// (0x0003306e) main_tv_pg_hdr_pane_g9

0xe02f,	// (0x00033078) main_tv_pg_hdr_pane_g10

0xe039,	// (0x00033082) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00034c74) main_tv_pg_hdr_pane_g

0xe043,	// (0x0003308c) main_tv_pg_hdr_pane_t1

0xe051,	// (0x0003309a) main_tv_pg_hdr_pane_t2

0xe05f,	// (0x000330a8) main_tv_pg_hdr_pane_t3

0xe06f,	// (0x000330b8) main_tv_pg_hdr_pane_t4

0xe07f,	// (0x000330c8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00034c8b) main_tv_pg_hdr_pane_t

0xe08f,	// (0x000330d8) single_mobtv_pg_channel_pane_ParamLimits

0xe08f,	// (0x000330d8) single_mobtv_pg_channel_pane

0xe0a1,	// (0x000330ea) single_mobtv_pg_channel_table_pane

0xe0aa,	// (0x000330f3) single_mobtv_pg_channel_thumb_pane

0xe0b3,	// (0x000330fc) single_tv_pg_channel_pane_g1

0xe0bc,	// (0x00033105) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00034c96) single_tv_pg_channel_pane_g

0xc64e,	// (0x00031697) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc64e,	// (0x00031697) bg_single_mobtv_pg_channel_thumb_pane

0xe0c5,	// (0x0003310e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0c5,	// (0x0003310e) single_mobtv_pg_channel_thumb_pane_g1

0xe0d3,	// (0x0003311c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0d3,	// (0x0003311c) single_mobtv_pg_channel_thumb_pane_g2

0xe0df,	// (0x00033128) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0df,	// (0x00033128) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00034c9b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00034c9b) single_mobtv_pg_channel_thumb_pane_g

0xe0eb,	// (0x00033134) single_mobtv_pg_channel_thumb_pane_t1

0xe0f9,	// (0x00033142) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00034ca2) single_mobtv_pg_channel_thumb_pane_t

0xc3e7,	// (0x00031430) bg_single_mobtv_pg_channel_table_pane_g1

0xc3e7,	// (0x00031430) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00034758) bg_single_mobtv_pg_channel_table_pane_g

0xe107,	// (0x00033150) single_mobtv_pg_channel_table_pane_t1

0xe115,	// (0x0003315e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00034ca7) single_mobtv_pg_channel_table_pane_t

0x95d2,	// (0x0002e61b) main_mobtv_info_pane_g1_ParamLimits

0x95d2,	// (0x0002e61b) main_mobtv_info_pane_g1

0x95f0,	// (0x0002e639) main_mobtv_info_pane_t1_ParamLimits

0x95f0,	// (0x0002e639) main_mobtv_info_pane_t1

0x9668,	// (0x0002e6b1) main_mobtv_info_pane_t2_ParamLimits

0x9668,	// (0x0002e6b1) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00034cb1) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00034cb1) main_mobtv_info_pane_t

0x96f7,	// (0x0002e740) wait_bar_pane_cp05

0x9709,	// (0x0002e752) main_mobtv_loading_pane_g1_ParamLimits

0x9709,	// (0x0002e752) main_mobtv_loading_pane_g1

0x971c,	// (0x0002e765) main_mobtv_loading_pane_g2_ParamLimits

0x971c,	// (0x0002e765) main_mobtv_loading_pane_g2

0x9728,	// (0x0002e771) main_mobtv_loading_pane_g3_ParamLimits

0x9728,	// (0x0002e771) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00034cb8) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00034cb8) main_mobtv_loading_pane_g

0xe123,	// (0x0003316c) main_mobtv_loading_pane_t1_ParamLimits

0xe123,	// (0x0003316c) main_mobtv_loading_pane_t1

0xe13b,	// (0x00033184) main_mobtv_loading_pane_t2_ParamLimits

0xe13b,	// (0x00033184) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00034cbf) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00034cbf) main_mobtv_loading_pane_t

0x973b,	// (0x0002e784) wait_bar_pane_cp06_ParamLimits

0x973b,	// (0x0002e784) wait_bar_pane_cp06

0xe15f,	// (0x000331a8) main_mobtv_programe_curr_pane_t1

0xe16d,	// (0x000331b6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00034cc4) main_mobtv_programe_curr_pane_t

0xe17b,	// (0x000331c4) main_mobtv_programe_next_pane_t1

0xe189,	// (0x000331d2) main_mobtv_programe_next_pane_t2

0xe197,	// (0x000331e0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00034cc9) main_mobtv_programe_next_pane_t

0x233a,	// (0x00027383) bg_popup_mobtv_noti_window_pane

0xe1a5,	// (0x000331ee) popup_mobtv_noti_window_g1

0xe1ad,	// (0x000331f6) popup_mobtv_noti_window_t1

0xe1bb,	// (0x00033204) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00034cd0) popup_mobtv_noti_window_t

0xc3e7,	// (0x00031430) bg_popup_mobtv_noti_window_pane_g1

0x233a,	// (0x00027383) sc_clock_pane

0x233a,	// (0x00027383) main_fs_bigclock_pane

0x8f7c,	// (0x0002dfc5) blid2_tripm_pane_t4_ParamLimits

0x8f7c,	// (0x0002dfc5) blid2_tripm_pane_t4

0x974a,	// (0x0002e793) sc_clock_pane_g1_ParamLimits

0x974a,	// (0x0002e793) sc_clock_pane_g1

0x975c,	// (0x0002e7a5) sc_clock_pane_t1_ParamLimits

0x975c,	// (0x0002e7a5) sc_clock_pane_t1

0x977e,	// (0x0002e7c7) sc_clock_pane_t2_ParamLimits

0x977e,	// (0x0002e7c7) sc_clock_pane_t2

0x9796,	// (0x0002e7df) sc_clock_pane_t3_ParamLimits

0x9796,	// (0x0002e7df) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00034cd5) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00034cd5) sc_clock_pane_t

0xa531,	// (0x0002f57a) main_fs_bigclock_indicator_pane_ParamLimits

0xa531,	// (0x0002f57a) main_fs_bigclock_indicator_pane

0xc61e,	// (0x00031667) main_fs_bigclock_pane_g1_ParamLimits

0xc61e,	// (0x00031667) main_fs_bigclock_pane_g1

0xa53d,	// (0x0002f586) main_fs_bigclock_pane_t1_ParamLimits

0xa53d,	// (0x0002f586) main_fs_bigclock_pane_t1

0xa54f,	// (0x0002f598) main_fs_bigclock_pane_t2_ParamLimits

0xa54f,	// (0x0002f598) main_fs_bigclock_pane_t2

0xa561,	// (0x0002f5aa) main_fs_bigclock_pane_t3_ParamLimits

0xa561,	// (0x0002f5aa) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00034ecf) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00034ecf) main_fs_bigclock_pane_t

0xedea,	// (0x00033e33) main_fs_bigclock_indicator_pane_g1

0xdea1,	// (0x00032eea) ncim_query_content_pane_g2_ParamLimits

0xdea1,	// (0x00032eea) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00034c62) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00034c62) ncim_query_content_pane_g

0x97ad,	// (0x0002e7f6) sc_clock_pane_t4_ParamLimits

0x97ad,	// (0x0002e7f6) sc_clock_pane_t4

0x25b6,	// (0x000275ff) main_radioblah_pane

0xd009,	// (0x00032052) cell_call4_button_pane_t1_copy1_ParamLimits

0xd009,	// (0x00032052) cell_call4_button_pane_t1_copy1

0x9430,	// (0x0002e479) main_ncimui_pane_t1_ParamLimits

0x9430,	// (0x0002e479) main_ncimui_pane_t1

0x9442,	// (0x0002e48b) main_ncimui_pane_t2_ParamLimits

0x9442,	// (0x0002e48b) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00034c5b) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00034c5b) main_ncimui_pane_t

0xe2eb,	// (0x00033334) main_radioblah_anim_pane_ParamLimits

0xe2eb,	// (0x00033334) main_radioblah_anim_pane

0xe2fc,	// (0x00033345) main_radioblah_info_pane_ParamLimits

0xe2fc,	// (0x00033345) main_radioblah_info_pane

0xe310,	// (0x00033359) main_radioblah_pane_t1_ParamLimits

0xe310,	// (0x00033359) main_radioblah_pane_t1

0xe32c,	// (0x00033375) main_radioblah_pane_t2_ParamLimits

0xe32c,	// (0x00033375) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00034cf6) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00034cf6) main_radioblah_pane_t

0x9856,	// (0x0002e89f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9856,	// (0x0002e89f) main_radioblah_rocker_ctrl_pane

0xe374,	// (0x000333bd) main_radioblah_info_pane_t1_ParamLimits

0xe374,	// (0x000333bd) main_radioblah_info_pane_t1

0x98ae,	// (0x0002e8f7) main_radioblah_info_pane_t2_ParamLimits

0x98ae,	// (0x0002e8f7) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00034cff) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00034cff) main_radioblah_info_pane_t

0xc3e7,	// (0x00031430) main_radioblah_rocker_ctrl_pane_g1

0x9960,	// (0x0002e9a9) main_radioblah_rocker_ctrl_pane_g2

0x9968,	// (0x0002e9b1) main_radioblah_rocker_ctrl_pane_g3

0x9970,	// (0x0002e9b9) main_radioblah_rocker_ctrl_pane_g4

0x9978,	// (0x0002e9c1) main_radioblah_rocker_ctrl_pane_g5

0x9980,	// (0x0002e9c9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00034d08) main_radioblah_rocker_ctrl_pane_g

0x91f7,	// (0x0002e240) main_cset_text2_pane_t1_copy1_ParamLimits

0xd087,	// (0x000320d0) cam4_image_uncrop_qvga_pane

0xd0ee,	// (0x00032137) vid4_image_uncrop_qcif_pane

0xd9ea,	// (0x00032a33) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9ea,	// (0x00032a33) cam6_image_uncrop_qvga_pane

0xdac0,	// (0x00032b09) vid6_image_uncrop_qcif_pane_ParamLimits

0xdac0,	// (0x00032b09) vid6_image_uncrop_qcif_pane

0x233a,	// (0x00027383) bg_popup_preview_window_pane_cp03

0xde53,	// (0x00032e9c) list_cset_text2_pane

0xde5b,	// (0x00032ea4) main_cset6_text2_pane_g1

0xde63,	// (0x00032eac) main_cset6_text2_pane_t1

0x9988,	// (0x0002e9d1) list_cset_text2_pane_t1_ParamLimits

0x9988,	// (0x0002e9d1) list_cset_text2_pane_t1

0x25b6,	// (0x000275ff) main_radioblah_pane_ParamLimits

0x96e3,	// (0x0002e72c) main_mobtv_info_pane_t3_ParamLimits

0x96e3,	// (0x0002e72c) main_mobtv_info_pane_t3

0x9844,	// (0x0002e88d) main_radioblah_pane_g1

0x987e,	// (0x0002e8c7) main_radioblah_info_pane_g1

0x9905,	// (0x0002e94e) main_radioblah_info_pane_t3_ParamLimits

0x9905,	// (0x0002e94e) main_radioblah_info_pane_t3

0x47c4,	// (0x0002980d) highlight_cell_cale_month_pane_ParamLimits

0x47c4,	// (0x0002980d) highlight_cell_cale_month_pane

0x233a,	// (0x00027383) main_phob_fisheye_pane

0xc768,	// (0x000317b1) scroll_pane_cp0031_ParamLimits

0xc768,	// (0x000317b1) scroll_pane_cp0031

0xdbce,	// (0x00032c17) wait_bar_pane_cp08_ParamLimits

0x927b,	// (0x0002e2c4) cset_list_set_pane_copy1_ParamLimits

0xe3ae,	// (0x000333f7) highlight_cell_cale_month_pane_g1

0x99a5,	// (0x0002e9ee) highlight_cell_cale_month_pane_t1

0xd783,	// (0x000327cc) list_gen_pane_cp01

0xd2d3,	// (0x0003231c) scroll_pane_01

0xe3b6,	// (0x000333ff) list_single_double_fisheye_pane

0xe3bf,	// (0x00033408) list_double_fisheye_pane_g1_ParamLimits

0xe3bf,	// (0x00033408) list_double_fisheye_pane_g1

0xe3cb,	// (0x00033414) list_double_fisheye_pane_g2_ParamLimits

0xe3cb,	// (0x00033414) list_double_fisheye_pane_g2

0x99b3,	// (0x0002e9fc) list_double_fisheye_pane_g3_ParamLimits

0x99b3,	// (0x0002e9fc) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00034d15) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00034d15) list_double_fisheye_pane_g

0x99bf,	// (0x0002ea08) list_double_fisheye_pane_t1_ParamLimits

0x99bf,	// (0x0002ea08) list_double_fisheye_pane_t1

0x99da,	// (0x0002ea23) list_double_fisheye_pane_t2_ParamLimits

0x99da,	// (0x0002ea23) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00034d20) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00034d20) list_double_fisheye_pane_t

0x233a,	// (0x00027383) main_call5_pane

0x97d8,	// (0x0002e821) sc_swipe_pane_ParamLimits

0x97d8,	// (0x0002e821) sc_swipe_pane

0x9a0f,	// (0x0002ea58) call5_image_pane_ParamLimits

0x9a0f,	// (0x0002ea58) call5_image_pane

0x9a2c,	// (0x0002ea75) call5_swipe_1_pane_ParamLimits

0x9a2c,	// (0x0002ea75) call5_swipe_1_pane

0x9a3f,	// (0x0002ea88) call5_swipe_2_pane_ParamLimits

0x9a3f,	// (0x0002ea88) call5_swipe_2_pane

0x9a6a,	// (0x0002eab3) popup_call5_audio_first_window_ParamLimits

0x9a6a,	// (0x0002eab3) popup_call5_audio_first_window

0xc64e,	// (0x00031697) call5_swipe_1_pane_g1_ParamLimits

0xc64e,	// (0x00031697) call5_swipe_1_pane_g1

0xe3fc,	// (0x00033445) call5_swipe_1_pane_g2_ParamLimits

0xe3fc,	// (0x00033445) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00034d25) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00034d25) call5_swipe_1_pane_g

0xe408,	// (0x00033451) call5_swipe_1_pane_t1_ParamLimits

0xe408,	// (0x00033451) call5_swipe_1_pane_t1

0xc64e,	// (0x00031697) call5_swipe_2_pane_g1_ParamLimits

0xc64e,	// (0x00031697) call5_swipe_2_pane_g1

0xe41d,	// (0x00033466) call5_swipe_2_pane_g2_ParamLimits

0xe41d,	// (0x00033466) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00034d2a) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00034d2a) call5_swipe_2_pane_g

0xe429,	// (0x00033472) call5_swipe_2_pane_t1_ParamLimits

0xe429,	// (0x00033472) call5_swipe_2_pane_t1

0xe43e,	// (0x00033487) sc_swipe_pane_g1_ParamLimits

0xe43e,	// (0x00033487) sc_swipe_pane_g1

0xe44b,	// (0x00033494) sc_swipe_pane_g2_ParamLimits

0xe44b,	// (0x00033494) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00034d2f) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00034d2f) sc_swipe_pane_g

0xe457,	// (0x000334a0) sc_swipe_pane_t1_ParamLimits

0xe457,	// (0x000334a0) sc_swipe_pane_t1

0x233a,	// (0x00027383) main_cmail_launcher_pane

0x9a7b,	// (0x0002eac4) aid_size_cell_cmail_l_ParamLimits

0x9a7b,	// (0x0002eac4) aid_size_cell_cmail_l

0x9a95,	// (0x0002eade) grid_cmail_l_pane_ParamLimits

0x9a95,	// (0x0002eade) grid_cmail_l_pane

0x9ab0,	// (0x0002eaf9) cell_cmail_l_pane_ParamLimits

0x9ab0,	// (0x0002eaf9) cell_cmail_l_pane

0x9ad6,	// (0x0002eb1f) cell_cmail_l_pane_g1_ParamLimits

0x9ad6,	// (0x0002eb1f) cell_cmail_l_pane_g1

0x9ae2,	// (0x0002eb2b) cell_cmail_l_pane_t1_ParamLimits

0x9ae2,	// (0x0002eb2b) cell_cmail_l_pane_t1

0xe46c,	// (0x000334b5) cell_cmail_l_pane_t2_ParamLimits

0xe46c,	// (0x000334b5) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00034d34) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00034d34) cell_cmail_l_pane_t

0x25b6,	// (0x000275ff) grid_highlight_pane_cp018_ParamLimits

0x25b6,	// (0x000275ff) grid_highlight_pane_cp018

0x2466,	// (0x000274af) main2_pane_ParamLimits

0x2466,	// (0x000274af) main2_pane

0x3144,	// (0x0002818d) popup_sp_fs_action_menu_bg_pane_g1

0x314c,	// (0x00028195) popup_sp_fs_action_menu_bg_pane_g2

0x3154,	// (0x0002819d) popup_sp_fs_action_menu_bg_pane_g3

0x315c,	// (0x000281a5) popup_sp_fs_action_menu_bg_pane_g4

0x3164,	// (0x000281ad) popup_sp_fs_action_menu_bg_pane_g5

0x316c,	// (0x000281b5) popup_sp_fs_action_menu_bg_pane_g6

0x3174,	// (0x000281bd) popup_sp_fs_action_menu_bg_pane_g7

0x317c,	// (0x000281c5) popup_sp_fs_action_menu_bg_pane_g8

0x3184,	// (0x000281cd) popup_sp_fs_action_menu_bg_pane_g9

0x318c,	// (0x000281d5) popup_sp_fs_action_menu_bg_pane_g10

0x318c,	// (0x000281d5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00034204) popup_sp_fs_action_menu_bg_pane_g

0x38c5,	// (0x0002890e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t3_g3_g1

0x38d1,	// (0x0002891a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x2_t3_g3_g2

0x38dd,	// (0x00028926) list_medium_line_x2_t3_g3_g3_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x000342b4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x000342b4) list_medium_line_x2_t3_g3_g

0x38e9,	// (0x00028932) list_medium_line_x2_t3_g3_t1_ParamLimits

0x38e9,	// (0x00028932) list_medium_line_x2_t3_g3_t1

0x38fe,	// (0x00028947) list_medium_line_x2_t3_g3_t2_ParamLimits

0x38fe,	// (0x00028947) list_medium_line_x2_t3_g3_t2

0x3912,	// (0x0002895b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x000342bb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x000342bb) list_medium_line_x2_t3_g3_t

0x38c5,	// (0x0002890e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t3_g2_g1

0x38dd,	// (0x00028926) list_medium_line_x2_t3_g2_g2_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x000342c2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x000342c2) list_medium_line_x2_t3_g2_g

0x3927,	// (0x00028970) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3927,	// (0x00028970) list_medium_line_x2_t3_g2_t1

0x393d,	// (0x00028986) list_medium_line_x2_t3_g2_t2_ParamLimits

0x393d,	// (0x00028986) list_medium_line_x2_t3_g2_t2

0x394f,	// (0x00028998) list_medium_line_x2_t3_g2_t3_ParamLimits

0x394f,	// (0x00028998) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x000342c7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x000342c7) list_medium_line_x2_t3_g2_t

0x38c5,	// (0x0002890e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t4_g4_g1

0x396c,	// (0x000289b5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x396c,	// (0x000289b5) list_medium_line_x2_t4_g4_g2

0x38d1,	// (0x0002891a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x2_t4_g4_g3

0x3978,	// (0x000289c1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3978,	// (0x000289c1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x000342ce) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x000342ce) list_medium_line_x2_t4_g4_g

0x3984,	// (0x000289cd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3984,	// (0x000289cd) list_medium_line_x2_t4_g4_t1

0x399b,	// (0x000289e4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x399b,	// (0x000289e4) list_medium_line_x2_t4_g4_t2

0x39b0,	// (0x000289f9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x39b0,	// (0x000289f9) list_medium_line_x2_t4_g4_t3

0x39c2,	// (0x00028a0b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x39c2,	// (0x00028a0b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x000342d7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x000342d7) list_medium_line_x2_t4_g4_t

0x38c5,	// (0x0002890e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t2_g4_g1

0x396c,	// (0x000289b5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x396c,	// (0x000289b5) list_medium_line_x2_t2_g4_g2

0x38d1,	// (0x0002891a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x2_t2_g4_g3

0x38dd,	// (0x00028926) list_medium_line_x2_t2_g4_g4_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0003433e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0003433e) list_medium_line_x2_t2_g4_g

0x47e2,	// (0x0002982b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x47e2,	// (0x0002982b) list_medium_line_x2_t2_g4_t1

0x3912,	// (0x0002895b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00034347) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00034347) list_medium_line_x2_t2_g4_t

0x38c5,	// (0x0002890e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t2_g3_g1

0x38d1,	// (0x0002891a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x2_t2_g3_g2

0x38dd,	// (0x00028926) list_medium_line_x2_t2_g3_g3_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x000342b4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x000342b4) list_medium_line_x2_t2_g3_g

0x47f7,	// (0x00029840) list_medium_line_x2_t2_g3_t1_ParamLimits

0x47f7,	// (0x00029840) list_medium_line_x2_t2_g3_t1

0x3912,	// (0x0002895b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0003434c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0003434c) list_medium_line_x2_t2_g3_t

0x4b59,	// (0x00029ba2) main_sp_fs_list_pane_ParamLimits

0x4b59,	// (0x00029ba2) main_sp_fs_list_pane

0x4b65,	// (0x00029bae) sp_fs_scroll_pane_ParamLimits

0x4b65,	// (0x00029bae) sp_fs_scroll_pane

0x4b71,	// (0x00029bba) list_medium_line_x2_t3_t1

0x4b81,	// (0x00029bca) list_medium_line_x2_t3_t2

0x4b8f,	// (0x00029bd8) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00034397) list_medium_line_x2_t3_t

0x4b9d,	// (0x00029be6) list_medium_line_x3_t4_t1

0x4bad,	// (0x00029bf6) list_medium_line_x3_t4_t2

0x4bbb,	// (0x00029c04) list_medium_line_x3_t4_t3

0x4b8f,	// (0x00029bd8) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0003439e) list_medium_line_x3_t4_t

0x4bc9,	// (0x00029c12) list_medium_line_x4_t5_t1

0x4bd9,	// (0x00029c22) list_medium_line_x4_t5_t2

0x4bbb,	// (0x00029c04) list_medium_line_x4_t5_t3

0x4be7,	// (0x00029c30) list_medium_line_x4_t5_t4

0x4b8f,	// (0x00029bd8) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x000343a7) list_medium_line_x4_t5_t

0x38c5,	// (0x0002890e) list_medium_line_t4_g4_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_t4_g4_g1

0x3978,	// (0x000289c1) list_medium_line_t4_g4_g2_ParamLimits

0x3978,	// (0x000289c1) list_medium_line_t4_g4_g2

0x4bf5,	// (0x00029c3e) list_medium_line_t4_g4_g3_ParamLimits

0x4bf5,	// (0x00029c3e) list_medium_line_t4_g4_g3

0x38dd,	// (0x00028926) list_medium_line_t4_g4_g4_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x000343b2) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x000343b2) list_medium_line_t4_g4_g

0x4c01,	// (0x00029c4a) list_medium_line_t4_g4_t1_ParamLimits

0x4c01,	// (0x00029c4a) list_medium_line_t4_g4_t1

0x4c16,	// (0x00029c5f) list_medium_line_t4_g4_t2_ParamLimits

0x4c16,	// (0x00029c5f) list_medium_line_t4_g4_t2

0x4c2b,	// (0x00029c74) list_medium_line_t4_g4_t3_ParamLimits

0x4c2b,	// (0x00029c74) list_medium_line_t4_g4_t3

0x3912,	// (0x0002895b) list_medium_line_t4_g4_t4_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x000343bb) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x000343bb) list_medium_line_t4_g4_t

0x4f6b,	// (0x00029fb4) chi_dic_find_pane_g1

0x6749,	// (0x0002b792) main_tport_pane

0xd410,	// (0x00032459) list_medium_line_plain_t1

0xd462,	// (0x000324ab) list_medium_line_t2_g2_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_t2_g2_g1

0xd46e,	// (0x000324b7) list_medium_line_t2_g2_g2_ParamLimits

0xd46e,	// (0x000324b7) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00034a77) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00034a77) list_medium_line_t2_g2_g

0x886e,	// (0x0002d8b7) list_medium_line_t2_g2_t1_ParamLimits

0x886e,	// (0x0002d8b7) list_medium_line_t2_g2_t1

0x8888,	// (0x0002d8d1) list_medium_line_t2_g2_t2_ParamLimits

0x8888,	// (0x0002d8d1) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00034a7c) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00034a7c) list_medium_line_t2_g2_t

0xd804,	// (0x0003284d) aid_sp_fs_list_icon_a_sm

0xd80c,	// (0x00032855) aid_sp_fs_list_icon_d

0xd814,	// (0x0003285d) aid_sp_fs_text_primary

0xd81d,	// (0x00032866) aid_sp_fs_text_secondary

0xd826,	// (0x0003286f) list_medium_line

0xd826,	// (0x0003286f) list_medium_line_g2

0xd826,	// (0x0003286f) list_medium_line_g3

0xd826,	// (0x0003286f) list_medium_line_plain

0xd826,	// (0x0003286f) list_medium_line_plain_t2

0xd826,	// (0x0003286f) list_medium_line_plain_t3

0xd826,	// (0x0003286f) list_medium_line_right_icon

0xd826,	// (0x0003286f) list_medium_line_right_iconx2

0xd826,	// (0x0003286f) list_medium_line_t2

0xd826,	// (0x0003286f) list_medium_line_t2_g2

0xd826,	// (0x0003286f) list_medium_line_t2_g3

0xd826,	// (0x0003286f) list_medium_line_t2_right_icon

0xd826,	// (0x0003286f) list_medium_line_t2_right_iconx2

0xd826,	// (0x0003286f) list_medium_line_t3

0xd826,	// (0x0003286f) list_medium_line_t3_g2

0xd826,	// (0x0003286f) list_medium_line_t3_g3

0xd826,	// (0x0003286f) list_medium_line_t3_right_iconx2

0xd82f,	// (0x00032878) list_medium_line_t4_g4

0xd838,	// (0x00032881) list_medium_line_x2

0xd838,	// (0x00032881) list_medium_line_x2_t2_g2

0xd838,	// (0x00032881) list_medium_line_x2_t2_g3

0xd838,	// (0x00032881) list_medium_line_x2_t2_g4

0xd838,	// (0x00032881) list_medium_line_x2_t3

0xd838,	// (0x00032881) list_medium_line_x2_t3_g2

0xd838,	// (0x00032881) list_medium_line_x2_t3_g3

0xd838,	// (0x00032881) list_medium_line_x2_t3_g4

0xd838,	// (0x00032881) list_medium_line_x2_t4_g2

0xd838,	// (0x00032881) list_medium_line_x2_t4_g4

0xd841,	// (0x0003288a) list_medium_line_x3

0xd841,	// (0x0003288a) list_medium_line_x3_t4

0xd841,	// (0x0003288a) list_medium_line_x3_t4_g4

0xd82f,	// (0x00032878) list_medium_line_x4_t4

0xd82f,	// (0x00032878) list_medium_line_x4_t4_g7

0xd82f,	// (0x00032878) list_medium_line_x4_t5

0xd84a,	// (0x00032893) list_single_fs_dyc_pane_ParamLimits

0xd84a,	// (0x00032893) list_single_fs_dyc_pane

0x38c5,	// (0x0002890e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x4_t4_g7_g1

0xdd82,	// (0x00032dcb) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd82,	// (0x00032dcb) list_medium_line_x4_t4_g7_g2

0xdd8e,	// (0x00032dd7) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd8e,	// (0x00032dd7) list_medium_line_x4_t4_g7_g3

0xdd9d,	// (0x00032de6) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd9d,	// (0x00032de6) list_medium_line_x4_t4_g7_g4

0xdda9,	// (0x00032df2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdda9,	// (0x00032df2) list_medium_line_x4_t4_g7_g5

0xddb8,	// (0x00032e01) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddb8,	// (0x00032e01) list_medium_line_x4_t4_g7_g6

0xddc7,	// (0x00032e10) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddc7,	// (0x00032e10) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00034c41) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00034c41) list_medium_line_x4_t4_g7_g

0xddd3,	// (0x00032e1c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddd3,	// (0x00032e1c) list_medium_line_x4_t4_g7_t1

0xdde8,	// (0x00032e31) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdde8,	// (0x00032e31) list_medium_line_x4_t4_g7_t2

0xddfd,	// (0x00032e46) list_medium_line_x4_t4_g7_t3_ParamLimits

0xddfd,	// (0x00032e46) list_medium_line_x4_t4_g7_t3

0xde12,	// (0x00032e5b) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde12,	// (0x00032e5b) list_medium_line_x4_t4_g7_t4

0xde24,	// (0x00032e6d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde24,	// (0x00032e6d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00034c50) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00034c50) list_medium_line_x4_t4_g7_t

0xde36,	// (0x00032e7f) list_single_dyc_row_pane_ParamLimits

0xde36,	// (0x00032e7f) list_single_dyc_row_pane

0x99fc,	// (0x0002ea45) call5_gesture_pane_ParamLimits

0x99fc,	// (0x0002ea45) call5_gesture_pane

0x9a52,	// (0x0002ea9b) call5_windows_pane_ParamLimits

0x9a52,	// (0x0002ea9b) call5_windows_pane

0x9af8,	// (0x0002eb41) call5_swipe_1_pane_cp_ParamLimits

0x9af8,	// (0x0002eb41) call5_swipe_1_pane_cp

0x9b04,	// (0x0002eb4d) call5_swipe_2_pane_cp_ParamLimits

0x9b04,	// (0x0002eb4d) call5_swipe_2_pane_cp

0x53d7,	// (0x0002a420) call5_image_pane_cp

0x9b10,	// (0x0002eb59) popup_call5_audio_first_window_cp_ParamLimits

0x9b10,	// (0x0002eb59) popup_call5_audio_first_window_cp

0xe43e,	// (0x00033487) call5_swipe_1_pane_g1_cp_ParamLimits

0xe43e,	// (0x00033487) call5_swipe_1_pane_g1_cp

0xe47e,	// (0x000334c7) call5_swipe_1_pane_g2_cp

0xe457,	// (0x000334a0) call5_swipe_1_pane_t1_cp_ParamLimits

0xe457,	// (0x000334a0) call5_swipe_1_pane_t1_cp

0xe43e,	// (0x00033487) call5_swipe_2_pane_g1_cp_ParamLimits

0xe43e,	// (0x00033487) call5_swipe_2_pane_g1_cp

0xe486,	// (0x000334cf) call5_swipe_2_pane_g2_cp

0xe48e,	// (0x000334d7) call5_swipe_2_pane_t1_cp_ParamLimits

0xe48e,	// (0x000334d7) call5_swipe_2_pane_t1_cp

0x25b6,	// (0x000275ff) main_sp_fs_email_pane

0xe4a3,	// (0x000334ec) main_sp_fs_listscroll_pane_te

0xe4ac,	// (0x000334f5) popup_sp_fs_action_menu_pane_ParamLimits

0xe4ac,	// (0x000334f5) popup_sp_fs_action_menu_pane

0xc3e7,	// (0x00031430) bg_sp_fs_ctrlbar_pane_g1

0xe4ec,	// (0x00033535) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4f5,	// (0x0003353e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4fe,	// (0x00033547) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3e7,	// (0x00031430) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00034d39) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1ca,	// (0x00031213) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1ca,	// (0x00031213) bg_sp_fs_ctrlbar_ddmenu_pane

0xe507,	// (0x00033550) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe507,	// (0x00033550) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe513,	// (0x0003355c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe513,	// (0x0003355c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00034d42) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00034d42) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe51f,	// (0x00033568) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe51f,	// (0x00033568) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe539,	// (0x00033582) list_medium_line_t2_right_icon_g1

0x9b1c,	// (0x0002eb65) list_medium_line_t2_right_icon_t1

0x9b2c,	// (0x0002eb75) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00034d47) list_medium_line_t2_right_icon_t

0xbedf,	// (0x00030f28) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbedf,	// (0x00030f28) bg_sp_fs_ctrlbar_pane

0x9b84,	// (0x0002ebcd) main_sp_fs_ctrlbar_button_pane_cp01

0x9b8c,	// (0x0002ebd5) main_sp_fs_ctrlbar_ddmenu_pane

0x38c5,	// (0x0002890e) main_sp_fs_ctrlbar_pane_g1

0xe579,	// (0x000335c2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00034d4c) main_sp_fs_ctrlbar_pane_g

0xe585,	// (0x000335ce) main_sp_fs_ctrlbar_pane_t1

0x9b96,	// (0x0002ebdf) main_sp_fs_ctrlbar_pane

0x9bba,	// (0x0002ec03) main_sp_fs_listscroll_pane_te_cp01

0x9bda,	// (0x0002ec23) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9bda,	// (0x0002ec23) popup_sp_fs_action_menu_pane_cp01

0x25b6,	// (0x000275ff) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x25b6,	// (0x000275ff) bg_sp_fs_highlight_list_pane_cp01

0xe59a,	// (0x000335e3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe59a,	// (0x000335e3) sp_fs_action_menu_list_gene_pane_g1

0xe5a9,	// (0x000335f2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5a9,	// (0x000335f2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00034d51) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00034d51) sp_fs_action_menu_list_gene_pane_g

0xe5b6,	// (0x000335ff) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5b6,	// (0x000335ff) sp_fs_action_menu_list_gene_pane_t1

0xe5ce,	// (0x00033617) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe5ce,	// (0x00033617) sp_fs_action_menu_list_gene_pane

0xe5eb,	// (0x00033634) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5eb,	// (0x00033634) popup_sp_fs_action_menu_bg_pane

0xe5f9,	// (0x00033642) sp_fs_action_menu_list_pane_ParamLimits

0xe5f9,	// (0x00033642) sp_fs_action_menu_list_pane

0xe617,	// (0x00033660) sp_fs_scroll_pane_cp01_ParamLimits

0xe617,	// (0x00033660) sp_fs_scroll_pane_cp01

0x9bf4,	// (0x0002ec3d) list_medium_line_plain_t2_t1

0x9c04,	// (0x0002ec4d) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00034d56) list_medium_line_plain_t2_t

0x9c14,	// (0x0002ec5d) list_medium_line_plain_t3_t1

0x9c24,	// (0x0002ec6d) list_medium_line_plain_t3_t2

0x9c32,	// (0x0002ec7b) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00034d5b) list_medium_line_plain_t3_t

0x38c5,	// (0x0002890e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t2_g2_g1

0x38dd,	// (0x00028926) list_medium_line_x2_t2_g2_g2_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x000342c2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x000342c2) list_medium_line_x2_t2_g2_g

0x4c01,	// (0x00029c4a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4c01,	// (0x00029c4a) list_medium_line_x2_t2_g2_t1

0x3912,	// (0x0002895b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00034d62) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00034d62) list_medium_line_x2_t2_g2_t

0x38c5,	// (0x0002890e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t4_g2_g1

0x38dd,	// (0x00028926) list_medium_line_x2_t4_g2_g2_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x000342c2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x000342c2) list_medium_line_x2_t4_g2_g

0x9c40,	// (0x0002ec89) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9c40,	// (0x0002ec89) list_medium_line_x2_t4_g2_t1

0x9c57,	// (0x0002eca0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9c57,	// (0x0002eca0) list_medium_line_x2_t4_g2_t2

0x9c6c,	// (0x0002ecb5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9c6c,	// (0x0002ecb5) list_medium_line_x2_t4_g2_t3

0x3912,	// (0x0002895b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x00034d67) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x00034d67) list_medium_line_x2_t4_g2_t

0xe63d,	// (0x00033686) list_medium_line_t3_right_iconx2_g1

0xe539,	// (0x00033582) list_medium_line_t3_right_iconx2_g2

0x9c7e,	// (0x0002ecc7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x00034d70) list_medium_line_t3_right_iconx2_g

0x9c88,	// (0x0002ecd1) list_medium_line_t3_right_iconx2_t1

0x9c98,	// (0x0002ece1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x00034d77) list_medium_line_t3_right_iconx2_t

0x38c5,	// (0x0002890e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x3_t4_g4_g1

0x38d1,	// (0x0002891a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x3_t4_g4_g2

0x3978,	// (0x000289c1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3978,	// (0x000289c1) list_medium_line_x3_t4_g4_g3

0xe645,	// (0x0003368e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe645,	// (0x0003368e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x00034d7c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x00034d7c) list_medium_line_x3_t4_g4_g

0x9ca6,	// (0x0002ecef) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9ca6,	// (0x0002ecef) list_medium_line_x3_t4_g4_t1

0x9cbd,	// (0x0002ed06) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9cbd,	// (0x0002ed06) list_medium_line_x3_t4_g4_t2

0x4c16,	// (0x00029c5f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4c16,	// (0x00029c5f) list_medium_line_x3_t4_g4_t3

0xe651,	// (0x0003369a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe651,	// (0x0003369a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x00034d85) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x00034d85) list_medium_line_x3_t4_g4_t

0x9cd6,	// (0x0002ed1f) list_single_dyc_row_text_pane_t1_ParamLimits

0x9cd6,	// (0x0002ed1f) list_single_dyc_row_text_pane_t1

0x9d1f,	// (0x0002ed68) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d1f,	// (0x0002ed68) list_single_dyc_row_text_pane_t2

0xe66e,	// (0x000336b7) list_single_dyc_row_text_pane_t3_ParamLimits

0xe66e,	// (0x000336b7) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x00034d8e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x00034d8e) list_single_dyc_row_text_pane_t

0xe680,	// (0x000336c9) list_single_dyc_row_pane_g1_ParamLimits

0xe680,	// (0x000336c9) list_single_dyc_row_pane_g1

0xe68c,	// (0x000336d5) list_single_dyc_row_pane_g2_ParamLimits

0xe68c,	// (0x000336d5) list_single_dyc_row_pane_g2

0xe698,	// (0x000336e1) list_single_dyc_row_pane_g3_ParamLimits

0xe698,	// (0x000336e1) list_single_dyc_row_pane_g3

0xe6a4,	// (0x000336ed) list_single_dyc_row_pane_g4_ParamLimits

0xe6a4,	// (0x000336ed) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00034d95) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00034d95) list_single_dyc_row_pane_g

0xe6b0,	// (0x000336f9) list_single_dyc_row_text_pane_ParamLimits

0xe6b0,	// (0x000336f9) list_single_dyc_row_text_pane

0x233a,	// (0x00027383) bg_sp_fs_scroll_pane

0xe6cf,	// (0x00033718) thumb_sp_fs_scroll_pane

0xd462,	// (0x000324ab) list_medium_line_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_g1

0xe6d8,	// (0x00033721) list_medium_line_t1_ParamLimits

0xe6d8,	// (0x00033721) list_medium_line_t1

0x38c5,	// (0x0002890e) list_medium_line_x2_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_g1

0x38d1,	// (0x0002891a) list_medium_line_x2_g2_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00034d9e) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00034d9e) list_medium_line_x2_g

0xe6ed,	// (0x00033736) list_medium_line_x2_t1_ParamLimits

0xe6ed,	// (0x00033736) list_medium_line_x2_t1

0x38c5,	// (0x0002890e) list_medium_line_x3_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x3_g1

0x38d1,	// (0x0002891a) list_medium_line_x3_g2_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00034d9e) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00034d9e) list_medium_line_x3_g

0xe6ed,	// (0x00033736) list_medium_line_x3_t1_ParamLimits

0xe6ed,	// (0x00033736) list_medium_line_x3_t1

0xe703,	// (0x0003374c) thumb_sp_fs_scroll_pane_g1

0xe70c,	// (0x00033755) thumb_sp_fs_scroll_pane_g2

0xe715,	// (0x0003375e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00034da3) thumb_sp_fs_scroll_pane_g

0xe703,	// (0x0003374c) bg_sp_fs_scroll_pane_g1

0xe70c,	// (0x00033755) bg_sp_fs_scroll_pane_g2

0xe715,	// (0x0003375e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00034da3) bg_sp_fs_scroll_pane_g

0x38c5,	// (0x0002890e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x38c5,	// (0x0002890e) list_medium_line_x2_t3_g4_g1

0x396c,	// (0x000289b5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x396c,	// (0x000289b5) list_medium_line_x2_t3_g4_g2

0x38d1,	// (0x0002891a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x38d1,	// (0x0002891a) list_medium_line_x2_t3_g4_g3

0x38dd,	// (0x00028926) list_medium_line_x2_t3_g4_g4_ParamLimits

0x38dd,	// (0x00028926) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0003433e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0003433e) list_medium_line_x2_t3_g4_g

0x9d79,	// (0x0002edc2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d79,	// (0x0002edc2) list_medium_line_x2_t3_g4_t1

0x9d8f,	// (0x0002edd8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d8f,	// (0x0002edd8) list_medium_line_x2_t3_g4_t2

0x3912,	// (0x0002895b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3912,	// (0x0002895b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00034daa) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00034daa) list_medium_line_x2_t3_g4_t

0xd462,	// (0x000324ab) list_medium_line_g2_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_g2_g1

0xd46e,	// (0x000324b7) list_medium_line_g2_g2_ParamLimits

0xd46e,	// (0x000324b7) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00034a77) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00034a77) list_medium_line_g2_g

0xe71e,	// (0x00033767) list_medium_line_g2_t1_ParamLimits

0xe71e,	// (0x00033767) list_medium_line_g2_t1

0xd462,	// (0x000324ab) list_medium_line_t3_g2_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_t3_g2_g1

0xd46e,	// (0x000324b7) list_medium_line_t3_g2_g2_ParamLimits

0xd46e,	// (0x000324b7) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00034a77) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00034a77) list_medium_line_t3_g2_g

0x9da8,	// (0x0002edf1) list_medium_line_t3_g2_t1_ParamLimits

0x9da8,	// (0x0002edf1) list_medium_line_t3_g2_t1

0x9dc2,	// (0x0002ee0b) list_medium_line_t3_g2_t2_ParamLimits

0x9dc2,	// (0x0002ee0b) list_medium_line_t3_g2_t2

0x9dd7,	// (0x0002ee20) list_medium_line_t3_g2_t3_ParamLimits

0x9dd7,	// (0x0002ee20) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00034db1) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00034db1) list_medium_line_t3_g2_t

0xe539,	// (0x00033582) list_medium_line_right_icon_g1

0xe733,	// (0x0003377c) list_medium_line_right_icon_t1

0xd462,	// (0x000324ab) list_medium_line_t2_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_t2_g1

0x9df1,	// (0x0002ee3a) list_medium_line_t2_t1_ParamLimits

0x9df1,	// (0x0002ee3a) list_medium_line_t2_t1

0x9e0b,	// (0x0002ee54) list_medium_line_t2_t2_ParamLimits

0x9e0b,	// (0x0002ee54) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00034db8) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00034db8) list_medium_line_t2_t

0xd462,	// (0x000324ab) list_medium_line_t3_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_t3_g1

0x9e20,	// (0x0002ee69) list_medium_line_t3_t1_ParamLimits

0x9e20,	// (0x0002ee69) list_medium_line_t3_t1

0x9e37,	// (0x0002ee80) list_medium_line_t3_t2_ParamLimits

0x9e37,	// (0x0002ee80) list_medium_line_t3_t2

0x9e4c,	// (0x0002ee95) list_medium_line_t3_t3_ParamLimits

0x9e4c,	// (0x0002ee95) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00034dbd) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00034dbd) list_medium_line_t3_t

0xd462,	// (0x000324ab) list_medium_line_g3_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_g3_g1

0xe741,	// (0x0003378a) list_medium_line_g3_g2_ParamLimits

0xe741,	// (0x0003378a) list_medium_line_g3_g2

0xd46e,	// (0x000324b7) list_medium_line_g3_g3_ParamLimits

0xd46e,	// (0x000324b7) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00034dc4) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00034dc4) list_medium_line_g3_g

0xe74d,	// (0x00033796) list_medium_line_g3_t1_ParamLimits

0xe74d,	// (0x00033796) list_medium_line_g3_t1

0xd462,	// (0x000324ab) list_medium_line_t2_g3_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_t2_g3_g1

0xe741,	// (0x0003378a) list_medium_line_t2_g3_g2_ParamLimits

0xe741,	// (0x0003378a) list_medium_line_t2_g3_g2

0xd46e,	// (0x000324b7) list_medium_line_t2_g3_g3_ParamLimits

0xd46e,	// (0x000324b7) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00034dc4) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00034dc4) list_medium_line_t2_g3_g

0x9e5e,	// (0x0002eea7) list_medium_line_t2_g3_t1_ParamLimits

0x9e5e,	// (0x0002eea7) list_medium_line_t2_g3_t1

0x9e75,	// (0x0002eebe) list_medium_line_t2_g3_t2_ParamLimits

0x9e75,	// (0x0002eebe) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00034dcb) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00034dcb) list_medium_line_t2_g3_t

0xd462,	// (0x000324ab) list_medium_line_t3_g3_g1_ParamLimits

0xd462,	// (0x000324ab) list_medium_line_t3_g3_g1

0xe741,	// (0x0003378a) list_medium_line_t3_g3_g2_ParamLimits

0xe741,	// (0x0003378a) list_medium_line_t3_g3_g2

0xd46e,	// (0x000324b7) list_medium_line_t3_g3_g3_ParamLimits

0xd46e,	// (0x000324b7) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00034dc4) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00034dc4) list_medium_line_t3_g3_g

0x9e8e,	// (0x0002eed7) list_medium_line_t3_g3_t1_ParamLimits

0x9e8e,	// (0x0002eed7) list_medium_line_t3_g3_t1

0x9ea2,	// (0x0002eeeb) list_medium_line_t3_g3_t2_ParamLimits

0x9ea2,	// (0x0002eeeb) list_medium_line_t3_g3_t2

0x9eb4,	// (0x0002eefd) list_medium_line_t3_g3_t3_ParamLimits

0x9eb4,	// (0x0002eefd) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00034dd0) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00034dd0) list_medium_line_t3_g3_t

0xe63d,	// (0x00033686) list_medium_line_right_iconx2_g1

0xe539,	// (0x00033582) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00034dd7) list_medium_line_right_iconx2_g

0xe762,	// (0x000337ab) list_medium_line_right_iconx2_t1

0xe63d,	// (0x00033686) list_medium_line_t2_right_iconx2_g1

0xe539,	// (0x00033582) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00034dd7) list_medium_line_t2_right_iconx2_g

0x9ec8,	// (0x0002ef11) list_medium_line_t2_right_iconx2_t1

0x9ed8,	// (0x0002ef21) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00034ddc) list_medium_line_t2_right_iconx2_t

0xe770,	// (0x000337b9) list_medium_line_x4_t4_t1

0x9ee6,	// (0x0002ef2f) list_medium_line_x4_t4_t2

0x9ef6,	// (0x0002ef3f) list_medium_line_x4_t4_t3

0x9f06,	// (0x0002ef4f) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00034de1) list_medium_line_x4_t4_t

0x9f59,	// (0x0002efa2) tport_appsw_pane_ParamLimits

0x9f59,	// (0x0002efa2) tport_appsw_pane

0x9f6a,	// (0x0002efb3) tport_contact_pane_ParamLimits

0x9f6a,	// (0x0002efb3) tport_contact_pane

0x9f83,	// (0x0002efcc) tport_listscroll_pane_ParamLimits

0x9f83,	// (0x0002efcc) tport_listscroll_pane

0x9f9e,	// (0x0002efe7) cell_tport_appsw_pane_ParamLimits

0x9f9e,	// (0x0002efe7) cell_tport_appsw_pane

0xd13d,	// (0x00032186) tport_appsw_pane_g1_ParamLimits

0xd13d,	// (0x00032186) tport_appsw_pane_g1

0xe77e,	// (0x000337c7) tport_contact_pane_g1

0xe787,	// (0x000337d0) tport_contact_pane_t1

0xe795,	// (0x000337de) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00034dea) tport_contact_pane_t

0xe7a3,	// (0x000337ec) list_tport_pane

0xe7ac,	// (0x000337f5) scroll_pane_cp_030

0xe7bd,	// (0x00033806) cell_tport_appsw_pane_g1

0xe7cd,	// (0x00033816) cell_tport_appsw_pane_t1

0x233a,	// (0x00027383) grid_highlight_pane_cp019

0x9fde,	// (0x0002f027) list_tport_double_graphic_pane_ParamLimits

0x9fde,	// (0x0002f027) list_tport_double_graphic_pane

0x25b6,	// (0x000275ff) list_highlight_pane_cp023_ParamLimits

0x25b6,	// (0x000275ff) list_highlight_pane_cp023

0x9feb,	// (0x0002f034) list_tport_double_graphic_pane_g1_ParamLimits

0x9feb,	// (0x0002f034) list_tport_double_graphic_pane_g1

0x9ff8,	// (0x0002f041) list_tport_double_graphic_pane_t1_ParamLimits

0x9ff8,	// (0x0002f041) list_tport_double_graphic_pane_t1

0xa00d,	// (0x0002f056) list_tport_double_graphic_pane_t2_ParamLimits

0xa00d,	// (0x0002f056) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00034df6) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00034df6) list_tport_double_graphic_pane_t

0x233a,	// (0x00027383) main_cale_note_pane

0x202c,	// (0x00027075) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x202c,	// (0x00027075) cell_vitu2_function_top_wide_pane_cp01

0x96f7,	// (0x0002e740) wait_bar_pane_cp05_ParamLimits

0x233a,	// (0x00027383) listscroll_cmail_pane

0xe7e3,	// (0x0003382c) list_cmail_pane

0xa029,	// (0x0002f072) list_cmail_body_pane

0xa041,	// (0x0002f08a) list_single_cmail_header_caption_pane

0xa05d,	// (0x0002f0a6) list_single_cmail_header_detail_pane_ParamLimits

0xa05d,	// (0x0002f0a6) list_single_cmail_header_detail_pane

0xa089,	// (0x0002f0d2) list_single_cmail_header_caption_pane_t1

0xa099,	// (0x0002f0e2) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa099,	// (0x0002f0e2) list_single_cmail_header_detail_pane_g1

0xe803,	// (0x0003384c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe803,	// (0x0003384c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00034dfb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00034dfb) list_single_cmail_header_detail_pane_g

0xe81c,	// (0x00033865) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe81c,	// (0x00033865) list_single_cmail_header_detail_pane_t1

0xe84e,	// (0x00033897) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe84e,	// (0x00033897) list_single_cmail_header_editor_pane_bg

0xe860,	// (0x000338a9) list_cmail_body_pane_g1

0xe869,	// (0x000338b2) list_cmail_body_pane_t1

0xd1b9,	// (0x00032202) list_single_cmail_header_editor_pane_bg_g1

0x3f77,	// (0x00028fc0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1c9,	// (0x00032212) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1c1,	// (0x0003220a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd43a,	// (0x00032483) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1e9,	// (0x00032232) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1d9,	// (0x00032222) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1e1,	// (0x0003222a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3f57,	// (0x00028fa0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa0d7,	// (0x0002f120) calenote_gesture_pane_ParamLimits

0xa0d7,	// (0x0002f120) calenote_gesture_pane

0xa0f7,	// (0x0002f140) calenote_window_pane_ParamLimits

0xa0f7,	// (0x0002f140) calenote_window_pane

0xe877,	// (0x000338c0) popup_note_window_cp01

0xa113,	// (0x0002f15c) calenote_swipe_1_pane_ParamLimits

0xa113,	// (0x0002f15c) calenote_swipe_1_pane

0x9b04,	// (0x0002eb4d) calenote_swipe_2_pane_ParamLimits

0x9b04,	// (0x0002eb4d) calenote_swipe_2_pane

0xe43e,	// (0x00033487) calenote_swipe_1_pane_g1_ParamLimits

0xe43e,	// (0x00033487) calenote_swipe_1_pane_g1

0xe44b,	// (0x00033494) calenote_swipe_1_pane_g2_ParamLimits

0xe44b,	// (0x00033494) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00034d2f) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00034d2f) calenote_swipe_1_pane_g

0xe889,	// (0x000338d2) calenote_swipe_1_pane_t1_ParamLimits

0xe889,	// (0x000338d2) calenote_swipe_1_pane_t1

0xe43e,	// (0x00033487) calenote_swipe_2_pane_g1_ParamLimits

0xe43e,	// (0x00033487) calenote_swipe_2_pane_g1

0xe8a8,	// (0x000338f1) calenote_swipe_2_pane_g2_ParamLimits

0xe8a8,	// (0x000338f1) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00034e07) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00034e07) calenote_swipe_2_pane_g

0xe8b4,	// (0x000338fd) calenote_swipe_2_pane_t1_ParamLimits

0xe8b4,	// (0x000338fd) calenote_swipe_2_pane_t1

0x233a,	// (0x00027383) main_mup_navstr_pane

0x7615,	// (0x0002c65e) main_mup3_pane_t7_ParamLimits

0x7615,	// (0x0002c65e) main_mup3_pane_t7

0xcd42,	// (0x00031d8b) main_mp4_pane_g6_ParamLimits

0xcd42,	// (0x00031d8b) main_mp4_pane_g6

0xcf74,	// (0x00031fbd) main_image3_pane_t4_ParamLimits

0xcf74,	// (0x00031fbd) main_image3_pane_t4

0xa128,	// (0x0002f171) popup_navstr_preview_pane_ParamLimits

0xa128,	// (0x0002f171) popup_navstr_preview_pane

0xa13c,	// (0x0002f185) scroll_navstr_pane_ParamLimits

0xa13c,	// (0x0002f185) scroll_navstr_pane

0x233a,	// (0x00027383) bg_popup_preview_window_pane_cp04

0xe8db,	// (0x00033924) popup_navstr_preview_pane_t1

0xa150,	// (0x0002f199) scroll_navstr_pane_g1_ParamLimits

0xa150,	// (0x0002f199) scroll_navstr_pane_g1

0xa164,	// (0x0002f1ad) scroll_navstr_pane_t1_ParamLimits

0xa164,	// (0x0002f1ad) scroll_navstr_pane_t1

0xe880,	// (0x000338c9) bg_button_pane_cp014

0xe880,	// (0x000338c9) bg_button_pane_cp030

0xe3df,	// (0x00033428) list_double_fisheye_pane_g4_ParamLimits

0xe3df,	// (0x00033428) list_double_fisheye_pane_g4

0xe3eb,	// (0x00033434) list_double_fisheye_pane_g5_ParamLimits

0xe3eb,	// (0x00033434) list_double_fisheye_pane_g5

0xe7eb,	// (0x00033834) sp_fs_scroll_pane_cp03

0x38c5,	// (0x0002890e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe579,	// (0x000335c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00034d4c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe585,	// (0x000335ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa01f,	// (0x0002f068) sp_fs_scroll_pane_cp02

0x31f4,	// (0x0002823d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x31f4,	// (0x0002823d) popup_sp_fs_calendar_preview_list_single_pane

0x233a,	// (0x00027383) main_cam6_pano_pane

0x25b6,	// (0x000275ff) main_mup3_pane_ParamLimits

0x233a,	// (0x00027383) main_phacti_pane

0x95ca,	// (0x0002e613) bg_button_pane_cp11

0x95e4,	// (0x0002e62d) main_mobtv_info_pane_g2_ParamLimits

0x95e4,	// (0x0002e62d) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00034cac) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00034cac) main_mobtv_info_pane_g

0x97bf,	// (0x0002e808) sc_clock_pane_t5_ParamLimits

0x97bf,	// (0x0002e808) sc_clock_pane_t5

0x9844,	// (0x0002e88d) main_radioblah_pane_g1_ParamLimits

0xe344,	// (0x0003338d) main_radioblah_pane_t3_ParamLimits

0xe344,	// (0x0003338d) main_radioblah_pane_t3

0xe35c,	// (0x000333a5) main_radioblah_pane_t4_ParamLimits

0xe35c,	// (0x000333a5) main_radioblah_pane_t4

0x986c,	// (0x0002e8b5) main_radioblah_text_pane_ParamLimits

0x986c,	// (0x0002e8b5) main_radioblah_text_pane

0x987e,	// (0x0002e8c7) main_radioblah_info_pane_g1_ParamLimits

0x9919,	// (0x0002e962) main_radioblah_info_pane_t4_ParamLimits

0x9919,	// (0x0002e962) main_radioblah_info_pane_t4

0x25b6,	// (0x000275ff) main_sp_fs_calendar_pane

0xa17a,	// (0x0002f1c3) main_phacti_pane_g1

0xa182,	// (0x0002f1cb) phacti_note_pane_ParamLimits

0xa182,	// (0x0002f1cb) phacti_note_pane

0xe8f2,	// (0x0003393b) phacti_term_pane_ParamLimits

0xe8f2,	// (0x0003393b) phacti_term_pane

0xe907,	// (0x00033950) phacti_note_pane_t1_ParamLimits

0xe907,	// (0x00033950) phacti_note_pane_t1

0xe91e,	// (0x00033967) phacti_term_pane_g1

0xe926,	// (0x0003396f) phacti_term_pane_t1_ParamLimits

0xe926,	// (0x0003396f) phacti_term_pane_t1

0xe950,	// (0x00033999) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe958,	// (0x000339a1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00034e11) popup_sp_fs_calendar_preview_list_single_pane_g

0xe960,	// (0x000339a9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe960,	// (0x000339a9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe976,	// (0x000339bf) aid_popup_sp_fs_bg_corner_pane

0xc3e7,	// (0x00031430) popup_sp_fs_calendar_preview_bg_pane_g1

0x233a,	// (0x00027383) popup_sp_fs_calendar_preview_bg_pane

0xe97e,	// (0x000339c7) popup_sp_fs_calendar_preview_list_pane

0x25b6,	// (0x000275ff) bg_main_sp_fs_cale_pane_ParamLimits

0x25b6,	// (0x000275ff) bg_main_sp_fs_cale_pane

0xe98f,	// (0x000339d8) listscroll_cale_mrui_pane_ParamLimits

0xe98f,	// (0x000339d8) listscroll_cale_mrui_pane

0xe9a3,	// (0x000339ec) listscroll_sp_fs_schedule_track_pane

0xe9ac,	// (0x000339f5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9ac,	// (0x000339f5) main_sp_fs_ctrlbar_pane_cp01

0xe9bd,	// (0x00033a06) main_sp_fs_ribbon_pane

0xe9c5,	// (0x00033a0e) popup_sp_fs_cale_preview_window

0xa1dd,	// (0x0002f226) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa1dd,	// (0x0002f226) list_single_sp_fs_schedule_track_pane

0x25b6,	// (0x000275ff) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x25b6,	// (0x000275ff) bg_sp_fs_highlight_list_pane_cp03

0xa1f3,	// (0x0002f23c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa1f3,	// (0x0002f23c) list_single_sp_fs_schedule_track_pane_g1

0xa1ff,	// (0x0002f248) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa1ff,	// (0x0002f248) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00034e16) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00034e16) list_single_sp_fs_schedule_track_pane_g

0xa20b,	// (0x0002f254) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa20b,	// (0x0002f254) list_single_sp_fs_schedule_track_pane_t1

0xa225,	// (0x0002f26e) sp_fs_schedule_track_pane_ParamLimits

0xa225,	// (0x0002f26e) sp_fs_schedule_track_pane

0xe9d7,	// (0x00033a20) sp_fs_schedule_track_pane_g1

0xe9df,	// (0x00033a28) sp_fs_schedule_track_pane_g2

0xe9e7,	// (0x00033a30) sp_fs_schedule_track_pane_g3

0xe9ef,	// (0x00033a38) sp_fs_schedule_track_pane_g4

0xe9f7,	// (0x00033a40) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00034e1b) sp_fs_schedule_track_pane_g

0xd1b9,	// (0x00032202) bg_sp_fs_schedule_viewer_highlight_g1

0x3f77,	// (0x00028fc0) bg_sp_fs_schedule_viewer_highlight_g2

0xd1c1,	// (0x0003220a) bg_sp_fs_schedule_viewer_highlight_g3

0xd1c9,	// (0x00032212) bg_sp_fs_schedule_viewer_highlight_g4

0xd43a,	// (0x00032483) bg_sp_fs_schedule_viewer_highlight_g5

0xd1d9,	// (0x00032222) bg_sp_fs_schedule_viewer_highlight_g6

0xd1e1,	// (0x0003222a) bg_sp_fs_schedule_viewer_highlight_g7

0xd1e9,	// (0x00032232) bg_sp_fs_schedule_viewer_highlight_g8

0x3f57,	// (0x00028fa0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00034e26) bg_sp_fs_schedule_viewer_highlight_g

0x233a,	// (0x00027383) bg_main_sp_fs_ribbon_pane

0xa236,	// (0x0002f27f) main_sp_fs_ribbon_pane_g1

0xe9ff,	// (0x00033a48) main_sp_fs_ribbon_pane_t1

0xa23f,	// (0x0002f288) main_sp_fs_ribbon_pane_t2

0xea0e,	// (0x00033a57) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00034e39) main_sp_fs_ribbon_pane_t

0xea1d,	// (0x00033a66) main_sp_fs_ribbon_scheduler_pane

0xea25,	// (0x00033a6e) bg_main_sp_fs_ribbon_pane_g1

0xea2e,	// (0x00033a77) bg_main_sp_fs_ribbon_pane_g2

0xea37,	// (0x00033a80) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00034e40) bg_main_sp_fs_ribbon_pane_g

0xea3f,	// (0x00033a88) main_sp_fs_ribbon_scheduler_pane_g1

0xea48,	// (0x00033a91) main_sp_fs_ribbon_scheduler_pane_g2

0xea51,	// (0x00033a9a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00034e47) main_sp_fs_ribbon_scheduler_pane_g

0xea5a,	// (0x00033aa3) list_cale_mrui_pane

0xa24e,	// (0x0002f297) sp_fs_scroll_pane_cp07_ParamLimits

0xa24e,	// (0x0002f297) sp_fs_scroll_pane_cp07

0xa264,	// (0x0002f2ad) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa264,	// (0x0002f2ad) bg_sp_fs_schedule_viewer_highlight

0xea63,	// (0x00033aac) list_single_sp_fs_schedule_track_pane_cp01

0xea6b,	// (0x00033ab4) list_sp_fs_schedule_track_pane

0xea73,	// (0x00033abc) sp_fs_scroll_pane_cp06_ParamLimits

0xea73,	// (0x00033abc) sp_fs_scroll_pane_cp06

0xc3e7,	// (0x00031430) bgmain_sp_fs_calendar_pane_g1

0xa274,	// (0x0002f2bd) list_single_cale_mrui_pane_ParamLimits

0xa274,	// (0x0002f2bd) list_single_cale_mrui_pane

0xea85,	// (0x00033ace) list_single_cale_mrui_row_pane_ParamLimits

0xea85,	// (0x00033ace) list_single_cale_mrui_row_pane

0xea92,	// (0x00033adb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xea92,	// (0x00033adb) list_single_cale_mrui_row_pane_g1

0xeaca,	// (0x00033b13) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeaca,	// (0x00033b13) list_single_cale_mrui_row_pane_t1

0xa297,	// (0x0002f2e0) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa297,	// (0x0002f2e0) list_single_cale_mrui_row_pane_t2

0xeadc,	// (0x00033b25) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeadc,	// (0x00033b25) list_single_cale_mrui_row_pane_t3

0xeb0b,	// (0x00033b54) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb0b,	// (0x00033b54) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x00034e53) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x00034e53) list_single_cale_mrui_row_pane_t

0xa2ff,	// (0x0002f348) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa2ff,	// (0x0002f348) list_single_cmail_header_editor_pane_bg_cp01

0xa325,	// (0x0002f36e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa325,	// (0x0002f36e) list_single_cmail_header_editor_pane_bg_cp02

0xa345,	// (0x0002f38e) main_radioblah_text_pane_t1_ParamLimits

0xa345,	// (0x0002f38e) main_radioblah_text_pane_t1

0xeb3a,	// (0x00033b83) cam6_indi_pane_cp01

0xeb42,	// (0x00033b8b) cam6_mode_pane_cp01

0xeb4a,	// (0x00033b93) cam6_pano_pane

0xeb53,	// (0x00033b9c) cam6_zoom_pane_cp01

0xeb5b,	// (0x00033ba4) cam6_pano_image_pane

0xeb66,	// (0x00033baf) cam6_pano_pane_g1

0xe0bc,	// (0x00033105) cam6_pano_pane_g2

0xeb6f,	// (0x00033bb8) cam6_pano_pane_g3

0xeb78,	// (0x00033bc1) cam6_pano_pane_g4

0xc9a5,	// (0x000319ee) cam6_pano_pane_g5

0xeb81,	// (0x00033bca) cam6_pano_pane_g6

0xeb8b,	// (0x00033bd4) cam6_pano_pane_g7

0xeb93,	// (0x00033bdc) cam6_pano_pane_g8

0xeb9c,	// (0x00033be5) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x00034e5c) cam6_pano_pane_g

0x233a,	// (0x00027383) main_browser_tag_pane

0xe8d3,	// (0x0003391c) grid_navstr_albumart_pane

0xeba7,	// (0x00033bf0) cell_navstr_albumart_pane_ParamLimits

0xeba7,	// (0x00033bf0) cell_navstr_albumart_pane

0x5972,	// (0x0002a9bb) cell_navstr_albumart_pane_g1

0xbcfc,	// (0x00030d45) cell_navstr_albumart_pane_g2

0xbd0c,	// (0x00030d55) cell_navstr_albumart_pane_g3

0xbd04,	// (0x00030d4d) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x00034e6f) cell_navstr_albumart_pane_g

0xa360,	// (0x0002f3a9) bt_list_pane_ParamLimits

0xa360,	// (0x0002f3a9) bt_list_pane

0xa375,	// (0x0002f3be) bt_list_pane_t1

0xa384,	// (0x0002f3cd) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x00034e78) bt_list_pane_t

0x233a,	// (0x00027383) main_cale_prevew_pane

0xa393,	// (0x0002f3dc) popup_cale_preview_window_ParamLimits

0xa393,	// (0x0002f3dc) popup_cale_preview_window

0x25b6,	// (0x000275ff) bg_popup_preview_window_pane_cp05_ParamLimits

0x25b6,	// (0x000275ff) bg_popup_preview_window_pane_cp05

0xebc9,	// (0x00033c12) list_cale_preview_pane_ParamLimits

0xebc9,	// (0x00033c12) list_cale_preview_pane

0xa3a8,	// (0x0002f3f1) list_double_cale_preview_pane_ParamLimits

0xa3a8,	// (0x0002f3f1) list_double_cale_preview_pane

0xa3ba,	// (0x0002f403) list_single_cale_preview_pane_ParamLimits

0xa3ba,	// (0x0002f403) list_single_cale_preview_pane

0xa3ce,	// (0x0002f417) list_single_cale_preview_pane_g1

0xa3d6,	// (0x0002f41f) list_single_cale_preview_pane_t1_ParamLimits

0xa3d6,	// (0x0002f41f) list_single_cale_preview_pane_t1

0xa3eb,	// (0x0002f434) list_double_cale_preview_pane_g1

0xa3f3,	// (0x0002f43c) list_double_cale_preview_pane_t1_ParamLimits

0xa3f3,	// (0x0002f43c) list_double_cale_preview_pane_t1

0xa408,	// (0x0002f451) list_double_cale_preview_pane_t2_ParamLimits

0xa408,	// (0x0002f451) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x00034e7d) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x00034e7d) list_double_cale_preview_pane_t

0x233a,	// (0x00027383) main_ezdial_pane

0x25b6,	// (0x000275ff) main_sp_fs_email_pane_ParamLimits

0x9b3c,	// (0x0002eb85) cmail_ddmenu_btn01_pane_ParamLimits

0x9b3c,	// (0x0002eb85) cmail_ddmenu_btn01_pane

0x9b4f,	// (0x0002eb98) cmail_ddmenu_btn02_pane_ParamLimits

0x9b4f,	// (0x0002eb98) cmail_ddmenu_btn02_pane

0x9b72,	// (0x0002ebbb) cmail_ddmenu_btn03_pane_ParamLimits

0x9b72,	// (0x0002ebbb) cmail_ddmenu_btn03_pane

0x9b96,	// (0x0002ebdf) main_sp_fs_ctrlbar_pane_ParamLimits

0x9bba,	// (0x0002ec03) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa029,	// (0x0002f072) list_cmail_body_pane_ParamLimits

0xe7fa,	// (0x00033843) bg_button_pane_cp12

0xe80f,	// (0x00033858) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe80f,	// (0x00033858) list_single_cmail_header_detail_pane_g3

0xa0b1,	// (0x0002f0fa) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa0b1,	// (0x0002f0fa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00034e02) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00034e02) list_single_cmail_header_detail_pane_t

0xe93b,	// (0x00033984) phacti_term_pane_t2_ParamLimits

0xe93b,	// (0x00033984) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00034e0c) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00034e0c) phacti_term_pane_t

0xebd5,	// (0x00033c1e) aid_size_list_single_double

0xa420,	// (0x0002f469) popup_ezdial_listscroll_window

0xa43c,	// (0x0002f485) popup_number_entry_window_cp01

0x53d7,	// (0x0002a420) bg_popup_call_pane_cp09

0xebe1,	// (0x00033c2a) ezdial_list_pane

0xebe9,	// (0x00033c32) scroll_pane_cp23

0xbedf,	// (0x00030f28) bg_button_pane_cp028_ParamLimits

0xbedf,	// (0x00030f28) bg_button_pane_cp028

0xa44a,	// (0x0002f493) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa44a,	// (0x0002f493) cmail_ddmenu_btn01_pane_g1

0xa456,	// (0x0002f49f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa456,	// (0x0002f49f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x00034e82) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x00034e82) cmail_ddmenu_btn01_pane_g

0xebf1,	// (0x00033c3a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xebf1,	// (0x00033c3a) cmail_ddmenu_btn01_pane_t1

0xbedf,	// (0x00030f28) bg_button_pane_cp029_ParamLimits

0xbedf,	// (0x00030f28) bg_button_pane_cp029

0xa462,	// (0x0002f4ab) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa462,	// (0x0002f4ab) cmail_ddmenu_btn02_pane_g1

0xa47a,	// (0x0002f4c3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa47a,	// (0x0002f4c3) cmail_ddmenu_btn02_pane_t1

0x25b6,	// (0x000275ff) bg_button_pane_cp031_ParamLimits

0x25b6,	// (0x000275ff) bg_button_pane_cp031

0xa462,	// (0x0002f4ab) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa462,	// (0x0002f4ab) cmail_ddmenu_btn03_pane_g1

0xa47a,	// (0x0002f4c3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa47a,	// (0x0002f4c3) cmail_ddmenu_btn03_pane_t1

0x7fc1,	// (0x0002d00a) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fdb,	// (0x0002d024) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fdb,	// (0x0002d024) cell_dialer2_keypad_pane_t1_copy1

0x9466,	// (0x0002e4af) ncimui_group_button_pane

0x25b6,	// (0x000275ff) main_sp_fs_calendar_pane_ParamLimits

0xa041,	// (0x0002f08a) list_single_cmail_header_caption_pane_ParamLimits

0xe986,	// (0x000339cf) aid_recal_txt_sm_pane

0x233a,	// (0x00027383) mian_recal_day_pane

0xe9c5,	// (0x00033a0e) popup_sp_fs_cale_preview_window_ParamLimits

0x233a,	// (0x00027383) list_recal_day_pane

0xec28,	// (0x00033c71) list_single_recal_day_pane_ParamLimits

0xec28,	// (0x00033c71) list_single_recal_day_pane

0xec3a,	// (0x00033c83) list_single_recal_day_pane_g1_ParamLimits

0xec3a,	// (0x00033c83) list_single_recal_day_pane_g1

0xec46,	// (0x00033c8f) list_single_recal_day_pane_g2_ParamLimits

0xec46,	// (0x00033c8f) list_single_recal_day_pane_g2

0xec55,	// (0x00033c9e) list_single_recal_day_pane_g3_ParamLimits

0xec55,	// (0x00033c9e) list_single_recal_day_pane_g3

0xa49e,	// (0x0002f4e7) list_single_recal_day_pane_g4_ParamLimits

0xa49e,	// (0x0002f4e7) list_single_recal_day_pane_g4

0xec61,	// (0x00033caa) list_single_recal_day_pane_g5_ParamLimits

0xec61,	// (0x00033caa) list_single_recal_day_pane_g5

0xec70,	// (0x00033cb9) list_single_recal_day_pane_g6_ParamLimits

0xec70,	// (0x00033cb9) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x00034e91) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x00034e91) list_single_recal_day_pane_g

0xec7c,	// (0x00033cc5) list_single_recal_day_pane_t1

0xec8a,	// (0x00033cd3) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00034e9e) list_single_recal_day_pane_t

0xa4b1,	// (0x0002f4fa) ncimui_query_button_pane_ParamLimits

0xa4b1,	// (0x0002f4fa) ncimui_query_button_pane

0xa4c1,	// (0x0002f50a) ncimui_query_button_pane_t1_ParamLimits

0xa4c1,	// (0x0002f50a) ncimui_query_button_pane_t1

0xec98,	// (0x00033ce1) ncimui_query_button_pane_t2_ParamLimits

0xec98,	// (0x00033ce1) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00034ea3) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00034ea3) ncimui_query_button_pane_t

0xa4d4,	// (0x0002f51d) query_button_pane_ParamLimits

0xa4d4,	// (0x0002f51d) query_button_pane

0x233a,	// (0x00027383) bg_button_pane_cp0028

0xecab,	// (0x00033cf4) query_button_pane_t1

0x6749,	// (0x0002b792) main_tport_pane_ParamLimits

0x9f16,	// (0x0002ef5f) bg_popup_window_pane_cp01_ParamLimits

0x9f16,	// (0x0002ef5f) bg_popup_window_pane_cp01

0x9f30,	// (0x0002ef79) heading_pane_cp08_ParamLimits

0x9f30,	// (0x0002ef79) heading_pane_cp08

0x9f44,	// (0x0002ef8d) heading_pane_cp07_ParamLimits

0x9f44,	// (0x0002ef8d) heading_pane_cp07

0xe7bd,	// (0x00033806) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00034def) cell_tport_appsw_pane_g

0x596a,	// (0x0002a9b3) input_candi_list_open_g1

0x4993,	// (0x000299dc) list_cale_time_pane_g6_ParamLimits

0x4993,	// (0x000299dc) list_cale_time_pane_g6

0x7037,	// (0x0002c080) aid_size_touch_calib_1_ParamLimits

0x7037,	// (0x0002c080) aid_size_touch_calib_1

0x7043,	// (0x0002c08c) aid_size_touch_calib_2_ParamLimits

0x7043,	// (0x0002c08c) aid_size_touch_calib_2

0x7059,	// (0x0002c0a2) aid_size_touch_calib_3_ParamLimits

0x7059,	// (0x0002c0a2) aid_size_touch_calib_3

0x7077,	// (0x0002c0c0) aid_size_touch_calib_4_ParamLimits

0x7077,	// (0x0002c0c0) aid_size_touch_calib_4

0x708d,	// (0x0002c0d6) main_touch_calib_button_group_pane_ParamLimits

0x708d,	// (0x0002c0d6) main_touch_calib_button_group_pane

0x70a4,	// (0x0002c0ed) main_touch_calib_pane_g1_ParamLimits

0x70b0,	// (0x0002c0f9) main_touch_calib_pane_g2_ParamLimits

0x70bc,	// (0x0002c105) main_touch_calib_pane_g3_ParamLimits

0x70c8,	// (0x0002c111) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000347cd) main_touch_calib_pane_g_ParamLimits

0x70d4,	// (0x0002c11d) main_touch_calib_pane_t1_ParamLimits

0x70ee,	// (0x0002c137) main_touch_calib_pane_t2_ParamLimits

0x7108,	// (0x0002c151) main_touch_calib_pane_t3_ParamLimits

0x711c,	// (0x0002c165) main_touch_calib_pane_t4_ParamLimits

0x7130,	// (0x0002c179) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000347d6) main_touch_calib_pane_t_ParamLimits

0xc78c,	// (0x000317d5) list_single_fp_cale_pane_g3_ParamLimits

0xc78c,	// (0x000317d5) list_single_fp_cale_pane_g3

0xd1a1,	// (0x000321ea) bg_button_pane_cp012_ParamLimits

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp03_ParamLimits

0x222a,	// (0x00027273) cell_vitu2_function_top_pane_g1_ParamLimits

0xd1a1,	// (0x000321ea) bg_vkb2_func_pane_cp04_ParamLimits

0x941a,	// (0x0002e463) main_ncimui_button_group_pane_ParamLimits

0x941a,	// (0x0002e463) main_ncimui_button_group_pane

0x9454,	// (0x0002e49d) main_ncimui_pane_t3_ParamLimits

0x9454,	// (0x0002e49d) main_ncimui_pane_t3

0xe8e9,	// (0x00033932) phacti_button_group_pane

0xebd5,	// (0x00033c1e) aid_size_list_single_double_ParamLimits

0xa420,	// (0x0002f469) popup_ezdial_listscroll_window_ParamLimits

0xa43c,	// (0x0002f485) popup_number_entry_window_cp01_ParamLimits

0xa4e7,	// (0x0002f530) phacti_button_pane_ParamLimits

0xa4e7,	// (0x0002f530) phacti_button_pane

0x233a,	// (0x00027383) bg_button_pane_cp14

0xecb9,	// (0x00033d02) phacti_button_pane_t1

0xa4f8,	// (0x0002f541) main_touch_calib_button_pane_ParamLimits

0xa4f8,	// (0x0002f541) main_touch_calib_button_pane

0x2fc4,	// (0x0002800d) bg_button_pane_cp18_ParamLimits

0x2fc4,	// (0x0002800d) bg_button_pane_cp18

0xecc7,	// (0x00033d10) main_touch_calib_button_pane_t1_ParamLimits

0xecc7,	// (0x00033d10) main_touch_calib_button_pane_t1

0xecdd,	// (0x00033d26) main_touch_calib_button_pane_t2_ParamLimits

0xecdd,	// (0x00033d26) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x00034ea8) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x00034ea8) main_touch_calib_button_pane_t

0x233a,	// (0x00027383) cell_ncimui_button_pane

0x233a,	// (0x00027383) bg_button_pane_cp032

0xecfb,	// (0x00033d44) cell_ncimui_button_pane_t1

0xcf54,	// (0x00031f9d) image3_infobar_pane_ParamLimits

0xcf54,	// (0x00031f9d) image3_infobar_pane

0x97eb,	// (0x0002e834) fs_bigclock_status_pane_ParamLimits

0x97eb,	// (0x0002e834) fs_bigclock_status_pane

0x97f8,	// (0x0002e841) main_fs_bigclock_clock_pane_ParamLimits

0x97f8,	// (0x0002e841) main_fs_bigclock_clock_pane

0x980b,	// (0x0002e854) main_fs_bigclock_indi_pane_ParamLimits

0x980b,	// (0x0002e854) main_fs_bigclock_indi_pane

0x9823,	// (0x0002e86c) main_fs_bigclock_swipe_pane_ParamLimits

0x9823,	// (0x0002e86c) main_fs_bigclock_swipe_pane

0x233a,	// (0x00027383) main_fs_clock_dumped_data

0xe1c9,	// (0x00033212) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1c9,	// (0x00033212) list_single_fs_bigclock_indicator_pane_g1

0xe1e7,	// (0x00033230) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1e7,	// (0x00033230) list_single_fs_bigclock_indicator_pane_g2

0xe201,	// (0x0003324a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe201,	// (0x0003324a) list_single_fs_bigclock_indicator_pane_g3

0xe21b,	// (0x00033264) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe21b,	// (0x00033264) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00034ce0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00034ce0) list_single_fs_bigclock_indicator_pane_g

0xe241,	// (0x0003328a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe241,	// (0x0003328a) list_single_fs_bigclock_indicator_pane_t1

0xe269,	// (0x000332b2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe269,	// (0x000332b2) list_single_fs_bigclock_indicator_pane_t2

0xe291,	// (0x000332da) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe291,	// (0x000332da) list_single_fs_bigclock_indicator_pane_t3

0xe2b9,	// (0x00033302) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2b9,	// (0x00033302) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00034ceb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00034ceb) list_single_fs_bigclock_indicator_pane_t

0xed09,	// (0x00033d52) image3_infobar_fav_pane_ParamLimits

0xed09,	// (0x00033d52) image3_infobar_fav_pane

0xed19,	// (0x00033d62) image3_infobar_loc_pane_ParamLimits

0xed19,	// (0x00033d62) image3_infobar_loc_pane

0xed2d,	// (0x00033d76) image3_infobar_time_pane_ParamLimits

0xed2d,	// (0x00033d76) image3_infobar_time_pane

0xc3e7,	// (0x00031430) image3_infobar_time_pane_g1

0xed3d,	// (0x00033d86) image3_infobar_time_pane_t1

0xc3e7,	// (0x00031430) image3_infobar_loc_pane_g1

0xed4b,	// (0x00033d94) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00034ead) image3_infobar_loc_pane_g

0xed53,	// (0x00033d9c) image3_infobar_loc_pane_t1

0xc3e7,	// (0x00031430) image3_infobar_fav_pane_g1

0xed61,	// (0x00033daa) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00034eb2) image3_infobar_fav_pane_g

0xed69,	// (0x00033db2) fs_bigclock_status_battery_pane

0xed72,	// (0x00033dbb) fs_bigclock_status_signal_pane

0xed7b,	// (0x00033dc4) fs_bigclock_status_title_pane

0xed84,	// (0x00033dcd) fs_bigclock_status_signal_pane_g1

0xed8d,	// (0x00033dd6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x00034eb7) fs_bigclock_status_signal_pane_g

0xed95,	// (0x00033dde) fs_bigclock_status_battery_pane_g1

0xed9e,	// (0x00033de7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00034ebc) fs_bigclock_status_battery_pane_g

0xeda6,	// (0x00033def) fs_bigclock_status_title_pane_t1

0xc3e7,	// (0x00031430) main_fs_bigclock_clock_pane_g1

0xedb4,	// (0x00033dfd) main_fs_bigclock_clock_pane_g2

0xedb4,	// (0x00033dfd) main_fs_bigclock_clock_pane_g3

0xedb4,	// (0x00033dfd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00034ec1) main_fs_bigclock_clock_pane_g

0xedbc,	// (0x00033e05) main_fs_bigclock_clock_pane_t1

0xedca,	// (0x00033e13) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00034eca) main_fs_bigclock_clock_pane_t

0xedd9,	// (0x00033e22) list_single_fs_bigclock_indicator_pane_ParamLimits

0xedd9,	// (0x00033e22) list_single_fs_bigclock_indicator_pane

0xa50d,	// (0x0002f556) list_single_fs_bigclock_pane_ParamLimits

0xa50d,	// (0x0002f556) list_single_fs_bigclock_pane

0xedf3,	// (0x00033e3c) main_fs_bigclock_indicator_pane_t1

0xee02,	// (0x00033e4b) list_single_fs_bigclock_pane_g1

0xee0a,	// (0x00033e53) list_single_fs_bigclock_pane_t1

0xc3e7,	// (0x00031430) main_fs_bigclock_swipe_pane_g1

0xee48,	// (0x00033e91) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00034edb) main_fs_bigclock_swipe_pane_g

0xee50,	// (0x00033e99) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee50,	// (0x00033e99) main_fs_bigclock_swipe_pane_t1

0x4d4e,	// (0x00029d97) call_type_pane_ParamLimits

0x233a,	// (0x00027383) main_btmg_pane

0xeabe,	// (0x00033b07) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeabe,	// (0x00033b07) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x00034e4e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00034e4e) list_single_cale_mrui_row_pane_g

0xec0f,	// (0x00033c58) list_recal_vselct_arw_lo_pane

0xec17,	// (0x00033c60) list_recal_vselct_arw_up_pane

0xec1f,	// (0x00033c68) list_recal_vselct_pane

0xee6d,	// (0x00033eb6) btmg_button_pane

0xa573,	// (0x0002f5bc) main_btmg_pane_g1

0x233a,	// (0x00027383) bg_button_pane_cp044

0xee77,	// (0x00033ec0) btmg_button_pane_t1

0xbed7,	// (0x00030f20) aid_listscroll_gen

0x25b6,	// (0x000275ff) main_cntbar_detail_pane

0xe7db,	// (0x00033824) list_cmail_folder_pane

0xe7eb,	// (0x00033834) sp_fs_scroll_pane_cp03_ParamLimits

0xa041,	// (0x0002f08a) list_single_fs_dyc_pane_cp01_ParamLimits

0xa041,	// (0x0002f08a) list_single_fs_dyc_pane_cp01

0xee85,	// (0x00033ece) aid_size_cmail_indent

0xee8e,	// (0x00033ed7) list_single_dyc_row_pane_cp01

0xa5a9,	// (0x0002f5f2) cntbar_detail_list_pane_ParamLimits

0xa5a9,	// (0x0002f5f2) cntbar_detail_list_pane

0xa5f5,	// (0x0002f63e) main_cntbar_detail_cont_pane_ParamLimits

0xa5f5,	// (0x0002f63e) main_cntbar_detail_cont_pane

0x4b65,	// (0x00029bae) scroll_pane_cp032_ParamLimits

0x4b65,	// (0x00029bae) scroll_pane_cp032

0xa609,	// (0x0002f652) cntbar_detail_list_event_pane_ParamLimits

0xa609,	// (0x0002f652) cntbar_detail_list_event_pane

0xa5b9,	// (0x0002f602) cntbar_detail_list_shct_pane

0x3fcd,	// (0x00029016) aid_list_gen

0xee97,	// (0x00033ee0) aid_scroll

0xeea0,	// (0x00033ee9) aid_size_touch_scroll_bar

0x0235,	// (0x0002527e) aid_list_double

0xeea9,	// (0x00033ef2) aid_list_single

0xeeb2,	// (0x00033efb) aid_list_single_lg

0xeebb,	// (0x00033f04) aid_list_z_g_a_sm

0xeec3,	// (0x00033f0c) aid_list_z_g_d

0xeecb,	// (0x00033f14) aid_txt_z_prm

0xa619,	// (0x0002f662) aid_txt_z_prm_cp01

0xa627,	// (0x0002f670) aid_txt_z_sec

0xa635,	// (0x0002f67e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa635,	// (0x0002f67e) main_cntbar_detail_cont_pane_g1

0xa649,	// (0x0002f692) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa649,	// (0x0002f692) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00034ee0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00034ee0) main_cntbar_detail_cont_pane_g

0xeed9,	// (0x00033f22) main_cntbar_detail_cont_pane_t1

0xeee7,	// (0x00033f30) main_cntbar_detail_cont_pane_t2

0xeef5,	// (0x00033f3e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00034ee5) main_cntbar_detail_cont_pane_t

0xa659,	// (0x0002f6a2) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa659,	// (0x0002f6a2) cell_cntbar_detail_list_shct_pane

0xef03,	// (0x00033f4c) cntbar_detail_list_shct_pane_g1

0xef0c,	// (0x00033f55) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00034eec) cntbar_detail_list_shct_pane_g

0xa66d,	// (0x0002f6b6) cntbar_detail_list_event_pane_g1_ParamLimits

0xa66d,	// (0x0002f6b6) cntbar_detail_list_event_pane_g1

0xa679,	// (0x0002f6c2) cntbar_detail_list_event_pane_g2_ParamLimits

0xa679,	// (0x0002f6c2) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00034ef1) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00034ef1) cntbar_detail_list_event_pane_g

0xa6e5,	// (0x0002f72e) cntbar_detail_list_event_pane_t1_ParamLimits

0xa6e5,	// (0x0002f72e) cntbar_detail_list_event_pane_t1

0xa6fa,	// (0x0002f743) cntbar_detail_list_event_pane_t2_ParamLimits

0xa6fa,	// (0x0002f743) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00034efe) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00034efe) cntbar_detail_list_event_pane_t

0xc3e7,	// (0x00031430) cell_cntbar_detail_list_shct_pane_g1

0x5355,	// (0x0002a39e) navi_pane_mv_g3

0x25b6,	// (0x000275ff) main_cntbar_detail_pane_ParamLimits

0x233a,	// (0x00027383) main_notif_wgt_pane

0xccdc,	// (0x00031d25) aid_tch_main_mp4_pane_g4

0xcede,	// (0x00031f27) popup_slider_window_cp02

0xec06,	// (0x00033c4f) list_recal_day_event_pane

0xa57d,	// (0x0002f5c6) cntbar_detail_btn_pane_ParamLimits

0xa57d,	// (0x0002f5c6) cntbar_detail_btn_pane

0xa593,	// (0x0002f5dc) cntbar_detail_btn_pane_cp01_ParamLimits

0xa593,	// (0x0002f5dc) cntbar_detail_btn_pane_cp01

0xa5b9,	// (0x0002f602) cntbar_detail_list_shct_pane_ParamLimits

0xa5c9,	// (0x0002f612) cntbar_detail_pane_g1_ParamLimits

0xa5c9,	// (0x0002f612) cntbar_detail_pane_g1

0xa5d9,	// (0x0002f622) cntbar_detail_pane_t1_ParamLimits

0xa5d9,	// (0x0002f622) cntbar_detail_pane_t1

0xa685,	// (0x0002f6ce) cntbar_detail_list_event_pane_g3_ParamLimits

0xa685,	// (0x0002f6ce) cntbar_detail_list_event_pane_g3

0xa69d,	// (0x0002f6e6) cntbar_detail_list_event_pane_g4_ParamLimits

0xa69d,	// (0x0002f6e6) cntbar_detail_list_event_pane_g4

0xa6b5,	// (0x0002f6fe) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6b5,	// (0x0002f6fe) cntbar_detail_list_event_pane_g5

0xa6cd,	// (0x0002f716) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6cd,	// (0x0002f716) cntbar_detail_list_event_pane_g6

0xa70f,	// (0x0002f758) cntbar_detail_list_event_pane_t3_ParamLimits

0xa70f,	// (0x0002f758) cntbar_detail_list_event_pane_t3

0xa721,	// (0x0002f76a) popup_notif_wgt_window_ParamLimits

0xa721,	// (0x0002f76a) popup_notif_wgt_window

0xa73a,	// (0x0002f783) popup_submenu_window_cp01_ParamLimits

0xa73a,	// (0x0002f783) popup_submenu_window_cp01

0x53d7,	// (0x0002a420) bg_popup_window_pane_cp10

0xef15,	// (0x00033f5e) listscroll_notif_wgt_pane

0xef1f,	// (0x00033f68) list_notif_wgt_window

0xef28,	// (0x00033f71) scroll_pane_cp033

0xef31,	// (0x00033f7a) list_notif_wgt_row_pane_ParamLimits

0xef31,	// (0x00033f7a) list_notif_wgt_row_pane

0xef45,	// (0x00033f8e) aid_size_list_notif_wgt_del

0xef4e,	// (0x00033f97) list_notif_wgt_row_pane_g1

0xef56,	// (0x00033f9f) list_notif_wgt_row_pane_g2

0xef5e,	// (0x00033fa7) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00034f05) list_notif_wgt_row_pane_g

0xef67,	// (0x00033fb0) list_notif_wgt_row_pane_t1

0xef75,	// (0x00033fbe) list_notif_wgt_row_pane_t2

0xef83,	// (0x00033fcc) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00034f0c) list_notif_wgt_row_pane_t

0xd494,	// (0x000324dd) list_recal_day_event_pane_g1

0xef91,	// (0x00033fda) list_recal_day_event_pane_t1

0x233a,	// (0x00027383) bg_button_pane_cp045

0xefa0,	// (0x00033fe9) cntbar_detail_btn_pane_t1

0xbedf,	// (0x00030f28) main_callh_pane_ParamLimits

0xbedf,	// (0x00030f28) main_callh_pane

0x233a,	// (0x00027383) main_coverflow0_pane

0x233a,	// (0x00027383) main_wgtman_pane

0x9831,	// (0x0002e87a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9831,	// (0x0002e87a) main_fs_bigclock_unlock_btn_pane

0xe7b5,	// (0x000337fe) bg_button_pane_cp16

0xe7c5,	// (0x0003380e) cell_tport_appsw_pane_g3

0xa74c,	// (0x0002f795) cf0_flow_pane_ParamLimits

0xa74c,	// (0x0002f795) cf0_flow_pane

0xefae,	// (0x00033ff7) listscroll_cf0_pane

0xefb7,	// (0x00034000) main_cf0_pane_g1

0xa761,	// (0x0002f7aa) main_cf0_pane_t1_ParamLimits

0xa761,	// (0x0002f7aa) main_cf0_pane_t1

0xa779,	// (0x0002f7c2) main_cf0_pane_t2_ParamLimits

0xa779,	// (0x0002f7c2) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x00034f13) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x00034f13) main_cf0_pane_t

0xefc1,	// (0x0003400a) scroll_pane_cp11

0xa791,	// (0x0002f7da) cf0_flow_pane_g1

0xa799,	// (0x0002f7e2) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x00034f18) cf0_flow_pane_g

0xa7a1,	// (0x0002f7ea) cf0_flow_pane_t1

0x233a,	// (0x00027383) main_call6_pane

0x233a,	// (0x00027383) main_calllock_pane

0xa7af,	// (0x0002f7f8) call6_btn_grp_pane_ParamLimits

0xa7af,	// (0x0002f7f8) call6_btn_grp_pane

0xa7c9,	// (0x0002f812) call6_pane_g1_ParamLimits

0xa7c9,	// (0x0002f812) call6_pane_g1

0xa7de,	// (0x0002f827) popup_call6_1st_window_ParamLimits

0xa7de,	// (0x0002f827) popup_call6_1st_window

0xa7ef,	// (0x0002f838) popup_call6_2nd_window_ParamLimits

0xa7ef,	// (0x0002f838) popup_call6_2nd_window

0xa800,	// (0x0002f849) cell_call6_btn_pane_ParamLimits

0xa800,	// (0x0002f849) cell_call6_btn_pane

0x53d7,	// (0x0002a420) bg_popup_call2_in_pane_cp03

0xefcc,	// (0x00034015) popup_call6_1st_window_g1

0xefd4,	// (0x0003401d) popup_call6_1st_window_g2

0xefdc,	// (0x00034025) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x00034f1d) popup_call6_1st_window_g

0xefe4,	// (0x0003402d) popup_call6_1st_window_t1

0xeff3,	// (0x0003403c) popup_call6_1st_window_t2

0xf003,	// (0x0003404c) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x00034f24) popup_call6_1st_window_t

0x53d7,	// (0x0002a420) bg_popup_call2_in_pane_cp04

0xefcc,	// (0x00034015) popup_call6_2nd_window_g1

0xefd4,	// (0x0003401d) popup_call6_2nd_window_g2

0xefdc,	// (0x00034025) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x00034f1d) popup_call6_2nd_window_g

0xefe4,	// (0x0003402d) popup_call6_2nd_window_t1

0x233a,	// (0x00027383) bg_button_pane_cp15

0xf013,	// (0x0003405c) cell_call6_btn_pane_g1

0xf01c,	// (0x00034065) cell_call6_btn_pane_t1

0xa814,	// (0x0002f85d) listscroll_wgtman_pane_ParamLimits

0xa814,	// (0x0002f85d) listscroll_wgtman_pane

0xa837,	// (0x0002f880) wgtman_btn_pane_ParamLimits

0xa837,	// (0x0002f880) wgtman_btn_pane

0x4f9e,	// (0x00029fe7) aid_scroll_copy1

0xf02b,	// (0x00034074) list_wgtman_pane

0xa87a,	// (0x0002f8c3) wgtman_btn_pane_g1_ParamLimits

0xa87a,	// (0x0002f8c3) wgtman_btn_pane_g1

0xa8a6,	// (0x0002f8ef) wgtman_btn_pane_t1_ParamLimits

0xa8a6,	// (0x0002f8ef) wgtman_btn_pane_t1

0xf035,	// (0x0003407e) wgtman_btn_pane_t2_ParamLimits

0xf035,	// (0x0003407e) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x00034f2b) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x00034f2b) wgtman_btn_pane_t

0xa8e3,	// (0x0002f92c) listrow_wgtman_pane_ParamLimits

0xa8e3,	// (0x0002f92c) listrow_wgtman_pane

0xa8f6,	// (0x0002f93f) listrow_wgtman_pane_g1

0xa8ff,	// (0x0002f948) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x00034f30) listrow_wgtman_pane_g

0xa909,	// (0x0002f952) listrow_wgtman_pane_t1

0xa917,	// (0x0002f960) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x00034f35) listrow_wgtman_pane_t

0xa925,	// (0x0002f96e) wait_bar_pane_cp09

0xf04c,	// (0x00034095) main_calllock_btn_pane

0xf056,	// (0x0003409f) main_calllock_pane_g1

0x233a,	// (0x00027383) bg_button_pane_cp17

0xf061,	// (0x000340aa) main_calllock_btn_pane_g1

0xf06a,	// (0x000340b3) main_calllock_btn_pane_t1

0x233a,	// (0x00027383) main_dialer3_pane

0x233a,	// (0x00027383) main_fmrd2_pane

0xc3e7,	// (0x00031430) main_fs_bigclock_unlock_btn_pane_g1

0xf081,	// (0x000340ca) main_fs_bigclock_unlock_btn_pane_t1

0xa92d,	// (0x0002f976) area_fmrd2_info_pane_ParamLimits

0xa92d,	// (0x0002f976) area_fmrd2_info_pane

0xa93e,	// (0x0002f987) area_fmrd2_visual_pane_ParamLimits

0xa93e,	// (0x0002f987) area_fmrd2_visual_pane

0xa94c,	// (0x0002f995) fmrd2_indi_pane_ParamLimits

0xa94c,	// (0x0002f995) fmrd2_indi_pane

0xa959,	// (0x0002f9a2) area_fmrd2_visual_pane_g1

0xa961,	// (0x0002f9aa) area_fmrd2_visual_pane_t1

0xa971,	// (0x0002f9ba) area_fmrd2_visual_pane_t2

0xa981,	// (0x0002f9ca) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x00034f3f) area_fmrd2_visual_pane_t

0xa991,	// (0x0002f9da) area_fmrd2_info_pane_g1

0xa999,	// (0x0002f9e2) area_fmrd2_info_pane_t1

0xa9a9,	// (0x0002f9f2) area_fmrd2_info_pane_t2

0xa9b9,	// (0x0002fa02) area_fmrd2_info_pane_t3

0xa9c9,	// (0x0002fa12) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x00034f46) area_fmrd2_info_pane_t

0xa9d7,	// (0x0002fa20) fmrd2_indi_pane_t1

0xa9e7,	// (0x0002fa30) fmrd2_indi_pane_t2

0xa9f7,	// (0x0002fa40) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x00034f4f) fmrd2_indi_pane_t

0xe22a,	// (0x00033273) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe22a,	// (0x00033273) list_single_fs_bigclock_indicator_pane_g5

0xe2ce,	// (0x00033317) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2ce,	// (0x00033317) list_single_fs_bigclock_indicator_pane_t5

0xa196,	// (0x0002f1df) aid_cell_bcale_month_pane_ParamLimits

0xa196,	// (0x0002f1df) aid_cell_bcale_month_pane

0xa1a8,	// (0x0002f1f1) bcale_month_pane_ParamLimits

0xa1a8,	// (0x0002f1f1) bcale_month_pane

0xa1c2,	// (0x0002f20b) bcale_preview_pane_ParamLimits

0xa1c2,	// (0x0002f20b) bcale_preview_pane

0xee0a,	// (0x00033e53) list_single_fs_bigclock_pane_t1_ParamLimits

0xee24,	// (0x00033e6d) list_single_fs_bigclock_pane_t2_ParamLimits

0xee24,	// (0x00033e6d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x00034ed6) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x00034ed6) list_single_fs_bigclock_pane_t

0xf079,	// (0x000340c2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x00034f3a) main_fs_bigclock_unlock_btn_pane_g

0xaa07,	// (0x0002fa50) aid_dia3_key_size_ParamLimits

0xaa07,	// (0x0002fa50) aid_dia3_key_size

0xaa16,	// (0x0002fa5f) aid_dia3_listrow_size_ParamLimits

0xaa16,	// (0x0002fa5f) aid_dia3_listrow_size

0xaa2b,	// (0x0002fa74) dia3_keypad_fun_pane_ParamLimits

0xaa2b,	// (0x0002fa74) dia3_keypad_fun_pane

0xaa47,	// (0x0002fa90) dia3_keypad_num_pane_ParamLimits

0xaa47,	// (0x0002fa90) dia3_keypad_num_pane

0xaa62,	// (0x0002faab) dia3_listscroll_pane_ParamLimits

0xaa62,	// (0x0002faab) dia3_listscroll_pane

0xaa75,	// (0x0002fabe) dia3_numentry_pane_ParamLimits

0xaa75,	// (0x0002fabe) dia3_numentry_pane

0xf08f,	// (0x000340d8) dia3_list_pane

0xf09a,	// (0x000340e3) scroll_pane_cp12

0x233a,	// (0x00027383) bg_dia3_numentry_pane

0xaa89,	// (0x0002fad2) dia3_numentry_pane_t1

0xaa98,	// (0x0002fae1) cell_dia3_key_num_pane

0xaaa0,	// (0x0002fae9) cell_dia3_key0_fun_pane_ParamLimits

0xaaa0,	// (0x0002fae9) cell_dia3_key0_fun_pane

0xaab4,	// (0x0002fafd) cell_dia3_key1_fun_pane_ParamLimits

0xaab4,	// (0x0002fafd) cell_dia3_key1_fun_pane

0xaacc,	// (0x0002fb15) dia3_listrow_pane

0xdf48,	// (0x00032f91) bg_dia3_numentry_pane_g1

0x233a,	// (0x00027383) bg_button_pane_cp21

0xf0a5,	// (0x000340ee) cell_dia3_key_num_pane_t1

0xf0b3,	// (0x000340fc) cell_dia3_key_num_pane_t2

0xf0c2,	// (0x0003410b) cell_dia3_key_num_pane_t3

0xf0d1,	// (0x0003411a) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x00034f56) cell_dia3_key_num_pane_t

0x233a,	// (0x00027383) bg_button_pane_cp19

0xaade,	// (0x0002fb27) cell_dia3_key0_fun_pane_g1

0x233a,	// (0x00027383) bg_button_pane_cp20

0xaae6,	// (0x0002fb2f) cell_dia3_key1_fun_pane_g1

0xaaee,	// (0x0002fb37) area_left_week_number_pane

0xaaf7,	// (0x0002fb40) area_top_day_name_pane

0xab00,	// (0x0002fb49) frame_month_view_pane

0xab0c,	// (0x0002fb55) grid_month_view_pane

0xab16,	// (0x0002fb5f) cell_top_day_name_pane_ParamLimits

0xab16,	// (0x0002fb5f) cell_top_day_name_pane

0xab2e,	// (0x0002fb77) cell_area_left_week_number_pane_ParamLimits

0xab2e,	// (0x0002fb77) cell_area_left_week_number_pane

0xab42,	// (0x0002fb8b) cell_month_view_pane_ParamLimits

0xab42,	// (0x0002fb8b) cell_month_view_pane

0xf0e0,	// (0x00034129) frm_month_g1

0xab5d,	// (0x0002fba6) frm_month_g2

0xab67,	// (0x0002fbb0) frm_month_g3

0xab71,	// (0x0002fbba) frm_month_g4

0xab7b,	// (0x0002fbc4) frm_month_g5

0xab85,	// (0x0002fbce) frm_month_g6

0xab8f,	// (0x0002fbd8) frm_month_g7

0xf0e9,	// (0x00034132) frm_month_g8

0xab9b,	// (0x0002fbe4) frm_month_g9

0xaba4,	// (0x0002fbed) frm_month_g10

0xabad,	// (0x0002fbf6) frm_month_g11

0xabb6,	// (0x0002fbff) frm_month_g12

0xabbf,	// (0x0002fc08) frm_month_g13

0xabc8,	// (0x0002fc11) frm_month_g14

0xf0f2,	// (0x0003413b) frm_month_g15

0xabd1,	// (0x0002fc1a) frm_month_g16

0x000f,

0xff16,	// (0x00034f5f) frm_month_g

0xabdc,	// (0x0002fc25) cell_top_day_name_pane_t1

0xabeb,	// (0x0002fc34) cell_area_left_week_number_pane_g1

0xabdc,	// (0x0002fc25) cell_area_left_week_number_pane_t1

0xc3e7,	// (0x00031430) cell_month_view_pane_g1

0xabf3,	// (0x0002fc3c) cell_month_view_pane_t1

0x233a,	// (0x00027383) main_fps_pane

0xe541,	// (0x0003358a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe541,	// (0x0003358a) cmail_ddmenu_btn02_pane_cp1

0xe55d,	// (0x000335a6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe55d,	// (0x000335a6) cmail_ddmenu_btn02_pane_cp2

0xa46e,	// (0x0002f4b7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa46e,	// (0x0002f4b7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x00034e87) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x00034e87) cmail_ddmenu_btn02_pane_g

0xa48c,	// (0x0002f4d5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa48c,	// (0x0002f4d5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x00034e8c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x00034e8c) cmail_ddmenu_btn02_pane_t

0xac02,	// (0x0002fc4b) fps_text_pane_ParamLimits

0xac02,	// (0x0002fc4b) fps_text_pane

0xac19,	// (0x0002fc62) main_fps_pane_g1_ParamLimits

0xac19,	// (0x0002fc62) main_fps_pane_g1

0xac33,	// (0x0002fc7c) wait_bar_pane_cp010_ParamLimits

0xac33,	// (0x0002fc7c) wait_bar_pane_cp010

0xac44,	// (0x0002fc8d) fps_text_pane_t1_ParamLimits

0xac44,	// (0x0002fc8d) fps_text_pane_t1

0x812e,	// (0x0002d177) cam4_image_uncrop_pane_g1

0x8137,	// (0x0002d180) cam4_image_uncrop_pane_g2

0x8140,	// (0x0002d189) cam4_image_uncrop_pane_g3

0x8149,	// (0x0002d192) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00034965) cam4_image_uncrop_pane_g

0xaacc,	// (0x0002fb15) dia3_listrow_pane_ParamLimits

0x233a,	// (0x00027383) main_phob2_pane

0x9faf,	// (0x0002eff8) cell_tport_appsw_pane_cp02_ParamLimits

0x9faf,	// (0x0002eff8) cell_tport_appsw_pane_cp02

0x9fc3,	// (0x0002f00c) cell_tport_appsw_pane_cp03_ParamLimits

0x9fc3,	// (0x0002f00c) cell_tport_appsw_pane_cp03

0x233a,	// (0x00027383) phob2_contact_card_pane

0x233a,	// (0x00027383) phob2_listscroll_pane

0x0005,	// (0x0002504e) phob2_list_pane

0x000d,	// (0x00025056) scroll_pane_cp034

0xac5c,	// (0x0002fca5) phob2_cc_data_pane_ParamLimits

0xac5c,	// (0x0002fca5) phob2_cc_data_pane

0xac7b,	// (0x0002fcc4) phob2_cc_listscroll_pane_ParamLimits

0xac7b,	// (0x0002fcc4) phob2_cc_listscroll_pane

0xd1f1,	// (0x0003223a) list_double_large_graphic_phob2_pane_ParamLimits

0xd1f1,	// (0x0003223a) list_double_large_graphic_phob2_pane

0xac99,	// (0x0002fce2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xac99,	// (0x0002fce2) list_double_large_graphic_phob2_pane_g1

0xaca6,	// (0x0002fcef) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaca6,	// (0x0002fcef) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00034f80) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00034f80) list_double_large_graphic_phob2_pane_g

0xacb2,	// (0x0002fcfb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xacb2,	// (0x0002fcfb) list_double_large_graphic_phob2_pane_t1

0xacc7,	// (0x0002fd10) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xacc7,	// (0x0002fd10) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00034f85) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00034f85) list_double_large_graphic_phob2_pane_t

0x233a,	// (0x00027383) list_highlight_pane_cp024

0x00ac,	// (0x000250f5) phob2_cc_button_pane

0xacd9,	// (0x0002fd22) phob2_cc_data_pane_g1_ParamLimits

0xacd9,	// (0x0002fd22) phob2_cc_data_pane_g1

0xacee,	// (0x0002fd37) phob2_cc_data_pane_g2_ParamLimits

0xacee,	// (0x0002fd37) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x00034f8a) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x00034f8a) phob2_cc_data_pane_g

0xad00,	// (0x0002fd49) phob2_cc_data_pane_t1_ParamLimits

0xad00,	// (0x0002fd49) phob2_cc_data_pane_t1

0xad18,	// (0x0002fd61) phob2_cc_data_pane_t2_ParamLimits

0xad18,	// (0x0002fd61) phob2_cc_data_pane_t2

0xad30,	// (0x0002fd79) phob2_cc_data_pane_t3_ParamLimits

0xad30,	// (0x0002fd79) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00034f8f) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00034f8f) phob2_cc_data_pane_t

0x0102,	// (0x0002514b) phob2_cc_list_pane_ParamLimits

0x0102,	// (0x0002514b) phob2_cc_list_pane

0x010e,	// (0x00025157) scroll_pane_cp035_ParamLimits

0x010e,	// (0x00025157) scroll_pane_cp035

0x25b6,	// (0x000275ff) bg_button_pane_cp033

0x011a,	// (0x00025163) phob2_cc_button_pane_g1

0x0126,	// (0x0002516f) phob2_cc_button_pane_t1

0x013b,	// (0x00025184) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x00034f96) phob2_cc_button_pane_t

0xad4a,	// (0x0002fd93) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad4a,	// (0x0002fd93) list_double_large_graphic_phob2_cc_pane

0xad5e,	// (0x0002fda7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xad5e,	// (0x0002fda7) list_double_large_graphic_phob2_cc_pane_g1

0xad6a,	// (0x0002fdb3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad6a,	// (0x0002fdb3) list_double_large_graphic_phob2_cc_pane_g2

0xad76,	// (0x0002fdbf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xad76,	// (0x0002fdbf) list_double_large_graphic_phob2_cc_pane_g3

0xad82,	// (0x0002fdcb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xad82,	// (0x0002fdcb) list_double_large_graphic_phob2_cc_pane_g4

0xad8e,	// (0x0002fdd7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xad8e,	// (0x0002fdd7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x00034f9b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x00034f9b) list_double_large_graphic_phob2_cc_pane_g

0xad9a,	// (0x0002fde3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xad9a,	// (0x0002fde3) list_double_large_graphic_phob2_cc_pane_t1

0xadc3,	// (0x0002fe0c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xadc3,	// (0x0002fe0c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x00034fa6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x00034fa6) list_double_large_graphic_phob2_cc_pane_t

0x021e,	// (0x00025267) list_highlight_pane_cp025_ParamLimits

0x021e,	// (0x00025267) list_highlight_pane_cp025

0x25b6,	// (0x000275ff) bg_button_pane_cp033_ParamLimits

0x011a,	// (0x00025163) phob2_cc_button_pane_g1_ParamLimits

0x0126,	// (0x0002516f) phob2_cc_button_pane_t1_ParamLimits

0x013b,	// (0x00025184) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x00034f96) phob2_cc_button_pane_t_ParamLimits

0x25c4,	// (0x0002760d) popup_wgtman_window

0xd2d3,	// (0x0003231c) scroll_pane_cp038

0xa85c,	// (0x0002f8a5) wgtman_btn_pane_cp_01_ParamLimits

0xa85c,	// (0x0002f8a5) wgtman_btn_pane_cp_01

0x022c,	// (0x00025275) wgtman_content_pane

0x0235,	// (0x0002527e) wgtman_heading_pane

0x233a,	// (0x00027383) bg_heading_pane_cp02

0x023e,	// (0x00025287) wgtman_heading_pane_g1

0x0246,	// (0x0002528f) wgtman_heading_pane_t1

0x0254,	// (0x0002529d) scroll_pane_cp036

0x025c,	// (0x000252a5) wgtman_list_pane

0x0264,	// (0x000252ad) wgtman_list_pane_t1_ParamLimits

0x0264,	// (0x000252ad) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
