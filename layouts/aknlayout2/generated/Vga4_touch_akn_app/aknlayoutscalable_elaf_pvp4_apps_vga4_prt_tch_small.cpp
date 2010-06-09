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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003e4c4 };

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
0x1f23,	// (0x000403e7) Screen

0x1f2f,	// (0x000403f3) application_window

0x1f6f,	// (0x00040433) area_bottom_pane_ParamLimits

0x1f6f,	// (0x00040433) area_bottom_pane

0x1fa4,	// (0x00040468) area_top_pane_ParamLimits

0x1fa4,	// (0x00040468) area_top_pane

0xa19b,	// (0x0004865f) call_video_uplink_pane_ParamLimits

0xa19b,	// (0x0004865f) call_video_uplink_pane

0x2033,	// (0x000404f7) main_pane_ParamLimits

0x2033,	// (0x000404f7) main_pane

0xc886,	// (0x0004ad4a) context_pane

0x571d,	// (0x00043be1) navi_pane

0x5741,	// (0x00043c05) popup_cale_events_window_ParamLimits

0x5741,	// (0x00043c05) popup_cale_events_window

0xc899,	// (0x0004ad5d) popup_mup_playback_window

0x5759,	// (0x00043c1d) signal_pane

0xa8ec,	// (0x00048db0) main_browser_pane

0xaad0,	// (0x00048f94) main_burst_pane

0x55cf,	// (0x00043a93) main_calc_pane

0xc829,	// (0x0004aced) main_cale_day_pane

0x274d,	// (0x00040c11) main_cale_month_pane

0xc829,	// (0x0004aced) main_cale_week_pane

0xaad0,	// (0x00048f94) main_call_pane

0xa5cc,	// (0x00048a90) main_call_poc_pane

0xaad0,	// (0x00048f94) main_camera_pane

0xaad0,	// (0x00048f94) main_chi_dic_pane

0xb29c,	// (0x00049760) main_clock_pane

0xa5cc,	// (0x00048a90) main_fmradio_pane

0xaad0,	// (0x00048f94) main_graph_messa_pane

0xa5cc,	// (0x00048a90) main_help_pane

0xa8ec,	// (0x00048db0) main_im_pane

0xa827,	// (0x00048ceb) main_image_pane_ParamLimits

0xa827,	// (0x00048ceb) main_image_pane

0xa5cc,	// (0x00048a90) main_location2_pane

0xaad0,	// (0x00048f94) main_location_pane

0xa827,	// (0x00048ceb) main_messa_pane

0xa5cc,	// (0x00048a90) main_mp2_pane

0xaad0,	// (0x00048f94) main_mp_pane

0xa5cc,	// (0x00048a90) main_msg_pane

0xa5cc,	// (0x00048a90) main_mup_eq_pane

0xa5cc,	// (0x00048a90) main_mup_pane

0xa8ec,	// (0x00048db0) main_notes_pane

0xa5cc,	// (0x00048a90) main_pec_pane

0xa5cc,	// (0x00048a90) main_phob_pane

0xa5cc,	// (0x00048a90) main_pinb_pane

0xa5cc,	// (0x00048a90) main_postcard_pane

0xa5cc,	// (0x00048a90) main_qdial_pane

0xaad0,	// (0x00048f94) main_skin_pane

0xa5cc,	// (0x00048a90) main_smil2_pane

0xaad0,	// (0x00048f94) main_smil_pane

0xaad0,	// (0x00048f94) main_video_pane

0xaad0,	// (0x00048f94) main_video_tele_pane

0xa827,	// (0x00048ceb) main_viewer_pane_ParamLimits

0xa827,	// (0x00048ceb) main_viewer_pane

0xaad0,	// (0x00048f94) main_vorec_pane

0x5607,	// (0x00043acb) popup_blid_sat_info_window_ParamLimits

0x5607,	// (0x00043acb) popup_blid_sat_info_window

0x5621,	// (0x00043ae5) popup_dyc_status_message_window_ParamLimits

0x5621,	// (0x00043ae5) popup_dyc_status_message_window

0x5631,	// (0x00043af5) popup_grid_large_graphic_window_ParamLimits

0x5631,	// (0x00043af5) popup_grid_large_graphic_window

0x56a9,	// (0x00043b6d) popup_loc_request_window_ParamLimits

0x56a9,	// (0x00043b6d) popup_loc_request_window

0x56f1,	// (0x00043bb5) popup_wml_address_window_ParamLimits

0x56f1,	// (0x00043bb5) popup_wml_address_window

0x54a7,	// (0x0004396b) call_muted_g1

0x5166,	// (0x0004362a) popup_call_audio_conf_window_ParamLimits

0x5166,	// (0x0004362a) popup_call_audio_conf_window

0x54b7,	// (0x0004397b) popup_call_audio_first_window_ParamLimits

0x54b7,	// (0x0004397b) popup_call_audio_first_window

0x54f7,	// (0x000439bb) popup_call_audio_in_window_ParamLimits

0x54f7,	// (0x000439bb) popup_call_audio_in_window

0x551b,	// (0x000439df) popup_call_audio_out_window_ParamLimits

0x551b,	// (0x000439df) popup_call_audio_out_window

0x553d,	// (0x00043a01) popup_call_audio_second_window_ParamLimits

0x553d,	// (0x00043a01) popup_call_audio_second_window

0x556d,	// (0x00043a31) popup_call_audio_wait_window_ParamLimits

0x556d,	// (0x00043a31) popup_call_audio_wait_window

0x558e,	// (0x00043a52) popup_number_entry_window_ParamLimits

0x558e,	// (0x00043a52) popup_number_entry_window

0xa1b9,	// (0x0004867d) bg_popup_call_pane_cp05_ParamLimits

0xa1b9,	// (0x0004867d) bg_popup_call_pane_cp05

0xa1d9,	// (0x0004869d) popup_number_entry_window_t1

0xa1ec,	// (0x000486b0) popup_number_entry_window_t2

0xa1fe,	// (0x000486c2) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004d58e) popup_number_entry_window_t

0xa210,	// (0x000486d4) text_title_cp2

0xa223,	// (0x000486e7) bg_popup_call_pane_cp_ParamLimits

0xa223,	// (0x000486e7) bg_popup_call_pane_cp

0xa231,	// (0x000486f5) call_thumbnail_pane

0xa239,	// (0x000486fd) popup_call_audio_in_window_g1_ParamLimits

0xa239,	// (0x000486fd) popup_call_audio_in_window_g1

0xa245,	// (0x00048709) popup_call_audio_in_window_g2_ParamLimits

0xa245,	// (0x00048709) popup_call_audio_in_window_g2

0xa251,	// (0x00048715) popup_call_audio_in_window_g3_ParamLimits

0xa251,	// (0x00048715) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004d597) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004d597) popup_call_audio_in_window_g

0xa25d,	// (0x00048721) popup_call_audio_in_window_t1_ParamLimits

0xa25d,	// (0x00048721) popup_call_audio_in_window_t1

0xa279,	// (0x0004873d) popup_call_audio_in_window_t2_ParamLimits

0xa279,	// (0x0004873d) popup_call_audio_in_window_t2

0xa295,	// (0x00048759) popup_call_audio_in_window_t3_ParamLimits

0xa295,	// (0x00048759) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004d59e) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004d59e) popup_call_audio_in_window_t

0xa223,	// (0x000486e7) bg_popup_call_pane_cp01_ParamLimits

0xa223,	// (0x000486e7) bg_popup_call_pane_cp01

0xa231,	// (0x000486f5) call_thumbnail_pane_cp02

0xa2a8,	// (0x0004876c) call_type_pane_cp022

0xa2b0,	// (0x00048774) popup_call_audio_out_window_g1_ParamLimits

0xa2b0,	// (0x00048774) popup_call_audio_out_window_g1

0xa2c2,	// (0x00048786) popup_call_audio_out_window_g2_ParamLimits

0xa2c2,	// (0x00048786) popup_call_audio_out_window_g2

0xa2ce,	// (0x00048792) popup_call_audio_out_window_g3_ParamLimits

0xa2ce,	// (0x00048792) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004d5a5) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004d5a5) popup_call_audio_out_window_g

0xa2e0,	// (0x000487a4) popup_call_audio_out_window_t1_ParamLimits

0xa2e0,	// (0x000487a4) popup_call_audio_out_window_t1

0xa2f8,	// (0x000487bc) popup_call_audio_out_window_t2_ParamLimits

0xa2f8,	// (0x000487bc) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004d5ac) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004d5ac) popup_call_audio_out_window_t

0xa30d,	// (0x000487d1) bg_popup_call_pane_ParamLimits

0xa30d,	// (0x000487d1) bg_popup_call_pane

0x2237,	// (0x000406fb) call_thumbnail_pane_cp_ParamLimits

0x2237,	// (0x000406fb) call_thumbnail_pane_cp

0xa391,	// (0x00048855) call_type_pane_cp01_ParamLimits

0xa391,	// (0x00048855) call_type_pane_cp01

0xa3d5,	// (0x00048899) popup_call_audio_first_window_g1_ParamLimits

0xa3d5,	// (0x00048899) popup_call_audio_first_window_g1

0xa421,	// (0x000488e5) popup_call_audio_first_window_g2_ParamLimits

0xa421,	// (0x000488e5) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004d5b1) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004d5b1) popup_call_audio_first_window_g

0xa465,	// (0x00048929) popup_call_audio_first_window_t1_ParamLimits

0xa465,	// (0x00048929) popup_call_audio_first_window_t1

0xa511,	// (0x000489d5) popup_call_audio_first_window_t4_ParamLimits

0xa511,	// (0x000489d5) popup_call_audio_first_window_t4

0xa59d,	// (0x00048a61) popup_call_audio_first_window_t5_ParamLimits

0xa59d,	// (0x00048a61) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004d5b6) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004d5b6) popup_call_audio_first_window_t

0xa5cc,	// (0x00048a90) bg_popup_call_pane_cp02

0xa5d6,	// (0x00048a9a) call_type_pane_cp023

0xa5de,	// (0x00048aa2) popup_call_audio_wait_window_g1

0xa5e6,	// (0x00048aaa) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004d5bd) popup_call_audio_wait_window_g

0xa5ee,	// (0x00048ab2) popup_call_audio_wait_window_t3

0xa5fc,	// (0x00048ac0) bg_popup_call_pane_cp03_ParamLimits

0xa5fc,	// (0x00048ac0) bg_popup_call_pane_cp03

0xa65c,	// (0x00048b20) call_thumbnail_pane_cp011_ParamLimits

0xa65c,	// (0x00048b20) call_thumbnail_pane_cp011

0xa668,	// (0x00048b2c) call_type_pane_cp034_ParamLimits

0xa668,	// (0x00048b2c) call_type_pane_cp034

0xa6a4,	// (0x00048b68) popup_call_audio_second_window_g1_ParamLimits

0xa6a4,	// (0x00048b68) popup_call_audio_second_window_g1

0xa6e0,	// (0x00048ba4) popup_call_audio_second_window_g2_ParamLimits

0xa6e0,	// (0x00048ba4) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004d5c2) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004d5c2) popup_call_audio_second_window_g

0xa71c,	// (0x00048be0) popup_call_audio_second_window_t1_ParamLimits

0xa71c,	// (0x00048be0) popup_call_audio_second_window_t1

0xa79d,	// (0x00048c61) popup_call_audio_second_window_t2_ParamLimits

0xa79d,	// (0x00048c61) popup_call_audio_second_window_t2

0xa7d3,	// (0x00048c97) popup_call_audio_second_window_t3_ParamLimits

0xa7d3,	// (0x00048c97) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004d5c7) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004d5c7) popup_call_audio_second_window_t

0xa5cc,	// (0x00048a90) bg_popup_call_pane_cp04

0xa809,	// (0x00048ccd) list_conf_pane

0xa811,	// (0x00048cd5) popup_call_audio_conf_window_t1

0xa81f,	// (0x00048ce3) call_thumbnail_pane_g1

0xa827,	// (0x00048ceb) bg_pinb_pane_ParamLimits

0xa827,	// (0x00048ceb) bg_pinb_pane

0xa835,	// (0x00048cf9) find_pinb_pane

0xa83e,	// (0x00048d02) listscroll_pinb_pane_ParamLimits

0xa83e,	// (0x00048d02) listscroll_pinb_pane

0xa84d,	// (0x00048d11) pinb_bg_pane_g1

0x225b,	// (0x0004071f) pinb_bg_pane_g2

0x2267,	// (0x0004072b) pinb_bg_pane_g3

0x2273,	// (0x00040737) pinb_bg_pane_g4

0x227f,	// (0x00040743) pinb_bg_pane_g5

0x228b,	// (0x0004074f) pinb_bg_pane_g6

0x2296,	// (0x0004075a) pinb_bg_pane_g7

0x22a1,	// (0x00040765) pinb_bg_pane_g8

0x22ac,	// (0x00040770) pinb_bg_pane_g9

0x22b6,	// (0x0004077a) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004d5ce) pinb_bg_pane_g

0x22d3,	// (0x00040797) grid_pinb_pane

0x22de,	// (0x000407a2) list_pinb_pane

0x22e9,	// (0x000407ad) scroll_pane_cp01_ParamLimits

0x22e9,	// (0x000407ad) scroll_pane_cp01

0xa857,	// (0x00048d1b) find_pinb_pane_g1_ParamLimits

0xa857,	// (0x00048d1b) find_pinb_pane_g1

0xa86f,	// (0x00048d33) find_pinb_pane_t1

0xa881,	// (0x00048d45) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004d5e8) find_pinb_pane_t

0xa896,	// (0x00048d5a) input_focus_pane_cp01_ParamLimits

0xa896,	// (0x00048d5a) input_focus_pane_cp01

0x22fb,	// (0x000407bf) cell_pinb_pane_ParamLimits

0x22fb,	// (0x000407bf) cell_pinb_pane

0x2320,	// (0x000407e4) cell_pinb_pane_g1_ParamLimits

0x2320,	// (0x000407e4) cell_pinb_pane_g1

0x2335,	// (0x000407f9) cell_pinb_pane_g2_ParamLimits

0x2335,	// (0x000407f9) cell_pinb_pane_g2

0xa8a2,	// (0x00048d66) cell_pinb_pane_g3_ParamLimits

0xa8a2,	// (0x00048d66) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004d5ed) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004d5ed) cell_pinb_pane_g

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp01

0x2341,	// (0x00040805) list_pinb_item_pane_ParamLimits

0x2341,	// (0x00040805) list_pinb_item_pane

0xa5cc,	// (0x00048a90) list_highlight_pane_cp02

0x235f,	// (0x00040823) list_pinb_item_pane_g1_ParamLimits

0x235f,	// (0x00040823) list_pinb_item_pane_g1

0x236c,	// (0x00040830) list_pinb_item_pane_g2_ParamLimits

0x236c,	// (0x00040830) list_pinb_item_pane_g2

0x2378,	// (0x0004083c) list_pinb_item_pane_g3_ParamLimits

0x2378,	// (0x0004083c) list_pinb_item_pane_g3

0x2389,	// (0x0004084d) list_pinb_item_pane_g4_ParamLimits

0x2389,	// (0x0004084d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004d5f4) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004d5f4) list_pinb_item_pane_g

0x2395,	// (0x00040859) list_pinb_item_pane_t1_ParamLimits

0x2395,	// (0x00040859) list_pinb_item_pane_t1

0x23c6,	// (0x0004088a) calc_display_pane

0x23e4,	// (0x000408a8) calc_paper_pane

0x2400,	// (0x000408c4) grid_calc_pane

0xa5cc,	// (0x00048a90) bg_list_pane_cp01

0x242c,	// (0x000408f0) clock_g1

0x2434,	// (0x000408f8) clock_g2

0x0001,

0xf139,	// (0x0004d5fd) clock_g

0x243e,	// (0x00040902) clock_t1_ParamLimits

0x243e,	// (0x00040902) clock_t1

0x2453,	// (0x00040917) clock_t2_ParamLimits

0x2453,	// (0x00040917) clock_t2

0x2465,	// (0x00040929) clock_t3_ParamLimits

0x2465,	// (0x00040929) clock_t3

0x2477,	// (0x0004093b) clock_t4_ParamLimits

0x2477,	// (0x0004093b) clock_t4

0x2489,	// (0x0004094d) clock_t5_ParamLimits

0x2489,	// (0x0004094d) clock_t5

0x249e,	// (0x00040962) clock_t6_ParamLimits

0x249e,	// (0x00040962) clock_t6

0x24b0,	// (0x00040974) clock_t7_ParamLimits

0x24b0,	// (0x00040974) clock_t7

0x24c2,	// (0x00040986) clock_t8_ParamLimits

0x24c2,	// (0x00040986) clock_t8

0x24d8,	// (0x0004099c) clock_t9_ParamLimits

0x24d8,	// (0x0004099c) clock_t9

0x0008,

0xf13e,	// (0x0004d602) clock_t_ParamLimits

0xf13e,	// (0x0004d602) clock_t

0xa8ae,	// (0x00048d72) popup_clock_analogue_window_cp02

0xa8ae,	// (0x00048d72) popup_clock_digital_window_cp01

0xa8b6,	// (0x00048d7a) listscroll_help_pane

0xa5cc,	// (0x00048a90) phob_pre_status_pane

0xa8c0,	// (0x00048d84) grid_qdial_pane

0xa827,	// (0x00048ceb) listscroll_mce_pane

0xa827,	// (0x00048ceb) bg_notes_pane

0xa8ca,	// (0x00048d8e) list_notes_pane

0x24ee,	// (0x000409b2) scroll_pane_cp06

0xa8d8,	// (0x00048d9c) bg_calc_paper_pane

0x24fd,	// (0x000409c1) list_calc_pane

0xa8ec,	// (0x00048db0) bg_calc_display_pane

0x2517,	// (0x000409db) calc_display_pane_t1

0x252c,	// (0x000409f0) calc_display_pane_t2

0x2541,	// (0x00040a05) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004d615) calc_display_pane_t

0x2553,	// (0x00040a17) cell_calc_pane_ParamLimits

0x2553,	// (0x00040a17) cell_calc_pane

0xa8f8,	// (0x00048dbc) bg_calc_paper_pane_g1

0xa904,	// (0x00048dc8) bg_calc_paper_pane_g2

0xa910,	// (0x00048dd4) bg_calc_paper_pane_g3

0xa91c,	// (0x00048de0) bg_calc_paper_pane_g4

0xa928,	// (0x00048dec) bg_calc_paper_pane_g5

0x2582,	// (0x00040a46) bg_calc_paper_pane_g6

0x2593,	// (0x00040a57) bg_calc_paper_pane_g7

0x25a4,	// (0x00040a68) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004d61c) bg_calc_paper_pane_g

0x25b7,	// (0x00040a7b) calc_bg_paper_pane_g9

0x25ca,	// (0x00040a8e) list_calc_item_pane_ParamLimits

0x25ca,	// (0x00040a8e) list_calc_item_pane

0xa934,	// (0x00048df8) list_calc_item_pane_g1

0x25eb,	// (0x00040aaf) list_calc_item_pane_t1_ParamLimits

0x25eb,	// (0x00040aaf) list_calc_item_pane_t1

0x25fd,	// (0x00040ac1) list_calc_item_pane_t2_ParamLimits

0x25fd,	// (0x00040ac1) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004d62d) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004d62d) list_calc_item_pane_t

0xa941,	// (0x00048e05) cell_calc_pane_g1

0xa94b,	// (0x00048e0f) grid_highlight_pane_cp02

0xa96d,	// (0x00048e31) bg_calc_display_pane_g1

0x262d,	// (0x00040af1) bg_calc_display_pane_g2

0xa976,	// (0x00048e3a) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004d637) bg_calc_display_pane_g

0x2637,	// (0x00040afb) cell_qdial_pane_ParamLimits

0x2637,	// (0x00040afb) cell_qdial_pane

0x264d,	// (0x00040b11) cell_qdial_pane_g1_ParamLimits

0x264d,	// (0x00040b11) cell_qdial_pane_g1

0x265a,	// (0x00040b1e) cell_qdial_pane_g2_ParamLimits

0x265a,	// (0x00040b1e) cell_qdial_pane_g2

0xa97f,	// (0x00048e43) cell_qdial_pane_g3_ParamLimits

0xa97f,	// (0x00048e43) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004d63e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004d63e) cell_qdial_pane_g

0x2678,	// (0x00040b3c) cell_qdial_pane_t1_ParamLimits

0x2678,	// (0x00040b3c) cell_qdial_pane_t1

0x2690,	// (0x00040b54) cell_qdial_pane_t2_ParamLimits

0x2690,	// (0x00040b54) cell_qdial_pane_t2

0x26a3,	// (0x00040b67) cell_qdial_pane_t3_ParamLimits

0x26a3,	// (0x00040b67) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004d647) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004d647) cell_qdial_pane_t

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp04

0xa98b,	// (0x00048e4f) thumbnail_qdial_pane_ParamLimits

0xa98b,	// (0x00048e4f) thumbnail_qdial_pane

0xa9e7,	// (0x00048eab) list_help_pane

0xa9f0,	// (0x00048eb4) scroll_pane_cp02

0x26b6,	// (0x00040b7a) help_list_pane_t1_ParamLimits

0x26b6,	// (0x00040b7a) help_list_pane_t1

0x26dd,	// (0x00040ba1) bg_notes_pane_g2

0x26e5,	// (0x00040ba9) bg_notes_pane_g3

0x26ed,	// (0x00040bb1) notes_bg_pane_g1

0x26f5,	// (0x00040bb9) notes_bg_pane_g4

0x26fd,	// (0x00040bc1) notes_bg_pane_g5

0x2705,	// (0x00040bc9) notes_bg_pane_g6

0x270d,	// (0x00040bd1) notes_bg_pane_g7

0x2715,	// (0x00040bd9) notes_bg_pane_g8

0x271d,	// (0x00040be1) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004d665) notes_bg_pane_g

0x2725,	// (0x00040be9) list_notes_text_pane_ParamLimits

0x2725,	// (0x00040be9) list_notes_text_pane

0xaa27,	// (0x00048eeb) list_notes_text_pane_g1

0x0b5e,	// (0x0003f022) list_notes_text_pane_t1

0x274d,	// (0x00040c11) listscroll_cale_week_pane

0x2783,	// (0x00040c47) bg_cale_heading_pane

0x27ac,	// (0x00040c70) bg_cale_pane_cp01

0x27ce,	// (0x00040c92) cale_week_corner_pane

0x27ed,	// (0x00040cb1) cale_week_day_heading_pane

0x281b,	// (0x00040cdf) cale_week_scroll_pane_g1

0x283f,	// (0x00040d03) cale_week_scroll_pane_g2

0x2857,	// (0x00040d1b) cale_week_scroll_pane_g3

0x286f,	// (0x00040d33) cale_week_scroll_pane_g4

0x2887,	// (0x00040d4b) cale_week_scroll_pane_g5

0x289f,	// (0x00040d63) cale_week_scroll_pane_g6

0x28bf,	// (0x00040d83) cale_week_scroll_pane_g7

0x28df,	// (0x00040da3) cale_week_scroll_pane_g8

0x28ff,	// (0x00040dc3) cale_week_scroll_pane_g9

0x291c,	// (0x00040de0) cale_week_scroll_pane_g10

0x2939,	// (0x00040dfd) cale_week_scroll_pane_g11

0x2956,	// (0x00040e1a) cale_week_scroll_pane_g12

0x2973,	// (0x00040e37) cale_week_scroll_pane_g13

0x2998,	// (0x00040e5c) cale_week_scroll_pane_g14

0x29c1,	// (0x00040e85) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004d674) cale_week_scroll_pane_g

0x2a0a,	// (0x00040ece) cale_week_time_pane

0x2a2a,	// (0x00040eee) grid_cale_week_pane

0xaa53,	// (0x00048f17) scroll_pane_cp08

0x2a5d,	// (0x00040f21) cell_cale_week_pane_ParamLimits

0x2a5d,	// (0x00040f21) cell_cale_week_pane

0x2aed,	// (0x00040fb1) cale_week_day_heading_pane_t1

0x2b35,	// (0x00040ff9) cale_week_day_heading_pane_t2

0x2b82,	// (0x00041046) cale_week_day_heading_pane_t3

0x2bcf,	// (0x00041093) cale_week_day_heading_pane_t4

0x2c1c,	// (0x000410e0) cale_week_day_heading_pane_t5

0x2c69,	// (0x0004112d) cale_week_day_heading_pane_t6

0x2cb6,	// (0x0004117a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004d695) cale_week_day_heading_pane_t

0xaa75,	// (0x00048f39) bg_cale_side_pane

0x2cfe,	// (0x000411c2) cale_week_time_pane_t1

0x2d42,	// (0x00041206) cale_week_time_pane_t2

0x2d86,	// (0x0004124a) cale_week_time_pane_t3

0x2dca,	// (0x0004128e) cale_week_time_pane_t4

0x2e0e,	// (0x000412d2) cale_week_time_pane_t5

0x2e52,	// (0x00041316) cale_week_time_pane_t6

0x2e96,	// (0x0004135a) cale_week_time_pane_t7

0x2ee2,	// (0x000413a6) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004d6a4) cale_week_time_pane_t

0x2f30,	// (0x000413f4) cell_cale_week_pane_g2

0x2f54,	// (0x00041418) cell_cale_week_pane_g3_ParamLimits

0x2f54,	// (0x00041418) cell_cale_week_pane_g3

0xaa83,	// (0x00048f47) grid_highlight_pane_cp07

0xaa8b,	// (0x00048f4f) listscroll_gms_pane

0xaa95,	// (0x00048f59) grid_gms_pane

0xaa9e,	// (0x00048f62) listscroll_gms_pane_g1

0xaaa6,	// (0x00048f6a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004d6b5) listscroll_gms_pane_g

0x2f6c,	// (0x00041430) scroll_pane_cp010

0x2f77,	// (0x0004143b) cell_gms_pane_ParamLimits

0x2f77,	// (0x0004143b) cell_gms_pane

0x2f8a,	// (0x0004144e) cell_gms_pane_g1

0xaaae,	// (0x00048f72) cell_gms_pane_g2

0xaab6,	// (0x00048f7a) cell_gms_pane_g3

0xaabf,	// (0x00048f83) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004d6ba) cell_gms_pane_g

0xaac8,	// (0x00048f8c) grid_highlight_pane_cp09

0x544f,	// (0x00043913) phob_pre_status_pane_g1

0x5457,	// (0x0004391b) phob_pre_status_pane_g2

0x545f,	// (0x00043923) phob_pre_status_pane_g3

0x5467,	// (0x0004392b) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004daa5) phob_pre_status_pane_g

0x5477,	// (0x0004393b) phob_pre_status_pane_t1

0x5487,	// (0x0004394b) phob_pre_status_pane_t2

0x5497,	// (0x0004395b) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004dab0) phob_pre_status_pane_t

0xaad0,	// (0x00048f94) bg_list_pane_cp05

0x2f9a,	// (0x0004145e) grid_vorec_pane

0x2fa6,	// (0x0004146a) vorec_t1

0x2fb4,	// (0x00041478) vorec_t2

0x2fc2,	// (0x00041486) vorec_t3

0x2fd0,	// (0x00041494) vorec_t4

0xa13a,	// (0x000485fe) vorec_t5

0xa148,	// (0x0004860c) vorec_t6

0x0004,

0xf1ff,	// (0x0004d6c3) vorec_t

0xa156,	// (0x0004861a) wait_bar_pane_cp01

0x2fec,	// (0x000414b0) cell_vorec_pane_ParamLimits

0x2fec,	// (0x000414b0) cell_vorec_pane

0x3001,	// (0x000414c5) cell_vorec_pane_g1

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp05

0x3019,	// (0x000414dd) cams_zoom_pane

0x3025,	// (0x000414e9) image_vga_pane

0x3034,	// (0x000414f8) main_camera_pane_g1

0x3042,	// (0x00041506) main_camera_pane_g2

0x304e,	// (0x00041512) main_camera_pane_g3

0x305c,	// (0x00041520) main_camera_pane_g4

0x306a,	// (0x0004152e) main_camera_pane_g5

0x3078,	// (0x0004153c) main_camera_pane_g6

0x3086,	// (0x0004154a) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004d6ce) main_camera_pane_g

0x3094,	// (0x00041558) main_camera_pane_t1

0x30a6,	// (0x0004156a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004d6df) main_camera_pane_t

0x30c9,	// (0x0004158d) cams_zoom_pane_cp_ParamLimits

0x30c9,	// (0x0004158d) cams_zoom_pane_cp

0x30ed,	// (0x000415b1) image_cif_pane_ParamLimits

0x30ed,	// (0x000415b1) image_cif_pane

0x310b,	// (0x000415cf) image_subqcif_pane

0x3115,	// (0x000415d9) main_video_pane_g1_ParamLimits

0x3115,	// (0x000415d9) main_video_pane_g1

0x3135,	// (0x000415f9) main_video_pane_g2_ParamLimits

0x3135,	// (0x000415f9) main_video_pane_g2

0x3165,	// (0x00041629) main_video_pane_g3_ParamLimits

0x3165,	// (0x00041629) main_video_pane_g3

0x318e,	// (0x00041652) main_video_pane_g4_ParamLimits

0x318e,	// (0x00041652) main_video_pane_g4

0x31b7,	// (0x0004167b) main_video_pane_g5_ParamLimits

0x31b7,	// (0x0004167b) main_video_pane_g5

0xaae4,	// (0x00048fa8) main_video_pane_g6_ParamLimits

0xaae4,	// (0x00048fa8) main_video_pane_g6

0x0006,

0xf220,	// (0x0004d6e4) main_video_pane_g_ParamLimits

0xf220,	// (0x0004d6e4) main_video_pane_g

0x31d9,	// (0x0004169d) main_video_pane_t1_ParamLimits

0x31d9,	// (0x0004169d) main_video_pane_t1

0xaafe,	// (0x00048fc2) cams_zoom_pane_g1

0xab07,	// (0x00048fcb) cams_zoom_pane_g2

0xab10,	// (0x00048fd4) cams_zoom_pane_g3

0xab19,	// (0x00048fdd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004d6f3) cams_zoom_pane_g

0x3223,	// (0x000416e7) grid_cams_pane

0x3231,	// (0x000416f5) linegrid_cams_pane

0x323d,	// (0x00041701) cell_cams_pane_ParamLimits

0x323d,	// (0x00041701) cell_cams_pane

0xab22,	// (0x00048fe6) cams_burst_image_pane

0xab2a,	// (0x00048fee) cell_cams_pane_g1

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp03

0xa941,	// (0x00048e05) mp_bg_pane_g1

0xa5cc,	// (0x00048a90) bg_list_pane_cp03

0xc74c,	// (0x0004ac10) bg_mp_pane

0xc754,	// (0x0004ac18) grid_mp_pane

0xc75c,	// (0x0004ac20) media_player_g1

0xc766,	// (0x0004ac2a) media_player_t1

0xc774,	// (0x0004ac38) media_player_t2

0xc782,	// (0x0004ac46) media_player_t3

0xc790,	// (0x0004ac54) media_player_t4

0xc79e,	// (0x0004ac62) media_player_t5

0xc7ac,	// (0x0004ac70) media_player_t6

0xc7ba,	// (0x0004ac7e) media_player_t7

0x0006,

0xf5cb,	// (0x0004da8f) media_player_t

0xc7c8,	// (0x0004ac8c) wait_bar_pane_cp02

0xf5b0,	// (0x0004da74) main_usb_pane_t

0x5446,	// (0x0004390a) cell_mp_pane

0xa941,	// (0x00048e05) cell_mp_pane_g1

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp06

0xab32,	// (0x00048ff6) grid_skin_colour_pane

0xab3a,	// (0x00048ffe) list_highlight_pane_cp03

0x3252,	// (0x00041716) skin_g1

0xab42,	// (0x00049006) skin_t1

0xab51,	// (0x00049015) skin_t2

0x0001,

0xf264,	// (0x0004d728) skin_t

0x325c,	// (0x00041720) cell_skin_colour_pane_ParamLimits

0x325c,	// (0x00041720) cell_skin_colour_pane

0xab5f,	// (0x00049023) cell_skin_colour_pane_g1

0x32dc,	// (0x000417a0) call_video_g1_ParamLimits

0x32dc,	// (0x000417a0) call_video_g1

0x32ec,	// (0x000417b0) call_video_g2_ParamLimits

0x32ec,	// (0x000417b0) call_video_g2

0x0001,

0xf269,	// (0x0004d72d) call_video_g_ParamLimits

0xf269,	// (0x0004d72d) call_video_g

0x333c,	// (0x00041800) call_video_uplink_pane_cp1_ParamLimits

0x333c,	// (0x00041800) call_video_uplink_pane_cp1

0xab71,	// (0x00049035) call_video_uplink_pane_cp2

0x340a,	// (0x000418ce) video_down_crop_pane_ParamLimits

0x340a,	// (0x000418ce) video_down_crop_pane

0x34fc,	// (0x000419c0) video_down_pane_ParamLimits

0x34fc,	// (0x000419c0) video_down_pane

0xab79,	// (0x0004903d) video_down_subqcif_pane_ParamLimits

0xab79,	// (0x0004903d) video_down_subqcif_pane

0xab93,	// (0x00049057) video_down_subqcif_pane_cp_ParamLimits

0xab93,	// (0x00049057) video_down_subqcif_pane_cp

0xabbb,	// (0x0004907f) im_reading_pane_ParamLimits

0xabbb,	// (0x0004907f) im_reading_pane

0x3619,	// (0x00041add) im_writing_pane_ParamLimits

0x3619,	// (0x00041add) im_writing_pane

0x3637,	// (0x00041afb) im_reading_pane_t1

0xabd5,	// (0x00049099) list_im_pane

0xabe6,	// (0x000490aa) scroll_pane_cp07

0x3679,	// (0x00041b3d) im_writing_pane_t1_ParamLimits

0x3679,	// (0x00041b3d) im_writing_pane_t1

0xabff,	// (0x000490c3) im_writing_pane_t2_ParamLimits

0xabff,	// (0x000490c3) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004d737) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004d737) im_writing_pane_t

0xa5cc,	// (0x00048a90) input_focus_pane_cp04

0xa5cc,	// (0x00048a90) input_focus_pane_cp05

0x368b,	// (0x00041b4f) list_im_single_pane_ParamLimits

0x368b,	// (0x00041b4f) list_im_single_pane

0x36a4,	// (0x00041b68) list_single_im_pane_t1

0x540a,	// (0x000438ce) blid_accuracy_pane

0x5412,	// (0x000438d6) blid_compass_pane

0x541c,	// (0x000438e0) main_location_t1

0x542a,	// (0x000438ee) main_location_t2

0x5438,	// (0x000438fc) main_location_t3

0x0002,

0xf5da,	// (0x0004da9e) main_location_t

0xa5cc,	// (0x00048a90) aid_levels_location

0xa941,	// (0x00048e05) blid_accuracy_pane_g1

0xa941,	// (0x00048e05) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004d799) blid_accuracy_pane_g

0xac47,	// (0x0004910b) wml_content_pane

0xac85,	// (0x00049149) wml_button_pane_ParamLimits

0xac85,	// (0x00049149) wml_button_pane

0x36b3,	// (0x00041b77) wml_list_single_large_pane_ParamLimits

0x36b3,	// (0x00041b77) wml_list_single_large_pane

0x36d5,	// (0x00041b99) wml_list_single_medium_pane_ParamLimits

0x36d5,	// (0x00041b99) wml_list_single_medium_pane

0x36f8,	// (0x00041bbc) wml_list_single_small_pane_ParamLimits

0x36f8,	// (0x00041bbc) wml_list_single_small_pane

0xac99,	// (0x0004915d) wml_selection_box_pane_ParamLimits

0xac99,	// (0x0004915d) wml_selection_box_pane

0xacac,	// (0x00049170) wml_list_single_pane_t1

0xacbb,	// (0x0004917f) wml_list_single_medium_pane_t1

0xacca,	// (0x0004918e) wml_list_single_large_pane_t1

0xacd9,	// (0x0004919d) input_focus_pane_cp02_ParamLimits

0xacd9,	// (0x0004919d) input_focus_pane_cp02

0xacec,	// (0x000491b0) wml_selection_box_pane_g1

0xacf5,	// (0x000491b9) wml_selection_box_pane_t1_ParamLimits

0xacf5,	// (0x000491b9) wml_selection_box_pane_t1

0xa827,	// (0x00048ceb) bg_wml_button_pane_ParamLimits

0xa827,	// (0x00048ceb) bg_wml_button_pane

0xad0d,	// (0x000491d1) wml_button_pane_g1

0xad15,	// (0x000491d9) wml_button_pane_t1

0xad0d,	// (0x000491d1) wml_button_bg_pane_g1

0xad25,	// (0x000491e9) wml_button_bg_pane_g2

0xad2d,	// (0x000491f1) wml_button_bg_pane_g3

0xad35,	// (0x000491f9) wml_button_bg_pane_g4

0xad3d,	// (0x00049201) wml_button_bg_pane_g5

0xad45,	// (0x00049209) wml_button_bg_pane_g6

0xad4d,	// (0x00049211) wml_button_bg_pane_g7

0xad55,	// (0x00049219) wml_button_bg_pane_g8

0xad5d,	// (0x00049221) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004d73c) wml_button_bg_pane_g

0x3720,	// (0x00041be4) bg_list_pane_cp02

0xad65,	// (0x00049229) mce_header_pane_ParamLimits

0xad65,	// (0x00049229) mce_header_pane

0xad7b,	// (0x0004923f) mce_icon_pane

0xad7b,	// (0x0004923f) mce_image_pane

0xad84,	// (0x00049248) mce_text_pane_ParamLimits

0xad84,	// (0x00049248) mce_text_pane

0x372a,	// (0x00041bee) scroll_pane_cp03

0xac7d,	// (0x00049141) scroll_pane_cp04

0xad97,	// (0x0004925b) scroll_pane_cp05_ParamLimits

0xad97,	// (0x0004925b) scroll_pane_cp05

0x3734,	// (0x00041bf8) mce_header_field_pane_ParamLimits

0x3734,	// (0x00041bf8) mce_header_field_pane

0x3756,	// (0x00041c1a) mce_header_field_pane_2_ParamLimits

0x3756,	// (0x00041c1a) mce_header_field_pane_2

0x376c,	// (0x00041c30) mce_header_field_pane_3

0x3774,	// (0x00041c38) list_single_mce_message_pane_ParamLimits

0x3774,	// (0x00041c38) list_single_mce_message_pane

0x3793,	// (0x00041c57) list_single_mce_smart_pane_ParamLimits

0x3793,	// (0x00041c57) list_single_mce_smart_pane

0xada3,	// (0x00049267) input_focus_pane_cp03

0xadac,	// (0x00049270) list_header_data_pane

0x37bd,	// (0x00041c81) mce_header_field_pane_t1

0x37cd,	// (0x00041c91) list_single_mce_header_pane_ParamLimits

0x37cd,	// (0x00041c91) list_single_mce_header_pane

0xadb4,	// (0x00049278) list_single_mce_header_pane_t1

0xadc3,	// (0x00049287) list_single_mce_message_pane_g1

0xadcb,	// (0x0004928f) list_single_mce_message_pane_t1

0x3811,	// (0x00041cd5) bg_cale_heading_pane_cp01_ParamLimits

0x3811,	// (0x00041cd5) bg_cale_heading_pane_cp01

0xadd9,	// (0x0004929d) bg_cale_pane_cp02_ParamLimits

0xadd9,	// (0x0004929d) bg_cale_pane_cp02

0x3858,	// (0x00041d1c) cale_month_corner_pane

0x3877,	// (0x00041d3b) cale_month_day_heading_pane_ParamLimits

0x3877,	// (0x00041d3b) cale_month_day_heading_pane

0x38ce,	// (0x00041d92) cale_month_pane_g1_ParamLimits

0x38ce,	// (0x00041d92) cale_month_pane_g1

0x390a,	// (0x00041dce) cale_month_pane_g2_ParamLimits

0x390a,	// (0x00041dce) cale_month_pane_g2

0x3942,	// (0x00041e06) cale_month_pane_g3_ParamLimits

0x3942,	// (0x00041e06) cale_month_pane_g3

0x3996,	// (0x00041e5a) cale_month_pane_g4_ParamLimits

0x3996,	// (0x00041e5a) cale_month_pane_g4

0x39ea,	// (0x00041eae) cale_month_pane_g5_ParamLimits

0x39ea,	// (0x00041eae) cale_month_pane_g5

0x3a3e,	// (0x00041f02) cale_month_pane_g6_ParamLimits

0x3a3e,	// (0x00041f02) cale_month_pane_g6

0x3aa2,	// (0x00041f66) cale_month_pane_g7_ParamLimits

0x3aa2,	// (0x00041f66) cale_month_pane_g7

0x3b06,	// (0x00041fca) cale_month_pane_g8_ParamLimits

0x3b06,	// (0x00041fca) cale_month_pane_g8

0x3b6a,	// (0x0004202e) cale_month_pane_g9_ParamLimits

0x3b6a,	// (0x0004202e) cale_month_pane_g9

0x3bc2,	// (0x00042086) cale_month_pane_g10_ParamLimits

0x3bc2,	// (0x00042086) cale_month_pane_g10

0x3c10,	// (0x000420d4) cale_month_pane_g11_ParamLimits

0x3c10,	// (0x000420d4) cale_month_pane_g11

0x3c5c,	// (0x00042120) cale_month_pane_g12_ParamLimits

0x3c5c,	// (0x00042120) cale_month_pane_g12

0x3cac,	// (0x00042170) cale_month_pane_g13_ParamLimits

0x3cac,	// (0x00042170) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004d74f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004d74f) cale_month_pane_g

0x3cfc,	// (0x000421c0) cale_month_week_pane

0x3d1c,	// (0x000421e0) grid_cale_month_pane_ParamLimits

0x3d1c,	// (0x000421e0) grid_cale_month_pane

0x3d6a,	// (0x0004222e) cale_month_day_heading_pane_t1

0x3dec,	// (0x000422b0) cale_month_day_heading_pane_t2

0x3e79,	// (0x0004233d) cale_month_day_heading_pane_t3

0x3f06,	// (0x000423ca) cale_month_day_heading_pane_t4

0x3f93,	// (0x00042457) cale_month_day_heading_pane_t5

0x4028,	// (0x000424ec) cale_month_day_heading_pane_t6

0x40c5,	// (0x00042589) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004d76a) cale_month_day_heading_pane_t

0xaa75,	// (0x00048f39) bg_cale_side_pane_cp01

0x4162,	// (0x00042626) cale_month_week_pane_t1

0x417b,	// (0x0004263f) cale_month_week_pane_t2

0x4194,	// (0x00042658) cale_month_week_pane_t3

0x41ad,	// (0x00042671) cale_month_week_pane_t4

0x41c6,	// (0x0004268a) cale_month_week_pane_t5

0x41e1,	// (0x000426a5) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004d779) cale_month_week_pane_t

0x4202,	// (0x000426c6) cell_cale_month_pane_ParamLimits

0x4202,	// (0x000426c6) cell_cale_month_pane

0x4324,	// (0x000427e8) cell_cale_month_pane_g1

0x4330,	// (0x000427f4) cell_cale_month_pane_t1_ParamLimits

0x4330,	// (0x000427f4) cell_cale_month_pane_t1

0xaa83,	// (0x00048f47) grid_highlight_pane_cp08

0xa941,	// (0x00048e05) main_smil_g1

0x4350,	// (0x00042814) smil_status_pane

0xae18,	// (0x000492dc) smil_text_pane

0xc66a,	// (0x0004ab2e) bg_popup_call3_rect_pane_g8

0xc672,	// (0x0004ab36) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004da32) bg_popup_call3_rect_pane_g

0xc900,	// (0x0004adc4) smil_status_volume_pane_g1

0x4363,	// (0x00042827) smil_status_pane_t1

0x57fe,	// (0x00043cc2) volume_smil_pane

0xae22,	// (0x000492e6) list_smil_text_pane

0x437a,	// (0x0004283e) scroll_pane_cp011

0x4385,	// (0x00042849) smil_text_list_pane_t1_ParamLimits

0x4385,	// (0x00042849) smil_text_list_pane_t1

0x43d7,	// (0x0004289b) aid_volume_smil_ParamLimits

0x43d7,	// (0x0004289b) aid_volume_smil

0xa941,	// (0x00048e05) smil_volume_pane_g1

0xa941,	// (0x00048e05) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004d799) smil_volume_pane_g

0x274d,	// (0x00040c11) listscroll_cale_day_pane

0xae2c,	// (0x000492f0) bg_cale_pane

0xae44,	// (0x00049308) list_cale_pane

0xae67,	// (0x0004932b) scroll_pane_cp09

0xae78,	// (0x0004933c) cale_bg_pane_g1

0xae80,	// (0x00049344) cale_bg_pane_g2

0xae88,	// (0x0004934c) cale_bg_pane_g3

0xae90,	// (0x00049354) cale_bg_pane_g4

0xae98,	// (0x0004935c) cale_bg_pane_g5

0xaea0,	// (0x00049364) cale_bg_pane_g6

0xaea8,	// (0x0004936c) cale_bg_pane_g7

0xaeb0,	// (0x00049374) cale_bg_pane_g8

0xaeb8,	// (0x0004937c) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004d79e) cale_bg_pane_g

0x43f9,	// (0x000428bd) list_cale_time_pane_ParamLimits

0x43f9,	// (0x000428bd) list_cale_time_pane

0xaec8,	// (0x0004938c) list_cale_time_pane_g1_ParamLimits

0xaec8,	// (0x0004938c) list_cale_time_pane_g1

0xaed4,	// (0x00049398) list_cale_time_pane_g2_ParamLimits

0xaed4,	// (0x00049398) list_cale_time_pane_g2

0x440d,	// (0x000428d1) list_cale_time_pane_g3_ParamLimits

0x440d,	// (0x000428d1) list_cale_time_pane_g3

0x441b,	// (0x000428df) list_cale_time_pane_g4_ParamLimits

0x441b,	// (0x000428df) list_cale_time_pane_g4

0x4429,	// (0x000428ed) list_cale_time_pane_g5_ParamLimits

0x4429,	// (0x000428ed) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004d7b1) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004d7b1) list_cale_time_pane_g

0xaeee,	// (0x000493b2) list_cale_time_pane_t1_ParamLimits

0xaeee,	// (0x000493b2) list_cale_time_pane_t1

0xaf16,	// (0x000493da) list_cale_time_pane_t2_ParamLimits

0xaf16,	// (0x000493da) list_cale_time_pane_t2

0x4721,	// (0x00042be5) aid_blid_cardinal_pane

0x4763,	// (0x00042c27) compass_pane_t4

0xaf3e,	// (0x00049402) list_cale_time_pane_t4_ParamLimits

0xaf3e,	// (0x00049402) list_cale_time_pane_t4

0x4771,	// (0x00042c35) compass_pane_t5

0x4781,	// (0x00042c45) compass_pane_t6

0x478f,	// (0x00042c53) compass_pane_t7

0xb35a,	// (0x0004981e) navi_pane_cc_t1

0xb4a7,	// (0x0004996b) aid_phob_thumbnail_center_pane

0x4f06,	// (0x000433ca) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004d7be) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004d7be) list_cale_time_pane_t

0xa223,	// (0x000486e7) bg_popup_window_pane_cp02_ParamLimits

0xa223,	// (0x000486e7) bg_popup_window_pane_cp02

0xaf66,	// (0x0004942a) heading_pane_cp01_ParamLimits

0xaf66,	// (0x0004942a) heading_pane_cp01

0xaf72,	// (0x00049436) loc_req_pane_ParamLimits

0xaf72,	// (0x00049436) loc_req_pane

0xaf82,	// (0x00049446) loc_type_pane_ParamLimits

0xaf82,	// (0x00049446) loc_type_pane

0xaf94,	// (0x00049458) loc_type_pane_t1_ParamLimits

0xaf94,	// (0x00049458) loc_type_pane_t1

0xafa6,	// (0x0004946a) loc_type_pane_t2_ParamLimits

0xafa6,	// (0x0004946a) loc_type_pane_t2

0xafb8,	// (0x0004947c) loc_type_pane_t3_ParamLimits

0xafb8,	// (0x0004947c) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004d7c5) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004d7c5) loc_type_pane_t

0xafca,	// (0x0004948e) list_loc_req_pane

0xafd4,	// (0x00049498) scroll_pane_cp012

0x4437,	// (0x000428fb) list_single_loc_request_popup_menu_pane_ParamLimits

0x4437,	// (0x000428fb) list_single_loc_request_popup_menu_pane

0xafdf,	// (0x000494a3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafdf,	// (0x000494a3) list_single_loc_request_popup_menu_pane_g1

0xafeb,	// (0x000494af) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafeb,	// (0x000494af) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004d7cc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004d7cc) list_single_loc_request_popup_menu_pane_g

0xaff7,	// (0x000494bb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaff7,	// (0x000494bb) list_single_loc_request_popup_menu_pane_t1

0x4449,	// (0x0004290d) bg_popup_window_pane_cp03_ParamLimits

0x4449,	// (0x0004290d) bg_popup_window_pane_cp03

0x4457,	// (0x0004291b) heading_loc_req_pane_ParamLimits

0x4457,	// (0x0004291b) heading_loc_req_pane

0x4463,	// (0x00042927) popup_dyc_status_message_window_g1_ParamLimits

0x4463,	// (0x00042927) popup_dyc_status_message_window_g1

0x446f,	// (0x00042933) popup_dyc_status_message_window_t1_ParamLimits

0x446f,	// (0x00042933) popup_dyc_status_message_window_t1

0x4481,	// (0x00042945) popup_dyc_status_message_window_t2_ParamLimits

0x4481,	// (0x00042945) popup_dyc_status_message_window_t2

0x4493,	// (0x00042957) popup_dyc_status_message_window_t3_ParamLimits

0x4493,	// (0x00042957) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004d7d1) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004d7d1) popup_dyc_status_message_window_t

0xa5cc,	// (0x00048a90) bg_heading_pane_cp01

0xb00d,	// (0x000494d1) heading_loc_req_pane_g1

0xb015,	// (0x000494d9) heading_loc_req_pane_g2

0xb01d,	// (0x000494e1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004d7d8) heading_loc_req_pane_g

0xb025,	// (0x000494e9) heading_loc_req_pane_t1

0xb035,	// (0x000494f9) bg_popup_sub_pane_cp01_ParamLimits

0xb035,	// (0x000494f9) bg_popup_sub_pane_cp01

0xb043,	// (0x00049507) popup_cale_events_window_g1_ParamLimits

0xb043,	// (0x00049507) popup_cale_events_window_g1

0xb063,	// (0x00049527) popup_cale_events_window_g2_ParamLimits

0xb063,	// (0x00049527) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004d80c) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004d80c) popup_cale_events_window_g

0xb083,	// (0x00049547) popup_cale_events_window_t1_ParamLimits

0xb083,	// (0x00049547) popup_cale_events_window_t1

0xb095,	// (0x00049559) popup_cale_events_window_t2_ParamLimits

0xb095,	// (0x00049559) popup_cale_events_window_t2

0xb0d3,	// (0x00049597) popup_cale_events_window_t3_ParamLimits

0xb0d3,	// (0x00049597) popup_cale_events_window_t3

0xb10d,	// (0x000495d1) popup_cale_events_window_t4_ParamLimits

0xb10d,	// (0x000495d1) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004d811) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004d811) popup_cale_events_window_t

0x44bd,	// (0x00042981) call_type_pane

0xb2ed,	// (0x000497b1) popup_call_status_window_g1

0x44c9,	// (0x0004298d) popup_call_status_window_g2

0x44d5,	// (0x00042999) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004d81a) popup_call_status_window_g

0xb143,	// (0x00049607) call_type_pane_g1

0xb14c,	// (0x00049610) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004d821) call_type_pane_g

0xa5cc,	// (0x00048a90) bg_popup_sub_pane_cp02

0xb155,	// (0x00049619) listscroll_popup_wml_pane

0xb15d,	// (0x00049621) list_wml_pane

0xb167,	// (0x0004962b) scroll_pane_cp013

0xb172,	// (0x00049636) list_single_graphic_popup_wml_pane_ParamLimits

0xb172,	// (0x00049636) list_single_graphic_popup_wml_pane

0xa941,	// (0x00048e05) list_single_graphic_popup_wml_pane_g1

0xb186,	// (0x0004964a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004d826) list_single_graphic_popup_wml_pane_g

0xb18e,	// (0x00049652) list_single_graphic_popup_wml_pane_t1

0xb1a4,	// (0x00049668) aid_call_pane

0xa81f,	// (0x00048ce3) popup_clock_analogue_window_g1

0xa81f,	// (0x00048ce3) popup_clock_analogue_window_g2

0x44e1,	// (0x000429a5) popup_clock_analogue_window_g3

0x44e1,	// (0x000429a5) popup_clock_analogue_window_g4

0xa941,	// (0x00048e05) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004d82b) popup_clock_analogue_window_g

0x44e9,	// (0x000429ad) popup_clock_analogue_window_t1

0x44f7,	// (0x000429bb) clock_digital_number_pane_ParamLimits

0x44f7,	// (0x000429bb) clock_digital_number_pane

0x4503,	// (0x000429c7) clock_digital_number_pane_cp02_ParamLimits

0x4503,	// (0x000429c7) clock_digital_number_pane_cp02

0x450f,	// (0x000429d3) clock_digital_number_pane_cp03_ParamLimits

0x450f,	// (0x000429d3) clock_digital_number_pane_cp03

0x451b,	// (0x000429df) clock_digital_number_pane_cp04_ParamLimits

0x451b,	// (0x000429df) clock_digital_number_pane_cp04

0x4527,	// (0x000429eb) clock_digital_separator_pane_ParamLimits

0x4527,	// (0x000429eb) clock_digital_separator_pane

0x4533,	// (0x000429f7) popup_clock_digital_window_t1

0xa941,	// (0x00048e05) clock_digital_number_pane_g1

0xa941,	// (0x00048e05) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004d799) clock_digital_number_pane_g

0xa941,	// (0x00048e05) clock_digital_separator_pane_g1

0xa941,	// (0x00048e05) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004d799) clock_digital_separator_pane_g

0xa5cc,	// (0x00048a90) bg_popup_window_pane_cp04

0xb1ac,	// (0x00049670) heading_pane_cp03

0xb1b4,	// (0x00049678) listscroll_popup_gms_pane

0xb1bc,	// (0x00049680) grid_large_graphic_popup_pane

0xb1c6,	// (0x0004968a) listscroll_popup_gms_pane_g1

0xb1ce,	// (0x00049692) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004d836) listscroll_popup_gms_pane_g

0xac7d,	// (0x00049141) scroll_pane_cp014

0x4550,	// (0x00042a14) cell_large_graphic_popup_pane_ParamLimits

0x4550,	// (0x00042a14) cell_large_graphic_popup_pane

0x456a,	// (0x00042a2e) cell_large_graphic_popup_pane_g1_ParamLimits

0x456a,	// (0x00042a2e) cell_large_graphic_popup_pane_g1

0xb1d6,	// (0x0004969a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1d6,	// (0x0004969a) cell_large_graphic_popup_pane_g2

0xb1e2,	// (0x000496a6) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1e2,	// (0x000496a6) cell_large_graphic_popup_pane_g3

0xb1ef,	// (0x000496b3) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ef,	// (0x000496b3) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004d83b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004d83b) cell_large_graphic_popup_pane_g

0xb1ff,	// (0x000496c3) grid_highlight_pane_cp010

0xa941,	// (0x00048e05) bg_popup_call_pane_g1

0xb209,	// (0x000496cd) list_single_graphic_popup_conf_pane_ParamLimits

0xb209,	// (0x000496cd) list_single_graphic_popup_conf_pane

0xb21b,	// (0x000496df) list_highlight_pane_cp01

0xb224,	// (0x000496e8) list_single_graphic_popup_conf_pane_g1

0xb22c,	// (0x000496f0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004d844) list_single_graphic_popup_conf_pane_g

0xb234,	// (0x000496f8) list_single_graphic_popup_conf_pane_t1

0xb242,	// (0x00049706) linegrid_cams_pane_g1

0x4576,	// (0x00042a3a) linegrid_cams_pane_g2

0xaab6,	// (0x00048f7a) linegrid_cams_pane_g3

0xb24b,	// (0x0004970f) linegrid_cams_pane_g4

0x457f,	// (0x00042a43) linegrid_cams_pane_g5

0x4588,	// (0x00042a4c) linegrid_cams_pane_g6

0xaabf,	// (0x00048f83) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004d849) linegrid_cams_pane_g

0xb254,	// (0x00049718) popup_clock_analogue_window

0xb254,	// (0x00049718) popup_clock_digital_window

0xa5cc,	// (0x00048a90) popup_phob_thumbnail_window

0xa941,	// (0x00048e05) call_video_uplink_pane_g1

0xb25d,	// (0x00049721) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004d858) call_video_uplink_pane_g

0xb265,	// (0x00049729) video_uplink_pane

0xb26d,	// (0x00049731) mce_image_pane_g1

0x4593,	// (0x00042a57) mce_image_pane_g2

0x459d,	// (0x00042a61) mce_image_pane_g3

0x45a7,	// (0x00042a6b) mce_image_pane_g4

0x45af,	// (0x00042a73) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004d85d) mce_image_pane_g

0xb277,	// (0x0004973b) control_top_pane_stacon_cp01_ParamLimits

0xb277,	// (0x0004973b) control_top_pane_stacon_cp01

0xb28b,	// (0x0004974f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb28b,	// (0x0004974f) uni_indicator_pane_stacon_cp01

0xb29c,	// (0x00049760) bg_popup_sub_pane_cp03

0x45b7,	// (0x00042a7b) chi_dic_find_pane

0x45bf,	// (0x00042a83) listscroll_chi_dic_pane

0x45c8,	// (0x00042a8c) main_pane_chidic_g1

0x45db,	// (0x00042a9f) chi_dic_find_pane_t1

0xb2a6,	// (0x0004976a) find_chidic_pane

0xb2af,	// (0x00049773) chi_dic_list_pane_ParamLimits

0xb2af,	// (0x00049773) chi_dic_list_pane

0xb2c0,	// (0x00049784) scroll_pane_cp020

0x45e9,	// (0x00042aad) find_chidic_pane_t1

0xa5cc,	// (0x00048a90) input_focus_pane_cp06

0x45f8,	// (0x00042abc) list_chi_dic_pane_ParamLimits

0x45f8,	// (0x00042abc) list_chi_dic_pane

0x460d,	// (0x00042ad1) list_chi_dic_pane_t1_ParamLimits

0x460d,	// (0x00042ad1) list_chi_dic_pane_t1

0xa5cc,	// (0x00048a90) list_highlight_pane_cp020

0xb2c8,	// (0x0004978c) bg_cale_heading_pane_g1

0x4620,	// (0x00042ae4) bg_cale_heading_pane_g2

0x4628,	// (0x00042aec) bg_cale_heading_pane_g3

0x4630,	// (0x00042af4) bg_cale_heading_pane_g4

0x463a,	// (0x00042afe) bg_cale_heading_pane_g5

0x4644,	// (0x00042b08) bg_cale_heading_pane_g6

0x464c,	// (0x00042b10) bg_cale_heading_pane_g7

0x4654,	// (0x00042b18) bg_cale_heading_pane_g8

0x465e,	// (0x00042b22) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004d868) bg_cale_heading_pane_g

0xb2c8,	// (0x0004978c) bg_cale_side_pane_g1

0x4668,	// (0x00042b2c) bg_cale_side_pane_g2

0x4672,	// (0x00042b36) bg_cale_side_pane_g3

0x467c,	// (0x00042b40) bg_cale_side_pane_g4

0x4686,	// (0x00042b4a) bg_cale_side_pane_g5

0x4690,	// (0x00042b54) bg_cale_side_pane_g6

0x469a,	// (0x00042b5e) bg_cale_side_pane_g7

0x46a4,	// (0x00042b68) bg_cale_side_pane_g8

0x46ac,	// (0x00042b70) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004d87b) bg_cale_side_pane_g

0x46b4,	// (0x00042b78) popup_call_status_window_ParamLimits

0x46b4,	// (0x00042b78) popup_call_status_window

0xb2d0,	// (0x00049794) stacon_top_pane

0xb2d8,	// (0x0004979c) status_pane_ParamLimits

0xb2d8,	// (0x0004979c) status_pane

0xb2fb,	// (0x000497bf) status_small_pane

0xb303,	// (0x000497c7) control_pane

0xa5cc,	// (0x00048a90) stacon_bottom_pane

0xb30b,	// (0x000497cf) list_single_mce_smart_pane_t1_ParamLimits

0xb30b,	// (0x000497cf) list_single_mce_smart_pane_t1

0xb31e,	// (0x000497e2) list_single_mce_smart_pane_t2_ParamLimits

0xb31e,	// (0x000497e2) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004d88e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004d88e) list_single_mce_smart_pane_t

0x46c0,	// (0x00042b84) compass_pane

0x46cb,	// (0x00042b8f) main_location2_pane_t1

0x46e1,	// (0x00042ba5) main_location2_pane_t2

0x46f7,	// (0x00042bbb) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004d893) main_location2_pane_t

0xb33d,	// (0x00049801) compass_pane_g1_ParamLimits

0xb33d,	// (0x00049801) compass_pane_g1

0x4745,	// (0x00042c09) compass_pane_t1

0x4754,	// (0x00042c18) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004d89c) compass_pane_t

0x479f,	// (0x00042c63) text_secondary_cp61

0xb351,	// (0x00049815) navi_pane_cams_g5

0xb374,	// (0x00049838) navi_pane_im_t1

0xb382,	// (0x00049846) navi_pane_mp_g1_ParamLimits

0xb382,	// (0x00049846) navi_pane_mp_g1

0xb396,	// (0x0004985a) navi_pane_mp_g2_ParamLimits

0xb396,	// (0x0004985a) navi_pane_mp_g2

0xb3a2,	// (0x00049866) navi_pane_mp_g3_ParamLimits

0xb3a2,	// (0x00049866) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004d8b0) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004d8b0) navi_pane_mp_g

0xb3ae,	// (0x00049872) navi_pane_mp_t1

0xb3bc,	// (0x00049880) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004d8b7) navi_pane_mp_t

0xb3f8,	// (0x000498bc) navi_pane_vt_g1

0xb3ae,	// (0x00049872) navi_pane_vt_t1

0xb400,	// (0x000498c4) navi_slider_pane

0xaad0,	// (0x00048f94) zooming_pane

0xb408,	// (0x000498cc) navi_slider_pane_g1

0x48d4,	// (0x00042d98) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004d8be) navi_slider_pane_g

0xb42c,	// (0x000498f0) aid_levels_zoom

0xb434,	// (0x000498f8) zooming_pane_g1

0xb43c,	// (0x00049900) zooming_pane_g2

0xb43c,	// (0x00049900) zooming_pane_g3

0x0002,

0xf409,	// (0x0004d8cd) zooming_pane_g

0xb444,	// (0x00049908) level_10_zoom

0xb44d,	// (0x00049911) level_11_zoom

0xb456,	// (0x0004991a) level_1_zoom

0xb45f,	// (0x00049923) level_2_zoom

0xb468,	// (0x0004992c) level_3_zoom

0xb471,	// (0x00049935) level_4_zoom

0xb47a,	// (0x0004993e) level_5_zoom

0xb483,	// (0x00049947) level_6_zoom

0xb48c,	// (0x00049950) level_7_zoom

0xb495,	// (0x00049959) level_8_zoom

0xb49e,	// (0x00049962) level_9_zoom

0xb4af,	// (0x00049973) popup_phob_thumbnail_window_g1

0xb4b7,	// (0x0004997b) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004d8d4) popup_phob_thumbnail_window_g

0xc7d0,	// (0x0004ac94) level_1_location

0xc7d8,	// (0x0004ac9c) level_2_location

0xc7e0,	// (0x0004aca4) level_3_location

0xc7e8,	// (0x0004acac) level_4_location

0xaad0,	// (0x00048f94) level_5_location

0x48e6,	// (0x00042daa) mce_icon_pane_g1

0x48ee,	// (0x00042db2) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004d8d9) mce_icon_pane_g

0x48f6,	// (0x00042dba) main_mup_pane_g1_ParamLimits

0x48f6,	// (0x00042dba) main_mup_pane_g1

0x490e,	// (0x00042dd2) main_mup_pane_g2_ParamLimits

0x490e,	// (0x00042dd2) main_mup_pane_g2

0x492a,	// (0x00042dee) main_mup_pane_g3_ParamLimits

0x492a,	// (0x00042dee) main_mup_pane_g3

0x4946,	// (0x00042e0a) main_mup_pane_g4_ParamLimits

0x4946,	// (0x00042e0a) main_mup_pane_g4

0x4962,	// (0x00042e26) main_mup_pane_g5_ParamLimits

0x4962,	// (0x00042e26) main_mup_pane_g5

0x4983,	// (0x00042e47) main_mup_pane_g6_ParamLimits

0x4983,	// (0x00042e47) main_mup_pane_g6

0x49a3,	// (0x00042e67) main_mup_pane_g7_ParamLimits

0x49a3,	// (0x00042e67) main_mup_pane_g7

0x49c7,	// (0x00042e8b) main_mup_pane_g8_ParamLimits

0x49c7,	// (0x00042e8b) main_mup_pane_g8

0x49eb,	// (0x00042eaf) main_mup_pane_g9_ParamLimits

0x49eb,	// (0x00042eaf) main_mup_pane_g9

0x4a0e,	// (0x00042ed2) main_mup_pane_g10_ParamLimits

0x4a0e,	// (0x00042ed2) main_mup_pane_g10

0x4a31,	// (0x00042ef5) main_mup_pane_g11_ParamLimits

0x4a31,	// (0x00042ef5) main_mup_pane_g11

0x4a51,	// (0x00042f15) main_mup_pane_g12_ParamLimits

0x4a51,	// (0x00042f15) main_mup_pane_g12

0x4a5f,	// (0x00042f23) main_mup_pane_g13_ParamLimits

0x4a5f,	// (0x00042f23) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004d8de) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004d8de) main_mup_pane_g

0x4a75,	// (0x00042f39) main_mup_pane_t1_ParamLimits

0x4a75,	// (0x00042f39) main_mup_pane_t1

0x4a94,	// (0x00042f58) main_mup_pane_t2_ParamLimits

0x4a94,	// (0x00042f58) main_mup_pane_t2

0x4aae,	// (0x00042f72) main_mup_pane_t3_ParamLimits

0x4aae,	// (0x00042f72) main_mup_pane_t3

0x4ac8,	// (0x00042f8c) main_mup_pane_t4_ParamLimits

0x4ac8,	// (0x00042f8c) main_mup_pane_t4

0x4ada,	// (0x00042f9e) main_mup_pane_t5_ParamLimits

0x4ada,	// (0x00042f9e) main_mup_pane_t5

0x4aec,	// (0x00042fb0) main_mup_pane_t6_ParamLimits

0x4aec,	// (0x00042fb0) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004d8f9) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004d8f9) main_mup_pane_t

0x4b02,	// (0x00042fc6) mup_progress_pane_ParamLimits

0x4b02,	// (0x00042fc6) mup_progress_pane

0x4b0e,	// (0x00042fd2) mup_visualizer_pane_ParamLimits

0x4b0e,	// (0x00042fd2) mup_visualizer_pane

0x4b4c,	// (0x00043010) mup_volume_pane_ParamLimits

0x4b4c,	// (0x00043010) mup_volume_pane

0xb2ed,	// (0x000497b1) mup_visualizer_pane_g1_ParamLimits

0xb2ed,	// (0x000497b1) mup_visualizer_pane_g1

0xb2ed,	// (0x000497b1) mup_visualizer_pane_g2_ParamLimits

0xb2ed,	// (0x000497b1) mup_visualizer_pane_g2

0xb33d,	// (0x00049801) mup_visualizer_pane_g3_ParamLimits

0xb33d,	// (0x00049801) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004d906) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004d906) mup_visualizer_pane_g

0xa941,	// (0x00048e05) mup_volume_pane_g1

0xb4c7,	// (0x0004998b) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004d90d) mup_volume_pane_g

0xa941,	// (0x00048e05) mup_progress_pane_g1

0xb4d0,	// (0x00049994) mup_progress_pane_g2

0xb4d9,	// (0x0004999d) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004d912) mup_progress_pane_g

0xa5cc,	// (0x00048a90) bg_popup_window_pane_cp05

0xb4e2,	// (0x000499a6) heading_pane_cp02_ParamLimits

0xb4e2,	// (0x000499a6) heading_pane_cp02

0xb4fe,	// (0x000499c2) list_popup_blid_pane

0xb506,	// (0x000499ca) list_blid_sat_info_pane_ParamLimits

0xb506,	// (0x000499ca) list_blid_sat_info_pane

0xb519,	// (0x000499dd) list_blid_sat_info_pane_g1

0xb521,	// (0x000499e5) list_blid_sat_info_pane_t1

0x4c6b,	// (0x0004312f) mup_equalizer_pane_ParamLimits

0x4c6b,	// (0x0004312f) mup_equalizer_pane

0x4c8c,	// (0x00043150) mup_equalizer_pane_cp1_ParamLimits

0x4c8c,	// (0x00043150) mup_equalizer_pane_cp1

0x4cad,	// (0x00043171) mup_equalizer_pane_cp2_ParamLimits

0x4cad,	// (0x00043171) mup_equalizer_pane_cp2

0x4cce,	// (0x00043192) mup_equalizer_pane_cp3_ParamLimits

0x4cce,	// (0x00043192) mup_equalizer_pane_cp3

0x4cf3,	// (0x000431b7) mup_equalizer_pane_cp4_ParamLimits

0x4cf3,	// (0x000431b7) mup_equalizer_pane_cp4

0x4d18,	// (0x000431dc) mup_equalizer_pane_cp5

0x4d30,	// (0x000431f4) mup_equalizer_pane_cp6

0x4d48,	// (0x0004320c) mup_equalizer_pane_cp7

0xc6ea,	// (0x0004abae) bg_popup_call_poc_act_pane_g9

0xc6f2,	// (0x0004abb6) bg_popup_call_poc_act_pane_g10

0xc6fa,	// (0x0004abbe) bg_popup_call_poc_act_pane_g11

0x000a,

0xa827,	// (0x00048ceb) mup_scale_pane

0xa941,	// (0x00048e05) mup_scale_pane_g1

0xb52f,	// (0x000499f3) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004d92e) mup_scale_pane_g

0xb553,	// (0x00049a17) msg_data_pane

0xb55b,	// (0x00049a1f) scroll_pane_cp017

0x4d72,	// (0x00043236) bg_list_pane_cp04_ParamLimits

0x4d72,	// (0x00043236) bg_list_pane_cp04

0xb563,	// (0x00049a27) msg_data_pane_g1

0x4d92,	// (0x00043256) msg_data_pane_g2

0x4d9c,	// (0x00043260) msg_data_pane_g3

0x4da6,	// (0x0004326a) msg_data_pane_g4

0x4dae,	// (0x00043272) msg_data_pane_g5

0x4db6,	// (0x0004327a) msg_data_pane_g6

0x4dbe,	// (0x00043282) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004d93d) msg_data_pane_g

0x4dc6,	// (0x0004328a) msg_text_pane_ParamLimits

0x4dc6,	// (0x0004328a) msg_text_pane

0x4dee,	// (0x000432b2) qrid_highlight_pane_cp011_ParamLimits

0x4dee,	// (0x000432b2) qrid_highlight_pane_cp011

0xa5cc,	// (0x00048a90) msg_body_pane

0xa5cc,	// (0x00048a90) msg_header_pane

0xb574,	// (0x00049a38) input_focus_pane_cp07

0xb589,	// (0x00049a4d) msg_header_pane_t1_ParamLimits

0xb589,	// (0x00049a4d) msg_header_pane_t1

0x0da0,	// (0x0003f264) msg_header_pane_t2_ParamLimits

0x0da0,	// (0x0003f264) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004d951) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004d951) msg_header_pane_t

0xb59b,	// (0x00049a5f) msg_body_pane_g1

0x0db2,	// (0x0003f276) msg_body_pane_t1_ParamLimits

0x0db2,	// (0x0003f276) msg_body_pane_t1

0x0de3,	// (0x0003f2a7) msg_body_pane_t2_ParamLimits

0x0de3,	// (0x0003f2a7) msg_body_pane_t2

0x0df5,	// (0x0003f2b9) msg_body_pane_t3_ParamLimits

0x0df5,	// (0x0003f2b9) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004d956) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004d956) msg_body_pane_t

0x4e56,	// (0x0004331a) main_viewer_pane_g1_ParamLimits

0x4e56,	// (0x0004331a) main_viewer_pane_g1

0x4e62,	// (0x00043326) main_viewer_pane_g2_ParamLimits

0x4e62,	// (0x00043326) main_viewer_pane_g2

0x4e6e,	// (0x00043332) main_viewer_pane_g3_ParamLimits

0x4e6e,	// (0x00043332) main_viewer_pane_g3

0x4e7f,	// (0x00043343) main_viewer_pane_g4_ParamLimits

0x4e7f,	// (0x00043343) main_viewer_pane_g4

0x4e90,	// (0x00043354) main_viewer_pane_g5_ParamLimits

0x4e90,	// (0x00043354) main_viewer_pane_g5

0x4e90,	// (0x00043354) main_viewer_pane_g7_ParamLimits

0x4e90,	// (0x00043354) main_viewer_pane_g7

0x4ea2,	// (0x00043366) main_viewer_pane_g8_ParamLimits

0x4ea2,	// (0x00043366) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004d966) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004d966) main_viewer_pane_g

0xb5a3,	// (0x00049a67) viewer_content_pane_ParamLimits

0xb5a3,	// (0x00049a67) viewer_content_pane

0x4eda,	// (0x0004339e) main_postcard_pane_g1_ParamLimits

0x4eda,	// (0x0004339e) main_postcard_pane_g1

0x4ee8,	// (0x000433ac) main_postcard_pane_g2_ParamLimits

0x4ee8,	// (0x000433ac) main_postcard_pane_g2

0x4ef6,	// (0x000433ba) main_postcard_pane_g3_ParamLimits

0x4ef6,	// (0x000433ba) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004d977) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004d977) main_postcard_pane_g

0x4f06,	// (0x000433ca) main_postcard_pane_g4

0xc913,	// (0x0004add7) smil_status_volume_pane_g2

0x4f32,	// (0x000433f6) postcard_pane_ParamLimits

0x4f32,	// (0x000433f6) postcard_pane

0xb2ed,	// (0x000497b1) postcard_pane_g1_ParamLimits

0xb2ed,	// (0x000497b1) postcard_pane_g1

0x4f6c,	// (0x00043430) postcard_pane_g2_ParamLimits

0x4f6c,	// (0x00043430) postcard_pane_g2

0x4f78,	// (0x0004343c) postcard_pane_g3_ParamLimits

0x4f78,	// (0x0004343c) postcard_pane_g3

0xb5b1,	// (0x00049a75) postcard_pane_g4_ParamLimits

0xb5b1,	// (0x00049a75) postcard_pane_g4

0x4f84,	// (0x00043448) postcard_pane_g5_ParamLimits

0x4f84,	// (0x00043448) postcard_pane_g5

0x4f90,	// (0x00043454) postcard_pane_g6_ParamLimits

0x4f90,	// (0x00043454) postcard_pane_g6

0xb5bf,	// (0x00049a83) postcard_pane_g7_ParamLimits

0xb5bf,	// (0x00049a83) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004d984) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004d984) postcard_pane_g

0x4f9e,	// (0x00043462) main_mp2_pane_g1_ParamLimits

0x4f9e,	// (0x00043462) main_mp2_pane_g1

0x4fac,	// (0x00043470) main_mp2_pane_g2_ParamLimits

0x4fac,	// (0x00043470) main_mp2_pane_g2

0x4fb8,	// (0x0004347c) main_mp2_pane_g3_ParamLimits

0x4fb8,	// (0x0004347c) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004d993) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004d993) main_mp2_pane_g

0x4fc4,	// (0x00043488) main_mp2_pane_t1_ParamLimits

0x4fc4,	// (0x00043488) main_mp2_pane_t1

0x4fdb,	// (0x0004349f) main_mp2_pane_t2_ParamLimits

0x4fdb,	// (0x0004349f) main_mp2_pane_t2

0x4fef,	// (0x000434b3) main_mp2_pane_t3_ParamLimits

0x4fef,	// (0x000434b3) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004d99a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004d99a) main_mp2_pane_t

0xb5cd,	// (0x00049a91) pec_content_pane_ParamLimits

0xb5cd,	// (0x00049a91) pec_content_pane

0xac7d,	// (0x00049141) scroll_pane_cp015

0xb5df,	// (0x00049aa3) pec_attribute_pane_ParamLimits

0xb5df,	// (0x00049aa3) pec_attribute_pane

0x5001,	// (0x000434c5) pec_content_pane_g1_ParamLimits

0x5001,	// (0x000434c5) pec_content_pane_g1

0xb5ef,	// (0x00049ab3) pec_content_pane_t1_ParamLimits

0xb5ef,	// (0x00049ab3) pec_content_pane_t1

0xb601,	// (0x00049ac5) pec_content_pane_t2_ParamLimits

0xb601,	// (0x00049ac5) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004d9a1) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004d9a1) pec_content_pane_t

0x500d,	// (0x000434d1) list_single_graphic_pane_cp01_ParamLimits

0x500d,	// (0x000434d1) list_single_graphic_pane_cp01

0xa827,	// (0x00048ceb) bg_popup_sub_pane_cp04

0xb613,	// (0x00049ad7) popup_mup_playback_window_g1

0xb61f,	// (0x00049ae3) popup_mup_playback_window_t1

0xb634,	// (0x00049af8) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004d9a6) popup_mup_playback_window_t

0xb66b,	// (0x00049b2f) main_image_pane_g1_ParamLimits

0xb66b,	// (0x00049b2f) main_image_pane_g1

0xb6ae,	// (0x00049b72) scroll_pane_cp018_ParamLimits

0xb6ae,	// (0x00049b72) scroll_pane_cp018

0xb6c6,	// (0x00049b8a) scroll_pane_cp016_ParamLimits

0xb6c6,	// (0x00049b8a) scroll_pane_cp016

0x509b,	// (0x0004355f) smil2_image_pane_ParamLimits

0x509b,	// (0x0004355f) smil2_image_pane

0x50d1,	// (0x00043595) smil2_root_pane_ParamLimits

0x50d1,	// (0x00043595) smil2_root_pane

0x50fd,	// (0x000435c1) smil2_text_pane_ParamLimits

0x50fd,	// (0x000435c1) smil2_text_pane

0xa5cc,	// (0x00048a90) bg_list_pane_cp06

0xb702,	// (0x00049bc6) grid_radio_pane

0xa5cc,	// (0x00048a90) bg_popup_window_pane_cp06

0xb70c,	// (0x00049bd0) main_fmradio_pane_t1

0xb1ac,	// (0x00049670) heading_pane_cp04

0xb71a,	// (0x00049bde) main_fmradio_pane_t2

0xc702,	// (0x0004abc6) popup_cale_lunar_info_window_g1

0xb728,	// (0x00049bec) main_fmradio_pane_t3

0xc70a,	// (0x0004abce) popup_cale_lunar_info_window_g2

0xb738,	// (0x00049bfc) main_fmradio_pane_t4

0x0001,

0xb746,	// (0x00049c0a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004da81) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004d9bb) main_fmradio_pane_t

0xb754,	// (0x00049c18) wait_bar_pane_cp03

0xb75c,	// (0x00049c20) cell_fmradio_pane_ParamLimits

0xb75c,	// (0x00049c20) cell_fmradio_pane

0xb5bf,	// (0x00049a83) cell_fmradio_pane_g1_ParamLimits

0xb5bf,	// (0x00049a83) cell_fmradio_pane_g1

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp011

0xb771,	// (0x00049c35) poc_content_pane_ParamLimits

0xb771,	// (0x00049c35) poc_content_pane

0xb783,	// (0x00049c47) scroll_pane_cp019

0x513d,	// (0x00043601) popup_call_poc_act_window_ParamLimits

0x513d,	// (0x00043601) popup_call_poc_act_window

0x514a,	// (0x0004360e) popup_call_poc_inact_window_ParamLimits

0x514a,	// (0x0004360e) popup_call_poc_inact_window

0xf594,	// (0x0004da58) bg_popup_call_poc_act_pane_g

0xc67a,	// (0x0004ab3e) bg_popup_call_poc_inact_pane_g1

0xc682,	// (0x0004ab46) bg_popup_call_poc_inact_pane_g2

0xb78b,	// (0x00049c4f) popup_call_poc_act_window_g2

0xc68a,	// (0x0004ab4e) bg_popup_call_poc_inact_pane_g3

0xc692,	// (0x0004ab56) bg_popup_call_poc_inact_pane_g4

0xc69a,	// (0x0004ab5e) bg_popup_call_poc_inact_pane_g5

0xb793,	// (0x00049c57) popup_call_poc_act_window_t1_ParamLimits

0xb793,	// (0x00049c57) popup_call_poc_act_window_t1

0xb7bb,	// (0x00049c7f) popup_call_poc_act_window_t2_ParamLimits

0xb7bb,	// (0x00049c7f) popup_call_poc_act_window_t2

0xb7e3,	// (0x00049ca7) popup_call_poc_act_window_t3_ParamLimits

0xb7e3,	// (0x00049ca7) popup_call_poc_act_window_t3

0xb80b,	// (0x00049ccf) popup_call_poc_act_window_t4_ParamLimits

0xb80b,	// (0x00049ccf) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004d9c6) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004d9c6) popup_call_poc_act_window_t

0xc6a2,	// (0x0004ab66) bg_popup_call_poc_inact_pane_g6

0xc6aa,	// (0x0004ab6e) bg_popup_call_poc_inact_pane_g7

0xc6b2,	// (0x0004ab76) bg_popup_call_poc_inact_pane_g8

0xb81d,	// (0x00049ce1) popup_call_poc_inact_window_g2

0xc6ba,	// (0x0004ab7e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004da45) bg_popup_call_poc_inact_pane_g

0xb825,	// (0x00049ce9) popup_call_poc_inact_window_t1_ParamLimits

0xb825,	// (0x00049ce9) popup_call_poc_inact_window_t1

0xb83a,	// (0x00049cfe) popup_call_poc_inact_window_t2_ParamLimits

0xb83a,	// (0x00049cfe) popup_call_poc_inact_window_t2

0xb84f,	// (0x00049d13) popup_call_poc_inact_window_t3_ParamLimits

0xb84f,	// (0x00049d13) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004d9cf) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004d9cf) popup_call_poc_inact_window_t

0xc886,	// (0x0004ad4a) context_pane_ParamLimits

0x5759,	// (0x00043c1d) signal_pane_ParamLimits

0xaad0,	// (0x00048f94) main_call2_pane

0xc874,	// (0x0004ad38) popup_phob_thumbnail2_window_ParamLimits

0xc874,	// (0x0004ad38) popup_phob_thumbnail2_window

0x4e04,	// (0x000432c8) aid_hotspot_pointer_arrow_pane

0x4e0c,	// (0x000432d0) aid_hotspot_pointer_hand_pane

0x546f,	// (0x00043933) phob_pre_status_pane_g5

0x3019,	// (0x000414dd) cams_zoom_pane_ParamLimits

0x3025,	// (0x000414e9) image_vga_pane_ParamLimits

0x3034,	// (0x000414f8) main_camera_pane_g1_ParamLimits

0x3042,	// (0x00041506) main_camera_pane_g2_ParamLimits

0x304e,	// (0x00041512) main_camera_pane_g3_ParamLimits

0x305c,	// (0x00041520) main_camera_pane_g4_ParamLimits

0x306a,	// (0x0004152e) main_camera_pane_g5_ParamLimits

0x3078,	// (0x0004153c) main_camera_pane_g6_ParamLimits

0x3086,	// (0x0004154a) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004d6ce) main_camera_pane_g_ParamLimits

0x3094,	// (0x00041558) main_camera_pane_t1_ParamLimits

0x30a6,	// (0x0004156a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004d6df) main_camera_pane_t_ParamLimits

0xa827,	// (0x00048ceb) bg_popup_preview_window_pane_cp01_ParamLimits

0xa827,	// (0x00048ceb) bg_popup_preview_window_pane_cp01

0xb864,	// (0x00049d28) popup_phob_thumbnail2_window_g1_ParamLimits

0xb864,	// (0x00049d28) popup_phob_thumbnail2_window_g1

0xa5cc,	// (0x00048a90) call2_cli_visual_pane

0x5166,	// (0x0004362a) popup_call2_audio_conf_window_ParamLimits

0x5166,	// (0x0004362a) popup_call2_audio_conf_window

0x517f,	// (0x00043643) popup_call2_audio_first_window_ParamLimits

0x517f,	// (0x00043643) popup_call2_audio_first_window

0x521d,	// (0x000436e1) popup_call2_audio_in_window_ParamLimits

0x521d,	// (0x000436e1) popup_call2_audio_in_window

0x5261,	// (0x00043725) popup_call2_audio_out_window_ParamLimits

0x5261,	// (0x00043725) popup_call2_audio_out_window

0x52cb,	// (0x0004378f) popup_call2_audio_second_window_ParamLimits

0x52cb,	// (0x0004378f) popup_call2_audio_second_window

0x5329,	// (0x000437ed) popup_call2_audio_wait_window_ParamLimits

0x5329,	// (0x000437ed) popup_call2_audio_wait_window

0xa5cc,	// (0x00048a90) bg_popup_call2_act_pane_cp03

0xa809,	// (0x00048ccd) list_conf_pane_cp

0xb870,	// (0x00049d34) popup_call2_audio_conf_window_t1

0xb87e,	// (0x00049d42) list_single_graphic_popup_conf2_pane_ParamLimits

0xb87e,	// (0x00049d42) list_single_graphic_popup_conf2_pane

0xb21b,	// (0x000496df) list_highlight_pane_cp04

0xb891,	// (0x00049d55) list_single_graphic_popup_conf2_pane_g1

0xb22c,	// (0x000496f0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004d9d6) list_single_graphic_popup_conf2_pane_g

0xb89b,	// (0x00049d5f) list_single_graphic_popup_conf2_pane_t1

0xb8a9,	// (0x00049d6d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8a9,	// (0x00049d6d) bg_popup_call2_act_pane_cp01

0xb933,	// (0x00049df7) call_type_pane_cp05_ParamLimits

0xb933,	// (0x00049df7) call_type_pane_cp05

0xb987,	// (0x00049e4b) popup_call2_audio_second_window_g1_ParamLimits

0xb987,	// (0x00049e4b) popup_call2_audio_second_window_g1

0xb9db,	// (0x00049e9f) popup_call2_audio_second_window_g2_ParamLimits

0xb9db,	// (0x00049e9f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004d9db) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004d9db) popup_call2_audio_second_window_g

0xba40,	// (0x00049f04) popup_call2_audio_second_window_t1_ParamLimits

0xba40,	// (0x00049f04) popup_call2_audio_second_window_t1

0xbafb,	// (0x00049fbf) popup_call2_audio_second_window_t2_ParamLimits

0xbafb,	// (0x00049fbf) popup_call2_audio_second_window_t2

0xbb4e,	// (0x0004a012) popup_call2_audio_second_window_t3_ParamLimits

0xbb4e,	// (0x0004a012) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004d9e2) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004d9e2) popup_call2_audio_second_window_t

0xa5cc,	// (0x00048a90) bg_popup_call2_in_pane_cp02

0xa5d6,	// (0x00048a9a) call_type_pane_cp04

0xa5de,	// (0x00048aa2) popup_call2_audio_wait_window_g1

0xa5e6,	// (0x00048aaa) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004d5bd) popup_call2_audio_wait_window_g

0xa5ee,	// (0x00048ab2) popup_call2_audio_wait_window_t3

0xbc4d,	// (0x0004a111) bg_popup_call2_act_pane_ParamLimits

0xbc4d,	// (0x0004a111) bg_popup_call2_act_pane

0xbd0d,	// (0x0004a1d1) call_type_pane_cp03_ParamLimits

0xbd0d,	// (0x0004a1d1) call_type_pane_cp03

0xbd71,	// (0x0004a235) popup_call2_audio_first_window_g1_ParamLimits

0xbd71,	// (0x0004a235) popup_call2_audio_first_window_g1

0xbde1,	// (0x0004a2a5) popup_call2_audio_first_window_g2_ParamLimits

0xbde1,	// (0x0004a2a5) popup_call2_audio_first_window_g2

0xb2ed,	// (0x000497b1) popup_call2_audio_first_window_g3_ParamLimits

0xb2ed,	// (0x000497b1) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004d9eb) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004d9eb) popup_call2_audio_first_window_g

0xbebf,	// (0x0004a383) popup_call2_audio_first_window_t1_ParamLimits

0xbebf,	// (0x0004a383) popup_call2_audio_first_window_t1

0xbfc2,	// (0x0004a486) popup_call2_audio_first_window_t4_ParamLimits

0xbfc2,	// (0x0004a486) popup_call2_audio_first_window_t4

0xc0a5,	// (0x0004a569) popup_call2_audio_first_window_t5_ParamLimits

0xc0a5,	// (0x0004a569) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004d9f6) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004d9f6) popup_call2_audio_first_window_t

0xa81f,	// (0x00048ce3) bg_popup_call2_act_pane_g1

0xc714,	// (0x0004abd8) popup_cale_lunar_info_window_t1

0xc722,	// (0x0004abe6) popup_cale_lunar_info_window_t2

0xc730,	// (0x0004abf4) popup_cale_lunar_info_window_t3

0xa5cc,	// (0x00048a90) bg_popup_call2_bubble_pane

0xc1a6,	// (0x0004a66a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1a6,	// (0x0004a66a) bg_popup_call2_in_pane_cp01

0xa2a8,	// (0x0004876c) call_type_pane_cp02

0xc1ee,	// (0x0004a6b2) popup_call2_audio_out_window_g1_ParamLimits

0xc1ee,	// (0x0004a6b2) popup_call2_audio_out_window_g1

0xc21a,	// (0x0004a6de) popup_call2_audio_out_window_g2_ParamLimits

0xc21a,	// (0x0004a6de) popup_call2_audio_out_window_g2

0xc242,	// (0x0004a706) popup_call2_audio_out_window_g3_ParamLimits

0xc242,	// (0x0004a706) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004d9ff) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004d9ff) popup_call2_audio_out_window_g

0xc27d,	// (0x0004a741) popup_call2_audio_out_window_t1_ParamLimits

0xc27d,	// (0x0004a741) popup_call2_audio_out_window_t1

0xc2dc,	// (0x0004a7a0) popup_call2_audio_out_window_t2_ParamLimits

0xc2dc,	// (0x0004a7a0) popup_call2_audio_out_window_t2

0xc330,	// (0x0004a7f4) popup_call2_audio_out_window_t3_ParamLimits

0xc330,	// (0x0004a7f4) popup_call2_audio_out_window_t3

0xc346,	// (0x0004a80a) popup_call2_audio_out_window_t4_ParamLimits

0xc346,	// (0x0004a80a) popup_call2_audio_out_window_t4

0xc35c,	// (0x0004a820) popup_call2_audio_out_window_t5_ParamLimits

0xc35c,	// (0x0004a820) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004da08) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004da08) popup_call2_audio_out_window_t

0xc3c0,	// (0x0004a884) bg_popup_call2_in_pane_ParamLimits

0xc3c0,	// (0x0004a884) bg_popup_call2_in_pane

0xc41c,	// (0x0004a8e0) popup_call2_audio_in_window_g1_ParamLimits

0xc41c,	// (0x0004a8e0) popup_call2_audio_in_window_g1

0xc454,	// (0x0004a918) popup_call2_audio_in_window_g2_ParamLimits

0xc454,	// (0x0004a918) popup_call2_audio_in_window_g2

0xc48c,	// (0x0004a950) popup_call2_audio_in_window_g3_ParamLimits

0xc48c,	// (0x0004a950) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004da15) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004da15) popup_call2_audio_in_window_g

0xc4e4,	// (0x0004a9a8) popup_call2_audio_in_window_t1_ParamLimits

0xc4e4,	// (0x0004a9a8) popup_call2_audio_in_window_t1

0xc564,	// (0x0004aa28) popup_call2_audio_in_window_t2_ParamLimits

0xc564,	// (0x0004aa28) popup_call2_audio_in_window_t2

0xc5e4,	// (0x0004aaa8) popup_call2_audio_in_window_t3_ParamLimits

0xc5e4,	// (0x0004aaa8) popup_call2_audio_in_window_t3

0xc5fe,	// (0x0004aac2) popup_call2_audio_in_window_t4_ParamLimits

0xc5fe,	// (0x0004aac2) popup_call2_audio_in_window_t4

0xc610,	// (0x0004aad4) popup_call2_audio_in_window_t5_ParamLimits

0xc610,	// (0x0004aad4) popup_call2_audio_in_window_t5

0xc625,	// (0x0004aae9) popup_call2_audio_in_window_t6_ParamLimits

0xc625,	// (0x0004aae9) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004da1e) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004da1e) popup_call2_audio_in_window_t

0xa81f,	// (0x00048ce3) bg_popup_call2_in_pane_g1

0xc73e,	// (0x0004ac02) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004da86) popup_cale_lunar_info_window_t

0xa827,	// (0x00048ceb) bg_popup_call2_rect_pane_ParamLimits

0xa827,	// (0x00048ceb) bg_popup_call2_rect_pane

0xa5cc,	// (0x00048a90) call2_cli_visual_graphic_pane

0xa5cc,	// (0x00048a90) call2_cli_visual_text_pane

0x57f1,	// (0x00043cb5) smil_status_volume_pane_g3

0x0002,

0xa941,	// (0x00048e05) call2_cli_visual_graphic_pane_g1

0xa941,	// (0x00048e05) call2_cli_visual_graphic_pane_g2

0xa941,	// (0x00048e05) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004da2b) call2_cli_visual_graphic_pane_g

0xc63a,	// (0x0004aafe) bg_popup_call2_rect_pane_g1

0xa9df,	// (0x00048ea3) bg_popup_call2_rect_pane_g2

0xc642,	// (0x0004ab06) bg_popup_call2_rect_pane_g3

0xc64a,	// (0x0004ab0e) bg_popup_call2_rect_pane_g4

0xc652,	// (0x0004ab16) bg_popup_call2_rect_pane_g5

0xc65a,	// (0x0004ab1e) bg_popup_call2_rect_pane_g6

0xc662,	// (0x0004ab26) bg_popup_call2_rect_pane_g7

0xc66a,	// (0x0004ab2e) bg_popup_call2_rect_pane_g8

0xc672,	// (0x0004ab36) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004da32) bg_popup_call2_rect_pane_g

0xc67a,	// (0x0004ab3e) bg_popup_call2_bubble_pane_g1

0xc682,	// (0x0004ab46) bg_popup_call2_bubble_pane_g2

0xc68a,	// (0x0004ab4e) bg_popup_call2_bubble_pane_g3

0xc692,	// (0x0004ab56) bg_popup_call2_bubble_pane_g4

0xc69a,	// (0x0004ab5e) bg_popup_call2_bubble_pane_g5

0xc6a2,	// (0x0004ab66) bg_popup_call2_bubble_pane_g6

0xc6aa,	// (0x0004ab6e) bg_popup_call2_bubble_pane_g7

0xc6b2,	// (0x0004ab76) bg_popup_call2_bubble_pane_g8

0xc6ba,	// (0x0004ab7e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004da45) bg_popup_call2_bubble_pane_g

0x2769,	// (0x00040c2d) aid_cale_week_size_cell_pane

0x30ba,	// (0x0004157e) aid_cams_cif_uncrop_pane_ParamLimits

0x30ba,	// (0x0004157e) aid_cams_cif_uncrop_pane

0x3217,	// (0x000416db) aid_cams_size_cell_ParamLimits

0x3217,	// (0x000416db) aid_cams_size_cell

0x3223,	// (0x000416e7) grid_cams_pane_ParamLimits

0x3231,	// (0x000416f5) linegrid_cams_pane_ParamLimits

0x3302,	// (0x000417c6) call_video_pane_t1

0x331f,	// (0x000417e3) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004d732) call_video_pane_t

0x37eb,	// (0x00041caf) aid_cale_month_size_cell_pane_ParamLimits

0x37eb,	// (0x00041caf) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004dacf) smil_status_volume_pane_g

0x57fe,	// (0x00043cc2) volume_smil_pane_ParamLimits

0xa172,	// (0x00048636) aid_popup2_width_pane

0x266b,	// (0x00040b2f) cell_qdial_pane_g4_ParamLimits

0x266b,	// (0x00040b2f) cell_qdial_pane_g4

0x4721,	// (0x00042be5) aid_blid_cardinal_pane_ParamLimits

0x4731,	// (0x00042bf5) aid_blid_destination_pane_ParamLimits

0x4731,	// (0x00042bf5) aid_blid_destination_pane

0xa827,	// (0x00048ceb) bg_popup_call_poc_act_pane_ParamLimits

0xa827,	// (0x00048ceb) bg_popup_call_poc_act_pane

0xa827,	// (0x00048ceb) bg_popup_call_poc_inact_pane_ParamLimits

0xa827,	// (0x00048ceb) bg_popup_call_poc_inact_pane

0xc6c2,	// (0x0004ab86) bg_popup_call_poc_act_pane_g1

0xc6ca,	// (0x0004ab8e) bg_popup_call_poc_act_pane_g2

0xc6d2,	// (0x0004ab96) bg_popup_call_poc_act_pane_g3

0xc692,	// (0x0004ab56) bg_popup_call_poc_act_pane_g4

0xc69a,	// (0x0004ab5e) bg_popup_call_poc_act_pane_g5

0xc6da,	// (0x0004ab9e) bg_popup_call_poc_act_pane_g6

0xc6aa,	// (0x0004ab6e) bg_popup_call_poc_act_pane_g7

0xc6e2,	// (0x0004aba6) bg_popup_call_poc_act_pane_g8

0xa5cc,	// (0x00048a90) main_usb_pane

0xc84b,	// (0x0004ad0f) popup_cale_lunar_info_window

0x3637,	// (0x00041afb) im_reading_pane_t1_ParamLimits

0xabd5,	// (0x00049099) list_im_pane_ParamLimits

0xabe6,	// (0x000490aa) scroll_pane_cp07_ParamLimits

0xa5cc,	// (0x00048a90) grid_highlight_pane_cp012

0xa827,	// (0x00048ceb) mup_scale_pane_ParamLimits

0xb2ed,	// (0x000497b1) main_usb_pane_g1_ParamLimits

0xb2ed,	// (0x000497b1) main_usb_pane_g1

0x5392,	// (0x00043856) main_usb_pane_g2_ParamLimits

0x5392,	// (0x00043856) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004da6f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004da6f) main_usb_pane_g

0x539e,	// (0x00043862) main_usb_pane_t1_ParamLimits

0x539e,	// (0x00043862) main_usb_pane_t1

0x53b0,	// (0x00043874) main_usb_pane_t2_ParamLimits

0x53b0,	// (0x00043874) main_usb_pane_t2

0x53c2,	// (0x00043886) main_usb_pane_t3_ParamLimits

0x53c2,	// (0x00043886) main_usb_pane_t3

0x53d4,	// (0x00043898) main_usb_pane_t4_ParamLimits

0x53d4,	// (0x00043898) main_usb_pane_t4

0x53e6,	// (0x000438aa) main_usb_pane_t5_ParamLimits

0x53e6,	// (0x000438aa) main_usb_pane_t5

0x53f8,	// (0x000438bc) main_usb_pane_t6_ParamLimits

0x53f8,	// (0x000438bc) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004da74) main_usb_pane_t_ParamLimits

0x46c0,	// (0x00042b84) aid_text_placing

0x46cb,	// (0x00042b8f) main_location2_pane_t1_ParamLimits

0x46e1,	// (0x00042ba5) main_location2_pane_t2_ParamLimits

0x46f7,	// (0x00042bbb) main_location2_pane_t3_ParamLimits

0x470d,	// (0x00042bd1) main_location2_pane_t4_ParamLimits

0x470d,	// (0x00042bd1) main_location2_pane_t4

0xf3cf,	// (0x0004d893) main_location2_pane_t_ParamLimits

0xa863,	// (0x00048d27) find_pinb_pane_g2_ParamLimits

0xa863,	// (0x00048d27) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004d5e3) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004d5e3) find_pinb_pane_g

0xa86f,	// (0x00048d33) find_pinb_pane_t1_ParamLimits

0xa881,	// (0x00048d45) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004d5e8) find_pinb_pane_t_ParamLimits

0xa5cc,	// (0x00048a90) main_call3_pane

0x3d6a,	// (0x0004222e) cale_month_day_heading_pane_t1_ParamLimits

0x3dec,	// (0x000422b0) cale_month_day_heading_pane_t2_ParamLimits

0x3e79,	// (0x0004233d) cale_month_day_heading_pane_t3_ParamLimits

0x3f06,	// (0x000423ca) cale_month_day_heading_pane_t4_ParamLimits

0x3f93,	// (0x00042457) cale_month_day_heading_pane_t5_ParamLimits

0x4028,	// (0x000424ec) cale_month_day_heading_pane_t6_ParamLimits

0x40c5,	// (0x00042589) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004d76a) cale_month_day_heading_pane_t_ParamLimits

0x4371,	// (0x00042835) smil_status_volume_pane

0x4f50,	// (0x00043414) postcard_address_pane_ParamLimits

0x4f50,	// (0x00043414) postcard_address_pane

0x4f5e,	// (0x00043422) postcard_message_pane_ParamLimits

0x4f5e,	// (0x00043422) postcard_message_pane

0x5368,	// (0x0004382c) call2_cli_visual_pane_t1_ParamLimits

0x5368,	// (0x0004382c) call2_cli_visual_pane_t1

0x595d,	// (0x00043e21) postcard_message_pane_t1_ParamLimits

0x595d,	// (0x00043e21) postcard_message_pane_t1

0x5946,	// (0x00043e0a) postcard_address_pane_t1_ParamLimits

0x5946,	// (0x00043e0a) postcard_address_pane_t1

0x5937,	// (0x00043dfb) popup_call3_audio_in_window_ParamLimits

0x5937,	// (0x00043dfb) popup_call3_audio_in_window

0x5815,	// (0x00043cd9) bg_popup_call3_in_pane_ParamLimits

0x5815,	// (0x00043cd9) bg_popup_call3_in_pane

0x587d,	// (0x00043d41) popup_call3_audio_in_window_g1_ParamLimits

0x587d,	// (0x00043d41) popup_call3_audio_in_window_g1

0x5895,	// (0x00043d59) popup_call3_audio_in_window_g2_ParamLimits

0x5895,	// (0x00043d59) popup_call3_audio_in_window_g2

0x58ad,	// (0x00043d71) popup_call3_audio_in_window_g3_ParamLimits

0x58ad,	// (0x00043d71) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004dad6) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004dad6) popup_call3_audio_in_window_g

0x58d5,	// (0x00043d99) popup_call3_audio_in_window_t1_ParamLimits

0x58d5,	// (0x00043d99) popup_call3_audio_in_window_t1

0x58fd,	// (0x00043dc1) popup_call3_audio_in_window_t2_ParamLimits

0x58fd,	// (0x00043dc1) popup_call3_audio_in_window_t2

0x5925,	// (0x00043de9) popup_call3_audio_in_window_t3_ParamLimits

0x5925,	// (0x00043de9) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004dadf) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004dadf) popup_call3_audio_in_window_t

0xaad0,	// (0x00048f94) bg_popup_call3_rect_pane

0xc63a,	// (0x0004aafe) bg_popup_call3_rect_pane_g1

0xa9df,	// (0x00048ea3) bg_popup_call3_rect_pane_g2

0xc642,	// (0x0004ab06) bg_popup_call3_rect_pane_g3

0xc64a,	// (0x0004ab0e) bg_popup_call3_rect_pane_g4

0xc652,	// (0x0004ab16) bg_popup_call3_rect_pane_g5

0xc65a,	// (0x0004ab1e) bg_popup_call3_rect_pane_g6

0xc662,	// (0x0004ab26) bg_popup_call3_rect_pane_g7

0x4b67,	// (0x0004302b) mup_visualizer_osc_pane

0xb4bf,	// (0x00049983) mup_visualizer_spec_pane

0x5835,	// (0x00043cf9) call3_video_qcif_pane_ParamLimits

0x5835,	// (0x00043cf9) call3_video_qcif_pane

0x5847,	// (0x00043d0b) call3_video_qcif_uncrop_pane_ParamLimits

0x5847,	// (0x00043d0b) call3_video_qcif_uncrop_pane

0x5857,	// (0x00043d1b) call3_video_subqcif_pane_ParamLimits

0x5857,	// (0x00043d1b) call3_video_subqcif_pane

0x586b,	// (0x00043d2f) call3_video_subqcif_uncrop_pane_ParamLimits

0x586b,	// (0x00043d2f) call3_video_subqcif_uncrop_pane

0x58c5,	// (0x00043d89) popup_call3_audio_in_window_g4_ParamLimits

0x58c5,	// (0x00043d89) popup_call3_audio_in_window_g4

0x57e0,	// (0x00043ca4) mup_spec_half_pane

0x57e9,	// (0x00043cad) mup_spec_half_pane_cp

0xc8e6,	// (0x0004adaa) mup_osc_middle_pane

0xc8ef,	// (0x0004adb3) mup_visualizer_osc_pane_g1

0x57c0,	// (0x00043c84) mup_spec_bar_pane_ParamLimits

0x57c0,	// (0x00043c84) mup_spec_bar_pane

0xc8d3,	// (0x0004ad97) mup_spec_bar_pane_g1

0xc8dd,	// (0x0004ada1) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004daca) mup_spec_bar_pane_g

0x2769,	// (0x00040c2d) aid_cale_week_size_cell_pane_ParamLimits

0x2783,	// (0x00040c47) bg_cale_heading_pane_ParamLimits

0x27ac,	// (0x00040c70) bg_cale_pane_cp01_ParamLimits

0x27ce,	// (0x00040c92) cale_week_corner_pane_ParamLimits

0x27ed,	// (0x00040cb1) cale_week_day_heading_pane_ParamLimits

0x281b,	// (0x00040cdf) cale_week_scroll_pane_g1_ParamLimits

0x283f,	// (0x00040d03) cale_week_scroll_pane_g2_ParamLimits

0x2857,	// (0x00040d1b) cale_week_scroll_pane_g3_ParamLimits

0x286f,	// (0x00040d33) cale_week_scroll_pane_g4_ParamLimits

0x2887,	// (0x00040d4b) cale_week_scroll_pane_g5_ParamLimits

0x289f,	// (0x00040d63) cale_week_scroll_pane_g6_ParamLimits

0x28bf,	// (0x00040d83) cale_week_scroll_pane_g7_ParamLimits

0x28df,	// (0x00040da3) cale_week_scroll_pane_g8_ParamLimits

0x28ff,	// (0x00040dc3) cale_week_scroll_pane_g9_ParamLimits

0x291c,	// (0x00040de0) cale_week_scroll_pane_g10_ParamLimits

0x2939,	// (0x00040dfd) cale_week_scroll_pane_g11_ParamLimits

0x2956,	// (0x00040e1a) cale_week_scroll_pane_g12_ParamLimits

0x2973,	// (0x00040e37) cale_week_scroll_pane_g13_ParamLimits

0x2998,	// (0x00040e5c) cale_week_scroll_pane_g14_ParamLimits

0x29c1,	// (0x00040e85) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004d674) cale_week_scroll_pane_g_ParamLimits

0x2a0a,	// (0x00040ece) cale_week_time_pane_ParamLimits

0x2a2a,	// (0x00040eee) grid_cale_week_pane_ParamLimits

0xaa41,	// (0x00048f05) listscroll_cale_week_pane_t1

0xaa53,	// (0x00048f17) scroll_pane_cp08_ParamLimits

0x3858,	// (0x00041d1c) cale_month_corner_pane_ParamLimits

0xae06,	// (0x000492ca) cale_month_pane_t1

0x3cfc,	// (0x000421c0) cale_month_week_pane_ParamLimits

0xb2ed,	// (0x000497b1) popup_call_status_window_g1_ParamLimits

0x44c9,	// (0x0004298d) popup_call_status_window_g2_ParamLimits

0x44d5,	// (0x00042999) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004d81a) popup_call_status_window_g_ParamLimits

0xb19c,	// (0x00049660) aid_call2_pane

0x0d92,	// (0x0003f256) msg_header_pane_g1

0x4f50,	// (0x00043414) postcard_address2_pane_ParamLimits

0x4f50,	// (0x00043414) postcard_address2_pane

0x4f5e,	// (0x00043422) postcard_message2_pane_ParamLimits

0x4f5e,	// (0x00043422) postcard_message2_pane

0x5767,	// (0x00043c2b) message2_row_pane_ParamLimits

0x5767,	// (0x00043c2b) message2_row_pane

0x5781,	// (0x00043c45) address2_row_pane_ParamLimits

0x5781,	// (0x00043c45) address2_row_pane

0xc8a1,	// (0x0004ad65) postcard_message2_row_pane_g1

0xc8a9,	// (0x0004ad6d) postcard_message2_row_pane_t1

0xc8a1,	// (0x0004ad65) address2_row_pane_g1

0xc8a9,	// (0x0004ad6d) address2_row_pane_t1

0x2f92,	// (0x00041456) aid_size_cell_vorec

0xa5cc,	// (0x00048a90) main_rss_pane

0x5794,	// (0x00043c58) rss_list_single_pane_ParamLimits

0x5794,	// (0x00043c58) rss_list_single_pane

0xc8b7,	// (0x0004ad7b) rss_list_single_pane_t1

0xc8c5,	// (0x0004ad89) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004dac5) rss_list_single_pane_t

0xa5cc,	// (0x00048a90) main_camera2_pane

0xa5cc,	// (0x00048a90) main_video2_pane

0x59c1,	// (0x00043e85) cams_zoom_pane_cp2_ParamLimits

0x59c1,	// (0x00043e85) cams_zoom_pane_cp2

0x59cd,	// (0x00043e91) image2_vga_pane_ParamLimits

0x59cd,	// (0x00043e91) image2_vga_pane

0x59dc,	// (0x00043ea0) main_camera2_pane_g1_ParamLimits

0x59dc,	// (0x00043ea0) main_camera2_pane_g1

0x59e8,	// (0x00043eac) main_camera2_pane_g2_ParamLimits

0x59e8,	// (0x00043eac) main_camera2_pane_g2

0x59f4,	// (0x00043eb8) main_camera2_pane_g3_ParamLimits

0x59f4,	// (0x00043eb8) main_camera2_pane_g3

0x5a00,	// (0x00043ec4) main_camera2_pane_g4_ParamLimits

0x5a00,	// (0x00043ec4) main_camera2_pane_g4

0x5a0c,	// (0x00043ed0) main_camera2_pane_g5_ParamLimits

0x5a0c,	// (0x00043ed0) main_camera2_pane_g5

0x5a18,	// (0x00043edc) main_camera2_pane_g6_ParamLimits

0x5a18,	// (0x00043edc) main_camera2_pane_g6

0x5a24,	// (0x00043ee8) main_camera2_pane_g7_ParamLimits

0x5a24,	// (0x00043ee8) main_camera2_pane_g7

0x5a30,	// (0x00043ef4) main_camera2_pane_g8_ParamLimits

0x5a30,	// (0x00043ef4) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004dae6) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004dae6) main_camera2_pane_g

0x5a48,	// (0x00043f0c) main_camera2_pane_t1_ParamLimits

0x5a48,	// (0x00043f0c) main_camera2_pane_t1

0x5a5a,	// (0x00043f1e) main_camera2_pane_t2_ParamLimits

0x5a5a,	// (0x00043f1e) main_camera2_pane_t2

0x5a6c,	// (0x00043f30) main_camera2_pane_t3_ParamLimits

0x5a6c,	// (0x00043f30) main_camera2_pane_t3

0x5a7e,	// (0x00043f42) main_camera2_pane_t4_ParamLimits

0x5a7e,	// (0x00043f42) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004daf9) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004daf9) main_camera2_pane_t

0x5adb,	// (0x00043f9f) cams_zoom_pane_cp4_ParamLimits

0x5adb,	// (0x00043f9f) cams_zoom_pane_cp4

0x5aeb,	// (0x00043faf) image2_cif_pane_ParamLimits

0x5aeb,	// (0x00043faf) image2_cif_pane

0x5b00,	// (0x00043fc4) image2_subqcif_pane_ParamLimits

0x5b00,	// (0x00043fc4) image2_subqcif_pane

0x5b0f,	// (0x00043fd3) main_video2_pane_g1_ParamLimits

0x5b0f,	// (0x00043fd3) main_video2_pane_g1

0x5b21,	// (0x00043fe5) main_video2_pane_g2_ParamLimits

0x5b21,	// (0x00043fe5) main_video2_pane_g2

0x5b31,	// (0x00043ff5) main_video2_pane_g3_ParamLimits

0x5b31,	// (0x00043ff5) main_video2_pane_g3

0x5b41,	// (0x00044005) main_video2_pane_g4_ParamLimits

0x5b41,	// (0x00044005) main_video2_pane_g4

0x5b51,	// (0x00044015) main_video2_pane_g5_ParamLimits

0x5b51,	// (0x00044015) main_video2_pane_g5

0x5b61,	// (0x00044025) main_video2_pane_g6_ParamLimits

0x5b61,	// (0x00044025) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004db08) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004db08) main_video2_pane_g

0x5b73,	// (0x00044037) main_video2_pane_t1_ParamLimits

0x5b73,	// (0x00044037) main_video2_pane_t1

0x5b8d,	// (0x00044051) main_video2_pane_t2_ParamLimits

0x5b8d,	// (0x00044051) main_video2_pane_t2

0x5bb3,	// (0x00044077) main_video2_pane_t3_ParamLimits

0x5bb3,	// (0x00044077) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004db15) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004db15) main_video2_pane_t

0x54af,	// (0x00043973) call_muted_g2

0x0001,

0xf5f3,	// (0x0004dab7) call_muted_g

0xa5cc,	// (0x00048a90) main_mup2_pane

0xc926,	// (0x0004adea) main_mup2_pane_g1_ParamLimits

0xc926,	// (0x0004adea) main_mup2_pane_g1

0x5bd9,	// (0x0004409d) main_mup2_pane_g2_ParamLimits

0x5bd9,	// (0x0004409d) main_mup2_pane_g2

0x5e6b,	// (0x0004432f) main_mup_pane_g13_cp1

0x5e73,	// (0x00044337) mup_volume_pane_cp1

0x5bfb,	// (0x000440bf) main_mup2_pane_g4_ParamLimits

0x5bfb,	// (0x000440bf) main_mup2_pane_g4

0x5c10,	// (0x000440d4) main_mup2_pane_g5_ParamLimits

0x5c10,	// (0x000440d4) main_mup2_pane_g5

0x5c25,	// (0x000440e9) main_mup2_pane_g6_ParamLimits

0x5c25,	// (0x000440e9) main_mup2_pane_g6

0x5c3a,	// (0x000440fe) main_mup2_pane_g7_ParamLimits

0x5c3a,	// (0x000440fe) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004db1c) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004db1c) main_mup2_pane_g

0x5c56,	// (0x0004411a) main_mup2_pane_t1_ParamLimits

0x5c56,	// (0x0004411a) main_mup2_pane_t1

0x5c6d,	// (0x00044131) main_mup2_pane_t2_ParamLimits

0x5c6d,	// (0x00044131) main_mup2_pane_t2

0x5c84,	// (0x00044148) main_mup2_pane_t3_ParamLimits

0x5c84,	// (0x00044148) main_mup2_pane_t3

0x5c9b,	// (0x0004415f) main_mup2_pane_t4_ParamLimits

0x5c9b,	// (0x0004415f) main_mup2_pane_t4

0x5cb5,	// (0x00044179) main_mup2_pane_t5_ParamLimits

0x5cb5,	// (0x00044179) main_mup2_pane_t5

0x5ccf,	// (0x00044193) main_mup2_pane_t6_ParamLimits

0x5ccf,	// (0x00044193) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004db2b) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004db2b) main_mup2_pane_t

0x5d07,	// (0x000441cb) mup2_visualizer_pane_ParamLimits

0x5d07,	// (0x000441cb) mup2_visualizer_pane

0x5d3d,	// (0x00044201) mup_progress_pane_cp_ParamLimits

0x5d3d,	// (0x00044201) mup_progress_pane_cp

0x5e56,	// (0x0004431a) mup_volume_pane_cp_ParamLimits

0x5e56,	// (0x0004431a) mup_volume_pane_cp

0x5d56,	// (0x0004421a) mup2_visualizer_pane_g1_ParamLimits

0x5d56,	// (0x0004421a) mup2_visualizer_pane_g1

0xc932,	// (0x0004adf6) mup2_visualizer_pane_g2_ParamLimits

0xc932,	// (0x0004adf6) mup2_visualizer_pane_g2

0x5d6b,	// (0x0004422f) mup2_visualizer_pane_g3_ParamLimits

0x5d6b,	// (0x0004422f) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004db38) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004db38) mup2_visualizer_pane_g

0xb6fa,	// (0x00049bbe) aid_size_cell_fmradio

0x55c5,	// (0x00043a89) aid_height_parent_landcape

0xac64,	// (0x00049128) wml_content_pane_cp

0xac6c,	// (0x00049130) wml_tabs_pane

0xac75,	// (0x00049139) popup_wml_miniature_window

0xac7d,	// (0x00049141) scroll_pane_cp021

0xac91,	// (0x00049155) wml_content_pane_comp8

0xa5cc,	// (0x00048a90) bg_popup_sub_pane_cp05

0xc950,	// (0x0004ae14) popup_wml_miniature_window_g1

0xc958,	// (0x0004ae1c) wml_miniature_view_pane

0x5d79,	// (0x0004423d) aid_size_wml_view

0x5d81,	// (0x00044245) wml_miniature_view_pane_g1

0x5d8a,	// (0x0004424e) wml_miniature_view_pane_g2

0x5d93,	// (0x00044257) wml_miniature_view_pane_g3

0x5d9b,	// (0x0004425f) wml_miniature_view_pane_g4

0x5da3,	// (0x00044267) wml_miniature_view_pane_g5

0x5dab,	// (0x0004426f) wml_miniature_view_pane_g6

0x5db3,	// (0x00044277) wml_miniature_view_pane_g7

0x5dbb,	// (0x0004427f) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004db3f) wml_miniature_view_pane_g

0xc926,	// (0x0004adea) background_graphic_ParamLimits

0xc926,	// (0x0004adea) background_graphic

0xc960,	// (0x0004ae24) wml_tabs_2_pane

0xc969,	// (0x0004ae2d) wml_tabs_3_pane_ParamLimits

0xc969,	// (0x0004ae2d) wml_tabs_3_pane

0xc97b,	// (0x0004ae3f) wml_tabs_4_pane_ParamLimits

0xc97b,	// (0x0004ae3f) wml_tabs_4_pane

0xc991,	// (0x0004ae55) wml_tabs_5_pane_ParamLimits

0xc991,	// (0x0004ae55) wml_tabs_5_pane

0xc9ab,	// (0x0004ae6f) wml_tabs_pane_g2_ParamLimits

0xc9ab,	// (0x0004ae6f) wml_tabs_pane_g2

0xc9bf,	// (0x0004ae83) wml_tabs_pane_g3_ParamLimits

0xc9bf,	// (0x0004ae83) wml_tabs_pane_g3

0x5dc3,	// (0x00044287) wml_tabs_2_active_pane_ParamLimits

0x5dc3,	// (0x00044287) wml_tabs_2_active_pane

0x5dd5,	// (0x00044299) wml_tabs_2_passive_pane_ParamLimits

0x5dd5,	// (0x00044299) wml_tabs_2_passive_pane

0x5de7,	// (0x000442ab) wml_tabs_3_active_pane_cp_ParamLimits

0x5de7,	// (0x000442ab) wml_tabs_3_active_pane_cp

0x5dfa,	// (0x000442be) wml_tabs_3_passive_pane_ParamLimits

0x5dfa,	// (0x000442be) wml_tabs_3_passive_pane

0x5e0b,	// (0x000442cf) wml_tabs_3_passive_pane_cp_ParamLimits

0x5e0b,	// (0x000442cf) wml_tabs_3_passive_pane_cp

0x5e20,	// (0x000442e4) tabs_4_active_pane

0x5e28,	// (0x000442ec) tabs_4_passive_pane

0x5e30,	// (0x000442f4) tabs_4_passive_pane_cp

0x5e38,	// (0x000442fc) tabs_4_passive_pane_cp2

0x538a,	// (0x0004384e) aid_height_text

0x4b30,	// (0x00042ff4) mup_volume_cont_pane_ParamLimits

0x4b30,	// (0x00042ff4) mup_volume_cont_pane

0x22c1,	// (0x00040785) aid_size_cell_pinb

0x22cb,	// (0x0004078f) aid_size_list_pinb

0x5d26,	// (0x000441ea) mup2_volume_cont_pane_ParamLimits

0x5d26,	// (0x000441ea) mup2_volume_cont_pane

0x5e42,	// (0x00044306) mup2_volume_cont_pane_g1_ParamLimits

0x5e42,	// (0x00044306) mup2_volume_cont_pane_g1

0x1f3b,	// (0x000403ff) aid_size_cell_touch_ParamLimits

0x1f3b,	// (0x000403ff) aid_size_cell_touch

0x21ab,	// (0x0004066f) touch_pane_ParamLimits

0x21ab,	// (0x0004066f) touch_pane

0xa160,	// (0x00048624) main_rss2_pane

0xc9dc,	// (0x0004aea0) listscroll_rss2_pane

0xc9e5,	// (0x0004aea9) rss2_navigation_pane

0xc9ed,	// (0x0004aeb1) list_rss2_pane

0xb2c0,	// (0x00049784) scroll_pane_cp22

0xc9f5,	// (0x0004aeb9) rss2_navigation_pane_g1

0xc9fe,	// (0x0004aec2) rss2_navigation_pane_g2

0xca06,	// (0x0004aeca) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004db50) rss2_navigation_pane_g

0xca0e,	// (0x0004aed2) rss2_navigation_pane_t1

0x5e7b,	// (0x0004433f) rss2_list_single_pane_ParamLimits

0x5e7b,	// (0x0004433f) rss2_list_single_pane

0xca1c,	// (0x0004aee0) rss2_list_single_pane_t2

0xca2a,	// (0x0004aeee) rss2_list_single_pane_t3_ParamLimits

0xca2a,	// (0x0004aeee) rss2_list_single_pane_t3

0xca47,	// (0x0004af0b) rss2_list_single_pane_t4

0x435b,	// (0x0004281f) smil_status_pane_g1

0xa9f9,	// (0x00048ebd) main_image2_pane_ParamLimits

0xa9f9,	// (0x00048ebd) main_image2_pane

0x5a3c,	// (0x00043f00) main_camera2_pane_g9_ParamLimits

0x5a3c,	// (0x00043f00) main_camera2_pane_g9

0x5a90,	// (0x00043f54) main_camera2_pane_t5_ParamLimits

0x5a90,	// (0x00043f54) main_camera2_pane_t5

0x5aa2,	// (0x00043f66) main_camera2_pane_t6_ParamLimits

0x5aa2,	// (0x00043f66) main_camera2_pane_t6

0x5e9e,	// (0x00044362) main_image2_pane_g1_ParamLimits

0x5e9e,	// (0x00044362) main_image2_pane_g1

0x5127,	// (0x000435eb) smil2_video_pane_ParamLimits

0x5127,	// (0x000435eb) smil2_video_pane

0x0b56,	// (0x0003f01a) aid_zoom_text_primary_cp

0xa1af,	// (0x00048673) popup_preview_fixed_window

0xabcd,	// (0x00049091) im_reading_pane_g1

0x5986,	// (0x00043e4a) cams2_bc_adjust_pane_cp_ParamLimits

0x5986,	// (0x00043e4a) cams2_bc_adjust_pane_cp

0x5acd,	// (0x00043f91) cams2_bc_adjust_pane_ParamLimits

0x5acd,	// (0x00043f91) cams2_bc_adjust_pane

0x5eaa,	// (0x0004436e) cams2_bc_adjust_pane_g1

0x5eb2,	// (0x00044376) cams2_slider_pane

0x5ebb,	// (0x0004437f) cams2_slider_pane_g1

0x5ec4,	// (0x00044388) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004db57) cams2_slider_pane_g

0x23c6,	// (0x0004088a) calc_display_pane_ParamLimits

0x23e4,	// (0x000408a8) calc_paper_pane_ParamLimits

0x2400,	// (0x000408c4) grid_calc_pane_ParamLimits

0x4533,	// (0x000429f7) popup_clock_digital_window_t1_ParamLimits

0xb697,	// (0x00049b5b) main_image_pane_t1

0x23ac,	// (0x00040870) aid_size_cell_calc_ParamLimits

0x23ac,	// (0x00040870) aid_size_cell_calc

0x55f7,	// (0x00043abb) popup_blid_sat_info2_window_ParamLimits

0x55f7,	// (0x00043abb) popup_blid_sat_info2_window

0xca5d,	// (0x0004af21) aid_size_cell_blid

0xca65,	// (0x0004af29) bg_popup_window_pane_cp07

0xca88,	// (0x0004af4c) grid_popup_blid_pane

0xca92,	// (0x0004af56) heading_pane_cp05_ParamLimits

0xca92,	// (0x0004af56) heading_pane_cp05

0xcb5c,	// (0x0004b020) cell_popup_blid_pane_ParamLimits

0xcb5c,	// (0x0004b020) cell_popup_blid_pane

0xcb86,	// (0x0004b04a) cell_popup_blid_pane_g1

0xcb8e,	// (0x0004b052) cell_popup_blid_pane_t1

0x5cec,	// (0x000441b0) mup2_indicator_pane_ParamLimits

0x5cec,	// (0x000441b0) mup2_indicator_pane

0xaad0,	// (0x00048f94) mup2_visualizer_osc_pane

0xc93e,	// (0x0004ae02) mup2_visualizer_spec_pane_ParamLimits

0xc93e,	// (0x0004ae02) mup2_visualizer_spec_pane

0x5ede,	// (0x000443a2) mup2_spec_half_pane

0x5ee7,	// (0x000443ab) mup2_spec_half_pane_cp

0x5ef1,	// (0x000443b5) mup2_spec_bar_pane_ParamLimits

0x5ef1,	// (0x000443b5) mup2_spec_bar_pane

0xc8d3,	// (0x0004ad97) mup2_spec_bar_pane_g1

0xc8dd,	// (0x0004ada1) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004daca) mup2_spec_bar_pane_g

0x5f10,	// (0x000443d4) mup2_osc_middle_pane

0xc8ef,	// (0x0004adb3) mup2_visualizer_osc_pane_g1

0xa1d9,	// (0x0004869d) popup_number_entry_window_t1_ParamLimits

0xa1ec,	// (0x000486b0) popup_number_entry_window_t2_ParamLimits

0xa1fe,	// (0x000486c2) popup_number_entry_window_t3_ParamLimits

0x2202,	// (0x000406c6) popup_number_entry_window_t5_ParamLimits

0x2202,	// (0x000406c6) popup_number_entry_window_t5

0xf0ca,	// (0x0004d58e) popup_number_entry_window_t_ParamLimits

0xa210,	// (0x000486d4) text_title_cp2_ParamLimits

0x4e14,	// (0x000432d8) aid_hotspot_pointer_text2_pane

0x4eae,	// (0x00043372) main_viewer_pane_g9_ParamLimits

0x4eae,	// (0x00043372) main_viewer_pane_g9

0xae06,	// (0x000492ca) cale_month_pane_t1_ParamLimits

0xae2c,	// (0x000492f0) bg_cale_pane_ParamLimits

0xae44,	// (0x00049308) list_cale_pane_ParamLimits

0xae55,	// (0x00049319) listscroll_cale_day_pane_t1

0xae67,	// (0x0004932b) scroll_pane_cp09_ParamLimits

0x4b6f,	// (0x00043033) main_mup_eq_pane_t1_ParamLimits

0x4b6f,	// (0x00043033) main_mup_eq_pane_t1

0x4b8b,	// (0x0004304f) main_mup_eq_pane_t2_ParamLimits

0x4b8b,	// (0x0004304f) main_mup_eq_pane_t2

0x4ba7,	// (0x0004306b) main_mup_eq_pane_t3_ParamLimits

0x4ba7,	// (0x0004306b) main_mup_eq_pane_t3

0x4bc1,	// (0x00043085) main_mup_eq_pane_t4_ParamLimits

0x4bc1,	// (0x00043085) main_mup_eq_pane_t4

0x4bdb,	// (0x0004309f) main_mup_eq_pane_t5_ParamLimits

0x4bdb,	// (0x0004309f) main_mup_eq_pane_t5

0x4bf5,	// (0x000430b9) main_mup_eq_pane_t6_ParamLimits

0x4bf5,	// (0x000430b9) main_mup_eq_pane_t6

0x4c0b,	// (0x000430cf) main_mup_eq_pane_t7_ParamLimits

0x4c0b,	// (0x000430cf) main_mup_eq_pane_t7

0x4c21,	// (0x000430e5) main_mup_eq_pane_t8_ParamLimits

0x4c21,	// (0x000430e5) main_mup_eq_pane_t8

0x4c37,	// (0x000430fb) main_mup_eq_pane_t9_ParamLimits

0x4c37,	// (0x000430fb) main_mup_eq_pane_t9

0x4c53,	// (0x00043117) main_mup_eq_pane_t10_ParamLimits

0x4c53,	// (0x00043117) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004d919) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004d919) main_mup_eq_pane_t

0x4d18,	// (0x000431dc) mup_equalizer_pane_cp5_ParamLimits

0x4d30,	// (0x000431f4) mup_equalizer_pane_cp6_ParamLimits

0x4d48,	// (0x0004320c) mup_equalizer_pane_cp7_ParamLimits

0xa160,	// (0x00048624) main_gallery_pane

0xc8f8,	// (0x0004adbc) smil2_volume_pane

0xc900,	// (0x0004adc4) smil_status_volume_pane_g1_ParamLimits

0xc913,	// (0x0004add7) smil_status_volume_pane_g2_ParamLimits

0x57f1,	// (0x00043cb5) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004dacf) smil_status_volume_pane_g_ParamLimits

0xca65,	// (0x0004af29) bg_popup_window_pane_cp07_ParamLimits

0xca73,	// (0x0004af37) blid_firmament_pane

0x5f19,	// (0x000443dd) aid_size_cell_gallery_ParamLimits

0x5f19,	// (0x000443dd) aid_size_cell_gallery

0x5f27,	// (0x000443eb) grid_gallery_pane_ParamLimits

0x5f27,	// (0x000443eb) grid_gallery_pane

0x5f37,	// (0x000443fb) cell_gallery_pane_ParamLimits

0x5f37,	// (0x000443fb) cell_gallery_pane

0xcb9c,	// (0x0004b060) bg_cell_gallery_focus_pane_ParamLimits

0xcb9c,	// (0x0004b060) bg_cell_gallery_focus_pane

0xcbae,	// (0x0004b072) cell_gallery_pane_g1_ParamLimits

0xcbae,	// (0x0004b072) cell_gallery_pane_g1

0x5f7d,	// (0x00044441) cell_gallery_pane_g2_ParamLimits

0x5f7d,	// (0x00044441) cell_gallery_pane_g2

0x5f8a,	// (0x0004444e) cell_gallery_pane_g3_ParamLimits

0x5f8a,	// (0x0004444e) cell_gallery_pane_g3

0xcbba,	// (0x0004b07e) cell_gallery_pane_g4_ParamLimits

0xcbba,	// (0x0004b07e) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004db7d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004db7d) cell_gallery_pane_g

0xcbc6,	// (0x0004b08a) bg_cell_gallery_focus_pane_g1

0xcbce,	// (0x0004b092) bg_cell_gallery_focus_pane_g2

0xcbd6,	// (0x0004b09a) bg_cell_gallery_focus_pane_g3

0xcbde,	// (0x0004b0a2) bg_cell_gallery_focus_pane_g4

0xcbe6,	// (0x0004b0aa) bg_cell_gallery_focus_pane_g5

0xcbee,	// (0x0004b0b2) bg_cell_gallery_focus_pane_g6

0xcbf6,	// (0x0004b0ba) bg_cell_gallery_focus_pane_g7

0xcbfe,	// (0x0004b0c2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004db86) bg_cell_gallery_focus_pane_g

0xcc06,	// (0x0004b0ca) aid_firma_cardinal

0xcc1a,	// (0x0004b0de) blid_firmament_pane_t1

0xcc31,	// (0x0004b0f5) blid_firmament_pane_t2

0xcc48,	// (0x0004b10c) blid_firmament_pane_t3

0xcc5f,	// (0x0004b123) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004db97) blid_firmament_pane_t

0xcc76,	// (0x0004b13a) blid_sat_info_pane

0xcc86,	// (0x0004b14a) blid_sat_info_pane_g1

0xcc86,	// (0x0004b14a) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004dba0) blid_sat_info_pane_g

0xcc90,	// (0x0004b154) blid_sat_info_pane_t1

0xcc9e,	// (0x0004b162) smil2_volume_content_pane

0xcca7,	// (0x0004b16b) smil2_volume_pane_g1

0xccaf,	// (0x0004b173) smil2_volume_content_pane_g1

0xccb8,	// (0x0004b17c) smil2_volume_content_pane_g2

0xccd5,	// (0x0004b199) smil2_volume_content_pane_g3

0xccde,	// (0x0004b1a2) smil2_volume_content_pane_g4

0xcce7,	// (0x0004b1ab) smil2_volume_content_pane_g5

0xccf0,	// (0x0004b1b4) smil2_volume_content_pane_g6

0xccf9,	// (0x0004b1bd) smil2_volume_content_pane_g7

0xcd02,	// (0x0004b1c6) smil2_volume_content_pane_g8

0xcd0b,	// (0x0004b1cf) smil2_volume_content_pane_g9

0xcd14,	// (0x0004b1d8) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004dba5) smil2_volume_content_pane_g

0x2aed,	// (0x00040fb1) cale_week_day_heading_pane_t1_ParamLimits

0x2b35,	// (0x00040ff9) cale_week_day_heading_pane_t2_ParamLimits

0x2b82,	// (0x00041046) cale_week_day_heading_pane_t3_ParamLimits

0x2bcf,	// (0x00041093) cale_week_day_heading_pane_t4_ParamLimits

0x2c1c,	// (0x000410e0) cale_week_day_heading_pane_t5_ParamLimits

0x2c69,	// (0x0004112d) cale_week_day_heading_pane_t6_ParamLimits

0x2cb6,	// (0x0004117a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004d695) cale_week_day_heading_pane_t_ParamLimits

0xaa75,	// (0x00048f39) bg_cale_side_pane_ParamLimits

0x2cfe,	// (0x000411c2) cale_week_time_pane_t1_ParamLimits

0x2d42,	// (0x00041206) cale_week_time_pane_t2_ParamLimits

0x2d86,	// (0x0004124a) cale_week_time_pane_t3_ParamLimits

0x2dca,	// (0x0004128e) cale_week_time_pane_t4_ParamLimits

0x2e0e,	// (0x000412d2) cale_week_time_pane_t5_ParamLimits

0x2e52,	// (0x00041316) cale_week_time_pane_t6_ParamLimits

0x2e96,	// (0x0004135a) cale_week_time_pane_t7_ParamLimits

0x2ee2,	// (0x000413a6) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004d6a4) cale_week_time_pane_t_ParamLimits

0x2f30,	// (0x000413f4) cell_cale_week_pane_g2_ParamLimits

0xaa75,	// (0x00048f39) bg_cale_side_pane_cp01_ParamLimits

0x4162,	// (0x00042626) cale_month_week_pane_t1_ParamLimits

0x417b,	// (0x0004263f) cale_month_week_pane_t2_ParamLimits

0x4194,	// (0x00042658) cale_month_week_pane_t3_ParamLimits

0x41ad,	// (0x00042671) cale_month_week_pane_t4_ParamLimits

0x41c6,	// (0x0004268a) cale_month_week_pane_t5_ParamLimits

0x41e1,	// (0x000426a5) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004d779) cale_month_week_pane_t_ParamLimits

0x4324,	// (0x000427e8) cell_cale_month_pane_g1_ParamLimits

0xa160,	// (0x00048624) main_cale_event_viewer_pane

0xa160,	// (0x00048624) listscroll_cale_event_viewer_pane

0xcd1d,	// (0x0004b1e1) list_cale_ev_pane

0xcd25,	// (0x0004b1e9) scroll_pane_cp023

0x5f97,	// (0x0004445b) field_cale_ev_pane_ParamLimits

0x5f97,	// (0x0004445b) field_cale_ev_pane

0xcd31,	// (0x0004b1f5) field_cale_ev_content_pane_ParamLimits

0xcd31,	// (0x0004b1f5) field_cale_ev_content_pane

0xcd3d,	// (0x0004b201) field_cale_ev_pane_g1_ParamLimits

0xcd3d,	// (0x0004b201) field_cale_ev_pane_g1

0xcd49,	// (0x0004b20d) field_cale_ev_pane_g2_ParamLimits

0xcd49,	// (0x0004b20d) field_cale_ev_pane_g2

0xcd61,	// (0x0004b225) field_cale_ev_pane_g3_ParamLimits

0xcd61,	// (0x0004b225) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004dbba) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004dbba) field_cale_ev_pane_g

0xcd79,	// (0x0004b23d) field_cale_ev_pane_t1_ParamLimits

0xcd79,	// (0x0004b23d) field_cale_ev_pane_t1

0x5fbb,	// (0x0004447f) field_cale_ev_content_pane_t1_ParamLimits

0x5fbb,	// (0x0004447f) field_cale_ev_content_pane_t1

0xb56b,	// (0x00049a2f) bg_button_pane_cp01

0x274d,	// (0x00040c11) listscroll_cale_week_pane_ParamLimits

0x275f,	// (0x00040c23) popup_toolbar_window_cp01

0xaa41,	// (0x00048f05) listscroll_cale_week_pane_t1_ParamLimits

0x274d,	// (0x00040c11) listscroll_cale_day_pane_ParamLimits

0x275f,	// (0x00040c23) popup_toolbar_window_cp02

0xae55,	// (0x00049319) listscroll_cale_day_pane_t1_ParamLimits

0x274d,	// (0x00040c11) main_cale_month_pane_ParamLimits

0x56db,	// (0x00043b9f) popup_toolbar_window_cp03_ParamLimits

0x56db,	// (0x00043b9f) popup_toolbar_window_cp03

0x5037,	// (0x000434fb) main_image_pane_g2_ParamLimits

0x5037,	// (0x000434fb) main_image_pane_g2

0x5043,	// (0x00043507) main_image_pane_g3_ParamLimits

0x5043,	// (0x00043507) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004d9ab) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004d9ab) main_image_pane_g

0xb697,	// (0x00049b5b) main_image_pane_t1_ParamLimits

0x504f,	// (0x00043513) main_image_pane_t2_ParamLimits

0x504f,	// (0x00043513) main_image_pane_t2

0x5061,	// (0x00043525) main_image_pane_t3_ParamLimits

0x5061,	// (0x00043525) main_image_pane_t3

0x5073,	// (0x00043537) main_image_pane_t4_ParamLimits

0x5073,	// (0x00043537) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004d9b2) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004d9b2) main_image_pane_t

0x5085,	// (0x00043549) popup_image_details_window_cp01

0x508f,	// (0x00043553) popup_toobar_trans_pane_cp01_ParamLimits

0x508f,	// (0x00043553) popup_toobar_trans_pane_cp01

0x564c,	// (0x00043b10) popup_image_details_window_ParamLimits

0x564c,	// (0x00043b10) popup_image_details_window

0xc857,	// (0x0004ad1b) popup_image_focus_window

0x5978,	// (0x00043e3c) camera2_autofocus_pane_ParamLimits

0x5978,	// (0x00043e3c) camera2_autofocus_pane

0xa160,	// (0x00048624) bg_popup_sub_pane_cp06

0xcd90,	// (0x0004b254) popup_image_focus_window_g1

0xcd98,	// (0x0004b25c) popup_image_focus_window_g2

0xcda0,	// (0x0004b264) popup_image_focus_window_g3

0xcda8,	// (0x0004b26c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004dbc1) popup_image_focus_window_g

0xcdb0,	// (0x0004b274) popup_image_focus_window_t1

0xcdbe,	// (0x0004b282) popup_image_focus_window_t2

0xcdce,	// (0x0004b292) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004dbca) popup_image_focus_window_t

0xcddc,	// (0x0004b2a0) camera2_autofocus_pane_g1

0xa9f9,	// (0x00048ebd) bg_tb_trans_pane_cp01

0xcdea,	// (0x0004b2ae) popup_image_details_window_g1

0xcdfd,	// (0x0004b2c1) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004dbdc) popup_image_details_window_g

0xce26,	// (0x0004b2ea) popup_image_details_window_t1

0xce38,	// (0x0004b2fc) popup_image_details_window_t2

0xce51,	// (0x0004b315) popup_image_details_window_t3

0xce65,	// (0x0004b329) popup_image_details_window_t4

0xce80,	// (0x0004b344) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004dbe3) popup_image_details_window_t

0xa8d8,	// (0x00048d9c) bg_calc_paper_pane_ParamLimits

0xa160,	// (0x00048624) grid_highlight_pane_cp013

0x24fd,	// (0x000409c1) list_calc_pane_ParamLimits

0x250f,	// (0x000409d3) scroll_pane_cp024

0xa8ec,	// (0x00048db0) bg_calc_display_pane_ParamLimits

0x2517,	// (0x000409db) calc_display_pane_t1_ParamLimits

0x252c,	// (0x000409f0) calc_display_pane_t2_ParamLimits

0x2541,	// (0x00040a05) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004d615) calc_display_pane_t_ParamLimits

0x2615,	// (0x00040ad9) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004d632) cell_calc_pane_g

0x261e,	// (0x00040ae2) cell_calc_pane_t1

0xa94b,	// (0x00048e0f) grid_highlight_pane_cp02_ParamLimits

0xa961,	// (0x00048e25) toolbar_button_pane_cp01_ParamLimits

0xa961,	// (0x00048e25) toolbar_button_pane_cp01

0xb6dc,	// (0x00049ba0) temp_image_control_pane_ParamLimits

0xb6dc,	// (0x00049ba0) temp_image_control_pane

0xa9f9,	// (0x00048ebd) main_mp3_pane

0xce9a,	// (0x0004b35e) temp_image_control_pane_g1_ParamLimits

0xce9a,	// (0x0004b35e) temp_image_control_pane_g1

0xcea8,	// (0x0004b36c) temp_image_control_pane_g2_ParamLimits

0xcea8,	// (0x0004b36c) temp_image_control_pane_g2

0xceba,	// (0x0004b37e) temp_image_control_pane_g3_ParamLimits

0xceba,	// (0x0004b37e) temp_image_control_pane_g3

0x6006,	// (0x000444ca) temp_image_control_pane_g4_ParamLimits

0x6006,	// (0x000444ca) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004dbee) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004dbee) temp_image_control_pane_g

0xce9a,	// (0x0004b35e) main_mp3_pane_g1

0x6017,	// (0x000444db) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004dbf7) main_mp3_pane_g

0xcefd,	// (0x0004b3c1) main_mp3_pane_t1

0xaad8,	// (0x00048f9c) main_camera_pane_g8_ParamLimits

0xaad8,	// (0x00048f9c) main_camera_pane_g8

0x31cd,	// (0x00041691) main_video_pane_g7_ParamLimits

0x31cd,	// (0x00041691) main_video_pane_g7

0x5abb,	// (0x00043f7f) main_camera2_pane_t7_ParamLimits

0x5abb,	// (0x00043f7f) main_camera2_pane_t7

0xac24,	// (0x000490e8) scroll_pane_cp025_ParamLimits

0xac24,	// (0x000490e8) scroll_pane_cp025

0xac38,	// (0x000490fc) scroll_pane_cp026_ParamLimits

0xac38,	// (0x000490fc) scroll_pane_cp026

0xac47,	// (0x0004910b) wml_content_pane_ParamLimits

0xa160,	// (0x00048624) main_touch_calib_pane

0x60bb,	// (0x0004457f) main_touch_calib_pane_g1

0x60c7,	// (0x0004458b) main_touch_calib_pane_g2

0x60d3,	// (0x00044597) main_touch_calib_pane_g3

0x60df,	// (0x000445a3) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004dc15) main_touch_calib_pane_g

0x60eb,	// (0x000445af) main_touch_calib_pane_t1

0x6102,	// (0x000445c6) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004dc1e) main_touch_calib_pane_t

0xb349,	// (0x0004980d) mup_progress_pane_cp02

0xb368,	// (0x0004982c) navi_pane_g1

0xb3ca,	// (0x0004988e) navi_pane_mp_t3

0xa9f9,	// (0x00048ebd) main_mp3_pane_ParamLimits

0x571d,	// (0x00043be1) navi_pane_ParamLimits

0xce9a,	// (0x0004b35e) main_mp3_pane_g1_ParamLimits

0x6017,	// (0x000444db) main_mp3_pane_g2_ParamLimits

0x6023,	// (0x000444e7) main_mp3_pane_g3_ParamLimits

0x6023,	// (0x000444e7) main_mp3_pane_g3

0x602f,	// (0x000444f3) main_mp3_pane_g4_ParamLimits

0x602f,	// (0x000444f3) main_mp3_pane_g4

0xceca,	// (0x0004b38e) main_mp3_pane_g5_ParamLimits

0xceca,	// (0x0004b38e) main_mp3_pane_g5

0xced8,	// (0x0004b39c) main_mp3_pane_g6_ParamLimits

0xced8,	// (0x0004b39c) main_mp3_pane_g6

0xcee5,	// (0x0004b3a9) main_mp3_pane_g7_ParamLimits

0xcee5,	// (0x0004b3a9) main_mp3_pane_g7

0xcef1,	// (0x0004b3b5) main_mp3_pane_g8_ParamLimits

0xcef1,	// (0x0004b3b5) main_mp3_pane_g8

0xf733,	// (0x0004dbf7) main_mp3_pane_g_ParamLimits

0x603b,	// (0x000444ff) main_mp3_pane_t2

0x604b,	// (0x0004450f) main_mp3_pane_t3

0xcf0b,	// (0x0004b3cf) main_mp3_pane_t4

0xcf19,	// (0x0004b3dd) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004dc08) main_mp3_pane_t

0xcf27,	// (0x0004b3eb) mup_progress_pane_cp01

0x0b56,	// (0x0003f01a) aid_zoom_text_secondary2

0xcd1d,	// (0x0004b1e1) list_cale_ev2_pane

0xcd25,	// (0x0004b1e9) scroll_pane_cp023_ParamLimits

0xd55f,	// (0x0004ba23) field_cale_ev2_pane_ParamLimits

0xd55f,	// (0x0004ba23) field_cale_ev2_pane

0x0e07,	// (0x0003f2cb) field_cale_ev2_pane_g1_ParamLimits

0x0e07,	// (0x0003f2cb) field_cale_ev2_pane_g1

0x0e13,	// (0x0003f2d7) field_cale_ev2_pane_g2_ParamLimits

0x0e13,	// (0x0003f2d7) field_cale_ev2_pane_g2

0x0e2b,	// (0x0003f2ef) field_cale_ev2_pane_g3_ParamLimits

0x0e2b,	// (0x0003f2ef) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004dc29) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004dc29) field_cale_ev2_pane_g

0x0e4f,	// (0x0003f313) field_cale_ev2_pane_t1_ParamLimits

0x0e4f,	// (0x0003f313) field_cale_ev2_pane_t1

0x0e66,	// (0x0003f32a) field_cale_ev2_pane_t2_ParamLimits

0x0e66,	// (0x0003f32a) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004dc32) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004dc32) field_cale_ev2_pane_t

0x4f16,	// (0x000433da) main_postcard_pane_g5_ParamLimits

0x4f16,	// (0x000433da) main_postcard_pane_g5

0x4f24,	// (0x000433e8) main_postcard_pane_g6_ParamLimits

0x4f24,	// (0x000433e8) main_postcard_pane_g6

0x300b,	// (0x000414cf) camera2_autofocus_pane_cp_ParamLimits

0x300b,	// (0x000414cf) camera2_autofocus_pane_cp

0xa9f9,	// (0x00048ebd) main_mup3_pane

0x617d,	// (0x00044641) main_mup3_pane_g1_ParamLimits

0x617d,	// (0x00044641) main_mup3_pane_g1

0x619e,	// (0x00044662) main_mup3_pane_g2_ParamLimits

0x619e,	// (0x00044662) main_mup3_pane_g2

0x6218,	// (0x000446dc) main_mup3_pane_g3_ParamLimits

0x6218,	// (0x000446dc) main_mup3_pane_g3

0x625d,	// (0x00044721) main_mup3_pane_g4_ParamLimits

0x625d,	// (0x00044721) main_mup3_pane_g4

0x62a0,	// (0x00044764) main_mup3_pane_g5_ParamLimits

0x62a0,	// (0x00044764) main_mup3_pane_g5

0x62e5,	// (0x000447a9) main_mup3_pane_g6_ParamLimits

0x62e5,	// (0x000447a9) main_mup3_pane_g6

0xcf2f,	// (0x0004b3f3) main_mup3_pane_g7_ParamLimits

0xcf2f,	// (0x0004b3f3) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004dc42) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004dc42) main_mup3_pane_g

0x635b,	// (0x0004481f) main_mup3_pane_t1_ParamLimits

0x635b,	// (0x0004481f) main_mup3_pane_t1

0x63c4,	// (0x00044888) main_mup3_pane_t2_ParamLimits

0x63c4,	// (0x00044888) main_mup3_pane_t2

0x648d,	// (0x00044951) main_mup3_pane_t4_ParamLimits

0x648d,	// (0x00044951) main_mup3_pane_t4

0x64e1,	// (0x000449a5) main_mup3_pane_t5_ParamLimits

0x64e1,	// (0x000449a5) main_mup3_pane_t5

0x658f,	// (0x00044a53) main_mup3_pane_t6_ParamLimits

0x658f,	// (0x00044a53) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004dc53) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004dc53) main_mup3_pane_t

0x663b,	// (0x00044aff) mup3_progress_pane_ParamLimits

0x663b,	// (0x00044aff) mup3_progress_pane

0x66b5,	// (0x00044b79) popup_mup3_control_window_ParamLimits

0x66b5,	// (0x00044b79) popup_mup3_control_window

0xcf3d,	// (0x0004b401) popup_mup3_text_window

0x66d2,	// (0x00044b96) mup3_progress_pane_t1

0x66f1,	// (0x00044bb5) mup3_progress_pane_t2

0xcf45,	// (0x0004b409) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004dc60) mup3_progress_pane_t

0xcf62,	// (0x0004b426) mup_progress_pane_cp03

0xa160,	// (0x00048624) bg_tb_trans_pane_cp04

0x6710,	// (0x00044bd4) mup3_volume_pane

0x6718,	// (0x00044bdc) popup_mup3_control_window_g1

0xd57a,	// (0x0004ba3e) mup3_volume_pane_g1

0xd583,	// (0x0004ba47) mup3_volume_pane_g2

0xd58c,	// (0x0004ba50) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004dc67) mup3_volume_pane_g

0xa160,	// (0x00048624) bg_tb_trans_pane_cp03

0xcf72,	// (0x0004b436) popup_mup3_text_window_g1

0xcf7a,	// (0x0004b43e) popup_mup3_text_window_t1

0xa934,	// (0x00048df8) list_calc_item_pane_g1_ParamLimits

0xc9d3,	// (0x0004ae97) mup_volume_pane_cp_g1

0x611b,	// (0x000445df) main_touch_calib_pane_t3

0x6131,	// (0x000445f5) main_touch_calib_pane_t4

0x6147,	// (0x0004460b) main_touch_calib_pane_t5

0xa16a,	// (0x0004862e) aid_cell_size_toolbar2

0xa172,	// (0x00048636) aid_popup3_width_pane

0x0b4e,	// (0x0003f012) aid_zoom_text_msg_primary

0x2fde,	// (0x000414a2) vorec_t7

0xa8f8,	// (0x00048dbc) bg_calc_paper_pane_g1_ParamLimits

0xa904,	// (0x00048dc8) bg_calc_paper_pane_g2_ParamLimits

0xa910,	// (0x00048dd4) bg_calc_paper_pane_g3_ParamLimits

0xa91c,	// (0x00048de0) bg_calc_paper_pane_g4_ParamLimits

0xa928,	// (0x00048dec) bg_calc_paper_pane_g5_ParamLimits

0x2582,	// (0x00040a46) bg_calc_paper_pane_g6_ParamLimits

0x2593,	// (0x00040a57) bg_calc_paper_pane_g7_ParamLimits

0x25a4,	// (0x00040a68) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004d61c) bg_calc_paper_pane_g_ParamLimits

0x25b7,	// (0x00040a7b) calc_bg_paper_pane_g9_ParamLimits

0x30fc,	// (0x000415c0) image_qvga_pane_ParamLimits

0x30fc,	// (0x000415c0) image_qvga_pane

0xa827,	// (0x00048ceb) bg_popup_sub_pane_cp04_ParamLimits

0xb613,	// (0x00049ad7) popup_mup_playback_window_g1_ParamLimits

0xb61f,	// (0x00049ae3) popup_mup_playback_window_t1_ParamLimits

0xb634,	// (0x00049af8) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004d9a6) popup_mup_playback_window_t_ParamLimits

0x5bea,	// (0x000440ae) main_mup2_pane_g3_ParamLimits

0x5bea,	// (0x000440ae) main_mup2_pane_g3

0x33a8,	// (0x0004186c) popup_toolbar_window_cp04

0xba2f,	// (0x00049ef3) popup_call2_audio_second_window_g3_ParamLimits

0xba2f,	// (0x00049ef3) popup_call2_audio_second_window_g3

0xbe45,	// (0x0004a309) popup_call2_audio_first_window_g4_ParamLimits

0xbe45,	// (0x0004a309) popup_call2_audio_first_window_g4

0xc4c4,	// (0x0004a988) popup_call2_audio_in_window_g4_ParamLimits

0xc4c4,	// (0x0004a988) popup_call2_audio_in_window_g4

0x502a,	// (0x000434ee) aid_area_sk_bg_cut_ParamLimits

0x502a,	// (0x000434ee) aid_area_sk_bg_cut

0xb649,	// (0x00049b0d) aid_area_sk_bg_cut_2_ParamLimits

0xb649,	// (0x00049b0d) aid_area_sk_bg_cut_2

0x5f6d,	// (0x00044431) aid_placing_details_win

0x5f75,	// (0x00044439) aid_placing_details_win_2

0xcddc,	// (0x0004b2a0) camera2_autofocus_pane_g1_ParamLimits

0x2141,	// (0x00040605) popup_fixed_preview_cale_window_ParamLimits

0x2141,	// (0x00040605) popup_fixed_preview_cale_window

0xb411,	// (0x000498d5) navi_slider_pane_g3

0xb41a,	// (0x000498de) navi_slider_pane_g4

0xb423,	// (0x000498e7) navi_slider_pane_g5

0xb411,	// (0x000498d5) navi_slider_pane_g6

0x48dd,	// (0x00042da1) navi_slider_pane_g7

0xb538,	// (0x000499fc) mup_scale_pane_g3

0xb541,	// (0x00049a05) mup_scale_pane_g4

0xb54a,	// (0x00049a0e) mup_scale_pane_g5

0x4d60,	// (0x00043224) mup_scale_pane_g6

0x4d69,	// (0x0004322d) mup_scale_pane_g7

0xb411,	// (0x000498d5) cams2_slider_pane_g3

0xca55,	// (0x0004af19) cams2_slider_pane_g4

0x5ecd,	// (0x00044391) cams2_slider_pane_g5

0xb411,	// (0x000498d5) cams2_slider_pane_g6

0x5ed5,	// (0x00044399) cams2_slider_pane_g7

0xcc86,	// (0x0004b14a) camera2_autofocus_pane_cp_g1

0xc829,	// (0x0004aced) bg_popup_preview_window_pane_cp02_ParamLimits

0xc829,	// (0x0004aced) bg_popup_preview_window_pane_cp02

0xcf88,	// (0x0004b44c) list_fp_cale_pane_ParamLimits

0xcf88,	// (0x0004b44c) list_fp_cale_pane

0xcf94,	// (0x0004b458) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf94,	// (0x0004b458) popup_fixed_preview_cale_window_t1

0x6721,	// (0x00044be5) popup_fixed_preview_cale_window_t2_ParamLimits

0x6721,	// (0x00044be5) popup_fixed_preview_cale_window_t2

0x6736,	// (0x00044bfa) popup_fixed_preview_cale_window_t3_ParamLimits

0x6736,	// (0x00044bfa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004dc6e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004dc6e) popup_fixed_preview_cale_window_t

0x674b,	// (0x00044c0f) list_single_fp_cale_pane_ParamLimits

0x674b,	// (0x00044c0f) list_single_fp_cale_pane

0xcfb2,	// (0x0004b476) list_single_fp_cale_pane_g1_ParamLimits

0xcfb2,	// (0x0004b476) list_single_fp_cale_pane_g1

0xcfbe,	// (0x0004b482) list_single_fp_cale_pane_g2_ParamLimits

0xcfbe,	// (0x0004b482) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004dc75) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004dc75) list_single_fp_cale_pane_g

0xcfd7,	// (0x0004b49b) list_single_fp_cale_pane_t1_ParamLimits

0xcfd7,	// (0x0004b49b) list_single_fp_cale_pane_t1

0xcfe9,	// (0x0004b4ad) list_single_fp_cale_pane_t2_ParamLimits

0xcfe9,	// (0x0004b4ad) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004dc7c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004dc7c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa160,	// (0x00048624) main_dialer_pane

0x675b,	// (0x00044c1f) aid_cell_size_keypad

0x6765,	// (0x00044c29) dialer_ne_pane

0x676f,	// (0x00044c33) grid_dialer_command_1_pane

0x6777,	// (0x00044c3b) grid_dialer_command_2_pane

0x677f,	// (0x00044c43) grid_dialer_keypad_pane

0x6793,	// (0x00044c57) bg_popup_call_pane_cp06_ParamLimits

0x6793,	// (0x00044c57) bg_popup_call_pane_cp06

0x679f,	// (0x00044c63) dialer_ne_clear_pane_ParamLimits

0x679f,	// (0x00044c63) dialer_ne_clear_pane

0xd01c,	// (0x0004b4e0) dialer_ne_pane_g1

0xd024,	// (0x0004b4e8) dialer_ne_pane_t1_ParamLimits

0xd024,	// (0x0004b4e8) dialer_ne_pane_t1

0x67ab,	// (0x00044c6f) dialer_ne_pane_t2_ParamLimits

0x67ab,	// (0x00044c6f) dialer_ne_pane_t2

0x67c8,	// (0x00044c8c) dialer_ne_pane_t3_ParamLimits

0x67c8,	// (0x00044c8c) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004dc81) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004dc81) dialer_ne_pane_t

0x67ec,	// (0x00044cb0) dialer_ne_pane_t3_copy1_ParamLimits

0x67ec,	// (0x00044cb0) dialer_ne_pane_t3_copy1

0x6810,	// (0x00044cd4) cell_dialer_keypad_pane_ParamLimits

0x6810,	// (0x00044cd4) cell_dialer_keypad_pane

0x6827,	// (0x00044ceb) cell_dialer_command_1_pane_ParamLimits

0x6827,	// (0x00044ceb) cell_dialer_command_1_pane

0x683d,	// (0x00044d01) cell_dialer_command_2_pane_ParamLimits

0x683d,	// (0x00044d01) cell_dialer_command_2_pane

0xd036,	// (0x0004b4fa) bg_button_pane_cp02_ParamLimits

0xd036,	// (0x0004b4fa) bg_button_pane_cp02

0x684c,	// (0x00044d10) cell_dialer_keypad_pane_g1_ParamLimits

0x684c,	// (0x00044d10) cell_dialer_keypad_pane_g1

0xd036,	// (0x0004b4fa) bg_button_pane_cp03_ParamLimits

0xd036,	// (0x0004b4fa) bg_button_pane_cp03

0x6861,	// (0x00044d25) cell_dialer_command_1_pane_g1_ParamLimits

0x6861,	// (0x00044d25) cell_dialer_command_1_pane_g1

0xd042,	// (0x0004b506) bg_button_pane_cp04

0x6875,	// (0x00044d39) cell_dialer_command_2_pane_g1

0xaad0,	// (0x00048f94) bg_button_pane_cp06

0xd04a,	// (0x0004b50e) dialer_ne_clear_pane_g1

0x4818,	// (0x00042cdc) navi_pane_g2

0x4846,	// (0x00042d0a) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004d8a9) navi_pane_g

0x4871,	// (0x00042d35) navi_pane_mv_g2

0x4898,	// (0x00042d5c) navi_pane_mv_g5

0x48a0,	// (0x00042d64) navi_pane_mv_t1

0xa8ec,	// (0x00048db0) main_clock2_pane

0x68b3,	// (0x00044d77) main_clock2_list_pane_ParamLimits

0x68b3,	// (0x00044d77) main_clock2_list_pane

0x68dd,	// (0x00044da1) main_clock2_pane_t1_ParamLimits

0x68dd,	// (0x00044da1) main_clock2_pane_t1

0x68ff,	// (0x00044dc3) main_clock2_pane_t2_ParamLimits

0x68ff,	// (0x00044dc3) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004dc8d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004dc8d) main_clock2_pane_t

0x695c,	// (0x00044e20) popup_clock_analogue_window_cp03_ParamLimits

0x695c,	// (0x00044e20) popup_clock_analogue_window_cp03

0x697c,	// (0x00044e40) popup_clock_digital_window_cp02_ParamLimits

0x697c,	// (0x00044e40) popup_clock_digital_window_cp02

0x69ed,	// (0x00044eb1) main_clock2_list_single_pane_ParamLimits

0x69ed,	// (0x00044eb1) main_clock2_list_single_pane

0xaad0,	// (0x00048f94) list_highlight_pane_cp05

0xd086,	// (0x0004b54a) main_clock2_list_single_pane_t1

0x33a8,	// (0x0004186c) popup_toolbar_window_cp04_ParamLimits

0x5fd6,	// (0x0004449a) camera2_autofocus_pane_g2_ParamLimits

0x5fd6,	// (0x0004449a) camera2_autofocus_pane_g2

0x5fe2,	// (0x000444a6) camera2_autofocus_pane_g3_ParamLimits

0x5fe2,	// (0x000444a6) camera2_autofocus_pane_g3

0x5fee,	// (0x000444b2) camera2_autofocus_pane_g4_ParamLimits

0x5fee,	// (0x000444b2) camera2_autofocus_pane_g4

0x5ffa,	// (0x000444be) camera2_autofocus_pane_g5_ParamLimits

0x5ffa,	// (0x000444be) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004dbd1) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004dbd1) camera2_autofocus_pane_g

0x615d,	// (0x00044621) camera2_autofocus_pane_cp_g2

0x6165,	// (0x00044629) camera2_autofocus_pane_cp_g3

0x616d,	// (0x00044631) camera2_autofocus_pane_cp_g4

0x6175,	// (0x00044639) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004dc37) camera2_autofocus_pane_cp_g

0x678b,	// (0x00044c4f) popup_dialer_spcha_window

0xa160,	// (0x00048624) bg_popup_sub_pane_cp07

0xd094,	// (0x0004b558) list_spcha_pane

0xd09c,	// (0x0004b560) list_single_spcha_pane_ParamLimits

0xd09c,	// (0x0004b560) list_single_spcha_pane

0xa160,	// (0x00048624) list_highlight_pane_cp06

0xd0ad,	// (0x0004b571) list_single_spcha_pane_t1

0xc26e,	// (0x0004a732) popup_call2_audio_out_window_g4_ParamLimits

0xc26e,	// (0x0004a732) popup_call2_audio_out_window_g4

0xa160,	// (0x00048624) main_imed2_pane

0xc861,	// (0x0004ad25) popup_imed_adjust2_window

0x565a,	// (0x00043b1e) popup_imed_trans_window_ParamLimits

0x565a,	// (0x00043b1e) popup_imed_trans_window

0xcabe,	// (0x0004af82) popup_blid_sat_info2_window_t1

0xcacc,	// (0x0004af90) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004db66) popup_blid_sat_info2_window_t

0x6a97,	// (0x00044f5b) aid_size_cell_colour_35

0x6ab1,	// (0x00044f75) aid_size_cell_colour_112

0x6ac8,	// (0x00044f8c) aid_size_cell_effect

0xa9f9,	// (0x00048ebd) bg_tb_trans_pane_cp02

0xbba1,	// (0x0004a065) heading_imed_pane

0x6ae2,	// (0x00044fa6) listscroll_imed_pane

0xd0bb,	// (0x0004b57f) heading_imed_pane_g1

0xd0c3,	// (0x0004b587) heading_imed_pane_t1

0xd0d1,	// (0x0004b595) grid_imed_colour_35_pane_ParamLimits

0xd0d1,	// (0x0004b595) grid_imed_colour_35_pane

0x6aee,	// (0x00044fb2) grid_imed_effect_pane

0xd0ed,	// (0x0004b5b1) list_imed_aspect_pane

0x6afe,	// (0x00044fc2) scroll_pane_cp027_ParamLimits

0x6afe,	// (0x00044fc2) scroll_pane_cp027

0x6b0a,	// (0x00044fce) cell_imed_effect_pane_ParamLimits

0x6b0a,	// (0x00044fce) cell_imed_effect_pane

0xd0f5,	// (0x0004b5b9) cell_imed_colour_pane_ParamLimits

0xd0f5,	// (0x0004b5b9) cell_imed_colour_pane

0xd13f,	// (0x0004b603) cell_imed_colour_pane_g1_ParamLimits

0xd13f,	// (0x0004b603) cell_imed_colour_pane_g1

0xd150,	// (0x0004b614) hgihlgiht_grid_pane_cp016_ParamLimits

0xd150,	// (0x0004b614) hgihlgiht_grid_pane_cp016

0x6b26,	// (0x00044fea) cell_imed_effect_pane_g1

0x6b2e,	// (0x00044ff2) grid_highlight_pane_cp017

0xd161,	// (0x0004b625) list_imed_single_pane_ParamLimits

0xd161,	// (0x0004b625) list_imed_single_pane

0xa160,	// (0x00048624) list_highlight_pane_cp07

0xd175,	// (0x0004b639) list_imed_aspect_pane_comp1_t1

0xc835,	// (0x0004acf9) bg_tb_trans_pane_cp05

0xd197,	// (0x0004b65b) popup_imed_adjust2_window_g1

0xd1be,	// (0x0004b682) popup_imed_adjust2_window_t1

0xd1d6,	// (0x0004b69a) slider_imed_adjust_pane

0xd1ea,	// (0x0004b6ae) slider_imed_adjust_pane_g1

0xd1fa,	// (0x0004b6be) slider_imed_adjust_pane_g2

0xd20a,	// (0x0004b6ce) slider_imed_adjust_pane_g3

0xd21b,	// (0x0004b6df) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004dcaa) slider_imed_adjust_pane_g

0x6b37,	// (0x00044ffb) aid_size_cell_clipart2

0x6b43,	// (0x00045007) grid_imed_clipart_pane

0xd22c,	// (0x0004b6f0) scroll_pane_cp031

0x6b4d,	// (0x00045011) cell_imed_clipart_pane_ParamLimits

0x6b4d,	// (0x00045011) cell_imed_clipart_pane

0x6b6b,	// (0x0004502f) cell_imed_clipart_pane_g1

0xa160,	// (0x00048624) grid_highlight_pane_cp014

0x68bf,	// (0x00044d83) main_clock2_pane_g1_ParamLimits

0x68bf,	// (0x00044d83) main_clock2_pane_g1

0x6998,	// (0x00044e5c) aid_call2_pane_cp10

0x69aa,	// (0x00044e6e) aid_call_pane_cp10

0xb33d,	// (0x00049801) popup_clock_analogue_window_cp10_g1

0xb33d,	// (0x00049801) popup_clock_analogue_window_cp10_g2

0x69bc,	// (0x00044e80) popup_clock_analogue_window_cp10_g3

0x69bc,	// (0x00044e80) popup_clock_analogue_window_cp10_g4

0xb33d,	// (0x00049801) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004dc98) popup_clock_analogue_window_cp10_g

0x69ce,	// (0x00044e92) popup_clock_analogue_window_cp10_t1

0x69ff,	// (0x00044ec3) clock_digital_number_pane_cp10_ParamLimits

0x69ff,	// (0x00044ec3) clock_digital_number_pane_cp10

0x6a17,	// (0x00044edb) clock_digital_number_pane_cp11_ParamLimits

0x6a17,	// (0x00044edb) clock_digital_number_pane_cp11

0x6a2f,	// (0x00044ef3) clock_digital_number_pane_cp12_ParamLimits

0x6a2f,	// (0x00044ef3) clock_digital_number_pane_cp12

0x6a47,	// (0x00044f0b) clock_digital_number_pane_cp13_ParamLimits

0x6a47,	// (0x00044f0b) clock_digital_number_pane_cp13

0x6a5f,	// (0x00044f23) clock_digital_separator_pane_cp10_ParamLimits

0x6a5f,	// (0x00044f23) clock_digital_separator_pane_cp10

0x6a77,	// (0x00044f3b) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a77,	// (0x00044f3b) popup_clock_digital_window_cp02_t1

0xa81f,	// (0x00048ce3) clock_digital_number_pane_cp10_g1

0xa81f,	// (0x00048ce3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004dcb3) clock_digital_number_pane_cp10_g

0xa81f,	// (0x00048ce3) clock_digital_separator_pane_cp10_g1

0xa81f,	// (0x00048ce3) clock_digital_separator_pane_g2_cp10

0xb3d8,	// (0x0004989c) navi_pane_vded_g4

0xb3e1,	// (0x000498a5) navi_pane_vded_g5

0xb3ea,	// (0x000498ae) navi_pane_vded_t1

0xa160,	// (0x00048624) main_vded_pane

0x6b74,	// (0x00045038) main_vded_pane_g1

0x6b80,	// (0x00045044) main_vded_pane_g2

0x6b8a,	// (0x0004504e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004dcb8) main_vded_pane_g

0x6b94,	// (0x00045058) main_vded_pane_t1

0x6ba2,	// (0x00045066) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004dcbf) main_vded_pane_t

0x6bb0,	// (0x00045074) vded_slider_pane

0x6bba,	// (0x0004507e) vded_video_pane

0xd234,	// (0x0004b6f8) vded_video_pane_g1

0x6bc6,	// (0x0004508a) vded_video_pane_g2

0xcc86,	// (0x0004b14a) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004dcc4) vded_video_pane_g

0xd23e,	// (0x0004b702) vded_slider_pane_g1

0xc9d3,	// (0x0004ae97) vded_slider_pane_g2

0xd247,	// (0x0004b70b) vded_slider_pane_g3

0xd250,	// (0x0004b714) vded_slider_pane_g4

0xd259,	// (0x0004b71d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004dccb) vded_slider_pane_g

0x66a9,	// (0x00044b6d) mup3_rocker_pane_ParamLimits

0x66a9,	// (0x00044b6d) mup3_rocker_pane

0x6bcf,	// (0x00045093) mup3_control_keys_pane_g1

0x6bd7,	// (0x0004509b) mup3_control_keys_pane_g2

0x6bdf,	// (0x000450a3) mup3_control_keys_pane_g3

0x6be7,	// (0x000450ab) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004dcd6) mup3_control_keys_pane_g

0x215f,	// (0x00040623) popup_toolbar2_fixed_window_cp01_ParamLimits

0x215f,	// (0x00040623) popup_toolbar2_fixed_window_cp01

0x66c5,	// (0x00044b89) popup_toolbar2_fixed_window_cp02_ParamLimits

0x66c5,	// (0x00044b89) popup_toolbar2_fixed_window_cp02

0xbbad,	// (0x0004a071) popup_call2_audio_second_window_t4_ParamLimits

0xbbad,	// (0x0004a071) popup_call2_audio_second_window_t4

0xc0db,	// (0x0004a59f) popup_call2_audio_first_window_t6_ParamLimits

0xc0db,	// (0x0004a59f) popup_call2_audio_first_window_t6

0xc371,	// (0x0004a835) popup_call2_audio_out_window_t6_ParamLimits

0xc371,	// (0x0004a835) popup_call2_audio_out_window_t6

0xa160,	// (0x00048624) main_vitu_pane

0x6bf7,	// (0x000450bb) aid_size_cell_itu_ParamLimits

0x6bf7,	// (0x000450bb) aid_size_cell_itu

0x2191,	// (0x00040655) bg_popup_window_pane_cp08_ParamLimits

0x2191,	// (0x00040655) bg_popup_window_pane_cp08

0x6c05,	// (0x000450c9) field_vitu_entry_pane_ParamLimits

0x6c05,	// (0x000450c9) field_vitu_entry_pane

0x6c14,	// (0x000450d8) grid_vitu_function_pane_ParamLimits

0x6c14,	// (0x000450d8) grid_vitu_function_pane

0x6c24,	// (0x000450e8) grid_vitu_itu_pane_ParamLimits

0x6c24,	// (0x000450e8) grid_vitu_itu_pane

0x6c34,	// (0x000450f8) cell_vitu_itu_pane_ParamLimits

0x6c34,	// (0x000450f8) cell_vitu_itu_pane

0x6c4b,	// (0x0004510f) cell_vitu_function_pane_ParamLimits

0x6c4b,	// (0x0004510f) cell_vitu_function_pane

0xa9f9,	// (0x00048ebd) bg_popup_sub_pane_cp08_ParamLimits

0xa9f9,	// (0x00048ebd) bg_popup_sub_pane_cp08

0x6c5f,	// (0x00045123) field_vitu_entry_pane_t1_ParamLimits

0x6c5f,	// (0x00045123) field_vitu_entry_pane_t1

0xd27a,	// (0x0004b73e) field_vitu_entry_pane_t2_ParamLimits

0xd27a,	// (0x0004b73e) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004dce4) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004dce4) field_vitu_entry_pane_t

0xd297,	// (0x0004b75b) bg_button_pane_cp05_ParamLimits

0xd297,	// (0x0004b75b) bg_button_pane_cp05

0x6c79,	// (0x0004513d) cell_vitu_itu_pane_g1

0x6c91,	// (0x00045155) cell_vitu_itu_pane_t1_ParamLimits

0x6c91,	// (0x00045155) cell_vitu_itu_pane_t1

0x6ca3,	// (0x00045167) cell_vitu_itu_pane_t2_ParamLimits

0x6ca3,	// (0x00045167) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004dce9) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004dce9) cell_vitu_itu_pane_t

0xd2a5,	// (0x0004b769) bg_button_pane_cp07

0x6ce6,	// (0x000451aa) cell_vitu_function_pane_g1

0x2424,	// (0x000408e8) main_calc_pane_g1

0x1f63,	// (0x00040427) aid_visual_content_pane

0xa160,	// (0x00048624) main_vradio_pane

0x6cef,	// (0x000451b3) main_vradio_pane_g1_ParamLimits

0x6cef,	// (0x000451b3) main_vradio_pane_g1

0xd2af,	// (0x0004b773) main_vradio_pane_g2_ParamLimits

0xd2af,	// (0x0004b773) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004dcf0) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004dcf0) main_vradio_pane_g

0x6cfd,	// (0x000451c1) main_vradio_pane_t1_ParamLimits

0x6cfd,	// (0x000451c1) main_vradio_pane_t1

0x6d0f,	// (0x000451d3) main_vradio_pane_t2_ParamLimits

0x6d0f,	// (0x000451d3) main_vradio_pane_t2

0xd2bc,	// (0x0004b780) main_vradio_pane_t3_ParamLimits

0xd2bc,	// (0x0004b780) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004dcf5) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004dcf5) main_vradio_pane_t

0x6d21,	// (0x000451e5) vradio_rocker_control_pane_ParamLimits

0x6d21,	// (0x000451e5) vradio_rocker_control_pane

0x6d2d,	// (0x000451f1) vradio_station_info_pane_ParamLimits

0x6d2d,	// (0x000451f1) vradio_station_info_pane

0xd2d0,	// (0x0004b794) vradio_frequency_info_pane_ParamLimits

0xd2d0,	// (0x0004b794) vradio_frequency_info_pane

0xcc86,	// (0x0004b14a) vradio_station_info_pane_g1

0xd2df,	// (0x0004b7a3) vradio_station_info_pane_t1_ParamLimits

0xd2df,	// (0x0004b7a3) vradio_station_info_pane_t1

0xd301,	// (0x0004b7c5) vradio_station_info_pane_t2_ParamLimits

0xd301,	// (0x0004b7c5) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004dcfc) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004dcfc) vradio_station_info_pane_t

0xd313,	// (0x0004b7d7) vradio_tuning_pane

0xd31b,	// (0x0004b7df) vradio_rocker_control_pane_g1

0xd323,	// (0x0004b7e7) vradio_rocker_control_pane_g2

0xd32b,	// (0x0004b7ef) vradio_rocker_control_pane_g3

0xd333,	// (0x0004b7f7) vradio_rocker_control_pane_g4

0xd33b,	// (0x0004b7ff) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004dd01) vradio_rocker_control_pane_g

0x6d3a,	// (0x000451fe) vradio_frequency_info_pane_g1

0xd343,	// (0x0004b807) vradio_frequency_info_pane_t1_ParamLimits

0xd343,	// (0x0004b807) vradio_frequency_info_pane_t1

0x6d44,	// (0x00045208) vradio_tuning_pane_g1

0x6d4f,	// (0x00045213) vradio_tuning_pane_t1

0xa186,	// (0x0004864a) area_side_right_pane_ParamLimits

0xa186,	// (0x0004864a) area_side_right_pane

0xc7f0,	// (0x0004acb4) status_small_pane_g1

0xc7f8,	// (0x0004acbc) status_small_pane_g2

0xc801,	// (0x0004acc5) status_small_pane_g3

0xc80a,	// (0x0004acce) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004dabc) status_small_pane_g

0xc813,	// (0x0004acd7) status_small_pane_t1

0xa160,	// (0x00048624) main_video3_pane

0xd357,	// (0x0004b81b) cams_zoom_vslider_pane

0xd35f,	// (0x0004b823) image3_wide_pane_ParamLimits

0xd35f,	// (0x0004b823) image3_wide_pane

0xd379,	// (0x0004b83d) image3_wide_small_pane

0xd385,	// (0x0004b849) main_video3_pane_g1_ParamLimits

0xd385,	// (0x0004b849) main_video3_pane_g1

0xd3a1,	// (0x0004b865) main_video3_pane_g2_ParamLimits

0xd3a1,	// (0x0004b865) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004dd0c) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004dd0c) main_video3_pane_g

0xd3bd,	// (0x0004b881) main_video3_pane_t1_ParamLimits

0xd3bd,	// (0x0004b881) main_video3_pane_t1

0xd3e8,	// (0x0004b8ac) main_video3_pane_t2_ParamLimits

0xd3e8,	// (0x0004b8ac) main_video3_pane_t2

0xd415,	// (0x0004b8d9) main_video3_pane_t3_ParamLimits

0xd415,	// (0x0004b8d9) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004dd11) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004dd11) main_video3_pane_t

0xd442,	// (0x0004b906) cams_zoom_vslider_pane_g1

0xd44b,	// (0x0004b90f) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004dd18) cams_zoom_vslider_pane_g

0xd453,	// (0x0004b917) small_slider_vertical_pane

0xcc86,	// (0x0004b14a) small_slider_vertical_pane_g1

0xcc86,	// (0x0004b14a) small_slider_vertical_pane_g2

0xd45b,	// (0x0004b91f) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004dd1d) small_slider_vertical_pane_g

0xa160,	// (0x00048624) main_hwr_training_pane

0xd464,	// (0x0004b928) hwr_training_instruct_pane_ParamLimits

0xd464,	// (0x0004b928) hwr_training_instruct_pane

0x6d5e,	// (0x00045222) hwr_training_navi_pane_ParamLimits

0x6d5e,	// (0x00045222) hwr_training_navi_pane

0x6d78,	// (0x0004523c) hwr_training_write_pane_ParamLimits

0x6d78,	// (0x0004523c) hwr_training_write_pane

0xa160,	// (0x00048624) bg_frame_shadow_pane

0xd49b,	// (0x0004b95f) hwr_training_write_pane_g1

0xd4a3,	// (0x0004b967) hwr_training_write_pane_g2

0xd4ab,	// (0x0004b96f) hwr_training_write_pane_g3

0xd4b3,	// (0x0004b977) hwr_training_write_pane_g4

0xd4bb,	// (0x0004b97f) hwr_training_write_pane_g5

0xd4c3,	// (0x0004b987) hwr_training_write_pane_g6

0xd4cb,	// (0x0004b98f) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004dd24) hwr_training_write_pane_g

0x6db0,	// (0x00045274) hwr_training_navi_pane_g1_ParamLimits

0x6db0,	// (0x00045274) hwr_training_navi_pane_g1

0x6dc2,	// (0x00045286) hwr_training_navi_pane_g2_ParamLimits

0x6dc2,	// (0x00045286) hwr_training_navi_pane_g2

0x6dd4,	// (0x00045298) hwr_training_navi_pane_g3_ParamLimits

0x6dd4,	// (0x00045298) hwr_training_navi_pane_g3

0x6de4,	// (0x000452a8) hwr_training_navi_pane_g4_ParamLimits

0x6de4,	// (0x000452a8) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004dd33) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004dd33) hwr_training_navi_pane_g

0x6dfe,	// (0x000452c2) hwr_training_navi_pane_t1

0x6e0c,	// (0x000452d0) list_single_hwr_training_instruct_pane_ParamLimits

0x6e0c,	// (0x000452d0) list_single_hwr_training_instruct_pane

0xd4d3,	// (0x0004b997) list_single_hwr_training_instruct_pane_t1

0xcbc6,	// (0x0004b08a) bg_frame_shadow_pane_g1

0xd4e2,	// (0x0004b9a6) bg_frame_shadow_pane_g2

0xd4ea,	// (0x0004b9ae) bg_frame_shadow_pane_g3

0xd4f2,	// (0x0004b9b6) bg_frame_shadow_pane_g4

0xd4fa,	// (0x0004b9be) bg_frame_shadow_pane_g5

0xd502,	// (0x0004b9c6) bg_frame_shadow_pane_g6

0xd50a,	// (0x0004b9ce) bg_frame_shadow_pane_g7

0xa9b7,	// (0x00048e7b) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004dd3e) bg_frame_shadow_pane_g

0xa160,	// (0x00048624) main_video_tele_dialer_pane

0x6e25,	// (0x000452e9) aid_size_cell_video_keypad_ParamLimits

0x6e25,	// (0x000452e9) aid_size_cell_video_keypad

0x6e35,	// (0x000452f9) grid_video_dialer_keypad_pane_ParamLimits

0x6e35,	// (0x000452f9) grid_video_dialer_keypad_pane

0x6e67,	// (0x0004532b) video_down_pane_cp_ParamLimits

0x6e67,	// (0x0004532b) video_down_pane_cp

0x6e8f,	// (0x00045353) cell_video_dialer_keypad_pane_ParamLimits

0x6e8f,	// (0x00045353) cell_video_dialer_keypad_pane

0xd512,	// (0x0004b9d6) bg_button_pane_cp08_ParamLimits

0xd512,	// (0x0004b9d6) bg_button_pane_cp08

0x6ea6,	// (0x0004536a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ea6,	// (0x0004536a) cell_video_dialer_keypad_pane_g1

0x669d,	// (0x00044b61) mup3_rocker2_pane_ParamLimits

0x669d,	// (0x00044b61) mup3_rocker2_pane

0xcc86,	// (0x0004b14a) mup3_rocker2_pane_g1

0x55dc,	// (0x00043aa0) main_dialer2_pane

0xa160,	// (0x00048624) main_mp4_pane

0x6ee5,	// (0x000453a9) main_mp4_pane_g1_ParamLimits

0x6ee5,	// (0x000453a9) main_mp4_pane_g1

0x6ef3,	// (0x000453b7) main_mp4_pane_g2_ParamLimits

0x6ef3,	// (0x000453b7) main_mp4_pane_g2

0x6f01,	// (0x000453c5) main_mp4_pane_g3_ParamLimits

0x6f01,	// (0x000453c5) main_mp4_pane_g3

0x6f54,	// (0x00045418) main_mp4_pane_g4_ParamLimits

0x6f54,	// (0x00045418) main_mp4_pane_g4

0x6f7c,	// (0x00045440) main_mp4_pane_g5_ParamLimits

0x6f7c,	// (0x00045440) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004dd5e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004dd5e) main_mp4_pane_g

0x6fcc,	// (0x00045490) main_mp4_pane_t1_ParamLimits

0x6fcc,	// (0x00045490) main_mp4_pane_t1

0x7028,	// (0x000454ec) main_mp4_pane_t2_ParamLimits

0x7028,	// (0x000454ec) main_mp4_pane_t2

0xd51e,	// (0x0004b9e2) main_mp4_pane_t3_ParamLimits

0xd51e,	// (0x0004b9e2) main_mp4_pane_t3

0x707a,	// (0x0004553e) main_mp4_pane_t4_ParamLimits

0x707a,	// (0x0004553e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004dd6b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004dd6b) main_mp4_pane_t

0x70ba,	// (0x0004557e) mp4_progress_pane_ParamLimits

0x70ba,	// (0x0004557e) mp4_progress_pane

0x7104,	// (0x000455c8) mp4_rocker_pane_ParamLimits

0x7104,	// (0x000455c8) mp4_rocker_pane

0xd546,	// (0x0004ba0a) mp4_progress_pane_t1

0xd595,	// (0x0004ba59) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004dd74) mp4_progress_pane_t

0xd5ae,	// (0x0004ba72) mup_progress_pane_cp04

0xcc86,	// (0x0004b14a) mp4_rocker_pane_g1

0x7126,	// (0x000455ea) aid_cell_size_keypad2_ParamLimits

0x7126,	// (0x000455ea) aid_cell_size_keypad2

0x7136,	// (0x000455fa) dialer2_ne_pane_ParamLimits

0x7136,	// (0x000455fa) dialer2_ne_pane

0x7142,	// (0x00045606) grid_dialer2_keypad_pane_ParamLimits

0x7142,	// (0x00045606) grid_dialer2_keypad_pane

0xd5ba,	// (0x0004ba7e) bg_popup_call_pane_cp07_ParamLimits

0xd5ba,	// (0x0004ba7e) bg_popup_call_pane_cp07

0x7150,	// (0x00045614) dialer2_ne_pane_t1_ParamLimits

0x7150,	// (0x00045614) dialer2_ne_pane_t1

0x7175,	// (0x00045639) cell_dialer2_keypad_pane_ParamLimits

0x7175,	// (0x00045639) cell_dialer2_keypad_pane

0xd5da,	// (0x0004ba9e) bg_button_pane_pane_cp04_ParamLimits

0xd5da,	// (0x0004ba9e) bg_button_pane_pane_cp04

0x718c,	// (0x00045650) cell_dialer2_keypad_pane_g1_ParamLimits

0x718c,	// (0x00045650) cell_dialer2_keypad_pane_g1

0x327a,	// (0x0004173e) aid_placing_vt_set_content_ParamLimits

0x327a,	// (0x0004173e) aid_placing_vt_set_content

0x32a2,	// (0x00041766) aid_placing_vt_set_title_ParamLimits

0x32a2,	// (0x00041766) aid_placing_vt_set_title

0xa160,	// (0x00048624) main_image3_pane

0x7226,	// (0x000456ea) area_side_right_pane_cp01_ParamLimits

0x7226,	// (0x000456ea) area_side_right_pane_cp01

0xaa07,	// (0x00048ecb) main_image3_pane_g1_ParamLimits

0xaa07,	// (0x00048ecb) main_image3_pane_g1

0x7255,	// (0x00045719) main_image3_pane_g2_ParamLimits

0x7255,	// (0x00045719) main_image3_pane_g2

0x726e,	// (0x00045732) main_image3_pane_g3_ParamLimits

0x726e,	// (0x00045732) main_image3_pane_g3

0x7287,	// (0x0004574b) main_image3_pane_g4_ParamLimits

0x7287,	// (0x0004574b) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004dd83) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004dd83) main_image3_pane_g

0x72a0,	// (0x00045764) main_image3_pane_t1_ParamLimits

0x72a0,	// (0x00045764) main_image3_pane_t1

0x72c5,	// (0x00045789) main_image3_pane_t2_ParamLimits

0x72c5,	// (0x00045789) main_image3_pane_t2

0x72e4,	// (0x000457a8) main_image3_pane_t3_ParamLimits

0x72e4,	// (0x000457a8) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004dd8c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004dd8c) main_image3_pane_t

0x2191,	// (0x00040655) grid_sctrl_middle_pane_cp01_ParamLimits

0x2191,	// (0x00040655) grid_sctrl_middle_pane_cp01

0x7345,	// (0x00045809) cell_sctrl_middle_pane_cp01_ParamLimits

0x7345,	// (0x00045809) cell_sctrl_middle_pane_cp01

0x7356,	// (0x0004581a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7356,	// (0x0004581a) cell_sctrl_middle_pane_cp01_g1

0xa160,	// (0x00048624) main_call4_pane

0x7363,	// (0x00045827) aid_size_button_call4_ParamLimits

0x7363,	// (0x00045827) aid_size_button_call4

0x7395,	// (0x00045859) call4_windows_pane_ParamLimits

0x7395,	// (0x00045859) call4_windows_pane

0x73b1,	// (0x00045875) grid_call4_button_pane_ParamLimits

0x73b1,	// (0x00045875) grid_call4_button_pane

0xd5e6,	// (0x0004baaa) call4_windows_conf_pane

0x73d5,	// (0x00045899) popup_call4_audio_first_window_ParamLimits

0x73d5,	// (0x00045899) popup_call4_audio_first_window

0x7401,	// (0x000458c5) popup_call4_audio_second_window_ParamLimits

0x7401,	// (0x000458c5) popup_call4_audio_second_window

0xd623,	// (0x0004bae7) popup_call4_audio_wait_window_ParamLimits

0xd623,	// (0x0004bae7) popup_call4_audio_wait_window

0x7415,	// (0x000458d9) cell_call4_button_pane_ParamLimits

0x7415,	// (0x000458d9) cell_call4_button_pane

0x7438,	// (0x000458fc) bg_button_pane_cp09_ParamLimits

0x7438,	// (0x000458fc) bg_button_pane_cp09

0x7444,	// (0x00045908) cell_call4_button_pane_g1_ParamLimits

0x7444,	// (0x00045908) cell_call4_button_pane_g1

0x7451,	// (0x00045915) cell_call4_button_pane_t1_ParamLimits

0x7451,	// (0x00045915) cell_call4_button_pane_t1

0xd66b,	// (0x0004bb2f) popup_call4_audio_conf_window_ParamLimits

0xd66b,	// (0x0004bb2f) popup_call4_audio_conf_window

0x66d2,	// (0x00044b96) mup3_progress_pane_t1_ParamLimits

0x66f1,	// (0x00044bb5) mup3_progress_pane_t2_ParamLimits

0xcf45,	// (0x0004b409) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004dc60) mup3_progress_pane_t_ParamLimits

0xcf62,	// (0x0004b426) mup_progress_pane_cp03_ParamLimits

0x6bef,	// (0x000450b3) mup3_control_keys_pane_g4_copy1

0x70e8,	// (0x000455ac) mp4_rocker2_pane_ParamLimits

0x70e8,	// (0x000455ac) mp4_rocker2_pane

0xd685,	// (0x0004bb49) mp4_rocker2_pane_g1

0xd68d,	// (0x0004bb51) mp4_rocker2_pane_g2

0x7463,	// (0x00045927) mp4_rocker2_pane_g3

0x746b,	// (0x0004592f) mp4_rocker2_pane_g4

0x7473,	// (0x00045937) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004dd95) mp4_rocker2_pane_g

0xa160,	// (0x00048624) main_camera4_pane

0xa160,	// (0x00048624) main_video4_pane

0x6e43,	// (0x00045307) main_video_tele_dialer_pane_t1_ParamLimits

0x6e43,	// (0x00045307) main_video_tele_dialer_pane_t1

0x6e55,	// (0x00045319) main_video_tele_dialer_pane_t2_ParamLimits

0x6e55,	// (0x00045319) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004dd4f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004dd4f) main_video_tele_dialer_pane_t

0x7493,	// (0x00045957) cam4_autofocus_pane_ParamLimits

0x7493,	// (0x00045957) cam4_autofocus_pane

0x74ab,	// (0x0004596f) cam4_image_uncrop_pane_ParamLimits

0x74ab,	// (0x0004596f) cam4_image_uncrop_pane

0x74c4,	// (0x00045988) cam4_indicators_pane_ParamLimits

0x74c4,	// (0x00045988) cam4_indicators_pane

0x74e0,	// (0x000459a4) main_camera4_pane_g1_ParamLimits

0x74e0,	// (0x000459a4) main_camera4_pane_g1

0x74ec,	// (0x000459b0) main_camera4_pane_g2_ParamLimits

0x74ec,	// (0x000459b0) main_camera4_pane_g2

0x74ec,	// (0x000459b0) main_camera4_pane_g3_ParamLimits

0x74ec,	// (0x000459b0) main_camera4_pane_g3

0x74f8,	// (0x000459bc) main_camera4_pane_g4_ParamLimits

0x74f8,	// (0x000459bc) main_camera4_pane_g4

0x7504,	// (0x000459c8) main_camera4_pane_g5_ParamLimits

0x7504,	// (0x000459c8) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004dda0) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004dda0) main_camera4_pane_g

0x751e,	// (0x000459e2) main_camera4_pane_t1_ParamLimits

0x751e,	// (0x000459e2) main_camera4_pane_t1

0xceca,	// (0x0004b38e) bg_tb_trans_pane_cp06

0x7570,	// (0x00045a34) cam4_indicators_pane_g1

0x7581,	// (0x00045a45) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004ddbb) cam4_indicators_pane_g

0x7599,	// (0x00045a5d) cam4_indicators_pane_t1

0x75c3,	// (0x00045a87) main_video4_pane_g1_ParamLimits

0x75c3,	// (0x00045a87) main_video4_pane_g1

0x75cf,	// (0x00045a93) main_video4_pane_g2_ParamLimits

0x75cf,	// (0x00045a93) main_video4_pane_g2

0x75db,	// (0x00045a9f) main_video4_pane_g3_ParamLimits

0x75db,	// (0x00045a9f) main_video4_pane_g3

0x75e7,	// (0x00045aab) main_video4_pane_g4_ParamLimits

0x75e7,	// (0x00045aab) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004ddc2) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004ddc2) main_video4_pane_g

0x7609,	// (0x00045acd) vid4_indicators_pane_ParamLimits

0x7609,	// (0x00045acd) vid4_indicators_pane

0x7628,	// (0x00045aec) video4_image_uncrop_cif_pane_ParamLimits

0x7628,	// (0x00045aec) video4_image_uncrop_cif_pane

0x7637,	// (0x00045afb) video4_image_uncrop_nhd_pane_ParamLimits

0x7637,	// (0x00045afb) video4_image_uncrop_nhd_pane

0x74ab,	// (0x0004596f) video4_image_uncrop_vga_pane_ParamLimits

0x74ab,	// (0x0004596f) video4_image_uncrop_vga_pane

0xa9f9,	// (0x00048ebd) bg_tb_trans_pane_cp07

0x7650,	// (0x00045b14) vid4_indicators_pane_g1

0x7666,	// (0x00045b2a) vid4_indicators_pane_g2

0x767a,	// (0x00045b3e) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004ddcd) vid4_indicators_pane_g

0x76ab,	// (0x00045b6f) vid4_indicators_pane_t1

0x76c2,	// (0x00045b86) cam4_autofocus_pane_g1

0x76ca,	// (0x00045b8e) cam4_autofocus_pane_g2

0x76d2,	// (0x00045b96) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004ddd8) cam4_autofocus_pane_g

0x76da,	// (0x00045b9e) cam4_autofocus_pane_g3_copy1

0x6e73,	// (0x00045337) video_down_pane_cp_t1

0x6e81,	// (0x00045345) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004dd54) video_down_pane_cp_t

0x2191,	// (0x00040655) popup_vitu2_window_ParamLimits

0x2191,	// (0x00040655) popup_vitu2_window

0x76e2,	// (0x00045ba6) aid_size_cell2_itu2_ParamLimits

0x76e2,	// (0x00045ba6) aid_size_cell2_itu2

0x7704,	// (0x00045bc8) aid_size_cell_itu2_ParamLimits

0x7704,	// (0x00045bc8) aid_size_cell_itu2

0xd5ba,	// (0x0004ba7e) bg_popup_window_pane_cp09_ParamLimits

0xd5ba,	// (0x0004ba7e) bg_popup_window_pane_cp09

0x774a,	// (0x00045c0e) field_vitu2_entry_pane_ParamLimits

0x774a,	// (0x00045c0e) field_vitu2_entry_pane

0x776a,	// (0x00045c2e) grid_vitu2_function_pane_ParamLimits

0x776a,	// (0x00045c2e) grid_vitu2_function_pane

0x77ae,	// (0x00045c72) grid_vitu2_itu_pane_ParamLimits

0x77ae,	// (0x00045c72) grid_vitu2_itu_pane

0x782a,	// (0x00045cee) cell_vitu2_itu_pane_ParamLimits

0x782a,	// (0x00045cee) cell_vitu2_itu_pane

0x7841,	// (0x00045d05) cell_vitu2_function_pane_ParamLimits

0x7841,	// (0x00045d05) cell_vitu2_function_pane

0xd695,	// (0x0004bb59) bg_popup_call_pane_cp08_ParamLimits

0xd695,	// (0x0004bb59) bg_popup_call_pane_cp08

0xd6ac,	// (0x0004bb70) field_vitu2_entry_pane_g1

0xd6b8,	// (0x0004bb7c) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004dddf) field_vitu2_entry_pane_g

0x0e7b,	// (0x0003f33f) field_vitu2_entry_pane_t1_ParamLimits

0x0e7b,	// (0x0003f33f) field_vitu2_entry_pane_t1

0x0eab,	// (0x0003f36f) field_vitu2_entry_pane_t2_ParamLimits

0x0eab,	// (0x0003f36f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004dde6) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004dde6) field_vitu2_entry_pane_t

0x7885,	// (0x00045d49) bg_button_pane_cp010_ParamLimits

0x7885,	// (0x00045d49) bg_button_pane_cp010

0x7893,	// (0x00045d57) cell_vitu2_itu_pane_g1

0x78b3,	// (0x00045d77) cell_vitu2_itu_pane_t1_ParamLimits

0x78b3,	// (0x00045d77) cell_vitu2_itu_pane_t1

0x0ec8,	// (0x0003f38c) cell_vitu2_itu_pane_t2_ParamLimits

0x0ec8,	// (0x0003f38c) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004ddf0) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004ddf0) cell_vitu2_itu_pane_t

0xa9f9,	// (0x00048ebd) bg_button_pane_cp011

0x78ff,	// (0x00045dc3) cell_vitu2_function_pane_g1

0xa160,	// (0x00048624) main_myfav_hc_pane

0x7326,	// (0x000457ea) popup_image3_note_pane_ParamLimits

0x7326,	// (0x000457ea) popup_image3_note_pane

0x7334,	// (0x000457f8) popup_image3_tool_bar_pane_ParamLimits

0x7334,	// (0x000457f8) popup_image3_tool_bar_pane

0x0f3e,	// (0x0003f402) cell_vitu2_itu_pane_t3_ParamLimits

0x0f3e,	// (0x0003f402) cell_vitu2_itu_pane_t3

0xa160,	// (0x00048624) bg_popup_trans_pane

0xd6da,	// (0x0004bb9e) grid_image3_tool_bar_pane

0xd6e4,	// (0x0004bba8) bg_popup_trans_pane_g1

0xad2d,	// (0x000491f1) bg_popup_trans_pane_g2

0xd6ec,	// (0x0004bbb0) bg_popup_trans_pane_g3

0xd6f4,	// (0x0004bbb8) bg_popup_trans_pane_g4

0xd6fc,	// (0x0004bbc0) bg_popup_trans_pane_g5

0xd704,	// (0x0004bbc8) bg_popup_trans_pane_g6

0xd70c,	// (0x0004bbd0) bg_popup_trans_pane_g7

0xd714,	// (0x0004bbd8) bg_popup_trans_pane_g8

0xad0d,	// (0x000491d1) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004ddf7) bg_popup_trans_pane_g

0xd71c,	// (0x0004bbe0) cell_image3_tool_bar_pane_ParamLimits

0xd71c,	// (0x0004bbe0) cell_image3_tool_bar_pane

0xcc86,	// (0x0004b14a) cell_image3_tool_bar_pane_g1

0xa160,	// (0x00048624) bg_popup_trans_pane_cp1

0xd732,	// (0x0004bbf6) popup_image3_note_pane_t1

0xd740,	// (0x0004bc04) popup_image3_note_pane_t2

0xd74e,	// (0x0004bc12) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004de0a) popup_image3_note_pane_t

0xd75e,	// (0x0004bc22) popup_image3_note_pane_t3_copy1

0x7913,	// (0x00045dd7) bg_myfav_hc_instruction_pane_ParamLimits

0x7913,	// (0x00045dd7) bg_myfav_hc_instruction_pane

0x792b,	// (0x00045def) cell_myfav_contact_pane_ParamLimits

0x792b,	// (0x00045def) cell_myfav_contact_pane

0x7945,	// (0x00045e09) cell_myfav_contact_pane_cp1_ParamLimits

0x7945,	// (0x00045e09) cell_myfav_contact_pane_cp1

0x795d,	// (0x00045e21) cell_myfav_contact_pane_cp2_ParamLimits

0x795d,	// (0x00045e21) cell_myfav_contact_pane_cp2

0x7975,	// (0x00045e39) cell_myfav_contact_pane_cp3_ParamLimits

0x7975,	// (0x00045e39) cell_myfav_contact_pane_cp3

0x798c,	// (0x00045e50) cell_myfav_contact_pane_cp4_ParamLimits

0x798c,	// (0x00045e50) cell_myfav_contact_pane_cp4

0x79a2,	// (0x00045e66) cell_myfav_contact_pane_cp5_ParamLimits

0x79a2,	// (0x00045e66) cell_myfav_contact_pane_cp5

0x79b6,	// (0x00045e7a) cell_myfav_contact_pane_cp6_ParamLimits

0x79b6,	// (0x00045e7a) cell_myfav_contact_pane_cp6

0x79ca,	// (0x00045e8e) cell_myfav_contact_pane_cp7_ParamLimits

0x79ca,	// (0x00045e8e) cell_myfav_contact_pane_cp7

0xd76c,	// (0x0004bc30) listscroll_gen_pane_cp05

0x79e2,	// (0x00045ea6) main_myfav_hc_pane_g1_ParamLimits

0x79e2,	// (0x00045ea6) main_myfav_hc_pane_g1

0x79fc,	// (0x00045ec0) main_myfav_hc_pane_g2_ParamLimits

0x79fc,	// (0x00045ec0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004de11) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004de11) main_myfav_hc_pane_g

0x7a2e,	// (0x00045ef2) main_myfav_hc_pane_t1_ParamLimits

0x7a2e,	// (0x00045ef2) main_myfav_hc_pane_t1

0xd775,	// (0x0004bc39) main_myfav_hc_pane_t2_ParamLimits

0xd775,	// (0x0004bc39) main_myfav_hc_pane_t2

0xd787,	// (0x0004bc4b) main_myfav_hc_pane_t3_ParamLimits

0xd787,	// (0x0004bc4b) main_myfav_hc_pane_t3

0x7a45,	// (0x00045f09) main_myfav_hc_pane_t4_ParamLimits

0x7a45,	// (0x00045f09) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004de18) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004de18) main_myfav_hc_pane_t

0xcc86,	// (0x0004b14a) bg_myfav_hc_instruction_pane_g1

0xd799,	// (0x0004bc5d) cell_myfav_contact_pane_g1_ParamLimits

0xd799,	// (0x0004bc5d) cell_myfav_contact_pane_g1

0xd799,	// (0x0004bc5d) cell_myfav_contact_pane_g2_ParamLimits

0xd799,	// (0x0004bc5d) cell_myfav_contact_pane_g2

0xd7a5,	// (0x0004bc69) cell_myfav_contact_pane_g3_ParamLimits

0xd7a5,	// (0x0004bc69) cell_myfav_contact_pane_g3

0xcf2f,	// (0x0004b3f3) cell_myfav_contact_pane_g4_ParamLimits

0xcf2f,	// (0x0004b3f3) cell_myfav_contact_pane_g4

0xd7b2,	// (0x0004bc76) cell_myfav_contact_pane_g5_ParamLimits

0xd7b2,	// (0x0004bc76) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004de23) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004de23) cell_myfav_contact_pane_g

0x7a16,	// (0x00045eda) main_myfav_hc_pane_g3_ParamLimits

0x7a16,	// (0x00045eda) main_myfav_hc_pane_g3

0x20a3,	// (0x00040567) popup_adpt_find_window

0x7a6f,	// (0x00045f33) afind_page_pane_ParamLimits

0x7a6f,	// (0x00045f33) afind_page_pane

0x7a7c,	// (0x00045f40) aid_size_cell_afind_ParamLimits

0x7a7c,	// (0x00045f40) aid_size_cell_afind

0x7a96,	// (0x00045f5a) bg_popup_sub_pane_cp09_ParamLimits

0x7a96,	// (0x00045f5a) bg_popup_sub_pane_cp09

0x7aa3,	// (0x00045f67) find_pane_cp01_ParamLimits

0x7aa3,	// (0x00045f67) find_pane_cp01

0xd7be,	// (0x0004bc82) grid_afind_control_pane_ParamLimits

0xd7be,	// (0x0004bc82) grid_afind_control_pane

0x7ab0,	// (0x00045f74) grid_afind_pane_ParamLimits

0x7ab0,	// (0x00045f74) grid_afind_pane

0x7acc,	// (0x00045f90) cell_afind_pane_ParamLimits

0x7acc,	// (0x00045f90) cell_afind_pane

0xcc86,	// (0x0004b14a) afind_page_pane_g1

0x7b16,	// (0x00045fda) afind_page_pane_g2

0x7b1f,	// (0x00045fe3) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004de2e) afind_page_pane_g

0x7b28,	// (0x00045fec) afind_page_pane_t1

0xd7d2,	// (0x0004bc96) cell_afind_grid_control_pane_ParamLimits

0xd7d2,	// (0x0004bc96) cell_afind_grid_control_pane

0xd5da,	// (0x0004ba9e) bg_button_pane_cp69_ParamLimits

0xd5da,	// (0x0004ba9e) bg_button_pane_cp69

0x7b48,	// (0x0004600c) cell_afind_pane_g1_ParamLimits

0x7b48,	// (0x0004600c) cell_afind_pane_g1

0x7b55,	// (0x00046019) cell_afind_pane_t1_ParamLimits

0x7b55,	// (0x00046019) cell_afind_pane_t1

0xab22,	// (0x00048fe6) bg_button_pane_cp72

0xd7e1,	// (0x0004bca5) cell_afind_grid_control_pane_g1

0x5157,	// (0x0004361b) aid_image_placing_area_ParamLimits

0x5157,	// (0x0004361b) aid_image_placing_area

0xd262,	// (0x0004b726) field_vitu_entry_pane_g1_ParamLimits

0xd262,	// (0x0004b726) field_vitu_entry_pane_g1

0xd26e,	// (0x0004b732) field_vitu_entry_pane_g2_ParamLimits

0xd26e,	// (0x0004b732) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004dcdf) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004dcdf) field_vitu_entry_pane_g

0x6c79,	// (0x0004513d) cell_vitu_itu_pane_g1_ParamLimits

0x6cc9,	// (0x0004518d) cell_vitu_itu_pane_t3_ParamLimits

0x6cc9,	// (0x0004518d) cell_vitu_itu_pane_t3

0xd546,	// (0x0004ba0a) mp4_progress_pane_t1_ParamLimits

0xd595,	// (0x0004ba59) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004dd74) mp4_progress_pane_t_ParamLimits

0xd5ae,	// (0x0004ba72) mup_progress_pane_cp04_ParamLimits

0x7a59,	// (0x00045f1d) main_myfav_hc_pane_t5_ParamLimits

0x7a59,	// (0x00045f1d) main_myfav_hc_pane_t5

0xa17e,	// (0x00048642) aid_zoom_text_primary

0x20a3,	// (0x00040567) popup_adpt_find_window_ParamLimits

0xa9f9,	// (0x00048ebd) main_cam_set_pane

0x74d2,	// (0x00045996) cam4_zoom_pane_ParamLimits

0x74d2,	// (0x00045996) cam4_zoom_pane

0x7b67,	// (0x0004602b) main_cam_set_pane_g1_ParamLimits

0x7b67,	// (0x0004602b) main_cam_set_pane_g1

0x7b75,	// (0x00046039) main_cam_set_pane_g2_ParamLimits

0x7b75,	// (0x00046039) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004de35) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004de35) main_cam_set_pane_g

0x7b81,	// (0x00046045) main_cam_set_pane_t1_ParamLimits

0x7b81,	// (0x00046045) main_cam_set_pane_t1

0x7b9d,	// (0x00046061) main_cset_listscroll_pane_ParamLimits

0x7b9d,	// (0x00046061) main_cset_listscroll_pane

0x7bcc,	// (0x00046090) main_cset_slider_pane_ParamLimits

0x7bcc,	// (0x00046090) main_cset_slider_pane

0xd7f2,	// (0x0004bcb6) main_cset_list_pane_ParamLimits

0xd7f2,	// (0x0004bcb6) main_cset_list_pane

0xd802,	// (0x0004bcc6) scroll_pane_cp028

0x7bed,	// (0x000460b1) aid_area_touch_slider

0x7c09,	// (0x000460cd) cset_slider_pane

0x7c33,	// (0x000460f7) main_cset_slider_pane_g1

0x7c48,	// (0x0004610c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004de3a) main_cset_slider_pane_g

0xd83b,	// (0x0004bcff) main_cset_slider_pane_t1

0x7d04,	// (0x000461c8) main_cset_slider_pane_t2

0x7d1e,	// (0x000461e2) main_cset_slider_pane_t3

0x7d38,	// (0x000461fc) main_cset_slider_pane_t4

0x7d52,	// (0x00046216) main_cset_slider_pane_t5

0x7d6c,	// (0x00046230) main_cset_slider_pane_t6

0x7d81,	// (0x00046245) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004de5f) main_cset_slider_pane_t

0x7e85,	// (0x00046349) cset_list_set_pane_ParamLimits

0x7e85,	// (0x00046349) cset_list_set_pane

0x7e96,	// (0x0004635a) aid_position_infowindow_above

0x7e9e,	// (0x00046362) aid_position_infowindow_below

0x0f90,	// (0x0003f454) cset_list_set_pane_g1_ParamLimits

0x0f90,	// (0x0003f454) cset_list_set_pane_g1

0x0f9c,	// (0x0003f460) cset_list_set_pane_g3_ParamLimits

0x0f9c,	// (0x0003f460) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004de7e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004de7e) cset_list_set_pane_g

0x0fab,	// (0x0003f46f) cset_list_set_pane_t1_ParamLimits

0x0fab,	// (0x0003f46f) cset_list_set_pane_t1

0xa9f9,	// (0x00048ebd) list_highlight_pane_cp021_ParamLimits

0xa9f9,	// (0x00048ebd) list_highlight_pane_cp021

0xb538,	// (0x000499fc) cset_slider_pane_g1

0xb54a,	// (0x00049a0e) cset_slider_pane_g2

0xb541,	// (0x00049a05) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004de83) cset_slider_pane_g

0x7ea6,	// (0x0004636a) aid_area_touch_cam4_zoom

0x7eae,	// (0x00046372) cam4_zoom_cont_pane

0x7eb6,	// (0x0004637a) cam4_zoom_pane_g1

0x7ebe,	// (0x00046382) cam4_zoom_pane_g2

0x7ec6,	// (0x0004638a) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004de8a) cam4_zoom_pane_g

0xd8db,	// (0x0004bd9f) cam4_zoom_cont_pane_g1

0xd8e4,	// (0x0004bda8) cam4_zoom_cont_pane_g2

0xd8ed,	// (0x0004bdb1) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004de91) cam4_zoom_cont_pane_g

0x737d,	// (0x00045841) call4_image_pane_ParamLimits

0x737d,	// (0x00045841) call4_image_pane

0xd5e6,	// (0x0004baaa) call4_windows_conf_pane_ParamLimits

0xd601,	// (0x0004bac5) popup_call4_audio_in_window_ParamLimits

0xd601,	// (0x0004bac5) popup_call4_audio_in_window

0xa160,	// (0x00048624) bg_popup_call2_act_pane_cp02

0xd663,	// (0x0004bb27) call4_list_conf_pane

0xcc86,	// (0x0004b14a) call4_image_pane_g1

0xcc86,	// (0x0004b14a) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004dba0) call4_image_pane_g

0xd8f6,	// (0x0004bdba) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f6,	// (0x0004bdba) list_single_graphic_popup_conf4_pane

0xa160,	// (0x00048624) list_highlight_pane_cp022

0xd90b,	// (0x0004bdcf) list_single_graphic_popup_conf4_pane_g1

0xb22c,	// (0x000496f0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004de98) list_single_graphic_popup_conf4_pane_g

0xd913,	// (0x0004bdd7) list_single_graphic_popup_conf4_pane_t1

0x33fc,	// (0x000418c0) popup_vtel_slider_window_ParamLimits

0x33fc,	// (0x000418c0) popup_vtel_slider_window

0xd5c8,	// (0x0004ba8c) dialer2_ne_pane_t2_ParamLimits

0xd5c8,	// (0x0004ba8c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004dd79) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004dd79) dialer2_ne_pane_t

0xa9f9,	// (0x00048ebd) bg_popup_sub_pane_cp010_ParamLimits

0xa9f9,	// (0x00048ebd) bg_popup_sub_pane_cp010

0x7ece,	// (0x00046392) popup_vtel_slider_window_g1_ParamLimits

0x7ece,	// (0x00046392) popup_vtel_slider_window_g1

0x7eda,	// (0x0004639e) popup_vtel_slider_window_g2_ParamLimits

0x7eda,	// (0x0004639e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004de9d) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004de9d) popup_vtel_slider_window_g

0x7f22,	// (0x000463e6) vtel_slider_pane_ParamLimits

0x7f22,	// (0x000463e6) vtel_slider_pane

0x7f31,	// (0x000463f5) vtel_slider_pane_g1_ParamLimits

0x7f31,	// (0x000463f5) vtel_slider_pane_g1

0x7f3e,	// (0x00046402) vtel_slider_pane_g2_ParamLimits

0x7f3e,	// (0x00046402) vtel_slider_pane_g2

0x7f4b,	// (0x0004640f) vtel_slider_pane_g3_ParamLimits

0x7f4b,	// (0x0004640f) vtel_slider_pane_g3

0x7f31,	// (0x000463f5) vtel_slider_pane_g4_ParamLimits

0x7f31,	// (0x000463f5) vtel_slider_pane_g4

0x7f58,	// (0x0004641c) vtel_slider_pane_g5_ParamLimits

0x7f58,	// (0x0004641c) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004dea6) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004dea6) vtel_slider_pane_g

0xa9f9,	// (0x00048ebd) main_gallery2_pane

0x772a,	// (0x00045bee) aid_size_row_itut2_dropdow_list_ParamLimits

0x772a,	// (0x00045bee) aid_size_row_itut2_dropdow_list

0x778c,	// (0x00045c50) grid_vitu2_function_top_pane_ParamLimits

0x778c,	// (0x00045c50) grid_vitu2_function_top_pane

0x77e2,	// (0x00045ca6) popup_vitu2_dropdown_list_window_ParamLimits

0x77e2,	// (0x00045ca6) popup_vitu2_dropdown_list_window

0x7806,	// (0x00045cca) popup_vitu2_match_list_window

0x7f65,	// (0x00046429) cell_vitu2_function_top_pane_ParamLimits

0x7f65,	// (0x00046429) cell_vitu2_function_top_pane

0x7f87,	// (0x0004644b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f87,	// (0x0004644b) cell_vitu2_function_top_pane_cp01

0x7fa3,	// (0x00046467) cell_vitu2_function_top_wide_pane_ParamLimits

0x7fa3,	// (0x00046467) cell_vitu2_function_top_wide_pane

0xa9f9,	// (0x00048ebd) bg_button_pane_cp012

0x7fbf,	// (0x00046483) cell_vitu2_function_top_pane_g1

0x7fd3,	// (0x00046497) bg_button_pane_cp013_ParamLimits

0x7fd3,	// (0x00046497) bg_button_pane_cp013

0x7fef,	// (0x000464b3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7fef,	// (0x000464b3) cell_vitu2_function_top_wide_pane_g1

0x2191,	// (0x00040655) bg_popup_sub_pane_cp20

0x8007,	// (0x000464cb) list_vitu2_match_list_pane

0xd6e4,	// (0x0004bba8) bg_popup_sub_pane_cp20_g1

0xd6ec,	// (0x0004bbb0) bg_popup_sub_pane_cp20_g2

0xad2d,	// (0x000491f1) bg_popup_sub_pane_cp20_g3

0xd6f4,	// (0x0004bbb8) bg_popup_sub_pane_cp20_g4

0xad0d,	// (0x000491d1) bg_popup_sub_pane_cp20_g5

0xd929,	// (0x0004bded) bg_popup_sub_pane_cp20_g6

0xd704,	// (0x0004bbc8) bg_popup_sub_pane_cp20_g7

0xd70c,	// (0x0004bbd0) bg_popup_sub_pane_cp20_g8

0xd714,	// (0x0004bbd8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004deb1) bg_popup_sub_pane_cp20_g

0xaa15,	// (0x00048ed9) list_vitu2_match_list_item_pane_ParamLimits

0xaa15,	// (0x00048ed9) list_vitu2_match_list_item_pane

0x801f,	// (0x000464e3) list_vitu2_match_list_item_pane_t1

0xa160,	// (0x00048624) bg_popup_sub_pane_cp21

0xb155,	// (0x00049619) grid_vitu2_dropdown_list_pane

0x802d,	// (0x000464f1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x802d,	// (0x000464f1) cell_vitu2_dropdown_list_char_pane

0x8052,	// (0x00046516) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8052,	// (0x00046516) cell_vitu2_dropdown_list_ctrl_pane

0xd931,	// (0x0004bdf5) cell_vitu2_dropdown_list_char_pane_g1

0xd93a,	// (0x0004bdfe) cell_vitu2_dropdown_list_char_pane_g2

0xd943,	// (0x0004be07) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004dece) cell_vitu2_dropdown_list_char_pane_g

0x8080,	// (0x00046544) cell_vitu2_dropdown_list_char_pane_t1

0x808e,	// (0x00046552) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x808e,	// (0x00046552) cell_vitu2_dropdown_list_ctrl_pane_g1

0x809e,	// (0x00046562) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x809e,	// (0x00046562) cell_vitu2_dropdown_list_ctrl_pane_g2

0x80af,	// (0x00046573) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x80af,	// (0x00046573) cell_vitu2_dropdown_list_ctrl_pane_g3

0x80bf,	// (0x00046583) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x80bf,	// (0x00046583) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceca,	// (0x0004b38e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceca,	// (0x0004b38e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004ded5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004ded5) cell_vitu2_dropdown_list_ctrl_pane_g

0x80d8,	// (0x0004659c) aid_size_cell_gallery2_ParamLimits

0x80d8,	// (0x0004659c) aid_size_cell_gallery2

0x80f2,	// (0x000465b6) grid_gallery2_pane_ParamLimits

0x80f2,	// (0x000465b6) grid_gallery2_pane

0x6afe,	// (0x00044fc2) scroll_pane_cp029_ParamLimits

0x6afe,	// (0x00044fc2) scroll_pane_cp029

0x8109,	// (0x000465cd) cell_gallery2_pane_ParamLimits

0x8109,	// (0x000465cd) cell_gallery2_pane

0xd94c,	// (0x0004be10) cell_gallery2_pane_g2

0x8155,	// (0x00046619) cell_gallery2_pane_g3

0xd954,	// (0x0004be18) cell_gallery2_pane_g4

0xd95c,	// (0x0004be20) cell_gallery2_pane_g5

0xaad0,	// (0x00048f94) grid_highlight_pane_cp10

0x7806,	// (0x00045cca) popup_vitu2_match_list_window_ParamLimits

0x781a,	// (0x00045cde) popup_vitu2_query_window_ParamLimits

0x781a,	// (0x00045cde) popup_vitu2_query_window

0xa160,	// (0x00048624) bg_vitu2_candi_button_pane

0xd931,	// (0x0004bdf5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd93a,	// (0x0004bdfe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd943,	// (0x0004be07) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1012,	// (0x0003f4d6) bg_button_pane_cp015

0x815d,	// (0x00046621) bg_button_pane_cp016

0x8170,	// (0x00046634) bg_button_pane_cp017

0xc835,	// (0x0004acf9) bg_popup_sub_pane_cp22

0xd964,	// (0x0004be28) popup_vitu2_query_window_g1

0x1045,	// (0x0003f509) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004dee0) popup_vitu2_query_window_g

0x1062,	// (0x0003f526) popup_vitu2_query_window_t1_ParamLimits

0x1062,	// (0x0003f526) popup_vitu2_query_window_t1

0x1095,	// (0x0003f559) popup_vitu2_query_window_t2_ParamLimits

0x1095,	// (0x0003f559) popup_vitu2_query_window_t2

0x10a7,	// (0x0003f56b) popup_vitu2_query_window_t3_ParamLimits

0x10a7,	// (0x0003f56b) popup_vitu2_query_window_t3

0x8194,	// (0x00046658) popup_vitu2_query_window_t4_ParamLimits

0x8194,	// (0x00046658) popup_vitu2_query_window_t4

0x81b7,	// (0x0004667b) popup_vitu2_query_window_t5_ParamLimits

0x81b7,	// (0x0004667b) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004dee7) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004dee7) popup_vitu2_query_window_t

0xd7ea,	// (0x0004bcae) main_cset_text_pane

0x7bed,	// (0x000460b1) aid_area_touch_slider_ParamLimits

0x7c09,	// (0x000460cd) cset_slider_pane_ParamLimits

0x7c33,	// (0x000460f7) main_cset_slider_pane_g1_ParamLimits

0x7c48,	// (0x0004610c) main_cset_slider_pane_g2_ParamLimits

0xd80b,	// (0x0004bccf) main_cset_slider_pane_g3_ParamLimits

0xd80b,	// (0x0004bccf) main_cset_slider_pane_g3

0x7c5d,	// (0x00046121) main_cset_slider_pane_g4_ParamLimits

0x7c5d,	// (0x00046121) main_cset_slider_pane_g4

0x7c6c,	// (0x00046130) main_cset_slider_pane_g5_ParamLimits

0x7c6c,	// (0x00046130) main_cset_slider_pane_g5

0x7c78,	// (0x0004613c) main_cset_slider_pane_g6_ParamLimits

0x7c78,	// (0x0004613c) main_cset_slider_pane_g6

0xf976,	// (0x0004de3a) main_cset_slider_pane_g_ParamLimits

0xd83b,	// (0x0004bcff) main_cset_slider_pane_t1_ParamLimits

0x7d04,	// (0x000461c8) main_cset_slider_pane_t2_ParamLimits

0x7d1e,	// (0x000461e2) main_cset_slider_pane_t3_ParamLimits

0x7d38,	// (0x000461fc) main_cset_slider_pane_t4_ParamLimits

0x7d52,	// (0x00046216) main_cset_slider_pane_t5_ParamLimits

0x7d6c,	// (0x00046230) main_cset_slider_pane_t6_ParamLimits

0x7d81,	// (0x00046245) main_cset_slider_pane_t7_ParamLimits

0x7dab,	// (0x0004626f) main_cset_slider_pane_t8_ParamLimits

0x7dab,	// (0x0004626f) main_cset_slider_pane_t8

0x7dd3,	// (0x00046297) main_cset_slider_pane_t9_ParamLimits

0x7dd3,	// (0x00046297) main_cset_slider_pane_t9

0x7dfb,	// (0x000462bf) main_cset_slider_pane_t10_ParamLimits

0x7dfb,	// (0x000462bf) main_cset_slider_pane_t10

0x7e23,	// (0x000462e7) main_cset_slider_pane_t11_ParamLimits

0x7e23,	// (0x000462e7) main_cset_slider_pane_t11

0x7e4b,	// (0x0004630f) main_cset_slider_pane_t12_ParamLimits

0x7e4b,	// (0x0004630f) main_cset_slider_pane_t12

0x7e68,	// (0x0004632c) main_cset_slider_pane_t13_ParamLimits

0x7e68,	// (0x0004632c) main_cset_slider_pane_t13

0xf99b,	// (0x0004de5f) main_cset_slider_pane_t_ParamLimits

0xa160,	// (0x00048624) bg_popup_sub_pane_cp011

0xd970,	// (0x0004be34) main_cset_text_pane_g1

0xd978,	// (0x0004be3c) main_cset_text_pane_t1

0xd986,	// (0x0004be4a) main_cset_text_pane_t2

0xd994,	// (0x0004be58) main_cset_text_pane_t3

0xd9a2,	// (0x0004be66) main_cset_text_pane_t4

0xd9b0,	// (0x0004be74) main_cset_text_pane_t5

0xd9be,	// (0x0004be82) main_cset_text_pane_t6

0xd9cc,	// (0x0004be90) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004def6) main_cset_text_pane_t

0xa160,	// (0x00048624) main_cam4_burst_pane

0xa160,	// (0x00048624) main_cam5_pane

0x7b36,	// (0x00045ffa) bg_button_pane_cp019

0x7b3f,	// (0x00046003) bg_button_pane_cp020

0xd817,	// (0x0004bcdb) main_cset_slider_pane_g7_ParamLimits

0xd817,	// (0x0004bcdb) main_cset_slider_pane_g7

0xd823,	// (0x0004bce7) main_cset_slider_pane_g8_ParamLimits

0xd823,	// (0x0004bce7) main_cset_slider_pane_g8

0x7c8c,	// (0x00046150) main_cset_slider_pane_g9_ParamLimits

0x7c8c,	// (0x00046150) main_cset_slider_pane_g9

0x7c98,	// (0x0004615c) main_cset_slider_pane_g10_ParamLimits

0x7c98,	// (0x0004615c) main_cset_slider_pane_g10

0x7ca4,	// (0x00046168) main_cset_slider_pane_g11_ParamLimits

0x7ca4,	// (0x00046168) main_cset_slider_pane_g11

0x7cb0,	// (0x00046174) main_cset_slider_pane_g12_ParamLimits

0x7cb0,	// (0x00046174) main_cset_slider_pane_g12

0x7cbc,	// (0x00046180) main_cset_slider_pane_g13_ParamLimits

0x7cbc,	// (0x00046180) main_cset_slider_pane_g13

0x7cc8,	// (0x0004618c) main_cset_slider_pane_g14_ParamLimits

0x7cc8,	// (0x0004618c) main_cset_slider_pane_g14

0x7cd4,	// (0x00046198) main_cset_slider_pane_g15_ParamLimits

0x7cd4,	// (0x00046198) main_cset_slider_pane_g15

0xd869,	// (0x0004bd2d) main_cset_slider_pane_t14_ParamLimits

0xd869,	// (0x0004bd2d) main_cset_slider_pane_t14

0xd8a2,	// (0x0004bd66) main_cset_slider_pane_t15_ParamLimits

0xd8a2,	// (0x0004bd66) main_cset_slider_pane_t15

0x81da,	// (0x0004669e) aid_cam4_burst_size_cell_ParamLimits

0x81da,	// (0x0004669e) aid_cam4_burst_size_cell

0x81f6,	// (0x000466ba) grid_cam4_burst_pane_ParamLimits

0x81f6,	// (0x000466ba) grid_cam4_burst_pane

0x8228,	// (0x000466ec) linegrid_cam4_burst_pane_ParamLimits

0x8228,	// (0x000466ec) linegrid_cam4_burst_pane

0x8246,	// (0x0004670a) scroll_pane_cp30_ParamLimits

0x8246,	// (0x0004670a) scroll_pane_cp30

0x8252,	// (0x00046716) cell_cam4_burst_pane_ParamLimits

0x8252,	// (0x00046716) cell_cam4_burst_pane

0xd9da,	// (0x0004be9e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9da,	// (0x0004be9e) linegrid_cam4_burst_pane_g1

0x8292,	// (0x00046756) linegrid_cam4_burst_pane_g2_ParamLimits

0x8292,	// (0x00046756) linegrid_cam4_burst_pane_g2

0xd9e7,	// (0x0004beab) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9e7,	// (0x0004beab) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004df05) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004df05) linegrid_cam4_burst_pane_g

0x82a3,	// (0x00046767) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x82a3,	// (0x00046767) linegrid_cam4_burst_pane_g3_copy1

0xd9f4,	// (0x0004beb8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9f4,	// (0x0004beb8) linegrid_cam4_burst_pane_g4

0x82bd,	// (0x00046781) linegrid_cam4_burst_pane_g5_ParamLimits

0x82bd,	// (0x00046781) linegrid_cam4_burst_pane_g5

0x82ce,	// (0x00046792) linegrid_cam4_burst_pane_g6_ParamLimits

0x82ce,	// (0x00046792) linegrid_cam4_burst_pane_g6

0xda01,	// (0x0004bec5) linegrid_cam4_burst_pane_g7_ParamLimits

0xda01,	// (0x0004bec5) linegrid_cam4_burst_pane_g7

0x82e5,	// (0x000467a9) cell_cam4_burst_pane_g1

0xda1a,	// (0x0004bede) main_cam5_pane_t1_ParamLimits

0xda1a,	// (0x0004bede) main_cam5_pane_t1

0xda2c,	// (0x0004bef0) main_cam5_pane_t2_ParamLimits

0xda2c,	// (0x0004bef0) main_cam5_pane_t2

0xda3e,	// (0x0004bf02) main_cam5_pane_t3_ParamLimits

0xda3e,	// (0x0004bf02) main_cam5_pane_t3

0xda50,	// (0x0004bf14) main_cam5_pane_t4_ParamLimits

0xda50,	// (0x0004bf14) main_cam5_pane_t4

0xda68,	// (0x0004bf2c) main_cam5_pane_t5_ParamLimits

0xda68,	// (0x0004bf2c) main_cam5_pane_t5

0xda7c,	// (0x0004bf40) main_cam5_pane_t6_ParamLimits

0xda7c,	// (0x0004bf40) main_cam5_pane_t6

0xda90,	// (0x0004bf54) main_cam5_pane_t7_ParamLimits

0xda90,	// (0x0004bf54) main_cam5_pane_t7

0xdaa2,	// (0x0004bf66) main_cam5_pane_t8_ParamLimits

0xdaa2,	// (0x0004bf66) main_cam5_pane_t8

0xdac0,	// (0x0004bf84) main_cam5_pane_t9_ParamLimits

0xdac0,	// (0x0004bf84) main_cam5_pane_t9

0xdad2,	// (0x0004bf96) main_cam5_pane_t10_ParamLimits

0xdad2,	// (0x0004bf96) main_cam5_pane_t10

0xdae4,	// (0x0004bfa8) main_cam5_pane_t11_ParamLimits

0xdae4,	// (0x0004bfa8) main_cam5_pane_t11

0xdaf8,	// (0x0004bfbc) main_cam5_pane_t12_ParamLimits

0xdaf8,	// (0x0004bfbc) main_cam5_pane_t12

0xdb0f,	// (0x0004bfd3) main_cam5_pane_t13_ParamLimits

0xdb0f,	// (0x0004bfd3) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004df11) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004df11) main_cam5_pane_t

0x2150,	// (0x00040614) popup_scut_keymap_window_ParamLimits

0x2150,	// (0x00040614) popup_scut_keymap_window

0x82f8,	// (0x000467bc) aid_size_cell_brow_shortcut

0xaad0,	// (0x00048f94) bg_popup_window_pane_cp010

0x8304,	// (0x000467c8) grid_scut_pane

0x8310,	// (0x000467d4) cell_scut_pane_ParamLimits

0x8310,	// (0x000467d4) cell_scut_pane

0x832b,	// (0x000467ef) cell_scut_pane_g1

0xdb32,	// (0x0004bff6) cell_scut_pane_t1

0xdb41,	// (0x0004c005) cell_scut_pane_t2

0x8334,	// (0x000467f8) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004df2c) cell_scut_pane_t

0x62f3,	// (0x000447b7) main_mup3_pane_g8_ParamLimits

0x62f3,	// (0x000447b7) main_mup3_pane_g8

0x773a,	// (0x00045bfe) area_vitu2_query_pane_ParamLimits

0x773a,	// (0x00045bfe) area_vitu2_query_pane

0x1024,	// (0x0003f4e8) input_focus_pane_cp08

0xdb50,	// (0x0004c014) area_vitu2_query_pane_g1

0x1125,	// (0x0003f5e9) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004df33) area_vitu2_query_pane_g

0x8342,	// (0x00046806) area_vitu2_query_pane_t1_ParamLimits

0x8342,	// (0x00046806) area_vitu2_query_pane_t1

0x8356,	// (0x0004681a) area_vitu2_query_pane_t2_ParamLimits

0x8356,	// (0x0004681a) area_vitu2_query_pane_t2

0x1136,	// (0x0003f5fa) area_vitu2_query_pane_t3_ParamLimits

0x1136,	// (0x0003f5fa) area_vitu2_query_pane_t3

0x115e,	// (0x0003f622) area_vitu2_query_pane_t4_ParamLimits

0x115e,	// (0x0003f622) area_vitu2_query_pane_t4

0x1186,	// (0x0003f64a) area_vitu2_query_pane_t5_ParamLimits

0x1186,	// (0x0003f64a) area_vitu2_query_pane_t5

0x11ae,	// (0x0003f672) area_vitu2_query_pane_t6_ParamLimits

0x11ae,	// (0x0003f672) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004df38) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004df38) area_vitu2_query_pane_t

0x836a,	// (0x0004682e) bg_button_pane_cp018

0x8378,	// (0x0004683c) bg_button_pane_cp021

0x11fa,	// (0x0003f6be) bg_button_pane_cp022

0x120b,	// (0x0003f6cf) input_focus_pane_cp09

0x47ae,	// (0x00042c72) aid_size_touch_mv_arrow_left

0x47d9,	// (0x00042c9d) aid_size_touch_mv_arrow_right

0x7cec,	// (0x000461b0) main_cset_slider_pane_g16_ParamLimits

0x7cec,	// (0x000461b0) main_cset_slider_pane_g16

0x7cf8,	// (0x000461bc) main_cset_slider_pane_g17_ParamLimits

0x7cf8,	// (0x000461bc) main_cset_slider_pane_g17

0x82e5,	// (0x000467a9) cell_cam4_burst_pane_g1_ParamLimits

0xa160,	// (0x00048624) compa_mode_pane

0x7ee6,	// (0x000463aa) popup_vtel_slider_window_g3_ParamLimits

0x7ee6,	// (0x000463aa) popup_vtel_slider_window_g3

0x7efa,	// (0x000463be) popup_vtel_slider_window_g4_ParamLimits

0x7efa,	// (0x000463be) popup_vtel_slider_window_g4

0x7f0e,	// (0x000463d2) popup_vtel_slider_window_t1_ParamLimits

0x7f0e,	// (0x000463d2) popup_vtel_slider_window_t1

0xa160,	// (0x00048624) main_cl_pane

0xc861,	// (0x0004ad25) popup_imed_adjust2_window_ParamLimits

0xc835,	// (0x0004acf9) bg_tb_trans_pane_cp05_ParamLimits

0xd197,	// (0x0004b65b) popup_imed_adjust2_window_g1_ParamLimits

0xd1a6,	// (0x0004b66a) popup_imed_adjust2_window_g2_ParamLimits

0xd1a6,	// (0x0004b66a) popup_imed_adjust2_window_g2

0xd1b2,	// (0x0004b676) popup_imed_adjust2_window_g3_ParamLimits

0xd1b2,	// (0x0004b676) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004dca3) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004dca3) popup_imed_adjust2_window_g

0xd1be,	// (0x0004b682) popup_imed_adjust2_window_t1_ParamLimits

0xd1d6,	// (0x0004b69a) slider_imed_adjust_pane_ParamLimits

0xd1ea,	// (0x0004b6ae) slider_imed_adjust_pane_g1_ParamLimits

0xd1fa,	// (0x0004b6be) slider_imed_adjust_pane_g2_ParamLimits

0xd20a,	// (0x0004b6ce) slider_imed_adjust_pane_g3_ParamLimits

0xd21b,	// (0x0004b6df) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004dcaa) slider_imed_adjust_pane_g_ParamLimits

0x747b,	// (0x0004593f) aid_touch_area_cam4_ParamLimits

0x747b,	// (0x0004593f) aid_touch_area_cam4

0x748b,	// (0x0004594f) battery_pane_cp01

0x7512,	// (0x000459d6) main_camera4_pane_g6_ParamLimits

0x7512,	// (0x000459d6) main_camera4_pane_g6

0x7530,	// (0x000459f4) main_camera4_pane_t2_ParamLimits

0x7530,	// (0x000459f4) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004ddad) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004ddad) main_camera4_pane_t

0x75b3,	// (0x00045a77) aid_touch_area_vid4_ParamLimits

0x75b3,	// (0x00045a77) aid_touch_area_vid4

0x75f3,	// (0x00045ab7) main_video4_pane_g5_ParamLimits

0x75f3,	// (0x00045ab7) main_video4_pane_g5

0x7619,	// (0x00045add) vid4_progress_pane_ParamLimits

0x7619,	// (0x00045add) vid4_progress_pane

0xd82f,	// (0x0004bcf3) main_cset_slider_pane_g18_ParamLimits

0xd82f,	// (0x0004bcf3) main_cset_slider_pane_g18

0xda0e,	// (0x0004bed2) cell_cam4_burst_pane_g2_ParamLimits

0xda0e,	// (0x0004bed2) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004df0c) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004df0c) cell_cam4_burst_pane_g

0x8384,	// (0x00046848) bg_cl_pane_ParamLimits

0x8384,	// (0x00046848) bg_cl_pane

0x8390,	// (0x00046854) cl_header_pane_ParamLimits

0x8390,	// (0x00046854) cl_header_pane

0x839c,	// (0x00046860) cl_listscroll_pane_ParamLimits

0x839c,	// (0x00046860) cl_listscroll_pane

0xdb5c,	// (0x0004c020) bg_cl_pane_g1

0xdb64,	// (0x0004c028) bg_cl_pane_g2

0xdb6c,	// (0x0004c030) bg_cl_pane_g3

0xdb74,	// (0x0004c038) bg_cl_pane_g4

0xdb7c,	// (0x0004c040) bg_cl_pane_g5

0xdb84,	// (0x0004c048) bg_cl_pane_g6

0xdb8c,	// (0x0004c050) bg_cl_pane_g7

0xdb94,	// (0x0004c058) bg_cl_pane_g8

0xdb9c,	// (0x0004c060) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004df47) bg_cl_pane_g

0x83a8,	// (0x0004686c) aid_height_cl_leading_ParamLimits

0x83a8,	// (0x0004686c) aid_height_cl_leading

0x83b4,	// (0x00046878) aid_height_cl_text_ParamLimits

0x83b4,	// (0x00046878) aid_height_cl_text

0x2191,	// (0x00040655) bg_cl_header_pane_ParamLimits

0x2191,	// (0x00040655) bg_cl_header_pane

0x83cc,	// (0x00046890) cl_header_pane_g1_ParamLimits

0x83cc,	// (0x00046890) cl_header_pane_g1

0x83d9,	// (0x0004689d) cl_header_pane_t1_ParamLimits

0x83d9,	// (0x0004689d) cl_header_pane_t1

0xdba4,	// (0x0004c068) cl_list_pane

0xd802,	// (0x0004bcc6) hc_scroll_pane_cp01

0xad0d,	// (0x000491d1) bg_cl_header_pane_g1

0xd6e4,	// (0x0004bba8) bg_cl_header_pane_g2

0xad2d,	// (0x000491f1) bg_cl_header_pane_g3

0xd6f4,	// (0x0004bbb8) bg_cl_header_pane_g4

0xd6ec,	// (0x0004bbb0) bg_cl_header_pane_g5

0xd929,	// (0x0004bded) bg_cl_header_pane_g6

0xd70c,	// (0x0004bbd0) bg_cl_header_pane_g7

0xd714,	// (0x0004bbd8) bg_cl_header_pane_g8

0xd704,	// (0x0004bbc8) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004df5a) bg_cl_header_pane_g

0x83eb,	// (0x000468af) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x83eb,	// (0x000468af) hc_cl_list_double_graphic_heading_pane

0x83fb,	// (0x000468bf) hc_cl_list_single_graphic_pane_ParamLimits

0x83fb,	// (0x000468bf) hc_cl_list_single_graphic_pane

0x840d,	// (0x000468d1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x840d,	// (0x000468d1) hc_cl_list_single_graphic_pane_g1

0x8419,	// (0x000468dd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8419,	// (0x000468dd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004df6d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004df6d) hc_cl_list_single_graphic_pane_g

0x842d,	// (0x000468f1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x842d,	// (0x000468f1) hc_cl_list_single_graphic_pane_t1

0x840d,	// (0x000468d1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x840d,	// (0x000468d1) hc_cl_list_double_graphic_heading_pane_g1

0x8442,	// (0x00046906) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8442,	// (0x00046906) hc_cl_list_double_graphic_heading_pane_g2

0x8456,	// (0x0004691a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8456,	// (0x0004691a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004df72) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004df72) hc_cl_list_double_graphic_heading_pane_g

0x846a,	// (0x0004692e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x846a,	// (0x0004692e) hc_cl_list_double_graphic_heading_pane_t1

0x847f,	// (0x00046943) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x847f,	// (0x00046943) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004df79) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004df79) hc_cl_list_double_graphic_heading_pane_t

0x849c,	// (0x00046960) vid4_progress_pane_g1

0x84ae,	// (0x00046972) vid4_progress_pane_g2

0x4ea2,	// (0x00043366) vid4_progress_pane_g3

0x84c0,	// (0x00046984) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004df7e) vid4_progress_pane_g

0x84de,	// (0x000469a2) vid4_progress_pane_t1

0x84f3,	// (0x000469b7) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004df89) vid4_progress_pane_t

0x851e,	// (0x000469e2) wait_bar_pane_cp07

0xca73,	// (0x0004af37) blid_firmament_pane_ParamLimits

0xcab6,	// (0x0004af7a) popup_blid_sat_info2_window_g1

0xcada,	// (0x0004af9e) popup_blid_sat_info2_window_t3

0xcae8,	// (0x0004afac) popup_blid_sat_info2_window_t4

0xcaf6,	// (0x0004afba) popup_blid_sat_info2_window_t5

0xcb04,	// (0x0004afc8) popup_blid_sat_info2_window_t6

0xcb14,	// (0x0004afd8) popup_blid_sat_info2_window_t7

0xcb22,	// (0x0004afe6) popup_blid_sat_info2_window_t8

0xcb30,	// (0x0004aff4) popup_blid_sat_info2_window_t9

0xcb3e,	// (0x0004b002) popup_blid_sat_info2_window_t10

0xcc06,	// (0x0004b0ca) aid_firma_cardinal_ParamLimits

0xcc1a,	// (0x0004b0de) blid_firmament_pane_t1_ParamLimits

0xcc31,	// (0x0004b0f5) blid_firmament_pane_t2_ParamLimits

0xcc48,	// (0x0004b10c) blid_firmament_pane_t3_ParamLimits

0xcc5f,	// (0x0004b123) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004db97) blid_firmament_pane_t_ParamLimits

0xcc76,	// (0x0004b13a) blid_sat_info_pane_ParamLimits

0xa9f9,	// (0x00048ebd) main_cam_set_pane_ParamLimits

0x6a97,	// (0x00044f5b) aid_size_cell_colour_35_ParamLimits

0x6ab1,	// (0x00044f75) aid_size_cell_colour_112_ParamLimits

0x6ac8,	// (0x00044f8c) aid_size_cell_effect_ParamLimits

0xa9f9,	// (0x00048ebd) bg_tb_trans_pane_cp02_ParamLimits

0xbba1,	// (0x0004a065) heading_imed_pane_ParamLimits

0x6ae2,	// (0x00044fa6) listscroll_imed_pane_ParamLimits

0xbe57,	// (0x0004a31b) popup_call2_audio_first_window_g5_ParamLimits

0xbe57,	// (0x0004a31b) popup_call2_audio_first_window_g5

0x71f4,	// (0x000456b8) aid_size_touch_image3_arrow_left_ParamLimits

0x71f4,	// (0x000456b8) aid_size_touch_image3_arrow_left

0x720a,	// (0x000456ce) aid_size_touch_image3_arrow_right_ParamLimits

0x720a,	// (0x000456ce) aid_size_touch_image3_arrow_right

0x8509,	// (0x000469cd) vid4_progress_pane_t3

0x6d90,	// (0x00045254) main_hwr_training_symbol_option_pane_ParamLimits

0x6d90,	// (0x00045254) main_hwr_training_symbol_option_pane

0xd486,	// (0x0004b94a) popup_hwr_training_preview_window_ParamLimits

0xd486,	// (0x0004b94a) popup_hwr_training_preview_window

0x6df1,	// (0x000452b5) hwr_training_navi_pane_g5_ParamLimits

0x6df1,	// (0x000452b5) hwr_training_navi_pane_g5

0xd6d2,	// (0x0004bb96) popup_char_count_window

0x2191,	// (0x00040655) bg_popup_sub_pane_cp20_ParamLimits

0x8007,	// (0x000464cb) list_vitu2_match_list_pane_ParamLimits

0x8013,	// (0x000464d7) vitu2_page_scroll_pane_ParamLimits

0x8013,	// (0x000464d7) vitu2_page_scroll_pane

0xdbad,	// (0x0004c071) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbad,	// (0x0004c071) list_single_hwr_training_symbol_option_pane

0xdbc0,	// (0x0004c084) list_single_hwr_training_symbol_option_pane_g1

0xdbc8,	// (0x0004c08c) list_single_hwr_training_symbol_option_pane_t1

0xdbd6,	// (0x0004c09a) bg_button_pane_cp023

0xdbdf,	// (0x0004c0a3) bg_button_pane_cp024

0x853b,	// (0x000469ff) vitu2_page_scroll_pane_g1

0x8543,	// (0x00046a07) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004df90) vitu2_page_scroll_pane_g

0x854d,	// (0x00046a11) vitu2_page_scroll_pane_t1

0xdc12,	// (0x0004c0d6) popup_char_count_window_g1

0xdc1b,	// (0x0004c0df) popup_char_count_window_g2

0xdc24,	// (0x0004c0e8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004df95) popup_char_count_window_g

0xdc2d,	// (0x0004c0f1) popup_char_count_window_t1

0xa160,	// (0x00048624) main_vded2_pane

0xd183,	// (0x0004b647) aid_size_cell_imed_line

0xd18d,	// (0x0004b651) grid_imed_line_width_pane

0x768d,	// (0x00045b51) vid4_indicators_pane_g4

0xdc3b,	// (0x0004c0ff) cell_imed_line_width_pane_ParamLimits

0xdc3b,	// (0x0004c0ff) cell_imed_line_width_pane

0xdc51,	// (0x0004c115) cell_imed_line_width_pane_g1

0xccc1,	// (0x0004b185) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004df9c) cell_imed_line_width_pane_g

0x855c,	// (0x00046a20) main_vded2_pane_g1_ParamLimits

0x855c,	// (0x00046a20) main_vded2_pane_g1

0x856b,	// (0x00046a2f) main_vded2_pane_g2_ParamLimits

0x856b,	// (0x00046a2f) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004dfa1) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004dfa1) main_vded2_pane_g

0x8579,	// (0x00046a3d) vded2_slider_pane_ParamLimits

0x8579,	// (0x00046a3d) vded2_slider_pane

0x8586,	// (0x00046a4a) aid_size_touch_vded2_end

0x8590,	// (0x00046a54) aid_size_touch_vded2_playhead

0xdc5a,	// (0x0004c11e) aid_size_touch_vded2_start

0xdc62,	// (0x0004c126) vded2_slider_bg_pane

0xdc6b,	// (0x0004c12f) vded2_slider_pane_g1

0xdc74,	// (0x0004c138) vded2_slider_pane_g2

0x8598,	// (0x00046a5c) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004dfa6) vded2_slider_pane_g

0xd57a,	// (0x0004ba3e) vded2_slider_bg_pane_g1

0xd583,	// (0x0004ba47) vded2_slider_bg_pane_g2

0xd58c,	// (0x0004ba50) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0004dc67) vded2_slider_bg_pane_g

0x4eba,	// (0x0004337e) aid_postcard_touch_down_pane_ParamLimits

0x4eba,	// (0x0004337e) aid_postcard_touch_down_pane

0x4eca,	// (0x0004338e) aid_postcard_touch_up_pane_ParamLimits

0x4eca,	// (0x0004338e) aid_postcard_touch_up_pane

0xa160,	// (0x00048624) main_blid2_pane

0xc843,	// (0x0004ad07) popup_blid2_search_window

0xa160,	// (0x00048624) blid2_gps_pane

0xa160,	// (0x00048624) blid2_navig_pane

0xa160,	// (0x00048624) blid2_search_pane

0xa160,	// (0x00048624) blid2_tripm_pane

0x85a1,	// (0x00046a65) blid2_search_pane_g1_ParamLimits

0x85a1,	// (0x00046a65) blid2_search_pane_g1

0x85ad,	// (0x00046a71) blid2_search_pane_t1_ParamLimits

0x85ad,	// (0x00046a71) blid2_search_pane_t1

0x85bf,	// (0x00046a83) aid_size_cell_blid2_gps_ParamLimits

0x85bf,	// (0x00046a83) aid_size_cell_blid2_gps

0x85cf,	// (0x00046a93) blid2_gps_pane_g1_ParamLimits

0x85cf,	// (0x00046a93) blid2_gps_pane_g1

0x85db,	// (0x00046a9f) grid_blid2_satellite_pane_ParamLimits

0x85db,	// (0x00046a9f) grid_blid2_satellite_pane

0x85e9,	// (0x00046aad) blid2_navig_pane_g1_ParamLimits

0x85e9,	// (0x00046aad) blid2_navig_pane_g1

0x85f5,	// (0x00046ab9) blid2_navig_pane_t1_ParamLimits

0x85f5,	// (0x00046ab9) blid2_navig_pane_t1

0x8607,	// (0x00046acb) blid2_navig_pane_t2_ParamLimits

0x8607,	// (0x00046acb) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0004dfad) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0004dfad) blid2_navig_pane_t

0x8619,	// (0x00046add) blid2_navig_ring_pane_ParamLimits

0x8619,	// (0x00046add) blid2_navig_ring_pane

0x8629,	// (0x00046aed) blid2_speed_pane_ParamLimits

0x8629,	// (0x00046aed) blid2_speed_pane

0x8635,	// (0x00046af9) blid2_tripm_pane_g1_ParamLimits

0x8635,	// (0x00046af9) blid2_tripm_pane_g1

0x8645,	// (0x00046b09) blid2_tripm_pane_g2_ParamLimits

0x8645,	// (0x00046b09) blid2_tripm_pane_g2

0x8651,	// (0x00046b15) blid2_tripm_pane_g3_ParamLimits

0x8651,	// (0x00046b15) blid2_tripm_pane_g3

0x865d,	// (0x00046b21) blid2_tripm_pane_g4_ParamLimits

0x865d,	// (0x00046b21) blid2_tripm_pane_g4

0x8669,	// (0x00046b2d) blid2_tripm_pane_g5_ParamLimits

0x8669,	// (0x00046b2d) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0004dfb2) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0004dfb2) blid2_tripm_pane_g

0x8685,	// (0x00046b49) blid2_tripm_pane_t1_ParamLimits

0x8685,	// (0x00046b49) blid2_tripm_pane_t1

0x8697,	// (0x00046b5b) blid2_tripm_pane_t2_ParamLimits

0x8697,	// (0x00046b5b) blid2_tripm_pane_t2

0x86a9,	// (0x00046b6d) blid2_tripm_pane_t3_ParamLimits

0x86a9,	// (0x00046b6d) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0004dfbf) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0004dfbf) blid2_tripm_pane_t

0x86db,	// (0x00046b9f) cell_blid2_satellite_pane_ParamLimits

0x86db,	// (0x00046b9f) cell_blid2_satellite_pane

0x86f9,	// (0x00046bbd) cell_blid2_satellite_pane_g1

0xdc7c,	// (0x0004c140) cell_blid2_satellite_pane_t1

0xcc86,	// (0x0004b14a) blid2_speed_pane_g1

0xdc8a,	// (0x0004c14e) blid2_speed_pane_t1

0xdc98,	// (0x0004c15c) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0004dfc8) blid2_speed_pane_t

0xcc86,	// (0x0004b14a) blid2_navig_ring_pane_g1

0x8702,	// (0x00046bc6) blid2_navig_ring_pane_g2

0x870a,	// (0x00046bce) blid2_navig_ring_pane_g3

0x8712,	// (0x00046bd6) blid2_navig_ring_pane_g4

0x871a,	// (0x00046bde) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0004dfcd) blid2_navig_ring_pane_g

0xa160,	// (0x00048624) bg_popup_window_pane_cp011

0xdca6,	// (0x0004c16a) popup_blid2_search_window_g1

0xdcae,	// (0x0004c172) popup_blid2_search_window_t1

0xdcbc,	// (0x0004c180) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0004dfd8) popup_blid2_search_window_t

0xac1c,	// (0x000490e0) main_browser_pane_g1

0xa8ec,	// (0x00048db0) main_browser_pane_ParamLimits

0xa9f9,	// (0x00048ebd) bg_button_pane_cp011_ParamLimits

0x78ff,	// (0x00045dc3) cell_vitu2_function_pane_g1_ParamLimits

0xc835,	// (0x0004acf9) bg_popup_sub_pane_cp22_ParamLimits

0x1024,	// (0x0003f4e8) input_focus_pane_cp08_ParamLimits

0x8183,	// (0x00046647) popup_vitu2_query_button_pane_ParamLimits

0x8183,	// (0x00046647) popup_vitu2_query_button_pane

0x103b,	// (0x0003f4ff) popup_vitu2_query_input_button_pane

0xd964,	// (0x0004be28) popup_vitu2_query_window_g1_ParamLimits

0x1045,	// (0x0003f509) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004dee0) popup_vitu2_query_window_g_ParamLimits

0xa160,	// (0x00048624) bg_button_pane_cp026

0x8722,	// (0x00046be6) popup_vitu2_query_input_button_pane_g1

0xa160,	// (0x00048624) bg_button_pane_cp025

0xdce0,	// (0x0004c1a4) popup_vitu2_query_button_pane_t1

0x605b,	// (0x0004451f) main_mp3_pane_t6

0x606b,	// (0x0004452f) popup_slider_window_cp01

0x7568,	// (0x00045a2c) cam4_battery_pane

0x7646,	// (0x00045b0a) cam4_battery_pane_cp02

0x8494,	// (0x00046958) cam4_battery_pane_cp01

0x8494,	// (0x00046958) cam4_battery_pane_cp03

0xcc86,	// (0x0004b14a) cam4_battery_pane_g1

0xdcca,	// (0x0004c18e) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0004dfdd) cam4_battery_pane_g

0xcb4c,	// (0x0004b010) popup_blid_sat_info2_window_t11

0x47ae,	// (0x00042c72) aid_size_touch_mv_arrow_left_ParamLimits

0x47d9,	// (0x00042c9d) aid_size_touch_mv_arrow_right_ParamLimits

0xb368,	// (0x0004982c) navi_pane_g1_ParamLimits

0x4818,	// (0x00042cdc) navi_pane_g2_ParamLimits

0x4846,	// (0x00042d0a) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004d8a9) navi_pane_g_ParamLimits

0x48a0,	// (0x00042d64) navi_pane_mv_t1_ParamLimits

0x6aee,	// (0x00044fb2) grid_imed_effect_pane_ParamLimits

0x32c4,	// (0x00041788) aid_placing_vt_slider_lsc

0xab67,	// (0x0004902b) aid_placing_vt_slider_prt

0xa9f9,	// (0x00048ebd) bg_tb_trans_pane_cp01_ParamLimits

0xcdea,	// (0x0004b2ae) popup_image_details_window_g1_ParamLimits

0xcdfd,	// (0x0004b2c1) popup_image_details_window_g2_ParamLimits

0xce12,	// (0x0004b2d6) popup_image_details_window_g3_ParamLimits

0xce12,	// (0x0004b2d6) popup_image_details_window_g3

0xf718,	// (0x0004dbdc) popup_image_details_window_g_ParamLimits

0xce26,	// (0x0004b2ea) popup_image_details_window_t1_ParamLimits

0xce38,	// (0x0004b2fc) popup_image_details_window_t2_ParamLimits

0xce51,	// (0x0004b315) popup_image_details_window_t3_ParamLimits

0xce65,	// (0x0004b329) popup_image_details_window_t4_ParamLimits

0xce80,	// (0x0004b344) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004dbe3) popup_image_details_window_t_ParamLimits

0x83c0,	// (0x00046884) cl_header_name_pane_ParamLimits

0x83c0,	// (0x00046884) cl_header_name_pane

0x872a,	// (0x00046bee) cl_header_name_pane_t1_ParamLimits

0x872a,	// (0x00046bee) cl_header_name_pane_t1

0x8741,	// (0x00046c05) cl_header_name_pane_t2_ParamLimits

0x8741,	// (0x00046c05) cl_header_name_pane_t2

0x876b,	// (0x00046c2f) cl_header_name_pane_t3_ParamLimits

0x876b,	// (0x00046c2f) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0004dfe2) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0004dfe2) cl_header_name_pane_t

0x4871,	// (0x00042d35) navi_pane_mv_g2_ParamLimits

0xd6ac,	// (0x0004bb70) field_vitu2_entry_pane_g1_ParamLimits

0xd6b8,	// (0x0004bb7c) field_vitu2_entry_pane_g2_ParamLimits

0xd6c4,	// (0x0004bb88) field_vitu2_entry_pane_g3_ParamLimits

0xd6c4,	// (0x0004bb88) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004dddf) field_vitu2_entry_pane_g_ParamLimits

0x7893,	// (0x00045d57) cell_vitu2_itu_pane_g1_ParamLimits

0x78a5,	// (0x00045d69) cell_vitu2_itu_pane_g2_ParamLimits

0x78a5,	// (0x00045d69) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004ddeb) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004ddeb) cell_vitu2_itu_pane_g

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp05_ParamLimits

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp05

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp03

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp04

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp10_ParamLimits

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp10

0x11fa,	// (0x0003f6be) bg_vkb2_func_pane_cp08

0x836a,	// (0x0004682e) bg_vkb2_func_pane_cp06

0x8378,	// (0x0004683c) bg_vkb2_func_pane_cp07

0xdbe8,	// (0x0004c0ac) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe8,	// (0x0004c0ac) bg_vkb2_func_pane_cp11

0xdbfd,	// (0x0004c0c1) bg_vkb2_func_pane_cp12_ParamLimits

0xdbfd,	// (0x0004c0c1) bg_vkb2_func_pane_cp12

0xa160,	// (0x00048624) bg_vkb2_func_pane_cp09

0xd6e4,	// (0x0004bba8) bg_vkb2_func_pane_g1

0xad2d,	// (0x000491f1) bg_vkb2_func_pane_g2

0xd6ec,	// (0x0004bbb0) bg_vkb2_func_pane_g3

0xd6f4,	// (0x0004bbb8) bg_vkb2_func_pane_g4

0xd929,	// (0x0004bded) bg_vkb2_func_pane_g5

0xd70c,	// (0x0004bbd0) bg_vkb2_func_pane_g6

0xd714,	// (0x0004bbd8) bg_vkb2_func_pane_g7

0xd704,	// (0x0004bbc8) bg_vkb2_func_pane_g8

0xad0d,	// (0x000491d1) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0004dfe9) bg_vkb2_func_pane_g

0x8677,	// (0x00046b3b) blid2_tripm_pane_g6_ParamLimits

0x8677,	// (0x00046b3b) blid2_tripm_pane_g6

0xd53e,	// (0x0004ba02) mp4_progress_pane_g1

0x86cf,	// (0x00046b93) blid2_tripm_values_pane_ParamLimits

0x86cf,	// (0x00046b93) blid2_tripm_values_pane

0x8790,	// (0x00046c54) blid2_tripm_values_pane_t1

0x879e,	// (0x00046c62) blid2_tripm_values_pane_t2

0x87ac,	// (0x00046c70) blid2_tripm_values_pane_t3

0x87ba,	// (0x00046c7e) blid2_tripm_values_pane_t4

0x87c8,	// (0x00046c8c) blid2_tripm_values_pane_t5

0x87d6,	// (0x00046c9a) blid2_tripm_values_pane_t6

0x87e4,	// (0x00046ca8) blid2_tripm_values_pane_t7

0x87f2,	// (0x00046cb6) blid2_tripm_values_pane_t8

0x8800,	// (0x00046cc4) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0004dffc) blid2_tripm_values_pane_t

0x3302,	// (0x000417c6) call_video_pane_t1_ParamLimits

0x331f,	// (0x000417e3) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004d732) call_video_pane_t_ParamLimits

0x0d92,	// (0x0003f256) msg_header_pane_g1_ParamLimits

0xb57d,	// (0x00049a41) msg_header_pane_g2_ParamLimits

0xb57d,	// (0x00049a41) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004d94c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004d94c) msg_header_pane_g

0xa8ec,	// (0x00048db0) main_clock2_pane_ParamLimits

0x687d,	// (0x00044d41) grid_clock2_toolbar_pane_ParamLimits

0x687d,	// (0x00044d41) grid_clock2_toolbar_pane

0x687d,	// (0x00044d41) listscroll_clock2_pane_ParamLimits

0x687d,	// (0x00044d41) listscroll_clock2_pane

0x6925,	// (0x00044de9) main_clock2_pane_t3_ParamLimits

0x6925,	// (0x00044de9) main_clock2_pane_t3

0x6937,	// (0x00044dfb) main_clock2_pane_t4_ParamLimits

0x6937,	// (0x00044dfb) main_clock2_pane_t4

0xdcee,	// (0x0004c1b2) cell_clock2_toolbar_pane

0xdcf6,	// (0x0004c1ba) cell_clock2_toolbar_pane_cp01

0xdcf6,	// (0x0004c1ba) cell_clock2_toolbar_pane_cp02

0xdcfe,	// (0x0004c1c2) cell_clock2_toolbar_pane_cp03

0xdd06,	// (0x0004c1ca) list_clock2_pane

0xb2c0,	// (0x00049784) scroll_pane_cp10

0xdd0e,	// (0x0004c1d2) list_single_clock2_pane_ParamLimits

0xdd0e,	// (0x0004c1d2) list_single_clock2_pane

0xaad0,	// (0x00048f94) list_highlight_pane_cp08

0xdd1b,	// (0x0004c1df) list_single_clock2_pane_t1

0xdd29,	// (0x0004c1ed) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0004e00f) list_single_clock2_pane_t

0xa160,	// (0x00048624) bg_button_pane_cp10

0xdd37,	// (0x0004c1fb) cell_clock2_toolbar_pane_g1

0x4e1c,	// (0x000432e0) aid_main_viewer_pane_g1_ParamLimits

0x4e1c,	// (0x000432e0) aid_main_viewer_pane_g1

0x4e28,	// (0x000432ec) aid_main_viewer_pane_g2_ParamLimits

0x4e28,	// (0x000432ec) aid_main_viewer_pane_g2

0x4e34,	// (0x000432f8) aid_main_viewer_pane_g3_ParamLimits

0x4e34,	// (0x000432f8) aid_main_viewer_pane_g3

0x4e45,	// (0x00043309) aid_main_viewer_pane_g4_ParamLimits

0x4e45,	// (0x00043309) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004d95d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004d95d) aid_main_viewer_pane_g

0x55cf,	// (0x00043a93) main_calc_pane_ParamLimits

0x55dc,	// (0x00043aa0) main_dialer2_pane_ParamLimits

0xa160,	// (0x00048624) main_cam6_pane

0xa160,	// (0x00048624) main_vid6_pane

0x6889,	// (0x00044d4d) listscroll_gen_pane_cp06_ParamLimits

0x6889,	// (0x00044d4d) listscroll_gen_pane_cp06

0x6949,	// (0x00044e0d) main_clock2_pane_t5_ParamLimits

0x6949,	// (0x00044e0d) main_clock2_pane_t5

0x6998,	// (0x00044e5c) aid_call2_pane_cp10_ParamLimits

0x69aa,	// (0x00044e6e) aid_call_pane_cp10_ParamLimits

0xb33d,	// (0x00049801) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb33d,	// (0x00049801) popup_clock_analogue_window_cp10_g2_ParamLimits

0x69bc,	// (0x00044e80) popup_clock_analogue_window_cp10_g3_ParamLimits

0x69bc,	// (0x00044e80) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb33d,	// (0x00049801) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004dc98) popup_clock_analogue_window_cp10_g_ParamLimits

0x69ce,	// (0x00044e92) popup_clock_analogue_window_cp10_t1_ParamLimits

0x71a1,	// (0x00045665) cell_dialer2_keypad_pane_g2_ParamLimits

0x71a1,	// (0x00045665) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004dd7e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004dd7e) cell_dialer2_keypad_pane_g

0x71bd,	// (0x00045681) cell_dialer2_keypad_pane_t1

0x7bda,	// (0x0004609e) main_cset_text2_pane_ParamLimits

0x7bda,	// (0x0004609e) main_cset_text2_pane

0xdb50,	// (0x0004c014) area_vitu2_query_pane_g1_ParamLimits

0x1125,	// (0x0003f5e9) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004df33) area_vitu2_query_pane_g_ParamLimits

0x11d6,	// (0x0003f69a) area_vitu2_query_pane_t7_ParamLimits

0x11d6,	// (0x0003f69a) area_vitu2_query_pane_t7

0x836a,	// (0x0004682e) bg_button_pane_cp018_ParamLimits

0x8378,	// (0x0004683c) bg_button_pane_cp021_ParamLimits

0x11fa,	// (0x0003f6be) bg_button_pane_cp022_ParamLimits

0x11fa,	// (0x0003f6be) bg_vkb2_func_pane_cp08_ParamLimits

0x836a,	// (0x0004682e) bg_vkb2_func_pane_cp06_ParamLimits

0x8378,	// (0x0004683c) bg_vkb2_func_pane_cp07_ParamLimits

0x120b,	// (0x0003f6cf) input_focus_pane_cp09_ParamLimits

0x880e,	// (0x00046cd2) cam6_autofocus_pane_ParamLimits

0x880e,	// (0x00046cd2) cam6_autofocus_pane

0x8830,	// (0x00046cf4) cam6_image_uncrop_pane_ParamLimits

0x8830,	// (0x00046cf4) cam6_image_uncrop_pane

0x885d,	// (0x00046d21) cam6_indi_pane_ParamLimits

0x885d,	// (0x00046d21) cam6_indi_pane

0x8877,	// (0x00046d3b) cam6_mode_pane_ParamLimits

0x8877,	// (0x00046d3b) cam6_mode_pane

0x888b,	// (0x00046d4f) cam6_timer_pane_ParamLimits

0x888b,	// (0x00046d4f) cam6_timer_pane

0x8897,	// (0x00046d5b) cam6_zoom_pane_ParamLimits

0x8897,	// (0x00046d5b) cam6_zoom_pane

0x88b3,	// (0x00046d77) cam6_mode_pane_g1_ParamLimits

0x88b3,	// (0x00046d77) cam6_mode_pane_g1

0x88bf,	// (0x00046d83) cam6_mode_pane_g2_ParamLimits

0x88bf,	// (0x00046d83) cam6_mode_pane_g2

0x88cb,	// (0x00046d8f) cam6_mode_pane_g3_ParamLimits

0x88cb,	// (0x00046d8f) cam6_mode_pane_g3

0x88d7,	// (0x00046d9b) cam6_mode_pane_g4_ParamLimits

0x88d7,	// (0x00046d9b) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0004e014) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0004e014) cam6_mode_pane_g

0xd5ba,	// (0x0004ba7e) bg_tb_trans_pane_cp08_ParamLimits

0xd5ba,	// (0x0004ba7e) bg_tb_trans_pane_cp08

0xdd3f,	// (0x0004c203) cam6_battery_pane_ParamLimits

0xdd3f,	// (0x0004c203) cam6_battery_pane

0xdd55,	// (0x0004c219) cam6_indi_pane_g1_ParamLimits

0xdd55,	// (0x0004c219) cam6_indi_pane_g1

0xdd67,	// (0x0004c22b) cam6_indi_pane_g2_ParamLimits

0xdd67,	// (0x0004c22b) cam6_indi_pane_g2

0xdd79,	// (0x0004c23d) cam6_indi_pane_g3_ParamLimits

0xdd79,	// (0x0004c23d) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0004e01d) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0004e01d) cam6_indi_pane_g

0xdd8b,	// (0x0004c24f) cam6_indi_pane_t1_ParamLimits

0xdd8b,	// (0x0004c24f) cam6_indi_pane_t1

0x76c2,	// (0x00045b86) cam6_autofocus_pane_g1

0x76ca,	// (0x00045b8e) cam6_autofocus_pane_g2

0x76d2,	// (0x00045b96) cam6_autofocus_pane_g3

0x76da,	// (0x00045b9e) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0004e024) cam6_autofocus_pane_g

0xddb1,	// (0x0004c275) cam6_timer_pane_g1

0xddb9,	// (0x0004c27d) cam6_timer_pane_t1

0xddc7,	// (0x0004c28b) cam6_zoom_cont_pane

0xddcf,	// (0x0004c293) cam6_zoom_pane_g1

0xddd7,	// (0x0004c29b) cam6_zoom_pane_g2

0x88e3,	// (0x00046da7) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0004e02d) cam6_zoom_pane_g

0xcc86,	// (0x0004b14a) cam6_battery_pane_g1

0xcc86,	// (0x0004b14a) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004dba0) cam6_battery_pane_g

0xdddf,	// (0x0004c2a3) cam6_zoom_cont_pane_g1

0xdde8,	// (0x0004c2ac) cam6_zoom_cont_pane_g2

0xddf1,	// (0x0004c2b5) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0004e034) cam6_zoom_cont_pane_g

0x8900,	// (0x00046dc4) cam6_mode_pane_cp_ParamLimits

0x8900,	// (0x00046dc4) cam6_mode_pane_cp

0x8897,	// (0x00046d5b) cam6_zoom_pane_cp_ParamLimits

0x8897,	// (0x00046d5b) cam6_zoom_pane_cp

0x8914,	// (0x00046dd8) vid6_image_uncrop_cif_pane_ParamLimits

0x8914,	// (0x00046dd8) vid6_image_uncrop_cif_pane

0x8940,	// (0x00046e04) vid6_image_uncrop_nhd_pane_ParamLimits

0x8940,	// (0x00046e04) vid6_image_uncrop_nhd_pane

0x8830,	// (0x00046cf4) vid6_image_uncrop_vga_pane_ParamLimits

0x8830,	// (0x00046cf4) vid6_image_uncrop_vga_pane

0x895f,	// (0x00046e23) vid6_image_uncrop_wvga_pane_ParamLimits

0x895f,	// (0x00046e23) vid6_image_uncrop_wvga_pane

0x897e,	// (0x00046e42) vid6_indi_pane_ParamLimits

0x897e,	// (0x00046e42) vid6_indi_pane

0xd5ba,	// (0x0004ba7e) bg_tb_trans_pane_cp09_ParamLimits

0xd5ba,	// (0x0004ba7e) bg_tb_trans_pane_cp09

0xde09,	// (0x0004c2cd) cam6_battery_pane_cp_ParamLimits

0xde09,	// (0x0004c2cd) cam6_battery_pane_cp

0xde15,	// (0x0004c2d9) vid6_indi_pane_g1_ParamLimits

0xde15,	// (0x0004c2d9) vid6_indi_pane_g1

0xde27,	// (0x0004c2eb) vid6_indi_pane_g2_ParamLimits

0xde27,	// (0x0004c2eb) vid6_indi_pane_g2

0xde39,	// (0x0004c2fd) vid6_indi_pane_g3_ParamLimits

0xde39,	// (0x0004c2fd) vid6_indi_pane_g3

0xde50,	// (0x0004c314) vid6_indi_pane_g4_ParamLimits

0xde50,	// (0x0004c314) vid6_indi_pane_g4

0xde67,	// (0x0004c32b) vid6_indi_pane_g5_ParamLimits

0xde67,	// (0x0004c32b) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0004e03b) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0004e03b) vid6_indi_pane_g

0xde81,	// (0x0004c345) vid6_indi_pane_t1_ParamLimits

0xde81,	// (0x0004c345) vid6_indi_pane_t1

0xde97,	// (0x0004c35b) vid6_indi_pane_t2_ParamLimits

0xde97,	// (0x0004c35b) vid6_indi_pane_t2

0xdebf,	// (0x0004c383) vid6_indi_pane_t3_ParamLimits

0xdebf,	// (0x0004c383) vid6_indi_pane_t3

0xdee7,	// (0x0004c3ab) vid6_indi_pane_t4_ParamLimits

0xdee7,	// (0x0004c3ab) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0004e046) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0004e046) vid6_indi_pane_t

0xdf0b,	// (0x0004c3cf) wait_bar_pane_cp08

0x89a3,	// (0x00046e67) main_cset_text2_pane_t1_ParamLimits

0x89a3,	// (0x00046e67) main_cset_text2_pane_t1

0x88eb,	// (0x00046daf) listscroll_gen_pane_cp06_t1_ParamLimits

0x88eb,	// (0x00046daf) listscroll_gen_pane_cp06_t1

0xa160,	// (0x00048624) main_cam6_set_pane

0xceca,	// (0x0004b38e) bg_tb_trans_pane_cp06_ParamLimits

0x7570,	// (0x00045a34) cam4_indicators_pane_g1_ParamLimits

0x7581,	// (0x00045a45) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004ddbb) cam4_indicators_pane_g_ParamLimits

0x7599,	// (0x00045a5d) cam4_indicators_pane_t1_ParamLimits

0xa9f9,	// (0x00048ebd) bg_tb_trans_pane_cp07_ParamLimits

0x7650,	// (0x00045b14) vid4_indicators_pane_g1_ParamLimits

0x7666,	// (0x00045b2a) vid4_indicators_pane_g2_ParamLimits

0x767a,	// (0x00045b3e) vid4_indicators_pane_g3_ParamLimits

0x768d,	// (0x00045b51) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004ddcd) vid4_indicators_pane_g_ParamLimits

0x76ab,	// (0x00045b6f) vid4_indicators_pane_t1_ParamLimits

0x849c,	// (0x00046960) vid4_progress_pane_g1_ParamLimits

0x84ae,	// (0x00046972) vid4_progress_pane_g2_ParamLimits

0x4ea2,	// (0x00043366) vid4_progress_pane_g3_ParamLimits

0x84c0,	// (0x00046984) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004df7e) vid4_progress_pane_g_ParamLimits

0x84de,	// (0x000469a2) vid4_progress_pane_t1_ParamLimits

0x84f3,	// (0x000469b7) vid4_progress_pane_t2_ParamLimits

0x8509,	// (0x000469cd) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004df89) vid4_progress_pane_t_ParamLimits

0x851e,	// (0x000469e2) wait_bar_pane_cp07_ParamLimits

0x89ca,	// (0x00046e8e) main_cam6_set_pane_g2_ParamLimits

0x89ca,	// (0x00046e8e) main_cam6_set_pane_g2

0x89d6,	// (0x00046e9a) main_cset6_listscroll_pane_ParamLimits

0x89d6,	// (0x00046e9a) main_cset6_listscroll_pane

0x8a03,	// (0x00046ec7) main_cset6_slider_pane_ParamLimits

0x8a03,	// (0x00046ec7) main_cset6_slider_pane

0x8a0f,	// (0x00046ed3) main_cset6_text2_pane_ParamLimits

0x8a0f,	// (0x00046ed3) main_cset6_text2_pane

0xdf1a,	// (0x0004c3de) main_cset6_text_pane

0xdf22,	// (0x0004c3e6) main_cset_list_pane_copy1_ParamLimits

0xdf22,	// (0x0004c3e6) main_cset_list_pane_copy1

0xdf32,	// (0x0004c3f6) scroll_pane_cp028_copy1

0x8a22,	// (0x00046ee6) cset_list_set_pane_copy1

0x8a32,	// (0x00046ef6) aid_position_infowindow_above_copy1

0x8a3a,	// (0x00046efe) aid_position_infowindow_below_copy1

0x126d,	// (0x0003f731) cset_list_set_pane_g1_copy1

0x1275,	// (0x0003f739) cset_list_set_pane_g3_copy1_ParamLimits

0x1275,	// (0x0003f739) cset_list_set_pane_g3_copy1

0x1284,	// (0x0003f748) cset_list_set_pane_t1_copy1_ParamLimits

0x1284,	// (0x0003f748) cset_list_set_pane_t1_copy1

0xa9f9,	// (0x00048ebd) list_highlight_pane_cp021_copy1_ParamLimits

0xa9f9,	// (0x00048ebd) list_highlight_pane_cp021_copy1

0xdf3b,	// (0x0004c3ff) cset6_slider_pane_ParamLimits

0xdf3b,	// (0x0004c3ff) cset6_slider_pane

0xdf67,	// (0x0004c42b) main_cset6_slider_pane_g1_ParamLimits

0xdf67,	// (0x0004c42b) main_cset6_slider_pane_g1

0x8a42,	// (0x00046f06) main_cset6_slider_pane_g2_ParamLimits

0x8a42,	// (0x00046f06) main_cset6_slider_pane_g2

0xdf8f,	// (0x0004c453) main_cset6_slider_pane_g3_ParamLimits

0xdf8f,	// (0x0004c453) main_cset6_slider_pane_g3

0x8a6a,	// (0x00046f2e) main_cset6_slider_pane_g4_ParamLimits

0x8a6a,	// (0x00046f2e) main_cset6_slider_pane_g4

0x8a76,	// (0x00046f3a) main_cset6_slider_pane_g5_ParamLimits

0x8a76,	// (0x00046f3a) main_cset6_slider_pane_g5

0xd817,	// (0x0004bcdb) main_cset6_slider_pane_g7_ParamLimits

0xd817,	// (0x0004bcdb) main_cset6_slider_pane_g7

0xd823,	// (0x0004bce7) main_cset6_slider_pane_g8_ParamLimits

0xd823,	// (0x0004bce7) main_cset6_slider_pane_g8

0x8a82,	// (0x00046f46) main_cset6_slider_pane_g9_ParamLimits

0x8a82,	// (0x00046f46) main_cset6_slider_pane_g9

0x8a8e,	// (0x00046f52) main_cset6_slider_pane_g10_ParamLimits

0x8a8e,	// (0x00046f52) main_cset6_slider_pane_g10

0x8a9a,	// (0x00046f5e) main_cset6_slider_pane_g11_ParamLimits

0x8a9a,	// (0x00046f5e) main_cset6_slider_pane_g11

0x8aa6,	// (0x00046f6a) main_cset6_slider_pane_g12_ParamLimits

0x8aa6,	// (0x00046f6a) main_cset6_slider_pane_g12

0x8ab2,	// (0x00046f76) main_cset6_slider_pane_g13_ParamLimits

0x8ab2,	// (0x00046f76) main_cset6_slider_pane_g13

0x8abe,	// (0x00046f82) main_cset6_slider_pane_g14_ParamLimits

0x8abe,	// (0x00046f82) main_cset6_slider_pane_g14

0x8aca,	// (0x00046f8e) main_cset6_slider_pane_g15_ParamLimits

0x8aca,	// (0x00046f8e) main_cset6_slider_pane_g15

0x8ae2,	// (0x00046fa6) main_cset6_slider_pane_g16_ParamLimits

0x8ae2,	// (0x00046fa6) main_cset6_slider_pane_g16

0x8aee,	// (0x00046fb2) main_cset6_slider_pane_g17_ParamLimits

0x8aee,	// (0x00046fb2) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0004e04f) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0004e04f) main_cset6_slider_pane_g

0xdf9b,	// (0x0004c45f) main_cset6_slider_pane_t1_ParamLimits

0xdf9b,	// (0x0004c45f) main_cset6_slider_pane_t1

0x8b12,	// (0x00046fd6) main_cset6_slider_pane_t2_ParamLimits

0x8b12,	// (0x00046fd6) main_cset6_slider_pane_t2

0x8b3d,	// (0x00047001) main_cset6_slider_pane_t3_ParamLimits

0x8b3d,	// (0x00047001) main_cset6_slider_pane_t3

0x8b68,	// (0x0004702c) main_cset6_slider_pane_t4_ParamLimits

0x8b68,	// (0x0004702c) main_cset6_slider_pane_t4

0x8b93,	// (0x00047057) main_cset6_slider_pane_t5_ParamLimits

0x8b93,	// (0x00047057) main_cset6_slider_pane_t5

0xdfdc,	// (0x0004c4a0) main_cset6_slider_pane_t7_ParamLimits

0xdfdc,	// (0x0004c4a0) main_cset6_slider_pane_t7

0x8bbe,	// (0x00047082) main_cset6_slider_pane_t8_ParamLimits

0x8bbe,	// (0x00047082) main_cset6_slider_pane_t8

0x8be2,	// (0x000470a6) main_cset6_slider_pane_t9_ParamLimits

0x8be2,	// (0x000470a6) main_cset6_slider_pane_t9

0x8c06,	// (0x000470ca) main_cset6_slider_pane_t10_ParamLimits

0x8c06,	// (0x000470ca) main_cset6_slider_pane_t10

0x8c2a,	// (0x000470ee) main_cset6_slider_pane_t11_ParamLimits

0x8c2a,	// (0x000470ee) main_cset6_slider_pane_t11

0xe012,	// (0x0004c4d6) main_cset6_slider_pane_t14_ParamLimits

0xe012,	// (0x0004c4d6) main_cset6_slider_pane_t14

0xe04b,	// (0x0004c50f) main_cset6_slider_pane_t15_ParamLimits

0xe04b,	// (0x0004c50f) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0004e074) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0004e074) main_cset6_slider_pane_t

0xd8db,	// (0x0004bd9f) cset_slider_pane_g1_copy1

0xd8e4,	// (0x0004bda8) cset_slider_pane_g2_copy1

0xd8ed,	// (0x0004bdb1) cset_slider_pane_g3_copy1

0xa160,	// (0x00048624) bg_popup_sub_pane_cp011_copy1

0xe084,	// (0x0004c548) main_cset_text_pane_g1_copy1

0xd978,	// (0x0004be3c) main_cset_text_pane_t1_copy1

0xd986,	// (0x0004be4a) main_cset_text_pane_t2_copy1

0xd994,	// (0x0004be58) main_cset_text_pane_t3_copy1

0xd9a2,	// (0x0004be66) main_cset_text_pane_t4_copy1

0xd9b0,	// (0x0004be74) main_cset_text_pane_t5_copy1

0xe08c,	// (0x0004c550) main_cset_text_pane_t6_copy1

0xe09a,	// (0x0004c55e) main_cset_text_pane_t7_copy1

0x8c4e,	// (0x00047112) main_cset_text2_pane_t1_copy1

0xa9f9,	// (0x00048ebd) main_ncimui_pane

0x5621,	// (0x00043ae5) popup_query_ncimui_window_ParamLimits

0x5621,	// (0x00043ae5) popup_query_ncimui_window

0x0e43,	// (0x0003f307) field_cale_ev2_pane_g4_ParamLimits

0x0e43,	// (0x0003f307) field_cale_ev2_pane_g4

0x6eb7,	// (0x0004537b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6eb7,	// (0x0004537b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004dd59) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004dd59) cell_video_dialer_keypad_pane_g

0x6ecf,	// (0x00045393) cell_video_dialer_keypad_pane_t1

0xa160,	// (0x00048624) bg_popup_window_pane_cp012

0xb1ac,	// (0x00049670) heading_pane_cp06

0xe0c6,	// (0x0004c58a) ncim_query_content_pane

0xa160,	// (0x00048624) bg_popup_heading_pane_cp01

0xe0ce,	// (0x0004c592) ncim_heading_pane_t1

0xe0dc,	// (0x0004c5a0) ncim_indicator_popup_pane

0xe0ee,	// (0x0004c5b2) ncim_query_button_pane

0xe104,	// (0x0004c5c8) ncim_query_content_pane_t1

0xe116,	// (0x0004c5da) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0004e0b8) ncim_query_content_pane_t

0xe150,	// (0x0004c614) ncim_query_list_pane

0xe162,	// (0x0004c626) ncim_query_popup_pane

0xe0dc,	// (0x0004c5a0) ncim_indicator_popup_pane_ParamLimits

0x8daa,	// (0x0004726e) ncim_query_content_pane_g1_ParamLimits

0x8daa,	// (0x0004726e) ncim_query_content_pane_g1

0xe104,	// (0x0004c5c8) ncim_query_content_pane_t1_ParamLimits

0xe116,	// (0x0004c5da) ncim_query_content_pane_t2_ParamLimits

0x8db6,	// (0x0004727a) ncim_query_content_pane_t3_ParamLimits

0x8db6,	// (0x0004727a) ncim_query_content_pane_t3

0x8dd3,	// (0x00047297) ncim_query_content_pane_t4_ParamLimits

0x8dd3,	// (0x00047297) ncim_query_content_pane_t4

0x8df0,	// (0x000472b4) ncim_query_content_pane_t5_ParamLimits

0x8df0,	// (0x000472b4) ncim_query_content_pane_t5

0xe128,	// (0x0004c5ec) ncim_query_content_pane_t6_ParamLimits

0xe128,	// (0x0004c5ec) ncim_query_content_pane_t6

0xfbf4,	// (0x0004e0b8) ncim_query_content_pane_t_ParamLimits

0xe150,	// (0x0004c614) ncim_query_list_pane_ParamLimits

0xe162,	// (0x0004c626) ncim_query_popup_pane_ParamLimits

0xe176,	// (0x0004c63a) wait_bar_pane_cp04

0xa160,	// (0x00048624) input_focus_pane_cp011

0xe17e,	// (0x0004c642) ncim_query_popup_pane_t1

0xe18c,	// (0x0004c650) ncim_list_query_list_pane_ParamLimits

0xe18c,	// (0x0004c650) ncim_list_query_list_pane

0xa160,	// (0x00048624) bg_button_pane_cp027

0xe19f,	// (0x0004c663) ncim_query_button_pane_g1

0xa160,	// (0x00048624) list_highlight_pane_cp012

0xe1a9,	// (0x0004c66d) ncim_list_query_list_pane_g1

0xe1b1,	// (0x0004c675) ncim_list_query_list_pane_t1

0x758d,	// (0x00045a51) cam4_indicators_pane_g3_ParamLimits

0x758d,	// (0x00045a51) cam4_indicators_pane_g3

0x7699,	// (0x00045b5d) vid4_indicators_pane_g5_ParamLimits

0x7699,	// (0x00045b5d) vid4_indicators_pane_g5

0x84cf,	// (0x00046993) vid4_progress_pane_g5_ParamLimits

0x84cf,	// (0x00046993) vid4_progress_pane_g5

0x8c80,	// (0x00047144) main_ncimui_pane_g1

0x8cec,	// (0x000471b0) ncimui_group_query_pane_ParamLimits

0x8cec,	// (0x000471b0) ncimui_group_query_pane

0x8d46,	// (0x0004720a) ncimui_list_pane_ParamLimits

0x8d46,	// (0x0004720a) ncimui_list_pane

0x8d6d,	// (0x00047231) ncimui_text_pane_ParamLimits

0x8d6d,	// (0x00047231) ncimui_text_pane

0x8e0d,	// (0x000472d1) ncimui_text_pane_t1_ParamLimits

0x8e0d,	// (0x000472d1) ncimui_text_pane_t1

0xe1bf,	// (0x0004c683) ncimui_list_single_graphic_pane_ParamLimits

0xe1bf,	// (0x0004c683) ncimui_list_single_graphic_pane

0x8e2c,	// (0x000472f0) ncimui_query_pane_ParamLimits

0x8e2c,	// (0x000472f0) ncimui_query_pane

0xa160,	// (0x00048624) list_highlight_pane_cp013

0xe1cf,	// (0x0004c693) ncim_list_query_list_pane_t1_copy1

0xe1a9,	// (0x0004c66d) ncim_list_single_graphic_pane_g1

0xe1dd,	// (0x0004c6a1) ncim_query_button_pane_cp01

0xe1e9,	// (0x0004c6ad) ncim_query_entry_pane_ParamLimits

0xe1e9,	// (0x0004c6ad) ncim_query_entry_pane

0xe1fc,	// (0x0004c6c0) ncimui_query_pane_g1

0xe208,	// (0x0004c6cc) ncimui_query_pane_t1_ParamLimits

0xe208,	// (0x0004c6cc) ncimui_query_pane_t1

0xa9f9,	// (0x00048ebd) input_focus_pane_cp012

0xe221,	// (0x0004c6e5) ncim_query_entry_pane_t1

0xa8ec,	// (0x00048db0) main_im_pane_ParamLimits

0xa9f9,	// (0x00048ebd) main_mobtv_pane_ParamLimits

0xa9f9,	// (0x00048ebd) main_mobtv_pane

0x8afa,	// (0x00046fbe) main_cset6_slider_pane_g18_ParamLimits

0x8afa,	// (0x00046fbe) main_cset6_slider_pane_g18

0x8b06,	// (0x00046fca) main_cset6_slider_pane_g19_ParamLimits

0x8b06,	// (0x00046fca) main_cset6_slider_pane_g19

0xd6c4,	// (0x0004bb88) bg_main_mobtv_pane_ParamLimits

0xd6c4,	// (0x0004bb88) bg_main_mobtv_pane

0x8e3f,	// (0x00047303) main_mobtv_info_pane

0x8e4a,	// (0x0004730e) main_mobtv_loading_pane_ParamLimits

0x8e4a,	// (0x0004730e) main_mobtv_loading_pane

0xe233,	// (0x0004c6f7) main_mobtv_pg_channel_list_pane

0xe23d,	// (0x0004c701) main_mobtv_pg_hdr_pane

0x8e57,	// (0x0004731b) main_mobtv_programe_curr_pane_ParamLimits

0x8e57,	// (0x0004731b) main_mobtv_programe_curr_pane

0x8e64,	// (0x00047328) main_mobtv_programe_next_pane_ParamLimits

0x8e64,	// (0x00047328) main_mobtv_programe_next_pane

0xe246,	// (0x0004c70a) popup_mobtv_noti_window

0xcc86,	// (0x0004b14a) main_tv_pg_hdr_pane_g1

0xe250,	// (0x0004c714) main_tv_pg_hdr_pane_g2

0xe258,	// (0x0004c71c) main_tv_pg_hdr_pane_g3

0xe260,	// (0x0004c724) main_tv_pg_hdr_pane_g4

0xe268,	// (0x0004c72c) main_tv_pg_hdr_pane_g5

0xe272,	// (0x0004c736) main_tv_pg_hdr_pane_g6

0xe27c,	// (0x0004c740) main_tv_pg_hdr_pane_g7

0xe286,	// (0x0004c74a) main_tv_pg_hdr_pane_g8

0xe290,	// (0x0004c754) main_tv_pg_hdr_pane_g9

0xe29a,	// (0x0004c75e) main_tv_pg_hdr_pane_g10

0xe2a4,	// (0x0004c768) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0004e0c5) main_tv_pg_hdr_pane_g

0xe2ae,	// (0x0004c772) main_tv_pg_hdr_pane_t1

0xe2bc,	// (0x0004c780) main_tv_pg_hdr_pane_t2

0xe2ca,	// (0x0004c78e) main_tv_pg_hdr_pane_t3

0xe2da,	// (0x0004c79e) main_tv_pg_hdr_pane_t4

0xe2ea,	// (0x0004c7ae) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0004e0dc) main_tv_pg_hdr_pane_t

0xe2fa,	// (0x0004c7be) single_mobtv_pg_channel_pane_ParamLimits

0xe2fa,	// (0x0004c7be) single_mobtv_pg_channel_pane

0xe30c,	// (0x0004c7d0) single_mobtv_pg_channel_table_pane

0xe315,	// (0x0004c7d9) single_mobtv_pg_channel_thumb_pane

0xe31e,	// (0x0004c7e2) single_tv_pg_channel_pane_g1

0xe327,	// (0x0004c7eb) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0004e0e7) single_tv_pg_channel_pane_g

0xceca,	// (0x0004b38e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceca,	// (0x0004b38e) bg_single_mobtv_pg_channel_thumb_pane

0xe330,	// (0x0004c7f4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe330,	// (0x0004c7f4) single_mobtv_pg_channel_thumb_pane_g1

0xe33e,	// (0x0004c802) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe33e,	// (0x0004c802) single_mobtv_pg_channel_thumb_pane_g2

0xe34a,	// (0x0004c80e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34a,	// (0x0004c80e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0004e0ec) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0004e0ec) single_mobtv_pg_channel_thumb_pane_g

0xe356,	// (0x0004c81a) single_mobtv_pg_channel_thumb_pane_t1

0xe364,	// (0x0004c828) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0004e0f3) single_mobtv_pg_channel_thumb_pane_t

0xcc86,	// (0x0004b14a) bg_single_mobtv_pg_channel_table_pane_g1

0xcc86,	// (0x0004b14a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004dba0) bg_single_mobtv_pg_channel_table_pane_g

0xe372,	// (0x0004c836) single_mobtv_pg_channel_table_pane_t1

0xe380,	// (0x0004c844) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0004e0f8) single_mobtv_pg_channel_table_pane_t

0x8e79,	// (0x0004733d) main_mobtv_info_pane_g1_ParamLimits

0x8e79,	// (0x0004733d) main_mobtv_info_pane_g1

0x8e95,	// (0x00047359) main_mobtv_info_pane_t1_ParamLimits

0x8e95,	// (0x00047359) main_mobtv_info_pane_t1

0x8f0d,	// (0x000473d1) main_mobtv_info_pane_t2_ParamLimits

0x8f0d,	// (0x000473d1) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0004e102) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0004e102) main_mobtv_info_pane_t

0x8f9e,	// (0x00047462) wait_bar_pane_cp05

0x8fb0,	// (0x00047474) main_mobtv_loading_pane_g1_ParamLimits

0x8fb0,	// (0x00047474) main_mobtv_loading_pane_g1

0x8fbc,	// (0x00047480) main_mobtv_loading_pane_g2_ParamLimits

0x8fbc,	// (0x00047480) main_mobtv_loading_pane_g2

0x8fc8,	// (0x0004748c) main_mobtv_loading_pane_g3_ParamLimits

0x8fc8,	// (0x0004748c) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0004e109) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0004e109) main_mobtv_loading_pane_g

0xe38e,	// (0x0004c852) main_mobtv_loading_pane_t1_ParamLimits

0xe38e,	// (0x0004c852) main_mobtv_loading_pane_t1

0xe3a6,	// (0x0004c86a) main_mobtv_loading_pane_t2_ParamLimits

0xe3a6,	// (0x0004c86a) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0004e110) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0004e110) main_mobtv_loading_pane_t

0x8fd6,	// (0x0004749a) wait_bar_pane_cp06_ParamLimits

0x8fd6,	// (0x0004749a) wait_bar_pane_cp06

0xe3ca,	// (0x0004c88e) main_mobtv_programe_curr_pane_t1

0xe3d8,	// (0x0004c89c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0004e115) main_mobtv_programe_curr_pane_t

0xe3e6,	// (0x0004c8aa) main_mobtv_programe_next_pane_t1

0xe3f4,	// (0x0004c8b8) main_mobtv_programe_next_pane_t2

0xe402,	// (0x0004c8c6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0004e11a) main_mobtv_programe_next_pane_t

0xa160,	// (0x00048624) bg_popup_mobtv_noti_window_pane

0xe410,	// (0x0004c8d4) popup_mobtv_noti_window_g1

0xe418,	// (0x0004c8dc) popup_mobtv_noti_window_t1

0xe426,	// (0x0004c8ea) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0004e121) popup_mobtv_noti_window_t

0xcc86,	// (0x0004b14a) bg_popup_mobtv_noti_window_pane_g1

0xa160,	// (0x00048624) sc_clock_pane

0xa160,	// (0x00048624) main_fs_bigclock_pane

0x86bd,	// (0x00046b81) blid2_tripm_pane_t4_ParamLimits

0x86bd,	// (0x00046b81) blid2_tripm_pane_t4

0x8fe2,	// (0x000474a6) sc_clock_pane_g1_ParamLimits

0x8fe2,	// (0x000474a6) sc_clock_pane_g1

0x8ff0,	// (0x000474b4) sc_clock_pane_t1_ParamLimits

0x8ff0,	// (0x000474b4) sc_clock_pane_t1

0x9005,	// (0x000474c9) sc_clock_pane_t2_ParamLimits

0x9005,	// (0x000474c9) sc_clock_pane_t2

0x9017,	// (0x000474db) sc_clock_pane_t3_ParamLimits

0x9017,	// (0x000474db) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0004e126) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0004e126) sc_clock_pane_t

0x9872,	// (0x00047d36) main_fs_bigclock_indicator_pane_ParamLimits

0x9872,	// (0x00047d36) main_fs_bigclock_indicator_pane

0x90aa,	// (0x0004756e) main_fs_bigclock_pane_g1_ParamLimits

0x90aa,	// (0x0004756e) main_fs_bigclock_pane_g1

0x987e,	// (0x00047d42) main_fs_bigclock_pane_t1_ParamLimits

0x987e,	// (0x00047d42) main_fs_bigclock_pane_t1

0x9890,	// (0x00047d54) main_fs_bigclock_pane_t2_ParamLimits

0x9890,	// (0x00047d54) main_fs_bigclock_pane_t2

0x98a4,	// (0x00047d68) main_fs_bigclock_pane_t3_ParamLimits

0x98a4,	// (0x00047d68) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004e330) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004e330) main_fs_bigclock_pane_t

0xec63,	// (0x0004d127) main_fs_bigclock_indicator_pane_g1

0xe0f6,	// (0x0004c5ba) ncim_query_content_pane_g2_ParamLimits

0xe0f6,	// (0x0004c5ba) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0004e0b3) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0004e0b3) ncim_query_content_pane_g

0x9029,	// (0x000474ed) sc_clock_pane_t4_ParamLimits

0x9029,	// (0x000474ed) sc_clock_pane_t4

0xa9f9,	// (0x00048ebd) main_radioblah_pane

0xd631,	// (0x0004baf5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd631,	// (0x0004baf5) cell_call4_button_pane_t1_copy1

0x8c9c,	// (0x00047160) main_ncimui_pane_t1_ParamLimits

0x8c9c,	// (0x00047160) main_ncimui_pane_t1

0x8cb6,	// (0x0004717a) main_ncimui_pane_t2_ParamLimits

0x8cb6,	// (0x0004717a) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0004e0ac) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0004e0ac) main_ncimui_pane_t

0xe579,	// (0x0004ca3d) main_radioblah_anim_pane_ParamLimits

0xe579,	// (0x0004ca3d) main_radioblah_anim_pane

0xe58a,	// (0x0004ca4e) main_radioblah_info_pane_ParamLimits

0xe58a,	// (0x0004ca4e) main_radioblah_info_pane

0xe59e,	// (0x0004ca62) main_radioblah_pane_t1_ParamLimits

0xe59e,	// (0x0004ca62) main_radioblah_pane_t1

0xe5ba,	// (0x0004ca7e) main_radioblah_pane_t2_ParamLimits

0xe5ba,	// (0x0004ca7e) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0004e147) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0004e147) main_radioblah_pane_t

0x90fc,	// (0x000475c0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90fc,	// (0x000475c0) main_radioblah_rocker_ctrl_pane

0xe602,	// (0x0004cac6) main_radioblah_info_pane_t1_ParamLimits

0xe602,	// (0x0004cac6) main_radioblah_info_pane_t1

0x9145,	// (0x00047609) main_radioblah_info_pane_t2_ParamLimits

0x9145,	// (0x00047609) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0004e150) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0004e150) main_radioblah_info_pane_t

0xcc86,	// (0x0004b14a) main_radioblah_rocker_ctrl_pane_g1

0x91f5,	// (0x000476b9) main_radioblah_rocker_ctrl_pane_g2

0x91fd,	// (0x000476c1) main_radioblah_rocker_ctrl_pane_g3

0x9205,	// (0x000476c9) main_radioblah_rocker_ctrl_pane_g4

0x920d,	// (0x000476d1) main_radioblah_rocker_ctrl_pane_g5

0x9215,	// (0x000476d9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0004e159) main_radioblah_rocker_ctrl_pane_g

0x8c4e,	// (0x00047112) main_cset_text2_pane_t1_copy1_ParamLimits

0x74ba,	// (0x0004597e) cam4_image_uncrop_qvga_pane

0x75ff,	// (0x00045ac3) vid4_image_uncrop_qcif_pane

0x884f,	// (0x00046d13) cam6_image_uncrop_qvga_pane_ParamLimits

0x884f,	// (0x00046d13) cam6_image_uncrop_qvga_pane

0xddf9,	// (0x0004c2bd) vid6_image_uncrop_qcif_pane_ParamLimits

0xddf9,	// (0x0004c2bd) vid6_image_uncrop_qcif_pane

0xa160,	// (0x00048624) bg_popup_preview_window_pane_cp03

0xe0a8,	// (0x0004c56c) list_cset_text2_pane

0xe0b0,	// (0x0004c574) main_cset6_text2_pane_g1

0xe0b8,	// (0x0004c57c) main_cset6_text2_pane_t1

0x921d,	// (0x000476e1) list_cset_text2_pane_t1_ParamLimits

0x921d,	// (0x000476e1) list_cset_text2_pane_t1

0xa9f9,	// (0x00048ebd) main_radioblah_pane_ParamLimits

0x8f8a,	// (0x0004744e) main_mobtv_info_pane_t3_ParamLimits

0x8f8a,	// (0x0004744e) main_mobtv_info_pane_t3

0x90ea,	// (0x000475ae) main_radioblah_pane_g1

0x9115,	// (0x000475d9) main_radioblah_info_pane_g1

0x919a,	// (0x0004765e) main_radioblah_info_pane_t3_ParamLimits

0x919a,	// (0x0004765e) main_radioblah_info_pane_t3

0x42fe,	// (0x000427c2) highlight_cell_cale_month_pane_ParamLimits

0x42fe,	// (0x000427c2) highlight_cell_cale_month_pane

0xa160,	// (0x00048624) main_phob_fisheye_pane

0xcfa6,	// (0x0004b46a) scroll_pane_cp0031_ParamLimits

0xcfa6,	// (0x0004b46a) scroll_pane_cp0031

0xdf0b,	// (0x0004c3cf) wait_bar_pane_cp08_ParamLimits

0x8a22,	// (0x00046ee6) cset_list_set_pane_copy1_ParamLimits

0xe63c,	// (0x0004cb00) highlight_cell_cale_month_pane_g1

0x9234,	// (0x000476f8) highlight_cell_cale_month_pane_t1

0xdba4,	// (0x0004c068) list_gen_pane_cp01

0xd802,	// (0x0004bcc6) scroll_pane_01

0x1368,	// (0x0003f82c) list_single_double_fisheye_pane

0x1371,	// (0x0003f835) list_double_fisheye_pane_g1_ParamLimits

0x1371,	// (0x0003f835) list_double_fisheye_pane_g1

0x137d,	// (0x0003f841) list_double_fisheye_pane_g2_ParamLimits

0x137d,	// (0x0003f841) list_double_fisheye_pane_g2

0x1391,	// (0x0003f855) list_double_fisheye_pane_g3_ParamLimits

0x1391,	// (0x0003f855) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0004e166) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0004e166) list_double_fisheye_pane_g

0x13ba,	// (0x0003f87e) list_double_fisheye_pane_t1_ParamLimits

0x13ba,	// (0x0003f87e) list_double_fisheye_pane_t1

0x13d5,	// (0x0003f899) list_double_fisheye_pane_t2_ParamLimits

0x13d5,	// (0x0003f899) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0004e171) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0004e171) list_double_fisheye_pane_t

0xa160,	// (0x00048624) main_call5_pane

0x904f,	// (0x00047513) sc_swipe_pane_ParamLimits

0x904f,	// (0x00047513) sc_swipe_pane

0x924e,	// (0x00047712) call5_image_pane_ParamLimits

0x924e,	// (0x00047712) call5_image_pane

0x9260,	// (0x00047724) call5_swipe_1_pane_ParamLimits

0x9260,	// (0x00047724) call5_swipe_1_pane

0x926c,	// (0x00047730) call5_swipe_2_pane_ParamLimits

0x926c,	// (0x00047730) call5_swipe_2_pane

0x9288,	// (0x0004774c) popup_call5_audio_first_window_ParamLimits

0x9288,	// (0x0004774c) popup_call5_audio_first_window

0xceca,	// (0x0004b38e) call5_swipe_1_pane_g1_ParamLimits

0xceca,	// (0x0004b38e) call5_swipe_1_pane_g1

0xe644,	// (0x0004cb08) call5_swipe_1_pane_g2_ParamLimits

0xe644,	// (0x0004cb08) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0004e176) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0004e176) call5_swipe_1_pane_g

0xe650,	// (0x0004cb14) call5_swipe_1_pane_t1_ParamLimits

0xe650,	// (0x0004cb14) call5_swipe_1_pane_t1

0xceca,	// (0x0004b38e) call5_swipe_2_pane_g1_ParamLimits

0xceca,	// (0x0004b38e) call5_swipe_2_pane_g1

0xe665,	// (0x0004cb29) call5_swipe_2_pane_g2_ParamLimits

0xe665,	// (0x0004cb29) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0004e17b) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0004e17b) call5_swipe_2_pane_g

0xe671,	// (0x0004cb35) call5_swipe_2_pane_t1_ParamLimits

0xe671,	// (0x0004cb35) call5_swipe_2_pane_t1

0xe686,	// (0x0004cb4a) sc_swipe_pane_g1_ParamLimits

0xe686,	// (0x0004cb4a) sc_swipe_pane_g1

0xe693,	// (0x0004cb57) sc_swipe_pane_g2_ParamLimits

0xe693,	// (0x0004cb57) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0004e180) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0004e180) sc_swipe_pane_g

0xe69f,	// (0x0004cb63) sc_swipe_pane_t1_ParamLimits

0xe69f,	// (0x0004cb63) sc_swipe_pane_t1

0xa160,	// (0x00048624) main_cmail_launcher_pane

0x9298,	// (0x0004775c) aid_size_cell_cmail_l_ParamLimits

0x9298,	// (0x0004775c) aid_size_cell_cmail_l

0x92a8,	// (0x0004776c) grid_cmail_l_pane_ParamLimits

0x92a8,	// (0x0004776c) grid_cmail_l_pane

0x92b8,	// (0x0004777c) cell_cmail_l_pane_ParamLimits

0x92b8,	// (0x0004777c) cell_cmail_l_pane

0x92ce,	// (0x00047792) cell_cmail_l_pane_g1_ParamLimits

0x92ce,	// (0x00047792) cell_cmail_l_pane_g1

0x92da,	// (0x0004779e) cell_cmail_l_pane_t1_ParamLimits

0x92da,	// (0x0004779e) cell_cmail_l_pane_t1

0xe6b4,	// (0x0004cb78) cell_cmail_l_pane_t2_ParamLimits

0xe6b4,	// (0x0004cb78) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0004e185) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0004e185) cell_cmail_l_pane_t

0xa9f9,	// (0x00048ebd) grid_highlight_pane_cp018_ParamLimits

0xa9f9,	// (0x00048ebd) grid_highlight_pane_cp018

0x2008,	// (0x000404cc) main2_pane_ParamLimits

0x2008,	// (0x000404cc) main2_pane

0xa997,	// (0x00048e5b) popup_sp_fs_action_menu_bg_pane_g1

0xa99f,	// (0x00048e63) popup_sp_fs_action_menu_bg_pane_g2

0xa9a7,	// (0x00048e6b) popup_sp_fs_action_menu_bg_pane_g3

0xa9af,	// (0x00048e73) popup_sp_fs_action_menu_bg_pane_g4

0xa9b7,	// (0x00048e7b) popup_sp_fs_action_menu_bg_pane_g5

0xa9bf,	// (0x00048e83) popup_sp_fs_action_menu_bg_pane_g6

0xa9c7,	// (0x00048e8b) popup_sp_fs_action_menu_bg_pane_g7

0xa9cf,	// (0x00048e93) popup_sp_fs_action_menu_bg_pane_g8

0xa9d7,	// (0x00048e9b) popup_sp_fs_action_menu_bg_pane_g9

0xa9df,	// (0x00048ea3) popup_sp_fs_action_menu_bg_pane_g10

0xa9df,	// (0x00048ea3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004d64e) popup_sp_fs_action_menu_bg_pane_g

0x0b6c,	// (0x0003f030) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t3_g3_g1

0x0b78,	// (0x0003f03c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x2_t3_g3_g2

0x0b84,	// (0x0003f048) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004d6fc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004d6fc) list_medium_line_x2_t3_g3_g

0x0b90,	// (0x0003f054) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b90,	// (0x0003f054) list_medium_line_x2_t3_g3_t1

0x0ba5,	// (0x0003f069) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ba5,	// (0x0003f069) list_medium_line_x2_t3_g3_t2

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004d703) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004d703) list_medium_line_x2_t3_g3_t

0x0b6c,	// (0x0003f030) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t3_g2_g1

0x0b84,	// (0x0003f048) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004d70a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004d70a) list_medium_line_x2_t3_g2_g

0x0bce,	// (0x0003f092) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bce,	// (0x0003f092) list_medium_line_x2_t3_g2_t1

0x0be4,	// (0x0003f0a8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0be4,	// (0x0003f0a8) list_medium_line_x2_t3_g2_t2

0x0bf6,	// (0x0003f0ba) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bf6,	// (0x0003f0ba) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004d70f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004d70f) list_medium_line_x2_t3_g2_t

0x0b6c,	// (0x0003f030) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t4_g4_g1

0x0c14,	// (0x0003f0d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c14,	// (0x0003f0d8) list_medium_line_x2_t4_g4_g2

0x0b78,	// (0x0003f03c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x2_t4_g4_g3

0x0c20,	// (0x0003f0e4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c20,	// (0x0003f0e4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004d716) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004d716) list_medium_line_x2_t4_g4_g

0x0c2c,	// (0x0003f0f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c2c,	// (0x0003f0f0) list_medium_line_x2_t4_g4_t1

0x0c46,	// (0x0003f10a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c46,	// (0x0003f10a) list_medium_line_x2_t4_g4_t2

0x0c5c,	// (0x0003f120) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c5c,	// (0x0003f120) list_medium_line_x2_t4_g4_t3

0x0c71,	// (0x0003f135) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c71,	// (0x0003f135) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004d71f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004d71f) list_medium_line_x2_t4_g4_t

0x0b6c,	// (0x0003f030) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t2_g4_g1

0x0c14,	// (0x0003f0d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c14,	// (0x0003f0d8) list_medium_line_x2_t2_g4_g2

0x0b78,	// (0x0003f03c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x2_t2_g4_g3

0x0b84,	// (0x0003f048) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004d786) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004d786) list_medium_line_x2_t2_g4_g

0x0c83,	// (0x0003f147) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c83,	// (0x0003f147) list_medium_line_x2_t2_g4_t1

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004d78f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004d78f) list_medium_line_x2_t2_g4_t

0x0b6c,	// (0x0003f030) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t2_g3_g1

0x0b78,	// (0x0003f03c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x2_t2_g3_g2

0x0b84,	// (0x0003f048) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004d6fc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004d6fc) list_medium_line_x2_t2_g3_g

0x0c98,	// (0x0003f15c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c98,	// (0x0003f15c) list_medium_line_x2_t2_g3_t1

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004d794) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004d794) list_medium_line_x2_t2_g3_t

0x44a5,	// (0x00042969) main_sp_fs_list_pane_ParamLimits

0x44a5,	// (0x00042969) main_sp_fs_list_pane

0x44b1,	// (0x00042975) sp_fs_scroll_pane_ParamLimits

0x44b1,	// (0x00042975) sp_fs_scroll_pane

0x0cad,	// (0x0003f171) list_medium_line_x2_t3_t1

0x0cbd,	// (0x0003f181) list_medium_line_x2_t3_t2

0x0ccb,	// (0x0003f18f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004d7df) list_medium_line_x2_t3_t

0x0cd9,	// (0x0003f19d) list_medium_line_x3_t4_t1

0x0ce9,	// (0x0003f1ad) list_medium_line_x3_t4_t2

0x0cf7,	// (0x0003f1bb) list_medium_line_x3_t4_t3

0x0ccb,	// (0x0003f18f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004d7e6) list_medium_line_x3_t4_t

0x0d05,	// (0x0003f1c9) list_medium_line_x4_t5_t1

0x0d15,	// (0x0003f1d9) list_medium_line_x4_t5_t2

0x0cf7,	// (0x0003f1bb) list_medium_line_x4_t5_t3

0x0d23,	// (0x0003f1e7) list_medium_line_x4_t5_t4

0x0ccb,	// (0x0003f18f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004d7ef) list_medium_line_x4_t5_t

0x0b6c,	// (0x0003f030) list_medium_line_t4_g4_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_t4_g4_g1

0x0d31,	// (0x0003f1f5) list_medium_line_t4_g4_g2_ParamLimits

0x0d31,	// (0x0003f1f5) list_medium_line_t4_g4_g2

0x0d3d,	// (0x0003f201) list_medium_line_t4_g4_g3_ParamLimits

0x0d3d,	// (0x0003f201) list_medium_line_t4_g4_g3

0x0b84,	// (0x0003f048) list_medium_line_t4_g4_g4_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004d7fa) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004d7fa) list_medium_line_t4_g4_g

0x0d49,	// (0x0003f20d) list_medium_line_t4_g4_t1_ParamLimits

0x0d49,	// (0x0003f20d) list_medium_line_t4_g4_t1

0x0d5e,	// (0x0003f222) list_medium_line_t4_g4_t2_ParamLimits

0x0d5e,	// (0x0003f222) list_medium_line_t4_g4_t2

0x0d74,	// (0x0003f238) list_medium_line_t4_g4_t3_ParamLimits

0x0d74,	// (0x0003f238) list_medium_line_t4_g4_t3

0x0bb9,	// (0x0003f07d) list_medium_line_t4_g4_t4_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004d803) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004d803) list_medium_line_t4_g4_t

0x45d0,	// (0x00042a94) chi_dic_find_pane_g1

0x55ea,	// (0x00043aae) main_tport_pane

0x0fc0,	// (0x0003f484) list_medium_line_plain_t1

0x0fce,	// (0x0003f492) list_medium_line_t2_g2_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_t2_g2_g1

0x0fda,	// (0x0003f49e) list_medium_line_t2_g2_g2_ParamLimits

0x0fda,	// (0x0003f49e) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004dec4) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004dec4) list_medium_line_t2_g2_g

0x0fe6,	// (0x0003f4aa) list_medium_line_t2_g2_t1_ParamLimits

0x0fe6,	// (0x0003f4aa) list_medium_line_t2_g2_t1

0x0ffd,	// (0x0003f4c1) list_medium_line_t2_g2_t2_ParamLimits

0x0ffd,	// (0x0003f4c1) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004dec9) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004dec9) list_medium_line_t2_g2_t

0x121c,	// (0x0003f6e0) aid_sp_fs_list_icon_a_sm

0x1224,	// (0x0003f6e8) aid_sp_fs_list_icon_d

0x122c,	// (0x0003f6f0) aid_sp_fs_text_primary

0x1235,	// (0x0003f6f9) aid_sp_fs_text_secondary

0x123e,	// (0x0003f702) list_medium_line

0x123e,	// (0x0003f702) list_medium_line_g2

0x123e,	// (0x0003f702) list_medium_line_g3

0x123e,	// (0x0003f702) list_medium_line_plain

0x123e,	// (0x0003f702) list_medium_line_plain_t2

0x123e,	// (0x0003f702) list_medium_line_plain_t3

0x123e,	// (0x0003f702) list_medium_line_right_icon

0x123e,	// (0x0003f702) list_medium_line_right_iconx2

0x123e,	// (0x0003f702) list_medium_line_t2

0x123e,	// (0x0003f702) list_medium_line_t2_g2

0x123e,	// (0x0003f702) list_medium_line_t2_g3

0x123e,	// (0x0003f702) list_medium_line_t2_right_icon

0x123e,	// (0x0003f702) list_medium_line_t2_right_iconx2

0x123e,	// (0x0003f702) list_medium_line_t3

0x123e,	// (0x0003f702) list_medium_line_t3_g2

0x123e,	// (0x0003f702) list_medium_line_t3_g3

0x123e,	// (0x0003f702) list_medium_line_t3_right_iconx2

0x1247,	// (0x0003f70b) list_medium_line_t4_g4

0x8532,	// (0x000469f6) list_medium_line_x2

0x8532,	// (0x000469f6) list_medium_line_x2_t2_g2

0x8532,	// (0x000469f6) list_medium_line_x2_t2_g3

0x8532,	// (0x000469f6) list_medium_line_x2_t2_g4

0x8532,	// (0x000469f6) list_medium_line_x2_t3

0x8532,	// (0x000469f6) list_medium_line_x2_t3_g2

0x8532,	// (0x000469f6) list_medium_line_x2_t3_g3

0x8532,	// (0x000469f6) list_medium_line_x2_t3_g4

0x8532,	// (0x000469f6) list_medium_line_x2_t4_g2

0x8532,	// (0x000469f6) list_medium_line_x2_t4_g4

0x1250,	// (0x0003f714) list_medium_line_x3

0x1250,	// (0x0003f714) list_medium_line_x3_t4

0x1250,	// (0x0003f714) list_medium_line_x3_t4_g4

0x1247,	// (0x0003f70b) list_medium_line_x4_t4

0x1247,	// (0x0003f70b) list_medium_line_x4_t4_g7

0x1247,	// (0x0003f70b) list_medium_line_x4_t5

0x1259,	// (0x0003f71d) list_single_fs_dyc_pane_ParamLimits

0x1259,	// (0x0003f71d) list_single_fs_dyc_pane

0x0b6c,	// (0x0003f030) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x4_t4_g7_g1

0x1299,	// (0x0003f75d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1299,	// (0x0003f75d) list_medium_line_x4_t4_g7_g2

0x12a5,	// (0x0003f769) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12a5,	// (0x0003f769) list_medium_line_x4_t4_g7_g3

0x12b4,	// (0x0003f778) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12b4,	// (0x0003f778) list_medium_line_x4_t4_g7_g4

0x12c0,	// (0x0003f784) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12c0,	// (0x0003f784) list_medium_line_x4_t4_g7_g5

0x12cf,	// (0x0003f793) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12cf,	// (0x0003f793) list_medium_line_x4_t4_g7_g6

0x12de,	// (0x0003f7a2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12de,	// (0x0003f7a2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0004e08d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0004e08d) list_medium_line_x4_t4_g7_g

0x12ea,	// (0x0003f7ae) list_medium_line_x4_t4_g7_t1_ParamLimits

0x12ea,	// (0x0003f7ae) list_medium_line_x4_t4_g7_t1

0x12ff,	// (0x0003f7c3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x12ff,	// (0x0003f7c3) list_medium_line_x4_t4_g7_t2

0x1314,	// (0x0003f7d8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1314,	// (0x0003f7d8) list_medium_line_x4_t4_g7_t3

0x1329,	// (0x0003f7ed) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1329,	// (0x0003f7ed) list_medium_line_x4_t4_g7_t4

0x133b,	// (0x0003f7ff) list_medium_line_x4_t4_g7_t5_ParamLimits

0x133b,	// (0x0003f7ff) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0004e09c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0004e09c) list_medium_line_x4_t4_g7_t

0x134d,	// (0x0003f811) list_single_dyc_row_pane_ParamLimits

0x134d,	// (0x0003f811) list_single_dyc_row_pane

0x9242,	// (0x00047706) call5_gesture_pane_ParamLimits

0x9242,	// (0x00047706) call5_gesture_pane

0x9278,	// (0x0004773c) call5_windows_pane_ParamLimits

0x9278,	// (0x0004773c) call5_windows_pane

0x92f0,	// (0x000477b4) call5_swipe_1_pane_cp_ParamLimits

0x92f0,	// (0x000477b4) call5_swipe_1_pane_cp

0x92fc,	// (0x000477c0) call5_swipe_2_pane_cp_ParamLimits

0x92fc,	// (0x000477c0) call5_swipe_2_pane_cp

0xaad0,	// (0x00048f94) call5_image_pane_cp

0x9308,	// (0x000477cc) popup_call5_audio_first_window_cp_ParamLimits

0x9308,	// (0x000477cc) popup_call5_audio_first_window_cp

0xe686,	// (0x0004cb4a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe686,	// (0x0004cb4a) call5_swipe_1_pane_g1_cp

0xe6c6,	// (0x0004cb8a) call5_swipe_1_pane_g2_cp

0xe69f,	// (0x0004cb63) call5_swipe_1_pane_t1_cp_ParamLimits

0xe69f,	// (0x0004cb63) call5_swipe_1_pane_t1_cp

0xe686,	// (0x0004cb4a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe686,	// (0x0004cb4a) call5_swipe_2_pane_g1_cp

0xe6ce,	// (0x0004cb92) call5_swipe_2_pane_g2_cp

0xe6d6,	// (0x0004cb9a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6d6,	// (0x0004cb9a) call5_swipe_2_pane_t1_cp

0xa9f9,	// (0x00048ebd) main_sp_fs_email_pane

0xe6eb,	// (0x0004cbaf) main_sp_fs_listscroll_pane_te

0x13f7,	// (0x0003f8bb) popup_sp_fs_action_menu_pane_ParamLimits

0x13f7,	// (0x0003f8bb) popup_sp_fs_action_menu_pane

0xcc86,	// (0x0004b14a) bg_sp_fs_ctrlbar_pane_g1

0xd247,	// (0x0004b70b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd259,	// (0x0004b71d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd250,	// (0x0004b714) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc86,	// (0x0004b14a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0004e18a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca65,	// (0x0004af29) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca65,	// (0x0004af29) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f4,	// (0x0004cbb8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f4,	// (0x0004cbb8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe700,	// (0x0004cbc4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe700,	// (0x0004cbc4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0004e193) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0004e193) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe70c,	// (0x0004cbd0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe70c,	// (0x0004cbd0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x143d,	// (0x0003f901) list_medium_line_t2_right_icon_g1

0x1445,	// (0x0003f909) list_medium_line_t2_right_icon_t1

0x1455,	// (0x0003f919) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0004e198) list_medium_line_t2_right_icon_t

0xc835,	// (0x0004acf9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc835,	// (0x0004acf9) bg_sp_fs_ctrlbar_pane

0x936f,	// (0x00047833) main_sp_fs_ctrlbar_button_pane_cp01

0x9377,	// (0x0004783b) main_sp_fs_ctrlbar_ddmenu_pane

0xccc9,	// (0x0004b18d) main_sp_fs_ctrlbar_pane_g1

0xe75e,	// (0x0004cc22) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0004e19d) main_sp_fs_ctrlbar_pane_g

0xe76a,	// (0x0004cc2e) main_sp_fs_ctrlbar_pane_t1

0x1463,	// (0x0003f927) main_sp_fs_ctrlbar_pane

0x147d,	// (0x0003f941) main_sp_fs_listscroll_pane_te_cp01

0x148e,	// (0x0003f952) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x148e,	// (0x0003f952) popup_sp_fs_action_menu_pane_cp01

0xa9f9,	// (0x00048ebd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa9f9,	// (0x00048ebd) bg_sp_fs_highlight_list_pane_cp01

0x14b8,	// (0x0003f97c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x14b8,	// (0x0003f97c) sp_fs_action_menu_list_gene_pane_g1

0xe79a,	// (0x0004cc5e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe79a,	// (0x0004cc5e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0004e1a7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0004e1a7) sp_fs_action_menu_list_gene_pane_g

0x14c7,	// (0x0003f98b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x14c7,	// (0x0003f98b) sp_fs_action_menu_list_gene_pane_t1

0x14df,	// (0x0003f9a3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x14df,	// (0x0003f9a3) sp_fs_action_menu_list_gene_pane

0xe7a7,	// (0x0004cc6b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a7,	// (0x0004cc6b) popup_sp_fs_action_menu_bg_pane

0x1502,	// (0x0003f9c6) sp_fs_action_menu_list_pane_ParamLimits

0x1502,	// (0x0003f9c6) sp_fs_action_menu_list_pane

0xe7b5,	// (0x0004cc79) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b5,	// (0x0004cc79) sp_fs_scroll_pane_cp01

0x1526,	// (0x0003f9ea) list_medium_line_plain_t2_t1

0x1536,	// (0x0003f9fa) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0004e1ac) list_medium_line_plain_t2_t

0x1544,	// (0x0003fa08) list_medium_line_plain_t3_t1

0x1554,	// (0x0003fa18) list_medium_line_plain_t3_t2

0x1562,	// (0x0003fa26) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0004e1b1) list_medium_line_plain_t3_t

0x0b6c,	// (0x0003f030) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t2_g2_g1

0x0b84,	// (0x0003f048) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004d70a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004d70a) list_medium_line_x2_t2_g2_g

0x0d49,	// (0x0003f20d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d49,	// (0x0003f20d) list_medium_line_x2_t2_g2_t1

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0004e1b8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0004e1b8) list_medium_line_x2_t2_g2_t

0x0b6c,	// (0x0003f030) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t4_g2_g1

0x1570,	// (0x0003fa34) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1570,	// (0x0003fa34) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0004e1bd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0004e1bd) list_medium_line_x2_t4_g2_g

0x1582,	// (0x0003fa46) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1582,	// (0x0003fa46) list_medium_line_x2_t4_g2_t1

0x159c,	// (0x0003fa60) list_medium_line_x2_t4_g2_t2_ParamLimits

0x159c,	// (0x0003fa60) list_medium_line_x2_t4_g2_t2

0x15b2,	// (0x0003fa76) list_medium_line_x2_t4_g2_t3_ParamLimits

0x15b2,	// (0x0003fa76) list_medium_line_x2_t4_g2_t3

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0004e1c2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0004e1c2) list_medium_line_x2_t4_g2_t

0x15c7,	// (0x0003fa8b) list_medium_line_t3_right_iconx2_g1

0x143d,	// (0x0003f901) list_medium_line_t3_right_iconx2_g2

0x15cf,	// (0x0003fa93) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0004e1cb) list_medium_line_t3_right_iconx2_g

0x15d9,	// (0x0003fa9d) list_medium_line_t3_right_iconx2_t1

0x15e9,	// (0x0003faad) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0004e1d2) list_medium_line_t3_right_iconx2_t

0x0b6c,	// (0x0003f030) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x3_t4_g4_g1

0x0b78,	// (0x0003f03c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x3_t4_g4_g2

0x0d31,	// (0x0003f1f5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d31,	// (0x0003f1f5) list_medium_line_x3_t4_g4_g3

0x15f7,	// (0x0003fabb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x15f7,	// (0x0003fabb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0004e1d7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0004e1d7) list_medium_line_x3_t4_g4_g

0x1603,	// (0x0003fac7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1603,	// (0x0003fac7) list_medium_line_x3_t4_g4_t1

0x161a,	// (0x0003fade) list_medium_line_x3_t4_g4_t2_ParamLimits

0x161a,	// (0x0003fade) list_medium_line_x3_t4_g4_t2

0x162f,	// (0x0003faf3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x162f,	// (0x0003faf3) list_medium_line_x3_t4_g4_t3

0x1644,	// (0x0003fb08) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1644,	// (0x0003fb08) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0004e1e0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0004e1e0) list_medium_line_x3_t4_g4_t

0x1661,	// (0x0003fb25) list_single_dyc_row_text_pane_t1_ParamLimits

0x1661,	// (0x0003fb25) list_single_dyc_row_text_pane_t1

0x169e,	// (0x0003fb62) list_single_dyc_row_text_pane_t2_ParamLimits

0x169e,	// (0x0003fb62) list_single_dyc_row_text_pane_t2

0x1714,	// (0x0003fbd8) list_single_dyc_row_text_pane_t3_ParamLimits

0x1714,	// (0x0003fbd8) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0004e1e9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0004e1e9) list_single_dyc_row_text_pane_t

0x17eb,	// (0x0003fcaf) list_single_dyc_row_pane_g1_ParamLimits

0x17eb,	// (0x0003fcaf) list_single_dyc_row_pane_g1

0x17f7,	// (0x0003fcbb) list_single_dyc_row_pane_g2_ParamLimits

0x17f7,	// (0x0003fcbb) list_single_dyc_row_pane_g2

0x1803,	// (0x0003fcc7) list_single_dyc_row_pane_g3_ParamLimits

0x1803,	// (0x0003fcc7) list_single_dyc_row_pane_g3

0x180f,	// (0x0003fcd3) list_single_dyc_row_pane_g4_ParamLimits

0x180f,	// (0x0003fcd3) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004e1f6) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004e1f6) list_single_dyc_row_pane_g

0x181b,	// (0x0003fcdf) list_single_dyc_row_text_pane_ParamLimits

0x181b,	// (0x0003fcdf) list_single_dyc_row_text_pane

0xa160,	// (0x00048624) bg_sp_fs_scroll_pane

0xe7db,	// (0x0004cc9f) thumb_sp_fs_scroll_pane

0x0fce,	// (0x0003f492) list_medium_line_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_g1

0x183a,	// (0x0003fcfe) list_medium_line_t1_ParamLimits

0x183a,	// (0x0003fcfe) list_medium_line_t1

0x0b6c,	// (0x0003f030) list_medium_line_x2_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_g1

0x0b78,	// (0x0003f03c) list_medium_line_x2_g2_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004e1ff) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004e1ff) list_medium_line_x2_g

0x184f,	// (0x0003fd13) list_medium_line_x2_t1_ParamLimits

0x184f,	// (0x0003fd13) list_medium_line_x2_t1

0x0b6c,	// (0x0003f030) list_medium_line_x3_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x3_g1

0x0b78,	// (0x0003f03c) list_medium_line_x3_g2_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004e1ff) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004e1ff) list_medium_line_x3_g

0x184f,	// (0x0003fd13) list_medium_line_x3_t1_ParamLimits

0x184f,	// (0x0003fd13) list_medium_line_x3_t1

0xe7e4,	// (0x0004cca8) thumb_sp_fs_scroll_pane_g1

0xe7ed,	// (0x0004ccb1) thumb_sp_fs_scroll_pane_g2

0xe7f6,	// (0x0004ccba) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e204) thumb_sp_fs_scroll_pane_g

0xe7e4,	// (0x0004cca8) bg_sp_fs_scroll_pane_g1

0xe7ed,	// (0x0004ccb1) bg_sp_fs_scroll_pane_g2

0xe7f6,	// (0x0004ccba) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e204) bg_sp_fs_scroll_pane_g

0x0b6c,	// (0x0003f030) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b6c,	// (0x0003f030) list_medium_line_x2_t3_g4_g1

0x0c14,	// (0x0003f0d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c14,	// (0x0003f0d8) list_medium_line_x2_t3_g4_g2

0x0b78,	// (0x0003f03c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0b78,	// (0x0003f03c) list_medium_line_x2_t3_g4_g3

0x0b84,	// (0x0003f048) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b84,	// (0x0003f048) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004d786) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004d786) list_medium_line_x2_t3_g4_g

0x1865,	// (0x0003fd29) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1865,	// (0x0003fd29) list_medium_line_x2_t3_g4_t1

0x187b,	// (0x0003fd3f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x187b,	// (0x0003fd3f) list_medium_line_x2_t3_g4_t2

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0bb9,	// (0x0003f07d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004e20b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004e20b) list_medium_line_x2_t3_g4_t

0x0fce,	// (0x0003f492) list_medium_line_g2_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_g2_g1

0x0fda,	// (0x0003f49e) list_medium_line_g2_g2_ParamLimits

0x0fda,	// (0x0003f49e) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004dec4) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004dec4) list_medium_line_g2_g

0x1894,	// (0x0003fd58) list_medium_line_g2_t1_ParamLimits

0x1894,	// (0x0003fd58) list_medium_line_g2_t1

0x0fce,	// (0x0003f492) list_medium_line_t3_g2_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_t3_g2_g1

0x0fda,	// (0x0003f49e) list_medium_line_t3_g2_g2_ParamLimits

0x0fda,	// (0x0003f49e) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004dec4) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004dec4) list_medium_line_t3_g2_g

0x18a9,	// (0x0003fd6d) list_medium_line_t3_g2_t1_ParamLimits

0x18a9,	// (0x0003fd6d) list_medium_line_t3_g2_t1

0x18c3,	// (0x0003fd87) list_medium_line_t3_g2_t2_ParamLimits

0x18c3,	// (0x0003fd87) list_medium_line_t3_g2_t2

0x18d9,	// (0x0003fd9d) list_medium_line_t3_g2_t3_ParamLimits

0x18d9,	// (0x0003fd9d) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004e212) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004e212) list_medium_line_t3_g2_t

0x143d,	// (0x0003f901) list_medium_line_right_icon_g1

0x18f0,	// (0x0003fdb4) list_medium_line_right_icon_t1

0x0fce,	// (0x0003f492) list_medium_line_t2_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_t2_g1

0x18fe,	// (0x0003fdc2) list_medium_line_t2_t1_ParamLimits

0x18fe,	// (0x0003fdc2) list_medium_line_t2_t1

0x1918,	// (0x0003fddc) list_medium_line_t2_t2_ParamLimits

0x1918,	// (0x0003fddc) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004e219) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004e219) list_medium_line_t2_t

0x0fce,	// (0x0003f492) list_medium_line_t3_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_t3_g1

0x192d,	// (0x0003fdf1) list_medium_line_t3_t1_ParamLimits

0x192d,	// (0x0003fdf1) list_medium_line_t3_t1

0x1944,	// (0x0003fe08) list_medium_line_t3_t2_ParamLimits

0x1944,	// (0x0003fe08) list_medium_line_t3_t2

0x1959,	// (0x0003fe1d) list_medium_line_t3_t3_ParamLimits

0x1959,	// (0x0003fe1d) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004e21e) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004e21e) list_medium_line_t3_t

0x0fce,	// (0x0003f492) list_medium_line_g3_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_g3_g1

0x196b,	// (0x0003fe2f) list_medium_line_g3_g2_ParamLimits

0x196b,	// (0x0003fe2f) list_medium_line_g3_g2

0x0fda,	// (0x0003f49e) list_medium_line_g3_g3_ParamLimits

0x0fda,	// (0x0003f49e) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004e225) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004e225) list_medium_line_g3_g

0x1977,	// (0x0003fe3b) list_medium_line_g3_t1_ParamLimits

0x1977,	// (0x0003fe3b) list_medium_line_g3_t1

0x0fce,	// (0x0003f492) list_medium_line_t2_g3_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_t2_g3_g1

0x196b,	// (0x0003fe2f) list_medium_line_t2_g3_g2_ParamLimits

0x196b,	// (0x0003fe2f) list_medium_line_t2_g3_g2

0x0fda,	// (0x0003f49e) list_medium_line_t2_g3_g3_ParamLimits

0x0fda,	// (0x0003f49e) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004e225) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004e225) list_medium_line_t2_g3_g

0x198c,	// (0x0003fe50) list_medium_line_t2_g3_t1_ParamLimits

0x198c,	// (0x0003fe50) list_medium_line_t2_g3_t1

0x19a3,	// (0x0003fe67) list_medium_line_t2_g3_t2_ParamLimits

0x19a3,	// (0x0003fe67) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004e22c) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004e22c) list_medium_line_t2_g3_t

0x0fce,	// (0x0003f492) list_medium_line_t3_g3_g1_ParamLimits

0x0fce,	// (0x0003f492) list_medium_line_t3_g3_g1

0x196b,	// (0x0003fe2f) list_medium_line_t3_g3_g2_ParamLimits

0x196b,	// (0x0003fe2f) list_medium_line_t3_g3_g2

0x0fda,	// (0x0003f49e) list_medium_line_t3_g3_g3_ParamLimits

0x0fda,	// (0x0003f49e) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004e225) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004e225) list_medium_line_t3_g3_g

0x19b8,	// (0x0003fe7c) list_medium_line_t3_g3_t1_ParamLimits

0x19b8,	// (0x0003fe7c) list_medium_line_t3_g3_t1

0x19cc,	// (0x0003fe90) list_medium_line_t3_g3_t2_ParamLimits

0x19cc,	// (0x0003fe90) list_medium_line_t3_g3_t2

0x19de,	// (0x0003fea2) list_medium_line_t3_g3_t3_ParamLimits

0x19de,	// (0x0003fea2) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004e231) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004e231) list_medium_line_t3_g3_t

0x15c7,	// (0x0003fa8b) list_medium_line_right_iconx2_g1

0x143d,	// (0x0003f901) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e238) list_medium_line_right_iconx2_g

0x19f2,	// (0x0003feb6) list_medium_line_right_iconx2_t1

0x15c7,	// (0x0003fa8b) list_medium_line_t2_right_iconx2_g1

0x143d,	// (0x0003f901) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e238) list_medium_line_t2_right_iconx2_g

0x1a00,	// (0x0003fec4) list_medium_line_t2_right_iconx2_t1

0x1a10,	// (0x0003fed4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004e23d) list_medium_line_t2_right_iconx2_t

0x1a1e,	// (0x0003fee2) list_medium_line_x4_t4_t1

0x1a2c,	// (0x0003fef0) list_medium_line_x4_t4_t2

0x1a3c,	// (0x0003ff00) list_medium_line_x4_t4_t3

0x1a4c,	// (0x0003ff10) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004e242) list_medium_line_x4_t4_t

0x93ab,	// (0x0004786f) tport_appsw_pane_ParamLimits

0x93ab,	// (0x0004786f) tport_appsw_pane

0x93b9,	// (0x0004787d) tport_contact_pane_ParamLimits

0x93b9,	// (0x0004787d) tport_contact_pane

0x93c9,	// (0x0004788d) tport_listscroll_pane_ParamLimits

0x93c9,	// (0x0004788d) tport_listscroll_pane

0x93d9,	// (0x0004789d) cell_tport_appsw_pane_ParamLimits

0x93d9,	// (0x0004789d) cell_tport_appsw_pane

0xcf2f,	// (0x0004b3f3) tport_appsw_pane_g1_ParamLimits

0xcf2f,	// (0x0004b3f3) tport_appsw_pane_g1

0xe7ff,	// (0x0004ccc3) tport_contact_pane_g1

0xe808,	// (0x0004cccc) tport_contact_pane_t1

0xe816,	// (0x0004ccda) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004e24b) tport_contact_pane_t

0xe824,	// (0x0004cce8) list_tport_pane

0xe82d,	// (0x0004ccf1) scroll_pane_cp_030

0x940e,	// (0x000478d2) cell_tport_appsw_pane_g1

0x941e,	// (0x000478e2) cell_tport_appsw_pane_t1

0x942c,	// (0x000478f0) grid_highlight_pane_cp019

0x9434,	// (0x000478f8) list_tport_double_graphic_pane_ParamLimits

0x9434,	// (0x000478f8) list_tport_double_graphic_pane

0xa9f9,	// (0x00048ebd) list_highlight_pane_cp023_ParamLimits

0xa9f9,	// (0x00048ebd) list_highlight_pane_cp023

0x9441,	// (0x00047905) list_tport_double_graphic_pane_g1_ParamLimits

0x9441,	// (0x00047905) list_tport_double_graphic_pane_g1

0x944e,	// (0x00047912) list_tport_double_graphic_pane_t1_ParamLimits

0x944e,	// (0x00047912) list_tport_double_graphic_pane_t1

0x9463,	// (0x00047927) list_tport_double_graphic_pane_t2_ParamLimits

0x9463,	// (0x00047927) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004e257) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004e257) list_tport_double_graphic_pane_t

0xa160,	// (0x00048624) main_cale_note_pane

0x786a,	// (0x00045d2e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x786a,	// (0x00045d2e) cell_vitu2_function_top_wide_pane_cp01

0x8f9e,	// (0x00047462) wait_bar_pane_cp05_ParamLimits

0xa9f9,	// (0x00048ebd) listscroll_cmail_pane

0xe83e,	// (0x0004cd02) list_cmail_pane

0x947f,	// (0x00047943) list_cmail_body_pane

0x9498,	// (0x0004795c) list_single_cmail_header_caption_pane

0x94b9,	// (0x0004797d) list_single_cmail_header_detail_pane_ParamLimits

0x94b9,	// (0x0004797d) list_single_cmail_header_detail_pane

0x94ea,	// (0x000479ae) list_single_cmail_header_caption_pane_t1

0x1a5c,	// (0x0003ff20) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a5c,	// (0x0003ff20) list_single_cmail_header_detail_pane_g1

0x1a74,	// (0x0003ff38) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1a74,	// (0x0003ff38) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004e25c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004e25c) list_single_cmail_header_detail_pane_g

0x1a80,	// (0x0003ff44) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a80,	// (0x0003ff44) list_single_cmail_header_detail_pane_t1

0x1aec,	// (0x0003ffb0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1aec,	// (0x0003ffb0) list_single_cmail_header_editor_pane_bg

0xe327,	// (0x0004c7eb) list_cmail_body_pane_g1

0xe86b,	// (0x0004cd2f) list_cmail_body_pane_t1

0xd6e4,	// (0x0004bba8) list_single_cmail_header_editor_pane_bg_g1

0xad2d,	// (0x000491f1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6f4,	// (0x0004bbb8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6ec,	// (0x0004bbb0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd929,	// (0x0004bded) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd714,	// (0x0004bbd8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd704,	// (0x0004bbc8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd70c,	// (0x0004bbd0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad0d,	// (0x000491d1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x94fa,	// (0x000479be) calenote_gesture_pane_ParamLimits

0x94fa,	// (0x000479be) calenote_gesture_pane

0x9514,	// (0x000479d8) calenote_window_pane_ParamLimits

0x9514,	// (0x000479d8) calenote_window_pane

0xe879,	// (0x0004cd3d) popup_note_window_cp01

0x952c,	// (0x000479f0) calenote_swipe_1_pane_ParamLimits

0x952c,	// (0x000479f0) calenote_swipe_1_pane

0x92fc,	// (0x000477c0) calenote_swipe_2_pane_ParamLimits

0x92fc,	// (0x000477c0) calenote_swipe_2_pane

0xe686,	// (0x0004cb4a) calenote_swipe_1_pane_g1_ParamLimits

0xe686,	// (0x0004cb4a) calenote_swipe_1_pane_g1

0xe693,	// (0x0004cb57) calenote_swipe_1_pane_g2_ParamLimits

0xe693,	// (0x0004cb57) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0004e180) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0004e180) calenote_swipe_1_pane_g

0xe88b,	// (0x0004cd4f) calenote_swipe_1_pane_t1_ParamLimits

0xe88b,	// (0x0004cd4f) calenote_swipe_1_pane_t1

0xe686,	// (0x0004cb4a) calenote_swipe_2_pane_g1_ParamLimits

0xe686,	// (0x0004cb4a) calenote_swipe_2_pane_g1

0xe8aa,	// (0x0004cd6e) calenote_swipe_2_pane_g2_ParamLimits

0xe8aa,	// (0x0004cd6e) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004e268) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004e268) calenote_swipe_2_pane_g

0xe8b6,	// (0x0004cd7a) calenote_swipe_2_pane_t1_ParamLimits

0xe8b6,	// (0x0004cd7a) calenote_swipe_2_pane_t1

0xa160,	// (0x00048624) main_mup_navstr_pane

0x65a1,	// (0x00044a65) main_mup3_pane_t7_ParamLimits

0x65a1,	// (0x00044a65) main_mup3_pane_t7

0x6fa4,	// (0x00045468) main_mp4_pane_g6_ParamLimits

0x6fa4,	// (0x00045468) main_mp4_pane_g6

0x7314,	// (0x000457d8) main_image3_pane_t4_ParamLimits

0x7314,	// (0x000457d8) main_image3_pane_t4

0x953f,	// (0x00047a03) popup_navstr_preview_pane_ParamLimits

0x953f,	// (0x00047a03) popup_navstr_preview_pane

0x954b,	// (0x00047a0f) scroll_navstr_pane_ParamLimits

0x954b,	// (0x00047a0f) scroll_navstr_pane

0xa160,	// (0x00048624) bg_popup_preview_window_pane_cp04

0xe8dd,	// (0x0004cda1) popup_navstr_preview_pane_t1

0x9557,	// (0x00047a1b) scroll_navstr_pane_g1_ParamLimits

0x9557,	// (0x00047a1b) scroll_navstr_pane_g1

0x9564,	// (0x00047a28) scroll_navstr_pane_t1_ParamLimits

0x9564,	// (0x00047a28) scroll_navstr_pane_t1

0xe882,	// (0x0004cd46) bg_button_pane_cp014

0xe882,	// (0x0004cd46) bg_button_pane_cp030

0x139d,	// (0x0003f861) list_double_fisheye_pane_g4_ParamLimits

0x139d,	// (0x0003f861) list_double_fisheye_pane_g4

0x13a9,	// (0x0003f86d) list_double_fisheye_pane_g5_ParamLimits

0x13a9,	// (0x0003f86d) list_double_fisheye_pane_g5

0xe846,	// (0x0004cd0a) sp_fs_scroll_pane_cp03

0xccc9,	// (0x0004b18d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75e,	// (0x0004cc22) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0004e19d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe76a,	// (0x0004cc2e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9475,	// (0x00047939) sp_fs_scroll_pane_cp02

0xaa30,	// (0x00048ef4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa30,	// (0x00048ef4) popup_sp_fs_calendar_preview_list_single_pane

0xa160,	// (0x00048624) main_cam6_pano_pane

0xa9f9,	// (0x00048ebd) main_mup3_pane_ParamLimits

0xa160,	// (0x00048624) main_phacti_pane

0x8e71,	// (0x00047335) bg_button_pane_cp11

0x8e89,	// (0x0004734d) main_mobtv_info_pane_g2_ParamLimits

0x8e89,	// (0x0004734d) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0004e0fd) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0004e0fd) main_mobtv_info_pane_g

0x903b,	// (0x000474ff) sc_clock_pane_t5_ParamLimits

0x903b,	// (0x000474ff) sc_clock_pane_t5

0x90ea,	// (0x000475ae) main_radioblah_pane_g1_ParamLimits

0xe5d2,	// (0x0004ca96) main_radioblah_pane_t3_ParamLimits

0xe5d2,	// (0x0004ca96) main_radioblah_pane_t3

0xe5ea,	// (0x0004caae) main_radioblah_pane_t4_ParamLimits

0xe5ea,	// (0x0004caae) main_radioblah_pane_t4

0x9108,	// (0x000475cc) main_radioblah_text_pane_ParamLimits

0x9108,	// (0x000475cc) main_radioblah_text_pane

0x9115,	// (0x000475d9) main_radioblah_info_pane_g1_ParamLimits

0x91ae,	// (0x00047672) main_radioblah_info_pane_t4_ParamLimits

0x91ae,	// (0x00047672) main_radioblah_info_pane_t4

0xa9f9,	// (0x00048ebd) main_sp_fs_calendar_pane

0x9576,	// (0x00047a3a) main_phacti_pane_g1

0x957e,	// (0x00047a42) phacti_note_pane_ParamLimits

0x957e,	// (0x00047a42) phacti_note_pane

0xe8f4,	// (0x0004cdb8) phacti_term_pane_ParamLimits

0xe8f4,	// (0x0004cdb8) phacti_term_pane

0xe909,	// (0x0004cdcd) phacti_note_pane_t1_ParamLimits

0xe909,	// (0x0004cdcd) phacti_note_pane_t1

0x1b03,	// (0x0003ffc7) phacti_term_pane_g1

0x1b0b,	// (0x0003ffcf) phacti_term_pane_t1_ParamLimits

0x1b0b,	// (0x0003ffcf) phacti_term_pane_t1

0xe920,	// (0x0004cde4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe928,	// (0x0004cdec) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004e272) popup_sp_fs_calendar_preview_list_single_pane_g

0xe930,	// (0x0004cdf4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe930,	// (0x0004cdf4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe946,	// (0x0004ce0a) aid_popup_sp_fs_bg_corner_pane

0xcc86,	// (0x0004b14a) popup_sp_fs_calendar_preview_bg_pane_g1

0xa160,	// (0x00048624) popup_sp_fs_calendar_preview_bg_pane

0xe94e,	// (0x0004ce12) popup_sp_fs_calendar_preview_list_pane

0xc835,	// (0x0004acf9) bg_main_sp_fs_cale_pane_ParamLimits

0xc835,	// (0x0004acf9) bg_main_sp_fs_cale_pane

0x1b3e,	// (0x00040002) listscroll_cale_mrui_pane_ParamLimits

0x1b3e,	// (0x00040002) listscroll_cale_mrui_pane

0x1b53,	// (0x00040017) listscroll_sp_fs_schedule_track_pane

0x1b5c,	// (0x00040020) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b5c,	// (0x00040020) main_sp_fs_ctrlbar_pane_cp01

0xe956,	// (0x0004ce1a) main_sp_fs_ribbon_pane

0x1b6f,	// (0x00040033) popup_sp_fs_cale_preview_window

0x95dd,	// (0x00047aa1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95dd,	// (0x00047aa1) list_single_sp_fs_schedule_track_pane

0x2191,	// (0x00040655) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2191,	// (0x00040655) bg_sp_fs_highlight_list_pane_cp03

0x95f2,	// (0x00047ab6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95f2,	// (0x00047ab6) list_single_sp_fs_schedule_track_pane_g1

0x95fe,	// (0x00047ac2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x95fe,	// (0x00047ac2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004e277) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004e277) list_single_sp_fs_schedule_track_pane_g

0x960a,	// (0x00047ace) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x960a,	// (0x00047ace) list_single_sp_fs_schedule_track_pane_t1

0x9628,	// (0x00047aec) sp_fs_schedule_track_pane_ParamLimits

0x9628,	// (0x00047aec) sp_fs_schedule_track_pane

0xe95e,	// (0x0004ce22) sp_fs_schedule_track_pane_g1

0xe966,	// (0x0004ce2a) sp_fs_schedule_track_pane_g2

0xe96e,	// (0x0004ce32) sp_fs_schedule_track_pane_g3

0xe976,	// (0x0004ce3a) sp_fs_schedule_track_pane_g4

0xe97e,	// (0x0004ce42) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004e27c) sp_fs_schedule_track_pane_g

0xd6e4,	// (0x0004bba8) bg_sp_fs_schedule_viewer_highlight_g1

0xad2d,	// (0x000491f1) bg_sp_fs_schedule_viewer_highlight_g2

0xd6ec,	// (0x0004bbb0) bg_sp_fs_schedule_viewer_highlight_g3

0xd6f4,	// (0x0004bbb8) bg_sp_fs_schedule_viewer_highlight_g4

0xd929,	// (0x0004bded) bg_sp_fs_schedule_viewer_highlight_g5

0xd704,	// (0x0004bbc8) bg_sp_fs_schedule_viewer_highlight_g6

0xd70c,	// (0x0004bbd0) bg_sp_fs_schedule_viewer_highlight_g7

0xd714,	// (0x0004bbd8) bg_sp_fs_schedule_viewer_highlight_g8

0xad0d,	// (0x000491d1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004e287) bg_sp_fs_schedule_viewer_highlight_g

0xa160,	// (0x00048624) bg_main_sp_fs_ribbon_pane

0x963a,	// (0x00047afe) main_sp_fs_ribbon_pane_g1

0xe986,	// (0x0004ce4a) main_sp_fs_ribbon_pane_t1

0x9643,	// (0x00047b07) main_sp_fs_ribbon_pane_t2

0xe995,	// (0x0004ce59) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004e29a) main_sp_fs_ribbon_pane_t

0xe9a4,	// (0x0004ce68) main_sp_fs_ribbon_scheduler_pane

0xe9ac,	// (0x0004ce70) bg_main_sp_fs_ribbon_pane_g1

0xe9b5,	// (0x0004ce79) bg_main_sp_fs_ribbon_pane_g2

0xe9be,	// (0x0004ce82) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004e2a1) bg_main_sp_fs_ribbon_pane_g

0xe9c6,	// (0x0004ce8a) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cf,	// (0x0004ce93) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d8,	// (0x0004ce9c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004e2a8) main_sp_fs_ribbon_scheduler_pane_g

0xe9e1,	// (0x0004cea5) list_cale_mrui_pane

0x9652,	// (0x00047b16) sp_fs_scroll_pane_cp07_ParamLimits

0x9652,	// (0x00047b16) sp_fs_scroll_pane_cp07

0x966e,	// (0x00047b32) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x966e,	// (0x00047b32) bg_sp_fs_schedule_viewer_highlight

0xe9ee,	// (0x0004ceb2) list_single_sp_fs_schedule_track_pane_cp01

0xe9f6,	// (0x0004ceba) list_sp_fs_schedule_track_pane

0xe9fe,	// (0x0004cec2) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fe,	// (0x0004cec2) sp_fs_scroll_pane_cp06

0xcc86,	// (0x0004b14a) bgmain_sp_fs_calendar_pane_g1

0x1b81,	// (0x00040045) list_single_cale_mrui_pane_ParamLimits

0x1b81,	// (0x00040045) list_single_cale_mrui_pane

0x1b96,	// (0x0004005a) list_single_cale_mrui_row_pane_ParamLimits

0x1b96,	// (0x0004005a) list_single_cale_mrui_row_pane

0x1bac,	// (0x00040070) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1bac,	// (0x00040070) list_single_cale_mrui_row_pane_g1

0x1be4,	// (0x000400a8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1be4,	// (0x000400a8) list_single_cale_mrui_row_pane_t1

0x1bf6,	// (0x000400ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1bf6,	// (0x000400ba) list_single_cale_mrui_row_pane_t2

0x1c5c,	// (0x00040120) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c5c,	// (0x00040120) list_single_cale_mrui_row_pane_t3

0x1c8b,	// (0x0004014f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c8b,	// (0x0004014f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004e2b6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004e2b6) list_single_cale_mrui_row_pane_t

0x1cba,	// (0x0004017e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1cba,	// (0x0004017e) list_single_cmail_header_editor_pane_bg_cp01

0x1cde,	// (0x000401a2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1cde,	// (0x000401a2) list_single_cmail_header_editor_pane_bg_cp02

0x967b,	// (0x00047b3f) main_radioblah_text_pane_t1_ParamLimits

0x967b,	// (0x00047b3f) main_radioblah_text_pane_t1

0xea1d,	// (0x0004cee1) cam6_indi_pane_cp01

0xea25,	// (0x0004cee9) cam6_mode_pane_cp01

0xea2d,	// (0x0004cef1) cam6_pano_pane

0xea36,	// (0x0004cefa) cam6_zoom_pane_cp01

0xea40,	// (0x0004cf04) cam6_pano_image_pane

0xea49,	// (0x0004cf0d) cam6_pano_pane_g1

0xe327,	// (0x0004c7eb) cam6_pano_pane_g2

0xea52,	// (0x0004cf16) cam6_pano_pane_g3

0xea5b,	// (0x0004cf1f) cam6_pano_pane_g4

0xd234,	// (0x0004b6f8) cam6_pano_pane_g5

0xea64,	// (0x0004cf28) cam6_pano_pane_g6

0xea6c,	// (0x0004cf30) cam6_pano_pane_g7

0xea74,	// (0x0004cf38) cam6_pano_pane_g8

0xea7d,	// (0x0004cf41) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004e2bf) cam6_pano_pane_g

0xa160,	// (0x00048624) main_browser_tag_pane

0xe8d5,	// (0x0004cd99) grid_navstr_albumart_pane

0xea88,	// (0x0004cf4c) cell_navstr_albumart_pane_ParamLimits

0xea88,	// (0x0004cf4c) cell_navstr_albumart_pane

0xeaa7,	// (0x0004cf6b) cell_navstr_albumart_pane_g1

0xc642,	// (0x0004ab06) cell_navstr_albumart_pane_g2

0xc652,	// (0x0004ab16) cell_navstr_albumart_pane_g3

0xc64a,	// (0x0004ab0e) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004e2d2) cell_navstr_albumart_pane_g

0x9695,	// (0x00047b59) bt_list_pane_ParamLimits

0x9695,	// (0x00047b59) bt_list_pane

0x96ae,	// (0x00047b72) bt_list_pane_t1

0x96bd,	// (0x00047b81) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004e2db) bt_list_pane_t

0xa160,	// (0x00048624) main_cale_prevew_pane

0x96cc,	// (0x00047b90) popup_cale_preview_window_ParamLimits

0x96cc,	// (0x00047b90) popup_cale_preview_window

0xa9f9,	// (0x00048ebd) bg_popup_preview_window_pane_cp05_ParamLimits

0xa9f9,	// (0x00048ebd) bg_popup_preview_window_pane_cp05

0xeaaf,	// (0x0004cf73) list_cale_preview_pane_ParamLimits

0xeaaf,	// (0x0004cf73) list_cale_preview_pane

0x96e7,	// (0x00047bab) list_double_cale_preview_pane_ParamLimits

0x96e7,	// (0x00047bab) list_double_cale_preview_pane

0x96fb,	// (0x00047bbf) list_single_cale_preview_pane_ParamLimits

0x96fb,	// (0x00047bbf) list_single_cale_preview_pane

0x9713,	// (0x00047bd7) list_single_cale_preview_pane_g1

0x971b,	// (0x00047bdf) list_single_cale_preview_pane_t1_ParamLimits

0x971b,	// (0x00047bdf) list_single_cale_preview_pane_t1

0x9730,	// (0x00047bf4) list_double_cale_preview_pane_g1

0x9738,	// (0x00047bfc) list_double_cale_preview_pane_t1_ParamLimits

0x9738,	// (0x00047bfc) list_double_cale_preview_pane_t1

0x974d,	// (0x00047c11) list_double_cale_preview_pane_t2_ParamLimits

0x974d,	// (0x00047c11) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004e2e0) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004e2e0) list_double_cale_preview_pane_t

0xa160,	// (0x00048624) main_ezdial_pane

0xa9f9,	// (0x00048ebd) main_sp_fs_email_pane_ParamLimits

0x9316,	// (0x000477da) cmail_ddmenu_btn01_pane_ParamLimits

0x9316,	// (0x000477da) cmail_ddmenu_btn01_pane

0x9333,	// (0x000477f7) cmail_ddmenu_btn02_pane_ParamLimits

0x9333,	// (0x000477f7) cmail_ddmenu_btn02_pane

0x9351,	// (0x00047815) cmail_ddmenu_btn03_pane_ParamLimits

0x9351,	// (0x00047815) cmail_ddmenu_btn03_pane

0x1463,	// (0x0003f927) main_sp_fs_ctrlbar_pane_ParamLimits

0x147d,	// (0x0003f941) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x947f,	// (0x00047943) list_cmail_body_pane_ParamLimits

0xe855,	// (0x0004cd19) bg_button_pane_cp12

0xe85e,	// (0x0004cd22) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85e,	// (0x0004cd22) list_single_cmail_header_detail_pane_g3

0x1ac8,	// (0x0003ff8c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1ac8,	// (0x0003ff8c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004e263) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004e263) list_single_cmail_header_detail_pane_t

0x1b20,	// (0x0003ffe4) phacti_term_pane_t2_ParamLimits

0x1b20,	// (0x0003ffe4) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004e26d) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004e26d) phacti_term_pane_t

0xeabb,	// (0x0004cf7f) aid_size_list_single_double

0x9765,	// (0x00047c29) popup_ezdial_listscroll_window

0x9787,	// (0x00047c4b) popup_number_entry_window_cp01

0xaad0,	// (0x00048f94) bg_popup_call_pane_cp09

0xeac7,	// (0x0004cf8b) ezdial_list_pane

0xeacf,	// (0x0004cf93) scroll_pane_cp23

0xca65,	// (0x0004af29) bg_button_pane_cp028_ParamLimits

0xca65,	// (0x0004af29) bg_button_pane_cp028

0x9795,	// (0x00047c59) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9795,	// (0x00047c59) cmail_ddmenu_btn01_pane_g1

0x97a7,	// (0x00047c6b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97a7,	// (0x00047c6b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004e2e5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004e2e5) cmail_ddmenu_btn01_pane_g

0xead7,	// (0x0004cf9b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead7,	// (0x0004cf9b) cmail_ddmenu_btn01_pane_t1

0xc835,	// (0x0004acf9) bg_button_pane_cp029_ParamLimits

0xc835,	// (0x0004acf9) bg_button_pane_cp029

0x97b3,	// (0x00047c77) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97b3,	// (0x00047c77) cmail_ddmenu_btn02_pane_g1

0x97cb,	// (0x00047c8f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97cb,	// (0x00047c8f) cmail_ddmenu_btn02_pane_t1

0x2191,	// (0x00040655) bg_button_pane_cp031_ParamLimits

0x2191,	// (0x00040655) bg_button_pane_cp031

0x97b3,	// (0x00047c77) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97b3,	// (0x00047c77) cmail_ddmenu_btn03_pane_g1

0x97cb,	// (0x00047c8f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97cb,	// (0x00047c8f) cmail_ddmenu_btn03_pane_t1

0x71bd,	// (0x00045681) cell_dialer2_keypad_pane_t1_ParamLimits

0x71d7,	// (0x0004569b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x71d7,	// (0x0004569b) cell_dialer2_keypad_pane_t1_copy1

0x8ce2,	// (0x000471a6) ncimui_group_button_pane

0xa9f9,	// (0x00048ebd) main_sp_fs_calendar_pane_ParamLimits

0x9498,	// (0x0004795c) list_single_cmail_header_caption_pane_ParamLimits

0x1b35,	// (0x0003fff9) aid_recal_txt_sm_pane

0xa160,	// (0x00048624) mian_recal_day_pane

0x1b6f,	// (0x00040033) popup_sp_fs_cale_preview_window_ParamLimits

0xeaed,	// (0x0004cfb1) list_recal_day_pane

0x1d16,	// (0x000401da) list_single_recal_day_pane_ParamLimits

0x1d16,	// (0x000401da) list_single_recal_day_pane

0xeb14,	// (0x0004cfd8) list_single_recal_day_pane_g1_ParamLimits

0xeb14,	// (0x0004cfd8) list_single_recal_day_pane_g1

0x1d28,	// (0x000401ec) list_single_recal_day_pane_g2_ParamLimits

0x1d28,	// (0x000401ec) list_single_recal_day_pane_g2

0x1d34,	// (0x000401f8) list_single_recal_day_pane_g3_ParamLimits

0x1d34,	// (0x000401f8) list_single_recal_day_pane_g3

0x1d40,	// (0x00040204) list_single_recal_day_pane_g4_ParamLimits

0x1d40,	// (0x00040204) list_single_recal_day_pane_g4

0x1d4e,	// (0x00040212) list_single_recal_day_pane_g5_ParamLimits

0x1d4e,	// (0x00040212) list_single_recal_day_pane_g5

0x1d64,	// (0x00040228) list_single_recal_day_pane_g6_ParamLimits

0x1d64,	// (0x00040228) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004e2f4) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004e2f4) list_single_recal_day_pane_g

0x1d78,	// (0x0004023c) list_single_recal_day_pane_t1

0x1d8a,	// (0x0004024e) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004e2ff) list_single_recal_day_pane_t

0x97ef,	// (0x00047cb3) ncimui_query_button_pane_ParamLimits

0x97ef,	// (0x00047cb3) ncimui_query_button_pane

0x97ff,	// (0x00047cc3) ncimui_query_button_pane_t1_ParamLimits

0x97ff,	// (0x00047cc3) ncimui_query_button_pane_t1

0xeb20,	// (0x0004cfe4) ncimui_query_button_pane_t2_ParamLimits

0xeb20,	// (0x0004cfe4) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004e304) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004e304) ncimui_query_button_pane_t

0x9812,	// (0x00047cd6) query_button_pane_ParamLimits

0x9812,	// (0x00047cd6) query_button_pane

0xa160,	// (0x00048624) bg_button_pane_cp0028

0xeb33,	// (0x0004cff7) query_button_pane_t1

0x55ea,	// (0x00043aae) main_tport_pane_ParamLimits

0x9381,	// (0x00047845) bg_popup_window_pane_cp01_ParamLimits

0x9381,	// (0x00047845) bg_popup_window_pane_cp01

0x938f,	// (0x00047853) heading_pane_cp08_ParamLimits

0x938f,	// (0x00047853) heading_pane_cp08

0x939d,	// (0x00047861) heading_pane_cp07_ParamLimits

0x939d,	// (0x00047861) heading_pane_cp07

0x940e,	// (0x000478d2) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004e250) cell_tport_appsw_pane_g

0x0d8a,	// (0x0003f24e) input_candi_list_open_g1

0xaee1,	// (0x000493a5) list_cale_time_pane_g6_ParamLimits

0xaee1,	// (0x000493a5) list_cale_time_pane_g6

0x6075,	// (0x00044539) aid_size_touch_calib_1_ParamLimits

0x6075,	// (0x00044539) aid_size_touch_calib_1

0x6081,	// (0x00044545) aid_size_touch_calib_2_ParamLimits

0x6081,	// (0x00044545) aid_size_touch_calib_2

0x608f,	// (0x00044553) aid_size_touch_calib_3_ParamLimits

0x608f,	// (0x00044553) aid_size_touch_calib_3

0x609f,	// (0x00044563) aid_size_touch_calib_4_ParamLimits

0x609f,	// (0x00044563) aid_size_touch_calib_4

0x60ad,	// (0x00044571) main_touch_calib_button_group_pane_ParamLimits

0x60ad,	// (0x00044571) main_touch_calib_button_group_pane

0x60bb,	// (0x0004457f) main_touch_calib_pane_g1_ParamLimits

0x60c7,	// (0x0004458b) main_touch_calib_pane_g2_ParamLimits

0x60d3,	// (0x00044597) main_touch_calib_pane_g3_ParamLimits

0x60df,	// (0x000445a3) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004dc15) main_touch_calib_pane_g_ParamLimits

0x60eb,	// (0x000445af) main_touch_calib_pane_t1_ParamLimits

0x6102,	// (0x000445c6) main_touch_calib_pane_t2_ParamLimits

0x611b,	// (0x000445df) main_touch_calib_pane_t3_ParamLimits

0x6131,	// (0x000445f5) main_touch_calib_pane_t4_ParamLimits

0x6147,	// (0x0004460b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004dc1e) main_touch_calib_pane_t_ParamLimits

0xcfca,	// (0x0004b48e) list_single_fp_cale_pane_g3_ParamLimits

0xcfca,	// (0x0004b48e) list_single_fp_cale_pane_g3

0xa9f9,	// (0x00048ebd) bg_button_pane_cp012_ParamLimits

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp03_ParamLimits

0x7fbf,	// (0x00046483) cell_vitu2_function_top_pane_g1_ParamLimits

0xa9f9,	// (0x00048ebd) bg_vkb2_func_pane_cp04_ParamLimits

0x8c68,	// (0x0004712c) main_ncimui_button_group_pane_ParamLimits

0x8c68,	// (0x0004712c) main_ncimui_button_group_pane

0x8cd0,	// (0x00047194) main_ncimui_pane_t3_ParamLimits

0x8cd0,	// (0x00047194) main_ncimui_pane_t3

0xe8eb,	// (0x0004cdaf) phacti_button_group_pane

0xeabb,	// (0x0004cf7f) aid_size_list_single_double_ParamLimits

0x9765,	// (0x00047c29) popup_ezdial_listscroll_window_ParamLimits

0x9787,	// (0x00047c4b) popup_number_entry_window_cp01_ParamLimits

0x981f,	// (0x00047ce3) phacti_button_pane_ParamLimits

0x981f,	// (0x00047ce3) phacti_button_pane

0xa160,	// (0x00048624) bg_button_pane_cp14

0xeb41,	// (0x0004d005) phacti_button_pane_t1

0x9830,	// (0x00047cf4) main_touch_calib_button_pane_ParamLimits

0x9830,	// (0x00047cf4) main_touch_calib_button_pane

0xa8ec,	// (0x00048db0) bg_button_pane_cp18_ParamLimits

0xa8ec,	// (0x00048db0) bg_button_pane_cp18

0xeb4f,	// (0x0004d013) main_touch_calib_button_pane_t1_ParamLimits

0xeb4f,	// (0x0004d013) main_touch_calib_button_pane_t1

0xeb65,	// (0x0004d029) main_touch_calib_button_pane_t2_ParamLimits

0xeb65,	// (0x0004d029) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004e309) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004e309) main_touch_calib_button_pane_t

0xa160,	// (0x00048624) cell_ncimui_button_pane

0xa160,	// (0x00048624) bg_button_pane_cp032

0xeb83,	// (0x0004d047) cell_ncimui_button_pane_t1

0x7233,	// (0x000456f7) image3_infobar_pane_ParamLimits

0x7233,	// (0x000456f7) image3_infobar_pane

0x905d,	// (0x00047521) fs_bigclock_status_pane_ParamLimits

0x905d,	// (0x00047521) fs_bigclock_status_pane

0x906a,	// (0x0004752e) main_fs_bigclock_clock_pane_ParamLimits

0x906a,	// (0x0004752e) main_fs_bigclock_clock_pane

0x9086,	// (0x0004754a) main_fs_bigclock_indi_pane_ParamLimits

0x9086,	// (0x0004754a) main_fs_bigclock_indi_pane

0x90b8,	// (0x0004757c) main_fs_bigclock_swipe_pane_ParamLimits

0x90b8,	// (0x0004757c) main_fs_bigclock_swipe_pane

0xa160,	// (0x00048624) main_fs_clock_dumped_data

0xe434,	// (0x0004c8f8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe434,	// (0x0004c8f8) list_single_fs_bigclock_indicator_pane_g1

0xe45e,	// (0x0004c922) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe45e,	// (0x0004c922) list_single_fs_bigclock_indicator_pane_g2

0xe478,	// (0x0004c93c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe478,	// (0x0004c93c) list_single_fs_bigclock_indicator_pane_g3

0xe492,	// (0x0004c956) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe492,	// (0x0004c956) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0004e131) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0004e131) list_single_fs_bigclock_indicator_pane_g

0xe4bd,	// (0x0004c981) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4bd,	// (0x0004c981) list_single_fs_bigclock_indicator_pane_t1

0xe4e5,	// (0x0004c9a9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4e5,	// (0x0004c9a9) list_single_fs_bigclock_indicator_pane_t2

0xe50d,	// (0x0004c9d1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe50d,	// (0x0004c9d1) list_single_fs_bigclock_indicator_pane_t3

0xe535,	// (0x0004c9f9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe535,	// (0x0004c9f9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0004e13c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0004e13c) list_single_fs_bigclock_indicator_pane_t

0xeb91,	// (0x0004d055) image3_infobar_fav_pane_ParamLimits

0xeb91,	// (0x0004d055) image3_infobar_fav_pane

0xeba1,	// (0x0004d065) image3_infobar_loc_pane_ParamLimits

0xeba1,	// (0x0004d065) image3_infobar_loc_pane

0xebb7,	// (0x0004d07b) image3_infobar_time_pane_ParamLimits

0xebb7,	// (0x0004d07b) image3_infobar_time_pane

0xcc86,	// (0x0004b14a) image3_infobar_time_pane_g1

0xebc7,	// (0x0004d08b) image3_infobar_time_pane_t1

0xcc86,	// (0x0004b14a) image3_infobar_loc_pane_g1

0xebd5,	// (0x0004d099) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004e30e) image3_infobar_loc_pane_g

0xebdd,	// (0x0004d0a1) image3_infobar_loc_pane_t1

0xcc86,	// (0x0004b14a) image3_infobar_fav_pane_g1

0xebeb,	// (0x0004d0af) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004e313) image3_infobar_fav_pane_g

0xebf3,	// (0x0004d0b7) fs_bigclock_status_battery_pane

0xebfc,	// (0x0004d0c0) fs_bigclock_status_signal_pane

0xec05,	// (0x0004d0c9) fs_bigclock_status_title_pane

0xec0e,	// (0x0004d0d2) fs_bigclock_status_signal_pane_g1

0xec17,	// (0x0004d0db) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004e318) fs_bigclock_status_signal_pane_g

0xec1f,	// (0x0004d0e3) fs_bigclock_status_battery_pane_g1

0xec28,	// (0x0004d0ec) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004e31d) fs_bigclock_status_battery_pane_g

0xec30,	// (0x0004d0f4) fs_bigclock_status_title_pane_t1

0xcc86,	// (0x0004b14a) main_fs_bigclock_clock_pane_g1

0xec3e,	// (0x0004d102) main_fs_bigclock_clock_pane_g2

0xec49,	// (0x0004d10d) main_fs_bigclock_clock_pane_g3

0xec49,	// (0x0004d10d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004e322) main_fs_bigclock_clock_pane_g

0xec55,	// (0x0004d119) main_fs_bigclock_clock_pane_t1

0x9840,	// (0x00047d04) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004e32b) main_fs_bigclock_clock_pane_t

0x984f,	// (0x00047d13) list_single_fs_bigclock_indicator_pane_ParamLimits

0x984f,	// (0x00047d13) list_single_fs_bigclock_indicator_pane

0x9860,	// (0x00047d24) list_single_fs_bigclock_pane_ParamLimits

0x9860,	// (0x00047d24) list_single_fs_bigclock_pane

0xec6c,	// (0x0004d130) main_fs_bigclock_indicator_pane_t1

0xec7b,	// (0x0004d13f) list_single_fs_bigclock_pane_g1

0xec83,	// (0x0004d147) list_single_fs_bigclock_pane_t1

0xcc86,	// (0x0004b14a) main_fs_bigclock_swipe_pane_g1

0xecda,	// (0x0004d19e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004e33c) main_fs_bigclock_swipe_pane_g

0xece2,	// (0x0004d1a6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece2,	// (0x0004d1a6) main_fs_bigclock_swipe_pane_t1

0x44bd,	// (0x00042981) call_type_pane_ParamLimits

0xa160,	// (0x00048624) main_btmg_pane

0x1bd8,	// (0x0004009c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1bd8,	// (0x0004009c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004e2af) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004e2af) list_single_cale_mrui_row_pane_g

0x1d04,	// (0x000401c8) list_recal_vselct_arw_lo_pane

0xeb0c,	// (0x0004cfd0) list_recal_vselct_arw_up_pane

0x1d0c,	// (0x000401d0) list_recal_vselct_pane

0x98b6,	// (0x00047d7a) btmg_button_pane

0x98c2,	// (0x00047d86) main_btmg_pane_g1

0xa160,	// (0x00048624) bg_button_pane_cp044

0xecff,	// (0x0004d1c3) btmg_button_pane_t1

0xc821,	// (0x0004ace5) aid_listscroll_gen

0xa9f9,	// (0x00048ebd) main_cntbar_detail_pane

0xe836,	// (0x0004ccfa) list_cmail_folder_pane

0xe846,	// (0x0004cd0a) sp_fs_scroll_pane_cp03_ParamLimits

0x1d9c,	// (0x00040260) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d9c,	// (0x00040260) list_single_fs_dyc_pane_cp01

0xed0d,	// (0x0004d1d1) aid_size_cmail_indent

0x1dbd,	// (0x00040281) list_single_dyc_row_pane_cp01

0x98ea,	// (0x00047dae) cntbar_detail_list_pane_ParamLimits

0x98ea,	// (0x00047dae) cntbar_detail_list_pane

0x992a,	// (0x00047dee) main_cntbar_detail_cont_pane_ParamLimits

0x992a,	// (0x00047dee) main_cntbar_detail_cont_pane

0x44b1,	// (0x00042975) scroll_pane_cp032_ParamLimits

0x44b1,	// (0x00042975) scroll_pane_cp032

0x9936,	// (0x00047dfa) cntbar_detail_list_event_pane_ParamLimits

0x9936,	// (0x00047dfa) cntbar_detail_list_event_pane

0x98f8,	// (0x00047dbc) cntbar_detail_list_shct_pane

0xad7b,	// (0x0004923f) aid_list_gen

0xed16,	// (0x0004d1da) aid_scroll

0xed1f,	// (0x0004d1e3) aid_size_touch_scroll_bar

0x8532,	// (0x000469f6) aid_list_double

0xed28,	// (0x0004d1ec) aid_list_single

0x123e,	// (0x0003f702) aid_list_single_lg

0x1dc6,	// (0x0004028a) aid_list_z_g_a_sm

0x1dce,	// (0x00040292) aid_list_z_g_d

0x1dd6,	// (0x0004029a) aid_txt_z_prm

0x1de6,	// (0x000402aa) aid_txt_z_prm_cp01

0x1df4,	// (0x000402b8) aid_txt_z_sec

0x9946,	// (0x00047e0a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9946,	// (0x00047e0a) main_cntbar_detail_cont_pane_g1

0x9953,	// (0x00047e17) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9953,	// (0x00047e17) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004e341) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004e341) main_cntbar_detail_cont_pane_g

0xed31,	// (0x0004d1f5) main_cntbar_detail_cont_pane_t1

0xed3f,	// (0x0004d203) main_cntbar_detail_cont_pane_t2

0xed4d,	// (0x0004d211) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004e346) main_cntbar_detail_cont_pane_t

0x995f,	// (0x00047e23) cell_cntbar_detail_list_shct_pane_ParamLimits

0x995f,	// (0x00047e23) cell_cntbar_detail_list_shct_pane

0xed5b,	// (0x0004d21f) cntbar_detail_list_shct_pane_g1

0xed64,	// (0x0004d228) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004e34d) cntbar_detail_list_shct_pane_g

0x9973,	// (0x00047e37) cntbar_detail_list_event_pane_g1_ParamLimits

0x9973,	// (0x00047e37) cntbar_detail_list_event_pane_g1

0x997f,	// (0x00047e43) cntbar_detail_list_event_pane_g2_ParamLimits

0x997f,	// (0x00047e43) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004e352) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004e352) cntbar_detail_list_event_pane_g

0x99ed,	// (0x00047eb1) cntbar_detail_list_event_pane_t1_ParamLimits

0x99ed,	// (0x00047eb1) cntbar_detail_list_event_pane_t1

0x9a02,	// (0x00047ec6) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a02,	// (0x00047ec6) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004e35f) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004e35f) cntbar_detail_list_event_pane_t

0xcc86,	// (0x0004b14a) cell_cntbar_detail_list_shct_pane_g1

0x4890,	// (0x00042d54) navi_pane_mv_g3

0xa9f9,	// (0x00048ebd) main_cntbar_detail_pane_ParamLimits

0xa160,	// (0x00048624) main_notif_wgt_pane

0x6edd,	// (0x000453a1) aid_tch_main_mp4_pane_g4

0x711c,	// (0x000455e0) popup_slider_window_cp02

0x1cfa,	// (0x000401be) list_recal_day_event_pane

0x98ca,	// (0x00047d8e) cntbar_detail_btn_pane_ParamLimits

0x98ca,	// (0x00047d8e) cntbar_detail_btn_pane

0x98da,	// (0x00047d9e) cntbar_detail_btn_pane_cp01_ParamLimits

0x98da,	// (0x00047d9e) cntbar_detail_btn_pane_cp01

0x98f8,	// (0x00047dbc) cntbar_detail_list_shct_pane_ParamLimits

0x9904,	// (0x00047dc8) cntbar_detail_pane_g1_ParamLimits

0x9904,	// (0x00047dc8) cntbar_detail_pane_g1

0x9914,	// (0x00047dd8) cntbar_detail_pane_t1_ParamLimits

0x9914,	// (0x00047dd8) cntbar_detail_pane_t1

0x998b,	// (0x00047e4f) cntbar_detail_list_event_pane_g3_ParamLimits

0x998b,	// (0x00047e4f) cntbar_detail_list_event_pane_g3

0x99a3,	// (0x00047e67) cntbar_detail_list_event_pane_g4_ParamLimits

0x99a3,	// (0x00047e67) cntbar_detail_list_event_pane_g4

0x99bb,	// (0x00047e7f) cntbar_detail_list_event_pane_g5_ParamLimits

0x99bb,	// (0x00047e7f) cntbar_detail_list_event_pane_g5

0x99d3,	// (0x00047e97) cntbar_detail_list_event_pane_g6_ParamLimits

0x99d3,	// (0x00047e97) cntbar_detail_list_event_pane_g6

0x9a17,	// (0x00047edb) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a17,	// (0x00047edb) cntbar_detail_list_event_pane_t3

0x9a29,	// (0x00047eed) popup_notif_wgt_window_ParamLimits

0x9a29,	// (0x00047eed) popup_notif_wgt_window

0x9a39,	// (0x00047efd) popup_submenu_window_cp01_ParamLimits

0x9a39,	// (0x00047efd) popup_submenu_window_cp01

0xaad0,	// (0x00048f94) bg_popup_window_pane_cp10

0xed6d,	// (0x0004d231) listscroll_notif_wgt_pane

0xed7f,	// (0x0004d243) list_notif_wgt_window

0xed88,	// (0x0004d24c) scroll_pane_cp033

0x9a49,	// (0x00047f0d) list_notif_wgt_row_pane_ParamLimits

0x9a49,	// (0x00047f0d) list_notif_wgt_row_pane

0xed91,	// (0x0004d255) aid_size_list_notif_wgt_del

0xed9e,	// (0x0004d262) list_notif_wgt_row_pane_g1

0xedaa,	// (0x0004d26e) list_notif_wgt_row_pane_g2

0xedbe,	// (0x0004d282) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004e366) list_notif_wgt_row_pane_g

0xedcb,	// (0x0004d28f) list_notif_wgt_row_pane_t1

0xede1,	// (0x0004d2a5) list_notif_wgt_row_pane_t2

0xedf3,	// (0x0004d2b7) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004e36d) list_notif_wgt_row_pane_t

0xd931,	// (0x0004bdf5) list_recal_day_event_pane_g1

0xee05,	// (0x0004d2c9) list_recal_day_event_pane_t1

0xa160,	// (0x00048624) bg_button_pane_cp045

0xee14,	// (0x0004d2d8) cntbar_detail_btn_pane_t1

0xc835,	// (0x0004acf9) main_callh_pane_ParamLimits

0xc835,	// (0x0004acf9) main_callh_pane

0xa160,	// (0x00048624) main_coverflow0_pane

0xa160,	// (0x00048624) main_wgtman_pane

0x90d0,	// (0x00047594) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x90d0,	// (0x00047594) main_fs_bigclock_unlock_btn_pane

0x9406,	// (0x000478ca) bg_button_pane_cp16

0x9416,	// (0x000478da) cell_tport_appsw_pane_g3

0x9a5a,	// (0x00047f1e) cf0_flow_pane_ParamLimits

0x9a5a,	// (0x00047f1e) cf0_flow_pane

0xee22,	// (0x0004d2e6) listscroll_cf0_pane

0xee2d,	// (0x0004d2f1) main_cf0_pane_g1

0x9a69,	// (0x00047f2d) main_cf0_pane_t1_ParamLimits

0x9a69,	// (0x00047f2d) main_cf0_pane_t1

0x9a7d,	// (0x00047f41) main_cf0_pane_t2_ParamLimits

0x9a7d,	// (0x00047f41) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004e379) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004e379) main_cf0_pane_t

0xee3f,	// (0x0004d303) scroll_pane_cp11

0x9a91,	// (0x00047f55) cf0_flow_pane_g1

0x9a99,	// (0x00047f5d) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004e37e) cf0_flow_pane_g

0x9aa1,	// (0x00047f65) cf0_flow_pane_t1

0xa160,	// (0x00048624) main_call6_pane

0xa160,	// (0x00048624) main_calllock_pane

0x9aaf,	// (0x00047f73) call6_btn_grp_pane_ParamLimits

0x9aaf,	// (0x00047f73) call6_btn_grp_pane

0x9abc,	// (0x00047f80) call6_pane_g1_ParamLimits

0x9abc,	// (0x00047f80) call6_pane_g1

0x9acc,	// (0x00047f90) popup_call6_1st_window_ParamLimits

0x9acc,	// (0x00047f90) popup_call6_1st_window

0x9ada,	// (0x00047f9e) popup_call6_2nd_window_ParamLimits

0x9ada,	// (0x00047f9e) popup_call6_2nd_window

0x9ae8,	// (0x00047fac) cell_call6_btn_pane_ParamLimits

0x9ae8,	// (0x00047fac) cell_call6_btn_pane

0xaad0,	// (0x00048f94) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x0004d30e) popup_call6_1st_window_g1

0xee52,	// (0x0004d316) popup_call6_1st_window_g2

0xee5a,	// (0x0004d31e) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004e383) popup_call6_1st_window_g

0xee62,	// (0x0004d326) popup_call6_1st_window_t1

0xee71,	// (0x0004d335) popup_call6_1st_window_t2

0xee81,	// (0x0004d345) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004e38a) popup_call6_1st_window_t

0xaad0,	// (0x00048f94) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x0004d30e) popup_call6_2nd_window_g1

0xee52,	// (0x0004d316) popup_call6_2nd_window_g2

0xee5a,	// (0x0004d31e) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004e383) popup_call6_2nd_window_g

0xee62,	// (0x0004d326) popup_call6_2nd_window_t1

0xa160,	// (0x00048624) bg_button_pane_cp15

0xee91,	// (0x0004d355) cell_call6_btn_pane_g1

0xee9a,	// (0x0004d35e) cell_call6_btn_pane_t1

0x9af7,	// (0x00047fbb) listscroll_wgtman_pane_ParamLimits

0x9af7,	// (0x00047fbb) listscroll_wgtman_pane

0x9b13,	// (0x00047fd7) wgtman_btn_pane_ParamLimits

0x9b13,	// (0x00047fd7) wgtman_btn_pane

0xb2c0,	// (0x00049784) aid_scroll_copy1

0xeea9,	// (0x0004d36d) list_wgtman_pane

0x9b48,	// (0x0004800c) wgtman_btn_pane_g1_ParamLimits

0x9b48,	// (0x0004800c) wgtman_btn_pane_g1

0x9b70,	// (0x00048034) wgtman_btn_pane_t1_ParamLimits

0x9b70,	// (0x00048034) wgtman_btn_pane_t1

0xeeb3,	// (0x0004d377) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x0004d377) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004e391) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004e391) wgtman_btn_pane_t

0x9ba7,	// (0x0004806b) listrow_wgtman_pane_ParamLimits

0x9ba7,	// (0x0004806b) listrow_wgtman_pane

0x9bbb,	// (0x0004807f) listrow_wgtman_pane_g1

0x9bc8,	// (0x0004808c) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004e396) listrow_wgtman_pane_g

0x1e02,	// (0x000402c6) listrow_wgtman_pane_t1

0x1e1a,	// (0x000402de) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004e39b) listrow_wgtman_pane_t

0x1e40,	// (0x00040304) wait_bar_pane_cp09

0xeeca,	// (0x0004d38e) main_calllock_btn_pane

0xeed4,	// (0x0004d398) main_calllock_pane_g1

0xa160,	// (0x00048624) bg_button_pane_cp17

0xeee0,	// (0x0004d3a4) main_calllock_btn_pane_g1

0xeee9,	// (0x0004d3ad) main_calllock_btn_pane_t1

0xa160,	// (0x00048624) main_dialer3_pane

0xa160,	// (0x00048624) main_fmrd2_pane

0xcc86,	// (0x0004b14a) main_fs_bigclock_unlock_btn_pane_g1

0xef00,	// (0x0004d3c4) main_fs_bigclock_unlock_btn_pane_t1

0x9be6,	// (0x000480aa) area_fmrd2_info_pane_ParamLimits

0x9be6,	// (0x000480aa) area_fmrd2_info_pane

0x9bf2,	// (0x000480b6) area_fmrd2_visual_pane_ParamLimits

0x9bf2,	// (0x000480b6) area_fmrd2_visual_pane

0x9c00,	// (0x000480c4) fmrd2_indi_pane_ParamLimits

0x9c00,	// (0x000480c4) fmrd2_indi_pane

0x9c0d,	// (0x000480d1) area_fmrd2_visual_pane_g1

0x9c15,	// (0x000480d9) area_fmrd2_visual_pane_t1

0x9c25,	// (0x000480e9) area_fmrd2_visual_pane_t2

0x9c35,	// (0x000480f9) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004e3a5) area_fmrd2_visual_pane_t

0x9c45,	// (0x00048109) area_fmrd2_info_pane_g1

0x9c4d,	// (0x00048111) area_fmrd2_info_pane_t1

0x9c5d,	// (0x00048121) area_fmrd2_info_pane_t2

0x9c6d,	// (0x00048131) area_fmrd2_info_pane_t3

0x9c7d,	// (0x00048141) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004e3ac) area_fmrd2_info_pane_t

0x9c8d,	// (0x00048151) fmrd2_indi_pane_t1

0x9c9d,	// (0x00048161) fmrd2_indi_pane_t2

0x9cad,	// (0x00048171) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004e3b5) fmrd2_indi_pane_t

0xe4a1,	// (0x0004c965) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a1,	// (0x0004c965) list_single_fs_bigclock_indicator_pane_g5

0xe551,	// (0x0004ca15) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe551,	// (0x0004ca15) list_single_fs_bigclock_indicator_pane_t5

0x9594,	// (0x00047a58) aid_cell_bcale_month_pane_ParamLimits

0x9594,	// (0x00047a58) aid_cell_bcale_month_pane

0x95b2,	// (0x00047a76) bcale_month_pane_ParamLimits

0x95b2,	// (0x00047a76) bcale_month_pane

0x95ce,	// (0x00047a92) bcale_preview_pane_ParamLimits

0x95ce,	// (0x00047a92) bcale_preview_pane

0xec83,	// (0x0004d147) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca2,	// (0x0004d166) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca2,	// (0x0004d166) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004e337) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004e337) list_single_fs_bigclock_pane_t

0xeef8,	// (0x0004d3bc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004e3a0) main_fs_bigclock_unlock_btn_pane_g

0x9cbd,	// (0x00048181) aid_dia3_key_size_ParamLimits

0x9cbd,	// (0x00048181) aid_dia3_key_size

0x9cc9,	// (0x0004818d) aid_dia3_listrow_size_ParamLimits

0x9cc9,	// (0x0004818d) aid_dia3_listrow_size

0x9cd9,	// (0x0004819d) dia3_keypad_fun_pane_ParamLimits

0x9cd9,	// (0x0004819d) dia3_keypad_fun_pane

0x9ce9,	// (0x000481ad) dia3_keypad_num_pane_ParamLimits

0x9ce9,	// (0x000481ad) dia3_keypad_num_pane

0x9cf9,	// (0x000481bd) dia3_listscroll_pane_ParamLimits

0x9cf9,	// (0x000481bd) dia3_listscroll_pane

0x9d07,	// (0x000481cb) dia3_numentry_pane_ParamLimits

0x9d07,	// (0x000481cb) dia3_numentry_pane

0xef0e,	// (0x0004d3d2) dia3_list_pane

0xef19,	// (0x0004d3dd) scroll_pane_cp12

0xa160,	// (0x00048624) bg_dia3_numentry_pane

0x9d15,	// (0x000481d9) dia3_numentry_pane_t1

0x9d24,	// (0x000481e8) cell_dia3_key_num_pane

0x9d2c,	// (0x000481f0) cell_dia3_key0_fun_pane_ParamLimits

0x9d2c,	// (0x000481f0) cell_dia3_key0_fun_pane

0x9d39,	// (0x000481fd) cell_dia3_key1_fun_pane_ParamLimits

0x9d39,	// (0x000481fd) cell_dia3_key1_fun_pane

0x9d46,	// (0x0004820a) dia3_listrow_pane

0xe19f,	// (0x0004c663) bg_dia3_numentry_pane_g1

0xa160,	// (0x00048624) bg_button_pane_cp21

0xef24,	// (0x0004d3e8) cell_dia3_key_num_pane_t1

0xef32,	// (0x0004d3f6) cell_dia3_key_num_pane_t2

0xef41,	// (0x0004d405) cell_dia3_key_num_pane_t3

0xef50,	// (0x0004d414) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004e3bc) cell_dia3_key_num_pane_t

0xa160,	// (0x00048624) bg_button_pane_cp19

0x9d53,	// (0x00048217) cell_dia3_key0_fun_pane_g1

0xa160,	// (0x00048624) bg_button_pane_cp20

0x9d5b,	// (0x0004821f) cell_dia3_key1_fun_pane_g1

0x9d63,	// (0x00048227) area_left_week_number_pane

0x9d76,	// (0x0004823a) area_top_day_name_pane

0x9d84,	// (0x00048248) frame_month_view_pane

0xef5f,	// (0x0004d423) grid_month_view_pane

0x9d99,	// (0x0004825d) cell_top_day_name_pane_ParamLimits

0x9d99,	// (0x0004825d) cell_top_day_name_pane

0x9db5,	// (0x00048279) cell_area_left_week_number_pane_ParamLimits

0x9db5,	// (0x00048279) cell_area_left_week_number_pane

0x9dd6,	// (0x0004829a) cell_month_view_pane_ParamLimits

0x9dd6,	// (0x0004829a) cell_month_view_pane

0xef6d,	// (0x0004d431) frm_month_g1

0x9e02,	// (0x000482c6) frm_month_g2

0x9e13,	// (0x000482d7) frm_month_g3

0x9e24,	// (0x000482e8) frm_month_g4

0x9e35,	// (0x000482f9) frm_month_g5

0x9e46,	// (0x0004830a) frm_month_g6

0x9e59,	// (0x0004831d) frm_month_g7

0xef7a,	// (0x0004d43e) frm_month_g8

0x9e6c,	// (0x00048330) frm_month_g9

0x9e79,	// (0x0004833d) frm_month_g10

0x9e86,	// (0x0004834a) frm_month_g11

0x9e93,	// (0x00048357) frm_month_g12

0x9ea0,	// (0x00048364) frm_month_g13

0x9eaf,	// (0x00048373) frm_month_g14

0x9ebe,	// (0x00048382) frm_month_g15

0x9ecd,	// (0x00048391) frm_month_g16

0x000f,

0xff01,	// (0x0004e3c5) frm_month_g

0xef87,	// (0x0004d44b) cell_top_day_name_pane_t1

0x9edc,	// (0x000483a0) cell_area_left_week_number_pane_g1

0x9eeb,	// (0x000483af) cell_area_left_week_number_pane_t1

0xceca,	// (0x0004b38e) cell_month_view_pane_g1

0x9f01,	// (0x000483c5) cell_month_view_pane_t1

0xa160,	// (0x00048624) main_fps_pane

0xe726,	// (0x0004cbea) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe726,	// (0x0004cbea) cmail_ddmenu_btn02_pane_cp1

0xe742,	// (0x0004cc06) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe742,	// (0x0004cc06) cmail_ddmenu_btn02_pane_cp2

0x97bf,	// (0x00047c83) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97bf,	// (0x00047c83) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004e2ea) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004e2ea) cmail_ddmenu_btn02_pane_g

0x97dd,	// (0x00047ca1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97dd,	// (0x00047ca1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004e2ef) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004e2ef) cmail_ddmenu_btn02_pane_t

0x9f17,	// (0x000483db) fps_text_pane_ParamLimits

0x9f17,	// (0x000483db) fps_text_pane

0x9f24,	// (0x000483e8) main_fps_pane_g1_ParamLimits

0x9f24,	// (0x000483e8) main_fps_pane_g1

0x9f30,	// (0x000483f4) wait_bar_pane_cp010_ParamLimits

0x9f30,	// (0x000483f4) wait_bar_pane_cp010

0x9f3c,	// (0x00048400) fps_text_pane_t1_ParamLimits

0x9f3c,	// (0x00048400) fps_text_pane_t1

0x7542,	// (0x00045a06) cam4_image_uncrop_pane_g1

0x754b,	// (0x00045a0f) cam4_image_uncrop_pane_g2

0x7554,	// (0x00045a18) cam4_image_uncrop_pane_g3

0x755d,	// (0x00045a21) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004ddb2) cam4_image_uncrop_pane_g

0x9d46,	// (0x0004820a) dia3_listrow_pane_ParamLimits

0xa160,	// (0x00048624) main_phob2_pane

0x93e8,	// (0x000478ac) cell_tport_appsw_pane_cp02_ParamLimits

0x93e8,	// (0x000478ac) cell_tport_appsw_pane_cp02

0x93f7,	// (0x000478bb) cell_tport_appsw_pane_cp03_ParamLimits

0x93f7,	// (0x000478bb) cell_tport_appsw_pane_cp03

0xa160,	// (0x00048624) phob2_contact_card_pane

0xa160,	// (0x00048624) phob2_listscroll_pane

0xef9a,	// (0x0004d45e) phob2_list_pane

0xefa2,	// (0x0004d466) scroll_pane_cp034

0x9f55,	// (0x00048419) phob2_cc_data_pane_ParamLimits

0x9f55,	// (0x00048419) phob2_cc_data_pane

0x9f71,	// (0x00048435) phob2_cc_listscroll_pane_ParamLimits

0x9f71,	// (0x00048435) phob2_cc_listscroll_pane

0x9f8d,	// (0x00048451) list_double_large_graphic_phob2_pane_ParamLimits

0x9f8d,	// (0x00048451) list_double_large_graphic_phob2_pane

0x9fa5,	// (0x00048469) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fa5,	// (0x00048469) list_double_large_graphic_phob2_pane_g1

0x1e52,	// (0x00040316) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e52,	// (0x00040316) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004e3e6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004e3e6) list_double_large_graphic_phob2_pane_g

0x1e5e,	// (0x00040322) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e5e,	// (0x00040322) list_double_large_graphic_phob2_pane_t1

0x1e73,	// (0x00040337) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e73,	// (0x00040337) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004e3eb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004e3eb) list_double_large_graphic_phob2_pane_t

0xa160,	// (0x00048624) list_highlight_pane_cp024

0x9fbb,	// (0x0004847f) phob2_cc_button_pane

0x9fc3,	// (0x00048487) phob2_cc_data_pane_g1_ParamLimits

0x9fc3,	// (0x00048487) phob2_cc_data_pane_g1

0x9fcf,	// (0x00048493) phob2_cc_data_pane_g2_ParamLimits

0x9fcf,	// (0x00048493) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004e3f0) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004e3f0) phob2_cc_data_pane_g

0x9fdb,	// (0x0004849f) phob2_cc_data_pane_t1_ParamLimits

0x9fdb,	// (0x0004849f) phob2_cc_data_pane_t1

0x9fed,	// (0x000484b1) phob2_cc_data_pane_t2_ParamLimits

0x9fed,	// (0x000484b1) phob2_cc_data_pane_t2

0x9fff,	// (0x000484c3) phob2_cc_data_pane_t3_ParamLimits

0x9fff,	// (0x000484c3) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004e3f5) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004e3f5) phob2_cc_data_pane_t

0xefaa,	// (0x0004d46e) phob2_cc_list_pane_ParamLimits

0xefaa,	// (0x0004d46e) phob2_cc_list_pane

0xdcd4,	// (0x0004c198) scroll_pane_cp035_ParamLimits

0xdcd4,	// (0x0004c198) scroll_pane_cp035

0xa9f9,	// (0x00048ebd) bg_button_pane_cp033

0xefb6,	// (0x0004d47a) phob2_cc_button_pane_g1

0xefc2,	// (0x0004d486) phob2_cc_button_pane_t1

0xefd7,	// (0x0004d49b) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004e3fc) phob2_cc_button_pane_t

0xa011,	// (0x000484d5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa011,	// (0x000484d5) list_double_large_graphic_phob2_cc_pane

0xa02d,	// (0x000484f1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa02d,	// (0x000484f1) list_double_large_graphic_phob2_cc_pane_g1

0x1e85,	// (0x00040349) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e85,	// (0x00040349) list_double_large_graphic_phob2_cc_pane_g2

0x1e94,	// (0x00040358) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e94,	// (0x00040358) list_double_large_graphic_phob2_cc_pane_g3

0x1ea3,	// (0x00040367) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1ea3,	// (0x00040367) list_double_large_graphic_phob2_cc_pane_g4

0x1eb4,	// (0x00040378) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1eb4,	// (0x00040378) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004e401) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004e401) list_double_large_graphic_phob2_cc_pane_g

0x1ec3,	// (0x00040387) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1ec3,	// (0x00040387) list_double_large_graphic_phob2_cc_pane_t1

0x1eec,	// (0x000403b0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1eec,	// (0x000403b0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004e40c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004e40c) list_double_large_graphic_phob2_cc_pane_t

0xefe9,	// (0x0004d4ad) list_highlight_pane_cp025_ParamLimits

0xefe9,	// (0x0004d4ad) list_highlight_pane_cp025

0xa9f9,	// (0x00048ebd) bg_button_pane_cp033_ParamLimits

0xefb6,	// (0x0004d47a) phob2_cc_button_pane_g1_ParamLimits

0xefc2,	// (0x0004d486) phob2_cc_button_pane_t1_ParamLimits

0xefd7,	// (0x0004d49b) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004e3fc) phob2_cc_button_pane_t_ParamLimits

0x219f,	// (0x00040663) popup_wgtman_window

0xd802,	// (0x0004bcc6) scroll_pane_cp038

0x9b30,	// (0x00047ff4) wgtman_btn_pane_cp_01_ParamLimits

0x9b30,	// (0x00047ff4) wgtman_btn_pane_cp_01

0xeff7,	// (0x0004d4bb) wgtman_content_pane

0xf000,	// (0x0004d4c4) wgtman_heading_pane

0xa160,	// (0x00048624) bg_heading_pane_cp02

0xf009,	// (0x0004d4cd) wgtman_heading_pane_g1

0xf011,	// (0x0004d4d5) wgtman_heading_pane_t1

0xf01f,	// (0x0004d4e3) scroll_pane_cp036

0xf027,	// (0x0004d4eb) wgtman_list_pane

0xf02f,	// (0x0004d4f3) wgtman_list_pane_t1_ParamLimits

0xf02f,	// (0x0004d4f3) wgtman_list_pane_t1

0x749f,	// (0x00045963) cam4_grid_pane

0x1012,	// (0x0003f4d6) bg_button_pane_cp015_ParamLimits

0x815d,	// (0x00046621) bg_button_pane_cp016_ParamLimits

0x8170,	// (0x00046634) bg_button_pane_cp017_ParamLimits

0x1056,	// (0x0003f51a) popup_vitu2_query_window_g3_ParamLimits

0x1056,	// (0x0003f51a) popup_vitu2_query_window_g3

0x10cf,	// (0x0003f593) popup_vitu2_query_window_t6_ParamLimits

0x10cf,	// (0x0003f593) popup_vitu2_query_window_t6

0x10fa,	// (0x0003f5be) popup_vitu2_query_window_t7_ParamLimits

0x10fa,	// (0x0003f5be) popup_vitu2_query_window_t7

0xecc6,	// (0x0004d18a) cam4_grid_pane_g1

0xeccf,	// (0x0004d193) cam4_grid_pane_g2

0xf049,	// (0x0004d50d) cam4_grid_pane_g3

0xf052,	// (0x0004d516) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004e411) cam4_grid_pane_g

0x32c4,	// (0x00041788) aid_placing_vt_slider_lsc_ParamLimits

0x35f7,	// (0x00041abb) vidtel_button_pane_ParamLimits

0x35f7,	// (0x00041abb) vidtel_button_pane

0xa160,	// (0x00048624) bg_button_pane_cp034

0xa03e,	// (0x00048502) vidtel_button_pane_g1

0xa046,	// (0x0004850a) vidtel_button_pane_t1

0xd921,	// (0x0004bde5) aid_size_vtel_slider_touch

0xdcd4,	// (0x0004c198) scroll_pane_cp039

0xe1dd,	// (0x0004c6a1) ncim_query_button_pane_cp01_ParamLimits

0xe1fc,	// (0x0004c6c0) ncimui_query_pane_g1_ParamLimits

0xa9f9,	// (0x00048ebd) input_focus_pane_cp012_ParamLimits

0xe221,	// (0x0004c6e5) ncim_query_entry_pane_t1_ParamLimits

0xdcd4,	// (0x0004c198) scroll_pane_cp039_ParamLimits

0x4802,	// (0x00042cc6) navi_pane_bcale_mc_g1

0x480a,	// (0x00042cce) navi_pane_bcale_mc_t1

0xe77f,	// (0x0004cc43) main_sp_fs_email_pane_g1

0xe78b,	// (0x0004cc4f) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0004e1a2) main_sp_fs_email_pane_g

0xea10,	// (0x0004ced4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea10,	// (0x0004ced4) list_single_cale_mrui_row_pane_g3

0x1d5a,	// (0x0004021e) list_single_recal_day_pane_g5_event_pane

0x1d70,	// (0x00040234) list_single_recal_day_pane_g7

0xf05d,	// (0x0004d521) list_recal_day_event_pane_cp01

0xf066,	// (0x0004d52a) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x0004d532) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x0004d53a) list_recal_vselct_pane_cp01

0xd931,	// (0x0004bdf5) list_recal_day_event_pane_cp01_g1

0x1f15,	// (0x000403d9) list_recal_day_event_pane_cp01_t1

0x1d78,	// (0x0004023c) list_single_recal_day_pane_t1_ParamLimits

0x1d8a,	// (0x0004024e) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004e2ff) list_single_recal_day_pane_t_ParamLimits

0xa827,	// (0x00048ceb) bg_notes_pane_ParamLimits

0xa8ca,	// (0x00048d8e) list_notes_pane_ParamLimits

0x24ee,	// (0x000409b2) scroll_pane_cp06_ParamLimits

0xa8ec,	// (0x00048db0) main_notes_pane_ParamLimits

0xa160,	// (0x00048624) main_welc_pane

0xa05c,	// (0x00048520) main_welc_body_pane_ParamLimits

0xa05c,	// (0x00048520) main_welc_body_pane

0xa077,	// (0x0004853b) main_welc_opti_pane_ParamLimits

0xa077,	// (0x0004853b) main_welc_opti_pane

0xa0ac,	// (0x00048570) main_welc_pane_t1_ParamLimits

0xa0ac,	// (0x00048570) main_welc_pane_t1

0xa0ca,	// (0x0004858e) main_welc_body_row_pane_ParamLimits

0xa0ca,	// (0x0004858e) main_welc_body_row_pane

0xa0e4,	// (0x000485a8) main_welc_opti_row_pane_ParamLimits

0xa0e4,	// (0x000485a8) main_welc_opti_row_pane

0xf080,	// (0x0004d544) main_welc_opti_row_pane_g1

0xf088,	// (0x0004d54c) main_welc_opti_row_pane_t1

0xf097,	// (0x0004d55b) main_welc_body_row_pane_t1

0xed77,	// (0x0004d23b) popup_notif_wgt_heading_pane

0xed91,	// (0x0004d255) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x0004d262) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x0004d26e) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x0004d282) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004e366) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x0004d28f) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x0004d2a5) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x0004d2b7) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004e36d) list_notif_wgt_row_pane_t_ParamLimits

0x9bbb,	// (0x0004807f) listrow_wgtman_pane_g1_ParamLimits

0x9bc8,	// (0x0004808c) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004e396) listrow_wgtman_pane_g_ParamLimits

0x1e02,	// (0x000402c6) listrow_wgtman_pane_t1_ParamLimits

0x1e1a,	// (0x000402de) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004e39b) listrow_wgtman_pane_t_ParamLimits

0x1e40,	// (0x00040304) wait_bar_pane_cp09_ParamLimits

0xa160,	// (0x00048624) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004d56a) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004d572) popup_notif_wgt_heading_pane_t1

0xa160,	// (0x00048624) main_vids_pane

0xa160,	// (0x00048624) vids_listscroll_pane

0xa0f5,	// (0x000485b9) scroll_pane_cp040

0xa160,	// (0x00048624) vids_list_pane

0xa100,	// (0x000485c4) vids_list_double_pane_ParamLimits

0xa100,	// (0x000485c4) vids_list_double_pane

0xa113,	// (0x000485d7) vids_list_double_pane_g1

0xa11c,	// (0x000485e0) vids_list_double_pane_t1

0xa12c,	// (0x000485f0) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004e41f) vids_list_double_pane_t

0xa9f9,	// (0x00048ebd) main_ncimui_pane_ParamLimits

0x8c80,	// (0x00047144) main_ncimui_pane_g1_ParamLimits

0x8c8e,	// (0x00047152) main_ncimui_pane_g2_ParamLimits

0x8c8e,	// (0x00047152) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0004e0a7) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0004e0a7) main_ncimui_pane_g

0xa092,	// (0x00048556) main_welc_pane_g1_ParamLimits

0xa092,	// (0x00048556) main_welc_pane_g1

0xa09e,	// (0x00048562) main_welc_pane_g2_ParamLimits

0xa09e,	// (0x00048562) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004e41a) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004e41a) main_welc_pane_g

0xa827,	// (0x00048ceb) listscroll_mce_pane_ParamLimits

0x48cc,	// (0x00042d90) wait_bar_pane_cp10

0xc829,	// (0x0004aced) main_cale_day_pane_ParamLimits

0xc829,	// (0x0004aced) main_cale_week_pane_ParamLimits

0xa827,	// (0x00048ceb) main_messa_pane_ParamLimits

0x68a7,	// (0x00044d6b) main_clock2_btn_pane_ParamLimits

0x68a7,	// (0x00044d6b) main_clock2_btn_pane

0xd052,	// (0x0004b516) main_clock2_btn_pane_cp01_ParamLimits

0xd052,	// (0x0004b516) main_clock2_btn_pane_cp01

0xe9e1,	// (0x0004cea5) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x0004d2fb) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004e374) main_cf0_pane_g

0x9d63,	// (0x00048227) area_left_week_number_pane_ParamLimits

0x9d76,	// (0x0004823a) area_top_day_name_pane_ParamLimits

0x9d84,	// (0x00048248) frame_month_view_pane_ParamLimits

0xef5f,	// (0x0004d423) grid_month_view_pane_ParamLimits

0xef6d,	// (0x0004d431) frm_month_g1_ParamLimits

0x9e02,	// (0x000482c6) frm_month_g2_ParamLimits

0x9e13,	// (0x000482d7) frm_month_g3_ParamLimits

0x9e24,	// (0x000482e8) frm_month_g4_ParamLimits

0x9e35,	// (0x000482f9) frm_month_g5_ParamLimits

0x9e46,	// (0x0004830a) frm_month_g6_ParamLimits

0x9e59,	// (0x0004831d) frm_month_g7_ParamLimits

0xef7a,	// (0x0004d43e) frm_month_g8_ParamLimits

0x9e6c,	// (0x00048330) frm_month_g9_ParamLimits

0x9e79,	// (0x0004833d) frm_month_g10_ParamLimits

0x9e86,	// (0x0004834a) frm_month_g11_ParamLimits

0x9e93,	// (0x00048357) frm_month_g12_ParamLimits

0x9ea0,	// (0x00048364) frm_month_g13_ParamLimits

0x9eaf,	// (0x00048373) frm_month_g14_ParamLimits

0x9ebe,	// (0x00048382) frm_month_g15_ParamLimits

0x9ecd,	// (0x00048391) frm_month_g16_ParamLimits

0xff01,	// (0x0004e3c5) frm_month_g_ParamLimits

0xef87,	// (0x0004d44b) cell_top_day_name_pane_t1_ParamLimits

0x9edc,	// (0x000483a0) cell_area_left_week_number_pane_g1_ParamLimits

0x9eeb,	// (0x000483af) cell_area_left_week_number_pane_t1_ParamLimits

0xceca,	// (0x0004b38e) cell_month_view_pane_g1_ParamLimits

0x9f01,	// (0x000483c5) cell_month_view_pane_t1_ParamLimits

0xa81f,	// (0x00048ce3) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004d580) main_clock2_btn_pane_t1

0xa9f9,	// (0x00048ebd) listscroll_cmail_pane_ParamLimits

0xe77f,	// (0x0004cc43) main_sp_fs_email_pane_g1_ParamLimits

0xe78b,	// (0x0004cc4f) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0004e1a2) main_sp_fs_email_pane_g_ParamLimits

0xeaed,	// (0x0004cfb1) list_recal_day_pane_ParamLimits

0xeafe,	// (0x0004cfc2) mian_recal_day_pane_t1

0x1726,	// (0x0003fbea) list_single_dyc_row_text_pane_t4_ParamLimits

0x1726,	// (0x0003fbea) list_single_dyc_row_text_pane_t4

0x1763,	// (0x0003fc27) list_single_dyc_row_text_pane_t5_ParamLimits

0x1763,	// (0x0003fc27) list_single_dyc_row_text_pane_t5

0x17d9,	// (0x0003fc9d) list_single_dyc_row_text_pane_t6_ParamLimits

0x17d9,	// (0x0003fc9d) list_single_dyc_row_text_pane_t6

0xaec0,	// (0x00049384) aid_mgn_list_cale_time_pane

0xa9f9,	// (0x00048ebd) main_gallery2_pane_ParamLimits

0xd066,	// (0x0004b52a) main_clock2_pane_cp01_t1

0xd076,	// (0x0004b53a) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004dc88) main_clock2_pane_cp01_t

0x29ea,	// (0x00040eae) cale_week_scroll_pane_g16_ParamLimits

0x29ea,	// (0x00040eae) cale_week_scroll_pane_g16

0xaad0,	// (0x00048f94) vorec_slider_pane

0xa046,	// (0x0004850a) vidtel_button_pane_t1_ParamLimits

0xcc86,	// (0x0004b14a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xec3e,	// (0x0004d102) main_fs_bigclock_clock_pane_g2_ParamLimits

0xec49,	// (0x0004d10d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xec49,	// (0x0004d10d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0004e322) main_fs_bigclock_clock_pane_g_ParamLimits

0xec55,	// (0x0004d119) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9840,	// (0x00047d04) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0004e32b) main_fs_bigclock_clock_pane_t_ParamLimits

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g3_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g4_ParamLimits_sig*,
	&ParameterLimitsTableLV,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_t2_ParamLimits_sig*,
	&ParameterLimitsTableLV,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_t1_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
