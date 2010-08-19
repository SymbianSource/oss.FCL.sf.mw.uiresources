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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0004f62c };

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
0x3656,	// (0x00052c82) Screen

0x3660,	// (0x00052c8c) application_window

0x3696,	// (0x00052cc2) area_bottom_pane_ParamLimits

0x3696,	// (0x00052cc2) area_bottom_pane

0x36c9,	// (0x00052cf5) area_top_pane_ParamLimits

0x36c9,	// (0x00052cf5) area_top_pane

0xaea3,	// (0x0005a4cf) call_video_uplink_pane_ParamLimits

0xaea3,	// (0x0005a4cf) call_video_uplink_pane

0x3749,	// (0x00052d75) main_pane_ParamLimits

0x3749,	// (0x00052d75) main_pane

0xc2a5,	// (0x0005b8d1) context_pane

0x6364,	// (0x00055990) navi_pane

0x638d,	// (0x000559b9) popup_cale_events_window_ParamLimits

0x638d,	// (0x000559b9) popup_cale_events_window

0xc2b8,	// (0x0005b8e4) popup_mup_playback_window

0x63a5,	// (0x000559d1) signal_pane

0x1584,	// (0x00050bb0) main_browser_pane

0x1751,	// (0x00050d7d) main_burst_pane

0xe9e5,	// (0x0005e011) main_calc_pane

0xc28f,	// (0x0005b8bb) main_cale_day_pane

0x610a,	// (0x00055736) main_cale_month_pane

0xc28f,	// (0x0005b8bb) main_cale_week_pane

0x1751,	// (0x00050d7d) main_call_pane

0x1239,	// (0x00050865) main_call_poc_pane

0x1751,	// (0x00050d7d) main_camera_pane

0x1751,	// (0x00050d7d) main_chi_dic_pane

0x1f2f,	// (0x0005155b) main_clock_pane

0x1239,	// (0x00050865) main_fmradio_pane

0x1751,	// (0x00050d7d) main_graph_messa_pane

0x1239,	// (0x00050865) main_help_pane

0x1584,	// (0x00050bb0) main_im_pane

0x1494,	// (0x00050ac0) main_image_pane_ParamLimits

0x1494,	// (0x00050ac0) main_image_pane

0x1239,	// (0x00050865) main_location2_pane

0x1751,	// (0x00050d7d) main_location_pane

0x1494,	// (0x00050ac0) main_messa_pane

0x1239,	// (0x00050865) main_mp2_pane

0x1751,	// (0x00050d7d) main_mp_pane

0x1239,	// (0x00050865) main_msg_pane

0x1239,	// (0x00050865) main_mup_eq_pane

0x1239,	// (0x00050865) main_mup_pane

0x1584,	// (0x00050bb0) main_notes_pane

0x1239,	// (0x00050865) main_pec_pane

0x1239,	// (0x00050865) main_phob_pane

0x1239,	// (0x00050865) main_pinb_pane

0x1239,	// (0x00050865) main_postcard_pane

0x1239,	// (0x00050865) main_qdial_pane

0x1751,	// (0x00050d7d) main_skin_pane

0x1239,	// (0x00050865) main_smil2_pane

0x1751,	// (0x00050d7d) main_smil_pane

0x1751,	// (0x00050d7d) main_video_pane

0x1751,	// (0x00050d7d) main_video_tele_pane

0x1494,	// (0x00050ac0) main_viewer_pane_ParamLimits

0x1494,	// (0x00050ac0) main_viewer_pane

0x1751,	// (0x00050d7d) main_vorec_pane

0x6158,	// (0x00055784) popup_blid_sat_info_window_ParamLimits

0x6158,	// (0x00055784) popup_blid_sat_info_window

0x61ae,	// (0x000557da) popup_dyc_status_message_window_ParamLimits

0x61ae,	// (0x000557da) popup_dyc_status_message_window

0x61c4,	// (0x000557f0) popup_grid_large_graphic_window_ParamLimits

0x61c4,	// (0x000557f0) popup_grid_large_graphic_window

0x625a,	// (0x00055886) popup_loc_request_window_ParamLimits

0x625a,	// (0x00055886) popup_loc_request_window

0x633e,	// (0x0005596a) popup_wml_address_window_ParamLimits

0x633e,	// (0x0005596a) popup_wml_address_window

0x5f80,	// (0x000555ac) call_muted_g1

0x5f90,	// (0x000555bc) popup_call_audio_conf_window_ParamLimits

0x5f90,	// (0x000555bc) popup_call_audio_conf_window

0x5fae,	// (0x000555da) popup_call_audio_first_window_ParamLimits

0x5fae,	// (0x000555da) popup_call_audio_first_window

0x600c,	// (0x00055638) popup_call_audio_in_window_ParamLimits

0x600c,	// (0x00055638) popup_call_audio_in_window

0x6038,	// (0x00055664) popup_call_audio_out_window_ParamLimits

0x6038,	// (0x00055664) popup_call_audio_out_window

0x6066,	// (0x00055692) popup_call_audio_second_window_ParamLimits

0x6066,	// (0x00055692) popup_call_audio_second_window

0x60ac,	// (0x000556d8) popup_call_audio_wait_window_ParamLimits

0x60ac,	// (0x000556d8) popup_call_audio_wait_window

0x60df,	// (0x0005570b) popup_number_entry_window_ParamLimits

0x60df,	// (0x0005570b) popup_number_entry_window

0x0e28,	// (0x00050454) bg_popup_call_pane_cp05_ParamLimits

0x0e28,	// (0x00050454) bg_popup_call_pane_cp05

0x0e48,	// (0x00050474) popup_number_entry_window_t1

0x0e5b,	// (0x00050487) popup_number_entry_window_t2

0x0e6d,	// (0x00050499) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0005e6b1) popup_number_entry_window_t

0x0e7f,	// (0x000504ab) text_title_cp2

0x0e92,	// (0x000504be) bg_popup_call_pane_cp_ParamLimits

0x0e92,	// (0x000504be) bg_popup_call_pane_cp

0x0ea0,	// (0x000504cc) call_thumbnail_pane

0x0ea8,	// (0x000504d4) popup_call_audio_in_window_g1_ParamLimits

0x0ea8,	// (0x000504d4) popup_call_audio_in_window_g1

0x0eb4,	// (0x000504e0) popup_call_audio_in_window_g2_ParamLimits

0x0eb4,	// (0x000504e0) popup_call_audio_in_window_g2

0x0ec0,	// (0x000504ec) popup_call_audio_in_window_g3_ParamLimits

0x0ec0,	// (0x000504ec) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0005e6ba) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0005e6ba) popup_call_audio_in_window_g

0x0ecc,	// (0x000504f8) popup_call_audio_in_window_t1_ParamLimits

0x0ecc,	// (0x000504f8) popup_call_audio_in_window_t1

0x0ee7,	// (0x00050513) popup_call_audio_in_window_t2_ParamLimits

0x0ee7,	// (0x00050513) popup_call_audio_in_window_t2

0x0f02,	// (0x0005052e) popup_call_audio_in_window_t3_ParamLimits

0x0f02,	// (0x0005052e) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0005e6c1) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0005e6c1) popup_call_audio_in_window_t

0x0e92,	// (0x000504be) bg_popup_call_pane_cp01_ParamLimits

0x0e92,	// (0x000504be) bg_popup_call_pane_cp01

0x0ea0,	// (0x000504cc) call_thumbnail_pane_cp02

0x0f15,	// (0x00050541) call_type_pane_cp022

0x0f1d,	// (0x00050549) popup_call_audio_out_window_g1_ParamLimits

0x0f1d,	// (0x00050549) popup_call_audio_out_window_g1

0x0f2f,	// (0x0005055b) popup_call_audio_out_window_g2_ParamLimits

0x0f2f,	// (0x0005055b) popup_call_audio_out_window_g2

0x0f3b,	// (0x00050567) popup_call_audio_out_window_g3_ParamLimits

0x0f3b,	// (0x00050567) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0005e6c8) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0005e6c8) popup_call_audio_out_window_g

0x0f4d,	// (0x00050579) popup_call_audio_out_window_t1_ParamLimits

0x0f4d,	// (0x00050579) popup_call_audio_out_window_t1

0x0f65,	// (0x00050591) popup_call_audio_out_window_t2_ParamLimits

0x0f65,	// (0x00050591) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0005e6cf) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0005e6cf) popup_call_audio_out_window_t

0x0f7a,	// (0x000505a6) bg_popup_call_pane_ParamLimits

0x0f7a,	// (0x000505a6) bg_popup_call_pane

0x38d2,	// (0x00052efe) call_thumbnail_pane_cp_ParamLimits

0x38d2,	// (0x00052efe) call_thumbnail_pane_cp

0x0ffe,	// (0x0005062a) call_type_pane_cp01_ParamLimits

0x0ffe,	// (0x0005062a) call_type_pane_cp01

0x1042,	// (0x0005066e) popup_call_audio_first_window_g1_ParamLimits

0x1042,	// (0x0005066e) popup_call_audio_first_window_g1

0x108e,	// (0x000506ba) popup_call_audio_first_window_g2_ParamLimits

0x108e,	// (0x000506ba) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0005e6d4) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0005e6d4) popup_call_audio_first_window_g

0x10d2,	// (0x000506fe) popup_call_audio_first_window_t1_ParamLimits

0x10d2,	// (0x000506fe) popup_call_audio_first_window_t1

0x117e,	// (0x000507aa) popup_call_audio_first_window_t4_ParamLimits

0x117e,	// (0x000507aa) popup_call_audio_first_window_t4

0x120a,	// (0x00050836) popup_call_audio_first_window_t5_ParamLimits

0x120a,	// (0x00050836) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0005e6d9) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0005e6d9) popup_call_audio_first_window_t

0x1239,	// (0x00050865) bg_popup_call_pane_cp02

0x1243,	// (0x0005086f) call_type_pane_cp023

0x124b,	// (0x00050877) popup_call_audio_wait_window_g1

0x1253,	// (0x0005087f) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0005e6e0) popup_call_audio_wait_window_g

0x125b,	// (0x00050887) popup_call_audio_wait_window_t3

0x1269,	// (0x00050895) bg_popup_call_pane_cp03_ParamLimits

0x1269,	// (0x00050895) bg_popup_call_pane_cp03

0x12c9,	// (0x000508f5) call_thumbnail_pane_cp011_ParamLimits

0x12c9,	// (0x000508f5) call_thumbnail_pane_cp011

0x12d5,	// (0x00050901) call_type_pane_cp034_ParamLimits

0x12d5,	// (0x00050901) call_type_pane_cp034

0x1311,	// (0x0005093d) popup_call_audio_second_window_g1_ParamLimits

0x1311,	// (0x0005093d) popup_call_audio_second_window_g1

0x134d,	// (0x00050979) popup_call_audio_second_window_g2_ParamLimits

0x134d,	// (0x00050979) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0005e6e5) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0005e6e5) popup_call_audio_second_window_g

0x1389,	// (0x000509b5) popup_call_audio_second_window_t1_ParamLimits

0x1389,	// (0x000509b5) popup_call_audio_second_window_t1

0x140a,	// (0x00050a36) popup_call_audio_second_window_t2_ParamLimits

0x140a,	// (0x00050a36) popup_call_audio_second_window_t2

0x1440,	// (0x00050a6c) popup_call_audio_second_window_t3_ParamLimits

0x1440,	// (0x00050a6c) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0005e6ea) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0005e6ea) popup_call_audio_second_window_t

0x1239,	// (0x00050865) bg_popup_call_pane_cp04

0x1476,	// (0x00050aa2) list_conf_pane

0x147e,	// (0x00050aaa) popup_call_audio_conf_window_t1

0x148c,	// (0x00050ab8) call_thumbnail_pane_g1

0x1494,	// (0x00050ac0) bg_pinb_pane_ParamLimits

0x1494,	// (0x00050ac0) bg_pinb_pane

0x14a2,	// (0x00050ace) find_pinb_pane

0x1494,	// (0x00050ac0) listscroll_pinb_pane_ParamLimits

0x1494,	// (0x00050ac0) listscroll_pinb_pane

0x14ac,	// (0x00050ad8) pinb_bg_pane_g1

0x14ac,	// (0x00050ad8) pinb_bg_pane_g2

0x14ac,	// (0x00050ad8) pinb_bg_pane_g3

0x14ac,	// (0x00050ad8) pinb_bg_pane_g4

0x14ac,	// (0x00050ad8) pinb_bg_pane_g5

0x14ac,	// (0x00050ad8) pinb_bg_pane_g6

0x14ac,	// (0x00050ad8) pinb_bg_pane_g7

0x14ac,	// (0x00050ad8) pinb_bg_pane_g8

0x14ac,	// (0x00050ad8) pinb_bg_pane_g9

0x14ac,	// (0x00050ad8) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0005e6f1) pinb_bg_pane_g

0x3901,	// (0x00052f2d) grid_pinb_pane

0x0e1e,	// (0x0005044a) list_pinb_pane

0x14b6,	// (0x00050ae2) scroll_pane_cp01_ParamLimits

0x14b6,	// (0x00050ae2) scroll_pane_cp01

0x14c3,	// (0x00050aef) find_pinb_pane_g1_ParamLimits

0x14c3,	// (0x00050aef) find_pinb_pane_g1

0x14db,	// (0x00050b07) find_pinb_pane_t1

0x14ed,	// (0x00050b19) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0005e70b) find_pinb_pane_t

0x1502,	// (0x00050b2e) input_focus_pane_cp01_ParamLimits

0x1502,	// (0x00050b2e) input_focus_pane_cp01

0x390b,	// (0x00052f37) cell_pinb_pane_ParamLimits

0x390b,	// (0x00052f37) cell_pinb_pane

0x150e,	// (0x00050b3a) cell_pinb_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) cell_pinb_pane_g1

0x151c,	// (0x00050b48) cell_pinb_pane_g2_ParamLimits

0x151c,	// (0x00050b48) cell_pinb_pane_g2

0x151c,	// (0x00050b48) cell_pinb_pane_g3_ParamLimits

0x151c,	// (0x00050b48) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0005e710) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0005e710) cell_pinb_pane_g

0x1239,	// (0x00050865) grid_highlight_pane_cp01

0x0e1e,	// (0x0005044a) list_pinb_item_pane_ParamLimits

0x0e1e,	// (0x0005044a) list_pinb_item_pane

0x0e1e,	// (0x0005044a) list_highlight_pane_cp02

0x152a,	// (0x00050b56) list_pinb_item_pane_g1_ParamLimits

0x152a,	// (0x00050b56) list_pinb_item_pane_g1

0x151c,	// (0x00050b48) list_pinb_item_pane_g2_ParamLimits

0x151c,	// (0x00050b48) list_pinb_item_pane_g2

0x150e,	// (0x00050b3a) list_pinb_item_pane_g3_ParamLimits

0x150e,	// (0x00050b3a) list_pinb_item_pane_g3

0x151c,	// (0x00050b48) list_pinb_item_pane_g4_ParamLimits

0x151c,	// (0x00050b48) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0005e717) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0005e717) list_pinb_item_pane_g

0x1538,	// (0x00050b64) list_pinb_item_pane_t1_ParamLimits

0x1538,	// (0x00050b64) list_pinb_item_pane_t1

0x3931,	// (0x00052f5d) calc_display_pane

0x394d,	// (0x00052f79) calc_paper_pane

0x396e,	// (0x00052f9a) grid_calc_pane

0x1239,	// (0x00050865) bg_list_pane_cp01

0x398a,	// (0x00052fb6) clock_g1

0x3992,	// (0x00052fbe) clock_g2

0x0001,

0xf0f4,	// (0x0005e720) clock_g

0x399a,	// (0x00052fc6) clock_t1_ParamLimits

0x399a,	// (0x00052fc6) clock_t1

0x39af,	// (0x00052fdb) clock_t2_ParamLimits

0x39af,	// (0x00052fdb) clock_t2

0x39c1,	// (0x00052fed) clock_t3_ParamLimits

0x39c1,	// (0x00052fed) clock_t3

0x39d3,	// (0x00052fff) clock_t4_ParamLimits

0x39d3,	// (0x00052fff) clock_t4

0x39e5,	// (0x00053011) clock_t5_ParamLimits

0x39e5,	// (0x00053011) clock_t5

0x39fa,	// (0x00053026) clock_t6_ParamLimits

0x39fa,	// (0x00053026) clock_t6

0x3a0c,	// (0x00053038) clock_t7_ParamLimits

0x3a0c,	// (0x00053038) clock_t7

0x3a1e,	// (0x0005304a) clock_t8_ParamLimits

0x3a1e,	// (0x0005304a) clock_t8

0x3a30,	// (0x0005305c) clock_t9_ParamLimits

0x3a30,	// (0x0005305c) clock_t9

0x0008,

0xf0f9,	// (0x0005e725) clock_t_ParamLimits

0xf0f9,	// (0x0005e725) clock_t

0x154c,	// (0x00050b78) popup_clock_analogue_window_cp02

0x154c,	// (0x00050b78) popup_clock_digital_window_cp01

0x1239,	// (0x00050865) listscroll_help_pane

0x1239,	// (0x00050865) phob_pre_status_pane

0x1554,	// (0x00050b80) grid_qdial_pane

0x1494,	// (0x00050ac0) listscroll_mce_pane

0x1494,	// (0x00050ac0) bg_notes_pane

0x155e,	// (0x00050b8a) list_notes_pane

0x3a42,	// (0x0005306e) scroll_pane_cp06

0x156c,	// (0x00050b98) bg_calc_paper_pane

0xaed1,	// (0x0005a4fd) list_calc_pane

0x1584,	// (0x00050bb0) bg_calc_display_pane

0xaeeb,	// (0x0005a517) calc_display_pane_t1

0xaf00,	// (0x0005a52c) calc_display_pane_t2

0xaf15,	// (0x0005a541) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0005e738) calc_display_pane_t

0x3a54,	// (0x00053080) cell_calc_pane_ParamLimits

0x3a54,	// (0x00053080) cell_calc_pane

0x1590,	// (0x00050bbc) bg_calc_paper_pane_g1

0x159c,	// (0x00050bc8) bg_calc_paper_pane_g2

0x15a8,	// (0x00050bd4) bg_calc_paper_pane_g3

0x15b4,	// (0x00050be0) bg_calc_paper_pane_g4

0x15c0,	// (0x00050bec) bg_calc_paper_pane_g5

0x3a87,	// (0x000530b3) bg_calc_paper_pane_g6

0x3a96,	// (0x000530c2) bg_calc_paper_pane_g7

0x3aa5,	// (0x000530d1) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0005e73f) bg_calc_paper_pane_g

0x3ab4,	// (0x000530e0) calc_bg_paper_pane_g9

0x3ac3,	// (0x000530ef) list_calc_item_pane_ParamLimits

0x3ac3,	// (0x000530ef) list_calc_item_pane

0x15cc,	// (0x00050bf8) list_calc_item_pane_g1

0xaf27,	// (0x0005a553) list_calc_item_pane_t1_ParamLimits

0xaf27,	// (0x0005a553) list_calc_item_pane_t1

0x3ad7,	// (0x00053103) list_calc_item_pane_t2_ParamLimits

0x3ad7,	// (0x00053103) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0005e750) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0005e750) list_calc_item_pane_t

0x14ac,	// (0x00050ad8) cell_calc_pane_g1

0x15d9,	// (0x00050c05) grid_highlight_pane_cp02

0x15fb,	// (0x00050c27) bg_calc_display_pane_g1

0xaf39,	// (0x0005a565) bg_calc_display_pane_g2

0x1604,	// (0x00050c30) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0005e75a) bg_calc_display_pane_g

0x3b05,	// (0x00053131) cell_qdial_pane_ParamLimits

0x3b05,	// (0x00053131) cell_qdial_pane

0x3b17,	// (0x00053143) cell_qdial_pane_g1_ParamLimits

0x3b17,	// (0x00053143) cell_qdial_pane_g1

0x3b2d,	// (0x00053159) cell_qdial_pane_g2_ParamLimits

0x3b2d,	// (0x00053159) cell_qdial_pane_g2

0x160d,	// (0x00050c39) cell_qdial_pane_g3_ParamLimits

0x160d,	// (0x00050c39) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0005e761) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0005e761) cell_qdial_pane_g

0x3b54,	// (0x00053180) cell_qdial_pane_t1_ParamLimits

0x3b54,	// (0x00053180) cell_qdial_pane_t1

0x3b6c,	// (0x00053198) cell_qdial_pane_t2_ParamLimits

0x3b6c,	// (0x00053198) cell_qdial_pane_t2

0x3b7f,	// (0x000531ab) cell_qdial_pane_t3_ParamLimits

0x3b7f,	// (0x000531ab) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0005e76a) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0005e76a) cell_qdial_pane_t

0x1239,	// (0x00050865) grid_highlight_pane_cp04

0x1619,	// (0x00050c45) thumbnail_qdial_pane_ParamLimits

0x1619,	// (0x00050c45) thumbnail_qdial_pane

0x1675,	// (0x00050ca1) list_help_pane

0x167f,	// (0x00050cab) scroll_pane_cp02

0x3b92,	// (0x000531be) help_list_pane_t1_ParamLimits

0x3b92,	// (0x000531be) help_list_pane_t1

0xaf43,	// (0x0005a56f) bg_notes_pane_g2

0xaf4b,	// (0x0005a577) bg_notes_pane_g3

0xaf53,	// (0x0005a57f) notes_bg_pane_g1

0xaf5b,	// (0x0005a587) notes_bg_pane_g4

0xaf63,	// (0x0005a58f) notes_bg_pane_g5

0xaf6b,	// (0x0005a597) notes_bg_pane_g6

0xaf73,	// (0x0005a59f) notes_bg_pane_g7

0xaf7b,	// (0x0005a5a7) notes_bg_pane_g8

0xaf83,	// (0x0005a5af) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0005e788) notes_bg_pane_g

0x3baf,	// (0x000531db) list_notes_text_pane_ParamLimits

0x3baf,	// (0x000531db) list_notes_text_pane

0x1688,	// (0x00050cb4) list_notes_text_pane_g1

0x3bd2,	// (0x000531fe) list_notes_text_pane_t1

0x3be0,	// (0x0005320c) listscroll_cale_week_pane

0x3c0a,	// (0x00053236) bg_cale_heading_pane

0x16ab,	// (0x00050cd7) bg_cale_pane_cp01

0x3c22,	// (0x0005324e) cale_week_corner_pane

0x3c41,	// (0x0005326d) cale_week_day_heading_pane

0x3c5e,	// (0x0005328a) cale_week_scroll_pane_g1

0x3c71,	// (0x0005329d) cale_week_scroll_pane_g2

0x3c89,	// (0x000532b5) cale_week_scroll_pane_g3

0x3ca1,	// (0x000532cd) cale_week_scroll_pane_g4

0x3cb9,	// (0x000532e5) cale_week_scroll_pane_g5

0x3cd1,	// (0x000532fd) cale_week_scroll_pane_g6

0x3ce9,	// (0x00053315) cale_week_scroll_pane_g7

0x3d01,	// (0x0005332d) cale_week_scroll_pane_g8

0x3d1d,	// (0x00053349) cale_week_scroll_pane_g9

0x3d35,	// (0x00053361) cale_week_scroll_pane_g10

0x3d4d,	// (0x00053379) cale_week_scroll_pane_g11

0x3d65,	// (0x00053391) cale_week_scroll_pane_g12

0x3d7d,	// (0x000533a9) cale_week_scroll_pane_g13

0x3d95,	// (0x000533c1) cale_week_scroll_pane_g14

0x3dad,	// (0x000533d9) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0005e797) cale_week_scroll_pane_g

0x3de1,	// (0x0005340d) cale_week_time_pane

0x3dfd,	// (0x00053429) grid_cale_week_pane

0x16da,	// (0x00050d06) scroll_pane_cp08

0x3e1b,	// (0x00053447) cell_cale_week_pane_ParamLimits

0x3e1b,	// (0x00053447) cell_cale_week_pane

0x3e91,	// (0x000534bd) cale_week_day_heading_pane_t1

0x3ebb,	// (0x000534e7) cale_week_day_heading_pane_t2

0x3eea,	// (0x00053516) cale_week_day_heading_pane_t3

0x3f19,	// (0x00053545) cale_week_day_heading_pane_t4

0x3f48,	// (0x00053574) cale_week_day_heading_pane_t5

0x3f77,	// (0x000535a3) cale_week_day_heading_pane_t6

0x3fa6,	// (0x000535d2) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0005e7b8) cale_week_day_heading_pane_t

0x16f7,	// (0x00050d23) bg_cale_side_pane

0x3fd0,	// (0x000535fc) cale_week_time_pane_t1

0x400a,	// (0x00053636) cale_week_time_pane_t2

0x4044,	// (0x00053670) cale_week_time_pane_t3

0x407e,	// (0x000536aa) cale_week_time_pane_t4

0x40b8,	// (0x000536e4) cale_week_time_pane_t5

0x40f2,	// (0x0005371e) cale_week_time_pane_t6

0x412c,	// (0x00053758) cale_week_time_pane_t7

0x4166,	// (0x00053792) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0005e7c7) cale_week_time_pane_t

0x41a0,	// (0x000537cc) cell_cale_week_pane_g2

0x41bf,	// (0x000537eb) cell_cale_week_pane_g3_ParamLimits

0x41bf,	// (0x000537eb) cell_cale_week_pane_g3

0x1705,	// (0x00050d31) grid_highlight_pane_cp07

0x170d,	// (0x00050d39) listscroll_gms_pane

0x1717,	// (0x00050d43) grid_gms_pane

0x1720,	// (0x00050d4c) listscroll_gms_pane_g1

0x1728,	// (0x00050d54) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0005e7d8) listscroll_gms_pane_g

0x41d7,	// (0x00053803) scroll_pane_cp010

0x41e2,	// (0x0005380e) cell_gms_pane_ParamLimits

0x41e2,	// (0x0005380e) cell_gms_pane

0x41f2,	// (0x0005381e) cell_gms_pane_g1

0x1730,	// (0x00050d5c) cell_gms_pane_g2

0x1688,	// (0x00050cb4) cell_gms_pane_g3

0x1738,	// (0x00050d64) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0005e7dd) cell_gms_pane_g

0x1741,	// (0x00050d6d) grid_highlight_pane_cp09

0x5f2e,	// (0x0005555a) phob_pre_status_pane_g1

0x5f36,	// (0x00055562) phob_pre_status_pane_g2

0x5f3e,	// (0x0005556a) phob_pre_status_pane_g3

0x5f46,	// (0x00055572) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x0005ebcb) phob_pre_status_pane_g

0x5f56,	// (0x00055582) phob_pre_status_pane_t1

0x5f64,	// (0x00055590) phob_pre_status_pane_t2

0x5f72,	// (0x0005559e) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x0005ebd6) phob_pre_status_pane_t

0x1751,	// (0x00050d7d) bg_list_pane_cp05

0x4202,	// (0x0005382e) grid_vorec_pane

0x1759,	// (0x00050d85) vorec_t1

0x1767,	// (0x00050d93) vorec_t2

0x1775,	// (0x00050da1) vorec_t3

0x420a,	// (0x00053836) vorec_t4

0xada1,	// (0x0005a3cd) vorec_t5

0xadaf,	// (0x0005a3db) vorec_t6

0x0004,

0xf1ba,	// (0x0005e7e6) vorec_t

0xadbd,	// (0x0005a3e9) wait_bar_pane_cp01

0x4218,	// (0x00053844) cell_vorec_pane_ParamLimits

0x4218,	// (0x00053844) cell_vorec_pane

0xaf8b,	// (0x0005a5b7) cell_vorec_pane_g1

0x1239,	// (0x00050865) grid_highlight_pane_cp05

0x2225,	// (0x00051851) cams_zoom_pane

0x422b,	// (0x00053857) image_vga_pane

0x150e,	// (0x00050b3a) main_camera_pane_g1

0x150e,	// (0x00050b3a) main_camera_pane_g2

0x150e,	// (0x00050b3a) main_camera_pane_g3

0x150e,	// (0x00050b3a) main_camera_pane_g4

0x150e,	// (0x00050b3a) main_camera_pane_g5

0x150e,	// (0x00050b3a) main_camera_pane_g6

0x150e,	// (0x00050b3a) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0005e7f1) main_camera_pane_g

0x2211,	// (0x0005183d) main_camera_pane_t1

0x2211,	// (0x0005183d) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0005e802) main_camera_pane_t

0x425a,	// (0x00053886) cams_zoom_pane_cp_ParamLimits

0x425a,	// (0x00053886) cams_zoom_pane_cp

0x4282,	// (0x000538ae) image_cif_pane_ParamLimits

0x4282,	// (0x000538ae) image_cif_pane

0x42b3,	// (0x000538df) image_subqcif_pane

0x42bb,	// (0x000538e7) main_video_pane_g1_ParamLimits

0x42bb,	// (0x000538e7) main_video_pane_g1

0x42df,	// (0x0005390b) main_video_pane_g2_ParamLimits

0x42df,	// (0x0005390b) main_video_pane_g2

0x4313,	// (0x0005393f) main_video_pane_g3_ParamLimits

0x4313,	// (0x0005393f) main_video_pane_g3

0x4341,	// (0x0005396d) main_video_pane_g4_ParamLimits

0x4341,	// (0x0005396d) main_video_pane_g4

0x436f,	// (0x0005399b) main_video_pane_g5_ParamLimits

0x436f,	// (0x0005399b) main_video_pane_g5

0x17b3,	// (0x00050ddf) main_video_pane_g6_ParamLimits

0x17b3,	// (0x00050ddf) main_video_pane_g6

0x0006,

0xf1db,	// (0x0005e807) main_video_pane_g_ParamLimits

0xf1db,	// (0x0005e807) main_video_pane_g

0x4396,	// (0x000539c2) main_video_pane_t1_ParamLimits

0x4396,	// (0x000539c2) main_video_pane_t1

0x17cd,	// (0x00050df9) cams_zoom_pane_g1

0x17cd,	// (0x00050df9) cams_zoom_pane_g2

0x17cd,	// (0x00050df9) cams_zoom_pane_g3

0x17cd,	// (0x00050df9) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0005e816) cams_zoom_pane_g

0x43f3,	// (0x00053a1f) grid_cams_pane

0x4408,	// (0x00053a34) linegrid_cams_pane

0x4419,	// (0x00053a45) cell_cams_pane_ParamLimits

0x4419,	// (0x00053a45) cell_cams_pane

0x17d7,	// (0x00050e03) cams_burst_image_pane

0x17df,	// (0x00050e0b) cell_cams_pane_g1

0x1239,	// (0x00050865) grid_highlight_pane_cp03

0x14ac,	// (0x00050ad8) mp_bg_pane_g1

0x1239,	// (0x00050865) bg_list_pane_cp03

0xc1b4,	// (0x0005b7e0) bg_mp_pane

0xc1bc,	// (0x0005b7e8) grid_mp_pane

0xc1c4,	// (0x0005b7f0) media_player_g1

0xc1cc,	// (0x0005b7f8) media_player_t1

0xc1da,	// (0x0005b806) media_player_t2

0xc1e8,	// (0x0005b814) media_player_t3

0xc1f6,	// (0x0005b822) media_player_t4

0xc204,	// (0x0005b830) media_player_t5

0xc212,	// (0x0005b83e) media_player_t6

0xc220,	// (0x0005b84c) media_player_t7

0x0006,

0xf589,	// (0x0005ebb5) media_player_t

0xc22e,	// (0x0005b85a) wait_bar_pane_cp02

0xf56e,	// (0x0005eb9a) main_usb_pane_t

0x5f25,	// (0x00055551) cell_mp_pane

0x14ac,	// (0x00050ad8) cell_mp_pane_g1

0x1239,	// (0x00050865) grid_highlight_pane_cp06

0x17e7,	// (0x00050e13) grid_skin_colour_pane

0x17ef,	// (0x00050e1b) list_highlight_pane_cp03

0x4437,	// (0x00053a63) skin_g1

0x17f7,	// (0x00050e23) skin_t1

0x1806,	// (0x00050e32) skin_t2

0x0001,

0xf218,	// (0x0005e844) skin_t

0x443f,	// (0x00053a6b) cell_skin_colour_pane_ParamLimits

0x443f,	// (0x00053a6b) cell_skin_colour_pane

0x1814,	// (0x00050e40) cell_skin_colour_pane_g1

0x44a8,	// (0x00053ad4) call_video_g1_ParamLimits

0x44a8,	// (0x00053ad4) call_video_g1

0x44be,	// (0x00053aea) call_video_g2_ParamLimits

0x44be,	// (0x00053aea) call_video_g2

0x0001,

0xf21d,	// (0x0005e849) call_video_g_ParamLimits

0xf21d,	// (0x0005e849) call_video_g

0x4506,	// (0x00053b32) call_video_uplink_pane_cp1_ParamLimits

0x4506,	// (0x00053b32) call_video_uplink_pane_cp1

0x1826,	// (0x00050e52) call_video_uplink_pane_cp2

0x459b,	// (0x00053bc7) video_down_crop_pane_ParamLimits

0x459b,	// (0x00053bc7) video_down_crop_pane

0x465e,	// (0x00053c8a) video_down_pane_ParamLimits

0x465e,	// (0x00053c8a) video_down_pane

0x182e,	// (0x00050e5a) video_down_subqcif_pane_ParamLimits

0x182e,	// (0x00050e5a) video_down_subqcif_pane

0x1846,	// (0x00050e72) video_down_subqcif_pane_cp_ParamLimits

0x1846,	// (0x00050e72) video_down_subqcif_pane_cp

0x186a,	// (0x00050e96) im_reading_pane_ParamLimits

0x186a,	// (0x00050e96) im_reading_pane

0x471b,	// (0x00053d47) im_writing_pane_ParamLimits

0x471b,	// (0x00053d47) im_writing_pane

0x4731,	// (0x00053d5d) im_reading_pane_t1

0x1884,	// (0x00050eb0) list_im_pane

0x1895,	// (0x00050ec1) scroll_pane_cp07

0x4767,	// (0x00053d93) im_writing_pane_t1_ParamLimits

0x4767,	// (0x00053d93) im_writing_pane_t1

0x18ae,	// (0x00050eda) im_writing_pane_t2_ParamLimits

0x18ae,	// (0x00050eda) im_writing_pane_t2

0x0001,

0xf227,	// (0x0005e853) im_writing_pane_t_ParamLimits

0xf227,	// (0x0005e853) im_writing_pane_t

0x1239,	// (0x00050865) input_focus_pane_cp04

0x1239,	// (0x00050865) input_focus_pane_cp05

0x477c,	// (0x00053da8) list_im_single_pane_ParamLimits

0x477c,	// (0x00053da8) list_im_single_pane

0x18cb,	// (0x00050ef7) list_single_im_pane_t1

0x5eeb,	// (0x00055517) blid_accuracy_pane

0x5ef3,	// (0x0005551f) blid_compass_pane

0x5efb,	// (0x00055527) main_location_t1

0x5f09,	// (0x00055535) main_location_t2

0x5f17,	// (0x00055543) main_location_t3

0x0002,

0xf598,	// (0x0005ebc4) main_location_t

0x1239,	// (0x00050865) aid_levels_location

0x14ac,	// (0x00050ad8) blid_accuracy_pane_g1

0x14ac,	// (0x00050ad8) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0005e8a7) blid_accuracy_pane_g

0x1905,	// (0x00050f31) wml_content_pane

0x1943,	// (0x00050f6f) wml_button_pane_ParamLimits

0x1943,	// (0x00050f6f) wml_button_pane

0x4792,	// (0x00053dbe) wml_list_single_large_pane_ParamLimits

0x4792,	// (0x00053dbe) wml_list_single_large_pane

0x47a6,	// (0x00053dd2) wml_list_single_medium_pane_ParamLimits

0x47a6,	// (0x00053dd2) wml_list_single_medium_pane

0x47bb,	// (0x00053de7) wml_list_single_small_pane_ParamLimits

0x47bb,	// (0x00053de7) wml_list_single_small_pane

0x1957,	// (0x00050f83) wml_selection_box_pane_ParamLimits

0x1957,	// (0x00050f83) wml_selection_box_pane

0x196a,	// (0x00050f96) wml_list_single_pane_t1

0x1979,	// (0x00050fa5) wml_list_single_medium_pane_t1

0x1988,	// (0x00050fb4) wml_list_single_large_pane_t1

0x1997,	// (0x00050fc3) input_focus_pane_cp02_ParamLimits

0x1997,	// (0x00050fc3) input_focus_pane_cp02

0x19aa,	// (0x00050fd6) wml_selection_box_pane_g1

0x19b3,	// (0x00050fdf) wml_selection_box_pane_t1_ParamLimits

0x19b3,	// (0x00050fdf) wml_selection_box_pane_t1

0x1494,	// (0x00050ac0) bg_wml_button_pane_ParamLimits

0x1494,	// (0x00050ac0) bg_wml_button_pane

0x19cb,	// (0x00050ff7) wml_button_pane_g1

0x19d3,	// (0x00050fff) wml_button_pane_t1

0x19cb,	// (0x00050ff7) wml_button_bg_pane_g1

0x19e3,	// (0x0005100f) wml_button_bg_pane_g2

0x19eb,	// (0x00051017) wml_button_bg_pane_g3

0x19f3,	// (0x0005101f) wml_button_bg_pane_g4

0x19fb,	// (0x00051027) wml_button_bg_pane_g5

0x1a03,	// (0x0005102f) wml_button_bg_pane_g6

0x1a0b,	// (0x00051037) wml_button_bg_pane_g7

0x1a13,	// (0x0005103f) wml_button_bg_pane_g8

0x1a1b,	// (0x00051047) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0005e858) wml_button_bg_pane_g

0x47d2,	// (0x00053dfe) bg_list_pane_cp02

0x1a23,	// (0x0005104f) mce_header_pane_ParamLimits

0x1a23,	// (0x0005104f) mce_header_pane

0x1a37,	// (0x00051063) mce_icon_pane

0x1a37,	// (0x00051063) mce_image_pane

0x1a40,	// (0x0005106c) mce_text_pane_ParamLimits

0x1a40,	// (0x0005106c) mce_text_pane

0x47db,	// (0x00053e07) scroll_pane_cp03

0x47db,	// (0x00053e07) scroll_pane_cp04

0x1a54,	// (0x00051080) scroll_pane_cp05_ParamLimits

0x1a54,	// (0x00051080) scroll_pane_cp05

0x47e5,	// (0x00053e11) mce_header_field_pane_ParamLimits

0x47e5,	// (0x00053e11) mce_header_field_pane

0x47fc,	// (0x00053e28) mce_header_field_pane_2_ParamLimits

0x47fc,	// (0x00053e28) mce_header_field_pane_2

0x4812,	// (0x00053e3e) mce_header_field_pane_3

0x481a,	// (0x00053e46) list_single_mce_message_pane_ParamLimits

0x481a,	// (0x00053e46) list_single_mce_message_pane

0x482f,	// (0x00053e5b) list_single_mce_smart_pane_ParamLimits

0x482f,	// (0x00053e5b) list_single_mce_smart_pane

0x1a60,	// (0x0005108c) input_focus_pane_cp03

0x1a69,	// (0x00051095) list_header_data_pane

0x484f,	// (0x00053e7b) mce_header_field_pane_t1

0x485d,	// (0x00053e89) list_single_mce_header_pane_ParamLimits

0x485d,	// (0x00053e89) list_single_mce_header_pane

0x1a71,	// (0x0005109d) list_single_mce_header_pane_t1

0x1a80,	// (0x000510ac) list_single_mce_message_pane_g1

0x1a89,	// (0x000510b5) list_single_mce_message_pane_t1

0x4897,	// (0x00053ec3) bg_cale_heading_pane_cp01_ParamLimits

0x4897,	// (0x00053ec3) bg_cale_heading_pane_cp01

0x1a98,	// (0x000510c4) bg_cale_pane_cp02_ParamLimits

0x1a98,	// (0x000510c4) bg_cale_pane_cp02

0x48c6,	// (0x00053ef2) cale_month_corner_pane

0x48e5,	// (0x00053f11) cale_month_day_heading_pane_ParamLimits

0x48e5,	// (0x00053f11) cale_month_day_heading_pane

0x491c,	// (0x00053f48) cale_month_pane_g1_ParamLimits

0x491c,	// (0x00053f48) cale_month_pane_g1

0x4940,	// (0x00053f6c) cale_month_pane_g2_ParamLimits

0x4940,	// (0x00053f6c) cale_month_pane_g2

0x4968,	// (0x00053f94) cale_month_pane_g3_ParamLimits

0x4968,	// (0x00053f94) cale_month_pane_g3

0x49a4,	// (0x00053fd0) cale_month_pane_g4_ParamLimits

0x49a4,	// (0x00053fd0) cale_month_pane_g4

0x49e0,	// (0x0005400c) cale_month_pane_g5_ParamLimits

0x49e0,	// (0x0005400c) cale_month_pane_g5

0x4a1c,	// (0x00054048) cale_month_pane_g6_ParamLimits

0x4a1c,	// (0x00054048) cale_month_pane_g6

0x4a58,	// (0x00054084) cale_month_pane_g7_ParamLimits

0x4a58,	// (0x00054084) cale_month_pane_g7

0x4a94,	// (0x000540c0) cale_month_pane_g8_ParamLimits

0x4a94,	// (0x000540c0) cale_month_pane_g8

0x4ad8,	// (0x00054104) cale_month_pane_g9_ParamLimits

0x4ad8,	// (0x00054104) cale_month_pane_g9

0x4b1a,	// (0x00054146) cale_month_pane_g10_ParamLimits

0x4b1a,	// (0x00054146) cale_month_pane_g10

0x4b5c,	// (0x00054188) cale_month_pane_g11_ParamLimits

0x4b5c,	// (0x00054188) cale_month_pane_g11

0x4b9e,	// (0x000541ca) cale_month_pane_g12_ParamLimits

0x4b9e,	// (0x000541ca) cale_month_pane_g12

0x4be0,	// (0x0005420c) cale_month_pane_g13_ParamLimits

0x4be0,	// (0x0005420c) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0005e86b) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0005e86b) cale_month_pane_g

0x4c22,	// (0x0005424e) cale_month_week_pane

0x4c3e,	// (0x0005426a) grid_cale_month_pane_ParamLimits

0x4c3e,	// (0x0005426a) grid_cale_month_pane

0x4c6c,	// (0x00054298) cale_month_day_heading_pane_t1

0x4cf2,	// (0x0005431e) cale_month_day_heading_pane_t2

0x4d83,	// (0x000543af) cale_month_day_heading_pane_t3

0x4e14,	// (0x00054440) cale_month_day_heading_pane_t4

0x4ea5,	// (0x000544d1) cale_month_day_heading_pane_t5

0x4f36,	// (0x00054562) cale_month_day_heading_pane_t6

0x4fc7,	// (0x000545f3) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0005e886) cale_month_day_heading_pane_t

0x16f7,	// (0x00050d23) bg_cale_side_pane_cp01

0x505c,	// (0x00054688) cale_month_week_pane_t1

0x5075,	// (0x000546a1) cale_month_week_pane_t2

0x508e,	// (0x000546ba) cale_month_week_pane_t3

0x50a7,	// (0x000546d3) cale_month_week_pane_t4

0x50c0,	// (0x000546ec) cale_month_week_pane_t5

0x50d9,	// (0x00054705) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0005e895) cale_month_week_pane_t

0x50f2,	// (0x0005471e) cell_cale_month_pane_ParamLimits

0x50f2,	// (0x0005471e) cell_cale_month_pane

0xafd3,	// (0x0005a5ff) cell_cale_month_pane_g1

0x51e4,	// (0x00054810) cell_cale_month_pane_t1_ParamLimits

0x51e4,	// (0x00054810) cell_cale_month_pane_t1

0x1705,	// (0x00050d31) grid_highlight_pane_cp08

0x14ac,	// (0x00050ad8) main_smil_g1

0x5204,	// (0x00054830) smil_status_pane

0x1ad7,	// (0x00051103) smil_text_pane

0xc07c,	// (0x0005b6a8) bg_popup_call3_rect_pane_g8

0xc084,	// (0x0005b6b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0005eb45) bg_popup_call3_rect_pane_g

0xc304,	// (0x0005b930) smil_status_volume_pane_g1

0x5215,	// (0x00054841) smil_status_pane_t1

0xea50,	// (0x0005e07c) volume_smil_pane

0x1ae1,	// (0x0005110d) list_smil_text_pane

0x522c,	// (0x00054858) scroll_pane_cp011

0x5237,	// (0x00054863) smil_text_list_pane_t1_ParamLimits

0x5237,	// (0x00054863) smil_text_list_pane_t1

0xafdf,	// (0x0005a60b) aid_volume_smil_ParamLimits

0xafdf,	// (0x0005a60b) aid_volume_smil

0x14ac,	// (0x00050ad8) smil_volume_pane_g1

0x14ac,	// (0x00050ad8) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0005e8a7) smil_volume_pane_g

0x3be0,	// (0x0005320c) listscroll_cale_day_pane

0x1aeb,	// (0x00051117) bg_cale_pane

0x1b03,	// (0x0005112f) list_cale_pane

0x1b26,	// (0x00051152) scroll_pane_cp09

0x1b37,	// (0x00051163) cale_bg_pane_g1

0x1b3f,	// (0x0005116b) cale_bg_pane_g2

0x1b47,	// (0x00051173) cale_bg_pane_g3

0x1b4f,	// (0x0005117b) cale_bg_pane_g4

0x1b57,	// (0x00051183) cale_bg_pane_g5

0x1b5f,	// (0x0005118b) cale_bg_pane_g6

0x1b67,	// (0x00051193) cale_bg_pane_g7

0x1b6f,	// (0x0005119b) cale_bg_pane_g8

0x1b77,	// (0x000511a3) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0005e8ac) cale_bg_pane_g

0x527b,	// (0x000548a7) list_cale_time_pane_ParamLimits

0x527b,	// (0x000548a7) list_cale_time_pane

0x1b7f,	// (0x000511ab) list_cale_time_pane_g1_ParamLimits

0x1b7f,	// (0x000511ab) list_cale_time_pane_g1

0x1b8b,	// (0x000511b7) list_cale_time_pane_g2_ParamLimits

0x1b8b,	// (0x000511b7) list_cale_time_pane_g2

0x5290,	// (0x000548bc) list_cale_time_pane_g3_ParamLimits

0x5290,	// (0x000548bc) list_cale_time_pane_g3

0x529c,	// (0x000548c8) list_cale_time_pane_g4_ParamLimits

0x529c,	// (0x000548c8) list_cale_time_pane_g4

0x52a8,	// (0x000548d4) list_cale_time_pane_g5_ParamLimits

0x52a8,	// (0x000548d4) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0005e8bf) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0005e8bf) list_cale_time_pane_g

0x1ba5,	// (0x000511d1) list_cale_time_pane_t1_ParamLimits

0x1ba5,	// (0x000511d1) list_cale_time_pane_t1

0x1bcd,	// (0x000511f9) list_cale_time_pane_t2_ParamLimits

0x1bcd,	// (0x000511f9) list_cale_time_pane_t2

0x554a,	// (0x00054b76) aid_blid_cardinal_pane

0x5588,	// (0x00054bb4) compass_pane_t4

0x1bf5,	// (0x00051221) list_cale_time_pane_t4_ParamLimits

0x1bf5,	// (0x00051221) list_cale_time_pane_t4

0x5596,	// (0x00054bc2) compass_pane_t5

0x55a4,	// (0x00054bd0) compass_pane_t6

0x55b2,	// (0x00054bde) compass_pane_t7

0x2054,	// (0x00051680) navi_pane_cc_t1

0x21f9,	// (0x00051825) aid_phob_thumbnail_center_pane

0x599d,	// (0x00054fc9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0005e8cc) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0005e8cc) list_cale_time_pane_t

0x0e92,	// (0x000504be) bg_popup_window_pane_cp02_ParamLimits

0x0e92,	// (0x000504be) bg_popup_window_pane_cp02

0x1c1d,	// (0x00051249) heading_pane_cp01_ParamLimits

0x1c1d,	// (0x00051249) heading_pane_cp01

0x1c29,	// (0x00051255) loc_req_pane_ParamLimits

0x1c29,	// (0x00051255) loc_req_pane

0x1c39,	// (0x00051265) loc_type_pane_ParamLimits

0x1c39,	// (0x00051265) loc_type_pane

0x1c4b,	// (0x00051277) loc_type_pane_t1_ParamLimits

0x1c4b,	// (0x00051277) loc_type_pane_t1

0x1c5d,	// (0x00051289) loc_type_pane_t2_ParamLimits

0x1c5d,	// (0x00051289) loc_type_pane_t2

0x1c6f,	// (0x0005129b) loc_type_pane_t3_ParamLimits

0x1c6f,	// (0x0005129b) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0005e8d3) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0005e8d3) loc_type_pane_t

0x1c81,	// (0x000512ad) list_loc_req_pane

0x1c8b,	// (0x000512b7) scroll_pane_cp012

0x52b4,	// (0x000548e0) list_single_loc_request_popup_menu_pane_ParamLimits

0x52b4,	// (0x000548e0) list_single_loc_request_popup_menu_pane

0x1c94,	// (0x000512c0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1c94,	// (0x000512c0) list_single_loc_request_popup_menu_pane_g1

0x1ca0,	// (0x000512cc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1ca0,	// (0x000512cc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0005e8da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0005e8da) list_single_loc_request_popup_menu_pane_g

0x1cac,	// (0x000512d8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1cac,	// (0x000512d8) list_single_loc_request_popup_menu_pane_t1

0x1494,	// (0x00050ac0) bg_popup_window_pane_cp03_ParamLimits

0x1494,	// (0x00050ac0) bg_popup_window_pane_cp03

0x245b,	// (0x00051a87) heading_loc_req_pane_ParamLimits

0x245b,	// (0x00051a87) heading_loc_req_pane

0x52c1,	// (0x000548ed) popup_dyc_status_message_window_g1_ParamLimits

0x52c1,	// (0x000548ed) popup_dyc_status_message_window_g1

0x52d5,	// (0x00054901) popup_dyc_status_message_window_t1_ParamLimits

0x52d5,	// (0x00054901) popup_dyc_status_message_window_t1

0x52ea,	// (0x00054916) popup_dyc_status_message_window_t2_ParamLimits

0x52ea,	// (0x00054916) popup_dyc_status_message_window_t2

0x52ff,	// (0x0005492b) popup_dyc_status_message_window_t3_ParamLimits

0x52ff,	// (0x0005492b) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0005e8df) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0005e8df) popup_dyc_status_message_window_t

0x1239,	// (0x00050865) bg_heading_pane_cp01

0x1cc2,	// (0x000512ee) heading_loc_req_pane_g1

0x1cca,	// (0x000512f6) heading_loc_req_pane_g2

0x1cd2,	// (0x000512fe) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0005e8e6) heading_loc_req_pane_g

0x1cda,	// (0x00051306) heading_loc_req_pane_t1

0x1ce9,	// (0x00051315) bg_popup_sub_pane_cp01_ParamLimits

0x1ce9,	// (0x00051315) bg_popup_sub_pane_cp01

0x1cf7,	// (0x00051323) popup_cale_events_window_g1_ParamLimits

0x1cf7,	// (0x00051323) popup_cale_events_window_g1

0x1d17,	// (0x00051343) popup_cale_events_window_g2_ParamLimits

0x1d17,	// (0x00051343) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x0005e91a) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x0005e91a) popup_cale_events_window_g

0x1d37,	// (0x00051363) popup_cale_events_window_t1_ParamLimits

0x1d37,	// (0x00051363) popup_cale_events_window_t1

0x1d49,	// (0x00051375) popup_cale_events_window_t2_ParamLimits

0x1d49,	// (0x00051375) popup_cale_events_window_t2

0x1d87,	// (0x000513b3) popup_cale_events_window_t3_ParamLimits

0x1d87,	// (0x000513b3) popup_cale_events_window_t3

0x1dc1,	// (0x000513ed) popup_cale_events_window_t4_ParamLimits

0x1dc1,	// (0x000513ed) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x0005e91f) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x0005e91f) popup_cale_events_window_t

0x5335,	// (0x00054961) call_type_pane

0x5345,	// (0x00054971) popup_call_status_window_g1

0x5359,	// (0x00054985) popup_call_status_window_g2

0x536d,	// (0x00054999) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x0005e928) popup_call_status_window_g

0x1df7,	// (0x00051423) call_type_pane_g1

0x1e00,	// (0x0005142c) call_type_pane_g2

0x0001,

0xf303,	// (0x0005e92f) call_type_pane_g

0x1239,	// (0x00050865) bg_popup_sub_pane_cp02

0x1e09,	// (0x00051435) listscroll_popup_wml_pane

0x1e11,	// (0x0005143d) list_wml_pane

0x1e1b,	// (0x00051447) scroll_pane_cp013

0x537d,	// (0x000549a9) list_single_graphic_popup_wml_pane_ParamLimits

0x537d,	// (0x000549a9) list_single_graphic_popup_wml_pane

0x14ac,	// (0x00050ad8) list_single_graphic_popup_wml_pane_g1

0x1e24,	// (0x00051450) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x0005e934) list_single_graphic_popup_wml_pane_g

0x1e2c,	// (0x00051458) list_single_graphic_popup_wml_pane_t1

0x1e42,	// (0x0005146e) aid_call_pane

0x148c,	// (0x00050ab8) popup_clock_analogue_window_g1

0x148c,	// (0x00050ab8) popup_clock_analogue_window_g2

0xb01f,	// (0x0005a64b) popup_clock_analogue_window_g3

0xb01f,	// (0x0005a64b) popup_clock_analogue_window_g4

0x14ac,	// (0x00050ad8) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x0005e939) popup_clock_analogue_window_g

0xb027,	// (0x0005a653) popup_clock_analogue_window_t1

0xb035,	// (0x0005a661) clock_digital_number_pane_ParamLimits

0xb035,	// (0x0005a661) clock_digital_number_pane

0xb041,	// (0x0005a66d) clock_digital_number_pane_cp02_ParamLimits

0xb041,	// (0x0005a66d) clock_digital_number_pane_cp02

0xb04d,	// (0x0005a679) clock_digital_number_pane_cp03_ParamLimits

0xb04d,	// (0x0005a679) clock_digital_number_pane_cp03

0xb059,	// (0x0005a685) clock_digital_number_pane_cp04_ParamLimits

0xb059,	// (0x0005a685) clock_digital_number_pane_cp04

0xb065,	// (0x0005a691) clock_digital_separator_pane_ParamLimits

0xb065,	// (0x0005a691) clock_digital_separator_pane

0xb071,	// (0x0005a69d) popup_clock_digital_window_t1

0x14ac,	// (0x00050ad8) clock_digital_number_pane_g1

0x14ac,	// (0x00050ad8) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0005e8a7) clock_digital_number_pane_g

0x14ac,	// (0x00050ad8) clock_digital_separator_pane_g1

0x14ac,	// (0x00050ad8) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0005e8a7) clock_digital_separator_pane_g

0x1239,	// (0x00050865) bg_popup_window_pane_cp04

0x1e4a,	// (0x00051476) heading_pane_cp03

0x1e52,	// (0x0005147e) listscroll_popup_gms_pane

0x1e5a,	// (0x00051486) grid_large_graphic_popup_pane

0x1e64,	// (0x00051490) listscroll_popup_gms_pane_g1

0x1e6c,	// (0x00051498) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x0005e944) listscroll_popup_gms_pane_g

0x193b,	// (0x00050f67) scroll_pane_cp014

0x5390,	// (0x000549bc) cell_large_graphic_popup_pane_ParamLimits

0x5390,	// (0x000549bc) cell_large_graphic_popup_pane

0x53a6,	// (0x000549d2) cell_large_graphic_popup_pane_g1_ParamLimits

0x53a6,	// (0x000549d2) cell_large_graphic_popup_pane_g1

0x1e74,	// (0x000514a0) cell_large_graphic_popup_pane_g2_ParamLimits

0x1e74,	// (0x000514a0) cell_large_graphic_popup_pane_g2

0x1e80,	// (0x000514ac) cell_large_graphic_popup_pane_g3_ParamLimits

0x1e80,	// (0x000514ac) cell_large_graphic_popup_pane_g3

0x1e8d,	// (0x000514b9) cell_large_graphic_popup_pane_g4_ParamLimits

0x1e8d,	// (0x000514b9) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x0005e949) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x0005e949) cell_large_graphic_popup_pane_g

0x1e9d,	// (0x000514c9) grid_highlight_pane_cp010

0x14ac,	// (0x00050ad8) bg_popup_call_pane_g1

0x1ea7,	// (0x000514d3) list_single_graphic_popup_conf_pane_ParamLimits

0x1ea7,	// (0x000514d3) list_single_graphic_popup_conf_pane

0x1eba,	// (0x000514e6) list_highlight_pane_cp01

0x1ec3,	// (0x000514ef) list_single_graphic_popup_conf_pane_g1

0x1ecb,	// (0x000514f7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x0005e952) list_single_graphic_popup_conf_pane_g

0x1ed3,	// (0x000514ff) list_single_graphic_popup_conf_pane_t1

0x1ee1,	// (0x0005150d) linegrid_cams_pane_g1

0x53b2,	// (0x000549de) linegrid_cams_pane_g2

0x1688,	// (0x00050cb4) linegrid_cams_pane_g3

0x1eea,	// (0x00051516) linegrid_cams_pane_g4

0x53bb,	// (0x000549e7) linegrid_cams_pane_g5

0x53c4,	// (0x000549f0) linegrid_cams_pane_g6

0x1738,	// (0x00050d64) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x0005e957) linegrid_cams_pane_g

0x1ef3,	// (0x0005151f) popup_clock_analogue_window

0x1ef3,	// (0x0005151f) popup_clock_digital_window

0x1239,	// (0x00050865) popup_phob_thumbnail_window

0x14ac,	// (0x00050ad8) call_video_uplink_pane_g1

0x1efc,	// (0x00051528) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x0005e966) call_video_uplink_pane_g

0x1705,	// (0x00050d31) video_uplink_pane

0x1f04,	// (0x00051530) mce_image_pane_g1

0x53cd,	// (0x000549f9) mce_image_pane_g2

0x53d5,	// (0x00054a01) mce_image_pane_g3

0x53dd,	// (0x00054a09) mce_image_pane_g4

0x53e5,	// (0x00054a11) mce_image_pane_g5

0x0004,

0xf33f,	// (0x0005e96b) mce_image_pane_g

0x1f0e,	// (0x0005153a) control_top_pane_stacon_cp01_ParamLimits

0x1f0e,	// (0x0005153a) control_top_pane_stacon_cp01

0x1f1e,	// (0x0005154a) uni_indicator_pane_stacon_cp01_ParamLimits

0x1f1e,	// (0x0005154a) uni_indicator_pane_stacon_cp01

0x1f2f,	// (0x0005155b) bg_popup_sub_pane_cp03

0x1f39,	// (0x00051565) chi_dic_find_pane

0x53ed,	// (0x00054a19) listscroll_chi_dic_pane

0x1f41,	// (0x0005156d) main_pane_chidic_g1

0x1f49,	// (0x00051575) chi_dic_find_pane_t1

0x1f57,	// (0x00051583) find_chidic_pane

0x1f60,	// (0x0005158c) chi_dic_list_pane_ParamLimits

0x1f60,	// (0x0005158c) chi_dic_list_pane

0x1f71,	// (0x0005159d) scroll_pane_cp020

0x1f79,	// (0x000515a5) find_chidic_pane_t1

0x1239,	// (0x00050865) input_focus_pane_cp06

0x5401,	// (0x00054a2d) list_chi_dic_pane_ParamLimits

0x5401,	// (0x00054a2d) list_chi_dic_pane

0x5413,	// (0x00054a3f) list_chi_dic_pane_t1_ParamLimits

0x5413,	// (0x00054a3f) list_chi_dic_pane_t1

0x1239,	// (0x00050865) list_highlight_pane_cp020

0x1f88,	// (0x000515b4) bg_cale_heading_pane_g1

0x5426,	// (0x00054a52) bg_cale_heading_pane_g2

0x542e,	// (0x00054a5a) bg_cale_heading_pane_g3

0x5436,	// (0x00054a62) bg_cale_heading_pane_g4

0x543e,	// (0x00054a6a) bg_cale_heading_pane_g5

0x5446,	// (0x00054a72) bg_cale_heading_pane_g6

0x544e,	// (0x00054a7a) bg_cale_heading_pane_g7

0x5456,	// (0x00054a82) bg_cale_heading_pane_g8

0x545e,	// (0x00054a8a) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x0005e976) bg_cale_heading_pane_g

0x1f88,	// (0x000515b4) bg_cale_side_pane_g1

0x5466,	// (0x00054a92) bg_cale_side_pane_g2

0x546e,	// (0x00054a9a) bg_cale_side_pane_g3

0x5476,	// (0x00054aa2) bg_cale_side_pane_g4

0x547e,	// (0x00054aaa) bg_cale_side_pane_g5

0x5486,	// (0x00054ab2) bg_cale_side_pane_g6

0x548e,	// (0x00054aba) bg_cale_side_pane_g7

0x5496,	// (0x00054ac2) bg_cale_side_pane_g8

0x549e,	// (0x00054aca) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x0005e989) bg_cale_side_pane_g

0x54a6,	// (0x00054ad2) popup_call_status_window_ParamLimits

0x54a6,	// (0x00054ad2) popup_call_status_window

0x1f90,	// (0x000515bc) stacon_top_pane

0x1f98,	// (0x000515c4) status_pane_ParamLimits

0x1f98,	// (0x000515c4) status_pane

0x1fb2,	// (0x000515de) status_small_pane

0x1fba,	// (0x000515e6) control_pane

0x1239,	// (0x00050865) stacon_bottom_pane

0x1fc2,	// (0x000515ee) list_single_mce_smart_pane_t1_ParamLimits

0x1fc2,	// (0x000515ee) list_single_mce_smart_pane_t1

0x1fd5,	// (0x00051601) list_single_mce_smart_pane_t2_ParamLimits

0x1fd5,	// (0x00051601) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x0005e99c) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x0005e99c) list_single_mce_smart_pane_t

0x54ed,	// (0x00054b19) compass_pane

0x54f6,	// (0x00054b22) main_location2_pane_t1

0x550c,	// (0x00054b38) main_location2_pane_t2

0x5522,	// (0x00054b4e) main_location2_pane_t3

0x0003,

0xf375,	// (0x0005e9a1) main_location2_pane_t

0x1ffd,	// (0x00051629) compass_pane_g1_ParamLimits

0x1ffd,	// (0x00051629) compass_pane_g1

0x556a,	// (0x00054b96) compass_pane_t1

0x5579,	// (0x00054ba5) compass_pane_t2

0x0005,

0xf37e,	// (0x0005e9aa) compass_pane_t

0x55c0,	// (0x00054bec) text_secondary_cp61

0x204b,	// (0x00051677) navi_pane_cams_g5

0x2097,	// (0x000516c3) navi_pane_im_t1

0x20a5,	// (0x000516d1) navi_pane_mp_g1_ParamLimits

0x20a5,	// (0x000516d1) navi_pane_mp_g1

0x20b9,	// (0x000516e5) navi_pane_mp_g2_ParamLimits

0x20b9,	// (0x000516e5) navi_pane_mp_g2

0x20c5,	// (0x000516f1) navi_pane_mp_g3_ParamLimits

0x20c5,	// (0x000516f1) navi_pane_mp_g3

0x0002,

0xf392,	// (0x0005e9be) navi_pane_mp_g_ParamLimits

0xf392,	// (0x0005e9be) navi_pane_mp_g

0x20d1,	// (0x000516fd) navi_pane_mp_t1

0x20df,	// (0x0005170b) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0005e9c5) navi_pane_mp_t

0x214a,	// (0x00051776) navi_pane_vt_g1

0x20d1,	// (0x000516fd) navi_pane_vt_t1

0x2152,	// (0x0005177e) navi_slider_pane

0x1751,	// (0x00050d7d) zooming_pane

0x215a,	// (0x00051786) navi_slider_pane_g1

0xb08e,	// (0x0005a6ba) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x0005e9cc) navi_slider_pane_g

0x217e,	// (0x000517aa) aid_levels_zoom

0x2186,	// (0x000517b2) zooming_pane_g1

0x218e,	// (0x000517ba) zooming_pane_g2

0x218e,	// (0x000517ba) zooming_pane_g3

0x0002,

0xf3af,	// (0x0005e9db) zooming_pane_g

0x2196,	// (0x000517c2) level_10_zoom

0x219f,	// (0x000517cb) level_11_zoom

0x21a8,	// (0x000517d4) level_1_zoom

0x21b1,	// (0x000517dd) level_2_zoom

0x21ba,	// (0x000517e6) level_3_zoom

0x21c3,	// (0x000517ef) level_4_zoom

0x21cc,	// (0x000517f8) level_5_zoom

0x21d5,	// (0x00051801) level_6_zoom

0x21de,	// (0x0005180a) level_7_zoom

0x21e7,	// (0x00051813) level_8_zoom

0x21f0,	// (0x0005181c) level_9_zoom

0x2201,	// (0x0005182d) popup_phob_thumbnail_window_g1

0x2209,	// (0x00051835) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0005e9e2) popup_phob_thumbnail_window_g

0xc236,	// (0x0005b862) level_1_location

0xc23e,	// (0x0005b86a) level_2_location

0xc246,	// (0x0005b872) level_3_location

0xc24e,	// (0x0005b87a) level_4_location

0x1751,	// (0x00050d7d) level_5_location

0x5656,	// (0x00054c82) mce_icon_pane_g1

0x565e,	// (0x00054c8a) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0005e9e7) mce_icon_pane_g

0x247b,	// (0x00051aa7) main_mup_pane_g1_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g1

0x247b,	// (0x00051aa7) main_mup_pane_g2_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g2

0x247b,	// (0x00051aa7) main_mup_pane_g3_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g3

0x247b,	// (0x00051aa7) main_mup_pane_g4_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g4

0x247b,	// (0x00051aa7) main_mup_pane_g5_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g5

0x247b,	// (0x00051aa7) main_mup_pane_g6_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g6

0x247b,	// (0x00051aa7) main_mup_pane_g7_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g7

0x247b,	// (0x00051aa7) main_mup_pane_g8_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g8

0x247b,	// (0x00051aa7) main_mup_pane_g9_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g9

0x247b,	// (0x00051aa7) main_mup_pane_g10_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g10

0x247b,	// (0x00051aa7) main_mup_pane_g11_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g11

0x150e,	// (0x00050b3a) main_mup_pane_g12_ParamLimits

0x150e,	// (0x00050b3a) main_mup_pane_g12

0x247b,	// (0x00051aa7) main_mup_pane_g13_ParamLimits

0x247b,	// (0x00051aa7) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x0005e9ec) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x0005e9ec) main_mup_pane_g

0x2467,	// (0x00051a93) main_mup_pane_t1_ParamLimits

0x2467,	// (0x00051a93) main_mup_pane_t1

0x2467,	// (0x00051a93) main_mup_pane_t2_ParamLimits

0x2467,	// (0x00051a93) main_mup_pane_t2

0x2467,	// (0x00051a93) main_mup_pane_t3_ParamLimits

0x2467,	// (0x00051a93) main_mup_pane_t3

0x2211,	// (0x0005183d) main_mup_pane_t4_ParamLimits

0x2211,	// (0x0005183d) main_mup_pane_t4

0x2211,	// (0x0005183d) main_mup_pane_t5_ParamLimits

0x2211,	// (0x0005183d) main_mup_pane_t5

0x179f,	// (0x00050dcb) main_mup_pane_t6_ParamLimits

0x179f,	// (0x00050dcb) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0005ea07) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0005ea07) main_mup_pane_t

0x1791,	// (0x00050dbd) mup_progress_pane_ParamLimits

0x1791,	// (0x00050dbd) mup_progress_pane

0x244d,	// (0x00051a79) mup_visualizer_pane_ParamLimits

0x244d,	// (0x00051a79) mup_visualizer_pane

0x244d,	// (0x00051a79) mup_volume_pane_ParamLimits

0x244d,	// (0x00051a79) mup_volume_pane

0x151c,	// (0x00050b48) mup_visualizer_pane_g1_ParamLimits

0x151c,	// (0x00050b48) mup_visualizer_pane_g1

0x2233,	// (0x0005185f) mup_visualizer_pane_g2_ParamLimits

0x2233,	// (0x0005185f) mup_visualizer_pane_g2

0x150e,	// (0x00050b3a) mup_visualizer_pane_g3_ParamLimits

0x150e,	// (0x00050b3a) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0005ea14) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0005ea14) mup_visualizer_pane_g

0x17cd,	// (0x00050df9) mup_volume_pane_g1

0x17cd,	// (0x00050df9) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x0005ea1b) mup_volume_pane_g

0x17cd,	// (0x00050df9) mup_progress_pane_g1

0x17cd,	// (0x00050df9) mup_progress_pane_g2

0x17cd,	// (0x00050df9) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x0005ea20) mup_progress_pane_g

0x1239,	// (0x00050865) bg_popup_window_pane_cp05

0x2241,	// (0x0005186d) heading_pane_cp02_ParamLimits

0x2241,	// (0x0005186d) heading_pane_cp02

0x225b,	// (0x00051887) list_popup_blid_pane

0x2263,	// (0x0005188f) list_blid_sat_info_pane_ParamLimits

0x2263,	// (0x0005188f) list_blid_sat_info_pane

0x2276,	// (0x000518a2) list_blid_sat_info_pane_g1

0x227e,	// (0x000518aa) list_blid_sat_info_pane_t1

0x5738,	// (0x00054d64) mup_equalizer_pane_ParamLimits

0x5738,	// (0x00054d64) mup_equalizer_pane

0x5751,	// (0x00054d7d) mup_equalizer_pane_cp1_ParamLimits

0x5751,	// (0x00054d7d) mup_equalizer_pane_cp1

0x576a,	// (0x00054d96) mup_equalizer_pane_cp2_ParamLimits

0x576a,	// (0x00054d96) mup_equalizer_pane_cp2

0x5783,	// (0x00054daf) mup_equalizer_pane_cp3_ParamLimits

0x5783,	// (0x00054daf) mup_equalizer_pane_cp3

0x579c,	// (0x00054dc8) mup_equalizer_pane_cp4_ParamLimits

0x579c,	// (0x00054dc8) mup_equalizer_pane_cp4

0x57b5,	// (0x00054de1) mup_equalizer_pane_cp5

0x57c7,	// (0x00054df3) mup_equalizer_pane_cp6

0x57d9,	// (0x00054e05) mup_equalizer_pane_cp7

0xc114,	// (0x0005b740) bg_popup_call_poc_act_pane_g9

0xc11c,	// (0x0005b748) bg_popup_call_poc_act_pane_g10

0xc124,	// (0x0005b750) bg_popup_call_poc_act_pane_g11

0x000a,

0x1494,	// (0x00050ac0) mup_scale_pane

0x14ac,	// (0x00050ad8) mup_scale_pane_g1

0x228c,	// (0x000518b8) mup_scale_pane_g2

0x0006,

0xf410,	// (0x0005ea3c) mup_scale_pane_g

0x22b0,	// (0x000518dc) msg_data_pane

0x22b8,	// (0x000518e4) scroll_pane_cp017

0x57ff,	// (0x00054e2b) bg_list_pane_cp04_ParamLimits

0x57ff,	// (0x00054e2b) bg_list_pane_cp04

0x22c0,	// (0x000518ec) msg_data_pane_g1

0x53cd,	// (0x000549f9) msg_data_pane_g2

0x53d5,	// (0x00054a01) msg_data_pane_g3

0x581f,	// (0x00054e4b) msg_data_pane_g4

0x53e5,	// (0x00054a11) msg_data_pane_g5

0x5656,	// (0x00054c82) msg_data_pane_g6

0x5827,	// (0x00054e53) msg_data_pane_g7

0x0006,

0xf41f,	// (0x0005ea4b) msg_data_pane_g

0x582f,	// (0x00054e5b) msg_text_pane_ParamLimits

0x582f,	// (0x00054e5b) msg_text_pane

0x5857,	// (0x00054e83) qrid_highlight_pane_cp011_ParamLimits

0x5857,	// (0x00054e83) qrid_highlight_pane_cp011

0x1239,	// (0x00050865) msg_body_pane

0x1239,	// (0x00050865) msg_header_pane

0x22d1,	// (0x000518fd) input_focus_pane_cp07

0x5879,	// (0x00054ea5) msg_header_pane_t1_ParamLimits

0x5879,	// (0x00054ea5) msg_header_pane_t1

0x588f,	// (0x00054ebb) msg_header_pane_t2_ParamLimits

0x588f,	// (0x00054ebb) msg_header_pane_t2

0x0001,

0xf433,	// (0x0005ea5f) msg_header_pane_t_ParamLimits

0xf433,	// (0x0005ea5f) msg_header_pane_t

0x22e6,	// (0x00051912) msg_body_pane_g1

0x58a6,	// (0x00054ed2) msg_body_pane_t1_ParamLimits

0x58a6,	// (0x00054ed2) msg_body_pane_t1

0xb0a0,	// (0x0005a6cc) msg_body_pane_t2_ParamLimits

0xb0a0,	// (0x0005a6cc) msg_body_pane_t2

0xb0b2,	// (0x0005a6de) msg_body_pane_t3_ParamLimits

0xb0b2,	// (0x0005a6de) msg_body_pane_t3

0x0002,

0xf438,	// (0x0005ea64) msg_body_pane_t_ParamLimits

0xf438,	// (0x0005ea64) msg_body_pane_t

0x5907,	// (0x00054f33) main_viewer_pane_g1_ParamLimits

0x5907,	// (0x00054f33) main_viewer_pane_g1

0x5913,	// (0x00054f3f) main_viewer_pane_g2_ParamLimits

0x5913,	// (0x00054f3f) main_viewer_pane_g2

0x591f,	// (0x00054f4b) main_viewer_pane_g3_ParamLimits

0x591f,	// (0x00054f4b) main_viewer_pane_g3

0x592e,	// (0x00054f5a) main_viewer_pane_g4_ParamLimits

0x592e,	// (0x00054f5a) main_viewer_pane_g4

0xb0dc,	// (0x0005a708) main_viewer_pane_g5_ParamLimits

0xb0dc,	// (0x0005a708) main_viewer_pane_g5

0xb0dc,	// (0x0005a708) main_viewer_pane_g7_ParamLimits

0xb0dc,	// (0x0005a708) main_viewer_pane_g7

0xb0ee,	// (0x0005a71a) main_viewer_pane_g8_ParamLimits

0xb0ee,	// (0x0005a71a) main_viewer_pane_g8

0x0007,

0xf448,	// (0x0005ea74) main_viewer_pane_g_ParamLimits

0xf448,	// (0x0005ea74) main_viewer_pane_g

0x22ee,	// (0x0005191a) viewer_content_pane_ParamLimits

0x22ee,	// (0x0005191a) viewer_content_pane

0x5962,	// (0x00054f8e) main_postcard_pane_g1_ParamLimits

0x5962,	// (0x00054f8e) main_postcard_pane_g1

0x5976,	// (0x00054fa2) main_postcard_pane_g2_ParamLimits

0x5976,	// (0x00054fa2) main_postcard_pane_g2

0x598a,	// (0x00054fb6) main_postcard_pane_g3_ParamLimits

0x598a,	// (0x00054fb6) main_postcard_pane_g3

0x0005,

0xf459,	// (0x0005ea85) main_postcard_pane_g_ParamLimits

0xf459,	// (0x0005ea85) main_postcard_pane_g

0x599d,	// (0x00054fc9) main_postcard_pane_g4

0xc317,	// (0x0005b943) smil_status_volume_pane_g2

0x59d8,	// (0x00055004) postcard_pane_ParamLimits

0x59d8,	// (0x00055004) postcard_pane

0x230a,	// (0x00051936) postcard_pane_g1_ParamLimits

0x230a,	// (0x00051936) postcard_pane_g1

0x5a18,	// (0x00055044) postcard_pane_g2_ParamLimits

0x5a18,	// (0x00055044) postcard_pane_g2

0x5a24,	// (0x00055050) postcard_pane_g3_ParamLimits

0x5a24,	// (0x00055050) postcard_pane_g3

0x22fc,	// (0x00051928) postcard_pane_g4_ParamLimits

0x22fc,	// (0x00051928) postcard_pane_g4

0x5a30,	// (0x0005505c) postcard_pane_g5_ParamLimits

0x5a30,	// (0x0005505c) postcard_pane_g5

0x5a45,	// (0x00055071) postcard_pane_g6_ParamLimits

0x5a45,	// (0x00055071) postcard_pane_g6

0x230a,	// (0x00051936) postcard_pane_g7_ParamLimits

0x230a,	// (0x00051936) postcard_pane_g7

0x0006,

0xf466,	// (0x0005ea92) postcard_pane_g_ParamLimits

0xf466,	// (0x0005ea92) postcard_pane_g

0x5a59,	// (0x00055085) main_mp2_pane_g1_ParamLimits

0x5a59,	// (0x00055085) main_mp2_pane_g1

0x5a65,	// (0x00055091) main_mp2_pane_g2_ParamLimits

0x5a65,	// (0x00055091) main_mp2_pane_g2

0x5a71,	// (0x0005509d) main_mp2_pane_g3_ParamLimits

0x5a71,	// (0x0005509d) main_mp2_pane_g3

0x0002,

0xf475,	// (0x0005eaa1) main_mp2_pane_g_ParamLimits

0xf475,	// (0x0005eaa1) main_mp2_pane_g

0x5a7d,	// (0x000550a9) main_mp2_pane_t1_ParamLimits

0x5a7d,	// (0x000550a9) main_mp2_pane_t1

0x5a92,	// (0x000550be) main_mp2_pane_t2_ParamLimits

0x5a92,	// (0x000550be) main_mp2_pane_t2

0x5aa4,	// (0x000550d0) main_mp2_pane_t3_ParamLimits

0x5aa4,	// (0x000550d0) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x0005eaa8) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x0005eaa8) main_mp2_pane_t

0x2318,	// (0x00051944) pec_content_pane_ParamLimits

0x2318,	// (0x00051944) pec_content_pane

0x193b,	// (0x00050f67) scroll_pane_cp015

0x232a,	// (0x00051956) pec_attribute_pane_ParamLimits

0x232a,	// (0x00051956) pec_attribute_pane

0x5ab6,	// (0x000550e2) pec_content_pane_g1_ParamLimits

0x5ab6,	// (0x000550e2) pec_content_pane_g1

0x233a,	// (0x00051966) pec_content_pane_t1_ParamLimits

0x233a,	// (0x00051966) pec_content_pane_t1

0x234c,	// (0x00051978) pec_content_pane_t2_ParamLimits

0x234c,	// (0x00051978) pec_content_pane_t2

0x0001,

0xf483,	// (0x0005eaaf) pec_content_pane_t_ParamLimits

0xf483,	// (0x0005eaaf) pec_content_pane_t

0x5ac2,	// (0x000550ee) list_single_graphic_pane_cp01_ParamLimits

0x5ac2,	// (0x000550ee) list_single_graphic_pane_cp01

0x1494,	// (0x00050ac0) bg_popup_sub_pane_cp04

0x235e,	// (0x0005198a) popup_mup_playback_window_g1

0x236a,	// (0x00051996) popup_mup_playback_window_t1

0x237f,	// (0x000519ab) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x0005eab4) popup_mup_playback_window_t

0x23b6,	// (0x000519e2) main_image_pane_g1_ParamLimits

0x23b6,	// (0x000519e2) main_image_pane_g1

0x23f9,	// (0x00051a25) scroll_pane_cp018_ParamLimits

0x23f9,	// (0x00051a25) scroll_pane_cp018

0x2411,	// (0x00051a3d) scroll_pane_cp016_ParamLimits

0x2411,	// (0x00051a3d) scroll_pane_cp016

0x5b8d,	// (0x000551b9) smil2_image_pane_ParamLimits

0x5b8d,	// (0x000551b9) smil2_image_pane

0x5bb5,	// (0x000551e1) smil2_root_pane_ParamLimits

0x5bb5,	// (0x000551e1) smil2_root_pane

0x5bed,	// (0x00055219) smil2_text_pane_ParamLimits

0x5bed,	// (0x00055219) smil2_text_pane

0x1239,	// (0x00050865) bg_list_pane_cp06

0x2445,	// (0x00051a71) grid_radio_pane

0x1239,	// (0x00050865) bg_popup_window_pane_cp06

0xb106,	// (0x0005a732) main_fmradio_pane_t1

0x1e4a,	// (0x00051476) heading_pane_cp04

0xb114,	// (0x0005a740) main_fmradio_pane_t2

0xc16c,	// (0x0005b798) popup_cale_lunar_info_window_g1

0xb122,	// (0x0005a74e) main_fmradio_pane_t3

0xc174,	// (0x0005b7a0) popup_cale_lunar_info_window_g2

0xb130,	// (0x0005a75c) main_fmradio_pane_t4

0x0001,

0xb13e,	// (0x0005a76a) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x0005eba7) popup_cale_lunar_info_window_g

0xf49d,	// (0x0005eac9) main_fmradio_pane_t

0xb14c,	// (0x0005a778) wait_bar_pane_cp03

0xb154,	// (0x0005a780) cell_fmradio_pane_ParamLimits

0xb154,	// (0x0005a780) cell_fmradio_pane

0x230a,	// (0x00051936) cell_fmradio_pane_g1_ParamLimits

0x230a,	// (0x00051936) cell_fmradio_pane_g1

0x1239,	// (0x00050865) grid_highlight_pane_cp011

0xb167,	// (0x0005a793) poc_content_pane_ParamLimits

0xb167,	// (0x0005a793) poc_content_pane

0xb17a,	// (0x0005a7a6) scroll_pane_cp019

0x5c59,	// (0x00055285) popup_call_poc_act_window_ParamLimits

0x5c59,	// (0x00055285) popup_call_poc_act_window

0x5c79,	// (0x000552a5) popup_call_poc_inact_window_ParamLimits

0x5c79,	// (0x000552a5) popup_call_poc_inact_window

0xf53f,	// (0x0005eb6b) bg_popup_call_poc_act_pane_g

0xc12c,	// (0x0005b758) bg_popup_call_poc_inact_pane_g1

0xc134,	// (0x0005b760) bg_popup_call_poc_inact_pane_g2

0xb182,	// (0x0005a7ae) popup_call_poc_act_window_g2

0xc13c,	// (0x0005b768) bg_popup_call_poc_inact_pane_g3

0xc0ec,	// (0x0005b718) bg_popup_call_poc_inact_pane_g4

0xc144,	// (0x0005b770) bg_popup_call_poc_inact_pane_g5

0xb18a,	// (0x0005a7b6) popup_call_poc_act_window_t1_ParamLimits

0xb18a,	// (0x0005a7b6) popup_call_poc_act_window_t1

0xb1b2,	// (0x0005a7de) popup_call_poc_act_window_t2_ParamLimits

0xb1b2,	// (0x0005a7de) popup_call_poc_act_window_t2

0xb1da,	// (0x0005a806) popup_call_poc_act_window_t3_ParamLimits

0xb1da,	// (0x0005a806) popup_call_poc_act_window_t3

0xb202,	// (0x0005a82e) popup_call_poc_act_window_t4_ParamLimits

0xb202,	// (0x0005a82e) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0005ead4) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0005ead4) popup_call_poc_act_window_t

0xc14c,	// (0x0005b778) bg_popup_call_poc_inact_pane_g6

0xc154,	// (0x0005b780) bg_popup_call_poc_inact_pane_g7

0xc15c,	// (0x0005b788) bg_popup_call_poc_inact_pane_g8

0xb214,	// (0x0005a840) popup_call_poc_inact_window_g2

0xc164,	// (0x0005b790) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x0005eb82) bg_popup_call_poc_inact_pane_g

0xb21c,	// (0x0005a848) popup_call_poc_inact_window_t1_ParamLimits

0xb21c,	// (0x0005a848) popup_call_poc_inact_window_t1

0xb231,	// (0x0005a85d) popup_call_poc_inact_window_t2_ParamLimits

0xb231,	// (0x0005a85d) popup_call_poc_inact_window_t2

0xb246,	// (0x0005a872) popup_call_poc_inact_window_t3_ParamLimits

0xb246,	// (0x0005a872) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x0005eadd) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x0005eadd) popup_call_poc_inact_window_t

0xc2a5,	// (0x0005b8d1) context_pane_ParamLimits

0x63a5,	// (0x000559d1) signal_pane_ParamLimits

0x1751,	// (0x00050d7d) main_call2_pane

0xea1c,	// (0x0005e048) popup_phob_thumbnail2_window_ParamLimits

0xea1c,	// (0x0005e048) popup_phob_thumbnail2_window

0xb0c4,	// (0x0005a6f0) aid_hotspot_pointer_arrow_pane

0xb0cc,	// (0x0005a6f8) aid_hotspot_pointer_hand_pane

0x5f4e,	// (0x0005557a) phob_pre_status_pane_g5

0x2225,	// (0x00051851) cams_zoom_pane_ParamLimits

0x422b,	// (0x00053857) image_vga_pane_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g2_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g3_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g4_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g5_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g6_ParamLimits

0x150e,	// (0x00050b3a) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0005e7f1) main_camera_pane_g_ParamLimits

0x2211,	// (0x0005183d) main_camera_pane_t1_ParamLimits

0x2211,	// (0x0005183d) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0005e802) main_camera_pane_t_ParamLimits

0x1494,	// (0x00050ac0) bg_popup_preview_window_pane_cp01_ParamLimits

0x1494,	// (0x00050ac0) bg_popup_preview_window_pane_cp01

0xb25b,	// (0x0005a887) popup_phob_thumbnail2_window_g1_ParamLimits

0xb25b,	// (0x0005a887) popup_phob_thumbnail2_window_g1

0x1239,	// (0x00050865) call2_cli_visual_pane

0x5ca5,	// (0x000552d1) popup_call2_audio_conf_window_ParamLimits

0x5ca5,	// (0x000552d1) popup_call2_audio_conf_window

0x5cc3,	// (0x000552ef) popup_call2_audio_first_window_ParamLimits

0x5cc3,	// (0x000552ef) popup_call2_audio_first_window

0x5d39,	// (0x00055365) popup_call2_audio_in_window_ParamLimits

0x5d39,	// (0x00055365) popup_call2_audio_in_window

0x5d6d,	// (0x00055399) popup_call2_audio_out_window_ParamLimits

0x5d6d,	// (0x00055399) popup_call2_audio_out_window

0x5dbf,	// (0x000553eb) popup_call2_audio_second_window_ParamLimits

0x5dbf,	// (0x000553eb) popup_call2_audio_second_window

0x5e11,	// (0x0005543d) popup_call2_audio_wait_window_ParamLimits

0x5e11,	// (0x0005543d) popup_call2_audio_wait_window

0x1239,	// (0x00050865) bg_popup_call2_act_pane_cp03

0xb267,	// (0x0005a893) list_conf_pane_cp

0xb26f,	// (0x0005a89b) popup_call2_audio_conf_window_t1

0x1ea7,	// (0x000514d3) list_single_graphic_popup_conf2_pane_ParamLimits

0x1ea7,	// (0x000514d3) list_single_graphic_popup_conf2_pane

0x1eba,	// (0x000514e6) list_highlight_pane_cp04

0xb27d,	// (0x0005a8a9) list_single_graphic_popup_conf2_pane_g1

0x1ecb,	// (0x000514f7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0005eae4) list_single_graphic_popup_conf2_pane_g

0xb285,	// (0x0005a8b1) list_single_graphic_popup_conf2_pane_t1

0xb293,	// (0x0005a8bf) bg_popup_call2_act_pane_cp01_ParamLimits

0xb293,	// (0x0005a8bf) bg_popup_call2_act_pane_cp01

0xb31d,	// (0x0005a949) call_type_pane_cp05_ParamLimits

0xb31d,	// (0x0005a949) call_type_pane_cp05

0xb371,	// (0x0005a99d) popup_call2_audio_second_window_g1_ParamLimits

0xb371,	// (0x0005a99d) popup_call2_audio_second_window_g1

0xb3c5,	// (0x0005a9f1) popup_call2_audio_second_window_g2_ParamLimits

0xb3c5,	// (0x0005a9f1) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x0005eae9) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x0005eae9) popup_call2_audio_second_window_g

0xb42a,	// (0x0005aa56) popup_call2_audio_second_window_t1_ParamLimits

0xb42a,	// (0x0005aa56) popup_call2_audio_second_window_t1

0xb4e5,	// (0x0005ab11) popup_call2_audio_second_window_t2_ParamLimits

0xb4e5,	// (0x0005ab11) popup_call2_audio_second_window_t2

0xb538,	// (0x0005ab64) popup_call2_audio_second_window_t3_ParamLimits

0xb538,	// (0x0005ab64) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x0005eaf0) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x0005eaf0) popup_call2_audio_second_window_t

0x1239,	// (0x00050865) bg_popup_call2_in_pane_cp02

0xb62b,	// (0x0005ac57) call_type_pane_cp04

0xb633,	// (0x0005ac5f) popup_call2_audio_wait_window_g1

0xb63b,	// (0x0005ac67) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x0005eaf9) popup_call2_audio_wait_window_g

0xb643,	// (0x0005ac6f) popup_call2_audio_wait_window_t3

0xb651,	// (0x0005ac7d) bg_popup_call2_act_pane_ParamLimits

0xb651,	// (0x0005ac7d) bg_popup_call2_act_pane

0xb711,	// (0x0005ad3d) call_type_pane_cp03_ParamLimits

0xb711,	// (0x0005ad3d) call_type_pane_cp03

0xb775,	// (0x0005ada1) popup_call2_audio_first_window_g1_ParamLimits

0xb775,	// (0x0005ada1) popup_call2_audio_first_window_g1

0xb7e5,	// (0x0005ae11) popup_call2_audio_first_window_g2_ParamLimits

0xb7e5,	// (0x0005ae11) popup_call2_audio_first_window_g2

0xb849,	// (0x0005ae75) popup_call2_audio_first_window_g3_ParamLimits

0xb849,	// (0x0005ae75) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x0005eafe) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x0005eafe) popup_call2_audio_first_window_g

0xb8d1,	// (0x0005aefd) popup_call2_audio_first_window_t1_ParamLimits

0xb8d1,	// (0x0005aefd) popup_call2_audio_first_window_t1

0xb9d4,	// (0x0005b000) popup_call2_audio_first_window_t4_ParamLimits

0xb9d4,	// (0x0005b000) popup_call2_audio_first_window_t4

0xbab7,	// (0x0005b0e3) popup_call2_audio_first_window_t5_ParamLimits

0xbab7,	// (0x0005b0e3) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x0005eb09) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x0005eb09) popup_call2_audio_first_window_t

0x148c,	// (0x00050ab8) bg_popup_call2_act_pane_g1

0xc17c,	// (0x0005b7a8) popup_cale_lunar_info_window_t1

0xc18a,	// (0x0005b7b6) popup_cale_lunar_info_window_t2

0xc198,	// (0x0005b7c4) popup_cale_lunar_info_window_t3

0x1239,	// (0x00050865) bg_popup_call2_bubble_pane

0xbbb8,	// (0x0005b1e4) bg_popup_call2_in_pane_cp01_ParamLimits

0xbbb8,	// (0x0005b1e4) bg_popup_call2_in_pane_cp01

0xb62b,	// (0x0005ac57) call_type_pane_cp02

0xbc00,	// (0x0005b22c) popup_call2_audio_out_window_g1_ParamLimits

0xbc00,	// (0x0005b22c) popup_call2_audio_out_window_g1

0xbc2c,	// (0x0005b258) popup_call2_audio_out_window_g2_ParamLimits

0xbc2c,	// (0x0005b258) popup_call2_audio_out_window_g2

0xbc54,	// (0x0005b280) popup_call2_audio_out_window_g3_ParamLimits

0xbc54,	// (0x0005b280) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0005eb12) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0005eb12) popup_call2_audio_out_window_g

0xbc8f,	// (0x0005b2bb) popup_call2_audio_out_window_t1_ParamLimits

0xbc8f,	// (0x0005b2bb) popup_call2_audio_out_window_t1

0xbcee,	// (0x0005b31a) popup_call2_audio_out_window_t2_ParamLimits

0xbcee,	// (0x0005b31a) popup_call2_audio_out_window_t2

0xbd42,	// (0x0005b36e) popup_call2_audio_out_window_t3_ParamLimits

0xbd42,	// (0x0005b36e) popup_call2_audio_out_window_t3

0xbd58,	// (0x0005b384) popup_call2_audio_out_window_t4_ParamLimits

0xbd58,	// (0x0005b384) popup_call2_audio_out_window_t4

0xbd6e,	// (0x0005b39a) popup_call2_audio_out_window_t5_ParamLimits

0xbd6e,	// (0x0005b39a) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x0005eb1b) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x0005eb1b) popup_call2_audio_out_window_t

0xbdd2,	// (0x0005b3fe) bg_popup_call2_in_pane_ParamLimits

0xbdd2,	// (0x0005b3fe) bg_popup_call2_in_pane

0xbe2e,	// (0x0005b45a) popup_call2_audio_in_window_g1_ParamLimits

0xbe2e,	// (0x0005b45a) popup_call2_audio_in_window_g1

0xbe66,	// (0x0005b492) popup_call2_audio_in_window_g2_ParamLimits

0xbe66,	// (0x0005b492) popup_call2_audio_in_window_g2

0xbe9e,	// (0x0005b4ca) popup_call2_audio_in_window_g3_ParamLimits

0xbe9e,	// (0x0005b4ca) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x0005eb28) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x0005eb28) popup_call2_audio_in_window_g

0xbef6,	// (0x0005b522) popup_call2_audio_in_window_t1_ParamLimits

0xbef6,	// (0x0005b522) popup_call2_audio_in_window_t1

0xbf76,	// (0x0005b5a2) popup_call2_audio_in_window_t2_ParamLimits

0xbf76,	// (0x0005b5a2) popup_call2_audio_in_window_t2

0xbff6,	// (0x0005b622) popup_call2_audio_in_window_t3_ParamLimits

0xbff6,	// (0x0005b622) popup_call2_audio_in_window_t3

0xc010,	// (0x0005b63c) popup_call2_audio_in_window_t4_ParamLimits

0xc010,	// (0x0005b63c) popup_call2_audio_in_window_t4

0xc022,	// (0x0005b64e) popup_call2_audio_in_window_t5_ParamLimits

0xc022,	// (0x0005b64e) popup_call2_audio_in_window_t5

0xc037,	// (0x0005b663) popup_call2_audio_in_window_t6_ParamLimits

0xc037,	// (0x0005b663) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0005eb31) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0005eb31) popup_call2_audio_in_window_t

0x148c,	// (0x00050ab8) bg_popup_call2_in_pane_g1

0xc1a6,	// (0x0005b7d2) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x0005ebac) popup_cale_lunar_info_window_t

0x1494,	// (0x00050ac0) bg_popup_call2_rect_pane_ParamLimits

0x1494,	// (0x00050ac0) bg_popup_call2_rect_pane

0x1239,	// (0x00050865) call2_cli_visual_graphic_pane

0x1239,	// (0x00050865) call2_cli_visual_text_pane

0xea43,	// (0x0005e06f) smil_status_volume_pane_g3

0x0002,

0x14ac,	// (0x00050ad8) call2_cli_visual_graphic_pane_g1

0x14ac,	// (0x00050ad8) call2_cli_visual_graphic_pane_g2

0x14ac,	// (0x00050ad8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x0005eb3e) call2_cli_visual_graphic_pane_g

0xc04c,	// (0x0005b678) bg_popup_call2_rect_pane_g1

0x166d,	// (0x00050c99) bg_popup_call2_rect_pane_g2

0xc054,	// (0x0005b680) bg_popup_call2_rect_pane_g3

0xc05c,	// (0x0005b688) bg_popup_call2_rect_pane_g4

0xc064,	// (0x0005b690) bg_popup_call2_rect_pane_g5

0xc06c,	// (0x0005b698) bg_popup_call2_rect_pane_g6

0xc074,	// (0x0005b6a0) bg_popup_call2_rect_pane_g7

0xc07c,	// (0x0005b6a8) bg_popup_call2_rect_pane_g8

0xc084,	// (0x0005b6b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0005eb45) bg_popup_call2_rect_pane_g

0xc08c,	// (0x0005b6b8) bg_popup_call2_bubble_pane_g1

0xc094,	// (0x0005b6c0) bg_popup_call2_bubble_pane_g2

0xc09c,	// (0x0005b6c8) bg_popup_call2_bubble_pane_g3

0xc0a4,	// (0x0005b6d0) bg_popup_call2_bubble_pane_g4

0xc0ac,	// (0x0005b6d8) bg_popup_call2_bubble_pane_g5

0xc0b4,	// (0x0005b6e0) bg_popup_call2_bubble_pane_g6

0xc0bc,	// (0x0005b6e8) bg_popup_call2_bubble_pane_g7

0xc0c4,	// (0x0005b6f0) bg_popup_call2_bubble_pane_g8

0xc0cc,	// (0x0005b6f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x0005eb58) bg_popup_call2_bubble_pane_g

0x3bf0,	// (0x0005321c) aid_cale_week_size_cell_pane

0x423e,	// (0x0005386a) aid_cams_cif_uncrop_pane_ParamLimits

0x423e,	// (0x0005386a) aid_cams_cif_uncrop_pane

0x43df,	// (0x00053a0b) aid_cams_size_cell_ParamLimits

0x43df,	// (0x00053a0b) aid_cams_size_cell

0x43f3,	// (0x00053a1f) grid_cams_pane_ParamLimits

0x4408,	// (0x00053a34) linegrid_cams_pane_ParamLimits

0x44d2,	// (0x00053afe) call_video_pane_t1

0x44ec,	// (0x00053b18) call_video_pane_t2

0x0001,

0xf222,	// (0x0005e84e) call_video_pane_t

0x4871,	// (0x00053e9d) aid_cale_month_size_cell_pane_ParamLimits

0x4871,	// (0x00053e9d) aid_cale_month_size_cell_pane

0xf5c4,	// (0x0005ebf0) smil_status_volume_pane_g

0xea50,	// (0x0005e07c) volume_smil_pane_ParamLimits

0xae76,	// (0x0005a4a2) aid_popup2_width_pane

0x3b3e,	// (0x0005316a) cell_qdial_pane_g4_ParamLimits

0x3b3e,	// (0x0005316a) cell_qdial_pane_g4

0x554a,	// (0x00054b76) aid_blid_cardinal_pane_ParamLimits

0x5556,	// (0x00054b82) aid_blid_destination_pane_ParamLimits

0x5556,	// (0x00054b82) aid_blid_destination_pane

0x1494,	// (0x00050ac0) bg_popup_call_poc_act_pane_ParamLimits

0x1494,	// (0x00050ac0) bg_popup_call_poc_act_pane

0x1494,	// (0x00050ac0) bg_popup_call_poc_inact_pane_ParamLimits

0x1494,	// (0x00050ac0) bg_popup_call_poc_inact_pane

0xc0d4,	// (0x0005b700) bg_popup_call_poc_act_pane_g1

0xc0dc,	// (0x0005b708) bg_popup_call_poc_act_pane_g2

0xc0e4,	// (0x0005b710) bg_popup_call_poc_act_pane_g3

0xc0ec,	// (0x0005b718) bg_popup_call_poc_act_pane_g4

0xc0f4,	// (0x0005b720) bg_popup_call_poc_act_pane_g5

0xc0fc,	// (0x0005b728) bg_popup_call_poc_act_pane_g6

0xc104,	// (0x0005b730) bg_popup_call_poc_act_pane_g7

0xc10c,	// (0x0005b738) bg_popup_call_poc_act_pane_g8

0x1239,	// (0x00050865) main_usb_pane

0xe9fb,	// (0x0005e027) popup_cale_lunar_info_window

0x4731,	// (0x00053d5d) im_reading_pane_t1_ParamLimits

0x1884,	// (0x00050eb0) list_im_pane_ParamLimits

0x1895,	// (0x00050ec1) scroll_pane_cp07_ParamLimits

0x1239,	// (0x00050865) grid_highlight_pane_cp012

0x1494,	// (0x00050ac0) mup_scale_pane_ParamLimits

0x230a,	// (0x00051936) main_usb_pane_g1_ParamLimits

0x230a,	// (0x00051936) main_usb_pane_g1

0x5e6b,	// (0x00055497) main_usb_pane_g2_ParamLimits

0x5e6b,	// (0x00055497) main_usb_pane_g2

0x0001,

0xf569,	// (0x0005eb95) main_usb_pane_g_ParamLimits

0xf569,	// (0x0005eb95) main_usb_pane_g

0x5e7f,	// (0x000554ab) main_usb_pane_t1_ParamLimits

0x5e7f,	// (0x000554ab) main_usb_pane_t1

0x5e91,	// (0x000554bd) main_usb_pane_t2_ParamLimits

0x5e91,	// (0x000554bd) main_usb_pane_t2

0x5ea3,	// (0x000554cf) main_usb_pane_t3_ParamLimits

0x5ea3,	// (0x000554cf) main_usb_pane_t3

0x5eb5,	// (0x000554e1) main_usb_pane_t4_ParamLimits

0x5eb5,	// (0x000554e1) main_usb_pane_t4

0x5ec7,	// (0x000554f3) main_usb_pane_t5_ParamLimits

0x5ec7,	// (0x000554f3) main_usb_pane_t5

0x5ed9,	// (0x00055505) main_usb_pane_t6_ParamLimits

0x5ed9,	// (0x00055505) main_usb_pane_t6

0x0005,

0xf56e,	// (0x0005eb9a) main_usb_pane_t_ParamLimits

0x1ff4,	// (0x00051620) aid_text_placing

0x54f6,	// (0x00054b22) main_location2_pane_t1_ParamLimits

0x550c,	// (0x00054b38) main_location2_pane_t2_ParamLimits

0x5522,	// (0x00054b4e) main_location2_pane_t3_ParamLimits

0x5538,	// (0x00054b64) main_location2_pane_t4_ParamLimits

0x5538,	// (0x00054b64) main_location2_pane_t4

0xf375,	// (0x0005e9a1) main_location2_pane_t_ParamLimits

0x14cf,	// (0x00050afb) find_pinb_pane_g2_ParamLimits

0x14cf,	// (0x00050afb) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0005e706) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0005e706) find_pinb_pane_g

0x14db,	// (0x00050b07) find_pinb_pane_t1_ParamLimits

0x14ed,	// (0x00050b19) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0005e70b) find_pinb_pane_t_ParamLimits

0x1239,	// (0x00050865) main_call3_pane

0x4c6c,	// (0x00054298) cale_month_day_heading_pane_t1_ParamLimits

0x4cf2,	// (0x0005431e) cale_month_day_heading_pane_t2_ParamLimits

0x4d83,	// (0x000543af) cale_month_day_heading_pane_t3_ParamLimits

0x4e14,	// (0x00054440) cale_month_day_heading_pane_t4_ParamLimits

0x4ea5,	// (0x000544d1) cale_month_day_heading_pane_t5_ParamLimits

0x4f36,	// (0x00054562) cale_month_day_heading_pane_t6_ParamLimits

0x4fc7,	// (0x000545f3) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0005e886) cale_month_day_heading_pane_t_ParamLimits

0x5223,	// (0x0005484f) smil_status_volume_pane

0x59f4,	// (0x00055020) postcard_address_pane_ParamLimits

0x59f4,	// (0x00055020) postcard_address_pane

0x5a06,	// (0x00055032) postcard_message_pane_ParamLimits

0x5a06,	// (0x00055032) postcard_message_pane

0x5e49,	// (0x00055475) call2_cli_visual_pane_t1_ParamLimits

0x5e49,	// (0x00055475) call2_cli_visual_pane_t1

0x6591,	// (0x00055bbd) postcard_message_pane_t1_ParamLimits

0x6591,	// (0x00055bbd) postcard_message_pane_t1

0x657a,	// (0x00055ba6) postcard_address_pane_t1_ParamLimits

0x657a,	// (0x00055ba6) postcard_address_pane_t1

0x6568,	// (0x00055b94) popup_call3_audio_in_window_ParamLimits

0x6568,	// (0x00055b94) popup_call3_audio_in_window

0x63f7,	// (0x00055a23) bg_popup_call3_in_pane_ParamLimits

0x63f7,	// (0x00055a23) bg_popup_call3_in_pane

0x6469,	// (0x00055a95) popup_call3_audio_in_window_g1_ParamLimits

0x6469,	// (0x00055a95) popup_call3_audio_in_window_g1

0x6489,	// (0x00055ab5) popup_call3_audio_in_window_g2_ParamLimits

0x6489,	// (0x00055ab5) popup_call3_audio_in_window_g2

0x64a9,	// (0x00055ad5) popup_call3_audio_in_window_g3_ParamLimits

0x64a9,	// (0x00055ad5) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x0005ebf7) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x0005ebf7) popup_call3_audio_in_window_g

0x64da,	// (0x00055b06) popup_call3_audio_in_window_t1_ParamLimits

0x64da,	// (0x00055b06) popup_call3_audio_in_window_t1

0x6518,	// (0x00055b44) popup_call3_audio_in_window_t2_ParamLimits

0x6518,	// (0x00055b44) popup_call3_audio_in_window_t2

0x6556,	// (0x00055b82) popup_call3_audio_in_window_t3_ParamLimits

0x6556,	// (0x00055b82) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x0005ec00) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x0005ec00) popup_call3_audio_in_window_t

0x1751,	// (0x00050d7d) bg_popup_call3_rect_pane

0xc04c,	// (0x0005b678) bg_popup_call3_rect_pane_g1

0x166d,	// (0x00050c99) bg_popup_call3_rect_pane_g2

0xc054,	// (0x0005b680) bg_popup_call3_rect_pane_g3

0xc05c,	// (0x0005b688) bg_popup_call3_rect_pane_g4

0xc064,	// (0x0005b690) bg_popup_call3_rect_pane_g5

0xc06c,	// (0x0005b698) bg_popup_call3_rect_pane_g6

0xc074,	// (0x0005b6a0) bg_popup_call3_rect_pane_g7

0x0e1e,	// (0x0005044a) mup_visualizer_osc_pane

0x0e1e,	// (0x0005044a) mup_visualizer_spec_pane

0x6427,	// (0x00055a53) call3_video_qcif_pane_ParamLimits

0x6427,	// (0x00055a53) call3_video_qcif_pane

0x6438,	// (0x00055a64) call3_video_qcif_uncrop_pane_ParamLimits

0x6438,	// (0x00055a64) call3_video_qcif_uncrop_pane

0x6444,	// (0x00055a70) call3_video_subqcif_pane_ParamLimits

0x6444,	// (0x00055a70) call3_video_subqcif_pane

0x6458,	// (0x00055a84) call3_video_subqcif_uncrop_pane_ParamLimits

0x6458,	// (0x00055a84) call3_video_subqcif_uncrop_pane

0x64c9,	// (0x00055af5) popup_call3_audio_in_window_g4_ParamLimits

0x64c9,	// (0x00055af5) popup_call3_audio_in_window_g4

0x0e1e,	// (0x0005044a) mup_spec_half_pane

0x0e1e,	// (0x0005044a) mup_spec_half_pane_cp

0x0e1e,	// (0x0005044a) mup_osc_middle_pane

0x17cd,	// (0x00050df9) mup_visualizer_osc_pane_g1

0xc2f2,	// (0x0005b91e) mup_spec_bar_pane_ParamLimits

0xc2f2,	// (0x0005b91e) mup_spec_bar_pane

0x17cd,	// (0x00050df9) mup_spec_bar_pane_g1

0x17cd,	// (0x00050df9) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x0005ea1b) mup_spec_bar_pane_g

0x3bf0,	// (0x0005321c) aid_cale_week_size_cell_pane_ParamLimits

0x3c0a,	// (0x00053236) bg_cale_heading_pane_ParamLimits

0x16ab,	// (0x00050cd7) bg_cale_pane_cp01_ParamLimits

0x3c22,	// (0x0005324e) cale_week_corner_pane_ParamLimits

0x3c41,	// (0x0005326d) cale_week_day_heading_pane_ParamLimits

0x3c5e,	// (0x0005328a) cale_week_scroll_pane_g1_ParamLimits

0x3c71,	// (0x0005329d) cale_week_scroll_pane_g2_ParamLimits

0x3c89,	// (0x000532b5) cale_week_scroll_pane_g3_ParamLimits

0x3ca1,	// (0x000532cd) cale_week_scroll_pane_g4_ParamLimits

0x3cb9,	// (0x000532e5) cale_week_scroll_pane_g5_ParamLimits

0x3cd1,	// (0x000532fd) cale_week_scroll_pane_g6_ParamLimits

0x3ce9,	// (0x00053315) cale_week_scroll_pane_g7_ParamLimits

0x3d01,	// (0x0005332d) cale_week_scroll_pane_g8_ParamLimits

0x3d1d,	// (0x00053349) cale_week_scroll_pane_g9_ParamLimits

0x3d35,	// (0x00053361) cale_week_scroll_pane_g10_ParamLimits

0x3d4d,	// (0x00053379) cale_week_scroll_pane_g11_ParamLimits

0x3d65,	// (0x00053391) cale_week_scroll_pane_g12_ParamLimits

0x3d7d,	// (0x000533a9) cale_week_scroll_pane_g13_ParamLimits

0x3d95,	// (0x000533c1) cale_week_scroll_pane_g14_ParamLimits

0x3dad,	// (0x000533d9) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0005e797) cale_week_scroll_pane_g_ParamLimits

0x3de1,	// (0x0005340d) cale_week_time_pane_ParamLimits

0x3dfd,	// (0x00053429) grid_cale_week_pane_ParamLimits

0x16c8,	// (0x00050cf4) listscroll_cale_week_pane_t1

0x16da,	// (0x00050d06) scroll_pane_cp08_ParamLimits

0x48c6,	// (0x00053ef2) cale_month_corner_pane_ParamLimits

0x1ac5,	// (0x000510f1) cale_month_pane_t1

0x4c22,	// (0x0005424e) cale_month_week_pane_ParamLimits

0x5345,	// (0x00054971) popup_call_status_window_g1_ParamLimits

0x5359,	// (0x00054985) popup_call_status_window_g2_ParamLimits

0x536d,	// (0x00054999) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x0005e928) popup_call_status_window_g_ParamLimits

0x1e3a,	// (0x00051466) aid_call2_pane

0x586d,	// (0x00054e99) msg_header_pane_g1

0x59f4,	// (0x00055020) postcard_address2_pane_ParamLimits

0x59f4,	// (0x00055020) postcard_address2_pane

0x5a06,	// (0x00055032) postcard_message2_pane_ParamLimits

0x5a06,	// (0x00055032) postcard_message2_pane

0x63b3,	// (0x000559df) message2_row_pane_ParamLimits

0x63b3,	// (0x000559df) message2_row_pane

0x63cd,	// (0x000559f9) address2_row_pane_ParamLimits

0x63cd,	// (0x000559f9) address2_row_pane

0xc2c0,	// (0x0005b8ec) postcard_message2_row_pane_g1

0xc2c8,	// (0x0005b8f4) postcard_message2_row_pane_t1

0xc2c0,	// (0x0005b8ec) address2_row_pane_g1

0xc2c8,	// (0x0005b8f4) address2_row_pane_t1

0x41fa,	// (0x00053826) aid_size_cell_vorec

0x1239,	// (0x00050865) main_rss_pane

0x63e0,	// (0x00055a0c) rss_list_single_pane_ParamLimits

0x63e0,	// (0x00055a0c) rss_list_single_pane

0xc2d6,	// (0x0005b902) rss_list_single_pane_t1

0xc2e4,	// (0x0005b910) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x0005ebeb) rss_list_single_pane_t

0x1239,	// (0x00050865) main_camera2_pane

0x1239,	// (0x00050865) main_video2_pane

0xea65,	// (0x0005e091) cams_zoom_pane_cp2_ParamLimits

0xea65,	// (0x0005e091) cams_zoom_pane_cp2

0xea65,	// (0x0005e091) image2_vga_pane_ParamLimits

0xea65,	// (0x0005e091) image2_vga_pane

0xea73,	// (0x0005e09f) main_camera2_pane_g1_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g1

0xea73,	// (0x0005e09f) main_camera2_pane_g2_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g2

0xea73,	// (0x0005e09f) main_camera2_pane_g3_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g3

0xea73,	// (0x0005e09f) main_camera2_pane_g4_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g4

0xea73,	// (0x0005e09f) main_camera2_pane_g5_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g5

0xea73,	// (0x0005e09f) main_camera2_pane_g6_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g6

0xea73,	// (0x0005e09f) main_camera2_pane_g7_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g7

0xea73,	// (0x0005e09f) main_camera2_pane_g8_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x0005ec07) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x0005ec07) main_camera2_pane_g

0x65ba,	// (0x00055be6) main_camera2_pane_t1_ParamLimits

0x65ba,	// (0x00055be6) main_camera2_pane_t1

0x65ba,	// (0x00055be6) main_camera2_pane_t2_ParamLimits

0x65ba,	// (0x00055be6) main_camera2_pane_t2

0x65ba,	// (0x00055be6) main_camera2_pane_t3_ParamLimits

0x65ba,	// (0x00055be6) main_camera2_pane_t3

0x65ba,	// (0x00055be6) main_camera2_pane_t4_ParamLimits

0x65ba,	// (0x00055be6) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x0005ec1a) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x0005ec1a) main_camera2_pane_t

0xeab7,	// (0x0005e0e3) cams_zoom_pane_cp4_ParamLimits

0xeab7,	// (0x0005e0e3) cams_zoom_pane_cp4

0x65ce,	// (0x00055bfa) image2_cif_pane_ParamLimits

0x65ce,	// (0x00055bfa) image2_cif_pane

0xe9e5,	// (0x0005e011) image2_subqcif_pane_ParamLimits

0xe9e5,	// (0x0005e011) image2_subqcif_pane

0x65dc,	// (0x00055c08) main_video2_pane_g1_ParamLimits

0x65dc,	// (0x00055c08) main_video2_pane_g1

0x65dc,	// (0x00055c08) main_video2_pane_g2_ParamLimits

0x65dc,	// (0x00055c08) main_video2_pane_g2

0x65dc,	// (0x00055c08) main_video2_pane_g3_ParamLimits

0x65dc,	// (0x00055c08) main_video2_pane_g3

0x65dc,	// (0x00055c08) main_video2_pane_g4_ParamLimits

0x65dc,	// (0x00055c08) main_video2_pane_g4

0x65dc,	// (0x00055c08) main_video2_pane_g5_ParamLimits

0x65dc,	// (0x00055c08) main_video2_pane_g5

0x65dc,	// (0x00055c08) main_video2_pane_g6_ParamLimits

0x65dc,	// (0x00055c08) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x0005ec29) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x0005ec29) main_video2_pane_g

0x65ea,	// (0x00055c16) main_video2_pane_t1_ParamLimits

0x65ea,	// (0x00055c16) main_video2_pane_t1

0x65ea,	// (0x00055c16) main_video2_pane_t2_ParamLimits

0x65ea,	// (0x00055c16) main_video2_pane_t2

0x65ea,	// (0x00055c16) main_video2_pane_t3_ParamLimits

0x65ea,	// (0x00055c16) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0005ec36) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0005ec36) main_video2_pane_t

0x5f88,	// (0x000555b4) call_muted_g2

0x0001,

0xf5b1,	// (0x0005ebdd) call_muted_g

0x1239,	// (0x00050865) main_mup2_pane

0x247b,	// (0x00051aa7) main_mup2_pane_g1_ParamLimits

0x247b,	// (0x00051aa7) main_mup2_pane_g1

0x247b,	// (0x00051aa7) main_mup2_pane_g2_ParamLimits

0x247b,	// (0x00051aa7) main_mup2_pane_g2

0xc3d8,	// (0x0005ba04) main_mup_pane_g13_cp1

0xaebf,	// (0x0005a4eb) mup_volume_pane_cp1

0x247b,	// (0x00051aa7) main_mup2_pane_g4_ParamLimits

0x247b,	// (0x00051aa7) main_mup2_pane_g4

0x247b,	// (0x00051aa7) main_mup2_pane_g5_ParamLimits

0x247b,	// (0x00051aa7) main_mup2_pane_g5

0x247b,	// (0x00051aa7) main_mup2_pane_g6_ParamLimits

0x247b,	// (0x00051aa7) main_mup2_pane_g6

0x247b,	// (0x00051aa7) main_mup2_pane_g7_ParamLimits

0x247b,	// (0x00051aa7) main_mup2_pane_g7

0x0006,

0xf611,	// (0x0005ec3d) main_mup2_pane_g_ParamLimits

0xf611,	// (0x0005ec3d) main_mup2_pane_g

0x2467,	// (0x00051a93) main_mup2_pane_t1_ParamLimits

0x2467,	// (0x00051a93) main_mup2_pane_t1

0x2467,	// (0x00051a93) main_mup2_pane_t2_ParamLimits

0x2467,	// (0x00051a93) main_mup2_pane_t2

0x2467,	// (0x00051a93) main_mup2_pane_t3_ParamLimits

0x2467,	// (0x00051a93) main_mup2_pane_t3

0x2467,	// (0x00051a93) main_mup2_pane_t4_ParamLimits

0x2467,	// (0x00051a93) main_mup2_pane_t4

0x2467,	// (0x00051a93) main_mup2_pane_t5_ParamLimits

0x2467,	// (0x00051a93) main_mup2_pane_t5

0x2467,	// (0x00051a93) main_mup2_pane_t6_ParamLimits

0x2467,	// (0x00051a93) main_mup2_pane_t6

0x0005,

0xf620,	// (0x0005ec4c) main_mup2_pane_t_ParamLimits

0xf620,	// (0x0005ec4c) main_mup2_pane_t

0x244d,	// (0x00051a79) mup2_visualizer_pane_ParamLimits

0x244d,	// (0x00051a79) mup2_visualizer_pane

0x244d,	// (0x00051a79) mup_progress_pane_cp_ParamLimits

0x244d,	// (0x00051a79) mup_progress_pane_cp

0xeadb,	// (0x0005e107) mup_volume_pane_cp_ParamLimits

0xeadb,	// (0x0005e107) mup_volume_pane_cp

0x150e,	// (0x00050b3a) mup2_visualizer_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) mup2_visualizer_pane_g1

0x151c,	// (0x00050b48) mup2_visualizer_pane_g2_ParamLimits

0x151c,	// (0x00050b48) mup2_visualizer_pane_g2

0x151c,	// (0x00050b48) mup2_visualizer_pane_g3_ParamLimits

0x151c,	// (0x00050b48) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0005e710) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0005e710) mup2_visualizer_pane_g

0x1749,	// (0x00050d75) aid_size_cell_fmradio

0x6102,	// (0x0005572e) aid_height_parent_landcape

0x1922,	// (0x00050f4e) wml_content_pane_cp

0x192a,	// (0x00050f56) wml_tabs_pane

0x1933,	// (0x00050f5f) popup_wml_miniature_window

0x193b,	// (0x00050f67) scroll_pane_cp021

0x194f,	// (0x00050f7b) wml_content_pane_comp8

0x1239,	// (0x00050865) bg_popup_sub_pane_cp05

0xc340,	// (0x0005b96c) popup_wml_miniature_window_g1

0xc348,	// (0x0005b974) wml_miniature_view_pane

0x65fe,	// (0x00055c2a) aid_size_wml_view

0x6606,	// (0x00055c32) wml_miniature_view_pane_g1

0x660f,	// (0x00055c3b) wml_miniature_view_pane_g2

0x6618,	// (0x00055c44) wml_miniature_view_pane_g3

0x6620,	// (0x00055c4c) wml_miniature_view_pane_g4

0x6628,	// (0x00055c54) wml_miniature_view_pane_g5

0x6630,	// (0x00055c5c) wml_miniature_view_pane_g6

0x6638,	// (0x00055c64) wml_miniature_view_pane_g7

0x6640,	// (0x00055c6c) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x0005ec59) wml_miniature_view_pane_g

0xc350,	// (0x0005b97c) background_graphic_ParamLimits

0xc350,	// (0x0005b97c) background_graphic

0xc35c,	// (0x0005b988) wml_tabs_2_pane

0xc365,	// (0x0005b991) wml_tabs_3_pane_ParamLimits

0xc365,	// (0x0005b991) wml_tabs_3_pane

0xc377,	// (0x0005b9a3) wml_tabs_4_pane_ParamLimits

0xc377,	// (0x0005b9a3) wml_tabs_4_pane

0xc38d,	// (0x0005b9b9) wml_tabs_5_pane_ParamLimits

0xc38d,	// (0x0005b9b9) wml_tabs_5_pane

0xc3a7,	// (0x0005b9d3) wml_tabs_pane_g2_ParamLimits

0xc3a7,	// (0x0005b9d3) wml_tabs_pane_g2

0xc3bb,	// (0x0005b9e7) wml_tabs_pane_g3_ParamLimits

0xc3bb,	// (0x0005b9e7) wml_tabs_pane_g3

0x6648,	// (0x00055c74) wml_tabs_2_active_pane_ParamLimits

0x6648,	// (0x00055c74) wml_tabs_2_active_pane

0x6658,	// (0x00055c84) wml_tabs_2_passive_pane_ParamLimits

0x6658,	// (0x00055c84) wml_tabs_2_passive_pane

0x6668,	// (0x00055c94) wml_tabs_3_active_pane_cp_ParamLimits

0x6668,	// (0x00055c94) wml_tabs_3_active_pane_cp

0x6679,	// (0x00055ca5) wml_tabs_3_passive_pane_ParamLimits

0x6679,	// (0x00055ca5) wml_tabs_3_passive_pane

0x668a,	// (0x00055cb6) wml_tabs_3_passive_pane_cp_ParamLimits

0x668a,	// (0x00055cb6) wml_tabs_3_passive_pane_cp

0x669b,	// (0x00055cc7) tabs_4_active_pane

0x66a3,	// (0x00055ccf) tabs_4_passive_pane

0x66ab,	// (0x00055cd7) tabs_4_passive_pane_cp

0x66b3,	// (0x00055cdf) tabs_4_passive_pane_cp2

0x5e63,	// (0x0005548f) aid_height_text

0x244d,	// (0x00051a79) mup_volume_cont_pane_ParamLimits

0x244d,	// (0x00051a79) mup_volume_cont_pane

0x38f6,	// (0x00052f22) aid_size_cell_pinb

0x0e1e,	// (0x0005044a) aid_size_list_pinb

0x244d,	// (0x00051a79) mup2_volume_cont_pane_ParamLimits

0x244d,	// (0x00051a79) mup2_volume_cont_pane

0xeac5,	// (0x0005e0f1) mup2_volume_cont_pane_g1_ParamLimits

0xeac5,	// (0x0005e0f1) mup2_volume_cont_pane_g1

0x366a,	// (0x00052c96) aid_size_cell_touch_ParamLimits

0x366a,	// (0x00052c96) aid_size_cell_touch

0x3856,	// (0x00052e82) touch_pane_ParamLimits

0x3856,	// (0x00052e82) touch_pane

0xaebf,	// (0x0005a4eb) main_rss2_pane

0xc3e2,	// (0x0005ba0e) listscroll_rss2_pane

0xc3eb,	// (0x0005ba17) rss2_navigation_pane

0xc3f3,	// (0x0005ba1f) list_rss2_pane

0x1f71,	// (0x0005159d) scroll_pane_cp22

0xc3fb,	// (0x0005ba27) rss2_navigation_pane_g1

0xc404,	// (0x0005ba30) rss2_navigation_pane_g2

0xc40c,	// (0x0005ba38) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x0005ec6a) rss2_navigation_pane_g

0xc414,	// (0x0005ba40) rss2_navigation_pane_t1

0x66bb,	// (0x00055ce7) rss2_list_single_pane_ParamLimits

0x66bb,	// (0x00055ce7) rss2_list_single_pane

0xc422,	// (0x0005ba4e) rss2_list_single_pane_t2

0xc430,	// (0x0005ba5c) rss2_list_single_pane_t3_ParamLimits

0xc430,	// (0x0005ba5c) rss2_list_single_pane_t3

0xc44d,	// (0x0005ba79) rss2_list_single_pane_t4

0x520d,	// (0x00054839) smil_status_pane_g1

0xe9e5,	// (0x0005e011) main_image2_pane_ParamLimits

0xe9e5,	// (0x0005e011) main_image2_pane

0xea73,	// (0x0005e09f) main_camera2_pane_g9_ParamLimits

0xea73,	// (0x0005e09f) main_camera2_pane_g9

0x65ba,	// (0x00055be6) main_camera2_pane_t5_ParamLimits

0x65ba,	// (0x00055be6) main_camera2_pane_t5

0xea81,	// (0x0005e0ad) main_camera2_pane_t6_ParamLimits

0xea81,	// (0x0005e0ad) main_camera2_pane_t6

0x66cf,	// (0x00055cfb) main_image2_pane_g1_ParamLimits

0x66cf,	// (0x00055cfb) main_image2_pane_g1

0x5c1b,	// (0x00055247) smil2_video_pane_ParamLimits

0x5c1b,	// (0x00055247) smil2_video_pane

0xae8e,	// (0x0005a4ba) aid_zoom_text_primary_cp

0xaeb7,	// (0x0005a4e3) popup_preview_fixed_window

0x187c,	// (0x00050ea8) im_reading_pane_g1

0x65ac,	// (0x00055bd8) cams2_bc_adjust_pane_cp_ParamLimits

0x65ac,	// (0x00055bd8) cams2_bc_adjust_pane_cp

0xeaa9,	// (0x0005e0d5) cams2_bc_adjust_pane_ParamLimits

0xeaa9,	// (0x0005e0d5) cams2_bc_adjust_pane

0xc3d8,	// (0x0005ba04) cams2_bc_adjust_pane_g1

0xaebf,	// (0x0005a4eb) cams2_slider_pane

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g1

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x0005ec71) cams2_slider_pane_g

0x3931,	// (0x00052f5d) calc_display_pane_ParamLimits

0x394d,	// (0x00052f79) calc_paper_pane_ParamLimits

0x396e,	// (0x00052f9a) grid_calc_pane_ParamLimits

0xb071,	// (0x0005a69d) popup_clock_digital_window_t1_ParamLimits

0x23e2,	// (0x00051a0e) main_image_pane_t1

0x3913,	// (0x00052f3f) aid_size_cell_calc_ParamLimits

0x3913,	// (0x00052f3f) aid_size_cell_calc

0x6142,	// (0x0005576e) popup_blid_sat_info2_window_ParamLimits

0x6142,	// (0x0005576e) popup_blid_sat_info2_window

0xc45b,	// (0x0005ba87) aid_size_cell_blid

0xc463,	// (0x0005ba8f) bg_popup_window_pane_cp07

0xc486,	// (0x0005bab2) grid_popup_blid_pane

0xc48e,	// (0x0005baba) heading_pane_cp05_ParamLimits

0xc48e,	// (0x0005baba) heading_pane_cp05

0xc556,	// (0x0005bb82) cell_popup_blid_pane_ParamLimits

0xc556,	// (0x0005bb82) cell_popup_blid_pane

0xc576,	// (0x0005bba2) cell_popup_blid_pane_g1

0xc57e,	// (0x0005bbaa) cell_popup_blid_pane_t1

0x244d,	// (0x00051a79) mup2_indicator_pane_ParamLimits

0x244d,	// (0x00051a79) mup2_indicator_pane

0x0e1e,	// (0x0005044a) mup2_visualizer_osc_pane

0xc32a,	// (0x0005b956) mup2_visualizer_spec_pane_ParamLimits

0xc32a,	// (0x0005b956) mup2_visualizer_spec_pane

0x0e1e,	// (0x0005044a) mup2_spec_half_pane

0x0e1e,	// (0x0005044a) mup2_spec_half_pane_cp

0x0e1e,	// (0x0005044a) mup2_spec_bar_pane_ParamLimits

0x0e1e,	// (0x0005044a) mup2_spec_bar_pane

0x17cd,	// (0x00050df9) mup2_spec_bar_pane_g1

0xc58c,	// (0x0005bbb8) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x0005ec97) mup2_spec_bar_pane_g

0x0e1e,	// (0x0005044a) mup2_osc_middle_pane

0x17cd,	// (0x00050df9) mup2_visualizer_osc_pane_g1

0x0e48,	// (0x00050474) popup_number_entry_window_t1_ParamLimits

0x0e5b,	// (0x00050487) popup_number_entry_window_t2_ParamLimits

0x0e6d,	// (0x00050499) popup_number_entry_window_t3_ParamLimits

0x389e,	// (0x00052eca) popup_number_entry_window_t5_ParamLimits

0x389e,	// (0x00052eca) popup_number_entry_window_t5

0xf085,	// (0x0005e6b1) popup_number_entry_window_t_ParamLimits

0x0e7f,	// (0x000504ab) text_title_cp2_ParamLimits

0xb0d4,	// (0x0005a700) aid_hotspot_pointer_text2_pane

0xb0fa,	// (0x0005a726) main_viewer_pane_g9_ParamLimits

0xb0fa,	// (0x0005a726) main_viewer_pane_g9

0x1ac5,	// (0x000510f1) cale_month_pane_t1_ParamLimits

0x1aeb,	// (0x00051117) bg_cale_pane_ParamLimits

0x1b03,	// (0x0005112f) list_cale_pane_ParamLimits

0x1b14,	// (0x00051140) listscroll_cale_day_pane_t1

0x1b26,	// (0x00051152) scroll_pane_cp09_ParamLimits

0x5666,	// (0x00054c92) main_mup_eq_pane_t1_ParamLimits

0x5666,	// (0x00054c92) main_mup_eq_pane_t1

0x567e,	// (0x00054caa) main_mup_eq_pane_t2_ParamLimits

0x567e,	// (0x00054caa) main_mup_eq_pane_t2

0x5694,	// (0x00054cc0) main_mup_eq_pane_t3_ParamLimits

0x5694,	// (0x00054cc0) main_mup_eq_pane_t3

0x56aa,	// (0x00054cd6) main_mup_eq_pane_t4_ParamLimits

0x56aa,	// (0x00054cd6) main_mup_eq_pane_t4

0x56c0,	// (0x00054cec) main_mup_eq_pane_t5_ParamLimits

0x56c0,	// (0x00054cec) main_mup_eq_pane_t5

0x56d6,	// (0x00054d02) main_mup_eq_pane_t6_ParamLimits

0x56d6,	// (0x00054d02) main_mup_eq_pane_t6

0x56e8,	// (0x00054d14) main_mup_eq_pane_t7_ParamLimits

0x56e8,	// (0x00054d14) main_mup_eq_pane_t7

0x56fa,	// (0x00054d26) main_mup_eq_pane_t8_ParamLimits

0x56fa,	// (0x00054d26) main_mup_eq_pane_t8

0x570c,	// (0x00054d38) main_mup_eq_pane_t9_ParamLimits

0x570c,	// (0x00054d38) main_mup_eq_pane_t9

0x5722,	// (0x00054d4e) main_mup_eq_pane_t10_ParamLimits

0x5722,	// (0x00054d4e) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x0005ea27) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x0005ea27) main_mup_eq_pane_t

0x57b5,	// (0x00054de1) mup_equalizer_pane_cp5_ParamLimits

0x57c7,	// (0x00054df3) mup_equalizer_pane_cp6_ParamLimits

0x57d9,	// (0x00054e05) mup_equalizer_pane_cp7_ParamLimits

0xaebf,	// (0x0005a4eb) main_gallery_pane

0xc2fc,	// (0x0005b928) smil2_volume_pane

0xc304,	// (0x0005b930) smil_status_volume_pane_g1_ParamLimits

0xc317,	// (0x0005b943) smil_status_volume_pane_g2_ParamLimits

0xea43,	// (0x0005e06f) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x0005ebf0) smil_status_volume_pane_g_ParamLimits

0xc463,	// (0x0005ba8f) bg_popup_window_pane_cp07_ParamLimits

0xc471,	// (0x0005ba9d) blid_firmament_pane

0x2225,	// (0x00051851) aid_size_cell_gallery_ParamLimits

0x2225,	// (0x00051851) aid_size_cell_gallery

0x66e3,	// (0x00055d0f) grid_gallery_pane_ParamLimits

0x66e3,	// (0x00055d0f) grid_gallery_pane

0x66f9,	// (0x00055d25) cell_gallery_pane_ParamLimits

0x66f9,	// (0x00055d25) cell_gallery_pane

0x2225,	// (0x00051851) bg_cell_gallery_focus_pane_ParamLimits

0x2225,	// (0x00051851) bg_cell_gallery_focus_pane

0x150e,	// (0x00050b3a) cell_gallery_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) cell_gallery_pane_g1

0x150e,	// (0x00050b3a) cell_gallery_pane_g2_ParamLimits

0x150e,	// (0x00050b3a) cell_gallery_pane_g2

0x150e,	// (0x00050b3a) cell_gallery_pane_g3_ParamLimits

0x150e,	// (0x00050b3a) cell_gallery_pane_g3

0x151c,	// (0x00050b48) cell_gallery_pane_g4_ParamLimits

0x151c,	// (0x00050b48) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x0005ec9c) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x0005ec9c) cell_gallery_pane_g

0xc596,	// (0x0005bbc2) bg_cell_gallery_focus_pane_g1

0xc59e,	// (0x0005bbca) bg_cell_gallery_focus_pane_g2

0xc5a6,	// (0x0005bbd2) bg_cell_gallery_focus_pane_g3

0xc5ae,	// (0x0005bbda) bg_cell_gallery_focus_pane_g4

0xc5b6,	// (0x0005bbe2) bg_cell_gallery_focus_pane_g5

0xc5be,	// (0x0005bbea) bg_cell_gallery_focus_pane_g6

0xc5c6,	// (0x0005bbf2) bg_cell_gallery_focus_pane_g7

0xc5ce,	// (0x0005bbfa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x0005eca5) bg_cell_gallery_focus_pane_g

0xc5d6,	// (0x0005bc02) aid_firma_cardinal

0xc5ea,	// (0x0005bc16) blid_firmament_pane_t1

0xc601,	// (0x0005bc2d) blid_firmament_pane_t2

0xc618,	// (0x0005bc44) blid_firmament_pane_t3

0xc62f,	// (0x0005bc5b) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x0005ecb6) blid_firmament_pane_t

0xc646,	// (0x0005bc72) blid_sat_info_pane

0x17cd,	// (0x00050df9) blid_sat_info_pane_g1

0x17cd,	// (0x00050df9) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x0005ea1b) blid_sat_info_pane_g

0xc656,	// (0x0005bc82) blid_sat_info_pane_t1

0xc664,	// (0x0005bc90) smil2_volume_content_pane

0xc66d,	// (0x0005bc99) smil2_volume_pane_g1

0xc675,	// (0x0005bca1) smil2_volume_content_pane_g1

0xc67e,	// (0x0005bcaa) smil2_volume_content_pane_g2

0xc687,	// (0x0005bcb3) smil2_volume_content_pane_g3

0xc690,	// (0x0005bcbc) smil2_volume_content_pane_g4

0xc699,	// (0x0005bcc5) smil2_volume_content_pane_g5

0xc6a2,	// (0x0005bcce) smil2_volume_content_pane_g6

0xc6ab,	// (0x0005bcd7) smil2_volume_content_pane_g7

0xc6b4,	// (0x0005bce0) smil2_volume_content_pane_g8

0xc6bd,	// (0x0005bce9) smil2_volume_content_pane_g9

0xc6c6,	// (0x0005bcf2) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x0005ecbf) smil2_volume_content_pane_g

0x3e91,	// (0x000534bd) cale_week_day_heading_pane_t1_ParamLimits

0x3ebb,	// (0x000534e7) cale_week_day_heading_pane_t2_ParamLimits

0x3eea,	// (0x00053516) cale_week_day_heading_pane_t3_ParamLimits

0x3f19,	// (0x00053545) cale_week_day_heading_pane_t4_ParamLimits

0x3f48,	// (0x00053574) cale_week_day_heading_pane_t5_ParamLimits

0x3f77,	// (0x000535a3) cale_week_day_heading_pane_t6_ParamLimits

0x3fa6,	// (0x000535d2) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0005e7b8) cale_week_day_heading_pane_t_ParamLimits

0x16f7,	// (0x00050d23) bg_cale_side_pane_ParamLimits

0x3fd0,	// (0x000535fc) cale_week_time_pane_t1_ParamLimits

0x400a,	// (0x00053636) cale_week_time_pane_t2_ParamLimits

0x4044,	// (0x00053670) cale_week_time_pane_t3_ParamLimits

0x407e,	// (0x000536aa) cale_week_time_pane_t4_ParamLimits

0x40b8,	// (0x000536e4) cale_week_time_pane_t5_ParamLimits

0x40f2,	// (0x0005371e) cale_week_time_pane_t6_ParamLimits

0x412c,	// (0x00053758) cale_week_time_pane_t7_ParamLimits

0x4166,	// (0x00053792) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0005e7c7) cale_week_time_pane_t_ParamLimits

0x41a0,	// (0x000537cc) cell_cale_week_pane_g2_ParamLimits

0x16f7,	// (0x00050d23) bg_cale_side_pane_cp01_ParamLimits

0x505c,	// (0x00054688) cale_month_week_pane_t1_ParamLimits

0x5075,	// (0x000546a1) cale_month_week_pane_t2_ParamLimits

0x508e,	// (0x000546ba) cale_month_week_pane_t3_ParamLimits

0x50a7,	// (0x000546d3) cale_month_week_pane_t4_ParamLimits

0x50c0,	// (0x000546ec) cale_month_week_pane_t5_ParamLimits

0x50d9,	// (0x00054705) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0005e895) cale_month_week_pane_t_ParamLimits

0xafd3,	// (0x0005a5ff) cell_cale_month_pane_g1_ParamLimits

0xaebf,	// (0x0005a4eb) main_cale_event_viewer_pane

0x0e1e,	// (0x0005044a) listscroll_cale_event_viewer_pane

0xc6cf,	// (0x0005bcfb) list_cale_ev_pane

0xc6d7,	// (0x0005bd03) scroll_pane_cp023

0x6719,	// (0x00055d45) field_cale_ev_pane_ParamLimits

0x6719,	// (0x00055d45) field_cale_ev_pane

0xc6e3,	// (0x0005bd0f) field_cale_ev_content_pane_ParamLimits

0xc6e3,	// (0x0005bd0f) field_cale_ev_content_pane

0xc6ef,	// (0x0005bd1b) field_cale_ev_pane_g1_ParamLimits

0xc6ef,	// (0x0005bd1b) field_cale_ev_pane_g1

0xc6fb,	// (0x0005bd27) field_cale_ev_pane_g2_ParamLimits

0xc6fb,	// (0x0005bd27) field_cale_ev_pane_g2

0xc713,	// (0x0005bd3f) field_cale_ev_pane_g3_ParamLimits

0xc713,	// (0x0005bd3f) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0005ecd4) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0005ecd4) field_cale_ev_pane_g

0xc72b,	// (0x0005bd57) field_cale_ev_pane_t1_ParamLimits

0xc72b,	// (0x0005bd57) field_cale_ev_pane_t1

0x3b92,	// (0x000531be) field_cale_ev_content_pane_t1_ParamLimits

0x3b92,	// (0x000531be) field_cale_ev_content_pane_t1

0x22c8,	// (0x000518f4) bg_button_pane_cp01

0x3be0,	// (0x0005320c) listscroll_cale_week_pane_ParamLimits

0x16a2,	// (0x00050cce) popup_toolbar_window_cp01

0x16c8,	// (0x00050cf4) listscroll_cale_week_pane_t1_ParamLimits

0x3be0,	// (0x0005320c) listscroll_cale_day_pane_ParamLimits

0x16a2,	// (0x00050cce) popup_toolbar_window_cp02

0x1b14,	// (0x00051140) listscroll_cale_day_pane_t1_ParamLimits

0x610a,	// (0x00055736) main_cale_month_pane_ParamLimits

0xea2e,	// (0x0005e05a) popup_toolbar_window_cp03_ParamLimits

0xea2e,	// (0x0005e05a) popup_toolbar_window_cp03

0x5af5,	// (0x00055121) main_image_pane_g2_ParamLimits

0x5af5,	// (0x00055121) main_image_pane_g2

0x5b06,	// (0x00055132) main_image_pane_g3_ParamLimits

0x5b06,	// (0x00055132) main_image_pane_g3

0x0002,

0xf48d,	// (0x0005eab9) main_image_pane_g_ParamLimits

0xf48d,	// (0x0005eab9) main_image_pane_g

0x23e2,	// (0x00051a0e) main_image_pane_t1_ParamLimits

0x5b17,	// (0x00055143) main_image_pane_t2_ParamLimits

0x5b17,	// (0x00055143) main_image_pane_t2

0x5b29,	// (0x00055155) main_image_pane_t3_ParamLimits

0x5b29,	// (0x00055155) main_image_pane_t3

0x5b51,	// (0x0005517d) main_image_pane_t4_ParamLimits

0x5b51,	// (0x0005517d) main_image_pane_t4

0x0003,

0xf494,	// (0x0005eac0) main_image_pane_t_ParamLimits

0xf494,	// (0x0005eac0) main_image_pane_t

0x5b71,	// (0x0005519d) popup_image_details_window_cp01

0x5b79,	// (0x000551a5) popup_toobar_trans_pane_cp01_ParamLimits

0x5b79,	// (0x000551a5) popup_toobar_trans_pane_cp01

0x620b,	// (0x00055837) popup_image_details_window_ParamLimits

0x620b,	// (0x00055837) popup_image_details_window

0xea03,	// (0x0005e02f) popup_image_focus_window

0xea65,	// (0x0005e091) camera2_autofocus_pane_ParamLimits

0xea65,	// (0x0005e091) camera2_autofocus_pane

0x0e1e,	// (0x0005044a) bg_popup_sub_pane_cp06

0xc742,	// (0x0005bd6e) popup_image_focus_window_g1

0xc74a,	// (0x0005bd76) popup_image_focus_window_g2

0xc752,	// (0x0005bd7e) popup_image_focus_window_g3

0xc75a,	// (0x0005bd86) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x0005ecdb) popup_image_focus_window_g

0xc762,	// (0x0005bd8e) popup_image_focus_window_t1

0xc770,	// (0x0005bd9c) popup_image_focus_window_t2

0xc77f,	// (0x0005bdab) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0005ece4) popup_image_focus_window_t

0x150e,	// (0x00050b3a) camera2_autofocus_pane_g1

0x2225,	// (0x00051851) bg_tb_trans_pane_cp01

0xc78d,	// (0x0005bdb9) popup_image_details_window_g1

0xc7a0,	// (0x0005bdcc) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0005ecf6) popup_image_details_window_g

0xc7c9,	// (0x0005bdf5) popup_image_details_window_t1

0xc7db,	// (0x0005be07) popup_image_details_window_t2

0xc7f4,	// (0x0005be20) popup_image_details_window_t3

0xc808,	// (0x0005be34) popup_image_details_window_t4

0xc823,	// (0x0005be4f) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x0005ecfd) popup_image_details_window_t

0x156c,	// (0x00050b98) bg_calc_paper_pane_ParamLimits

0xaebf,	// (0x0005a4eb) grid_highlight_pane_cp013

0xaed1,	// (0x0005a4fd) list_calc_pane_ParamLimits

0xaee3,	// (0x0005a50f) scroll_pane_cp024

0x1584,	// (0x00050bb0) bg_calc_display_pane_ParamLimits

0xaeeb,	// (0x0005a517) calc_display_pane_t1_ParamLimits

0xaf00,	// (0x0005a52c) calc_display_pane_t2_ParamLimits

0xaf15,	// (0x0005a541) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0005e738) calc_display_pane_t_ParamLimits

0x3aed,	// (0x00053119) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0005e755) cell_calc_pane_g

0x3af6,	// (0x00053122) cell_calc_pane_t1

0x15d9,	// (0x00050c05) grid_highlight_pane_cp02_ParamLimits

0x15ef,	// (0x00050c1b) toolbar_button_pane_cp01_ParamLimits

0x15ef,	// (0x00050c1b) toolbar_button_pane_cp01

0x2427,	// (0x00051a53) temp_image_control_pane_ParamLimits

0x2427,	// (0x00051a53) temp_image_control_pane

0xe9e5,	// (0x0005e011) main_mp3_pane

0xc83d,	// (0x0005be69) temp_image_control_pane_g1_ParamLimits

0xc83d,	// (0x0005be69) temp_image_control_pane_g1

0xc84b,	// (0x0005be77) temp_image_control_pane_g2_ParamLimits

0xc84b,	// (0x0005be77) temp_image_control_pane_g2

0xc85d,	// (0x0005be89) temp_image_control_pane_g3_ParamLimits

0xc85d,	// (0x0005be89) temp_image_control_pane_g3

0x6733,	// (0x00055d5f) temp_image_control_pane_g4_ParamLimits

0x6733,	// (0x00055d5f) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x0005ed08) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x0005ed08) temp_image_control_pane_g

0xc83d,	// (0x0005be69) main_mp3_pane_g1

0x6744,	// (0x00055d70) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0005ed11) main_mp3_pane_g

0xc892,	// (0x0005bebe) main_mp3_pane_t1

0x151c,	// (0x00050b48) main_camera_pane_g8_ParamLimits

0x151c,	// (0x00050b48) main_camera_pane_g8

0x4387,	// (0x000539b3) main_video_pane_g7_ParamLimits

0x4387,	// (0x000539b3) main_video_pane_g7

0xea95,	// (0x0005e0c1) main_camera2_pane_t7_ParamLimits

0xea95,	// (0x0005e0c1) main_camera2_pane_t7

0x18e2,	// (0x00050f0e) scroll_pane_cp025_ParamLimits

0x18e2,	// (0x00050f0e) scroll_pane_cp025

0x18f6,	// (0x00050f22) scroll_pane_cp026_ParamLimits

0x18f6,	// (0x00050f22) scroll_pane_cp026

0x1905,	// (0x00050f31) wml_content_pane_ParamLimits

0xaebf,	// (0x0005a4eb) main_touch_calib_pane

0x6806,	// (0x00055e32) main_touch_calib_pane_g1

0x6818,	// (0x00055e44) main_touch_calib_pane_g2

0x682a,	// (0x00055e56) main_touch_calib_pane_g3

0x683c,	// (0x00055e68) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x0005ed2f) main_touch_calib_pane_g

0x684e,	// (0x00055e7a) main_touch_calib_pane_t1

0x6866,	// (0x00055e92) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x0005ed38) main_touch_calib_pane_t

0x202d,	// (0x00051659) mup_progress_pane_cp02

0x2062,	// (0x0005168e) navi_pane_g1

0x20ed,	// (0x00051719) navi_pane_mp_t3

0xe9e5,	// (0x0005e011) main_mp3_pane_ParamLimits

0x6364,	// (0x00055990) navi_pane_ParamLimits

0xc83d,	// (0x0005be69) main_mp3_pane_g1_ParamLimits

0x6744,	// (0x00055d70) main_mp3_pane_g2_ParamLimits

0x6750,	// (0x00055d7c) main_mp3_pane_g3_ParamLimits

0x6750,	// (0x00055d7c) main_mp3_pane_g3

0x675c,	// (0x00055d88) main_mp3_pane_g4_ParamLimits

0x675c,	// (0x00055d88) main_mp3_pane_g4

0x150e,	// (0x00050b3a) main_mp3_pane_g5_ParamLimits

0x150e,	// (0x00050b3a) main_mp3_pane_g5

0xc86d,	// (0x0005be99) main_mp3_pane_g6_ParamLimits

0xc86d,	// (0x0005be99) main_mp3_pane_g6

0xc87a,	// (0x0005bea6) main_mp3_pane_g7_ParamLimits

0xc87a,	// (0x0005bea6) main_mp3_pane_g7

0xc886,	// (0x0005beb2) main_mp3_pane_g8_ParamLimits

0xc886,	// (0x0005beb2) main_mp3_pane_g8

0xf6e5,	// (0x0005ed11) main_mp3_pane_g_ParamLimits

0x6768,	// (0x00055d94) main_mp3_pane_t2

0x6776,	// (0x00055da2) main_mp3_pane_t3

0xc8a0,	// (0x0005becc) main_mp3_pane_t4

0xc8ae,	// (0x0005beda) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0005ed22) main_mp3_pane_t

0xc8bc,	// (0x0005bee8) mup_progress_pane_cp01

0xae8e,	// (0x0005a4ba) aid_zoom_text_secondary2

0xc6cf,	// (0x0005bcfb) list_cale_ev2_pane

0xc6d7,	// (0x0005bd03) scroll_pane_cp023_ParamLimits

0x68b4,	// (0x00055ee0) field_cale_ev2_pane_ParamLimits

0x68b4,	// (0x00055ee0) field_cale_ev2_pane

0xc8c4,	// (0x0005bef0) field_cale_ev2_pane_g1_ParamLimits

0xc8c4,	// (0x0005bef0) field_cale_ev2_pane_g1

0xc8d0,	// (0x0005befc) field_cale_ev2_pane_g2_ParamLimits

0xc8d0,	// (0x0005befc) field_cale_ev2_pane_g2

0xc8e8,	// (0x0005bf14) field_cale_ev2_pane_g3_ParamLimits

0xc8e8,	// (0x0005bf14) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x0005ed43) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x0005ed43) field_cale_ev2_pane_g

0xc90c,	// (0x0005bf38) field_cale_ev2_pane_t1_ParamLimits

0xc90c,	// (0x0005bf38) field_cale_ev2_pane_t1

0xc923,	// (0x0005bf4f) field_cale_ev2_pane_t2_ParamLimits

0xc923,	// (0x0005bf4f) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x0005ed4c) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x0005ed4c) field_cale_ev2_pane_t

0x59b0,	// (0x00054fdc) main_postcard_pane_g5_ParamLimits

0x59b0,	// (0x00054fdc) main_postcard_pane_g5

0x59c4,	// (0x00054ff0) main_postcard_pane_g6_ParamLimits

0x59c4,	// (0x00054ff0) main_postcard_pane_g6

0x2225,	// (0x00051851) camera2_autofocus_pane_cp_ParamLimits

0x2225,	// (0x00051851) camera2_autofocus_pane_cp

0xe9e5,	// (0x0005e011) main_mup3_pane

0x690a,	// (0x00055f36) main_mup3_pane_g1_ParamLimits

0x690a,	// (0x00055f36) main_mup3_pane_g1

0x692c,	// (0x00055f58) main_mup3_pane_g2_ParamLimits

0x692c,	// (0x00055f58) main_mup3_pane_g2

0x699f,	// (0x00055fcb) main_mup3_pane_g3_ParamLimits

0x699f,	// (0x00055fcb) main_mup3_pane_g3

0x69dd,	// (0x00056009) main_mup3_pane_g4_ParamLimits

0x69dd,	// (0x00056009) main_mup3_pane_g4

0x6a1b,	// (0x00056047) main_mup3_pane_g5_ParamLimits

0x6a1b,	// (0x00056047) main_mup3_pane_g5

0x6a59,	// (0x00056085) main_mup3_pane_g6_ParamLimits

0x6a59,	// (0x00056085) main_mup3_pane_g6

0x151c,	// (0x00050b48) main_mup3_pane_g7_ParamLimits

0x151c,	// (0x00050b48) main_mup3_pane_g7

0x0007,

0xf730,	// (0x0005ed5c) main_mup3_pane_g_ParamLimits

0xf730,	// (0x0005ed5c) main_mup3_pane_g

0x6acf,	// (0x000560fb) main_mup3_pane_t1_ParamLimits

0x6acf,	// (0x000560fb) main_mup3_pane_t1

0x6b35,	// (0x00056161) main_mup3_pane_t2_ParamLimits

0x6b35,	// (0x00056161) main_mup3_pane_t2

0x6bfb,	// (0x00056227) main_mup3_pane_t4_ParamLimits

0x6bfb,	// (0x00056227) main_mup3_pane_t4

0x6c49,	// (0x00056275) main_mup3_pane_t5_ParamLimits

0x6c49,	// (0x00056275) main_mup3_pane_t5

0x6cf7,	// (0x00056323) main_mup3_pane_t6_ParamLimits

0x6cf7,	// (0x00056323) main_mup3_pane_t6

0x0005,

0xf741,	// (0x0005ed6d) main_mup3_pane_t_ParamLimits

0xf741,	// (0x0005ed6d) main_mup3_pane_t

0x6dab,	// (0x000563d7) mup3_progress_pane_ParamLimits

0x6dab,	// (0x000563d7) mup3_progress_pane

0x6e27,	// (0x00056453) popup_mup3_control_window_ParamLimits

0x6e27,	// (0x00056453) popup_mup3_control_window

0xc938,	// (0x0005bf64) popup_mup3_text_window

0x6e55,	// (0x00056481) mup3_progress_pane_t1

0x6e73,	// (0x0005649f) mup3_progress_pane_t2

0xc940,	// (0x0005bf6c) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x0005ed7a) mup3_progress_pane_t

0xc95d,	// (0x0005bf89) mup_progress_pane_cp03

0x0e1e,	// (0x0005044a) bg_tb_trans_pane_cp04

0x6e91,	// (0x000564bd) mup3_volume_pane

0x6e99,	// (0x000564c5) popup_mup3_control_window_g1

0x6ea2,	// (0x000564ce) mup3_volume_pane_g1

0x6eab,	// (0x000564d7) mup3_volume_pane_g2

0x6eb4,	// (0x000564e0) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x0005ed81) mup3_volume_pane_g

0x0e1e,	// (0x0005044a) bg_tb_trans_pane_cp03

0xc96d,	// (0x0005bf99) popup_mup3_text_window_g1

0xc975,	// (0x0005bfa1) popup_mup3_text_window_t1

0x15cc,	// (0x00050bf8) list_calc_item_pane_g1_ParamLimits

0xc3cf,	// (0x0005b9fb) mup_volume_pane_cp_g1

0x687e,	// (0x00055eaa) main_touch_calib_pane_t3

0x6890,	// (0x00055ebc) main_touch_calib_pane_t4

0x68a2,	// (0x00055ece) main_touch_calib_pane_t5

0xae6e,	// (0x0005a49a) aid_cell_size_toolbar2

0xae76,	// (0x0005a4a2) aid_popup3_width_pane

0xae7e,	// (0x0005a4aa) aid_zoom_text_msg_primary

0x1783,	// (0x00050daf) vorec_t7

0x1590,	// (0x00050bbc) bg_calc_paper_pane_g1_ParamLimits

0x159c,	// (0x00050bc8) bg_calc_paper_pane_g2_ParamLimits

0x15a8,	// (0x00050bd4) bg_calc_paper_pane_g3_ParamLimits

0x15b4,	// (0x00050be0) bg_calc_paper_pane_g4_ParamLimits

0x15c0,	// (0x00050bec) bg_calc_paper_pane_g5_ParamLimits

0x3a87,	// (0x000530b3) bg_calc_paper_pane_g6_ParamLimits

0x3a96,	// (0x000530c2) bg_calc_paper_pane_g7_ParamLimits

0x3aa5,	// (0x000530d1) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0005e73f) bg_calc_paper_pane_g_ParamLimits

0x3ab4,	// (0x000530e0) calc_bg_paper_pane_g9_ParamLimits

0x429d,	// (0x000538c9) image_qvga_pane_ParamLimits

0x429d,	// (0x000538c9) image_qvga_pane

0x1494,	// (0x00050ac0) bg_popup_sub_pane_cp04_ParamLimits

0x235e,	// (0x0005198a) popup_mup_playback_window_g1_ParamLimits

0x236a,	// (0x00051996) popup_mup_playback_window_t1_ParamLimits

0x237f,	// (0x000519ab) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x0005eab4) popup_mup_playback_window_t_ParamLimits

0x151c,	// (0x00050b48) main_mup2_pane_g3_ParamLimits

0x151c,	// (0x00050b48) main_mup2_pane_g3

0x456b,	// (0x00053b97) popup_toolbar_window_cp04

0xb419,	// (0x0005aa45) popup_call2_audio_second_window_g3_ParamLimits

0xb419,	// (0x0005aa45) popup_call2_audio_second_window_g3

0xb857,	// (0x0005ae83) popup_call2_audio_first_window_g4_ParamLimits

0xb857,	// (0x0005ae83) popup_call2_audio_first_window_g4

0xbed6,	// (0x0005b502) popup_call2_audio_in_window_g4_ParamLimits

0xbed6,	// (0x0005b502) popup_call2_audio_in_window_g4

0x5ad7,	// (0x00055103) aid_area_sk_bg_cut_ParamLimits

0x5ad7,	// (0x00055103) aid_area_sk_bg_cut

0x2394,	// (0x000519c0) aid_area_sk_bg_cut_2_ParamLimits

0x2394,	// (0x000519c0) aid_area_sk_bg_cut_2

0x0e1e,	// (0x0005044a) aid_placing_details_win

0x0e1e,	// (0x0005044a) aid_placing_details_win_2

0x150e,	// (0x00050b3a) camera2_autofocus_pane_g1_ParamLimits

0x37f7,	// (0x00052e23) popup_fixed_preview_cale_window_ParamLimits

0x37f7,	// (0x00052e23) popup_fixed_preview_cale_window

0x2163,	// (0x0005178f) navi_slider_pane_g3

0x216c,	// (0x00051798) navi_slider_pane_g4

0x2175,	// (0x000517a1) navi_slider_pane_g5

0x2163,	// (0x0005178f) navi_slider_pane_g6

0xb097,	// (0x0005a6c3) navi_slider_pane_g7

0x2295,	// (0x000518c1) mup_scale_pane_g3

0x229e,	// (0x000518ca) mup_scale_pane_g4

0x22a7,	// (0x000518d3) mup_scale_pane_g5

0x57ed,	// (0x00054e19) mup_scale_pane_g6

0x57f6,	// (0x00054e22) mup_scale_pane_g7

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g3

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g4

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g5

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g6

0xc3d8,	// (0x0005ba04) cams2_slider_pane_g7

0x17cd,	// (0x00050df9) camera2_autofocus_pane_cp_g1

0xc28f,	// (0x0005b8bb) bg_popup_preview_window_pane_cp02_ParamLimits

0xc28f,	// (0x0005b8bb) bg_popup_preview_window_pane_cp02

0xc983,	// (0x0005bfaf) list_fp_cale_pane_ParamLimits

0xc983,	// (0x0005bfaf) list_fp_cale_pane

0xc98f,	// (0x0005bfbb) popup_fixed_preview_cale_window_t1_ParamLimits

0xc98f,	// (0x0005bfbb) popup_fixed_preview_cale_window_t1

0x6ebd,	// (0x000564e9) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ebd,	// (0x000564e9) popup_fixed_preview_cale_window_t2

0x6ed2,	// (0x000564fe) popup_fixed_preview_cale_window_t3_ParamLimits

0x6ed2,	// (0x000564fe) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x0005ed88) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x0005ed88) popup_fixed_preview_cale_window_t

0x6ee7,	// (0x00056513) list_single_fp_cale_pane_ParamLimits

0x6ee7,	// (0x00056513) list_single_fp_cale_pane

0xc9ad,	// (0x0005bfd9) list_single_fp_cale_pane_g1_ParamLimits

0xc9ad,	// (0x0005bfd9) list_single_fp_cale_pane_g1

0xc9b9,	// (0x0005bfe5) list_single_fp_cale_pane_g2_ParamLimits

0xc9b9,	// (0x0005bfe5) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x0005ed8f) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x0005ed8f) list_single_fp_cale_pane_g

0xc9d2,	// (0x0005bffe) list_single_fp_cale_pane_t1_ParamLimits

0xc9d2,	// (0x0005bffe) list_single_fp_cale_pane_t1

0xc9e4,	// (0x0005c010) list_single_fp_cale_pane_t2_ParamLimits

0xc9e4,	// (0x0005c010) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x0005ed96) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x0005ed96) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaebf,	// (0x0005a4eb) main_dialer_pane

0x6efb,	// (0x00056527) aid_cell_size_keypad

0x0e1e,	// (0x0005044a) dialer_ne_pane

0x0e1e,	// (0x0005044a) grid_dialer_command_1_pane

0x0e1e,	// (0x0005044a) grid_dialer_command_2_pane

0x0e1e,	// (0x0005044a) grid_dialer_keypad_pane

0x6f05,	// (0x00056531) bg_popup_call_pane_cp06_ParamLimits

0x6f05,	// (0x00056531) bg_popup_call_pane_cp06

0x6f05,	// (0x00056531) dialer_ne_clear_pane_ParamLimits

0x6f05,	// (0x00056531) dialer_ne_clear_pane

0x17cd,	// (0x00050df9) dialer_ne_pane_g1

0x179f,	// (0x00050dcb) dialer_ne_pane_t1_ParamLimits

0x179f,	// (0x00050dcb) dialer_ne_pane_t1

0x6f13,	// (0x0005653f) dialer_ne_pane_t2_ParamLimits

0x6f13,	// (0x0005653f) dialer_ne_pane_t2

0x6f3b,	// (0x00056567) dialer_ne_pane_t3_ParamLimits

0x6f3b,	// (0x00056567) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x0005ed9b) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x0005ed9b) dialer_ne_pane_t

0x6f3b,	// (0x00056567) dialer_ne_pane_t3_copy1_ParamLimits

0x6f3b,	// (0x00056567) dialer_ne_pane_t3_copy1

0x6f68,	// (0x00056594) cell_dialer_keypad_pane_ParamLimits

0x6f68,	// (0x00056594) cell_dialer_keypad_pane

0x6f70,	// (0x0005659c) cell_dialer_command_1_pane_ParamLimits

0x6f70,	// (0x0005659c) cell_dialer_command_1_pane

0x6f68,	// (0x00056594) cell_dialer_command_2_pane_ParamLimits

0x6f68,	// (0x00056594) cell_dialer_command_2_pane

0x2225,	// (0x00051851) bg_button_pane_cp02_ParamLimits

0x2225,	// (0x00051851) bg_button_pane_cp02

0x150e,	// (0x00050b3a) cell_dialer_keypad_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) cell_dialer_keypad_pane_g1

0x2225,	// (0x00051851) bg_button_pane_cp03_ParamLimits

0x2225,	// (0x00051851) bg_button_pane_cp03

0x150e,	// (0x00050b3a) cell_dialer_command_1_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) cell_dialer_command_1_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp04

0x17cd,	// (0x00050df9) cell_dialer_command_2_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp06

0x17cd,	// (0x00050df9) dialer_ne_clear_pane_g1

0x206e,	// (0x0005169a) navi_pane_g2

0x55f3,	// (0x00054c1f) navi_pane_g3

0x0002,

0xf38b,	// (0x0005e9b7) navi_pane_g

0x20fb,	// (0x00051727) navi_pane_mv_g2

0x2122,	// (0x0005174e) navi_pane_mv_g5

0x5610,	// (0x00054c3c) navi_pane_mv_t1

0x1584,	// (0x00050bb0) main_clock2_pane

0x6fbe,	// (0x000565ea) main_clock2_list_pane_ParamLimits

0x6fbe,	// (0x000565ea) main_clock2_list_pane

0x6ff0,	// (0x0005661c) main_clock2_pane_t1_ParamLimits

0x6ff0,	// (0x0005661c) main_clock2_pane_t1

0x702a,	// (0x00056656) main_clock2_pane_t2_ParamLimits

0x702a,	// (0x00056656) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x0005eda7) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x0005eda7) main_clock2_pane_t

0x70be,	// (0x000566ea) popup_clock_analogue_window_cp03_ParamLimits

0x70be,	// (0x000566ea) popup_clock_analogue_window_cp03

0x70e3,	// (0x0005670f) popup_clock_digital_window_cp02_ParamLimits

0x70e3,	// (0x0005670f) popup_clock_digital_window_cp02

0x7154,	// (0x00056780) main_clock2_list_single_pane_ParamLimits

0x7154,	// (0x00056780) main_clock2_list_single_pane

0x1751,	// (0x00050d7d) list_highlight_pane_cp05

0xca47,	// (0x0005c073) main_clock2_list_single_pane_t1

0x456b,	// (0x00053b97) popup_toolbar_window_cp04_ParamLimits

0x151c,	// (0x00050b48) camera2_autofocus_pane_g2_ParamLimits

0x151c,	// (0x00050b48) camera2_autofocus_pane_g2

0x151c,	// (0x00050b48) camera2_autofocus_pane_g3_ParamLimits

0x151c,	// (0x00050b48) camera2_autofocus_pane_g3

0x151c,	// (0x00050b48) camera2_autofocus_pane_g4_ParamLimits

0x151c,	// (0x00050b48) camera2_autofocus_pane_g4

0x151c,	// (0x00050b48) camera2_autofocus_pane_g5_ParamLimits

0x151c,	// (0x00050b48) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x0005eceb) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x0005eceb) camera2_autofocus_pane_g

0x68cc,	// (0x00055ef8) camera2_autofocus_pane_cp_g2

0x68d4,	// (0x00055f00) camera2_autofocus_pane_cp_g3

0x68dc,	// (0x00055f08) camera2_autofocus_pane_cp_g4

0x68e4,	// (0x00055f10) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0005ed51) camera2_autofocus_pane_cp_g

0x0e1e,	// (0x0005044a) popup_dialer_spcha_window

0x0e1e,	// (0x0005044a) bg_popup_sub_pane_cp07

0x0e1e,	// (0x0005044a) list_spcha_pane

0x0e1e,	// (0x0005044a) list_single_spcha_pane_ParamLimits

0x0e1e,	// (0x0005044a) list_single_spcha_pane

0x0e1e,	// (0x0005044a) list_highlight_pane_cp06

0xca55,	// (0x0005c081) list_single_spcha_pane_t1

0xbc80,	// (0x0005b2ac) popup_call2_audio_out_window_g4_ParamLimits

0xbc80,	// (0x0005b2ac) popup_call2_audio_out_window_g4

0xaebf,	// (0x0005a4eb) main_imed2_pane

0xea0b,	// (0x0005e037) popup_imed_adjust2_window

0x6221,	// (0x0005584d) popup_imed_trans_window_ParamLimits

0x6221,	// (0x0005584d) popup_imed_trans_window

0xc4ba,	// (0x0005bae6) popup_blid_sat_info2_window_t1

0xc4c8,	// (0x0005baf4) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x0005ec80) popup_blid_sat_info2_window_t

0x71fe,	// (0x0005682a) aid_size_cell_colour_35

0x721e,	// (0x0005684a) aid_size_cell_colour_112

0x723e,	// (0x0005686a) aid_size_cell_effect

0x244d,	// (0x00051a79) bg_tb_trans_pane_cp02

0x1c1d,	// (0x00051249) heading_imed_pane

0x725e,	// (0x0005688a) listscroll_imed_pane

0xca65,	// (0x0005c091) heading_imed_pane_g1

0xca6d,	// (0x0005c099) heading_imed_pane_t1

0xca7b,	// (0x0005c0a7) grid_imed_colour_35_pane_ParamLimits

0xca7b,	// (0x0005c0a7) grid_imed_colour_35_pane

0x726a,	// (0x00056896) grid_imed_effect_pane

0xca8e,	// (0x0005c0ba) list_imed_aspect_pane

0x727d,	// (0x000568a9) scroll_pane_cp027_ParamLimits

0x727d,	// (0x000568a9) scroll_pane_cp027

0x7289,	// (0x000568b5) cell_imed_effect_pane_ParamLimits

0x7289,	// (0x000568b5) cell_imed_effect_pane

0xca96,	// (0x0005c0c2) cell_imed_colour_pane_ParamLimits

0xca96,	// (0x0005c0c2) cell_imed_colour_pane

0xcad0,	// (0x0005c0fc) cell_imed_colour_pane_g1_ParamLimits

0xcad0,	// (0x0005c0fc) cell_imed_colour_pane_g1

0xcae1,	// (0x0005c10d) hgihlgiht_grid_pane_cp016_ParamLimits

0xcae1,	// (0x0005c10d) hgihlgiht_grid_pane_cp016

0x72ae,	// (0x000568da) cell_imed_effect_pane_g1

0x72b6,	// (0x000568e2) grid_highlight_pane_cp017

0xcaf2,	// (0x0005c11e) list_imed_single_pane_ParamLimits

0xcaf2,	// (0x0005c11e) list_imed_single_pane

0x0e1e,	// (0x0005044a) list_highlight_pane_cp07

0xcb05,	// (0x0005c131) list_imed_aspect_pane_comp1_t1

0x244d,	// (0x00051a79) bg_tb_trans_pane_cp05

0xcb25,	// (0x0005c151) popup_imed_adjust2_window_g1

0xcb4c,	// (0x0005c178) popup_imed_adjust2_window_t1

0xcb64,	// (0x0005c190) slider_imed_adjust_pane

0xcb78,	// (0x0005c1a4) slider_imed_adjust_pane_g1

0xcb88,	// (0x0005c1b4) slider_imed_adjust_pane_g2

0xcb98,	// (0x0005c1c4) slider_imed_adjust_pane_g3

0xcba9,	// (0x0005c1d5) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0005edc4) slider_imed_adjust_pane_g

0x72bf,	// (0x000568eb) aid_size_cell_clipart2

0x72cb,	// (0x000568f7) grid_imed_clipart_pane

0xcbba,	// (0x0005c1e6) scroll_pane_cp031

0x72d5,	// (0x00056901) cell_imed_clipart_pane_ParamLimits

0x72d5,	// (0x00056901) cell_imed_clipart_pane

0x72ed,	// (0x00056919) cell_imed_clipart_pane_g1

0x0e1e,	// (0x0005044a) grid_highlight_pane_cp014

0x6fd1,	// (0x000565fd) main_clock2_pane_g1_ParamLimits

0x6fd1,	// (0x000565fd) main_clock2_pane_g1

0x70ff,	// (0x0005672b) aid_call2_pane_cp10

0x7111,	// (0x0005673d) aid_call_pane_cp10

0x1ffd,	// (0x00051629) popup_clock_analogue_window_cp10_g1

0x1ffd,	// (0x00051629) popup_clock_analogue_window_cp10_g2

0x7123,	// (0x0005674f) popup_clock_analogue_window_cp10_g3

0x7123,	// (0x0005674f) popup_clock_analogue_window_cp10_g4

0x1ffd,	// (0x00051629) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x0005edb2) popup_clock_analogue_window_cp10_g

0x7135,	// (0x00056761) popup_clock_analogue_window_cp10_t1

0x7166,	// (0x00056792) clock_digital_number_pane_cp10_ParamLimits

0x7166,	// (0x00056792) clock_digital_number_pane_cp10

0x717e,	// (0x000567aa) clock_digital_number_pane_cp11_ParamLimits

0x717e,	// (0x000567aa) clock_digital_number_pane_cp11

0x7196,	// (0x000567c2) clock_digital_number_pane_cp12_ParamLimits

0x7196,	// (0x000567c2) clock_digital_number_pane_cp12

0x71ae,	// (0x000567da) clock_digital_number_pane_cp13_ParamLimits

0x71ae,	// (0x000567da) clock_digital_number_pane_cp13

0x71c6,	// (0x000567f2) clock_digital_separator_pane_cp10_ParamLimits

0x71c6,	// (0x000567f2) clock_digital_separator_pane_cp10

0x71de,	// (0x0005680a) popup_clock_digital_window_cp02_t1_ParamLimits

0x71de,	// (0x0005680a) popup_clock_digital_window_cp02_t1

0x148c,	// (0x00050ab8) clock_digital_number_pane_cp10_g1

0x148c,	// (0x00050ab8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x0005edcd) clock_digital_number_pane_cp10_g

0x148c,	// (0x00050ab8) clock_digital_separator_pane_cp10_g1

0x148c,	// (0x00050ab8) clock_digital_separator_pane_g2_cp10

0x212a,	// (0x00051756) navi_pane_vded_g4

0x2133,	// (0x0005175f) navi_pane_vded_g5

0x213c,	// (0x00051768) navi_pane_vded_t1

0xaebf,	// (0x0005a4eb) main_vded_pane

0x72f6,	// (0x00056922) main_vded_pane_g1

0x7300,	// (0x0005692c) main_vded_pane_g2

0x7308,	// (0x00056934) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0005edd2) main_vded_pane_g

0x7310,	// (0x0005693c) main_vded_pane_t1

0x731e,	// (0x0005694a) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x0005edd9) main_vded_pane_t

0x732c,	// (0x00056958) vded_slider_pane

0x7334,	// (0x00056960) vded_video_pane

0xcbc2,	// (0x0005c1ee) vded_video_pane_g1

0x733c,	// (0x00056968) vded_video_pane_g2

0x17cd,	// (0x00050df9) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x0005edde) vded_video_pane_g

0xcbcc,	// (0x0005c1f8) vded_slider_pane_g1

0xc3cf,	// (0x0005b9fb) vded_slider_pane_g2

0xcbd5,	// (0x0005c201) vded_slider_pane_g3

0xcbde,	// (0x0005c20a) vded_slider_pane_g4

0xcbe7,	// (0x0005c213) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0005ede5) vded_slider_pane_g

0x6e11,	// (0x0005643d) mup3_rocker_pane_ParamLimits

0x6e11,	// (0x0005643d) mup3_rocker_pane

0x7345,	// (0x00056971) mup3_control_keys_pane_g1

0x734d,	// (0x00056979) mup3_control_keys_pane_g2

0x7355,	// (0x00056981) mup3_control_keys_pane_g3

0x735d,	// (0x00056989) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x0005edf0) mup3_control_keys_pane_g

0x382a,	// (0x00052e56) popup_toolbar2_fixed_window_cp01_ParamLimits

0x382a,	// (0x00052e56) popup_toolbar2_fixed_window_cp01

0x6e3f,	// (0x0005646b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e3f,	// (0x0005646b) popup_toolbar2_fixed_window_cp02

0xb58b,	// (0x0005abb7) popup_call2_audio_second_window_t4_ParamLimits

0xb58b,	// (0x0005abb7) popup_call2_audio_second_window_t4

0xbaed,	// (0x0005b119) popup_call2_audio_first_window_t6_ParamLimits

0xbaed,	// (0x0005b119) popup_call2_audio_first_window_t6

0xbd83,	// (0x0005b3af) popup_call2_audio_out_window_t6_ParamLimits

0xbd83,	// (0x0005b3af) popup_call2_audio_out_window_t6

0xaebf,	// (0x0005a4eb) main_vitu_pane

0x2225,	// (0x00051851) aid_size_cell_itu_ParamLimits

0x2225,	// (0x00051851) aid_size_cell_itu

0x2225,	// (0x00051851) bg_popup_window_pane_cp08_ParamLimits

0x2225,	// (0x00051851) bg_popup_window_pane_cp08

0x2225,	// (0x00051851) field_vitu_entry_pane_ParamLimits

0x2225,	// (0x00051851) field_vitu_entry_pane

0x2225,	// (0x00051851) grid_vitu_function_pane_ParamLimits

0x2225,	// (0x00051851) grid_vitu_function_pane

0x2225,	// (0x00051851) grid_vitu_itu_pane_ParamLimits

0x2225,	// (0x00051851) grid_vitu_itu_pane

0x736d,	// (0x00056999) cell_vitu_itu_pane_ParamLimits

0x736d,	// (0x00056999) cell_vitu_itu_pane

0x2225,	// (0x00051851) cell_vitu_function_pane_ParamLimits

0x2225,	// (0x00051851) cell_vitu_function_pane

0x2225,	// (0x00051851) bg_popup_sub_pane_cp08_ParamLimits

0x2225,	// (0x00051851) bg_popup_sub_pane_cp08

0x2211,	// (0x0005183d) field_vitu_entry_pane_t1_ParamLimits

0x2211,	// (0x0005183d) field_vitu_entry_pane_t1

0xcbf0,	// (0x0005c21c) field_vitu_entry_pane_t2_ParamLimits

0xcbf0,	// (0x0005c21c) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x0005edfe) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x0005edfe) field_vitu_entry_pane_t

0xc463,	// (0x0005ba8f) bg_button_pane_cp05_ParamLimits

0xc463,	// (0x0005ba8f) bg_button_pane_cp05

0xcc0d,	// (0x0005c239) cell_vitu_itu_pane_g1

0x2467,	// (0x00051a93) cell_vitu_itu_pane_t1_ParamLimits

0x2467,	// (0x00051a93) cell_vitu_itu_pane_t1

0x2467,	// (0x00051a93) cell_vitu_itu_pane_t2_ParamLimits

0x2467,	// (0x00051a93) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0005ee03) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0005ee03) cell_vitu_itu_pane_t

0x0e1e,	// (0x0005044a) bg_button_pane_cp07

0x17cd,	// (0x00050df9) cell_vitu_function_pane_g1

0xaec9,	// (0x0005a4f5) main_calc_pane_g1

0x368e,	// (0x00052cba) aid_visual_content_pane

0xaebf,	// (0x0005a4eb) main_vradio_pane

0x150e,	// (0x00050b3a) main_vradio_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) main_vradio_pane_g1

0x151c,	// (0x00050b48) main_vradio_pane_g2_ParamLimits

0x151c,	// (0x00050b48) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x0005ee0a) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x0005ee0a) main_vradio_pane_g

0x2211,	// (0x0005183d) main_vradio_pane_t1_ParamLimits

0x2211,	// (0x0005183d) main_vradio_pane_t1

0x2211,	// (0x0005183d) main_vradio_pane_t2_ParamLimits

0x2211,	// (0x0005183d) main_vradio_pane_t2

0x179f,	// (0x00050dcb) main_vradio_pane_t3_ParamLimits

0x179f,	// (0x00050dcb) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x0005ee0f) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x0005ee0f) main_vradio_pane_t

0x2225,	// (0x00051851) vradio_rocker_control_pane_ParamLimits

0x2225,	// (0x00051851) vradio_rocker_control_pane

0x2225,	// (0x00051851) vradio_station_info_pane_ParamLimits

0x2225,	// (0x00051851) vradio_station_info_pane

0x2225,	// (0x00051851) vradio_frequency_info_pane_ParamLimits

0x2225,	// (0x00051851) vradio_frequency_info_pane

0x17cd,	// (0x00050df9) vradio_station_info_pane_g1

0x2467,	// (0x00051a93) vradio_station_info_pane_t1_ParamLimits

0x2467,	// (0x00051a93) vradio_station_info_pane_t1

0x179f,	// (0x00050dcb) vradio_station_info_pane_t2_ParamLimits

0x179f,	// (0x00050dcb) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0005ee16) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0005ee16) vradio_station_info_pane_t

0x0e1e,	// (0x0005044a) vradio_tuning_pane

0x7381,	// (0x000569ad) vradio_rocker_control_pane_g1

0xcc29,	// (0x0005c255) vradio_rocker_control_pane_g2

0x7389,	// (0x000569b5) vradio_rocker_control_pane_g3

0x7391,	// (0x000569bd) vradio_rocker_control_pane_g4

0x7399,	// (0x000569c5) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x0005ee1b) vradio_rocker_control_pane_g

0x17cd,	// (0x00050df9) vradio_frequency_info_pane_g1

0x2211,	// (0x0005183d) vradio_frequency_info_pane_t1_ParamLimits

0x2211,	// (0x0005183d) vradio_frequency_info_pane_t1

0x73a1,	// (0x000569cd) vradio_tuning_pane_g1

0x73aa,	// (0x000569d6) vradio_tuning_pane_t1

0xae96,	// (0x0005a4c2) area_side_right_pane_ParamLimits

0xae96,	// (0x0005a4c2) area_side_right_pane

0xc256,	// (0x0005b882) status_small_pane_g1

0xc25e,	// (0x0005b88a) status_small_pane_g2

0xc267,	// (0x0005b893) status_small_pane_g3

0xc270,	// (0x0005b89c) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0005ebe2) status_small_pane_g

0xc279,	// (0x0005b8a5) status_small_pane_t1

0xaebf,	// (0x0005a4eb) main_video3_pane

0xcc31,	// (0x0005c25d) cams_zoom_vslider_pane

0xcc39,	// (0x0005c265) image3_wide_pane_ParamLimits

0xcc39,	// (0x0005c265) image3_wide_pane

0xcc53,	// (0x0005c27f) image3_wide_small_pane

0xcc5d,	// (0x0005c289) main_video3_pane_g1_ParamLimits

0xcc5d,	// (0x0005c289) main_video3_pane_g1

0xcc79,	// (0x0005c2a5) main_video3_pane_g2_ParamLimits

0xcc79,	// (0x0005c2a5) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0005ee26) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0005ee26) main_video3_pane_g

0xcc95,	// (0x0005c2c1) main_video3_pane_t1_ParamLimits

0xcc95,	// (0x0005c2c1) main_video3_pane_t1

0xccc0,	// (0x0005c2ec) main_video3_pane_t2_ParamLimits

0xccc0,	// (0x0005c2ec) main_video3_pane_t2

0xcceb,	// (0x0005c317) main_video3_pane_t3_ParamLimits

0xcceb,	// (0x0005c317) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x0005ee2b) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x0005ee2b) main_video3_pane_t

0xcd16,	// (0x0005c342) cams_zoom_vslider_pane_g1

0xcd1f,	// (0x0005c34b) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0005ee32) cams_zoom_vslider_pane_g

0xcd27,	// (0x0005c353) small_slider_vertical_pane

0x17cd,	// (0x00050df9) small_slider_vertical_pane_g1

0x17cd,	// (0x00050df9) small_slider_vertical_pane_g2

0xcd2f,	// (0x0005c35b) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x0005ee37) small_slider_vertical_pane_g

0xaebf,	// (0x0005a4eb) main_hwr_training_pane

0xcd38,	// (0x0005c364) hwr_training_instruct_pane_ParamLimits

0xcd38,	// (0x0005c364) hwr_training_instruct_pane

0x73b9,	// (0x000569e5) hwr_training_navi_pane_ParamLimits

0x73b9,	// (0x000569e5) hwr_training_navi_pane

0x73d0,	// (0x000569fc) hwr_training_write_pane_ParamLimits

0x73d0,	// (0x000569fc) hwr_training_write_pane

0x0e1e,	// (0x0005044a) bg_frame_shadow_pane

0xcd67,	// (0x0005c393) hwr_training_write_pane_g1

0xcd6f,	// (0x0005c39b) hwr_training_write_pane_g2

0xcd77,	// (0x0005c3a3) hwr_training_write_pane_g3

0xcd7f,	// (0x0005c3ab) hwr_training_write_pane_g4

0xcd87,	// (0x0005c3b3) hwr_training_write_pane_g5

0xcd8f,	// (0x0005c3bb) hwr_training_write_pane_g6

0xcd97,	// (0x0005c3c3) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0005ee3e) hwr_training_write_pane_g

0xeaf1,	// (0x0005e11d) hwr_training_navi_pane_g1_ParamLimits

0xeaf1,	// (0x0005e11d) hwr_training_navi_pane_g1

0xeb03,	// (0x0005e12f) hwr_training_navi_pane_g2_ParamLimits

0xeb03,	// (0x0005e12f) hwr_training_navi_pane_g2

0xeb15,	// (0x0005e141) hwr_training_navi_pane_g3_ParamLimits

0xeb15,	// (0x0005e141) hwr_training_navi_pane_g3

0xeb25,	// (0x0005e151) hwr_training_navi_pane_g4_ParamLimits

0xeb25,	// (0x0005e151) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x0005ee4d) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x0005ee4d) hwr_training_navi_pane_g

0xeb32,	// (0x0005e15e) hwr_training_navi_pane_t1

0x7410,	// (0x00056a3c) list_single_hwr_training_instruct_pane_ParamLimits

0x7410,	// (0x00056a3c) list_single_hwr_training_instruct_pane

0xcd9f,	// (0x0005c3cb) list_single_hwr_training_instruct_pane_t1

0xc596,	// (0x0005bbc2) bg_frame_shadow_pane_g1

0xcdae,	// (0x0005c3da) bg_frame_shadow_pane_g2

0xcdb6,	// (0x0005c3e2) bg_frame_shadow_pane_g3

0xcdbe,	// (0x0005c3ea) bg_frame_shadow_pane_g4

0xcdc6,	// (0x0005c3f2) bg_frame_shadow_pane_g5

0xcdce,	// (0x0005c3fa) bg_frame_shadow_pane_g6

0xcdd6,	// (0x0005c402) bg_frame_shadow_pane_g7

0x1645,	// (0x00050c71) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x0005ee58) bg_frame_shadow_pane_g

0xaebf,	// (0x0005a4eb) main_video_tele_dialer_pane

0x7428,	// (0x00056a54) aid_size_cell_video_keypad_ParamLimits

0x7428,	// (0x00056a54) aid_size_cell_video_keypad

0x7442,	// (0x00056a6e) grid_video_dialer_keypad_pane_ParamLimits

0x7442,	// (0x00056a6e) grid_video_dialer_keypad_pane

0x7484,	// (0x00056ab0) video_down_pane_cp_ParamLimits

0x7484,	// (0x00056ab0) video_down_pane_cp

0x74b4,	// (0x00056ae0) cell_video_dialer_keypad_pane_ParamLimits

0x74b4,	// (0x00056ae0) cell_video_dialer_keypad_pane

0xcdde,	// (0x0005c40a) bg_button_pane_cp08_ParamLimits

0xcdde,	// (0x0005c40a) bg_button_pane_cp08

0x74d6,	// (0x00056b02) cell_video_dialer_keypad_pane_g1_ParamLimits

0x74d6,	// (0x00056b02) cell_video_dialer_keypad_pane_g1

0x6dfb,	// (0x00056427) mup3_rocker2_pane_ParamLimits

0x6dfb,	// (0x00056427) mup3_rocker2_pane

0x17cd,	// (0x00050df9) mup3_rocker2_pane_g1

0x611a,	// (0x00055746) main_dialer2_pane

0xaebf,	// (0x0005a4eb) main_mp4_pane

0xeb5e,	// (0x0005e18a) main_mp4_pane_g1_ParamLimits

0xeb5e,	// (0x0005e18a) main_mp4_pane_g1

0xeb5e,	// (0x0005e18a) main_mp4_pane_g2_ParamLimits

0xeb5e,	// (0x0005e18a) main_mp4_pane_g2

0x7511,	// (0x00056b3d) main_mp4_pane_g3_ParamLimits

0x7511,	// (0x00056b3d) main_mp4_pane_g3

0xeb6c,	// (0x0005e198) main_mp4_pane_g4_ParamLimits

0xeb6c,	// (0x0005e198) main_mp4_pane_g4

0xeb9a,	// (0x0005e1c6) main_mp4_pane_g5_ParamLimits

0xeb9a,	// (0x0005e1c6) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x0005ee78) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x0005ee78) main_mp4_pane_g

0xec0e,	// (0x0005e23a) main_mp4_pane_t1_ParamLimits

0xec0e,	// (0x0005e23a) main_mp4_pane_t1

0xec66,	// (0x0005e292) main_mp4_pane_t2_ParamLimits

0xec66,	// (0x0005e292) main_mp4_pane_t2

0xcdea,	// (0x0005c416) main_mp4_pane_t3_ParamLimits

0xcdea,	// (0x0005c416) main_mp4_pane_t3

0xecb8,	// (0x0005e2e4) main_mp4_pane_t4_ParamLimits

0xecb8,	// (0x0005e2e4) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x0005ee89) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x0005ee89) main_mp4_pane_t

0xecf8,	// (0x0005e324) mp4_progress_pane_ParamLimits

0xecf8,	// (0x0005e324) mp4_progress_pane

0xed3c,	// (0x0005e368) mp4_rocker_pane_ParamLimits

0xed3c,	// (0x0005e368) mp4_rocker_pane

0xce18,	// (0x0005c444) mp4_progress_pane_t1

0xce2f,	// (0x0005c45b) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x0005ee92) mp4_progress_pane_t

0xce46,	// (0x0005c472) mup_progress_pane_cp04

0xc3d8,	// (0x0005ba04) mp4_rocker_pane_g1

0x7541,	// (0x00056b6d) aid_cell_size_keypad2_ParamLimits

0x7541,	// (0x00056b6d) aid_cell_size_keypad2

0x7559,	// (0x00056b85) dialer2_ne_pane_ParamLimits

0x7559,	// (0x00056b85) dialer2_ne_pane

0xe9e5,	// (0x0005e011) grid_dialer2_keypad_pane_ParamLimits

0xe9e5,	// (0x0005e011) grid_dialer2_keypad_pane

0xc463,	// (0x0005ba8f) bg_popup_call_pane_cp07_ParamLimits

0xc463,	// (0x0005ba8f) bg_popup_call_pane_cp07

0x1538,	// (0x00050b64) dialer2_ne_pane_t1_ParamLimits

0x1538,	// (0x00050b64) dialer2_ne_pane_t1

0x7574,	// (0x00056ba0) cell_dialer2_keypad_pane_ParamLimits

0x7574,	// (0x00056ba0) cell_dialer2_keypad_pane

0xce52,	// (0x0005c47e) bg_button_pane_pane_cp04_ParamLimits

0xce52,	// (0x0005c47e) bg_button_pane_pane_cp04

0x150e,	// (0x00050b3a) cell_dialer2_keypad_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) cell_dialer2_keypad_pane_g1

0x4459,	// (0x00053a85) aid_placing_vt_set_content_ParamLimits

0x4459,	// (0x00053a85) aid_placing_vt_set_content

0x447b,	// (0x00053aa7) aid_placing_vt_set_title_ParamLimits

0x447b,	// (0x00053aa7) aid_placing_vt_set_title

0xaebf,	// (0x0005a4eb) main_image3_pane

0x75ca,	// (0x00056bf6) area_side_right_pane_cp01_ParamLimits

0x75ca,	// (0x00056bf6) area_side_right_pane_cp01

0xeb5e,	// (0x0005e18a) main_image3_pane_g1_ParamLimits

0xeb5e,	// (0x0005e18a) main_image3_pane_g1

0x75e1,	// (0x00056c0d) main_image3_pane_g2_ParamLimits

0x75e1,	// (0x00056c0d) main_image3_pane_g2

0x7607,	// (0x00056c33) main_image3_pane_g3_ParamLimits

0x7607,	// (0x00056c33) main_image3_pane_g3

0x762d,	// (0x00056c59) main_image3_pane_g4_ParamLimits

0x762d,	// (0x00056c59) main_image3_pane_g4

0x0003,

0xf875,	// (0x0005eea1) main_image3_pane_g_ParamLimits

0xf875,	// (0x0005eea1) main_image3_pane_g

0x7653,	// (0x00056c7f) main_image3_pane_t1_ParamLimits

0x7653,	// (0x00056c7f) main_image3_pane_t1

0x76ab,	// (0x00056cd7) main_image3_pane_t2_ParamLimits

0x76ab,	// (0x00056cd7) main_image3_pane_t2

0x76fd,	// (0x00056d29) main_image3_pane_t3_ParamLimits

0x76fd,	// (0x00056d29) main_image3_pane_t3

0x0003,

0xf87e,	// (0x0005eeaa) main_image3_pane_t_ParamLimits

0xf87e,	// (0x0005eeaa) main_image3_pane_t

0x2225,	// (0x00051851) grid_sctrl_middle_pane_cp01_ParamLimits

0x2225,	// (0x00051851) grid_sctrl_middle_pane_cp01

0x777d,	// (0x00056da9) cell_sctrl_middle_pane_cp01_ParamLimits

0x777d,	// (0x00056da9) cell_sctrl_middle_pane_cp01

0x779a,	// (0x00056dc6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x779a,	// (0x00056dc6) cell_sctrl_middle_pane_cp01_g1

0xaebf,	// (0x0005a4eb) main_call4_pane

0x77b0,	// (0x00056ddc) aid_size_button_call4_ParamLimits

0x77b0,	// (0x00056ddc) aid_size_button_call4

0x77dd,	// (0x00056e09) call4_windows_pane_ParamLimits

0x77dd,	// (0x00056e09) call4_windows_pane

0x77f3,	// (0x00056e1f) grid_call4_button_pane_ParamLimits

0x77f3,	// (0x00056e1f) grid_call4_button_pane

0xce86,	// (0x0005c4b2) call4_windows_conf_pane

0xce99,	// (0x0005c4c5) popup_call4_audio_first_window_ParamLimits

0xce99,	// (0x0005c4c5) popup_call4_audio_first_window

0xced9,	// (0x0005c505) popup_call4_audio_second_window_ParamLimits

0xced9,	// (0x0005c505) popup_call4_audio_second_window

0xceeb,	// (0x0005c517) popup_call4_audio_wait_window_ParamLimits

0xceeb,	// (0x0005c517) popup_call4_audio_wait_window

0x781a,	// (0x00056e46) cell_call4_button_pane_ParamLimits

0x781a,	// (0x00056e46) cell_call4_button_pane

0x783f,	// (0x00056e6b) bg_button_pane_cp09_ParamLimits

0x783f,	// (0x00056e6b) bg_button_pane_cp09

0x784b,	// (0x00056e77) cell_call4_button_pane_g1_ParamLimits

0x784b,	// (0x00056e77) cell_call4_button_pane_g1

0x7871,	// (0x00056e9d) cell_call4_button_pane_t1_ParamLimits

0x7871,	// (0x00056e9d) cell_call4_button_pane_t1

0xceff,	// (0x0005c52b) popup_call4_audio_conf_window_ParamLimits

0xceff,	// (0x0005c52b) popup_call4_audio_conf_window

0x6e55,	// (0x00056481) mup3_progress_pane_t1_ParamLimits

0x6e73,	// (0x0005649f) mup3_progress_pane_t2_ParamLimits

0xc940,	// (0x0005bf6c) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x0005ed7a) mup3_progress_pane_t_ParamLimits

0xc95d,	// (0x0005bf89) mup_progress_pane_cp03_ParamLimits

0x7365,	// (0x00056991) mup3_control_keys_pane_g4_copy1

0xed26,	// (0x0005e352) mp4_rocker2_pane_ParamLimits

0xed26,	// (0x0005e352) mp4_rocker2_pane

0xcf13,	// (0x0005c53f) mp4_rocker2_pane_g1

0xcf1b,	// (0x0005c547) mp4_rocker2_pane_g2

0xedbe,	// (0x0005e3ea) mp4_rocker2_pane_g3

0xedc6,	// (0x0005e3f2) mp4_rocker2_pane_g4

0xedce,	// (0x0005e3fa) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x0005eeb3) mp4_rocker2_pane_g

0xaebf,	// (0x0005a4eb) main_camera4_pane

0xaebf,	// (0x0005a4eb) main_video4_pane

0x7456,	// (0x00056a82) main_video_tele_dialer_pane_t1_ParamLimits

0x7456,	// (0x00056a82) main_video_tele_dialer_pane_t1

0x746d,	// (0x00056a99) main_video_tele_dialer_pane_t2_ParamLimits

0x746d,	// (0x00056a99) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x0005ee69) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x0005ee69) main_video_tele_dialer_pane_t

0x78af,	// (0x00056edb) cam4_autofocus_pane_ParamLimits

0x78af,	// (0x00056edb) cam4_autofocus_pane

0x78c3,	// (0x00056eef) cam4_image_uncrop_pane_ParamLimits

0x78c3,	// (0x00056eef) cam4_image_uncrop_pane

0x78da,	// (0x00056f06) cam4_indicators_pane_ParamLimits

0x78da,	// (0x00056f06) cam4_indicators_pane

0x78fe,	// (0x00056f2a) main_camera4_pane_g1_ParamLimits

0x78fe,	// (0x00056f2a) main_camera4_pane_g1

0x790a,	// (0x00056f36) main_camera4_pane_g2_ParamLimits

0x790a,	// (0x00056f36) main_camera4_pane_g2

0x790a,	// (0x00056f36) main_camera4_pane_g3_ParamLimits

0x790a,	// (0x00056f36) main_camera4_pane_g3

0x7916,	// (0x00056f42) main_camera4_pane_g4_ParamLimits

0x7916,	// (0x00056f42) main_camera4_pane_g4

0x7922,	// (0x00056f4e) main_camera4_pane_g5_ParamLimits

0x7922,	// (0x00056f4e) main_camera4_pane_g5

0x0005,

0xf892,	// (0x0005eebe) main_camera4_pane_g_ParamLimits

0xf892,	// (0x0005eebe) main_camera4_pane_g

0x793f,	// (0x00056f6b) main_camera4_pane_t1_ParamLimits

0x793f,	// (0x00056f6b) main_camera4_pane_t1

0xedf0,	// (0x0005e41c) bg_tb_trans_pane_cp06

0xee06,	// (0x0005e432) cam4_indicators_pane_g1

0xee16,	// (0x0005e442) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x0005eed9) cam4_indicators_pane_g

0xee36,	// (0x0005e462) cam4_indicators_pane_t1

0x7994,	// (0x00056fc0) main_video4_pane_g1_ParamLimits

0x7994,	// (0x00056fc0) main_video4_pane_g1

0x79a6,	// (0x00056fd2) main_video4_pane_g2_ParamLimits

0x79a6,	// (0x00056fd2) main_video4_pane_g2

0x79a6,	// (0x00056fd2) main_video4_pane_g3_ParamLimits

0x79a6,	// (0x00056fd2) main_video4_pane_g3

0x79b5,	// (0x00056fe1) main_video4_pane_g4_ParamLimits

0x79b5,	// (0x00056fe1) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x0005eee0) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x0005eee0) main_video4_pane_g

0x79d3,	// (0x00056fff) vid4_indicators_pane_ParamLimits

0x79d3,	// (0x00056fff) vid4_indicators_pane

0x79fb,	// (0x00057027) video4_image_uncrop_cif_pane_ParamLimits

0x79fb,	// (0x00057027) video4_image_uncrop_cif_pane

0x7a13,	// (0x0005703f) video4_image_uncrop_nhd_pane_ParamLimits

0x7a13,	// (0x0005703f) video4_image_uncrop_nhd_pane

0x7a27,	// (0x00057053) video4_image_uncrop_vga_pane_ParamLimits

0x7a27,	// (0x00057053) video4_image_uncrop_vga_pane

0xe9e5,	// (0x0005e011) bg_tb_trans_pane_cp07

0xee06,	// (0x0005e432) vid4_indicators_pane_g1

0xee58,	// (0x0005e484) vid4_indicators_pane_g2

0xee68,	// (0x0005e494) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x0005eeeb) vid4_indicators_pane_g

0xee95,	// (0x0005e4c1) vid4_indicators_pane_t1

0x7a3f,	// (0x0005706b) cam4_autofocus_pane_g1

0x7a47,	// (0x00057073) cam4_autofocus_pane_g2

0x7a4f,	// (0x0005707b) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0005eef6) cam4_autofocus_pane_g

0x7a57,	// (0x00057083) cam4_autofocus_pane_g3_copy1

0x7498,	// (0x00056ac4) video_down_pane_cp_t1

0x74a6,	// (0x00056ad2) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x0005ee6e) video_down_pane_cp_t

0xe9e5,	// (0x0005e011) popup_vitu2_window_ParamLimits

0xe9e5,	// (0x0005e011) popup_vitu2_window

0x7a5f,	// (0x0005708b) aid_size_cell2_itu2_ParamLimits

0x7a5f,	// (0x0005708b) aid_size_cell2_itu2

0x7a85,	// (0x000570b1) aid_size_cell_itu2_ParamLimits

0x7a85,	// (0x000570b1) aid_size_cell_itu2

0x7ad7,	// (0x00057103) bg_popup_window_pane_cp09_ParamLimits

0x7ad7,	// (0x00057103) bg_popup_window_pane_cp09

0x7ae5,	// (0x00057111) field_vitu2_entry_pane_ParamLimits

0x7ae5,	// (0x00057111) field_vitu2_entry_pane

0x7aff,	// (0x0005712b) grid_vitu2_function_pane_ParamLimits

0x7aff,	// (0x0005712b) grid_vitu2_function_pane

0x7b3a,	// (0x00057166) grid_vitu2_itu_pane_ParamLimits

0x7b3a,	// (0x00057166) grid_vitu2_itu_pane

0x7ba4,	// (0x000571d0) cell_vitu2_itu_pane_ParamLimits

0x7ba4,	// (0x000571d0) cell_vitu2_itu_pane

0x7bcc,	// (0x000571f8) cell_vitu2_function_pane_ParamLimits

0x7bcc,	// (0x000571f8) cell_vitu2_function_pane

0xcf23,	// (0x0005c54f) bg_popup_call_pane_cp08_ParamLimits

0xcf23,	// (0x0005c54f) bg_popup_call_pane_cp08

0xcf3a,	// (0x0005c566) field_vitu2_entry_pane_g1

0xcf46,	// (0x0005c572) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x0005eefd) field_vitu2_entry_pane_g

0x7c0b,	// (0x00057237) field_vitu2_entry_pane_t1_ParamLimits

0x7c0b,	// (0x00057237) field_vitu2_entry_pane_t1

0xcf52,	// (0x0005c57e) field_vitu2_entry_pane_t2_ParamLimits

0xcf52,	// (0x0005c57e) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0005ef04) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0005ef04) field_vitu2_entry_pane_t

0x7c39,	// (0x00057265) bg_button_pane_cp010_ParamLimits

0x7c39,	// (0x00057265) bg_button_pane_cp010

0xeeaf,	// (0x0005e4db) cell_vitu2_itu_pane_g1

0x7c55,	// (0x00057281) cell_vitu2_itu_pane_t1_ParamLimits

0x7c55,	// (0x00057281) cell_vitu2_itu_pane_t1

0x356a,	// (0x00052b96) cell_vitu2_itu_pane_t2_ParamLimits

0x356a,	// (0x00052b96) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x0005ef0e) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x0005ef0e) cell_vitu2_itu_pane_t

0xe9e5,	// (0x0005e011) bg_button_pane_cp011

0x7cb3,	// (0x000572df) cell_vitu2_function_pane_g1

0xaebf,	// (0x0005a4eb) main_myfav_hc_pane

0x7749,	// (0x00056d75) popup_image3_note_pane_ParamLimits

0x7749,	// (0x00056d75) popup_image3_note_pane

0x7763,	// (0x00056d8f) popup_image3_tool_bar_pane_ParamLimits

0x7763,	// (0x00056d8f) popup_image3_tool_bar_pane

0x35f8,	// (0x00052c24) cell_vitu2_itu_pane_t3_ParamLimits

0x35f8,	// (0x00052c24) cell_vitu2_itu_pane_t3

0x0e1e,	// (0x0005044a) bg_popup_trans_pane

0xcf77,	// (0x0005c5a3) grid_image3_tool_bar_pane

0xcf81,	// (0x0005c5ad) bg_popup_trans_pane_g1

0x19eb,	// (0x00051017) bg_popup_trans_pane_g2

0xcf89,	// (0x0005c5b5) bg_popup_trans_pane_g3

0xcf91,	// (0x0005c5bd) bg_popup_trans_pane_g4

0xcf99,	// (0x0005c5c5) bg_popup_trans_pane_g5

0xcfa1,	// (0x0005c5cd) bg_popup_trans_pane_g6

0xcfa9,	// (0x0005c5d5) bg_popup_trans_pane_g7

0xcfb1,	// (0x0005c5dd) bg_popup_trans_pane_g8

0x19cb,	// (0x00050ff7) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0005ef15) bg_popup_trans_pane_g

0xcfb9,	// (0x0005c5e5) cell_image3_tool_bar_pane_ParamLimits

0xcfb9,	// (0x0005c5e5) cell_image3_tool_bar_pane

0x17cd,	// (0x00050df9) cell_image3_tool_bar_pane_g1

0x0e1e,	// (0x0005044a) bg_popup_trans_pane_cp1

0xcfcd,	// (0x0005c5f9) popup_image3_note_pane_t1

0xcfdb,	// (0x0005c607) popup_image3_note_pane_t2

0xcfe9,	// (0x0005c615) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x0005ef28) popup_image3_note_pane_t

0xcff7,	// (0x0005c623) popup_image3_note_pane_t3_copy1

0x7cc6,	// (0x000572f2) bg_myfav_hc_instruction_pane_ParamLimits

0x7cc6,	// (0x000572f2) bg_myfav_hc_instruction_pane

0x7cd8,	// (0x00057304) cell_myfav_contact_pane_ParamLimits

0x7cd8,	// (0x00057304) cell_myfav_contact_pane

0x7cf2,	// (0x0005731e) cell_myfav_contact_pane_cp1_ParamLimits

0x7cf2,	// (0x0005731e) cell_myfav_contact_pane_cp1

0x7d08,	// (0x00057334) cell_myfav_contact_pane_cp2_ParamLimits

0x7d08,	// (0x00057334) cell_myfav_contact_pane_cp2

0x7d1e,	// (0x0005734a) cell_myfav_contact_pane_cp3_ParamLimits

0x7d1e,	// (0x0005734a) cell_myfav_contact_pane_cp3

0x7d33,	// (0x0005735f) cell_myfav_contact_pane_cp4_ParamLimits

0x7d33,	// (0x0005735f) cell_myfav_contact_pane_cp4

0x7d47,	// (0x00057373) cell_myfav_contact_pane_cp5_ParamLimits

0x7d47,	// (0x00057373) cell_myfav_contact_pane_cp5

0x7d5b,	// (0x00057387) cell_myfav_contact_pane_cp6_ParamLimits

0x7d5b,	// (0x00057387) cell_myfav_contact_pane_cp6

0x7d6f,	// (0x0005739b) cell_myfav_contact_pane_cp7_ParamLimits

0x7d6f,	// (0x0005739b) cell_myfav_contact_pane_cp7

0xd005,	// (0x0005c631) listscroll_gen_pane_cp05

0x7d87,	// (0x000573b3) main_myfav_hc_pane_g1_ParamLimits

0x7d87,	// (0x000573b3) main_myfav_hc_pane_g1

0x7d9d,	// (0x000573c9) main_myfav_hc_pane_g2_ParamLimits

0x7d9d,	// (0x000573c9) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x0005ef2f) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x0005ef2f) main_myfav_hc_pane_g

0x7dc7,	// (0x000573f3) main_myfav_hc_pane_t1_ParamLimits

0x7dc7,	// (0x000573f3) main_myfav_hc_pane_t1

0xd00e,	// (0x0005c63a) main_myfav_hc_pane_t2_ParamLimits

0xd00e,	// (0x0005c63a) main_myfav_hc_pane_t2

0xd020,	// (0x0005c64c) main_myfav_hc_pane_t3_ParamLimits

0xd020,	// (0x0005c64c) main_myfav_hc_pane_t3

0x7ddc,	// (0x00057408) main_myfav_hc_pane_t4_ParamLimits

0x7ddc,	// (0x00057408) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0005ef36) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0005ef36) main_myfav_hc_pane_t

0x17cd,	// (0x00050df9) bg_myfav_hc_instruction_pane_g1

0xd032,	// (0x0005c65e) cell_myfav_contact_pane_g1_ParamLimits

0xd032,	// (0x0005c65e) cell_myfav_contact_pane_g1

0xd032,	// (0x0005c65e) cell_myfav_contact_pane_g2_ParamLimits

0xd032,	// (0x0005c65e) cell_myfav_contact_pane_g2

0xd03e,	// (0x0005c66a) cell_myfav_contact_pane_g3_ParamLimits

0xd03e,	// (0x0005c66a) cell_myfav_contact_pane_g3

0x151c,	// (0x00050b48) cell_myfav_contact_pane_g4_ParamLimits

0x151c,	// (0x00050b48) cell_myfav_contact_pane_g4

0xd04b,	// (0x0005c677) cell_myfav_contact_pane_g5_ParamLimits

0xd04b,	// (0x0005c677) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x0005ef41) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x0005ef41) cell_myfav_contact_pane_g

0x7db3,	// (0x000573df) main_myfav_hc_pane_g3_ParamLimits

0x7db3,	// (0x000573df) main_myfav_hc_pane_g3

0x37b0,	// (0x00052ddc) popup_adpt_find_window

0x7e00,	// (0x0005742c) afind_page_pane_ParamLimits

0x7e00,	// (0x0005742c) afind_page_pane

0x7e15,	// (0x00057441) aid_size_cell_afind_ParamLimits

0x7e15,	// (0x00057441) aid_size_cell_afind

0x7e33,	// (0x0005745f) bg_popup_sub_pane_cp09_ParamLimits

0x7e33,	// (0x0005745f) bg_popup_sub_pane_cp09

0x7e40,	// (0x0005746c) find_pane_cp01_ParamLimits

0x7e40,	// (0x0005746c) find_pane_cp01

0xd057,	// (0x0005c683) grid_afind_control_pane_ParamLimits

0xd057,	// (0x0005c683) grid_afind_control_pane

0x7e4d,	// (0x00057479) grid_afind_pane_ParamLimits

0x7e4d,	// (0x00057479) grid_afind_pane

0x7e6b,	// (0x00057497) cell_afind_pane_ParamLimits

0x7e6b,	// (0x00057497) cell_afind_pane

0x17cd,	// (0x00050df9) afind_page_pane_g1

0x7eba,	// (0x000574e6) afind_page_pane_g2

0x7ec3,	// (0x000574ef) afind_page_pane_g3

0x0002,

0xf920,	// (0x0005ef4c) afind_page_pane_g

0x7ecc,	// (0x000574f8) afind_page_pane_t1

0xd06b,	// (0x0005c697) cell_afind_grid_control_pane_ParamLimits

0xd06b,	// (0x0005c697) cell_afind_grid_control_pane

0xd07a,	// (0x0005c6a6) bg_button_pane_cp69_ParamLimits

0xd07a,	// (0x0005c6a6) bg_button_pane_cp69

0x7eec,	// (0x00057518) cell_afind_pane_g1_ParamLimits

0x7eec,	// (0x00057518) cell_afind_pane_g1

0x7ef9,	// (0x00057525) cell_afind_pane_t1_ParamLimits

0x7ef9,	// (0x00057525) cell_afind_pane_t1

0x17d7,	// (0x00050e03) bg_button_pane_cp72

0xd086,	// (0x0005c6b2) cell_afind_grid_control_pane_g1

0x5c8e,	// (0x000552ba) aid_image_placing_area_ParamLimits

0x5c8e,	// (0x000552ba) aid_image_placing_area

0x150e,	// (0x00050b3a) field_vitu_entry_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) field_vitu_entry_pane_g1

0x150e,	// (0x00050b3a) field_vitu_entry_pane_g2_ParamLimits

0x150e,	// (0x00050b3a) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x0005edf9) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x0005edf9) field_vitu_entry_pane_g

0xcc0d,	// (0x0005c239) cell_vitu_itu_pane_g1_ParamLimits

0xcbf0,	// (0x0005c21c) cell_vitu_itu_pane_t3_ParamLimits

0xcbf0,	// (0x0005c21c) cell_vitu_itu_pane_t3

0xce18,	// (0x0005c444) mp4_progress_pane_t1_ParamLimits

0xce2f,	// (0x0005c45b) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x0005ee92) mp4_progress_pane_t_ParamLimits

0xce46,	// (0x0005c472) mup_progress_pane_cp04_ParamLimits

0x7dee,	// (0x0005741a) main_myfav_hc_pane_t5_ParamLimits

0x7dee,	// (0x0005741a) main_myfav_hc_pane_t5

0xae86,	// (0x0005a4b2) aid_zoom_text_primary

0x37b0,	// (0x00052ddc) popup_adpt_find_window_ParamLimits

0xe9e5,	// (0x0005e011) main_cam_set_pane

0x78ec,	// (0x00056f18) cam4_zoom_pane_ParamLimits

0x78ec,	// (0x00056f18) cam4_zoom_pane

0x7f0b,	// (0x00057537) main_cam_set_pane_g1_ParamLimits

0x7f0b,	// (0x00057537) main_cam_set_pane_g1

0x7f19,	// (0x00057545) main_cam_set_pane_g2_ParamLimits

0x7f19,	// (0x00057545) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x0005ef53) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x0005ef53) main_cam_set_pane_g

0x7f38,	// (0x00057564) main_cam_set_pane_t1_ParamLimits

0x7f38,	// (0x00057564) main_cam_set_pane_t1

0x7f4a,	// (0x00057576) main_cset_listscroll_pane_ParamLimits

0x7f4a,	// (0x00057576) main_cset_listscroll_pane

0x7f6c,	// (0x00057598) main_cset_slider_pane_ParamLimits

0x7f6c,	// (0x00057598) main_cset_slider_pane

0xd097,	// (0x0005c6c3) main_cset_list_pane_ParamLimits

0xd097,	// (0x0005c6c3) main_cset_list_pane

0xd0a7,	// (0x0005c6d3) scroll_pane_cp028

0x7f90,	// (0x000575bc) aid_area_touch_slider

0x7fac,	// (0x000575d8) cset_slider_pane

0x7fcf,	// (0x000575fb) main_cset_slider_pane_g1

0x7fe4,	// (0x00057610) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x0005ef58) main_cset_slider_pane_g

0xd0e0,	// (0x0005c70c) main_cset_slider_pane_t1

0x80a0,	// (0x000576cc) main_cset_slider_pane_t2

0x80ba,	// (0x000576e6) main_cset_slider_pane_t3

0x80d4,	// (0x00057700) main_cset_slider_pane_t4

0x80ee,	// (0x0005771a) main_cset_slider_pane_t5

0x8108,	// (0x00057734) main_cset_slider_pane_t6

0x811d,	// (0x00057749) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x0005ef7d) main_cset_slider_pane_t

0x8221,	// (0x0005784d) cset_list_set_pane_ParamLimits

0x8221,	// (0x0005784d) cset_list_set_pane

0xd17a,	// (0x0005c7a6) aid_position_infowindow_above

0xd182,	// (0x0005c7ae) aid_position_infowindow_below

0x8232,	// (0x0005785e) cset_list_set_pane_g1_ParamLimits

0x8232,	// (0x0005785e) cset_list_set_pane_g1

0x823e,	// (0x0005786a) cset_list_set_pane_g3_ParamLimits

0x823e,	// (0x0005786a) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x0005ef9c) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x0005ef9c) cset_list_set_pane_g

0x824d,	// (0x00057879) cset_list_set_pane_t1_ParamLimits

0x824d,	// (0x00057879) cset_list_set_pane_t1

0x2225,	// (0x00051851) list_highlight_pane_cp021_ParamLimits

0x2225,	// (0x00051851) list_highlight_pane_cp021

0x2295,	// (0x000518c1) cset_slider_pane_g1

0x22a7,	// (0x000518d3) cset_slider_pane_g2

0x229e,	// (0x000518ca) cset_slider_pane_g3

0x0002,

0xf975,	// (0x0005efa1) cset_slider_pane_g

0xeec1,	// (0x0005e4ed) aid_area_touch_cam4_zoom

0xeec9,	// (0x0005e4f5) cam4_zoom_cont_pane

0xeed1,	// (0x0005e4fd) cam4_zoom_pane_g1

0xeed9,	// (0x0005e505) cam4_zoom_pane_g2

0x8262,	// (0x0005788e) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x0005efa8) cam4_zoom_pane_g

0xeee1,	// (0x0005e50d) cam4_zoom_cont_pane_g1

0xeeea,	// (0x0005e516) cam4_zoom_cont_pane_g2

0xeef3,	// (0x0005e51f) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x0005efaf) cam4_zoom_cont_pane_g

0x77ce,	// (0x00056dfa) call4_image_pane_ParamLimits

0x77ce,	// (0x00056dfa) call4_image_pane

0xce86,	// (0x0005c4b2) call4_windows_conf_pane_ParamLimits

0xceb9,	// (0x0005c4e5) popup_call4_audio_in_window_ParamLimits

0xceb9,	// (0x0005c4e5) popup_call4_audio_in_window

0x0e1e,	// (0x0005044a) bg_popup_call2_act_pane_cp02

0xcef7,	// (0x0005c523) call4_list_conf_pane

0x17cd,	// (0x00050df9) call4_image_pane_g1

0x17cd,	// (0x00050df9) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x0005ea1b) call4_image_pane_g

0xd18a,	// (0x0005c7b6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd18a,	// (0x0005c7b6) list_single_graphic_popup_conf4_pane

0x0e1e,	// (0x0005044a) list_highlight_pane_cp022

0xd197,	// (0x0005c7c3) list_single_graphic_popup_conf4_pane_g1

0x1ecb,	// (0x000514f7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x0005efb6) list_single_graphic_popup_conf4_pane_g

0xd19f,	// (0x0005c7cb) list_single_graphic_popup_conf4_pane_t1

0x4585,	// (0x00053bb1) popup_vtel_slider_window_ParamLimits

0x4585,	// (0x00053bb1) popup_vtel_slider_window

0x179f,	// (0x00050dcb) dialer2_ne_pane_t2_ParamLimits

0x179f,	// (0x00050dcb) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x0005ee97) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x0005ee97) dialer2_ne_pane_t

0xc463,	// (0x0005ba8f) bg_popup_sub_pane_cp010_ParamLimits

0xc463,	// (0x0005ba8f) bg_popup_sub_pane_cp010

0x826a,	// (0x00057896) popup_vtel_slider_window_g1_ParamLimits

0x826a,	// (0x00057896) popup_vtel_slider_window_g1

0x827d,	// (0x000578a9) popup_vtel_slider_window_g2_ParamLimits

0x827d,	// (0x000578a9) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x0005efbb) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x0005efbb) popup_vtel_slider_window_g

0x82d1,	// (0x000578fd) vtel_slider_pane_ParamLimits

0x82d1,	// (0x000578fd) vtel_slider_pane

0x82f3,	// (0x0005791f) vtel_slider_pane_g1_ParamLimits

0x82f3,	// (0x0005791f) vtel_slider_pane_g1

0x8307,	// (0x00057933) vtel_slider_pane_g2_ParamLimits

0x8307,	// (0x00057933) vtel_slider_pane_g2

0x831f,	// (0x0005794b) vtel_slider_pane_g3_ParamLimits

0x831f,	// (0x0005794b) vtel_slider_pane_g3

0x82f3,	// (0x0005791f) vtel_slider_pane_g4_ParamLimits

0x82f3,	// (0x0005791f) vtel_slider_pane_g4

0x8335,	// (0x00057961) vtel_slider_pane_g5_ParamLimits

0x8335,	// (0x00057961) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x0005efc4) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x0005efc4) vtel_slider_pane_g

0xe9e5,	// (0x0005e011) main_gallery2_pane

0x7ab1,	// (0x000570dd) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ab1,	// (0x000570dd) aid_size_row_itut2_dropdow_list

0x7b1b,	// (0x00057147) grid_vitu2_function_top_pane_ParamLimits

0x7b1b,	// (0x00057147) grid_vitu2_function_top_pane

0x7b63,	// (0x0005718f) popup_vitu2_dropdown_list_window_ParamLimits

0x7b63,	// (0x0005718f) popup_vitu2_dropdown_list_window

0x7b82,	// (0x000571ae) popup_vitu2_match_list_window

0x834b,	// (0x00057977) cell_vitu2_function_top_pane_ParamLimits

0x834b,	// (0x00057977) cell_vitu2_function_top_pane

0x8363,	// (0x0005798f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8363,	// (0x0005798f) cell_vitu2_function_top_pane_cp01

0x837f,	// (0x000579ab) cell_vitu2_function_top_wide_pane_ParamLimits

0x837f,	// (0x000579ab) cell_vitu2_function_top_wide_pane

0xe9e5,	// (0x0005e011) bg_button_pane_cp012

0x839c,	// (0x000579c8) cell_vitu2_function_top_pane_g1

0xeefc,	// (0x0005e528) bg_button_pane_cp013_ParamLimits

0xeefc,	// (0x0005e528) bg_button_pane_cp013

0x83b0,	// (0x000579dc) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x83b0,	// (0x000579dc) cell_vitu2_function_top_wide_pane_g1

0xe9e5,	// (0x0005e011) bg_popup_sub_pane_cp20

0x83c8,	// (0x000579f4) list_vitu2_match_list_pane

0xcf81,	// (0x0005c5ad) bg_popup_sub_pane_cp20_g1

0xcf89,	// (0x0005c5b5) bg_popup_sub_pane_cp20_g2

0x19eb,	// (0x00051017) bg_popup_sub_pane_cp20_g3

0xcf91,	// (0x0005c5bd) bg_popup_sub_pane_cp20_g4

0x19cb,	// (0x00050ff7) bg_popup_sub_pane_cp20_g5

0xd1b5,	// (0x0005c7e1) bg_popup_sub_pane_cp20_g6

0xcfa1,	// (0x0005c5cd) bg_popup_sub_pane_cp20_g7

0xcfa9,	// (0x0005c5d5) bg_popup_sub_pane_cp20_g8

0xcfb1,	// (0x0005c5dd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x0005efcf) bg_popup_sub_pane_cp20_g

0xef18,	// (0x0005e544) list_vitu2_match_list_item_pane_ParamLimits

0xef18,	// (0x0005e544) list_vitu2_match_list_item_pane

0xef2a,	// (0x0005e556) list_vitu2_match_list_item_pane_t1

0xaebf,	// (0x0005a4eb) bg_popup_sub_pane_cp21

0xef38,	// (0x0005e564) grid_vitu2_dropdown_list_pane

0x83e6,	// (0x00057a12) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x83e6,	// (0x00057a12) cell_vitu2_dropdown_list_char_pane

0x8407,	// (0x00057a33) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8407,	// (0x00057a33) cell_vitu2_dropdown_list_ctrl_pane

0xd1ca,	// (0x0005c7f6) cell_vitu2_dropdown_list_char_pane_g1

0xd1d3,	// (0x0005c7ff) cell_vitu2_dropdown_list_char_pane_g2

0xd1dc,	// (0x0005c808) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x0005efec) cell_vitu2_dropdown_list_char_pane_g

0x8431,	// (0x00057a5d) cell_vitu2_dropdown_list_char_pane_t1

0x843f,	// (0x00057a6b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x843f,	// (0x00057a6b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x844c,	// (0x00057a78) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x844c,	// (0x00057a78) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8459,	// (0x00057a85) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8459,	// (0x00057a85) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8466,	// (0x00057a92) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8466,	// (0x00057a92) cell_vitu2_dropdown_list_ctrl_pane_g4

0xedf0,	// (0x0005e41c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xedf0,	// (0x0005e41c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x0005eff3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x0005eff3) cell_vitu2_dropdown_list_ctrl_pane_g

0x8482,	// (0x00057aae) aid_size_cell_gallery2_ParamLimits

0x8482,	// (0x00057aae) aid_size_cell_gallery2

0x84a0,	// (0x00057acc) grid_gallery2_pane_ParamLimits

0x84a0,	// (0x00057acc) grid_gallery2_pane

0x727d,	// (0x000568a9) scroll_pane_cp029_ParamLimits

0x727d,	// (0x000568a9) scroll_pane_cp029

0x84b4,	// (0x00057ae0) cell_gallery2_pane_ParamLimits

0x84b4,	// (0x00057ae0) cell_gallery2_pane

0xd1e5,	// (0x0005c811) cell_gallery2_pane_g2

0x850d,	// (0x00057b39) cell_gallery2_pane_g3

0xd1ed,	// (0x0005c819) cell_gallery2_pane_g4

0xd1f5,	// (0x0005c821) cell_gallery2_pane_g5

0x1751,	// (0x00050d7d) grid_highlight_pane_cp10

0x7b82,	// (0x000571ae) popup_vitu2_match_list_window_ParamLimits

0x7b93,	// (0x000571bf) popup_vitu2_query_window_ParamLimits

0x7b93,	// (0x000571bf) popup_vitu2_query_window

0xaebf,	// (0x0005a4eb) bg_vitu2_candi_button_pane

0xd1ca,	// (0x0005c7f6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1d3,	// (0x0005c7ff) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1dc,	// (0x0005c808) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8515,	// (0x00057b41) bg_button_pane_cp015

0x8525,	// (0x00057b51) bg_button_pane_cp016

0x8537,	// (0x00057b63) bg_button_pane_cp017

0x244d,	// (0x00051a79) bg_popup_sub_pane_cp22

0xd1fd,	// (0x0005c829) popup_vitu2_query_window_g1

0x8578,	// (0x00057ba4) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x0005effe) popup_vitu2_query_window_g

0x8593,	// (0x00057bbf) popup_vitu2_query_window_t1_ParamLimits

0x8593,	// (0x00057bbf) popup_vitu2_query_window_t1

0x85c6,	// (0x00057bf2) popup_vitu2_query_window_t2_ParamLimits

0x85c6,	// (0x00057bf2) popup_vitu2_query_window_t2

0x85d8,	// (0x00057c04) popup_vitu2_query_window_t3_ParamLimits

0x85d8,	// (0x00057c04) popup_vitu2_query_window_t3

0x8600,	// (0x00057c2c) popup_vitu2_query_window_t4_ParamLimits

0x8600,	// (0x00057c2c) popup_vitu2_query_window_t4

0x861d,	// (0x00057c49) popup_vitu2_query_window_t5_ParamLimits

0x861d,	// (0x00057c49) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0005f005) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0005f005) popup_vitu2_query_window_t

0xd08f,	// (0x0005c6bb) main_cset_text_pane

0x7f90,	// (0x000575bc) aid_area_touch_slider_ParamLimits

0x7fac,	// (0x000575d8) cset_slider_pane_ParamLimits

0x7fcf,	// (0x000575fb) main_cset_slider_pane_g1_ParamLimits

0x7fe4,	// (0x00057610) main_cset_slider_pane_g2_ParamLimits

0xd0b0,	// (0x0005c6dc) main_cset_slider_pane_g3_ParamLimits

0xd0b0,	// (0x0005c6dc) main_cset_slider_pane_g3

0x7ff9,	// (0x00057625) main_cset_slider_pane_g4_ParamLimits

0x7ff9,	// (0x00057625) main_cset_slider_pane_g4

0x8008,	// (0x00057634) main_cset_slider_pane_g5_ParamLimits

0x8008,	// (0x00057634) main_cset_slider_pane_g5

0x8014,	// (0x00057640) main_cset_slider_pane_g6_ParamLimits

0x8014,	// (0x00057640) main_cset_slider_pane_g6

0xf92c,	// (0x0005ef58) main_cset_slider_pane_g_ParamLimits

0xd0e0,	// (0x0005c70c) main_cset_slider_pane_t1_ParamLimits

0x80a0,	// (0x000576cc) main_cset_slider_pane_t2_ParamLimits

0x80ba,	// (0x000576e6) main_cset_slider_pane_t3_ParamLimits

0x80d4,	// (0x00057700) main_cset_slider_pane_t4_ParamLimits

0x80ee,	// (0x0005771a) main_cset_slider_pane_t5_ParamLimits

0x8108,	// (0x00057734) main_cset_slider_pane_t6_ParamLimits

0x811d,	// (0x00057749) main_cset_slider_pane_t7_ParamLimits

0x8147,	// (0x00057773) main_cset_slider_pane_t8_ParamLimits

0x8147,	// (0x00057773) main_cset_slider_pane_t8

0x816f,	// (0x0005779b) main_cset_slider_pane_t9_ParamLimits

0x816f,	// (0x0005779b) main_cset_slider_pane_t9

0x8197,	// (0x000577c3) main_cset_slider_pane_t10_ParamLimits

0x8197,	// (0x000577c3) main_cset_slider_pane_t10

0x81bf,	// (0x000577eb) main_cset_slider_pane_t11_ParamLimits

0x81bf,	// (0x000577eb) main_cset_slider_pane_t11

0x81e7,	// (0x00057813) main_cset_slider_pane_t12_ParamLimits

0x81e7,	// (0x00057813) main_cset_slider_pane_t12

0x8204,	// (0x00057830) main_cset_slider_pane_t13_ParamLimits

0x8204,	// (0x00057830) main_cset_slider_pane_t13

0xf951,	// (0x0005ef7d) main_cset_slider_pane_t_ParamLimits

0x0e1e,	// (0x0005044a) bg_popup_sub_pane_cp011

0xd209,	// (0x0005c835) main_cset_text_pane_g1

0xd211,	// (0x0005c83d) main_cset_text_pane_t1

0xd21f,	// (0x0005c84b) main_cset_text_pane_t2

0xd22d,	// (0x0005c859) main_cset_text_pane_t3

0xd23b,	// (0x0005c867) main_cset_text_pane_t4

0xd249,	// (0x0005c875) main_cset_text_pane_t5

0xd257,	// (0x0005c883) main_cset_text_pane_t6

0xd265,	// (0x0005c891) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x0005f014) main_cset_text_pane_t

0xaebf,	// (0x0005a4eb) main_cam4_burst_pane

0xaebf,	// (0x0005a4eb) main_cam5_pane

0x7eda,	// (0x00057506) bg_button_pane_cp019

0x7ee3,	// (0x0005750f) bg_button_pane_cp020

0xd0bc,	// (0x0005c6e8) main_cset_slider_pane_g7_ParamLimits

0xd0bc,	// (0x0005c6e8) main_cset_slider_pane_g7

0xd0c8,	// (0x0005c6f4) main_cset_slider_pane_g8_ParamLimits

0xd0c8,	// (0x0005c6f4) main_cset_slider_pane_g8

0x8028,	// (0x00057654) main_cset_slider_pane_g9_ParamLimits

0x8028,	// (0x00057654) main_cset_slider_pane_g9

0x8034,	// (0x00057660) main_cset_slider_pane_g10_ParamLimits

0x8034,	// (0x00057660) main_cset_slider_pane_g10

0x8040,	// (0x0005766c) main_cset_slider_pane_g11_ParamLimits

0x8040,	// (0x0005766c) main_cset_slider_pane_g11

0x804c,	// (0x00057678) main_cset_slider_pane_g12_ParamLimits

0x804c,	// (0x00057678) main_cset_slider_pane_g12

0x8058,	// (0x00057684) main_cset_slider_pane_g13_ParamLimits

0x8058,	// (0x00057684) main_cset_slider_pane_g13

0x8064,	// (0x00057690) main_cset_slider_pane_g14_ParamLimits

0x8064,	// (0x00057690) main_cset_slider_pane_g14

0x8070,	// (0x0005769c) main_cset_slider_pane_g15_ParamLimits

0x8070,	// (0x0005769c) main_cset_slider_pane_g15

0xd108,	// (0x0005c734) main_cset_slider_pane_t14_ParamLimits

0xd108,	// (0x0005c734) main_cset_slider_pane_t14

0xd141,	// (0x0005c76d) main_cset_slider_pane_t15_ParamLimits

0xd141,	// (0x0005c76d) main_cset_slider_pane_t15

0x8690,	// (0x00057cbc) aid_cam4_burst_size_cell_ParamLimits

0x8690,	// (0x00057cbc) aid_cam4_burst_size_cell

0x86b0,	// (0x00057cdc) grid_cam4_burst_pane_ParamLimits

0x86b0,	// (0x00057cdc) grid_cam4_burst_pane

0x86d6,	// (0x00057d02) linegrid_cam4_burst_pane_ParamLimits

0x86d6,	// (0x00057d02) linegrid_cam4_burst_pane

0x86f8,	// (0x00057d24) scroll_pane_cp30_ParamLimits

0x86f8,	// (0x00057d24) scroll_pane_cp30

0x8704,	// (0x00057d30) cell_cam4_burst_pane_ParamLimits

0x8704,	// (0x00057d30) cell_cam4_burst_pane

0xd273,	// (0x0005c89f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd273,	// (0x0005c89f) linegrid_cam4_burst_pane_g1

0x874b,	// (0x00057d77) linegrid_cam4_burst_pane_g2_ParamLimits

0x874b,	// (0x00057d77) linegrid_cam4_burst_pane_g2

0xd280,	// (0x0005c8ac) linegrid_cam4_burst_pane_g3_ParamLimits

0xd280,	// (0x0005c8ac) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x0005f023) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x0005f023) linegrid_cam4_burst_pane_g

0x875c,	// (0x00057d88) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x875c,	// (0x00057d88) linegrid_cam4_burst_pane_g3_copy1

0xd28d,	// (0x0005c8b9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd28d,	// (0x0005c8b9) linegrid_cam4_burst_pane_g4

0x8776,	// (0x00057da2) linegrid_cam4_burst_pane_g5_ParamLimits

0x8776,	// (0x00057da2) linegrid_cam4_burst_pane_g5

0x8787,	// (0x00057db3) linegrid_cam4_burst_pane_g6_ParamLimits

0x8787,	// (0x00057db3) linegrid_cam4_burst_pane_g6

0xd29a,	// (0x0005c8c6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd29a,	// (0x0005c8c6) linegrid_cam4_burst_pane_g7

0x8798,	// (0x00057dc4) cell_cam4_burst_pane_g1

0xd2b3,	// (0x0005c8df) main_cam5_pane_t1_ParamLimits

0xd2b3,	// (0x0005c8df) main_cam5_pane_t1

0xd2c5,	// (0x0005c8f1) main_cam5_pane_t2_ParamLimits

0xd2c5,	// (0x0005c8f1) main_cam5_pane_t2

0xd2d7,	// (0x0005c903) main_cam5_pane_t3_ParamLimits

0xd2d7,	// (0x0005c903) main_cam5_pane_t3

0xd2e9,	// (0x0005c915) main_cam5_pane_t4_ParamLimits

0xd2e9,	// (0x0005c915) main_cam5_pane_t4

0xd2ff,	// (0x0005c92b) main_cam5_pane_t5_ParamLimits

0xd2ff,	// (0x0005c92b) main_cam5_pane_t5

0xd311,	// (0x0005c93d) main_cam5_pane_t6_ParamLimits

0xd311,	// (0x0005c93d) main_cam5_pane_t6

0xd323,	// (0x0005c94f) main_cam5_pane_t7_ParamLimits

0xd323,	// (0x0005c94f) main_cam5_pane_t7

0xd335,	// (0x0005c961) main_cam5_pane_t8_ParamLimits

0xd335,	// (0x0005c961) main_cam5_pane_t8

0xd351,	// (0x0005c97d) main_cam5_pane_t9_ParamLimits

0xd351,	// (0x0005c97d) main_cam5_pane_t9

0xd363,	// (0x0005c98f) main_cam5_pane_t10_ParamLimits

0xd363,	// (0x0005c98f) main_cam5_pane_t10

0xd375,	// (0x0005c9a1) main_cam5_pane_t11_ParamLimits

0xd375,	// (0x0005c9a1) main_cam5_pane_t11

0xd387,	// (0x0005c9b3) main_cam5_pane_t12_ParamLimits

0xd387,	// (0x0005c9b3) main_cam5_pane_t12

0xd39c,	// (0x0005c9c8) main_cam5_pane_t13_ParamLimits

0xd39c,	// (0x0005c9c8) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x0005f02f) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x0005f02f) main_cam5_pane_t

0x380e,	// (0x00052e3a) popup_scut_keymap_window_ParamLimits

0x380e,	// (0x00052e3a) popup_scut_keymap_window

0x87ad,	// (0x00057dd9) aid_size_cell_brow_shortcut

0x1751,	// (0x00050d7d) bg_popup_window_pane_cp010

0x87b9,	// (0x00057de5) grid_scut_pane

0x87c3,	// (0x00057def) cell_scut_pane_ParamLimits

0x87c3,	// (0x00057def) cell_scut_pane

0x87d8,	// (0x00057e04) cell_scut_pane_g1

0xd3b9,	// (0x0005c9e5) cell_scut_pane_t1

0xd3c8,	// (0x0005c9f4) cell_scut_pane_t2

0x87e1,	// (0x00057e0d) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x0005f04a) cell_scut_pane_t

0x6a68,	// (0x00056094) main_mup3_pane_g8_ParamLimits

0x6a68,	// (0x00056094) main_mup3_pane_g8

0x7ac5,	// (0x000570f1) area_vitu2_query_pane_ParamLimits

0x7ac5,	// (0x000570f1) area_vitu2_query_pane

0x8549,	// (0x00057b75) input_focus_pane_cp08

0xd3d7,	// (0x0005ca03) area_vitu2_query_pane_g1

0x87ef,	// (0x00057e1b) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x0005f051) area_vitu2_query_pane_g

0x87fe,	// (0x00057e2a) area_vitu2_query_pane_t1_ParamLimits

0x87fe,	// (0x00057e2a) area_vitu2_query_pane_t1

0x8810,	// (0x00057e3c) area_vitu2_query_pane_t2_ParamLimits

0x8810,	// (0x00057e3c) area_vitu2_query_pane_t2

0x8822,	// (0x00057e4e) area_vitu2_query_pane_t3_ParamLimits

0x8822,	// (0x00057e4e) area_vitu2_query_pane_t3

0xd3e3,	// (0x0005ca0f) area_vitu2_query_pane_t4_ParamLimits

0xd3e3,	// (0x0005ca0f) area_vitu2_query_pane_t4

0xd40b,	// (0x0005ca37) area_vitu2_query_pane_t5_ParamLimits

0xd40b,	// (0x0005ca37) area_vitu2_query_pane_t5

0xd433,	// (0x0005ca5f) area_vitu2_query_pane_t6_ParamLimits

0xd433,	// (0x0005ca5f) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x0005f056) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x0005f056) area_vitu2_query_pane_t

0x884a,	// (0x00057e76) bg_button_pane_cp018

0x8857,	// (0x00057e83) bg_button_pane_cp021

0x8863,	// (0x00057e8f) bg_button_pane_cp022

0x8872,	// (0x00057e9e) input_focus_pane_cp09

0x55cf,	// (0x00054bfb) aid_size_touch_mv_arrow_left

0x2009,	// (0x00051635) aid_size_touch_mv_arrow_right

0x8088,	// (0x000576b4) main_cset_slider_pane_g16_ParamLimits

0x8088,	// (0x000576b4) main_cset_slider_pane_g16

0x8094,	// (0x000576c0) main_cset_slider_pane_g17_ParamLimits

0x8094,	// (0x000576c0) main_cset_slider_pane_g17

0x8798,	// (0x00057dc4) cell_cam4_burst_pane_g1_ParamLimits

0x0e1e,	// (0x0005044a) compa_mode_pane

0x828d,	// (0x000578b9) popup_vtel_slider_window_g3_ParamLimits

0x828d,	// (0x000578b9) popup_vtel_slider_window_g3

0x82a4,	// (0x000578d0) popup_vtel_slider_window_g4_ParamLimits

0x82a4,	// (0x000578d0) popup_vtel_slider_window_g4

0x82bb,	// (0x000578e7) popup_vtel_slider_window_t1_ParamLimits

0x82bb,	// (0x000578e7) popup_vtel_slider_window_t1

0xaebf,	// (0x0005a4eb) main_cl_pane

0xea0b,	// (0x0005e037) popup_imed_adjust2_window_ParamLimits

0x244d,	// (0x00051a79) bg_tb_trans_pane_cp05_ParamLimits

0xcb25,	// (0x0005c151) popup_imed_adjust2_window_g1_ParamLimits

0xcb34,	// (0x0005c160) popup_imed_adjust2_window_g2_ParamLimits

0xcb34,	// (0x0005c160) popup_imed_adjust2_window_g2

0xcb40,	// (0x0005c16c) popup_imed_adjust2_window_g3_ParamLimits

0xcb40,	// (0x0005c16c) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x0005edbd) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x0005edbd) popup_imed_adjust2_window_g

0xcb4c,	// (0x0005c178) popup_imed_adjust2_window_t1_ParamLimits

0xcb64,	// (0x0005c190) slider_imed_adjust_pane_ParamLimits

0xcb78,	// (0x0005c1a4) slider_imed_adjust_pane_g1_ParamLimits

0xcb88,	// (0x0005c1b4) slider_imed_adjust_pane_g2_ParamLimits

0xcb98,	// (0x0005c1c4) slider_imed_adjust_pane_g3_ParamLimits

0xcba9,	// (0x0005c1d5) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0005edc4) slider_imed_adjust_pane_g_ParamLimits

0x789b,	// (0x00056ec7) aid_touch_area_cam4_ParamLimits

0x789b,	// (0x00056ec7) aid_touch_area_cam4

0xedd6,	// (0x0005e402) battery_pane_cp01

0x7933,	// (0x00056f5f) main_camera4_pane_g6_ParamLimits

0x7933,	// (0x00056f5f) main_camera4_pane_g6

0x7954,	// (0x00056f80) main_camera4_pane_t2_ParamLimits

0x7954,	// (0x00056f80) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x0005eecb) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x0005eecb) main_camera4_pane_t

0x7982,	// (0x00056fae) aid_touch_area_vid4_ParamLimits

0x7982,	// (0x00056fae) aid_touch_area_vid4

0x79c4,	// (0x00056ff0) main_video4_pane_g5_ParamLimits

0x79c4,	// (0x00056ff0) main_video4_pane_g5

0x79e5,	// (0x00057011) vid4_progress_pane_ParamLimits

0x79e5,	// (0x00057011) vid4_progress_pane

0xd0d4,	// (0x0005c700) main_cset_slider_pane_g18_ParamLimits

0xd0d4,	// (0x0005c700) main_cset_slider_pane_g18

0xd2a7,	// (0x0005c8d3) cell_cam4_burst_pane_g2_ParamLimits

0xd2a7,	// (0x0005c8d3) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x0005f02a) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x0005f02a) cell_cam4_burst_pane_g

0x1584,	// (0x00050bb0) bg_cl_pane_ParamLimits

0x1584,	// (0x00050bb0) bg_cl_pane

0x8881,	// (0x00057ead) cl_header_pane_ParamLimits

0x8881,	// (0x00057ead) cl_header_pane

0x8895,	// (0x00057ec1) cl_listscroll_pane_ParamLimits

0x8895,	// (0x00057ec1) cl_listscroll_pane

0xd47f,	// (0x0005caab) bg_cl_pane_g1

0xd487,	// (0x0005cab3) bg_cl_pane_g2

0xd48f,	// (0x0005cabb) bg_cl_pane_g3

0xd497,	// (0x0005cac3) bg_cl_pane_g4

0xd49f,	// (0x0005cacb) bg_cl_pane_g5

0xd4a7,	// (0x0005cad3) bg_cl_pane_g6

0xd4af,	// (0x0005cadb) bg_cl_pane_g7

0xd4b7,	// (0x0005cae3) bg_cl_pane_g8

0xd4bf,	// (0x0005caeb) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x0005f065) bg_cl_pane_g

0x88a5,	// (0x00057ed1) aid_height_cl_leading_ParamLimits

0x88a5,	// (0x00057ed1) aid_height_cl_leading

0x88b1,	// (0x00057edd) aid_height_cl_text_ParamLimits

0x88b1,	// (0x00057edd) aid_height_cl_text

0x2225,	// (0x00051851) bg_cl_header_pane_ParamLimits

0x2225,	// (0x00051851) bg_cl_header_pane

0x88d0,	// (0x00057efc) cl_header_pane_g1_ParamLimits

0x88d0,	// (0x00057efc) cl_header_pane_g1

0x88e6,	// (0x00057f12) cl_header_pane_t1_ParamLimits

0x88e6,	// (0x00057f12) cl_header_pane_t1

0xd4c7,	// (0x0005caf3) cl_list_pane

0xd4d0,	// (0x0005cafc) hc_scroll_pane_cp01

0x19cb,	// (0x00050ff7) bg_cl_header_pane_g1

0xcf81,	// (0x0005c5ad) bg_cl_header_pane_g2

0x19eb,	// (0x00051017) bg_cl_header_pane_g3

0xcf91,	// (0x0005c5bd) bg_cl_header_pane_g4

0xcf89,	// (0x0005c5b5) bg_cl_header_pane_g5

0xd1b5,	// (0x0005c7e1) bg_cl_header_pane_g6

0xcfa9,	// (0x0005c5d5) bg_cl_header_pane_g7

0xcfb1,	// (0x0005c5dd) bg_cl_header_pane_g8

0xcfa1,	// (0x0005c5cd) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x0005f078) bg_cl_header_pane_g

0x88ff,	// (0x00057f2b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x88ff,	// (0x00057f2b) hc_cl_list_double_graphic_heading_pane

0x890f,	// (0x00057f3b) hc_cl_list_single_graphic_pane_ParamLimits

0x890f,	// (0x00057f3b) hc_cl_list_single_graphic_pane

0x8922,	// (0x00057f4e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8922,	// (0x00057f4e) hc_cl_list_single_graphic_pane_g1

0x892e,	// (0x00057f5a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x892e,	// (0x00057f5a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x0005f08b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x0005f08b) hc_cl_list_single_graphic_pane_g

0x8942,	// (0x00057f6e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8942,	// (0x00057f6e) hc_cl_list_single_graphic_pane_t1

0x8922,	// (0x00057f4e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8922,	// (0x00057f4e) hc_cl_list_double_graphic_heading_pane_g1

0x8957,	// (0x00057f83) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8957,	// (0x00057f83) hc_cl_list_double_graphic_heading_pane_g2

0x896b,	// (0x00057f97) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x896b,	// (0x00057f97) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x0005f090) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x0005f090) hc_cl_list_double_graphic_heading_pane_g

0x897f,	// (0x00057fab) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x897f,	// (0x00057fab) hc_cl_list_double_graphic_heading_pane_t1

0x8994,	// (0x00057fc0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8994,	// (0x00057fc0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x0005f097) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x0005f097) hc_cl_list_double_graphic_heading_pane_t

0xef40,	// (0x0005e56c) vid4_progress_pane_g1

0xef4f,	// (0x0005e57b) vid4_progress_pane_g2

0xef5e,	// (0x0005e58a) vid4_progress_pane_g3

0xef6d,	// (0x0005e599) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x0005f09c) vid4_progress_pane_g

0xef85,	// (0x0005e5b1) vid4_progress_pane_t1

0xef9b,	// (0x0005e5c7) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x0005f0a7) vid4_progress_pane_t

0xefc5,	// (0x0005e5f1) wait_bar_pane_cp07

0xc471,	// (0x0005ba9d) blid_firmament_pane_ParamLimits

0xc4b2,	// (0x0005bade) popup_blid_sat_info2_window_g1

0xc4d6,	// (0x0005bb02) popup_blid_sat_info2_window_t3

0xc4e4,	// (0x0005bb10) popup_blid_sat_info2_window_t4

0xc4f2,	// (0x0005bb1e) popup_blid_sat_info2_window_t5

0xc500,	// (0x0005bb2c) popup_blid_sat_info2_window_t6

0xc510,	// (0x0005bb3c) popup_blid_sat_info2_window_t7

0xc51e,	// (0x0005bb4a) popup_blid_sat_info2_window_t8

0xc52c,	// (0x0005bb58) popup_blid_sat_info2_window_t9

0xc53a,	// (0x0005bb66) popup_blid_sat_info2_window_t10

0xc5d6,	// (0x0005bc02) aid_firma_cardinal_ParamLimits

0xc5ea,	// (0x0005bc16) blid_firmament_pane_t1_ParamLimits

0xc601,	// (0x0005bc2d) blid_firmament_pane_t2_ParamLimits

0xc618,	// (0x0005bc44) blid_firmament_pane_t3_ParamLimits

0xc62f,	// (0x0005bc5b) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x0005ecb6) blid_firmament_pane_t_ParamLimits

0xc646,	// (0x0005bc72) blid_sat_info_pane_ParamLimits

0xe9e5,	// (0x0005e011) main_cam_set_pane_ParamLimits

0x71fe,	// (0x0005682a) aid_size_cell_colour_35_ParamLimits

0x721e,	// (0x0005684a) aid_size_cell_colour_112_ParamLimits

0x723e,	// (0x0005686a) aid_size_cell_effect_ParamLimits

0x244d,	// (0x00051a79) bg_tb_trans_pane_cp02_ParamLimits

0x1c1d,	// (0x00051249) heading_imed_pane_ParamLimits

0x725e,	// (0x0005688a) listscroll_imed_pane_ParamLimits

0xb869,	// (0x0005ae95) popup_call2_audio_first_window_g5_ParamLimits

0xb869,	// (0x0005ae95) popup_call2_audio_first_window_g5

0x7586,	// (0x00056bb2) aid_size_touch_image3_arrow_left_ParamLimits

0x7586,	// (0x00056bb2) aid_size_touch_image3_arrow_left

0x75a6,	// (0x00056bd2) aid_size_touch_image3_arrow_right_ParamLimits

0x75a6,	// (0x00056bd2) aid_size_touch_image3_arrow_right

0xefb0,	// (0x0005e5dc) vid4_progress_pane_t3

0x73e7,	// (0x00056a13) main_hwr_training_symbol_option_pane_ParamLimits

0x73e7,	// (0x00056a13) main_hwr_training_symbol_option_pane

0xcd52,	// (0x0005c37e) popup_hwr_training_preview_window_ParamLimits

0xcd52,	// (0x0005c37e) popup_hwr_training_preview_window

0x7403,	// (0x00056a2f) hwr_training_navi_pane_g5_ParamLimits

0x7403,	// (0x00056a2f) hwr_training_navi_pane_g5

0xcf6f,	// (0x0005c59b) popup_char_count_window

0xe9e5,	// (0x0005e011) bg_popup_sub_pane_cp20_ParamLimits

0x83c8,	// (0x000579f4) list_vitu2_match_list_pane_ParamLimits

0x83d7,	// (0x00057a03) vitu2_page_scroll_pane_ParamLimits

0x83d7,	// (0x00057a03) vitu2_page_scroll_pane

0xd504,	// (0x0005cb30) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd504,	// (0x0005cb30) list_single_hwr_training_symbol_option_pane

0xd517,	// (0x0005cb43) list_single_hwr_training_symbol_option_pane_g1

0xd51f,	// (0x0005cb4b) list_single_hwr_training_symbol_option_pane_t1

0xd52d,	// (0x0005cb59) bg_button_pane_cp023

0xd536,	// (0x0005cb62) bg_button_pane_cp024

0x89c6,	// (0x00057ff2) vitu2_page_scroll_pane_g1

0x89ce,	// (0x00057ffa) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x0005f0ae) vitu2_page_scroll_pane_g

0x89d6,	// (0x00058002) vitu2_page_scroll_pane_t1

0xc675,	// (0x0005bca1) popup_char_count_window_g1

0xd569,	// (0x0005cb95) popup_char_count_window_g2

0xd572,	// (0x0005cb9e) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x0005f0b3) popup_char_count_window_g

0xd57b,	// (0x0005cba7) popup_char_count_window_t1

0xaebf,	// (0x0005a4eb) main_vded2_pane

0xcb13,	// (0x0005c13f) aid_size_cell_imed_line

0xcb1d,	// (0x0005c149) grid_imed_line_width_pane

0xee79,	// (0x0005e4a5) vid4_indicators_pane_g4

0xd589,	// (0x0005cbb5) cell_imed_line_width_pane_ParamLimits

0xd589,	// (0x0005cbb5) cell_imed_line_width_pane

0xd59b,	// (0x0005cbc7) cell_imed_line_width_pane_g1

0xd5a4,	// (0x0005cbd0) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x0005f0ba) cell_imed_line_width_pane_g

0x89e5,	// (0x00058011) main_vded2_pane_g1_ParamLimits

0x89e5,	// (0x00058011) main_vded2_pane_g1

0x89fb,	// (0x00058027) main_vded2_pane_g2_ParamLimits

0x89fb,	// (0x00058027) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x0005f0bf) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x0005f0bf) main_vded2_pane_g

0x8a0b,	// (0x00058037) vded2_slider_pane_ParamLimits

0x8a0b,	// (0x00058037) vded2_slider_pane

0x8a1e,	// (0x0005804a) aid_size_touch_vded2_end

0x8a26,	// (0x00058052) aid_size_touch_vded2_playhead

0x8a2e,	// (0x0005805a) aid_size_touch_vded2_start

0x8a36,	// (0x00058062) vded2_slider_bg_pane

0x8a3f,	// (0x0005806b) vded2_slider_pane_g1

0x8a48,	// (0x00058074) vded2_slider_pane_g2

0x8a50,	// (0x0005807c) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x0005f0c4) vded2_slider_pane_g

0x8a59,	// (0x00058085) vded2_slider_bg_pane_g1

0x8a62,	// (0x0005808e) vded2_slider_bg_pane_g2

0x8a6b,	// (0x00058097) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x0005f0cb) vded2_slider_bg_pane_g

0x593d,	// (0x00054f69) aid_postcard_touch_down_pane_ParamLimits

0x593d,	// (0x00054f69) aid_postcard_touch_down_pane

0x594f,	// (0x00054f7b) aid_postcard_touch_up_pane_ParamLimits

0x594f,	// (0x00054f7b) aid_postcard_touch_up_pane

0xaebf,	// (0x0005a4eb) main_blid2_pane

0xe9f3,	// (0x0005e01f) popup_blid2_search_window

0x0e1e,	// (0x0005044a) blid2_gps_pane

0x0e1e,	// (0x0005044a) blid2_navig_pane

0x0e1e,	// (0x0005044a) blid2_search_pane

0x0e1e,	// (0x0005044a) blid2_tripm_pane

0x8a74,	// (0x000580a0) blid2_search_pane_g1_ParamLimits

0x8a74,	// (0x000580a0) blid2_search_pane_g1

0x8a88,	// (0x000580b4) blid2_search_pane_t1_ParamLimits

0x8a88,	// (0x000580b4) blid2_search_pane_t1

0x8a9a,	// (0x000580c6) aid_size_cell_blid2_gps_ParamLimits

0x8a9a,	// (0x000580c6) aid_size_cell_blid2_gps

0x8ab2,	// (0x000580de) blid2_gps_pane_g1_ParamLimits

0x8ab2,	// (0x000580de) blid2_gps_pane_g1

0x8ac6,	// (0x000580f2) grid_blid2_satellite_pane_ParamLimits

0x8ac6,	// (0x000580f2) grid_blid2_satellite_pane

0x8ada,	// (0x00058106) blid2_navig_pane_g1_ParamLimits

0x8ada,	// (0x00058106) blid2_navig_pane_g1

0x8ae6,	// (0x00058112) blid2_navig_pane_t1_ParamLimits

0x8ae6,	// (0x00058112) blid2_navig_pane_t1

0x8aff,	// (0x0005812b) blid2_navig_pane_t2_ParamLimits

0x8aff,	// (0x0005812b) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x0005f0d2) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x0005f0d2) blid2_navig_pane_t

0x8b18,	// (0x00058144) blid2_navig_ring_pane_ParamLimits

0x8b18,	// (0x00058144) blid2_navig_ring_pane

0x8b2d,	// (0x00058159) blid2_speed_pane_ParamLimits

0x8b2d,	// (0x00058159) blid2_speed_pane

0x8b39,	// (0x00058165) blid2_tripm_pane_g1_ParamLimits

0x8b39,	// (0x00058165) blid2_tripm_pane_g1

0x8b4e,	// (0x0005817a) blid2_tripm_pane_g2_ParamLimits

0x8b4e,	// (0x0005817a) blid2_tripm_pane_g2

0x8b62,	// (0x0005818e) blid2_tripm_pane_g3_ParamLimits

0x8b62,	// (0x0005818e) blid2_tripm_pane_g3

0x8b76,	// (0x000581a2) blid2_tripm_pane_g4_ParamLimits

0x8b76,	// (0x000581a2) blid2_tripm_pane_g4

0x8b8a,	// (0x000581b6) blid2_tripm_pane_g5_ParamLimits

0x8b8a,	// (0x000581b6) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x0005f0d7) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x0005f0d7) blid2_tripm_pane_g

0x8bac,	// (0x000581d8) blid2_tripm_pane_t1_ParamLimits

0x8bac,	// (0x000581d8) blid2_tripm_pane_t1

0x8bc3,	// (0x000581ef) blid2_tripm_pane_t2_ParamLimits

0x8bc3,	// (0x000581ef) blid2_tripm_pane_t2

0x8bda,	// (0x00058206) blid2_tripm_pane_t3_ParamLimits

0x8bda,	// (0x00058206) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x0005f0e4) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x0005f0e4) blid2_tripm_pane_t

0x8c1d,	// (0x00058249) cell_blid2_satellite_pane_ParamLimits

0x8c1d,	// (0x00058249) cell_blid2_satellite_pane

0x8c35,	// (0x00058261) cell_blid2_satellite_pane_g1

0xd5ac,	// (0x0005cbd8) cell_blid2_satellite_pane_t1

0x17cd,	// (0x00050df9) blid2_speed_pane_g1

0xd5ba,	// (0x0005cbe6) blid2_speed_pane_t1

0xd5c8,	// (0x0005cbf4) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x0005f0ed) blid2_speed_pane_t

0x17cd,	// (0x00050df9) blid2_navig_ring_pane_g1

0x8c3e,	// (0x0005826a) blid2_navig_ring_pane_g2

0x8c46,	// (0x00058272) blid2_navig_ring_pane_g3

0x8c4e,	// (0x0005827a) blid2_navig_ring_pane_g4

0x8c56,	// (0x00058282) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x0005f0f2) blid2_navig_ring_pane_g

0x0e1e,	// (0x0005044a) bg_popup_window_pane_cp011

0xd5d6,	// (0x0005cc02) popup_blid2_search_window_g1

0xd5de,	// (0x0005cc0a) popup_blid2_search_window_t1

0xd5ec,	// (0x0005cc18) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x0005f0fd) popup_blid2_search_window_t

0x18da,	// (0x00050f06) main_browser_pane_g1

0x1584,	// (0x00050bb0) main_browser_pane_ParamLimits

0xe9e5,	// (0x0005e011) bg_button_pane_cp011_ParamLimits

0x7cb3,	// (0x000572df) cell_vitu2_function_pane_g1_ParamLimits

0x244d,	// (0x00051a79) bg_popup_sub_pane_cp22_ParamLimits

0x8549,	// (0x00057b75) input_focus_pane_cp08_ParamLimits

0x8560,	// (0x00057b8c) popup_vitu2_query_button_pane_ParamLimits

0x8560,	// (0x00057b8c) popup_vitu2_query_button_pane

0x8570,	// (0x00057b9c) popup_vitu2_query_input_button_pane

0xd1fd,	// (0x0005c829) popup_vitu2_query_window_g1_ParamLimits

0x8578,	// (0x00057ba4) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x0005effe) popup_vitu2_query_window_g_ParamLimits

0x0e1e,	// (0x0005044a) bg_button_pane_cp026

0x8c5e,	// (0x0005828a) popup_vitu2_query_input_button_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp025

0xd5fa,	// (0x0005cc26) popup_vitu2_query_button_pane_t1

0x6784,	// (0x00055db0) main_mp3_pane_t6

0x6792,	// (0x00055dbe) popup_slider_window_cp01

0xedfe,	// (0x0005e42a) cam4_battery_pane

0xedfe,	// (0x0005e42a) cam4_battery_pane_cp02

0xedfe,	// (0x0005e42a) cam4_battery_pane_cp01

0xedfe,	// (0x0005e42a) cam4_battery_pane_cp03

0xc3d8,	// (0x0005ba04) cam4_battery_pane_g1

0x17cd,	// (0x00050df9) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x0005f102) cam4_battery_pane_g

0xc548,	// (0x0005bb74) popup_blid_sat_info2_window_t11

0x55cf,	// (0x00054bfb) aid_size_touch_mv_arrow_left_ParamLimits

0x2009,	// (0x00051635) aid_size_touch_mv_arrow_right_ParamLimits

0x2062,	// (0x0005168e) navi_pane_g1_ParamLimits

0x206e,	// (0x0005169a) navi_pane_g2_ParamLimits

0x55f3,	// (0x00054c1f) navi_pane_g3_ParamLimits

0xf38b,	// (0x0005e9b7) navi_pane_g_ParamLimits

0x5610,	// (0x00054c3c) navi_pane_mv_t1_ParamLimits

0x726a,	// (0x00056896) grid_imed_effect_pane_ParamLimits

0x4498,	// (0x00053ac4) aid_placing_vt_slider_lsc

0x181c,	// (0x00050e48) aid_placing_vt_slider_prt

0x2225,	// (0x00051851) bg_tb_trans_pane_cp01_ParamLimits

0xc78d,	// (0x0005bdb9) popup_image_details_window_g1_ParamLimits

0xc7a0,	// (0x0005bdcc) popup_image_details_window_g2_ParamLimits

0xc7b5,	// (0x0005bde1) popup_image_details_window_g3_ParamLimits

0xc7b5,	// (0x0005bde1) popup_image_details_window_g3

0xf6ca,	// (0x0005ecf6) popup_image_details_window_g_ParamLimits

0xc7c9,	// (0x0005bdf5) popup_image_details_window_t1_ParamLimits

0xc7db,	// (0x0005be07) popup_image_details_window_t2_ParamLimits

0xc7f4,	// (0x0005be20) popup_image_details_window_t3_ParamLimits

0xc808,	// (0x0005be34) popup_image_details_window_t4_ParamLimits

0xc823,	// (0x0005be4f) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x0005ecfd) popup_image_details_window_t_ParamLimits

0x88bd,	// (0x00057ee9) cl_header_name_pane_ParamLimits

0x88bd,	// (0x00057ee9) cl_header_name_pane

0x8c66,	// (0x00058292) cl_header_name_pane_t1_ParamLimits

0x8c66,	// (0x00058292) cl_header_name_pane_t1

0x8c87,	// (0x000582b3) cl_header_name_pane_t2_ParamLimits

0x8c87,	// (0x000582b3) cl_header_name_pane_t2

0x8cc9,	// (0x000582f5) cl_header_name_pane_t3_ParamLimits

0x8cc9,	// (0x000582f5) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x0005f107) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x0005f107) cl_header_name_pane_t

0x20fb,	// (0x00051727) navi_pane_mv_g2_ParamLimits

0xcf3a,	// (0x0005c566) field_vitu2_entry_pane_g1_ParamLimits

0xcf46,	// (0x0005c572) field_vitu2_entry_pane_g2_ParamLimits

0x247b,	// (0x00051aa7) field_vitu2_entry_pane_g3_ParamLimits

0x247b,	// (0x00051aa7) field_vitu2_entry_pane_g3

0xf8d1,	// (0x0005eefd) field_vitu2_entry_pane_g_ParamLimits

0xeeaf,	// (0x0005e4db) cell_vitu2_itu_pane_g1_ParamLimits

0x7c47,	// (0x00057273) cell_vitu2_itu_pane_g2_ParamLimits

0x7c47,	// (0x00057273) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x0005ef09) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x0005ef09) cell_vitu2_itu_pane_g

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp05_ParamLimits

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp05

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp03

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp04

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp10_ParamLimits

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp10

0x8863,	// (0x00057e8f) bg_vkb2_func_pane_cp08

0x884a,	// (0x00057e76) bg_vkb2_func_pane_cp06

0x8857,	// (0x00057e83) bg_vkb2_func_pane_cp07

0xd53f,	// (0x0005cb6b) bg_vkb2_func_pane_cp11_ParamLimits

0xd53f,	// (0x0005cb6b) bg_vkb2_func_pane_cp11

0xd554,	// (0x0005cb80) bg_vkb2_func_pane_cp12_ParamLimits

0xd554,	// (0x0005cb80) bg_vkb2_func_pane_cp12

0x0e1e,	// (0x0005044a) bg_vkb2_func_pane_cp09

0xcf81,	// (0x0005c5ad) bg_vkb2_func_pane_g1

0x19eb,	// (0x00051017) bg_vkb2_func_pane_g2

0xcf89,	// (0x0005c5b5) bg_vkb2_func_pane_g3

0xcf91,	// (0x0005c5bd) bg_vkb2_func_pane_g4

0xd1b5,	// (0x0005c7e1) bg_vkb2_func_pane_g5

0xcfa9,	// (0x0005c5d5) bg_vkb2_func_pane_g6

0xcfb1,	// (0x0005c5dd) bg_vkb2_func_pane_g7

0xcfa1,	// (0x0005c5cd) bg_vkb2_func_pane_g8

0x19cb,	// (0x00050ff7) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x0005f10e) bg_vkb2_func_pane_g

0x8b9c,	// (0x000581c8) blid2_tripm_pane_g6_ParamLimits

0x8b9c,	// (0x000581c8) blid2_tripm_pane_g6

0xce10,	// (0x0005c43c) mp4_progress_pane_g1

0x8c0b,	// (0x00058237) blid2_tripm_values_pane_ParamLimits

0x8c0b,	// (0x00058237) blid2_tripm_values_pane

0x8cfa,	// (0x00058326) blid2_tripm_values_pane_t1

0x8d08,	// (0x00058334) blid2_tripm_values_pane_t2

0x8d16,	// (0x00058342) blid2_tripm_values_pane_t3

0x8d24,	// (0x00058350) blid2_tripm_values_pane_t4

0x8d32,	// (0x0005835e) blid2_tripm_values_pane_t5

0x8d40,	// (0x0005836c) blid2_tripm_values_pane_t6

0x8d4e,	// (0x0005837a) blid2_tripm_values_pane_t7

0x8d5c,	// (0x00058388) blid2_tripm_values_pane_t8

0x8d6a,	// (0x00058396) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x0005f121) blid2_tripm_values_pane_t

0x44d2,	// (0x00053afe) call_video_pane_t1_ParamLimits

0x44ec,	// (0x00053b18) call_video_pane_t2_ParamLimits

0xf222,	// (0x0005e84e) call_video_pane_t_ParamLimits

0x586d,	// (0x00054e99) msg_header_pane_g1_ParamLimits

0x22da,	// (0x00051906) msg_header_pane_g2_ParamLimits

0x22da,	// (0x00051906) msg_header_pane_g2

0x0001,

0xf42e,	// (0x0005ea5a) msg_header_pane_g_ParamLimits

0xf42e,	// (0x0005ea5a) msg_header_pane_g

0x1584,	// (0x00050bb0) main_clock2_pane_ParamLimits

0x6f81,	// (0x000565ad) grid_clock2_toolbar_pane_ParamLimits

0x6f81,	// (0x000565ad) grid_clock2_toolbar_pane

0x6f81,	// (0x000565ad) listscroll_clock2_pane_ParamLimits

0x6f81,	// (0x000565ad) listscroll_clock2_pane

0x7064,	// (0x00056690) main_clock2_pane_t3_ParamLimits

0x7064,	// (0x00056690) main_clock2_pane_t3

0x7086,	// (0x000566b2) main_clock2_pane_t4_ParamLimits

0x7086,	// (0x000566b2) main_clock2_pane_t4

0xd608,	// (0x0005cc34) cell_clock2_toolbar_pane

0xd610,	// (0x0005cc3c) cell_clock2_toolbar_pane_cp01

0xd610,	// (0x0005cc3c) cell_clock2_toolbar_pane_cp02

0xd618,	// (0x0005cc44) cell_clock2_toolbar_pane_cp03

0xd620,	// (0x0005cc4c) list_clock2_pane

0xd628,	// (0x0005cc54) scroll_pane_cp10

0xd630,	// (0x0005cc5c) list_single_clock2_pane_ParamLimits

0xd630,	// (0x0005cc5c) list_single_clock2_pane

0x1751,	// (0x00050d7d) list_highlight_pane_cp08

0xd63d,	// (0x0005cc69) list_single_clock2_pane_t1

0xd64b,	// (0x0005cc77) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x0005f134) list_single_clock2_pane_t

0x0e1e,	// (0x0005044a) bg_button_pane_cp10

0xd659,	// (0x0005cc85) cell_clock2_toolbar_pane_g1

0x58d1,	// (0x00054efd) aid_main_viewer_pane_g1_ParamLimits

0x58d1,	// (0x00054efd) aid_main_viewer_pane_g1

0x58dd,	// (0x00054f09) aid_main_viewer_pane_g2_ParamLimits

0x58dd,	// (0x00054f09) aid_main_viewer_pane_g2

0x58e9,	// (0x00054f15) aid_main_viewer_pane_g3_ParamLimits

0x58e9,	// (0x00054f15) aid_main_viewer_pane_g3

0x58f8,	// (0x00054f24) aid_main_viewer_pane_g4_ParamLimits

0x58f8,	// (0x00054f24) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x0005ea6b) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x0005ea6b) aid_main_viewer_pane_g

0xe9e5,	// (0x0005e011) main_calc_pane_ParamLimits

0x611a,	// (0x00055746) main_dialer2_pane_ParamLimits

0xaebf,	// (0x0005a4eb) main_cam6_pane

0xaebf,	// (0x0005a4eb) main_vid6_pane

0x6f8d,	// (0x000565b9) listscroll_gen_pane_cp06_ParamLimits

0x6f8d,	// (0x000565b9) listscroll_gen_pane_cp06

0x70a7,	// (0x000566d3) main_clock2_pane_t5_ParamLimits

0x70a7,	// (0x000566d3) main_clock2_pane_t5

0x70ff,	// (0x0005672b) aid_call2_pane_cp10_ParamLimits

0x7111,	// (0x0005673d) aid_call_pane_cp10_ParamLimits

0x1ffd,	// (0x00051629) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1ffd,	// (0x00051629) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7123,	// (0x0005674f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7123,	// (0x0005674f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1ffd,	// (0x00051629) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x0005edb2) popup_clock_analogue_window_cp10_g_ParamLimits

0x7135,	// (0x00056761) popup_clock_analogue_window_cp10_t1_ParamLimits

0xce68,	// (0x0005c494) cell_dialer2_keypad_pane_g2_ParamLimits

0xce68,	// (0x0005c494) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x0005ee9c) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x0005ee9c) cell_dialer2_keypad_pane_g

0x2211,	// (0x0005183d) cell_dialer2_keypad_pane_t1

0x7f82,	// (0x000575ae) main_cset_text2_pane_ParamLimits

0x7f82,	// (0x000575ae) main_cset_text2_pane

0xd3d7,	// (0x0005ca03) area_vitu2_query_pane_g1_ParamLimits

0x87ef,	// (0x00057e1b) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x0005f051) area_vitu2_query_pane_g_ParamLimits

0xd45b,	// (0x0005ca87) area_vitu2_query_pane_t7_ParamLimits

0xd45b,	// (0x0005ca87) area_vitu2_query_pane_t7

0x884a,	// (0x00057e76) bg_button_pane_cp018_ParamLimits

0x8857,	// (0x00057e83) bg_button_pane_cp021_ParamLimits

0x8863,	// (0x00057e8f) bg_button_pane_cp022_ParamLimits

0x8863,	// (0x00057e8f) bg_vkb2_func_pane_cp08_ParamLimits

0x884a,	// (0x00057e76) bg_vkb2_func_pane_cp06_ParamLimits

0x8857,	// (0x00057e83) bg_vkb2_func_pane_cp07_ParamLimits

0x8872,	// (0x00057e9e) input_focus_pane_cp09_ParamLimits

0xefd5,	// (0x0005e601) cam6_autofocus_pane_ParamLimits

0xefd5,	// (0x0005e601) cam6_autofocus_pane

0x8d78,	// (0x000583a4) cam6_image_uncrop_pane_ParamLimits

0x8d78,	// (0x000583a4) cam6_image_uncrop_pane

0x8d85,	// (0x000583b1) cam6_indi_pane_ParamLimits

0x8d85,	// (0x000583b1) cam6_indi_pane

0x8d9b,	// (0x000583c7) cam6_mode_pane_ParamLimits

0x8d9b,	// (0x000583c7) cam6_mode_pane

0x8dad,	// (0x000583d9) cam6_timer_pane_ParamLimits

0x8dad,	// (0x000583d9) cam6_timer_pane

0x8db9,	// (0x000583e5) cam6_zoom_pane_ParamLimits

0x8db9,	// (0x000583e5) cam6_zoom_pane

0x8dc5,	// (0x000583f1) cam6_mode_pane_g1_ParamLimits

0x8dc5,	// (0x000583f1) cam6_mode_pane_g1

0x8dd5,	// (0x00058401) cam6_mode_pane_g2_ParamLimits

0x8dd5,	// (0x00058401) cam6_mode_pane_g2

0x8de5,	// (0x00058411) cam6_mode_pane_g3_ParamLimits

0x8de5,	// (0x00058411) cam6_mode_pane_g3

0x8df5,	// (0x00058421) cam6_mode_pane_g4_ParamLimits

0x8df5,	// (0x00058421) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x0005f139) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x0005f139) cam6_mode_pane_g

0xd661,	// (0x0005cc8d) bg_tb_trans_pane_cp08_ParamLimits

0xd661,	// (0x0005cc8d) bg_tb_trans_pane_cp08

0xd66f,	// (0x0005cc9b) cam6_battery_pane_ParamLimits

0xd66f,	// (0x0005cc9b) cam6_battery_pane

0xd685,	// (0x0005ccb1) cam6_indi_pane_g1_ParamLimits

0xd685,	// (0x0005ccb1) cam6_indi_pane_g1

0xd697,	// (0x0005ccc3) cam6_indi_pane_g2_ParamLimits

0xd697,	// (0x0005ccc3) cam6_indi_pane_g2

0xd6a9,	// (0x0005ccd5) cam6_indi_pane_g3_ParamLimits

0xd6a9,	// (0x0005ccd5) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x0005f142) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x0005f142) cam6_indi_pane_g

0xd6bb,	// (0x0005cce7) cam6_indi_pane_t1_ParamLimits

0xd6bb,	// (0x0005cce7) cam6_indi_pane_t1

0x7a47,	// (0x00057073) cam6_autofocus_pane_g1

0x7a3f,	// (0x0005706b) cam6_autofocus_pane_g2

0x7a57,	// (0x00057083) cam6_autofocus_pane_g3

0x7a4f,	// (0x0005707b) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x0005f149) cam6_autofocus_pane_g

0xd6e1,	// (0x0005cd0d) cam6_timer_pane_g1

0xd6e9,	// (0x0005cd15) cam6_timer_pane_t1

0xd6f7,	// (0x0005cd23) cam6_zoom_cont_pane

0xd6ff,	// (0x0005cd2b) cam6_zoom_pane_g1

0xd707,	// (0x0005cd33) cam6_zoom_pane_g2

0x8e05,	// (0x00058431) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x0005f152) cam6_zoom_pane_g

0x17cd,	// (0x00050df9) cam6_battery_pane_g1

0x17cd,	// (0x00050df9) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x0005ea1b) cam6_battery_pane_g

0xd70f,	// (0x0005cd3b) cam6_zoom_cont_pane_g1

0xd718,	// (0x0005cd44) cam6_zoom_cont_pane_g2

0xd721,	// (0x0005cd4d) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x0005f159) cam6_zoom_cont_pane_g

0x8e22,	// (0x0005844e) cam6_mode_pane_cp_ParamLimits

0x8e22,	// (0x0005844e) cam6_mode_pane_cp

0x8e34,	// (0x00058460) cam6_zoom_pane_cp_ParamLimits

0x8e34,	// (0x00058460) cam6_zoom_pane_cp

0x8e40,	// (0x0005846c) vid6_image_uncrop_cif_pane_ParamLimits

0x8e40,	// (0x0005846c) vid6_image_uncrop_cif_pane

0x8e4e,	// (0x0005847a) vid6_image_uncrop_nhd_pane_ParamLimits

0x8e4e,	// (0x0005847a) vid6_image_uncrop_nhd_pane

0x8e5b,	// (0x00058487) vid6_image_uncrop_vga_pane_ParamLimits

0x8e5b,	// (0x00058487) vid6_image_uncrop_vga_pane

0x8e68,	// (0x00058494) vid6_image_uncrop_wvga_pane_ParamLimits

0x8e68,	// (0x00058494) vid6_image_uncrop_wvga_pane

0x8e75,	// (0x000584a1) vid6_indi_pane_ParamLimits

0x8e75,	// (0x000584a1) vid6_indi_pane

0xd661,	// (0x0005cc8d) bg_tb_trans_pane_cp09_ParamLimits

0xd661,	// (0x0005cc8d) bg_tb_trans_pane_cp09

0xd735,	// (0x0005cd61) cam6_battery_pane_cp_ParamLimits

0xd735,	// (0x0005cd61) cam6_battery_pane_cp

0xd741,	// (0x0005cd6d) vid6_indi_pane_g1_ParamLimits

0xd741,	// (0x0005cd6d) vid6_indi_pane_g1

0xd753,	// (0x0005cd7f) vid6_indi_pane_g2_ParamLimits

0xd753,	// (0x0005cd7f) vid6_indi_pane_g2

0xd765,	// (0x0005cd91) vid6_indi_pane_g3_ParamLimits

0xd765,	// (0x0005cd91) vid6_indi_pane_g3

0xd77a,	// (0x0005cda6) vid6_indi_pane_g4_ParamLimits

0xd77a,	// (0x0005cda6) vid6_indi_pane_g4

0xd78f,	// (0x0005cdbb) vid6_indi_pane_g5_ParamLimits

0xd78f,	// (0x0005cdbb) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x0005f160) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x0005f160) vid6_indi_pane_g

0xd7a9,	// (0x0005cdd5) vid6_indi_pane_t1_ParamLimits

0xd7a9,	// (0x0005cdd5) vid6_indi_pane_t1

0xd7bf,	// (0x0005cdeb) vid6_indi_pane_t2_ParamLimits

0xd7bf,	// (0x0005cdeb) vid6_indi_pane_t2

0xd7e7,	// (0x0005ce13) vid6_indi_pane_t3_ParamLimits

0xd7e7,	// (0x0005ce13) vid6_indi_pane_t3

0xd80f,	// (0x0005ce3b) vid6_indi_pane_t4_ParamLimits

0xd80f,	// (0x0005ce3b) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x0005f16b) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x0005f16b) vid6_indi_pane_t

0xd833,	// (0x0005ce5f) wait_bar_pane_cp08

0x8e8c,	// (0x000584b8) main_cset_text2_pane_t1_ParamLimits

0x8e8c,	// (0x000584b8) main_cset_text2_pane_t1

0x8e0d,	// (0x00058439) listscroll_gen_pane_cp06_t1_ParamLimits

0x8e0d,	// (0x00058439) listscroll_gen_pane_cp06_t1

0xaebf,	// (0x0005a4eb) main_cam6_set_pane

0xedf0,	// (0x0005e41c) bg_tb_trans_pane_cp06_ParamLimits

0xee06,	// (0x0005e432) cam4_indicators_pane_g1_ParamLimits

0xee16,	// (0x0005e442) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x0005eed9) cam4_indicators_pane_g_ParamLimits

0xee36,	// (0x0005e462) cam4_indicators_pane_t1_ParamLimits

0xe9e5,	// (0x0005e011) bg_tb_trans_pane_cp07_ParamLimits

0xee06,	// (0x0005e432) vid4_indicators_pane_g1_ParamLimits

0xee58,	// (0x0005e484) vid4_indicators_pane_g2_ParamLimits

0xee68,	// (0x0005e494) vid4_indicators_pane_g3_ParamLimits

0xee79,	// (0x0005e4a5) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x0005eeeb) vid4_indicators_pane_g_ParamLimits

0xee95,	// (0x0005e4c1) vid4_indicators_pane_t1_ParamLimits

0xef40,	// (0x0005e56c) vid4_progress_pane_g1_ParamLimits

0xef4f,	// (0x0005e57b) vid4_progress_pane_g2_ParamLimits

0xef5e,	// (0x0005e58a) vid4_progress_pane_g3_ParamLimits

0xef6d,	// (0x0005e599) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x0005f09c) vid4_progress_pane_g_ParamLimits

0xef85,	// (0x0005e5b1) vid4_progress_pane_t1_ParamLimits

0xef9b,	// (0x0005e5c7) vid4_progress_pane_t2_ParamLimits

0xefb0,	// (0x0005e5dc) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x0005f0a7) vid4_progress_pane_t_ParamLimits

0xefc5,	// (0x0005e5f1) wait_bar_pane_cp07_ParamLimits

0x8ea7,	// (0x000584d3) main_cam6_set_pane_g2_ParamLimits

0x8ea7,	// (0x000584d3) main_cam6_set_pane_g2

0x8ec9,	// (0x000584f5) main_cset6_listscroll_pane_ParamLimits

0x8ec9,	// (0x000584f5) main_cset6_listscroll_pane

0x8ee3,	// (0x0005850f) main_cset6_slider_pane_ParamLimits

0x8ee3,	// (0x0005850f) main_cset6_slider_pane

0x8ef9,	// (0x00058525) main_cset6_text2_pane_ParamLimits

0x8ef9,	// (0x00058525) main_cset6_text2_pane

0xd843,	// (0x0005ce6f) main_cset6_text_pane

0xd097,	// (0x0005c6c3) main_cset_list_pane_copy1_ParamLimits

0xd097,	// (0x0005c6c3) main_cset_list_pane_copy1

0xd0a7,	// (0x0005c6d3) scroll_pane_cp028_copy1

0x8f07,	// (0x00058533) cset_list_set_pane_copy1

0x8f19,	// (0x00058545) aid_position_infowindow_above_copy1

0x8f21,	// (0x0005854d) aid_position_infowindow_below_copy1

0x8f29,	// (0x00058555) cset_list_set_pane_g1_copy1

0x8f31,	// (0x0005855d) cset_list_set_pane_g3_copy1_ParamLimits

0x8f31,	// (0x0005855d) cset_list_set_pane_g3_copy1

0x8f40,	// (0x0005856c) cset_list_set_pane_t1_copy1_ParamLimits

0x8f40,	// (0x0005856c) cset_list_set_pane_t1_copy1

0x2225,	// (0x00051851) list_highlight_pane_cp021_copy1_ParamLimits

0x2225,	// (0x00051851) list_highlight_pane_cp021_copy1

0xd84b,	// (0x0005ce77) cset6_slider_pane_ParamLimits

0xd84b,	// (0x0005ce77) cset6_slider_pane

0xd877,	// (0x0005cea3) main_cset6_slider_pane_g1_ParamLimits

0xd877,	// (0x0005cea3) main_cset6_slider_pane_g1

0x8f55,	// (0x00058581) main_cset6_slider_pane_g2_ParamLimits

0x8f55,	// (0x00058581) main_cset6_slider_pane_g2

0xd0bc,	// (0x0005c6e8) main_cset6_slider_pane_g3_ParamLimits

0xd0bc,	// (0x0005c6e8) main_cset6_slider_pane_g3

0x8040,	// (0x0005766c) main_cset6_slider_pane_g4_ParamLimits

0x8040,	// (0x0005766c) main_cset6_slider_pane_g4

0x8088,	// (0x000576b4) main_cset6_slider_pane_g5_ParamLimits

0x8088,	// (0x000576b4) main_cset6_slider_pane_g5

0xd0bc,	// (0x0005c6e8) main_cset6_slider_pane_g7_ParamLimits

0xd0bc,	// (0x0005c6e8) main_cset6_slider_pane_g7

0xd0c8,	// (0x0005c6f4) main_cset6_slider_pane_g8_ParamLimits

0xd0c8,	// (0x0005c6f4) main_cset6_slider_pane_g8

0x8028,	// (0x00057654) main_cset6_slider_pane_g9_ParamLimits

0x8028,	// (0x00057654) main_cset6_slider_pane_g9

0x8034,	// (0x00057660) main_cset6_slider_pane_g10_ParamLimits

0x8034,	// (0x00057660) main_cset6_slider_pane_g10

0x8040,	// (0x0005766c) main_cset6_slider_pane_g11_ParamLimits

0x8040,	// (0x0005766c) main_cset6_slider_pane_g11

0x804c,	// (0x00057678) main_cset6_slider_pane_g12_ParamLimits

0x804c,	// (0x00057678) main_cset6_slider_pane_g12

0x8058,	// (0x00057684) main_cset6_slider_pane_g13_ParamLimits

0x8058,	// (0x00057684) main_cset6_slider_pane_g13

0x8064,	// (0x00057690) main_cset6_slider_pane_g14_ParamLimits

0x8064,	// (0x00057690) main_cset6_slider_pane_g14

0x8f7d,	// (0x000585a9) main_cset6_slider_pane_g15_ParamLimits

0x8f7d,	// (0x000585a9) main_cset6_slider_pane_g15

0x8088,	// (0x000576b4) main_cset6_slider_pane_g16_ParamLimits

0x8088,	// (0x000576b4) main_cset6_slider_pane_g16

0x8094,	// (0x000576c0) main_cset6_slider_pane_g17_ParamLimits

0x8094,	// (0x000576c0) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x0005f174) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x0005f174) main_cset6_slider_pane_g

0xd89f,	// (0x0005cecb) main_cset6_slider_pane_t1_ParamLimits

0xd89f,	// (0x0005cecb) main_cset6_slider_pane_t1

0xd8e0,	// (0x0005cf0c) main_cset6_slider_pane_t2_ParamLimits

0xd8e0,	// (0x0005cf0c) main_cset6_slider_pane_t2

0xd90b,	// (0x0005cf37) main_cset6_slider_pane_t3_ParamLimits

0xd90b,	// (0x0005cf37) main_cset6_slider_pane_t3

0x8f95,	// (0x000585c1) main_cset6_slider_pane_t4_ParamLimits

0x8f95,	// (0x000585c1) main_cset6_slider_pane_t4

0x8fc0,	// (0x000585ec) main_cset6_slider_pane_t5_ParamLimits

0x8fc0,	// (0x000585ec) main_cset6_slider_pane_t5

0xd936,	// (0x0005cf62) main_cset6_slider_pane_t7_ParamLimits

0xd936,	// (0x0005cf62) main_cset6_slider_pane_t7

0x8feb,	// (0x00058617) main_cset6_slider_pane_t8_ParamLimits

0x8feb,	// (0x00058617) main_cset6_slider_pane_t8

0x900f,	// (0x0005863b) main_cset6_slider_pane_t9_ParamLimits

0x900f,	// (0x0005863b) main_cset6_slider_pane_t9

0x9033,	// (0x0005865f) main_cset6_slider_pane_t10_ParamLimits

0x9033,	// (0x0005865f) main_cset6_slider_pane_t10

0x9057,	// (0x00058683) main_cset6_slider_pane_t11_ParamLimits

0x9057,	// (0x00058683) main_cset6_slider_pane_t11

0xd96c,	// (0x0005cf98) main_cset6_slider_pane_t14_ParamLimits

0xd96c,	// (0x0005cf98) main_cset6_slider_pane_t14

0xd9a5,	// (0x0005cfd1) main_cset6_slider_pane_t15_ParamLimits

0xd9a5,	// (0x0005cfd1) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x0005f199) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x0005f199) main_cset6_slider_pane_t

0xd9de,	// (0x0005d00a) cset_slider_pane_g1_copy1

0xd9e7,	// (0x0005d013) cset_slider_pane_g2_copy1

0xd9f0,	// (0x0005d01c) cset_slider_pane_g3_copy1

0x0e1e,	// (0x0005044a) bg_popup_sub_pane_cp011_copy1

0xd209,	// (0x0005c835) main_cset_text_pane_g1_copy1

0xd211,	// (0x0005c83d) main_cset_text_pane_t1_copy1

0xd21f,	// (0x0005c84b) main_cset_text_pane_t2_copy1

0xd22d,	// (0x0005c859) main_cset_text_pane_t3_copy1

0xd23b,	// (0x0005c867) main_cset_text_pane_t4_copy1

0xd249,	// (0x0005c875) main_cset_text_pane_t5_copy1

0xd257,	// (0x0005c883) main_cset_text_pane_t6_copy1

0xd265,	// (0x0005c891) main_cset_text_pane_t7_copy1

0x9098,	// (0x000586c4) main_cset_text2_pane_t1_copy1

0xe9e5,	// (0x0005e011) main_ncimui_pane

0x6328,	// (0x00055954) popup_query_ncimui_window_ParamLimits

0x6328,	// (0x00055954) popup_query_ncimui_window

0xc900,	// (0x0005bf2c) field_cale_ev2_pane_g4_ParamLimits

0xc900,	// (0x0005bf2c) field_cale_ev2_pane_g4

0x74eb,	// (0x00056b17) cell_video_dialer_keypad_pane_g2_ParamLimits

0x74eb,	// (0x00056b17) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x0005ee73) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x0005ee73) cell_video_dialer_keypad_pane_g

0x7503,	// (0x00056b2f) cell_video_dialer_keypad_pane_t1

0x0e1e,	// (0x0005044a) bg_popup_window_pane_cp012

0x1e4a,	// (0x00051476) heading_pane_cp06

0xda49,	// (0x0005d075) ncim_query_content_pane

0x0e1e,	// (0x0005044a) bg_popup_heading_pane_cp01

0xda51,	// (0x0005d07d) ncim_heading_pane_t1

0xda5f,	// (0x0005d08b) ncim_indicator_popup_pane

0xda71,	// (0x0005d09d) ncim_query_button_pane

0xda85,	// (0x0005d0b1) ncim_query_content_pane_t1

0xda97,	// (0x0005d0c3) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x0005f1dd) ncim_query_content_pane_t

0xdad1,	// (0x0005d0fd) ncim_query_list_pane

0xdae3,	// (0x0005d10f) ncim_query_popup_pane

0xda5f,	// (0x0005d08b) ncim_indicator_popup_pane_ParamLimits

0x91d7,	// (0x00058803) ncim_query_content_pane_g1_ParamLimits

0x91d7,	// (0x00058803) ncim_query_content_pane_g1

0xda85,	// (0x0005d0b1) ncim_query_content_pane_t1_ParamLimits

0xda97,	// (0x0005d0c3) ncim_query_content_pane_t2_ParamLimits

0x91e3,	// (0x0005880f) ncim_query_content_pane_t3_ParamLimits

0x91e3,	// (0x0005880f) ncim_query_content_pane_t3

0x920b,	// (0x00058837) ncim_query_content_pane_t4_ParamLimits

0x920b,	// (0x00058837) ncim_query_content_pane_t4

0x9233,	// (0x0005885f) ncim_query_content_pane_t5_ParamLimits

0x9233,	// (0x0005885f) ncim_query_content_pane_t5

0xdaa9,	// (0x0005d0d5) ncim_query_content_pane_t6_ParamLimits

0xdaa9,	// (0x0005d0d5) ncim_query_content_pane_t6

0xfbb1,	// (0x0005f1dd) ncim_query_content_pane_t_ParamLimits

0xdad1,	// (0x0005d0fd) ncim_query_list_pane_ParamLimits

0xdae3,	// (0x0005d10f) ncim_query_popup_pane_ParamLimits

0xdaf7,	// (0x0005d123) wait_bar_pane_cp04

0x0e1e,	// (0x0005044a) input_focus_pane_cp011

0xdaff,	// (0x0005d12b) ncim_query_popup_pane_t1

0xdb0d,	// (0x0005d139) ncim_list_query_list_pane_ParamLimits

0xdb0d,	// (0x0005d139) ncim_list_query_list_pane

0x0e1e,	// (0x0005044a) bg_button_pane_cp027

0xdb20,	// (0x0005d14c) ncim_query_button_pane_g1

0x0e1e,	// (0x0005044a) list_highlight_pane_cp012

0xdb2a,	// (0x0005d156) ncim_list_query_list_pane_g1

0xdb32,	// (0x0005d15e) ncim_list_query_list_pane_t1

0xee26,	// (0x0005e452) cam4_indicators_pane_g3_ParamLimits

0xee26,	// (0x0005e452) cam4_indicators_pane_g3

0xee85,	// (0x0005e4b1) vid4_indicators_pane_g5_ParamLimits

0xee85,	// (0x0005e4b1) vid4_indicators_pane_g5

0xef79,	// (0x0005e5a5) vid4_progress_pane_g5_ParamLimits

0xef79,	// (0x0005e5a5) vid4_progress_pane_g5

0x90c7,	// (0x000586f3) main_ncimui_pane_g1

0x912d,	// (0x00058759) ncimui_group_query_pane_ParamLimits

0x912d,	// (0x00058759) ncimui_group_query_pane

0x9175,	// (0x000587a1) ncimui_list_pane_ParamLimits

0x9175,	// (0x000587a1) ncimui_list_pane

0x919a,	// (0x000587c6) ncimui_text_pane_ParamLimits

0x919a,	// (0x000587c6) ncimui_text_pane

0x925b,	// (0x00058887) ncimui_text_pane_t1_ParamLimits

0x925b,	// (0x00058887) ncimui_text_pane_t1

0xdb49,	// (0x0005d175) ncimui_list_single_graphic_pane_ParamLimits

0xdb49,	// (0x0005d175) ncimui_list_single_graphic_pane

0x9279,	// (0x000588a5) ncimui_query_pane_ParamLimits

0x9279,	// (0x000588a5) ncimui_query_pane

0x0e1e,	// (0x0005044a) list_highlight_pane_cp013

0xdb59,	// (0x0005d185) ncim_list_query_list_pane_t1_copy1

0xdb67,	// (0x0005d193) ncim_list_single_graphic_pane_g1

0xdb6f,	// (0x0005d19b) ncim_query_button_pane_cp01

0xdb7b,	// (0x0005d1a7) ncim_query_entry_pane_ParamLimits

0xdb7b,	// (0x0005d1a7) ncim_query_entry_pane

0xdb8e,	// (0x0005d1ba) ncimui_query_pane_g1

0xdb9a,	// (0x0005d1c6) ncimui_query_pane_t1_ParamLimits

0xdb9a,	// (0x0005d1c6) ncimui_query_pane_t1

0x2225,	// (0x00051851) input_focus_pane_cp012

0xdbb3,	// (0x0005d1df) ncim_query_entry_pane_t1

0x1584,	// (0x00050bb0) main_im_pane_ParamLimits

0xe9e5,	// (0x0005e011) main_mobtv_pane_ParamLimits

0xe9e5,	// (0x0005e011) main_mobtv_pane

0x8028,	// (0x00057654) main_cset6_slider_pane_g18_ParamLimits

0x8028,	// (0x00057654) main_cset6_slider_pane_g18

0x8058,	// (0x00057684) main_cset6_slider_pane_g19_ParamLimits

0x8058,	// (0x00057684) main_cset6_slider_pane_g19

0x152a,	// (0x00050b56) bg_main_mobtv_pane_ParamLimits

0x152a,	// (0x00050b56) bg_main_mobtv_pane

0x9289,	// (0x000588b5) main_mobtv_info_pane

0x9292,	// (0x000588be) main_mobtv_loading_pane_ParamLimits

0x9292,	// (0x000588be) main_mobtv_loading_pane

0xdbc5,	// (0x0005d1f1) main_mobtv_pg_channel_list_pane

0xdbcf,	// (0x0005d1fb) main_mobtv_pg_hdr_pane

0x929f,	// (0x000588cb) main_mobtv_programe_curr_pane_ParamLimits

0x929f,	// (0x000588cb) main_mobtv_programe_curr_pane

0x92ac,	// (0x000588d8) main_mobtv_programe_next_pane_ParamLimits

0x92ac,	// (0x000588d8) main_mobtv_programe_next_pane

0xdbd8,	// (0x0005d204) popup_mobtv_noti_window

0x17cd,	// (0x00050df9) main_tv_pg_hdr_pane_g1

0xdbe0,	// (0x0005d20c) main_tv_pg_hdr_pane_g2

0xdbe8,	// (0x0005d214) main_tv_pg_hdr_pane_g3

0xdbf0,	// (0x0005d21c) main_tv_pg_hdr_pane_g4

0xdbf8,	// (0x0005d224) main_tv_pg_hdr_pane_g5

0xdc00,	// (0x0005d22c) main_tv_pg_hdr_pane_g6

0xdc08,	// (0x0005d234) main_tv_pg_hdr_pane_g7

0xdc10,	// (0x0005d23c) main_tv_pg_hdr_pane_g8

0xdc18,	// (0x0005d244) main_tv_pg_hdr_pane_g9

0xdc20,	// (0x0005d24c) main_tv_pg_hdr_pane_g10

0xdc2a,	// (0x0005d256) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x0005f1ea) main_tv_pg_hdr_pane_g

0xdc34,	// (0x0005d260) main_tv_pg_hdr_pane_t1

0xdc42,	// (0x0005d26e) main_tv_pg_hdr_pane_t2

0xdc50,	// (0x0005d27c) main_tv_pg_hdr_pane_t3

0xdc5e,	// (0x0005d28a) main_tv_pg_hdr_pane_t4

0xdc6c,	// (0x0005d298) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x0005f201) main_tv_pg_hdr_pane_t

0xdc7a,	// (0x0005d2a6) single_mobtv_pg_channel_pane_ParamLimits

0xdc7a,	// (0x0005d2a6) single_mobtv_pg_channel_pane

0xdc8c,	// (0x0005d2b8) single_mobtv_pg_channel_table_pane

0xdc95,	// (0x0005d2c1) single_mobtv_pg_channel_thumb_pane

0xdc9e,	// (0x0005d2ca) single_tv_pg_channel_pane_g1

0xdca7,	// (0x0005d2d3) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x0005f20c) single_tv_pg_channel_pane_g

0x150e,	// (0x00050b3a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x150e,	// (0x00050b3a) bg_single_mobtv_pg_channel_thumb_pane

0xdcb0,	// (0x0005d2dc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdcb0,	// (0x0005d2dc) single_mobtv_pg_channel_thumb_pane_g1

0xdcbe,	// (0x0005d2ea) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdcbe,	// (0x0005d2ea) single_mobtv_pg_channel_thumb_pane_g2

0xdcca,	// (0x0005d2f6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdcca,	// (0x0005d2f6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x0005f211) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x0005f211) single_mobtv_pg_channel_thumb_pane_g

0xdcd6,	// (0x0005d302) single_mobtv_pg_channel_thumb_pane_t1

0xdce4,	// (0x0005d310) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x0005f218) single_mobtv_pg_channel_thumb_pane_t

0x17cd,	// (0x00050df9) bg_single_mobtv_pg_channel_table_pane_g1

0x17cd,	// (0x00050df9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x0005ea1b) bg_single_mobtv_pg_channel_table_pane_g

0xdcf2,	// (0x0005d31e) single_mobtv_pg_channel_table_pane_t1

0xdd00,	// (0x0005d32c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x0005f21d) single_mobtv_pg_channel_table_pane_t

0x92c1,	// (0x000588ed) main_mobtv_info_pane_g1_ParamLimits

0x92c1,	// (0x000588ed) main_mobtv_info_pane_g1

0x92dd,	// (0x00058909) main_mobtv_info_pane_t1_ParamLimits

0x92dd,	// (0x00058909) main_mobtv_info_pane_t1

0x9343,	// (0x0005896f) main_mobtv_info_pane_t2_ParamLimits

0x9343,	// (0x0005896f) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x0005f227) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x0005f227) main_mobtv_info_pane_t

0x93c6,	// (0x000589f2) wait_bar_pane_cp05

0x93d6,	// (0x00058a02) main_mobtv_loading_pane_g1_ParamLimits

0x93d6,	// (0x00058a02) main_mobtv_loading_pane_g1

0x93e7,	// (0x00058a13) main_mobtv_loading_pane_g2_ParamLimits

0x93e7,	// (0x00058a13) main_mobtv_loading_pane_g2

0x93f3,	// (0x00058a1f) main_mobtv_loading_pane_g3_ParamLimits

0x93f3,	// (0x00058a1f) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0005f22e) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0005f22e) main_mobtv_loading_pane_g

0xdd0e,	// (0x0005d33a) main_mobtv_loading_pane_t1_ParamLimits

0xdd0e,	// (0x0005d33a) main_mobtv_loading_pane_t1

0xdd26,	// (0x0005d352) main_mobtv_loading_pane_t2_ParamLimits

0xdd26,	// (0x0005d352) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x0005f235) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x0005f235) main_mobtv_loading_pane_t

0x9404,	// (0x00058a30) wait_bar_pane_cp06_ParamLimits

0x9404,	// (0x00058a30) wait_bar_pane_cp06

0xdd4a,	// (0x0005d376) main_mobtv_programe_curr_pane_t1

0xdd58,	// (0x0005d384) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x0005f23a) main_mobtv_programe_curr_pane_t

0xdd66,	// (0x0005d392) main_mobtv_programe_next_pane_t1

0xdd74,	// (0x0005d3a0) main_mobtv_programe_next_pane_t2

0xdd82,	// (0x0005d3ae) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x0005f23f) main_mobtv_programe_next_pane_t

0x0e1e,	// (0x0005044a) bg_popup_mobtv_noti_window_pane

0xdd90,	// (0x0005d3bc) popup_mobtv_noti_window_g1

0xdd98,	// (0x0005d3c4) popup_mobtv_noti_window_t1

0xdda6,	// (0x0005d3d2) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x0005f246) popup_mobtv_noti_window_t

0x17cd,	// (0x00050df9) bg_popup_mobtv_noti_window_pane_g1

0xaebf,	// (0x0005a4eb) sc_clock_pane

0xaebf,	// (0x0005a4eb) main_fs_bigclock_pane

0x8bf5,	// (0x00058221) blid2_tripm_pane_t4_ParamLimits

0x8bf5,	// (0x00058221) blid2_tripm_pane_t4

0x9413,	// (0x00058a3f) sc_clock_pane_g1_ParamLimits

0x9413,	// (0x00058a3f) sc_clock_pane_g1

0x9425,	// (0x00058a51) sc_clock_pane_t1_ParamLimits

0x9425,	// (0x00058a51) sc_clock_pane_t1

0x9447,	// (0x00058a73) sc_clock_pane_t2_ParamLimits

0x9447,	// (0x00058a73) sc_clock_pane_t2

0x945d,	// (0x00058a89) sc_clock_pane_t3_ParamLimits

0x945d,	// (0x00058a89) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x0005f24b) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x0005f24b) sc_clock_pane_t

0xa1cb,	// (0x000597f7) main_fs_bigclock_indicator_pane_ParamLimits

0xa1cb,	// (0x000597f7) main_fs_bigclock_indicator_pane

0x94f9,	// (0x00058b25) main_fs_bigclock_pane_g1_ParamLimits

0x94f9,	// (0x00058b25) main_fs_bigclock_pane_g1

0xa1d7,	// (0x00059803) main_fs_bigclock_pane_t1_ParamLimits

0xa1d7,	// (0x00059803) main_fs_bigclock_pane_t1

0xa1e9,	// (0x00059815) main_fs_bigclock_pane_t2_ParamLimits

0xa1e9,	// (0x00059815) main_fs_bigclock_pane_t2

0xa1fb,	// (0x00059827) main_fs_bigclock_pane_t3_ParamLimits

0xa1fb,	// (0x00059827) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x0005f414) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x0005f414) main_fs_bigclock_pane_t

0xefe1,	// (0x0005e60d) main_fs_bigclock_indicator_pane_g1

0xda79,	// (0x0005d0a5) ncim_query_content_pane_g2_ParamLimits

0xda79,	// (0x0005d0a5) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x0005f1d8) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x0005f1d8) ncim_query_content_pane_g

0x9474,	// (0x00058aa0) sc_clock_pane_t4_ParamLimits

0x9474,	// (0x00058aa0) sc_clock_pane_t4

0xe9e5,	// (0x0005e011) main_radioblah_pane

0xed8c,	// (0x0005e3b8) cell_call4_button_pane_t1_copy1_ParamLimits

0xed8c,	// (0x0005e3b8) cell_call4_button_pane_t1_copy1

0x90df,	// (0x0005870b) main_ncimui_pane_t1_ParamLimits

0x90df,	// (0x0005870b) main_ncimui_pane_t1

0x90f9,	// (0x00058725) main_ncimui_pane_t2_ParamLimits

0x90f9,	// (0x00058725) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x0005f1d1) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x0005f1d1) main_ncimui_pane_t

0xdee7,	// (0x0005d513) main_radioblah_anim_pane_ParamLimits

0xdee7,	// (0x0005d513) main_radioblah_anim_pane

0xdef8,	// (0x0005d524) main_radioblah_info_pane_ParamLimits

0xdef8,	// (0x0005d524) main_radioblah_info_pane

0xdf0c,	// (0x0005d538) main_radioblah_pane_t1_ParamLimits

0xdf0c,	// (0x0005d538) main_radioblah_pane_t1

0xdf28,	// (0x0005d554) main_radioblah_pane_t2_ParamLimits

0xdf28,	// (0x0005d554) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x0005f26c) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x0005f26c) main_radioblah_pane_t

0x9543,	// (0x00058b6f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9543,	// (0x00058b6f) main_radioblah_rocker_ctrl_pane

0xdf70,	// (0x0005d59c) main_radioblah_info_pane_t1_ParamLimits

0xdf70,	// (0x0005d59c) main_radioblah_info_pane_t1

0x9597,	// (0x00058bc3) main_radioblah_info_pane_t2_ParamLimits

0x9597,	// (0x00058bc3) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x0005f275) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x0005f275) main_radioblah_info_pane_t

0x17cd,	// (0x00050df9) main_radioblah_rocker_ctrl_pane_g1

0x9645,	// (0x00058c71) main_radioblah_rocker_ctrl_pane_g2

0x964d,	// (0x00058c79) main_radioblah_rocker_ctrl_pane_g3

0x9655,	// (0x00058c81) main_radioblah_rocker_ctrl_pane_g4

0x965d,	// (0x00058c89) main_radioblah_rocker_ctrl_pane_g5

0x9665,	// (0x00058c91) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x0005f27e) main_radioblah_rocker_ctrl_pane_g

0x9098,	// (0x000586c4) main_cset_text2_pane_t1_copy1_ParamLimits

0xede8,	// (0x0005e414) cam4_image_uncrop_qvga_pane

0xee50,	// (0x0005e47c) vid4_image_uncrop_qcif_pane

0xefd5,	// (0x0005e601) cam6_image_uncrop_qvga_pane_ParamLimits

0xefd5,	// (0x0005e601) cam6_image_uncrop_qvga_pane

0xd729,	// (0x0005cd55) vid6_image_uncrop_qcif_pane_ParamLimits

0xd729,	// (0x0005cd55) vid6_image_uncrop_qcif_pane

0x0e1e,	// (0x0005044a) bg_popup_preview_window_pane_cp03

0xda1f,	// (0x0005d04b) list_cset_text2_pane

0xda27,	// (0x0005d053) main_cset6_text2_pane_g1

0xda2f,	// (0x0005d05b) main_cset6_text2_pane_t1

0x966d,	// (0x00058c99) list_cset_text2_pane_t1_ParamLimits

0x966d,	// (0x00058c99) list_cset_text2_pane_t1

0xe9e5,	// (0x0005e011) main_radioblah_pane_ParamLimits

0x93b4,	// (0x000589e0) main_mobtv_info_pane_t3_ParamLimits

0x93b4,	// (0x000589e0) main_mobtv_info_pane_t3

0x9531,	// (0x00058b5d) main_radioblah_pane_g1

0x956b,	// (0x00058b97) main_radioblah_info_pane_g1

0x95ea,	// (0x00058c16) main_radioblah_info_pane_t3_ParamLimits

0x95ea,	// (0x00058c16) main_radioblah_info_pane_t3

0x51be,	// (0x000547ea) highlight_cell_cale_month_pane_ParamLimits

0x51be,	// (0x000547ea) highlight_cell_cale_month_pane

0xaebf,	// (0x0005a4eb) main_phob_fisheye_pane

0xc9a1,	// (0x0005bfcd) scroll_pane_cp0031_ParamLimits

0xc9a1,	// (0x0005bfcd) scroll_pane_cp0031

0xd833,	// (0x0005ce5f) wait_bar_pane_cp08_ParamLimits

0x8f07,	// (0x00058533) cset_list_set_pane_copy1_ParamLimits

0xdfaa,	// (0x0005d5d6) highlight_cell_cale_month_pane_g1

0x9686,	// (0x00058cb2) highlight_cell_cale_month_pane_t1

0xdfb2,	// (0x0005d5de) list_gen_pane_cp01

0xd0a7,	// (0x0005c6d3) scroll_pane_01

0x249b,	// (0x00051ac7) list_single_double_fisheye_pane

0xdfbb,	// (0x0005d5e7) list_double_fisheye_pane_g1_ParamLimits

0xdfbb,	// (0x0005d5e7) list_double_fisheye_pane_g1

0xdfc7,	// (0x0005d5f3) list_double_fisheye_pane_g2_ParamLimits

0xdfc7,	// (0x0005d5f3) list_double_fisheye_pane_g2

0x24a4,	// (0x00051ad0) list_double_fisheye_pane_g3_ParamLimits

0x24a4,	// (0x00051ad0) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x0005f28b) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x0005f28b) list_double_fisheye_pane_g

0xdff8,	// (0x0005d624) list_double_fisheye_pane_t1_ParamLimits

0xdff8,	// (0x0005d624) list_double_fisheye_pane_t1

0xe013,	// (0x0005d63f) list_double_fisheye_pane_t2_ParamLimits

0xe013,	// (0x0005d63f) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x0005f296) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x0005f296) list_double_fisheye_pane_t

0xaebf,	// (0x0005a4eb) main_call5_pane

0x949d,	// (0x00058ac9) sc_swipe_pane_ParamLimits

0x949d,	// (0x00058ac9) sc_swipe_pane

0x96a5,	// (0x00058cd1) call5_image_pane_ParamLimits

0x96a5,	// (0x00058cd1) call5_image_pane

0x96ba,	// (0x00058ce6) call5_swipe_1_pane_ParamLimits

0x96ba,	// (0x00058ce6) call5_swipe_1_pane

0x96cb,	// (0x00058cf7) call5_swipe_2_pane_ParamLimits

0x96cb,	// (0x00058cf7) call5_swipe_2_pane

0x96f0,	// (0x00058d1c) popup_call5_audio_first_window_ParamLimits

0x96f0,	// (0x00058d1c) popup_call5_audio_first_window

0x150e,	// (0x00050b3a) call5_swipe_1_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) call5_swipe_1_pane_g1

0xe035,	// (0x0005d661) call5_swipe_1_pane_g2_ParamLimits

0xe035,	// (0x0005d661) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x0005f29b) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x0005f29b) call5_swipe_1_pane_g

0xe041,	// (0x0005d66d) call5_swipe_1_pane_t1_ParamLimits

0xe041,	// (0x0005d66d) call5_swipe_1_pane_t1

0x150e,	// (0x00050b3a) call5_swipe_2_pane_g1_ParamLimits

0x150e,	// (0x00050b3a) call5_swipe_2_pane_g1

0xe056,	// (0x0005d682) call5_swipe_2_pane_g2_ParamLimits

0xe056,	// (0x0005d682) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0005f2a0) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0005f2a0) call5_swipe_2_pane_g

0xe062,	// (0x0005d68e) call5_swipe_2_pane_t1_ParamLimits

0xe062,	// (0x0005d68e) call5_swipe_2_pane_t1

0xe077,	// (0x0005d6a3) sc_swipe_pane_g1_ParamLimits

0xe077,	// (0x0005d6a3) sc_swipe_pane_g1

0xe084,	// (0x0005d6b0) sc_swipe_pane_g2_ParamLimits

0xe084,	// (0x0005d6b0) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x0005f2a5) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x0005f2a5) sc_swipe_pane_g

0xe090,	// (0x0005d6bc) sc_swipe_pane_t1_ParamLimits

0xe090,	// (0x0005d6bc) sc_swipe_pane_t1

0xaebf,	// (0x0005a4eb) main_cmail_launcher_pane

0x96ff,	// (0x00058d2b) aid_size_cell_cmail_l_ParamLimits

0x96ff,	// (0x00058d2b) aid_size_cell_cmail_l

0x9718,	// (0x00058d44) grid_cmail_l_pane_ParamLimits

0x9718,	// (0x00058d44) grid_cmail_l_pane

0x972d,	// (0x00058d59) cell_cmail_l_pane_ParamLimits

0x972d,	// (0x00058d59) cell_cmail_l_pane

0x974f,	// (0x00058d7b) cell_cmail_l_pane_g1_ParamLimits

0x974f,	// (0x00058d7b) cell_cmail_l_pane_g1

0x975f,	// (0x00058d8b) cell_cmail_l_pane_t1_ParamLimits

0x975f,	// (0x00058d8b) cell_cmail_l_pane_t1

0x9775,	// (0x00058da1) cell_cmail_l_pane_t2_ParamLimits

0x9775,	// (0x00058da1) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x0005f2aa) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x0005f2aa) cell_cmail_l_pane_t

0x2225,	// (0x00051851) grid_highlight_pane_cp018_ParamLimits

0x2225,	// (0x00051851) grid_highlight_pane_cp018

0x371e,	// (0x00052d4a) main2_pane_ParamLimits

0x371e,	// (0x00052d4a) main2_pane

0x1625,	// (0x00050c51) popup_sp_fs_action_menu_bg_pane_g1

0x162d,	// (0x00050c59) popup_sp_fs_action_menu_bg_pane_g2

0x1635,	// (0x00050c61) popup_sp_fs_action_menu_bg_pane_g3

0x163d,	// (0x00050c69) popup_sp_fs_action_menu_bg_pane_g4

0x1645,	// (0x00050c71) popup_sp_fs_action_menu_bg_pane_g5

0x164d,	// (0x00050c79) popup_sp_fs_action_menu_bg_pane_g6

0x1655,	// (0x00050c81) popup_sp_fs_action_menu_bg_pane_g7

0x165d,	// (0x00050c89) popup_sp_fs_action_menu_bg_pane_g8

0x1665,	// (0x00050c91) popup_sp_fs_action_menu_bg_pane_g9

0x166d,	// (0x00050c99) popup_sp_fs_action_menu_bg_pane_g10

0x166d,	// (0x00050c99) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0005e771) popup_sp_fs_action_menu_bg_pane_g

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g3_g1

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t3_g3_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t3_g3_g2

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0005e81f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0005e81f) list_medium_line_x2_t3_g3_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g3_t1

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g3_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g3_t2

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t3_g3_t3_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0005e826) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0005e826) list_medium_line_x2_t3_g3_t

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g2_g1

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0005e82d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0005e82d) list_medium_line_x2_t3_g2_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g2_t1

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g2_t2

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t3_g2_t3_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0005e826) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0005e826) list_medium_line_x2_t3_g2_t

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t4_g4_g1

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t4_g4_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t4_g4_g2

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t4_g4_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t4_g4_g3

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0005e832) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0005e832) list_medium_line_x2_t4_g4_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g4_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g4_t1

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g4_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g4_t2

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g4_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g4_t3

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t4_g4_t4_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0005e83b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0005e83b) list_medium_line_x2_t4_g4_t

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g4_g1

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t2_g4_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t2_g4_g2

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t2_g4_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t2_g4_g3

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0005e832) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0005e832) list_medium_line_x2_t2_g4_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t2_g4_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t2_g4_t1

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t2_g4_t2_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0005e8a2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0005e8a2) list_medium_line_x2_t2_g4_t

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g3_g1

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t2_g3_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t2_g3_g2

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0005e81f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0005e81f) list_medium_line_x2_t2_g3_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t2_g3_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t2_g3_t1

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t2_g3_t2_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0005e8a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0005e8a2) list_medium_line_x2_t2_g3_t

0x531b,	// (0x00054947) main_sp_fs_list_pane_ParamLimits

0x531b,	// (0x00054947) main_sp_fs_list_pane

0x5328,	// (0x00054954) sp_fs_scroll_pane_ParamLimits

0x5328,	// (0x00054954) sp_fs_scroll_pane

0xb001,	// (0x0005a62d) list_medium_line_x2_t3_t1

0xb001,	// (0x0005a62d) list_medium_line_x2_t3_t2

0xb010,	// (0x0005a63c) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0005e8ed) list_medium_line_x2_t3_t

0xb001,	// (0x0005a62d) list_medium_line_x3_t4_t1

0xb001,	// (0x0005a62d) list_medium_line_x3_t4_t2

0xb001,	// (0x0005a62d) list_medium_line_x3_t4_t3

0xb001,	// (0x0005a62d) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0005e8f4) list_medium_line_x3_t4_t

0xb001,	// (0x0005a62d) list_medium_line_x4_t5_t1

0xb001,	// (0x0005a62d) list_medium_line_x4_t5_t2

0xb001,	// (0x0005a62d) list_medium_line_x4_t5_t3

0xb001,	// (0x0005a62d) list_medium_line_x4_t5_t4

0xb001,	// (0x0005a62d) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0005e8fd) list_medium_line_x4_t5_t

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g1

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g2_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g2

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g3_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g3

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g4_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x0005e908) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x0005e908) list_medium_line_t4_g4_g

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t1

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t2

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t3

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t4_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x0005e911) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x0005e911) list_medium_line_t4_g4_t

0x53f6,	// (0x00054a22) chi_dic_find_pane_g1

0x612e,	// (0x0005575a) main_tport_pane

0xb001,	// (0x0005a62d) list_medium_line_plain_t1

0xaf95,	// (0x0005a5c1) list_medium_line_t2_g2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t2_g2_g1

0xd1bd,	// (0x0005c7e9) list_medium_line_t2_g2_g2_ParamLimits

0xd1bd,	// (0x0005c7e9) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x0005efe2) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x0005efe2) list_medium_line_t2_g2_g

0xafad,	// (0x0005a5d9) list_medium_line_t2_g2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t2_g2_t1

0xafad,	// (0x0005a5d9) list_medium_line_t2_g2_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x0005efe7) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x0005efe7) list_medium_line_t2_g2_t

0xd4d9,	// (0x0005cb05) aid_sp_fs_list_icon_a_sm

0xd4e1,	// (0x0005cb0d) aid_sp_fs_list_icon_d

0xd4e9,	// (0x0005cb15) aid_sp_fs_text_primary

0xd4f2,	// (0x0005cb1e) aid_sp_fs_text_secondary

0x89a9,	// (0x00057fd5) list_medium_line

0x89a9,	// (0x00057fd5) list_medium_line_g2

0x89a9,	// (0x00057fd5) list_medium_line_g3

0x89a9,	// (0x00057fd5) list_medium_line_plain

0x89a9,	// (0x00057fd5) list_medium_line_plain_t2

0x89a9,	// (0x00057fd5) list_medium_line_plain_t3

0x89a9,	// (0x00057fd5) list_medium_line_right_icon

0x89a9,	// (0x00057fd5) list_medium_line_right_iconx2

0x89a9,	// (0x00057fd5) list_medium_line_t2

0x89a9,	// (0x00057fd5) list_medium_line_t2_g2

0x89a9,	// (0x00057fd5) list_medium_line_t2_g3

0x89a9,	// (0x00057fd5) list_medium_line_t2_right_icon

0x89a9,	// (0x00057fd5) list_medium_line_t2_right_iconx2

0x89a9,	// (0x00057fd5) list_medium_line_t3

0x89a9,	// (0x00057fd5) list_medium_line_t3_g2

0x89a9,	// (0x00057fd5) list_medium_line_t3_g3

0x89a9,	// (0x00057fd5) list_medium_line_t3_right_iconx2

0x2489,	// (0x00051ab5) list_medium_line_t4_g4

0xd4fb,	// (0x0005cb27) list_medium_line_x2

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t2_g2

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t2_g3

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t2_g4

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t3

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t3_g2

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t3_g3

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t3_g4

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t4_g2

0xd4fb,	// (0x0005cb27) list_medium_line_x2_t4_g4

0x2492,	// (0x00051abe) list_medium_line_x3

0x2492,	// (0x00051abe) list_medium_line_x3_t4

0x2492,	// (0x00051abe) list_medium_line_x3_t4_g4

0x2489,	// (0x00051ab5) list_medium_line_x4_t4

0x2489,	// (0x00051ab5) list_medium_line_x4_t4_g7

0x2489,	// (0x00051ab5) list_medium_line_x4_t5

0x89b2,	// (0x00057fde) list_single_fs_dyc_pane_ParamLimits

0x89b2,	// (0x00057fde) list_single_fs_dyc_pane

0xaf95,	// (0x0005a5c1) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x4_t4_g7_g1

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g2

0xafa1,	// (0x0005a5cd) list_medium_line_x4_t4_g7_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x4_t4_g7_g3

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g4

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g5

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x150e,	// (0x00050b3a) list_medium_line_x4_t4_g7_g6

0x151c,	// (0x00050b48) list_medium_line_x4_t4_g7_g7_ParamLimits

0x151c,	// (0x00050b48) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x0005f1b2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x0005f1b2) list_medium_line_x4_t4_g7_g

0xafad,	// (0x0005a5d9) list_medium_line_x4_t4_g7_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x4_t4_g7_t1

0xafad,	// (0x0005a5d9) list_medium_line_x4_t4_g7_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x4_t4_g7_t2

0xafad,	// (0x0005a5d9) list_medium_line_x4_t4_g7_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x4_t4_g7_t3

0xd9f9,	// (0x0005d025) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd9f9,	// (0x0005d025) list_medium_line_x4_t4_g7_t4

0xda0c,	// (0x0005d038) list_medium_line_x4_t4_g7_t5_ParamLimits

0xda0c,	// (0x0005d038) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x0005f1c1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x0005f1c1) list_medium_line_x4_t4_g7_t

0x907b,	// (0x000586a7) list_single_dyc_row_pane_ParamLimits

0x907b,	// (0x000586a7) list_single_dyc_row_pane

0x9694,	// (0x00058cc0) call5_gesture_pane_ParamLimits

0x9694,	// (0x00058cc0) call5_gesture_pane

0x96dc,	// (0x00058d08) call5_windows_pane_ParamLimits

0x96dc,	// (0x00058d08) call5_windows_pane

0x978d,	// (0x00058db9) call5_swipe_1_pane_cp_ParamLimits

0x978d,	// (0x00058db9) call5_swipe_1_pane_cp

0x9799,	// (0x00058dc5) call5_swipe_2_pane_cp_ParamLimits

0x9799,	// (0x00058dc5) call5_swipe_2_pane_cp

0x1751,	// (0x00050d7d) call5_image_pane_cp

0x97a5,	// (0x00058dd1) popup_call5_audio_first_window_cp_ParamLimits

0x97a5,	// (0x00058dd1) popup_call5_audio_first_window_cp

0xe077,	// (0x0005d6a3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe077,	// (0x0005d6a3) call5_swipe_1_pane_g1_cp

0xe0a5,	// (0x0005d6d1) call5_swipe_1_pane_g2_cp

0xe090,	// (0x0005d6bc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe090,	// (0x0005d6bc) call5_swipe_1_pane_t1_cp

0xe077,	// (0x0005d6a3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe077,	// (0x0005d6a3) call5_swipe_2_pane_g1_cp

0xe0ad,	// (0x0005d6d9) call5_swipe_2_pane_g2_cp

0xe0b5,	// (0x0005d6e1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe0b5,	// (0x0005d6e1) call5_swipe_2_pane_t1_cp

0x2225,	// (0x00051851) main_sp_fs_email_pane

0xe0ca,	// (0x0005d6f6) main_sp_fs_listscroll_pane_te

0x97b1,	// (0x00058ddd) popup_sp_fs_action_menu_pane_ParamLimits

0x97b1,	// (0x00058ddd) popup_sp_fs_action_menu_pane

0x17cd,	// (0x00050df9) bg_sp_fs_ctrlbar_pane_g1

0xcbd5,	// (0x0005c201) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcbe7,	// (0x0005c213) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcbde,	// (0x0005c20a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x17cd,	// (0x00050df9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x0005f2af) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc463,	// (0x0005ba8f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc463,	// (0x0005ba8f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe0d3,	// (0x0005d6ff) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe0d3,	// (0x0005d6ff) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe0df,	// (0x0005d70b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe0df,	// (0x0005d70b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x0005f2b8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x0005f2b8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe0eb,	// (0x0005d717) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe0eb,	// (0x0005d717) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x166d,	// (0x00050c99) list_medium_line_t2_right_icon_g1

0xb001,	// (0x0005a62d) list_medium_line_t2_right_icon_t1

0xb001,	// (0x0005a62d) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x0005f2bd) list_medium_line_t2_right_icon_t

0x244d,	// (0x00051a79) bg_sp_fs_ctrlbar_pane_ParamLimits

0x244d,	// (0x00051a79) bg_sp_fs_ctrlbar_pane

0x9829,	// (0x00058e55) main_sp_fs_ctrlbar_button_pane_cp01

0x9831,	// (0x00058e5d) main_sp_fs_ctrlbar_ddmenu_pane

0xe13d,	// (0x0005d769) main_sp_fs_ctrlbar_pane_g1

0xe149,	// (0x0005d775) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x0005f2c2) main_sp_fs_ctrlbar_pane_g

0x986d,	// (0x00058e99) main_sp_fs_ctrlbar_pane_t1

0x98b6,	// (0x00058ee2) main_sp_fs_ctrlbar_pane

0x98d7,	// (0x00058f03) main_sp_fs_listscroll_pane_te_cp01

0x98f7,	// (0x00058f23) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x98f7,	// (0x00058f23) popup_sp_fs_action_menu_pane_cp01

0x2225,	// (0x00051851) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2225,	// (0x00051851) bg_sp_fs_highlight_list_pane_cp01

0x991b,	// (0x00058f47) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x991b,	// (0x00058f47) sp_fs_action_menu_list_gene_pane_g1

0xe170,	// (0x0005d79c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe170,	// (0x0005d79c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x0005f2d0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x0005f2d0) sp_fs_action_menu_list_gene_pane_g

0x992a,	// (0x00058f56) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x992a,	// (0x00058f56) sp_fs_action_menu_list_gene_pane_t1

0x9942,	// (0x00058f6e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9942,	// (0x00058f6e) sp_fs_action_menu_list_gene_pane

0xe17d,	// (0x0005d7a9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe17d,	// (0x0005d7a9) popup_sp_fs_action_menu_bg_pane

0x995f,	// (0x00058f8b) sp_fs_action_menu_list_pane_ParamLimits

0x995f,	// (0x00058f8b) sp_fs_action_menu_list_pane

0xe18b,	// (0x0005d7b7) sp_fs_scroll_pane_cp01_ParamLimits

0xe18b,	// (0x0005d7b7) sp_fs_scroll_pane_cp01

0xb001,	// (0x0005a62d) list_medium_line_plain_t2_t1

0xb001,	// (0x0005a62d) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x0005f2bd) list_medium_line_plain_t2_t

0xb001,	// (0x0005a62d) list_medium_line_plain_t3_t1

0xb001,	// (0x0005a62d) list_medium_line_plain_t3_t2

0xb001,	// (0x0005a62d) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x0005f2d5) list_medium_line_plain_t3_t

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g2_g1

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0005e82d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0005e82d) list_medium_line_x2_t2_g2_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t2_g2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t2_g2_t1

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t2_g2_t2_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0005e8a2) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0005e8a2) list_medium_line_x2_t2_g2_t

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t4_g2_g1

0xe1b1,	// (0x0005d7dd) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe1b1,	// (0x0005d7dd) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x0005f2dc) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x0005f2dc) list_medium_line_x2_t4_g2_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g2_t1

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g2_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g2_t2

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g2_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t4_g2_t3

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t4_g2_t4_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0005e83b) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0005e83b) list_medium_line_x2_t4_g2_t

0x166d,	// (0x00050c99) list_medium_line_t3_right_iconx2_g1

0x17cd,	// (0x00050df9) list_medium_line_t3_right_iconx2_g2

0xe1c2,	// (0x0005d7ee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x0005f2e1) list_medium_line_t3_right_iconx2_g

0xb001,	// (0x0005a62d) list_medium_line_t3_right_iconx2_t1

0xb001,	// (0x0005a62d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x0005f2bd) list_medium_line_t3_right_iconx2_t

0xaf95,	// (0x0005a5c1) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x3_t4_g4_g1

0xafa1,	// (0x0005a5cd) list_medium_line_x3_t4_g4_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x3_t4_g4_g2

0xaf95,	// (0x0005a5c1) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x3_t4_g4_g3

0xafa1,	// (0x0005a5cd) list_medium_line_x3_t4_g4_g4_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x0005f2e8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x0005f2e8) list_medium_line_x3_t4_g4_g

0xafad,	// (0x0005a5d9) list_medium_line_x3_t4_g4_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x3_t4_g4_t1

0xafad,	// (0x0005a5d9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x3_t4_g4_t2

0xafad,	// (0x0005a5d9) list_medium_line_x3_t4_g4_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x3_t4_g4_t3

0xe1cb,	// (0x0005d7f7) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe1cb,	// (0x0005d7f7) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x0005f2f1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x0005f2f1) list_medium_line_x3_t4_g4_t

0x997d,	// (0x00058fa9) list_single_dyc_row_text_pane_t1_ParamLimits

0x997d,	// (0x00058fa9) list_single_dyc_row_text_pane_t1

0x99b4,	// (0x00058fe0) list_single_dyc_row_text_pane_t2_ParamLimits

0x99b4,	// (0x00058fe0) list_single_dyc_row_text_pane_t2

0xe1e8,	// (0x0005d814) list_single_dyc_row_text_pane_t3_ParamLimits

0xe1e8,	// (0x0005d814) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x0005f2fa) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x0005f2fa) list_single_dyc_row_text_pane_t

0xe20c,	// (0x0005d838) list_single_dyc_row_pane_g1_ParamLimits

0xe20c,	// (0x0005d838) list_single_dyc_row_pane_g1

0xe218,	// (0x0005d844) list_single_dyc_row_pane_g2_ParamLimits

0xe218,	// (0x0005d844) list_single_dyc_row_pane_g2

0xe224,	// (0x0005d850) list_single_dyc_row_pane_g3_ParamLimits

0xe224,	// (0x0005d850) list_single_dyc_row_pane_g3

0xe230,	// (0x0005d85c) list_single_dyc_row_pane_g4_ParamLimits

0xe230,	// (0x0005d85c) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x0005f307) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x0005f307) list_single_dyc_row_pane_g

0xe23c,	// (0x0005d868) list_single_dyc_row_text_pane_ParamLimits

0xe23c,	// (0x0005d868) list_single_dyc_row_text_pane

0x0e1e,	// (0x0005044a) bg_sp_fs_scroll_pane

0xe25b,	// (0x0005d887) thumb_sp_fs_scroll_pane

0xaf95,	// (0x0005a5c1) list_medium_line_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_g1

0xafad,	// (0x0005a5d9) list_medium_line_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t1

0xaf95,	// (0x0005a5c1) list_medium_line_x2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_g1

0xd1bd,	// (0x0005c7e9) list_medium_line_x2_g2_ParamLimits

0xd1bd,	// (0x0005c7e9) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x0005efe2) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x0005efe2) list_medium_line_x2_g

0x2211,	// (0x0005183d) list_medium_line_x2_t1_ParamLimits

0x2211,	// (0x0005183d) list_medium_line_x2_t1

0xaf95,	// (0x0005a5c1) list_medium_line_x3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x3_g1

0xe264,	// (0x0005d890) list_medium_line_x3_g2_ParamLimits

0xe264,	// (0x0005d890) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x0005f310) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x0005f310) list_medium_line_x3_g

0xe271,	// (0x0005d89d) list_medium_line_x3_t1_ParamLimits

0xe271,	// (0x0005d89d) list_medium_line_x3_t1

0xe285,	// (0x0005d8b1) thumb_sp_fs_scroll_pane_g1

0xe28e,	// (0x0005d8ba) thumb_sp_fs_scroll_pane_g2

0xe297,	// (0x0005d8c3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0005f315) thumb_sp_fs_scroll_pane_g

0xe285,	// (0x0005d8b1) bg_sp_fs_scroll_pane_g1

0xe28e,	// (0x0005d8ba) bg_sp_fs_scroll_pane_g2

0xe297,	// (0x0005d8c3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0005f315) bg_sp_fs_scroll_pane_g

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g4_g1

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t3_g4_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t3_g4_g2

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t3_g4_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_x2_t3_g4_g3

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0005e832) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0005e832) list_medium_line_x2_t3_g4_g

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g4_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g4_t1

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g4_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_x2_t3_g4_t2

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t3_g4_t3_ParamLimits

0xafc0,	// (0x0005a5ec) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0005e826) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0005e826) list_medium_line_x2_t3_g4_t

0xaf95,	// (0x0005a5c1) list_medium_line_g2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_g2_g1

0xd1bd,	// (0x0005c7e9) list_medium_line_g2_g2_ParamLimits

0xd1bd,	// (0x0005c7e9) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x0005efe2) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x0005efe2) list_medium_line_g2_g

0xafad,	// (0x0005a5d9) list_medium_line_g2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_g2_t1

0xaf95,	// (0x0005a5c1) list_medium_line_t3_g2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t3_g2_g1

0xd1bd,	// (0x0005c7e9) list_medium_line_t3_g2_g2_ParamLimits

0xd1bd,	// (0x0005c7e9) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x0005efe2) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x0005efe2) list_medium_line_t3_g2_g

0xafad,	// (0x0005a5d9) list_medium_line_t3_g2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_g2_t1

0xafad,	// (0x0005a5d9) list_medium_line_t3_g2_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_g2_t2

0xafad,	// (0x0005a5d9) list_medium_line_t3_g2_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x0005f31c) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x0005f31c) list_medium_line_t3_g2_t

0xd9de,	// (0x0005d00a) list_medium_line_right_icon_g1

0xb001,	// (0x0005a62d) list_medium_line_right_icon_t1

0xaf95,	// (0x0005a5c1) list_medium_line_t2_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t2_g1

0xafad,	// (0x0005a5d9) list_medium_line_t2_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t2_t1

0xafad,	// (0x0005a5d9) list_medium_line_t2_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x0005efe7) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x0005efe7) list_medium_line_t2_t

0xaf95,	// (0x0005a5c1) list_medium_line_t3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t3_g1

0xafad,	// (0x0005a5d9) list_medium_line_t3_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_t1

0xafad,	// (0x0005a5d9) list_medium_line_t3_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_t2

0xafad,	// (0x0005a5d9) list_medium_line_t3_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x0005f31c) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x0005f31c) list_medium_line_t3_t

0xaf95,	// (0x0005a5c1) list_medium_line_g3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_g3_g1

0xafa1,	// (0x0005a5cd) list_medium_line_g3_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_g3_g2

0xafa1,	// (0x0005a5cd) list_medium_line_g3_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x0005f323) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x0005f323) list_medium_line_g3_g

0xafad,	// (0x0005a5d9) list_medium_line_g3_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_g3_t1

0xaf95,	// (0x0005a5c1) list_medium_line_t2_g3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t2_g3_g1

0xafa1,	// (0x0005a5cd) list_medium_line_t2_g3_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_t2_g3_g2

0xafa1,	// (0x0005a5cd) list_medium_line_t2_g3_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x0005f323) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x0005f323) list_medium_line_t2_g3_g

0xafad,	// (0x0005a5d9) list_medium_line_t2_g3_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t2_g3_t1

0xafad,	// (0x0005a5d9) list_medium_line_t2_g3_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x0005efe7) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x0005efe7) list_medium_line_t2_g3_t

0xaf95,	// (0x0005a5c1) list_medium_line_t3_g3_g1_ParamLimits

0xaf95,	// (0x0005a5c1) list_medium_line_t3_g3_g1

0xafa1,	// (0x0005a5cd) list_medium_line_t3_g3_g2_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_t3_g3_g2

0xafa1,	// (0x0005a5cd) list_medium_line_t3_g3_g3_ParamLimits

0xafa1,	// (0x0005a5cd) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x0005f323) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x0005f323) list_medium_line_t3_g3_g

0xafad,	// (0x0005a5d9) list_medium_line_t3_g3_t1_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_g3_t1

0xafad,	// (0x0005a5d9) list_medium_line_t3_g3_t2_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_g3_t2

0xafad,	// (0x0005a5d9) list_medium_line_t3_g3_t3_ParamLimits

0xafad,	// (0x0005a5d9) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x0005f31c) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x0005f31c) list_medium_line_t3_g3_t

0x166d,	// (0x00050c99) list_medium_line_right_iconx2_g1

0x166d,	// (0x00050c99) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0005f32a) list_medium_line_right_iconx2_g

0xe2a0,	// (0x0005d8cc) list_medium_line_right_iconx2_t1

0x166d,	// (0x00050c99) list_medium_line_t2_right_iconx2_g1

0x166d,	// (0x00050c99) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0005f32a) list_medium_line_t2_right_iconx2_g

0xb001,	// (0x0005a62d) list_medium_line_t2_right_iconx2_t1

0xb001,	// (0x0005a62d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x0005f2bd) list_medium_line_t2_right_iconx2_t

0xb001,	// (0x0005a62d) list_medium_line_x4_t4_t1

0xb001,	// (0x0005a62d) list_medium_line_x4_t4_t2

0xb001,	// (0x0005a62d) list_medium_line_x4_t4_t3

0xb001,	// (0x0005a62d) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0005e8f4) list_medium_line_x4_t4_t

0x9b10,	// (0x0005913c) tport_appsw_pane_ParamLimits

0x9b10,	// (0x0005913c) tport_appsw_pane

0x9b21,	// (0x0005914d) tport_contact_pane_ParamLimits

0x9b21,	// (0x0005914d) tport_contact_pane

0x9b35,	// (0x00059161) tport_listscroll_pane_ParamLimits

0x9b35,	// (0x00059161) tport_listscroll_pane

0x9b4d,	// (0x00059179) cell_tport_appsw_pane_ParamLimits

0x9b4d,	// (0x00059179) cell_tport_appsw_pane

0x247b,	// (0x00051aa7) tport_appsw_pane_g1_ParamLimits

0x247b,	// (0x00051aa7) tport_appsw_pane_g1

0xe2af,	// (0x0005d8db) tport_contact_pane_g1

0xe2b8,	// (0x0005d8e4) tport_contact_pane_t1

0xe2c6,	// (0x0005d8f2) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x0005f32f) tport_contact_pane_t

0xe2d4,	// (0x0005d900) list_tport_pane

0x167f,	// (0x00050cab) scroll_pane_cp_030

0xe2e5,	// (0x0005d911) cell_tport_appsw_pane_g1

0xe2f5,	// (0x0005d921) cell_tport_appsw_pane_t1

0xe303,	// (0x0005d92f) grid_highlight_pane_cp019

0x9b83,	// (0x000591af) list_tport_double_graphic_pane_ParamLimits

0x9b83,	// (0x000591af) list_tport_double_graphic_pane

0x2225,	// (0x00051851) list_highlight_pane_cp023_ParamLimits

0x2225,	// (0x00051851) list_highlight_pane_cp023

0x9b90,	// (0x000591bc) list_tport_double_graphic_pane_g1_ParamLimits

0x9b90,	// (0x000591bc) list_tport_double_graphic_pane_g1

0x9b9d,	// (0x000591c9) list_tport_double_graphic_pane_t1_ParamLimits

0x9b9d,	// (0x000591c9) list_tport_double_graphic_pane_t1

0x9bb2,	// (0x000591de) list_tport_double_graphic_pane_t2_ParamLimits

0x9bb2,	// (0x000591de) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x0005f33b) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x0005f33b) list_tport_double_graphic_pane_t

0x0e1e,	// (0x0005044a) main_cale_note_pane

0x7bf1,	// (0x0005721d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7bf1,	// (0x0005721d) cell_vitu2_function_top_wide_pane_cp01

0x93c6,	// (0x000589f2) wait_bar_pane_cp05_ParamLimits

0x2225,	// (0x00051851) listscroll_cmail_pane

0xe30b,	// (0x0005d937) list_cmail_pane

0x9bc4,	// (0x000591f0) list_cmail_body_pane

0x9bc4,	// (0x000591f0) list_single_cmail_header_caption_pane

0x9bdb,	// (0x00059207) list_single_cmail_header_detail_pane_ParamLimits

0x9bdb,	// (0x00059207) list_single_cmail_header_detail_pane

0xe327,	// (0x0005d953) list_single_cmail_header_caption_pane_t1

0x9c04,	// (0x00059230) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9c04,	// (0x00059230) list_single_cmail_header_detail_pane_g1

0xe335,	// (0x0005d961) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe335,	// (0x0005d961) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x0005f340) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x0005f340) list_single_cmail_header_detail_pane_g

0x9c1a,	// (0x00059246) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9c1a,	// (0x00059246) list_single_cmail_header_detail_pane_t1

0xe372,	// (0x0005d99e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe372,	// (0x0005d99e) list_single_cmail_header_editor_pane_bg

0xe389,	// (0x0005d9b5) list_cmail_body_pane_g1

0xe392,	// (0x0005d9be) list_cmail_body_pane_t1

0xcf81,	// (0x0005c5ad) list_single_cmail_header_editor_pane_bg_g1

0x19eb,	// (0x00051017) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf91,	// (0x0005c5bd) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf89,	// (0x0005c5b5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1b5,	// (0x0005c7e1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfb1,	// (0x0005c5dd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfa1,	// (0x0005c5cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfa9,	// (0x0005c5d5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x19cb,	// (0x00050ff7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9c56,	// (0x00059282) calenote_gesture_pane_ParamLimits

0x9c56,	// (0x00059282) calenote_gesture_pane

0x9c72,	// (0x0005929e) calenote_window_pane_ParamLimits

0x9c72,	// (0x0005929e) calenote_window_pane

0xe3a0,	// (0x0005d9cc) popup_note_window_cp01

0x9c8e,	// (0x000592ba) calenote_swipe_1_pane_ParamLimits

0x9c8e,	// (0x000592ba) calenote_swipe_1_pane

0x9799,	// (0x00058dc5) calenote_swipe_2_pane_ParamLimits

0x9799,	// (0x00058dc5) calenote_swipe_2_pane

0xe077,	// (0x0005d6a3) calenote_swipe_1_pane_g1_ParamLimits

0xe077,	// (0x0005d6a3) calenote_swipe_1_pane_g1

0xe084,	// (0x0005d6b0) calenote_swipe_1_pane_g2_ParamLimits

0xe084,	// (0x0005d6b0) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x0005f2a5) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x0005f2a5) calenote_swipe_1_pane_g

0xe3b2,	// (0x0005d9de) calenote_swipe_1_pane_t1_ParamLimits

0xe3b2,	// (0x0005d9de) calenote_swipe_1_pane_t1

0xe077,	// (0x0005d6a3) calenote_swipe_2_pane_g1_ParamLimits

0xe077,	// (0x0005d6a3) calenote_swipe_2_pane_g1

0xe3d1,	// (0x0005d9fd) calenote_swipe_2_pane_g2_ParamLimits

0xe3d1,	// (0x0005d9fd) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x0005f34c) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x0005f34c) calenote_swipe_2_pane_g

0xe3dd,	// (0x0005da09) calenote_swipe_2_pane_t1_ParamLimits

0xe3dd,	// (0x0005da09) calenote_swipe_2_pane_t1

0x0e1e,	// (0x0005044a) main_mup_navstr_pane

0x6d09,	// (0x00056335) main_mup3_pane_t7_ParamLimits

0x6d09,	// (0x00056335) main_mup3_pane_t7

0xebc8,	// (0x0005e1f4) main_mp4_pane_g6_ParamLimits

0xebc8,	// (0x0005e1f4) main_mp4_pane_g6

0xed7a,	// (0x0005e3a6) main_image3_pane_t4_ParamLimits

0xed7a,	// (0x0005e3a6) main_image3_pane_t4

0x9ca3,	// (0x000592cf) popup_navstr_preview_pane_ParamLimits

0x9ca3,	// (0x000592cf) popup_navstr_preview_pane

0x9cb3,	// (0x000592df) scroll_navstr_pane_ParamLimits

0x9cb3,	// (0x000592df) scroll_navstr_pane

0x0e1e,	// (0x0005044a) bg_popup_preview_window_pane_cp04

0xe404,	// (0x0005da30) popup_navstr_preview_pane_t1

0x9cc7,	// (0x000592f3) scroll_navstr_pane_g1_ParamLimits

0x9cc7,	// (0x000592f3) scroll_navstr_pane_g1

0x9cdb,	// (0x00059307) scroll_navstr_pane_t1_ParamLimits

0x9cdb,	// (0x00059307) scroll_navstr_pane_t1

0xe3a9,	// (0x0005d9d5) bg_button_pane_cp014

0xe3a9,	// (0x0005d9d5) bg_button_pane_cp030

0xdfdb,	// (0x0005d607) list_double_fisheye_pane_g4_ParamLimits

0xdfdb,	// (0x0005d607) list_double_fisheye_pane_g4

0xdfe7,	// (0x0005d613) list_double_fisheye_pane_g5_ParamLimits

0xdfe7,	// (0x0005d613) list_double_fisheye_pane_g5

0xe31b,	// (0x0005d947) sp_fs_scroll_pane_cp03

0xe13d,	// (0x0005d769) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe149,	// (0x0005d775) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x0005f2c2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x986d,	// (0x00058e99) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe313,	// (0x0005d93f) sp_fs_scroll_pane_cp02

0x1691,	// (0x00050cbd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1691,	// (0x00050cbd) popup_sp_fs_calendar_preview_list_single_pane

0x0e1e,	// (0x0005044a) main_cam6_pano_pane

0xe9e5,	// (0x0005e011) main_mup3_pane_ParamLimits

0x0e1e,	// (0x0005044a) main_phacti_pane

0x92b9,	// (0x000588e5) bg_button_pane_cp11

0x92d1,	// (0x000588fd) main_mobtv_info_pane_g2_ParamLimits

0x92d1,	// (0x000588fd) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x0005f222) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x0005f222) main_mobtv_info_pane_g

0x9486,	// (0x00058ab2) sc_clock_pane_t5_ParamLimits

0x9486,	// (0x00058ab2) sc_clock_pane_t5

0x9531,	// (0x00058b5d) main_radioblah_pane_g1_ParamLimits

0xdf40,	// (0x0005d56c) main_radioblah_pane_t3_ParamLimits

0xdf40,	// (0x0005d56c) main_radioblah_pane_t3

0xdf58,	// (0x0005d584) main_radioblah_pane_t4_ParamLimits

0xdf58,	// (0x0005d584) main_radioblah_pane_t4

0x9559,	// (0x00058b85) main_radioblah_text_pane_ParamLimits

0x9559,	// (0x00058b85) main_radioblah_text_pane

0x956b,	// (0x00058b97) main_radioblah_info_pane_g1_ParamLimits

0x95fe,	// (0x00058c2a) main_radioblah_info_pane_t4_ParamLimits

0x95fe,	// (0x00058c2a) main_radioblah_info_pane_t4

0x2225,	// (0x00051851) main_sp_fs_calendar_pane

0x9cf1,	// (0x0005931d) main_phacti_pane_g1

0x9cf9,	// (0x00059325) phacti_note_pane_ParamLimits

0x9cf9,	// (0x00059325) phacti_note_pane

0xe41b,	// (0x0005da47) phacti_term_pane_ParamLimits

0xe41b,	// (0x0005da47) phacti_term_pane

0xe430,	// (0x0005da5c) phacti_note_pane_t1_ParamLimits

0xe430,	// (0x0005da5c) phacti_note_pane_t1

0xe447,	// (0x0005da73) phacti_term_pane_g1

0xe44f,	// (0x0005da7b) phacti_term_pane_t1_ParamLimits

0xe44f,	// (0x0005da7b) phacti_term_pane_t1

0xe479,	// (0x0005daa5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe481,	// (0x0005daad) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x0005f356) popup_sp_fs_calendar_preview_list_single_pane_g

0xe489,	// (0x0005dab5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe489,	// (0x0005dab5) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe49f,	// (0x0005dacb) aid_popup_sp_fs_bg_corner_pane

0x17cd,	// (0x00050df9) popup_sp_fs_calendar_preview_bg_pane_g1

0x0e1e,	// (0x0005044a) popup_sp_fs_calendar_preview_bg_pane

0xe4a7,	// (0x0005dad3) popup_sp_fs_calendar_preview_list_pane

0x244d,	// (0x00051a79) bg_main_sp_fs_cale_pane_ParamLimits

0x244d,	// (0x00051a79) bg_main_sp_fs_cale_pane

0xe4b8,	// (0x0005dae4) listscroll_cale_mrui_pane_ParamLimits

0xe4b8,	// (0x0005dae4) listscroll_cale_mrui_pane

0xe4cd,	// (0x0005daf9) listscroll_sp_fs_schedule_track_pane

0xe4d6,	// (0x0005db02) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe4d6,	// (0x0005db02) main_sp_fs_ctrlbar_pane_cp01

0xe4e9,	// (0x0005db15) main_sp_fs_ribbon_pane

0xe4f1,	// (0x0005db1d) popup_sp_fs_cale_preview_window

0x9d5c,	// (0x00059388) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9d5c,	// (0x00059388) list_single_sp_fs_schedule_track_pane

0x2225,	// (0x00051851) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2225,	// (0x00051851) bg_sp_fs_highlight_list_pane_cp03

0x9d70,	// (0x0005939c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9d70,	// (0x0005939c) list_single_sp_fs_schedule_track_pane_g1

0x9d7c,	// (0x000593a8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9d7c,	// (0x000593a8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x0005f35b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x0005f35b) list_single_sp_fs_schedule_track_pane_g

0x9d88,	// (0x000593b4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9d88,	// (0x000593b4) list_single_sp_fs_schedule_track_pane_t1

0x9da2,	// (0x000593ce) sp_fs_schedule_track_pane_ParamLimits

0x9da2,	// (0x000593ce) sp_fs_schedule_track_pane

0xe500,	// (0x0005db2c) sp_fs_schedule_track_pane_g1

0xe508,	// (0x0005db34) sp_fs_schedule_track_pane_g2

0xe510,	// (0x0005db3c) sp_fs_schedule_track_pane_g3

0xe518,	// (0x0005db44) sp_fs_schedule_track_pane_g4

0xe520,	// (0x0005db4c) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x0005f360) sp_fs_schedule_track_pane_g

0xcf81,	// (0x0005c5ad) bg_sp_fs_schedule_viewer_highlight_g1

0x19eb,	// (0x00051017) bg_sp_fs_schedule_viewer_highlight_g2

0xcf89,	// (0x0005c5b5) bg_sp_fs_schedule_viewer_highlight_g3

0xcf91,	// (0x0005c5bd) bg_sp_fs_schedule_viewer_highlight_g4

0xd1b5,	// (0x0005c7e1) bg_sp_fs_schedule_viewer_highlight_g5

0xcfa1,	// (0x0005c5cd) bg_sp_fs_schedule_viewer_highlight_g6

0xcfa9,	// (0x0005c5d5) bg_sp_fs_schedule_viewer_highlight_g7

0xcfb1,	// (0x0005c5dd) bg_sp_fs_schedule_viewer_highlight_g8

0x19cb,	// (0x00050ff7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x0005f36b) bg_sp_fs_schedule_viewer_highlight_g

0x0e1e,	// (0x0005044a) bg_main_sp_fs_ribbon_pane

0x9db3,	// (0x000593df) main_sp_fs_ribbon_pane_g1

0xe528,	// (0x0005db54) main_sp_fs_ribbon_pane_t1

0x9dbc,	// (0x000593e8) main_sp_fs_ribbon_pane_t2

0xe537,	// (0x0005db63) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x0005f37e) main_sp_fs_ribbon_pane_t

0xe546,	// (0x0005db72) main_sp_fs_ribbon_scheduler_pane

0xe54e,	// (0x0005db7a) bg_main_sp_fs_ribbon_pane_g1

0xe557,	// (0x0005db83) bg_main_sp_fs_ribbon_pane_g2

0xe560,	// (0x0005db8c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x0005f385) bg_main_sp_fs_ribbon_pane_g

0xe568,	// (0x0005db94) main_sp_fs_ribbon_scheduler_pane_g1

0xe571,	// (0x0005db9d) main_sp_fs_ribbon_scheduler_pane_g2

0xe57a,	// (0x0005dba6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x0005f38c) main_sp_fs_ribbon_scheduler_pane_g

0xe583,	// (0x0005dbaf) list_cale_mrui_pane

0x9dcb,	// (0x000593f7) sp_fs_scroll_pane_cp07_ParamLimits

0x9dcb,	// (0x000593f7) sp_fs_scroll_pane_cp07

0x9de3,	// (0x0005940f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9de3,	// (0x0005940f) bg_sp_fs_schedule_viewer_highlight

0xe590,	// (0x0005dbbc) list_single_sp_fs_schedule_track_pane_cp01

0xe598,	// (0x0005dbc4) list_sp_fs_schedule_track_pane

0xe5a0,	// (0x0005dbcc) sp_fs_scroll_pane_cp06_ParamLimits

0xe5a0,	// (0x0005dbcc) sp_fs_scroll_pane_cp06

0x17cd,	// (0x00050df9) bgmain_sp_fs_calendar_pane_g1

0x9df3,	// (0x0005941f) list_single_cale_mrui_pane_ParamLimits

0x9df3,	// (0x0005941f) list_single_cale_mrui_pane

0xe5b2,	// (0x0005dbde) list_single_cale_mrui_row_pane_ParamLimits

0xe5b2,	// (0x0005dbde) list_single_cale_mrui_row_pane

0x9e14,	// (0x00059440) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9e14,	// (0x00059440) list_single_cale_mrui_row_pane_g1

0x9e4c,	// (0x00059478) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9e4c,	// (0x00059478) list_single_cale_mrui_row_pane_t1

0x9e5e,	// (0x0005948a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9e5e,	// (0x0005948a) list_single_cale_mrui_row_pane_t2

0x9ec4,	// (0x000594f0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9ec4,	// (0x000594f0) list_single_cale_mrui_row_pane_t3

0x9ef3,	// (0x0005951f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9ef3,	// (0x0005951f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x0005f39a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x0005f39a) list_single_cale_mrui_row_pane_t

0x9f22,	// (0x0005954e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9f22,	// (0x0005954e) list_single_cmail_header_editor_pane_bg_cp01

0x9f46,	// (0x00059572) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9f46,	// (0x00059572) list_single_cmail_header_editor_pane_bg_cp02

0x9f64,	// (0x00059590) main_radioblah_text_pane_t1_ParamLimits

0x9f64,	// (0x00059590) main_radioblah_text_pane_t1

0xe5d5,	// (0x0005dc01) cam6_indi_pane_cp01

0xe5dd,	// (0x0005dc09) cam6_mode_pane_cp01

0xe5e5,	// (0x0005dc11) cam6_pano_pane

0xe5ee,	// (0x0005dc1a) cam6_zoom_pane_cp01

0xe5f6,	// (0x0005dc22) cam6_pano_image_pane

0xe5ff,	// (0x0005dc2b) cam6_pano_pane_g1

0xdca7,	// (0x0005d2d3) cam6_pano_pane_g2

0xe608,	// (0x0005dc34) cam6_pano_pane_g3

0xe611,	// (0x0005dc3d) cam6_pano_pane_g4

0xcbc2,	// (0x0005c1ee) cam6_pano_pane_g5

0xe61a,	// (0x0005dc46) cam6_pano_pane_g6

0xe622,	// (0x0005dc4e) cam6_pano_pane_g7

0xe62a,	// (0x0005dc56) cam6_pano_pane_g8

0xe633,	// (0x0005dc5f) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x0005f3a3) cam6_pano_pane_g

0x0e1e,	// (0x0005044a) main_browser_tag_pane

0xe3fc,	// (0x0005da28) grid_navstr_albumart_pane

0xe63c,	// (0x0005dc68) cell_navstr_albumart_pane_ParamLimits

0xe63c,	// (0x0005dc68) cell_navstr_albumart_pane

0x22c0,	// (0x000518ec) cell_navstr_albumart_pane_g1

0xc054,	// (0x0005b680) cell_navstr_albumart_pane_g2

0xc064,	// (0x0005b690) cell_navstr_albumart_pane_g3

0xc05c,	// (0x0005b688) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x0005f3b6) cell_navstr_albumart_pane_g

0x9f7d,	// (0x000595a9) bt_list_pane_ParamLimits

0x9f7d,	// (0x000595a9) bt_list_pane

0x9f90,	// (0x000595bc) bt_list_pane_t1

0x9f9f,	// (0x000595cb) bt_list_pane_t2

0x0001,

0xfd93,	// (0x0005f3bf) bt_list_pane_t

0x0e1e,	// (0x0005044a) main_cale_prevew_pane

0x9fae,	// (0x000595da) popup_cale_preview_window_ParamLimits

0x9fae,	// (0x000595da) popup_cale_preview_window

0x2225,	// (0x00051851) bg_popup_preview_window_pane_cp05_ParamLimits

0x2225,	// (0x00051851) bg_popup_preview_window_pane_cp05

0xe653,	// (0x0005dc7f) list_cale_preview_pane_ParamLimits

0xe653,	// (0x0005dc7f) list_cale_preview_pane

0x9fc3,	// (0x000595ef) list_double_cale_preview_pane_ParamLimits

0x9fc3,	// (0x000595ef) list_double_cale_preview_pane

0x9fd4,	// (0x00059600) list_single_cale_preview_pane_ParamLimits

0x9fd4,	// (0x00059600) list_single_cale_preview_pane

0xe65f,	// (0x0005dc8b) list_single_cale_preview_pane_g1

0xe667,	// (0x0005dc93) list_single_cale_preview_pane_t1_ParamLimits

0xe667,	// (0x0005dc93) list_single_cale_preview_pane_t1

0x9fe8,	// (0x00059614) list_double_cale_preview_pane_g1

0x9ff0,	// (0x0005961c) list_double_cale_preview_pane_t1_ParamLimits

0x9ff0,	// (0x0005961c) list_double_cale_preview_pane_t1

0xa005,	// (0x00059631) list_double_cale_preview_pane_t2_ParamLimits

0xa005,	// (0x00059631) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x0005f3c4) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x0005f3c4) list_double_cale_preview_pane_t

0x0e1e,	// (0x0005044a) main_ezdial_pane

0x2225,	// (0x00051851) main_sp_fs_email_pane_ParamLimits

0x97e3,	// (0x00058e0f) cmail_ddmenu_btn01_pane_ParamLimits

0x97e3,	// (0x00058e0f) cmail_ddmenu_btn01_pane

0x97f6,	// (0x00058e22) cmail_ddmenu_btn02_pane_ParamLimits

0x97f6,	// (0x00058e22) cmail_ddmenu_btn02_pane

0x9819,	// (0x00058e45) cmail_ddmenu_btn03_pane_ParamLimits

0x9819,	// (0x00058e45) cmail_ddmenu_btn03_pane

0x98b6,	// (0x00058ee2) main_sp_fs_ctrlbar_pane_ParamLimits

0x98d7,	// (0x00058f03) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9bc4,	// (0x000591f0) list_cmail_body_pane_ParamLimits

0x22c8,	// (0x000518f4) bg_button_pane_cp12

0xe341,	// (0x0005d96d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe341,	// (0x0005d96d) list_single_cmail_header_detail_pane_g3

0xe34e,	// (0x0005d97a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe34e,	// (0x0005d97a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x0005f347) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x0005f347) list_single_cmail_header_detail_pane_t

0xe464,	// (0x0005da90) phacti_term_pane_t2_ParamLimits

0xe464,	// (0x0005da90) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x0005f351) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x0005f351) phacti_term_pane_t

0xe67c,	// (0x0005dca8) aid_size_list_single_double

0xa01d,	// (0x00059649) popup_ezdial_listscroll_window

0xa033,	// (0x0005965f) popup_number_entry_window_cp01

0x1751,	// (0x00050d7d) bg_popup_call_pane_cp09

0xe688,	// (0x0005dcb4) ezdial_list_pane

0xe690,	// (0x0005dcbc) scroll_pane_cp23

0x244d,	// (0x00051a79) bg_button_pane_cp028_ParamLimits

0x244d,	// (0x00051a79) bg_button_pane_cp028

0xa03f,	// (0x0005966b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa03f,	// (0x0005966b) cmail_ddmenu_btn01_pane_g1

0xa04b,	// (0x00059677) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa04b,	// (0x00059677) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x0005f3c9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x0005f3c9) cmail_ddmenu_btn01_pane_g

0xe698,	// (0x0005dcc4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe698,	// (0x0005dcc4) cmail_ddmenu_btn01_pane_t1

0x244d,	// (0x00051a79) bg_button_pane_cp029_ParamLimits

0x244d,	// (0x00051a79) bg_button_pane_cp029

0xa057,	// (0x00059683) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa057,	// (0x00059683) cmail_ddmenu_btn02_pane_g1

0xa06f,	// (0x0005969b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa06f,	// (0x0005969b) cmail_ddmenu_btn02_pane_t1

0x2225,	// (0x00051851) bg_button_pane_cp031_ParamLimits

0x2225,	// (0x00051851) bg_button_pane_cp031

0xa057,	// (0x00059683) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa057,	// (0x00059683) cmail_ddmenu_btn03_pane_g1

0xa06f,	// (0x0005969b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa06f,	// (0x0005969b) cmail_ddmenu_btn03_pane_t1

0x2211,	// (0x0005183d) cell_dialer2_keypad_pane_t1_ParamLimits

0xcbf0,	// (0x0005c21c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xcbf0,	// (0x0005c21c) cell_dialer2_keypad_pane_t1_copy1

0x9125,	// (0x00058751) ncimui_group_button_pane

0x2225,	// (0x00051851) main_sp_fs_calendar_pane_ParamLimits

0x9bc4,	// (0x000591f0) list_single_cmail_header_caption_pane_ParamLimits

0xe4af,	// (0x0005dadb) aid_recal_txt_sm_pane

0x0e1e,	// (0x0005044a) mian_recal_day_pane

0xe4f1,	// (0x0005db1d) popup_sp_fs_cale_preview_window_ParamLimits

0xe6ad,	// (0x0005dcd9) list_recal_day_pane

0xe6ef,	// (0x0005dd1b) list_single_recal_day_pane_ParamLimits

0xe6ef,	// (0x0005dd1b) list_single_recal_day_pane

0xe701,	// (0x0005dd2d) list_single_recal_day_pane_g1_ParamLimits

0xe701,	// (0x0005dd2d) list_single_recal_day_pane_g1

0xe70d,	// (0x0005dd39) list_single_recal_day_pane_g2_ParamLimits

0xe70d,	// (0x0005dd39) list_single_recal_day_pane_g2

0xe719,	// (0x0005dd45) list_single_recal_day_pane_g3_ParamLimits

0xe719,	// (0x0005dd45) list_single_recal_day_pane_g3

0xa093,	// (0x000596bf) list_single_recal_day_pane_g4_ParamLimits

0xa093,	// (0x000596bf) list_single_recal_day_pane_g4

0xe725,	// (0x0005dd51) list_single_recal_day_pane_g5_ParamLimits

0xe725,	// (0x0005dd51) list_single_recal_day_pane_g5

0xa0ab,	// (0x000596d7) list_single_recal_day_pane_g6_ParamLimits

0xa0ab,	// (0x000596d7) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x0005f3d8) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x0005f3d8) list_single_recal_day_pane_g

0xe739,	// (0x0005dd65) list_single_recal_day_pane_t1

0xa0b7,	// (0x000596e3) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x0005f3e3) list_single_recal_day_pane_t

0xa0c9,	// (0x000596f5) ncimui_query_button_pane_ParamLimits

0xa0c9,	// (0x000596f5) ncimui_query_button_pane

0xa0d9,	// (0x00059705) ncimui_query_button_pane_t1_ParamLimits

0xa0d9,	// (0x00059705) ncimui_query_button_pane_t1

0xe74b,	// (0x0005dd77) ncimui_query_button_pane_t2_ParamLimits

0xe74b,	// (0x0005dd77) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x0005f3e8) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x0005f3e8) ncimui_query_button_pane_t

0xa0ec,	// (0x00059718) query_button_pane_ParamLimits

0xa0ec,	// (0x00059718) query_button_pane

0x0e1e,	// (0x0005044a) bg_button_pane_cp0028

0xe75e,	// (0x0005dd8a) query_button_pane_t1

0x612e,	// (0x0005575a) main_tport_pane_ParamLimits

0x9ad7,	// (0x00059103) bg_popup_window_pane_cp01_ParamLimits

0x9ad7,	// (0x00059103) bg_popup_window_pane_cp01

0x9aee,	// (0x0005911a) heading_pane_cp08_ParamLimits

0x9aee,	// (0x0005911a) heading_pane_cp08

0x9aff,	// (0x0005912b) heading_pane_cp07_ParamLimits

0x9aff,	// (0x0005912b) heading_pane_cp07

0xe2e5,	// (0x0005d911) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x0005f334) cell_tport_appsw_pane_g

0x5817,	// (0x00054e43) input_candi_list_open_g1

0x1b98,	// (0x000511c4) list_cale_time_pane_g6_ParamLimits

0x1b98,	// (0x000511c4) list_cale_time_pane_g6

0x679a,	// (0x00055dc6) aid_size_touch_calib_1_ParamLimits

0x679a,	// (0x00055dc6) aid_size_touch_calib_1

0x67ac,	// (0x00055dd8) aid_size_touch_calib_2_ParamLimits

0x67ac,	// (0x00055dd8) aid_size_touch_calib_2

0x67c2,	// (0x00055dee) aid_size_touch_calib_3_ParamLimits

0x67c2,	// (0x00055dee) aid_size_touch_calib_3

0x67da,	// (0x00055e06) aid_size_touch_calib_4_ParamLimits

0x67da,	// (0x00055e06) aid_size_touch_calib_4

0x67ee,	// (0x00055e1a) main_touch_calib_button_group_pane_ParamLimits

0x67ee,	// (0x00055e1a) main_touch_calib_button_group_pane

0x6806,	// (0x00055e32) main_touch_calib_pane_g1_ParamLimits

0x6818,	// (0x00055e44) main_touch_calib_pane_g2_ParamLimits

0x682a,	// (0x00055e56) main_touch_calib_pane_g3_ParamLimits

0x683c,	// (0x00055e68) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x0005ed2f) main_touch_calib_pane_g_ParamLimits

0x684e,	// (0x00055e7a) main_touch_calib_pane_t1_ParamLimits

0x6866,	// (0x00055e92) main_touch_calib_pane_t2_ParamLimits

0x687e,	// (0x00055eaa) main_touch_calib_pane_t3_ParamLimits

0x6890,	// (0x00055ebc) main_touch_calib_pane_t4_ParamLimits

0x68a2,	// (0x00055ece) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x0005ed38) main_touch_calib_pane_t_ParamLimits

0xc9c5,	// (0x0005bff1) list_single_fp_cale_pane_g3_ParamLimits

0xc9c5,	// (0x0005bff1) list_single_fp_cale_pane_g3

0xe9e5,	// (0x0005e011) bg_button_pane_cp012_ParamLimits

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp03_ParamLimits

0x839c,	// (0x000579c8) cell_vitu2_function_top_pane_g1_ParamLimits

0xe9e5,	// (0x0005e011) bg_vkb2_func_pane_cp04_ParamLimits

0x90b5,	// (0x000586e1) main_ncimui_button_group_pane_ParamLimits

0x90b5,	// (0x000586e1) main_ncimui_button_group_pane

0x9113,	// (0x0005873f) main_ncimui_pane_t3_ParamLimits

0x9113,	// (0x0005873f) main_ncimui_pane_t3

0xe412,	// (0x0005da3e) phacti_button_group_pane

0xe67c,	// (0x0005dca8) aid_size_list_single_double_ParamLimits

0xa01d,	// (0x00059649) popup_ezdial_listscroll_window_ParamLimits

0xa033,	// (0x0005965f) popup_number_entry_window_cp01_ParamLimits

0xa0fe,	// (0x0005972a) phacti_button_pane_ParamLimits

0xa0fe,	// (0x0005972a) phacti_button_pane

0x0e1e,	// (0x0005044a) bg_button_pane_cp14

0xe76c,	// (0x0005dd98) phacti_button_pane_t1

0xa10d,	// (0x00059739) main_touch_calib_button_pane_ParamLimits

0xa10d,	// (0x00059739) main_touch_calib_button_pane

0x1584,	// (0x00050bb0) bg_button_pane_cp18_ParamLimits

0x1584,	// (0x00050bb0) bg_button_pane_cp18

0xa128,	// (0x00059754) main_touch_calib_button_pane_t1_ParamLimits

0xa128,	// (0x00059754) main_touch_calib_button_pane_t1

0xa13e,	// (0x0005976a) main_touch_calib_button_pane_t2_ParamLimits

0xa13e,	// (0x0005976a) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x0005f3ed) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x0005f3ed) main_touch_calib_button_pane_t

0x0e1e,	// (0x0005044a) cell_ncimui_button_pane

0x0e1e,	// (0x0005044a) bg_button_pane_cp032

0xe77a,	// (0x0005dda6) cell_ncimui_button_pane_t1

0xed5a,	// (0x0005e386) image3_infobar_pane_ParamLimits

0xed5a,	// (0x0005e386) image3_infobar_pane

0x94ae,	// (0x00058ada) fs_bigclock_status_pane_ParamLimits

0x94ae,	// (0x00058ada) fs_bigclock_status_pane

0x94bb,	// (0x00058ae7) main_fs_bigclock_clock_pane_ParamLimits

0x94bb,	// (0x00058ae7) main_fs_bigclock_clock_pane

0x94dd,	// (0x00058b09) main_fs_bigclock_indi_pane_ParamLimits

0x94dd,	// (0x00058b09) main_fs_bigclock_indi_pane

0x9507,	// (0x00058b33) main_fs_bigclock_swipe_pane_ParamLimits

0x9507,	// (0x00058b33) main_fs_bigclock_swipe_pane

0x0e1e,	// (0x0005044a) main_fs_clock_dumped_data

0xddb4,	// (0x0005d3e0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xddb4,	// (0x0005d3e0) list_single_fs_bigclock_indicator_pane_g1

0xddce,	// (0x0005d3fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddce,	// (0x0005d3fa) list_single_fs_bigclock_indicator_pane_g2

0xdde8,	// (0x0005d414) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdde8,	// (0x0005d414) list_single_fs_bigclock_indicator_pane_g3

0xde02,	// (0x0005d42e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xde02,	// (0x0005d42e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x0005f256) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x0005f256) list_single_fs_bigclock_indicator_pane_g

0xde2b,	// (0x0005d457) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde2b,	// (0x0005d457) list_single_fs_bigclock_indicator_pane_t1

0xde53,	// (0x0005d47f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde53,	// (0x0005d47f) list_single_fs_bigclock_indicator_pane_t2

0xde7b,	// (0x0005d4a7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde7b,	// (0x0005d4a7) list_single_fs_bigclock_indicator_pane_t3

0xdea3,	// (0x0005d4cf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdea3,	// (0x0005d4cf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x0005f261) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x0005f261) list_single_fs_bigclock_indicator_pane_t

0xe788,	// (0x0005ddb4) image3_infobar_fav_pane_ParamLimits

0xe788,	// (0x0005ddb4) image3_infobar_fav_pane

0xe798,	// (0x0005ddc4) image3_infobar_loc_pane_ParamLimits

0xe798,	// (0x0005ddc4) image3_infobar_loc_pane

0xe7ac,	// (0x0005ddd8) image3_infobar_time_pane_ParamLimits

0xe7ac,	// (0x0005ddd8) image3_infobar_time_pane

0x17cd,	// (0x00050df9) image3_infobar_time_pane_g1

0xe7bc,	// (0x0005dde8) image3_infobar_time_pane_t1

0x17cd,	// (0x00050df9) image3_infobar_loc_pane_g1

0xe7ca,	// (0x0005ddf6) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x0005f3f2) image3_infobar_loc_pane_g

0xe7d2,	// (0x0005ddfe) image3_infobar_loc_pane_t1

0x17cd,	// (0x00050df9) image3_infobar_fav_pane_g1

0xe7e0,	// (0x0005de0c) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x0005f3f7) image3_infobar_fav_pane_g

0xe7e8,	// (0x0005de14) fs_bigclock_status_battery_pane

0xe7f1,	// (0x0005de1d) fs_bigclock_status_signal_pane

0xe7fa,	// (0x0005de26) fs_bigclock_status_title_pane

0xe803,	// (0x0005de2f) fs_bigclock_status_signal_pane_g1

0xe80c,	// (0x0005de38) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x0005f3fc) fs_bigclock_status_signal_pane_g

0xe814,	// (0x0005de40) fs_bigclock_status_battery_pane_g1

0xe81d,	// (0x0005de49) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x0005f401) fs_bigclock_status_battery_pane_g

0xe825,	// (0x0005de51) fs_bigclock_status_title_pane_t1

0xa15c,	// (0x00059788) main_fs_bigclock_clock_pane_g1

0xa16e,	// (0x0005979a) main_fs_bigclock_clock_pane_g2

0xa17f,	// (0x000597ab) main_fs_bigclock_clock_pane_g3

0xa17f,	// (0x000597ab) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x0005f406) main_fs_bigclock_clock_pane_g

0xa192,	// (0x000597be) main_fs_bigclock_clock_pane_t1

0xa1ad,	// (0x000597d9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x0005f40f) main_fs_bigclock_clock_pane_t

0xe833,	// (0x0005de5f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe833,	// (0x0005de5f) list_single_fs_bigclock_indicator_pane

0xe844,	// (0x0005de70) list_single_fs_bigclock_pane_ParamLimits

0xe844,	// (0x0005de70) list_single_fs_bigclock_pane

0xefea,	// (0x0005e616) main_fs_bigclock_indicator_pane_t1

0xeff9,	// (0x0005e625) list_single_fs_bigclock_pane_g1

0xf001,	// (0x0005e62d) list_single_fs_bigclock_pane_t1

0x17cd,	// (0x00050df9) main_fs_bigclock_swipe_pane_g1

0xf041,	// (0x0005e66d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x0005f420) main_fs_bigclock_swipe_pane_g

0xf049,	// (0x0005e675) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xf049,	// (0x0005e675) main_fs_bigclock_swipe_pane_t1

0x5335,	// (0x00054961) call_type_pane_ParamLimits

0x0e1e,	// (0x0005044a) main_btmg_pane

0x9e40,	// (0x0005946c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9e40,	// (0x0005946c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x0005f393) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x0005f393) list_single_cale_mrui_row_pane_g

0xe6d6,	// (0x0005dd02) list_recal_vselct_arw_lo_pane

0xe6de,	// (0x0005dd0a) list_recal_vselct_arw_up_pane

0xe6e6,	// (0x0005dd12) list_recal_vselct_pane

0xf066,	// (0x0005e692) btmg_button_pane

0xa20d,	// (0x00059839) main_btmg_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp044

0xf06e,	// (0x0005e69a) btmg_button_pane_t1

0xc287,	// (0x0005b8b3) aid_listscroll_gen

0x2225,	// (0x00051851) main_cntbar_detail_pane

0xe30b,	// (0x0005d937) list_cmail_folder_pane

0xe31b,	// (0x0005d947) sp_fs_scroll_pane_cp03_ParamLimits

0x9bc4,	// (0x000591f0) list_single_fs_dyc_pane_cp01_ParamLimits

0x9bc4,	// (0x000591f0) list_single_fs_dyc_pane_cp01

0xf07c,	// (0x0005e6a8) aid_size_cmail_indent

0xe861,	// (0x0005de8d) list_single_dyc_row_pane_cp01

0xa23d,	// (0x00059869) cntbar_detail_list_pane_ParamLimits

0xa23d,	// (0x00059869) cntbar_detail_list_pane

0xa283,	// (0x000598af) main_cntbar_detail_cont_pane_ParamLimits

0xa283,	// (0x000598af) main_cntbar_detail_cont_pane

0xa297,	// (0x000598c3) scroll_pane_cp032_ParamLimits

0xa297,	// (0x000598c3) scroll_pane_cp032

0xa2a3,	// (0x000598cf) cntbar_detail_list_event_pane_ParamLimits

0xa2a3,	// (0x000598cf) cntbar_detail_list_event_pane

0xa24d,	// (0x00059879) cntbar_detail_list_shct_pane

0x0069,	// (0x0004f695) aid_list_gen

0x167f,	// (0x00050cab) aid_scroll

0xd4d0,	// (0x0005cafc) aid_size_touch_scroll_bar

0xd4fb,	// (0x0005cb27) aid_list_double

0x89a9,	// (0x00057fd5) aid_list_single

0x89a9,	// (0x00057fd5) aid_list_single_lg

0xa2b4,	// (0x000598e0) aid_list_z_g_a_sm

0xa2bc,	// (0x000598e8) aid_list_z_g_d

0xa2c4,	// (0x000598f0) aid_txt_z_prm

0xe86a,	// (0x0005de96) aid_txt_z_prm_cp01

0xe878,	// (0x0005dea4) aid_txt_z_sec

0xa2d2,	// (0x000598fe) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa2d2,	// (0x000598fe) main_cntbar_detail_cont_pane_g1

0xa2e6,	// (0x00059912) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa2e6,	// (0x00059912) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x0005f425) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x0005f425) main_cntbar_detail_cont_pane_g

0x00a9,	// (0x0004f6d5) main_cntbar_detail_cont_pane_t1

0x00b7,	// (0x0004f6e3) main_cntbar_detail_cont_pane_t2

0x00c5,	// (0x0004f6f1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x0005f42a) main_cntbar_detail_cont_pane_t

0xa2f6,	// (0x00059922) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa2f6,	// (0x00059922) cell_cntbar_detail_list_shct_pane

0x00e5,	// (0x0004f711) cntbar_detail_list_shct_pane_g1

0x00ee,	// (0x0004f71a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x0005f431) cntbar_detail_list_shct_pane_g

0xa308,	// (0x00059934) cntbar_detail_list_event_pane_g1_ParamLimits

0xa308,	// (0x00059934) cntbar_detail_list_event_pane_g1

0xa314,	// (0x00059940) cntbar_detail_list_event_pane_g2_ParamLimits

0xa314,	// (0x00059940) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x0005f436) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x0005f436) cntbar_detail_list_event_pane_g

0xa380,	// (0x000599ac) cntbar_detail_list_event_pane_t1_ParamLimits

0xa380,	// (0x000599ac) cntbar_detail_list_event_pane_t1

0xa395,	// (0x000599c1) cntbar_detail_list_event_pane_t2_ParamLimits

0xa395,	// (0x000599c1) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x0005f443) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x0005f443) cntbar_detail_list_event_pane_t

0x17cd,	// (0x00050df9) cell_cntbar_detail_list_shct_pane_g1

0x211a,	// (0x00051746) navi_pane_mv_g3

0x2225,	// (0x00051851) main_cntbar_detail_pane_ParamLimits

0x0e1e,	// (0x0005044a) main_notif_wgt_pane

0xeb56,	// (0x0005e182) aid_tch_main_mp4_pane_g4

0xed52,	// (0x0005e37e) popup_slider_window_cp02

0xe6cc,	// (0x0005dcf8) list_recal_day_event_pane

0xa215,	// (0x00059841) cntbar_detail_btn_pane_ParamLimits

0xa215,	// (0x00059841) cntbar_detail_btn_pane

0xa228,	// (0x00059854) cntbar_detail_btn_pane_cp01_ParamLimits

0xa228,	// (0x00059854) cntbar_detail_btn_pane_cp01

0xa24d,	// (0x00059879) cntbar_detail_list_shct_pane_ParamLimits

0xa25d,	// (0x00059889) cntbar_detail_pane_g1_ParamLimits

0xa25d,	// (0x00059889) cntbar_detail_pane_g1

0xa26d,	// (0x00059899) cntbar_detail_pane_t1_ParamLimits

0xa26d,	// (0x00059899) cntbar_detail_pane_t1

0xa320,	// (0x0005994c) cntbar_detail_list_event_pane_g3_ParamLimits

0xa320,	// (0x0005994c) cntbar_detail_list_event_pane_g3

0xa338,	// (0x00059964) cntbar_detail_list_event_pane_g4_ParamLimits

0xa338,	// (0x00059964) cntbar_detail_list_event_pane_g4

0xa350,	// (0x0005997c) cntbar_detail_list_event_pane_g5_ParamLimits

0xa350,	// (0x0005997c) cntbar_detail_list_event_pane_g5

0xa368,	// (0x00059994) cntbar_detail_list_event_pane_g6_ParamLimits

0xa368,	// (0x00059994) cntbar_detail_list_event_pane_g6

0xa3aa,	// (0x000599d6) cntbar_detail_list_event_pane_t3_ParamLimits

0xa3aa,	// (0x000599d6) cntbar_detail_list_event_pane_t3

0xa3bc,	// (0x000599e8) popup_notif_wgt_window_ParamLimits

0xa3bc,	// (0x000599e8) popup_notif_wgt_window

0xa3d1,	// (0x000599fd) popup_submenu_window_cp01_ParamLimits

0xa3d1,	// (0x000599fd) popup_submenu_window_cp01

0x1751,	// (0x00050d7d) bg_popup_window_pane_cp10

0x01c5,	// (0x0004f7f1) listscroll_notif_wgt_pane

0x01d6,	// (0x0004f802) list_notif_wgt_window

0x01df,	// (0x0004f80b) scroll_pane_cp033

0xa3e1,	// (0x00059a0d) list_notif_wgt_row_pane_ParamLimits

0xa3e1,	// (0x00059a0d) list_notif_wgt_row_pane

0x01fa,	// (0x0004f826) aid_size_list_notif_wgt_del

0x0207,	// (0x0004f833) list_notif_wgt_row_pane_g1

0x0213,	// (0x0004f83f) list_notif_wgt_row_pane_g2

0x0227,	// (0x0004f853) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x0005f44a) list_notif_wgt_row_pane_g

0x0234,	// (0x0004f860) list_notif_wgt_row_pane_t1

0x024a,	// (0x0004f876) list_notif_wgt_row_pane_t2

0x025c,	// (0x0004f888) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x0005f451) list_notif_wgt_row_pane_t

0xd1dc,	// (0x0005c808) list_recal_day_event_pane_g1

0x026e,	// (0x0004f89a) list_recal_day_event_pane_t1

0x0e1e,	// (0x0005044a) bg_button_pane_cp045

0xa3f1,	// (0x00059a1d) cntbar_detail_btn_pane_t1

0x244d,	// (0x00051a79) main_callh_pane_ParamLimits

0x244d,	// (0x00051a79) main_callh_pane

0x0e1e,	// (0x0005044a) main_coverflow0_pane

0x0e1e,	// (0x0005044a) main_wgtman_pane

0x951b,	// (0x00058b47) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x951b,	// (0x00058b47) main_fs_bigclock_unlock_btn_pane

0xe2dd,	// (0x0005d909) bg_button_pane_cp16

0xe2ed,	// (0x0005d919) cell_tport_appsw_pane_g3

0xa3ff,	// (0x00059a2b) cf0_flow_pane_ParamLimits

0xa3ff,	// (0x00059a2b) cf0_flow_pane

0x029a,	// (0x0004f8c6) listscroll_cf0_pane

0x02a3,	// (0x0004f8cf) main_cf0_pane_g1

0xa414,	// (0x00059a40) main_cf0_pane_t1_ParamLimits

0xa414,	// (0x00059a40) main_cf0_pane_t1

0xa429,	// (0x00059a55) main_cf0_pane_t2_ParamLimits

0xa429,	// (0x00059a55) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x0005f45d) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x0005f45d) main_cf0_pane_t

0x02d9,	// (0x0004f905) scroll_pane_cp11

0xa43e,	// (0x00059a6a) cf0_flow_pane_g1

0xa446,	// (0x00059a72) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x0005f462) cf0_flow_pane_g

0xa44e,	// (0x00059a7a) cf0_flow_pane_t1

0x0e1e,	// (0x0005044a) main_call6_pane

0x0e1e,	// (0x0005044a) main_calllock_pane

0xa45c,	// (0x00059a88) call6_btn_grp_pane_ParamLimits

0xa45c,	// (0x00059a88) call6_btn_grp_pane

0xa472,	// (0x00059a9e) call6_pane_g1_ParamLimits

0xa472,	// (0x00059a9e) call6_pane_g1

0xa485,	// (0x00059ab1) popup_call6_1st_window_ParamLimits

0xa485,	// (0x00059ab1) popup_call6_1st_window

0xa494,	// (0x00059ac0) popup_call6_2nd_window_ParamLimits

0xa494,	// (0x00059ac0) popup_call6_2nd_window

0xa4a3,	// (0x00059acf) cell_call6_btn_pane_ParamLimits

0xa4a3,	// (0x00059acf) cell_call6_btn_pane

0x1751,	// (0x00050d7d) bg_popup_call2_in_pane_cp03

0x0341,	// (0x0004f96d) popup_call6_1st_window_g1

0x0349,	// (0x0004f975) popup_call6_1st_window_g2

0x0351,	// (0x0004f97d) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x0005f467) popup_call6_1st_window_g

0x0359,	// (0x0004f985) popup_call6_1st_window_t1

0x0368,	// (0x0004f994) popup_call6_1st_window_t2

0x0376,	// (0x0004f9a2) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x0005f46e) popup_call6_1st_window_t

0x1751,	// (0x00050d7d) bg_popup_call2_in_pane_cp04

0x0384,	// (0x0004f9b0) popup_call6_2nd_window_g1

0x038c,	// (0x0004f9b8) popup_call6_2nd_window_g2

0x0394,	// (0x0004f9c0) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x0005f475) popup_call6_2nd_window_g

0x039c,	// (0x0004f9c8) popup_call6_2nd_window_t1

0xaebf,	// (0x0005a4eb) bg_button_pane_cp15

0x03ab,	// (0x0004f9d7) cell_call6_btn_pane_g1

0x03b4,	// (0x0004f9e0) cell_call6_btn_pane_t1

0xa4b7,	// (0x00059ae3) listscroll_wgtman_pane_ParamLimits

0xa4b7,	// (0x00059ae3) listscroll_wgtman_pane

0xa4d8,	// (0x00059b04) wgtman_btn_pane_ParamLimits

0xa4d8,	// (0x00059b04) wgtman_btn_pane

0x1f71,	// (0x0005159d) aid_scroll_copy1

0x0412,	// (0x0004fa3e) list_wgtman_pane

0xa518,	// (0x00059b44) wgtman_btn_pane_g1_ParamLimits

0xa518,	// (0x00059b44) wgtman_btn_pane_g1

0xa544,	// (0x00059b70) wgtman_btn_pane_t1_ParamLimits

0xa544,	// (0x00059b70) wgtman_btn_pane_t1

0x047b,	// (0x0004faa7) wgtman_btn_pane_t2_ParamLimits

0x047b,	// (0x0004faa7) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x0005f47c) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x0005f47c) wgtman_btn_pane_t

0xa581,	// (0x00059bad) listrow_wgtman_pane_ParamLimits

0xa581,	// (0x00059bad) listrow_wgtman_pane

0xa593,	// (0x00059bbf) listrow_wgtman_pane_g1

0xa5a0,	// (0x00059bcc) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x0005f481) listrow_wgtman_pane_g

0xa5b8,	// (0x00059be4) listrow_wgtman_pane_t1

0xa5d0,	// (0x00059bfc) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x0005f486) listrow_wgtman_pane_t

0xa5f6,	// (0x00059c22) wait_bar_pane_cp09

0x0518,	// (0x0004fb44) main_calllock_btn_pane

0x0520,	// (0x0004fb4c) main_calllock_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp17

0x0529,	// (0x0004fb55) main_calllock_btn_pane_g1

0x0532,	// (0x0004fb5e) main_calllock_btn_pane_t1

0x0e1e,	// (0x0005044a) main_dialer3_pane

0x0e1e,	// (0x0005044a) main_fmrd2_pane

0x17cd,	// (0x00050df9) main_fs_bigclock_unlock_btn_pane_g1

0x0549,	// (0x0004fb75) main_fs_bigclock_unlock_btn_pane_t1

0xa608,	// (0x00059c34) area_fmrd2_info_pane_ParamLimits

0xa608,	// (0x00059c34) area_fmrd2_info_pane

0xa617,	// (0x00059c43) area_fmrd2_visual_pane_ParamLimits

0xa617,	// (0x00059c43) area_fmrd2_visual_pane

0xa625,	// (0x00059c51) fmrd2_indi_pane_ParamLimits

0xa625,	// (0x00059c51) fmrd2_indi_pane

0xa632,	// (0x00059c5e) area_fmrd2_visual_pane_g1

0xa63a,	// (0x00059c66) area_fmrd2_visual_pane_t1

0xa648,	// (0x00059c74) area_fmrd2_visual_pane_t2

0xa656,	// (0x00059c82) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x0005f490) area_fmrd2_visual_pane_t

0xa664,	// (0x00059c90) area_fmrd2_info_pane_g1

0xa66c,	// (0x00059c98) area_fmrd2_info_pane_t1

0xa67a,	// (0x00059ca6) area_fmrd2_info_pane_t2

0xa688,	// (0x00059cb4) area_fmrd2_info_pane_t3

0xa696,	// (0x00059cc2) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x0005f497) area_fmrd2_info_pane_t

0xa6a4,	// (0x00059cd0) fmrd2_indi_pane_t1

0xa6b2,	// (0x00059cde) fmrd2_indi_pane_t2

0xa6c0,	// (0x00059cec) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x0005f4a0) fmrd2_indi_pane_t

0xde11,	// (0x0005d43d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xde11,	// (0x0005d43d) list_single_fs_bigclock_indicator_pane_g5

0xdebf,	// (0x0005d4eb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdebf,	// (0x0005d4eb) list_single_fs_bigclock_indicator_pane_t5

0x9d0d,	// (0x00059339) aid_cell_bcale_month_pane_ParamLimits

0x9d0d,	// (0x00059339) aid_cell_bcale_month_pane

0x9d2b,	// (0x00059357) bcale_month_pane_ParamLimits

0x9d2b,	// (0x00059357) bcale_month_pane

0x9d43,	// (0x0005936f) bcale_preview_pane_ParamLimits

0x9d43,	// (0x0005936f) bcale_preview_pane

0xf001,	// (0x0005e62d) list_single_fs_bigclock_pane_t1_ParamLimits

0xf01d,	// (0x0005e649) list_single_fs_bigclock_pane_t2_ParamLimits

0xf01d,	// (0x0005e649) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x0005f41b) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x0005f41b) list_single_fs_bigclock_pane_t

0x0541,	// (0x0004fb6d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x0005f48b) main_fs_bigclock_unlock_btn_pane_g

0xa6ce,	// (0x00059cfa) aid_dia3_key_size_ParamLimits

0xa6ce,	// (0x00059cfa) aid_dia3_key_size

0xa6dd,	// (0x00059d09) aid_dia3_listrow_size_ParamLimits

0xa6dd,	// (0x00059d09) aid_dia3_listrow_size

0xa6f0,	// (0x00059d1c) dia3_keypad_fun_pane_ParamLimits

0xa6f0,	// (0x00059d1c) dia3_keypad_fun_pane

0xa704,	// (0x00059d30) dia3_keypad_num_pane_ParamLimits

0xa704,	// (0x00059d30) dia3_keypad_num_pane

0xa715,	// (0x00059d41) dia3_listscroll_pane_ParamLimits

0xa715,	// (0x00059d41) dia3_listscroll_pane

0xa726,	// (0x00059d52) dia3_numentry_pane_ParamLimits

0xa726,	// (0x00059d52) dia3_numentry_pane

0x0664,	// (0x0004fc90) dia3_list_pane

0x066d,	// (0x0004fc99) scroll_pane_cp12

0x0e1e,	// (0x0005044a) bg_dia3_numentry_pane

0xa73a,	// (0x00059d66) dia3_numentry_pane_t1

0xa749,	// (0x00059d75) cell_dia3_key_num_pane

0xa751,	// (0x00059d7d) cell_dia3_key0_fun_pane_ParamLimits

0xa751,	// (0x00059d7d) cell_dia3_key0_fun_pane

0xa765,	// (0x00059d91) cell_dia3_key1_fun_pane_ParamLimits

0xa765,	// (0x00059d91) cell_dia3_key1_fun_pane

0xa77c,	// (0x00059da8) dia3_listrow_pane

0xdb20,	// (0x0005d14c) bg_dia3_numentry_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp21

0x06b4,	// (0x0004fce0) cell_dia3_key_num_pane_t1

0x06c2,	// (0x0004fcee) cell_dia3_key_num_pane_t2

0x06d1,	// (0x0004fcfd) cell_dia3_key_num_pane_t3

0x06e0,	// (0x0004fd0c) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x0005f4a7) cell_dia3_key_num_pane_t

0x0e1e,	// (0x0005044a) bg_button_pane_cp19

0x06ef,	// (0x0004fd1b) cell_dia3_key0_fun_pane_g1

0x0e1e,	// (0x0005044a) bg_button_pane_cp20

0xa78e,	// (0x00059dba) cell_dia3_key1_fun_pane_g1

0xa796,	// (0x00059dc2) area_left_week_number_pane

0xa7a2,	// (0x00059dce) area_top_day_name_pane

0xa7b3,	// (0x00059ddf) frame_month_view_pane

0x072d,	// (0x0004fd59) grid_month_view_pane

0xa7c4,	// (0x00059df0) cell_top_day_name_pane_ParamLimits

0xa7c4,	// (0x00059df0) cell_top_day_name_pane

0xa7e7,	// (0x00059e13) cell_area_left_week_number_pane_ParamLimits

0xa7e7,	// (0x00059e13) cell_area_left_week_number_pane

0xa7fb,	// (0x00059e27) cell_month_view_pane_ParamLimits

0xa7fb,	// (0x00059e27) cell_month_view_pane

0x0796,	// (0x0004fdc2) frm_month_g1

0xa820,	// (0x00059e4c) frm_month_g2

0xa831,	// (0x00059e5d) frm_month_g3

0xa842,	// (0x00059e6e) frm_month_g4

0xa853,	// (0x00059e7f) frm_month_g5

0xa864,	// (0x00059e90) frm_month_g6

0xa875,	// (0x00059ea1) frm_month_g7

0x07fd,	// (0x0004fe29) frm_month_g8

0xa886,	// (0x00059eb2) frm_month_g9

0xa896,	// (0x00059ec2) frm_month_g10

0xa8a6,	// (0x00059ed2) frm_month_g11

0xa8b6,	// (0x00059ee2) frm_month_g12

0xa8c6,	// (0x00059ef2) frm_month_g13

0xa8d6,	// (0x00059f02) frm_month_g14

0xa8e6,	// (0x00059f12) frm_month_g15

0xa8f8,	// (0x00059f24) frm_month_g16

0x000f,

0xfe84,	// (0x0005f4b0) frm_month_g

0x0872,	// (0x0004fe9e) cell_top_day_name_pane_t1

0xa90a,	// (0x00059f36) cell_area_left_week_number_pane_g1

0xa916,	// (0x00059f42) cell_area_left_week_number_pane_t1

0x150e,	// (0x00050b3a) cell_month_view_pane_g1

0xa929,	// (0x00059f55) cell_month_view_pane_t1

0x0e1e,	// (0x0005044a) main_fps_pane

0xe105,	// (0x0005d731) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe105,	// (0x0005d731) cmail_ddmenu_btn02_pane_cp1

0xe121,	// (0x0005d74d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe121,	// (0x0005d74d) cmail_ddmenu_btn02_pane_cp2

0xa063,	// (0x0005968f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa063,	// (0x0005968f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x0005f3ce) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x0005f3ce) cmail_ddmenu_btn02_pane_g

0xa081,	// (0x000596ad) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa081,	// (0x000596ad) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x0005f3d3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x0005f3d3) cmail_ddmenu_btn02_pane_t

0xa93c,	// (0x00059f68) fps_text_pane_ParamLimits

0xa93c,	// (0x00059f68) fps_text_pane

0xa952,	// (0x00059f7e) main_fps_pane_g1_ParamLimits

0xa952,	// (0x00059f7e) main_fps_pane_g1

0xa968,	// (0x00059f94) wait_bar_pane_cp010_ParamLimits

0xa968,	// (0x00059f94) wait_bar_pane_cp010

0xa979,	// (0x00059fa5) fps_text_pane_t1_ParamLimits

0xa979,	// (0x00059fa5) fps_text_pane_t1

0x0b7c,	// (0x000501a8) cam4_image_uncrop_pane_g1

0x0b85,	// (0x000501b1) cam4_image_uncrop_pane_g2

0x7970,	// (0x00056f9c) cam4_image_uncrop_pane_g3

0x7979,	// (0x00056fa5) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x0005eed0) cam4_image_uncrop_pane_g

0xa77c,	// (0x00059da8) dia3_listrow_pane_ParamLimits

0x0e1e,	// (0x0005044a) main_phob2_pane

0x9b5e,	// (0x0005918a) cell_tport_appsw_pane_cp02_ParamLimits

0x9b5e,	// (0x0005918a) cell_tport_appsw_pane_cp02

0x9b6e,	// (0x0005919a) cell_tport_appsw_pane_cp03_ParamLimits

0x9b6e,	// (0x0005919a) cell_tport_appsw_pane_cp03

0x0e1e,	// (0x0005044a) phob2_contact_card_pane

0x0e1e,	// (0x0005044a) phob2_listscroll_pane

0x08fe,	// (0x0004ff2a) phob2_list_pane

0x0906,	// (0x0004ff32) scroll_pane_cp034

0xa991,	// (0x00059fbd) phob2_cc_data_pane_ParamLimits

0xa991,	// (0x00059fbd) phob2_cc_data_pane

0xa9ae,	// (0x00059fda) phob2_cc_listscroll_pane_ParamLimits

0xa9ae,	// (0x00059fda) phob2_cc_listscroll_pane

0xa581,	// (0x00059bad) list_double_large_graphic_phob2_pane_ParamLimits

0xa581,	// (0x00059bad) list_double_large_graphic_phob2_pane

0xa9ca,	// (0x00059ff6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa9ca,	// (0x00059ff6) list_double_large_graphic_phob2_pane_g1

0xa9d7,	// (0x0005a003) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa9d7,	// (0x0005a003) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x0005f4d1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x0005f4d1) list_double_large_graphic_phob2_pane_g

0xa9fb,	// (0x0005a027) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa9fb,	// (0x0005a027) list_double_large_graphic_phob2_pane_t1

0xaa10,	// (0x0005a03c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaa10,	// (0x0005a03c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x0005f4da) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x0005f4da) list_double_large_graphic_phob2_pane_t

0x0e1e,	// (0x0005044a) list_highlight_pane_cp024

0x09ab,	// (0x0004ffd7) phob2_cc_button_pane

0xaa25,	// (0x0005a051) phob2_cc_data_pane_g1_ParamLimits

0xaa25,	// (0x0005a051) phob2_cc_data_pane_g1

0xaa3c,	// (0x0005a068) phob2_cc_data_pane_g2_ParamLimits

0xaa3c,	// (0x0005a068) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x0005f4df) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x0005f4df) phob2_cc_data_pane_g

0xaa4e,	// (0x0005a07a) phob2_cc_data_pane_t1_ParamLimits

0xaa4e,	// (0x0005a07a) phob2_cc_data_pane_t1

0xaa66,	// (0x0005a092) phob2_cc_data_pane_t2_ParamLimits

0xaa66,	// (0x0005a092) phob2_cc_data_pane_t2

0xaa7e,	// (0x0005a0aa) phob2_cc_data_pane_t3_ParamLimits

0xaa7e,	// (0x0005a0aa) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x0005f4e4) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x0005f4e4) phob2_cc_data_pane_t

0x0a10,	// (0x0005003c) phob2_cc_list_pane_ParamLimits

0x0a10,	// (0x0005003c) phob2_cc_list_pane

0xda3d,	// (0x0005d069) scroll_pane_cp035_ParamLimits

0xda3d,	// (0x0005d069) scroll_pane_cp035

0x2225,	// (0x00051851) bg_button_pane_cp033

0x0a1c,	// (0x00050048) phob2_cc_button_pane_g1

0x0a28,	// (0x00050054) phob2_cc_button_pane_t1

0x0a3d,	// (0x00050069) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x0005f4eb) phob2_cc_button_pane_t

0xaa96,	// (0x0005a0c2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa96,	// (0x0005a0c2) list_double_large_graphic_phob2_cc_pane

0xaac4,	// (0x0005a0f0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaac4,	// (0x0005a0f0) list_double_large_graphic_phob2_cc_pane_g1

0xaad0,	// (0x0005a0fc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaad0,	// (0x0005a0fc) list_double_large_graphic_phob2_cc_pane_g2

0xaadc,	// (0x0005a108) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaadc,	// (0x0005a108) list_double_large_graphic_phob2_cc_pane_g3

0xaae8,	// (0x0005a114) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaae8,	// (0x0005a114) list_double_large_graphic_phob2_cc_pane_g4

0xaaf4,	// (0x0005a120) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaaf4,	// (0x0005a120) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x0005f4f0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x0005f4f0) list_double_large_graphic_phob2_cc_pane_g

0xab00,	// (0x0005a12c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xab00,	// (0x0005a12c) list_double_large_graphic_phob2_cc_pane_t1

0xab29,	// (0x0005a155) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xab29,	// (0x0005a155) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x0005f4fb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x0005f4fb) list_double_large_graphic_phob2_cc_pane_t

0x0b36,	// (0x00050162) list_highlight_pane_cp025_ParamLimits

0x0b36,	// (0x00050162) list_highlight_pane_cp025

0x2225,	// (0x00051851) bg_button_pane_cp033_ParamLimits

0x0a1c,	// (0x00050048) phob2_cc_button_pane_g1_ParamLimits

0x0a28,	// (0x00050054) phob2_cc_button_pane_t1_ParamLimits

0x0a3d,	// (0x00050069) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x0005f4eb) phob2_cc_button_pane_t_ParamLimits

0x384e,	// (0x00052e7a) popup_wgtman_window

0xdb40,	// (0x0005d16c) scroll_pane_cp038

0xa4fa,	// (0x00059b26) wgtman_btn_pane_cp_01_ParamLimits

0xa4fa,	// (0x00059b26) wgtman_btn_pane_cp_01

0x0b44,	// (0x00050170) wgtman_content_pane

0x0b4d,	// (0x00050179) wgtman_heading_pane

0x0e1e,	// (0x0005044a) bg_heading_pane_cp02

0x0b56,	// (0x00050182) wgtman_heading_pane_g1

0x0b5e,	// (0x0005018a) wgtman_heading_pane_t1

0x0b6c,	// (0x00050198) scroll_pane_cp036

0x0b74,	// (0x000501a0) wgtman_list_pane

0xe886,	// (0x0005deb2) wgtman_list_pane_t1_ParamLimits

0xe886,	// (0x0005deb2) wgtman_list_pane_t1

0xedde,	// (0x0005e40a) cam4_grid_pane

0x8515,	// (0x00057b41) bg_button_pane_cp015_ParamLimits

0x8525,	// (0x00057b51) bg_button_pane_cp016_ParamLimits

0x8537,	// (0x00057b63) bg_button_pane_cp017_ParamLimits

0x8587,	// (0x00057bb3) popup_vitu2_query_window_g3_ParamLimits

0x8587,	// (0x00057bb3) popup_vitu2_query_window_g3

0x863a,	// (0x00057c66) popup_vitu2_query_window_t6_ParamLimits

0x863a,	// (0x00057c66) popup_vitu2_query_window_t6

0x8665,	// (0x00057c91) popup_vitu2_query_window_t7_ParamLimits

0x8665,	// (0x00057c91) popup_vitu2_query_window_t7

0x0b7c,	// (0x000501a8) cam4_grid_pane_g1

0x0b85,	// (0x000501b1) cam4_grid_pane_g2

0x0b8e,	// (0x000501ba) cam4_grid_pane_g3

0x0b97,	// (0x000501c3) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x0005f500) cam4_grid_pane_g

0x4498,	// (0x00053ac4) aid_placing_vt_slider_lsc_ParamLimits

0x4708,	// (0x00053d34) vidtel_button_pane_ParamLimits

0x4708,	// (0x00053d34) vidtel_button_pane

0x0e1e,	// (0x0005044a) bg_button_pane_cp034

0xab52,	// (0x0005a17e) vidtel_button_pane_g1

0xab5a,	// (0x0005a186) vidtel_button_pane_t1

0xd1ad,	// (0x0005c7d9) aid_size_vtel_slider_touch

0xda3d,	// (0x0005d069) scroll_pane_cp039

0xdb6f,	// (0x0005d19b) ncim_query_button_pane_cp01_ParamLimits

0xdb8e,	// (0x0005d1ba) ncimui_query_pane_g1_ParamLimits

0x2225,	// (0x00051851) input_focus_pane_cp012_ParamLimits

0xdbb3,	// (0x0005d1df) ncim_query_entry_pane_t1_ParamLimits

0xda3d,	// (0x0005d069) scroll_pane_cp039_ParamLimits

0x2035,	// (0x00051661) navi_pane_bcale_mc_g1

0x203d,	// (0x00051669) navi_pane_bcale_mc_t1

0xe155,	// (0x0005d781) main_sp_fs_email_pane_g1

0xe161,	// (0x0005d78d) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x0005f2cb) main_sp_fs_email_pane_g

0xe5c8,	// (0x0005dbf4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe5c8,	// (0x0005dbf4) list_single_cale_mrui_row_pane_g3

0xa0a1,	// (0x000596cd) list_single_recal_day_pane_g5_event_pane

0xe731,	// (0x0005dd5d) list_single_recal_day_pane_g7

0x0bbe,	// (0x000501ea) list_recal_day_event_pane_cp01

0x0bc7,	// (0x000501f3) list_recal_vselct_arw_lo_pane_cp01

0x0bcf,	// (0x000501fb) list_recal_vselct_arw_up_pane_cp01

0x0bd7,	// (0x00050203) list_recal_vselct_pane_cp01

0xd1dc,	// (0x0005c808) list_recal_day_event_pane_cp01_g1

0xe89d,	// (0x0005dec9) list_recal_day_event_pane_cp01_t1

0xe739,	// (0x0005dd65) list_single_recal_day_pane_t1_ParamLimits

0xa0b7,	// (0x000596e3) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x0005f3e3) list_single_recal_day_pane_t_ParamLimits

0x1494,	// (0x00050ac0) bg_notes_pane_ParamLimits

0x155e,	// (0x00050b8a) list_notes_pane_ParamLimits

0x3a42,	// (0x0005306e) scroll_pane_cp06_ParamLimits

0x1584,	// (0x00050bb0) main_notes_pane_ParamLimits

0x2225,	// (0x00051851) main_welc_pane

0xab86,	// (0x0005a1b2) main_welc_body_pane_ParamLimits

0xab86,	// (0x0005a1b2) main_welc_body_pane

0xaba2,	// (0x0005a1ce) main_welc_opti_pane_ParamLimits

0xaba2,	// (0x0005a1ce) main_welc_opti_pane

0xac0e,	// (0x0005a23a) main_welc_pane_t1_ParamLimits

0xac0e,	// (0x0005a23a) main_welc_pane_t1

0xad4e,	// (0x0005a37a) main_welc_body_row_pane_ParamLimits

0xad4e,	// (0x0005a37a) main_welc_body_row_pane

0x1791,	// (0x00050dbd) main_welc_opti_row_pane_ParamLimits

0x1791,	// (0x00050dbd) main_welc_opti_row_pane

0x0d7d,	// (0x000503a9) main_welc_opti_row_pane_g1

0xad61,	// (0x0005a38d) main_welc_opti_row_pane_t1

0x0d94,	// (0x000503c0) main_welc_body_row_pane_t1

0x01ce,	// (0x0004f7fa) popup_notif_wgt_heading_pane

0x01fa,	// (0x0004f826) aid_size_list_notif_wgt_del_ParamLimits

0x0207,	// (0x0004f833) list_notif_wgt_row_pane_g1_ParamLimits

0x0213,	// (0x0004f83f) list_notif_wgt_row_pane_g2_ParamLimits

0x0227,	// (0x0004f853) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x0005f44a) list_notif_wgt_row_pane_g_ParamLimits

0x0234,	// (0x0004f860) list_notif_wgt_row_pane_t1_ParamLimits

0x024a,	// (0x0004f876) list_notif_wgt_row_pane_t2_ParamLimits

0x025c,	// (0x0004f888) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x0005f451) list_notif_wgt_row_pane_t_ParamLimits

0xa593,	// (0x00059bbf) listrow_wgtman_pane_g1_ParamLimits

0xa5a0,	// (0x00059bcc) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x0005f481) listrow_wgtman_pane_g_ParamLimits

0xa5b8,	// (0x00059be4) listrow_wgtman_pane_t1_ParamLimits

0xa5d0,	// (0x00059bfc) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x0005f486) listrow_wgtman_pane_t_ParamLimits

0xa5f6,	// (0x00059c22) wait_bar_pane_cp09_ParamLimits

0x0e1e,	// (0x0005044a) bg_popup_heading_pane_cp02

0x0da3,	// (0x000503cf) popup_notif_wgt_heading_pane_g1

0x0dab,	// (0x000503d7) popup_notif_wgt_heading_pane_t1

0xc29b,	// (0x0005b8c7) main_vids_pane

0x0e1e,	// (0x0005044a) vids_listscroll_pane

0xad70,	// (0x0005a39c) scroll_pane_cp040

0x0e1e,	// (0x0005044a) vids_list_pane

0x0059,	// (0x0004f685) vids_list_double_pane_ParamLimits

0x0059,	// (0x0004f685) vids_list_double_pane

0xad7b,	// (0x0005a3a7) vids_list_double_pane_g1

0xad84,	// (0x0005a3b0) vids_list_double_pane_t1

0xad93,	// (0x0005a3bf) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x0005f51f) vids_list_double_pane_t

0xe9e5,	// (0x0005e011) main_ncimui_pane_ParamLimits

0x90c7,	// (0x000586f3) main_ncimui_pane_g1_ParamLimits

0x90d3,	// (0x000586ff) main_ncimui_pane_g2_ParamLimits

0x90d3,	// (0x000586ff) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x0005f1cc) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x0005f1cc) main_ncimui_pane_g

0xabb9,	// (0x0005a1e5) main_welc_pane_g1_ParamLimits

0xabb9,	// (0x0005a1e5) main_welc_pane_g1

0xabcc,	// (0x0005a1f8) main_welc_pane_g2_ParamLimits

0xabcc,	// (0x0005a1f8) main_welc_pane_g2

0x0003,

0xfedd,	// (0x0005f509) main_welc_pane_g_ParamLimits

0xfedd,	// (0x0005f509) main_welc_pane_g

0x1494,	// (0x00050ac0) listscroll_mce_pane_ParamLimits

0x564e,	// (0x00054c7a) wait_bar_pane_cp10

0xc28f,	// (0x0005b8bb) main_cale_day_pane_ParamLimits

0xc28f,	// (0x0005b8bb) main_cale_week_pane_ParamLimits

0x1494,	// (0x00050ac0) main_messa_pane_ParamLimits

0x6fae,	// (0x000565da) main_clock2_btn_pane_ParamLimits

0x6fae,	// (0x000565da) main_clock2_btn_pane

0xca17,	// (0x0005c043) main_clock2_btn_pane_cp01_ParamLimits

0xca17,	// (0x0005c043) main_clock2_btn_pane_cp01

0xe583,	// (0x0005dbaf) list_cale_mrui_pane_ParamLimits

0x02ad,	// (0x0004f8d9) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x0005f458) main_cf0_pane_g

0xa796,	// (0x00059dc2) area_left_week_number_pane_ParamLimits

0xa7a2,	// (0x00059dce) area_top_day_name_pane_ParamLimits

0xa7b3,	// (0x00059ddf) frame_month_view_pane_ParamLimits

0x072d,	// (0x0004fd59) grid_month_view_pane_ParamLimits

0x0796,	// (0x0004fdc2) frm_month_g1_ParamLimits

0xa820,	// (0x00059e4c) frm_month_g2_ParamLimits

0xa831,	// (0x00059e5d) frm_month_g3_ParamLimits

0xa842,	// (0x00059e6e) frm_month_g4_ParamLimits

0xa853,	// (0x00059e7f) frm_month_g5_ParamLimits

0xa864,	// (0x00059e90) frm_month_g6_ParamLimits

0xa875,	// (0x00059ea1) frm_month_g7_ParamLimits

0x07fd,	// (0x0004fe29) frm_month_g8_ParamLimits

0xa886,	// (0x00059eb2) frm_month_g9_ParamLimits

0xa896,	// (0x00059ec2) frm_month_g10_ParamLimits

0xa8a6,	// (0x00059ed2) frm_month_g11_ParamLimits

0xa8b6,	// (0x00059ee2) frm_month_g12_ParamLimits

0xa8c6,	// (0x00059ef2) frm_month_g13_ParamLimits

0xa8d6,	// (0x00059f02) frm_month_g14_ParamLimits

0xa8e6,	// (0x00059f12) frm_month_g15_ParamLimits

0xa8f8,	// (0x00059f24) frm_month_g16_ParamLimits

0xfe84,	// (0x0005f4b0) frm_month_g_ParamLimits

0x0872,	// (0x0004fe9e) cell_top_day_name_pane_t1_ParamLimits

0xa90a,	// (0x00059f36) cell_area_left_week_number_pane_g1_ParamLimits

0xa916,	// (0x00059f42) cell_area_left_week_number_pane_t1_ParamLimits

0x150e,	// (0x00050b3a) cell_month_view_pane_g1_ParamLimits

0xa929,	// (0x00059f55) cell_month_view_pane_t1_ParamLimits

0x148c,	// (0x00050ab8) main_clock2_btn_pane_g1

0x24b0,	// (0x00051adc) main_clock2_btn_pane_t1

0x2225,	// (0x00051851) listscroll_cmail_pane_ParamLimits

0xe155,	// (0x0005d781) main_sp_fs_email_pane_g1_ParamLimits

0xe161,	// (0x0005d78d) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x0005f2cb) main_sp_fs_email_pane_g_ParamLimits

0xe6ad,	// (0x0005dcd9) list_recal_day_pane_ParamLimits

0xe6be,	// (0x0005dcea) mian_recal_day_pane_t1

0x9a2a,	// (0x00059056) list_single_dyc_row_text_pane_t4_ParamLimits

0x9a2a,	// (0x00059056) list_single_dyc_row_text_pane_t4

0x9a61,	// (0x0005908d) list_single_dyc_row_text_pane_t5_ParamLimits

0x9a61,	// (0x0005908d) list_single_dyc_row_text_pane_t5

0xe1fa,	// (0x0005d826) list_single_dyc_row_text_pane_t6_ParamLimits

0xe1fa,	// (0x0005d826) list_single_dyc_row_text_pane_t6

0x5273,	// (0x0005489f) aid_mgn_list_cale_time_pane

0xe9e5,	// (0x0005e011) main_gallery2_pane_ParamLimits

0xca2b,	// (0x0005c057) main_clock2_pane_cp01_t1

0xca39,	// (0x0005c065) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x0005eda2) main_clock2_pane_cp01_t

0x3dc5,	// (0x000533f1) cale_week_scroll_pane_g16_ParamLimits

0x3dc5,	// (0x000533f1) cale_week_scroll_pane_g16

0x1751,	// (0x00050d7d) vorec_slider_pane

0xab5a,	// (0x0005a186) vidtel_button_pane_t1_ParamLimits

0xa15c,	// (0x00059788) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa16e,	// (0x0005979a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa17f,	// (0x000597ab) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa17f,	// (0x000597ab) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x0005f406) main_fs_bigclock_clock_pane_g_ParamLimits

0xa192,	// (0x000597be) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa1ad,	// (0x000597d9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x0005f40f) main_fs_bigclock_clock_pane_t_ParamLimits

0x68ec,	// (0x00055f18) main_mup3_lyrics_pane_ParamLimits

0x68ec,	// (0x00055f18) main_mup3_lyrics_pane

0xadc5,	// (0x0005a3f1) main_mup3_lyrics_pane_t1_ParamLimits

0xadc5,	// (0x0005a3f1) main_mup3_lyrics_pane_t1

0xeb40,	// (0x0005e16c) aid_main_mp4_pane_t1_area

0xeb4a,	// (0x0005e176) aid_main_mp4_pane_t2_area

0xebf6,	// (0x0005e222) main_mp4_pane_g7_ParamLimits

0xebf6,	// (0x0005e222) main_mp4_pane_g7

0xec02,	// (0x0005e22e) main_mp4_pane_g8_ParamLimits

0xec02,	// (0x0005e22e) main_mp4_pane_g8

0x7812,	// (0x00056e3e) aid_call6_pane_g1_size

0xaab0,	// (0x0005a0dc) list_double_large_graphic_phob2_other_pane_ParamLimits

0xaab0,	// (0x0005a0dc) list_double_large_graphic_phob2_other_pane

0x1f88,	// (0x000515b4) list_double_large_graphic_phob2_other_pane_g1

0x0e1e,	// (0x0005044a) list_highlight_pane_cp026

0x2225,	// (0x00051851) main_welc_pane_ParamLimits

0x983b,	// (0x00058e67) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x983b,	// (0x00058e67) main_sp_fs_ctrlbar_pane_g3

0x9853,	// (0x00058e7f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9853,	// (0x00058e7f) main_sp_fs_ctrlbar_pane_g4

0x9895,	// (0x00058ec1) toolbar2_fixed_button_pane_cp01

0x98a0,	// (0x00058ecc) toolbar2_fixed_button_pane_cp02

0x98ab,	// (0x00058ed7) toolbar2_fixed_button_pane_cp03

0xab70,	// (0x0005a19c) list_welc_entry_pane_ParamLimits

0xab70,	// (0x0005a19c) list_welc_entry_pane

0xabdf,	// (0x0005a20b) main_welc_pane_g3_ParamLimits

0xabdf,	// (0x0005a20b) main_welc_pane_g3

0xac28,	// (0x0005a254) main_welc_pane_t2_ParamLimits

0xac28,	// (0x0005a254) main_welc_pane_t2

0xac3e,	// (0x0005a26a) main_welc_pane_t3_ParamLimits

0xac3e,	// (0x0005a26a) main_welc_pane_t3

0x0005,

0xfee6,	// (0x0005f512) main_welc_pane_t_ParamLimits

0xfee6,	// (0x0005f512) main_welc_pane_t

0xacea,	// (0x0005a316) welc_button_pane_ParamLimits

0xacea,	// (0x0005a316) welc_button_pane

0xad3e,	// (0x0005a36a) welc_service_logo_pane_ParamLimits

0xad3e,	// (0x0005a36a) welc_service_logo_pane

0xade4,	// (0x0005a410) list_single_welc_entry_pane_ParamLimits

0xade4,	// (0x0005a410) list_single_welc_entry_pane

0xadf5,	// (0x0005a421) list_single_welc_entry_pane_g1

0xadfd,	// (0x0005a429) list_single_welc_entry_pane_t1

0xae0b,	// (0x0005a437) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x0005f524) list_single_welc_entry_pane_t

0x0e1e,	// (0x0005044a) bg_button_pane_cp035

0x2511,	// (0x00051b3d) welc_button_pane_t1

0x251f,	// (0x00051b4b) welc_service_logo_pane_g1

0x2528,	// (0x00051b54) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x0005f529) welc_service_logo_pane_g

0xaebf,	// (0x0005a4eb) main_int_radio_pane

0x1604,	// (0x00050c30) list_single_fs_dyc_pane_g1

0xa9e3,	// (0x0005a00f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa9e3,	// (0x0005a00f) list_double_large_graphic_phob2_pane_g3

0xa9ef,	// (0x0005a01b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa9ef,	// (0x0005a01b) list_double_large_graphic_phob2_pane_g4

0xae19,	// (0x0005a445) main_int_radio1_pane_ParamLimits

0xae19,	// (0x0005a445) main_int_radio1_pane

0x2547,	// (0x00051b73) find_pane_cp02

0xae36,	// (0x0005a462) input_focus_pane_cp12_ParamLimits

0xae36,	// (0x0005a462) input_focus_pane_cp12

0xae46,	// (0x0005a472) input_focus_pane_cp13_ParamLimits

0xae46,	// (0x0005a472) input_focus_pane_cp13

0xae5a,	// (0x0005a486) input_focus_pane_cp14_ParamLimits

0xae5a,	// (0x0005a486) input_focus_pane_cp14

0x258c,	// (0x00051bb8) int_radio1_listscroll_pane

0xe8ab,	// (0x0005ded7) main_int_radio1_pane_g1_ParamLimits

0xe8ab,	// (0x0005ded7) main_int_radio1_pane_g1

0xe8bf,	// (0x0005deeb) main_int_radio1_pane_t1_ParamLimits

0xe8bf,	// (0x0005deeb) main_int_radio1_pane_t1

0xe8d6,	// (0x0005df02) main_int_radio1_pane_t2_ParamLimits

0xe8d6,	// (0x0005df02) main_int_radio1_pane_t2

0xe8ed,	// (0x0005df19) main_int_radio1_pane_t3_ParamLimits

0xe8ed,	// (0x0005df19) main_int_radio1_pane_t3

0xe904,	// (0x0005df30) main_int_radio1_pane_t4_ParamLimits

0xe904,	// (0x0005df30) main_int_radio1_pane_t4

0x25ef,	// (0x00051c1b) main_int_radio1_pane_t5_ParamLimits

0x25ef,	// (0x00051c1b) main_int_radio1_pane_t5

0xe916,	// (0x0005df42) main_int_radio1_pane_t6_ParamLimits

0xe916,	// (0x0005df42) main_int_radio1_pane_t6

0xe92b,	// (0x0005df57) main_int_radio1_pane_t7_ParamLimits

0xe92b,	// (0x0005df57) main_int_radio1_pane_t7

0xe940,	// (0x0005df6c) main_int_radio1_pane_t8_ParamLimits

0xe940,	// (0x0005df6c) main_int_radio1_pane_t8

0xe95d,	// (0x0005df89) main_int_radio1_pane_t9_ParamLimits

0xe95d,	// (0x0005df89) main_int_radio1_pane_t9

0xe96f,	// (0x0005df9b) main_int_radio1_pane_t10_ParamLimits

0xe96f,	// (0x0005df9b) main_int_radio1_pane_t10

0xe993,	// (0x0005dfbf) main_int_radio1_pane_t11_ParamLimits

0xe993,	// (0x0005dfbf) main_int_radio1_pane_t11

0xe9b7,	// (0x0005dfe3) main_int_radio1_pane_t12_ParamLimits

0xe9b7,	// (0x0005dfe3) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x0005f52e) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x0005f52e) main_int_radio1_pane_t

0x26be,	// (0x00051cea) int_radio_list_pane

0x0906,	// (0x0004ff32) scroll_pane_cp037

0x0492,	// (0x0004fabe) list_double_large_graphic_int_radio_pane_ParamLimits

0x0492,	// (0x0004fabe) list_double_large_graphic_int_radio_pane

0x26c6,	// (0x00051cf2) list_double_large_graphic_int_radio_pane_g1

0xe9c9,	// (0x0005dff5) list_double_large_graphic_int_radio_pane_t1

0xe9d7,	// (0x0005e003) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x0005f547) list_double_large_graphic_int_radio_pane_t

0x0e1e,	// (0x0005044a) list_highlight_pane_cp027

0x0bee,	// (0x0005021a) main_button_pane_4

0xabef,	// (0x0005a21b) main_welc_pane_g4_ParamLimits

0xabef,	// (0x0005a21b) main_welc_pane_g4

0xac54,	// (0x0005a280) main_welc_pane_t4_ParamLimits

0xac54,	// (0x0005a280) main_welc_pane_t4

0xac69,	// (0x0005a295) main_welc_pane_t5_ParamLimits

0xac69,	// (0x0005a295) main_welc_pane_t5

0xacb1,	// (0x0005a2dd) main_welc_pane_t6_ParamLimits

0xacb1,	// (0x0005a2dd) main_welc_pane_t6

0xacfb,	// (0x0005a327) welc_button_pane_2_ParamLimits

0xacfb,	// (0x0005a327) welc_button_pane_2

0xad11,	// (0x0005a33d) welc_button_pane_3_ParamLimits

0xad11,	// (0x0005a33d) welc_button_pane_3

0x0bee,	// (0x0005021a) welc_button_pane_4

0xad2c,	// (0x0005a358) welc_button_pane_5_ParamLimits

0xad2c,	// (0x0005a358) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
