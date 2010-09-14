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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00067a6d };

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
0x6cb2,	// (0x0006e71f) Screen

0x6cbe,	// (0x0006e72b) application_window

0x6d12,	// (0x0006e77f) area_bottom_pane_ParamLimits

0x6d12,	// (0x0006e77f) area_bottom_pane

0x6d70,	// (0x0006e7dd) area_top_pane_ParamLimits

0x6d70,	// (0x0006e7dd) area_top_pane

0x6dd4,	// (0x0006e841) call_video_uplink_pane_ParamLimits

0x6dd4,	// (0x0006e841) call_video_uplink_pane

0x6e13,	// (0x0006e880) main_pane_ParamLimits

0x6e13,	// (0x0006e880) main_pane

0x1fbd,	// (0x00069a2a) context_pane

0x9dd3,	// (0x00071840) navi_pane

0x9dfc,	// (0x00071869) popup_cale_events_window_ParamLimits

0x9dfc,	// (0x00071869) popup_cale_events_window

0x1fd0,	// (0x00069a3d) popup_mup_playback_window

0x9e14,	// (0x00071881) signal_pane

0x50ed,	// (0x0006cb5a) main_browser_pane

0x0182,	// (0x00067bef) main_burst_pane

0x9c43,	// (0x000716b0) main_calc_pane

0x1f59,	// (0x000699c6) main_cale_day_pane

0x73bb,	// (0x0006ee28) main_cale_month_pane

0x1f59,	// (0x000699c6) main_cale_week_pane

0x0182,	// (0x00067bef) main_call_pane

0x4da5,	// (0x0006c812) main_call_poc_pane

0x0182,	// (0x00067bef) main_camera_pane

0x0182,	// (0x00067bef) main_chi_dic_pane

0x0a4c,	// (0x000684b9) main_clock_pane

0x4da5,	// (0x0006c812) main_fmradio_pane

0x0182,	// (0x00067bef) main_graph_messa_pane

0x4da5,	// (0x0006c812) main_help_pane

0x50ed,	// (0x0006cb5a) main_im_pane

0x5000,	// (0x0006ca6d) main_image_pane_ParamLimits

0x5000,	// (0x0006ca6d) main_image_pane

0x4da5,	// (0x0006c812) main_location2_pane

0x0182,	// (0x00067bef) main_location_pane

0x5000,	// (0x0006ca6d) main_messa_pane

0x4da5,	// (0x0006c812) main_mp2_pane

0x0182,	// (0x00067bef) main_mp_pane

0x4da5,	// (0x0006c812) main_msg_pane

0x4da5,	// (0x0006c812) main_mup_eq_pane

0x4da5,	// (0x0006c812) main_mup_pane

0x50ed,	// (0x0006cb5a) main_notes_pane

0x4da5,	// (0x0006c812) main_pec_pane

0x4da5,	// (0x0006c812) main_phob_pane

0x4da5,	// (0x0006c812) main_pinb_pane

0x4da5,	// (0x0006c812) main_postcard_pane

0x4da5,	// (0x0006c812) main_qdial_pane

0x0182,	// (0x00067bef) main_skin_pane

0x4da5,	// (0x0006c812) main_smil2_pane

0x0182,	// (0x00067bef) main_smil_pane

0x0182,	// (0x00067bef) main_video_pane

0x0182,	// (0x00067bef) main_video_tele_pane

0x5000,	// (0x0006ca6d) main_viewer_pane_ParamLimits

0x5000,	// (0x0006ca6d) main_viewer_pane

0x0182,	// (0x00067bef) main_vorec_pane

0x9c83,	// (0x000716f0) popup_blid_sat_info_window_ParamLimits

0x9c83,	// (0x000716f0) popup_blid_sat_info_window

0x9ca9,	// (0x00071716) popup_dyc_status_message_window_ParamLimits

0x9ca9,	// (0x00071716) popup_dyc_status_message_window

0x9cb9,	// (0x00071726) popup_grid_large_graphic_window_ParamLimits

0x9cb9,	// (0x00071726) popup_grid_large_graphic_window

0x9d4e,	// (0x000717bb) popup_loc_request_window_ParamLimits

0x9d4e,	// (0x000717bb) popup_loc_request_window

0x9da7,	// (0x00071814) popup_wml_address_window_ParamLimits

0x9da7,	// (0x00071814) popup_wml_address_window

0x9b1b,	// (0x00071588) call_muted_g1

0x9793,	// (0x00071200) popup_call_audio_conf_window_ParamLimits

0x9793,	// (0x00071200) popup_call_audio_conf_window

0x9b2b,	// (0x00071598) popup_call_audio_first_window_ParamLimits

0x9b2b,	// (0x00071598) popup_call_audio_first_window

0x9b6b,	// (0x000715d8) popup_call_audio_in_window_ParamLimits

0x9b6b,	// (0x000715d8) popup_call_audio_in_window

0x9b8f,	// (0x000715fc) popup_call_audio_out_window_ParamLimits

0x9b8f,	// (0x000715fc) popup_call_audio_out_window

0x9bb1,	// (0x0007161e) popup_call_audio_second_window_ParamLimits

0x9bb1,	// (0x0007161e) popup_call_audio_second_window

0x9be1,	// (0x0007164e) popup_call_audio_wait_window_ParamLimits

0x9be1,	// (0x0007164e) popup_call_audio_wait_window

0x9c02,	// (0x0007166f) popup_number_entry_window_ParamLimits

0x9c02,	// (0x0007166f) popup_number_entry_window

0x4564,	// (0x0006bfd1) bg_popup_call_pane_cp05_ParamLimits

0x4564,	// (0x0006bfd1) bg_popup_call_pane_cp05

0x4584,	// (0x0006bff1) popup_number_entry_window_t1

0x4597,	// (0x0006c004) popup_number_entry_window_t2

0x45a9,	// (0x0006c016) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00076ad8) popup_number_entry_window_t

0x45f0,	// (0x0006c05d) text_title_cp2

0x4603,	// (0x0006c070) bg_popup_call_pane_cp_ParamLimits

0x4603,	// (0x0006c070) bg_popup_call_pane_cp

0x4611,	// (0x0006c07e) call_thumbnail_pane

0x4619,	// (0x0006c086) popup_call_audio_in_window_g1_ParamLimits

0x4619,	// (0x0006c086) popup_call_audio_in_window_g1

0x4625,	// (0x0006c092) popup_call_audio_in_window_g2_ParamLimits

0x4625,	// (0x0006c092) popup_call_audio_in_window_g2

0x4631,	// (0x0006c09e) popup_call_audio_in_window_g3_ParamLimits

0x4631,	// (0x0006c09e) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00076ae1) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00076ae1) popup_call_audio_in_window_g

0x463d,	// (0x0006c0aa) popup_call_audio_in_window_t1_ParamLimits

0x463d,	// (0x0006c0aa) popup_call_audio_in_window_t1

0x4659,	// (0x0006c0c6) popup_call_audio_in_window_t2_ParamLimits

0x4659,	// (0x0006c0c6) popup_call_audio_in_window_t2

0x4675,	// (0x0006c0e2) popup_call_audio_in_window_t3_ParamLimits

0x4675,	// (0x0006c0e2) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00076ae8) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00076ae8) popup_call_audio_in_window_t

0x4603,	// (0x0006c070) bg_popup_call_pane_cp01_ParamLimits

0x4603,	// (0x0006c070) bg_popup_call_pane_cp01

0x4611,	// (0x0006c07e) call_thumbnail_pane_cp02

0x4688,	// (0x0006c0f5) call_type_pane_cp022

0x4690,	// (0x0006c0fd) popup_call_audio_out_window_g1_ParamLimits

0x4690,	// (0x0006c0fd) popup_call_audio_out_window_g1

0x46a2,	// (0x0006c10f) popup_call_audio_out_window_g2_ParamLimits

0x46a2,	// (0x0006c10f) popup_call_audio_out_window_g2

0x46ae,	// (0x0006c11b) popup_call_audio_out_window_g3_ParamLimits

0x46ae,	// (0x0006c11b) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00076aef) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00076aef) popup_call_audio_out_window_g

0x46c0,	// (0x0006c12d) popup_call_audio_out_window_t1_ParamLimits

0x46c0,	// (0x0006c12d) popup_call_audio_out_window_t1

0x46d8,	// (0x0006c145) popup_call_audio_out_window_t2_ParamLimits

0x46d8,	// (0x0006c145) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00076af6) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00076af6) popup_call_audio_out_window_t

0x46ed,	// (0x0006c15a) bg_popup_call_pane_ParamLimits

0x46ed,	// (0x0006c15a) bg_popup_call_pane

0x6fdc,	// (0x0006ea49) call_thumbnail_pane_cp_ParamLimits

0x6fdc,	// (0x0006ea49) call_thumbnail_pane_cp

0x4771,	// (0x0006c1de) call_type_pane_cp01_ParamLimits

0x4771,	// (0x0006c1de) call_type_pane_cp01

0x47b5,	// (0x0006c222) popup_call_audio_first_window_g1_ParamLimits

0x47b5,	// (0x0006c222) popup_call_audio_first_window_g1

0x4801,	// (0x0006c26e) popup_call_audio_first_window_g2_ParamLimits

0x4801,	// (0x0006c26e) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00076afb) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00076afb) popup_call_audio_first_window_g

0x4845,	// (0x0006c2b2) popup_call_audio_first_window_t1_ParamLimits

0x4845,	// (0x0006c2b2) popup_call_audio_first_window_t1

0x4cea,	// (0x0006c757) popup_call_audio_first_window_t4_ParamLimits

0x4cea,	// (0x0006c757) popup_call_audio_first_window_t4

0x4d76,	// (0x0006c7e3) popup_call_audio_first_window_t5_ParamLimits

0x4d76,	// (0x0006c7e3) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00076b00) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00076b00) popup_call_audio_first_window_t

0x4da5,	// (0x0006c812) bg_popup_call_pane_cp02

0x4daf,	// (0x0006c81c) call_type_pane_cp023

0x4db7,	// (0x0006c824) popup_call_audio_wait_window_g1

0x4dbf,	// (0x0006c82c) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00076b07) popup_call_audio_wait_window_g

0x4dc7,	// (0x0006c834) popup_call_audio_wait_window_t3

0x4dd5,	// (0x0006c842) bg_popup_call_pane_cp03_ParamLimits

0x4dd5,	// (0x0006c842) bg_popup_call_pane_cp03

0x4e35,	// (0x0006c8a2) call_thumbnail_pane_cp011_ParamLimits

0x4e35,	// (0x0006c8a2) call_thumbnail_pane_cp011

0x4e41,	// (0x0006c8ae) call_type_pane_cp034_ParamLimits

0x4e41,	// (0x0006c8ae) call_type_pane_cp034

0x4e7d,	// (0x0006c8ea) popup_call_audio_second_window_g1_ParamLimits

0x4e7d,	// (0x0006c8ea) popup_call_audio_second_window_g1

0x4eb9,	// (0x0006c926) popup_call_audio_second_window_g2_ParamLimits

0x4eb9,	// (0x0006c926) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00076b0c) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00076b0c) popup_call_audio_second_window_g

0x4ef5,	// (0x0006c962) popup_call_audio_second_window_t1_ParamLimits

0x4ef5,	// (0x0006c962) popup_call_audio_second_window_t1

0x4f76,	// (0x0006c9e3) popup_call_audio_second_window_t2_ParamLimits

0x4f76,	// (0x0006c9e3) popup_call_audio_second_window_t2

0x4fac,	// (0x0006ca19) popup_call_audio_second_window_t3_ParamLimits

0x4fac,	// (0x0006ca19) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00076b11) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00076b11) popup_call_audio_second_window_t

0x4da5,	// (0x0006c812) bg_popup_call_pane_cp04

0x4fe2,	// (0x0006ca4f) list_conf_pane

0x4fea,	// (0x0006ca57) popup_call_audio_conf_window_t1

0x4ff8,	// (0x0006ca65) call_thumbnail_pane_g1

0x5000,	// (0x0006ca6d) bg_pinb_pane_ParamLimits

0x5000,	// (0x0006ca6d) bg_pinb_pane

0x500e,	// (0x0006ca7b) find_pinb_pane

0x5000,	// (0x0006ca6d) listscroll_pinb_pane_ParamLimits

0x5000,	// (0x0006ca6d) listscroll_pinb_pane

0x5018,	// (0x0006ca85) pinb_bg_pane_g1

0x5018,	// (0x0006ca85) pinb_bg_pane_g2

0x5018,	// (0x0006ca85) pinb_bg_pane_g3

0x5018,	// (0x0006ca85) pinb_bg_pane_g4

0x5018,	// (0x0006ca85) pinb_bg_pane_g5

0x5018,	// (0x0006ca85) pinb_bg_pane_g6

0x5018,	// (0x0006ca85) pinb_bg_pane_g7

0x5018,	// (0x0006ca85) pinb_bg_pane_g8

0x5018,	// (0x0006ca85) pinb_bg_pane_g9

0x5018,	// (0x0006ca85) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00076b18) pinb_bg_pane_g

0x455a,	// (0x0006bfc7) grid_pinb_pane

0x455a,	// (0x0006bfc7) list_pinb_pane

0x48f1,	// (0x0006c35e) scroll_pane_cp01_ParamLimits

0x48f1,	// (0x0006c35e) scroll_pane_cp01

0x5022,	// (0x0006ca8f) find_pinb_pane_g1_ParamLimits

0x5022,	// (0x0006ca8f) find_pinb_pane_g1

0x503a,	// (0x0006caa7) find_pinb_pane_t1

0x504c,	// (0x0006cab9) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00076b32) find_pinb_pane_t

0x5061,	// (0x0006cace) input_focus_pane_cp01_ParamLimits

0x5061,	// (0x0006cace) input_focus_pane_cp01

0x506d,	// (0x0006cada) cell_pinb_pane_ParamLimits

0x506d,	// (0x0006cada) cell_pinb_pane

0x507b,	// (0x0006cae8) cell_pinb_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) cell_pinb_pane_g1

0x5089,	// (0x0006caf6) cell_pinb_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) cell_pinb_pane_g2

0x5089,	// (0x0006caf6) cell_pinb_pane_g3_ParamLimits

0x5089,	// (0x0006caf6) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00076b37) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00076b37) cell_pinb_pane_g

0x4da5,	// (0x0006c812) grid_highlight_pane_cp01

0x506d,	// (0x0006cada) list_pinb_item_pane_ParamLimits

0x506d,	// (0x0006cada) list_pinb_item_pane

0x455a,	// (0x0006bfc7) list_highlight_pane_cp02

0x5097,	// (0x0006cb04) list_pinb_item_pane_g1_ParamLimits

0x5097,	// (0x0006cb04) list_pinb_item_pane_g1

0x5089,	// (0x0006caf6) list_pinb_item_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) list_pinb_item_pane_g2

0x507b,	// (0x0006cae8) list_pinb_item_pane_g3_ParamLimits

0x507b,	// (0x0006cae8) list_pinb_item_pane_g3

0x5089,	// (0x0006caf6) list_pinb_item_pane_g4_ParamLimits

0x5089,	// (0x0006caf6) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00076b3e) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00076b3e) list_pinb_item_pane_g

0x50a5,	// (0x0006cb12) list_pinb_item_pane_t1_ParamLimits

0x50a5,	// (0x0006cb12) list_pinb_item_pane_t1

0x701a,	// (0x0006ea87) calc_display_pane

0x7038,	// (0x0006eaa5) calc_paper_pane

0x7054,	// (0x0006eac1) grid_calc_pane

0x4da5,	// (0x0006c812) bg_list_pane_cp01

0x7080,	// (0x0006eaed) clock_g1

0x7088,	// (0x0006eaf5) clock_g2

0x0001,

0xf0da,	// (0x00076b47) clock_g

0x7092,	// (0x0006eaff) clock_t1_ParamLimits

0x7092,	// (0x0006eaff) clock_t1

0x70a7,	// (0x0006eb14) clock_t2_ParamLimits

0x70a7,	// (0x0006eb14) clock_t2

0x70b9,	// (0x0006eb26) clock_t3_ParamLimits

0x70b9,	// (0x0006eb26) clock_t3

0x70cb,	// (0x0006eb38) clock_t4_ParamLimits

0x70cb,	// (0x0006eb38) clock_t4

0x70dd,	// (0x0006eb4a) clock_t5_ParamLimits

0x70dd,	// (0x0006eb4a) clock_t5

0x70f2,	// (0x0006eb5f) clock_t6_ParamLimits

0x70f2,	// (0x0006eb5f) clock_t6

0x7104,	// (0x0006eb71) clock_t7_ParamLimits

0x7104,	// (0x0006eb71) clock_t7

0x7116,	// (0x0006eb83) clock_t8_ParamLimits

0x7116,	// (0x0006eb83) clock_t8

0x712c,	// (0x0006eb99) clock_t9_ParamLimits

0x712c,	// (0x0006eb99) clock_t9

0x0008,

0xf0df,	// (0x00076b4c) clock_t_ParamLimits

0xf0df,	// (0x00076b4c) clock_t

0x50b9,	// (0x0006cb26) popup_clock_analogue_window_cp02

0x50b9,	// (0x0006cb26) popup_clock_digital_window_cp01

0x4da5,	// (0x0006c812) listscroll_help_pane

0x4da5,	// (0x0006c812) phob_pre_status_pane

0x50c1,	// (0x0006cb2e) grid_qdial_pane

0x7142,	// (0x0006ebaf) listscroll_mce_pane

0x5000,	// (0x0006ca6d) bg_notes_pane

0x50cb,	// (0x0006cb38) list_notes_pane

0x7160,	// (0x0006ebcd) scroll_pane_cp06

0x50d9,	// (0x0006cb46) bg_calc_paper_pane

0x716f,	// (0x0006ebdc) list_calc_pane

0x50ed,	// (0x0006cb5a) bg_calc_display_pane

0x7189,	// (0x0006ebf6) calc_display_pane_t1

0x719e,	// (0x0006ec0b) calc_display_pane_t2

0x71b3,	// (0x0006ec20) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00076b5f) calc_display_pane_t

0x71c5,	// (0x0006ec32) cell_calc_pane_ParamLimits

0x71c5,	// (0x0006ec32) cell_calc_pane

0x50f9,	// (0x0006cb66) bg_calc_paper_pane_g1

0x5111,	// (0x0006cb7e) bg_calc_paper_pane_g2

0x5105,	// (0x0006cb72) bg_calc_paper_pane_g3

0x5129,	// (0x0006cb96) bg_calc_paper_pane_g4

0x511d,	// (0x0006cb8a) bg_calc_paper_pane_g5

0x71f4,	// (0x0006ec61) bg_calc_paper_pane_g6

0x7205,	// (0x0006ec72) bg_calc_paper_pane_g7

0x7216,	// (0x0006ec83) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00076b66) bg_calc_paper_pane_g

0x7227,	// (0x0006ec94) calc_bg_paper_pane_g9

0x7238,	// (0x0006eca5) list_calc_item_pane_ParamLimits

0x7238,	// (0x0006eca5) list_calc_item_pane

0x5135,	// (0x0006cba2) list_calc_item_pane_g1

0x7259,	// (0x0006ecc6) list_calc_item_pane_t1_ParamLimits

0x7259,	// (0x0006ecc6) list_calc_item_pane_t1

0x726b,	// (0x0006ecd8) list_calc_item_pane_t2_ParamLimits

0x726b,	// (0x0006ecd8) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00076b77) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00076b77) list_calc_item_pane_t

0x5018,	// (0x0006ca85) cell_calc_pane_g1

0x5142,	// (0x0006cbaf) grid_highlight_pane_cp02

0x3d59,	// (0x0006b7c6) bg_calc_display_pane_g1

0x729b,	// (0x0006ed08) bg_calc_display_pane_g2

0x3d6b,	// (0x0006b7d8) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00076b81) bg_calc_display_pane_g

0x72a5,	// (0x0006ed12) cell_qdial_pane_ParamLimits

0x72a5,	// (0x0006ed12) cell_qdial_pane

0x72bb,	// (0x0006ed28) cell_qdial_pane_g1_ParamLimits

0x72bb,	// (0x0006ed28) cell_qdial_pane_g1

0x72c8,	// (0x0006ed35) cell_qdial_pane_g2_ParamLimits

0x72c8,	// (0x0006ed35) cell_qdial_pane_g2

0x516d,	// (0x0006cbda) cell_qdial_pane_g3_ParamLimits

0x516d,	// (0x0006cbda) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00076b88) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00076b88) cell_qdial_pane_g

0x72e6,	// (0x0006ed53) cell_qdial_pane_t1_ParamLimits

0x72e6,	// (0x0006ed53) cell_qdial_pane_t1

0x72fe,	// (0x0006ed6b) cell_qdial_pane_t2_ParamLimits

0x72fe,	// (0x0006ed6b) cell_qdial_pane_t2

0x7311,	// (0x0006ed7e) cell_qdial_pane_t3_ParamLimits

0x7311,	// (0x0006ed7e) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00076b91) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00076b91) cell_qdial_pane_t

0x4da5,	// (0x0006c812) grid_highlight_pane_cp04

0x5179,	// (0x0006cbe6) thumbnail_qdial_pane_ParamLimits

0x5179,	// (0x0006cbe6) thumbnail_qdial_pane

0x51d5,	// (0x0006cc42) list_help_pane

0x51de,	// (0x0006cc4b) scroll_pane_cp02

0x7324,	// (0x0006ed91) help_list_pane_t1_ParamLimits

0x7324,	// (0x0006ed91) help_list_pane_t1

0x734b,	// (0x0006edb8) bg_notes_pane_g2

0x7353,	// (0x0006edc0) bg_notes_pane_g3

0x735b,	// (0x0006edc8) notes_bg_pane_g1

0x7363,	// (0x0006edd0) notes_bg_pane_g4

0x736b,	// (0x0006edd8) notes_bg_pane_g5

0x7373,	// (0x0006ede0) notes_bg_pane_g6

0x737b,	// (0x0006ede8) notes_bg_pane_g7

0x7383,	// (0x0006edf0) notes_bg_pane_g8

0x738b,	// (0x0006edf8) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00076baf) notes_bg_pane_g

0x7393,	// (0x0006ee00) list_notes_text_pane_ParamLimits

0x7393,	// (0x0006ee00) list_notes_text_pane

0x00d5,	// (0x00067b42) list_notes_text_pane_g1

0x6009,	// (0x0006da76) list_notes_text_pane_t1

0x73bb,	// (0x0006ee28) listscroll_cale_week_pane

0x73e7,	// (0x0006ee54) bg_cale_heading_pane

0x7410,	// (0x0006ee7d) bg_cale_pane_cp01

0x7432,	// (0x0006ee9f) cale_week_corner_pane

0x7451,	// (0x0006eebe) cale_week_day_heading_pane

0x747f,	// (0x0006eeec) cale_week_scroll_pane_g1

0x74a3,	// (0x0006ef10) cale_week_scroll_pane_g2

0x74bb,	// (0x0006ef28) cale_week_scroll_pane_g3

0x74d3,	// (0x0006ef40) cale_week_scroll_pane_g4

0x74eb,	// (0x0006ef58) cale_week_scroll_pane_g5

0x7503,	// (0x0006ef70) cale_week_scroll_pane_g6

0x7523,	// (0x0006ef90) cale_week_scroll_pane_g7

0x7543,	// (0x0006efb0) cale_week_scroll_pane_g8

0x7563,	// (0x0006efd0) cale_week_scroll_pane_g9

0x7580,	// (0x0006efed) cale_week_scroll_pane_g10

0x759d,	// (0x0006f00a) cale_week_scroll_pane_g11

0x75bc,	// (0x0006f029) cale_week_scroll_pane_g12

0x75e1,	// (0x0006f04e) cale_week_scroll_pane_g13

0x760a,	// (0x0006f077) cale_week_scroll_pane_g14

0x7633,	// (0x0006f0a0) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00076bbe) cale_week_scroll_pane_g

0x767c,	// (0x0006f0e9) cale_week_time_pane

0x769c,	// (0x0006f109) grid_cale_week_pane

0x010a,	// (0x00067b77) scroll_pane_cp08

0x76cd,	// (0x0006f13a) cell_cale_week_pane_ParamLimits

0x76cd,	// (0x0006f13a) cell_cale_week_pane

0x775d,	// (0x0006f1ca) cale_week_day_heading_pane_t1

0x7785,	// (0x0006f1f2) cale_week_day_heading_pane_t2

0x77b2,	// (0x0006f21f) cale_week_day_heading_pane_t3

0x77df,	// (0x0006f24c) cale_week_day_heading_pane_t4

0x780c,	// (0x0006f279) cale_week_day_heading_pane_t5

0x7839,	// (0x0006f2a6) cale_week_day_heading_pane_t6

0x7866,	// (0x0006f2d3) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00076bdf) cale_week_day_heading_pane_t

0x0127,	// (0x00067b94) bg_cale_side_pane

0x788e,	// (0x0006f2fb) cale_week_time_pane_t1

0x78b2,	// (0x0006f31f) cale_week_time_pane_t2

0x78d6,	// (0x0006f343) cale_week_time_pane_t3

0x78fa,	// (0x0006f367) cale_week_time_pane_t4

0x791e,	// (0x0006f38b) cale_week_time_pane_t5

0x7944,	// (0x0006f3b1) cale_week_time_pane_t6

0x796c,	// (0x0006f3d9) cale_week_time_pane_t7

0x7998,	// (0x0006f405) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00076bee) cale_week_time_pane_t

0x79c8,	// (0x0006f435) cell_cale_week_pane_g2

0x79ec,	// (0x0006f459) cell_cale_week_pane_g3_ParamLimits

0x79ec,	// (0x0006f459) cell_cale_week_pane_g3

0x0135,	// (0x00067ba2) grid_highlight_pane_cp07

0x013d,	// (0x00067baa) listscroll_gms_pane

0x0147,	// (0x00067bb4) grid_gms_pane

0x0150,	// (0x00067bbd) listscroll_gms_pane_g1

0x0158,	// (0x00067bc5) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00076bff) listscroll_gms_pane_g

0x7a04,	// (0x0006f471) scroll_pane_cp010

0x7a0f,	// (0x0006f47c) cell_gms_pane_ParamLimits

0x7a0f,	// (0x0006f47c) cell_gms_pane

0x7a22,	// (0x0006f48f) cell_gms_pane_g1

0x0160,	// (0x00067bcd) cell_gms_pane_g2

0x0168,	// (0x00067bd5) cell_gms_pane_g3

0x0171,	// (0x00067bde) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00076c04) cell_gms_pane_g

0x017a,	// (0x00067be7) grid_highlight_pane_cp09

0x9a9f,	// (0x0007150c) phob_pre_status_pane_g1

0x9aa7,	// (0x00071514) phob_pre_status_pane_g2

0x9aaf,	// (0x0007151c) phob_pre_status_pane_g3

0x9ab7,	// (0x00071524) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x00076fcd) phob_pre_status_pane_g

0x9ac7,	// (0x00071534) phob_pre_status_pane_t1

0x9ad7,	// (0x00071544) phob_pre_status_pane_t2

0x9ae7,	// (0x00071554) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x00076fd8) phob_pre_status_pane_t

0x0182,	// (0x00067bef) bg_list_pane_cp05

0x7a32,	// (0x0006f49f) grid_vorec_pane

0x7a3c,	// (0x0006f4a9) vorec_t1

0x7a4a,	// (0x0006f4b7) vorec_t2

0x7a58,	// (0x0006f4c5) vorec_t3

0x7a66,	// (0x0006f4d3) vorec_t4

0xe6b3,	// (0x00076120) vorec_t5

0xe6c1,	// (0x0007612e) vorec_t6

0x0004,

0xf1a0,	// (0x00076c0d) vorec_t

0xe6cf,	// (0x0007613c) wait_bar_pane_cp01

0x7a82,	// (0x0006f4ef) cell_vorec_pane_ParamLimits

0x7a82,	// (0x0006f4ef) cell_vorec_pane

0x7a97,	// (0x0006f504) cell_vorec_pane_g1

0x4da5,	// (0x0006c812) grid_highlight_pane_cp05

0x506d,	// (0x0006cada) cams_zoom_pane

0x506d,	// (0x0006cada) image_vga_pane

0x5089,	// (0x0006caf6) main_camera_pane_g1

0x5089,	// (0x0006caf6) main_camera_pane_g2

0x5089,	// (0x0006caf6) main_camera_pane_g3

0x5089,	// (0x0006caf6) main_camera_pane_g4

0x5089,	// (0x0006caf6) main_camera_pane_g5

0x5089,	// (0x0006caf6) main_camera_pane_g6

0x5089,	// (0x0006caf6) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00076c18) main_camera_pane_g

0x0c95,	// (0x00068702) main_camera_pane_t1

0x0c95,	// (0x00068702) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00076c29) main_camera_pane_t

0x7aa1,	// (0x0006f50e) cams_zoom_pane_cp_ParamLimits

0x7aa1,	// (0x0006f50e) cams_zoom_pane_cp

0x7acf,	// (0x0006f53c) image_cif_pane_ParamLimits

0x7acf,	// (0x0006f53c) image_cif_pane

0x455a,	// (0x0006bfc7) image_subqcif_pane

0x7add,	// (0x0006f54a) main_video_pane_g1_ParamLimits

0x7add,	// (0x0006f54a) main_video_pane_g1

0x7b05,	// (0x0006f572) main_video_pane_g2_ParamLimits

0x7b05,	// (0x0006f572) main_video_pane_g2

0x7b38,	// (0x0006f5a5) main_video_pane_g3_ParamLimits

0x7b38,	// (0x0006f5a5) main_video_pane_g3

0x7b38,	// (0x0006f5a5) main_video_pane_g4_ParamLimits

0x7b38,	// (0x0006f5a5) main_video_pane_g4

0x7b66,	// (0x0006f5d3) main_video_pane_g5_ParamLimits

0x7b66,	// (0x0006f5d3) main_video_pane_g5

0x01bd,	// (0x00067c2a) main_video_pane_g6_ParamLimits

0x01bd,	// (0x00067c2a) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00076c2e) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00076c2e) main_video_pane_g

0x7b82,	// (0x0006f5ef) main_video_pane_t1_ParamLimits

0x7b82,	// (0x0006f5ef) main_video_pane_t1

0x01d7,	// (0x00067c44) cams_zoom_pane_g1

0x01d7,	// (0x00067c44) cams_zoom_pane_g2

0x01d7,	// (0x00067c44) cams_zoom_pane_g3

0x01d7,	// (0x00067c44) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00076c3d) cams_zoom_pane_g

0x7bc8,	// (0x0006f635) grid_cams_pane

0x7bd6,	// (0x0006f643) linegrid_cams_pane

0x7be2,	// (0x0006f64f) cell_cams_pane_ParamLimits

0x7be2,	// (0x0006f64f) cell_cams_pane

0x01e1,	// (0x00067c4e) cams_burst_image_pane

0x01e9,	// (0x00067c56) cell_cams_pane_g1

0x4da5,	// (0x0006c812) grid_highlight_pane_cp03

0x5018,	// (0x0006ca85) mp_bg_pane_g1

0x455a,	// (0x0006bfc7) bg_list_pane_cp03

0x455a,	// (0x0006bfc7) bg_mp_pane

0x455a,	// (0x0006bfc7) grid_mp_pane

0x01d7,	// (0x00067c44) media_player_g1

0x0772,	// (0x000681df) media_player_t1

0x0772,	// (0x000681df) media_player_t2

0x0772,	// (0x000681df) media_player_t3

0x0772,	// (0x000681df) media_player_t4

0x0772,	// (0x000681df) media_player_t5

0x0772,	// (0x000681df) media_player_t6

0x0772,	// (0x000681df) media_player_t7

0x0006,

0xf54a,	// (0x00076fb7) media_player_t

0x455a,	// (0x0006bfc7) wait_bar_pane_cp02

0xf52f,	// (0x00076f9c) main_usb_pane_t

0x0a4c,	// (0x000684b9) cell_mp_pane

0x5018,	// (0x0006ca85) cell_mp_pane_g1

0x4da5,	// (0x0006c812) grid_highlight_pane_cp06

0x01f1,	// (0x00067c5e) grid_skin_colour_pane

0x01f9,	// (0x00067c66) list_highlight_pane_cp03

0x7bf7,	// (0x0006f664) skin_g1

0x0201,	// (0x00067c6e) skin_t1

0x0210,	// (0x00067c7d) skin_t2

0x0001,

0xf1fe,	// (0x00076c6b) skin_t

0x7c01,	// (0x0006f66e) cell_skin_colour_pane_ParamLimits

0x7c01,	// (0x0006f66e) cell_skin_colour_pane

0x021e,	// (0x00067c8b) cell_skin_colour_pane_g1

0x7c81,	// (0x0006f6ee) call_video_g1_ParamLimits

0x7c81,	// (0x0006f6ee) call_video_g1

0x7c91,	// (0x0006f6fe) call_video_g2_ParamLimits

0x7c91,	// (0x0006f6fe) call_video_g2

0x0001,

0xf203,	// (0x00076c70) call_video_g_ParamLimits

0xf203,	// (0x00076c70) call_video_g

0x7ce1,	// (0x0006f74e) call_video_uplink_pane_cp1_ParamLimits

0x7ce1,	// (0x0006f74e) call_video_uplink_pane_cp1

0x0230,	// (0x00067c9d) call_video_uplink_pane_cp2

0x7daf,	// (0x0006f81c) video_down_crop_pane_ParamLimits

0x7daf,	// (0x0006f81c) video_down_crop_pane

0x7ea1,	// (0x0006f90e) video_down_pane_ParamLimits

0x7ea1,	// (0x0006f90e) video_down_pane

0x0238,	// (0x00067ca5) video_down_subqcif_pane_ParamLimits

0x0238,	// (0x00067ca5) video_down_subqcif_pane

0x0252,	// (0x00067cbf) video_down_subqcif_pane_cp_ParamLimits

0x0252,	// (0x00067cbf) video_down_subqcif_pane_cp

0x027a,	// (0x00067ce7) im_reading_pane_ParamLimits

0x027a,	// (0x00067ce7) im_reading_pane

0x7fbe,	// (0x0006fa2b) im_writing_pane_ParamLimits

0x7fbe,	// (0x0006fa2b) im_writing_pane

0x7fdc,	// (0x0006fa49) im_reading_pane_t1

0x0294,	// (0x00067d01) list_im_pane

0x02a5,	// (0x00067d12) scroll_pane_cp07

0x801e,	// (0x0006fa8b) im_writing_pane_t1_ParamLimits

0x801e,	// (0x0006fa8b) im_writing_pane_t1

0x02be,	// (0x00067d2b) im_writing_pane_t2_ParamLimits

0x02be,	// (0x00067d2b) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00076c7a) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00076c7a) im_writing_pane_t

0x4da5,	// (0x0006c812) input_focus_pane_cp04

0x4da5,	// (0x0006c812) input_focus_pane_cp05

0x8030,	// (0x0006fa9d) list_im_single_pane_ParamLimits

0x8030,	// (0x0006fa9d) list_im_single_pane

0x8049,	// (0x0006fab6) list_single_im_pane_t1

0x0182,	// (0x00067bef) blid_accuracy_pane

0x0182,	// (0x00067bef) blid_compass_pane

0x1f11,	// (0x0006997e) main_location_t1

0x1f11,	// (0x0006997e) main_location_t2

0x1f11,	// (0x0006997e) main_location_t3

0x0002,

0xf559,	// (0x00076fc6) main_location_t

0x4da5,	// (0x0006c812) aid_levels_location

0x5018,	// (0x0006ca85) blid_accuracy_pane_g1

0x5018,	// (0x0006ca85) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00076cce) blid_accuracy_pane_g

0x0306,	// (0x00067d73) wml_content_pane

0x0344,	// (0x00067db1) wml_button_pane_ParamLimits

0x0344,	// (0x00067db1) wml_button_pane

0x8058,	// (0x0006fac5) wml_list_single_large_pane_ParamLimits

0x8058,	// (0x0006fac5) wml_list_single_large_pane

0x807a,	// (0x0006fae7) wml_list_single_medium_pane_ParamLimits

0x807a,	// (0x0006fae7) wml_list_single_medium_pane

0x809d,	// (0x0006fb0a) wml_list_single_small_pane_ParamLimits

0x809d,	// (0x0006fb0a) wml_list_single_small_pane

0x0358,	// (0x00067dc5) wml_selection_box_pane_ParamLimits

0x0358,	// (0x00067dc5) wml_selection_box_pane

0x036b,	// (0x00067dd8) wml_list_single_pane_t1

0x037a,	// (0x00067de7) wml_list_single_medium_pane_t1

0x0389,	// (0x00067df6) wml_list_single_large_pane_t1

0x0398,	// (0x00067e05) input_focus_pane_cp02_ParamLimits

0x0398,	// (0x00067e05) input_focus_pane_cp02

0x03ab,	// (0x00067e18) wml_selection_box_pane_g1

0x03b4,	// (0x00067e21) wml_selection_box_pane_t1_ParamLimits

0x03b4,	// (0x00067e21) wml_selection_box_pane_t1

0x5000,	// (0x0006ca6d) bg_wml_button_pane_ParamLimits

0x5000,	// (0x0006ca6d) bg_wml_button_pane

0x03cc,	// (0x00067e39) wml_button_pane_g1

0x03d4,	// (0x00067e41) wml_button_pane_t1

0x03cc,	// (0x00067e39) wml_button_bg_pane_g1

0x03e4,	// (0x00067e51) wml_button_bg_pane_g2

0x03ec,	// (0x00067e59) wml_button_bg_pane_g3

0x03f4,	// (0x00067e61) wml_button_bg_pane_g4

0x03fc,	// (0x00067e69) wml_button_bg_pane_g5

0x0404,	// (0x00067e71) wml_button_bg_pane_g6

0x040c,	// (0x00067e79) wml_button_bg_pane_g7

0x0414,	// (0x00067e81) wml_button_bg_pane_g8

0x041c,	// (0x00067e89) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00076c7f) wml_button_bg_pane_g

0x80c5,	// (0x0006fb32) bg_list_pane_cp02

0x0424,	// (0x00067e91) mce_header_pane_ParamLimits

0x0424,	// (0x00067e91) mce_header_pane

0x043a,	// (0x00067ea7) mce_icon_pane

0x043a,	// (0x00067ea7) mce_image_pane

0x0443,	// (0x00067eb0) mce_text_pane_ParamLimits

0x0443,	// (0x00067eb0) mce_text_pane

0x80cd,	// (0x0006fb3a) scroll_pane_cp03

0x033c,	// (0x00067da9) scroll_pane_cp04

0x0456,	// (0x00067ec3) scroll_pane_cp05_ParamLimits

0x0456,	// (0x00067ec3) scroll_pane_cp05

0x80d5,	// (0x0006fb42) mce_header_field_pane_ParamLimits

0x80d5,	// (0x0006fb42) mce_header_field_pane

0x80f7,	// (0x0006fb64) mce_header_field_pane_2_ParamLimits

0x80f7,	// (0x0006fb64) mce_header_field_pane_2

0x810d,	// (0x0006fb7a) mce_header_field_pane_3

0x0462,	// (0x00067ecf) list_single_mce_message_pane_ParamLimits

0x0462,	// (0x00067ecf) list_single_mce_message_pane

0x0471,	// (0x00067ede) list_single_mce_smart_pane_ParamLimits

0x0471,	// (0x00067ede) list_single_mce_smart_pane

0x048b,	// (0x00067ef8) input_focus_pane_cp03

0x0494,	// (0x00067f01) list_header_data_pane

0x8115,	// (0x0006fb82) mce_header_field_pane_t1

0x8123,	// (0x0006fb90) list_single_mce_header_pane_ParamLimits

0x8123,	// (0x0006fb90) list_single_mce_header_pane

0x049c,	// (0x00067f09) list_single_mce_header_pane_t1

0x04ab,	// (0x00067f18) list_single_mce_message_pane_g1

0x04b3,	// (0x00067f20) list_single_mce_message_pane_t1

0x8159,	// (0x0006fbc6) bg_cale_heading_pane_cp01_ParamLimits

0x8159,	// (0x0006fbc6) bg_cale_heading_pane_cp01

0x04c1,	// (0x00067f2e) bg_cale_pane_cp02_ParamLimits

0x04c1,	// (0x00067f2e) bg_cale_pane_cp02

0x81ab,	// (0x0006fc18) cale_month_corner_pane

0x81ca,	// (0x0006fc37) cale_month_day_heading_pane_ParamLimits

0x81ca,	// (0x0006fc37) cale_month_day_heading_pane

0x822c,	// (0x0006fc99) cale_month_pane_g1_ParamLimits

0x822c,	// (0x0006fc99) cale_month_pane_g1

0x8273,	// (0x0006fce0) cale_month_pane_g2_ParamLimits

0x8273,	// (0x0006fce0) cale_month_pane_g2

0x82ab,	// (0x0006fd18) cale_month_pane_g3_ParamLimits

0x82ab,	// (0x0006fd18) cale_month_pane_g3

0x82ff,	// (0x0006fd6c) cale_month_pane_g4_ParamLimits

0x82ff,	// (0x0006fd6c) cale_month_pane_g4

0x8353,	// (0x0006fdc0) cale_month_pane_g5_ParamLimits

0x8353,	// (0x0006fdc0) cale_month_pane_g5

0x83a7,	// (0x0006fe14) cale_month_pane_g6_ParamLimits

0x83a7,	// (0x0006fe14) cale_month_pane_g6

0x840b,	// (0x0006fe78) cale_month_pane_g7_ParamLimits

0x840b,	// (0x0006fe78) cale_month_pane_g7

0x846f,	// (0x0006fedc) cale_month_pane_g8_ParamLimits

0x846f,	// (0x0006fedc) cale_month_pane_g8

0x84d3,	// (0x0006ff40) cale_month_pane_g9_ParamLimits

0x84d3,	// (0x0006ff40) cale_month_pane_g9

0x852d,	// (0x0006ff9a) cale_month_pane_g10_ParamLimits

0x852d,	// (0x0006ff9a) cale_month_pane_g10

0x857f,	// (0x0006ffec) cale_month_pane_g11_ParamLimits

0x857f,	// (0x0006ffec) cale_month_pane_g11

0x85cd,	// (0x0007003a) cale_month_pane_g12_ParamLimits

0x85cd,	// (0x0007003a) cale_month_pane_g12

0x861d,	// (0x0007008a) cale_month_pane_g13_ParamLimits

0x861d,	// (0x0007008a) cale_month_pane_g13

0x000c,

0xf225,	// (0x00076c92) cale_month_pane_g_ParamLimits

0xf225,	// (0x00076c92) cale_month_pane_g

0x866d,	// (0x000700da) cale_month_week_pane

0x868d,	// (0x000700fa) grid_cale_month_pane_ParamLimits

0x868d,	// (0x000700fa) grid_cale_month_pane

0x86e6,	// (0x00070153) cale_month_day_heading_pane_t1

0x8768,	// (0x000701d5) cale_month_day_heading_pane_t2

0x87e1,	// (0x0007024e) cale_month_day_heading_pane_t3

0x885a,	// (0x000702c7) cale_month_day_heading_pane_t4

0x88d3,	// (0x00070340) cale_month_day_heading_pane_t5

0x8954,	// (0x000703c1) cale_month_day_heading_pane_t6

0x89dd,	// (0x0007044a) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00076cad) cale_month_day_heading_pane_t

0x0127,	// (0x00067b94) bg_cale_side_pane_cp01

0x8a66,	// (0x000704d3) cale_month_week_pane_t1

0x8a7f,	// (0x000704ec) cale_month_week_pane_t2

0x8a98,	// (0x00070505) cale_month_week_pane_t3

0x8ab1,	// (0x0007051e) cale_month_week_pane_t4

0x8aca,	// (0x00070537) cale_month_week_pane_t5

0x8ae7,	// (0x00070554) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00076cbc) cale_month_week_pane_t

0x8b0a,	// (0x00070577) cell_cale_month_pane_ParamLimits

0x8b0a,	// (0x00070577) cell_cale_month_pane

0x8c38,	// (0x000706a5) cell_cale_month_pane_g1

0x8c44,	// (0x000706b1) cell_cale_month_pane_t1_ParamLimits

0x8c44,	// (0x000706b1) cell_cale_month_pane_t1

0x0135,	// (0x00067ba2) grid_highlight_pane_cp08

0x5018,	// (0x0006ca85) main_smil_g1

0x8c70,	// (0x000706dd) smil_status_pane

0x050c,	// (0x00067f79) smil_text_pane

0x1e27,	// (0x00069894) bg_popup_call3_rect_pane_g8

0x1e2f,	// (0x0006989c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00076f5a) bg_popup_call3_rect_pane_g

0x2058,	// (0x00069ac5) smil_status_volume_pane_g1

0x0516,	// (0x00067f83) smil_status_pane_t1

0x9e49,	// (0x000718b6) volume_smil_pane

0x052d,	// (0x00067f9a) list_smil_text_pane

0x8c83,	// (0x000706f0) scroll_pane_cp011

0x8c8e,	// (0x000706fb) smil_text_list_pane_t1_ParamLimits

0x8c8e,	// (0x000706fb) smil_text_list_pane_t1

0x8ce2,	// (0x0007074f) aid_volume_smil_ParamLimits

0x8ce2,	// (0x0007074f) aid_volume_smil

0x5018,	// (0x0006ca85) smil_volume_pane_g1

0x5018,	// (0x0006ca85) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00076cce) smil_volume_pane_g

0x73bb,	// (0x0006ee28) listscroll_cale_day_pane

0x0559,	// (0x00067fc6) bg_cale_pane

0x0571,	// (0x00067fde) list_cale_pane

0x0594,	// (0x00068001) scroll_pane_cp09

0x05a5,	// (0x00068012) cale_bg_pane_g1

0x05ad,	// (0x0006801a) cale_bg_pane_g2

0x05b5,	// (0x00068022) cale_bg_pane_g3

0x05bd,	// (0x0006802a) cale_bg_pane_g4

0x05c5,	// (0x00068032) cale_bg_pane_g5

0x05cd,	// (0x0006803a) cale_bg_pane_g6

0x05d5,	// (0x00068042) cale_bg_pane_g7

0x05dd,	// (0x0006804a) cale_bg_pane_g8

0x05e5,	// (0x00068052) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00076cd3) cale_bg_pane_g

0x8d0c,	// (0x00070779) list_cale_time_pane_ParamLimits

0x8d0c,	// (0x00070779) list_cale_time_pane

0x05ed,	// (0x0006805a) list_cale_time_pane_g1_ParamLimits

0x05ed,	// (0x0006805a) list_cale_time_pane_g1

0x05f9,	// (0x00068066) list_cale_time_pane_g2_ParamLimits

0x05f9,	// (0x00068066) list_cale_time_pane_g2

0x8d23,	// (0x00070790) list_cale_time_pane_g3_ParamLimits

0x8d23,	// (0x00070790) list_cale_time_pane_g3

0x8d31,	// (0x0007079e) list_cale_time_pane_g4_ParamLimits

0x8d31,	// (0x0007079e) list_cale_time_pane_g4

0x8d3f,	// (0x000707ac) list_cale_time_pane_g5_ParamLimits

0x8d3f,	// (0x000707ac) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00076ce6) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00076ce6) list_cale_time_pane_g

0x0613,	// (0x00068080) list_cale_time_pane_t1_ParamLimits

0x0613,	// (0x00068080) list_cale_time_pane_t1

0x063b,	// (0x000680a8) list_cale_time_pane_t2_ParamLimits

0x063b,	// (0x000680a8) list_cale_time_pane_t2

0x8ffc,	// (0x00070a69) aid_blid_cardinal_pane

0x903e,	// (0x00070aab) compass_pane_t4

0x0663,	// (0x000680d0) list_cale_time_pane_t4_ParamLimits

0x0663,	// (0x000680d0) list_cale_time_pane_t4

0x904c,	// (0x00070ab9) compass_pane_t5

0x905c,	// (0x00070ac9) compass_pane_t6

0x906a,	// (0x00070ad7) compass_pane_t7

0x0afc,	// (0x00068569) navi_pane_cc_t1

0x0c5b,	// (0x000686c8) aid_phob_thumbnail_center_pane

0x9533,	// (0x00070fa0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00076cf3) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00076cf3) list_cale_time_pane_t

0x4603,	// (0x0006c070) bg_popup_window_pane_cp02_ParamLimits

0x4603,	// (0x0006c070) bg_popup_window_pane_cp02

0x068b,	// (0x000680f8) heading_pane_cp01_ParamLimits

0x068b,	// (0x000680f8) heading_pane_cp01

0x0697,	// (0x00068104) loc_req_pane_ParamLimits

0x0697,	// (0x00068104) loc_req_pane

0x06a7,	// (0x00068114) loc_type_pane_ParamLimits

0x06a7,	// (0x00068114) loc_type_pane

0x06b9,	// (0x00068126) loc_type_pane_t1_ParamLimits

0x06b9,	// (0x00068126) loc_type_pane_t1

0x06cb,	// (0x00068138) loc_type_pane_t2_ParamLimits

0x06cb,	// (0x00068138) loc_type_pane_t2

0x06dd,	// (0x0006814a) loc_type_pane_t3_ParamLimits

0x06dd,	// (0x0006814a) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00076cfa) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00076cfa) loc_type_pane_t

0x06ef,	// (0x0006815c) list_loc_req_pane

0x06f9,	// (0x00068166) scroll_pane_cp012

0x8d4d,	// (0x000707ba) list_single_loc_request_popup_menu_pane_ParamLimits

0x8d4d,	// (0x000707ba) list_single_loc_request_popup_menu_pane

0x0704,	// (0x00068171) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0704,	// (0x00068171) list_single_loc_request_popup_menu_pane_g1

0x0710,	// (0x0006817d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0710,	// (0x0006817d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00076d01) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00076d01) list_single_loc_request_popup_menu_pane_g

0x071c,	// (0x00068189) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x071c,	// (0x00068189) list_single_loc_request_popup_menu_pane_t1

0x8d5f,	// (0x000707cc) bg_popup_window_pane_cp03_ParamLimits

0x8d5f,	// (0x000707cc) bg_popup_window_pane_cp03

0x8d6d,	// (0x000707da) heading_loc_req_pane_ParamLimits

0x8d6d,	// (0x000707da) heading_loc_req_pane

0x8d79,	// (0x000707e6) popup_dyc_status_message_window_g1_ParamLimits

0x8d79,	// (0x000707e6) popup_dyc_status_message_window_g1

0x8d85,	// (0x000707f2) popup_dyc_status_message_window_t1_ParamLimits

0x8d85,	// (0x000707f2) popup_dyc_status_message_window_t1

0x8d97,	// (0x00070804) popup_dyc_status_message_window_t2_ParamLimits

0x8d97,	// (0x00070804) popup_dyc_status_message_window_t2

0x8da9,	// (0x00070816) popup_dyc_status_message_window_t3_ParamLimits

0x8da9,	// (0x00070816) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00076d06) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00076d06) popup_dyc_status_message_window_t

0x4da5,	// (0x0006c812) bg_heading_pane_cp01

0x073e,	// (0x000681ab) heading_loc_req_pane_g1

0x0746,	// (0x000681b3) heading_loc_req_pane_g2

0x074e,	// (0x000681bb) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00076d0d) heading_loc_req_pane_g

0x0756,	// (0x000681c3) heading_loc_req_pane_t1

0x0782,	// (0x000681ef) bg_popup_sub_pane_cp01_ParamLimits

0x0782,	// (0x000681ef) bg_popup_sub_pane_cp01

0x0790,	// (0x000681fd) popup_cale_events_window_g1_ParamLimits

0x0790,	// (0x000681fd) popup_cale_events_window_g1

0x07b0,	// (0x0006821d) popup_cale_events_window_g2_ParamLimits

0x07b0,	// (0x0006821d) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00076d2f) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00076d2f) popup_cale_events_window_g

0x07d0,	// (0x0006823d) popup_cale_events_window_t1_ParamLimits

0x07d0,	// (0x0006823d) popup_cale_events_window_t1

0x07e2,	// (0x0006824f) popup_cale_events_window_t2_ParamLimits

0x07e2,	// (0x0006824f) popup_cale_events_window_t2

0x0820,	// (0x0006828d) popup_cale_events_window_t3_ParamLimits

0x0820,	// (0x0006828d) popup_cale_events_window_t3

0x085a,	// (0x000682c7) popup_cale_events_window_t4_ParamLimits

0x085a,	// (0x000682c7) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00076d34) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00076d34) popup_cale_events_window_t

0x8dd3,	// (0x00070840) call_type_pane

0x164c,	// (0x000690b9) popup_call_status_window_g1

0x8ddf,	// (0x0007084c) popup_call_status_window_g2

0x8deb,	// (0x00070858) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00076d3d) popup_call_status_window_g

0x0890,	// (0x000682fd) call_type_pane_g1

0x0899,	// (0x00068306) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00076d44) call_type_pane_g

0x4da5,	// (0x0006c812) bg_popup_sub_pane_cp02

0x08a2,	// (0x0006830f) listscroll_popup_wml_pane

0x08aa,	// (0x00068317) list_wml_pane

0x08b4,	// (0x00068321) scroll_pane_cp013

0x08bf,	// (0x0006832c) list_single_graphic_popup_wml_pane_ParamLimits

0x08bf,	// (0x0006832c) list_single_graphic_popup_wml_pane

0x5018,	// (0x0006ca85) list_single_graphic_popup_wml_pane_g1

0x08d3,	// (0x00068340) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00076d49) list_single_graphic_popup_wml_pane_g

0x08db,	// (0x00068348) list_single_graphic_popup_wml_pane_t1

0x08e9,	// (0x00068356) aid_call_pane

0x4ff8,	// (0x0006ca65) popup_clock_analogue_window_g1

0x4ff8,	// (0x0006ca65) popup_clock_analogue_window_g2

0x8df7,	// (0x00070864) popup_clock_analogue_window_g3

0x8df7,	// (0x00070864) popup_clock_analogue_window_g4

0x5018,	// (0x0006ca85) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00076d4e) popup_clock_analogue_window_g

0x8dff,	// (0x0007086c) popup_clock_analogue_window_t1

0x8e0d,	// (0x0007087a) clock_digital_number_pane_ParamLimits

0x8e0d,	// (0x0007087a) clock_digital_number_pane

0x8e19,	// (0x00070886) clock_digital_number_pane_cp02_ParamLimits

0x8e19,	// (0x00070886) clock_digital_number_pane_cp02

0x8e25,	// (0x00070892) clock_digital_number_pane_cp03_ParamLimits

0x8e25,	// (0x00070892) clock_digital_number_pane_cp03

0x8e31,	// (0x0007089e) clock_digital_number_pane_cp04_ParamLimits

0x8e31,	// (0x0007089e) clock_digital_number_pane_cp04

0x8e3d,	// (0x000708aa) clock_digital_separator_pane_ParamLimits

0x8e3d,	// (0x000708aa) clock_digital_separator_pane

0x8e49,	// (0x000708b6) popup_clock_digital_window_t1

0x5018,	// (0x0006ca85) clock_digital_number_pane_g1

0x5018,	// (0x0006ca85) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00076cce) clock_digital_number_pane_g

0x5018,	// (0x0006ca85) clock_digital_separator_pane_g1

0x5018,	// (0x0006ca85) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00076cce) clock_digital_separator_pane_g

0x4da5,	// (0x0006c812) bg_popup_window_pane_cp04

0x0968,	// (0x000683d5) heading_pane_cp03

0x0182,	// (0x00067bef) listscroll_popup_gms_pane

0x4da5,	// (0x0006c812) grid_large_graphic_popup_pane

0x0971,	// (0x000683de) listscroll_popup_gms_pane_g1

0x097a,	// (0x000683e7) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00076d59) listscroll_popup_gms_pane_g

0x0983,	// (0x000683f0) scroll_pane_cp014

0x506d,	// (0x0006cada) cell_large_graphic_popup_pane_ParamLimits

0x506d,	// (0x0006cada) cell_large_graphic_popup_pane

0x507b,	// (0x0006cae8) cell_large_graphic_popup_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) cell_large_graphic_popup_pane_g1

0x098c,	// (0x000683f9) cell_large_graphic_popup_pane_g2_ParamLimits

0x098c,	// (0x000683f9) cell_large_graphic_popup_pane_g2

0x099a,	// (0x00068407) cell_large_graphic_popup_pane_g3_ParamLimits

0x099a,	// (0x00068407) cell_large_graphic_popup_pane_g3

0x09a8,	// (0x00068415) cell_large_graphic_popup_pane_g4_ParamLimits

0x09a8,	// (0x00068415) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00076d5e) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00076d5e) cell_large_graphic_popup_pane_g

0x4da5,	// (0x0006c812) grid_highlight_pane_cp010

0x5018,	// (0x0006ca85) bg_popup_call_pane_g1

0x09b9,	// (0x00068426) list_single_graphic_popup_conf_pane_ParamLimits

0x09b9,	// (0x00068426) list_single_graphic_popup_conf_pane

0x09cb,	// (0x00068438) list_highlight_pane_cp01

0x09d4,	// (0x00068441) list_single_graphic_popup_conf_pane_g1

0x09dc,	// (0x00068449) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00076d67) list_single_graphic_popup_conf_pane_g

0x09e4,	// (0x00068451) list_single_graphic_popup_conf_pane_t1

0x09f2,	// (0x0006845f) linegrid_cams_pane_g1

0x8e66,	// (0x000708d3) linegrid_cams_pane_g2

0x0168,	// (0x00067bd5) linegrid_cams_pane_g3

0x09fb,	// (0x00068468) linegrid_cams_pane_g4

0x8e6f,	// (0x000708dc) linegrid_cams_pane_g5

0x8e78,	// (0x000708e5) linegrid_cams_pane_g6

0x0171,	// (0x00067bde) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00076d6c) linegrid_cams_pane_g

0x0a04,	// (0x00068471) popup_clock_analogue_window

0x0a04,	// (0x00068471) popup_clock_digital_window

0x4da5,	// (0x0006c812) popup_phob_thumbnail_window

0x5018,	// (0x0006ca85) call_video_uplink_pane_g1

0x0a0d,	// (0x0006847a) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00076d7b) call_video_uplink_pane_g

0x0a15,	// (0x00068482) video_uplink_pane

0x0a1d,	// (0x0006848a) mce_image_pane_g1

0x8e83,	// (0x000708f0) mce_image_pane_g2

0x8e8d,	// (0x000708fa) mce_image_pane_g3

0x8e97,	// (0x00070904) mce_image_pane_g4

0x8e9f,	// (0x0007090c) mce_image_pane_g5

0x0004,

0xf313,	// (0x00076d80) mce_image_pane_g

0x0a27,	// (0x00068494) control_top_pane_stacon_cp01_ParamLimits

0x0a27,	// (0x00068494) control_top_pane_stacon_cp01

0x0a3b,	// (0x000684a8) uni_indicator_pane_stacon_cp01_ParamLimits

0x0a3b,	// (0x000684a8) uni_indicator_pane_stacon_cp01

0x0a4c,	// (0x000684b9) bg_popup_sub_pane_cp03

0x8ea7,	// (0x00070914) chi_dic_find_pane

0x8eaf,	// (0x0007091c) listscroll_chi_dic_pane

0x8eb8,	// (0x00070925) main_pane_chidic_g1

0x8ecb,	// (0x00070938) chi_dic_find_pane_t1

0x0a56,	// (0x000684c3) find_chidic_pane

0x0a5f,	// (0x000684cc) chi_dic_list_pane_ParamLimits

0x0a5f,	// (0x000684cc) chi_dic_list_pane

0x0a70,	// (0x000684dd) scroll_pane_cp020

0x8ed9,	// (0x00070946) find_chidic_pane_t1

0x4da5,	// (0x0006c812) input_focus_pane_cp06

0x018a,	// (0x00067bf7) list_chi_dic_pane_ParamLimits

0x018a,	// (0x00067bf7) list_chi_dic_pane

0x8ee8,	// (0x00070955) list_chi_dic_pane_t1_ParamLimits

0x8ee8,	// (0x00070955) list_chi_dic_pane_t1

0x4da5,	// (0x0006c812) list_highlight_pane_cp020

0x0a78,	// (0x000684e5) bg_cale_heading_pane_g1

0x8efb,	// (0x00070968) bg_cale_heading_pane_g2

0x8f03,	// (0x00070970) bg_cale_heading_pane_g3

0x8f0b,	// (0x00070978) bg_cale_heading_pane_g4

0x8f15,	// (0x00070982) bg_cale_heading_pane_g5

0x8f1f,	// (0x0007098c) bg_cale_heading_pane_g6

0x8f27,	// (0x00070994) bg_cale_heading_pane_g7

0x8f2f,	// (0x0007099c) bg_cale_heading_pane_g8

0x8f39,	// (0x000709a6) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00076d8b) bg_cale_heading_pane_g

0x0a78,	// (0x000684e5) bg_cale_side_pane_g1

0x8f43,	// (0x000709b0) bg_cale_side_pane_g2

0x8f4d,	// (0x000709ba) bg_cale_side_pane_g3

0x8f57,	// (0x000709c4) bg_cale_side_pane_g4

0x8f61,	// (0x000709ce) bg_cale_side_pane_g5

0x8f6b,	// (0x000709d8) bg_cale_side_pane_g6

0x8f75,	// (0x000709e2) bg_cale_side_pane_g7

0x8f7f,	// (0x000709ec) bg_cale_side_pane_g8

0x8f87,	// (0x000709f4) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00076d9e) bg_cale_side_pane_g

0x8f8f,	// (0x000709fc) popup_call_status_window_ParamLimits

0x8f8f,	// (0x000709fc) popup_call_status_window

0x0a80,	// (0x000684ed) stacon_top_pane

0x0a88,	// (0x000684f5) status_pane_ParamLimits

0x0a88,	// (0x000684f5) status_pane

0x0a9d,	// (0x0006850a) status_small_pane

0x0aa5,	// (0x00068512) control_pane

0x4da5,	// (0x0006c812) stacon_bottom_pane

0x0aad,	// (0x0006851a) list_single_mce_smart_pane_t1_ParamLimits

0x0aad,	// (0x0006851a) list_single_mce_smart_pane_t1

0x0ac0,	// (0x0006852d) list_single_mce_smart_pane_t2_ParamLimits

0x0ac0,	// (0x0006852d) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00076db1) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00076db1) list_single_mce_smart_pane_t

0x8f9b,	// (0x00070a08) compass_pane

0x8fa6,	// (0x00070a13) main_location2_pane_t1

0x8fbc,	// (0x00070a29) main_location2_pane_t2

0x8fd2,	// (0x00070a3f) main_location2_pane_t3

0x0003,

0xf349,	// (0x00076db6) main_location2_pane_t

0x0adf,	// (0x0006854c) compass_pane_g1_ParamLimits

0x0adf,	// (0x0006854c) compass_pane_g1

0x9020,	// (0x00070a8d) compass_pane_t1

0x902f,	// (0x00070a9c) compass_pane_t2

0x0005,

0xf352,	// (0x00076dbf) compass_pane_t

0x907a,	// (0x00070ae7) text_secondary_cp61

0x0af3,	// (0x00068560) navi_pane_cams_g5

0x0b16,	// (0x00068583) navi_pane_im_t1

0x0b24,	// (0x00068591) navi_pane_mp_g1_ParamLimits

0x0b24,	// (0x00068591) navi_pane_mp_g1

0x0b38,	// (0x000685a5) navi_pane_mp_g2_ParamLimits

0x0b38,	// (0x000685a5) navi_pane_mp_g2

0x0b44,	// (0x000685b1) navi_pane_mp_g3_ParamLimits

0x0b44,	// (0x000685b1) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00076dd3) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00076dd3) navi_pane_mp_g

0x0b50,	// (0x000685bd) navi_pane_mp_t1

0x0b5e,	// (0x000685cb) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00076dda) navi_pane_mp_t

0x0b9a,	// (0x00068607) navi_pane_vt_g1

0x0b50,	// (0x000685bd) navi_pane_vt_t1

0x0ba2,	// (0x0006860f) navi_slider_pane

0x0182,	// (0x00067bef) zooming_pane

0x0baa,	// (0x00068617) navi_slider_pane_g1

0x91af,	// (0x00070c1c) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00076de1) navi_slider_pane_g

0x0be0,	// (0x0006864d) aid_levels_zoom

0x0be8,	// (0x00068655) zooming_pane_g1

0x0bf0,	// (0x0006865d) zooming_pane_g2

0x0bf0,	// (0x0006865d) zooming_pane_g3

0x0002,

0xf383,	// (0x00076df0) zooming_pane_g

0x0bf8,	// (0x00068665) level_10_zoom

0x0c01,	// (0x0006866e) level_11_zoom

0x0c0a,	// (0x00068677) level_1_zoom

0x0c13,	// (0x00068680) level_2_zoom

0x0c1c,	// (0x00068689) level_3_zoom

0x0c25,	// (0x00068692) level_4_zoom

0x0c2e,	// (0x0006869b) level_5_zoom

0x0c37,	// (0x000686a4) level_6_zoom

0x0c40,	// (0x000686ad) level_7_zoom

0x0c49,	// (0x000686b6) level_8_zoom

0x0c52,	// (0x000686bf) level_9_zoom

0x0c63,	// (0x000686d0) popup_phob_thumbnail_window_g1

0x0c6b,	// (0x000686d8) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00076df7) popup_phob_thumbnail_window_g

0x9af7,	// (0x00071564) level_1_location

0x9aff,	// (0x0007156c) level_2_location

0x9b07,	// (0x00071574) level_3_location

0x9b11,	// (0x0007157e) level_4_location

0x0182,	// (0x00067bef) level_5_location

0x91c1,	// (0x00070c2e) mce_icon_pane_g1

0x91c9,	// (0x00070c36) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00076dfc) mce_icon_pane_g

0x91d1,	// (0x00070c3e) main_mup_pane_g1_ParamLimits

0x91d1,	// (0x00070c3e) main_mup_pane_g1

0x5097,	// (0x0006cb04) main_mup_pane_g2_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g2

0x5097,	// (0x0006cb04) main_mup_pane_g3_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g3

0x5097,	// (0x0006cb04) main_mup_pane_g4_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g4

0x5097,	// (0x0006cb04) main_mup_pane_g5_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g5

0x5097,	// (0x0006cb04) main_mup_pane_g6_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g6

0x5097,	// (0x0006cb04) main_mup_pane_g7_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g7

0x5097,	// (0x0006cb04) main_mup_pane_g8_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g8

0x5097,	// (0x0006cb04) main_mup_pane_g9_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g9

0x5097,	// (0x0006cb04) main_mup_pane_g10_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g10

0x5097,	// (0x0006cb04) main_mup_pane_g11_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g11

0x5089,	// (0x0006caf6) main_mup_pane_g12_ParamLimits

0x5089,	// (0x0006caf6) main_mup_pane_g12

0x5097,	// (0x0006cb04) main_mup_pane_g13_ParamLimits

0x5097,	// (0x0006cb04) main_mup_pane_g13

0x000c,

0xf394,	// (0x00076e01) main_mup_pane_g_ParamLimits

0xf394,	// (0x00076e01) main_mup_pane_g

0x50a5,	// (0x0006cb12) main_mup_pane_t1_ParamLimits

0x50a5,	// (0x0006cb12) main_mup_pane_t1

0x50a5,	// (0x0006cb12) main_mup_pane_t2_ParamLimits

0x50a5,	// (0x0006cb12) main_mup_pane_t2

0x50a5,	// (0x0006cb12) main_mup_pane_t3_ParamLimits

0x50a5,	// (0x0006cb12) main_mup_pane_t3

0x0c95,	// (0x00068702) main_mup_pane_t4_ParamLimits

0x0c95,	// (0x00068702) main_mup_pane_t4

0x0c95,	// (0x00068702) main_mup_pane_t5_ParamLimits

0x0c95,	// (0x00068702) main_mup_pane_t5

0x01a9,	// (0x00067c16) main_mup_pane_t6_ParamLimits

0x01a9,	// (0x00067c16) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00076e1c) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00076e1c) main_mup_pane_t

0x48f1,	// (0x0006c35e) mup_progress_pane_ParamLimits

0x48f1,	// (0x0006c35e) mup_progress_pane

0x2296,	// (0x00069d03) mup_visualizer_pane_ParamLimits

0x2296,	// (0x00069d03) mup_visualizer_pane

0x2296,	// (0x00069d03) mup_volume_pane_ParamLimits

0x2296,	// (0x00069d03) mup_volume_pane

0x5089,	// (0x0006caf6) mup_visualizer_pane_g1_ParamLimits

0x5089,	// (0x0006caf6) mup_visualizer_pane_g1

0x0cb7,	// (0x00068724) mup_visualizer_pane_g2_ParamLimits

0x0cb7,	// (0x00068724) mup_visualizer_pane_g2

0x507b,	// (0x0006cae8) mup_visualizer_pane_g3_ParamLimits

0x507b,	// (0x0006cae8) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00076e29) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00076e29) mup_visualizer_pane_g

0x01d7,	// (0x00067c44) mup_volume_pane_g1

0x01d7,	// (0x00067c44) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00076e30) mup_volume_pane_g

0x01d7,	// (0x00067c44) mup_progress_pane_g1

0x01d7,	// (0x00067c44) mup_progress_pane_g2

0x01d7,	// (0x00067c44) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00076e35) mup_progress_pane_g

0x4da5,	// (0x0006c812) bg_popup_window_pane_cp05

0x0cc5,	// (0x00068732) heading_pane_cp02_ParamLimits

0x0cc5,	// (0x00068732) heading_pane_cp02

0x0ce1,	// (0x0006874e) list_popup_blid_pane

0x0ce9,	// (0x00068756) list_blid_sat_info_pane_ParamLimits

0x0ce9,	// (0x00068756) list_blid_sat_info_pane

0x0cfc,	// (0x00068769) list_blid_sat_info_pane_g1

0x0d04,	// (0x00068771) list_blid_sat_info_pane_t1

0x92e0,	// (0x00070d4d) mup_equalizer_pane_ParamLimits

0x92e0,	// (0x00070d4d) mup_equalizer_pane

0x9301,	// (0x00070d6e) mup_equalizer_pane_cp1_ParamLimits

0x9301,	// (0x00070d6e) mup_equalizer_pane_cp1

0x9322,	// (0x00070d8f) mup_equalizer_pane_cp2_ParamLimits

0x9322,	// (0x00070d8f) mup_equalizer_pane_cp2

0x9343,	// (0x00070db0) mup_equalizer_pane_cp3_ParamLimits

0x9343,	// (0x00070db0) mup_equalizer_pane_cp3

0x9368,	// (0x00070dd5) mup_equalizer_pane_cp4_ParamLimits

0x9368,	// (0x00070dd5) mup_equalizer_pane_cp4

0x938d,	// (0x00070dfa) mup_equalizer_pane_cp5

0x93a5,	// (0x00070e12) mup_equalizer_pane_cp6

0x93bd,	// (0x00070e2a) mup_equalizer_pane_cp7

0x1ea7,	// (0x00069914) bg_popup_call_poc_act_pane_g9

0x1eaf,	// (0x0006991c) bg_popup_call_poc_act_pane_g10

0x1eb7,	// (0x00069924) bg_popup_call_poc_act_pane_g11

0x000a,

0x5000,	// (0x0006ca6d) mup_scale_pane

0x5018,	// (0x0006ca85) mup_scale_pane_g1

0x0d12,	// (0x0006877f) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00076e51) mup_scale_pane_g

0x0d36,	// (0x000687a3) msg_data_pane

0x0d3e,	// (0x000687ab) scroll_pane_cp017

0x6017,	// (0x0006da84) bg_list_pane_cp04_ParamLimits

0x6017,	// (0x0006da84) bg_list_pane_cp04

0x0d46,	// (0x000687b3) msg_data_pane_g1

0x93e7,	// (0x00070e54) msg_data_pane_g2

0x93f1,	// (0x00070e5e) msg_data_pane_g3

0x93fb,	// (0x00070e68) msg_data_pane_g4

0x9403,	// (0x00070e70) msg_data_pane_g5

0x940b,	// (0x00070e78) msg_data_pane_g6

0x9413,	// (0x00070e80) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00076e60) msg_data_pane_g

0x603f,	// (0x0006daac) msg_text_pane_ParamLimits

0x603f,	// (0x0006daac) msg_text_pane

0x941b,	// (0x00070e88) qrid_highlight_pane_cp011_ParamLimits

0x941b,	// (0x00070e88) qrid_highlight_pane_cp011

0x4da5,	// (0x0006c812) msg_body_pane

0x4da5,	// (0x0006c812) msg_header_pane

0x0d57,	// (0x000687c4) input_focus_pane_cp07

0x6077,	// (0x0006dae4) msg_header_pane_t1_ParamLimits

0x6077,	// (0x0006dae4) msg_header_pane_t1

0x608d,	// (0x0006dafa) msg_header_pane_t2_ParamLimits

0x608d,	// (0x0006dafa) msg_header_pane_t2

0x0001,

0xf407,	// (0x00076e74) msg_header_pane_t_ParamLimits

0xf407,	// (0x00076e74) msg_header_pane_t

0x0d6c,	// (0x000687d9) msg_body_pane_g1

0x60a4,	// (0x0006db11) msg_body_pane_t1_ParamLimits

0x60a4,	// (0x0006db11) msg_body_pane_t1

0x60d5,	// (0x0006db42) msg_body_pane_t2_ParamLimits

0x60d5,	// (0x0006db42) msg_body_pane_t2

0x60e7,	// (0x0006db54) msg_body_pane_t3_ParamLimits

0x60e7,	// (0x0006db54) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00076e79) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00076e79) msg_body_pane_t

0x9483,	// (0x00070ef0) main_viewer_pane_g1_ParamLimits

0x9483,	// (0x00070ef0) main_viewer_pane_g1

0x948f,	// (0x00070efc) main_viewer_pane_g2_ParamLimits

0x948f,	// (0x00070efc) main_viewer_pane_g2

0x949b,	// (0x00070f08) main_viewer_pane_g3_ParamLimits

0x949b,	// (0x00070f08) main_viewer_pane_g3

0x94ac,	// (0x00070f19) main_viewer_pane_g4_ParamLimits

0x94ac,	// (0x00070f19) main_viewer_pane_g4

0x94bd,	// (0x00070f2a) main_viewer_pane_g5_ParamLimits

0x94bd,	// (0x00070f2a) main_viewer_pane_g5

0x94bd,	// (0x00070f2a) main_viewer_pane_g7_ParamLimits

0x94bd,	// (0x00070f2a) main_viewer_pane_g7

0x94cf,	// (0x00070f3c) main_viewer_pane_g8_ParamLimits

0x94cf,	// (0x00070f3c) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00076e89) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00076e89) main_viewer_pane_g

0x0db6,	// (0x00068823) viewer_content_pane_ParamLimits

0x0db6,	// (0x00068823) viewer_content_pane

0x9507,	// (0x00070f74) main_postcard_pane_g1_ParamLimits

0x9507,	// (0x00070f74) main_postcard_pane_g1

0x9515,	// (0x00070f82) main_postcard_pane_g2_ParamLimits

0x9515,	// (0x00070f82) main_postcard_pane_g2

0x9523,	// (0x00070f90) main_postcard_pane_g3_ParamLimits

0x9523,	// (0x00070f90) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00076e9a) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00076e9a) main_postcard_pane_g

0x9533,	// (0x00070fa0) main_postcard_pane_g4

0x2045,	// (0x00069ab2) smil_status_volume_pane_g2

0x955f,	// (0x00070fcc) postcard_pane_ParamLimits

0x955f,	// (0x00070fcc) postcard_pane

0x164c,	// (0x000690b9) postcard_pane_g1_ParamLimits

0x164c,	// (0x000690b9) postcard_pane_g1

0x9599,	// (0x00071006) postcard_pane_g2_ParamLimits

0x9599,	// (0x00071006) postcard_pane_g2

0x95a5,	// (0x00071012) postcard_pane_g3_ParamLimits

0x95a5,	// (0x00071012) postcard_pane_g3

0x0dd2,	// (0x0006883f) postcard_pane_g4_ParamLimits

0x0dd2,	// (0x0006883f) postcard_pane_g4

0x95b1,	// (0x0007101e) postcard_pane_g5_ParamLimits

0x95b1,	// (0x0007101e) postcard_pane_g5

0x95bd,	// (0x0007102a) postcard_pane_g6_ParamLimits

0x95bd,	// (0x0007102a) postcard_pane_g6

0x0dc4,	// (0x00068831) postcard_pane_g7_ParamLimits

0x0dc4,	// (0x00068831) postcard_pane_g7

0x0006,

0xf43a,	// (0x00076ea7) postcard_pane_g_ParamLimits

0xf43a,	// (0x00076ea7) postcard_pane_g

0x95cb,	// (0x00071038) main_mp2_pane_g1_ParamLimits

0x95cb,	// (0x00071038) main_mp2_pane_g1

0x95d9,	// (0x00071046) main_mp2_pane_g2_ParamLimits

0x95d9,	// (0x00071046) main_mp2_pane_g2

0x95e5,	// (0x00071052) main_mp2_pane_g3_ParamLimits

0x95e5,	// (0x00071052) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00076eb6) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00076eb6) main_mp2_pane_g

0x95f1,	// (0x0007105e) main_mp2_pane_t1_ParamLimits

0x95f1,	// (0x0007105e) main_mp2_pane_t1

0x9608,	// (0x00071075) main_mp2_pane_t2_ParamLimits

0x9608,	// (0x00071075) main_mp2_pane_t2

0x961c,	// (0x00071089) main_mp2_pane_t3_ParamLimits

0x961c,	// (0x00071089) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00076ebd) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00076ebd) main_mp2_pane_t

0x0de0,	// (0x0006884d) pec_content_pane_ParamLimits

0x0de0,	// (0x0006884d) pec_content_pane

0x033c,	// (0x00067da9) scroll_pane_cp015

0x0df2,	// (0x0006885f) pec_attribute_pane_ParamLimits

0x0df2,	// (0x0006885f) pec_attribute_pane

0x962e,	// (0x0007109b) pec_content_pane_g1_ParamLimits

0x962e,	// (0x0007109b) pec_content_pane_g1

0x0e02,	// (0x0006886f) pec_content_pane_t1_ParamLimits

0x0e02,	// (0x0006886f) pec_content_pane_t1

0x0e14,	// (0x00068881) pec_content_pane_t2_ParamLimits

0x0e14,	// (0x00068881) pec_content_pane_t2

0x0001,

0xf457,	// (0x00076ec4) pec_content_pane_t_ParamLimits

0xf457,	// (0x00076ec4) pec_content_pane_t

0x963a,	// (0x000710a7) list_single_graphic_pane_cp01_ParamLimits

0x963a,	// (0x000710a7) list_single_graphic_pane_cp01

0x5000,	// (0x0006ca6d) bg_popup_sub_pane_cp04

0x0e26,	// (0x00068893) popup_mup_playback_window_g1

0x0e32,	// (0x0006889f) popup_mup_playback_window_t1

0x0e47,	// (0x000688b4) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00076ec9) popup_mup_playback_window_t

0x0e7e,	// (0x000688eb) main_image_pane_g1_ParamLimits

0x0e7e,	// (0x000688eb) main_image_pane_g1

0x0ec1,	// (0x0006892e) scroll_pane_cp018_ParamLimits

0x0ec1,	// (0x0006892e) scroll_pane_cp018

0x0ed9,	// (0x00068946) scroll_pane_cp016_ParamLimits

0x0ed9,	// (0x00068946) scroll_pane_cp016

0x96c8,	// (0x00071135) smil2_image_pane_ParamLimits

0x96c8,	// (0x00071135) smil2_image_pane

0x96fe,	// (0x0007116b) smil2_root_pane_ParamLimits

0x96fe,	// (0x0007116b) smil2_root_pane

0x972a,	// (0x00071197) smil2_text_pane_ParamLimits

0x972a,	// (0x00071197) smil2_text_pane

0x4da5,	// (0x0006c812) bg_list_pane_cp06

0x0f15,	// (0x00068982) grid_radio_pane

0x4da5,	// (0x0006c812) bg_popup_window_pane_cp06

0x0f1f,	// (0x0006898c) main_fmradio_pane_t1

0x1ebf,	// (0x0006992c) heading_pane_cp04

0x0f2d,	// (0x0006899a) main_fmradio_pane_t2

0x1ec7,	// (0x00069934) popup_cale_lunar_info_window_g1

0x0f3b,	// (0x000689a8) main_fmradio_pane_t3

0x1ecf,	// (0x0006993c) popup_cale_lunar_info_window_g2

0x0f4b,	// (0x000689b8) main_fmradio_pane_t4

0x0001,

0x0f59,	// (0x000689c6) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x00076fa9) popup_cale_lunar_info_window_g

0xf471,	// (0x00076ede) main_fmradio_pane_t

0x0f67,	// (0x000689d4) wait_bar_pane_cp03

0x0f6f,	// (0x000689dc) cell_fmradio_pane_ParamLimits

0x0f6f,	// (0x000689dc) cell_fmradio_pane

0x0dc4,	// (0x00068831) cell_fmradio_pane_g1_ParamLimits

0x0dc4,	// (0x00068831) cell_fmradio_pane_g1

0x4da5,	// (0x0006c812) grid_highlight_pane_cp011

0x0f84,	// (0x000689f1) poc_content_pane_ParamLimits

0x0f84,	// (0x000689f1) poc_content_pane

0x0f96,	// (0x00068a03) scroll_pane_cp019

0x976a,	// (0x000711d7) popup_call_poc_act_window_ParamLimits

0x976a,	// (0x000711d7) popup_call_poc_act_window

0x9777,	// (0x000711e4) popup_call_poc_inact_window_ParamLimits

0x9777,	// (0x000711e4) popup_call_poc_inact_window

0xf513,	// (0x00076f80) bg_popup_call_poc_act_pane_g

0x1e37,	// (0x000698a4) bg_popup_call_poc_inact_pane_g1

0x1e3f,	// (0x000698ac) bg_popup_call_poc_inact_pane_g2

0x0f9e,	// (0x00068a0b) popup_call_poc_act_window_g2

0x1e47,	// (0x000698b4) bg_popup_call_poc_inact_pane_g3

0x1e4f,	// (0x000698bc) bg_popup_call_poc_inact_pane_g4

0x1e57,	// (0x000698c4) bg_popup_call_poc_inact_pane_g5

0x0fa6,	// (0x00068a13) popup_call_poc_act_window_t1_ParamLimits

0x0fa6,	// (0x00068a13) popup_call_poc_act_window_t1

0x0fce,	// (0x00068a3b) popup_call_poc_act_window_t2_ParamLimits

0x0fce,	// (0x00068a3b) popup_call_poc_act_window_t2

0x0ff6,	// (0x00068a63) popup_call_poc_act_window_t3_ParamLimits

0x0ff6,	// (0x00068a63) popup_call_poc_act_window_t3

0x101e,	// (0x00068a8b) popup_call_poc_act_window_t4_ParamLimits

0x101e,	// (0x00068a8b) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00076ee9) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00076ee9) popup_call_poc_act_window_t

0x1e5f,	// (0x000698cc) bg_popup_call_poc_inact_pane_g6

0x1e67,	// (0x000698d4) bg_popup_call_poc_inact_pane_g7

0x1e6f,	// (0x000698dc) bg_popup_call_poc_inact_pane_g8

0x1030,	// (0x00068a9d) popup_call_poc_inact_window_g2

0x1e77,	// (0x000698e4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x00076f6d) bg_popup_call_poc_inact_pane_g

0x1038,	// (0x00068aa5) popup_call_poc_inact_window_t1_ParamLimits

0x1038,	// (0x00068aa5) popup_call_poc_inact_window_t1

0x104d,	// (0x00068aba) popup_call_poc_inact_window_t2_ParamLimits

0x104d,	// (0x00068aba) popup_call_poc_inact_window_t2

0x1062,	// (0x00068acf) popup_call_poc_inact_window_t3_ParamLimits

0x1062,	// (0x00068acf) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00076ef2) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00076ef2) popup_call_poc_inact_window_t

0x1fbd,	// (0x00069a2a) context_pane_ParamLimits

0x9e14,	// (0x00071881) signal_pane_ParamLimits

0x0182,	// (0x00067bef) main_call2_pane

0x9d80,	// (0x000717ed) popup_phob_thumbnail2_window_ParamLimits

0x9d80,	// (0x000717ed) popup_phob_thumbnail2_window

0x9431,	// (0x00070e9e) aid_hotspot_pointer_arrow_pane

0x9439,	// (0x00070ea6) aid_hotspot_pointer_hand_pane

0x9abf,	// (0x0007152c) phob_pre_status_pane_g5

0x506d,	// (0x0006cada) cams_zoom_pane_ParamLimits

0x506d,	// (0x0006cada) image_vga_pane_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g1_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g3_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g4_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g5_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g6_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00076c18) main_camera_pane_g_ParamLimits

0x0c95,	// (0x00068702) main_camera_pane_t1_ParamLimits

0x0c95,	// (0x00068702) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00076c29) main_camera_pane_t_ParamLimits

0x5000,	// (0x0006ca6d) bg_popup_preview_window_pane_cp01_ParamLimits

0x5000,	// (0x0006ca6d) bg_popup_preview_window_pane_cp01

0x1077,	// (0x00068ae4) popup_phob_thumbnail2_window_g1_ParamLimits

0x1077,	// (0x00068ae4) popup_phob_thumbnail2_window_g1

0x4da5,	// (0x0006c812) call2_cli_visual_pane

0x9793,	// (0x00071200) popup_call2_audio_conf_window_ParamLimits

0x9793,	// (0x00071200) popup_call2_audio_conf_window

0x97ac,	// (0x00071219) popup_call2_audio_first_window_ParamLimits

0x97ac,	// (0x00071219) popup_call2_audio_first_window

0x984a,	// (0x000712b7) popup_call2_audio_in_window_ParamLimits

0x984a,	// (0x000712b7) popup_call2_audio_in_window

0x988e,	// (0x000712fb) popup_call2_audio_out_window_ParamLimits

0x988e,	// (0x000712fb) popup_call2_audio_out_window

0x98f8,	// (0x00071365) popup_call2_audio_second_window_ParamLimits

0x98f8,	// (0x00071365) popup_call2_audio_second_window

0x9956,	// (0x000713c3) popup_call2_audio_wait_window_ParamLimits

0x9956,	// (0x000713c3) popup_call2_audio_wait_window

0x4da5,	// (0x0006c812) bg_popup_call2_act_pane_cp03

0x4fe2,	// (0x0006ca4f) list_conf_pane_cp

0x1083,	// (0x00068af0) popup_call2_audio_conf_window_t1

0x1091,	// (0x00068afe) list_single_graphic_popup_conf2_pane_ParamLimits

0x1091,	// (0x00068afe) list_single_graphic_popup_conf2_pane

0x09cb,	// (0x00068438) list_highlight_pane_cp04

0x10a4,	// (0x00068b11) list_single_graphic_popup_conf2_pane_g1

0x09dc,	// (0x00068449) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00076ef9) list_single_graphic_popup_conf2_pane_g

0x10ae,	// (0x00068b1b) list_single_graphic_popup_conf2_pane_t1

0x10bc,	// (0x00068b29) bg_popup_call2_act_pane_cp01_ParamLimits

0x10bc,	// (0x00068b29) bg_popup_call2_act_pane_cp01

0x1146,	// (0x00068bb3) call_type_pane_cp05_ParamLimits

0x1146,	// (0x00068bb3) call_type_pane_cp05

0x119a,	// (0x00068c07) popup_call2_audio_second_window_g1_ParamLimits

0x119a,	// (0x00068c07) popup_call2_audio_second_window_g1

0x11ee,	// (0x00068c5b) popup_call2_audio_second_window_g2_ParamLimits

0x11ee,	// (0x00068c5b) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00076efe) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00076efe) popup_call2_audio_second_window_g

0x1253,	// (0x00068cc0) popup_call2_audio_second_window_t1_ParamLimits

0x1253,	// (0x00068cc0) popup_call2_audio_second_window_t1

0x130e,	// (0x00068d7b) popup_call2_audio_second_window_t2_ParamLimits

0x130e,	// (0x00068d7b) popup_call2_audio_second_window_t2

0x1361,	// (0x00068dce) popup_call2_audio_second_window_t3_ParamLimits

0x1361,	// (0x00068dce) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x00076f05) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x00076f05) popup_call2_audio_second_window_t

0x4da5,	// (0x0006c812) bg_popup_call2_in_pane_cp02

0x4daf,	// (0x0006c81c) call_type_pane_cp04

0x9995,	// (0x00071402) popup_call2_audio_wait_window_g1

0x999d,	// (0x0007140a) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00076f0e) popup_call2_audio_wait_window_g

0x4dc7,	// (0x0006c834) popup_call2_audio_wait_window_t3

0x1454,	// (0x00068ec1) bg_popup_call2_act_pane_ParamLimits

0x1454,	// (0x00068ec1) bg_popup_call2_act_pane

0x1514,	// (0x00068f81) call_type_pane_cp03_ParamLimits

0x1514,	// (0x00068f81) call_type_pane_cp03

0x1578,	// (0x00068fe5) popup_call2_audio_first_window_g1_ParamLimits

0x1578,	// (0x00068fe5) popup_call2_audio_first_window_g1

0x15e8,	// (0x00069055) popup_call2_audio_first_window_g2_ParamLimits

0x15e8,	// (0x00069055) popup_call2_audio_first_window_g2

0x164c,	// (0x000690b9) popup_call2_audio_first_window_g3_ParamLimits

0x164c,	// (0x000690b9) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00076f13) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00076f13) popup_call2_audio_first_window_g

0x16d4,	// (0x00069141) popup_call2_audio_first_window_t1_ParamLimits

0x16d4,	// (0x00069141) popup_call2_audio_first_window_t1

0x17d7,	// (0x00069244) popup_call2_audio_first_window_t4_ParamLimits

0x17d7,	// (0x00069244) popup_call2_audio_first_window_t4

0x18ba,	// (0x00069327) popup_call2_audio_first_window_t5_ParamLimits

0x18ba,	// (0x00069327) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00076f1e) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00076f1e) popup_call2_audio_first_window_t

0x4ff8,	// (0x0006ca65) bg_popup_call2_act_pane_g1

0x1ed9,	// (0x00069946) popup_cale_lunar_info_window_t1

0x1ee7,	// (0x00069954) popup_cale_lunar_info_window_t2

0x1ef5,	// (0x00069962) popup_cale_lunar_info_window_t3

0x4da5,	// (0x0006c812) bg_popup_call2_bubble_pane

0x19bb,	// (0x00069428) bg_popup_call2_in_pane_cp01_ParamLimits

0x19bb,	// (0x00069428) bg_popup_call2_in_pane_cp01

0x4688,	// (0x0006c0f5) call_type_pane_cp02

0x99a5,	// (0x00071412) popup_call2_audio_out_window_g1_ParamLimits

0x99a5,	// (0x00071412) popup_call2_audio_out_window_g1

0x1a03,	// (0x00069470) popup_call2_audio_out_window_g2_ParamLimits

0x1a03,	// (0x00069470) popup_call2_audio_out_window_g2

0x99d1,	// (0x0007143e) popup_call2_audio_out_window_g3_ParamLimits

0x99d1,	// (0x0007143e) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00076f27) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00076f27) popup_call2_audio_out_window_g

0x1a3a,	// (0x000694a7) popup_call2_audio_out_window_t1_ParamLimits

0x1a3a,	// (0x000694a7) popup_call2_audio_out_window_t1

0x1a99,	// (0x00069506) popup_call2_audio_out_window_t2_ParamLimits

0x1a99,	// (0x00069506) popup_call2_audio_out_window_t2

0x1aed,	// (0x0006955a) popup_call2_audio_out_window_t3_ParamLimits

0x1aed,	// (0x0006955a) popup_call2_audio_out_window_t3

0x1b03,	// (0x00069570) popup_call2_audio_out_window_t4_ParamLimits

0x1b03,	// (0x00069570) popup_call2_audio_out_window_t4

0x1b19,	// (0x00069586) popup_call2_audio_out_window_t5_ParamLimits

0x1b19,	// (0x00069586) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00076f30) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00076f30) popup_call2_audio_out_window_t

0x1b7d,	// (0x000695ea) bg_popup_call2_in_pane_ParamLimits

0x1b7d,	// (0x000695ea) bg_popup_call2_in_pane

0x1bd9,	// (0x00069646) popup_call2_audio_in_window_g1_ParamLimits

0x1bd9,	// (0x00069646) popup_call2_audio_in_window_g1

0x1c11,	// (0x0006967e) popup_call2_audio_in_window_g2_ParamLimits

0x1c11,	// (0x0006967e) popup_call2_audio_in_window_g2

0x1c49,	// (0x000696b6) popup_call2_audio_in_window_g3_ParamLimits

0x1c49,	// (0x000696b6) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00076f3d) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00076f3d) popup_call2_audio_in_window_g

0x1ca1,	// (0x0006970e) popup_call2_audio_in_window_t1_ParamLimits

0x1ca1,	// (0x0006970e) popup_call2_audio_in_window_t1

0x1d21,	// (0x0006978e) popup_call2_audio_in_window_t2_ParamLimits

0x1d21,	// (0x0006978e) popup_call2_audio_in_window_t2

0x1da1,	// (0x0006980e) popup_call2_audio_in_window_t3_ParamLimits

0x1da1,	// (0x0006980e) popup_call2_audio_in_window_t3

0x1dbb,	// (0x00069828) popup_call2_audio_in_window_t4_ParamLimits

0x1dbb,	// (0x00069828) popup_call2_audio_in_window_t4

0x1dcd,	// (0x0006983a) popup_call2_audio_in_window_t5_ParamLimits

0x1dcd,	// (0x0006983a) popup_call2_audio_in_window_t5

0x1de2,	// (0x0006984f) popup_call2_audio_in_window_t6_ParamLimits

0x1de2,	// (0x0006984f) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00076f46) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00076f46) popup_call2_audio_in_window_t

0x4ff8,	// (0x0006ca65) bg_popup_call2_in_pane_g1

0x1f03,	// (0x00069970) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x00076fae) popup_cale_lunar_info_window_t

0x5000,	// (0x0006ca6d) bg_popup_call2_rect_pane_ParamLimits

0x5000,	// (0x0006ca6d) bg_popup_call2_rect_pane

0x4da5,	// (0x0006c812) call2_cli_visual_graphic_pane

0x4da5,	// (0x0006c812) call2_cli_visual_text_pane

0x9e3c,	// (0x000718a9) smil_status_volume_pane_g3

0x0002,

0x5018,	// (0x0006ca85) call2_cli_visual_graphic_pane_g1

0x5018,	// (0x0006ca85) call2_cli_visual_graphic_pane_g2

0x5018,	// (0x0006ca85) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00076f53) call2_cli_visual_graphic_pane_g

0x1df7,	// (0x00069864) bg_popup_call2_rect_pane_g1

0x51cd,	// (0x0006cc3a) bg_popup_call2_rect_pane_g2

0x1dff,	// (0x0006986c) bg_popup_call2_rect_pane_g3

0x1e07,	// (0x00069874) bg_popup_call2_rect_pane_g4

0x1e0f,	// (0x0006987c) bg_popup_call2_rect_pane_g5

0x1e17,	// (0x00069884) bg_popup_call2_rect_pane_g6

0x1e1f,	// (0x0006988c) bg_popup_call2_rect_pane_g7

0x1e27,	// (0x00069894) bg_popup_call2_rect_pane_g8

0x1e2f,	// (0x0006989c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00076f5a) bg_popup_call2_rect_pane_g

0x1e37,	// (0x000698a4) bg_popup_call2_bubble_pane_g1

0x1e3f,	// (0x000698ac) bg_popup_call2_bubble_pane_g2

0x1e47,	// (0x000698b4) bg_popup_call2_bubble_pane_g3

0x1e4f,	// (0x000698bc) bg_popup_call2_bubble_pane_g4

0x1e57,	// (0x000698c4) bg_popup_call2_bubble_pane_g5

0x1e5f,	// (0x000698cc) bg_popup_call2_bubble_pane_g6

0x1e67,	// (0x000698d4) bg_popup_call2_bubble_pane_g7

0x1e6f,	// (0x000698dc) bg_popup_call2_bubble_pane_g8

0x1e77,	// (0x000698e4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00076f6d) bg_popup_call2_bubble_pane_g

0x73cd,	// (0x0006ee3a) aid_cale_week_size_cell_pane

0x5000,	// (0x0006ca6d) aid_cams_cif_uncrop_pane_ParamLimits

0x5000,	// (0x0006ca6d) aid_cams_cif_uncrop_pane

0x7bbc,	// (0x0006f629) aid_cams_size_cell_ParamLimits

0x7bbc,	// (0x0006f629) aid_cams_size_cell

0x7bc8,	// (0x0006f635) grid_cams_pane_ParamLimits

0x7bd6,	// (0x0006f643) linegrid_cams_pane_ParamLimits

0x7ca7,	// (0x0006f714) call_video_pane_t1

0x7cc4,	// (0x0006f731) call_video_pane_t2

0x0001,

0xf208,	// (0x00076c75) call_video_pane_t

0x8133,	// (0x0006fba0) aid_cale_month_size_cell_pane_ParamLimits

0x8133,	// (0x0006fba0) aid_cale_month_size_cell_pane

0xf585,	// (0x00076ff2) smil_status_volume_pane_g

0x9e49,	// (0x000718b6) volume_smil_pane_ParamLimits

0x6cd2,	// (0x0006e73f) aid_popup2_width_pane

0x72d9,	// (0x0006ed46) cell_qdial_pane_g4_ParamLimits

0x72d9,	// (0x0006ed46) cell_qdial_pane_g4

0x8ffc,	// (0x00070a69) aid_blid_cardinal_pane_ParamLimits

0x900c,	// (0x00070a79) aid_blid_destination_pane_ParamLimits

0x900c,	// (0x00070a79) aid_blid_destination_pane

0x5000,	// (0x0006ca6d) bg_popup_call_poc_act_pane_ParamLimits

0x5000,	// (0x0006ca6d) bg_popup_call_poc_act_pane

0x5000,	// (0x0006ca6d) bg_popup_call_poc_inact_pane_ParamLimits

0x5000,	// (0x0006ca6d) bg_popup_call_poc_inact_pane

0x1e7f,	// (0x000698ec) bg_popup_call_poc_act_pane_g1

0x1e87,	// (0x000698f4) bg_popup_call_poc_act_pane_g2

0x1e8f,	// (0x000698fc) bg_popup_call_poc_act_pane_g3

0x1e4f,	// (0x000698bc) bg_popup_call_poc_act_pane_g4

0x1e57,	// (0x000698c4) bg_popup_call_poc_act_pane_g5

0x1e97,	// (0x00069904) bg_popup_call_poc_act_pane_g6

0x1e67,	// (0x000698d4) bg_popup_call_poc_act_pane_g7

0x1e9f,	// (0x0006990c) bg_popup_call_poc_act_pane_g8

0x4da5,	// (0x0006c812) main_usb_pane

0x9c9d,	// (0x0007170a) popup_cale_lunar_info_window

0x7fdc,	// (0x0006fa49) im_reading_pane_t1_ParamLimits

0x0294,	// (0x00067d01) list_im_pane_ParamLimits

0x02a5,	// (0x00067d12) scroll_pane_cp07_ParamLimits

0x4da5,	// (0x0006c812) grid_highlight_pane_cp012

0x5000,	// (0x0006ca6d) mup_scale_pane_ParamLimits

0x164c,	// (0x000690b9) main_usb_pane_g1_ParamLimits

0x164c,	// (0x000690b9) main_usb_pane_g1

0x9a27,	// (0x00071494) main_usb_pane_g2_ParamLimits

0x9a27,	// (0x00071494) main_usb_pane_g2

0x0001,

0xf52a,	// (0x00076f97) main_usb_pane_g_ParamLimits

0xf52a,	// (0x00076f97) main_usb_pane_g

0x9a33,	// (0x000714a0) main_usb_pane_t1_ParamLimits

0x9a33,	// (0x000714a0) main_usb_pane_t1

0x9a45,	// (0x000714b2) main_usb_pane_t2_ParamLimits

0x9a45,	// (0x000714b2) main_usb_pane_t2

0x9a57,	// (0x000714c4) main_usb_pane_t3_ParamLimits

0x9a57,	// (0x000714c4) main_usb_pane_t3

0x9a69,	// (0x000714d6) main_usb_pane_t4_ParamLimits

0x9a69,	// (0x000714d6) main_usb_pane_t4

0x9a7b,	// (0x000714e8) main_usb_pane_t5_ParamLimits

0x9a7b,	// (0x000714e8) main_usb_pane_t5

0x9a8d,	// (0x000714fa) main_usb_pane_t6_ParamLimits

0x9a8d,	// (0x000714fa) main_usb_pane_t6

0x0005,

0xf52f,	// (0x00076f9c) main_usb_pane_t_ParamLimits

0x8f9b,	// (0x00070a08) aid_text_placing

0x8fa6,	// (0x00070a13) main_location2_pane_t1_ParamLimits

0x8fbc,	// (0x00070a29) main_location2_pane_t2_ParamLimits

0x8fd2,	// (0x00070a3f) main_location2_pane_t3_ParamLimits

0x8fe8,	// (0x00070a55) main_location2_pane_t4_ParamLimits

0x8fe8,	// (0x00070a55) main_location2_pane_t4

0xf349,	// (0x00076db6) main_location2_pane_t_ParamLimits

0x502e,	// (0x0006ca9b) find_pinb_pane_g2_ParamLimits

0x502e,	// (0x0006ca9b) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00076b2d) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00076b2d) find_pinb_pane_g

0x503a,	// (0x0006caa7) find_pinb_pane_t1_ParamLimits

0x504c,	// (0x0006cab9) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00076b32) find_pinb_pane_t_ParamLimits

0x4da5,	// (0x0006c812) main_call3_pane

0x86e6,	// (0x00070153) cale_month_day_heading_pane_t1_ParamLimits

0x8768,	// (0x000701d5) cale_month_day_heading_pane_t2_ParamLimits

0x87e1,	// (0x0007024e) cale_month_day_heading_pane_t3_ParamLimits

0x885a,	// (0x000702c7) cale_month_day_heading_pane_t4_ParamLimits

0x88d3,	// (0x00070340) cale_month_day_heading_pane_t5_ParamLimits

0x8954,	// (0x000703c1) cale_month_day_heading_pane_t6_ParamLimits

0x89dd,	// (0x0007044a) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00076cad) cale_month_day_heading_pane_t_ParamLimits

0x0524,	// (0x00067f91) smil_status_volume_pane

0x957d,	// (0x00070fea) postcard_address_pane_ParamLimits

0x957d,	// (0x00070fea) postcard_address_pane

0x958b,	// (0x00070ff8) postcard_message_pane_ParamLimits

0x958b,	// (0x00070ff8) postcard_message_pane

0x99fd,	// (0x0007146a) call2_cli_visual_pane_t1_ParamLimits

0x99fd,	// (0x0007146a) call2_cli_visual_pane_t1

0x20a5,	// (0x00069b12) postcard_message_pane_t1_ParamLimits

0x20a5,	// (0x00069b12) postcard_message_pane_t1

0x208d,	// (0x00069afa) postcard_address_pane_t1_ParamLimits

0x208d,	// (0x00069afa) postcard_address_pane_t1

0x9f80,	// (0x000719ed) popup_call3_audio_in_window_ParamLimits

0x9f80,	// (0x000719ed) popup_call3_audio_in_window

0x9e5e,	// (0x000718cb) bg_popup_call3_in_pane_ParamLimits

0x9e5e,	// (0x000718cb) bg_popup_call3_in_pane

0x9ec6,	// (0x00071933) popup_call3_audio_in_window_g1_ParamLimits

0x9ec6,	// (0x00071933) popup_call3_audio_in_window_g1

0x9ede,	// (0x0007194b) popup_call3_audio_in_window_g2_ParamLimits

0x9ede,	// (0x0007194b) popup_call3_audio_in_window_g2

0x9ef6,	// (0x00071963) popup_call3_audio_in_window_g3_ParamLimits

0x9ef6,	// (0x00071963) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x00076ff9) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x00076ff9) popup_call3_audio_in_window_g

0x9f1e,	// (0x0007198b) popup_call3_audio_in_window_t1_ParamLimits

0x9f1e,	// (0x0007198b) popup_call3_audio_in_window_t1

0x9f46,	// (0x000719b3) popup_call3_audio_in_window_t2_ParamLimits

0x9f46,	// (0x000719b3) popup_call3_audio_in_window_t2

0x9f6e,	// (0x000719db) popup_call3_audio_in_window_t3_ParamLimits

0x9f6e,	// (0x000719db) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x00077002) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x00077002) popup_call3_audio_in_window_t

0x0182,	// (0x00067bef) bg_popup_call3_rect_pane

0x1df7,	// (0x00069864) bg_popup_call3_rect_pane_g1

0x51cd,	// (0x0006cc3a) bg_popup_call3_rect_pane_g2

0x1dff,	// (0x0006986c) bg_popup_call3_rect_pane_g3

0x1e07,	// (0x00069874) bg_popup_call3_rect_pane_g4

0x1e0f,	// (0x0006987c) bg_popup_call3_rect_pane_g5

0x1e17,	// (0x00069884) bg_popup_call3_rect_pane_g6

0x1e1f,	// (0x0006988c) bg_popup_call3_rect_pane_g7

0x455a,	// (0x0006bfc7) mup_visualizer_osc_pane

0x455a,	// (0x0006bfc7) mup_visualizer_spec_pane

0x9e7e,	// (0x000718eb) call3_video_qcif_pane_ParamLimits

0x9e7e,	// (0x000718eb) call3_video_qcif_pane

0x9e90,	// (0x000718fd) call3_video_qcif_uncrop_pane_ParamLimits

0x9e90,	// (0x000718fd) call3_video_qcif_uncrop_pane

0x9ea0,	// (0x0007190d) call3_video_subqcif_pane_ParamLimits

0x9ea0,	// (0x0007190d) call3_video_subqcif_pane

0x9eb4,	// (0x00071921) call3_video_subqcif_uncrop_pane_ParamLimits

0x9eb4,	// (0x00071921) call3_video_subqcif_uncrop_pane

0x9f0e,	// (0x0007197b) popup_call3_audio_in_window_g4_ParamLimits

0x9f0e,	// (0x0007197b) popup_call3_audio_in_window_g4

0x455a,	// (0x0006bfc7) mup_spec_half_pane

0x455a,	// (0x0006bfc7) mup_spec_half_pane_cp

0x455a,	// (0x0006bfc7) mup_osc_middle_pane

0x01d7,	// (0x00067c44) mup_visualizer_osc_pane_g1

0x201e,	// (0x00069a8b) mup_spec_bar_pane_ParamLimits

0x201e,	// (0x00069a8b) mup_spec_bar_pane

0x01d7,	// (0x00067c44) mup_spec_bar_pane_g1

0x01d7,	// (0x00067c44) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00076e30) mup_spec_bar_pane_g

0x73cd,	// (0x0006ee3a) aid_cale_week_size_cell_pane_ParamLimits

0x73e7,	// (0x0006ee54) bg_cale_heading_pane_ParamLimits

0x7410,	// (0x0006ee7d) bg_cale_pane_cp01_ParamLimits

0x7432,	// (0x0006ee9f) cale_week_corner_pane_ParamLimits

0x7451,	// (0x0006eebe) cale_week_day_heading_pane_ParamLimits

0x747f,	// (0x0006eeec) cale_week_scroll_pane_g1_ParamLimits

0x74a3,	// (0x0006ef10) cale_week_scroll_pane_g2_ParamLimits

0x74bb,	// (0x0006ef28) cale_week_scroll_pane_g3_ParamLimits

0x74d3,	// (0x0006ef40) cale_week_scroll_pane_g4_ParamLimits

0x74eb,	// (0x0006ef58) cale_week_scroll_pane_g5_ParamLimits

0x7503,	// (0x0006ef70) cale_week_scroll_pane_g6_ParamLimits

0x7523,	// (0x0006ef90) cale_week_scroll_pane_g7_ParamLimits

0x7543,	// (0x0006efb0) cale_week_scroll_pane_g8_ParamLimits

0x7563,	// (0x0006efd0) cale_week_scroll_pane_g9_ParamLimits

0x7580,	// (0x0006efed) cale_week_scroll_pane_g10_ParamLimits

0x759d,	// (0x0006f00a) cale_week_scroll_pane_g11_ParamLimits

0x75bc,	// (0x0006f029) cale_week_scroll_pane_g12_ParamLimits

0x75e1,	// (0x0006f04e) cale_week_scroll_pane_g13_ParamLimits

0x760a,	// (0x0006f077) cale_week_scroll_pane_g14_ParamLimits

0x7633,	// (0x0006f0a0) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00076bbe) cale_week_scroll_pane_g_ParamLimits

0x767c,	// (0x0006f0e9) cale_week_time_pane_ParamLimits

0x769c,	// (0x0006f109) grid_cale_week_pane_ParamLimits

0x00f8,	// (0x00067b65) listscroll_cale_week_pane_t1

0x010a,	// (0x00067b77) scroll_pane_cp08_ParamLimits

0x81ab,	// (0x0006fc18) cale_month_corner_pane_ParamLimits

0x04ee,	// (0x00067f5b) cale_month_pane_t1

0x866d,	// (0x000700da) cale_month_week_pane_ParamLimits

0x164c,	// (0x000690b9) popup_call_status_window_g1_ParamLimits

0x8ddf,	// (0x0007084c) popup_call_status_window_g2_ParamLimits

0x8deb,	// (0x00070858) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00076d3d) popup_call_status_window_g_ParamLimits

0x08f1,	// (0x0006835e) aid_call2_pane

0x6069,	// (0x0006dad6) msg_header_pane_g1

0x957d,	// (0x00070fea) postcard_address2_pane_ParamLimits

0x957d,	// (0x00070fea) postcard_address2_pane

0x958b,	// (0x00070ff8) postcard_message2_pane_ParamLimits

0x958b,	// (0x00070ff8) postcard_message2_pane

0x9e22,	// (0x0007188f) message2_row_pane_ParamLimits

0x9e22,	// (0x0007188f) message2_row_pane

0x1fd8,	// (0x00069a45) address2_row_pane_ParamLimits

0x1fd8,	// (0x00069a45) address2_row_pane

0x1feb,	// (0x00069a58) postcard_message2_row_pane_g1

0x1ff3,	// (0x00069a60) postcard_message2_row_pane_t1

0x1feb,	// (0x00069a58) address2_row_pane_g1

0x1ff3,	// (0x00069a60) address2_row_pane_t1

0x7a2a,	// (0x0006f497) aid_size_cell_vorec

0x4da5,	// (0x0006c812) main_rss_pane

0x2001,	// (0x00069a6e) rss_list_single_pane_ParamLimits

0x2001,	// (0x00069a6e) rss_list_single_pane

0x200f,	// (0x00069a7c) rss_list_single_pane_t1

0x200f,	// (0x00069a7c) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x00076fed) rss_list_single_pane_t

0x4da5,	// (0x0006c812) main_camera2_pane

0x4da5,	// (0x0006c812) main_video2_pane

0x506d,	// (0x0006cada) cams_zoom_pane_cp2_ParamLimits

0x506d,	// (0x0006cada) cams_zoom_pane_cp2

0x506d,	// (0x0006cada) image2_vga_pane_ParamLimits

0x506d,	// (0x0006cada) image2_vga_pane

0x5089,	// (0x0006caf6) main_camera2_pane_g1_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g1

0x5089,	// (0x0006caf6) main_camera2_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g2

0x5089,	// (0x0006caf6) main_camera2_pane_g3_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g3

0x5089,	// (0x0006caf6) main_camera2_pane_g4_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g4

0x5089,	// (0x0006caf6) main_camera2_pane_g5_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g5

0x5089,	// (0x0006caf6) main_camera2_pane_g6_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g6

0x5089,	// (0x0006caf6) main_camera2_pane_g7_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g7

0x5089,	// (0x0006caf6) main_camera2_pane_g8_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x00077009) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x00077009) main_camera2_pane_g

0x0c95,	// (0x00068702) main_camera2_pane_t1_ParamLimits

0x0c95,	// (0x00068702) main_camera2_pane_t1

0x0c95,	// (0x00068702) main_camera2_pane_t2_ParamLimits

0x0c95,	// (0x00068702) main_camera2_pane_t2

0x0c95,	// (0x00068702) main_camera2_pane_t3_ParamLimits

0x0c95,	// (0x00068702) main_camera2_pane_t3

0x0c95,	// (0x00068702) main_camera2_pane_t4_ParamLimits

0x0c95,	// (0x00068702) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x0007701c) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x0007701c) main_camera2_pane_t

0x0ca9,	// (0x00068716) cams_zoom_pane_cp4_ParamLimits

0x0ca9,	// (0x00068716) cams_zoom_pane_cp4

0x48f1,	// (0x0006c35e) image2_cif_pane_ParamLimits

0x48f1,	// (0x0006c35e) image2_cif_pane

0x506d,	// (0x0006cada) image2_subqcif_pane_ParamLimits

0x506d,	// (0x0006cada) image2_subqcif_pane

0x0c73,	// (0x000686e0) main_video2_pane_g1_ParamLimits

0x0c73,	// (0x000686e0) main_video2_pane_g1

0x0c73,	// (0x000686e0) main_video2_pane_g2_ParamLimits

0x0c73,	// (0x000686e0) main_video2_pane_g2

0x0c73,	// (0x000686e0) main_video2_pane_g3_ParamLimits

0x0c73,	// (0x000686e0) main_video2_pane_g3

0x0c73,	// (0x000686e0) main_video2_pane_g4_ParamLimits

0x0c73,	// (0x000686e0) main_video2_pane_g4

0x0c73,	// (0x000686e0) main_video2_pane_g5_ParamLimits

0x0c73,	// (0x000686e0) main_video2_pane_g5

0x0c73,	// (0x000686e0) main_video2_pane_g6_ParamLimits

0x0c73,	// (0x000686e0) main_video2_pane_g6

0x0005,

0xf5be,	// (0x0007702b) main_video2_pane_g_ParamLimits

0xf5be,	// (0x0007702b) main_video2_pane_g

0x0c81,	// (0x000686ee) main_video2_pane_t1_ParamLimits

0x0c81,	// (0x000686ee) main_video2_pane_t1

0x0c81,	// (0x000686ee) main_video2_pane_t2_ParamLimits

0x0c81,	// (0x000686ee) main_video2_pane_t2

0x0c81,	// (0x000686ee) main_video2_pane_t3_ParamLimits

0x0c81,	// (0x000686ee) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x00077038) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x00077038) main_video2_pane_t

0x9b23,	// (0x00071590) call_muted_g2

0x0001,

0xf572,	// (0x00076fdf) call_muted_g

0x4da5,	// (0x0006c812) main_mup2_pane

0x5097,	// (0x0006cb04) main_mup2_pane_g1_ParamLimits

0x5097,	// (0x0006cb04) main_mup2_pane_g1

0x5097,	// (0x0006cb04) main_mup2_pane_g2_ParamLimits

0x5097,	// (0x0006cb04) main_mup2_pane_g2

0x01d7,	// (0x00067c44) main_mup_pane_g13_cp1

0x455a,	// (0x0006bfc7) mup_volume_pane_cp1

0x5097,	// (0x0006cb04) main_mup2_pane_g4_ParamLimits

0x5097,	// (0x0006cb04) main_mup2_pane_g4

0x5097,	// (0x0006cb04) main_mup2_pane_g5_ParamLimits

0x5097,	// (0x0006cb04) main_mup2_pane_g5

0x5097,	// (0x0006cb04) main_mup2_pane_g6_ParamLimits

0x5097,	// (0x0006cb04) main_mup2_pane_g6

0x5097,	// (0x0006cb04) main_mup2_pane_g7_ParamLimits

0x5097,	// (0x0006cb04) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x0007703f) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x0007703f) main_mup2_pane_g

0x50a5,	// (0x0006cb12) main_mup2_pane_t1_ParamLimits

0x50a5,	// (0x0006cb12) main_mup2_pane_t1

0x50a5,	// (0x0006cb12) main_mup2_pane_t2_ParamLimits

0x50a5,	// (0x0006cb12) main_mup2_pane_t2

0x50a5,	// (0x0006cb12) main_mup2_pane_t3_ParamLimits

0x50a5,	// (0x0006cb12) main_mup2_pane_t3

0x50a5,	// (0x0006cb12) main_mup2_pane_t4_ParamLimits

0x50a5,	// (0x0006cb12) main_mup2_pane_t4

0x50a5,	// (0x0006cb12) main_mup2_pane_t5_ParamLimits

0x50a5,	// (0x0006cb12) main_mup2_pane_t5

0x50a5,	// (0x0006cb12) main_mup2_pane_t6_ParamLimits

0x50a5,	// (0x0006cb12) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x0007704e) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x0007704e) main_mup2_pane_t

0x2296,	// (0x00069d03) mup2_visualizer_pane_ParamLimits

0x2296,	// (0x00069d03) mup2_visualizer_pane

0x2296,	// (0x00069d03) mup_progress_pane_cp_ParamLimits

0x2296,	// (0x00069d03) mup_progress_pane_cp

0x2121,	// (0x00069b8e) mup_volume_pane_cp_ParamLimits

0x2121,	// (0x00069b8e) mup_volume_pane_cp

0x507b,	// (0x0006cae8) mup2_visualizer_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) mup2_visualizer_pane_g1

0x5089,	// (0x0006caf6) mup2_visualizer_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) mup2_visualizer_pane_g2

0x5089,	// (0x0006caf6) mup2_visualizer_pane_g3_ParamLimits

0x5089,	// (0x0006caf6) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00076b37) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00076b37) mup2_visualizer_pane_g

0x0f0d,	// (0x0006897a) aid_size_cell_fmradio

0x9c39,	// (0x000716a6) aid_height_parent_landcape

0x0323,	// (0x00067d90) wml_content_pane_cp

0x032b,	// (0x00067d98) wml_tabs_pane

0x0334,	// (0x00067da1) popup_wml_miniature_window

0x033c,	// (0x00067da9) scroll_pane_cp021

0x0350,	// (0x00067dbd) wml_content_pane_comp8

0x4da5,	// (0x0006c812) bg_popup_sub_pane_cp05

0x2137,	// (0x00069ba4) popup_wml_miniature_window_g1

0x213f,	// (0x00069bac) wml_miniature_view_pane

0x9fb1,	// (0x00071a1e) aid_size_wml_view

0x9fb9,	// (0x00071a26) wml_miniature_view_pane_g1

0x9fc2,	// (0x00071a2f) wml_miniature_view_pane_g2

0x9fcb,	// (0x00071a38) wml_miniature_view_pane_g3

0x9fd3,	// (0x00071a40) wml_miniature_view_pane_g4

0x9fdb,	// (0x00071a48) wml_miniature_view_pane_g5

0x9fe3,	// (0x00071a50) wml_miniature_view_pane_g6

0x9feb,	// (0x00071a58) wml_miniature_view_pane_g7

0x9ff3,	// (0x00071a60) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x0007705b) wml_miniature_view_pane_g

0x2147,	// (0x00069bb4) background_graphic_ParamLimits

0x2147,	// (0x00069bb4) background_graphic

0x2153,	// (0x00069bc0) wml_tabs_2_pane

0x215c,	// (0x00069bc9) wml_tabs_3_pane_ParamLimits

0x215c,	// (0x00069bc9) wml_tabs_3_pane

0x216e,	// (0x00069bdb) wml_tabs_4_pane_ParamLimits

0x216e,	// (0x00069bdb) wml_tabs_4_pane

0x2184,	// (0x00069bf1) wml_tabs_5_pane_ParamLimits

0x2184,	// (0x00069bf1) wml_tabs_5_pane

0x219e,	// (0x00069c0b) wml_tabs_pane_g2_ParamLimits

0x219e,	// (0x00069c0b) wml_tabs_pane_g2

0x21b3,	// (0x00069c20) wml_tabs_pane_g3_ParamLimits

0x21b3,	// (0x00069c20) wml_tabs_pane_g3

0x21c8,	// (0x00069c35) wml_tabs_2_active_pane_ParamLimits

0x21c8,	// (0x00069c35) wml_tabs_2_active_pane

0x21c8,	// (0x00069c35) wml_tabs_2_passive_pane_ParamLimits

0x21c8,	// (0x00069c35) wml_tabs_2_passive_pane

0x9ffb,	// (0x00071a68) wml_tabs_3_active_pane_cp_ParamLimits

0x9ffb,	// (0x00071a68) wml_tabs_3_active_pane_cp

0xa00e,	// (0x00071a7b) wml_tabs_3_passive_pane_ParamLimits

0xa00e,	// (0x00071a7b) wml_tabs_3_passive_pane

0xa01f,	// (0x00071a8c) wml_tabs_3_passive_pane_cp_ParamLimits

0xa01f,	// (0x00071a8c) wml_tabs_3_passive_pane_cp

0xa034,	// (0x00071aa1) tabs_4_active_pane

0xa03c,	// (0x00071aa9) tabs_4_passive_pane

0xa044,	// (0x00071ab1) tabs_4_passive_pane_cp

0xa04c,	// (0x00071ab9) tabs_4_passive_pane_cp2

0x9a1f,	// (0x0007148c) aid_height_text

0x2296,	// (0x00069d03) mup_volume_cont_pane_ParamLimits

0x2296,	// (0x00069d03) mup_volume_cont_pane

0x455a,	// (0x0006bfc7) aid_size_cell_pinb

0x455a,	// (0x0006bfc7) aid_size_list_pinb

0x2296,	// (0x00069d03) mup2_volume_cont_pane_ParamLimits

0x2296,	// (0x00069d03) mup2_volume_cont_pane

0xa056,	// (0x00071ac3) mup2_volume_cont_pane_g1_ParamLimits

0xa056,	// (0x00071ac3) mup2_volume_cont_pane_g1

0x6cde,	// (0x0006e74b) aid_size_cell_touch_ParamLimits

0x6cde,	// (0x0006e74b) aid_size_cell_touch

0x6f85,	// (0x0006e9f2) touch_pane_ParamLimits

0x6f85,	// (0x0006e9f2) touch_pane

0x455a,	// (0x0006bfc7) main_rss2_pane

0x2215,	// (0x00069c82) listscroll_rss2_pane

0x221e,	// (0x00069c8b) rss2_navigation_pane

0x2226,	// (0x00069c93) list_rss2_pane

0x0a70,	// (0x000684dd) scroll_pane_cp22

0x222e,	// (0x00069c9b) rss2_navigation_pane_g1

0x2237,	// (0x00069ca4) rss2_navigation_pane_g2

0x223f,	// (0x00069cac) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x0007706c) rss2_navigation_pane_g

0x2247,	// (0x00069cb4) rss2_navigation_pane_t1

0xa06c,	// (0x00071ad9) rss2_list_single_pane_ParamLimits

0xa06c,	// (0x00071ad9) rss2_list_single_pane

0x2255,	// (0x00069cc2) rss2_list_single_pane_t2

0x2263,	// (0x00069cd0) rss2_list_single_pane_t3_ParamLimits

0x2263,	// (0x00069cd0) rss2_list_single_pane_t3

0x2280,	// (0x00069ced) rss2_list_single_pane_t4

0x8c7b,	// (0x000706e8) smil_status_pane_g1

0x48f1,	// (0x0006c35e) main_image2_pane_ParamLimits

0x48f1,	// (0x0006c35e) main_image2_pane

0x5089,	// (0x0006caf6) main_camera2_pane_g9_ParamLimits

0x5089,	// (0x0006caf6) main_camera2_pane_g9

0x0c95,	// (0x00068702) main_camera2_pane_t5_ParamLimits

0x0c95,	// (0x00068702) main_camera2_pane_t5

0x9f9d,	// (0x00071a0a) main_camera2_pane_t6_ParamLimits

0x9f9d,	// (0x00071a0a) main_camera2_pane_t6

0xa08f,	// (0x00071afc) main_image2_pane_g1_ParamLimits

0xa08f,	// (0x00071afc) main_image2_pane_g1

0x9754,	// (0x000711c1) smil2_video_pane_ParamLimits

0x9754,	// (0x000711c1) smil2_video_pane

0x6001,	// (0x0006da6e) aid_zoom_text_primary_cp

0x6f2e,	// (0x0006e99b) popup_preview_fixed_window

0x028c,	// (0x00067cf9) im_reading_pane_g1

0x9f8f,	// (0x000719fc) cams2_bc_adjust_pane_cp_ParamLimits

0x9f8f,	// (0x000719fc) cams2_bc_adjust_pane_cp

0x506d,	// (0x0006cada) cams2_bc_adjust_pane_ParamLimits

0x506d,	// (0x0006cada) cams2_bc_adjust_pane

0x01d7,	// (0x00067c44) cams2_bc_adjust_pane_g1

0x455a,	// (0x0006bfc7) cams2_slider_pane

0x01d7,	// (0x00067c44) cams2_slider_pane_g1

0x01d7,	// (0x00067c44) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x00077073) cams2_slider_pane_g

0x701a,	// (0x0006ea87) calc_display_pane_ParamLimits

0x7038,	// (0x0006eaa5) calc_paper_pane_ParamLimits

0x7054,	// (0x0006eac1) grid_calc_pane_ParamLimits

0x8e49,	// (0x000708b6) popup_clock_digital_window_t1_ParamLimits

0x0eaa,	// (0x00068917) main_image_pane_t1

0x7000,	// (0x0006ea6d) aid_size_cell_calc_ParamLimits

0x7000,	// (0x0006ea6d) aid_size_cell_calc

0x9c73,	// (0x000716e0) popup_blid_sat_info2_window_ParamLimits

0x9c73,	// (0x000716e0) popup_blid_sat_info2_window

0x228e,	// (0x00069cfb) aid_size_cell_blid

0x2296,	// (0x00069d03) bg_popup_window_pane_cp07

0x22b9,	// (0x00069d26) grid_popup_blid_pane

0x22c3,	// (0x00069d30) heading_pane_cp05_ParamLimits

0x22c3,	// (0x00069d30) heading_pane_cp05

0x238d,	// (0x00069dfa) cell_popup_blid_pane_ParamLimits

0x238d,	// (0x00069dfa) cell_popup_blid_pane

0x23b7,	// (0x00069e24) cell_popup_blid_pane_g1

0x23bf,	// (0x00069e2c) cell_popup_blid_pane_t1

0x2296,	// (0x00069d03) mup2_indicator_pane_ParamLimits

0x2296,	// (0x00069d03) mup2_indicator_pane

0x455a,	// (0x0006bfc7) mup2_visualizer_osc_pane

0x2121,	// (0x00069b8e) mup2_visualizer_spec_pane_ParamLimits

0x2121,	// (0x00069b8e) mup2_visualizer_spec_pane

0x455a,	// (0x0006bfc7) mup2_spec_half_pane

0x455a,	// (0x0006bfc7) mup2_spec_half_pane_cp

0x23cd,	// (0x00069e3a) mup2_spec_bar_pane_ParamLimits

0x23cd,	// (0x00069e3a) mup2_spec_bar_pane

0x01d7,	// (0x00067c44) mup2_spec_bar_pane_g1

0x23ec,	// (0x00069e59) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x00077099) mup2_spec_bar_pane_g

0x455a,	// (0x0006bfc7) mup2_osc_middle_pane

0x01d7,	// (0x00067c44) mup2_visualizer_osc_pane_g1

0x4584,	// (0x0006bff1) popup_number_entry_window_t1_ParamLimits

0x4597,	// (0x0006c004) popup_number_entry_window_t2_ParamLimits

0x45a9,	// (0x0006c016) popup_number_entry_window_t3_ParamLimits

0x45bb,	// (0x0006c028) popup_number_entry_window_t5_ParamLimits

0x45bb,	// (0x0006c028) popup_number_entry_window_t5

0xf06b,	// (0x00076ad8) popup_number_entry_window_t_ParamLimits

0x45f0,	// (0x0006c05d) text_title_cp2_ParamLimits

0x9441,	// (0x00070eae) aid_hotspot_pointer_text2_pane

0x94db,	// (0x00070f48) main_viewer_pane_g9_ParamLimits

0x94db,	// (0x00070f48) main_viewer_pane_g9

0x04ee,	// (0x00067f5b) cale_month_pane_t1_ParamLimits

0x0559,	// (0x00067fc6) bg_cale_pane_ParamLimits

0x0571,	// (0x00067fde) list_cale_pane_ParamLimits

0x0582,	// (0x00067fef) listscroll_cale_day_pane_t1

0x0594,	// (0x00068001) scroll_pane_cp09_ParamLimits

0x91e4,	// (0x00070c51) main_mup_eq_pane_t1_ParamLimits

0x91e4,	// (0x00070c51) main_mup_eq_pane_t1

0x9200,	// (0x00070c6d) main_mup_eq_pane_t2_ParamLimits

0x9200,	// (0x00070c6d) main_mup_eq_pane_t2

0x921c,	// (0x00070c89) main_mup_eq_pane_t3_ParamLimits

0x921c,	// (0x00070c89) main_mup_eq_pane_t3

0x9236,	// (0x00070ca3) main_mup_eq_pane_t4_ParamLimits

0x9236,	// (0x00070ca3) main_mup_eq_pane_t4

0x9250,	// (0x00070cbd) main_mup_eq_pane_t5_ParamLimits

0x9250,	// (0x00070cbd) main_mup_eq_pane_t5

0x926a,	// (0x00070cd7) main_mup_eq_pane_t6_ParamLimits

0x926a,	// (0x00070cd7) main_mup_eq_pane_t6

0x9280,	// (0x00070ced) main_mup_eq_pane_t7_ParamLimits

0x9280,	// (0x00070ced) main_mup_eq_pane_t7

0x9296,	// (0x00070d03) main_mup_eq_pane_t8_ParamLimits

0x9296,	// (0x00070d03) main_mup_eq_pane_t8

0x92ac,	// (0x00070d19) main_mup_eq_pane_t9_ParamLimits

0x92ac,	// (0x00070d19) main_mup_eq_pane_t9

0x92c8,	// (0x00070d35) main_mup_eq_pane_t10_ParamLimits

0x92c8,	// (0x00070d35) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00076e3c) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00076e3c) main_mup_eq_pane_t

0x938d,	// (0x00070dfa) mup_equalizer_pane_cp5_ParamLimits

0x93a5,	// (0x00070e12) mup_equalizer_pane_cp6_ParamLimits

0x93bd,	// (0x00070e2a) mup_equalizer_pane_cp7_ParamLimits

0x455a,	// (0x0006bfc7) main_gallery_pane

0x203d,	// (0x00069aaa) smil2_volume_pane

0x2058,	// (0x00069ac5) smil_status_volume_pane_g1_ParamLimits

0x2045,	// (0x00069ab2) smil_status_volume_pane_g2_ParamLimits

0x9e3c,	// (0x000718a9) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x00076ff2) smil_status_volume_pane_g_ParamLimits

0x2296,	// (0x00069d03) bg_popup_window_pane_cp07_ParamLimits

0x22a4,	// (0x00069d11) blid_firmament_pane

0x506d,	// (0x0006cada) aid_size_cell_gallery_ParamLimits

0x506d,	// (0x0006cada) aid_size_cell_gallery

0x506d,	// (0x0006cada) grid_gallery_pane_ParamLimits

0x506d,	// (0x0006cada) grid_gallery_pane

0x0ca9,	// (0x00068716) cell_gallery_pane_ParamLimits

0x0ca9,	// (0x00068716) cell_gallery_pane

0x48f1,	// (0x0006c35e) bg_cell_gallery_focus_pane_ParamLimits

0x48f1,	// (0x0006c35e) bg_cell_gallery_focus_pane

0x507b,	// (0x0006cae8) cell_gallery_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) cell_gallery_pane_g1

0x507b,	// (0x0006cae8) cell_gallery_pane_g2_ParamLimits

0x507b,	// (0x0006cae8) cell_gallery_pane_g2

0x507b,	// (0x0006cae8) cell_gallery_pane_g3_ParamLimits

0x507b,	// (0x0006cae8) cell_gallery_pane_g3

0x5089,	// (0x0006caf6) cell_gallery_pane_g4_ParamLimits

0x5089,	// (0x0006caf6) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x0007709e) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x0007709e) cell_gallery_pane_g

0x23f6,	// (0x00069e63) bg_cell_gallery_focus_pane_g1

0x23fe,	// (0x00069e6b) bg_cell_gallery_focus_pane_g2

0x2406,	// (0x00069e73) bg_cell_gallery_focus_pane_g3

0x240e,	// (0x00069e7b) bg_cell_gallery_focus_pane_g4

0x2416,	// (0x00069e83) bg_cell_gallery_focus_pane_g5

0x241e,	// (0x00069e8b) bg_cell_gallery_focus_pane_g6

0x2426,	// (0x00069e93) bg_cell_gallery_focus_pane_g7

0x242e,	// (0x00069e9b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x000770a7) bg_cell_gallery_focus_pane_g

0x2436,	// (0x00069ea3) aid_firma_cardinal

0x244a,	// (0x00069eb7) blid_firmament_pane_t1

0x2461,	// (0x00069ece) blid_firmament_pane_t2

0x2478,	// (0x00069ee5) blid_firmament_pane_t3

0x248f,	// (0x00069efc) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x000770b8) blid_firmament_pane_t

0x24a6,	// (0x00069f13) blid_sat_info_pane

0x01d7,	// (0x00067c44) blid_sat_info_pane_g1

0x01d7,	// (0x00067c44) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00076e30) blid_sat_info_pane_g

0x24b6,	// (0x00069f23) blid_sat_info_pane_t1

0x24c4,	// (0x00069f31) smil2_volume_content_pane

0x24cd,	// (0x00069f3a) smil2_volume_pane_g1

0x5164,	// (0x0006cbd1) smil2_volume_content_pane_g1

0x24d5,	// (0x00069f42) smil2_volume_content_pane_g2

0x24de,	// (0x00069f4b) smil2_volume_content_pane_g3

0x24e7,	// (0x00069f54) smil2_volume_content_pane_g4

0x24f0,	// (0x00069f5d) smil2_volume_content_pane_g5

0x24f9,	// (0x00069f66) smil2_volume_content_pane_g6

0x2502,	// (0x00069f6f) smil2_volume_content_pane_g7

0x250b,	// (0x00069f78) smil2_volume_content_pane_g8

0x2514,	// (0x00069f81) smil2_volume_content_pane_g9

0x251d,	// (0x00069f8a) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x000770c1) smil2_volume_content_pane_g

0x775d,	// (0x0006f1ca) cale_week_day_heading_pane_t1_ParamLimits

0x7785,	// (0x0006f1f2) cale_week_day_heading_pane_t2_ParamLimits

0x77b2,	// (0x0006f21f) cale_week_day_heading_pane_t3_ParamLimits

0x77df,	// (0x0006f24c) cale_week_day_heading_pane_t4_ParamLimits

0x780c,	// (0x0006f279) cale_week_day_heading_pane_t5_ParamLimits

0x7839,	// (0x0006f2a6) cale_week_day_heading_pane_t6_ParamLimits

0x7866,	// (0x0006f2d3) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00076bdf) cale_week_day_heading_pane_t_ParamLimits

0x0127,	// (0x00067b94) bg_cale_side_pane_ParamLimits

0x788e,	// (0x0006f2fb) cale_week_time_pane_t1_ParamLimits

0x78b2,	// (0x0006f31f) cale_week_time_pane_t2_ParamLimits

0x78d6,	// (0x0006f343) cale_week_time_pane_t3_ParamLimits

0x78fa,	// (0x0006f367) cale_week_time_pane_t4_ParamLimits

0x791e,	// (0x0006f38b) cale_week_time_pane_t5_ParamLimits

0x7944,	// (0x0006f3b1) cale_week_time_pane_t6_ParamLimits

0x796c,	// (0x0006f3d9) cale_week_time_pane_t7_ParamLimits

0x7998,	// (0x0006f405) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00076bee) cale_week_time_pane_t_ParamLimits

0x79c8,	// (0x0006f435) cell_cale_week_pane_g2_ParamLimits

0x0127,	// (0x00067b94) bg_cale_side_pane_cp01_ParamLimits

0x8a66,	// (0x000704d3) cale_month_week_pane_t1_ParamLimits

0x8a7f,	// (0x000704ec) cale_month_week_pane_t2_ParamLimits

0x8a98,	// (0x00070505) cale_month_week_pane_t3_ParamLimits

0x8ab1,	// (0x0007051e) cale_month_week_pane_t4_ParamLimits

0x8aca,	// (0x00070537) cale_month_week_pane_t5_ParamLimits

0x8ae7,	// (0x00070554) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00076cbc) cale_month_week_pane_t_ParamLimits

0x8c38,	// (0x000706a5) cell_cale_month_pane_g1_ParamLimits

0x455a,	// (0x0006bfc7) main_cale_event_viewer_pane

0x455a,	// (0x0006bfc7) listscroll_cale_event_viewer_pane

0x2526,	// (0x00069f93) list_cale_ev_pane

0x252e,	// (0x00069f9b) scroll_pane_cp023

0xa09b,	// (0x00071b08) field_cale_ev_pane_ParamLimits

0xa09b,	// (0x00071b08) field_cale_ev_pane

0x253a,	// (0x00069fa7) field_cale_ev_content_pane_ParamLimits

0x253a,	// (0x00069fa7) field_cale_ev_content_pane

0x2546,	// (0x00069fb3) field_cale_ev_pane_g1_ParamLimits

0x2546,	// (0x00069fb3) field_cale_ev_pane_g1

0x2552,	// (0x00069fbf) field_cale_ev_pane_g2_ParamLimits

0x2552,	// (0x00069fbf) field_cale_ev_pane_g2

0x256a,	// (0x00069fd7) field_cale_ev_pane_g3_ParamLimits

0x256a,	// (0x00069fd7) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x000770d6) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x000770d6) field_cale_ev_pane_g

0x2582,	// (0x00069fef) field_cale_ev_pane_t1_ParamLimits

0x2582,	// (0x00069fef) field_cale_ev_pane_t1

0xa0bf,	// (0x00071b2c) field_cale_ev_content_pane_t1_ParamLimits

0xa0bf,	// (0x00071b2c) field_cale_ev_content_pane_t1

0x0d4e,	// (0x000687bb) bg_button_pane_cp01

0x73bb,	// (0x0006ee28) listscroll_cale_week_pane_ParamLimits

0x00ef,	// (0x00067b5c) popup_toolbar_window_cp01

0x00f8,	// (0x00067b65) listscroll_cale_week_pane_t1_ParamLimits

0x73bb,	// (0x0006ee28) listscroll_cale_day_pane_ParamLimits

0x00ef,	// (0x00067b5c) popup_toolbar_window_cp02

0x0582,	// (0x00067fef) listscroll_cale_day_pane_t1_ParamLimits

0x73bb,	// (0x0006ee28) main_cale_month_pane_ParamLimits

0x9d92,	// (0x000717ff) popup_toolbar_window_cp03_ParamLimits

0x9d92,	// (0x000717ff) popup_toolbar_window_cp03

0x9664,	// (0x000710d1) main_image_pane_g2_ParamLimits

0x9664,	// (0x000710d1) main_image_pane_g2

0x9670,	// (0x000710dd) main_image_pane_g3_ParamLimits

0x9670,	// (0x000710dd) main_image_pane_g3

0x0002,

0xf461,	// (0x00076ece) main_image_pane_g_ParamLimits

0xf461,	// (0x00076ece) main_image_pane_g

0x0eaa,	// (0x00068917) main_image_pane_t1_ParamLimits

0x967c,	// (0x000710e9) main_image_pane_t2_ParamLimits

0x967c,	// (0x000710e9) main_image_pane_t2

0x968e,	// (0x000710fb) main_image_pane_t3_ParamLimits

0x968e,	// (0x000710fb) main_image_pane_t3

0x96a0,	// (0x0007110d) main_image_pane_t4_ParamLimits

0x96a0,	// (0x0007110d) main_image_pane_t4

0x0003,

0xf468,	// (0x00076ed5) main_image_pane_t_ParamLimits

0xf468,	// (0x00076ed5) main_image_pane_t

0x96b2,	// (0x0007111f) popup_image_details_window_cp01

0x96bc,	// (0x00071129) popup_toobar_trans_pane_cp01_ParamLimits

0x96bc,	// (0x00071129) popup_toobar_trans_pane_cp01

0x9cd4,	// (0x00071741) popup_image_details_window_ParamLimits

0x9cd4,	// (0x00071741) popup_image_details_window

0x9ce2,	// (0x0007174f) popup_image_focus_window

0x506d,	// (0x0006cada) camera2_autofocus_pane_ParamLimits

0x506d,	// (0x0006cada) camera2_autofocus_pane

0x455a,	// (0x0006bfc7) bg_popup_sub_pane_cp06

0x2599,	// (0x0006a006) popup_image_focus_window_g1

0x25a1,	// (0x0006a00e) popup_image_focus_window_g2

0x25a9,	// (0x0006a016) popup_image_focus_window_g3

0x25b1,	// (0x0006a01e) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x000770dd) popup_image_focus_window_g

0x25b9,	// (0x0006a026) popup_image_focus_window_t1

0x25c7,	// (0x0006a034) popup_image_focus_window_t2

0x25d7,	// (0x0006a044) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x000770e6) popup_image_focus_window_t

0x507b,	// (0x0006cae8) camera2_autofocus_pane_g1

0x48f1,	// (0x0006c35e) bg_tb_trans_pane_cp01

0x25e5,	// (0x0006a052) popup_image_details_window_g1

0x25f8,	// (0x0006a065) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x000770f8) popup_image_details_window_g

0x2621,	// (0x0006a08e) popup_image_details_window_t1

0x2633,	// (0x0006a0a0) popup_image_details_window_t2

0x264c,	// (0x0006a0b9) popup_image_details_window_t3

0x2660,	// (0x0006a0cd) popup_image_details_window_t4

0x267b,	// (0x0006a0e8) popup_image_details_window_t5

0x0004,

0xf692,	// (0x000770ff) popup_image_details_window_t

0x50d9,	// (0x0006cb46) bg_calc_paper_pane_ParamLimits

0x455a,	// (0x0006bfc7) grid_highlight_pane_cp013

0x716f,	// (0x0006ebdc) list_calc_pane_ParamLimits

0x7181,	// (0x0006ebee) scroll_pane_cp024

0x50ed,	// (0x0006cb5a) bg_calc_display_pane_ParamLimits

0x7189,	// (0x0006ebf6) calc_display_pane_t1_ParamLimits

0x719e,	// (0x0006ec0b) calc_display_pane_t2_ParamLimits

0x71b3,	// (0x0006ec20) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00076b5f) calc_display_pane_t_ParamLimits

0x7283,	// (0x0006ecf0) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00076b7c) cell_calc_pane_g

0x728c,	// (0x0006ecf9) cell_calc_pane_t1

0x5142,	// (0x0006cbaf) grid_highlight_pane_cp02_ParamLimits

0x5158,	// (0x0006cbc5) toolbar_button_pane_cp01_ParamLimits

0x5158,	// (0x0006cbc5) toolbar_button_pane_cp01

0x0eef,	// (0x0006895c) temp_image_control_pane_ParamLimits

0x0eef,	// (0x0006895c) temp_image_control_pane

0x48f1,	// (0x0006c35e) main_mp3_pane

0x2695,	// (0x0006a102) temp_image_control_pane_g1_ParamLimits

0x2695,	// (0x0006a102) temp_image_control_pane_g1

0x26a3,	// (0x0006a110) temp_image_control_pane_g2_ParamLimits

0x26a3,	// (0x0006a110) temp_image_control_pane_g2

0x26b5,	// (0x0006a122) temp_image_control_pane_g3_ParamLimits

0x26b5,	// (0x0006a122) temp_image_control_pane_g3

0xa0da,	// (0x00071b47) temp_image_control_pane_g4_ParamLimits

0xa0da,	// (0x00071b47) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x0007710a) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x0007710a) temp_image_control_pane_g

0x2695,	// (0x0006a102) main_mp3_pane_g1

0xa0eb,	// (0x00071b58) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x00077113) main_mp3_pane_g

0x26ea,	// (0x0006a157) main_mp3_pane_t1

0x5089,	// (0x0006caf6) main_camera_pane_g8_ParamLimits

0x5089,	// (0x0006caf6) main_camera_pane_g8

0x7b74,	// (0x0006f5e1) main_video_pane_g7_ParamLimits

0x7b74,	// (0x0006f5e1) main_video_pane_g7

0x0c95,	// (0x00068702) main_camera2_pane_t7_ParamLimits

0x0c95,	// (0x00068702) main_camera2_pane_t7

0x02e3,	// (0x00067d50) scroll_pane_cp025_ParamLimits

0x02e3,	// (0x00067d50) scroll_pane_cp025

0x02f7,	// (0x00067d64) scroll_pane_cp026_ParamLimits

0x02f7,	// (0x00067d64) scroll_pane_cp026

0x0306,	// (0x00067d73) wml_content_pane_ParamLimits

0x455a,	// (0x0006bfc7) main_touch_calib_pane

0xa18f,	// (0x00071bfc) main_touch_calib_pane_g1

0xa19b,	// (0x00071c08) main_touch_calib_pane_g2

0xa1a7,	// (0x00071c14) main_touch_calib_pane_g3

0xa1b3,	// (0x00071c20) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x00077131) main_touch_calib_pane_g

0xa1bf,	// (0x00071c2c) main_touch_calib_pane_t1

0xa1d6,	// (0x00071c43) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x0007713a) main_touch_calib_pane_t

0x0aeb,	// (0x00068558) mup_progress_pane_cp02

0x0b0a,	// (0x00068577) navi_pane_g1

0x0b6c,	// (0x000685d9) navi_pane_mp_t3

0x48f1,	// (0x0006c35e) main_mp3_pane_ParamLimits

0x9dd3,	// (0x00071840) navi_pane_ParamLimits

0x2695,	// (0x0006a102) main_mp3_pane_g1_ParamLimits

0xa0eb,	// (0x00071b58) main_mp3_pane_g2_ParamLimits

0xa0f7,	// (0x00071b64) main_mp3_pane_g3_ParamLimits

0xa0f7,	// (0x00071b64) main_mp3_pane_g3

0xa103,	// (0x00071b70) main_mp3_pane_g4_ParamLimits

0xa103,	// (0x00071b70) main_mp3_pane_g4

0x507b,	// (0x0006cae8) main_mp3_pane_g5_ParamLimits

0x507b,	// (0x0006cae8) main_mp3_pane_g5

0x26c5,	// (0x0006a132) main_mp3_pane_g6_ParamLimits

0x26c5,	// (0x0006a132) main_mp3_pane_g6

0x26d2,	// (0x0006a13f) main_mp3_pane_g7_ParamLimits

0x26d2,	// (0x0006a13f) main_mp3_pane_g7

0x26de,	// (0x0006a14b) main_mp3_pane_g8_ParamLimits

0x26de,	// (0x0006a14b) main_mp3_pane_g8

0xf6a6,	// (0x00077113) main_mp3_pane_g_ParamLimits

0xa10f,	// (0x00071b7c) main_mp3_pane_t2

0xa11f,	// (0x00071b8c) main_mp3_pane_t3

0x26f8,	// (0x0006a165) main_mp3_pane_t4

0x2706,	// (0x0006a173) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x00077124) main_mp3_pane_t

0x2714,	// (0x0006a181) mup_progress_pane_cp01

0x6001,	// (0x0006da6e) aid_zoom_text_secondary2

0x2526,	// (0x00069f93) list_cale_ev2_pane

0x252e,	// (0x00069f9b) scroll_pane_cp023_ParamLimits

0xa231,	// (0x00071c9e) field_cale_ev2_pane_ParamLimits

0xa231,	// (0x00071c9e) field_cale_ev2_pane

0xa24c,	// (0x00071cb9) field_cale_ev2_pane_g1_ParamLimits

0xa24c,	// (0x00071cb9) field_cale_ev2_pane_g1

0xa258,	// (0x00071cc5) field_cale_ev2_pane_g2_ParamLimits

0xa258,	// (0x00071cc5) field_cale_ev2_pane_g2

0xa270,	// (0x00071cdd) field_cale_ev2_pane_g3_ParamLimits

0xa270,	// (0x00071cdd) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x00077145) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x00077145) field_cale_ev2_pane_g

0x60f9,	// (0x0006db66) field_cale_ev2_pane_t1_ParamLimits

0x60f9,	// (0x0006db66) field_cale_ev2_pane_t1

0x6110,	// (0x0006db7d) field_cale_ev2_pane_t2_ParamLimits

0x6110,	// (0x0006db7d) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x0007714e) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x0007714e) field_cale_ev2_pane_t

0x9543,	// (0x00070fb0) main_postcard_pane_g5_ParamLimits

0x9543,	// (0x00070fb0) main_postcard_pane_g5

0x9551,	// (0x00070fbe) main_postcard_pane_g6_ParamLimits

0x9551,	// (0x00070fbe) main_postcard_pane_g6

0x506d,	// (0x0006cada) camera2_autofocus_pane_cp_ParamLimits

0x506d,	// (0x0006cada) camera2_autofocus_pane_cp

0x48f1,	// (0x0006c35e) main_mup3_pane

0xa2d7,	// (0x00071d44) main_mup3_pane_g1_ParamLimits

0xa2d7,	// (0x00071d44) main_mup3_pane_g1

0xa2f8,	// (0x00071d65) main_mup3_pane_g2_ParamLimits

0xa2f8,	// (0x00071d65) main_mup3_pane_g2

0xa36c,	// (0x00071dd9) main_mup3_pane_g3_ParamLimits

0xa36c,	// (0x00071dd9) main_mup3_pane_g3

0xa3d1,	// (0x00071e3e) main_mup3_pane_g4_ParamLimits

0xa3d1,	// (0x00071e3e) main_mup3_pane_g4

0xa436,	// (0x00071ea3) main_mup3_pane_g5_ParamLimits

0xa436,	// (0x00071ea3) main_mup3_pane_g5

0xa49b,	// (0x00071f08) main_mup3_pane_g6_ParamLimits

0xa49b,	// (0x00071f08) main_mup3_pane_g6

0x5089,	// (0x0006caf6) main_mup3_pane_g7_ParamLimits

0x5089,	// (0x0006caf6) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x0007715e) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x0007715e) main_mup3_pane_g

0xa515,	// (0x00071f82) main_mup3_pane_t1_ParamLimits

0xa515,	// (0x00071f82) main_mup3_pane_t1

0xa580,	// (0x00071fed) main_mup3_pane_t2_ParamLimits

0xa580,	// (0x00071fed) main_mup3_pane_t2

0xa649,	// (0x000720b6) main_mup3_pane_t4_ParamLimits

0xa649,	// (0x000720b6) main_mup3_pane_t4

0xa69d,	// (0x0007210a) main_mup3_pane_t5_ParamLimits

0xa69d,	// (0x0007210a) main_mup3_pane_t5

0xa755,	// (0x000721c2) main_mup3_pane_t6_ParamLimits

0xa755,	// (0x000721c2) main_mup3_pane_t6

0x0005,

0xf702,	// (0x0007716f) main_mup3_pane_t_ParamLimits

0xf702,	// (0x0007716f) main_mup3_pane_t

0xa7ff,	// (0x0007226c) mup3_progress_pane_ParamLimits

0xa7ff,	// (0x0007226c) mup3_progress_pane

0xa87d,	// (0x000722ea) popup_mup3_control_window_ParamLimits

0xa87d,	// (0x000722ea) popup_mup3_control_window

0x271c,	// (0x0006a189) popup_mup3_text_window

0xa89a,	// (0x00072307) mup3_progress_pane_t1

0xa8b8,	// (0x00072325) mup3_progress_pane_t2

0x2724,	// (0x0006a191) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x0007717c) mup3_progress_pane_t

0x2741,	// (0x0006a1ae) mup_progress_pane_cp03

0x455a,	// (0x0006bfc7) bg_tb_trans_pane_cp04

0xa8d6,	// (0x00072343) mup3_volume_pane

0xa8de,	// (0x0007234b) popup_mup3_control_window_g1

0x3dba,	// (0x0006b827) mup3_volume_pane_g1

0x3dc3,	// (0x0006b830) mup3_volume_pane_g2

0x3dcc,	// (0x0006b839) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x00077183) mup3_volume_pane_g

0x455a,	// (0x0006bfc7) bg_tb_trans_pane_cp03

0x2751,	// (0x0006a1be) popup_mup3_text_window_g1

0x2759,	// (0x0006a1c6) popup_mup3_text_window_t1

0x5135,	// (0x0006cba2) list_calc_item_pane_g1_ParamLimits

0x2202,	// (0x00069c6f) mup_volume_pane_cp_g1

0xa1ef,	// (0x00071c5c) main_touch_calib_pane_t3

0xa205,	// (0x00071c72) main_touch_calib_pane_t4

0xa21b,	// (0x00071c88) main_touch_calib_pane_t5

0x6cca,	// (0x0006e737) aid_cell_size_toolbar2

0x6cd2,	// (0x0006e73f) aid_popup3_width_pane

0x5ff1,	// (0x0006da5e) aid_zoom_text_msg_primary

0x7a74,	// (0x0006f4e1) vorec_t7

0x50f9,	// (0x0006cb66) bg_calc_paper_pane_g1_ParamLimits

0x5111,	// (0x0006cb7e) bg_calc_paper_pane_g2_ParamLimits

0x5105,	// (0x0006cb72) bg_calc_paper_pane_g3_ParamLimits

0x5129,	// (0x0006cb96) bg_calc_paper_pane_g4_ParamLimits

0x511d,	// (0x0006cb8a) bg_calc_paper_pane_g5_ParamLimits

0x71f4,	// (0x0006ec61) bg_calc_paper_pane_g6_ParamLimits

0x7205,	// (0x0006ec72) bg_calc_paper_pane_g7_ParamLimits

0x7216,	// (0x0006ec83) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00076b66) bg_calc_paper_pane_g_ParamLimits

0x7227,	// (0x0006ec94) calc_bg_paper_pane_g9_ParamLimits

0x506d,	// (0x0006cada) image_qvga_pane_ParamLimits

0x506d,	// (0x0006cada) image_qvga_pane

0x5000,	// (0x0006ca6d) bg_popup_sub_pane_cp04_ParamLimits

0x0e26,	// (0x00068893) popup_mup_playback_window_g1_ParamLimits

0x0e32,	// (0x0006889f) popup_mup_playback_window_t1_ParamLimits

0x0e47,	// (0x000688b4) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00076ec9) popup_mup_playback_window_t_ParamLimits

0x507b,	// (0x0006cae8) main_mup2_pane_g3_ParamLimits

0x507b,	// (0x0006cae8) main_mup2_pane_g3

0x7d4d,	// (0x0006f7ba) popup_toolbar_window_cp04

0x1242,	// (0x00068caf) popup_call2_audio_second_window_g3_ParamLimits

0x1242,	// (0x00068caf) popup_call2_audio_second_window_g3

0x165a,	// (0x000690c7) popup_call2_audio_first_window_g4_ParamLimits

0x165a,	// (0x000690c7) popup_call2_audio_first_window_g4

0x1c81,	// (0x000696ee) popup_call2_audio_in_window_g4_ParamLimits

0x1c81,	// (0x000696ee) popup_call2_audio_in_window_g4

0x9657,	// (0x000710c4) aid_area_sk_bg_cut_ParamLimits

0x9657,	// (0x000710c4) aid_area_sk_bg_cut

0x0e5c,	// (0x000688c9) aid_area_sk_bg_cut_2_ParamLimits

0x0e5c,	// (0x000688c9) aid_area_sk_bg_cut_2

0x455a,	// (0x0006bfc7) aid_placing_details_win

0x455a,	// (0x0006bfc7) aid_placing_details_win_2

0x507b,	// (0x0006cae8) camera2_autofocus_pane_g1_ParamLimits

0x6f1f,	// (0x0006e98c) popup_fixed_preview_cale_window_ParamLimits

0x6f1f,	// (0x0006e98c) popup_fixed_preview_cale_window

0x0bce,	// (0x0006863b) navi_slider_pane_g3

0x0bc5,	// (0x00068632) navi_slider_pane_g4

0x0bbc,	// (0x00068629) navi_slider_pane_g5

0x0bce,	// (0x0006863b) navi_slider_pane_g6

0x91b8,	// (0x00070c25) navi_slider_pane_g7

0x0d1b,	// (0x00068788) mup_scale_pane_g3

0x0d24,	// (0x00068791) mup_scale_pane_g4

0x0d2d,	// (0x0006879a) mup_scale_pane_g5

0x93d5,	// (0x00070e42) mup_scale_pane_g6

0x93de,	// (0x00070e4b) mup_scale_pane_g7

0x01d7,	// (0x00067c44) cams2_slider_pane_g3

0x01d7,	// (0x00067c44) cams2_slider_pane_g4

0x01d7,	// (0x00067c44) cams2_slider_pane_g5

0x01d7,	// (0x00067c44) cams2_slider_pane_g6

0x01d7,	// (0x00067c44) cams2_slider_pane_g7

0x01d7,	// (0x00067c44) camera2_autofocus_pane_cp_g1

0x1f59,	// (0x000699c6) bg_popup_preview_window_pane_cp02_ParamLimits

0x1f59,	// (0x000699c6) bg_popup_preview_window_pane_cp02

0x2767,	// (0x0006a1d4) list_fp_cale_pane_ParamLimits

0x2767,	// (0x0006a1d4) list_fp_cale_pane

0x2773,	// (0x0006a1e0) popup_fixed_preview_cale_window_t1_ParamLimits

0x2773,	// (0x0006a1e0) popup_fixed_preview_cale_window_t1

0xa8e7,	// (0x00072354) popup_fixed_preview_cale_window_t2_ParamLimits

0xa8e7,	// (0x00072354) popup_fixed_preview_cale_window_t2

0xa8fc,	// (0x00072369) popup_fixed_preview_cale_window_t3_ParamLimits

0xa8fc,	// (0x00072369) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x0007718a) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x0007718a) popup_fixed_preview_cale_window_t

0xa911,	// (0x0007237e) list_single_fp_cale_pane_ParamLimits

0xa911,	// (0x0007237e) list_single_fp_cale_pane

0x2791,	// (0x0006a1fe) list_single_fp_cale_pane_g1_ParamLimits

0x2791,	// (0x0006a1fe) list_single_fp_cale_pane_g1

0x279d,	// (0x0006a20a) list_single_fp_cale_pane_g2_ParamLimits

0x279d,	// (0x0006a20a) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x00077191) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x00077191) list_single_fp_cale_pane_g

0x27b6,	// (0x0006a223) list_single_fp_cale_pane_t1_ParamLimits

0x27b6,	// (0x0006a223) list_single_fp_cale_pane_t1

0x27c8,	// (0x0006a235) list_single_fp_cale_pane_t2_ParamLimits

0x27c8,	// (0x0006a235) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x00077198) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x00077198) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x455a,	// (0x0006bfc7) main_dialer_pane

0x455a,	// (0x0006bfc7) aid_cell_size_keypad

0x455a,	// (0x0006bfc7) dialer_ne_pane

0x455a,	// (0x0006bfc7) grid_dialer_command_1_pane

0x455a,	// (0x0006bfc7) grid_dialer_command_2_pane

0x455a,	// (0x0006bfc7) grid_dialer_keypad_pane

0x2296,	// (0x00069d03) bg_popup_call_pane_cp06_ParamLimits

0x2296,	// (0x00069d03) bg_popup_call_pane_cp06

0x2296,	// (0x00069d03) dialer_ne_clear_pane_ParamLimits

0x2296,	// (0x00069d03) dialer_ne_clear_pane

0x01d7,	// (0x00067c44) dialer_ne_pane_g1

0x0c95,	// (0x00068702) dialer_ne_pane_t1_ParamLimits

0x0c95,	// (0x00068702) dialer_ne_pane_t1

0x2a24,	// (0x0006a491) dialer_ne_pane_t2_ParamLimits

0x2a24,	// (0x0006a491) dialer_ne_pane_t2

0xa921,	// (0x0007238e) dialer_ne_pane_t3_ParamLimits

0xa921,	// (0x0007238e) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x0007719d) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x0007719d) dialer_ne_pane_t

0xa921,	// (0x0007238e) dialer_ne_pane_t3_copy1_ParamLimits

0xa921,	// (0x0007238e) dialer_ne_pane_t3_copy1

0x27fb,	// (0x0006a268) cell_dialer_keypad_pane_ParamLimits

0x27fb,	// (0x0006a268) cell_dialer_keypad_pane

0x48f1,	// (0x0006c35e) cell_dialer_command_1_pane_ParamLimits

0x48f1,	// (0x0006c35e) cell_dialer_command_1_pane

0x2812,	// (0x0006a27f) cell_dialer_command_2_pane_ParamLimits

0x2812,	// (0x0006a27f) cell_dialer_command_2_pane

0x48f1,	// (0x0006c35e) bg_button_pane_cp02_ParamLimits

0x48f1,	// (0x0006c35e) bg_button_pane_cp02

0x507b,	// (0x0006cae8) cell_dialer_keypad_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) cell_dialer_keypad_pane_g1

0x48f1,	// (0x0006c35e) bg_button_pane_cp03_ParamLimits

0x48f1,	// (0x0006c35e) bg_button_pane_cp03

0x507b,	// (0x0006cae8) cell_dialer_command_1_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) cell_dialer_command_1_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp04

0x01d7,	// (0x00067c44) cell_dialer_command_2_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp06

0x01d7,	// (0x00067c44) dialer_ne_clear_pane_g1

0x90f3,	// (0x00070b60) navi_pane_g2

0x9121,	// (0x00070b8e) navi_pane_g3

0x0002,

0xf35f,	// (0x00076dcc) navi_pane_g

0x914c,	// (0x00070bb9) navi_pane_mv_g2

0x9173,	// (0x00070be0) navi_pane_mv_g5

0x917b,	// (0x00070be8) navi_pane_mv_t1

0x50ed,	// (0x0006cb5a) main_clock2_pane

0x506d,	// (0x0006cada) main_clock2_list_pane_ParamLimits

0x506d,	// (0x0006cada) main_clock2_list_pane

0xa996,	// (0x00072403) main_clock2_pane_t1_ParamLimits

0xa996,	// (0x00072403) main_clock2_pane_t1

0xa9c4,	// (0x00072431) main_clock2_pane_t2_ParamLimits

0xa9c4,	// (0x00072431) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x000771a9) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x000771a9) main_clock2_pane_t

0xaa29,	// (0x00072496) popup_clock_analogue_window_cp03_ParamLimits

0xaa29,	// (0x00072496) popup_clock_analogue_window_cp03

0xaa47,	// (0x000724b4) popup_clock_digital_window_cp02_ParamLimits

0xaa47,	// (0x000724b4) popup_clock_digital_window_cp02

0xaabc,	// (0x00072529) main_clock2_list_single_pane_ParamLimits

0xaabc,	// (0x00072529) main_clock2_list_single_pane

0x0182,	// (0x00067bef) list_highlight_pane_cp05

0x2853,	// (0x0006a2c0) main_clock2_list_single_pane_t1

0x7d4d,	// (0x0006f7ba) popup_toolbar_window_cp04_ParamLimits

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g2

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g3_ParamLimits

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g3

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g4_ParamLimits

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g4

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g5_ParamLimits

0x5089,	// (0x0006caf6) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x000770ed) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x000770ed) camera2_autofocus_pane_g

0xa294,	// (0x00071d01) camera2_autofocus_pane_cp_g2

0xa29c,	// (0x00071d09) camera2_autofocus_pane_cp_g3

0xa2a4,	// (0x00071d11) camera2_autofocus_pane_cp_g4

0xa2ac,	// (0x00071d19) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x00077153) camera2_autofocus_pane_cp_g

0x455a,	// (0x0006bfc7) popup_dialer_spcha_window

0x455a,	// (0x0006bfc7) bg_popup_sub_pane_cp07

0x455a,	// (0x0006bfc7) list_spcha_pane

0x2861,	// (0x0006a2ce) list_single_spcha_pane_ParamLimits

0x2861,	// (0x0006a2ce) list_single_spcha_pane

0x455a,	// (0x0006bfc7) list_highlight_pane_cp06

0x0772,	// (0x000681df) list_single_spcha_pane_t1

0x1a2b,	// (0x00069498) popup_call2_audio_out_window_g4_ParamLimits

0x1a2b,	// (0x00069498) popup_call2_audio_out_window_g4

0x455a,	// (0x0006bfc7) main_imed2_pane

0x9cec,	// (0x00071759) popup_imed_adjust2_window

0x9cff,	// (0x0007176c) popup_imed_trans_window_ParamLimits

0x9cff,	// (0x0007176c) popup_imed_trans_window

0x22ef,	// (0x00069d5c) popup_blid_sat_info2_window_t1

0x22fd,	// (0x00069d6a) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x00077082) popup_blid_sat_info2_window_t

0xab73,	// (0x000725e0) aid_size_cell_colour_35

0xab8d,	// (0x000725fa) aid_size_cell_colour_112

0xaba4,	// (0x00072611) aid_size_cell_effect

0x48f1,	// (0x0006c35e) bg_tb_trans_pane_cp02

0x0732,	// (0x0006819f) heading_imed_pane

0xabbe,	// (0x0007262b) listscroll_imed_pane

0x2873,	// (0x0006a2e0) heading_imed_pane_g1

0x287b,	// (0x0006a2e8) heading_imed_pane_t1

0x2889,	// (0x0006a2f6) grid_imed_colour_35_pane_ParamLimits

0x2889,	// (0x0006a2f6) grid_imed_colour_35_pane

0xabca,	// (0x00072637) grid_imed_effect_pane

0x28a5,	// (0x0006a312) list_imed_aspect_pane

0xabda,	// (0x00072647) scroll_pane_cp027_ParamLimits

0xabda,	// (0x00072647) scroll_pane_cp027

0xabe6,	// (0x00072653) cell_imed_effect_pane_ParamLimits

0xabe6,	// (0x00072653) cell_imed_effect_pane

0x28ad,	// (0x0006a31a) cell_imed_colour_pane_ParamLimits

0x28ad,	// (0x0006a31a) cell_imed_colour_pane

0x28f7,	// (0x0006a364) cell_imed_colour_pane_g1_ParamLimits

0x28f7,	// (0x0006a364) cell_imed_colour_pane_g1

0x2908,	// (0x0006a375) hgihlgiht_grid_pane_cp016_ParamLimits

0x2908,	// (0x0006a375) hgihlgiht_grid_pane_cp016

0xac02,	// (0x0007266f) cell_imed_effect_pane_g1

0xac0a,	// (0x00072677) grid_highlight_pane_cp017

0x2919,	// (0x0006a386) list_imed_single_pane_ParamLimits

0x2919,	// (0x0006a386) list_imed_single_pane

0x455a,	// (0x0006bfc7) list_highlight_pane_cp07

0x292d,	// (0x0006a39a) list_imed_aspect_pane_comp1_t1

0x0ca9,	// (0x00068716) bg_tb_trans_pane_cp05

0x294f,	// (0x0006a3bc) popup_imed_adjust2_window_g1

0x2976,	// (0x0006a3e3) popup_imed_adjust2_window_t1

0x298e,	// (0x0006a3fb) slider_imed_adjust_pane

0x29a2,	// (0x0006a40f) slider_imed_adjust_pane_g1

0x29b2,	// (0x0006a41f) slider_imed_adjust_pane_g2

0x29c2,	// (0x0006a42f) slider_imed_adjust_pane_g3

0x29d3,	// (0x0006a440) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x000771c6) slider_imed_adjust_pane_g

0xac13,	// (0x00072680) aid_size_cell_clipart2

0x29e4,	// (0x0006a451) grid_imed_clipart_pane

0x29ee,	// (0x0006a45b) scroll_pane_cp031

0xac1f,	// (0x0007268c) cell_imed_clipart_pane_ParamLimits

0xac1f,	// (0x0007268c) cell_imed_clipart_pane

0xac3d,	// (0x000726aa) cell_imed_clipart_pane_g1

0x455a,	// (0x0006bfc7) grid_highlight_pane_cp014

0xa978,	// (0x000723e5) main_clock2_pane_g1_ParamLimits

0xa978,	// (0x000723e5) main_clock2_pane_g1

0xaa63,	// (0x000724d0) aid_call2_pane_cp10

0xaa75,	// (0x000724e2) aid_call_pane_cp10

0x0adf,	// (0x0006854c) popup_clock_analogue_window_cp10_g1

0x0adf,	// (0x0006854c) popup_clock_analogue_window_cp10_g2

0xaa87,	// (0x000724f4) popup_clock_analogue_window_cp10_g3

0xaa87,	// (0x000724f4) popup_clock_analogue_window_cp10_g4

0x0adf,	// (0x0006854c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x000771b4) popup_clock_analogue_window_cp10_g

0xaa9d,	// (0x0007250a) popup_clock_analogue_window_cp10_t1

0xaace,	// (0x0007253b) clock_digital_number_pane_cp10_ParamLimits

0xaace,	// (0x0007253b) clock_digital_number_pane_cp10

0xaae8,	// (0x00072555) clock_digital_number_pane_cp11_ParamLimits

0xaae8,	// (0x00072555) clock_digital_number_pane_cp11

0xab02,	// (0x0007256f) clock_digital_number_pane_cp12_ParamLimits

0xab02,	// (0x0007256f) clock_digital_number_pane_cp12

0xab1c,	// (0x00072589) clock_digital_number_pane_cp13_ParamLimits

0xab1c,	// (0x00072589) clock_digital_number_pane_cp13

0xab38,	// (0x000725a5) clock_digital_separator_pane_cp10_ParamLimits

0xab38,	// (0x000725a5) clock_digital_separator_pane_cp10

0xab52,	// (0x000725bf) popup_clock_digital_window_cp02_t1_ParamLimits

0xab52,	// (0x000725bf) popup_clock_digital_window_cp02_t1

0x4ff8,	// (0x0006ca65) clock_digital_number_pane_cp10_g1

0x4ff8,	// (0x0006ca65) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x000771cf) clock_digital_number_pane_cp10_g

0x4ff8,	// (0x0006ca65) clock_digital_separator_pane_cp10_g1

0x4ff8,	// (0x0006ca65) clock_digital_separator_pane_g2_cp10

0x0b7a,	// (0x000685e7) navi_pane_vded_g4

0x0b83,	// (0x000685f0) navi_pane_vded_g5

0x0b8c,	// (0x000685f9) navi_pane_vded_t1

0x455a,	// (0x0006bfc7) main_vded_pane

0xac46,	// (0x000726b3) main_vded_pane_g1

0xac52,	// (0x000726bf) main_vded_pane_g2

0xac5c,	// (0x000726c9) main_vded_pane_g3

0x0002,

0xf767,	// (0x000771d4) main_vded_pane_g

0xac66,	// (0x000726d3) main_vded_pane_t1

0xac74,	// (0x000726e1) main_vded_pane_t2

0x0001,

0xf76e,	// (0x000771db) main_vded_pane_t

0xac82,	// (0x000726ef) vded_slider_pane

0xac8c,	// (0x000726f9) vded_video_pane

0x29f6,	// (0x0006a463) vded_video_pane_g1

0xac98,	// (0x00072705) vded_video_pane_g2

0x01d7,	// (0x00067c44) vded_video_pane_g3

0x0002,

0xf773,	// (0x000771e0) vded_video_pane_g

0x2a00,	// (0x0006a46d) vded_slider_pane_g1

0x2202,	// (0x00069c6f) vded_slider_pane_g2

0x2a09,	// (0x0006a476) vded_slider_pane_g3

0x2a12,	// (0x0006a47f) vded_slider_pane_g4

0x2a1b,	// (0x0006a488) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x000771e7) vded_slider_pane_g

0xa871,	// (0x000722de) mup3_rocker_pane_ParamLimits

0xa871,	// (0x000722de) mup3_rocker_pane

0xaca1,	// (0x0007270e) mup3_control_keys_pane_g1

0xaca9,	// (0x00072716) mup3_control_keys_pane_g2

0xacb1,	// (0x0007271e) mup3_control_keys_pane_g3

0xacb9,	// (0x00072726) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x000771f2) mup3_control_keys_pane_g

0x6f47,	// (0x0006e9b4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6f47,	// (0x0006e9b4) popup_toolbar2_fixed_window_cp01

0xa88d,	// (0x000722fa) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa88d,	// (0x000722fa) popup_toolbar2_fixed_window_cp02

0x13b4,	// (0x00068e21) popup_call2_audio_second_window_t4_ParamLimits

0x13b4,	// (0x00068e21) popup_call2_audio_second_window_t4

0x18f0,	// (0x0006935d) popup_call2_audio_first_window_t6_ParamLimits

0x18f0,	// (0x0006935d) popup_call2_audio_first_window_t6

0x1b2e,	// (0x0006959b) popup_call2_audio_out_window_t6_ParamLimits

0x1b2e,	// (0x0006959b) popup_call2_audio_out_window_t6

0x455a,	// (0x0006bfc7) main_vitu_pane

0x506d,	// (0x0006cada) aid_size_cell_itu_ParamLimits

0x506d,	// (0x0006cada) aid_size_cell_itu

0x506d,	// (0x0006cada) bg_popup_window_pane_cp08_ParamLimits

0x506d,	// (0x0006cada) bg_popup_window_pane_cp08

0x506d,	// (0x0006cada) field_vitu_entry_pane_ParamLimits

0x506d,	// (0x0006cada) field_vitu_entry_pane

0x506d,	// (0x0006cada) grid_vitu_function_pane_ParamLimits

0x506d,	// (0x0006cada) grid_vitu_function_pane

0x506d,	// (0x0006cada) grid_vitu_itu_pane_ParamLimits

0x506d,	// (0x0006cada) grid_vitu_itu_pane

0x506d,	// (0x0006cada) cell_vitu_itu_pane_ParamLimits

0x506d,	// (0x0006cada) cell_vitu_itu_pane

0x506d,	// (0x0006cada) cell_vitu_function_pane_ParamLimits

0x506d,	// (0x0006cada) cell_vitu_function_pane

0x48f1,	// (0x0006c35e) bg_popup_sub_pane_cp08_ParamLimits

0x48f1,	// (0x0006c35e) bg_popup_sub_pane_cp08

0x01a9,	// (0x00067c16) field_vitu_entry_pane_t1_ParamLimits

0x01a9,	// (0x00067c16) field_vitu_entry_pane_t1

0x2a24,	// (0x0006a491) field_vitu_entry_pane_t2_ParamLimits

0x2a24,	// (0x0006a491) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x000771fb) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x000771fb) field_vitu_entry_pane_t

0x2296,	// (0x00069d03) bg_button_pane_cp05_ParamLimits

0x2296,	// (0x00069d03) bg_button_pane_cp05

0x2a41,	// (0x0006a4ae) cell_vitu_itu_pane_g1

0x0c81,	// (0x000686ee) cell_vitu_itu_pane_t1_ParamLimits

0x0c81,	// (0x000686ee) cell_vitu_itu_pane_t1

0x0c81,	// (0x000686ee) cell_vitu_itu_pane_t2_ParamLimits

0x0c81,	// (0x000686ee) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x00077200) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x00077200) cell_vitu_itu_pane_t

0x455a,	// (0x0006bfc7) bg_button_pane_cp07

0x01d7,	// (0x00067c44) cell_vitu_function_pane_g1

0x7078,	// (0x0006eae5) main_calc_pane_g1

0x6d06,	// (0x0006e773) aid_visual_content_pane

0x455a,	// (0x0006bfc7) main_vradio_pane

0x5089,	// (0x0006caf6) main_vradio_pane_g1_ParamLimits

0x5089,	// (0x0006caf6) main_vradio_pane_g1

0x5089,	// (0x0006caf6) main_vradio_pane_g2_ParamLimits

0x5089,	// (0x0006caf6) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x00077207) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x00077207) main_vradio_pane_g

0x0c95,	// (0x00068702) main_vradio_pane_t1_ParamLimits

0x0c95,	// (0x00068702) main_vradio_pane_t1

0x0c95,	// (0x00068702) main_vradio_pane_t2_ParamLimits

0x0c95,	// (0x00068702) main_vradio_pane_t2

0x0c95,	// (0x00068702) main_vradio_pane_t3_ParamLimits

0x0c95,	// (0x00068702) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x0007720c) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x0007720c) main_vradio_pane_t

0x506d,	// (0x0006cada) vradio_rocker_control_pane_ParamLimits

0x506d,	// (0x0006cada) vradio_rocker_control_pane

0x506d,	// (0x0006cada) vradio_station_info_pane_ParamLimits

0x506d,	// (0x0006cada) vradio_station_info_pane

0x48f1,	// (0x0006c35e) vradio_frequency_info_pane_ParamLimits

0x48f1,	// (0x0006c35e) vradio_frequency_info_pane

0x01d7,	// (0x00067c44) vradio_station_info_pane_g1

0x0c81,	// (0x000686ee) vradio_station_info_pane_t1_ParamLimits

0x0c81,	// (0x000686ee) vradio_station_info_pane_t1

0x0c95,	// (0x00068702) vradio_station_info_pane_t2_ParamLimits

0x0c95,	// (0x00068702) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x00077213) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x00077213) vradio_station_info_pane_t

0x455a,	// (0x0006bfc7) vradio_tuning_pane

0xacc9,	// (0x00072736) vradio_rocker_control_pane_g1

0x2a5d,	// (0x0006a4ca) vradio_rocker_control_pane_g2

0xacd1,	// (0x0007273e) vradio_rocker_control_pane_g3

0xacd9,	// (0x00072746) vradio_rocker_control_pane_g4

0xace3,	// (0x00072750) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x00077218) vradio_rocker_control_pane_g

0x01d7,	// (0x00067c44) vradio_frequency_info_pane_g1

0x01a9,	// (0x00067c16) vradio_frequency_info_pane_t1_ParamLimits

0x01a9,	// (0x00067c16) vradio_frequency_info_pane_t1

0xaceb,	// (0x00072758) vradio_tuning_pane_g1

0xacf8,	// (0x00072765) vradio_tuning_pane_t1

0x6d47,	// (0x0006e7b4) area_side_right_pane_ParamLimits

0x6d47,	// (0x0006e7b4) area_side_right_pane

0x1f20,	// (0x0006998d) status_small_pane_g1

0x1f28,	// (0x00069995) status_small_pane_g2

0x1f31,	// (0x0006999e) status_small_pane_g3

0x1f3a,	// (0x000699a7) status_small_pane_g4

0x0003,

0xf577,	// (0x00076fe4) status_small_pane_g

0x1f43,	// (0x000699b0) status_small_pane_t1

0x455a,	// (0x0006bfc7) main_video3_pane

0x2a65,	// (0x0006a4d2) cams_zoom_vslider_pane

0x2a6d,	// (0x0006a4da) image3_wide_pane_ParamLimits

0x2a6d,	// (0x0006a4da) image3_wide_pane

0x2a87,	// (0x0006a4f4) image3_wide_small_pane

0x2a93,	// (0x0006a500) main_video3_pane_g1_ParamLimits

0x2a93,	// (0x0006a500) main_video3_pane_g1

0x2aaf,	// (0x0006a51c) main_video3_pane_g2_ParamLimits

0x2aaf,	// (0x0006a51c) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x00077223) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x00077223) main_video3_pane_g

0x2acb,	// (0x0006a538) main_video3_pane_t1_ParamLimits

0x2acb,	// (0x0006a538) main_video3_pane_t1

0x2af6,	// (0x0006a563) main_video3_pane_t2_ParamLimits

0x2af6,	// (0x0006a563) main_video3_pane_t2

0x2b23,	// (0x0006a590) main_video3_pane_t3_ParamLimits

0x2b23,	// (0x0006a590) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x00077228) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x00077228) main_video3_pane_t

0x2b50,	// (0x0006a5bd) cams_zoom_vslider_pane_g1

0x2b59,	// (0x0006a5c6) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x0007722f) cams_zoom_vslider_pane_g

0x2b61,	// (0x0006a5ce) small_slider_vertical_pane

0x01d7,	// (0x00067c44) small_slider_vertical_pane_g1

0x01d7,	// (0x00067c44) small_slider_vertical_pane_g2

0x2b69,	// (0x0006a5d6) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x00077234) small_slider_vertical_pane_g

0x455a,	// (0x0006bfc7) main_hwr_training_pane

0x2b72,	// (0x0006a5df) hwr_training_instruct_pane_ParamLimits

0x2b72,	// (0x0006a5df) hwr_training_instruct_pane

0xad07,	// (0x00072774) hwr_training_navi_pane_ParamLimits

0xad07,	// (0x00072774) hwr_training_navi_pane

0xad21,	// (0x0007278e) hwr_training_write_pane_ParamLimits

0xad21,	// (0x0007278e) hwr_training_write_pane

0x455a,	// (0x0006bfc7) bg_frame_shadow_pane

0x2ba9,	// (0x0006a616) hwr_training_write_pane_g1

0x2bb1,	// (0x0006a61e) hwr_training_write_pane_g2

0x2bb9,	// (0x0006a626) hwr_training_write_pane_g3

0x2bc1,	// (0x0006a62e) hwr_training_write_pane_g4

0x2bc9,	// (0x0006a636) hwr_training_write_pane_g5

0x2bd1,	// (0x0006a63e) hwr_training_write_pane_g6

0x2bd9,	// (0x0006a646) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x0007723b) hwr_training_write_pane_g

0xad59,	// (0x000727c6) hwr_training_navi_pane_g1_ParamLimits

0xad59,	// (0x000727c6) hwr_training_navi_pane_g1

0xad6b,	// (0x000727d8) hwr_training_navi_pane_g2_ParamLimits

0xad6b,	// (0x000727d8) hwr_training_navi_pane_g2

0xad7d,	// (0x000727ea) hwr_training_navi_pane_g3_ParamLimits

0xad7d,	// (0x000727ea) hwr_training_navi_pane_g3

0xad8d,	// (0x000727fa) hwr_training_navi_pane_g4_ParamLimits

0xad8d,	// (0x000727fa) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x0007724a) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x0007724a) hwr_training_navi_pane_g

0xada7,	// (0x00072814) hwr_training_navi_pane_t1

0xadb5,	// (0x00072822) list_single_hwr_training_instruct_pane_ParamLimits

0xadb5,	// (0x00072822) list_single_hwr_training_instruct_pane

0x2c30,	// (0x0006a69d) list_single_hwr_training_instruct_pane_t1

0x23f6,	// (0x00069e63) bg_frame_shadow_pane_g1

0x2c3f,	// (0x0006a6ac) bg_frame_shadow_pane_g2

0x2c47,	// (0x0006a6b4) bg_frame_shadow_pane_g3

0x2c4f,	// (0x0006a6bc) bg_frame_shadow_pane_g4

0x2c57,	// (0x0006a6c4) bg_frame_shadow_pane_g5

0x2c5f,	// (0x0006a6cc) bg_frame_shadow_pane_g6

0x2c67,	// (0x0006a6d4) bg_frame_shadow_pane_g7

0x51a5,	// (0x0006cc12) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x00077255) bg_frame_shadow_pane_g

0x455a,	// (0x0006bfc7) main_video_tele_dialer_pane

0xadce,	// (0x0007283b) aid_size_cell_video_keypad_ParamLimits

0xadce,	// (0x0007283b) aid_size_cell_video_keypad

0xadde,	// (0x0007284b) grid_video_dialer_keypad_pane_ParamLimits

0xadde,	// (0x0007284b) grid_video_dialer_keypad_pane

0xae10,	// (0x0007287d) video_down_pane_cp_ParamLimits

0xae10,	// (0x0007287d) video_down_pane_cp

0xae3a,	// (0x000728a7) cell_video_dialer_keypad_pane_ParamLimits

0xae3a,	// (0x000728a7) cell_video_dialer_keypad_pane

0x2c6f,	// (0x0006a6dc) bg_button_pane_cp08_ParamLimits

0x2c6f,	// (0x0006a6dc) bg_button_pane_cp08

0xae51,	// (0x000728be) cell_video_dialer_keypad_pane_g1_ParamLimits

0xae51,	// (0x000728be) cell_video_dialer_keypad_pane_g1

0xa865,	// (0x000722d2) mup3_rocker2_pane_ParamLimits

0xa865,	// (0x000722d2) mup3_rocker2_pane

0x01d7,	// (0x00067c44) mup3_rocker2_pane_g1

0x9c50,	// (0x000716bd) main_dialer2_pane

0x455a,	// (0x0006bfc7) main_mp4_pane

0xaeaa,	// (0x00072917) main_mp4_pane_g1_ParamLimits

0xaeaa,	// (0x00072917) main_mp4_pane_g1

0xaeb8,	// (0x00072925) main_mp4_pane_g2_ParamLimits

0xaeb8,	// (0x00072925) main_mp4_pane_g2

0xaec6,	// (0x00072933) main_mp4_pane_g3_ParamLimits

0xaec6,	// (0x00072933) main_mp4_pane_g3

0xaf19,	// (0x00072986) main_mp4_pane_g4_ParamLimits

0xaf19,	// (0x00072986) main_mp4_pane_g4

0xaf47,	// (0x000729b4) main_mp4_pane_g5_ParamLimits

0xaf47,	// (0x000729b4) main_mp4_pane_g5

0x0007,

0xf808,	// (0x00077275) main_mp4_pane_g_ParamLimits

0xf808,	// (0x00077275) main_mp4_pane_g

0xafbb,	// (0x00072a28) main_mp4_pane_t1_ParamLimits

0xafbb,	// (0x00072a28) main_mp4_pane_t1

0xb017,	// (0x00072a84) main_mp4_pane_t2_ParamLimits

0xb017,	// (0x00072a84) main_mp4_pane_t2

0x369a,	// (0x0006b107) main_mp4_pane_t3_ParamLimits

0x369a,	// (0x0006b107) main_mp4_pane_t3

0xb069,	// (0x00072ad6) main_mp4_pane_t4_ParamLimits

0xb069,	// (0x00072ad6) main_mp4_pane_t4

0x0003,

0xf819,	// (0x00077286) main_mp4_pane_t_ParamLimits

0xf819,	// (0x00077286) main_mp4_pane_t

0xb0a9,	// (0x00072b16) mp4_progress_pane_ParamLimits

0xb0a9,	// (0x00072b16) mp4_progress_pane

0xb0f3,	// (0x00072b60) mp4_rocker_pane_ParamLimits

0xb0f3,	// (0x00072b60) mp4_rocker_pane

0x36c8,	// (0x0006b135) mp4_progress_pane_t1

0x36e1,	// (0x0006b14e) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x0007728f) mp4_progress_pane_t

0x36fa,	// (0x0006b167) mup_progress_pane_cp04

0x01d7,	// (0x00067c44) mp4_rocker_pane_g1

0xb113,	// (0x00072b80) aid_cell_size_keypad2_ParamLimits

0xb113,	// (0x00072b80) aid_cell_size_keypad2

0xb123,	// (0x00072b90) dialer2_ne_pane_ParamLimits

0xb123,	// (0x00072b90) dialer2_ne_pane

0xb12f,	// (0x00072b9c) grid_dialer2_keypad_pane_ParamLimits

0xb12f,	// (0x00072b9c) grid_dialer2_keypad_pane

0x3065,	// (0x0006aad2) bg_popup_call_pane_cp07_ParamLimits

0x3065,	// (0x0006aad2) bg_popup_call_pane_cp07

0xb13d,	// (0x00072baa) dialer2_ne_pane_t1_ParamLimits

0xb13d,	// (0x00072baa) dialer2_ne_pane_t1

0xb162,	// (0x00072bcf) cell_dialer2_keypad_pane_ParamLimits

0xb162,	// (0x00072bcf) cell_dialer2_keypad_pane

0x371f,	// (0x0006b18c) bg_button_pane_pane_cp04_ParamLimits

0x371f,	// (0x0006b18c) bg_button_pane_pane_cp04

0xb179,	// (0x00072be6) cell_dialer2_keypad_pane_g1_ParamLimits

0xb179,	// (0x00072be6) cell_dialer2_keypad_pane_g1

0x7c1f,	// (0x0006f68c) aid_placing_vt_set_content_ParamLimits

0x7c1f,	// (0x0006f68c) aid_placing_vt_set_content

0x7c47,	// (0x0006f6b4) aid_placing_vt_set_title_ParamLimits

0x7c47,	// (0x0006f6b4) aid_placing_vt_set_title

0x455a,	// (0x0006bfc7) main_image3_pane

0xb213,	// (0x00072c80) area_side_right_pane_cp01_ParamLimits

0xb213,	// (0x00072c80) area_side_right_pane_cp01

0x5097,	// (0x0006cb04) main_image3_pane_g1_ParamLimits

0x5097,	// (0x0006cb04) main_image3_pane_g1

0xb242,	// (0x00072caf) main_image3_pane_g2_ParamLimits

0xb242,	// (0x00072caf) main_image3_pane_g2

0xb25b,	// (0x00072cc8) main_image3_pane_g3_ParamLimits

0xb25b,	// (0x00072cc8) main_image3_pane_g3

0xb274,	// (0x00072ce1) main_image3_pane_g4_ParamLimits

0xb274,	// (0x00072ce1) main_image3_pane_g4

0x0003,

0xf831,	// (0x0007729e) main_image3_pane_g_ParamLimits

0xf831,	// (0x0007729e) main_image3_pane_g

0xb28d,	// (0x00072cfa) main_image3_pane_t1_ParamLimits

0xb28d,	// (0x00072cfa) main_image3_pane_t1

0xb2b2,	// (0x00072d1f) main_image3_pane_t2_ParamLimits

0xb2b2,	// (0x00072d1f) main_image3_pane_t2

0xb2d1,	// (0x00072d3e) main_image3_pane_t3_ParamLimits

0xb2d1,	// (0x00072d3e) main_image3_pane_t3

0x0003,

0xf83a,	// (0x000772a7) main_image3_pane_t_ParamLimits

0xf83a,	// (0x000772a7) main_image3_pane_t

0x506d,	// (0x0006cada) grid_sctrl_middle_pane_cp01_ParamLimits

0x506d,	// (0x0006cada) grid_sctrl_middle_pane_cp01

0xb332,	// (0x00072d9f) cell_sctrl_middle_pane_cp01_ParamLimits

0xb332,	// (0x00072d9f) cell_sctrl_middle_pane_cp01

0xb343,	// (0x00072db0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb343,	// (0x00072db0) cell_sctrl_middle_pane_cp01_g1

0x455a,	// (0x0006bfc7) main_call4_pane

0xb350,	// (0x00072dbd) aid_size_button_call4_ParamLimits

0xb350,	// (0x00072dbd) aid_size_button_call4

0xb386,	// (0x00072df3) call4_windows_pane_ParamLimits

0xb386,	// (0x00072df3) call4_windows_pane

0xb39b,	// (0x00072e08) grid_call4_button_pane_ParamLimits

0xb39b,	// (0x00072e08) grid_call4_button_pane

0xb3cb,	// (0x00072e38) call4_windows_conf_pane

0xb3e4,	// (0x00072e51) popup_call4_audio_first_window_ParamLimits

0xb3e4,	// (0x00072e51) popup_call4_audio_first_window

0xb434,	// (0x00072ea1) popup_call4_audio_second_window_ParamLimits

0xb434,	// (0x00072ea1) popup_call4_audio_second_window

0xb44d,	// (0x00072eba) popup_call4_audio_wait_window_ParamLimits

0xb44d,	// (0x00072eba) popup_call4_audio_wait_window

0xb45b,	// (0x00072ec8) cell_call4_button_pane_ParamLimits

0xb45b,	// (0x00072ec8) cell_call4_button_pane

0xb47e,	// (0x00072eeb) bg_button_pane_cp09_ParamLimits

0xb47e,	// (0x00072eeb) bg_button_pane_cp09

0xb48a,	// (0x00072ef7) cell_call4_button_pane_g1_ParamLimits

0xb48a,	// (0x00072ef7) cell_call4_button_pane_g1

0xb497,	// (0x00072f04) cell_call4_button_pane_t1_ParamLimits

0xb497,	// (0x00072f04) cell_call4_button_pane_t1

0x3733,	// (0x0006b1a0) popup_call4_audio_conf_window_ParamLimits

0x3733,	// (0x0006b1a0) popup_call4_audio_conf_window

0xa89a,	// (0x00072307) mup3_progress_pane_t1_ParamLimits

0xa8b8,	// (0x00072325) mup3_progress_pane_t2_ParamLimits

0x2724,	// (0x0006a191) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x0007717c) mup3_progress_pane_t_ParamLimits

0x2741,	// (0x0006a1ae) mup_progress_pane_cp03_ParamLimits

0xacc1,	// (0x0007272e) mup3_control_keys_pane_g4_copy1

0xb0d7,	// (0x00072b44) mp4_rocker2_pane_ParamLimits

0xb0d7,	// (0x00072b44) mp4_rocker2_pane

0x3755,	// (0x0006b1c2) mp4_rocker2_pane_g1

0x374d,	// (0x0006b1ba) mp4_rocker2_pane_g2

0xb4db,	// (0x00072f48) mp4_rocker2_pane_g3

0xb4e3,	// (0x00072f50) mp4_rocker2_pane_g4

0xb4eb,	// (0x00072f58) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x000772b0) mp4_rocker2_pane_g

0x455a,	// (0x0006bfc7) main_camera4_pane

0x455a,	// (0x0006bfc7) main_video4_pane

0xadec,	// (0x00072859) main_video_tele_dialer_pane_t1_ParamLimits

0xadec,	// (0x00072859) main_video_tele_dialer_pane_t1

0xadfe,	// (0x0007286b) main_video_tele_dialer_pane_t2_ParamLimits

0xadfe,	// (0x0007286b) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x00077266) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x00077266) main_video_tele_dialer_pane_t

0xb50b,	// (0x00072f78) cam4_autofocus_pane_ParamLimits

0xb50b,	// (0x00072f78) cam4_autofocus_pane

0xb523,	// (0x00072f90) cam4_image_uncrop_pane_ParamLimits

0xb523,	// (0x00072f90) cam4_image_uncrop_pane

0xb53c,	// (0x00072fa9) cam4_indicators_pane_ParamLimits

0xb53c,	// (0x00072fa9) cam4_indicators_pane

0xb558,	// (0x00072fc5) main_camera4_pane_g1_ParamLimits

0xb558,	// (0x00072fc5) main_camera4_pane_g1

0xb564,	// (0x00072fd1) main_camera4_pane_g2_ParamLimits

0xb564,	// (0x00072fd1) main_camera4_pane_g2

0xb564,	// (0x00072fd1) main_camera4_pane_g3_ParamLimits

0xb564,	// (0x00072fd1) main_camera4_pane_g3

0xb570,	// (0x00072fdd) main_camera4_pane_g4_ParamLimits

0xb570,	// (0x00072fdd) main_camera4_pane_g4

0xb57c,	// (0x00072fe9) main_camera4_pane_g5_ParamLimits

0xb57c,	// (0x00072fe9) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x000772bb) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x000772bb) main_camera4_pane_g

0xb596,	// (0x00073003) main_camera4_pane_t1_ParamLimits

0xb596,	// (0x00073003) main_camera4_pane_t1

0x507b,	// (0x0006cae8) bg_tb_trans_pane_cp06

0xb5e8,	// (0x00073055) cam4_indicators_pane_g1

0xb5f9,	// (0x00073066) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x000772d6) cam4_indicators_pane_g

0xb611,	// (0x0007307e) cam4_indicators_pane_t1

0xb63b,	// (0x000730a8) main_video4_pane_g1_ParamLimits

0xb63b,	// (0x000730a8) main_video4_pane_g1

0xb647,	// (0x000730b4) main_video4_pane_g2_ParamLimits

0xb647,	// (0x000730b4) main_video4_pane_g2

0xb653,	// (0x000730c0) main_video4_pane_g3_ParamLimits

0xb653,	// (0x000730c0) main_video4_pane_g3

0xb65f,	// (0x000730cc) main_video4_pane_g4_ParamLimits

0xb65f,	// (0x000730cc) main_video4_pane_g4

0x0004,

0xf870,	// (0x000772dd) main_video4_pane_g_ParamLimits

0xf870,	// (0x000772dd) main_video4_pane_g

0xb681,	// (0x000730ee) vid4_indicators_pane_ParamLimits

0xb681,	// (0x000730ee) vid4_indicators_pane

0xb6a0,	// (0x0007310d) video4_image_uncrop_cif_pane_ParamLimits

0xb6a0,	// (0x0007310d) video4_image_uncrop_cif_pane

0xb6af,	// (0x0007311c) video4_image_uncrop_nhd_pane_ParamLimits

0xb6af,	// (0x0007311c) video4_image_uncrop_nhd_pane

0xb523,	// (0x00072f90) video4_image_uncrop_vga_pane_ParamLimits

0xb523,	// (0x00072f90) video4_image_uncrop_vga_pane

0x48f1,	// (0x0006c35e) bg_tb_trans_pane_cp07

0xb6c8,	// (0x00073135) vid4_indicators_pane_g1

0xb6de,	// (0x0007314b) vid4_indicators_pane_g2

0xb6f2,	// (0x0007315f) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x000772e8) vid4_indicators_pane_g

0xb723,	// (0x00073190) vid4_indicators_pane_t1

0xb73a,	// (0x000731a7) cam4_autofocus_pane_g1

0xb742,	// (0x000731af) cam4_autofocus_pane_g2

0xb74a,	// (0x000731b7) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x000772f3) cam4_autofocus_pane_g

0xb752,	// (0x000731bf) cam4_autofocus_pane_g3_copy1

0xae1e,	// (0x0007288b) video_down_pane_cp_t1

0xae2c,	// (0x00072899) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x0007726b) video_down_pane_cp_t

0x506d,	// (0x0006cada) popup_vitu2_window_ParamLimits

0x506d,	// (0x0006cada) popup_vitu2_window

0xb75a,	// (0x000731c7) aid_size_cell2_itu2_ParamLimits

0xb75a,	// (0x000731c7) aid_size_cell2_itu2

0xb77c,	// (0x000731e9) aid_size_cell_itu2_ParamLimits

0xb77c,	// (0x000731e9) aid_size_cell_itu2

0x3065,	// (0x0006aad2) bg_popup_window_pane_cp09_ParamLimits

0x3065,	// (0x0006aad2) bg_popup_window_pane_cp09

0xb7c0,	// (0x0007322d) field_vitu2_entry_pane_ParamLimits

0xb7c0,	// (0x0007322d) field_vitu2_entry_pane

0xb7e0,	// (0x0007324d) grid_vitu2_function_pane_ParamLimits

0xb7e0,	// (0x0007324d) grid_vitu2_function_pane

0xb824,	// (0x00073291) grid_vitu2_itu_pane_ParamLimits

0xb824,	// (0x00073291) grid_vitu2_itu_pane

0xb89a,	// (0x00073307) cell_vitu2_itu_pane_ParamLimits

0xb89a,	// (0x00073307) cell_vitu2_itu_pane

0xb8b5,	// (0x00073322) cell_vitu2_function_pane_ParamLimits

0xb8b5,	// (0x00073322) cell_vitu2_function_pane

0x376b,	// (0x0006b1d8) bg_popup_call_pane_cp08_ParamLimits

0x376b,	// (0x0006b1d8) bg_popup_call_pane_cp08

0x3782,	// (0x0006b1ef) field_vitu2_entry_pane_g1

0x378e,	// (0x0006b1fb) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x000772fa) field_vitu2_entry_pane_g

0x6125,	// (0x0006db92) field_vitu2_entry_pane_t1_ParamLimits

0x6125,	// (0x0006db92) field_vitu2_entry_pane_t1

0x6154,	// (0x0006dbc1) field_vitu2_entry_pane_t2_ParamLimits

0x6154,	// (0x0006dbc1) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x00077301) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x00077301) field_vitu2_entry_pane_t

0x9f8f,	// (0x000719fc) bg_button_pane_cp010_ParamLimits

0x9f8f,	// (0x000719fc) bg_button_pane_cp010

0xb8f9,	// (0x00073366) cell_vitu2_itu_pane_g1

0xb91f,	// (0x0007338c) cell_vitu2_itu_pane_t1_ParamLimits

0xb91f,	// (0x0007338c) cell_vitu2_itu_pane_t1

0x6171,	// (0x0006dbde) cell_vitu2_itu_pane_t2_ParamLimits

0x6171,	// (0x0006dbde) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x0007730b) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x0007730b) cell_vitu2_itu_pane_t

0x48f1,	// (0x0006c35e) bg_button_pane_cp011

0xb96b,	// (0x000733d8) cell_vitu2_function_pane_g1

0x455a,	// (0x0006bfc7) main_myfav_hc_pane

0xb313,	// (0x00072d80) popup_image3_note_pane_ParamLimits

0xb313,	// (0x00072d80) popup_image3_note_pane

0xb321,	// (0x00072d8e) popup_image3_tool_bar_pane_ParamLimits

0xb321,	// (0x00072d8e) popup_image3_tool_bar_pane

0x61e7,	// (0x0006dc54) cell_vitu2_itu_pane_t3_ParamLimits

0x61e7,	// (0x0006dc54) cell_vitu2_itu_pane_t3

0x455a,	// (0x0006bfc7) bg_popup_trans_pane

0x37a2,	// (0x0006b20f) grid_image3_tool_bar_pane

0x37ac,	// (0x0006b219) bg_popup_trans_pane_g1

0x03ec,	// (0x00067e59) bg_popup_trans_pane_g2

0x37b4,	// (0x0006b221) bg_popup_trans_pane_g3

0x37bc,	// (0x0006b229) bg_popup_trans_pane_g4

0x37c4,	// (0x0006b231) bg_popup_trans_pane_g5

0x37cc,	// (0x0006b239) bg_popup_trans_pane_g6

0x37d4,	// (0x0006b241) bg_popup_trans_pane_g7

0x37dc,	// (0x0006b249) bg_popup_trans_pane_g8

0x03cc,	// (0x00067e39) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x00077312) bg_popup_trans_pane_g

0x37e4,	// (0x0006b251) cell_image3_tool_bar_pane_ParamLimits

0x37e4,	// (0x0006b251) cell_image3_tool_bar_pane

0x01d7,	// (0x00067c44) cell_image3_tool_bar_pane_g1

0x455a,	// (0x0006bfc7) bg_popup_trans_pane_cp1

0x37fa,	// (0x0006b267) popup_image3_note_pane_t1

0x3808,	// (0x0006b275) popup_image3_note_pane_t2

0x3816,	// (0x0006b283) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x00077325) popup_image3_note_pane_t

0x3826,	// (0x0006b293) popup_image3_note_pane_t3_copy1

0xb97f,	// (0x000733ec) bg_myfav_hc_instruction_pane_ParamLimits

0xb97f,	// (0x000733ec) bg_myfav_hc_instruction_pane

0xb997,	// (0x00073404) cell_myfav_contact_pane_ParamLimits

0xb997,	// (0x00073404) cell_myfav_contact_pane

0xb9b1,	// (0x0007341e) cell_myfav_contact_pane_cp1_ParamLimits

0xb9b1,	// (0x0007341e) cell_myfav_contact_pane_cp1

0xb9c9,	// (0x00073436) cell_myfav_contact_pane_cp2_ParamLimits

0xb9c9,	// (0x00073436) cell_myfav_contact_pane_cp2

0xb9e1,	// (0x0007344e) cell_myfav_contact_pane_cp3_ParamLimits

0xb9e1,	// (0x0007344e) cell_myfav_contact_pane_cp3

0xb9f8,	// (0x00073465) cell_myfav_contact_pane_cp4_ParamLimits

0xb9f8,	// (0x00073465) cell_myfav_contact_pane_cp4

0xba0e,	// (0x0007347b) cell_myfav_contact_pane_cp5_ParamLimits

0xba0e,	// (0x0007347b) cell_myfav_contact_pane_cp5

0xba22,	// (0x0007348f) cell_myfav_contact_pane_cp6_ParamLimits

0xba22,	// (0x0007348f) cell_myfav_contact_pane_cp6

0xba36,	// (0x000734a3) cell_myfav_contact_pane_cp7_ParamLimits

0xba36,	// (0x000734a3) cell_myfav_contact_pane_cp7

0x3834,	// (0x0006b2a1) listscroll_gen_pane_cp05

0xba4e,	// (0x000734bb) main_myfav_hc_pane_g1_ParamLimits

0xba4e,	// (0x000734bb) main_myfav_hc_pane_g1

0xba68,	// (0x000734d5) main_myfav_hc_pane_g2_ParamLimits

0xba68,	// (0x000734d5) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x0007732c) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x0007732c) main_myfav_hc_pane_g

0xba9a,	// (0x00073507) main_myfav_hc_pane_t1_ParamLimits

0xba9a,	// (0x00073507) main_myfav_hc_pane_t1

0x383d,	// (0x0006b2aa) main_myfav_hc_pane_t2_ParamLimits

0x383d,	// (0x0006b2aa) main_myfav_hc_pane_t2

0x384f,	// (0x0006b2bc) main_myfav_hc_pane_t3_ParamLimits

0x384f,	// (0x0006b2bc) main_myfav_hc_pane_t3

0xbab1,	// (0x0007351e) main_myfav_hc_pane_t4_ParamLimits

0xbab1,	// (0x0007351e) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x00077333) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x00077333) main_myfav_hc_pane_t

0x01d7,	// (0x00067c44) bg_myfav_hc_instruction_pane_g1

0x3861,	// (0x0006b2ce) cell_myfav_contact_pane_g1_ParamLimits

0x3861,	// (0x0006b2ce) cell_myfav_contact_pane_g1

0x3861,	// (0x0006b2ce) cell_myfav_contact_pane_g2_ParamLimits

0x3861,	// (0x0006b2ce) cell_myfav_contact_pane_g2

0x386d,	// (0x0006b2da) cell_myfav_contact_pane_g3_ParamLimits

0x386d,	// (0x0006b2da) cell_myfav_contact_pane_g3

0x5089,	// (0x0006caf6) cell_myfav_contact_pane_g4_ParamLimits

0x5089,	// (0x0006caf6) cell_myfav_contact_pane_g4

0x387a,	// (0x0006b2e7) cell_myfav_contact_pane_g5_ParamLimits

0x387a,	// (0x0006b2e7) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x0007733e) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x0007733e) cell_myfav_contact_pane_g

0xba82,	// (0x000734ef) main_myfav_hc_pane_g3_ParamLimits

0xba82,	// (0x000734ef) main_myfav_hc_pane_g3

0x6e81,	// (0x0006e8ee) popup_adpt_find_window

0xbadb,	// (0x00073548) afind_page_pane_ParamLimits

0xbadb,	// (0x00073548) afind_page_pane

0xbae8,	// (0x00073555) aid_size_cell_afind_ParamLimits

0xbae8,	// (0x00073555) aid_size_cell_afind

0xbb02,	// (0x0007356f) bg_popup_sub_pane_cp09_ParamLimits

0xbb02,	// (0x0007356f) bg_popup_sub_pane_cp09

0xbb0f,	// (0x0007357c) find_pane_cp01_ParamLimits

0xbb0f,	// (0x0007357c) find_pane_cp01

0x3886,	// (0x0006b2f3) grid_afind_control_pane_ParamLimits

0x3886,	// (0x0006b2f3) grid_afind_control_pane

0xbb1c,	// (0x00073589) grid_afind_pane_ParamLimits

0xbb1c,	// (0x00073589) grid_afind_pane

0xbb38,	// (0x000735a5) cell_afind_pane_ParamLimits

0xbb38,	// (0x000735a5) cell_afind_pane

0x01d7,	// (0x00067c44) afind_page_pane_g1

0xbb84,	// (0x000735f1) afind_page_pane_g2

0xbb8d,	// (0x000735fa) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x00077349) afind_page_pane_g

0xbb96,	// (0x00073603) afind_page_pane_t1

0x389a,	// (0x0006b307) cell_afind_grid_control_pane_ParamLimits

0x389a,	// (0x0006b307) cell_afind_grid_control_pane

0x371f,	// (0x0006b18c) bg_button_pane_cp69_ParamLimits

0x371f,	// (0x0006b18c) bg_button_pane_cp69

0xbbb6,	// (0x00073623) cell_afind_pane_g1_ParamLimits

0xbbb6,	// (0x00073623) cell_afind_pane_g1

0xbbc3,	// (0x00073630) cell_afind_pane_t1_ParamLimits

0xbbc3,	// (0x00073630) cell_afind_pane_t1

0x01e1,	// (0x00067c4e) bg_button_pane_cp72

0x38a9,	// (0x0006b316) cell_afind_grid_control_pane_g1

0x9784,	// (0x000711f1) aid_image_placing_area_ParamLimits

0x9784,	// (0x000711f1) aid_image_placing_area

0x507b,	// (0x0006cae8) field_vitu_entry_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) field_vitu_entry_pane_g1

0x507b,	// (0x0006cae8) field_vitu_entry_pane_g2_ParamLimits

0x507b,	// (0x0006cae8) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00076c54) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00076c54) field_vitu_entry_pane_g

0x2a41,	// (0x0006a4ae) cell_vitu_itu_pane_g1_ParamLimits

0x2a24,	// (0x0006a491) cell_vitu_itu_pane_t3_ParamLimits

0x2a24,	// (0x0006a491) cell_vitu_itu_pane_t3

0x36c8,	// (0x0006b135) mp4_progress_pane_t1_ParamLimits

0x36e1,	// (0x0006b14e) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x0007728f) mp4_progress_pane_t_ParamLimits

0x36fa,	// (0x0006b167) mup_progress_pane_cp04_ParamLimits

0xbac5,	// (0x00073532) main_myfav_hc_pane_t5_ParamLimits

0xbac5,	// (0x00073532) main_myfav_hc_pane_t5

0x5ff9,	// (0x0006da66) aid_zoom_text_primary

0x6e81,	// (0x0006e8ee) popup_adpt_find_window_ParamLimits

0x48f1,	// (0x0006c35e) main_cam_set_pane

0xb54a,	// (0x00072fb7) cam4_zoom_pane_ParamLimits

0xb54a,	// (0x00072fb7) cam4_zoom_pane

0xbbd5,	// (0x00073642) main_cam_set_pane_g1_ParamLimits

0xbbd5,	// (0x00073642) main_cam_set_pane_g1

0xbbe3,	// (0x00073650) main_cam_set_pane_g2_ParamLimits

0xbbe3,	// (0x00073650) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x00077350) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x00077350) main_cam_set_pane_g

0xbbef,	// (0x0007365c) main_cam_set_pane_t1_ParamLimits

0xbbef,	// (0x0007365c) main_cam_set_pane_t1

0xbc0b,	// (0x00073678) main_cset_listscroll_pane_ParamLimits

0xbc0b,	// (0x00073678) main_cset_listscroll_pane

0xbc3f,	// (0x000736ac) main_cset_slider_pane_ParamLimits

0xbc3f,	// (0x000736ac) main_cset_slider_pane

0x38ba,	// (0x0006b327) main_cset_list_pane_ParamLimits

0x38ba,	// (0x0006b327) main_cset_list_pane

0x38ca,	// (0x0006b337) scroll_pane_cp028

0xbc60,	// (0x000736cd) aid_area_touch_slider

0xbc7c,	// (0x000736e9) cset_slider_pane

0xbc9f,	// (0x0007370c) main_cset_slider_pane_g1

0xbcb4,	// (0x00073721) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x00077355) main_cset_slider_pane_g

0x3903,	// (0x0006b370) main_cset_slider_pane_t1

0xbd70,	// (0x000737dd) main_cset_slider_pane_t2

0xbd8a,	// (0x000737f7) main_cset_slider_pane_t3

0xbda4,	// (0x00073811) main_cset_slider_pane_t4

0xbdbe,	// (0x0007382b) main_cset_slider_pane_t5

0xbdd8,	// (0x00073845) main_cset_slider_pane_t6

0xbded,	// (0x0007385a) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x0007737a) main_cset_slider_pane_t

0xbef1,	// (0x0007395e) cset_list_set_pane_ParamLimits

0xbef1,	// (0x0007395e) cset_list_set_pane

0x399d,	// (0x0006b40a) aid_position_infowindow_above

0x39a5,	// (0x0006b412) aid_position_infowindow_below

0xbf02,	// (0x0007396f) cset_list_set_pane_g1_ParamLimits

0xbf02,	// (0x0007396f) cset_list_set_pane_g1

0x6239,	// (0x0006dca6) cset_list_set_pane_g3_ParamLimits

0x6239,	// (0x0006dca6) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x00077399) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x00077399) cset_list_set_pane_g

0x6248,	// (0x0006dcb5) cset_list_set_pane_t1_ParamLimits

0x6248,	// (0x0006dcb5) cset_list_set_pane_t1

0x48f1,	// (0x0006c35e) list_highlight_pane_cp021_ParamLimits

0x48f1,	// (0x0006c35e) list_highlight_pane_cp021

0x0d1b,	// (0x00068788) cset_slider_pane_g1

0x0d2d,	// (0x0006879a) cset_slider_pane_g2

0x0d24,	// (0x00068791) cset_slider_pane_g3

0x0002,

0xf931,	// (0x0007739e) cset_slider_pane_g

0x4acd,	// (0x0006c53a) aid_area_touch_cam4_zoom

0xbf0e,	// (0x0007397b) cam4_zoom_cont_pane

0xbf16,	// (0x00073983) cam4_zoom_pane_g1

0xbf1e,	// (0x0007398b) cam4_zoom_pane_g2

0xbf26,	// (0x00073993) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x000773a5) cam4_zoom_pane_g

0xbf2e,	// (0x0007399b) cam4_zoom_cont_pane_g1

0xbf37,	// (0x000739a4) cam4_zoom_cont_pane_g2

0xbf40,	// (0x000739ad) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x000773ac) cam4_zoom_cont_pane_g

0xb36a,	// (0x00072dd7) call4_image_pane_ParamLimits

0xb36a,	// (0x00072dd7) call4_image_pane

0xb3cb,	// (0x00072e38) call4_windows_conf_pane_ParamLimits

0xb412,	// (0x00072e7f) popup_call4_audio_in_window_ParamLimits

0xb412,	// (0x00072e7f) popup_call4_audio_in_window

0x455a,	// (0x0006bfc7) bg_popup_call2_act_pane_cp02

0x372b,	// (0x0006b198) call4_list_conf_pane

0x01d7,	// (0x00067c44) call4_image_pane_g1

0x01d7,	// (0x00067c44) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00076e30) call4_image_pane_g

0x39ad,	// (0x0006b41a) list_single_graphic_popup_conf4_pane_ParamLimits

0x39ad,	// (0x0006b41a) list_single_graphic_popup_conf4_pane

0x455a,	// (0x0006bfc7) list_highlight_pane_cp022

0x39c2,	// (0x0006b42f) list_single_graphic_popup_conf4_pane_g1

0x09dc,	// (0x00068449) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x000773b3) list_single_graphic_popup_conf4_pane_g

0x39ca,	// (0x0006b437) list_single_graphic_popup_conf4_pane_t1

0x7da1,	// (0x0006f80e) popup_vtel_slider_window_ParamLimits

0x7da1,	// (0x0006f80e) popup_vtel_slider_window

0x370d,	// (0x0006b17a) dialer2_ne_pane_t2_ParamLimits

0x370d,	// (0x0006b17a) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x00077294) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x00077294) dialer2_ne_pane_t

0x48f1,	// (0x0006c35e) bg_popup_sub_pane_cp010_ParamLimits

0x48f1,	// (0x0006c35e) bg_popup_sub_pane_cp010

0xbf49,	// (0x000739b6) popup_vtel_slider_window_g1_ParamLimits

0xbf49,	// (0x000739b6) popup_vtel_slider_window_g1

0xbf55,	// (0x000739c2) popup_vtel_slider_window_g2_ParamLimits

0xbf55,	// (0x000739c2) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x000773b8) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x000773b8) popup_vtel_slider_window_g

0xbf9d,	// (0x00073a0a) vtel_slider_pane_ParamLimits

0xbf9d,	// (0x00073a0a) vtel_slider_pane

0xbfac,	// (0x00073a19) vtel_slider_pane_g1_ParamLimits

0xbfac,	// (0x00073a19) vtel_slider_pane_g1

0xbfb9,	// (0x00073a26) vtel_slider_pane_g2_ParamLimits

0xbfb9,	// (0x00073a26) vtel_slider_pane_g2

0xbfc6,	// (0x00073a33) vtel_slider_pane_g3_ParamLimits

0xbfc6,	// (0x00073a33) vtel_slider_pane_g3

0xbfac,	// (0x00073a19) vtel_slider_pane_g4_ParamLimits

0xbfac,	// (0x00073a19) vtel_slider_pane_g4

0xbfd3,	// (0x00073a40) vtel_slider_pane_g5_ParamLimits

0xbfd3,	// (0x00073a40) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x000773c1) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x000773c1) vtel_slider_pane_g

0x48f1,	// (0x0006c35e) main_gallery2_pane

0xb7a2,	// (0x0007320f) aid_size_row_itut2_dropdow_list_ParamLimits

0xb7a2,	// (0x0007320f) aid_size_row_itut2_dropdow_list

0xb802,	// (0x0007326f) grid_vitu2_function_top_pane_ParamLimits

0xb802,	// (0x0007326f) grid_vitu2_function_top_pane

0xb858,	// (0x000732c5) popup_vitu2_dropdown_list_window_ParamLimits

0xb858,	// (0x000732c5) popup_vitu2_dropdown_list_window

0xb876,	// (0x000732e3) popup_vitu2_match_list_window

0xbfe0,	// (0x00073a4d) cell_vitu2_function_top_pane_ParamLimits

0xbfe0,	// (0x00073a4d) cell_vitu2_function_top_pane

0xbffa,	// (0x00073a67) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbffa,	// (0x00073a67) cell_vitu2_function_top_pane_cp01

0xc016,	// (0x00073a83) cell_vitu2_function_top_wide_pane_ParamLimits

0xc016,	// (0x00073a83) cell_vitu2_function_top_wide_pane

0x48f1,	// (0x0006c35e) bg_button_pane_cp012

0xc034,	// (0x00073aa1) cell_vitu2_function_top_pane_g1

0xc048,	// (0x00073ab5) bg_button_pane_cp013_ParamLimits

0xc048,	// (0x00073ab5) bg_button_pane_cp013

0xc064,	// (0x00073ad1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc064,	// (0x00073ad1) cell_vitu2_function_top_wide_pane_g1

0x506d,	// (0x0006cada) bg_popup_sub_pane_cp20

0xc07c,	// (0x00073ae9) list_vitu2_match_list_pane

0x37ac,	// (0x0006b219) bg_popup_sub_pane_cp20_g1

0x37b4,	// (0x0006b221) bg_popup_sub_pane_cp20_g2

0x03ec,	// (0x00067e59) bg_popup_sub_pane_cp20_g3

0x37bc,	// (0x0006b229) bg_popup_sub_pane_cp20_g4

0x03cc,	// (0x00067e39) bg_popup_sub_pane_cp20_g5

0x39e0,	// (0x0006b44d) bg_popup_sub_pane_cp20_g6

0x37cc,	// (0x0006b239) bg_popup_sub_pane_cp20_g7

0x37d4,	// (0x0006b241) bg_popup_sub_pane_cp20_g8

0x37dc,	// (0x0006b249) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x000773cc) bg_popup_sub_pane_cp20_g

0xc094,	// (0x00073b01) list_vitu2_match_list_item_pane_ParamLimits

0xc094,	// (0x00073b01) list_vitu2_match_list_item_pane

0xc0a6,	// (0x00073b13) list_vitu2_match_list_item_pane_t1

0x455a,	// (0x0006bfc7) bg_popup_sub_pane_cp21

0x0182,	// (0x00067bef) grid_vitu2_dropdown_list_pane

0xc0b4,	// (0x00073b21) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc0b4,	// (0x00073b21) cell_vitu2_dropdown_list_char_pane

0xc0d8,	// (0x00073b45) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc0d8,	// (0x00073b45) cell_vitu2_dropdown_list_ctrl_pane

0x39fa,	// (0x0006b467) cell_vitu2_dropdown_list_char_pane_g1

0x39f1,	// (0x0006b45e) cell_vitu2_dropdown_list_char_pane_g2

0x39e8,	// (0x0006b455) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x000773df) cell_vitu2_dropdown_list_char_pane_g

0xc102,	// (0x00073b6f) cell_vitu2_dropdown_list_char_pane_t1

0xc110,	// (0x00073b7d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc110,	// (0x00073b7d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc120,	// (0x00073b8d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc120,	// (0x00073b8d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc131,	// (0x00073b9e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc131,	// (0x00073b9e) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc141,	// (0x00073bae) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc141,	// (0x00073bae) cell_vitu2_dropdown_list_ctrl_pane_g4

0x507b,	// (0x0006cae8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x507b,	// (0x0006cae8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x000773e6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x000773e6) cell_vitu2_dropdown_list_ctrl_pane_g

0xc15a,	// (0x00073bc7) aid_size_cell_gallery2_ParamLimits

0xc15a,	// (0x00073bc7) aid_size_cell_gallery2

0xc174,	// (0x00073be1) grid_gallery2_pane_ParamLimits

0xc174,	// (0x00073be1) grid_gallery2_pane

0xc18b,	// (0x00073bf8) scroll_pane_cp029_ParamLimits

0xc18b,	// (0x00073bf8) scroll_pane_cp029

0xc19b,	// (0x00073c08) cell_gallery2_pane_ParamLimits

0xc19b,	// (0x00073c08) cell_gallery2_pane

0x3a03,	// (0x0006b470) cell_gallery2_pane_g2

0xc1f2,	// (0x00073c5f) cell_gallery2_pane_g3

0x3a0b,	// (0x0006b478) cell_gallery2_pane_g4

0x3a13,	// (0x0006b480) cell_gallery2_pane_g5

0x0182,	// (0x00067bef) grid_highlight_pane_cp10

0xb876,	// (0x000732e3) popup_vitu2_match_list_window_ParamLimits

0xb88a,	// (0x000732f7) popup_vitu2_query_window_ParamLimits

0xb88a,	// (0x000732f7) popup_vitu2_query_window

0x455a,	// (0x0006bfc7) bg_vitu2_candi_button_pane

0x39fa,	// (0x0006b467) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x39f1,	// (0x0006b45e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x39e8,	// (0x0006b455) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x625d,	// (0x0006dcca) bg_button_pane_cp015

0xc1fa,	// (0x00073c67) bg_button_pane_cp016

0xc206,	// (0x00073c73) bg_button_pane_cp017

0x0ca9,	// (0x00068716) bg_popup_sub_pane_cp22

0x3a1b,	// (0x0006b488) popup_vitu2_query_window_g1

0xc221,	// (0x00073c8e) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x000773f1) popup_vitu2_query_window_g

0x6298,	// (0x0006dd05) popup_vitu2_query_window_t1_ParamLimits

0x6298,	// (0x0006dd05) popup_vitu2_query_window_t1

0x62cb,	// (0x0006dd38) popup_vitu2_query_window_t2_ParamLimits

0x62cb,	// (0x0006dd38) popup_vitu2_query_window_t2

0x62dd,	// (0x0006dd4a) popup_vitu2_query_window_t3_ParamLimits

0x62dd,	// (0x0006dd4a) popup_vitu2_query_window_t3

0xc245,	// (0x00073cb2) popup_vitu2_query_window_t4_ParamLimits

0xc245,	// (0x00073cb2) popup_vitu2_query_window_t4

0xc259,	// (0x00073cc6) popup_vitu2_query_window_t5_ParamLimits

0xc259,	// (0x00073cc6) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x000773f8) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x000773f8) popup_vitu2_query_window_t

0x38b2,	// (0x0006b31f) main_cset_text_pane

0xbc60,	// (0x000736cd) aid_area_touch_slider_ParamLimits

0xbc7c,	// (0x000736e9) cset_slider_pane_ParamLimits

0xbc9f,	// (0x0007370c) main_cset_slider_pane_g1_ParamLimits

0xbcb4,	// (0x00073721) main_cset_slider_pane_g2_ParamLimits

0x38d3,	// (0x0006b340) main_cset_slider_pane_g3_ParamLimits

0x38d3,	// (0x0006b340) main_cset_slider_pane_g3

0xbcc9,	// (0x00073736) main_cset_slider_pane_g4_ParamLimits

0xbcc9,	// (0x00073736) main_cset_slider_pane_g4

0xbcd8,	// (0x00073745) main_cset_slider_pane_g5_ParamLimits

0xbcd8,	// (0x00073745) main_cset_slider_pane_g5

0xbce4,	// (0x00073751) main_cset_slider_pane_g6_ParamLimits

0xbce4,	// (0x00073751) main_cset_slider_pane_g6

0xf8e8,	// (0x00077355) main_cset_slider_pane_g_ParamLimits

0x3903,	// (0x0006b370) main_cset_slider_pane_t1_ParamLimits

0xbd70,	// (0x000737dd) main_cset_slider_pane_t2_ParamLimits

0xbd8a,	// (0x000737f7) main_cset_slider_pane_t3_ParamLimits

0xbda4,	// (0x00073811) main_cset_slider_pane_t4_ParamLimits

0xbdbe,	// (0x0007382b) main_cset_slider_pane_t5_ParamLimits

0xbdd8,	// (0x00073845) main_cset_slider_pane_t6_ParamLimits

0xbded,	// (0x0007385a) main_cset_slider_pane_t7_ParamLimits

0xbe17,	// (0x00073884) main_cset_slider_pane_t8_ParamLimits

0xbe17,	// (0x00073884) main_cset_slider_pane_t8

0xbe3f,	// (0x000738ac) main_cset_slider_pane_t9_ParamLimits

0xbe3f,	// (0x000738ac) main_cset_slider_pane_t9

0xbe67,	// (0x000738d4) main_cset_slider_pane_t10_ParamLimits

0xbe67,	// (0x000738d4) main_cset_slider_pane_t10

0xbe8f,	// (0x000738fc) main_cset_slider_pane_t11_ParamLimits

0xbe8f,	// (0x000738fc) main_cset_slider_pane_t11

0xbeb7,	// (0x00073924) main_cset_slider_pane_t12_ParamLimits

0xbeb7,	// (0x00073924) main_cset_slider_pane_t12

0xbed4,	// (0x00073941) main_cset_slider_pane_t13_ParamLimits

0xbed4,	// (0x00073941) main_cset_slider_pane_t13

0xf90d,	// (0x0007737a) main_cset_slider_pane_t_ParamLimits

0x455a,	// (0x0006bfc7) bg_popup_sub_pane_cp011

0x3a27,	// (0x0006b494) main_cset_text_pane_g1

0x3a2f,	// (0x0006b49c) main_cset_text_pane_t1

0x3a3d,	// (0x0006b4aa) main_cset_text_pane_t2

0x3a4b,	// (0x0006b4b8) main_cset_text_pane_t3

0x3a59,	// (0x0006b4c6) main_cset_text_pane_t4

0x3a67,	// (0x0006b4d4) main_cset_text_pane_t5

0x3a75,	// (0x0006b4e2) main_cset_text_pane_t6

0x3a83,	// (0x0006b4f0) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x00077407) main_cset_text_pane_t

0x455a,	// (0x0006bfc7) main_cam4_burst_pane

0x455a,	// (0x0006bfc7) main_cam5_pane

0xbba4,	// (0x00073611) bg_button_pane_cp019

0xbbad,	// (0x0007361a) bg_button_pane_cp020

0x38df,	// (0x0006b34c) main_cset_slider_pane_g7_ParamLimits

0x38df,	// (0x0006b34c) main_cset_slider_pane_g7

0x38eb,	// (0x0006b358) main_cset_slider_pane_g8_ParamLimits

0x38eb,	// (0x0006b358) main_cset_slider_pane_g8

0xbcf8,	// (0x00073765) main_cset_slider_pane_g9_ParamLimits

0xbcf8,	// (0x00073765) main_cset_slider_pane_g9

0xbd04,	// (0x00073771) main_cset_slider_pane_g10_ParamLimits

0xbd04,	// (0x00073771) main_cset_slider_pane_g10

0xbd10,	// (0x0007377d) main_cset_slider_pane_g11_ParamLimits

0xbd10,	// (0x0007377d) main_cset_slider_pane_g11

0xbd1c,	// (0x00073789) main_cset_slider_pane_g12_ParamLimits

0xbd1c,	// (0x00073789) main_cset_slider_pane_g12

0xbd28,	// (0x00073795) main_cset_slider_pane_g13_ParamLimits

0xbd28,	// (0x00073795) main_cset_slider_pane_g13

0xbd34,	// (0x000737a1) main_cset_slider_pane_g14_ParamLimits

0xbd34,	// (0x000737a1) main_cset_slider_pane_g14

0xbd40,	// (0x000737ad) main_cset_slider_pane_g15_ParamLimits

0xbd40,	// (0x000737ad) main_cset_slider_pane_g15

0x392b,	// (0x0006b398) main_cset_slider_pane_t14_ParamLimits

0x392b,	// (0x0006b398) main_cset_slider_pane_t14

0x3964,	// (0x0006b3d1) main_cset_slider_pane_t15_ParamLimits

0x3964,	// (0x0006b3d1) main_cset_slider_pane_t15

0xc26d,	// (0x00073cda) aid_cam4_burst_size_cell_ParamLimits

0xc26d,	// (0x00073cda) aid_cam4_burst_size_cell

0xc289,	// (0x00073cf6) grid_cam4_burst_pane_ParamLimits

0xc289,	// (0x00073cf6) grid_cam4_burst_pane

0xc2bb,	// (0x00073d28) linegrid_cam4_burst_pane_ParamLimits

0xc2bb,	// (0x00073d28) linegrid_cam4_burst_pane

0xc2d9,	// (0x00073d46) scroll_pane_cp30_ParamLimits

0xc2d9,	// (0x00073d46) scroll_pane_cp30

0xc2e5,	// (0x00073d52) cell_cam4_burst_pane_ParamLimits

0xc2e5,	// (0x00073d52) cell_cam4_burst_pane

0x3a91,	// (0x0006b4fe) linegrid_cam4_burst_pane_g1_ParamLimits

0x3a91,	// (0x0006b4fe) linegrid_cam4_burst_pane_g1

0xc325,	// (0x00073d92) linegrid_cam4_burst_pane_g2_ParamLimits

0xc325,	// (0x00073d92) linegrid_cam4_burst_pane_g2

0x3a9e,	// (0x0006b50b) linegrid_cam4_burst_pane_g3_ParamLimits

0x3a9e,	// (0x0006b50b) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x00077416) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x00077416) linegrid_cam4_burst_pane_g

0xc336,	// (0x00073da3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc336,	// (0x00073da3) linegrid_cam4_burst_pane_g3_copy1

0x3aab,	// (0x0006b518) linegrid_cam4_burst_pane_g4_ParamLimits

0x3aab,	// (0x0006b518) linegrid_cam4_burst_pane_g4

0xc350,	// (0x00073dbd) linegrid_cam4_burst_pane_g5_ParamLimits

0xc350,	// (0x00073dbd) linegrid_cam4_burst_pane_g5

0xc361,	// (0x00073dce) linegrid_cam4_burst_pane_g6_ParamLimits

0xc361,	// (0x00073dce) linegrid_cam4_burst_pane_g6

0x3ab8,	// (0x0006b525) linegrid_cam4_burst_pane_g7_ParamLimits

0x3ab8,	// (0x0006b525) linegrid_cam4_burst_pane_g7

0xc378,	// (0x00073de5) cell_cam4_burst_pane_g1

0x3ad1,	// (0x0006b53e) main_cam5_pane_t1_ParamLimits

0x3ad1,	// (0x0006b53e) main_cam5_pane_t1

0x3ae3,	// (0x0006b550) main_cam5_pane_t2_ParamLimits

0x3ae3,	// (0x0006b550) main_cam5_pane_t2

0x3af5,	// (0x0006b562) main_cam5_pane_t3_ParamLimits

0x3af5,	// (0x0006b562) main_cam5_pane_t3

0x3b07,	// (0x0006b574) main_cam5_pane_t4_ParamLimits

0x3b07,	// (0x0006b574) main_cam5_pane_t4

0x3b1f,	// (0x0006b58c) main_cam5_pane_t5_ParamLimits

0x3b1f,	// (0x0006b58c) main_cam5_pane_t5

0x3b33,	// (0x0006b5a0) main_cam5_pane_t6_ParamLimits

0x3b33,	// (0x0006b5a0) main_cam5_pane_t6

0x3b47,	// (0x0006b5b4) main_cam5_pane_t7_ParamLimits

0x3b47,	// (0x0006b5b4) main_cam5_pane_t7

0x3b59,	// (0x0006b5c6) main_cam5_pane_t8_ParamLimits

0x3b59,	// (0x0006b5c6) main_cam5_pane_t8

0x3b77,	// (0x0006b5e4) main_cam5_pane_t9_ParamLimits

0x3b77,	// (0x0006b5e4) main_cam5_pane_t9

0x3b89,	// (0x0006b5f6) main_cam5_pane_t10_ParamLimits

0x3b89,	// (0x0006b5f6) main_cam5_pane_t10

0x3b9b,	// (0x0006b608) main_cam5_pane_t11_ParamLimits

0x3b9b,	// (0x0006b608) main_cam5_pane_t11

0x3baf,	// (0x0006b61c) main_cam5_pane_t12_ParamLimits

0x3baf,	// (0x0006b61c) main_cam5_pane_t12

0x3bc6,	// (0x0006b633) main_cam5_pane_t13_ParamLimits

0x3bc6,	// (0x0006b633) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x00077422) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x00077422) main_cam5_pane_t

0x6f38,	// (0x0006e9a5) popup_scut_keymap_window_ParamLimits

0x6f38,	// (0x0006e9a5) popup_scut_keymap_window

0xc38b,	// (0x00073df8) aid_size_cell_brow_shortcut

0x0182,	// (0x00067bef) bg_popup_window_pane_cp010

0xc397,	// (0x00073e04) grid_scut_pane

0xc3a3,	// (0x00073e10) cell_scut_pane_ParamLimits

0xc3a3,	// (0x00073e10) cell_scut_pane

0xc3be,	// (0x00073e2b) cell_scut_pane_g1

0x3be9,	// (0x0006b656) cell_scut_pane_t1

0x3bf8,	// (0x0006b665) cell_scut_pane_t2

0xc3c7,	// (0x00073e34) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x0007743d) cell_scut_pane_t

0xa4a9,	// (0x00071f16) main_mup3_pane_g8_ParamLimits

0xa4a9,	// (0x00071f16) main_mup3_pane_g8

0xb7b0,	// (0x0007321d) area_vitu2_query_pane_ParamLimits

0xb7b0,	// (0x0007321d) area_vitu2_query_pane

0x6272,	// (0x0006dcdf) input_focus_pane_cp08

0x3c07,	// (0x0006b674) area_vitu2_query_pane_g1

0x635b,	// (0x0006ddc8) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x00077444) area_vitu2_query_pane_g

0xc3d5,	// (0x00073e42) area_vitu2_query_pane_t1_ParamLimits

0xc3d5,	// (0x00073e42) area_vitu2_query_pane_t1

0xc3e9,	// (0x00073e56) area_vitu2_query_pane_t2_ParamLimits

0xc3e9,	// (0x00073e56) area_vitu2_query_pane_t2

0x636c,	// (0x0006ddd9) area_vitu2_query_pane_t3_ParamLimits

0x636c,	// (0x0006ddd9) area_vitu2_query_pane_t3

0x6394,	// (0x0006de01) area_vitu2_query_pane_t4_ParamLimits

0x6394,	// (0x0006de01) area_vitu2_query_pane_t4

0x63bc,	// (0x0006de29) area_vitu2_query_pane_t5_ParamLimits

0x63bc,	// (0x0006de29) area_vitu2_query_pane_t5

0x63e4,	// (0x0006de51) area_vitu2_query_pane_t6_ParamLimits

0x63e4,	// (0x0006de51) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x00077449) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x00077449) area_vitu2_query_pane_t

0xc1fa,	// (0x00073c67) bg_button_pane_cp018

0xc3fd,	// (0x00073e6a) bg_button_pane_cp021

0x6430,	// (0x0006de9d) bg_button_pane_cp022

0x6453,	// (0x0006dec0) input_focus_pane_cp09

0x9089,	// (0x00070af6) aid_size_touch_mv_arrow_left

0x90b4,	// (0x00070b21) aid_size_touch_mv_arrow_right

0xbd58,	// (0x000737c5) main_cset_slider_pane_g16_ParamLimits

0xbd58,	// (0x000737c5) main_cset_slider_pane_g16

0xbd64,	// (0x000737d1) main_cset_slider_pane_g17_ParamLimits

0xbd64,	// (0x000737d1) main_cset_slider_pane_g17

0xc378,	// (0x00073de5) cell_cam4_burst_pane_g1_ParamLimits

0x455a,	// (0x0006bfc7) compa_mode_pane

0xbf61,	// (0x000739ce) popup_vtel_slider_window_g3_ParamLimits

0xbf61,	// (0x000739ce) popup_vtel_slider_window_g3

0xbf75,	// (0x000739e2) popup_vtel_slider_window_g4_ParamLimits

0xbf75,	// (0x000739e2) popup_vtel_slider_window_g4

0xbf89,	// (0x000739f6) popup_vtel_slider_window_t1_ParamLimits

0xbf89,	// (0x000739f6) popup_vtel_slider_window_t1

0x455a,	// (0x0006bfc7) main_cl_pane

0x9cec,	// (0x00071759) popup_imed_adjust2_window_ParamLimits

0x0ca9,	// (0x00068716) bg_tb_trans_pane_cp05_ParamLimits

0x294f,	// (0x0006a3bc) popup_imed_adjust2_window_g1_ParamLimits

0x295e,	// (0x0006a3cb) popup_imed_adjust2_window_g2_ParamLimits

0x295e,	// (0x0006a3cb) popup_imed_adjust2_window_g2

0x296a,	// (0x0006a3d7) popup_imed_adjust2_window_g3_ParamLimits

0x296a,	// (0x0006a3d7) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x000771bf) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x000771bf) popup_imed_adjust2_window_g

0x2976,	// (0x0006a3e3) popup_imed_adjust2_window_t1_ParamLimits

0x298e,	// (0x0006a3fb) slider_imed_adjust_pane_ParamLimits

0x29a2,	// (0x0006a40f) slider_imed_adjust_pane_g1_ParamLimits

0x29b2,	// (0x0006a41f) slider_imed_adjust_pane_g2_ParamLimits

0x29c2,	// (0x0006a42f) slider_imed_adjust_pane_g3_ParamLimits

0x29d3,	// (0x0006a440) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x000771c6) slider_imed_adjust_pane_g_ParamLimits

0xb4f3,	// (0x00072f60) aid_touch_area_cam4_ParamLimits

0xb4f3,	// (0x00072f60) aid_touch_area_cam4

0xb503,	// (0x00072f70) battery_pane_cp01

0xb58a,	// (0x00072ff7) main_camera4_pane_g6_ParamLimits

0xb58a,	// (0x00072ff7) main_camera4_pane_g6

0xb5a8,	// (0x00073015) main_camera4_pane_t2_ParamLimits

0xb5a8,	// (0x00073015) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x000772c8) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x000772c8) main_camera4_pane_t

0xb62b,	// (0x00073098) aid_touch_area_vid4_ParamLimits

0xb62b,	// (0x00073098) aid_touch_area_vid4

0xb66b,	// (0x000730d8) main_video4_pane_g5_ParamLimits

0xb66b,	// (0x000730d8) main_video4_pane_g5

0xb691,	// (0x000730fe) vid4_progress_pane_ParamLimits

0xb691,	// (0x000730fe) vid4_progress_pane

0x38f7,	// (0x0006b364) main_cset_slider_pane_g18_ParamLimits

0x38f7,	// (0x0006b364) main_cset_slider_pane_g18

0x3ac5,	// (0x0006b532) cell_cam4_burst_pane_g2_ParamLimits

0x3ac5,	// (0x0006b532) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x0007741d) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x0007741d) cell_cam4_burst_pane_g

0xc409,	// (0x00073e76) bg_cl_pane_ParamLimits

0xc409,	// (0x00073e76) bg_cl_pane

0xc415,	// (0x00073e82) cl_header_pane_ParamLimits

0xc415,	// (0x00073e82) cl_header_pane

0xc421,	// (0x00073e8e) cl_listscroll_pane_ParamLimits

0xc421,	// (0x00073e8e) cl_listscroll_pane

0x3c13,	// (0x0006b680) bg_cl_pane_g1

0x3c1b,	// (0x0006b688) bg_cl_pane_g2

0x3c23,	// (0x0006b690) bg_cl_pane_g3

0x3c2b,	// (0x0006b698) bg_cl_pane_g4

0x3c33,	// (0x0006b6a0) bg_cl_pane_g5

0x3c3b,	// (0x0006b6a8) bg_cl_pane_g6

0x3c43,	// (0x0006b6b0) bg_cl_pane_g7

0x3c4b,	// (0x0006b6b8) bg_cl_pane_g8

0x3c53,	// (0x0006b6c0) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x00077458) bg_cl_pane_g

0xc42d,	// (0x00073e9a) aid_height_cl_leading_ParamLimits

0xc42d,	// (0x00073e9a) aid_height_cl_leading

0xc439,	// (0x00073ea6) aid_height_cl_text_ParamLimits

0xc439,	// (0x00073ea6) aid_height_cl_text

0x506d,	// (0x0006cada) bg_cl_header_pane_ParamLimits

0x506d,	// (0x0006cada) bg_cl_header_pane

0xc451,	// (0x00073ebe) cl_header_pane_g1_ParamLimits

0xc451,	// (0x00073ebe) cl_header_pane_g1

0xc45e,	// (0x00073ecb) cl_header_pane_t1_ParamLimits

0xc45e,	// (0x00073ecb) cl_header_pane_t1

0x3c5b,	// (0x0006b6c8) cl_list_pane

0x38ca,	// (0x0006b337) hc_scroll_pane_cp01

0x03cc,	// (0x00067e39) bg_cl_header_pane_g1

0x37ac,	// (0x0006b219) bg_cl_header_pane_g2

0x03ec,	// (0x00067e59) bg_cl_header_pane_g3

0x37bc,	// (0x0006b229) bg_cl_header_pane_g4

0x37b4,	// (0x0006b221) bg_cl_header_pane_g5

0x39e0,	// (0x0006b44d) bg_cl_header_pane_g6

0x37d4,	// (0x0006b241) bg_cl_header_pane_g7

0x37dc,	// (0x0006b249) bg_cl_header_pane_g8

0x37cc,	// (0x0006b239) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x0007746b) bg_cl_header_pane_g

0xc470,	// (0x00073edd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc470,	// (0x00073edd) hc_cl_list_double_graphic_heading_pane

0xc480,	// (0x00073eed) hc_cl_list_single_graphic_pane_ParamLimits

0xc480,	// (0x00073eed) hc_cl_list_single_graphic_pane

0xc492,	// (0x00073eff) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc492,	// (0x00073eff) hc_cl_list_single_graphic_pane_g1

0xc49e,	// (0x00073f0b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc49e,	// (0x00073f0b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x0007747e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x0007747e) hc_cl_list_single_graphic_pane_g

0xc4b2,	// (0x00073f1f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc4b2,	// (0x00073f1f) hc_cl_list_single_graphic_pane_t1

0xc492,	// (0x00073eff) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc492,	// (0x00073eff) hc_cl_list_double_graphic_heading_pane_g1

0xc4c7,	// (0x00073f34) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc4c7,	// (0x00073f34) hc_cl_list_double_graphic_heading_pane_g2

0xc4db,	// (0x00073f48) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc4db,	// (0x00073f48) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x00077483) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x00077483) hc_cl_list_double_graphic_heading_pane_g

0xc4ef,	// (0x00073f5c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc4ef,	// (0x00073f5c) hc_cl_list_double_graphic_heading_pane_t1

0xc504,	// (0x00073f71) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc504,	// (0x00073f71) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x0007748a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x0007748a) hc_cl_list_double_graphic_heading_pane_t

0xc521,	// (0x00073f8e) vid4_progress_pane_g1

0xc531,	// (0x00073f9e) vid4_progress_pane_g2

0xc541,	// (0x00073fae) vid4_progress_pane_g3

0xc553,	// (0x00073fc0) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x0007748f) vid4_progress_pane_g

0xc571,	// (0x00073fde) vid4_progress_pane_t1

0xc58b,	// (0x00073ff8) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x0007749a) vid4_progress_pane_t

0xc5b6,	// (0x00074023) wait_bar_pane_cp07

0x22a4,	// (0x00069d11) blid_firmament_pane_ParamLimits

0x22e7,	// (0x00069d54) popup_blid_sat_info2_window_g1

0x230b,	// (0x00069d78) popup_blid_sat_info2_window_t3

0x2319,	// (0x00069d86) popup_blid_sat_info2_window_t4

0x2327,	// (0x00069d94) popup_blid_sat_info2_window_t5

0x2335,	// (0x00069da2) popup_blid_sat_info2_window_t6

0x2345,	// (0x00069db2) popup_blid_sat_info2_window_t7

0x2353,	// (0x00069dc0) popup_blid_sat_info2_window_t8

0x2361,	// (0x00069dce) popup_blid_sat_info2_window_t9

0x236f,	// (0x00069ddc) popup_blid_sat_info2_window_t10

0x2436,	// (0x00069ea3) aid_firma_cardinal_ParamLimits

0x244a,	// (0x00069eb7) blid_firmament_pane_t1_ParamLimits

0x2461,	// (0x00069ece) blid_firmament_pane_t2_ParamLimits

0x2478,	// (0x00069ee5) blid_firmament_pane_t3_ParamLimits

0x248f,	// (0x00069efc) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x000770b8) blid_firmament_pane_t_ParamLimits

0x24a6,	// (0x00069f13) blid_sat_info_pane_ParamLimits

0x48f1,	// (0x0006c35e) main_cam_set_pane_ParamLimits

0xab73,	// (0x000725e0) aid_size_cell_colour_35_ParamLimits

0xab8d,	// (0x000725fa) aid_size_cell_colour_112_ParamLimits

0xaba4,	// (0x00072611) aid_size_cell_effect_ParamLimits

0x48f1,	// (0x0006c35e) bg_tb_trans_pane_cp02_ParamLimits

0x0732,	// (0x0006819f) heading_imed_pane_ParamLimits

0xabbe,	// (0x0007262b) listscroll_imed_pane_ParamLimits

0x166c,	// (0x000690d9) popup_call2_audio_first_window_g5_ParamLimits

0x166c,	// (0x000690d9) popup_call2_audio_first_window_g5

0xb1e1,	// (0x00072c4e) aid_size_touch_image3_arrow_left_ParamLimits

0xb1e1,	// (0x00072c4e) aid_size_touch_image3_arrow_left

0xb1f7,	// (0x00072c64) aid_size_touch_image3_arrow_right_ParamLimits

0xb1f7,	// (0x00072c64) aid_size_touch_image3_arrow_right

0xc5a1,	// (0x0007400e) vid4_progress_pane_t3

0xad39,	// (0x000727a6) main_hwr_training_symbol_option_pane_ParamLimits

0xad39,	// (0x000727a6) main_hwr_training_symbol_option_pane

0x2b94,	// (0x0006a601) popup_hwr_training_preview_window_ParamLimits

0x2b94,	// (0x0006a601) popup_hwr_training_preview_window

0xad9a,	// (0x00072807) hwr_training_navi_pane_g5_ParamLimits

0xad9a,	// (0x00072807) hwr_training_navi_pane_g5

0x379a,	// (0x0006b207) popup_char_count_window

0x506d,	// (0x0006cada) bg_popup_sub_pane_cp20_ParamLimits

0xc07c,	// (0x00073ae9) list_vitu2_match_list_pane_ParamLimits

0xc088,	// (0x00073af5) vitu2_page_scroll_pane_ParamLimits

0xc088,	// (0x00073af5) vitu2_page_scroll_pane

0x3cd5,	// (0x0006b742) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3cd5,	// (0x0006b742) list_single_hwr_training_symbol_option_pane

0x3ce8,	// (0x0006b755) list_single_hwr_training_symbol_option_pane_g1

0x3cf0,	// (0x0006b75d) list_single_hwr_training_symbol_option_pane_t1

0x3cfe,	// (0x0006b76b) bg_button_pane_cp023

0x3d07,	// (0x0006b774) bg_button_pane_cp024

0x3d3a,	// (0x0006b7a7) vitu2_page_scroll_pane_g1

0x3d42,	// (0x0006b7af) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x000774a1) vitu2_page_scroll_pane_g

0x3d4a,	// (0x0006b7b7) vitu2_page_scroll_pane_t1

0x3d59,	// (0x0006b7c6) popup_char_count_window_g1

0x3d62,	// (0x0006b7cf) popup_char_count_window_g2

0x3d6b,	// (0x0006b7d8) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x000774a6) popup_char_count_window_g

0x3d74,	// (0x0006b7e1) popup_char_count_window_t1

0x455a,	// (0x0006bfc7) main_vded2_pane

0x293b,	// (0x0006a3a8) aid_size_cell_imed_line

0x2945,	// (0x0006a3b2) grid_imed_line_width_pane

0xb705,	// (0x00073172) vid4_indicators_pane_g4

0x3d82,	// (0x0006b7ef) cell_imed_line_width_pane_ParamLimits

0x3d82,	// (0x0006b7ef) cell_imed_line_width_pane

0x3d98,	// (0x0006b805) cell_imed_line_width_pane_g1

0x3da1,	// (0x0006b80e) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x000774ad) cell_imed_line_width_pane_g

0xc5d1,	// (0x0007403e) main_vded2_pane_g1_ParamLimits

0xc5d1,	// (0x0007403e) main_vded2_pane_g1

0xc5e0,	// (0x0007404d) main_vded2_pane_g2_ParamLimits

0xc5e0,	// (0x0007404d) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x000774b2) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x000774b2) main_vded2_pane_g

0xc5ee,	// (0x0007405b) vded2_slider_pane_ParamLimits

0xc5ee,	// (0x0007405b) vded2_slider_pane

0xc5fb,	// (0x00074068) aid_size_touch_vded2_end

0xc605,	// (0x00074072) aid_size_touch_vded2_playhead

0x3da9,	// (0x0006b816) aid_size_touch_vded2_start

0x3db1,	// (0x0006b81e) vded2_slider_bg_pane

0x3e07,	// (0x0006b874) vded2_slider_pane_g1

0x3e10,	// (0x0006b87d) vded2_slider_pane_g2

0xc60d,	// (0x0007407a) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x000774b7) vded2_slider_pane_g

0x3dba,	// (0x0006b827) vded2_slider_bg_pane_g1

0x3dc3,	// (0x0006b830) vded2_slider_bg_pane_g2

0x3dcc,	// (0x0006b839) vded2_slider_bg_pane_g3

0x0002,

0xf716,	// (0x00077183) vded2_slider_bg_pane_g

0x94e7,	// (0x00070f54) aid_postcard_touch_down_pane_ParamLimits

0x94e7,	// (0x00070f54) aid_postcard_touch_down_pane

0x94f7,	// (0x00070f64) aid_postcard_touch_up_pane_ParamLimits

0x94f7,	// (0x00070f64) aid_postcard_touch_up_pane

0x455a,	// (0x0006bfc7) main_blid2_pane

0x9c6b,	// (0x000716d8) popup_blid2_search_window

0x455a,	// (0x0006bfc7) blid2_gps_pane

0x455a,	// (0x0006bfc7) blid2_navig_pane

0x455a,	// (0x0006bfc7) blid2_search_pane

0x455a,	// (0x0006bfc7) blid2_tripm_pane

0xc616,	// (0x00074083) blid2_search_pane_g1_ParamLimits

0xc616,	// (0x00074083) blid2_search_pane_g1

0xc622,	// (0x0007408f) blid2_search_pane_t1_ParamLimits

0xc622,	// (0x0007408f) blid2_search_pane_t1

0xc634,	// (0x000740a1) aid_size_cell_blid2_gps_ParamLimits

0xc634,	// (0x000740a1) aid_size_cell_blid2_gps

0xc644,	// (0x000740b1) blid2_gps_pane_g1_ParamLimits

0xc644,	// (0x000740b1) blid2_gps_pane_g1

0xc650,	// (0x000740bd) grid_blid2_satellite_pane_ParamLimits

0xc650,	// (0x000740bd) grid_blid2_satellite_pane

0xc65e,	// (0x000740cb) blid2_navig_pane_g1_ParamLimits

0xc65e,	// (0x000740cb) blid2_navig_pane_g1

0xc66a,	// (0x000740d7) blid2_navig_pane_t1_ParamLimits

0xc66a,	// (0x000740d7) blid2_navig_pane_t1

0xc67c,	// (0x000740e9) blid2_navig_pane_t2_ParamLimits

0xc67c,	// (0x000740e9) blid2_navig_pane_t2

0x0001,

0xfa51,	// (0x000774be) blid2_navig_pane_t_ParamLimits

0xfa51,	// (0x000774be) blid2_navig_pane_t

0xc68e,	// (0x000740fb) blid2_navig_ring_pane_ParamLimits

0xc68e,	// (0x000740fb) blid2_navig_ring_pane

0xc69e,	// (0x0007410b) blid2_speed_pane_ParamLimits

0xc69e,	// (0x0007410b) blid2_speed_pane

0xc6aa,	// (0x00074117) blid2_tripm_pane_g1_ParamLimits

0xc6aa,	// (0x00074117) blid2_tripm_pane_g1

0xc6ba,	// (0x00074127) blid2_tripm_pane_g2_ParamLimits

0xc6ba,	// (0x00074127) blid2_tripm_pane_g2

0xc6c6,	// (0x00074133) blid2_tripm_pane_g3_ParamLimits

0xc6c6,	// (0x00074133) blid2_tripm_pane_g3

0xc6d2,	// (0x0007413f) blid2_tripm_pane_g4_ParamLimits

0xc6d2,	// (0x0007413f) blid2_tripm_pane_g4

0xc6de,	// (0x0007414b) blid2_tripm_pane_g5_ParamLimits

0xc6de,	// (0x0007414b) blid2_tripm_pane_g5

0x0005,

0xfa56,	// (0x000774c3) blid2_tripm_pane_g_ParamLimits

0xfa56,	// (0x000774c3) blid2_tripm_pane_g

0xc6fa,	// (0x00074167) blid2_tripm_pane_t1_ParamLimits

0xc6fa,	// (0x00074167) blid2_tripm_pane_t1

0xc70c,	// (0x00074179) blid2_tripm_pane_t2_ParamLimits

0xc70c,	// (0x00074179) blid2_tripm_pane_t2

0xc71e,	// (0x0007418b) blid2_tripm_pane_t3_ParamLimits

0xc71e,	// (0x0007418b) blid2_tripm_pane_t3

0x0003,

0xfa63,	// (0x000774d0) blid2_tripm_pane_t_ParamLimits

0xfa63,	// (0x000774d0) blid2_tripm_pane_t

0xc750,	// (0x000741bd) cell_blid2_satellite_pane_ParamLimits

0xc750,	// (0x000741bd) cell_blid2_satellite_pane

0xc76e,	// (0x000741db) cell_blid2_satellite_pane_g1

0x3e18,	// (0x0006b885) cell_blid2_satellite_pane_t1

0x01d7,	// (0x00067c44) blid2_speed_pane_g1

0x3e26,	// (0x0006b893) blid2_speed_pane_t1

0x3e34,	// (0x0006b8a1) blid2_speed_pane_t2

0x0001,

0xfa6c,	// (0x000774d9) blid2_speed_pane_t

0x01d7,	// (0x00067c44) blid2_navig_ring_pane_g1

0xc777,	// (0x000741e4) blid2_navig_ring_pane_g2

0xc77f,	// (0x000741ec) blid2_navig_ring_pane_g3

0xc787,	// (0x000741f4) blid2_navig_ring_pane_g4

0xc78f,	// (0x000741fc) blid2_navig_ring_pane_g5

0x0004,

0xfa71,	// (0x000774de) blid2_navig_ring_pane_g

0x455a,	// (0x0006bfc7) bg_popup_window_pane_cp011

0x3e42,	// (0x0006b8af) popup_blid2_search_window_g1

0x3e4a,	// (0x0006b8b7) popup_blid2_search_window_t1

0x3e58,	// (0x0006b8c5) popup_blid2_search_window_t2

0x0001,

0xfa7c,	// (0x000774e9) popup_blid2_search_window_t

0x02db,	// (0x00067d48) main_browser_pane_g1

0x50ed,	// (0x0006cb5a) main_browser_pane_ParamLimits

0x48f1,	// (0x0006c35e) bg_button_pane_cp011_ParamLimits

0xb96b,	// (0x000733d8) cell_vitu2_function_pane_g1_ParamLimits

0x0ca9,	// (0x00068716) bg_popup_sub_pane_cp22_ParamLimits

0x6272,	// (0x0006dcdf) input_focus_pane_cp08_ParamLimits

0xc212,	// (0x00073c7f) popup_vitu2_query_button_pane_ParamLimits

0xc212,	// (0x00073c7f) popup_vitu2_query_button_pane

0x628e,	// (0x0006dcfb) popup_vitu2_query_input_button_pane

0x3a1b,	// (0x0006b488) popup_vitu2_query_window_g1_ParamLimits

0xc221,	// (0x00073c8e) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x000773f1) popup_vitu2_query_window_g_ParamLimits

0x455a,	// (0x0006bfc7) bg_button_pane_cp026

0xc797,	// (0x00074204) popup_vitu2_query_input_button_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp025

0x3e66,	// (0x0006b8d3) popup_vitu2_query_button_pane_t1

0xa12f,	// (0x00071b9c) main_mp3_pane_t6

0xa13f,	// (0x00071bac) popup_slider_window_cp01

0xb5e0,	// (0x0007304d) cam4_battery_pane

0xb6be,	// (0x0007312b) cam4_battery_pane_cp02

0xc519,	// (0x00073f86) cam4_battery_pane_cp01

0xc519,	// (0x00073f86) cam4_battery_pane_cp03

0x01d7,	// (0x00067c44) cam4_battery_pane_g1

0x220b,	// (0x00069c78) cam4_battery_pane_g2

0x0001,

0xfa81,	// (0x000774ee) cam4_battery_pane_g

0x237d,	// (0x00069dea) popup_blid_sat_info2_window_t11

0x9089,	// (0x00070af6) aid_size_touch_mv_arrow_left_ParamLimits

0x90b4,	// (0x00070b21) aid_size_touch_mv_arrow_right_ParamLimits

0x0b0a,	// (0x00068577) navi_pane_g1_ParamLimits

0x90f3,	// (0x00070b60) navi_pane_g2_ParamLimits

0x9121,	// (0x00070b8e) navi_pane_g3_ParamLimits

0xf35f,	// (0x00076dcc) navi_pane_g_ParamLimits

0x917b,	// (0x00070be8) navi_pane_mv_t1_ParamLimits

0xabca,	// (0x00072637) grid_imed_effect_pane_ParamLimits

0x7c69,	// (0x0006f6d6) aid_placing_vt_slider_lsc

0x0226,	// (0x00067c93) aid_placing_vt_slider_prt

0x48f1,	// (0x0006c35e) bg_tb_trans_pane_cp01_ParamLimits

0x25e5,	// (0x0006a052) popup_image_details_window_g1_ParamLimits

0x25f8,	// (0x0006a065) popup_image_details_window_g2_ParamLimits

0x260d,	// (0x0006a07a) popup_image_details_window_g3_ParamLimits

0x260d,	// (0x0006a07a) popup_image_details_window_g3

0xf68b,	// (0x000770f8) popup_image_details_window_g_ParamLimits

0x2621,	// (0x0006a08e) popup_image_details_window_t1_ParamLimits

0x2633,	// (0x0006a0a0) popup_image_details_window_t2_ParamLimits

0x264c,	// (0x0006a0b9) popup_image_details_window_t3_ParamLimits

0x2660,	// (0x0006a0cd) popup_image_details_window_t4_ParamLimits

0x267b,	// (0x0006a0e8) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x000770ff) popup_image_details_window_t_ParamLimits

0xc445,	// (0x00073eb2) cl_header_name_pane_ParamLimits

0xc445,	// (0x00073eb2) cl_header_name_pane

0xc79f,	// (0x0007420c) cl_header_name_pane_t1_ParamLimits

0xc79f,	// (0x0007420c) cl_header_name_pane_t1

0xc7b6,	// (0x00074223) cl_header_name_pane_t2_ParamLimits

0xc7b6,	// (0x00074223) cl_header_name_pane_t2

0xc7e0,	// (0x0007424d) cl_header_name_pane_t3_ParamLimits

0xc7e0,	// (0x0007424d) cl_header_name_pane_t3

0x0002,

0xfa86,	// (0x000774f3) cl_header_name_pane_t_ParamLimits

0xfa86,	// (0x000774f3) cl_header_name_pane_t

0x914c,	// (0x00070bb9) navi_pane_mv_g2_ParamLimits

0x3782,	// (0x0006b1ef) field_vitu2_entry_pane_g1_ParamLimits

0x378e,	// (0x0006b1fb) field_vitu2_entry_pane_g2_ParamLimits

0x0c73,	// (0x000686e0) field_vitu2_entry_pane_g3_ParamLimits

0x0c73,	// (0x000686e0) field_vitu2_entry_pane_g3

0xf88d,	// (0x000772fa) field_vitu2_entry_pane_g_ParamLimits

0xb8f9,	// (0x00073366) cell_vitu2_itu_pane_g1_ParamLimits

0xb911,	// (0x0007337e) cell_vitu2_itu_pane_g2_ParamLimits

0xb911,	// (0x0007337e) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x00077306) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x00077306) cell_vitu2_itu_pane_g

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp05_ParamLimits

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp05

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp03

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp04

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp10_ParamLimits

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp10

0x6441,	// (0x0006deae) bg_vkb2_func_pane_cp08

0xc1fa,	// (0x00073c67) bg_vkb2_func_pane_cp06

0xc3fd,	// (0x00073e6a) bg_vkb2_func_pane_cp07

0x3d10,	// (0x0006b77d) bg_vkb2_func_pane_cp11_ParamLimits

0x3d10,	// (0x0006b77d) bg_vkb2_func_pane_cp11

0x3d25,	// (0x0006b792) bg_vkb2_func_pane_cp12_ParamLimits

0x3d25,	// (0x0006b792) bg_vkb2_func_pane_cp12

0x455a,	// (0x0006bfc7) bg_vkb2_func_pane_cp09

0x37ac,	// (0x0006b219) bg_vkb2_func_pane_g1

0x03ec,	// (0x00067e59) bg_vkb2_func_pane_g2

0x37b4,	// (0x0006b221) bg_vkb2_func_pane_g3

0x37bc,	// (0x0006b229) bg_vkb2_func_pane_g4

0x39e0,	// (0x0006b44d) bg_vkb2_func_pane_g5

0x37d4,	// (0x0006b241) bg_vkb2_func_pane_g6

0x37dc,	// (0x0006b249) bg_vkb2_func_pane_g7

0x37cc,	// (0x0006b239) bg_vkb2_func_pane_g8

0x03cc,	// (0x00067e39) bg_vkb2_func_pane_g9

0x0008,

0xfa8d,	// (0x000774fa) bg_vkb2_func_pane_g

0xc6ec,	// (0x00074159) blid2_tripm_pane_g6_ParamLimits

0xc6ec,	// (0x00074159) blid2_tripm_pane_g6

0x36c0,	// (0x0006b12d) mp4_progress_pane_g1

0xc744,	// (0x000741b1) blid2_tripm_values_pane_ParamLimits

0xc744,	// (0x000741b1) blid2_tripm_values_pane

0xc805,	// (0x00074272) blid2_tripm_values_pane_t1

0xc813,	// (0x00074280) blid2_tripm_values_pane_t2

0xc821,	// (0x0007428e) blid2_tripm_values_pane_t3

0xc82f,	// (0x0007429c) blid2_tripm_values_pane_t4

0xc83d,	// (0x000742aa) blid2_tripm_values_pane_t5

0xc84b,	// (0x000742b8) blid2_tripm_values_pane_t6

0xc859,	// (0x000742c6) blid2_tripm_values_pane_t7

0xc867,	// (0x000742d4) blid2_tripm_values_pane_t8

0xc875,	// (0x000742e2) blid2_tripm_values_pane_t9

0x0008,

0xfaa0,	// (0x0007750d) blid2_tripm_values_pane_t

0x7ca7,	// (0x0006f714) call_video_pane_t1_ParamLimits

0x7cc4,	// (0x0006f731) call_video_pane_t2_ParamLimits

0xf208,	// (0x00076c75) call_video_pane_t_ParamLimits

0x6069,	// (0x0006dad6) msg_header_pane_g1_ParamLimits

0x0d60,	// (0x000687cd) msg_header_pane_g2_ParamLimits

0x0d60,	// (0x000687cd) msg_header_pane_g2

0x0001,

0xf402,	// (0x00076e6f) msg_header_pane_g_ParamLimits

0xf402,	// (0x00076e6f) msg_header_pane_g

0x50ed,	// (0x0006cb5a) main_clock2_pane_ParamLimits

0xa943,	// (0x000723b0) grid_clock2_toolbar_pane_ParamLimits

0xa943,	// (0x000723b0) grid_clock2_toolbar_pane

0xa943,	// (0x000723b0) listscroll_clock2_pane_ParamLimits

0xa943,	// (0x000723b0) listscroll_clock2_pane

0xa9f2,	// (0x0007245f) main_clock2_pane_t3_ParamLimits

0xa9f2,	// (0x0007245f) main_clock2_pane_t3

0xaa04,	// (0x00072471) main_clock2_pane_t4_ParamLimits

0xaa04,	// (0x00072471) main_clock2_pane_t4

0x3e74,	// (0x0006b8e1) cell_clock2_toolbar_pane

0x3e7c,	// (0x0006b8e9) cell_clock2_toolbar_pane_cp01

0x3e7c,	// (0x0006b8e9) cell_clock2_toolbar_pane_cp02

0x3e84,	// (0x0006b8f1) cell_clock2_toolbar_pane_cp03

0x3e8c,	// (0x0006b8f9) list_clock2_pane

0x0a70,	// (0x000684dd) scroll_pane_cp10

0x3e94,	// (0x0006b901) list_single_clock2_pane_ParamLimits

0x3e94,	// (0x0006b901) list_single_clock2_pane

0x0182,	// (0x00067bef) list_highlight_pane_cp08

0x3ea1,	// (0x0006b90e) list_single_clock2_pane_t1

0x3eaf,	// (0x0006b91c) list_single_clock2_pane_t2

0x0001,

0xfab3,	// (0x00077520) list_single_clock2_pane_t

0x455a,	// (0x0006bfc7) bg_button_pane_cp10

0x3ebd,	// (0x0006b92a) cell_clock2_toolbar_pane_g1

0x9449,	// (0x00070eb6) aid_main_viewer_pane_g1_ParamLimits

0x9449,	// (0x00070eb6) aid_main_viewer_pane_g1

0x9455,	// (0x00070ec2) aid_main_viewer_pane_g2_ParamLimits

0x9455,	// (0x00070ec2) aid_main_viewer_pane_g2

0x9461,	// (0x00070ece) aid_main_viewer_pane_g3_ParamLimits

0x9461,	// (0x00070ece) aid_main_viewer_pane_g3

0x9472,	// (0x00070edf) aid_main_viewer_pane_g4_ParamLimits

0x9472,	// (0x00070edf) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00076e80) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00076e80) aid_main_viewer_pane_g

0x9c43,	// (0x000716b0) main_calc_pane_ParamLimits

0x9c50,	// (0x000716bd) main_dialer2_pane_ParamLimits

0x455a,	// (0x0006bfc7) main_cam6_pane

0x455a,	// (0x0006bfc7) main_vid6_pane

0xa94f,	// (0x000723bc) listscroll_gen_pane_cp06_ParamLimits

0xa94f,	// (0x000723bc) listscroll_gen_pane_cp06

0xaa16,	// (0x00072483) main_clock2_pane_t5_ParamLimits

0xaa16,	// (0x00072483) main_clock2_pane_t5

0xaa63,	// (0x000724d0) aid_call2_pane_cp10_ParamLimits

0xaa75,	// (0x000724e2) aid_call_pane_cp10_ParamLimits

0x0adf,	// (0x0006854c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0adf,	// (0x0006854c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xaa87,	// (0x000724f4) popup_clock_analogue_window_cp10_g3_ParamLimits

0xaa87,	// (0x000724f4) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0adf,	// (0x0006854c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x000771b4) popup_clock_analogue_window_cp10_g_ParamLimits

0xaa9d,	// (0x0007250a) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb18e,	// (0x00072bfb) cell_dialer2_keypad_pane_g2_ParamLimits

0xb18e,	// (0x00072bfb) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x00077299) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x00077299) cell_dialer2_keypad_pane_g

0xb1aa,	// (0x00072c17) cell_dialer2_keypad_pane_t1

0xbc4d,	// (0x000736ba) main_cset_text2_pane_ParamLimits

0xbc4d,	// (0x000736ba) main_cset_text2_pane

0x3c07,	// (0x0006b674) area_vitu2_query_pane_g1_ParamLimits

0x635b,	// (0x0006ddc8) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x00077444) area_vitu2_query_pane_g_ParamLimits

0x640c,	// (0x0006de79) area_vitu2_query_pane_t7_ParamLimits

0x640c,	// (0x0006de79) area_vitu2_query_pane_t7

0xc1fa,	// (0x00073c67) bg_button_pane_cp018_ParamLimits

0xc3fd,	// (0x00073e6a) bg_button_pane_cp021_ParamLimits

0x6430,	// (0x0006de9d) bg_button_pane_cp022_ParamLimits

0x6441,	// (0x0006deae) bg_vkb2_func_pane_cp08_ParamLimits

0xc1fa,	// (0x00073c67) bg_vkb2_func_pane_cp06_ParamLimits

0xc3fd,	// (0x00073e6a) bg_vkb2_func_pane_cp07_ParamLimits

0x6453,	// (0x0006dec0) input_focus_pane_cp09_ParamLimits

0xc883,	// (0x000742f0) cam6_autofocus_pane_ParamLimits

0xc883,	// (0x000742f0) cam6_autofocus_pane

0xc8a5,	// (0x00074312) cam6_image_uncrop_pane_ParamLimits

0xc8a5,	// (0x00074312) cam6_image_uncrop_pane

0xc8d2,	// (0x0007433f) cam6_indi_pane_ParamLimits

0xc8d2,	// (0x0007433f) cam6_indi_pane

0xc8ec,	// (0x00074359) cam6_mode_pane_ParamLimits

0xc8ec,	// (0x00074359) cam6_mode_pane

0xc900,	// (0x0007436d) cam6_timer_pane_ParamLimits

0xc900,	// (0x0007436d) cam6_timer_pane

0xc90c,	// (0x00074379) cam6_zoom_pane_ParamLimits

0xc90c,	// (0x00074379) cam6_zoom_pane

0xc928,	// (0x00074395) cam6_mode_pane_g1_ParamLimits

0xc928,	// (0x00074395) cam6_mode_pane_g1

0xc934,	// (0x000743a1) cam6_mode_pane_g2_ParamLimits

0xc934,	// (0x000743a1) cam6_mode_pane_g2

0xc940,	// (0x000743ad) cam6_mode_pane_g3_ParamLimits

0xc940,	// (0x000743ad) cam6_mode_pane_g3

0xc94c,	// (0x000743b9) cam6_mode_pane_g4_ParamLimits

0xc94c,	// (0x000743b9) cam6_mode_pane_g4

0x0003,

0xfab8,	// (0x00077525) cam6_mode_pane_g_ParamLimits

0xfab8,	// (0x00077525) cam6_mode_pane_g

0x3065,	// (0x0006aad2) bg_tb_trans_pane_cp08_ParamLimits

0x3065,	// (0x0006aad2) bg_tb_trans_pane_cp08

0x3ec5,	// (0x0006b932) cam6_battery_pane_ParamLimits

0x3ec5,	// (0x0006b932) cam6_battery_pane

0x3edb,	// (0x0006b948) cam6_indi_pane_g1_ParamLimits

0x3edb,	// (0x0006b948) cam6_indi_pane_g1

0x3eed,	// (0x0006b95a) cam6_indi_pane_g2_ParamLimits

0x3eed,	// (0x0006b95a) cam6_indi_pane_g2

0x3eff,	// (0x0006b96c) cam6_indi_pane_g3_ParamLimits

0x3eff,	// (0x0006b96c) cam6_indi_pane_g3

0x0002,

0xfac1,	// (0x0007752e) cam6_indi_pane_g_ParamLimits

0xfac1,	// (0x0007752e) cam6_indi_pane_g

0x3f11,	// (0x0006b97e) cam6_indi_pane_t1_ParamLimits

0x3f11,	// (0x0006b97e) cam6_indi_pane_t1

0xb73a,	// (0x000731a7) cam6_autofocus_pane_g1

0xb742,	// (0x000731af) cam6_autofocus_pane_g2

0xb74a,	// (0x000731b7) cam6_autofocus_pane_g3

0xb752,	// (0x000731bf) cam6_autofocus_pane_g4

0x0003,

0xfac8,	// (0x00077535) cam6_autofocus_pane_g

0x3f37,	// (0x0006b9a4) cam6_timer_pane_g1

0x3f3f,	// (0x0006b9ac) cam6_timer_pane_t1

0x3f4d,	// (0x0006b9ba) cam6_zoom_cont_pane

0x3f55,	// (0x0006b9c2) cam6_zoom_pane_g1

0x3f5d,	// (0x0006b9ca) cam6_zoom_pane_g2

0xc958,	// (0x000743c5) cam6_zoom_pane_g3

0x0002,

0xfad1,	// (0x0007753e) cam6_zoom_pane_g

0x01d7,	// (0x00067c44) cam6_battery_pane_g1

0x01d7,	// (0x00067c44) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00076e30) cam6_battery_pane_g

0x3f65,	// (0x0006b9d2) cam6_zoom_cont_pane_g1

0x3f6e,	// (0x0006b9db) cam6_zoom_cont_pane_g2

0x3f77,	// (0x0006b9e4) cam6_zoom_cont_pane_g3

0x0002,

0xfad8,	// (0x00077545) cam6_zoom_cont_pane_g

0xc975,	// (0x000743e2) cam6_mode_pane_cp_ParamLimits

0xc975,	// (0x000743e2) cam6_mode_pane_cp

0xc90c,	// (0x00074379) cam6_zoom_pane_cp_ParamLimits

0xc90c,	// (0x00074379) cam6_zoom_pane_cp

0xc989,	// (0x000743f6) vid6_image_uncrop_cif_pane_ParamLimits

0xc989,	// (0x000743f6) vid6_image_uncrop_cif_pane

0xc9b5,	// (0x00074422) vid6_image_uncrop_nhd_pane_ParamLimits

0xc9b5,	// (0x00074422) vid6_image_uncrop_nhd_pane

0xc8a5,	// (0x00074312) vid6_image_uncrop_vga_pane_ParamLimits

0xc8a5,	// (0x00074312) vid6_image_uncrop_vga_pane

0xc9d4,	// (0x00074441) vid6_image_uncrop_wvga_pane_ParamLimits

0xc9d4,	// (0x00074441) vid6_image_uncrop_wvga_pane

0xc9f3,	// (0x00074460) vid6_indi_pane_ParamLimits

0xc9f3,	// (0x00074460) vid6_indi_pane

0x3065,	// (0x0006aad2) bg_tb_trans_pane_cp09_ParamLimits

0x3065,	// (0x0006aad2) bg_tb_trans_pane_cp09

0x3f8f,	// (0x0006b9fc) cam6_battery_pane_cp_ParamLimits

0x3f8f,	// (0x0006b9fc) cam6_battery_pane_cp

0x3f9b,	// (0x0006ba08) vid6_indi_pane_g1_ParamLimits

0x3f9b,	// (0x0006ba08) vid6_indi_pane_g1

0x3fad,	// (0x0006ba1a) vid6_indi_pane_g2_ParamLimits

0x3fad,	// (0x0006ba1a) vid6_indi_pane_g2

0x3fbf,	// (0x0006ba2c) vid6_indi_pane_g3_ParamLimits

0x3fbf,	// (0x0006ba2c) vid6_indi_pane_g3

0x3fd6,	// (0x0006ba43) vid6_indi_pane_g4_ParamLimits

0x3fd6,	// (0x0006ba43) vid6_indi_pane_g4

0x3fed,	// (0x0006ba5a) vid6_indi_pane_g5_ParamLimits

0x3fed,	// (0x0006ba5a) vid6_indi_pane_g5

0x0004,

0xfadf,	// (0x0007754c) vid6_indi_pane_g_ParamLimits

0xfadf,	// (0x0007754c) vid6_indi_pane_g

0x4007,	// (0x0006ba74) vid6_indi_pane_t1_ParamLimits

0x4007,	// (0x0006ba74) vid6_indi_pane_t1

0x401d,	// (0x0006ba8a) vid6_indi_pane_t2_ParamLimits

0x401d,	// (0x0006ba8a) vid6_indi_pane_t2

0x4045,	// (0x0006bab2) vid6_indi_pane_t3_ParamLimits

0x4045,	// (0x0006bab2) vid6_indi_pane_t3

0x406d,	// (0x0006bada) vid6_indi_pane_t4_ParamLimits

0x406d,	// (0x0006bada) vid6_indi_pane_t4

0x0003,

0xfaea,	// (0x00077557) vid6_indi_pane_t_ParamLimits

0xfaea,	// (0x00077557) vid6_indi_pane_t

0x4091,	// (0x0006bafe) wait_bar_pane_cp08

0xca18,	// (0x00074485) main_cset_text2_pane_t1_ParamLimits

0xca18,	// (0x00074485) main_cset_text2_pane_t1

0xc960,	// (0x000743cd) listscroll_gen_pane_cp06_t1_ParamLimits

0xc960,	// (0x000743cd) listscroll_gen_pane_cp06_t1

0x455a,	// (0x0006bfc7) main_cam6_set_pane

0x507b,	// (0x0006cae8) bg_tb_trans_pane_cp06_ParamLimits

0xb5e8,	// (0x00073055) cam4_indicators_pane_g1_ParamLimits

0xb5f9,	// (0x00073066) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x000772d6) cam4_indicators_pane_g_ParamLimits

0xb611,	// (0x0007307e) cam4_indicators_pane_t1_ParamLimits

0x48f1,	// (0x0006c35e) bg_tb_trans_pane_cp07_ParamLimits

0xb6c8,	// (0x00073135) vid4_indicators_pane_g1_ParamLimits

0xb6de,	// (0x0007314b) vid4_indicators_pane_g2_ParamLimits

0xb6f2,	// (0x0007315f) vid4_indicators_pane_g3_ParamLimits

0xb705,	// (0x00073172) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x000772e8) vid4_indicators_pane_g_ParamLimits

0xb723,	// (0x00073190) vid4_indicators_pane_t1_ParamLimits

0xc521,	// (0x00073f8e) vid4_progress_pane_g1_ParamLimits

0xc531,	// (0x00073f9e) vid4_progress_pane_g2_ParamLimits

0xc541,	// (0x00073fae) vid4_progress_pane_g3_ParamLimits

0xc553,	// (0x00073fc0) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x0007748f) vid4_progress_pane_g_ParamLimits

0xc571,	// (0x00073fde) vid4_progress_pane_t1_ParamLimits

0xc58b,	// (0x00073ff8) vid4_progress_pane_t2_ParamLimits

0xc5a1,	// (0x0007400e) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x0007749a) vid4_progress_pane_t_ParamLimits

0xc5b6,	// (0x00074023) wait_bar_pane_cp07_ParamLimits

0xca3f,	// (0x000744ac) main_cam6_set_pane_g2_ParamLimits

0xca3f,	// (0x000744ac) main_cam6_set_pane_g2

0xca4b,	// (0x000744b8) main_cset6_listscroll_pane_ParamLimits

0xca4b,	// (0x000744b8) main_cset6_listscroll_pane

0xca78,	// (0x000744e5) main_cset6_slider_pane_ParamLimits

0xca78,	// (0x000744e5) main_cset6_slider_pane

0xca84,	// (0x000744f1) main_cset6_text2_pane_ParamLimits

0xca84,	// (0x000744f1) main_cset6_text2_pane

0x40a0,	// (0x0006bb0d) main_cset6_text_pane

0x40a8,	// (0x0006bb15) main_cset_list_pane_copy1_ParamLimits

0x40a8,	// (0x0006bb15) main_cset_list_pane_copy1

0x40b8,	// (0x0006bb25) scroll_pane_cp028_copy1

0xca97,	// (0x00074504) cset_list_set_pane_copy1

0xcaa7,	// (0x00074514) aid_position_infowindow_above_copy1

0xcaaf,	// (0x0007451c) aid_position_infowindow_below_copy1

0xcab7,	// (0x00074524) cset_list_set_pane_g1_copy1

0x6489,	// (0x0006def6) cset_list_set_pane_g3_copy1_ParamLimits

0x6489,	// (0x0006def6) cset_list_set_pane_g3_copy1

0x6498,	// (0x0006df05) cset_list_set_pane_t1_copy1_ParamLimits

0x6498,	// (0x0006df05) cset_list_set_pane_t1_copy1

0x48f1,	// (0x0006c35e) list_highlight_pane_cp021_copy1_ParamLimits

0x48f1,	// (0x0006c35e) list_highlight_pane_cp021_copy1

0x40c1,	// (0x0006bb2e) cset6_slider_pane_ParamLimits

0x40c1,	// (0x0006bb2e) cset6_slider_pane

0x40ed,	// (0x0006bb5a) main_cset6_slider_pane_g1_ParamLimits

0x40ed,	// (0x0006bb5a) main_cset6_slider_pane_g1

0xcabf,	// (0x0007452c) main_cset6_slider_pane_g2_ParamLimits

0xcabf,	// (0x0007452c) main_cset6_slider_pane_g2

0x4115,	// (0x0006bb82) main_cset6_slider_pane_g3_ParamLimits

0x4115,	// (0x0006bb82) main_cset6_slider_pane_g3

0xcae7,	// (0x00074554) main_cset6_slider_pane_g4_ParamLimits

0xcae7,	// (0x00074554) main_cset6_slider_pane_g4

0xcaf3,	// (0x00074560) main_cset6_slider_pane_g5_ParamLimits

0xcaf3,	// (0x00074560) main_cset6_slider_pane_g5

0x38df,	// (0x0006b34c) main_cset6_slider_pane_g7_ParamLimits

0x38df,	// (0x0006b34c) main_cset6_slider_pane_g7

0x38eb,	// (0x0006b358) main_cset6_slider_pane_g8_ParamLimits

0x38eb,	// (0x0006b358) main_cset6_slider_pane_g8

0xcaff,	// (0x0007456c) main_cset6_slider_pane_g9_ParamLimits

0xcaff,	// (0x0007456c) main_cset6_slider_pane_g9

0xcb0b,	// (0x00074578) main_cset6_slider_pane_g10_ParamLimits

0xcb0b,	// (0x00074578) main_cset6_slider_pane_g10

0xcb17,	// (0x00074584) main_cset6_slider_pane_g11_ParamLimits

0xcb17,	// (0x00074584) main_cset6_slider_pane_g11

0xcb23,	// (0x00074590) main_cset6_slider_pane_g12_ParamLimits

0xcb23,	// (0x00074590) main_cset6_slider_pane_g12

0xcb2f,	// (0x0007459c) main_cset6_slider_pane_g13_ParamLimits

0xcb2f,	// (0x0007459c) main_cset6_slider_pane_g13

0xcb3b,	// (0x000745a8) main_cset6_slider_pane_g14_ParamLimits

0xcb3b,	// (0x000745a8) main_cset6_slider_pane_g14

0xcb47,	// (0x000745b4) main_cset6_slider_pane_g15_ParamLimits

0xcb47,	// (0x000745b4) main_cset6_slider_pane_g15

0xcb5f,	// (0x000745cc) main_cset6_slider_pane_g16_ParamLimits

0xcb5f,	// (0x000745cc) main_cset6_slider_pane_g16

0xcb6b,	// (0x000745d8) main_cset6_slider_pane_g17_ParamLimits

0xcb6b,	// (0x000745d8) main_cset6_slider_pane_g17

0x0011,

0xfaf3,	// (0x00077560) main_cset6_slider_pane_g_ParamLimits

0xfaf3,	// (0x00077560) main_cset6_slider_pane_g

0x4121,	// (0x0006bb8e) main_cset6_slider_pane_t1_ParamLimits

0x4121,	// (0x0006bb8e) main_cset6_slider_pane_t1

0xcb8f,	// (0x000745fc) main_cset6_slider_pane_t2_ParamLimits

0xcb8f,	// (0x000745fc) main_cset6_slider_pane_t2

0xcbba,	// (0x00074627) main_cset6_slider_pane_t3_ParamLimits

0xcbba,	// (0x00074627) main_cset6_slider_pane_t3

0xcbe5,	// (0x00074652) main_cset6_slider_pane_t4_ParamLimits

0xcbe5,	// (0x00074652) main_cset6_slider_pane_t4

0xcc10,	// (0x0007467d) main_cset6_slider_pane_t5_ParamLimits

0xcc10,	// (0x0007467d) main_cset6_slider_pane_t5

0x4162,	// (0x0006bbcf) main_cset6_slider_pane_t7_ParamLimits

0x4162,	// (0x0006bbcf) main_cset6_slider_pane_t7

0xcc3b,	// (0x000746a8) main_cset6_slider_pane_t8_ParamLimits

0xcc3b,	// (0x000746a8) main_cset6_slider_pane_t8

0xcc5f,	// (0x000746cc) main_cset6_slider_pane_t9_ParamLimits

0xcc5f,	// (0x000746cc) main_cset6_slider_pane_t9

0xcc83,	// (0x000746f0) main_cset6_slider_pane_t10_ParamLimits

0xcc83,	// (0x000746f0) main_cset6_slider_pane_t10

0xcca7,	// (0x00074714) main_cset6_slider_pane_t11_ParamLimits

0xcca7,	// (0x00074714) main_cset6_slider_pane_t11

0x4198,	// (0x0006bc05) main_cset6_slider_pane_t14_ParamLimits

0x4198,	// (0x0006bc05) main_cset6_slider_pane_t14

0x41d1,	// (0x0006bc3e) main_cset6_slider_pane_t15_ParamLimits

0x41d1,	// (0x0006bc3e) main_cset6_slider_pane_t15

0x000b,

0xfb18,	// (0x00077585) main_cset6_slider_pane_t_ParamLimits

0xfb18,	// (0x00077585) main_cset6_slider_pane_t

0x420a,	// (0x0006bc77) cset_slider_pane_g1_copy1

0x4213,	// (0x0006bc80) cset_slider_pane_g2_copy1

0x421c,	// (0x0006bc89) cset_slider_pane_g3_copy1

0x455a,	// (0x0006bfc7) bg_popup_sub_pane_cp011_copy1

0x422e,	// (0x0006bc9b) main_cset_text_pane_g1_copy1

0x3a2f,	// (0x0006b49c) main_cset_text_pane_t1_copy1

0x3a3d,	// (0x0006b4aa) main_cset_text_pane_t2_copy1

0x3a4b,	// (0x0006b4b8) main_cset_text_pane_t3_copy1

0x3a59,	// (0x0006b4c6) main_cset_text_pane_t4_copy1

0x3a67,	// (0x0006b4d4) main_cset_text_pane_t5_copy1

0x4236,	// (0x0006bca3) main_cset_text_pane_t6_copy1

0x4244,	// (0x0006bcb1) main_cset_text_pane_t7_copy1

0xcccb,	// (0x00074738) main_cset_text2_pane_t1_copy1

0x48f1,	// (0x0006c35e) main_ncimui_pane

0x9ca9,	// (0x00071716) popup_query_ncimui_window_ParamLimits

0x9ca9,	// (0x00071716) popup_query_ncimui_window

0xa288,	// (0x00071cf5) field_cale_ev2_pane_g4_ParamLimits

0xa288,	// (0x00071cf5) field_cale_ev2_pane_g4

0xae66,	// (0x000728d3) cell_video_dialer_keypad_pane_g2_ParamLimits

0xae66,	// (0x000728d3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x00077270) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x00077270) cell_video_dialer_keypad_pane_g

0xae7e,	// (0x000728eb) cell_video_dialer_keypad_pane_t1

0x455a,	// (0x0006bfc7) bg_popup_window_pane_cp012

0x1ebf,	// (0x0006992c) heading_pane_cp06

0x4270,	// (0x0006bcdd) ncim_query_content_pane

0x455a,	// (0x0006bfc7) bg_popup_heading_pane_cp01

0x4278,	// (0x0006bce5) ncim_heading_pane_t1

0x4286,	// (0x0006bcf3) ncim_indicator_popup_pane

0x4298,	// (0x0006bd05) ncim_query_button_pane

0x42ae,	// (0x0006bd1b) ncim_query_content_pane_t1

0x42c0,	// (0x0006bd2d) ncim_query_content_pane_t2

0x0005,

0xfb5c,	// (0x000775c9) ncim_query_content_pane_t

0x42fa,	// (0x0006bd67) ncim_query_list_pane

0x430c,	// (0x0006bd79) ncim_query_popup_pane

0x4286,	// (0x0006bcf3) ncim_indicator_popup_pane_ParamLimits

0xce27,	// (0x00074894) ncim_query_content_pane_g1_ParamLimits

0xce27,	// (0x00074894) ncim_query_content_pane_g1

0x42ae,	// (0x0006bd1b) ncim_query_content_pane_t1_ParamLimits

0x42c0,	// (0x0006bd2d) ncim_query_content_pane_t2_ParamLimits

0xce33,	// (0x000748a0) ncim_query_content_pane_t3_ParamLimits

0xce33,	// (0x000748a0) ncim_query_content_pane_t3

0xce50,	// (0x000748bd) ncim_query_content_pane_t4_ParamLimits

0xce50,	// (0x000748bd) ncim_query_content_pane_t4

0xce6d,	// (0x000748da) ncim_query_content_pane_t5_ParamLimits

0xce6d,	// (0x000748da) ncim_query_content_pane_t5

0x42d2,	// (0x0006bd3f) ncim_query_content_pane_t6_ParamLimits

0x42d2,	// (0x0006bd3f) ncim_query_content_pane_t6

0xfb5c,	// (0x000775c9) ncim_query_content_pane_t_ParamLimits

0x42fa,	// (0x0006bd67) ncim_query_list_pane_ParamLimits

0x430c,	// (0x0006bd79) ncim_query_popup_pane_ParamLimits

0x4320,	// (0x0006bd8d) wait_bar_pane_cp04

0x455a,	// (0x0006bfc7) input_focus_pane_cp011

0x4328,	// (0x0006bd95) ncim_query_popup_pane_t1

0x4336,	// (0x0006bda3) ncim_list_query_list_pane_ParamLimits

0x4336,	// (0x0006bda3) ncim_list_query_list_pane

0x455a,	// (0x0006bfc7) bg_button_pane_cp027

0x4349,	// (0x0006bdb6) ncim_query_button_pane_g1

0x455a,	// (0x0006bfc7) list_highlight_pane_cp012

0x4353,	// (0x0006bdc0) ncim_list_query_list_pane_g1

0x435b,	// (0x0006bdc8) ncim_list_query_list_pane_t1

0xb605,	// (0x00073072) cam4_indicators_pane_g3_ParamLimits

0xb605,	// (0x00073072) cam4_indicators_pane_g3

0xb711,	// (0x0007317e) vid4_indicators_pane_g5_ParamLimits

0xb711,	// (0x0007317e) vid4_indicators_pane_g5

0xc562,	// (0x00073fcf) vid4_progress_pane_g5_ParamLimits

0xc562,	// (0x00073fcf) vid4_progress_pane_g5

0xccfd,	// (0x0007476a) main_ncimui_pane_g1

0xcd69,	// (0x000747d6) ncimui_group_query_pane_ParamLimits

0xcd69,	// (0x000747d6) ncimui_group_query_pane

0xcdc3,	// (0x00074830) ncimui_list_pane_ParamLimits

0xcdc3,	// (0x00074830) ncimui_list_pane

0xcdea,	// (0x00074857) ncimui_text_pane_ParamLimits

0xcdea,	// (0x00074857) ncimui_text_pane

0xce8a,	// (0x000748f7) ncimui_text_pane_t1_ParamLimits

0xce8a,	// (0x000748f7) ncimui_text_pane_t1

0x4369,	// (0x0006bdd6) ncimui_list_single_graphic_pane_ParamLimits

0x4369,	// (0x0006bdd6) ncimui_list_single_graphic_pane

0xcea9,	// (0x00074916) ncimui_query_pane_ParamLimits

0xcea9,	// (0x00074916) ncimui_query_pane

0x455a,	// (0x0006bfc7) list_highlight_pane_cp013

0x4379,	// (0x0006bde6) ncim_list_query_list_pane_t1_copy1

0x4353,	// (0x0006bdc0) ncim_list_single_graphic_pane_g1

0xcebc,	// (0x00074929) ncim_query_button_pane_cp01

0xcec8,	// (0x00074935) ncim_query_entry_pane_ParamLimits

0xcec8,	// (0x00074935) ncim_query_entry_pane

0xcedb,	// (0x00074948) ncimui_query_pane_g1

0xcee7,	// (0x00074954) ncimui_query_pane_t1_ParamLimits

0xcee7,	// (0x00074954) ncimui_query_pane_t1

0x48f1,	// (0x0006c35e) input_focus_pane_cp012

0x4387,	// (0x0006bdf4) ncim_query_entry_pane_t1

0x50ed,	// (0x0006cb5a) main_im_pane_ParamLimits

0x48f1,	// (0x0006c35e) main_mobtv_pane_ParamLimits

0x48f1,	// (0x0006c35e) main_mobtv_pane

0xcb77,	// (0x000745e4) main_cset6_slider_pane_g18_ParamLimits

0xcb77,	// (0x000745e4) main_cset6_slider_pane_g18

0xcb83,	// (0x000745f0) main_cset6_slider_pane_g19_ParamLimits

0xcb83,	// (0x000745f0) main_cset6_slider_pane_g19

0x0c73,	// (0x000686e0) bg_main_mobtv_pane_ParamLimits

0x0c73,	// (0x000686e0) bg_main_mobtv_pane

0xcf00,	// (0x0007496d) main_mobtv_info_pane

0xcf0b,	// (0x00074978) main_mobtv_loading_pane_ParamLimits

0xcf0b,	// (0x00074978) main_mobtv_loading_pane

0x4399,	// (0x0006be06) main_mobtv_pg_channel_list_pane

0x43a3,	// (0x0006be10) main_mobtv_pg_hdr_pane

0xcf18,	// (0x00074985) main_mobtv_programe_curr_pane_ParamLimits

0xcf18,	// (0x00074985) main_mobtv_programe_curr_pane

0xcf25,	// (0x00074992) main_mobtv_programe_next_pane_ParamLimits

0xcf25,	// (0x00074992) main_mobtv_programe_next_pane

0x43ac,	// (0x0006be19) popup_mobtv_noti_window

0x01d7,	// (0x00067c44) main_tv_pg_hdr_pane_g1

0x43b6,	// (0x0006be23) main_tv_pg_hdr_pane_g2

0x43be,	// (0x0006be2b) main_tv_pg_hdr_pane_g3

0x43c6,	// (0x0006be33) main_tv_pg_hdr_pane_g4

0x43ce,	// (0x0006be3b) main_tv_pg_hdr_pane_g5

0x43d8,	// (0x0006be45) main_tv_pg_hdr_pane_g6

0x43e2,	// (0x0006be4f) main_tv_pg_hdr_pane_g7

0x43ec,	// (0x0006be59) main_tv_pg_hdr_pane_g8

0x43f6,	// (0x0006be63) main_tv_pg_hdr_pane_g9

0x4400,	// (0x0006be6d) main_tv_pg_hdr_pane_g10

0x440a,	// (0x0006be77) main_tv_pg_hdr_pane_g11

0x000a,

0xfb69,	// (0x000775d6) main_tv_pg_hdr_pane_g

0x4414,	// (0x0006be81) main_tv_pg_hdr_pane_t1

0x4422,	// (0x0006be8f) main_tv_pg_hdr_pane_t2

0x4430,	// (0x0006be9d) main_tv_pg_hdr_pane_t3

0x4440,	// (0x0006bead) main_tv_pg_hdr_pane_t4

0x4450,	// (0x0006bebd) main_tv_pg_hdr_pane_t5

0x0004,

0xfb80,	// (0x000775ed) main_tv_pg_hdr_pane_t

0x4460,	// (0x0006becd) single_mobtv_pg_channel_pane_ParamLimits

0x4460,	// (0x0006becd) single_mobtv_pg_channel_pane

0x4472,	// (0x0006bedf) single_mobtv_pg_channel_table_pane

0x447b,	// (0x0006bee8) single_mobtv_pg_channel_thumb_pane

0x4484,	// (0x0006bef1) single_tv_pg_channel_pane_g1

0x448d,	// (0x0006befa) single_tv_pg_channel_pane_g2

0x0001,

0xfb8b,	// (0x000775f8) single_tv_pg_channel_pane_g

0x507b,	// (0x0006cae8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x507b,	// (0x0006cae8) bg_single_mobtv_pg_channel_thumb_pane

0x4496,	// (0x0006bf03) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4496,	// (0x0006bf03) single_mobtv_pg_channel_thumb_pane_g1

0x44a4,	// (0x0006bf11) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x44a4,	// (0x0006bf11) single_mobtv_pg_channel_thumb_pane_g2

0x44b0,	// (0x0006bf1d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x44b0,	// (0x0006bf1d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb90,	// (0x000775fd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb90,	// (0x000775fd) single_mobtv_pg_channel_thumb_pane_g

0x44bc,	// (0x0006bf29) single_mobtv_pg_channel_thumb_pane_t1

0x44ca,	// (0x0006bf37) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb97,	// (0x00077604) single_mobtv_pg_channel_thumb_pane_t

0x01d7,	// (0x00067c44) bg_single_mobtv_pg_channel_table_pane_g1

0x01d7,	// (0x00067c44) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00076e30) bg_single_mobtv_pg_channel_table_pane_g

0x44d8,	// (0x0006bf45) single_mobtv_pg_channel_table_pane_t1

0x44e6,	// (0x0006bf53) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9c,	// (0x00077609) single_mobtv_pg_channel_table_pane_t

0xcf3a,	// (0x000749a7) main_mobtv_info_pane_g1_ParamLimits

0xcf3a,	// (0x000749a7) main_mobtv_info_pane_g1

0xcf56,	// (0x000749c3) main_mobtv_info_pane_t1_ParamLimits

0xcf56,	// (0x000749c3) main_mobtv_info_pane_t1

0xcfce,	// (0x00074a3b) main_mobtv_info_pane_t2_ParamLimits

0xcfce,	// (0x00074a3b) main_mobtv_info_pane_t2

0x0002,

0xfba6,	// (0x00077613) main_mobtv_info_pane_t_ParamLimits

0xfba6,	// (0x00077613) main_mobtv_info_pane_t

0xd05f,	// (0x00074acc) wait_bar_pane_cp05

0xd071,	// (0x00074ade) main_mobtv_loading_pane_g1_ParamLimits

0xd071,	// (0x00074ade) main_mobtv_loading_pane_g1

0xd07d,	// (0x00074aea) main_mobtv_loading_pane_g2_ParamLimits

0xd07d,	// (0x00074aea) main_mobtv_loading_pane_g2

0xd089,	// (0x00074af6) main_mobtv_loading_pane_g3_ParamLimits

0xd089,	// (0x00074af6) main_mobtv_loading_pane_g3

0x0002,

0xfbad,	// (0x0007761a) main_mobtv_loading_pane_g_ParamLimits

0xfbad,	// (0x0007761a) main_mobtv_loading_pane_g

0x44f4,	// (0x0006bf61) main_mobtv_loading_pane_t1_ParamLimits

0x44f4,	// (0x0006bf61) main_mobtv_loading_pane_t1

0x450c,	// (0x0006bf79) main_mobtv_loading_pane_t2_ParamLimits

0x450c,	// (0x0006bf79) main_mobtv_loading_pane_t2

0x0001,

0xfbb4,	// (0x00077621) main_mobtv_loading_pane_t_ParamLimits

0xfbb4,	// (0x00077621) main_mobtv_loading_pane_t

0xd097,	// (0x00074b04) wait_bar_pane_cp06_ParamLimits

0xd097,	// (0x00074b04) wait_bar_pane_cp06

0x4530,	// (0x0006bf9d) main_mobtv_programe_curr_pane_t1

0x453e,	// (0x0006bfab) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb9,	// (0x00077626) main_mobtv_programe_curr_pane_t

0x454c,	// (0x0006bfb9) main_mobtv_programe_next_pane_t1

0x4913,	// (0x0006c380) main_mobtv_programe_next_pane_t2

0x4921,	// (0x0006c38e) main_mobtv_programe_next_pane_t3

0x0002,

0xfbbe,	// (0x0007762b) main_mobtv_programe_next_pane_t

0x455a,	// (0x0006bfc7) bg_popup_mobtv_noti_window_pane

0x492f,	// (0x0006c39c) popup_mobtv_noti_window_g1

0x4937,	// (0x0006c3a4) popup_mobtv_noti_window_t1

0x4945,	// (0x0006c3b2) popup_mobtv_noti_window_t2

0x0001,

0xfbc5,	// (0x00077632) popup_mobtv_noti_window_t

0x01d7,	// (0x00067c44) bg_popup_mobtv_noti_window_pane_g1

0x455a,	// (0x0006bfc7) sc_clock_pane

0x455a,	// (0x0006bfc7) main_fs_bigclock_pane

0xc732,	// (0x0007419f) blid2_tripm_pane_t4_ParamLimits

0xc732,	// (0x0007419f) blid2_tripm_pane_t4

0xd0a3,	// (0x00074b10) sc_clock_pane_g1_ParamLimits

0xd0a3,	// (0x00074b10) sc_clock_pane_g1

0xd0b1,	// (0x00074b1e) sc_clock_pane_t1_ParamLimits

0xd0b1,	// (0x00074b1e) sc_clock_pane_t1

0xd0c6,	// (0x00074b33) sc_clock_pane_t2_ParamLimits

0xd0c6,	// (0x00074b33) sc_clock_pane_t2

0xd0d8,	// (0x00074b45) sc_clock_pane_t3_ParamLimits

0xd0d8,	// (0x00074b45) sc_clock_pane_t3

0x0004,

0xfbca,	// (0x00077637) sc_clock_pane_t_ParamLimits

0xfbca,	// (0x00077637) sc_clock_pane_t

0xdb65,	// (0x000755d2) main_fs_bigclock_indicator_pane_ParamLimits

0xdb65,	// (0x000755d2) main_fs_bigclock_indicator_pane

0xd167,	// (0x00074bd4) main_fs_bigclock_pane_g1_ParamLimits

0xd167,	// (0x00074bd4) main_fs_bigclock_pane_g1

0xdb71,	// (0x000755de) main_fs_bigclock_pane_t1_ParamLimits

0xdb71,	// (0x000755de) main_fs_bigclock_pane_t1

0xdb83,	// (0x000755f0) main_fs_bigclock_pane_t2_ParamLimits

0xdb83,	// (0x000755f0) main_fs_bigclock_pane_t2

0xdb97,	// (0x00075604) main_fs_bigclock_pane_t3_ParamLimits

0xdb97,	// (0x00075604) main_fs_bigclock_pane_t3

0x0002,

0xfd5b,	// (0x000777c8) main_fs_bigclock_pane_t_ParamLimits

0xfd5b,	// (0x000777c8) main_fs_bigclock_pane_t

0xef87,	// (0x000769f4) main_fs_bigclock_indicator_pane_g1

0x42a0,	// (0x0006bd0d) ncim_query_content_pane_g2_ParamLimits

0x42a0,	// (0x0006bd0d) ncim_query_content_pane_g2

0x0001,

0xfb57,	// (0x000775c4) ncim_query_content_pane_g_ParamLimits

0xfb57,	// (0x000775c4) ncim_query_content_pane_g

0xd0ea,	// (0x00074b57) sc_clock_pane_t4_ParamLimits

0xd0ea,	// (0x00074b57) sc_clock_pane_t4

0x48f1,	// (0x0006c35e) main_radioblah_pane

0xb4a9,	// (0x00072f16) cell_call4_button_pane_t1_copy1_ParamLimits

0xb4a9,	// (0x00072f16) cell_call4_button_pane_t1_copy1

0xcd19,	// (0x00074786) main_ncimui_pane_t1_ParamLimits

0xcd19,	// (0x00074786) main_ncimui_pane_t1

0xcd33,	// (0x000747a0) main_ncimui_pane_t2_ParamLimits

0xcd33,	// (0x000747a0) main_ncimui_pane_t2

0x0002,

0xfb50,	// (0x000775bd) main_ncimui_pane_t_ParamLimits

0xfb50,	// (0x000775bd) main_ncimui_pane_t

0x4953,	// (0x0006c3c0) main_radioblah_anim_pane_ParamLimits

0x4953,	// (0x0006c3c0) main_radioblah_anim_pane

0x4964,	// (0x0006c3d1) main_radioblah_info_pane_ParamLimits

0x4964,	// (0x0006c3d1) main_radioblah_info_pane

0x4978,	// (0x0006c3e5) main_radioblah_pane_t1_ParamLimits

0x4978,	// (0x0006c3e5) main_radioblah_pane_t1

0x4994,	// (0x0006c401) main_radioblah_pane_t2_ParamLimits

0x4994,	// (0x0006c401) main_radioblah_pane_t2

0x0003,

0xfbeb,	// (0x00077658) main_radioblah_pane_t_ParamLimits

0xfbeb,	// (0x00077658) main_radioblah_pane_t

0xd306,	// (0x00074d73) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd306,	// (0x00074d73) main_radioblah_rocker_ctrl_pane

0x49dc,	// (0x0006c449) main_radioblah_info_pane_t1_ParamLimits

0x49dc,	// (0x0006c449) main_radioblah_info_pane_t1

0xd34f,	// (0x00074dbc) main_radioblah_info_pane_t2_ParamLimits

0xd34f,	// (0x00074dbc) main_radioblah_info_pane_t2

0x0003,

0xfbf4,	// (0x00077661) main_radioblah_info_pane_t_ParamLimits

0xfbf4,	// (0x00077661) main_radioblah_info_pane_t

0x01d7,	// (0x00067c44) main_radioblah_rocker_ctrl_pane_g1

0xd3ff,	// (0x00074e6c) main_radioblah_rocker_ctrl_pane_g2

0xd407,	// (0x00074e74) main_radioblah_rocker_ctrl_pane_g3

0xd40f,	// (0x00074e7c) main_radioblah_rocker_ctrl_pane_g4

0xd417,	// (0x00074e84) main_radioblah_rocker_ctrl_pane_g5

0xd41f,	// (0x00074e8c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfd,	// (0x0007766a) main_radioblah_rocker_ctrl_pane_g

0xcccb,	// (0x00074738) main_cset_text2_pane_t1_copy1_ParamLimits

0xb532,	// (0x00072f9f) cam4_image_uncrop_qvga_pane

0xb677,	// (0x000730e4) vid4_image_uncrop_qcif_pane

0xc8c4,	// (0x00074331) cam6_image_uncrop_qvga_pane_ParamLimits

0xc8c4,	// (0x00074331) cam6_image_uncrop_qvga_pane

0x3f7f,	// (0x0006b9ec) vid6_image_uncrop_qcif_pane_ParamLimits

0x3f7f,	// (0x0006b9ec) vid6_image_uncrop_qcif_pane

0x455a,	// (0x0006bfc7) bg_popup_preview_window_pane_cp03

0x4252,	// (0x0006bcbf) list_cset_text2_pane

0x425a,	// (0x0006bcc7) main_cset6_text2_pane_g1

0x4262,	// (0x0006bccf) main_cset6_text2_pane_t1

0xd427,	// (0x00074e94) list_cset_text2_pane_t1_ParamLimits

0xd427,	// (0x00074e94) list_cset_text2_pane_t1

0x48f1,	// (0x0006c35e) main_radioblah_pane_ParamLimits

0xd04b,	// (0x00074ab8) main_mobtv_info_pane_t3_ParamLimits

0xd04b,	// (0x00074ab8) main_mobtv_info_pane_t3

0xd2f4,	// (0x00074d61) main_radioblah_pane_g1

0xd31f,	// (0x00074d8c) main_radioblah_info_pane_g1

0xd3a4,	// (0x00074e11) main_radioblah_info_pane_t3_ParamLimits

0xd3a4,	// (0x00074e11) main_radioblah_info_pane_t3

0x8c12,	// (0x0007067f) highlight_cell_cale_month_pane_ParamLimits

0x8c12,	// (0x0007067f) highlight_cell_cale_month_pane

0x455a,	// (0x0006bfc7) main_phob_fisheye_pane

0x2785,	// (0x0006a1f2) scroll_pane_cp0031_ParamLimits

0x2785,	// (0x0006a1f2) scroll_pane_cp0031

0x4091,	// (0x0006bafe) wait_bar_pane_cp08_ParamLimits

0xca97,	// (0x00074504) cset_list_set_pane_copy1_ParamLimits

0x4a30,	// (0x0006c49d) highlight_cell_cale_month_pane_g1

0xd43e,	// (0x00074eab) highlight_cell_cale_month_pane_t1

0x3c5b,	// (0x0006b6c8) list_gen_pane_cp01

0x38ca,	// (0x0006b337) scroll_pane_01

0xd44c,	// (0x00074eb9) list_single_double_fisheye_pane

0x64ca,	// (0x0006df37) list_double_fisheye_pane_g1_ParamLimits

0x64ca,	// (0x0006df37) list_double_fisheye_pane_g1

0x64d6,	// (0x0006df43) list_double_fisheye_pane_g2_ParamLimits

0x64d6,	// (0x0006df43) list_double_fisheye_pane_g2

0xd455,	// (0x00074ec2) list_double_fisheye_pane_g3_ParamLimits

0xd455,	// (0x00074ec2) list_double_fisheye_pane_g3

0x0004,

0xfc0a,	// (0x00077677) list_double_fisheye_pane_g_ParamLimits

0xfc0a,	// (0x00077677) list_double_fisheye_pane_g

0x6507,	// (0x0006df74) list_double_fisheye_pane_t1_ParamLimits

0x6507,	// (0x0006df74) list_double_fisheye_pane_t1

0x6522,	// (0x0006df8f) list_double_fisheye_pane_t2_ParamLimits

0x6522,	// (0x0006df8f) list_double_fisheye_pane_t2

0x0001,

0xfc15,	// (0x00077682) list_double_fisheye_pane_t_ParamLimits

0xfc15,	// (0x00077682) list_double_fisheye_pane_t

0x455a,	// (0x0006bfc7) main_call5_pane

0xd110,	// (0x00074b7d) sc_swipe_pane_ParamLimits

0xd110,	// (0x00074b7d) sc_swipe_pane

0xd46d,	// (0x00074eda) call5_image_pane_ParamLimits

0xd46d,	// (0x00074eda) call5_image_pane

0xd47f,	// (0x00074eec) call5_swipe_1_pane_ParamLimits

0xd47f,	// (0x00074eec) call5_swipe_1_pane

0xd48b,	// (0x00074ef8) call5_swipe_2_pane_ParamLimits

0xd48b,	// (0x00074ef8) call5_swipe_2_pane

0xd4a5,	// (0x00074f12) popup_call5_audio_first_window_ParamLimits

0xd4a5,	// (0x00074f12) popup_call5_audio_first_window

0x507b,	// (0x0006cae8) call5_swipe_1_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) call5_swipe_1_pane_g1

0x4a38,	// (0x0006c4a5) call5_swipe_1_pane_g2_ParamLimits

0x4a38,	// (0x0006c4a5) call5_swipe_1_pane_g2

0x0001,

0xfc1a,	// (0x00077687) call5_swipe_1_pane_g_ParamLimits

0xfc1a,	// (0x00077687) call5_swipe_1_pane_g

0x4a44,	// (0x0006c4b1) call5_swipe_1_pane_t1_ParamLimits

0x4a44,	// (0x0006c4b1) call5_swipe_1_pane_t1

0x507b,	// (0x0006cae8) call5_swipe_2_pane_g1_ParamLimits

0x507b,	// (0x0006cae8) call5_swipe_2_pane_g1

0x4a59,	// (0x0006c4c6) call5_swipe_2_pane_g2_ParamLimits

0x4a59,	// (0x0006c4c6) call5_swipe_2_pane_g2

0x0001,

0xfc1f,	// (0x0007768c) call5_swipe_2_pane_g_ParamLimits

0xfc1f,	// (0x0007768c) call5_swipe_2_pane_g

0x4a65,	// (0x0006c4d2) call5_swipe_2_pane_t1_ParamLimits

0x4a65,	// (0x0006c4d2) call5_swipe_2_pane_t1

0x4a7a,	// (0x0006c4e7) sc_swipe_pane_g1_ParamLimits

0x4a7a,	// (0x0006c4e7) sc_swipe_pane_g1

0x4a87,	// (0x0006c4f4) sc_swipe_pane_g2_ParamLimits

0x4a87,	// (0x0006c4f4) sc_swipe_pane_g2

0x0001,

0xfc24,	// (0x00077691) sc_swipe_pane_g_ParamLimits

0xfc24,	// (0x00077691) sc_swipe_pane_g

0x4a93,	// (0x0006c500) sc_swipe_pane_t1_ParamLimits

0x4a93,	// (0x0006c500) sc_swipe_pane_t1

0x455a,	// (0x0006bfc7) main_cmail_launcher_pane

0xd4b5,	// (0x00074f22) aid_size_cell_cmail_l_ParamLimits

0xd4b5,	// (0x00074f22) aid_size_cell_cmail_l

0xd4c3,	// (0x00074f30) grid_cmail_l_pane_ParamLimits

0xd4c3,	// (0x00074f30) grid_cmail_l_pane

0xd4d1,	// (0x00074f3e) cell_cmail_l_pane_ParamLimits

0xd4d1,	// (0x00074f3e) cell_cmail_l_pane

0xd4ec,	// (0x00074f59) cell_cmail_l_pane_g1_ParamLimits

0xd4ec,	// (0x00074f59) cell_cmail_l_pane_g1

0xd4f8,	// (0x00074f65) cell_cmail_l_pane_t1_ParamLimits

0xd4f8,	// (0x00074f65) cell_cmail_l_pane_t1

0xd50e,	// (0x00074f7b) cell_cmail_l_pane_t2_ParamLimits

0xd50e,	// (0x00074f7b) cell_cmail_l_pane_t2

0x0001,

0xfc29,	// (0x00077696) cell_cmail_l_pane_t_ParamLimits

0xfc29,	// (0x00077696) cell_cmail_l_pane_t

0x48f1,	// (0x0006c35e) grid_highlight_pane_cp018_ParamLimits

0x48f1,	// (0x0006c35e) grid_highlight_pane_cp018

0x6de8,	// (0x0006e855) main2_pane_ParamLimits

0x6de8,	// (0x0006e855) main2_pane

0x5185,	// (0x0006cbf2) popup_sp_fs_action_menu_bg_pane_g1

0x518d,	// (0x0006cbfa) popup_sp_fs_action_menu_bg_pane_g2

0x5195,	// (0x0006cc02) popup_sp_fs_action_menu_bg_pane_g3

0x519d,	// (0x0006cc0a) popup_sp_fs_action_menu_bg_pane_g4

0x51a5,	// (0x0006cc12) popup_sp_fs_action_menu_bg_pane_g5

0x51ad,	// (0x0006cc1a) popup_sp_fs_action_menu_bg_pane_g6

0x51b5,	// (0x0006cc22) popup_sp_fs_action_menu_bg_pane_g7

0x51bd,	// (0x0006cc2a) popup_sp_fs_action_menu_bg_pane_g8

0x51c5,	// (0x0006cc32) popup_sp_fs_action_menu_bg_pane_g9

0x51cd,	// (0x0006cc3a) popup_sp_fs_action_menu_bg_pane_g10

0x51cd,	// (0x0006cc3a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00076b98) popup_sp_fs_action_menu_bg_pane_g

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g3_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g3_g2

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00076c46) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00076c46) list_medium_line_x2_t3_g3_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g3_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g3_t2

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00076c4d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00076c4d) list_medium_line_x2_t3_g3_t

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g2_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_x2_t3_g2_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g2_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g2_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g2_t2

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g2_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00076c4d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00076c4d) list_medium_line_x2_t3_g2_t

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g2

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g3

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00076c59) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00076c59) list_medium_line_x2_t4_g4_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t2

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t3

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t4_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00076c62) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00076c62) list_medium_line_x2_t4_g4_t

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g2

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g3

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00076c59) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00076c59) list_medium_line_x2_t2_g4_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g4_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g4_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00076cc9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00076cc9) list_medium_line_x2_t2_g4_t

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g3_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g3_g2

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00076c46) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00076c46) list_medium_line_x2_t2_g3_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g3_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g3_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00076cc9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00076cc9) list_medium_line_x2_t2_g3_t

0x8dbb,	// (0x00070828) main_sp_fs_list_pane_ParamLimits

0x8dbb,	// (0x00070828) main_sp_fs_list_pane

0x8dc7,	// (0x00070834) sp_fs_scroll_pane_ParamLimits

0x8dc7,	// (0x00070834) sp_fs_scroll_pane

0x0772,	// (0x000681df) list_medium_line_x2_t3_t1

0x0772,	// (0x000681df) list_medium_line_x2_t3_t2

0x0772,	// (0x000681df) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00076d14) list_medium_line_x2_t3_t

0x0772,	// (0x000681df) list_medium_line_x3_t4_t1

0x0772,	// (0x000681df) list_medium_line_x3_t4_t2

0x0772,	// (0x000681df) list_medium_line_x3_t4_t3

0x0772,	// (0x000681df) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00076d1b) list_medium_line_x3_t4_t

0x0772,	// (0x000681df) list_medium_line_x4_t5_t1

0x0772,	// (0x000681df) list_medium_line_x4_t5_t2

0x0772,	// (0x000681df) list_medium_line_x4_t5_t3

0x0772,	// (0x000681df) list_medium_line_x4_t5_t4

0x0772,	// (0x000681df) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00076d24) list_medium_line_x4_t5_t

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g1

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g2

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g3

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g4_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00076c59) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00076c59) list_medium_line_t4_g4_g

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t1

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t2

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t3

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t4_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00076c62) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00076c62) list_medium_line_t4_g4_t

0x8ec0,	// (0x0007092d) chi_dic_find_pane_g1

0x9c5e,	// (0x000716cb) main_tport_pane

0x0772,	// (0x000681df) list_medium_line_plain_t1

0x507b,	// (0x0006cae8) list_medium_line_t2_g2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t2_g2_g1

0x507b,	// (0x0006cae8) list_medium_line_t2_g2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_t2_g2_g

0x01a9,	// (0x00067c16) list_medium_line_t2_g2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t2_g2_t1

0x01a9,	// (0x00067c16) list_medium_line_t2_g2_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00076cc9) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00076cc9) list_medium_line_t2_g2_t

0x6464,	// (0x0006ded1) aid_sp_fs_list_icon_a_sm

0xc5c9,	// (0x00074036) aid_sp_fs_list_icon_d

0xebea,	// (0x00076657) aid_sp_fs_text_primary

0x646c,	// (0x0006ded9) aid_sp_fs_text_secondary

0x455a,	// (0x0006bfc7) list_medium_line

0x455a,	// (0x0006bfc7) list_medium_line_g2

0x455a,	// (0x0006bfc7) list_medium_line_g3

0x455a,	// (0x0006bfc7) list_medium_line_plain

0x455a,	// (0x0006bfc7) list_medium_line_plain_t2

0x455a,	// (0x0006bfc7) list_medium_line_plain_t3

0x455a,	// (0x0006bfc7) list_medium_line_right_icon

0x455a,	// (0x0006bfc7) list_medium_line_right_iconx2

0x455a,	// (0x0006bfc7) list_medium_line_t2

0x455a,	// (0x0006bfc7) list_medium_line_t2_g2

0x455a,	// (0x0006bfc7) list_medium_line_t2_g3

0x455a,	// (0x0006bfc7) list_medium_line_t2_right_icon

0x455a,	// (0x0006bfc7) list_medium_line_t2_right_iconx2

0x455a,	// (0x0006bfc7) list_medium_line_t3

0x455a,	// (0x0006bfc7) list_medium_line_t3_g2

0x455a,	// (0x0006bfc7) list_medium_line_t3_g3

0x455a,	// (0x0006bfc7) list_medium_line_t3_right_iconx2

0x455a,	// (0x0006bfc7) list_medium_line_t4_g4

0x455a,	// (0x0006bfc7) list_medium_line_x2

0x455a,	// (0x0006bfc7) list_medium_line_x2_t2_g2

0x455a,	// (0x0006bfc7) list_medium_line_x2_t2_g3

0x455a,	// (0x0006bfc7) list_medium_line_x2_t2_g4

0x455a,	// (0x0006bfc7) list_medium_line_x2_t3

0x455a,	// (0x0006bfc7) list_medium_line_x2_t3_g2

0x455a,	// (0x0006bfc7) list_medium_line_x2_t3_g3

0x455a,	// (0x0006bfc7) list_medium_line_x2_t3_g4

0x455a,	// (0x0006bfc7) list_medium_line_x2_t4_g2

0x455a,	// (0x0006bfc7) list_medium_line_x2_t4_g4

0x455a,	// (0x0006bfc7) list_medium_line_x3

0x455a,	// (0x0006bfc7) list_medium_line_x3_t4

0x455a,	// (0x0006bfc7) list_medium_line_x3_t4_g4

0x455a,	// (0x0006bfc7) list_medium_line_x4_t4

0x455a,	// (0x0006bfc7) list_medium_line_x4_t4_g7

0x455a,	// (0x0006bfc7) list_medium_line_x4_t5

0x6475,	// (0x0006dee2) list_single_fs_dyc_pane_ParamLimits

0x6475,	// (0x0006dee2) list_single_fs_dyc_pane

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g1

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g2

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g3

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g4

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g5

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x4_t4_g7_g6

0x5089,	// (0x0006caf6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5089,	// (0x0006caf6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb31,	// (0x0007759e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb31,	// (0x0007759e) list_medium_line_x4_t4_g7_g

0x01a9,	// (0x00067c16) list_medium_line_x4_t4_g7_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x4_t4_g7_t1

0x01a9,	// (0x00067c16) list_medium_line_x4_t4_g7_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x4_t4_g7_t2

0x01a9,	// (0x00067c16) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x4_t4_g7_t3

0x0c95,	// (0x00068702) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0c95,	// (0x00068702) list_medium_line_x4_t4_g7_t4

0x0c95,	// (0x00068702) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0c95,	// (0x00068702) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb40,	// (0x000775ad) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb40,	// (0x000775ad) list_medium_line_x4_t4_g7_t

0x64ad,	// (0x0006df1a) list_single_dyc_row_pane_ParamLimits

0x64ad,	// (0x0006df1a) list_single_dyc_row_pane

0xd461,	// (0x00074ece) call5_gesture_pane_ParamLimits

0xd461,	// (0x00074ece) call5_gesture_pane

0xd497,	// (0x00074f04) call5_windows_pane_ParamLimits

0xd497,	// (0x00074f04) call5_windows_pane

0xd52b,	// (0x00074f98) call5_swipe_1_pane_cp_ParamLimits

0xd52b,	// (0x00074f98) call5_swipe_1_pane_cp

0xd537,	// (0x00074fa4) call5_swipe_2_pane_cp_ParamLimits

0xd537,	// (0x00074fa4) call5_swipe_2_pane_cp

0x0182,	// (0x00067bef) call5_image_pane_cp

0xd543,	// (0x00074fb0) popup_call5_audio_first_window_cp_ParamLimits

0xd543,	// (0x00074fb0) popup_call5_audio_first_window_cp

0x4a7a,	// (0x0006c4e7) call5_swipe_1_pane_g1_cp_ParamLimits

0x4a7a,	// (0x0006c4e7) call5_swipe_1_pane_g1_cp

0x4aa8,	// (0x0006c515) call5_swipe_1_pane_g2_cp

0x4a93,	// (0x0006c500) call5_swipe_1_pane_t1_cp_ParamLimits

0x4a93,	// (0x0006c500) call5_swipe_1_pane_t1_cp

0x4a7a,	// (0x0006c4e7) call5_swipe_2_pane_g1_cp_ParamLimits

0x4a7a,	// (0x0006c4e7) call5_swipe_2_pane_g1_cp

0x4ab0,	// (0x0006c51d) call5_swipe_2_pane_g2_cp

0x4ab8,	// (0x0006c525) call5_swipe_2_pane_t1_cp_ParamLimits

0x4ab8,	// (0x0006c525) call5_swipe_2_pane_t1_cp

0x48f1,	// (0x0006c35e) main_sp_fs_email_pane

0x4acd,	// (0x0006c53a) main_sp_fs_listscroll_pane_te

0xd551,	// (0x00074fbe) popup_sp_fs_action_menu_pane_ParamLimits

0xd551,	// (0x00074fbe) popup_sp_fs_action_menu_pane

0x01d7,	// (0x00067c44) bg_sp_fs_ctrlbar_pane_g1

0x4ad6,	// (0x0006c543) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4adf,	// (0x0006c54c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4ae8,	// (0x0006c555) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x01d7,	// (0x00067c44) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc2e,	// (0x0007769b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2296,	// (0x00069d03) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2296,	// (0x00069d03) bg_sp_fs_ctrlbar_ddmenu_pane

0x4af1,	// (0x0006c55e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4af1,	// (0x0006c55e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4afd,	// (0x0006c56a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4afd,	// (0x0006c56a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc37,	// (0x000776a4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc37,	// (0x000776a4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4b09,	// (0x0006c576) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4b09,	// (0x0006c576) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x01d7,	// (0x00067c44) list_medium_line_t2_right_icon_g1

0x0772,	// (0x000681df) list_medium_line_t2_right_icon_t1

0x0772,	// (0x000681df) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3c,	// (0x000776a9) list_medium_line_t2_right_icon_t

0x0ca9,	// (0x00068716) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0ca9,	// (0x00068716) bg_sp_fs_ctrlbar_pane

0xd5f0,	// (0x0007505d) main_sp_fs_ctrlbar_button_pane_cp01

0xd5f8,	// (0x00075065) main_sp_fs_ctrlbar_ddmenu_pane

0x4b5d,	// (0x0006c5ca) main_sp_fs_ctrlbar_pane_g1

0x4b69,	// (0x0006c5d6) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc41,	// (0x000776ae) main_sp_fs_ctrlbar_pane_g

0xd636,	// (0x000750a3) main_sp_fs_ctrlbar_pane_t1

0xd673,	// (0x000750e0) main_sp_fs_ctrlbar_pane

0xd68d,	// (0x000750fa) main_sp_fs_listscroll_pane_te_cp01

0x6544,	// (0x0006dfb1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6544,	// (0x0006dfb1) popup_sp_fs_action_menu_pane_cp01

0x48f1,	// (0x0006c35e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x48f1,	// (0x0006c35e) bg_sp_fs_highlight_list_pane_cp01

0x6564,	// (0x0006dfd1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6564,	// (0x0006dfd1) sp_fs_action_menu_list_gene_pane_g1

0x4b90,	// (0x0006c5fd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4b90,	// (0x0006c5fd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc4f,	// (0x000776bc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc4f,	// (0x000776bc) sp_fs_action_menu_list_gene_pane_g

0x6573,	// (0x0006dfe0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6573,	// (0x0006dfe0) sp_fs_action_menu_list_gene_pane_t1

0x658b,	// (0x0006dff8) sp_fs_action_menu_list_gene_pane_ParamLimits

0x658b,	// (0x0006dff8) sp_fs_action_menu_list_gene_pane

0x4b9d,	// (0x0006c60a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4b9d,	// (0x0006c60a) popup_sp_fs_action_menu_bg_pane

0x65ae,	// (0x0006e01b) sp_fs_action_menu_list_pane_ParamLimits

0x65ae,	// (0x0006e01b) sp_fs_action_menu_list_pane

0x65d2,	// (0x0006e03f) sp_fs_scroll_pane_cp01_ParamLimits

0x65d2,	// (0x0006e03f) sp_fs_scroll_pane_cp01

0x0772,	// (0x000681df) list_medium_line_plain_t2_t1

0x0772,	// (0x000681df) list_medium_line_plain_t2_t2

0x0001,

0xfc3c,	// (0x000776a9) list_medium_line_plain_t2_t

0x0772,	// (0x000681df) list_medium_line_plain_t3_t1

0x0772,	// (0x000681df) list_medium_line_plain_t3_t2

0x0772,	// (0x000681df) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00076d14) list_medium_line_plain_t3_t

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g2_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_x2_t2_g2_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g2_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00076cc9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00076cc9) list_medium_line_x2_t2_g2_t

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g2_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_x2_t4_g2_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t2

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t3

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00076c62) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00076c62) list_medium_line_x2_t4_g2_t

0x01d7,	// (0x00067c44) list_medium_line_t3_right_iconx2_g1

0x01d7,	// (0x00067c44) list_medium_line_t3_right_iconx2_g2

0x01d7,	// (0x00067c44) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00076e35) list_medium_line_t3_right_iconx2_g

0x0772,	// (0x000681df) list_medium_line_t3_right_iconx2_t1

0x0772,	// (0x000681df) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3c,	// (0x000776a9) list_medium_line_t3_right_iconx2_t

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g1

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g2

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g3

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00076c59) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00076c59) list_medium_line_x3_t4_g4_g

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t1

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t2

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t3

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t4_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00076c62) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00076c62) list_medium_line_x3_t4_g4_t

0x65f8,	// (0x0006e065) list_single_dyc_row_text_pane_t1_ParamLimits

0x65f8,	// (0x0006e065) list_single_dyc_row_text_pane_t1

0x663b,	// (0x0006e0a8) list_single_dyc_row_text_pane_t2_ParamLimits

0x663b,	// (0x0006e0a8) list_single_dyc_row_text_pane_t2

0x66b1,	// (0x0006e11e) list_single_dyc_row_text_pane_t3_ParamLimits

0x66b1,	// (0x0006e11e) list_single_dyc_row_text_pane_t3

0x0005,

0xfc54,	// (0x000776c1) list_single_dyc_row_text_pane_t_ParamLimits

0xfc54,	// (0x000776c1) list_single_dyc_row_text_pane_t

0x6790,	// (0x0006e1fd) list_single_dyc_row_pane_g1_ParamLimits

0x6790,	// (0x0006e1fd) list_single_dyc_row_pane_g1

0x679c,	// (0x0006e209) list_single_dyc_row_pane_g2_ParamLimits

0x679c,	// (0x0006e209) list_single_dyc_row_pane_g2

0x67a8,	// (0x0006e215) list_single_dyc_row_pane_g3_ParamLimits

0x67a8,	// (0x0006e215) list_single_dyc_row_pane_g3

0x67b4,	// (0x0006e221) list_single_dyc_row_pane_g4_ParamLimits

0x67b4,	// (0x0006e221) list_single_dyc_row_pane_g4

0x0003,

0xfc61,	// (0x000776ce) list_single_dyc_row_pane_g_ParamLimits

0xfc61,	// (0x000776ce) list_single_dyc_row_pane_g

0x67c0,	// (0x0006e22d) list_single_dyc_row_text_pane_ParamLimits

0x67c0,	// (0x0006e22d) list_single_dyc_row_text_pane

0x455a,	// (0x0006bfc7) bg_sp_fs_scroll_pane

0x4bab,	// (0x0006c618) thumb_sp_fs_scroll_pane

0x507b,	// (0x0006cae8) list_medium_line_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_g1

0x01a9,	// (0x00067c16) list_medium_line_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t1

0x507b,	// (0x0006cae8) list_medium_line_x2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_x2_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t1

0x507b,	// (0x0006cae8) list_medium_line_x3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x3_g1

0x375d,	// (0x0006b1ca) list_medium_line_x3_g2_ParamLimits

0x375d,	// (0x0006b1ca) list_medium_line_x3_g2

0x0001,

0xfc6a,	// (0x000776d7) list_medium_line_x3_g_ParamLimits

0xfc6a,	// (0x000776d7) list_medium_line_x3_g

0x4bb4,	// (0x0006c621) list_medium_line_x3_t1_ParamLimits

0x4bb4,	// (0x0006c621) list_medium_line_x3_t1

0x4bc8,	// (0x0006c635) thumb_sp_fs_scroll_pane_g1

0x4bd1,	// (0x0006c63e) thumb_sp_fs_scroll_pane_g2

0x4bda,	// (0x0006c647) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x000776dc) thumb_sp_fs_scroll_pane_g

0x4bc8,	// (0x0006c635) bg_sp_fs_scroll_pane_g1

0x4bd1,	// (0x0006c63e) bg_sp_fs_scroll_pane_g2

0x4bda,	// (0x0006c647) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x000776dc) bg_sp_fs_scroll_pane_g

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g1

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g2

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g3

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00076c59) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00076c59) list_medium_line_x2_t3_g4_g

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g4_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g4_t1

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g4_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g4_t2

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00076c4d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00076c4d) list_medium_line_x2_t3_g4_t

0x507b,	// (0x0006cae8) list_medium_line_g2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_g2_g1

0x507b,	// (0x0006cae8) list_medium_line_g2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_g2_g

0x01a9,	// (0x00067c16) list_medium_line_g2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_g2_t1

0x507b,	// (0x0006cae8) list_medium_line_t3_g2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t3_g2_g1

0x507b,	// (0x0006cae8) list_medium_line_t3_g2_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00076c54) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00076c54) list_medium_line_t3_g2_g

0x01a9,	// (0x00067c16) list_medium_line_t3_g2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_g2_t1

0x01a9,	// (0x00067c16) list_medium_line_t3_g2_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_g2_t2

0x01a9,	// (0x00067c16) list_medium_line_t3_g2_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00076c4d) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00076c4d) list_medium_line_t3_g2_t

0x01d7,	// (0x00067c44) list_medium_line_right_icon_g1

0x0772,	// (0x000681df) list_medium_line_right_icon_t1

0x507b,	// (0x0006cae8) list_medium_line_t2_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t2_g1

0x01a9,	// (0x00067c16) list_medium_line_t2_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t2_t1

0x01a9,	// (0x00067c16) list_medium_line_t2_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00076cc9) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00076cc9) list_medium_line_t2_t

0x507b,	// (0x0006cae8) list_medium_line_t3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t3_g1

0x01a9,	// (0x00067c16) list_medium_line_t3_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_t1

0x01a9,	// (0x00067c16) list_medium_line_t3_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_t2

0x01a9,	// (0x00067c16) list_medium_line_t3_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00076c4d) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00076c4d) list_medium_line_t3_t

0x507b,	// (0x0006cae8) list_medium_line_g3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_g3_g1

0x507b,	// (0x0006cae8) list_medium_line_g3_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_g3_g2

0x507b,	// (0x0006cae8) list_medium_line_g3_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00076c46) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00076c46) list_medium_line_g3_g

0x01a9,	// (0x00067c16) list_medium_line_g3_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_g3_t1

0x507b,	// (0x0006cae8) list_medium_line_t2_g3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t2_g3_g1

0x507b,	// (0x0006cae8) list_medium_line_t2_g3_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t2_g3_g2

0x507b,	// (0x0006cae8) list_medium_line_t2_g3_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00076c46) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00076c46) list_medium_line_t2_g3_g

0x01a9,	// (0x00067c16) list_medium_line_t2_g3_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t2_g3_t1

0x01a9,	// (0x00067c16) list_medium_line_t2_g3_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00076cc9) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00076cc9) list_medium_line_t2_g3_t

0x507b,	// (0x0006cae8) list_medium_line_t3_g3_g1_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t3_g3_g1

0x507b,	// (0x0006cae8) list_medium_line_t3_g3_g2_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t3_g3_g2

0x507b,	// (0x0006cae8) list_medium_line_t3_g3_g3_ParamLimits

0x507b,	// (0x0006cae8) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00076c46) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00076c46) list_medium_line_t3_g3_g

0x01a9,	// (0x00067c16) list_medium_line_t3_g3_t1_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_g3_t1

0x01a9,	// (0x00067c16) list_medium_line_t3_g3_t2_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_g3_t2

0x01a9,	// (0x00067c16) list_medium_line_t3_g3_t3_ParamLimits

0x01a9,	// (0x00067c16) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00076c4d) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00076c4d) list_medium_line_t3_g3_t

0x01d7,	// (0x00067c44) list_medium_line_right_iconx2_g1

0x01d7,	// (0x00067c44) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00076e30) list_medium_line_right_iconx2_g

0x0772,	// (0x000681df) list_medium_line_right_iconx2_t1

0x01d7,	// (0x00067c44) list_medium_line_t2_right_iconx2_g1

0x01d7,	// (0x00067c44) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00076e30) list_medium_line_t2_right_iconx2_g

0x0772,	// (0x000681df) list_medium_line_t2_right_iconx2_t1

0x0772,	// (0x000681df) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3c,	// (0x000776a9) list_medium_line_t2_right_iconx2_t

0x0772,	// (0x000681df) list_medium_line_x4_t4_t1

0x0772,	// (0x000681df) list_medium_line_x4_t4_t2

0x0772,	// (0x000681df) list_medium_line_x4_t4_t3

0x0772,	// (0x000681df) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00076d1b) list_medium_line_x4_t4_t

0xd6c8,	// (0x00075135) tport_appsw_pane_ParamLimits

0xd6c8,	// (0x00075135) tport_appsw_pane

0xd6d6,	// (0x00075143) tport_contact_pane_ParamLimits

0xd6d6,	// (0x00075143) tport_contact_pane

0xd6e6,	// (0x00075153) tport_listscroll_pane_ParamLimits

0xd6e6,	// (0x00075153) tport_listscroll_pane

0xd6f5,	// (0x00075162) cell_tport_appsw_pane_ParamLimits

0xd6f5,	// (0x00075162) cell_tport_appsw_pane

0x5089,	// (0x0006caf6) tport_appsw_pane_g1_ParamLimits

0x5089,	// (0x0006caf6) tport_appsw_pane_g1

0x4be3,	// (0x0006c650) tport_contact_pane_g1

0x4bec,	// (0x0006c659) tport_contact_pane_t1

0x4bfa,	// (0x0006c667) tport_contact_pane_t2

0x0001,

0xfc76,	// (0x000776e3) tport_contact_pane_t

0x4c08,	// (0x0006c675) list_tport_pane

0x4c11,	// (0x0006c67e) scroll_pane_cp_030

0xd72a,	// (0x00075197) cell_tport_appsw_pane_g1

0xd73a,	// (0x000751a7) cell_tport_appsw_pane_t1

0xd748,	// (0x000751b5) grid_highlight_pane_cp019

0xd750,	// (0x000751bd) list_tport_double_graphic_pane_ParamLimits

0xd750,	// (0x000751bd) list_tport_double_graphic_pane

0x48f1,	// (0x0006c35e) list_highlight_pane_cp023_ParamLimits

0x48f1,	// (0x0006c35e) list_highlight_pane_cp023

0xd76d,	// (0x000751da) list_tport_double_graphic_pane_g1_ParamLimits

0xd76d,	// (0x000751da) list_tport_double_graphic_pane_g1

0xd77a,	// (0x000751e7) list_tport_double_graphic_pane_t1_ParamLimits

0xd77a,	// (0x000751e7) list_tport_double_graphic_pane_t1

0xd78f,	// (0x000751fc) list_tport_double_graphic_pane_t2_ParamLimits

0xd78f,	// (0x000751fc) list_tport_double_graphic_pane_t2

0x0001,

0xfc82,	// (0x000776ef) list_tport_double_graphic_pane_t_ParamLimits

0xfc82,	// (0x000776ef) list_tport_double_graphic_pane_t

0x455a,	// (0x0006bfc7) main_cale_note_pane

0xb8de,	// (0x0007334b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb8de,	// (0x0007334b) cell_vitu2_function_top_wide_pane_cp01

0xd05f,	// (0x00074acc) wait_bar_pane_cp05_ParamLimits

0x48f1,	// (0x0006c35e) listscroll_cmail_pane

0x4c1a,	// (0x0006c687) list_cmail_pane

0xd7a1,	// (0x0007520e) list_cmail_body_pane

0xd7bb,	// (0x00075228) list_single_cmail_header_caption_pane

0x4c2a,	// (0x0006c697) list_single_cmail_header_detail_pane_ParamLimits

0x4c2a,	// (0x0006c697) list_single_cmail_header_detail_pane

0x4c5c,	// (0x0006c6c9) list_single_cmail_header_caption_pane_t1

0x67df,	// (0x0006e24c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x67df,	// (0x0006e24c) list_single_cmail_header_detail_pane_g1

0xd7db,	// (0x00075248) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd7db,	// (0x00075248) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc87,	// (0x000776f4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc87,	// (0x000776f4) list_single_cmail_header_detail_pane_g

0x67f7,	// (0x0006e264) list_single_cmail_header_detail_pane_t1_ParamLimits

0x67f7,	// (0x0006e264) list_single_cmail_header_detail_pane_t1

0x6857,	// (0x0006e2c4) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6857,	// (0x0006e2c4) list_single_cmail_header_editor_pane_bg

0x448d,	// (0x0006befa) list_cmail_body_pane_g1

0x4c80,	// (0x0006c6ed) list_cmail_body_pane_t1

0x37ac,	// (0x0006b219) list_single_cmail_header_editor_pane_bg_g1

0x03ec,	// (0x00067e59) list_single_cmail_header_editor_pane_bg_g1_copy1

0x37bc,	// (0x0006b229) list_single_cmail_header_editor_pane_bg_g1_copy2

0x37b4,	// (0x0006b221) list_single_cmail_header_editor_pane_bg_g1_copy3

0x39e0,	// (0x0006b44d) list_single_cmail_header_editor_pane_bg_g1_copy4

0x37dc,	// (0x0006b249) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x37cc,	// (0x0006b239) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x37d4,	// (0x0006b241) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x03cc,	// (0x00067e39) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd7e7,	// (0x00075254) calenote_gesture_pane_ParamLimits

0xd7e7,	// (0x00075254) calenote_gesture_pane

0xd801,	// (0x0007526e) calenote_window_pane_ParamLimits

0xd801,	// (0x0007526e) calenote_window_pane

0x4c8e,	// (0x0006c6fb) popup_note_window_cp01

0xd819,	// (0x00075286) calenote_swipe_1_pane_ParamLimits

0xd819,	// (0x00075286) calenote_swipe_1_pane

0xd537,	// (0x00074fa4) calenote_swipe_2_pane_ParamLimits

0xd537,	// (0x00074fa4) calenote_swipe_2_pane

0x4a7a,	// (0x0006c4e7) calenote_swipe_1_pane_g1_ParamLimits

0x4a7a,	// (0x0006c4e7) calenote_swipe_1_pane_g1

0x4a87,	// (0x0006c4f4) calenote_swipe_1_pane_g2_ParamLimits

0x4a87,	// (0x0006c4f4) calenote_swipe_1_pane_g2

0x0001,

0xfc24,	// (0x00077691) calenote_swipe_1_pane_g_ParamLimits

0xfc24,	// (0x00077691) calenote_swipe_1_pane_g

0x4ca0,	// (0x0006c70d) calenote_swipe_1_pane_t1_ParamLimits

0x4ca0,	// (0x0006c70d) calenote_swipe_1_pane_t1

0x4a7a,	// (0x0006c4e7) calenote_swipe_2_pane_g1_ParamLimits

0x4a7a,	// (0x0006c4e7) calenote_swipe_2_pane_g1

0x4cbf,	// (0x0006c72c) calenote_swipe_2_pane_g2_ParamLimits

0x4cbf,	// (0x0006c72c) calenote_swipe_2_pane_g2

0x0001,

0xfc93,	// (0x00077700) calenote_swipe_2_pane_g_ParamLimits

0xfc93,	// (0x00077700) calenote_swipe_2_pane_g

0x4ccb,	// (0x0006c738) calenote_swipe_2_pane_t1_ParamLimits

0x4ccb,	// (0x0006c738) calenote_swipe_2_pane_t1

0x455a,	// (0x0006bfc7) main_mup_navstr_pane

0xa767,	// (0x000721d4) main_mup3_pane_t7_ParamLimits

0xa767,	// (0x000721d4) main_mup3_pane_t7

0xaf75,	// (0x000729e2) main_mp4_pane_g6_ParamLimits

0xaf75,	// (0x000729e2) main_mp4_pane_g6

0xb301,	// (0x00072d6e) main_image3_pane_t4_ParamLimits

0xb301,	// (0x00072d6e) main_image3_pane_t4

0xd82c,	// (0x00075299) popup_navstr_preview_pane_ParamLimits

0xd82c,	// (0x00075299) popup_navstr_preview_pane

0xd838,	// (0x000752a5) scroll_navstr_pane_ParamLimits

0xd838,	// (0x000752a5) scroll_navstr_pane

0x455a,	// (0x0006bfc7) bg_popup_preview_window_pane_cp04

0xebfb,	// (0x00076668) popup_navstr_preview_pane_t1

0xd844,	// (0x000752b1) scroll_navstr_pane_g1_ParamLimits

0xd844,	// (0x000752b1) scroll_navstr_pane_g1

0xd851,	// (0x000752be) scroll_navstr_pane_t1_ParamLimits

0xd851,	// (0x000752be) scroll_navstr_pane_t1

0x4c97,	// (0x0006c704) bg_button_pane_cp014

0x4c97,	// (0x0006c704) bg_button_pane_cp030

0x64ea,	// (0x0006df57) list_double_fisheye_pane_g4_ParamLimits

0x64ea,	// (0x0006df57) list_double_fisheye_pane_g4

0x64f6,	// (0x0006df63) list_double_fisheye_pane_g5_ParamLimits

0x64f6,	// (0x0006df63) list_double_fisheye_pane_g5

0x0766,	// (0x000681d3) sp_fs_scroll_pane_cp03

0x4b5d,	// (0x0006c5ca) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4b69,	// (0x0006c5d6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc41,	// (0x000776ae) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd636,	// (0x000750a3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4c22,	// (0x0006c68f) sp_fs_scroll_pane_cp02

0x00de,	// (0x00067b4b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x00de,	// (0x00067b4b) popup_sp_fs_calendar_preview_list_single_pane

0x455a,	// (0x0006bfc7) main_cam6_pano_pane

0x48f1,	// (0x0006c35e) main_mup3_pane_ParamLimits

0x455a,	// (0x0006bfc7) main_phacti_pane

0xcf32,	// (0x0007499f) bg_button_pane_cp11

0xcf4a,	// (0x000749b7) main_mobtv_info_pane_g2_ParamLimits

0xcf4a,	// (0x000749b7) main_mobtv_info_pane_g2

0x0001,

0xfba1,	// (0x0007760e) main_mobtv_info_pane_g_ParamLimits

0xfba1,	// (0x0007760e) main_mobtv_info_pane_g

0xd0fc,	// (0x00074b69) sc_clock_pane_t5_ParamLimits

0xd0fc,	// (0x00074b69) sc_clock_pane_t5

0xd2f4,	// (0x00074d61) main_radioblah_pane_g1_ParamLimits

0x49ac,	// (0x0006c419) main_radioblah_pane_t3_ParamLimits

0x49ac,	// (0x0006c419) main_radioblah_pane_t3

0x49c4,	// (0x0006c431) main_radioblah_pane_t4_ParamLimits

0x49c4,	// (0x0006c431) main_radioblah_pane_t4

0xd312,	// (0x00074d7f) main_radioblah_text_pane_ParamLimits

0xd312,	// (0x00074d7f) main_radioblah_text_pane

0xd31f,	// (0x00074d8c) main_radioblah_info_pane_g1_ParamLimits

0xd3b8,	// (0x00074e25) main_radioblah_info_pane_t4_ParamLimits

0xd3b8,	// (0x00074e25) main_radioblah_info_pane_t4

0x48f1,	// (0x0006c35e) main_sp_fs_calendar_pane

0xd863,	// (0x000752d0) main_phacti_pane_g1

0xd86b,	// (0x000752d8) phacti_note_pane_ParamLimits

0xd86b,	// (0x000752d8) phacti_note_pane

0xec12,	// (0x0007667f) phacti_term_pane_ParamLimits

0xec12,	// (0x0007667f) phacti_term_pane

0xec27,	// (0x00076694) phacti_note_pane_t1_ParamLimits

0xec27,	// (0x00076694) phacti_note_pane_t1

0x686e,	// (0x0006e2db) phacti_term_pane_g1

0x6876,	// (0x0006e2e3) phacti_term_pane_t1_ParamLimits

0x6876,	// (0x0006e2e3) phacti_term_pane_t1

0xec3e,	// (0x000766ab) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec46,	// (0x000766b3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9d,	// (0x0007770a) popup_sp_fs_calendar_preview_list_single_pane_g

0xec4e,	// (0x000766bb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec4e,	// (0x000766bb) popup_sp_fs_calendar_preview_list_single_pane_t1

0xec64,	// (0x000766d1) aid_popup_sp_fs_bg_corner_pane

0x01d7,	// (0x00067c44) popup_sp_fs_calendar_preview_bg_pane_g1

0x455a,	// (0x0006bfc7) popup_sp_fs_calendar_preview_bg_pane

0xec6c,	// (0x000766d9) popup_sp_fs_calendar_preview_list_pane

0x0ca9,	// (0x00068716) bg_main_sp_fs_cale_pane_ParamLimits

0x0ca9,	// (0x00068716) bg_main_sp_fs_cale_pane

0x68a9,	// (0x0006e316) listscroll_cale_mrui_pane_ParamLimits

0x68a9,	// (0x0006e316) listscroll_cale_mrui_pane

0x68be,	// (0x0006e32b) listscroll_sp_fs_schedule_track_pane

0x68c7,	// (0x0006e334) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x68c7,	// (0x0006e334) main_sp_fs_ctrlbar_pane_cp01

0xec74,	// (0x000766e1) main_sp_fs_ribbon_pane

0x68da,	// (0x0006e347) popup_sp_fs_cale_preview_window

0x3351,	// (0x0006adbe) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3351,	// (0x0006adbe) list_single_sp_fs_schedule_track_pane

0x506d,	// (0x0006cada) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x506d,	// (0x0006cada) bg_sp_fs_highlight_list_pane_cp03

0xd8ce,	// (0x0007533b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd8ce,	// (0x0007533b) list_single_sp_fs_schedule_track_pane_g1

0xd8da,	// (0x00075347) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd8da,	// (0x00075347) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca2,	// (0x0007770f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca2,	// (0x0007770f) list_single_sp_fs_schedule_track_pane_g

0xd8e6,	// (0x00075353) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd8e6,	// (0x00075353) list_single_sp_fs_schedule_track_pane_t1

0xd904,	// (0x00075371) sp_fs_schedule_track_pane_ParamLimits

0xd904,	// (0x00075371) sp_fs_schedule_track_pane

0xec7c,	// (0x000766e9) sp_fs_schedule_track_pane_g1

0xec84,	// (0x000766f1) sp_fs_schedule_track_pane_g2

0xec8c,	// (0x000766f9) sp_fs_schedule_track_pane_g3

0xec94,	// (0x00076701) sp_fs_schedule_track_pane_g4

0xec9c,	// (0x00076709) sp_fs_schedule_track_pane_g5

0x0004,

0xfca7,	// (0x00077714) sp_fs_schedule_track_pane_g

0x37ac,	// (0x0006b219) bg_sp_fs_schedule_viewer_highlight_g1

0x03ec,	// (0x00067e59) bg_sp_fs_schedule_viewer_highlight_g2

0x37b4,	// (0x0006b221) bg_sp_fs_schedule_viewer_highlight_g3

0x37bc,	// (0x0006b229) bg_sp_fs_schedule_viewer_highlight_g4

0x39e0,	// (0x0006b44d) bg_sp_fs_schedule_viewer_highlight_g5

0x37cc,	// (0x0006b239) bg_sp_fs_schedule_viewer_highlight_g6

0x37d4,	// (0x0006b241) bg_sp_fs_schedule_viewer_highlight_g7

0x37dc,	// (0x0006b249) bg_sp_fs_schedule_viewer_highlight_g8

0x03cc,	// (0x00067e39) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb2,	// (0x0007771f) bg_sp_fs_schedule_viewer_highlight_g

0x455a,	// (0x0006bfc7) bg_main_sp_fs_ribbon_pane

0xd916,	// (0x00075383) main_sp_fs_ribbon_pane_g1

0xeca4,	// (0x00076711) main_sp_fs_ribbon_pane_t1

0xd91f,	// (0x0007538c) main_sp_fs_ribbon_pane_t2

0xecb3,	// (0x00076720) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc5,	// (0x00077732) main_sp_fs_ribbon_pane_t

0xecc2,	// (0x0007672f) main_sp_fs_ribbon_scheduler_pane

0xecca,	// (0x00076737) bg_main_sp_fs_ribbon_pane_g1

0xecd3,	// (0x00076740) bg_main_sp_fs_ribbon_pane_g2

0xecdc,	// (0x00076749) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfccc,	// (0x00077739) bg_main_sp_fs_ribbon_pane_g

0xece4,	// (0x00076751) main_sp_fs_ribbon_scheduler_pane_g1

0xeced,	// (0x0007675a) main_sp_fs_ribbon_scheduler_pane_g2

0xecf6,	// (0x00076763) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd3,	// (0x00077740) main_sp_fs_ribbon_scheduler_pane_g

0xecff,	// (0x0007676c) list_cale_mrui_pane

0xd92e,	// (0x0007539b) sp_fs_scroll_pane_cp07_ParamLimits

0xd92e,	// (0x0007539b) sp_fs_scroll_pane_cp07

0xd94a,	// (0x000753b7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd94a,	// (0x000753b7) bg_sp_fs_schedule_viewer_highlight

0xed0c,	// (0x00076779) list_single_sp_fs_schedule_track_pane_cp01

0xed14,	// (0x00076781) list_sp_fs_schedule_track_pane

0xed1c,	// (0x00076789) sp_fs_scroll_pane_cp06_ParamLimits

0xed1c,	// (0x00076789) sp_fs_scroll_pane_cp06

0x01d7,	// (0x00067c44) bgmain_sp_fs_calendar_pane_g1

0x68ec,	// (0x0006e359) list_single_cale_mrui_pane_ParamLimits

0x68ec,	// (0x0006e359) list_single_cale_mrui_pane

0x690f,	// (0x0006e37c) list_single_cale_mrui_row_pane_ParamLimits

0x690f,	// (0x0006e37c) list_single_cale_mrui_row_pane

0x691c,	// (0x0006e389) list_single_cale_mrui_row_pane_g1_ParamLimits

0x691c,	// (0x0006e389) list_single_cale_mrui_row_pane_g1

0x6954,	// (0x0006e3c1) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6954,	// (0x0006e3c1) list_single_cale_mrui_row_pane_t1

0x6966,	// (0x0006e3d3) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6966,	// (0x0006e3d3) list_single_cale_mrui_row_pane_t2

0x69cc,	// (0x0006e439) list_single_cale_mrui_row_pane_t3_ParamLimits

0x69cc,	// (0x0006e439) list_single_cale_mrui_row_pane_t3

0x69fb,	// (0x0006e468) list_single_cale_mrui_row_pane_t4_ParamLimits

0x69fb,	// (0x0006e468) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce1,	// (0x0007774e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce1,	// (0x0007774e) list_single_cale_mrui_row_pane_t

0x6a2c,	// (0x0006e499) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6a2c,	// (0x0006e499) list_single_cmail_header_editor_pane_bg_cp01

0x6a4e,	// (0x0006e4bb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6a4e,	// (0x0006e4bb) list_single_cmail_header_editor_pane_bg_cp02

0xd957,	// (0x000753c4) main_radioblah_text_pane_t1_ParamLimits

0xd957,	// (0x000753c4) main_radioblah_text_pane_t1

0xed3b,	// (0x000767a8) cam6_indi_pane_cp01

0xed43,	// (0x000767b0) cam6_mode_pane_cp01

0xed4b,	// (0x000767b8) cam6_pano_pane

0xed54,	// (0x000767c1) cam6_zoom_pane_cp01

0xed5e,	// (0x000767cb) cam6_pano_image_pane

0xed67,	// (0x000767d4) cam6_pano_pane_g1

0x448d,	// (0x0006befa) cam6_pano_pane_g2

0xed70,	// (0x000767dd) cam6_pano_pane_g3

0xed79,	// (0x000767e6) cam6_pano_pane_g4

0x29f6,	// (0x0006a463) cam6_pano_pane_g5

0xed82,	// (0x000767ef) cam6_pano_pane_g6

0xed8a,	// (0x000767f7) cam6_pano_pane_g7

0xed92,	// (0x000767ff) cam6_pano_pane_g8

0xed9b,	// (0x00076808) cam6_pano_pane_g9

0x0008,

0xfcea,	// (0x00077757) cam6_pano_pane_g

0x455a,	// (0x0006bfc7) main_browser_tag_pane

0xebf3,	// (0x00076660) grid_navstr_albumart_pane

0xeda6,	// (0x00076813) cell_navstr_albumart_pane_ParamLimits

0xeda6,	// (0x00076813) cell_navstr_albumart_pane

0xedc2,	// (0x0007682f) cell_navstr_albumart_pane_g1

0x1dff,	// (0x0006986c) cell_navstr_albumart_pane_g2

0x1e0f,	// (0x0006987c) cell_navstr_albumart_pane_g3

0x1e07,	// (0x00069874) cell_navstr_albumart_pane_g4

0x0003,

0xfcfd,	// (0x0007776a) cell_navstr_albumart_pane_g

0xd971,	// (0x000753de) bt_list_pane_ParamLimits

0xd971,	// (0x000753de) bt_list_pane

0xd98a,	// (0x000753f7) bt_list_pane_t1

0xd999,	// (0x00075406) bt_list_pane_t2

0x0001,

0xfd06,	// (0x00077773) bt_list_pane_t

0x455a,	// (0x0006bfc7) main_cale_prevew_pane

0xd9a8,	// (0x00075415) popup_cale_preview_window_ParamLimits

0xd9a8,	// (0x00075415) popup_cale_preview_window

0x48f1,	// (0x0006c35e) bg_popup_preview_window_pane_cp05_ParamLimits

0x48f1,	// (0x0006c35e) bg_popup_preview_window_pane_cp05

0xedca,	// (0x00076837) list_cale_preview_pane_ParamLimits

0xedca,	// (0x00076837) list_cale_preview_pane

0xd9c5,	// (0x00075432) list_double_cale_preview_pane_ParamLimits

0xd9c5,	// (0x00075432) list_double_cale_preview_pane

0xd9d9,	// (0x00075446) list_single_cale_preview_pane_ParamLimits

0xd9d9,	// (0x00075446) list_single_cale_preview_pane

0xd9f1,	// (0x0007545e) list_single_cale_preview_pane_g1

0xd9f9,	// (0x00075466) list_single_cale_preview_pane_t1_ParamLimits

0xd9f9,	// (0x00075466) list_single_cale_preview_pane_t1

0xda0e,	// (0x0007547b) list_double_cale_preview_pane_g1

0xda16,	// (0x00075483) list_double_cale_preview_pane_t1_ParamLimits

0xda16,	// (0x00075483) list_double_cale_preview_pane_t1

0xda2b,	// (0x00075498) list_double_cale_preview_pane_t2_ParamLimits

0xda2b,	// (0x00075498) list_double_cale_preview_pane_t2

0x0001,

0xfd0b,	// (0x00077778) list_double_cale_preview_pane_t_ParamLimits

0xfd0b,	// (0x00077778) list_double_cale_preview_pane_t

0x455a,	// (0x0006bfc7) main_ezdial_pane

0x48f1,	// (0x0006c35e) main_sp_fs_email_pane_ParamLimits

0xd597,	// (0x00075004) cmail_ddmenu_btn01_pane_ParamLimits

0xd597,	// (0x00075004) cmail_ddmenu_btn01_pane

0xd5b4,	// (0x00075021) cmail_ddmenu_btn02_pane_ParamLimits

0xd5b4,	// (0x00075021) cmail_ddmenu_btn02_pane

0xd5d2,	// (0x0007503f) cmail_ddmenu_btn03_pane_ParamLimits

0xd5d2,	// (0x0007503f) cmail_ddmenu_btn03_pane

0xd673,	// (0x000750e0) main_sp_fs_ctrlbar_pane_ParamLimits

0xd68d,	// (0x000750fa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd7a1,	// (0x0007520e) list_cmail_body_pane_ParamLimits

0x4c6a,	// (0x0006c6d7) bg_button_pane_cp12

0x4c73,	// (0x0006c6e0) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4c73,	// (0x0006c6e0) list_single_cmail_header_detail_pane_g3

0x6833,	// (0x0006e2a0) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6833,	// (0x0006e2a0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc8e,	// (0x000776fb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc8e,	// (0x000776fb) list_single_cmail_header_detail_pane_t

0x688b,	// (0x0006e2f8) phacti_term_pane_t2_ParamLimits

0x688b,	// (0x0006e2f8) phacti_term_pane_t2

0x0001,

0xfc98,	// (0x00077705) phacti_term_pane_t_ParamLimits

0xfc98,	// (0x00077705) phacti_term_pane_t

0xedd6,	// (0x00076843) aid_size_list_single_double

0xda43,	// (0x000754b0) popup_ezdial_listscroll_window

0xda65,	// (0x000754d2) popup_number_entry_window_cp01

0x0182,	// (0x00067bef) bg_popup_call_pane_cp09

0xede2,	// (0x0007684f) ezdial_list_pane

0xedea,	// (0x00076857) scroll_pane_cp23

0x2296,	// (0x00069d03) bg_button_pane_cp028_ParamLimits

0x2296,	// (0x00069d03) bg_button_pane_cp028

0xda73,	// (0x000754e0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xda73,	// (0x000754e0) cmail_ddmenu_btn01_pane_g1

0xda85,	// (0x000754f2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xda85,	// (0x000754f2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd10,	// (0x0007777d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd10,	// (0x0007777d) cmail_ddmenu_btn01_pane_g

0xedf2,	// (0x0007685f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xedf2,	// (0x0007685f) cmail_ddmenu_btn01_pane_t1

0x0ca9,	// (0x00068716) bg_button_pane_cp029_ParamLimits

0x0ca9,	// (0x00068716) bg_button_pane_cp029

0xda91,	// (0x000754fe) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xda91,	// (0x000754fe) cmail_ddmenu_btn02_pane_g1

0xdaa9,	// (0x00075516) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdaa9,	// (0x00075516) cmail_ddmenu_btn02_pane_t1

0x506d,	// (0x0006cada) bg_button_pane_cp031_ParamLimits

0x506d,	// (0x0006cada) bg_button_pane_cp031

0xda91,	// (0x000754fe) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xda91,	// (0x000754fe) cmail_ddmenu_btn03_pane_g1

0xdaa9,	// (0x00075516) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdaa9,	// (0x00075516) cmail_ddmenu_btn03_pane_t1

0xb1aa,	// (0x00072c17) cell_dialer2_keypad_pane_t1_ParamLimits

0xb1c4,	// (0x00072c31) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb1c4,	// (0x00072c31) cell_dialer2_keypad_pane_t1_copy1

0xcd5f,	// (0x000747cc) ncimui_group_button_pane

0x48f1,	// (0x0006c35e) main_sp_fs_calendar_pane_ParamLimits

0xd7bb,	// (0x00075228) list_single_cmail_header_caption_pane_ParamLimits

0x68a0,	// (0x0006e30d) aid_recal_txt_sm_pane

0x455a,	// (0x0006bfc7) mian_recal_day_pane

0x68da,	// (0x0006e347) popup_sp_fs_cale_preview_window_ParamLimits

0xee08,	// (0x00076875) list_recal_day_pane

0x6a88,	// (0x0006e4f5) list_single_recal_day_pane_ParamLimits

0x6a88,	// (0x0006e4f5) list_single_recal_day_pane

0xee2f,	// (0x0007689c) list_single_recal_day_pane_g1_ParamLimits

0xee2f,	// (0x0007689c) list_single_recal_day_pane_g1

0x6a9a,	// (0x0006e507) list_single_recal_day_pane_g2_ParamLimits

0x6a9a,	// (0x0006e507) list_single_recal_day_pane_g2

0x6aa6,	// (0x0006e513) list_single_recal_day_pane_g3_ParamLimits

0x6aa6,	// (0x0006e513) list_single_recal_day_pane_g3

0x6ab2,	// (0x0006e51f) list_single_recal_day_pane_g4_ParamLimits

0x6ab2,	// (0x0006e51f) list_single_recal_day_pane_g4

0x6ac0,	// (0x0006e52d) list_single_recal_day_pane_g5_ParamLimits

0x6ac0,	// (0x0006e52d) list_single_recal_day_pane_g5

0x6ad6,	// (0x0006e543) list_single_recal_day_pane_g6_ParamLimits

0x6ad6,	// (0x0006e543) list_single_recal_day_pane_g6

0x0004,

0xfd1f,	// (0x0007778c) list_single_recal_day_pane_g_ParamLimits

0xfd1f,	// (0x0007778c) list_single_recal_day_pane_g

0x6aea,	// (0x0006e557) list_single_recal_day_pane_t1

0x6afc,	// (0x0006e569) list_single_recal_day_pane_t2

0x0001,

0xfd2a,	// (0x00077797) list_single_recal_day_pane_t

0xdacd,	// (0x0007553a) ncimui_query_button_pane_ParamLimits

0xdacd,	// (0x0007553a) ncimui_query_button_pane

0xdadd,	// (0x0007554a) ncimui_query_button_pane_t1_ParamLimits

0xdadd,	// (0x0007554a) ncimui_query_button_pane_t1

0xee3b,	// (0x000768a8) ncimui_query_button_pane_t2_ParamLimits

0xee3b,	// (0x000768a8) ncimui_query_button_pane_t2

0x0001,

0xfd2f,	// (0x0007779c) ncimui_query_button_pane_t_ParamLimits

0xfd2f,	// (0x0007779c) ncimui_query_button_pane_t

0xdaf0,	// (0x0007555d) query_button_pane_ParamLimits

0xdaf0,	// (0x0007555d) query_button_pane

0x455a,	// (0x0006bfc7) bg_button_pane_cp0028

0xee4e,	// (0x000768bb) query_button_pane_t1

0x9c5e,	// (0x000716cb) main_tport_pane_ParamLimits

0xd69e,	// (0x0007510b) bg_popup_window_pane_cp01_ParamLimits

0xd69e,	// (0x0007510b) bg_popup_window_pane_cp01

0xd6ac,	// (0x00075119) heading_pane_cp08_ParamLimits

0xd6ac,	// (0x00075119) heading_pane_cp08

0xd6ba,	// (0x00075127) heading_pane_cp07_ParamLimits

0xd6ba,	// (0x00075127) heading_pane_cp07

0xd72a,	// (0x00075197) cell_tport_appsw_pane_g2

0x0002,

0xfc7b,	// (0x000776e8) cell_tport_appsw_pane_g

0x6037,	// (0x0006daa4) input_candi_list_open_g1

0x0606,	// (0x00068073) list_cale_time_pane_g6_ParamLimits

0x0606,	// (0x00068073) list_cale_time_pane_g6

0xa149,	// (0x00071bb6) aid_size_touch_calib_1_ParamLimits

0xa149,	// (0x00071bb6) aid_size_touch_calib_1

0xa155,	// (0x00071bc2) aid_size_touch_calib_2_ParamLimits

0xa155,	// (0x00071bc2) aid_size_touch_calib_2

0xa163,	// (0x00071bd0) aid_size_touch_calib_3_ParamLimits

0xa163,	// (0x00071bd0) aid_size_touch_calib_3

0xa173,	// (0x00071be0) aid_size_touch_calib_4_ParamLimits

0xa173,	// (0x00071be0) aid_size_touch_calib_4

0xa181,	// (0x00071bee) main_touch_calib_button_group_pane_ParamLimits

0xa181,	// (0x00071bee) main_touch_calib_button_group_pane

0xa18f,	// (0x00071bfc) main_touch_calib_pane_g1_ParamLimits

0xa19b,	// (0x00071c08) main_touch_calib_pane_g2_ParamLimits

0xa1a7,	// (0x00071c14) main_touch_calib_pane_g3_ParamLimits

0xa1b3,	// (0x00071c20) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x00077131) main_touch_calib_pane_g_ParamLimits

0xa1bf,	// (0x00071c2c) main_touch_calib_pane_t1_ParamLimits

0xa1d6,	// (0x00071c43) main_touch_calib_pane_t2_ParamLimits

0xa1ef,	// (0x00071c5c) main_touch_calib_pane_t3_ParamLimits

0xa205,	// (0x00071c72) main_touch_calib_pane_t4_ParamLimits

0xa21b,	// (0x00071c88) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x0007713a) main_touch_calib_pane_t_ParamLimits

0x27a9,	// (0x0006a216) list_single_fp_cale_pane_g3_ParamLimits

0x27a9,	// (0x0006a216) list_single_fp_cale_pane_g3

0x48f1,	// (0x0006c35e) bg_button_pane_cp012_ParamLimits

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp03_ParamLimits

0xc034,	// (0x00073aa1) cell_vitu2_function_top_pane_g1_ParamLimits

0x48f1,	// (0x0006c35e) bg_vkb2_func_pane_cp04_ParamLimits

0xcce5,	// (0x00074752) main_ncimui_button_group_pane_ParamLimits

0xcce5,	// (0x00074752) main_ncimui_button_group_pane

0xcd4d,	// (0x000747ba) main_ncimui_pane_t3_ParamLimits

0xcd4d,	// (0x000747ba) main_ncimui_pane_t3

0xec09,	// (0x00076676) phacti_button_group_pane

0xedd6,	// (0x00076843) aid_size_list_single_double_ParamLimits

0xda43,	// (0x000754b0) popup_ezdial_listscroll_window_ParamLimits

0xda65,	// (0x000754d2) popup_number_entry_window_cp01_ParamLimits

0xdafd,	// (0x0007556a) phacti_button_pane_ParamLimits

0xdafd,	// (0x0007556a) phacti_button_pane

0x455a,	// (0x0006bfc7) bg_button_pane_cp14

0xee5c,	// (0x000768c9) phacti_button_pane_t1

0xdb0e,	// (0x0007557b) main_touch_calib_button_pane_ParamLimits

0xdb0e,	// (0x0007557b) main_touch_calib_button_pane

0x50ed,	// (0x0006cb5a) bg_button_pane_cp18_ParamLimits

0x50ed,	// (0x0006cb5a) bg_button_pane_cp18

0xee6a,	// (0x000768d7) main_touch_calib_button_pane_t1_ParamLimits

0xee6a,	// (0x000768d7) main_touch_calib_button_pane_t1

0xee80,	// (0x000768ed) main_touch_calib_button_pane_t2_ParamLimits

0xee80,	// (0x000768ed) main_touch_calib_button_pane_t2

0x0001,

0xfd34,	// (0x000777a1) main_touch_calib_button_pane_t_ParamLimits

0xfd34,	// (0x000777a1) main_touch_calib_button_pane_t

0x455a,	// (0x0006bfc7) cell_ncimui_button_pane

0x455a,	// (0x0006bfc7) bg_button_pane_cp032

0xee9e,	// (0x0007690b) cell_ncimui_button_pane_t1

0xb220,	// (0x00072c8d) image3_infobar_pane_ParamLimits

0xb220,	// (0x00072c8d) image3_infobar_pane

0xd11e,	// (0x00074b8b) fs_bigclock_status_pane_ParamLimits

0xd11e,	// (0x00074b8b) fs_bigclock_status_pane

0xd12b,	// (0x00074b98) main_fs_bigclock_clock_pane_ParamLimits

0xd12b,	// (0x00074b98) main_fs_bigclock_clock_pane

0xd147,	// (0x00074bb4) main_fs_bigclock_indi_pane_ParamLimits

0xd147,	// (0x00074bb4) main_fs_bigclock_indi_pane

0xd175,	// (0x00074be2) main_fs_bigclock_swipe_pane_ParamLimits

0xd175,	// (0x00074be2) main_fs_bigclock_swipe_pane

0x455a,	// (0x0006bfc7) main_fs_clock_dumped_data

0xd1af,	// (0x00074c1c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd1af,	// (0x00074c1c) list_single_fs_bigclock_indicator_pane_g1

0xd1ce,	// (0x00074c3b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd1ce,	// (0x00074c3b) list_single_fs_bigclock_indicator_pane_g2

0xd1e8,	// (0x00074c55) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd1e8,	// (0x00074c55) list_single_fs_bigclock_indicator_pane_g3

0xd204,	// (0x00074c71) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd204,	// (0x00074c71) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd5,	// (0x00077642) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd5,	// (0x00077642) list_single_fs_bigclock_indicator_pane_g

0xd233,	// (0x00074ca0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd233,	// (0x00074ca0) list_single_fs_bigclock_indicator_pane_t1

0xd25b,	// (0x00074cc8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd25b,	// (0x00074cc8) list_single_fs_bigclock_indicator_pane_t2

0xd283,	// (0x00074cf0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd283,	// (0x00074cf0) list_single_fs_bigclock_indicator_pane_t3

0xd2ab,	// (0x00074d18) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd2ab,	// (0x00074d18) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe0,	// (0x0007764d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe0,	// (0x0007764d) list_single_fs_bigclock_indicator_pane_t

0xeeac,	// (0x00076919) image3_infobar_fav_pane_ParamLimits

0xeeac,	// (0x00076919) image3_infobar_fav_pane

0xeebc,	// (0x00076929) image3_infobar_loc_pane_ParamLimits

0xeebc,	// (0x00076929) image3_infobar_loc_pane

0xeed2,	// (0x0007693f) image3_infobar_time_pane_ParamLimits

0xeed2,	// (0x0007693f) image3_infobar_time_pane

0x01d7,	// (0x00067c44) image3_infobar_time_pane_g1

0xeee2,	// (0x0007694f) image3_infobar_time_pane_t1

0x01d7,	// (0x00067c44) image3_infobar_loc_pane_g1

0xeef0,	// (0x0007695d) image3_infobar_loc_pane_g2

0x0001,

0xfd39,	// (0x000777a6) image3_infobar_loc_pane_g

0xeef8,	// (0x00076965) image3_infobar_loc_pane_t1

0x01d7,	// (0x00067c44) image3_infobar_fav_pane_g1

0xef06,	// (0x00076973) image3_infobar_fav_pane_g2

0x0001,

0xfd3e,	// (0x000777ab) image3_infobar_fav_pane_g

0xef0e,	// (0x0007697b) fs_bigclock_status_battery_pane

0xef17,	// (0x00076984) fs_bigclock_status_signal_pane

0xef20,	// (0x0007698d) fs_bigclock_status_title_pane

0xef29,	// (0x00076996) fs_bigclock_status_signal_pane_g1

0xef32,	// (0x0007699f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd43,	// (0x000777b0) fs_bigclock_status_signal_pane_g

0xef3a,	// (0x000769a7) fs_bigclock_status_battery_pane_g1

0xef43,	// (0x000769b0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd48,	// (0x000777b5) fs_bigclock_status_battery_pane_g

0xef4b,	// (0x000769b8) fs_bigclock_status_title_pane_t1

0xdb1e,	// (0x0007558b) main_fs_bigclock_clock_pane_g1

0xdb1e,	// (0x0007558b) main_fs_bigclock_clock_pane_g2

0xdb2d,	// (0x0007559a) main_fs_bigclock_clock_pane_g3

0xdb2d,	// (0x0007559a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4d,	// (0x000777ba) main_fs_bigclock_clock_pane_g

0xdb3d,	// (0x000755aa) main_fs_bigclock_clock_pane_t1

0xdb52,	// (0x000755bf) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd56,	// (0x000777c3) main_fs_bigclock_clock_pane_t

0xef59,	// (0x000769c6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xef59,	// (0x000769c6) list_single_fs_bigclock_indicator_pane

0xef6a,	// (0x000769d7) list_single_fs_bigclock_pane_ParamLimits

0xef6a,	// (0x000769d7) list_single_fs_bigclock_pane

0xef90,	// (0x000769fd) main_fs_bigclock_indicator_pane_t1

0xef9f,	// (0x00076a0c) list_single_fs_bigclock_pane_g1

0xefa7,	// (0x00076a14) list_single_fs_bigclock_pane_t1

0x01d7,	// (0x00067c44) main_fs_bigclock_swipe_pane_g1

0xefea,	// (0x00076a57) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd67,	// (0x000777d4) main_fs_bigclock_swipe_pane_g

0xeff2,	// (0x00076a5f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeff2,	// (0x00076a5f) main_fs_bigclock_swipe_pane_t1

0x8dd3,	// (0x00070840) call_type_pane_ParamLimits

0x455a,	// (0x0006bfc7) main_btmg_pane

0x6948,	// (0x0006e3b5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6948,	// (0x0006e3b5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcda,	// (0x00077747) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcda,	// (0x00077747) list_single_cale_mrui_row_pane_g

0x6a76,	// (0x0006e4e3) list_recal_vselct_arw_lo_pane

0xee27,	// (0x00076894) list_recal_vselct_arw_up_pane

0x6a7e,	// (0x0006e4eb) list_recal_vselct_pane

0xdba9,	// (0x00075616) btmg_button_pane

0xdbb5,	// (0x00075622) main_btmg_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp044

0xf00f,	// (0x00076a7c) btmg_button_pane_t1

0x1f51,	// (0x000699be) aid_listscroll_gen

0x48f1,	// (0x0006c35e) main_cntbar_detail_pane

0x4c1a,	// (0x0006c687) list_cmail_folder_pane

0x0766,	// (0x000681d3) sp_fs_scroll_pane_cp03_ParamLimits

0x6b0e,	// (0x0006e57b) list_single_fs_dyc_pane_cp01_ParamLimits

0x6b0e,	// (0x0006e57b) list_single_fs_dyc_pane_cp01

0xf01d,	// (0x00076a8a) aid_size_cmail_indent

0x6b2b,	// (0x0006e598) list_single_dyc_row_pane_cp01

0xdbdd,	// (0x0007564a) cntbar_detail_list_pane_ParamLimits

0xdbdd,	// (0x0007564a) cntbar_detail_list_pane

0xdc1d,	// (0x0007568a) main_cntbar_detail_cont_pane_ParamLimits

0xdc1d,	// (0x0007568a) main_cntbar_detail_cont_pane

0x8dc7,	// (0x00070834) scroll_pane_cp032_ParamLimits

0x8dc7,	// (0x00070834) scroll_pane_cp032

0xdc29,	// (0x00075696) cntbar_detail_list_event_pane_ParamLimits

0xdc29,	// (0x00075696) cntbar_detail_list_event_pane

0xdbeb,	// (0x00075658) cntbar_detail_list_shct_pane

0x043a,	// (0x00067ea7) aid_list_gen

0xf026,	// (0x00076a93) aid_scroll

0xf02f,	// (0x00076a9c) aid_size_touch_scroll_bar

0xdc39,	// (0x000756a6) aid_list_double

0xdc42,	// (0x000756af) aid_list_single

0xdc42,	// (0x000756af) aid_list_single_lg

0x6b34,	// (0x0006e5a1) aid_list_z_g_a_sm

0xdc4b,	// (0x000756b8) aid_list_z_g_d

0x6b3c,	// (0x0006e5a9) aid_txt_z_prm

0x6b4a,	// (0x0006e5b7) aid_txt_z_prm_cp01

0x6b58,	// (0x0006e5c5) aid_txt_z_sec

0xdc53,	// (0x000756c0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdc53,	// (0x000756c0) main_cntbar_detail_cont_pane_g1

0xdc60,	// (0x000756cd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdc60,	// (0x000756cd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6c,	// (0x000777d9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6c,	// (0x000777d9) main_cntbar_detail_cont_pane_g

0xf038,	// (0x00076aa5) main_cntbar_detail_cont_pane_t1

0xf046,	// (0x00076ab3) main_cntbar_detail_cont_pane_t2

0xf054,	// (0x00076ac1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd71,	// (0x000777de) main_cntbar_detail_cont_pane_t

0xdc6c,	// (0x000756d9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdc6c,	// (0x000756d9) cell_cntbar_detail_list_shct_pane

0xf062,	// (0x00076acf) cntbar_detail_list_shct_pane_g1

0x3073,	// (0x0006aae0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd78,	// (0x000777e5) cntbar_detail_list_shct_pane_g

0xdc80,	// (0x000756ed) cntbar_detail_list_event_pane_g1_ParamLimits

0xdc80,	// (0x000756ed) cntbar_detail_list_event_pane_g1

0xdc8c,	// (0x000756f9) cntbar_detail_list_event_pane_g2_ParamLimits

0xdc8c,	// (0x000756f9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7d,	// (0x000777ea) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7d,	// (0x000777ea) cntbar_detail_list_event_pane_g

0xdcfa,	// (0x00075767) cntbar_detail_list_event_pane_t1_ParamLimits

0xdcfa,	// (0x00075767) cntbar_detail_list_event_pane_t1

0xdd0f,	// (0x0007577c) cntbar_detail_list_event_pane_t2_ParamLimits

0xdd0f,	// (0x0007577c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8a,	// (0x000777f7) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8a,	// (0x000777f7) cntbar_detail_list_event_pane_t

0x01d7,	// (0x00067c44) cell_cntbar_detail_list_shct_pane_g1

0x916b,	// (0x00070bd8) navi_pane_mv_g3

0x48f1,	// (0x0006c35e) main_cntbar_detail_pane_ParamLimits

0x455a,	// (0x0006bfc7) main_notif_wgt_pane

0xaea2,	// (0x0007290f) aid_tch_main_mp4_pane_g4

0xb10b,	// (0x00072b78) popup_slider_window_cp02

0x6a6c,	// (0x0006e4d9) list_recal_day_event_pane

0xdbbd,	// (0x0007562a) cntbar_detail_btn_pane_ParamLimits

0xdbbd,	// (0x0007562a) cntbar_detail_btn_pane

0xdbcd,	// (0x0007563a) cntbar_detail_btn_pane_cp01_ParamLimits

0xdbcd,	// (0x0007563a) cntbar_detail_btn_pane_cp01

0xdbeb,	// (0x00075658) cntbar_detail_list_shct_pane_ParamLimits

0xdbf7,	// (0x00075664) cntbar_detail_pane_g1_ParamLimits

0xdbf7,	// (0x00075664) cntbar_detail_pane_g1

0xdc07,	// (0x00075674) cntbar_detail_pane_t1_ParamLimits

0xdc07,	// (0x00075674) cntbar_detail_pane_t1

0xdc98,	// (0x00075705) cntbar_detail_list_event_pane_g3_ParamLimits

0xdc98,	// (0x00075705) cntbar_detail_list_event_pane_g3

0xdcb0,	// (0x0007571d) cntbar_detail_list_event_pane_g4_ParamLimits

0xdcb0,	// (0x0007571d) cntbar_detail_list_event_pane_g4

0xdcc8,	// (0x00075735) cntbar_detail_list_event_pane_g5_ParamLimits

0xdcc8,	// (0x00075735) cntbar_detail_list_event_pane_g5

0xdce0,	// (0x0007574d) cntbar_detail_list_event_pane_g6_ParamLimits

0xdce0,	// (0x0007574d) cntbar_detail_list_event_pane_g6

0xdd24,	// (0x00075791) cntbar_detail_list_event_pane_t3_ParamLimits

0xdd24,	// (0x00075791) cntbar_detail_list_event_pane_t3

0xdd36,	// (0x000757a3) popup_notif_wgt_window_ParamLimits

0xdd36,	// (0x000757a3) popup_notif_wgt_window

0xdd46,	// (0x000757b3) popup_submenu_window_cp01_ParamLimits

0xdd46,	// (0x000757b3) popup_submenu_window_cp01

0x0182,	// (0x00067bef) bg_popup_window_pane_cp10

0x307c,	// (0x0006aae9) listscroll_notif_wgt_pane

0x308e,	// (0x0006aafb) list_notif_wgt_window

0x3097,	// (0x0006ab04) scroll_pane_cp033

0xdd56,	// (0x000757c3) list_notif_wgt_row_pane_ParamLimits

0xdd56,	// (0x000757c3) list_notif_wgt_row_pane

0x30a0,	// (0x0006ab0d) aid_size_list_notif_wgt_del

0x30ad,	// (0x0006ab1a) list_notif_wgt_row_pane_g1

0x30b9,	// (0x0006ab26) list_notif_wgt_row_pane_g2

0x30c8,	// (0x0006ab35) list_notif_wgt_row_pane_g3

0x0002,

0xfd91,	// (0x000777fe) list_notif_wgt_row_pane_g

0x30d5,	// (0x0006ab42) list_notif_wgt_row_pane_t1

0x30eb,	// (0x0006ab58) list_notif_wgt_row_pane_t2

0x30fd,	// (0x0006ab6a) list_notif_wgt_row_pane_t3

0x0002,

0xfd98,	// (0x00077805) list_notif_wgt_row_pane_t

0x39fa,	// (0x0006b467) list_recal_day_event_pane_g1

0x310f,	// (0x0006ab7c) list_recal_day_event_pane_t1

0x455a,	// (0x0006bfc7) bg_button_pane_cp045

0xdd6a,	// (0x000757d7) cntbar_detail_btn_pane_t1

0x0ca9,	// (0x00068716) main_callh_pane_ParamLimits

0x0ca9,	// (0x00068716) main_callh_pane

0x455a,	// (0x0006bfc7) main_coverflow0_pane

0x455a,	// (0x0006bfc7) main_wgtman_pane

0xd18d,	// (0x00074bfa) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd18d,	// (0x00074bfa) main_fs_bigclock_unlock_btn_pane

0xd722,	// (0x0007518f) bg_button_pane_cp16

0xd732,	// (0x0007519f) cell_tport_appsw_pane_g3

0xdd78,	// (0x000757e5) cf0_flow_pane_ParamLimits

0xdd78,	// (0x000757e5) cf0_flow_pane

0x311e,	// (0x0006ab8b) listscroll_cf0_pane

0x3129,	// (0x0006ab96) main_cf0_pane_g1

0xdd87,	// (0x000757f4) main_cf0_pane_t1_ParamLimits

0xdd87,	// (0x000757f4) main_cf0_pane_t1

0xdd9b,	// (0x00075808) main_cf0_pane_t2_ParamLimits

0xdd9b,	// (0x00075808) main_cf0_pane_t2

0x0001,

0xfda4,	// (0x00077811) main_cf0_pane_t_ParamLimits

0xfda4,	// (0x00077811) main_cf0_pane_t

0x313b,	// (0x0006aba8) scroll_pane_cp11

0xddaf,	// (0x0007581c) cf0_flow_pane_g1

0xddb7,	// (0x00075824) cf0_flow_pane_g2

0x0001,

0xfda9,	// (0x00077816) cf0_flow_pane_g

0xddbf,	// (0x0007582c) cf0_flow_pane_t1

0x455a,	// (0x0006bfc7) main_call6_pane

0x455a,	// (0x0006bfc7) main_calllock_pane

0xddcd,	// (0x0007583a) call6_btn_grp_pane_ParamLimits

0xddcd,	// (0x0007583a) call6_btn_grp_pane

0xddda,	// (0x00075847) call6_pane_g1_ParamLimits

0xddda,	// (0x00075847) call6_pane_g1

0xddea,	// (0x00075857) popup_call6_1st_window_ParamLimits

0xddea,	// (0x00075857) popup_call6_1st_window

0xddfa,	// (0x00075867) popup_call6_2nd_window_ParamLimits

0xddfa,	// (0x00075867) popup_call6_2nd_window

0xde0a,	// (0x00075877) cell_call6_btn_pane_ParamLimits

0xde0a,	// (0x00075877) cell_call6_btn_pane

0x0182,	// (0x00067bef) bg_popup_call2_in_pane_cp03

0x3146,	// (0x0006abb3) popup_call6_1st_window_g1

0x314e,	// (0x0006abbb) popup_call6_1st_window_g2

0x3156,	// (0x0006abc3) popup_call6_1st_window_g3

0x0002,

0xfdae,	// (0x0007781b) popup_call6_1st_window_g

0x315e,	// (0x0006abcb) popup_call6_1st_window_t1

0x316d,	// (0x0006abda) popup_call6_1st_window_t2

0x317d,	// (0x0006abea) popup_call6_1st_window_t3

0x0002,

0xfdb5,	// (0x00077822) popup_call6_1st_window_t

0x0182,	// (0x00067bef) bg_popup_call2_in_pane_cp04

0x318d,	// (0x0006abfa) popup_call6_2nd_window_g1

0x3195,	// (0x0006ac02) popup_call6_2nd_window_g2

0x319d,	// (0x0006ac0a) popup_call6_2nd_window_g3

0x0002,

0xfdbc,	// (0x00077829) popup_call6_2nd_window_g

0x31a5,	// (0x0006ac12) popup_call6_2nd_window_t1

0x455a,	// (0x0006bfc7) bg_button_pane_cp15

0x31eb,	// (0x0006ac58) cell_call6_btn_pane_g1

0xde1b,	// (0x00075888) cell_call6_btn_pane_t1

0xde2a,	// (0x00075897) listscroll_wgtman_pane_ParamLimits

0xde2a,	// (0x00075897) listscroll_wgtman_pane

0xde46,	// (0x000758b3) wgtman_btn_pane_ParamLimits

0xde46,	// (0x000758b3) wgtman_btn_pane

0x0a70,	// (0x000684dd) aid_scroll_copy1

0x31b4,	// (0x0006ac21) list_wgtman_pane

0xde7b,	// (0x000758e8) wgtman_btn_pane_g1_ParamLimits

0xde7b,	// (0x000758e8) wgtman_btn_pane_g1

0xdea3,	// (0x00075910) wgtman_btn_pane_t1_ParamLimits

0xdea3,	// (0x00075910) wgtman_btn_pane_t1

0x31be,	// (0x0006ac2b) wgtman_btn_pane_t2_ParamLimits

0x31be,	// (0x0006ac2b) wgtman_btn_pane_t2

0x0001,

0xfdc3,	// (0x00077830) wgtman_btn_pane_t_ParamLimits

0xfdc3,	// (0x00077830) wgtman_btn_pane_t

0xdeda,	// (0x00075947) listrow_wgtman_pane_ParamLimits

0xdeda,	// (0x00075947) listrow_wgtman_pane

0xdef1,	// (0x0007595e) listrow_wgtman_pane_g1

0xdefe,	// (0x0007596b) listrow_wgtman_pane_g2

0x0001,

0xfdc8,	// (0x00077835) listrow_wgtman_pane_g

0x6b66,	// (0x0006e5d3) listrow_wgtman_pane_t1

0x6b7e,	// (0x0006e5eb) listrow_wgtman_pane_t2

0x0001,

0xfdcd,	// (0x0007783a) listrow_wgtman_pane_t

0x6ba4,	// (0x0006e611) wait_bar_pane_cp09

0x31d5,	// (0x0006ac42) main_calllock_btn_pane

0x31df,	// (0x0006ac4c) main_calllock_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp17

0x31eb,	// (0x0006ac58) main_calllock_btn_pane_g1

0x31f4,	// (0x0006ac61) main_calllock_btn_pane_t1

0x455a,	// (0x0006bfc7) main_dialer3_pane

0x455a,	// (0x0006bfc7) main_fmrd2_pane

0x01d7,	// (0x00067c44) main_fs_bigclock_unlock_btn_pane_g1

0xdf24,	// (0x00075991) main_fs_bigclock_unlock_btn_pane_t1

0xdf32,	// (0x0007599f) area_fmrd2_info_pane_ParamLimits

0xdf32,	// (0x0007599f) area_fmrd2_info_pane

0xdf3e,	// (0x000759ab) area_fmrd2_visual_pane_ParamLimits

0xdf3e,	// (0x000759ab) area_fmrd2_visual_pane

0xdf4c,	// (0x000759b9) fmrd2_indi_pane_ParamLimits

0xdf4c,	// (0x000759b9) fmrd2_indi_pane

0xdf59,	// (0x000759c6) area_fmrd2_visual_pane_g1

0xdf61,	// (0x000759ce) area_fmrd2_visual_pane_t1

0xdf71,	// (0x000759de) area_fmrd2_visual_pane_t2

0xdf81,	// (0x000759ee) area_fmrd2_visual_pane_t3

0x0002,

0xfdd7,	// (0x00077844) area_fmrd2_visual_pane_t

0xdf91,	// (0x000759fe) area_fmrd2_info_pane_g1

0xdf99,	// (0x00075a06) area_fmrd2_info_pane_t1

0xdfa9,	// (0x00075a16) area_fmrd2_info_pane_t2

0xdfb9,	// (0x00075a26) area_fmrd2_info_pane_t3

0xdfc9,	// (0x00075a36) area_fmrd2_info_pane_t4

0x0003,

0xfdde,	// (0x0007784b) area_fmrd2_info_pane_t

0xdfd9,	// (0x00075a46) fmrd2_indi_pane_t1

0xdfe9,	// (0x00075a56) fmrd2_indi_pane_t2

0xdff9,	// (0x00075a66) fmrd2_indi_pane_t3

0x0002,

0xfde7,	// (0x00077854) fmrd2_indi_pane_t

0xd215,	// (0x00074c82) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd215,	// (0x00074c82) list_single_fs_bigclock_indicator_pane_g5

0xd2ca,	// (0x00074d37) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd2ca,	// (0x00074d37) list_single_fs_bigclock_indicator_pane_t5

0xd881,	// (0x000752ee) aid_cell_bcale_month_pane_ParamLimits

0xd881,	// (0x000752ee) aid_cell_bcale_month_pane

0xd89f,	// (0x0007530c) bcale_month_pane_ParamLimits

0xd89f,	// (0x0007530c) bcale_month_pane

0xd8bd,	// (0x0007532a) bcale_preview_pane_ParamLimits

0xd8bd,	// (0x0007532a) bcale_preview_pane

0xefa7,	// (0x00076a14) list_single_fs_bigclock_pane_t1_ParamLimits

0xefc6,	// (0x00076a33) list_single_fs_bigclock_pane_t2_ParamLimits

0xefc6,	// (0x00076a33) list_single_fs_bigclock_pane_t2

0x0001,

0xfd62,	// (0x000777cf) list_single_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x000777cf) list_single_fs_bigclock_pane_t

0xdf1c,	// (0x00075989) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd2,	// (0x0007783f) main_fs_bigclock_unlock_btn_pane_g

0xe009,	// (0x00075a76) aid_dia3_key_size_ParamLimits

0xe009,	// (0x00075a76) aid_dia3_key_size

0xe015,	// (0x00075a82) aid_dia3_listrow_size_ParamLimits

0xe015,	// (0x00075a82) aid_dia3_listrow_size

0xe025,	// (0x00075a92) dia3_keypad_fun_pane_ParamLimits

0xe025,	// (0x00075a92) dia3_keypad_fun_pane

0xe035,	// (0x00075aa2) dia3_keypad_num_pane_ParamLimits

0xe035,	// (0x00075aa2) dia3_keypad_num_pane

0xe045,	// (0x00075ab2) dia3_listscroll_pane_ParamLimits

0xe045,	// (0x00075ab2) dia3_listscroll_pane

0xe053,	// (0x00075ac0) dia3_numentry_pane_ParamLimits

0xe053,	// (0x00075ac0) dia3_numentry_pane

0x3203,	// (0x0006ac70) dia3_list_pane

0xe061,	// (0x00075ace) scroll_pane_cp12

0x455a,	// (0x0006bfc7) bg_dia3_numentry_pane

0xe06c,	// (0x00075ad9) dia3_numentry_pane_t1

0xe07b,	// (0x00075ae8) cell_dia3_key_num_pane

0xe083,	// (0x00075af0) cell_dia3_key0_fun_pane_ParamLimits

0xe083,	// (0x00075af0) cell_dia3_key0_fun_pane

0xe090,	// (0x00075afd) cell_dia3_key1_fun_pane_ParamLimits

0xe090,	// (0x00075afd) cell_dia3_key1_fun_pane

0xe09d,	// (0x00075b0a) dia3_listrow_pane

0x4349,	// (0x0006bdb6) bg_dia3_numentry_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp21

0xe0aa,	// (0x00075b17) cell_dia3_key_num_pane_t1

0xe0b8,	// (0x00075b25) cell_dia3_key_num_pane_t2

0xe0c7,	// (0x00075b34) cell_dia3_key_num_pane_t3

0xe0d6,	// (0x00075b43) cell_dia3_key_num_pane_t4

0x0003,

0xfdee,	// (0x0007785b) cell_dia3_key_num_pane_t

0x455a,	// (0x0006bfc7) bg_button_pane_cp19

0xe0e5,	// (0x00075b52) cell_dia3_key0_fun_pane_g1

0x455a,	// (0x0006bfc7) bg_button_pane_cp20

0xe0ed,	// (0x00075b5a) cell_dia3_key1_fun_pane_g1

0xe0f5,	// (0x00075b62) area_left_week_number_pane

0xe108,	// (0x00075b75) area_top_day_name_pane

0xe116,	// (0x00075b83) frame_month_view_pane

0x320e,	// (0x0006ac7b) grid_month_view_pane

0xe12b,	// (0x00075b98) cell_top_day_name_pane_ParamLimits

0xe12b,	// (0x00075b98) cell_top_day_name_pane

0xe147,	// (0x00075bb4) cell_area_left_week_number_pane_ParamLimits

0xe147,	// (0x00075bb4) cell_area_left_week_number_pane

0xe168,	// (0x00075bd5) cell_month_view_pane_ParamLimits

0xe168,	// (0x00075bd5) cell_month_view_pane

0x321c,	// (0x0006ac89) frm_month_g1

0xe194,	// (0x00075c01) frm_month_g2

0xe1a5,	// (0x00075c12) frm_month_g3

0xe1b6,	// (0x00075c23) frm_month_g4

0xe1c7,	// (0x00075c34) frm_month_g5

0xe1d8,	// (0x00075c45) frm_month_g6

0xe1eb,	// (0x00075c58) frm_month_g7

0x3229,	// (0x0006ac96) frm_month_g8

0xe1fe,	// (0x00075c6b) frm_month_g9

0xe20b,	// (0x00075c78) frm_month_g10

0xe218,	// (0x00075c85) frm_month_g11

0xe225,	// (0x00075c92) frm_month_g12

0xe232,	// (0x00075c9f) frm_month_g13

0xe241,	// (0x00075cae) frm_month_g14

0xe250,	// (0x00075cbd) frm_month_g15

0xe25f,	// (0x00075ccc) frm_month_g16

0x000f,

0xfdf7,	// (0x00077864) frm_month_g

0x3236,	// (0x0006aca3) cell_top_day_name_pane_t1

0xe26e,	// (0x00075cdb) cell_area_left_week_number_pane_g1

0xe27d,	// (0x00075cea) cell_area_left_week_number_pane_t1

0x507b,	// (0x0006cae8) cell_month_view_pane_g1

0xe293,	// (0x00075d00) cell_month_view_pane_t1

0x455a,	// (0x0006bfc7) main_fps_pane

0x4b23,	// (0x0006c590) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4b23,	// (0x0006c590) cmail_ddmenu_btn02_pane_cp1

0x4b3f,	// (0x0006c5ac) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4b3f,	// (0x0006c5ac) cmail_ddmenu_btn02_pane_cp2

0xda9d,	// (0x0007550a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xda9d,	// (0x0007550a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd15,	// (0x00077782) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd15,	// (0x00077782) cmail_ddmenu_btn02_pane_g

0xdabb,	// (0x00075528) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdabb,	// (0x00075528) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1a,	// (0x00077787) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1a,	// (0x00077787) cmail_ddmenu_btn02_pane_t

0xe2a9,	// (0x00075d16) fps_text_pane_ParamLimits

0xe2a9,	// (0x00075d16) fps_text_pane

0xe2b6,	// (0x00075d23) main_fps_pane_g1_ParamLimits

0xe2b6,	// (0x00075d23) main_fps_pane_g1

0xe2c2,	// (0x00075d2f) wait_bar_pane_cp010_ParamLimits

0xe2c2,	// (0x00075d2f) wait_bar_pane_cp010

0xe2ce,	// (0x00075d3b) fps_text_pane_t1_ParamLimits

0xe2ce,	// (0x00075d3b) fps_text_pane_t1

0xb5ba,	// (0x00073027) cam4_image_uncrop_pane_g1

0xb5c3,	// (0x00073030) cam4_image_uncrop_pane_g2

0xb5cc,	// (0x00073039) cam4_image_uncrop_pane_g3

0xb5d5,	// (0x00073042) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x000772cd) cam4_image_uncrop_pane_g

0xe09d,	// (0x00075b0a) dia3_listrow_pane_ParamLimits

0x455a,	// (0x0006bfc7) main_phob2_pane

0xd704,	// (0x00075171) cell_tport_appsw_pane_cp02_ParamLimits

0xd704,	// (0x00075171) cell_tport_appsw_pane_cp02

0xd713,	// (0x00075180) cell_tport_appsw_pane_cp03_ParamLimits

0xd713,	// (0x00075180) cell_tport_appsw_pane_cp03

0x455a,	// (0x0006bfc7) phob2_contact_card_pane

0x455a,	// (0x0006bfc7) phob2_listscroll_pane

0x3249,	// (0x0006acb6) phob2_list_pane

0x3251,	// (0x0006acbe) scroll_pane_cp034

0xe2e7,	// (0x00075d54) phob2_cc_data_pane_ParamLimits

0xe2e7,	// (0x00075d54) phob2_cc_data_pane

0xe2fe,	// (0x00075d6b) phob2_cc_listscroll_pane_ParamLimits

0xe2fe,	// (0x00075d6b) phob2_cc_listscroll_pane

0xdeda,	// (0x00075947) list_double_large_graphic_phob2_pane_ParamLimits

0xdeda,	// (0x00075947) list_double_large_graphic_phob2_pane

0xe31a,	// (0x00075d87) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe31a,	// (0x00075d87) list_double_large_graphic_phob2_pane_g1

0x6bb6,	// (0x0006e623) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6bb6,	// (0x0006e623) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe18,	// (0x00077885) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe18,	// (0x00077885) list_double_large_graphic_phob2_pane_g

0x6bce,	// (0x0006e63b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6bce,	// (0x0006e63b) list_double_large_graphic_phob2_pane_t1

0x6be3,	// (0x0006e650) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6be3,	// (0x0006e650) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe21,	// (0x0007788e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe21,	// (0x0007788e) list_double_large_graphic_phob2_pane_t

0x455a,	// (0x0006bfc7) list_highlight_pane_cp024

0xe335,	// (0x00075da2) phob2_cc_button_pane

0xe33d,	// (0x00075daa) phob2_cc_data_pane_g1_ParamLimits

0xe33d,	// (0x00075daa) phob2_cc_data_pane_g1

0xe352,	// (0x00075dbf) phob2_cc_data_pane_g2_ParamLimits

0xe352,	// (0x00075dbf) phob2_cc_data_pane_g2

0x0001,

0xfe26,	// (0x00077893) phob2_cc_data_pane_g_ParamLimits

0xfe26,	// (0x00077893) phob2_cc_data_pane_g

0xe362,	// (0x00075dcf) phob2_cc_data_pane_t1_ParamLimits

0xe362,	// (0x00075dcf) phob2_cc_data_pane_t1

0xe37b,	// (0x00075de8) phob2_cc_data_pane_t2_ParamLimits

0xe37b,	// (0x00075de8) phob2_cc_data_pane_t2

0xe394,	// (0x00075e01) phob2_cc_data_pane_t3_ParamLimits

0xe394,	// (0x00075e01) phob2_cc_data_pane_t3

0x0002,

0xfe2b,	// (0x00077898) phob2_cc_data_pane_t_ParamLimits

0xfe2b,	// (0x00077898) phob2_cc_data_pane_t

0x3259,	// (0x0006acc6) phob2_cc_list_pane_ParamLimits

0x3259,	// (0x0006acc6) phob2_cc_list_pane

0x3dfb,	// (0x0006b868) scroll_pane_cp035_ParamLimits

0x3dfb,	// (0x0006b868) scroll_pane_cp035

0x48f1,	// (0x0006c35e) bg_button_pane_cp033

0x3265,	// (0x0006acd2) phob2_cc_button_pane_g1

0x3271,	// (0x0006acde) phob2_cc_button_pane_t1

0x3286,	// (0x0006acf3) phob2_cc_button_pane_t2

0x0001,

0xfe32,	// (0x0007789f) phob2_cc_button_pane_t

0xe3ad,	// (0x00075e1a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe3ad,	// (0x00075e1a) list_double_large_graphic_phob2_cc_pane

0xe3fc,	// (0x00075e69) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe3fc,	// (0x00075e69) list_double_large_graphic_phob2_cc_pane_g1

0x6bf8,	// (0x0006e665) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6bf8,	// (0x0006e665) list_double_large_graphic_phob2_cc_pane_g2

0x6c07,	// (0x0006e674) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6c07,	// (0x0006e674) list_double_large_graphic_phob2_cc_pane_g3

0x6c16,	// (0x0006e683) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6c16,	// (0x0006e683) list_double_large_graphic_phob2_cc_pane_g4

0x6c27,	// (0x0006e694) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6c27,	// (0x0006e694) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe37,	// (0x000778a4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe37,	// (0x000778a4) list_double_large_graphic_phob2_cc_pane_g

0x6c36,	// (0x0006e6a3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6c36,	// (0x0006e6a3) list_double_large_graphic_phob2_cc_pane_t1

0x6c5f,	// (0x0006e6cc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6c5f,	// (0x0006e6cc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe42,	// (0x000778af) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe42,	// (0x000778af) list_double_large_graphic_phob2_cc_pane_t

0x3298,	// (0x0006ad05) list_highlight_pane_cp025_ParamLimits

0x3298,	// (0x0006ad05) list_highlight_pane_cp025

0x48f1,	// (0x0006c35e) bg_button_pane_cp033_ParamLimits

0x3265,	// (0x0006acd2) phob2_cc_button_pane_g1_ParamLimits

0x3271,	// (0x0006acde) phob2_cc_button_pane_t1_ParamLimits

0x3286,	// (0x0006acf3) phob2_cc_button_pane_t2_ParamLimits

0xfe32,	// (0x0007789f) phob2_cc_button_pane_t_ParamLimits

0x6f79,	// (0x0006e9e6) popup_wgtman_window

0x38ca,	// (0x0006b337) scroll_pane_cp038

0xde63,	// (0x000758d0) wgtman_btn_pane_cp_01_ParamLimits

0xde63,	// (0x000758d0) wgtman_btn_pane_cp_01

0x32a6,	// (0x0006ad13) wgtman_content_pane

0x32af,	// (0x0006ad1c) wgtman_heading_pane

0x455a,	// (0x0006bfc7) bg_heading_pane_cp02

0x32b8,	// (0x0006ad25) wgtman_heading_pane_g1

0x32c0,	// (0x0006ad2d) wgtman_heading_pane_t1

0x32ce,	// (0x0006ad3b) scroll_pane_cp036

0x32d6,	// (0x0006ad43) wgtman_list_pane

0x4a16,	// (0x0006c483) wgtman_list_pane_t1_ParamLimits

0x4a16,	// (0x0006c483) wgtman_list_pane_t1

0xb517,	// (0x00072f84) cam4_grid_pane

0x625d,	// (0x0006dcca) bg_button_pane_cp015_ParamLimits

0xc1fa,	// (0x00073c67) bg_button_pane_cp016_ParamLimits

0xc206,	// (0x00073c73) bg_button_pane_cp017_ParamLimits

0xc239,	// (0x00073ca6) popup_vitu2_query_window_g3_ParamLimits

0xc239,	// (0x00073ca6) popup_vitu2_query_window_g3

0x6305,	// (0x0006dd72) popup_vitu2_query_window_t6_ParamLimits

0x6305,	// (0x0006dd72) popup_vitu2_query_window_t6

0x6330,	// (0x0006dd9d) popup_vitu2_query_window_t7_ParamLimits

0x6330,	// (0x0006dd9d) popup_vitu2_query_window_t7

0x48ff,	// (0x0006c36c) cam4_grid_pane_g1

0x4908,	// (0x0006c375) cam4_grid_pane_g2

0x32de,	// (0x0006ad4b) cam4_grid_pane_g3

0x32e7,	// (0x0006ad54) cam4_grid_pane_g4

0x0003,

0xfe47,	// (0x000778b4) cam4_grid_pane_g

0x7c69,	// (0x0006f6d6) aid_placing_vt_slider_lsc_ParamLimits

0x7f9c,	// (0x0006fa09) vidtel_button_pane_ParamLimits

0x7f9c,	// (0x0006fa09) vidtel_button_pane

0x455a,	// (0x0006bfc7) bg_button_pane_cp034

0x32f2,	// (0x0006ad5f) vidtel_button_pane_g1

0x32fa,	// (0x0006ad67) vidtel_button_pane_t1

0x39d8,	// (0x0006b445) aid_size_vtel_slider_touch

0x3dfb,	// (0x0006b868) scroll_pane_cp039

0xcebc,	// (0x00074929) ncim_query_button_pane_cp01_ParamLimits

0xcedb,	// (0x00074948) ncimui_query_pane_g1_ParamLimits

0x48f1,	// (0x0006c35e) input_focus_pane_cp012_ParamLimits

0x4387,	// (0x0006bdf4) ncim_query_entry_pane_t1_ParamLimits

0x3dfb,	// (0x0006b868) scroll_pane_cp039_ParamLimits

0x90dd,	// (0x00070b4a) navi_pane_bcale_mc_g1

0x90e5,	// (0x00070b52) navi_pane_bcale_mc_t1

0x4b75,	// (0x0006c5e2) main_sp_fs_email_pane_g1

0x4b81,	// (0x0006c5ee) main_sp_fs_email_pane_g2

0x0001,

0xfc4a,	// (0x000776b7) main_sp_fs_email_pane_g

0xed2e,	// (0x0007679b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xed2e,	// (0x0007679b) list_single_cale_mrui_row_pane_g3

0x6acc,	// (0x0006e539) list_single_recal_day_pane_g5_event_pane

0x6ae2,	// (0x0006e54f) list_single_recal_day_pane_g7

0x3310,	// (0x0006ad7d) list_recal_day_event_pane_cp01

0x3319,	// (0x0006ad86) list_recal_vselct_arw_lo_pane_cp01

0x3321,	// (0x0006ad8e) list_recal_vselct_arw_up_pane_cp01

0x3329,	// (0x0006ad96) list_recal_vselct_pane_cp01

0x39fa,	// (0x0006b467) list_recal_day_event_pane_cp01_g1

0x6c88,	// (0x0006e6f5) list_recal_day_event_pane_cp01_t1

0x6aea,	// (0x0006e557) list_single_recal_day_pane_t1_ParamLimits

0x6afc,	// (0x0006e569) list_single_recal_day_pane_t2_ParamLimits

0xfd2a,	// (0x00077797) list_single_recal_day_pane_t_ParamLimits

0x5000,	// (0x0006ca6d) bg_notes_pane_ParamLimits

0x50cb,	// (0x0006cb38) list_notes_pane_ParamLimits

0x7160,	// (0x0006ebcd) scroll_pane_cp06_ParamLimits

0x50ed,	// (0x0006cb5a) main_notes_pane_ParamLimits

0x48f1,	// (0x0006c35e) main_welc_pane

0xe42e,	// (0x00075e9b) main_welc_body_pane_ParamLimits

0xe42e,	// (0x00075e9b) main_welc_body_pane

0xe449,	// (0x00075eb6) main_welc_opti_pane_ParamLimits

0xe449,	// (0x00075eb6) main_welc_opti_pane

0xe4ae,	// (0x00075f1b) main_welc_pane_t1_ParamLimits

0xe4ae,	// (0x00075f1b) main_welc_pane_t1

0xe642,	// (0x000760af) main_welc_body_row_pane_ParamLimits

0xe642,	// (0x000760af) main_welc_body_row_pane

0x506d,	// (0x0006cada) main_welc_opti_row_pane_ParamLimits

0x506d,	// (0x0006cada) main_welc_opti_row_pane

0x3368,	// (0x0006add5) main_welc_opti_row_pane_g1

0xe65c,	// (0x000760c9) main_welc_opti_row_pane_t1

0x3370,	// (0x0006addd) main_welc_body_row_pane_t1

0x3086,	// (0x0006aaf3) popup_notif_wgt_heading_pane

0x30a0,	// (0x0006ab0d) aid_size_list_notif_wgt_del_ParamLimits

0x30ad,	// (0x0006ab1a) list_notif_wgt_row_pane_g1_ParamLimits

0x30b9,	// (0x0006ab26) list_notif_wgt_row_pane_g2_ParamLimits

0x30c8,	// (0x0006ab35) list_notif_wgt_row_pane_g3_ParamLimits

0xfd91,	// (0x000777fe) list_notif_wgt_row_pane_g_ParamLimits

0x30d5,	// (0x0006ab42) list_notif_wgt_row_pane_t1_ParamLimits

0x30eb,	// (0x0006ab58) list_notif_wgt_row_pane_t2_ParamLimits

0x30fd,	// (0x0006ab6a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd98,	// (0x00077805) list_notif_wgt_row_pane_t_ParamLimits

0xdef1,	// (0x0007595e) listrow_wgtman_pane_g1_ParamLimits

0xdefe,	// (0x0007596b) listrow_wgtman_pane_g2_ParamLimits

0xfdc8,	// (0x00077835) listrow_wgtman_pane_g_ParamLimits

0x6b66,	// (0x0006e5d3) listrow_wgtman_pane_t1_ParamLimits

0x6b7e,	// (0x0006e5eb) listrow_wgtman_pane_t2_ParamLimits

0xfdcd,	// (0x0007783a) listrow_wgtman_pane_t_ParamLimits

0x6ba4,	// (0x0006e611) wait_bar_pane_cp09_ParamLimits

0x455a,	// (0x0006bfc7) bg_popup_heading_pane_cp02

0x337f,	// (0x0006adec) popup_notif_wgt_heading_pane_g1

0x3387,	// (0x0006adf4) popup_notif_wgt_heading_pane_t1

0x455a,	// (0x0006bfc7) main_vids_pane

0x455a,	// (0x0006bfc7) vids_listscroll_pane

0xe66b,	// (0x000760d8) scroll_pane_cp040

0x455a,	// (0x0006bfc7) vids_list_pane

0xe676,	// (0x000760e3) vids_list_double_pane_ParamLimits

0xe676,	// (0x000760e3) vids_list_double_pane

0xe68a,	// (0x000760f7) vids_list_double_pane_g1

0xe693,	// (0x00076100) vids_list_double_pane_t1

0xe6a3,	// (0x00076110) vids_list_double_pane_t2

0x0001,

0xfe66,	// (0x000778d3) vids_list_double_pane_t

0x48f1,	// (0x0006c35e) main_ncimui_pane_ParamLimits

0xccfd,	// (0x0007476a) main_ncimui_pane_g1_ParamLimits

0xcd0b,	// (0x00074778) main_ncimui_pane_g2_ParamLimits

0xcd0b,	// (0x00074778) main_ncimui_pane_g2

0x0001,

0xfb4b,	// (0x000775b8) main_ncimui_pane_g_ParamLimits

0xfb4b,	// (0x000775b8) main_ncimui_pane_g

0xe464,	// (0x00075ed1) main_welc_pane_g1_ParamLimits

0xe464,	// (0x00075ed1) main_welc_pane_g1

0xe470,	// (0x00075edd) main_welc_pane_g2_ParamLimits

0xe470,	// (0x00075edd) main_welc_pane_g2

0x0003,

0xfe50,	// (0x000778bd) main_welc_pane_g_ParamLimits

0xfe50,	// (0x000778bd) main_welc_pane_g

0x7142,	// (0x0006ebaf) listscroll_mce_pane_ParamLimits

0x91a7,	// (0x00070c14) wait_bar_pane_cp10

0x1f59,	// (0x000699c6) main_cale_day_pane_ParamLimits

0x1f59,	// (0x000699c6) main_cale_week_pane_ParamLimits

0x5000,	// (0x0006ca6d) main_messa_pane_ParamLimits

0xa96c,	// (0x000723d9) main_clock2_btn_pane_ParamLimits

0xa96c,	// (0x000723d9) main_clock2_btn_pane

0x2823,	// (0x0006a290) main_clock2_btn_pane_cp01_ParamLimits

0x2823,	// (0x0006a290) main_clock2_btn_pane_cp01

0xecff,	// (0x0007676c) list_cale_mrui_pane_ParamLimits

0x3133,	// (0x0006aba0) main_cf0_pane_g2

0x0001,

0xfd9f,	// (0x0007780c) main_cf0_pane_g

0xe0f5,	// (0x00075b62) area_left_week_number_pane_ParamLimits

0xe108,	// (0x00075b75) area_top_day_name_pane_ParamLimits

0xe116,	// (0x00075b83) frame_month_view_pane_ParamLimits

0x320e,	// (0x0006ac7b) grid_month_view_pane_ParamLimits

0x321c,	// (0x0006ac89) frm_month_g1_ParamLimits

0xe194,	// (0x00075c01) frm_month_g2_ParamLimits

0xe1a5,	// (0x00075c12) frm_month_g3_ParamLimits

0xe1b6,	// (0x00075c23) frm_month_g4_ParamLimits

0xe1c7,	// (0x00075c34) frm_month_g5_ParamLimits

0xe1d8,	// (0x00075c45) frm_month_g6_ParamLimits

0xe1eb,	// (0x00075c58) frm_month_g7_ParamLimits

0x3229,	// (0x0006ac96) frm_month_g8_ParamLimits

0xe1fe,	// (0x00075c6b) frm_month_g9_ParamLimits

0xe20b,	// (0x00075c78) frm_month_g10_ParamLimits

0xe218,	// (0x00075c85) frm_month_g11_ParamLimits

0xe225,	// (0x00075c92) frm_month_g12_ParamLimits

0xe232,	// (0x00075c9f) frm_month_g13_ParamLimits

0xe241,	// (0x00075cae) frm_month_g14_ParamLimits

0xe250,	// (0x00075cbd) frm_month_g15_ParamLimits

0xe25f,	// (0x00075ccc) frm_month_g16_ParamLimits

0xfdf7,	// (0x00077864) frm_month_g_ParamLimits

0x3236,	// (0x0006aca3) cell_top_day_name_pane_t1_ParamLimits

0xe26e,	// (0x00075cdb) cell_area_left_week_number_pane_g1_ParamLimits

0xe27d,	// (0x00075cea) cell_area_left_week_number_pane_t1_ParamLimits

0x507b,	// (0x0006cae8) cell_month_view_pane_g1_ParamLimits

0xe293,	// (0x00075d00) cell_month_view_pane_t1_ParamLimits

0x4ff8,	// (0x0006ca65) main_clock2_btn_pane_g1

0x3395,	// (0x0006ae02) main_clock2_btn_pane_t1

0x48f1,	// (0x0006c35e) listscroll_cmail_pane_ParamLimits

0x4b75,	// (0x0006c5e2) main_sp_fs_email_pane_g1_ParamLimits

0x4b81,	// (0x0006c5ee) main_sp_fs_email_pane_g2_ParamLimits

0xfc4a,	// (0x000776b7) main_sp_fs_email_pane_g_ParamLimits

0xee08,	// (0x00076875) list_recal_day_pane_ParamLimits

0xee19,	// (0x00076886) mian_recal_day_pane_t1

0x66c3,	// (0x0006e130) list_single_dyc_row_text_pane_t4_ParamLimits

0x66c3,	// (0x0006e130) list_single_dyc_row_text_pane_t4

0x6708,	// (0x0006e175) list_single_dyc_row_text_pane_t5_ParamLimits

0x6708,	// (0x0006e175) list_single_dyc_row_text_pane_t5

0x677e,	// (0x0006e1eb) list_single_dyc_row_text_pane_t6_ParamLimits

0x677e,	// (0x0006e1eb) list_single_dyc_row_text_pane_t6

0x8d04,	// (0x00070771) aid_mgn_list_cale_time_pane

0x48f1,	// (0x0006c35e) main_gallery2_pane_ParamLimits

0x2837,	// (0x0006a2a4) main_clock2_pane_cp01_t1

0x2845,	// (0x0006a2b2) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x000771a4) main_clock2_pane_cp01_t

0x765c,	// (0x0006f0c9) cale_week_scroll_pane_g16_ParamLimits

0x765c,	// (0x0006f0c9) cale_week_scroll_pane_g16

0x0182,	// (0x00067bef) vorec_slider_pane

0x32fa,	// (0x0006ad67) vidtel_button_pane_t1_ParamLimits

0xdb1e,	// (0x0007558b) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdb1e,	// (0x0007558b) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdb2d,	// (0x0007559a) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdb2d,	// (0x0007559a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4d,	// (0x000777ba) main_fs_bigclock_clock_pane_g_ParamLimits

0xdb3d,	// (0x000755aa) main_fs_bigclock_clock_pane_t1_ParamLimits

0xdb52,	// (0x000755bf) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd56,	// (0x000777c3) main_fs_bigclock_clock_pane_t_ParamLimits

0xa2b4,	// (0x00071d21) main_mup3_lyrics_pane_ParamLimits

0xa2b4,	// (0x00071d21) main_mup3_lyrics_pane

0xe6d9,	// (0x00076146) main_mup3_lyrics_pane_t1_ParamLimits

0xe6d9,	// (0x00076146) main_mup3_lyrics_pane_t1

0xae8c,	// (0x000728f9) aid_main_mp4_pane_t1_area

0xae96,	// (0x00072903) aid_main_mp4_pane_t2_area

0xafa3,	// (0x00072a10) main_mp4_pane_g7_ParamLimits

0xafa3,	// (0x00072a10) main_mp4_pane_g7

0xafaf,	// (0x00072a1c) main_mp4_pane_g8_ParamLimits

0xafaf,	// (0x00072a1c) main_mp4_pane_g8

0xb3bf,	// (0x00072e2c) aid_call6_pane_g1_size

0xe3db,	// (0x00075e48) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe3db,	// (0x00075e48) list_double_large_graphic_phob2_other_pane

0xe700,	// (0x0007616d) list_double_large_graphic_phob2_other_pane_g1

0x455a,	// (0x0006bfc7) list_highlight_pane_cp026

0x48f1,	// (0x0006c35e) main_welc_pane_ParamLimits

0xd602,	// (0x0007506f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd602,	// (0x0007506f) main_sp_fs_ctrlbar_pane_g3

0xd61c,	// (0x00075089) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd61c,	// (0x00075089) main_sp_fs_ctrlbar_pane_g4

0xd64e,	// (0x000750bb) toolbar2_fixed_button_pane_cp01

0xd659,	// (0x000750c6) toolbar2_fixed_button_pane_cp02

0xd666,	// (0x000750d3) toolbar2_fixed_button_pane_cp03

0xe41f,	// (0x00075e8c) list_welc_entry_pane_ParamLimits

0xe41f,	// (0x00075e8c) list_welc_entry_pane

0xe47e,	// (0x00075eeb) main_welc_pane_g3_ParamLimits

0xe47e,	// (0x00075eeb) main_welc_pane_g3

0xe4cc,	// (0x00075f39) main_welc_pane_t2_ParamLimits

0xe4cc,	// (0x00075f39) main_welc_pane_t2

0xe4e0,	// (0x00075f4d) main_welc_pane_t3_ParamLimits

0xe4e0,	// (0x00075f4d) main_welc_pane_t3

0x0005,

0xfe59,	// (0x000778c6) main_welc_pane_t_ParamLimits

0xfe59,	// (0x000778c6) main_welc_pane_t

0xe5e6,	// (0x00076053) welc_button_pane_ParamLimits

0xe5e6,	// (0x00076053) welc_button_pane

0xe634,	// (0x000760a1) welc_service_logo_pane_ParamLimits

0xe634,	// (0x000760a1) welc_service_logo_pane

0xe708,	// (0x00076175) list_single_welc_entry_pane_ParamLimits

0xe708,	// (0x00076175) list_single_welc_entry_pane

0xe719,	// (0x00076186) list_single_welc_entry_pane_g1

0xe721,	// (0x0007618e) list_single_welc_entry_pane_t1

0xe72f,	// (0x0007619c) list_single_welc_entry_pane_t2

0x0001,

0xfe6b,	// (0x000778d8) list_single_welc_entry_pane_t

0x455a,	// (0x0006bfc7) bg_button_pane_cp035

0x33a3,	// (0x0006ae10) welc_button_pane_t1

0x33b1,	// (0x0006ae1e) welc_service_logo_pane_g1

0x33ba,	// (0x0006ae27) welc_service_logo_pane_g2

0x0001,

0xfe70,	// (0x000778dd) welc_service_logo_pane_g

0x455a,	// (0x0006bfc7) main_int_radio_pane

0x4225,	// (0x0006bc92) list_single_fs_dyc_pane_g1

0x6bc2,	// (0x0006e62f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x6bc2,	// (0x0006e62f) list_double_large_graphic_phob2_pane_g3

0xe327,	// (0x00075d94) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe327,	// (0x00075d94) list_double_large_graphic_phob2_pane_g4

0xe73d,	// (0x000761aa) main_int_radio1_pane_ParamLimits

0xe73d,	// (0x000761aa) main_int_radio1_pane

0x33c3,	// (0x0006ae30) find_pane_cp02

0xe753,	// (0x000761c0) input_focus_pane_cp12_ParamLimits

0xe753,	// (0x000761c0) input_focus_pane_cp12

0xe75f,	// (0x000761cc) input_focus_pane_cp13_ParamLimits

0xe75f,	// (0x000761cc) input_focus_pane_cp13

0xe777,	// (0x000761e4) input_focus_pane_cp14_ParamLimits

0xe777,	// (0x000761e4) input_focus_pane_cp14

0x33cc,	// (0x0006ae39) int_radio1_listscroll_pane

0xe78f,	// (0x000761fc) main_int_radio1_pane_g1_ParamLimits

0xe78f,	// (0x000761fc) main_int_radio1_pane_g1

0xe79b,	// (0x00076208) main_int_radio1_pane_t1_ParamLimits

0xe79b,	// (0x00076208) main_int_radio1_pane_t1

0xe7ad,	// (0x0007621a) main_int_radio1_pane_t2_ParamLimits

0xe7ad,	// (0x0007621a) main_int_radio1_pane_t2

0xe7c1,	// (0x0007622e) main_int_radio1_pane_t3_ParamLimits

0xe7c1,	// (0x0007622e) main_int_radio1_pane_t3

0xe7d5,	// (0x00076242) main_int_radio1_pane_t4_ParamLimits

0xe7d5,	// (0x00076242) main_int_radio1_pane_t4

0x33d6,	// (0x0006ae43) main_int_radio1_pane_t5_ParamLimits

0x33d6,	// (0x0006ae43) main_int_radio1_pane_t5

0xe7ec,	// (0x00076259) main_int_radio1_pane_t6_ParamLimits

0xe7ec,	// (0x00076259) main_int_radio1_pane_t6

0xe7fe,	// (0x0007626b) main_int_radio1_pane_t7_ParamLimits

0xe7fe,	// (0x0007626b) main_int_radio1_pane_t7

0xe810,	// (0x0007627d) main_int_radio1_pane_t8_ParamLimits

0xe810,	// (0x0007627d) main_int_radio1_pane_t8

0xe822,	// (0x0007628f) main_int_radio1_pane_t9_ParamLimits

0xe822,	// (0x0007628f) main_int_radio1_pane_t9

0xe834,	// (0x000762a1) main_int_radio1_pane_t10_ParamLimits

0xe834,	// (0x000762a1) main_int_radio1_pane_t10

0xe865,	// (0x000762d2) main_int_radio1_pane_t11_ParamLimits

0xe865,	// (0x000762d2) main_int_radio1_pane_t11

0xe896,	// (0x00076303) main_int_radio1_pane_t12_ParamLimits

0xe896,	// (0x00076303) main_int_radio1_pane_t12

0x000b,

0xfe75,	// (0x000778e2) main_int_radio1_pane_t_ParamLimits

0xfe75,	// (0x000778e2) main_int_radio1_pane_t

0x3249,	// (0x0006acb6) int_radio_list_pane

0x3251,	// (0x0006acbe) scroll_pane_cp037

0x33e8,	// (0x0006ae55) list_double_large_graphic_int_radio_pane_ParamLimits

0x33e8,	// (0x0006ae55) list_double_large_graphic_int_radio_pane

0x33fc,	// (0x0006ae69) list_double_large_graphic_int_radio_pane_g1

0x6c96,	// (0x0006e703) list_double_large_graphic_int_radio_pane_t1

0x6ca4,	// (0x0006e711) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe8e,	// (0x000778fb) list_double_large_graphic_int_radio_pane_t

0x455a,	// (0x0006bfc7) list_highlight_pane_cp027

0x3341,	// (0x0006adae) main_button_pane_4

0xe48e,	// (0x00075efb) main_welc_pane_g4_ParamLimits

0xe48e,	// (0x00075efb) main_welc_pane_g4

0xe4f4,	// (0x00075f61) main_welc_pane_t4_ParamLimits

0xe4f4,	// (0x00075f61) main_welc_pane_t4

0xe506,	// (0x00075f73) main_welc_pane_t5_ParamLimits

0xe506,	// (0x00075f73) main_welc_pane_t5

0xe53a,	// (0x00075fa7) main_welc_pane_t6_ParamLimits

0xe53a,	// (0x00075fa7) main_welc_pane_t6

0xe5f4,	// (0x00076061) welc_button_pane_2_ParamLimits

0xe5f4,	// (0x00076061) welc_button_pane_2

0xe60a,	// (0x00076077) welc_button_pane_3_ParamLimits

0xe60a,	// (0x00076077) welc_button_pane_3

0x3349,	// (0x0006adb6) welc_button_pane_4

0xe624,	// (0x00076091) welc_button_pane_5_ParamLimits

0xe624,	// (0x00076091) welc_button_pane_5

0x6d06,	// (0x0006e773) main_popup_welc_pane

0x3430,	// (0x0006ae9d) main_welc_sk_g3

0x343a,	// (0x0006aea7) main_welc_sk_g4

0x3444,	// (0x0006aeb1) main_welc_sk_t3

0x3454,	// (0x0006aec1) main_welc_sk_t4

0x3464,	// (0x0006aed1) popup_welc_pane_t4

0x3472,	// (0x0006aedf) popup_welc_pane_t5

0x3482,	// (0x0006aeef) popup_welc_pane_t6

0x455a,	// (0x0006bfc7) main_acti_pane

0x455a,	// (0x0006bfc7) main_sso_pane

0xe8ad,	// (0x0007631a) sso_body_pane_ParamLimits

0xe8ad,	// (0x0007631a) sso_body_pane

0xe8bc,	// (0x00076329) sso_logo_pane_ParamLimits

0xe8bc,	// (0x00076329) sso_logo_pane

0xe8e5,	// (0x00076352) sso_sk_pane_ParamLimits

0xe8e5,	// (0x00076352) sso_sk_pane

0x01d7,	// (0x00067c44) main_sso_logo_pane_g1

0xe8f2,	// (0x0007635f) sso_sk_pane_t1_ParamLimits

0xe8f2,	// (0x0007635f) sso_sk_pane_t1

0xe906,	// (0x00076373) sso_sk_pane_t2_ParamLimits

0xe906,	// (0x00076373) sso_sk_pane_t2

0x0001,

0xfe93,	// (0x00077900) sso_sk_pane_t_ParamLimits

0xfe93,	// (0x00077900) sso_sk_pane_t

0x34c4,	// (0x0006af31) aid_sso_gap

0x34cd,	// (0x0006af3a) aid_sso_txt1

0x34d7,	// (0x0006af44) aid_sso_txt2

0x34e1,	// (0x0006af4e) aid_sso_txt3

0x0002,

0xfe98,	// (0x00077905) aid_sso_txt

0x34eb,	// (0x0006af58) aid_sso_widget

0xe963,	// (0x000763d0) sso_btn_pane_ParamLimits

0xe963,	// (0x000763d0) sso_btn_pane

0xe9dc,	// (0x00076449) sso_option_pane_ParamLimits

0xe9dc,	// (0x00076449) sso_option_pane

0xea5a,	// (0x000764c7) sso_query_pane_ParamLimits

0xea5a,	// (0x000764c7) sso_query_pane

0xeaac,	// (0x00076519) sso_query_pane_cp01_ParamLimits

0xeaac,	// (0x00076519) sso_query_pane_cp01

0xeb02,	// (0x0007656f) sso_t_hdr_pane_ParamLimits

0xeb02,	// (0x0007656f) sso_t_hdr_pane

0xeb21,	// (0x0007658e) sso_t_nml_pane_ParamLimits

0xeb21,	// (0x0007658e) sso_t_nml_pane

0x34e1,	// (0x0006af4e) sso_t_sub_pane

0xe8c9,	// (0x00076336) sso_popup_window_ParamLimits

0xe8c9,	// (0x00076336) sso_popup_window

0xe918,	// (0x00076385) sso_apps_pane_ParamLimits

0xe918,	// (0x00076385) sso_apps_pane

0xe93b,	// (0x000763a8) sso_body_pane_g1

0xe943,	// (0x000763b0) sso_body_pane_t1

0xe953,	// (0x000763c0) sso_body_pane_t2

0x0001,

0xfe9f,	// (0x0007790c) sso_body_pane_t

0xe9ae,	// (0x0007641b) sso_btn_pane_cp01_ParamLimits

0xe9ae,	// (0x0007641b) sso_btn_pane_cp01

0xea2c,	// (0x00076499) sso_prog_pane_ParamLimits

0xea2c,	// (0x00076499) sso_prog_pane

0x34f5,	// (0x0006af62) sso_t_hdr_pane_t1_ParamLimits

0x34f5,	// (0x0006af62) sso_t_hdr_pane_t1

0x3508,	// (0x0006af75) input_focus_pane_cp10_ParamLimits

0x3508,	// (0x0006af75) input_focus_pane_cp10

0x351e,	// (0x0006af8b) sso_query_pane_t1_ParamLimits

0x351e,	// (0x0006af8b) sso_query_pane_t1

0x3531,	// (0x0006af9e) sso_query_pane_t2_ParamLimits

0x3531,	// (0x0006af9e) sso_query_pane_t2

0x354b,	// (0x0006afb8) sso_query_pane_t3_ParamLimits

0x354b,	// (0x0006afb8) sso_query_pane_t3

0x3575,	// (0x0006afe2) sso_query_pane_t4_ParamLimits

0x3575,	// (0x0006afe2) sso_query_pane_t4

0x0003,

0xfea4,	// (0x00077911) sso_query_pane_t_ParamLimits

0xfea4,	// (0x00077911) sso_query_pane_t

0x455a,	// (0x0006bfc7) bg_button_pane_cp22

0x3421,	// (0x0006ae8e) sso_btn_pane_t1

0xeb71,	// (0x000765de) sso_t_nml_pane_t1_ParamLimits

0xeb71,	// (0x000765de) sso_t_nml_pane_t1

0x3599,	// (0x0006b006) sso_option_row_pane_ParamLimits

0x3599,	// (0x0006b006) sso_option_row_pane

0x35a6,	// (0x0006b013) sso_t_sub_pane_t1_ParamLimits

0x35a6,	// (0x0006b013) sso_t_sub_pane_t1

0x48f1,	// (0x0006c35e) bg_popup_window_pane_cp11_ParamLimits

0x48f1,	// (0x0006c35e) bg_popup_window_pane_cp11

0x35b9,	// (0x0006b026) popup_sk_window_cp01_ParamLimits

0x35b9,	// (0x0006b026) popup_sk_window_cp01

0x35c6,	// (0x0006b033) sso_popup_body_pane_ParamLimits

0x35c6,	// (0x0006b033) sso_popup_body_pane

0x35d3,	// (0x0006b040) scroll_pane_cp21_ParamLimits

0x35d3,	// (0x0006b040) scroll_pane_cp21

0x35e0,	// (0x0006b04d) sso_popup_body_t_pane_ParamLimits

0x35e0,	// (0x0006b04d) sso_popup_body_t_pane

0x35ed,	// (0x0006b05a) sso_popup_body_t_hdr_pane_ParamLimits

0x35ed,	// (0x0006b05a) sso_popup_body_t_hdr_pane

0x35fb,	// (0x0006b068) sso_popup_body_t_nml_pane_ParamLimits

0x35fb,	// (0x0006b068) sso_popup_body_t_nml_pane

0x3616,	// (0x0006b083) sso_popup_body_t_sub_pane_ParamLimits

0x3616,	// (0x0006b083) sso_popup_body_t_sub_pane

0x3639,	// (0x0006b0a6) sso_popup_body_t_hdr_pane_t1

0xeb8e,	// (0x000765fb) sso_popup_body_t_nml_pane_t1_ParamLimits

0xeb8e,	// (0x000765fb) sso_popup_body_t_nml_pane_t1

0x3649,	// (0x0006b0b6) sso_popup_body_t_sub_pane_t1_ParamLimits

0x3649,	// (0x0006b0b6) sso_popup_body_t_sub_pane_t1

0x01d7,	// (0x00067c44) sso_prog_pane_g1

0xebd5,	// (0x00076642) sso_apps_pane_comp1_ParamLimits

0xebd5,	// (0x00076642) sso_apps_pane_comp1

0x366e,	// (0x0006b0db) sso_apps_pane_comp1_g1

0x3676,	// (0x0006b0e3) sso_apps_pane_comp1_t1

0x3684,	// (0x0006b0f1) sso_option_row_pane_g1

0x368c,	// (0x0006b0f9) sso_option_row_pane_t1

0xe40d,	// (0x00075e7a) bg_welc_area_ParamLimits

0xe40d,	// (0x00075e7a) bg_welc_area

0xe570,	// (0x00075fdd) sso_t_hdr_pane_a_t1_ParamLimits

0xe570,	// (0x00075fdd) sso_t_hdr_pane_a_t1

0xe584,	// (0x00075ff1) sso_t_nml_pane_a_t1_ParamLimits

0xe584,	// (0x00075ff1) sso_t_nml_pane_a_t1

0xe5b2,	// (0x0007601f) sso_t_sub_pane_a_t1_ParamLimits

0xe5b2,	// (0x0007601f) sso_t_sub_pane_a_t1

0x3421,	// (0x0006ae8e) sso_btn_pane_t1_copy1

0x455a,	// (0x0006bfc7) welc_button_pane_2_comp1

0x3492,	// (0x0006aeff) sso_t_hdr_pane_p_t1

0x34a2,	// (0x0006af0f) sso_t_nml_pane_p_t1

0x34b2,	// (0x0006af1f) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
