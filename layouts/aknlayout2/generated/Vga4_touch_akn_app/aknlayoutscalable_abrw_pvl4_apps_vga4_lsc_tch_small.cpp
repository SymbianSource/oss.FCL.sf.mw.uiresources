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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006e1d5 };

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
0xfc29,	// (0x0006ddfe) Screen

0xfc35,	// (0x0006de0a) application_window

0xfc81,	// (0x0006de56) area_bottom_pane_ParamLimits

0xfc81,	// (0x0006de56) area_bottom_pane

0xfcba,	// (0x0006de8f) area_top_pane_ParamLimits

0xfcba,	// (0x0006de8f) area_top_pane

0x956d,	// (0x00077742) call_video_uplink_pane_ParamLimits

0x956d,	// (0x00077742) call_video_uplink_pane

0xfd48,	// (0x0006df1d) main_pane_ParamLimits

0xfd48,	// (0x0006df1d) main_pane

0xc866,	// (0x0007aa3b) context_pane

0x38e5,	// (0x00071aba) navi_pane

0x3915,	// (0x00071aea) popup_cale_events_window_ParamLimits

0x3915,	// (0x00071aea) popup_cale_events_window

0xc879,	// (0x0007aa4e) popup_mup_playback_window

0x392d,	// (0x00071b02) signal_pane

0xa8c1,	// (0x00078a96) main_browser_pane

0xaa77,	// (0x00078c4c) main_burst_pane

0x35e7,	// (0x000717bc) main_calc_pane

0xc809,	// (0x0007a9de) main_cale_day_pane

0x0398,	// (0x0006e56d) main_cale_month_pane

0xc809,	// (0x0007a9de) main_cale_week_pane

0xaa77,	// (0x00078c4c) main_call_pane

0x99ac,	// (0x00077b81) main_call_poc_pane

0xaa77,	// (0x00078c4c) main_camera_pane

0xaa77,	// (0x00078c4c) main_chi_dic_pane

0xb24f,	// (0x00079424) main_clock_pane

0x99ac,	// (0x00077b81) main_fmradio_pane

0xaa77,	// (0x00078c4c) main_graph_messa_pane

0x99ac,	// (0x00077b81) main_help_pane

0xa8c1,	// (0x00078a96) main_im_pane

0x9c07,	// (0x00077ddc) main_image_pane_ParamLimits

0x9c07,	// (0x00077ddc) main_image_pane

0x99ac,	// (0x00077b81) main_location2_pane

0xaa77,	// (0x00078c4c) main_location_pane

0x9c07,	// (0x00077ddc) main_messa_pane

0x99ac,	// (0x00077b81) main_mp2_pane

0xaa77,	// (0x00078c4c) main_mp_pane

0x99ac,	// (0x00077b81) main_msg_pane

0x99ac,	// (0x00077b81) main_mup_eq_pane

0x99ac,	// (0x00077b81) main_mup_pane

0xa8c1,	// (0x00078a96) main_notes_pane

0x99ac,	// (0x00077b81) main_pec_pane

0x99ac,	// (0x00077b81) main_phob_pane

0x99ac,	// (0x00077b81) main_pinb_pane

0x99ac,	// (0x00077b81) main_postcard_pane

0x99ac,	// (0x00077b81) main_qdial_pane

0xaa77,	// (0x00078c4c) main_skin_pane

0x99ac,	// (0x00077b81) main_smil2_pane

0xaa77,	// (0x00078c4c) main_smil_pane

0xaa77,	// (0x00078c4c) main_video_pane

0xaa77,	// (0x00078c4c) main_video_tele_pane

0x9c07,	// (0x00077ddc) main_viewer_pane_ParamLimits

0x9c07,	// (0x00077ddc) main_viewer_pane

0xaa77,	// (0x00078c4c) main_vorec_pane

0x363d,	// (0x00071812) popup_blid_sat_info_window_ParamLimits

0x363d,	// (0x00071812) popup_blid_sat_info_window

0x36a1,	// (0x00071876) popup_dyc_status_message_window_ParamLimits

0x36a1,	// (0x00071876) popup_dyc_status_message_window

0x36bb,	// (0x00071890) popup_grid_large_graphic_window_ParamLimits

0x36bb,	// (0x00071890) popup_grid_large_graphic_window

0x377d,	// (0x00071952) popup_loc_request_window_ParamLimits

0x377d,	// (0x00071952) popup_loc_request_window

0x38b9,	// (0x00071a8e) popup_wml_address_window_ParamLimits

0x38b9,	// (0x00071a8e) popup_wml_address_window

0x3425,	// (0x000715fa) call_muted_g1

0x30b9,	// (0x0007128e) popup_call_audio_conf_window_ParamLimits

0x30b9,	// (0x0007128e) popup_call_audio_conf_window

0x3435,	// (0x0007160a) popup_call_audio_first_window_ParamLimits

0x3435,	// (0x0007160a) popup_call_audio_first_window

0x34ab,	// (0x00071680) popup_call_audio_in_window_ParamLimits

0x34ab,	// (0x00071680) popup_call_audio_in_window

0x34e7,	// (0x000716bc) popup_call_audio_out_window_ParamLimits

0x34e7,	// (0x000716bc) popup_call_audio_out_window

0x3521,	// (0x000716f6) popup_call_audio_second_window_ParamLimits

0x3521,	// (0x000716f6) popup_call_audio_second_window

0x3577,	// (0x0007174c) popup_call_audio_wait_window_ParamLimits

0x3577,	// (0x0007174c) popup_call_audio_wait_window

0x35ac,	// (0x00071781) popup_number_entry_window_ParamLimits

0x35ac,	// (0x00071781) popup_number_entry_window

0x9599,	// (0x0007776e) bg_popup_call_pane_cp05_ParamLimits

0x9599,	// (0x0007776e) bg_popup_call_pane_cp05

0x95b9,	// (0x0007778e) popup_number_entry_window_t1

0x95cc,	// (0x000777a1) popup_number_entry_window_t2

0x95de,	// (0x000777b3) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007d29f) popup_number_entry_window_t

0x95f0,	// (0x000777c5) text_title_cp2

0x9603,	// (0x000777d8) bg_popup_call_pane_cp_ParamLimits

0x9603,	// (0x000777d8) bg_popup_call_pane_cp

0x9611,	// (0x000777e6) call_thumbnail_pane

0x9619,	// (0x000777ee) popup_call_audio_in_window_g1_ParamLimits

0x9619,	// (0x000777ee) popup_call_audio_in_window_g1

0x9625,	// (0x000777fa) popup_call_audio_in_window_g2_ParamLimits

0x9625,	// (0x000777fa) popup_call_audio_in_window_g2

0x9631,	// (0x00077806) popup_call_audio_in_window_g3_ParamLimits

0x9631,	// (0x00077806) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007d2a8) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007d2a8) popup_call_audio_in_window_g

0x963d,	// (0x00077812) popup_call_audio_in_window_t1_ParamLimits

0x963d,	// (0x00077812) popup_call_audio_in_window_t1

0x9659,	// (0x0007782e) popup_call_audio_in_window_t2_ParamLimits

0x9659,	// (0x0007782e) popup_call_audio_in_window_t2

0x9675,	// (0x0007784a) popup_call_audio_in_window_t3_ParamLimits

0x9675,	// (0x0007784a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007d2af) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007d2af) popup_call_audio_in_window_t

0x9603,	// (0x000777d8) bg_popup_call_pane_cp01_ParamLimits

0x9603,	// (0x000777d8) bg_popup_call_pane_cp01

0x9611,	// (0x000777e6) call_thumbnail_pane_cp02

0x9688,	// (0x0007785d) call_type_pane_cp022

0x9690,	// (0x00077865) popup_call_audio_out_window_g1_ParamLimits

0x9690,	// (0x00077865) popup_call_audio_out_window_g1

0x96a2,	// (0x00077877) popup_call_audio_out_window_g2_ParamLimits

0x96a2,	// (0x00077877) popup_call_audio_out_window_g2

0x96ae,	// (0x00077883) popup_call_audio_out_window_g3_ParamLimits

0x96ae,	// (0x00077883) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007d2b6) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007d2b6) popup_call_audio_out_window_g

0x96c0,	// (0x00077895) popup_call_audio_out_window_t1_ParamLimits

0x96c0,	// (0x00077895) popup_call_audio_out_window_t1

0x96d8,	// (0x000778ad) popup_call_audio_out_window_t2_ParamLimits

0x96d8,	// (0x000778ad) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007d2bd) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007d2bd) popup_call_audio_out_window_t

0x96ed,	// (0x000778c2) bg_popup_call_pane_ParamLimits

0x96ed,	// (0x000778c2) bg_popup_call_pane

0xff07,	// (0x0006e0dc) call_thumbnail_pane_cp_ParamLimits

0xff07,	// (0x0006e0dc) call_thumbnail_pane_cp

0x9771,	// (0x00077946) call_type_pane_cp01_ParamLimits

0x9771,	// (0x00077946) call_type_pane_cp01

0x97b5,	// (0x0007798a) popup_call_audio_first_window_g1_ParamLimits

0x97b5,	// (0x0007798a) popup_call_audio_first_window_g1

0x9801,	// (0x000779d6) popup_call_audio_first_window_g2_ParamLimits

0x9801,	// (0x000779d6) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007d2c2) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007d2c2) popup_call_audio_first_window_g

0x9845,	// (0x00077a1a) popup_call_audio_first_window_t1_ParamLimits

0x9845,	// (0x00077a1a) popup_call_audio_first_window_t1

0x98f1,	// (0x00077ac6) popup_call_audio_first_window_t4_ParamLimits

0x98f1,	// (0x00077ac6) popup_call_audio_first_window_t4

0x997d,	// (0x00077b52) popup_call_audio_first_window_t5_ParamLimits

0x997d,	// (0x00077b52) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007d2c7) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007d2c7) popup_call_audio_first_window_t

0x99ac,	// (0x00077b81) bg_popup_call_pane_cp02

0x99b6,	// (0x00077b8b) call_type_pane_cp023

0x99be,	// (0x00077b93) popup_call_audio_wait_window_g1

0x99c6,	// (0x00077b9b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007d2ce) popup_call_audio_wait_window_g

0x99ce,	// (0x00077ba3) popup_call_audio_wait_window_t3

0x99dc,	// (0x00077bb1) bg_popup_call_pane_cp03_ParamLimits

0x99dc,	// (0x00077bb1) bg_popup_call_pane_cp03

0x9a3c,	// (0x00077c11) call_thumbnail_pane_cp011_ParamLimits

0x9a3c,	// (0x00077c11) call_thumbnail_pane_cp011

0x9a48,	// (0x00077c1d) call_type_pane_cp034_ParamLimits

0x9a48,	// (0x00077c1d) call_type_pane_cp034

0x9a84,	// (0x00077c59) popup_call_audio_second_window_g1_ParamLimits

0x9a84,	// (0x00077c59) popup_call_audio_second_window_g1

0x9ac0,	// (0x00077c95) popup_call_audio_second_window_g2_ParamLimits

0x9ac0,	// (0x00077c95) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007d2d3) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007d2d3) popup_call_audio_second_window_g

0x9afc,	// (0x00077cd1) popup_call_audio_second_window_t1_ParamLimits

0x9afc,	// (0x00077cd1) popup_call_audio_second_window_t1

0x9b7d,	// (0x00077d52) popup_call_audio_second_window_t2_ParamLimits

0x9b7d,	// (0x00077d52) popup_call_audio_second_window_t2

0x9bb3,	// (0x00077d88) popup_call_audio_second_window_t3_ParamLimits

0x9bb3,	// (0x00077d88) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007d2d8) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007d2d8) popup_call_audio_second_window_t

0x99ac,	// (0x00077b81) bg_popup_call_pane_cp04

0x9be9,	// (0x00077dbe) list_conf_pane

0x9bf1,	// (0x00077dc6) popup_call_audio_conf_window_t1

0x9bff,	// (0x00077dd4) call_thumbnail_pane_g1

0x9c07,	// (0x00077ddc) bg_pinb_pane_ParamLimits

0x9c07,	// (0x00077ddc) bg_pinb_pane

0x9c15,	// (0x00077dea) find_pinb_pane

0x9c1e,	// (0x00077df3) listscroll_pinb_pane_ParamLimits

0x9c1e,	// (0x00077df3) listscroll_pinb_pane

0x9c2d,	// (0x00077e02) pinb_bg_pane_g1

0xff2b,	// (0x0006e100) pinb_bg_pane_g2

0xff37,	// (0x0006e10c) pinb_bg_pane_g3

0xff43,	// (0x0006e118) pinb_bg_pane_g4

0xff4f,	// (0x0006e124) pinb_bg_pane_g5

0xff5b,	// (0x0006e130) pinb_bg_pane_g6

0xff66,	// (0x0006e13b) pinb_bg_pane_g7

0xff71,	// (0x0006e146) pinb_bg_pane_g8

0xff7c,	// (0x0006e151) pinb_bg_pane_g9

0xff86,	// (0x0006e15b) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007d2df) pinb_bg_pane_g

0xffa3,	// (0x0006e178) grid_pinb_pane

0xffae,	// (0x0006e183) list_pinb_pane

0xffb9,	// (0x0006e18e) scroll_pane_cp01_ParamLimits

0xffb9,	// (0x0006e18e) scroll_pane_cp01

0x9c37,	// (0x00077e0c) find_pinb_pane_g1_ParamLimits

0x9c37,	// (0x00077e0c) find_pinb_pane_g1

0x9c4f,	// (0x00077e24) find_pinb_pane_t1

0x9c61,	// (0x00077e36) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007d2f9) find_pinb_pane_t

0x9c76,	// (0x00077e4b) input_focus_pane_cp01_ParamLimits

0x9c76,	// (0x00077e4b) input_focus_pane_cp01

0xffcb,	// (0x0006e1a0) cell_pinb_pane_ParamLimits

0xffcb,	// (0x0006e1a0) cell_pinb_pane

0xffed,	// (0x0006e1c2) cell_pinb_pane_g1_ParamLimits

0xffed,	// (0x0006e1c2) cell_pinb_pane_g1

0x0002,	// (0x0006e1d7) cell_pinb_pane_g2_ParamLimits

0x0002,	// (0x0006e1d7) cell_pinb_pane_g2

0x9c82,	// (0x00077e57) cell_pinb_pane_g3_ParamLimits

0x9c82,	// (0x00077e57) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007d2fe) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007d2fe) cell_pinb_pane_g

0x99ac,	// (0x00077b81) grid_highlight_pane_cp01

0x000e,	// (0x0006e1e3) list_pinb_item_pane_ParamLimits

0x000e,	// (0x0006e1e3) list_pinb_item_pane

0x99ac,	// (0x00077b81) list_highlight_pane_cp02

0x0020,	// (0x0006e1f5) list_pinb_item_pane_g1_ParamLimits

0x0020,	// (0x0006e1f5) list_pinb_item_pane_g1

0x002d,	// (0x0006e202) list_pinb_item_pane_g2_ParamLimits

0x002d,	// (0x0006e202) list_pinb_item_pane_g2

0x0039,	// (0x0006e20e) list_pinb_item_pane_g3_ParamLimits

0x0039,	// (0x0006e20e) list_pinb_item_pane_g3

0x004a,	// (0x0006e21f) list_pinb_item_pane_g4_ParamLimits

0x004a,	// (0x0006e21f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007d305) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007d305) list_pinb_item_pane_g

0x0056,	// (0x0006e22b) list_pinb_item_pane_t1_ParamLimits

0x0056,	// (0x0006e22b) list_pinb_item_pane_t1

0x008b,	// (0x0006e260) calc_display_pane

0x00b3,	// (0x0006e288) calc_paper_pane

0x00d6,	// (0x0006e2ab) grid_calc_pane

0x99ac,	// (0x00077b81) bg_list_pane_cp01

0x0104,	// (0x0006e2d9) clock_g1

0x010c,	// (0x0006e2e1) clock_g2

0x0001,

0xf139,	// (0x0007d30e) clock_g

0x0114,	// (0x0006e2e9) clock_t1_ParamLimits

0x0114,	// (0x0006e2e9) clock_t1

0x0129,	// (0x0006e2fe) clock_t2_ParamLimits

0x0129,	// (0x0006e2fe) clock_t2

0x013b,	// (0x0006e310) clock_t3_ParamLimits

0x013b,	// (0x0006e310) clock_t3

0x014d,	// (0x0006e322) clock_t4_ParamLimits

0x014d,	// (0x0006e322) clock_t4

0x015f,	// (0x0006e334) clock_t5_ParamLimits

0x015f,	// (0x0006e334) clock_t5

0x0174,	// (0x0006e349) clock_t6_ParamLimits

0x0174,	// (0x0006e349) clock_t6

0x0186,	// (0x0006e35b) clock_t7_ParamLimits

0x0186,	// (0x0006e35b) clock_t7

0x0198,	// (0x0006e36d) clock_t8_ParamLimits

0x0198,	// (0x0006e36d) clock_t8

0x01ac,	// (0x0006e381) clock_t9_ParamLimits

0x01ac,	// (0x0006e381) clock_t9

0x0008,

0xf13e,	// (0x0007d313) clock_t_ParamLimits

0xf13e,	// (0x0007d313) clock_t

0xa883,	// (0x00078a58) popup_clock_analogue_window_cp02

0xa883,	// (0x00078a58) popup_clock_digital_window_cp01

0xa88b,	// (0x00078a60) listscroll_help_pane

0x99ac,	// (0x00077b81) phob_pre_status_pane

0xa895,	// (0x00078a6a) grid_qdial_pane

0x9c07,	// (0x00077ddc) listscroll_mce_pane

0x9c07,	// (0x00077ddc) bg_notes_pane

0xa89f,	// (0x00078a74) list_notes_pane

0x01c2,	// (0x0006e397) scroll_pane_cp06

0xa8ad,	// (0x00078a82) bg_calc_paper_pane

0x9ca0,	// (0x00077e75) list_calc_pane

0xa8c1,	// (0x00078a96) bg_calc_display_pane

0x01d6,	// (0x0006e3ab) calc_display_pane_t1

0x01e8,	// (0x0006e3bd) calc_display_pane_t2

0x9cba,	// (0x00077e8f) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007d326) calc_display_pane_t

0x01fa,	// (0x0006e3cf) cell_calc_pane_ParamLimits

0x01fa,	// (0x0006e3cf) cell_calc_pane

0xa8cd,	// (0x00078aa2) bg_calc_paper_pane_g1

0xa8d9,	// (0x00078aae) bg_calc_paper_pane_g2

0xa8e5,	// (0x00078aba) bg_calc_paper_pane_g3

0xa8f1,	// (0x00078ac6) bg_calc_paper_pane_g4

0xa8fd,	// (0x00078ad2) bg_calc_paper_pane_g5

0x0237,	// (0x0006e40c) bg_calc_paper_pane_g6

0x024a,	// (0x0006e41f) bg_calc_paper_pane_g7

0x025d,	// (0x0006e432) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007d32d) bg_calc_paper_pane_g

0x026e,	// (0x0006e443) calc_bg_paper_pane_g9

0x027f,	// (0x0006e454) list_calc_item_pane_ParamLimits

0x027f,	// (0x0006e454) list_calc_item_pane

0xa909,	// (0x00078ade) list_calc_item_pane_g1

0x9ccc,	// (0x00077ea1) list_calc_item_pane_t1_ParamLimits

0x9ccc,	// (0x00077ea1) list_calc_item_pane_t1

0x0297,	// (0x0006e46c) list_calc_item_pane_t2_ParamLimits

0x0297,	// (0x0006e46c) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007d33e) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007d33e) list_calc_item_pane_t

0xa916,	// (0x00078aeb) cell_calc_pane_g1

0xa920,	// (0x00078af5) grid_highlight_pane_cp02

0xa942,	// (0x00078b17) bg_calc_display_pane_g1

0x9cde,	// (0x00077eb3) bg_calc_display_pane_g2

0xa94b,	// (0x00078b20) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007d348) bg_calc_display_pane_g

0x02c9,	// (0x0006e49e) cell_qdial_pane_ParamLimits

0x02c9,	// (0x0006e49e) cell_qdial_pane

0x02dd,	// (0x0006e4b2) cell_qdial_pane_g1_ParamLimits

0x02dd,	// (0x0006e4b2) cell_qdial_pane_g1

0x02f3,	// (0x0006e4c8) cell_qdial_pane_g2_ParamLimits

0x02f3,	// (0x0006e4c8) cell_qdial_pane_g2

0xa954,	// (0x00078b29) cell_qdial_pane_g3_ParamLimits

0xa954,	// (0x00078b29) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007d34f) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007d34f) cell_qdial_pane_g

0x031a,	// (0x0006e4ef) cell_qdial_pane_t1_ParamLimits

0x031a,	// (0x0006e4ef) cell_qdial_pane_t1

0x0332,	// (0x0006e507) cell_qdial_pane_t2_ParamLimits

0x0332,	// (0x0006e507) cell_qdial_pane_t2

0x0345,	// (0x0006e51a) cell_qdial_pane_t3_ParamLimits

0x0345,	// (0x0006e51a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007d358) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007d358) cell_qdial_pane_t

0x99ac,	// (0x00077b81) grid_highlight_pane_cp04

0xa960,	// (0x00078b35) thumbnail_qdial_pane_ParamLimits

0xa960,	// (0x00078b35) thumbnail_qdial_pane

0xa9bc,	// (0x00078b91) list_help_pane

0xa9c5,	// (0x00078b9a) scroll_pane_cp02

0x0358,	// (0x0006e52d) help_list_pane_t1_ParamLimits

0x0358,	// (0x0006e52d) help_list_pane_t1

0x9ce8,	// (0x00077ebd) bg_notes_pane_g2

0x9cf0,	// (0x00077ec5) bg_notes_pane_g3

0x9cf8,	// (0x00077ecd) notes_bg_pane_g1

0x9d00,	// (0x00077ed5) notes_bg_pane_g4

0x9d08,	// (0x00077edd) notes_bg_pane_g5

0x9d10,	// (0x00077ee5) notes_bg_pane_g6

0x9d18,	// (0x00077eed) notes_bg_pane_g7

0x9d20,	// (0x00077ef5) notes_bg_pane_g8

0x9d28,	// (0x00077efd) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007d376) notes_bg_pane_g

0x0376,	// (0x0006e54b) list_notes_text_pane_ParamLimits

0x0376,	// (0x0006e54b) list_notes_text_pane

0xa9ce,	// (0x00078ba3) list_notes_text_pane_g1

0x038a,	// (0x0006e55f) list_notes_text_pane_t1

0x0398,	// (0x0006e56d) listscroll_cale_week_pane

0x03ce,	// (0x0006e5a3) bg_cale_heading_pane

0x03f7,	// (0x0006e5cc) bg_cale_pane_cp01

0x0419,	// (0x0006e5ee) cale_week_corner_pane

0x0438,	// (0x0006e60d) cale_week_day_heading_pane

0x0466,	// (0x0006e63b) cale_week_scroll_pane_g1

0x048a,	// (0x0006e65f) cale_week_scroll_pane_g2

0x04a2,	// (0x0006e677) cale_week_scroll_pane_g3

0x04ba,	// (0x0006e68f) cale_week_scroll_pane_g4

0x04d6,	// (0x0006e6ab) cale_week_scroll_pane_g5

0x04f6,	// (0x0006e6cb) cale_week_scroll_pane_g6

0x0516,	// (0x0006e6eb) cale_week_scroll_pane_g7

0x053a,	// (0x0006e70f) cale_week_scroll_pane_g8

0x055e,	// (0x0006e733) cale_week_scroll_pane_g9

0x057b,	// (0x0006e750) cale_week_scroll_pane_g10

0x0598,	// (0x0006e76d) cale_week_scroll_pane_g11

0x05b5,	// (0x0006e78a) cale_week_scroll_pane_g12

0x05d2,	// (0x0006e7a7) cale_week_scroll_pane_g13

0x05ef,	// (0x0006e7c4) cale_week_scroll_pane_g14

0x0618,	// (0x0006e7ed) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007d385) cale_week_scroll_pane_g

0x0665,	// (0x0006e83a) cale_week_time_pane

0x0689,	// (0x0006e85e) grid_cale_week_pane

0xa9fa,	// (0x00078bcf) scroll_pane_cp08

0x06c0,	// (0x0006e895) cell_cale_week_pane_ParamLimits

0x06c0,	// (0x0006e895) cell_cale_week_pane

0x0750,	// (0x0006e925) cale_week_day_heading_pane_t1

0x079a,	// (0x0006e96f) cale_week_day_heading_pane_t2

0x07e9,	// (0x0006e9be) cale_week_day_heading_pane_t3

0x0838,	// (0x0006ea0d) cale_week_day_heading_pane_t4

0x0887,	// (0x0006ea5c) cale_week_day_heading_pane_t5

0x08da,	// (0x0006eaaf) cale_week_day_heading_pane_t6

0x0931,	// (0x0006eb06) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007d3a6) cale_week_day_heading_pane_t

0xaa1c,	// (0x00078bf1) bg_cale_side_pane

0x097b,	// (0x0006eb50) cale_week_time_pane_t1

0x09b5,	// (0x0006eb8a) cale_week_time_pane_t2

0x09ef,	// (0x0006ebc4) cale_week_time_pane_t3

0x0a29,	// (0x0006ebfe) cale_week_time_pane_t4

0x0a63,	// (0x0006ec38) cale_week_time_pane_t5

0x0a9d,	// (0x0006ec72) cale_week_time_pane_t6

0x0ad7,	// (0x0006ecac) cale_week_time_pane_t7

0x0b11,	// (0x0006ece6) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007d3b5) cale_week_time_pane_t

0x0b51,	// (0x0006ed26) cell_cale_week_pane_g2

0x0b70,	// (0x0006ed45) cell_cale_week_pane_g3_ParamLimits

0x0b70,	// (0x0006ed45) cell_cale_week_pane_g3

0xaa2a,	// (0x00078bff) grid_highlight_pane_cp07

0xaa32,	// (0x00078c07) listscroll_gms_pane

0xaa3c,	// (0x00078c11) grid_gms_pane

0xaa45,	// (0x00078c1a) listscroll_gms_pane_g1

0xaa4d,	// (0x00078c22) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007d3c6) listscroll_gms_pane_g

0x0b88,	// (0x0006ed5d) scroll_pane_cp010

0x0b93,	// (0x0006ed68) cell_gms_pane_ParamLimits

0x0b93,	// (0x0006ed68) cell_gms_pane

0x0bad,	// (0x0006ed82) cell_gms_pane_g1

0xaa55,	// (0x00078c2a) cell_gms_pane_g2

0xaa5d,	// (0x00078c32) cell_gms_pane_g3

0xaa66,	// (0x00078c3b) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007d3cb) cell_gms_pane_g

0xaa6f,	// (0x00078c44) grid_highlight_pane_cp09

0x33cd,	// (0x000715a2) phob_pre_status_pane_g1

0x33d5,	// (0x000715aa) phob_pre_status_pane_g2

0x33dd,	// (0x000715b2) phob_pre_status_pane_g3

0x33e5,	// (0x000715ba) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007d7b6) phob_pre_status_pane_g

0x33f5,	// (0x000715ca) phob_pre_status_pane_t1

0x3405,	// (0x000715da) phob_pre_status_pane_t2

0x3415,	// (0x000715ea) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007d7c1) phob_pre_status_pane_t

0xaa77,	// (0x00078c4c) bg_list_pane_cp05

0x0bbd,	// (0x0006ed92) grid_vorec_pane

0x0bc9,	// (0x0006ed9e) vorec_t1

0x0bd7,	// (0x0006edac) vorec_t2

0x0be5,	// (0x0006edba) vorec_t3

0x0bf3,	// (0x0006edc8) vorec_t4

0x950c,	// (0x000776e1) vorec_t5

0x951a,	// (0x000776ef) vorec_t6

0x0004,

0xf1ff,	// (0x0007d3d4) vorec_t

0x9528,	// (0x000776fd) wait_bar_pane_cp01

0x0c0f,	// (0x0006ede4) cell_vorec_pane_ParamLimits

0x0c0f,	// (0x0006ede4) cell_vorec_pane

0x9d30,	// (0x00077f05) cell_vorec_pane_g1

0x99ac,	// (0x00077b81) grid_highlight_pane_cp05

0x0c3a,	// (0x0006ee0f) cams_zoom_pane

0x0c49,	// (0x0006ee1e) image_vga_pane

0x0c63,	// (0x0006ee38) main_camera_pane_g1

0x0c75,	// (0x0006ee4a) main_camera_pane_g2

0x0c85,	// (0x0006ee5a) main_camera_pane_g3

0x0c99,	// (0x0006ee6e) main_camera_pane_g4

0x0cad,	// (0x0006ee82) main_camera_pane_g5

0x0cc1,	// (0x0006ee96) main_camera_pane_g6

0x0cd5,	// (0x0006eeaa) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007d3df) main_camera_pane_g

0x0ce9,	// (0x0006eebe) main_camera_pane_t1

0x0cff,	// (0x0006eed4) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007d3f0) main_camera_pane_t

0x0d3d,	// (0x0006ef12) cams_zoom_pane_cp_ParamLimits

0x0d3d,	// (0x0006ef12) cams_zoom_pane_cp

0x0d65,	// (0x0006ef3a) image_cif_pane_ParamLimits

0x0d65,	// (0x0006ef3a) image_cif_pane

0x0da0,	// (0x0006ef75) image_subqcif_pane

0x0daa,	// (0x0006ef7f) main_video_pane_g1_ParamLimits

0x0daa,	// (0x0006ef7f) main_video_pane_g1

0x0dce,	// (0x0006efa3) main_video_pane_g2_ParamLimits

0x0dce,	// (0x0006efa3) main_video_pane_g2

0x0e04,	// (0x0006efd9) main_video_pane_g3_ParamLimits

0x0e04,	// (0x0006efd9) main_video_pane_g3

0x0e32,	// (0x0006f007) main_video_pane_g4_ParamLimits

0x0e32,	// (0x0006f007) main_video_pane_g4

0x0e60,	// (0x0006f035) main_video_pane_g5_ParamLimits

0x0e60,	// (0x0006f035) main_video_pane_g5

0xaa8b,	// (0x00078c60) main_video_pane_g6_ParamLimits

0xaa8b,	// (0x00078c60) main_video_pane_g6

0x0006,

0xf220,	// (0x0007d3f5) main_video_pane_g_ParamLimits

0xf220,	// (0x0007d3f5) main_video_pane_g

0x0e89,	// (0x0006f05e) main_video_pane_t1_ParamLimits

0x0e89,	// (0x0006f05e) main_video_pane_t1

0xaaa5,	// (0x00078c7a) cams_zoom_pane_g1

0xaaae,	// (0x00078c83) cams_zoom_pane_g2

0xaab7,	// (0x00078c8c) cams_zoom_pane_g3

0xaac0,	// (0x00078c95) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007d404) cams_zoom_pane_g

0x0ee6,	// (0x0006f0bb) grid_cams_pane

0x0f00,	// (0x0006f0d5) linegrid_cams_pane

0x0f12,	// (0x0006f0e7) cell_cams_pane_ParamLimits

0x0f12,	// (0x0006f0e7) cell_cams_pane

0xaac9,	// (0x00078c9e) cams_burst_image_pane

0xaad1,	// (0x00078ca6) cell_cams_pane_g1

0x99ac,	// (0x00077b81) grid_highlight_pane_cp03

0xa916,	// (0x00078aeb) mp_bg_pane_g1

0x99ac,	// (0x00077b81) bg_list_pane_cp03

0xc72c,	// (0x0007a901) bg_mp_pane

0xc734,	// (0x0007a909) grid_mp_pane

0xc73c,	// (0x0007a911) media_player_g1

0xc746,	// (0x0007a91b) media_player_t1

0xc754,	// (0x0007a929) media_player_t2

0xc762,	// (0x0007a937) media_player_t3

0xc770,	// (0x0007a945) media_player_t4

0xc77e,	// (0x0007a953) media_player_t5

0xc78c,	// (0x0007a961) media_player_t6

0xc79a,	// (0x0007a96f) media_player_t7

0x0006,

0xf5cb,	// (0x0007d7a0) media_player_t

0xc7a8,	// (0x0007a97d) wait_bar_pane_cp02

0xf5b0,	// (0x0007d785) main_usb_pane_t

0x33c4,	// (0x00071599) cell_mp_pane

0xa916,	// (0x00078aeb) cell_mp_pane_g1

0x99ac,	// (0x00077b81) grid_highlight_pane_cp06

0xaad9,	// (0x00078cae) grid_skin_colour_pane

0xaae1,	// (0x00078cb6) list_highlight_pane_cp03

0x1027,	// (0x0006f1fc) skin_g1

0xaae9,	// (0x00078cbe) skin_t1

0xaaf8,	// (0x00078ccd) skin_t2

0x0001,

0xf264,	// (0x0007d439) skin_t

0x102f,	// (0x0006f204) cell_skin_colour_pane_ParamLimits

0x102f,	// (0x0006f204) cell_skin_colour_pane

0xab06,	// (0x00078cdb) cell_skin_colour_pane_g1

0x10a2,	// (0x0006f277) call_video_g1_ParamLimits

0x10a2,	// (0x0006f277) call_video_g1

0x10be,	// (0x0006f293) call_video_g2_ParamLimits

0x10be,	// (0x0006f293) call_video_g2

0x0001,

0xf269,	// (0x0007d43e) call_video_g_ParamLimits

0xf269,	// (0x0007d43e) call_video_g

0x1103,	// (0x0006f2d8) call_video_uplink_pane_cp1_ParamLimits

0x1103,	// (0x0006f2d8) call_video_uplink_pane_cp1

0xab18,	// (0x00078ced) call_video_uplink_pane_cp2

0x11a4,	// (0x0006f379) video_down_crop_pane_ParamLimits

0x11a4,	// (0x0006f379) video_down_crop_pane

0x128d,	// (0x0006f462) video_down_pane_ParamLimits

0x128d,	// (0x0006f462) video_down_pane

0xab20,	// (0x00078cf5) video_down_subqcif_pane_ParamLimits

0xab20,	// (0x00078cf5) video_down_subqcif_pane

0xab3a,	// (0x00078d0f) video_down_subqcif_pane_cp_ParamLimits

0xab3a,	// (0x00078d0f) video_down_subqcif_pane_cp

0xab62,	// (0x00078d37) im_reading_pane_ParamLimits

0xab62,	// (0x00078d37) im_reading_pane

0x1396,	// (0x0006f56b) im_writing_pane_ParamLimits

0x1396,	// (0x0006f56b) im_writing_pane

0x13b2,	// (0x0006f587) im_reading_pane_t1

0xab7c,	// (0x00078d51) list_im_pane

0xab8d,	// (0x00078d62) scroll_pane_cp07

0x13ee,	// (0x0006f5c3) im_writing_pane_t1_ParamLimits

0x13ee,	// (0x0006f5c3) im_writing_pane_t1

0xaba6,	// (0x00078d7b) im_writing_pane_t2_ParamLimits

0xaba6,	// (0x00078d7b) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007d448) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007d448) im_writing_pane_t

0x99ac,	// (0x00077b81) input_focus_pane_cp04

0x99ac,	// (0x00077b81) input_focus_pane_cp05

0x1403,	// (0x0006f5d8) list_im_single_pane_ParamLimits

0x1403,	// (0x0006f5d8) list_im_single_pane

0x1419,	// (0x0006f5ee) list_single_im_pane_t1

0x3384,	// (0x00071559) blid_accuracy_pane

0x338c,	// (0x00071561) blid_compass_pane

0x3396,	// (0x0007156b) main_location_t1

0x33a6,	// (0x0007157b) main_location_t2

0x33b6,	// (0x0007158b) main_location_t3

0x0002,

0xf5da,	// (0x0007d7af) main_location_t

0x99ac,	// (0x00077b81) aid_levels_location

0xa916,	// (0x00078aeb) blid_accuracy_pane_g1

0xa916,	// (0x00078aeb) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007d4aa) blid_accuracy_pane_g

0xabee,	// (0x00078dc3) wml_content_pane

0xac2c,	// (0x00078e01) wml_button_pane_ParamLimits

0xac2c,	// (0x00078e01) wml_button_pane

0x1428,	// (0x0006f5fd) wml_list_single_large_pane_ParamLimits

0x1428,	// (0x0006f5fd) wml_list_single_large_pane

0x143e,	// (0x0006f613) wml_list_single_medium_pane_ParamLimits

0x143e,	// (0x0006f613) wml_list_single_medium_pane

0x1455,	// (0x0006f62a) wml_list_single_small_pane_ParamLimits

0x1455,	// (0x0006f62a) wml_list_single_small_pane

0xac40,	// (0x00078e15) wml_selection_box_pane_ParamLimits

0xac40,	// (0x00078e15) wml_selection_box_pane

0xac53,	// (0x00078e28) wml_list_single_pane_t1

0xac62,	// (0x00078e37) wml_list_single_medium_pane_t1

0xac71,	// (0x00078e46) wml_list_single_large_pane_t1

0xac80,	// (0x00078e55) input_focus_pane_cp02_ParamLimits

0xac80,	// (0x00078e55) input_focus_pane_cp02

0xac93,	// (0x00078e68) wml_selection_box_pane_g1

0xac9c,	// (0x00078e71) wml_selection_box_pane_t1_ParamLimits

0xac9c,	// (0x00078e71) wml_selection_box_pane_t1

0x9c07,	// (0x00077ddc) bg_wml_button_pane_ParamLimits

0x9c07,	// (0x00077ddc) bg_wml_button_pane

0xacb4,	// (0x00078e89) wml_button_pane_g1

0xacbc,	// (0x00078e91) wml_button_pane_t1

0xacb4,	// (0x00078e89) wml_button_bg_pane_g1

0xaccc,	// (0x00078ea1) wml_button_bg_pane_g2

0xacd4,	// (0x00078ea9) wml_button_bg_pane_g3

0xacdc,	// (0x00078eb1) wml_button_bg_pane_g4

0xace4,	// (0x00078eb9) wml_button_bg_pane_g5

0xacec,	// (0x00078ec1) wml_button_bg_pane_g6

0xacf4,	// (0x00078ec9) wml_button_bg_pane_g7

0xacfc,	// (0x00078ed1) wml_button_bg_pane_g8

0xad04,	// (0x00078ed9) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007d44d) wml_button_bg_pane_g

0x1471,	// (0x0006f646) bg_list_pane_cp02

0xad0c,	// (0x00078ee1) mce_header_pane_ParamLimits

0xad0c,	// (0x00078ee1) mce_header_pane

0xad22,	// (0x00078ef7) mce_icon_pane

0xad22,	// (0x00078ef7) mce_image_pane

0xad2b,	// (0x00078f00) mce_text_pane_ParamLimits

0xad2b,	// (0x00078f00) mce_text_pane

0x147b,	// (0x0006f650) scroll_pane_cp03

0xac24,	// (0x00078df9) scroll_pane_cp04

0xad3e,	// (0x00078f13) scroll_pane_cp05_ParamLimits

0xad3e,	// (0x00078f13) scroll_pane_cp05

0x1485,	// (0x0006f65a) mce_header_field_pane_ParamLimits

0x1485,	// (0x0006f65a) mce_header_field_pane

0x149e,	// (0x0006f673) mce_header_field_pane_2_ParamLimits

0x149e,	// (0x0006f673) mce_header_field_pane_2

0x14b4,	// (0x0006f689) mce_header_field_pane_3

0x14bc,	// (0x0006f691) list_single_mce_message_pane_ParamLimits

0x14bc,	// (0x0006f691) list_single_mce_message_pane

0x14d5,	// (0x0006f6aa) list_single_mce_smart_pane_ParamLimits

0x14d5,	// (0x0006f6aa) list_single_mce_smart_pane

0xad4a,	// (0x00078f1f) input_focus_pane_cp03

0xad53,	// (0x00078f28) list_header_data_pane

0x14f9,	// (0x0006f6ce) mce_header_field_pane_t1

0x1509,	// (0x0006f6de) list_single_mce_header_pane_ParamLimits

0x1509,	// (0x0006f6de) list_single_mce_header_pane

0xad5b,	// (0x00078f30) list_single_mce_header_pane_t1

0xad6a,	// (0x00078f3f) list_single_mce_message_pane_g1

0xad72,	// (0x00078f47) list_single_mce_message_pane_t1

0x1543,	// (0x0006f718) bg_cale_heading_pane_cp01_ParamLimits

0x1543,	// (0x0006f718) bg_cale_heading_pane_cp01

0xad80,	// (0x00078f55) bg_cale_pane_cp02_ParamLimits

0xad80,	// (0x00078f55) bg_cale_pane_cp02

0x158a,	// (0x0006f75f) cale_month_corner_pane

0x15a9,	// (0x0006f77e) cale_month_day_heading_pane_ParamLimits

0x15a9,	// (0x0006f77e) cale_month_day_heading_pane

0x1608,	// (0x0006f7dd) cale_month_pane_g1_ParamLimits

0x1608,	// (0x0006f7dd) cale_month_pane_g1

0x1644,	// (0x0006f819) cale_month_pane_g2_ParamLimits

0x1644,	// (0x0006f819) cale_month_pane_g2

0x1680,	// (0x0006f855) cale_month_pane_g3_ParamLimits

0x1680,	// (0x0006f855) cale_month_pane_g3

0x16d4,	// (0x0006f8a9) cale_month_pane_g4_ParamLimits

0x16d4,	// (0x0006f8a9) cale_month_pane_g4

0x1728,	// (0x0006f8fd) cale_month_pane_g5_ParamLimits

0x1728,	// (0x0006f8fd) cale_month_pane_g5

0x1784,	// (0x0006f959) cale_month_pane_g6_ParamLimits

0x1784,	// (0x0006f959) cale_month_pane_g6

0x17e8,	// (0x0006f9bd) cale_month_pane_g7_ParamLimits

0x17e8,	// (0x0006f9bd) cale_month_pane_g7

0x1854,	// (0x0006fa29) cale_month_pane_g8_ParamLimits

0x1854,	// (0x0006fa29) cale_month_pane_g8

0x18c0,	// (0x0006fa95) cale_month_pane_g9_ParamLimits

0x18c0,	// (0x0006fa95) cale_month_pane_g9

0x191e,	// (0x0006faf3) cale_month_pane_g10_ParamLimits

0x191e,	// (0x0006faf3) cale_month_pane_g10

0x1970,	// (0x0006fb45) cale_month_pane_g11_ParamLimits

0x1970,	// (0x0006fb45) cale_month_pane_g11

0x19c2,	// (0x0006fb97) cale_month_pane_g12_ParamLimits

0x19c2,	// (0x0006fb97) cale_month_pane_g12

0x1a1a,	// (0x0006fbef) cale_month_pane_g13_ParamLimits

0x1a1a,	// (0x0006fbef) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007d460) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007d460) cale_month_pane_g

0x1a72,	// (0x0006fc47) cale_month_week_pane

0x1a96,	// (0x0006fc6b) grid_cale_month_pane_ParamLimits

0x1a96,	// (0x0006fc6b) grid_cale_month_pane

0x1aec,	// (0x0006fcc1) cale_month_day_heading_pane_t1

0x1b72,	// (0x0006fd47) cale_month_day_heading_pane_t2

0x1c03,	// (0x0006fdd8) cale_month_day_heading_pane_t3

0x1c94,	// (0x0006fe69) cale_month_day_heading_pane_t4

0x1d25,	// (0x0006fefa) cale_month_day_heading_pane_t5

0x1dc6,	// (0x0006ff9b) cale_month_day_heading_pane_t6

0x1e6b,	// (0x00070040) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007d47b) cale_month_day_heading_pane_t

0xaa1c,	// (0x00078bf1) bg_cale_side_pane_cp01

0x1f14,	// (0x000700e9) cale_month_week_pane_t1

0x1f2d,	// (0x00070102) cale_month_week_pane_t2

0x1f46,	// (0x0007011b) cale_month_week_pane_t3

0x1f5f,	// (0x00070134) cale_month_week_pane_t4

0x1f78,	// (0x0007014d) cale_month_week_pane_t5

0x1f91,	// (0x00070166) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007d48a) cale_month_week_pane_t

0x1fb0,	// (0x00070185) cell_cale_month_pane_ParamLimits

0x1fb0,	// (0x00070185) cell_cale_month_pane

0x9d5e,	// (0x00077f33) cell_cale_month_pane_g1

0x2104,	// (0x000702d9) cell_cale_month_pane_t1_ParamLimits

0x2104,	// (0x000702d9) cell_cale_month_pane_t1

0xaa2a,	// (0x00078bff) grid_highlight_pane_cp08

0xa916,	// (0x00078aeb) main_smil_g1

0x2124,	// (0x000702f9) smil_status_pane

0xadbf,	// (0x00078f94) smil_text_pane

0xc64a,	// (0x0007a81f) bg_popup_call3_rect_pane_g8

0xc652,	// (0x0007a827) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007d743) bg_popup_call3_rect_pane_g

0xc8e0,	// (0x0007aab5) smil_status_volume_pane_g1

0x2137,	// (0x0007030c) smil_status_pane_t1

0x9e92,	// (0x00078067) volume_smil_pane

0xadc9,	// (0x00078f9e) list_smil_text_pane

0x2150,	// (0x00070325) scroll_pane_cp011

0x215b,	// (0x00070330) smil_text_list_pane_t1_ParamLimits

0x215b,	// (0x00070330) smil_text_list_pane_t1

0x9d6a,	// (0x00077f3f) aid_volume_smil_ParamLimits

0x9d6a,	// (0x00077f3f) aid_volume_smil

0xa916,	// (0x00078aeb) smil_volume_pane_g1

0xa916,	// (0x00078aeb) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007d4aa) smil_volume_pane_g

0x0398,	// (0x0006e56d) listscroll_cale_day_pane

0xadd3,	// (0x00078fa8) bg_cale_pane

0xadeb,	// (0x00078fc0) list_cale_pane

0xae0e,	// (0x00078fe3) scroll_pane_cp09

0xae1f,	// (0x00078ff4) cale_bg_pane_g1

0xae27,	// (0x00078ffc) cale_bg_pane_g2

0xae2f,	// (0x00079004) cale_bg_pane_g3

0xae37,	// (0x0007900c) cale_bg_pane_g4

0xae3f,	// (0x00079014) cale_bg_pane_g5

0xae47,	// (0x0007901c) cale_bg_pane_g6

0xae4f,	// (0x00079024) cale_bg_pane_g7

0xae57,	// (0x0007902c) cale_bg_pane_g8

0xae5f,	// (0x00079034) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007d4af) cale_bg_pane_g

0x2194,	// (0x00070369) list_cale_time_pane_ParamLimits

0x2194,	// (0x00070369) list_cale_time_pane

0xae6f,	// (0x00079044) list_cale_time_pane_g1_ParamLimits

0xae6f,	// (0x00079044) list_cale_time_pane_g1

0xae7b,	// (0x00079050) list_cale_time_pane_g2_ParamLimits

0xae7b,	// (0x00079050) list_cale_time_pane_g2

0x21a8,	// (0x0007037d) list_cale_time_pane_g3_ParamLimits

0x21a8,	// (0x0007037d) list_cale_time_pane_g3

0x21b6,	// (0x0007038b) list_cale_time_pane_g4_ParamLimits

0x21b6,	// (0x0007038b) list_cale_time_pane_g4

0x21c4,	// (0x00070399) list_cale_time_pane_g5_ParamLimits

0x21c4,	// (0x00070399) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007d4c2) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007d4c2) list_cale_time_pane_g

0xae95,	// (0x0007906a) list_cale_time_pane_t1_ParamLimits

0xae95,	// (0x0007906a) list_cale_time_pane_t1

0xaebd,	// (0x00079092) list_cale_time_pane_t2_ParamLimits

0xaebd,	// (0x00079092) list_cale_time_pane_t2

0x2563,	// (0x00070738) aid_blid_cardinal_pane

0x25a1,	// (0x00070776) compass_pane_t4

0xaee5,	// (0x000790ba) list_cale_time_pane_t4_ParamLimits

0xaee5,	// (0x000790ba) list_cale_time_pane_t4

0x25af,	// (0x00070784) compass_pane_t5

0x25bd,	// (0x00070792) compass_pane_t6

0x25cb,	// (0x000707a0) compass_pane_t7

0xb2ff,	// (0x000794d4) navi_pane_cc_t1

0xb44c,	// (0x00079621) aid_phob_thumbnail_center_pane

0x2d4f,	// (0x00070f24) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007d4cf) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007d4cf) list_cale_time_pane_t

0x9603,	// (0x000777d8) bg_popup_window_pane_cp02_ParamLimits

0x9603,	// (0x000777d8) bg_popup_window_pane_cp02

0xaf0d,	// (0x000790e2) heading_pane_cp01_ParamLimits

0xaf0d,	// (0x000790e2) heading_pane_cp01

0xaf19,	// (0x000790ee) loc_req_pane_ParamLimits

0xaf19,	// (0x000790ee) loc_req_pane

0xaf29,	// (0x000790fe) loc_type_pane_ParamLimits

0xaf29,	// (0x000790fe) loc_type_pane

0xaf3b,	// (0x00079110) loc_type_pane_t1_ParamLimits

0xaf3b,	// (0x00079110) loc_type_pane_t1

0xaf4d,	// (0x00079122) loc_type_pane_t2_ParamLimits

0xaf4d,	// (0x00079122) loc_type_pane_t2

0xaf5f,	// (0x00079134) loc_type_pane_t3_ParamLimits

0xaf5f,	// (0x00079134) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007d4d6) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007d4d6) loc_type_pane_t

0xaf71,	// (0x00079146) list_loc_req_pane

0xaf7b,	// (0x00079150) scroll_pane_cp012

0x21d2,	// (0x000703a7) list_single_loc_request_popup_menu_pane_ParamLimits

0x21d2,	// (0x000703a7) list_single_loc_request_popup_menu_pane

0xaf86,	// (0x0007915b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf86,	// (0x0007915b) list_single_loc_request_popup_menu_pane_g1

0xaf92,	// (0x00079167) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf92,	// (0x00079167) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007d4dd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007d4dd) list_single_loc_request_popup_menu_pane_g

0xaf9e,	// (0x00079173) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf9e,	// (0x00079173) list_single_loc_request_popup_menu_pane_t1

0x9c07,	// (0x00077ddc) bg_popup_window_pane_cp03_ParamLimits

0x9c07,	// (0x00077ddc) bg_popup_window_pane_cp03

0xafb4,	// (0x00079189) heading_loc_req_pane_ParamLimits

0xafb4,	// (0x00079189) heading_loc_req_pane

0x21df,	// (0x000703b4) popup_dyc_status_message_window_g1_ParamLimits

0x21df,	// (0x000703b4) popup_dyc_status_message_window_g1

0x21f3,	// (0x000703c8) popup_dyc_status_message_window_t1_ParamLimits

0x21f3,	// (0x000703c8) popup_dyc_status_message_window_t1

0x2208,	// (0x000703dd) popup_dyc_status_message_window_t2_ParamLimits

0x2208,	// (0x000703dd) popup_dyc_status_message_window_t2

0x221d,	// (0x000703f2) popup_dyc_status_message_window_t3_ParamLimits

0x221d,	// (0x000703f2) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007d4e2) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007d4e2) popup_dyc_status_message_window_t

0x99ac,	// (0x00077b81) bg_heading_pane_cp01

0xafc0,	// (0x00079195) heading_loc_req_pane_g1

0xafc8,	// (0x0007919d) heading_loc_req_pane_g2

0xafd0,	// (0x000791a5) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007d4e9) heading_loc_req_pane_g

0xafd8,	// (0x000791ad) heading_loc_req_pane_t1

0xafe8,	// (0x000791bd) bg_popup_sub_pane_cp01_ParamLimits

0xafe8,	// (0x000791bd) bg_popup_sub_pane_cp01

0xaff6,	// (0x000791cb) popup_cale_events_window_g1_ParamLimits

0xaff6,	// (0x000791cb) popup_cale_events_window_g1

0xb016,	// (0x000791eb) popup_cale_events_window_g2_ParamLimits

0xb016,	// (0x000791eb) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007d51d) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007d51d) popup_cale_events_window_g

0xb036,	// (0x0007920b) popup_cale_events_window_t1_ParamLimits

0xb036,	// (0x0007920b) popup_cale_events_window_t1

0xb048,	// (0x0007921d) popup_cale_events_window_t2_ParamLimits

0xb048,	// (0x0007921d) popup_cale_events_window_t2

0xb086,	// (0x0007925b) popup_cale_events_window_t3_ParamLimits

0xb086,	// (0x0007925b) popup_cale_events_window_t3

0xb0c0,	// (0x00079295) popup_cale_events_window_t4_ParamLimits

0xb0c0,	// (0x00079295) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007d522) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007d522) popup_cale_events_window_t

0x2322,	// (0x000704f7) call_type_pane

0x2332,	// (0x00070507) popup_call_status_window_g1

0x2346,	// (0x0007051b) popup_call_status_window_g2

0x235a,	// (0x0007052f) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007d52b) popup_call_status_window_g

0xb0f6,	// (0x000792cb) call_type_pane_g1

0xb0ff,	// (0x000792d4) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007d532) call_type_pane_g

0x99ac,	// (0x00077b81) bg_popup_sub_pane_cp02

0xb108,	// (0x000792dd) listscroll_popup_wml_pane

0xb110,	// (0x000792e5) list_wml_pane

0xb11a,	// (0x000792ef) scroll_pane_cp013

0xb125,	// (0x000792fa) list_single_graphic_popup_wml_pane_ParamLimits

0xb125,	// (0x000792fa) list_single_graphic_popup_wml_pane

0xa916,	// (0x00078aeb) list_single_graphic_popup_wml_pane_g1

0xb139,	// (0x0007930e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007d537) list_single_graphic_popup_wml_pane_g

0xb141,	// (0x00079316) list_single_graphic_popup_wml_pane_t1

0xb157,	// (0x0007932c) aid_call_pane

0x9bff,	// (0x00077dd4) popup_clock_analogue_window_g1

0x9bff,	// (0x00077dd4) popup_clock_analogue_window_g2

0x9d8c,	// (0x00077f61) popup_clock_analogue_window_g3

0x9d8c,	// (0x00077f61) popup_clock_analogue_window_g4

0xa916,	// (0x00078aeb) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007d53c) popup_clock_analogue_window_g

0x9d94,	// (0x00077f69) popup_clock_analogue_window_t1

0x9da2,	// (0x00077f77) clock_digital_number_pane_ParamLimits

0x9da2,	// (0x00077f77) clock_digital_number_pane

0x9dae,	// (0x00077f83) clock_digital_number_pane_cp02_ParamLimits

0x9dae,	// (0x00077f83) clock_digital_number_pane_cp02

0x9dba,	// (0x00077f8f) clock_digital_number_pane_cp03_ParamLimits

0x9dba,	// (0x00077f8f) clock_digital_number_pane_cp03

0x9dc6,	// (0x00077f9b) clock_digital_number_pane_cp04_ParamLimits

0x9dc6,	// (0x00077f9b) clock_digital_number_pane_cp04

0x9dd2,	// (0x00077fa7) clock_digital_separator_pane_ParamLimits

0x9dd2,	// (0x00077fa7) clock_digital_separator_pane

0x9dde,	// (0x00077fb3) popup_clock_digital_window_t1

0xa916,	// (0x00078aeb) clock_digital_number_pane_g1

0xa916,	// (0x00078aeb) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007d4aa) clock_digital_number_pane_g

0xa916,	// (0x00078aeb) clock_digital_separator_pane_g1

0xa916,	// (0x00078aeb) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007d4aa) clock_digital_separator_pane_g

0x99ac,	// (0x00077b81) bg_popup_window_pane_cp04

0xb15f,	// (0x00079334) heading_pane_cp03

0xb167,	// (0x0007933c) listscroll_popup_gms_pane

0xb16f,	// (0x00079344) grid_large_graphic_popup_pane

0xb179,	// (0x0007934e) listscroll_popup_gms_pane_g1

0xb181,	// (0x00079356) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007d547) listscroll_popup_gms_pane_g

0xac24,	// (0x00078df9) scroll_pane_cp014

0x236a,	// (0x0007053f) cell_large_graphic_popup_pane_ParamLimits

0x236a,	// (0x0007053f) cell_large_graphic_popup_pane

0x2382,	// (0x00070557) cell_large_graphic_popup_pane_g1_ParamLimits

0x2382,	// (0x00070557) cell_large_graphic_popup_pane_g1

0xb189,	// (0x0007935e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb189,	// (0x0007935e) cell_large_graphic_popup_pane_g2

0xb195,	// (0x0007936a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb195,	// (0x0007936a) cell_large_graphic_popup_pane_g3

0xb1a2,	// (0x00079377) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1a2,	// (0x00079377) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007d54c) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007d54c) cell_large_graphic_popup_pane_g

0xb1b2,	// (0x00079387) grid_highlight_pane_cp010

0xa916,	// (0x00078aeb) bg_popup_call_pane_g1

0xb1bc,	// (0x00079391) list_single_graphic_popup_conf_pane_ParamLimits

0xb1bc,	// (0x00079391) list_single_graphic_popup_conf_pane

0xb1ce,	// (0x000793a3) list_highlight_pane_cp01

0xb1d7,	// (0x000793ac) list_single_graphic_popup_conf_pane_g1

0xb1df,	// (0x000793b4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007d555) list_single_graphic_popup_conf_pane_g

0xb1e7,	// (0x000793bc) list_single_graphic_popup_conf_pane_t1

0xb1f5,	// (0x000793ca) linegrid_cams_pane_g1

0x238e,	// (0x00070563) linegrid_cams_pane_g2

0xaa5d,	// (0x00078c32) linegrid_cams_pane_g3

0xb1fe,	// (0x000793d3) linegrid_cams_pane_g4

0x2397,	// (0x0007056c) linegrid_cams_pane_g5

0x23a0,	// (0x00070575) linegrid_cams_pane_g6

0xaa66,	// (0x00078c3b) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007d55a) linegrid_cams_pane_g

0xb207,	// (0x000793dc) popup_clock_analogue_window

0xb207,	// (0x000793dc) popup_clock_digital_window

0x99ac,	// (0x00077b81) popup_phob_thumbnail_window

0xa916,	// (0x00078aeb) call_video_uplink_pane_g1

0xb210,	// (0x000793e5) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007d569) call_video_uplink_pane_g

0xb218,	// (0x000793ed) video_uplink_pane

0xb220,	// (0x000793f5) mce_image_pane_g1

0x23ab,	// (0x00070580) mce_image_pane_g2

0x23b5,	// (0x0007058a) mce_image_pane_g3

0x23bf,	// (0x00070594) mce_image_pane_g4

0x23c7,	// (0x0007059c) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007d56e) mce_image_pane_g

0xb22a,	// (0x000793ff) control_top_pane_stacon_cp01_ParamLimits

0xb22a,	// (0x000793ff) control_top_pane_stacon_cp01

0xb23e,	// (0x00079413) uni_indicator_pane_stacon_cp01_ParamLimits

0xb23e,	// (0x00079413) uni_indicator_pane_stacon_cp01

0xb24f,	// (0x00079424) bg_popup_sub_pane_cp03

0x23cf,	// (0x000705a4) chi_dic_find_pane

0x23d7,	// (0x000705ac) listscroll_chi_dic_pane

0x23e0,	// (0x000705b5) main_pane_chidic_g1

0x23f3,	// (0x000705c8) chi_dic_find_pane_t1

0xb259,	// (0x0007942e) find_chidic_pane

0xb262,	// (0x00079437) chi_dic_list_pane_ParamLimits

0xb262,	// (0x00079437) chi_dic_list_pane

0xb273,	// (0x00079448) scroll_pane_cp020

0x2401,	// (0x000705d6) find_chidic_pane_t1

0x99ac,	// (0x00077b81) input_focus_pane_cp06

0x000e,	// (0x0006e1e3) list_chi_dic_pane_ParamLimits

0x000e,	// (0x0006e1e3) list_chi_dic_pane

0x2410,	// (0x000705e5) list_chi_dic_pane_t1_ParamLimits

0x2410,	// (0x000705e5) list_chi_dic_pane_t1

0x99ac,	// (0x00077b81) list_highlight_pane_cp020

0xb27b,	// (0x00079450) bg_cale_heading_pane_g1

0x2423,	// (0x000705f8) bg_cale_heading_pane_g2

0x242b,	// (0x00070600) bg_cale_heading_pane_g3

0x2433,	// (0x00070608) bg_cale_heading_pane_g4

0x243d,	// (0x00070612) bg_cale_heading_pane_g5

0x2447,	// (0x0007061c) bg_cale_heading_pane_g6

0x244f,	// (0x00070624) bg_cale_heading_pane_g7

0x2457,	// (0x0007062c) bg_cale_heading_pane_g8

0x2461,	// (0x00070636) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007d579) bg_cale_heading_pane_g

0xb27b,	// (0x00079450) bg_cale_side_pane_g1

0x246b,	// (0x00070640) bg_cale_side_pane_g2

0x2475,	// (0x0007064a) bg_cale_side_pane_g3

0x247f,	// (0x00070654) bg_cale_side_pane_g4

0x2489,	// (0x0007065e) bg_cale_side_pane_g5

0x2493,	// (0x00070668) bg_cale_side_pane_g6

0x249d,	// (0x00070672) bg_cale_side_pane_g7

0x24a7,	// (0x0007067c) bg_cale_side_pane_g8

0x24af,	// (0x00070684) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007d58c) bg_cale_side_pane_g

0x24b7,	// (0x0007068c) popup_call_status_window_ParamLimits

0x24b7,	// (0x0007068c) popup_call_status_window

0xb283,	// (0x00079458) stacon_top_pane

0xb28b,	// (0x00079460) status_pane_ParamLimits

0xb28b,	// (0x00079460) status_pane

0xb2a0,	// (0x00079475) status_small_pane

0xb2a8,	// (0x0007947d) control_pane

0x99ac,	// (0x00077b81) stacon_bottom_pane

0xb2b0,	// (0x00079485) list_single_mce_smart_pane_t1_ParamLimits

0xb2b0,	// (0x00079485) list_single_mce_smart_pane_t1

0xb2c3,	// (0x00079498) list_single_mce_smart_pane_t2_ParamLimits

0xb2c3,	// (0x00079498) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007d59f) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007d59f) list_single_mce_smart_pane_t

0x2504,	// (0x000706d9) compass_pane

0x250f,	// (0x000706e4) main_location2_pane_t1

0x2523,	// (0x000706f8) main_location2_pane_t2

0x2539,	// (0x0007070e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007d5a4) main_location2_pane_t

0xb2e2,	// (0x000794b7) compass_pane_g1_ParamLimits

0xb2e2,	// (0x000794b7) compass_pane_g1

0x2583,	// (0x00070758) compass_pane_t1

0x2592,	// (0x00070767) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007d5ad) compass_pane_t

0x25d9,	// (0x000707ae) text_secondary_cp61

0xb2f6,	// (0x000794cb) navi_pane_cams_g5

0xb319,	// (0x000794ee) navi_pane_im_t1

0xb327,	// (0x000794fc) navi_pane_mp_g1_ParamLimits

0xb327,	// (0x000794fc) navi_pane_mp_g1

0xb33b,	// (0x00079510) navi_pane_mp_g2_ParamLimits

0xb33b,	// (0x00079510) navi_pane_mp_g2

0xb347,	// (0x0007951c) navi_pane_mp_g3_ParamLimits

0xb347,	// (0x0007951c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007d5c1) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007d5c1) navi_pane_mp_g

0xb353,	// (0x00079528) navi_pane_mp_t1

0xb361,	// (0x00079536) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007d5c8) navi_pane_mp_t

0xb39d,	// (0x00079572) navi_pane_vt_g1

0xb353,	// (0x00079528) navi_pane_vt_t1

0xb3a5,	// (0x0007957a) navi_slider_pane

0xaa77,	// (0x00078c4c) zooming_pane

0xb3ad,	// (0x00079582) navi_slider_pane_g1

0x9dfb,	// (0x00077fd0) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007d5cf) navi_slider_pane_g

0xb3d1,	// (0x000795a6) aid_levels_zoom

0xb3d9,	// (0x000795ae) zooming_pane_g1

0xb3e1,	// (0x000795b6) zooming_pane_g2

0xb3e1,	// (0x000795b6) zooming_pane_g3

0x0002,

0xf409,	// (0x0007d5de) zooming_pane_g

0xb3e9,	// (0x000795be) level_10_zoom

0xb3f2,	// (0x000795c7) level_11_zoom

0xb3fb,	// (0x000795d0) level_1_zoom

0xb404,	// (0x000795d9) level_2_zoom

0xb40d,	// (0x000795e2) level_3_zoom

0xb416,	// (0x000795eb) level_4_zoom

0xb41f,	// (0x000795f4) level_5_zoom

0xb428,	// (0x000795fd) level_6_zoom

0xb431,	// (0x00079606) level_7_zoom

0xb43a,	// (0x0007960f) level_8_zoom

0xb443,	// (0x00079618) level_9_zoom

0xb454,	// (0x00079629) popup_phob_thumbnail_window_g1

0xb45c,	// (0x00079631) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007d5e5) popup_phob_thumbnail_window_g

0xc7b0,	// (0x0007a985) level_1_location

0xc7b8,	// (0x0007a98d) level_2_location

0xc7c0,	// (0x0007a995) level_3_location

0xc7c8,	// (0x0007a99d) level_4_location

0xaa77,	// (0x00078c4c) level_5_location

0x2722,	// (0x000708f7) mce_icon_pane_g1

0x272c,	// (0x00070901) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007d5ea) mce_icon_pane_g

0x2734,	// (0x00070909) main_mup_pane_g1_ParamLimits

0x2734,	// (0x00070909) main_mup_pane_g1

0x274a,	// (0x0007091f) main_mup_pane_g2_ParamLimits

0x274a,	// (0x0007091f) main_mup_pane_g2

0x2762,	// (0x00070937) main_mup_pane_g3_ParamLimits

0x2762,	// (0x00070937) main_mup_pane_g3

0x277a,	// (0x0007094f) main_mup_pane_g4_ParamLimits

0x277a,	// (0x0007094f) main_mup_pane_g4

0x2792,	// (0x00070967) main_mup_pane_g5_ParamLimits

0x2792,	// (0x00070967) main_mup_pane_g5

0x27ae,	// (0x00070983) main_mup_pane_g6_ParamLimits

0x27ae,	// (0x00070983) main_mup_pane_g6

0x27c8,	// (0x0007099d) main_mup_pane_g7_ParamLimits

0x27c8,	// (0x0007099d) main_mup_pane_g7

0x27e6,	// (0x000709bb) main_mup_pane_g8_ParamLimits

0x27e6,	// (0x000709bb) main_mup_pane_g8

0x2804,	// (0x000709d9) main_mup_pane_g9_ParamLimits

0x2804,	// (0x000709d9) main_mup_pane_g9

0x2820,	// (0x000709f5) main_mup_pane_g10_ParamLimits

0x2820,	// (0x000709f5) main_mup_pane_g10

0x283e,	// (0x00070a13) main_mup_pane_g11_ParamLimits

0x283e,	// (0x00070a13) main_mup_pane_g11

0x2858,	// (0x00070a2d) main_mup_pane_g12_ParamLimits

0x2858,	// (0x00070a2d) main_mup_pane_g12

0x286e,	// (0x00070a43) main_mup_pane_g13_ParamLimits

0x286e,	// (0x00070a43) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007d5ef) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007d5ef) main_mup_pane_g

0x2882,	// (0x00070a57) main_mup_pane_t1_ParamLimits

0x2882,	// (0x00070a57) main_mup_pane_t1

0x289e,	// (0x00070a73) main_mup_pane_t2_ParamLimits

0x289e,	// (0x00070a73) main_mup_pane_t2

0x28b6,	// (0x00070a8b) main_mup_pane_t3_ParamLimits

0x28b6,	// (0x00070a8b) main_mup_pane_t3

0x28ce,	// (0x00070aa3) main_mup_pane_t4_ParamLimits

0x28ce,	// (0x00070aa3) main_mup_pane_t4

0x28ec,	// (0x00070ac1) main_mup_pane_t5_ParamLimits

0x28ec,	// (0x00070ac1) main_mup_pane_t5

0x2901,	// (0x00070ad6) main_mup_pane_t6_ParamLimits

0x2901,	// (0x00070ad6) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007d60a) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007d60a) main_mup_pane_t

0x2913,	// (0x00070ae8) mup_progress_pane_ParamLimits

0x2913,	// (0x00070ae8) mup_progress_pane

0x291f,	// (0x00070af4) mup_visualizer_pane_ParamLimits

0x291f,	// (0x00070af4) mup_visualizer_pane

0x2953,	// (0x00070b28) mup_volume_pane_ParamLimits

0x2953,	// (0x00070b28) mup_volume_pane

0xb464,	// (0x00079639) mup_visualizer_pane_g1_ParamLimits

0xb464,	// (0x00079639) mup_visualizer_pane_g1

0xb464,	// (0x00079639) mup_visualizer_pane_g2_ParamLimits

0xb464,	// (0x00079639) mup_visualizer_pane_g2

0xb2e2,	// (0x000794b7) mup_visualizer_pane_g3_ParamLimits

0xb2e2,	// (0x000794b7) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007d617) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007d617) mup_visualizer_pane_g

0xa916,	// (0x00078aeb) mup_volume_pane_g1

0xb47a,	// (0x0007964f) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007d61e) mup_volume_pane_g

0xa916,	// (0x00078aeb) mup_progress_pane_g1

0xb483,	// (0x00079658) mup_progress_pane_g2

0xb48c,	// (0x00079661) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007d623) mup_progress_pane_g

0x99ac,	// (0x00077b81) bg_popup_window_pane_cp05

0xb495,	// (0x0007966a) heading_pane_cp02_ParamLimits

0xb495,	// (0x0007966a) heading_pane_cp02

0xb4b1,	// (0x00079686) list_popup_blid_pane

0xb4b9,	// (0x0007968e) list_blid_sat_info_pane_ParamLimits

0xb4b9,	// (0x0007968e) list_blid_sat_info_pane

0xb4cc,	// (0x000796a1) list_blid_sat_info_pane_g1

0xb4d4,	// (0x000796a9) list_blid_sat_info_pane_t1

0x2a7d,	// (0x00070c52) mup_equalizer_pane_ParamLimits

0x2a7d,	// (0x00070c52) mup_equalizer_pane

0x2a9e,	// (0x00070c73) mup_equalizer_pane_cp1_ParamLimits

0x2a9e,	// (0x00070c73) mup_equalizer_pane_cp1

0x2abf,	// (0x00070c94) mup_equalizer_pane_cp2_ParamLimits

0x2abf,	// (0x00070c94) mup_equalizer_pane_cp2

0x2ae4,	// (0x00070cb9) mup_equalizer_pane_cp3_ParamLimits

0x2ae4,	// (0x00070cb9) mup_equalizer_pane_cp3

0x2b0d,	// (0x00070ce2) mup_equalizer_pane_cp4_ParamLimits

0x2b0d,	// (0x00070ce2) mup_equalizer_pane_cp4

0x2b36,	// (0x00070d0b) mup_equalizer_pane_cp5

0x2b4e,	// (0x00070d23) mup_equalizer_pane_cp6

0x2b66,	// (0x00070d3b) mup_equalizer_pane_cp7

0xc6ca,	// (0x0007a89f) bg_popup_call_poc_act_pane_g9

0xc6d2,	// (0x0007a8a7) bg_popup_call_poc_act_pane_g10

0xc6da,	// (0x0007a8af) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c07,	// (0x00077ddc) mup_scale_pane

0xa916,	// (0x00078aeb) mup_scale_pane_g1

0xb4e2,	// (0x000796b7) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007d63f) mup_scale_pane_g

0xb506,	// (0x000796db) msg_data_pane

0xb50e,	// (0x000796e3) scroll_pane_cp017

0x2b90,	// (0x00070d65) bg_list_pane_cp04_ParamLimits

0x2b90,	// (0x00070d65) bg_list_pane_cp04

0xb516,	// (0x000796eb) msg_data_pane_g1

0x2bb8,	// (0x00070d8d) msg_data_pane_g2

0x2bc2,	// (0x00070d97) msg_data_pane_g3

0x2bcc,	// (0x00070da1) msg_data_pane_g4

0x2bd4,	// (0x00070da9) msg_data_pane_g5

0x2bdc,	// (0x00070db1) msg_data_pane_g6

0x2be4,	// (0x00070db9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007d64e) msg_data_pane_g

0x2bec,	// (0x00070dc1) msg_text_pane_ParamLimits

0x2bec,	// (0x00070dc1) msg_text_pane

0x2c14,	// (0x00070de9) qrid_highlight_pane_cp011_ParamLimits

0x2c14,	// (0x00070de9) qrid_highlight_pane_cp011

0x99ac,	// (0x00077b81) msg_body_pane

0x99ac,	// (0x00077b81) msg_header_pane

0xb527,	// (0x000796fc) input_focus_pane_cp07

0xb53c,	// (0x00079711) msg_header_pane_t1_ParamLimits

0xb53c,	// (0x00079711) msg_header_pane_t1

0x9e0d,	// (0x00077fe2) msg_header_pane_t2_ParamLimits

0x9e0d,	// (0x00077fe2) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007d662) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007d662) msg_header_pane_t

0xb54e,	// (0x00079723) msg_body_pane_g1

0x2c38,	// (0x00070e0d) msg_body_pane_t1_ParamLimits

0x2c38,	// (0x00070e0d) msg_body_pane_t1

0x9e1f,	// (0x00077ff4) msg_body_pane_t2_ParamLimits

0x9e1f,	// (0x00077ff4) msg_body_pane_t2

0x9e31,	// (0x00078006) msg_body_pane_t3_ParamLimits

0x9e31,	// (0x00078006) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007d667) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007d667) msg_body_pane_t

0x2ca3,	// (0x00070e78) main_viewer_pane_g1_ParamLimits

0x2ca3,	// (0x00070e78) main_viewer_pane_g1

0x2cb1,	// (0x00070e86) main_viewer_pane_g2_ParamLimits

0x2cb1,	// (0x00070e86) main_viewer_pane_g2

0x2cbf,	// (0x00070e94) main_viewer_pane_g3_ParamLimits

0x2cbf,	// (0x00070e94) main_viewer_pane_g3

0x2cce,	// (0x00070ea3) main_viewer_pane_g4_ParamLimits

0x2cce,	// (0x00070ea3) main_viewer_pane_g4

0x9e5b,	// (0x00078030) main_viewer_pane_g5_ParamLimits

0x9e5b,	// (0x00078030) main_viewer_pane_g5

0x9e5b,	// (0x00078030) main_viewer_pane_g7_ParamLimits

0x9e5b,	// (0x00078030) main_viewer_pane_g7

0x9e6d,	// (0x00078042) main_viewer_pane_g8_ParamLimits

0x9e6d,	// (0x00078042) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007d677) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007d677) main_viewer_pane_g

0xb556,	// (0x0007972b) viewer_content_pane_ParamLimits

0xb556,	// (0x0007972b) viewer_content_pane

0x2d0c,	// (0x00070ee1) main_postcard_pane_g1_ParamLimits

0x2d0c,	// (0x00070ee1) main_postcard_pane_g1

0x2d22,	// (0x00070ef7) main_postcard_pane_g2_ParamLimits

0x2d22,	// (0x00070ef7) main_postcard_pane_g2

0x2d38,	// (0x00070f0d) main_postcard_pane_g3_ParamLimits

0x2d38,	// (0x00070f0d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007d688) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007d688) main_postcard_pane_g

0x2d4f,	// (0x00070f24) main_postcard_pane_g4

0xc8f3,	// (0x0007aac8) smil_status_volume_pane_g2

0x2d92,	// (0x00070f67) postcard_pane_ParamLimits

0x2d92,	// (0x00070f67) postcard_pane

0xb564,	// (0x00079739) postcard_pane_g1_ParamLimits

0xb564,	// (0x00079739) postcard_pane_g1

0x2de2,	// (0x00070fb7) postcard_pane_g2_ParamLimits

0x2de2,	// (0x00070fb7) postcard_pane_g2

0x2dee,	// (0x00070fc3) postcard_pane_g3_ParamLimits

0x2dee,	// (0x00070fc3) postcard_pane_g3

0xb572,	// (0x00079747) postcard_pane_g4_ParamLimits

0xb572,	// (0x00079747) postcard_pane_g4

0x2dfa,	// (0x00070fcf) postcard_pane_g5_ParamLimits

0x2dfa,	// (0x00070fcf) postcard_pane_g5

0x2e0f,	// (0x00070fe4) postcard_pane_g6_ParamLimits

0x2e0f,	// (0x00070fe4) postcard_pane_g6

0xb564,	// (0x00079739) postcard_pane_g7_ParamLimits

0xb564,	// (0x00079739) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007d695) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007d695) postcard_pane_g

0x2e27,	// (0x00070ffc) main_mp2_pane_g1_ParamLimits

0x2e27,	// (0x00070ffc) main_mp2_pane_g1

0x2e35,	// (0x0007100a) main_mp2_pane_g2_ParamLimits

0x2e35,	// (0x0007100a) main_mp2_pane_g2

0x2e41,	// (0x00071016) main_mp2_pane_g3_ParamLimits

0x2e41,	// (0x00071016) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007d6a4) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007d6a4) main_mp2_pane_g

0x2e4d,	// (0x00071022) main_mp2_pane_t1_ParamLimits

0x2e4d,	// (0x00071022) main_mp2_pane_t1

0x2e64,	// (0x00071039) main_mp2_pane_t2_ParamLimits

0x2e64,	// (0x00071039) main_mp2_pane_t2

0x2e76,	// (0x0007104b) main_mp2_pane_t3_ParamLimits

0x2e76,	// (0x0007104b) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007d6ab) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007d6ab) main_mp2_pane_t

0xb580,	// (0x00079755) pec_content_pane_ParamLimits

0xb580,	// (0x00079755) pec_content_pane

0xac24,	// (0x00078df9) scroll_pane_cp015

0xb592,	// (0x00079767) pec_attribute_pane_ParamLimits

0xb592,	// (0x00079767) pec_attribute_pane

0x2e88,	// (0x0007105d) pec_content_pane_g1_ParamLimits

0x2e88,	// (0x0007105d) pec_content_pane_g1

0xb5a2,	// (0x00079777) pec_content_pane_t1_ParamLimits

0xb5a2,	// (0x00079777) pec_content_pane_t1

0xb5b4,	// (0x00079789) pec_content_pane_t2_ParamLimits

0xb5b4,	// (0x00079789) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007d6b2) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007d6b2) pec_content_pane_t

0x2e94,	// (0x00071069) list_single_graphic_pane_cp01_ParamLimits

0x2e94,	// (0x00071069) list_single_graphic_pane_cp01

0x9c07,	// (0x00077ddc) bg_popup_sub_pane_cp04

0xb5c6,	// (0x0007979b) popup_mup_playback_window_g1

0xb5d2,	// (0x000797a7) popup_mup_playback_window_t1

0xb5e7,	// (0x000797bc) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007d6b7) popup_mup_playback_window_t

0xb61e,	// (0x000797f3) main_image_pane_g1_ParamLimits

0xb61e,	// (0x000797f3) main_image_pane_g1

0xb661,	// (0x00079836) scroll_pane_cp018_ParamLimits

0xb661,	// (0x00079836) scroll_pane_cp018

0xb679,	// (0x0007984e) scroll_pane_cp016_ParamLimits

0xb679,	// (0x0007984e) scroll_pane_cp016

0x2f63,	// (0x00071138) smil2_image_pane_ParamLimits

0x2f63,	// (0x00071138) smil2_image_pane

0x2f99,	// (0x0007116e) smil2_root_pane_ParamLimits

0x2f99,	// (0x0007116e) smil2_root_pane

0x2fd1,	// (0x000711a6) smil2_text_pane_ParamLimits

0x2fd1,	// (0x000711a6) smil2_text_pane

0x99ac,	// (0x00077b81) bg_list_pane_cp06

0xb6b5,	// (0x0007988a) grid_radio_pane

0x99ac,	// (0x00077b81) bg_popup_window_pane_cp06

0xb6bf,	// (0x00079894) main_fmradio_pane_t1

0xb15f,	// (0x00079334) heading_pane_cp04

0xb6cd,	// (0x000798a2) main_fmradio_pane_t2

0xc6e2,	// (0x0007a8b7) popup_cale_lunar_info_window_g1

0xb6db,	// (0x000798b0) main_fmradio_pane_t3

0xc6ea,	// (0x0007a8bf) popup_cale_lunar_info_window_g2

0xb6eb,	// (0x000798c0) main_fmradio_pane_t4

0x0001,

0xb6f9,	// (0x000798ce) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007d792) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007d6cc) main_fmradio_pane_t

0xb707,	// (0x000798dc) wait_bar_pane_cp03

0xb70f,	// (0x000798e4) cell_fmradio_pane_ParamLimits

0xb70f,	// (0x000798e4) cell_fmradio_pane

0xb564,	// (0x00079739) cell_fmradio_pane_g1_ParamLimits

0xb564,	// (0x00079739) cell_fmradio_pane_g1

0x99ac,	// (0x00077b81) grid_highlight_pane_cp011

0xb724,	// (0x000798f9) poc_content_pane_ParamLimits

0xb724,	// (0x000798f9) poc_content_pane

0xb736,	// (0x0007990b) scroll_pane_cp019

0x3061,	// (0x00071236) popup_call_poc_act_window_ParamLimits

0x3061,	// (0x00071236) popup_call_poc_act_window

0x3085,	// (0x0007125a) popup_call_poc_inact_window_ParamLimits

0x3085,	// (0x0007125a) popup_call_poc_inact_window

0xf594,	// (0x0007d769) bg_popup_call_poc_act_pane_g

0xc65a,	// (0x0007a82f) bg_popup_call_poc_inact_pane_g1

0xc662,	// (0x0007a837) bg_popup_call_poc_inact_pane_g2

0xb73e,	// (0x00079913) popup_call_poc_act_window_g2

0xc66a,	// (0x0007a83f) bg_popup_call_poc_inact_pane_g3

0xc672,	// (0x0007a847) bg_popup_call_poc_inact_pane_g4

0xc67a,	// (0x0007a84f) bg_popup_call_poc_inact_pane_g5

0xb746,	// (0x0007991b) popup_call_poc_act_window_t1_ParamLimits

0xb746,	// (0x0007991b) popup_call_poc_act_window_t1

0xb76e,	// (0x00079943) popup_call_poc_act_window_t2_ParamLimits

0xb76e,	// (0x00079943) popup_call_poc_act_window_t2

0xb796,	// (0x0007996b) popup_call_poc_act_window_t3_ParamLimits

0xb796,	// (0x0007996b) popup_call_poc_act_window_t3

0xb7be,	// (0x00079993) popup_call_poc_act_window_t4_ParamLimits

0xb7be,	// (0x00079993) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007d6d7) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007d6d7) popup_call_poc_act_window_t

0xc682,	// (0x0007a857) bg_popup_call_poc_inact_pane_g6

0xc68a,	// (0x0007a85f) bg_popup_call_poc_inact_pane_g7

0xc692,	// (0x0007a867) bg_popup_call_poc_inact_pane_g8

0xb7d0,	// (0x000799a5) popup_call_poc_inact_window_g2

0xc69a,	// (0x0007a86f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007d756) bg_popup_call_poc_inact_pane_g

0xb7d8,	// (0x000799ad) popup_call_poc_inact_window_t1_ParamLimits

0xb7d8,	// (0x000799ad) popup_call_poc_inact_window_t1

0xb7ed,	// (0x000799c2) popup_call_poc_inact_window_t2_ParamLimits

0xb7ed,	// (0x000799c2) popup_call_poc_inact_window_t2

0xb802,	// (0x000799d7) popup_call_poc_inact_window_t3_ParamLimits

0xb802,	// (0x000799d7) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007d6e0) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007d6e0) popup_call_poc_inact_window_t

0xc866,	// (0x0007aa3b) context_pane_ParamLimits

0x392d,	// (0x00071b02) signal_pane_ParamLimits

0xaa77,	// (0x00078c4c) main_call2_pane

0xc854,	// (0x0007aa29) popup_phob_thumbnail2_window_ParamLimits

0xc854,	// (0x0007aa29) popup_phob_thumbnail2_window

0x9e43,	// (0x00078018) aid_hotspot_pointer_arrow_pane

0x9e4b,	// (0x00078020) aid_hotspot_pointer_hand_pane

0x33ed,	// (0x000715c2) phob_pre_status_pane_g5

0x0c3a,	// (0x0006ee0f) cams_zoom_pane_ParamLimits

0x0c49,	// (0x0006ee1e) image_vga_pane_ParamLimits

0x0c63,	// (0x0006ee38) main_camera_pane_g1_ParamLimits

0x0c75,	// (0x0006ee4a) main_camera_pane_g2_ParamLimits

0x0c85,	// (0x0006ee5a) main_camera_pane_g3_ParamLimits

0x0c99,	// (0x0006ee6e) main_camera_pane_g4_ParamLimits

0x0cad,	// (0x0006ee82) main_camera_pane_g5_ParamLimits

0x0cc1,	// (0x0006ee96) main_camera_pane_g6_ParamLimits

0x0cd5,	// (0x0006eeaa) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007d3df) main_camera_pane_g_ParamLimits

0x0ce9,	// (0x0006eebe) main_camera_pane_t1_ParamLimits

0x0cff,	// (0x0006eed4) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007d3f0) main_camera_pane_t_ParamLimits

0x9c07,	// (0x00077ddc) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c07,	// (0x00077ddc) bg_popup_preview_window_pane_cp01

0xb817,	// (0x000799ec) popup_phob_thumbnail2_window_g1_ParamLimits

0xb817,	// (0x000799ec) popup_phob_thumbnail2_window_g1

0x99ac,	// (0x00077b81) call2_cli_visual_pane

0x30b9,	// (0x0007128e) popup_call2_audio_conf_window_ParamLimits

0x30b9,	// (0x0007128e) popup_call2_audio_conf_window

0x30e1,	// (0x000712b6) popup_call2_audio_first_window_ParamLimits

0x30e1,	// (0x000712b6) popup_call2_audio_first_window

0x3177,	// (0x0007134c) popup_call2_audio_in_window_ParamLimits

0x3177,	// (0x0007134c) popup_call2_audio_in_window

0x31c3,	// (0x00071398) popup_call2_audio_out_window_ParamLimits

0x31c3,	// (0x00071398) popup_call2_audio_out_window

0x3235,	// (0x0007140a) popup_call2_audio_second_window_ParamLimits

0x3235,	// (0x0007140a) popup_call2_audio_second_window

0x329b,	// (0x00071470) popup_call2_audio_wait_window_ParamLimits

0x329b,	// (0x00071470) popup_call2_audio_wait_window

0x99ac,	// (0x00077b81) bg_popup_call2_act_pane_cp03

0x9be9,	// (0x00077dbe) list_conf_pane_cp

0xb823,	// (0x000799f8) popup_call2_audio_conf_window_t1

0xb831,	// (0x00079a06) list_single_graphic_popup_conf2_pane_ParamLimits

0xb831,	// (0x00079a06) list_single_graphic_popup_conf2_pane

0xb1ce,	// (0x000793a3) list_highlight_pane_cp04

0xb844,	// (0x00079a19) list_single_graphic_popup_conf2_pane_g1

0xb1df,	// (0x000793b4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007d6e7) list_single_graphic_popup_conf2_pane_g

0xb84e,	// (0x00079a23) list_single_graphic_popup_conf2_pane_t1

0xb85c,	// (0x00079a31) bg_popup_call2_act_pane_cp01_ParamLimits

0xb85c,	// (0x00079a31) bg_popup_call2_act_pane_cp01

0xb8e6,	// (0x00079abb) call_type_pane_cp05_ParamLimits

0xb8e6,	// (0x00079abb) call_type_pane_cp05

0xb93a,	// (0x00079b0f) popup_call2_audio_second_window_g1_ParamLimits

0xb93a,	// (0x00079b0f) popup_call2_audio_second_window_g1

0xb98e,	// (0x00079b63) popup_call2_audio_second_window_g2_ParamLimits

0xb98e,	// (0x00079b63) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007d6ec) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007d6ec) popup_call2_audio_second_window_g

0xb9f3,	// (0x00079bc8) popup_call2_audio_second_window_t1_ParamLimits

0xb9f3,	// (0x00079bc8) popup_call2_audio_second_window_t1

0xbaae,	// (0x00079c83) popup_call2_audio_second_window_t2_ParamLimits

0xbaae,	// (0x00079c83) popup_call2_audio_second_window_t2

0xbb01,	// (0x00079cd6) popup_call2_audio_second_window_t3_ParamLimits

0xbb01,	// (0x00079cd6) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007d6f3) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007d6f3) popup_call2_audio_second_window_t

0x99ac,	// (0x00077b81) bg_popup_call2_in_pane_cp02

0x99b6,	// (0x00077b8b) call_type_pane_cp04

0x99be,	// (0x00077b93) popup_call2_audio_wait_window_g1

0x99c6,	// (0x00077b9b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007d2ce) popup_call2_audio_wait_window_g

0x99ce,	// (0x00077ba3) popup_call2_audio_wait_window_t3

0xbc2d,	// (0x00079e02) bg_popup_call2_act_pane_ParamLimits

0xbc2d,	// (0x00079e02) bg_popup_call2_act_pane

0xbced,	// (0x00079ec2) call_type_pane_cp03_ParamLimits

0xbced,	// (0x00079ec2) call_type_pane_cp03

0xbd51,	// (0x00079f26) popup_call2_audio_first_window_g1_ParamLimits

0xbd51,	// (0x00079f26) popup_call2_audio_first_window_g1

0xbdc1,	// (0x00079f96) popup_call2_audio_first_window_g2_ParamLimits

0xbdc1,	// (0x00079f96) popup_call2_audio_first_window_g2

0xb464,	// (0x00079639) popup_call2_audio_first_window_g3_ParamLimits

0xb464,	// (0x00079639) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007d6fc) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007d6fc) popup_call2_audio_first_window_g

0xbe9f,	// (0x0007a074) popup_call2_audio_first_window_t1_ParamLimits

0xbe9f,	// (0x0007a074) popup_call2_audio_first_window_t1

0xbfa2,	// (0x0007a177) popup_call2_audio_first_window_t4_ParamLimits

0xbfa2,	// (0x0007a177) popup_call2_audio_first_window_t4

0xc085,	// (0x0007a25a) popup_call2_audio_first_window_t5_ParamLimits

0xc085,	// (0x0007a25a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007d707) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007d707) popup_call2_audio_first_window_t

0x9bff,	// (0x00077dd4) bg_popup_call2_act_pane_g1

0xc6f4,	// (0x0007a8c9) popup_cale_lunar_info_window_t1

0xc702,	// (0x0007a8d7) popup_cale_lunar_info_window_t2

0xc710,	// (0x0007a8e5) popup_cale_lunar_info_window_t3

0x99ac,	// (0x00077b81) bg_popup_call2_bubble_pane

0xc186,	// (0x0007a35b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc186,	// (0x0007a35b) bg_popup_call2_in_pane_cp01

0x9688,	// (0x0007785d) call_type_pane_cp02

0xc1ce,	// (0x0007a3a3) popup_call2_audio_out_window_g1_ParamLimits

0xc1ce,	// (0x0007a3a3) popup_call2_audio_out_window_g1

0xc1fa,	// (0x0007a3cf) popup_call2_audio_out_window_g2_ParamLimits

0xc1fa,	// (0x0007a3cf) popup_call2_audio_out_window_g2

0xc222,	// (0x0007a3f7) popup_call2_audio_out_window_g3_ParamLimits

0xc222,	// (0x0007a3f7) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007d710) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007d710) popup_call2_audio_out_window_g

0xc25d,	// (0x0007a432) popup_call2_audio_out_window_t1_ParamLimits

0xc25d,	// (0x0007a432) popup_call2_audio_out_window_t1

0xc2bc,	// (0x0007a491) popup_call2_audio_out_window_t2_ParamLimits

0xc2bc,	// (0x0007a491) popup_call2_audio_out_window_t2

0xc310,	// (0x0007a4e5) popup_call2_audio_out_window_t3_ParamLimits

0xc310,	// (0x0007a4e5) popup_call2_audio_out_window_t3

0xc326,	// (0x0007a4fb) popup_call2_audio_out_window_t4_ParamLimits

0xc326,	// (0x0007a4fb) popup_call2_audio_out_window_t4

0xc33c,	// (0x0007a511) popup_call2_audio_out_window_t5_ParamLimits

0xc33c,	// (0x0007a511) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007d719) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007d719) popup_call2_audio_out_window_t

0xc3a0,	// (0x0007a575) bg_popup_call2_in_pane_ParamLimits

0xc3a0,	// (0x0007a575) bg_popup_call2_in_pane

0xc3fc,	// (0x0007a5d1) popup_call2_audio_in_window_g1_ParamLimits

0xc3fc,	// (0x0007a5d1) popup_call2_audio_in_window_g1

0xc434,	// (0x0007a609) popup_call2_audio_in_window_g2_ParamLimits

0xc434,	// (0x0007a609) popup_call2_audio_in_window_g2

0xc46c,	// (0x0007a641) popup_call2_audio_in_window_g3_ParamLimits

0xc46c,	// (0x0007a641) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007d726) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007d726) popup_call2_audio_in_window_g

0xc4c4,	// (0x0007a699) popup_call2_audio_in_window_t1_ParamLimits

0xc4c4,	// (0x0007a699) popup_call2_audio_in_window_t1

0xc544,	// (0x0007a719) popup_call2_audio_in_window_t2_ParamLimits

0xc544,	// (0x0007a719) popup_call2_audio_in_window_t2

0xc5c4,	// (0x0007a799) popup_call2_audio_in_window_t3_ParamLimits

0xc5c4,	// (0x0007a799) popup_call2_audio_in_window_t3

0xc5de,	// (0x0007a7b3) popup_call2_audio_in_window_t4_ParamLimits

0xc5de,	// (0x0007a7b3) popup_call2_audio_in_window_t4

0xc5f0,	// (0x0007a7c5) popup_call2_audio_in_window_t5_ParamLimits

0xc5f0,	// (0x0007a7c5) popup_call2_audio_in_window_t5

0xc605,	// (0x0007a7da) popup_call2_audio_in_window_t6_ParamLimits

0xc605,	// (0x0007a7da) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007d72f) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007d72f) popup_call2_audio_in_window_t

0x9bff,	// (0x00077dd4) bg_popup_call2_in_pane_g1

0xc71e,	// (0x0007a8f3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007d797) popup_cale_lunar_info_window_t

0x9c07,	// (0x00077ddc) bg_popup_call2_rect_pane_ParamLimits

0x9c07,	// (0x00077ddc) bg_popup_call2_rect_pane

0x99ac,	// (0x00077b81) call2_cli_visual_graphic_pane

0x99ac,	// (0x00077b81) call2_cli_visual_text_pane

0x9e85,	// (0x0007805a) smil_status_volume_pane_g3

0x0002,

0xa916,	// (0x00078aeb) call2_cli_visual_graphic_pane_g1

0xa916,	// (0x00078aeb) call2_cli_visual_graphic_pane_g2

0xa916,	// (0x00078aeb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007d73c) call2_cli_visual_graphic_pane_g

0xc61a,	// (0x0007a7ef) bg_popup_call2_rect_pane_g1

0xa9b4,	// (0x00078b89) bg_popup_call2_rect_pane_g2

0xc622,	// (0x0007a7f7) bg_popup_call2_rect_pane_g3

0xc62a,	// (0x0007a7ff) bg_popup_call2_rect_pane_g4

0xc632,	// (0x0007a807) bg_popup_call2_rect_pane_g5

0xc63a,	// (0x0007a80f) bg_popup_call2_rect_pane_g6

0xc642,	// (0x0007a817) bg_popup_call2_rect_pane_g7

0xc64a,	// (0x0007a81f) bg_popup_call2_rect_pane_g8

0xc652,	// (0x0007a827) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007d743) bg_popup_call2_rect_pane_g

0xc65a,	// (0x0007a82f) bg_popup_call2_bubble_pane_g1

0xc662,	// (0x0007a837) bg_popup_call2_bubble_pane_g2

0xc66a,	// (0x0007a83f) bg_popup_call2_bubble_pane_g3

0xc672,	// (0x0007a847) bg_popup_call2_bubble_pane_g4

0xc67a,	// (0x0007a84f) bg_popup_call2_bubble_pane_g5

0xc682,	// (0x0007a857) bg_popup_call2_bubble_pane_g6

0xc68a,	// (0x0007a85f) bg_popup_call2_bubble_pane_g7

0xc692,	// (0x0007a867) bg_popup_call2_bubble_pane_g8

0xc69a,	// (0x0007a86f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007d756) bg_popup_call2_bubble_pane_g

0x03b4,	// (0x0006e589) aid_cale_week_size_cell_pane

0x0d19,	// (0x0006eeee) aid_cams_cif_uncrop_pane_ParamLimits

0x0d19,	// (0x0006eeee) aid_cams_cif_uncrop_pane

0x0ed2,	// (0x0006f0a7) aid_cams_size_cell_ParamLimits

0x0ed2,	// (0x0006f0a7) aid_cams_size_cell

0x0ee6,	// (0x0006f0bb) grid_cams_pane_ParamLimits

0x0f00,	// (0x0006f0d5) linegrid_cams_pane_ParamLimits

0x10cf,	// (0x0006f2a4) call_video_pane_t1

0x10e9,	// (0x0006f2be) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007d443) call_video_pane_t

0x151d,	// (0x0006f6f2) aid_cale_month_size_cell_pane_ParamLimits

0x151d,	// (0x0006f6f2) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007d7e0) smil_status_volume_pane_g

0x9e92,	// (0x00078067) volume_smil_pane_ParamLimits

0x9544,	// (0x00077719) aid_popup2_width_pane

0x0304,	// (0x0006e4d9) cell_qdial_pane_g4_ParamLimits

0x0304,	// (0x0006e4d9) cell_qdial_pane_g4

0x2563,	// (0x00070738) aid_blid_cardinal_pane_ParamLimits

0x256f,	// (0x00070744) aid_blid_destination_pane_ParamLimits

0x256f,	// (0x00070744) aid_blid_destination_pane

0x9c07,	// (0x00077ddc) bg_popup_call_poc_act_pane_ParamLimits

0x9c07,	// (0x00077ddc) bg_popup_call_poc_act_pane

0x9c07,	// (0x00077ddc) bg_popup_call_poc_inact_pane_ParamLimits

0x9c07,	// (0x00077ddc) bg_popup_call_poc_inact_pane

0xc6a2,	// (0x0007a877) bg_popup_call_poc_act_pane_g1

0xc6aa,	// (0x0007a87f) bg_popup_call_poc_act_pane_g2

0xc6b2,	// (0x0007a887) bg_popup_call_poc_act_pane_g3

0xc672,	// (0x0007a847) bg_popup_call_poc_act_pane_g4

0xc67a,	// (0x0007a84f) bg_popup_call_poc_act_pane_g5

0xc6ba,	// (0x0007a88f) bg_popup_call_poc_act_pane_g6

0xc68a,	// (0x0007a85f) bg_popup_call_poc_act_pane_g7

0xc6c2,	// (0x0007a897) bg_popup_call_poc_act_pane_g8

0x99ac,	// (0x00077b81) main_usb_pane

0xc82b,	// (0x0007aa00) popup_cale_lunar_info_window

0x13b2,	// (0x0006f587) im_reading_pane_t1_ParamLimits

0xab7c,	// (0x00078d51) list_im_pane_ParamLimits

0xab8d,	// (0x00078d62) scroll_pane_cp07_ParamLimits

0x99ac,	// (0x00077b81) grid_highlight_pane_cp012

0x9c07,	// (0x00077ddc) mup_scale_pane_ParamLimits

0xb564,	// (0x00079739) main_usb_pane_g1_ParamLimits

0xb564,	// (0x00079739) main_usb_pane_g1

0x32f9,	// (0x000714ce) main_usb_pane_g2_ParamLimits

0x32f9,	// (0x000714ce) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007d780) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007d780) main_usb_pane_g

0x330f,	// (0x000714e4) main_usb_pane_t1_ParamLimits

0x330f,	// (0x000714e4) main_usb_pane_t1

0x3321,	// (0x000714f6) main_usb_pane_t2_ParamLimits

0x3321,	// (0x000714f6) main_usb_pane_t2

0x3333,	// (0x00071508) main_usb_pane_t3_ParamLimits

0x3333,	// (0x00071508) main_usb_pane_t3

0x3345,	// (0x0007151a) main_usb_pane_t4_ParamLimits

0x3345,	// (0x0007151a) main_usb_pane_t4

0x335a,	// (0x0007152f) main_usb_pane_t5_ParamLimits

0x335a,	// (0x0007152f) main_usb_pane_t5

0x336f,	// (0x00071544) main_usb_pane_t6_ParamLimits

0x336f,	// (0x00071544) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007d785) main_usb_pane_t_ParamLimits

0x2504,	// (0x000706d9) aid_text_placing

0x250f,	// (0x000706e4) main_location2_pane_t1_ParamLimits

0x2523,	// (0x000706f8) main_location2_pane_t2_ParamLimits

0x2539,	// (0x0007070e) main_location2_pane_t3_ParamLimits

0x254f,	// (0x00070724) main_location2_pane_t4_ParamLimits

0x254f,	// (0x00070724) main_location2_pane_t4

0xf3cf,	// (0x0007d5a4) main_location2_pane_t_ParamLimits

0x9c43,	// (0x00077e18) find_pinb_pane_g2_ParamLimits

0x9c43,	// (0x00077e18) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007d2f4) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007d2f4) find_pinb_pane_g

0x9c4f,	// (0x00077e24) find_pinb_pane_t1_ParamLimits

0x9c61,	// (0x00077e36) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007d2f9) find_pinb_pane_t_ParamLimits

0x99ac,	// (0x00077b81) main_call3_pane

0x1aec,	// (0x0006fcc1) cale_month_day_heading_pane_t1_ParamLimits

0x1b72,	// (0x0006fd47) cale_month_day_heading_pane_t2_ParamLimits

0x1c03,	// (0x0006fdd8) cale_month_day_heading_pane_t3_ParamLimits

0x1c94,	// (0x0006fe69) cale_month_day_heading_pane_t4_ParamLimits

0x1d25,	// (0x0006fefa) cale_month_day_heading_pane_t5_ParamLimits

0x1dc6,	// (0x0006ff9b) cale_month_day_heading_pane_t6_ParamLimits

0x1e6b,	// (0x00070040) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007d47b) cale_month_day_heading_pane_t_ParamLimits

0x2147,	// (0x0007031c) smil_status_volume_pane

0x2db6,	// (0x00070f8b) postcard_address_pane_ParamLimits

0x2db6,	// (0x00070f8b) postcard_address_pane

0x2dcc,	// (0x00070fa1) postcard_message_pane_ParamLimits

0x2dcc,	// (0x00070fa1) postcard_message_pane

0x32d5,	// (0x000714aa) call2_cli_visual_pane_t1_ParamLimits

0x32d5,	// (0x000714aa) call2_cli_visual_pane_t1

0x3b62,	// (0x00071d37) postcard_message_pane_t1_ParamLimits

0x3b62,	// (0x00071d37) postcard_message_pane_t1

0x3b4b,	// (0x00071d20) postcard_address_pane_t1_ParamLimits

0x3b4b,	// (0x00071d20) postcard_address_pane_t1

0x3b37,	// (0x00071d0c) popup_call3_audio_in_window_ParamLimits

0x3b37,	// (0x00071d0c) popup_call3_audio_in_window

0x39bc,	// (0x00071b91) bg_popup_call3_in_pane_ParamLimits

0x39bc,	// (0x00071b91) bg_popup_call3_in_pane

0x3a38,	// (0x00071c0d) popup_call3_audio_in_window_g1_ParamLimits

0x3a38,	// (0x00071c0d) popup_call3_audio_in_window_g1

0x3a58,	// (0x00071c2d) popup_call3_audio_in_window_g2_ParamLimits

0x3a58,	// (0x00071c2d) popup_call3_audio_in_window_g2

0x3a78,	// (0x00071c4d) popup_call3_audio_in_window_g3_ParamLimits

0x3a78,	// (0x00071c4d) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007d7e7) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007d7e7) popup_call3_audio_in_window_g

0x3aa9,	// (0x00071c7e) popup_call3_audio_in_window_t1_ParamLimits

0x3aa9,	// (0x00071c7e) popup_call3_audio_in_window_t1

0x3ae7,	// (0x00071cbc) popup_call3_audio_in_window_t2_ParamLimits

0x3ae7,	// (0x00071cbc) popup_call3_audio_in_window_t2

0x3b25,	// (0x00071cfa) popup_call3_audio_in_window_t3_ParamLimits

0x3b25,	// (0x00071cfa) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007d7f0) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007d7f0) popup_call3_audio_in_window_t

0xaa77,	// (0x00078c4c) bg_popup_call3_rect_pane

0xc61a,	// (0x0007a7ef) bg_popup_call3_rect_pane_g1

0xa9b4,	// (0x00078b89) bg_popup_call3_rect_pane_g2

0xc622,	// (0x0007a7f7) bg_popup_call3_rect_pane_g3

0xc62a,	// (0x0007a7ff) bg_popup_call3_rect_pane_g4

0xc632,	// (0x0007a807) bg_popup_call3_rect_pane_g5

0xc63a,	// (0x0007a80f) bg_popup_call3_rect_pane_g6

0xc642,	// (0x0007a817) bg_popup_call3_rect_pane_g7

0x2969,	// (0x00070b3e) mup_visualizer_osc_pane

0xb472,	// (0x00079647) mup_visualizer_spec_pane

0x39ec,	// (0x00071bc1) call3_video_qcif_pane_ParamLimits

0x39ec,	// (0x00071bc1) call3_video_qcif_pane

0x39ff,	// (0x00071bd4) call3_video_qcif_uncrop_pane_ParamLimits

0x39ff,	// (0x00071bd4) call3_video_qcif_uncrop_pane

0x3a0f,	// (0x00071be4) call3_video_subqcif_pane_ParamLimits

0x3a0f,	// (0x00071be4) call3_video_subqcif_pane

0x3a25,	// (0x00071bfa) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a25,	// (0x00071bfa) call3_video_subqcif_uncrop_pane

0x3a98,	// (0x00071c6d) popup_call3_audio_in_window_g4_ParamLimits

0x3a98,	// (0x00071c6d) popup_call3_audio_in_window_g4

0x39ab,	// (0x00071b80) mup_spec_half_pane

0x39b4,	// (0x00071b89) mup_spec_half_pane_cp

0xc8c6,	// (0x0007aa9b) mup_osc_middle_pane

0xc8cf,	// (0x0007aaa4) mup_visualizer_osc_pane_g1

0x398b,	// (0x00071b60) mup_spec_bar_pane_ParamLimits

0x398b,	// (0x00071b60) mup_spec_bar_pane

0xc8b3,	// (0x0007aa88) mup_spec_bar_pane_g1

0xc8bd,	// (0x0007aa92) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007d7db) mup_spec_bar_pane_g

0x03b4,	// (0x0006e589) aid_cale_week_size_cell_pane_ParamLimits

0x03ce,	// (0x0006e5a3) bg_cale_heading_pane_ParamLimits

0x03f7,	// (0x0006e5cc) bg_cale_pane_cp01_ParamLimits

0x0419,	// (0x0006e5ee) cale_week_corner_pane_ParamLimits

0x0438,	// (0x0006e60d) cale_week_day_heading_pane_ParamLimits

0x0466,	// (0x0006e63b) cale_week_scroll_pane_g1_ParamLimits

0x048a,	// (0x0006e65f) cale_week_scroll_pane_g2_ParamLimits

0x04a2,	// (0x0006e677) cale_week_scroll_pane_g3_ParamLimits

0x04ba,	// (0x0006e68f) cale_week_scroll_pane_g4_ParamLimits

0x04d6,	// (0x0006e6ab) cale_week_scroll_pane_g5_ParamLimits

0x04f6,	// (0x0006e6cb) cale_week_scroll_pane_g6_ParamLimits

0x0516,	// (0x0006e6eb) cale_week_scroll_pane_g7_ParamLimits

0x053a,	// (0x0006e70f) cale_week_scroll_pane_g8_ParamLimits

0x055e,	// (0x0006e733) cale_week_scroll_pane_g9_ParamLimits

0x057b,	// (0x0006e750) cale_week_scroll_pane_g10_ParamLimits

0x0598,	// (0x0006e76d) cale_week_scroll_pane_g11_ParamLimits

0x05b5,	// (0x0006e78a) cale_week_scroll_pane_g12_ParamLimits

0x05d2,	// (0x0006e7a7) cale_week_scroll_pane_g13_ParamLimits

0x05ef,	// (0x0006e7c4) cale_week_scroll_pane_g14_ParamLimits

0x0618,	// (0x0006e7ed) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007d385) cale_week_scroll_pane_g_ParamLimits

0x0665,	// (0x0006e83a) cale_week_time_pane_ParamLimits

0x0689,	// (0x0006e85e) grid_cale_week_pane_ParamLimits

0xa9e8,	// (0x00078bbd) listscroll_cale_week_pane_t1

0xa9fa,	// (0x00078bcf) scroll_pane_cp08_ParamLimits

0x158a,	// (0x0006f75f) cale_month_corner_pane_ParamLimits

0xadad,	// (0x00078f82) cale_month_pane_t1

0x1a72,	// (0x0006fc47) cale_month_week_pane_ParamLimits

0x2332,	// (0x00070507) popup_call_status_window_g1_ParamLimits

0x2346,	// (0x0007051b) popup_call_status_window_g2_ParamLimits

0x235a,	// (0x0007052f) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007d52b) popup_call_status_window_g_ParamLimits

0xb14f,	// (0x00079324) aid_call2_pane

0x2c2a,	// (0x00070dff) msg_header_pane_g1

0x2db6,	// (0x00070f8b) postcard_address2_pane_ParamLimits

0x2db6,	// (0x00070f8b) postcard_address2_pane

0x2dcc,	// (0x00070fa1) postcard_message2_pane_ParamLimits

0x2dcc,	// (0x00070fa1) postcard_message2_pane

0x393b,	// (0x00071b10) message2_row_pane_ParamLimits

0x393b,	// (0x00071b10) message2_row_pane

0x3958,	// (0x00071b2d) address2_row_pane_ParamLimits

0x3958,	// (0x00071b2d) address2_row_pane

0xc881,	// (0x0007aa56) postcard_message2_row_pane_g1

0xc889,	// (0x0007aa5e) postcard_message2_row_pane_t1

0xc881,	// (0x0007aa56) address2_row_pane_g1

0xc889,	// (0x0007aa5e) address2_row_pane_t1

0x0bb5,	// (0x0006ed8a) aid_size_cell_vorec

0x99ac,	// (0x00077b81) main_rss_pane

0x396b,	// (0x00071b40) rss_list_single_pane_ParamLimits

0x396b,	// (0x00071b40) rss_list_single_pane

0xc897,	// (0x0007aa6c) rss_list_single_pane_t1

0xc8a5,	// (0x0007aa7a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007d7d6) rss_list_single_pane_t

0x99ac,	// (0x00077b81) main_camera2_pane

0x99ac,	// (0x00077b81) main_video2_pane

0x3bd1,	// (0x00071da6) cams_zoom_pane_cp2_ParamLimits

0x3bd1,	// (0x00071da6) cams_zoom_pane_cp2

0x3be8,	// (0x00071dbd) image2_vga_pane_ParamLimits

0x3be8,	// (0x00071dbd) image2_vga_pane

0x3c30,	// (0x00071e05) main_camera2_pane_g1_ParamLimits

0x3c30,	// (0x00071e05) main_camera2_pane_g1

0x3c50,	// (0x00071e25) main_camera2_pane_g2_ParamLimits

0x3c50,	// (0x00071e25) main_camera2_pane_g2

0x3c67,	// (0x00071e3c) main_camera2_pane_g3_ParamLimits

0x3c67,	// (0x00071e3c) main_camera2_pane_g3

0x3c7e,	// (0x00071e53) main_camera2_pane_g4_ParamLimits

0x3c7e,	// (0x00071e53) main_camera2_pane_g4

0x3c95,	// (0x00071e6a) main_camera2_pane_g5_ParamLimits

0x3c95,	// (0x00071e6a) main_camera2_pane_g5

0x3cac,	// (0x00071e81) main_camera2_pane_g6_ParamLimits

0x3cac,	// (0x00071e81) main_camera2_pane_g6

0x3cc3,	// (0x00071e98) main_camera2_pane_g7_ParamLimits

0x3cc3,	// (0x00071e98) main_camera2_pane_g7

0x3cda,	// (0x00071eaf) main_camera2_pane_g8_ParamLimits

0x3cda,	// (0x00071eaf) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007d7f7) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007d7f7) main_camera2_pane_g

0x3d08,	// (0x00071edd) main_camera2_pane_t1_ParamLimits

0x3d08,	// (0x00071edd) main_camera2_pane_t1

0x3d3d,	// (0x00071f12) main_camera2_pane_t2_ParamLimits

0x3d3d,	// (0x00071f12) main_camera2_pane_t2

0x3d5a,	// (0x00071f2f) main_camera2_pane_t3_ParamLimits

0x3d5a,	// (0x00071f2f) main_camera2_pane_t3

0x3db8,	// (0x00071f8d) main_camera2_pane_t4_ParamLimits

0x3db8,	// (0x00071f8d) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007d80a) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007d80a) main_camera2_pane_t

0x3e41,	// (0x00072016) cams_zoom_pane_cp4_ParamLimits

0x3e41,	// (0x00072016) cams_zoom_pane_cp4

0x3e57,	// (0x0007202c) image2_cif_pane_ParamLimits

0x3e57,	// (0x0007202c) image2_cif_pane

0x3e82,	// (0x00072057) image2_subqcif_pane_ParamLimits

0x3e82,	// (0x00072057) image2_subqcif_pane

0x3e9d,	// (0x00072072) main_video2_pane_g1_ParamLimits

0x3e9d,	// (0x00072072) main_video2_pane_g1

0x3eb7,	// (0x0007208c) main_video2_pane_g2_ParamLimits

0x3eb7,	// (0x0007208c) main_video2_pane_g2

0x3ecd,	// (0x000720a2) main_video2_pane_g3_ParamLimits

0x3ecd,	// (0x000720a2) main_video2_pane_g3

0x3ee3,	// (0x000720b8) main_video2_pane_g4_ParamLimits

0x3ee3,	// (0x000720b8) main_video2_pane_g4

0x3ef9,	// (0x000720ce) main_video2_pane_g5_ParamLimits

0x3ef9,	// (0x000720ce) main_video2_pane_g5

0x3f0f,	// (0x000720e4) main_video2_pane_g6_ParamLimits

0x3f0f,	// (0x000720e4) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007d819) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007d819) main_video2_pane_g

0x3f29,	// (0x000720fe) main_video2_pane_t1_ParamLimits

0x3f29,	// (0x000720fe) main_video2_pane_t1

0x3f4d,	// (0x00072122) main_video2_pane_t2_ParamLimits

0x3f4d,	// (0x00072122) main_video2_pane_t2

0x3f9d,	// (0x00072172) main_video2_pane_t3_ParamLimits

0x3f9d,	// (0x00072172) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007d826) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007d826) main_video2_pane_t

0x342d,	// (0x00071602) call_muted_g2

0x0001,

0xf5f3,	// (0x0007d7c8) call_muted_g

0x99ac,	// (0x00077b81) main_mup2_pane

0x3fe5,	// (0x000721ba) main_mup2_pane_g1_ParamLimits

0x3fe5,	// (0x000721ba) main_mup2_pane_g1

0x3ff1,	// (0x000721c6) main_mup2_pane_g2_ParamLimits

0x3ff1,	// (0x000721c6) main_mup2_pane_g2

0x9efd,	// (0x000780d2) main_mup_pane_g13_cp1

0x9f05,	// (0x000780da) mup_volume_pane_cp1

0x400f,	// (0x000721e4) main_mup2_pane_g4_ParamLimits

0x400f,	// (0x000721e4) main_mup2_pane_g4

0x4021,	// (0x000721f6) main_mup2_pane_g5_ParamLimits

0x4021,	// (0x000721f6) main_mup2_pane_g5

0x4033,	// (0x00072208) main_mup2_pane_g6_ParamLimits

0x4033,	// (0x00072208) main_mup2_pane_g6

0x4045,	// (0x0007221a) main_mup2_pane_g7_ParamLimits

0x4045,	// (0x0007221a) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007d82d) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007d82d) main_mup2_pane_g

0x405d,	// (0x00072232) main_mup2_pane_t1_ParamLimits

0x405d,	// (0x00072232) main_mup2_pane_t1

0x4073,	// (0x00072248) main_mup2_pane_t2_ParamLimits

0x4073,	// (0x00072248) main_mup2_pane_t2

0x4089,	// (0x0007225e) main_mup2_pane_t3_ParamLimits

0x4089,	// (0x0007225e) main_mup2_pane_t3

0x409f,	// (0x00072274) main_mup2_pane_t4_ParamLimits

0x409f,	// (0x00072274) main_mup2_pane_t4

0x40b7,	// (0x0007228c) main_mup2_pane_t5_ParamLimits

0x40b7,	// (0x0007228c) main_mup2_pane_t5

0x40cf,	// (0x000722a4) main_mup2_pane_t6_ParamLimits

0x40cf,	// (0x000722a4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007d83c) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007d83c) main_mup2_pane_t

0x40ff,	// (0x000722d4) mup2_visualizer_pane_ParamLimits

0x40ff,	// (0x000722d4) mup2_visualizer_pane

0x412d,	// (0x00072302) mup_progress_pane_cp_ParamLimits

0x412d,	// (0x00072302) mup_progress_pane_cp

0x9ee8,	// (0x000780bd) mup_volume_pane_cp_ParamLimits

0x9ee8,	// (0x000780bd) mup_volume_pane_cp

0x4143,	// (0x00072318) mup2_visualizer_pane_g1_ParamLimits

0x4143,	// (0x00072318) mup2_visualizer_pane_g1

0xc906,	// (0x0007aadb) mup2_visualizer_pane_g2_ParamLimits

0xc906,	// (0x0007aadb) mup2_visualizer_pane_g2

0x415a,	// (0x0007232f) mup2_visualizer_pane_g3_ParamLimits

0x415a,	// (0x0007232f) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007d849) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007d849) mup2_visualizer_pane_g

0xb6ad,	// (0x00079882) aid_size_cell_fmradio

0x35dd,	// (0x000717b2) aid_height_parent_landcape

0xac0b,	// (0x00078de0) wml_content_pane_cp

0xac13,	// (0x00078de8) wml_tabs_pane

0xac1c,	// (0x00078df1) popup_wml_miniature_window

0xac24,	// (0x00078df9) scroll_pane_cp021

0xac38,	// (0x00078e0d) wml_content_pane_comp8

0x99ac,	// (0x00077b81) bg_popup_sub_pane_cp05

0xc924,	// (0x0007aaf9) popup_wml_miniature_window_g1

0xc92c,	// (0x0007ab01) wml_miniature_view_pane

0x4166,	// (0x0007233b) aid_size_wml_view

0x416e,	// (0x00072343) wml_miniature_view_pane_g1

0x4177,	// (0x0007234c) wml_miniature_view_pane_g2

0x4180,	// (0x00072355) wml_miniature_view_pane_g3

0x4188,	// (0x0007235d) wml_miniature_view_pane_g4

0x4190,	// (0x00072365) wml_miniature_view_pane_g5

0x4198,	// (0x0007236d) wml_miniature_view_pane_g6

0x41a0,	// (0x00072375) wml_miniature_view_pane_g7

0x41a8,	// (0x0007237d) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007d850) wml_miniature_view_pane_g

0xc934,	// (0x0007ab09) background_graphic_ParamLimits

0xc934,	// (0x0007ab09) background_graphic

0xc940,	// (0x0007ab15) wml_tabs_2_pane

0xc949,	// (0x0007ab1e) wml_tabs_3_pane_ParamLimits

0xc949,	// (0x0007ab1e) wml_tabs_3_pane

0xc95b,	// (0x0007ab30) wml_tabs_4_pane_ParamLimits

0xc95b,	// (0x0007ab30) wml_tabs_4_pane

0xc971,	// (0x0007ab46) wml_tabs_5_pane_ParamLimits

0xc971,	// (0x0007ab46) wml_tabs_5_pane

0xc98b,	// (0x0007ab60) wml_tabs_pane_g2_ParamLimits

0xc98b,	// (0x0007ab60) wml_tabs_pane_g2

0xc99f,	// (0x0007ab74) wml_tabs_pane_g3_ParamLimits

0xc99f,	// (0x0007ab74) wml_tabs_pane_g3

0x41b0,	// (0x00072385) wml_tabs_2_active_pane_ParamLimits

0x41b0,	// (0x00072385) wml_tabs_2_active_pane

0x41c4,	// (0x00072399) wml_tabs_2_passive_pane_ParamLimits

0x41c4,	// (0x00072399) wml_tabs_2_passive_pane

0x41d8,	// (0x000723ad) wml_tabs_3_active_pane_cp_ParamLimits

0x41d8,	// (0x000723ad) wml_tabs_3_active_pane_cp

0x41ed,	// (0x000723c2) wml_tabs_3_passive_pane_ParamLimits

0x41ed,	// (0x000723c2) wml_tabs_3_passive_pane

0x4200,	// (0x000723d5) wml_tabs_3_passive_pane_cp_ParamLimits

0x4200,	// (0x000723d5) wml_tabs_3_passive_pane_cp

0x4217,	// (0x000723ec) tabs_4_active_pane

0x421f,	// (0x000723f4) tabs_4_passive_pane

0x4229,	// (0x000723fe) tabs_4_passive_pane_cp

0x4231,	// (0x00072406) tabs_4_passive_pane_cp2

0x32f1,	// (0x000714c6) aid_height_text

0x293b,	// (0x00070b10) mup_volume_cont_pane_ParamLimits

0x293b,	// (0x00070b10) mup_volume_cont_pane

0xff91,	// (0x0006e166) aid_size_cell_pinb

0xff9b,	// (0x0006e170) aid_size_list_pinb

0x4119,	// (0x000722ee) mup2_volume_cont_pane_ParamLimits

0x4119,	// (0x000722ee) mup2_volume_cont_pane

0x9ed4,	// (0x000780a9) mup2_volume_cont_pane_g1_ParamLimits

0x9ed4,	// (0x000780a9) mup2_volume_cont_pane_g1

0xfc41,	// (0x0006de16) aid_size_cell_touch_ParamLimits

0xfc41,	// (0x0006de16) aid_size_cell_touch

0xfe81,	// (0x0006e056) touch_pane_ParamLimits

0xfe81,	// (0x0006e056) touch_pane

0x9532,	// (0x00077707) main_rss2_pane

0xc9bc,	// (0x0007ab91) listscroll_rss2_pane

0xc9c5,	// (0x0007ab9a) rss2_navigation_pane

0xc9cd,	// (0x0007aba2) list_rss2_pane

0xb273,	// (0x00079448) scroll_pane_cp22

0xc9d5,	// (0x0007abaa) rss2_navigation_pane_g1

0xc9de,	// (0x0007abb3) rss2_navigation_pane_g2

0xc9e6,	// (0x0007abbb) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007d861) rss2_navigation_pane_g

0xc9ee,	// (0x0007abc3) rss2_navigation_pane_t1

0x423b,	// (0x00072410) rss2_list_single_pane_ParamLimits

0x423b,	// (0x00072410) rss2_list_single_pane

0xc9fc,	// (0x0007abd1) rss2_list_single_pane_t2

0xca0a,	// (0x0007abdf) rss2_list_single_pane_t3_ParamLimits

0xca0a,	// (0x0007abdf) rss2_list_single_pane_t3

0xca27,	// (0x0007abfc) rss2_list_single_pane_t4

0x212f,	// (0x00070304) smil_status_pane_g1

0x958b,	// (0x00077760) main_image2_pane_ParamLimits

0x958b,	// (0x00077760) main_image2_pane

0x3cf1,	// (0x00071ec6) main_camera2_pane_g9_ParamLimits

0x3cf1,	// (0x00071ec6) main_camera2_pane_g9

0x3e0d,	// (0x00071fe2) main_camera2_pane_t5_ParamLimits

0x3e0d,	// (0x00071fe2) main_camera2_pane_t5

0x9ea9,	// (0x0007807e) main_camera2_pane_t6_ParamLimits

0x9ea9,	// (0x0007807e) main_camera2_pane_t6

0x4251,	// (0x00072426) main_image2_pane_g1_ParamLimits

0x4251,	// (0x00072426) main_image2_pane_g1

0x300b,	// (0x000711e0) smil2_video_pane_ParamLimits

0x300b,	// (0x000711e0) smil2_video_pane

0xfc79,	// (0x0006de4e) aid_zoom_text_primary_cp

0x9581,	// (0x00077756) popup_preview_fixed_window

0xab74,	// (0x00078d49) im_reading_pane_g1

0x3bc3,	// (0x00071d98) cams2_bc_adjust_pane_cp_ParamLimits

0x3bc3,	// (0x00071d98) cams2_bc_adjust_pane_cp

0x3e33,	// (0x00072008) cams2_bc_adjust_pane_ParamLimits

0x3e33,	// (0x00072008) cams2_bc_adjust_pane

0xcf7e,	// (0x0007b153) cams2_bc_adjust_pane_g1

0x9f0d,	// (0x000780e2) cams2_slider_pane

0x9f16,	// (0x000780eb) cams2_slider_pane_g1

0x9f1f,	// (0x000780f4) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007d868) cams2_slider_pane_g

0x008b,	// (0x0006e260) calc_display_pane_ParamLimits

0x00b3,	// (0x0006e288) calc_paper_pane_ParamLimits

0x00d6,	// (0x0006e2ab) grid_calc_pane_ParamLimits

0x9dde,	// (0x00077fb3) popup_clock_digital_window_t1_ParamLimits

0xb64a,	// (0x0007981f) main_image_pane_t1

0x006d,	// (0x0006e242) aid_size_cell_calc_ParamLimits

0x006d,	// (0x0006e242) aid_size_cell_calc

0x3623,	// (0x000717f8) popup_blid_sat_info2_window_ParamLimits

0x3623,	// (0x000717f8) popup_blid_sat_info2_window

0xca3d,	// (0x0007ac12) aid_size_cell_blid

0xca45,	// (0x0007ac1a) bg_popup_window_pane_cp07

0xca68,	// (0x0007ac3d) grid_popup_blid_pane

0xca72,	// (0x0007ac47) heading_pane_cp05_ParamLimits

0xca72,	// (0x0007ac47) heading_pane_cp05

0xcb3c,	// (0x0007ad11) cell_popup_blid_pane_ParamLimits

0xcb3c,	// (0x0007ad11) cell_popup_blid_pane

0xcb66,	// (0x0007ad3b) cell_popup_blid_pane_g1

0xcb6e,	// (0x0007ad43) cell_popup_blid_pane_t1

0x40e9,	// (0x000722be) mup2_indicator_pane_ParamLimits

0x40e9,	// (0x000722be) mup2_indicator_pane

0xaa77,	// (0x00078c4c) mup2_visualizer_osc_pane

0xc912,	// (0x0007aae7) mup2_visualizer_spec_pane_ParamLimits

0xc912,	// (0x0007aae7) mup2_visualizer_spec_pane

0x4267,	// (0x0007243c) mup2_spec_half_pane

0x4270,	// (0x00072445) mup2_spec_half_pane_cp

0x4278,	// (0x0007244d) mup2_spec_bar_pane_ParamLimits

0x4278,	// (0x0007244d) mup2_spec_bar_pane

0xc8b3,	// (0x0007aa88) mup2_spec_bar_pane_g1

0xc8bd,	// (0x0007aa92) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007d7db) mup2_spec_bar_pane_g

0x4298,	// (0x0007246d) mup2_osc_middle_pane

0xc8cf,	// (0x0007aaa4) mup2_visualizer_osc_pane_g1

0x95b9,	// (0x0007778e) popup_number_entry_window_t1_ParamLimits

0x95cc,	// (0x000777a1) popup_number_entry_window_t2_ParamLimits

0x95de,	// (0x000777b3) popup_number_entry_window_t3_ParamLimits

0xfed3,	// (0x0006e0a8) popup_number_entry_window_t5_ParamLimits

0xfed3,	// (0x0006e0a8) popup_number_entry_window_t5

0xf0ca,	// (0x0007d29f) popup_number_entry_window_t_ParamLimits

0x95f0,	// (0x000777c5) text_title_cp2_ParamLimits

0x9e53,	// (0x00078028) aid_hotspot_pointer_text2_pane

0x9e79,	// (0x0007804e) main_viewer_pane_g9_ParamLimits

0x9e79,	// (0x0007804e) main_viewer_pane_g9

0xadad,	// (0x00078f82) cale_month_pane_t1_ParamLimits

0xadd3,	// (0x00078fa8) bg_cale_pane_ParamLimits

0xadeb,	// (0x00078fc0) list_cale_pane_ParamLimits

0xadfc,	// (0x00078fd1) listscroll_cale_day_pane_t1

0xae0e,	// (0x00078fe3) scroll_pane_cp09_ParamLimits

0x2971,	// (0x00070b46) main_mup_eq_pane_t1_ParamLimits

0x2971,	// (0x00070b46) main_mup_eq_pane_t1

0x298d,	// (0x00070b62) main_mup_eq_pane_t2_ParamLimits

0x298d,	// (0x00070b62) main_mup_eq_pane_t2

0x29a9,	// (0x00070b7e) main_mup_eq_pane_t3_ParamLimits

0x29a9,	// (0x00070b7e) main_mup_eq_pane_t3

0x29c7,	// (0x00070b9c) main_mup_eq_pane_t4_ParamLimits

0x29c7,	// (0x00070b9c) main_mup_eq_pane_t4

0x29e5,	// (0x00070bba) main_mup_eq_pane_t5_ParamLimits

0x29e5,	// (0x00070bba) main_mup_eq_pane_t5

0x2a03,	// (0x00070bd8) main_mup_eq_pane_t6_ParamLimits

0x2a03,	// (0x00070bd8) main_mup_eq_pane_t6

0x2a19,	// (0x00070bee) main_mup_eq_pane_t7_ParamLimits

0x2a19,	// (0x00070bee) main_mup_eq_pane_t7

0x2a2f,	// (0x00070c04) main_mup_eq_pane_t8_ParamLimits

0x2a2f,	// (0x00070c04) main_mup_eq_pane_t8

0x2a45,	// (0x00070c1a) main_mup_eq_pane_t9_ParamLimits

0x2a45,	// (0x00070c1a) main_mup_eq_pane_t9

0x2a61,	// (0x00070c36) main_mup_eq_pane_t10_ParamLimits

0x2a61,	// (0x00070c36) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007d62a) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007d62a) main_mup_eq_pane_t

0x2b36,	// (0x00070d0b) mup_equalizer_pane_cp5_ParamLimits

0x2b4e,	// (0x00070d23) mup_equalizer_pane_cp6_ParamLimits

0x2b66,	// (0x00070d3b) mup_equalizer_pane_cp7_ParamLimits

0x9532,	// (0x00077707) main_gallery_pane

0xc8d8,	// (0x0007aaad) smil2_volume_pane

0xc8e0,	// (0x0007aab5) smil_status_volume_pane_g1_ParamLimits

0xc8f3,	// (0x0007aac8) smil_status_volume_pane_g2_ParamLimits

0x9e85,	// (0x0007805a) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007d7e0) smil_status_volume_pane_g_ParamLimits

0xca45,	// (0x0007ac1a) bg_popup_window_pane_cp07_ParamLimits

0xca53,	// (0x0007ac28) blid_firmament_pane

0x42a1,	// (0x00072476) aid_size_cell_gallery_ParamLimits

0x42a1,	// (0x00072476) aid_size_cell_gallery

0x42b7,	// (0x0007248c) grid_gallery_pane_ParamLimits

0x42b7,	// (0x0007248c) grid_gallery_pane

0x42d2,	// (0x000724a7) cell_gallery_pane_ParamLimits

0x42d2,	// (0x000724a7) cell_gallery_pane

0xcb7c,	// (0x0007ad51) bg_cell_gallery_focus_pane_ParamLimits

0xcb7c,	// (0x0007ad51) bg_cell_gallery_focus_pane

0xcb8e,	// (0x0007ad63) cell_gallery_pane_g1_ParamLimits

0xcb8e,	// (0x0007ad63) cell_gallery_pane_g1

0x431d,	// (0x000724f2) cell_gallery_pane_g2_ParamLimits

0x431d,	// (0x000724f2) cell_gallery_pane_g2

0x432a,	// (0x000724ff) cell_gallery_pane_g3_ParamLimits

0x432a,	// (0x000724ff) cell_gallery_pane_g3

0xcb9a,	// (0x0007ad6f) cell_gallery_pane_g4_ParamLimits

0xcb9a,	// (0x0007ad6f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007d88e) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007d88e) cell_gallery_pane_g

0xcba6,	// (0x0007ad7b) bg_cell_gallery_focus_pane_g1

0xcbae,	// (0x0007ad83) bg_cell_gallery_focus_pane_g2

0xcbb6,	// (0x0007ad8b) bg_cell_gallery_focus_pane_g3

0xcbbe,	// (0x0007ad93) bg_cell_gallery_focus_pane_g4

0xcbc6,	// (0x0007ad9b) bg_cell_gallery_focus_pane_g5

0xcbce,	// (0x0007ada3) bg_cell_gallery_focus_pane_g6

0xcbd6,	// (0x0007adab) bg_cell_gallery_focus_pane_g7

0xcbde,	// (0x0007adb3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007d897) bg_cell_gallery_focus_pane_g

0xcbe6,	// (0x0007adbb) aid_firma_cardinal

0xcbfa,	// (0x0007adcf) blid_firmament_pane_t1

0xcc11,	// (0x0007ade6) blid_firmament_pane_t2

0xcc28,	// (0x0007adfd) blid_firmament_pane_t3

0xcc3f,	// (0x0007ae14) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007d8a8) blid_firmament_pane_t

0xcc56,	// (0x0007ae2b) blid_sat_info_pane

0xcc66,	// (0x0007ae3b) blid_sat_info_pane_g1

0xcc66,	// (0x0007ae3b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007d8b1) blid_sat_info_pane_g

0xcc70,	// (0x0007ae45) blid_sat_info_pane_t1

0xcc7e,	// (0x0007ae53) smil2_volume_content_pane

0xcc87,	// (0x0007ae5c) smil2_volume_pane_g1

0xcc8f,	// (0x0007ae64) smil2_volume_content_pane_g1

0xcc98,	// (0x0007ae6d) smil2_volume_content_pane_g2

0xcca1,	// (0x0007ae76) smil2_volume_content_pane_g3

0xccaa,	// (0x0007ae7f) smil2_volume_content_pane_g4

0xccb3,	// (0x0007ae88) smil2_volume_content_pane_g5

0xccbc,	// (0x0007ae91) smil2_volume_content_pane_g6

0xccc5,	// (0x0007ae9a) smil2_volume_content_pane_g7

0xccce,	// (0x0007aea3) smil2_volume_content_pane_g8

0xccd7,	// (0x0007aeac) smil2_volume_content_pane_g9

0xcce0,	// (0x0007aeb5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007d8b6) smil2_volume_content_pane_g

0x0750,	// (0x0006e925) cale_week_day_heading_pane_t1_ParamLimits

0x079a,	// (0x0006e96f) cale_week_day_heading_pane_t2_ParamLimits

0x07e9,	// (0x0006e9be) cale_week_day_heading_pane_t3_ParamLimits

0x0838,	// (0x0006ea0d) cale_week_day_heading_pane_t4_ParamLimits

0x0887,	// (0x0006ea5c) cale_week_day_heading_pane_t5_ParamLimits

0x08da,	// (0x0006eaaf) cale_week_day_heading_pane_t6_ParamLimits

0x0931,	// (0x0006eb06) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007d3a6) cale_week_day_heading_pane_t_ParamLimits

0xaa1c,	// (0x00078bf1) bg_cale_side_pane_ParamLimits

0x097b,	// (0x0006eb50) cale_week_time_pane_t1_ParamLimits

0x09b5,	// (0x0006eb8a) cale_week_time_pane_t2_ParamLimits

0x09ef,	// (0x0006ebc4) cale_week_time_pane_t3_ParamLimits

0x0a29,	// (0x0006ebfe) cale_week_time_pane_t4_ParamLimits

0x0a63,	// (0x0006ec38) cale_week_time_pane_t5_ParamLimits

0x0a9d,	// (0x0006ec72) cale_week_time_pane_t6_ParamLimits

0x0ad7,	// (0x0006ecac) cale_week_time_pane_t7_ParamLimits

0x0b11,	// (0x0006ece6) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007d3b5) cale_week_time_pane_t_ParamLimits

0x0b51,	// (0x0006ed26) cell_cale_week_pane_g2_ParamLimits

0xaa1c,	// (0x00078bf1) bg_cale_side_pane_cp01_ParamLimits

0x1f14,	// (0x000700e9) cale_month_week_pane_t1_ParamLimits

0x1f2d,	// (0x00070102) cale_month_week_pane_t2_ParamLimits

0x1f46,	// (0x0007011b) cale_month_week_pane_t3_ParamLimits

0x1f5f,	// (0x00070134) cale_month_week_pane_t4_ParamLimits

0x1f78,	// (0x0007014d) cale_month_week_pane_t5_ParamLimits

0x1f91,	// (0x00070166) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007d48a) cale_month_week_pane_t_ParamLimits

0x9d5e,	// (0x00077f33) cell_cale_month_pane_g1_ParamLimits

0x9532,	// (0x00077707) main_cale_event_viewer_pane

0x9532,	// (0x00077707) listscroll_cale_event_viewer_pane

0xcce9,	// (0x0007aebe) list_cale_ev_pane

0xccf1,	// (0x0007aec6) scroll_pane_cp023

0x4337,	// (0x0007250c) field_cale_ev_pane_ParamLimits

0x4337,	// (0x0007250c) field_cale_ev_pane

0xccfd,	// (0x0007aed2) field_cale_ev_content_pane_ParamLimits

0xccfd,	// (0x0007aed2) field_cale_ev_content_pane

0xcd09,	// (0x0007aede) field_cale_ev_pane_g1_ParamLimits

0xcd09,	// (0x0007aede) field_cale_ev_pane_g1

0xcd15,	// (0x0007aeea) field_cale_ev_pane_g2_ParamLimits

0xcd15,	// (0x0007aeea) field_cale_ev_pane_g2

0xcd2d,	// (0x0007af02) field_cale_ev_pane_g3_ParamLimits

0xcd2d,	// (0x0007af02) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007d8cb) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007d8cb) field_cale_ev_pane_g

0xcd45,	// (0x0007af1a) field_cale_ev_pane_t1_ParamLimits

0xcd45,	// (0x0007af1a) field_cale_ev_pane_t1

0x435b,	// (0x00072530) field_cale_ev_content_pane_t1_ParamLimits

0x435b,	// (0x00072530) field_cale_ev_content_pane_t1

0xb51e,	// (0x000796f3) bg_button_pane_cp01

0x0398,	// (0x0006e56d) listscroll_cale_week_pane_ParamLimits

0x03aa,	// (0x0006e57f) popup_toolbar_window_cp01

0xa9e8,	// (0x00078bbd) listscroll_cale_week_pane_t1_ParamLimits

0x0398,	// (0x0006e56d) listscroll_cale_day_pane_ParamLimits

0x03aa,	// (0x0006e57f) popup_toolbar_window_cp02

0xadfc,	// (0x00078fd1) listscroll_cale_day_pane_t1_ParamLimits

0x0398,	// (0x0006e56d) main_cale_month_pane_ParamLimits

0x38a3,	// (0x00071a78) popup_toolbar_window_cp03_ParamLimits

0x38a3,	// (0x00071a78) popup_toolbar_window_cp03

0x2ec9,	// (0x0007109e) main_image_pane_g2_ParamLimits

0x2ec9,	// (0x0007109e) main_image_pane_g2

0x2eda,	// (0x000710af) main_image_pane_g3_ParamLimits

0x2eda,	// (0x000710af) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007d6bc) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007d6bc) main_image_pane_g

0xb64a,	// (0x0007981f) main_image_pane_t1_ParamLimits

0x2eeb,	// (0x000710c0) main_image_pane_t2_ParamLimits

0x2eeb,	// (0x000710c0) main_image_pane_t2

0x2efd,	// (0x000710d2) main_image_pane_t3_ParamLimits

0x2efd,	// (0x000710d2) main_image_pane_t3

0x2f25,	// (0x000710fa) main_image_pane_t4_ParamLimits

0x2f25,	// (0x000710fa) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007d6c3) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007d6c3) main_image_pane_t

0x2f45,	// (0x0007111a) popup_image_details_window_cp01

0x2f4f,	// (0x00071124) popup_toobar_trans_pane_cp01_ParamLimits

0x2f4f,	// (0x00071124) popup_toobar_trans_pane_cp01

0x3716,	// (0x000718eb) popup_image_details_window_ParamLimits

0x3716,	// (0x000718eb) popup_image_details_window

0xc837,	// (0x0007aa0c) popup_image_focus_window

0x3b7d,	// (0x00071d52) camera2_autofocus_pane_ParamLimits

0x3b7d,	// (0x00071d52) camera2_autofocus_pane

0x9532,	// (0x00077707) bg_popup_sub_pane_cp06

0xcd5c,	// (0x0007af31) popup_image_focus_window_g1

0xcd64,	// (0x0007af39) popup_image_focus_window_g2

0xcd6c,	// (0x0007af41) popup_image_focus_window_g3

0xcd74,	// (0x0007af49) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007d8d2) popup_image_focus_window_g

0xcd7c,	// (0x0007af51) popup_image_focus_window_t1

0xcd8a,	// (0x0007af5f) popup_image_focus_window_t2

0xcd9a,	// (0x0007af6f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007d8db) popup_image_focus_window_t

0xcda8,	// (0x0007af7d) camera2_autofocus_pane_g1

0x958b,	// (0x00077760) bg_tb_trans_pane_cp01

0xcdb6,	// (0x0007af8b) popup_image_details_window_g1

0xcdc9,	// (0x0007af9e) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007d8ed) popup_image_details_window_g

0xcdf2,	// (0x0007afc7) popup_image_details_window_t1

0xce04,	// (0x0007afd9) popup_image_details_window_t2

0xce1d,	// (0x0007aff2) popup_image_details_window_t3

0xce31,	// (0x0007b006) popup_image_details_window_t4

0xce4c,	// (0x0007b021) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007d8f4) popup_image_details_window_t

0xa8ad,	// (0x00078a82) bg_calc_paper_pane_ParamLimits

0x9c96,	// (0x00077e6b) grid_highlight_pane_cp013

0x9ca0,	// (0x00077e75) list_calc_pane_ParamLimits

0x9cb2,	// (0x00077e87) scroll_pane_cp024

0xa8c1,	// (0x00078a96) bg_calc_display_pane_ParamLimits

0x01d6,	// (0x0006e3ab) calc_display_pane_t1_ParamLimits

0x01e8,	// (0x0006e3bd) calc_display_pane_t2_ParamLimits

0x9cba,	// (0x00077e8f) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007d326) calc_display_pane_t_ParamLimits

0x02b1,	// (0x0006e486) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007d343) cell_calc_pane_g

0x02ba,	// (0x0006e48f) cell_calc_pane_t1

0xa920,	// (0x00078af5) grid_highlight_pane_cp02_ParamLimits

0xa936,	// (0x00078b0b) toolbar_button_pane_cp01_ParamLimits

0xa936,	// (0x00078b0b) toolbar_button_pane_cp01

0xb68f,	// (0x00079864) temp_image_control_pane_ParamLimits

0xb68f,	// (0x00079864) temp_image_control_pane

0x958b,	// (0x00077760) main_mp3_pane

0xce66,	// (0x0007b03b) temp_image_control_pane_g1_ParamLimits

0xce66,	// (0x0007b03b) temp_image_control_pane_g1

0xce74,	// (0x0007b049) temp_image_control_pane_g2_ParamLimits

0xce74,	// (0x0007b049) temp_image_control_pane_g2

0xce86,	// (0x0007b05b) temp_image_control_pane_g3_ParamLimits

0xce86,	// (0x0007b05b) temp_image_control_pane_g3

0x43ac,	// (0x00072581) temp_image_control_pane_g4_ParamLimits

0x43ac,	// (0x00072581) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007d8ff) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007d8ff) temp_image_control_pane_g

0xce66,	// (0x0007b03b) main_mp3_pane_g1

0x43bf,	// (0x00072594) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007d908) main_mp3_pane_g

0xcec9,	// (0x0007b09e) main_mp3_pane_t1

0xaa7f,	// (0x00078c54) main_camera_pane_g8_ParamLimits

0xaa7f,	// (0x00078c54) main_camera_pane_g8

0x0e78,	// (0x0006f04d) main_video_pane_g7_ParamLimits

0x0e78,	// (0x0006f04d) main_video_pane_g7

0x9ec2,	// (0x00078097) main_camera2_pane_t7_ParamLimits

0x9ec2,	// (0x00078097) main_camera2_pane_t7

0xabcb,	// (0x00078da0) scroll_pane_cp025_ParamLimits

0xabcb,	// (0x00078da0) scroll_pane_cp025

0xabdf,	// (0x00078db4) scroll_pane_cp026_ParamLimits

0xabdf,	// (0x00078db4) scroll_pane_cp026

0xabee,	// (0x00078dc3) wml_content_pane_ParamLimits

0x9532,	// (0x00077707) main_touch_calib_pane

0x4491,	// (0x00072666) main_touch_calib_pane_g1

0x44a3,	// (0x00072678) main_touch_calib_pane_g2

0x44b5,	// (0x0007268a) main_touch_calib_pane_g3

0x44c7,	// (0x0007269c) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007d926) main_touch_calib_pane_g

0x44d9,	// (0x000726ae) main_touch_calib_pane_t1

0x44f3,	// (0x000726c8) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007d92f) main_touch_calib_pane_t

0xb2ee,	// (0x000794c3) mup_progress_pane_cp02

0xb30d,	// (0x000794e2) navi_pane_g1

0xb36f,	// (0x00079544) navi_pane_mp_t3

0x958b,	// (0x00077760) main_mp3_pane_ParamLimits

0x38e5,	// (0x00071aba) navi_pane_ParamLimits

0xce66,	// (0x0007b03b) main_mp3_pane_g1_ParamLimits

0x43bf,	// (0x00072594) main_mp3_pane_g2_ParamLimits

0x43cb,	// (0x000725a0) main_mp3_pane_g3_ParamLimits

0x43cb,	// (0x000725a0) main_mp3_pane_g3

0x43d9,	// (0x000725ae) main_mp3_pane_g4_ParamLimits

0x43d9,	// (0x000725ae) main_mp3_pane_g4

0xce96,	// (0x0007b06b) main_mp3_pane_g5_ParamLimits

0xce96,	// (0x0007b06b) main_mp3_pane_g5

0xcea4,	// (0x0007b079) main_mp3_pane_g6_ParamLimits

0xcea4,	// (0x0007b079) main_mp3_pane_g6

0xceb1,	// (0x0007b086) main_mp3_pane_g7_ParamLimits

0xceb1,	// (0x0007b086) main_mp3_pane_g7

0xcebd,	// (0x0007b092) main_mp3_pane_g8_ParamLimits

0xcebd,	// (0x0007b092) main_mp3_pane_g8

0xf733,	// (0x0007d908) main_mp3_pane_g_ParamLimits

0x43e5,	// (0x000725ba) main_mp3_pane_t2

0x43f3,	// (0x000725c8) main_mp3_pane_t3

0xced7,	// (0x0007b0ac) main_mp3_pane_t4

0xcee5,	// (0x0007b0ba) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007d919) main_mp3_pane_t

0xcef3,	// (0x0007b0c8) mup_progress_pane_cp01

0xf0c2,	// (0x0007d297) aid_zoom_text_secondary2

0xcce9,	// (0x0007aebe) list_cale_ev2_pane

0xccf1,	// (0x0007aec6) scroll_pane_cp023_ParamLimits

0x454d,	// (0x00072722) field_cale_ev2_pane_ParamLimits

0x454d,	// (0x00072722) field_cale_ev2_pane

0x4571,	// (0x00072746) field_cale_ev2_pane_g1_ParamLimits

0x4571,	// (0x00072746) field_cale_ev2_pane_g1

0x457d,	// (0x00072752) field_cale_ev2_pane_g2_ParamLimits

0x457d,	// (0x00072752) field_cale_ev2_pane_g2

0x4595,	// (0x0007276a) field_cale_ev2_pane_g3_ParamLimits

0x4595,	// (0x0007276a) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007d93a) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007d93a) field_cale_ev2_pane_g

0x45ad,	// (0x00072782) field_cale_ev2_pane_t1_ParamLimits

0x45ad,	// (0x00072782) field_cale_ev2_pane_t1

0x45c4,	// (0x00072799) field_cale_ev2_pane_t2_ParamLimits

0x45c4,	// (0x00072799) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007d943) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007d943) field_cale_ev2_pane_t

0x2d66,	// (0x00070f3b) main_postcard_pane_g5_ParamLimits

0x2d66,	// (0x00070f3b) main_postcard_pane_g5

0x2d7c,	// (0x00070f51) main_postcard_pane_g6_ParamLimits

0x2d7c,	// (0x00070f51) main_postcard_pane_g6

0x0c24,	// (0x0006edf9) camera2_autofocus_pane_cp_ParamLimits

0x0c24,	// (0x0006edf9) camera2_autofocus_pane_cp

0x958b,	// (0x00077760) main_mup3_pane

0x45f9,	// (0x000727ce) main_mup3_pane_g1_ParamLimits

0x45f9,	// (0x000727ce) main_mup3_pane_g1

0x461b,	// (0x000727f0) main_mup3_pane_g2_ParamLimits

0x461b,	// (0x000727f0) main_mup3_pane_g2

0x469e,	// (0x00072873) main_mup3_pane_g3_ParamLimits

0x469e,	// (0x00072873) main_mup3_pane_g3

0x46e6,	// (0x000728bb) main_mup3_pane_g4_ParamLimits

0x46e6,	// (0x000728bb) main_mup3_pane_g4

0x472c,	// (0x00072901) main_mup3_pane_g5_ParamLimits

0x472c,	// (0x00072901) main_mup3_pane_g5

0x4774,	// (0x00072949) main_mup3_pane_g6_ParamLimits

0x4774,	// (0x00072949) main_mup3_pane_g6

0xcefb,	// (0x0007b0d0) main_mup3_pane_g7_ParamLimits

0xcefb,	// (0x0007b0d0) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007d953) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007d953) main_mup3_pane_g

0x47f4,	// (0x000729c9) main_mup3_pane_t1_ParamLimits

0x47f4,	// (0x000729c9) main_mup3_pane_t1

0x4862,	// (0x00072a37) main_mup3_pane_t2_ParamLimits

0x4862,	// (0x00072a37) main_mup3_pane_t2

0x4938,	// (0x00072b0d) main_mup3_pane_t4_ParamLimits

0x4938,	// (0x00072b0d) main_mup3_pane_t4

0x4996,	// (0x00072b6b) main_mup3_pane_t5_ParamLimits

0x4996,	// (0x00072b6b) main_mup3_pane_t5

0x4a50,	// (0x00072c25) main_mup3_pane_t6_ParamLimits

0x4a50,	// (0x00072c25) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007d964) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007d964) main_mup3_pane_t

0x4b08,	// (0x00072cdd) mup3_progress_pane_ParamLimits

0x4b08,	// (0x00072cdd) mup3_progress_pane

0x4b9a,	// (0x00072d6f) popup_mup3_control_window_ParamLimits

0x4b9a,	// (0x00072d6f) popup_mup3_control_window

0xcf09,	// (0x0007b0de) popup_mup3_text_window

0x4bd0,	// (0x00072da5) mup3_progress_pane_t1

0x4bee,	// (0x00072dc3) mup3_progress_pane_t2

0xcf11,	// (0x0007b0e6) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007d971) mup3_progress_pane_t

0xcf2e,	// (0x0007b103) mup_progress_pane_cp03

0x9532,	// (0x00077707) bg_tb_trans_pane_cp04

0x4c0c,	// (0x00072de1) mup3_volume_pane

0x4c14,	// (0x00072de9) popup_mup3_control_window_g1

0x4c1d,	// (0x00072df2) mup3_volume_pane_g1

0x4c26,	// (0x00072dfb) mup3_volume_pane_g2

0x4c2f,	// (0x00072e04) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007d978) mup3_volume_pane_g

0x9532,	// (0x00077707) bg_tb_trans_pane_cp03

0xcf3e,	// (0x0007b113) popup_mup3_text_window_g1

0xcf46,	// (0x0007b11b) popup_mup3_text_window_t1

0xa909,	// (0x00078ade) list_calc_item_pane_g1_ParamLimits

0xc9b3,	// (0x0007ab88) mup_volume_pane_cp_g1

0x450d,	// (0x000726e2) main_touch_calib_pane_t3

0x4521,	// (0x000726f6) main_touch_calib_pane_t4

0x4537,	// (0x0007270c) main_touch_calib_pane_t5

0x953c,	// (0x00077711) aid_cell_size_toolbar2

0x9544,	// (0x00077719) aid_popup3_width_pane

0xfc71,	// (0x0006de46) aid_zoom_text_msg_primary

0x0c01,	// (0x0006edd6) vorec_t7

0xa8cd,	// (0x00078aa2) bg_calc_paper_pane_g1_ParamLimits

0xa8d9,	// (0x00078aae) bg_calc_paper_pane_g2_ParamLimits

0xa8e5,	// (0x00078aba) bg_calc_paper_pane_g3_ParamLimits

0xa8f1,	// (0x00078ac6) bg_calc_paper_pane_g4_ParamLimits

0xa8fd,	// (0x00078ad2) bg_calc_paper_pane_g5_ParamLimits

0x0237,	// (0x0006e40c) bg_calc_paper_pane_g6_ParamLimits

0x024a,	// (0x0006e41f) bg_calc_paper_pane_g7_ParamLimits

0x025d,	// (0x0006e432) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007d32d) bg_calc_paper_pane_g_ParamLimits

0x026e,	// (0x0006e443) calc_bg_paper_pane_g9_ParamLimits

0x0d86,	// (0x0006ef5b) image_qvga_pane_ParamLimits

0x0d86,	// (0x0006ef5b) image_qvga_pane

0x9c07,	// (0x00077ddc) bg_popup_sub_pane_cp04_ParamLimits

0xb5c6,	// (0x0007979b) popup_mup_playback_window_g1_ParamLimits

0xb5d2,	// (0x000797a7) popup_mup_playback_window_t1_ParamLimits

0xb5e7,	// (0x000797bc) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007d6b7) popup_mup_playback_window_t_ParamLimits

0x4001,	// (0x000721d6) main_mup2_pane_g3_ParamLimits

0x4001,	// (0x000721d6) main_mup2_pane_g3

0x1168,	// (0x0006f33d) popup_toolbar_window_cp04

0xb9e2,	// (0x00079bb7) popup_call2_audio_second_window_g3_ParamLimits

0xb9e2,	// (0x00079bb7) popup_call2_audio_second_window_g3

0xbe25,	// (0x00079ffa) popup_call2_audio_first_window_g4_ParamLimits

0xbe25,	// (0x00079ffa) popup_call2_audio_first_window_g4

0xc4a4,	// (0x0007a679) popup_call2_audio_in_window_g4_ParamLimits

0xc4a4,	// (0x0007a679) popup_call2_audio_in_window_g4

0x2eab,	// (0x00071080) aid_area_sk_bg_cut_ParamLimits

0x2eab,	// (0x00071080) aid_area_sk_bg_cut

0xb5fc,	// (0x000797d1) aid_area_sk_bg_cut_2_ParamLimits

0xb5fc,	// (0x000797d1) aid_area_sk_bg_cut_2

0x430d,	// (0x000724e2) aid_placing_details_win

0x4315,	// (0x000724ea) aid_placing_details_win_2

0xcda8,	// (0x0007af7d) camera2_autofocus_pane_g1_ParamLimits

0xfe1a,	// (0x0006dfef) popup_fixed_preview_cale_window_ParamLimits

0xfe1a,	// (0x0006dfef) popup_fixed_preview_cale_window

0xb3b6,	// (0x0007958b) navi_slider_pane_g3

0xb3bf,	// (0x00079594) navi_slider_pane_g4

0xb3c8,	// (0x0007959d) navi_slider_pane_g5

0xb3b6,	// (0x0007958b) navi_slider_pane_g6

0x9e04,	// (0x00077fd9) navi_slider_pane_g7

0xb4eb,	// (0x000796c0) mup_scale_pane_g3

0xb4f4,	// (0x000796c9) mup_scale_pane_g4

0xb4fd,	// (0x000796d2) mup_scale_pane_g5

0x2b7e,	// (0x00070d53) mup_scale_pane_g6

0x2b87,	// (0x00070d5c) mup_scale_pane_g7

0xb3b6,	// (0x0007958b) cams2_slider_pane_g3

0xca35,	// (0x0007ac0a) cams2_slider_pane_g4

0x9f28,	// (0x000780fd) cams2_slider_pane_g5

0xb3b6,	// (0x0007958b) cams2_slider_pane_g6

0x9f30,	// (0x00078105) cams2_slider_pane_g7

0xcc66,	// (0x0007ae3b) camera2_autofocus_pane_cp_g1

0xc809,	// (0x0007a9de) bg_popup_preview_window_pane_cp02_ParamLimits

0xc809,	// (0x0007a9de) bg_popup_preview_window_pane_cp02

0xcf54,	// (0x0007b129) list_fp_cale_pane_ParamLimits

0xcf54,	// (0x0007b129) list_fp_cale_pane

0xcf60,	// (0x0007b135) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf60,	// (0x0007b135) popup_fixed_preview_cale_window_t1

0x4c38,	// (0x00072e0d) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c38,	// (0x00072e0d) popup_fixed_preview_cale_window_t2

0x4c4d,	// (0x00072e22) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c4d,	// (0x00072e22) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007d97f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007d97f) popup_fixed_preview_cale_window_t

0x4c62,	// (0x00072e37) list_single_fp_cale_pane_ParamLimits

0x4c62,	// (0x00072e37) list_single_fp_cale_pane

0xcf86,	// (0x0007b15b) list_single_fp_cale_pane_g1_ParamLimits

0xcf86,	// (0x0007b15b) list_single_fp_cale_pane_g1

0xcf92,	// (0x0007b167) list_single_fp_cale_pane_g2_ParamLimits

0xcf92,	// (0x0007b167) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007d986) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007d986) list_single_fp_cale_pane_g

0xcfab,	// (0x0007b180) list_single_fp_cale_pane_t1_ParamLimits

0xcfab,	// (0x0007b180) list_single_fp_cale_pane_t1

0xcfbd,	// (0x0007b192) list_single_fp_cale_pane_t2_ParamLimits

0xcfbd,	// (0x0007b192) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007d98d) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007d98d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9532,	// (0x00077707) main_dialer_pane

0x4c77,	// (0x00072e4c) aid_cell_size_keypad

0x4c81,	// (0x00072e56) dialer_ne_pane

0x4c8b,	// (0x00072e60) grid_dialer_command_1_pane

0x4c93,	// (0x00072e68) grid_dialer_command_2_pane

0x4c9b,	// (0x00072e70) grid_dialer_keypad_pane

0x4cad,	// (0x00072e82) bg_popup_call_pane_cp06_ParamLimits

0x4cad,	// (0x00072e82) bg_popup_call_pane_cp06

0x4cb9,	// (0x00072e8e) dialer_ne_clear_pane_ParamLimits

0x4cb9,	// (0x00072e8e) dialer_ne_clear_pane

0xcff0,	// (0x0007b1c5) dialer_ne_pane_g1

0xcff8,	// (0x0007b1cd) dialer_ne_pane_t1_ParamLimits

0xcff8,	// (0x0007b1cd) dialer_ne_pane_t1

0x4cc5,	// (0x00072e9a) dialer_ne_pane_t2_ParamLimits

0x4cc5,	// (0x00072e9a) dialer_ne_pane_t2

0x4cef,	// (0x00072ec4) dialer_ne_pane_t3_ParamLimits

0x4cef,	// (0x00072ec4) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007d992) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007d992) dialer_ne_pane_t

0x4d1f,	// (0x00072ef4) dialer_ne_pane_t3_copy1_ParamLimits

0x4d1f,	// (0x00072ef4) dialer_ne_pane_t3_copy1

0x4d4e,	// (0x00072f23) cell_dialer_keypad_pane_ParamLimits

0x4d4e,	// (0x00072f23) cell_dialer_keypad_pane

0x4d65,	// (0x00072f3a) cell_dialer_command_1_pane_ParamLimits

0x4d65,	// (0x00072f3a) cell_dialer_command_1_pane

0x4d7b,	// (0x00072f50) cell_dialer_command_2_pane_ParamLimits

0x4d7b,	// (0x00072f50) cell_dialer_command_2_pane

0xd00a,	// (0x0007b1df) bg_button_pane_cp02_ParamLimits

0xd00a,	// (0x0007b1df) bg_button_pane_cp02

0x4d8a,	// (0x00072f5f) cell_dialer_keypad_pane_g1_ParamLimits

0x4d8a,	// (0x00072f5f) cell_dialer_keypad_pane_g1

0xd00a,	// (0x0007b1df) bg_button_pane_cp03_ParamLimits

0xd00a,	// (0x0007b1df) bg_button_pane_cp03

0x4d9f,	// (0x00072f74) cell_dialer_command_1_pane_g1_ParamLimits

0x4d9f,	// (0x00072f74) cell_dialer_command_1_pane_g1

0xd016,	// (0x0007b1eb) bg_button_pane_cp04

0x4db3,	// (0x00072f88) cell_dialer_command_2_pane_g1

0xaa77,	// (0x00078c4c) bg_button_pane_cp06

0xd01e,	// (0x0007b1f3) dialer_ne_clear_pane_g1

0x2650,	// (0x00070825) navi_pane_g2

0x267e,	// (0x00070853) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007d5ba) navi_pane_g

0x26a9,	// (0x0007087e) navi_pane_mv_g2

0x26d0,	// (0x000708a5) navi_pane_mv_g5

0x26d8,	// (0x000708ad) navi_pane_mv_t1

0xa8c1,	// (0x00078a96) main_clock2_pane

0x4dfe,	// (0x00072fd3) main_clock2_list_pane_ParamLimits

0x4dfe,	// (0x00072fd3) main_clock2_list_pane

0x4e36,	// (0x0007300b) main_clock2_pane_t1_ParamLimits

0x4e36,	// (0x0007300b) main_clock2_pane_t1

0x4e72,	// (0x00073047) main_clock2_pane_t2_ParamLimits

0x4e72,	// (0x00073047) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007d99e) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007d99e) main_clock2_pane_t

0x4f12,	// (0x000730e7) popup_clock_analogue_window_cp03_ParamLimits

0x4f12,	// (0x000730e7) popup_clock_analogue_window_cp03

0x4f39,	// (0x0007310e) popup_clock_digital_window_cp02_ParamLimits

0x4f39,	// (0x0007310e) popup_clock_digital_window_cp02

0x4fb2,	// (0x00073187) main_clock2_list_single_pane_ParamLimits

0x4fb2,	// (0x00073187) main_clock2_list_single_pane

0xaa77,	// (0x00078c4c) list_highlight_pane_cp05

0xd05a,	// (0x0007b22f) main_clock2_list_single_pane_t1

0x1168,	// (0x0006f33d) popup_toolbar_window_cp04_ParamLimits

0x437c,	// (0x00072551) camera2_autofocus_pane_g2_ParamLimits

0x437c,	// (0x00072551) camera2_autofocus_pane_g2

0x4388,	// (0x0007255d) camera2_autofocus_pane_g3_ParamLimits

0x4388,	// (0x0007255d) camera2_autofocus_pane_g3

0x4394,	// (0x00072569) camera2_autofocus_pane_g4_ParamLimits

0x4394,	// (0x00072569) camera2_autofocus_pane_g4

0x43a0,	// (0x00072575) camera2_autofocus_pane_g5_ParamLimits

0x43a0,	// (0x00072575) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007d8e2) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007d8e2) camera2_autofocus_pane_g

0x45d9,	// (0x000727ae) camera2_autofocus_pane_cp_g2

0x45e1,	// (0x000727b6) camera2_autofocus_pane_cp_g3

0x45e9,	// (0x000727be) camera2_autofocus_pane_cp_g4

0x45f1,	// (0x000727c6) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007d948) camera2_autofocus_pane_cp_g

0x4ca5,	// (0x00072e7a) popup_dialer_spcha_window

0x9532,	// (0x00077707) bg_popup_sub_pane_cp07

0xd068,	// (0x0007b23d) list_spcha_pane

0xd070,	// (0x0007b245) list_single_spcha_pane_ParamLimits

0xd070,	// (0x0007b245) list_single_spcha_pane

0x9532,	// (0x00077707) list_highlight_pane_cp06

0xd081,	// (0x0007b256) list_single_spcha_pane_t1

0xc24e,	// (0x0007a423) popup_call2_audio_out_window_g4_ParamLimits

0xc24e,	// (0x0007a423) popup_call2_audio_out_window_g4

0x9532,	// (0x00077707) main_imed2_pane

0xc841,	// (0x0007aa16) popup_imed_adjust2_window

0x372e,	// (0x00071903) popup_imed_trans_window_ParamLimits

0x372e,	// (0x00071903) popup_imed_trans_window

0xca9e,	// (0x0007ac73) popup_blid_sat_info2_window_t1

0xcaac,	// (0x0007ac81) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007d877) popup_blid_sat_info2_window_t

0x5068,	// (0x0007323d) aid_size_cell_colour_35

0x5088,	// (0x0007325d) aid_size_cell_colour_112

0x50a8,	// (0x0007327d) aid_size_cell_effect

0xc815,	// (0x0007a9ea) bg_tb_trans_pane_cp02

0xaf0d,	// (0x000790e2) heading_imed_pane

0x50c8,	// (0x0007329d) listscroll_imed_pane

0xd08f,	// (0x0007b264) heading_imed_pane_g1

0xd097,	// (0x0007b26c) heading_imed_pane_t1

0xd0a5,	// (0x0007b27a) grid_imed_colour_35_pane_ParamLimits

0xd0a5,	// (0x0007b27a) grid_imed_colour_35_pane

0x50d4,	// (0x000732a9) grid_imed_effect_pane

0xd0c1,	// (0x0007b296) list_imed_aspect_pane

0x50e9,	// (0x000732be) scroll_pane_cp027_ParamLimits

0x50e9,	// (0x000732be) scroll_pane_cp027

0x50fa,	// (0x000732cf) cell_imed_effect_pane_ParamLimits

0x50fa,	// (0x000732cf) cell_imed_effect_pane

0xd0c9,	// (0x0007b29e) cell_imed_colour_pane_ParamLimits

0xd0c9,	// (0x0007b29e) cell_imed_colour_pane

0xd113,	// (0x0007b2e8) cell_imed_colour_pane_g1_ParamLimits

0xd113,	// (0x0007b2e8) cell_imed_colour_pane_g1

0xd124,	// (0x0007b2f9) hgihlgiht_grid_pane_cp016_ParamLimits

0xd124,	// (0x0007b2f9) hgihlgiht_grid_pane_cp016

0x5125,	// (0x000732fa) cell_imed_effect_pane_g1

0x512d,	// (0x00073302) grid_highlight_pane_cp017

0xd135,	// (0x0007b30a) list_imed_single_pane_ParamLimits

0xd135,	// (0x0007b30a) list_imed_single_pane

0x9532,	// (0x00077707) list_highlight_pane_cp07

0xd149,	// (0x0007b31e) list_imed_aspect_pane_comp1_t1

0xc815,	// (0x0007a9ea) bg_tb_trans_pane_cp05

0xd16b,	// (0x0007b340) popup_imed_adjust2_window_g1

0xd192,	// (0x0007b367) popup_imed_adjust2_window_t1

0xd1aa,	// (0x0007b37f) slider_imed_adjust_pane

0xd1be,	// (0x0007b393) slider_imed_adjust_pane_g1

0xd1ce,	// (0x0007b3a3) slider_imed_adjust_pane_g2

0xd1de,	// (0x0007b3b3) slider_imed_adjust_pane_g3

0xd1ef,	// (0x0007b3c4) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007d9bb) slider_imed_adjust_pane_g

0x5136,	// (0x0007330b) aid_size_cell_clipart2

0x5142,	// (0x00073317) grid_imed_clipart_pane

0xd200,	// (0x0007b3d5) scroll_pane_cp031

0x514c,	// (0x00073321) cell_imed_clipart_pane_ParamLimits

0x514c,	// (0x00073321) cell_imed_clipart_pane

0x5169,	// (0x0007333e) cell_imed_clipart_pane_g1

0x9532,	// (0x00077707) grid_highlight_pane_cp014

0x4e13,	// (0x00072fe8) main_clock2_pane_g1_ParamLimits

0x4e13,	// (0x00072fe8) main_clock2_pane_g1

0x4f59,	// (0x0007312e) aid_call2_pane_cp10

0x4f6b,	// (0x00073140) aid_call_pane_cp10

0xb2e2,	// (0x000794b7) popup_clock_analogue_window_cp10_g1

0xb2e2,	// (0x000794b7) popup_clock_analogue_window_cp10_g2

0x4f7d,	// (0x00073152) popup_clock_analogue_window_cp10_g3

0x4f7d,	// (0x00073152) popup_clock_analogue_window_cp10_g4

0xb2e2,	// (0x000794b7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007d9a9) popup_clock_analogue_window_cp10_g

0x4f93,	// (0x00073168) popup_clock_analogue_window_cp10_t1

0x4fc4,	// (0x00073199) clock_digital_number_pane_cp10_ParamLimits

0x4fc4,	// (0x00073199) clock_digital_number_pane_cp10

0x4fde,	// (0x000731b3) clock_digital_number_pane_cp11_ParamLimits

0x4fde,	// (0x000731b3) clock_digital_number_pane_cp11

0x4ff8,	// (0x000731cd) clock_digital_number_pane_cp12_ParamLimits

0x4ff8,	// (0x000731cd) clock_digital_number_pane_cp12

0x5012,	// (0x000731e7) clock_digital_number_pane_cp13_ParamLimits

0x5012,	// (0x000731e7) clock_digital_number_pane_cp13

0x502c,	// (0x00073201) clock_digital_separator_pane_cp10_ParamLimits

0x502c,	// (0x00073201) clock_digital_separator_pane_cp10

0x5046,	// (0x0007321b) popup_clock_digital_window_cp02_t1_ParamLimits

0x5046,	// (0x0007321b) popup_clock_digital_window_cp02_t1

0x9bff,	// (0x00077dd4) clock_digital_number_pane_cp10_g1

0x9bff,	// (0x00077dd4) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007d9c4) clock_digital_number_pane_cp10_g

0x9bff,	// (0x00077dd4) clock_digital_separator_pane_cp10_g1

0x9bff,	// (0x00077dd4) clock_digital_separator_pane_g2_cp10

0xb37d,	// (0x00079552) navi_pane_vded_g4

0xb386,	// (0x0007955b) navi_pane_vded_g5

0xb38f,	// (0x00079564) navi_pane_vded_t1

0x9532,	// (0x00077707) main_vded_pane

0x5172,	// (0x00073347) main_vded_pane_g1

0x517e,	// (0x00073353) main_vded_pane_g2

0x518a,	// (0x0007335f) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007d9c9) main_vded_pane_g

0x5196,	// (0x0007336b) main_vded_pane_t1

0x51a4,	// (0x00073379) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007d9d0) main_vded_pane_t

0x51b2,	// (0x00073387) vded_slider_pane

0x51bc,	// (0x00073391) vded_video_pane

0xd208,	// (0x0007b3dd) vded_video_pane_g1

0x51c6,	// (0x0007339b) vded_video_pane_g2

0xcc66,	// (0x0007ae3b) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007d9d5) vded_video_pane_g

0xd212,	// (0x0007b3e7) vded_slider_pane_g1

0xc9b3,	// (0x0007ab88) vded_slider_pane_g2

0xd21b,	// (0x0007b3f0) vded_slider_pane_g3

0xd224,	// (0x0007b3f9) vded_slider_pane_g4

0xd22d,	// (0x0007b402) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007d9dc) vded_slider_pane_g

0x4b84,	// (0x00072d59) mup3_rocker_pane_ParamLimits

0x4b84,	// (0x00072d59) mup3_rocker_pane

0x51cf,	// (0x000733a4) mup3_control_keys_pane_g1

0x51d7,	// (0x000733ac) mup3_control_keys_pane_g2

0x51df,	// (0x000733b4) mup3_control_keys_pane_g3

0x51e7,	// (0x000733bc) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007d9e7) mup3_control_keys_pane_g

0xfe51,	// (0x0006e026) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe51,	// (0x0006e026) popup_toolbar2_fixed_window_cp01

0x4bba,	// (0x00072d8f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bba,	// (0x00072d8f) popup_toolbar2_fixed_window_cp02

0xbb54,	// (0x00079d29) popup_call2_audio_second_window_t4_ParamLimits

0xbb54,	// (0x00079d29) popup_call2_audio_second_window_t4

0xc0bb,	// (0x0007a290) popup_call2_audio_first_window_t6_ParamLimits

0xc0bb,	// (0x0007a290) popup_call2_audio_first_window_t6

0xc351,	// (0x0007a526) popup_call2_audio_out_window_t6_ParamLimits

0xc351,	// (0x0007a526) popup_call2_audio_out_window_t6

0x9532,	// (0x00077707) main_vitu_pane

0x51f7,	// (0x000733cc) aid_size_cell_itu_ParamLimits

0x51f7,	// (0x000733cc) aid_size_cell_itu

0x958b,	// (0x00077760) bg_popup_window_pane_cp08_ParamLimits

0x958b,	// (0x00077760) bg_popup_window_pane_cp08

0x520d,	// (0x000733e2) field_vitu_entry_pane_ParamLimits

0x520d,	// (0x000733e2) field_vitu_entry_pane

0x5224,	// (0x000733f9) grid_vitu_function_pane_ParamLimits

0x5224,	// (0x000733f9) grid_vitu_function_pane

0x523f,	// (0x00073414) grid_vitu_itu_pane_ParamLimits

0x523f,	// (0x00073414) grid_vitu_itu_pane

0x525d,	// (0x00073432) cell_vitu_itu_pane_ParamLimits

0x525d,	// (0x00073432) cell_vitu_itu_pane

0x5283,	// (0x00073458) cell_vitu_function_pane_ParamLimits

0x5283,	// (0x00073458) cell_vitu_function_pane

0x958b,	// (0x00077760) bg_popup_sub_pane_cp08_ParamLimits

0x958b,	// (0x00077760) bg_popup_sub_pane_cp08

0x529e,	// (0x00073473) field_vitu_entry_pane_t1_ParamLimits

0x529e,	// (0x00073473) field_vitu_entry_pane_t1

0xd24e,	// (0x0007b423) field_vitu_entry_pane_t2_ParamLimits

0xd24e,	// (0x0007b423) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007d9f5) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007d9f5) field_vitu_entry_pane_t

0xd26b,	// (0x0007b440) bg_button_pane_cp05_ParamLimits

0xd26b,	// (0x0007b440) bg_button_pane_cp05

0x52be,	// (0x00073493) cell_vitu_itu_pane_g1

0x52d6,	// (0x000734ab) cell_vitu_itu_pane_t1_ParamLimits

0x52d6,	// (0x000734ab) cell_vitu_itu_pane_t1

0x52e8,	// (0x000734bd) cell_vitu_itu_pane_t2_ParamLimits

0x52e8,	// (0x000734bd) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007d9fa) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007d9fa) cell_vitu_itu_pane_t

0xd279,	// (0x0007b44e) bg_button_pane_cp07

0x531d,	// (0x000734f2) cell_vitu_function_pane_g1

0x9c8e,	// (0x00077e63) main_calc_pane_g1

0xfc65,	// (0x0006de3a) aid_visual_content_pane

0x9532,	// (0x00077707) main_vradio_pane

0x5326,	// (0x000734fb) main_vradio_pane_g1_ParamLimits

0x5326,	// (0x000734fb) main_vradio_pane_g1

0xd283,	// (0x0007b458) main_vradio_pane_g2_ParamLimits

0xd283,	// (0x0007b458) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007da01) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007da01) main_vradio_pane_g

0x533d,	// (0x00073512) main_vradio_pane_t1_ParamLimits

0x533d,	// (0x00073512) main_vradio_pane_t1

0x5352,	// (0x00073527) main_vradio_pane_t2_ParamLimits

0x5352,	// (0x00073527) main_vradio_pane_t2

0xd290,	// (0x0007b465) main_vradio_pane_t3_ParamLimits

0xd290,	// (0x0007b465) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007da06) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007da06) main_vradio_pane_t

0x5367,	// (0x0007353c) vradio_rocker_control_pane_ParamLimits

0x5367,	// (0x0007353c) vradio_rocker_control_pane

0x5379,	// (0x0007354e) vradio_station_info_pane_ParamLimits

0x5379,	// (0x0007354e) vradio_station_info_pane

0xd2a4,	// (0x0007b479) vradio_frequency_info_pane_ParamLimits

0xd2a4,	// (0x0007b479) vradio_frequency_info_pane

0xcc66,	// (0x0007ae3b) vradio_station_info_pane_g1

0xd2b3,	// (0x0007b488) vradio_station_info_pane_t1_ParamLimits

0xd2b3,	// (0x0007b488) vradio_station_info_pane_t1

0xd2d5,	// (0x0007b4aa) vradio_station_info_pane_t2_ParamLimits

0xd2d5,	// (0x0007b4aa) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007da0d) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007da0d) vradio_station_info_pane_t

0xd2e7,	// (0x0007b4bc) vradio_tuning_pane

0xd2ef,	// (0x0007b4c4) vradio_rocker_control_pane_g1

0xd2f7,	// (0x0007b4cc) vradio_rocker_control_pane_g2

0xd2ff,	// (0x0007b4d4) vradio_rocker_control_pane_g3

0xd307,	// (0x0007b4dc) vradio_rocker_control_pane_g4

0xd30f,	// (0x0007b4e4) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007da12) vradio_rocker_control_pane_g

0x5389,	// (0x0007355e) vradio_frequency_info_pane_g1

0xd317,	// (0x0007b4ec) vradio_frequency_info_pane_t1_ParamLimits

0xd317,	// (0x0007b4ec) vradio_frequency_info_pane_t1

0x5393,	// (0x00073568) vradio_tuning_pane_g1

0x539e,	// (0x00073573) vradio_tuning_pane_t1

0x9558,	// (0x0007772d) area_side_right_pane_ParamLimits

0x9558,	// (0x0007772d) area_side_right_pane

0xc7d0,	// (0x0007a9a5) status_small_pane_g1

0xc7d8,	// (0x0007a9ad) status_small_pane_g2

0xc7e1,	// (0x0007a9b6) status_small_pane_g3

0xc7ea,	// (0x0007a9bf) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007d7cd) status_small_pane_g

0xc7f3,	// (0x0007a9c8) status_small_pane_t1

0x9532,	// (0x00077707) main_video3_pane

0xd32b,	// (0x0007b500) cams_zoom_vslider_pane

0xd333,	// (0x0007b508) image3_wide_pane_ParamLimits

0xd333,	// (0x0007b508) image3_wide_pane

0xd34d,	// (0x0007b522) image3_wide_small_pane

0xd359,	// (0x0007b52e) main_video3_pane_g1_ParamLimits

0xd359,	// (0x0007b52e) main_video3_pane_g1

0xd375,	// (0x0007b54a) main_video3_pane_g2_ParamLimits

0xd375,	// (0x0007b54a) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007da1d) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007da1d) main_video3_pane_g

0xd391,	// (0x0007b566) main_video3_pane_t1_ParamLimits

0xd391,	// (0x0007b566) main_video3_pane_t1

0xd3bc,	// (0x0007b591) main_video3_pane_t2_ParamLimits

0xd3bc,	// (0x0007b591) main_video3_pane_t2

0xd3e9,	// (0x0007b5be) main_video3_pane_t3_ParamLimits

0xd3e9,	// (0x0007b5be) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007da22) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007da22) main_video3_pane_t

0xd416,	// (0x0007b5eb) cams_zoom_vslider_pane_g1

0xd41f,	// (0x0007b5f4) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007da29) cams_zoom_vslider_pane_g

0xd427,	// (0x0007b5fc) small_slider_vertical_pane

0xcc66,	// (0x0007ae3b) small_slider_vertical_pane_g1

0xcc66,	// (0x0007ae3b) small_slider_vertical_pane_g2

0xd42f,	// (0x0007b604) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007da2e) small_slider_vertical_pane_g

0x9532,	// (0x00077707) main_hwr_training_pane

0xd438,	// (0x0007b60d) hwr_training_instruct_pane_ParamLimits

0xd438,	// (0x0007b60d) hwr_training_instruct_pane

0x53ad,	// (0x00073582) hwr_training_navi_pane_ParamLimits

0x53ad,	// (0x00073582) hwr_training_navi_pane

0x53cc,	// (0x000735a1) hwr_training_write_pane_ParamLimits

0x53cc,	// (0x000735a1) hwr_training_write_pane

0x9532,	// (0x00077707) bg_frame_shadow_pane

0xd46f,	// (0x0007b644) hwr_training_write_pane_g1

0xd477,	// (0x0007b64c) hwr_training_write_pane_g2

0xd47f,	// (0x0007b654) hwr_training_write_pane_g3

0xd487,	// (0x0007b65c) hwr_training_write_pane_g4

0xd48f,	// (0x0007b664) hwr_training_write_pane_g5

0xd497,	// (0x0007b66c) hwr_training_write_pane_g6

0xd49f,	// (0x0007b674) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007da35) hwr_training_write_pane_g

0x9f45,	// (0x0007811a) hwr_training_navi_pane_g1_ParamLimits

0x9f45,	// (0x0007811a) hwr_training_navi_pane_g1

0x9f57,	// (0x0007812c) hwr_training_navi_pane_g2_ParamLimits

0x9f57,	// (0x0007812c) hwr_training_navi_pane_g2

0x9f69,	// (0x0007813e) hwr_training_navi_pane_g3_ParamLimits

0x9f69,	// (0x0007813e) hwr_training_navi_pane_g3

0x9f79,	// (0x0007814e) hwr_training_navi_pane_g4_ParamLimits

0x9f79,	// (0x0007814e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007da44) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007da44) hwr_training_navi_pane_g

0x9f86,	// (0x0007815b) hwr_training_navi_pane_t1

0x5414,	// (0x000735e9) list_single_hwr_training_instruct_pane_ParamLimits

0x5414,	// (0x000735e9) list_single_hwr_training_instruct_pane

0xd4a7,	// (0x0007b67c) list_single_hwr_training_instruct_pane_t1

0xcba6,	// (0x0007ad7b) bg_frame_shadow_pane_g1

0xd4b6,	// (0x0007b68b) bg_frame_shadow_pane_g2

0xd4be,	// (0x0007b693) bg_frame_shadow_pane_g3

0xd4c6,	// (0x0007b69b) bg_frame_shadow_pane_g4

0xd4ce,	// (0x0007b6a3) bg_frame_shadow_pane_g5

0xd4d6,	// (0x0007b6ab) bg_frame_shadow_pane_g6

0xd4de,	// (0x0007b6b3) bg_frame_shadow_pane_g7

0xa98c,	// (0x00078b61) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007da4f) bg_frame_shadow_pane_g

0x9532,	// (0x00077707) main_video_tele_dialer_pane

0x5429,	// (0x000735fe) aid_size_cell_video_keypad_ParamLimits

0x5429,	// (0x000735fe) aid_size_cell_video_keypad

0x5443,	// (0x00073618) grid_video_dialer_keypad_pane_ParamLimits

0x5443,	// (0x00073618) grid_video_dialer_keypad_pane

0x548f,	// (0x00073664) video_down_pane_cp_ParamLimits

0x548f,	// (0x00073664) video_down_pane_cp

0x54bf,	// (0x00073694) cell_video_dialer_keypad_pane_ParamLimits

0x54bf,	// (0x00073694) cell_video_dialer_keypad_pane

0xd4e6,	// (0x0007b6bb) bg_button_pane_cp08_ParamLimits

0xd4e6,	// (0x0007b6bb) bg_button_pane_cp08

0x54e3,	// (0x000736b8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54e3,	// (0x000736b8) cell_video_dialer_keypad_pane_g1

0x4b6e,	// (0x00072d43) mup3_rocker2_pane_ParamLimits

0x4b6e,	// (0x00072d43) mup3_rocker2_pane

0xcc66,	// (0x0007ae3b) mup3_rocker2_pane_g1

0x35fb,	// (0x000717d0) main_dialer2_pane

0x9532,	// (0x00077707) main_mp4_pane

0x9f9c,	// (0x00078171) main_mp4_pane_g1_ParamLimits

0x9f9c,	// (0x00078171) main_mp4_pane_g1

0x9f9c,	// (0x00078171) main_mp4_pane_g2_ParamLimits

0x9f9c,	// (0x00078171) main_mp4_pane_g2

0x551e,	// (0x000736f3) main_mp4_pane_g3_ParamLimits

0x551e,	// (0x000736f3) main_mp4_pane_g3

0x9faa,	// (0x0007817f) main_mp4_pane_g4_ParamLimits

0x9faa,	// (0x0007817f) main_mp4_pane_g4

0x9fd2,	// (0x000781a7) main_mp4_pane_g5_ParamLimits

0x9fd2,	// (0x000781a7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007da6f) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007da6f) main_mp4_pane_g

0xa022,	// (0x000781f7) main_mp4_pane_t1_ParamLimits

0xa022,	// (0x000781f7) main_mp4_pane_t1

0xa07e,	// (0x00078253) main_mp4_pane_t2_ParamLimits

0xa07e,	// (0x00078253) main_mp4_pane_t2

0xd4f2,	// (0x0007b6c7) main_mp4_pane_t3_ParamLimits

0xd4f2,	// (0x0007b6c7) main_mp4_pane_t3

0xa0d0,	// (0x000782a5) main_mp4_pane_t4_ParamLimits

0xa0d0,	// (0x000782a5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007da7c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007da7c) main_mp4_pane_t

0xa110,	// (0x000782e5) mp4_progress_pane_ParamLimits

0xa110,	// (0x000782e5) mp4_progress_pane

0xa15a,	// (0x0007832f) mp4_rocker_pane_ParamLimits

0xa15a,	// (0x0007832f) mp4_rocker_pane

0xd51a,	// (0x0007b6ef) mp4_progress_pane_t1

0xd533,	// (0x0007b708) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007da85) mp4_progress_pane_t

0xd54c,	// (0x0007b721) mup_progress_pane_cp04

0xd558,	// (0x0007b72d) mp4_rocker_pane_g1

0x5568,	// (0x0007373d) aid_cell_size_keypad2_ParamLimits

0x5568,	// (0x0007373d) aid_cell_size_keypad2

0x557e,	// (0x00073753) dialer2_ne_pane_ParamLimits

0x557e,	// (0x00073753) dialer2_ne_pane

0x5596,	// (0x0007376b) grid_dialer2_keypad_pane_ParamLimits

0x5596,	// (0x0007376b) grid_dialer2_keypad_pane

0xca45,	// (0x0007ac1a) bg_popup_call_pane_cp07_ParamLimits

0xca45,	// (0x0007ac1a) bg_popup_call_pane_cp07

0x55b2,	// (0x00073787) dialer2_ne_pane_t1_ParamLimits

0x55b2,	// (0x00073787) dialer2_ne_pane_t1

0x55ed,	// (0x000737c2) cell_dialer2_keypad_pane_ParamLimits

0x55ed,	// (0x000737c2) cell_dialer2_keypad_pane

0xd574,	// (0x0007b749) bg_button_pane_pane_cp04_ParamLimits

0xd574,	// (0x0007b749) bg_button_pane_pane_cp04

0x5611,	// (0x000737e6) cell_dialer2_keypad_pane_g1_ParamLimits

0x5611,	// (0x000737e6) cell_dialer2_keypad_pane_g1

0x104f,	// (0x0006f224) aid_placing_vt_set_content_ParamLimits

0x104f,	// (0x0006f224) aid_placing_vt_set_content

0x1073,	// (0x0006f248) aid_placing_vt_set_title_ParamLimits

0x1073,	// (0x0006f248) aid_placing_vt_set_title

0x9532,	// (0x00077707) main_image3_pane

0x56d7,	// (0x000738ac) area_side_right_pane_cp01_ParamLimits

0x56d7,	// (0x000738ac) area_side_right_pane_cp01

0x9f9c,	// (0x00078171) main_image3_pane_g1_ParamLimits

0x9f9c,	// (0x00078171) main_image3_pane_g1

0x56f0,	// (0x000738c5) main_image3_pane_g2_ParamLimits

0x56f0,	// (0x000738c5) main_image3_pane_g2

0x5718,	// (0x000738ed) main_image3_pane_g3_ParamLimits

0x5718,	// (0x000738ed) main_image3_pane_g3

0x5742,	// (0x00073917) main_image3_pane_g4_ParamLimits

0x5742,	// (0x00073917) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007da94) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007da94) main_image3_pane_g

0x576c,	// (0x00073941) main_image3_pane_t1_ParamLimits

0x576c,	// (0x00073941) main_image3_pane_t1

0x57c4,	// (0x00073999) main_image3_pane_t2_ParamLimits

0x57c4,	// (0x00073999) main_image3_pane_t2

0x5816,	// (0x000739eb) main_image3_pane_t3_ParamLimits

0x5816,	// (0x000739eb) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007da9d) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007da9d) main_image3_pane_t

0x958b,	// (0x00077760) grid_sctrl_middle_pane_cp01_ParamLimits

0x958b,	// (0x00077760) grid_sctrl_middle_pane_cp01

0x589e,	// (0x00073a73) cell_sctrl_middle_pane_cp01_ParamLimits

0x589e,	// (0x00073a73) cell_sctrl_middle_pane_cp01

0x58bb,	// (0x00073a90) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58bb,	// (0x00073a90) cell_sctrl_middle_pane_cp01_g1

0x9532,	// (0x00077707) main_call4_pane

0x58d0,	// (0x00073aa5) aid_size_button_call4_ParamLimits

0x58d0,	// (0x00073aa5) aid_size_button_call4

0x5903,	// (0x00073ad8) call4_windows_pane_ParamLimits

0x5903,	// (0x00073ad8) call4_windows_pane

0x5925,	// (0x00073afa) grid_call4_button_pane_ParamLimits

0x5925,	// (0x00073afa) grid_call4_button_pane

0xd580,	// (0x0007b755) call4_windows_conf_pane

0x5950,	// (0x00073b25) popup_call4_audio_first_window_ParamLimits

0x5950,	// (0x00073b25) popup_call4_audio_first_window

0x597c,	// (0x00073b51) popup_call4_audio_second_window_ParamLimits

0x597c,	// (0x00073b51) popup_call4_audio_second_window

0xd5bd,	// (0x0007b792) popup_call4_audio_wait_window_ParamLimits

0xd5bd,	// (0x0007b792) popup_call4_audio_wait_window

0x5992,	// (0x00073b67) cell_call4_button_pane_ParamLimits

0x5992,	// (0x00073b67) cell_call4_button_pane

0x59b9,	// (0x00073b8e) bg_button_pane_cp09_ParamLimits

0x59b9,	// (0x00073b8e) bg_button_pane_cp09

0x59c5,	// (0x00073b9a) cell_call4_button_pane_g1_ParamLimits

0x59c5,	// (0x00073b9a) cell_call4_button_pane_g1

0x59eb,	// (0x00073bc0) cell_call4_button_pane_t1_ParamLimits

0x59eb,	// (0x00073bc0) cell_call4_button_pane_t1

0xd605,	// (0x0007b7da) popup_call4_audio_conf_window_ParamLimits

0xd605,	// (0x0007b7da) popup_call4_audio_conf_window

0x4bd0,	// (0x00072da5) mup3_progress_pane_t1_ParamLimits

0x4bee,	// (0x00072dc3) mup3_progress_pane_t2_ParamLimits

0xcf11,	// (0x0007b0e6) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007d971) mup3_progress_pane_t_ParamLimits

0xcf2e,	// (0x0007b103) mup_progress_pane_cp03_ParamLimits

0x51ef,	// (0x000733c4) mup3_control_keys_pane_g4_copy1

0xa13e,	// (0x00078313) mp4_rocker2_pane_ParamLimits

0xa13e,	// (0x00078313) mp4_rocker2_pane

0xd61f,	// (0x0007b7f4) mp4_rocker2_pane_g1

0xd627,	// (0x0007b7fc) mp4_rocker2_pane_g2

0xa1b0,	// (0x00078385) mp4_rocker2_pane_g3

0xa1b8,	// (0x0007838d) mp4_rocker2_pane_g4

0xa1c0,	// (0x00078395) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007daa6) mp4_rocker2_pane_g

0x9532,	// (0x00077707) main_camera4_pane

0x9532,	// (0x00077707) main_video4_pane

0x545d,	// (0x00073632) main_video_tele_dialer_pane_t1_ParamLimits

0x545d,	// (0x00073632) main_video_tele_dialer_pane_t1

0x5476,	// (0x0007364b) main_video_tele_dialer_pane_t2_ParamLimits

0x5476,	// (0x0007364b) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007da60) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007da60) main_video_tele_dialer_pane_t

0x5a29,	// (0x00073bfe) cam4_autofocus_pane_ParamLimits

0x5a29,	// (0x00073bfe) cam4_autofocus_pane

0x5a3f,	// (0x00073c14) cam4_image_uncrop_pane_ParamLimits

0x5a3f,	// (0x00073c14) cam4_image_uncrop_pane

0x5a58,	// (0x00073c2d) cam4_indicators_pane_ParamLimits

0x5a58,	// (0x00073c2d) cam4_indicators_pane

0x5a87,	// (0x00073c5c) main_camera4_pane_g1_ParamLimits

0x5a87,	// (0x00073c5c) main_camera4_pane_g1

0x5a99,	// (0x00073c6e) main_camera4_pane_g2_ParamLimits

0x5a99,	// (0x00073c6e) main_camera4_pane_g2

0x5aac,	// (0x00073c81) main_camera4_pane_g3_ParamLimits

0x5aac,	// (0x00073c81) main_camera4_pane_g3

0x5abf,	// (0x00073c94) main_camera4_pane_g4_ParamLimits

0x5abf,	// (0x00073c94) main_camera4_pane_g4

0x5ad2,	// (0x00073ca7) main_camera4_pane_g5_ParamLimits

0x5ad2,	// (0x00073ca7) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007dab1) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007dab1) main_camera4_pane_g

0x5af6,	// (0x00073ccb) main_camera4_pane_t1_ParamLimits

0x5af6,	// (0x00073ccb) main_camera4_pane_t1

0xa1e6,	// (0x000783bb) bg_tb_trans_pane_cp06

0xa1fc,	// (0x000783d1) cam4_indicators_pane_g1

0xa20d,	// (0x000783e2) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007dacc) cam4_indicators_pane_g

0xa225,	// (0x000783fa) cam4_indicators_pane_t1

0x5b5a,	// (0x00073d2f) main_video4_pane_g1_ParamLimits

0x5b5a,	// (0x00073d2f) main_video4_pane_g1

0x5b69,	// (0x00073d3e) main_video4_pane_g2_ParamLimits

0x5b69,	// (0x00073d3e) main_video4_pane_g2

0x5b78,	// (0x00073d4d) main_video4_pane_g3_ParamLimits

0x5b78,	// (0x00073d4d) main_video4_pane_g3

0x5b87,	// (0x00073d5c) main_video4_pane_g4_ParamLimits

0x5b87,	// (0x00073d5c) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007dad3) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007dad3) main_video4_pane_g

0x5ba5,	// (0x00073d7a) vid4_indicators_pane_ParamLimits

0x5ba5,	// (0x00073d7a) vid4_indicators_pane

0x5bd3,	// (0x00073da8) video4_image_uncrop_cif_pane_ParamLimits

0x5bd3,	// (0x00073da8) video4_image_uncrop_cif_pane

0x5bed,	// (0x00073dc2) video4_image_uncrop_nhd_pane_ParamLimits

0x5bed,	// (0x00073dc2) video4_image_uncrop_nhd_pane

0x5a3f,	// (0x00073c14) video4_image_uncrop_vga_pane_ParamLimits

0x5a3f,	// (0x00073c14) video4_image_uncrop_vga_pane

0xa249,	// (0x0007841e) bg_tb_trans_pane_cp07

0xa261,	// (0x00078436) vid4_indicators_pane_g1

0xa277,	// (0x0007844c) vid4_indicators_pane_g2

0xa28b,	// (0x00078460) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007dade) vid4_indicators_pane_g

0xa2bc,	// (0x00078491) vid4_indicators_pane_t1

0x5c03,	// (0x00073dd8) cam4_autofocus_pane_g1

0x5c0b,	// (0x00073de0) cam4_autofocus_pane_g2

0x5c13,	// (0x00073de8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007dae9) cam4_autofocus_pane_g

0x5c1b,	// (0x00073df0) cam4_autofocus_pane_g3_copy1

0x54a3,	// (0x00073678) video_down_pane_cp_t1

0x54b1,	// (0x00073686) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007da65) video_down_pane_cp_t

0x958b,	// (0x00077760) popup_vitu2_window_ParamLimits

0x958b,	// (0x00077760) popup_vitu2_window

0x5c23,	// (0x00073df8) aid_size_cell2_itu2_ParamLimits

0x5c23,	// (0x00073df8) aid_size_cell2_itu2

0x5c49,	// (0x00073e1e) aid_size_cell_itu2_ParamLimits

0x5c49,	// (0x00073e1e) aid_size_cell_itu2

0x5ca9,	// (0x00073e7e) bg_popup_window_pane_cp09_ParamLimits

0x5ca9,	// (0x00073e7e) bg_popup_window_pane_cp09

0x5cb7,	// (0x00073e8c) field_vitu2_entry_pane_ParamLimits

0x5cb7,	// (0x00073e8c) field_vitu2_entry_pane

0x5cdf,	// (0x00073eb4) grid_vitu2_function_pane_ParamLimits

0x5cdf,	// (0x00073eb4) grid_vitu2_function_pane

0x5d30,	// (0x00073f05) grid_vitu2_itu_pane_ParamLimits

0x5d30,	// (0x00073f05) grid_vitu2_itu_pane

0x5dc4,	// (0x00073f99) cell_vitu2_itu_pane_ParamLimits

0x5dc4,	// (0x00073f99) cell_vitu2_itu_pane

0x5dea,	// (0x00073fbf) cell_vitu2_function_pane_ParamLimits

0x5dea,	// (0x00073fbf) cell_vitu2_function_pane

0xd62f,	// (0x0007b804) bg_popup_call_pane_cp08_ParamLimits

0xd62f,	// (0x0007b804) bg_popup_call_pane_cp08

0xd646,	// (0x0007b81b) field_vitu2_entry_pane_g1

0xd652,	// (0x0007b827) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007daf0) field_vitu2_entry_pane_g

0x5e2e,	// (0x00074003) field_vitu2_entry_pane_t1_ParamLimits

0x5e2e,	// (0x00074003) field_vitu2_entry_pane_t1

0xa2d3,	// (0x000784a8) field_vitu2_entry_pane_t2_ParamLimits

0xa2d3,	// (0x000784a8) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007daf7) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007daf7) field_vitu2_entry_pane_t

0x5e5d,	// (0x00074032) bg_button_pane_cp010_ParamLimits

0x5e5d,	// (0x00074032) bg_button_pane_cp010

0xa2f0,	// (0x000784c5) cell_vitu2_itu_pane_g1

0x5e79,	// (0x0007404e) cell_vitu2_itu_pane_t1_ParamLimits

0x5e79,	// (0x0007404e) cell_vitu2_itu_pane_t1

0xfb3d,	// (0x0006dd12) cell_vitu2_itu_pane_t2_ParamLimits

0xfb3d,	// (0x0006dd12) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007db01) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007db01) cell_vitu2_itu_pane_t

0xa249,	// (0x0007841e) bg_button_pane_cp011

0x5ed7,	// (0x000740ac) cell_vitu2_function_pane_g1

0x9532,	// (0x00077707) main_myfav_hc_pane

0x5866,	// (0x00073a3b) popup_image3_note_pane_ParamLimits

0x5866,	// (0x00073a3b) popup_image3_note_pane

0x5882,	// (0x00073a57) popup_image3_tool_bar_pane_ParamLimits

0x5882,	// (0x00073a57) popup_image3_tool_bar_pane

0xfbcb,	// (0x0006dda0) cell_vitu2_itu_pane_t3_ParamLimits

0xfbcb,	// (0x0006dda0) cell_vitu2_itu_pane_t3

0x9532,	// (0x00077707) bg_popup_trans_pane

0xd674,	// (0x0007b849) grid_image3_tool_bar_pane

0xd67e,	// (0x0007b853) bg_popup_trans_pane_g1

0xacd4,	// (0x00078ea9) bg_popup_trans_pane_g2

0xd686,	// (0x0007b85b) bg_popup_trans_pane_g3

0xd68e,	// (0x0007b863) bg_popup_trans_pane_g4

0xd696,	// (0x0007b86b) bg_popup_trans_pane_g5

0xd69e,	// (0x0007b873) bg_popup_trans_pane_g6

0xd6a6,	// (0x0007b87b) bg_popup_trans_pane_g7

0xd6ae,	// (0x0007b883) bg_popup_trans_pane_g8

0xacb4,	// (0x00078e89) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007db08) bg_popup_trans_pane_g

0xd6b6,	// (0x0007b88b) cell_image3_tool_bar_pane_ParamLimits

0xd6b6,	// (0x0007b88b) cell_image3_tool_bar_pane

0xcc66,	// (0x0007ae3b) cell_image3_tool_bar_pane_g1

0x9532,	// (0x00077707) bg_popup_trans_pane_cp1

0xd6cc,	// (0x0007b8a1) popup_image3_note_pane_t1

0xd6da,	// (0x0007b8af) popup_image3_note_pane_t2

0xd6e8,	// (0x0007b8bd) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007db1b) popup_image3_note_pane_t

0xd6f8,	// (0x0007b8cd) popup_image3_note_pane_t3_copy1

0x5eeb,	// (0x000740c0) bg_myfav_hc_instruction_pane_ParamLimits

0x5eeb,	// (0x000740c0) bg_myfav_hc_instruction_pane

0x5f03,	// (0x000740d8) cell_myfav_contact_pane_ParamLimits

0x5f03,	// (0x000740d8) cell_myfav_contact_pane

0x5f1f,	// (0x000740f4) cell_myfav_contact_pane_cp1_ParamLimits

0x5f1f,	// (0x000740f4) cell_myfav_contact_pane_cp1

0x5f37,	// (0x0007410c) cell_myfav_contact_pane_cp2_ParamLimits

0x5f37,	// (0x0007410c) cell_myfav_contact_pane_cp2

0x5f4f,	// (0x00074124) cell_myfav_contact_pane_cp3_ParamLimits

0x5f4f,	// (0x00074124) cell_myfav_contact_pane_cp3

0x5f66,	// (0x0007413b) cell_myfav_contact_pane_cp4_ParamLimits

0x5f66,	// (0x0007413b) cell_myfav_contact_pane_cp4

0x5f7e,	// (0x00074153) cell_myfav_contact_pane_cp5_ParamLimits

0x5f7e,	// (0x00074153) cell_myfav_contact_pane_cp5

0x5f92,	// (0x00074167) cell_myfav_contact_pane_cp6_ParamLimits

0x5f92,	// (0x00074167) cell_myfav_contact_pane_cp6

0x5fa8,	// (0x0007417d) cell_myfav_contact_pane_cp7_ParamLimits

0x5fa8,	// (0x0007417d) cell_myfav_contact_pane_cp7

0xd706,	// (0x0007b8db) listscroll_gen_pane_cp05

0x5fc0,	// (0x00074195) main_myfav_hc_pane_g1_ParamLimits

0x5fc0,	// (0x00074195) main_myfav_hc_pane_g1

0x5fda,	// (0x000741af) main_myfav_hc_pane_g2_ParamLimits

0x5fda,	// (0x000741af) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007db22) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007db22) main_myfav_hc_pane_g

0x600e,	// (0x000741e3) main_myfav_hc_pane_t1_ParamLimits

0x600e,	// (0x000741e3) main_myfav_hc_pane_t1

0xd70f,	// (0x0007b8e4) main_myfav_hc_pane_t2_ParamLimits

0xd70f,	// (0x0007b8e4) main_myfav_hc_pane_t2

0xd721,	// (0x0007b8f6) main_myfav_hc_pane_t3_ParamLimits

0xd721,	// (0x0007b8f6) main_myfav_hc_pane_t3

0x6025,	// (0x000741fa) main_myfav_hc_pane_t4_ParamLimits

0x6025,	// (0x000741fa) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007db29) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007db29) main_myfav_hc_pane_t

0xcc66,	// (0x0007ae3b) bg_myfav_hc_instruction_pane_g1

0xd733,	// (0x0007b908) cell_myfav_contact_pane_g1_ParamLimits

0xd733,	// (0x0007b908) cell_myfav_contact_pane_g1

0xd733,	// (0x0007b908) cell_myfav_contact_pane_g2_ParamLimits

0xd733,	// (0x0007b908) cell_myfav_contact_pane_g2

0xd73f,	// (0x0007b914) cell_myfav_contact_pane_g3_ParamLimits

0xd73f,	// (0x0007b914) cell_myfav_contact_pane_g3

0xcefb,	// (0x0007b0d0) cell_myfav_contact_pane_g4_ParamLimits

0xcefb,	// (0x0007b0d0) cell_myfav_contact_pane_g4

0xd74c,	// (0x0007b921) cell_myfav_contact_pane_g5_ParamLimits

0xd74c,	// (0x0007b921) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007db34) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007db34) cell_myfav_contact_pane_g

0x5ff4,	// (0x000741c9) main_myfav_hc_pane_g3_ParamLimits

0x5ff4,	// (0x000741c9) main_myfav_hc_pane_g3

0xfdb2,	// (0x0006df87) popup_adpt_find_window

0x604f,	// (0x00074224) afind_page_pane_ParamLimits

0x604f,	// (0x00074224) afind_page_pane

0x6064,	// (0x00074239) aid_size_cell_afind_ParamLimits

0x6064,	// (0x00074239) aid_size_cell_afind

0x6082,	// (0x00074257) bg_popup_sub_pane_cp09_ParamLimits

0x6082,	// (0x00074257) bg_popup_sub_pane_cp09

0x608f,	// (0x00074264) find_pane_cp01_ParamLimits

0x608f,	// (0x00074264) find_pane_cp01

0xd758,	// (0x0007b92d) grid_afind_control_pane_ParamLimits

0xd758,	// (0x0007b92d) grid_afind_control_pane

0x609c,	// (0x00074271) grid_afind_pane_ParamLimits

0x609c,	// (0x00074271) grid_afind_pane

0x60be,	// (0x00074293) cell_afind_pane_ParamLimits

0x60be,	// (0x00074293) cell_afind_pane

0xcc66,	// (0x0007ae3b) afind_page_pane_g1

0x6127,	// (0x000742fc) afind_page_pane_g2

0x6130,	// (0x00074305) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007db3f) afind_page_pane_g

0x6139,	// (0x0007430e) afind_page_pane_t1

0xd76c,	// (0x0007b941) cell_afind_grid_control_pane_ParamLimits

0xd76c,	// (0x0007b941) cell_afind_grid_control_pane

0xd574,	// (0x0007b749) bg_button_pane_cp69_ParamLimits

0xd574,	// (0x0007b749) bg_button_pane_cp69

0x6159,	// (0x0007432e) cell_afind_pane_g1_ParamLimits

0x6159,	// (0x0007432e) cell_afind_pane_g1

0x6166,	// (0x0007433b) cell_afind_pane_t1_ParamLimits

0x6166,	// (0x0007433b) cell_afind_pane_t1

0xaac9,	// (0x00078c9e) bg_button_pane_cp72

0xd77b,	// (0x0007b950) cell_afind_grid_control_pane_g1

0x309e,	// (0x00071273) aid_image_placing_area_ParamLimits

0x309e,	// (0x00071273) aid_image_placing_area

0xd236,	// (0x0007b40b) field_vitu_entry_pane_g1_ParamLimits

0xd236,	// (0x0007b40b) field_vitu_entry_pane_g1

0xd242,	// (0x0007b417) field_vitu_entry_pane_g2_ParamLimits

0xd242,	// (0x0007b417) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007d9f0) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007d9f0) field_vitu_entry_pane_g

0x52be,	// (0x00073493) cell_vitu_itu_pane_g1_ParamLimits

0x5300,	// (0x000734d5) cell_vitu_itu_pane_t3_ParamLimits

0x5300,	// (0x000734d5) cell_vitu_itu_pane_t3

0xd51a,	// (0x0007b6ef) mp4_progress_pane_t1_ParamLimits

0xd533,	// (0x0007b708) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007da85) mp4_progress_pane_t_ParamLimits

0xd54c,	// (0x0007b721) mup_progress_pane_cp04_ParamLimits

0x6039,	// (0x0007420e) main_myfav_hc_pane_t5_ParamLimits

0x6039,	// (0x0007420e) main_myfav_hc_pane_t5

0x9550,	// (0x00077725) aid_zoom_text_primary

0xfdb2,	// (0x0006df87) popup_adpt_find_window_ParamLimits

0x958b,	// (0x00077760) main_cam_set_pane

0x5a71,	// (0x00073c46) cam4_zoom_pane_ParamLimits

0x5a71,	// (0x00073c46) cam4_zoom_pane

0x6178,	// (0x0007434d) main_cam_set_pane_g1_ParamLimits

0x6178,	// (0x0007434d) main_cam_set_pane_g1

0x6186,	// (0x0007435b) main_cam_set_pane_g2_ParamLimits

0x6186,	// (0x0007435b) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007db46) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007db46) main_cam_set_pane_g

0x61a7,	// (0x0007437c) main_cam_set_pane_t1_ParamLimits

0x61a7,	// (0x0007437c) main_cam_set_pane_t1

0x61c2,	// (0x00074397) main_cset_listscroll_pane_ParamLimits

0x61c2,	// (0x00074397) main_cset_listscroll_pane

0x61e6,	// (0x000743bb) main_cset_slider_pane_ParamLimits

0x61e6,	// (0x000743bb) main_cset_slider_pane

0xd78c,	// (0x0007b961) main_cset_list_pane_ParamLimits

0xd78c,	// (0x0007b961) main_cset_list_pane

0xd79c,	// (0x0007b971) scroll_pane_cp028

0x6210,	// (0x000743e5) aid_area_touch_slider

0x622c,	// (0x00074401) cset_slider_pane

0x6256,	// (0x0007442b) main_cset_slider_pane_g1

0x626b,	// (0x00074440) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007db4b) main_cset_slider_pane_g

0xd7d5,	// (0x0007b9aa) main_cset_slider_pane_t1

0x632d,	// (0x00074502) main_cset_slider_pane_t2

0x6347,	// (0x0007451c) main_cset_slider_pane_t3

0x6361,	// (0x00074536) main_cset_slider_pane_t4

0x637b,	// (0x00074550) main_cset_slider_pane_t5

0x6399,	// (0x0007456e) main_cset_slider_pane_t6

0x63ae,	// (0x00074583) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007db70) main_cset_slider_pane_t

0x64ba,	// (0x0007468f) cset_list_set_pane_ParamLimits

0x64ba,	// (0x0007468f) cset_list_set_pane

0x64ce,	// (0x000746a3) aid_position_infowindow_above

0x64d6,	// (0x000746ab) aid_position_infowindow_below

0x64de,	// (0x000746b3) cset_list_set_pane_g1_ParamLimits

0x64de,	// (0x000746b3) cset_list_set_pane_g1

0x64ea,	// (0x000746bf) cset_list_set_pane_g3_ParamLimits

0x64ea,	// (0x000746bf) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007db8f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007db8f) cset_list_set_pane_g

0x64f9,	// (0x000746ce) cset_list_set_pane_t1_ParamLimits

0x64f9,	// (0x000746ce) cset_list_set_pane_t1

0x958b,	// (0x00077760) list_highlight_pane_cp021_ParamLimits

0x958b,	// (0x00077760) list_highlight_pane_cp021

0xb4eb,	// (0x000796c0) cset_slider_pane_g1

0xb4fd,	// (0x000796d2) cset_slider_pane_g2

0xb4f4,	// (0x000796c9) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007db94) cset_slider_pane_g

0xa302,	// (0x000784d7) aid_area_touch_cam4_zoom

0xa30a,	// (0x000784df) cam4_zoom_cont_pane

0xa312,	// (0x000784e7) cam4_zoom_pane_g1

0xa31a,	// (0x000784ef) cam4_zoom_pane_g2

0x650e,	// (0x000746e3) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007db9b) cam4_zoom_pane_g

0xa322,	// (0x000784f7) cam4_zoom_cont_pane_g1

0xa32b,	// (0x00078500) cam4_zoom_cont_pane_g2

0xa334,	// (0x00078509) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007dba2) cam4_zoom_cont_pane_g

0x58ee,	// (0x00073ac3) call4_image_pane_ParamLimits

0x58ee,	// (0x00073ac3) call4_image_pane

0xd580,	// (0x0007b755) call4_windows_conf_pane_ParamLimits

0xd59b,	// (0x0007b770) popup_call4_audio_in_window_ParamLimits

0xd59b,	// (0x0007b770) popup_call4_audio_in_window

0x9532,	// (0x00077707) bg_popup_call2_act_pane_cp02

0xd5fd,	// (0x0007b7d2) call4_list_conf_pane

0xcc66,	// (0x0007ae3b) call4_image_pane_g1

0xcc66,	// (0x0007ae3b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007d8b1) call4_image_pane_g

0xd875,	// (0x0007ba4a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd875,	// (0x0007ba4a) list_single_graphic_popup_conf4_pane

0x9532,	// (0x00077707) list_highlight_pane_cp022

0xd88a,	// (0x0007ba5f) list_single_graphic_popup_conf4_pane_g1

0xb1df,	// (0x000793b4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007dba9) list_single_graphic_popup_conf4_pane_g

0xd892,	// (0x0007ba67) list_single_graphic_popup_conf4_pane_t1

0x118a,	// (0x0006f35f) popup_vtel_slider_window_ParamLimits

0x118a,	// (0x0006f35f) popup_vtel_slider_window

0xd562,	// (0x0007b737) dialer2_ne_pane_t2_ParamLimits

0xd562,	// (0x0007b737) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007da8a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007da8a) dialer2_ne_pane_t

0xca45,	// (0x0007ac1a) bg_popup_sub_pane_cp010_ParamLimits

0xca45,	// (0x0007ac1a) bg_popup_sub_pane_cp010

0x6516,	// (0x000746eb) popup_vtel_slider_window_g1_ParamLimits

0x6516,	// (0x000746eb) popup_vtel_slider_window_g1

0x6529,	// (0x000746fe) popup_vtel_slider_window_g2_ParamLimits

0x6529,	// (0x000746fe) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007dbae) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007dbae) popup_vtel_slider_window_g

0x657f,	// (0x00074754) vtel_slider_pane_ParamLimits

0x657f,	// (0x00074754) vtel_slider_pane

0x65a1,	// (0x00074776) vtel_slider_pane_g1_ParamLimits

0x65a1,	// (0x00074776) vtel_slider_pane_g1

0x65b5,	// (0x0007478a) vtel_slider_pane_g2_ParamLimits

0x65b5,	// (0x0007478a) vtel_slider_pane_g2

0x65cd,	// (0x000747a2) vtel_slider_pane_g3_ParamLimits

0x65cd,	// (0x000747a2) vtel_slider_pane_g3

0x65a1,	// (0x00074776) vtel_slider_pane_g4_ParamLimits

0x65a1,	// (0x00074776) vtel_slider_pane_g4

0x65e3,	// (0x000747b8) vtel_slider_pane_g5_ParamLimits

0x65e3,	// (0x000747b8) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007dbb7) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007dbb7) vtel_slider_pane_g

0x958b,	// (0x00077760) main_gallery2_pane

0x5c75,	// (0x00073e4a) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c75,	// (0x00073e4a) aid_size_row_itut2_dropdow_list

0x5d07,	// (0x00073edc) grid_vitu2_function_top_pane_ParamLimits

0x5d07,	// (0x00073edc) grid_vitu2_function_top_pane

0x5d6b,	// (0x00073f40) popup_vitu2_dropdown_list_window_ParamLimits

0x5d6b,	// (0x00073f40) popup_vitu2_dropdown_list_window

0x5d98,	// (0x00073f6d) popup_vitu2_match_list_window

0x6607,	// (0x000747dc) cell_vitu2_function_top_pane_ParamLimits

0x6607,	// (0x000747dc) cell_vitu2_function_top_pane

0x6627,	// (0x000747fc) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6627,	// (0x000747fc) cell_vitu2_function_top_pane_cp01

0x6643,	// (0x00074818) cell_vitu2_function_top_wide_pane_ParamLimits

0x6643,	// (0x00074818) cell_vitu2_function_top_wide_pane

0xa249,	// (0x0007841e) bg_button_pane_cp012

0x665f,	// (0x00074834) cell_vitu2_function_top_pane_g1

0xa33d,	// (0x00078512) bg_button_pane_cp013_ParamLimits

0xa33d,	// (0x00078512) bg_button_pane_cp013

0x6673,	// (0x00074848) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6673,	// (0x00074848) cell_vitu2_function_top_wide_pane_g1

0xa249,	// (0x0007841e) bg_popup_sub_pane_cp20

0x668b,	// (0x00074860) list_vitu2_match_list_pane

0xd67e,	// (0x0007b853) bg_popup_sub_pane_cp20_g1

0xd686,	// (0x0007b85b) bg_popup_sub_pane_cp20_g2

0xacd4,	// (0x00078ea9) bg_popup_sub_pane_cp20_g3

0xd68e,	// (0x0007b863) bg_popup_sub_pane_cp20_g4

0xacb4,	// (0x00078e89) bg_popup_sub_pane_cp20_g5

0xd8a8,	// (0x0007ba7d) bg_popup_sub_pane_cp20_g6

0xd69e,	// (0x0007b873) bg_popup_sub_pane_cp20_g7

0xd6a6,	// (0x0007b87b) bg_popup_sub_pane_cp20_g8

0xd6ae,	// (0x0007b883) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007dbc2) bg_popup_sub_pane_cp20_g

0xa359,	// (0x0007852e) list_vitu2_match_list_item_pane_ParamLimits

0xa359,	// (0x0007852e) list_vitu2_match_list_item_pane

0xa36b,	// (0x00078540) list_vitu2_match_list_item_pane_t1

0x9c96,	// (0x00077e6b) bg_popup_sub_pane_cp21

0xa379,	// (0x0007854e) grid_vitu2_dropdown_list_pane

0x66f3,	// (0x000748c8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66f3,	// (0x000748c8) cell_vitu2_dropdown_list_char_pane

0x6716,	// (0x000748eb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6716,	// (0x000748eb) cell_vitu2_dropdown_list_ctrl_pane

0xd8b0,	// (0x0007ba85) cell_vitu2_dropdown_list_char_pane_g1

0xd8b9,	// (0x0007ba8e) cell_vitu2_dropdown_list_char_pane_g2

0xd8c2,	// (0x0007ba97) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007dbdf) cell_vitu2_dropdown_list_char_pane_g

0x6744,	// (0x00074919) cell_vitu2_dropdown_list_char_pane_t1

0x6752,	// (0x00074927) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6752,	// (0x00074927) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6762,	// (0x00074937) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6762,	// (0x00074937) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6773,	// (0x00074948) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6773,	// (0x00074948) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6783,	// (0x00074958) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6783,	// (0x00074958) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa1e6,	// (0x000783bb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa1e6,	// (0x000783bb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007dbe6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007dbe6) cell_vitu2_dropdown_list_ctrl_pane_g

0x679f,	// (0x00074974) aid_size_cell_gallery2_ParamLimits

0x679f,	// (0x00074974) aid_size_cell_gallery2

0x67bd,	// (0x00074992) grid_gallery2_pane_ParamLimits

0x67bd,	// (0x00074992) grid_gallery2_pane

0x67d7,	// (0x000749ac) scroll_pane_cp029_ParamLimits

0x67d7,	// (0x000749ac) scroll_pane_cp029

0x67e3,	// (0x000749b8) cell_gallery2_pane_ParamLimits

0x67e3,	// (0x000749b8) cell_gallery2_pane

0xd8cb,	// (0x0007baa0) cell_gallery2_pane_g2

0x6844,	// (0x00074a19) cell_gallery2_pane_g3

0xd8d3,	// (0x0007baa8) cell_gallery2_pane_g4

0xd8db,	// (0x0007bab0) cell_gallery2_pane_g5

0xaa77,	// (0x00078c4c) grid_highlight_pane_cp10

0x5d98,	// (0x00073f6d) popup_vitu2_match_list_window_ParamLimits

0x5daf,	// (0x00073f84) popup_vitu2_query_window_ParamLimits

0x5daf,	// (0x00073f84) popup_vitu2_query_window

0x9c96,	// (0x00077e6b) bg_vitu2_candi_button_pane

0xd8b0,	// (0x0007ba85) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8b9,	// (0x0007ba8e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8c2,	// (0x0007ba97) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x684c,	// (0x00074a21) bg_button_pane_cp015

0x6860,	// (0x00074a35) bg_button_pane_cp016

0x6873,	// (0x00074a48) bg_button_pane_cp017

0xc815,	// (0x0007a9ea) bg_popup_sub_pane_cp22

0xd8e3,	// (0x0007bab8) popup_vitu2_query_window_g1

0x68b8,	// (0x00074a8d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007dbf1) popup_vitu2_query_window_g

0x68d7,	// (0x00074aac) popup_vitu2_query_window_t1_ParamLimits

0x68d7,	// (0x00074aac) popup_vitu2_query_window_t1

0x690c,	// (0x00074ae1) popup_vitu2_query_window_t2_ParamLimits

0x690c,	// (0x00074ae1) popup_vitu2_query_window_t2

0x691e,	// (0x00074af3) popup_vitu2_query_window_t3_ParamLimits

0x691e,	// (0x00074af3) popup_vitu2_query_window_t3

0x6946,	// (0x00074b1b) popup_vitu2_query_window_t4_ParamLimits

0x6946,	// (0x00074b1b) popup_vitu2_query_window_t4

0x6967,	// (0x00074b3c) popup_vitu2_query_window_t5_ParamLimits

0x6967,	// (0x00074b3c) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007dbf8) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007dbf8) popup_vitu2_query_window_t

0xd784,	// (0x0007b959) main_cset_text_pane

0x6210,	// (0x000743e5) aid_area_touch_slider_ParamLimits

0x622c,	// (0x00074401) cset_slider_pane_ParamLimits

0x6256,	// (0x0007442b) main_cset_slider_pane_g1_ParamLimits

0x626b,	// (0x00074440) main_cset_slider_pane_g2_ParamLimits

0xd7a5,	// (0x0007b97a) main_cset_slider_pane_g3_ParamLimits

0xd7a5,	// (0x0007b97a) main_cset_slider_pane_g3

0x6280,	// (0x00074455) main_cset_slider_pane_g4_ParamLimits

0x6280,	// (0x00074455) main_cset_slider_pane_g4

0x628f,	// (0x00074464) main_cset_slider_pane_g5_ParamLimits

0x628f,	// (0x00074464) main_cset_slider_pane_g5

0x629d,	// (0x00074472) main_cset_slider_pane_g6_ParamLimits

0x629d,	// (0x00074472) main_cset_slider_pane_g6

0xf976,	// (0x0007db4b) main_cset_slider_pane_g_ParamLimits

0xd7d5,	// (0x0007b9aa) main_cset_slider_pane_t1_ParamLimits

0x632d,	// (0x00074502) main_cset_slider_pane_t2_ParamLimits

0x6347,	// (0x0007451c) main_cset_slider_pane_t3_ParamLimits

0x6361,	// (0x00074536) main_cset_slider_pane_t4_ParamLimits

0x637b,	// (0x00074550) main_cset_slider_pane_t5_ParamLimits

0x6399,	// (0x0007456e) main_cset_slider_pane_t6_ParamLimits

0x63ae,	// (0x00074583) main_cset_slider_pane_t7_ParamLimits

0x63dc,	// (0x000745b1) main_cset_slider_pane_t8_ParamLimits

0x63dc,	// (0x000745b1) main_cset_slider_pane_t8

0x6404,	// (0x000745d9) main_cset_slider_pane_t9_ParamLimits

0x6404,	// (0x000745d9) main_cset_slider_pane_t9

0x642c,	// (0x00074601) main_cset_slider_pane_t10_ParamLimits

0x642c,	// (0x00074601) main_cset_slider_pane_t10

0x6454,	// (0x00074629) main_cset_slider_pane_t11_ParamLimits

0x6454,	// (0x00074629) main_cset_slider_pane_t11

0x647e,	// (0x00074653) main_cset_slider_pane_t12_ParamLimits

0x647e,	// (0x00074653) main_cset_slider_pane_t12

0x649b,	// (0x00074670) main_cset_slider_pane_t13_ParamLimits

0x649b,	// (0x00074670) main_cset_slider_pane_t13

0xf99b,	// (0x0007db70) main_cset_slider_pane_t_ParamLimits

0x9532,	// (0x00077707) bg_popup_sub_pane_cp011

0xd8ef,	// (0x0007bac4) main_cset_text_pane_g1

0xd8f7,	// (0x0007bacc) main_cset_text_pane_t1

0xd905,	// (0x0007bada) main_cset_text_pane_t2

0xd913,	// (0x0007bae8) main_cset_text_pane_t3

0xd921,	// (0x0007baf6) main_cset_text_pane_t4

0xd92f,	// (0x0007bb04) main_cset_text_pane_t5

0xd93d,	// (0x0007bb12) main_cset_text_pane_t6

0xd94b,	// (0x0007bb20) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007dc07) main_cset_text_pane_t

0x9532,	// (0x00077707) main_cam4_burst_pane

0x9532,	// (0x00077707) main_cam5_pane

0x6147,	// (0x0007431c) bg_button_pane_cp019

0x6150,	// (0x00074325) bg_button_pane_cp020

0xd7b1,	// (0x0007b986) main_cset_slider_pane_g7_ParamLimits

0xd7b1,	// (0x0007b986) main_cset_slider_pane_g7

0xd7bd,	// (0x0007b992) main_cset_slider_pane_g8_ParamLimits

0xd7bd,	// (0x0007b992) main_cset_slider_pane_g8

0x62b1,	// (0x00074486) main_cset_slider_pane_g9_ParamLimits

0x62b1,	// (0x00074486) main_cset_slider_pane_g9

0x62bd,	// (0x00074492) main_cset_slider_pane_g10_ParamLimits

0x62bd,	// (0x00074492) main_cset_slider_pane_g10

0x62c9,	// (0x0007449e) main_cset_slider_pane_g11_ParamLimits

0x62c9,	// (0x0007449e) main_cset_slider_pane_g11

0x62d5,	// (0x000744aa) main_cset_slider_pane_g12_ParamLimits

0x62d5,	// (0x000744aa) main_cset_slider_pane_g12

0x62e1,	// (0x000744b6) main_cset_slider_pane_g13_ParamLimits

0x62e1,	// (0x000744b6) main_cset_slider_pane_g13

0x62ed,	// (0x000744c2) main_cset_slider_pane_g14_ParamLimits

0x62ed,	// (0x000744c2) main_cset_slider_pane_g14

0x62f9,	// (0x000744ce) main_cset_slider_pane_g15_ParamLimits

0x62f9,	// (0x000744ce) main_cset_slider_pane_g15

0xd803,	// (0x0007b9d8) main_cset_slider_pane_t14_ParamLimits

0xd803,	// (0x0007b9d8) main_cset_slider_pane_t14

0xd83c,	// (0x0007ba11) main_cset_slider_pane_t15_ParamLimits

0xd83c,	// (0x0007ba11) main_cset_slider_pane_t15

0x69de,	// (0x00074bb3) aid_cam4_burst_size_cell_ParamLimits

0x69de,	// (0x00074bb3) aid_cam4_burst_size_cell

0x69fe,	// (0x00074bd3) grid_cam4_burst_pane_ParamLimits

0x69fe,	// (0x00074bd3) grid_cam4_burst_pane

0x6a38,	// (0x00074c0d) linegrid_cam4_burst_pane_ParamLimits

0x6a38,	// (0x00074c0d) linegrid_cam4_burst_pane

0xd959,	// (0x0007bb2e) scroll_pane_cp30_ParamLimits

0xd959,	// (0x0007bb2e) scroll_pane_cp30

0x6a5a,	// (0x00074c2f) cell_cam4_burst_pane_ParamLimits

0x6a5a,	// (0x00074c2f) cell_cam4_burst_pane

0xd965,	// (0x0007bb3a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd965,	// (0x0007bb3a) linegrid_cam4_burst_pane_g1

0x6aaf,	// (0x00074c84) linegrid_cam4_burst_pane_g2_ParamLimits

0x6aaf,	// (0x00074c84) linegrid_cam4_burst_pane_g2

0xd972,	// (0x0007bb47) linegrid_cam4_burst_pane_g3_ParamLimits

0xd972,	// (0x0007bb47) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007dc16) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007dc16) linegrid_cam4_burst_pane_g

0x6ac0,	// (0x00074c95) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ac0,	// (0x00074c95) linegrid_cam4_burst_pane_g3_copy1

0xd97f,	// (0x0007bb54) linegrid_cam4_burst_pane_g4_ParamLimits

0xd97f,	// (0x0007bb54) linegrid_cam4_burst_pane_g4

0x6ade,	// (0x00074cb3) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ade,	// (0x00074cb3) linegrid_cam4_burst_pane_g5

0x6aef,	// (0x00074cc4) linegrid_cam4_burst_pane_g6_ParamLimits

0x6aef,	// (0x00074cc4) linegrid_cam4_burst_pane_g6

0xd98c,	// (0x0007bb61) linegrid_cam4_burst_pane_g7_ParamLimits

0xd98c,	// (0x0007bb61) linegrid_cam4_burst_pane_g7

0x6b06,	// (0x00074cdb) cell_cam4_burst_pane_g1

0xd9a5,	// (0x0007bb7a) main_cam5_pane_t1_ParamLimits

0xd9a5,	// (0x0007bb7a) main_cam5_pane_t1

0xd9b7,	// (0x0007bb8c) main_cam5_pane_t2_ParamLimits

0xd9b7,	// (0x0007bb8c) main_cam5_pane_t2

0xd9c9,	// (0x0007bb9e) main_cam5_pane_t3_ParamLimits

0xd9c9,	// (0x0007bb9e) main_cam5_pane_t3

0xd9db,	// (0x0007bbb0) main_cam5_pane_t4_ParamLimits

0xd9db,	// (0x0007bbb0) main_cam5_pane_t4

0xd9f3,	// (0x0007bbc8) main_cam5_pane_t5_ParamLimits

0xd9f3,	// (0x0007bbc8) main_cam5_pane_t5

0xda07,	// (0x0007bbdc) main_cam5_pane_t6_ParamLimits

0xda07,	// (0x0007bbdc) main_cam5_pane_t6

0xda1b,	// (0x0007bbf0) main_cam5_pane_t7_ParamLimits

0xda1b,	// (0x0007bbf0) main_cam5_pane_t7

0xda2d,	// (0x0007bc02) main_cam5_pane_t8_ParamLimits

0xda2d,	// (0x0007bc02) main_cam5_pane_t8

0xda4b,	// (0x0007bc20) main_cam5_pane_t9_ParamLimits

0xda4b,	// (0x0007bc20) main_cam5_pane_t9

0xda5d,	// (0x0007bc32) main_cam5_pane_t10_ParamLimits

0xda5d,	// (0x0007bc32) main_cam5_pane_t10

0xda6f,	// (0x0007bc44) main_cam5_pane_t11_ParamLimits

0xda6f,	// (0x0007bc44) main_cam5_pane_t11

0xda83,	// (0x0007bc58) main_cam5_pane_t12_ParamLimits

0xda83,	// (0x0007bc58) main_cam5_pane_t12

0xda9a,	// (0x0007bc6f) main_cam5_pane_t13_ParamLimits

0xda9a,	// (0x0007bc6f) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007dc22) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007dc22) main_cam5_pane_t

0xfe35,	// (0x0006e00a) popup_scut_keymap_window_ParamLimits

0xfe35,	// (0x0006e00a) popup_scut_keymap_window

0x6b19,	// (0x00074cee) aid_size_cell_brow_shortcut

0xaa77,	// (0x00078c4c) bg_popup_window_pane_cp010

0x6b25,	// (0x00074cfa) grid_scut_pane

0x6b31,	// (0x00074d06) cell_scut_pane_ParamLimits

0x6b31,	// (0x00074d06) cell_scut_pane

0x6b4a,	// (0x00074d1f) cell_scut_pane_g1

0xdabd,	// (0x0007bc92) cell_scut_pane_t1

0xdacc,	// (0x0007bca1) cell_scut_pane_t2

0x6b53,	// (0x00074d28) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007dc3d) cell_scut_pane_t

0x4787,	// (0x0007295c) main_mup3_pane_g8_ParamLimits

0x4787,	// (0x0007295c) main_mup3_pane_g8

0x5c91,	// (0x00073e66) area_vitu2_query_pane_ParamLimits

0x5c91,	// (0x00073e66) area_vitu2_query_pane

0x6886,	// (0x00074a5b) input_focus_pane_cp08

0xdadb,	// (0x0007bcb0) area_vitu2_query_pane_g1

0x6b61,	// (0x00074d36) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007dc44) area_vitu2_query_pane_g

0x6b72,	// (0x00074d47) area_vitu2_query_pane_t1_ParamLimits

0x6b72,	// (0x00074d47) area_vitu2_query_pane_t1

0x6b86,	// (0x00074d5b) area_vitu2_query_pane_t2_ParamLimits

0x6b86,	// (0x00074d5b) area_vitu2_query_pane_t2

0x6b9a,	// (0x00074d6f) area_vitu2_query_pane_t3_ParamLimits

0x6b9a,	// (0x00074d6f) area_vitu2_query_pane_t3

0xa381,	// (0x00078556) area_vitu2_query_pane_t4_ParamLimits

0xa381,	// (0x00078556) area_vitu2_query_pane_t4

0xa3a9,	// (0x0007857e) area_vitu2_query_pane_t5_ParamLimits

0xa3a9,	// (0x0007857e) area_vitu2_query_pane_t5

0xa3d1,	// (0x000785a6) area_vitu2_query_pane_t6_ParamLimits

0xa3d1,	// (0x000785a6) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007dc49) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007dc49) area_vitu2_query_pane_t

0x6bc2,	// (0x00074d97) bg_button_pane_cp018

0x6bd0,	// (0x00074da5) bg_button_pane_cp021

0x6bdc,	// (0x00074db1) bg_button_pane_cp022

0x6bed,	// (0x00074dc2) input_focus_pane_cp09

0x25e8,	// (0x000707bd) aid_size_touch_mv_arrow_left

0x2611,	// (0x000707e6) aid_size_touch_mv_arrow_right

0x6311,	// (0x000744e6) main_cset_slider_pane_g16_ParamLimits

0x6311,	// (0x000744e6) main_cset_slider_pane_g16

0x631f,	// (0x000744f4) main_cset_slider_pane_g17_ParamLimits

0x631f,	// (0x000744f4) main_cset_slider_pane_g17

0x6b06,	// (0x00074cdb) cell_cam4_burst_pane_g1_ParamLimits

0x9532,	// (0x00077707) compa_mode_pane

0x6539,	// (0x0007470e) popup_vtel_slider_window_g3_ParamLimits

0x6539,	// (0x0007470e) popup_vtel_slider_window_g3

0x6550,	// (0x00074725) popup_vtel_slider_window_g4_ParamLimits

0x6550,	// (0x00074725) popup_vtel_slider_window_g4

0x6567,	// (0x0007473c) popup_vtel_slider_window_t1_ParamLimits

0x6567,	// (0x0007473c) popup_vtel_slider_window_t1

0x9532,	// (0x00077707) main_cl_pane

0xc841,	// (0x0007aa16) popup_imed_adjust2_window_ParamLimits

0xc815,	// (0x0007a9ea) bg_tb_trans_pane_cp05_ParamLimits

0xd16b,	// (0x0007b340) popup_imed_adjust2_window_g1_ParamLimits

0xd17a,	// (0x0007b34f) popup_imed_adjust2_window_g2_ParamLimits

0xd17a,	// (0x0007b34f) popup_imed_adjust2_window_g2

0xd186,	// (0x0007b35b) popup_imed_adjust2_window_g3_ParamLimits

0xd186,	// (0x0007b35b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007d9b4) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007d9b4) popup_imed_adjust2_window_g

0xd192,	// (0x0007b367) popup_imed_adjust2_window_t1_ParamLimits

0xd1aa,	// (0x0007b37f) slider_imed_adjust_pane_ParamLimits

0xd1be,	// (0x0007b393) slider_imed_adjust_pane_g1_ParamLimits

0xd1ce,	// (0x0007b3a3) slider_imed_adjust_pane_g2_ParamLimits

0xd1de,	// (0x0007b3b3) slider_imed_adjust_pane_g3_ParamLimits

0xd1ef,	// (0x0007b3c4) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007d9bb) slider_imed_adjust_pane_g_ParamLimits

0x5a11,	// (0x00073be6) aid_touch_area_cam4_ParamLimits

0x5a11,	// (0x00073be6) aid_touch_area_cam4

0xa1c8,	// (0x0007839d) battery_pane_cp01

0x5ae3,	// (0x00073cb8) main_camera4_pane_g6_ParamLimits

0x5ae3,	// (0x00073cb8) main_camera4_pane_g6

0x5b0d,	// (0x00073ce2) main_camera4_pane_t2_ParamLimits

0x5b0d,	// (0x00073ce2) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007dabe) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007dabe) main_camera4_pane_t

0x5b42,	// (0x00073d17) aid_touch_area_vid4_ParamLimits

0x5b42,	// (0x00073d17) aid_touch_area_vid4

0x5b96,	// (0x00073d6b) main_video4_pane_g5_ParamLimits

0x5b96,	// (0x00073d6b) main_video4_pane_g5

0x5bbb,	// (0x00073d90) vid4_progress_pane_ParamLimits

0x5bbb,	// (0x00073d90) vid4_progress_pane

0xd7c9,	// (0x0007b99e) main_cset_slider_pane_g18_ParamLimits

0xd7c9,	// (0x0007b99e) main_cset_slider_pane_g18

0xd999,	// (0x0007bb6e) cell_cam4_burst_pane_g2_ParamLimits

0xd999,	// (0x0007bb6e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007dc1d) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007dc1d) cell_cam4_burst_pane_g

0xa8c1,	// (0x00078a96) bg_cl_pane_ParamLimits

0xa8c1,	// (0x00078a96) bg_cl_pane

0x6bfe,	// (0x00074dd3) cl_header_pane_ParamLimits

0x6bfe,	// (0x00074dd3) cl_header_pane

0x6c12,	// (0x00074de7) cl_listscroll_pane_ParamLimits

0x6c12,	// (0x00074de7) cl_listscroll_pane

0xdae7,	// (0x0007bcbc) bg_cl_pane_g1

0xdaef,	// (0x0007bcc4) bg_cl_pane_g2

0xdaf7,	// (0x0007bccc) bg_cl_pane_g3

0xdaff,	// (0x0007bcd4) bg_cl_pane_g4

0xdb07,	// (0x0007bcdc) bg_cl_pane_g5

0xdb0f,	// (0x0007bce4) bg_cl_pane_g6

0xdb17,	// (0x0007bcec) bg_cl_pane_g7

0xdb1f,	// (0x0007bcf4) bg_cl_pane_g8

0xdb27,	// (0x0007bcfc) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007dc58) bg_cl_pane_g

0x6c22,	// (0x00074df7) aid_height_cl_leading_ParamLimits

0x6c22,	// (0x00074df7) aid_height_cl_leading

0x6c2e,	// (0x00074e03) aid_height_cl_text_ParamLimits

0x6c2e,	// (0x00074e03) aid_height_cl_text

0x958b,	// (0x00077760) bg_cl_header_pane_ParamLimits

0x958b,	// (0x00077760) bg_cl_header_pane

0x6c4d,	// (0x00074e22) cl_header_pane_g1_ParamLimits

0x6c4d,	// (0x00074e22) cl_header_pane_g1

0x6c63,	// (0x00074e38) cl_header_pane_t1_ParamLimits

0x6c63,	// (0x00074e38) cl_header_pane_t1

0xdb2f,	// (0x0007bd04) cl_list_pane

0xd79c,	// (0x0007b971) hc_scroll_pane_cp01

0xacb4,	// (0x00078e89) bg_cl_header_pane_g1

0xd67e,	// (0x0007b853) bg_cl_header_pane_g2

0xacd4,	// (0x00078ea9) bg_cl_header_pane_g3

0xd68e,	// (0x0007b863) bg_cl_header_pane_g4

0xd686,	// (0x0007b85b) bg_cl_header_pane_g5

0xd8a8,	// (0x0007ba7d) bg_cl_header_pane_g6

0xd6a6,	// (0x0007b87b) bg_cl_header_pane_g7

0xd6ae,	// (0x0007b883) bg_cl_header_pane_g8

0xd69e,	// (0x0007b873) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007dc6b) bg_cl_header_pane_g

0x6c7c,	// (0x00074e51) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c7c,	// (0x00074e51) hc_cl_list_double_graphic_heading_pane

0x6c8f,	// (0x00074e64) hc_cl_list_single_graphic_pane_ParamLimits

0x6c8f,	// (0x00074e64) hc_cl_list_single_graphic_pane

0x6ca7,	// (0x00074e7c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6ca7,	// (0x00074e7c) hc_cl_list_single_graphic_pane_g1

0x6cb3,	// (0x00074e88) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6cb3,	// (0x00074e88) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007dc7e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007dc7e) hc_cl_list_single_graphic_pane_g

0x6cc7,	// (0x00074e9c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cc7,	// (0x00074e9c) hc_cl_list_single_graphic_pane_t1

0x6ca7,	// (0x00074e7c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6ca7,	// (0x00074e7c) hc_cl_list_double_graphic_heading_pane_g1

0x6cdc,	// (0x00074eb1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6cdc,	// (0x00074eb1) hc_cl_list_double_graphic_heading_pane_g2

0x6cf0,	// (0x00074ec5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cf0,	// (0x00074ec5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007dc83) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007dc83) hc_cl_list_double_graphic_heading_pane_g

0x6d04,	// (0x00074ed9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d04,	// (0x00074ed9) hc_cl_list_double_graphic_heading_pane_t1

0x6d19,	// (0x00074eee) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d19,	// (0x00074eee) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007dc8a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007dc8a) hc_cl_list_double_graphic_heading_pane_t

0x6d2e,	// (0x00074f03) vid4_progress_pane_g1

0x6d40,	// (0x00074f15) vid4_progress_pane_g2

0x9e6d,	// (0x00078042) vid4_progress_pane_g3

0xa425,	// (0x000785fa) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007dc8f) vid4_progress_pane_g

0xa443,	// (0x00078618) vid4_progress_pane_t1

0xa458,	// (0x0007862d) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007dc9a) vid4_progress_pane_t

0xa483,	// (0x00078658) wait_bar_pane_cp07

0xca53,	// (0x0007ac28) blid_firmament_pane_ParamLimits

0xca96,	// (0x0007ac6b) popup_blid_sat_info2_window_g1

0xcaba,	// (0x0007ac8f) popup_blid_sat_info2_window_t3

0xcac8,	// (0x0007ac9d) popup_blid_sat_info2_window_t4

0xcad6,	// (0x0007acab) popup_blid_sat_info2_window_t5

0xcae4,	// (0x0007acb9) popup_blid_sat_info2_window_t6

0xcaf4,	// (0x0007acc9) popup_blid_sat_info2_window_t7

0xcb02,	// (0x0007acd7) popup_blid_sat_info2_window_t8

0xcb10,	// (0x0007ace5) popup_blid_sat_info2_window_t9

0xcb1e,	// (0x0007acf3) popup_blid_sat_info2_window_t10

0xcbe6,	// (0x0007adbb) aid_firma_cardinal_ParamLimits

0xcbfa,	// (0x0007adcf) blid_firmament_pane_t1_ParamLimits

0xcc11,	// (0x0007ade6) blid_firmament_pane_t2_ParamLimits

0xcc28,	// (0x0007adfd) blid_firmament_pane_t3_ParamLimits

0xcc3f,	// (0x0007ae14) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007d8a8) blid_firmament_pane_t_ParamLimits

0xcc56,	// (0x0007ae2b) blid_sat_info_pane_ParamLimits

0x958b,	// (0x00077760) main_cam_set_pane_ParamLimits

0x5068,	// (0x0007323d) aid_size_cell_colour_35_ParamLimits

0x5088,	// (0x0007325d) aid_size_cell_colour_112_ParamLimits

0x50a8,	// (0x0007327d) aid_size_cell_effect_ParamLimits

0xc815,	// (0x0007a9ea) bg_tb_trans_pane_cp02_ParamLimits

0xaf0d,	// (0x000790e2) heading_imed_pane_ParamLimits

0x50c8,	// (0x0007329d) listscroll_imed_pane_ParamLimits

0xbe37,	// (0x0007a00c) popup_call2_audio_first_window_g5_ParamLimits

0xbe37,	// (0x0007a00c) popup_call2_audio_first_window_g5

0x5679,	// (0x0007384e) aid_size_touch_image3_arrow_left_ParamLimits

0x5679,	// (0x0007384e) aid_size_touch_image3_arrow_left

0x56a5,	// (0x0007387a) aid_size_touch_image3_arrow_right_ParamLimits

0x56a5,	// (0x0007387a) aid_size_touch_image3_arrow_right

0xa46e,	// (0x00078643) vid4_progress_pane_t3

0x53e7,	// (0x000735bc) main_hwr_training_symbol_option_pane_ParamLimits

0x53e7,	// (0x000735bc) main_hwr_training_symbol_option_pane

0xd45a,	// (0x0007b62f) popup_hwr_training_preview_window_ParamLimits

0xd45a,	// (0x0007b62f) popup_hwr_training_preview_window

0x5407,	// (0x000735dc) hwr_training_navi_pane_g5_ParamLimits

0x5407,	// (0x000735dc) hwr_training_navi_pane_g5

0xd66c,	// (0x0007b841) popup_char_count_window

0xa249,	// (0x0007841e) bg_popup_sub_pane_cp20_ParamLimits

0x668b,	// (0x00074860) list_vitu2_match_list_pane_ParamLimits

0x669a,	// (0x0007486f) vitu2_page_scroll_pane_ParamLimits

0x669a,	// (0x0007486f) vitu2_page_scroll_pane

0xdb38,	// (0x0007bd0d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb38,	// (0x0007bd0d) list_single_hwr_training_symbol_option_pane

0xdb4b,	// (0x0007bd20) list_single_hwr_training_symbol_option_pane_g1

0xdb53,	// (0x0007bd28) list_single_hwr_training_symbol_option_pane_t1

0xdb61,	// (0x0007bd36) bg_button_pane_cp023

0xdb6a,	// (0x0007bd3f) bg_button_pane_cp024

0x6d8a,	// (0x00074f5f) vitu2_page_scroll_pane_g1

0x6d92,	// (0x00074f67) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007dca1) vitu2_page_scroll_pane_g

0x6d9c,	// (0x00074f71) vitu2_page_scroll_pane_t1

0xdb9d,	// (0x0007bd72) popup_char_count_window_g1

0xdba6,	// (0x0007bd7b) popup_char_count_window_g2

0xdbaf,	// (0x0007bd84) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007dca6) popup_char_count_window_g

0xdbb8,	// (0x0007bd8d) popup_char_count_window_t1

0x9532,	// (0x00077707) main_vded2_pane

0xd157,	// (0x0007b32c) aid_size_cell_imed_line

0xd161,	// (0x0007b336) grid_imed_line_width_pane

0xa29e,	// (0x00078473) vid4_indicators_pane_g4

0xdbc6,	// (0x0007bd9b) cell_imed_line_width_pane_ParamLimits

0xdbc6,	// (0x0007bd9b) cell_imed_line_width_pane

0xdbdc,	// (0x0007bdb1) cell_imed_line_width_pane_g1

0xcf7e,	// (0x0007b153) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007dcad) cell_imed_line_width_pane_g

0x6dab,	// (0x00074f80) main_vded2_pane_g1_ParamLimits

0x6dab,	// (0x00074f80) main_vded2_pane_g1

0x6dc6,	// (0x00074f9b) main_vded2_pane_g2_ParamLimits

0x6dc6,	// (0x00074f9b) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007dcb2) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007dcb2) main_vded2_pane_g

0x6dd8,	// (0x00074fad) vded2_slider_pane_ParamLimits

0x6dd8,	// (0x00074fad) vded2_slider_pane

0x6de8,	// (0x00074fbd) aid_size_touch_vded2_end

0x6df2,	// (0x00074fc7) aid_size_touch_vded2_playhead

0xdbe5,	// (0x0007bdba) aid_size_touch_vded2_start

0xdbed,	// (0x0007bdc2) vded2_slider_bg_pane

0xdbf6,	// (0x0007bdcb) vded2_slider_pane_g1

0xdbff,	// (0x0007bdd4) vded2_slider_pane_g2

0x6dfc,	// (0x00074fd1) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007dcb7) vded2_slider_pane_g

0xdc07,	// (0x0007bddc) vded2_slider_bg_pane_g1

0xdc10,	// (0x0007bde5) vded2_slider_bg_pane_g2

0xdc19,	// (0x0007bdee) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007dcbe) vded2_slider_bg_pane_g

0x2cdd,	// (0x00070eb2) aid_postcard_touch_down_pane_ParamLimits

0x2cdd,	// (0x00070eb2) aid_postcard_touch_down_pane

0x2cf5,	// (0x00070eca) aid_postcard_touch_up_pane_ParamLimits

0x2cf5,	// (0x00070eca) aid_postcard_touch_up_pane

0x9532,	// (0x00077707) main_blid2_pane

0xc823,	// (0x0007a9f8) popup_blid2_search_window

0x9532,	// (0x00077707) blid2_gps_pane

0x9532,	// (0x00077707) blid2_navig_pane

0x9532,	// (0x00077707) blid2_search_pane

0x9532,	// (0x00077707) blid2_tripm_pane

0x6e07,	// (0x00074fdc) blid2_search_pane_g1_ParamLimits

0x6e07,	// (0x00074fdc) blid2_search_pane_g1

0x6e1a,	// (0x00074fef) blid2_search_pane_t1_ParamLimits

0x6e1a,	// (0x00074fef) blid2_search_pane_t1

0x6e2c,	// (0x00075001) aid_size_cell_blid2_gps_ParamLimits

0x6e2c,	// (0x00075001) aid_size_cell_blid2_gps

0x6e44,	// (0x00075019) blid2_gps_pane_g1_ParamLimits

0x6e44,	// (0x00075019) blid2_gps_pane_g1

0x6e58,	// (0x0007502d) grid_blid2_satellite_pane_ParamLimits

0x6e58,	// (0x0007502d) grid_blid2_satellite_pane

0x6e70,	// (0x00075045) blid2_navig_pane_g1_ParamLimits

0x6e70,	// (0x00075045) blid2_navig_pane_g1

0x6e7c,	// (0x00075051) blid2_navig_pane_t1_ParamLimits

0x6e7c,	// (0x00075051) blid2_navig_pane_t1

0x6e97,	// (0x0007506c) blid2_navig_pane_t2_ParamLimits

0x6e97,	// (0x0007506c) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007dcc5) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007dcc5) blid2_navig_pane_t

0x6eb2,	// (0x00075087) blid2_navig_ring_pane_ParamLimits

0x6eb2,	// (0x00075087) blid2_navig_ring_pane

0x6ecd,	// (0x000750a2) blid2_speed_pane_ParamLimits

0x6ecd,	// (0x000750a2) blid2_speed_pane

0x6ed9,	// (0x000750ae) blid2_tripm_pane_g1_ParamLimits

0x6ed9,	// (0x000750ae) blid2_tripm_pane_g1

0x6ef4,	// (0x000750c9) blid2_tripm_pane_g2_ParamLimits

0x6ef4,	// (0x000750c9) blid2_tripm_pane_g2

0x6f08,	// (0x000750dd) blid2_tripm_pane_g3_ParamLimits

0x6f08,	// (0x000750dd) blid2_tripm_pane_g3

0x6f1c,	// (0x000750f1) blid2_tripm_pane_g4_ParamLimits

0x6f1c,	// (0x000750f1) blid2_tripm_pane_g4

0x6f30,	// (0x00075105) blid2_tripm_pane_g5_ParamLimits

0x6f30,	// (0x00075105) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007dcca) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007dcca) blid2_tripm_pane_g

0x6f56,	// (0x0007512b) blid2_tripm_pane_t1_ParamLimits

0x6f56,	// (0x0007512b) blid2_tripm_pane_t1

0x6f6f,	// (0x00075144) blid2_tripm_pane_t2_ParamLimits

0x6f6f,	// (0x00075144) blid2_tripm_pane_t2

0x6f88,	// (0x0007515d) blid2_tripm_pane_t3_ParamLimits

0x6f88,	// (0x0007515d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007dcd7) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007dcd7) blid2_tripm_pane_t

0x6fcf,	// (0x000751a4) cell_blid2_satellite_pane_ParamLimits

0x6fcf,	// (0x000751a4) cell_blid2_satellite_pane

0x6fed,	// (0x000751c2) cell_blid2_satellite_pane_g1

0xdc22,	// (0x0007bdf7) cell_blid2_satellite_pane_t1

0xcc66,	// (0x0007ae3b) blid2_speed_pane_g1

0xdc30,	// (0x0007be05) blid2_speed_pane_t1

0xdc3e,	// (0x0007be13) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007dce0) blid2_speed_pane_t

0xcc66,	// (0x0007ae3b) blid2_navig_ring_pane_g1

0x6ff6,	// (0x000751cb) blid2_navig_ring_pane_g2

0x6ffe,	// (0x000751d3) blid2_navig_ring_pane_g3

0x7006,	// (0x000751db) blid2_navig_ring_pane_g4

0x700e,	// (0x000751e3) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007dce5) blid2_navig_ring_pane_g

0x9532,	// (0x00077707) bg_popup_window_pane_cp011

0xdc4c,	// (0x0007be21) popup_blid2_search_window_g1

0xdc54,	// (0x0007be29) popup_blid2_search_window_t1

0xdc62,	// (0x0007be37) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007dcf0) popup_blid2_search_window_t

0xabc3,	// (0x00078d98) main_browser_pane_g1

0xa8c1,	// (0x00078a96) main_browser_pane_ParamLimits

0xa249,	// (0x0007841e) bg_button_pane_cp011_ParamLimits

0x5ed7,	// (0x000740ac) cell_vitu2_function_pane_g1_ParamLimits

0xc815,	// (0x0007a9ea) bg_popup_sub_pane_cp22_ParamLimits

0x6886,	// (0x00074a5b) input_focus_pane_cp08_ParamLimits

0x689d,	// (0x00074a72) popup_vitu2_query_button_pane_ParamLimits

0x689d,	// (0x00074a72) popup_vitu2_query_button_pane

0x68ae,	// (0x00074a83) popup_vitu2_query_input_button_pane

0xd8e3,	// (0x0007bab8) popup_vitu2_query_window_g1_ParamLimits

0x68b8,	// (0x00074a8d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007dbf1) popup_vitu2_query_window_g_ParamLimits

0x9532,	// (0x00077707) bg_button_pane_cp026

0x7016,	// (0x000751eb) popup_vitu2_query_input_button_pane_g1

0x9532,	// (0x00077707) bg_button_pane_cp025

0xdc70,	// (0x0007be45) popup_vitu2_query_button_pane_t1

0x4401,	// (0x000725d6) main_mp3_pane_t6

0x440f,	// (0x000725e4) popup_slider_window_cp01

0xa1f4,	// (0x000783c9) cam4_battery_pane

0xa257,	// (0x0007842c) cam4_battery_pane_cp02

0xa41d,	// (0x000785f2) cam4_battery_pane_cp01

0xa41d,	// (0x000785f2) cam4_battery_pane_cp03

0xd558,	// (0x0007b72d) cam4_battery_pane_g1

0xcc66,	// (0x0007ae3b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007dcf5) cam4_battery_pane_g

0xcb2c,	// (0x0007ad01) popup_blid_sat_info2_window_t11

0x25e8,	// (0x000707bd) aid_size_touch_mv_arrow_left_ParamLimits

0x2611,	// (0x000707e6) aid_size_touch_mv_arrow_right_ParamLimits

0xb30d,	// (0x000794e2) navi_pane_g1_ParamLimits

0x2650,	// (0x00070825) navi_pane_g2_ParamLimits

0x267e,	// (0x00070853) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007d5ba) navi_pane_g_ParamLimits

0x26d8,	// (0x000708ad) navi_pane_mv_t1_ParamLimits

0x50d4,	// (0x000732a9) grid_imed_effect_pane_ParamLimits

0x1092,	// (0x0006f267) aid_placing_vt_slider_lsc

0xab0e,	// (0x00078ce3) aid_placing_vt_slider_prt

0x958b,	// (0x00077760) bg_tb_trans_pane_cp01_ParamLimits

0xcdb6,	// (0x0007af8b) popup_image_details_window_g1_ParamLimits

0xcdc9,	// (0x0007af9e) popup_image_details_window_g2_ParamLimits

0xcdde,	// (0x0007afb3) popup_image_details_window_g3_ParamLimits

0xcdde,	// (0x0007afb3) popup_image_details_window_g3

0xf718,	// (0x0007d8ed) popup_image_details_window_g_ParamLimits

0xcdf2,	// (0x0007afc7) popup_image_details_window_t1_ParamLimits

0xce04,	// (0x0007afd9) popup_image_details_window_t2_ParamLimits

0xce1d,	// (0x0007aff2) popup_image_details_window_t3_ParamLimits

0xce31,	// (0x0007b006) popup_image_details_window_t4_ParamLimits

0xce4c,	// (0x0007b021) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007d8f4) popup_image_details_window_t_ParamLimits

0x6c3a,	// (0x00074e0f) cl_header_name_pane_ParamLimits

0x6c3a,	// (0x00074e0f) cl_header_name_pane

0x701e,	// (0x000751f3) cl_header_name_pane_t1_ParamLimits

0x701e,	// (0x000751f3) cl_header_name_pane_t1

0x703f,	// (0x00075214) cl_header_name_pane_t2_ParamLimits

0x703f,	// (0x00075214) cl_header_name_pane_t2

0x7081,	// (0x00075256) cl_header_name_pane_t3_ParamLimits

0x7081,	// (0x00075256) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007dcfa) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007dcfa) cl_header_name_pane_t

0x26a9,	// (0x0007087e) navi_pane_mv_g2_ParamLimits

0xd646,	// (0x0007b81b) field_vitu2_entry_pane_g1_ParamLimits

0xd652,	// (0x0007b827) field_vitu2_entry_pane_g2_ParamLimits

0xd65e,	// (0x0007b833) field_vitu2_entry_pane_g3_ParamLimits

0xd65e,	// (0x0007b833) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007daf0) field_vitu2_entry_pane_g_ParamLimits

0xa2f0,	// (0x000784c5) cell_vitu2_itu_pane_g1_ParamLimits

0x5e6b,	// (0x00074040) cell_vitu2_itu_pane_g2_ParamLimits

0x5e6b,	// (0x00074040) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007dafc) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007dafc) cell_vitu2_itu_pane_g

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp05_ParamLimits

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp05

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp03

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp04

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp10_ParamLimits

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp10

0x6bdc,	// (0x00074db1) bg_vkb2_func_pane_cp08

0x6bc2,	// (0x00074d97) bg_vkb2_func_pane_cp06

0x6bd0,	// (0x00074da5) bg_vkb2_func_pane_cp07

0xdb73,	// (0x0007bd48) bg_vkb2_func_pane_cp11_ParamLimits

0xdb73,	// (0x0007bd48) bg_vkb2_func_pane_cp11

0xdb88,	// (0x0007bd5d) bg_vkb2_func_pane_cp12_ParamLimits

0xdb88,	// (0x0007bd5d) bg_vkb2_func_pane_cp12

0x9532,	// (0x00077707) bg_vkb2_func_pane_cp09

0xd67e,	// (0x0007b853) bg_vkb2_func_pane_g1

0xacd4,	// (0x00078ea9) bg_vkb2_func_pane_g2

0xd686,	// (0x0007b85b) bg_vkb2_func_pane_g3

0xd68e,	// (0x0007b863) bg_vkb2_func_pane_g4

0xd8a8,	// (0x0007ba7d) bg_vkb2_func_pane_g5

0xd6a6,	// (0x0007b87b) bg_vkb2_func_pane_g6

0xd6ae,	// (0x0007b883) bg_vkb2_func_pane_g7

0xd69e,	// (0x0007b873) bg_vkb2_func_pane_g8

0xacb4,	// (0x00078e89) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007dd01) bg_vkb2_func_pane_g

0x6f44,	// (0x00075119) blid2_tripm_pane_g6_ParamLimits

0x6f44,	// (0x00075119) blid2_tripm_pane_g6

0xd512,	// (0x0007b6e7) mp4_progress_pane_g1

0x6fbb,	// (0x00075190) blid2_tripm_values_pane_ParamLimits

0x6fbb,	// (0x00075190) blid2_tripm_values_pane

0x70b2,	// (0x00075287) blid2_tripm_values_pane_t1

0x70c0,	// (0x00075295) blid2_tripm_values_pane_t2

0x70ce,	// (0x000752a3) blid2_tripm_values_pane_t3

0x70dc,	// (0x000752b1) blid2_tripm_values_pane_t4

0x70ea,	// (0x000752bf) blid2_tripm_values_pane_t5

0x70f8,	// (0x000752cd) blid2_tripm_values_pane_t6

0x7106,	// (0x000752db) blid2_tripm_values_pane_t7

0x7114,	// (0x000752e9) blid2_tripm_values_pane_t8

0x7122,	// (0x000752f7) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007dd14) blid2_tripm_values_pane_t

0x10cf,	// (0x0006f2a4) call_video_pane_t1_ParamLimits

0x10e9,	// (0x0006f2be) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007d443) call_video_pane_t_ParamLimits

0x2c2a,	// (0x00070dff) msg_header_pane_g1_ParamLimits

0xb530,	// (0x00079705) msg_header_pane_g2_ParamLimits

0xb530,	// (0x00079705) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007d65d) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007d65d) msg_header_pane_g

0xa8c1,	// (0x00078a96) main_clock2_pane_ParamLimits

0x4dbb,	// (0x00072f90) grid_clock2_toolbar_pane_ParamLimits

0x4dbb,	// (0x00072f90) grid_clock2_toolbar_pane

0x4dbb,	// (0x00072f90) listscroll_clock2_pane_ParamLimits

0x4dbb,	// (0x00072f90) listscroll_clock2_pane

0x4eb2,	// (0x00073087) main_clock2_pane_t3_ParamLimits

0x4eb2,	// (0x00073087) main_clock2_pane_t3

0x4ed6,	// (0x000730ab) main_clock2_pane_t4_ParamLimits

0x4ed6,	// (0x000730ab) main_clock2_pane_t4

0xdc7e,	// (0x0007be53) cell_clock2_toolbar_pane

0xdc86,	// (0x0007be5b) cell_clock2_toolbar_pane_cp01

0xdc86,	// (0x0007be5b) cell_clock2_toolbar_pane_cp02

0xdc8e,	// (0x0007be63) cell_clock2_toolbar_pane_cp03

0xdc96,	// (0x0007be6b) list_clock2_pane

0xb273,	// (0x00079448) scroll_pane_cp10

0xdc9e,	// (0x0007be73) list_single_clock2_pane_ParamLimits

0xdc9e,	// (0x0007be73) list_single_clock2_pane

0xaa77,	// (0x00078c4c) list_highlight_pane_cp08

0xdcab,	// (0x0007be80) list_single_clock2_pane_t1

0xdcb9,	// (0x0007be8e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007dd27) list_single_clock2_pane_t

0x9532,	// (0x00077707) bg_button_pane_cp10

0xdcc7,	// (0x0007be9c) cell_clock2_toolbar_pane_g1

0x2c69,	// (0x00070e3e) aid_main_viewer_pane_g1_ParamLimits

0x2c69,	// (0x00070e3e) aid_main_viewer_pane_g1

0x2c77,	// (0x00070e4c) aid_main_viewer_pane_g2_ParamLimits

0x2c77,	// (0x00070e4c) aid_main_viewer_pane_g2

0x2c85,	// (0x00070e5a) aid_main_viewer_pane_g3_ParamLimits

0x2c85,	// (0x00070e5a) aid_main_viewer_pane_g3

0x2c94,	// (0x00070e69) aid_main_viewer_pane_g4_ParamLimits

0x2c94,	// (0x00070e69) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007d66e) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007d66e) aid_main_viewer_pane_g

0x35e7,	// (0x000717bc) main_calc_pane_ParamLimits

0x35fb,	// (0x000717d0) main_dialer2_pane_ParamLimits

0x9532,	// (0x00077707) main_cam6_pane

0x9532,	// (0x00077707) main_vid6_pane

0x4dc7,	// (0x00072f9c) listscroll_gen_pane_cp06_ParamLimits

0x4dc7,	// (0x00072f9c) listscroll_gen_pane_cp06

0x4ef9,	// (0x000730ce) main_clock2_pane_t5_ParamLimits

0x4ef9,	// (0x000730ce) main_clock2_pane_t5

0x4f59,	// (0x0007312e) aid_call2_pane_cp10_ParamLimits

0x4f6b,	// (0x00073140) aid_call_pane_cp10_ParamLimits

0xb2e2,	// (0x000794b7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2e2,	// (0x000794b7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f7d,	// (0x00073152) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f7d,	// (0x00073152) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2e2,	// (0x000794b7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007d9a9) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f93,	// (0x00073168) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5626,	// (0x000737fb) cell_dialer2_keypad_pane_g2_ParamLimits

0x5626,	// (0x000737fb) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007da8f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007da8f) cell_dialer2_keypad_pane_g

0x5642,	// (0x00073817) cell_dialer2_keypad_pane_t1

0x6202,	// (0x000743d7) main_cset_text2_pane_ParamLimits

0x6202,	// (0x000743d7) main_cset_text2_pane

0xdadb,	// (0x0007bcb0) area_vitu2_query_pane_g1_ParamLimits

0x6b61,	// (0x00074d36) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007dc44) area_vitu2_query_pane_g_ParamLimits

0xa3f9,	// (0x000785ce) area_vitu2_query_pane_t7_ParamLimits

0xa3f9,	// (0x000785ce) area_vitu2_query_pane_t7

0x6bc2,	// (0x00074d97) bg_button_pane_cp018_ParamLimits

0x6bd0,	// (0x00074da5) bg_button_pane_cp021_ParamLimits

0x6bdc,	// (0x00074db1) bg_button_pane_cp022_ParamLimits

0x6bdc,	// (0x00074db1) bg_vkb2_func_pane_cp08_ParamLimits

0x6bc2,	// (0x00074d97) bg_vkb2_func_pane_cp06_ParamLimits

0x6bd0,	// (0x00074da5) bg_vkb2_func_pane_cp07_ParamLimits

0x6bed,	// (0x00074dc2) input_focus_pane_cp09_ParamLimits

0xa4b9,	// (0x0007868e) cam6_autofocus_pane_ParamLimits

0xa4b9,	// (0x0007868e) cam6_autofocus_pane

0x7130,	// (0x00075305) cam6_image_uncrop_pane_ParamLimits

0x7130,	// (0x00075305) cam6_image_uncrop_pane

0x713f,	// (0x00075314) cam6_indi_pane_ParamLimits

0x713f,	// (0x00075314) cam6_indi_pane

0x7155,	// (0x0007532a) cam6_mode_pane_ParamLimits

0x7155,	// (0x0007532a) cam6_mode_pane

0x7167,	// (0x0007533c) cam6_timer_pane_ParamLimits

0x7167,	// (0x0007533c) cam6_timer_pane

0x7173,	// (0x00075348) cam6_zoom_pane_ParamLimits

0x7173,	// (0x00075348) cam6_zoom_pane

0x7181,	// (0x00075356) cam6_mode_pane_g1_ParamLimits

0x7181,	// (0x00075356) cam6_mode_pane_g1

0x7191,	// (0x00075366) cam6_mode_pane_g2_ParamLimits

0x7191,	// (0x00075366) cam6_mode_pane_g2

0x71a1,	// (0x00075376) cam6_mode_pane_g3_ParamLimits

0x71a1,	// (0x00075376) cam6_mode_pane_g3

0x71b1,	// (0x00075386) cam6_mode_pane_g4_ParamLimits

0x71b1,	// (0x00075386) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007dd2c) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007dd2c) cam6_mode_pane_g

0xdccf,	// (0x0007bea4) bg_tb_trans_pane_cp08_ParamLimits

0xdccf,	// (0x0007bea4) bg_tb_trans_pane_cp08

0xdcdd,	// (0x0007beb2) cam6_battery_pane_ParamLimits

0xdcdd,	// (0x0007beb2) cam6_battery_pane

0xdcf3,	// (0x0007bec8) cam6_indi_pane_g1_ParamLimits

0xdcf3,	// (0x0007bec8) cam6_indi_pane_g1

0xdd05,	// (0x0007beda) cam6_indi_pane_g2_ParamLimits

0xdd05,	// (0x0007beda) cam6_indi_pane_g2

0xdd17,	// (0x0007beec) cam6_indi_pane_g3_ParamLimits

0xdd17,	// (0x0007beec) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007dd35) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007dd35) cam6_indi_pane_g

0xdd29,	// (0x0007befe) cam6_indi_pane_t1_ParamLimits

0xdd29,	// (0x0007befe) cam6_indi_pane_t1

0x5c0b,	// (0x00073de0) cam6_autofocus_pane_g1

0x5c03,	// (0x00073dd8) cam6_autofocus_pane_g2

0x5c1b,	// (0x00073df0) cam6_autofocus_pane_g3

0x5c13,	// (0x00073de8) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007dd3c) cam6_autofocus_pane_g

0xdd4f,	// (0x0007bf24) cam6_timer_pane_g1

0xdd57,	// (0x0007bf2c) cam6_timer_pane_t1

0xdd65,	// (0x0007bf3a) cam6_zoom_cont_pane

0xdd6d,	// (0x0007bf42) cam6_zoom_pane_g1

0xdd75,	// (0x0007bf4a) cam6_zoom_pane_g2

0x71c1,	// (0x00075396) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007dd45) cam6_zoom_pane_g

0xcc66,	// (0x0007ae3b) cam6_battery_pane_g1

0xcc66,	// (0x0007ae3b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007d8b1) cam6_battery_pane_g

0xdd7d,	// (0x0007bf52) cam6_zoom_cont_pane_g1

0xdd86,	// (0x0007bf5b) cam6_zoom_cont_pane_g2

0xdd8f,	// (0x0007bf64) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007dd4c) cam6_zoom_cont_pane_g

0x71de,	// (0x000753b3) cam6_mode_pane_cp_ParamLimits

0x71de,	// (0x000753b3) cam6_mode_pane_cp

0x71f0,	// (0x000753c5) cam6_zoom_pane_cp_ParamLimits

0x71f0,	// (0x000753c5) cam6_zoom_pane_cp

0x71fe,	// (0x000753d3) vid6_image_uncrop_cif_pane_ParamLimits

0x71fe,	// (0x000753d3) vid6_image_uncrop_cif_pane

0x720e,	// (0x000753e3) vid6_image_uncrop_nhd_pane_ParamLimits

0x720e,	// (0x000753e3) vid6_image_uncrop_nhd_pane

0x721d,	// (0x000753f2) vid6_image_uncrop_vga_pane_ParamLimits

0x721d,	// (0x000753f2) vid6_image_uncrop_vga_pane

0x722c,	// (0x00075401) vid6_image_uncrop_wvga_pane_ParamLimits

0x722c,	// (0x00075401) vid6_image_uncrop_wvga_pane

0x723b,	// (0x00075410) vid6_indi_pane_ParamLimits

0x723b,	// (0x00075410) vid6_indi_pane

0xdccf,	// (0x0007bea4) bg_tb_trans_pane_cp09_ParamLimits

0xdccf,	// (0x0007bea4) bg_tb_trans_pane_cp09

0xdda7,	// (0x0007bf7c) cam6_battery_pane_cp_ParamLimits

0xdda7,	// (0x0007bf7c) cam6_battery_pane_cp

0xddb3,	// (0x0007bf88) vid6_indi_pane_g1_ParamLimits

0xddb3,	// (0x0007bf88) vid6_indi_pane_g1

0xddc5,	// (0x0007bf9a) vid6_indi_pane_g2_ParamLimits

0xddc5,	// (0x0007bf9a) vid6_indi_pane_g2

0xddd7,	// (0x0007bfac) vid6_indi_pane_g3_ParamLimits

0xddd7,	// (0x0007bfac) vid6_indi_pane_g3

0xddee,	// (0x0007bfc3) vid6_indi_pane_g4_ParamLimits

0xddee,	// (0x0007bfc3) vid6_indi_pane_g4

0xde05,	// (0x0007bfda) vid6_indi_pane_g5_ParamLimits

0xde05,	// (0x0007bfda) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007dd53) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007dd53) vid6_indi_pane_g

0xde1f,	// (0x0007bff4) vid6_indi_pane_t1_ParamLimits

0xde1f,	// (0x0007bff4) vid6_indi_pane_t1

0xde35,	// (0x0007c00a) vid6_indi_pane_t2_ParamLimits

0xde35,	// (0x0007c00a) vid6_indi_pane_t2

0xde5d,	// (0x0007c032) vid6_indi_pane_t3_ParamLimits

0xde5d,	// (0x0007c032) vid6_indi_pane_t3

0xde85,	// (0x0007c05a) vid6_indi_pane_t4_ParamLimits

0xde85,	// (0x0007c05a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007dd5e) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007dd5e) vid6_indi_pane_t

0xdea9,	// (0x0007c07e) wait_bar_pane_cp08

0x7253,	// (0x00075428) main_cset_text2_pane_t1_ParamLimits

0x7253,	// (0x00075428) main_cset_text2_pane_t1

0x71c9,	// (0x0007539e) listscroll_gen_pane_cp06_t1_ParamLimits

0x71c9,	// (0x0007539e) listscroll_gen_pane_cp06_t1

0x9532,	// (0x00077707) main_cam6_set_pane

0xa1e6,	// (0x000783bb) bg_tb_trans_pane_cp06_ParamLimits

0xa1fc,	// (0x000783d1) cam4_indicators_pane_g1_ParamLimits

0xa20d,	// (0x000783e2) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007dacc) cam4_indicators_pane_g_ParamLimits

0xa225,	// (0x000783fa) cam4_indicators_pane_t1_ParamLimits

0xa249,	// (0x0007841e) bg_tb_trans_pane_cp07_ParamLimits

0xa261,	// (0x00078436) vid4_indicators_pane_g1_ParamLimits

0xa277,	// (0x0007844c) vid4_indicators_pane_g2_ParamLimits

0xa28b,	// (0x00078460) vid4_indicators_pane_g3_ParamLimits

0xa29e,	// (0x00078473) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007dade) vid4_indicators_pane_g_ParamLimits

0xa2bc,	// (0x00078491) vid4_indicators_pane_t1_ParamLimits

0x6d2e,	// (0x00074f03) vid4_progress_pane_g1_ParamLimits

0x6d40,	// (0x00074f15) vid4_progress_pane_g2_ParamLimits

0x9e6d,	// (0x00078042) vid4_progress_pane_g3_ParamLimits

0xa425,	// (0x000785fa) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007dc8f) vid4_progress_pane_g_ParamLimits

0xa443,	// (0x00078618) vid4_progress_pane_t1_ParamLimits

0xa458,	// (0x0007862d) vid4_progress_pane_t2_ParamLimits

0xa46e,	// (0x00078643) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007dc9a) vid4_progress_pane_t_ParamLimits

0xa483,	// (0x00078658) wait_bar_pane_cp07_ParamLimits

0x7271,	// (0x00075446) main_cam6_set_pane_g2_ParamLimits

0x7271,	// (0x00075446) main_cam6_set_pane_g2

0x7297,	// (0x0007546c) main_cset6_listscroll_pane_ParamLimits

0x7297,	// (0x0007546c) main_cset6_listscroll_pane

0x72b5,	// (0x0007548a) main_cset6_slider_pane_ParamLimits

0x72b5,	// (0x0007548a) main_cset6_slider_pane

0x72cb,	// (0x000754a0) main_cset6_text2_pane_ParamLimits

0x72cb,	// (0x000754a0) main_cset6_text2_pane

0xdeb8,	// (0x0007c08d) main_cset6_text_pane

0xdec0,	// (0x0007c095) main_cset_list_pane_copy1_ParamLimits

0xdec0,	// (0x0007c095) main_cset_list_pane_copy1

0xded0,	// (0x0007c0a5) scroll_pane_cp028_copy1

0x2194,	// (0x00070369) cset_list_set_pane_copy1

0x72d9,	// (0x000754ae) aid_position_infowindow_above_copy1

0x72e1,	// (0x000754b6) aid_position_infowindow_below_copy1

0x72e9,	// (0x000754be) cset_list_set_pane_g1_copy1

0x72f1,	// (0x000754c6) cset_list_set_pane_g3_copy1_ParamLimits

0x72f1,	// (0x000754c6) cset_list_set_pane_g3_copy1

0x7300,	// (0x000754d5) cset_list_set_pane_t1_copy1_ParamLimits

0x7300,	// (0x000754d5) cset_list_set_pane_t1_copy1

0x958b,	// (0x00077760) list_highlight_pane_cp021_copy1_ParamLimits

0x958b,	// (0x00077760) list_highlight_pane_cp021_copy1

0xded9,	// (0x0007c0ae) cset6_slider_pane_ParamLimits

0xded9,	// (0x0007c0ae) cset6_slider_pane

0xdf05,	// (0x0007c0da) main_cset6_slider_pane_g1_ParamLimits

0xdf05,	// (0x0007c0da) main_cset6_slider_pane_g1

0x7315,	// (0x000754ea) main_cset6_slider_pane_g2_ParamLimits

0x7315,	// (0x000754ea) main_cset6_slider_pane_g2

0xdf2d,	// (0x0007c102) main_cset6_slider_pane_g3_ParamLimits

0xdf2d,	// (0x0007c102) main_cset6_slider_pane_g3

0x733d,	// (0x00075512) main_cset6_slider_pane_g4_ParamLimits

0x733d,	// (0x00075512) main_cset6_slider_pane_g4

0x7349,	// (0x0007551e) main_cset6_slider_pane_g5_ParamLimits

0x7349,	// (0x0007551e) main_cset6_slider_pane_g5

0xd7b1,	// (0x0007b986) main_cset6_slider_pane_g7_ParamLimits

0xd7b1,	// (0x0007b986) main_cset6_slider_pane_g7

0xd7bd,	// (0x0007b992) main_cset6_slider_pane_g8_ParamLimits

0xd7bd,	// (0x0007b992) main_cset6_slider_pane_g8

0x62b1,	// (0x00074486) main_cset6_slider_pane_g9_ParamLimits

0x62b1,	// (0x00074486) main_cset6_slider_pane_g9

0x62bd,	// (0x00074492) main_cset6_slider_pane_g10_ParamLimits

0x62bd,	// (0x00074492) main_cset6_slider_pane_g10

0x62c9,	// (0x0007449e) main_cset6_slider_pane_g11_ParamLimits

0x62c9,	// (0x0007449e) main_cset6_slider_pane_g11

0x62d5,	// (0x000744aa) main_cset6_slider_pane_g12_ParamLimits

0x62d5,	// (0x000744aa) main_cset6_slider_pane_g12

0x62e1,	// (0x000744b6) main_cset6_slider_pane_g13_ParamLimits

0x62e1,	// (0x000744b6) main_cset6_slider_pane_g13

0x62ed,	// (0x000744c2) main_cset6_slider_pane_g14_ParamLimits

0x62ed,	// (0x000744c2) main_cset6_slider_pane_g14

0x7357,	// (0x0007552c) main_cset6_slider_pane_g15_ParamLimits

0x7357,	// (0x0007552c) main_cset6_slider_pane_g15

0x6311,	// (0x000744e6) main_cset6_slider_pane_g16_ParamLimits

0x6311,	// (0x000744e6) main_cset6_slider_pane_g16

0x631f,	// (0x000744f4) main_cset6_slider_pane_g17_ParamLimits

0x631f,	// (0x000744f4) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007dd67) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007dd67) main_cset6_slider_pane_g

0xdf39,	// (0x0007c10e) main_cset6_slider_pane_t1_ParamLimits

0xdf39,	// (0x0007c10e) main_cset6_slider_pane_t1

0x7387,	// (0x0007555c) main_cset6_slider_pane_t2_ParamLimits

0x7387,	// (0x0007555c) main_cset6_slider_pane_t2

0x73b2,	// (0x00075587) main_cset6_slider_pane_t3_ParamLimits

0x73b2,	// (0x00075587) main_cset6_slider_pane_t3

0x73dd,	// (0x000755b2) main_cset6_slider_pane_t4_ParamLimits

0x73dd,	// (0x000755b2) main_cset6_slider_pane_t4

0x7408,	// (0x000755dd) main_cset6_slider_pane_t5_ParamLimits

0x7408,	// (0x000755dd) main_cset6_slider_pane_t5

0xdf7a,	// (0x0007c14f) main_cset6_slider_pane_t7_ParamLimits

0xdf7a,	// (0x0007c14f) main_cset6_slider_pane_t7

0x7435,	// (0x0007560a) main_cset6_slider_pane_t8_ParamLimits

0x7435,	// (0x0007560a) main_cset6_slider_pane_t8

0x7459,	// (0x0007562e) main_cset6_slider_pane_t9_ParamLimits

0x7459,	// (0x0007562e) main_cset6_slider_pane_t9

0x747d,	// (0x00075652) main_cset6_slider_pane_t10_ParamLimits

0x747d,	// (0x00075652) main_cset6_slider_pane_t10

0x74a1,	// (0x00075676) main_cset6_slider_pane_t11_ParamLimits

0x74a1,	// (0x00075676) main_cset6_slider_pane_t11

0xdfb0,	// (0x0007c185) main_cset6_slider_pane_t14_ParamLimits

0xdfb0,	// (0x0007c185) main_cset6_slider_pane_t14

0xdfe9,	// (0x0007c1be) main_cset6_slider_pane_t15_ParamLimits

0xdfe9,	// (0x0007c1be) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007dd8c) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007dd8c) main_cset6_slider_pane_t

0xe022,	// (0x0007c1f7) cset_slider_pane_g1_copy1

0xe02b,	// (0x0007c200) cset_slider_pane_g2_copy1

0xe034,	// (0x0007c209) cset_slider_pane_g3_copy1

0x9532,	// (0x00077707) bg_popup_sub_pane_cp011_copy1

0xe03d,	// (0x0007c212) main_cset_text_pane_g1_copy1

0xd8f7,	// (0x0007bacc) main_cset_text_pane_t1_copy1

0xd905,	// (0x0007bada) main_cset_text_pane_t2_copy1

0xd913,	// (0x0007bae8) main_cset_text_pane_t3_copy1

0xd921,	// (0x0007baf6) main_cset_text_pane_t4_copy1

0xd92f,	// (0x0007bb04) main_cset_text_pane_t5_copy1

0xe045,	// (0x0007c21a) main_cset_text_pane_t6_copy1

0xe053,	// (0x0007c228) main_cset_text_pane_t7_copy1

0x7253,	// (0x00075428) main_cset_text2_pane_t1_copy1

0x958b,	// (0x00077760) main_ncimui_pane

0x3889,	// (0x00071a5e) popup_query_ncimui_window_ParamLimits

0x3889,	// (0x00071a5e) popup_query_ncimui_window

0x9f39,	// (0x0007810e) field_cale_ev2_pane_g4_ParamLimits

0x9f39,	// (0x0007810e) field_cale_ev2_pane_g4

0x54f8,	// (0x000736cd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54f8,	// (0x000736cd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007da6a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007da6a) cell_video_dialer_keypad_pane_g

0x5510,	// (0x000736e5) cell_video_dialer_keypad_pane_t1

0x9532,	// (0x00077707) bg_popup_window_pane_cp012

0xb15f,	// (0x00079334) heading_pane_cp06

0xe07f,	// (0x0007c254) ncim_query_content_pane

0x9532,	// (0x00077707) bg_popup_heading_pane_cp01

0xe087,	// (0x0007c25c) ncim_heading_pane_t1

0xe095,	// (0x0007c26a) ncim_indicator_popup_pane

0xe0a7,	// (0x0007c27c) ncim_query_button_pane

0xe0bd,	// (0x0007c292) ncim_query_content_pane_t1

0xe0cf,	// (0x0007c2a4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007ddd0) ncim_query_content_pane_t

0xe109,	// (0x0007c2de) ncim_query_list_pane

0xe11b,	// (0x0007c2f0) ncim_query_popup_pane

0xe095,	// (0x0007c26a) ncim_indicator_popup_pane_ParamLimits

0x7692,	// (0x00075867) ncim_query_content_pane_g1_ParamLimits

0x7692,	// (0x00075867) ncim_query_content_pane_g1

0xe0bd,	// (0x0007c292) ncim_query_content_pane_t1_ParamLimits

0xe0cf,	// (0x0007c2a4) ncim_query_content_pane_t2_ParamLimits

0x769e,	// (0x00075873) ncim_query_content_pane_t3_ParamLimits

0x769e,	// (0x00075873) ncim_query_content_pane_t3

0x76c6,	// (0x0007589b) ncim_query_content_pane_t4_ParamLimits

0x76c6,	// (0x0007589b) ncim_query_content_pane_t4

0x76ee,	// (0x000758c3) ncim_query_content_pane_t5_ParamLimits

0x76ee,	// (0x000758c3) ncim_query_content_pane_t5

0xe0e1,	// (0x0007c2b6) ncim_query_content_pane_t6_ParamLimits

0xe0e1,	// (0x0007c2b6) ncim_query_content_pane_t6

0xfbfb,	// (0x0007ddd0) ncim_query_content_pane_t_ParamLimits

0xe109,	// (0x0007c2de) ncim_query_list_pane_ParamLimits

0xe11b,	// (0x0007c2f0) ncim_query_popup_pane_ParamLimits

0xe12f,	// (0x0007c304) wait_bar_pane_cp04

0x9532,	// (0x00077707) input_focus_pane_cp011

0xe137,	// (0x0007c30c) ncim_query_popup_pane_t1

0xe145,	// (0x0007c31a) ncim_list_query_list_pane_ParamLimits

0xe145,	// (0x0007c31a) ncim_list_query_list_pane

0x9532,	// (0x00077707) bg_button_pane_cp027

0xe158,	// (0x0007c32d) ncim_query_button_pane_g1

0x9532,	// (0x00077707) list_highlight_pane_cp012

0xe162,	// (0x0007c337) ncim_list_query_list_pane_g1

0xe16a,	// (0x0007c33f) ncim_list_query_list_pane_t1

0xa219,	// (0x000783ee) cam4_indicators_pane_g3_ParamLimits

0xa219,	// (0x000783ee) cam4_indicators_pane_g3

0xa2aa,	// (0x0007847f) vid4_indicators_pane_g5_ParamLimits

0xa2aa,	// (0x0007847f) vid4_indicators_pane_g5

0xa434,	// (0x00078609) vid4_progress_pane_g5_ParamLimits

0xa434,	// (0x00078609) vid4_progress_pane_g5

0x7580,	// (0x00075755) main_ncimui_pane_g1

0x75e6,	// (0x000757bb) ncimui_group_query_pane_ParamLimits

0x75e6,	// (0x000757bb) ncimui_group_query_pane

0x762e,	// (0x00075803) ncimui_list_pane_ParamLimits

0x762e,	// (0x00075803) ncimui_list_pane

0x7655,	// (0x0007582a) ncimui_text_pane_ParamLimits

0x7655,	// (0x0007582a) ncimui_text_pane

0x7716,	// (0x000758eb) ncimui_text_pane_t1_ParamLimits

0x7716,	// (0x000758eb) ncimui_text_pane_t1

0xe178,	// (0x0007c34d) ncimui_list_single_graphic_pane_ParamLimits

0xe178,	// (0x0007c34d) ncimui_list_single_graphic_pane

0x7734,	// (0x00075909) ncimui_query_pane_ParamLimits

0x7734,	// (0x00075909) ncimui_query_pane

0x9532,	// (0x00077707) list_highlight_pane_cp013

0xe188,	// (0x0007c35d) ncim_list_query_list_pane_t1_copy1

0xe162,	// (0x0007c337) ncim_list_single_graphic_pane_g1

0xe196,	// (0x0007c36b) ncim_query_button_pane_cp01

0xe1a2,	// (0x0007c377) ncim_query_entry_pane_ParamLimits

0xe1a2,	// (0x0007c377) ncim_query_entry_pane

0xe1b5,	// (0x0007c38a) ncimui_query_pane_g1

0xe1c1,	// (0x0007c396) ncimui_query_pane_t1_ParamLimits

0xe1c1,	// (0x0007c396) ncimui_query_pane_t1

0x958b,	// (0x00077760) input_focus_pane_cp012

0xe1da,	// (0x0007c3af) ncim_query_entry_pane_t1

0xa8c1,	// (0x00078a96) main_im_pane_ParamLimits

0x958b,	// (0x00077760) main_mobtv_pane_ParamLimits

0x958b,	// (0x00077760) main_mobtv_pane

0x736f,	// (0x00075544) main_cset6_slider_pane_g18_ParamLimits

0x736f,	// (0x00075544) main_cset6_slider_pane_g18

0x737b,	// (0x00075550) main_cset6_slider_pane_g19_ParamLimits

0x737b,	// (0x00075550) main_cset6_slider_pane_g19

0x7747,	// (0x0007591c) bg_main_mobtv_pane_ParamLimits

0x7747,	// (0x0007591c) bg_main_mobtv_pane

0x7755,	// (0x0007592a) main_mobtv_info_pane

0x7760,	// (0x00075935) main_mobtv_loading_pane_ParamLimits

0x7760,	// (0x00075935) main_mobtv_loading_pane

0xe1ec,	// (0x0007c3c1) main_mobtv_pg_channel_list_pane

0xe1f6,	// (0x0007c3cb) main_mobtv_pg_hdr_pane

0x776d,	// (0x00075942) main_mobtv_programe_curr_pane_ParamLimits

0x776d,	// (0x00075942) main_mobtv_programe_curr_pane

0x777a,	// (0x0007594f) main_mobtv_programe_next_pane_ParamLimits

0x777a,	// (0x0007594f) main_mobtv_programe_next_pane

0xe1ff,	// (0x0007c3d4) popup_mobtv_noti_window

0xcc66,	// (0x0007ae3b) main_tv_pg_hdr_pane_g1

0xe209,	// (0x0007c3de) main_tv_pg_hdr_pane_g2

0xe211,	// (0x0007c3e6) main_tv_pg_hdr_pane_g3

0xe219,	// (0x0007c3ee) main_tv_pg_hdr_pane_g4

0xe221,	// (0x0007c3f6) main_tv_pg_hdr_pane_g5

0xe22b,	// (0x0007c400) main_tv_pg_hdr_pane_g6

0xe235,	// (0x0007c40a) main_tv_pg_hdr_pane_g7

0xe23f,	// (0x0007c414) main_tv_pg_hdr_pane_g8

0xe249,	// (0x0007c41e) main_tv_pg_hdr_pane_g9

0xe253,	// (0x0007c428) main_tv_pg_hdr_pane_g10

0xe25d,	// (0x0007c432) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007dddd) main_tv_pg_hdr_pane_g

0xe267,	// (0x0007c43c) main_tv_pg_hdr_pane_t1

0xe275,	// (0x0007c44a) main_tv_pg_hdr_pane_t2

0xe283,	// (0x0007c458) main_tv_pg_hdr_pane_t3

0xe293,	// (0x0007c468) main_tv_pg_hdr_pane_t4

0xe2a3,	// (0x0007c478) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007ddf4) main_tv_pg_hdr_pane_t

0xe2b3,	// (0x0007c488) single_mobtv_pg_channel_pane_ParamLimits

0xe2b3,	// (0x0007c488) single_mobtv_pg_channel_pane

0xe2e5,	// (0x0007c4ba) single_mobtv_pg_channel_table_pane

0xe2ee,	// (0x0007c4c3) single_mobtv_pg_channel_thumb_pane

0xe2f7,	// (0x0007c4cc) single_tv_pg_channel_pane_g1

0xe300,	// (0x0007c4d5) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007ddff) single_tv_pg_channel_pane_g

0xce96,	// (0x0007b06b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce96,	// (0x0007b06b) bg_single_mobtv_pg_channel_thumb_pane

0xe309,	// (0x0007c4de) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe309,	// (0x0007c4de) single_mobtv_pg_channel_thumb_pane_g1

0xe317,	// (0x0007c4ec) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe317,	// (0x0007c4ec) single_mobtv_pg_channel_thumb_pane_g2

0xe323,	// (0x0007c4f8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe323,	// (0x0007c4f8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007de04) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007de04) single_mobtv_pg_channel_thumb_pane_g

0xe32f,	// (0x0007c504) single_mobtv_pg_channel_thumb_pane_t1

0xe33d,	// (0x0007c512) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007de0b) single_mobtv_pg_channel_thumb_pane_t

0xcc66,	// (0x0007ae3b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc66,	// (0x0007ae3b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007d8b1) bg_single_mobtv_pg_channel_table_pane_g

0xe34b,	// (0x0007c520) single_mobtv_pg_channel_table_pane_t1

0xe359,	// (0x0007c52e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007de10) single_mobtv_pg_channel_table_pane_t

0x778f,	// (0x00075964) main_mobtv_info_pane_g1_ParamLimits

0x778f,	// (0x00075964) main_mobtv_info_pane_g1

0x77ad,	// (0x00075982) main_mobtv_info_pane_t1_ParamLimits

0x77ad,	// (0x00075982) main_mobtv_info_pane_t1

0x7825,	// (0x000759fa) main_mobtv_info_pane_t2_ParamLimits

0x7825,	// (0x000759fa) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007de1a) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007de1a) main_mobtv_info_pane_t

0x78b4,	// (0x00075a89) wait_bar_pane_cp05

0x78c6,	// (0x00075a9b) main_mobtv_loading_pane_g1_ParamLimits

0x78c6,	// (0x00075a9b) main_mobtv_loading_pane_g1

0x78d7,	// (0x00075aac) main_mobtv_loading_pane_g2_ParamLimits

0x78d7,	// (0x00075aac) main_mobtv_loading_pane_g2

0x78e3,	// (0x00075ab8) main_mobtv_loading_pane_g3_ParamLimits

0x78e3,	// (0x00075ab8) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007de21) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007de21) main_mobtv_loading_pane_g

0xe367,	// (0x0007c53c) main_mobtv_loading_pane_t1_ParamLimits

0xe367,	// (0x0007c53c) main_mobtv_loading_pane_t1

0xe37f,	// (0x0007c554) main_mobtv_loading_pane_t2_ParamLimits

0xe37f,	// (0x0007c554) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007de28) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007de28) main_mobtv_loading_pane_t

0x78f6,	// (0x00075acb) wait_bar_pane_cp06_ParamLimits

0x78f6,	// (0x00075acb) wait_bar_pane_cp06

0xe3a3,	// (0x0007c578) main_mobtv_programe_curr_pane_t1

0xe3b1,	// (0x0007c586) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007de2d) main_mobtv_programe_curr_pane_t

0xe3bf,	// (0x0007c594) main_mobtv_programe_next_pane_t1

0xe3cd,	// (0x0007c5a2) main_mobtv_programe_next_pane_t2

0xe3db,	// (0x0007c5b0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007de32) main_mobtv_programe_next_pane_t

0x9532,	// (0x00077707) bg_popup_mobtv_noti_window_pane

0xe3e9,	// (0x0007c5be) popup_mobtv_noti_window_g1

0xe3f1,	// (0x0007c5c6) popup_mobtv_noti_window_t1

0xe3ff,	// (0x0007c5d4) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007de39) popup_mobtv_noti_window_t

0xcc66,	// (0x0007ae3b) bg_popup_mobtv_noti_window_pane_g1

0x9532,	// (0x00077707) sc_clock_pane

0x9532,	// (0x00077707) main_fs_bigclock_pane

0x6fa5,	// (0x0007517a) blid2_tripm_pane_t4_ParamLimits

0x6fa5,	// (0x0007517a) blid2_tripm_pane_t4

0x7905,	// (0x00075ada) sc_clock_pane_g1_ParamLimits

0x7905,	// (0x00075ada) sc_clock_pane_g1

0x7917,	// (0x00075aec) sc_clock_pane_t1_ParamLimits

0x7917,	// (0x00075aec) sc_clock_pane_t1

0x793b,	// (0x00075b10) sc_clock_pane_t2_ParamLimits

0x793b,	// (0x00075b10) sc_clock_pane_t2

0x7953,	// (0x00075b28) sc_clock_pane_t3_ParamLimits

0x7953,	// (0x00075b28) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007de3e) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007de3e) sc_clock_pane_t

0x89c1,	// (0x00076b96) main_fs_bigclock_indicator_pane_ParamLimits

0x89c1,	// (0x00076b96) main_fs_bigclock_indicator_pane

0x7a0f,	// (0x00075be4) main_fs_bigclock_pane_g1_ParamLimits

0x7a0f,	// (0x00075be4) main_fs_bigclock_pane_g1

0x89cd,	// (0x00076ba2) main_fs_bigclock_pane_t1_ParamLimits

0x89cd,	// (0x00076ba2) main_fs_bigclock_pane_t1

0x89df,	// (0x00076bb4) main_fs_bigclock_pane_t2_ParamLimits

0x89df,	// (0x00076bb4) main_fs_bigclock_pane_t2

0x89f3,	// (0x00076bc8) main_fs_bigclock_pane_t3_ParamLimits

0x89f3,	// (0x00076bc8) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007e048) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007e048) main_fs_bigclock_pane_t

0xec57,	// (0x0007ce2c) main_fs_bigclock_indicator_pane_g1

0xe0af,	// (0x0007c284) ncim_query_content_pane_g2_ParamLimits

0xe0af,	// (0x0007c284) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007ddcb) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007ddcb) ncim_query_content_pane_g

0x796a,	// (0x00075b3f) sc_clock_pane_t4_ParamLimits

0x796a,	// (0x00075b3f) sc_clock_pane_t4

0x958b,	// (0x00077760) main_radioblah_pane

0xd5cb,	// (0x0007b7a0) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5cb,	// (0x0007b7a0) cell_call4_button_pane_t1_copy1

0x7598,	// (0x0007576d) main_ncimui_pane_t1_ParamLimits

0x7598,	// (0x0007576d) main_ncimui_pane_t1

0x75b2,	// (0x00075787) main_ncimui_pane_t2_ParamLimits

0x75b2,	// (0x00075787) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007ddc4) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007ddc4) main_ncimui_pane_t

0xe552,	// (0x0007c727) main_radioblah_anim_pane_ParamLimits

0xe552,	// (0x0007c727) main_radioblah_anim_pane

0xe563,	// (0x0007c738) main_radioblah_info_pane_ParamLimits

0xe563,	// (0x0007c738) main_radioblah_info_pane

0xe577,	// (0x0007c74c) main_radioblah_pane_t1_ParamLimits

0xe577,	// (0x0007c74c) main_radioblah_pane_t1

0xe593,	// (0x0007c768) main_radioblah_pane_t2_ParamLimits

0xe593,	// (0x0007c768) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007de5f) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007de5f) main_radioblah_pane_t

0x7a6c,	// (0x00075c41) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a6c,	// (0x00075c41) main_radioblah_rocker_ctrl_pane

0xe5db,	// (0x0007c7b0) main_radioblah_info_pane_t1_ParamLimits

0xe5db,	// (0x0007c7b0) main_radioblah_info_pane_t1

0x7ac4,	// (0x00075c99) main_radioblah_info_pane_t2_ParamLimits

0x7ac4,	// (0x00075c99) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007de68) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007de68) main_radioblah_info_pane_t

0xcc66,	// (0x0007ae3b) main_radioblah_rocker_ctrl_pane_g1

0x7b74,	// (0x00075d49) main_radioblah_rocker_ctrl_pane_g2

0x7b7c,	// (0x00075d51) main_radioblah_rocker_ctrl_pane_g3

0x7b84,	// (0x00075d59) main_radioblah_rocker_ctrl_pane_g4

0x7b8c,	// (0x00075d61) main_radioblah_rocker_ctrl_pane_g5

0x7b94,	// (0x00075d69) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007de71) main_radioblah_rocker_ctrl_pane_g

0x7253,	// (0x00075428) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1dc,	// (0x000783b1) cam4_image_uncrop_qvga_pane

0xa23f,	// (0x00078414) vid4_image_uncrop_qcif_pane

0xa4b9,	// (0x0007868e) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4b9,	// (0x0007868e) cam6_image_uncrop_qvga_pane

0xdd97,	// (0x0007bf6c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd97,	// (0x0007bf6c) vid6_image_uncrop_qcif_pane

0x9532,	// (0x00077707) bg_popup_preview_window_pane_cp03

0xe061,	// (0x0007c236) list_cset_text2_pane

0xe069,	// (0x0007c23e) main_cset6_text2_pane_g1

0xe071,	// (0x0007c246) main_cset6_text2_pane_t1

0x7b9c,	// (0x00075d71) list_cset_text2_pane_t1_ParamLimits

0x7b9c,	// (0x00075d71) list_cset_text2_pane_t1

0x958b,	// (0x00077760) main_radioblah_pane_ParamLimits

0x78a0,	// (0x00075a75) main_mobtv_info_pane_t3_ParamLimits

0x78a0,	// (0x00075a75) main_mobtv_info_pane_t3

0x7a5a,	// (0x00075c2f) main_radioblah_pane_g1

0x7a94,	// (0x00075c69) main_radioblah_info_pane_g1

0x7b19,	// (0x00075cee) main_radioblah_info_pane_t3_ParamLimits

0x7b19,	// (0x00075cee) main_radioblah_info_pane_t3

0x20b4,	// (0x00070289) highlight_cell_cale_month_pane_ParamLimits

0x20b4,	// (0x00070289) highlight_cell_cale_month_pane

0x9532,	// (0x00077707) main_phob_fisheye_pane

0xcf72,	// (0x0007b147) scroll_pane_cp0031_ParamLimits

0xcf72,	// (0x0007b147) scroll_pane_cp0031

0xdea9,	// (0x0007c07e) wait_bar_pane_cp08_ParamLimits

0x2194,	// (0x00070369) cset_list_set_pane_copy1_ParamLimits

0xe615,	// (0x0007c7ea) highlight_cell_cale_month_pane_g1

0x7bb5,	// (0x00075d8a) highlight_cell_cale_month_pane_t1

0xdb2f,	// (0x0007bd04) list_gen_pane_cp01

0xd79c,	// (0x0007b971) scroll_pane_01

0x7bc3,	// (0x00075d98) list_single_double_fisheye_pane

0x7bcc,	// (0x00075da1) list_double_fisheye_pane_g1_ParamLimits

0x7bcc,	// (0x00075da1) list_double_fisheye_pane_g1

0x7bd8,	// (0x00075dad) list_double_fisheye_pane_g2_ParamLimits

0x7bd8,	// (0x00075dad) list_double_fisheye_pane_g2

0x7bec,	// (0x00075dc1) list_double_fisheye_pane_g3_ParamLimits

0x7bec,	// (0x00075dc1) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007de7e) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007de7e) list_double_fisheye_pane_g

0x7c15,	// (0x00075dea) list_double_fisheye_pane_t1_ParamLimits

0x7c15,	// (0x00075dea) list_double_fisheye_pane_t1

0x7c30,	// (0x00075e05) list_double_fisheye_pane_t2_ParamLimits

0x7c30,	// (0x00075e05) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007de89) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007de89) list_double_fisheye_pane_t

0x9532,	// (0x00077707) main_call5_pane

0x7995,	// (0x00075b6a) sc_swipe_pane_ParamLimits

0x7995,	// (0x00075b6a) sc_swipe_pane

0x7c65,	// (0x00075e3a) call5_image_pane_ParamLimits

0x7c65,	// (0x00075e3a) call5_image_pane

0x7c82,	// (0x00075e57) call5_swipe_1_pane_ParamLimits

0x7c82,	// (0x00075e57) call5_swipe_1_pane

0x7c95,	// (0x00075e6a) call5_swipe_2_pane_ParamLimits

0x7c95,	// (0x00075e6a) call5_swipe_2_pane

0x7cc2,	// (0x00075e97) popup_call5_audio_first_window_ParamLimits

0x7cc2,	// (0x00075e97) popup_call5_audio_first_window

0xce96,	// (0x0007b06b) call5_swipe_1_pane_g1_ParamLimits

0xce96,	// (0x0007b06b) call5_swipe_1_pane_g1

0xe61d,	// (0x0007c7f2) call5_swipe_1_pane_g2_ParamLimits

0xe61d,	// (0x0007c7f2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007de8e) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007de8e) call5_swipe_1_pane_g

0xe629,	// (0x0007c7fe) call5_swipe_1_pane_t1_ParamLimits

0xe629,	// (0x0007c7fe) call5_swipe_1_pane_t1

0xce96,	// (0x0007b06b) call5_swipe_2_pane_g1_ParamLimits

0xce96,	// (0x0007b06b) call5_swipe_2_pane_g1

0xe63e,	// (0x0007c813) call5_swipe_2_pane_g2_ParamLimits

0xe63e,	// (0x0007c813) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007de93) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007de93) call5_swipe_2_pane_g

0xe64a,	// (0x0007c81f) call5_swipe_2_pane_t1_ParamLimits

0xe64a,	// (0x0007c81f) call5_swipe_2_pane_t1

0xe65f,	// (0x0007c834) sc_swipe_pane_g1_ParamLimits

0xe65f,	// (0x0007c834) sc_swipe_pane_g1

0xe66c,	// (0x0007c841) sc_swipe_pane_g2_ParamLimits

0xe66c,	// (0x0007c841) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007de98) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007de98) sc_swipe_pane_g

0xe678,	// (0x0007c84d) sc_swipe_pane_t1_ParamLimits

0xe678,	// (0x0007c84d) sc_swipe_pane_t1

0x9532,	// (0x00077707) main_cmail_launcher_pane

0x7cd7,	// (0x00075eac) aid_size_cell_cmail_l_ParamLimits

0x7cd7,	// (0x00075eac) aid_size_cell_cmail_l

0x7cf1,	// (0x00075ec6) grid_cmail_l_pane_ParamLimits

0x7cf1,	// (0x00075ec6) grid_cmail_l_pane

0x7d0c,	// (0x00075ee1) cell_cmail_l_pane_ParamLimits

0x7d0c,	// (0x00075ee1) cell_cmail_l_pane

0x7d34,	// (0x00075f09) cell_cmail_l_pane_g1_ParamLimits

0x7d34,	// (0x00075f09) cell_cmail_l_pane_g1

0x7d40,	// (0x00075f15) cell_cmail_l_pane_t1_ParamLimits

0x7d40,	// (0x00075f15) cell_cmail_l_pane_t1

0xe68d,	// (0x0007c862) cell_cmail_l_pane_t2_ParamLimits

0xe68d,	// (0x0007c862) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007de9d) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007de9d) cell_cmail_l_pane_t

0x958b,	// (0x00077760) grid_highlight_pane_cp018_ParamLimits

0x958b,	// (0x00077760) grid_highlight_pane_cp018

0xfd17,	// (0x0006deec) main2_pane_ParamLimits

0xfd17,	// (0x0006deec) main2_pane

0xa96c,	// (0x00078b41) popup_sp_fs_action_menu_bg_pane_g1

0xa974,	// (0x00078b49) popup_sp_fs_action_menu_bg_pane_g2

0xa97c,	// (0x00078b51) popup_sp_fs_action_menu_bg_pane_g3

0xa984,	// (0x00078b59) popup_sp_fs_action_menu_bg_pane_g4

0xa98c,	// (0x00078b61) popup_sp_fs_action_menu_bg_pane_g5

0xa994,	// (0x00078b69) popup_sp_fs_action_menu_bg_pane_g6

0xa99c,	// (0x00078b71) popup_sp_fs_action_menu_bg_pane_g7

0xa9a4,	// (0x00078b79) popup_sp_fs_action_menu_bg_pane_g8

0xa9ac,	// (0x00078b81) popup_sp_fs_action_menu_bg_pane_g9

0xa9b4,	// (0x00078b89) popup_sp_fs_action_menu_bg_pane_g10

0xa9b4,	// (0x00078b89) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007d35f) popup_sp_fs_action_menu_bg_pane_g

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t3_g3_g1

0x0f34,	// (0x0006f109) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x2_t3_g3_g2

0x9d46,	// (0x00077f1b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007d40d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007d40d) list_medium_line_x2_t3_g3_g

0x0f40,	// (0x0006f115) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f40,	// (0x0006f115) list_medium_line_x2_t3_g3_t1

0x0f55,	// (0x0006f12a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f55,	// (0x0006f12a) list_medium_line_x2_t3_g3_t2

0x0f69,	// (0x0006f13e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007d414) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007d414) list_medium_line_x2_t3_g3_t

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t3_g2_g1

0x9d46,	// (0x00077f1b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007d41b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007d41b) list_medium_line_x2_t3_g2_g

0x0f7e,	// (0x0006f153) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f7e,	// (0x0006f153) list_medium_line_x2_t3_g2_t1

0x0f94,	// (0x0006f169) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f94,	// (0x0006f169) list_medium_line_x2_t3_g2_t2

0x0fa6,	// (0x0006f17b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fa6,	// (0x0006f17b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007d420) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007d420) list_medium_line_x2_t3_g2_t

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t4_g4_g1

0x0fc4,	// (0x0006f199) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fc4,	// (0x0006f199) list_medium_line_x2_t4_g4_g2

0x0f34,	// (0x0006f109) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x2_t4_g4_g3

0x9d52,	// (0x00077f27) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9d52,	// (0x00077f27) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007d427) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007d427) list_medium_line_x2_t4_g4_g

0x0fd0,	// (0x0006f1a5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0fd0,	// (0x0006f1a5) list_medium_line_x2_t4_g4_t1

0x0fea,	// (0x0006f1bf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0fea,	// (0x0006f1bf) list_medium_line_x2_t4_g4_t2

0x1000,	// (0x0006f1d5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1000,	// (0x0006f1d5) list_medium_line_x2_t4_g4_t3

0x1015,	// (0x0006f1ea) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1015,	// (0x0006f1ea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007d430) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007d430) list_medium_line_x2_t4_g4_t

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t2_g4_g1

0x0fc4,	// (0x0006f199) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fc4,	// (0x0006f199) list_medium_line_x2_t2_g4_g2

0x0f34,	// (0x0006f109) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x2_t2_g4_g3

0x9d46,	// (0x00077f1b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007d497) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007d497) list_medium_line_x2_t2_g4_g

0x20da,	// (0x000702af) list_medium_line_x2_t2_g4_t1_ParamLimits

0x20da,	// (0x000702af) list_medium_line_x2_t2_g4_t1

0x0f69,	// (0x0006f13e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007d4a0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007d4a0) list_medium_line_x2_t2_g4_t

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t2_g3_g1

0x0f34,	// (0x0006f109) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x2_t2_g3_g2

0x9d46,	// (0x00077f1b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007d40d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007d40d) list_medium_line_x2_t2_g3_g

0x20ef,	// (0x000702c4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x20ef,	// (0x000702c4) list_medium_line_x2_t2_g3_t1

0x0f69,	// (0x0006f13e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007d4a5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007d4a5) list_medium_line_x2_t2_g3_t

0x2239,	// (0x0007040e) main_sp_fs_list_pane_ParamLimits

0x2239,	// (0x0007040e) main_sp_fs_list_pane

0x2245,	// (0x0007041a) sp_fs_scroll_pane_ParamLimits

0x2245,	// (0x0007041a) sp_fs_scroll_pane

0x2251,	// (0x00070426) list_medium_line_x2_t3_t1

0x2261,	// (0x00070436) list_medium_line_x2_t3_t2

0x226f,	// (0x00070444) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007d4f0) list_medium_line_x2_t3_t

0x227d,	// (0x00070452) list_medium_line_x3_t4_t1

0x228d,	// (0x00070462) list_medium_line_x3_t4_t2

0x229b,	// (0x00070470) list_medium_line_x3_t4_t3

0x226f,	// (0x00070444) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007d4f7) list_medium_line_x3_t4_t

0x22a9,	// (0x0007047e) list_medium_line_x4_t5_t1

0x22b9,	// (0x0007048e) list_medium_line_x4_t5_t2

0x229b,	// (0x00070470) list_medium_line_x4_t5_t3

0x22c7,	// (0x0007049c) list_medium_line_x4_t5_t4

0x226f,	// (0x00070444) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007d500) list_medium_line_x4_t5_t

0x9d3a,	// (0x00077f0f) list_medium_line_t4_g4_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_t4_g4_g1

0x9d52,	// (0x00077f27) list_medium_line_t4_g4_g2_ParamLimits

0x9d52,	// (0x00077f27) list_medium_line_t4_g4_g2

0x22d5,	// (0x000704aa) list_medium_line_t4_g4_g3_ParamLimits

0x22d5,	// (0x000704aa) list_medium_line_t4_g4_g3

0x9d46,	// (0x00077f1b) list_medium_line_t4_g4_g4_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007d50b) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007d50b) list_medium_line_t4_g4_g

0x22e1,	// (0x000704b6) list_medium_line_t4_g4_t1_ParamLimits

0x22e1,	// (0x000704b6) list_medium_line_t4_g4_t1

0x22f6,	// (0x000704cb) list_medium_line_t4_g4_t2_ParamLimits

0x22f6,	// (0x000704cb) list_medium_line_t4_g4_t2

0x230c,	// (0x000704e1) list_medium_line_t4_g4_t3_ParamLimits

0x230c,	// (0x000704e1) list_medium_line_t4_g4_t3

0x0f69,	// (0x0006f13e) list_medium_line_t4_g4_t4_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007d514) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007d514) list_medium_line_t4_g4_t

0x23e8,	// (0x000705bd) chi_dic_find_pane_g1

0x360f,	// (0x000717e4) main_tport_pane

0x65f9,	// (0x000747ce) list_medium_line_plain_t1

0x66a9,	// (0x0007487e) list_medium_line_t2_g2_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_t2_g2_g1

0x66b5,	// (0x0007488a) list_medium_line_t2_g2_g2_ParamLimits

0x66b5,	// (0x0007488a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007dbd5) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007dbd5) list_medium_line_t2_g2_g

0x66c1,	// (0x00074896) list_medium_line_t2_g2_t1_ParamLimits

0x66c1,	// (0x00074896) list_medium_line_t2_g2_t1

0x66d8,	// (0x000748ad) list_medium_line_t2_g2_t2_ParamLimits

0x66d8,	// (0x000748ad) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007dbda) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007dbda) list_medium_line_t2_g2_t

0xa497,	// (0x0007866c) aid_sp_fs_list_icon_a_sm

0xa49f,	// (0x00078674) aid_sp_fs_list_icon_d

0xa4a7,	// (0x0007867c) aid_sp_fs_text_primary

0xa4b0,	// (0x00078685) aid_sp_fs_text_secondary

0x6d52,	// (0x00074f27) list_medium_line

0x6d52,	// (0x00074f27) list_medium_line_g2

0x6d52,	// (0x00074f27) list_medium_line_g3

0x6d52,	// (0x00074f27) list_medium_line_plain

0x6d52,	// (0x00074f27) list_medium_line_plain_t2

0x6d52,	// (0x00074f27) list_medium_line_plain_t3

0x6d52,	// (0x00074f27) list_medium_line_right_icon

0x6d52,	// (0x00074f27) list_medium_line_right_iconx2

0x6d52,	// (0x00074f27) list_medium_line_t2

0x6d52,	// (0x00074f27) list_medium_line_t2_g2

0x6d52,	// (0x00074f27) list_medium_line_t2_g3

0x6d52,	// (0x00074f27) list_medium_line_t2_right_icon

0x6d52,	// (0x00074f27) list_medium_line_t2_right_iconx2

0x6d52,	// (0x00074f27) list_medium_line_t3

0x6d52,	// (0x00074f27) list_medium_line_t3_g2

0x6d52,	// (0x00074f27) list_medium_line_t3_g3

0x6d52,	// (0x00074f27) list_medium_line_t3_right_iconx2

0x6d5b,	// (0x00074f30) list_medium_line_t4_g4

0x6d64,	// (0x00074f39) list_medium_line_x2

0x6d64,	// (0x00074f39) list_medium_line_x2_t2_g2

0x6d64,	// (0x00074f39) list_medium_line_x2_t2_g3

0x6d64,	// (0x00074f39) list_medium_line_x2_t2_g4

0x6d64,	// (0x00074f39) list_medium_line_x2_t3

0x6d64,	// (0x00074f39) list_medium_line_x2_t3_g2

0x6d64,	// (0x00074f39) list_medium_line_x2_t3_g3

0x6d64,	// (0x00074f39) list_medium_line_x2_t3_g4

0x6d64,	// (0x00074f39) list_medium_line_x2_t4_g2

0x6d64,	// (0x00074f39) list_medium_line_x2_t4_g4

0x6d6d,	// (0x00074f42) list_medium_line_x3

0x6d6d,	// (0x00074f42) list_medium_line_x3_t4

0x6d6d,	// (0x00074f42) list_medium_line_x3_t4_g4

0x6d5b,	// (0x00074f30) list_medium_line_x4_t4

0x6d5b,	// (0x00074f30) list_medium_line_x4_t4_g7

0x6d5b,	// (0x00074f30) list_medium_line_x4_t5

0x6d76,	// (0x00074f4b) list_single_fs_dyc_pane_ParamLimits

0x6d76,	// (0x00074f4b) list_single_fs_dyc_pane

0x9d3a,	// (0x00077f0f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x4_t4_g7_g1

0xa4c7,	// (0x0007869c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa4c7,	// (0x0007869c) list_medium_line_x4_t4_g7_g2

0x74c7,	// (0x0007569c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74c7,	// (0x0007569c) list_medium_line_x4_t4_g7_g3

0x74d6,	// (0x000756ab) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74d6,	// (0x000756ab) list_medium_line_x4_t4_g7_g4

0x74e2,	// (0x000756b7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74e2,	// (0x000756b7) list_medium_line_x4_t4_g7_g5

0x74f1,	// (0x000756c6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74f1,	// (0x000756c6) list_medium_line_x4_t4_g7_g6

0xa4d3,	// (0x000786a8) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa4d3,	// (0x000786a8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007dda5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007dda5) list_medium_line_x4_t4_g7_g

0x7500,	// (0x000756d5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7500,	// (0x000756d5) list_medium_line_x4_t4_g7_t1

0x7515,	// (0x000756ea) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7515,	// (0x000756ea) list_medium_line_x4_t4_g7_t2

0x752a,	// (0x000756ff) list_medium_line_x4_t4_g7_t3_ParamLimits

0x752a,	// (0x000756ff) list_medium_line_x4_t4_g7_t3

0x753f,	// (0x00075714) list_medium_line_x4_t4_g7_t4_ParamLimits

0x753f,	// (0x00075714) list_medium_line_x4_t4_g7_t4

0xa4df,	// (0x000786b4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa4df,	// (0x000786b4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007ddb4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007ddb4) list_medium_line_x4_t4_g7_t

0x7551,	// (0x00075726) list_single_dyc_row_pane_ParamLimits

0x7551,	// (0x00075726) list_single_dyc_row_pane

0x7c52,	// (0x00075e27) call5_gesture_pane_ParamLimits

0x7c52,	// (0x00075e27) call5_gesture_pane

0x7ca8,	// (0x00075e7d) call5_windows_pane_ParamLimits

0x7ca8,	// (0x00075e7d) call5_windows_pane

0x7d56,	// (0x00075f2b) call5_swipe_1_pane_cp_ParamLimits

0x7d56,	// (0x00075f2b) call5_swipe_1_pane_cp

0x7d62,	// (0x00075f37) call5_swipe_2_pane_cp_ParamLimits

0x7d62,	// (0x00075f37) call5_swipe_2_pane_cp

0xaa77,	// (0x00078c4c) call5_image_pane_cp

0x7d6e,	// (0x00075f43) popup_call5_audio_first_window_cp_ParamLimits

0x7d6e,	// (0x00075f43) popup_call5_audio_first_window_cp

0xe65f,	// (0x0007c834) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65f,	// (0x0007c834) call5_swipe_1_pane_g1_cp

0xe69f,	// (0x0007c874) call5_swipe_1_pane_g2_cp

0xe678,	// (0x0007c84d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe678,	// (0x0007c84d) call5_swipe_1_pane_t1_cp

0xe65f,	// (0x0007c834) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65f,	// (0x0007c834) call5_swipe_2_pane_g1_cp

0xe6a7,	// (0x0007c87c) call5_swipe_2_pane_g2_cp

0xe6af,	// (0x0007c884) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6af,	// (0x0007c884) call5_swipe_2_pane_t1_cp

0x958b,	// (0x00077760) main_sp_fs_email_pane

0xe6c4,	// (0x0007c899) main_sp_fs_listscroll_pane_te

0xa4f1,	// (0x000786c6) popup_sp_fs_action_menu_pane_ParamLimits

0xa4f1,	// (0x000786c6) popup_sp_fs_action_menu_pane

0xcc66,	// (0x0007ae3b) bg_sp_fs_ctrlbar_pane_g1

0xd21b,	// (0x0007b3f0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd22d,	// (0x0007b402) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd224,	// (0x0007b3f9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc66,	// (0x0007ae3b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007dea2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca45,	// (0x0007ac1a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca45,	// (0x0007ac1a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6cd,	// (0x0007c8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6cd,	// (0x0007c8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d9,	// (0x0007c8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6d9,	// (0x0007c8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007deab) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007deab) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6e5,	// (0x0007c8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6e5,	// (0x0007c8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d7c,	// (0x00075f51) list_medium_line_t2_right_icon_g1

0x7d84,	// (0x00075f59) list_medium_line_t2_right_icon_t1

0x7d94,	// (0x00075f69) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007deb0) list_medium_line_t2_right_icon_t

0xc815,	// (0x0007a9ea) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc815,	// (0x0007a9ea) bg_sp_fs_ctrlbar_pane

0x7df3,	// (0x00075fc8) main_sp_fs_ctrlbar_button_pane_cp01

0x7dfd,	// (0x00075fd2) main_sp_fs_ctrlbar_ddmenu_pane

0xe2c5,	// (0x0007c49a) main_sp_fs_ctrlbar_pane_g1

0xe737,	// (0x0007c90c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007deb5) main_sp_fs_ctrlbar_pane_g

0xe743,	// (0x0007c918) main_sp_fs_ctrlbar_pane_t1

0x7e07,	// (0x00075fdc) main_sp_fs_ctrlbar_pane

0x7e2b,	// (0x00076000) main_sp_fs_listscroll_pane_te_cp01

0x7e4b,	// (0x00076020) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e4b,	// (0x00076020) popup_sp_fs_action_menu_pane_cp01

0x958b,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x958b,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp01

0xa537,	// (0x0007870c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa537,	// (0x0007870c) sp_fs_action_menu_list_gene_pane_g1

0xe773,	// (0x0007c948) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe773,	// (0x0007c948) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007debf) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007debf) sp_fs_action_menu_list_gene_pane_g

0xa546,	// (0x0007871b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa546,	// (0x0007871b) sp_fs_action_menu_list_gene_pane_t1

0xa55e,	// (0x00078733) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa55e,	// (0x00078733) sp_fs_action_menu_list_gene_pane

0xe780,	// (0x0007c955) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe780,	// (0x0007c955) popup_sp_fs_action_menu_bg_pane

0xa581,	// (0x00078756) sp_fs_action_menu_list_pane_ParamLimits

0xa581,	// (0x00078756) sp_fs_action_menu_list_pane

0xe78e,	// (0x0007c963) sp_fs_scroll_pane_cp01_ParamLimits

0xe78e,	// (0x0007c963) sp_fs_scroll_pane_cp01

0x7e7b,	// (0x00076050) list_medium_line_plain_t2_t1

0x7e8b,	// (0x00076060) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007dec4) list_medium_line_plain_t2_t

0x7e9b,	// (0x00076070) list_medium_line_plain_t3_t1

0x7eab,	// (0x00076080) list_medium_line_plain_t3_t2

0x7eb9,	// (0x0007608e) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007dec9) list_medium_line_plain_t3_t

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t2_g2_g1

0x9d46,	// (0x00077f1b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007d41b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007d41b) list_medium_line_x2_t2_g2_g

0x22e1,	// (0x000704b6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x22e1,	// (0x000704b6) list_medium_line_x2_t2_g2_t1

0x0f69,	// (0x0006f13e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007ded0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007ded0) list_medium_line_x2_t2_g2_t

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t4_g2_g1

0xa5a5,	// (0x0007877a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa5a5,	// (0x0007877a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007ded5) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007ded5) list_medium_line_x2_t4_g2_g

0x7ec7,	// (0x0007609c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ec7,	// (0x0007609c) list_medium_line_x2_t4_g2_t1

0x7ee1,	// (0x000760b6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ee1,	// (0x000760b6) list_medium_line_x2_t4_g2_t2

0x7ef7,	// (0x000760cc) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ef7,	// (0x000760cc) list_medium_line_x2_t4_g2_t3

0x0f69,	// (0x0006f13e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007deda) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007deda) list_medium_line_x2_t4_g2_t

0x7f0c,	// (0x000760e1) list_medium_line_t3_right_iconx2_g1

0x7d7c,	// (0x00075f51) list_medium_line_t3_right_iconx2_g2

0x7f14,	// (0x000760e9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007dee3) list_medium_line_t3_right_iconx2_g

0x7f1e,	// (0x000760f3) list_medium_line_t3_right_iconx2_t1

0x7f2e,	// (0x00076103) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007deea) list_medium_line_t3_right_iconx2_t

0x9d3a,	// (0x00077f0f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x3_t4_g4_g1

0x0f34,	// (0x0006f109) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x3_t4_g4_g2

0x9d52,	// (0x00077f27) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9d52,	// (0x00077f27) list_medium_line_x3_t4_g4_g3

0x7f3c,	// (0x00076111) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f3c,	// (0x00076111) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007deef) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007deef) list_medium_line_x3_t4_g4_g

0x7f48,	// (0x0007611d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f48,	// (0x0007611d) list_medium_line_x3_t4_g4_t1

0x7f5f,	// (0x00076134) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f5f,	// (0x00076134) list_medium_line_x3_t4_g4_t2

0x7f7a,	// (0x0007614f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f7a,	// (0x0007614f) list_medium_line_x3_t4_g4_t3

0x7f8f,	// (0x00076164) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f8f,	// (0x00076164) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007def8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007def8) list_medium_line_x3_t4_g4_t

0x7fac,	// (0x00076181) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fac,	// (0x00076181) list_single_dyc_row_text_pane_t1

0x7ff5,	// (0x000761ca) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ff5,	// (0x000761ca) list_single_dyc_row_text_pane_t2

0xa5b7,	// (0x0007878c) list_single_dyc_row_text_pane_t3_ParamLimits

0xa5b7,	// (0x0007878c) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007df01) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007df01) list_single_dyc_row_text_pane_t

0xa5db,	// (0x000787b0) list_single_dyc_row_pane_g1_ParamLimits

0xa5db,	// (0x000787b0) list_single_dyc_row_pane_g1

0xa5e7,	// (0x000787bc) list_single_dyc_row_pane_g2_ParamLimits

0xa5e7,	// (0x000787bc) list_single_dyc_row_pane_g2

0xa5f3,	// (0x000787c8) list_single_dyc_row_pane_g3_ParamLimits

0xa5f3,	// (0x000787c8) list_single_dyc_row_pane_g3

0xa5ff,	// (0x000787d4) list_single_dyc_row_pane_g4_ParamLimits

0xa5ff,	// (0x000787d4) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007df0e) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007df0e) list_single_dyc_row_pane_g

0xa60b,	// (0x000787e0) list_single_dyc_row_text_pane_ParamLimits

0xa60b,	// (0x000787e0) list_single_dyc_row_text_pane

0x9532,	// (0x00077707) bg_sp_fs_scroll_pane

0xe7b4,	// (0x0007c989) thumb_sp_fs_scroll_pane

0x66a9,	// (0x0007487e) list_medium_line_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_g1

0x812a,	// (0x000762ff) list_medium_line_t1_ParamLimits

0x812a,	// (0x000762ff) list_medium_line_t1

0x9d3a,	// (0x00077f0f) list_medium_line_x2_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_g1

0x0f34,	// (0x0006f109) list_medium_line_x2_g2_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007df17) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007df17) list_medium_line_x2_g

0xa62a,	// (0x000787ff) list_medium_line_x2_t1_ParamLimits

0xa62a,	// (0x000787ff) list_medium_line_x2_t1

0x9d3a,	// (0x00077f0f) list_medium_line_x3_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x3_g1

0x0f34,	// (0x0006f109) list_medium_line_x3_g2_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007df17) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007df17) list_medium_line_x3_g

0xa62a,	// (0x000787ff) list_medium_line_x3_t1_ParamLimits

0xa62a,	// (0x000787ff) list_medium_line_x3_t1

0xe7bd,	// (0x0007c992) thumb_sp_fs_scroll_pane_g1

0xe7c6,	// (0x0007c99b) thumb_sp_fs_scroll_pane_g2

0xe7cf,	// (0x0007c9a4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007df1c) thumb_sp_fs_scroll_pane_g

0xe7bd,	// (0x0007c992) bg_sp_fs_scroll_pane_g1

0xe7c6,	// (0x0007c99b) bg_sp_fs_scroll_pane_g2

0xe7cf,	// (0x0007c9a4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007df1c) bg_sp_fs_scroll_pane_g

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9d3a,	// (0x00077f0f) list_medium_line_x2_t3_g4_g1

0x0fc4,	// (0x0006f199) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fc4,	// (0x0006f199) list_medium_line_x2_t3_g4_g2

0x0f34,	// (0x0006f109) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f34,	// (0x0006f109) list_medium_line_x2_t3_g4_g3

0x9d46,	// (0x00077f1b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9d46,	// (0x00077f1b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007d497) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007d497) list_medium_line_x2_t3_g4_g

0x813f,	// (0x00076314) list_medium_line_x2_t3_g4_t1_ParamLimits

0x813f,	// (0x00076314) list_medium_line_x2_t3_g4_t1

0x8155,	// (0x0007632a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8155,	// (0x0007632a) list_medium_line_x2_t3_g4_t2

0x0f69,	// (0x0006f13e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f69,	// (0x0006f13e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007df23) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007df23) list_medium_line_x2_t3_g4_t

0x66a9,	// (0x0007487e) list_medium_line_g2_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_g2_g1

0x66b5,	// (0x0007488a) list_medium_line_g2_g2_ParamLimits

0x66b5,	// (0x0007488a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007dbd5) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007dbd5) list_medium_line_g2_g

0x816e,	// (0x00076343) list_medium_line_g2_t1_ParamLimits

0x816e,	// (0x00076343) list_medium_line_g2_t1

0x66a9,	// (0x0007487e) list_medium_line_t3_g2_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_t3_g2_g1

0x66b5,	// (0x0007488a) list_medium_line_t3_g2_g2_ParamLimits

0x66b5,	// (0x0007488a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007dbd5) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007dbd5) list_medium_line_t3_g2_g

0x8183,	// (0x00076358) list_medium_line_t3_g2_t1_ParamLimits

0x8183,	// (0x00076358) list_medium_line_t3_g2_t1

0x819d,	// (0x00076372) list_medium_line_t3_g2_t2_ParamLimits

0x819d,	// (0x00076372) list_medium_line_t3_g2_t2

0x81b3,	// (0x00076388) list_medium_line_t3_g2_t3_ParamLimits

0x81b3,	// (0x00076388) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007df2a) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007df2a) list_medium_line_t3_g2_t

0x7d7c,	// (0x00075f51) list_medium_line_right_icon_g1

0x81ca,	// (0x0007639f) list_medium_line_right_icon_t1

0x66a9,	// (0x0007487e) list_medium_line_t2_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_t2_g1

0x81d8,	// (0x000763ad) list_medium_line_t2_t1_ParamLimits

0x81d8,	// (0x000763ad) list_medium_line_t2_t1

0x81f2,	// (0x000763c7) list_medium_line_t2_t2_ParamLimits

0x81f2,	// (0x000763c7) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007df31) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007df31) list_medium_line_t2_t

0x66a9,	// (0x0007487e) list_medium_line_t3_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_t3_g1

0x820b,	// (0x000763e0) list_medium_line_t3_t1_ParamLimits

0x820b,	// (0x000763e0) list_medium_line_t3_t1

0x8225,	// (0x000763fa) list_medium_line_t3_t2_ParamLimits

0x8225,	// (0x000763fa) list_medium_line_t3_t2

0x823b,	// (0x00076410) list_medium_line_t3_t3_ParamLimits

0x823b,	// (0x00076410) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007df36) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007df36) list_medium_line_t3_t

0x66a9,	// (0x0007487e) list_medium_line_g3_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_g3_g1

0x8250,	// (0x00076425) list_medium_line_g3_g2_ParamLimits

0x8250,	// (0x00076425) list_medium_line_g3_g2

0x66b5,	// (0x0007488a) list_medium_line_g3_g3_ParamLimits

0x66b5,	// (0x0007488a) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007df3d) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007df3d) list_medium_line_g3_g

0x825c,	// (0x00076431) list_medium_line_g3_t1_ParamLimits

0x825c,	// (0x00076431) list_medium_line_g3_t1

0x66a9,	// (0x0007487e) list_medium_line_t2_g3_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_t2_g3_g1

0x8250,	// (0x00076425) list_medium_line_t2_g3_g2_ParamLimits

0x8250,	// (0x00076425) list_medium_line_t2_g3_g2

0x66b5,	// (0x0007488a) list_medium_line_t2_g3_g3_ParamLimits

0x66b5,	// (0x0007488a) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007df3d) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007df3d) list_medium_line_t2_g3_g

0x8271,	// (0x00076446) list_medium_line_t2_g3_t1_ParamLimits

0x8271,	// (0x00076446) list_medium_line_t2_g3_t1

0x8288,	// (0x0007645d) list_medium_line_t2_g3_t2_ParamLimits

0x8288,	// (0x0007645d) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007df44) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007df44) list_medium_line_t2_g3_t

0x66a9,	// (0x0007487e) list_medium_line_t3_g3_g1_ParamLimits

0x66a9,	// (0x0007487e) list_medium_line_t3_g3_g1

0x8250,	// (0x00076425) list_medium_line_t3_g3_g2_ParamLimits

0x8250,	// (0x00076425) list_medium_line_t3_g3_g2

0x66b5,	// (0x0007488a) list_medium_line_t3_g3_g3_ParamLimits

0x66b5,	// (0x0007488a) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007df3d) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007df3d) list_medium_line_t3_g3_g

0x82a1,	// (0x00076476) list_medium_line_t3_g3_t1_ParamLimits

0x82a1,	// (0x00076476) list_medium_line_t3_g3_t1

0x82ba,	// (0x0007648f) list_medium_line_t3_g3_t2_ParamLimits

0x82ba,	// (0x0007648f) list_medium_line_t3_g3_t2

0x82d0,	// (0x000764a5) list_medium_line_t3_g3_t3_ParamLimits

0x82d0,	// (0x000764a5) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007df49) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007df49) list_medium_line_t3_g3_t

0x7f0c,	// (0x000760e1) list_medium_line_right_iconx2_g1

0x7d7c,	// (0x00075f51) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007df50) list_medium_line_right_iconx2_g

0x82ea,	// (0x000764bf) list_medium_line_right_iconx2_t1

0x7f0c,	// (0x000760e1) list_medium_line_t2_right_iconx2_g1

0x7d7c,	// (0x00075f51) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007df50) list_medium_line_t2_right_iconx2_g

0x82f8,	// (0x000764cd) list_medium_line_t2_right_iconx2_t1

0x8308,	// (0x000764dd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007df55) list_medium_line_t2_right_iconx2_t

0x831a,	// (0x000764ef) list_medium_line_x4_t4_t1

0x8328,	// (0x000764fd) list_medium_line_x4_t4_t2

0x8338,	// (0x0007650d) list_medium_line_x4_t4_t3

0x8348,	// (0x0007651d) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007df5a) list_medium_line_x4_t4_t

0x839b,	// (0x00076570) tport_appsw_pane_ParamLimits

0x839b,	// (0x00076570) tport_appsw_pane

0x83b3,	// (0x00076588) tport_contact_pane_ParamLimits

0x83b3,	// (0x00076588) tport_contact_pane

0x83cb,	// (0x000765a0) tport_listscroll_pane_ParamLimits

0x83cb,	// (0x000765a0) tport_listscroll_pane

0x83e5,	// (0x000765ba) cell_tport_appsw_pane_ParamLimits

0x83e5,	// (0x000765ba) cell_tport_appsw_pane

0xd65e,	// (0x0007b833) tport_appsw_pane_g1_ParamLimits

0xd65e,	// (0x0007b833) tport_appsw_pane_g1

0xe7d8,	// (0x0007c9ad) tport_contact_pane_g1

0xe7e1,	// (0x0007c9b6) tport_contact_pane_t1

0xe7ef,	// (0x0007c9c4) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007df63) tport_contact_pane_t

0xe7fd,	// (0x0007c9d2) list_tport_pane

0xe806,	// (0x0007c9db) scroll_pane_cp_030

0x8437,	// (0x0007660c) cell_tport_appsw_pane_g1

0x8447,	// (0x0007661c) cell_tport_appsw_pane_t1

0x8455,	// (0x0007662a) grid_highlight_pane_cp019

0x845d,	// (0x00076632) list_tport_double_graphic_pane_ParamLimits

0x845d,	// (0x00076632) list_tport_double_graphic_pane

0x958b,	// (0x00077760) list_highlight_pane_cp023_ParamLimits

0x958b,	// (0x00077760) list_highlight_pane_cp023

0x846a,	// (0x0007663f) list_tport_double_graphic_pane_g1_ParamLimits

0x846a,	// (0x0007663f) list_tport_double_graphic_pane_g1

0x8477,	// (0x0007664c) list_tport_double_graphic_pane_t1_ParamLimits

0x8477,	// (0x0007664c) list_tport_double_graphic_pane_t1

0x848c,	// (0x00076661) list_tport_double_graphic_pane_t2_ParamLimits

0x848c,	// (0x00076661) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007df6f) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007df6f) list_tport_double_graphic_pane_t

0x9532,	// (0x00077707) main_cale_note_pane

0x5e13,	// (0x00073fe8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e13,	// (0x00073fe8) cell_vitu2_function_top_wide_pane_cp01

0x78b4,	// (0x00075a89) wait_bar_pane_cp05_ParamLimits

0x958b,	// (0x00077760) listscroll_cmail_pane

0xe817,	// (0x0007c9ec) list_cmail_pane

0x84a8,	// (0x0007667d) list_cmail_body_pane

0xe82e,	// (0x0007ca03) list_single_cmail_header_caption_pane

0x84bb,	// (0x00076690) list_single_cmail_header_detail_pane_ParamLimits

0x84bb,	// (0x00076690) list_single_cmail_header_detail_pane

0x84e6,	// (0x000766bb) list_single_cmail_header_caption_pane_t1

0x84f6,	// (0x000766cb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84f6,	// (0x000766cb) list_single_cmail_header_detail_pane_g1

0xa640,	// (0x00078815) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa640,	// (0x00078815) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007df74) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007df74) list_single_cmail_header_detail_pane_g

0xa64c,	// (0x00078821) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa64c,	// (0x00078821) list_single_cmail_header_detail_pane_t1

0xa6b8,	// (0x0007888d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa6b8,	// (0x0007888d) list_single_cmail_header_editor_pane_bg

0xe300,	// (0x0007c4d5) list_cmail_body_pane_g1

0xe85f,	// (0x0007ca34) list_cmail_body_pane_t1

0xd67e,	// (0x0007b853) list_single_cmail_header_editor_pane_bg_g1

0xacd4,	// (0x00078ea9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd68e,	// (0x0007b863) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd686,	// (0x0007b85b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8a8,	// (0x0007ba7d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6ae,	// (0x0007b883) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd69e,	// (0x0007b873) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6a6,	// (0x0007b87b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb4,	// (0x00078e89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x850e,	// (0x000766e3) calenote_gesture_pane_ParamLimits

0x850e,	// (0x000766e3) calenote_gesture_pane

0x852e,	// (0x00076703) calenote_window_pane_ParamLimits

0x852e,	// (0x00076703) calenote_window_pane

0xe86d,	// (0x0007ca42) popup_note_window_cp01

0x854a,	// (0x0007671f) calenote_swipe_1_pane_ParamLimits

0x854a,	// (0x0007671f) calenote_swipe_1_pane

0x7d62,	// (0x00075f37) calenote_swipe_2_pane_ParamLimits

0x7d62,	// (0x00075f37) calenote_swipe_2_pane

0xe65f,	// (0x0007c834) calenote_swipe_1_pane_g1_ParamLimits

0xe65f,	// (0x0007c834) calenote_swipe_1_pane_g1

0xe66c,	// (0x0007c841) calenote_swipe_1_pane_g2_ParamLimits

0xe66c,	// (0x0007c841) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007de98) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007de98) calenote_swipe_1_pane_g

0xe87f,	// (0x0007ca54) calenote_swipe_1_pane_t1_ParamLimits

0xe87f,	// (0x0007ca54) calenote_swipe_1_pane_t1

0xe65f,	// (0x0007c834) calenote_swipe_2_pane_g1_ParamLimits

0xe65f,	// (0x0007c834) calenote_swipe_2_pane_g1

0xe89e,	// (0x0007ca73) calenote_swipe_2_pane_g2_ParamLimits

0xe89e,	// (0x0007ca73) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007df80) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007df80) calenote_swipe_2_pane_g

0xe8aa,	// (0x0007ca7f) calenote_swipe_2_pane_t1_ParamLimits

0xe8aa,	// (0x0007ca7f) calenote_swipe_2_pane_t1

0x9532,	// (0x00077707) main_mup_navstr_pane

0x4a62,	// (0x00072c37) main_mup3_pane_t7_ParamLimits

0x4a62,	// (0x00072c37) main_mup3_pane_t7

0x9ffa,	// (0x000781cf) main_mp4_pane_g6_ParamLimits

0x9ffa,	// (0x000781cf) main_mp4_pane_g6

0xa19e,	// (0x00078373) main_image3_pane_t4_ParamLimits

0xa19e,	// (0x00078373) main_image3_pane_t4

0x855f,	// (0x00076734) popup_navstr_preview_pane_ParamLimits

0x855f,	// (0x00076734) popup_navstr_preview_pane

0x856f,	// (0x00076744) scroll_navstr_pane_ParamLimits

0x856f,	// (0x00076744) scroll_navstr_pane

0x9532,	// (0x00077707) bg_popup_preview_window_pane_cp04

0xe8d1,	// (0x0007caa6) popup_navstr_preview_pane_t1

0x8583,	// (0x00076758) scroll_navstr_pane_g1_ParamLimits

0x8583,	// (0x00076758) scroll_navstr_pane_g1

0x8597,	// (0x0007676c) scroll_navstr_pane_t1_ParamLimits

0x8597,	// (0x0007676c) scroll_navstr_pane_t1

0xe876,	// (0x0007ca4b) bg_button_pane_cp014

0xe876,	// (0x0007ca4b) bg_button_pane_cp030

0x7bf8,	// (0x00075dcd) list_double_fisheye_pane_g4_ParamLimits

0x7bf8,	// (0x00075dcd) list_double_fisheye_pane_g4

0x7c04,	// (0x00075dd9) list_double_fisheye_pane_g5_ParamLimits

0x7c04,	// (0x00075dd9) list_double_fisheye_pane_g5

0xe81f,	// (0x0007c9f4) sp_fs_scroll_pane_cp03

0xe2c5,	// (0x0007c49a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe737,	// (0x0007c90c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007deb5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe743,	// (0x0007c918) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x849e,	// (0x00076673) sp_fs_scroll_pane_cp02

0xa9d7,	// (0x00078bac) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9d7,	// (0x00078bac) popup_sp_fs_calendar_preview_list_single_pane

0x9532,	// (0x00077707) main_cam6_pano_pane

0x958b,	// (0x00077760) main_mup3_pane_ParamLimits

0x9532,	// (0x00077707) main_phacti_pane

0x7787,	// (0x0007595c) bg_button_pane_cp11

0x77a1,	// (0x00075976) main_mobtv_info_pane_g2_ParamLimits

0x77a1,	// (0x00075976) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007de15) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007de15) main_mobtv_info_pane_g

0x797c,	// (0x00075b51) sc_clock_pane_t5_ParamLimits

0x797c,	// (0x00075b51) sc_clock_pane_t5

0x7a5a,	// (0x00075c2f) main_radioblah_pane_g1_ParamLimits

0xe5ab,	// (0x0007c780) main_radioblah_pane_t3_ParamLimits

0xe5ab,	// (0x0007c780) main_radioblah_pane_t3

0xe5c3,	// (0x0007c798) main_radioblah_pane_t4_ParamLimits

0xe5c3,	// (0x0007c798) main_radioblah_pane_t4

0x7a82,	// (0x00075c57) main_radioblah_text_pane_ParamLimits

0x7a82,	// (0x00075c57) main_radioblah_text_pane

0x7a94,	// (0x00075c69) main_radioblah_info_pane_g1_ParamLimits

0x7b2d,	// (0x00075d02) main_radioblah_info_pane_t4_ParamLimits

0x7b2d,	// (0x00075d02) main_radioblah_info_pane_t4

0x958b,	// (0x00077760) main_sp_fs_calendar_pane

0x85ae,	// (0x00076783) main_phacti_pane_g1

0x85b6,	// (0x0007678b) phacti_note_pane_ParamLimits

0x85b6,	// (0x0007678b) phacti_note_pane

0xe8e8,	// (0x0007cabd) phacti_term_pane_ParamLimits

0xe8e8,	// (0x0007cabd) phacti_term_pane

0xe8fd,	// (0x0007cad2) phacti_note_pane_t1_ParamLimits

0xe8fd,	// (0x0007cad2) phacti_note_pane_t1

0xa6cf,	// (0x000788a4) phacti_term_pane_g1

0xa6d7,	// (0x000788ac) phacti_term_pane_t1_ParamLimits

0xa6d7,	// (0x000788ac) phacti_term_pane_t1

0xe914,	// (0x0007cae9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91c,	// (0x0007caf1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007df8a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe924,	// (0x0007caf9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe924,	// (0x0007caf9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93a,	// (0x0007cb0f) aid_popup_sp_fs_bg_corner_pane

0xcc66,	// (0x0007ae3b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9532,	// (0x00077707) popup_sp_fs_calendar_preview_bg_pane

0xe942,	// (0x0007cb17) popup_sp_fs_calendar_preview_list_pane

0xc815,	// (0x0007a9ea) bg_main_sp_fs_cale_pane_ParamLimits

0xc815,	// (0x0007a9ea) bg_main_sp_fs_cale_pane

0xa70a,	// (0x000788df) listscroll_cale_mrui_pane_ParamLimits

0xa70a,	// (0x000788df) listscroll_cale_mrui_pane

0xa71f,	// (0x000788f4) listscroll_sp_fs_schedule_track_pane

0xa728,	// (0x000788fd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa728,	// (0x000788fd) main_sp_fs_ctrlbar_pane_cp01

0xe94a,	// (0x0007cb1f) main_sp_fs_ribbon_pane

0xa73b,	// (0x00078910) popup_sp_fs_cale_preview_window

0x8627,	// (0x000767fc) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8627,	// (0x000767fc) list_single_sp_fs_schedule_track_pane

0x958b,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x958b,	// (0x00077760) bg_sp_fs_highlight_list_pane_cp03

0x863b,	// (0x00076810) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x863b,	// (0x00076810) list_single_sp_fs_schedule_track_pane_g1

0x8647,	// (0x0007681c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8647,	// (0x0007681c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007df8f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007df8f) list_single_sp_fs_schedule_track_pane_g

0x8653,	// (0x00076828) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8653,	// (0x00076828) list_single_sp_fs_schedule_track_pane_t1

0x8675,	// (0x0007684a) sp_fs_schedule_track_pane_ParamLimits

0x8675,	// (0x0007684a) sp_fs_schedule_track_pane

0xe952,	// (0x0007cb27) sp_fs_schedule_track_pane_g1

0xe95a,	// (0x0007cb2f) sp_fs_schedule_track_pane_g2

0xe962,	// (0x0007cb37) sp_fs_schedule_track_pane_g3

0xe96a,	// (0x0007cb3f) sp_fs_schedule_track_pane_g4

0xe972,	// (0x0007cb47) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007df94) sp_fs_schedule_track_pane_g

0xd67e,	// (0x0007b853) bg_sp_fs_schedule_viewer_highlight_g1

0xacd4,	// (0x00078ea9) bg_sp_fs_schedule_viewer_highlight_g2

0xd686,	// (0x0007b85b) bg_sp_fs_schedule_viewer_highlight_g3

0xd68e,	// (0x0007b863) bg_sp_fs_schedule_viewer_highlight_g4

0xd8a8,	// (0x0007ba7d) bg_sp_fs_schedule_viewer_highlight_g5

0xd69e,	// (0x0007b873) bg_sp_fs_schedule_viewer_highlight_g6

0xd6a6,	// (0x0007b87b) bg_sp_fs_schedule_viewer_highlight_g7

0xd6ae,	// (0x0007b883) bg_sp_fs_schedule_viewer_highlight_g8

0xacb4,	// (0x00078e89) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007df9f) bg_sp_fs_schedule_viewer_highlight_g

0x9532,	// (0x00077707) bg_main_sp_fs_ribbon_pane

0x868a,	// (0x0007685f) main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x0007cb4f) main_sp_fs_ribbon_pane_t1

0x8693,	// (0x00076868) main_sp_fs_ribbon_pane_t2

0xe989,	// (0x0007cb5e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007dfb2) main_sp_fs_ribbon_pane_t

0xe998,	// (0x0007cb6d) main_sp_fs_ribbon_scheduler_pane

0xe9a0,	// (0x0007cb75) bg_main_sp_fs_ribbon_pane_g1

0xe9a9,	// (0x0007cb7e) bg_main_sp_fs_ribbon_pane_g2

0xe9b2,	// (0x0007cb87) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007dfb9) bg_main_sp_fs_ribbon_pane_g

0xe9ba,	// (0x0007cb8f) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c3,	// (0x0007cb98) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cc,	// (0x0007cba1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007dfc0) main_sp_fs_ribbon_scheduler_pane_g

0xe9d5,	// (0x0007cbaa) list_cale_mrui_pane

0x86a2,	// (0x00076877) sp_fs_scroll_pane_cp07_ParamLimits

0x86a2,	// (0x00076877) sp_fs_scroll_pane_cp07

0x86be,	// (0x00076893) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86be,	// (0x00076893) bg_sp_fs_schedule_viewer_highlight

0xe9e2,	// (0x0007cbb7) list_single_sp_fs_schedule_track_pane_cp01

0xe9ea,	// (0x0007cbbf) list_sp_fs_schedule_track_pane

0xe9f2,	// (0x0007cbc7) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f2,	// (0x0007cbc7) sp_fs_scroll_pane_cp06

0xcc66,	// (0x0007ae3b) bgmain_sp_fs_calendar_pane_g1

0x86d0,	// (0x000768a5) list_single_cale_mrui_pane_ParamLimits

0x86d0,	// (0x000768a5) list_single_cale_mrui_pane

0xa74d,	// (0x00078922) list_single_cale_mrui_row_pane_ParamLimits

0xa74d,	// (0x00078922) list_single_cale_mrui_row_pane

0xa763,	// (0x00078938) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa763,	// (0x00078938) list_single_cale_mrui_row_pane_g1

0xa79b,	// (0x00078970) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa79b,	// (0x00078970) list_single_cale_mrui_row_pane_t1

0x86e5,	// (0x000768ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86e5,	// (0x000768ba) list_single_cale_mrui_row_pane_t2

0xa7ad,	// (0x00078982) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa7ad,	// (0x00078982) list_single_cale_mrui_row_pane_t3

0xa7dc,	// (0x000789b1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa7dc,	// (0x000789b1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007dfce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007dfce) list_single_cale_mrui_row_pane_t

0x874d,	// (0x00076922) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x874d,	// (0x00076922) list_single_cmail_header_editor_pane_bg_cp01

0x8773,	// (0x00076948) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8773,	// (0x00076948) list_single_cmail_header_editor_pane_bg_cp02

0x8793,	// (0x00076968) main_radioblah_text_pane_t1_ParamLimits

0x8793,	// (0x00076968) main_radioblah_text_pane_t1

0xea11,	// (0x0007cbe6) cam6_indi_pane_cp01

0xea19,	// (0x0007cbee) cam6_mode_pane_cp01

0xea21,	// (0x0007cbf6) cam6_pano_pane

0xea2a,	// (0x0007cbff) cam6_zoom_pane_cp01

0xea34,	// (0x0007cc09) cam6_pano_image_pane

0xea3d,	// (0x0007cc12) cam6_pano_pane_g1

0xe300,	// (0x0007c4d5) cam6_pano_pane_g2

0xea46,	// (0x0007cc1b) cam6_pano_pane_g3

0xea4f,	// (0x0007cc24) cam6_pano_pane_g4

0xd208,	// (0x0007b3dd) cam6_pano_pane_g5

0xea58,	// (0x0007cc2d) cam6_pano_pane_g6

0xea60,	// (0x0007cc35) cam6_pano_pane_g7

0xea68,	// (0x0007cc3d) cam6_pano_pane_g8

0xea71,	// (0x0007cc46) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007dfd7) cam6_pano_pane_g

0x9532,	// (0x00077707) main_browser_tag_pane

0xe8c9,	// (0x0007ca9e) grid_navstr_albumart_pane

0xea7c,	// (0x0007cc51) cell_navstr_albumart_pane_ParamLimits

0xea7c,	// (0x0007cc51) cell_navstr_albumart_pane

0xea9b,	// (0x0007cc70) cell_navstr_albumart_pane_g1

0xc622,	// (0x0007a7f7) cell_navstr_albumart_pane_g2

0xc632,	// (0x0007a807) cell_navstr_albumart_pane_g3

0xc62a,	// (0x0007a7ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007dfea) cell_navstr_albumart_pane_g

0x87ae,	// (0x00076983) bt_list_pane_ParamLimits

0x87ae,	// (0x00076983) bt_list_pane

0x87c4,	// (0x00076999) bt_list_pane_t1

0x87d3,	// (0x000769a8) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007dff3) bt_list_pane_t

0x9532,	// (0x00077707) main_cale_prevew_pane

0x87e2,	// (0x000769b7) popup_cale_preview_window_ParamLimits

0x87e2,	// (0x000769b7) popup_cale_preview_window

0x958b,	// (0x00077760) bg_popup_preview_window_pane_cp05_ParamLimits

0x958b,	// (0x00077760) bg_popup_preview_window_pane_cp05

0xeaa3,	// (0x0007cc78) list_cale_preview_pane_ParamLimits

0xeaa3,	// (0x0007cc78) list_cale_preview_pane

0x87ff,	// (0x000769d4) list_double_cale_preview_pane_ParamLimits

0x87ff,	// (0x000769d4) list_double_cale_preview_pane

0x8813,	// (0x000769e8) list_single_cale_preview_pane_ParamLimits

0x8813,	// (0x000769e8) list_single_cale_preview_pane

0x882b,	// (0x00076a00) list_single_cale_preview_pane_g1

0x8833,	// (0x00076a08) list_single_cale_preview_pane_t1_ParamLimits

0x8833,	// (0x00076a08) list_single_cale_preview_pane_t1

0x8848,	// (0x00076a1d) list_double_cale_preview_pane_g1

0x8850,	// (0x00076a25) list_double_cale_preview_pane_t1_ParamLimits

0x8850,	// (0x00076a25) list_double_cale_preview_pane_t1

0x8865,	// (0x00076a3a) list_double_cale_preview_pane_t2_ParamLimits

0x8865,	// (0x00076a3a) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007dff8) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007dff8) list_double_cale_preview_pane_t

0x9532,	// (0x00077707) main_ezdial_pane

0x958b,	// (0x00077760) main_sp_fs_email_pane_ParamLimits

0x7da6,	// (0x00075f7b) cmail_ddmenu_btn01_pane_ParamLimits

0x7da6,	// (0x00075f7b) cmail_ddmenu_btn01_pane

0x7db9,	// (0x00075f8e) cmail_ddmenu_btn02_pane_ParamLimits

0x7db9,	// (0x00075f8e) cmail_ddmenu_btn02_pane

0x7ddc,	// (0x00075fb1) cmail_ddmenu_btn03_pane_ParamLimits

0x7ddc,	// (0x00075fb1) cmail_ddmenu_btn03_pane

0x7e07,	// (0x00075fdc) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e2b,	// (0x00076000) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84a8,	// (0x0007667d) list_cmail_body_pane_ParamLimits

0xe849,	// (0x0007ca1e) bg_button_pane_cp12

0xe852,	// (0x0007ca27) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe852,	// (0x0007ca27) list_single_cmail_header_detail_pane_g3

0xa694,	// (0x00078869) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa694,	// (0x00078869) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007df7b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007df7b) list_single_cmail_header_detail_pane_t

0xa6ec,	// (0x000788c1) phacti_term_pane_t2_ParamLimits

0xa6ec,	// (0x000788c1) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007df85) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007df85) phacti_term_pane_t

0xeaaf,	// (0x0007cc84) aid_size_list_single_double

0x887d,	// (0x00076a52) popup_ezdial_listscroll_window

0x8899,	// (0x00076a6e) popup_number_entry_window_cp01

0xaa77,	// (0x00078c4c) bg_popup_call_pane_cp09

0xeabb,	// (0x0007cc90) ezdial_list_pane

0xeac3,	// (0x0007cc98) scroll_pane_cp23

0xc815,	// (0x0007a9ea) bg_button_pane_cp028_ParamLimits

0xc815,	// (0x0007a9ea) bg_button_pane_cp028

0x88a7,	// (0x00076a7c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88a7,	// (0x00076a7c) cmail_ddmenu_btn01_pane_g1

0x88b6,	// (0x00076a8b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88b6,	// (0x00076a8b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007dffd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007dffd) cmail_ddmenu_btn01_pane_g

0xeacb,	// (0x0007cca0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacb,	// (0x0007cca0) cmail_ddmenu_btn01_pane_t1

0xc815,	// (0x0007a9ea) bg_button_pane_cp029_ParamLimits

0xc815,	// (0x0007a9ea) bg_button_pane_cp029

0x88cc,	// (0x00076aa1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88cc,	// (0x00076aa1) cmail_ddmenu_btn02_pane_g1

0x88e7,	// (0x00076abc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88e7,	// (0x00076abc) cmail_ddmenu_btn02_pane_t1

0x958b,	// (0x00077760) bg_button_pane_cp031_ParamLimits

0x958b,	// (0x00077760) bg_button_pane_cp031

0x88cc,	// (0x00076aa1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88cc,	// (0x00076aa1) cmail_ddmenu_btn03_pane_g1

0x88e7,	// (0x00076abc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88e7,	// (0x00076abc) cmail_ddmenu_btn03_pane_t1

0x5642,	// (0x00073817) cell_dialer2_keypad_pane_t1_ParamLimits

0x565c,	// (0x00073831) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x565c,	// (0x00073831) cell_dialer2_keypad_pane_t1_copy1

0x75de,	// (0x000757b3) ncimui_group_button_pane

0x958b,	// (0x00077760) main_sp_fs_calendar_pane_ParamLimits

0xe82e,	// (0x0007ca03) list_single_cmail_header_caption_pane_ParamLimits

0xa701,	// (0x000788d6) aid_recal_txt_sm_pane

0x9532,	// (0x00077707) mian_recal_day_pane

0xa73b,	// (0x00078910) popup_sp_fs_cale_preview_window_ParamLimits

0xeae1,	// (0x0007ccb6) list_recal_day_pane

0xa827,	// (0x000789fc) list_single_recal_day_pane_ParamLimits

0xa827,	// (0x000789fc) list_single_recal_day_pane

0xeb08,	// (0x0007ccdd) list_single_recal_day_pane_g1_ParamLimits

0xeb08,	// (0x0007ccdd) list_single_recal_day_pane_g1

0xa839,	// (0x00078a0e) list_single_recal_day_pane_g2_ParamLimits

0xa839,	// (0x00078a0e) list_single_recal_day_pane_g2

0xa845,	// (0x00078a1a) list_single_recal_day_pane_g3_ParamLimits

0xa845,	// (0x00078a1a) list_single_recal_day_pane_g3

0x890e,	// (0x00076ae3) list_single_recal_day_pane_g4_ParamLimits

0x890e,	// (0x00076ae3) list_single_recal_day_pane_g4

0xa851,	// (0x00078a26) list_single_recal_day_pane_g5_ParamLimits

0xa851,	// (0x00078a26) list_single_recal_day_pane_g5

0xa85d,	// (0x00078a32) list_single_recal_day_pane_g6_ParamLimits

0xa85d,	// (0x00078a32) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007e00c) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007e00c) list_single_recal_day_pane_g

0xa871,	// (0x00078a46) list_single_recal_day_pane_t1

0xbbf4,	// (0x00079dc9) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007e017) list_single_recal_day_pane_t

0x8926,	// (0x00076afb) ncimui_query_button_pane_ParamLimits

0x8926,	// (0x00076afb) ncimui_query_button_pane

0x8936,	// (0x00076b0b) ncimui_query_button_pane_t1_ParamLimits

0x8936,	// (0x00076b0b) ncimui_query_button_pane_t1

0xeb14,	// (0x0007cce9) ncimui_query_button_pane_t2_ParamLimits

0xeb14,	// (0x0007cce9) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007e01c) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007e01c) ncimui_query_button_pane_t

0x8949,	// (0x00076b1e) query_button_pane_ParamLimits

0x8949,	// (0x00076b1e) query_button_pane

0x9532,	// (0x00077707) bg_button_pane_cp0028

0xeb27,	// (0x0007ccfc) query_button_pane_t1

0x360f,	// (0x000717e4) main_tport_pane_ParamLimits

0x8358,	// (0x0007652d) bg_popup_window_pane_cp01_ParamLimits

0x8358,	// (0x0007652d) bg_popup_window_pane_cp01

0x8373,	// (0x00076548) heading_pane_cp08_ParamLimits

0x8373,	// (0x00076548) heading_pane_cp08

0x8386,	// (0x0007655b) heading_pane_cp07_ParamLimits

0x8386,	// (0x0007655b) heading_pane_cp07

0x8437,	// (0x0007660c) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007df68) cell_tport_appsw_pane_g

0x2bb0,	// (0x00070d85) input_candi_list_open_g1

0xae88,	// (0x0007905d) list_cale_time_pane_g6_ParamLimits

0xae88,	// (0x0007905d) list_cale_time_pane_g6

0x4419,	// (0x000725ee) aid_size_touch_calib_1_ParamLimits

0x4419,	// (0x000725ee) aid_size_touch_calib_1

0x442b,	// (0x00072600) aid_size_touch_calib_2_ParamLimits

0x442b,	// (0x00072600) aid_size_touch_calib_2

0x4443,	// (0x00072618) aid_size_touch_calib_3_ParamLimits

0x4443,	// (0x00072618) aid_size_touch_calib_3

0x4461,	// (0x00072636) aid_size_touch_calib_4_ParamLimits

0x4461,	// (0x00072636) aid_size_touch_calib_4

0x4479,	// (0x0007264e) main_touch_calib_button_group_pane_ParamLimits

0x4479,	// (0x0007264e) main_touch_calib_button_group_pane

0x4491,	// (0x00072666) main_touch_calib_pane_g1_ParamLimits

0x44a3,	// (0x00072678) main_touch_calib_pane_g2_ParamLimits

0x44b5,	// (0x0007268a) main_touch_calib_pane_g3_ParamLimits

0x44c7,	// (0x0007269c) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007d926) main_touch_calib_pane_g_ParamLimits

0x44d9,	// (0x000726ae) main_touch_calib_pane_t1_ParamLimits

0x44f3,	// (0x000726c8) main_touch_calib_pane_t2_ParamLimits

0x450d,	// (0x000726e2) main_touch_calib_pane_t3_ParamLimits

0x4521,	// (0x000726f6) main_touch_calib_pane_t4_ParamLimits

0x4537,	// (0x0007270c) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007d92f) main_touch_calib_pane_t_ParamLimits

0xcf9e,	// (0x0007b173) list_single_fp_cale_pane_g3_ParamLimits

0xcf9e,	// (0x0007b173) list_single_fp_cale_pane_g3

0xa249,	// (0x0007841e) bg_button_pane_cp012_ParamLimits

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp03_ParamLimits

0x665f,	// (0x00074834) cell_vitu2_function_top_pane_g1_ParamLimits

0xa249,	// (0x0007841e) bg_vkb2_func_pane_cp04_ParamLimits

0x756c,	// (0x00075741) main_ncimui_button_group_pane_ParamLimits

0x756c,	// (0x00075741) main_ncimui_button_group_pane

0x75cc,	// (0x000757a1) main_ncimui_pane_t3_ParamLimits

0x75cc,	// (0x000757a1) main_ncimui_pane_t3

0xe8df,	// (0x0007cab4) phacti_button_group_pane

0xeaaf,	// (0x0007cc84) aid_size_list_single_double_ParamLimits

0x887d,	// (0x00076a52) popup_ezdial_listscroll_window_ParamLimits

0x8899,	// (0x00076a6e) popup_number_entry_window_cp01_ParamLimits

0x895c,	// (0x00076b31) phacti_button_pane_ParamLimits

0x895c,	// (0x00076b31) phacti_button_pane

0x9532,	// (0x00077707) bg_button_pane_cp14

0xeb35,	// (0x0007cd0a) phacti_button_pane_t1

0x896d,	// (0x00076b42) main_touch_calib_button_pane_ParamLimits

0x896d,	// (0x00076b42) main_touch_calib_button_pane

0xa8c1,	// (0x00078a96) bg_button_pane_cp18_ParamLimits

0xa8c1,	// (0x00078a96) bg_button_pane_cp18

0xeb43,	// (0x0007cd18) main_touch_calib_button_pane_t1_ParamLimits

0xeb43,	// (0x0007cd18) main_touch_calib_button_pane_t1

0xeb59,	// (0x0007cd2e) main_touch_calib_button_pane_t2_ParamLimits

0xeb59,	// (0x0007cd2e) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007e021) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007e021) main_touch_calib_button_pane_t

0x9532,	// (0x00077707) cell_ncimui_button_pane

0x9532,	// (0x00077707) bg_button_pane_cp032

0xeb77,	// (0x0007cd4c) cell_ncimui_button_pane_t1

0xa17c,	// (0x00078351) image3_infobar_pane_ParamLimits

0xa17c,	// (0x00078351) image3_infobar_pane

0x79a8,	// (0x00075b7d) fs_bigclock_status_pane_ParamLimits

0x79a8,	// (0x00075b7d) fs_bigclock_status_pane

0x79b5,	// (0x00075b8a) main_fs_bigclock_clock_pane_ParamLimits

0x79b5,	// (0x00075b8a) main_fs_bigclock_clock_pane

0x79df,	// (0x00075bb4) main_fs_bigclock_indi_pane_ParamLimits

0x79df,	// (0x00075bb4) main_fs_bigclock_indi_pane

0x7a1d,	// (0x00075bf2) main_fs_bigclock_swipe_pane_ParamLimits

0x7a1d,	// (0x00075bf2) main_fs_bigclock_swipe_pane

0x9532,	// (0x00077707) main_fs_clock_dumped_data

0xe40d,	// (0x0007c5e2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40d,	// (0x0007c5e2) list_single_fs_bigclock_indicator_pane_g1

0xe437,	// (0x0007c60c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe437,	// (0x0007c60c) list_single_fs_bigclock_indicator_pane_g2

0xe451,	// (0x0007c626) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe451,	// (0x0007c626) list_single_fs_bigclock_indicator_pane_g3

0xe46b,	// (0x0007c640) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe46b,	// (0x0007c640) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007de49) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007de49) list_single_fs_bigclock_indicator_pane_g

0xe496,	// (0x0007c66b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe496,	// (0x0007c66b) list_single_fs_bigclock_indicator_pane_t1

0xe4be,	// (0x0007c693) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4be,	// (0x0007c693) list_single_fs_bigclock_indicator_pane_t2

0xe4e6,	// (0x0007c6bb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e6,	// (0x0007c6bb) list_single_fs_bigclock_indicator_pane_t3

0xe50e,	// (0x0007c6e3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe50e,	// (0x0007c6e3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007de54) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007de54) list_single_fs_bigclock_indicator_pane_t

0xeb85,	// (0x0007cd5a) image3_infobar_fav_pane_ParamLimits

0xeb85,	// (0x0007cd5a) image3_infobar_fav_pane

0xeb95,	// (0x0007cd6a) image3_infobar_loc_pane_ParamLimits

0xeb95,	// (0x0007cd6a) image3_infobar_loc_pane

0xebab,	// (0x0007cd80) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0007cd80) image3_infobar_time_pane

0xcc66,	// (0x0007ae3b) image3_infobar_time_pane_g1

0xebbb,	// (0x0007cd90) image3_infobar_time_pane_t1

0xcc66,	// (0x0007ae3b) image3_infobar_loc_pane_g1

0xebc9,	// (0x0007cd9e) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007e026) image3_infobar_loc_pane_g

0xebd1,	// (0x0007cda6) image3_infobar_loc_pane_t1

0xcc66,	// (0x0007ae3b) image3_infobar_fav_pane_g1

0xebdf,	// (0x0007cdb4) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007e02b) image3_infobar_fav_pane_g

0xebe7,	// (0x0007cdbc) fs_bigclock_status_battery_pane

0xebf0,	// (0x0007cdc5) fs_bigclock_status_signal_pane

0xebf9,	// (0x0007cdce) fs_bigclock_status_title_pane

0xec02,	// (0x0007cdd7) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0007cde0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007e030) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0007cde8) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0007cdf1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007e035) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0007cdf9) fs_bigclock_status_title_pane_t1

0xcc66,	// (0x0007ae3b) main_fs_bigclock_clock_pane_g1

0xec32,	// (0x0007ce07) main_fs_bigclock_clock_pane_g2

0xec3d,	// (0x0007ce12) main_fs_bigclock_clock_pane_g3

0xec3d,	// (0x0007ce12) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007e03a) main_fs_bigclock_clock_pane_g

0xec49,	// (0x0007ce1e) main_fs_bigclock_clock_pane_t1

0x8982,	// (0x00076b57) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007e043) main_fs_bigclock_clock_pane_t

0x8991,	// (0x00076b66) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8991,	// (0x00076b66) list_single_fs_bigclock_indicator_pane

0x89a2,	// (0x00076b77) list_single_fs_bigclock_pane_ParamLimits

0x89a2,	// (0x00076b77) list_single_fs_bigclock_pane

0xec60,	// (0x0007ce35) main_fs_bigclock_indicator_pane_t1

0xec6f,	// (0x0007ce44) list_single_fs_bigclock_pane_g1

0xec77,	// (0x0007ce4c) list_single_fs_bigclock_pane_t1

0xcc66,	// (0x0007ae3b) main_fs_bigclock_swipe_pane_g1

0xecba,	// (0x0007ce8f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007e054) main_fs_bigclock_swipe_pane_g

0xecc2,	// (0x0007ce97) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc2,	// (0x0007ce97) main_fs_bigclock_swipe_pane_t1

0x2322,	// (0x000704f7) call_type_pane_ParamLimits

0x9532,	// (0x00077707) main_btmg_pane

0xa78f,	// (0x00078964) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa78f,	// (0x00078964) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007dfc7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007dfc7) list_single_cale_mrui_row_pane_g

0xa815,	// (0x000789ea) list_recal_vselct_arw_lo_pane

0xeb00,	// (0x0007ccd5) list_recal_vselct_arw_up_pane

0xa81d,	// (0x000789f2) list_recal_vselct_pane

0x8a05,	// (0x00076bda) btmg_button_pane

0x8a0f,	// (0x00076be4) main_btmg_pane_g1

0x9532,	// (0x00077707) bg_button_pane_cp044

0xecdf,	// (0x0007ceb4) btmg_button_pane_t1

0xc801,	// (0x0007a9d6) aid_listscroll_gen

0x958b,	// (0x00077760) main_cntbar_detail_pane

0xe80f,	// (0x0007c9e4) list_cmail_folder_pane

0xe81f,	// (0x0007c9f4) sp_fs_scroll_pane_cp03_ParamLimits

0x8a19,	// (0x00076bee) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a19,	// (0x00076bee) list_single_fs_dyc_pane_cp01

0xeced,	// (0x0007cec2) aid_size_cmail_indent

0xbc06,	// (0x00079ddb) list_single_dyc_row_pane_cp01

0x8a64,	// (0x00076c39) cntbar_detail_list_pane_ParamLimits

0x8a64,	// (0x00076c39) cntbar_detail_list_pane

0x8ab6,	// (0x00076c8b) main_cntbar_detail_cont_pane_ParamLimits

0x8ab6,	// (0x00076c8b) main_cntbar_detail_cont_pane

0x2245,	// (0x0007041a) scroll_pane_cp032_ParamLimits

0x2245,	// (0x0007041a) scroll_pane_cp032

0x8aca,	// (0x00076c9f) cntbar_detail_list_event_pane_ParamLimits

0x8aca,	// (0x00076c9f) cntbar_detail_list_event_pane

0x8a76,	// (0x00076c4b) cntbar_detail_list_shct_pane

0xad22,	// (0x00078ef7) aid_list_gen

0xecf6,	// (0x0007cecb) aid_scroll

0xecff,	// (0x0007ced4) aid_size_touch_scroll_bar

0x6d64,	// (0x00074f39) aid_list_double

0xed08,	// (0x0007cedd) aid_list_single

0x6d52,	// (0x00074f27) aid_list_single_lg

0xbc0f,	// (0x00079de4) aid_list_z_g_a_sm

0xbc17,	// (0x00079dec) aid_list_z_g_d

0x8ada,	// (0x00076caf) aid_txt_z_prm

0x8aea,	// (0x00076cbf) aid_txt_z_prm_cp01

0x8af8,	// (0x00076ccd) aid_txt_z_sec

0x8b06,	// (0x00076cdb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b06,	// (0x00076cdb) main_cntbar_detail_cont_pane_g1

0x8b1a,	// (0x00076cef) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b1a,	// (0x00076cef) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007e059) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007e059) main_cntbar_detail_cont_pane_g

0xed11,	// (0x0007cee6) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x0007cef4) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x0007cf02) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007e05e) main_cntbar_detail_cont_pane_t

0x8b2a,	// (0x00076cff) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b2a,	// (0x00076cff) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x0007cf10) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x0007cf19) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007e065) cntbar_detail_list_shct_pane_g

0x8b3c,	// (0x00076d11) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b3c,	// (0x00076d11) cntbar_detail_list_event_pane_g1

0x8b48,	// (0x00076d1d) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b48,	// (0x00076d1d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007e06a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007e06a) cntbar_detail_list_event_pane_g

0x8bb6,	// (0x00076d8b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bb6,	// (0x00076d8b) cntbar_detail_list_event_pane_t1

0x8bcb,	// (0x00076da0) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bcb,	// (0x00076da0) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007e077) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007e077) cntbar_detail_list_event_pane_t

0xcc66,	// (0x0007ae3b) cell_cntbar_detail_list_shct_pane_g1

0x26c8,	// (0x0007089d) navi_pane_mv_g3

0x958b,	// (0x00077760) main_cntbar_detail_pane_ParamLimits

0x9532,	// (0x00077707) main_notif_wgt_pane

0x9f94,	// (0x00078169) aid_tch_main_mp4_pane_g4

0xa172,	// (0x00078347) popup_slider_window_cp02

0xa80b,	// (0x000789e0) list_recal_day_event_pane

0x8a34,	// (0x00076c09) cntbar_detail_btn_pane_ParamLimits

0x8a34,	// (0x00076c09) cntbar_detail_btn_pane

0x8a4c,	// (0x00076c21) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a4c,	// (0x00076c21) cntbar_detail_btn_pane_cp01

0x8a76,	// (0x00076c4b) cntbar_detail_list_shct_pane_ParamLimits

0x8a86,	// (0x00076c5b) cntbar_detail_pane_g1_ParamLimits

0x8a86,	// (0x00076c5b) cntbar_detail_pane_g1

0x8a9a,	// (0x00076c6f) cntbar_detail_pane_t1_ParamLimits

0x8a9a,	// (0x00076c6f) cntbar_detail_pane_t1

0x8b54,	// (0x00076d29) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b54,	// (0x00076d29) cntbar_detail_list_event_pane_g3

0x8b6c,	// (0x00076d41) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b6c,	// (0x00076d41) cntbar_detail_list_event_pane_g4

0x8b84,	// (0x00076d59) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b84,	// (0x00076d59) cntbar_detail_list_event_pane_g5

0x8b9c,	// (0x00076d71) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b9c,	// (0x00076d71) cntbar_detail_list_event_pane_g6

0x8be0,	// (0x00076db5) cntbar_detail_list_event_pane_t3_ParamLimits

0x8be0,	// (0x00076db5) cntbar_detail_list_event_pane_t3

0x8bf2,	// (0x00076dc7) popup_notif_wgt_window_ParamLimits

0x8bf2,	// (0x00076dc7) popup_notif_wgt_window

0x8c0b,	// (0x00076de0) popup_submenu_window_cp01_ParamLimits

0x8c0b,	// (0x00076de0) popup_submenu_window_cp01

0xaa77,	// (0x00078c4c) bg_popup_window_pane_cp10

0xed4d,	// (0x0007cf22) listscroll_notif_wgt_pane

0xed5f,	// (0x0007cf34) list_notif_wgt_window

0xed68,	// (0x0007cf3d) scroll_pane_cp033

0x8c1f,	// (0x00076df4) list_notif_wgt_row_pane_ParamLimits

0x8c1f,	// (0x00076df4) list_notif_wgt_row_pane

0xed71,	// (0x0007cf46) aid_size_list_notif_wgt_del

0xed7e,	// (0x0007cf53) list_notif_wgt_row_pane_g1

0xed8a,	// (0x0007cf5f) list_notif_wgt_row_pane_g2

0xed9e,	// (0x0007cf73) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007e07e) list_notif_wgt_row_pane_g

0xedab,	// (0x0007cf80) list_notif_wgt_row_pane_t1

0xedc1,	// (0x0007cf96) list_notif_wgt_row_pane_t2

0xedd3,	// (0x0007cfa8) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007e085) list_notif_wgt_row_pane_t

0xd8c2,	// (0x0007ba97) list_recal_day_event_pane_g1

0xede5,	// (0x0007cfba) list_recal_day_event_pane_t1

0x9532,	// (0x00077707) bg_button_pane_cp045

0xedf4,	// (0x0007cfc9) cntbar_detail_btn_pane_t1

0xc815,	// (0x0007a9ea) main_callh_pane_ParamLimits

0xc815,	// (0x0007a9ea) main_callh_pane

0x9532,	// (0x00077707) main_coverflow0_pane

0x9532,	// (0x00077707) main_wgtman_pane

0x7a35,	// (0x00075c0a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a35,	// (0x00075c0a) main_fs_bigclock_unlock_btn_pane

0x842f,	// (0x00076604) bg_button_pane_cp16

0x843f,	// (0x00076614) cell_tport_appsw_pane_g3

0x8c2f,	// (0x00076e04) cf0_flow_pane_ParamLimits

0x8c2f,	// (0x00076e04) cf0_flow_pane

0xee02,	// (0x0007cfd7) listscroll_cf0_pane

0xee0d,	// (0x0007cfe2) main_cf0_pane_g1

0x8c44,	// (0x00076e19) main_cf0_pane_t1_ParamLimits

0x8c44,	// (0x00076e19) main_cf0_pane_t1

0x8c5b,	// (0x00076e30) main_cf0_pane_t2_ParamLimits

0x8c5b,	// (0x00076e30) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007e091) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007e091) main_cf0_pane_t

0xee1f,	// (0x0007cff4) scroll_pane_cp11

0x8c72,	// (0x00076e47) cf0_flow_pane_g1

0x8c7e,	// (0x00076e53) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007e096) cf0_flow_pane_g

0x8c8a,	// (0x00076e5f) cf0_flow_pane_t1

0x9532,	// (0x00077707) main_call6_pane

0x9532,	// (0x00077707) main_calllock_pane

0x8c9c,	// (0x00076e71) call6_btn_grp_pane_ParamLimits

0x8c9c,	// (0x00076e71) call6_btn_grp_pane

0x8cb6,	// (0x00076e8b) call6_pane_g1_ParamLimits

0x8cb6,	// (0x00076e8b) call6_pane_g1

0x8ccc,	// (0x00076ea1) popup_call6_1st_window_ParamLimits

0x8ccc,	// (0x00076ea1) popup_call6_1st_window

0x8cdd,	// (0x00076eb2) popup_call6_2nd_window_ParamLimits

0x8cdd,	// (0x00076eb2) popup_call6_2nd_window

0x8cee,	// (0x00076ec3) cell_call6_btn_pane_ParamLimits

0x8cee,	// (0x00076ec3) cell_call6_btn_pane

0xaa77,	// (0x00078c4c) bg_popup_call2_in_pane_cp03

0xee2a,	// (0x0007cfff) popup_call6_1st_window_g1

0xee32,	// (0x0007d007) popup_call6_1st_window_g2

0xee3a,	// (0x0007d00f) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007e09b) popup_call6_1st_window_g

0xee42,	// (0x0007d017) popup_call6_1st_window_t1

0xee51,	// (0x0007d026) popup_call6_1st_window_t2

0xee61,	// (0x0007d036) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007e0a2) popup_call6_1st_window_t

0xaa77,	// (0x00078c4c) bg_popup_call2_in_pane_cp04

0xee2a,	// (0x0007cfff) popup_call6_2nd_window_g1

0xee32,	// (0x0007d007) popup_call6_2nd_window_g2

0xee3a,	// (0x0007d00f) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007e09b) popup_call6_2nd_window_g

0xee42,	// (0x0007d017) popup_call6_2nd_window_t1

0x9532,	// (0x00077707) bg_button_pane_cp15

0xee71,	// (0x0007d046) cell_call6_btn_pane_g1

0xee7a,	// (0x0007d04f) cell_call6_btn_pane_t1

0x8d02,	// (0x00076ed7) listscroll_wgtman_pane_ParamLimits

0x8d02,	// (0x00076ed7) listscroll_wgtman_pane

0x8d23,	// (0x00076ef8) wgtman_btn_pane_ParamLimits

0x8d23,	// (0x00076ef8) wgtman_btn_pane

0xb273,	// (0x00079448) aid_scroll_copy1

0xee89,	// (0x0007d05e) list_wgtman_pane

0x8d66,	// (0x00076f3b) wgtman_btn_pane_g1_ParamLimits

0x8d66,	// (0x00076f3b) wgtman_btn_pane_g1

0x8d92,	// (0x00076f67) wgtman_btn_pane_t1_ParamLimits

0x8d92,	// (0x00076f67) wgtman_btn_pane_t1

0xee93,	// (0x0007d068) wgtman_btn_pane_t2_ParamLimits

0xee93,	// (0x0007d068) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007e0a9) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007e0a9) wgtman_btn_pane_t

0x8dcf,	// (0x00076fa4) listrow_wgtman_pane_ParamLimits

0x8dcf,	// (0x00076fa4) listrow_wgtman_pane

0x8de1,	// (0x00076fb6) listrow_wgtman_pane_g1

0x8dee,	// (0x00076fc3) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007e0ae) listrow_wgtman_pane_g

0x8e0c,	// (0x00076fe1) listrow_wgtman_pane_t1

0x8e24,	// (0x00076ff9) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007e0b3) listrow_wgtman_pane_t

0x8e4a,	// (0x0007701f) wait_bar_pane_cp09

0xeeaa,	// (0x0007d07f) main_calllock_btn_pane

0xeeb4,	// (0x0007d089) main_calllock_pane_g1

0x9532,	// (0x00077707) bg_button_pane_cp17

0xeec0,	// (0x0007d095) main_calllock_btn_pane_g1

0xeec9,	// (0x0007d09e) main_calllock_btn_pane_t1

0x9532,	// (0x00077707) main_dialer3_pane

0x9532,	// (0x00077707) main_fmrd2_pane

0xcc66,	// (0x0007ae3b) main_fs_bigclock_unlock_btn_pane_g1

0xeee0,	// (0x0007d0b5) main_fs_bigclock_unlock_btn_pane_t1

0x8e5c,	// (0x00077031) area_fmrd2_info_pane_ParamLimits

0x8e5c,	// (0x00077031) area_fmrd2_info_pane

0x8e6b,	// (0x00077040) area_fmrd2_visual_pane_ParamLimits

0x8e6b,	// (0x00077040) area_fmrd2_visual_pane

0x8e79,	// (0x0007704e) fmrd2_indi_pane_ParamLimits

0x8e79,	// (0x0007704e) fmrd2_indi_pane

0x8e86,	// (0x0007705b) area_fmrd2_visual_pane_g1

0x8e8e,	// (0x00077063) area_fmrd2_visual_pane_t1

0x8e9e,	// (0x00077073) area_fmrd2_visual_pane_t2

0x8eae,	// (0x00077083) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007e0bd) area_fmrd2_visual_pane_t

0x8ebe,	// (0x00077093) area_fmrd2_info_pane_g1

0x8ec6,	// (0x0007709b) area_fmrd2_info_pane_t1

0x8ed6,	// (0x000770ab) area_fmrd2_info_pane_t2

0x8ee6,	// (0x000770bb) area_fmrd2_info_pane_t3

0x8ef6,	// (0x000770cb) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007e0c4) area_fmrd2_info_pane_t

0x8f06,	// (0x000770db) fmrd2_indi_pane_t1

0x8f16,	// (0x000770eb) fmrd2_indi_pane_t2

0x8f26,	// (0x000770fb) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007e0cd) fmrd2_indi_pane_t

0xe47a,	// (0x0007c64f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe47a,	// (0x0007c64f) list_single_fs_bigclock_indicator_pane_g5

0xe52a,	// (0x0007c6ff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe52a,	// (0x0007c6ff) list_single_fs_bigclock_indicator_pane_t5

0x85ca,	// (0x0007679f) aid_cell_bcale_month_pane_ParamLimits

0x85ca,	// (0x0007679f) aid_cell_bcale_month_pane

0x85e8,	// (0x000767bd) bcale_month_pane_ParamLimits

0x85e8,	// (0x000767bd) bcale_month_pane

0x860a,	// (0x000767df) bcale_preview_pane_ParamLimits

0x860a,	// (0x000767df) bcale_preview_pane

0xec77,	// (0x0007ce4c) list_single_fs_bigclock_pane_t1_ParamLimits

0xec96,	// (0x0007ce6b) list_single_fs_bigclock_pane_t2_ParamLimits

0xec96,	// (0x0007ce6b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007e04f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007e04f) list_single_fs_bigclock_pane_t

0xeed8,	// (0x0007d0ad) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007e0b8) main_fs_bigclock_unlock_btn_pane_g

0x8f36,	// (0x0007710b) aid_dia3_key_size_ParamLimits

0x8f36,	// (0x0007710b) aid_dia3_key_size

0x8f45,	// (0x0007711a) aid_dia3_listrow_size_ParamLimits

0x8f45,	// (0x0007711a) aid_dia3_listrow_size

0x8f5a,	// (0x0007712f) dia3_keypad_fun_pane_ParamLimits

0x8f5a,	// (0x0007712f) dia3_keypad_fun_pane

0x8f76,	// (0x0007714b) dia3_keypad_num_pane_ParamLimits

0x8f76,	// (0x0007714b) dia3_keypad_num_pane

0x8f8f,	// (0x00077164) dia3_listscroll_pane_ParamLimits

0x8f8f,	// (0x00077164) dia3_listscroll_pane

0x8fa2,	// (0x00077177) dia3_numentry_pane_ParamLimits

0x8fa2,	// (0x00077177) dia3_numentry_pane

0xeeee,	// (0x0007d0c3) dia3_list_pane

0xeef9,	// (0x0007d0ce) scroll_pane_cp12

0x9532,	// (0x00077707) bg_dia3_numentry_pane

0x8fb6,	// (0x0007718b) dia3_numentry_pane_t1

0x8fc5,	// (0x0007719a) cell_dia3_key_num_pane

0x8fcd,	// (0x000771a2) cell_dia3_key0_fun_pane_ParamLimits

0x8fcd,	// (0x000771a2) cell_dia3_key0_fun_pane

0x8fe1,	// (0x000771b6) cell_dia3_key1_fun_pane_ParamLimits

0x8fe1,	// (0x000771b6) cell_dia3_key1_fun_pane

0x8ff9,	// (0x000771ce) dia3_listrow_pane

0xe158,	// (0x0007c32d) bg_dia3_numentry_pane_g1

0x9532,	// (0x00077707) bg_button_pane_cp21

0xef04,	// (0x0007d0d9) cell_dia3_key_num_pane_t1

0xef12,	// (0x0007d0e7) cell_dia3_key_num_pane_t2

0xef21,	// (0x0007d0f6) cell_dia3_key_num_pane_t3

0xef30,	// (0x0007d105) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007e0d4) cell_dia3_key_num_pane_t

0x9532,	// (0x00077707) bg_button_pane_cp19

0x900b,	// (0x000771e0) cell_dia3_key0_fun_pane_g1

0x9532,	// (0x00077707) bg_button_pane_cp20

0x9013,	// (0x000771e8) cell_dia3_key1_fun_pane_g1

0x901b,	// (0x000771f0) area_left_week_number_pane

0x9029,	// (0x000771fe) area_top_day_name_pane

0x903c,	// (0x00077211) frame_month_view_pane

0xef3f,	// (0x0007d114) grid_month_view_pane

0x9051,	// (0x00077226) cell_top_day_name_pane_ParamLimits

0x9051,	// (0x00077226) cell_top_day_name_pane

0x9080,	// (0x00077255) cell_area_left_week_number_pane_ParamLimits

0x9080,	// (0x00077255) cell_area_left_week_number_pane

0x9094,	// (0x00077269) cell_month_view_pane_ParamLimits

0x9094,	// (0x00077269) cell_month_view_pane

0xef4d,	// (0x0007d122) frm_month_g1

0x90c3,	// (0x00077298) frm_month_g2

0x90d6,	// (0x000772ab) frm_month_g3

0x90e9,	// (0x000772be) frm_month_g4

0x90fc,	// (0x000772d1) frm_month_g5

0x910f,	// (0x000772e4) frm_month_g6

0x9122,	// (0x000772f7) frm_month_g7

0xef5a,	// (0x0007d12f) frm_month_g8

0x9137,	// (0x0007730c) frm_month_g9

0x9147,	// (0x0007731c) frm_month_g10

0x9157,	// (0x0007732c) frm_month_g11

0x9167,	// (0x0007733c) frm_month_g12

0x9179,	// (0x0007734e) frm_month_g13

0x918d,	// (0x00077362) frm_month_g14

0x91a1,	// (0x00077376) frm_month_g15

0x91b5,	// (0x0007738a) frm_month_g16

0x000f,

0xff08,	// (0x0007e0dd) frm_month_g

0xef67,	// (0x0007d13c) cell_top_day_name_pane_t1

0x91c9,	// (0x0007739e) cell_area_left_week_number_pane_g1

0x91d5,	// (0x000773aa) cell_area_left_week_number_pane_t1

0xce96,	// (0x0007b06b) cell_month_view_pane_g1

0x91e8,	// (0x000773bd) cell_month_view_pane_t1

0x9532,	// (0x00077707) main_fps_pane

0xe6ff,	// (0x0007c8d4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ff,	// (0x0007c8d4) cmail_ddmenu_btn02_pane_cp1

0xe71b,	// (0x0007c8f0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe71b,	// (0x0007c8f0) cmail_ddmenu_btn02_pane_cp2

0x88db,	// (0x00076ab0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88db,	// (0x00076ab0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007e002) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007e002) cmail_ddmenu_btn02_pane_g

0x88fc,	// (0x00076ad1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88fc,	// (0x00076ad1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007e007) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007e007) cmail_ddmenu_btn02_pane_t

0x91fb,	// (0x000773d0) fps_text_pane_ParamLimits

0x91fb,	// (0x000773d0) fps_text_pane

0x9212,	// (0x000773e7) main_fps_pane_g1_ParamLimits

0x9212,	// (0x000773e7) main_fps_pane_g1

0x922a,	// (0x000773ff) wait_bar_pane_cp010_ParamLimits

0x922a,	// (0x000773ff) wait_bar_pane_cp010

0x923d,	// (0x00077412) fps_text_pane_t1_ParamLimits

0x923d,	// (0x00077412) fps_text_pane_t1

0xe2d1,	// (0x0007c4a6) cam4_image_uncrop_pane_g1

0xe2da,	// (0x0007c4af) cam4_image_uncrop_pane_g2

0x5b2e,	// (0x00073d03) cam4_image_uncrop_pane_g3

0x5b37,	// (0x00073d0c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007dac3) cam4_image_uncrop_pane_g

0x8ff9,	// (0x000771ce) dia3_listrow_pane_ParamLimits

0x9532,	// (0x00077707) main_phob2_pane

0x83fe,	// (0x000765d3) cell_tport_appsw_pane_cp02_ParamLimits

0x83fe,	// (0x000765d3) cell_tport_appsw_pane_cp02

0x8412,	// (0x000765e7) cell_tport_appsw_pane_cp03_ParamLimits

0x8412,	// (0x000765e7) cell_tport_appsw_pane_cp03

0x9532,	// (0x00077707) phob2_contact_card_pane

0x9532,	// (0x00077707) phob2_listscroll_pane

0xef7a,	// (0x0007d14f) phob2_list_pane

0xef82,	// (0x0007d157) scroll_pane_cp034

0x9255,	// (0x0007742a) phob2_cc_data_pane_ParamLimits

0x9255,	// (0x0007742a) phob2_cc_data_pane

0x9276,	// (0x0007744b) phob2_cc_listscroll_pane_ParamLimits

0x9276,	// (0x0007744b) phob2_cc_listscroll_pane

0x9298,	// (0x0007746d) list_double_large_graphic_phob2_pane_ParamLimits

0x9298,	// (0x0007746d) list_double_large_graphic_phob2_pane

0x92ac,	// (0x00077481) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92ac,	// (0x00077481) list_double_large_graphic_phob2_pane_g1

0x92c2,	// (0x00077497) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92c2,	// (0x00077497) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007e0fe) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007e0fe) list_double_large_graphic_phob2_pane_g

0x92ce,	// (0x000774a3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92ce,	// (0x000774a3) list_double_large_graphic_phob2_pane_t1

0x92e3,	// (0x000774b8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92e3,	// (0x000774b8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007e103) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007e103) list_double_large_graphic_phob2_pane_t

0x9532,	// (0x00077707) list_highlight_pane_cp024

0x92f5,	// (0x000774ca) phob2_cc_button_pane

0x92fd,	// (0x000774d2) phob2_cc_data_pane_g1_ParamLimits

0x92fd,	// (0x000774d2) phob2_cc_data_pane_g1

0x9313,	// (0x000774e8) phob2_cc_data_pane_g2_ParamLimits

0x9313,	// (0x000774e8) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007e108) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007e108) phob2_cc_data_pane_g

0x9323,	// (0x000774f8) phob2_cc_data_pane_t1_ParamLimits

0x9323,	// (0x000774f8) phob2_cc_data_pane_t1

0x933b,	// (0x00077510) phob2_cc_data_pane_t2_ParamLimits

0x933b,	// (0x00077510) phob2_cc_data_pane_t2

0x9355,	// (0x0007752a) phob2_cc_data_pane_t3_ParamLimits

0x9355,	// (0x0007752a) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007e10d) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007e10d) phob2_cc_data_pane_t

0xef8a,	// (0x0007d15f) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x0007d15f) phob2_cc_list_pane

0xd959,	// (0x0007bb2e) scroll_pane_cp035_ParamLimits

0xd959,	// (0x0007bb2e) scroll_pane_cp035

0x958b,	// (0x00077760) bg_button_pane_cp033

0xef96,	// (0x0007d16b) phob2_cc_button_pane_g1

0xefa2,	// (0x0007d177) phob2_cc_button_pane_t1

0xefb7,	// (0x0007d18c) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007e114) phob2_cc_button_pane_t

0x936f,	// (0x00077544) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x936f,	// (0x00077544) list_double_large_graphic_phob2_cc_pane

0x9383,	// (0x00077558) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9383,	// (0x00077558) list_double_large_graphic_phob2_cc_pane_g1

0x938f,	// (0x00077564) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x938f,	// (0x00077564) list_double_large_graphic_phob2_cc_pane_g2

0x939b,	// (0x00077570) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x939b,	// (0x00077570) list_double_large_graphic_phob2_cc_pane_g3

0x93a7,	// (0x0007757c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93a7,	// (0x0007757c) list_double_large_graphic_phob2_cc_pane_g4

0x93b3,	// (0x00077588) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93b3,	// (0x00077588) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007e119) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007e119) list_double_large_graphic_phob2_cc_pane_g

0x93bf,	// (0x00077594) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93bf,	// (0x00077594) list_double_large_graphic_phob2_cc_pane_t1

0x93e8,	// (0x000775bd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93e8,	// (0x000775bd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007e124) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007e124) list_double_large_graphic_phob2_cc_pane_t

0xefc9,	// (0x0007d19e) list_highlight_pane_cp025_ParamLimits

0xefc9,	// (0x0007d19e) list_highlight_pane_cp025

0x958b,	// (0x00077760) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x0007d16b) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x0007d177) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x0007d18c) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007e114) phob2_cc_button_pane_t_ParamLimits

0xfe75,	// (0x0006e04a) popup_wgtman_window

0xd79c,	// (0x0007b971) scroll_pane_cp038

0x8d48,	// (0x00076f1d) wgtman_btn_pane_cp_01_ParamLimits

0x8d48,	// (0x00076f1d) wgtman_btn_pane_cp_01

0xefd7,	// (0x0007d1ac) wgtman_content_pane

0xefe0,	// (0x0007d1b5) wgtman_heading_pane

0x9532,	// (0x00077707) bg_heading_pane_cp02

0xefe9,	// (0x0007d1be) wgtman_heading_pane_g1

0xeff1,	// (0x0007d1c6) wgtman_heading_pane_t1

0xefff,	// (0x0007d1d4) scroll_pane_cp036

0xf007,	// (0x0007d1dc) wgtman_list_pane

0xf00f,	// (0x0007d1e4) wgtman_list_pane_t1_ParamLimits

0xf00f,	// (0x0007d1e4) wgtman_list_pane_t1

0xa1d0,	// (0x000783a5) cam4_grid_pane

0x684c,	// (0x00074a21) bg_button_pane_cp015_ParamLimits

0x6860,	// (0x00074a35) bg_button_pane_cp016_ParamLimits

0x6873,	// (0x00074a48) bg_button_pane_cp017_ParamLimits

0x68cb,	// (0x00074aa0) popup_vitu2_query_window_g3_ParamLimits

0x68cb,	// (0x00074aa0) popup_vitu2_query_window_g3

0x6988,	// (0x00074b5d) popup_vitu2_query_window_t6_ParamLimits

0x6988,	// (0x00074b5d) popup_vitu2_query_window_t6

0x69b3,	// (0x00074b88) popup_vitu2_query_window_t7_ParamLimits

0x69b3,	// (0x00074b88) popup_vitu2_query_window_t7

0xe2d1,	// (0x0007c4a6) cam4_grid_pane_g1

0xe2da,	// (0x0007c4af) cam4_grid_pane_g2

0xf029,	// (0x0007d1fe) cam4_grid_pane_g3

0xf032,	// (0x0007d207) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007e129) cam4_grid_pane_g

0x1092,	// (0x0006f267) aid_placing_vt_slider_lsc_ParamLimits

0x137f,	// (0x0006f554) vidtel_button_pane_ParamLimits

0x137f,	// (0x0006f554) vidtel_button_pane

0xf03d,	// (0x0007d212) bg_button_pane_cp034

0x9411,	// (0x000775e6) vidtel_button_pane_g1

0xf047,	// (0x0007d21c) vidtel_button_pane_t1

0xd8a0,	// (0x0007ba75) aid_size_vtel_slider_touch

0xd959,	// (0x0007bb2e) scroll_pane_cp039

0xe196,	// (0x0007c36b) ncim_query_button_pane_cp01_ParamLimits

0xe1b5,	// (0x0007c38a) ncimui_query_pane_g1_ParamLimits

0x958b,	// (0x00077760) input_focus_pane_cp012_ParamLimits

0xe1da,	// (0x0007c3af) ncim_query_entry_pane_t1_ParamLimits

0xd959,	// (0x0007bb2e) scroll_pane_cp039_ParamLimits

0x263a,	// (0x0007080f) navi_pane_bcale_mc_g1

0x2642,	// (0x00070817) navi_pane_bcale_mc_t1

0xe758,	// (0x0007c92d) main_sp_fs_email_pane_g1

0xe764,	// (0x0007c939) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007deba) main_sp_fs_email_pane_g

0xea04,	// (0x0007cbd9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea04,	// (0x0007cbd9) list_single_cale_mrui_row_pane_g3

0x891c,	// (0x00076af1) list_single_recal_day_pane_g5_event_pane

0xa869,	// (0x00078a3e) list_single_recal_day_pane_g7

0xf055,	// (0x0007d22a) list_recal_day_event_pane_cp01

0xf05e,	// (0x0007d233) list_recal_vselct_arw_lo_pane_cp01

0xf066,	// (0x0007d23b) list_recal_vselct_arw_up_pane_cp01

0xf06e,	// (0x0007d243) list_recal_vselct_pane_cp01

0xd8c2,	// (0x0007ba97) list_recal_day_event_pane_cp01_g1

0xbc1f,	// (0x00079df4) list_recal_day_event_pane_cp01_t1

0xa871,	// (0x00078a46) list_single_recal_day_pane_t1_ParamLimits

0xbbf4,	// (0x00079dc9) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007e017) list_single_recal_day_pane_t_ParamLimits

0x9c07,	// (0x00077ddc) bg_notes_pane_ParamLimits

0xa89f,	// (0x00078a74) list_notes_pane_ParamLimits

0x01c2,	// (0x0006e397) scroll_pane_cp06_ParamLimits

0xa8c1,	// (0x00078a96) main_notes_pane_ParamLimits

0x9532,	// (0x00077707) main_welc_pane

0x9419,	// (0x000775ee) main_welc_body_pane_ParamLimits

0x9419,	// (0x000775ee) main_welc_body_pane

0x9438,	// (0x0007760d) main_welc_opti_pane_ParamLimits

0x9438,	// (0x0007760d) main_welc_opti_pane

0x9481,	// (0x00077656) main_welc_pane_t1_ParamLimits

0x9481,	// (0x00077656) main_welc_pane_t1

0x94a3,	// (0x00077678) main_welc_body_row_pane_ParamLimits

0x94a3,	// (0x00077678) main_welc_body_row_pane

0x94b7,	// (0x0007768c) main_welc_opti_row_pane_ParamLimits

0x94b7,	// (0x0007768c) main_welc_opti_row_pane

0xf078,	// (0x0007d24d) main_welc_opti_row_pane_g1

0xf080,	// (0x0007d255) main_welc_opti_row_pane_t1

0xf08f,	// (0x0007d264) main_welc_body_row_pane_t1

0xed57,	// (0x0007cf2c) popup_notif_wgt_heading_pane

0xed71,	// (0x0007cf46) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x0007cf53) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x0007cf5f) list_notif_wgt_row_pane_g2_ParamLimits

0xed9e,	// (0x0007cf73) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007e07e) list_notif_wgt_row_pane_g_ParamLimits

0xedab,	// (0x0007cf80) list_notif_wgt_row_pane_t1_ParamLimits

0xedc1,	// (0x0007cf96) list_notif_wgt_row_pane_t2_ParamLimits

0xedd3,	// (0x0007cfa8) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007e085) list_notif_wgt_row_pane_t_ParamLimits

0x8de1,	// (0x00076fb6) listrow_wgtman_pane_g1_ParamLimits

0x8dee,	// (0x00076fc3) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007e0ae) listrow_wgtman_pane_g_ParamLimits

0x8e0c,	// (0x00076fe1) listrow_wgtman_pane_t1_ParamLimits

0x8e24,	// (0x00076ff9) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007e0b3) listrow_wgtman_pane_t_ParamLimits

0x8e4a,	// (0x0007701f) wait_bar_pane_cp09_ParamLimits

0x9532,	// (0x00077707) bg_popup_heading_pane_cp02

0xf09e,	// (0x0007d273) popup_notif_wgt_heading_pane_g1

0xf0a6,	// (0x0007d27b) popup_notif_wgt_heading_pane_t1

0x9532,	// (0x00077707) main_vids_pane

0x9532,	// (0x00077707) vids_listscroll_pane

0x94c7,	// (0x0007769c) scroll_pane_cp040

0x9532,	// (0x00077707) vids_list_pane

0x94d2,	// (0x000776a7) vids_list_double_pane_ParamLimits

0x94d2,	// (0x000776a7) vids_list_double_pane

0x94e3,	// (0x000776b8) vids_list_double_pane_g1

0x94ec,	// (0x000776c1) vids_list_double_pane_t1

0x94fc,	// (0x000776d1) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007e137) vids_list_double_pane_t

0x958b,	// (0x00077760) main_ncimui_pane_ParamLimits

0x7580,	// (0x00075755) main_ncimui_pane_g1_ParamLimits

0x758c,	// (0x00075761) main_ncimui_pane_g2_ParamLimits

0x758c,	// (0x00075761) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007ddbf) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007ddbf) main_ncimui_pane_g

0x9457,	// (0x0007762c) main_welc_pane_g1_ParamLimits

0x9457,	// (0x0007762c) main_welc_pane_g1

0x946c,	// (0x00077641) main_welc_pane_g2_ParamLimits

0x946c,	// (0x00077641) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007e132) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007e132) main_welc_pane_g

0x9c07,	// (0x00077ddc) listscroll_mce_pane_ParamLimits

0x271a,	// (0x000708ef) wait_bar_pane_cp10

0xc809,	// (0x0007a9de) main_cale_day_pane_ParamLimits

0xc809,	// (0x0007a9de) main_cale_week_pane_ParamLimits

0x9c07,	// (0x00077ddc) main_messa_pane_ParamLimits

0x4dec,	// (0x00072fc1) main_clock2_btn_pane_ParamLimits

0x4dec,	// (0x00072fc1) main_clock2_btn_pane

0xd026,	// (0x0007b1fb) main_clock2_btn_pane_cp01_ParamLimits

0xd026,	// (0x0007b1fb) main_clock2_btn_pane_cp01

0xe9d5,	// (0x0007cbaa) list_cale_mrui_pane_ParamLimits

0xee17,	// (0x0007cfec) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007e08c) main_cf0_pane_g

0x901b,	// (0x000771f0) area_left_week_number_pane_ParamLimits

0x9029,	// (0x000771fe) area_top_day_name_pane_ParamLimits

0x903c,	// (0x00077211) frame_month_view_pane_ParamLimits

0xef3f,	// (0x0007d114) grid_month_view_pane_ParamLimits

0xef4d,	// (0x0007d122) frm_month_g1_ParamLimits

0x90c3,	// (0x00077298) frm_month_g2_ParamLimits

0x90d6,	// (0x000772ab) frm_month_g3_ParamLimits

0x90e9,	// (0x000772be) frm_month_g4_ParamLimits

0x90fc,	// (0x000772d1) frm_month_g5_ParamLimits

0x910f,	// (0x000772e4) frm_month_g6_ParamLimits

0x9122,	// (0x000772f7) frm_month_g7_ParamLimits

0xef5a,	// (0x0007d12f) frm_month_g8_ParamLimits

0x9137,	// (0x0007730c) frm_month_g9_ParamLimits

0x9147,	// (0x0007731c) frm_month_g10_ParamLimits

0x9157,	// (0x0007732c) frm_month_g11_ParamLimits

0x9167,	// (0x0007733c) frm_month_g12_ParamLimits

0x9179,	// (0x0007734e) frm_month_g13_ParamLimits

0x918d,	// (0x00077362) frm_month_g14_ParamLimits

0x91a1,	// (0x00077376) frm_month_g15_ParamLimits

0x91b5,	// (0x0007738a) frm_month_g16_ParamLimits

0xff08,	// (0x0007e0dd) frm_month_g_ParamLimits

0xef67,	// (0x0007d13c) cell_top_day_name_pane_t1_ParamLimits

0x91c9,	// (0x0007739e) cell_area_left_week_number_pane_g1_ParamLimits

0x91d5,	// (0x000773aa) cell_area_left_week_number_pane_t1_ParamLimits

0xce96,	// (0x0007b06b) cell_month_view_pane_g1_ParamLimits

0x91e8,	// (0x000773bd) cell_month_view_pane_t1_ParamLimits

0x9bff,	// (0x00077dd4) main_clock2_btn_pane_g1

0xf0b4,	// (0x0007d289) main_clock2_btn_pane_t1

0x958b,	// (0x00077760) listscroll_cmail_pane_ParamLimits

0xe758,	// (0x0007c92d) main_sp_fs_email_pane_g1_ParamLimits

0xe764,	// (0x0007c939) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007deba) main_sp_fs_email_pane_g_ParamLimits

0xeae1,	// (0x0007ccb6) list_recal_day_pane_ParamLimits

0xeaf2,	// (0x0007ccc7) mian_recal_day_pane_t1

0x806b,	// (0x00076240) list_single_dyc_row_text_pane_t4_ParamLimits

0x806b,	// (0x00076240) list_single_dyc_row_text_pane_t4

0x80b4,	// (0x00076289) list_single_dyc_row_text_pane_t5_ParamLimits

0x80b4,	// (0x00076289) list_single_dyc_row_text_pane_t5

0xa5c9,	// (0x0007879e) list_single_dyc_row_text_pane_t6_ParamLimits

0xa5c9,	// (0x0007879e) list_single_dyc_row_text_pane_t6

0xae67,	// (0x0007903c) aid_mgn_list_cale_time_pane

0x958b,	// (0x00077760) main_gallery2_pane_ParamLimits

0xd03a,	// (0x0007b20f) main_clock2_pane_cp01_t1

0xd04a,	// (0x0007b21f) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007d999) main_clock2_pane_cp01_t

0x0641,	// (0x0006e816) cale_week_scroll_pane_g16_ParamLimits

0x0641,	// (0x0006e816) cale_week_scroll_pane_g16

0xaa77,	// (0x00078c4c) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
