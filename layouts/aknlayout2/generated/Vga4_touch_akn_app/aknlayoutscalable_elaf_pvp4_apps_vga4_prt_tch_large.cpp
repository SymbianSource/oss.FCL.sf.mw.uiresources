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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000667d0 };

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
0x6e3b,	// (0x0006d60b) Screen

0x6e47,	// (0x0006d617) application_window

0x6ea5,	// (0x0006d675) area_bottom_pane_ParamLimits

0x6ea5,	// (0x0006d675) area_bottom_pane

0x6eff,	// (0x0006d6cf) area_top_pane_ParamLimits

0x6eff,	// (0x0006d6cf) area_top_pane

0x6f63,	// (0x0006d733) call_video_uplink_pane_ParamLimits

0x6f63,	// (0x0006d733) call_video_uplink_pane

0x6fa0,	// (0x0006d770) main_pane_ParamLimits

0x6fa0,	// (0x0006d770) main_pane

0x1e54,	// (0x00068624) context_pane

0xa1ac,	// (0x0007097c) navi_pane

0xa1d0,	// (0x000709a0) popup_cale_events_window_ParamLimits

0xa1d0,	// (0x000709a0) popup_cale_events_window

0x1e67,	// (0x00068637) popup_mup_playback_window

0xa1e8,	// (0x000709b8) signal_pane

0xef3a,	// (0x0007570a) main_browser_pane

0x0996,	// (0x00067166) main_burst_pane

0xa050,	// (0x00070820) main_calc_pane

0x0996,	// (0x00067166) main_cale_day_pane

0xef3a,	// (0x0007570a) main_cale_month_pane

0x0996,	// (0x00067166) main_cale_week_pane

0x0996,	// (0x00067166) main_call_pane

0xec0c,	// (0x000753dc) main_call_poc_pane

0x0996,	// (0x00067166) main_camera_pane

0x0996,	// (0x00067166) main_chi_dic_pane

0x0838,	// (0x00067008) main_clock_pane

0xec0c,	// (0x000753dc) main_fmradio_pane

0x0996,	// (0x00067166) main_graph_messa_pane

0xec0c,	// (0x000753dc) main_help_pane

0xef3a,	// (0x0007570a) main_im_pane

0xee67,	// (0x00075637) main_image_pane_ParamLimits

0xee67,	// (0x00075637) main_image_pane

0xec0c,	// (0x000753dc) main_location2_pane

0x0996,	// (0x00067166) main_location_pane

0xec0c,	// (0x000753dc) main_messa_pane

0xec0c,	// (0x000753dc) main_mp2_pane

0x0996,	// (0x00067166) main_mp_pane

0xec0c,	// (0x000753dc) main_msg_pane

0xec0c,	// (0x000753dc) main_mup_eq_pane

0xec0c,	// (0x000753dc) main_mup_pane

0xef3a,	// (0x0007570a) main_notes_pane

0xec0c,	// (0x000753dc) main_pec_pane

0xec0c,	// (0x000753dc) main_phob_pane

0xec0c,	// (0x000753dc) main_pinb_pane

0xec0c,	// (0x000753dc) main_postcard_pane

0xec0c,	// (0x000753dc) main_qdial_pane

0x0996,	// (0x00067166) main_skin_pane

0xec0c,	// (0x000753dc) main_smil2_pane

0x0996,	// (0x00067166) main_smil_pane

0x0996,	// (0x00067166) main_video_pane

0x0996,	// (0x00067166) main_video_tele_pane

0xee67,	// (0x00075637) main_viewer_pane_ParamLimits

0xee67,	// (0x00075637) main_viewer_pane

0x0996,	// (0x00067166) main_vorec_pane

0xa096,	// (0x00070866) popup_blid_sat_info_window_ParamLimits

0xa096,	// (0x00070866) popup_blid_sat_info_window

0xa0b0,	// (0x00070880) popup_dyc_status_message_window_ParamLimits

0xa0b0,	// (0x00070880) popup_dyc_status_message_window

0xa0c0,	// (0x00070890) popup_grid_large_graphic_window_ParamLimits

0xa0c0,	// (0x00070890) popup_grid_large_graphic_window

0xa138,	// (0x00070908) popup_loc_request_window_ParamLimits

0xa138,	// (0x00070908) popup_loc_request_window

0xa180,	// (0x00070950) popup_wml_address_window_ParamLimits

0xa180,	// (0x00070950) popup_wml_address_window

0x9f28,	// (0x000706f8) call_muted_g1

0x9be7,	// (0x000703b7) popup_call_audio_conf_window_ParamLimits

0x9be7,	// (0x000703b7) popup_call_audio_conf_window

0x9f38,	// (0x00070708) popup_call_audio_first_window_ParamLimits

0x9f38,	// (0x00070708) popup_call_audio_first_window

0x9f78,	// (0x00070748) popup_call_audio_in_window_ParamLimits

0x9f78,	// (0x00070748) popup_call_audio_in_window

0x9f9c,	// (0x0007076c) popup_call_audio_out_window_ParamLimits

0x9f9c,	// (0x0007076c) popup_call_audio_out_window

0x9fbe,	// (0x0007078e) popup_call_audio_second_window_ParamLimits

0x9fbe,	// (0x0007078e) popup_call_audio_second_window

0x9fee,	// (0x000707be) popup_call_audio_wait_window_ParamLimits

0x9fee,	// (0x000707be) popup_call_audio_wait_window

0xa00f,	// (0x000707df) popup_number_entry_window_ParamLimits

0xa00f,	// (0x000707df) popup_number_entry_window

0x7171,	// (0x0006d941) bg_popup_call_pane_cp05_ParamLimits

0x7171,	// (0x0006d941) bg_popup_call_pane_cp05

0x7191,	// (0x0006d961) popup_number_entry_window_t1

0x71a4,	// (0x0006d974) popup_number_entry_window_t2

0x71b6,	// (0x0006d986) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x000758b7) popup_number_entry_window_t

0x71fd,	// (0x0006d9cd) text_title_cp2

0x7210,	// (0x0006d9e0) bg_popup_call_pane_cp_ParamLimits

0x7210,	// (0x0006d9e0) bg_popup_call_pane_cp

0x721e,	// (0x0006d9ee) call_thumbnail_pane

0x7226,	// (0x0006d9f6) popup_call_audio_in_window_g1_ParamLimits

0x7226,	// (0x0006d9f6) popup_call_audio_in_window_g1

0x7232,	// (0x0006da02) popup_call_audio_in_window_g2_ParamLimits

0x7232,	// (0x0006da02) popup_call_audio_in_window_g2

0x723e,	// (0x0006da0e) popup_call_audio_in_window_g3_ParamLimits

0x723e,	// (0x0006da0e) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x000758c0) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x000758c0) popup_call_audio_in_window_g

0x724a,	// (0x0006da1a) popup_call_audio_in_window_t1_ParamLimits

0x724a,	// (0x0006da1a) popup_call_audio_in_window_t1

0x7266,	// (0x0006da36) popup_call_audio_in_window_t2_ParamLimits

0x7266,	// (0x0006da36) popup_call_audio_in_window_t2

0x7282,	// (0x0006da52) popup_call_audio_in_window_t3_ParamLimits

0x7282,	// (0x0006da52) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x000758c7) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x000758c7) popup_call_audio_in_window_t

0x7210,	// (0x0006d9e0) bg_popup_call_pane_cp01_ParamLimits

0x7210,	// (0x0006d9e0) bg_popup_call_pane_cp01

0x721e,	// (0x0006d9ee) call_thumbnail_pane_cp02

0x7295,	// (0x0006da65) call_type_pane_cp022

0x729d,	// (0x0006da6d) popup_call_audio_out_window_g1_ParamLimits

0x729d,	// (0x0006da6d) popup_call_audio_out_window_g1

0x72af,	// (0x0006da7f) popup_call_audio_out_window_g2_ParamLimits

0x72af,	// (0x0006da7f) popup_call_audio_out_window_g2

0x72bb,	// (0x0006da8b) popup_call_audio_out_window_g3_ParamLimits

0x72bb,	// (0x0006da8b) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x000758ce) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x000758ce) popup_call_audio_out_window_g

0x72cd,	// (0x0006da9d) popup_call_audio_out_window_t1_ParamLimits

0x72cd,	// (0x0006da9d) popup_call_audio_out_window_t1

0x72e5,	// (0x0006dab5) popup_call_audio_out_window_t2_ParamLimits

0x72e5,	// (0x0006dab5) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x000758d5) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x000758d5) popup_call_audio_out_window_t

0x72fa,	// (0x0006daca) bg_popup_call_pane_ParamLimits

0x72fa,	// (0x0006daca) bg_popup_call_pane

0x737e,	// (0x0006db4e) call_thumbnail_pane_cp_ParamLimits

0x737e,	// (0x0006db4e) call_thumbnail_pane_cp

0xe9b1,	// (0x00075181) call_type_pane_cp01_ParamLimits

0xe9b1,	// (0x00075181) call_type_pane_cp01

0xe9f5,	// (0x000751c5) popup_call_audio_first_window_g1_ParamLimits

0xe9f5,	// (0x000751c5) popup_call_audio_first_window_g1

0xea41,	// (0x00075211) popup_call_audio_first_window_g2_ParamLimits

0xea41,	// (0x00075211) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x000758da) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x000758da) popup_call_audio_first_window_g

0xeaa5,	// (0x00075275) popup_call_audio_first_window_t1_ParamLimits

0xeaa5,	// (0x00075275) popup_call_audio_first_window_t1

0xeb51,	// (0x00075321) popup_call_audio_first_window_t4_ParamLimits

0xeb51,	// (0x00075321) popup_call_audio_first_window_t4

0xebdd,	// (0x000753ad) popup_call_audio_first_window_t5_ParamLimits

0xebdd,	// (0x000753ad) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x000758df) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x000758df) popup_call_audio_first_window_t

0xec0c,	// (0x000753dc) bg_popup_call_pane_cp02

0xec16,	// (0x000753e6) call_type_pane_cp023

0xec1e,	// (0x000753ee) popup_call_audio_wait_window_g1

0xec26,	// (0x000753f6) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x000758e6) popup_call_audio_wait_window_g

0xec2e,	// (0x000753fe) popup_call_audio_wait_window_t3

0xec3c,	// (0x0007540c) bg_popup_call_pane_cp03_ParamLimits

0xec3c,	// (0x0007540c) bg_popup_call_pane_cp03

0xec9c,	// (0x0007546c) call_thumbnail_pane_cp011_ParamLimits

0xec9c,	// (0x0007546c) call_thumbnail_pane_cp011

0xeca8,	// (0x00075478) call_type_pane_cp034_ParamLimits

0xeca8,	// (0x00075478) call_type_pane_cp034

0xece4,	// (0x000754b4) popup_call_audio_second_window_g1_ParamLimits

0xece4,	// (0x000754b4) popup_call_audio_second_window_g1

0xed20,	// (0x000754f0) popup_call_audio_second_window_g2_ParamLimits

0xed20,	// (0x000754f0) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x000758eb) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x000758eb) popup_call_audio_second_window_g

0xed5c,	// (0x0007552c) popup_call_audio_second_window_t1_ParamLimits

0xed5c,	// (0x0007552c) popup_call_audio_second_window_t1

0xeddd,	// (0x000755ad) popup_call_audio_second_window_t2_ParamLimits

0xeddd,	// (0x000755ad) popup_call_audio_second_window_t2

0xee13,	// (0x000755e3) popup_call_audio_second_window_t3_ParamLimits

0xee13,	// (0x000755e3) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x000758f0) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x000758f0) popup_call_audio_second_window_t

0xec0c,	// (0x000753dc) bg_popup_call_pane_cp04

0xee49,	// (0x00075619) list_conf_pane

0xee51,	// (0x00075621) popup_call_audio_conf_window_t1

0xee5f,	// (0x0007562f) call_thumbnail_pane_g1

0xee67,	// (0x00075637) bg_pinb_pane_ParamLimits

0xee67,	// (0x00075637) bg_pinb_pane

0xee75,	// (0x00075645) find_pinb_pane

0xee7e,	// (0x0007564e) listscroll_pinb_pane_ParamLimits

0xee7e,	// (0x0007564e) listscroll_pinb_pane

0xee8d,	// (0x0007565d) pinb_bg_pane_g1

0x73a2,	// (0x0006db72) pinb_bg_pane_g2

0x73ae,	// (0x0006db7e) pinb_bg_pane_g3

0x73ba,	// (0x0006db8a) pinb_bg_pane_g4

0x73c6,	// (0x0006db96) pinb_bg_pane_g5

0x73d2,	// (0x0006dba2) pinb_bg_pane_g6

0x73dd,	// (0x0006dbad) pinb_bg_pane_g7

0x73e8,	// (0x0006dbb8) pinb_bg_pane_g8

0x73f3,	// (0x0006dbc3) pinb_bg_pane_g9

0x73fd,	// (0x0006dbcd) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x000758f7) pinb_bg_pane_g

0x741a,	// (0x0006dbea) grid_pinb_pane

0x7425,	// (0x0006dbf5) list_pinb_pane

0x7430,	// (0x0006dc00) scroll_pane_cp01_ParamLimits

0x7430,	// (0x0006dc00) scroll_pane_cp01

0xee97,	// (0x00075667) find_pinb_pane_g1_ParamLimits

0xee97,	// (0x00075667) find_pinb_pane_g1

0xeeaf,	// (0x0007567f) find_pinb_pane_t1

0xeec1,	// (0x00075691) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00075911) find_pinb_pane_t

0xeed6,	// (0x000756a6) input_focus_pane_cp01_ParamLimits

0xeed6,	// (0x000756a6) input_focus_pane_cp01

0x7442,	// (0x0006dc12) cell_pinb_pane_ParamLimits

0x7442,	// (0x0006dc12) cell_pinb_pane

0x7460,	// (0x0006dc30) cell_pinb_pane_g1_ParamLimits

0x7460,	// (0x0006dc30) cell_pinb_pane_g1

0x7475,	// (0x0006dc45) cell_pinb_pane_g2_ParamLimits

0x7475,	// (0x0006dc45) cell_pinb_pane_g2

0xeee2,	// (0x000756b2) cell_pinb_pane_g3_ParamLimits

0xeee2,	// (0x000756b2) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00075916) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00075916) cell_pinb_pane_g

0xec0c,	// (0x000753dc) grid_highlight_pane_cp01

0x7481,	// (0x0006dc51) list_pinb_item_pane_ParamLimits

0x7481,	// (0x0006dc51) list_pinb_item_pane

0xec0c,	// (0x000753dc) list_highlight_pane_cp02

0x749c,	// (0x0006dc6c) list_pinb_item_pane_g1_ParamLimits

0x749c,	// (0x0006dc6c) list_pinb_item_pane_g1

0x74a9,	// (0x0006dc79) list_pinb_item_pane_g2_ParamLimits

0x74a9,	// (0x0006dc79) list_pinb_item_pane_g2

0x74b5,	// (0x0006dc85) list_pinb_item_pane_g3_ParamLimits

0x74b5,	// (0x0006dc85) list_pinb_item_pane_g3

0x74c6,	// (0x0006dc96) list_pinb_item_pane_g4_ParamLimits

0x74c6,	// (0x0006dc96) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0007591d) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0007591d) list_pinb_item_pane_g

0x74d2,	// (0x0006dca2) list_pinb_item_pane_t1_ParamLimits

0x74d2,	// (0x0006dca2) list_pinb_item_pane_t1

0x7503,	// (0x0006dcd3) calc_display_pane

0x7521,	// (0x0006dcf1) calc_paper_pane

0x753d,	// (0x0006dd0d) grid_calc_pane

0xec0c,	// (0x000753dc) bg_list_pane_cp01

0x7569,	// (0x0006dd39) clock_g1

0x7571,	// (0x0006dd41) clock_g2

0x0001,

0xf156,	// (0x00075926) clock_g

0x757b,	// (0x0006dd4b) clock_t1_ParamLimits

0x757b,	// (0x0006dd4b) clock_t1

0x7590,	// (0x0006dd60) clock_t2_ParamLimits

0x7590,	// (0x0006dd60) clock_t2

0x75a2,	// (0x0006dd72) clock_t3_ParamLimits

0x75a2,	// (0x0006dd72) clock_t3

0x75b4,	// (0x0006dd84) clock_t4_ParamLimits

0x75b4,	// (0x0006dd84) clock_t4

0x75c6,	// (0x0006dd96) clock_t5_ParamLimits

0x75c6,	// (0x0006dd96) clock_t5

0x75db,	// (0x0006ddab) clock_t6_ParamLimits

0x75db,	// (0x0006ddab) clock_t6

0x75ed,	// (0x0006ddbd) clock_t7_ParamLimits

0x75ed,	// (0x0006ddbd) clock_t7

0x75ff,	// (0x0006ddcf) clock_t8_ParamLimits

0x75ff,	// (0x0006ddcf) clock_t8

0x7615,	// (0x0006dde5) clock_t9_ParamLimits

0x7615,	// (0x0006dde5) clock_t9

0x0008,

0xf15b,	// (0x0007592b) clock_t_ParamLimits

0xf15b,	// (0x0007592b) clock_t

0xeeee,	// (0x000756be) popup_clock_analogue_window_cp02

0xeeee,	// (0x000756be) popup_clock_digital_window_cp01

0xeef6,	// (0x000756c6) listscroll_help_pane

0xec0c,	// (0x000753dc) phob_pre_status_pane

0xef00,	// (0x000756d0) grid_qdial_pane

0xec0c,	// (0x000753dc) listscroll_mce_pane

0xef0a,	// (0x000756da) bg_notes_pane

0xef18,	// (0x000756e8) list_notes_pane

0x762b,	// (0x0006ddfb) scroll_pane_cp06

0xef26,	// (0x000756f6) bg_calc_paper_pane

0x763a,	// (0x0006de0a) list_calc_pane

0xef3a,	// (0x0007570a) bg_calc_display_pane

0x7654,	// (0x0006de24) calc_display_pane_t1

0x7669,	// (0x0006de39) calc_display_pane_t2

0x767e,	// (0x0006de4e) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0007593e) calc_display_pane_t

0x7690,	// (0x0006de60) cell_calc_pane_ParamLimits

0x7690,	// (0x0006de60) cell_calc_pane

0xef46,	// (0x00075716) bg_calc_paper_pane_g1

0xef52,	// (0x00075722) bg_calc_paper_pane_g2

0xef5e,	// (0x0007572e) bg_calc_paper_pane_g3

0xef6a,	// (0x0007573a) bg_calc_paper_pane_g4

0xef76,	// (0x00075746) bg_calc_paper_pane_g5

0x76bf,	// (0x0006de8f) bg_calc_paper_pane_g6

0x76d0,	// (0x0006dea0) bg_calc_paper_pane_g7

0x76e1,	// (0x0006deb1) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00075945) bg_calc_paper_pane_g

0x76f4,	// (0x0006dec4) calc_bg_paper_pane_g9

0x7707,	// (0x0006ded7) list_calc_item_pane_ParamLimits

0x7707,	// (0x0006ded7) list_calc_item_pane

0xef82,	// (0x00075752) list_calc_item_pane_g1

0x7728,	// (0x0006def8) list_calc_item_pane_t1_ParamLimits

0x7728,	// (0x0006def8) list_calc_item_pane_t1

0x773a,	// (0x0006df0a) list_calc_item_pane_t2_ParamLimits

0x773a,	// (0x0006df0a) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00075956) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00075956) list_calc_item_pane_t

0xef8f,	// (0x0007575f) cell_calc_pane_g1

0xef99,	// (0x00075769) grid_highlight_pane_cp02

0xefbb,	// (0x0007578b) bg_calc_display_pane_g1

0x776a,	// (0x0006df3a) bg_calc_display_pane_g2

0xefc4,	// (0x00075794) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00075960) bg_calc_display_pane_g

0x7774,	// (0x0006df44) cell_qdial_pane_ParamLimits

0x7774,	// (0x0006df44) cell_qdial_pane

0x778a,	// (0x0006df5a) cell_qdial_pane_g1_ParamLimits

0x778a,	// (0x0006df5a) cell_qdial_pane_g1

0x7797,	// (0x0006df67) cell_qdial_pane_g2_ParamLimits

0x7797,	// (0x0006df67) cell_qdial_pane_g2

0xefcd,	// (0x0007579d) cell_qdial_pane_g3_ParamLimits

0xefcd,	// (0x0007579d) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00075967) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00075967) cell_qdial_pane_g

0x77b5,	// (0x0006df85) cell_qdial_pane_t1_ParamLimits

0x77b5,	// (0x0006df85) cell_qdial_pane_t1

0x77cd,	// (0x0006df9d) cell_qdial_pane_t2_ParamLimits

0x77cd,	// (0x0006df9d) cell_qdial_pane_t2

0x77e0,	// (0x0006dfb0) cell_qdial_pane_t3_ParamLimits

0x77e0,	// (0x0006dfb0) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00075970) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00075970) cell_qdial_pane_t

0xec0c,	// (0x000753dc) grid_highlight_pane_cp04

0xefd9,	// (0x000757a9) thumbnail_qdial_pane_ParamLimits

0xefd9,	// (0x000757a9) thumbnail_qdial_pane

0xf035,	// (0x00075805) list_help_pane

0xf03e,	// (0x0007580e) scroll_pane_cp02

0x77f3,	// (0x0006dfc3) help_list_pane_t1_ParamLimits

0x77f3,	// (0x0006dfc3) help_list_pane_t1

0x781a,	// (0x0006dfea) bg_notes_pane_g2

0x7822,	// (0x0006dff2) bg_notes_pane_g3

0x782a,	// (0x0006dffa) notes_bg_pane_g1

0x7832,	// (0x0006e002) notes_bg_pane_g4

0x783a,	// (0x0006e00a) notes_bg_pane_g5

0x7842,	// (0x0006e012) notes_bg_pane_g6

0x784a,	// (0x0006e01a) notes_bg_pane_g7

0x7852,	// (0x0006e022) notes_bg_pane_g8

0x785a,	// (0x0006e02a) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0007598e) notes_bg_pane_g

0x7862,	// (0x0006e032) list_notes_text_pane_ParamLimits

0x7862,	// (0x0006e032) list_notes_text_pane

0xf047,	// (0x00075817) list_notes_text_pane_g1

0x5cc5,	// (0x0006c495) list_notes_text_pane_t1

0xef3a,	// (0x0007570a) listscroll_cale_week_pane

0x78a1,	// (0x0006e071) bg_cale_heading_pane

0xf061,	// (0x00075831) bg_cale_pane_cp01

0x78bd,	// (0x0006e08d) cale_week_corner_pane

0x78d3,	// (0x0006e0a3) cale_week_day_heading_pane

0x78ef,	// (0x0006e0bf) cale_week_scroll_pane_g1

0x7908,	// (0x0006e0d8) cale_week_scroll_pane_g2

0x7919,	// (0x0006e0e9) cale_week_scroll_pane_g3

0x792a,	// (0x0006e0fa) cale_week_scroll_pane_g4

0x793b,	// (0x0006e10b) cale_week_scroll_pane_g5

0x794c,	// (0x0006e11c) cale_week_scroll_pane_g6

0x795f,	// (0x0006e12f) cale_week_scroll_pane_g7

0x7972,	// (0x0006e142) cale_week_scroll_pane_g8

0x7985,	// (0x0006e155) cale_week_scroll_pane_g9

0x7996,	// (0x0006e166) cale_week_scroll_pane_g10

0x79a7,	// (0x0006e177) cale_week_scroll_pane_g11

0x79b8,	// (0x0006e188) cale_week_scroll_pane_g12

0x79c9,	// (0x0006e199) cale_week_scroll_pane_g13

0x79da,	// (0x0006e1aa) cale_week_scroll_pane_g14

0x79f3,	// (0x0006e1c3) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0007599d) cale_week_scroll_pane_g

0x7a0c,	// (0x0006e1dc) cale_week_time_pane

0x7a1f,	// (0x0006e1ef) grid_cale_week_pane

0x7a3c,	// (0x0006e20c) scroll_pane_cp08

0x7a56,	// (0x0006e226) cell_cale_week_pane_ParamLimits

0x7a56,	// (0x0006e226) cell_cale_week_pane

0x7a98,	// (0x0006e268) cale_week_day_heading_pane_t1

0x7ac5,	// (0x0006e295) cale_week_day_heading_pane_t2

0x7af2,	// (0x0006e2c2) cale_week_day_heading_pane_t3

0x7b1f,	// (0x0006e2ef) cale_week_day_heading_pane_t4

0x7b4c,	// (0x0006e31c) cale_week_day_heading_pane_t5

0x7b79,	// (0x0006e349) cale_week_day_heading_pane_t6

0x7ba6,	// (0x0006e376) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x000759bc) cale_week_day_heading_pane_t

0xf08c,	// (0x0007585c) bg_cale_side_pane

0x7bd3,	// (0x0006e3a3) cale_week_time_pane_t1

0x7beb,	// (0x0006e3bb) cale_week_time_pane_t2

0x7c03,	// (0x0006e3d3) cale_week_time_pane_t3

0x7c1b,	// (0x0006e3eb) cale_week_time_pane_t4

0x7c33,	// (0x0006e403) cale_week_time_pane_t5

0x7c4b,	// (0x0006e41b) cale_week_time_pane_t6

0x7c63,	// (0x0006e433) cale_week_time_pane_t7

0x7c7b,	// (0x0006e44b) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x000759cb) cale_week_time_pane_t

0x7c97,	// (0x0006e467) cell_cale_week_pane_g2

0x7cb0,	// (0x0006e480) cell_cale_week_pane_g3_ParamLimits

0x7cb0,	// (0x0006e480) cell_cale_week_pane_g3

0xf09a,	// (0x0007586a) grid_highlight_pane_cp07

0xf0a2,	// (0x00075872) listscroll_gms_pane

0xf0ac,	// (0x0007587c) grid_gms_pane

0xf0b5,	// (0x00075885) listscroll_gms_pane_g1

0xf0bd,	// (0x0007588d) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x000759dc) listscroll_gms_pane_g

0x7cc8,	// (0x0006e498) scroll_pane_cp010

0x7cd3,	// (0x0006e4a3) cell_gms_pane_ParamLimits

0x7cd3,	// (0x0006e4a3) cell_gms_pane

0x7ce6,	// (0x0006e4b6) cell_gms_pane_g1

0xf0c5,	// (0x00075895) cell_gms_pane_g2

0xf0cd,	// (0x0007589d) cell_gms_pane_g3

0xf0d6,	// (0x000758a6) cell_gms_pane_g4

0x0003,

0xf211,	// (0x000759e1) cell_gms_pane_g

0xf0df,	// (0x000758af) grid_highlight_pane_cp09

0x9ed0,	// (0x000706a0) phob_pre_status_pane_g1

0x9ed8,	// (0x000706a8) phob_pre_status_pane_g2

0x9ee0,	// (0x000706b0) phob_pre_status_pane_g3

0x9ee8,	// (0x000706b8) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00075dd0) phob_pre_status_pane_g

0x9ef8,	// (0x000706c8) phob_pre_status_pane_t1

0x9f08,	// (0x000706d8) phob_pre_status_pane_t2

0x9f18,	// (0x000706e8) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00075ddb) phob_pre_status_pane_t

0xec0c,	// (0x000753dc) bg_list_pane_cp05

0x7cf6,	// (0x0006e4c6) grid_vorec_pane

0x7d00,	// (0x0006e4d0) vorec_t1

0x7d0e,	// (0x0006e4de) vorec_t2

0x7d1c,	// (0x0006e4ec) vorec_t3

0x7d2a,	// (0x0006e4fa) vorec_t4

0x7d38,	// (0x0006e508) vorec_t5

0x7d46,	// (0x0006e516) vorec_t6

0x0006,

0xf21a,	// (0x000759ea) vorec_t

0x7d62,	// (0x0006e532) wait_bar_pane_cp01

0x7d6a,	// (0x0006e53a) cell_vorec_pane_ParamLimits

0x7d6a,	// (0x0006e53a) cell_vorec_pane

0x0052,	// (0x00066822) cell_vorec_pane_g1

0xec0c,	// (0x000753dc) grid_highlight_pane_cp05

0x7d8d,	// (0x0006e55d) cams_zoom_pane

0x7d99,	// (0x0006e569) image_vga_pane

0x7da8,	// (0x0006e578) main_camera_pane_g1

0x7db6,	// (0x0006e586) main_camera_pane_g2

0x7dc2,	// (0x0006e592) main_camera_pane_g3

0x7dd0,	// (0x0006e5a0) main_camera_pane_g4

0x7dde,	// (0x0006e5ae) main_camera_pane_g5

0x7dec,	// (0x0006e5bc) main_camera_pane_g6

0x7dfa,	// (0x0006e5ca) main_camera_pane_g7

0x0007,

0xf229,	// (0x000759f9) main_camera_pane_g

0x7e08,	// (0x0006e5d8) main_camera_pane_t1

0x7e1a,	// (0x0006e5ea) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00075a0a) main_camera_pane_t

0x7e3d,	// (0x0006e60d) cams_zoom_pane_cp_ParamLimits

0x7e3d,	// (0x0006e60d) cams_zoom_pane_cp

0x7e61,	// (0x0006e631) image_cif_pane_ParamLimits

0x7e61,	// (0x0006e631) image_cif_pane

0x7e7f,	// (0x0006e64f) image_subqcif_pane

0x7e89,	// (0x0006e659) main_video_pane_g1_ParamLimits

0x7e89,	// (0x0006e659) main_video_pane_g1

0x7ea9,	// (0x0006e679) main_video_pane_g2_ParamLimits

0x7ea9,	// (0x0006e679) main_video_pane_g2

0x7ed9,	// (0x0006e6a9) main_video_pane_g3_ParamLimits

0x7ed9,	// (0x0006e6a9) main_video_pane_g3

0x7f02,	// (0x0006e6d2) main_video_pane_g4_ParamLimits

0x7f02,	// (0x0006e6d2) main_video_pane_g4

0x7f2b,	// (0x0006e6fb) main_video_pane_g5_ParamLimits

0x7f2b,	// (0x0006e6fb) main_video_pane_g5

0x0068,	// (0x00066838) main_video_pane_g6_ParamLimits

0x0068,	// (0x00066838) main_video_pane_g6

0x0006,

0xf23f,	// (0x00075a0f) main_video_pane_g_ParamLimits

0xf23f,	// (0x00075a0f) main_video_pane_g

0x7f4d,	// (0x0006e71d) main_video_pane_t1_ParamLimits

0x7f4d,	// (0x0006e71d) main_video_pane_t1

0x0082,	// (0x00066852) cams_zoom_pane_g1

0x008b,	// (0x0006685b) cams_zoom_pane_g2

0x0094,	// (0x00066864) cams_zoom_pane_g3

0x009d,	// (0x0006686d) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00075a1e) cams_zoom_pane_g

0x7f97,	// (0x0006e767) grid_cams_pane

0x7fa5,	// (0x0006e775) linegrid_cams_pane

0x7fb1,	// (0x0006e781) cell_cams_pane_ParamLimits

0x7fb1,	// (0x0006e781) cell_cams_pane

0x00a6,	// (0x00066876) cams_burst_image_pane

0x00ae,	// (0x0006687e) cell_cams_pane_g1

0xec0c,	// (0x000753dc) grid_highlight_pane_cp03

0xef8f,	// (0x0007575f) mp_bg_pane_g1

0xec0c,	// (0x000753dc) bg_list_pane_cp03

0x1d26,	// (0x000684f6) bg_mp_pane

0x1d2e,	// (0x000684fe) grid_mp_pane

0x1d36,	// (0x00068506) media_player_g1

0x1d40,	// (0x00068510) media_player_t1

0x1d4e,	// (0x0006851e) media_player_t2

0x1d5c,	// (0x0006852c) media_player_t3

0x1d6a,	// (0x0006853a) media_player_t4

0x1d78,	// (0x00068548) media_player_t5

0x1d86,	// (0x00068556) media_player_t6

0x1d94,	// (0x00068564) media_player_t7

0x0006,

0xf5ea,	// (0x00075dba) media_player_t

0x1da2,	// (0x00068572) wait_bar_pane_cp02

0xf5cf,	// (0x00075d9f) main_usb_pane_t

0x9ec7,	// (0x00070697) cell_mp_pane

0xef8f,	// (0x0007575f) cell_mp_pane_g1

0xec0c,	// (0x000753dc) grid_highlight_pane_cp06

0x00b6,	// (0x00066886) grid_skin_colour_pane

0x00be,	// (0x0006688e) list_highlight_pane_cp03

0x7fc6,	// (0x0006e796) skin_g1

0x00c6,	// (0x00066896) skin_t1

0x00d5,	// (0x000668a5) skin_t2

0x0001,

0xf283,	// (0x00075a53) skin_t

0x7fd0,	// (0x0006e7a0) cell_skin_colour_pane_ParamLimits

0x7fd0,	// (0x0006e7a0) cell_skin_colour_pane

0x00e3,	// (0x000668b3) cell_skin_colour_pane_g1

0x8050,	// (0x0006e820) call_video_g1_ParamLimits

0x8050,	// (0x0006e820) call_video_g1

0x8060,	// (0x0006e830) call_video_g2_ParamLimits

0x8060,	// (0x0006e830) call_video_g2

0x0001,

0xf288,	// (0x00075a58) call_video_g_ParamLimits

0xf288,	// (0x00075a58) call_video_g

0x80b0,	// (0x0006e880) call_video_uplink_pane_cp1_ParamLimits

0x80b0,	// (0x0006e880) call_video_uplink_pane_cp1

0x00f5,	// (0x000668c5) call_video_uplink_pane_cp2

0x817e,	// (0x0006e94e) video_down_crop_pane_ParamLimits

0x817e,	// (0x0006e94e) video_down_crop_pane

0x8270,	// (0x0006ea40) video_down_pane_ParamLimits

0x8270,	// (0x0006ea40) video_down_pane

0x00fd,	// (0x000668cd) video_down_subqcif_pane_ParamLimits

0x00fd,	// (0x000668cd) video_down_subqcif_pane

0x0117,	// (0x000668e7) video_down_subqcif_pane_cp_ParamLimits

0x0117,	// (0x000668e7) video_down_subqcif_pane_cp

0x013f,	// (0x0006690f) im_reading_pane_ParamLimits

0x013f,	// (0x0006690f) im_reading_pane

0x838d,	// (0x0006eb5d) im_writing_pane_ParamLimits

0x838d,	// (0x0006eb5d) im_writing_pane

0x83ab,	// (0x0006eb7b) im_reading_pane_t1

0x0159,	// (0x00066929) list_im_pane

0x016a,	// (0x0006693a) scroll_pane_cp07

0x83ed,	// (0x0006ebbd) im_writing_pane_t1_ParamLimits

0x83ed,	// (0x0006ebbd) im_writing_pane_t1

0x0183,	// (0x00066953) im_writing_pane_t2_ParamLimits

0x0183,	// (0x00066953) im_writing_pane_t2

0x0001,

0xf292,	// (0x00075a62) im_writing_pane_t_ParamLimits

0xf292,	// (0x00075a62) im_writing_pane_t

0xec0c,	// (0x000753dc) input_focus_pane_cp04

0xec0c,	// (0x000753dc) input_focus_pane_cp05

0x83ff,	// (0x0006ebcf) list_im_single_pane_ParamLimits

0x83ff,	// (0x0006ebcf) list_im_single_pane

0x8418,	// (0x0006ebe8) list_single_im_pane_t1

0x9e8b,	// (0x0007065b) blid_accuracy_pane

0x9e93,	// (0x00070663) blid_compass_pane

0x9e9d,	// (0x0007066d) main_location_t1

0x9eab,	// (0x0007067b) main_location_t2

0x9eb9,	// (0x00070689) main_location_t3

0x0002,

0xf5f9,	// (0x00075dc9) main_location_t

0xec0c,	// (0x000753dc) aid_levels_location

0xef8f,	// (0x0007575f) blid_accuracy_pane_g1

0xef8f,	// (0x0007575f) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00075ac4) blid_accuracy_pane_g

0x01cb,	// (0x0006699b) wml_content_pane

0x0209,	// (0x000669d9) wml_button_pane_ParamLimits

0x0209,	// (0x000669d9) wml_button_pane

0x8427,	// (0x0006ebf7) wml_list_single_large_pane_ParamLimits

0x8427,	// (0x0006ebf7) wml_list_single_large_pane

0x8449,	// (0x0006ec19) wml_list_single_medium_pane_ParamLimits

0x8449,	// (0x0006ec19) wml_list_single_medium_pane

0x846c,	// (0x0006ec3c) wml_list_single_small_pane_ParamLimits

0x846c,	// (0x0006ec3c) wml_list_single_small_pane

0x021d,	// (0x000669ed) wml_selection_box_pane_ParamLimits

0x021d,	// (0x000669ed) wml_selection_box_pane

0x0230,	// (0x00066a00) wml_list_single_pane_t1

0x023f,	// (0x00066a0f) wml_list_single_medium_pane_t1

0x024e,	// (0x00066a1e) wml_list_single_large_pane_t1

0x025d,	// (0x00066a2d) input_focus_pane_cp02_ParamLimits

0x025d,	// (0x00066a2d) input_focus_pane_cp02

0x0270,	// (0x00066a40) wml_selection_box_pane_g1

0x0279,	// (0x00066a49) wml_selection_box_pane_t1_ParamLimits

0x0279,	// (0x00066a49) wml_selection_box_pane_t1

0xee67,	// (0x00075637) bg_wml_button_pane_ParamLimits

0xee67,	// (0x00075637) bg_wml_button_pane

0x0291,	// (0x00066a61) wml_button_pane_g1

0x0299,	// (0x00066a69) wml_button_pane_t1

0x0291,	// (0x00066a61) wml_button_bg_pane_g1

0x02a9,	// (0x00066a79) wml_button_bg_pane_g2

0x02b1,	// (0x00066a81) wml_button_bg_pane_g3

0x02b9,	// (0x00066a89) wml_button_bg_pane_g4

0x02c1,	// (0x00066a91) wml_button_bg_pane_g5

0x02c9,	// (0x00066a99) wml_button_bg_pane_g6

0x02d1,	// (0x00066aa1) wml_button_bg_pane_g7

0x02d9,	// (0x00066aa9) wml_button_bg_pane_g8

0x02e1,	// (0x00066ab1) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00075a67) wml_button_bg_pane_g

0x8494,	// (0x0006ec64) bg_list_pane_cp02

0x02e9,	// (0x00066ab9) mce_header_pane_ParamLimits

0x02e9,	// (0x00066ab9) mce_header_pane

0x02ff,	// (0x00066acf) mce_icon_pane

0x02ff,	// (0x00066acf) mce_image_pane

0x0308,	// (0x00066ad8) mce_text_pane_ParamLimits

0x0308,	// (0x00066ad8) mce_text_pane

0x849e,	// (0x0006ec6e) scroll_pane_cp03

0x0201,	// (0x000669d1) scroll_pane_cp04

0x031b,	// (0x00066aeb) scroll_pane_cp05_ParamLimits

0x031b,	// (0x00066aeb) scroll_pane_cp05

0x84a8,	// (0x0006ec78) mce_header_field_pane_ParamLimits

0x84a8,	// (0x0006ec78) mce_header_field_pane

0x84ca,	// (0x0006ec9a) mce_header_field_pane_2_ParamLimits

0x84ca,	// (0x0006ec9a) mce_header_field_pane_2

0x84e0,	// (0x0006ecb0) mce_header_field_pane_3

0x84e8,	// (0x0006ecb8) list_single_mce_message_pane_ParamLimits

0x84e8,	// (0x0006ecb8) list_single_mce_message_pane

0x8501,	// (0x0006ecd1) list_single_mce_smart_pane_ParamLimits

0x8501,	// (0x0006ecd1) list_single_mce_smart_pane

0x0327,	// (0x00066af7) input_focus_pane_cp03

0x0330,	// (0x00066b00) list_header_data_pane

0x8525,	// (0x0006ecf5) mce_header_field_pane_t1

0x8535,	// (0x0006ed05) list_single_mce_header_pane_ParamLimits

0x8535,	// (0x0006ed05) list_single_mce_header_pane

0x0338,	// (0x00066b08) list_single_mce_header_pane_t1

0x0347,	// (0x00066b17) list_single_mce_message_pane_g1

0x034f,	// (0x00066b1f) list_single_mce_message_pane_t1

0x856b,	// (0x0006ed3b) bg_cale_heading_pane_cp01_ParamLimits

0x856b,	// (0x0006ed3b) bg_cale_heading_pane_cp01

0x035d,	// (0x00066b2d) bg_cale_pane_cp02_ParamLimits

0x035d,	// (0x00066b2d) bg_cale_pane_cp02

0x859e,	// (0x0006ed6e) cale_month_corner_pane

0x85b4,	// (0x0006ed84) cale_month_day_heading_pane_ParamLimits

0x85b4,	// (0x0006ed84) cale_month_day_heading_pane

0x85f7,	// (0x0006edc7) cale_month_pane_g1_ParamLimits

0x85f7,	// (0x0006edc7) cale_month_pane_g1

0x8623,	// (0x0006edf3) cale_month_pane_g2_ParamLimits

0x8623,	// (0x0006edf3) cale_month_pane_g2

0x8646,	// (0x0006ee16) cale_month_pane_g3_ParamLimits

0x8646,	// (0x0006ee16) cale_month_pane_g3

0x8682,	// (0x0006ee52) cale_month_pane_g4_ParamLimits

0x8682,	// (0x0006ee52) cale_month_pane_g4

0x86be,	// (0x0006ee8e) cale_month_pane_g5_ParamLimits

0x86be,	// (0x0006ee8e) cale_month_pane_g5

0x86fa,	// (0x0006eeca) cale_month_pane_g6_ParamLimits

0x86fa,	// (0x0006eeca) cale_month_pane_g6

0x8746,	// (0x0006ef16) cale_month_pane_g7_ParamLimits

0x8746,	// (0x0006ef16) cale_month_pane_g7

0x8792,	// (0x0006ef62) cale_month_pane_g8_ParamLimits

0x8792,	// (0x0006ef62) cale_month_pane_g8

0x87de,	// (0x0006efae) cale_month_pane_g9_ParamLimits

0x87de,	// (0x0006efae) cale_month_pane_g9

0x8818,	// (0x0006efe8) cale_month_pane_g10_ParamLimits

0x8818,	// (0x0006efe8) cale_month_pane_g10

0x8852,	// (0x0006f022) cale_month_pane_g11_ParamLimits

0x8852,	// (0x0006f022) cale_month_pane_g11

0x888c,	// (0x0006f05c) cale_month_pane_g12_ParamLimits

0x888c,	// (0x0006f05c) cale_month_pane_g12

0x88ca,	// (0x0006f09a) cale_month_pane_g13_ParamLimits

0x88ca,	// (0x0006f09a) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00075a7a) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00075a7a) cale_month_pane_g

0x8908,	// (0x0006f0d8) cale_month_week_pane

0x891b,	// (0x0006f0eb) grid_cale_month_pane_ParamLimits

0x891b,	// (0x0006f0eb) grid_cale_month_pane

0x8959,	// (0x0006f129) cale_month_day_heading_pane_t1

0x89b7,	// (0x0006f187) cale_month_day_heading_pane_t2

0x8a1c,	// (0x0006f1ec) cale_month_day_heading_pane_t3

0x8a81,	// (0x0006f251) cale_month_day_heading_pane_t4

0x8ae6,	// (0x0006f2b6) cale_month_day_heading_pane_t5

0x8b53,	// (0x0006f323) cale_month_day_heading_pane_t6

0x8bc8,	// (0x0006f398) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00075a95) cale_month_day_heading_pane_t

0xf08c,	// (0x0007585c) bg_cale_side_pane_cp01

0x8c3d,	// (0x0006f40d) cale_month_week_pane_t1

0x8c54,	// (0x0006f424) cale_month_week_pane_t2

0x8c6b,	// (0x0006f43b) cale_month_week_pane_t3

0x8c82,	// (0x0006f452) cale_month_week_pane_t4

0x8c99,	// (0x0006f469) cale_month_week_pane_t5

0x8cb0,	// (0x0006f480) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00075aa4) cale_month_week_pane_t

0x8cc7,	// (0x0006f497) cell_cale_month_pane_ParamLimits

0x8cc7,	// (0x0006f497) cell_cale_month_pane

0x8d95,	// (0x0006f565) cell_cale_month_pane_g1

0x8da1,	// (0x0006f571) cell_cale_month_pane_t1_ParamLimits

0x8da1,	// (0x0006f571) cell_cale_month_pane_t1

0xf09a,	// (0x0007586a) grid_highlight_pane_cp08

0xef8f,	// (0x0007575f) main_smil_g1

0x8dbd,	// (0x0006f58d) smil_status_pane

0x039e,	// (0x00066b6e) smil_text_pane

0x1c44,	// (0x00068414) bg_popup_call3_rect_pane_g8

0x1c4c,	// (0x0006841c) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x00075d5d) bg_popup_call3_rect_pane_g

0x1ef4,	// (0x000686c4) smil_status_volume_pane_g1

0x03a8,	// (0x00066b78) smil_status_pane_t1

0xa27a,	// (0x00070a4a) volume_smil_pane

0x03bf,	// (0x00066b8f) list_smil_text_pane

0x8dd0,	// (0x0006f5a0) scroll_pane_cp011

0x8ddb,	// (0x0006f5ab) smil_text_list_pane_t1_ParamLimits

0x8ddb,	// (0x0006f5ab) smil_text_list_pane_t1

0x8e2f,	// (0x0006f5ff) aid_volume_smil_ParamLimits

0x8e2f,	// (0x0006f5ff) aid_volume_smil

0xef8f,	// (0x0007575f) smil_volume_pane_g1

0xef8f,	// (0x0007575f) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00075ac4) smil_volume_pane_g

0xef3a,	// (0x0007570a) listscroll_cale_day_pane

0x03eb,	// (0x00066bbb) bg_cale_pane

0x0403,	// (0x00066bd3) list_cale_pane

0x0414,	// (0x00066be4) scroll_pane_cp09

0x0425,	// (0x00066bf5) cale_bg_pane_g1

0x042d,	// (0x00066bfd) cale_bg_pane_g2

0x0435,	// (0x00066c05) cale_bg_pane_g3

0x043d,	// (0x00066c0d) cale_bg_pane_g4

0x0445,	// (0x00066c15) cale_bg_pane_g5

0x044d,	// (0x00066c1d) cale_bg_pane_g6

0x0455,	// (0x00066c25) cale_bg_pane_g7

0x045d,	// (0x00066c2d) cale_bg_pane_g8

0x0465,	// (0x00066c35) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00075ac9) cale_bg_pane_g

0x8e51,	// (0x0006f621) list_cale_time_pane_ParamLimits

0x8e51,	// (0x0006f621) list_cale_time_pane

0x8e66,	// (0x0006f636) list_cale_time_pane_g1_ParamLimits

0x8e66,	// (0x0006f636) list_cale_time_pane_g1

0x046d,	// (0x00066c3d) list_cale_time_pane_g2_ParamLimits

0x046d,	// (0x00066c3d) list_cale_time_pane_g2

0x8e72,	// (0x0006f642) list_cale_time_pane_g3_ParamLimits

0x8e72,	// (0x0006f642) list_cale_time_pane_g3

0x8e80,	// (0x0006f650) list_cale_time_pane_g4_ParamLimits

0x8e80,	// (0x0006f650) list_cale_time_pane_g4

0x8e8e,	// (0x0006f65e) list_cale_time_pane_g5_ParamLimits

0x8e8e,	// (0x0006f65e) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00075adc) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00075adc) list_cale_time_pane_g

0x8e9c,	// (0x0006f66c) list_cale_time_pane_t1_ParamLimits

0x8e9c,	// (0x0006f66c) list_cale_time_pane_t1

0x8ec4,	// (0x0006f694) list_cale_time_pane_t2_ParamLimits

0x8ec4,	// (0x0006f694) list_cale_time_pane_t2

0x91fe,	// (0x0006f9ce) aid_blid_cardinal_pane

0x9240,	// (0x0006fa10) compass_pane_t4

0x8eec,	// (0x0006f6bc) list_cale_time_pane_t4_ParamLimits

0x8eec,	// (0x0006f6bc) list_cale_time_pane_t4

0x924e,	// (0x0006fa1e) compass_pane_t5

0x925e,	// (0x0006fa2e) compass_pane_t6

0x926c,	// (0x0006fa3c) compass_pane_t7

0x08e8,	// (0x000670b8) navi_pane_cc_t1

0x0a4f,	// (0x0006721f) aid_phob_thumbnail_center_pane

0x9987,	// (0x00070157) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00075ae9) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00075ae9) list_cale_time_pane_t

0x7210,	// (0x0006d9e0) bg_popup_window_pane_cp02_ParamLimits

0x7210,	// (0x0006d9e0) bg_popup_window_pane_cp02

0x0487,	// (0x00066c57) heading_pane_cp01_ParamLimits

0x0487,	// (0x00066c57) heading_pane_cp01

0x0493,	// (0x00066c63) loc_req_pane_ParamLimits

0x0493,	// (0x00066c63) loc_req_pane

0x04a3,	// (0x00066c73) loc_type_pane_ParamLimits

0x04a3,	// (0x00066c73) loc_type_pane

0x04b5,	// (0x00066c85) loc_type_pane_t1_ParamLimits

0x04b5,	// (0x00066c85) loc_type_pane_t1

0x04c7,	// (0x00066c97) loc_type_pane_t2_ParamLimits

0x04c7,	// (0x00066c97) loc_type_pane_t2

0x04d9,	// (0x00066ca9) loc_type_pane_t3_ParamLimits

0x04d9,	// (0x00066ca9) loc_type_pane_t3

0x0002,

0xf320,	// (0x00075af0) loc_type_pane_t_ParamLimits

0xf320,	// (0x00075af0) loc_type_pane_t

0x04eb,	// (0x00066cbb) list_loc_req_pane

0x04f5,	// (0x00066cc5) scroll_pane_cp012

0x8f14,	// (0x0006f6e4) list_single_loc_request_popup_menu_pane_ParamLimits

0x8f14,	// (0x0006f6e4) list_single_loc_request_popup_menu_pane

0x0500,	// (0x00066cd0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0500,	// (0x00066cd0) list_single_loc_request_popup_menu_pane_g1

0x050c,	// (0x00066cdc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x050c,	// (0x00066cdc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00075af7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00075af7) list_single_loc_request_popup_menu_pane_g

0x0518,	// (0x00066ce8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0518,	// (0x00066ce8) list_single_loc_request_popup_menu_pane_t1

0x8f26,	// (0x0006f6f6) bg_popup_window_pane_cp03_ParamLimits

0x8f26,	// (0x0006f6f6) bg_popup_window_pane_cp03

0x8f34,	// (0x0006f704) heading_loc_req_pane_ParamLimits

0x8f34,	// (0x0006f704) heading_loc_req_pane

0x8f40,	// (0x0006f710) popup_dyc_status_message_window_g1_ParamLimits

0x8f40,	// (0x0006f710) popup_dyc_status_message_window_g1

0x8f4c,	// (0x0006f71c) popup_dyc_status_message_window_t1_ParamLimits

0x8f4c,	// (0x0006f71c) popup_dyc_status_message_window_t1

0x8f5e,	// (0x0006f72e) popup_dyc_status_message_window_t2_ParamLimits

0x8f5e,	// (0x0006f72e) popup_dyc_status_message_window_t2

0x8f70,	// (0x0006f740) popup_dyc_status_message_window_t3_ParamLimits

0x8f70,	// (0x0006f740) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00075afc) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00075afc) popup_dyc_status_message_window_t

0xec0c,	// (0x000753dc) bg_heading_pane_cp01

0x053a,	// (0x00066d0a) heading_loc_req_pane_g1

0x0542,	// (0x00066d12) heading_loc_req_pane_g2

0x054a,	// (0x00066d1a) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00075b03) heading_loc_req_pane_g

0x0552,	// (0x00066d22) heading_loc_req_pane_t1

0x0562,	// (0x00066d32) bg_popup_sub_pane_cp01_ParamLimits

0x0562,	// (0x00066d32) bg_popup_sub_pane_cp01

0x0570,	// (0x00066d40) popup_cale_events_window_g1_ParamLimits

0x0570,	// (0x00066d40) popup_cale_events_window_g1

0x0590,	// (0x00066d60) popup_cale_events_window_g2_ParamLimits

0x0590,	// (0x00066d60) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00075b37) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00075b37) popup_cale_events_window_g

0x05b0,	// (0x00066d80) popup_cale_events_window_t1_ParamLimits

0x05b0,	// (0x00066d80) popup_cale_events_window_t1

0x05c2,	// (0x00066d92) popup_cale_events_window_t2_ParamLimits

0x05c2,	// (0x00066d92) popup_cale_events_window_t2

0x0600,	// (0x00066dd0) popup_cale_events_window_t3_ParamLimits

0x0600,	// (0x00066dd0) popup_cale_events_window_t3

0x063a,	// (0x00066e0a) popup_cale_events_window_t4_ParamLimits

0x063a,	// (0x00066e0a) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00075b3c) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00075b3c) popup_cale_events_window_t

0x8f9a,	// (0x0006f76a) call_type_pane

0x0a67,	// (0x00067237) popup_call_status_window_g1

0x8fa6,	// (0x0006f776) popup_call_status_window_g2

0x8fb2,	// (0x0006f782) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00075b45) popup_call_status_window_g

0x0670,	// (0x00066e40) call_type_pane_g1

0x0679,	// (0x00066e49) call_type_pane_g2

0x0001,

0xf37c,	// (0x00075b4c) call_type_pane_g

0xec0c,	// (0x000753dc) bg_popup_sub_pane_cp02

0x0682,	// (0x00066e52) listscroll_popup_wml_pane

0x068a,	// (0x00066e5a) list_wml_pane

0x0694,	// (0x00066e64) scroll_pane_cp013

0x069f,	// (0x00066e6f) list_single_graphic_popup_wml_pane_ParamLimits

0x069f,	// (0x00066e6f) list_single_graphic_popup_wml_pane

0xef8f,	// (0x0007575f) list_single_graphic_popup_wml_pane_g1

0x06b3,	// (0x00066e83) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00075b51) list_single_graphic_popup_wml_pane_g

0x06bb,	// (0x00066e8b) list_single_graphic_popup_wml_pane_t1

0x06c9,	// (0x00066e99) aid_call_pane

0xee5f,	// (0x0007562f) popup_clock_analogue_window_g1

0xee5f,	// (0x0007562f) popup_clock_analogue_window_g2

0x8fbe,	// (0x0006f78e) popup_clock_analogue_window_g3

0x8fbe,	// (0x0006f78e) popup_clock_analogue_window_g4

0xef8f,	// (0x0007575f) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00075b56) popup_clock_analogue_window_g

0x8fc6,	// (0x0006f796) popup_clock_analogue_window_t1

0x8fd4,	// (0x0006f7a4) clock_digital_number_pane_ParamLimits

0x8fd4,	// (0x0006f7a4) clock_digital_number_pane

0x8fe0,	// (0x0006f7b0) clock_digital_number_pane_cp02_ParamLimits

0x8fe0,	// (0x0006f7b0) clock_digital_number_pane_cp02

0x8fec,	// (0x0006f7bc) clock_digital_number_pane_cp03_ParamLimits

0x8fec,	// (0x0006f7bc) clock_digital_number_pane_cp03

0x8ff8,	// (0x0006f7c8) clock_digital_number_pane_cp04_ParamLimits

0x8ff8,	// (0x0006f7c8) clock_digital_number_pane_cp04

0x9004,	// (0x0006f7d4) clock_digital_separator_pane_ParamLimits

0x9004,	// (0x0006f7d4) clock_digital_separator_pane

0x9010,	// (0x0006f7e0) popup_clock_digital_window_t1

0xef8f,	// (0x0007575f) clock_digital_number_pane_g1

0xef8f,	// (0x0007575f) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00075ac4) clock_digital_number_pane_g

0xef8f,	// (0x0007575f) clock_digital_separator_pane_g1

0xef8f,	// (0x0007575f) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00075ac4) clock_digital_separator_pane_g

0xec0c,	// (0x000753dc) bg_popup_window_pane_cp04

0x0748,	// (0x00066f18) heading_pane_cp03

0x0750,	// (0x00066f20) listscroll_popup_gms_pane

0x0758,	// (0x00066f28) grid_large_graphic_popup_pane

0x0762,	// (0x00066f32) listscroll_popup_gms_pane_g1

0x076a,	// (0x00066f3a) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00075b61) listscroll_popup_gms_pane_g

0x0201,	// (0x000669d1) scroll_pane_cp014

0x902d,	// (0x0006f7fd) cell_large_graphic_popup_pane_ParamLimits

0x902d,	// (0x0006f7fd) cell_large_graphic_popup_pane

0x9047,	// (0x0006f817) cell_large_graphic_popup_pane_g1_ParamLimits

0x9047,	// (0x0006f817) cell_large_graphic_popup_pane_g1

0x0772,	// (0x00066f42) cell_large_graphic_popup_pane_g2_ParamLimits

0x0772,	// (0x00066f42) cell_large_graphic_popup_pane_g2

0x077e,	// (0x00066f4e) cell_large_graphic_popup_pane_g3_ParamLimits

0x077e,	// (0x00066f4e) cell_large_graphic_popup_pane_g3

0x078b,	// (0x00066f5b) cell_large_graphic_popup_pane_g4_ParamLimits

0x078b,	// (0x00066f5b) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00075b66) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00075b66) cell_large_graphic_popup_pane_g

0x079b,	// (0x00066f6b) grid_highlight_pane_cp010

0xef8f,	// (0x0007575f) bg_popup_call_pane_g1

0x07a5,	// (0x00066f75) list_single_graphic_popup_conf_pane_ParamLimits

0x07a5,	// (0x00066f75) list_single_graphic_popup_conf_pane

0x07b7,	// (0x00066f87) list_highlight_pane_cp01

0x07c0,	// (0x00066f90) list_single_graphic_popup_conf_pane_g1

0x07c8,	// (0x00066f98) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00075b6f) list_single_graphic_popup_conf_pane_g

0x07d0,	// (0x00066fa0) list_single_graphic_popup_conf_pane_t1

0x07de,	// (0x00066fae) linegrid_cams_pane_g1

0x9053,	// (0x0006f823) linegrid_cams_pane_g2

0xf0cd,	// (0x0007589d) linegrid_cams_pane_g3

0x07e7,	// (0x00066fb7) linegrid_cams_pane_g4

0x905c,	// (0x0006f82c) linegrid_cams_pane_g5

0x9065,	// (0x0006f835) linegrid_cams_pane_g6

0xf0d6,	// (0x000758a6) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00075b74) linegrid_cams_pane_g

0x07f0,	// (0x00066fc0) popup_clock_analogue_window

0x07f0,	// (0x00066fc0) popup_clock_digital_window

0xec0c,	// (0x000753dc) popup_phob_thumbnail_window

0xef8f,	// (0x0007575f) call_video_uplink_pane_g1

0x07f9,	// (0x00066fc9) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00075b83) call_video_uplink_pane_g

0x0801,	// (0x00066fd1) video_uplink_pane

0x0809,	// (0x00066fd9) mce_image_pane_g1

0x9070,	// (0x0006f840) mce_image_pane_g2

0x907a,	// (0x0006f84a) mce_image_pane_g3

0x9084,	// (0x0006f854) mce_image_pane_g4

0x908c,	// (0x0006f85c) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00075b88) mce_image_pane_g

0x0813,	// (0x00066fe3) control_top_pane_stacon_cp01_ParamLimits

0x0813,	// (0x00066fe3) control_top_pane_stacon_cp01

0x0827,	// (0x00066ff7) uni_indicator_pane_stacon_cp01_ParamLimits

0x0827,	// (0x00066ff7) uni_indicator_pane_stacon_cp01

0x0838,	// (0x00067008) bg_popup_sub_pane_cp03

0x9094,	// (0x0006f864) chi_dic_find_pane

0x909c,	// (0x0006f86c) listscroll_chi_dic_pane

0x90a5,	// (0x0006f875) main_pane_chidic_g1

0x90b8,	// (0x0006f888) chi_dic_find_pane_t1

0x0842,	// (0x00067012) find_chidic_pane

0x084b,	// (0x0006701b) chi_dic_list_pane_ParamLimits

0x084b,	// (0x0006701b) chi_dic_list_pane

0x085c,	// (0x0006702c) scroll_pane_cp020

0x90c6,	// (0x0006f896) find_chidic_pane_t1

0xec0c,	// (0x000753dc) input_focus_pane_cp06

0x90d5,	// (0x0006f8a5) list_chi_dic_pane_ParamLimits

0x90d5,	// (0x0006f8a5) list_chi_dic_pane

0x90ea,	// (0x0006f8ba) list_chi_dic_pane_t1_ParamLimits

0x90ea,	// (0x0006f8ba) list_chi_dic_pane_t1

0xec0c,	// (0x000753dc) list_highlight_pane_cp020

0x0864,	// (0x00067034) bg_cale_heading_pane_g1

0x90fd,	// (0x0006f8cd) bg_cale_heading_pane_g2

0x9105,	// (0x0006f8d5) bg_cale_heading_pane_g3

0x910d,	// (0x0006f8dd) bg_cale_heading_pane_g4

0x9117,	// (0x0006f8e7) bg_cale_heading_pane_g5

0x9121,	// (0x0006f8f1) bg_cale_heading_pane_g6

0x9129,	// (0x0006f8f9) bg_cale_heading_pane_g7

0x9131,	// (0x0006f901) bg_cale_heading_pane_g8

0x913b,	// (0x0006f90b) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00075b93) bg_cale_heading_pane_g

0x0864,	// (0x00067034) bg_cale_side_pane_g1

0x9145,	// (0x0006f915) bg_cale_side_pane_g2

0x914f,	// (0x0006f91f) bg_cale_side_pane_g3

0x9159,	// (0x0006f929) bg_cale_side_pane_g4

0x9163,	// (0x0006f933) bg_cale_side_pane_g5

0x916d,	// (0x0006f93d) bg_cale_side_pane_g6

0x9177,	// (0x0006f947) bg_cale_side_pane_g7

0x9181,	// (0x0006f951) bg_cale_side_pane_g8

0x9189,	// (0x0006f959) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00075ba6) bg_cale_side_pane_g

0x9191,	// (0x0006f961) popup_call_status_window_ParamLimits

0x9191,	// (0x0006f961) popup_call_status_window

0x086c,	// (0x0006703c) stacon_top_pane

0x0874,	// (0x00067044) status_pane_ParamLimits

0x0874,	// (0x00067044) status_pane

0x0889,	// (0x00067059) status_small_pane

0x0891,	// (0x00067061) control_pane

0xec0c,	// (0x000753dc) stacon_bottom_pane

0x0899,	// (0x00067069) list_single_mce_smart_pane_t1_ParamLimits

0x0899,	// (0x00067069) list_single_mce_smart_pane_t1

0x08ac,	// (0x0006707c) list_single_mce_smart_pane_t2_ParamLimits

0x08ac,	// (0x0006707c) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00075bb9) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00075bb9) list_single_mce_smart_pane_t

0x919d,	// (0x0006f96d) compass_pane

0x91a8,	// (0x0006f978) main_location2_pane_t1

0x91be,	// (0x0006f98e) main_location2_pane_t2

0x91d4,	// (0x0006f9a4) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00075bbe) main_location2_pane_t

0x08cb,	// (0x0006709b) compass_pane_g1_ParamLimits

0x08cb,	// (0x0006709b) compass_pane_g1

0x9222,	// (0x0006f9f2) compass_pane_t1

0x9231,	// (0x0006fa01) compass_pane_t2

0x0005,

0xf3f7,	// (0x00075bc7) compass_pane_t

0x927c,	// (0x0006fa4c) text_secondary_cp61

0x08df,	// (0x000670af) navi_pane_cams_g5

0x0902,	// (0x000670d2) navi_pane_im_t1

0x0910,	// (0x000670e0) navi_pane_mp_g1_ParamLimits

0x0910,	// (0x000670e0) navi_pane_mp_g1

0x0924,	// (0x000670f4) navi_pane_mp_g2_ParamLimits

0x0924,	// (0x000670f4) navi_pane_mp_g2

0x0930,	// (0x00067100) navi_pane_mp_g3_ParamLimits

0x0930,	// (0x00067100) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00075bdb) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00075bdb) navi_pane_mp_g

0x093c,	// (0x0006710c) navi_pane_mp_t1

0x094a,	// (0x0006711a) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00075be2) navi_pane_mp_t

0x0986,	// (0x00067156) navi_pane_vt_g1

0x093c,	// (0x0006710c) navi_pane_vt_t1

0x098e,	// (0x0006715e) navi_slider_pane

0x0996,	// (0x00067166) zooming_pane

0x099e,	// (0x0006716e) navi_slider_pane_g1

0x93a9,	// (0x0006fb79) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00075be9) navi_slider_pane_g

0x09d4,	// (0x000671a4) aid_levels_zoom

0x09dc,	// (0x000671ac) zooming_pane_g1

0x09e4,	// (0x000671b4) zooming_pane_g2

0x09e4,	// (0x000671b4) zooming_pane_g3

0x0002,

0xf428,	// (0x00075bf8) zooming_pane_g

0x09ec,	// (0x000671bc) level_10_zoom

0x09f5,	// (0x000671c5) level_11_zoom

0x09fe,	// (0x000671ce) level_1_zoom

0x0a07,	// (0x000671d7) level_2_zoom

0x0a10,	// (0x000671e0) level_3_zoom

0x0a19,	// (0x000671e9) level_4_zoom

0x0a22,	// (0x000671f2) level_5_zoom

0x0a2b,	// (0x000671fb) level_6_zoom

0x0a34,	// (0x00067204) level_7_zoom

0x0a3d,	// (0x0006720d) level_8_zoom

0x0a46,	// (0x00067216) level_9_zoom

0x0a57,	// (0x00067227) popup_phob_thumbnail_window_g1

0x0a5f,	// (0x0006722f) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00075bff) popup_phob_thumbnail_window_g

0x1daa,	// (0x0006857a) level_1_location

0x1db2,	// (0x00068582) level_2_location

0x1dba,	// (0x0006858a) level_3_location

0x1dc2,	// (0x00068592) level_4_location

0x0996,	// (0x00067166) level_5_location

0x93bb,	// (0x0006fb8b) mce_icon_pane_g1

0x93c3,	// (0x0006fb93) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00075c04) mce_icon_pane_g

0x93cb,	// (0x0006fb9b) main_mup_pane_g1_ParamLimits

0x93cb,	// (0x0006fb9b) main_mup_pane_g1

0x93e3,	// (0x0006fbb3) main_mup_pane_g2_ParamLimits

0x93e3,	// (0x0006fbb3) main_mup_pane_g2

0x93ff,	// (0x0006fbcf) main_mup_pane_g3_ParamLimits

0x93ff,	// (0x0006fbcf) main_mup_pane_g3

0x941b,	// (0x0006fbeb) main_mup_pane_g4_ParamLimits

0x941b,	// (0x0006fbeb) main_mup_pane_g4

0x942f,	// (0x0006fbff) main_mup_pane_g5_ParamLimits

0x942f,	// (0x0006fbff) main_mup_pane_g5

0x9450,	// (0x0006fc20) main_mup_pane_g6_ParamLimits

0x9450,	// (0x0006fc20) main_mup_pane_g6

0x9470,	// (0x0006fc40) main_mup_pane_g7_ParamLimits

0x9470,	// (0x0006fc40) main_mup_pane_g7

0x9494,	// (0x0006fc64) main_mup_pane_g8_ParamLimits

0x9494,	// (0x0006fc64) main_mup_pane_g8

0x94b8,	// (0x0006fc88) main_mup_pane_g9_ParamLimits

0x94b8,	// (0x0006fc88) main_mup_pane_g9

0x94db,	// (0x0006fcab) main_mup_pane_g10_ParamLimits

0x94db,	// (0x0006fcab) main_mup_pane_g10

0x94fe,	// (0x0006fcce) main_mup_pane_g11_ParamLimits

0x94fe,	// (0x0006fcce) main_mup_pane_g11

0x951e,	// (0x0006fcee) main_mup_pane_g12_ParamLimits

0x951e,	// (0x0006fcee) main_mup_pane_g12

0x952c,	// (0x0006fcfc) main_mup_pane_g13_ParamLimits

0x952c,	// (0x0006fcfc) main_mup_pane_g13

0x000c,

0xf439,	// (0x00075c09) main_mup_pane_g_ParamLimits

0xf439,	// (0x00075c09) main_mup_pane_g

0x9542,	// (0x0006fd12) main_mup_pane_t1_ParamLimits

0x9542,	// (0x0006fd12) main_mup_pane_t1

0x9561,	// (0x0006fd31) main_mup_pane_t2_ParamLimits

0x9561,	// (0x0006fd31) main_mup_pane_t2

0x957b,	// (0x0006fd4b) main_mup_pane_t3_ParamLimits

0x957b,	// (0x0006fd4b) main_mup_pane_t3

0x9595,	// (0x0006fd65) main_mup_pane_t4_ParamLimits

0x9595,	// (0x0006fd65) main_mup_pane_t4

0x95a7,	// (0x0006fd77) main_mup_pane_t5_ParamLimits

0x95a7,	// (0x0006fd77) main_mup_pane_t5

0x95b9,	// (0x0006fd89) main_mup_pane_t6_ParamLimits

0x95b9,	// (0x0006fd89) main_mup_pane_t6

0x0005,

0xf454,	// (0x00075c24) main_mup_pane_t_ParamLimits

0xf454,	// (0x00075c24) main_mup_pane_t

0x95cf,	// (0x0006fd9f) mup_progress_pane_ParamLimits

0x95cf,	// (0x0006fd9f) mup_progress_pane

0x95db,	// (0x0006fdab) mup_visualizer_pane_ParamLimits

0x95db,	// (0x0006fdab) mup_visualizer_pane

0x9615,	// (0x0006fde5) mup_volume_pane_ParamLimits

0x9615,	// (0x0006fde5) mup_volume_pane

0x0a67,	// (0x00067237) mup_visualizer_pane_g1_ParamLimits

0x0a67,	// (0x00067237) mup_visualizer_pane_g1

0x0a67,	// (0x00067237) mup_visualizer_pane_g2_ParamLimits

0x0a67,	// (0x00067237) mup_visualizer_pane_g2

0x08cb,	// (0x0006709b) mup_visualizer_pane_g3_ParamLimits

0x08cb,	// (0x0006709b) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00075c31) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00075c31) mup_visualizer_pane_g

0xef8f,	// (0x0007575f) mup_volume_pane_g1

0x0a7d,	// (0x0006724d) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00075c38) mup_volume_pane_g

0xef8f,	// (0x0007575f) mup_progress_pane_g1

0x0a86,	// (0x00067256) mup_progress_pane_g2

0x0a8f,	// (0x0006725f) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x00075c3d) mup_progress_pane_g

0xec0c,	// (0x000753dc) bg_popup_window_pane_cp05

0x0a98,	// (0x00067268) heading_pane_cp02_ParamLimits

0x0a98,	// (0x00067268) heading_pane_cp02

0x0ab4,	// (0x00067284) list_popup_blid_pane

0x0abc,	// (0x0006728c) list_blid_sat_info_pane_ParamLimits

0x0abc,	// (0x0006728c) list_blid_sat_info_pane

0x0acf,	// (0x0006729f) list_blid_sat_info_pane_g1

0x0ad7,	// (0x000672a7) list_blid_sat_info_pane_t1

0x9734,	// (0x0006ff04) mup_equalizer_pane_ParamLimits

0x9734,	// (0x0006ff04) mup_equalizer_pane

0x9755,	// (0x0006ff25) mup_equalizer_pane_cp1_ParamLimits

0x9755,	// (0x0006ff25) mup_equalizer_pane_cp1

0x9776,	// (0x0006ff46) mup_equalizer_pane_cp2_ParamLimits

0x9776,	// (0x0006ff46) mup_equalizer_pane_cp2

0x9797,	// (0x0006ff67) mup_equalizer_pane_cp3_ParamLimits

0x9797,	// (0x0006ff67) mup_equalizer_pane_cp3

0x97bc,	// (0x0006ff8c) mup_equalizer_pane_cp4_ParamLimits

0x97bc,	// (0x0006ff8c) mup_equalizer_pane_cp4

0x97e1,	// (0x0006ffb1) mup_equalizer_pane_cp5

0x97f9,	// (0x0006ffc9) mup_equalizer_pane_cp6

0x9811,	// (0x0006ffe1) mup_equalizer_pane_cp7

0x1cc4,	// (0x00068494) bg_popup_call_poc_act_pane_g9

0x1ccc,	// (0x0006849c) bg_popup_call_poc_act_pane_g10

0x1cd4,	// (0x000684a4) bg_popup_call_poc_act_pane_g11

0x000a,

0xee67,	// (0x00075637) mup_scale_pane

0xef8f,	// (0x0007575f) mup_scale_pane_g1

0x0ae5,	// (0x000672b5) mup_scale_pane_g2

0x0006,

0xf489,	// (0x00075c59) mup_scale_pane_g

0x0b09,	// (0x000672d9) msg_data_pane

0x0b11,	// (0x000672e1) scroll_pane_cp017

0x5ee3,	// (0x0006c6b3) bg_list_pane_cp04_ParamLimits

0x5ee3,	// (0x0006c6b3) bg_list_pane_cp04

0x0b19,	// (0x000672e9) msg_data_pane_g1

0x983b,	// (0x0007000b) msg_data_pane_g2

0x9845,	// (0x00070015) msg_data_pane_g3

0x984f,	// (0x0007001f) msg_data_pane_g4

0x9857,	// (0x00070027) msg_data_pane_g5

0x985f,	// (0x0007002f) msg_data_pane_g6

0x9867,	// (0x00070037) msg_data_pane_g7

0x0006,

0xf498,	// (0x00075c68) msg_data_pane_g

0x5f0b,	// (0x0006c6db) msg_text_pane_ParamLimits

0x5f0b,	// (0x0006c6db) msg_text_pane

0x986f,	// (0x0007003f) qrid_highlight_pane_cp011_ParamLimits

0x986f,	// (0x0007003f) qrid_highlight_pane_cp011

0xec0c,	// (0x000753dc) msg_body_pane

0xec0c,	// (0x000753dc) msg_header_pane

0x0b2a,	// (0x000672fa) input_focus_pane_cp07

0x5f3f,	// (0x0006c70f) msg_header_pane_t1_ParamLimits

0x5f3f,	// (0x0006c70f) msg_header_pane_t1

0x5f53,	// (0x0006c723) msg_header_pane_t2_ParamLimits

0x5f53,	// (0x0006c723) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00075c7c) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00075c7c) msg_header_pane_t

0x0b3f,	// (0x0006730f) msg_body_pane_g1

0x5f65,	// (0x0006c735) msg_body_pane_t1_ParamLimits

0x5f65,	// (0x0006c735) msg_body_pane_t1

0x5f96,	// (0x0006c766) msg_body_pane_t2_ParamLimits

0x5f96,	// (0x0006c766) msg_body_pane_t2

0x5fa8,	// (0x0006c778) msg_body_pane_t3_ParamLimits

0x5fa8,	// (0x0006c778) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00075c81) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00075c81) msg_body_pane_t

0x98d7,	// (0x000700a7) main_viewer_pane_g1_ParamLimits

0x98d7,	// (0x000700a7) main_viewer_pane_g1

0x98e3,	// (0x000700b3) main_viewer_pane_g2_ParamLimits

0x98e3,	// (0x000700b3) main_viewer_pane_g2

0x98ef,	// (0x000700bf) main_viewer_pane_g3_ParamLimits

0x98ef,	// (0x000700bf) main_viewer_pane_g3

0x9900,	// (0x000700d0) main_viewer_pane_g4_ParamLimits

0x9900,	// (0x000700d0) main_viewer_pane_g4

0x9911,	// (0x000700e1) main_viewer_pane_g5_ParamLimits

0x9911,	// (0x000700e1) main_viewer_pane_g5

0x9911,	// (0x000700e1) main_viewer_pane_g7_ParamLimits

0x9911,	// (0x000700e1) main_viewer_pane_g7

0x9923,	// (0x000700f3) main_viewer_pane_g8_ParamLimits

0x9923,	// (0x000700f3) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00075c91) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00075c91) main_viewer_pane_g

0x0b89,	// (0x00067359) viewer_content_pane_ParamLimits

0x0b89,	// (0x00067359) viewer_content_pane

0x995b,	// (0x0007012b) main_postcard_pane_g1_ParamLimits

0x995b,	// (0x0007012b) main_postcard_pane_g1

0x9969,	// (0x00070139) main_postcard_pane_g2_ParamLimits

0x9969,	// (0x00070139) main_postcard_pane_g2

0x9977,	// (0x00070147) main_postcard_pane_g3_ParamLimits

0x9977,	// (0x00070147) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00075ca2) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00075ca2) main_postcard_pane_g

0x9987,	// (0x00070157) main_postcard_pane_g4

0x1ee1,	// (0x000686b1) smil_status_volume_pane_g2

0x99b3,	// (0x00070183) postcard_pane_ParamLimits

0x99b3,	// (0x00070183) postcard_pane

0x0a67,	// (0x00067237) postcard_pane_g1_ParamLimits

0x0a67,	// (0x00067237) postcard_pane_g1

0x99ed,	// (0x000701bd) postcard_pane_g2_ParamLimits

0x99ed,	// (0x000701bd) postcard_pane_g2

0x99f9,	// (0x000701c9) postcard_pane_g3_ParamLimits

0x99f9,	// (0x000701c9) postcard_pane_g3

0x0ba5,	// (0x00067375) postcard_pane_g4_ParamLimits

0x0ba5,	// (0x00067375) postcard_pane_g4

0x9a05,	// (0x000701d5) postcard_pane_g5_ParamLimits

0x9a05,	// (0x000701d5) postcard_pane_g5

0x9a11,	// (0x000701e1) postcard_pane_g6_ParamLimits

0x9a11,	// (0x000701e1) postcard_pane_g6

0x0b97,	// (0x00067367) postcard_pane_g7_ParamLimits

0x0b97,	// (0x00067367) postcard_pane_g7

0x0006,

0xf4df,	// (0x00075caf) postcard_pane_g_ParamLimits

0xf4df,	// (0x00075caf) postcard_pane_g

0x9a1f,	// (0x000701ef) main_mp2_pane_g1_ParamLimits

0x9a1f,	// (0x000701ef) main_mp2_pane_g1

0x9a2d,	// (0x000701fd) main_mp2_pane_g2_ParamLimits

0x9a2d,	// (0x000701fd) main_mp2_pane_g2

0x9a39,	// (0x00070209) main_mp2_pane_g3_ParamLimits

0x9a39,	// (0x00070209) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00075cbe) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00075cbe) main_mp2_pane_g

0x9a45,	// (0x00070215) main_mp2_pane_t1_ParamLimits

0x9a45,	// (0x00070215) main_mp2_pane_t1

0x9a5c,	// (0x0007022c) main_mp2_pane_t2_ParamLimits

0x9a5c,	// (0x0007022c) main_mp2_pane_t2

0x9a70,	// (0x00070240) main_mp2_pane_t3_ParamLimits

0x9a70,	// (0x00070240) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00075cc5) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00075cc5) main_mp2_pane_t

0x0bb3,	// (0x00067383) pec_content_pane_ParamLimits

0x0bb3,	// (0x00067383) pec_content_pane

0x0201,	// (0x000669d1) scroll_pane_cp015

0x0bc5,	// (0x00067395) pec_attribute_pane_ParamLimits

0x0bc5,	// (0x00067395) pec_attribute_pane

0x9a82,	// (0x00070252) pec_content_pane_g1_ParamLimits

0x9a82,	// (0x00070252) pec_content_pane_g1

0x0bd5,	// (0x000673a5) pec_content_pane_t1_ParamLimits

0x0bd5,	// (0x000673a5) pec_content_pane_t1

0x0be7,	// (0x000673b7) pec_content_pane_t2_ParamLimits

0x0be7,	// (0x000673b7) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00075ccc) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00075ccc) pec_content_pane_t

0x9a8e,	// (0x0007025e) list_single_graphic_pane_cp01_ParamLimits

0x9a8e,	// (0x0007025e) list_single_graphic_pane_cp01

0xee67,	// (0x00075637) bg_popup_sub_pane_cp04

0x0bf9,	// (0x000673c9) popup_mup_playback_window_g1

0x0c05,	// (0x000673d5) popup_mup_playback_window_t1

0x0c1a,	// (0x000673ea) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00075cd1) popup_mup_playback_window_t

0x0c51,	// (0x00067421) main_image_pane_g1_ParamLimits

0x0c51,	// (0x00067421) main_image_pane_g1

0x0c94,	// (0x00067464) scroll_pane_cp018_ParamLimits

0x0c94,	// (0x00067464) scroll_pane_cp018

0x0cac,	// (0x0006747c) scroll_pane_cp016_ParamLimits

0x0cac,	// (0x0006747c) scroll_pane_cp016

0x9b1c,	// (0x000702ec) smil2_image_pane_ParamLimits

0x9b1c,	// (0x000702ec) smil2_image_pane

0x9b52,	// (0x00070322) smil2_root_pane_ParamLimits

0x9b52,	// (0x00070322) smil2_root_pane

0x9b7e,	// (0x0007034e) smil2_text_pane_ParamLimits

0x9b7e,	// (0x0007034e) smil2_text_pane

0xec0c,	// (0x000753dc) bg_list_pane_cp06

0x0ce8,	// (0x000674b8) grid_radio_pane

0xec0c,	// (0x000753dc) bg_popup_window_pane_cp06

0x0cf2,	// (0x000674c2) main_fmradio_pane_t1

0x0748,	// (0x00066f18) heading_pane_cp04

0x0d00,	// (0x000674d0) main_fmradio_pane_t2

0x1cdc,	// (0x000684ac) popup_cale_lunar_info_window_g1

0x0d0e,	// (0x000674de) main_fmradio_pane_t3

0x1ce4,	// (0x000684b4) popup_cale_lunar_info_window_g2

0x0d1e,	// (0x000674ee) main_fmradio_pane_t4

0x0001,

0x0d2c,	// (0x000674fc) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00075dac) popup_cale_lunar_info_window_g

0xf516,	// (0x00075ce6) main_fmradio_pane_t

0x0d3a,	// (0x0006750a) wait_bar_pane_cp03

0x0d42,	// (0x00067512) cell_fmradio_pane_ParamLimits

0x0d42,	// (0x00067512) cell_fmradio_pane

0x0b97,	// (0x00067367) cell_fmradio_pane_g1_ParamLimits

0x0b97,	// (0x00067367) cell_fmradio_pane_g1

0xec0c,	// (0x000753dc) grid_highlight_pane_cp011

0x0d57,	// (0x00067527) poc_content_pane_ParamLimits

0x0d57,	// (0x00067527) poc_content_pane

0x0d69,	// (0x00067539) scroll_pane_cp019

0x9bbe,	// (0x0007038e) popup_call_poc_act_window_ParamLimits

0x9bbe,	// (0x0007038e) popup_call_poc_act_window

0x9bcb,	// (0x0007039b) popup_call_poc_inact_window_ParamLimits

0x9bcb,	// (0x0007039b) popup_call_poc_inact_window

0xf5b3,	// (0x00075d83) bg_popup_call_poc_act_pane_g

0x1c54,	// (0x00068424) bg_popup_call_poc_inact_pane_g1

0x1c5c,	// (0x0006842c) bg_popup_call_poc_inact_pane_g2

0x0d71,	// (0x00067541) popup_call_poc_act_window_g2

0x1c64,	// (0x00068434) bg_popup_call_poc_inact_pane_g3

0x1c6c,	// (0x0006843c) bg_popup_call_poc_inact_pane_g4

0x1c74,	// (0x00068444) bg_popup_call_poc_inact_pane_g5

0x0d79,	// (0x00067549) popup_call_poc_act_window_t1_ParamLimits

0x0d79,	// (0x00067549) popup_call_poc_act_window_t1

0x0da1,	// (0x00067571) popup_call_poc_act_window_t2_ParamLimits

0x0da1,	// (0x00067571) popup_call_poc_act_window_t2

0x0dc9,	// (0x00067599) popup_call_poc_act_window_t3_ParamLimits

0x0dc9,	// (0x00067599) popup_call_poc_act_window_t3

0x0df1,	// (0x000675c1) popup_call_poc_act_window_t4_ParamLimits

0x0df1,	// (0x000675c1) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00075cf1) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00075cf1) popup_call_poc_act_window_t

0x1c7c,	// (0x0006844c) bg_popup_call_poc_inact_pane_g6

0x1c84,	// (0x00068454) bg_popup_call_poc_inact_pane_g7

0x1c8c,	// (0x0006845c) bg_popup_call_poc_inact_pane_g8

0x0e03,	// (0x000675d3) popup_call_poc_inact_window_g2

0x1c94,	// (0x00068464) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00075d70) bg_popup_call_poc_inact_pane_g

0x0e0b,	// (0x000675db) popup_call_poc_inact_window_t1_ParamLimits

0x0e0b,	// (0x000675db) popup_call_poc_inact_window_t1

0x0e20,	// (0x000675f0) popup_call_poc_inact_window_t2_ParamLimits

0x0e20,	// (0x000675f0) popup_call_poc_inact_window_t2

0x0e35,	// (0x00067605) popup_call_poc_inact_window_t3_ParamLimits

0x0e35,	// (0x00067605) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00075cfa) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00075cfa) popup_call_poc_inact_window_t

0x1e54,	// (0x00068624) context_pane_ParamLimits

0xa1e8,	// (0x000709b8) signal_pane_ParamLimits

0x0996,	// (0x00067166) main_call2_pane

0x1e42,	// (0x00068612) popup_phob_thumbnail2_window_ParamLimits

0x1e42,	// (0x00068612) popup_phob_thumbnail2_window

0x9885,	// (0x00070055) aid_hotspot_pointer_arrow_pane

0x988d,	// (0x0007005d) aid_hotspot_pointer_hand_pane

0x9ef0,	// (0x000706c0) phob_pre_status_pane_g5

0x7d8d,	// (0x0006e55d) cams_zoom_pane_ParamLimits

0x7d99,	// (0x0006e569) image_vga_pane_ParamLimits

0x7da8,	// (0x0006e578) main_camera_pane_g1_ParamLimits

0x7db6,	// (0x0006e586) main_camera_pane_g2_ParamLimits

0x7dc2,	// (0x0006e592) main_camera_pane_g3_ParamLimits

0x7dd0,	// (0x0006e5a0) main_camera_pane_g4_ParamLimits

0x7dde,	// (0x0006e5ae) main_camera_pane_g5_ParamLimits

0x7dec,	// (0x0006e5bc) main_camera_pane_g6_ParamLimits

0x7dfa,	// (0x0006e5ca) main_camera_pane_g7_ParamLimits

0xf229,	// (0x000759f9) main_camera_pane_g_ParamLimits

0x7e08,	// (0x0006e5d8) main_camera_pane_t1_ParamLimits

0x7e1a,	// (0x0006e5ea) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00075a0a) main_camera_pane_t_ParamLimits

0xee67,	// (0x00075637) bg_popup_preview_window_pane_cp01_ParamLimits

0xee67,	// (0x00075637) bg_popup_preview_window_pane_cp01

0x0e4a,	// (0x0006761a) popup_phob_thumbnail2_window_g1_ParamLimits

0x0e4a,	// (0x0006761a) popup_phob_thumbnail2_window_g1

0xec0c,	// (0x000753dc) call2_cli_visual_pane

0x9be7,	// (0x000703b7) popup_call2_audio_conf_window_ParamLimits

0x9be7,	// (0x000703b7) popup_call2_audio_conf_window

0x9c00,	// (0x000703d0) popup_call2_audio_first_window_ParamLimits

0x9c00,	// (0x000703d0) popup_call2_audio_first_window

0x9c9e,	// (0x0007046e) popup_call2_audio_in_window_ParamLimits

0x9c9e,	// (0x0007046e) popup_call2_audio_in_window

0x9ce2,	// (0x000704b2) popup_call2_audio_out_window_ParamLimits

0x9ce2,	// (0x000704b2) popup_call2_audio_out_window

0x9d4c,	// (0x0007051c) popup_call2_audio_second_window_ParamLimits

0x9d4c,	// (0x0007051c) popup_call2_audio_second_window

0x9daa,	// (0x0007057a) popup_call2_audio_wait_window_ParamLimits

0x9daa,	// (0x0007057a) popup_call2_audio_wait_window

0xec0c,	// (0x000753dc) bg_popup_call2_act_pane_cp03

0xee49,	// (0x00075619) list_conf_pane_cp

0x0e56,	// (0x00067626) popup_call2_audio_conf_window_t1

0x0e64,	// (0x00067634) list_single_graphic_popup_conf2_pane_ParamLimits

0x0e64,	// (0x00067634) list_single_graphic_popup_conf2_pane

0x07b7,	// (0x00066f87) list_highlight_pane_cp04

0x0e77,	// (0x00067647) list_single_graphic_popup_conf2_pane_g1

0x07c8,	// (0x00066f98) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00075d01) list_single_graphic_popup_conf2_pane_g

0x0e81,	// (0x00067651) list_single_graphic_popup_conf2_pane_t1

0x0e8f,	// (0x0006765f) bg_popup_call2_act_pane_cp01_ParamLimits

0x0e8f,	// (0x0006765f) bg_popup_call2_act_pane_cp01

0x0f19,	// (0x000676e9) call_type_pane_cp05_ParamLimits

0x0f19,	// (0x000676e9) call_type_pane_cp05

0x0f6d,	// (0x0006773d) popup_call2_audio_second_window_g1_ParamLimits

0x0f6d,	// (0x0006773d) popup_call2_audio_second_window_g1

0x0fc1,	// (0x00067791) popup_call2_audio_second_window_g2_ParamLimits

0x0fc1,	// (0x00067791) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00075d06) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00075d06) popup_call2_audio_second_window_g

0x1026,	// (0x000677f6) popup_call2_audio_second_window_t1_ParamLimits

0x1026,	// (0x000677f6) popup_call2_audio_second_window_t1

0x10e1,	// (0x000678b1) popup_call2_audio_second_window_t2_ParamLimits

0x10e1,	// (0x000678b1) popup_call2_audio_second_window_t2

0x1134,	// (0x00067904) popup_call2_audio_second_window_t3_ParamLimits

0x1134,	// (0x00067904) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00075d0d) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00075d0d) popup_call2_audio_second_window_t

0xec0c,	// (0x000753dc) bg_popup_call2_in_pane_cp02

0xec16,	// (0x000753e6) call_type_pane_cp04

0xec1e,	// (0x000753ee) popup_call2_audio_wait_window_g1

0xec26,	// (0x000753f6) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x000758e6) popup_call2_audio_wait_window_g

0xec2e,	// (0x000753fe) popup_call2_audio_wait_window_t3

0x1227,	// (0x000679f7) bg_popup_call2_act_pane_ParamLimits

0x1227,	// (0x000679f7) bg_popup_call2_act_pane

0x12e7,	// (0x00067ab7) call_type_pane_cp03_ParamLimits

0x12e7,	// (0x00067ab7) call_type_pane_cp03

0x134b,	// (0x00067b1b) popup_call2_audio_first_window_g1_ParamLimits

0x134b,	// (0x00067b1b) popup_call2_audio_first_window_g1

0x13bb,	// (0x00067b8b) popup_call2_audio_first_window_g2_ParamLimits

0x13bb,	// (0x00067b8b) popup_call2_audio_first_window_g2

0x0a67,	// (0x00067237) popup_call2_audio_first_window_g3_ParamLimits

0x0a67,	// (0x00067237) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00075d16) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00075d16) popup_call2_audio_first_window_g

0x1499,	// (0x00067c69) popup_call2_audio_first_window_t1_ParamLimits

0x1499,	// (0x00067c69) popup_call2_audio_first_window_t1

0x159c,	// (0x00067d6c) popup_call2_audio_first_window_t4_ParamLimits

0x159c,	// (0x00067d6c) popup_call2_audio_first_window_t4

0x167f,	// (0x00067e4f) popup_call2_audio_first_window_t5_ParamLimits

0x167f,	// (0x00067e4f) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00075d21) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00075d21) popup_call2_audio_first_window_t

0xee5f,	// (0x0007562f) bg_popup_call2_act_pane_g1

0x1cee,	// (0x000684be) popup_cale_lunar_info_window_t1

0x1cfc,	// (0x000684cc) popup_cale_lunar_info_window_t2

0x1d0a,	// (0x000684da) popup_cale_lunar_info_window_t3

0xec0c,	// (0x000753dc) bg_popup_call2_bubble_pane

0x1780,	// (0x00067f50) bg_popup_call2_in_pane_cp01_ParamLimits

0x1780,	// (0x00067f50) bg_popup_call2_in_pane_cp01

0x7295,	// (0x0006da65) call_type_pane_cp02

0x17c8,	// (0x00067f98) popup_call2_audio_out_window_g1_ParamLimits

0x17c8,	// (0x00067f98) popup_call2_audio_out_window_g1

0x17f4,	// (0x00067fc4) popup_call2_audio_out_window_g2_ParamLimits

0x17f4,	// (0x00067fc4) popup_call2_audio_out_window_g2

0x181c,	// (0x00067fec) popup_call2_audio_out_window_g3_ParamLimits

0x181c,	// (0x00067fec) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x00075d2a) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x00075d2a) popup_call2_audio_out_window_g

0x1857,	// (0x00068027) popup_call2_audio_out_window_t1_ParamLimits

0x1857,	// (0x00068027) popup_call2_audio_out_window_t1

0x18b6,	// (0x00068086) popup_call2_audio_out_window_t2_ParamLimits

0x18b6,	// (0x00068086) popup_call2_audio_out_window_t2

0x190a,	// (0x000680da) popup_call2_audio_out_window_t3_ParamLimits

0x190a,	// (0x000680da) popup_call2_audio_out_window_t3

0x1920,	// (0x000680f0) popup_call2_audio_out_window_t4_ParamLimits

0x1920,	// (0x000680f0) popup_call2_audio_out_window_t4

0x1936,	// (0x00068106) popup_call2_audio_out_window_t5_ParamLimits

0x1936,	// (0x00068106) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00075d33) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00075d33) popup_call2_audio_out_window_t

0x199a,	// (0x0006816a) bg_popup_call2_in_pane_ParamLimits

0x199a,	// (0x0006816a) bg_popup_call2_in_pane

0x19f6,	// (0x000681c6) popup_call2_audio_in_window_g1_ParamLimits

0x19f6,	// (0x000681c6) popup_call2_audio_in_window_g1

0x1a2e,	// (0x000681fe) popup_call2_audio_in_window_g2_ParamLimits

0x1a2e,	// (0x000681fe) popup_call2_audio_in_window_g2

0x1a66,	// (0x00068236) popup_call2_audio_in_window_g3_ParamLimits

0x1a66,	// (0x00068236) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00075d40) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00075d40) popup_call2_audio_in_window_g

0x1abe,	// (0x0006828e) popup_call2_audio_in_window_t1_ParamLimits

0x1abe,	// (0x0006828e) popup_call2_audio_in_window_t1

0x1b3e,	// (0x0006830e) popup_call2_audio_in_window_t2_ParamLimits

0x1b3e,	// (0x0006830e) popup_call2_audio_in_window_t2

0x1bbe,	// (0x0006838e) popup_call2_audio_in_window_t3_ParamLimits

0x1bbe,	// (0x0006838e) popup_call2_audio_in_window_t3

0x1bd8,	// (0x000683a8) popup_call2_audio_in_window_t4_ParamLimits

0x1bd8,	// (0x000683a8) popup_call2_audio_in_window_t4

0x1bea,	// (0x000683ba) popup_call2_audio_in_window_t5_ParamLimits

0x1bea,	// (0x000683ba) popup_call2_audio_in_window_t5

0x1bff,	// (0x000683cf) popup_call2_audio_in_window_t6_ParamLimits

0x1bff,	// (0x000683cf) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x00075d49) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x00075d49) popup_call2_audio_in_window_t

0xee5f,	// (0x0007562f) bg_popup_call2_in_pane_g1

0x1d18,	// (0x000684e8) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00075db1) popup_cale_lunar_info_window_t

0xee67,	// (0x00075637) bg_popup_call2_rect_pane_ParamLimits

0xee67,	// (0x00075637) bg_popup_call2_rect_pane

0xec0c,	// (0x000753dc) call2_cli_visual_graphic_pane

0xec0c,	// (0x000753dc) call2_cli_visual_text_pane

0xa26d,	// (0x00070a3d) smil_status_volume_pane_g3

0x0002,

0xef8f,	// (0x0007575f) call2_cli_visual_graphic_pane_g1

0xef8f,	// (0x0007575f) call2_cli_visual_graphic_pane_g2

0xef8f,	// (0x0007575f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x00075d56) call2_cli_visual_graphic_pane_g

0x1c14,	// (0x000683e4) bg_popup_call2_rect_pane_g1

0xf02d,	// (0x000757fd) bg_popup_call2_rect_pane_g2

0x1c1c,	// (0x000683ec) bg_popup_call2_rect_pane_g3

0x1c24,	// (0x000683f4) bg_popup_call2_rect_pane_g4

0x1c2c,	// (0x000683fc) bg_popup_call2_rect_pane_g5

0x1c34,	// (0x00068404) bg_popup_call2_rect_pane_g6

0x1c3c,	// (0x0006840c) bg_popup_call2_rect_pane_g7

0x1c44,	// (0x00068414) bg_popup_call2_rect_pane_g8

0x1c4c,	// (0x0006841c) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x00075d5d) bg_popup_call2_rect_pane_g

0x1c54,	// (0x00068424) bg_popup_call2_bubble_pane_g1

0x1c5c,	// (0x0006842c) bg_popup_call2_bubble_pane_g2

0x1c64,	// (0x00068434) bg_popup_call2_bubble_pane_g3

0x1c6c,	// (0x0006843c) bg_popup_call2_bubble_pane_g4

0x1c74,	// (0x00068444) bg_popup_call2_bubble_pane_g5

0x1c7c,	// (0x0006844c) bg_popup_call2_bubble_pane_g6

0x1c84,	// (0x00068454) bg_popup_call2_bubble_pane_g7

0x1c8c,	// (0x0006845c) bg_popup_call2_bubble_pane_g8

0x1c94,	// (0x00068464) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00075d70) bg_popup_call2_bubble_pane_g

0x788e,	// (0x0006e05e) aid_cale_week_size_cell_pane

0x7e2e,	// (0x0006e5fe) aid_cams_cif_uncrop_pane_ParamLimits

0x7e2e,	// (0x0006e5fe) aid_cams_cif_uncrop_pane

0x7f8b,	// (0x0006e75b) aid_cams_size_cell_ParamLimits

0x7f8b,	// (0x0006e75b) aid_cams_size_cell

0x7f97,	// (0x0006e767) grid_cams_pane_ParamLimits

0x7fa5,	// (0x0006e775) linegrid_cams_pane_ParamLimits

0x8076,	// (0x0006e846) call_video_pane_t1

0x8093,	// (0x0006e863) call_video_pane_t2

0x0001,

0xf28d,	// (0x00075a5d) call_video_pane_t

0x854d,	// (0x0006ed1d) aid_cale_month_size_cell_pane_ParamLimits

0x854d,	// (0x0006ed1d) aid_cale_month_size_cell_pane

0xf62a,	// (0x00075dfa) smil_status_volume_pane_g

0xa27a,	// (0x00070a4a) volume_smil_pane_ParamLimits

0x6e65,	// (0x0006d635) aid_popup2_width_pane

0x77a8,	// (0x0006df78) cell_qdial_pane_g4_ParamLimits

0x77a8,	// (0x0006df78) cell_qdial_pane_g4

0x91fe,	// (0x0006f9ce) aid_blid_cardinal_pane_ParamLimits

0x920e,	// (0x0006f9de) aid_blid_destination_pane_ParamLimits

0x920e,	// (0x0006f9de) aid_blid_destination_pane

0xee67,	// (0x00075637) bg_popup_call_poc_act_pane_ParamLimits

0xee67,	// (0x00075637) bg_popup_call_poc_act_pane

0xee67,	// (0x00075637) bg_popup_call_poc_inact_pane_ParamLimits

0xee67,	// (0x00075637) bg_popup_call_poc_inact_pane

0x1c9c,	// (0x0006846c) bg_popup_call_poc_act_pane_g1

0x1ca4,	// (0x00068474) bg_popup_call_poc_act_pane_g2

0x1cac,	// (0x0006847c) bg_popup_call_poc_act_pane_g3

0x1c6c,	// (0x0006843c) bg_popup_call_poc_act_pane_g4

0x1c74,	// (0x00068444) bg_popup_call_poc_act_pane_g5

0x1cb4,	// (0x00068484) bg_popup_call_poc_act_pane_g6

0x1c84,	// (0x00068454) bg_popup_call_poc_act_pane_g7

0x1cbc,	// (0x0006848c) bg_popup_call_poc_act_pane_g8

0xec0c,	// (0x000753dc) main_usb_pane

0x1e19,	// (0x000685e9) popup_cale_lunar_info_window

0x83ab,	// (0x0006eb7b) im_reading_pane_t1_ParamLimits

0x0159,	// (0x00066929) list_im_pane_ParamLimits

0x016a,	// (0x0006693a) scroll_pane_cp07_ParamLimits

0xec0c,	// (0x000753dc) grid_highlight_pane_cp012

0xee67,	// (0x00075637) mup_scale_pane_ParamLimits

0x0a67,	// (0x00067237) main_usb_pane_g1_ParamLimits

0x0a67,	// (0x00067237) main_usb_pane_g1

0x9e13,	// (0x000705e3) main_usb_pane_g2_ParamLimits

0x9e13,	// (0x000705e3) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00075d9a) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00075d9a) main_usb_pane_g

0x9e1f,	// (0x000705ef) main_usb_pane_t1_ParamLimits

0x9e1f,	// (0x000705ef) main_usb_pane_t1

0x9e31,	// (0x00070601) main_usb_pane_t2_ParamLimits

0x9e31,	// (0x00070601) main_usb_pane_t2

0x9e43,	// (0x00070613) main_usb_pane_t3_ParamLimits

0x9e43,	// (0x00070613) main_usb_pane_t3

0x9e55,	// (0x00070625) main_usb_pane_t4_ParamLimits

0x9e55,	// (0x00070625) main_usb_pane_t4

0x9e67,	// (0x00070637) main_usb_pane_t5_ParamLimits

0x9e67,	// (0x00070637) main_usb_pane_t5

0x9e79,	// (0x00070649) main_usb_pane_t6_ParamLimits

0x9e79,	// (0x00070649) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00075d9f) main_usb_pane_t_ParamLimits

0x919d,	// (0x0006f96d) aid_text_placing

0x91a8,	// (0x0006f978) main_location2_pane_t1_ParamLimits

0x91be,	// (0x0006f98e) main_location2_pane_t2_ParamLimits

0x91d4,	// (0x0006f9a4) main_location2_pane_t3_ParamLimits

0x91ea,	// (0x0006f9ba) main_location2_pane_t4_ParamLimits

0x91ea,	// (0x0006f9ba) main_location2_pane_t4

0xf3ee,	// (0x00075bbe) main_location2_pane_t_ParamLimits

0xeea3,	// (0x00075673) find_pinb_pane_g2_ParamLimits

0xeea3,	// (0x00075673) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0007590c) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0007590c) find_pinb_pane_g

0xeeaf,	// (0x0007567f) find_pinb_pane_t1_ParamLimits

0xeec1,	// (0x00075691) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00075911) find_pinb_pane_t_ParamLimits

0xec0c,	// (0x000753dc) main_call3_pane

0x8959,	// (0x0006f129) cale_month_day_heading_pane_t1_ParamLimits

0x89b7,	// (0x0006f187) cale_month_day_heading_pane_t2_ParamLimits

0x8a1c,	// (0x0006f1ec) cale_month_day_heading_pane_t3_ParamLimits

0x8a81,	// (0x0006f251) cale_month_day_heading_pane_t4_ParamLimits

0x8ae6,	// (0x0006f2b6) cale_month_day_heading_pane_t5_ParamLimits

0x8b53,	// (0x0006f323) cale_month_day_heading_pane_t6_ParamLimits

0x8bc8,	// (0x0006f398) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00075a95) cale_month_day_heading_pane_t_ParamLimits

0x03b6,	// (0x00066b86) smil_status_volume_pane

0x99d1,	// (0x000701a1) postcard_address_pane_ParamLimits

0x99d1,	// (0x000701a1) postcard_address_pane

0x99df,	// (0x000701af) postcard_message_pane_ParamLimits

0x99df,	// (0x000701af) postcard_message_pane

0x9de9,	// (0x000705b9) call2_cli_visual_pane_t1_ParamLimits

0x9de9,	// (0x000705b9) call2_cli_visual_pane_t1

0xa3c0,	// (0x00070b90) postcard_message_pane_t1_ParamLimits

0xa3c0,	// (0x00070b90) postcard_message_pane_t1

0x1f29,	// (0x000686f9) postcard_address_pane_t1_ParamLimits

0x1f29,	// (0x000686f9) postcard_address_pane_t1

0xa3b1,	// (0x00070b81) popup_call3_audio_in_window_ParamLimits

0xa3b1,	// (0x00070b81) popup_call3_audio_in_window

0xa28f,	// (0x00070a5f) bg_popup_call3_in_pane_ParamLimits

0xa28f,	// (0x00070a5f) bg_popup_call3_in_pane

0xa2f7,	// (0x00070ac7) popup_call3_audio_in_window_g1_ParamLimits

0xa2f7,	// (0x00070ac7) popup_call3_audio_in_window_g1

0xa30f,	// (0x00070adf) popup_call3_audio_in_window_g2_ParamLimits

0xa30f,	// (0x00070adf) popup_call3_audio_in_window_g2

0xa327,	// (0x00070af7) popup_call3_audio_in_window_g3_ParamLimits

0xa327,	// (0x00070af7) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00075e01) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00075e01) popup_call3_audio_in_window_g

0xa34f,	// (0x00070b1f) popup_call3_audio_in_window_t1_ParamLimits

0xa34f,	// (0x00070b1f) popup_call3_audio_in_window_t1

0xa377,	// (0x00070b47) popup_call3_audio_in_window_t2_ParamLimits

0xa377,	// (0x00070b47) popup_call3_audio_in_window_t2

0xa39f,	// (0x00070b6f) popup_call3_audio_in_window_t3_ParamLimits

0xa39f,	// (0x00070b6f) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00075e0a) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00075e0a) popup_call3_audio_in_window_t

0x0996,	// (0x00067166) bg_popup_call3_rect_pane

0x1c14,	// (0x000683e4) bg_popup_call3_rect_pane_g1

0xf02d,	// (0x000757fd) bg_popup_call3_rect_pane_g2

0x1c1c,	// (0x000683ec) bg_popup_call3_rect_pane_g3

0x1c24,	// (0x000683f4) bg_popup_call3_rect_pane_g4

0x1c2c,	// (0x000683fc) bg_popup_call3_rect_pane_g5

0x1c34,	// (0x00068404) bg_popup_call3_rect_pane_g6

0x1c3c,	// (0x0006840c) bg_popup_call3_rect_pane_g7

0x9630,	// (0x0006fe00) mup_visualizer_osc_pane

0x0a75,	// (0x00067245) mup_visualizer_spec_pane

0xa2af,	// (0x00070a7f) call3_video_qcif_pane_ParamLimits

0xa2af,	// (0x00070a7f) call3_video_qcif_pane

0xa2c1,	// (0x00070a91) call3_video_qcif_uncrop_pane_ParamLimits

0xa2c1,	// (0x00070a91) call3_video_qcif_uncrop_pane

0xa2d1,	// (0x00070aa1) call3_video_subqcif_pane_ParamLimits

0xa2d1,	// (0x00070aa1) call3_video_subqcif_pane

0xa2e5,	// (0x00070ab5) call3_video_subqcif_uncrop_pane_ParamLimits

0xa2e5,	// (0x00070ab5) call3_video_subqcif_uncrop_pane

0xa33f,	// (0x00070b0f) popup_call3_audio_in_window_g4_ParamLimits

0xa33f,	// (0x00070b0f) popup_call3_audio_in_window_g4

0xa25c,	// (0x00070a2c) mup_spec_half_pane

0xa265,	// (0x00070a35) mup_spec_half_pane_cp

0x1ec7,	// (0x00068697) mup_osc_middle_pane

0x1ed0,	// (0x000686a0) mup_visualizer_osc_pane_g1

0xa23c,	// (0x00070a0c) mup_spec_bar_pane_ParamLimits

0xa23c,	// (0x00070a0c) mup_spec_bar_pane

0x1eb4,	// (0x00068684) mup_spec_bar_pane_g1

0x1ebe,	// (0x0006868e) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00075df5) mup_spec_bar_pane_g

0x788e,	// (0x0006e05e) aid_cale_week_size_cell_pane_ParamLimits

0x78a1,	// (0x0006e071) bg_cale_heading_pane_ParamLimits

0xf061,	// (0x00075831) bg_cale_pane_cp01_ParamLimits

0x78bd,	// (0x0006e08d) cale_week_corner_pane_ParamLimits

0x78d3,	// (0x0006e0a3) cale_week_day_heading_pane_ParamLimits

0x78ef,	// (0x0006e0bf) cale_week_scroll_pane_g1_ParamLimits

0x7908,	// (0x0006e0d8) cale_week_scroll_pane_g2_ParamLimits

0x7919,	// (0x0006e0e9) cale_week_scroll_pane_g3_ParamLimits

0x792a,	// (0x0006e0fa) cale_week_scroll_pane_g4_ParamLimits

0x793b,	// (0x0006e10b) cale_week_scroll_pane_g5_ParamLimits

0x794c,	// (0x0006e11c) cale_week_scroll_pane_g6_ParamLimits

0x795f,	// (0x0006e12f) cale_week_scroll_pane_g7_ParamLimits

0x7972,	// (0x0006e142) cale_week_scroll_pane_g8_ParamLimits

0x7985,	// (0x0006e155) cale_week_scroll_pane_g9_ParamLimits

0x7996,	// (0x0006e166) cale_week_scroll_pane_g10_ParamLimits

0x79a7,	// (0x0006e177) cale_week_scroll_pane_g11_ParamLimits

0x79b8,	// (0x0006e188) cale_week_scroll_pane_g12_ParamLimits

0x79c9,	// (0x0006e199) cale_week_scroll_pane_g13_ParamLimits

0x79da,	// (0x0006e1aa) cale_week_scroll_pane_g14_ParamLimits

0x79f3,	// (0x0006e1c3) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0007599d) cale_week_scroll_pane_g_ParamLimits

0x7a0c,	// (0x0006e1dc) cale_week_time_pane_ParamLimits

0x7a1f,	// (0x0006e1ef) grid_cale_week_pane_ParamLimits

0xf07a,	// (0x0007584a) listscroll_cale_week_pane_t1

0x7a3c,	// (0x0006e20c) scroll_pane_cp08_ParamLimits

0x859e,	// (0x0006ed6e) cale_month_corner_pane_ParamLimits

0x0380,	// (0x00066b50) cale_month_pane_t1

0x8908,	// (0x0006f0d8) cale_month_week_pane_ParamLimits

0x0a67,	// (0x00067237) popup_call_status_window_g1_ParamLimits

0x8fa6,	// (0x0006f776) popup_call_status_window_g2_ParamLimits

0x8fb2,	// (0x0006f782) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00075b45) popup_call_status_window_g_ParamLimits

0x06d1,	// (0x00066ea1) aid_call2_pane

0x5f31,	// (0x0006c701) msg_header_pane_g1

0x99d1,	// (0x000701a1) postcard_address2_pane_ParamLimits

0x99d1,	// (0x000701a1) postcard_address2_pane

0x99df,	// (0x000701af) postcard_message2_pane_ParamLimits

0x99df,	// (0x000701af) postcard_message2_pane

0xa1f6,	// (0x000709c6) message2_row_pane_ParamLimits

0xa1f6,	// (0x000709c6) message2_row_pane

0x1e6f,	// (0x0006863f) address2_row_pane_ParamLimits

0x1e6f,	// (0x0006863f) address2_row_pane

0x1e82,	// (0x00068652) postcard_message2_row_pane_g1

0x1e8a,	// (0x0006865a) postcard_message2_row_pane_t1

0x1e82,	// (0x00068652) address2_row_pane_g1

0x1e8a,	// (0x0006865a) address2_row_pane_t1

0x7cee,	// (0x0006e4be) aid_size_cell_vorec

0xec0c,	// (0x000753dc) main_rss_pane

0xa210,	// (0x000709e0) rss_list_single_pane_ParamLimits

0xa210,	// (0x000709e0) rss_list_single_pane

0x1e98,	// (0x00068668) rss_list_single_pane_t1

0x1ea6,	// (0x00068676) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00075df0) rss_list_single_pane_t

0xec0c,	// (0x000753dc) main_camera2_pane

0xec0c,	// (0x000753dc) main_video2_pane

0xa424,	// (0x00070bf4) cams_zoom_pane_cp2_ParamLimits

0xa424,	// (0x00070bf4) cams_zoom_pane_cp2

0xa430,	// (0x00070c00) image2_vga_pane_ParamLimits

0xa430,	// (0x00070c00) image2_vga_pane

0xa43f,	// (0x00070c0f) main_camera2_pane_g1_ParamLimits

0xa43f,	// (0x00070c0f) main_camera2_pane_g1

0xa44b,	// (0x00070c1b) main_camera2_pane_g2_ParamLimits

0xa44b,	// (0x00070c1b) main_camera2_pane_g2

0xa457,	// (0x00070c27) main_camera2_pane_g3_ParamLimits

0xa457,	// (0x00070c27) main_camera2_pane_g3

0xa463,	// (0x00070c33) main_camera2_pane_g4_ParamLimits

0xa463,	// (0x00070c33) main_camera2_pane_g4

0xa46f,	// (0x00070c3f) main_camera2_pane_g5_ParamLimits

0xa46f,	// (0x00070c3f) main_camera2_pane_g5

0xa47b,	// (0x00070c4b) main_camera2_pane_g6_ParamLimits

0xa47b,	// (0x00070c4b) main_camera2_pane_g6

0xa487,	// (0x00070c57) main_camera2_pane_g7_ParamLimits

0xa487,	// (0x00070c57) main_camera2_pane_g7

0xa493,	// (0x00070c63) main_camera2_pane_g8_ParamLimits

0xa493,	// (0x00070c63) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00075e11) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00075e11) main_camera2_pane_g

0xa4ab,	// (0x00070c7b) main_camera2_pane_t1_ParamLimits

0xa4ab,	// (0x00070c7b) main_camera2_pane_t1

0xa4bd,	// (0x00070c8d) main_camera2_pane_t2_ParamLimits

0xa4bd,	// (0x00070c8d) main_camera2_pane_t2

0xa4cf,	// (0x00070c9f) main_camera2_pane_t3_ParamLimits

0xa4cf,	// (0x00070c9f) main_camera2_pane_t3

0xa4e1,	// (0x00070cb1) main_camera2_pane_t4_ParamLimits

0xa4e1,	// (0x00070cb1) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00075e24) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00075e24) main_camera2_pane_t

0xa53e,	// (0x00070d0e) cams_zoom_pane_cp4_ParamLimits

0xa53e,	// (0x00070d0e) cams_zoom_pane_cp4

0xa54e,	// (0x00070d1e) image2_cif_pane_ParamLimits

0xa54e,	// (0x00070d1e) image2_cif_pane

0xa563,	// (0x00070d33) image2_subqcif_pane_ParamLimits

0xa563,	// (0x00070d33) image2_subqcif_pane

0xa572,	// (0x00070d42) main_video2_pane_g1_ParamLimits

0xa572,	// (0x00070d42) main_video2_pane_g1

0xa584,	// (0x00070d54) main_video2_pane_g2_ParamLimits

0xa584,	// (0x00070d54) main_video2_pane_g2

0xa594,	// (0x00070d64) main_video2_pane_g3_ParamLimits

0xa594,	// (0x00070d64) main_video2_pane_g3

0xa5a4,	// (0x00070d74) main_video2_pane_g4_ParamLimits

0xa5a4,	// (0x00070d74) main_video2_pane_g4

0xa5b4,	// (0x00070d84) main_video2_pane_g5_ParamLimits

0xa5b4,	// (0x00070d84) main_video2_pane_g5

0xa5c4,	// (0x00070d94) main_video2_pane_g6_ParamLimits

0xa5c4,	// (0x00070d94) main_video2_pane_g6

0x0005,

0xf663,	// (0x00075e33) main_video2_pane_g_ParamLimits

0xf663,	// (0x00075e33) main_video2_pane_g

0xa5d6,	// (0x00070da6) main_video2_pane_t1_ParamLimits

0xa5d6,	// (0x00070da6) main_video2_pane_t1

0xa5f0,	// (0x00070dc0) main_video2_pane_t2_ParamLimits

0xa5f0,	// (0x00070dc0) main_video2_pane_t2

0xa616,	// (0x00070de6) main_video2_pane_t3_ParamLimits

0xa616,	// (0x00070de6) main_video2_pane_t3

0x0002,

0xf670,	// (0x00075e40) main_video2_pane_t_ParamLimits

0xf670,	// (0x00075e40) main_video2_pane_t

0x9f30,	// (0x00070700) call_muted_g2

0x0001,

0xf612,	// (0x00075de2) call_muted_g

0xec0c,	// (0x000753dc) main_mup2_pane

0x1f99,	// (0x00068769) main_mup2_pane_g1_ParamLimits

0x1f99,	// (0x00068769) main_mup2_pane_g1

0xa63c,	// (0x00070e0c) main_mup2_pane_g2_ParamLimits

0xa63c,	// (0x00070e0c) main_mup2_pane_g2

0xa8c0,	// (0x00071090) main_mup_pane_g13_cp1

0xa8c8,	// (0x00071098) mup_volume_pane_cp1

0xa65e,	// (0x00070e2e) main_mup2_pane_g4_ParamLimits

0xa65e,	// (0x00070e2e) main_mup2_pane_g4

0xa66f,	// (0x00070e3f) main_mup2_pane_g5_ParamLimits

0xa66f,	// (0x00070e3f) main_mup2_pane_g5

0xa680,	// (0x00070e50) main_mup2_pane_g6_ParamLimits

0xa680,	// (0x00070e50) main_mup2_pane_g6

0xa691,	// (0x00070e61) main_mup2_pane_g7_ParamLimits

0xa691,	// (0x00070e61) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00075e47) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00075e47) main_mup2_pane_g

0xa6ad,	// (0x00070e7d) main_mup2_pane_t1_ParamLimits

0xa6ad,	// (0x00070e7d) main_mup2_pane_t1

0xa6c4,	// (0x00070e94) main_mup2_pane_t2_ParamLimits

0xa6c4,	// (0x00070e94) main_mup2_pane_t2

0xa6db,	// (0x00070eab) main_mup2_pane_t3_ParamLimits

0xa6db,	// (0x00070eab) main_mup2_pane_t3

0xa6f2,	// (0x00070ec2) main_mup2_pane_t4_ParamLimits

0xa6f2,	// (0x00070ec2) main_mup2_pane_t4

0xa70c,	// (0x00070edc) main_mup2_pane_t5_ParamLimits

0xa70c,	// (0x00070edc) main_mup2_pane_t5

0xa726,	// (0x00070ef6) main_mup2_pane_t6_ParamLimits

0xa726,	// (0x00070ef6) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00075e56) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00075e56) main_mup2_pane_t

0xa75e,	// (0x00070f2e) mup2_visualizer_pane_ParamLimits

0xa75e,	// (0x00070f2e) mup2_visualizer_pane

0xa794,	// (0x00070f64) mup_progress_pane_cp_ParamLimits

0xa794,	// (0x00070f64) mup_progress_pane_cp

0xa8ab,	// (0x0007107b) mup_volume_pane_cp_ParamLimits

0xa8ab,	// (0x0007107b) mup_volume_pane_cp

0xa7ad,	// (0x00070f7d) mup2_visualizer_pane_g1_ParamLimits

0xa7ad,	// (0x00070f7d) mup2_visualizer_pane_g1

0x1f6b,	// (0x0006873b) mup2_visualizer_pane_g2_ParamLimits

0x1f6b,	// (0x0006873b) mup2_visualizer_pane_g2

0xa7c2,	// (0x00070f92) mup2_visualizer_pane_g3_ParamLimits

0xa7c2,	// (0x00070f92) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00075e63) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00075e63) mup2_visualizer_pane_g

0x0ce0,	// (0x000674b0) aid_size_cell_fmradio

0xa046,	// (0x00070816) aid_height_parent_landcape

0x01e8,	// (0x000669b8) wml_content_pane_cp

0x01f0,	// (0x000669c0) wml_tabs_pane

0x01f9,	// (0x000669c9) popup_wml_miniature_window

0x0201,	// (0x000669d1) scroll_pane_cp021

0x0215,	// (0x000669e5) wml_content_pane_comp8

0xec0c,	// (0x000753dc) bg_popup_sub_pane_cp05

0x1f89,	// (0x00068759) popup_wml_miniature_window_g1

0x1f91,	// (0x00068761) wml_miniature_view_pane

0xa7ce,	// (0x00070f9e) aid_size_wml_view

0xa7d6,	// (0x00070fa6) wml_miniature_view_pane_g1

0xa7df,	// (0x00070faf) wml_miniature_view_pane_g2

0xa7e8,	// (0x00070fb8) wml_miniature_view_pane_g3

0xa7f0,	// (0x00070fc0) wml_miniature_view_pane_g4

0xa7f8,	// (0x00070fc8) wml_miniature_view_pane_g5

0xa800,	// (0x00070fd0) wml_miniature_view_pane_g6

0xa808,	// (0x00070fd8) wml_miniature_view_pane_g7

0xa810,	// (0x00070fe0) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00075e6a) wml_miniature_view_pane_g

0x1f99,	// (0x00068769) background_graphic_ParamLimits

0x1f99,	// (0x00068769) background_graphic

0x1fa5,	// (0x00068775) wml_tabs_2_pane

0x1fae,	// (0x0006877e) wml_tabs_3_pane_ParamLimits

0x1fae,	// (0x0006877e) wml_tabs_3_pane

0x1fc0,	// (0x00068790) wml_tabs_4_pane_ParamLimits

0x1fc0,	// (0x00068790) wml_tabs_4_pane

0x1fd6,	// (0x000687a6) wml_tabs_5_pane_ParamLimits

0x1fd6,	// (0x000687a6) wml_tabs_5_pane

0x1ff0,	// (0x000687c0) wml_tabs_pane_g2_ParamLimits

0x1ff0,	// (0x000687c0) wml_tabs_pane_g2

0x2004,	// (0x000687d4) wml_tabs_pane_g3_ParamLimits

0x2004,	// (0x000687d4) wml_tabs_pane_g3

0xa818,	// (0x00070fe8) wml_tabs_2_active_pane_ParamLimits

0xa818,	// (0x00070fe8) wml_tabs_2_active_pane

0xa82a,	// (0x00070ffa) wml_tabs_2_passive_pane_ParamLimits

0xa82a,	// (0x00070ffa) wml_tabs_2_passive_pane

0xa83c,	// (0x0007100c) wml_tabs_3_active_pane_cp_ParamLimits

0xa83c,	// (0x0007100c) wml_tabs_3_active_pane_cp

0xa84f,	// (0x0007101f) wml_tabs_3_passive_pane_ParamLimits

0xa84f,	// (0x0007101f) wml_tabs_3_passive_pane

0xa860,	// (0x00071030) wml_tabs_3_passive_pane_cp_ParamLimits

0xa860,	// (0x00071030) wml_tabs_3_passive_pane_cp

0xa875,	// (0x00071045) tabs_4_active_pane

0xa87d,	// (0x0007104d) tabs_4_passive_pane

0xa885,	// (0x00071055) tabs_4_passive_pane_cp

0xa88d,	// (0x0007105d) tabs_4_passive_pane_cp2

0x9e0b,	// (0x000705db) aid_height_text

0x95f9,	// (0x0006fdc9) mup_volume_cont_pane_ParamLimits

0x95f9,	// (0x0006fdc9) mup_volume_cont_pane

0x7408,	// (0x0006dbd8) aid_size_cell_pinb

0x7412,	// (0x0006dbe2) aid_size_list_pinb

0xa77d,	// (0x00070f4d) mup2_volume_cont_pane_ParamLimits

0xa77d,	// (0x00070f4d) mup2_volume_cont_pane

0xa897,	// (0x00071067) mup2_volume_cont_pane_g1_ParamLimits

0xa897,	// (0x00071067) mup2_volume_cont_pane_g1

0x6e71,	// (0x0006d641) aid_size_cell_touch_ParamLimits

0x6e71,	// (0x0006d641) aid_size_cell_touch

0x711a,	// (0x0006d8ea) touch_pane_ParamLimits

0x711a,	// (0x0006d8ea) touch_pane

0x6e53,	// (0x0006d623) main_rss2_pane

0x205a,	// (0x0006882a) listscroll_rss2_pane

0x2063,	// (0x00068833) rss2_navigation_pane

0x206b,	// (0x0006883b) list_rss2_pane

0x085c,	// (0x0006702c) scroll_pane_cp22

0x2073,	// (0x00068843) rss2_navigation_pane_g1

0x207c,	// (0x0006884c) rss2_navigation_pane_g2

0x2084,	// (0x00068854) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00075e7b) rss2_navigation_pane_g

0x208c,	// (0x0006885c) rss2_navigation_pane_t1

0xa8d0,	// (0x000710a0) rss2_list_single_pane_ParamLimits

0xa8d0,	// (0x000710a0) rss2_list_single_pane

0x209a,	// (0x0006886a) rss2_list_single_pane_t2

0x20a8,	// (0x00068878) rss2_list_single_pane_t3_ParamLimits

0x20a8,	// (0x00068878) rss2_list_single_pane_t3

0x20c5,	// (0x00068895) rss2_list_single_pane_t4

0x8dc8,	// (0x0006f598) smil_status_pane_g1

0xa05d,	// (0x0007082d) main_image2_pane_ParamLimits

0xa05d,	// (0x0007082d) main_image2_pane

0xa49f,	// (0x00070c6f) main_camera2_pane_g9_ParamLimits

0xa49f,	// (0x00070c6f) main_camera2_pane_g9

0xa4f3,	// (0x00070cc3) main_camera2_pane_t5_ParamLimits

0xa4f3,	// (0x00070cc3) main_camera2_pane_t5

0xa505,	// (0x00070cd5) main_camera2_pane_t6_ParamLimits

0xa505,	// (0x00070cd5) main_camera2_pane_t6

0xa8f3,	// (0x000710c3) main_image2_pane_g1_ParamLimits

0xa8f3,	// (0x000710c3) main_image2_pane_g1

0x9ba8,	// (0x00070378) smil2_video_pane_ParamLimits

0x9ba8,	// (0x00070378) smil2_video_pane

0x5cbd,	// (0x0006c48d) aid_zoom_text_primary_cp

0x70bf,	// (0x0006d88f) popup_preview_fixed_window

0x0151,	// (0x00066921) im_reading_pane_g1

0xa3e9,	// (0x00070bb9) cams2_bc_adjust_pane_cp_ParamLimits

0xa3e9,	// (0x00070bb9) cams2_bc_adjust_pane_cp

0xa530,	// (0x00070d00) cams2_bc_adjust_pane_ParamLimits

0xa530,	// (0x00070d00) cams2_bc_adjust_pane

0xa8ff,	// (0x000710cf) cams2_bc_adjust_pane_g1

0xa907,	// (0x000710d7) cams2_slider_pane

0xa910,	// (0x000710e0) cams2_slider_pane_g1

0xa919,	// (0x000710e9) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00075e82) cams2_slider_pane_g

0x7503,	// (0x0006dcd3) calc_display_pane_ParamLimits

0x7521,	// (0x0006dcf1) calc_paper_pane_ParamLimits

0x753d,	// (0x0006dd0d) grid_calc_pane_ParamLimits

0x9010,	// (0x0006f7e0) popup_clock_digital_window_t1_ParamLimits

0x0c7d,	// (0x0006744d) main_image_pane_t1

0x74e9,	// (0x0006dcb9) aid_size_cell_calc_ParamLimits

0x74e9,	// (0x0006dcb9) aid_size_cell_calc

0xa086,	// (0x00070856) popup_blid_sat_info2_window_ParamLimits

0xa086,	// (0x00070856) popup_blid_sat_info2_window

0x210f,	// (0x000688df) aid_size_cell_blid

0x2117,	// (0x000688e7) bg_popup_window_pane_cp07

0x213a,	// (0x0006890a) grid_popup_blid_pane

0x2144,	// (0x00068914) heading_pane_cp05_ParamLimits

0x2144,	// (0x00068914) heading_pane_cp05

0x220e,	// (0x000689de) cell_popup_blid_pane_ParamLimits

0x220e,	// (0x000689de) cell_popup_blid_pane

0x2238,	// (0x00068a08) cell_popup_blid_pane_g1

0x2240,	// (0x00068a10) cell_popup_blid_pane_t1

0xa743,	// (0x00070f13) mup2_indicator_pane_ParamLimits

0xa743,	// (0x00070f13) mup2_indicator_pane

0x0996,	// (0x00067166) mup2_visualizer_osc_pane

0x1f77,	// (0x00068747) mup2_visualizer_spec_pane_ParamLimits

0x1f77,	// (0x00068747) mup2_visualizer_spec_pane

0xa933,	// (0x00071103) mup2_spec_half_pane

0xa93c,	// (0x0007110c) mup2_spec_half_pane_cp

0xa944,	// (0x00071114) mup2_spec_bar_pane_ParamLimits

0xa944,	// (0x00071114) mup2_spec_bar_pane

0x1eb4,	// (0x00068684) mup2_spec_bar_pane_g1

0x1ebe,	// (0x0006868e) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00075df5) mup2_spec_bar_pane_g

0xa963,	// (0x00071133) mup2_osc_middle_pane

0x1ed0,	// (0x000686a0) mup2_visualizer_osc_pane_g1

0x7191,	// (0x0006d961) popup_number_entry_window_t1_ParamLimits

0x71a4,	// (0x0006d974) popup_number_entry_window_t2_ParamLimits

0x71b6,	// (0x0006d986) popup_number_entry_window_t3_ParamLimits

0x71c8,	// (0x0006d998) popup_number_entry_window_t5_ParamLimits

0x71c8,	// (0x0006d998) popup_number_entry_window_t5

0xf0e7,	// (0x000758b7) popup_number_entry_window_t_ParamLimits

0x71fd,	// (0x0006d9cd) text_title_cp2_ParamLimits

0x9895,	// (0x00070065) aid_hotspot_pointer_text2_pane

0x992f,	// (0x000700ff) main_viewer_pane_g9_ParamLimits

0x992f,	// (0x000700ff) main_viewer_pane_g9

0x0380,	// (0x00066b50) cale_month_pane_t1_ParamLimits

0x03eb,	// (0x00066bbb) bg_cale_pane_ParamLimits

0x0403,	// (0x00066bd3) list_cale_pane_ParamLimits

0xf07a,	// (0x0007584a) listscroll_cale_day_pane_t1

0x0414,	// (0x00066be4) scroll_pane_cp09_ParamLimits

0x9638,	// (0x0006fe08) main_mup_eq_pane_t1_ParamLimits

0x9638,	// (0x0006fe08) main_mup_eq_pane_t1

0x9654,	// (0x0006fe24) main_mup_eq_pane_t2_ParamLimits

0x9654,	// (0x0006fe24) main_mup_eq_pane_t2

0x9670,	// (0x0006fe40) main_mup_eq_pane_t3_ParamLimits

0x9670,	// (0x0006fe40) main_mup_eq_pane_t3

0x968a,	// (0x0006fe5a) main_mup_eq_pane_t4_ParamLimits

0x968a,	// (0x0006fe5a) main_mup_eq_pane_t4

0x96a4,	// (0x0006fe74) main_mup_eq_pane_t5_ParamLimits

0x96a4,	// (0x0006fe74) main_mup_eq_pane_t5

0x96be,	// (0x0006fe8e) main_mup_eq_pane_t6_ParamLimits

0x96be,	// (0x0006fe8e) main_mup_eq_pane_t6

0x96d4,	// (0x0006fea4) main_mup_eq_pane_t7_ParamLimits

0x96d4,	// (0x0006fea4) main_mup_eq_pane_t7

0x96ea,	// (0x0006feba) main_mup_eq_pane_t8_ParamLimits

0x96ea,	// (0x0006feba) main_mup_eq_pane_t8

0x9700,	// (0x0006fed0) main_mup_eq_pane_t9_ParamLimits

0x9700,	// (0x0006fed0) main_mup_eq_pane_t9

0x971c,	// (0x0006feec) main_mup_eq_pane_t10_ParamLimits

0x971c,	// (0x0006feec) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00075c44) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00075c44) main_mup_eq_pane_t

0x97e1,	// (0x0006ffb1) mup_equalizer_pane_cp5_ParamLimits

0x97f9,	// (0x0006ffc9) mup_equalizer_pane_cp6_ParamLimits

0x9811,	// (0x0006ffe1) mup_equalizer_pane_cp7_ParamLimits

0x6e53,	// (0x0006d623) main_gallery_pane

0x1ed9,	// (0x000686a9) smil2_volume_pane

0x1ef4,	// (0x000686c4) smil_status_volume_pane_g1_ParamLimits

0x1ee1,	// (0x000686b1) smil_status_volume_pane_g2_ParamLimits

0xa26d,	// (0x00070a3d) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00075dfa) smil_status_volume_pane_g_ParamLimits

0x2117,	// (0x000688e7) bg_popup_window_pane_cp07_ParamLimits

0x2125,	// (0x000688f5) blid_firmament_pane

0xa96c,	// (0x0007113c) aid_size_cell_gallery_ParamLimits

0xa96c,	// (0x0007113c) aid_size_cell_gallery

0xa97a,	// (0x0007114a) grid_gallery_pane_ParamLimits

0xa97a,	// (0x0007114a) grid_gallery_pane

0xa98a,	// (0x0007115a) cell_gallery_pane_ParamLimits

0xa98a,	// (0x0007115a) cell_gallery_pane

0x224e,	// (0x00068a1e) bg_cell_gallery_focus_pane_ParamLimits

0x224e,	// (0x00068a1e) bg_cell_gallery_focus_pane

0x2260,	// (0x00068a30) cell_gallery_pane_g1_ParamLimits

0x2260,	// (0x00068a30) cell_gallery_pane_g1

0xa9d5,	// (0x000711a5) cell_gallery_pane_g2_ParamLimits

0xa9d5,	// (0x000711a5) cell_gallery_pane_g2

0xa9e2,	// (0x000711b2) cell_gallery_pane_g3_ParamLimits

0xa9e2,	// (0x000711b2) cell_gallery_pane_g3

0x226c,	// (0x00068a3c) cell_gallery_pane_g4_ParamLimits

0x226c,	// (0x00068a3c) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00075ea8) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00075ea8) cell_gallery_pane_g

0x2278,	// (0x00068a48) bg_cell_gallery_focus_pane_g1

0x2280,	// (0x00068a50) bg_cell_gallery_focus_pane_g2

0x2288,	// (0x00068a58) bg_cell_gallery_focus_pane_g3

0x2290,	// (0x00068a60) bg_cell_gallery_focus_pane_g4

0x2298,	// (0x00068a68) bg_cell_gallery_focus_pane_g5

0x22a0,	// (0x00068a70) bg_cell_gallery_focus_pane_g6

0x22a8,	// (0x00068a78) bg_cell_gallery_focus_pane_g7

0x22b0,	// (0x00068a80) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00075eb1) bg_cell_gallery_focus_pane_g

0x22b8,	// (0x00068a88) aid_firma_cardinal

0x22cc,	// (0x00068a9c) blid_firmament_pane_t1

0x22e3,	// (0x00068ab3) blid_firmament_pane_t2

0x22fa,	// (0x00068aca) blid_firmament_pane_t3

0x2311,	// (0x00068ae1) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00075ec2) blid_firmament_pane_t

0x2328,	// (0x00068af8) blid_sat_info_pane

0x2338,	// (0x00068b08) blid_sat_info_pane_g1

0x2338,	// (0x00068b08) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00075ecb) blid_sat_info_pane_g

0x2342,	// (0x00068b12) blid_sat_info_pane_t1

0x2350,	// (0x00068b20) smil2_volume_content_pane

0x2359,	// (0x00068b29) smil2_volume_pane_g1

0x2361,	// (0x00068b31) smil2_volume_content_pane_g1

0x236a,	// (0x00068b3a) smil2_volume_content_pane_g2

0x2373,	// (0x00068b43) smil2_volume_content_pane_g3

0x237c,	// (0x00068b4c) smil2_volume_content_pane_g4

0x2385,	// (0x00068b55) smil2_volume_content_pane_g5

0x238e,	// (0x00068b5e) smil2_volume_content_pane_g6

0x2397,	// (0x00068b67) smil2_volume_content_pane_g7

0x23a0,	// (0x00068b70) smil2_volume_content_pane_g8

0x23a9,	// (0x00068b79) smil2_volume_content_pane_g9

0x23b2,	// (0x00068b82) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00075ed0) smil2_volume_content_pane_g

0x7a98,	// (0x0006e268) cale_week_day_heading_pane_t1_ParamLimits

0x7ac5,	// (0x0006e295) cale_week_day_heading_pane_t2_ParamLimits

0x7af2,	// (0x0006e2c2) cale_week_day_heading_pane_t3_ParamLimits

0x7b1f,	// (0x0006e2ef) cale_week_day_heading_pane_t4_ParamLimits

0x7b4c,	// (0x0006e31c) cale_week_day_heading_pane_t5_ParamLimits

0x7b79,	// (0x0006e349) cale_week_day_heading_pane_t6_ParamLimits

0x7ba6,	// (0x0006e376) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x000759bc) cale_week_day_heading_pane_t_ParamLimits

0xf08c,	// (0x0007585c) bg_cale_side_pane_ParamLimits

0x7bd3,	// (0x0006e3a3) cale_week_time_pane_t1_ParamLimits

0x7beb,	// (0x0006e3bb) cale_week_time_pane_t2_ParamLimits

0x7c03,	// (0x0006e3d3) cale_week_time_pane_t3_ParamLimits

0x7c1b,	// (0x0006e3eb) cale_week_time_pane_t4_ParamLimits

0x7c33,	// (0x0006e403) cale_week_time_pane_t5_ParamLimits

0x7c4b,	// (0x0006e41b) cale_week_time_pane_t6_ParamLimits

0x7c63,	// (0x0006e433) cale_week_time_pane_t7_ParamLimits

0x7c7b,	// (0x0006e44b) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x000759cb) cale_week_time_pane_t_ParamLimits

0x7c97,	// (0x0006e467) cell_cale_week_pane_g2_ParamLimits

0xf08c,	// (0x0007585c) bg_cale_side_pane_cp01_ParamLimits

0x8c3d,	// (0x0006f40d) cale_month_week_pane_t1_ParamLimits

0x8c54,	// (0x0006f424) cale_month_week_pane_t2_ParamLimits

0x8c6b,	// (0x0006f43b) cale_month_week_pane_t3_ParamLimits

0x8c82,	// (0x0006f452) cale_month_week_pane_t4_ParamLimits

0x8c99,	// (0x0006f469) cale_month_week_pane_t5_ParamLimits

0x8cb0,	// (0x0006f480) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00075aa4) cale_month_week_pane_t_ParamLimits

0x8d95,	// (0x0006f565) cell_cale_month_pane_g1_ParamLimits

0x6e53,	// (0x0006d623) main_cale_event_viewer_pane

0x6e53,	// (0x0006d623) listscroll_cale_event_viewer_pane

0x23bb,	// (0x00068b8b) list_cale_ev_pane

0x23c3,	// (0x00068b93) scroll_pane_cp023

0xa9ef,	// (0x000711bf) field_cale_ev_pane_ParamLimits

0xa9ef,	// (0x000711bf) field_cale_ev_pane

0x23cf,	// (0x00068b9f) field_cale_ev_content_pane_ParamLimits

0x23cf,	// (0x00068b9f) field_cale_ev_content_pane

0x23db,	// (0x00068bab) field_cale_ev_pane_g1_ParamLimits

0x23db,	// (0x00068bab) field_cale_ev_pane_g1

0x23e7,	// (0x00068bb7) field_cale_ev_pane_g2_ParamLimits

0x23e7,	// (0x00068bb7) field_cale_ev_pane_g2

0x23ff,	// (0x00068bcf) field_cale_ev_pane_g3_ParamLimits

0x23ff,	// (0x00068bcf) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00075ee5) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00075ee5) field_cale_ev_pane_g

0x2417,	// (0x00068be7) field_cale_ev_pane_t1_ParamLimits

0x2417,	// (0x00068be7) field_cale_ev_pane_t1

0xaa13,	// (0x000711e3) field_cale_ev_content_pane_t1_ParamLimits

0xaa13,	// (0x000711e3) field_cale_ev_content_pane_t1

0x0b21,	// (0x000672f1) bg_button_pane_cp01

0xef3a,	// (0x0007570a) listscroll_cale_week_pane_ParamLimits

0x7884,	// (0x0006e054) popup_toolbar_window_cp01

0xf07a,	// (0x0007584a) listscroll_cale_week_pane_t1_ParamLimits

0xef3a,	// (0x0007570a) listscroll_cale_day_pane_ParamLimits

0x7884,	// (0x0006e054) popup_toolbar_window_cp02

0xf07a,	// (0x0007584a) listscroll_cale_day_pane_t1_ParamLimits

0xef3a,	// (0x0007570a) main_cale_month_pane_ParamLimits

0xa16a,	// (0x0007093a) popup_toolbar_window_cp03_ParamLimits

0xa16a,	// (0x0007093a) popup_toolbar_window_cp03

0x9ab8,	// (0x00070288) main_image_pane_g2_ParamLimits

0x9ab8,	// (0x00070288) main_image_pane_g2

0x9ac4,	// (0x00070294) main_image_pane_g3_ParamLimits

0x9ac4,	// (0x00070294) main_image_pane_g3

0x0002,

0xf506,	// (0x00075cd6) main_image_pane_g_ParamLimits

0xf506,	// (0x00075cd6) main_image_pane_g

0x0c7d,	// (0x0006744d) main_image_pane_t1_ParamLimits

0x9ad0,	// (0x000702a0) main_image_pane_t2_ParamLimits

0x9ad0,	// (0x000702a0) main_image_pane_t2

0x9ae2,	// (0x000702b2) main_image_pane_t3_ParamLimits

0x9ae2,	// (0x000702b2) main_image_pane_t3

0x9af4,	// (0x000702c4) main_image_pane_t4_ParamLimits

0x9af4,	// (0x000702c4) main_image_pane_t4

0x0003,

0xf50d,	// (0x00075cdd) main_image_pane_t_ParamLimits

0xf50d,	// (0x00075cdd) main_image_pane_t

0x9b06,	// (0x000702d6) popup_image_details_window_cp01

0x9b10,	// (0x000702e0) popup_toobar_trans_pane_cp01_ParamLimits

0x9b10,	// (0x000702e0) popup_toobar_trans_pane_cp01

0xa0db,	// (0x000708ab) popup_image_details_window_ParamLimits

0xa0db,	// (0x000708ab) popup_image_details_window

0x1e25,	// (0x000685f5) popup_image_focus_window

0xa3db,	// (0x00070bab) camera2_autofocus_pane_ParamLimits

0xa3db,	// (0x00070bab) camera2_autofocus_pane

0x6e53,	// (0x0006d623) bg_popup_sub_pane_cp06

0x242e,	// (0x00068bfe) popup_image_focus_window_g1

0x2436,	// (0x00068c06) popup_image_focus_window_g2

0x243e,	// (0x00068c0e) popup_image_focus_window_g3

0x2446,	// (0x00068c16) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00075eec) popup_image_focus_window_g

0x244e,	// (0x00068c1e) popup_image_focus_window_t1

0x245c,	// (0x00068c2c) popup_image_focus_window_t2

0x246c,	// (0x00068c3c) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00075ef5) popup_image_focus_window_t

0x247a,	// (0x00068c4a) camera2_autofocus_pane_g1

0xa05d,	// (0x0007082d) bg_tb_trans_pane_cp01

0x2488,	// (0x00068c58) popup_image_details_window_g1

0x249b,	// (0x00068c6b) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00075f07) popup_image_details_window_g

0x24c4,	// (0x00068c94) popup_image_details_window_t1

0x24d6,	// (0x00068ca6) popup_image_details_window_t2

0x24ef,	// (0x00068cbf) popup_image_details_window_t3

0x2503,	// (0x00068cd3) popup_image_details_window_t4

0x251e,	// (0x00068cee) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00075f0e) popup_image_details_window_t

0xef26,	// (0x000756f6) bg_calc_paper_pane_ParamLimits

0x6e53,	// (0x0006d623) grid_highlight_pane_cp013

0x763a,	// (0x0006de0a) list_calc_pane_ParamLimits

0x764c,	// (0x0006de1c) scroll_pane_cp024

0xef3a,	// (0x0007570a) bg_calc_display_pane_ParamLimits

0x7654,	// (0x0006de24) calc_display_pane_t1_ParamLimits

0x7669,	// (0x0006de39) calc_display_pane_t2_ParamLimits

0x767e,	// (0x0006de4e) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0007593e) calc_display_pane_t_ParamLimits

0x7752,	// (0x0006df22) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0007595b) cell_calc_pane_g

0x775b,	// (0x0006df2b) cell_calc_pane_t1

0xef99,	// (0x00075769) grid_highlight_pane_cp02_ParamLimits

0xefaf,	// (0x0007577f) toolbar_button_pane_cp01_ParamLimits

0xefaf,	// (0x0007577f) toolbar_button_pane_cp01

0x0cc2,	// (0x00067492) temp_image_control_pane_ParamLimits

0x0cc2,	// (0x00067492) temp_image_control_pane

0xa05d,	// (0x0007082d) main_mp3_pane

0x2538,	// (0x00068d08) temp_image_control_pane_g1_ParamLimits

0x2538,	// (0x00068d08) temp_image_control_pane_g1

0x2546,	// (0x00068d16) temp_image_control_pane_g2_ParamLimits

0x2546,	// (0x00068d16) temp_image_control_pane_g2

0x2558,	// (0x00068d28) temp_image_control_pane_g3_ParamLimits

0x2558,	// (0x00068d28) temp_image_control_pane_g3

0xaa5e,	// (0x0007122e) temp_image_control_pane_g4_ParamLimits

0xaa5e,	// (0x0007122e) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00075f19) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00075f19) temp_image_control_pane_g

0x2538,	// (0x00068d08) main_mp3_pane_g1

0xaa6f,	// (0x0007123f) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00075f22) main_mp3_pane_g

0x259b,	// (0x00068d6b) main_mp3_pane_t1

0x005c,	// (0x0006682c) main_camera_pane_g8_ParamLimits

0x005c,	// (0x0006682c) main_camera_pane_g8

0x7f41,	// (0x0006e711) main_video_pane_g7_ParamLimits

0x7f41,	// (0x0006e711) main_video_pane_g7

0xa51e,	// (0x00070cee) main_camera2_pane_t7_ParamLimits

0xa51e,	// (0x00070cee) main_camera2_pane_t7

0x01a8,	// (0x00066978) scroll_pane_cp025_ParamLimits

0x01a8,	// (0x00066978) scroll_pane_cp025

0x01bc,	// (0x0006698c) scroll_pane_cp026_ParamLimits

0x01bc,	// (0x0006698c) scroll_pane_cp026

0x01cb,	// (0x0006699b) wml_content_pane_ParamLimits

0x6e53,	// (0x0006d623) main_touch_calib_pane

0xab13,	// (0x000712e3) main_touch_calib_pane_g1

0xab1f,	// (0x000712ef) main_touch_calib_pane_g2

0xab2b,	// (0x000712fb) main_touch_calib_pane_g3

0xab37,	// (0x00071307) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00075f40) main_touch_calib_pane_g

0xab43,	// (0x00071313) main_touch_calib_pane_t1

0xab5a,	// (0x0007132a) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00075f49) main_touch_calib_pane_t

0x08d7,	// (0x000670a7) mup_progress_pane_cp02

0x08f6,	// (0x000670c6) navi_pane_g1

0x0958,	// (0x00067128) navi_pane_mp_t3

0xa05d,	// (0x0007082d) main_mp3_pane_ParamLimits

0xa1ac,	// (0x0007097c) navi_pane_ParamLimits

0x2538,	// (0x00068d08) main_mp3_pane_g1_ParamLimits

0xaa6f,	// (0x0007123f) main_mp3_pane_g2_ParamLimits

0xaa7b,	// (0x0007124b) main_mp3_pane_g3_ParamLimits

0xaa7b,	// (0x0007124b) main_mp3_pane_g3

0xaa87,	// (0x00071257) main_mp3_pane_g4_ParamLimits

0xaa87,	// (0x00071257) main_mp3_pane_g4

0x2568,	// (0x00068d38) main_mp3_pane_g5_ParamLimits

0x2568,	// (0x00068d38) main_mp3_pane_g5

0x2576,	// (0x00068d46) main_mp3_pane_g6_ParamLimits

0x2576,	// (0x00068d46) main_mp3_pane_g6

0x2583,	// (0x00068d53) main_mp3_pane_g7_ParamLimits

0x2583,	// (0x00068d53) main_mp3_pane_g7

0x258f,	// (0x00068d5f) main_mp3_pane_g8_ParamLimits

0x258f,	// (0x00068d5f) main_mp3_pane_g8

0xf752,	// (0x00075f22) main_mp3_pane_g_ParamLimits

0xaa93,	// (0x00071263) main_mp3_pane_t2

0xaaa3,	// (0x00071273) main_mp3_pane_t3

0x25a9,	// (0x00068d79) main_mp3_pane_t4

0x25b7,	// (0x00068d87) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00075f33) main_mp3_pane_t

0x25c5,	// (0x00068d95) mup_progress_pane_cp01

0x5cbd,	// (0x0006c48d) aid_zoom_text_secondary2

0x23bb,	// (0x00068b8b) list_cale_ev2_pane

0x23c3,	// (0x00068b93) scroll_pane_cp023_ParamLimits

0xabb1,	// (0x00071381) field_cale_ev2_pane_ParamLimits

0xabb1,	// (0x00071381) field_cale_ev2_pane

0xabcc,	// (0x0007139c) field_cale_ev2_pane_g1_ParamLimits

0xabcc,	// (0x0007139c) field_cale_ev2_pane_g1

0xabd8,	// (0x000713a8) field_cale_ev2_pane_g2_ParamLimits

0xabd8,	// (0x000713a8) field_cale_ev2_pane_g2

0xabf0,	// (0x000713c0) field_cale_ev2_pane_g3_ParamLimits

0xabf0,	// (0x000713c0) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x00075f54) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x00075f54) field_cale_ev2_pane_g

0x5fba,	// (0x0006c78a) field_cale_ev2_pane_t1_ParamLimits

0x5fba,	// (0x0006c78a) field_cale_ev2_pane_t1

0x5fd1,	// (0x0006c7a1) field_cale_ev2_pane_t2_ParamLimits

0x5fd1,	// (0x0006c7a1) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00075f5d) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00075f5d) field_cale_ev2_pane_t

0x9997,	// (0x00070167) main_postcard_pane_g5_ParamLimits

0x9997,	// (0x00070167) main_postcard_pane_g5

0x99a5,	// (0x00070175) main_postcard_pane_g6_ParamLimits

0x99a5,	// (0x00070175) main_postcard_pane_g6

0x7d7f,	// (0x0006e54f) camera2_autofocus_pane_cp_ParamLimits

0x7d7f,	// (0x0006e54f) camera2_autofocus_pane_cp

0xa05d,	// (0x0007082d) main_mup3_pane

0xac34,	// (0x00071404) main_mup3_pane_g1_ParamLimits

0xac34,	// (0x00071404) main_mup3_pane_g1

0xac55,	// (0x00071425) main_mup3_pane_g2_ParamLimits

0xac55,	// (0x00071425) main_mup3_pane_g2

0xacd1,	// (0x000714a1) main_mup3_pane_g3_ParamLimits

0xacd1,	// (0x000714a1) main_mup3_pane_g3

0xad16,	// (0x000714e6) main_mup3_pane_g4_ParamLimits

0xad16,	// (0x000714e6) main_mup3_pane_g4

0xad5b,	// (0x0007152b) main_mup3_pane_g5_ParamLimits

0xad5b,	// (0x0007152b) main_mup3_pane_g5

0xada0,	// (0x00071570) main_mup3_pane_g6_ParamLimits

0xada0,	// (0x00071570) main_mup3_pane_g6

0x25cd,	// (0x00068d9d) main_mup3_pane_g7_ParamLimits

0x25cd,	// (0x00068d9d) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00075f6d) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00075f6d) main_mup3_pane_g

0xae16,	// (0x000715e6) main_mup3_pane_t1_ParamLimits

0xae16,	// (0x000715e6) main_mup3_pane_t1

0xae81,	// (0x00071651) main_mup3_pane_t2_ParamLimits

0xae81,	// (0x00071651) main_mup3_pane_t2

0xaf4a,	// (0x0007171a) main_mup3_pane_t4_ParamLimits

0xaf4a,	// (0x0007171a) main_mup3_pane_t4

0xaf9e,	// (0x0007176e) main_mup3_pane_t5_ParamLimits

0xaf9e,	// (0x0007176e) main_mup3_pane_t5

0xb04e,	// (0x0007181e) main_mup3_pane_t6_ParamLimits

0xb04e,	// (0x0007181e) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00075f7e) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00075f7e) main_mup3_pane_t

0xb0f6,	// (0x000718c6) mup3_progress_pane_ParamLimits

0xb0f6,	// (0x000718c6) mup3_progress_pane

0xb170,	// (0x00071940) popup_mup3_control_window_ParamLimits

0xb170,	// (0x00071940) popup_mup3_control_window

0x25db,	// (0x00068dab) popup_mup3_text_window

0xb18d,	// (0x0007195d) mup3_progress_pane_t1

0xb1a4,	// (0x00071974) mup3_progress_pane_t2

0x25e3,	// (0x00068db3) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00075f8b) mup3_progress_pane_t

0x25fa,	// (0x00068dca) mup_progress_pane_cp03

0x6e53,	// (0x0006d623) bg_tb_trans_pane_cp04

0xb1bb,	// (0x0007198b) mup3_volume_pane

0xb1c3,	// (0x00071993) popup_mup3_control_window_g1

0x3dde,	// (0x0006a5ae) mup3_volume_pane_g1

0x3de7,	// (0x0006a5b7) mup3_volume_pane_g2

0x3df0,	// (0x0006a5c0) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00075f92) mup3_volume_pane_g

0x6e53,	// (0x0006d623) bg_tb_trans_pane_cp03

0x260a,	// (0x00068dda) popup_mup3_text_window_g1

0x2612,	// (0x00068de2) popup_mup3_text_window_t1

0xef82,	// (0x00075752) list_calc_item_pane_g1_ParamLimits

0x2041,	// (0x00068811) mup_volume_pane_cp_g1

0xab71,	// (0x00071341) main_touch_calib_pane_t3

0xab85,	// (0x00071355) main_touch_calib_pane_t4

0xab9b,	// (0x0007136b) main_touch_calib_pane_t5

0x6e5d,	// (0x0006d62d) aid_cell_size_toolbar2

0x6e65,	// (0x0006d635) aid_popup3_width_pane

0x5cad,	// (0x0006c47d) aid_zoom_text_msg_primary

0x7d54,	// (0x0006e524) vorec_t7

0xef46,	// (0x00075716) bg_calc_paper_pane_g1_ParamLimits

0xef52,	// (0x00075722) bg_calc_paper_pane_g2_ParamLimits

0xef5e,	// (0x0007572e) bg_calc_paper_pane_g3_ParamLimits

0xef6a,	// (0x0007573a) bg_calc_paper_pane_g4_ParamLimits

0xef76,	// (0x00075746) bg_calc_paper_pane_g5_ParamLimits

0x76bf,	// (0x0006de8f) bg_calc_paper_pane_g6_ParamLimits

0x76d0,	// (0x0006dea0) bg_calc_paper_pane_g7_ParamLimits

0x76e1,	// (0x0006deb1) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00075945) bg_calc_paper_pane_g_ParamLimits

0x76f4,	// (0x0006dec4) calc_bg_paper_pane_g9_ParamLimits

0x7e70,	// (0x0006e640) image_qvga_pane_ParamLimits

0x7e70,	// (0x0006e640) image_qvga_pane

0xee67,	// (0x00075637) bg_popup_sub_pane_cp04_ParamLimits

0x0bf9,	// (0x000673c9) popup_mup_playback_window_g1_ParamLimits

0x0c05,	// (0x000673d5) popup_mup_playback_window_t1_ParamLimits

0x0c1a,	// (0x000673ea) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00075cd1) popup_mup_playback_window_t_ParamLimits

0xa64d,	// (0x00070e1d) main_mup2_pane_g3_ParamLimits

0xa64d,	// (0x00070e1d) main_mup2_pane_g3

0x811c,	// (0x0006e8ec) popup_toolbar_window_cp04

0x1015,	// (0x000677e5) popup_call2_audio_second_window_g3_ParamLimits

0x1015,	// (0x000677e5) popup_call2_audio_second_window_g3

0x141f,	// (0x00067bef) popup_call2_audio_first_window_g4_ParamLimits

0x141f,	// (0x00067bef) popup_call2_audio_first_window_g4

0x1a9e,	// (0x0006826e) popup_call2_audio_in_window_g4_ParamLimits

0x1a9e,	// (0x0006826e) popup_call2_audio_in_window_g4

0x9aab,	// (0x0007027b) aid_area_sk_bg_cut_ParamLimits

0x9aab,	// (0x0007027b) aid_area_sk_bg_cut

0x0c2f,	// (0x000673ff) aid_area_sk_bg_cut_2_ParamLimits

0x0c2f,	// (0x000673ff) aid_area_sk_bg_cut_2

0xa9c5,	// (0x00071195) aid_placing_details_win

0xa9cd,	// (0x0007119d) aid_placing_details_win_2

0x247a,	// (0x00068c4a) camera2_autofocus_pane_g1_ParamLimits

0x70b0,	// (0x0006d880) popup_fixed_preview_cale_window_ParamLimits

0x70b0,	// (0x0006d880) popup_fixed_preview_cale_window

0x09c2,	// (0x00067192) navi_slider_pane_g3

0x09b9,	// (0x00067189) navi_slider_pane_g4

0x09b0,	// (0x00067180) navi_slider_pane_g5

0x09c2,	// (0x00067192) navi_slider_pane_g6

0x93b2,	// (0x0006fb82) navi_slider_pane_g7

0x0aee,	// (0x000672be) mup_scale_pane_g3

0x0af7,	// (0x000672c7) mup_scale_pane_g4

0x0b00,	// (0x000672d0) mup_scale_pane_g5

0x9829,	// (0x0006fff9) mup_scale_pane_g6

0x9832,	// (0x00070002) mup_scale_pane_g7

0x09c2,	// (0x00067192) cams2_slider_pane_g3

0x20f6,	// (0x000688c6) cams2_slider_pane_g4

0xa922,	// (0x000710f2) cams2_slider_pane_g5

0x09c2,	// (0x00067192) cams2_slider_pane_g6

0xa92a,	// (0x000710fa) cams2_slider_pane_g7

0x2338,	// (0x00068b08) camera2_autofocus_pane_cp_g1

0x2620,	// (0x00068df0) bg_popup_preview_window_pane_cp02_ParamLimits

0x2620,	// (0x00068df0) bg_popup_preview_window_pane_cp02

0x262c,	// (0x00068dfc) list_fp_cale_pane_ParamLimits

0x262c,	// (0x00068dfc) list_fp_cale_pane

0x2638,	// (0x00068e08) popup_fixed_preview_cale_window_t1_ParamLimits

0x2638,	// (0x00068e08) popup_fixed_preview_cale_window_t1

0xb1cc,	// (0x0007199c) popup_fixed_preview_cale_window_t2_ParamLimits

0xb1cc,	// (0x0007199c) popup_fixed_preview_cale_window_t2

0xb1e1,	// (0x000719b1) popup_fixed_preview_cale_window_t3_ParamLimits

0xb1e1,	// (0x000719b1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00075f99) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00075f99) popup_fixed_preview_cale_window_t

0xb1f6,	// (0x000719c6) list_single_fp_cale_pane_ParamLimits

0xb1f6,	// (0x000719c6) list_single_fp_cale_pane

0x266e,	// (0x00068e3e) list_single_fp_cale_pane_g1_ParamLimits

0x266e,	// (0x00068e3e) list_single_fp_cale_pane_g1

0x267a,	// (0x00068e4a) list_single_fp_cale_pane_g2_ParamLimits

0x267a,	// (0x00068e4a) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00075fa0) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00075fa0) list_single_fp_cale_pane_g

0x2693,	// (0x00068e63) list_single_fp_cale_pane_t1_ParamLimits

0x2693,	// (0x00068e63) list_single_fp_cale_pane_t1

0x26a5,	// (0x00068e75) list_single_fp_cale_pane_t2_ParamLimits

0x26a5,	// (0x00068e75) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00075fa7) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00075fa7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6e53,	// (0x0006d623) main_dialer_pane

0xb203,	// (0x000719d3) aid_cell_size_keypad

0xb20d,	// (0x000719dd) dialer_ne_pane

0xb217,	// (0x000719e7) grid_dialer_command_1_pane

0xb21f,	// (0x000719ef) grid_dialer_command_2_pane

0xb227,	// (0x000719f7) grid_dialer_keypad_pane

0xb23b,	// (0x00071a0b) bg_popup_call_pane_cp06_ParamLimits

0xb23b,	// (0x00071a0b) bg_popup_call_pane_cp06

0xb247,	// (0x00071a17) dialer_ne_clear_pane_ParamLimits

0xb247,	// (0x00071a17) dialer_ne_clear_pane

0x26d8,	// (0x00068ea8) dialer_ne_pane_g1

0x26e0,	// (0x00068eb0) dialer_ne_pane_t1_ParamLimits

0x26e0,	// (0x00068eb0) dialer_ne_pane_t1

0xb253,	// (0x00071a23) dialer_ne_pane_t2_ParamLimits

0xb253,	// (0x00071a23) dialer_ne_pane_t2

0xb270,	// (0x00071a40) dialer_ne_pane_t3_ParamLimits

0xb270,	// (0x00071a40) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00075fac) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00075fac) dialer_ne_pane_t

0xb294,	// (0x00071a64) dialer_ne_pane_t3_copy1_ParamLimits

0xb294,	// (0x00071a64) dialer_ne_pane_t3_copy1

0xb2b8,	// (0x00071a88) cell_dialer_keypad_pane_ParamLimits

0xb2b8,	// (0x00071a88) cell_dialer_keypad_pane

0xb2cd,	// (0x00071a9d) cell_dialer_command_1_pane_ParamLimits

0xb2cd,	// (0x00071a9d) cell_dialer_command_1_pane

0xb2e3,	// (0x00071ab3) cell_dialer_command_2_pane_ParamLimits

0xb2e3,	// (0x00071ab3) cell_dialer_command_2_pane

0x26f2,	// (0x00068ec2) bg_button_pane_cp02_ParamLimits

0x26f2,	// (0x00068ec2) bg_button_pane_cp02

0xb2f2,	// (0x00071ac2) cell_dialer_keypad_pane_g1_ParamLimits

0xb2f2,	// (0x00071ac2) cell_dialer_keypad_pane_g1

0x26f2,	// (0x00068ec2) bg_button_pane_cp03_ParamLimits

0x26f2,	// (0x00068ec2) bg_button_pane_cp03

0xb307,	// (0x00071ad7) cell_dialer_command_1_pane_g1_ParamLimits

0xb307,	// (0x00071ad7) cell_dialer_command_1_pane_g1

0x26fe,	// (0x00068ece) bg_button_pane_cp04

0xb31b,	// (0x00071aeb) cell_dialer_command_2_pane_g1

0x0996,	// (0x00067166) bg_button_pane_cp06

0x2706,	// (0x00068ed6) dialer_ne_clear_pane_g1

0x92f5,	// (0x0006fac5) navi_pane_g2

0x9323,	// (0x0006faf3) navi_pane_g3

0x0002,

0xf404,	// (0x00075bd4) navi_pane_g

0x934e,	// (0x0006fb1e) navi_pane_mv_g2

0x9375,	// (0x0006fb45) navi_pane_mv_g5

0x937d,	// (0x0006fb4d) navi_pane_mv_t1

0xef3a,	// (0x0007570a) main_clock2_pane

0xb34d,	// (0x00071b1d) main_clock2_list_pane_ParamLimits

0xb34d,	// (0x00071b1d) main_clock2_list_pane

0xb377,	// (0x00071b47) main_clock2_pane_t1_ParamLimits

0xb377,	// (0x00071b47) main_clock2_pane_t1

0xb3a5,	// (0x00071b75) main_clock2_pane_t2_ParamLimits

0xb3a5,	// (0x00071b75) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00075fb3) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00075fb3) main_clock2_pane_t

0xb40e,	// (0x00071bde) popup_clock_analogue_window_cp03_ParamLimits

0xb40e,	// (0x00071bde) popup_clock_analogue_window_cp03

0xb42e,	// (0x00071bfe) popup_clock_digital_window_cp02_ParamLimits

0xb42e,	// (0x00071bfe) popup_clock_digital_window_cp02

0xb49f,	// (0x00071c6f) main_clock2_list_single_pane_ParamLimits

0xb49f,	// (0x00071c6f) main_clock2_list_single_pane

0x0996,	// (0x00067166) list_highlight_pane_cp05

0x270e,	// (0x00068ede) main_clock2_list_single_pane_t1

0x811c,	// (0x0006e8ec) popup_toolbar_window_cp04_ParamLimits

0xaa2e,	// (0x000711fe) camera2_autofocus_pane_g2_ParamLimits

0xaa2e,	// (0x000711fe) camera2_autofocus_pane_g2

0xaa3a,	// (0x0007120a) camera2_autofocus_pane_g3_ParamLimits

0xaa3a,	// (0x0007120a) camera2_autofocus_pane_g3

0xaa46,	// (0x00071216) camera2_autofocus_pane_g4_ParamLimits

0xaa46,	// (0x00071216) camera2_autofocus_pane_g4

0xaa52,	// (0x00071222) camera2_autofocus_pane_g5_ParamLimits

0xaa52,	// (0x00071222) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00075efc) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00075efc) camera2_autofocus_pane_g

0xac14,	// (0x000713e4) camera2_autofocus_pane_cp_g2

0xac1c,	// (0x000713ec) camera2_autofocus_pane_cp_g3

0xac24,	// (0x000713f4) camera2_autofocus_pane_cp_g4

0xac2c,	// (0x000713fc) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00075f62) camera2_autofocus_pane_cp_g

0xb233,	// (0x00071a03) popup_dialer_spcha_window

0x6e53,	// (0x0006d623) bg_popup_sub_pane_cp07

0x271c,	// (0x00068eec) list_spcha_pane

0x2724,	// (0x00068ef4) list_single_spcha_pane_ParamLimits

0x2724,	// (0x00068ef4) list_single_spcha_pane

0x6e53,	// (0x0006d623) list_highlight_pane_cp06

0x2735,	// (0x00068f05) list_single_spcha_pane_t1

0x1848,	// (0x00068018) popup_call2_audio_out_window_g4_ParamLimits

0x1848,	// (0x00068018) popup_call2_audio_out_window_g4

0x6e53,	// (0x0006d623) main_imed2_pane

0x1e2f,	// (0x000685ff) popup_imed_adjust2_window

0xa0e9,	// (0x000708b9) popup_imed_trans_window_ParamLimits

0xa0e9,	// (0x000708b9) popup_imed_trans_window

0x2170,	// (0x00068940) popup_blid_sat_info2_window_t1

0x217e,	// (0x0006894e) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00075e91) popup_blid_sat_info2_window_t

0xb549,	// (0x00071d19) aid_size_cell_colour_35

0xb563,	// (0x00071d33) aid_size_cell_colour_112

0xb57a,	// (0x00071d4a) aid_size_cell_effect

0xa05d,	// (0x0007082d) bg_tb_trans_pane_cp02

0x052e,	// (0x00066cfe) heading_imed_pane

0xb594,	// (0x00071d64) listscroll_imed_pane

0x2743,	// (0x00068f13) heading_imed_pane_g1

0x274b,	// (0x00068f1b) heading_imed_pane_t1

0x2759,	// (0x00068f29) grid_imed_colour_35_pane_ParamLimits

0x2759,	// (0x00068f29) grid_imed_colour_35_pane

0xb5a0,	// (0x00071d70) grid_imed_effect_pane

0x2775,	// (0x00068f45) list_imed_aspect_pane

0xb5b0,	// (0x00071d80) scroll_pane_cp027_ParamLimits

0xb5b0,	// (0x00071d80) scroll_pane_cp027

0xb5bc,	// (0x00071d8c) cell_imed_effect_pane_ParamLimits

0xb5bc,	// (0x00071d8c) cell_imed_effect_pane

0x277d,	// (0x00068f4d) cell_imed_colour_pane_ParamLimits

0x277d,	// (0x00068f4d) cell_imed_colour_pane

0x27c7,	// (0x00068f97) cell_imed_colour_pane_g1_ParamLimits

0x27c7,	// (0x00068f97) cell_imed_colour_pane_g1

0x27d8,	// (0x00068fa8) hgihlgiht_grid_pane_cp016_ParamLimits

0x27d8,	// (0x00068fa8) hgihlgiht_grid_pane_cp016

0xb5d8,	// (0x00071da8) cell_imed_effect_pane_g1

0xb5e0,	// (0x00071db0) grid_highlight_pane_cp017

0x27e9,	// (0x00068fb9) list_imed_single_pane_ParamLimits

0x27e9,	// (0x00068fb9) list_imed_single_pane

0x6e53,	// (0x0006d623) list_highlight_pane_cp07

0x27fd,	// (0x00068fcd) list_imed_aspect_pane_comp1_t1

0x1e03,	// (0x000685d3) bg_tb_trans_pane_cp05

0x281f,	// (0x00068fef) popup_imed_adjust2_window_g1

0x2846,	// (0x00069016) popup_imed_adjust2_window_t1

0x285e,	// (0x0006902e) slider_imed_adjust_pane

0x2872,	// (0x00069042) slider_imed_adjust_pane_g1

0x2882,	// (0x00069052) slider_imed_adjust_pane_g2

0x2892,	// (0x00069062) slider_imed_adjust_pane_g3

0x28a3,	// (0x00069073) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00075fd0) slider_imed_adjust_pane_g

0xb5e9,	// (0x00071db9) aid_size_cell_clipart2

0xb5f5,	// (0x00071dc5) grid_imed_clipart_pane

0x28b4,	// (0x00069084) scroll_pane_cp031

0xb5ff,	// (0x00071dcf) cell_imed_clipart_pane_ParamLimits

0xb5ff,	// (0x00071dcf) cell_imed_clipart_pane

0xb61d,	// (0x00071ded) cell_imed_clipart_pane_g1

0x6e53,	// (0x0006d623) grid_highlight_pane_cp014

0xb359,	// (0x00071b29) main_clock2_pane_g1_ParamLimits

0xb359,	// (0x00071b29) main_clock2_pane_g1

0xb44a,	// (0x00071c1a) aid_call2_pane_cp10

0xb45c,	// (0x00071c2c) aid_call_pane_cp10

0x08cb,	// (0x0006709b) popup_clock_analogue_window_cp10_g1

0x08cb,	// (0x0006709b) popup_clock_analogue_window_cp10_g2

0xb46e,	// (0x00071c3e) popup_clock_analogue_window_cp10_g3

0xb46e,	// (0x00071c3e) popup_clock_analogue_window_cp10_g4

0x08cb,	// (0x0006709b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00075fbe) popup_clock_analogue_window_cp10_g

0xb480,	// (0x00071c50) popup_clock_analogue_window_cp10_t1

0xb4b1,	// (0x00071c81) clock_digital_number_pane_cp10_ParamLimits

0xb4b1,	// (0x00071c81) clock_digital_number_pane_cp10

0xb4c9,	// (0x00071c99) clock_digital_number_pane_cp11_ParamLimits

0xb4c9,	// (0x00071c99) clock_digital_number_pane_cp11

0xb4e1,	// (0x00071cb1) clock_digital_number_pane_cp12_ParamLimits

0xb4e1,	// (0x00071cb1) clock_digital_number_pane_cp12

0xb4f9,	// (0x00071cc9) clock_digital_number_pane_cp13_ParamLimits

0xb4f9,	// (0x00071cc9) clock_digital_number_pane_cp13

0xb511,	// (0x00071ce1) clock_digital_separator_pane_cp10_ParamLimits

0xb511,	// (0x00071ce1) clock_digital_separator_pane_cp10

0xb529,	// (0x00071cf9) popup_clock_digital_window_cp02_t1_ParamLimits

0xb529,	// (0x00071cf9) popup_clock_digital_window_cp02_t1

0xee5f,	// (0x0007562f) clock_digital_number_pane_cp10_g1

0xee5f,	// (0x0007562f) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00075fd9) clock_digital_number_pane_cp10_g

0xee5f,	// (0x0007562f) clock_digital_separator_pane_cp10_g1

0xee5f,	// (0x0007562f) clock_digital_separator_pane_g2_cp10

0x0966,	// (0x00067136) navi_pane_vded_g4

0x096f,	// (0x0006713f) navi_pane_vded_g5

0x0978,	// (0x00067148) navi_pane_vded_t1

0x6e53,	// (0x0006d623) main_vded_pane

0xb626,	// (0x00071df6) main_vded_pane_g1

0xb632,	// (0x00071e02) main_vded_pane_g2

0xb63c,	// (0x00071e0c) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00075fde) main_vded_pane_g

0xb646,	// (0x00071e16) main_vded_pane_t1

0xb654,	// (0x00071e24) main_vded_pane_t2

0x0001,

0xf815,	// (0x00075fe5) main_vded_pane_t

0xb662,	// (0x00071e32) vded_slider_pane

0xb66c,	// (0x00071e3c) vded_video_pane

0x28bc,	// (0x0006908c) vded_video_pane_g1

0xb678,	// (0x00071e48) vded_video_pane_g2

0x2338,	// (0x00068b08) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00075fea) vded_video_pane_g

0x28c6,	// (0x00069096) vded_slider_pane_g1

0x2041,	// (0x00068811) vded_slider_pane_g2

0x28cf,	// (0x0006909f) vded_slider_pane_g3

0x28d8,	// (0x000690a8) vded_slider_pane_g4

0x28e1,	// (0x000690b1) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00075ff1) vded_slider_pane_g

0xb164,	// (0x00071934) mup3_rocker_pane_ParamLimits

0xb164,	// (0x00071934) mup3_rocker_pane

0xb681,	// (0x00071e51) mup3_control_keys_pane_g1

0xb689,	// (0x00071e59) mup3_control_keys_pane_g2

0xb691,	// (0x00071e61) mup3_control_keys_pane_g3

0xb699,	// (0x00071e69) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00075ffc) mup3_control_keys_pane_g

0x70d8,	// (0x0006d8a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x70d8,	// (0x0006d8a8) popup_toolbar2_fixed_window_cp01

0xb180,	// (0x00071950) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb180,	// (0x00071950) popup_toolbar2_fixed_window_cp02

0x1187,	// (0x00067957) popup_call2_audio_second_window_t4_ParamLimits

0x1187,	// (0x00067957) popup_call2_audio_second_window_t4

0x16b5,	// (0x00067e85) popup_call2_audio_first_window_t6_ParamLimits

0x16b5,	// (0x00067e85) popup_call2_audio_first_window_t6

0x194b,	// (0x0006811b) popup_call2_audio_out_window_t6_ParamLimits

0x194b,	// (0x0006811b) popup_call2_audio_out_window_t6

0x6e53,	// (0x0006d623) main_vitu_pane

0xb6a9,	// (0x00071e79) aid_size_cell_itu_ParamLimits

0xb6a9,	// (0x00071e79) aid_size_cell_itu

0x7100,	// (0x0006d8d0) bg_popup_window_pane_cp08_ParamLimits

0x7100,	// (0x0006d8d0) bg_popup_window_pane_cp08

0xb6b7,	// (0x00071e87) field_vitu_entry_pane_ParamLimits

0xb6b7,	// (0x00071e87) field_vitu_entry_pane

0xb6c6,	// (0x00071e96) grid_vitu_function_pane_ParamLimits

0xb6c6,	// (0x00071e96) grid_vitu_function_pane

0xb6d6,	// (0x00071ea6) grid_vitu_itu_pane_ParamLimits

0xb6d6,	// (0x00071ea6) grid_vitu_itu_pane

0xb6e4,	// (0x00071eb4) cell_vitu_itu_pane_ParamLimits

0xb6e4,	// (0x00071eb4) cell_vitu_itu_pane

0xb6fb,	// (0x00071ecb) cell_vitu_function_pane_ParamLimits

0xb6fb,	// (0x00071ecb) cell_vitu_function_pane

0xa05d,	// (0x0007082d) bg_popup_sub_pane_cp08_ParamLimits

0xa05d,	// (0x0007082d) bg_popup_sub_pane_cp08

0xb70f,	// (0x00071edf) field_vitu_entry_pane_t1_ParamLimits

0xb70f,	// (0x00071edf) field_vitu_entry_pane_t1

0x2902,	// (0x000690d2) field_vitu_entry_pane_t2_ParamLimits

0x2902,	// (0x000690d2) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0007600a) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0007600a) field_vitu_entry_pane_t

0x291f,	// (0x000690ef) bg_button_pane_cp05_ParamLimits

0x291f,	// (0x000690ef) bg_button_pane_cp05

0xb728,	// (0x00071ef8) cell_vitu_itu_pane_g1

0xb740,	// (0x00071f10) cell_vitu_itu_pane_t1_ParamLimits

0xb740,	// (0x00071f10) cell_vitu_itu_pane_t1

0xb752,	// (0x00071f22) cell_vitu_itu_pane_t2_ParamLimits

0xb752,	// (0x00071f22) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0007600f) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0007600f) cell_vitu_itu_pane_t

0x292d,	// (0x000690fd) bg_button_pane_cp07

0xb795,	// (0x00071f65) cell_vitu_function_pane_g1

0x7561,	// (0x0006dd31) main_calc_pane_g1

0x6e99,	// (0x0006d669) aid_visual_content_pane

0x6e53,	// (0x0006d623) main_vradio_pane

0xb79e,	// (0x00071f6e) main_vradio_pane_g1_ParamLimits

0xb79e,	// (0x00071f6e) main_vradio_pane_g1

0x2937,	// (0x00069107) main_vradio_pane_g2_ParamLimits

0x2937,	// (0x00069107) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00076016) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00076016) main_vradio_pane_g

0xb7ac,	// (0x00071f7c) main_vradio_pane_t1_ParamLimits

0xb7ac,	// (0x00071f7c) main_vradio_pane_t1

0xb7be,	// (0x00071f8e) main_vradio_pane_t2_ParamLimits

0xb7be,	// (0x00071f8e) main_vradio_pane_t2

0x2944,	// (0x00069114) main_vradio_pane_t3_ParamLimits

0x2944,	// (0x00069114) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0007601b) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0007601b) main_vradio_pane_t

0xb7d0,	// (0x00071fa0) vradio_rocker_control_pane_ParamLimits

0xb7d0,	// (0x00071fa0) vradio_rocker_control_pane

0xb7dc,	// (0x00071fac) vradio_station_info_pane_ParamLimits

0xb7dc,	// (0x00071fac) vradio_station_info_pane

0x2958,	// (0x00069128) vradio_frequency_info_pane_ParamLimits

0x2958,	// (0x00069128) vradio_frequency_info_pane

0x2338,	// (0x00068b08) vradio_station_info_pane_g1

0x2967,	// (0x00069137) vradio_station_info_pane_t1_ParamLimits

0x2967,	// (0x00069137) vradio_station_info_pane_t1

0x2989,	// (0x00069159) vradio_station_info_pane_t2_ParamLimits

0x2989,	// (0x00069159) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00076022) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00076022) vradio_station_info_pane_t

0x299b,	// (0x0006916b) vradio_tuning_pane

0x29a3,	// (0x00069173) vradio_rocker_control_pane_g1

0x29ab,	// (0x0006917b) vradio_rocker_control_pane_g2

0x29b3,	// (0x00069183) vradio_rocker_control_pane_g3

0x29bb,	// (0x0006918b) vradio_rocker_control_pane_g4

0x29c3,	// (0x00069193) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00076027) vradio_rocker_control_pane_g

0xb7e9,	// (0x00071fb9) vradio_frequency_info_pane_g1

0x29cb,	// (0x0006919b) vradio_frequency_info_pane_t1_ParamLimits

0x29cb,	// (0x0006919b) vradio_frequency_info_pane_t1

0xb7f3,	// (0x00071fc3) vradio_tuning_pane_g1

0xb7fe,	// (0x00071fce) vradio_tuning_pane_t1

0x6eda,	// (0x0006d6aa) area_side_right_pane_ParamLimits

0x6eda,	// (0x0006d6aa) area_side_right_pane

0x1dca,	// (0x0006859a) status_small_pane_g1

0x1dd2,	// (0x000685a2) status_small_pane_g2

0x1ddb,	// (0x000685ab) status_small_pane_g3

0x1de4,	// (0x000685b4) status_small_pane_g4

0x0003,

0xf617,	// (0x00075de7) status_small_pane_g

0x1ded,	// (0x000685bd) status_small_pane_t1

0x6e53,	// (0x0006d623) main_video3_pane

0x29df,	// (0x000691af) cams_zoom_vslider_pane

0x29e7,	// (0x000691b7) image3_wide_pane_ParamLimits

0x29e7,	// (0x000691b7) image3_wide_pane

0x2a01,	// (0x000691d1) image3_wide_small_pane

0x2a0d,	// (0x000691dd) main_video3_pane_g1_ParamLimits

0x2a0d,	// (0x000691dd) main_video3_pane_g1

0x2a29,	// (0x000691f9) main_video3_pane_g2_ParamLimits

0x2a29,	// (0x000691f9) main_video3_pane_g2

0x0001,

0xf862,	// (0x00076032) main_video3_pane_g_ParamLimits

0xf862,	// (0x00076032) main_video3_pane_g

0x2a45,	// (0x00069215) main_video3_pane_t1_ParamLimits

0x2a45,	// (0x00069215) main_video3_pane_t1

0x2a70,	// (0x00069240) main_video3_pane_t2_ParamLimits

0x2a70,	// (0x00069240) main_video3_pane_t2

0x2a9d,	// (0x0006926d) main_video3_pane_t3_ParamLimits

0x2a9d,	// (0x0006926d) main_video3_pane_t3

0x0002,

0xf867,	// (0x00076037) main_video3_pane_t_ParamLimits

0xf867,	// (0x00076037) main_video3_pane_t

0x2aca,	// (0x0006929a) cams_zoom_vslider_pane_g1

0x2ad3,	// (0x000692a3) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0007603e) cams_zoom_vslider_pane_g

0x2adb,	// (0x000692ab) small_slider_vertical_pane

0x2338,	// (0x00068b08) small_slider_vertical_pane_g1

0x2338,	// (0x00068b08) small_slider_vertical_pane_g2

0x2ae3,	// (0x000692b3) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00076043) small_slider_vertical_pane_g

0x6e53,	// (0x0006d623) main_hwr_training_pane

0x2aec,	// (0x000692bc) hwr_training_instruct_pane_ParamLimits

0x2aec,	// (0x000692bc) hwr_training_instruct_pane

0xb80d,	// (0x00071fdd) hwr_training_navi_pane_ParamLimits

0xb80d,	// (0x00071fdd) hwr_training_navi_pane

0xb827,	// (0x00071ff7) hwr_training_write_pane_ParamLimits

0xb827,	// (0x00071ff7) hwr_training_write_pane

0x6e53,	// (0x0006d623) bg_frame_shadow_pane

0x2b23,	// (0x000692f3) hwr_training_write_pane_g1

0x2b2b,	// (0x000692fb) hwr_training_write_pane_g2

0x2b33,	// (0x00069303) hwr_training_write_pane_g3

0x2b3b,	// (0x0006930b) hwr_training_write_pane_g4

0x2b43,	// (0x00069313) hwr_training_write_pane_g5

0x2b4b,	// (0x0006931b) hwr_training_write_pane_g6

0x2b53,	// (0x00069323) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0007604a) hwr_training_write_pane_g

0xb85f,	// (0x0007202f) hwr_training_navi_pane_g1_ParamLimits

0xb85f,	// (0x0007202f) hwr_training_navi_pane_g1

0xb871,	// (0x00072041) hwr_training_navi_pane_g2_ParamLimits

0xb871,	// (0x00072041) hwr_training_navi_pane_g2

0xb883,	// (0x00072053) hwr_training_navi_pane_g3_ParamLimits

0xb883,	// (0x00072053) hwr_training_navi_pane_g3

0xb893,	// (0x00072063) hwr_training_navi_pane_g4_ParamLimits

0xb893,	// (0x00072063) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00076059) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00076059) hwr_training_navi_pane_g

0xb8ad,	// (0x0007207d) hwr_training_navi_pane_t1

0xb8bb,	// (0x0007208b) list_single_hwr_training_instruct_pane_ParamLimits

0xb8bb,	// (0x0007208b) list_single_hwr_training_instruct_pane

0x2b5b,	// (0x0006932b) list_single_hwr_training_instruct_pane_t1

0x2278,	// (0x00068a48) bg_frame_shadow_pane_g1

0x2b6a,	// (0x0006933a) bg_frame_shadow_pane_g2

0x2b72,	// (0x00069342) bg_frame_shadow_pane_g3

0x2b7a,	// (0x0006934a) bg_frame_shadow_pane_g4

0x2b82,	// (0x00069352) bg_frame_shadow_pane_g5

0x2b8a,	// (0x0006935a) bg_frame_shadow_pane_g6

0x2b92,	// (0x00069362) bg_frame_shadow_pane_g7

0xf005,	// (0x000757d5) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00076064) bg_frame_shadow_pane_g

0x6e53,	// (0x0006d623) main_video_tele_dialer_pane

0xb8d4,	// (0x000720a4) aid_size_cell_video_keypad_ParamLimits

0xb8d4,	// (0x000720a4) aid_size_cell_video_keypad

0xb8e4,	// (0x000720b4) grid_video_dialer_keypad_pane_ParamLimits

0xb8e4,	// (0x000720b4) grid_video_dialer_keypad_pane

0xb916,	// (0x000720e6) video_down_pane_cp_ParamLimits

0xb916,	// (0x000720e6) video_down_pane_cp

0xb93e,	// (0x0007210e) cell_video_dialer_keypad_pane_ParamLimits

0xb93e,	// (0x0007210e) cell_video_dialer_keypad_pane

0x2b9a,	// (0x0006936a) bg_button_pane_cp08_ParamLimits

0x2b9a,	// (0x0006936a) bg_button_pane_cp08

0xb955,	// (0x00072125) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb955,	// (0x00072125) cell_video_dialer_keypad_pane_g1

0xb158,	// (0x00071928) mup3_rocker2_pane_ParamLimits

0xb158,	// (0x00071928) mup3_rocker2_pane

0x2338,	// (0x00068b08) mup3_rocker2_pane_g1

0xa06b,	// (0x0007083b) main_dialer2_pane

0x6e53,	// (0x0006d623) main_mp4_pane

0xb994,	// (0x00072164) main_mp4_pane_g1_ParamLimits

0xb994,	// (0x00072164) main_mp4_pane_g1

0xb9a2,	// (0x00072172) main_mp4_pane_g2_ParamLimits

0xb9a2,	// (0x00072172) main_mp4_pane_g2

0xb9b0,	// (0x00072180) main_mp4_pane_g3_ParamLimits

0xb9b0,	// (0x00072180) main_mp4_pane_g3

0xba03,	// (0x000721d3) main_mp4_pane_g4_ParamLimits

0xba03,	// (0x000721d3) main_mp4_pane_g4

0xba2b,	// (0x000721fb) main_mp4_pane_g5_ParamLimits

0xba2b,	// (0x000721fb) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00076084) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00076084) main_mp4_pane_g

0xba7b,	// (0x0007224b) main_mp4_pane_t1_ParamLimits

0xba7b,	// (0x0007224b) main_mp4_pane_t1

0xbad7,	// (0x000722a7) main_mp4_pane_t2_ParamLimits

0xbad7,	// (0x000722a7) main_mp4_pane_t2

0x39b8,	// (0x0006a188) main_mp4_pane_t3_ParamLimits

0x39b8,	// (0x0006a188) main_mp4_pane_t3

0xbb29,	// (0x000722f9) main_mp4_pane_t4_ParamLimits

0xbb29,	// (0x000722f9) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00076091) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00076091) main_mp4_pane_t

0xbb69,	// (0x00072339) mp4_progress_pane_ParamLimits

0xbb69,	// (0x00072339) mp4_progress_pane

0xbbb3,	// (0x00072383) mp4_rocker_pane_ParamLimits

0xbbb3,	// (0x00072383) mp4_rocker_pane

0x3a8c,	// (0x0006a25c) mp4_progress_pane_t1

0x3aa5,	// (0x0006a275) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0007609a) mp4_progress_pane_t

0x3abe,	// (0x0006a28e) mup_progress_pane_cp04

0x2338,	// (0x00068b08) mp4_rocker_pane_g1

0xbbd5,	// (0x000723a5) aid_cell_size_keypad2_ParamLimits

0xbbd5,	// (0x000723a5) aid_cell_size_keypad2

0xbbe5,	// (0x000723b5) dialer2_ne_pane_ParamLimits

0xbbe5,	// (0x000723b5) dialer2_ne_pane

0xbbf1,	// (0x000723c1) grid_dialer2_keypad_pane_ParamLimits

0xbbf1,	// (0x000723c1) grid_dialer2_keypad_pane

0x3e07,	// (0x0006a5d7) bg_popup_call_pane_cp07_ParamLimits

0x3e07,	// (0x0006a5d7) bg_popup_call_pane_cp07

0xbbff,	// (0x000723cf) dialer2_ne_pane_t1_ParamLimits

0xbbff,	// (0x000723cf) dialer2_ne_pane_t1

0xbc24,	// (0x000723f4) cell_dialer2_keypad_pane_ParamLimits

0xbc24,	// (0x000723f4) cell_dialer2_keypad_pane

0x3ae6,	// (0x0006a2b6) bg_button_pane_pane_cp04_ParamLimits

0x3ae6,	// (0x0006a2b6) bg_button_pane_pane_cp04

0xbc3b,	// (0x0007240b) cell_dialer2_keypad_pane_g1_ParamLimits

0xbc3b,	// (0x0007240b) cell_dialer2_keypad_pane_g1

0x7fee,	// (0x0006e7be) aid_placing_vt_set_content_ParamLimits

0x7fee,	// (0x0006e7be) aid_placing_vt_set_content

0x8016,	// (0x0006e7e6) aid_placing_vt_set_title_ParamLimits

0x8016,	// (0x0006e7e6) aid_placing_vt_set_title

0x6e53,	// (0x0006d623) main_image3_pane

0xbcd5,	// (0x000724a5) area_side_right_pane_cp01_ParamLimits

0xbcd5,	// (0x000724a5) area_side_right_pane_cp01

0xea85,	// (0x00075255) main_image3_pane_g1_ParamLimits

0xea85,	// (0x00075255) main_image3_pane_g1

0xbd04,	// (0x000724d4) main_image3_pane_g2_ParamLimits

0xbd04,	// (0x000724d4) main_image3_pane_g2

0xbd1d,	// (0x000724ed) main_image3_pane_g3_ParamLimits

0xbd1d,	// (0x000724ed) main_image3_pane_g3

0xbd36,	// (0x00072506) main_image3_pane_g4_ParamLimits

0xbd36,	// (0x00072506) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x000760a9) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x000760a9) main_image3_pane_g

0xbd4f,	// (0x0007251f) main_image3_pane_t1_ParamLimits

0xbd4f,	// (0x0007251f) main_image3_pane_t1

0xbd74,	// (0x00072544) main_image3_pane_t2_ParamLimits

0xbd74,	// (0x00072544) main_image3_pane_t2

0xbd93,	// (0x00072563) main_image3_pane_t3_ParamLimits

0xbd93,	// (0x00072563) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x000760b2) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x000760b2) main_image3_pane_t

0x7100,	// (0x0006d8d0) grid_sctrl_middle_pane_cp01_ParamLimits

0x7100,	// (0x0006d8d0) grid_sctrl_middle_pane_cp01

0xbdf4,	// (0x000725c4) cell_sctrl_middle_pane_cp01_ParamLimits

0xbdf4,	// (0x000725c4) cell_sctrl_middle_pane_cp01

0xbe05,	// (0x000725d5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbe05,	// (0x000725d5) cell_sctrl_middle_pane_cp01_g1

0x6e53,	// (0x0006d623) main_call4_pane

0xbe12,	// (0x000725e2) aid_size_button_call4_ParamLimits

0xbe12,	// (0x000725e2) aid_size_button_call4

0xbe44,	// (0x00072614) call4_windows_pane_ParamLimits

0xbe44,	// (0x00072614) call4_windows_pane

0xbe60,	// (0x00072630) grid_call4_button_pane_ParamLimits

0xbe60,	// (0x00072630) grid_call4_button_pane

0x3b26,	// (0x0006a2f6) call4_windows_conf_pane

0xbe84,	// (0x00072654) popup_call4_audio_first_window_ParamLimits

0xbe84,	// (0x00072654) popup_call4_audio_first_window

0xbeb0,	// (0x00072680) popup_call4_audio_second_window_ParamLimits

0xbeb0,	// (0x00072680) popup_call4_audio_second_window

0x3b63,	// (0x0006a333) popup_call4_audio_wait_window_ParamLimits

0x3b63,	// (0x0006a333) popup_call4_audio_wait_window

0xbec4,	// (0x00072694) cell_call4_button_pane_ParamLimits

0xbec4,	// (0x00072694) cell_call4_button_pane

0xbee7,	// (0x000726b7) bg_button_pane_cp09_ParamLimits

0xbee7,	// (0x000726b7) bg_button_pane_cp09

0xbef3,	// (0x000726c3) cell_call4_button_pane_g1_ParamLimits

0xbef3,	// (0x000726c3) cell_call4_button_pane_g1

0xbf00,	// (0x000726d0) cell_call4_button_pane_t1_ParamLimits

0xbf00,	// (0x000726d0) cell_call4_button_pane_t1

0x3bab,	// (0x0006a37b) popup_call4_audio_conf_window_ParamLimits

0x3bab,	// (0x0006a37b) popup_call4_audio_conf_window

0xb18d,	// (0x0007195d) mup3_progress_pane_t1_ParamLimits

0xb1a4,	// (0x00071974) mup3_progress_pane_t2_ParamLimits

0x25e3,	// (0x00068db3) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00075f8b) mup3_progress_pane_t_ParamLimits

0x25fa,	// (0x00068dca) mup_progress_pane_cp03_ParamLimits

0xb6a1,	// (0x00071e71) mup3_control_keys_pane_g4_copy1

0xbb97,	// (0x00072367) mp4_rocker2_pane_ParamLimits

0xbb97,	// (0x00072367) mp4_rocker2_pane

0x3bcd,	// (0x0006a39d) mp4_rocker2_pane_g1

0x3bc5,	// (0x0006a395) mp4_rocker2_pane_g2

0xbf12,	// (0x000726e2) mp4_rocker2_pane_g3

0xbf1a,	// (0x000726ea) mp4_rocker2_pane_g4

0xbf22,	// (0x000726f2) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x000760bb) mp4_rocker2_pane_g

0x6e53,	// (0x0006d623) main_camera4_pane

0x6e53,	// (0x0006d623) main_video4_pane

0xb8f2,	// (0x000720c2) main_video_tele_dialer_pane_t1_ParamLimits

0xb8f2,	// (0x000720c2) main_video_tele_dialer_pane_t1

0xb904,	// (0x000720d4) main_video_tele_dialer_pane_t2_ParamLimits

0xb904,	// (0x000720d4) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00076075) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00076075) main_video_tele_dialer_pane_t

0xbf42,	// (0x00072712) cam4_autofocus_pane_ParamLimits

0xbf42,	// (0x00072712) cam4_autofocus_pane

0xbf5a,	// (0x0007272a) cam4_image_uncrop_pane_ParamLimits

0xbf5a,	// (0x0007272a) cam4_image_uncrop_pane

0xbf73,	// (0x00072743) cam4_indicators_pane_ParamLimits

0xbf73,	// (0x00072743) cam4_indicators_pane

0xbf8f,	// (0x0007275f) main_camera4_pane_g1_ParamLimits

0xbf8f,	// (0x0007275f) main_camera4_pane_g1

0xbf9b,	// (0x0007276b) main_camera4_pane_g2_ParamLimits

0xbf9b,	// (0x0007276b) main_camera4_pane_g2

0xbf9b,	// (0x0007276b) main_camera4_pane_g3_ParamLimits

0xbf9b,	// (0x0007276b) main_camera4_pane_g3

0xbfa7,	// (0x00072777) main_camera4_pane_g4_ParamLimits

0xbfa7,	// (0x00072777) main_camera4_pane_g4

0xbfb3,	// (0x00072783) main_camera4_pane_g5_ParamLimits

0xbfb3,	// (0x00072783) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x000760c6) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x000760c6) main_camera4_pane_g

0xbfcd,	// (0x0007279d) main_camera4_pane_t1_ParamLimits

0xbfcd,	// (0x0007279d) main_camera4_pane_t1

0x2568,	// (0x00068d38) bg_tb_trans_pane_cp06

0xc01f,	// (0x000727ef) cam4_indicators_pane_g1

0xc02f,	// (0x000727ff) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x000760e1) cam4_indicators_pane_g

0xc047,	// (0x00072817) cam4_indicators_pane_t1

0xc073,	// (0x00072843) main_video4_pane_g1_ParamLimits

0xc073,	// (0x00072843) main_video4_pane_g1

0xc07f,	// (0x0007284f) main_video4_pane_g2_ParamLimits

0xc07f,	// (0x0007284f) main_video4_pane_g2

0xc08b,	// (0x0007285b) main_video4_pane_g3_ParamLimits

0xc08b,	// (0x0007285b) main_video4_pane_g3

0xc097,	// (0x00072867) main_video4_pane_g4_ParamLimits

0xc097,	// (0x00072867) main_video4_pane_g4

0x0004,

0xf918,	// (0x000760e8) main_video4_pane_g_ParamLimits

0xf918,	// (0x000760e8) main_video4_pane_g

0xc0b9,	// (0x00072889) vid4_indicators_pane_ParamLimits

0xc0b9,	// (0x00072889) vid4_indicators_pane

0xc0d7,	// (0x000728a7) video4_image_uncrop_cif_pane_ParamLimits

0xc0d7,	// (0x000728a7) video4_image_uncrop_cif_pane

0xc0e6,	// (0x000728b6) video4_image_uncrop_nhd_pane_ParamLimits

0xc0e6,	// (0x000728b6) video4_image_uncrop_nhd_pane

0xbf5a,	// (0x0007272a) video4_image_uncrop_vga_pane_ParamLimits

0xbf5a,	// (0x0007272a) video4_image_uncrop_vga_pane

0xa05d,	// (0x0007082d) bg_tb_trans_pane_cp07

0xc0ff,	// (0x000728cf) vid4_indicators_pane_g1

0xc111,	// (0x000728e1) vid4_indicators_pane_g2

0xc124,	// (0x000728f4) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x000760f3) vid4_indicators_pane_g

0xc151,	// (0x00072921) vid4_indicators_pane_t1

0xc16c,	// (0x0007293c) cam4_autofocus_pane_g1

0xc174,	// (0x00072944) cam4_autofocus_pane_g2

0xc17c,	// (0x0007294c) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x000760fe) cam4_autofocus_pane_g

0xc184,	// (0x00072954) cam4_autofocus_pane_g3_copy1

0xb922,	// (0x000720f2) video_down_pane_cp_t1

0xb930,	// (0x00072100) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0007607a) video_down_pane_cp_t

0x7100,	// (0x0006d8d0) popup_vitu2_window_ParamLimits

0x7100,	// (0x0006d8d0) popup_vitu2_window

0xc18c,	// (0x0007295c) aid_size_cell2_itu2_ParamLimits

0xc18c,	// (0x0007295c) aid_size_cell2_itu2

0xc1ae,	// (0x0007297e) aid_size_cell_itu2_ParamLimits

0xc1ae,	// (0x0007297e) aid_size_cell_itu2

0x3e07,	// (0x0006a5d7) bg_popup_window_pane_cp09_ParamLimits

0x3e07,	// (0x0006a5d7) bg_popup_window_pane_cp09

0xc1f2,	// (0x000729c2) field_vitu2_entry_pane_ParamLimits

0xc1f2,	// (0x000729c2) field_vitu2_entry_pane

0xc212,	// (0x000729e2) grid_vitu2_function_pane_ParamLimits

0xc212,	// (0x000729e2) grid_vitu2_function_pane

0xc256,	// (0x00072a26) grid_vitu2_itu_pane_ParamLimits

0xc256,	// (0x00072a26) grid_vitu2_itu_pane

0xc2ca,	// (0x00072a9a) cell_vitu2_itu_pane_ParamLimits

0xc2ca,	// (0x00072a9a) cell_vitu2_itu_pane

0xc2e1,	// (0x00072ab1) cell_vitu2_function_pane_ParamLimits

0xc2e1,	// (0x00072ab1) cell_vitu2_function_pane

0x3c87,	// (0x0006a457) bg_popup_call_pane_cp08_ParamLimits

0x3c87,	// (0x0006a457) bg_popup_call_pane_cp08

0x3ca0,	// (0x0006a470) field_vitu2_entry_pane_g1

0x3cac,	// (0x0006a47c) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00076105) field_vitu2_entry_pane_g

0x5fe6,	// (0x0006c7b6) field_vitu2_entry_pane_t1_ParamLimits

0x5fe6,	// (0x0006c7b6) field_vitu2_entry_pane_t1

0x6013,	// (0x0006c7e3) field_vitu2_entry_pane_t2_ParamLimits

0x6013,	// (0x0006c7e3) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0007610c) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0007610c) field_vitu2_entry_pane_t

0xc325,	// (0x00072af5) bg_button_pane_cp010_ParamLimits

0xc325,	// (0x00072af5) bg_button_pane_cp010

0xc333,	// (0x00072b03) cell_vitu2_itu_pane_g1

0xc351,	// (0x00072b21) cell_vitu2_itu_pane_t1_ParamLimits

0xc351,	// (0x00072b21) cell_vitu2_itu_pane_t1

0x6030,	// (0x0006c800) cell_vitu2_itu_pane_t2_ParamLimits

0x6030,	// (0x0006c800) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00076116) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00076116) cell_vitu2_itu_pane_t

0xa05d,	// (0x0007082d) bg_button_pane_cp011

0xc3a3,	// (0x00072b73) cell_vitu2_function_pane_g1

0x6e53,	// (0x0006d623) main_myfav_hc_pane

0xbdd5,	// (0x000725a5) popup_image3_note_pane_ParamLimits

0xbdd5,	// (0x000725a5) popup_image3_note_pane

0xbde3,	// (0x000725b3) popup_image3_tool_bar_pane_ParamLimits

0xbde3,	// (0x000725b3) popup_image3_tool_bar_pane

0x609e,	// (0x0006c86e) cell_vitu2_itu_pane_t3_ParamLimits

0x609e,	// (0x0006c86e) cell_vitu2_itu_pane_t3

0x6e53,	// (0x0006d623) bg_popup_trans_pane

0x3cdc,	// (0x0006a4ac) grid_image3_tool_bar_pane

0x3ce6,	// (0x0006a4b6) bg_popup_trans_pane_g1

0x02b1,	// (0x00066a81) bg_popup_trans_pane_g2

0x3cee,	// (0x0006a4be) bg_popup_trans_pane_g3

0x3cf6,	// (0x0006a4c6) bg_popup_trans_pane_g4

0x3cfe,	// (0x0006a4ce) bg_popup_trans_pane_g5

0x3d06,	// (0x0006a4d6) bg_popup_trans_pane_g6

0x3d0e,	// (0x0006a4de) bg_popup_trans_pane_g7

0x3d16,	// (0x0006a4e6) bg_popup_trans_pane_g8

0x0291,	// (0x00066a61) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0007611d) bg_popup_trans_pane_g

0x3d1e,	// (0x0006a4ee) cell_image3_tool_bar_pane_ParamLimits

0x3d1e,	// (0x0006a4ee) cell_image3_tool_bar_pane

0x2338,	// (0x00068b08) cell_image3_tool_bar_pane_g1

0x6e53,	// (0x0006d623) bg_popup_trans_pane_cp1

0x3d34,	// (0x0006a504) popup_image3_note_pane_t1

0x3e15,	// (0x0006a5e5) popup_image3_note_pane_t2

0x3e23,	// (0x0006a5f3) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00076130) popup_image3_note_pane_t

0x3e33,	// (0x0006a603) popup_image3_note_pane_t3_copy1

0xc3b7,	// (0x00072b87) bg_myfav_hc_instruction_pane_ParamLimits

0xc3b7,	// (0x00072b87) bg_myfav_hc_instruction_pane

0xc3cf,	// (0x00072b9f) cell_myfav_contact_pane_ParamLimits

0xc3cf,	// (0x00072b9f) cell_myfav_contact_pane

0xc3e9,	// (0x00072bb9) cell_myfav_contact_pane_cp1_ParamLimits

0xc3e9,	// (0x00072bb9) cell_myfav_contact_pane_cp1

0xc401,	// (0x00072bd1) cell_myfav_contact_pane_cp2_ParamLimits

0xc401,	// (0x00072bd1) cell_myfav_contact_pane_cp2

0xc419,	// (0x00072be9) cell_myfav_contact_pane_cp3_ParamLimits

0xc419,	// (0x00072be9) cell_myfav_contact_pane_cp3

0xc430,	// (0x00072c00) cell_myfav_contact_pane_cp4_ParamLimits

0xc430,	// (0x00072c00) cell_myfav_contact_pane_cp4

0xc446,	// (0x00072c16) cell_myfav_contact_pane_cp5_ParamLimits

0xc446,	// (0x00072c16) cell_myfav_contact_pane_cp5

0xc45a,	// (0x00072c2a) cell_myfav_contact_pane_cp6_ParamLimits

0xc45a,	// (0x00072c2a) cell_myfav_contact_pane_cp6

0xc46e,	// (0x00072c3e) cell_myfav_contact_pane_cp7_ParamLimits

0xc46e,	// (0x00072c3e) cell_myfav_contact_pane_cp7

0x3e41,	// (0x0006a611) listscroll_gen_pane_cp05

0xc486,	// (0x00072c56) main_myfav_hc_pane_g1_ParamLimits

0xc486,	// (0x00072c56) main_myfav_hc_pane_g1

0xc4a0,	// (0x00072c70) main_myfav_hc_pane_g2_ParamLimits

0xc4a0,	// (0x00072c70) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00076137) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00076137) main_myfav_hc_pane_g

0xc4d2,	// (0x00072ca2) main_myfav_hc_pane_t1_ParamLimits

0xc4d2,	// (0x00072ca2) main_myfav_hc_pane_t1

0x3e4a,	// (0x0006a61a) main_myfav_hc_pane_t2_ParamLimits

0x3e4a,	// (0x0006a61a) main_myfav_hc_pane_t2

0x3e5c,	// (0x0006a62c) main_myfav_hc_pane_t3_ParamLimits

0x3e5c,	// (0x0006a62c) main_myfav_hc_pane_t3

0xc4e9,	// (0x00072cb9) main_myfav_hc_pane_t4_ParamLimits

0xc4e9,	// (0x00072cb9) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0007613e) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0007613e) main_myfav_hc_pane_t

0x2338,	// (0x00068b08) bg_myfav_hc_instruction_pane_g1

0x3e6e,	// (0x0006a63e) cell_myfav_contact_pane_g1_ParamLimits

0x3e6e,	// (0x0006a63e) cell_myfav_contact_pane_g1

0x3e6e,	// (0x0006a63e) cell_myfav_contact_pane_g2_ParamLimits

0x3e6e,	// (0x0006a63e) cell_myfav_contact_pane_g2

0x3e7a,	// (0x0006a64a) cell_myfav_contact_pane_g3_ParamLimits

0x3e7a,	// (0x0006a64a) cell_myfav_contact_pane_g3

0x25cd,	// (0x00068d9d) cell_myfav_contact_pane_g4_ParamLimits

0x25cd,	// (0x00068d9d) cell_myfav_contact_pane_g4

0x3e87,	// (0x0006a657) cell_myfav_contact_pane_g5_ParamLimits

0x3e87,	// (0x0006a657) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00076149) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00076149) cell_myfav_contact_pane_g

0xc4ba,	// (0x00072c8a) main_myfav_hc_pane_g3_ParamLimits

0xc4ba,	// (0x00072c8a) main_myfav_hc_pane_g3

0x7012,	// (0x0006d7e2) popup_adpt_find_window

0xc513,	// (0x00072ce3) afind_page_pane_ParamLimits

0xc513,	// (0x00072ce3) afind_page_pane

0xc520,	// (0x00072cf0) aid_size_cell_afind_ParamLimits

0xc520,	// (0x00072cf0) aid_size_cell_afind

0xc53a,	// (0x00072d0a) bg_popup_sub_pane_cp09_ParamLimits

0xc53a,	// (0x00072d0a) bg_popup_sub_pane_cp09

0xc547,	// (0x00072d17) find_pane_cp01_ParamLimits

0xc547,	// (0x00072d17) find_pane_cp01

0x3e93,	// (0x0006a663) grid_afind_control_pane_ParamLimits

0x3e93,	// (0x0006a663) grid_afind_control_pane

0xc554,	// (0x00072d24) grid_afind_pane_ParamLimits

0xc554,	// (0x00072d24) grid_afind_pane

0xc570,	// (0x00072d40) cell_afind_pane_ParamLimits

0xc570,	// (0x00072d40) cell_afind_pane

0x2338,	// (0x00068b08) afind_page_pane_g1

0xc5ba,	// (0x00072d8a) afind_page_pane_g2

0xc5c3,	// (0x00072d93) afind_page_pane_g3

0x0002,

0xf984,	// (0x00076154) afind_page_pane_g

0xc5cc,	// (0x00072d9c) afind_page_pane_t1

0x3ea7,	// (0x0006a677) cell_afind_grid_control_pane_ParamLimits

0x3ea7,	// (0x0006a677) cell_afind_grid_control_pane

0x3ae6,	// (0x0006a2b6) bg_button_pane_cp69_ParamLimits

0x3ae6,	// (0x0006a2b6) bg_button_pane_cp69

0xc5ec,	// (0x00072dbc) cell_afind_pane_g1_ParamLimits

0xc5ec,	// (0x00072dbc) cell_afind_pane_g1

0xc5f9,	// (0x00072dc9) cell_afind_pane_t1_ParamLimits

0xc5f9,	// (0x00072dc9) cell_afind_pane_t1

0x00a6,	// (0x00066876) bg_button_pane_cp72

0x3eb6,	// (0x0006a686) cell_afind_grid_control_pane_g1

0x9bd8,	// (0x000703a8) aid_image_placing_area_ParamLimits

0x9bd8,	// (0x000703a8) aid_image_placing_area

0x28ea,	// (0x000690ba) field_vitu_entry_pane_g1_ParamLimits

0x28ea,	// (0x000690ba) field_vitu_entry_pane_g1

0x28f6,	// (0x000690c6) field_vitu_entry_pane_g2_ParamLimits

0x28f6,	// (0x000690c6) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00076005) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00076005) field_vitu_entry_pane_g

0xb728,	// (0x00071ef8) cell_vitu_itu_pane_g1_ParamLimits

0xb778,	// (0x00071f48) cell_vitu_itu_pane_t3_ParamLimits

0xb778,	// (0x00071f48) cell_vitu_itu_pane_t3

0x3a8c,	// (0x0006a25c) mp4_progress_pane_t1_ParamLimits

0x3aa5,	// (0x0006a275) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0007609a) mp4_progress_pane_t_ParamLimits

0x3abe,	// (0x0006a28e) mup_progress_pane_cp04_ParamLimits

0xc4fd,	// (0x00072ccd) main_myfav_hc_pane_t5_ParamLimits

0xc4fd,	// (0x00072ccd) main_myfav_hc_pane_t5

0x5cb5,	// (0x0006c485) aid_zoom_text_primary

0x7012,	// (0x0006d7e2) popup_adpt_find_window_ParamLimits

0xa05d,	// (0x0007082d) main_cam_set_pane

0xbf81,	// (0x00072751) cam4_zoom_pane_ParamLimits

0xbf81,	// (0x00072751) cam4_zoom_pane

0xc60b,	// (0x00072ddb) main_cam_set_pane_g1_ParamLimits

0xc60b,	// (0x00072ddb) main_cam_set_pane_g1

0xc619,	// (0x00072de9) main_cam_set_pane_g2_ParamLimits

0xc619,	// (0x00072de9) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0007615b) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0007615b) main_cam_set_pane_g

0xc625,	// (0x00072df5) main_cam_set_pane_t1_ParamLimits

0xc625,	// (0x00072df5) main_cam_set_pane_t1

0xc641,	// (0x00072e11) main_cset_listscroll_pane_ParamLimits

0xc641,	// (0x00072e11) main_cset_listscroll_pane

0xc670,	// (0x00072e40) main_cset_slider_pane_ParamLimits

0xc670,	// (0x00072e40) main_cset_slider_pane

0x3ec7,	// (0x0006a697) main_cset_list_pane_ParamLimits

0x3ec7,	// (0x0006a697) main_cset_list_pane

0x3ed7,	// (0x0006a6a7) scroll_pane_cp028

0xc691,	// (0x00072e61) aid_area_touch_slider

0xc6ad,	// (0x00072e7d) cset_slider_pane

0xc6d7,	// (0x00072ea7) main_cset_slider_pane_g1

0xc6ec,	// (0x00072ebc) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00076160) main_cset_slider_pane_g

0x3f10,	// (0x0006a6e0) main_cset_slider_pane_t1

0xc7a8,	// (0x00072f78) main_cset_slider_pane_t2

0xc7c2,	// (0x00072f92) main_cset_slider_pane_t3

0xc7dc,	// (0x00072fac) main_cset_slider_pane_t4

0xc7f6,	// (0x00072fc6) main_cset_slider_pane_t5

0xc810,	// (0x00072fe0) main_cset_slider_pane_t6

0xc825,	// (0x00072ff5) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00076185) main_cset_slider_pane_t

0xc929,	// (0x000730f9) cset_list_set_pane_ParamLimits

0xc929,	// (0x000730f9) cset_list_set_pane

0xc93a,	// (0x0007310a) aid_position_infowindow_above

0xc942,	// (0x00073112) aid_position_infowindow_below

0xc94a,	// (0x0007311a) cset_list_set_pane_g1_ParamLimits

0xc94a,	// (0x0007311a) cset_list_set_pane_g1

0x60eb,	// (0x0006c8bb) cset_list_set_pane_g3_ParamLimits

0x60eb,	// (0x0006c8bb) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x000761a4) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x000761a4) cset_list_set_pane_g

0x60fa,	// (0x0006c8ca) cset_list_set_pane_t1_ParamLimits

0x60fa,	// (0x0006c8ca) cset_list_set_pane_t1

0xa05d,	// (0x0007082d) list_highlight_pane_cp021_ParamLimits

0xa05d,	// (0x0007082d) list_highlight_pane_cp021

0x0aee,	// (0x000672be) cset_slider_pane_g1

0x0b00,	// (0x000672d0) cset_slider_pane_g2

0x0af7,	// (0x000672c7) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x000761a9) cset_slider_pane_g

0xc956,	// (0x00073126) aid_area_touch_cam4_zoom

0xc95e,	// (0x0007312e) cam4_zoom_cont_pane

0xc966,	// (0x00073136) cam4_zoom_pane_g1

0xc96e,	// (0x0007313e) cam4_zoom_pane_g2

0xc976,	// (0x00073146) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x000761b0) cam4_zoom_pane_g

0x472d,	// (0x0006aefd) cam4_zoom_cont_pane_g1

0x4736,	// (0x0006af06) cam4_zoom_cont_pane_g2

0x473f,	// (0x0006af0f) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x000761b7) cam4_zoom_cont_pane_g

0xbe2c,	// (0x000725fc) call4_image_pane_ParamLimits

0xbe2c,	// (0x000725fc) call4_image_pane

0x3b26,	// (0x0006a2f6) call4_windows_conf_pane_ParamLimits

0x3b41,	// (0x0006a311) popup_call4_audio_in_window_ParamLimits

0x3b41,	// (0x0006a311) popup_call4_audio_in_window

0x6e53,	// (0x0006d623) bg_popup_call2_act_pane_cp02

0x3ba3,	// (0x0006a373) call4_list_conf_pane

0x2338,	// (0x00068b08) call4_image_pane_g1

0x2338,	// (0x00068b08) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00075ecb) call4_image_pane_g

0x3fb0,	// (0x0006a780) list_single_graphic_popup_conf4_pane_ParamLimits

0x3fb0,	// (0x0006a780) list_single_graphic_popup_conf4_pane

0x6e53,	// (0x0006d623) list_highlight_pane_cp022

0x3fc5,	// (0x0006a795) list_single_graphic_popup_conf4_pane_g1

0x07c8,	// (0x00066f98) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x000761be) list_single_graphic_popup_conf4_pane_g

0x3fcd,	// (0x0006a79d) list_single_graphic_popup_conf4_pane_t1

0x8170,	// (0x0006e940) popup_vtel_slider_window_ParamLimits

0x8170,	// (0x0006e940) popup_vtel_slider_window

0x3ad4,	// (0x0006a2a4) dialer2_ne_pane_t2_ParamLimits

0x3ad4,	// (0x0006a2a4) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0007609f) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0007609f) dialer2_ne_pane_t

0xa05d,	// (0x0007082d) bg_popup_sub_pane_cp010_ParamLimits

0xa05d,	// (0x0007082d) bg_popup_sub_pane_cp010

0xc97e,	// (0x0007314e) popup_vtel_slider_window_g1_ParamLimits

0xc97e,	// (0x0007314e) popup_vtel_slider_window_g1

0xc98a,	// (0x0007315a) popup_vtel_slider_window_g2_ParamLimits

0xc98a,	// (0x0007315a) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x000761c3) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x000761c3) popup_vtel_slider_window_g

0xc9d2,	// (0x000731a2) vtel_slider_pane_ParamLimits

0xc9d2,	// (0x000731a2) vtel_slider_pane

0xc9e1,	// (0x000731b1) vtel_slider_pane_g1_ParamLimits

0xc9e1,	// (0x000731b1) vtel_slider_pane_g1

0xc9ee,	// (0x000731be) vtel_slider_pane_g2_ParamLimits

0xc9ee,	// (0x000731be) vtel_slider_pane_g2

0xc9fb,	// (0x000731cb) vtel_slider_pane_g3_ParamLimits

0xc9fb,	// (0x000731cb) vtel_slider_pane_g3

0xc9e1,	// (0x000731b1) vtel_slider_pane_g4_ParamLimits

0xc9e1,	// (0x000731b1) vtel_slider_pane_g4

0xca08,	// (0x000731d8) vtel_slider_pane_g5_ParamLimits

0xca08,	// (0x000731d8) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x000761cc) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x000761cc) vtel_slider_pane_g

0x6e53,	// (0x0006d623) main_gallery2_pane

0xc1d4,	// (0x000729a4) aid_size_row_itut2_dropdow_list_ParamLimits

0xc1d4,	// (0x000729a4) aid_size_row_itut2_dropdow_list

0xc234,	// (0x00072a04) grid_vitu2_function_top_pane_ParamLimits

0xc234,	// (0x00072a04) grid_vitu2_function_top_pane

0xc286,	// (0x00072a56) popup_vitu2_dropdown_list_window_ParamLimits

0xc286,	// (0x00072a56) popup_vitu2_dropdown_list_window

0xc2a6,	// (0x00072a76) popup_vitu2_match_list_window

0xca15,	// (0x000731e5) cell_vitu2_function_top_pane_ParamLimits

0xca15,	// (0x000731e5) cell_vitu2_function_top_pane

0xca35,	// (0x00073205) cell_vitu2_function_top_pane_cp01_ParamLimits

0xca35,	// (0x00073205) cell_vitu2_function_top_pane_cp01

0xca53,	// (0x00073223) cell_vitu2_function_top_wide_pane_ParamLimits

0xca53,	// (0x00073223) cell_vitu2_function_top_wide_pane

0xa05d,	// (0x0007082d) bg_button_pane_cp012

0xca71,	// (0x00073241) cell_vitu2_function_top_pane_g1

0xca80,	// (0x00073250) bg_button_pane_cp013_ParamLimits

0xca80,	// (0x00073250) bg_button_pane_cp013

0xca9c,	// (0x0007326c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xca9c,	// (0x0007326c) cell_vitu2_function_top_wide_pane_g1

0x7100,	// (0x0006d8d0) bg_popup_sub_pane_cp20

0xcab4,	// (0x00073284) list_vitu2_match_list_pane

0x3ce6,	// (0x0006a4b6) bg_popup_sub_pane_cp20_g1

0x3cee,	// (0x0006a4be) bg_popup_sub_pane_cp20_g2

0x02b1,	// (0x00066a81) bg_popup_sub_pane_cp20_g3

0x3cf6,	// (0x0006a4c6) bg_popup_sub_pane_cp20_g4

0x0291,	// (0x00066a61) bg_popup_sub_pane_cp20_g5

0x3fe3,	// (0x0006a7b3) bg_popup_sub_pane_cp20_g6

0x3d06,	// (0x0006a4d6) bg_popup_sub_pane_cp20_g7

0x3d0e,	// (0x0006a4de) bg_popup_sub_pane_cp20_g8

0x3d16,	// (0x0006a4e6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x000761d7) bg_popup_sub_pane_cp20_g

0xcacc,	// (0x0007329c) list_vitu2_match_list_item_pane_ParamLimits

0xcacc,	// (0x0007329c) list_vitu2_match_list_item_pane

0xcade,	// (0x000732ae) list_vitu2_match_list_item_pane_t1

0x6e53,	// (0x0006d623) bg_popup_sub_pane_cp21

0x0682,	// (0x00066e52) grid_vitu2_dropdown_list_pane

0xcaec,	// (0x000732bc) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcaec,	// (0x000732bc) cell_vitu2_dropdown_list_char_pane

0xcb11,	// (0x000732e1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcb11,	// (0x000732e1) cell_vitu2_dropdown_list_ctrl_pane

0x3ffd,	// (0x0006a7cd) cell_vitu2_dropdown_list_char_pane_g1

0x3ff4,	// (0x0006a7c4) cell_vitu2_dropdown_list_char_pane_g2

0x3feb,	// (0x0006a7bb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x000761f4) cell_vitu2_dropdown_list_char_pane_g

0xcb3f,	// (0x0007330f) cell_vitu2_dropdown_list_char_pane_t1

0xcb4d,	// (0x0007331d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcb4d,	// (0x0007331d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcb5d,	// (0x0007332d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcb5d,	// (0x0007332d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcb6e,	// (0x0007333e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcb6e,	// (0x0007333e) cell_vitu2_dropdown_list_ctrl_pane_g3

0xcb7e,	// (0x0007334e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xcb7e,	// (0x0007334e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2568,	// (0x00068d38) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2568,	// (0x00068d38) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x000761fb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x000761fb) cell_vitu2_dropdown_list_ctrl_pane_g

0xcb97,	// (0x00073367) aid_size_cell_gallery2_ParamLimits

0xcb97,	// (0x00073367) aid_size_cell_gallery2

0xcba5,	// (0x00073375) grid_gallery2_pane_ParamLimits

0xcba5,	// (0x00073375) grid_gallery2_pane

0xcbb4,	// (0x00073384) scroll_pane_cp029_ParamLimits

0xcbb4,	// (0x00073384) scroll_pane_cp029

0xcbc0,	// (0x00073390) cell_gallery2_pane_ParamLimits

0xcbc0,	// (0x00073390) cell_gallery2_pane

0x4006,	// (0x0006a7d6) cell_gallery2_pane_g2

0xcbea,	// (0x000733ba) cell_gallery2_pane_g3

0x4010,	// (0x0006a7e0) cell_gallery2_pane_g4

0x4018,	// (0x0006a7e8) cell_gallery2_pane_g5

0x0996,	// (0x00067166) grid_highlight_pane_cp10

0xc2a6,	// (0x00072a76) popup_vitu2_match_list_window_ParamLimits

0xc2ba,	// (0x00072a8a) popup_vitu2_query_window_ParamLimits

0xc2ba,	// (0x00072a8a) popup_vitu2_query_window

0x6e53,	// (0x0006d623) bg_vitu2_candi_button_pane

0x3ffd,	// (0x0006a7cd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3ff4,	// (0x0006a7c4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3feb,	// (0x0006a7bb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6161,	// (0x0006c931) bg_button_pane_cp015

0xcbf2,	// (0x000733c2) bg_button_pane_cp016

0xcc05,	// (0x000733d5) bg_button_pane_cp017

0x1e03,	// (0x000685d3) bg_popup_sub_pane_cp22

0x4020,	// (0x0006a7f0) popup_vitu2_query_window_g1

0x6194,	// (0x0006c964) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00076206) popup_vitu2_query_window_g

0x61b1,	// (0x0006c981) popup_vitu2_query_window_t1_ParamLimits

0x61b1,	// (0x0006c981) popup_vitu2_query_window_t1

0x61e4,	// (0x0006c9b4) popup_vitu2_query_window_t2_ParamLimits

0x61e4,	// (0x0006c9b4) popup_vitu2_query_window_t2

0x61f6,	// (0x0006c9c6) popup_vitu2_query_window_t3_ParamLimits

0x61f6,	// (0x0006c9c6) popup_vitu2_query_window_t3

0xcc29,	// (0x000733f9) popup_vitu2_query_window_t4_ParamLimits

0xcc29,	// (0x000733f9) popup_vitu2_query_window_t4

0xcc4c,	// (0x0007341c) popup_vitu2_query_window_t5_ParamLimits

0xcc4c,	// (0x0007341c) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0007620d) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0007620d) popup_vitu2_query_window_t

0x3ebf,	// (0x0006a68f) main_cset_text_pane

0xc691,	// (0x00072e61) aid_area_touch_slider_ParamLimits

0xc6ad,	// (0x00072e7d) cset_slider_pane_ParamLimits

0xc6d7,	// (0x00072ea7) main_cset_slider_pane_g1_ParamLimits

0xc6ec,	// (0x00072ebc) main_cset_slider_pane_g2_ParamLimits

0x3ee0,	// (0x0006a6b0) main_cset_slider_pane_g3_ParamLimits

0x3ee0,	// (0x0006a6b0) main_cset_slider_pane_g3

0xc701,	// (0x00072ed1) main_cset_slider_pane_g4_ParamLimits

0xc701,	// (0x00072ed1) main_cset_slider_pane_g4

0xc710,	// (0x00072ee0) main_cset_slider_pane_g5_ParamLimits

0xc710,	// (0x00072ee0) main_cset_slider_pane_g5

0xc71c,	// (0x00072eec) main_cset_slider_pane_g6_ParamLimits

0xc71c,	// (0x00072eec) main_cset_slider_pane_g6

0xf990,	// (0x00076160) main_cset_slider_pane_g_ParamLimits

0x3f10,	// (0x0006a6e0) main_cset_slider_pane_t1_ParamLimits

0xc7a8,	// (0x00072f78) main_cset_slider_pane_t2_ParamLimits

0xc7c2,	// (0x00072f92) main_cset_slider_pane_t3_ParamLimits

0xc7dc,	// (0x00072fac) main_cset_slider_pane_t4_ParamLimits

0xc7f6,	// (0x00072fc6) main_cset_slider_pane_t5_ParamLimits

0xc810,	// (0x00072fe0) main_cset_slider_pane_t6_ParamLimits

0xc825,	// (0x00072ff5) main_cset_slider_pane_t7_ParamLimits

0xc84f,	// (0x0007301f) main_cset_slider_pane_t8_ParamLimits

0xc84f,	// (0x0007301f) main_cset_slider_pane_t8

0xc877,	// (0x00073047) main_cset_slider_pane_t9_ParamLimits

0xc877,	// (0x00073047) main_cset_slider_pane_t9

0xc89f,	// (0x0007306f) main_cset_slider_pane_t10_ParamLimits

0xc89f,	// (0x0007306f) main_cset_slider_pane_t10

0xc8c7,	// (0x00073097) main_cset_slider_pane_t11_ParamLimits

0xc8c7,	// (0x00073097) main_cset_slider_pane_t11

0xc8ef,	// (0x000730bf) main_cset_slider_pane_t12_ParamLimits

0xc8ef,	// (0x000730bf) main_cset_slider_pane_t12

0xc90c,	// (0x000730dc) main_cset_slider_pane_t13_ParamLimits

0xc90c,	// (0x000730dc) main_cset_slider_pane_t13

0xf9b5,	// (0x00076185) main_cset_slider_pane_t_ParamLimits

0x6e53,	// (0x0006d623) bg_popup_sub_pane_cp011

0x402c,	// (0x0006a7fc) main_cset_text_pane_g1

0x4034,	// (0x0006a804) main_cset_text_pane_t1

0x4042,	// (0x0006a812) main_cset_text_pane_t2

0x4050,	// (0x0006a820) main_cset_text_pane_t3

0x405e,	// (0x0006a82e) main_cset_text_pane_t4

0x406c,	// (0x0006a83c) main_cset_text_pane_t5

0x407a,	// (0x0006a84a) main_cset_text_pane_t6

0x4088,	// (0x0006a858) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0007621c) main_cset_text_pane_t

0x6e53,	// (0x0006d623) main_cam4_burst_pane

0x6e53,	// (0x0006d623) main_cam5_pane

0xc5da,	// (0x00072daa) bg_button_pane_cp019

0xc5e3,	// (0x00072db3) bg_button_pane_cp020

0x3eec,	// (0x0006a6bc) main_cset_slider_pane_g7_ParamLimits

0x3eec,	// (0x0006a6bc) main_cset_slider_pane_g7

0x3ef8,	// (0x0006a6c8) main_cset_slider_pane_g8_ParamLimits

0x3ef8,	// (0x0006a6c8) main_cset_slider_pane_g8

0xc730,	// (0x00072f00) main_cset_slider_pane_g9_ParamLimits

0xc730,	// (0x00072f00) main_cset_slider_pane_g9

0xc73c,	// (0x00072f0c) main_cset_slider_pane_g10_ParamLimits

0xc73c,	// (0x00072f0c) main_cset_slider_pane_g10

0xc748,	// (0x00072f18) main_cset_slider_pane_g11_ParamLimits

0xc748,	// (0x00072f18) main_cset_slider_pane_g11

0xc754,	// (0x00072f24) main_cset_slider_pane_g12_ParamLimits

0xc754,	// (0x00072f24) main_cset_slider_pane_g12

0xc760,	// (0x00072f30) main_cset_slider_pane_g13_ParamLimits

0xc760,	// (0x00072f30) main_cset_slider_pane_g13

0xc76c,	// (0x00072f3c) main_cset_slider_pane_g14_ParamLimits

0xc76c,	// (0x00072f3c) main_cset_slider_pane_g14

0xc778,	// (0x00072f48) main_cset_slider_pane_g15_ParamLimits

0xc778,	// (0x00072f48) main_cset_slider_pane_g15

0x3f3e,	// (0x0006a70e) main_cset_slider_pane_t14_ParamLimits

0x3f3e,	// (0x0006a70e) main_cset_slider_pane_t14

0x3f77,	// (0x0006a747) main_cset_slider_pane_t15_ParamLimits

0x3f77,	// (0x0006a747) main_cset_slider_pane_t15

0xcc6f,	// (0x0007343f) aid_cam4_burst_size_cell_ParamLimits

0xcc6f,	// (0x0007343f) aid_cam4_burst_size_cell

0xcc8b,	// (0x0007345b) grid_cam4_burst_pane_ParamLimits

0xcc8b,	// (0x0007345b) grid_cam4_burst_pane

0xccbd,	// (0x0007348d) linegrid_cam4_burst_pane_ParamLimits

0xccbd,	// (0x0007348d) linegrid_cam4_burst_pane

0xccdb,	// (0x000734ab) scroll_pane_cp30_ParamLimits

0xccdb,	// (0x000734ab) scroll_pane_cp30

0xcce7,	// (0x000734b7) cell_cam4_burst_pane_ParamLimits

0xcce7,	// (0x000734b7) cell_cam4_burst_pane

0x4096,	// (0x0006a866) linegrid_cam4_burst_pane_g1_ParamLimits

0x4096,	// (0x0006a866) linegrid_cam4_burst_pane_g1

0xcd27,	// (0x000734f7) linegrid_cam4_burst_pane_g2_ParamLimits

0xcd27,	// (0x000734f7) linegrid_cam4_burst_pane_g2

0x40a3,	// (0x0006a873) linegrid_cam4_burst_pane_g3_ParamLimits

0x40a3,	// (0x0006a873) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0007622b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0007622b) linegrid_cam4_burst_pane_g

0xcd38,	// (0x00073508) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcd38,	// (0x00073508) linegrid_cam4_burst_pane_g3_copy1

0x40b0,	// (0x0006a880) linegrid_cam4_burst_pane_g4_ParamLimits

0x40b0,	// (0x0006a880) linegrid_cam4_burst_pane_g4

0xcd52,	// (0x00073522) linegrid_cam4_burst_pane_g5_ParamLimits

0xcd52,	// (0x00073522) linegrid_cam4_burst_pane_g5

0xcd63,	// (0x00073533) linegrid_cam4_burst_pane_g6_ParamLimits

0xcd63,	// (0x00073533) linegrid_cam4_burst_pane_g6

0x40bd,	// (0x0006a88d) linegrid_cam4_burst_pane_g7_ParamLimits

0x40bd,	// (0x0006a88d) linegrid_cam4_burst_pane_g7

0xcd7a,	// (0x0007354a) cell_cam4_burst_pane_g1

0x40d6,	// (0x0006a8a6) main_cam5_pane_t1_ParamLimits

0x40d6,	// (0x0006a8a6) main_cam5_pane_t1

0x40e8,	// (0x0006a8b8) main_cam5_pane_t2_ParamLimits

0x40e8,	// (0x0006a8b8) main_cam5_pane_t2

0x40fa,	// (0x0006a8ca) main_cam5_pane_t3_ParamLimits

0x40fa,	// (0x0006a8ca) main_cam5_pane_t3

0x410c,	// (0x0006a8dc) main_cam5_pane_t4_ParamLimits

0x410c,	// (0x0006a8dc) main_cam5_pane_t4

0x4124,	// (0x0006a8f4) main_cam5_pane_t5_ParamLimits

0x4124,	// (0x0006a8f4) main_cam5_pane_t5

0x4138,	// (0x0006a908) main_cam5_pane_t6_ParamLimits

0x4138,	// (0x0006a908) main_cam5_pane_t6

0x414c,	// (0x0006a91c) main_cam5_pane_t7_ParamLimits

0x414c,	// (0x0006a91c) main_cam5_pane_t7

0x415e,	// (0x0006a92e) main_cam5_pane_t8_ParamLimits

0x415e,	// (0x0006a92e) main_cam5_pane_t8

0x417c,	// (0x0006a94c) main_cam5_pane_t9_ParamLimits

0x417c,	// (0x0006a94c) main_cam5_pane_t9

0x418e,	// (0x0006a95e) main_cam5_pane_t10_ParamLimits

0x418e,	// (0x0006a95e) main_cam5_pane_t10

0x41a0,	// (0x0006a970) main_cam5_pane_t11_ParamLimits

0x41a0,	// (0x0006a970) main_cam5_pane_t11

0x41b4,	// (0x0006a984) main_cam5_pane_t12_ParamLimits

0x41b4,	// (0x0006a984) main_cam5_pane_t12

0x41cb,	// (0x0006a99b) main_cam5_pane_t13_ParamLimits

0x41cb,	// (0x0006a99b) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00076237) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00076237) main_cam5_pane_t

0x70c9,	// (0x0006d899) popup_scut_keymap_window_ParamLimits

0x70c9,	// (0x0006d899) popup_scut_keymap_window

0xcd8d,	// (0x0007355d) aid_size_cell_brow_shortcut

0x0996,	// (0x00067166) bg_popup_window_pane_cp010

0xcd99,	// (0x00073569) grid_scut_pane

0xcda5,	// (0x00073575) cell_scut_pane_ParamLimits

0xcda5,	// (0x00073575) cell_scut_pane

0xcdc0,	// (0x00073590) cell_scut_pane_g1

0x41ee,	// (0x0006a9be) cell_scut_pane_t1

0x41fd,	// (0x0006a9cd) cell_scut_pane_t2

0xcdc9,	// (0x00073599) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00076252) cell_scut_pane_t

0xadae,	// (0x0007157e) main_mup3_pane_g8_ParamLimits

0xadae,	// (0x0007157e) main_mup3_pane_g8

0xc1e2,	// (0x000729b2) area_vitu2_query_pane_ParamLimits

0xc1e2,	// (0x000729b2) area_vitu2_query_pane

0x6173,	// (0x0006c943) input_focus_pane_cp08

0x420c,	// (0x0006a9dc) area_vitu2_query_pane_g1

0x6274,	// (0x0006ca44) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00076259) area_vitu2_query_pane_g

0xcdd7,	// (0x000735a7) area_vitu2_query_pane_t1_ParamLimits

0xcdd7,	// (0x000735a7) area_vitu2_query_pane_t1

0xcdeb,	// (0x000735bb) area_vitu2_query_pane_t2_ParamLimits

0xcdeb,	// (0x000735bb) area_vitu2_query_pane_t2

0x6285,	// (0x0006ca55) area_vitu2_query_pane_t3_ParamLimits

0x6285,	// (0x0006ca55) area_vitu2_query_pane_t3

0x62ad,	// (0x0006ca7d) area_vitu2_query_pane_t4_ParamLimits

0x62ad,	// (0x0006ca7d) area_vitu2_query_pane_t4

0x62d5,	// (0x0006caa5) area_vitu2_query_pane_t5_ParamLimits

0x62d5,	// (0x0006caa5) area_vitu2_query_pane_t5

0x62fd,	// (0x0006cacd) area_vitu2_query_pane_t6_ParamLimits

0x62fd,	// (0x0006cacd) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0007625e) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0007625e) area_vitu2_query_pane_t

0xcdff,	// (0x000735cf) bg_button_pane_cp018

0xce0d,	// (0x000735dd) bg_button_pane_cp021

0x6349,	// (0x0006cb19) bg_button_pane_cp022

0x635a,	// (0x0006cb2a) input_focus_pane_cp09

0x928b,	// (0x0006fa5b) aid_size_touch_mv_arrow_left

0x92b6,	// (0x0006fa86) aid_size_touch_mv_arrow_right

0xc790,	// (0x00072f60) main_cset_slider_pane_g16_ParamLimits

0xc790,	// (0x00072f60) main_cset_slider_pane_g16

0xc79c,	// (0x00072f6c) main_cset_slider_pane_g17_ParamLimits

0xc79c,	// (0x00072f6c) main_cset_slider_pane_g17

0xcd7a,	// (0x0007354a) cell_cam4_burst_pane_g1_ParamLimits

0x6e53,	// (0x0006d623) compa_mode_pane

0xc996,	// (0x00073166) popup_vtel_slider_window_g3_ParamLimits

0xc996,	// (0x00073166) popup_vtel_slider_window_g3

0xc9aa,	// (0x0007317a) popup_vtel_slider_window_g4_ParamLimits

0xc9aa,	// (0x0007317a) popup_vtel_slider_window_g4

0xc9be,	// (0x0007318e) popup_vtel_slider_window_t1_ParamLimits

0xc9be,	// (0x0007318e) popup_vtel_slider_window_t1

0x6e53,	// (0x0006d623) main_cl_pane

0x1e2f,	// (0x000685ff) popup_imed_adjust2_window_ParamLimits

0x1e03,	// (0x000685d3) bg_tb_trans_pane_cp05_ParamLimits

0x281f,	// (0x00068fef) popup_imed_adjust2_window_g1_ParamLimits

0x282e,	// (0x00068ffe) popup_imed_adjust2_window_g2_ParamLimits

0x282e,	// (0x00068ffe) popup_imed_adjust2_window_g2

0x283a,	// (0x0006900a) popup_imed_adjust2_window_g3_ParamLimits

0x283a,	// (0x0006900a) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00075fc9) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00075fc9) popup_imed_adjust2_window_g

0x2846,	// (0x00069016) popup_imed_adjust2_window_t1_ParamLimits

0x285e,	// (0x0006902e) slider_imed_adjust_pane_ParamLimits

0x2872,	// (0x00069042) slider_imed_adjust_pane_g1_ParamLimits

0x2882,	// (0x00069052) slider_imed_adjust_pane_g2_ParamLimits

0x2892,	// (0x00069062) slider_imed_adjust_pane_g3_ParamLimits

0x28a3,	// (0x00069073) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00075fd0) slider_imed_adjust_pane_g_ParamLimits

0xbf2a,	// (0x000726fa) aid_touch_area_cam4_ParamLimits

0xbf2a,	// (0x000726fa) aid_touch_area_cam4

0xbf3a,	// (0x0007270a) battery_pane_cp01

0xbfc1,	// (0x00072791) main_camera4_pane_g6_ParamLimits

0xbfc1,	// (0x00072791) main_camera4_pane_g6

0xbfdf,	// (0x000727af) main_camera4_pane_t2_ParamLimits

0xbfdf,	// (0x000727af) main_camera4_pane_t2

0x0001,

0xf903,	// (0x000760d3) main_camera4_pane_t_ParamLimits

0xf903,	// (0x000760d3) main_camera4_pane_t

0xc063,	// (0x00072833) aid_touch_area_vid4_ParamLimits

0xc063,	// (0x00072833) aid_touch_area_vid4

0xc0a3,	// (0x00072873) main_video4_pane_g5_ParamLimits

0xc0a3,	// (0x00072873) main_video4_pane_g5

0xc0c7,	// (0x00072897) vid4_progress_pane_ParamLimits

0xc0c7,	// (0x00072897) vid4_progress_pane

0x3f04,	// (0x0006a6d4) main_cset_slider_pane_g18_ParamLimits

0x3f04,	// (0x0006a6d4) main_cset_slider_pane_g18

0x40ca,	// (0x0006a89a) cell_cam4_burst_pane_g2_ParamLimits

0x40ca,	// (0x0006a89a) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00076232) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00076232) cell_cam4_burst_pane_g

0xce19,	// (0x000735e9) bg_cl_pane_ParamLimits

0xce19,	// (0x000735e9) bg_cl_pane

0xce25,	// (0x000735f5) cl_header_pane_ParamLimits

0xce25,	// (0x000735f5) cl_header_pane

0xce31,	// (0x00073601) cl_listscroll_pane_ParamLimits

0xce31,	// (0x00073601) cl_listscroll_pane

0x4218,	// (0x0006a9e8) bg_cl_pane_g1

0x4220,	// (0x0006a9f0) bg_cl_pane_g2

0x4228,	// (0x0006a9f8) bg_cl_pane_g3

0x4230,	// (0x0006aa00) bg_cl_pane_g4

0x4238,	// (0x0006aa08) bg_cl_pane_g5

0x4240,	// (0x0006aa10) bg_cl_pane_g6

0x4248,	// (0x0006aa18) bg_cl_pane_g7

0x4250,	// (0x0006aa20) bg_cl_pane_g8

0x4258,	// (0x0006aa28) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0007626d) bg_cl_pane_g

0xce3d,	// (0x0007360d) aid_height_cl_leading_ParamLimits

0xce3d,	// (0x0007360d) aid_height_cl_leading

0xce49,	// (0x00073619) aid_height_cl_text_ParamLimits

0xce49,	// (0x00073619) aid_height_cl_text

0x7100,	// (0x0006d8d0) bg_cl_header_pane_ParamLimits

0x7100,	// (0x0006d8d0) bg_cl_header_pane

0xce61,	// (0x00073631) cl_header_pane_g1_ParamLimits

0xce61,	// (0x00073631) cl_header_pane_g1

0xce6e,	// (0x0007363e) cl_header_pane_t1_ParamLimits

0xce6e,	// (0x0007363e) cl_header_pane_t1

0x4260,	// (0x0006aa30) cl_list_pane

0x3ed7,	// (0x0006a6a7) hc_scroll_pane_cp01

0x0291,	// (0x00066a61) bg_cl_header_pane_g1

0x3ce6,	// (0x0006a4b6) bg_cl_header_pane_g2

0x02b1,	// (0x00066a81) bg_cl_header_pane_g3

0x3cf6,	// (0x0006a4c6) bg_cl_header_pane_g4

0x3cee,	// (0x0006a4be) bg_cl_header_pane_g5

0x3fe3,	// (0x0006a7b3) bg_cl_header_pane_g6

0x3d0e,	// (0x0006a4de) bg_cl_header_pane_g7

0x3d16,	// (0x0006a4e6) bg_cl_header_pane_g8

0x3d06,	// (0x0006a4d6) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00076280) bg_cl_header_pane_g

0xce80,	// (0x00073650) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xce80,	// (0x00073650) hc_cl_list_double_graphic_heading_pane

0xce90,	// (0x00073660) hc_cl_list_single_graphic_pane_ParamLimits

0xce90,	// (0x00073660) hc_cl_list_single_graphic_pane

0xcea2,	// (0x00073672) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcea2,	// (0x00073672) hc_cl_list_single_graphic_pane_g1

0xceae,	// (0x0007367e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xceae,	// (0x0007367e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00076293) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00076293) hc_cl_list_single_graphic_pane_g

0xcec2,	// (0x00073692) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcec2,	// (0x00073692) hc_cl_list_single_graphic_pane_t1

0xcea2,	// (0x00073672) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcea2,	// (0x00073672) hc_cl_list_double_graphic_heading_pane_g1

0xced7,	// (0x000736a7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xced7,	// (0x000736a7) hc_cl_list_double_graphic_heading_pane_g2

0xceeb,	// (0x000736bb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xceeb,	// (0x000736bb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00076298) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00076298) hc_cl_list_double_graphic_heading_pane_g

0xceff,	// (0x000736cf) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xceff,	// (0x000736cf) hc_cl_list_double_graphic_heading_pane_t1

0xcf14,	// (0x000736e4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcf14,	// (0x000736e4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0007629f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0007629f) hc_cl_list_double_graphic_heading_pane_t

0xcf3b,	// (0x0007370b) vid4_progress_pane_g1

0xcf4c,	// (0x0007371c) vid4_progress_pane_g2

0x9923,	// (0x000700f3) vid4_progress_pane_g3

0xc02f,	// (0x000727ff) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x000762a4) vid4_progress_pane_g

0xcf5e,	// (0x0007372e) vid4_progress_pane_t1

0xcf73,	// (0x00073743) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x000762af) vid4_progress_pane_t

0xcfa2,	// (0x00073772) wait_bar_pane_cp07

0x2125,	// (0x000688f5) blid_firmament_pane_ParamLimits

0x2168,	// (0x00068938) popup_blid_sat_info2_window_g1

0x218c,	// (0x0006895c) popup_blid_sat_info2_window_t3

0x219a,	// (0x0006896a) popup_blid_sat_info2_window_t4

0x21a8,	// (0x00068978) popup_blid_sat_info2_window_t5

0x21b6,	// (0x00068986) popup_blid_sat_info2_window_t6

0x21c6,	// (0x00068996) popup_blid_sat_info2_window_t7

0x21d4,	// (0x000689a4) popup_blid_sat_info2_window_t8

0x21e2,	// (0x000689b2) popup_blid_sat_info2_window_t9

0x21f0,	// (0x000689c0) popup_blid_sat_info2_window_t10

0x22b8,	// (0x00068a88) aid_firma_cardinal_ParamLimits

0x22cc,	// (0x00068a9c) blid_firmament_pane_t1_ParamLimits

0x22e3,	// (0x00068ab3) blid_firmament_pane_t2_ParamLimits

0x22fa,	// (0x00068aca) blid_firmament_pane_t3_ParamLimits

0x2311,	// (0x00068ae1) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00075ec2) blid_firmament_pane_t_ParamLimits

0x2328,	// (0x00068af8) blid_sat_info_pane_ParamLimits

0xa05d,	// (0x0007082d) main_cam_set_pane_ParamLimits

0xb549,	// (0x00071d19) aid_size_cell_colour_35_ParamLimits

0xb563,	// (0x00071d33) aid_size_cell_colour_112_ParamLimits

0xb57a,	// (0x00071d4a) aid_size_cell_effect_ParamLimits

0xa05d,	// (0x0007082d) bg_tb_trans_pane_cp02_ParamLimits

0x052e,	// (0x00066cfe) heading_imed_pane_ParamLimits

0xb594,	// (0x00071d64) listscroll_imed_pane_ParamLimits

0x1431,	// (0x00067c01) popup_call2_audio_first_window_g5_ParamLimits

0x1431,	// (0x00067c01) popup_call2_audio_first_window_g5

0xbca3,	// (0x00072473) aid_size_touch_image3_arrow_left_ParamLimits

0xbca3,	// (0x00072473) aid_size_touch_image3_arrow_left

0xbcb9,	// (0x00072489) aid_size_touch_image3_arrow_right_ParamLimits

0xbcb9,	// (0x00072489) aid_size_touch_image3_arrow_right

0xcf8b,	// (0x0007375b) vid4_progress_pane_t3

0xb83f,	// (0x0007200f) main_hwr_training_symbol_option_pane_ParamLimits

0xb83f,	// (0x0007200f) main_hwr_training_symbol_option_pane

0x2b0e,	// (0x000692de) popup_hwr_training_preview_window_ParamLimits

0x2b0e,	// (0x000692de) popup_hwr_training_preview_window

0xb8a0,	// (0x00072070) hwr_training_navi_pane_g5_ParamLimits

0xb8a0,	// (0x00072070) hwr_training_navi_pane_g5

0x3cc6,	// (0x0006a496) popup_char_count_window

0x7100,	// (0x0006d8d0) bg_popup_sub_pane_cp20_ParamLimits

0xcab4,	// (0x00073284) list_vitu2_match_list_pane_ParamLimits

0xcac0,	// (0x00073290) vitu2_page_scroll_pane_ParamLimits

0xcac0,	// (0x00073290) vitu2_page_scroll_pane

0x4269,	// (0x0006aa39) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4269,	// (0x0006aa39) list_single_hwr_training_symbol_option_pane

0x427c,	// (0x0006aa4c) list_single_hwr_training_symbol_option_pane_g1

0x4284,	// (0x0006aa54) list_single_hwr_training_symbol_option_pane_t1

0x4292,	// (0x0006aa62) bg_button_pane_cp023

0x429b,	// (0x0006aa6b) bg_button_pane_cp024

0xcfbc,	// (0x0007378c) vitu2_page_scroll_pane_g1

0xcfc4,	// (0x00073794) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x000762b6) vitu2_page_scroll_pane_g

0xcfce,	// (0x0007379e) vitu2_page_scroll_pane_t1

0x2041,	// (0x00068811) popup_char_count_window_g1

0x42ce,	// (0x0006aa9e) popup_char_count_window_g2

0x42d7,	// (0x0006aaa7) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x000762bb) popup_char_count_window_g

0x42e0,	// (0x0006aab0) popup_char_count_window_t1

0x6e53,	// (0x0006d623) main_vded2_pane

0x280b,	// (0x00068fdb) aid_size_cell_imed_line

0x2815,	// (0x00068fe5) grid_imed_line_width_pane

0xc135,	// (0x00072905) vid4_indicators_pane_g4

0x42ee,	// (0x0006aabe) cell_imed_line_width_pane_ParamLimits

0x42ee,	// (0x0006aabe) cell_imed_line_width_pane

0x4304,	// (0x0006aad4) cell_imed_line_width_pane_g1

0x20d3,	// (0x000688a3) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x000762c2) cell_imed_line_width_pane_g

0xcfdd,	// (0x000737ad) main_vded2_pane_g1_ParamLimits

0xcfdd,	// (0x000737ad) main_vded2_pane_g1

0xcfec,	// (0x000737bc) main_vded2_pane_g2_ParamLimits

0xcfec,	// (0x000737bc) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x000762c7) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x000762c7) main_vded2_pane_g

0xcffa,	// (0x000737ca) vded2_slider_pane_ParamLimits

0xcffa,	// (0x000737ca) vded2_slider_pane

0xd007,	// (0x000737d7) aid_size_touch_vded2_end

0xd011,	// (0x000737e1) aid_size_touch_vded2_playhead

0x430d,	// (0x0006aadd) aid_size_touch_vded2_start

0x4315,	// (0x0006aae5) vded2_slider_bg_pane

0x431e,	// (0x0006aaee) vded2_slider_pane_g1

0x4327,	// (0x0006aaf7) vded2_slider_pane_g2

0xd019,	// (0x000737e9) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x000762cc) vded2_slider_pane_g

0x3dde,	// (0x0006a5ae) vded2_slider_bg_pane_g1

0x3de7,	// (0x0006a5b7) vded2_slider_bg_pane_g2

0x3df0,	// (0x0006a5c0) vded2_slider_bg_pane_g3

0x0002,

0xf7c2,	// (0x00075f92) vded2_slider_bg_pane_g

0x993b,	// (0x0007010b) aid_postcard_touch_down_pane_ParamLimits

0x993b,	// (0x0007010b) aid_postcard_touch_down_pane

0x994b,	// (0x0007011b) aid_postcard_touch_up_pane_ParamLimits

0x994b,	// (0x0007011b) aid_postcard_touch_up_pane

0x6e53,	// (0x0006d623) main_blid2_pane

0x1e11,	// (0x000685e1) popup_blid2_search_window

0x6e53,	// (0x0006d623) blid2_gps_pane

0x6e53,	// (0x0006d623) blid2_navig_pane

0x6e53,	// (0x0006d623) blid2_search_pane

0x6e53,	// (0x0006d623) blid2_tripm_pane

0xd022,	// (0x000737f2) blid2_search_pane_g1_ParamLimits

0xd022,	// (0x000737f2) blid2_search_pane_g1

0xd02e,	// (0x000737fe) blid2_search_pane_t1_ParamLimits

0xd02e,	// (0x000737fe) blid2_search_pane_t1

0xd040,	// (0x00073810) aid_size_cell_blid2_gps_ParamLimits

0xd040,	// (0x00073810) aid_size_cell_blid2_gps

0xd050,	// (0x00073820) blid2_gps_pane_g1_ParamLimits

0xd050,	// (0x00073820) blid2_gps_pane_g1

0xd05c,	// (0x0007382c) grid_blid2_satellite_pane_ParamLimits

0xd05c,	// (0x0007382c) grid_blid2_satellite_pane

0xd06a,	// (0x0007383a) blid2_navig_pane_g1_ParamLimits

0xd06a,	// (0x0007383a) blid2_navig_pane_g1

0xd076,	// (0x00073846) blid2_navig_pane_t1_ParamLimits

0xd076,	// (0x00073846) blid2_navig_pane_t1

0xd088,	// (0x00073858) blid2_navig_pane_t2_ParamLimits

0xd088,	// (0x00073858) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000762d3) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000762d3) blid2_navig_pane_t

0xd09a,	// (0x0007386a) blid2_navig_ring_pane_ParamLimits

0xd09a,	// (0x0007386a) blid2_navig_ring_pane

0xd0aa,	// (0x0007387a) blid2_speed_pane_ParamLimits

0xd0aa,	// (0x0007387a) blid2_speed_pane

0xd0b6,	// (0x00073886) blid2_tripm_pane_g1_ParamLimits

0xd0b6,	// (0x00073886) blid2_tripm_pane_g1

0xd0c6,	// (0x00073896) blid2_tripm_pane_g2_ParamLimits

0xd0c6,	// (0x00073896) blid2_tripm_pane_g2

0xd0d2,	// (0x000738a2) blid2_tripm_pane_g3_ParamLimits

0xd0d2,	// (0x000738a2) blid2_tripm_pane_g3

0xd0de,	// (0x000738ae) blid2_tripm_pane_g4_ParamLimits

0xd0de,	// (0x000738ae) blid2_tripm_pane_g4

0xd0ea,	// (0x000738ba) blid2_tripm_pane_g5_ParamLimits

0xd0ea,	// (0x000738ba) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000762d8) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000762d8) blid2_tripm_pane_g

0xd106,	// (0x000738d6) blid2_tripm_pane_t1_ParamLimits

0xd106,	// (0x000738d6) blid2_tripm_pane_t1

0xd118,	// (0x000738e8) blid2_tripm_pane_t2_ParamLimits

0xd118,	// (0x000738e8) blid2_tripm_pane_t2

0xd12a,	// (0x000738fa) blid2_tripm_pane_t3_ParamLimits

0xd12a,	// (0x000738fa) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x000762e5) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x000762e5) blid2_tripm_pane_t

0xd15c,	// (0x0007392c) cell_blid2_satellite_pane_ParamLimits

0xd15c,	// (0x0007392c) cell_blid2_satellite_pane

0xd17a,	// (0x0007394a) cell_blid2_satellite_pane_g1

0x432f,	// (0x0006aaff) cell_blid2_satellite_pane_t1

0x2338,	// (0x00068b08) blid2_speed_pane_g1

0x433d,	// (0x0006ab0d) blid2_speed_pane_t1

0x434b,	// (0x0006ab1b) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x000762ee) blid2_speed_pane_t

0x2338,	// (0x00068b08) blid2_navig_ring_pane_g1

0xd183,	// (0x00073953) blid2_navig_ring_pane_g2

0xd18b,	// (0x0007395b) blid2_navig_ring_pane_g3

0xd193,	// (0x00073963) blid2_navig_ring_pane_g4

0xd19b,	// (0x0007396b) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000762f3) blid2_navig_ring_pane_g

0x6e53,	// (0x0006d623) bg_popup_window_pane_cp011

0x4359,	// (0x0006ab29) popup_blid2_search_window_g1

0x4361,	// (0x0006ab31) popup_blid2_search_window_t1

0x436f,	// (0x0006ab3f) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000762fe) popup_blid2_search_window_t

0x01a0,	// (0x00066970) main_browser_pane_g1

0xef3a,	// (0x0007570a) main_browser_pane_ParamLimits

0xa05d,	// (0x0007082d) bg_button_pane_cp011_ParamLimits

0xc3a3,	// (0x00072b73) cell_vitu2_function_pane_g1_ParamLimits

0x1e03,	// (0x000685d3) bg_popup_sub_pane_cp22_ParamLimits

0x6173,	// (0x0006c943) input_focus_pane_cp08_ParamLimits

0xcc18,	// (0x000733e8) popup_vitu2_query_button_pane_ParamLimits

0xcc18,	// (0x000733e8) popup_vitu2_query_button_pane

0x618a,	// (0x0006c95a) popup_vitu2_query_input_button_pane

0x4020,	// (0x0006a7f0) popup_vitu2_query_window_g1_ParamLimits

0x6194,	// (0x0006c964) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00076206) popup_vitu2_query_window_g_ParamLimits

0x6e53,	// (0x0006d623) bg_button_pane_cp026

0xd1a3,	// (0x00073973) popup_vitu2_query_input_button_pane_g1

0x6e53,	// (0x0006d623) bg_button_pane_cp025

0x437d,	// (0x0006ab4d) popup_vitu2_query_button_pane_t1

0xaab3,	// (0x00071283) main_mp3_pane_t6

0xaac3,	// (0x00071293) popup_slider_window_cp01

0xc017,	// (0x000727e7) cam4_battery_pane

0xc0f5,	// (0x000728c5) cam4_battery_pane_cp02

0xcf29,	// (0x000736f9) cam4_battery_pane_cp01

0xcf33,	// (0x00073703) cam4_battery_pane_cp03

0x2338,	// (0x00068b08) cam4_battery_pane_g1

0x3aca,	// (0x0006a29a) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00076303) cam4_battery_pane_g

0x21fe,	// (0x000689ce) popup_blid_sat_info2_window_t11

0x928b,	// (0x0006fa5b) aid_size_touch_mv_arrow_left_ParamLimits

0x92b6,	// (0x0006fa86) aid_size_touch_mv_arrow_right_ParamLimits

0x08f6,	// (0x000670c6) navi_pane_g1_ParamLimits

0x92f5,	// (0x0006fac5) navi_pane_g2_ParamLimits

0x9323,	// (0x0006faf3) navi_pane_g3_ParamLimits

0xf404,	// (0x00075bd4) navi_pane_g_ParamLimits

0x937d,	// (0x0006fb4d) navi_pane_mv_t1_ParamLimits

0xb5a0,	// (0x00071d70) grid_imed_effect_pane_ParamLimits

0x8038,	// (0x0006e808) aid_placing_vt_slider_lsc

0x00eb,	// (0x000668bb) aid_placing_vt_slider_prt

0xa05d,	// (0x0007082d) bg_tb_trans_pane_cp01_ParamLimits

0x2488,	// (0x00068c58) popup_image_details_window_g1_ParamLimits

0x249b,	// (0x00068c6b) popup_image_details_window_g2_ParamLimits

0x24b0,	// (0x00068c80) popup_image_details_window_g3_ParamLimits

0x24b0,	// (0x00068c80) popup_image_details_window_g3

0xf737,	// (0x00075f07) popup_image_details_window_g_ParamLimits

0x24c4,	// (0x00068c94) popup_image_details_window_t1_ParamLimits

0x24d6,	// (0x00068ca6) popup_image_details_window_t2_ParamLimits

0x24ef,	// (0x00068cbf) popup_image_details_window_t3_ParamLimits

0x2503,	// (0x00068cd3) popup_image_details_window_t4_ParamLimits

0x251e,	// (0x00068cee) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00075f0e) popup_image_details_window_t_ParamLimits

0xce55,	// (0x00073625) cl_header_name_pane_ParamLimits

0xce55,	// (0x00073625) cl_header_name_pane

0xd1ab,	// (0x0007397b) cl_header_name_pane_t1_ParamLimits

0xd1ab,	// (0x0007397b) cl_header_name_pane_t1

0xd1c2,	// (0x00073992) cl_header_name_pane_t2_ParamLimits

0xd1c2,	// (0x00073992) cl_header_name_pane_t2

0xd1ec,	// (0x000739bc) cl_header_name_pane_t3_ParamLimits

0xd1ec,	// (0x000739bc) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00076308) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00076308) cl_header_name_pane_t

0x934e,	// (0x0006fb1e) navi_pane_mv_g2_ParamLimits

0x3ca0,	// (0x0006a470) field_vitu2_entry_pane_g1_ParamLimits

0x3cac,	// (0x0006a47c) field_vitu2_entry_pane_g2_ParamLimits

0x3cb8,	// (0x0006a488) field_vitu2_entry_pane_g3_ParamLimits

0x3cb8,	// (0x0006a488) field_vitu2_entry_pane_g3

0xf935,	// (0x00076105) field_vitu2_entry_pane_g_ParamLimits

0xc333,	// (0x00072b03) cell_vitu2_itu_pane_g1_ParamLimits

0xc343,	// (0x00072b13) cell_vitu2_itu_pane_g2_ParamLimits

0xc343,	// (0x00072b13) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00076111) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00076111) cell_vitu2_itu_pane_g

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp05_ParamLimits

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp05

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp03

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp04

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp10_ParamLimits

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp10

0x6349,	// (0x0006cb19) bg_vkb2_func_pane_cp08

0xcdff,	// (0x000735cf) bg_vkb2_func_pane_cp06

0xce0d,	// (0x000735dd) bg_vkb2_func_pane_cp07

0x42a4,	// (0x0006aa74) bg_vkb2_func_pane_cp11_ParamLimits

0x42a4,	// (0x0006aa74) bg_vkb2_func_pane_cp11

0x42b9,	// (0x0006aa89) bg_vkb2_func_pane_cp12_ParamLimits

0x42b9,	// (0x0006aa89) bg_vkb2_func_pane_cp12

0x6e53,	// (0x0006d623) bg_vkb2_func_pane_cp09

0x3ce6,	// (0x0006a4b6) bg_vkb2_func_pane_g1

0x02b1,	// (0x00066a81) bg_vkb2_func_pane_g2

0x3cee,	// (0x0006a4be) bg_vkb2_func_pane_g3

0x3cf6,	// (0x0006a4c6) bg_vkb2_func_pane_g4

0x3fe3,	// (0x0006a7b3) bg_vkb2_func_pane_g5

0x3d0e,	// (0x0006a4de) bg_vkb2_func_pane_g6

0x3d16,	// (0x0006a4e6) bg_vkb2_func_pane_g7

0x3d06,	// (0x0006a4d6) bg_vkb2_func_pane_g8

0x0291,	// (0x00066a61) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0007630f) bg_vkb2_func_pane_g

0xd0f8,	// (0x000738c8) blid2_tripm_pane_g6_ParamLimits

0xd0f8,	// (0x000738c8) blid2_tripm_pane_g6

0x3a84,	// (0x0006a254) mp4_progress_pane_g1

0xd150,	// (0x00073920) blid2_tripm_values_pane_ParamLimits

0xd150,	// (0x00073920) blid2_tripm_values_pane

0xd211,	// (0x000739e1) blid2_tripm_values_pane_t1

0xd21f,	// (0x000739ef) blid2_tripm_values_pane_t2

0xd22d,	// (0x000739fd) blid2_tripm_values_pane_t3

0xd23b,	// (0x00073a0b) blid2_tripm_values_pane_t4

0xd249,	// (0x00073a19) blid2_tripm_values_pane_t5

0xd257,	// (0x00073a27) blid2_tripm_values_pane_t6

0xd265,	// (0x00073a35) blid2_tripm_values_pane_t7

0xd273,	// (0x00073a43) blid2_tripm_values_pane_t8

0xd281,	// (0x00073a51) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00076322) blid2_tripm_values_pane_t

0x8076,	// (0x0006e846) call_video_pane_t1_ParamLimits

0x8093,	// (0x0006e863) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00075a5d) call_video_pane_t_ParamLimits

0x5f31,	// (0x0006c701) msg_header_pane_g1_ParamLimits

0x0b33,	// (0x00067303) msg_header_pane_g2_ParamLimits

0x0b33,	// (0x00067303) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x00075c77) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x00075c77) msg_header_pane_g

0xef3a,	// (0x0007570a) main_clock2_pane_ParamLimits

0xb323,	// (0x00071af3) grid_clock2_toolbar_pane_ParamLimits

0xb323,	// (0x00071af3) grid_clock2_toolbar_pane

0xb323,	// (0x00071af3) listscroll_clock2_pane_ParamLimits

0xb323,	// (0x00071af3) listscroll_clock2_pane

0xb3d7,	// (0x00071ba7) main_clock2_pane_t3_ParamLimits

0xb3d7,	// (0x00071ba7) main_clock2_pane_t3

0xb3e9,	// (0x00071bb9) main_clock2_pane_t4_ParamLimits

0xb3e9,	// (0x00071bb9) main_clock2_pane_t4

0x438b,	// (0x0006ab5b) cell_clock2_toolbar_pane

0x4393,	// (0x0006ab63) cell_clock2_toolbar_pane_cp01

0x4393,	// (0x0006ab63) cell_clock2_toolbar_pane_cp02

0x439b,	// (0x0006ab6b) cell_clock2_toolbar_pane_cp03

0x43a3,	// (0x0006ab73) list_clock2_pane

0x085c,	// (0x0006702c) scroll_pane_cp10

0x43ab,	// (0x0006ab7b) list_single_clock2_pane_ParamLimits

0x43ab,	// (0x0006ab7b) list_single_clock2_pane

0x0996,	// (0x00067166) list_highlight_pane_cp08

0x43b8,	// (0x0006ab88) list_single_clock2_pane_t1

0x43c6,	// (0x0006ab96) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00076335) list_single_clock2_pane_t

0x6e53,	// (0x0006d623) bg_button_pane_cp10

0x43d4,	// (0x0006aba4) cell_clock2_toolbar_pane_g1

0x989d,	// (0x0007006d) aid_main_viewer_pane_g1_ParamLimits

0x989d,	// (0x0007006d) aid_main_viewer_pane_g1

0x98a9,	// (0x00070079) aid_main_viewer_pane_g2_ParamLimits

0x98a9,	// (0x00070079) aid_main_viewer_pane_g2

0x98b5,	// (0x00070085) aid_main_viewer_pane_g3_ParamLimits

0x98b5,	// (0x00070085) aid_main_viewer_pane_g3

0x98c6,	// (0x00070096) aid_main_viewer_pane_g4_ParamLimits

0x98c6,	// (0x00070096) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00075c88) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00075c88) aid_main_viewer_pane_g

0xa050,	// (0x00070820) main_calc_pane_ParamLimits

0xa06b,	// (0x0007083b) main_dialer2_pane_ParamLimits

0x6e53,	// (0x0006d623) main_cam6_pane

0x6e53,	// (0x0006d623) main_vid6_pane

0xb32f,	// (0x00071aff) listscroll_gen_pane_cp06_ParamLimits

0xb32f,	// (0x00071aff) listscroll_gen_pane_cp06

0xb3fb,	// (0x00071bcb) main_clock2_pane_t5_ParamLimits

0xb3fb,	// (0x00071bcb) main_clock2_pane_t5

0xb44a,	// (0x00071c1a) aid_call2_pane_cp10_ParamLimits

0xb45c,	// (0x00071c2c) aid_call_pane_cp10_ParamLimits

0x08cb,	// (0x0006709b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x08cb,	// (0x0006709b) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb46e,	// (0x00071c3e) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb46e,	// (0x00071c3e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x08cb,	// (0x0006709b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00075fbe) popup_clock_analogue_window_cp10_g_ParamLimits

0xb480,	// (0x00071c50) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbc50,	// (0x00072420) cell_dialer2_keypad_pane_g2_ParamLimits

0xbc50,	// (0x00072420) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x000760a4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x000760a4) cell_dialer2_keypad_pane_g

0xbc6c,	// (0x0007243c) cell_dialer2_keypad_pane_t1

0xc67e,	// (0x00072e4e) main_cset_text2_pane_ParamLimits

0xc67e,	// (0x00072e4e) main_cset_text2_pane

0x420c,	// (0x0006a9dc) area_vitu2_query_pane_g1_ParamLimits

0x6274,	// (0x0006ca44) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00076259) area_vitu2_query_pane_g_ParamLimits

0x6325,	// (0x0006caf5) area_vitu2_query_pane_t7_ParamLimits

0x6325,	// (0x0006caf5) area_vitu2_query_pane_t7

0xcdff,	// (0x000735cf) bg_button_pane_cp018_ParamLimits

0xce0d,	// (0x000735dd) bg_button_pane_cp021_ParamLimits

0x6349,	// (0x0006cb19) bg_button_pane_cp022_ParamLimits

0x6349,	// (0x0006cb19) bg_vkb2_func_pane_cp08_ParamLimits

0xcdff,	// (0x000735cf) bg_vkb2_func_pane_cp06_ParamLimits

0xce0d,	// (0x000735dd) bg_vkb2_func_pane_cp07_ParamLimits

0x635a,	// (0x0006cb2a) input_focus_pane_cp09_ParamLimits

0xd28f,	// (0x00073a5f) cam6_autofocus_pane_ParamLimits

0xd28f,	// (0x00073a5f) cam6_autofocus_pane

0xd2b1,	// (0x00073a81) cam6_image_uncrop_pane_ParamLimits

0xd2b1,	// (0x00073a81) cam6_image_uncrop_pane

0xd2de,	// (0x00073aae) cam6_indi_pane_ParamLimits

0xd2de,	// (0x00073aae) cam6_indi_pane

0xd2f8,	// (0x00073ac8) cam6_mode_pane_ParamLimits

0xd2f8,	// (0x00073ac8) cam6_mode_pane

0xd30c,	// (0x00073adc) cam6_timer_pane_ParamLimits

0xd30c,	// (0x00073adc) cam6_timer_pane

0xd318,	// (0x00073ae8) cam6_zoom_pane_ParamLimits

0xd318,	// (0x00073ae8) cam6_zoom_pane

0xc073,	// (0x00072843) cam6_mode_pane_g1_ParamLimits

0xc073,	// (0x00072843) cam6_mode_pane_g1

0xc08b,	// (0x0007285b) cam6_mode_pane_g2_ParamLimits

0xc08b,	// (0x0007285b) cam6_mode_pane_g2

0xc097,	// (0x00072867) cam6_mode_pane_g3_ParamLimits

0xc097,	// (0x00072867) cam6_mode_pane_g3

0xc0a3,	// (0x00072873) cam6_mode_pane_g4_ParamLimits

0xc0a3,	// (0x00072873) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0007633a) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0007633a) cam6_mode_pane_g

0x3e07,	// (0x0006a5d7) bg_tb_trans_pane_cp08_ParamLimits

0x3e07,	// (0x0006a5d7) bg_tb_trans_pane_cp08

0x43dc,	// (0x0006abac) cam6_battery_pane_ParamLimits

0x43dc,	// (0x0006abac) cam6_battery_pane

0x43fe,	// (0x0006abce) cam6_indi_pane_g1_ParamLimits

0x43fe,	// (0x0006abce) cam6_indi_pane_g1

0x4410,	// (0x0006abe0) cam6_indi_pane_g2_ParamLimits

0x4410,	// (0x0006abe0) cam6_indi_pane_g2

0x4422,	// (0x0006abf2) cam6_indi_pane_g3_ParamLimits

0x4422,	// (0x0006abf2) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00076343) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00076343) cam6_indi_pane_g

0x4434,	// (0x0006ac04) cam6_indi_pane_t1_ParamLimits

0x4434,	// (0x0006ac04) cam6_indi_pane_t1

0xc16c,	// (0x0007293c) cam6_autofocus_pane_g1

0xc174,	// (0x00072944) cam6_autofocus_pane_g2

0xc17c,	// (0x0007294c) cam6_autofocus_pane_g3

0xc184,	// (0x00072954) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0007634a) cam6_autofocus_pane_g

0x445a,	// (0x0006ac2a) cam6_timer_pane_g1

0x4462,	// (0x0006ac32) cam6_timer_pane_t1

0x4470,	// (0x0006ac40) cam6_zoom_cont_pane

0x4478,	// (0x0006ac48) cam6_zoom_pane_g1

0x4480,	// (0x0006ac50) cam6_zoom_pane_g2

0xd334,	// (0x00073b04) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00076353) cam6_zoom_pane_g

0x2338,	// (0x00068b08) cam6_battery_pane_g1

0x2338,	// (0x00068b08) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00075ecb) cam6_battery_pane_g

0x4488,	// (0x0006ac58) cam6_zoom_cont_pane_g1

0x4491,	// (0x0006ac61) cam6_zoom_cont_pane_g2

0x449a,	// (0x0006ac6a) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0007635a) cam6_zoom_cont_pane_g

0xd351,	// (0x00073b21) cam6_mode_pane_cp_ParamLimits

0xd351,	// (0x00073b21) cam6_mode_pane_cp

0xd318,	// (0x00073ae8) cam6_zoom_pane_cp_ParamLimits

0xd318,	// (0x00073ae8) cam6_zoom_pane_cp

0xd365,	// (0x00073b35) vid6_image_uncrop_cif_pane_ParamLimits

0xd365,	// (0x00073b35) vid6_image_uncrop_cif_pane

0xd391,	// (0x00073b61) vid6_image_uncrop_nhd_pane_ParamLimits

0xd391,	// (0x00073b61) vid6_image_uncrop_nhd_pane

0xd2b1,	// (0x00073a81) vid6_image_uncrop_vga_pane_ParamLimits

0xd2b1,	// (0x00073a81) vid6_image_uncrop_vga_pane

0xd3b0,	// (0x00073b80) vid6_image_uncrop_wvga_pane_ParamLimits

0xd3b0,	// (0x00073b80) vid6_image_uncrop_wvga_pane

0xd3cf,	// (0x00073b9f) vid6_indi_pane_ParamLimits

0xd3cf,	// (0x00073b9f) vid6_indi_pane

0x3e07,	// (0x0006a5d7) bg_tb_trans_pane_cp09_ParamLimits

0x3e07,	// (0x0006a5d7) bg_tb_trans_pane_cp09

0x44b2,	// (0x0006ac82) cam6_battery_pane_cp_ParamLimits

0x44b2,	// (0x0006ac82) cam6_battery_pane_cp

0x44be,	// (0x0006ac8e) vid6_indi_pane_g1_ParamLimits

0x44be,	// (0x0006ac8e) vid6_indi_pane_g1

0x44d0,	// (0x0006aca0) vid6_indi_pane_g2_ParamLimits

0x44d0,	// (0x0006aca0) vid6_indi_pane_g2

0x44e2,	// (0x0006acb2) vid6_indi_pane_g3_ParamLimits

0x44e2,	// (0x0006acb2) vid6_indi_pane_g3

0x44f9,	// (0x0006acc9) vid6_indi_pane_g4_ParamLimits

0x44f9,	// (0x0006acc9) vid6_indi_pane_g4

0x4510,	// (0x0006ace0) vid6_indi_pane_g5_ParamLimits

0x4510,	// (0x0006ace0) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00076361) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00076361) vid6_indi_pane_g

0x452a,	// (0x0006acfa) vid6_indi_pane_t1_ParamLimits

0x452a,	// (0x0006acfa) vid6_indi_pane_t1

0x4540,	// (0x0006ad10) vid6_indi_pane_t2_ParamLimits

0x4540,	// (0x0006ad10) vid6_indi_pane_t2

0x4568,	// (0x0006ad38) vid6_indi_pane_t3_ParamLimits

0x4568,	// (0x0006ad38) vid6_indi_pane_t3

0x4590,	// (0x0006ad60) vid6_indi_pane_t4_ParamLimits

0x4590,	// (0x0006ad60) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0007636c) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0007636c) vid6_indi_pane_t

0x45b4,	// (0x0006ad84) wait_bar_pane_cp08

0xd3f4,	// (0x00073bc4) main_cset_text2_pane_t1_ParamLimits

0xd3f4,	// (0x00073bc4) main_cset_text2_pane_t1

0xd33c,	// (0x00073b0c) listscroll_gen_pane_cp06_t1_ParamLimits

0xd33c,	// (0x00073b0c) listscroll_gen_pane_cp06_t1

0x6e53,	// (0x0006d623) main_cam6_set_pane

0x2568,	// (0x00068d38) bg_tb_trans_pane_cp06_ParamLimits

0xc01f,	// (0x000727ef) cam4_indicators_pane_g1_ParamLimits

0xc02f,	// (0x000727ff) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x000760e1) cam4_indicators_pane_g_ParamLimits

0xc047,	// (0x00072817) cam4_indicators_pane_t1_ParamLimits

0xa05d,	// (0x0007082d) bg_tb_trans_pane_cp07_ParamLimits

0xc0ff,	// (0x000728cf) vid4_indicators_pane_g1_ParamLimits

0xc111,	// (0x000728e1) vid4_indicators_pane_g2_ParamLimits

0xc124,	// (0x000728f4) vid4_indicators_pane_g3_ParamLimits

0xc135,	// (0x00072905) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x000760f3) vid4_indicators_pane_g_ParamLimits

0xc151,	// (0x00072921) vid4_indicators_pane_t1_ParamLimits

0xcf3b,	// (0x0007370b) vid4_progress_pane_g1_ParamLimits

0xcf4c,	// (0x0007371c) vid4_progress_pane_g2_ParamLimits

0x9923,	// (0x000700f3) vid4_progress_pane_g3_ParamLimits

0xc02f,	// (0x000727ff) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x000762a4) vid4_progress_pane_g_ParamLimits

0xcf5e,	// (0x0007372e) vid4_progress_pane_t1_ParamLimits

0xcf73,	// (0x00073743) vid4_progress_pane_t2_ParamLimits

0xcf8b,	// (0x0007375b) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x000762af) vid4_progress_pane_t_ParamLimits

0xcfa2,	// (0x00073772) wait_bar_pane_cp07_ParamLimits

0xd41b,	// (0x00073beb) main_cam6_set_pane_g2_ParamLimits

0xd41b,	// (0x00073beb) main_cam6_set_pane_g2

0xd427,	// (0x00073bf7) main_cset6_listscroll_pane_ParamLimits

0xd427,	// (0x00073bf7) main_cset6_listscroll_pane

0xd454,	// (0x00073c24) main_cset6_slider_pane_ParamLimits

0xd454,	// (0x00073c24) main_cset6_slider_pane

0xd460,	// (0x00073c30) main_cset6_text2_pane_ParamLimits

0xd460,	// (0x00073c30) main_cset6_text2_pane

0x45c3,	// (0x0006ad93) main_cset6_text_pane

0x45cb,	// (0x0006ad9b) main_cset_list_pane_copy1_ParamLimits

0x45cb,	// (0x0006ad9b) main_cset_list_pane_copy1

0x45db,	// (0x0006adab) scroll_pane_cp028_copy1

0xd473,	// (0x00073c43) cset_list_set_pane_copy1

0xd483,	// (0x00073c53) aid_position_infowindow_above_copy1

0xd48b,	// (0x00073c5b) aid_position_infowindow_below_copy1

0xd493,	// (0x00073c63) cset_list_set_pane_g1_copy1

0x63ab,	// (0x0006cb7b) cset_list_set_pane_g3_copy1_ParamLimits

0x63ab,	// (0x0006cb7b) cset_list_set_pane_g3_copy1

0x63ba,	// (0x0006cb8a) cset_list_set_pane_t1_copy1_ParamLimits

0x63ba,	// (0x0006cb8a) cset_list_set_pane_t1_copy1

0xa05d,	// (0x0007082d) list_highlight_pane_cp021_copy1_ParamLimits

0xa05d,	// (0x0007082d) list_highlight_pane_cp021_copy1

0x45e4,	// (0x0006adb4) cset6_slider_pane_ParamLimits

0x45e4,	// (0x0006adb4) cset6_slider_pane

0x4610,	// (0x0006ade0) main_cset6_slider_pane_g1_ParamLimits

0x4610,	// (0x0006ade0) main_cset6_slider_pane_g1

0xd49b,	// (0x00073c6b) main_cset6_slider_pane_g2_ParamLimits

0xd49b,	// (0x00073c6b) main_cset6_slider_pane_g2

0x4638,	// (0x0006ae08) main_cset6_slider_pane_g3_ParamLimits

0x4638,	// (0x0006ae08) main_cset6_slider_pane_g3

0xd4c3,	// (0x00073c93) main_cset6_slider_pane_g4_ParamLimits

0xd4c3,	// (0x00073c93) main_cset6_slider_pane_g4

0xd4cf,	// (0x00073c9f) main_cset6_slider_pane_g5_ParamLimits

0xd4cf,	// (0x00073c9f) main_cset6_slider_pane_g5

0x3eec,	// (0x0006a6bc) main_cset6_slider_pane_g7_ParamLimits

0x3eec,	// (0x0006a6bc) main_cset6_slider_pane_g7

0x3ef8,	// (0x0006a6c8) main_cset6_slider_pane_g8_ParamLimits

0x3ef8,	// (0x0006a6c8) main_cset6_slider_pane_g8

0xd4db,	// (0x00073cab) main_cset6_slider_pane_g9_ParamLimits

0xd4db,	// (0x00073cab) main_cset6_slider_pane_g9

0xd4e7,	// (0x00073cb7) main_cset6_slider_pane_g10_ParamLimits

0xd4e7,	// (0x00073cb7) main_cset6_slider_pane_g10

0xd4f3,	// (0x00073cc3) main_cset6_slider_pane_g11_ParamLimits

0xd4f3,	// (0x00073cc3) main_cset6_slider_pane_g11

0xd4ff,	// (0x00073ccf) main_cset6_slider_pane_g12_ParamLimits

0xd4ff,	// (0x00073ccf) main_cset6_slider_pane_g12

0xd50b,	// (0x00073cdb) main_cset6_slider_pane_g13_ParamLimits

0xd50b,	// (0x00073cdb) main_cset6_slider_pane_g13

0xd517,	// (0x00073ce7) main_cset6_slider_pane_g14_ParamLimits

0xd517,	// (0x00073ce7) main_cset6_slider_pane_g14

0xd523,	// (0x00073cf3) main_cset6_slider_pane_g15_ParamLimits

0xd523,	// (0x00073cf3) main_cset6_slider_pane_g15

0xd53b,	// (0x00073d0b) main_cset6_slider_pane_g16_ParamLimits

0xd53b,	// (0x00073d0b) main_cset6_slider_pane_g16

0xd547,	// (0x00073d17) main_cset6_slider_pane_g17_ParamLimits

0xd547,	// (0x00073d17) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00076375) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00076375) main_cset6_slider_pane_g

0x4644,	// (0x0006ae14) main_cset6_slider_pane_t1_ParamLimits

0x4644,	// (0x0006ae14) main_cset6_slider_pane_t1

0xd56b,	// (0x00073d3b) main_cset6_slider_pane_t2_ParamLimits

0xd56b,	// (0x00073d3b) main_cset6_slider_pane_t2

0xd596,	// (0x00073d66) main_cset6_slider_pane_t3_ParamLimits

0xd596,	// (0x00073d66) main_cset6_slider_pane_t3

0xd5c1,	// (0x00073d91) main_cset6_slider_pane_t4_ParamLimits

0xd5c1,	// (0x00073d91) main_cset6_slider_pane_t4

0xd5ec,	// (0x00073dbc) main_cset6_slider_pane_t5_ParamLimits

0xd5ec,	// (0x00073dbc) main_cset6_slider_pane_t5

0x4685,	// (0x0006ae55) main_cset6_slider_pane_t7_ParamLimits

0x4685,	// (0x0006ae55) main_cset6_slider_pane_t7

0xd617,	// (0x00073de7) main_cset6_slider_pane_t8_ParamLimits

0xd617,	// (0x00073de7) main_cset6_slider_pane_t8

0xd63b,	// (0x00073e0b) main_cset6_slider_pane_t9_ParamLimits

0xd63b,	// (0x00073e0b) main_cset6_slider_pane_t9

0xd65f,	// (0x00073e2f) main_cset6_slider_pane_t10_ParamLimits

0xd65f,	// (0x00073e2f) main_cset6_slider_pane_t10

0xd683,	// (0x00073e53) main_cset6_slider_pane_t11_ParamLimits

0xd683,	// (0x00073e53) main_cset6_slider_pane_t11

0x46bb,	// (0x0006ae8b) main_cset6_slider_pane_t14_ParamLimits

0x46bb,	// (0x0006ae8b) main_cset6_slider_pane_t14

0x46f4,	// (0x0006aec4) main_cset6_slider_pane_t15_ParamLimits

0x46f4,	// (0x0006aec4) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0007639a) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0007639a) main_cset6_slider_pane_t

0x472d,	// (0x0006aefd) cset_slider_pane_g1_copy1

0x4736,	// (0x0006af06) cset_slider_pane_g2_copy1

0x473f,	// (0x0006af0f) cset_slider_pane_g3_copy1

0x6e53,	// (0x0006d623) bg_popup_sub_pane_cp011_copy1

0x402c,	// (0x0006a7fc) main_cset_text_pane_g1_copy1

0x4034,	// (0x0006a804) main_cset_text_pane_t1_copy1

0x4042,	// (0x0006a812) main_cset_text_pane_t2_copy1

0x4050,	// (0x0006a820) main_cset_text_pane_t3_copy1

0x405e,	// (0x0006a82e) main_cset_text_pane_t4_copy1

0x406c,	// (0x0006a83c) main_cset_text_pane_t5_copy1

0x407a,	// (0x0006a84a) main_cset_text_pane_t6_copy1

0x4088,	// (0x0006a858) main_cset_text_pane_t7_copy1

0xd6a7,	// (0x00073e77) main_cset_text2_pane_t1_copy1

0x6e53,	// (0x0006d623) main_ncimui_pane

0xa0b0,	// (0x00070880) popup_query_ncimui_window_ParamLimits

0xa0b0,	// (0x00070880) popup_query_ncimui_window

0xac08,	// (0x000713d8) field_cale_ev2_pane_g4_ParamLimits

0xac08,	// (0x000713d8) field_cale_ev2_pane_g4

0xb966,	// (0x00072136) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb966,	// (0x00072136) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0007607f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0007607f) cell_video_dialer_keypad_pane_g

0xb97e,	// (0x0007214e) cell_video_dialer_keypad_pane_t1

0x6e53,	// (0x0006d623) bg_popup_window_pane_cp012

0x0748,	// (0x00066f18) heading_pane_cp06

0x4766,	// (0x0006af36) ncim_query_content_pane

0x6e53,	// (0x0006d623) bg_popup_heading_pane_cp01

0x476e,	// (0x0006af3e) ncim_heading_pane_t1

0x477c,	// (0x0006af4c) ncim_indicator_popup_pane

0x478e,	// (0x0006af5e) ncim_query_button_pane

0x47a4,	// (0x0006af74) ncim_query_content_pane_t1

0x47b6,	// (0x0006af86) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x000763d9) ncim_query_content_pane_t

0x47f0,	// (0x0006afc0) ncim_query_list_pane

0x4802,	// (0x0006afd2) ncim_query_popup_pane

0x477c,	// (0x0006af4c) ncim_indicator_popup_pane_ParamLimits

0xd7ce,	// (0x00073f9e) ncim_query_content_pane_g1_ParamLimits

0xd7ce,	// (0x00073f9e) ncim_query_content_pane_g1

0x47a4,	// (0x0006af74) ncim_query_content_pane_t1_ParamLimits

0x47b6,	// (0x0006af86) ncim_query_content_pane_t2_ParamLimits

0xd7da,	// (0x00073faa) ncim_query_content_pane_t3_ParamLimits

0xd7da,	// (0x00073faa) ncim_query_content_pane_t3

0xd7f7,	// (0x00073fc7) ncim_query_content_pane_t4_ParamLimits

0xd7f7,	// (0x00073fc7) ncim_query_content_pane_t4

0xd814,	// (0x00073fe4) ncim_query_content_pane_t5_ParamLimits

0xd814,	// (0x00073fe4) ncim_query_content_pane_t5

0x47c8,	// (0x0006af98) ncim_query_content_pane_t6_ParamLimits

0x47c8,	// (0x0006af98) ncim_query_content_pane_t6

0xfc09,	// (0x000763d9) ncim_query_content_pane_t_ParamLimits

0x47f0,	// (0x0006afc0) ncim_query_list_pane_ParamLimits

0x4802,	// (0x0006afd2) ncim_query_popup_pane_ParamLimits

0x4816,	// (0x0006afe6) wait_bar_pane_cp04

0x6e53,	// (0x0006d623) input_focus_pane_cp011

0x481e,	// (0x0006afee) ncim_query_popup_pane_t1

0x482c,	// (0x0006affc) ncim_list_query_list_pane_ParamLimits

0x482c,	// (0x0006affc) ncim_list_query_list_pane

0x6e53,	// (0x0006d623) bg_button_pane_cp027

0x483f,	// (0x0006b00f) ncim_query_button_pane_g1

0x6e53,	// (0x0006d623) list_highlight_pane_cp012

0x4849,	// (0x0006b019) ncim_list_query_list_pane_g1

0x4851,	// (0x0006b021) ncim_list_query_list_pane_t1

0xc03b,	// (0x0007280b) cam4_indicators_pane_g3_ParamLimits

0xc03b,	// (0x0007280b) cam4_indicators_pane_g3

0xc141,	// (0x00072911) vid4_indicators_pane_g5_ParamLimits

0xc141,	// (0x00072911) vid4_indicators_pane_g5

0xc03b,	// (0x0007280b) vid4_progress_pane_g5_ParamLimits

0xc03b,	// (0x0007280b) vid4_progress_pane_g5

0xd6d5,	// (0x00073ea5) main_ncimui_pane_g1

0xd72f,	// (0x00073eff) ncimui_group_query_pane_ParamLimits

0xd72f,	// (0x00073eff) ncimui_group_query_pane

0xd779,	// (0x00073f49) ncimui_list_pane_ParamLimits

0xd779,	// (0x00073f49) ncimui_list_pane

0xd79a,	// (0x00073f6a) ncimui_text_pane_ParamLimits

0xd79a,	// (0x00073f6a) ncimui_text_pane

0xd831,	// (0x00074001) ncimui_text_pane_t1_ParamLimits

0xd831,	// (0x00074001) ncimui_text_pane_t1

0x485f,	// (0x0006b02f) ncimui_list_single_graphic_pane_ParamLimits

0x485f,	// (0x0006b02f) ncimui_list_single_graphic_pane

0xd850,	// (0x00074020) ncimui_query_pane_ParamLimits

0xd850,	// (0x00074020) ncimui_query_pane

0x6e53,	// (0x0006d623) list_highlight_pane_cp013

0x486f,	// (0x0006b03f) ncim_list_query_list_pane_t1_copy1

0x4849,	// (0x0006b019) ncim_list_single_graphic_pane_g1

0x487d,	// (0x0006b04d) ncim_query_button_pane_cp01

0x4889,	// (0x0006b059) ncim_query_entry_pane_ParamLimits

0x4889,	// (0x0006b059) ncim_query_entry_pane

0x489c,	// (0x0006b06c) ncimui_query_pane_g1

0x48a8,	// (0x0006b078) ncimui_query_pane_t1_ParamLimits

0x48a8,	// (0x0006b078) ncimui_query_pane_t1

0xa05d,	// (0x0007082d) input_focus_pane_cp012

0x48c1,	// (0x0006b091) ncim_query_entry_pane_t1

0xef3a,	// (0x0007570a) main_im_pane_ParamLimits

0xa05d,	// (0x0007082d) main_mobtv_pane_ParamLimits

0xa05d,	// (0x0007082d) main_mobtv_pane

0xd553,	// (0x00073d23) main_cset6_slider_pane_g18_ParamLimits

0xd553,	// (0x00073d23) main_cset6_slider_pane_g18

0xd55f,	// (0x00073d2f) main_cset6_slider_pane_g19_ParamLimits

0xd55f,	// (0x00073d2f) main_cset6_slider_pane_g19

0x3cb8,	// (0x0006a488) bg_main_mobtv_pane_ParamLimits

0x3cb8,	// (0x0006a488) bg_main_mobtv_pane

0xd863,	// (0x00074033) main_mobtv_info_pane

0xd86e,	// (0x0007403e) main_mobtv_loading_pane_ParamLimits

0xd86e,	// (0x0007403e) main_mobtv_loading_pane

0x48d3,	// (0x0006b0a3) main_mobtv_pg_channel_list_pane

0x48dd,	// (0x0006b0ad) main_mobtv_pg_hdr_pane

0xd87b,	// (0x0007404b) main_mobtv_programe_curr_pane_ParamLimits

0xd87b,	// (0x0007404b) main_mobtv_programe_curr_pane

0xd888,	// (0x00074058) main_mobtv_programe_next_pane_ParamLimits

0xd888,	// (0x00074058) main_mobtv_programe_next_pane

0x48e6,	// (0x0006b0b6) popup_mobtv_noti_window

0x2338,	// (0x00068b08) main_tv_pg_hdr_pane_g1

0x48f0,	// (0x0006b0c0) main_tv_pg_hdr_pane_g2

0x48f8,	// (0x0006b0c8) main_tv_pg_hdr_pane_g3

0x4900,	// (0x0006b0d0) main_tv_pg_hdr_pane_g4

0x4908,	// (0x0006b0d8) main_tv_pg_hdr_pane_g5

0x4912,	// (0x0006b0e2) main_tv_pg_hdr_pane_g6

0x491c,	// (0x0006b0ec) main_tv_pg_hdr_pane_g7

0x4926,	// (0x0006b0f6) main_tv_pg_hdr_pane_g8

0x4930,	// (0x0006b100) main_tv_pg_hdr_pane_g9

0x493a,	// (0x0006b10a) main_tv_pg_hdr_pane_g10

0x4944,	// (0x0006b114) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x000763e6) main_tv_pg_hdr_pane_g

0x494e,	// (0x0006b11e) main_tv_pg_hdr_pane_t1

0x495c,	// (0x0006b12c) main_tv_pg_hdr_pane_t2

0x496a,	// (0x0006b13a) main_tv_pg_hdr_pane_t3

0x497a,	// (0x0006b14a) main_tv_pg_hdr_pane_t4

0x498a,	// (0x0006b15a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x000763fd) main_tv_pg_hdr_pane_t

0x499a,	// (0x0006b16a) single_mobtv_pg_channel_pane_ParamLimits

0x499a,	// (0x0006b16a) single_mobtv_pg_channel_pane

0x49ac,	// (0x0006b17c) single_mobtv_pg_channel_table_pane

0x49b5,	// (0x0006b185) single_mobtv_pg_channel_thumb_pane

0x49be,	// (0x0006b18e) single_tv_pg_channel_pane_g1

0x49c7,	// (0x0006b197) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x00076408) single_tv_pg_channel_pane_g

0x2568,	// (0x00068d38) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2568,	// (0x00068d38) bg_single_mobtv_pg_channel_thumb_pane

0x49e4,	// (0x0006b1b4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x49e4,	// (0x0006b1b4) single_mobtv_pg_channel_thumb_pane_g1

0x49f2,	// (0x0006b1c2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x49f2,	// (0x0006b1c2) single_mobtv_pg_channel_thumb_pane_g2

0x49fe,	// (0x0006b1ce) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x49fe,	// (0x0006b1ce) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x0007640d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x0007640d) single_mobtv_pg_channel_thumb_pane_g

0x4a0a,	// (0x0006b1da) single_mobtv_pg_channel_thumb_pane_t1

0x4a18,	// (0x0006b1e8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x00076414) single_mobtv_pg_channel_thumb_pane_t

0x2338,	// (0x00068b08) bg_single_mobtv_pg_channel_table_pane_g1

0x2338,	// (0x00068b08) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00075ecb) bg_single_mobtv_pg_channel_table_pane_g

0x4a26,	// (0x0006b1f6) single_mobtv_pg_channel_table_pane_t1

0x4a34,	// (0x0006b204) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x00076419) single_mobtv_pg_channel_table_pane_t

0xd89d,	// (0x0007406d) main_mobtv_info_pane_g1_ParamLimits

0xd89d,	// (0x0007406d) main_mobtv_info_pane_g1

0xd8b9,	// (0x00074089) main_mobtv_info_pane_t1_ParamLimits

0xd8b9,	// (0x00074089) main_mobtv_info_pane_t1

0xd931,	// (0x00074101) main_mobtv_info_pane_t2_ParamLimits

0xd931,	// (0x00074101) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x00076423) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x00076423) main_mobtv_info_pane_t

0xd9c2,	// (0x00074192) wait_bar_pane_cp05

0xd9d4,	// (0x000741a4) main_mobtv_loading_pane_g1_ParamLimits

0xd9d4,	// (0x000741a4) main_mobtv_loading_pane_g1

0xd9e0,	// (0x000741b0) main_mobtv_loading_pane_g2_ParamLimits

0xd9e0,	// (0x000741b0) main_mobtv_loading_pane_g2

0xd9ec,	// (0x000741bc) main_mobtv_loading_pane_g3_ParamLimits

0xd9ec,	// (0x000741bc) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x0007642a) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x0007642a) main_mobtv_loading_pane_g

0x4a42,	// (0x0006b212) main_mobtv_loading_pane_t1_ParamLimits

0x4a42,	// (0x0006b212) main_mobtv_loading_pane_t1

0x4a5a,	// (0x0006b22a) main_mobtv_loading_pane_t2_ParamLimits

0x4a5a,	// (0x0006b22a) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x00076431) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x00076431) main_mobtv_loading_pane_t

0xd9fa,	// (0x000741ca) wait_bar_pane_cp06_ParamLimits

0xd9fa,	// (0x000741ca) wait_bar_pane_cp06

0x4a7e,	// (0x0006b24e) main_mobtv_programe_curr_pane_t1

0x4a8c,	// (0x0006b25c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x00076436) main_mobtv_programe_curr_pane_t

0x4a9a,	// (0x0006b26a) main_mobtv_programe_next_pane_t1

0x4aa8,	// (0x0006b278) main_mobtv_programe_next_pane_t2

0x4ab6,	// (0x0006b286) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x0007643b) main_mobtv_programe_next_pane_t

0x6e53,	// (0x0006d623) bg_popup_mobtv_noti_window_pane

0x4ac4,	// (0x0006b294) popup_mobtv_noti_window_g1

0x4acc,	// (0x0006b29c) popup_mobtv_noti_window_t1

0x4ada,	// (0x0006b2aa) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x00076442) popup_mobtv_noti_window_t

0x2338,	// (0x00068b08) bg_popup_mobtv_noti_window_pane_g1

0x6e53,	// (0x0006d623) sc_clock_pane

0x6e53,	// (0x0006d623) main_fs_bigclock_pane

0xd13e,	// (0x0007390e) blid2_tripm_pane_t4_ParamLimits

0xd13e,	// (0x0007390e) blid2_tripm_pane_t4

0xda06,	// (0x000741d6) sc_clock_pane_g1_ParamLimits

0xda06,	// (0x000741d6) sc_clock_pane_g1

0xda14,	// (0x000741e4) sc_clock_pane_t1_ParamLimits

0xda14,	// (0x000741e4) sc_clock_pane_t1

0xda29,	// (0x000741f9) sc_clock_pane_t2_ParamLimits

0xda29,	// (0x000741f9) sc_clock_pane_t2

0xda3b,	// (0x0007420b) sc_clock_pane_t3_ParamLimits

0xda3b,	// (0x0007420b) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x00076447) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x00076447) sc_clock_pane_t

0xe261,	// (0x00074a31) main_fs_bigclock_indicator_pane_ParamLimits

0xe261,	// (0x00074a31) main_fs_bigclock_indicator_pane

0xdac8,	// (0x00074298) main_fs_bigclock_pane_g1_ParamLimits

0xdac8,	// (0x00074298) main_fs_bigclock_pane_g1

0xe26d,	// (0x00074a3d) main_fs_bigclock_pane_t1_ParamLimits

0xe26d,	// (0x00074a3d) main_fs_bigclock_pane_t1

0xe27f,	// (0x00074a4f) main_fs_bigclock_pane_t2_ParamLimits

0xe27f,	// (0x00074a4f) main_fs_bigclock_pane_t2

0xe293,	// (0x00074a63) main_fs_bigclock_pane_t3_ParamLimits

0xe293,	// (0x00074a63) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x0007664b) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x0007664b) main_fs_bigclock_pane_t

0x33bf,	// (0x00069b8f) main_fs_bigclock_indicator_pane_g1

0x4796,	// (0x0006af66) ncim_query_content_pane_g2_ParamLimits

0x4796,	// (0x0006af66) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x000763d4) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x000763d4) ncim_query_content_pane_g

0xda4d,	// (0x0007421d) sc_clock_pane_t4_ParamLimits

0xda4d,	// (0x0007421d) sc_clock_pane_t4

0xa05d,	// (0x0007082d) main_radioblah_pane

0x3b71,	// (0x0006a341) cell_call4_button_pane_t1_copy1_ParamLimits

0x3b71,	// (0x0006a341) cell_call4_button_pane_t1_copy1

0xd6df,	// (0x00073eaf) main_ncimui_pane_t1_ParamLimits

0xd6df,	// (0x00073eaf) main_ncimui_pane_t1

0xd6f9,	// (0x00073ec9) main_ncimui_pane_t2_ParamLimits

0xd6f9,	// (0x00073ec9) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x000763cd) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x000763cd) main_ncimui_pane_t

0x4c26,	// (0x0006b3f6) main_radioblah_anim_pane_ParamLimits

0x4c26,	// (0x0006b3f6) main_radioblah_anim_pane

0x4c37,	// (0x0006b407) main_radioblah_info_pane_ParamLimits

0x4c37,	// (0x0006b407) main_radioblah_info_pane

0x4c4b,	// (0x0006b41b) main_radioblah_pane_t1_ParamLimits

0x4c4b,	// (0x0006b41b) main_radioblah_pane_t1

0x4c67,	// (0x0006b437) main_radioblah_pane_t2_ParamLimits

0x4c67,	// (0x0006b437) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x00076468) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x00076468) main_radioblah_pane_t

0xdb1a,	// (0x000742ea) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdb1a,	// (0x000742ea) main_radioblah_rocker_ctrl_pane

0x4caf,	// (0x0006b47f) main_radioblah_info_pane_t1_ParamLimits

0x4caf,	// (0x0006b47f) main_radioblah_info_pane_t1

0xdb63,	// (0x00074333) main_radioblah_info_pane_t2_ParamLimits

0xdb63,	// (0x00074333) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x00076471) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x00076471) main_radioblah_info_pane_t

0x2338,	// (0x00068b08) main_radioblah_rocker_ctrl_pane_g1

0xdc13,	// (0x000743e3) main_radioblah_rocker_ctrl_pane_g2

0xdc1b,	// (0x000743eb) main_radioblah_rocker_ctrl_pane_g3

0xdc23,	// (0x000743f3) main_radioblah_rocker_ctrl_pane_g4

0xdc2b,	// (0x000743fb) main_radioblah_rocker_ctrl_pane_g5

0xdc33,	// (0x00074403) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x0007647a) main_radioblah_rocker_ctrl_pane_g

0xd6a7,	// (0x00073e77) main_cset_text2_pane_t1_copy1_ParamLimits

0xbf69,	// (0x00072739) cam4_image_uncrop_qvga_pane

0xc0af,	// (0x0007287f) vid4_image_uncrop_qcif_pane

0xd2d0,	// (0x00073aa0) cam6_image_uncrop_qvga_pane_ParamLimits

0xd2d0,	// (0x00073aa0) cam6_image_uncrop_qvga_pane

0x44a2,	// (0x0006ac72) vid6_image_uncrop_qcif_pane_ParamLimits

0x44a2,	// (0x0006ac72) vid6_image_uncrop_qcif_pane

0x6e53,	// (0x0006d623) bg_popup_preview_window_pane_cp03

0x4748,	// (0x0006af18) list_cset_text2_pane

0x4750,	// (0x0006af20) main_cset6_text2_pane_g1

0x4758,	// (0x0006af28) main_cset6_text2_pane_t1

0xdc3b,	// (0x0007440b) list_cset_text2_pane_t1_ParamLimits

0xdc3b,	// (0x0007440b) list_cset_text2_pane_t1

0xa05d,	// (0x0007082d) main_radioblah_pane_ParamLimits

0xd9ae,	// (0x0007417e) main_mobtv_info_pane_t3_ParamLimits

0xd9ae,	// (0x0007417e) main_mobtv_info_pane_t3

0xdb08,	// (0x000742d8) main_radioblah_pane_g1

0xdb33,	// (0x00074303) main_radioblah_info_pane_g1

0xdbb8,	// (0x00074388) main_radioblah_info_pane_t3_ParamLimits

0xdbb8,	// (0x00074388) main_radioblah_info_pane_t3

0x8d77,	// (0x0006f547) highlight_cell_cale_month_pane_ParamLimits

0x8d77,	// (0x0006f547) highlight_cell_cale_month_pane

0x6e53,	// (0x0006d623) main_phob_fisheye_pane

0x264a,	// (0x00068e1a) scroll_pane_cp0031_ParamLimits

0x264a,	// (0x00068e1a) scroll_pane_cp0031

0x45b4,	// (0x0006ad84) wait_bar_pane_cp08_ParamLimits

0xd473,	// (0x00073c43) cset_list_set_pane_copy1_ParamLimits

0x4ce9,	// (0x0006b4b9) highlight_cell_cale_month_pane_g1

0xdc52,	// (0x00074422) highlight_cell_cale_month_pane_t1

0x4260,	// (0x0006aa30) list_gen_pane_cp01

0x3ed7,	// (0x0006a6a7) scroll_pane_01

0xdc60,	// (0x00074430) list_single_double_fisheye_pane

0x64a0,	// (0x0006cc70) list_double_fisheye_pane_g1_ParamLimits

0x64a0,	// (0x0006cc70) list_double_fisheye_pane_g1

0x64ac,	// (0x0006cc7c) list_double_fisheye_pane_g2_ParamLimits

0x64ac,	// (0x0006cc7c) list_double_fisheye_pane_g2

0xdc69,	// (0x00074439) list_double_fisheye_pane_g3_ParamLimits

0xdc69,	// (0x00074439) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x00076487) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x00076487) list_double_fisheye_pane_g

0x64dd,	// (0x0006ccad) list_double_fisheye_pane_t1_ParamLimits

0x64dd,	// (0x0006ccad) list_double_fisheye_pane_t1

0x64f8,	// (0x0006ccc8) list_double_fisheye_pane_t2_ParamLimits

0x64f8,	// (0x0006ccc8) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x00076492) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x00076492) list_double_fisheye_pane_t

0x6e53,	// (0x0006d623) main_call5_pane

0xda73,	// (0x00074243) sc_swipe_pane_ParamLimits

0xda73,	// (0x00074243) sc_swipe_pane

0xdc81,	// (0x00074451) call5_image_pane_ParamLimits

0xdc81,	// (0x00074451) call5_image_pane

0xdc93,	// (0x00074463) call5_swipe_1_pane_ParamLimits

0xdc93,	// (0x00074463) call5_swipe_1_pane

0xdc9f,	// (0x0007446f) call5_swipe_2_pane_ParamLimits

0xdc9f,	// (0x0007446f) call5_swipe_2_pane

0xdcbb,	// (0x0007448b) popup_call5_audio_first_window_ParamLimits

0xdcbb,	// (0x0007448b) popup_call5_audio_first_window

0x2568,	// (0x00068d38) call5_swipe_1_pane_g1_ParamLimits

0x2568,	// (0x00068d38) call5_swipe_1_pane_g1

0x4cf1,	// (0x0006b4c1) call5_swipe_1_pane_g2_ParamLimits

0x4cf1,	// (0x0006b4c1) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00076497) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00076497) call5_swipe_1_pane_g

0x4cfd,	// (0x0006b4cd) call5_swipe_1_pane_t1_ParamLimits

0x4cfd,	// (0x0006b4cd) call5_swipe_1_pane_t1

0x2568,	// (0x00068d38) call5_swipe_2_pane_g1_ParamLimits

0x2568,	// (0x00068d38) call5_swipe_2_pane_g1

0x4d12,	// (0x0006b4e2) call5_swipe_2_pane_g2_ParamLimits

0x4d12,	// (0x0006b4e2) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x0007649c) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x0007649c) call5_swipe_2_pane_g

0x4d1e,	// (0x0006b4ee) call5_swipe_2_pane_t1_ParamLimits

0x4d1e,	// (0x0006b4ee) call5_swipe_2_pane_t1

0x4d33,	// (0x0006b503) sc_swipe_pane_g1_ParamLimits

0x4d33,	// (0x0006b503) sc_swipe_pane_g1

0x4d40,	// (0x0006b510) sc_swipe_pane_g2_ParamLimits

0x4d40,	// (0x0006b510) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x000764a1) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x000764a1) sc_swipe_pane_g

0x4d4c,	// (0x0006b51c) sc_swipe_pane_t1_ParamLimits

0x4d4c,	// (0x0006b51c) sc_swipe_pane_t1

0x6e53,	// (0x0006d623) main_cmail_launcher_pane

0xdccb,	// (0x0007449b) aid_size_cell_cmail_l_ParamLimits

0xdccb,	// (0x0007449b) aid_size_cell_cmail_l

0xdcdb,	// (0x000744ab) grid_cmail_l_pane_ParamLimits

0xdcdb,	// (0x000744ab) grid_cmail_l_pane

0xdceb,	// (0x000744bb) cell_cmail_l_pane_ParamLimits

0xdceb,	// (0x000744bb) cell_cmail_l_pane

0xdd01,	// (0x000744d1) cell_cmail_l_pane_g1_ParamLimits

0xdd01,	// (0x000744d1) cell_cmail_l_pane_g1

0xdd0d,	// (0x000744dd) cell_cmail_l_pane_t1_ParamLimits

0xdd0d,	// (0x000744dd) cell_cmail_l_pane_t1

0x4d61,	// (0x0006b531) cell_cmail_l_pane_t2_ParamLimits

0x4d61,	// (0x0006b531) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x000764a6) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x000764a6) cell_cmail_l_pane_t

0xa05d,	// (0x0007082d) grid_highlight_pane_cp018_ParamLimits

0xa05d,	// (0x0007082d) grid_highlight_pane_cp018

0x6f77,	// (0x0006d747) main2_pane_ParamLimits

0x6f77,	// (0x0006d747) main2_pane

0xefe5,	// (0x000757b5) popup_sp_fs_action_menu_bg_pane_g1

0xefed,	// (0x000757bd) popup_sp_fs_action_menu_bg_pane_g2

0xeff5,	// (0x000757c5) popup_sp_fs_action_menu_bg_pane_g3

0xeffd,	// (0x000757cd) popup_sp_fs_action_menu_bg_pane_g4

0xf005,	// (0x000757d5) popup_sp_fs_action_menu_bg_pane_g5

0xf00d,	// (0x000757dd) popup_sp_fs_action_menu_bg_pane_g6

0xf015,	// (0x000757e5) popup_sp_fs_action_menu_bg_pane_g7

0xf01d,	// (0x000757ed) popup_sp_fs_action_menu_bg_pane_g8

0xf025,	// (0x000757f5) popup_sp_fs_action_menu_bg_pane_g9

0xf02d,	// (0x000757fd) popup_sp_fs_action_menu_bg_pane_g10

0xf02d,	// (0x000757fd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00075977) popup_sp_fs_action_menu_bg_pane_g

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t3_g3_g1

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t3_g3_g2

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00075a27) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00075a27) list_medium_line_x2_t3_g3_g

0x5cf7,	// (0x0006c4c7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5cf7,	// (0x0006c4c7) list_medium_line_x2_t3_g3_t1

0x5d0c,	// (0x0006c4dc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5d0c,	// (0x0006c4dc) list_medium_line_x2_t3_g3_t2

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00075a2e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00075a2e) list_medium_line_x2_t3_g3_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t3_g2_g1

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00075a35) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00075a35) list_medium_line_x2_t3_g2_g

0x5d33,	// (0x0006c503) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5d33,	// (0x0006c503) list_medium_line_x2_t3_g2_t1

0x5d49,	// (0x0006c519) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5d49,	// (0x0006c519) list_medium_line_x2_t3_g2_t2

0x5d5b,	// (0x0006c52b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5d5b,	// (0x0006c52b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00075a3a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00075a3a) list_medium_line_x2_t3_g2_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t4_g4_g1

0x5d79,	// (0x0006c549) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5d79,	// (0x0006c549) list_medium_line_x2_t4_g4_g2

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t4_g4_g3

0x5d85,	// (0x0006c555) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5d85,	// (0x0006c555) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00075a41) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00075a41) list_medium_line_x2_t4_g4_g

0x5d91,	// (0x0006c561) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5d91,	// (0x0006c561) list_medium_line_x2_t4_g4_t1

0x5dab,	// (0x0006c57b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5dab,	// (0x0006c57b) list_medium_line_x2_t4_g4_t2

0x5dc1,	// (0x0006c591) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5dc1,	// (0x0006c591) list_medium_line_x2_t4_g4_t3

0x5dd6,	// (0x0006c5a6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5dd6,	// (0x0006c5a6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00075a4a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00075a4a) list_medium_line_x2_t4_g4_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t2_g4_g1

0x5d79,	// (0x0006c549) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5d79,	// (0x0006c549) list_medium_line_x2_t2_g4_g2

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t2_g4_g3

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00075ab1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00075ab1) list_medium_line_x2_t2_g4_g

0x5de8,	// (0x0006c5b8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5de8,	// (0x0006c5b8) list_medium_line_x2_t2_g4_t1

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00075aba) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00075aba) list_medium_line_x2_t2_g4_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t2_g3_g1

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t2_g3_g2

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00075a27) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00075a27) list_medium_line_x2_t2_g3_g

0x5dfd,	// (0x0006c5cd) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5dfd,	// (0x0006c5cd) list_medium_line_x2_t2_g3_t1

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00075abf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00075abf) list_medium_line_x2_t2_g3_t

0x8f82,	// (0x0006f752) main_sp_fs_list_pane_ParamLimits

0x8f82,	// (0x0006f752) main_sp_fs_list_pane

0x8f8e,	// (0x0006f75e) sp_fs_scroll_pane_ParamLimits

0x8f8e,	// (0x0006f75e) sp_fs_scroll_pane

0x5e12,	// (0x0006c5e2) list_medium_line_x2_t3_t1

0x5e22,	// (0x0006c5f2) list_medium_line_x2_t3_t2

0x5e30,	// (0x0006c600) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00075b0a) list_medium_line_x2_t3_t

0x5e3e,	// (0x0006c60e) list_medium_line_x3_t4_t1

0x5e4e,	// (0x0006c61e) list_medium_line_x3_t4_t2

0x5e5c,	// (0x0006c62c) list_medium_line_x3_t4_t3

0x5e30,	// (0x0006c600) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00075b11) list_medium_line_x3_t4_t

0x5e6a,	// (0x0006c63a) list_medium_line_x4_t5_t1

0x5e7a,	// (0x0006c64a) list_medium_line_x4_t5_t2

0x5e5c,	// (0x0006c62c) list_medium_line_x4_t5_t3

0x5e88,	// (0x0006c658) list_medium_line_x4_t5_t4

0x5e30,	// (0x0006c600) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00075b1a) list_medium_line_x4_t5_t

0x5cd3,	// (0x0006c4a3) list_medium_line_t4_g4_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_t4_g4_g1

0x5d85,	// (0x0006c555) list_medium_line_t4_g4_g2_ParamLimits

0x5d85,	// (0x0006c555) list_medium_line_t4_g4_g2

0x5e96,	// (0x0006c666) list_medium_line_t4_g4_g3_ParamLimits

0x5e96,	// (0x0006c666) list_medium_line_t4_g4_g3

0x5ceb,	// (0x0006c4bb) list_medium_line_t4_g4_g4_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00075b25) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00075b25) list_medium_line_t4_g4_g

0x5ea2,	// (0x0006c672) list_medium_line_t4_g4_t1_ParamLimits

0x5ea2,	// (0x0006c672) list_medium_line_t4_g4_t1

0x5eb7,	// (0x0006c687) list_medium_line_t4_g4_t2_ParamLimits

0x5eb7,	// (0x0006c687) list_medium_line_t4_g4_t2

0x5ecd,	// (0x0006c69d) list_medium_line_t4_g4_t3_ParamLimits

0x5ecd,	// (0x0006c69d) list_medium_line_t4_g4_t3

0x5d1e,	// (0x0006c4ee) list_medium_line_t4_g4_t4_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00075b2e) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00075b2e) list_medium_line_t4_g4_t

0x90ad,	// (0x0006f87d) chi_dic_find_pane_g1

0xa079,	// (0x00070849) main_tport_pane

0x610f,	// (0x0006c8df) list_medium_line_plain_t1

0x611d,	// (0x0006c8ed) list_medium_line_t2_g2_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_t2_g2_g1

0x6129,	// (0x0006c8f9) list_medium_line_t2_g2_g2_ParamLimits

0x6129,	// (0x0006c8f9) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x000761ea) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x000761ea) list_medium_line_t2_g2_g

0x6135,	// (0x0006c905) list_medium_line_t2_g2_t1_ParamLimits

0x6135,	// (0x0006c905) list_medium_line_t2_g2_t1

0x614c,	// (0x0006c91c) list_medium_line_t2_g2_t2_ParamLimits

0x614c,	// (0x0006c91c) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x000761ef) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x000761ef) list_medium_line_t2_g2_t

0x636b,	// (0x0006cb3b) aid_sp_fs_list_icon_a_sm

0xcfb4,	// (0x00073784) aid_sp_fs_list_icon_d

0x3468,	// (0x00069c38) aid_sp_fs_text_primary

0xea93,	// (0x00075263) aid_sp_fs_text_secondary

0x6373,	// (0x0006cb43) list_medium_line

0x6373,	// (0x0006cb43) list_medium_line_g2

0x6373,	// (0x0006cb43) list_medium_line_g3

0x6373,	// (0x0006cb43) list_medium_line_plain

0x6373,	// (0x0006cb43) list_medium_line_plain_t2

0x6373,	// (0x0006cb43) list_medium_line_plain_t3

0x6373,	// (0x0006cb43) list_medium_line_right_icon

0x6373,	// (0x0006cb43) list_medium_line_right_iconx2

0x6373,	// (0x0006cb43) list_medium_line_t2

0x6373,	// (0x0006cb43) list_medium_line_t2_g2

0x6373,	// (0x0006cb43) list_medium_line_t2_g3

0x6373,	// (0x0006cb43) list_medium_line_t2_right_icon

0x6373,	// (0x0006cb43) list_medium_line_t2_right_iconx2

0x6373,	// (0x0006cb43) list_medium_line_t3

0x6373,	// (0x0006cb43) list_medium_line_t3_g2

0x6373,	// (0x0006cb43) list_medium_line_t3_g3

0x6373,	// (0x0006cb43) list_medium_line_t3_right_iconx2

0x637c,	// (0x0006cb4c) list_medium_line_t4_g4

0x6385,	// (0x0006cb55) list_medium_line_x2

0x6385,	// (0x0006cb55) list_medium_line_x2_t2_g2

0x6385,	// (0x0006cb55) list_medium_line_x2_t2_g3

0x6385,	// (0x0006cb55) list_medium_line_x2_t2_g4

0x6385,	// (0x0006cb55) list_medium_line_x2_t3

0x6385,	// (0x0006cb55) list_medium_line_x2_t3_g2

0x6385,	// (0x0006cb55) list_medium_line_x2_t3_g3

0x6385,	// (0x0006cb55) list_medium_line_x2_t3_g4

0x6385,	// (0x0006cb55) list_medium_line_x2_t4_g2

0x6385,	// (0x0006cb55) list_medium_line_x2_t4_g4

0x638e,	// (0x0006cb5e) list_medium_line_x3

0x638e,	// (0x0006cb5e) list_medium_line_x3_t4

0x638e,	// (0x0006cb5e) list_medium_line_x3_t4_g4

0x637c,	// (0x0006cb4c) list_medium_line_x4_t4

0x637c,	// (0x0006cb4c) list_medium_line_x4_t4_g7

0x637c,	// (0x0006cb4c) list_medium_line_x4_t5

0x6397,	// (0x0006cb67) list_single_fs_dyc_pane_ParamLimits

0x6397,	// (0x0006cb67) list_single_fs_dyc_pane

0x5cd3,	// (0x0006c4a3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x4_t4_g7_g1

0x63cf,	// (0x0006cb9f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x63cf,	// (0x0006cb9f) list_medium_line_x4_t4_g7_g2

0x63db,	// (0x0006cbab) list_medium_line_x4_t4_g7_g3_ParamLimits

0x63db,	// (0x0006cbab) list_medium_line_x4_t4_g7_g3

0x63ea,	// (0x0006cbba) list_medium_line_x4_t4_g7_g4_ParamLimits

0x63ea,	// (0x0006cbba) list_medium_line_x4_t4_g7_g4

0x63f6,	// (0x0006cbc6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x63f6,	// (0x0006cbc6) list_medium_line_x4_t4_g7_g5

0x6405,	// (0x0006cbd5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6405,	// (0x0006cbd5) list_medium_line_x4_t4_g7_g6

0x6414,	// (0x0006cbe4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6414,	// (0x0006cbe4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000763b3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000763b3) list_medium_line_x4_t4_g7_g

0x6420,	// (0x0006cbf0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6420,	// (0x0006cbf0) list_medium_line_x4_t4_g7_t1

0x6435,	// (0x0006cc05) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6435,	// (0x0006cc05) list_medium_line_x4_t4_g7_t2

0x644a,	// (0x0006cc1a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x644a,	// (0x0006cc1a) list_medium_line_x4_t4_g7_t3

0x645f,	// (0x0006cc2f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x645f,	// (0x0006cc2f) list_medium_line_x4_t4_g7_t4

0x6471,	// (0x0006cc41) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6471,	// (0x0006cc41) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000763c2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000763c2) list_medium_line_x4_t4_g7_t

0x6483,	// (0x0006cc53) list_single_dyc_row_pane_ParamLimits

0x6483,	// (0x0006cc53) list_single_dyc_row_pane

0xdc75,	// (0x00074445) call5_gesture_pane_ParamLimits

0xdc75,	// (0x00074445) call5_gesture_pane

0xdcab,	// (0x0007447b) call5_windows_pane_ParamLimits

0xdcab,	// (0x0007447b) call5_windows_pane

0xdd23,	// (0x000744f3) call5_swipe_1_pane_cp_ParamLimits

0xdd23,	// (0x000744f3) call5_swipe_1_pane_cp

0xdd2f,	// (0x000744ff) call5_swipe_2_pane_cp_ParamLimits

0xdd2f,	// (0x000744ff) call5_swipe_2_pane_cp

0x0996,	// (0x00067166) call5_image_pane_cp

0xdd3b,	// (0x0007450b) popup_call5_audio_first_window_cp_ParamLimits

0xdd3b,	// (0x0007450b) popup_call5_audio_first_window_cp

0x4d33,	// (0x0006b503) call5_swipe_1_pane_g1_cp_ParamLimits

0x4d33,	// (0x0006b503) call5_swipe_1_pane_g1_cp

0x4d73,	// (0x0006b543) call5_swipe_1_pane_g2_cp

0x4d4c,	// (0x0006b51c) call5_swipe_1_pane_t1_cp_ParamLimits

0x4d4c,	// (0x0006b51c) call5_swipe_1_pane_t1_cp

0x4d33,	// (0x0006b503) call5_swipe_2_pane_g1_cp_ParamLimits

0x4d33,	// (0x0006b503) call5_swipe_2_pane_g1_cp

0x4d7b,	// (0x0006b54b) call5_swipe_2_pane_g2_cp

0x4d83,	// (0x0006b553) call5_swipe_2_pane_t1_cp_ParamLimits

0x4d83,	// (0x0006b553) call5_swipe_2_pane_t1_cp

0xa05d,	// (0x0007082d) main_sp_fs_email_pane

0x4d98,	// (0x0006b568) main_sp_fs_listscroll_pane_te

0x651a,	// (0x0006ccea) popup_sp_fs_action_menu_pane_ParamLimits

0x651a,	// (0x0006ccea) popup_sp_fs_action_menu_pane

0x2338,	// (0x00068b08) bg_sp_fs_ctrlbar_pane_g1

0x4da1,	// (0x0006b571) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4daa,	// (0x0006b57a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4db3,	// (0x0006b583) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2338,	// (0x00068b08) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x000764ab) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2117,	// (0x000688e7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2117,	// (0x000688e7) bg_sp_fs_ctrlbar_ddmenu_pane

0x4dbc,	// (0x0006b58c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4dbc,	// (0x0006b58c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4dc8,	// (0x0006b598) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4dc8,	// (0x0006b598) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x000764b4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x000764b4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4dd4,	// (0x0006b5a4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4dd4,	// (0x0006b5a4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6560,	// (0x0006cd30) list_medium_line_t2_right_icon_g1

0x6568,	// (0x0006cd38) list_medium_line_t2_right_icon_t1

0x6578,	// (0x0006cd48) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x000764b9) list_medium_line_t2_right_icon_t

0x1e03,	// (0x000685d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1e03,	// (0x000685d3) bg_sp_fs_ctrlbar_pane

0xdda0,	// (0x00074570) main_sp_fs_ctrlbar_button_pane_cp01

0xdda8,	// (0x00074578) main_sp_fs_ctrlbar_ddmenu_pane

0x4e28,	// (0x0006b5f8) main_sp_fs_ctrlbar_pane_g1

0x4e34,	// (0x0006b604) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x000764be) main_sp_fs_ctrlbar_pane_g

0x4e40,	// (0x0006b610) main_sp_fs_ctrlbar_pane_t1

0x6586,	// (0x0006cd56) main_sp_fs_ctrlbar_pane

0x65a2,	// (0x0006cd72) main_sp_fs_listscroll_pane_te_cp01

0x65b3,	// (0x0006cd83) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x65b3,	// (0x0006cd83) popup_sp_fs_action_menu_pane_cp01

0xa05d,	// (0x0007082d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa05d,	// (0x0007082d) bg_sp_fs_highlight_list_pane_cp01

0x65cd,	// (0x0006cd9d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x65cd,	// (0x0006cd9d) sp_fs_action_menu_list_gene_pane_g1

0x4e65,	// (0x0006b635) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4e65,	// (0x0006b635) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x000764c8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x000764c8) sp_fs_action_menu_list_gene_pane_g

0x65dc,	// (0x0006cdac) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x65dc,	// (0x0006cdac) sp_fs_action_menu_list_gene_pane_t1

0x65f4,	// (0x0006cdc4) sp_fs_action_menu_list_gene_pane_ParamLimits

0x65f4,	// (0x0006cdc4) sp_fs_action_menu_list_gene_pane

0x4e72,	// (0x0006b642) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4e72,	// (0x0006b642) popup_sp_fs_action_menu_bg_pane

0x6617,	// (0x0006cde7) sp_fs_action_menu_list_pane_ParamLimits

0x6617,	// (0x0006cde7) sp_fs_action_menu_list_pane

0x4e80,	// (0x0006b650) sp_fs_scroll_pane_cp01_ParamLimits

0x4e80,	// (0x0006b650) sp_fs_scroll_pane_cp01

0x663b,	// (0x0006ce0b) list_medium_line_plain_t2_t1

0x664b,	// (0x0006ce1b) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x000764cd) list_medium_line_plain_t2_t

0x6659,	// (0x0006ce29) list_medium_line_plain_t3_t1

0x6669,	// (0x0006ce39) list_medium_line_plain_t3_t2

0x6677,	// (0x0006ce47) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x000764d2) list_medium_line_plain_t3_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t2_g2_g1

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00075a35) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00075a35) list_medium_line_x2_t2_g2_g

0x5ea2,	// (0x0006c672) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5ea2,	// (0x0006c672) list_medium_line_x2_t2_g2_t1

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x000764d9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x000764d9) list_medium_line_x2_t2_g2_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t4_g2_g1

0x6685,	// (0x0006ce55) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6685,	// (0x0006ce55) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x000764de) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x000764de) list_medium_line_x2_t4_g2_g

0x6697,	// (0x0006ce67) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6697,	// (0x0006ce67) list_medium_line_x2_t4_g2_t1

0x66b1,	// (0x0006ce81) list_medium_line_x2_t4_g2_t2_ParamLimits

0x66b1,	// (0x0006ce81) list_medium_line_x2_t4_g2_t2

0x66c7,	// (0x0006ce97) list_medium_line_x2_t4_g2_t3_ParamLimits

0x66c7,	// (0x0006ce97) list_medium_line_x2_t4_g2_t3

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x000764e3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x000764e3) list_medium_line_x2_t4_g2_t

0x66dc,	// (0x0006ceac) list_medium_line_t3_right_iconx2_g1

0x6560,	// (0x0006cd30) list_medium_line_t3_right_iconx2_g2

0x66e4,	// (0x0006ceb4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x000764ec) list_medium_line_t3_right_iconx2_g

0x66ec,	// (0x0006cebc) list_medium_line_t3_right_iconx2_t1

0x66fc,	// (0x0006cecc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x000764f3) list_medium_line_t3_right_iconx2_t

0x5cd3,	// (0x0006c4a3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x3_t4_g4_g1

0x5cdf,	// (0x0006c4af) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x3_t4_g4_g2

0x5d85,	// (0x0006c555) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5d85,	// (0x0006c555) list_medium_line_x3_t4_g4_g3

0x670a,	// (0x0006ceda) list_medium_line_x3_t4_g4_g4_ParamLimits

0x670a,	// (0x0006ceda) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x000764f8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x000764f8) list_medium_line_x3_t4_g4_g

0x6716,	// (0x0006cee6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6716,	// (0x0006cee6) list_medium_line_x3_t4_g4_t1

0x672d,	// (0x0006cefd) list_medium_line_x3_t4_g4_t2_ParamLimits

0x672d,	// (0x0006cefd) list_medium_line_x3_t4_g4_t2

0x6742,	// (0x0006cf12) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6742,	// (0x0006cf12) list_medium_line_x3_t4_g4_t3

0x6757,	// (0x0006cf27) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6757,	// (0x0006cf27) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x00076501) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x00076501) list_medium_line_x3_t4_g4_t

0x6774,	// (0x0006cf44) list_single_dyc_row_text_pane_t1_ParamLimits

0x6774,	// (0x0006cf44) list_single_dyc_row_text_pane_t1

0x67b7,	// (0x0006cf87) list_single_dyc_row_text_pane_t2_ParamLimits

0x67b7,	// (0x0006cf87) list_single_dyc_row_text_pane_t2

0x6811,	// (0x0006cfe1) list_single_dyc_row_text_pane_t3_ParamLimits

0x6811,	// (0x0006cfe1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x0007650a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0007650a) list_single_dyc_row_text_pane_t

0x6823,	// (0x0006cff3) list_single_dyc_row_pane_g1_ParamLimits

0x6823,	// (0x0006cff3) list_single_dyc_row_pane_g1

0x682f,	// (0x0006cfff) list_single_dyc_row_pane_g2_ParamLimits

0x682f,	// (0x0006cfff) list_single_dyc_row_pane_g2

0x683b,	// (0x0006d00b) list_single_dyc_row_pane_g3_ParamLimits

0x683b,	// (0x0006d00b) list_single_dyc_row_pane_g3

0x6847,	// (0x0006d017) list_single_dyc_row_pane_g4_ParamLimits

0x6847,	// (0x0006d017) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x00076511) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x00076511) list_single_dyc_row_pane_g

0x6853,	// (0x0006d023) list_single_dyc_row_text_pane_ParamLimits

0x6853,	// (0x0006d023) list_single_dyc_row_text_pane

0x6e53,	// (0x0006d623) bg_sp_fs_scroll_pane

0x4ea6,	// (0x0006b676) thumb_sp_fs_scroll_pane

0x611d,	// (0x0006c8ed) list_medium_line_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_g1

0x6872,	// (0x0006d042) list_medium_line_t1_ParamLimits

0x6872,	// (0x0006d042) list_medium_line_t1

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_g1

0x5cdf,	// (0x0006c4af) list_medium_line_x2_g2_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x0007651a) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x0007651a) list_medium_line_x2_g

0x6887,	// (0x0006d057) list_medium_line_x2_t1_ParamLimits

0x6887,	// (0x0006d057) list_medium_line_x2_t1

0x5cd3,	// (0x0006c4a3) list_medium_line_x3_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x3_g1

0x5cdf,	// (0x0006c4af) list_medium_line_x3_g2_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x0007651a) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x0007651a) list_medium_line_x3_g

0x6887,	// (0x0006d057) list_medium_line_x3_t1_ParamLimits

0x6887,	// (0x0006d057) list_medium_line_x3_t1

0x4eaf,	// (0x0006b67f) thumb_sp_fs_scroll_pane_g1

0x4eb8,	// (0x0006b688) thumb_sp_fs_scroll_pane_g2

0x4ec1,	// (0x0006b691) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0007651f) thumb_sp_fs_scroll_pane_g

0x4eaf,	// (0x0006b67f) bg_sp_fs_scroll_pane_g1

0x4eb8,	// (0x0006b688) bg_sp_fs_scroll_pane_g2

0x4ec1,	// (0x0006b691) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0007651f) bg_sp_fs_scroll_pane_g

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5cd3,	// (0x0006c4a3) list_medium_line_x2_t3_g4_g1

0x5d79,	// (0x0006c549) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5d79,	// (0x0006c549) list_medium_line_x2_t3_g4_g2

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5cdf,	// (0x0006c4af) list_medium_line_x2_t3_g4_g3

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5ceb,	// (0x0006c4bb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00075ab1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00075ab1) list_medium_line_x2_t3_g4_g

0x689d,	// (0x0006d06d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x689d,	// (0x0006d06d) list_medium_line_x2_t3_g4_t1

0x68b3,	// (0x0006d083) list_medium_line_x2_t3_g4_t2_ParamLimits

0x68b3,	// (0x0006d083) list_medium_line_x2_t3_g4_t2

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5d1e,	// (0x0006c4ee) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x00076526) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x00076526) list_medium_line_x2_t3_g4_t

0x611d,	// (0x0006c8ed) list_medium_line_g2_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_g2_g1

0x6129,	// (0x0006c8f9) list_medium_line_g2_g2_ParamLimits

0x6129,	// (0x0006c8f9) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x000761ea) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x000761ea) list_medium_line_g2_g

0x68cc,	// (0x0006d09c) list_medium_line_g2_t1_ParamLimits

0x68cc,	// (0x0006d09c) list_medium_line_g2_t1

0x611d,	// (0x0006c8ed) list_medium_line_t3_g2_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_t3_g2_g1

0x6129,	// (0x0006c8f9) list_medium_line_t3_g2_g2_ParamLimits

0x6129,	// (0x0006c8f9) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x000761ea) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x000761ea) list_medium_line_t3_g2_g

0x68e1,	// (0x0006d0b1) list_medium_line_t3_g2_t1_ParamLimits

0x68e1,	// (0x0006d0b1) list_medium_line_t3_g2_t1

0x68fb,	// (0x0006d0cb) list_medium_line_t3_g2_t2_ParamLimits

0x68fb,	// (0x0006d0cb) list_medium_line_t3_g2_t2

0x6911,	// (0x0006d0e1) list_medium_line_t3_g2_t3_ParamLimits

0x6911,	// (0x0006d0e1) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x0007652d) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x0007652d) list_medium_line_t3_g2_t

0x6560,	// (0x0006cd30) list_medium_line_right_icon_g1

0x6928,	// (0x0006d0f8) list_medium_line_right_icon_t1

0x611d,	// (0x0006c8ed) list_medium_line_t2_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_t2_g1

0x6936,	// (0x0006d106) list_medium_line_t2_t1_ParamLimits

0x6936,	// (0x0006d106) list_medium_line_t2_t1

0x6950,	// (0x0006d120) list_medium_line_t2_t2_ParamLimits

0x6950,	// (0x0006d120) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x00076534) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x00076534) list_medium_line_t2_t

0x611d,	// (0x0006c8ed) list_medium_line_t3_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_t3_g1

0x6965,	// (0x0006d135) list_medium_line_t3_t1_ParamLimits

0x6965,	// (0x0006d135) list_medium_line_t3_t1

0x697c,	// (0x0006d14c) list_medium_line_t3_t2_ParamLimits

0x697c,	// (0x0006d14c) list_medium_line_t3_t2

0x6991,	// (0x0006d161) list_medium_line_t3_t3_ParamLimits

0x6991,	// (0x0006d161) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x00076539) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x00076539) list_medium_line_t3_t

0x611d,	// (0x0006c8ed) list_medium_line_g3_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_g3_g1

0x69a3,	// (0x0006d173) list_medium_line_g3_g2_ParamLimits

0x69a3,	// (0x0006d173) list_medium_line_g3_g2

0x6129,	// (0x0006c8f9) list_medium_line_g3_g3_ParamLimits

0x6129,	// (0x0006c8f9) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x00076540) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x00076540) list_medium_line_g3_g

0x69af,	// (0x0006d17f) list_medium_line_g3_t1_ParamLimits

0x69af,	// (0x0006d17f) list_medium_line_g3_t1

0x611d,	// (0x0006c8ed) list_medium_line_t2_g3_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_t2_g3_g1

0x69a3,	// (0x0006d173) list_medium_line_t2_g3_g2_ParamLimits

0x69a3,	// (0x0006d173) list_medium_line_t2_g3_g2

0x6129,	// (0x0006c8f9) list_medium_line_t2_g3_g3_ParamLimits

0x6129,	// (0x0006c8f9) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x00076540) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x00076540) list_medium_line_t2_g3_g

0x69c4,	// (0x0006d194) list_medium_line_t2_g3_t1_ParamLimits

0x69c4,	// (0x0006d194) list_medium_line_t2_g3_t1

0x69db,	// (0x0006d1ab) list_medium_line_t2_g3_t2_ParamLimits

0x69db,	// (0x0006d1ab) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x00076547) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x00076547) list_medium_line_t2_g3_t

0x611d,	// (0x0006c8ed) list_medium_line_t3_g3_g1_ParamLimits

0x611d,	// (0x0006c8ed) list_medium_line_t3_g3_g1

0x69a3,	// (0x0006d173) list_medium_line_t3_g3_g2_ParamLimits

0x69a3,	// (0x0006d173) list_medium_line_t3_g3_g2

0x6129,	// (0x0006c8f9) list_medium_line_t3_g3_g3_ParamLimits

0x6129,	// (0x0006c8f9) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x00076540) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x00076540) list_medium_line_t3_g3_g

0x69f0,	// (0x0006d1c0) list_medium_line_t3_g3_t1_ParamLimits

0x69f0,	// (0x0006d1c0) list_medium_line_t3_g3_t1

0x6a04,	// (0x0006d1d4) list_medium_line_t3_g3_t2_ParamLimits

0x6a04,	// (0x0006d1d4) list_medium_line_t3_g3_t2

0x6a16,	// (0x0006d1e6) list_medium_line_t3_g3_t3_ParamLimits

0x6a16,	// (0x0006d1e6) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x0007654c) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x0007654c) list_medium_line_t3_g3_t

0x66dc,	// (0x0006ceac) list_medium_line_right_iconx2_g1

0x6560,	// (0x0006cd30) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x00076553) list_medium_line_right_iconx2_g

0x6a2a,	// (0x0006d1fa) list_medium_line_right_iconx2_t1

0x66dc,	// (0x0006ceac) list_medium_line_t2_right_iconx2_g1

0x6560,	// (0x0006cd30) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x00076553) list_medium_line_t2_right_iconx2_g

0x6a38,	// (0x0006d208) list_medium_line_t2_right_iconx2_t1

0x6a48,	// (0x0006d218) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x00076558) list_medium_line_t2_right_iconx2_t

0x6a56,	// (0x0006d226) list_medium_line_x4_t4_t1

0x6a64,	// (0x0006d234) list_medium_line_x4_t4_t2

0x6a74,	// (0x0006d244) list_medium_line_x4_t4_t3

0x6a84,	// (0x0006d254) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x0007655d) list_medium_line_x4_t4_t

0xdddb,	// (0x000745ab) tport_appsw_pane_ParamLimits

0xdddb,	// (0x000745ab) tport_appsw_pane

0xdde9,	// (0x000745b9) tport_contact_pane_ParamLimits

0xdde9,	// (0x000745b9) tport_contact_pane

0xddf7,	// (0x000745c7) tport_listscroll_pane_ParamLimits

0xddf7,	// (0x000745c7) tport_listscroll_pane

0xde05,	// (0x000745d5) cell_tport_appsw_pane_ParamLimits

0xde05,	// (0x000745d5) cell_tport_appsw_pane

0x25cd,	// (0x00068d9d) tport_appsw_pane_g1_ParamLimits

0x25cd,	// (0x00068d9d) tport_appsw_pane_g1

0x2d31,	// (0x00069501) tport_contact_pane_g1

0x2d3a,	// (0x0006950a) tport_contact_pane_t1

0x2d48,	// (0x00069518) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x00076566) tport_contact_pane_t

0x2d56,	// (0x00069526) list_tport_pane

0x2d5f,	// (0x0006952f) scroll_pane_cp_030

0xde30,	// (0x00074600) cell_tport_appsw_pane_g1

0x2d78,	// (0x00069548) cell_tport_appsw_pane_t1

0x6e53,	// (0x0006d623) grid_highlight_pane_cp019

0xde40,	// (0x00074610) list_tport_double_graphic_pane_ParamLimits

0xde40,	// (0x00074610) list_tport_double_graphic_pane

0xa05d,	// (0x0007082d) list_highlight_pane_cp023_ParamLimits

0xa05d,	// (0x0007082d) list_highlight_pane_cp023

0xde51,	// (0x00074621) list_tport_double_graphic_pane_g1_ParamLimits

0xde51,	// (0x00074621) list_tport_double_graphic_pane_g1

0xde5e,	// (0x0007462e) list_tport_double_graphic_pane_t1_ParamLimits

0xde5e,	// (0x0007462e) list_tport_double_graphic_pane_t1

0xde73,	// (0x00074643) list_tport_double_graphic_pane_t2_ParamLimits

0xde73,	// (0x00074643) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x00076572) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x00076572) list_tport_double_graphic_pane_t

0x6e53,	// (0x0006d623) main_cale_note_pane

0xc30a,	// (0x00072ada) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc30a,	// (0x00072ada) cell_vitu2_function_top_wide_pane_cp01

0xd9c2,	// (0x00074192) wait_bar_pane_cp05_ParamLimits

0x6e53,	// (0x0006d623) listscroll_cmail_pane

0x2d8e,	// (0x0006955e) list_cmail_pane

0xde8f,	// (0x0007465f) list_cmail_body_pane

0xdea4,	// (0x00074674) list_single_cmail_header_caption_pane

0xdebe,	// (0x0007468e) list_single_cmail_header_detail_pane_ParamLimits

0xdebe,	// (0x0007468e) list_single_cmail_header_detail_pane

0xdeed,	// (0x000746bd) list_single_cmail_header_caption_pane_t1

0x6a94,	// (0x0006d264) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6a94,	// (0x0006d264) list_single_cmail_header_detail_pane_g1

0xdefd,	// (0x000746cd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdefd,	// (0x000746cd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x00076577) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x00076577) list_single_cmail_header_detail_pane_g

0x6aac,	// (0x0006d27c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6aac,	// (0x0006d27c) list_single_cmail_header_detail_pane_t1

0x6b10,	// (0x0006d2e0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6b10,	// (0x0006d2e0) list_single_cmail_header_editor_pane_bg

0x49c7,	// (0x0006b197) list_cmail_body_pane_g1

0x2e17,	// (0x000695e7) list_cmail_body_pane_t1

0x3ce6,	// (0x0006a4b6) list_single_cmail_header_editor_pane_bg_g1

0x02b1,	// (0x00066a81) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3cf6,	// (0x0006a4c6) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3cee,	// (0x0006a4be) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3fe3,	// (0x0006a7b3) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3d16,	// (0x0006a4e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3d06,	// (0x0006a4d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3d0e,	// (0x0006a4de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0291,	// (0x00066a61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdf09,	// (0x000746d9) calenote_gesture_pane_ParamLimits

0xdf09,	// (0x000746d9) calenote_gesture_pane

0xdf23,	// (0x000746f3) calenote_window_pane_ParamLimits

0xdf23,	// (0x000746f3) calenote_window_pane

0x2e25,	// (0x000695f5) popup_note_window_cp01

0xdf3b,	// (0x0007470b) calenote_swipe_1_pane_ParamLimits

0xdf3b,	// (0x0007470b) calenote_swipe_1_pane

0xdd2f,	// (0x000744ff) calenote_swipe_2_pane_ParamLimits

0xdd2f,	// (0x000744ff) calenote_swipe_2_pane

0x4d33,	// (0x0006b503) calenote_swipe_1_pane_g1_ParamLimits

0x4d33,	// (0x0006b503) calenote_swipe_1_pane_g1

0x4d40,	// (0x0006b510) calenote_swipe_1_pane_g2_ParamLimits

0x4d40,	// (0x0006b510) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x000764a1) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x000764a1) calenote_swipe_1_pane_g

0x2e37,	// (0x00069607) calenote_swipe_1_pane_t1_ParamLimits

0x2e37,	// (0x00069607) calenote_swipe_1_pane_t1

0x4d33,	// (0x0006b503) calenote_swipe_2_pane_g1_ParamLimits

0x4d33,	// (0x0006b503) calenote_swipe_2_pane_g1

0x2e56,	// (0x00069626) calenote_swipe_2_pane_g2_ParamLimits

0x2e56,	// (0x00069626) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x00076583) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x00076583) calenote_swipe_2_pane_g

0x2e62,	// (0x00069632) calenote_swipe_2_pane_t1_ParamLimits

0x2e62,	// (0x00069632) calenote_swipe_2_pane_t1

0x6e53,	// (0x0006d623) main_mup_navstr_pane

0xb060,	// (0x00071830) main_mup3_pane_t7_ParamLimits

0xb060,	// (0x00071830) main_mup3_pane_t7

0xba53,	// (0x00072223) main_mp4_pane_g6_ParamLimits

0xba53,	// (0x00072223) main_mp4_pane_g6

0xbdc3,	// (0x00072593) main_image3_pane_t4_ParamLimits

0xbdc3,	// (0x00072593) main_image3_pane_t4

0xdf4e,	// (0x0007471e) popup_navstr_preview_pane_ParamLimits

0xdf4e,	// (0x0007471e) popup_navstr_preview_pane

0xdf5a,	// (0x0007472a) scroll_navstr_pane_ParamLimits

0xdf5a,	// (0x0007472a) scroll_navstr_pane

0x6e53,	// (0x0006d623) bg_popup_preview_window_pane_cp04

0x2e89,	// (0x00069659) popup_navstr_preview_pane_t1

0xdf66,	// (0x00074736) scroll_navstr_pane_g1_ParamLimits

0xdf66,	// (0x00074736) scroll_navstr_pane_g1

0xdf73,	// (0x00074743) scroll_navstr_pane_t1_ParamLimits

0xdf73,	// (0x00074743) scroll_navstr_pane_t1

0x2e2e,	// (0x000695fe) bg_button_pane_cp014

0x2e2e,	// (0x000695fe) bg_button_pane_cp030

0x64c0,	// (0x0006cc90) list_double_fisheye_pane_g4_ParamLimits

0x64c0,	// (0x0006cc90) list_double_fisheye_pane_g4

0x64cc,	// (0x0006cc9c) list_double_fisheye_pane_g5_ParamLimits

0x64cc,	// (0x0006cc9c) list_double_fisheye_pane_g5

0x2d96,	// (0x00069566) sp_fs_scroll_pane_cp03

0x4e28,	// (0x0006b5f8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4e34,	// (0x0006b604) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x000764be) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4e40,	// (0x0006b610) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xde85,	// (0x00074655) sp_fs_scroll_pane_cp02

0xf050,	// (0x00075820) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xf050,	// (0x00075820) popup_sp_fs_calendar_preview_list_single_pane

0x6e53,	// (0x0006d623) main_cam6_pano_pane

0xa05d,	// (0x0007082d) main_mup3_pane_ParamLimits

0x6e53,	// (0x0006d623) main_phacti_pane

0xd895,	// (0x00074065) bg_button_pane_cp11

0xd8ad,	// (0x0007407d) main_mobtv_info_pane_g2_ParamLimits

0xd8ad,	// (0x0007407d) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x0007641e) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x0007641e) main_mobtv_info_pane_g

0xda5f,	// (0x0007422f) sc_clock_pane_t5_ParamLimits

0xda5f,	// (0x0007422f) sc_clock_pane_t5

0xdb08,	// (0x000742d8) main_radioblah_pane_g1_ParamLimits

0x4c7f,	// (0x0006b44f) main_radioblah_pane_t3_ParamLimits

0x4c7f,	// (0x0006b44f) main_radioblah_pane_t3

0x4c97,	// (0x0006b467) main_radioblah_pane_t4_ParamLimits

0x4c97,	// (0x0006b467) main_radioblah_pane_t4

0xdb26,	// (0x000742f6) main_radioblah_text_pane_ParamLimits

0xdb26,	// (0x000742f6) main_radioblah_text_pane

0xdb33,	// (0x00074303) main_radioblah_info_pane_g1_ParamLimits

0xdbcc,	// (0x0007439c) main_radioblah_info_pane_t4_ParamLimits

0xdbcc,	// (0x0007439c) main_radioblah_info_pane_t4

0xa05d,	// (0x0007082d) main_sp_fs_calendar_pane

0xdf85,	// (0x00074755) main_phacti_pane_g1

0xdf8d,	// (0x0007475d) phacti_note_pane_ParamLimits

0xdf8d,	// (0x0007475d) phacti_note_pane

0x2ea0,	// (0x00069670) phacti_term_pane_ParamLimits

0x2ea0,	// (0x00069670) phacti_term_pane

0x2eb5,	// (0x00069685) phacti_note_pane_t1_ParamLimits

0x2eb5,	// (0x00069685) phacti_note_pane_t1

0x6b22,	// (0x0006d2f2) phacti_term_pane_g1

0x6b2a,	// (0x0006d2fa) phacti_term_pane_t1_ParamLimits

0x6b2a,	// (0x0006d2fa) phacti_term_pane_t1

0x2efe,	// (0x000696ce) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2f06,	// (0x000696d6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0007658d) popup_sp_fs_calendar_preview_list_single_pane_g

0x2f0e,	// (0x000696de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2f0e,	// (0x000696de) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2f24,	// (0x000696f4) aid_popup_sp_fs_bg_corner_pane

0x2338,	// (0x00068b08) popup_sp_fs_calendar_preview_bg_pane_g1

0x6e53,	// (0x0006d623) popup_sp_fs_calendar_preview_bg_pane

0x2f2c,	// (0x000696fc) popup_sp_fs_calendar_preview_list_pane

0xa05d,	// (0x0007082d) bg_main_sp_fs_cale_pane_ParamLimits

0xa05d,	// (0x0007082d) bg_main_sp_fs_cale_pane

0x6b54,	// (0x0006d324) listscroll_cale_mrui_pane_ParamLimits

0x6b54,	// (0x0006d324) listscroll_cale_mrui_pane

0x6b68,	// (0x0006d338) listscroll_sp_fs_schedule_track_pane

0x6b71,	// (0x0006d341) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6b71,	// (0x0006d341) main_sp_fs_ctrlbar_pane_cp01

0x2f62,	// (0x00069732) main_sp_fs_ribbon_pane

0x2f6a,	// (0x0006973a) popup_sp_fs_cale_preview_window

0xdfd0,	// (0x000747a0) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdfd0,	// (0x000747a0) list_single_sp_fs_schedule_track_pane

0x7100,	// (0x0006d8d0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7100,	// (0x0006d8d0) bg_sp_fs_highlight_list_pane_cp03

0xdfe4,	// (0x000747b4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdfe4,	// (0x000747b4) list_single_sp_fs_schedule_track_pane_g1

0xdff0,	// (0x000747c0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdff0,	// (0x000747c0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x00076592) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x00076592) list_single_sp_fs_schedule_track_pane_g

0xdffc,	// (0x000747cc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdffc,	// (0x000747cc) list_single_sp_fs_schedule_track_pane_t1

0xe01a,	// (0x000747ea) sp_fs_schedule_track_pane_ParamLimits

0xe01a,	// (0x000747ea) sp_fs_schedule_track_pane

0x2f7c,	// (0x0006974c) sp_fs_schedule_track_pane_g1

0x2f84,	// (0x00069754) sp_fs_schedule_track_pane_g2

0x2f8c,	// (0x0006975c) sp_fs_schedule_track_pane_g3

0x2f94,	// (0x00069764) sp_fs_schedule_track_pane_g4

0x2f9c,	// (0x0006976c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00076597) sp_fs_schedule_track_pane_g

0x3ce6,	// (0x0006a4b6) bg_sp_fs_schedule_viewer_highlight_g1

0x02b1,	// (0x00066a81) bg_sp_fs_schedule_viewer_highlight_g2

0x3cee,	// (0x0006a4be) bg_sp_fs_schedule_viewer_highlight_g3

0x3cf6,	// (0x0006a4c6) bg_sp_fs_schedule_viewer_highlight_g4

0x3fe3,	// (0x0006a7b3) bg_sp_fs_schedule_viewer_highlight_g5

0x3d06,	// (0x0006a4d6) bg_sp_fs_schedule_viewer_highlight_g6

0x3d0e,	// (0x0006a4de) bg_sp_fs_schedule_viewer_highlight_g7

0x3d16,	// (0x0006a4e6) bg_sp_fs_schedule_viewer_highlight_g8

0x0291,	// (0x00066a61) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x000765a2) bg_sp_fs_schedule_viewer_highlight_g

0x6e53,	// (0x0006d623) bg_main_sp_fs_ribbon_pane

0xe02c,	// (0x000747fc) main_sp_fs_ribbon_pane_g1

0x2fa4,	// (0x00069774) main_sp_fs_ribbon_pane_t1

0xe035,	// (0x00074805) main_sp_fs_ribbon_pane_t2

0x2fb3,	// (0x00069783) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x000765b5) main_sp_fs_ribbon_pane_t

0x2fc2,	// (0x00069792) main_sp_fs_ribbon_scheduler_pane

0x2fca,	// (0x0006979a) bg_main_sp_fs_ribbon_pane_g1

0x2fd3,	// (0x000697a3) bg_main_sp_fs_ribbon_pane_g2

0x2fdc,	// (0x000697ac) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x000765bc) bg_main_sp_fs_ribbon_pane_g

0x2fe4,	// (0x000697b4) main_sp_fs_ribbon_scheduler_pane_g1

0x2fed,	// (0x000697bd) main_sp_fs_ribbon_scheduler_pane_g2

0x2ff6,	// (0x000697c6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x000765c3) main_sp_fs_ribbon_scheduler_pane_g

0x2fff,	// (0x000697cf) list_cale_mrui_pane

0xe044,	// (0x00074814) sp_fs_scroll_pane_cp07_ParamLimits

0xe044,	// (0x00074814) sp_fs_scroll_pane_cp07

0xe05a,	// (0x0007482a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe05a,	// (0x0007482a) bg_sp_fs_schedule_viewer_highlight

0x3008,	// (0x000697d8) list_single_sp_fs_schedule_track_pane_cp01

0x3010,	// (0x000697e0) list_sp_fs_schedule_track_pane

0x3018,	// (0x000697e8) sp_fs_scroll_pane_cp06_ParamLimits

0x3018,	// (0x000697e8) sp_fs_scroll_pane_cp06

0x2338,	// (0x00068b08) bgmain_sp_fs_calendar_pane_g1

0x6b82,	// (0x0006d352) list_single_cale_mrui_pane_ParamLimits

0x6b82,	// (0x0006d352) list_single_cale_mrui_pane

0x6ba9,	// (0x0006d379) list_single_cale_mrui_row_pane_ParamLimits

0x6ba9,	// (0x0006d379) list_single_cale_mrui_row_pane

0x6bb6,	// (0x0006d386) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6bb6,	// (0x0006d386) list_single_cale_mrui_row_pane_g1

0x6bee,	// (0x0006d3be) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6bee,	// (0x0006d3be) list_single_cale_mrui_row_pane_t1

0x6c00,	// (0x0006d3d0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6c00,	// (0x0006d3d0) list_single_cale_mrui_row_pane_t2

0x6c66,	// (0x0006d436) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6c66,	// (0x0006d436) list_single_cale_mrui_row_pane_t3

0x6c95,	// (0x0006d465) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6c95,	// (0x0006d465) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x000765d1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x000765d1) list_single_cale_mrui_row_pane_t

0x6cc4,	// (0x0006d494) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6cc4,	// (0x0006d494) list_single_cmail_header_editor_pane_bg_cp01

0x6ce6,	// (0x0006d4b6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6ce6,	// (0x0006d4b6) list_single_cmail_header_editor_pane_bg_cp02

0xe067,	// (0x00074837) main_radioblah_text_pane_t1_ParamLimits

0xe067,	// (0x00074837) main_radioblah_text_pane_t1

0x310f,	// (0x000698df) cam6_indi_pane_cp01

0x3117,	// (0x000698e7) cam6_mode_pane_cp01

0x311f,	// (0x000698ef) cam6_pano_pane

0x3128,	// (0x000698f8) cam6_zoom_pane_cp01

0x3132,	// (0x00069902) cam6_pano_image_pane

0x313b,	// (0x0006990b) cam6_pano_pane_g1

0x49c7,	// (0x0006b197) cam6_pano_pane_g2

0x3144,	// (0x00069914) cam6_pano_pane_g3

0x314d,	// (0x0006991d) cam6_pano_pane_g4

0x28bc,	// (0x0006908c) cam6_pano_pane_g5

0x3156,	// (0x00069926) cam6_pano_pane_g6

0x315e,	// (0x0006992e) cam6_pano_pane_g7

0x3166,	// (0x00069936) cam6_pano_pane_g8

0x316f,	// (0x0006993f) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x000765da) cam6_pano_pane_g

0x6e53,	// (0x0006d623) main_browser_tag_pane

0x2e81,	// (0x00069651) grid_navstr_albumart_pane

0x317a,	// (0x0006994a) cell_navstr_albumart_pane_ParamLimits

0x317a,	// (0x0006994a) cell_navstr_albumart_pane

0x3196,	// (0x00069966) cell_navstr_albumart_pane_g1

0x1c1c,	// (0x000683ec) cell_navstr_albumart_pane_g2

0x1c2c,	// (0x000683fc) cell_navstr_albumart_pane_g3

0x1c24,	// (0x000683f4) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x000765ed) cell_navstr_albumart_pane_g

0xe081,	// (0x00074851) bt_list_pane_ParamLimits

0xe081,	// (0x00074851) bt_list_pane

0xe09a,	// (0x0007486a) bt_list_pane_t1

0xe0a9,	// (0x00074879) bt_list_pane_t2

0x0001,

0xfe26,	// (0x000765f6) bt_list_pane_t

0x6e53,	// (0x0006d623) main_cale_prevew_pane

0xe0b8,	// (0x00074888) popup_cale_preview_window_ParamLimits

0xe0b8,	// (0x00074888) popup_cale_preview_window

0xa05d,	// (0x0007082d) bg_popup_preview_window_pane_cp05_ParamLimits

0xa05d,	// (0x0007082d) bg_popup_preview_window_pane_cp05

0x319e,	// (0x0006996e) list_cale_preview_pane_ParamLimits

0x319e,	// (0x0006996e) list_cale_preview_pane

0xe0d3,	// (0x000748a3) list_double_cale_preview_pane_ParamLimits

0xe0d3,	// (0x000748a3) list_double_cale_preview_pane

0xe0e7,	// (0x000748b7) list_single_cale_preview_pane_ParamLimits

0xe0e7,	// (0x000748b7) list_single_cale_preview_pane

0xe0ff,	// (0x000748cf) list_single_cale_preview_pane_g1

0xe107,	// (0x000748d7) list_single_cale_preview_pane_t1_ParamLimits

0xe107,	// (0x000748d7) list_single_cale_preview_pane_t1

0xe11c,	// (0x000748ec) list_double_cale_preview_pane_g1

0xe124,	// (0x000748f4) list_double_cale_preview_pane_t1_ParamLimits

0xe124,	// (0x000748f4) list_double_cale_preview_pane_t1

0xe139,	// (0x00074909) list_double_cale_preview_pane_t2_ParamLimits

0xe139,	// (0x00074909) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x000765fb) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x000765fb) list_double_cale_preview_pane_t

0x6e53,	// (0x0006d623) main_ezdial_pane

0xa05d,	// (0x0007082d) main_sp_fs_email_pane_ParamLimits

0xdd49,	// (0x00074519) cmail_ddmenu_btn01_pane_ParamLimits

0xdd49,	// (0x00074519) cmail_ddmenu_btn01_pane

0xdd66,	// (0x00074536) cmail_ddmenu_btn02_pane_ParamLimits

0xdd66,	// (0x00074536) cmail_ddmenu_btn02_pane

0xdd84,	// (0x00074554) cmail_ddmenu_btn03_pane_ParamLimits

0xdd84,	// (0x00074554) cmail_ddmenu_btn03_pane

0x6586,	// (0x0006cd56) main_sp_fs_ctrlbar_pane_ParamLimits

0x65a2,	// (0x0006cd72) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xde8f,	// (0x0007465f) list_cmail_body_pane_ParamLimits

0x2da5,	// (0x00069575) bg_button_pane_cp12

0x2dba,	// (0x0006958a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2dba,	// (0x0006958a) list_single_cmail_header_detail_pane_g3

0x6aea,	// (0x0006d2ba) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6aea,	// (0x0006d2ba) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0007657e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0007657e) list_single_cmail_header_detail_pane_t

0x6b3f,	// (0x0006d30f) phacti_term_pane_t2_ParamLimits

0x6b3f,	// (0x0006d30f) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00076588) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00076588) phacti_term_pane_t

0x31aa,	// (0x0006997a) aid_size_list_single_double

0xe151,	// (0x00074921) popup_ezdial_listscroll_window

0xe171,	// (0x00074941) popup_number_entry_window_cp01

0x0996,	// (0x00067166) bg_popup_call_pane_cp09

0x31b6,	// (0x00069986) ezdial_list_pane

0x31be,	// (0x0006998e) scroll_pane_cp23

0x2117,	// (0x000688e7) bg_button_pane_cp028_ParamLimits

0x2117,	// (0x000688e7) bg_button_pane_cp028

0xe17f,	// (0x0007494f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe17f,	// (0x0007494f) cmail_ddmenu_btn01_pane_g1

0xe18f,	// (0x0007495f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe18f,	// (0x0007495f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00076600) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00076600) cmail_ddmenu_btn01_pane_g

0x31c6,	// (0x00069996) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x31c6,	// (0x00069996) cmail_ddmenu_btn01_pane_t1

0x1e03,	// (0x000685d3) bg_button_pane_cp029_ParamLimits

0x1e03,	// (0x000685d3) bg_button_pane_cp029

0xe18f,	// (0x0007495f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe18f,	// (0x0007495f) cmail_ddmenu_btn02_pane_g1

0xe1a7,	// (0x00074977) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe1a7,	// (0x00074977) cmail_ddmenu_btn02_pane_t1

0x7100,	// (0x0006d8d0) bg_button_pane_cp031_ParamLimits

0x7100,	// (0x0006d8d0) bg_button_pane_cp031

0xe18f,	// (0x0007495f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe18f,	// (0x0007495f) cmail_ddmenu_btn03_pane_g1

0xe1a7,	// (0x00074977) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe1a7,	// (0x00074977) cmail_ddmenu_btn03_pane_t1

0xbc6c,	// (0x0007243c) cell_dialer2_keypad_pane_t1_ParamLimits

0xbc86,	// (0x00072456) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbc86,	// (0x00072456) cell_dialer2_keypad_pane_t1_copy1

0xd725,	// (0x00073ef5) ncimui_group_button_pane

0xa05d,	// (0x0007082d) main_sp_fs_calendar_pane_ParamLimits

0xdea4,	// (0x00074674) list_single_cmail_header_caption_pane_ParamLimits

0xea9c,	// (0x0007526c) aid_recal_txt_sm_pane

0x6e53,	// (0x0006d623) mian_recal_day_pane

0x2f6a,	// (0x0006973a) popup_sp_fs_cale_preview_window_ParamLimits

0x6e53,	// (0x0006d623) list_recal_day_pane

0x31f4,	// (0x000699c4) list_single_recal_day_pane_ParamLimits

0x31f4,	// (0x000699c4) list_single_recal_day_pane

0x3206,	// (0x000699d6) list_single_recal_day_pane_g1_ParamLimits

0x3206,	// (0x000699d6) list_single_recal_day_pane_g1

0x3212,	// (0x000699e2) list_single_recal_day_pane_g2_ParamLimits

0x3212,	// (0x000699e2) list_single_recal_day_pane_g2

0x3222,	// (0x000699f2) list_single_recal_day_pane_g3_ParamLimits

0x3222,	// (0x000699f2) list_single_recal_day_pane_g3

0xe1cb,	// (0x0007499b) list_single_recal_day_pane_g4_ParamLimits

0xe1cb,	// (0x0007499b) list_single_recal_day_pane_g4

0x322e,	// (0x000699fe) list_single_recal_day_pane_g5_ParamLimits

0x322e,	// (0x000699fe) list_single_recal_day_pane_g5

0x323e,	// (0x00069a0e) list_single_recal_day_pane_g6_ParamLimits

0x323e,	// (0x00069a0e) list_single_recal_day_pane_g6

0x0004,

0xfe3f,	// (0x0007660f) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0007660f) list_single_recal_day_pane_g

0x3255,	// (0x00069a25) list_single_recal_day_pane_t1

0x3267,	// (0x00069a37) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x0007661a) list_single_recal_day_pane_t

0xe1eb,	// (0x000749bb) ncimui_query_button_pane_ParamLimits

0xe1eb,	// (0x000749bb) ncimui_query_button_pane

0xe1fb,	// (0x000749cb) ncimui_query_button_pane_t1_ParamLimits

0xe1fb,	// (0x000749cb) ncimui_query_button_pane_t1

0x327c,	// (0x00069a4c) ncimui_query_button_pane_t2_ParamLimits

0x327c,	// (0x00069a4c) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0007661f) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0007661f) ncimui_query_button_pane_t

0xe20e,	// (0x000749de) query_button_pane_ParamLimits

0xe20e,	// (0x000749de) query_button_pane

0x6e53,	// (0x0006d623) bg_button_pane_cp0028

0x328f,	// (0x00069a5f) query_button_pane_t1

0xa079,	// (0x00070849) main_tport_pane_ParamLimits

0xddb2,	// (0x00074582) bg_popup_window_pane_cp01_ParamLimits

0xddb2,	// (0x00074582) bg_popup_window_pane_cp01

0xddbf,	// (0x0007458f) heading_pane_cp08_ParamLimits

0xddbf,	// (0x0007458f) heading_pane_cp08

0xddcd,	// (0x0007459d) heading_pane_cp07_ParamLimits

0xddcd,	// (0x0007459d) heading_pane_cp07

0x2d70,	// (0x00069540) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x0007656b) cell_tport_appsw_pane_g

0x5f03,	// (0x0006c6d3) input_candi_list_open_g1

0x047a,	// (0x00066c4a) list_cale_time_pane_g6_ParamLimits

0x047a,	// (0x00066c4a) list_cale_time_pane_g6

0xaacd,	// (0x0007129d) aid_size_touch_calib_1_ParamLimits

0xaacd,	// (0x0007129d) aid_size_touch_calib_1

0xaad9,	// (0x000712a9) aid_size_touch_calib_2_ParamLimits

0xaad9,	// (0x000712a9) aid_size_touch_calib_2

0xaae7,	// (0x000712b7) aid_size_touch_calib_3_ParamLimits

0xaae7,	// (0x000712b7) aid_size_touch_calib_3

0xaaf7,	// (0x000712c7) aid_size_touch_calib_4_ParamLimits

0xaaf7,	// (0x000712c7) aid_size_touch_calib_4

0xab05,	// (0x000712d5) main_touch_calib_button_group_pane_ParamLimits

0xab05,	// (0x000712d5) main_touch_calib_button_group_pane

0xab13,	// (0x000712e3) main_touch_calib_pane_g1_ParamLimits

0xab1f,	// (0x000712ef) main_touch_calib_pane_g2_ParamLimits

0xab2b,	// (0x000712fb) main_touch_calib_pane_g3_ParamLimits

0xab37,	// (0x00071307) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00075f40) main_touch_calib_pane_g_ParamLimits

0xab43,	// (0x00071313) main_touch_calib_pane_t1_ParamLimits

0xab5a,	// (0x0007132a) main_touch_calib_pane_t2_ParamLimits

0xab71,	// (0x00071341) main_touch_calib_pane_t3_ParamLimits

0xab85,	// (0x00071355) main_touch_calib_pane_t4_ParamLimits

0xab9b,	// (0x0007136b) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00075f49) main_touch_calib_pane_t_ParamLimits

0x2686,	// (0x00068e56) list_single_fp_cale_pane_g3_ParamLimits

0x2686,	// (0x00068e56) list_single_fp_cale_pane_g3

0xa05d,	// (0x0007082d) bg_button_pane_cp012_ParamLimits

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp03_ParamLimits

0xca71,	// (0x00073241) cell_vitu2_function_top_pane_g1_ParamLimits

0xa05d,	// (0x0007082d) bg_vkb2_func_pane_cp04_ParamLimits

0xd6c1,	// (0x00073e91) main_ncimui_button_group_pane_ParamLimits

0xd6c1,	// (0x00073e91) main_ncimui_button_group_pane

0xd713,	// (0x00073ee3) main_ncimui_pane_t3_ParamLimits

0xd713,	// (0x00073ee3) main_ncimui_pane_t3

0x2e97,	// (0x00069667) phacti_button_group_pane

0x31aa,	// (0x0006997a) aid_size_list_single_double_ParamLimits

0xe151,	// (0x00074921) popup_ezdial_listscroll_window_ParamLimits

0xe171,	// (0x00074941) popup_number_entry_window_cp01_ParamLimits

0xe21b,	// (0x000749eb) phacti_button_pane_ParamLimits

0xe21b,	// (0x000749eb) phacti_button_pane

0x6e53,	// (0x0006d623) bg_button_pane_cp14

0x329d,	// (0x00069a6d) phacti_button_pane_t1

0xe22c,	// (0x000749fc) main_touch_calib_button_pane_ParamLimits

0xe22c,	// (0x000749fc) main_touch_calib_button_pane

0xef3a,	// (0x0007570a) bg_button_pane_cp18_ParamLimits

0xef3a,	// (0x0007570a) bg_button_pane_cp18

0x32ab,	// (0x00069a7b) main_touch_calib_button_pane_t1_ParamLimits

0x32ab,	// (0x00069a7b) main_touch_calib_button_pane_t1

0x32c1,	// (0x00069a91) main_touch_calib_button_pane_t2_ParamLimits

0x32c1,	// (0x00069a91) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x00076624) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x00076624) main_touch_calib_button_pane_t

0x6e53,	// (0x0006d623) cell_ncimui_button_pane

0x6e53,	// (0x0006d623) bg_button_pane_cp032

0x32df,	// (0x00069aaf) cell_ncimui_button_pane_t1

0xbce2,	// (0x000724b2) image3_infobar_pane_ParamLimits

0xbce2,	// (0x000724b2) image3_infobar_pane

0xda81,	// (0x00074251) fs_bigclock_status_pane_ParamLimits

0xda81,	// (0x00074251) fs_bigclock_status_pane

0xda8e,	// (0x0007425e) main_fs_bigclock_clock_pane_ParamLimits

0xda8e,	// (0x0007425e) main_fs_bigclock_clock_pane

0xdaa4,	// (0x00074274) main_fs_bigclock_indi_pane_ParamLimits

0xdaa4,	// (0x00074274) main_fs_bigclock_indi_pane

0xdad6,	// (0x000742a6) main_fs_bigclock_swipe_pane_ParamLimits

0xdad6,	// (0x000742a6) main_fs_bigclock_swipe_pane

0x6e53,	// (0x0006d623) main_fs_clock_dumped_data

0x4ae8,	// (0x0006b2b8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4ae8,	// (0x0006b2b8) list_single_fs_bigclock_indicator_pane_g1

0x4b12,	// (0x0006b2e2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4b12,	// (0x0006b2e2) list_single_fs_bigclock_indicator_pane_g2

0x4b2c,	// (0x0006b2fc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4b2c,	// (0x0006b2fc) list_single_fs_bigclock_indicator_pane_g3

0x4b46,	// (0x0006b316) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4b46,	// (0x0006b316) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x00076452) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x00076452) list_single_fs_bigclock_indicator_pane_g

0x4b71,	// (0x0006b341) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4b71,	// (0x0006b341) list_single_fs_bigclock_indicator_pane_t1

0x4b99,	// (0x0006b369) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4b99,	// (0x0006b369) list_single_fs_bigclock_indicator_pane_t2

0x4bc1,	// (0x0006b391) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4bc1,	// (0x0006b391) list_single_fs_bigclock_indicator_pane_t3

0x4be9,	// (0x0006b3b9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4be9,	// (0x0006b3b9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x0007645d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x0007645d) list_single_fs_bigclock_indicator_pane_t

0x32ed,	// (0x00069abd) image3_infobar_fav_pane_ParamLimits

0x32ed,	// (0x00069abd) image3_infobar_fav_pane

0x32fd,	// (0x00069acd) image3_infobar_loc_pane_ParamLimits

0x32fd,	// (0x00069acd) image3_infobar_loc_pane

0x3313,	// (0x00069ae3) image3_infobar_time_pane_ParamLimits

0x3313,	// (0x00069ae3) image3_infobar_time_pane

0x2338,	// (0x00068b08) image3_infobar_time_pane_g1

0x3323,	// (0x00069af3) image3_infobar_time_pane_t1

0x2338,	// (0x00068b08) image3_infobar_loc_pane_g1

0x3331,	// (0x00069b01) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x00076629) image3_infobar_loc_pane_g

0x3339,	// (0x00069b09) image3_infobar_loc_pane_t1

0x2338,	// (0x00068b08) image3_infobar_fav_pane_g1

0x3347,	// (0x00069b17) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x0007662e) image3_infobar_fav_pane_g

0x334f,	// (0x00069b1f) fs_bigclock_status_battery_pane

0x3358,	// (0x00069b28) fs_bigclock_status_signal_pane

0x3361,	// (0x00069b31) fs_bigclock_status_title_pane

0x336a,	// (0x00069b3a) fs_bigclock_status_signal_pane_g1

0x3373,	// (0x00069b43) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x00076633) fs_bigclock_status_signal_pane_g

0x337b,	// (0x00069b4b) fs_bigclock_status_battery_pane_g1

0x3384,	// (0x00069b54) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x00076638) fs_bigclock_status_battery_pane_g

0x338c,	// (0x00069b5c) fs_bigclock_status_title_pane_t1

0x2338,	// (0x00068b08) main_fs_bigclock_clock_pane_g1

0x339a,	// (0x00069b6a) main_fs_bigclock_clock_pane_g2

0x339a,	// (0x00069b6a) main_fs_bigclock_clock_pane_g3

0x339a,	// (0x00069b6a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x0007663d) main_fs_bigclock_clock_pane_g

0x33a2,	// (0x00069b72) main_fs_bigclock_clock_pane_t1

0x33b0,	// (0x00069b80) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x00076646) main_fs_bigclock_clock_pane_t

0xe23e,	// (0x00074a0e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe23e,	// (0x00074a0e) list_single_fs_bigclock_indicator_pane

0xe24f,	// (0x00074a1f) list_single_fs_bigclock_pane_ParamLimits

0xe24f,	// (0x00074a1f) list_single_fs_bigclock_pane

0x33c8,	// (0x00069b98) main_fs_bigclock_indicator_pane_t1

0x33d7,	// (0x00069ba7) list_single_fs_bigclock_pane_g1

0x33df,	// (0x00069baf) list_single_fs_bigclock_pane_t1

0x2338,	// (0x00068b08) main_fs_bigclock_swipe_pane_g1

0x3422,	// (0x00069bf2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x00076657) main_fs_bigclock_swipe_pane_g

0x342a,	// (0x00069bfa) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x342a,	// (0x00069bfa) main_fs_bigclock_swipe_pane_t1

0x8f9a,	// (0x0006f76a) call_type_pane_ParamLimits

0x6e53,	// (0x0006d623) main_btmg_pane

0x6be2,	// (0x0006d3b2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6be2,	// (0x0006d3b2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfa,	// (0x000765ca) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x000765ca) list_single_cale_mrui_row_pane_g

0x31e4,	// (0x000699b4) list_recal_vselct_arw_lo_pane

0x31ec,	// (0x000699bc) list_recal_vselct_arw_up_pane

0xea93,	// (0x00075263) list_recal_vselct_pane

0x3447,	// (0x00069c17) btmg_button_pane

0xe2a5,	// (0x00074a75) main_btmg_pane_g1

0x6e53,	// (0x0006d623) bg_button_pane_cp044

0x3451,	// (0x00069c21) btmg_button_pane_t1

0x1dfb,	// (0x000685cb) aid_listscroll_gen

0xa05d,	// (0x0007082d) main_cntbar_detail_pane

0x2d86,	// (0x00069556) list_cmail_folder_pane

0x2d96,	// (0x00069566) sp_fs_scroll_pane_cp03_ParamLimits

0x6d02,	// (0x0006d4d2) list_single_fs_dyc_pane_cp01_ParamLimits

0x6d02,	// (0x0006d4d2) list_single_fs_dyc_pane_cp01

0x345f,	// (0x00069c2f) aid_size_cmail_indent

0x6d19,	// (0x0006d4e9) list_single_dyc_row_pane_cp01

0xe2cd,	// (0x00074a9d) cntbar_detail_list_pane_ParamLimits

0xe2cd,	// (0x00074a9d) cntbar_detail_list_pane

0xe30d,	// (0x00074add) main_cntbar_detail_cont_pane_ParamLimits

0xe30d,	// (0x00074add) main_cntbar_detail_cont_pane

0x8f8e,	// (0x0006f75e) scroll_pane_cp032_ParamLimits

0x8f8e,	// (0x0006f75e) scroll_pane_cp032

0xe319,	// (0x00074ae9) cntbar_detail_list_event_pane_ParamLimits

0xe319,	// (0x00074ae9) cntbar_detail_list_event_pane

0xe2db,	// (0x00074aab) cntbar_detail_list_shct_pane

0x02ff,	// (0x00066acf) aid_list_gen

0x3471,	// (0x00069c41) aid_scroll

0x347a,	// (0x00069c4a) aid_size_touch_scroll_bar

0xe329,	// (0x00074af9) aid_list_double

0x3483,	// (0x00069c53) aid_list_single

0xe332,	// (0x00074b02) aid_list_single_lg

0x6d22,	// (0x0006d4f2) aid_list_z_g_a_sm

0xe33b,	// (0x00074b0b) aid_list_z_g_d

0x6d2a,	// (0x0006d4fa) aid_txt_z_prm

0x6d38,	// (0x0006d508) aid_txt_z_prm_cp01

0x6d46,	// (0x0006d516) aid_txt_z_sec

0xe343,	// (0x00074b13) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe343,	// (0x00074b13) main_cntbar_detail_cont_pane_g1

0xe350,	// (0x00074b20) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe350,	// (0x00074b20) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x0007665c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x0007665c) main_cntbar_detail_cont_pane_g

0x34aa,	// (0x00069c7a) main_cntbar_detail_cont_pane_t1

0x34b8,	// (0x00069c88) main_cntbar_detail_cont_pane_t2

0x34c6,	// (0x00069c96) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x00076661) main_cntbar_detail_cont_pane_t

0xe35c,	// (0x00074b2c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe35c,	// (0x00074b2c) cell_cntbar_detail_list_shct_pane

0x34d4,	// (0x00069ca4) cntbar_detail_list_shct_pane_g1

0x34dd,	// (0x00069cad) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x00076668) cntbar_detail_list_shct_pane_g

0xe370,	// (0x00074b40) cntbar_detail_list_event_pane_g1_ParamLimits

0xe370,	// (0x00074b40) cntbar_detail_list_event_pane_g1

0xe37c,	// (0x00074b4c) cntbar_detail_list_event_pane_g2_ParamLimits

0xe37c,	// (0x00074b4c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x0007666d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x0007666d) cntbar_detail_list_event_pane_g

0xe3ea,	// (0x00074bba) cntbar_detail_list_event_pane_t1_ParamLimits

0xe3ea,	// (0x00074bba) cntbar_detail_list_event_pane_t1

0xe3ff,	// (0x00074bcf) cntbar_detail_list_event_pane_t2_ParamLimits

0xe3ff,	// (0x00074bcf) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x0007667a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x0007667a) cntbar_detail_list_event_pane_t

0x2338,	// (0x00068b08) cell_cntbar_detail_list_shct_pane_g1

0x936d,	// (0x0006fb3d) navi_pane_mv_g3

0xa05d,	// (0x0007082d) main_cntbar_detail_pane_ParamLimits

0x6e53,	// (0x0006d623) main_notif_wgt_pane

0xb98c,	// (0x0007215c) aid_tch_main_mp4_pane_g4

0xbbcb,	// (0x0007239b) popup_slider_window_cp02

0x31db,	// (0x000699ab) list_recal_day_event_pane

0xe2ad,	// (0x00074a7d) cntbar_detail_btn_pane_ParamLimits

0xe2ad,	// (0x00074a7d) cntbar_detail_btn_pane

0xe2bd,	// (0x00074a8d) cntbar_detail_btn_pane_cp01_ParamLimits

0xe2bd,	// (0x00074a8d) cntbar_detail_btn_pane_cp01

0xe2db,	// (0x00074aab) cntbar_detail_list_shct_pane_ParamLimits

0xe2e7,	// (0x00074ab7) cntbar_detail_pane_g1_ParamLimits

0xe2e7,	// (0x00074ab7) cntbar_detail_pane_g1

0xe2f7,	// (0x00074ac7) cntbar_detail_pane_t1_ParamLimits

0xe2f7,	// (0x00074ac7) cntbar_detail_pane_t1

0xe388,	// (0x00074b58) cntbar_detail_list_event_pane_g3_ParamLimits

0xe388,	// (0x00074b58) cntbar_detail_list_event_pane_g3

0xe3a0,	// (0x00074b70) cntbar_detail_list_event_pane_g4_ParamLimits

0xe3a0,	// (0x00074b70) cntbar_detail_list_event_pane_g4

0xe3b8,	// (0x00074b88) cntbar_detail_list_event_pane_g5_ParamLimits

0xe3b8,	// (0x00074b88) cntbar_detail_list_event_pane_g5

0xe3d0,	// (0x00074ba0) cntbar_detail_list_event_pane_g6_ParamLimits

0xe3d0,	// (0x00074ba0) cntbar_detail_list_event_pane_g6

0xe414,	// (0x00074be4) cntbar_detail_list_event_pane_t3_ParamLimits

0xe414,	// (0x00074be4) cntbar_detail_list_event_pane_t3

0xe426,	// (0x00074bf6) popup_notif_wgt_window_ParamLimits

0xe426,	// (0x00074bf6) popup_notif_wgt_window

0xe436,	// (0x00074c06) popup_submenu_window_cp01_ParamLimits

0xe436,	// (0x00074c06) popup_submenu_window_cp01

0x0996,	// (0x00067166) bg_popup_window_pane_cp10

0x34e6,	// (0x00069cb6) listscroll_notif_wgt_pane

0x34f0,	// (0x00069cc0) list_notif_wgt_window

0x34f9,	// (0x00069cc9) scroll_pane_cp033

0x3502,	// (0x00069cd2) list_notif_wgt_row_pane_ParamLimits

0x3502,	// (0x00069cd2) list_notif_wgt_row_pane

0x3516,	// (0x00069ce6) aid_size_list_notif_wgt_del

0x351f,	// (0x00069cef) list_notif_wgt_row_pane_g1

0x3527,	// (0x00069cf7) list_notif_wgt_row_pane_g2

0x352f,	// (0x00069cff) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x00076681) list_notif_wgt_row_pane_g

0x3538,	// (0x00069d08) list_notif_wgt_row_pane_t1

0x3546,	// (0x00069d16) list_notif_wgt_row_pane_t2

0x3554,	// (0x00069d24) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00076688) list_notif_wgt_row_pane_t

0x3ffd,	// (0x0006a7cd) list_recal_day_event_pane_g1

0x3562,	// (0x00069d32) list_recal_day_event_pane_t1

0x6e53,	// (0x0006d623) bg_button_pane_cp045

0x3571,	// (0x00069d41) cntbar_detail_btn_pane_t1

0x1e03,	// (0x000685d3) main_callh_pane_ParamLimits

0x1e03,	// (0x000685d3) main_callh_pane

0x6e53,	// (0x0006d623) main_coverflow0_pane

0x6e53,	// (0x0006d623) main_wgtman_pane

0xdaee,	// (0x000742be) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdaee,	// (0x000742be) main_fs_bigclock_unlock_btn_pane

0x2d68,	// (0x00069538) bg_button_pane_cp16

0xde38,	// (0x00074608) cell_tport_appsw_pane_g3

0xe446,	// (0x00074c16) cf0_flow_pane_ParamLimits

0xe446,	// (0x00074c16) cf0_flow_pane

0x357f,	// (0x00069d4f) listscroll_cf0_pane

0x3588,	// (0x00069d58) main_cf0_pane_g1

0xe455,	// (0x00074c25) main_cf0_pane_t1_ParamLimits

0xe455,	// (0x00074c25) main_cf0_pane_t1

0xe469,	// (0x00074c39) main_cf0_pane_t2_ParamLimits

0xe469,	// (0x00074c39) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0007668f) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0007668f) main_cf0_pane_t

0x3592,	// (0x00069d62) scroll_pane_cp11

0xe47d,	// (0x00074c4d) cf0_flow_pane_g1

0xe485,	// (0x00074c55) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x00076694) cf0_flow_pane_g

0xe48d,	// (0x00074c5d) cf0_flow_pane_t1

0x6e53,	// (0x0006d623) main_call6_pane

0x6e53,	// (0x0006d623) main_calllock_pane

0xe49b,	// (0x00074c6b) call6_btn_grp_pane_ParamLimits

0xe49b,	// (0x00074c6b) call6_btn_grp_pane

0xe4a8,	// (0x00074c78) call6_pane_g1_ParamLimits

0xe4a8,	// (0x00074c78) call6_pane_g1

0xe4b8,	// (0x00074c88) popup_call6_1st_window_ParamLimits

0xe4b8,	// (0x00074c88) popup_call6_1st_window

0xe4c6,	// (0x00074c96) popup_call6_2nd_window_ParamLimits

0xe4c6,	// (0x00074c96) popup_call6_2nd_window

0xe4d4,	// (0x00074ca4) cell_call6_btn_pane_ParamLimits

0xe4d4,	// (0x00074ca4) cell_call6_btn_pane

0x0996,	// (0x00067166) bg_popup_call2_in_pane_cp03

0x359d,	// (0x00069d6d) popup_call6_1st_window_g1

0x35a5,	// (0x00069d75) popup_call6_1st_window_g2

0x35ad,	// (0x00069d7d) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00076699) popup_call6_1st_window_g

0x35b5,	// (0x00069d85) popup_call6_1st_window_t1

0x35c4,	// (0x00069d94) popup_call6_1st_window_t2

0x35d4,	// (0x00069da4) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x000766a0) popup_call6_1st_window_t

0x0996,	// (0x00067166) bg_popup_call2_in_pane_cp04

0x359d,	// (0x00069d6d) popup_call6_2nd_window_g1

0x35a5,	// (0x00069d75) popup_call6_2nd_window_g2

0x35ad,	// (0x00069d7d) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00076699) popup_call6_2nd_window_g

0x35b5,	// (0x00069d85) popup_call6_2nd_window_t1

0x6e53,	// (0x0006d623) bg_button_pane_cp15

0x35e4,	// (0x00069db4) cell_call6_btn_pane_g1

0x35ed,	// (0x00069dbd) cell_call6_btn_pane_t1

0xe4e3,	// (0x00074cb3) listscroll_wgtman_pane_ParamLimits

0xe4e3,	// (0x00074cb3) listscroll_wgtman_pane

0xe501,	// (0x00074cd1) wgtman_btn_pane_ParamLimits

0xe501,	// (0x00074cd1) wgtman_btn_pane

0x085c,	// (0x0006702c) aid_scroll_copy1

0x35fc,	// (0x00069dcc) list_wgtman_pane

0xe536,	// (0x00074d06) wgtman_btn_pane_g1_ParamLimits

0xe536,	// (0x00074d06) wgtman_btn_pane_g1

0xe55e,	// (0x00074d2e) wgtman_btn_pane_t1_ParamLimits

0xe55e,	// (0x00074d2e) wgtman_btn_pane_t1

0x3606,	// (0x00069dd6) wgtman_btn_pane_t2_ParamLimits

0x3606,	// (0x00069dd6) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x000766a7) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x000766a7) wgtman_btn_pane_t

0xe595,	// (0x00074d65) listrow_wgtman_pane_ParamLimits

0xe595,	// (0x00074d65) listrow_wgtman_pane

0xe5a6,	// (0x00074d76) listrow_wgtman_pane_g1

0xe5af,	// (0x00074d7f) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x000766ac) listrow_wgtman_pane_g

0x6d54,	// (0x0006d524) listrow_wgtman_pane_t1

0x6d62,	// (0x0006d532) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x000766b1) listrow_wgtman_pane_t

0x6d70,	// (0x0006d540) wait_bar_pane_cp09

0x361d,	// (0x00069ded) main_calllock_btn_pane

0x3627,	// (0x00069df7) main_calllock_pane_g1

0x6e53,	// (0x0006d623) bg_button_pane_cp17

0x3633,	// (0x00069e03) main_calllock_btn_pane_g1

0x363c,	// (0x00069e0c) main_calllock_btn_pane_t1

0x6e53,	// (0x0006d623) main_dialer3_pane

0x6e53,	// (0x0006d623) main_fmrd2_pane

0x2338,	// (0x00068b08) main_fs_bigclock_unlock_btn_pane_g1

0x3653,	// (0x00069e23) main_fs_bigclock_unlock_btn_pane_t1

0xe5b9,	// (0x00074d89) area_fmrd2_info_pane_ParamLimits

0xe5b9,	// (0x00074d89) area_fmrd2_info_pane

0xe5c5,	// (0x00074d95) area_fmrd2_visual_pane_ParamLimits

0xe5c5,	// (0x00074d95) area_fmrd2_visual_pane

0xe5d3,	// (0x00074da3) fmrd2_indi_pane_ParamLimits

0xe5d3,	// (0x00074da3) fmrd2_indi_pane

0xe5e0,	// (0x00074db0) area_fmrd2_visual_pane_g1

0xe5e8,	// (0x00074db8) area_fmrd2_visual_pane_t1

0xe5f8,	// (0x00074dc8) area_fmrd2_visual_pane_t2

0xe608,	// (0x00074dd8) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x000766bb) area_fmrd2_visual_pane_t

0xe618,	// (0x00074de8) area_fmrd2_info_pane_g1

0xe620,	// (0x00074df0) area_fmrd2_info_pane_t1

0xe630,	// (0x00074e00) area_fmrd2_info_pane_t2

0xe640,	// (0x00074e10) area_fmrd2_info_pane_t3

0xe650,	// (0x00074e20) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x000766c2) area_fmrd2_info_pane_t

0xe660,	// (0x00074e30) fmrd2_indi_pane_t1

0xe670,	// (0x00074e40) fmrd2_indi_pane_t2

0xe680,	// (0x00074e50) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x000766cb) fmrd2_indi_pane_t

0x4b55,	// (0x0006b325) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4b55,	// (0x0006b325) list_single_fs_bigclock_indicator_pane_g5

0x4bfe,	// (0x0006b3ce) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4bfe,	// (0x0006b3ce) list_single_fs_bigclock_indicator_pane_t5

0xdfa3,	// (0x00074773) aid_cell_bcale_month_pane_ParamLimits

0xdfa3,	// (0x00074773) aid_cell_bcale_month_pane

0xdfaf,	// (0x0007477f) bcale_month_pane_ParamLimits

0xdfaf,	// (0x0007477f) bcale_month_pane

0xdfbf,	// (0x0007478f) bcale_preview_pane_ParamLimits

0xdfbf,	// (0x0007478f) bcale_preview_pane

0x33df,	// (0x00069baf) list_single_fs_bigclock_pane_t1_ParamLimits

0x33fe,	// (0x00069bce) list_single_fs_bigclock_pane_t2_ParamLimits

0x33fe,	// (0x00069bce) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x00076652) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00076652) list_single_fs_bigclock_pane_t

0x364b,	// (0x00069e1b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x000766b6) main_fs_bigclock_unlock_btn_pane_g

0xe690,	// (0x00074e60) aid_dia3_key_size_ParamLimits

0xe690,	// (0x00074e60) aid_dia3_key_size

0xe69c,	// (0x00074e6c) aid_dia3_listrow_size_ParamLimits

0xe69c,	// (0x00074e6c) aid_dia3_listrow_size

0xe6aa,	// (0x00074e7a) dia3_keypad_fun_pane_ParamLimits

0xe6aa,	// (0x00074e7a) dia3_keypad_fun_pane

0xe6ba,	// (0x00074e8a) dia3_keypad_num_pane_ParamLimits

0xe6ba,	// (0x00074e8a) dia3_keypad_num_pane

0xe6ca,	// (0x00074e9a) dia3_listscroll_pane_ParamLimits

0xe6ca,	// (0x00074e9a) dia3_listscroll_pane

0xe6da,	// (0x00074eaa) dia3_numentry_pane_ParamLimits

0xe6da,	// (0x00074eaa) dia3_numentry_pane

0x3661,	// (0x00069e31) dia3_list_pane

0x366c,	// (0x00069e3c) scroll_pane_cp12

0x6e53,	// (0x0006d623) bg_dia3_numentry_pane

0x3677,	// (0x00069e47) dia3_numentry_pane_t1

0xe6ea,	// (0x00074eba) cell_dia3_key_num_pane

0xe6f2,	// (0x00074ec2) cell_dia3_key0_fun_pane_ParamLimits

0xe6f2,	// (0x00074ec2) cell_dia3_key0_fun_pane

0xe6ff,	// (0x00074ecf) cell_dia3_key1_fun_pane_ParamLimits

0xe6ff,	// (0x00074ecf) cell_dia3_key1_fun_pane

0xe70c,	// (0x00074edc) dia3_listrow_pane

0x483f,	// (0x0006b00f) bg_dia3_numentry_pane_g1

0x6e53,	// (0x0006d623) bg_button_pane_cp21

0x3686,	// (0x00069e56) cell_dia3_key_num_pane_t1

0x3694,	// (0x00069e64) cell_dia3_key_num_pane_t2

0x36a3,	// (0x00069e73) cell_dia3_key_num_pane_t3

0x36b2,	// (0x00069e82) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x000766d2) cell_dia3_key_num_pane_t

0x6e53,	// (0x0006d623) bg_button_pane_cp19

0xe719,	// (0x00074ee9) cell_dia3_key0_fun_pane_g1

0x6e53,	// (0x0006d623) bg_button_pane_cp20

0xe721,	// (0x00074ef1) cell_dia3_key1_fun_pane_g1

0xe729,	// (0x00074ef9) area_left_week_number_pane

0xe732,	// (0x00074f02) area_top_day_name_pane

0xe73b,	// (0x00074f0b) frame_month_view_pane

0xe745,	// (0x00074f15) grid_month_view_pane

0xe74f,	// (0x00074f1f) cell_top_day_name_pane_ParamLimits

0xe74f,	// (0x00074f1f) cell_top_day_name_pane

0xe76b,	// (0x00074f3b) cell_area_left_week_number_pane_ParamLimits

0xe76b,	// (0x00074f3b) cell_area_left_week_number_pane

0xe77f,	// (0x00074f4f) cell_month_view_pane_ParamLimits

0xe77f,	// (0x00074f4f) cell_month_view_pane

0x36c1,	// (0x00069e91) frm_month_g1

0xe79e,	// (0x00074f6e) frm_month_g2

0xe7a8,	// (0x00074f78) frm_month_g3

0xe7b2,	// (0x00074f82) frm_month_g4

0xe7bc,	// (0x00074f8c) frm_month_g5

0xe7c6,	// (0x00074f96) frm_month_g6

0xe7d0,	// (0x00074fa0) frm_month_g7

0x36ca,	// (0x00069e9a) frm_month_g8

0xe7da,	// (0x00074faa) frm_month_g9

0xe7e3,	// (0x00074fb3) frm_month_g10

0xe7ec,	// (0x00074fbc) frm_month_g11

0xe7f5,	// (0x00074fc5) frm_month_g12

0xe7fe,	// (0x00074fce) frm_month_g13

0xe809,	// (0x00074fd9) frm_month_g14

0xe814,	// (0x00074fe4) frm_month_g15

0xe81f,	// (0x00074fef) frm_month_g16

0x000f,

0xff0b,	// (0x000766db) frm_month_g

0xe82a,	// (0x00074ffa) cell_top_day_name_pane_t1

0xe839,	// (0x00075009) cell_area_left_week_number_pane_g1

0xe82a,	// (0x00074ffa) cell_area_left_week_number_pane_t1

0x2338,	// (0x00068b08) cell_month_view_pane_g1

0xe841,	// (0x00075011) cell_month_view_pane_t1

0x6e53,	// (0x0006d623) main_fps_pane

0x4dee,	// (0x0006b5be) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4dee,	// (0x0006b5be) cmail_ddmenu_btn02_pane_cp1

0x4e0a,	// (0x0006b5da) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4e0a,	// (0x0006b5da) cmail_ddmenu_btn02_pane_cp2

0xe19b,	// (0x0007496b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe19b,	// (0x0007496b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00076605) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00076605) cmail_ddmenu_btn02_pane_g

0xe1b9,	// (0x00074989) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe1b9,	// (0x00074989) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0007660a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0007660a) cmail_ddmenu_btn02_pane_t

0xe850,	// (0x00075020) fps_text_pane_ParamLimits

0xe850,	// (0x00075020) fps_text_pane

0xe85d,	// (0x0007502d) main_fps_pane_g1_ParamLimits

0xe85d,	// (0x0007502d) main_fps_pane_g1

0xe869,	// (0x00075039) wait_bar_pane_cp010_ParamLimits

0xe869,	// (0x00075039) wait_bar_pane_cp010

0xe875,	// (0x00075045) fps_text_pane_t1_ParamLimits

0xe875,	// (0x00075045) fps_text_pane_t1

0xbff1,	// (0x000727c1) cam4_image_uncrop_pane_g1

0xbffa,	// (0x000727ca) cam4_image_uncrop_pane_g2

0xc003,	// (0x000727d3) cam4_image_uncrop_pane_g3

0xc00c,	// (0x000727dc) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x000760d8) cam4_image_uncrop_pane_g

0xe70c,	// (0x00074edc) dia3_listrow_pane_ParamLimits

0x6e53,	// (0x0006d623) main_phob2_pane

0xde12,	// (0x000745e2) cell_tport_appsw_pane_cp02_ParamLimits

0xde12,	// (0x000745e2) cell_tport_appsw_pane_cp02

0xde21,	// (0x000745f1) cell_tport_appsw_pane_cp03_ParamLimits

0xde21,	// (0x000745f1) cell_tport_appsw_pane_cp03

0x6e53,	// (0x0006d623) phob2_contact_card_pane

0x6e53,	// (0x0006d623) phob2_listscroll_pane

0x36d3,	// (0x00069ea3) phob2_list_pane

0x36db,	// (0x00069eab) scroll_pane_cp034

0xe88e,	// (0x0007505e) phob2_cc_data_pane_ParamLimits

0xe88e,	// (0x0007505e) phob2_cc_data_pane

0xe8aa,	// (0x0007507a) phob2_cc_listscroll_pane_ParamLimits

0xe8aa,	// (0x0007507a) phob2_cc_listscroll_pane

0xe8c6,	// (0x00075096) list_double_large_graphic_phob2_pane_ParamLimits

0xe8c6,	// (0x00075096) list_double_large_graphic_phob2_pane

0xe8de,	// (0x000750ae) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe8de,	// (0x000750ae) list_double_large_graphic_phob2_pane_g1

0x6d78,	// (0x0006d548) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6d78,	// (0x0006d548) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x000766fc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x000766fc) list_double_large_graphic_phob2_pane_g

0x6d84,	// (0x0006d554) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6d84,	// (0x0006d554) list_double_large_graphic_phob2_pane_t1

0x6d99,	// (0x0006d569) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6d99,	// (0x0006d569) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x00076701) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x00076701) list_double_large_graphic_phob2_pane_t

0x6e53,	// (0x0006d623) list_highlight_pane_cp024

0x36e3,	// (0x00069eb3) phob2_cc_button_pane

0xe8eb,	// (0x000750bb) phob2_cc_data_pane_g1_ParamLimits

0xe8eb,	// (0x000750bb) phob2_cc_data_pane_g1

0xe8f7,	// (0x000750c7) phob2_cc_data_pane_g2_ParamLimits

0xe8f7,	// (0x000750c7) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x00076706) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x00076706) phob2_cc_data_pane_g

0xe903,	// (0x000750d3) phob2_cc_data_pane_t1_ParamLimits

0xe903,	// (0x000750d3) phob2_cc_data_pane_t1

0xe915,	// (0x000750e5) phob2_cc_data_pane_t2_ParamLimits

0xe915,	// (0x000750e5) phob2_cc_data_pane_t2

0xe927,	// (0x000750f7) phob2_cc_data_pane_t3_ParamLimits

0xe927,	// (0x000750f7) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x0007670b) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x0007670b) phob2_cc_data_pane_t

0x36eb,	// (0x00069ebb) phob2_cc_list_pane_ParamLimits

0x36eb,	// (0x00069ebb) phob2_cc_list_pane

0x43f2,	// (0x0006abc2) scroll_pane_cp035_ParamLimits

0x43f2,	// (0x0006abc2) scroll_pane_cp035

0xa05d,	// (0x0007082d) bg_button_pane_cp033

0x36f7,	// (0x00069ec7) phob2_cc_button_pane_g1

0x3703,	// (0x00069ed3) phob2_cc_button_pane_t1

0x3718,	// (0x00069ee8) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x00076712) phob2_cc_button_pane_t

0xe939,	// (0x00075109) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe939,	// (0x00075109) list_double_large_graphic_phob2_cc_pane

0xe955,	// (0x00075125) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe955,	// (0x00075125) list_double_large_graphic_phob2_cc_pane_g1

0x6dab,	// (0x0006d57b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6dab,	// (0x0006d57b) list_double_large_graphic_phob2_cc_pane_g2

0x6dba,	// (0x0006d58a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6dba,	// (0x0006d58a) list_double_large_graphic_phob2_cc_pane_g3

0x6dc9,	// (0x0006d599) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6dc9,	// (0x0006d599) list_double_large_graphic_phob2_cc_pane_g4

0x6dda,	// (0x0006d5aa) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6dda,	// (0x0006d5aa) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x00076717) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x00076717) list_double_large_graphic_phob2_cc_pane_g

0x6de9,	// (0x0006d5b9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6de9,	// (0x0006d5b9) list_double_large_graphic_phob2_cc_pane_t1

0x6e12,	// (0x0006d5e2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6e12,	// (0x0006d5e2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x00076722) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x00076722) list_double_large_graphic_phob2_cc_pane_t

0x372a,	// (0x00069efa) list_highlight_pane_cp025_ParamLimits

0x372a,	// (0x00069efa) list_highlight_pane_cp025

0xa05d,	// (0x0007082d) bg_button_pane_cp033_ParamLimits

0x36f7,	// (0x00069ec7) phob2_cc_button_pane_g1_ParamLimits

0x3703,	// (0x00069ed3) phob2_cc_button_pane_t1_ParamLimits

0x3718,	// (0x00069ee8) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x00076712) phob2_cc_button_pane_t_ParamLimits

0x710e,	// (0x0006d8de) popup_wgtman_window

0x3ed7,	// (0x0006a6a7) scroll_pane_cp038

0xe51e,	// (0x00074cee) wgtman_btn_pane_cp_01_ParamLimits

0xe51e,	// (0x00074cee) wgtman_btn_pane_cp_01

0x3738,	// (0x00069f08) wgtman_content_pane

0x3741,	// (0x00069f11) wgtman_heading_pane

0x6e53,	// (0x0006d623) bg_heading_pane_cp02

0x374a,	// (0x00069f1a) wgtman_heading_pane_g1

0x3752,	// (0x00069f22) wgtman_heading_pane_t1

0x3760,	// (0x00069f30) scroll_pane_cp036

0x3768,	// (0x00069f38) wgtman_list_pane

0x3770,	// (0x00069f40) wgtman_list_pane_t1_ParamLimits

0x3770,	// (0x00069f40) wgtman_list_pane_t1

0xbf4e,	// (0x0007271e) cam4_grid_pane

0x6161,	// (0x0006c931) bg_button_pane_cp015_ParamLimits

0xcbf2,	// (0x000733c2) bg_button_pane_cp016_ParamLimits

0xcc05,	// (0x000733d5) bg_button_pane_cp017_ParamLimits

0x61a5,	// (0x0006c975) popup_vitu2_query_window_g3_ParamLimits

0x61a5,	// (0x0006c975) popup_vitu2_query_window_g3

0x621e,	// (0x0006c9ee) popup_vitu2_query_window_t6_ParamLimits

0x621e,	// (0x0006c9ee) popup_vitu2_query_window_t6

0x6249,	// (0x0006ca19) popup_vitu2_query_window_t7_ParamLimits

0x6249,	// (0x0006ca19) popup_vitu2_query_window_t7

0x49d0,	// (0x0006b1a0) cam4_grid_pane_g1

0x49d9,	// (0x0006b1a9) cam4_grid_pane_g2

0x3793,	// (0x00069f63) cam4_grid_pane_g3

0x379c,	// (0x00069f6c) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x00076727) cam4_grid_pane_g

0x8038,	// (0x0006e808) aid_placing_vt_slider_lsc_ParamLimits

0x836b,	// (0x0006eb3b) vidtel_button_pane_ParamLimits

0x836b,	// (0x0006eb3b) vidtel_button_pane

0x37a7,	// (0x00069f77) bg_button_pane_cp034

0xe966,	// (0x00075136) vidtel_button_pane_g1

0x37b1,	// (0x00069f81) vidtel_button_pane_t1

0x3fdb,	// (0x0006a7ab) aid_size_vtel_slider_touch

0x43f2,	// (0x0006abc2) scroll_pane_cp039

0x487d,	// (0x0006b04d) ncim_query_button_pane_cp01_ParamLimits

0x489c,	// (0x0006b06c) ncimui_query_pane_g1_ParamLimits

0xa05d,	// (0x0007082d) input_focus_pane_cp012_ParamLimits

0x48c1,	// (0x0006b091) ncim_query_entry_pane_t1_ParamLimits

0x43f2,	// (0x0006abc2) scroll_pane_cp039_ParamLimits

0x92df,	// (0x0006faaf) navi_pane_bcale_mc_g1

0x92e7,	// (0x0006fab7) navi_pane_bcale_mc_t1

0x4e55,	// (0x0006b625) main_sp_fs_email_pane_g1

0x4e5d,	// (0x0006b62d) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x000764c3) main_sp_fs_email_pane_g

0x3092,	// (0x00069862) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3092,	// (0x00069862) list_single_cale_mrui_row_pane_g3

0xe1e1,	// (0x000749b1) list_single_recal_day_pane_g5_event_pane

0x324d,	// (0x00069a1d) list_single_recal_day_pane_g7

0x37bf,	// (0x00069f8f) list_recal_day_event_pane_cp01

0x37c8,	// (0x00069f98) list_recal_vselct_arw_lo_pane_cp01

0x37d0,	// (0x00069fa0) list_recal_vselct_arw_up_pane_cp01

0x37d8,	// (0x00069fa8) list_recal_vselct_pane_cp01

0x3ffd,	// (0x0006a7cd) list_recal_day_event_pane_cp01_g1

0x37e2,	// (0x00069fb2) list_recal_day_event_pane_cp01_t1

0x3255,	// (0x00069a25) list_single_recal_day_pane_t1_ParamLimits

0x3267,	// (0x00069a37) list_single_recal_day_pane_t2_ParamLimits

0xfe4a,	// (0x0007661a) list_single_recal_day_pane_t_ParamLimits

0xef0a,	// (0x000756da) bg_notes_pane_ParamLimits

0xef18,	// (0x000756e8) list_notes_pane_ParamLimits

0x762b,	// (0x0006ddfb) scroll_pane_cp06_ParamLimits

0xef3a,	// (0x0007570a) main_notes_pane_ParamLimits

0x6e53,	// (0x0006d623) main_welc_pane

0xe96e,	// (0x0007513e) main_welc_body_pane_ParamLimits

0xe96e,	// (0x0007513e) main_welc_body_pane

0xe97d,	// (0x0007514d) main_welc_opti_pane_ParamLimits

0xe97d,	// (0x0007514d) main_welc_opti_pane

0xe98c,	// (0x0007515c) main_welc_pane_t1_ParamLimits

0xe98c,	// (0x0007515c) main_welc_pane_t1

0xdfd0,	// (0x000747a0) main_welc_body_row_pane_ParamLimits

0xdfd0,	// (0x000747a0) main_welc_body_row_pane

0xe9a0,	// (0x00075170) main_welc_opti_row_pane_ParamLimits

0xe9a0,	// (0x00075170) main_welc_opti_row_pane

0x3807,	// (0x00069fd7) main_welc_opti_row_pane_g1

0x380f,	// (0x00069fdf) main_welc_opti_row_pane_t1

0x381e,	// (0x00069fee) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
