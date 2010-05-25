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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001c264 };

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
0x42f5,	// (0x00020559) Screen

0x4301,	// (0x00020565) application_window

0x430d,	// (0x00020571) area_bottom_pane_ParamLimits

0x430d,	// (0x00020571) area_bottom_pane

0x2abd,	// (0x0001ed21) area_top_pane_ParamLimits

0x2abd,	// (0x0001ed21) area_top_pane

0x2b21,	// (0x0001ed85) call_video_uplink_pane_ParamLimits

0x2b21,	// (0x0001ed85) call_video_uplink_pane

0x2b60,	// (0x0001edc4) main_pane_ParamLimits

0x2b60,	// (0x0001edc4) main_pane

0xdf7e,	// (0x0002a1e2) context_pane

0x70a9,	// (0x0002330d) navi_pane

0x70cf,	// (0x00023333) popup_cale_events_window_ParamLimits

0x70cf,	// (0x00023333) popup_cale_events_window

0xdf91,	// (0x0002a1f5) popup_mup_playback_window

0x70e7,	// (0x0002334b) signal_pane

0xbec6,	// (0x0002812a) main_browser_pane

0xc08b,	// (0x000282ef) main_burst_pane

0x311e,	// (0x0001f382) main_calc_pane

0xdf64,	// (0x0002a1c8) main_cale_day_pane

0x4726,	// (0x0002098a) main_cale_month_pane

0xdf64,	// (0x0002a1c8) main_cale_week_pane

0xc08b,	// (0x000282ef) main_call_pane

0xbb98,	// (0x00027dfc) main_call_poc_pane

0xc08b,	// (0x000282ef) main_camera_pane

0xc08b,	// (0x000282ef) main_chi_dic_pane

0xc862,	// (0x00028ac6) main_clock_pane

0xbb98,	// (0x00027dfc) main_fmradio_pane

0xc08b,	// (0x000282ef) main_graph_messa_pane

0xbb98,	// (0x00027dfc) main_help_pane

0xbec6,	// (0x0002812a) main_im_pane

0xbe01,	// (0x00028065) main_image_pane_ParamLimits

0xbe01,	// (0x00028065) main_image_pane

0xbb98,	// (0x00027dfc) main_location2_pane

0xc08b,	// (0x000282ef) main_location_pane

0xbe01,	// (0x00028065) main_messa_pane

0xbb98,	// (0x00027dfc) main_mp2_pane

0xc08b,	// (0x000282ef) main_mp_pane

0xbb98,	// (0x00027dfc) main_msg_pane

0xbb98,	// (0x00027dfc) main_mup_eq_pane

0xbb98,	// (0x00027dfc) main_mup_pane

0xbec6,	// (0x0002812a) main_notes_pane

0xbb98,	// (0x00027dfc) main_pec_pane

0xbb98,	// (0x00027dfc) main_phob_pane

0xbb98,	// (0x00027dfc) main_pinb_pane

0xbb98,	// (0x00027dfc) main_postcard_pane

0xbb98,	// (0x00027dfc) main_qdial_pane

0xc08b,	// (0x000282ef) main_skin_pane

0xbb98,	// (0x00027dfc) main_smil2_pane

0xc08b,	// (0x000282ef) main_smil_pane

0xc08b,	// (0x000282ef) main_video_pane

0xc08b,	// (0x000282ef) main_video_tele_pane

0xbe01,	// (0x00028065) main_viewer_pane_ParamLimits

0xbe01,	// (0x00028065) main_viewer_pane

0xc08b,	// (0x000282ef) main_vorec_pane

0x316a,	// (0x0001f3ce) popup_blid_sat_info_window_ParamLimits

0x316a,	// (0x0001f3ce) popup_blid_sat_info_window

0x318a,	// (0x0001f3ee) popup_dyc_status_message_window_ParamLimits

0x318a,	// (0x0001f3ee) popup_dyc_status_message_window

0x319a,	// (0x0001f3fe) popup_grid_large_graphic_window_ParamLimits

0x319a,	// (0x0001f3fe) popup_grid_large_graphic_window

0x322b,	// (0x0001f48f) popup_loc_request_window_ParamLimits

0x322b,	// (0x0001f48f) popup_loc_request_window

0x3278,	// (0x0001f4dc) popup_wml_address_window_ParamLimits

0x3278,	// (0x0001f4dc) popup_wml_address_window

0x6f8b,	// (0x000231ef) call_muted_g1

0x6c4d,	// (0x00022eb1) popup_call_audio_conf_window_ParamLimits

0x6c4d,	// (0x00022eb1) popup_call_audio_conf_window

0x6f9b,	// (0x000231ff) popup_call_audio_first_window_ParamLimits

0x6f9b,	// (0x000231ff) popup_call_audio_first_window

0x6fdb,	// (0x0002323f) popup_call_audio_in_window_ParamLimits

0x6fdb,	// (0x0002323f) popup_call_audio_in_window

0x6fff,	// (0x00023263) popup_call_audio_out_window_ParamLimits

0x6fff,	// (0x00023263) popup_call_audio_out_window

0x7021,	// (0x00023285) popup_call_audio_second_window_ParamLimits

0x7021,	// (0x00023285) popup_call_audio_second_window

0x7051,	// (0x000232b5) popup_call_audio_wait_window_ParamLimits

0x7051,	// (0x000232b5) popup_call_audio_wait_window

0x7072,	// (0x000232d6) popup_number_entry_window_ParamLimits

0x7072,	// (0x000232d6) popup_number_entry_window

0xb785,	// (0x000279e9) bg_popup_call_pane_cp05_ParamLimits

0xb785,	// (0x000279e9) bg_popup_call_pane_cp05

0xb7a5,	// (0x00027a09) popup_number_entry_window_t1

0xb7b8,	// (0x00027a1c) popup_number_entry_window_t2

0xb7ca,	// (0x00027a2e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002b32e) popup_number_entry_window_t

0xb7dc,	// (0x00027a40) text_title_cp2

0xb7ef,	// (0x00027a53) bg_popup_call_pane_cp_ParamLimits

0xb7ef,	// (0x00027a53) bg_popup_call_pane_cp

0xb7fd,	// (0x00027a61) call_thumbnail_pane

0xb805,	// (0x00027a69) popup_call_audio_in_window_g1_ParamLimits

0xb805,	// (0x00027a69) popup_call_audio_in_window_g1

0xb811,	// (0x00027a75) popup_call_audio_in_window_g2_ParamLimits

0xb811,	// (0x00027a75) popup_call_audio_in_window_g2

0xb81d,	// (0x00027a81) popup_call_audio_in_window_g3_ParamLimits

0xb81d,	// (0x00027a81) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002b337) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002b337) popup_call_audio_in_window_g

0xb829,	// (0x00027a8d) popup_call_audio_in_window_t1_ParamLimits

0xb829,	// (0x00027a8d) popup_call_audio_in_window_t1

0xb845,	// (0x00027aa9) popup_call_audio_in_window_t2_ParamLimits

0xb845,	// (0x00027aa9) popup_call_audio_in_window_t2

0xb861,	// (0x00027ac5) popup_call_audio_in_window_t3_ParamLimits

0xb861,	// (0x00027ac5) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002b33e) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002b33e) popup_call_audio_in_window_t

0xb7ef,	// (0x00027a53) bg_popup_call_pane_cp01_ParamLimits

0xb7ef,	// (0x00027a53) bg_popup_call_pane_cp01

0xb7fd,	// (0x00027a61) call_thumbnail_pane_cp02

0xb874,	// (0x00027ad8) call_type_pane_cp022

0xb87c,	// (0x00027ae0) popup_call_audio_out_window_g1_ParamLimits

0xb87c,	// (0x00027ae0) popup_call_audio_out_window_g1

0xb88e,	// (0x00027af2) popup_call_audio_out_window_g2_ParamLimits

0xb88e,	// (0x00027af2) popup_call_audio_out_window_g2

0xb89a,	// (0x00027afe) popup_call_audio_out_window_g3_ParamLimits

0xb89a,	// (0x00027afe) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002b345) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002b345) popup_call_audio_out_window_g

0xb8ac,	// (0x00027b10) popup_call_audio_out_window_t1_ParamLimits

0xb8ac,	// (0x00027b10) popup_call_audio_out_window_t1

0xb8c4,	// (0x00027b28) popup_call_audio_out_window_t2_ParamLimits

0xb8c4,	// (0x00027b28) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002b34c) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002b34c) popup_call_audio_out_window_t

0xb8d9,	// (0x00027b3d) bg_popup_call_pane_ParamLimits

0xb8d9,	// (0x00027b3d) bg_popup_call_pane

0x4387,	// (0x000205eb) call_thumbnail_pane_cp_ParamLimits

0x4387,	// (0x000205eb) call_thumbnail_pane_cp

0xb95d,	// (0x00027bc1) call_type_pane_cp01_ParamLimits

0xb95d,	// (0x00027bc1) call_type_pane_cp01

0xb9a1,	// (0x00027c05) popup_call_audio_first_window_g1_ParamLimits

0xb9a1,	// (0x00027c05) popup_call_audio_first_window_g1

0xb9ed,	// (0x00027c51) popup_call_audio_first_window_g2_ParamLimits

0xb9ed,	// (0x00027c51) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002b351) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002b351) popup_call_audio_first_window_g

0xba31,	// (0x00027c95) popup_call_audio_first_window_t1_ParamLimits

0xba31,	// (0x00027c95) popup_call_audio_first_window_t1

0xbadd,	// (0x00027d41) popup_call_audio_first_window_t4_ParamLimits

0xbadd,	// (0x00027d41) popup_call_audio_first_window_t4

0xbb69,	// (0x00027dcd) popup_call_audio_first_window_t5_ParamLimits

0xbb69,	// (0x00027dcd) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002b356) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002b356) popup_call_audio_first_window_t

0xbb98,	// (0x00027dfc) bg_popup_call_pane_cp02

0xbba2,	// (0x00027e06) call_type_pane_cp023

0xbbaa,	// (0x00027e0e) popup_call_audio_wait_window_g1

0xbbb2,	// (0x00027e16) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002b35d) popup_call_audio_wait_window_g

0xbbba,	// (0x00027e1e) popup_call_audio_wait_window_t3

0xbbc8,	// (0x00027e2c) bg_popup_call_pane_cp03_ParamLimits

0xbbc8,	// (0x00027e2c) bg_popup_call_pane_cp03

0xbc28,	// (0x00027e8c) call_thumbnail_pane_cp011_ParamLimits

0xbc28,	// (0x00027e8c) call_thumbnail_pane_cp011

0xbc34,	// (0x00027e98) call_type_pane_cp034_ParamLimits

0xbc34,	// (0x00027e98) call_type_pane_cp034

0xbc70,	// (0x00027ed4) popup_call_audio_second_window_g1_ParamLimits

0xbc70,	// (0x00027ed4) popup_call_audio_second_window_g1

0xbcac,	// (0x00027f10) popup_call_audio_second_window_g2_ParamLimits

0xbcac,	// (0x00027f10) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002b362) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002b362) popup_call_audio_second_window_g

0xbce8,	// (0x00027f4c) popup_call_audio_second_window_t1_ParamLimits

0xbce8,	// (0x00027f4c) popup_call_audio_second_window_t1

0xbd69,	// (0x00027fcd) popup_call_audio_second_window_t2_ParamLimits

0xbd69,	// (0x00027fcd) popup_call_audio_second_window_t2

0xbd9f,	// (0x00028003) popup_call_audio_second_window_t3_ParamLimits

0xbd9f,	// (0x00028003) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002b367) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002b367) popup_call_audio_second_window_t

0xbb98,	// (0x00027dfc) bg_popup_call_pane_cp04

0xbdd5,	// (0x00028039) list_conf_pane

0xbdeb,	// (0x0002804f) popup_call_audio_conf_window_t1

0xbdf9,	// (0x0002805d) call_thumbnail_pane_g1

0xbe01,	// (0x00028065) bg_pinb_pane_ParamLimits

0xbe01,	// (0x00028065) bg_pinb_pane

0xbe0f,	// (0x00028073) find_pinb_pane

0xbe18,	// (0x0002807c) listscroll_pinb_pane_ParamLimits

0xbe18,	// (0x0002807c) listscroll_pinb_pane

0xbe27,	// (0x0002808b) pinb_bg_pane_g1

0x43ab,	// (0x0002060f) pinb_bg_pane_g2

0x43b7,	// (0x0002061b) pinb_bg_pane_g3

0x43c3,	// (0x00020627) pinb_bg_pane_g4

0x43cf,	// (0x00020633) pinb_bg_pane_g5

0x43db,	// (0x0002063f) pinb_bg_pane_g6

0x43e6,	// (0x0002064a) pinb_bg_pane_g7

0x43f1,	// (0x00020655) pinb_bg_pane_g8

0x43fc,	// (0x00020660) pinb_bg_pane_g9

0x4406,	// (0x0002066a) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002b36e) pinb_bg_pane_g

0x4423,	// (0x00020687) grid_pinb_pane

0x442e,	// (0x00020692) list_pinb_pane

0x4439,	// (0x0002069d) scroll_pane_cp01_ParamLimits

0x4439,	// (0x0002069d) scroll_pane_cp01

0xbe31,	// (0x00028095) find_pinb_pane_g1_ParamLimits

0xbe31,	// (0x00028095) find_pinb_pane_g1

0xbe49,	// (0x000280ad) find_pinb_pane_t1

0xbe5b,	// (0x000280bf) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002b388) find_pinb_pane_t

0xbe70,	// (0x000280d4) input_focus_pane_cp01_ParamLimits

0xbe70,	// (0x000280d4) input_focus_pane_cp01

0x444b,	// (0x000206af) cell_pinb_pane_ParamLimits

0x444b,	// (0x000206af) cell_pinb_pane

0x4473,	// (0x000206d7) cell_pinb_pane_g1_ParamLimits

0x4473,	// (0x000206d7) cell_pinb_pane_g1

0x4488,	// (0x000206ec) cell_pinb_pane_g2_ParamLimits

0x4488,	// (0x000206ec) cell_pinb_pane_g2

0xbe7c,	// (0x000280e0) cell_pinb_pane_g3_ParamLimits

0xbe7c,	// (0x000280e0) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002b38d) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002b38d) cell_pinb_pane_g

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp01

0x4494,	// (0x000206f8) list_pinb_item_pane_ParamLimits

0x4494,	// (0x000206f8) list_pinb_item_pane

0xbb98,	// (0x00027dfc) list_highlight_pane_cp02

0x44ba,	// (0x0002071e) list_pinb_item_pane_g1_ParamLimits

0x44ba,	// (0x0002071e) list_pinb_item_pane_g1

0x44c7,	// (0x0002072b) list_pinb_item_pane_g2_ParamLimits

0x44c7,	// (0x0002072b) list_pinb_item_pane_g2

0x44d3,	// (0x00020737) list_pinb_item_pane_g3_ParamLimits

0x44d3,	// (0x00020737) list_pinb_item_pane_g3

0x44e4,	// (0x00020748) list_pinb_item_pane_g4_ParamLimits

0x44e4,	// (0x00020748) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002b394) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002b394) list_pinb_item_pane_g

0x44f0,	// (0x00020754) list_pinb_item_pane_t1_ParamLimits

0x44f0,	// (0x00020754) list_pinb_item_pane_t1

0x2d4e,	// (0x0001efb2) calc_display_pane

0x2d6c,	// (0x0001efd0) calc_paper_pane

0x2d88,	// (0x0001efec) grid_calc_pane

0xbb98,	// (0x00027dfc) bg_list_pane_cp01

0x4507,	// (0x0002076b) clock_g1

0x450f,	// (0x00020773) clock_g2

0x0001,

0xf139,	// (0x0002b39d) clock_g

0x4519,	// (0x0002077d) clock_t1_ParamLimits

0x4519,	// (0x0002077d) clock_t1

0x452e,	// (0x00020792) clock_t2_ParamLimits

0x452e,	// (0x00020792) clock_t2

0x4540,	// (0x000207a4) clock_t3_ParamLimits

0x4540,	// (0x000207a4) clock_t3

0x4552,	// (0x000207b6) clock_t4_ParamLimits

0x4552,	// (0x000207b6) clock_t4

0x4564,	// (0x000207c8) clock_t5_ParamLimits

0x4564,	// (0x000207c8) clock_t5

0x4579,	// (0x000207dd) clock_t6_ParamLimits

0x4579,	// (0x000207dd) clock_t6

0x458b,	// (0x000207ef) clock_t7_ParamLimits

0x458b,	// (0x000207ef) clock_t7

0x459d,	// (0x00020801) clock_t8_ParamLimits

0x459d,	// (0x00020801) clock_t8

0x45b3,	// (0x00020817) clock_t9_ParamLimits

0x45b3,	// (0x00020817) clock_t9

0x0008,

0xf13e,	// (0x0002b3a2) clock_t_ParamLimits

0xf13e,	// (0x0002b3a2) clock_t

0xbe88,	// (0x000280ec) popup_clock_analogue_window_cp02

0xbe88,	// (0x000280ec) popup_clock_digital_window_cp01

0xbe90,	// (0x000280f4) listscroll_help_pane

0xbb98,	// (0x00027dfc) phob_pre_status_pane

0xbe9a,	// (0x000280fe) grid_qdial_pane

0xbe01,	// (0x00028065) listscroll_mce_pane

0xbe01,	// (0x00028065) bg_notes_pane

0xbea4,	// (0x00028108) list_notes_pane

0x45c9,	// (0x0002082d) scroll_pane_cp06

0xbeb2,	// (0x00028116) bg_calc_paper_pane

0x2db4,	// (0x0001f018) list_calc_pane

0xbec6,	// (0x0002812a) bg_calc_display_pane

0x2dce,	// (0x0001f032) calc_display_pane_t1

0x2de3,	// (0x0001f047) calc_display_pane_t2

0x2df8,	// (0x0001f05c) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002b3b5) calc_display_pane_t

0x2e0a,	// (0x0001f06e) cell_calc_pane_ParamLimits

0x2e0a,	// (0x0001f06e) cell_calc_pane

0xbed2,	// (0x00028136) bg_calc_paper_pane_g1

0xbede,	// (0x00028142) bg_calc_paper_pane_g2

0xbeea,	// (0x0002814e) bg_calc_paper_pane_g3

0xbef6,	// (0x0002815a) bg_calc_paper_pane_g4

0xbf02,	// (0x00028166) bg_calc_paper_pane_g5

0x45d8,	// (0x0002083c) bg_calc_paper_pane_g6

0x45e9,	// (0x0002084d) bg_calc_paper_pane_g7

0x45fa,	// (0x0002085e) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002b3bc) bg_calc_paper_pane_g

0x460b,	// (0x0002086f) calc_bg_paper_pane_g9

0x461c,	// (0x00020880) list_calc_item_pane_ParamLimits

0x461c,	// (0x00020880) list_calc_item_pane

0xbf0e,	// (0x00028172) list_calc_item_pane_g1

0x2e37,	// (0x0001f09b) list_calc_item_pane_t1_ParamLimits

0x2e37,	// (0x0001f09b) list_calc_item_pane_t1

0x2e49,	// (0x0001f0ad) list_calc_item_pane_t2_ParamLimits

0x2e49,	// (0x0001f0ad) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002b3cd) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002b3cd) list_calc_item_pane_t

0xbf1b,	// (0x0002817f) cell_calc_pane_g1

0xbf25,	// (0x00028189) grid_highlight_pane_cp02

0x464b,	// (0x000208af) bg_calc_display_pane_g1

0x2e79,	// (0x0001f0dd) bg_calc_display_pane_g2

0xe13f,	// (0x0002a3a3) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002b3d7) bg_calc_display_pane_g

0x2e83,	// (0x0001f0e7) cell_qdial_pane_ParamLimits

0x2e83,	// (0x0001f0e7) cell_qdial_pane

0x4654,	// (0x000208b8) cell_qdial_pane_g1_ParamLimits

0x4654,	// (0x000208b8) cell_qdial_pane_g1

0x4661,	// (0x000208c5) cell_qdial_pane_g2_ParamLimits

0x4661,	// (0x000208c5) cell_qdial_pane_g2

0xbf47,	// (0x000281ab) cell_qdial_pane_g3_ParamLimits

0xbf47,	// (0x000281ab) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002b3de) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002b3de) cell_qdial_pane_g

0x467f,	// (0x000208e3) cell_qdial_pane_t1_ParamLimits

0x467f,	// (0x000208e3) cell_qdial_pane_t1

0x4697,	// (0x000208fb) cell_qdial_pane_t2_ParamLimits

0x4697,	// (0x000208fb) cell_qdial_pane_t2

0x46aa,	// (0x0002090e) cell_qdial_pane_t3_ParamLimits

0x46aa,	// (0x0002090e) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002b3e7) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002b3e7) cell_qdial_pane_t

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp04

0xbf53,	// (0x000281b7) thumbnail_qdial_pane_ParamLimits

0xbf53,	// (0x000281b7) thumbnail_qdial_pane

0xbfaf,	// (0x00028213) list_help_pane

0xbfb8,	// (0x0002821c) scroll_pane_cp02

0x46bd,	// (0x00020921) help_list_pane_t1_ParamLimits

0x46bd,	// (0x00020921) help_list_pane_t1

0x2e97,	// (0x0001f0fb) bg_notes_pane_g2

0x2e9f,	// (0x0001f103) bg_notes_pane_g3

0x2ea7,	// (0x0001f10b) notes_bg_pane_g1

0x2eaf,	// (0x0001f113) notes_bg_pane_g4

0x2eb7,	// (0x0001f11b) notes_bg_pane_g5

0x2ebf,	// (0x0001f123) notes_bg_pane_g6

0x2ec7,	// (0x0001f12b) notes_bg_pane_g7

0x2ecf,	// (0x0001f133) notes_bg_pane_g8

0x2ed7,	// (0x0001f13b) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002b405) notes_bg_pane_g

0x46f0,	// (0x00020954) list_notes_text_pane_ParamLimits

0x46f0,	// (0x00020954) list_notes_text_pane

0xbfc1,	// (0x00028225) list_notes_text_pane_g1

0x4718,	// (0x0002097c) list_notes_text_pane_t1

0x4726,	// (0x0002098a) listscroll_cale_week_pane

0x474b,	// (0x000209af) bg_cale_heading_pane

0xbfe4,	// (0x00028248) bg_cale_pane_cp01

0x476b,	// (0x000209cf) cale_week_corner_pane

0x4785,	// (0x000209e9) cale_week_day_heading_pane

0x47a5,	// (0x00020a09) cale_week_scroll_pane_g1

0x47c0,	// (0x00020a24) cale_week_scroll_pane_g2

0x47d3,	// (0x00020a37) cale_week_scroll_pane_g3

0x47e6,	// (0x00020a4a) cale_week_scroll_pane_g4

0x47f9,	// (0x00020a5d) cale_week_scroll_pane_g5

0x480c,	// (0x00020a70) cale_week_scroll_pane_g6

0x481f,	// (0x00020a83) cale_week_scroll_pane_g7

0x4834,	// (0x00020a98) cale_week_scroll_pane_g8

0x4849,	// (0x00020aad) cale_week_scroll_pane_g9

0x485c,	// (0x00020ac0) cale_week_scroll_pane_g10

0x486f,	// (0x00020ad3) cale_week_scroll_pane_g11

0x4882,	// (0x00020ae6) cale_week_scroll_pane_g12

0x4899,	// (0x00020afd) cale_week_scroll_pane_g13

0x48b4,	// (0x00020b18) cale_week_scroll_pane_g14

0x48cf,	// (0x00020b33) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002b414) cale_week_scroll_pane_g

0x48ff,	// (0x00020b63) cale_week_time_pane

0x4914,	// (0x00020b78) grid_cale_week_pane

0xc013,	// (0x00028277) scroll_pane_cp08

0x4933,	// (0x00020b97) cell_cale_week_pane_ParamLimits

0x4933,	// (0x00020b97) cell_cale_week_pane

0x4995,	// (0x00020bf9) cale_week_day_heading_pane_t1

0x49b0,	// (0x00020c14) cale_week_day_heading_pane_t2

0x49cb,	// (0x00020c2f) cale_week_day_heading_pane_t3

0x49e6,	// (0x00020c4a) cale_week_day_heading_pane_t4

0x4a01,	// (0x00020c65) cale_week_day_heading_pane_t5

0x4a1c,	// (0x00020c80) cale_week_day_heading_pane_t6

0x4a37,	// (0x00020c9b) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002b435) cale_week_day_heading_pane_t

0xc030,	// (0x00028294) bg_cale_side_pane

0x2edf,	// (0x0001f143) cale_week_time_pane_t1

0x2ef9,	// (0x0001f15d) cale_week_time_pane_t2

0x2f13,	// (0x0001f177) cale_week_time_pane_t3

0x2f2d,	// (0x0001f191) cale_week_time_pane_t4

0x2f47,	// (0x0001f1ab) cale_week_time_pane_t5

0x2f61,	// (0x0001f1c5) cale_week_time_pane_t6

0x2f7f,	// (0x0001f1e3) cale_week_time_pane_t7

0x2fa1,	// (0x0001f205) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002b444) cale_week_time_pane_t

0x4a52,	// (0x00020cb6) cell_cale_week_pane_g2

0x4a76,	// (0x00020cda) cell_cale_week_pane_g3_ParamLimits

0x4a76,	// (0x00020cda) cell_cale_week_pane_g3

0xc03e,	// (0x000282a2) grid_highlight_pane_cp07

0xc046,	// (0x000282aa) listscroll_gms_pane

0xc050,	// (0x000282b4) grid_gms_pane

0xc059,	// (0x000282bd) listscroll_gms_pane_g1

0xc061,	// (0x000282c5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002b455) listscroll_gms_pane_g

0x4a8e,	// (0x00020cf2) scroll_pane_cp010

0x4a99,	// (0x00020cfd) cell_gms_pane_ParamLimits

0x4a99,	// (0x00020cfd) cell_gms_pane

0x4aac,	// (0x00020d10) cell_gms_pane_g1

0xc069,	// (0x000282cd) cell_gms_pane_g2

0xc071,	// (0x000282d5) cell_gms_pane_g3

0xc07a,	// (0x000282de) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002b45a) cell_gms_pane_g

0xc083,	// (0x000282e7) grid_highlight_pane_cp09

0x6f33,	// (0x00023197) phob_pre_status_pane_g1

0x6f3b,	// (0x0002319f) phob_pre_status_pane_g2

0x6f43,	// (0x000231a7) phob_pre_status_pane_g3

0x6f4b,	// (0x000231af) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002b845) phob_pre_status_pane_g

0x6f5b,	// (0x000231bf) phob_pre_status_pane_t1

0x6f6b,	// (0x000231cf) phob_pre_status_pane_t2

0x6f7b,	// (0x000231df) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002b850) phob_pre_status_pane_t

0xc08b,	// (0x000282ef) bg_list_pane_cp05

0x4abc,	// (0x00020d20) grid_vorec_pane

0x4ac6,	// (0x00020d2a) vorec_t1

0x4ad4,	// (0x00020d38) vorec_t2

0x4ae2,	// (0x00020d46) vorec_t3

0x4af0,	// (0x00020d54) vorec_t4

0x42cf,	// (0x00020533) vorec_t5

0x42dd,	// (0x00020541) vorec_t6

0x0004,

0xf1ff,	// (0x0002b463) vorec_t

0x42eb,	// (0x0002054f) wait_bar_pane_cp01

0x4b0c,	// (0x00020d70) cell_vorec_pane_ParamLimits

0x4b0c,	// (0x00020d70) cell_vorec_pane

0x2fc5,	// (0x0001f229) cell_vorec_pane_g1

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp05

0x4b2f,	// (0x00020d93) cams_zoom_pane

0x4b3b,	// (0x00020d9f) image_vga_pane

0x4b4a,	// (0x00020dae) main_camera_pane_g1

0x4b58,	// (0x00020dbc) main_camera_pane_g2

0x4b64,	// (0x00020dc8) main_camera_pane_g3

0x4b70,	// (0x00020dd4) main_camera_pane_g4

0x4b7c,	// (0x00020de0) main_camera_pane_g5

0x4b88,	// (0x00020dec) main_camera_pane_g6

0x4b94,	// (0x00020df8) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002b46e) main_camera_pane_g

0x4ba0,	// (0x00020e04) main_camera_pane_t1

0x4bb2,	// (0x00020e16) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002b47f) main_camera_pane_t

0x4bd3,	// (0x00020e37) cams_zoom_pane_cp_ParamLimits

0x4bd3,	// (0x00020e37) cams_zoom_pane_cp

0x4bf7,	// (0x00020e5b) image_cif_pane_ParamLimits

0x4bf7,	// (0x00020e5b) image_cif_pane

0x4c15,	// (0x00020e79) image_subqcif_pane

0x4c1d,	// (0x00020e81) main_video_pane_g1_ParamLimits

0x4c1d,	// (0x00020e81) main_video_pane_g1

0x4c3d,	// (0x00020ea1) main_video_pane_g2_ParamLimits

0x4c3d,	// (0x00020ea1) main_video_pane_g2

0x4c6d,	// (0x00020ed1) main_video_pane_g3_ParamLimits

0x4c6d,	// (0x00020ed1) main_video_pane_g3

0x4c96,	// (0x00020efa) main_video_pane_g4_ParamLimits

0x4c96,	// (0x00020efa) main_video_pane_g4

0x4cbf,	// (0x00020f23) main_video_pane_g5_ParamLimits

0x4cbf,	// (0x00020f23) main_video_pane_g5

0xc09f,	// (0x00028303) main_video_pane_g6_ParamLimits

0xc09f,	// (0x00028303) main_video_pane_g6

0x0006,

0xf220,	// (0x0002b484) main_video_pane_g_ParamLimits

0xf220,	// (0x0002b484) main_video_pane_g

0x4ce1,	// (0x00020f45) main_video_pane_t1_ParamLimits

0x4ce1,	// (0x00020f45) main_video_pane_t1

0xc0b9,	// (0x0002831d) cams_zoom_pane_g1

0xc0c2,	// (0x00028326) cams_zoom_pane_g2

0xc0cb,	// (0x0002832f) cams_zoom_pane_g3

0xc0d4,	// (0x00028338) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002b493) cams_zoom_pane_g

0x4d2b,	// (0x00020f8f) grid_cams_pane

0x4d39,	// (0x00020f9d) linegrid_cams_pane

0x4d47,	// (0x00020fab) cell_cams_pane_ParamLimits

0x4d47,	// (0x00020fab) cell_cams_pane

0xc0dd,	// (0x00028341) cams_burst_image_pane

0xc0e5,	// (0x00028349) cell_cams_pane_g1

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp03

0xbf1b,	// (0x0002817f) mp_bg_pane_g1

0xbb98,	// (0x00027dfc) bg_list_pane_cp03

0xde89,	// (0x0002a0ed) bg_mp_pane

0xde91,	// (0x0002a0f5) grid_mp_pane

0xde99,	// (0x0002a0fd) media_player_g1

0xdea1,	// (0x0002a105) media_player_t1

0xdeaf,	// (0x0002a113) media_player_t2

0xdebd,	// (0x0002a121) media_player_t3

0xdecb,	// (0x0002a12f) media_player_t4

0xded9,	// (0x0002a13d) media_player_t5

0xdee7,	// (0x0002a14b) media_player_t6

0xdef5,	// (0x0002a159) media_player_t7

0x0006,

0xf5cb,	// (0x0002b82f) media_player_t

0xdf03,	// (0x0002a167) wait_bar_pane_cp02

0xf5b0,	// (0x0002b814) main_usb_pane_t

0x6f2a,	// (0x0002318e) cell_mp_pane

0xbf1b,	// (0x0002817f) cell_mp_pane_g1

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp06

0xc0ed,	// (0x00028351) grid_skin_colour_pane

0xc0f5,	// (0x00028359) list_highlight_pane_cp03

0x4e6e,	// (0x000210d2) skin_g1

0xc0fd,	// (0x00028361) skin_t1

0xc10c,	// (0x00028370) skin_t2

0x0001,

0xf264,	// (0x0002b4c8) skin_t

0x4e78,	// (0x000210dc) cell_skin_colour_pane_ParamLimits

0x4e78,	// (0x000210dc) cell_skin_colour_pane

0xc11a,	// (0x0002837e) cell_skin_colour_pane_g1

0x4efc,	// (0x00021160) call_video_g1_ParamLimits

0x4efc,	// (0x00021160) call_video_g1

0x4f0c,	// (0x00021170) call_video_g2_ParamLimits

0x4f0c,	// (0x00021170) call_video_g2

0x0001,

0xf269,	// (0x0002b4cd) call_video_g_ParamLimits

0xf269,	// (0x0002b4cd) call_video_g

0x4f66,	// (0x000211ca) call_video_uplink_pane_cp1_ParamLimits

0x4f66,	// (0x000211ca) call_video_uplink_pane_cp1

0xc12c,	// (0x00028390) call_video_uplink_pane_cp2

0x5032,	// (0x00021296) video_down_crop_pane_ParamLimits

0x5032,	// (0x00021296) video_down_crop_pane

0x5130,	// (0x00021394) video_down_pane_ParamLimits

0x5130,	// (0x00021394) video_down_pane

0xc134,	// (0x00028398) video_down_subqcif_pane_ParamLimits

0xc134,	// (0x00028398) video_down_subqcif_pane

0xc14c,	// (0x000283b0) video_down_subqcif_pane_cp_ParamLimits

0xc14c,	// (0x000283b0) video_down_subqcif_pane_cp

0xc172,	// (0x000283d6) im_reading_pane_ParamLimits

0xc172,	// (0x000283d6) im_reading_pane

0x5250,	// (0x000214b4) im_writing_pane_ParamLimits

0x5250,	// (0x000214b4) im_writing_pane

0x526e,	// (0x000214d2) im_reading_pane_t1

0xc18c,	// (0x000283f0) list_im_pane

0xc19d,	// (0x00028401) scroll_pane_cp07

0x52c2,	// (0x00021526) im_writing_pane_t1_ParamLimits

0x52c2,	// (0x00021526) im_writing_pane_t1

0xc1b6,	// (0x0002841a) im_writing_pane_t2_ParamLimits

0xc1b6,	// (0x0002841a) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002b4d7) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002b4d7) im_writing_pane_t

0xbb98,	// (0x00027dfc) input_focus_pane_cp04

0xbb98,	// (0x00027dfc) input_focus_pane_cp05

0x52d7,	// (0x0002153b) list_im_single_pane_ParamLimits

0x52d7,	// (0x0002153b) list_im_single_pane

0x52fb,	// (0x0002155f) list_single_im_pane_t1

0x6eee,	// (0x00023152) blid_accuracy_pane

0x6ef6,	// (0x0002315a) blid_compass_pane

0x6f00,	// (0x00023164) main_location_t1

0x6f0e,	// (0x00023172) main_location_t2

0x6f1c,	// (0x00023180) main_location_t3

0x0002,

0xf5da,	// (0x0002b83e) main_location_t

0xbb98,	// (0x00027dfc) aid_levels_location

0xbf1b,	// (0x0002817f) blid_accuracy_pane_g1

0xbf1b,	// (0x0002817f) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002b539) blid_accuracy_pane_g

0xc1fe,	// (0x00028462) wml_content_pane

0xc23c,	// (0x000284a0) wml_button_pane_ParamLimits

0xc23c,	// (0x000284a0) wml_button_pane

0x530a,	// (0x0002156e) wml_list_single_large_pane_ParamLimits

0x530a,	// (0x0002156e) wml_list_single_large_pane

0x5334,	// (0x00021598) wml_list_single_medium_pane_ParamLimits

0x5334,	// (0x00021598) wml_list_single_medium_pane

0x5365,	// (0x000215c9) wml_list_single_small_pane_ParamLimits

0x5365,	// (0x000215c9) wml_list_single_small_pane

0xc250,	// (0x000284b4) wml_selection_box_pane_ParamLimits

0xc250,	// (0x000284b4) wml_selection_box_pane

0xc263,	// (0x000284c7) wml_list_single_pane_t1

0xc272,	// (0x000284d6) wml_list_single_medium_pane_t1

0xc281,	// (0x000284e5) wml_list_single_large_pane_t1

0xc290,	// (0x000284f4) input_focus_pane_cp02_ParamLimits

0xc290,	// (0x000284f4) input_focus_pane_cp02

0xc2a3,	// (0x00028507) wml_selection_box_pane_g1

0xc2ac,	// (0x00028510) wml_selection_box_pane_t1_ParamLimits

0xc2ac,	// (0x00028510) wml_selection_box_pane_t1

0xbe01,	// (0x00028065) bg_wml_button_pane_ParamLimits

0xbe01,	// (0x00028065) bg_wml_button_pane

0xc2c4,	// (0x00028528) wml_button_pane_g1

0xc2cc,	// (0x00028530) wml_button_pane_t1

0xc2c4,	// (0x00028528) wml_button_bg_pane_g1

0xc2dc,	// (0x00028540) wml_button_bg_pane_g2

0xc2e4,	// (0x00028548) wml_button_bg_pane_g3

0xc2ec,	// (0x00028550) wml_button_bg_pane_g4

0xc2f4,	// (0x00028558) wml_button_bg_pane_g5

0xc2fc,	// (0x00028560) wml_button_bg_pane_g6

0xc304,	// (0x00028568) wml_button_bg_pane_g7

0xc30c,	// (0x00028570) wml_button_bg_pane_g8

0xc314,	// (0x00028578) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002b4dc) wml_button_bg_pane_g

0x539f,	// (0x00021603) bg_list_pane_cp02

0xc31c,	// (0x00028580) mce_header_pane_ParamLimits

0xc31c,	// (0x00028580) mce_header_pane

0xc332,	// (0x00028596) mce_icon_pane

0xc332,	// (0x00028596) mce_image_pane

0xc33b,	// (0x0002859f) mce_text_pane_ParamLimits

0xc33b,	// (0x0002859f) mce_text_pane

0x53a9,	// (0x0002160d) scroll_pane_cp03

0xc234,	// (0x00028498) scroll_pane_cp04

0xc34e,	// (0x000285b2) scroll_pane_cp05_ParamLimits

0xc34e,	// (0x000285b2) scroll_pane_cp05

0x53b3,	// (0x00021617) mce_header_field_pane_ParamLimits

0x53b3,	// (0x00021617) mce_header_field_pane

0x53d3,	// (0x00021637) mce_header_field_pane_2_ParamLimits

0x53d3,	// (0x00021637) mce_header_field_pane_2

0x53e9,	// (0x0002164d) mce_header_field_pane_3

0x53f1,	// (0x00021655) list_single_mce_message_pane_ParamLimits

0x53f1,	// (0x00021655) list_single_mce_message_pane

0x541c,	// (0x00021680) list_single_mce_smart_pane_ParamLimits

0x541c,	// (0x00021680) list_single_mce_smart_pane

0xc35a,	// (0x000285be) input_focus_pane_cp03

0xc363,	// (0x000285c7) list_header_data_pane

0x5452,	// (0x000216b6) mce_header_field_pane_t1

0x5460,	// (0x000216c4) list_single_mce_header_pane_ParamLimits

0x5460,	// (0x000216c4) list_single_mce_header_pane

0xc36b,	// (0x000285cf) list_single_mce_header_pane_t1

0xc37a,	// (0x000285de) list_single_mce_message_pane_g1

0xc382,	// (0x000285e6) list_single_mce_message_pane_t1

0x54b2,	// (0x00021716) bg_cale_heading_pane_cp01_ParamLimits

0x54b2,	// (0x00021716) bg_cale_heading_pane_cp01

0xc390,	// (0x000285f4) bg_cale_pane_cp02_ParamLimits

0xc390,	// (0x000285f4) bg_cale_pane_cp02

0x5500,	// (0x00021764) cale_month_corner_pane

0x551f,	// (0x00021783) cale_month_day_heading_pane_ParamLimits

0x551f,	// (0x00021783) cale_month_day_heading_pane

0x5585,	// (0x000217e9) cale_month_pane_g1_ParamLimits

0x5585,	// (0x000217e9) cale_month_pane_g1

0x55c8,	// (0x0002182c) cale_month_pane_g2_ParamLimits

0x55c8,	// (0x0002182c) cale_month_pane_g2

0x5600,	// (0x00021864) cale_month_pane_g3_ParamLimits

0x5600,	// (0x00021864) cale_month_pane_g3

0x564c,	// (0x000218b0) cale_month_pane_g4_ParamLimits

0x564c,	// (0x000218b0) cale_month_pane_g4

0x5698,	// (0x000218fc) cale_month_pane_g5_ParamLimits

0x5698,	// (0x000218fc) cale_month_pane_g5

0x56e4,	// (0x00021948) cale_month_pane_g6_ParamLimits

0x56e4,	// (0x00021948) cale_month_pane_g6

0x5730,	// (0x00021994) cale_month_pane_g7_ParamLimits

0x5730,	// (0x00021994) cale_month_pane_g7

0x5794,	// (0x000219f8) cale_month_pane_g8_ParamLimits

0x5794,	// (0x000219f8) cale_month_pane_g8

0x57f8,	// (0x00021a5c) cale_month_pane_g9_ParamLimits

0x57f8,	// (0x00021a5c) cale_month_pane_g9

0x5856,	// (0x00021aba) cale_month_pane_g10_ParamLimits

0x5856,	// (0x00021aba) cale_month_pane_g10

0x58b2,	// (0x00021b16) cale_month_pane_g11_ParamLimits

0x58b2,	// (0x00021b16) cale_month_pane_g11

0x5906,	// (0x00021b6a) cale_month_pane_g12_ParamLimits

0x5906,	// (0x00021b6a) cale_month_pane_g12

0x595c,	// (0x00021bc0) cale_month_pane_g13_ParamLimits

0x595c,	// (0x00021bc0) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002b4ef) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002b4ef) cale_month_pane_g

0x59b2,	// (0x00021c16) cale_month_week_pane

0x59d6,	// (0x00021c3a) grid_cale_month_pane_ParamLimits

0x59d6,	// (0x00021c3a) grid_cale_month_pane

0x5a2f,	// (0x00021c93) cale_month_day_heading_pane_t1

0x5ab5,	// (0x00021d19) cale_month_day_heading_pane_t2

0x5b2e,	// (0x00021d92) cale_month_day_heading_pane_t3

0x5ba7,	// (0x00021e0b) cale_month_day_heading_pane_t4

0x5c20,	// (0x00021e84) cale_month_day_heading_pane_t5

0x5c99,	// (0x00021efd) cale_month_day_heading_pane_t6

0x5d12,	// (0x00021f76) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002b50a) cale_month_day_heading_pane_t

0xc030,	// (0x00028294) bg_cale_side_pane_cp01

0x5da3,	// (0x00022007) cale_month_week_pane_t1

0x5dbc,	// (0x00022020) cale_month_week_pane_t2

0x5dd5,	// (0x00022039) cale_month_week_pane_t3

0x5dee,	// (0x00022052) cale_month_week_pane_t4

0x5e07,	// (0x0002206b) cale_month_week_pane_t5

0x5e28,	// (0x0002208c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002b519) cale_month_week_pane_t

0x5e49,	// (0x000220ad) cell_cale_month_pane_ParamLimits

0x5e49,	// (0x000220ad) cell_cale_month_pane

0x2fcf,	// (0x0001f233) cell_cale_month_pane_g1

0x2fdb,	// (0x0001f23f) cell_cale_month_pane_t1_ParamLimits

0x2fdb,	// (0x0001f23f) cell_cale_month_pane_t1

0xc03e,	// (0x000282a2) grid_highlight_pane_cp08

0xbf1b,	// (0x0002817f) main_smil_g1

0x5f95,	// (0x000221f9) smil_status_pane

0xc3cf,	// (0x00028633) smil_text_pane

0xdda9,	// (0x0002a00d) bg_popup_call3_rect_pane_g8

0xddb1,	// (0x0002a015) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002b7d2) bg_popup_call3_rect_pane_g

0xdff8,	// (0x0002a25c) smil_status_volume_pane_g1

0xc3d9,	// (0x0002863d) smil_status_pane_t1

0x32ad,	// (0x0001f511) volume_smil_pane

0xc3f0,	// (0x00028654) list_smil_text_pane

0x5fa8,	// (0x0002220c) scroll_pane_cp011

0x5fb3,	// (0x00022217) smil_text_list_pane_t1_ParamLimits

0x5fb3,	// (0x00022217) smil_text_list_pane_t1

0x3007,	// (0x0001f26b) aid_volume_smil_ParamLimits

0x3007,	// (0x0001f26b) aid_volume_smil

0xbf1b,	// (0x0002817f) smil_volume_pane_g1

0xbf1b,	// (0x0002817f) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002b539) smil_volume_pane_g

0x4726,	// (0x0002098a) listscroll_cale_day_pane

0xc3fa,	// (0x0002865e) bg_cale_pane

0xc412,	// (0x00028676) list_cale_pane

0xc435,	// (0x00028699) scroll_pane_cp09

0xc446,	// (0x000286aa) cale_bg_pane_g1

0xc44e,	// (0x000286b2) cale_bg_pane_g2

0xc456,	// (0x000286ba) cale_bg_pane_g3

0xc45e,	// (0x000286c2) cale_bg_pane_g4

0xc466,	// (0x000286ca) cale_bg_pane_g5

0xc46e,	// (0x000286d2) cale_bg_pane_g6

0xc476,	// (0x000286da) cale_bg_pane_g7

0xc47e,	// (0x000286e2) cale_bg_pane_g8

0xc486,	// (0x000286ea) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002b53e) cale_bg_pane_g

0x6033,	// (0x00022297) list_cale_time_pane_ParamLimits

0x6033,	// (0x00022297) list_cale_time_pane

0xc48e,	// (0x000286f2) list_cale_time_pane_g1_ParamLimits

0xc48e,	// (0x000286f2) list_cale_time_pane_g1

0xc49a,	// (0x000286fe) list_cale_time_pane_g2_ParamLimits

0xc49a,	// (0x000286fe) list_cale_time_pane_g2

0x6055,	// (0x000222b9) list_cale_time_pane_g3_ParamLimits

0x6055,	// (0x000222b9) list_cale_time_pane_g3

0x6063,	// (0x000222c7) list_cale_time_pane_g4_ParamLimits

0x6063,	// (0x000222c7) list_cale_time_pane_g4

0x6071,	// (0x000222d5) list_cale_time_pane_g5_ParamLimits

0x6071,	// (0x000222d5) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002b551) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002b551) list_cale_time_pane_g

0xc4b4,	// (0x00028718) list_cale_time_pane_t1_ParamLimits

0xc4b4,	// (0x00028718) list_cale_time_pane_t1

0xc4dc,	// (0x00028740) list_cale_time_pane_t2_ParamLimits

0xc4dc,	// (0x00028740) list_cale_time_pane_t2

0x63a0,	// (0x00022604) aid_blid_cardinal_pane

0x63e2,	// (0x00022646) compass_pane_t4

0xc504,	// (0x00028768) list_cale_time_pane_t4_ParamLimits

0xc504,	// (0x00028768) list_cale_time_pane_t4

0x63f0,	// (0x00022654) compass_pane_t5

0x6400,	// (0x00022664) compass_pane_t6

0x640e,	// (0x00022672) compass_pane_t7

0xc9c1,	// (0x00028c25) navi_pane_cc_t1

0xcb9e,	// (0x00028e02) aid_phob_thumbnail_center_pane

0x69f4,	// (0x00022c58) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002b55e) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002b55e) list_cale_time_pane_t

0xb7ef,	// (0x00027a53) bg_popup_window_pane_cp02_ParamLimits

0xb7ef,	// (0x00027a53) bg_popup_window_pane_cp02

0xc52c,	// (0x00028790) heading_pane_cp01_ParamLimits

0xc52c,	// (0x00028790) heading_pane_cp01

0xc538,	// (0x0002879c) loc_req_pane_ParamLimits

0xc538,	// (0x0002879c) loc_req_pane

0xc548,	// (0x000287ac) loc_type_pane_ParamLimits

0xc548,	// (0x000287ac) loc_type_pane

0xc55a,	// (0x000287be) loc_type_pane_t1_ParamLimits

0xc55a,	// (0x000287be) loc_type_pane_t1

0xc56c,	// (0x000287d0) loc_type_pane_t2_ParamLimits

0xc56c,	// (0x000287d0) loc_type_pane_t2

0xc57e,	// (0x000287e2) loc_type_pane_t3_ParamLimits

0xc57e,	// (0x000287e2) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002b565) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002b565) loc_type_pane_t

0xc590,	// (0x000287f4) list_loc_req_pane

0xc59a,	// (0x000287fe) scroll_pane_cp012

0x607f,	// (0x000222e3) list_single_loc_request_popup_menu_pane_ParamLimits

0x607f,	// (0x000222e3) list_single_loc_request_popup_menu_pane

0xc5a5,	// (0x00028809) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc5a5,	// (0x00028809) list_single_loc_request_popup_menu_pane_g1

0xc5b1,	// (0x00028815) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc5b1,	// (0x00028815) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002b56c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002b56c) list_single_loc_request_popup_menu_pane_g

0xc5bd,	// (0x00028821) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc5bd,	// (0x00028821) list_single_loc_request_popup_menu_pane_t1

0x6091,	// (0x000222f5) bg_popup_window_pane_cp03_ParamLimits

0x6091,	// (0x000222f5) bg_popup_window_pane_cp03

0x609f,	// (0x00022303) heading_loc_req_pane_ParamLimits

0x609f,	// (0x00022303) heading_loc_req_pane

0x60ab,	// (0x0002230f) popup_dyc_status_message_window_g1_ParamLimits

0x60ab,	// (0x0002230f) popup_dyc_status_message_window_g1

0x60b7,	// (0x0002231b) popup_dyc_status_message_window_t1_ParamLimits

0x60b7,	// (0x0002231b) popup_dyc_status_message_window_t1

0x60c9,	// (0x0002232d) popup_dyc_status_message_window_t2_ParamLimits

0x60c9,	// (0x0002232d) popup_dyc_status_message_window_t2

0x60db,	// (0x0002233f) popup_dyc_status_message_window_t3_ParamLimits

0x60db,	// (0x0002233f) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002b571) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002b571) popup_dyc_status_message_window_t

0xbb98,	// (0x00027dfc) bg_heading_pane_cp01

0xc5d3,	// (0x00028837) heading_loc_req_pane_g1

0xc5db,	// (0x0002883f) heading_loc_req_pane_g2

0xc5e3,	// (0x00028847) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002b578) heading_loc_req_pane_g

0xc5eb,	// (0x0002884f) heading_loc_req_pane_t1

0xc5fa,	// (0x0002885e) bg_popup_sub_pane_cp01_ParamLimits

0xc5fa,	// (0x0002885e) bg_popup_sub_pane_cp01

0xc608,	// (0x0002886c) popup_cale_events_window_g1_ParamLimits

0xc608,	// (0x0002886c) popup_cale_events_window_g1

0xc628,	// (0x0002888c) popup_cale_events_window_g2_ParamLimits

0xc628,	// (0x0002888c) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002b5ac) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002b5ac) popup_cale_events_window_g

0xc648,	// (0x000288ac) popup_cale_events_window_t1_ParamLimits

0xc648,	// (0x000288ac) popup_cale_events_window_t1

0xc65a,	// (0x000288be) popup_cale_events_window_t2_ParamLimits

0xc65a,	// (0x000288be) popup_cale_events_window_t2

0xc698,	// (0x000288fc) popup_cale_events_window_t3_ParamLimits

0xc698,	// (0x000288fc) popup_cale_events_window_t3

0xc6d2,	// (0x00028936) popup_cale_events_window_t4_ParamLimits

0xc6d2,	// (0x00028936) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002b5b1) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002b5b1) popup_cale_events_window_t

0x61e0,	// (0x00022444) call_type_pane

0xc90f,	// (0x00028b73) popup_call_status_window_g1

0x61ec,	// (0x00022450) popup_call_status_window_g2

0x61f8,	// (0x0002245c) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002b5ba) popup_call_status_window_g

0xc708,	// (0x0002896c) call_type_pane_g1

0xc711,	// (0x00028975) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002b5c1) call_type_pane_g

0xbb98,	// (0x00027dfc) bg_popup_sub_pane_cp02

0xc71a,	// (0x0002897e) listscroll_popup_wml_pane

0xc722,	// (0x00028986) list_wml_pane

0xc72c,	// (0x00028990) scroll_pane_cp013

0xc737,	// (0x0002899b) list_single_graphic_popup_wml_pane_ParamLimits

0xc737,	// (0x0002899b) list_single_graphic_popup_wml_pane

0xbf1b,	// (0x0002817f) list_single_graphic_popup_wml_pane_g1

0xc74b,	// (0x000289af) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002b5c6) list_single_graphic_popup_wml_pane_g

0xc753,	// (0x000289b7) list_single_graphic_popup_wml_pane_t1

0xc769,	// (0x000289cd) aid_call_pane

0xbdf9,	// (0x0002805d) popup_clock_analogue_window_g1

0xbdf9,	// (0x0002805d) popup_clock_analogue_window_g2

0x3029,	// (0x0001f28d) popup_clock_analogue_window_g3

0x3029,	// (0x0001f28d) popup_clock_analogue_window_g4

0xbf1b,	// (0x0002817f) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002b5cb) popup_clock_analogue_window_g

0x3031,	// (0x0001f295) popup_clock_analogue_window_t1

0x303f,	// (0x0001f2a3) clock_digital_number_pane_ParamLimits

0x303f,	// (0x0001f2a3) clock_digital_number_pane

0x304b,	// (0x0001f2af) clock_digital_number_pane_cp02_ParamLimits

0x304b,	// (0x0001f2af) clock_digital_number_pane_cp02

0x3057,	// (0x0001f2bb) clock_digital_number_pane_cp03_ParamLimits

0x3057,	// (0x0001f2bb) clock_digital_number_pane_cp03

0x3063,	// (0x0001f2c7) clock_digital_number_pane_cp04_ParamLimits

0x3063,	// (0x0001f2c7) clock_digital_number_pane_cp04

0x3073,	// (0x0001f2d7) clock_digital_separator_pane_ParamLimits

0x3073,	// (0x0001f2d7) clock_digital_separator_pane

0x307f,	// (0x0001f2e3) popup_clock_digital_window_t1

0xbf1b,	// (0x0002817f) clock_digital_number_pane_g1

0xbf1b,	// (0x0002817f) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002b539) clock_digital_number_pane_g

0xbf1b,	// (0x0002817f) clock_digital_separator_pane_g1

0xbf1b,	// (0x0002817f) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002b539) clock_digital_separator_pane_g

0xbb98,	// (0x00027dfc) bg_popup_window_pane_cp04

0xc771,	// (0x000289d5) heading_pane_cp03

0xc779,	// (0x000289dd) listscroll_popup_gms_pane

0xc781,	// (0x000289e5) grid_large_graphic_popup_pane

0xc78b,	// (0x000289ef) listscroll_popup_gms_pane_g1

0xc793,	// (0x000289f7) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002b5d6) listscroll_popup_gms_pane_g

0xc234,	// (0x00028498) scroll_pane_cp014

0x6204,	// (0x00022468) cell_large_graphic_popup_pane_ParamLimits

0x6204,	// (0x00022468) cell_large_graphic_popup_pane

0x621c,	// (0x00022480) cell_large_graphic_popup_pane_g1_ParamLimits

0x621c,	// (0x00022480) cell_large_graphic_popup_pane_g1

0xc79b,	// (0x000289ff) cell_large_graphic_popup_pane_g2_ParamLimits

0xc79b,	// (0x000289ff) cell_large_graphic_popup_pane_g2

0xc7a7,	// (0x00028a0b) cell_large_graphic_popup_pane_g3_ParamLimits

0xc7a7,	// (0x00028a0b) cell_large_graphic_popup_pane_g3

0xc7b4,	// (0x00028a18) cell_large_graphic_popup_pane_g4_ParamLimits

0xc7b4,	// (0x00028a18) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002b5db) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002b5db) cell_large_graphic_popup_pane_g

0xc7c4,	// (0x00028a28) grid_highlight_pane_cp010

0xbf1b,	// (0x0002817f) bg_popup_call_pane_g1

0xc7ce,	// (0x00028a32) list_single_graphic_popup_conf_pane_ParamLimits

0xc7ce,	// (0x00028a32) list_single_graphic_popup_conf_pane

0xc7e1,	// (0x00028a45) list_highlight_pane_cp01

0xc7ea,	// (0x00028a4e) list_single_graphic_popup_conf_pane_g1

0xc7f2,	// (0x00028a56) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002b5e4) list_single_graphic_popup_conf_pane_g

0xc7fa,	// (0x00028a5e) list_single_graphic_popup_conf_pane_t1

0xc808,	// (0x00028a6c) linegrid_cams_pane_g1

0x6228,	// (0x0002248c) linegrid_cams_pane_g2

0xc071,	// (0x000282d5) linegrid_cams_pane_g3

0xc811,	// (0x00028a75) linegrid_cams_pane_g4

0x6231,	// (0x00022495) linegrid_cams_pane_g5

0x623a,	// (0x0002249e) linegrid_cams_pane_g6

0xc07a,	// (0x000282de) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002b5e9) linegrid_cams_pane_g

0xc81a,	// (0x00028a7e) popup_clock_analogue_window

0xc81a,	// (0x00028a7e) popup_clock_digital_window

0xbb98,	// (0x00027dfc) popup_phob_thumbnail_window

0xbf1b,	// (0x0002817f) call_video_uplink_pane_g1

0xc823,	// (0x00028a87) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002b5f8) call_video_uplink_pane_g

0xc82b,	// (0x00028a8f) video_uplink_pane

0xc833,	// (0x00028a97) mce_image_pane_g1

0x6243,	// (0x000224a7) mce_image_pane_g2

0x624d,	// (0x000224b1) mce_image_pane_g3

0x6255,	// (0x000224b9) mce_image_pane_g4

0x625d,	// (0x000224c1) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002b5fd) mce_image_pane_g

0xc83d,	// (0x00028aa1) control_top_pane_stacon_cp01_ParamLimits

0xc83d,	// (0x00028aa1) control_top_pane_stacon_cp01

0xc851,	// (0x00028ab5) uni_indicator_pane_stacon_cp01_ParamLimits

0xc851,	// (0x00028ab5) uni_indicator_pane_stacon_cp01

0xc862,	// (0x00028ac6) bg_popup_sub_pane_cp03

0xc86c,	// (0x00028ad0) chi_dic_find_pane

0x6265,	// (0x000224c9) listscroll_chi_dic_pane

0xc874,	// (0x00028ad8) main_pane_chidic_g1

0xc87c,	// (0x00028ae0) chi_dic_find_pane_t1

0xc88a,	// (0x00028aee) find_chidic_pane

0xc893,	// (0x00028af7) chi_dic_list_pane_ParamLimits

0xc893,	// (0x00028af7) chi_dic_list_pane

0xc8a4,	// (0x00028b08) scroll_pane_cp020

0xc8ac,	// (0x00028b10) find_chidic_pane_t1

0xbb98,	// (0x00027dfc) input_focus_pane_cp06

0x6279,	// (0x000224dd) list_chi_dic_pane_ParamLimits

0x6279,	// (0x000224dd) list_chi_dic_pane

0x6293,	// (0x000224f7) list_chi_dic_pane_t1_ParamLimits

0x6293,	// (0x000224f7) list_chi_dic_pane_t1

0xbb98,	// (0x00027dfc) list_highlight_pane_cp020

0xc8bb,	// (0x00028b1f) bg_cale_heading_pane_g1

0x62a6,	// (0x0002250a) bg_cale_heading_pane_g2

0x62ae,	// (0x00022512) bg_cale_heading_pane_g3

0x62b6,	// (0x0002251a) bg_cale_heading_pane_g4

0x62c0,	// (0x00022524) bg_cale_heading_pane_g5

0x62ca,	// (0x0002252e) bg_cale_heading_pane_g6

0x62d2,	// (0x00022536) bg_cale_heading_pane_g7

0x62da,	// (0x0002253e) bg_cale_heading_pane_g8

0x62e4,	// (0x00022548) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002b608) bg_cale_heading_pane_g

0xc8bb,	// (0x00028b1f) bg_cale_side_pane_g1

0x62ee,	// (0x00022552) bg_cale_side_pane_g2

0x62f8,	// (0x0002255c) bg_cale_side_pane_g3

0x6302,	// (0x00022566) bg_cale_side_pane_g4

0x630c,	// (0x00022570) bg_cale_side_pane_g5

0x6316,	// (0x0002257a) bg_cale_side_pane_g6

0x6320,	// (0x00022584) bg_cale_side_pane_g7

0x632a,	// (0x0002258e) bg_cale_side_pane_g8

0x6332,	// (0x00022596) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002b61b) bg_cale_side_pane_g

0x633a,	// (0x0002259e) popup_call_status_window_ParamLimits

0x633a,	// (0x0002259e) popup_call_status_window

0xc8c3,	// (0x00028b27) stacon_top_pane

0xc8cb,	// (0x00028b2f) status_pane_ParamLimits

0xc8cb,	// (0x00028b2f) status_pane

0xc8e0,	// (0x00028b44) status_small_pane

0xc8e8,	// (0x00028b4c) control_pane

0xbb98,	// (0x00027dfc) stacon_bottom_pane

0xc8f0,	// (0x00028b54) list_single_mce_smart_pane_t1_ParamLimits

0xc8f0,	// (0x00028b54) list_single_mce_smart_pane_t1

0xc91d,	// (0x00028b81) list_single_mce_smart_pane_t2_ParamLimits

0xc91d,	// (0x00028b81) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002b62e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002b62e) list_single_mce_smart_pane_t

0x6346,	// (0x000225aa) compass_pane

0x6352,	// (0x000225b6) main_location2_pane_t1

0x6366,	// (0x000225ca) main_location2_pane_t2

0x637a,	// (0x000225de) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002b633) main_location2_pane_t

0xc93c,	// (0x00028ba0) compass_pane_g1_ParamLimits

0xc93c,	// (0x00028ba0) compass_pane_g1

0x63c4,	// (0x00022628) compass_pane_t1

0x63d3,	// (0x00022637) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002b63c) compass_pane_t

0x641e,	// (0x00022682) text_secondary_cp61

0xc9b8,	// (0x00028c1c) navi_pane_cams_g5

0xca34,	// (0x00028c98) navi_pane_im_t1

0xca42,	// (0x00028ca6) navi_pane_mp_g1_ParamLimits

0xca42,	// (0x00028ca6) navi_pane_mp_g1

0xca56,	// (0x00028cba) navi_pane_mp_g2_ParamLimits

0xca56,	// (0x00028cba) navi_pane_mp_g2

0xca62,	// (0x00028cc6) navi_pane_mp_g3_ParamLimits

0xca62,	// (0x00028cc6) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002b650) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002b650) navi_pane_mp_g

0xca6e,	// (0x00028cd2) navi_pane_mp_t1

0xca7c,	// (0x00028ce0) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002b657) navi_pane_mp_t

0xcae7,	// (0x00028d4b) navi_pane_vt_g1

0xca6e,	// (0x00028cd2) navi_pane_vt_t1

0xcaef,	// (0x00028d53) navi_slider_pane

0xc08b,	// (0x000282ef) zooming_pane

0xcaff,	// (0x00028d63) navi_slider_pane_g1

0x309c,	// (0x0001f300) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002b65e) navi_slider_pane_g

0xcb23,	// (0x00028d87) aid_levels_zoom

0xcb2b,	// (0x00028d8f) zooming_pane_g1

0xcb33,	// (0x00028d97) zooming_pane_g2

0xcb33,	// (0x00028d97) zooming_pane_g3

0x0002,

0xf409,	// (0x0002b66d) zooming_pane_g

0xcb3b,	// (0x00028d9f) level_10_zoom

0xcb44,	// (0x00028da8) level_11_zoom

0xcb4d,	// (0x00028db1) level_1_zoom

0xcb56,	// (0x00028dba) level_2_zoom

0xcb5f,	// (0x00028dc3) level_3_zoom

0xcb68,	// (0x00028dcc) level_4_zoom

0xcb71,	// (0x00028dd5) level_5_zoom

0xcb7a,	// (0x00028dde) level_6_zoom

0xcb83,	// (0x00028de7) level_7_zoom

0xcb8c,	// (0x00028df0) level_8_zoom

0xcb95,	// (0x00028df9) level_9_zoom

0xcba6,	// (0x00028e0a) popup_phob_thumbnail_window_g1

0xcbae,	// (0x00028e12) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002b674) popup_phob_thumbnail_window_g

0xdf0b,	// (0x0002a16f) level_1_location

0xdf13,	// (0x0002a177) level_2_location

0xdf1b,	// (0x0002a17f) level_3_location

0xdf23,	// (0x0002a187) level_4_location

0xc08b,	// (0x000282ef) level_5_location

0x6459,	// (0x000226bd) mce_icon_pane_g1

0x6461,	// (0x000226c5) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002b679) mce_icon_pane_g

0x6469,	// (0x000226cd) main_mup_pane_g1_ParamLimits

0x6469,	// (0x000226cd) main_mup_pane_g1

0x6481,	// (0x000226e5) main_mup_pane_g2_ParamLimits

0x6481,	// (0x000226e5) main_mup_pane_g2

0x649d,	// (0x00022701) main_mup_pane_g3_ParamLimits

0x649d,	// (0x00022701) main_mup_pane_g3

0x64b9,	// (0x0002271d) main_mup_pane_g4_ParamLimits

0x64b9,	// (0x0002271d) main_mup_pane_g4

0x64d5,	// (0x00022739) main_mup_pane_g5_ParamLimits

0x64d5,	// (0x00022739) main_mup_pane_g5

0x64f6,	// (0x0002275a) main_mup_pane_g6_ParamLimits

0x64f6,	// (0x0002275a) main_mup_pane_g6

0x6512,	// (0x00022776) main_mup_pane_g7_ParamLimits

0x6512,	// (0x00022776) main_mup_pane_g7

0x652e,	// (0x00022792) main_mup_pane_g8_ParamLimits

0x652e,	// (0x00022792) main_mup_pane_g8

0x654e,	// (0x000227b2) main_mup_pane_g9_ParamLimits

0x654e,	// (0x000227b2) main_mup_pane_g9

0x656d,	// (0x000227d1) main_mup_pane_g10_ParamLimits

0x656d,	// (0x000227d1) main_mup_pane_g10

0x658c,	// (0x000227f0) main_mup_pane_g11_ParamLimits

0x658c,	// (0x000227f0) main_mup_pane_g11

0x65a4,	// (0x00022808) main_mup_pane_g12_ParamLimits

0x65a4,	// (0x00022808) main_mup_pane_g12

0x65b2,	// (0x00022816) main_mup_pane_g13_ParamLimits

0x65b2,	// (0x00022816) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002b67e) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002b67e) main_mup_pane_g

0x65c8,	// (0x0002282c) main_mup_pane_t1_ParamLimits

0x65c8,	// (0x0002282c) main_mup_pane_t1

0x65e5,	// (0x00022849) main_mup_pane_t2_ParamLimits

0x65e5,	// (0x00022849) main_mup_pane_t2

0x65ff,	// (0x00022863) main_mup_pane_t3_ParamLimits

0x65ff,	// (0x00022863) main_mup_pane_t3

0x6619,	// (0x0002287d) main_mup_pane_t4_ParamLimits

0x6619,	// (0x0002287d) main_mup_pane_t4

0x662b,	// (0x0002288f) main_mup_pane_t5_ParamLimits

0x662b,	// (0x0002288f) main_mup_pane_t5

0x663d,	// (0x000228a1) main_mup_pane_t6_ParamLimits

0x663d,	// (0x000228a1) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002b699) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002b699) main_mup_pane_t

0x6653,	// (0x000228b7) mup_progress_pane_ParamLimits

0x6653,	// (0x000228b7) mup_progress_pane

0x665f,	// (0x000228c3) mup_visualizer_pane_ParamLimits

0x665f,	// (0x000228c3) mup_visualizer_pane

0x6699,	// (0x000228fd) mup_volume_pane_ParamLimits

0x6699,	// (0x000228fd) mup_volume_pane

0xc90f,	// (0x00028b73) mup_visualizer_pane_g1_ParamLimits

0xc90f,	// (0x00028b73) mup_visualizer_pane_g1

0xc90f,	// (0x00028b73) mup_visualizer_pane_g2_ParamLimits

0xc90f,	// (0x00028b73) mup_visualizer_pane_g2

0xc93c,	// (0x00028ba0) mup_visualizer_pane_g3_ParamLimits

0xc93c,	// (0x00028ba0) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002b6a6) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002b6a6) mup_visualizer_pane_g

0xbf1b,	// (0x0002817f) mup_volume_pane_g1

0xcbbe,	// (0x00028e22) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002b6ad) mup_volume_pane_g

0xbf1b,	// (0x0002817f) mup_progress_pane_g1

0xcbc7,	// (0x00028e2b) mup_progress_pane_g2

0xcbd0,	// (0x00028e34) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002b6b2) mup_progress_pane_g

0xbb98,	// (0x00027dfc) bg_popup_window_pane_cp05

0xcbd9,	// (0x00028e3d) heading_pane_cp02_ParamLimits

0xcbd9,	// (0x00028e3d) heading_pane_cp02

0xcbf3,	// (0x00028e57) list_popup_blid_pane

0xcbfb,	// (0x00028e5f) list_blid_sat_info_pane_ParamLimits

0xcbfb,	// (0x00028e5f) list_blid_sat_info_pane

0xcc0e,	// (0x00028e72) list_blid_sat_info_pane_g1

0xcc16,	// (0x00028e7a) list_blid_sat_info_pane_t1

0x67a6,	// (0x00022a0a) mup_equalizer_pane_ParamLimits

0x67a6,	// (0x00022a0a) mup_equalizer_pane

0x67c7,	// (0x00022a2b) mup_equalizer_pane_cp1_ParamLimits

0x67c7,	// (0x00022a2b) mup_equalizer_pane_cp1

0x67e8,	// (0x00022a4c) mup_equalizer_pane_cp2_ParamLimits

0x67e8,	// (0x00022a4c) mup_equalizer_pane_cp2

0x6809,	// (0x00022a6d) mup_equalizer_pane_cp3_ParamLimits

0x6809,	// (0x00022a6d) mup_equalizer_pane_cp3

0x682a,	// (0x00022a8e) mup_equalizer_pane_cp4_ParamLimits

0x682a,	// (0x00022a8e) mup_equalizer_pane_cp4

0x684b,	// (0x00022aaf) mup_equalizer_pane_cp5

0x6861,	// (0x00022ac5) mup_equalizer_pane_cp6

0x6879,	// (0x00022add) mup_equalizer_pane_cp7

0xde29,	// (0x0002a08d) bg_popup_call_poc_act_pane_g9

0xde31,	// (0x0002a095) bg_popup_call_poc_act_pane_g10

0xde39,	// (0x0002a09d) bg_popup_call_poc_act_pane_g11

0x000a,

0xbe01,	// (0x00028065) mup_scale_pane

0xbf1b,	// (0x0002817f) mup_scale_pane_g1

0xcc24,	// (0x00028e88) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002b6ce) mup_scale_pane_g

0xcc48,	// (0x00028eac) msg_data_pane

0xcc50,	// (0x00028eb4) scroll_pane_cp017

0x68a3,	// (0x00022b07) bg_list_pane_cp04_ParamLimits

0x68a3,	// (0x00022b07) bg_list_pane_cp04

0xcc60,	// (0x00028ec4) msg_data_pane_g1

0x68bf,	// (0x00022b23) msg_data_pane_g2

0x68c9,	// (0x00022b2d) msg_data_pane_g3

0x68d1,	// (0x00022b35) msg_data_pane_g4

0x68d9,	// (0x00022b3d) msg_data_pane_g5

0x68e1,	// (0x00022b45) msg_data_pane_g6

0x68e9,	// (0x00022b4d) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002b6dd) msg_data_pane_g

0x68f1,	// (0x00022b55) msg_text_pane_ParamLimits

0x68f1,	// (0x00022b55) msg_text_pane

0x693e,	// (0x00022ba2) qrid_highlight_pane_cp011_ParamLimits

0x693e,	// (0x00022ba2) qrid_highlight_pane_cp011

0xbb98,	// (0x00027dfc) msg_body_pane

0xbb98,	// (0x00027dfc) msg_header_pane

0xcc71,	// (0x00028ed5) input_focus_pane_cp07

0xcc86,	// (0x00028eea) msg_header_pane_t1_ParamLimits

0xcc86,	// (0x00028eea) msg_header_pane_t1

0xcc98,	// (0x00028efc) msg_header_pane_t2_ParamLimits

0xcc98,	// (0x00028efc) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002b6f1) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002b6f1) msg_header_pane_t

0xccaa,	// (0x00028f0e) msg_body_pane_g1

0xccb2,	// (0x00028f16) msg_body_pane_t1_ParamLimits

0xccb2,	// (0x00028f16) msg_body_pane_t1

0xcce3,	// (0x00028f47) msg_body_pane_t2_ParamLimits

0xcce3,	// (0x00028f47) msg_body_pane_t2

0xccf5,	// (0x00028f59) msg_body_pane_t3_ParamLimits

0xccf5,	// (0x00028f59) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002b6f6) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002b6f6) msg_body_pane_t

0x30de,	// (0x0001f342) main_viewer_pane_g1_ParamLimits

0x30de,	// (0x0001f342) main_viewer_pane_g1

0x30ea,	// (0x0001f34e) main_viewer_pane_g2_ParamLimits

0x30ea,	// (0x0001f34e) main_viewer_pane_g2

0x6986,	// (0x00022bea) main_viewer_pane_g3_ParamLimits

0x6986,	// (0x00022bea) main_viewer_pane_g3

0x6997,	// (0x00022bfb) main_viewer_pane_g4_ParamLimits

0x6997,	// (0x00022bfb) main_viewer_pane_g4

0x30f6,	// (0x0001f35a) main_viewer_pane_g5_ParamLimits

0x30f6,	// (0x0001f35a) main_viewer_pane_g5

0x30f6,	// (0x0001f35a) main_viewer_pane_g7_ParamLimits

0x30f6,	// (0x0001f35a) main_viewer_pane_g7

0xc5a5,	// (0x00028809) main_viewer_pane_g8_ParamLimits

0xc5a5,	// (0x00028809) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002b706) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002b706) main_viewer_pane_g

0xcd07,	// (0x00028f6b) viewer_content_pane_ParamLimits

0xcd07,	// (0x00028f6b) viewer_content_pane

0x69c8,	// (0x00022c2c) main_postcard_pane_g1_ParamLimits

0x69c8,	// (0x00022c2c) main_postcard_pane_g1

0x69d6,	// (0x00022c3a) main_postcard_pane_g2_ParamLimits

0x69d6,	// (0x00022c3a) main_postcard_pane_g2

0x69e4,	// (0x00022c48) main_postcard_pane_g3_ParamLimits

0x69e4,	// (0x00022c48) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002b717) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002b717) main_postcard_pane_g

0x69f4,	// (0x00022c58) main_postcard_pane_g4

0xe00b,	// (0x0002a26f) smil_status_volume_pane_g2

0x6a20,	// (0x00022c84) postcard_pane_ParamLimits

0x6a20,	// (0x00022c84) postcard_pane

0xc90f,	// (0x00028b73) postcard_pane_g1_ParamLimits

0xc90f,	// (0x00028b73) postcard_pane_g1

0x6a52,	// (0x00022cb6) postcard_pane_g2_ParamLimits

0x6a52,	// (0x00022cb6) postcard_pane_g2

0x6a5e,	// (0x00022cc2) postcard_pane_g3_ParamLimits

0x6a5e,	// (0x00022cc2) postcard_pane_g3

0xcd15,	// (0x00028f79) postcard_pane_g4_ParamLimits

0xcd15,	// (0x00028f79) postcard_pane_g4

0x6a6a,	// (0x00022cce) postcard_pane_g5_ParamLimits

0x6a6a,	// (0x00022cce) postcard_pane_g5

0x6a76,	// (0x00022cda) postcard_pane_g6_ParamLimits

0x6a76,	// (0x00022cda) postcard_pane_g6

0xcd23,	// (0x00028f87) postcard_pane_g7_ParamLimits

0xcd23,	// (0x00028f87) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002b724) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002b724) postcard_pane_g

0x6a82,	// (0x00022ce6) main_mp2_pane_g1_ParamLimits

0x6a82,	// (0x00022ce6) main_mp2_pane_g1

0x6a8e,	// (0x00022cf2) main_mp2_pane_g2_ParamLimits

0x6a8e,	// (0x00022cf2) main_mp2_pane_g2

0x6a9a,	// (0x00022cfe) main_mp2_pane_g3_ParamLimits

0x6a9a,	// (0x00022cfe) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002b733) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002b733) main_mp2_pane_g

0x6aa6,	// (0x00022d0a) main_mp2_pane_t1_ParamLimits

0x6aa6,	// (0x00022d0a) main_mp2_pane_t1

0x6abd,	// (0x00022d21) main_mp2_pane_t2_ParamLimits

0x6abd,	// (0x00022d21) main_mp2_pane_t2

0x6ad1,	// (0x00022d35) main_mp2_pane_t3_ParamLimits

0x6ad1,	// (0x00022d35) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002b73a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002b73a) main_mp2_pane_t

0xcd31,	// (0x00028f95) pec_content_pane_ParamLimits

0xcd31,	// (0x00028f95) pec_content_pane

0xc234,	// (0x00028498) scroll_pane_cp015

0xcd43,	// (0x00028fa7) pec_attribute_pane_ParamLimits

0xcd43,	// (0x00028fa7) pec_attribute_pane

0x6ae3,	// (0x00022d47) pec_content_pane_g1_ParamLimits

0x6ae3,	// (0x00022d47) pec_content_pane_g1

0xcd53,	// (0x00028fb7) pec_content_pane_t1_ParamLimits

0xcd53,	// (0x00028fb7) pec_content_pane_t1

0xcd65,	// (0x00028fc9) pec_content_pane_t2_ParamLimits

0xcd65,	// (0x00028fc9) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002b741) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002b741) pec_content_pane_t

0x6aef,	// (0x00022d53) list_single_graphic_pane_cp01_ParamLimits

0x6aef,	// (0x00022d53) list_single_graphic_pane_cp01

0xbe01,	// (0x00028065) bg_popup_sub_pane_cp04

0xcd77,	// (0x00028fdb) popup_mup_playback_window_g1

0xcd83,	// (0x00028fe7) popup_mup_playback_window_t1

0xcd98,	// (0x00028ffc) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002b746) popup_mup_playback_window_t

0xcdcf,	// (0x00029033) main_image_pane_g1_ParamLimits

0xcdcf,	// (0x00029033) main_image_pane_g1

0xce12,	// (0x00029076) scroll_pane_cp018_ParamLimits

0xce12,	// (0x00029076) scroll_pane_cp018

0xce2a,	// (0x0002908e) scroll_pane_cp016_ParamLimits

0xce2a,	// (0x0002908e) scroll_pane_cp016

0x6b88,	// (0x00022dec) smil2_image_pane_ParamLimits

0x6b88,	// (0x00022dec) smil2_image_pane

0x6bb8,	// (0x00022e1c) smil2_root_pane_ParamLimits

0x6bb8,	// (0x00022e1c) smil2_root_pane

0x6be4,	// (0x00022e48) smil2_text_pane_ParamLimits

0x6be4,	// (0x00022e48) smil2_text_pane

0xbb98,	// (0x00027dfc) bg_list_pane_cp06

0xce66,	// (0x000290ca) grid_radio_pane

0xbb98,	// (0x00027dfc) bg_popup_window_pane_cp06

0xce6e,	// (0x000290d2) main_fmradio_pane_t1

0xc771,	// (0x000289d5) heading_pane_cp04

0xce7c,	// (0x000290e0) main_fmradio_pane_t2

0xde41,	// (0x0002a0a5) popup_cale_lunar_info_window_g1

0xce8a,	// (0x000290ee) main_fmradio_pane_t3

0xde49,	// (0x0002a0ad) popup_cale_lunar_info_window_g2

0xce98,	// (0x000290fc) main_fmradio_pane_t4

0x0001,

0xcea6,	// (0x0002910a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002b821) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002b75b) main_fmradio_pane_t

0xceb4,	// (0x00029118) wait_bar_pane_cp03

0xcebc,	// (0x00029120) cell_fmradio_pane_ParamLimits

0xcebc,	// (0x00029120) cell_fmradio_pane

0xcd23,	// (0x00028f87) cell_fmradio_pane_g1_ParamLimits

0xcd23,	// (0x00028f87) cell_fmradio_pane_g1

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp011

0xcecf,	// (0x00029133) poc_content_pane_ParamLimits

0xcecf,	// (0x00029133) poc_content_pane

0xcee1,	// (0x00029145) scroll_pane_cp019

0x6c24,	// (0x00022e88) popup_call_poc_act_window_ParamLimits

0x6c24,	// (0x00022e88) popup_call_poc_act_window

0x6c31,	// (0x00022e95) popup_call_poc_inact_window_ParamLimits

0x6c31,	// (0x00022e95) popup_call_poc_inact_window

0xf594,	// (0x0002b7f8) bg_popup_call_poc_act_pane_g

0xddb9,	// (0x0002a01d) bg_popup_call_poc_inact_pane_g1

0xddc1,	// (0x0002a025) bg_popup_call_poc_inact_pane_g2

0xcee9,	// (0x0002914d) popup_call_poc_act_window_g2

0xddc9,	// (0x0002a02d) bg_popup_call_poc_inact_pane_g3

0xddd1,	// (0x0002a035) bg_popup_call_poc_inact_pane_g4

0xddd9,	// (0x0002a03d) bg_popup_call_poc_inact_pane_g5

0xcef1,	// (0x00029155) popup_call_poc_act_window_t1_ParamLimits

0xcef1,	// (0x00029155) popup_call_poc_act_window_t1

0xcf19,	// (0x0002917d) popup_call_poc_act_window_t2_ParamLimits

0xcf19,	// (0x0002917d) popup_call_poc_act_window_t2

0xcf41,	// (0x000291a5) popup_call_poc_act_window_t3_ParamLimits

0xcf41,	// (0x000291a5) popup_call_poc_act_window_t3

0xcf69,	// (0x000291cd) popup_call_poc_act_window_t4_ParamLimits

0xcf69,	// (0x000291cd) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002b766) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002b766) popup_call_poc_act_window_t

0xdde1,	// (0x0002a045) bg_popup_call_poc_inact_pane_g6

0xdde9,	// (0x0002a04d) bg_popup_call_poc_inact_pane_g7

0xddf1,	// (0x0002a055) bg_popup_call_poc_inact_pane_g8

0xcf7b,	// (0x000291df) popup_call_poc_inact_window_g2

0xddf9,	// (0x0002a05d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002b7e5) bg_popup_call_poc_inact_pane_g

0xcf83,	// (0x000291e7) popup_call_poc_inact_window_t1_ParamLimits

0xcf83,	// (0x000291e7) popup_call_poc_inact_window_t1

0xcf98,	// (0x000291fc) popup_call_poc_inact_window_t2_ParamLimits

0xcf98,	// (0x000291fc) popup_call_poc_inact_window_t2

0xcfad,	// (0x00029211) popup_call_poc_inact_window_t3_ParamLimits

0xcfad,	// (0x00029211) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002b76f) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002b76f) popup_call_poc_inact_window_t

0xdf7e,	// (0x0002a1e2) context_pane_ParamLimits

0x70e7,	// (0x0002334b) signal_pane_ParamLimits

0xc08b,	// (0x000282ef) main_call2_pane

0x3251,	// (0x0001f4b5) popup_phob_thumbnail2_window_ParamLimits

0x3251,	// (0x0001f4b5) popup_phob_thumbnail2_window

0x30ae,	// (0x0001f312) aid_hotspot_pointer_arrow_pane

0x30b6,	// (0x0001f31a) aid_hotspot_pointer_hand_pane

0x6f53,	// (0x000231b7) phob_pre_status_pane_g5

0x4b2f,	// (0x00020d93) cams_zoom_pane_ParamLimits

0x4b3b,	// (0x00020d9f) image_vga_pane_ParamLimits

0x4b4a,	// (0x00020dae) main_camera_pane_g1_ParamLimits

0x4b58,	// (0x00020dbc) main_camera_pane_g2_ParamLimits

0x4b64,	// (0x00020dc8) main_camera_pane_g3_ParamLimits

0x4b70,	// (0x00020dd4) main_camera_pane_g4_ParamLimits

0x4b7c,	// (0x00020de0) main_camera_pane_g5_ParamLimits

0x4b88,	// (0x00020dec) main_camera_pane_g6_ParamLimits

0x4b94,	// (0x00020df8) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002b46e) main_camera_pane_g_ParamLimits

0x4ba0,	// (0x00020e04) main_camera_pane_t1_ParamLimits

0x4bb2,	// (0x00020e16) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002b47f) main_camera_pane_t_ParamLimits

0xbe01,	// (0x00028065) bg_popup_preview_window_pane_cp01_ParamLimits

0xbe01,	// (0x00028065) bg_popup_preview_window_pane_cp01

0xcfc2,	// (0x00029226) popup_phob_thumbnail2_window_g1_ParamLimits

0xcfc2,	// (0x00029226) popup_phob_thumbnail2_window_g1

0xbb98,	// (0x00027dfc) call2_cli_visual_pane

0x6c4d,	// (0x00022eb1) popup_call2_audio_conf_window_ParamLimits

0x6c4d,	// (0x00022eb1) popup_call2_audio_conf_window

0x6c62,	// (0x00022ec6) popup_call2_audio_first_window_ParamLimits

0x6c62,	// (0x00022ec6) popup_call2_audio_first_window

0x6d00,	// (0x00022f64) popup_call2_audio_in_window_ParamLimits

0x6d00,	// (0x00022f64) popup_call2_audio_in_window

0x6d42,	// (0x00022fa6) popup_call2_audio_out_window_ParamLimits

0x6d42,	// (0x00022fa6) popup_call2_audio_out_window

0x6da4,	// (0x00023008) popup_call2_audio_second_window_ParamLimits

0x6da4,	// (0x00023008) popup_call2_audio_second_window

0x6e02,	// (0x00023066) popup_call2_audio_wait_window_ParamLimits

0x6e02,	// (0x00023066) popup_call2_audio_wait_window

0xbb98,	// (0x00027dfc) bg_popup_call2_act_pane_cp03

0xbdd5,	// (0x00028039) list_conf_pane_cp

0xcfce,	// (0x00029232) popup_call2_audio_conf_window_t1

0xc7ce,	// (0x00028a32) list_single_graphic_popup_conf2_pane_ParamLimits

0xc7ce,	// (0x00028a32) list_single_graphic_popup_conf2_pane

0xc7e1,	// (0x00028a45) list_highlight_pane_cp04

0xcfdc,	// (0x00029240) list_single_graphic_popup_conf2_pane_g1

0xc7f2,	// (0x00028a56) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002b776) list_single_graphic_popup_conf2_pane_g

0xcfe6,	// (0x0002924a) list_single_graphic_popup_conf2_pane_t1

0xcff4,	// (0x00029258) bg_popup_call2_act_pane_cp01_ParamLimits

0xcff4,	// (0x00029258) bg_popup_call2_act_pane_cp01

0xd07e,	// (0x000292e2) call_type_pane_cp05_ParamLimits

0xd07e,	// (0x000292e2) call_type_pane_cp05

0xd0d2,	// (0x00029336) popup_call2_audio_second_window_g1_ParamLimits

0xd0d2,	// (0x00029336) popup_call2_audio_second_window_g1

0xd126,	// (0x0002938a) popup_call2_audio_second_window_g2_ParamLimits

0xd126,	// (0x0002938a) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002b77b) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002b77b) popup_call2_audio_second_window_g

0xd18b,	// (0x000293ef) popup_call2_audio_second_window_t1_ParamLimits

0xd18b,	// (0x000293ef) popup_call2_audio_second_window_t1

0xd246,	// (0x000294aa) popup_call2_audio_second_window_t2_ParamLimits

0xd246,	// (0x000294aa) popup_call2_audio_second_window_t2

0xd299,	// (0x000294fd) popup_call2_audio_second_window_t3_ParamLimits

0xd299,	// (0x000294fd) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002b782) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002b782) popup_call2_audio_second_window_t

0xbb98,	// (0x00027dfc) bg_popup_call2_in_pane_cp02

0xbba2,	// (0x00027e06) call_type_pane_cp04

0xbbaa,	// (0x00027e0e) popup_call2_audio_wait_window_g1

0xbbb2,	// (0x00027e16) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002b35d) popup_call2_audio_wait_window_g

0xbbba,	// (0x00027e1e) popup_call2_audio_wait_window_t3

0xd38c,	// (0x000295f0) bg_popup_call2_act_pane_ParamLimits

0xd38c,	// (0x000295f0) bg_popup_call2_act_pane

0xd44c,	// (0x000296b0) call_type_pane_cp03_ParamLimits

0xd44c,	// (0x000296b0) call_type_pane_cp03

0xd4b0,	// (0x00029714) popup_call2_audio_first_window_g1_ParamLimits

0xd4b0,	// (0x00029714) popup_call2_audio_first_window_g1

0xd520,	// (0x00029784) popup_call2_audio_first_window_g2_ParamLimits

0xd520,	// (0x00029784) popup_call2_audio_first_window_g2

0xc90f,	// (0x00028b73) popup_call2_audio_first_window_g3_ParamLimits

0xc90f,	// (0x00028b73) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002b78b) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002b78b) popup_call2_audio_first_window_g

0xd5fe,	// (0x00029862) popup_call2_audio_first_window_t1_ParamLimits

0xd5fe,	// (0x00029862) popup_call2_audio_first_window_t1

0xd701,	// (0x00029965) popup_call2_audio_first_window_t4_ParamLimits

0xd701,	// (0x00029965) popup_call2_audio_first_window_t4

0xd7e4,	// (0x00029a48) popup_call2_audio_first_window_t5_ParamLimits

0xd7e4,	// (0x00029a48) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002b796) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002b796) popup_call2_audio_first_window_t

0xbdf9,	// (0x0002805d) bg_popup_call2_act_pane_g1

0xde51,	// (0x0002a0b5) popup_cale_lunar_info_window_t1

0xde5f,	// (0x0002a0c3) popup_cale_lunar_info_window_t2

0xde6d,	// (0x0002a0d1) popup_cale_lunar_info_window_t3

0xbb98,	// (0x00027dfc) bg_popup_call2_bubble_pane

0xd8e5,	// (0x00029b49) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8e5,	// (0x00029b49) bg_popup_call2_in_pane_cp01

0xb874,	// (0x00027ad8) call_type_pane_cp02

0xd92d,	// (0x00029b91) popup_call2_audio_out_window_g1_ParamLimits

0xd92d,	// (0x00029b91) popup_call2_audio_out_window_g1

0xd959,	// (0x00029bbd) popup_call2_audio_out_window_g2_ParamLimits

0xd959,	// (0x00029bbd) popup_call2_audio_out_window_g2

0xd981,	// (0x00029be5) popup_call2_audio_out_window_g3_ParamLimits

0xd981,	// (0x00029be5) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002b79f) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002b79f) popup_call2_audio_out_window_g

0xd9bc,	// (0x00029c20) popup_call2_audio_out_window_t1_ParamLimits

0xd9bc,	// (0x00029c20) popup_call2_audio_out_window_t1

0xda1b,	// (0x00029c7f) popup_call2_audio_out_window_t2_ParamLimits

0xda1b,	// (0x00029c7f) popup_call2_audio_out_window_t2

0xda6f,	// (0x00029cd3) popup_call2_audio_out_window_t3_ParamLimits

0xda6f,	// (0x00029cd3) popup_call2_audio_out_window_t3

0xda85,	// (0x00029ce9) popup_call2_audio_out_window_t4_ParamLimits

0xda85,	// (0x00029ce9) popup_call2_audio_out_window_t4

0xda9b,	// (0x00029cff) popup_call2_audio_out_window_t5_ParamLimits

0xda9b,	// (0x00029cff) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002b7a8) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002b7a8) popup_call2_audio_out_window_t

0xdaff,	// (0x00029d63) bg_popup_call2_in_pane_ParamLimits

0xdaff,	// (0x00029d63) bg_popup_call2_in_pane

0xdb5b,	// (0x00029dbf) popup_call2_audio_in_window_g1_ParamLimits

0xdb5b,	// (0x00029dbf) popup_call2_audio_in_window_g1

0xdb93,	// (0x00029df7) popup_call2_audio_in_window_g2_ParamLimits

0xdb93,	// (0x00029df7) popup_call2_audio_in_window_g2

0xdbcb,	// (0x00029e2f) popup_call2_audio_in_window_g3_ParamLimits

0xdbcb,	// (0x00029e2f) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002b7b5) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002b7b5) popup_call2_audio_in_window_g

0xdc23,	// (0x00029e87) popup_call2_audio_in_window_t1_ParamLimits

0xdc23,	// (0x00029e87) popup_call2_audio_in_window_t1

0xdca3,	// (0x00029f07) popup_call2_audio_in_window_t2_ParamLimits

0xdca3,	// (0x00029f07) popup_call2_audio_in_window_t2

0xdd23,	// (0x00029f87) popup_call2_audio_in_window_t3_ParamLimits

0xdd23,	// (0x00029f87) popup_call2_audio_in_window_t3

0xdd3d,	// (0x00029fa1) popup_call2_audio_in_window_t4_ParamLimits

0xdd3d,	// (0x00029fa1) popup_call2_audio_in_window_t4

0xdd4f,	// (0x00029fb3) popup_call2_audio_in_window_t5_ParamLimits

0xdd4f,	// (0x00029fb3) popup_call2_audio_in_window_t5

0xdd64,	// (0x00029fc8) popup_call2_audio_in_window_t6_ParamLimits

0xdd64,	// (0x00029fc8) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002b7be) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002b7be) popup_call2_audio_in_window_t

0xbdf9,	// (0x0002805d) bg_popup_call2_in_pane_g1

0xde7b,	// (0x0002a0df) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002b826) popup_cale_lunar_info_window_t

0xbe01,	// (0x00028065) bg_popup_call2_rect_pane_ParamLimits

0xbe01,	// (0x00028065) bg_popup_call2_rect_pane

0xbb98,	// (0x00027dfc) call2_cli_visual_graphic_pane

0xbb98,	// (0x00027dfc) call2_cli_visual_text_pane

0x32a0,	// (0x0001f504) smil_status_volume_pane_g3

0x0002,

0xbf1b,	// (0x0002817f) call2_cli_visual_graphic_pane_g1

0xbf1b,	// (0x0002817f) call2_cli_visual_graphic_pane_g2

0xbf1b,	// (0x0002817f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002b7cb) call2_cli_visual_graphic_pane_g

0xdd79,	// (0x00029fdd) bg_popup_call2_rect_pane_g1

0xbfa7,	// (0x0002820b) bg_popup_call2_rect_pane_g2

0xdd81,	// (0x00029fe5) bg_popup_call2_rect_pane_g3

0xdd89,	// (0x00029fed) bg_popup_call2_rect_pane_g4

0xdd91,	// (0x00029ff5) bg_popup_call2_rect_pane_g5

0xdd99,	// (0x00029ffd) bg_popup_call2_rect_pane_g6

0xdda1,	// (0x0002a005) bg_popup_call2_rect_pane_g7

0xdda9,	// (0x0002a00d) bg_popup_call2_rect_pane_g8

0xddb1,	// (0x0002a015) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002b7d2) bg_popup_call2_rect_pane_g

0xddb9,	// (0x0002a01d) bg_popup_call2_bubble_pane_g1

0xddc1,	// (0x0002a025) bg_popup_call2_bubble_pane_g2

0xddc9,	// (0x0002a02d) bg_popup_call2_bubble_pane_g3

0xddd1,	// (0x0002a035) bg_popup_call2_bubble_pane_g4

0xddd9,	// (0x0002a03d) bg_popup_call2_bubble_pane_g5

0xdde1,	// (0x0002a045) bg_popup_call2_bubble_pane_g6

0xdde9,	// (0x0002a04d) bg_popup_call2_bubble_pane_g7

0xddf1,	// (0x0002a055) bg_popup_call2_bubble_pane_g8

0xddf9,	// (0x0002a05d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002b7e5) bg_popup_call2_bubble_pane_g

0x4736,	// (0x0002099a) aid_cale_week_size_cell_pane

0x4bc4,	// (0x00020e28) aid_cams_cif_uncrop_pane_ParamLimits

0x4bc4,	// (0x00020e28) aid_cams_cif_uncrop_pane

0x4d1f,	// (0x00020f83) aid_cams_size_cell_ParamLimits

0x4d1f,	// (0x00020f83) aid_cams_size_cell

0x4d2b,	// (0x00020f8f) grid_cams_pane_ParamLimits

0x4d39,	// (0x00020f9d) linegrid_cams_pane_ParamLimits

0x4f24,	// (0x00021188) call_video_pane_t1

0x4f45,	// (0x000211a9) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002b4d2) call_video_pane_t

0x548c,	// (0x000216f0) aid_cale_month_size_cell_pane_ParamLimits

0x548c,	// (0x000216f0) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002b86f) smil_status_volume_pane_g

0x32ad,	// (0x0001f511) volume_smil_pane_ParamLimits

0x2a49,	// (0x0001ecad) aid_popup2_width_pane

0x4672,	// (0x000208d6) cell_qdial_pane_g4_ParamLimits

0x4672,	// (0x000208d6) cell_qdial_pane_g4

0x63a0,	// (0x00022604) aid_blid_cardinal_pane_ParamLimits

0x63b0,	// (0x00022614) aid_blid_destination_pane_ParamLimits

0x63b0,	// (0x00022614) aid_blid_destination_pane

0xbe01,	// (0x00028065) bg_popup_call_poc_act_pane_ParamLimits

0xbe01,	// (0x00028065) bg_popup_call_poc_act_pane

0xbe01,	// (0x00028065) bg_popup_call_poc_inact_pane_ParamLimits

0xbe01,	// (0x00028065) bg_popup_call_poc_inact_pane

0xde01,	// (0x0002a065) bg_popup_call_poc_act_pane_g1

0xde09,	// (0x0002a06d) bg_popup_call_poc_act_pane_g2

0xde11,	// (0x0002a075) bg_popup_call_poc_act_pane_g3

0xddd1,	// (0x0002a035) bg_popup_call_poc_act_pane_g4

0xddd9,	// (0x0002a03d) bg_popup_call_poc_act_pane_g5

0xde19,	// (0x0002a07d) bg_popup_call_poc_act_pane_g6

0xdde9,	// (0x0002a04d) bg_popup_call_poc_act_pane_g7

0xde21,	// (0x0002a085) bg_popup_call_poc_act_pane_g8

0xbb98,	// (0x00027dfc) main_usb_pane

0x3180,	// (0x0001f3e4) popup_cale_lunar_info_window

0x526e,	// (0x000214d2) im_reading_pane_t1_ParamLimits

0xc18c,	// (0x000283f0) list_im_pane_ParamLimits

0xc19d,	// (0x00028401) scroll_pane_cp07_ParamLimits

0xbb98,	// (0x00027dfc) grid_highlight_pane_cp012

0xbe01,	// (0x00028065) mup_scale_pane_ParamLimits

0xc90f,	// (0x00028b73) main_usb_pane_g1_ParamLimits

0xc90f,	// (0x00028b73) main_usb_pane_g1

0x6e76,	// (0x000230da) main_usb_pane_g2_ParamLimits

0x6e76,	// (0x000230da) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002b80f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002b80f) main_usb_pane_g

0x6e82,	// (0x000230e6) main_usb_pane_t1_ParamLimits

0x6e82,	// (0x000230e6) main_usb_pane_t1

0x6e94,	// (0x000230f8) main_usb_pane_t2_ParamLimits

0x6e94,	// (0x000230f8) main_usb_pane_t2

0x6ea6,	// (0x0002310a) main_usb_pane_t3_ParamLimits

0x6ea6,	// (0x0002310a) main_usb_pane_t3

0x6eb8,	// (0x0002311c) main_usb_pane_t4_ParamLimits

0x6eb8,	// (0x0002311c) main_usb_pane_t4

0x6eca,	// (0x0002312e) main_usb_pane_t5_ParamLimits

0x6eca,	// (0x0002312e) main_usb_pane_t5

0x6edc,	// (0x00023140) main_usb_pane_t6_ParamLimits

0x6edc,	// (0x00023140) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002b814) main_usb_pane_t_ParamLimits

0x6346,	// (0x000225aa) aid_text_placing

0x6352,	// (0x000225b6) main_location2_pane_t1_ParamLimits

0x6366,	// (0x000225ca) main_location2_pane_t2_ParamLimits

0x637a,	// (0x000225de) main_location2_pane_t3_ParamLimits

0x638e,	// (0x000225f2) main_location2_pane_t4_ParamLimits

0x638e,	// (0x000225f2) main_location2_pane_t4

0xf3cf,	// (0x0002b633) main_location2_pane_t_ParamLimits

0xbe3d,	// (0x000280a1) find_pinb_pane_g2_ParamLimits

0xbe3d,	// (0x000280a1) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002b383) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002b383) find_pinb_pane_g

0xbe49,	// (0x000280ad) find_pinb_pane_t1_ParamLimits

0xbe5b,	// (0x000280bf) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002b388) find_pinb_pane_t_ParamLimits

0xbb98,	// (0x00027dfc) main_call3_pane

0x5a2f,	// (0x00021c93) cale_month_day_heading_pane_t1_ParamLimits

0x5ab5,	// (0x00021d19) cale_month_day_heading_pane_t2_ParamLimits

0x5b2e,	// (0x00021d92) cale_month_day_heading_pane_t3_ParamLimits

0x5ba7,	// (0x00021e0b) cale_month_day_heading_pane_t4_ParamLimits

0x5c20,	// (0x00021e84) cale_month_day_heading_pane_t5_ParamLimits

0x5c99,	// (0x00021efd) cale_month_day_heading_pane_t6_ParamLimits

0x5d12,	// (0x00021f76) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002b50a) cale_month_day_heading_pane_t_ParamLimits

0xc3e7,	// (0x0002864b) smil_status_volume_pane

0x6a3a,	// (0x00022c9e) postcard_address_pane_ParamLimits

0x6a3a,	// (0x00022c9e) postcard_address_pane

0x6a46,	// (0x00022caa) postcard_message_pane_ParamLimits

0x6a46,	// (0x00022caa) postcard_message_pane

0x6e41,	// (0x000230a5) call2_cli_visual_pane_t1_ParamLimits

0x6e41,	// (0x000230a5) call2_cli_visual_pane_t1

0x72cf,	// (0x00023533) postcard_message_pane_t1_ParamLimits

0x72cf,	// (0x00023533) postcard_message_pane_t1

0x72b8,	// (0x0002351c) postcard_address_pane_t1_ParamLimits

0x72b8,	// (0x0002351c) postcard_address_pane_t1

0x72a9,	// (0x0002350d) popup_call3_audio_in_window_ParamLimits

0x72a9,	// (0x0002350d) popup_call3_audio_in_window

0x718d,	// (0x000233f1) bg_popup_call3_in_pane_ParamLimits

0x718d,	// (0x000233f1) bg_popup_call3_in_pane

0x71ef,	// (0x00023453) popup_call3_audio_in_window_g1_ParamLimits

0x71ef,	// (0x00023453) popup_call3_audio_in_window_g1

0x7207,	// (0x0002346b) popup_call3_audio_in_window_g2_ParamLimits

0x7207,	// (0x0002346b) popup_call3_audio_in_window_g2

0x721f,	// (0x00023483) popup_call3_audio_in_window_g3_ParamLimits

0x721f,	// (0x00023483) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002b876) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002b876) popup_call3_audio_in_window_g

0x7247,	// (0x000234ab) popup_call3_audio_in_window_t1_ParamLimits

0x7247,	// (0x000234ab) popup_call3_audio_in_window_t1

0x726f,	// (0x000234d3) popup_call3_audio_in_window_t2_ParamLimits

0x726f,	// (0x000234d3) popup_call3_audio_in_window_t2

0x7297,	// (0x000234fb) popup_call3_audio_in_window_t3_ParamLimits

0x7297,	// (0x000234fb) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002b87f) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002b87f) popup_call3_audio_in_window_t

0xc08b,	// (0x000282ef) bg_popup_call3_rect_pane

0xdd79,	// (0x00029fdd) bg_popup_call3_rect_pane_g1

0xbfa7,	// (0x0002820b) bg_popup_call3_rect_pane_g2

0xdd81,	// (0x00029fe5) bg_popup_call3_rect_pane_g3

0xdd89,	// (0x00029fed) bg_popup_call3_rect_pane_g4

0xdd91,	// (0x00029ff5) bg_popup_call3_rect_pane_g5

0xdd99,	// (0x00029ffd) bg_popup_call3_rect_pane_g6

0xdda1,	// (0x0002a005) bg_popup_call3_rect_pane_g7

0x66b4,	// (0x00022918) mup_visualizer_osc_pane

0xcbb6,	// (0x00028e1a) mup_visualizer_spec_pane

0x71ad,	// (0x00023411) call3_video_qcif_pane_ParamLimits

0x71ad,	// (0x00023411) call3_video_qcif_pane

0x71bf,	// (0x00023423) call3_video_qcif_uncrop_pane_ParamLimits

0x71bf,	// (0x00023423) call3_video_qcif_uncrop_pane

0x71cd,	// (0x00023431) call3_video_subqcif_pane_ParamLimits

0x71cd,	// (0x00023431) call3_video_subqcif_pane

0x71df,	// (0x00023443) call3_video_subqcif_uncrop_pane_ParamLimits

0x71df,	// (0x00023443) call3_video_subqcif_uncrop_pane

0x7237,	// (0x0002349b) popup_call3_audio_in_window_g4_ParamLimits

0x7237,	// (0x0002349b) popup_call3_audio_in_window_g4

0x717c,	// (0x000233e0) mup_spec_half_pane

0x7185,	// (0x000233e9) mup_spec_half_pane_cp

0xdfde,	// (0x0002a242) mup_osc_middle_pane

0xdfe7,	// (0x0002a24b) mup_visualizer_osc_pane_g1

0x715d,	// (0x000233c1) mup_spec_bar_pane_ParamLimits

0x715d,	// (0x000233c1) mup_spec_bar_pane

0xdfcb,	// (0x0002a22f) mup_spec_bar_pane_g1

0xdfd5,	// (0x0002a239) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002b86a) mup_spec_bar_pane_g

0x4736,	// (0x0002099a) aid_cale_week_size_cell_pane_ParamLimits

0x474b,	// (0x000209af) bg_cale_heading_pane_ParamLimits

0xbfe4,	// (0x00028248) bg_cale_pane_cp01_ParamLimits

0x476b,	// (0x000209cf) cale_week_corner_pane_ParamLimits

0x4785,	// (0x000209e9) cale_week_day_heading_pane_ParamLimits

0x47a5,	// (0x00020a09) cale_week_scroll_pane_g1_ParamLimits

0x47c0,	// (0x00020a24) cale_week_scroll_pane_g2_ParamLimits

0x47d3,	// (0x00020a37) cale_week_scroll_pane_g3_ParamLimits

0x47e6,	// (0x00020a4a) cale_week_scroll_pane_g4_ParamLimits

0x47f9,	// (0x00020a5d) cale_week_scroll_pane_g5_ParamLimits

0x480c,	// (0x00020a70) cale_week_scroll_pane_g6_ParamLimits

0x481f,	// (0x00020a83) cale_week_scroll_pane_g7_ParamLimits

0x4834,	// (0x00020a98) cale_week_scroll_pane_g8_ParamLimits

0x4849,	// (0x00020aad) cale_week_scroll_pane_g9_ParamLimits

0x485c,	// (0x00020ac0) cale_week_scroll_pane_g10_ParamLimits

0x486f,	// (0x00020ad3) cale_week_scroll_pane_g11_ParamLimits

0x4882,	// (0x00020ae6) cale_week_scroll_pane_g12_ParamLimits

0x4899,	// (0x00020afd) cale_week_scroll_pane_g13_ParamLimits

0x48b4,	// (0x00020b18) cale_week_scroll_pane_g14_ParamLimits

0x48cf,	// (0x00020b33) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002b414) cale_week_scroll_pane_g_ParamLimits

0x48ff,	// (0x00020b63) cale_week_time_pane_ParamLimits

0x4914,	// (0x00020b78) grid_cale_week_pane_ParamLimits

0xc001,	// (0x00028265) listscroll_cale_week_pane_t1

0xc013,	// (0x00028277) scroll_pane_cp08_ParamLimits

0x5500,	// (0x00021764) cale_month_corner_pane_ParamLimits

0xc3bd,	// (0x00028621) cale_month_pane_t1

0x59b2,	// (0x00021c16) cale_month_week_pane_ParamLimits

0xc90f,	// (0x00028b73) popup_call_status_window_g1_ParamLimits

0x61ec,	// (0x00022450) popup_call_status_window_g2_ParamLimits

0x61f8,	// (0x0002245c) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002b5ba) popup_call_status_window_g_ParamLimits

0xc761,	// (0x000289c5) aid_call2_pane

0x6958,	// (0x00022bbc) msg_header_pane_g1

0x6a3a,	// (0x00022c9e) postcard_address2_pane_ParamLimits

0x6a3a,	// (0x00022c9e) postcard_address2_pane

0x6a46,	// (0x00022caa) postcard_message2_pane_ParamLimits

0x6a46,	// (0x00022caa) postcard_message2_pane

0x70f5,	// (0x00023359) message2_row_pane_ParamLimits

0x70f5,	// (0x00023359) message2_row_pane

0x7110,	// (0x00023374) address2_row_pane_ParamLimits

0x7110,	// (0x00023374) address2_row_pane

0xdf99,	// (0x0002a1fd) postcard_message2_row_pane_g1

0xdfa1,	// (0x0002a205) postcard_message2_row_pane_t1

0xdf99,	// (0x0002a1fd) address2_row_pane_g1

0xdfa1,	// (0x0002a205) address2_row_pane_t1

0x4ab4,	// (0x00020d18) aid_size_cell_vorec

0xbb98,	// (0x00027dfc) main_rss_pane

0x7123,	// (0x00023387) rss_list_single_pane_ParamLimits

0x7123,	// (0x00023387) rss_list_single_pane

0xdfaf,	// (0x0002a213) rss_list_single_pane_t1

0xdfbd,	// (0x0002a221) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002b865) rss_list_single_pane_t

0xbb98,	// (0x00027dfc) main_camera2_pane

0xbb98,	// (0x00027dfc) main_video2_pane

0x330b,	// (0x0001f56f) cams_zoom_pane_cp2_ParamLimits

0x330b,	// (0x0001f56f) cams_zoom_pane_cp2

0x3317,	// (0x0001f57b) image2_vga_pane_ParamLimits

0x3317,	// (0x0001f57b) image2_vga_pane

0x3326,	// (0x0001f58a) main_camera2_pane_g1_ParamLimits

0x3326,	// (0x0001f58a) main_camera2_pane_g1

0x3332,	// (0x0001f596) main_camera2_pane_g2_ParamLimits

0x3332,	// (0x0001f596) main_camera2_pane_g2

0x333e,	// (0x0001f5a2) main_camera2_pane_g3_ParamLimits

0x333e,	// (0x0001f5a2) main_camera2_pane_g3

0x334a,	// (0x0001f5ae) main_camera2_pane_g4_ParamLimits

0x334a,	// (0x0001f5ae) main_camera2_pane_g4

0x3356,	// (0x0001f5ba) main_camera2_pane_g5_ParamLimits

0x3356,	// (0x0001f5ba) main_camera2_pane_g5

0x3362,	// (0x0001f5c6) main_camera2_pane_g6_ParamLimits

0x3362,	// (0x0001f5c6) main_camera2_pane_g6

0x336e,	// (0x0001f5d2) main_camera2_pane_g7_ParamLimits

0x336e,	// (0x0001f5d2) main_camera2_pane_g7

0x337a,	// (0x0001f5de) main_camera2_pane_g8_ParamLimits

0x337a,	// (0x0001f5de) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002b886) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002b886) main_camera2_pane_g

0x3392,	// (0x0001f5f6) main_camera2_pane_t1_ParamLimits

0x3392,	// (0x0001f5f6) main_camera2_pane_t1

0x33a4,	// (0x0001f608) main_camera2_pane_t2_ParamLimits

0x33a4,	// (0x0001f608) main_camera2_pane_t2

0x33b6,	// (0x0001f61a) main_camera2_pane_t3_ParamLimits

0x33b6,	// (0x0001f61a) main_camera2_pane_t3

0x33c8,	// (0x0001f62c) main_camera2_pane_t4_ParamLimits

0x33c8,	// (0x0001f62c) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002b899) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002b899) main_camera2_pane_t

0x342a,	// (0x0001f68e) cams_zoom_pane_cp4_ParamLimits

0x342a,	// (0x0001f68e) cams_zoom_pane_cp4

0x343a,	// (0x0001f69e) image2_cif_pane_ParamLimits

0x343a,	// (0x0001f69e) image2_cif_pane

0x344f,	// (0x0001f6b3) image2_subqcif_pane_ParamLimits

0x344f,	// (0x0001f6b3) image2_subqcif_pane

0x345e,	// (0x0001f6c2) main_video2_pane_g1_ParamLimits

0x345e,	// (0x0001f6c2) main_video2_pane_g1

0x3470,	// (0x0001f6d4) main_video2_pane_g2_ParamLimits

0x3470,	// (0x0001f6d4) main_video2_pane_g2

0x3480,	// (0x0001f6e4) main_video2_pane_g3_ParamLimits

0x3480,	// (0x0001f6e4) main_video2_pane_g3

0x3490,	// (0x0001f6f4) main_video2_pane_g4_ParamLimits

0x3490,	// (0x0001f6f4) main_video2_pane_g4

0x34a0,	// (0x0001f704) main_video2_pane_g5_ParamLimits

0x34a0,	// (0x0001f704) main_video2_pane_g5

0x34b0,	// (0x0001f714) main_video2_pane_g6_ParamLimits

0x34b0,	// (0x0001f714) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002b8a8) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002b8a8) main_video2_pane_g

0x34c2,	// (0x0001f726) main_video2_pane_t1_ParamLimits

0x34c2,	// (0x0001f726) main_video2_pane_t1

0x34dc,	// (0x0001f740) main_video2_pane_t2_ParamLimits

0x34dc,	// (0x0001f740) main_video2_pane_t2

0x3502,	// (0x0001f766) main_video2_pane_t3_ParamLimits

0x3502,	// (0x0001f766) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002b8b5) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002b8b5) main_video2_pane_t

0x6f93,	// (0x000231f7) call_muted_g2

0x0001,

0xf5f3,	// (0x0002b857) call_muted_g

0xbb98,	// (0x00027dfc) main_mup2_pane

0xe01e,	// (0x0002a282) main_mup2_pane_g1_ParamLimits

0xe01e,	// (0x0002a282) main_mup2_pane_g1

0x72ea,	// (0x0002354e) main_mup2_pane_g2_ParamLimits

0x72ea,	// (0x0002354e) main_mup2_pane_g2

0x3551,	// (0x0001f7b5) main_mup_pane_g13_cp1

0x3559,	// (0x0001f7bd) mup_volume_pane_cp1

0x730a,	// (0x0002356e) main_mup2_pane_g4_ParamLimits

0x730a,	// (0x0002356e) main_mup2_pane_g4

0x731f,	// (0x00023583) main_mup2_pane_g5_ParamLimits

0x731f,	// (0x00023583) main_mup2_pane_g5

0x7334,	// (0x00023598) main_mup2_pane_g6_ParamLimits

0x7334,	// (0x00023598) main_mup2_pane_g6

0x7349,	// (0x000235ad) main_mup2_pane_g7_ParamLimits

0x7349,	// (0x000235ad) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002b8bc) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002b8bc) main_mup2_pane_g

0x7365,	// (0x000235c9) main_mup2_pane_t1_ParamLimits

0x7365,	// (0x000235c9) main_mup2_pane_t1

0x737c,	// (0x000235e0) main_mup2_pane_t2_ParamLimits

0x737c,	// (0x000235e0) main_mup2_pane_t2

0x7393,	// (0x000235f7) main_mup2_pane_t3_ParamLimits

0x7393,	// (0x000235f7) main_mup2_pane_t3

0x73aa,	// (0x0002360e) main_mup2_pane_t4_ParamLimits

0x73aa,	// (0x0002360e) main_mup2_pane_t4

0x73c4,	// (0x00023628) main_mup2_pane_t5_ParamLimits

0x73c4,	// (0x00023628) main_mup2_pane_t5

0x73de,	// (0x00023642) main_mup2_pane_t6_ParamLimits

0x73de,	// (0x00023642) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002b8cb) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002b8cb) main_mup2_pane_t

0x7416,	// (0x0002367a) mup2_visualizer_pane_ParamLimits

0x7416,	// (0x0002367a) mup2_visualizer_pane

0x744c,	// (0x000236b0) mup_progress_pane_cp_ParamLimits

0x744c,	// (0x000236b0) mup_progress_pane_cp

0x353c,	// (0x0001f7a0) mup_volume_pane_cp_ParamLimits

0x353c,	// (0x0001f7a0) mup_volume_pane_cp

0x7463,	// (0x000236c7) mup2_visualizer_pane_g1_ParamLimits

0x7463,	// (0x000236c7) mup2_visualizer_pane_g1

0xe02a,	// (0x0002a28e) mup2_visualizer_pane_g2_ParamLimits

0xe02a,	// (0x0002a28e) mup2_visualizer_pane_g2

0x7478,	// (0x000236dc) mup2_visualizer_pane_g3_ParamLimits

0x7478,	// (0x000236dc) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002b8d8) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002b8d8) mup2_visualizer_pane_g

0xce5e,	// (0x000290c2) aid_size_cell_fmradio

0x3114,	// (0x0001f378) aid_height_parent_landcape

0xc21b,	// (0x0002847f) wml_content_pane_cp

0xc223,	// (0x00028487) wml_tabs_pane

0xc22c,	// (0x00028490) popup_wml_miniature_window

0xc234,	// (0x00028498) scroll_pane_cp021

0xc248,	// (0x000284ac) wml_content_pane_comp8

0xbb98,	// (0x00027dfc) bg_popup_sub_pane_cp05

0xe048,	// (0x0002a2ac) popup_wml_miniature_window_g1

0xe050,	// (0x0002a2b4) wml_miniature_view_pane

0x7486,	// (0x000236ea) aid_size_wml_view

0x748e,	// (0x000236f2) wml_miniature_view_pane_g1

0x7497,	// (0x000236fb) wml_miniature_view_pane_g2

0x74a0,	// (0x00023704) wml_miniature_view_pane_g3

0x74a8,	// (0x0002370c) wml_miniature_view_pane_g4

0x74b0,	// (0x00023714) wml_miniature_view_pane_g5

0x74b8,	// (0x0002371c) wml_miniature_view_pane_g6

0x74c0,	// (0x00023724) wml_miniature_view_pane_g7

0x74c8,	// (0x0002372c) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002b8df) wml_miniature_view_pane_g

0xe01e,	// (0x0002a282) background_graphic_ParamLimits

0xe01e,	// (0x0002a282) background_graphic

0xe058,	// (0x0002a2bc) wml_tabs_2_pane

0xe061,	// (0x0002a2c5) wml_tabs_3_pane_ParamLimits

0xe061,	// (0x0002a2c5) wml_tabs_3_pane

0xe073,	// (0x0002a2d7) wml_tabs_4_pane_ParamLimits

0xe073,	// (0x0002a2d7) wml_tabs_4_pane

0xe089,	// (0x0002a2ed) wml_tabs_5_pane_ParamLimits

0xe089,	// (0x0002a2ed) wml_tabs_5_pane

0xe0a3,	// (0x0002a307) wml_tabs_pane_g2_ParamLimits

0xe0a3,	// (0x0002a307) wml_tabs_pane_g2

0xe0b7,	// (0x0002a31b) wml_tabs_pane_g3_ParamLimits

0xe0b7,	// (0x0002a31b) wml_tabs_pane_g3

0x74d0,	// (0x00023734) wml_tabs_2_active_pane_ParamLimits

0x74d0,	// (0x00023734) wml_tabs_2_active_pane

0x74e0,	// (0x00023744) wml_tabs_2_passive_pane_ParamLimits

0x74e0,	// (0x00023744) wml_tabs_2_passive_pane

0x74f0,	// (0x00023754) wml_tabs_3_active_pane_cp_ParamLimits

0x74f0,	// (0x00023754) wml_tabs_3_active_pane_cp

0x7501,	// (0x00023765) wml_tabs_3_passive_pane_ParamLimits

0x7501,	// (0x00023765) wml_tabs_3_passive_pane

0x7512,	// (0x00023776) wml_tabs_3_passive_pane_cp_ParamLimits

0x7512,	// (0x00023776) wml_tabs_3_passive_pane_cp

0x7523,	// (0x00023787) tabs_4_active_pane

0x752b,	// (0x0002378f) tabs_4_passive_pane

0x7533,	// (0x00023797) tabs_4_passive_pane_cp

0x753b,	// (0x0002379f) tabs_4_passive_pane_cp2

0x6e6e,	// (0x000230d2) aid_height_text

0x6681,	// (0x000228e5) mup_volume_cont_pane_ParamLimits

0x6681,	// (0x000228e5) mup_volume_cont_pane

0x4411,	// (0x00020675) aid_size_cell_pinb

0x441b,	// (0x0002067f) aid_size_list_pinb

0x7435,	// (0x00023699) mup2_volume_cont_pane_ParamLimits

0x7435,	// (0x00023699) mup2_volume_cont_pane

0x3528,	// (0x0001f78c) mup2_volume_cont_pane_g1_ParamLimits

0x3528,	// (0x0001f78c) mup2_volume_cont_pane_g1

0x2a55,	// (0x0001ecb9) aid_size_cell_touch_ParamLimits

0x2a55,	// (0x0001ecb9) aid_size_cell_touch

0x2cdd,	// (0x0001ef41) touch_pane_ParamLimits

0x2cdd,	// (0x0001ef41) touch_pane

0x2cd3,	// (0x0001ef37) main_rss2_pane

0xe0d4,	// (0x0002a338) listscroll_rss2_pane

0xe0dd,	// (0x0002a341) rss2_navigation_pane

0xe0e5,	// (0x0002a349) list_rss2_pane

0xc8a4,	// (0x00028b08) scroll_pane_cp22

0xe0ed,	// (0x0002a351) rss2_navigation_pane_g1

0xe0f6,	// (0x0002a35a) rss2_navigation_pane_g2

0xe0fe,	// (0x0002a362) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002b8f0) rss2_navigation_pane_g

0xe106,	// (0x0002a36a) rss2_navigation_pane_t1

0x7543,	// (0x000237a7) rss2_list_single_pane_ParamLimits

0x7543,	// (0x000237a7) rss2_list_single_pane

0xe114,	// (0x0002a378) rss2_list_single_pane_t2

0xe122,	// (0x0002a386) rss2_list_single_pane_t3_ParamLimits

0xe122,	// (0x0002a386) rss2_list_single_pane_t3

0xe148,	// (0x0002a3ac) rss2_list_single_pane_t4

0x5fa0,	// (0x00022204) smil_status_pane_g1

0x312b,	// (0x0001f38f) main_image2_pane_ParamLimits

0x312b,	// (0x0001f38f) main_image2_pane

0x3386,	// (0x0001f5ea) main_camera2_pane_g9_ParamLimits

0x3386,	// (0x0001f5ea) main_camera2_pane_g9

0x33da,	// (0x0001f63e) main_camera2_pane_t5_ParamLimits

0x33da,	// (0x0001f63e) main_camera2_pane_t5

0x33ec,	// (0x0001f650) main_camera2_pane_t6_ParamLimits

0x33ec,	// (0x0001f650) main_camera2_pane_t6

0x7574,	// (0x000237d8) main_image2_pane_g1_ParamLimits

0x7574,	// (0x000237d8) main_image2_pane_g1

0x6c0e,	// (0x00022e72) smil2_video_pane_ParamLimits

0x6c0e,	// (0x00022e72) smil2_video_pane

0x2a89,	// (0x0001eced) aid_zoom_text_primary_cp

0x2c7a,	// (0x0001eede) popup_preview_fixed_window

0xc184,	// (0x000283e8) im_reading_pane_g1

0x32d0,	// (0x0001f534) cams2_bc_adjust_pane_cp_ParamLimits

0x32d0,	// (0x0001f534) cams2_bc_adjust_pane_cp

0x341c,	// (0x0001f680) cams2_bc_adjust_pane_ParamLimits

0x341c,	// (0x0001f680) cams2_bc_adjust_pane

0x0465,	// (0x0001c6c9) cams2_bc_adjust_pane_g1

0x3561,	// (0x0001f7c5) cams2_slider_pane

0x356a,	// (0x0001f7ce) cams2_slider_pane_g1

0x3573,	// (0x0001f7d7) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002b8f7) cams2_slider_pane_g

0x2d4e,	// (0x0001efb2) calc_display_pane_ParamLimits

0x2d6c,	// (0x0001efd0) calc_paper_pane_ParamLimits

0x2d88,	// (0x0001efec) grid_calc_pane_ParamLimits

0x307f,	// (0x0001f2e3) popup_clock_digital_window_t1_ParamLimits

0xcdfb,	// (0x0002905f) main_image_pane_t1

0x2d34,	// (0x0001ef98) aid_size_cell_calc_ParamLimits

0x2d34,	// (0x0001ef98) aid_size_cell_calc

0x315c,	// (0x0001f3c0) popup_blid_sat_info2_window_ParamLimits

0x315c,	// (0x0001f3c0) popup_blid_sat_info2_window

0xe15e,	// (0x0002a3c2) aid_size_cell_blid

0xe166,	// (0x0002a3ca) bg_popup_window_pane_cp07

0xe189,	// (0x0002a3ed) grid_popup_blid_pane

0xe193,	// (0x0002a3f7) heading_pane_cp05_ParamLimits

0xe193,	// (0x0002a3f7) heading_pane_cp05

0xe25d,	// (0x0002a4c1) cell_popup_blid_pane_ParamLimits

0xe25d,	// (0x0002a4c1) cell_popup_blid_pane

0xe281,	// (0x0002a4e5) cell_popup_blid_pane_g1

0xe289,	// (0x0002a4ed) cell_popup_blid_pane_t1

0x73fb,	// (0x0002365f) mup2_indicator_pane_ParamLimits

0x73fb,	// (0x0002365f) mup2_indicator_pane

0xc08b,	// (0x000282ef) mup2_visualizer_osc_pane

0xe036,	// (0x0002a29a) mup2_visualizer_spec_pane_ParamLimits

0xe036,	// (0x0002a29a) mup2_visualizer_spec_pane

0x7580,	// (0x000237e4) mup2_spec_half_pane

0x7589,	// (0x000237ed) mup2_spec_half_pane_cp

0x7593,	// (0x000237f7) mup2_spec_bar_pane_ParamLimits

0x7593,	// (0x000237f7) mup2_spec_bar_pane

0xdfcb,	// (0x0002a22f) mup2_spec_bar_pane_g1

0xdfd5,	// (0x0002a239) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002b86a) mup2_spec_bar_pane_g

0x75b2,	// (0x00023816) mup2_osc_middle_pane

0xdfe7,	// (0x0002a24b) mup2_visualizer_osc_pane_g1

0xb7a5,	// (0x00027a09) popup_number_entry_window_t1_ParamLimits

0xb7b8,	// (0x00027a1c) popup_number_entry_window_t2_ParamLimits

0xb7ca,	// (0x00027a2e) popup_number_entry_window_t3_ParamLimits

0x434e,	// (0x000205b2) popup_number_entry_window_t5_ParamLimits

0x434e,	// (0x000205b2) popup_number_entry_window_t5

0xf0ca,	// (0x0002b32e) popup_number_entry_window_t_ParamLimits

0xb7dc,	// (0x00027a40) text_title_cp2_ParamLimits

0x30be,	// (0x0001f322) aid_hotspot_pointer_text2_pane

0x3108,	// (0x0001f36c) main_viewer_pane_g9_ParamLimits

0x3108,	// (0x0001f36c) main_viewer_pane_g9

0xc3bd,	// (0x00028621) cale_month_pane_t1_ParamLimits

0xc3fa,	// (0x0002865e) bg_cale_pane_ParamLimits

0xc412,	// (0x00028676) list_cale_pane_ParamLimits

0xc423,	// (0x00028687) listscroll_cale_day_pane_t1

0xc435,	// (0x00028699) scroll_pane_cp09_ParamLimits

0x66bc,	// (0x00022920) main_mup_eq_pane_t1_ParamLimits

0x66bc,	// (0x00022920) main_mup_eq_pane_t1

0x66d6,	// (0x0002293a) main_mup_eq_pane_t2_ParamLimits

0x66d6,	// (0x0002293a) main_mup_eq_pane_t2

0x66f0,	// (0x00022954) main_mup_eq_pane_t3_ParamLimits

0x66f0,	// (0x00022954) main_mup_eq_pane_t3

0x6708,	// (0x0002296c) main_mup_eq_pane_t4_ParamLimits

0x6708,	// (0x0002296c) main_mup_eq_pane_t4

0x6720,	// (0x00022984) main_mup_eq_pane_t5_ParamLimits

0x6720,	// (0x00022984) main_mup_eq_pane_t5

0x6738,	// (0x0002299c) main_mup_eq_pane_t6_ParamLimits

0x6738,	// (0x0002299c) main_mup_eq_pane_t6

0x674c,	// (0x000229b0) main_mup_eq_pane_t7_ParamLimits

0x674c,	// (0x000229b0) main_mup_eq_pane_t7

0x6760,	// (0x000229c4) main_mup_eq_pane_t8_ParamLimits

0x6760,	// (0x000229c4) main_mup_eq_pane_t8

0x6776,	// (0x000229da) main_mup_eq_pane_t9_ParamLimits

0x6776,	// (0x000229da) main_mup_eq_pane_t9

0x678e,	// (0x000229f2) main_mup_eq_pane_t10_ParamLimits

0x678e,	// (0x000229f2) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002b6b9) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002b6b9) main_mup_eq_pane_t

0x684b,	// (0x00022aaf) mup_equalizer_pane_cp5_ParamLimits

0x6861,	// (0x00022ac5) mup_equalizer_pane_cp6_ParamLimits

0x6879,	// (0x00022add) mup_equalizer_pane_cp7_ParamLimits

0x2cd3,	// (0x0001ef37) main_gallery_pane

0xdff0,	// (0x0002a254) smil2_volume_pane

0xdff8,	// (0x0002a25c) smil_status_volume_pane_g1_ParamLimits

0xe00b,	// (0x0002a26f) smil_status_volume_pane_g2_ParamLimits

0x32a0,	// (0x0001f504) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002b86f) smil_status_volume_pane_g_ParamLimits

0xe166,	// (0x0002a3ca) bg_popup_window_pane_cp07_ParamLimits

0xe174,	// (0x0002a3d8) blid_firmament_pane

0x75bb,	// (0x0002381f) aid_size_cell_gallery_ParamLimits

0x75bb,	// (0x0002381f) aid_size_cell_gallery

0x75c9,	// (0x0002382d) grid_gallery_pane_ParamLimits

0x75c9,	// (0x0002382d) grid_gallery_pane

0x75d9,	// (0x0002383d) cell_gallery_pane_ParamLimits

0x75d9,	// (0x0002383d) cell_gallery_pane

0xe297,	// (0x0002a4fb) bg_cell_gallery_focus_pane_ParamLimits

0xe297,	// (0x0002a4fb) bg_cell_gallery_focus_pane

0xe2a9,	// (0x0002a50d) cell_gallery_pane_g1_ParamLimits

0xe2a9,	// (0x0002a50d) cell_gallery_pane_g1

0x7627,	// (0x0002388b) cell_gallery_pane_g2_ParamLimits

0x7627,	// (0x0002388b) cell_gallery_pane_g2

0x7634,	// (0x00023898) cell_gallery_pane_g3_ParamLimits

0x7634,	// (0x00023898) cell_gallery_pane_g3

0xe2b5,	// (0x0002a519) cell_gallery_pane_g4_ParamLimits

0xe2b5,	// (0x0002a519) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002b91d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002b91d) cell_gallery_pane_g

0xe2c1,	// (0x0002a525) bg_cell_gallery_focus_pane_g1

0xe2c9,	// (0x0002a52d) bg_cell_gallery_focus_pane_g2

0xe2d1,	// (0x0002a535) bg_cell_gallery_focus_pane_g3

0xe2d9,	// (0x0002a53d) bg_cell_gallery_focus_pane_g4

0xe2e1,	// (0x0002a545) bg_cell_gallery_focus_pane_g5

0xe2e9,	// (0x0002a54d) bg_cell_gallery_focus_pane_g6

0xe2f1,	// (0x0002a555) bg_cell_gallery_focus_pane_g7

0xe2f9,	// (0x0002a55d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002b926) bg_cell_gallery_focus_pane_g

0xe301,	// (0x0002a565) aid_firma_cardinal

0xe315,	// (0x0002a579) blid_firmament_pane_t1

0xe32c,	// (0x0002a590) blid_firmament_pane_t2

0xe343,	// (0x0002a5a7) blid_firmament_pane_t3

0xe35a,	// (0x0002a5be) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002b937) blid_firmament_pane_t

0xe371,	// (0x0002a5d5) blid_sat_info_pane

0xe381,	// (0x0002a5e5) blid_sat_info_pane_g1

0xe381,	// (0x0002a5e5) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002b940) blid_sat_info_pane_g

0xe38b,	// (0x0002a5ef) blid_sat_info_pane_t1

0xe399,	// (0x0002a5fd) smil2_volume_content_pane

0xe3a2,	// (0x0002a606) smil2_volume_pane_g1

0xe13f,	// (0x0002a3a3) smil2_volume_content_pane_g1

0xe3aa,	// (0x0002a60e) smil2_volume_content_pane_g2

0xe3b3,	// (0x0002a617) smil2_volume_content_pane_g3

0xe3bc,	// (0x0002a620) smil2_volume_content_pane_g4

0xe3c5,	// (0x0002a629) smil2_volume_content_pane_g5

0xe3ce,	// (0x0002a632) smil2_volume_content_pane_g6

0xe3d7,	// (0x0002a63b) smil2_volume_content_pane_g7

0xe3e0,	// (0x0002a644) smil2_volume_content_pane_g8

0xe3e9,	// (0x0002a64d) smil2_volume_content_pane_g9

0xe3f2,	// (0x0002a656) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002b945) smil2_volume_content_pane_g

0x4995,	// (0x00020bf9) cale_week_day_heading_pane_t1_ParamLimits

0x49b0,	// (0x00020c14) cale_week_day_heading_pane_t2_ParamLimits

0x49cb,	// (0x00020c2f) cale_week_day_heading_pane_t3_ParamLimits

0x49e6,	// (0x00020c4a) cale_week_day_heading_pane_t4_ParamLimits

0x4a01,	// (0x00020c65) cale_week_day_heading_pane_t5_ParamLimits

0x4a1c,	// (0x00020c80) cale_week_day_heading_pane_t6_ParamLimits

0x4a37,	// (0x00020c9b) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002b435) cale_week_day_heading_pane_t_ParamLimits

0xc030,	// (0x00028294) bg_cale_side_pane_ParamLimits

0x2edf,	// (0x0001f143) cale_week_time_pane_t1_ParamLimits

0x2ef9,	// (0x0001f15d) cale_week_time_pane_t2_ParamLimits

0x2f13,	// (0x0001f177) cale_week_time_pane_t3_ParamLimits

0x2f2d,	// (0x0001f191) cale_week_time_pane_t4_ParamLimits

0x2f47,	// (0x0001f1ab) cale_week_time_pane_t5_ParamLimits

0x2f61,	// (0x0001f1c5) cale_week_time_pane_t6_ParamLimits

0x2f7f,	// (0x0001f1e3) cale_week_time_pane_t7_ParamLimits

0x2fa1,	// (0x0001f205) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002b444) cale_week_time_pane_t_ParamLimits

0x4a52,	// (0x00020cb6) cell_cale_week_pane_g2_ParamLimits

0xc030,	// (0x00028294) bg_cale_side_pane_cp01_ParamLimits

0x5da3,	// (0x00022007) cale_month_week_pane_t1_ParamLimits

0x5dbc,	// (0x00022020) cale_month_week_pane_t2_ParamLimits

0x5dd5,	// (0x00022039) cale_month_week_pane_t3_ParamLimits

0x5dee,	// (0x00022052) cale_month_week_pane_t4_ParamLimits

0x5e07,	// (0x0002206b) cale_month_week_pane_t5_ParamLimits

0x5e28,	// (0x0002208c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002b519) cale_month_week_pane_t_ParamLimits

0x2fcf,	// (0x0001f233) cell_cale_month_pane_g1_ParamLimits

0x2cd3,	// (0x0001ef37) main_cale_event_viewer_pane

0xb77b,	// (0x000279df) listscroll_cale_event_viewer_pane

0xe3fb,	// (0x0002a65f) list_cale_ev_pane

0xe403,	// (0x0002a667) scroll_pane_cp023

0xe40f,	// (0x0002a673) field_cale_ev_pane_ParamLimits

0xe40f,	// (0x0002a673) field_cale_ev_pane

0xe42d,	// (0x0002a691) field_cale_ev_content_pane_ParamLimits

0xe42d,	// (0x0002a691) field_cale_ev_content_pane

0xe439,	// (0x0002a69d) field_cale_ev_pane_g1_ParamLimits

0xe439,	// (0x0002a69d) field_cale_ev_pane_g1

0xe445,	// (0x0002a6a9) field_cale_ev_pane_g2_ParamLimits

0xe445,	// (0x0002a6a9) field_cale_ev_pane_g2

0xe45d,	// (0x0002a6c1) field_cale_ev_pane_g3_ParamLimits

0xe45d,	// (0x0002a6c1) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002b95a) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002b95a) field_cale_ev_pane_g

0xe475,	// (0x0002a6d9) field_cale_ev_pane_t1_ParamLimits

0xe475,	// (0x0002a6d9) field_cale_ev_pane_t1

0xe48c,	// (0x0002a6f0) field_cale_ev_content_pane_t1_ParamLimits

0xe48c,	// (0x0002a6f0) field_cale_ev_content_pane_t1

0xcc68,	// (0x00028ecc) bg_button_pane_cp01

0x4726,	// (0x0002098a) listscroll_cale_week_pane_ParamLimits

0xbfdb,	// (0x0002823f) popup_toolbar_window_cp01

0xc001,	// (0x00028265) listscroll_cale_week_pane_t1_ParamLimits

0x4726,	// (0x0002098a) listscroll_cale_day_pane_ParamLimits

0xbfdb,	// (0x0002823f) popup_toolbar_window_cp02

0xc423,	// (0x00028687) listscroll_cale_day_pane_t1_ParamLimits

0x4726,	// (0x0002098a) main_cale_month_pane_ParamLimits

0x3263,	// (0x0001f4c7) popup_toolbar_window_cp03_ParamLimits

0x3263,	// (0x0001f4c7) popup_toolbar_window_cp03

0x6b24,	// (0x00022d88) main_image_pane_g2_ParamLimits

0x6b24,	// (0x00022d88) main_image_pane_g2

0x6b30,	// (0x00022d94) main_image_pane_g3_ParamLimits

0x6b30,	// (0x00022d94) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002b74b) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002b74b) main_image_pane_g

0xcdfb,	// (0x0002905f) main_image_pane_t1_ParamLimits

0x6b3c,	// (0x00022da0) main_image_pane_t2_ParamLimits

0x6b3c,	// (0x00022da0) main_image_pane_t2

0x6b4e,	// (0x00022db2) main_image_pane_t3_ParamLimits

0x6b4e,	// (0x00022db2) main_image_pane_t3

0x6b60,	// (0x00022dc4) main_image_pane_t4_ParamLimits

0x6b60,	// (0x00022dc4) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002b752) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002b752) main_image_pane_t

0x6b72,	// (0x00022dd6) popup_image_details_window_cp01

0x6b7c,	// (0x00022de0) popup_toobar_trans_pane_cp01_ParamLimits

0x6b7c,	// (0x00022de0) popup_toobar_trans_pane_cp01

0x31b3,	// (0x0001f417) popup_image_details_window_ParamLimits

0x31b3,	// (0x0001f417) popup_image_details_window

0x31c1,	// (0x0001f425) popup_image_focus_window

0x32c2,	// (0x0001f526) camera2_autofocus_pane_ParamLimits

0x32c2,	// (0x0001f526) camera2_autofocus_pane

0xb77b,	// (0x000279df) bg_popup_sub_pane_cp06

0xe4aa,	// (0x0002a70e) popup_image_focus_window_g1

0xe4b2,	// (0x0002a716) popup_image_focus_window_g2

0xe4ba,	// (0x0002a71e) popup_image_focus_window_g3

0xe4c2,	// (0x0002a726) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002b961) popup_image_focus_window_g

0xe4ca,	// (0x0002a72e) popup_image_focus_window_t1

0xe4d8,	// (0x0002a73c) popup_image_focus_window_t2

0xe4e8,	// (0x0002a74c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002b96a) popup_image_focus_window_t

0xe4f6,	// (0x0002a75a) camera2_autofocus_pane_g1

0xbddd,	// (0x00028041) bg_tb_trans_pane_cp01

0xe504,	// (0x0002a768) popup_image_details_window_g1

0xe517,	// (0x0002a77b) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002b97c) popup_image_details_window_g

0xe540,	// (0x0002a7a4) popup_image_details_window_t1

0xe552,	// (0x0002a7b6) popup_image_details_window_t2

0xe56b,	// (0x0002a7cf) popup_image_details_window_t3

0xe57f,	// (0x0002a7e3) popup_image_details_window_t4

0xe59a,	// (0x0002a7fe) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002b983) popup_image_details_window_t

0xbeb2,	// (0x00028116) bg_calc_paper_pane_ParamLimits

0x2cd3,	// (0x0001ef37) grid_highlight_pane_cp013

0x2db4,	// (0x0001f018) list_calc_pane_ParamLimits

0x2dc6,	// (0x0001f02a) scroll_pane_cp024

0xbec6,	// (0x0002812a) bg_calc_display_pane_ParamLimits

0x2dce,	// (0x0001f032) calc_display_pane_t1_ParamLimits

0x2de3,	// (0x0001f047) calc_display_pane_t2_ParamLimits

0x2df8,	// (0x0001f05c) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002b3b5) calc_display_pane_t_ParamLimits

0x2e61,	// (0x0001f0c5) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002b3d2) cell_calc_pane_g

0x2e6a,	// (0x0001f0ce) cell_calc_pane_t1

0xbf25,	// (0x00028189) grid_highlight_pane_cp02_ParamLimits

0xbf3b,	// (0x0002819f) toolbar_button_pane_cp01_ParamLimits

0xbf3b,	// (0x0002819f) toolbar_button_pane_cp01

0xce40,	// (0x000290a4) temp_image_control_pane_ParamLimits

0xce40,	// (0x000290a4) temp_image_control_pane

0x312b,	// (0x0001f38f) main_mp3_pane

0xe5b4,	// (0x0002a818) temp_image_control_pane_g1_ParamLimits

0xe5b4,	// (0x0002a818) temp_image_control_pane_g1

0xe5c2,	// (0x0002a826) temp_image_control_pane_g2_ParamLimits

0xe5c2,	// (0x0002a826) temp_image_control_pane_g2

0xe5d4,	// (0x0002a838) temp_image_control_pane_g3_ParamLimits

0xe5d4,	// (0x0002a838) temp_image_control_pane_g3

0x7671,	// (0x000238d5) temp_image_control_pane_g4_ParamLimits

0x7671,	// (0x000238d5) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002b98e) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002b98e) temp_image_control_pane_g

0xe5b4,	// (0x0002a818) main_mp3_pane_g1

0x7682,	// (0x000238e6) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002b997) main_mp3_pane_g

0xe617,	// (0x0002a87b) main_mp3_pane_t1

0xc093,	// (0x000282f7) main_camera_pane_g8_ParamLimits

0xc093,	// (0x000282f7) main_camera_pane_g8

0x4cd5,	// (0x00020f39) main_video_pane_g7_ParamLimits

0x4cd5,	// (0x00020f39) main_video_pane_g7

0x340a,	// (0x0001f66e) main_camera2_pane_t7_ParamLimits

0x340a,	// (0x0001f66e) main_camera2_pane_t7

0xc1db,	// (0x0002843f) scroll_pane_cp025_ParamLimits

0xc1db,	// (0x0002843f) scroll_pane_cp025

0xc1ef,	// (0x00028453) scroll_pane_cp026_ParamLimits

0xc1ef,	// (0x00028453) scroll_pane_cp026

0xc1fe,	// (0x00028462) wml_content_pane_ParamLimits

0x2cd3,	// (0x0001ef37) main_touch_calib_pane

0x7726,	// (0x0002398a) main_touch_calib_pane_g1

0x7732,	// (0x00023996) main_touch_calib_pane_g2

0x773e,	// (0x000239a2) main_touch_calib_pane_g3

0x774a,	// (0x000239ae) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002b9b5) main_touch_calib_pane_g

0x7756,	// (0x000239ba) main_touch_calib_pane_t1

0x776f,	// (0x000239d3) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002b9be) main_touch_calib_pane_t

0xc99a,	// (0x00028bfe) mup_progress_pane_cp02

0xc9cf,	// (0x00028c33) navi_pane_g1

0xca8a,	// (0x00028cee) navi_pane_mp_t3

0x312b,	// (0x0001f38f) main_mp3_pane_ParamLimits

0x70a9,	// (0x0002330d) navi_pane_ParamLimits

0xe5b4,	// (0x0002a818) main_mp3_pane_g1_ParamLimits

0x7682,	// (0x000238e6) main_mp3_pane_g2_ParamLimits

0x768e,	// (0x000238f2) main_mp3_pane_g3_ParamLimits

0x768e,	// (0x000238f2) main_mp3_pane_g3

0x769a,	// (0x000238fe) main_mp3_pane_g4_ParamLimits

0x769a,	// (0x000238fe) main_mp3_pane_g4

0xe5e4,	// (0x0002a848) main_mp3_pane_g5_ParamLimits

0xe5e4,	// (0x0002a848) main_mp3_pane_g5

0xe5f2,	// (0x0002a856) main_mp3_pane_g6_ParamLimits

0xe5f2,	// (0x0002a856) main_mp3_pane_g6

0xe5ff,	// (0x0002a863) main_mp3_pane_g7_ParamLimits

0xe5ff,	// (0x0002a863) main_mp3_pane_g7

0xe60b,	// (0x0002a86f) main_mp3_pane_g8_ParamLimits

0xe60b,	// (0x0002a86f) main_mp3_pane_g8

0xf733,	// (0x0002b997) main_mp3_pane_g_ParamLimits

0x76a6,	// (0x0002390a) main_mp3_pane_t2

0x76b6,	// (0x0002391a) main_mp3_pane_t3

0xe625,	// (0x0002a889) main_mp3_pane_t4

0xe633,	// (0x0002a897) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002b9a8) main_mp3_pane_t

0xe641,	// (0x0002a8a5) mup_progress_pane_cp01

0x2a89,	// (0x0001eced) aid_zoom_text_secondary2

0xe3fb,	// (0x0002a65f) list_cale_ev2_pane

0xe403,	// (0x0002a667) scroll_pane_cp023_ParamLimits

0x77ca,	// (0x00023a2e) field_cale_ev2_pane_ParamLimits

0x77ca,	// (0x00023a2e) field_cale_ev2_pane

0x77f3,	// (0x00023a57) field_cale_ev2_pane_g1_ParamLimits

0x77f3,	// (0x00023a57) field_cale_ev2_pane_g1

0x77ff,	// (0x00023a63) field_cale_ev2_pane_g2_ParamLimits

0x77ff,	// (0x00023a63) field_cale_ev2_pane_g2

0x7817,	// (0x00023a7b) field_cale_ev2_pane_g3_ParamLimits

0x7817,	// (0x00023a7b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002b9c9) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002b9c9) field_cale_ev2_pane_g

0x782f,	// (0x00023a93) field_cale_ev2_pane_t1_ParamLimits

0x782f,	// (0x00023a93) field_cale_ev2_pane_t1

0x7846,	// (0x00023aaa) field_cale_ev2_pane_t2_ParamLimits

0x7846,	// (0x00023aaa) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002b9d2) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002b9d2) field_cale_ev2_pane_t

0x6a04,	// (0x00022c68) main_postcard_pane_g5_ParamLimits

0x6a04,	// (0x00022c68) main_postcard_pane_g5

0x6a12,	// (0x00022c76) main_postcard_pane_g6_ParamLimits

0x6a12,	// (0x00022c76) main_postcard_pane_g6

0x4b1f,	// (0x00020d83) camera2_autofocus_pane_cp_ParamLimits

0x4b1f,	// (0x00020d83) camera2_autofocus_pane_cp

0x312b,	// (0x0001f38f) main_mup3_pane

0x785b,	// (0x00023abf) main_mup3_pane_g1_ParamLimits

0x785b,	// (0x00023abf) main_mup3_pane_g1

0x787c,	// (0x00023ae0) main_mup3_pane_g2_ParamLimits

0x787c,	// (0x00023ae0) main_mup3_pane_g2

0x78f4,	// (0x00023b58) main_mup3_pane_g3_ParamLimits

0x78f4,	// (0x00023b58) main_mup3_pane_g3

0x7937,	// (0x00023b9b) main_mup3_pane_g4_ParamLimits

0x7937,	// (0x00023b9b) main_mup3_pane_g4

0x797a,	// (0x00023bde) main_mup3_pane_g5_ParamLimits

0x797a,	// (0x00023bde) main_mup3_pane_g5

0x79bd,	// (0x00023c21) main_mup3_pane_g6_ParamLimits

0x79bd,	// (0x00023c21) main_mup3_pane_g6

0xe675,	// (0x0002a8d9) main_mup3_pane_g7_ParamLimits

0xe675,	// (0x0002a8d9) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002b9e2) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002b9e2) main_mup3_pane_g

0x7a33,	// (0x00023c97) main_mup3_pane_t1_ParamLimits

0x7a33,	// (0x00023c97) main_mup3_pane_t1

0x7aa2,	// (0x00023d06) main_mup3_pane_t2_ParamLimits

0x7aa2,	// (0x00023d06) main_mup3_pane_t2

0x7b6b,	// (0x00023dcf) main_mup3_pane_t4_ParamLimits

0x7b6b,	// (0x00023dcf) main_mup3_pane_t4

0x7bb9,	// (0x00023e1d) main_mup3_pane_t5_ParamLimits

0x7bb9,	// (0x00023e1d) main_mup3_pane_t5

0x7c69,	// (0x00023ecd) main_mup3_pane_t6_ParamLimits

0x7c69,	// (0x00023ecd) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002b9f3) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002b9f3) main_mup3_pane_t

0x7d15,	// (0x00023f79) mup3_progress_pane_ParamLimits

0x7d15,	// (0x00023f79) mup3_progress_pane

0x7d93,	// (0x00023ff7) popup_mup3_control_window_ParamLimits

0x7d93,	// (0x00023ff7) popup_mup3_control_window

0xe683,	// (0x0002a8e7) popup_mup3_text_window

0x7dac,	// (0x00024010) mup3_progress_pane_t1

0x7dcb,	// (0x0002402f) mup3_progress_pane_t2

0xe68b,	// (0x0002a8ef) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002ba00) mup3_progress_pane_t

0xe6a8,	// (0x0002a90c) mup_progress_pane_cp03

0xb77b,	// (0x000279df) bg_tb_trans_pane_cp04

0x7dea,	// (0x0002404e) mup3_volume_pane

0x7df2,	// (0x00024056) popup_mup3_control_window_g1

0x7dfb,	// (0x0002405f) mup3_volume_pane_g1

0x7e04,	// (0x00024068) mup3_volume_pane_g2

0x7e0d,	// (0x00024071) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002ba07) mup3_volume_pane_g

0xb77b,	// (0x000279df) bg_tb_trans_pane_cp03

0xe6b8,	// (0x0002a91c) popup_mup3_text_window_g1

0xe6c0,	// (0x0002a924) popup_mup3_text_window_t1

0xbf0e,	// (0x00028172) list_calc_item_pane_g1_ParamLimits

0xe0cb,	// (0x0002a32f) mup_volume_pane_cp_g1

0x7788,	// (0x000239ec) main_touch_calib_pane_t3

0x779e,	// (0x00023a02) main_touch_calib_pane_t4

0x77b4,	// (0x00023a18) main_touch_calib_pane_t5

0x2a41,	// (0x0001eca5) aid_cell_size_toolbar2

0x2a49,	// (0x0001ecad) aid_popup3_width_pane

0x2a89,	// (0x0001eced) aid_zoom_text_msg_primary

0x4afe,	// (0x00020d62) vorec_t7

0xbed2,	// (0x00028136) bg_calc_paper_pane_g1_ParamLimits

0xbede,	// (0x00028142) bg_calc_paper_pane_g2_ParamLimits

0xbeea,	// (0x0002814e) bg_calc_paper_pane_g3_ParamLimits

0xbef6,	// (0x0002815a) bg_calc_paper_pane_g4_ParamLimits

0xbf02,	// (0x00028166) bg_calc_paper_pane_g5_ParamLimits

0x45d8,	// (0x0002083c) bg_calc_paper_pane_g6_ParamLimits

0x45e9,	// (0x0002084d) bg_calc_paper_pane_g7_ParamLimits

0x45fa,	// (0x0002085e) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002b3bc) bg_calc_paper_pane_g_ParamLimits

0x460b,	// (0x0002086f) calc_bg_paper_pane_g9_ParamLimits

0x4c06,	// (0x00020e6a) image_qvga_pane_ParamLimits

0x4c06,	// (0x00020e6a) image_qvga_pane

0xbe01,	// (0x00028065) bg_popup_sub_pane_cp04_ParamLimits

0xcd77,	// (0x00028fdb) popup_mup_playback_window_g1_ParamLimits

0xcd83,	// (0x00028fe7) popup_mup_playback_window_t1_ParamLimits

0xcd98,	// (0x00028ffc) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002b746) popup_mup_playback_window_t_ParamLimits

0x72fb,	// (0x0002355f) main_mup2_pane_g3_ParamLimits

0x72fb,	// (0x0002355f) main_mup2_pane_g3

0x4fd2,	// (0x00021236) popup_toolbar_window_cp04

0xd17a,	// (0x000293de) popup_call2_audio_second_window_g3_ParamLimits

0xd17a,	// (0x000293de) popup_call2_audio_second_window_g3

0xd584,	// (0x000297e8) popup_call2_audio_first_window_g4_ParamLimits

0xd584,	// (0x000297e8) popup_call2_audio_first_window_g4

0xdc03,	// (0x00029e67) popup_call2_audio_in_window_g4_ParamLimits

0xdc03,	// (0x00029e67) popup_call2_audio_in_window_g4

0x6b17,	// (0x00022d7b) aid_area_sk_bg_cut_ParamLimits

0x6b17,	// (0x00022d7b) aid_area_sk_bg_cut

0xcdad,	// (0x00029011) aid_area_sk_bg_cut_2_ParamLimits

0xcdad,	// (0x00029011) aid_area_sk_bg_cut_2

0x7617,	// (0x0002387b) aid_placing_details_win

0x761f,	// (0x00023883) aid_placing_details_win_2

0xe4f6,	// (0x0002a75a) camera2_autofocus_pane_g1_ParamLimits

0x2c6b,	// (0x0001eecf) popup_fixed_preview_cale_window_ParamLimits

0x2c6b,	// (0x0001eecf) popup_fixed_preview_cale_window

0xcb08,	// (0x00028d6c) navi_slider_pane_g3

0xcb11,	// (0x00028d75) navi_slider_pane_g4

0xcb1a,	// (0x00028d7e) navi_slider_pane_g5

0xcb08,	// (0x00028d6c) navi_slider_pane_g6

0x30a5,	// (0x0001f309) navi_slider_pane_g7

0xcc2d,	// (0x00028e91) mup_scale_pane_g3

0xcc36,	// (0x00028e9a) mup_scale_pane_g4

0xcc3f,	// (0x00028ea3) mup_scale_pane_g5

0x6891,	// (0x00022af5) mup_scale_pane_g6

0x689a,	// (0x00022afe) mup_scale_pane_g7

0xcb08,	// (0x00028d6c) cams2_slider_pane_g3

0xe156,	// (0x0002a3ba) cams2_slider_pane_g4

0x357c,	// (0x0001f7e0) cams2_slider_pane_g5

0xcb08,	// (0x00028d6c) cams2_slider_pane_g6

0x3584,	// (0x0001f7e8) cams2_slider_pane_g7

0xe381,	// (0x0002a5e5) camera2_autofocus_pane_cp_g1

0xdf64,	// (0x0002a1c8) bg_popup_preview_window_pane_cp02_ParamLimits

0xdf64,	// (0x0002a1c8) bg_popup_preview_window_pane_cp02

0xe6ce,	// (0x0002a932) list_fp_cale_pane_ParamLimits

0xe6ce,	// (0x0002a932) list_fp_cale_pane

0xe6da,	// (0x0002a93e) popup_fixed_preview_cale_window_t1_ParamLimits

0xe6da,	// (0x0002a93e) popup_fixed_preview_cale_window_t1

0x7e16,	// (0x0002407a) popup_fixed_preview_cale_window_t2_ParamLimits

0x7e16,	// (0x0002407a) popup_fixed_preview_cale_window_t2

0x7e2b,	// (0x0002408f) popup_fixed_preview_cale_window_t3_ParamLimits

0x7e2b,	// (0x0002408f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002ba0e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002ba0e) popup_fixed_preview_cale_window_t

0x7e40,	// (0x000240a4) list_single_fp_cale_pane_ParamLimits

0x7e40,	// (0x000240a4) list_single_fp_cale_pane

0xe6f8,	// (0x0002a95c) list_single_fp_cale_pane_g1_ParamLimits

0xe6f8,	// (0x0002a95c) list_single_fp_cale_pane_g1

0xe704,	// (0x0002a968) list_single_fp_cale_pane_g2_ParamLimits

0xe704,	// (0x0002a968) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002ba15) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002ba15) list_single_fp_cale_pane_g

0xe71d,	// (0x0002a981) list_single_fp_cale_pane_t1_ParamLimits

0xe71d,	// (0x0002a981) list_single_fp_cale_pane_t1

0xe72f,	// (0x0002a993) list_single_fp_cale_pane_t2_ParamLimits

0xe72f,	// (0x0002a993) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002ba1c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002ba1c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2cd3,	// (0x0001ef37) main_dialer_pane

0x7e53,	// (0x000240b7) aid_cell_size_keypad

0x7e5d,	// (0x000240c1) dialer_ne_pane

0x7e67,	// (0x000240cb) grid_dialer_command_1_pane

0x7e6f,	// (0x000240d3) grid_dialer_command_2_pane

0x7e77,	// (0x000240db) grid_dialer_keypad_pane

0x7e89,	// (0x000240ed) bg_popup_call_pane_cp06_ParamLimits

0x7e89,	// (0x000240ed) bg_popup_call_pane_cp06

0x7e95,	// (0x000240f9) dialer_ne_clear_pane_ParamLimits

0x7e95,	// (0x000240f9) dialer_ne_clear_pane

0xe762,	// (0x0002a9c6) dialer_ne_pane_g1

0xe76a,	// (0x0002a9ce) dialer_ne_pane_t1_ParamLimits

0xe76a,	// (0x0002a9ce) dialer_ne_pane_t1

0x7ea1,	// (0x00024105) dialer_ne_pane_t2_ParamLimits

0x7ea1,	// (0x00024105) dialer_ne_pane_t2

0x7ebe,	// (0x00024122) dialer_ne_pane_t3_ParamLimits

0x7ebe,	// (0x00024122) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002ba21) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002ba21) dialer_ne_pane_t

0x7ee2,	// (0x00024146) dialer_ne_pane_t3_copy1_ParamLimits

0x7ee2,	// (0x00024146) dialer_ne_pane_t3_copy1

0x7f06,	// (0x0002416a) cell_dialer_keypad_pane_ParamLimits

0x7f06,	// (0x0002416a) cell_dialer_keypad_pane

0x7f1d,	// (0x00024181) cell_dialer_command_1_pane_ParamLimits

0x7f1d,	// (0x00024181) cell_dialer_command_1_pane

0x7f33,	// (0x00024197) cell_dialer_command_2_pane_ParamLimits

0x7f33,	// (0x00024197) cell_dialer_command_2_pane

0xe77c,	// (0x0002a9e0) bg_button_pane_cp02_ParamLimits

0xe77c,	// (0x0002a9e0) bg_button_pane_cp02

0x7f42,	// (0x000241a6) cell_dialer_keypad_pane_g1_ParamLimits

0x7f42,	// (0x000241a6) cell_dialer_keypad_pane_g1

0xe77c,	// (0x0002a9e0) bg_button_pane_cp03_ParamLimits

0xe77c,	// (0x0002a9e0) bg_button_pane_cp03

0x7f57,	// (0x000241bb) cell_dialer_command_1_pane_g1_ParamLimits

0x7f57,	// (0x000241bb) cell_dialer_command_1_pane_g1

0xe788,	// (0x0002a9ec) bg_button_pane_cp04

0x7f6b,	// (0x000241cf) cell_dialer_command_2_pane_g1

0xc08b,	// (0x000282ef) bg_button_pane_cp06

0xe790,	// (0x0002a9f4) dialer_ne_clear_pane_g1

0xc9db,	// (0x00028c3f) navi_pane_g2

0xca09,	// (0x00028c6d) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002b649) navi_pane_g

0xca98,	// (0x00028cfc) navi_pane_mv_g2

0xcabf,	// (0x00028d23) navi_pane_mv_g5

0x642d,	// (0x00022691) navi_pane_mv_t1

0xbec6,	// (0x0002812a) main_clock2_pane

0x7fab,	// (0x0002420f) main_clock2_list_pane_ParamLimits

0x7fab,	// (0x0002420f) main_clock2_list_pane

0x7fd3,	// (0x00024237) main_clock2_pane_t1_ParamLimits

0x7fd3,	// (0x00024237) main_clock2_pane_t1

0x7ff5,	// (0x00024259) main_clock2_pane_t2_ParamLimits

0x7ff5,	// (0x00024259) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002ba2d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002ba2d) main_clock2_pane_t

0x8050,	// (0x000242b4) popup_clock_analogue_window_cp03_ParamLimits

0x8050,	// (0x000242b4) popup_clock_analogue_window_cp03

0x806e,	// (0x000242d2) popup_clock_digital_window_cp02_ParamLimits

0x806e,	// (0x000242d2) popup_clock_digital_window_cp02

0x80db,	// (0x0002433f) main_clock2_list_single_pane_ParamLimits

0x80db,	// (0x0002433f) main_clock2_list_single_pane

0xc08b,	// (0x000282ef) list_highlight_pane_cp05

0xe7ce,	// (0x0002aa32) main_clock2_list_single_pane_t1

0x4fd2,	// (0x00021236) popup_toolbar_window_cp04_ParamLimits

0x7641,	// (0x000238a5) camera2_autofocus_pane_g2_ParamLimits

0x7641,	// (0x000238a5) camera2_autofocus_pane_g2

0x764d,	// (0x000238b1) camera2_autofocus_pane_g3_ParamLimits

0x764d,	// (0x000238b1) camera2_autofocus_pane_g3

0x7659,	// (0x000238bd) camera2_autofocus_pane_g4_ParamLimits

0x7659,	// (0x000238bd) camera2_autofocus_pane_g4

0x7665,	// (0x000238c9) camera2_autofocus_pane_g5_ParamLimits

0x7665,	// (0x000238c9) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002b971) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002b971) camera2_autofocus_pane_g

0xe655,	// (0x0002a8b9) camera2_autofocus_pane_cp_g2

0xe65d,	// (0x0002a8c1) camera2_autofocus_pane_cp_g3

0xe665,	// (0x0002a8c9) camera2_autofocus_pane_cp_g4

0xe66d,	// (0x0002a8d1) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002b9d7) camera2_autofocus_pane_cp_g

0x7e81,	// (0x000240e5) popup_dialer_spcha_window

0xb77b,	// (0x000279df) bg_popup_sub_pane_cp07

0xe7dc,	// (0x0002aa40) list_spcha_pane

0xe7e4,	// (0x0002aa48) list_single_spcha_pane_ParamLimits

0xe7e4,	// (0x0002aa48) list_single_spcha_pane

0xb77b,	// (0x000279df) list_highlight_pane_cp06

0xe7f5,	// (0x0002aa59) list_single_spcha_pane_t1

0xd9ad,	// (0x00029c11) popup_call2_audio_out_window_g4_ParamLimits

0xd9ad,	// (0x00029c11) popup_call2_audio_out_window_g4

0x2cd3,	// (0x0001ef37) main_imed2_pane

0x31c9,	// (0x0001f42d) popup_imed_adjust2_window

0x31dc,	// (0x0001f440) popup_imed_trans_window_ParamLimits

0x31dc,	// (0x0001f440) popup_imed_trans_window

0xe1bf,	// (0x0002a423) popup_blid_sat_info2_window_t1

0xe1cd,	// (0x0002a431) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002b906) popup_blid_sat_info2_window_t

0x80ed,	// (0x00024351) aid_size_cell_colour_35

0x8107,	// (0x0002436b) aid_size_cell_colour_112

0x811e,	// (0x00024382) aid_size_cell_effect

0xbddd,	// (0x00028041) bg_tb_trans_pane_cp02

0xc903,	// (0x00028b67) heading_imed_pane

0x8138,	// (0x0002439c) listscroll_imed_pane

0xe803,	// (0x0002aa67) heading_imed_pane_g1

0xe80b,	// (0x0002aa6f) heading_imed_pane_t1

0xe819,	// (0x0002aa7d) grid_imed_colour_35_pane_ParamLimits

0xe819,	// (0x0002aa7d) grid_imed_colour_35_pane

0x8144,	// (0x000243a8) grid_imed_effect_pane

0xe830,	// (0x0002aa94) list_imed_aspect_pane

0x8154,	// (0x000243b8) scroll_pane_cp027_ParamLimits

0x8154,	// (0x000243b8) scroll_pane_cp027

0x8160,	// (0x000243c4) cell_imed_effect_pane_ParamLimits

0x8160,	// (0x000243c4) cell_imed_effect_pane

0xe838,	// (0x0002aa9c) cell_imed_colour_pane_ParamLimits

0xe838,	// (0x0002aa9c) cell_imed_colour_pane

0xe87a,	// (0x0002aade) cell_imed_colour_pane_g1_ParamLimits

0xe87a,	// (0x0002aade) cell_imed_colour_pane_g1

0xe88b,	// (0x0002aaef) hgihlgiht_grid_pane_cp016_ParamLimits

0xe88b,	// (0x0002aaef) hgihlgiht_grid_pane_cp016

0x8178,	// (0x000243dc) cell_imed_effect_pane_g1

0x8180,	// (0x000243e4) grid_highlight_pane_cp017

0xe89c,	// (0x0002ab00) list_imed_single_pane_ParamLimits

0xe89c,	// (0x0002ab00) list_imed_single_pane

0xb77b,	// (0x000279df) list_highlight_pane_cp07

0xe8b1,	// (0x0002ab15) list_imed_aspect_pane_comp1_t1

0xdf70,	// (0x0002a1d4) bg_tb_trans_pane_cp05

0xe8d3,	// (0x0002ab37) popup_imed_adjust2_window_g1

0xe8fa,	// (0x0002ab5e) popup_imed_adjust2_window_t1

0xe912,	// (0x0002ab76) slider_imed_adjust_pane

0xe926,	// (0x0002ab8a) slider_imed_adjust_pane_g1

0xe936,	// (0x0002ab9a) slider_imed_adjust_pane_g2

0xe946,	// (0x0002abaa) slider_imed_adjust_pane_g3

0xe957,	// (0x0002abbb) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002ba4a) slider_imed_adjust_pane_g

0x8189,	// (0x000243ed) aid_size_cell_clipart2

0x8195,	// (0x000243f9) grid_imed_clipart_pane

0xe968,	// (0x0002abcc) scroll_pane_cp031

0x819f,	// (0x00024403) cell_imed_clipart_pane_ParamLimits

0x819f,	// (0x00024403) cell_imed_clipart_pane

0x81c1,	// (0x00024425) cell_imed_clipart_pane_g1

0xb77b,	// (0x000279df) grid_highlight_pane_cp014

0x7fb7,	// (0x0002421b) main_clock2_pane_g1_ParamLimits

0x7fb7,	// (0x0002421b) main_clock2_pane_g1

0x8086,	// (0x000242ea) aid_call2_pane_cp10

0x8098,	// (0x000242fc) aid_call_pane_cp10

0xc93c,	// (0x00028ba0) popup_clock_analogue_window_cp10_g1

0xc93c,	// (0x00028ba0) popup_clock_analogue_window_cp10_g2

0x80aa,	// (0x0002430e) popup_clock_analogue_window_cp10_g3

0x80aa,	// (0x0002430e) popup_clock_analogue_window_cp10_g4

0xc93c,	// (0x00028ba0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002ba38) popup_clock_analogue_window_cp10_g

0x80bc,	// (0x00024320) popup_clock_analogue_window_cp10_t1

0x358d,	// (0x0001f7f1) clock_digital_number_pane_cp10_ParamLimits

0x358d,	// (0x0001f7f1) clock_digital_number_pane_cp10

0x35a5,	// (0x0001f809) clock_digital_number_pane_cp11_ParamLimits

0x35a5,	// (0x0001f809) clock_digital_number_pane_cp11

0x35bd,	// (0x0001f821) clock_digital_number_pane_cp12_ParamLimits

0x35bd,	// (0x0001f821) clock_digital_number_pane_cp12

0x35d5,	// (0x0001f839) clock_digital_number_pane_cp13_ParamLimits

0x35d5,	// (0x0001f839) clock_digital_number_pane_cp13

0x35ed,	// (0x0001f851) clock_digital_separator_pane_cp10_ParamLimits

0x35ed,	// (0x0001f851) clock_digital_separator_pane_cp10

0x3605,	// (0x0001f869) popup_clock_digital_window_cp02_t1_ParamLimits

0x3605,	// (0x0001f869) popup_clock_digital_window_cp02_t1

0xbdf9,	// (0x0002805d) clock_digital_number_pane_cp10_g1

0xbdf9,	// (0x0002805d) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002ba53) clock_digital_number_pane_cp10_g

0xbdf9,	// (0x0002805d) clock_digital_separator_pane_cp10_g1

0xbdf9,	// (0x0002805d) clock_digital_separator_pane_g2_cp10

0xcac7,	// (0x00028d2b) navi_pane_vded_g4

0xcad0,	// (0x00028d34) navi_pane_vded_g5

0xcad9,	// (0x00028d3d) navi_pane_vded_t1

0x2cd3,	// (0x0001ef37) main_vded_pane

0x81ca,	// (0x0002442e) main_vded_pane_g1

0x81d6,	// (0x0002443a) main_vded_pane_g2

0x81e0,	// (0x00024444) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002ba58) main_vded_pane_g

0x81ea,	// (0x0002444e) main_vded_pane_t1

0x81f8,	// (0x0002445c) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002ba5f) main_vded_pane_t

0x8206,	// (0x0002446a) vded_slider_pane

0x8210,	// (0x00024474) vded_video_pane

0xe970,	// (0x0002abd4) vded_video_pane_g1

0x821a,	// (0x0002447e) vded_video_pane_g2

0xe381,	// (0x0002a5e5) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002ba64) vded_video_pane_g

0xe97a,	// (0x0002abde) vded_slider_pane_g1

0xe0cb,	// (0x0002a32f) vded_slider_pane_g2

0xe983,	// (0x0002abe7) vded_slider_pane_g3

0xe98c,	// (0x0002abf0) vded_slider_pane_g4

0xe995,	// (0x0002abf9) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002ba6b) vded_slider_pane_g

0x7d85,	// (0x00023fe9) mup3_rocker_pane_ParamLimits

0x7d85,	// (0x00023fe9) mup3_rocker_pane

0x8223,	// (0x00024487) mup3_control_keys_pane_g1

0x822b,	// (0x0002448f) mup3_control_keys_pane_g2

0x8233,	// (0x00024497) mup3_control_keys_pane_g3

0x823b,	// (0x0002449f) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002ba76) mup3_control_keys_pane_g

0x2c93,	// (0x0001eef7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2c93,	// (0x0001eef7) popup_toolbar2_fixed_window_cp01

0x7d9f,	// (0x00024003) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7d9f,	// (0x00024003) popup_toolbar2_fixed_window_cp02

0xd2ec,	// (0x00029550) popup_call2_audio_second_window_t4_ParamLimits

0xd2ec,	// (0x00029550) popup_call2_audio_second_window_t4

0xd81a,	// (0x00029a7e) popup_call2_audio_first_window_t6_ParamLimits

0xd81a,	// (0x00029a7e) popup_call2_audio_first_window_t6

0xdab0,	// (0x00029d14) popup_call2_audio_out_window_t6_ParamLimits

0xdab0,	// (0x00029d14) popup_call2_audio_out_window_t6

0x2cd3,	// (0x0001ef37) main_vitu_pane

0x824b,	// (0x000244af) aid_size_cell_itu_ParamLimits

0x824b,	// (0x000244af) aid_size_cell_itu

0xeeca,	// (0x0002b12e) bg_popup_window_pane_cp08_ParamLimits

0xeeca,	// (0x0002b12e) bg_popup_window_pane_cp08

0x8259,	// (0x000244bd) field_vitu_entry_pane_ParamLimits

0x8259,	// (0x000244bd) field_vitu_entry_pane

0x8268,	// (0x000244cc) grid_vitu_function_pane_ParamLimits

0x8268,	// (0x000244cc) grid_vitu_function_pane

0x8278,	// (0x000244dc) grid_vitu_itu_pane_ParamLimits

0x8278,	// (0x000244dc) grid_vitu_itu_pane

0x8288,	// (0x000244ec) cell_vitu_itu_pane_ParamLimits

0x8288,	// (0x000244ec) cell_vitu_itu_pane

0x829d,	// (0x00024501) cell_vitu_function_pane_ParamLimits

0x829d,	// (0x00024501) cell_vitu_function_pane

0xbddd,	// (0x00028041) bg_popup_sub_pane_cp08_ParamLimits

0xbddd,	// (0x00028041) bg_popup_sub_pane_cp08

0x82af,	// (0x00024513) field_vitu_entry_pane_t1_ParamLimits

0x82af,	// (0x00024513) field_vitu_entry_pane_t1

0xe9b6,	// (0x0002ac1a) field_vitu_entry_pane_t2_ParamLimits

0xe9b6,	// (0x0002ac1a) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002ba84) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002ba84) field_vitu_entry_pane_t

0xe9d3,	// (0x0002ac37) bg_button_pane_cp05_ParamLimits

0xe9d3,	// (0x0002ac37) bg_button_pane_cp05

0x82cb,	// (0x0002452f) cell_vitu_itu_pane_g1

0x82e3,	// (0x00024547) cell_vitu_itu_pane_t1_ParamLimits

0x82e3,	// (0x00024547) cell_vitu_itu_pane_t1

0x82f5,	// (0x00024559) cell_vitu_itu_pane_t2_ParamLimits

0x82f5,	// (0x00024559) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002ba89) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002ba89) cell_vitu_itu_pane_t

0xe9e1,	// (0x0002ac45) bg_button_pane_cp07

0x832a,	// (0x0002458e) cell_vitu_function_pane_g1

0x2dac,	// (0x0001f010) main_calc_pane_g1

0x2a7d,	// (0x0001ece1) aid_visual_content_pane

0x2cd3,	// (0x0001ef37) main_vradio_pane

0x8333,	// (0x00024597) main_vradio_pane_g1_ParamLimits

0x8333,	// (0x00024597) main_vradio_pane_g1

0xe9eb,	// (0x0002ac4f) main_vradio_pane_g2_ParamLimits

0xe9eb,	// (0x0002ac4f) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002ba90) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002ba90) main_vradio_pane_g

0x8343,	// (0x000245a7) main_vradio_pane_t1_ParamLimits

0x8343,	// (0x000245a7) main_vradio_pane_t1

0x8355,	// (0x000245b9) main_vradio_pane_t2_ParamLimits

0x8355,	// (0x000245b9) main_vradio_pane_t2

0xe9f8,	// (0x0002ac5c) main_vradio_pane_t3_ParamLimits

0xe9f8,	// (0x0002ac5c) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002ba95) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002ba95) main_vradio_pane_t

0x8367,	// (0x000245cb) vradio_rocker_control_pane_ParamLimits

0x8367,	// (0x000245cb) vradio_rocker_control_pane

0x8373,	// (0x000245d7) vradio_station_info_pane_ParamLimits

0x8373,	// (0x000245d7) vradio_station_info_pane

0xea0c,	// (0x0002ac70) vradio_frequency_info_pane_ParamLimits

0xea0c,	// (0x0002ac70) vradio_frequency_info_pane

0xe381,	// (0x0002a5e5) vradio_station_info_pane_g1

0xea1b,	// (0x0002ac7f) vradio_station_info_pane_t1_ParamLimits

0xea1b,	// (0x0002ac7f) vradio_station_info_pane_t1

0xea3d,	// (0x0002aca1) vradio_station_info_pane_t2_ParamLimits

0xea3d,	// (0x0002aca1) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002ba9c) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002ba9c) vradio_station_info_pane_t

0xea4f,	// (0x0002acb3) vradio_tuning_pane

0xea57,	// (0x0002acbb) vradio_rocker_control_pane_g1

0xea5f,	// (0x0002acc3) vradio_rocker_control_pane_g2

0xea67,	// (0x0002accb) vradio_rocker_control_pane_g3

0xea6f,	// (0x0002acd3) vradio_rocker_control_pane_g4

0xea77,	// (0x0002acdb) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002baa1) vradio_rocker_control_pane_g

0x8382,	// (0x000245e6) vradio_frequency_info_pane_g1

0xea7f,	// (0x0002ace3) vradio_frequency_info_pane_t1_ParamLimits

0xea7f,	// (0x0002ace3) vradio_frequency_info_pane_t1

0x838c,	// (0x000245f0) vradio_tuning_pane_g1

0x8395,	// (0x000245f9) vradio_tuning_pane_t1

0x2a99,	// (0x0001ecfd) area_side_right_pane_ParamLimits

0x2a99,	// (0x0001ecfd) area_side_right_pane

0xdf2b,	// (0x0002a18f) status_small_pane_g1

0xdf33,	// (0x0002a197) status_small_pane_g2

0xdf3c,	// (0x0002a1a0) status_small_pane_g3

0xdf45,	// (0x0002a1a9) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002b85c) status_small_pane_g

0xdf4e,	// (0x0002a1b2) status_small_pane_t1

0x2cd3,	// (0x0001ef37) main_video3_pane

0xea93,	// (0x0002acf7) cams_zoom_vslider_pane

0xea9b,	// (0x0002acff) image3_wide_pane_ParamLimits

0xea9b,	// (0x0002acff) image3_wide_pane

0xeab5,	// (0x0002ad19) image3_wide_small_pane

0xeac1,	// (0x0002ad25) main_video3_pane_g1_ParamLimits

0xeac1,	// (0x0002ad25) main_video3_pane_g1

0xeadd,	// (0x0002ad41) main_video3_pane_g2_ParamLimits

0xeadd,	// (0x0002ad41) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002baac) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002baac) main_video3_pane_g

0xeaf9,	// (0x0002ad5d) main_video3_pane_t1_ParamLimits

0xeaf9,	// (0x0002ad5d) main_video3_pane_t1

0xeb24,	// (0x0002ad88) main_video3_pane_t2_ParamLimits

0xeb24,	// (0x0002ad88) main_video3_pane_t2

0xeb4f,	// (0x0002adb3) main_video3_pane_t3_ParamLimits

0xeb4f,	// (0x0002adb3) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002bab1) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002bab1) main_video3_pane_t

0xeb7c,	// (0x0002ade0) cams_zoom_vslider_pane_g1

0xeb85,	// (0x0002ade9) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002bab8) cams_zoom_vslider_pane_g

0xeb8d,	// (0x0002adf1) small_slider_vertical_pane

0xe381,	// (0x0002a5e5) small_slider_vertical_pane_g1

0xe381,	// (0x0002a5e5) small_slider_vertical_pane_g2

0xeb95,	// (0x0002adf9) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002babd) small_slider_vertical_pane_g

0x2cd3,	// (0x0001ef37) main_hwr_training_pane

0xeb9e,	// (0x0002ae02) hwr_training_instruct_pane_ParamLimits

0xeb9e,	// (0x0002ae02) hwr_training_instruct_pane

0x83a4,	// (0x00024608) hwr_training_navi_pane_ParamLimits

0x83a4,	// (0x00024608) hwr_training_navi_pane

0x83be,	// (0x00024622) hwr_training_write_pane_ParamLimits

0x83be,	// (0x00024622) hwr_training_write_pane

0xb77b,	// (0x000279df) bg_frame_shadow_pane

0xebd5,	// (0x0002ae39) hwr_training_write_pane_g1

0xebdd,	// (0x0002ae41) hwr_training_write_pane_g2

0xebe5,	// (0x0002ae49) hwr_training_write_pane_g3

0xebed,	// (0x0002ae51) hwr_training_write_pane_g4

0xebf5,	// (0x0002ae59) hwr_training_write_pane_g5

0xebfd,	// (0x0002ae61) hwr_training_write_pane_g6

0xec05,	// (0x0002ae69) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002bac4) hwr_training_write_pane_g

0x3624,	// (0x0001f888) hwr_training_navi_pane_g1_ParamLimits

0x3624,	// (0x0001f888) hwr_training_navi_pane_g1

0x3636,	// (0x0001f89a) hwr_training_navi_pane_g2_ParamLimits

0x3636,	// (0x0001f89a) hwr_training_navi_pane_g2

0x3648,	// (0x0001f8ac) hwr_training_navi_pane_g3_ParamLimits

0x3648,	// (0x0001f8ac) hwr_training_navi_pane_g3

0x3658,	// (0x0001f8bc) hwr_training_navi_pane_g4_ParamLimits

0x3658,	// (0x0001f8bc) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002bad3) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002bad3) hwr_training_navi_pane_g

0x3672,	// (0x0001f8d6) hwr_training_navi_pane_t1

0x83f6,	// (0x0002465a) list_single_hwr_training_instruct_pane_ParamLimits

0x83f6,	// (0x0002465a) list_single_hwr_training_instruct_pane

0xec0d,	// (0x0002ae71) list_single_hwr_training_instruct_pane_t1

0xe2c1,	// (0x0002a525) bg_frame_shadow_pane_g1

0xec1c,	// (0x0002ae80) bg_frame_shadow_pane_g2

0xec24,	// (0x0002ae88) bg_frame_shadow_pane_g3

0xec2c,	// (0x0002ae90) bg_frame_shadow_pane_g4

0xec34,	// (0x0002ae98) bg_frame_shadow_pane_g5

0xec3c,	// (0x0002aea0) bg_frame_shadow_pane_g6

0xec44,	// (0x0002aea8) bg_frame_shadow_pane_g7

0xbf7f,	// (0x000281e3) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002bade) bg_frame_shadow_pane_g

0x2cd3,	// (0x0001ef37) main_video_tele_dialer_pane

0x3680,	// (0x0001f8e4) aid_size_cell_video_keypad_ParamLimits

0x3680,	// (0x0001f8e4) aid_size_cell_video_keypad

0x3690,	// (0x0001f8f4) grid_video_dialer_keypad_pane_ParamLimits

0x3690,	// (0x0001f8f4) grid_video_dialer_keypad_pane

0x36c4,	// (0x0001f928) video_down_pane_cp_ParamLimits

0x36c4,	// (0x0001f928) video_down_pane_cp

0x36d2,	// (0x0001f936) cell_video_dialer_keypad_pane_ParamLimits

0x36d2,	// (0x0001f936) cell_video_dialer_keypad_pane

0xec4c,	// (0x0002aeb0) bg_button_pane_cp08_ParamLimits

0xec4c,	// (0x0002aeb0) bg_button_pane_cp08

0x8437,	// (0x0002469b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8437,	// (0x0002469b) cell_video_dialer_keypad_pane_g1

0x7d79,	// (0x00023fdd) mup3_rocker2_pane_ParamLimits

0x7d79,	// (0x00023fdd) mup3_rocker2_pane

0xe381,	// (0x0002a5e5) mup3_rocker2_pane_g1

0x3139,	// (0x0001f39d) main_dialer2_pane

0x2cd3,	// (0x0001ef37) main_mp4_pane

0x36ef,	// (0x0001f953) main_mp4_pane_g1_ParamLimits

0x36ef,	// (0x0001f953) main_mp4_pane_g1

0x36fd,	// (0x0001f961) main_mp4_pane_g2_ParamLimits

0x36fd,	// (0x0001f961) main_mp4_pane_g2

0x370b,	// (0x0001f96f) main_mp4_pane_g3_ParamLimits

0x370b,	// (0x0001f96f) main_mp4_pane_g3

0x3750,	// (0x0001f9b4) main_mp4_pane_g4_ParamLimits

0x3750,	// (0x0001f9b4) main_mp4_pane_g4

0x3778,	// (0x0001f9dc) main_mp4_pane_g5_ParamLimits

0x3778,	// (0x0001f9dc) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002bafe) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002bafe) main_mp4_pane_g

0x37c8,	// (0x0001fa2c) main_mp4_pane_t1_ParamLimits

0x37c8,	// (0x0001fa2c) main_mp4_pane_t1

0x3824,	// (0x0001fa88) main_mp4_pane_t2_ParamLimits

0x3824,	// (0x0001fa88) main_mp4_pane_t2

0xec58,	// (0x0002aebc) main_mp4_pane_t3_ParamLimits

0xec58,	// (0x0002aebc) main_mp4_pane_t3

0x3876,	// (0x0001fada) main_mp4_pane_t4_ParamLimits

0x3876,	// (0x0001fada) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002bb0b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002bb0b) main_mp4_pane_t

0x38ba,	// (0x0001fb1e) mp4_progress_pane_ParamLimits

0x38ba,	// (0x0001fb1e) mp4_progress_pane

0x3904,	// (0x0001fb68) mp4_rocker_pane_ParamLimits

0x3904,	// (0x0001fb68) mp4_rocker_pane

0xec80,	// (0x0002aee4) mp4_progress_pane_t1

0xec99,	// (0x0002aefd) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002bb14) mp4_progress_pane_t

0xecb2,	// (0x0002af16) mup_progress_pane_cp04

0x0506,	// (0x0001c76a) mp4_rocker_pane_g1

0x3924,	// (0x0001fb88) aid_cell_size_keypad2_ParamLimits

0x3924,	// (0x0001fb88) aid_cell_size_keypad2

0x3934,	// (0x0001fb98) dialer2_ne_pane_ParamLimits

0x3934,	// (0x0001fb98) dialer2_ne_pane

0x3942,	// (0x0001fba6) grid_dialer2_keypad_pane_ParamLimits

0x3942,	// (0x0001fba6) grid_dialer2_keypad_pane

0xeed8,	// (0x0002b13c) bg_popup_call_pane_cp07_ParamLimits

0xeed8,	// (0x0002b13c) bg_popup_call_pane_cp07

0x846e,	// (0x000246d2) dialer2_ne_pane_t1_ParamLimits

0x846e,	// (0x000246d2) dialer2_ne_pane_t1

0x3952,	// (0x0001fbb6) cell_dialer2_keypad_pane_ParamLimits

0x3952,	// (0x0001fbb6) cell_dialer2_keypad_pane

0xecd0,	// (0x0002af34) bg_button_pane_pane_cp04_ParamLimits

0xecd0,	// (0x0002af34) bg_button_pane_pane_cp04

0x8493,	// (0x000246f7) cell_dialer2_keypad_pane_g1_ParamLimits

0x8493,	// (0x000246f7) cell_dialer2_keypad_pane_g1

0x4e94,	// (0x000210f8) aid_placing_vt_set_content_ParamLimits

0x4e94,	// (0x000210f8) aid_placing_vt_set_content

0x4ec0,	// (0x00021124) aid_placing_vt_set_title_ParamLimits

0x4ec0,	// (0x00021124) aid_placing_vt_set_title

0x2cd3,	// (0x0001ef37) main_image3_pane

0x3999,	// (0x0001fbfd) area_side_right_pane_cp01_ParamLimits

0x3999,	// (0x0001fbfd) area_side_right_pane_cp01

0x39c6,	// (0x0001fc2a) main_image3_pane_g1_ParamLimits

0x39c6,	// (0x0001fc2a) main_image3_pane_g1

0x39d4,	// (0x0001fc38) main_image3_pane_g2_ParamLimits

0x39d4,	// (0x0001fc38) main_image3_pane_g2

0x39ed,	// (0x0001fc51) main_image3_pane_g3_ParamLimits

0x39ed,	// (0x0001fc51) main_image3_pane_g3

0x3a06,	// (0x0001fc6a) main_image3_pane_g4_ParamLimits

0x3a06,	// (0x0001fc6a) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002bb23) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002bb23) main_image3_pane_g

0x3a1f,	// (0x0001fc83) main_image3_pane_t1_ParamLimits

0x3a1f,	// (0x0001fc83) main_image3_pane_t1

0x3a44,	// (0x0001fca8) main_image3_pane_t2_ParamLimits

0x3a44,	// (0x0001fca8) main_image3_pane_t2

0x3a63,	// (0x0001fcc7) main_image3_pane_t3_ParamLimits

0x3a63,	// (0x0001fcc7) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002bb2c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002bb2c) main_image3_pane_t

0xeeca,	// (0x0002b12e) grid_sctrl_middle_pane_cp01_ParamLimits

0xeeca,	// (0x0002b12e) grid_sctrl_middle_pane_cp01

0x84fb,	// (0x0002475f) cell_sctrl_middle_pane_cp01_ParamLimits

0x84fb,	// (0x0002475f) cell_sctrl_middle_pane_cp01

0x850c,	// (0x00024770) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x850c,	// (0x00024770) cell_sctrl_middle_pane_cp01_g1

0x2cd3,	// (0x0001ef37) main_call4_pane

0x8519,	// (0x0002477d) aid_size_button_call4_ParamLimits

0x8519,	// (0x0002477d) aid_size_button_call4

0x8549,	// (0x000247ad) call4_windows_pane_ParamLimits

0x8549,	// (0x000247ad) call4_windows_pane

0x8563,	// (0x000247c7) grid_call4_button_pane_ParamLimits

0x8563,	// (0x000247c7) grid_call4_button_pane

0xecdc,	// (0x0002af40) call4_windows_conf_pane

0xecf3,	// (0x0002af57) popup_call4_audio_first_window_ParamLimits

0xecf3,	// (0x0002af57) popup_call4_audio_first_window

0xed3f,	// (0x0002afa3) popup_call4_audio_second_window_ParamLimits

0xed3f,	// (0x0002afa3) popup_call4_audio_second_window

0xed53,	// (0x0002afb7) popup_call4_audio_wait_window_ParamLimits

0xed53,	// (0x0002afb7) popup_call4_audio_wait_window

0x8587,	// (0x000247eb) cell_call4_button_pane_ParamLimits

0x8587,	// (0x000247eb) cell_call4_button_pane

0x85ac,	// (0x00024810) bg_button_pane_cp09_ParamLimits

0x85ac,	// (0x00024810) bg_button_pane_cp09

0x85b8,	// (0x0002481c) cell_call4_button_pane_g1_ParamLimits

0x85b8,	// (0x0002481c) cell_call4_button_pane_g1

0x85c5,	// (0x00024829) cell_call4_button_pane_t1_ParamLimits

0x85c5,	// (0x00024829) cell_call4_button_pane_t1

0xed9b,	// (0x0002afff) popup_call4_audio_conf_window_ParamLimits

0xed9b,	// (0x0002afff) popup_call4_audio_conf_window

0x7dac,	// (0x00024010) mup3_progress_pane_t1_ParamLimits

0x7dcb,	// (0x0002402f) mup3_progress_pane_t2_ParamLimits

0xe68b,	// (0x0002a8ef) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002ba00) mup3_progress_pane_t_ParamLimits

0xe6a8,	// (0x0002a90c) mup_progress_pane_cp03_ParamLimits

0x8243,	// (0x000244a7) mup3_control_keys_pane_g4_copy1

0x38e8,	// (0x0001fb4c) mp4_rocker2_pane_ParamLimits

0x38e8,	// (0x0001fb4c) mp4_rocker2_pane

0xedaf,	// (0x0002b013) mp4_rocker2_pane_g1

0xedb7,	// (0x0002b01b) mp4_rocker2_pane_g2

0x3ac4,	// (0x0001fd28) mp4_rocker2_pane_g3

0x3acc,	// (0x0001fd30) mp4_rocker2_pane_g4

0x3ad4,	// (0x0001fd38) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002bb35) mp4_rocker2_pane_g

0x2cd3,	// (0x0001ef37) main_camera4_pane

0x2cd3,	// (0x0001ef37) main_video4_pane

0x36a0,	// (0x0001f904) main_video_tele_dialer_pane_t1_ParamLimits

0x36a0,	// (0x0001f904) main_video_tele_dialer_pane_t1

0x36b2,	// (0x0001f916) main_video_tele_dialer_pane_t2_ParamLimits

0x36b2,	// (0x0001f916) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002baef) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002baef) main_video_tele_dialer_pane_t

0x3af4,	// (0x0001fd58) cam4_autofocus_pane_ParamLimits

0x3af4,	// (0x0001fd58) cam4_autofocus_pane

0x3b0e,	// (0x0001fd72) cam4_image_uncrop_pane_ParamLimits

0x3b0e,	// (0x0001fd72) cam4_image_uncrop_pane

0x3b25,	// (0x0001fd89) cam4_indicators_pane_ParamLimits

0x3b25,	// (0x0001fd89) cam4_indicators_pane

0x3b41,	// (0x0001fda5) main_camera4_pane_g1_ParamLimits

0x3b41,	// (0x0001fda5) main_camera4_pane_g1

0x3b4d,	// (0x0001fdb1) main_camera4_pane_g2_ParamLimits

0x3b4d,	// (0x0001fdb1) main_camera4_pane_g2

0x3b4d,	// (0x0001fdb1) main_camera4_pane_g3_ParamLimits

0x3b4d,	// (0x0001fdb1) main_camera4_pane_g3

0x3b59,	// (0x0001fdbd) main_camera4_pane_g4_ParamLimits

0x3b59,	// (0x0001fdbd) main_camera4_pane_g4

0x3b65,	// (0x0001fdc9) main_camera4_pane_g5_ParamLimits

0x3b65,	// (0x0001fdc9) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002bb40) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002bb40) main_camera4_pane_g

0x3b7f,	// (0x0001fde3) main_camera4_pane_t1_ParamLimits

0x3b7f,	// (0x0001fde3) main_camera4_pane_t1

0x3ba3,	// (0x0001fe07) bg_tb_trans_pane_cp06

0x3bb9,	// (0x0001fe1d) cam4_indicators_pane_g1

0x3bca,	// (0x0001fe2e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002bb5b) cam4_indicators_pane_g

0x3be8,	// (0x0001fe4c) cam4_indicators_pane_t1

0x3c12,	// (0x0001fe76) main_video4_pane_g1_ParamLimits

0x3c12,	// (0x0001fe76) main_video4_pane_g1

0x3c1e,	// (0x0001fe82) main_video4_pane_g2_ParamLimits

0x3c1e,	// (0x0001fe82) main_video4_pane_g2

0x3c2a,	// (0x0001fe8e) main_video4_pane_g3_ParamLimits

0x3c2a,	// (0x0001fe8e) main_video4_pane_g3

0x3c36,	// (0x0001fe9a) main_video4_pane_g4_ParamLimits

0x3c36,	// (0x0001fe9a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002bb62) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002bb62) main_video4_pane_g

0x3c56,	// (0x0001feba) vid4_indicators_pane_ParamLimits

0x3c56,	// (0x0001feba) vid4_indicators_pane

0x3c75,	// (0x0001fed9) video4_image_uncrop_cif_pane_ParamLimits

0x3c75,	// (0x0001fed9) video4_image_uncrop_cif_pane

0x3c84,	// (0x0001fee8) video4_image_uncrop_nhd_pane_ParamLimits

0x3c84,	// (0x0001fee8) video4_image_uncrop_nhd_pane

0x3b0e,	// (0x0001fd72) video4_image_uncrop_vga_pane_ParamLimits

0x3b0e,	// (0x0001fd72) video4_image_uncrop_vga_pane

0x312b,	// (0x0001f38f) bg_tb_trans_pane_cp07

0x3c9b,	// (0x0001feff) vid4_indicators_pane_g1

0x3caf,	// (0x0001ff13) vid4_indicators_pane_g2

0x3cc3,	// (0x0001ff27) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002bb6d) vid4_indicators_pane_g

0x3cf2,	// (0x0001ff56) vid4_indicators_pane_t1

0x85fb,	// (0x0002485f) cam4_autofocus_pane_g1

0x8603,	// (0x00024867) cam4_autofocus_pane_g2

0x860b,	// (0x0002486f) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002bb78) cam4_autofocus_pane_g

0x8613,	// (0x00024877) cam4_autofocus_pane_g3_copy1

0x841b,	// (0x0002467f) video_down_pane_cp_t1

0x8429,	// (0x0002468d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002baf4) video_down_pane_cp_t

0x2cc5,	// (0x0001ef29) popup_vitu2_window_ParamLimits

0x2cc5,	// (0x0001ef29) popup_vitu2_window

0x3d09,	// (0x0001ff6d) aid_size_cell2_itu2_ParamLimits

0x3d09,	// (0x0001ff6d) aid_size_cell2_itu2

0x3d2b,	// (0x0001ff8f) aid_size_cell_itu2_ParamLimits

0x3d2b,	// (0x0001ff8f) aid_size_cell_itu2

0x3d6f,	// (0x0001ffd3) bg_popup_window_pane_cp09_ParamLimits

0x3d6f,	// (0x0001ffd3) bg_popup_window_pane_cp09

0x3d7d,	// (0x0001ffe1) field_vitu2_entry_pane_ParamLimits

0x3d7d,	// (0x0001ffe1) field_vitu2_entry_pane

0x3d9d,	// (0x00020001) grid_vitu2_function_pane_ParamLimits

0x3d9d,	// (0x00020001) grid_vitu2_function_pane

0x3de1,	// (0x00020045) grid_vitu2_itu_pane_ParamLimits

0x3de1,	// (0x00020045) grid_vitu2_itu_pane

0x3e5d,	// (0x000200c1) cell_vitu2_itu_pane_ParamLimits

0x3e5d,	// (0x000200c1) cell_vitu2_itu_pane

0x3e76,	// (0x000200da) cell_vitu2_function_pane_ParamLimits

0x3e76,	// (0x000200da) cell_vitu2_function_pane

0xedbf,	// (0x0002b023) bg_popup_call_pane_cp08_ParamLimits

0xedbf,	// (0x0002b023) bg_popup_call_pane_cp08

0xedd6,	// (0x0002b03a) field_vitu2_entry_pane_g1

0xede2,	// (0x0002b046) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002bb7f) field_vitu2_entry_pane_g

0x861b,	// (0x0002487f) field_vitu2_entry_pane_t1_ParamLimits

0x861b,	// (0x0002487f) field_vitu2_entry_pane_t1

0xedfc,	// (0x0002b060) field_vitu2_entry_pane_t2_ParamLimits

0xedfc,	// (0x0002b060) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002bb86) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002bb86) field_vitu2_entry_pane_t

0x3eb7,	// (0x0002011b) bg_button_pane_cp010_ParamLimits

0x3eb7,	// (0x0002011b) bg_button_pane_cp010

0x3ec5,	// (0x00020129) cell_vitu2_itu_pane_g1

0x3ee5,	// (0x00020149) cell_vitu2_itu_pane_t1_ParamLimits

0x3ee5,	// (0x00020149) cell_vitu2_itu_pane_t1

0x3f31,	// (0x00020195) cell_vitu2_itu_pane_t2_ParamLimits

0x3f31,	// (0x00020195) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002bb90) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002bb90) cell_vitu2_itu_pane_t

0x312b,	// (0x0001f38f) bg_button_pane_cp011

0x3ff9,	// (0x0002025d) cell_vitu2_function_pane_g1

0x2cd3,	// (0x0001ef37) main_myfav_hc_pane

0x3aa5,	// (0x0001fd09) popup_image3_note_pane_ParamLimits

0x3aa5,	// (0x0001fd09) popup_image3_note_pane

0x3ab3,	// (0x0001fd17) popup_image3_tool_bar_pane_ParamLimits

0x3ab3,	// (0x0001fd17) popup_image3_tool_bar_pane

0x3fa7,	// (0x0002020b) cell_vitu2_itu_pane_t3_ParamLimits

0x3fa7,	// (0x0002020b) cell_vitu2_itu_pane_t3

0xb77b,	// (0x000279df) bg_popup_trans_pane

0xee21,	// (0x0002b085) grid_image3_tool_bar_pane

0xee2b,	// (0x0002b08f) bg_popup_trans_pane_g1

0xc2e4,	// (0x00028548) bg_popup_trans_pane_g2

0xee33,	// (0x0002b097) bg_popup_trans_pane_g3

0xee3b,	// (0x0002b09f) bg_popup_trans_pane_g4

0xee43,	// (0x0002b0a7) bg_popup_trans_pane_g5

0xee4b,	// (0x0002b0af) bg_popup_trans_pane_g6

0xee53,	// (0x0002b0b7) bg_popup_trans_pane_g7

0xee5b,	// (0x0002b0bf) bg_popup_trans_pane_g8

0xc2c4,	// (0x00028528) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002bb97) bg_popup_trans_pane_g

0xee63,	// (0x0002b0c7) cell_image3_tool_bar_pane_ParamLimits

0xee63,	// (0x0002b0c7) cell_image3_tool_bar_pane

0xe381,	// (0x0002a5e5) cell_image3_tool_bar_pane_g1

0xb77b,	// (0x000279df) bg_popup_trans_pane_cp1

0xee77,	// (0x0002b0db) popup_image3_note_pane_t1

0xee85,	// (0x0002b0e9) popup_image3_note_pane_t2

0xee93,	// (0x0002b0f7) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002bbaa) popup_image3_note_pane_t

0xeea1,	// (0x0002b105) popup_image3_note_pane_t3_copy1

0x864b,	// (0x000248af) bg_myfav_hc_instruction_pane_ParamLimits

0x864b,	// (0x000248af) bg_myfav_hc_instruction_pane

0x8663,	// (0x000248c7) cell_myfav_contact_pane_ParamLimits

0x8663,	// (0x000248c7) cell_myfav_contact_pane

0x867d,	// (0x000248e1) cell_myfav_contact_pane_cp1_ParamLimits

0x867d,	// (0x000248e1) cell_myfav_contact_pane_cp1

0x8695,	// (0x000248f9) cell_myfav_contact_pane_cp2_ParamLimits

0x8695,	// (0x000248f9) cell_myfav_contact_pane_cp2

0x86ad,	// (0x00024911) cell_myfav_contact_pane_cp3_ParamLimits

0x86ad,	// (0x00024911) cell_myfav_contact_pane_cp3

0x86c4,	// (0x00024928) cell_myfav_contact_pane_cp4_ParamLimits

0x86c4,	// (0x00024928) cell_myfav_contact_pane_cp4

0x86da,	// (0x0002493e) cell_myfav_contact_pane_cp5_ParamLimits

0x86da,	// (0x0002493e) cell_myfav_contact_pane_cp5

0x86ee,	// (0x00024952) cell_myfav_contact_pane_cp6_ParamLimits

0x86ee,	// (0x00024952) cell_myfav_contact_pane_cp6

0x8702,	// (0x00024966) cell_myfav_contact_pane_cp7_ParamLimits

0x8702,	// (0x00024966) cell_myfav_contact_pane_cp7

0xeeaf,	// (0x0002b113) listscroll_gen_pane_cp05

0x871a,	// (0x0002497e) main_myfav_hc_pane_g1_ParamLimits

0x871a,	// (0x0002497e) main_myfav_hc_pane_g1

0x8730,	// (0x00024994) main_myfav_hc_pane_g2_ParamLimits

0x8730,	// (0x00024994) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002bbb1) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002bbb1) main_myfav_hc_pane_g

0x875e,	// (0x000249c2) main_myfav_hc_pane_t1_ParamLimits

0x875e,	// (0x000249c2) main_myfav_hc_pane_t1

0xeeb8,	// (0x0002b11c) main_myfav_hc_pane_t2_ParamLimits

0xeeb8,	// (0x0002b11c) main_myfav_hc_pane_t2

0xeee6,	// (0x0002b14a) main_myfav_hc_pane_t3_ParamLimits

0xeee6,	// (0x0002b14a) main_myfav_hc_pane_t3

0x8775,	// (0x000249d9) main_myfav_hc_pane_t4_ParamLimits

0x8775,	// (0x000249d9) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002bbb8) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002bbb8) main_myfav_hc_pane_t

0xe381,	// (0x0002a5e5) bg_myfav_hc_instruction_pane_g1

0xeef8,	// (0x0002b15c) cell_myfav_contact_pane_g1_ParamLimits

0xeef8,	// (0x0002b15c) cell_myfav_contact_pane_g1

0xeef8,	// (0x0002b15c) cell_myfav_contact_pane_g2_ParamLimits

0xeef8,	// (0x0002b15c) cell_myfav_contact_pane_g2

0xef10,	// (0x0002b174) cell_myfav_contact_pane_g3_ParamLimits

0xef10,	// (0x0002b174) cell_myfav_contact_pane_g3

0xe675,	// (0x0002a8d9) cell_myfav_contact_pane_g4_ParamLimits

0xe675,	// (0x0002a8d9) cell_myfav_contact_pane_g4

0xef1d,	// (0x0002b181) cell_myfav_contact_pane_g5_ParamLimits

0xef1d,	// (0x0002b181) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002bbc3) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002bbc3) cell_myfav_contact_pane_g

0x8746,	// (0x000249aa) main_myfav_hc_pane_g3_ParamLimits

0x8746,	// (0x000249aa) main_myfav_hc_pane_g3

0x2bce,	// (0x0001ee32) popup_adpt_find_window

0x879f,	// (0x00024a03) afind_page_pane_ParamLimits

0x879f,	// (0x00024a03) afind_page_pane

0x87ac,	// (0x00024a10) aid_size_cell_afind_ParamLimits

0x87ac,	// (0x00024a10) aid_size_cell_afind

0x87c6,	// (0x00024a2a) bg_popup_sub_pane_cp09_ParamLimits

0x87c6,	// (0x00024a2a) bg_popup_sub_pane_cp09

0x87d3,	// (0x00024a37) find_pane_cp01_ParamLimits

0x87d3,	// (0x00024a37) find_pane_cp01

0xef29,	// (0x0002b18d) grid_afind_control_pane_ParamLimits

0xef29,	// (0x0002b18d) grid_afind_control_pane

0x87e0,	// (0x00024a44) grid_afind_pane_ParamLimits

0x87e0,	// (0x00024a44) grid_afind_pane

0x87fc,	// (0x00024a60) cell_afind_pane_ParamLimits

0x87fc,	// (0x00024a60) cell_afind_pane

0xe381,	// (0x0002a5e5) afind_page_pane_g1

0x8844,	// (0x00024aa8) afind_page_pane_g2

0x884d,	// (0x00024ab1) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002bbce) afind_page_pane_g

0x8856,	// (0x00024aba) afind_page_pane_t1

0xef3d,	// (0x0002b1a1) cell_afind_grid_control_pane_ParamLimits

0xef3d,	// (0x0002b1a1) cell_afind_grid_control_pane

0xecd0,	// (0x0002af34) bg_button_pane_cp69_ParamLimits

0xecd0,	// (0x0002af34) bg_button_pane_cp69

0x8876,	// (0x00024ada) cell_afind_pane_g1_ParamLimits

0x8876,	// (0x00024ada) cell_afind_pane_g1

0x8883,	// (0x00024ae7) cell_afind_pane_t1_ParamLimits

0x8883,	// (0x00024ae7) cell_afind_pane_t1

0xc0dd,	// (0x00028341) bg_button_pane_cp72

0xef4c,	// (0x0002b1b0) cell_afind_grid_control_pane_g1

0x6c3e,	// (0x00022ea2) aid_image_placing_area_ParamLimits

0x6c3e,	// (0x00022ea2) aid_image_placing_area

0xe99e,	// (0x0002ac02) field_vitu_entry_pane_g1_ParamLimits

0xe99e,	// (0x0002ac02) field_vitu_entry_pane_g1

0xe9aa,	// (0x0002ac0e) field_vitu_entry_pane_g2_ParamLimits

0xe9aa,	// (0x0002ac0e) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002ba7f) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002ba7f) field_vitu_entry_pane_g

0x82cb,	// (0x0002452f) cell_vitu_itu_pane_g1_ParamLimits

0x830d,	// (0x00024571) cell_vitu_itu_pane_t3_ParamLimits

0x830d,	// (0x00024571) cell_vitu_itu_pane_t3

0xec80,	// (0x0002aee4) mp4_progress_pane_t1_ParamLimits

0xec99,	// (0x0002aefd) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002bb14) mp4_progress_pane_t_ParamLimits

0xecb2,	// (0x0002af16) mup_progress_pane_cp04_ParamLimits

0x8789,	// (0x000249ed) main_myfav_hc_pane_t5_ParamLimits

0x8789,	// (0x000249ed) main_myfav_hc_pane_t5

0x2a91,	// (0x0001ecf5) aid_zoom_text_primary

0x2bce,	// (0x0001ee32) popup_adpt_find_window_ParamLimits

0x312b,	// (0x0001f38f) main_cam_set_pane

0x3b33,	// (0x0001fd97) cam4_zoom_pane_ParamLimits

0x3b33,	// (0x0001fd97) cam4_zoom_pane

0x8895,	// (0x00024af9) main_cam_set_pane_g1_ParamLimits

0x8895,	// (0x00024af9) main_cam_set_pane_g1

0x88a3,	// (0x00024b07) main_cam_set_pane_g2_ParamLimits

0x88a3,	// (0x00024b07) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002bbd5) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002bbd5) main_cam_set_pane_g

0x88af,	// (0x00024b13) main_cam_set_pane_t1_ParamLimits

0x88af,	// (0x00024b13) main_cam_set_pane_t1

0x88cb,	// (0x00024b2f) main_cset_listscroll_pane_ParamLimits

0x88cb,	// (0x00024b2f) main_cset_listscroll_pane

0x88f6,	// (0x00024b5a) main_cset_slider_pane_ParamLimits

0x88f6,	// (0x00024b5a) main_cset_slider_pane

0xef5d,	// (0x0002b1c1) main_cset_list_pane_ParamLimits

0xef5d,	// (0x0002b1c1) main_cset_list_pane

0xef6d,	// (0x0002b1d1) scroll_pane_cp028

0x8915,	// (0x00024b79) aid_area_touch_slider

0x8931,	// (0x00024b95) cset_slider_pane

0x895b,	// (0x00024bbf) main_cset_slider_pane_g1

0x8970,	// (0x00024bd4) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002bbda) main_cset_slider_pane_g

0xefa6,	// (0x0002b20a) main_cset_slider_pane_t1

0x8a32,	// (0x00024c96) main_cset_slider_pane_t2

0x8a4c,	// (0x00024cb0) main_cset_slider_pane_t3

0x8a66,	// (0x00024cca) main_cset_slider_pane_t4

0x8a80,	// (0x00024ce4) main_cset_slider_pane_t5

0x8a9e,	// (0x00024d02) main_cset_slider_pane_t6

0x8ab5,	// (0x00024d19) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002bbff) main_cset_slider_pane_t

0x8bc1,	// (0x00024e25) cset_list_set_pane_ParamLimits

0x8bc1,	// (0x00024e25) cset_list_set_pane

0x8bd7,	// (0x00024e3b) aid_position_infowindow_above

0x8bdf,	// (0x00024e43) aid_position_infowindow_below

0xf046,	// (0x0002b2aa) cset_list_set_pane_g1_ParamLimits

0xf046,	// (0x0002b2aa) cset_list_set_pane_g1

0xf052,	// (0x0002b2b6) cset_list_set_pane_g3_ParamLimits

0xf052,	// (0x0002b2b6) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002bc1e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002bc1e) cset_list_set_pane_g

0xf061,	// (0x0002b2c5) cset_list_set_pane_t1_ParamLimits

0xf061,	// (0x0002b2c5) cset_list_set_pane_t1

0xbddd,	// (0x00028041) list_highlight_pane_cp021_ParamLimits

0xbddd,	// (0x00028041) list_highlight_pane_cp021

0xcc2d,	// (0x00028e91) cset_slider_pane_g1

0xcc3f,	// (0x00028ea3) cset_slider_pane_g2

0xcc36,	// (0x00028e9a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002bc23) cset_slider_pane_g

0x400d,	// (0x00020271) aid_area_touch_cam4_zoom

0x4015,	// (0x00020279) cam4_zoom_cont_pane

0x401d,	// (0x00020281) cam4_zoom_pane_g1

0x4025,	// (0x00020289) cam4_zoom_pane_g2

0x402d,	// (0x00020291) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002bc2a) cam4_zoom_pane_g

0x4035,	// (0x00020299) cam4_zoom_cont_pane_g1

0x403e,	// (0x000202a2) cam4_zoom_cont_pane_g2

0x4047,	// (0x000202ab) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002bc31) cam4_zoom_cont_pane_g

0x8533,	// (0x00024797) call4_image_pane_ParamLimits

0x8533,	// (0x00024797) call4_image_pane

0xecdc,	// (0x0002af40) call4_windows_conf_pane_ParamLimits

0xed1d,	// (0x0002af81) popup_call4_audio_in_window_ParamLimits

0xed1d,	// (0x0002af81) popup_call4_audio_in_window

0xb77b,	// (0x000279df) bg_popup_call2_act_pane_cp02

0xed93,	// (0x0002aff7) call4_list_conf_pane

0xe381,	// (0x0002a5e5) call4_image_pane_g1

0xe381,	// (0x0002a5e5) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002b940) call4_image_pane_g

0xf076,	// (0x0002b2da) list_single_graphic_popup_conf4_pane_ParamLimits

0xf076,	// (0x0002b2da) list_single_graphic_popup_conf4_pane

0xb77b,	// (0x000279df) list_highlight_pane_cp022

0xf0a4,	// (0x0002b308) list_single_graphic_popup_conf4_pane_g1

0xc7f2,	// (0x00028a56) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002bc38) list_single_graphic_popup_conf4_pane_g

0xf0ac,	// (0x0002b310) list_single_graphic_popup_conf4_pane_t1

0x5024,	// (0x00021288) popup_vtel_slider_window_ParamLimits

0x5024,	// (0x00021288) popup_vtel_slider_window

0xecbe,	// (0x0002af22) dialer2_ne_pane_t2_ParamLimits

0xecbe,	// (0x0002af22) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002bb19) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002bb19) dialer2_ne_pane_t

0xbddd,	// (0x00028041) bg_popup_sub_pane_cp010_ParamLimits

0xbddd,	// (0x00028041) bg_popup_sub_pane_cp010

0x8be7,	// (0x00024e4b) popup_vtel_slider_window_g1_ParamLimits

0x8be7,	// (0x00024e4b) popup_vtel_slider_window_g1

0x8bf3,	// (0x00024e57) popup_vtel_slider_window_g2_ParamLimits

0x8bf3,	// (0x00024e57) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002bc3d) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002bc3d) popup_vtel_slider_window_g

0x8c3b,	// (0x00024e9f) vtel_slider_pane_ParamLimits

0x8c3b,	// (0x00024e9f) vtel_slider_pane

0x8c4a,	// (0x00024eae) vtel_slider_pane_g1_ParamLimits

0x8c4a,	// (0x00024eae) vtel_slider_pane_g1

0x8c57,	// (0x00024ebb) vtel_slider_pane_g2_ParamLimits

0x8c57,	// (0x00024ebb) vtel_slider_pane_g2

0x8c64,	// (0x00024ec8) vtel_slider_pane_g3_ParamLimits

0x8c64,	// (0x00024ec8) vtel_slider_pane_g3

0x8c4a,	// (0x00024eae) vtel_slider_pane_g4_ParamLimits

0x8c4a,	// (0x00024eae) vtel_slider_pane_g4

0x8c71,	// (0x00024ed5) vtel_slider_pane_g5_ParamLimits

0x8c71,	// (0x00024ed5) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002bc46) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002bc46) vtel_slider_pane_g

0x312b,	// (0x0001f38f) main_gallery2_pane

0x3d51,	// (0x0001ffb5) aid_size_row_itut2_dropdow_list_ParamLimits

0x3d51,	// (0x0001ffb5) aid_size_row_itut2_dropdow_list

0x3dbf,	// (0x00020023) grid_vitu2_function_top_pane_ParamLimits

0x3dbf,	// (0x00020023) grid_vitu2_function_top_pane

0x3e19,	// (0x0002007d) popup_vitu2_dropdown_list_window_ParamLimits

0x3e19,	// (0x0002007d) popup_vitu2_dropdown_list_window

0x3e39,	// (0x0002009d) popup_vitu2_match_list_window

0x4050,	// (0x000202b4) cell_vitu2_function_top_pane_ParamLimits

0x4050,	// (0x000202b4) cell_vitu2_function_top_pane

0x406a,	// (0x000202ce) cell_vitu2_function_top_pane_cp01_ParamLimits

0x406a,	// (0x000202ce) cell_vitu2_function_top_pane_cp01

0x4086,	// (0x000202ea) cell_vitu2_function_top_wide_pane_ParamLimits

0x4086,	// (0x000202ea) cell_vitu2_function_top_wide_pane

0x312b,	// (0x0001f38f) bg_button_pane_cp012

0x40a2,	// (0x00020306) cell_vitu2_function_top_pane_g1

0x40b6,	// (0x0002031a) bg_button_pane_cp013_ParamLimits

0x40b6,	// (0x0002031a) bg_button_pane_cp013

0x8c8c,	// (0x00024ef0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8c8c,	// (0x00024ef0) cell_vitu2_function_top_wide_pane_g1

0x2cc5,	// (0x0001ef29) bg_popup_sub_pane_cp20

0x40d2,	// (0x00020336) list_vitu2_match_list_pane

0xee2b,	// (0x0002b08f) bg_popup_sub_pane_cp20_g1

0xee33,	// (0x0002b097) bg_popup_sub_pane_cp20_g2

0xc2e4,	// (0x00028548) bg_popup_sub_pane_cp20_g3

0xee3b,	// (0x0002b09f) bg_popup_sub_pane_cp20_g4

0xc2c4,	// (0x00028528) bg_popup_sub_pane_cp20_g5

0xf0c2,	// (0x0002b326) bg_popup_sub_pane_cp20_g6

0xee4b,	// (0x0002b0af) bg_popup_sub_pane_cp20_g7

0xee53,	// (0x0002b0b7) bg_popup_sub_pane_cp20_g8

0xee5b,	// (0x0002b0bf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002bc51) bg_popup_sub_pane_cp20_g

0x40ea,	// (0x0002034e) list_vitu2_match_list_item_pane_ParamLimits

0x40ea,	// (0x0002034e) list_vitu2_match_list_item_pane

0x40fc,	// (0x00020360) list_vitu2_match_list_item_pane_t1

0x2cd3,	// (0x0001ef37) bg_popup_sub_pane_cp21

0x410a,	// (0x0002036e) grid_vitu2_dropdown_list_pane

0x4112,	// (0x00020376) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x4112,	// (0x00020376) cell_vitu2_dropdown_list_char_pane

0x4133,	// (0x00020397) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4133,	// (0x00020397) cell_vitu2_dropdown_list_ctrl_pane

0x0031,	// (0x0001c295) cell_vitu2_dropdown_list_char_pane_g1

0x0028,	// (0x0001c28c) cell_vitu2_dropdown_list_char_pane_g2

0x001f,	// (0x0001c283) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002bc6e) cell_vitu2_dropdown_list_char_pane_g

0x415f,	// (0x000203c3) cell_vitu2_dropdown_list_char_pane_t1

0x8cec,	// (0x00024f50) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8cec,	// (0x00024f50) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8cfc,	// (0x00024f60) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8cfc,	// (0x00024f60) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8d0d,	// (0x00024f71) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8d0d,	// (0x00024f71) cell_vitu2_dropdown_list_ctrl_pane_g3

0x416d,	// (0x000203d1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x416d,	// (0x000203d1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3ba3,	// (0x0001fe07) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3ba3,	// (0x0001fe07) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002bc75) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002bc75) cell_vitu2_dropdown_list_ctrl_pane_g

0x8d1d,	// (0x00024f81) aid_size_cell_gallery2_ParamLimits

0x8d1d,	// (0x00024f81) aid_size_cell_gallery2

0x8d37,	// (0x00024f9b) grid_gallery2_pane_ParamLimits

0x8d37,	// (0x00024f9b) grid_gallery2_pane

0x8154,	// (0x000243b8) scroll_pane_cp029_ParamLimits

0x8154,	// (0x000243b8) scroll_pane_cp029

0x8d4e,	// (0x00024fb2) cell_gallery2_pane_ParamLimits

0x8d4e,	// (0x00024fb2) cell_gallery2_pane

0x003a,	// (0x0001c29e) cell_gallery2_pane_g2

0x14d1,	// (0x0001d735) cell_gallery2_pane_g3

0x0042,	// (0x0001c2a6) cell_gallery2_pane_g4

0x004a,	// (0x0001c2ae) cell_gallery2_pane_g5

0xc08b,	// (0x000282ef) grid_highlight_pane_cp10

0x3e39,	// (0x0002009d) popup_vitu2_match_list_window_ParamLimits

0x3e4d,	// (0x000200b1) popup_vitu2_query_window_ParamLimits

0x3e4d,	// (0x000200b1) popup_vitu2_query_window

0x2cd3,	// (0x0001ef37) bg_vitu2_candi_button_pane

0x0031,	// (0x0001c295) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0028,	// (0x0001c28c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x001f,	// (0x0001c283) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8da0,	// (0x00025004) bg_button_pane_cp015

0x8db2,	// (0x00025016) bg_button_pane_cp016

0x8dc5,	// (0x00025029) bg_button_pane_cp017

0xdf70,	// (0x0002a1d4) bg_popup_sub_pane_cp22

0x0052,	// (0x0001c2b6) popup_vitu2_query_window_g1

0x8e0a,	// (0x0002506e) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002bc80) popup_vitu2_query_window_g

0x8e27,	// (0x0002508b) popup_vitu2_query_window_t1_ParamLimits

0x8e27,	// (0x0002508b) popup_vitu2_query_window_t1

0x8e5a,	// (0x000250be) popup_vitu2_query_window_t2_ParamLimits

0x8e5a,	// (0x000250be) popup_vitu2_query_window_t2

0x8e6c,	// (0x000250d0) popup_vitu2_query_window_t3_ParamLimits

0x8e6c,	// (0x000250d0) popup_vitu2_query_window_t3

0x8e94,	// (0x000250f8) popup_vitu2_query_window_t4_ParamLimits

0x8e94,	// (0x000250f8) popup_vitu2_query_window_t4

0x8eb5,	// (0x00025119) popup_vitu2_query_window_t5_ParamLimits

0x8eb5,	// (0x00025119) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002bc87) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002bc87) popup_vitu2_query_window_t

0xef55,	// (0x0002b1b9) main_cset_text_pane

0x8915,	// (0x00024b79) aid_area_touch_slider_ParamLimits

0x8931,	// (0x00024b95) cset_slider_pane_ParamLimits

0x895b,	// (0x00024bbf) main_cset_slider_pane_g1_ParamLimits

0x8970,	// (0x00024bd4) main_cset_slider_pane_g2_ParamLimits

0xef76,	// (0x0002b1da) main_cset_slider_pane_g3_ParamLimits

0xef76,	// (0x0002b1da) main_cset_slider_pane_g3

0x8985,	// (0x00024be9) main_cset_slider_pane_g4_ParamLimits

0x8985,	// (0x00024be9) main_cset_slider_pane_g4

0x8994,	// (0x00024bf8) main_cset_slider_pane_g5_ParamLimits

0x8994,	// (0x00024bf8) main_cset_slider_pane_g5

0x89a2,	// (0x00024c06) main_cset_slider_pane_g6_ParamLimits

0x89a2,	// (0x00024c06) main_cset_slider_pane_g6

0xf976,	// (0x0002bbda) main_cset_slider_pane_g_ParamLimits

0xefa6,	// (0x0002b20a) main_cset_slider_pane_t1_ParamLimits

0x8a32,	// (0x00024c96) main_cset_slider_pane_t2_ParamLimits

0x8a4c,	// (0x00024cb0) main_cset_slider_pane_t3_ParamLimits

0x8a66,	// (0x00024cca) main_cset_slider_pane_t4_ParamLimits

0x8a80,	// (0x00024ce4) main_cset_slider_pane_t5_ParamLimits

0x8a9e,	// (0x00024d02) main_cset_slider_pane_t6_ParamLimits

0x8ab5,	// (0x00024d19) main_cset_slider_pane_t7_ParamLimits

0x8ae3,	// (0x00024d47) main_cset_slider_pane_t8_ParamLimits

0x8ae3,	// (0x00024d47) main_cset_slider_pane_t8

0x8b0b,	// (0x00024d6f) main_cset_slider_pane_t9_ParamLimits

0x8b0b,	// (0x00024d6f) main_cset_slider_pane_t9

0x8b33,	// (0x00024d97) main_cset_slider_pane_t10_ParamLimits

0x8b33,	// (0x00024d97) main_cset_slider_pane_t10

0x8b5b,	// (0x00024dbf) main_cset_slider_pane_t11_ParamLimits

0x8b5b,	// (0x00024dbf) main_cset_slider_pane_t11

0x8b85,	// (0x00024de9) main_cset_slider_pane_t12_ParamLimits

0x8b85,	// (0x00024de9) main_cset_slider_pane_t12

0x8ba2,	// (0x00024e06) main_cset_slider_pane_t13_ParamLimits

0x8ba2,	// (0x00024e06) main_cset_slider_pane_t13

0xf99b,	// (0x0002bbff) main_cset_slider_pane_t_ParamLimits

0xb77b,	// (0x000279df) bg_popup_sub_pane_cp011

0x005e,	// (0x0001c2c2) main_cset_text_pane_g1

0x0066,	// (0x0001c2ca) main_cset_text_pane_t1

0x0074,	// (0x0001c2d8) main_cset_text_pane_t2

0x0082,	// (0x0001c2e6) main_cset_text_pane_t3

0x0090,	// (0x0001c2f4) main_cset_text_pane_t4

0x009e,	// (0x0001c302) main_cset_text_pane_t5

0x00ac,	// (0x0001c310) main_cset_text_pane_t6

0x00ba,	// (0x0001c31e) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002bc96) main_cset_text_pane_t

0x2cd3,	// (0x0001ef37) main_cam4_burst_pane

0x2cd3,	// (0x0001ef37) main_cam5_pane

0x8864,	// (0x00024ac8) bg_button_pane_cp019

0x886d,	// (0x00024ad1) bg_button_pane_cp020

0xef82,	// (0x0002b1e6) main_cset_slider_pane_g7_ParamLimits

0xef82,	// (0x0002b1e6) main_cset_slider_pane_g7

0xef8e,	// (0x0002b1f2) main_cset_slider_pane_g8_ParamLimits

0xef8e,	// (0x0002b1f2) main_cset_slider_pane_g8

0x89b6,	// (0x00024c1a) main_cset_slider_pane_g9_ParamLimits

0x89b6,	// (0x00024c1a) main_cset_slider_pane_g9

0x89c2,	// (0x00024c26) main_cset_slider_pane_g10_ParamLimits

0x89c2,	// (0x00024c26) main_cset_slider_pane_g10

0x89ce,	// (0x00024c32) main_cset_slider_pane_g11_ParamLimits

0x89ce,	// (0x00024c32) main_cset_slider_pane_g11

0x89da,	// (0x00024c3e) main_cset_slider_pane_g12_ParamLimits

0x89da,	// (0x00024c3e) main_cset_slider_pane_g12

0x89e6,	// (0x00024c4a) main_cset_slider_pane_g13_ParamLimits

0x89e6,	// (0x00024c4a) main_cset_slider_pane_g13

0x89f2,	// (0x00024c56) main_cset_slider_pane_g14_ParamLimits

0x89f2,	// (0x00024c56) main_cset_slider_pane_g14

0x89fe,	// (0x00024c62) main_cset_slider_pane_g15_ParamLimits

0x89fe,	// (0x00024c62) main_cset_slider_pane_g15

0xefd4,	// (0x0002b238) main_cset_slider_pane_t14_ParamLimits

0xefd4,	// (0x0002b238) main_cset_slider_pane_t14

0xf00d,	// (0x0002b271) main_cset_slider_pane_t15_ParamLimits

0xf00d,	// (0x0002b271) main_cset_slider_pane_t15

0x8f2c,	// (0x00025190) aid_cam4_burst_size_cell_ParamLimits

0x8f2c,	// (0x00025190) aid_cam4_burst_size_cell

0x8f48,	// (0x000251ac) grid_cam4_burst_pane_ParamLimits

0x8f48,	// (0x000251ac) grid_cam4_burst_pane

0x8f78,	// (0x000251dc) linegrid_cam4_burst_pane_ParamLimits

0x8f78,	// (0x000251dc) linegrid_cam4_burst_pane

0x8f98,	// (0x000251fc) scroll_pane_cp30_ParamLimits

0x8f98,	// (0x000251fc) scroll_pane_cp30

0x8fa4,	// (0x00025208) cell_cam4_burst_pane_ParamLimits

0x8fa4,	// (0x00025208) cell_cam4_burst_pane

0x00d4,	// (0x0001c338) linegrid_cam4_burst_pane_g1_ParamLimits

0x00d4,	// (0x0001c338) linegrid_cam4_burst_pane_g1

0x8fe0,	// (0x00025244) linegrid_cam4_burst_pane_g2_ParamLimits

0x8fe0,	// (0x00025244) linegrid_cam4_burst_pane_g2

0x00e1,	// (0x0001c345) linegrid_cam4_burst_pane_g3_ParamLimits

0x00e1,	// (0x0001c345) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002bca5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002bca5) linegrid_cam4_burst_pane_g

0x8ff1,	// (0x00025255) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ff1,	// (0x00025255) linegrid_cam4_burst_pane_g3_copy1

0x00ee,	// (0x0001c352) linegrid_cam4_burst_pane_g4_ParamLimits

0x00ee,	// (0x0001c352) linegrid_cam4_burst_pane_g4

0x900b,	// (0x0002526f) linegrid_cam4_burst_pane_g5_ParamLimits

0x900b,	// (0x0002526f) linegrid_cam4_burst_pane_g5

0x901c,	// (0x00025280) linegrid_cam4_burst_pane_g6_ParamLimits

0x901c,	// (0x00025280) linegrid_cam4_burst_pane_g6

0x00fb,	// (0x0001c35f) linegrid_cam4_burst_pane_g7_ParamLimits

0x00fb,	// (0x0001c35f) linegrid_cam4_burst_pane_g7

0x902d,	// (0x00025291) cell_cam4_burst_pane_g1

0x0114,	// (0x0001c378) main_cam5_pane_t1_ParamLimits

0x0114,	// (0x0001c378) main_cam5_pane_t1

0x0126,	// (0x0001c38a) main_cam5_pane_t2_ParamLimits

0x0126,	// (0x0001c38a) main_cam5_pane_t2

0x0138,	// (0x0001c39c) main_cam5_pane_t3_ParamLimits

0x0138,	// (0x0001c39c) main_cam5_pane_t3

0x014a,	// (0x0001c3ae) main_cam5_pane_t4_ParamLimits

0x014a,	// (0x0001c3ae) main_cam5_pane_t4

0x0162,	// (0x0001c3c6) main_cam5_pane_t5_ParamLimits

0x0162,	// (0x0001c3c6) main_cam5_pane_t5

0x0176,	// (0x0001c3da) main_cam5_pane_t6_ParamLimits

0x0176,	// (0x0001c3da) main_cam5_pane_t6

0x018a,	// (0x0001c3ee) main_cam5_pane_t7_ParamLimits

0x018a,	// (0x0001c3ee) main_cam5_pane_t7

0x019c,	// (0x0001c400) main_cam5_pane_t8_ParamLimits

0x019c,	// (0x0001c400) main_cam5_pane_t8

0x01b8,	// (0x0001c41c) main_cam5_pane_t9_ParamLimits

0x01b8,	// (0x0001c41c) main_cam5_pane_t9

0x01ca,	// (0x0001c42e) main_cam5_pane_t10_ParamLimits

0x01ca,	// (0x0001c42e) main_cam5_pane_t10

0x01dc,	// (0x0001c440) main_cam5_pane_t11_ParamLimits

0x01dc,	// (0x0001c440) main_cam5_pane_t11

0x01ee,	// (0x0001c452) main_cam5_pane_t12_ParamLimits

0x01ee,	// (0x0001c452) main_cam5_pane_t12

0x0203,	// (0x0001c467) main_cam5_pane_t13_ParamLimits

0x0203,	// (0x0001c467) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002bcb1) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002bcb1) main_cam5_pane_t

0x2c84,	// (0x0001eee8) popup_scut_keymap_window_ParamLimits

0x2c84,	// (0x0001eee8) popup_scut_keymap_window

0x9040,	// (0x000252a4) aid_size_cell_brow_shortcut

0xc08b,	// (0x000282ef) bg_popup_window_pane_cp010

0x904c,	// (0x000252b0) grid_scut_pane

0x9058,	// (0x000252bc) cell_scut_pane_ParamLimits

0x9058,	// (0x000252bc) cell_scut_pane

0x906f,	// (0x000252d3) cell_scut_pane_g1

0x0220,	// (0x0001c484) cell_scut_pane_t1

0x022f,	// (0x0001c493) cell_scut_pane_t2

0x9078,	// (0x000252dc) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002bccc) cell_scut_pane_t

0x79cb,	// (0x00023c2f) main_mup3_pane_g8_ParamLimits

0x79cb,	// (0x00023c2f) main_mup3_pane_g8

0x3d5f,	// (0x0001ffc3) area_vitu2_query_pane_ParamLimits

0x3d5f,	// (0x0001ffc3) area_vitu2_query_pane

0x8dd8,	// (0x0002503c) input_focus_pane_cp08

0x023e,	// (0x0001c4a2) area_vitu2_query_pane_g1

0x9086,	// (0x000252ea) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002bcd3) area_vitu2_query_pane_g

0x9097,	// (0x000252fb) area_vitu2_query_pane_t1_ParamLimits

0x9097,	// (0x000252fb) area_vitu2_query_pane_t1

0x90ab,	// (0x0002530f) area_vitu2_query_pane_t2_ParamLimits

0x90ab,	// (0x0002530f) area_vitu2_query_pane_t2

0x90bf,	// (0x00025323) area_vitu2_query_pane_t3_ParamLimits

0x90bf,	// (0x00025323) area_vitu2_query_pane_t3

0x024a,	// (0x0001c4ae) area_vitu2_query_pane_t4_ParamLimits

0x024a,	// (0x0001c4ae) area_vitu2_query_pane_t4

0x0272,	// (0x0001c4d6) area_vitu2_query_pane_t5_ParamLimits

0x0272,	// (0x0001c4d6) area_vitu2_query_pane_t5

0x029a,	// (0x0001c4fe) area_vitu2_query_pane_t6_ParamLimits

0x029a,	// (0x0001c4fe) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002bcd8) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002bcd8) area_vitu2_query_pane_t

0x90e7,	// (0x0002534b) bg_button_pane_cp018

0x90f5,	// (0x00025359) bg_button_pane_cp021

0x9101,	// (0x00025365) bg_button_pane_cp022

0x9112,	// (0x00025376) input_focus_pane_cp09

0xc948,	// (0x00028bac) aid_size_touch_mv_arrow_left

0xc971,	// (0x00028bd5) aid_size_touch_mv_arrow_right

0x8a16,	// (0x00024c7a) main_cset_slider_pane_g16_ParamLimits

0x8a16,	// (0x00024c7a) main_cset_slider_pane_g16

0x8a24,	// (0x00024c88) main_cset_slider_pane_g17_ParamLimits

0x8a24,	// (0x00024c88) main_cset_slider_pane_g17

0x902d,	// (0x00025291) cell_cam4_burst_pane_g1_ParamLimits

0xb77b,	// (0x000279df) compa_mode_pane

0x8bff,	// (0x00024e63) popup_vtel_slider_window_g3_ParamLimits

0x8bff,	// (0x00024e63) popup_vtel_slider_window_g3

0x8c13,	// (0x00024e77) popup_vtel_slider_window_g4_ParamLimits

0x8c13,	// (0x00024e77) popup_vtel_slider_window_g4

0x8c27,	// (0x00024e8b) popup_vtel_slider_window_t1_ParamLimits

0x8c27,	// (0x00024e8b) popup_vtel_slider_window_t1

0x2cd3,	// (0x0001ef37) main_cl_pane

0x31c9,	// (0x0001f42d) popup_imed_adjust2_window_ParamLimits

0xdf70,	// (0x0002a1d4) bg_tb_trans_pane_cp05_ParamLimits

0xe8d3,	// (0x0002ab37) popup_imed_adjust2_window_g1_ParamLimits

0xe8e2,	// (0x0002ab46) popup_imed_adjust2_window_g2_ParamLimits

0xe8e2,	// (0x0002ab46) popup_imed_adjust2_window_g2

0xe8ee,	// (0x0002ab52) popup_imed_adjust2_window_g3_ParamLimits

0xe8ee,	// (0x0002ab52) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002ba43) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002ba43) popup_imed_adjust2_window_g

0xe8fa,	// (0x0002ab5e) popup_imed_adjust2_window_t1_ParamLimits

0xe912,	// (0x0002ab76) slider_imed_adjust_pane_ParamLimits

0xe926,	// (0x0002ab8a) slider_imed_adjust_pane_g1_ParamLimits

0xe936,	// (0x0002ab9a) slider_imed_adjust_pane_g2_ParamLimits

0xe946,	// (0x0002abaa) slider_imed_adjust_pane_g3_ParamLimits

0xe957,	// (0x0002abbb) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002ba4a) slider_imed_adjust_pane_g_ParamLimits

0x3adc,	// (0x0001fd40) aid_touch_area_cam4_ParamLimits

0x3adc,	// (0x0001fd40) aid_touch_area_cam4

0x3aec,	// (0x0001fd50) battery_pane_cp01

0x3b73,	// (0x0001fdd7) main_camera4_pane_g6_ParamLimits

0x3b73,	// (0x0001fdd7) main_camera4_pane_g6

0x3b91,	// (0x0001fdf5) main_camera4_pane_t2_ParamLimits

0x3b91,	// (0x0001fdf5) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002bb4d) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002bb4d) main_camera4_pane_t

0x3c02,	// (0x0001fe66) aid_touch_area_vid4_ParamLimits

0x3c02,	// (0x0001fe66) aid_touch_area_vid4

0x3c42,	// (0x0001fea6) main_video4_pane_g5_ParamLimits

0x3c42,	// (0x0001fea6) main_video4_pane_g5

0x3c66,	// (0x0001feca) vid4_progress_pane_ParamLimits

0x3c66,	// (0x0001feca) vid4_progress_pane

0xef9a,	// (0x0002b1fe) main_cset_slider_pane_g18_ParamLimits

0xef9a,	// (0x0002b1fe) main_cset_slider_pane_g18

0x0108,	// (0x0001c36c) cell_cam4_burst_pane_g2_ParamLimits

0x0108,	// (0x0001c36c) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002bcac) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002bcac) cell_cam4_burst_pane_g

0x9123,	// (0x00025387) bg_cl_pane_ParamLimits

0x9123,	// (0x00025387) bg_cl_pane

0x912f,	// (0x00025393) cl_header_pane_ParamLimits

0x912f,	// (0x00025393) cl_header_pane

0x913b,	// (0x0002539f) cl_listscroll_pane_ParamLimits

0x913b,	// (0x0002539f) cl_listscroll_pane

0x02e6,	// (0x0001c54a) bg_cl_pane_g1

0x02ee,	// (0x0001c552) bg_cl_pane_g2

0x02f6,	// (0x0001c55a) bg_cl_pane_g3

0x02fe,	// (0x0001c562) bg_cl_pane_g4

0x0306,	// (0x0001c56a) bg_cl_pane_g5

0x030e,	// (0x0001c572) bg_cl_pane_g6

0x0316,	// (0x0001c57a) bg_cl_pane_g7

0x031e,	// (0x0001c582) bg_cl_pane_g8

0x0326,	// (0x0001c58a) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002bce7) bg_cl_pane_g

0x9147,	// (0x000253ab) aid_height_cl_leading_ParamLimits

0x9147,	// (0x000253ab) aid_height_cl_leading

0x9153,	// (0x000253b7) aid_height_cl_text_ParamLimits

0x9153,	// (0x000253b7) aid_height_cl_text

0xeeca,	// (0x0002b12e) bg_cl_header_pane_ParamLimits

0xeeca,	// (0x0002b12e) bg_cl_header_pane

0x916b,	// (0x000253cf) cl_header_pane_g1_ParamLimits

0x916b,	// (0x000253cf) cl_header_pane_g1

0x9178,	// (0x000253dc) cl_header_pane_t1_ParamLimits

0x9178,	// (0x000253dc) cl_header_pane_t1

0x032e,	// (0x0001c592) cl_list_pane

0xef6d,	// (0x0002b1d1) hc_scroll_pane_cp01

0xc2c4,	// (0x00028528) bg_cl_header_pane_g1

0xee2b,	// (0x0002b08f) bg_cl_header_pane_g2

0xc2e4,	// (0x00028548) bg_cl_header_pane_g3

0xee3b,	// (0x0002b09f) bg_cl_header_pane_g4

0xee33,	// (0x0002b097) bg_cl_header_pane_g5

0xf0c2,	// (0x0002b326) bg_cl_header_pane_g6

0xee53,	// (0x0002b0b7) bg_cl_header_pane_g7

0xee5b,	// (0x0002b0bf) bg_cl_header_pane_g8

0xee4b,	// (0x0002b0af) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002bcfa) bg_cl_header_pane_g

0x918a,	// (0x000253ee) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x918a,	// (0x000253ee) hc_cl_list_double_graphic_heading_pane

0x919b,	// (0x000253ff) hc_cl_list_single_graphic_pane_ParamLimits

0x919b,	// (0x000253ff) hc_cl_list_single_graphic_pane

0x91b4,	// (0x00025418) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x91b4,	// (0x00025418) hc_cl_list_single_graphic_pane_g1

0x91c0,	// (0x00025424) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x91c0,	// (0x00025424) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002bd0d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002bd0d) hc_cl_list_single_graphic_pane_g

0x91d4,	// (0x00025438) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x91d4,	// (0x00025438) hc_cl_list_single_graphic_pane_t1

0x91b4,	// (0x00025418) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x91b4,	// (0x00025418) hc_cl_list_double_graphic_heading_pane_g1

0x91e9,	// (0x0002544d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x91e9,	// (0x0002544d) hc_cl_list_double_graphic_heading_pane_g2

0x91fd,	// (0x00025461) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x91fd,	// (0x00025461) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002bd12) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002bd12) hc_cl_list_double_graphic_heading_pane_g

0x9211,	// (0x00025475) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9211,	// (0x00025475) hc_cl_list_double_graphic_heading_pane_t1

0x9226,	// (0x0002548a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9226,	// (0x0002548a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002bd19) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002bd19) hc_cl_list_double_graphic_heading_pane_t

0x4191,	// (0x000203f5) vid4_progress_pane_g1

0x41a1,	// (0x00020405) vid4_progress_pane_g2

0x41b1,	// (0x00020415) vid4_progress_pane_g3

0x41c3,	// (0x00020427) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002bd1e) vid4_progress_pane_g

0x41db,	// (0x0002043f) vid4_progress_pane_t1

0x41f1,	// (0x00020455) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002bd29) vid4_progress_pane_t

0x421b,	// (0x0002047f) wait_bar_pane_cp07

0xe174,	// (0x0002a3d8) blid_firmament_pane_ParamLimits

0xe1b7,	// (0x0002a41b) popup_blid_sat_info2_window_g1

0xe1db,	// (0x0002a43f) popup_blid_sat_info2_window_t3

0xe1e9,	// (0x0002a44d) popup_blid_sat_info2_window_t4

0xe1f7,	// (0x0002a45b) popup_blid_sat_info2_window_t5

0xe205,	// (0x0002a469) popup_blid_sat_info2_window_t6

0xe215,	// (0x0002a479) popup_blid_sat_info2_window_t7

0xe223,	// (0x0002a487) popup_blid_sat_info2_window_t8

0xe231,	// (0x0002a495) popup_blid_sat_info2_window_t9

0xe23f,	// (0x0002a4a3) popup_blid_sat_info2_window_t10

0xe301,	// (0x0002a565) aid_firma_cardinal_ParamLimits

0xe315,	// (0x0002a579) blid_firmament_pane_t1_ParamLimits

0xe32c,	// (0x0002a590) blid_firmament_pane_t2_ParamLimits

0xe343,	// (0x0002a5a7) blid_firmament_pane_t3_ParamLimits

0xe35a,	// (0x0002a5be) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002b937) blid_firmament_pane_t_ParamLimits

0xe371,	// (0x0002a5d5) blid_sat_info_pane_ParamLimits

0x312b,	// (0x0001f38f) main_cam_set_pane_ParamLimits

0x80ed,	// (0x00024351) aid_size_cell_colour_35_ParamLimits

0x8107,	// (0x0002436b) aid_size_cell_colour_112_ParamLimits

0x811e,	// (0x00024382) aid_size_cell_effect_ParamLimits

0xbddd,	// (0x00028041) bg_tb_trans_pane_cp02_ParamLimits

0xc903,	// (0x00028b67) heading_imed_pane_ParamLimits

0x8138,	// (0x0002439c) listscroll_imed_pane_ParamLimits

0xd596,	// (0x000297fa) popup_call2_audio_first_window_g5_ParamLimits

0xd596,	// (0x000297fa) popup_call2_audio_first_window_g5

0x3967,	// (0x0001fbcb) aid_size_touch_image3_arrow_left_ParamLimits

0x3967,	// (0x0001fbcb) aid_size_touch_image3_arrow_left

0x397d,	// (0x0001fbe1) aid_size_touch_image3_arrow_right_ParamLimits

0x397d,	// (0x0001fbe1) aid_size_touch_image3_arrow_right

0x4206,	// (0x0002046a) vid4_progress_pane_t3

0x83d6,	// (0x0002463a) main_hwr_training_symbol_option_pane_ParamLimits

0x83d6,	// (0x0002463a) main_hwr_training_symbol_option_pane

0xebc0,	// (0x0002ae24) popup_hwr_training_preview_window_ParamLimits

0xebc0,	// (0x0002ae24) popup_hwr_training_preview_window

0x3665,	// (0x0001f8c9) hwr_training_navi_pane_g5_ParamLimits

0x3665,	// (0x0001f8c9) hwr_training_navi_pane_g5

0xee19,	// (0x0002b07d) popup_char_count_window

0x2cc5,	// (0x0001ef29) bg_popup_sub_pane_cp20_ParamLimits

0x40d2,	// (0x00020336) list_vitu2_match_list_pane_ParamLimits

0x40de,	// (0x00020342) vitu2_page_scroll_pane_ParamLimits

0x40de,	// (0x00020342) vitu2_page_scroll_pane

0x03c3,	// (0x0001c627) list_single_hwr_training_symbol_option_pane_ParamLimits

0x03c3,	// (0x0001c627) list_single_hwr_training_symbol_option_pane

0x03d6,	// (0x0001c63a) list_single_hwr_training_symbol_option_pane_g1

0x03de,	// (0x0001c642) list_single_hwr_training_symbol_option_pane_t1

0x03ec,	// (0x0001c650) bg_button_pane_cp023

0x03f5,	// (0x0001c659) bg_button_pane_cp024

0x926a,	// (0x000254ce) vitu2_page_scroll_pane_g1

0x9272,	// (0x000254d6) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002bd30) vitu2_page_scroll_pane_g

0x927a,	// (0x000254de) vitu2_page_scroll_pane_t1

0xe0cb,	// (0x0002a32f) popup_char_count_window_g1

0x0428,	// (0x0001c68c) popup_char_count_window_g2

0x0431,	// (0x0001c695) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002bd35) popup_char_count_window_g

0x043a,	// (0x0001c69e) popup_char_count_window_t1

0x2cd3,	// (0x0001ef37) main_vded2_pane

0xe8bf,	// (0x0002ab23) aid_size_cell_imed_line

0xe8c9,	// (0x0002ab2d) grid_imed_line_width_pane

0x3cd4,	// (0x0001ff38) vid4_indicators_pane_g4

0x0448,	// (0x0001c6ac) cell_imed_line_width_pane_ParamLimits

0x0448,	// (0x0001c6ac) cell_imed_line_width_pane

0x045c,	// (0x0001c6c0) cell_imed_line_width_pane_g1

0x0465,	// (0x0001c6c9) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002bd3c) cell_imed_line_width_pane_g

0x9289,	// (0x000254ed) main_vded2_pane_g1_ParamLimits

0x9289,	// (0x000254ed) main_vded2_pane_g1

0x9296,	// (0x000254fa) main_vded2_pane_g2_ParamLimits

0x9296,	// (0x000254fa) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002bd41) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002bd41) main_vded2_pane_g

0x92a4,	// (0x00025508) vded2_slider_pane_ParamLimits

0x92a4,	// (0x00025508) vded2_slider_pane

0x92b1,	// (0x00025515) aid_size_touch_vded2_end

0x92bb,	// (0x0002551f) aid_size_touch_vded2_playhead

0x046d,	// (0x0001c6d1) aid_size_touch_vded2_start

0x0475,	// (0x0001c6d9) vded2_slider_bg_pane

0x047e,	// (0x0001c6e2) vded2_slider_pane_g1

0x0487,	// (0x0001c6eb) vded2_slider_pane_g2

0x92c3,	// (0x00025527) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002bd46) vded2_slider_pane_g

0x048f,	// (0x0001c6f3) vded2_slider_bg_pane_g1

0x0498,	// (0x0001c6fc) vded2_slider_bg_pane_g2

0x04a1,	// (0x0001c705) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002bd4d) vded2_slider_bg_pane_g

0x69a8,	// (0x00022c0c) aid_postcard_touch_down_pane_ParamLimits

0x69a8,	// (0x00022c0c) aid_postcard_touch_down_pane

0x69b8,	// (0x00022c1c) aid_postcard_touch_up_pane_ParamLimits

0x69b8,	// (0x00022c1c) aid_postcard_touch_up_pane

0x2cd3,	// (0x0001ef37) main_blid2_pane

0x3154,	// (0x0001f3b8) popup_blid2_search_window

0xb77b,	// (0x000279df) blid2_gps_pane

0xb77b,	// (0x000279df) blid2_navig_pane

0xb77b,	// (0x000279df) blid2_search_pane

0xb77b,	// (0x000279df) blid2_tripm_pane

0x92cc,	// (0x00025530) blid2_search_pane_g1_ParamLimits

0x92cc,	// (0x00025530) blid2_search_pane_g1

0x92dc,	// (0x00025540) blid2_search_pane_t1_ParamLimits

0x92dc,	// (0x00025540) blid2_search_pane_t1

0x92ee,	// (0x00025552) aid_size_cell_blid2_gps_ParamLimits

0x92ee,	// (0x00025552) aid_size_cell_blid2_gps

0x92fe,	// (0x00025562) blid2_gps_pane_g1_ParamLimits

0x92fe,	// (0x00025562) blid2_gps_pane_g1

0x930a,	// (0x0002556e) grid_blid2_satellite_pane_ParamLimits

0x930a,	// (0x0002556e) grid_blid2_satellite_pane

0x931a,	// (0x0002557e) blid2_navig_pane_g1_ParamLimits

0x931a,	// (0x0002557e) blid2_navig_pane_g1

0x9326,	// (0x0002558a) blid2_navig_pane_t1_ParamLimits

0x9326,	// (0x0002558a) blid2_navig_pane_t1

0x9338,	// (0x0002559c) blid2_navig_pane_t2_ParamLimits

0x9338,	// (0x0002559c) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002bd54) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002bd54) blid2_navig_pane_t

0x934a,	// (0x000255ae) blid2_navig_ring_pane_ParamLimits

0x934a,	// (0x000255ae) blid2_navig_ring_pane

0x935a,	// (0x000255be) blid2_speed_pane_ParamLimits

0x935a,	// (0x000255be) blid2_speed_pane

0x9366,	// (0x000255ca) blid2_tripm_pane_g1_ParamLimits

0x9366,	// (0x000255ca) blid2_tripm_pane_g1

0x9376,	// (0x000255da) blid2_tripm_pane_g2_ParamLimits

0x9376,	// (0x000255da) blid2_tripm_pane_g2

0x9382,	// (0x000255e6) blid2_tripm_pane_g3_ParamLimits

0x9382,	// (0x000255e6) blid2_tripm_pane_g3

0x938e,	// (0x000255f2) blid2_tripm_pane_g4_ParamLimits

0x938e,	// (0x000255f2) blid2_tripm_pane_g4

0x939a,	// (0x000255fe) blid2_tripm_pane_g5_ParamLimits

0x939a,	// (0x000255fe) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002bd59) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002bd59) blid2_tripm_pane_g

0x93b6,	// (0x0002561a) blid2_tripm_pane_t1_ParamLimits

0x93b6,	// (0x0002561a) blid2_tripm_pane_t1

0x93ca,	// (0x0002562e) blid2_tripm_pane_t2_ParamLimits

0x93ca,	// (0x0002562e) blid2_tripm_pane_t2

0x93dc,	// (0x00025640) blid2_tripm_pane_t3_ParamLimits

0x93dc,	// (0x00025640) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002bd66) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002bd66) blid2_tripm_pane_t

0x940e,	// (0x00025672) cell_blid2_satellite_pane_ParamLimits

0x940e,	// (0x00025672) cell_blid2_satellite_pane

0x9428,	// (0x0002568c) cell_blid2_satellite_pane_g1

0x04aa,	// (0x0001c70e) cell_blid2_satellite_pane_t1

0xe381,	// (0x0002a5e5) blid2_speed_pane_g1

0x04b8,	// (0x0001c71c) blid2_speed_pane_t1

0x04c6,	// (0x0001c72a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002bd6f) blid2_speed_pane_t

0xe381,	// (0x0002a5e5) blid2_navig_ring_pane_g1

0x9431,	// (0x00025695) blid2_navig_ring_pane_g2

0x9439,	// (0x0002569d) blid2_navig_ring_pane_g3

0x9441,	// (0x000256a5) blid2_navig_ring_pane_g4

0x9449,	// (0x000256ad) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002bd74) blid2_navig_ring_pane_g

0xb77b,	// (0x000279df) bg_popup_window_pane_cp011

0x04d4,	// (0x0001c738) popup_blid2_search_window_g1

0x04dc,	// (0x0001c740) popup_blid2_search_window_t1

0x04ea,	// (0x0001c74e) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002bd7f) popup_blid2_search_window_t

0xc1d3,	// (0x00028437) main_browser_pane_g1

0xbec6,	// (0x0002812a) main_browser_pane_ParamLimits

0x312b,	// (0x0001f38f) bg_button_pane_cp011_ParamLimits

0x3ff9,	// (0x0002025d) cell_vitu2_function_pane_g1_ParamLimits

0xdf70,	// (0x0002a1d4) bg_popup_sub_pane_cp22_ParamLimits

0x8dd8,	// (0x0002503c) input_focus_pane_cp08_ParamLimits

0x8def,	// (0x00025053) popup_vitu2_query_button_pane_ParamLimits

0x8def,	// (0x00025053) popup_vitu2_query_button_pane

0x8e00,	// (0x00025064) popup_vitu2_query_input_button_pane

0x0052,	// (0x0001c2b6) popup_vitu2_query_window_g1_ParamLimits

0x8e0a,	// (0x0002506e) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002bc80) popup_vitu2_query_window_g_ParamLimits

0xb77b,	// (0x000279df) bg_button_pane_cp026

0x9451,	// (0x000256b5) popup_vitu2_query_input_button_pane_g1

0xb77b,	// (0x000279df) bg_button_pane_cp025

0x04f8,	// (0x0001c75c) popup_vitu2_query_button_pane_t1

0x76c6,	// (0x0002392a) main_mp3_pane_t6

0x76d6,	// (0x0002393a) popup_slider_window_cp01

0x3bb1,	// (0x0001fe15) cam4_battery_pane

0x3c91,	// (0x0001fef5) cam4_battery_pane_cp02

0x4189,	// (0x000203ed) cam4_battery_pane_cp01

0x4189,	// (0x000203ed) cam4_battery_pane_cp03

0x0506,	// (0x0001c76a) cam4_battery_pane_g1

0xe381,	// (0x0002a5e5) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002bd84) cam4_battery_pane_g

0xe24d,	// (0x0002a4b1) popup_blid_sat_info2_window_t11

0xc948,	// (0x00028bac) aid_size_touch_mv_arrow_left_ParamLimits

0xc971,	// (0x00028bd5) aid_size_touch_mv_arrow_right_ParamLimits

0xc9cf,	// (0x00028c33) navi_pane_g1_ParamLimits

0xc9db,	// (0x00028c3f) navi_pane_g2_ParamLimits

0xca09,	// (0x00028c6d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002b649) navi_pane_g_ParamLimits

0x642d,	// (0x00022691) navi_pane_mv_t1_ParamLimits

0x8144,	// (0x000243a8) grid_imed_effect_pane_ParamLimits

0x4ee4,	// (0x00021148) aid_placing_vt_slider_lsc

0xc122,	// (0x00028386) aid_placing_vt_slider_prt

0xbddd,	// (0x00028041) bg_tb_trans_pane_cp01_ParamLimits

0xe504,	// (0x0002a768) popup_image_details_window_g1_ParamLimits

0xe517,	// (0x0002a77b) popup_image_details_window_g2_ParamLimits

0xe52c,	// (0x0002a790) popup_image_details_window_g3_ParamLimits

0xe52c,	// (0x0002a790) popup_image_details_window_g3

0xf718,	// (0x0002b97c) popup_image_details_window_g_ParamLimits

0xe540,	// (0x0002a7a4) popup_image_details_window_t1_ParamLimits

0xe552,	// (0x0002a7b6) popup_image_details_window_t2_ParamLimits

0xe56b,	// (0x0002a7cf) popup_image_details_window_t3_ParamLimits

0xe57f,	// (0x0002a7e3) popup_image_details_window_t4_ParamLimits

0xe59a,	// (0x0002a7fe) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002b983) popup_image_details_window_t_ParamLimits

0x915f,	// (0x000253c3) cl_header_name_pane_ParamLimits

0x915f,	// (0x000253c3) cl_header_name_pane

0x9459,	// (0x000256bd) cl_header_name_pane_t1_ParamLimits

0x9459,	// (0x000256bd) cl_header_name_pane_t1

0x9470,	// (0x000256d4) cl_header_name_pane_t2_ParamLimits

0x9470,	// (0x000256d4) cl_header_name_pane_t2

0x949a,	// (0x000256fe) cl_header_name_pane_t3_ParamLimits

0x949a,	// (0x000256fe) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002bd89) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002bd89) cl_header_name_pane_t

0xca98,	// (0x00028cfc) navi_pane_mv_g2_ParamLimits

0xedd6,	// (0x0002b03a) field_vitu2_entry_pane_g1_ParamLimits

0xede2,	// (0x0002b046) field_vitu2_entry_pane_g2_ParamLimits

0xedee,	// (0x0002b052) field_vitu2_entry_pane_g3_ParamLimits

0xedee,	// (0x0002b052) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002bb7f) field_vitu2_entry_pane_g_ParamLimits

0x3ec5,	// (0x00020129) cell_vitu2_itu_pane_g1_ParamLimits

0x3ed7,	// (0x0002013b) cell_vitu2_itu_pane_g2_ParamLimits

0x3ed7,	// (0x0002013b) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002bb8b) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002bb8b) cell_vitu2_itu_pane_g

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp05_ParamLimits

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp05

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp03

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp04

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp10_ParamLimits

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp10

0x9101,	// (0x00025365) bg_vkb2_func_pane_cp08

0x90e7,	// (0x0002534b) bg_vkb2_func_pane_cp06

0x90f5,	// (0x00025359) bg_vkb2_func_pane_cp07

0x03fe,	// (0x0001c662) bg_vkb2_func_pane_cp11_ParamLimits

0x03fe,	// (0x0001c662) bg_vkb2_func_pane_cp11

0x0413,	// (0x0001c677) bg_vkb2_func_pane_cp12_ParamLimits

0x0413,	// (0x0001c677) bg_vkb2_func_pane_cp12

0xb77b,	// (0x000279df) bg_vkb2_func_pane_cp09

0xee2b,	// (0x0002b08f) bg_vkb2_func_pane_g1

0xc2e4,	// (0x00028548) bg_vkb2_func_pane_g2

0xee33,	// (0x0002b097) bg_vkb2_func_pane_g3

0xee3b,	// (0x0002b09f) bg_vkb2_func_pane_g4

0xf0c2,	// (0x0002b326) bg_vkb2_func_pane_g5

0xee53,	// (0x0002b0b7) bg_vkb2_func_pane_g6

0xee5b,	// (0x0002b0bf) bg_vkb2_func_pane_g7

0xee4b,	// (0x0002b0af) bg_vkb2_func_pane_g8

0xc2c4,	// (0x00028528) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002bd90) bg_vkb2_func_pane_g

0x93a8,	// (0x0002560c) blid2_tripm_pane_g6_ParamLimits

0x93a8,	// (0x0002560c) blid2_tripm_pane_g6

0xec78,	// (0x0002aedc) mp4_progress_pane_g1

0x9402,	// (0x00025666) blid2_tripm_values_pane_ParamLimits

0x9402,	// (0x00025666) blid2_tripm_values_pane

0x94bf,	// (0x00025723) blid2_tripm_values_pane_t1

0x94cd,	// (0x00025731) blid2_tripm_values_pane_t2

0x94db,	// (0x0002573f) blid2_tripm_values_pane_t3

0x94e9,	// (0x0002574d) blid2_tripm_values_pane_t4

0x94f7,	// (0x0002575b) blid2_tripm_values_pane_t5

0x9505,	// (0x00025769) blid2_tripm_values_pane_t6

0x9513,	// (0x00025777) blid2_tripm_values_pane_t7

0x9521,	// (0x00025785) blid2_tripm_values_pane_t8

0x952f,	// (0x00025793) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002bda3) blid2_tripm_values_pane_t

0x4f24,	// (0x00021188) call_video_pane_t1_ParamLimits

0x4f45,	// (0x000211a9) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002b4d2) call_video_pane_t_ParamLimits

0x6958,	// (0x00022bbc) msg_header_pane_g1_ParamLimits

0xcc7a,	// (0x00028ede) msg_header_pane_g2_ParamLimits

0xcc7a,	// (0x00028ede) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002b6ec) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002b6ec) msg_header_pane_g

0xbec6,	// (0x0002812a) main_clock2_pane_ParamLimits

0x7f73,	// (0x000241d7) grid_clock2_toolbar_pane_ParamLimits

0x7f73,	// (0x000241d7) grid_clock2_toolbar_pane

0x7f73,	// (0x000241d7) listscroll_clock2_pane_ParamLimits

0x7f73,	// (0x000241d7) listscroll_clock2_pane

0x8019,	// (0x0002427d) main_clock2_pane_t3_ParamLimits

0x8019,	// (0x0002427d) main_clock2_pane_t3

0x802b,	// (0x0002428f) main_clock2_pane_t4_ParamLimits

0x802b,	// (0x0002428f) main_clock2_pane_t4

0x0510,	// (0x0001c774) cell_clock2_toolbar_pane

0x0518,	// (0x0001c77c) cell_clock2_toolbar_pane_cp01

0x0518,	// (0x0001c77c) cell_clock2_toolbar_pane_cp02

0x0520,	// (0x0001c784) cell_clock2_toolbar_pane_cp03

0x0528,	// (0x0001c78c) list_clock2_pane

0xc8a4,	// (0x00028b08) scroll_pane_cp10

0x0530,	// (0x0001c794) list_single_clock2_pane_ParamLimits

0x0530,	// (0x0001c794) list_single_clock2_pane

0xc08b,	// (0x000282ef) list_highlight_pane_cp08

0x053d,	// (0x0001c7a1) list_single_clock2_pane_t1

0x054b,	// (0x0001c7af) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002bdb6) list_single_clock2_pane_t

0xb77b,	// (0x000279df) bg_button_pane_cp10

0x0559,	// (0x0001c7bd) cell_clock2_toolbar_pane_g1

0x30c6,	// (0x0001f32a) aid_main_viewer_pane_g1_ParamLimits

0x30c6,	// (0x0001f32a) aid_main_viewer_pane_g1

0x30d2,	// (0x0001f336) aid_main_viewer_pane_g2_ParamLimits

0x30d2,	// (0x0001f336) aid_main_viewer_pane_g2

0x6964,	// (0x00022bc8) aid_main_viewer_pane_g3_ParamLimits

0x6964,	// (0x00022bc8) aid_main_viewer_pane_g3

0x6975,	// (0x00022bd9) aid_main_viewer_pane_g4_ParamLimits

0x6975,	// (0x00022bd9) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002b6fd) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002b6fd) aid_main_viewer_pane_g

0x311e,	// (0x0001f382) main_calc_pane_ParamLimits

0x3139,	// (0x0001f39d) main_dialer2_pane_ParamLimits

0x2cd3,	// (0x0001ef37) main_cam6_pane

0x2cd3,	// (0x0001ef37) main_vid6_pane

0x7f7f,	// (0x000241e3) listscroll_gen_pane_cp06_ParamLimits

0x7f7f,	// (0x000241e3) listscroll_gen_pane_cp06

0x803d,	// (0x000242a1) main_clock2_pane_t5_ParamLimits

0x803d,	// (0x000242a1) main_clock2_pane_t5

0x8086,	// (0x000242ea) aid_call2_pane_cp10_ParamLimits

0x8098,	// (0x000242fc) aid_call_pane_cp10_ParamLimits

0xc93c,	// (0x00028ba0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc93c,	// (0x00028ba0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x80aa,	// (0x0002430e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x80aa,	// (0x0002430e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc93c,	// (0x00028ba0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002ba38) popup_clock_analogue_window_cp10_g_ParamLimits

0x80bc,	// (0x00024320) popup_clock_analogue_window_cp10_t1_ParamLimits

0x84a8,	// (0x0002470c) cell_dialer2_keypad_pane_g2_ParamLimits

0x84a8,	// (0x0002470c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002bb1e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002bb1e) cell_dialer2_keypad_pane_g

0x84c4,	// (0x00024728) cell_dialer2_keypad_pane_t1

0x8902,	// (0x00024b66) main_cset_text2_pane_ParamLimits

0x8902,	// (0x00024b66) main_cset_text2_pane

0x023e,	// (0x0001c4a2) area_vitu2_query_pane_g1_ParamLimits

0x9086,	// (0x000252ea) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002bcd3) area_vitu2_query_pane_g_ParamLimits

0x02c2,	// (0x0001c526) area_vitu2_query_pane_t7_ParamLimits

0x02c2,	// (0x0001c526) area_vitu2_query_pane_t7

0x90e7,	// (0x0002534b) bg_button_pane_cp018_ParamLimits

0x90f5,	// (0x00025359) bg_button_pane_cp021_ParamLimits

0x9101,	// (0x00025365) bg_button_pane_cp022_ParamLimits

0x9101,	// (0x00025365) bg_vkb2_func_pane_cp08_ParamLimits

0x90e7,	// (0x0002534b) bg_vkb2_func_pane_cp06_ParamLimits

0x90f5,	// (0x00025359) bg_vkb2_func_pane_cp07_ParamLimits

0x9112,	// (0x00025376) input_focus_pane_cp09_ParamLimits

0x422e,	// (0x00020492) cam6_autofocus_pane_ParamLimits

0x422e,	// (0x00020492) cam6_autofocus_pane

0x4250,	// (0x000204b4) cam6_image_uncrop_pane_ParamLimits

0x4250,	// (0x000204b4) cam6_image_uncrop_pane

0x427d,	// (0x000204e1) cam6_indi_pane_ParamLimits

0x427d,	// (0x000204e1) cam6_indi_pane

0x4297,	// (0x000204fb) cam6_mode_pane_ParamLimits

0x4297,	// (0x000204fb) cam6_mode_pane

0x42ab,	// (0x0002050f) cam6_timer_pane_ParamLimits

0x42ab,	// (0x0002050f) cam6_timer_pane

0x42b7,	// (0x0002051b) cam6_zoom_pane_ParamLimits

0x42b7,	// (0x0002051b) cam6_zoom_pane

0x953d,	// (0x000257a1) cam6_mode_pane_g1_ParamLimits

0x953d,	// (0x000257a1) cam6_mode_pane_g1

0x9549,	// (0x000257ad) cam6_mode_pane_g2_ParamLimits

0x9549,	// (0x000257ad) cam6_mode_pane_g2

0x9555,	// (0x000257b9) cam6_mode_pane_g3_ParamLimits

0x9555,	// (0x000257b9) cam6_mode_pane_g3

0x9561,	// (0x000257c5) cam6_mode_pane_g4_ParamLimits

0x9561,	// (0x000257c5) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002bdbb) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002bdbb) cam6_mode_pane_g

0xeed8,	// (0x0002b13c) bg_tb_trans_pane_cp08_ParamLimits

0xeed8,	// (0x0002b13c) bg_tb_trans_pane_cp08

0x056f,	// (0x0001c7d3) cam6_battery_pane_ParamLimits

0x056f,	// (0x0001c7d3) cam6_battery_pane

0x0585,	// (0x0001c7e9) cam6_indi_pane_g1_ParamLimits

0x0585,	// (0x0001c7e9) cam6_indi_pane_g1

0x0597,	// (0x0001c7fb) cam6_indi_pane_g2_ParamLimits

0x0597,	// (0x0001c7fb) cam6_indi_pane_g2

0x05a9,	// (0x0001c80d) cam6_indi_pane_g3_ParamLimits

0x05a9,	// (0x0001c80d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0002bdc4) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0002bdc4) cam6_indi_pane_g

0x05bb,	// (0x0001c81f) cam6_indi_pane_t1_ParamLimits

0x05bb,	// (0x0001c81f) cam6_indi_pane_t1

0x8603,	// (0x00024867) cam6_autofocus_pane_g1

0x85fb,	// (0x0002485f) cam6_autofocus_pane_g2

0x8613,	// (0x00024877) cam6_autofocus_pane_g3

0x860b,	// (0x0002486f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0002bdcb) cam6_autofocus_pane_g

0x05e1,	// (0x0001c845) cam6_timer_pane_g1

0x05e9,	// (0x0001c84d) cam6_timer_pane_t1

0x05f7,	// (0x0001c85b) cam6_zoom_cont_pane

0x05ff,	// (0x0001c863) cam6_zoom_pane_g1

0x0607,	// (0x0001c86b) cam6_zoom_pane_g2

0x956d,	// (0x000257d1) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0002bdd4) cam6_zoom_pane_g

0xe381,	// (0x0002a5e5) cam6_battery_pane_g1

0xe381,	// (0x0002a5e5) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002b940) cam6_battery_pane_g

0x060f,	// (0x0001c873) cam6_zoom_cont_pane_g1

0x0618,	// (0x0001c87c) cam6_zoom_cont_pane_g2

0x0621,	// (0x0001c885) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0002bddb) cam6_zoom_cont_pane_g

0x958a,	// (0x000257ee) cam6_mode_pane_cp_ParamLimits

0x958a,	// (0x000257ee) cam6_mode_pane_cp

0x959e,	// (0x00025802) cam6_zoom_pane_cp_ParamLimits

0x959e,	// (0x00025802) cam6_zoom_pane_cp

0x95b6,	// (0x0002581a) vid6_image_uncrop_cif_pane_ParamLimits

0x95b6,	// (0x0002581a) vid6_image_uncrop_cif_pane

0x95e2,	// (0x00025846) vid6_image_uncrop_nhd_pane_ParamLimits

0x95e2,	// (0x00025846) vid6_image_uncrop_nhd_pane

0x95ff,	// (0x00025863) vid6_image_uncrop_vga_pane_ParamLimits

0x95ff,	// (0x00025863) vid6_image_uncrop_vga_pane

0x961e,	// (0x00025882) vid6_image_uncrop_wvga_pane_ParamLimits

0x961e,	// (0x00025882) vid6_image_uncrop_wvga_pane

0x963b,	// (0x0002589f) vid6_indi_pane_ParamLimits

0x963b,	// (0x0002589f) vid6_indi_pane

0xeed8,	// (0x0002b13c) bg_tb_trans_pane_cp09_ParamLimits

0xeed8,	// (0x0002b13c) bg_tb_trans_pane_cp09

0x0639,	// (0x0001c89d) cam6_battery_pane_cp_ParamLimits

0x0639,	// (0x0001c89d) cam6_battery_pane_cp

0x0645,	// (0x0001c8a9) vid6_indi_pane_g1_ParamLimits

0x0645,	// (0x0001c8a9) vid6_indi_pane_g1

0x0657,	// (0x0001c8bb) vid6_indi_pane_g2_ParamLimits

0x0657,	// (0x0001c8bb) vid6_indi_pane_g2

0x0669,	// (0x0001c8cd) vid6_indi_pane_g3_ParamLimits

0x0669,	// (0x0001c8cd) vid6_indi_pane_g3

0x067e,	// (0x0001c8e2) vid6_indi_pane_g4_ParamLimits

0x067e,	// (0x0001c8e2) vid6_indi_pane_g4

0x0693,	// (0x0001c8f7) vid6_indi_pane_g5_ParamLimits

0x0693,	// (0x0001c8f7) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0002bde2) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0002bde2) vid6_indi_pane_g

0x06ad,	// (0x0001c911) vid6_indi_pane_t1_ParamLimits

0x06ad,	// (0x0001c911) vid6_indi_pane_t1

0x06c3,	// (0x0001c927) vid6_indi_pane_t2_ParamLimits

0x06c3,	// (0x0001c927) vid6_indi_pane_t2

0x06eb,	// (0x0001c94f) vid6_indi_pane_t3_ParamLimits

0x06eb,	// (0x0001c94f) vid6_indi_pane_t3

0x0713,	// (0x0001c977) vid6_indi_pane_t4_ParamLimits

0x0713,	// (0x0001c977) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0002bded) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0002bded) vid6_indi_pane_t

0x0737,	// (0x0001c99b) wait_bar_pane_cp08

0x9660,	// (0x000258c4) main_cset_text2_pane_t1_ParamLimits

0x9660,	// (0x000258c4) main_cset_text2_pane_t1

0x9575,	// (0x000257d9) listscroll_gen_pane_cp06_t1_ParamLimits

0x9575,	// (0x000257d9) listscroll_gen_pane_cp06_t1

0x2cd3,	// (0x0001ef37) main_cam6_set_pane

0x3ba3,	// (0x0001fe07) bg_tb_trans_pane_cp06_ParamLimits

0x3bb9,	// (0x0001fe1d) cam4_indicators_pane_g1_ParamLimits

0x3bca,	// (0x0001fe2e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002bb5b) cam4_indicators_pane_g_ParamLimits

0x3be8,	// (0x0001fe4c) cam4_indicators_pane_t1_ParamLimits

0x312b,	// (0x0001f38f) bg_tb_trans_pane_cp07_ParamLimits

0x3c9b,	// (0x0001feff) vid4_indicators_pane_g1_ParamLimits

0x3caf,	// (0x0001ff13) vid4_indicators_pane_g2_ParamLimits

0x3cc3,	// (0x0001ff27) vid4_indicators_pane_g3_ParamLimits

0x3cd4,	// (0x0001ff38) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002bb6d) vid4_indicators_pane_g_ParamLimits

0x3cf2,	// (0x0001ff56) vid4_indicators_pane_t1_ParamLimits

0x4191,	// (0x000203f5) vid4_progress_pane_g1_ParamLimits

0x41a1,	// (0x00020405) vid4_progress_pane_g2_ParamLimits

0x41b1,	// (0x00020415) vid4_progress_pane_g3_ParamLimits

0x41c3,	// (0x00020427) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002bd1e) vid4_progress_pane_g_ParamLimits

0x41db,	// (0x0002043f) vid4_progress_pane_t1_ParamLimits

0x41f1,	// (0x00020455) vid4_progress_pane_t2_ParamLimits

0x4206,	// (0x0002046a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002bd29) vid4_progress_pane_t_ParamLimits

0x421b,	// (0x0002047f) wait_bar_pane_cp07_ParamLimits

0x9693,	// (0x000258f7) main_cam6_set_pane_g2_ParamLimits

0x9693,	// (0x000258f7) main_cam6_set_pane_g2

0x969f,	// (0x00025903) main_cset6_listscroll_pane_ParamLimits

0x969f,	// (0x00025903) main_cset6_listscroll_pane

0x96ca,	// (0x0002592e) main_cset6_slider_pane_ParamLimits

0x96ca,	// (0x0002592e) main_cset6_slider_pane

0x96d6,	// (0x0002593a) main_cset6_text2_pane_ParamLimits

0x96d6,	// (0x0002593a) main_cset6_text2_pane

0x0746,	// (0x0001c9aa) main_cset6_text_pane

0x074e,	// (0x0001c9b2) main_cset_list_pane_copy1_ParamLimits

0x074e,	// (0x0001c9b2) main_cset_list_pane_copy1

0x075e,	// (0x0001c9c2) scroll_pane_cp028_copy1

0x96e9,	// (0x0002594d) cset_list_set_pane_copy1

0x96fc,	// (0x00025960) aid_position_infowindow_above_copy1

0x9704,	// (0x00025968) aid_position_infowindow_below_copy1

0x970c,	// (0x00025970) cset_list_set_pane_g1_copy1

0xf052,	// (0x0002b2b6) cset_list_set_pane_g3_copy1_ParamLimits

0xf052,	// (0x0002b2b6) cset_list_set_pane_g3_copy1

0xf061,	// (0x0002b2c5) cset_list_set_pane_t1_copy1_ParamLimits

0xf061,	// (0x0002b2c5) cset_list_set_pane_t1_copy1

0xbddd,	// (0x00028041) list_highlight_pane_cp021_copy1_ParamLimits

0xbddd,	// (0x00028041) list_highlight_pane_cp021_copy1

0x0767,	// (0x0001c9cb) cset6_slider_pane_ParamLimits

0x0767,	// (0x0001c9cb) cset6_slider_pane

0x0793,	// (0x0001c9f7) main_cset6_slider_pane_g1_ParamLimits

0x0793,	// (0x0001c9f7) main_cset6_slider_pane_g1

0x9714,	// (0x00025978) main_cset6_slider_pane_g2_ParamLimits

0x9714,	// (0x00025978) main_cset6_slider_pane_g2

0x07bb,	// (0x0001ca1f) main_cset6_slider_pane_g3_ParamLimits

0x07bb,	// (0x0001ca1f) main_cset6_slider_pane_g3

0x973c,	// (0x000259a0) main_cset6_slider_pane_g4_ParamLimits

0x973c,	// (0x000259a0) main_cset6_slider_pane_g4

0x9748,	// (0x000259ac) main_cset6_slider_pane_g5_ParamLimits

0x9748,	// (0x000259ac) main_cset6_slider_pane_g5

0xef82,	// (0x0002b1e6) main_cset6_slider_pane_g7_ParamLimits

0xef82,	// (0x0002b1e6) main_cset6_slider_pane_g7

0xef8e,	// (0x0002b1f2) main_cset6_slider_pane_g8_ParamLimits

0xef8e,	// (0x0002b1f2) main_cset6_slider_pane_g8

0x9756,	// (0x000259ba) main_cset6_slider_pane_g9_ParamLimits

0x9756,	// (0x000259ba) main_cset6_slider_pane_g9

0x9762,	// (0x000259c6) main_cset6_slider_pane_g10_ParamLimits

0x9762,	// (0x000259c6) main_cset6_slider_pane_g10

0x976e,	// (0x000259d2) main_cset6_slider_pane_g11_ParamLimits

0x976e,	// (0x000259d2) main_cset6_slider_pane_g11

0x977a,	// (0x000259de) main_cset6_slider_pane_g12_ParamLimits

0x977a,	// (0x000259de) main_cset6_slider_pane_g12

0x9786,	// (0x000259ea) main_cset6_slider_pane_g13_ParamLimits

0x9786,	// (0x000259ea) main_cset6_slider_pane_g13

0x9792,	// (0x000259f6) main_cset6_slider_pane_g14_ParamLimits

0x9792,	// (0x000259f6) main_cset6_slider_pane_g14

0x979e,	// (0x00025a02) main_cset6_slider_pane_g15_ParamLimits

0x979e,	// (0x00025a02) main_cset6_slider_pane_g15

0x97b6,	// (0x00025a1a) main_cset6_slider_pane_g16_ParamLimits

0x97b6,	// (0x00025a1a) main_cset6_slider_pane_g16

0x97c4,	// (0x00025a28) main_cset6_slider_pane_g17_ParamLimits

0x97c4,	// (0x00025a28) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0002bdf6) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0002bdf6) main_cset6_slider_pane_g

0x07c7,	// (0x0001ca2b) main_cset6_slider_pane_t1_ParamLimits

0x07c7,	// (0x0001ca2b) main_cset6_slider_pane_t1

0x97ea,	// (0x00025a4e) main_cset6_slider_pane_t2_ParamLimits

0x97ea,	// (0x00025a4e) main_cset6_slider_pane_t2

0x9815,	// (0x00025a79) main_cset6_slider_pane_t3_ParamLimits

0x9815,	// (0x00025a79) main_cset6_slider_pane_t3

0x9840,	// (0x00025aa4) main_cset6_slider_pane_t4_ParamLimits

0x9840,	// (0x00025aa4) main_cset6_slider_pane_t4

0x986b,	// (0x00025acf) main_cset6_slider_pane_t5_ParamLimits

0x986b,	// (0x00025acf) main_cset6_slider_pane_t5

0x0808,	// (0x0001ca6c) main_cset6_slider_pane_t7_ParamLimits

0x0808,	// (0x0001ca6c) main_cset6_slider_pane_t7

0x9898,	// (0x00025afc) main_cset6_slider_pane_t8_ParamLimits

0x9898,	// (0x00025afc) main_cset6_slider_pane_t8

0x98bc,	// (0x00025b20) main_cset6_slider_pane_t9_ParamLimits

0x98bc,	// (0x00025b20) main_cset6_slider_pane_t9

0x98e0,	// (0x00025b44) main_cset6_slider_pane_t10_ParamLimits

0x98e0,	// (0x00025b44) main_cset6_slider_pane_t10

0x9904,	// (0x00025b68) main_cset6_slider_pane_t11_ParamLimits

0x9904,	// (0x00025b68) main_cset6_slider_pane_t11

0x083e,	// (0x0001caa2) main_cset6_slider_pane_t14_ParamLimits

0x083e,	// (0x0001caa2) main_cset6_slider_pane_t14

0x0877,	// (0x0001cadb) main_cset6_slider_pane_t15_ParamLimits

0x0877,	// (0x0001cadb) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0002be1b) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0002be1b) main_cset6_slider_pane_t

0xf089,	// (0x0002b2ed) cset_slider_pane_g1_copy1

0xf092,	// (0x0002b2f6) cset_slider_pane_g2_copy1

0xf09b,	// (0x0002b2ff) cset_slider_pane_g3_copy1

0xb77b,	// (0x000279df) bg_popup_sub_pane_cp011_copy1

0x08b0,	// (0x0001cb14) main_cset_text_pane_g1_copy1

0x0066,	// (0x0001c2ca) main_cset_text_pane_t1_copy1

0x0074,	// (0x0001c2d8) main_cset_text_pane_t2_copy1

0x0082,	// (0x0001c2e6) main_cset_text_pane_t3_copy1

0x0090,	// (0x0001c2f4) main_cset_text_pane_t4_copy1

0x009e,	// (0x0001c302) main_cset_text_pane_t5_copy1

0x08b8,	// (0x0001cb1c) main_cset_text_pane_t6_copy1

0x08c6,	// (0x0001cb2a) main_cset_text_pane_t7_copy1

0x99f9,	// (0x00025c5d) main_cset_text2_pane_t1_copy1

0x312b,	// (0x0001f38f) main_ncimui_pane

0x318a,	// (0x0001f3ee) popup_query_ncimui_window_ParamLimits

0x318a,	// (0x0001f3ee) popup_query_ncimui_window

0xe649,	// (0x0002a8ad) field_cale_ev2_pane_g4_ParamLimits

0xe649,	// (0x0002a8ad) field_cale_ev2_pane_g4

0x8448,	// (0x000246ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8448,	// (0x000246ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002baf9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002baf9) cell_video_dialer_keypad_pane_g

0x8460,	// (0x000246c4) cell_video_dialer_keypad_pane_t1

0xb77b,	// (0x000279df) bg_popup_window_pane_cp012

0xc771,	// (0x000289d5) heading_pane_cp06

0x08f2,	// (0x0001cb56) ncim_query_content_pane

0xb77b,	// (0x000279df) bg_popup_heading_pane_cp01

0x08fa,	// (0x0001cb5e) ncim_heading_pane_t1

0x0908,	// (0x0001cb6c) ncim_indicator_popup_pane

0x091a,	// (0x0001cb7e) ncim_query_button_pane

0x092e,	// (0x0001cb92) ncim_query_content_pane_t1

0x0940,	// (0x0001cba4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0002be5f) ncim_query_content_pane_t

0x097a,	// (0x0001cbde) ncim_query_list_pane

0x098c,	// (0x0001cbf0) ncim_query_popup_pane

0x0908,	// (0x0001cb6c) ncim_indicator_popup_pane_ParamLimits

0x9b4c,	// (0x00025db0) ncim_query_content_pane_g1_ParamLimits

0x9b4c,	// (0x00025db0) ncim_query_content_pane_g1

0x092e,	// (0x0001cb92) ncim_query_content_pane_t1_ParamLimits

0x0940,	// (0x0001cba4) ncim_query_content_pane_t2_ParamLimits

0x9b58,	// (0x00025dbc) ncim_query_content_pane_t3_ParamLimits

0x9b58,	// (0x00025dbc) ncim_query_content_pane_t3

0x9b75,	// (0x00025dd9) ncim_query_content_pane_t4_ParamLimits

0x9b75,	// (0x00025dd9) ncim_query_content_pane_t4

0x9b92,	// (0x00025df6) ncim_query_content_pane_t5_ParamLimits

0x9b92,	// (0x00025df6) ncim_query_content_pane_t5

0x0952,	// (0x0001cbb6) ncim_query_content_pane_t6_ParamLimits

0x0952,	// (0x0001cbb6) ncim_query_content_pane_t6

0xfbfb,	// (0x0002be5f) ncim_query_content_pane_t_ParamLimits

0x097a,	// (0x0001cbde) ncim_query_list_pane_ParamLimits

0x098c,	// (0x0001cbf0) ncim_query_popup_pane_ParamLimits

0x09a0,	// (0x0001cc04) wait_bar_pane_cp04

0xb77b,	// (0x000279df) input_focus_pane_cp011

0x09a8,	// (0x0001cc0c) ncim_query_popup_pane_t1

0x09b6,	// (0x0001cc1a) ncim_list_query_list_pane_ParamLimits

0x09b6,	// (0x0001cc1a) ncim_list_query_list_pane

0xb77b,	// (0x000279df) bg_button_pane_cp027

0x09c3,	// (0x0001cc27) ncim_query_button_pane_g1

0xb77b,	// (0x000279df) list_highlight_pane_cp012

0x09cd,	// (0x0001cc31) ncim_list_query_list_pane_g1

0x09d5,	// (0x0001cc39) ncim_list_query_list_pane_t1

0x3bd9,	// (0x0001fe3d) cam4_indicators_pane_g3_ParamLimits

0x3bd9,	// (0x0001fe3d) cam4_indicators_pane_g3

0x3ce0,	// (0x0001ff44) vid4_indicators_pane_g5_ParamLimits

0x3ce0,	// (0x0001ff44) vid4_indicators_pane_g5

0x41cf,	// (0x00020433) vid4_progress_pane_g5_ParamLimits

0x41cf,	// (0x00020433) vid4_progress_pane_g5

0x9a38,	// (0x00025c9c) main_ncimui_pane_g1

0x9aa0,	// (0x00025d04) ncimui_group_query_pane_ParamLimits

0x9aa0,	// (0x00025d04) ncimui_group_query_pane

0x9ae8,	// (0x00025d4c) ncimui_list_pane_ParamLimits

0x9ae8,	// (0x00025d4c) ncimui_list_pane

0x9b0f,	// (0x00025d73) ncimui_text_pane_ParamLimits

0x9b0f,	// (0x00025d73) ncimui_text_pane

0x9baf,	// (0x00025e13) ncimui_text_pane_t1_ParamLimits

0x9baf,	// (0x00025e13) ncimui_text_pane_t1

0x09e3,	// (0x0001cc47) ncimui_list_single_graphic_pane_ParamLimits

0x09e3,	// (0x0001cc47) ncimui_list_single_graphic_pane

0x9bce,	// (0x00025e32) ncimui_query_pane_ParamLimits

0x9bce,	// (0x00025e32) ncimui_query_pane

0xb77b,	// (0x000279df) list_highlight_pane_cp013

0x09f3,	// (0x0001cc57) ncim_list_query_list_pane_t1_copy1

0x09cd,	// (0x0001cc31) ncim_list_single_graphic_pane_g1

0x9be1,	// (0x00025e45) ncim_query_button_pane_cp01

0x9bed,	// (0x00025e51) ncim_query_entry_pane_ParamLimits

0x9bed,	// (0x00025e51) ncim_query_entry_pane

0x9c00,	// (0x00025e64) ncimui_query_pane_g1

0x9c0c,	// (0x00025e70) ncimui_query_pane_t1_ParamLimits

0x9c0c,	// (0x00025e70) ncimui_query_pane_t1

0xbddd,	// (0x00028041) input_focus_pane_cp012

0x0a01,	// (0x0001cc65) ncim_query_entry_pane_t1

0xbec6,	// (0x0002812a) main_im_pane_ParamLimits

0x312b,	// (0x0001f38f) main_mobtv_pane_ParamLimits

0x312b,	// (0x0001f38f) main_mobtv_pane

0x97d2,	// (0x00025a36) main_cset6_slider_pane_g18_ParamLimits

0x97d2,	// (0x00025a36) main_cset6_slider_pane_g18

0x97de,	// (0x00025a42) main_cset6_slider_pane_g19_ParamLimits

0x97de,	// (0x00025a42) main_cset6_slider_pane_g19

0xedee,	// (0x0002b052) bg_main_mobtv_pane_ParamLimits

0xedee,	// (0x0002b052) bg_main_mobtv_pane

0x9c25,	// (0x00025e89) main_mobtv_info_pane

0x9c30,	// (0x00025e94) main_mobtv_loading_pane_ParamLimits

0x9c30,	// (0x00025e94) main_mobtv_loading_pane

0x0a13,	// (0x0001cc77) main_mobtv_pg_channel_list_pane

0x0a1d,	// (0x0001cc81) main_mobtv_pg_hdr_pane

0x9c3d,	// (0x00025ea1) main_mobtv_programe_curr_pane_ParamLimits

0x9c3d,	// (0x00025ea1) main_mobtv_programe_curr_pane

0x9c4a,	// (0x00025eae) main_mobtv_programe_next_pane_ParamLimits

0x9c4a,	// (0x00025eae) main_mobtv_programe_next_pane

0x0a26,	// (0x0001cc8a) popup_mobtv_noti_window

0xe381,	// (0x0002a5e5) main_tv_pg_hdr_pane_g1

0x0a2e,	// (0x0001cc92) main_tv_pg_hdr_pane_g2

0x0a36,	// (0x0001cc9a) main_tv_pg_hdr_pane_g3

0x0a3e,	// (0x0001cca2) main_tv_pg_hdr_pane_g4

0x0a46,	// (0x0001ccaa) main_tv_pg_hdr_pane_g5

0x0a50,	// (0x0001ccb4) main_tv_pg_hdr_pane_g6

0x0a5a,	// (0x0001ccbe) main_tv_pg_hdr_pane_g7

0x0a64,	// (0x0001ccc8) main_tv_pg_hdr_pane_g8

0x0a6e,	// (0x0001ccd2) main_tv_pg_hdr_pane_g9

0x0a78,	// (0x0001ccdc) main_tv_pg_hdr_pane_g10

0x0a82,	// (0x0001cce6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0002be6c) main_tv_pg_hdr_pane_g

0x0a8c,	// (0x0001ccf0) main_tv_pg_hdr_pane_t1

0x0a9a,	// (0x0001ccfe) main_tv_pg_hdr_pane_t2

0x0aa8,	// (0x0001cd0c) main_tv_pg_hdr_pane_t3

0x0ab8,	// (0x0001cd1c) main_tv_pg_hdr_pane_t4

0x0ac8,	// (0x0001cd2c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0002be83) main_tv_pg_hdr_pane_t

0x0ad8,	// (0x0001cd3c) single_mobtv_pg_channel_pane_ParamLimits

0x0ad8,	// (0x0001cd3c) single_mobtv_pg_channel_pane

0x0aea,	// (0x0001cd4e) single_mobtv_pg_channel_table_pane

0x0af3,	// (0x0001cd57) single_mobtv_pg_channel_thumb_pane

0x0afc,	// (0x0001cd60) single_tv_pg_channel_pane_g1

0x0b05,	// (0x0001cd69) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0002be8e) single_tv_pg_channel_pane_g

0xe5e4,	// (0x0002a848) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe5e4,	// (0x0002a848) bg_single_mobtv_pg_channel_thumb_pane

0x0b0e,	// (0x0001cd72) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0b0e,	// (0x0001cd72) single_mobtv_pg_channel_thumb_pane_g1

0x0b1c,	// (0x0001cd80) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0b1c,	// (0x0001cd80) single_mobtv_pg_channel_thumb_pane_g2

0x0b28,	// (0x0001cd8c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0b28,	// (0x0001cd8c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0002be93) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0002be93) single_mobtv_pg_channel_thumb_pane_g

0x0b34,	// (0x0001cd98) single_mobtv_pg_channel_thumb_pane_t1

0x0b42,	// (0x0001cda6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0002be9a) single_mobtv_pg_channel_thumb_pane_t

0xe381,	// (0x0002a5e5) bg_single_mobtv_pg_channel_table_pane_g1

0xe381,	// (0x0002a5e5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002b940) bg_single_mobtv_pg_channel_table_pane_g

0x0b50,	// (0x0001cdb4) single_mobtv_pg_channel_table_pane_t1

0x0b5e,	// (0x0001cdc2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0002be9f) single_mobtv_pg_channel_table_pane_t

0x9c5f,	// (0x00025ec3) main_mobtv_info_pane_g1_ParamLimits

0x9c5f,	// (0x00025ec3) main_mobtv_info_pane_g1

0x9c7b,	// (0x00025edf) main_mobtv_info_pane_t1_ParamLimits

0x9c7b,	// (0x00025edf) main_mobtv_info_pane_t1

0x9cf3,	// (0x00025f57) main_mobtv_info_pane_t2_ParamLimits

0x9cf3,	// (0x00025f57) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0002bea9) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0002bea9) main_mobtv_info_pane_t

0x9d82,	// (0x00025fe6) wait_bar_pane_cp05

0x9d94,	// (0x00025ff8) main_mobtv_loading_pane_g1_ParamLimits

0x9d94,	// (0x00025ff8) main_mobtv_loading_pane_g1

0x9da2,	// (0x00026006) main_mobtv_loading_pane_g2_ParamLimits

0x9da2,	// (0x00026006) main_mobtv_loading_pane_g2

0x9dae,	// (0x00026012) main_mobtv_loading_pane_g3_ParamLimits

0x9dae,	// (0x00026012) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0002beb0) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0002beb0) main_mobtv_loading_pane_g

0x0b6c,	// (0x0001cdd0) main_mobtv_loading_pane_t1_ParamLimits

0x0b6c,	// (0x0001cdd0) main_mobtv_loading_pane_t1

0x0b84,	// (0x0001cde8) main_mobtv_loading_pane_t2_ParamLimits

0x0b84,	// (0x0001cde8) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0002beb7) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0002beb7) main_mobtv_loading_pane_t

0x9dbc,	// (0x00026020) wait_bar_pane_cp06_ParamLimits

0x9dbc,	// (0x00026020) wait_bar_pane_cp06

0x0ba8,	// (0x0001ce0c) main_mobtv_programe_curr_pane_t1

0x0bb6,	// (0x0001ce1a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0002bebc) main_mobtv_programe_curr_pane_t

0x0bc4,	// (0x0001ce28) main_mobtv_programe_next_pane_t1

0x0bd2,	// (0x0001ce36) main_mobtv_programe_next_pane_t2

0x0be0,	// (0x0001ce44) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0002bec1) main_mobtv_programe_next_pane_t

0xb77b,	// (0x000279df) bg_popup_mobtv_noti_window_pane

0x0bee,	// (0x0001ce52) popup_mobtv_noti_window_g1

0x0bf6,	// (0x0001ce5a) popup_mobtv_noti_window_t1

0x0c04,	// (0x0001ce68) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0002bec8) popup_mobtv_noti_window_t

0xe381,	// (0x0002a5e5) bg_popup_mobtv_noti_window_pane_g1

0x2cd3,	// (0x0001ef37) sc_clock_pane

0x2cd3,	// (0x0001ef37) main_fs_bigclock_pane

0x93f0,	// (0x00025654) blid2_tripm_pane_t4_ParamLimits

0x93f0,	// (0x00025654) blid2_tripm_pane_t4

0x9dc8,	// (0x0002602c) sc_clock_pane_g1_ParamLimits

0x9dc8,	// (0x0002602c) sc_clock_pane_g1

0x9dd6,	// (0x0002603a) sc_clock_pane_t1_ParamLimits

0x9dd6,	// (0x0002603a) sc_clock_pane_t1

0x9de9,	// (0x0002604d) sc_clock_pane_t2_ParamLimits

0x9de9,	// (0x0002604d) sc_clock_pane_t2

0x9dfb,	// (0x0002605f) sc_clock_pane_t3_ParamLimits

0x9dfb,	// (0x0002605f) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0002becd) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0002becd) sc_clock_pane_t

0xad4c,	// (0x00026fb0) main_fs_bigclock_indicator_pane_ParamLimits

0xad4c,	// (0x00026fb0) main_fs_bigclock_indicator_pane

0x9e7e,	// (0x000260e2) main_fs_bigclock_pane_g1_ParamLimits

0x9e7e,	// (0x000260e2) main_fs_bigclock_pane_g1

0xad58,	// (0x00026fbc) main_fs_bigclock_pane_t1_ParamLimits

0xad58,	// (0x00026fbc) main_fs_bigclock_pane_t1

0xad6a,	// (0x00026fce) main_fs_bigclock_pane_t2_ParamLimits

0xad6a,	// (0x00026fce) main_fs_bigclock_pane_t2

0xad7e,	// (0x00026fe2) main_fs_bigclock_pane_t3_ParamLimits

0xad7e,	// (0x00026fe2) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0002c0d2) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002c0d2) main_fs_bigclock_pane_t

0x176a,	// (0x0001d9ce) main_fs_bigclock_indicator_pane_g1

0x0922,	// (0x0001cb86) ncim_query_content_pane_g2_ParamLimits

0x0922,	// (0x0001cb86) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0002be5a) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0002be5a) ncim_query_content_pane_g

0x9e0f,	// (0x00026073) sc_clock_pane_t4_ParamLimits

0x9e0f,	// (0x00026073) sc_clock_pane_t4

0x312b,	// (0x0001f38f) main_radioblah_pane

0xed61,	// (0x0002afc5) cell_call4_button_pane_t1_copy1_ParamLimits

0xed61,	// (0x0002afc5) cell_call4_button_pane_t1_copy1

0x9a52,	// (0x00025cb6) main_ncimui_pane_t1_ParamLimits

0x9a52,	// (0x00025cb6) main_ncimui_pane_t1

0x9a6c,	// (0x00025cd0) main_ncimui_pane_t2_ParamLimits

0x9a6c,	// (0x00025cd0) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0002be53) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0002be53) main_ncimui_pane_t

0x0d49,	// (0x0001cfad) main_radioblah_anim_pane_ParamLimits

0x0d49,	// (0x0001cfad) main_radioblah_anim_pane

0x0d5a,	// (0x0001cfbe) main_radioblah_info_pane_ParamLimits

0x0d5a,	// (0x0001cfbe) main_radioblah_info_pane

0x0d6e,	// (0x0001cfd2) main_radioblah_pane_t1_ParamLimits

0x0d6e,	// (0x0001cfd2) main_radioblah_pane_t1

0x0d8a,	// (0x0001cfee) main_radioblah_pane_t2_ParamLimits

0x0d8a,	// (0x0001cfee) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0002beee) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0002beee) main_radioblah_pane_t

0x9ed4,	// (0x00026138) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9ed4,	// (0x00026138) main_radioblah_rocker_ctrl_pane

0x0dd2,	// (0x0001d036) main_radioblah_info_pane_t1_ParamLimits

0x0dd2,	// (0x0001d036) main_radioblah_info_pane_t1

0x9f19,	// (0x0002617d) main_radioblah_info_pane_t2_ParamLimits

0x9f19,	// (0x0002617d) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0002bef7) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0002bef7) main_radioblah_info_pane_t

0xe381,	// (0x0002a5e5) main_radioblah_rocker_ctrl_pane_g1

0x9fc9,	// (0x0002622d) main_radioblah_rocker_ctrl_pane_g2

0x9fd1,	// (0x00026235) main_radioblah_rocker_ctrl_pane_g3

0x9fd9,	// (0x0002623d) main_radioblah_rocker_ctrl_pane_g4

0x9fe1,	// (0x00026245) main_radioblah_rocker_ctrl_pane_g5

0x9fe9,	// (0x0002624d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0002bf00) main_radioblah_rocker_ctrl_pane_g

0x99f9,	// (0x00025c5d) main_cset_text2_pane_t1_copy1_ParamLimits

0x3b1d,	// (0x0001fd81) cam4_image_uncrop_qvga_pane

0x3c4e,	// (0x0001feb2) vid4_image_uncrop_qcif_pane

0x426f,	// (0x000204d3) cam6_image_uncrop_qvga_pane_ParamLimits

0x426f,	// (0x000204d3) cam6_image_uncrop_qvga_pane

0x0629,	// (0x0001c88d) vid6_image_uncrop_qcif_pane_ParamLimits

0x0629,	// (0x0001c88d) vid6_image_uncrop_qcif_pane

0xb77b,	// (0x000279df) bg_popup_preview_window_pane_cp03

0x08d4,	// (0x0001cb38) list_cset_text2_pane

0x08dc,	// (0x0001cb40) main_cset6_text2_pane_g1

0x08e4,	// (0x0001cb48) main_cset6_text2_pane_t1

0x9ff1,	// (0x00026255) list_cset_text2_pane_t1_ParamLimits

0x9ff1,	// (0x00026255) list_cset_text2_pane_t1

0x312b,	// (0x0001f38f) main_radioblah_pane_ParamLimits

0x9d6e,	// (0x00025fd2) main_mobtv_info_pane_t3_ParamLimits

0x9d6e,	// (0x00025fd2) main_mobtv_info_pane_t3

0x9ec2,	// (0x00026126) main_radioblah_pane_g1

0x9eed,	// (0x00026151) main_radioblah_info_pane_g1

0x9f6e,	// (0x000261d2) main_radioblah_info_pane_t3_ParamLimits

0x9f6e,	// (0x000261d2) main_radioblah_info_pane_t3

0x5f45,	// (0x000221a9) highlight_cell_cale_month_pane_ParamLimits

0x5f45,	// (0x000221a9) highlight_cell_cale_month_pane

0x2cd3,	// (0x0001ef37) main_phob_fisheye_pane

0xe6ec,	// (0x0002a950) scroll_pane_cp0031_ParamLimits

0xe6ec,	// (0x0002a950) scroll_pane_cp0031

0x0737,	// (0x0001c99b) wait_bar_pane_cp08_ParamLimits

0x96e9,	// (0x0002594d) cset_list_set_pane_copy1_ParamLimits

0x0e0c,	// (0x0001d070) highlight_cell_cale_month_pane_g1

0xa00e,	// (0x00026272) highlight_cell_cale_month_pane_t1

0x032e,	// (0x0001c592) list_gen_pane_cp01

0xef6d,	// (0x0002b1d1) scroll_pane_01

0xa01c,	// (0x00026280) list_single_double_fisheye_pane

0xa025,	// (0x00026289) list_double_fisheye_pane_g1_ParamLimits

0xa025,	// (0x00026289) list_double_fisheye_pane_g1

0xa031,	// (0x00026295) list_double_fisheye_pane_g2_ParamLimits

0xa031,	// (0x00026295) list_double_fisheye_pane_g2

0xa045,	// (0x000262a9) list_double_fisheye_pane_g3_ParamLimits

0xa045,	// (0x000262a9) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0002bf0d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0002bf0d) list_double_fisheye_pane_g

0xa06e,	// (0x000262d2) list_double_fisheye_pane_t1_ParamLimits

0xa06e,	// (0x000262d2) list_double_fisheye_pane_t1

0xa089,	// (0x000262ed) list_double_fisheye_pane_t2_ParamLimits

0xa089,	// (0x000262ed) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0002bf18) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0002bf18) list_double_fisheye_pane_t

0x2cd3,	// (0x0001ef37) main_call5_pane

0x9e35,	// (0x00026099) sc_swipe_pane_ParamLimits

0x9e35,	// (0x00026099) sc_swipe_pane

0xa0b7,	// (0x0002631b) call5_image_pane_ParamLimits

0xa0b7,	// (0x0002631b) call5_image_pane

0xa0c7,	// (0x0002632b) call5_swipe_1_pane_ParamLimits

0xa0c7,	// (0x0002632b) call5_swipe_1_pane

0xa0d3,	// (0x00026337) call5_swipe_2_pane_ParamLimits

0xa0d3,	// (0x00026337) call5_swipe_2_pane

0xa0ed,	// (0x00026351) popup_call5_audio_first_window_ParamLimits

0xa0ed,	// (0x00026351) popup_call5_audio_first_window

0xe5e4,	// (0x0002a848) call5_swipe_1_pane_g1_ParamLimits

0xe5e4,	// (0x0002a848) call5_swipe_1_pane_g1

0x0e1d,	// (0x0001d081) call5_swipe_1_pane_g2_ParamLimits

0x0e1d,	// (0x0001d081) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0002bf1d) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0002bf1d) call5_swipe_1_pane_g

0x0e29,	// (0x0001d08d) call5_swipe_1_pane_t1_ParamLimits

0x0e29,	// (0x0001d08d) call5_swipe_1_pane_t1

0xe5e4,	// (0x0002a848) call5_swipe_2_pane_g1_ParamLimits

0xe5e4,	// (0x0002a848) call5_swipe_2_pane_g1

0x0e3e,	// (0x0001d0a2) call5_swipe_2_pane_g2_ParamLimits

0x0e3e,	// (0x0001d0a2) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0002bf22) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0002bf22) call5_swipe_2_pane_g

0x0e4a,	// (0x0001d0ae) call5_swipe_2_pane_t1_ParamLimits

0x0e4a,	// (0x0001d0ae) call5_swipe_2_pane_t1

0x0e5f,	// (0x0001d0c3) sc_swipe_pane_g1_ParamLimits

0x0e5f,	// (0x0001d0c3) sc_swipe_pane_g1

0x0e6c,	// (0x0001d0d0) sc_swipe_pane_g2_ParamLimits

0x0e6c,	// (0x0001d0d0) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0002bf27) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0002bf27) sc_swipe_pane_g

0x0e78,	// (0x0001d0dc) sc_swipe_pane_t1_ParamLimits

0x0e78,	// (0x0001d0dc) sc_swipe_pane_t1

0x2cd3,	// (0x0001ef37) main_cmail_launcher_pane

0xa0fb,	// (0x0002635f) aid_size_cell_cmail_l_ParamLimits

0xa0fb,	// (0x0002635f) aid_size_cell_cmail_l

0xa10b,	// (0x0002636f) grid_cmail_l_pane_ParamLimits

0xa10b,	// (0x0002636f) grid_cmail_l_pane

0xa11b,	// (0x0002637f) cell_cmail_l_pane_ParamLimits

0xa11b,	// (0x0002637f) cell_cmail_l_pane

0xa12f,	// (0x00026393) cell_cmail_l_pane_g1_ParamLimits

0xa12f,	// (0x00026393) cell_cmail_l_pane_g1

0xa13b,	// (0x0002639f) cell_cmail_l_pane_t1_ParamLimits

0xa13b,	// (0x0002639f) cell_cmail_l_pane_t1

0x0e8d,	// (0x0001d0f1) cell_cmail_l_pane_t2_ParamLimits

0x0e8d,	// (0x0001d0f1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0002bf2c) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0002bf2c) cell_cmail_l_pane_t

0xbddd,	// (0x00028041) grid_highlight_pane_cp018_ParamLimits

0xbddd,	// (0x00028041) grid_highlight_pane_cp018

0x2b35,	// (0x0001ed99) main2_pane_ParamLimits

0x2b35,	// (0x0001ed99) main2_pane

0xbf5f,	// (0x000281c3) popup_sp_fs_action_menu_bg_pane_g1

0xbf67,	// (0x000281cb) popup_sp_fs_action_menu_bg_pane_g2

0xbf6f,	// (0x000281d3) popup_sp_fs_action_menu_bg_pane_g3

0xbf77,	// (0x000281db) popup_sp_fs_action_menu_bg_pane_g4

0xbf7f,	// (0x000281e3) popup_sp_fs_action_menu_bg_pane_g5

0xbf87,	// (0x000281eb) popup_sp_fs_action_menu_bg_pane_g6

0xbf8f,	// (0x000281f3) popup_sp_fs_action_menu_bg_pane_g7

0xbf97,	// (0x000281fb) popup_sp_fs_action_menu_bg_pane_g8

0xbf9f,	// (0x00028203) popup_sp_fs_action_menu_bg_pane_g9

0xbfa7,	// (0x0002820b) popup_sp_fs_action_menu_bg_pane_g10

0xbfa7,	// (0x0002820b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002b3ee) popup_sp_fs_action_menu_bg_pane_g

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t3_g3_g1

0x4d66,	// (0x00020fca) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x2_t3_g3_g2

0x4d72,	// (0x00020fd6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002b49c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002b49c) list_medium_line_x2_t3_g3_g

0x4d7e,	// (0x00020fe2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4d7e,	// (0x00020fe2) list_medium_line_x2_t3_g3_t1

0x4d93,	// (0x00020ff7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4d93,	// (0x00020ff7) list_medium_line_x2_t3_g3_t2

0x4da5,	// (0x00021009) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002b4a3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002b4a3) list_medium_line_x2_t3_g3_t

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t3_g2_g1

0x4d72,	// (0x00020fd6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002b4aa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002b4aa) list_medium_line_x2_t3_g2_g

0x4dba,	// (0x0002101e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4dba,	// (0x0002101e) list_medium_line_x2_t3_g2_t1

0x4dd0,	// (0x00021034) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4dd0,	// (0x00021034) list_medium_line_x2_t3_g2_t2

0x4de2,	// (0x00021046) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4de2,	// (0x00021046) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002b4af) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002b4af) list_medium_line_x2_t3_g2_t

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t4_g4_g1

0x4dff,	// (0x00021063) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4dff,	// (0x00021063) list_medium_line_x2_t4_g4_g2

0x4d66,	// (0x00020fca) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x2_t4_g4_g3

0x4e0b,	// (0x0002106f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4e0b,	// (0x0002106f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002b4b6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002b4b6) list_medium_line_x2_t4_g4_g

0x4e17,	// (0x0002107b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4e17,	// (0x0002107b) list_medium_line_x2_t4_g4_t1

0x4e31,	// (0x00021095) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4e31,	// (0x00021095) list_medium_line_x2_t4_g4_t2

0x4e47,	// (0x000210ab) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4e47,	// (0x000210ab) list_medium_line_x2_t4_g4_t3

0x4e5c,	// (0x000210c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4e5c,	// (0x000210c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002b4bf) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002b4bf) list_medium_line_x2_t4_g4_t

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t2_g4_g1

0x4dff,	// (0x00021063) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4dff,	// (0x00021063) list_medium_line_x2_t2_g4_g2

0x4d66,	// (0x00020fca) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x2_t2_g4_g3

0x4d72,	// (0x00020fd6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002b526) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002b526) list_medium_line_x2_t2_g4_g

0x5f6b,	// (0x000221cf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5f6b,	// (0x000221cf) list_medium_line_x2_t2_g4_t1

0x4da5,	// (0x00021009) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002b52f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002b52f) list_medium_line_x2_t2_g4_t

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t2_g3_g1

0x4d66,	// (0x00020fca) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x2_t2_g3_g2

0x4d72,	// (0x00020fd6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002b49c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002b49c) list_medium_line_x2_t2_g3_g

0x5f80,	// (0x000221e4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5f80,	// (0x000221e4) list_medium_line_x2_t2_g3_t1

0x4da5,	// (0x00021009) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002b534) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002b534) list_medium_line_x2_t2_g3_t

0x60ed,	// (0x00022351) main_sp_fs_list_pane_ParamLimits

0x60ed,	// (0x00022351) main_sp_fs_list_pane

0x60f9,	// (0x0002235d) sp_fs_scroll_pane_ParamLimits

0x60f9,	// (0x0002235d) sp_fs_scroll_pane

0x6105,	// (0x00022369) list_medium_line_x2_t3_t1

0x6115,	// (0x00022379) list_medium_line_x2_t3_t2

0x6123,	// (0x00022387) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002b57f) list_medium_line_x2_t3_t

0x6131,	// (0x00022395) list_medium_line_x3_t4_t1

0x6141,	// (0x000223a5) list_medium_line_x3_t4_t2

0x614f,	// (0x000223b3) list_medium_line_x3_t4_t3

0x6123,	// (0x00022387) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002b586) list_medium_line_x3_t4_t

0x615d,	// (0x000223c1) list_medium_line_x4_t5_t1

0x616d,	// (0x000223d1) list_medium_line_x4_t5_t2

0x614f,	// (0x000223b3) list_medium_line_x4_t5_t3

0x617b,	// (0x000223df) list_medium_line_x4_t5_t4

0x6123,	// (0x00022387) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002b58f) list_medium_line_x4_t5_t

0x4d5a,	// (0x00020fbe) list_medium_line_t4_g4_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_t4_g4_g1

0x6189,	// (0x000223ed) list_medium_line_t4_g4_g2_ParamLimits

0x6189,	// (0x000223ed) list_medium_line_t4_g4_g2

0x6195,	// (0x000223f9) list_medium_line_t4_g4_g3_ParamLimits

0x6195,	// (0x000223f9) list_medium_line_t4_g4_g3

0x4d72,	// (0x00020fd6) list_medium_line_t4_g4_g4_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002b59a) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002b59a) list_medium_line_t4_g4_g

0x61a1,	// (0x00022405) list_medium_line_t4_g4_t1_ParamLimits

0x61a1,	// (0x00022405) list_medium_line_t4_g4_t1

0x61b6,	// (0x0002241a) list_medium_line_t4_g4_t2_ParamLimits

0x61b6,	// (0x0002241a) list_medium_line_t4_g4_t2

0x61cb,	// (0x0002242f) list_medium_line_t4_g4_t3_ParamLimits

0x61cb,	// (0x0002242f) list_medium_line_t4_g4_t3

0x4da5,	// (0x00021009) list_medium_line_t4_g4_t4_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002b5a3) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002b5a3) list_medium_line_t4_g4_t

0x626e,	// (0x000224d2) chi_dic_find_pane_g1

0x3147,	// (0x0001f3ab) main_tport_pane

0x8c7e,	// (0x00024ee2) list_medium_line_plain_t1

0x8ca4,	// (0x00024f08) list_medium_line_t2_g2_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_t2_g2_g1

0x8cb0,	// (0x00024f14) list_medium_line_t2_g2_g2_ParamLimits

0x8cb0,	// (0x00024f14) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002bc64) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002bc64) list_medium_line_t2_g2_g

0x8cbc,	// (0x00024f20) list_medium_line_t2_g2_t1_ParamLimits

0x8cbc,	// (0x00024f20) list_medium_line_t2_g2_t1

0x8cd6,	// (0x00024f3a) list_medium_line_t2_g2_t2_ParamLimits

0x8cd6,	// (0x00024f3a) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002bc69) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002bc69) list_medium_line_t2_g2_t

0x03a1,	// (0x0001c605) aid_sp_fs_list_icon_a_sm

0x03a9,	// (0x0001c60d) aid_sp_fs_list_icon_d

0x03b1,	// (0x0001c615) aid_sp_fs_text_primary

0x03ba,	// (0x0001c61e) aid_sp_fs_text_secondary

0x923b,	// (0x0002549f) list_medium_line

0x923b,	// (0x0002549f) list_medium_line_g2

0x923b,	// (0x0002549f) list_medium_line_g3

0x923b,	// (0x0002549f) list_medium_line_plain

0x923b,	// (0x0002549f) list_medium_line_plain_t2

0x923b,	// (0x0002549f) list_medium_line_plain_t3

0x923b,	// (0x0002549f) list_medium_line_right_icon

0x923b,	// (0x0002549f) list_medium_line_right_iconx2

0x923b,	// (0x0002549f) list_medium_line_t2

0x923b,	// (0x0002549f) list_medium_line_t2_g2

0x923b,	// (0x0002549f) list_medium_line_t2_g3

0x923b,	// (0x0002549f) list_medium_line_t2_right_icon

0x923b,	// (0x0002549f) list_medium_line_t2_right_iconx2

0x923b,	// (0x0002549f) list_medium_line_t3

0x923b,	// (0x0002549f) list_medium_line_t3_g2

0x923b,	// (0x0002549f) list_medium_line_t3_g3

0x923b,	// (0x0002549f) list_medium_line_t3_right_iconx2

0x9244,	// (0x000254a8) list_medium_line_t4_g4

0x0e14,	// (0x0001d078) list_medium_line_x2

0x0e14,	// (0x0001d078) list_medium_line_x2_t2_g2

0x0e14,	// (0x0001d078) list_medium_line_x2_t2_g3

0x0e14,	// (0x0001d078) list_medium_line_x2_t2_g4

0x0e14,	// (0x0001d078) list_medium_line_x2_t3

0x0e14,	// (0x0001d078) list_medium_line_x2_t3_g2

0x0e14,	// (0x0001d078) list_medium_line_x2_t3_g3

0x0e14,	// (0x0001d078) list_medium_line_x2_t3_g4

0x0e14,	// (0x0001d078) list_medium_line_x2_t4_g2

0x0e14,	// (0x0001d078) list_medium_line_x2_t4_g4

0x924d,	// (0x000254b1) list_medium_line_x3

0x924d,	// (0x000254b1) list_medium_line_x3_t4

0x924d,	// (0x000254b1) list_medium_line_x3_t4_g4

0x9244,	// (0x000254a8) list_medium_line_x4_t4

0x9244,	// (0x000254a8) list_medium_line_x4_t4_g7

0x9244,	// (0x000254a8) list_medium_line_x4_t5

0x9256,	// (0x000254ba) list_single_fs_dyc_pane_ParamLimits

0x9256,	// (0x000254ba) list_single_fs_dyc_pane

0x4d5a,	// (0x00020fbe) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x4_t4_g7_g1

0x9928,	// (0x00025b8c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9928,	// (0x00025b8c) list_medium_line_x4_t4_g7_g2

0x9934,	// (0x00025b98) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9934,	// (0x00025b98) list_medium_line_x4_t4_g7_g3

0x9943,	// (0x00025ba7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9943,	// (0x00025ba7) list_medium_line_x4_t4_g7_g4

0x994f,	// (0x00025bb3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x994f,	// (0x00025bb3) list_medium_line_x4_t4_g7_g5

0x995e,	// (0x00025bc2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x995e,	// (0x00025bc2) list_medium_line_x4_t4_g7_g6

0x996d,	// (0x00025bd1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x996d,	// (0x00025bd1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0002be34) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0002be34) list_medium_line_x4_t4_g7_g

0x9979,	// (0x00025bdd) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9979,	// (0x00025bdd) list_medium_line_x4_t4_g7_t1

0x998e,	// (0x00025bf2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x998e,	// (0x00025bf2) list_medium_line_x4_t4_g7_t2

0x99a3,	// (0x00025c07) list_medium_line_x4_t4_g7_t3_ParamLimits

0x99a3,	// (0x00025c07) list_medium_line_x4_t4_g7_t3

0x99b8,	// (0x00025c1c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x99b8,	// (0x00025c1c) list_medium_line_x4_t4_g7_t4

0x99ca,	// (0x00025c2e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x99ca,	// (0x00025c2e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0002be43) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0002be43) list_medium_line_x4_t4_g7_t

0x99dc,	// (0x00025c40) list_single_dyc_row_pane_ParamLimits

0x99dc,	// (0x00025c40) list_single_dyc_row_pane

0xa0ab,	// (0x0002630f) call5_gesture_pane_ParamLimits

0xa0ab,	// (0x0002630f) call5_gesture_pane

0xa0df,	// (0x00026343) call5_windows_pane_ParamLimits

0xa0df,	// (0x00026343) call5_windows_pane

0xa151,	// (0x000263b5) call5_swipe_1_pane_cp_ParamLimits

0xa151,	// (0x000263b5) call5_swipe_1_pane_cp

0xa15d,	// (0x000263c1) call5_swipe_2_pane_cp_ParamLimits

0xa15d,	// (0x000263c1) call5_swipe_2_pane_cp

0xc08b,	// (0x000282ef) call5_image_pane_cp

0xa169,	// (0x000263cd) popup_call5_audio_first_window_cp_ParamLimits

0xa169,	// (0x000263cd) popup_call5_audio_first_window_cp

0x0e5f,	// (0x0001d0c3) call5_swipe_1_pane_g1_cp_ParamLimits

0x0e5f,	// (0x0001d0c3) call5_swipe_1_pane_g1_cp

0x0e9f,	// (0x0001d103) call5_swipe_1_pane_g2_cp

0x0e78,	// (0x0001d0dc) call5_swipe_1_pane_t1_cp_ParamLimits

0x0e78,	// (0x0001d0dc) call5_swipe_1_pane_t1_cp

0x0e5f,	// (0x0001d0c3) call5_swipe_2_pane_g1_cp_ParamLimits

0x0e5f,	// (0x0001d0c3) call5_swipe_2_pane_g1_cp

0x0ea7,	// (0x0001d10b) call5_swipe_2_pane_g2_cp

0x0eaf,	// (0x0001d113) call5_swipe_2_pane_t1_cp_ParamLimits

0x0eaf,	// (0x0001d113) call5_swipe_2_pane_t1_cp

0xbddd,	// (0x00028041) main_sp_fs_email_pane

0x0ec4,	// (0x0001d128) main_sp_fs_listscroll_pane_te

0xa177,	// (0x000263db) popup_sp_fs_action_menu_pane_ParamLimits

0xa177,	// (0x000263db) popup_sp_fs_action_menu_pane

0xe381,	// (0x0002a5e5) bg_sp_fs_ctrlbar_pane_g1

0x0ecd,	// (0x0001d131) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0ed6,	// (0x0001d13a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0edf,	// (0x0001d143) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe381,	// (0x0002a5e5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0002bf31) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe166,	// (0x0002a3ca) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe166,	// (0x0002a3ca) bg_sp_fs_ctrlbar_ddmenu_pane

0x0ee8,	// (0x0001d14c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0ee8,	// (0x0001d14c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0ef4,	// (0x0001d158) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0ef4,	// (0x0001d158) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0002bf3a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0002bf3a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0f00,	// (0x0001d164) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0f00,	// (0x0001d164) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa1bb,	// (0x0002641f) list_medium_line_t2_right_icon_g1

0xa1c3,	// (0x00026427) list_medium_line_t2_right_icon_t1

0xa1d3,	// (0x00026437) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0002bf3f) list_medium_line_t2_right_icon_t

0xdf70,	// (0x0002a1d4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdf70,	// (0x0002a1d4) bg_sp_fs_ctrlbar_pane

0xa238,	// (0x0002649c) main_sp_fs_ctrlbar_button_pane_cp01

0xa240,	// (0x000264a4) main_sp_fs_ctrlbar_ddmenu_pane

0x0f52,	// (0x0001d1b6) main_sp_fs_ctrlbar_pane_g1

0x0f5e,	// (0x0001d1c2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0002bf44) main_sp_fs_ctrlbar_pane_g

0x0f6a,	// (0x0001d1ce) main_sp_fs_ctrlbar_pane_t1

0xa24a,	// (0x000264ae) main_sp_fs_ctrlbar_pane

0xa260,	// (0x000264c4) main_sp_fs_listscroll_pane_te_cp01

0xa271,	// (0x000264d5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa271,	// (0x000264d5) popup_sp_fs_action_menu_pane_cp01

0xbddd,	// (0x00028041) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbddd,	// (0x00028041) bg_sp_fs_highlight_list_pane_cp01

0x0f9a,	// (0x0001d1fe) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0f9a,	// (0x0001d1fe) sp_fs_action_menu_list_gene_pane_g1

0x0fa9,	// (0x0001d20d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0fa9,	// (0x0001d20d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0002bf4e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0002bf4e) sp_fs_action_menu_list_gene_pane_g

0x0fb6,	// (0x0001d21a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0fb6,	// (0x0001d21a) sp_fs_action_menu_list_gene_pane_t1

0x0fce,	// (0x0001d232) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0fce,	// (0x0001d232) sp_fs_action_menu_list_gene_pane

0x0fef,	// (0x0001d253) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0fef,	// (0x0001d253) popup_sp_fs_action_menu_bg_pane

0x0ffd,	// (0x0001d261) sp_fs_action_menu_list_pane_ParamLimits

0x0ffd,	// (0x0001d261) sp_fs_action_menu_list_pane

0xa29b,	// (0x000264ff) sp_fs_scroll_pane_cp01_ParamLimits

0xa29b,	// (0x000264ff) sp_fs_scroll_pane_cp01

0xa2c1,	// (0x00026525) list_medium_line_plain_t2_t1

0xa2d1,	// (0x00026535) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0002bf53) list_medium_line_plain_t2_t

0xa2df,	// (0x00026543) list_medium_line_plain_t3_t1

0xa2ef,	// (0x00026553) list_medium_line_plain_t3_t2

0xa2fd,	// (0x00026561) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0002bf58) list_medium_line_plain_t3_t

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t2_g2_g1

0x4d72,	// (0x00020fd6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002b4aa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002b4aa) list_medium_line_x2_t2_g2_g

0x61a1,	// (0x00022405) list_medium_line_x2_t2_g2_t1_ParamLimits

0x61a1,	// (0x00022405) list_medium_line_x2_t2_g2_t1

0x4da5,	// (0x00021009) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0002bf5f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0002bf5f) list_medium_line_x2_t2_g2_t

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t4_g2_g1

0x4d72,	// (0x00020fd6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002b4aa) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002b4aa) list_medium_line_x2_t4_g2_g

0xa30b,	// (0x0002656f) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa30b,	// (0x0002656f) list_medium_line_x2_t4_g2_t1

0xa325,	// (0x00026589) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa325,	// (0x00026589) list_medium_line_x2_t4_g2_t2

0xa33b,	// (0x0002659f) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa33b,	// (0x0002659f) list_medium_line_x2_t4_g2_t3

0x4da5,	// (0x00021009) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0002bf64) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0002bf64) list_medium_line_x2_t4_g2_t

0xa350,	// (0x000265b4) list_medium_line_t3_right_iconx2_g1

0xa1bb,	// (0x0002641f) list_medium_line_t3_right_iconx2_g2

0xa358,	// (0x000265bc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0002bf6d) list_medium_line_t3_right_iconx2_g

0xa360,	// (0x000265c4) list_medium_line_t3_right_iconx2_t1

0xa370,	// (0x000265d4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0002bf74) list_medium_line_t3_right_iconx2_t

0x4d5a,	// (0x00020fbe) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x3_t4_g4_g1

0x4d66,	// (0x00020fca) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x3_t4_g4_g2

0x6189,	// (0x000223ed) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6189,	// (0x000223ed) list_medium_line_x3_t4_g4_g3

0xa37e,	// (0x000265e2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa37e,	// (0x000265e2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0002bf79) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0002bf79) list_medium_line_x3_t4_g4_g

0xa38a,	// (0x000265ee) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa38a,	// (0x000265ee) list_medium_line_x3_t4_g4_t1

0xa3a1,	// (0x00026605) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa3a1,	// (0x00026605) list_medium_line_x3_t4_g4_t2

0x61b6,	// (0x0002241a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x61b6,	// (0x0002241a) list_medium_line_x3_t4_g4_t3

0xa3b6,	// (0x0002661a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa3b6,	// (0x0002661a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0002bf82) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0002bf82) list_medium_line_x3_t4_g4_t

0xa3d3,	// (0x00026637) list_single_dyc_row_text_pane_t1_ParamLimits

0xa3d3,	// (0x00026637) list_single_dyc_row_text_pane_t1

0xa40a,	// (0x0002666e) list_single_dyc_row_text_pane_t2_ParamLimits

0xa40a,	// (0x0002666e) list_single_dyc_row_text_pane_t2

0x101f,	// (0x0001d283) list_single_dyc_row_text_pane_t3_ParamLimits

0x101f,	// (0x0001d283) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0002bf8b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0002bf8b) list_single_dyc_row_text_pane_t

0x1043,	// (0x0001d2a7) list_single_dyc_row_pane_g1_ParamLimits

0x1043,	// (0x0001d2a7) list_single_dyc_row_pane_g1

0x104f,	// (0x0001d2b3) list_single_dyc_row_pane_g2_ParamLimits

0x104f,	// (0x0001d2b3) list_single_dyc_row_pane_g2

0x105b,	// (0x0001d2bf) list_single_dyc_row_pane_g3_ParamLimits

0x105b,	// (0x0001d2bf) list_single_dyc_row_pane_g3

0x1067,	// (0x0001d2cb) list_single_dyc_row_pane_g4_ParamLimits

0x1067,	// (0x0001d2cb) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0002bf98) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0002bf98) list_single_dyc_row_pane_g

0x1073,	// (0x0001d2d7) list_single_dyc_row_text_pane_ParamLimits

0x1073,	// (0x0001d2d7) list_single_dyc_row_text_pane

0xb77b,	// (0x000279df) bg_sp_fs_scroll_pane

0x1092,	// (0x0001d2f6) thumb_sp_fs_scroll_pane

0x8ca4,	// (0x00024f08) list_medium_line_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_g1

0xa52d,	// (0x00026791) list_medium_line_t1_ParamLimits

0xa52d,	// (0x00026791) list_medium_line_t1

0x4d5a,	// (0x00020fbe) list_medium_line_x2_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_g1

0x4d66,	// (0x00020fca) list_medium_line_x2_g2_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0002bfa1) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0002bfa1) list_medium_line_x2_g

0x109b,	// (0x0001d2ff) list_medium_line_x2_t1_ParamLimits

0x109b,	// (0x0001d2ff) list_medium_line_x2_t1

0x4d5a,	// (0x00020fbe) list_medium_line_x3_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x3_g1

0x4d66,	// (0x00020fca) list_medium_line_x3_g2_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0002bfa1) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0002bfa1) list_medium_line_x3_g

0x109b,	// (0x0001d2ff) list_medium_line_x3_t1_ParamLimits

0x109b,	// (0x0001d2ff) list_medium_line_x3_t1

0x10b1,	// (0x0001d315) thumb_sp_fs_scroll_pane_g1

0x10ba,	// (0x0001d31e) thumb_sp_fs_scroll_pane_g2

0x10c3,	// (0x0001d327) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002bfa6) thumb_sp_fs_scroll_pane_g

0x10b1,	// (0x0001d315) bg_sp_fs_scroll_pane_g1

0x10ba,	// (0x0001d31e) bg_sp_fs_scroll_pane_g2

0x10c3,	// (0x0001d327) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0002bfa6) bg_sp_fs_scroll_pane_g

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4d5a,	// (0x00020fbe) list_medium_line_x2_t3_g4_g1

0x4dff,	// (0x00021063) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4dff,	// (0x00021063) list_medium_line_x2_t3_g4_g2

0x4d66,	// (0x00020fca) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4d66,	// (0x00020fca) list_medium_line_x2_t3_g4_g3

0x4d72,	// (0x00020fd6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4d72,	// (0x00020fd6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002b526) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002b526) list_medium_line_x2_t3_g4_g

0xa542,	// (0x000267a6) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa542,	// (0x000267a6) list_medium_line_x2_t3_g4_t1

0xa558,	// (0x000267bc) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa558,	// (0x000267bc) list_medium_line_x2_t3_g4_t2

0x4da5,	// (0x00021009) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4da5,	// (0x00021009) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0002bfad) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0002bfad) list_medium_line_x2_t3_g4_t

0x8ca4,	// (0x00024f08) list_medium_line_g2_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_g2_g1

0x8cb0,	// (0x00024f14) list_medium_line_g2_g2_ParamLimits

0x8cb0,	// (0x00024f14) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002bc64) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002bc64) list_medium_line_g2_g

0xa572,	// (0x000267d6) list_medium_line_g2_t1_ParamLimits

0xa572,	// (0x000267d6) list_medium_line_g2_t1

0x8ca4,	// (0x00024f08) list_medium_line_t3_g2_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_t3_g2_g1

0x8cb0,	// (0x00024f14) list_medium_line_t3_g2_g2_ParamLimits

0x8cb0,	// (0x00024f14) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002bc64) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002bc64) list_medium_line_t3_g2_g

0xa587,	// (0x000267eb) list_medium_line_t3_g2_t1_ParamLimits

0xa587,	// (0x000267eb) list_medium_line_t3_g2_t1

0xa5a1,	// (0x00026805) list_medium_line_t3_g2_t2_ParamLimits

0xa5a1,	// (0x00026805) list_medium_line_t3_g2_t2

0xa5b7,	// (0x0002681b) list_medium_line_t3_g2_t3_ParamLimits

0xa5b7,	// (0x0002681b) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0002bfb4) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0002bfb4) list_medium_line_t3_g2_t

0xa1bb,	// (0x0002641f) list_medium_line_right_icon_g1

0xa5cd,	// (0x00026831) list_medium_line_right_icon_t1

0x8ca4,	// (0x00024f08) list_medium_line_t2_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_t2_g1

0xa5db,	// (0x0002683f) list_medium_line_t2_t1_ParamLimits

0xa5db,	// (0x0002683f) list_medium_line_t2_t1

0xa5f5,	// (0x00026859) list_medium_line_t2_t2_ParamLimits

0xa5f5,	// (0x00026859) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0002bfbb) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0002bfbb) list_medium_line_t2_t

0x8ca4,	// (0x00024f08) list_medium_line_t3_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_t3_g1

0xa60a,	// (0x0002686e) list_medium_line_t3_t1_ParamLimits

0xa60a,	// (0x0002686e) list_medium_line_t3_t1

0xa624,	// (0x00026888) list_medium_line_t3_t2_ParamLimits

0xa624,	// (0x00026888) list_medium_line_t3_t2

0xa63a,	// (0x0002689e) list_medium_line_t3_t3_ParamLimits

0xa63a,	// (0x0002689e) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0002bfc0) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0002bfc0) list_medium_line_t3_t

0x8ca4,	// (0x00024f08) list_medium_line_g3_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_g3_g1

0xa64f,	// (0x000268b3) list_medium_line_g3_g2_ParamLimits

0xa64f,	// (0x000268b3) list_medium_line_g3_g2

0x8cb0,	// (0x00024f14) list_medium_line_g3_g3_ParamLimits

0x8cb0,	// (0x00024f14) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0002bfc7) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0002bfc7) list_medium_line_g3_g

0xa65b,	// (0x000268bf) list_medium_line_g3_t1_ParamLimits

0xa65b,	// (0x000268bf) list_medium_line_g3_t1

0x8ca4,	// (0x00024f08) list_medium_line_t2_g3_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_t2_g3_g1

0xa64f,	// (0x000268b3) list_medium_line_t2_g3_g2_ParamLimits

0xa64f,	// (0x000268b3) list_medium_line_t2_g3_g2

0x8cb0,	// (0x00024f14) list_medium_line_t2_g3_g3_ParamLimits

0x8cb0,	// (0x00024f14) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0002bfc7) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0002bfc7) list_medium_line_t2_g3_g

0xa670,	// (0x000268d4) list_medium_line_t2_g3_t1_ParamLimits

0xa670,	// (0x000268d4) list_medium_line_t2_g3_t1

0xa68a,	// (0x000268ee) list_medium_line_t2_g3_t2_ParamLimits

0xa68a,	// (0x000268ee) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0002bfce) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0002bfce) list_medium_line_t2_g3_t

0x8ca4,	// (0x00024f08) list_medium_line_t3_g3_g1_ParamLimits

0x8ca4,	// (0x00024f08) list_medium_line_t3_g3_g1

0xa64f,	// (0x000268b3) list_medium_line_t3_g3_g2_ParamLimits

0xa64f,	// (0x000268b3) list_medium_line_t3_g3_g2

0x8cb0,	// (0x00024f14) list_medium_line_t3_g3_g3_ParamLimits

0x8cb0,	// (0x00024f14) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0002bfc7) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0002bfc7) list_medium_line_t3_g3_g

0xa6a0,	// (0x00026904) list_medium_line_t3_g3_t1_ParamLimits

0xa6a0,	// (0x00026904) list_medium_line_t3_g3_t1

0xa6b9,	// (0x0002691d) list_medium_line_t3_g3_t2_ParamLimits

0xa6b9,	// (0x0002691d) list_medium_line_t3_g3_t2

0xa6cf,	// (0x00026933) list_medium_line_t3_g3_t3_ParamLimits

0xa6cf,	// (0x00026933) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0002bfd3) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0002bfd3) list_medium_line_t3_g3_t

0xa350,	// (0x000265b4) list_medium_line_right_iconx2_g1

0xa1bb,	// (0x0002641f) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002bfda) list_medium_line_right_iconx2_g

0xa6e5,	// (0x00026949) list_medium_line_right_iconx2_t1

0xa350,	// (0x000265b4) list_medium_line_t2_right_iconx2_g1

0xa1bb,	// (0x0002641f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0002bfda) list_medium_line_t2_right_iconx2_g

0xa6f3,	// (0x00026957) list_medium_line_t2_right_iconx2_t1

0xa703,	// (0x00026967) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0002bfdf) list_medium_line_t2_right_iconx2_t

0xa711,	// (0x00026975) list_medium_line_x4_t4_t1

0xa71f,	// (0x00026983) list_medium_line_x4_t4_t2

0xa72f,	// (0x00026993) list_medium_line_x4_t4_t3

0xa73f,	// (0x000269a3) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0002bfe4) list_medium_line_x4_t4_t

0xa779,	// (0x000269dd) tport_appsw_pane_ParamLimits

0xa779,	// (0x000269dd) tport_appsw_pane

0xa787,	// (0x000269eb) tport_contact_pane_ParamLimits

0xa787,	// (0x000269eb) tport_contact_pane

0xa797,	// (0x000269fb) tport_listscroll_pane_ParamLimits

0xa797,	// (0x000269fb) tport_listscroll_pane

0xa7a7,	// (0x00026a0b) cell_tport_appsw_pane_ParamLimits

0xa7a7,	// (0x00026a0b) cell_tport_appsw_pane

0xe675,	// (0x0002a8d9) tport_appsw_pane_g1_ParamLimits

0xe675,	// (0x0002a8d9) tport_appsw_pane_g1

0x10cc,	// (0x0001d330) tport_contact_pane_g1

0x09a8,	// (0x0001cc0c) tport_contact_pane_t1

0x10d5,	// (0x0001d339) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0002bfed) tport_contact_pane_t

0x10e3,	// (0x0001d347) list_tport_pane

0x10ec,	// (0x0001d350) scroll_pane_cp_030

0xa7da,	// (0x00026a3e) cell_tport_appsw_pane_g1

0xa7ea,	// (0x00026a4e) cell_tport_appsw_pane_t1

0xa7f8,	// (0x00026a5c) grid_highlight_pane_cp019

0xa800,	// (0x00026a64) list_tport_double_graphic_pane_ParamLimits

0xa800,	// (0x00026a64) list_tport_double_graphic_pane

0xbddd,	// (0x00028041) list_highlight_pane_cp023_ParamLimits

0xbddd,	// (0x00028041) list_highlight_pane_cp023

0xa811,	// (0x00026a75) list_tport_double_graphic_pane_g1_ParamLimits

0xa811,	// (0x00026a75) list_tport_double_graphic_pane_g1

0xa81e,	// (0x00026a82) list_tport_double_graphic_pane_t1_ParamLimits

0xa81e,	// (0x00026a82) list_tport_double_graphic_pane_t1

0xa833,	// (0x00026a97) list_tport_double_graphic_pane_t2_ParamLimits

0xa833,	// (0x00026a97) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0002bff9) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0002bff9) list_tport_double_graphic_pane_t

0xb77b,	// (0x000279df) main_cale_note_pane

0x3e9d,	// (0x00020101) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x3e9d,	// (0x00020101) cell_vitu2_function_top_wide_pane_cp01

0x9d82,	// (0x00025fe6) wait_bar_pane_cp05_ParamLimits

0xbddd,	// (0x00028041) listscroll_cmail_pane

0x10f5,	// (0x0001d359) list_cmail_pane

0xa845,	// (0x00026aa9) list_cmail_body_pane

0xa86c,	// (0x00026ad0) list_single_cmail_header_caption_pane

0xa897,	// (0x00026afb) list_single_cmail_header_detail_pane_ParamLimits

0xa897,	// (0x00026afb) list_single_cmail_header_detail_pane

0x1105,	// (0x0001d369) list_single_cmail_header_caption_pane_t1

0xa8cd,	// (0x00026b31) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa8cd,	// (0x00026b31) list_single_cmail_header_detail_pane_g1

0x111c,	// (0x0001d380) list_single_cmail_header_detail_pane_g2_ParamLimits

0x111c,	// (0x0001d380) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0002bffe) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0002bffe) list_single_cmail_header_detail_pane_g

0x1135,	// (0x0001d399) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1135,	// (0x0001d399) list_single_cmail_header_detail_pane_t1

0x1195,	// (0x0001d3f9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1195,	// (0x0001d3f9) list_single_cmail_header_editor_pane_bg

0x0b05,	// (0x0001cd69) list_cmail_body_pane_g1

0x11ac,	// (0x0001d410) list_cmail_body_pane_t1

0xee2b,	// (0x0002b08f) list_single_cmail_header_editor_pane_bg_g1

0xc2e4,	// (0x00028548) list_single_cmail_header_editor_pane_bg_g1_copy1

0xee3b,	// (0x0002b09f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xee33,	// (0x0002b097) list_single_cmail_header_editor_pane_bg_g1_copy3

0xf0c2,	// (0x0002b326) list_single_cmail_header_editor_pane_bg_g1_copy4

0xee5b,	// (0x0002b0bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xee4b,	// (0x0002b0af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xee53,	// (0x0002b0b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc2c4,	// (0x00028528) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa8e3,	// (0x00026b47) calenote_gesture_pane_ParamLimits

0xa8e3,	// (0x00026b47) calenote_gesture_pane

0xa8fd,	// (0x00026b61) calenote_window_pane_ParamLimits

0xa8fd,	// (0x00026b61) calenote_window_pane

0x11ba,	// (0x0001d41e) popup_note_window_cp01

0xa915,	// (0x00026b79) calenote_swipe_1_pane_ParamLimits

0xa915,	// (0x00026b79) calenote_swipe_1_pane

0xa15d,	// (0x000263c1) calenote_swipe_2_pane_ParamLimits

0xa15d,	// (0x000263c1) calenote_swipe_2_pane

0x0e5f,	// (0x0001d0c3) calenote_swipe_1_pane_g1_ParamLimits

0x0e5f,	// (0x0001d0c3) calenote_swipe_1_pane_g1

0x0e6c,	// (0x0001d0d0) calenote_swipe_1_pane_g2_ParamLimits

0x0e6c,	// (0x0001d0d0) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0002bf27) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0002bf27) calenote_swipe_1_pane_g

0x11cc,	// (0x0001d430) calenote_swipe_1_pane_t1_ParamLimits

0x11cc,	// (0x0001d430) calenote_swipe_1_pane_t1

0x0e5f,	// (0x0001d0c3) calenote_swipe_2_pane_g1_ParamLimits

0x0e5f,	// (0x0001d0c3) calenote_swipe_2_pane_g1

0x11eb,	// (0x0001d44f) calenote_swipe_2_pane_g2_ParamLimits

0x11eb,	// (0x0001d44f) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0002c00a) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0002c00a) calenote_swipe_2_pane_g

0x11f7,	// (0x0001d45b) calenote_swipe_2_pane_t1_ParamLimits

0x11f7,	// (0x0001d45b) calenote_swipe_2_pane_t1

0xb77b,	// (0x000279df) main_mup_navstr_pane

0x7c7b,	// (0x00023edf) main_mup3_pane_t7_ParamLimits

0x7c7b,	// (0x00023edf) main_mup3_pane_t7

0x37a0,	// (0x0001fa04) main_mp4_pane_g6_ParamLimits

0x37a0,	// (0x0001fa04) main_mp4_pane_g6

0x3a93,	// (0x0001fcf7) main_image3_pane_t4_ParamLimits

0x3a93,	// (0x0001fcf7) main_image3_pane_t4

0xa928,	// (0x00026b8c) popup_navstr_preview_pane_ParamLimits

0xa928,	// (0x00026b8c) popup_navstr_preview_pane

0xa934,	// (0x00026b98) scroll_navstr_pane_ParamLimits

0xa934,	// (0x00026b98) scroll_navstr_pane

0xb77b,	// (0x000279df) bg_popup_preview_window_pane_cp04

0x121e,	// (0x0001d482) popup_navstr_preview_pane_t1

0xa940,	// (0x00026ba4) scroll_navstr_pane_g1_ParamLimits

0xa940,	// (0x00026ba4) scroll_navstr_pane_g1

0xa94d,	// (0x00026bb1) scroll_navstr_pane_t1_ParamLimits

0xa94d,	// (0x00026bb1) scroll_navstr_pane_t1

0x11c3,	// (0x0001d427) bg_button_pane_cp014

0x11c3,	// (0x0001d427) bg_button_pane_cp030

0xa051,	// (0x000262b5) list_double_fisheye_pane_g4_ParamLimits

0xa051,	// (0x000262b5) list_double_fisheye_pane_g4

0xa05d,	// (0x000262c1) list_double_fisheye_pane_g5_ParamLimits

0xa05d,	// (0x000262c1) list_double_fisheye_pane_g5

0xef04,	// (0x0002b168) sp_fs_scroll_pane_cp03

0x0f52,	// (0x0001d1b6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0f5e,	// (0x0001d1c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0002bf44) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0f6a,	// (0x0001d1ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x10fd,	// (0x0001d361) sp_fs_scroll_pane_cp02

0xbfca,	// (0x0002822e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbfca,	// (0x0002822e) popup_sp_fs_calendar_preview_list_single_pane

0xb77b,	// (0x000279df) main_cam6_pano_pane

0x312b,	// (0x0001f38f) main_mup3_pane_ParamLimits

0xb77b,	// (0x000279df) main_phacti_pane

0x9c57,	// (0x00025ebb) bg_button_pane_cp11

0x9c6f,	// (0x00025ed3) main_mobtv_info_pane_g2_ParamLimits

0x9c6f,	// (0x00025ed3) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0002bea4) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0002bea4) main_mobtv_info_pane_g

0x9e21,	// (0x00026085) sc_clock_pane_t5_ParamLimits

0x9e21,	// (0x00026085) sc_clock_pane_t5

0x9ec2,	// (0x00026126) main_radioblah_pane_g1_ParamLimits

0x0da2,	// (0x0001d006) main_radioblah_pane_t3_ParamLimits

0x0da2,	// (0x0001d006) main_radioblah_pane_t3

0x0dba,	// (0x0001d01e) main_radioblah_pane_t4_ParamLimits

0x0dba,	// (0x0001d01e) main_radioblah_pane_t4

0x9ee0,	// (0x00026144) main_radioblah_text_pane_ParamLimits

0x9ee0,	// (0x00026144) main_radioblah_text_pane

0x9eed,	// (0x00026151) main_radioblah_info_pane_g1_ParamLimits

0x9f82,	// (0x000261e6) main_radioblah_info_pane_t4_ParamLimits

0x9f82,	// (0x000261e6) main_radioblah_info_pane_t4

0xbddd,	// (0x00028041) main_sp_fs_calendar_pane

0xa95f,	// (0x00026bc3) main_phacti_pane_g1

0xa967,	// (0x00026bcb) phacti_note_pane_ParamLimits

0xa967,	// (0x00026bcb) phacti_note_pane

0x1235,	// (0x0001d499) phacti_term_pane_ParamLimits

0x1235,	// (0x0001d499) phacti_term_pane

0x124a,	// (0x0001d4ae) phacti_note_pane_t1_ParamLimits

0x124a,	// (0x0001d4ae) phacti_note_pane_t1

0x1261,	// (0x0001d4c5) phacti_term_pane_g1

0x1269,	// (0x0001d4cd) phacti_term_pane_t1_ParamLimits

0x1269,	// (0x0001d4cd) phacti_term_pane_t1

0x1293,	// (0x0001d4f7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc069,	// (0x000282cd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0002c014) popup_sp_fs_calendar_preview_list_single_pane_g

0x129b,	// (0x0001d4ff) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x129b,	// (0x0001d4ff) popup_sp_fs_calendar_preview_list_single_pane_t1

0x12b1,	// (0x0001d515) aid_popup_sp_fs_bg_corner_pane

0xe381,	// (0x0002a5e5) popup_sp_fs_calendar_preview_bg_pane_g1

0xb77b,	// (0x000279df) popup_sp_fs_calendar_preview_bg_pane

0x12b9,	// (0x0001d51d) popup_sp_fs_calendar_preview_list_pane

0xdf70,	// (0x0002a1d4) bg_main_sp_fs_cale_pane_ParamLimits

0xdf70,	// (0x0002a1d4) bg_main_sp_fs_cale_pane

0x12ca,	// (0x0001d52e) listscroll_cale_mrui_pane_ParamLimits

0x12ca,	// (0x0001d52e) listscroll_cale_mrui_pane

0xeeaf,	// (0x0002b113) listscroll_sp_fs_schedule_track_pane

0x12df,	// (0x0001d543) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x12df,	// (0x0001d543) main_sp_fs_ctrlbar_pane_cp01

0x12f2,	// (0x0001d556) main_sp_fs_ribbon_pane

0x12fa,	// (0x0001d55e) popup_sp_fs_cale_preview_window

0xa9ca,	// (0x00026c2e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa9ca,	// (0x00026c2e) list_single_sp_fs_schedule_track_pane

0xeeca,	// (0x0002b12e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeeca,	// (0x0002b12e) bg_sp_fs_highlight_list_pane_cp03

0xa9ec,	// (0x00026c50) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa9ec,	// (0x00026c50) list_single_sp_fs_schedule_track_pane_g1

0xa9f8,	// (0x00026c5c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa9f8,	// (0x00026c5c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0002c019) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0002c019) list_single_sp_fs_schedule_track_pane_g

0xaa04,	// (0x00026c68) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaa04,	// (0x00026c68) list_single_sp_fs_schedule_track_pane_t1

0xaa1c,	// (0x00026c80) sp_fs_schedule_track_pane_ParamLimits

0xaa1c,	// (0x00026c80) sp_fs_schedule_track_pane

0x130c,	// (0x0001d570) sp_fs_schedule_track_pane_g1

0x1314,	// (0x0001d578) sp_fs_schedule_track_pane_g2

0x131c,	// (0x0001d580) sp_fs_schedule_track_pane_g3

0x1324,	// (0x0001d588) sp_fs_schedule_track_pane_g4

0x132c,	// (0x0001d590) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0002c01e) sp_fs_schedule_track_pane_g

0xee2b,	// (0x0002b08f) bg_sp_fs_schedule_viewer_highlight_g1

0xc2e4,	// (0x00028548) bg_sp_fs_schedule_viewer_highlight_g2

0xee33,	// (0x0002b097) bg_sp_fs_schedule_viewer_highlight_g3

0xee3b,	// (0x0002b09f) bg_sp_fs_schedule_viewer_highlight_g4

0xf0c2,	// (0x0002b326) bg_sp_fs_schedule_viewer_highlight_g5

0xee4b,	// (0x0002b0af) bg_sp_fs_schedule_viewer_highlight_g6

0xee53,	// (0x0002b0b7) bg_sp_fs_schedule_viewer_highlight_g7

0xee5b,	// (0x0002b0bf) bg_sp_fs_schedule_viewer_highlight_g8

0xc2c4,	// (0x00028528) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0002c029) bg_sp_fs_schedule_viewer_highlight_g

0xb77b,	// (0x000279df) bg_main_sp_fs_ribbon_pane

0xaa2c,	// (0x00026c90) main_sp_fs_ribbon_pane_g1

0x1334,	// (0x0001d598) main_sp_fs_ribbon_pane_t1

0xaa35,	// (0x00026c99) main_sp_fs_ribbon_pane_t2

0x1343,	// (0x0001d5a7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0002c03c) main_sp_fs_ribbon_pane_t

0x1352,	// (0x0001d5b6) main_sp_fs_ribbon_scheduler_pane

0x135a,	// (0x0001d5be) bg_main_sp_fs_ribbon_pane_g1

0x1363,	// (0x0001d5c7) bg_main_sp_fs_ribbon_pane_g2

0x136c,	// (0x0001d5d0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0002c043) bg_main_sp_fs_ribbon_pane_g

0x1374,	// (0x0001d5d8) main_sp_fs_ribbon_scheduler_pane_g1

0x137d,	// (0x0001d5e1) main_sp_fs_ribbon_scheduler_pane_g2

0x1386,	// (0x0001d5ea) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0002c04a) main_sp_fs_ribbon_scheduler_pane_g

0x138f,	// (0x0001d5f3) list_cale_mrui_pane

0xaa44,	// (0x00026ca8) sp_fs_scroll_pane_cp07_ParamLimits

0xaa44,	// (0x00026ca8) sp_fs_scroll_pane_cp07

0xaa60,	// (0x00026cc4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xaa60,	// (0x00026cc4) bg_sp_fs_schedule_viewer_highlight

0x139c,	// (0x0001d600) list_single_sp_fs_schedule_track_pane_cp01

0x13a4,	// (0x0001d608) list_sp_fs_schedule_track_pane

0x13ac,	// (0x0001d610) sp_fs_scroll_pane_cp06_ParamLimits

0x13ac,	// (0x0001d610) sp_fs_scroll_pane_cp06

0xe381,	// (0x0002a5e5) bgmain_sp_fs_calendar_pane_g1

0xaa6d,	// (0x00026cd1) list_single_cale_mrui_pane_ParamLimits

0xaa6d,	// (0x00026cd1) list_single_cale_mrui_pane

0x13be,	// (0x0001d622) list_single_cale_mrui_row_pane_ParamLimits

0x13be,	// (0x0001d622) list_single_cale_mrui_row_pane

0x13cb,	// (0x0001d62f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x13cb,	// (0x0001d62f) list_single_cale_mrui_row_pane_g1

0x1410,	// (0x0001d674) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1410,	// (0x0001d674) list_single_cale_mrui_row_pane_t1

0xaa9a,	// (0x00026cfe) list_single_cale_mrui_row_pane_t2_ParamLimits

0xaa9a,	// (0x00026cfe) list_single_cale_mrui_row_pane_t2

0x1422,	// (0x0001d686) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1422,	// (0x0001d686) list_single_cale_mrui_row_pane_t3

0x1451,	// (0x0001d6b5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1451,	// (0x0001d6b5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0002c058) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0002c058) list_single_cale_mrui_row_pane_t

0xab00,	// (0x00026d64) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xab00,	// (0x00026d64) list_single_cmail_header_editor_pane_bg_cp01

0xab20,	// (0x00026d84) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xab20,	// (0x00026d84) list_single_cmail_header_editor_pane_bg_cp02

0xab3c,	// (0x00026da0) main_radioblah_text_pane_t1_ParamLimits

0xab3c,	// (0x00026da0) main_radioblah_text_pane_t1

0x1480,	// (0x0001d6e4) cam6_indi_pane_cp01

0x1488,	// (0x0001d6ec) cam6_mode_pane_cp01

0x1490,	// (0x0001d6f4) cam6_pano_pane

0x1499,	// (0x0001d6fd) cam6_zoom_pane_cp01

0x14a1,	// (0x0001d705) cam6_pano_image_pane

0x14ac,	// (0x0001d710) cam6_pano_pane_g1

0x0b05,	// (0x0001cd69) cam6_pano_pane_g2

0x14b5,	// (0x0001d719) cam6_pano_pane_g3

0x14be,	// (0x0001d722) cam6_pano_pane_g4

0xe970,	// (0x0002abd4) cam6_pano_pane_g5

0x14c7,	// (0x0001d72b) cam6_pano_pane_g6

0x14d1,	// (0x0001d735) cam6_pano_pane_g7

0x14d9,	// (0x0001d73d) cam6_pano_pane_g8

0x14e2,	// (0x0001d746) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0002c061) cam6_pano_pane_g

0xb77b,	// (0x000279df) main_browser_tag_pane

0x1216,	// (0x0001d47a) grid_navstr_albumart_pane

0x14ed,	// (0x0001d751) cell_navstr_albumart_pane_ParamLimits

0x14ed,	// (0x0001d751) cell_navstr_albumart_pane

0x150d,	// (0x0001d771) cell_navstr_albumart_pane_g1

0xdd81,	// (0x00029fe5) cell_navstr_albumart_pane_g2

0xdd91,	// (0x00029ff5) cell_navstr_albumart_pane_g3

0xdd89,	// (0x00029fed) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0002c074) cell_navstr_albumart_pane_g

0xab57,	// (0x00026dbb) bt_list_pane_ParamLimits

0xab57,	// (0x00026dbb) bt_list_pane

0xab77,	// (0x00026ddb) bt_list_pane_t1

0xab86,	// (0x00026dea) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0002c07d) bt_list_pane_t

0xb77b,	// (0x000279df) main_cale_prevew_pane

0xab95,	// (0x00026df9) popup_cale_preview_window_ParamLimits

0xab95,	// (0x00026df9) popup_cale_preview_window

0xbddd,	// (0x00028041) bg_popup_preview_window_pane_cp05_ParamLimits

0xbddd,	// (0x00028041) bg_popup_preview_window_pane_cp05

0x1515,	// (0x0001d779) list_cale_preview_pane_ParamLimits

0x1515,	// (0x0001d779) list_cale_preview_pane

0xabae,	// (0x00026e12) list_double_cale_preview_pane_ParamLimits

0xabae,	// (0x00026e12) list_double_cale_preview_pane

0xabc0,	// (0x00026e24) list_single_cale_preview_pane_ParamLimits

0xabc0,	// (0x00026e24) list_single_cale_preview_pane

0xabd6,	// (0x00026e3a) list_single_cale_preview_pane_g1

0xabde,	// (0x00026e42) list_single_cale_preview_pane_t1_ParamLimits

0xabde,	// (0x00026e42) list_single_cale_preview_pane_t1

0xabf3,	// (0x00026e57) list_double_cale_preview_pane_g1

0xabfb,	// (0x00026e5f) list_double_cale_preview_pane_t1_ParamLimits

0xabfb,	// (0x00026e5f) list_double_cale_preview_pane_t1

0xac10,	// (0x00026e74) list_double_cale_preview_pane_t2_ParamLimits

0xac10,	// (0x00026e74) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0002c082) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0002c082) list_double_cale_preview_pane_t

0xb77b,	// (0x000279df) main_ezdial_pane

0xbddd,	// (0x00028041) main_sp_fs_email_pane_ParamLimits

0xa1e1,	// (0x00026445) cmail_ddmenu_btn01_pane_ParamLimits

0xa1e1,	// (0x00026445) cmail_ddmenu_btn01_pane

0xa1fe,	// (0x00026462) cmail_ddmenu_btn02_pane_ParamLimits

0xa1fe,	// (0x00026462) cmail_ddmenu_btn02_pane

0xa21c,	// (0x00026480) cmail_ddmenu_btn03_pane_ParamLimits

0xa21c,	// (0x00026480) cmail_ddmenu_btn03_pane

0xa24a,	// (0x000264ae) main_sp_fs_ctrlbar_pane_ParamLimits

0xa260,	// (0x000264c4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa845,	// (0x00026aa9) list_cmail_body_pane_ParamLimits

0x1113,	// (0x0001d377) bg_button_pane_cp12

0x1128,	// (0x0001d38c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1128,	// (0x0001d38c) list_single_cmail_header_detail_pane_g3

0x1171,	// (0x0001d3d5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1171,	// (0x0001d3d5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0002c005) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0002c005) list_single_cmail_header_detail_pane_t

0x127e,	// (0x0001d4e2) phacti_term_pane_t2_ParamLimits

0x127e,	// (0x0001d4e2) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0002c00f) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0002c00f) phacti_term_pane_t

0x1521,	// (0x0001d785) aid_size_list_single_double

0xac28,	// (0x00026e8c) popup_ezdial_listscroll_window

0xac49,	// (0x00026ead) popup_number_entry_window_cp01

0xc08b,	// (0x000282ef) bg_popup_call_pane_cp09

0x152d,	// (0x0001d791) ezdial_list_pane

0x1535,	// (0x0001d799) scroll_pane_cp23

0xe166,	// (0x0002a3ca) bg_button_pane_cp028_ParamLimits

0xe166,	// (0x0002a3ca) bg_button_pane_cp028

0xac57,	// (0x00026ebb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xac57,	// (0x00026ebb) cmail_ddmenu_btn01_pane_g1

0xac67,	// (0x00026ecb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xac67,	// (0x00026ecb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0002c087) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0002c087) cmail_ddmenu_btn01_pane_g

0x154f,	// (0x0001d7b3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x154f,	// (0x0001d7b3) cmail_ddmenu_btn01_pane_t1

0xdf70,	// (0x0002a1d4) bg_button_pane_cp029_ParamLimits

0xdf70,	// (0x0002a1d4) bg_button_pane_cp029

0xac67,	// (0x00026ecb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xac67,	// (0x00026ecb) cmail_ddmenu_btn02_pane_g1

0xac80,	// (0x00026ee4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xac80,	// (0x00026ee4) cmail_ddmenu_btn02_pane_t1

0xeeca,	// (0x0002b12e) bg_button_pane_cp031_ParamLimits

0xeeca,	// (0x0002b12e) bg_button_pane_cp031

0xac67,	// (0x00026ecb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xac67,	// (0x00026ecb) cmail_ddmenu_btn03_pane_g1

0xac80,	// (0x00026ee4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xac80,	// (0x00026ee4) cmail_ddmenu_btn03_pane_t1

0x84c4,	// (0x00024728) cell_dialer2_keypad_pane_t1_ParamLimits

0x84de,	// (0x00024742) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x84de,	// (0x00024742) cell_dialer2_keypad_pane_t1_copy1

0x9a98,	// (0x00025cfc) ncimui_group_button_pane

0xbddd,	// (0x00028041) main_sp_fs_calendar_pane_ParamLimits

0xa86c,	// (0x00026ad0) list_single_cmail_header_caption_pane_ParamLimits

0x12c1,	// (0x0001d525) aid_recal_txt_sm_pane

0xb77b,	// (0x000279df) mian_recal_day_pane

0x12fa,	// (0x0001d55e) popup_sp_fs_cale_preview_window_ParamLimits

0x1564,	// (0x0001d7c8) list_recal_day_pane

0x15a6,	// (0x0001d80a) list_single_recal_day_pane_ParamLimits

0x15a6,	// (0x0001d80a) list_single_recal_day_pane

0x15b8,	// (0x0001d81c) list_single_recal_day_pane_g1_ParamLimits

0x15b8,	// (0x0001d81c) list_single_recal_day_pane_g1

0x15c4,	// (0x0001d828) list_single_recal_day_pane_g2_ParamLimits

0x15c4,	// (0x0001d828) list_single_recal_day_pane_g2

0x15d0,	// (0x0001d834) list_single_recal_day_pane_g3_ParamLimits

0x15d0,	// (0x0001d834) list_single_recal_day_pane_g3

0xaca4,	// (0x00026f08) list_single_recal_day_pane_g4_ParamLimits

0xaca4,	// (0x00026f08) list_single_recal_day_pane_g4

0x15dc,	// (0x0001d840) list_single_recal_day_pane_g5_ParamLimits

0x15dc,	// (0x0001d840) list_single_recal_day_pane_g5

0x15e8,	// (0x0001d84c) list_single_recal_day_pane_g6_ParamLimits

0x15e8,	// (0x0001d84c) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0002c096) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0002c096) list_single_recal_day_pane_g

0x15fc,	// (0x0001d860) list_single_recal_day_pane_t1

0x160e,	// (0x0001d872) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0002c0a1) list_single_recal_day_pane_t

0xacbc,	// (0x00026f20) ncimui_query_button_pane_ParamLimits

0xacbc,	// (0x00026f20) ncimui_query_button_pane

0xaccc,	// (0x00026f30) ncimui_query_button_pane_t1_ParamLimits

0xaccc,	// (0x00026f30) ncimui_query_button_pane_t1

0x1620,	// (0x0001d884) ncimui_query_button_pane_t2_ParamLimits

0x1620,	// (0x0001d884) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0002c0a6) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0002c0a6) ncimui_query_button_pane_t

0xacdf,	// (0x00026f43) query_button_pane_ParamLimits

0xacdf,	// (0x00026f43) query_button_pane

0xb77b,	// (0x000279df) bg_button_pane_cp0028

0x1633,	// (0x0001d897) query_button_pane_t1

0x3147,	// (0x0001f3ab) main_tport_pane_ParamLimits

0xa74f,	// (0x000269b3) bg_popup_window_pane_cp01_ParamLimits

0xa74f,	// (0x000269b3) bg_popup_window_pane_cp01

0xa75d,	// (0x000269c1) heading_pane_cp08_ParamLimits

0xa75d,	// (0x000269c1) heading_pane_cp08

0xa76b,	// (0x000269cf) heading_pane_cp07_ParamLimits

0xa76b,	// (0x000269cf) heading_pane_cp07

0xa7da,	// (0x00026a3e) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0002bff2) cell_tport_appsw_pane_g

0xcc58,	// (0x00028ebc) input_candi_list_open_g1

0xc4a7,	// (0x0002870b) list_cale_time_pane_g6_ParamLimits

0xc4a7,	// (0x0002870b) list_cale_time_pane_g6

0x76e0,	// (0x00023944) aid_size_touch_calib_1_ParamLimits

0x76e0,	// (0x00023944) aid_size_touch_calib_1

0x76ec,	// (0x00023950) aid_size_touch_calib_2_ParamLimits

0x76ec,	// (0x00023950) aid_size_touch_calib_2

0x76fa,	// (0x0002395e) aid_size_touch_calib_3_ParamLimits

0x76fa,	// (0x0002395e) aid_size_touch_calib_3

0x770a,	// (0x0002396e) aid_size_touch_calib_4_ParamLimits

0x770a,	// (0x0002396e) aid_size_touch_calib_4

0x7718,	// (0x0002397c) main_touch_calib_button_group_pane_ParamLimits

0x7718,	// (0x0002397c) main_touch_calib_button_group_pane

0x7726,	// (0x0002398a) main_touch_calib_pane_g1_ParamLimits

0x7732,	// (0x00023996) main_touch_calib_pane_g2_ParamLimits

0x773e,	// (0x000239a2) main_touch_calib_pane_g3_ParamLimits

0x774a,	// (0x000239ae) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002b9b5) main_touch_calib_pane_g_ParamLimits

0x7756,	// (0x000239ba) main_touch_calib_pane_t1_ParamLimits

0x776f,	// (0x000239d3) main_touch_calib_pane_t2_ParamLimits

0x7788,	// (0x000239ec) main_touch_calib_pane_t3_ParamLimits

0x779e,	// (0x00023a02) main_touch_calib_pane_t4_ParamLimits

0x77b4,	// (0x00023a18) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002b9be) main_touch_calib_pane_t_ParamLimits

0xe710,	// (0x0002a974) list_single_fp_cale_pane_g3_ParamLimits

0xe710,	// (0x0002a974) list_single_fp_cale_pane_g3

0x312b,	// (0x0001f38f) bg_button_pane_cp012_ParamLimits

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp03_ParamLimits

0x40a2,	// (0x00020306) cell_vitu2_function_top_pane_g1_ParamLimits

0x312b,	// (0x0001f38f) bg_vkb2_func_pane_cp04_ParamLimits

0x9a20,	// (0x00025c84) main_ncimui_button_group_pane_ParamLimits

0x9a20,	// (0x00025c84) main_ncimui_button_group_pane

0x9a86,	// (0x00025cea) main_ncimui_pane_t3_ParamLimits

0x9a86,	// (0x00025cea) main_ncimui_pane_t3

0x122c,	// (0x0001d490) phacti_button_group_pane

0x1521,	// (0x0001d785) aid_size_list_single_double_ParamLimits

0xac28,	// (0x00026e8c) popup_ezdial_listscroll_window_ParamLimits

0xac49,	// (0x00026ead) popup_number_entry_window_cp01_ParamLimits

0xacec,	// (0x00026f50) phacti_button_pane_ParamLimits

0xacec,	// (0x00026f50) phacti_button_pane

0xb77b,	// (0x000279df) bg_button_pane_cp14

0x1641,	// (0x0001d8a5) phacti_button_pane_t1

0xacfd,	// (0x00026f61) main_touch_calib_button_pane_ParamLimits

0xacfd,	// (0x00026f61) main_touch_calib_button_pane

0xbec6,	// (0x0002812a) bg_button_pane_cp18_ParamLimits

0xbec6,	// (0x0002812a) bg_button_pane_cp18

0x164f,	// (0x0001d8b3) main_touch_calib_button_pane_t1_ParamLimits

0x164f,	// (0x0001d8b3) main_touch_calib_button_pane_t1

0x1665,	// (0x0001d8c9) main_touch_calib_button_pane_t2_ParamLimits

0x1665,	// (0x0001d8c9) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0002c0ab) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0002c0ab) main_touch_calib_button_pane_t

0xb77b,	// (0x000279df) cell_ncimui_button_pane

0xb77b,	// (0x000279df) bg_button_pane_cp032

0x1683,	// (0x0001d8e7) cell_ncimui_button_pane_t1

0x39a6,	// (0x0001fc0a) image3_infobar_pane_ParamLimits

0x39a6,	// (0x0001fc0a) image3_infobar_pane

0x9e43,	// (0x000260a7) fs_bigclock_status_pane_ParamLimits

0x9e43,	// (0x000260a7) fs_bigclock_status_pane

0x9e50,	// (0x000260b4) main_fs_bigclock_clock_pane_ParamLimits

0x9e50,	// (0x000260b4) main_fs_bigclock_clock_pane

0x9e64,	// (0x000260c8) main_fs_bigclock_indi_pane_ParamLimits

0x9e64,	// (0x000260c8) main_fs_bigclock_indi_pane

0x9e8c,	// (0x000260f0) main_fs_bigclock_swipe_pane_ParamLimits

0x9e8c,	// (0x000260f0) main_fs_bigclock_swipe_pane

0xb77b,	// (0x000279df) main_fs_clock_dumped_data

0x0c12,	// (0x0001ce76) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0c12,	// (0x0001ce76) list_single_fs_bigclock_indicator_pane_g1

0x0c2d,	// (0x0001ce91) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0c2d,	// (0x0001ce91) list_single_fs_bigclock_indicator_pane_g2

0x0c47,	// (0x0001ceab) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0c47,	// (0x0001ceab) list_single_fs_bigclock_indicator_pane_g3

0x0c61,	// (0x0001cec5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0c61,	// (0x0001cec5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0002bed8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0002bed8) list_single_fs_bigclock_indicator_pane_g

0x0c8c,	// (0x0001cef0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0c8c,	// (0x0001cef0) list_single_fs_bigclock_indicator_pane_t1

0x0cb4,	// (0x0001cf18) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0cb4,	// (0x0001cf18) list_single_fs_bigclock_indicator_pane_t2

0x0cdc,	// (0x0001cf40) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0cdc,	// (0x0001cf40) list_single_fs_bigclock_indicator_pane_t3

0x0d04,	// (0x0001cf68) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0d04,	// (0x0001cf68) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0002bee3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0002bee3) list_single_fs_bigclock_indicator_pane_t

0x1691,	// (0x0001d8f5) image3_infobar_fav_pane_ParamLimits

0x1691,	// (0x0001d8f5) image3_infobar_fav_pane

0x16a1,	// (0x0001d905) image3_infobar_loc_pane_ParamLimits

0x16a1,	// (0x0001d905) image3_infobar_loc_pane

0x16b5,	// (0x0001d919) image3_infobar_time_pane_ParamLimits

0x16b5,	// (0x0001d919) image3_infobar_time_pane

0xe381,	// (0x0002a5e5) image3_infobar_time_pane_g1

0x16c5,	// (0x0001d929) image3_infobar_time_pane_t1

0xe381,	// (0x0002a5e5) image3_infobar_loc_pane_g1

0x16d3,	// (0x0001d937) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0002c0b0) image3_infobar_loc_pane_g

0x16db,	// (0x0001d93f) image3_infobar_loc_pane_t1

0xe381,	// (0x0002a5e5) image3_infobar_fav_pane_g1

0x16e9,	// (0x0001d94d) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0002c0b5) image3_infobar_fav_pane_g

0x16f1,	// (0x0001d955) fs_bigclock_status_battery_pane

0x16fa,	// (0x0001d95e) fs_bigclock_status_signal_pane

0x1703,	// (0x0001d967) fs_bigclock_status_title_pane

0x170c,	// (0x0001d970) fs_bigclock_status_signal_pane_g1

0x1715,	// (0x0001d979) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0002c0ba) fs_bigclock_status_signal_pane_g

0x171d,	// (0x0001d981) fs_bigclock_status_battery_pane_g1

0x1726,	// (0x0001d98a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0002c0bf) fs_bigclock_status_battery_pane_g

0x172e,	// (0x0001d992) fs_bigclock_status_title_pane_t1

0xad0d,	// (0x00026f71) main_fs_bigclock_clock_pane_g1

0xad0d,	// (0x00026f71) main_fs_bigclock_clock_pane_g2

0xad1a,	// (0x00026f7e) main_fs_bigclock_clock_pane_g3

0xad1a,	// (0x00026f7e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0002c0c4) main_fs_bigclock_clock_pane_g

0xad26,	// (0x00026f8a) main_fs_bigclock_clock_pane_t1

0xad39,	// (0x00026f9d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0002c0cd) main_fs_bigclock_clock_pane_t

0x173c,	// (0x0001d9a0) list_single_fs_bigclock_indicator_pane_ParamLimits

0x173c,	// (0x0001d9a0) list_single_fs_bigclock_indicator_pane

0x174d,	// (0x0001d9b1) list_single_fs_bigclock_pane_ParamLimits

0x174d,	// (0x0001d9b1) list_single_fs_bigclock_pane

0x1773,	// (0x0001d9d7) main_fs_bigclock_indicator_pane_t1

0x1782,	// (0x0001d9e6) list_single_fs_bigclock_pane_g1

0x178a,	// (0x0001d9ee) list_single_fs_bigclock_pane_t1

0xe381,	// (0x0002a5e5) main_fs_bigclock_swipe_pane_g1

0x17cd,	// (0x0001da31) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0002c0de) main_fs_bigclock_swipe_pane_g

0x17d5,	// (0x0001da39) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x17d5,	// (0x0001da39) main_fs_bigclock_swipe_pane_t1

0x61e0,	// (0x00022444) call_type_pane_ParamLimits

0xb77b,	// (0x000279df) main_btmg_pane

0x13f7,	// (0x0001d65b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x13f7,	// (0x0001d65b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0002c051) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0002c051) list_single_cale_mrui_row_pane_g

0x158d,	// (0x0001d7f1) list_recal_vselct_arw_lo_pane

0x1595,	// (0x0001d7f9) list_recal_vselct_arw_up_pane

0x159d,	// (0x0001d801) list_recal_vselct_pane

0xad90,	// (0x00026ff4) btmg_button_pane

0xad9c,	// (0x00027000) main_btmg_pane_g1

0xb77b,	// (0x000279df) bg_button_pane_cp044

0x17f2,	// (0x0001da56) btmg_button_pane_t1

0xdf5c,	// (0x0002a1c0) aid_listscroll_gen

0xbddd,	// (0x00028041) main_cntbar_detail_pane

0x10f5,	// (0x0001d359) list_cmail_folder_pane

0xef04,	// (0x0002b168) sp_fs_scroll_pane_cp03_ParamLimits

0xa86c,	// (0x00026ad0) list_single_fs_dyc_pane_cp01_ParamLimits

0xa86c,	// (0x00026ad0) list_single_fs_dyc_pane_cp01

0x1800,	// (0x0001da64) aid_size_cmail_indent

0x1809,	// (0x0001da6d) list_single_dyc_row_pane_cp01

0xadc4,	// (0x00027028) cntbar_detail_list_pane_ParamLimits

0xadc4,	// (0x00027028) cntbar_detail_list_pane

0xadfe,	// (0x00027062) main_cntbar_detail_cont_pane_ParamLimits

0xadfe,	// (0x00027062) main_cntbar_detail_cont_pane

0x60f9,	// (0x0002235d) scroll_pane_cp032_ParamLimits

0x60f9,	// (0x0002235d) scroll_pane_cp032

0xae0a,	// (0x0002706e) cntbar_detail_list_event_pane_ParamLimits

0xae0a,	// (0x0002706e) cntbar_detail_list_event_pane

0xadd0,	// (0x00027034) cntbar_detail_list_shct_pane

0xc332,	// (0x00028596) aid_list_gen

0x1812,	// (0x0001da76) aid_scroll

0x181b,	// (0x0001da7f) aid_size_touch_scroll_bar

0x0e14,	// (0x0001d078) aid_list_double

0xae1e,	// (0x00027082) aid_list_single

0x923b,	// (0x0002549f) aid_list_single_lg

0xae27,	// (0x0002708b) aid_list_z_g_a_sm

0xae2f,	// (0x00027093) aid_list_z_g_d

0xae37,	// (0x0002709b) aid_txt_z_prm

0xae45,	// (0x000270a9) aid_txt_z_prm_cp01

0xae53,	// (0x000270b7) aid_txt_z_sec

0xae61,	// (0x000270c5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xae61,	// (0x000270c5) main_cntbar_detail_cont_pane_g1

0xae6e,	// (0x000270d2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xae6e,	// (0x000270d2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0002c0e3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0002c0e3) main_cntbar_detail_cont_pane_g

0x1824,	// (0x0001da88) main_cntbar_detail_cont_pane_t1

0x1832,	// (0x0001da96) main_cntbar_detail_cont_pane_t2

0x1840,	// (0x0001daa4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0002c0e8) main_cntbar_detail_cont_pane_t

0xae7a,	// (0x000270de) cell_cntbar_detail_list_shct_pane_ParamLimits

0xae7a,	// (0x000270de) cell_cntbar_detail_list_shct_pane

0x184e,	// (0x0001dab2) cntbar_detail_list_shct_pane_g1

0x1857,	// (0x0001dabb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0002c0ef) cntbar_detail_list_shct_pane_g

0xae8e,	// (0x000270f2) cntbar_detail_list_event_pane_g1_ParamLimits

0xae8e,	// (0x000270f2) cntbar_detail_list_event_pane_g1

0xae9a,	// (0x000270fe) cntbar_detail_list_event_pane_g2_ParamLimits

0xae9a,	// (0x000270fe) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0002c0f4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0002c0f4) cntbar_detail_list_event_pane_g

0xaf06,	// (0x0002716a) cntbar_detail_list_event_pane_t1_ParamLimits

0xaf06,	// (0x0002716a) cntbar_detail_list_event_pane_t1

0xaf1b,	// (0x0002717f) cntbar_detail_list_event_pane_t2_ParamLimits

0xaf1b,	// (0x0002717f) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0002c101) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0002c101) cntbar_detail_list_event_pane_t

0xe381,	// (0x0002a5e5) cell_cntbar_detail_list_shct_pane_g1

0xcab7,	// (0x00028d1b) navi_pane_mv_g3

0xbddd,	// (0x00028041) main_cntbar_detail_pane_ParamLimits

0xb77b,	// (0x000279df) main_notif_wgt_pane

0x36e7,	// (0x0001f94b) aid_tch_main_mp4_pane_g4

0x391c,	// (0x0001fb80) popup_slider_window_cp02

0x1583,	// (0x0001d7e7) list_recal_day_event_pane

0xada4,	// (0x00027008) cntbar_detail_btn_pane_ParamLimits

0xada4,	// (0x00027008) cntbar_detail_btn_pane

0xadb4,	// (0x00027018) cntbar_detail_btn_pane_cp01_ParamLimits

0xadb4,	// (0x00027018) cntbar_detail_btn_pane_cp01

0xadd0,	// (0x00027034) cntbar_detail_list_shct_pane_ParamLimits

0xaddc,	// (0x00027040) cntbar_detail_pane_g1_ParamLimits

0xaddc,	// (0x00027040) cntbar_detail_pane_g1

0xade8,	// (0x0002704c) cntbar_detail_pane_t1_ParamLimits

0xade8,	// (0x0002704c) cntbar_detail_pane_t1

0xaea6,	// (0x0002710a) cntbar_detail_list_event_pane_g3_ParamLimits

0xaea6,	// (0x0002710a) cntbar_detail_list_event_pane_g3

0xaebe,	// (0x00027122) cntbar_detail_list_event_pane_g4_ParamLimits

0xaebe,	// (0x00027122) cntbar_detail_list_event_pane_g4

0xaed6,	// (0x0002713a) cntbar_detail_list_event_pane_g5_ParamLimits

0xaed6,	// (0x0002713a) cntbar_detail_list_event_pane_g5

0xaeee,	// (0x00027152) cntbar_detail_list_event_pane_g6_ParamLimits

0xaeee,	// (0x00027152) cntbar_detail_list_event_pane_g6

0xaf30,	// (0x00027194) cntbar_detail_list_event_pane_t3_ParamLimits

0xaf30,	// (0x00027194) cntbar_detail_list_event_pane_t3

0xaf42,	// (0x000271a6) popup_notif_wgt_window_ParamLimits

0xaf42,	// (0x000271a6) popup_notif_wgt_window

0xaf52,	// (0x000271b6) popup_submenu_window_cp01_ParamLimits

0xaf52,	// (0x000271b6) popup_submenu_window_cp01

0xc08b,	// (0x000282ef) bg_popup_window_pane_cp10

0x1860,	// (0x0001dac4) listscroll_notif_wgt_pane

0x1872,	// (0x0001dad6) list_notif_wgt_window

0x187b,	// (0x0001dadf) scroll_pane_cp033

0xaf64,	// (0x000271c8) list_notif_wgt_row_pane_ParamLimits

0xaf64,	// (0x000271c8) list_notif_wgt_row_pane

0x1884,	// (0x0001dae8) aid_size_list_notif_wgt_del

0x1891,	// (0x0001daf5) list_notif_wgt_row_pane_g1

0x189d,	// (0x0001db01) list_notif_wgt_row_pane_g2

0x18ac,	// (0x0001db10) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0002c108) list_notif_wgt_row_pane_g

0x18b9,	// (0x0001db1d) list_notif_wgt_row_pane_t1

0x18cf,	// (0x0001db33) list_notif_wgt_row_pane_t2

0x18e1,	// (0x0001db45) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0002c10f) list_notif_wgt_row_pane_t

0x001f,	// (0x0001c283) list_recal_day_event_pane_g1

0x18f3,	// (0x0001db57) list_recal_day_event_pane_t1

0xb77b,	// (0x000279df) bg_button_pane_cp045

0xaf76,	// (0x000271da) cntbar_detail_btn_pane_t1

0xdf70,	// (0x0002a1d4) main_callh_pane_ParamLimits

0xdf70,	// (0x0002a1d4) main_callh_pane

0xb77b,	// (0x000279df) main_coverflow0_pane

0xb77b,	// (0x000279df) main_wgtman_pane

0x9ea4,	// (0x00026108) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ea4,	// (0x00026108) main_fs_bigclock_unlock_btn_pane

0xa7d2,	// (0x00026a36) bg_button_pane_cp16

0xa7e2,	// (0x00026a46) cell_tport_appsw_pane_g3

0xaf84,	// (0x000271e8) cf0_flow_pane_ParamLimits

0xaf84,	// (0x000271e8) cf0_flow_pane

0x1902,	// (0x0001db66) listscroll_cf0_pane

0x190d,	// (0x0001db71) main_cf0_pane_g1

0xaf93,	// (0x000271f7) main_cf0_pane_t1_ParamLimits

0xaf93,	// (0x000271f7) main_cf0_pane_t1

0xafa7,	// (0x0002720b) main_cf0_pane_t2_ParamLimits

0xafa7,	// (0x0002720b) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0002c11b) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0002c11b) main_cf0_pane_t

0x191f,	// (0x0001db83) scroll_pane_cp11

0xafbb,	// (0x0002721f) cf0_flow_pane_g1

0xafc3,	// (0x00027227) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0002c120) cf0_flow_pane_g

0xafcb,	// (0x0002722f) cf0_flow_pane_t1

0xb77b,	// (0x000279df) main_call6_pane

0xb77b,	// (0x000279df) main_calllock_pane

0xafd9,	// (0x0002723d) call6_btn_grp_pane_ParamLimits

0xafd9,	// (0x0002723d) call6_btn_grp_pane

0xafe8,	// (0x0002724c) call6_pane_g1_ParamLimits

0xafe8,	// (0x0002724c) call6_pane_g1

0xaff7,	// (0x0002725b) popup_call6_1st_window_ParamLimits

0xaff7,	// (0x0002725b) popup_call6_1st_window

0xb005,	// (0x00027269) popup_call6_2nd_window_ParamLimits

0xb005,	// (0x00027269) popup_call6_2nd_window

0xb013,	// (0x00027277) cell_call6_btn_pane_ParamLimits

0xb013,	// (0x00027277) cell_call6_btn_pane

0xc08b,	// (0x000282ef) bg_popup_call2_in_pane_cp03

0x192a,	// (0x0001db8e) popup_call6_1st_window_g1

0x1932,	// (0x0001db96) popup_call6_1st_window_g2

0x193a,	// (0x0001db9e) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0002c125) popup_call6_1st_window_g

0x1942,	// (0x0001dba6) popup_call6_1st_window_t1

0x1951,	// (0x0001dbb5) popup_call6_1st_window_t2

0x1961,	// (0x0001dbc5) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0002c12c) popup_call6_1st_window_t

0xc08b,	// (0x000282ef) bg_popup_call2_in_pane_cp04

0x192a,	// (0x0001db8e) popup_call6_2nd_window_g1

0x1932,	// (0x0001db96) popup_call6_2nd_window_g2

0x193a,	// (0x0001db9e) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0002c125) popup_call6_2nd_window_g

0x1942,	// (0x0001dba6) popup_call6_2nd_window_t1

0xb77b,	// (0x000279df) bg_button_pane_cp15

0x1971,	// (0x0001dbd5) cell_call6_btn_pane_g1

0x197a,	// (0x0001dbde) cell_call6_btn_pane_t1

0xb022,	// (0x00027286) listscroll_wgtman_pane_ParamLimits

0xb022,	// (0x00027286) listscroll_wgtman_pane

0xb03e,	// (0x000272a2) wgtman_btn_pane_ParamLimits

0xb03e,	// (0x000272a2) wgtman_btn_pane

0xc8a4,	// (0x00028b08) aid_scroll_copy1

0x1989,	// (0x0001dbed) list_wgtman_pane

0xb073,	// (0x000272d7) wgtman_btn_pane_g1_ParamLimits

0xb073,	// (0x000272d7) wgtman_btn_pane_g1

0xb09b,	// (0x000272ff) wgtman_btn_pane_t1_ParamLimits

0xb09b,	// (0x000272ff) wgtman_btn_pane_t1

0x1993,	// (0x0001dbf7) wgtman_btn_pane_t2_ParamLimits

0x1993,	// (0x0001dbf7) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0002c133) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0002c133) wgtman_btn_pane_t

0xb0d2,	// (0x00027336) listrow_wgtman_pane_ParamLimits

0xb0d2,	// (0x00027336) listrow_wgtman_pane

0xb0ed,	// (0x00027351) listrow_wgtman_pane_g1

0xb0fa,	// (0x0002735e) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0002c138) listrow_wgtman_pane_g

0xb118,	// (0x0002737c) listrow_wgtman_pane_t1

0xb130,	// (0x00027394) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0002c13d) listrow_wgtman_pane_t

0xb156,	// (0x000273ba) wait_bar_pane_cp09

0x19aa,	// (0x0001dc0e) main_calllock_btn_pane

0x19b4,	// (0x0001dc18) main_calllock_pane_g1

0xb77b,	// (0x000279df) bg_button_pane_cp17

0x19c0,	// (0x0001dc24) main_calllock_btn_pane_g1

0x19c9,	// (0x0001dc2d) main_calllock_btn_pane_t1

0xb77b,	// (0x000279df) main_dialer3_pane

0xb77b,	// (0x000279df) main_fmrd2_pane

0xe381,	// (0x0002a5e5) main_fs_bigclock_unlock_btn_pane_g1

0xb170,	// (0x000273d4) main_fs_bigclock_unlock_btn_pane_t1

0xb17e,	// (0x000273e2) area_fmrd2_info_pane_ParamLimits

0xb17e,	// (0x000273e2) area_fmrd2_info_pane

0xb18c,	// (0x000273f0) area_fmrd2_visual_pane_ParamLimits

0xb18c,	// (0x000273f0) area_fmrd2_visual_pane

0xb19a,	// (0x000273fe) fmrd2_indi_pane_ParamLimits

0xb19a,	// (0x000273fe) fmrd2_indi_pane

0xb1a7,	// (0x0002740b) area_fmrd2_visual_pane_g1

0xb1af,	// (0x00027413) area_fmrd2_visual_pane_t1

0xb1bf,	// (0x00027423) area_fmrd2_visual_pane_t2

0xb1cf,	// (0x00027433) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0002c147) area_fmrd2_visual_pane_t

0xb1df,	// (0x00027443) area_fmrd2_info_pane_g1

0xb1e7,	// (0x0002744b) area_fmrd2_info_pane_t1

0xb1f7,	// (0x0002745b) area_fmrd2_info_pane_t2

0xb207,	// (0x0002746b) area_fmrd2_info_pane_t3

0xb217,	// (0x0002747b) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0002c14e) area_fmrd2_info_pane_t

0xb225,	// (0x00027489) fmrd2_indi_pane_t1

0xb235,	// (0x00027499) fmrd2_indi_pane_t2

0xb245,	// (0x000274a9) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0002c157) fmrd2_indi_pane_t

0x0c70,	// (0x0001ced4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0c70,	// (0x0001ced4) list_single_fs_bigclock_indicator_pane_g5

0x0d21,	// (0x0001cf85) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0d21,	// (0x0001cf85) list_single_fs_bigclock_indicator_pane_t5

0xa97d,	// (0x00026be1) aid_cell_bcale_month_pane_ParamLimits

0xa97d,	// (0x00026be1) aid_cell_bcale_month_pane

0xa99b,	// (0x00026bff) bcale_month_pane_ParamLimits

0xa99b,	// (0x00026bff) bcale_month_pane

0xa9b9,	// (0x00026c1d) bcale_preview_pane_ParamLimits

0xa9b9,	// (0x00026c1d) bcale_preview_pane

0x178a,	// (0x0001d9ee) list_single_fs_bigclock_pane_t1_ParamLimits

0x17a9,	// (0x0001da0d) list_single_fs_bigclock_pane_t2_ParamLimits

0x17a9,	// (0x0001da0d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0002c0d9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0002c0d9) list_single_fs_bigclock_pane_t

0xb168,	// (0x000273cc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0002c142) main_fs_bigclock_unlock_btn_pane_g

0xb253,	// (0x000274b7) aid_dia3_key_size_ParamLimits

0xb253,	// (0x000274b7) aid_dia3_key_size

0xb25f,	// (0x000274c3) aid_dia3_listrow_size_ParamLimits

0xb25f,	// (0x000274c3) aid_dia3_listrow_size

0xb26f,	// (0x000274d3) dia3_keypad_fun_pane_ParamLimits

0xb26f,	// (0x000274d3) dia3_keypad_fun_pane

0xb281,	// (0x000274e5) dia3_keypad_num_pane_ParamLimits

0xb281,	// (0x000274e5) dia3_keypad_num_pane

0xb293,	// (0x000274f7) dia3_listscroll_pane_ParamLimits

0xb293,	// (0x000274f7) dia3_listscroll_pane

0xb2a1,	// (0x00027505) dia3_numentry_pane_ParamLimits

0xb2a1,	// (0x00027505) dia3_numentry_pane

0x19d8,	// (0x0001dc3c) dia3_list_pane

0x19e3,	// (0x0001dc47) scroll_pane_cp12

0xb77b,	// (0x000279df) bg_dia3_numentry_pane

0xb2af,	// (0x00027513) dia3_numentry_pane_t1

0xb2be,	// (0x00027522) cell_dia3_key_num_pane

0xb2c6,	// (0x0002752a) cell_dia3_key0_fun_pane_ParamLimits

0xb2c6,	// (0x0002752a) cell_dia3_key0_fun_pane

0xb2d3,	// (0x00027537) cell_dia3_key1_fun_pane_ParamLimits

0xb2d3,	// (0x00027537) cell_dia3_key1_fun_pane

0xb2e0,	// (0x00027544) dia3_listrow_pane

0x09c3,	// (0x0001cc27) bg_dia3_numentry_pane_g1

0xb77b,	// (0x000279df) bg_button_pane_cp21

0x19ee,	// (0x0001dc52) cell_dia3_key_num_pane_t1

0x19fc,	// (0x0001dc60) cell_dia3_key_num_pane_t2

0x1a0b,	// (0x0001dc6f) cell_dia3_key_num_pane_t3

0x1a1a,	// (0x0001dc7e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0002c15e) cell_dia3_key_num_pane_t

0xb77b,	// (0x000279df) bg_button_pane_cp19

0xb2ed,	// (0x00027551) cell_dia3_key0_fun_pane_g1

0xb77b,	// (0x000279df) bg_button_pane_cp20

0xb2f5,	// (0x00027559) cell_dia3_key1_fun_pane_g1

0xb2fd,	// (0x00027561) area_left_week_number_pane

0xb310,	// (0x00027574) area_top_day_name_pane

0xb31e,	// (0x00027582) frame_month_view_pane

0x1a29,	// (0x0001dc8d) grid_month_view_pane

0xb333,	// (0x00027597) cell_top_day_name_pane_ParamLimits

0xb333,	// (0x00027597) cell_top_day_name_pane

0xb34d,	// (0x000275b1) cell_area_left_week_number_pane_ParamLimits

0xb34d,	// (0x000275b1) cell_area_left_week_number_pane

0xb370,	// (0x000275d4) cell_month_view_pane_ParamLimits

0xb370,	// (0x000275d4) cell_month_view_pane

0x1a37,	// (0x0001dc9b) frm_month_g1

0xb39c,	// (0x00027600) frm_month_g2

0xb3ad,	// (0x00027611) frm_month_g3

0xb3be,	// (0x00027622) frm_month_g4

0xb3cf,	// (0x00027633) frm_month_g5

0xb3e2,	// (0x00027646) frm_month_g6

0xb3f5,	// (0x00027659) frm_month_g7

0x1a44,	// (0x0001dca8) frm_month_g8

0xb408,	// (0x0002766c) frm_month_g9

0xb415,	// (0x00027679) frm_month_g10

0xb422,	// (0x00027686) frm_month_g11

0xb42f,	// (0x00027693) frm_month_g12

0xb43c,	// (0x000276a0) frm_month_g13

0xb449,	// (0x000276ad) frm_month_g14

0xb458,	// (0x000276bc) frm_month_g15

0xb467,	// (0x000276cb) frm_month_g16

0x000f,

0xff03,	// (0x0002c167) frm_month_g

0x1a51,	// (0x0001dcb5) cell_top_day_name_pane_t1

0xb476,	// (0x000276da) cell_area_left_week_number_pane_g1

0xb485,	// (0x000276e9) cell_area_left_week_number_pane_t1

0xe5e4,	// (0x0002a848) cell_month_view_pane_g1

0xb49b,	// (0x000276ff) cell_month_view_pane_t1

0xb77b,	// (0x000279df) main_fps_pane

0x0f1a,	// (0x0001d17e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0f1a,	// (0x0001d17e) cmail_ddmenu_btn02_pane_cp1

0x0f36,	// (0x0001d19a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0f36,	// (0x0001d19a) cmail_ddmenu_btn02_pane_cp2

0xac73,	// (0x00026ed7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xac73,	// (0x00026ed7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0002c08c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0002c08c) cmail_ddmenu_btn02_pane_g

0xac92,	// (0x00026ef6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xac92,	// (0x00026ef6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0002c091) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0002c091) cmail_ddmenu_btn02_pane_t

0xb4b1,	// (0x00027715) fps_text_pane_ParamLimits

0xb4b1,	// (0x00027715) fps_text_pane

0xb4be,	// (0x00027722) main_fps_pane_g1_ParamLimits

0xb4be,	// (0x00027722) main_fps_pane_g1

0xb4cc,	// (0x00027730) wait_bar_pane_cp010_ParamLimits

0xb4cc,	// (0x00027730) wait_bar_pane_cp010

0xb4d8,	// (0x0002773c) fps_text_pane_t1_ParamLimits

0xb4d8,	// (0x0002773c) fps_text_pane_t1

0x85d7,	// (0x0002483b) cam4_image_uncrop_pane_g1

0x85e0,	// (0x00024844) cam4_image_uncrop_pane_g2

0x85e9,	// (0x0002484d) cam4_image_uncrop_pane_g3

0x85f2,	// (0x00024856) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002bb52) cam4_image_uncrop_pane_g

0xb2e0,	// (0x00027544) dia3_listrow_pane_ParamLimits

0xb77b,	// (0x000279df) main_phob2_pane

0xa7b4,	// (0x00026a18) cell_tport_appsw_pane_cp02_ParamLimits

0xa7b4,	// (0x00026a18) cell_tport_appsw_pane_cp02

0xa7c3,	// (0x00026a27) cell_tport_appsw_pane_cp03_ParamLimits

0xa7c3,	// (0x00026a27) cell_tport_appsw_pane_cp03

0xb77b,	// (0x000279df) phob2_contact_card_pane

0xb77b,	// (0x000279df) phob2_listscroll_pane

0x1a64,	// (0x0001dcc8) phob2_list_pane

0x1a6c,	// (0x0001dcd0) scroll_pane_cp034

0xb4f1,	// (0x00027755) phob2_cc_data_pane_ParamLimits

0xb4f1,	// (0x00027755) phob2_cc_data_pane

0xb50b,	// (0x0002776f) phob2_cc_listscroll_pane_ParamLimits

0xb50b,	// (0x0002776f) phob2_cc_listscroll_pane

0xb0d2,	// (0x00027336) list_double_large_graphic_phob2_pane_ParamLimits

0xb0d2,	// (0x00027336) list_double_large_graphic_phob2_pane

0xb525,	// (0x00027789) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb525,	// (0x00027789) list_double_large_graphic_phob2_pane_g1

0xb53b,	// (0x0002779f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb53b,	// (0x0002779f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0002c188) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0002c188) list_double_large_graphic_phob2_pane_g

0xb547,	// (0x000277ab) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb547,	// (0x000277ab) list_double_large_graphic_phob2_pane_t1

0xb55c,	// (0x000277c0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb55c,	// (0x000277c0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0002c18d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0002c18d) list_double_large_graphic_phob2_pane_t

0xb77b,	// (0x000279df) list_highlight_pane_cp024

0xb56e,	// (0x000277d2) phob2_cc_button_pane

0xb576,	// (0x000277da) phob2_cc_data_pane_g1_ParamLimits

0xb576,	// (0x000277da) phob2_cc_data_pane_g1

0xb582,	// (0x000277e6) phob2_cc_data_pane_g2_ParamLimits

0xb582,	// (0x000277e6) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0002c192) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0002c192) phob2_cc_data_pane_g

0xb58e,	// (0x000277f2) phob2_cc_data_pane_t1_ParamLimits

0xb58e,	// (0x000277f2) phob2_cc_data_pane_t1

0xb5a0,	// (0x00027804) phob2_cc_data_pane_t2_ParamLimits

0xb5a0,	// (0x00027804) phob2_cc_data_pane_t2

0xb5b2,	// (0x00027816) phob2_cc_data_pane_t3_ParamLimits

0xb5b2,	// (0x00027816) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0002c197) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0002c197) phob2_cc_data_pane_t

0x1a74,	// (0x0001dcd8) phob2_cc_list_pane_ParamLimits

0x1a74,	// (0x0001dcd8) phob2_cc_list_pane

0x00c8,	// (0x0001c32c) scroll_pane_cp035_ParamLimits

0x00c8,	// (0x0001c32c) scroll_pane_cp035

0xbddd,	// (0x00028041) bg_button_pane_cp033

0x1a80,	// (0x0001dce4) phob2_cc_button_pane_g1

0x1a8c,	// (0x0001dcf0) phob2_cc_button_pane_t1

0x1aa1,	// (0x0001dd05) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0002c19e) phob2_cc_button_pane_t

0xb5c4,	// (0x00027828) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb5c4,	// (0x00027828) list_double_large_graphic_phob2_cc_pane

0xb5eb,	// (0x0002784f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb5eb,	// (0x0002784f) list_double_large_graphic_phob2_cc_pane_g1

0xb5fc,	// (0x00027860) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb5fc,	// (0x00027860) list_double_large_graphic_phob2_cc_pane_g2

0xb60b,	// (0x0002786f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb60b,	// (0x0002786f) list_double_large_graphic_phob2_cc_pane_g3

0xb61a,	// (0x0002787e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb61a,	// (0x0002787e) list_double_large_graphic_phob2_cc_pane_g4

0xb62b,	// (0x0002788f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb62b,	// (0x0002788f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0002c1a3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0002c1a3) list_double_large_graphic_phob2_cc_pane_g

0xb63a,	// (0x0002789e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb63a,	// (0x0002789e) list_double_large_graphic_phob2_cc_pane_t1

0xb663,	// (0x000278c7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb663,	// (0x000278c7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0002c1ae) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0002c1ae) list_double_large_graphic_phob2_cc_pane_t

0x1ab3,	// (0x0001dd17) list_highlight_pane_cp025_ParamLimits

0x1ab3,	// (0x0001dd17) list_highlight_pane_cp025

0xbddd,	// (0x00028041) bg_button_pane_cp033_ParamLimits

0x1a80,	// (0x0001dce4) phob2_cc_button_pane_g1_ParamLimits

0x1a8c,	// (0x0001dcf0) phob2_cc_button_pane_t1_ParamLimits

0x1aa1,	// (0x0001dd05) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0002c19e) phob2_cc_button_pane_t_ParamLimits

0x4342,	// (0x000205a6) popup_wgtman_window

0xef6d,	// (0x0002b1d1) scroll_pane_cp038

0xb05b,	// (0x000272bf) wgtman_btn_pane_cp_01_ParamLimits

0xb05b,	// (0x000272bf) wgtman_btn_pane_cp_01

0x1ac1,	// (0x0001dd25) wgtman_content_pane

0x1aca,	// (0x0001dd2e) wgtman_heading_pane

0xb77b,	// (0x000279df) bg_heading_pane_cp02

0x1ad3,	// (0x0001dd37) wgtman_heading_pane_g1

0x1adb,	// (0x0001dd3f) wgtman_heading_pane_t1

0x1ae9,	// (0x0001dd4d) scroll_pane_cp036

0x1af1,	// (0x0001dd55) wgtman_list_pane

0x1af9,	// (0x0001dd5d) wgtman_list_pane_t1_ParamLimits

0x1af9,	// (0x0001dd5d) wgtman_list_pane_t1

0x3b02,	// (0x0001fd66) cam4_grid_pane

0x8da0,	// (0x00025004) bg_button_pane_cp015_ParamLimits

0x8db2,	// (0x00025016) bg_button_pane_cp016_ParamLimits

0x8dc5,	// (0x00025029) bg_button_pane_cp017_ParamLimits

0x8e1b,	// (0x0002507f) popup_vitu2_query_window_g3_ParamLimits

0x8e1b,	// (0x0002507f) popup_vitu2_query_window_g3

0x8ed6,	// (0x0002513a) popup_vitu2_query_window_t6_ParamLimits

0x8ed6,	// (0x0002513a) popup_vitu2_query_window_t6

0x8f01,	// (0x00025165) popup_vitu2_query_window_t7_ParamLimits

0x8f01,	// (0x00025165) popup_vitu2_query_window_t7

0x153d,	// (0x0001d7a1) cam4_grid_pane_g1

0x1546,	// (0x0001d7aa) cam4_grid_pane_g2

0x1b13,	// (0x0001dd77) cam4_grid_pane_g3

0x1b1c,	// (0x0001dd80) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0002c1b3) cam4_grid_pane_g

0x4ee4,	// (0x00021148) aid_placing_vt_slider_lsc_ParamLimits

0x5230,	// (0x00021494) vidtel_button_pane_ParamLimits

0x5230,	// (0x00021494) vidtel_button_pane

0xb77b,	// (0x000279df) bg_button_pane_cp034

0xb68c,	// (0x000278f0) vidtel_button_pane_g1

0x1b27,	// (0x0001dd8b) vidtel_button_pane_t1

0xf0ba,	// (0x0002b31e) aid_size_vtel_slider_touch

0x00c8,	// (0x0001c32c) scroll_pane_cp039

0x9be1,	// (0x00025e45) ncim_query_button_pane_cp01_ParamLimits

0x9c00,	// (0x00025e64) ncimui_query_pane_g1_ParamLimits

0xbddd,	// (0x00028041) input_focus_pane_cp012_ParamLimits

0x0a01,	// (0x0001cc65) ncim_query_entry_pane_t1_ParamLimits

0x00c8,	// (0x0001c32c) scroll_pane_cp039_ParamLimits

0xc9a2,	// (0x00028c06) navi_pane_bcale_mc_g1

0xc9aa,	// (0x00028c0e) navi_pane_bcale_mc_t1

0x0f7f,	// (0x0001d1e3) main_sp_fs_email_pane_g1

0x0f8b,	// (0x0001d1ef) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0002bf49) main_sp_fs_email_pane_g

0x1403,	// (0x0001d667) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1403,	// (0x0001d667) list_single_cale_mrui_row_pane_g3

0xacb2,	// (0x00026f16) list_single_recal_day_pane_g5_event_pane

0x15f4,	// (0x0001d858) list_single_recal_day_pane_g7

0x1b3d,	// (0x0001dda1) list_recal_day_event_pane_cp01

0x1b46,	// (0x0001ddaa) list_recal_vselct_arw_lo_pane_cp01

0x1b4e,	// (0x0001ddb2) list_recal_vselct_arw_up_pane_cp01

0x1b56,	// (0x0001ddba) list_recal_vselct_pane_cp01

0x001f,	// (0x0001c283) list_recal_day_event_pane_cp01_g1

0x1b60,	// (0x0001ddc4) list_recal_day_event_pane_cp01_t1

0x15fc,	// (0x0001d860) list_single_recal_day_pane_t1_ParamLimits

0x160e,	// (0x0001d872) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0002c0a1) list_single_recal_day_pane_t_ParamLimits

0xbe01,	// (0x00028065) bg_notes_pane_ParamLimits

0xbea4,	// (0x00028108) list_notes_pane_ParamLimits

0x45c9,	// (0x0002082d) scroll_pane_cp06_ParamLimits

0xbec6,	// (0x0002812a) main_notes_pane_ParamLimits

0xb77b,	// (0x000279df) main_welc_pane

0xb694,	// (0x000278f8) main_welc_body_pane_ParamLimits

0xb694,	// (0x000278f8) main_welc_body_pane

0xb6ae,	// (0x00027912) main_welc_opti_pane_ParamLimits

0xb6ae,	// (0x00027912) main_welc_opti_pane

0xb6e1,	// (0x00027945) main_welc_pane_t1_ParamLimits

0xb6e1,	// (0x00027945) main_welc_pane_t1

0xb6fb,	// (0x0002795f) main_welc_body_row_pane_ParamLimits

0xb6fb,	// (0x0002795f) main_welc_body_row_pane

0xeeca,	// (0x0002b12e) main_welc_opti_row_pane_ParamLimits

0xeeca,	// (0x0002b12e) main_welc_opti_row_pane

0x1b6e,	// (0x0001ddd2) main_welc_opti_row_pane_g1

0xb720,	// (0x00027984) main_welc_opti_row_pane_t1

0x1b76,	// (0x0001ddda) main_welc_body_row_pane_t1

0x186a,	// (0x0001dace) popup_notif_wgt_heading_pane

0x1884,	// (0x0001dae8) aid_size_list_notif_wgt_del_ParamLimits

0x1891,	// (0x0001daf5) list_notif_wgt_row_pane_g1_ParamLimits

0x189d,	// (0x0001db01) list_notif_wgt_row_pane_g2_ParamLimits

0x18ac,	// (0x0001db10) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0002c108) list_notif_wgt_row_pane_g_ParamLimits

0x18b9,	// (0x0001db1d) list_notif_wgt_row_pane_t1_ParamLimits

0x18cf,	// (0x0001db33) list_notif_wgt_row_pane_t2_ParamLimits

0x18e1,	// (0x0001db45) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0002c10f) list_notif_wgt_row_pane_t_ParamLimits

0xb0ed,	// (0x00027351) listrow_wgtman_pane_g1_ParamLimits

0xb0fa,	// (0x0002735e) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0002c138) listrow_wgtman_pane_g_ParamLimits

0xb118,	// (0x0002737c) listrow_wgtman_pane_t1_ParamLimits

0xb130,	// (0x00027394) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0002c13d) listrow_wgtman_pane_t_ParamLimits

0xb156,	// (0x000273ba) wait_bar_pane_cp09_ParamLimits

0xb77b,	// (0x000279df) bg_popup_heading_pane_cp02

0x1b85,	// (0x0001dde9) popup_notif_wgt_heading_pane_g1

0x1b8d,	// (0x0001ddf1) popup_notif_wgt_heading_pane_t1

0xb77b,	// (0x000279df) main_vids_pane

0xb77b,	// (0x000279df) vids_listscroll_pane

0xb72f,	// (0x00027993) scroll_pane_cp040

0xb77b,	// (0x000279df) vids_list_pane

0xb73a,	// (0x0002799e) vids_list_double_pane_ParamLimits

0xb73a,	// (0x0002799e) vids_list_double_pane

0xb754,	// (0x000279b8) vids_list_double_pane_g1

0xb75d,	// (0x000279c1) vids_list_double_pane_t1

0xb76d,	// (0x000279d1) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0002c1c1) vids_list_double_pane_t

0x312b,	// (0x0001f38f) main_ncimui_pane_ParamLimits

0x9a38,	// (0x00025c9c) main_ncimui_pane_g1_ParamLimits

0x9a44,	// (0x00025ca8) main_ncimui_pane_g2_ParamLimits

0x9a44,	// (0x00025ca8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0002be4e) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0002be4e) main_ncimui_pane_g

0xb6c7,	// (0x0002792b) main_welc_pane_g1_ParamLimits

0xb6c7,	// (0x0002792b) main_welc_pane_g1

0xb6d3,	// (0x00027937) main_welc_pane_g2_ParamLimits

0xb6d3,	// (0x00027937) main_welc_pane_g2

0x0001,

0xff58,	// (0x0002c1bc) main_welc_pane_g_ParamLimits

0xff58,	// (0x0002c1bc) main_welc_pane_g

0xbe01,	// (0x00028065) listscroll_mce_pane_ParamLimits

0xcaf7,	// (0x00028d5b) wait_bar_pane_cp10

0xdf64,	// (0x0002a1c8) main_cale_day_pane_ParamLimits

0xdf64,	// (0x0002a1c8) main_cale_week_pane_ParamLimits

0xbe01,	// (0x00028065) main_messa_pane_ParamLimits

0x7f9f,	// (0x00024203) main_clock2_btn_pane_ParamLimits

0x7f9f,	// (0x00024203) main_clock2_btn_pane

0xe798,	// (0x0002a9fc) main_clock2_btn_pane_cp01_ParamLimits

0xe798,	// (0x0002a9fc) main_clock2_btn_pane_cp01

0x138f,	// (0x0001d5f3) list_cale_mrui_pane_ParamLimits

0x1917,	// (0x0001db7b) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0002c116) main_cf0_pane_g

0xb2fd,	// (0x00027561) area_left_week_number_pane_ParamLimits

0xb310,	// (0x00027574) area_top_day_name_pane_ParamLimits

0xb31e,	// (0x00027582) frame_month_view_pane_ParamLimits

0x1a29,	// (0x0001dc8d) grid_month_view_pane_ParamLimits

0x1a37,	// (0x0001dc9b) frm_month_g1_ParamLimits

0xb39c,	// (0x00027600) frm_month_g2_ParamLimits

0xb3ad,	// (0x00027611) frm_month_g3_ParamLimits

0xb3be,	// (0x00027622) frm_month_g4_ParamLimits

0xb3cf,	// (0x00027633) frm_month_g5_ParamLimits

0xb3e2,	// (0x00027646) frm_month_g6_ParamLimits

0xb3f5,	// (0x00027659) frm_month_g7_ParamLimits

0x1a44,	// (0x0001dca8) frm_month_g8_ParamLimits

0xb408,	// (0x0002766c) frm_month_g9_ParamLimits

0xb415,	// (0x00027679) frm_month_g10_ParamLimits

0xb422,	// (0x00027686) frm_month_g11_ParamLimits

0xb42f,	// (0x00027693) frm_month_g12_ParamLimits

0xb43c,	// (0x000276a0) frm_month_g13_ParamLimits

0xb449,	// (0x000276ad) frm_month_g14_ParamLimits

0xb458,	// (0x000276bc) frm_month_g15_ParamLimits

0xb467,	// (0x000276cb) frm_month_g16_ParamLimits

0xff03,	// (0x0002c167) frm_month_g_ParamLimits

0x1a51,	// (0x0001dcb5) cell_top_day_name_pane_t1_ParamLimits

0xb476,	// (0x000276da) cell_area_left_week_number_pane_g1_ParamLimits

0xb485,	// (0x000276e9) cell_area_left_week_number_pane_t1_ParamLimits

0xe5e4,	// (0x0002a848) cell_month_view_pane_g1_ParamLimits

0xb49b,	// (0x000276ff) cell_month_view_pane_t1_ParamLimits

0xbdf9,	// (0x0002805d) main_clock2_btn_pane_g1

0x1b9b,	// (0x0001ddff) main_clock2_btn_pane_t1

0xbddd,	// (0x00028041) listscroll_cmail_pane_ParamLimits

0x0f7f,	// (0x0001d1e3) main_sp_fs_email_pane_g1_ParamLimits

0x0f8b,	// (0x0001d1ef) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0002bf49) main_sp_fs_email_pane_g_ParamLimits

0x1564,	// (0x0001d7c8) list_recal_day_pane_ParamLimits

0x1575,	// (0x0001d7d9) mian_recal_day_pane_t1

0xa480,	// (0x000266e4) list_single_dyc_row_text_pane_t4_ParamLimits

0xa480,	// (0x000266e4) list_single_dyc_row_text_pane_t4

0xa4b7,	// (0x0002671b) list_single_dyc_row_text_pane_t5_ParamLimits

0xa4b7,	// (0x0002671b) list_single_dyc_row_text_pane_t5

0x1031,	// (0x0001d295) list_single_dyc_row_text_pane_t6_ParamLimits

0x1031,	// (0x0001d295) list_single_dyc_row_text_pane_t6

0x602b,	// (0x0002228f) aid_mgn_list_cale_time_pane

0x312b,	// (0x0001f38f) main_gallery2_pane_ParamLimits

0xe7ae,	// (0x0002aa12) main_clock2_pane_cp01_t1

0xe7be,	// (0x0002aa22) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002ba28) main_clock2_pane_cp01_t

0x48ea,	// (0x00020b4e) cale_week_scroll_pane_g16_ParamLimits

0x48ea,	// (0x00020b4e) cale_week_scroll_pane_g16

0xc08b,	// (0x000282ef) vorec_slider_pane

0x1b27,	// (0x0001dd8b) vidtel_button_pane_t1_ParamLimits

0xad0d,	// (0x00026f71) main_fs_bigclock_clock_pane_g1_ParamLimits

0xad0d,	// (0x00026f71) main_fs_bigclock_clock_pane_g2_ParamLimits

0xad1a,	// (0x00026f7e) main_fs_bigclock_clock_pane_g3_ParamLimits

0xad1a,	// (0x00026f7e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0002c0c4) main_fs_bigclock_clock_pane_g_ParamLimits

0xad26,	// (0x00026f8a) main_fs_bigclock_clock_pane_t1_ParamLimits

0xad39,	// (0x00026f9d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0002c0cd) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
