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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0006e326 };

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
0x69dc,	// (0x00074d02) Screen

0x69e6,	// (0x00074d0c) application_window

0x6a18,	// (0x00074d3e) area_bottom_pane_ParamLimits

0x6a18,	// (0x00074d3e) area_bottom_pane

0x6a47,	// (0x00074d6d) area_top_pane_ParamLimits

0x6a47,	// (0x00074d6d) area_top_pane

0x0f65,	// (0x0006f28b) call_video_uplink_pane_ParamLimits

0x0f65,	// (0x0006f28b) call_video_uplink_pane

0x6aca,	// (0x00074df0) main_pane_ParamLimits

0x6aca,	// (0x00074df0) main_pane

0x2bd8,	// (0x00070efe) context_pane

0x942c,	// (0x00077752) navi_pane

0x9446,	// (0x0007776c) popup_cale_events_window_ParamLimits

0x9446,	// (0x0007776c) popup_cale_events_window

0x2beb,	// (0x00070f11) popup_mup_playback_window

0x945d,	// (0x00077783) signal_pane

0x16de,	// (0x0006fa04) main_browser_pane

0xe3df,	// (0x0007c705) main_burst_pane

0x38fd,	// (0x00071c23) main_calc_pane

0xe3df,	// (0x0007c705) main_cale_day_pane

0x18a6,	// (0x0006fbcc) main_cale_month_pane

0xe3df,	// (0x0007c705) main_cale_week_pane

0xe3df,	// (0x0007c705) main_call_pane

0x1392,	// (0x0006f6b8) main_call_poc_pane

0xe3df,	// (0x0007c705) main_camera_pane

0xe3df,	// (0x0007c705) main_chi_dic_pane

0xe1de,	// (0x0007c504) main_clock_pane

0x1392,	// (0x0006f6b8) main_fmradio_pane

0xe3df,	// (0x0007c705) main_graph_messa_pane

0x1392,	// (0x0006f6b8) main_help_pane

0x16de,	// (0x0006fa04) main_im_pane

0x15ed,	// (0x0006f913) main_image_pane_ParamLimits

0x15ed,	// (0x0006f913) main_image_pane

0x1392,	// (0x0006f6b8) main_location2_pane

0xe3df,	// (0x0007c705) main_location_pane

0x1392,	// (0x0006f6b8) main_messa_pane

0x1392,	// (0x0006f6b8) main_mp2_pane

0xe3df,	// (0x0007c705) main_mp_pane

0x1392,	// (0x0006f6b8) main_msg_pane

0x1392,	// (0x0006f6b8) main_mup_eq_pane

0x1392,	// (0x0006f6b8) main_mup_pane

0xe3df,	// (0x0007c705) main_notes_pane

0x1392,	// (0x0006f6b8) main_pec_pane

0x1392,	// (0x0006f6b8) main_phob_pane

0x1392,	// (0x0006f6b8) main_pinb_pane

0x1392,	// (0x0006f6b8) main_postcard_pane

0x1392,	// (0x0006f6b8) main_qdial_pane

0xe3df,	// (0x0007c705) main_skin_pane

0x1392,	// (0x0006f6b8) main_smil2_pane

0xe3df,	// (0x0007c705) main_smil_pane

0xe3df,	// (0x0007c705) main_video_pane

0xe3df,	// (0x0007c705) main_video_tele_pane

0x15ed,	// (0x0006f913) main_viewer_pane_ParamLimits

0x15ed,	// (0x0006f913) main_viewer_pane

0xe3df,	// (0x0007c705) main_vorec_pane

0x935e,	// (0x00077684) popup_blid_sat_info_window_ParamLimits

0x935e,	// (0x00077684) popup_blid_sat_info_window

0x9372,	// (0x00077698) popup_dyc_status_message_window_ParamLimits

0x9372,	// (0x00077698) popup_dyc_status_message_window

0x937e,	// (0x000776a4) popup_grid_large_graphic_window_ParamLimits

0x937e,	// (0x000776a4) popup_grid_large_graphic_window

0x93d6,	// (0x000776fc) popup_loc_request_window_ParamLimits

0x93d6,	// (0x000776fc) popup_loc_request_window

0x9406,	// (0x0007772c) popup_wml_address_window_ParamLimits

0x9406,	// (0x0007772c) popup_wml_address_window

0x9243,	// (0x00077569) call_muted_g1

0x8f7e,	// (0x000772a4) popup_call_audio_conf_window_ParamLimits

0x8f7e,	// (0x000772a4) popup_call_audio_conf_window

0x9253,	// (0x00077579) popup_call_audio_first_window_ParamLimits

0x9253,	// (0x00077579) popup_call_audio_first_window

0x9287,	// (0x000775ad) popup_call_audio_in_window_ParamLimits

0x9287,	// (0x000775ad) popup_call_audio_in_window

0x92a3,	// (0x000775c9) popup_call_audio_out_window_ParamLimits

0x92a3,	// (0x000775c9) popup_call_audio_out_window

0x92bf,	// (0x000775e5) popup_call_audio_second_window_ParamLimits

0x92bf,	// (0x000775e5) popup_call_audio_second_window

0x92e7,	// (0x0007760d) popup_call_audio_wait_window_ParamLimits

0x92e7,	// (0x0007760d) popup_call_audio_wait_window

0x9306,	// (0x0007762c) popup_number_entry_window_ParamLimits

0x9306,	// (0x0007762c) popup_number_entry_window

0x0f81,	// (0x0006f2a7) bg_popup_call_pane_cp05_ParamLimits

0x0f81,	// (0x0006f2a7) bg_popup_call_pane_cp05

0x0fa1,	// (0x0006f2c7) popup_number_entry_window_t1

0x0fb4,	// (0x0006f2da) popup_number_entry_window_t2

0x0fc6,	// (0x0006f2ec) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0007d455) popup_number_entry_window_t

0x0fd8,	// (0x0006f2fe) text_title_cp2

0x0feb,	// (0x0006f311) bg_popup_call_pane_cp_ParamLimits

0x0feb,	// (0x0006f311) bg_popup_call_pane_cp

0x0ff9,	// (0x0006f31f) call_thumbnail_pane

0x1001,	// (0x0006f327) popup_call_audio_in_window_g1_ParamLimits

0x1001,	// (0x0006f327) popup_call_audio_in_window_g1

0x100d,	// (0x0006f333) popup_call_audio_in_window_g2_ParamLimits

0x100d,	// (0x0006f333) popup_call_audio_in_window_g2

0x1019,	// (0x0006f33f) popup_call_audio_in_window_g3_ParamLimits

0x1019,	// (0x0006f33f) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0007d45e) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0007d45e) popup_call_audio_in_window_g

0x1025,	// (0x0006f34b) popup_call_audio_in_window_t1_ParamLimits

0x1025,	// (0x0006f34b) popup_call_audio_in_window_t1

0x1040,	// (0x0006f366) popup_call_audio_in_window_t2_ParamLimits

0x1040,	// (0x0006f366) popup_call_audio_in_window_t2

0x105b,	// (0x0006f381) popup_call_audio_in_window_t3_ParamLimits

0x105b,	// (0x0006f381) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0007d465) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0007d465) popup_call_audio_in_window_t

0x0feb,	// (0x0006f311) bg_popup_call_pane_cp01_ParamLimits

0x0feb,	// (0x0006f311) bg_popup_call_pane_cp01

0x0ff9,	// (0x0006f31f) call_thumbnail_pane_cp02

0x106e,	// (0x0006f394) call_type_pane_cp022

0x1076,	// (0x0006f39c) popup_call_audio_out_window_g1_ParamLimits

0x1076,	// (0x0006f39c) popup_call_audio_out_window_g1

0x1088,	// (0x0006f3ae) popup_call_audio_out_window_g2_ParamLimits

0x1088,	// (0x0006f3ae) popup_call_audio_out_window_g2

0x1094,	// (0x0006f3ba) popup_call_audio_out_window_g3_ParamLimits

0x1094,	// (0x0006f3ba) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0007d46c) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0007d46c) popup_call_audio_out_window_g

0x10a6,	// (0x0006f3cc) popup_call_audio_out_window_t1_ParamLimits

0x10a6,	// (0x0006f3cc) popup_call_audio_out_window_t1

0x10be,	// (0x0006f3e4) popup_call_audio_out_window_t2_ParamLimits

0x10be,	// (0x0006f3e4) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0007d473) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0007d473) popup_call_audio_out_window_t

0x10d3,	// (0x0006f3f9) bg_popup_call_pane_ParamLimits

0x10d3,	// (0x0006f3f9) bg_popup_call_pane

0x6c73,	// (0x00074f99) call_thumbnail_pane_cp_ParamLimits

0x6c73,	// (0x00074f99) call_thumbnail_pane_cp

0x1157,	// (0x0006f47d) call_type_pane_cp01_ParamLimits

0x1157,	// (0x0006f47d) call_type_pane_cp01

0x119b,	// (0x0006f4c1) popup_call_audio_first_window_g1_ParamLimits

0x119b,	// (0x0006f4c1) popup_call_audio_first_window_g1

0x11e7,	// (0x0006f50d) popup_call_audio_first_window_g2_ParamLimits

0x11e7,	// (0x0006f50d) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0007d478) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0007d478) popup_call_audio_first_window_g

0x122b,	// (0x0006f551) popup_call_audio_first_window_t1_ParamLimits

0x122b,	// (0x0006f551) popup_call_audio_first_window_t1

0x12d7,	// (0x0006f5fd) popup_call_audio_first_window_t4_ParamLimits

0x12d7,	// (0x0006f5fd) popup_call_audio_first_window_t4

0x1363,	// (0x0006f689) popup_call_audio_first_window_t5_ParamLimits

0x1363,	// (0x0006f689) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0007d47d) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0007d47d) popup_call_audio_first_window_t

0x1392,	// (0x0006f6b8) bg_popup_call_pane_cp02

0x139c,	// (0x0006f6c2) call_type_pane_cp023

0x13a4,	// (0x0006f6ca) popup_call_audio_wait_window_g1

0x13ac,	// (0x0006f6d2) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007d484) popup_call_audio_wait_window_g

0x13b4,	// (0x0006f6da) popup_call_audio_wait_window_t3

0x13c2,	// (0x0006f6e8) bg_popup_call_pane_cp03_ParamLimits

0x13c2,	// (0x0006f6e8) bg_popup_call_pane_cp03

0x1422,	// (0x0006f748) call_thumbnail_pane_cp011_ParamLimits

0x1422,	// (0x0006f748) call_thumbnail_pane_cp011

0x142e,	// (0x0006f754) call_type_pane_cp034_ParamLimits

0x142e,	// (0x0006f754) call_type_pane_cp034

0x146a,	// (0x0006f790) popup_call_audio_second_window_g1_ParamLimits

0x146a,	// (0x0006f790) popup_call_audio_second_window_g1

0x14a6,	// (0x0006f7cc) popup_call_audio_second_window_g2_ParamLimits

0x14a6,	// (0x0006f7cc) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0007d489) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0007d489) popup_call_audio_second_window_g

0x14e2,	// (0x0006f808) popup_call_audio_second_window_t1_ParamLimits

0x14e2,	// (0x0006f808) popup_call_audio_second_window_t1

0x1563,	// (0x0006f889) popup_call_audio_second_window_t2_ParamLimits

0x1563,	// (0x0006f889) popup_call_audio_second_window_t2

0x1599,	// (0x0006f8bf) popup_call_audio_second_window_t3_ParamLimits

0x1599,	// (0x0006f8bf) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0007d48e) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0007d48e) popup_call_audio_second_window_t

0x1392,	// (0x0006f6b8) bg_popup_call_pane_cp04

0x15cf,	// (0x0006f8f5) list_conf_pane

0x15d7,	// (0x0006f8fd) popup_call_audio_conf_window_t1

0x15e5,	// (0x0006f90b) call_thumbnail_pane_g1

0x15ed,	// (0x0006f913) bg_pinb_pane_ParamLimits

0x15ed,	// (0x0006f913) bg_pinb_pane

0x15fb,	// (0x0006f921) find_pinb_pane

0x1604,	// (0x0006f92a) listscroll_pinb_pane_ParamLimits

0x1604,	// (0x0006f92a) listscroll_pinb_pane

0x1613,	// (0x0006f939) pinb_bg_pane_g1

0x6c97,	// (0x00074fbd) pinb_bg_pane_g2

0x6ca1,	// (0x00074fc7) pinb_bg_pane_g3

0x6cab,	// (0x00074fd1) pinb_bg_pane_g4

0x6cb5,	// (0x00074fdb) pinb_bg_pane_g5

0x6cbf,	// (0x00074fe5) pinb_bg_pane_g6

0x6cca,	// (0x00074ff0) pinb_bg_pane_g7

0x6cd5,	// (0x00074ffb) pinb_bg_pane_g8

0x6cde,	// (0x00075004) pinb_bg_pane_g9

0x6ce6,	// (0x0007500c) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0007d495) pinb_bg_pane_g

0x6d03,	// (0x00075029) grid_pinb_pane

0x6d0c,	// (0x00075032) list_pinb_pane

0x6d17,	// (0x0007503d) scroll_pane_cp01_ParamLimits

0x6d17,	// (0x0007503d) scroll_pane_cp01

0x161d,	// (0x0006f943) find_pinb_pane_g1_ParamLimits

0x161d,	// (0x0006f943) find_pinb_pane_g1

0x1635,	// (0x0006f95b) find_pinb_pane_t1

0x1647,	// (0x0006f96d) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0007d4af) find_pinb_pane_t

0x165c,	// (0x0006f982) input_focus_pane_cp01_ParamLimits

0x165c,	// (0x0006f982) input_focus_pane_cp01

0x6d27,	// (0x0007504d) cell_pinb_pane_ParamLimits

0x6d27,	// (0x0007504d) cell_pinb_pane

0x6d40,	// (0x00075066) cell_pinb_pane_g1_ParamLimits

0x6d40,	// (0x00075066) cell_pinb_pane_g1

0x6d54,	// (0x0007507a) cell_pinb_pane_g2_ParamLimits

0x6d54,	// (0x0007507a) cell_pinb_pane_g2

0x1668,	// (0x0006f98e) cell_pinb_pane_g3_ParamLimits

0x1668,	// (0x0006f98e) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0007d4b4) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0007d4b4) cell_pinb_pane_g

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp01

0x6d60,	// (0x00075086) list_pinb_item_pane_ParamLimits

0x6d60,	// (0x00075086) list_pinb_item_pane

0x1392,	// (0x0006f6b8) list_highlight_pane_cp02

0x6d75,	// (0x0007509b) list_pinb_item_pane_g1_ParamLimits

0x6d75,	// (0x0007509b) list_pinb_item_pane_g1

0x6d82,	// (0x000750a8) list_pinb_item_pane_g2_ParamLimits

0x6d82,	// (0x000750a8) list_pinb_item_pane_g2

0x6d8e,	// (0x000750b4) list_pinb_item_pane_g3_ParamLimits

0x6d8e,	// (0x000750b4) list_pinb_item_pane_g3

0x6d9d,	// (0x000750c3) list_pinb_item_pane_g4_ParamLimits

0x6d9d,	// (0x000750c3) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0007d4bb) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0007d4bb) list_pinb_item_pane_g

0x6da9,	// (0x000750cf) list_pinb_item_pane_t1_ParamLimits

0x6da9,	// (0x000750cf) list_pinb_item_pane_t1

0x6dda,	// (0x00075100) calc_display_pane

0x6df2,	// (0x00075118) calc_paper_pane

0x6e0e,	// (0x00075134) grid_calc_pane

0x1392,	// (0x0006f6b8) bg_list_pane_cp01

0x6e2e,	// (0x00075154) clock_g1

0x6e36,	// (0x0007515c) clock_g2

0x0001,

0xf19e,	// (0x0007d4c4) clock_g

0x6e3e,	// (0x00075164) clock_t1_ParamLimits

0x6e3e,	// (0x00075164) clock_t1

0x6e53,	// (0x00075179) clock_t2_ParamLimits

0x6e53,	// (0x00075179) clock_t2

0x6e65,	// (0x0007518b) clock_t3_ParamLimits

0x6e65,	// (0x0007518b) clock_t3

0x6e77,	// (0x0007519d) clock_t4_ParamLimits

0x6e77,	// (0x0007519d) clock_t4

0x6e89,	// (0x000751af) clock_t5_ParamLimits

0x6e89,	// (0x000751af) clock_t5

0x6e9e,	// (0x000751c4) clock_t6_ParamLimits

0x6e9e,	// (0x000751c4) clock_t6

0x6eb0,	// (0x000751d6) clock_t7_ParamLimits

0x6eb0,	// (0x000751d6) clock_t7

0x6ec2,	// (0x000751e8) clock_t8_ParamLimits

0x6ec2,	// (0x000751e8) clock_t8

0x6ed4,	// (0x000751fa) clock_t9_ParamLimits

0x6ed4,	// (0x000751fa) clock_t9

0x0008,

0xf1a3,	// (0x0007d4c9) clock_t_ParamLimits

0xf1a3,	// (0x0007d4c9) clock_t

0x167c,	// (0x0006f9a2) popup_clock_analogue_window_cp02

0x167c,	// (0x0006f9a2) popup_clock_digital_window_cp01

0x1684,	// (0x0006f9aa) listscroll_help_pane

0x1392,	// (0x0006f6b8) phob_pre_status_pane

0x168e,	// (0x0006f9b4) grid_qdial_pane

0x1392,	// (0x0006f6b8) listscroll_mce_pane

0x1698,	// (0x0006f9be) bg_notes_pane

0x16a2,	// (0x0006f9c8) list_notes_pane

0x6ee6,	// (0x0007520c) scroll_pane_cp06

0x16ac,	// (0x0006f9d2) bg_calc_paper_pane

0x6ef9,	// (0x0007521f) list_calc_pane

0x16de,	// (0x0006fa04) bg_calc_display_pane

0x6f13,	// (0x00075239) calc_display_pane_t1

0x6f28,	// (0x0007524e) calc_display_pane_t2

0x6f3d,	// (0x00075263) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0007d4dc) calc_display_pane_t

0x6f4f,	// (0x00075275) cell_calc_pane_ParamLimits

0x6f4f,	// (0x00075275) cell_calc_pane

0x1726,	// (0x0006fa4c) bg_calc_paper_pane_g1

0x173e,	// (0x0006fa64) bg_calc_paper_pane_g2

0x1732,	// (0x0006fa58) bg_calc_paper_pane_g3

0x1756,	// (0x0006fa7c) bg_calc_paper_pane_g4

0x174a,	// (0x0006fa70) bg_calc_paper_pane_g5

0x6f76,	// (0x0007529c) bg_calc_paper_pane_g6

0x6f85,	// (0x000752ab) bg_calc_paper_pane_g7

0x6f94,	// (0x000752ba) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0007d4e3) bg_calc_paper_pane_g

0x6fa3,	// (0x000752c9) calc_bg_paper_pane_g9

0x6fb2,	// (0x000752d8) list_calc_item_pane_ParamLimits

0x6fb2,	// (0x000752d8) list_calc_item_pane

0x1762,	// (0x0006fa88) list_calc_item_pane_g1

0x6fcb,	// (0x000752f1) list_calc_item_pane_t1_ParamLimits

0x6fcb,	// (0x000752f1) list_calc_item_pane_t1

0x6fdd,	// (0x00075303) list_calc_item_pane_t2_ParamLimits

0x6fdd,	// (0x00075303) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0007d4f4) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0007d4f4) list_calc_item_pane_t

0x1781,	// (0x0006faa7) cell_calc_pane_g1

0x178b,	// (0x0006fab1) grid_highlight_pane_cp02

0x17c0,	// (0x0006fae6) bg_calc_display_pane_g1

0x700b,	// (0x00075331) bg_calc_display_pane_g2

0x17ad,	// (0x0006fad3) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0007d4fe) bg_calc_display_pane_g

0x7015,	// (0x0007533b) cell_qdial_pane_ParamLimits

0x7015,	// (0x0007533b) cell_qdial_pane

0x7027,	// (0x0007534d) cell_qdial_pane_g1_ParamLimits

0x7027,	// (0x0007534d) cell_qdial_pane_g1

0x7034,	// (0x0007535a) cell_qdial_pane_g2_ParamLimits

0x7034,	// (0x0007535a) cell_qdial_pane_g2

0x17c9,	// (0x0006faef) cell_qdial_pane_g3_ParamLimits

0x17c9,	// (0x0006faef) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0007d505) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0007d505) cell_qdial_pane_g

0x7052,	// (0x00075378) cell_qdial_pane_t1_ParamLimits

0x7052,	// (0x00075378) cell_qdial_pane_t1

0x706a,	// (0x00075390) cell_qdial_pane_t2_ParamLimits

0x706a,	// (0x00075390) cell_qdial_pane_t2

0x707d,	// (0x000753a3) cell_qdial_pane_t3_ParamLimits

0x707d,	// (0x000753a3) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0007d50e) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0007d50e) cell_qdial_pane_t

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp04

0x17d5,	// (0x0006fafb) thumbnail_qdial_pane_ParamLimits

0x17d5,	// (0x0006fafb) thumbnail_qdial_pane

0x1831,	// (0x0006fb57) list_help_pane

0x183b,	// (0x0006fb61) scroll_pane_cp02

0x7090,	// (0x000753b6) help_list_pane_t1_ParamLimits

0x7090,	// (0x000753b6) help_list_pane_t1

0x70ae,	// (0x000753d4) bg_notes_pane_g2

0x70b6,	// (0x000753dc) bg_notes_pane_g3

0x70be,	// (0x000753e4) notes_bg_pane_g1

0x70c6,	// (0x000753ec) notes_bg_pane_g4

0x70ce,	// (0x000753f4) notes_bg_pane_g5

0x70d6,	// (0x000753fc) notes_bg_pane_g6

0x70de,	// (0x00075404) notes_bg_pane_g7

0x70e6,	// (0x0007540c) notes_bg_pane_g8

0x70ee,	// (0x00075414) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0007d52c) notes_bg_pane_g

0x70f6,	// (0x0007541c) list_notes_text_pane_ParamLimits

0x70f6,	// (0x0007541c) list_notes_text_pane

0x188c,	// (0x0006fbb2) list_notes_text_pane_g1

0x710c,	// (0x00075432) list_notes_text_pane_t1

0x18a6,	// (0x0006fbcc) listscroll_cale_week_pane

0x7135,	// (0x0007545b) bg_cale_heading_pane

0x18b5,	// (0x0006fbdb) bg_cale_pane_cp01

0x7149,	// (0x0007546f) cale_week_corner_pane

0x715f,	// (0x00075485) cale_week_day_heading_pane

0x7173,	// (0x00075499) cale_week_scroll_pane_g1

0x7184,	// (0x000754aa) cale_week_scroll_pane_g2

0x7195,	// (0x000754bb) cale_week_scroll_pane_g3

0x71a6,	// (0x000754cc) cale_week_scroll_pane_g4

0x71b7,	// (0x000754dd) cale_week_scroll_pane_g5

0x71c8,	// (0x000754ee) cale_week_scroll_pane_g6

0x71d9,	// (0x000754ff) cale_week_scroll_pane_g7

0x71ea,	// (0x00075510) cale_week_scroll_pane_g8

0x71fb,	// (0x00075521) cale_week_scroll_pane_g9

0x720c,	// (0x00075532) cale_week_scroll_pane_g10

0x721d,	// (0x00075543) cale_week_scroll_pane_g11

0x722e,	// (0x00075554) cale_week_scroll_pane_g12

0x723f,	// (0x00075565) cale_week_scroll_pane_g13

0x7250,	// (0x00075576) cale_week_scroll_pane_g14

0x7261,	// (0x00075587) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0007d53b) cale_week_scroll_pane_g

0x7272,	// (0x00075598) cale_week_time_pane

0x7283,	// (0x000755a9) grid_cale_week_pane

0x7296,	// (0x000755bc) scroll_pane_cp08

0x72ae,	// (0x000755d4) cell_cale_week_pane_ParamLimits

0x72ae,	// (0x000755d4) cell_cale_week_pane

0x72ea,	// (0x00075610) cale_week_day_heading_pane_t1

0x7303,	// (0x00075629) cale_week_day_heading_pane_t2

0x731c,	// (0x00075642) cale_week_day_heading_pane_t3

0x7335,	// (0x0007565b) cale_week_day_heading_pane_t4

0x734e,	// (0x00075674) cale_week_day_heading_pane_t5

0x7367,	// (0x0007568d) cale_week_day_heading_pane_t6

0x7380,	// (0x000756a6) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0007d55a) cale_week_day_heading_pane_t

0x18e0,	// (0x0006fc06) bg_cale_side_pane

0x7399,	// (0x000756bf) cale_week_time_pane_t1

0x73c5,	// (0x000756eb) cale_week_time_pane_t2

0x73f1,	// (0x00075717) cale_week_time_pane_t3

0x741d,	// (0x00075743) cale_week_time_pane_t4

0x7449,	// (0x0007576f) cale_week_time_pane_t5

0x7475,	// (0x0007579b) cale_week_time_pane_t6

0x74a1,	// (0x000757c7) cale_week_time_pane_t7

0x74cd,	// (0x000757f3) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0007d569) cale_week_time_pane_t

0x74f9,	// (0x0007581f) cell_cale_week_pane_g2

0x7515,	// (0x0007583b) cell_cale_week_pane_g3_ParamLimits

0x7515,	// (0x0007583b) cell_cale_week_pane_g3

0x18ee,	// (0x0006fc14) grid_highlight_pane_cp07

0x18f6,	// (0x0006fc1c) listscroll_gms_pane

0x1900,	// (0x0006fc26) grid_gms_pane

0x1909,	// (0x0006fc2f) listscroll_gms_pane_g1

0x1911,	// (0x0006fc37) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0007d57a) listscroll_gms_pane_g

0x752d,	// (0x00075853) scroll_pane_cp010

0x7536,	// (0x0007585c) cell_gms_pane_ParamLimits

0x7536,	// (0x0007585c) cell_gms_pane

0x7547,	// (0x0007586d) cell_gms_pane_g1

0x1919,	// (0x0006fc3f) cell_gms_pane_g2

0x188c,	// (0x0006fbb2) cell_gms_pane_g3

0x1921,	// (0x0006fc47) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0007d57f) cell_gms_pane_g

0x192a,	// (0x0006fc50) grid_highlight_pane_cp09

0x91f1,	// (0x00077517) phob_pre_status_pane_g1

0x91f9,	// (0x0007751f) phob_pre_status_pane_g2

0x9201,	// (0x00077527) phob_pre_status_pane_g3

0x9209,	// (0x0007752f) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x0007d981) phob_pre_status_pane_g

0x9219,	// (0x0007753f) phob_pre_status_pane_t1

0x9227,	// (0x0007754d) phob_pre_status_pane_t2

0x9235,	// (0x0007755b) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x0007d98c) phob_pre_status_pane_t

0x1392,	// (0x0006f6b8) bg_list_pane_cp05

0x7557,	// (0x0007587d) grid_vorec_pane

0x755f,	// (0x00075885) vorec_t1

0x756d,	// (0x00075893) vorec_t2

0x757b,	// (0x000758a1) vorec_t3

0x7589,	// (0x000758af) vorec_t4

0x7597,	// (0x000758bd) vorec_t5

0x75a5,	// (0x000758cb) vorec_t6

0x0006,

0xf262,	// (0x0007d588) vorec_t

0x75c1,	// (0x000758e7) wait_bar_pane_cp01

0xdbb5,	// (0x0007bedb) cell_vorec_pane_ParamLimits

0xdbb5,	// (0x0007bedb) cell_vorec_pane

0x199c,	// (0x0006fcc2) cell_vorec_pane_g1

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp05

0x75d5,	// (0x000758fb) cams_zoom_pane

0x75e1,	// (0x00075907) image_vga_pane

0x75ee,	// (0x00075914) main_camera_pane_g1

0x75fa,	// (0x00075920) main_camera_pane_g2

0x7606,	// (0x0007592c) main_camera_pane_g3

0x7612,	// (0x00075938) main_camera_pane_g4

0x761e,	// (0x00075944) main_camera_pane_g5

0x762a,	// (0x00075950) main_camera_pane_g6

0x7636,	// (0x0007595c) main_camera_pane_g7

0x0007,

0xf271,	// (0x0007d597) main_camera_pane_g

0x7642,	// (0x00075968) main_camera_pane_t1

0x7654,	// (0x0007597a) main_camera_pane_t2

0x0001,

0xf282,	// (0x0007d5a8) main_camera_pane_t

0x7678,	// (0x0007599e) cams_zoom_pane_cp_ParamLimits

0x7678,	// (0x0007599e) cams_zoom_pane_cp

0x769c,	// (0x000759c2) image_cif_pane_ParamLimits

0x769c,	// (0x000759c2) image_cif_pane

0x76b6,	// (0x000759dc) image_subqcif_pane

0x76be,	// (0x000759e4) main_video_pane_g1_ParamLimits

0x76be,	// (0x000759e4) main_video_pane_g1

0x76de,	// (0x00075a04) main_video_pane_g2_ParamLimits

0x76de,	// (0x00075a04) main_video_pane_g2

0x770c,	// (0x00075a32) main_video_pane_g3_ParamLimits

0x770c,	// (0x00075a32) main_video_pane_g3

0x7735,	// (0x00075a5b) main_video_pane_g4_ParamLimits

0x7735,	// (0x00075a5b) main_video_pane_g4

0x775e,	// (0x00075a84) main_video_pane_g5_ParamLimits

0x775e,	// (0x00075a84) main_video_pane_g5

0x19b2,	// (0x0006fcd8) main_video_pane_g6_ParamLimits

0x19b2,	// (0x0006fcd8) main_video_pane_g6

0x0006,

0xf287,	// (0x0007d5ad) main_video_pane_g_ParamLimits

0xf287,	// (0x0007d5ad) main_video_pane_g

0x7780,	// (0x00075aa6) main_video_pane_t1_ParamLimits

0x7780,	// (0x00075aa6) main_video_pane_t1

0x19cc,	// (0x0006fcf2) cams_zoom_pane_g1

0x19d5,	// (0x0006fcfb) cams_zoom_pane_g2

0x19de,	// (0x0006fd04) cams_zoom_pane_g3

0x19e7,	// (0x0006fd0d) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0007d5bc) cams_zoom_pane_g

0x77ca,	// (0x00075af0) grid_cams_pane

0x77d6,	// (0x00075afc) linegrid_cams_pane

0x77e2,	// (0x00075b08) cell_cams_pane_ParamLimits

0x77e2,	// (0x00075b08) cell_cams_pane

0x19f0,	// (0x0006fd16) cams_burst_image_pane

0x19f8,	// (0x0006fd1e) cell_cams_pane_g1

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp03

0x1781,	// (0x0006faa7) mp_bg_pane_g1

0x1392,	// (0x0006f6b8) bg_list_pane_cp03

0x2ab4,	// (0x00070dda) bg_mp_pane

0x2abc,	// (0x00070de2) grid_mp_pane

0x2ac4,	// (0x00070dea) media_player_g1

0x2acc,	// (0x00070df2) media_player_t1

0x2ada,	// (0x00070e00) media_player_t2

0x2ae8,	// (0x00070e0e) media_player_t3

0x2af6,	// (0x00070e1c) media_player_t4

0x2b04,	// (0x00070e2a) media_player_t5

0x2b12,	// (0x00070e38) media_player_t6

0x2b20,	// (0x00070e46) media_player_t7

0x0006,

0xf645,	// (0x0007d96b) media_player_t

0x2b2e,	// (0x00070e54) wait_bar_pane_cp02

0xf62a,	// (0x0007d950) main_usb_pane_t

0x91e8,	// (0x0007750e) cell_mp_pane

0x1781,	// (0x0006faa7) cell_mp_pane_g1

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp06

0x1aa0,	// (0x0006fdc6) grid_skin_colour_pane

0x1aa8,	// (0x0006fdce) list_highlight_pane_cp03

0x7845,	// (0x00075b6b) skin_g1

0x1ab0,	// (0x0006fdd6) skin_t1

0x1abf,	// (0x0006fde5) skin_t2

0x0001,

0xf2cb,	// (0x0007d5f1) skin_t

0x784d,	// (0x00075b73) cell_skin_colour_pane_ParamLimits

0x784d,	// (0x00075b73) cell_skin_colour_pane

0x1acd,	// (0x0006fdf3) cell_skin_colour_pane_g1

0x7896,	// (0x00075bbc) call_video_g1_ParamLimits

0x7896,	// (0x00075bbc) call_video_g1

0x78a2,	// (0x00075bc8) call_video_g2_ParamLimits

0x78a2,	// (0x00075bc8) call_video_g2

0x0001,

0xf2d0,	// (0x0007d5f6) call_video_g_ParamLimits

0xf2d0,	// (0x0007d5f6) call_video_g

0x78da,	// (0x00075c00) call_video_uplink_pane_cp1_ParamLimits

0x78da,	// (0x00075c00) call_video_uplink_pane_cp1

0x1ae7,	// (0x0006fe0d) call_video_uplink_pane_cp2

0x7969,	// (0x00075c8f) video_down_crop_pane_ParamLimits

0x7969,	// (0x00075c8f) video_down_crop_pane

0x7a1f,	// (0x00075d45) video_down_pane_ParamLimits

0x7a1f,	// (0x00075d45) video_down_pane

0x544d,	// (0x00073773) video_down_subqcif_pane_ParamLimits

0x544d,	// (0x00073773) video_down_subqcif_pane

0x5465,	// (0x0007378b) video_down_subqcif_pane_cp_ParamLimits

0x5465,	// (0x0007378b) video_down_subqcif_pane_cp

0x5489,	// (0x000737af) im_reading_pane_ParamLimits

0x5489,	// (0x000737af) im_reading_pane

0x7abd,	// (0x00075de3) im_writing_pane_ParamLimits

0x7abd,	// (0x00075de3) im_writing_pane

0x7ad3,	// (0x00075df9) im_reading_pane_t1

0x54a3,	// (0x000737c9) list_im_pane

0x54b4,	// (0x000737da) scroll_pane_cp07

0x7b0b,	// (0x00075e31) im_writing_pane_t1_ParamLimits

0x7b0b,	// (0x00075e31) im_writing_pane_t1

0x54cd,	// (0x000737f3) im_writing_pane_t2_ParamLimits

0x54cd,	// (0x000737f3) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0007d600) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0007d600) im_writing_pane_t

0x1392,	// (0x0006f6b8) input_focus_pane_cp04

0x1392,	// (0x0006f6b8) input_focus_pane_cp05

0x7b20,	// (0x00075e46) list_im_single_pane_ParamLimits

0x7b20,	// (0x00075e46) list_im_single_pane

0x54ea,	// (0x00073810) list_single_im_pane_t1

0x91ae,	// (0x000774d4) blid_accuracy_pane

0x91b6,	// (0x000774dc) blid_compass_pane

0x91be,	// (0x000774e4) main_location_t1

0x91cc,	// (0x000774f2) main_location_t2

0x91da,	// (0x00077500) main_location_t3

0x0002,

0xf654,	// (0x0007d97a) main_location_t

0x1392,	// (0x0006f6b8) aid_levels_location

0x1781,	// (0x0006faa7) blid_accuracy_pane_g1

0x1781,	// (0x0006faa7) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0007d662) blid_accuracy_pane_g

0x5524,	// (0x0007384a) wml_content_pane

0xdbe9,	// (0x0007bf0f) wml_button_pane_ParamLimits

0xdbe9,	// (0x0007bf0f) wml_button_pane

0x7b38,	// (0x00075e5e) wml_list_single_large_pane_ParamLimits

0x7b38,	// (0x00075e5e) wml_list_single_large_pane

0x7b4f,	// (0x00075e75) wml_list_single_medium_pane_ParamLimits

0x7b4f,	// (0x00075e75) wml_list_single_medium_pane

0x7b67,	// (0x00075e8d) wml_list_single_small_pane_ParamLimits

0x7b67,	// (0x00075e8d) wml_list_single_small_pane

0xdbfd,	// (0x0007bf23) wml_selection_box_pane_ParamLimits

0xdbfd,	// (0x0007bf23) wml_selection_box_pane

0xdc10,	// (0x0007bf36) wml_list_single_pane_t1

0xdc1f,	// (0x0007bf45) wml_list_single_medium_pane_t1

0xdc2e,	// (0x0007bf54) wml_list_single_large_pane_t1

0xdc3d,	// (0x0007bf63) input_focus_pane_cp02_ParamLimits

0xdc3d,	// (0x0007bf63) input_focus_pane_cp02

0xdc50,	// (0x0007bf76) wml_selection_box_pane_g1

0xdc59,	// (0x0007bf7f) wml_selection_box_pane_t1_ParamLimits

0xdc59,	// (0x0007bf7f) wml_selection_box_pane_t1

0x15ed,	// (0x0006f913) bg_wml_button_pane_ParamLimits

0x15ed,	// (0x0006f913) bg_wml_button_pane

0xdc71,	// (0x0007bf97) wml_button_pane_g1

0xdc79,	// (0x0007bf9f) wml_button_pane_t1

0xdc71,	// (0x0007bf97) wml_button_bg_pane_g1

0xdc89,	// (0x0007bfaf) wml_button_bg_pane_g2

0xdc91,	// (0x0007bfb7) wml_button_bg_pane_g3

0xdc99,	// (0x0007bfbf) wml_button_bg_pane_g4

0xdca1,	// (0x0007bfc7) wml_button_bg_pane_g5

0xdca9,	// (0x0007bfcf) wml_button_bg_pane_g6

0xdcb1,	// (0x0007bfd7) wml_button_bg_pane_g7

0xdcb9,	// (0x0007bfdf) wml_button_bg_pane_g8

0xdcc1,	// (0x0007bfe7) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0007d605) wml_button_bg_pane_g

0x7b82,	// (0x00075ea8) bg_list_pane_cp02

0xdcc9,	// (0x0007bfef) mce_header_pane_ParamLimits

0xdcc9,	// (0x0007bfef) mce_header_pane

0xdcdd,	// (0x0007c003) mce_icon_pane

0xdcdd,	// (0x0007c003) mce_image_pane

0xdce6,	// (0x0007c00c) mce_text_pane_ParamLimits

0xdce6,	// (0x0007c00c) mce_text_pane

0x7b8b,	// (0x00075eb1) scroll_pane_cp03

0x7b8b,	// (0x00075eb1) scroll_pane_cp04

0xdcfa,	// (0x0007c020) scroll_pane_cp05_ParamLimits

0xdcfa,	// (0x0007c020) scroll_pane_cp05

0x7b93,	// (0x00075eb9) mce_header_field_pane_ParamLimits

0x7b93,	// (0x00075eb9) mce_header_field_pane

0x7bb3,	// (0x00075ed9) mce_header_field_pane_2_ParamLimits

0x7bb3,	// (0x00075ed9) mce_header_field_pane_2

0x7bc9,	// (0x00075eef) mce_header_field_pane_3

0x7bd1,	// (0x00075ef7) list_single_mce_message_pane_ParamLimits

0x7bd1,	// (0x00075ef7) list_single_mce_message_pane

0x7be8,	// (0x00075f0e) list_single_mce_smart_pane_ParamLimits

0x7be8,	// (0x00075f0e) list_single_mce_smart_pane

0xdd06,	// (0x0007c02c) input_focus_pane_cp03

0xdd0f,	// (0x0007c035) list_header_data_pane

0x7c0a,	// (0x00075f30) mce_header_field_pane_t1

0x7c18,	// (0x00075f3e) list_single_mce_header_pane_ParamLimits

0x7c18,	// (0x00075f3e) list_single_mce_header_pane

0xdd17,	// (0x0007c03d) list_single_mce_header_pane_t1

0xdd26,	// (0x0007c04c) list_single_mce_message_pane_g1

0xdd2f,	// (0x0007c055) list_single_mce_message_pane_t1

0x7c4e,	// (0x00075f74) bg_cale_heading_pane_cp01_ParamLimits

0x7c4e,	// (0x00075f74) bg_cale_heading_pane_cp01

0xdd3e,	// (0x0007c064) bg_cale_pane_cp02_ParamLimits

0xdd3e,	// (0x0007c064) bg_cale_pane_cp02

0x7c71,	// (0x00075f97) cale_month_corner_pane

0x7c87,	// (0x00075fad) cale_month_day_heading_pane_ParamLimits

0x7c87,	// (0x00075fad) cale_month_day_heading_pane

0x7caa,	// (0x00075fd0) cale_month_pane_g1_ParamLimits

0x7caa,	// (0x00075fd0) cale_month_pane_g1

0x7cc6,	// (0x00075fec) cale_month_pane_g2_ParamLimits

0x7cc6,	// (0x00075fec) cale_month_pane_g2

0x7cdf,	// (0x00076005) cale_month_pane_g3_ParamLimits

0x7cdf,	// (0x00076005) cale_month_pane_g3

0x7d0b,	// (0x00076031) cale_month_pane_g4_ParamLimits

0x7d0b,	// (0x00076031) cale_month_pane_g4

0x7d37,	// (0x0007605d) cale_month_pane_g5_ParamLimits

0x7d37,	// (0x0007605d) cale_month_pane_g5

0x7d63,	// (0x00076089) cale_month_pane_g6_ParamLimits

0x7d63,	// (0x00076089) cale_month_pane_g6

0x7d8f,	// (0x000760b5) cale_month_pane_g7_ParamLimits

0x7d8f,	// (0x000760b5) cale_month_pane_g7

0x7dbb,	// (0x000760e1) cale_month_pane_g8_ParamLimits

0x7dbb,	// (0x000760e1) cale_month_pane_g8

0x7de7,	// (0x0007610d) cale_month_pane_g9_ParamLimits

0x7de7,	// (0x0007610d) cale_month_pane_g9

0x7e11,	// (0x00076137) cale_month_pane_g10_ParamLimits

0x7e11,	// (0x00076137) cale_month_pane_g10

0x7e3b,	// (0x00076161) cale_month_pane_g11_ParamLimits

0x7e3b,	// (0x00076161) cale_month_pane_g11

0x7e65,	// (0x0007618b) cale_month_pane_g12_ParamLimits

0x7e65,	// (0x0007618b) cale_month_pane_g12

0x7e8f,	// (0x000761b5) cale_month_pane_g13_ParamLimits

0x7e8f,	// (0x000761b5) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0007d618) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0007d618) cale_month_pane_g

0x7eb9,	// (0x000761df) cale_month_week_pane

0x7eca,	// (0x000761f0) grid_cale_month_pane_ParamLimits

0x7eca,	// (0x000761f0) grid_cale_month_pane

0x7ee8,	// (0x0007620e) cale_month_day_heading_pane_t1

0x7f46,	// (0x0007626c) cale_month_day_heading_pane_t2

0x7fab,	// (0x000762d1) cale_month_day_heading_pane_t3

0x8010,	// (0x00076336) cale_month_day_heading_pane_t4

0x8075,	// (0x0007639b) cale_month_day_heading_pane_t5

0x80da,	// (0x00076400) cale_month_day_heading_pane_t6

0x813f,	// (0x00076465) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0007d633) cale_month_day_heading_pane_t

0x18e0,	// (0x0006fc06) bg_cale_side_pane_cp01

0x81a4,	// (0x000764ca) cale_month_week_pane_t1

0x81bb,	// (0x000764e1) cale_month_week_pane_t2

0x81d2,	// (0x000764f8) cale_month_week_pane_t3

0x81e9,	// (0x0007650f) cale_month_week_pane_t4

0x8200,	// (0x00076526) cale_month_week_pane_t5

0x8217,	// (0x0007653d) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0007d642) cale_month_week_pane_t

0x822e,	// (0x00076554) cell_cale_month_pane_ParamLimits

0x822e,	// (0x00076554) cell_cale_month_pane

0x82d4,	// (0x000765fa) cell_cale_month_pane_g1

0x82e0,	// (0x00076606) cell_cale_month_pane_t1_ParamLimits

0x82e0,	// (0x00076606) cell_cale_month_pane_t1

0x18ee,	// (0x0006fc14) grid_highlight_pane_cp08

0x1781,	// (0x0006faa7) main_smil_g1

0x82fc,	// (0x00076622) smil_status_pane

0xdd73,	// (0x0007c099) smil_text_pane

0x2994,	// (0x00070cba) bg_popup_call3_rect_pane_g8

0x299c,	// (0x00070cc2) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007d8fb) bg_popup_call3_rect_pane_g

0x2c65,	// (0x00070f8b) smil_status_volume_pane_g1

0xdd7d,	// (0x0007c0a3) smil_status_pane_t1

0x94ef,	// (0x00077815) volume_smil_pane

0xdd94,	// (0x0007c0ba) list_smil_text_pane

0x830d,	// (0x00076633) scroll_pane_cp011

0x8316,	// (0x0007663c) smil_text_list_pane_t1_ParamLimits

0x8316,	// (0x0007663c) smil_text_list_pane_t1

0x835b,	// (0x00076681) aid_volume_smil_ParamLimits

0x835b,	// (0x00076681) aid_volume_smil

0x1781,	// (0x0006faa7) smil_volume_pane_g1

0x1781,	// (0x0006faa7) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0007d662) smil_volume_pane_g

0x16de,	// (0x0006fa04) listscroll_cale_day_pane

0xdd9e,	// (0x0007c0c4) bg_cale_pane

0xddb6,	// (0x0007c0dc) list_cale_pane

0xddc7,	// (0x0007c0ed) scroll_pane_cp09

0xddd8,	// (0x0007c0fe) cale_bg_pane_g1

0xdde0,	// (0x0007c106) cale_bg_pane_g2

0xdde8,	// (0x0007c10e) cale_bg_pane_g3

0xddf0,	// (0x0007c116) cale_bg_pane_g4

0xddf8,	// (0x0007c11e) cale_bg_pane_g5

0xde00,	// (0x0007c126) cale_bg_pane_g6

0xde08,	// (0x0007c12e) cale_bg_pane_g7

0xde10,	// (0x0007c136) cale_bg_pane_g8

0xde18,	// (0x0007c13e) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0007d667) cale_bg_pane_g

0x837d,	// (0x000766a3) list_cale_time_pane_ParamLimits

0x837d,	// (0x000766a3) list_cale_time_pane

0xde20,	// (0x0007c146) list_cale_time_pane_g1_ParamLimits

0xde20,	// (0x0007c146) list_cale_time_pane_g1

0xde2c,	// (0x0007c152) list_cale_time_pane_g2_ParamLimits

0xde2c,	// (0x0007c152) list_cale_time_pane_g2

0x8394,	// (0x000766ba) list_cale_time_pane_g3_ParamLimits

0x8394,	// (0x000766ba) list_cale_time_pane_g3

0x83a0,	// (0x000766c6) list_cale_time_pane_g4_ParamLimits

0x83a0,	// (0x000766c6) list_cale_time_pane_g4

0x83ac,	// (0x000766d2) list_cale_time_pane_g5_ParamLimits

0x83ac,	// (0x000766d2) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0007d67a) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0007d67a) list_cale_time_pane_g

0xde46,	// (0x0007c16c) list_cale_time_pane_t1_ParamLimits

0xde46,	// (0x0007c16c) list_cale_time_pane_t1

0xde6e,	// (0x0007c194) list_cale_time_pane_t2_ParamLimits

0xde6e,	// (0x0007c194) list_cale_time_pane_t2

0x86c3,	// (0x000769e9) aid_blid_cardinal_pane

0x8701,	// (0x00076a27) compass_pane_t4

0xde96,	// (0x0007c1bc) list_cale_time_pane_t4_ParamLimits

0xde96,	// (0x0007c1bc) list_cale_time_pane_t4

0x870f,	// (0x00076a35) compass_pane_t5

0x871d,	// (0x00076a43) compass_pane_t6

0x872b,	// (0x00076a51) compass_pane_t7

0xe2e2,	// (0x0007c608) navi_pane_cc_t1

0xe486,	// (0x0007c7ac) aid_phob_thumbnail_center_pane

0x8d5b,	// (0x00077081) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0007d687) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0007d687) list_cale_time_pane_t

0x0feb,	// (0x0006f311) bg_popup_window_pane_cp02_ParamLimits

0x0feb,	// (0x0006f311) bg_popup_window_pane_cp02

0xdebe,	// (0x0007c1e4) heading_pane_cp01_ParamLimits

0xdebe,	// (0x0007c1e4) heading_pane_cp01

0xdeca,	// (0x0007c1f0) loc_req_pane_ParamLimits

0xdeca,	// (0x0007c1f0) loc_req_pane

0xdeda,	// (0x0007c200) loc_type_pane_ParamLimits

0xdeda,	// (0x0007c200) loc_type_pane

0xdeec,	// (0x0007c212) loc_type_pane_t1_ParamLimits

0xdeec,	// (0x0007c212) loc_type_pane_t1

0xdefe,	// (0x0007c224) loc_type_pane_t2_ParamLimits

0xdefe,	// (0x0007c224) loc_type_pane_t2

0xdf10,	// (0x0007c236) loc_type_pane_t3_ParamLimits

0xdf10,	// (0x0007c236) loc_type_pane_t3

0x0002,

0xf368,	// (0x0007d68e) loc_type_pane_t_ParamLimits

0xf368,	// (0x0007d68e) loc_type_pane_t

0xdf22,	// (0x0007c248) list_loc_req_pane

0xdf2c,	// (0x0007c252) scroll_pane_cp012

0x83b8,	// (0x000766de) list_single_loc_request_popup_menu_pane_ParamLimits

0x83b8,	// (0x000766de) list_single_loc_request_popup_menu_pane

0xdf35,	// (0x0007c25b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdf35,	// (0x0007c25b) list_single_loc_request_popup_menu_pane_g1

0xdf41,	// (0x0007c267) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdf41,	// (0x0007c267) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0007d695) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0007d695) list_single_loc_request_popup_menu_pane_g

0xdf4d,	// (0x0007c273) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdf4d,	// (0x0007c273) list_single_loc_request_popup_menu_pane_t1

0x83ca,	// (0x000766f0) bg_popup_window_pane_cp03_ParamLimits

0x83ca,	// (0x000766f0) bg_popup_window_pane_cp03

0x83d8,	// (0x000766fe) heading_loc_req_pane_ParamLimits

0x83d8,	// (0x000766fe) heading_loc_req_pane

0x83e4,	// (0x0007670a) popup_dyc_status_message_window_g1_ParamLimits

0x83e4,	// (0x0007670a) popup_dyc_status_message_window_g1

0x83f0,	// (0x00076716) popup_dyc_status_message_window_t1_ParamLimits

0x83f0,	// (0x00076716) popup_dyc_status_message_window_t1

0x8402,	// (0x00076728) popup_dyc_status_message_window_t2_ParamLimits

0x8402,	// (0x00076728) popup_dyc_status_message_window_t2

0x8414,	// (0x0007673a) popup_dyc_status_message_window_t3_ParamLimits

0x8414,	// (0x0007673a) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0007d69a) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0007d69a) popup_dyc_status_message_window_t

0x1392,	// (0x0006f6b8) bg_heading_pane_cp01

0xdf63,	// (0x0007c289) heading_loc_req_pane_g1

0xdf6b,	// (0x0007c291) heading_loc_req_pane_g2

0xdf73,	// (0x0007c299) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0007d6a1) heading_loc_req_pane_g

0xdf7b,	// (0x0007c2a1) heading_loc_req_pane_t1

0xdf8a,	// (0x0007c2b0) bg_popup_sub_pane_cp01_ParamLimits

0xdf8a,	// (0x0007c2b0) bg_popup_sub_pane_cp01

0xdf98,	// (0x0007c2be) popup_cale_events_window_g1_ParamLimits

0xdf98,	// (0x0007c2be) popup_cale_events_window_g1

0xdfb8,	// (0x0007c2de) popup_cale_events_window_g2_ParamLimits

0xdfb8,	// (0x0007c2de) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0007d6d5) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0007d6d5) popup_cale_events_window_g

0xdfd8,	// (0x0007c2fe) popup_cale_events_window_t1_ParamLimits

0xdfd8,	// (0x0007c2fe) popup_cale_events_window_t1

0xdfea,	// (0x0007c310) popup_cale_events_window_t2_ParamLimits

0xdfea,	// (0x0007c310) popup_cale_events_window_t2

0xe028,	// (0x0007c34e) popup_cale_events_window_t3_ParamLimits

0xe028,	// (0x0007c34e) popup_cale_events_window_t3

0xe062,	// (0x0007c388) popup_cale_events_window_t4_ParamLimits

0xe062,	// (0x0007c388) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0007d6da) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0007d6da) popup_cale_events_window_t

0x849a,	// (0x000767c0) call_type_pane

0xe098,	// (0x0007c3be) popup_call_status_window_g1

0x84a6,	// (0x000767cc) popup_call_status_window_g2

0x84b2,	// (0x000767d8) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0007d6e3) popup_call_status_window_g

0xe0a6,	// (0x0007c3cc) call_type_pane_g1

0xe0af,	// (0x0007c3d5) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0007d6ea) call_type_pane_g

0x1392,	// (0x0006f6b8) bg_popup_sub_pane_cp02

0xe0b8,	// (0x0007c3de) listscroll_popup_wml_pane

0xe0c0,	// (0x0007c3e6) list_wml_pane

0xe0ca,	// (0x0007c3f0) scroll_pane_cp013

0x84be,	// (0x000767e4) list_single_graphic_popup_wml_pane_ParamLimits

0x84be,	// (0x000767e4) list_single_graphic_popup_wml_pane

0x1781,	// (0x0006faa7) list_single_graphic_popup_wml_pane_g1

0xe0d3,	// (0x0007c3f9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0007d6ef) list_single_graphic_popup_wml_pane_g

0xe0db,	// (0x0007c401) list_single_graphic_popup_wml_pane_t1

0xe0f1,	// (0x0007c417) aid_call_pane

0x15e5,	// (0x0006f90b) popup_clock_analogue_window_g1

0x15e5,	// (0x0006f90b) popup_clock_analogue_window_g2

0x84d2,	// (0x000767f8) popup_clock_analogue_window_g3

0x84d2,	// (0x000767f8) popup_clock_analogue_window_g4

0x1781,	// (0x0006faa7) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0007d6f4) popup_clock_analogue_window_g

0x84da,	// (0x00076800) popup_clock_analogue_window_t1

0x84e8,	// (0x0007680e) clock_digital_number_pane_ParamLimits

0x84e8,	// (0x0007680e) clock_digital_number_pane

0x84f4,	// (0x0007681a) clock_digital_number_pane_cp02_ParamLimits

0x84f4,	// (0x0007681a) clock_digital_number_pane_cp02

0x8500,	// (0x00076826) clock_digital_number_pane_cp03_ParamLimits

0x8500,	// (0x00076826) clock_digital_number_pane_cp03

0x850c,	// (0x00076832) clock_digital_number_pane_cp04_ParamLimits

0x850c,	// (0x00076832) clock_digital_number_pane_cp04

0x8518,	// (0x0007683e) clock_digital_separator_pane_ParamLimits

0x8518,	// (0x0007683e) clock_digital_separator_pane

0x8524,	// (0x0007684a) popup_clock_digital_window_t1

0x1781,	// (0x0006faa7) clock_digital_number_pane_g1

0x1781,	// (0x0006faa7) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0007d662) clock_digital_number_pane_g

0x1781,	// (0x0006faa7) clock_digital_separator_pane_g1

0x1781,	// (0x0006faa7) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0007d662) clock_digital_separator_pane_g

0x1392,	// (0x0006f6b8) bg_popup_window_pane_cp04

0xe0f9,	// (0x0007c41f) heading_pane_cp03

0xe101,	// (0x0007c427) listscroll_popup_gms_pane

0xe109,	// (0x0007c42f) grid_large_graphic_popup_pane

0xe113,	// (0x0007c439) listscroll_popup_gms_pane_g1

0xe11b,	// (0x0007c441) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0007d6ff) listscroll_popup_gms_pane_g

0xdbe1,	// (0x0007bf07) scroll_pane_cp014

0x8541,	// (0x00076867) cell_large_graphic_popup_pane_ParamLimits

0x8541,	// (0x00076867) cell_large_graphic_popup_pane

0x8558,	// (0x0007687e) cell_large_graphic_popup_pane_g1_ParamLimits

0x8558,	// (0x0007687e) cell_large_graphic_popup_pane_g1

0xe123,	// (0x0007c449) cell_large_graphic_popup_pane_g2_ParamLimits

0xe123,	// (0x0007c449) cell_large_graphic_popup_pane_g2

0xe12f,	// (0x0007c455) cell_large_graphic_popup_pane_g3_ParamLimits

0xe12f,	// (0x0007c455) cell_large_graphic_popup_pane_g3

0xe13c,	// (0x0007c462) cell_large_graphic_popup_pane_g4_ParamLimits

0xe13c,	// (0x0007c462) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0007d704) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0007d704) cell_large_graphic_popup_pane_g

0xe14c,	// (0x0007c472) grid_highlight_pane_cp010

0x1781,	// (0x0006faa7) bg_popup_call_pane_g1

0xe156,	// (0x0007c47c) list_single_graphic_popup_conf_pane_ParamLimits

0xe156,	// (0x0007c47c) list_single_graphic_popup_conf_pane

0xe169,	// (0x0007c48f) list_highlight_pane_cp01

0xe172,	// (0x0007c498) list_single_graphic_popup_conf_pane_g1

0xe17a,	// (0x0007c4a0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0007d70d) list_single_graphic_popup_conf_pane_g

0xe182,	// (0x0007c4a8) list_single_graphic_popup_conf_pane_t1

0xe190,	// (0x0007c4b6) linegrid_cams_pane_g1

0x8564,	// (0x0007688a) linegrid_cams_pane_g2

0x188c,	// (0x0006fbb2) linegrid_cams_pane_g3

0xe199,	// (0x0007c4bf) linegrid_cams_pane_g4

0x856d,	// (0x00076893) linegrid_cams_pane_g5

0x8576,	// (0x0007689c) linegrid_cams_pane_g6

0x1921,	// (0x0006fc47) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0007d712) linegrid_cams_pane_g

0xe1a2,	// (0x0007c4c8) popup_clock_analogue_window

0xe1a2,	// (0x0007c4c8) popup_clock_digital_window

0x1392,	// (0x0006f6b8) popup_phob_thumbnail_window

0x1781,	// (0x0006faa7) call_video_uplink_pane_g1

0xe1ab,	// (0x0007c4d1) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0007d721) call_video_uplink_pane_g

0x18ee,	// (0x0006fc14) video_uplink_pane

0xe1b3,	// (0x0007c4d9) mce_image_pane_g1

0x857f,	// (0x000768a5) mce_image_pane_g2

0x8587,	// (0x000768ad) mce_image_pane_g3

0x858f,	// (0x000768b5) mce_image_pane_g4

0x8597,	// (0x000768bd) mce_image_pane_g5

0x0004,

0xf400,	// (0x0007d726) mce_image_pane_g

0xe1bd,	// (0x0007c4e3) control_top_pane_stacon_cp01_ParamLimits

0xe1bd,	// (0x0007c4e3) control_top_pane_stacon_cp01

0xe1cd,	// (0x0007c4f3) uni_indicator_pane_stacon_cp01_ParamLimits

0xe1cd,	// (0x0007c4f3) uni_indicator_pane_stacon_cp01

0xe1de,	// (0x0007c504) bg_popup_sub_pane_cp03

0xe1e8,	// (0x0007c50e) chi_dic_find_pane

0x859f,	// (0x000768c5) listscroll_chi_dic_pane

0xe1f0,	// (0x0007c516) main_pane_chidic_g1

0xe1f8,	// (0x0007c51e) chi_dic_find_pane_t1

0xe206,	// (0x0007c52c) find_chidic_pane

0xe20f,	// (0x0007c535) chi_dic_list_pane_ParamLimits

0xe20f,	// (0x0007c535) chi_dic_list_pane

0xe220,	// (0x0007c546) scroll_pane_cp020

0xe228,	// (0x0007c54e) find_chidic_pane_t1

0x1392,	// (0x0006f6b8) input_focus_pane_cp06

0x85b1,	// (0x000768d7) list_chi_dic_pane_ParamLimits

0x85b1,	// (0x000768d7) list_chi_dic_pane

0x85c4,	// (0x000768ea) list_chi_dic_pane_t1_ParamLimits

0x85c4,	// (0x000768ea) list_chi_dic_pane_t1

0x1392,	// (0x0006f6b8) list_highlight_pane_cp020

0xe237,	// (0x0007c55d) bg_cale_heading_pane_g1

0x85d7,	// (0x000768fd) bg_cale_heading_pane_g2

0x85df,	// (0x00076905) bg_cale_heading_pane_g3

0x85e7,	// (0x0007690d) bg_cale_heading_pane_g4

0x85ef,	// (0x00076915) bg_cale_heading_pane_g5

0x85f7,	// (0x0007691d) bg_cale_heading_pane_g6

0x85ff,	// (0x00076925) bg_cale_heading_pane_g7

0x8607,	// (0x0007692d) bg_cale_heading_pane_g8

0x860f,	// (0x00076935) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0007d731) bg_cale_heading_pane_g

0xe237,	// (0x0007c55d) bg_cale_side_pane_g1

0x8617,	// (0x0007693d) bg_cale_side_pane_g2

0x861f,	// (0x00076945) bg_cale_side_pane_g3

0x8627,	// (0x0007694d) bg_cale_side_pane_g4

0x862f,	// (0x00076955) bg_cale_side_pane_g5

0x8637,	// (0x0007695d) bg_cale_side_pane_g6

0x863f,	// (0x00076965) bg_cale_side_pane_g7

0x8647,	// (0x0007696d) bg_cale_side_pane_g8

0x864f,	// (0x00076975) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0007d744) bg_cale_side_pane_g

0x8657,	// (0x0007697d) popup_call_status_window_ParamLimits

0x8657,	// (0x0007697d) popup_call_status_window

0xe23f,	// (0x0007c565) stacon_top_pane

0xe247,	// (0x0007c56d) status_pane_ParamLimits

0xe247,	// (0x0007c56d) status_pane

0xe261,	// (0x0007c587) status_small_pane

0xe269,	// (0x0007c58f) control_pane

0x1392,	// (0x0006f6b8) stacon_bottom_pane

0xe271,	// (0x0007c597) list_single_mce_smart_pane_t1_ParamLimits

0xe271,	// (0x0007c597) list_single_mce_smart_pane_t1

0xe284,	// (0x0007c5aa) list_single_mce_smart_pane_t2_ParamLimits

0xe284,	// (0x0007c5aa) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0007d757) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0007d757) list_single_mce_smart_pane_t

0x8666,	// (0x0007698c) compass_pane

0x866f,	// (0x00076995) main_location2_pane_t1

0x8685,	// (0x000769ab) main_location2_pane_t2

0x869b,	// (0x000769c1) main_location2_pane_t3

0x0003,

0xf436,	// (0x0007d75c) main_location2_pane_t

0xe2ac,	// (0x0007c5d2) compass_pane_g1_ParamLimits

0xe2ac,	// (0x0007c5d2) compass_pane_g1

0x86e3,	// (0x00076a09) compass_pane_t1

0x86f2,	// (0x00076a18) compass_pane_t2

0x0005,

0xf43f,	// (0x0007d765) compass_pane_t

0x8739,	// (0x00076a5f) text_secondary_cp61

0xe2d9,	// (0x0007c5ff) navi_pane_cams_g5

0xe31a,	// (0x0007c640) navi_pane_im_t1

0xe328,	// (0x0007c64e) navi_pane_mp_g1_ParamLimits

0xe328,	// (0x0007c64e) navi_pane_mp_g1

0xe33c,	// (0x0007c662) navi_pane_mp_g2_ParamLimits

0xe33c,	// (0x0007c662) navi_pane_mp_g2

0xe348,	// (0x0007c66e) navi_pane_mp_g3_ParamLimits

0xe348,	// (0x0007c66e) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0007d779) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0007d779) navi_pane_mp_g

0xe354,	// (0x0007c67a) navi_pane_mp_t1

0xe362,	// (0x0007c688) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0007d780) navi_pane_mp_t

0xe3cf,	// (0x0007c6f5) navi_pane_vt_g1

0xe354,	// (0x0007c67a) navi_pane_vt_t1

0xe3d7,	// (0x0007c6fd) navi_slider_pane

0xe3df,	// (0x0007c705) zooming_pane

0xe3e7,	// (0x0007c70d) navi_slider_pane_g1

0x87b0,	// (0x00076ad6) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0007d787) navi_slider_pane_g

0xe40b,	// (0x0007c731) aid_levels_zoom

0xe413,	// (0x0007c739) zooming_pane_g1

0xe41b,	// (0x0007c741) zooming_pane_g2

0xe41b,	// (0x0007c741) zooming_pane_g3

0x0002,

0xf470,	// (0x0007d796) zooming_pane_g

0xe423,	// (0x0007c749) level_10_zoom

0xe42c,	// (0x0007c752) level_11_zoom

0xe435,	// (0x0007c75b) level_1_zoom

0xe43e,	// (0x0007c764) level_2_zoom

0xe447,	// (0x0007c76d) level_3_zoom

0xe450,	// (0x0007c776) level_4_zoom

0xe459,	// (0x0007c77f) level_5_zoom

0xe462,	// (0x0007c788) level_6_zoom

0xe46b,	// (0x0007c791) level_7_zoom

0xe474,	// (0x0007c79a) level_8_zoom

0xe47d,	// (0x0007c7a3) level_9_zoom

0xe48e,	// (0x0007c7b4) popup_phob_thumbnail_window_g1

0xe496,	// (0x0007c7bc) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0007d79d) popup_phob_thumbnail_window_g

0x2b36,	// (0x00070e5c) level_1_location

0x2b3e,	// (0x00070e64) level_2_location

0x2b46,	// (0x00070e6c) level_3_location

0x2b4e,	// (0x00070e74) level_4_location

0xe3df,	// (0x0007c705) level_5_location

0x87c2,	// (0x00076ae8) mce_icon_pane_g1

0x87ca,	// (0x00076af0) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0007d7a2) mce_icon_pane_g

0x87d2,	// (0x00076af8) main_mup_pane_g1_ParamLimits

0x87d2,	// (0x00076af8) main_mup_pane_g1

0x87ea,	// (0x00076b10) main_mup_pane_g2_ParamLimits

0x87ea,	// (0x00076b10) main_mup_pane_g2

0x8806,	// (0x00076b2c) main_mup_pane_g3_ParamLimits

0x8806,	// (0x00076b2c) main_mup_pane_g3

0x8822,	// (0x00076b48) main_mup_pane_g4_ParamLimits

0x8822,	// (0x00076b48) main_mup_pane_g4

0x883e,	// (0x00076b64) main_mup_pane_g5_ParamLimits

0x883e,	// (0x00076b64) main_mup_pane_g5

0x885b,	// (0x00076b81) main_mup_pane_g6_ParamLimits

0x885b,	// (0x00076b81) main_mup_pane_g6

0x8877,	// (0x00076b9d) main_mup_pane_g7_ParamLimits

0x8877,	// (0x00076b9d) main_mup_pane_g7

0x8893,	// (0x00076bb9) main_mup_pane_g8_ParamLimits

0x8893,	// (0x00076bb9) main_mup_pane_g8

0x88af,	// (0x00076bd5) main_mup_pane_g9_ParamLimits

0x88af,	// (0x00076bd5) main_mup_pane_g9

0x88c6,	// (0x00076bec) main_mup_pane_g10_ParamLimits

0x88c6,	// (0x00076bec) main_mup_pane_g10

0x88dd,	// (0x00076c03) main_mup_pane_g11_ParamLimits

0x88dd,	// (0x00076c03) main_mup_pane_g11

0x88f1,	// (0x00076c17) main_mup_pane_g12_ParamLimits

0x88f1,	// (0x00076c17) main_mup_pane_g12

0x88fd,	// (0x00076c23) main_mup_pane_g13_ParamLimits

0x88fd,	// (0x00076c23) main_mup_pane_g13

0x000c,

0xf481,	// (0x0007d7a7) main_mup_pane_g_ParamLimits

0xf481,	// (0x0007d7a7) main_mup_pane_g

0x8911,	// (0x00076c37) main_mup_pane_t1_ParamLimits

0x8911,	// (0x00076c37) main_mup_pane_t1

0x892e,	// (0x00076c54) main_mup_pane_t2_ParamLimits

0x892e,	// (0x00076c54) main_mup_pane_t2

0x8948,	// (0x00076c6e) main_mup_pane_t3_ParamLimits

0x8948,	// (0x00076c6e) main_mup_pane_t3

0x8962,	// (0x00076c88) main_mup_pane_t4_ParamLimits

0x8962,	// (0x00076c88) main_mup_pane_t4

0x8974,	// (0x00076c9a) main_mup_pane_t5_ParamLimits

0x8974,	// (0x00076c9a) main_mup_pane_t5

0x8986,	// (0x00076cac) main_mup_pane_t6_ParamLimits

0x8986,	// (0x00076cac) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0007d7c2) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0007d7c2) main_mup_pane_t

0x899c,	// (0x00076cc2) mup_progress_pane_ParamLimits

0x899c,	// (0x00076cc2) mup_progress_pane

0x89a8,	// (0x00076cce) mup_visualizer_pane_ParamLimits

0x89a8,	// (0x00076cce) mup_visualizer_pane

0x89d6,	// (0x00076cfc) mup_volume_pane_ParamLimits

0x89d6,	// (0x00076cfc) mup_volume_pane

0xe098,	// (0x0007c3be) mup_visualizer_pane_g1_ParamLimits

0xe098,	// (0x0007c3be) mup_visualizer_pane_g1

0xe098,	// (0x0007c3be) mup_visualizer_pane_g2_ParamLimits

0xe098,	// (0x0007c3be) mup_visualizer_pane_g2

0xe2ac,	// (0x0007c5d2) mup_visualizer_pane_g3_ParamLimits

0xe2ac,	// (0x0007c5d2) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0007d7cf) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0007d7cf) mup_visualizer_pane_g

0x1781,	// (0x0006faa7) mup_volume_pane_g1

0xe4a6,	// (0x0007c7cc) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0007d7d6) mup_volume_pane_g

0x1781,	// (0x0006faa7) mup_progress_pane_g1

0xe4af,	// (0x0007c7d5) mup_progress_pane_g2

0xe4b8,	// (0x0007c7de) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0007d7db) mup_progress_pane_g

0x1392,	// (0x0006f6b8) bg_popup_window_pane_cp05

0xe4c1,	// (0x0007c7e7) heading_pane_cp02_ParamLimits

0xe4c1,	// (0x0007c7e7) heading_pane_cp02

0xe4db,	// (0x0007c801) list_popup_blid_pane

0xe4e3,	// (0x0007c809) list_blid_sat_info_pane_ParamLimits

0xe4e3,	// (0x0007c809) list_blid_sat_info_pane

0xe4f6,	// (0x0007c81c) list_blid_sat_info_pane_g1

0xe4fe,	// (0x0007c824) list_blid_sat_info_pane_t1

0x8ac9,	// (0x00076def) mup_equalizer_pane_ParamLimits

0x8ac9,	// (0x00076def) mup_equalizer_pane

0x8ae2,	// (0x00076e08) mup_equalizer_pane_cp1_ParamLimits

0x8ae2,	// (0x00076e08) mup_equalizer_pane_cp1

0x8afb,	// (0x00076e21) mup_equalizer_pane_cp2_ParamLimits

0x8afb,	// (0x00076e21) mup_equalizer_pane_cp2

0x8b14,	// (0x00076e3a) mup_equalizer_pane_cp3_ParamLimits

0x8b14,	// (0x00076e3a) mup_equalizer_pane_cp3

0x8b2d,	// (0x00076e53) mup_equalizer_pane_cp4_ParamLimits

0x8b2d,	// (0x00076e53) mup_equalizer_pane_cp4

0x8b46,	// (0x00076e6c) mup_equalizer_pane_cp5

0x8b58,	// (0x00076e7e) mup_equalizer_pane_cp6

0x8b6a,	// (0x00076e90) mup_equalizer_pane_cp7

0x2a14,	// (0x00070d3a) bg_popup_call_poc_act_pane_g9

0x2a1c,	// (0x00070d42) bg_popup_call_poc_act_pane_g10

0x2a24,	// (0x00070d4a) bg_popup_call_poc_act_pane_g11

0x000a,

0x15ed,	// (0x0006f913) mup_scale_pane

0x1781,	// (0x0006faa7) mup_scale_pane_g1

0xe50c,	// (0x0007c832) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0007d7f7) mup_scale_pane_g

0xe530,	// (0x0007c856) msg_data_pane

0xe538,	// (0x0007c85e) scroll_pane_cp017

0x8b8e,	// (0x00076eb4) bg_list_pane_cp04_ParamLimits

0x8b8e,	// (0x00076eb4) bg_list_pane_cp04

0xe540,	// (0x0007c866) msg_data_pane_g1

0x857f,	// (0x000768a5) msg_data_pane_g2

0x8587,	// (0x000768ad) msg_data_pane_g3

0x8ba6,	// (0x00076ecc) msg_data_pane_g4

0x8597,	// (0x000768bd) msg_data_pane_g5

0x87c2,	// (0x00076ae8) msg_data_pane_g6

0x8bae,	// (0x00076ed4) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0007d806) msg_data_pane_g

0x8bb6,	// (0x00076edc) msg_text_pane_ParamLimits

0x8bb6,	// (0x00076edc) msg_text_pane

0x8bdc,	// (0x00076f02) qrid_highlight_pane_cp011_ParamLimits

0x8bdc,	// (0x00076f02) qrid_highlight_pane_cp011

0x1392,	// (0x0006f6b8) msg_body_pane

0x1392,	// (0x0006f6b8) msg_header_pane

0xe551,	// (0x0007c877) input_focus_pane_cp07

0x8bfe,	// (0x00076f24) msg_header_pane_t1_ParamLimits

0x8bfe,	// (0x00076f24) msg_header_pane_t1

0x8c10,	// (0x00076f36) msg_header_pane_t2_ParamLimits

0x8c10,	// (0x00076f36) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0007d81a) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0007d81a) msg_header_pane_t

0xe566,	// (0x0007c88c) msg_body_pane_g1

0x8c22,	// (0x00076f48) msg_body_pane_t1_ParamLimits

0x8c22,	// (0x00076f48) msg_body_pane_t1

0x8c4d,	// (0x00076f73) msg_body_pane_t2_ParamLimits

0x8c4d,	// (0x00076f73) msg_body_pane_t2

0x8c5f,	// (0x00076f85) msg_body_pane_t3_ParamLimits

0x8c5f,	// (0x00076f85) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0007d81f) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0007d81f) msg_body_pane_t

0x8cbf,	// (0x00076fe5) main_viewer_pane_g1_ParamLimits

0x8cbf,	// (0x00076fe5) main_viewer_pane_g1

0x8ccb,	// (0x00076ff1) main_viewer_pane_g2_ParamLimits

0x8ccb,	// (0x00076ff1) main_viewer_pane_g2

0x8cd7,	// (0x00076ffd) main_viewer_pane_g3_ParamLimits

0x8cd7,	// (0x00076ffd) main_viewer_pane_g3

0x8ce6,	// (0x0007700c) main_viewer_pane_g4_ParamLimits

0x8ce6,	// (0x0007700c) main_viewer_pane_g4

0x8cf5,	// (0x0007701b) main_viewer_pane_g5_ParamLimits

0x8cf5,	// (0x0007701b) main_viewer_pane_g5

0x8cf5,	// (0x0007701b) main_viewer_pane_g7_ParamLimits

0x8cf5,	// (0x0007701b) main_viewer_pane_g7

0x8d07,	// (0x0007702d) main_viewer_pane_g8_ParamLimits

0x8d07,	// (0x0007702d) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0007d82f) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0007d82f) main_viewer_pane_g

0xe56e,	// (0x0007c894) viewer_content_pane_ParamLimits

0xe56e,	// (0x0007c894) viewer_content_pane

0x8d37,	// (0x0007705d) main_postcard_pane_g1_ParamLimits

0x8d37,	// (0x0007705d) main_postcard_pane_g1

0x8d43,	// (0x00077069) main_postcard_pane_g2_ParamLimits

0x8d43,	// (0x00077069) main_postcard_pane_g2

0x8d4f,	// (0x00077075) main_postcard_pane_g3_ParamLimits

0x8d4f,	// (0x00077075) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0007d840) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0007d840) main_postcard_pane_g

0x8d5b,	// (0x00077081) main_postcard_pane_g4

0x2c52,	// (0x00070f78) smil_status_volume_pane_g2

0x8d7f,	// (0x000770a5) postcard_pane_ParamLimits

0x8d7f,	// (0x000770a5) postcard_pane

0xe098,	// (0x0007c3be) postcard_pane_g1_ParamLimits

0xe098,	// (0x0007c3be) postcard_pane_g1

0x8daf,	// (0x000770d5) postcard_pane_g2_ParamLimits

0x8daf,	// (0x000770d5) postcard_pane_g2

0x8dbb,	// (0x000770e1) postcard_pane_g3_ParamLimits

0x8dbb,	// (0x000770e1) postcard_pane_g3

0xe57c,	// (0x0007c8a2) postcard_pane_g4_ParamLimits

0xe57c,	// (0x0007c8a2) postcard_pane_g4

0x8dc7,	// (0x000770ed) postcard_pane_g5_ParamLimits

0x8dc7,	// (0x000770ed) postcard_pane_g5

0x8dd3,	// (0x000770f9) postcard_pane_g6_ParamLimits

0x8dd3,	// (0x000770f9) postcard_pane_g6

0xe58a,	// (0x0007c8b0) postcard_pane_g7_ParamLimits

0xe58a,	// (0x0007c8b0) postcard_pane_g7

0x0006,

0xf527,	// (0x0007d84d) postcard_pane_g_ParamLimits

0xf527,	// (0x0007d84d) postcard_pane_g

0x8ddf,	// (0x00077105) main_mp2_pane_g1_ParamLimits

0x8ddf,	// (0x00077105) main_mp2_pane_g1

0x8deb,	// (0x00077111) main_mp2_pane_g2_ParamLimits

0x8deb,	// (0x00077111) main_mp2_pane_g2

0x8df7,	// (0x0007711d) main_mp2_pane_g3_ParamLimits

0x8df7,	// (0x0007711d) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0007d85c) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0007d85c) main_mp2_pane_g

0x8e03,	// (0x00077129) main_mp2_pane_t1_ParamLimits

0x8e03,	// (0x00077129) main_mp2_pane_t1

0x8e18,	// (0x0007713e) main_mp2_pane_t2_ParamLimits

0x8e18,	// (0x0007713e) main_mp2_pane_t2

0x8e2a,	// (0x00077150) main_mp2_pane_t3_ParamLimits

0x8e2a,	// (0x00077150) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0007d863) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0007d863) main_mp2_pane_t

0xe598,	// (0x0007c8be) pec_content_pane_ParamLimits

0xe598,	// (0x0007c8be) pec_content_pane

0xdbe1,	// (0x0007bf07) scroll_pane_cp015

0xe5aa,	// (0x0007c8d0) pec_attribute_pane_ParamLimits

0xe5aa,	// (0x0007c8d0) pec_attribute_pane

0x8e3c,	// (0x00077162) pec_content_pane_g1_ParamLimits

0x8e3c,	// (0x00077162) pec_content_pane_g1

0xe5ba,	// (0x0007c8e0) pec_content_pane_t1_ParamLimits

0xe5ba,	// (0x0007c8e0) pec_content_pane_t1

0xe5cc,	// (0x0007c8f2) pec_content_pane_t2_ParamLimits

0xe5cc,	// (0x0007c8f2) pec_content_pane_t2

0x0001,

0xf544,	// (0x0007d86a) pec_content_pane_t_ParamLimits

0xf544,	// (0x0007d86a) pec_content_pane_t

0x8e48,	// (0x0007716e) list_single_graphic_pane_cp01_ParamLimits

0x8e48,	// (0x0007716e) list_single_graphic_pane_cp01

0x15ed,	// (0x0006f913) bg_popup_sub_pane_cp04

0xe5de,	// (0x0007c904) popup_mup_playback_window_g1

0xe5ea,	// (0x0007c910) popup_mup_playback_window_t1

0xe5ff,	// (0x0007c925) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0007d86f) popup_mup_playback_window_t

0xe636,	// (0x0007c95c) main_image_pane_g1_ParamLimits

0xe636,	// (0x0007c95c) main_image_pane_g1

0xe679,	// (0x0007c99f) scroll_pane_cp018_ParamLimits

0xe679,	// (0x0007c99f) scroll_pane_cp018

0xe691,	// (0x0007c9b7) scroll_pane_cp016_ParamLimits

0xe691,	// (0x0007c9b7) scroll_pane_cp016

0x8ecd,	// (0x000771f3) smil2_image_pane_ParamLimits

0x8ecd,	// (0x000771f3) smil2_image_pane

0x8ef5,	// (0x0007721b) smil2_root_pane_ParamLimits

0x8ef5,	// (0x0007721b) smil2_root_pane

0x8f21,	// (0x00077247) smil2_text_pane_ParamLimits

0x8f21,	// (0x00077247) smil2_text_pane

0x1392,	// (0x0006f6b8) bg_list_pane_cp06

0xe6cd,	// (0x0007c9f3) grid_radio_pane

0x1392,	// (0x0006f6b8) bg_popup_window_pane_cp06

0xe6d5,	// (0x0007c9fb) main_fmradio_pane_t1

0xe0f9,	// (0x0007c41f) heading_pane_cp04

0xe6e3,	// (0x0007ca09) main_fmradio_pane_t2

0x2a6c,	// (0x00070d92) popup_cale_lunar_info_window_g1

0xe6f1,	// (0x0007ca17) main_fmradio_pane_t3

0x2a74,	// (0x00070d9a) popup_cale_lunar_info_window_g2

0xe6ff,	// (0x0007ca25) main_fmradio_pane_t4

0x0001,

0xe70d,	// (0x0007ca33) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x0007d95d) popup_cale_lunar_info_window_g

0xf55e,	// (0x0007d884) main_fmradio_pane_t

0xe71b,	// (0x0007ca41) wait_bar_pane_cp03

0xdbb5,	// (0x0007bedb) cell_fmradio_pane_ParamLimits

0xdbb5,	// (0x0007bedb) cell_fmradio_pane

0xe58a,	// (0x0007c8b0) cell_fmradio_pane_g1_ParamLimits

0xe58a,	// (0x0007c8b0) cell_fmradio_pane_g1

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp011

0xe723,	// (0x0007ca49) poc_content_pane_ParamLimits

0xe723,	// (0x0007ca49) poc_content_pane

0xe736,	// (0x0007ca5c) scroll_pane_cp019

0x8f55,	// (0x0007727b) popup_call_poc_act_window_ParamLimits

0x8f55,	// (0x0007727b) popup_call_poc_act_window

0x8f62,	// (0x00077288) popup_call_poc_inact_window_ParamLimits

0x8f62,	// (0x00077288) popup_call_poc_inact_window

0xf5fb,	// (0x0007d921) bg_popup_call_poc_act_pane_g

0x2a2c,	// (0x00070d52) bg_popup_call_poc_inact_pane_g1

0x2a34,	// (0x00070d5a) bg_popup_call_poc_inact_pane_g2

0xe73e,	// (0x0007ca64) popup_call_poc_act_window_g2

0x2a3c,	// (0x00070d62) bg_popup_call_poc_inact_pane_g3

0x29bc,	// (0x00070ce2) bg_popup_call_poc_inact_pane_g4

0x2a44,	// (0x00070d6a) bg_popup_call_poc_inact_pane_g5

0xe746,	// (0x0007ca6c) popup_call_poc_act_window_t1_ParamLimits

0xe746,	// (0x0007ca6c) popup_call_poc_act_window_t1

0xe76e,	// (0x0007ca94) popup_call_poc_act_window_t2_ParamLimits

0xe76e,	// (0x0007ca94) popup_call_poc_act_window_t2

0xe796,	// (0x0007cabc) popup_call_poc_act_window_t3_ParamLimits

0xe796,	// (0x0007cabc) popup_call_poc_act_window_t3

0xe7be,	// (0x0007cae4) popup_call_poc_act_window_t4_ParamLimits

0xe7be,	// (0x0007cae4) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0007d88f) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0007d88f) popup_call_poc_act_window_t

0x2a4c,	// (0x00070d72) bg_popup_call_poc_inact_pane_g6

0x2a54,	// (0x00070d7a) bg_popup_call_poc_inact_pane_g7

0x2a5c,	// (0x00070d82) bg_popup_call_poc_inact_pane_g8

0xe7d0,	// (0x0007caf6) popup_call_poc_inact_window_g2

0x2a64,	// (0x00070d8a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x0007d938) bg_popup_call_poc_inact_pane_g

0xe7d8,	// (0x0007cafe) popup_call_poc_inact_window_t1_ParamLimits

0xe7d8,	// (0x0007cafe) popup_call_poc_inact_window_t1

0xe7ed,	// (0x0007cb13) popup_call_poc_inact_window_t2_ParamLimits

0xe7ed,	// (0x0007cb13) popup_call_poc_inact_window_t2

0xe802,	// (0x0007cb28) popup_call_poc_inact_window_t3_ParamLimits

0xe802,	// (0x0007cb28) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0007d898) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0007d898) popup_call_poc_inact_window_t

0x2bd8,	// (0x00070efe) context_pane_ParamLimits

0x945d,	// (0x00077783) signal_pane_ParamLimits

0xe3df,	// (0x0007c705) main_call2_pane

0x2bc6,	// (0x00070eec) popup_phob_thumbnail2_window_ParamLimits

0x2bc6,	// (0x00070eec) popup_phob_thumbnail2_window

0x8c71,	// (0x00076f97) aid_hotspot_pointer_arrow_pane

0x8c79,	// (0x00076f9f) aid_hotspot_pointer_hand_pane

0x9211,	// (0x00077537) phob_pre_status_pane_g5

0x75d5,	// (0x000758fb) cams_zoom_pane_ParamLimits

0x75e1,	// (0x00075907) image_vga_pane_ParamLimits

0x75ee,	// (0x00075914) main_camera_pane_g1_ParamLimits

0x75fa,	// (0x00075920) main_camera_pane_g2_ParamLimits

0x7606,	// (0x0007592c) main_camera_pane_g3_ParamLimits

0x7612,	// (0x00075938) main_camera_pane_g4_ParamLimits

0x761e,	// (0x00075944) main_camera_pane_g5_ParamLimits

0x762a,	// (0x00075950) main_camera_pane_g6_ParamLimits

0x7636,	// (0x0007595c) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0007d597) main_camera_pane_g_ParamLimits

0x7642,	// (0x00075968) main_camera_pane_t1_ParamLimits

0x7654,	// (0x0007597a) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0007d5a8) main_camera_pane_t_ParamLimits

0x15ed,	// (0x0006f913) bg_popup_preview_window_pane_cp01_ParamLimits

0x15ed,	// (0x0006f913) bg_popup_preview_window_pane_cp01

0xe817,	// (0x0007cb3d) popup_phob_thumbnail2_window_g1_ParamLimits

0xe817,	// (0x0007cb3d) popup_phob_thumbnail2_window_g1

0x1392,	// (0x0006f6b8) call2_cli_visual_pane

0x8f7e,	// (0x000772a4) popup_call2_audio_conf_window_ParamLimits

0x8f7e,	// (0x000772a4) popup_call2_audio_conf_window

0x8f91,	// (0x000772b7) popup_call2_audio_first_window_ParamLimits

0x8f91,	// (0x000772b7) popup_call2_audio_first_window

0x900d,	// (0x00077333) popup_call2_audio_in_window_ParamLimits

0x900d,	// (0x00077333) popup_call2_audio_in_window

0x903d,	// (0x00077363) popup_call2_audio_out_window_ParamLimits

0x903d,	// (0x00077363) popup_call2_audio_out_window

0x9089,	// (0x000773af) popup_call2_audio_second_window_ParamLimits

0x9089,	// (0x000773af) popup_call2_audio_second_window

0x90d5,	// (0x000773fb) popup_call2_audio_wait_window_ParamLimits

0x90d5,	// (0x000773fb) popup_call2_audio_wait_window

0x1392,	// (0x0006f6b8) bg_popup_call2_act_pane_cp03

0x15cf,	// (0x0006f8f5) list_conf_pane_cp

0x1bbb,	// (0x0006fee1) popup_call2_audio_conf_window_t1

0xe156,	// (0x0007c47c) list_single_graphic_popup_conf2_pane_ParamLimits

0xe156,	// (0x0007c47c) list_single_graphic_popup_conf2_pane

0xe169,	// (0x0007c48f) list_highlight_pane_cp04

0x1bc9,	// (0x0006feef) list_single_graphic_popup_conf2_pane_g1

0xe17a,	// (0x0007c4a0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0007d89f) list_single_graphic_popup_conf2_pane_g

0x1bd1,	// (0x0006fef7) list_single_graphic_popup_conf2_pane_t1

0x1bdf,	// (0x0006ff05) bg_popup_call2_act_pane_cp01_ParamLimits

0x1bdf,	// (0x0006ff05) bg_popup_call2_act_pane_cp01

0x1c69,	// (0x0006ff8f) call_type_pane_cp05_ParamLimits

0x1c69,	// (0x0006ff8f) call_type_pane_cp05

0x1cbd,	// (0x0006ffe3) popup_call2_audio_second_window_g1_ParamLimits

0x1cbd,	// (0x0006ffe3) popup_call2_audio_second_window_g1

0x1d11,	// (0x00070037) popup_call2_audio_second_window_g2_ParamLimits

0x1d11,	// (0x00070037) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0007d8a4) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0007d8a4) popup_call2_audio_second_window_g

0x1d76,	// (0x0007009c) popup_call2_audio_second_window_t1_ParamLimits

0x1d76,	// (0x0007009c) popup_call2_audio_second_window_t1

0x1e31,	// (0x00070157) popup_call2_audio_second_window_t2_ParamLimits

0x1e31,	// (0x00070157) popup_call2_audio_second_window_t2

0x1e84,	// (0x000701aa) popup_call2_audio_second_window_t3_ParamLimits

0x1e84,	// (0x000701aa) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0007d8ab) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0007d8ab) popup_call2_audio_second_window_t

0x1392,	// (0x0006f6b8) bg_popup_call2_in_pane_cp02

0x139c,	// (0x0006f6c2) call_type_pane_cp04

0x13a4,	// (0x0006f6ca) popup_call2_audio_wait_window_g1

0x13ac,	// (0x0006f6d2) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007d484) popup_call2_audio_wait_window_g

0x13b4,	// (0x0006f6da) popup_call2_audio_wait_window_t3

0x1f77,	// (0x0007029d) bg_popup_call2_act_pane_ParamLimits

0x1f77,	// (0x0007029d) bg_popup_call2_act_pane

0x2037,	// (0x0007035d) call_type_pane_cp03_ParamLimits

0x2037,	// (0x0007035d) call_type_pane_cp03

0x209b,	// (0x000703c1) popup_call2_audio_first_window_g1_ParamLimits

0x209b,	// (0x000703c1) popup_call2_audio_first_window_g1

0x210b,	// (0x00070431) popup_call2_audio_first_window_g2_ParamLimits

0x210b,	// (0x00070431) popup_call2_audio_first_window_g2

0xe098,	// (0x0007c3be) popup_call2_audio_first_window_g3_ParamLimits

0xe098,	// (0x0007c3be) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0007d8b4) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0007d8b4) popup_call2_audio_first_window_g

0x21e9,	// (0x0007050f) popup_call2_audio_first_window_t1_ParamLimits

0x21e9,	// (0x0007050f) popup_call2_audio_first_window_t1

0x22ec,	// (0x00070612) popup_call2_audio_first_window_t4_ParamLimits

0x22ec,	// (0x00070612) popup_call2_audio_first_window_t4

0x23cf,	// (0x000706f5) popup_call2_audio_first_window_t5_ParamLimits

0x23cf,	// (0x000706f5) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0007d8bf) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0007d8bf) popup_call2_audio_first_window_t

0x15e5,	// (0x0006f90b) bg_popup_call2_act_pane_g1

0x2a7c,	// (0x00070da2) popup_cale_lunar_info_window_t1

0x2a8a,	// (0x00070db0) popup_cale_lunar_info_window_t2

0x2a98,	// (0x00070dbe) popup_cale_lunar_info_window_t3

0x1392,	// (0x0006f6b8) bg_popup_call2_bubble_pane

0x24d0,	// (0x000707f6) bg_popup_call2_in_pane_cp01_ParamLimits

0x24d0,	// (0x000707f6) bg_popup_call2_in_pane_cp01

0x106e,	// (0x0006f394) call_type_pane_cp02

0x2518,	// (0x0007083e) popup_call2_audio_out_window_g1_ParamLimits

0x2518,	// (0x0007083e) popup_call2_audio_out_window_g1

0x2544,	// (0x0007086a) popup_call2_audio_out_window_g2_ParamLimits

0x2544,	// (0x0007086a) popup_call2_audio_out_window_g2

0x256c,	// (0x00070892) popup_call2_audio_out_window_g3_ParamLimits

0x256c,	// (0x00070892) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0007d8c8) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0007d8c8) popup_call2_audio_out_window_g

0x25a7,	// (0x000708cd) popup_call2_audio_out_window_t1_ParamLimits

0x25a7,	// (0x000708cd) popup_call2_audio_out_window_t1

0x2606,	// (0x0007092c) popup_call2_audio_out_window_t2_ParamLimits

0x2606,	// (0x0007092c) popup_call2_audio_out_window_t2

0x265a,	// (0x00070980) popup_call2_audio_out_window_t3_ParamLimits

0x265a,	// (0x00070980) popup_call2_audio_out_window_t3

0x2670,	// (0x00070996) popup_call2_audio_out_window_t4_ParamLimits

0x2670,	// (0x00070996) popup_call2_audio_out_window_t4

0x2686,	// (0x000709ac) popup_call2_audio_out_window_t5_ParamLimits

0x2686,	// (0x000709ac) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0007d8d1) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0007d8d1) popup_call2_audio_out_window_t

0x26ea,	// (0x00070a10) bg_popup_call2_in_pane_ParamLimits

0x26ea,	// (0x00070a10) bg_popup_call2_in_pane

0x2746,	// (0x00070a6c) popup_call2_audio_in_window_g1_ParamLimits

0x2746,	// (0x00070a6c) popup_call2_audio_in_window_g1

0x277e,	// (0x00070aa4) popup_call2_audio_in_window_g2_ParamLimits

0x277e,	// (0x00070aa4) popup_call2_audio_in_window_g2

0x27b6,	// (0x00070adc) popup_call2_audio_in_window_g3_ParamLimits

0x27b6,	// (0x00070adc) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0007d8de) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0007d8de) popup_call2_audio_in_window_g

0x280e,	// (0x00070b34) popup_call2_audio_in_window_t1_ParamLimits

0x280e,	// (0x00070b34) popup_call2_audio_in_window_t1

0x288e,	// (0x00070bb4) popup_call2_audio_in_window_t2_ParamLimits

0x288e,	// (0x00070bb4) popup_call2_audio_in_window_t2

0x290e,	// (0x00070c34) popup_call2_audio_in_window_t3_ParamLimits

0x290e,	// (0x00070c34) popup_call2_audio_in_window_t3

0x2928,	// (0x00070c4e) popup_call2_audio_in_window_t4_ParamLimits

0x2928,	// (0x00070c4e) popup_call2_audio_in_window_t4

0x293a,	// (0x00070c60) popup_call2_audio_in_window_t5_ParamLimits

0x293a,	// (0x00070c60) popup_call2_audio_in_window_t5

0x294f,	// (0x00070c75) popup_call2_audio_in_window_t6_ParamLimits

0x294f,	// (0x00070c75) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0007d8e7) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0007d8e7) popup_call2_audio_in_window_t

0x15e5,	// (0x0006f90b) bg_popup_call2_in_pane_g1

0x2aa6,	// (0x00070dcc) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x0007d962) popup_cale_lunar_info_window_t

0x15ed,	// (0x0006f913) bg_popup_call2_rect_pane_ParamLimits

0x15ed,	// (0x0006f913) bg_popup_call2_rect_pane

0x1392,	// (0x0006f6b8) call2_cli_visual_graphic_pane

0x1392,	// (0x0006f6b8) call2_cli_visual_text_pane

0x94e2,	// (0x00077808) smil_status_volume_pane_g3

0x0002,

0x1781,	// (0x0006faa7) call2_cli_visual_graphic_pane_g1

0x1781,	// (0x0006faa7) call2_cli_visual_graphic_pane_g2

0x1781,	// (0x0006faa7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0007d8f4) call2_cli_visual_graphic_pane_g

0x2964,	// (0x00070c8a) bg_popup_call2_rect_pane_g1

0x1829,	// (0x0006fb4f) bg_popup_call2_rect_pane_g2

0x296c,	// (0x00070c92) bg_popup_call2_rect_pane_g3

0x2974,	// (0x00070c9a) bg_popup_call2_rect_pane_g4

0x297c,	// (0x00070ca2) bg_popup_call2_rect_pane_g5

0x2984,	// (0x00070caa) bg_popup_call2_rect_pane_g6

0x298c,	// (0x00070cb2) bg_popup_call2_rect_pane_g7

0x2994,	// (0x00070cba) bg_popup_call2_rect_pane_g8

0x299c,	// (0x00070cc2) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007d8fb) bg_popup_call2_rect_pane_g

0x29a4,	// (0x00070cca) bg_popup_call2_bubble_pane_g1

0x29ac,	// (0x00070cd2) bg_popup_call2_bubble_pane_g2

0x29b4,	// (0x00070cda) bg_popup_call2_bubble_pane_g3

0x29bc,	// (0x00070ce2) bg_popup_call2_bubble_pane_g4

0x29c4,	// (0x00070cea) bg_popup_call2_bubble_pane_g5

0x29cc,	// (0x00070cf2) bg_popup_call2_bubble_pane_g6

0x29d4,	// (0x00070cfa) bg_popup_call2_bubble_pane_g7

0x29dc,	// (0x00070d02) bg_popup_call2_bubble_pane_g8

0x29e4,	// (0x00070d0a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0007d90e) bg_popup_call2_bubble_pane_g

0x7122,	// (0x00075448) aid_cale_week_size_cell_pane

0x7666,	// (0x0007598c) aid_cams_cif_uncrop_pane_ParamLimits

0x7666,	// (0x0007598c) aid_cams_cif_uncrop_pane

0x77be,	// (0x00075ae4) aid_cams_size_cell_ParamLimits

0x77be,	// (0x00075ae4) aid_cams_size_cell

0x77ca,	// (0x00075af0) grid_cams_pane_ParamLimits

0x77d6,	// (0x00075afc) linegrid_cams_pane_ParamLimits

0x78ae,	// (0x00075bd4) call_video_pane_t1

0x78c4,	// (0x00075bea) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0007d5fb) call_video_pane_t

0x7c30,	// (0x00075f56) aid_cale_month_size_cell_pane_ParamLimits

0x7c30,	// (0x00075f56) aid_cale_month_size_cell_pane

0xf685,	// (0x0007d9ab) smil_status_volume_pane_g

0x94ef,	// (0x00077815) volume_smil_pane_ParamLimits

0x0f38,	// (0x0006f25e) aid_popup2_width_pane

0x7045,	// (0x0007536b) cell_qdial_pane_g4_ParamLimits

0x7045,	// (0x0007536b) cell_qdial_pane_g4

0x86c3,	// (0x000769e9) aid_blid_cardinal_pane_ParamLimits

0x86cf,	// (0x000769f5) aid_blid_destination_pane_ParamLimits

0x86cf,	// (0x000769f5) aid_blid_destination_pane

0x15ed,	// (0x0006f913) bg_popup_call_poc_act_pane_ParamLimits

0x15ed,	// (0x0006f913) bg_popup_call_poc_act_pane

0x15ed,	// (0x0006f913) bg_popup_call_poc_inact_pane_ParamLimits

0x15ed,	// (0x0006f913) bg_popup_call_poc_inact_pane

0x29ec,	// (0x00070d12) bg_popup_call_poc_act_pane_g1

0x29f4,	// (0x00070d1a) bg_popup_call_poc_act_pane_g2

0x29fc,	// (0x00070d22) bg_popup_call_poc_act_pane_g3

0x29bc,	// (0x00070ce2) bg_popup_call_poc_act_pane_g4

0x29c4,	// (0x00070cea) bg_popup_call_poc_act_pane_g5

0x2a04,	// (0x00070d2a) bg_popup_call_poc_act_pane_g6

0x29d4,	// (0x00070cfa) bg_popup_call_poc_act_pane_g7

0x2a0c,	// (0x00070d32) bg_popup_call_poc_act_pane_g8

0x1392,	// (0x0006f6b8) main_usb_pane

0x2ba5,	// (0x00070ecb) popup_cale_lunar_info_window

0x7ad3,	// (0x00075df9) im_reading_pane_t1_ParamLimits

0x54a3,	// (0x000737c9) list_im_pane_ParamLimits

0x54b4,	// (0x000737da) scroll_pane_cp07_ParamLimits

0x1392,	// (0x0006f6b8) grid_highlight_pane_cp012

0x15ed,	// (0x0006f913) mup_scale_pane_ParamLimits

0xe098,	// (0x0007c3be) main_usb_pane_g1_ParamLimits

0xe098,	// (0x0007c3be) main_usb_pane_g1

0x9136,	// (0x0007745c) main_usb_pane_g2_ParamLimits

0x9136,	// (0x0007745c) main_usb_pane_g2

0x0001,

0xf625,	// (0x0007d94b) main_usb_pane_g_ParamLimits

0xf625,	// (0x0007d94b) main_usb_pane_g

0x9142,	// (0x00077468) main_usb_pane_t1_ParamLimits

0x9142,	// (0x00077468) main_usb_pane_t1

0x9154,	// (0x0007747a) main_usb_pane_t2_ParamLimits

0x9154,	// (0x0007747a) main_usb_pane_t2

0x9166,	// (0x0007748c) main_usb_pane_t3_ParamLimits

0x9166,	// (0x0007748c) main_usb_pane_t3

0x9178,	// (0x0007749e) main_usb_pane_t4_ParamLimits

0x9178,	// (0x0007749e) main_usb_pane_t4

0x918a,	// (0x000774b0) main_usb_pane_t5_ParamLimits

0x918a,	// (0x000774b0) main_usb_pane_t5

0x919c,	// (0x000774c2) main_usb_pane_t6_ParamLimits

0x919c,	// (0x000774c2) main_usb_pane_t6

0x0005,

0xf62a,	// (0x0007d950) main_usb_pane_t_ParamLimits

0xe2a3,	// (0x0007c5c9) aid_text_placing

0x866f,	// (0x00076995) main_location2_pane_t1_ParamLimits

0x8685,	// (0x000769ab) main_location2_pane_t2_ParamLimits

0x869b,	// (0x000769c1) main_location2_pane_t3_ParamLimits

0x86b1,	// (0x000769d7) main_location2_pane_t4_ParamLimits

0x86b1,	// (0x000769d7) main_location2_pane_t4

0xf436,	// (0x0007d75c) main_location2_pane_t_ParamLimits

0x1629,	// (0x0006f94f) find_pinb_pane_g2_ParamLimits

0x1629,	// (0x0006f94f) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0007d4aa) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0007d4aa) find_pinb_pane_g

0x1635,	// (0x0006f95b) find_pinb_pane_t1_ParamLimits

0x1647,	// (0x0006f96d) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0007d4af) find_pinb_pane_t_ParamLimits

0x1392,	// (0x0006f6b8) main_call3_pane

0x7ee8,	// (0x0007620e) cale_month_day_heading_pane_t1_ParamLimits

0x7f46,	// (0x0007626c) cale_month_day_heading_pane_t2_ParamLimits

0x7fab,	// (0x000762d1) cale_month_day_heading_pane_t3_ParamLimits

0x8010,	// (0x00076336) cale_month_day_heading_pane_t4_ParamLimits

0x8075,	// (0x0007639b) cale_month_day_heading_pane_t5_ParamLimits

0x80da,	// (0x00076400) cale_month_day_heading_pane_t6_ParamLimits

0x813f,	// (0x00076465) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0007d633) cale_month_day_heading_pane_t_ParamLimits

0xdd8b,	// (0x0007c0b1) smil_status_volume_pane

0x8d97,	// (0x000770bd) postcard_address_pane_ParamLimits

0x8d97,	// (0x000770bd) postcard_address_pane

0x8da3,	// (0x000770c9) postcard_message_pane_ParamLimits

0x8da3,	// (0x000770c9) postcard_message_pane

0x9112,	// (0x00077438) call2_cli_visual_pane_t1_ParamLimits

0x9112,	// (0x00077438) call2_cli_visual_pane_t1

0x9640,	// (0x00077966) postcard_message_pane_t1_ParamLimits

0x9640,	// (0x00077966) postcard_message_pane_t1

0x9629,	// (0x0007794f) postcard_address_pane_t1_ParamLimits

0x9629,	// (0x0007794f) postcard_address_pane_t1

0x961c,	// (0x00077942) popup_call3_audio_in_window_ParamLimits

0x961c,	// (0x00077942) popup_call3_audio_in_window

0x9504,	// (0x0007782a) bg_popup_call3_in_pane_ParamLimits

0x9504,	// (0x0007782a) bg_popup_call3_in_pane

0x9562,	// (0x00077888) popup_call3_audio_in_window_g1_ParamLimits

0x9562,	// (0x00077888) popup_call3_audio_in_window_g1

0x957a,	// (0x000778a0) popup_call3_audio_in_window_g2_ParamLimits

0x957a,	// (0x000778a0) popup_call3_audio_in_window_g2

0x9592,	// (0x000778b8) popup_call3_audio_in_window_g3_ParamLimits

0x9592,	// (0x000778b8) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x0007d9b2) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x0007d9b2) popup_call3_audio_in_window_g

0x95ba,	// (0x000778e0) popup_call3_audio_in_window_t1_ParamLimits

0x95ba,	// (0x000778e0) popup_call3_audio_in_window_t1

0x95e2,	// (0x00077908) popup_call3_audio_in_window_t2_ParamLimits

0x95e2,	// (0x00077908) popup_call3_audio_in_window_t2

0x960a,	// (0x00077930) popup_call3_audio_in_window_t3_ParamLimits

0x960a,	// (0x00077930) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x0007d9bb) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x0007d9bb) popup_call3_audio_in_window_t

0xe3df,	// (0x0007c705) bg_popup_call3_rect_pane

0x2964,	// (0x00070c8a) bg_popup_call3_rect_pane_g1

0x1829,	// (0x0006fb4f) bg_popup_call3_rect_pane_g2

0x296c,	// (0x00070c92) bg_popup_call3_rect_pane_g3

0x2974,	// (0x00070c9a) bg_popup_call3_rect_pane_g4

0x297c,	// (0x00070ca2) bg_popup_call3_rect_pane_g5

0x2984,	// (0x00070caa) bg_popup_call3_rect_pane_g6

0x298c,	// (0x00070cb2) bg_popup_call3_rect_pane_g7

0x89f1,	// (0x00076d17) mup_visualizer_osc_pane

0xe49e,	// (0x0007c7c4) mup_visualizer_spec_pane

0x9524,	// (0x0007784a) call3_video_qcif_pane_ParamLimits

0x9524,	// (0x0007784a) call3_video_qcif_pane

0x9534,	// (0x0007785a) call3_video_qcif_uncrop_pane_ParamLimits

0x9534,	// (0x0007785a) call3_video_qcif_uncrop_pane

0x9540,	// (0x00077866) call3_video_subqcif_pane_ParamLimits

0x9540,	// (0x00077866) call3_video_subqcif_pane

0x9552,	// (0x00077878) call3_video_subqcif_uncrop_pane_ParamLimits

0x9552,	// (0x00077878) call3_video_subqcif_uncrop_pane

0x95aa,	// (0x000778d0) popup_call3_audio_in_window_g4_ParamLimits

0x95aa,	// (0x000778d0) popup_call3_audio_in_window_g4

0x94d1,	// (0x000777f7) mup_spec_half_pane

0x94da,	// (0x00077800) mup_spec_half_pane_cp

0x2c38,	// (0x00070f5e) mup_osc_middle_pane

0x2c41,	// (0x00070f67) mup_visualizer_osc_pane_g1

0x94b2,	// (0x000777d8) mup_spec_bar_pane_ParamLimits

0x94b2,	// (0x000777d8) mup_spec_bar_pane

0x2c25,	// (0x00070f4b) mup_spec_bar_pane_g1

0x2c2f,	// (0x00070f55) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0007d9a6) mup_spec_bar_pane_g

0x7122,	// (0x00075448) aid_cale_week_size_cell_pane_ParamLimits

0x7135,	// (0x0007545b) bg_cale_heading_pane_ParamLimits

0x18b5,	// (0x0006fbdb) bg_cale_pane_cp01_ParamLimits

0x7149,	// (0x0007546f) cale_week_corner_pane_ParamLimits

0x715f,	// (0x00075485) cale_week_day_heading_pane_ParamLimits

0x7173,	// (0x00075499) cale_week_scroll_pane_g1_ParamLimits

0x7184,	// (0x000754aa) cale_week_scroll_pane_g2_ParamLimits

0x7195,	// (0x000754bb) cale_week_scroll_pane_g3_ParamLimits

0x71a6,	// (0x000754cc) cale_week_scroll_pane_g4_ParamLimits

0x71b7,	// (0x000754dd) cale_week_scroll_pane_g5_ParamLimits

0x71c8,	// (0x000754ee) cale_week_scroll_pane_g6_ParamLimits

0x71d9,	// (0x000754ff) cale_week_scroll_pane_g7_ParamLimits

0x71ea,	// (0x00075510) cale_week_scroll_pane_g8_ParamLimits

0x71fb,	// (0x00075521) cale_week_scroll_pane_g9_ParamLimits

0x720c,	// (0x00075532) cale_week_scroll_pane_g10_ParamLimits

0x721d,	// (0x00075543) cale_week_scroll_pane_g11_ParamLimits

0x722e,	// (0x00075554) cale_week_scroll_pane_g12_ParamLimits

0x723f,	// (0x00075565) cale_week_scroll_pane_g13_ParamLimits

0x7250,	// (0x00075576) cale_week_scroll_pane_g14_ParamLimits

0x7261,	// (0x00075587) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0007d53b) cale_week_scroll_pane_g_ParamLimits

0x7272,	// (0x00075598) cale_week_time_pane_ParamLimits

0x7283,	// (0x000755a9) grid_cale_week_pane_ParamLimits

0x18ce,	// (0x0006fbf4) listscroll_cale_week_pane_t1

0x7296,	// (0x000755bc) scroll_pane_cp08_ParamLimits

0x7c71,	// (0x00075f97) cale_month_corner_pane_ParamLimits

0xdd61,	// (0x0007c087) cale_month_pane_t1

0x7eb9,	// (0x000761df) cale_month_week_pane_ParamLimits

0xe098,	// (0x0007c3be) popup_call_status_window_g1_ParamLimits

0x84a6,	// (0x000767cc) popup_call_status_window_g2_ParamLimits

0x84b2,	// (0x000767d8) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0007d6e3) popup_call_status_window_g_ParamLimits

0xe0e9,	// (0x0007c40f) aid_call2_pane

0x8bf2,	// (0x00076f18) msg_header_pane_g1

0x8d97,	// (0x000770bd) postcard_address2_pane_ParamLimits

0x8d97,	// (0x000770bd) postcard_address2_pane

0x8da3,	// (0x000770c9) postcard_message2_pane_ParamLimits

0x8da3,	// (0x000770c9) postcard_message2_pane

0x9469,	// (0x0007778f) message2_row_pane_ParamLimits

0x9469,	// (0x0007778f) message2_row_pane

0x9481,	// (0x000777a7) address2_row_pane_ParamLimits

0x9481,	// (0x000777a7) address2_row_pane

0x2bf3,	// (0x00070f19) postcard_message2_row_pane_g1

0x2bfb,	// (0x00070f21) postcard_message2_row_pane_t1

0x2bf3,	// (0x00070f19) address2_row_pane_g1

0x2bfb,	// (0x00070f21) address2_row_pane_t1

0x754f,	// (0x00075875) aid_size_cell_vorec

0x1392,	// (0x0006f6b8) main_rss_pane

0x9494,	// (0x000777ba) rss_list_single_pane_ParamLimits

0x9494,	// (0x000777ba) rss_list_single_pane

0x2c09,	// (0x00070f2f) rss_list_single_pane_t1

0x2c17,	// (0x00070f3d) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x0007d9a1) rss_list_single_pane_t

0x1392,	// (0x0006f6b8) main_camera2_pane

0x1392,	// (0x0006f6b8) main_video2_pane

0x9690,	// (0x000779b6) cams_zoom_pane_cp2_ParamLimits

0x9690,	// (0x000779b6) cams_zoom_pane_cp2

0x969c,	// (0x000779c2) image2_vga_pane_ParamLimits

0x969c,	// (0x000779c2) image2_vga_pane

0x96ab,	// (0x000779d1) main_camera2_pane_g1_ParamLimits

0x96ab,	// (0x000779d1) main_camera2_pane_g1

0x96b7,	// (0x000779dd) main_camera2_pane_g2_ParamLimits

0x96b7,	// (0x000779dd) main_camera2_pane_g2

0x96c3,	// (0x000779e9) main_camera2_pane_g3_ParamLimits

0x96c3,	// (0x000779e9) main_camera2_pane_g3

0x96cf,	// (0x000779f5) main_camera2_pane_g4_ParamLimits

0x96cf,	// (0x000779f5) main_camera2_pane_g4

0x96db,	// (0x00077a01) main_camera2_pane_g5_ParamLimits

0x96db,	// (0x00077a01) main_camera2_pane_g5

0x96e7,	// (0x00077a0d) main_camera2_pane_g6_ParamLimits

0x96e7,	// (0x00077a0d) main_camera2_pane_g6

0x96f3,	// (0x00077a19) main_camera2_pane_g7_ParamLimits

0x96f3,	// (0x00077a19) main_camera2_pane_g7

0x96ff,	// (0x00077a25) main_camera2_pane_g8_ParamLimits

0x96ff,	// (0x00077a25) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x0007d9c2) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x0007d9c2) main_camera2_pane_g

0x9717,	// (0x00077a3d) main_camera2_pane_t1_ParamLimits

0x9717,	// (0x00077a3d) main_camera2_pane_t1

0x9729,	// (0x00077a4f) main_camera2_pane_t2_ParamLimits

0x9729,	// (0x00077a4f) main_camera2_pane_t2

0x973b,	// (0x00077a61) main_camera2_pane_t3_ParamLimits

0x973b,	// (0x00077a61) main_camera2_pane_t3

0x974d,	// (0x00077a73) main_camera2_pane_t4_ParamLimits

0x974d,	// (0x00077a73) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x0007d9d5) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x0007d9d5) main_camera2_pane_t

0x97a8,	// (0x00077ace) cams_zoom_pane_cp4_ParamLimits

0x97a8,	// (0x00077ace) cams_zoom_pane_cp4

0x97b8,	// (0x00077ade) image2_cif_pane_ParamLimits

0x97b8,	// (0x00077ade) image2_cif_pane

0x97c9,	// (0x00077aef) image2_subqcif_pane_ParamLimits

0x97c9,	// (0x00077aef) image2_subqcif_pane

0x97d6,	// (0x00077afc) main_video2_pane_g1_ParamLimits

0x97d6,	// (0x00077afc) main_video2_pane_g1

0x97e8,	// (0x00077b0e) main_video2_pane_g2_ParamLimits

0x97e8,	// (0x00077b0e) main_video2_pane_g2

0x97f8,	// (0x00077b1e) main_video2_pane_g3_ParamLimits

0x97f8,	// (0x00077b1e) main_video2_pane_g3

0x9808,	// (0x00077b2e) main_video2_pane_g4_ParamLimits

0x9808,	// (0x00077b2e) main_video2_pane_g4

0x9818,	// (0x00077b3e) main_video2_pane_g5_ParamLimits

0x9818,	// (0x00077b3e) main_video2_pane_g5

0x9828,	// (0x00077b4e) main_video2_pane_g6_ParamLimits

0x9828,	// (0x00077b4e) main_video2_pane_g6

0x0005,

0xf6be,	// (0x0007d9e4) main_video2_pane_g_ParamLimits

0xf6be,	// (0x0007d9e4) main_video2_pane_g

0x983a,	// (0x00077b60) main_video2_pane_t1_ParamLimits

0x983a,	// (0x00077b60) main_video2_pane_t1

0x9854,	// (0x00077b7a) main_video2_pane_t2_ParamLimits

0x9854,	// (0x00077b7a) main_video2_pane_t2

0x987a,	// (0x00077ba0) main_video2_pane_t3_ParamLimits

0x987a,	// (0x00077ba0) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x0007d9f1) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x0007d9f1) main_video2_pane_t

0x924b,	// (0x00077571) call_muted_g2

0x0001,

0xf66d,	// (0x0007d993) call_muted_g

0x1392,	// (0x0006f6b8) main_mup2_pane

0x2ca6,	// (0x00070fcc) main_mup2_pane_g1_ParamLimits

0x2ca6,	// (0x00070fcc) main_mup2_pane_g1

0x98a0,	// (0x00077bc6) main_mup2_pane_g2_ParamLimits

0x98a0,	// (0x00077bc6) main_mup2_pane_g2

0x9b10,	// (0x00077e36) main_mup_pane_g13_cp1

0x9b18,	// (0x00077e3e) mup_volume_pane_cp1

0x98c0,	// (0x00077be6) main_mup2_pane_g4_ParamLimits

0x98c0,	// (0x00077be6) main_mup2_pane_g4

0x98d1,	// (0x00077bf7) main_mup2_pane_g5_ParamLimits

0x98d1,	// (0x00077bf7) main_mup2_pane_g5

0x98e2,	// (0x00077c08) main_mup2_pane_g6_ParamLimits

0x98e2,	// (0x00077c08) main_mup2_pane_g6

0x98f3,	// (0x00077c19) main_mup2_pane_g7_ParamLimits

0x98f3,	// (0x00077c19) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x0007d9f8) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x0007d9f8) main_mup2_pane_g

0x990f,	// (0x00077c35) main_mup2_pane_t1_ParamLimits

0x990f,	// (0x00077c35) main_mup2_pane_t1

0x9926,	// (0x00077c4c) main_mup2_pane_t2_ParamLimits

0x9926,	// (0x00077c4c) main_mup2_pane_t2

0x993d,	// (0x00077c63) main_mup2_pane_t3_ParamLimits

0x993d,	// (0x00077c63) main_mup2_pane_t3

0x9954,	// (0x00077c7a) main_mup2_pane_t4_ParamLimits

0x9954,	// (0x00077c7a) main_mup2_pane_t4

0x996e,	// (0x00077c94) main_mup2_pane_t5_ParamLimits

0x996e,	// (0x00077c94) main_mup2_pane_t5

0x9988,	// (0x00077cae) main_mup2_pane_t6_ParamLimits

0x9988,	// (0x00077cae) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x0007da07) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x0007da07) main_mup2_pane_t

0x99c0,	// (0x00077ce6) mup2_visualizer_pane_ParamLimits

0x99c0,	// (0x00077ce6) mup2_visualizer_pane

0x99f2,	// (0x00077d18) mup_progress_pane_cp_ParamLimits

0x99f2,	// (0x00077d18) mup_progress_pane_cp

0x9afb,	// (0x00077e21) mup_volume_pane_cp_ParamLimits

0x9afb,	// (0x00077e21) mup_volume_pane_cp

0x9a09,	// (0x00077d2f) mup2_visualizer_pane_g1_ParamLimits

0x9a09,	// (0x00077d2f) mup2_visualizer_pane_g1

0x2c78,	// (0x00070f9e) mup2_visualizer_pane_g2_ParamLimits

0x2c78,	// (0x00070f9e) mup2_visualizer_pane_g2

0x9a1e,	// (0x00077d44) mup2_visualizer_pane_g3_ParamLimits

0x9a1e,	// (0x00077d44) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x0007da14) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x0007da14) mup2_visualizer_pane_g

0xe6c5,	// (0x0007c9eb) aid_size_cell_fmradio

0x932d,	// (0x00077653) aid_height_parent_landcape

0xdbc8,	// (0x0007beee) wml_content_pane_cp

0xdbd0,	// (0x0007bef6) wml_tabs_pane

0xdbd9,	// (0x0007beff) popup_wml_miniature_window

0xdbe1,	// (0x0007bf07) scroll_pane_cp021

0xdbf5,	// (0x0007bf1b) wml_content_pane_comp8

0x1392,	// (0x0006f6b8) bg_popup_sub_pane_cp05

0x2c96,	// (0x00070fbc) popup_wml_miniature_window_g1

0x2c9e,	// (0x00070fc4) wml_miniature_view_pane

0x9a2a,	// (0x00077d50) aid_size_wml_view

0x9a32,	// (0x00077d58) wml_miniature_view_pane_g1

0x9a3b,	// (0x00077d61) wml_miniature_view_pane_g2

0x9a44,	// (0x00077d6a) wml_miniature_view_pane_g3

0x9a4c,	// (0x00077d72) wml_miniature_view_pane_g4

0x9a54,	// (0x00077d7a) wml_miniature_view_pane_g5

0x9a5c,	// (0x00077d82) wml_miniature_view_pane_g6

0x9a64,	// (0x00077d8a) wml_miniature_view_pane_g7

0x9a6c,	// (0x00077d92) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x0007da1b) wml_miniature_view_pane_g

0x2ca6,	// (0x00070fcc) background_graphic_ParamLimits

0x2ca6,	// (0x00070fcc) background_graphic

0x2cb2,	// (0x00070fd8) wml_tabs_2_pane

0x2cbb,	// (0x00070fe1) wml_tabs_3_pane_ParamLimits

0x2cbb,	// (0x00070fe1) wml_tabs_3_pane

0x2ccd,	// (0x00070ff3) wml_tabs_4_pane_ParamLimits

0x2ccd,	// (0x00070ff3) wml_tabs_4_pane

0x2ce3,	// (0x00071009) wml_tabs_5_pane_ParamLimits

0x2ce3,	// (0x00071009) wml_tabs_5_pane

0x2cfd,	// (0x00071023) wml_tabs_pane_g2_ParamLimits

0x2cfd,	// (0x00071023) wml_tabs_pane_g2

0x2d11,	// (0x00071037) wml_tabs_pane_g3_ParamLimits

0x2d11,	// (0x00071037) wml_tabs_pane_g3

0x9a74,	// (0x00077d9a) wml_tabs_2_active_pane_ParamLimits

0x9a74,	// (0x00077d9a) wml_tabs_2_active_pane

0x9a84,	// (0x00077daa) wml_tabs_2_passive_pane_ParamLimits

0x9a84,	// (0x00077daa) wml_tabs_2_passive_pane

0x9a94,	// (0x00077dba) wml_tabs_3_active_pane_cp_ParamLimits

0x9a94,	// (0x00077dba) wml_tabs_3_active_pane_cp

0x9aa5,	// (0x00077dcb) wml_tabs_3_passive_pane_ParamLimits

0x9aa5,	// (0x00077dcb) wml_tabs_3_passive_pane

0x9ab6,	// (0x00077ddc) wml_tabs_3_passive_pane_cp_ParamLimits

0x9ab6,	// (0x00077ddc) wml_tabs_3_passive_pane_cp

0x9ac7,	// (0x00077ded) tabs_4_active_pane

0x9acf,	// (0x00077df5) tabs_4_passive_pane

0x9ad7,	// (0x00077dfd) tabs_4_passive_pane_cp

0x9adf,	// (0x00077e05) tabs_4_passive_pane_cp2

0x912e,	// (0x00077454) aid_height_text

0x89be,	// (0x00076ce4) mup_volume_cont_pane_ParamLimits

0x89be,	// (0x00076ce4) mup_volume_cont_pane

0x6cf1,	// (0x00075017) aid_size_cell_pinb

0x6cfb,	// (0x00075021) aid_size_list_pinb

0x99db,	// (0x00077d01) mup2_volume_cont_pane_ParamLimits

0x99db,	// (0x00077d01) mup2_volume_cont_pane

0x9ae7,	// (0x00077e0d) mup2_volume_cont_pane_g1_ParamLimits

0x9ae7,	// (0x00077e0d) mup2_volume_cont_pane_g1

0x69f0,	// (0x00074d16) aid_size_cell_touch_ParamLimits

0x69f0,	// (0x00074d16) aid_size_cell_touch

0x6bf1,	// (0x00074f17) touch_pane_ParamLimits

0x6bf1,	// (0x00074f17) touch_pane

0x0f26,	// (0x0006f24c) main_rss2_pane

0x2d2e,	// (0x00071054) listscroll_rss2_pane

0x2d37,	// (0x0007105d) rss2_navigation_pane

0x2d3f,	// (0x00071065) list_rss2_pane

0xe220,	// (0x0007c546) scroll_pane_cp22

0x2d47,	// (0x0007106d) rss2_navigation_pane_g1

0x2d50,	// (0x00071076) rss2_navigation_pane_g2

0x2d58,	// (0x0007107e) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x0007da2c) rss2_navigation_pane_g

0x2d60,	// (0x00071086) rss2_navigation_pane_t1

0x9b20,	// (0x00077e46) rss2_list_single_pane_ParamLimits

0x9b20,	// (0x00077e46) rss2_list_single_pane

0x2d6e,	// (0x00071094) rss2_list_single_pane_t2

0x2d7c,	// (0x000710a2) rss2_list_single_pane_t3_ParamLimits

0x2d7c,	// (0x000710a2) rss2_list_single_pane_t3

0x2d99,	// (0x000710bf) rss2_list_single_pane_t4

0x8305,	// (0x0007662b) smil_status_pane_g1

0x542b,	// (0x00073751) main_image2_pane_ParamLimits

0x542b,	// (0x00073751) main_image2_pane

0x970b,	// (0x00077a31) main_camera2_pane_g9_ParamLimits

0x970b,	// (0x00077a31) main_camera2_pane_g9

0x975f,	// (0x00077a85) main_camera2_pane_t5_ParamLimits

0x975f,	// (0x00077a85) main_camera2_pane_t5

0x9771,	// (0x00077a97) main_camera2_pane_t6_ParamLimits

0x9771,	// (0x00077a97) main_camera2_pane_t6

0x9b37,	// (0x00077e5d) main_image2_pane_g1_ParamLimits

0x9b37,	// (0x00077e5d) main_image2_pane_g1

0x8f43,	// (0x00077269) smil2_video_pane_ParamLimits

0x8f43,	// (0x00077269) smil2_video_pane

0x0f50,	// (0x0006f276) aid_zoom_text_primary_cp

0x0f79,	// (0x0006f29f) popup_preview_fixed_window

0x549b,	// (0x000737c1) im_reading_pane_g1

0x9667,	// (0x0007798d) cams2_bc_adjust_pane_cp_ParamLimits

0x9667,	// (0x0007798d) cams2_bc_adjust_pane_cp

0x979c,	// (0x00077ac2) cams2_bc_adjust_pane_ParamLimits

0x979c,	// (0x00077ac2) cams2_bc_adjust_pane

0x3feb,	// (0x00072311) cams2_bc_adjust_pane_g1

0x9b43,	// (0x00077e69) cams2_slider_pane

0x9b4c,	// (0x00077e72) cams2_slider_pane_g1

0x9b55,	// (0x00077e7b) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x0007da33) cams2_slider_pane_g

0x6dda,	// (0x00075100) calc_display_pane_ParamLimits

0x6df2,	// (0x00075118) calc_paper_pane_ParamLimits

0x6e0e,	// (0x00075134) grid_calc_pane_ParamLimits

0x8524,	// (0x0007684a) popup_clock_digital_window_t1_ParamLimits

0xe662,	// (0x0007c988) main_image_pane_t1

0x6dc0,	// (0x000750e6) aid_size_cell_calc_ParamLimits

0x6dc0,	// (0x000750e6) aid_size_cell_calc

0x9352,	// (0x00077678) popup_blid_sat_info2_window_ParamLimits

0x9352,	// (0x00077678) popup_blid_sat_info2_window

0x2daf,	// (0x000710d5) aid_size_cell_blid

0x2db7,	// (0x000710dd) bg_popup_window_pane_cp07

0x2dda,	// (0x00071100) grid_popup_blid_pane

0x2de2,	// (0x00071108) heading_pane_cp05_ParamLimits

0x2de2,	// (0x00071108) heading_pane_cp05

0x2eaa,	// (0x000711d0) cell_popup_blid_pane_ParamLimits

0x2eaa,	// (0x000711d0) cell_popup_blid_pane

0x2eca,	// (0x000711f0) cell_popup_blid_pane_g1

0x2ed2,	// (0x000711f8) cell_popup_blid_pane_t1

0x99a5,	// (0x00077ccb) mup2_indicator_pane_ParamLimits

0x99a5,	// (0x00077ccb) mup2_indicator_pane

0xe3df,	// (0x0007c705) mup2_visualizer_osc_pane

0x2c84,	// (0x00070faa) mup2_visualizer_spec_pane_ParamLimits

0x2c84,	// (0x00070faa) mup2_visualizer_spec_pane

0x9b6f,	// (0x00077e95) mup2_spec_half_pane

0x9b78,	// (0x00077e9e) mup2_spec_half_pane_cp

0x9b80,	// (0x00077ea6) mup2_spec_bar_pane_ParamLimits

0x9b80,	// (0x00077ea6) mup2_spec_bar_pane

0x2c25,	// (0x00070f4b) mup2_spec_bar_pane_g1

0x2c2f,	// (0x00070f55) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x0007d9a6) mup2_spec_bar_pane_g

0x9b9f,	// (0x00077ec5) mup2_osc_middle_pane

0x2c41,	// (0x00070f67) mup2_visualizer_osc_pane_g1

0x0fa1,	// (0x0006f2c7) popup_number_entry_window_t1_ParamLimits

0x0fb4,	// (0x0006f2da) popup_number_entry_window_t2_ParamLimits

0x0fc6,	// (0x0006f2ec) popup_number_entry_window_t3_ParamLimits

0x6c3e,	// (0x00074f64) popup_number_entry_window_t5_ParamLimits

0x6c3e,	// (0x00074f64) popup_number_entry_window_t5

0xf12f,	// (0x0007d455) popup_number_entry_window_t_ParamLimits

0x0fd8,	// (0x0006f2fe) text_title_cp2_ParamLimits

0x8c81,	// (0x00076fa7) aid_hotspot_pointer_text2_pane

0x8d13,	// (0x00077039) main_viewer_pane_g9_ParamLimits

0x8d13,	// (0x00077039) main_viewer_pane_g9

0xdd61,	// (0x0007c087) cale_month_pane_t1_ParamLimits

0xdd9e,	// (0x0007c0c4) bg_cale_pane_ParamLimits

0xddb6,	// (0x0007c0dc) list_cale_pane_ParamLimits

0x18ce,	// (0x0006fbf4) listscroll_cale_day_pane_t1

0xddc7,	// (0x0007c0ed) scroll_pane_cp09_ParamLimits

0x89f9,	// (0x00076d1f) main_mup_eq_pane_t1_ParamLimits

0x89f9,	// (0x00076d1f) main_mup_eq_pane_t1

0x8a0f,	// (0x00076d35) main_mup_eq_pane_t2_ParamLimits

0x8a0f,	// (0x00076d35) main_mup_eq_pane_t2

0x8a25,	// (0x00076d4b) main_mup_eq_pane_t3_ParamLimits

0x8a25,	// (0x00076d4b) main_mup_eq_pane_t3

0x8a3b,	// (0x00076d61) main_mup_eq_pane_t4_ParamLimits

0x8a3b,	// (0x00076d61) main_mup_eq_pane_t4

0x8a51,	// (0x00076d77) main_mup_eq_pane_t5_ParamLimits

0x8a51,	// (0x00076d77) main_mup_eq_pane_t5

0x8a67,	// (0x00076d8d) main_mup_eq_pane_t6_ParamLimits

0x8a67,	// (0x00076d8d) main_mup_eq_pane_t6

0x8a79,	// (0x00076d9f) main_mup_eq_pane_t7_ParamLimits

0x8a79,	// (0x00076d9f) main_mup_eq_pane_t7

0x8a8b,	// (0x00076db1) main_mup_eq_pane_t8_ParamLimits

0x8a8b,	// (0x00076db1) main_mup_eq_pane_t8

0x8a9d,	// (0x00076dc3) main_mup_eq_pane_t9_ParamLimits

0x8a9d,	// (0x00076dc3) main_mup_eq_pane_t9

0x8ab3,	// (0x00076dd9) main_mup_eq_pane_t10_ParamLimits

0x8ab3,	// (0x00076dd9) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0007d7e2) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0007d7e2) main_mup_eq_pane_t

0x8b46,	// (0x00076e6c) mup_equalizer_pane_cp5_ParamLimits

0x8b58,	// (0x00076e7e) mup_equalizer_pane_cp6_ParamLimits

0x8b6a,	// (0x00076e90) mup_equalizer_pane_cp7_ParamLimits

0x0f26,	// (0x0006f24c) main_gallery_pane

0x2c4a,	// (0x00070f70) smil2_volume_pane

0x2c65,	// (0x00070f8b) smil_status_volume_pane_g1_ParamLimits

0x2c52,	// (0x00070f78) smil_status_volume_pane_g2_ParamLimits

0x94e2,	// (0x00077808) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x0007d9ab) smil_status_volume_pane_g_ParamLimits

0x2db7,	// (0x000710dd) bg_popup_window_pane_cp07_ParamLimits

0x2dc5,	// (0x000710eb) blid_firmament_pane

0x9ba8,	// (0x00077ece) aid_size_cell_gallery_ParamLimits

0x9ba8,	// (0x00077ece) aid_size_cell_gallery

0x9bb6,	// (0x00077edc) grid_gallery_pane_ParamLimits

0x9bb6,	// (0x00077edc) grid_gallery_pane

0x9bc2,	// (0x00077ee8) cell_gallery_pane_ParamLimits

0x9bc2,	// (0x00077ee8) cell_gallery_pane

0x2ee0,	// (0x00071206) bg_cell_gallery_focus_pane_ParamLimits

0x2ee0,	// (0x00071206) bg_cell_gallery_focus_pane

0x2ef2,	// (0x00071218) cell_gallery_pane_g1_ParamLimits

0x2ef2,	// (0x00071218) cell_gallery_pane_g1

0x9c01,	// (0x00077f27) cell_gallery_pane_g2_ParamLimits

0x9c01,	// (0x00077f27) cell_gallery_pane_g2

0x9c0e,	// (0x00077f34) cell_gallery_pane_g3_ParamLimits

0x9c0e,	// (0x00077f34) cell_gallery_pane_g3

0x2efe,	// (0x00071224) cell_gallery_pane_g4_ParamLimits

0x2efe,	// (0x00071224) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x0007da59) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x0007da59) cell_gallery_pane_g

0x2f0a,	// (0x00071230) bg_cell_gallery_focus_pane_g1

0x2f12,	// (0x00071238) bg_cell_gallery_focus_pane_g2

0x2f1a,	// (0x00071240) bg_cell_gallery_focus_pane_g3

0x2f22,	// (0x00071248) bg_cell_gallery_focus_pane_g4

0x2f2a,	// (0x00071250) bg_cell_gallery_focus_pane_g5

0x2f32,	// (0x00071258) bg_cell_gallery_focus_pane_g6

0x2f3a,	// (0x00071260) bg_cell_gallery_focus_pane_g7

0x2f42,	// (0x00071268) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x0007da62) bg_cell_gallery_focus_pane_g

0x2f4a,	// (0x00071270) aid_firma_cardinal

0x2f5e,	// (0x00071284) blid_firmament_pane_t1

0x2f75,	// (0x0007129b) blid_firmament_pane_t2

0x2f8c,	// (0x000712b2) blid_firmament_pane_t3

0x2fa3,	// (0x000712c9) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x0007da73) blid_firmament_pane_t

0x2fba,	// (0x000712e0) blid_sat_info_pane

0x2fca,	// (0x000712f0) blid_sat_info_pane_g1

0x2fca,	// (0x000712f0) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x0007da7c) blid_sat_info_pane_g

0x2fd4,	// (0x000712fa) blid_sat_info_pane_t1

0x2fe2,	// (0x00071308) smil2_volume_content_pane

0x2feb,	// (0x00071311) smil2_volume_pane_g1

0x2ff3,	// (0x00071319) smil2_volume_content_pane_g1

0x2ffc,	// (0x00071322) smil2_volume_content_pane_g2

0x3005,	// (0x0007132b) smil2_volume_content_pane_g3

0x300e,	// (0x00071334) smil2_volume_content_pane_g4

0x3017,	// (0x0007133d) smil2_volume_content_pane_g5

0x3020,	// (0x00071346) smil2_volume_content_pane_g6

0x3029,	// (0x0007134f) smil2_volume_content_pane_g7

0x3032,	// (0x00071358) smil2_volume_content_pane_g8

0x303b,	// (0x00071361) smil2_volume_content_pane_g9

0x3044,	// (0x0007136a) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x0007da81) smil2_volume_content_pane_g

0x72ea,	// (0x00075610) cale_week_day_heading_pane_t1_ParamLimits

0x7303,	// (0x00075629) cale_week_day_heading_pane_t2_ParamLimits

0x731c,	// (0x00075642) cale_week_day_heading_pane_t3_ParamLimits

0x7335,	// (0x0007565b) cale_week_day_heading_pane_t4_ParamLimits

0x734e,	// (0x00075674) cale_week_day_heading_pane_t5_ParamLimits

0x7367,	// (0x0007568d) cale_week_day_heading_pane_t6_ParamLimits

0x7380,	// (0x000756a6) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0007d55a) cale_week_day_heading_pane_t_ParamLimits

0x18e0,	// (0x0006fc06) bg_cale_side_pane_ParamLimits

0x7399,	// (0x000756bf) cale_week_time_pane_t1_ParamLimits

0x73c5,	// (0x000756eb) cale_week_time_pane_t2_ParamLimits

0x73f1,	// (0x00075717) cale_week_time_pane_t3_ParamLimits

0x741d,	// (0x00075743) cale_week_time_pane_t4_ParamLimits

0x7449,	// (0x0007576f) cale_week_time_pane_t5_ParamLimits

0x7475,	// (0x0007579b) cale_week_time_pane_t6_ParamLimits

0x74a1,	// (0x000757c7) cale_week_time_pane_t7_ParamLimits

0x74cd,	// (0x000757f3) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0007d569) cale_week_time_pane_t_ParamLimits

0x74f9,	// (0x0007581f) cell_cale_week_pane_g2_ParamLimits

0x18e0,	// (0x0006fc06) bg_cale_side_pane_cp01_ParamLimits

0x81a4,	// (0x000764ca) cale_month_week_pane_t1_ParamLimits

0x81bb,	// (0x000764e1) cale_month_week_pane_t2_ParamLimits

0x81d2,	// (0x000764f8) cale_month_week_pane_t3_ParamLimits

0x81e9,	// (0x0007650f) cale_month_week_pane_t4_ParamLimits

0x8200,	// (0x00076526) cale_month_week_pane_t5_ParamLimits

0x8217,	// (0x0007653d) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0007d642) cale_month_week_pane_t_ParamLimits

0x82d4,	// (0x000765fa) cell_cale_month_pane_g1_ParamLimits

0x0f26,	// (0x0006f24c) main_cale_event_viewer_pane

0x0f26,	// (0x0006f24c) listscroll_cale_event_viewer_pane

0x304d,	// (0x00071373) list_cale_ev_pane

0x3055,	// (0x0007137b) scroll_pane_cp023

0x9c1b,	// (0x00077f41) field_cale_ev_pane_ParamLimits

0x9c1b,	// (0x00077f41) field_cale_ev_pane

0x3061,	// (0x00071387) field_cale_ev_content_pane_ParamLimits

0x3061,	// (0x00071387) field_cale_ev_content_pane

0x306d,	// (0x00071393) field_cale_ev_pane_g1_ParamLimits

0x306d,	// (0x00071393) field_cale_ev_pane_g1

0x3079,	// (0x0007139f) field_cale_ev_pane_g2_ParamLimits

0x3079,	// (0x0007139f) field_cale_ev_pane_g2

0x3091,	// (0x000713b7) field_cale_ev_pane_g3_ParamLimits

0x3091,	// (0x000713b7) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x0007da96) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x0007da96) field_cale_ev_pane_g

0x30a9,	// (0x000713cf) field_cale_ev_pane_t1_ParamLimits

0x30a9,	// (0x000713cf) field_cale_ev_pane_t1

0x9c35,	// (0x00077f5b) field_cale_ev_content_pane_t1_ParamLimits

0x9c35,	// (0x00077f5b) field_cale_ev_content_pane_t1

0xe548,	// (0x0007c86e) bg_button_pane_cp01

0x18a6,	// (0x0006fbcc) listscroll_cale_week_pane_ParamLimits

0x711a,	// (0x00075440) popup_toolbar_window_cp01

0x18ce,	// (0x0006fbf4) listscroll_cale_week_pane_t1_ParamLimits

0x16de,	// (0x0006fa04) listscroll_cale_day_pane_ParamLimits

0x711a,	// (0x00075440) popup_toolbar_window_cp02

0x18ce,	// (0x0006fbf4) listscroll_cale_day_pane_t1_ParamLimits

0x18a6,	// (0x0006fbcc) main_cale_month_pane_ParamLimits

0x93f2,	// (0x00077718) popup_toolbar_window_cp03_ParamLimits

0x93f2,	// (0x00077718) popup_toolbar_window_cp03

0x8e6b,	// (0x00077191) main_image_pane_g2_ParamLimits

0x8e6b,	// (0x00077191) main_image_pane_g2

0x8e77,	// (0x0007719d) main_image_pane_g3_ParamLimits

0x8e77,	// (0x0007719d) main_image_pane_g3

0x0002,

0xf54e,	// (0x0007d874) main_image_pane_g_ParamLimits

0xf54e,	// (0x0007d874) main_image_pane_g

0xe662,	// (0x0007c988) main_image_pane_t1_ParamLimits

0x8e83,	// (0x000771a9) main_image_pane_t2_ParamLimits

0x8e83,	// (0x000771a9) main_image_pane_t2

0x8e95,	// (0x000771bb) main_image_pane_t3_ParamLimits

0x8e95,	// (0x000771bb) main_image_pane_t3

0x8ea7,	// (0x000771cd) main_image_pane_t4_ParamLimits

0x8ea7,	// (0x000771cd) main_image_pane_t4

0x0003,

0xf555,	// (0x0007d87b) main_image_pane_t_ParamLimits

0xf555,	// (0x0007d87b) main_image_pane_t

0x8eb9,	// (0x000771df) popup_image_details_window_cp01

0x8ec1,	// (0x000771e7) popup_toobar_trans_pane_cp01_ParamLimits

0x8ec1,	// (0x000771e7) popup_toobar_trans_pane_cp01

0x9391,	// (0x000776b7) popup_image_details_window_ParamLimits

0x9391,	// (0x000776b7) popup_image_details_window

0x2bad,	// (0x00070ed3) popup_image_focus_window

0x965b,	// (0x00077981) camera2_autofocus_pane_ParamLimits

0x965b,	// (0x00077981) camera2_autofocus_pane

0x0f26,	// (0x0006f24c) bg_popup_sub_pane_cp06

0x30c0,	// (0x000713e6) popup_image_focus_window_g1

0x30c8,	// (0x000713ee) popup_image_focus_window_g2

0x30d0,	// (0x000713f6) popup_image_focus_window_g3

0x30d8,	// (0x000713fe) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x0007da9d) popup_image_focus_window_g

0x30e0,	// (0x00071406) popup_image_focus_window_t1

0x30ee,	// (0x00071414) popup_image_focus_window_t2

0x30fd,	// (0x00071423) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x0007daa6) popup_image_focus_window_t

0x310b,	// (0x00071431) camera2_autofocus_pane_g1

0x542b,	// (0x00073751) bg_tb_trans_pane_cp01

0x3119,	// (0x0007143f) popup_image_details_window_g1

0x312c,	// (0x00071452) popup_image_details_window_g2

0x0002,

0xf792,	// (0x0007dab8) popup_image_details_window_g

0x3155,	// (0x0007147b) popup_image_details_window_t1

0x3167,	// (0x0007148d) popup_image_details_window_t2

0x3180,	// (0x000714a6) popup_image_details_window_t3

0x3194,	// (0x000714ba) popup_image_details_window_t4

0x31af,	// (0x000714d5) popup_image_details_window_t5

0x0004,

0xf799,	// (0x0007dabf) popup_image_details_window_t

0x16ac,	// (0x0006f9d2) bg_calc_paper_pane_ParamLimits

0x6eef,	// (0x00075215) grid_highlight_pane_cp013

0x6ef9,	// (0x0007521f) list_calc_pane_ParamLimits

0x6f0b,	// (0x00075231) scroll_pane_cp024

0x16de,	// (0x0006fa04) bg_calc_display_pane_ParamLimits

0x6f13,	// (0x00075239) calc_display_pane_t1_ParamLimits

0x6f28,	// (0x0007524e) calc_display_pane_t2_ParamLimits

0x6f3d,	// (0x00075263) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0007d4dc) calc_display_pane_t_ParamLimits

0x6ff3,	// (0x00075319) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0007d4f9) cell_calc_pane_g

0x6ffc,	// (0x00075322) cell_calc_pane_t1

0x178b,	// (0x0006fab1) grid_highlight_pane_cp02_ParamLimits

0x17a1,	// (0x0006fac7) toolbar_button_pane_cp01_ParamLimits

0x17a1,	// (0x0006fac7) toolbar_button_pane_cp01

0xe6a7,	// (0x0007c9cd) temp_image_control_pane_ParamLimits

0xe6a7,	// (0x0007c9cd) temp_image_control_pane

0x542b,	// (0x00073751) main_mp3_pane

0x31c9,	// (0x000714ef) temp_image_control_pane_g1_ParamLimits

0x31c9,	// (0x000714ef) temp_image_control_pane_g1

0x31d7,	// (0x000714fd) temp_image_control_pane_g2_ParamLimits

0x31d7,	// (0x000714fd) temp_image_control_pane_g2

0x31e9,	// (0x0007150f) temp_image_control_pane_g3_ParamLimits

0x31e9,	// (0x0007150f) temp_image_control_pane_g3

0x9c7f,	// (0x00077fa5) temp_image_control_pane_g4_ParamLimits

0x9c7f,	// (0x00077fa5) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x0007daca) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x0007daca) temp_image_control_pane_g

0x31c9,	// (0x000714ef) main_mp3_pane_g1

0x9c90,	// (0x00077fb6) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x0007dad3) main_mp3_pane_g

0x322c,	// (0x00071552) main_mp3_pane_t1

0x19a6,	// (0x0006fccc) main_camera_pane_g8_ParamLimits

0x19a6,	// (0x0006fccc) main_camera_pane_g8

0x7774,	// (0x00075a9a) main_video_pane_g7_ParamLimits

0x7774,	// (0x00075a9a) main_video_pane_g7

0x978a,	// (0x00077ab0) main_camera2_pane_t7_ParamLimits

0x978a,	// (0x00077ab0) main_camera2_pane_t7

0x5501,	// (0x00073827) scroll_pane_cp025_ParamLimits

0x5501,	// (0x00073827) scroll_pane_cp025

0x5515,	// (0x0007383b) scroll_pane_cp026_ParamLimits

0x5515,	// (0x0007383b) scroll_pane_cp026

0x5524,	// (0x0007384a) wml_content_pane_ParamLimits

0x0f26,	// (0x0006f24c) main_touch_calib_pane

0x9d27,	// (0x0007804d) main_touch_calib_pane_g1

0x9d33,	// (0x00078059) main_touch_calib_pane_g2

0x9d3f,	// (0x00078065) main_touch_calib_pane_g3

0x9d4b,	// (0x00078071) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x0007daf1) main_touch_calib_pane_g

0x9d57,	// (0x0007807d) main_touch_calib_pane_t1

0x9d6c,	// (0x00078092) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x0007dafa) main_touch_calib_pane_t

0xe2d1,	// (0x0007c5f7) mup_progress_pane_cp02

0xe2f0,	// (0x0007c616) navi_pane_g1

0xe370,	// (0x0007c696) navi_pane_mp_t3

0x542b,	// (0x00073751) main_mp3_pane_ParamLimits

0x942c,	// (0x00077752) navi_pane_ParamLimits

0x31c9,	// (0x000714ef) main_mp3_pane_g1_ParamLimits

0x9c90,	// (0x00077fb6) main_mp3_pane_g2_ParamLimits

0x9c9c,	// (0x00077fc2) main_mp3_pane_g3_ParamLimits

0x9c9c,	// (0x00077fc2) main_mp3_pane_g3

0x9ca8,	// (0x00077fce) main_mp3_pane_g4_ParamLimits

0x9ca8,	// (0x00077fce) main_mp3_pane_g4

0x31f9,	// (0x0007151f) main_mp3_pane_g5_ParamLimits

0x31f9,	// (0x0007151f) main_mp3_pane_g5

0x3207,	// (0x0007152d) main_mp3_pane_g6_ParamLimits

0x3207,	// (0x0007152d) main_mp3_pane_g6

0x3214,	// (0x0007153a) main_mp3_pane_g7_ParamLimits

0x3214,	// (0x0007153a) main_mp3_pane_g7

0x3220,	// (0x00071546) main_mp3_pane_g8_ParamLimits

0x3220,	// (0x00071546) main_mp3_pane_g8

0xf7ad,	// (0x0007dad3) main_mp3_pane_g_ParamLimits

0x9cb4,	// (0x00077fda) main_mp3_pane_t2

0x9cc2,	// (0x00077fe8) main_mp3_pane_t3

0x323a,	// (0x00071560) main_mp3_pane_t4

0x3248,	// (0x0007156e) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x0007dae4) main_mp3_pane_t

0x3256,	// (0x0007157c) mup_progress_pane_cp01

0x0f50,	// (0x0006f276) aid_zoom_text_secondary2

0x304d,	// (0x00071373) list_cale_ev2_pane

0x3055,	// (0x0007137b) scroll_pane_cp023_ParamLimits

0x9db7,	// (0x000780dd) field_cale_ev2_pane_ParamLimits

0x9db7,	// (0x000780dd) field_cale_ev2_pane

0x56ec,	// (0x00073a12) field_cale_ev2_pane_g1_ParamLimits

0x56ec,	// (0x00073a12) field_cale_ev2_pane_g1

0x56f8,	// (0x00073a1e) field_cale_ev2_pane_g2_ParamLimits

0x56f8,	// (0x00073a1e) field_cale_ev2_pane_g2

0x5710,	// (0x00073a36) field_cale_ev2_pane_g3_ParamLimits

0x5710,	// (0x00073a36) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x0007db05) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x0007db05) field_cale_ev2_pane_g

0x325e,	// (0x00071584) field_cale_ev2_pane_t1_ParamLimits

0x325e,	// (0x00071584) field_cale_ev2_pane_t1

0x3275,	// (0x0007159b) field_cale_ev2_pane_t2_ParamLimits

0x3275,	// (0x0007159b) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x0007db0e) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x0007db0e) field_cale_ev2_pane_t

0x8d67,	// (0x0007708d) main_postcard_pane_g5_ParamLimits

0x8d67,	// (0x0007708d) main_postcard_pane_g5

0x8d73,	// (0x00077099) main_postcard_pane_g6_ParamLimits

0x8d73,	// (0x00077099) main_postcard_pane_g6

0x75c9,	// (0x000758ef) camera2_autofocus_pane_cp_ParamLimits

0x75c9,	// (0x000758ef) camera2_autofocus_pane_cp

0x542b,	// (0x00073751) main_mup3_pane

0x9ded,	// (0x00078113) main_mup3_pane_g1_ParamLimits

0x9ded,	// (0x00078113) main_mup3_pane_g1

0x9e0e,	// (0x00078134) main_mup3_pane_g2_ParamLimits

0x9e0e,	// (0x00078134) main_mup3_pane_g2

0x9e71,	// (0x00078197) main_mup3_pane_g3_ParamLimits

0x9e71,	// (0x00078197) main_mup3_pane_g3

0x9eac,	// (0x000781d2) main_mup3_pane_g4_ParamLimits

0x9eac,	// (0x000781d2) main_mup3_pane_g4

0x9ee7,	// (0x0007820d) main_mup3_pane_g5_ParamLimits

0x9ee7,	// (0x0007820d) main_mup3_pane_g5

0x9f22,	// (0x00078248) main_mup3_pane_g6_ParamLimits

0x9f22,	// (0x00078248) main_mup3_pane_g6

0x328a,	// (0x000715b0) main_mup3_pane_g7_ParamLimits

0x328a,	// (0x000715b0) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x0007db1e) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x0007db1e) main_mup3_pane_g

0x9f90,	// (0x000782b6) main_mup3_pane_t1_ParamLimits

0x9f90,	// (0x000782b6) main_mup3_pane_t1

0x9ff3,	// (0x00078319) main_mup3_pane_t2_ParamLimits

0x9ff3,	// (0x00078319) main_mup3_pane_t2

0xa0b0,	// (0x000783d6) main_mup3_pane_t4_ParamLimits

0xa0b0,	// (0x000783d6) main_mup3_pane_t4

0xa0f6,	// (0x0007841c) main_mup3_pane_t5_ParamLimits

0xa0f6,	// (0x0007841c) main_mup3_pane_t5

0xa19a,	// (0x000784c0) main_mup3_pane_t6_ParamLimits

0xa19a,	// (0x000784c0) main_mup3_pane_t6

0x0005,

0xf809,	// (0x0007db2f) main_mup3_pane_t_ParamLimits

0xf809,	// (0x0007db2f) main_mup3_pane_t

0xa242,	// (0x00078568) mup3_progress_pane_ParamLimits

0xa242,	// (0x00078568) mup3_progress_pane

0xa288,	// (0x000785ae) popup_mup3_control_window_ParamLimits

0xa288,	// (0x000785ae) popup_mup3_control_window

0x3298,	// (0x000715be) popup_mup3_text_window

0xa2a1,	// (0x000785c7) mup3_progress_pane_t1

0xa2b7,	// (0x000785dd) mup3_progress_pane_t2

0x32a0,	// (0x000715c6) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x0007db3c) mup3_progress_pane_t

0x32b7,	// (0x000715dd) mup_progress_pane_cp03

0x0f26,	// (0x0006f24c) bg_tb_trans_pane_cp04

0xa2cd,	// (0x000785f3) mup3_volume_pane

0xa2d5,	// (0x000785fb) popup_mup3_control_window_g1

0xa2de,	// (0x00078604) mup3_volume_pane_g1

0xa2e7,	// (0x0007860d) mup3_volume_pane_g2

0xa2f0,	// (0x00078616) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x0007db43) mup3_volume_pane_g

0x0f26,	// (0x0006f24c) bg_tb_trans_pane_cp03

0x32c7,	// (0x000715ed) popup_mup3_text_window_g1

0x32cf,	// (0x000715f5) popup_mup3_text_window_t1

0x1762,	// (0x0006fa88) list_calc_item_pane_g1_ParamLimits

0x2d25,	// (0x0007104b) mup_volume_pane_cp_g1

0x9d81,	// (0x000780a7) main_touch_calib_pane_t3

0x9d93,	// (0x000780b9) main_touch_calib_pane_t4

0x9da5,	// (0x000780cb) main_touch_calib_pane_t5

0x0f30,	// (0x0006f256) aid_cell_size_toolbar2

0x0f38,	// (0x0006f25e) aid_popup3_width_pane

0x0f40,	// (0x0006f266) aid_zoom_text_msg_primary

0x75b3,	// (0x000758d9) vorec_t7

0x1726,	// (0x0006fa4c) bg_calc_paper_pane_g1_ParamLimits

0x173e,	// (0x0006fa64) bg_calc_paper_pane_g2_ParamLimits

0x1732,	// (0x0006fa58) bg_calc_paper_pane_g3_ParamLimits

0x1756,	// (0x0006fa7c) bg_calc_paper_pane_g4_ParamLimits

0x174a,	// (0x0006fa70) bg_calc_paper_pane_g5_ParamLimits

0x6f76,	// (0x0007529c) bg_calc_paper_pane_g6_ParamLimits

0x6f85,	// (0x000752ab) bg_calc_paper_pane_g7_ParamLimits

0x6f94,	// (0x000752ba) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0007d4e3) bg_calc_paper_pane_g_ParamLimits

0x6fa3,	// (0x000752c9) calc_bg_paper_pane_g9_ParamLimits

0x76a9,	// (0x000759cf) image_qvga_pane_ParamLimits

0x76a9,	// (0x000759cf) image_qvga_pane

0x15ed,	// (0x0006f913) bg_popup_sub_pane_cp04_ParamLimits

0xe5de,	// (0x0007c904) popup_mup_playback_window_g1_ParamLimits

0xe5ea,	// (0x0007c910) popup_mup_playback_window_t1_ParamLimits

0xe5ff,	// (0x0007c925) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0007d86f) popup_mup_playback_window_t_ParamLimits

0x98b1,	// (0x00077bd7) main_mup2_pane_g3_ParamLimits

0x98b1,	// (0x00077bd7) main_mup2_pane_g3

0x7917,	// (0x00075c3d) popup_toolbar_window_cp04

0x1d65,	// (0x0007008b) popup_call2_audio_second_window_g3_ParamLimits

0x1d65,	// (0x0007008b) popup_call2_audio_second_window_g3

0x216f,	// (0x00070495) popup_call2_audio_first_window_g4_ParamLimits

0x216f,	// (0x00070495) popup_call2_audio_first_window_g4

0x27ee,	// (0x00070b14) popup_call2_audio_in_window_g4_ParamLimits

0x27ee,	// (0x00070b14) popup_call2_audio_in_window_g4

0x8e5e,	// (0x00077184) aid_area_sk_bg_cut_ParamLimits

0x8e5e,	// (0x00077184) aid_area_sk_bg_cut

0xe614,	// (0x0007c93a) aid_area_sk_bg_cut_2_ParamLimits

0xe614,	// (0x0007c93a) aid_area_sk_bg_cut_2

0x9bf1,	// (0x00077f17) aid_placing_details_win

0x9bf9,	// (0x00077f1f) aid_placing_details_win_2

0x310b,	// (0x00071431) camera2_autofocus_pane_g1_ParamLimits

0x6bad,	// (0x00074ed3) popup_fixed_preview_cale_window_ParamLimits

0x6bad,	// (0x00074ed3) popup_fixed_preview_cale_window

0xe3f0,	// (0x0007c716) navi_slider_pane_g3

0xe3f9,	// (0x0007c71f) navi_slider_pane_g4

0xe402,	// (0x0007c728) navi_slider_pane_g5

0xe3f0,	// (0x0007c716) navi_slider_pane_g6

0x87b9,	// (0x00076adf) navi_slider_pane_g7

0xe515,	// (0x0007c83b) mup_scale_pane_g3

0xe51e,	// (0x0007c844) mup_scale_pane_g4

0xe527,	// (0x0007c84d) mup_scale_pane_g5

0x8b7c,	// (0x00076ea2) mup_scale_pane_g6

0x8b85,	// (0x00076eab) mup_scale_pane_g7

0xe3f0,	// (0x0007c716) cams2_slider_pane_g3

0x2da7,	// (0x000710cd) cams2_slider_pane_g4

0x9b5e,	// (0x00077e84) cams2_slider_pane_g5

0xe3f0,	// (0x0007c716) cams2_slider_pane_g6

0x9b66,	// (0x00077e8c) cams2_slider_pane_g7

0x2fca,	// (0x000712f0) camera2_autofocus_pane_cp_g1

0x32dd,	// (0x00071603) bg_popup_preview_window_pane_cp02_ParamLimits

0x32dd,	// (0x00071603) bg_popup_preview_window_pane_cp02

0xa2f9,	// (0x0007861f) list_fp_cale_pane_ParamLimits

0xa2f9,	// (0x0007861f) list_fp_cale_pane

0x32e9,	// (0x0007160f) popup_fixed_preview_cale_window_t1_ParamLimits

0x32e9,	// (0x0007160f) popup_fixed_preview_cale_window_t1

0xa309,	// (0x0007862f) popup_fixed_preview_cale_window_t2_ParamLimits

0xa309,	// (0x0007862f) popup_fixed_preview_cale_window_t2

0xa31e,	// (0x00078644) popup_fixed_preview_cale_window_t3_ParamLimits

0xa31e,	// (0x00078644) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x0007db4a) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x0007db4a) popup_fixed_preview_cale_window_t

0xa330,	// (0x00078656) list_single_fp_cale_pane_ParamLimits

0xa330,	// (0x00078656) list_single_fp_cale_pane

0xa33d,	// (0x00078663) list_single_fp_cale_pane_g1_ParamLimits

0xa33d,	// (0x00078663) list_single_fp_cale_pane_g1

0x3307,	// (0x0007162d) list_single_fp_cale_pane_g2_ParamLimits

0x3307,	// (0x0007162d) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x0007db51) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x0007db51) list_single_fp_cale_pane_g

0xa349,	// (0x0007866f) list_single_fp_cale_pane_t1_ParamLimits

0xa349,	// (0x0007866f) list_single_fp_cale_pane_t1

0xa35b,	// (0x00078681) list_single_fp_cale_pane_t2_ParamLimits

0xa35b,	// (0x00078681) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x0007db58) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x0007db58) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f26,	// (0x0006f24c) main_dialer_pane

0xa38e,	// (0x000786b4) aid_cell_size_keypad

0xa398,	// (0x000786be) dialer_ne_pane

0xa3a0,	// (0x000786c6) grid_dialer_command_1_pane

0xa3a8,	// (0x000786ce) grid_dialer_command_2_pane

0xa3b0,	// (0x000786d6) grid_dialer_keypad_pane

0xa3c0,	// (0x000786e6) bg_popup_call_pane_cp06_ParamLimits

0xa3c0,	// (0x000786e6) bg_popup_call_pane_cp06

0xa3cc,	// (0x000786f2) dialer_ne_clear_pane_ParamLimits

0xa3cc,	// (0x000786f2) dialer_ne_clear_pane

0x3320,	// (0x00071646) dialer_ne_pane_g1

0x3328,	// (0x0007164e) dialer_ne_pane_t1_ParamLimits

0x3328,	// (0x0007164e) dialer_ne_pane_t1

0xa3d8,	// (0x000786fe) dialer_ne_pane_t2_ParamLimits

0xa3d8,	// (0x000786fe) dialer_ne_pane_t2

0xa3f5,	// (0x0007871b) dialer_ne_pane_t3_ParamLimits

0xa3f5,	// (0x0007871b) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x0007db5d) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x0007db5d) dialer_ne_pane_t

0xa419,	// (0x0007873f) dialer_ne_pane_t3_copy1_ParamLimits

0xa419,	// (0x0007873f) dialer_ne_pane_t3_copy1

0xa43d,	// (0x00078763) cell_dialer_keypad_pane_ParamLimits

0xa43d,	// (0x00078763) cell_dialer_keypad_pane

0xa452,	// (0x00078778) cell_dialer_command_1_pane_ParamLimits

0xa452,	// (0x00078778) cell_dialer_command_1_pane

0xa468,	// (0x0007878e) cell_dialer_command_2_pane_ParamLimits

0xa468,	// (0x0007878e) cell_dialer_command_2_pane

0x333a,	// (0x00071660) bg_button_pane_cp02_ParamLimits

0x333a,	// (0x00071660) bg_button_pane_cp02

0xa477,	// (0x0007879d) cell_dialer_keypad_pane_g1_ParamLimits

0xa477,	// (0x0007879d) cell_dialer_keypad_pane_g1

0x333a,	// (0x00071660) bg_button_pane_cp03_ParamLimits

0x333a,	// (0x00071660) bg_button_pane_cp03

0xa48c,	// (0x000787b2) cell_dialer_command_1_pane_g1_ParamLimits

0xa48c,	// (0x000787b2) cell_dialer_command_1_pane_g1

0x3346,	// (0x0007166c) bg_button_pane_cp04

0xa49f,	// (0x000787c5) cell_dialer_command_2_pane_g1

0xe3df,	// (0x0007c705) bg_button_pane_cp06

0x334e,	// (0x00071674) dialer_ne_clear_pane_g1

0xe2fc,	// (0x0007c622) navi_pane_g2

0x8761,	// (0x00076a87) navi_pane_g3

0x0002,

0xf44c,	// (0x0007d772) navi_pane_g

0xe37e,	// (0x0007c6a4) navi_pane_mv_g2

0xe3a6,	// (0x0007c6cc) navi_pane_mv_g5

0x8786,	// (0x00076aac) navi_pane_mv_t1

0x16de,	// (0x0006fa04) main_clock2_pane

0xa4ce,	// (0x000787f4) main_clock2_list_pane_ParamLimits

0xa4ce,	// (0x000787f4) main_clock2_list_pane

0xa4f4,	// (0x0007881a) main_clock2_pane_t1_ParamLimits

0xa4f4,	// (0x0007881a) main_clock2_pane_t1

0xa51e,	// (0x00078844) main_clock2_pane_t2_ParamLimits

0xa51e,	// (0x00078844) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x0007db64) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x0007db64) main_clock2_pane_t

0xa581,	// (0x000788a7) popup_clock_analogue_window_cp03_ParamLimits

0xa581,	// (0x000788a7) popup_clock_analogue_window_cp03

0xa59d,	// (0x000788c3) popup_clock_digital_window_cp02_ParamLimits

0xa59d,	// (0x000788c3) popup_clock_digital_window_cp02

0xa5eb,	// (0x00078911) main_clock2_list_single_pane_ParamLimits

0xa5eb,	// (0x00078911) main_clock2_list_single_pane

0xe3df,	// (0x0007c705) list_highlight_pane_cp05

0x3356,	// (0x0007167c) main_clock2_list_single_pane_t1

0x7917,	// (0x00075c3d) popup_toolbar_window_cp04_ParamLimits

0x9c4f,	// (0x00077f75) camera2_autofocus_pane_g2_ParamLimits

0x9c4f,	// (0x00077f75) camera2_autofocus_pane_g2

0x9c5b,	// (0x00077f81) camera2_autofocus_pane_g3_ParamLimits

0x9c5b,	// (0x00077f81) camera2_autofocus_pane_g3

0x9c67,	// (0x00077f8d) camera2_autofocus_pane_g4_ParamLimits

0x9c67,	// (0x00077f8d) camera2_autofocus_pane_g4

0x9c73,	// (0x00077f99) camera2_autofocus_pane_g5_ParamLimits

0x9c73,	// (0x00077f99) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x0007daad) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x0007daad) camera2_autofocus_pane_g

0x9dcd,	// (0x000780f3) camera2_autofocus_pane_cp_g2

0x9dd5,	// (0x000780fb) camera2_autofocus_pane_cp_g3

0x9ddd,	// (0x00078103) camera2_autofocus_pane_cp_g4

0x9de5,	// (0x0007810b) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x0007db13) camera2_autofocus_pane_cp_g

0xa3b8,	// (0x000786de) popup_dialer_spcha_window

0x0f26,	// (0x0006f24c) bg_popup_sub_pane_cp07

0x3364,	// (0x0007168a) list_spcha_pane

0x336c,	// (0x00071692) list_single_spcha_pane_ParamLimits

0x336c,	// (0x00071692) list_single_spcha_pane

0x0f26,	// (0x0006f24c) list_highlight_pane_cp06

0x337d,	// (0x000716a3) list_single_spcha_pane_t1

0x2598,	// (0x000708be) popup_call2_audio_out_window_g4_ParamLimits

0x2598,	// (0x000708be) popup_call2_audio_out_window_g4

0x0f26,	// (0x0006f24c) main_imed2_pane

0x2bb5,	// (0x00070edb) popup_imed_adjust2_window

0x939d,	// (0x000776c3) popup_imed_trans_window_ParamLimits

0x939d,	// (0x000776c3) popup_imed_trans_window

0x2e0e,	// (0x00071134) popup_blid_sat_info2_window_t1

0x2e1c,	// (0x00071142) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x0007da42) popup_blid_sat_info2_window_t

0xa693,	// (0x000789b9) aid_size_cell_colour_35

0xa6aa,	// (0x000789d0) aid_size_cell_colour_112

0xa6c1,	// (0x000789e7) aid_size_cell_effect

0x542b,	// (0x00073751) bg_tb_trans_pane_cp02

0xe823,	// (0x0007cb49) heading_imed_pane

0xa6db,	// (0x00078a01) listscroll_imed_pane

0x338b,	// (0x000716b1) heading_imed_pane_g1

0x3393,	// (0x000716b9) heading_imed_pane_t1

0x33a1,	// (0x000716c7) grid_imed_colour_35_pane_ParamLimits

0x33a1,	// (0x000716c7) grid_imed_colour_35_pane

0xa6e7,	// (0x00078a0d) grid_imed_effect_pane

0x33b4,	// (0x000716da) list_imed_aspect_pane

0xa6f3,	// (0x00078a19) scroll_pane_cp027_ParamLimits

0xa6f3,	// (0x00078a19) scroll_pane_cp027

0xa6ff,	// (0x00078a25) cell_imed_effect_pane_ParamLimits

0xa6ff,	// (0x00078a25) cell_imed_effect_pane

0x33bc,	// (0x000716e2) cell_imed_colour_pane_ParamLimits

0x33bc,	// (0x000716e2) cell_imed_colour_pane

0x33f6,	// (0x0007171c) cell_imed_colour_pane_g1_ParamLimits

0x33f6,	// (0x0007171c) cell_imed_colour_pane_g1

0x3407,	// (0x0007172d) hgihlgiht_grid_pane_cp016_ParamLimits

0x3407,	// (0x0007172d) hgihlgiht_grid_pane_cp016

0xa715,	// (0x00078a3b) cell_imed_effect_pane_g1

0xa71d,	// (0x00078a43) grid_highlight_pane_cp017

0x3418,	// (0x0007173e) list_imed_single_pane_ParamLimits

0x3418,	// (0x0007173e) list_imed_single_pane

0x0f26,	// (0x0006f24c) list_highlight_pane_cp07

0x342b,	// (0x00071751) list_imed_aspect_pane_comp1_t1

0x2b8f,	// (0x00070eb5) bg_tb_trans_pane_cp05

0x344b,	// (0x00071771) popup_imed_adjust2_window_g1

0x3472,	// (0x00071798) popup_imed_adjust2_window_t1

0x348a,	// (0x000717b0) slider_imed_adjust_pane

0x349e,	// (0x000717c4) slider_imed_adjust_pane_g1

0x34ae,	// (0x000717d4) slider_imed_adjust_pane_g2

0x34be,	// (0x000717e4) slider_imed_adjust_pane_g3

0x34cf,	// (0x000717f5) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x0007db81) slider_imed_adjust_pane_g

0xa726,	// (0x00078a4c) aid_size_cell_clipart2

0xa732,	// (0x00078a58) grid_imed_clipart_pane

0x34e0,	// (0x00071806) scroll_pane_cp031

0xa73c,	// (0x00078a62) cell_imed_clipart_pane_ParamLimits

0xa73c,	// (0x00078a62) cell_imed_clipart_pane

0xa753,	// (0x00078a79) cell_imed_clipart_pane_g1

0x0f26,	// (0x0006f24c) grid_highlight_pane_cp014

0xa4da,	// (0x00078800) main_clock2_pane_g1_ParamLimits

0xa4da,	// (0x00078800) main_clock2_pane_g1

0xa5b5,	// (0x000788db) aid_call2_pane_cp10

0xa5c1,	// (0x000788e7) aid_call_pane_cp10

0xe2ac,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g1

0xe2ac,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g2

0xa5cd,	// (0x000788f3) popup_clock_analogue_window_cp10_g3

0xa5cd,	// (0x000788f3) popup_clock_analogue_window_cp10_g4

0xe2ac,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x0007db6f) popup_clock_analogue_window_cp10_g

0xa5d9,	// (0x000788ff) popup_clock_analogue_window_cp10_t1

0xa5fd,	// (0x00078923) clock_digital_number_pane_cp10_ParamLimits

0xa5fd,	// (0x00078923) clock_digital_number_pane_cp10

0xa615,	// (0x0007893b) clock_digital_number_pane_cp11_ParamLimits

0xa615,	// (0x0007893b) clock_digital_number_pane_cp11

0xa62d,	// (0x00078953) clock_digital_number_pane_cp12_ParamLimits

0xa62d,	// (0x00078953) clock_digital_number_pane_cp12

0xa645,	// (0x0007896b) clock_digital_number_pane_cp13_ParamLimits

0xa645,	// (0x0007896b) clock_digital_number_pane_cp13

0xa65d,	// (0x00078983) clock_digital_separator_pane_cp10_ParamLimits

0xa65d,	// (0x00078983) clock_digital_separator_pane_cp10

0xa675,	// (0x0007899b) popup_clock_digital_window_cp02_t1_ParamLimits

0xa675,	// (0x0007899b) popup_clock_digital_window_cp02_t1

0x15e5,	// (0x0006f90b) clock_digital_number_pane_cp10_g1

0x15e5,	// (0x0006f90b) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x0007db8a) clock_digital_number_pane_cp10_g

0x15e5,	// (0x0006f90b) clock_digital_separator_pane_cp10_g1

0x15e5,	// (0x0006f90b) clock_digital_separator_pane_g2_cp10

0xe3af,	// (0x0007c6d5) navi_pane_vded_g4

0xe3b8,	// (0x0007c6de) navi_pane_vded_g5

0xe3c1,	// (0x0007c6e7) navi_pane_vded_t1

0x0f26,	// (0x0006f24c) main_vded_pane

0xa75c,	// (0x00078a82) main_vded_pane_g1

0xa764,	// (0x00078a8a) main_vded_pane_g2

0xa76c,	// (0x00078a92) main_vded_pane_g3

0x0002,

0xf869,	// (0x0007db8f) main_vded_pane_g

0xa774,	// (0x00078a9a) main_vded_pane_t1

0xa782,	// (0x00078aa8) main_vded_pane_t2

0x0001,

0xf870,	// (0x0007db96) main_vded_pane_t

0xa790,	// (0x00078ab6) vded_slider_pane

0xa798,	// (0x00078abe) vded_video_pane

0x34e8,	// (0x0007180e) vded_video_pane_g1

0xa7a0,	// (0x00078ac6) vded_video_pane_g2

0x2fca,	// (0x000712f0) vded_video_pane_g3

0x0002,

0xf875,	// (0x0007db9b) vded_video_pane_g

0x34f2,	// (0x00071818) vded_slider_pane_g1

0x2d25,	// (0x0007104b) vded_slider_pane_g2

0x34fb,	// (0x00071821) vded_slider_pane_g3

0x3504,	// (0x0007182a) vded_slider_pane_g4

0x350d,	// (0x00071833) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x0007dba2) vded_slider_pane_g

0xa27c,	// (0x000785a2) mup3_rocker_pane_ParamLimits

0xa27c,	// (0x000785a2) mup3_rocker_pane

0xa7a9,	// (0x00078acf) mup3_control_keys_pane_g1

0xa7b1,	// (0x00078ad7) mup3_control_keys_pane_g2

0xa7b9,	// (0x00078adf) mup3_control_keys_pane_g3

0xa7c1,	// (0x00078ae7) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x0007dbad) mup3_control_keys_pane_g

0x6bc9,	// (0x00074eef) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6bc9,	// (0x00074eef) popup_toolbar2_fixed_window_cp01

0xa294,	// (0x000785ba) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa294,	// (0x000785ba) popup_toolbar2_fixed_window_cp02

0x1ed7,	// (0x000701fd) popup_call2_audio_second_window_t4_ParamLimits

0x1ed7,	// (0x000701fd) popup_call2_audio_second_window_t4

0x2405,	// (0x0007072b) popup_call2_audio_first_window_t6_ParamLimits

0x2405,	// (0x0007072b) popup_call2_audio_first_window_t6

0x269b,	// (0x000709c1) popup_call2_audio_out_window_t6_ParamLimits

0x269b,	// (0x000709c1) popup_call2_audio_out_window_t6

0x0f26,	// (0x0006f24c) main_vitu_pane

0xa7d1,	// (0x00078af7) aid_size_cell_itu_ParamLimits

0xa7d1,	// (0x00078af7) aid_size_cell_itu

0x38fd,	// (0x00071c23) bg_popup_window_pane_cp08_ParamLimits

0x38fd,	// (0x00071c23) bg_popup_window_pane_cp08

0xa7df,	// (0x00078b05) field_vitu_entry_pane_ParamLimits

0xa7df,	// (0x00078b05) field_vitu_entry_pane

0xa7ec,	// (0x00078b12) grid_vitu_function_pane_ParamLimits

0xa7ec,	// (0x00078b12) grid_vitu_function_pane

0xa7f8,	// (0x00078b1e) grid_vitu_itu_pane_ParamLimits

0xa7f8,	// (0x00078b1e) grid_vitu_itu_pane

0xa804,	// (0x00078b2a) cell_vitu_itu_pane_ParamLimits

0xa804,	// (0x00078b2a) cell_vitu_itu_pane

0xa819,	// (0x00078b3f) cell_vitu_function_pane_ParamLimits

0xa819,	// (0x00078b3f) cell_vitu_function_pane

0x542b,	// (0x00073751) bg_popup_sub_pane_cp08_ParamLimits

0x542b,	// (0x00073751) bg_popup_sub_pane_cp08

0xa82b,	// (0x00078b51) field_vitu_entry_pane_t1_ParamLimits

0xa82b,	// (0x00078b51) field_vitu_entry_pane_t1

0x352e,	// (0x00071854) field_vitu_entry_pane_t2_ParamLimits

0x352e,	// (0x00071854) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x0007dbbb) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x0007dbbb) field_vitu_entry_pane_t

0x354b,	// (0x00071871) bg_button_pane_cp05_ParamLimits

0x354b,	// (0x00071871) bg_button_pane_cp05

0xa844,	// (0x00078b6a) cell_vitu_itu_pane_g1

0xa85c,	// (0x00078b82) cell_vitu_itu_pane_t1_ParamLimits

0xa85c,	// (0x00078b82) cell_vitu_itu_pane_t1

0xa86e,	// (0x00078b94) cell_vitu_itu_pane_t2_ParamLimits

0xa86e,	// (0x00078b94) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x0007dbc0) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x0007dbc0) cell_vitu_itu_pane_t

0x3559,	// (0x0007187f) bg_button_pane_cp07

0xa8a3,	// (0x00078bc9) cell_vitu_function_pane_g1

0x6e26,	// (0x0007514c) main_calc_pane_g1

0x6a10,	// (0x00074d36) aid_visual_content_pane

0x0f26,	// (0x0006f24c) main_vradio_pane

0xa8ac,	// (0x00078bd2) main_vradio_pane_g1_ParamLimits

0xa8ac,	// (0x00078bd2) main_vradio_pane_g1

0x3563,	// (0x00071889) main_vradio_pane_g2_ParamLimits

0x3563,	// (0x00071889) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x0007dbc7) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x0007dbc7) main_vradio_pane_g

0xa8ba,	// (0x00078be0) main_vradio_pane_t1_ParamLimits

0xa8ba,	// (0x00078be0) main_vradio_pane_t1

0xa8cc,	// (0x00078bf2) main_vradio_pane_t2_ParamLimits

0xa8cc,	// (0x00078bf2) main_vradio_pane_t2

0x3570,	// (0x00071896) main_vradio_pane_t3_ParamLimits

0x3570,	// (0x00071896) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x0007dbcc) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x0007dbcc) main_vradio_pane_t

0xa8de,	// (0x00078c04) vradio_rocker_control_pane_ParamLimits

0xa8de,	// (0x00078c04) vradio_rocker_control_pane

0xa8ea,	// (0x00078c10) vradio_station_info_pane_ParamLimits

0xa8ea,	// (0x00078c10) vradio_station_info_pane

0x3582,	// (0x000718a8) vradio_frequency_info_pane_ParamLimits

0x3582,	// (0x000718a8) vradio_frequency_info_pane

0x2fca,	// (0x000712f0) vradio_station_info_pane_g1

0x3591,	// (0x000718b7) vradio_station_info_pane_t1_ParamLimits

0x3591,	// (0x000718b7) vradio_station_info_pane_t1

0x35b3,	// (0x000718d9) vradio_station_info_pane_t2_ParamLimits

0x35b3,	// (0x000718d9) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x0007dbd3) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x0007dbd3) vradio_station_info_pane_t

0x35c5,	// (0x000718eb) vradio_tuning_pane

0x35cd,	// (0x000718f3) vradio_rocker_control_pane_g1

0x35d5,	// (0x000718fb) vradio_rocker_control_pane_g2

0x35dd,	// (0x00071903) vradio_rocker_control_pane_g3

0x35e5,	// (0x0007190b) vradio_rocker_control_pane_g4

0x35ed,	// (0x00071913) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x0007dbd8) vradio_rocker_control_pane_g

0xa8f7,	// (0x00078c1d) vradio_frequency_info_pane_g1

0x35f5,	// (0x0007191b) vradio_frequency_info_pane_t1_ParamLimits

0x35f5,	// (0x0007191b) vradio_frequency_info_pane_t1

0xa8ff,	// (0x00078c25) vradio_tuning_pane_g1

0xa908,	// (0x00078c2e) vradio_tuning_pane_t1

0x0f58,	// (0x0006f27e) area_side_right_pane_ParamLimits

0x0f58,	// (0x0006f27e) area_side_right_pane

0x2b56,	// (0x00070e7c) status_small_pane_g1

0x2b5e,	// (0x00070e84) status_small_pane_g2

0x2b67,	// (0x00070e8d) status_small_pane_g3

0x2b70,	// (0x00070e96) status_small_pane_g4

0x0003,

0xf672,	// (0x0007d998) status_small_pane_g

0x2b79,	// (0x00070e9f) status_small_pane_t1

0x0f26,	// (0x0006f24c) main_video3_pane

0x3609,	// (0x0007192f) cams_zoom_vslider_pane

0x3611,	// (0x00071937) image3_wide_pane_ParamLimits

0x3611,	// (0x00071937) image3_wide_pane

0x362b,	// (0x00071951) image3_wide_small_pane

0x3635,	// (0x0007195b) main_video3_pane_g1_ParamLimits

0x3635,	// (0x0007195b) main_video3_pane_g1

0x3651,	// (0x00071977) main_video3_pane_g2_ParamLimits

0x3651,	// (0x00071977) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x0007dbe3) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x0007dbe3) main_video3_pane_g

0x366d,	// (0x00071993) main_video3_pane_t1_ParamLimits

0x366d,	// (0x00071993) main_video3_pane_t1

0x3698,	// (0x000719be) main_video3_pane_t2_ParamLimits

0x3698,	// (0x000719be) main_video3_pane_t2

0x36c3,	// (0x000719e9) main_video3_pane_t3_ParamLimits

0x36c3,	// (0x000719e9) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x0007dbe8) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x0007dbe8) main_video3_pane_t

0x36ee,	// (0x00071a14) cams_zoom_vslider_pane_g1

0x36f7,	// (0x00071a1d) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x0007dbef) cams_zoom_vslider_pane_g

0x36ff,	// (0x00071a25) small_slider_vertical_pane

0x2fca,	// (0x000712f0) small_slider_vertical_pane_g1

0x2fca,	// (0x000712f0) small_slider_vertical_pane_g2

0x3707,	// (0x00071a2d) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x0007dbf4) small_slider_vertical_pane_g

0x0f26,	// (0x0006f24c) main_hwr_training_pane

0x3710,	// (0x00071a36) hwr_training_instruct_pane_ParamLimits

0x3710,	// (0x00071a36) hwr_training_instruct_pane

0xa917,	// (0x00078c3d) hwr_training_navi_pane_ParamLimits

0xa917,	// (0x00078c3d) hwr_training_navi_pane

0xa92b,	// (0x00078c51) hwr_training_write_pane_ParamLimits

0xa92b,	// (0x00078c51) hwr_training_write_pane

0x0f26,	// (0x0006f24c) bg_frame_shadow_pane

0x373f,	// (0x00071a65) hwr_training_write_pane_g1

0x3747,	// (0x00071a6d) hwr_training_write_pane_g2

0x374f,	// (0x00071a75) hwr_training_write_pane_g3

0x3757,	// (0x00071a7d) hwr_training_write_pane_g4

0x375f,	// (0x00071a85) hwr_training_write_pane_g5

0x3767,	// (0x00071a8d) hwr_training_write_pane_g6

0x376f,	// (0x00071a95) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x0007dbfb) hwr_training_write_pane_g

0xa959,	// (0x00078c7f) hwr_training_navi_pane_g1_ParamLimits

0xa959,	// (0x00078c7f) hwr_training_navi_pane_g1

0xa96b,	// (0x00078c91) hwr_training_navi_pane_g2_ParamLimits

0xa96b,	// (0x00078c91) hwr_training_navi_pane_g2

0xa97d,	// (0x00078ca3) hwr_training_navi_pane_g3_ParamLimits

0xa97d,	// (0x00078ca3) hwr_training_navi_pane_g3

0xa98d,	// (0x00078cb3) hwr_training_navi_pane_g4_ParamLimits

0xa98d,	// (0x00078cb3) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x0007dc0a) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x0007dc0a) hwr_training_navi_pane_g

0xa9a7,	// (0x00078ccd) hwr_training_navi_pane_t1

0xa9b5,	// (0x00078cdb) list_single_hwr_training_instruct_pane_ParamLimits

0xa9b5,	// (0x00078cdb) list_single_hwr_training_instruct_pane

0x3777,	// (0x00071a9d) list_single_hwr_training_instruct_pane_t1

0x2f0a,	// (0x00071230) bg_frame_shadow_pane_g1

0x3786,	// (0x00071aac) bg_frame_shadow_pane_g2

0x378e,	// (0x00071ab4) bg_frame_shadow_pane_g3

0x3796,	// (0x00071abc) bg_frame_shadow_pane_g4

0x379e,	// (0x00071ac4) bg_frame_shadow_pane_g5

0x37a6,	// (0x00071acc) bg_frame_shadow_pane_g6

0x37ae,	// (0x00071ad4) bg_frame_shadow_pane_g7

0x1801,	// (0x0006fb27) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x0007dc15) bg_frame_shadow_pane_g

0x0f26,	// (0x0006f24c) main_video_tele_dialer_pane

0xa9cd,	// (0x00078cf3) aid_size_cell_video_keypad_ParamLimits

0xa9cd,	// (0x00078cf3) aid_size_cell_video_keypad

0xa9dd,	// (0x00078d03) grid_video_dialer_keypad_pane_ParamLimits

0xa9dd,	// (0x00078d03) grid_video_dialer_keypad_pane

0xaa0d,	// (0x00078d33) video_down_pane_cp_ParamLimits

0xaa0d,	// (0x00078d33) video_down_pane_cp

0xaa35,	// (0x00078d5b) cell_video_dialer_keypad_pane_ParamLimits

0xaa35,	// (0x00078d5b) cell_video_dialer_keypad_pane

0x37b6,	// (0x00071adc) bg_button_pane_cp08_ParamLimits

0x37b6,	// (0x00071adc) bg_button_pane_cp08

0xaa4a,	// (0x00078d70) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaa4a,	// (0x00078d70) cell_video_dialer_keypad_pane_g1

0xa270,	// (0x00078596) mup3_rocker2_pane_ParamLimits

0xa270,	// (0x00078596) mup3_rocker2_pane

0x2fca,	// (0x000712f0) mup3_rocker2_pane_g1

0x9337,	// (0x0007765d) main_dialer2_pane

0x0f26,	// (0x0006f24c) main_mp4_pane

0xaa89,	// (0x00078daf) main_mp4_pane_g1_ParamLimits

0xaa89,	// (0x00078daf) main_mp4_pane_g1

0xaa97,	// (0x00078dbd) main_mp4_pane_g2_ParamLimits

0xaa97,	// (0x00078dbd) main_mp4_pane_g2

0xaaa5,	// (0x00078dcb) main_mp4_pane_g3_ParamLimits

0xaaa5,	// (0x00078dcb) main_mp4_pane_g3

0xaada,	// (0x00078e00) main_mp4_pane_g4_ParamLimits

0xaada,	// (0x00078e00) main_mp4_pane_g4

0xab08,	// (0x00078e2e) main_mp4_pane_g5_ParamLimits

0xab08,	// (0x00078e2e) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x0007dc35) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x0007dc35) main_mp4_pane_g

0xab64,	// (0x00078e8a) main_mp4_pane_t1_ParamLimits

0xab64,	// (0x00078e8a) main_mp4_pane_t1

0xabbc,	// (0x00078ee2) main_mp4_pane_t2_ParamLimits

0xabbc,	// (0x00078ee2) main_mp4_pane_t2

0x37c2,	// (0x00071ae8) main_mp4_pane_t3_ParamLimits

0x37c2,	// (0x00071ae8) main_mp4_pane_t3

0xac0e,	// (0x00078f34) main_mp4_pane_t4_ParamLimits

0xac0e,	// (0x00078f34) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x0007dc42) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x0007dc42) main_mp4_pane_t

0xac4e,	// (0x00078f74) mp4_progress_pane_ParamLimits

0xac4e,	// (0x00078f74) mp4_progress_pane

0xac92,	// (0x00078fb8) mp4_rocker_pane_ParamLimits

0xac92,	// (0x00078fb8) mp4_rocker_pane

0x37f0,	// (0x00071b16) mp4_progress_pane_t1

0x3807,	// (0x00071b2d) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x0007dc4b) mp4_progress_pane_t

0x381e,	// (0x00071b44) mup_progress_pane_cp04

0x404f,	// (0x00072375) mp4_rocker_pane_g1

0xacb0,	// (0x00078fd6) aid_cell_size_keypad2_ParamLimits

0xacb0,	// (0x00078fd6) aid_cell_size_keypad2

0xacc0,	// (0x00078fe6) dialer2_ne_pane_ParamLimits

0xacc0,	// (0x00078fe6) dialer2_ne_pane

0xaccc,	// (0x00078ff2) grid_dialer2_keypad_pane_ParamLimits

0xaccc,	// (0x00078ff2) grid_dialer2_keypad_pane

0x40aa,	// (0x000723d0) bg_popup_call_pane_cp07_ParamLimits

0x40aa,	// (0x000723d0) bg_popup_call_pane_cp07

0xacd8,	// (0x00078ffe) dialer2_ne_pane_t1_ParamLimits

0xacd8,	// (0x00078ffe) dialer2_ne_pane_t1

0xacfd,	// (0x00079023) cell_dialer2_keypad_pane_ParamLimits

0xacfd,	// (0x00079023) cell_dialer2_keypad_pane

0x383c,	// (0x00071b62) bg_button_pane_pane_cp04_ParamLimits

0x383c,	// (0x00071b62) bg_button_pane_pane_cp04

0xad12,	// (0x00079038) cell_dialer2_keypad_pane_g1_ParamLimits

0xad12,	// (0x00079038) cell_dialer2_keypad_pane_g1

0x7865,	// (0x00075b8b) aid_placing_vt_set_content_ParamLimits

0x7865,	// (0x00075b8b) aid_placing_vt_set_content

0x787f,	// (0x00075ba5) aid_placing_vt_set_title_ParamLimits

0x787f,	// (0x00075ba5) aid_placing_vt_set_title

0x0f26,	// (0x0006f24c) main_image3_pane

0xad86,	// (0x000790ac) area_side_right_pane_cp01_ParamLimits

0xad86,	// (0x000790ac) area_side_right_pane_cp01

0xadb3,	// (0x000790d9) main_image3_pane_g1_ParamLimits

0xadb3,	// (0x000790d9) main_image3_pane_g1

0xadc1,	// (0x000790e7) main_image3_pane_g2_ParamLimits

0xadc1,	// (0x000790e7) main_image3_pane_g2

0xadd8,	// (0x000790fe) main_image3_pane_g3_ParamLimits

0xadd8,	// (0x000790fe) main_image3_pane_g3

0xadef,	// (0x00079115) main_image3_pane_g4_ParamLimits

0xadef,	// (0x00079115) main_image3_pane_g4

0x0003,

0xf934,	// (0x0007dc5a) main_image3_pane_g_ParamLimits

0xf934,	// (0x0007dc5a) main_image3_pane_g

0xae06,	// (0x0007912c) main_image3_pane_t1_ParamLimits

0xae06,	// (0x0007912c) main_image3_pane_t1

0xae2b,	// (0x00079151) main_image3_pane_t2_ParamLimits

0xae2b,	// (0x00079151) main_image3_pane_t2

0xae4a,	// (0x00079170) main_image3_pane_t3_ParamLimits

0xae4a,	// (0x00079170) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0007dc63) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0007dc63) main_image3_pane_t

0x38fd,	// (0x00071c23) grid_sctrl_middle_pane_cp01_ParamLimits

0x38fd,	// (0x00071c23) grid_sctrl_middle_pane_cp01

0xaea5,	// (0x000791cb) cell_sctrl_middle_pane_cp01_ParamLimits

0xaea5,	// (0x000791cb) cell_sctrl_middle_pane_cp01

0xaeb6,	// (0x000791dc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaeb6,	// (0x000791dc) cell_sctrl_middle_pane_cp01_g1

0x0f26,	// (0x0006f24c) main_call4_pane

0xaec3,	// (0x000791e9) aid_size_button_call4_ParamLimits

0xaec3,	// (0x000791e9) aid_size_button_call4

0xaeed,	// (0x00079213) call4_windows_pane_ParamLimits

0xaeed,	// (0x00079213) call4_windows_pane

0xaf01,	// (0x00079227) grid_call4_button_pane_ParamLimits

0xaf01,	// (0x00079227) grid_call4_button_pane

0x3860,	// (0x00071b86) call4_windows_conf_pane

0xaf1b,	// (0x00079241) popup_call4_audio_first_window_ParamLimits

0xaf1b,	// (0x00079241) popup_call4_audio_first_window

0xaf3b,	// (0x00079261) popup_call4_audio_second_window_ParamLimits

0xaf3b,	// (0x00079261) popup_call4_audio_second_window

0x3893,	// (0x00071bb9) popup_call4_audio_wait_window_ParamLimits

0x3893,	// (0x00071bb9) popup_call4_audio_wait_window

0xaf4d,	// (0x00079273) cell_call4_button_pane_ParamLimits

0xaf4d,	// (0x00079273) cell_call4_button_pane

0x17a1,	// (0x0006fac7) bg_button_pane_cp09_ParamLimits

0x17a1,	// (0x0006fac7) bg_button_pane_cp09

0xaf70,	// (0x00079296) cell_call4_button_pane_g1_ParamLimits

0xaf70,	// (0x00079296) cell_call4_button_pane_g1

0xaf7d,	// (0x000792a3) cell_call4_button_pane_t1_ParamLimits

0xaf7d,	// (0x000792a3) cell_call4_button_pane_t1

0x38d9,	// (0x00071bff) popup_call4_audio_conf_window_ParamLimits

0x38d9,	// (0x00071bff) popup_call4_audio_conf_window

0xa2a1,	// (0x000785c7) mup3_progress_pane_t1_ParamLimits

0xa2b7,	// (0x000785dd) mup3_progress_pane_t2_ParamLimits

0x32a0,	// (0x000715c6) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x0007db3c) mup3_progress_pane_t_ParamLimits

0x32b7,	// (0x000715dd) mup_progress_pane_cp03_ParamLimits

0xa7c9,	// (0x00078aef) mup3_control_keys_pane_g4_copy1

0xac7c,	// (0x00078fa2) mp4_rocker2_pane_ParamLimits

0xac7c,	// (0x00078fa2) mp4_rocker2_pane

0x38f5,	// (0x00071c1b) mp4_rocker2_pane_g1

0x38ed,	// (0x00071c13) mp4_rocker2_pane_g2

0xaf8f,	// (0x000792b5) mp4_rocker2_pane_g3

0xaf97,	// (0x000792bd) mp4_rocker2_pane_g4

0xaf9f,	// (0x000792c5) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x0007dc6c) mp4_rocker2_pane_g

0x0f26,	// (0x0006f24c) main_camera4_pane

0x0f26,	// (0x0006f24c) main_video4_pane

0xa9e9,	// (0x00078d0f) main_video_tele_dialer_pane_t1_ParamLimits

0xa9e9,	// (0x00078d0f) main_video_tele_dialer_pane_t1

0xa9fb,	// (0x00078d21) main_video_tele_dialer_pane_t2_ParamLimits

0xa9fb,	// (0x00078d21) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x0007dc26) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x0007dc26) main_video_tele_dialer_pane_t

0xafbd,	// (0x000792e3) cam4_autofocus_pane_ParamLimits

0xafbd,	// (0x000792e3) cam4_autofocus_pane

0xafc9,	// (0x000792ef) cam4_image_uncrop_pane_ParamLimits

0xafc9,	// (0x000792ef) cam4_image_uncrop_pane

0xafde,	// (0x00079304) cam4_indicators_pane_ParamLimits

0xafde,	// (0x00079304) cam4_indicators_pane

0xaff8,	// (0x0007931e) main_camera4_pane_g1_ParamLimits

0xaff8,	// (0x0007931e) main_camera4_pane_g1

0xb004,	// (0x0007932a) main_camera4_pane_g2_ParamLimits

0xb004,	// (0x0007932a) main_camera4_pane_g2

0xb010,	// (0x00079336) main_camera4_pane_g3_ParamLimits

0xb010,	// (0x00079336) main_camera4_pane_g3

0xb01c,	// (0x00079342) main_camera4_pane_g4_ParamLimits

0xb01c,	// (0x00079342) main_camera4_pane_g4

0xb028,	// (0x0007934e) main_camera4_pane_g5_ParamLimits

0xb028,	// (0x0007934e) main_camera4_pane_g5

0x0005,

0xf951,	// (0x0007dc77) main_camera4_pane_g_ParamLimits

0xf951,	// (0x0007dc77) main_camera4_pane_g

0xb042,	// (0x00079368) main_camera4_pane_t1_ParamLimits

0xb042,	// (0x00079368) main_camera4_pane_t1

0xb066,	// (0x0007938c) bg_tb_trans_pane_cp06

0xb07c,	// (0x000793a2) cam4_indicators_pane_g1

0xb08c,	// (0x000793b2) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x0007dc89) cam4_indicators_pane_g

0xb0ac,	// (0x000793d2) cam4_indicators_pane_t1

0xb0d4,	// (0x000793fa) main_video4_pane_g1_ParamLimits

0xb0d4,	// (0x000793fa) main_video4_pane_g1

0xb0e0,	// (0x00079406) main_video4_pane_g2_ParamLimits

0xb0e0,	// (0x00079406) main_video4_pane_g2

0xb0e0,	// (0x00079406) main_video4_pane_g3_ParamLimits

0xb0e0,	// (0x00079406) main_video4_pane_g3

0xb0ec,	// (0x00079412) main_video4_pane_g4_ParamLimits

0xb0ec,	// (0x00079412) main_video4_pane_g4

0x0004,

0xf96a,	// (0x0007dc90) main_video4_pane_g_ParamLimits

0xf96a,	// (0x0007dc90) main_video4_pane_g

0xb10c,	// (0x00079432) vid4_indicators_pane_ParamLimits

0xb10c,	// (0x00079432) vid4_indicators_pane

0xb12a,	// (0x00079450) video4_image_uncrop_cif_pane_ParamLimits

0xb12a,	// (0x00079450) video4_image_uncrop_cif_pane

0xb137,	// (0x0007945d) video4_image_uncrop_nhd_pane_ParamLimits

0xb137,	// (0x0007945d) video4_image_uncrop_nhd_pane

0xafc9,	// (0x000792ef) video4_image_uncrop_vga_pane_ParamLimits

0xafc9,	// (0x000792ef) video4_image_uncrop_vga_pane

0xb144,	// (0x0007946a) bg_tb_trans_pane_cp07

0xb07c,	// (0x000793a2) vid4_indicators_pane_g1

0xb152,	// (0x00079478) vid4_indicators_pane_g2

0xb162,	// (0x00079488) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x0007dc9b) vid4_indicators_pane_g

0xb18f,	// (0x000794b5) vid4_indicators_pane_t1

0xb1a9,	// (0x000794cf) cam4_autofocus_pane_g1

0xb1b1,	// (0x000794d7) cam4_autofocus_pane_g2

0xb1b9,	// (0x000794df) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x0007dca6) cam4_autofocus_pane_g

0xb1c1,	// (0x000794e7) cam4_autofocus_pane_g3_copy1

0xaa19,	// (0x00078d3f) video_down_pane_cp_t1

0xaa27,	// (0x00078d4d) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x0007dc2b) video_down_pane_cp_t

0x38fd,	// (0x00071c23) popup_vitu2_window_ParamLimits

0x38fd,	// (0x00071c23) popup_vitu2_window

0xb1c9,	// (0x000794ef) aid_size_cell2_itu2_ParamLimits

0xb1c9,	// (0x000794ef) aid_size_cell2_itu2

0xb1eb,	// (0x00079511) aid_size_cell_itu2_ParamLimits

0xb1eb,	// (0x00079511) aid_size_cell_itu2

0xb229,	// (0x0007954f) bg_popup_window_pane_cp09_ParamLimits

0xb229,	// (0x0007954f) bg_popup_window_pane_cp09

0xb237,	// (0x0007955d) field_vitu2_entry_pane_ParamLimits

0xb237,	// (0x0007955d) field_vitu2_entry_pane

0xb24d,	// (0x00079573) grid_vitu2_function_pane_ParamLimits

0xb24d,	// (0x00079573) grid_vitu2_function_pane

0xb27f,	// (0x000795a5) grid_vitu2_itu_pane_ParamLimits

0xb27f,	// (0x000795a5) grid_vitu2_itu_pane

0xb2d5,	// (0x000795fb) cell_vitu2_itu_pane_ParamLimits

0xb2d5,	// (0x000795fb) cell_vitu2_itu_pane

0xb2ea,	// (0x00079610) cell_vitu2_function_pane_ParamLimits

0xb2ea,	// (0x00079610) cell_vitu2_function_pane

0x390b,	// (0x00071c31) bg_popup_call_pane_cp08_ParamLimits

0x390b,	// (0x00071c31) bg_popup_call_pane_cp08

0x3924,	// (0x00071c4a) field_vitu2_entry_pane_g1

0x3930,	// (0x00071c56) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x0007dcad) field_vitu2_entry_pane_g

0x394a,	// (0x00071c70) field_vitu2_entry_pane_t1_ParamLimits

0x394a,	// (0x00071c70) field_vitu2_entry_pane_t1

0x3965,	// (0x00071c8b) field_vitu2_entry_pane_t2_ParamLimits

0x3965,	// (0x00071c8b) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x0007dcb4) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x0007dcb4) field_vitu2_entry_pane_t

0xb329,	// (0x0007964f) bg_button_pane_cp010_ParamLimits

0xb329,	// (0x0007964f) bg_button_pane_cp010

0xb337,	// (0x0007965d) cell_vitu2_itu_pane_g1

0xb355,	// (0x0007967b) cell_vitu2_itu_pane_t1_ParamLimits

0xb355,	// (0x0007967b) cell_vitu2_itu_pane_t1

0x6921,	// (0x00074c47) cell_vitu2_itu_pane_t2_ParamLimits

0x6921,	// (0x00074c47) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x0007dcbe) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x0007dcbe) cell_vitu2_itu_pane_t

0xb144,	// (0x0007946a) bg_button_pane_cp011

0xb3a7,	// (0x000796cd) cell_vitu2_function_pane_g1

0x0f26,	// (0x0006f24c) main_myfav_hc_pane

0xae8a,	// (0x000791b0) popup_image3_note_pane_ParamLimits

0xae8a,	// (0x000791b0) popup_image3_note_pane

0xae96,	// (0x000791bc) popup_image3_tool_bar_pane_ParamLimits

0xae96,	// (0x000791bc) popup_image3_tool_bar_pane

0x698f,	// (0x00074cb5) cell_vitu2_itu_pane_t3_ParamLimits

0x698f,	// (0x00074cb5) cell_vitu2_itu_pane_t3

0x0f26,	// (0x0006f24c) bg_popup_trans_pane

0x398a,	// (0x00071cb0) grid_image3_tool_bar_pane

0x3994,	// (0x00071cba) bg_popup_trans_pane_g1

0xdc91,	// (0x0007bfb7) bg_popup_trans_pane_g2

0x399c,	// (0x00071cc2) bg_popup_trans_pane_g3

0x39a4,	// (0x00071cca) bg_popup_trans_pane_g4

0x39ac,	// (0x00071cd2) bg_popup_trans_pane_g5

0x39b4,	// (0x00071cda) bg_popup_trans_pane_g6

0x39bc,	// (0x00071ce2) bg_popup_trans_pane_g7

0x39c4,	// (0x00071cea) bg_popup_trans_pane_g8

0xdc71,	// (0x0007bf97) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x0007dcc5) bg_popup_trans_pane_g

0x5439,	// (0x0007375f) cell_image3_tool_bar_pane_ParamLimits

0x5439,	// (0x0007375f) cell_image3_tool_bar_pane

0x2fca,	// (0x000712f0) cell_image3_tool_bar_pane_g1

0x0f26,	// (0x0006f24c) bg_popup_trans_pane_cp1

0x39cc,	// (0x00071cf2) popup_image3_note_pane_t1

0x39da,	// (0x00071d00) popup_image3_note_pane_t2

0x39e8,	// (0x00071d0e) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x0007dcd8) popup_image3_note_pane_t

0x39f6,	// (0x00071d1c) popup_image3_note_pane_t3_copy1

0xb3bb,	// (0x000796e1) bg_myfav_hc_instruction_pane_ParamLimits

0xb3bb,	// (0x000796e1) bg_myfav_hc_instruction_pane

0xb3cd,	// (0x000796f3) cell_myfav_contact_pane_ParamLimits

0xb3cd,	// (0x000796f3) cell_myfav_contact_pane

0xb3e7,	// (0x0007970d) cell_myfav_contact_pane_cp1_ParamLimits

0xb3e7,	// (0x0007970d) cell_myfav_contact_pane_cp1

0xb3fd,	// (0x00079723) cell_myfav_contact_pane_cp2_ParamLimits

0xb3fd,	// (0x00079723) cell_myfav_contact_pane_cp2

0xb413,	// (0x00079739) cell_myfav_contact_pane_cp3_ParamLimits

0xb413,	// (0x00079739) cell_myfav_contact_pane_cp3

0xb428,	// (0x0007974e) cell_myfav_contact_pane_cp4_ParamLimits

0xb428,	// (0x0007974e) cell_myfav_contact_pane_cp4

0xb43c,	// (0x00079762) cell_myfav_contact_pane_cp5_ParamLimits

0xb43c,	// (0x00079762) cell_myfav_contact_pane_cp5

0xb450,	// (0x00079776) cell_myfav_contact_pane_cp6_ParamLimits

0xb450,	// (0x00079776) cell_myfav_contact_pane_cp6

0xb464,	// (0x0007978a) cell_myfav_contact_pane_cp7_ParamLimits

0xb464,	// (0x0007978a) cell_myfav_contact_pane_cp7

0x3a04,	// (0x00071d2a) listscroll_gen_pane_cp05

0xb47c,	// (0x000797a2) main_myfav_hc_pane_g1_ParamLimits

0xb47c,	// (0x000797a2) main_myfav_hc_pane_g1

0xb492,	// (0x000797b8) main_myfav_hc_pane_g2_ParamLimits

0xb492,	// (0x000797b8) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x0007dcdf) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x0007dcdf) main_myfav_hc_pane_g

0xb4bc,	// (0x000797e2) main_myfav_hc_pane_t1_ParamLimits

0xb4bc,	// (0x000797e2) main_myfav_hc_pane_t1

0x3a0d,	// (0x00071d33) main_myfav_hc_pane_t2_ParamLimits

0x3a0d,	// (0x00071d33) main_myfav_hc_pane_t2

0x3a1f,	// (0x00071d45) main_myfav_hc_pane_t3_ParamLimits

0x3a1f,	// (0x00071d45) main_myfav_hc_pane_t3

0xb4d1,	// (0x000797f7) main_myfav_hc_pane_t4_ParamLimits

0xb4d1,	// (0x000797f7) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x0007dce6) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x0007dce6) main_myfav_hc_pane_t

0x2fca,	// (0x000712f0) bg_myfav_hc_instruction_pane_g1

0x3a31,	// (0x00071d57) cell_myfav_contact_pane_g1_ParamLimits

0x3a31,	// (0x00071d57) cell_myfav_contact_pane_g1

0x3a31,	// (0x00071d57) cell_myfav_contact_pane_g2_ParamLimits

0x3a31,	// (0x00071d57) cell_myfav_contact_pane_g2

0x3a3d,	// (0x00071d63) cell_myfav_contact_pane_g3_ParamLimits

0x3a3d,	// (0x00071d63) cell_myfav_contact_pane_g3

0x328a,	// (0x000715b0) cell_myfav_contact_pane_g4_ParamLimits

0x328a,	// (0x000715b0) cell_myfav_contact_pane_g4

0x3a4a,	// (0x00071d70) cell_myfav_contact_pane_g5_ParamLimits

0x3a4a,	// (0x00071d70) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x0007dcf1) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x0007dcf1) cell_myfav_contact_pane_g

0xb4a8,	// (0x000797ce) main_myfav_hc_pane_g3_ParamLimits

0xb4a8,	// (0x000797ce) main_myfav_hc_pane_g3

0x6b47,	// (0x00074e6d) popup_adpt_find_window

0xb4f5,	// (0x0007981b) afind_page_pane_ParamLimits

0xb4f5,	// (0x0007981b) afind_page_pane

0xb502,	// (0x00079828) aid_size_cell_afind_ParamLimits

0xb502,	// (0x00079828) aid_size_cell_afind

0xb51c,	// (0x00079842) bg_popup_sub_pane_cp09_ParamLimits

0xb51c,	// (0x00079842) bg_popup_sub_pane_cp09

0xb529,	// (0x0007984f) find_pane_cp01_ParamLimits

0xb529,	// (0x0007984f) find_pane_cp01

0x3a56,	// (0x00071d7c) grid_afind_control_pane_ParamLimits

0x3a56,	// (0x00071d7c) grid_afind_control_pane

0xb536,	// (0x0007985c) grid_afind_pane_ParamLimits

0xb536,	// (0x0007985c) grid_afind_pane

0xb54c,	// (0x00079872) cell_afind_pane_ParamLimits

0xb54c,	// (0x00079872) cell_afind_pane

0x2fca,	// (0x000712f0) afind_page_pane_g1

0xb582,	// (0x000798a8) afind_page_pane_g2

0xb58b,	// (0x000798b1) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x0007dcfc) afind_page_pane_g

0xb594,	// (0x000798ba) afind_page_pane_t1

0x3a6a,	// (0x00071d90) cell_afind_grid_control_pane_ParamLimits

0x3a6a,	// (0x00071d90) cell_afind_grid_control_pane

0x383c,	// (0x00071b62) bg_button_pane_cp69_ParamLimits

0x383c,	// (0x00071b62) bg_button_pane_cp69

0xb5b4,	// (0x000798da) cell_afind_pane_g1_ParamLimits

0xb5b4,	// (0x000798da) cell_afind_pane_g1

0xb5c1,	// (0x000798e7) cell_afind_pane_t1_ParamLimits

0xb5c1,	// (0x000798e7) cell_afind_pane_t1

0x19f0,	// (0x0006fd16) bg_button_pane_cp72

0x3a79,	// (0x00071d9f) cell_afind_grid_control_pane_g1

0x8f6f,	// (0x00077295) aid_image_placing_area_ParamLimits

0x8f6f,	// (0x00077295) aid_image_placing_area

0x3516,	// (0x0007183c) field_vitu_entry_pane_g1_ParamLimits

0x3516,	// (0x0007183c) field_vitu_entry_pane_g1

0x3522,	// (0x00071848) field_vitu_entry_pane_g2_ParamLimits

0x3522,	// (0x00071848) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x0007dbb6) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x0007dbb6) field_vitu_entry_pane_g

0xa844,	// (0x00078b6a) cell_vitu_itu_pane_g1_ParamLimits

0xa886,	// (0x00078bac) cell_vitu_itu_pane_t3_ParamLimits

0xa886,	// (0x00078bac) cell_vitu_itu_pane_t3

0x37f0,	// (0x00071b16) mp4_progress_pane_t1_ParamLimits

0x3807,	// (0x00071b2d) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x0007dc4b) mp4_progress_pane_t_ParamLimits

0x381e,	// (0x00071b44) mup_progress_pane_cp04_ParamLimits

0xb4e3,	// (0x00079809) main_myfav_hc_pane_t5_ParamLimits

0xb4e3,	// (0x00079809) main_myfav_hc_pane_t5

0x0f48,	// (0x0006f26e) aid_zoom_text_primary

0x6b47,	// (0x00074e6d) popup_adpt_find_window_ParamLimits

0x542b,	// (0x00073751) main_cam_set_pane

0xafec,	// (0x00079312) cam4_zoom_pane_ParamLimits

0xafec,	// (0x00079312) cam4_zoom_pane

0xb5d3,	// (0x000798f9) main_cam_set_pane_g1_ParamLimits

0xb5d3,	// (0x000798f9) main_cam_set_pane_g1

0xb5e1,	// (0x00079907) main_cam_set_pane_g2_ParamLimits

0xb5e1,	// (0x00079907) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x0007dd03) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x0007dd03) main_cam_set_pane_g

0xb5ed,	// (0x00079913) main_cam_set_pane_t1_ParamLimits

0xb5ed,	// (0x00079913) main_cam_set_pane_t1

0xb5ff,	// (0x00079925) main_cset_listscroll_pane_ParamLimits

0xb5ff,	// (0x00079925) main_cset_listscroll_pane

0xb628,	// (0x0007994e) main_cset_slider_pane_ParamLimits

0xb628,	// (0x0007994e) main_cset_slider_pane

0x3a8a,	// (0x00071db0) main_cset_list_pane_ParamLimits

0x3a8a,	// (0x00071db0) main_cset_list_pane

0x3a9a,	// (0x00071dc0) scroll_pane_cp028

0xb647,	// (0x0007996d) aid_area_touch_slider

0xb663,	// (0x00079989) cset_slider_pane

0xb68d,	// (0x000799b3) main_cset_slider_pane_g1

0xb6a2,	// (0x000799c8) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x0007dd08) main_cset_slider_pane_g

0x3ad3,	// (0x00071df9) main_cset_slider_pane_t1

0xb75e,	// (0x00079a84) main_cset_slider_pane_t2

0xb778,	// (0x00079a9e) main_cset_slider_pane_t3

0xb792,	// (0x00079ab8) main_cset_slider_pane_t4

0xb7ac,	// (0x00079ad2) main_cset_slider_pane_t5

0xb7c6,	// (0x00079aec) main_cset_slider_pane_t6

0xb7db,	// (0x00079b01) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x0007dd2d) main_cset_slider_pane_t

0xb8df,	// (0x00079c05) cset_list_set_pane_ParamLimits

0xb8df,	// (0x00079c05) cset_list_set_pane

0xb8ef,	// (0x00079c15) aid_position_infowindow_above

0xb8f7,	// (0x00079c1d) aid_position_infowindow_below

0xb8ff,	// (0x00079c25) cset_list_set_pane_g1_ParamLimits

0xb8ff,	// (0x00079c25) cset_list_set_pane_g1

0x3b73,	// (0x00071e99) cset_list_set_pane_g3_ParamLimits

0x3b73,	// (0x00071e99) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x0007dd4c) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x0007dd4c) cset_list_set_pane_g

0x3b82,	// (0x00071ea8) cset_list_set_pane_t1_ParamLimits

0x3b82,	// (0x00071ea8) cset_list_set_pane_t1

0x542b,	// (0x00073751) list_highlight_pane_cp021_ParamLimits

0x542b,	// (0x00073751) list_highlight_pane_cp021

0xe515,	// (0x0007c83b) cset_slider_pane_g1

0xe527,	// (0x0007c84d) cset_slider_pane_g2

0xe51e,	// (0x0007c844) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x0007dd51) cset_slider_pane_g

0xb90b,	// (0x00079c31) aid_area_touch_cam4_zoom

0xb913,	// (0x00079c39) cam4_zoom_cont_pane

0xb91b,	// (0x00079c41) cam4_zoom_pane_g1

0xb923,	// (0x00079c49) cam4_zoom_pane_g2

0xb92b,	// (0x00079c51) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x0007dd58) cam4_zoom_pane_g

0xb933,	// (0x00079c59) cam4_zoom_cont_pane_g1

0xb93c,	// (0x00079c62) cam4_zoom_cont_pane_g2

0xb945,	// (0x00079c6b) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x0007dd5f) cam4_zoom_cont_pane_g

0xaedd,	// (0x00079203) call4_image_pane_ParamLimits

0xaedd,	// (0x00079203) call4_image_pane

0x3860,	// (0x00071b86) call4_windows_conf_pane_ParamLimits

0x3873,	// (0x00071b99) popup_call4_audio_in_window_ParamLimits

0x3873,	// (0x00071b99) popup_call4_audio_in_window

0x0f26,	// (0x0006f24c) bg_popup_call2_act_pane_cp02

0x38d1,	// (0x00071bf7) call4_list_conf_pane

0x2fca,	// (0x000712f0) call4_image_pane_g1

0x2fca,	// (0x000712f0) call4_image_pane_g2

0x0001,

0xf756,	// (0x0007da7c) call4_image_pane_g

0x3bb2,	// (0x00071ed8) list_single_graphic_popup_conf4_pane_ParamLimits

0x3bb2,	// (0x00071ed8) list_single_graphic_popup_conf4_pane

0x0f26,	// (0x0006f24c) list_highlight_pane_cp022

0x3bc5,	// (0x00071eeb) list_single_graphic_popup_conf4_pane_g1

0xe17a,	// (0x0007c4a0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x0007dd66) list_single_graphic_popup_conf4_pane_g

0x3bcd,	// (0x00071ef3) list_single_graphic_popup_conf4_pane_t1

0x795d,	// (0x00075c83) popup_vtel_slider_window_ParamLimits

0x795d,	// (0x00075c83) popup_vtel_slider_window

0x382a,	// (0x00071b50) dialer2_ne_pane_t2_ParamLimits

0x382a,	// (0x00071b50) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x0007dc50) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x0007dc50) dialer2_ne_pane_t

0x542b,	// (0x00073751) bg_popup_sub_pane_cp010_ParamLimits

0x542b,	// (0x00073751) bg_popup_sub_pane_cp010

0xb94e,	// (0x00079c74) popup_vtel_slider_window_g1_ParamLimits

0xb94e,	// (0x00079c74) popup_vtel_slider_window_g1

0xb95a,	// (0x00079c80) popup_vtel_slider_window_g2_ParamLimits

0xb95a,	// (0x00079c80) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x0007dd6b) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x0007dd6b) popup_vtel_slider_window_g

0xb9a0,	// (0x00079cc6) vtel_slider_pane_ParamLimits

0xb9a0,	// (0x00079cc6) vtel_slider_pane

0xb9af,	// (0x00079cd5) vtel_slider_pane_g1_ParamLimits

0xb9af,	// (0x00079cd5) vtel_slider_pane_g1

0xb9bc,	// (0x00079ce2) vtel_slider_pane_g2_ParamLimits

0xb9bc,	// (0x00079ce2) vtel_slider_pane_g2

0xb9c9,	// (0x00079cef) vtel_slider_pane_g3_ParamLimits

0xb9c9,	// (0x00079cef) vtel_slider_pane_g3

0xb9af,	// (0x00079cd5) vtel_slider_pane_g4_ParamLimits

0xb9af,	// (0x00079cd5) vtel_slider_pane_g4

0xb9d6,	// (0x00079cfc) vtel_slider_pane_g5_ParamLimits

0xb9d6,	// (0x00079cfc) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x0007dd74) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x0007dd74) vtel_slider_pane_g

0x0f26,	// (0x0006f24c) main_gallery2_pane

0xb211,	// (0x00079537) aid_size_row_itut2_dropdow_list_ParamLimits

0xb211,	// (0x00079537) aid_size_row_itut2_dropdow_list

0xb265,	// (0x0007958b) grid_vitu2_function_top_pane_ParamLimits

0xb265,	// (0x0007958b) grid_vitu2_function_top_pane

0xb29f,	// (0x000795c5) popup_vitu2_dropdown_list_window_ParamLimits

0xb29f,	// (0x000795c5) popup_vitu2_dropdown_list_window

0xb2b9,	// (0x000795df) popup_vitu2_match_list_window

0xb9e3,	// (0x00079d09) cell_vitu2_function_top_pane_ParamLimits

0xb9e3,	// (0x00079d09) cell_vitu2_function_top_pane

0xba03,	// (0x00079d29) cell_vitu2_function_top_pane_cp01_ParamLimits

0xba03,	// (0x00079d29) cell_vitu2_function_top_pane_cp01

0xba23,	// (0x00079d49) cell_vitu2_function_top_wide_pane_ParamLimits

0xba23,	// (0x00079d49) cell_vitu2_function_top_wide_pane

0xb144,	// (0x0007946a) bg_button_pane_cp012

0xba41,	// (0x00079d67) cell_vitu2_function_top_pane_g1

0xba50,	// (0x00079d76) bg_button_pane_cp013_ParamLimits

0xba50,	// (0x00079d76) bg_button_pane_cp013

0xba6c,	// (0x00079d92) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xba6c,	// (0x00079d92) cell_vitu2_function_top_wide_pane_g1

0xba84,	// (0x00079daa) bg_popup_sub_pane_cp20

0xba92,	// (0x00079db8) list_vitu2_match_list_pane

0x3994,	// (0x00071cba) bg_popup_sub_pane_cp20_g1

0x399c,	// (0x00071cc2) bg_popup_sub_pane_cp20_g2

0xdc91,	// (0x0007bfb7) bg_popup_sub_pane_cp20_g3

0x39a4,	// (0x00071cca) bg_popup_sub_pane_cp20_g4

0xdc71,	// (0x0007bf97) bg_popup_sub_pane_cp20_g5

0x3be9,	// (0x00071f0f) bg_popup_sub_pane_cp20_g6

0x39b4,	// (0x00071cda) bg_popup_sub_pane_cp20_g7

0x39bc,	// (0x00071ce2) bg_popup_sub_pane_cp20_g8

0x39c4,	// (0x00071cea) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x0007dd7f) bg_popup_sub_pane_cp20_g

0xbaaa,	// (0x00079dd0) list_vitu2_match_list_item_pane_ParamLimits

0xbaaa,	// (0x00079dd0) list_vitu2_match_list_item_pane

0xbabc,	// (0x00079de2) list_vitu2_match_list_item_pane_t1

0x6eef,	// (0x00075215) bg_popup_sub_pane_cp21

0xbaf6,	// (0x00079e1c) grid_vitu2_dropdown_list_pane

0xbafe,	// (0x00079e24) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbafe,	// (0x00079e24) cell_vitu2_dropdown_list_char_pane

0xbb1f,	// (0x00079e45) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbb1f,	// (0x00079e45) cell_vitu2_dropdown_list_ctrl_pane

0x3c03,	// (0x00071f29) cell_vitu2_dropdown_list_char_pane_g1

0x3bfa,	// (0x00071f20) cell_vitu2_dropdown_list_char_pane_g2

0x3bf1,	// (0x00071f17) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x0007dd9c) cell_vitu2_dropdown_list_char_pane_g

0xbb4b,	// (0x00079e71) cell_vitu2_dropdown_list_char_pane_t1

0xbb59,	// (0x00079e7f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbb59,	// (0x00079e7f) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbb69,	// (0x00079e8f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbb69,	// (0x00079e8f) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbb7a,	// (0x00079ea0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbb7a,	// (0x00079ea0) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbb8a,	// (0x00079eb0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbb8a,	// (0x00079eb0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb066,	// (0x0007938c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb066,	// (0x0007938c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x0007dda3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x0007dda3) cell_vitu2_dropdown_list_ctrl_pane_g

0xbba3,	// (0x00079ec9) aid_size_cell_gallery2_ParamLimits

0xbba3,	// (0x00079ec9) aid_size_cell_gallery2

0xbbb1,	// (0x00079ed7) grid_gallery2_pane_ParamLimits

0xbbb1,	// (0x00079ed7) grid_gallery2_pane

0xbbbe,	// (0x00079ee4) scroll_pane_cp029_ParamLimits

0xbbbe,	// (0x00079ee4) scroll_pane_cp029

0xbbca,	// (0x00079ef0) cell_gallery2_pane_ParamLimits

0xbbca,	// (0x00079ef0) cell_gallery2_pane

0x3c0c,	// (0x00071f32) cell_gallery2_pane_g2

0xbbf6,	// (0x00079f1c) cell_gallery2_pane_g3

0x3c16,	// (0x00071f3c) cell_gallery2_pane_g4

0x3c1e,	// (0x00071f44) cell_gallery2_pane_g5

0xe3df,	// (0x0007c705) grid_highlight_pane_cp10

0xb2b9,	// (0x000795df) popup_vitu2_match_list_window_ParamLimits

0xb2c9,	// (0x000795ef) popup_vitu2_query_window_ParamLimits

0xb2c9,	// (0x000795ef) popup_vitu2_query_window

0x6eef,	// (0x00075215) bg_vitu2_candi_button_pane

0x3c03,	// (0x00071f29) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3bfa,	// (0x00071f20) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3bf1,	// (0x00071f17) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xbbfe,	// (0x00079f24) bg_button_pane_cp015

0xbc06,	// (0x00079f2c) bg_button_pane_cp016

0xbc10,	// (0x00079f36) bg_button_pane_cp017

0x542b,	// (0x00073751) bg_popup_sub_pane_cp22

0x3c26,	// (0x00071f4c) popup_vitu2_query_window_g1

0xbc38,	// (0x00079f5e) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x0007ddae) popup_vitu2_query_window_g

0xbc44,	// (0x00079f6a) popup_vitu2_query_window_t1_ParamLimits

0xbc44,	// (0x00079f6a) popup_vitu2_query_window_t1

0xbc6c,	// (0x00079f92) popup_vitu2_query_window_t2_ParamLimits

0xbc6c,	// (0x00079f92) popup_vitu2_query_window_t2

0xbc7e,	// (0x00079fa4) popup_vitu2_query_window_t3_ParamLimits

0xbc7e,	// (0x00079fa4) popup_vitu2_query_window_t3

0xbca6,	// (0x00079fcc) popup_vitu2_query_window_t4_ParamLimits

0xbca6,	// (0x00079fcc) popup_vitu2_query_window_t4

0xbcb8,	// (0x00079fde) popup_vitu2_query_window_t5_ParamLimits

0xbcb8,	// (0x00079fde) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x0007ddb3) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x0007ddb3) popup_vitu2_query_window_t

0x3a82,	// (0x00071da8) main_cset_text_pane

0xb647,	// (0x0007996d) aid_area_touch_slider_ParamLimits

0xb663,	// (0x00079989) cset_slider_pane_ParamLimits

0xb68d,	// (0x000799b3) main_cset_slider_pane_g1_ParamLimits

0xb6a2,	// (0x000799c8) main_cset_slider_pane_g2_ParamLimits

0x3aa3,	// (0x00071dc9) main_cset_slider_pane_g3_ParamLimits

0x3aa3,	// (0x00071dc9) main_cset_slider_pane_g3

0xb6b7,	// (0x000799dd) main_cset_slider_pane_g4_ParamLimits

0xb6b7,	// (0x000799dd) main_cset_slider_pane_g4

0xb6c6,	// (0x000799ec) main_cset_slider_pane_g5_ParamLimits

0xb6c6,	// (0x000799ec) main_cset_slider_pane_g5

0xb6d2,	// (0x000799f8) main_cset_slider_pane_g6_ParamLimits

0xb6d2,	// (0x000799f8) main_cset_slider_pane_g6

0xf9e2,	// (0x0007dd08) main_cset_slider_pane_g_ParamLimits

0x3ad3,	// (0x00071df9) main_cset_slider_pane_t1_ParamLimits

0xb75e,	// (0x00079a84) main_cset_slider_pane_t2_ParamLimits

0xb778,	// (0x00079a9e) main_cset_slider_pane_t3_ParamLimits

0xb792,	// (0x00079ab8) main_cset_slider_pane_t4_ParamLimits

0xb7ac,	// (0x00079ad2) main_cset_slider_pane_t5_ParamLimits

0xb7c6,	// (0x00079aec) main_cset_slider_pane_t6_ParamLimits

0xb7db,	// (0x00079b01) main_cset_slider_pane_t7_ParamLimits

0xb805,	// (0x00079b2b) main_cset_slider_pane_t8_ParamLimits

0xb805,	// (0x00079b2b) main_cset_slider_pane_t8

0xb82d,	// (0x00079b53) main_cset_slider_pane_t9_ParamLimits

0xb82d,	// (0x00079b53) main_cset_slider_pane_t9

0xb855,	// (0x00079b7b) main_cset_slider_pane_t10_ParamLimits

0xb855,	// (0x00079b7b) main_cset_slider_pane_t10

0xb87d,	// (0x00079ba3) main_cset_slider_pane_t11_ParamLimits

0xb87d,	// (0x00079ba3) main_cset_slider_pane_t11

0xb8a5,	// (0x00079bcb) main_cset_slider_pane_t12_ParamLimits

0xb8a5,	// (0x00079bcb) main_cset_slider_pane_t12

0xb8c2,	// (0x00079be8) main_cset_slider_pane_t13_ParamLimits

0xb8c2,	// (0x00079be8) main_cset_slider_pane_t13

0xfa07,	// (0x0007dd2d) main_cset_slider_pane_t_ParamLimits

0x0f26,	// (0x0006f24c) bg_popup_sub_pane_cp011

0x3c32,	// (0x00071f58) main_cset_text_pane_g1

0x3c3a,	// (0x00071f60) main_cset_text_pane_t1

0x3c48,	// (0x00071f6e) main_cset_text_pane_t2

0x3c56,	// (0x00071f7c) main_cset_text_pane_t3

0x3c64,	// (0x00071f8a) main_cset_text_pane_t4

0x3c72,	// (0x00071f98) main_cset_text_pane_t5

0x3c80,	// (0x00071fa6) main_cset_text_pane_t6

0x3c8e,	// (0x00071fb4) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x0007ddbe) main_cset_text_pane_t

0x0f26,	// (0x0006f24c) main_cam4_burst_pane

0x0f26,	// (0x0006f24c) main_cam5_pane

0xb5a2,	// (0x000798c8) bg_button_pane_cp019

0xb5ab,	// (0x000798d1) bg_button_pane_cp020

0x3aaf,	// (0x00071dd5) main_cset_slider_pane_g7_ParamLimits

0x3aaf,	// (0x00071dd5) main_cset_slider_pane_g7

0x3abb,	// (0x00071de1) main_cset_slider_pane_g8_ParamLimits

0x3abb,	// (0x00071de1) main_cset_slider_pane_g8

0xb6e6,	// (0x00079a0c) main_cset_slider_pane_g9_ParamLimits

0xb6e6,	// (0x00079a0c) main_cset_slider_pane_g9

0xb6f2,	// (0x00079a18) main_cset_slider_pane_g10_ParamLimits

0xb6f2,	// (0x00079a18) main_cset_slider_pane_g10

0xb6fe,	// (0x00079a24) main_cset_slider_pane_g11_ParamLimits

0xb6fe,	// (0x00079a24) main_cset_slider_pane_g11

0xb70a,	// (0x00079a30) main_cset_slider_pane_g12_ParamLimits

0xb70a,	// (0x00079a30) main_cset_slider_pane_g12

0xb716,	// (0x00079a3c) main_cset_slider_pane_g13_ParamLimits

0xb716,	// (0x00079a3c) main_cset_slider_pane_g13

0xb722,	// (0x00079a48) main_cset_slider_pane_g14_ParamLimits

0xb722,	// (0x00079a48) main_cset_slider_pane_g14

0xb72e,	// (0x00079a54) main_cset_slider_pane_g15_ParamLimits

0xb72e,	// (0x00079a54) main_cset_slider_pane_g15

0x3b01,	// (0x00071e27) main_cset_slider_pane_t14_ParamLimits

0x3b01,	// (0x00071e27) main_cset_slider_pane_t14

0x3b3a,	// (0x00071e60) main_cset_slider_pane_t15_ParamLimits

0x3b3a,	// (0x00071e60) main_cset_slider_pane_t15

0xbcca,	// (0x00079ff0) aid_cam4_burst_size_cell_ParamLimits

0xbcca,	// (0x00079ff0) aid_cam4_burst_size_cell

0xbce6,	// (0x0007a00c) grid_cam4_burst_pane_ParamLimits

0xbce6,	// (0x0007a00c) grid_cam4_burst_pane

0xbd08,	// (0x0007a02e) linegrid_cam4_burst_pane_ParamLimits

0xbd08,	// (0x0007a02e) linegrid_cam4_burst_pane

0xbd26,	// (0x0007a04c) scroll_pane_cp30_ParamLimits

0xbd26,	// (0x0007a04c) scroll_pane_cp30

0xbd32,	// (0x0007a058) cell_cam4_burst_pane_ParamLimits

0xbd32,	// (0x0007a058) cell_cam4_burst_pane

0x3c9c,	// (0x00071fc2) linegrid_cam4_burst_pane_g1_ParamLimits

0x3c9c,	// (0x00071fc2) linegrid_cam4_burst_pane_g1

0xbd6a,	// (0x0007a090) linegrid_cam4_burst_pane_g2_ParamLimits

0xbd6a,	// (0x0007a090) linegrid_cam4_burst_pane_g2

0x3ca9,	// (0x00071fcf) linegrid_cam4_burst_pane_g3_ParamLimits

0x3ca9,	// (0x00071fcf) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x0007ddcd) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x0007ddcd) linegrid_cam4_burst_pane_g

0xbd7b,	// (0x0007a0a1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbd7b,	// (0x0007a0a1) linegrid_cam4_burst_pane_g3_copy1

0x3cb6,	// (0x00071fdc) linegrid_cam4_burst_pane_g4_ParamLimits

0x3cb6,	// (0x00071fdc) linegrid_cam4_burst_pane_g4

0xbd95,	// (0x0007a0bb) linegrid_cam4_burst_pane_g5_ParamLimits

0xbd95,	// (0x0007a0bb) linegrid_cam4_burst_pane_g5

0xbda6,	// (0x0007a0cc) linegrid_cam4_burst_pane_g6_ParamLimits

0xbda6,	// (0x0007a0cc) linegrid_cam4_burst_pane_g6

0x3cc3,	// (0x00071fe9) linegrid_cam4_burst_pane_g7_ParamLimits

0x3cc3,	// (0x00071fe9) linegrid_cam4_burst_pane_g7

0xbdb7,	// (0x0007a0dd) cell_cam4_burst_pane_g1

0x3cdc,	// (0x00072002) main_cam5_pane_t1_ParamLimits

0x3cdc,	// (0x00072002) main_cam5_pane_t1

0x3cee,	// (0x00072014) main_cam5_pane_t2_ParamLimits

0x3cee,	// (0x00072014) main_cam5_pane_t2

0x3d00,	// (0x00072026) main_cam5_pane_t3_ParamLimits

0x3d00,	// (0x00072026) main_cam5_pane_t3

0x3d12,	// (0x00072038) main_cam5_pane_t4_ParamLimits

0x3d12,	// (0x00072038) main_cam5_pane_t4

0x3d28,	// (0x0007204e) main_cam5_pane_t5_ParamLimits

0x3d28,	// (0x0007204e) main_cam5_pane_t5

0x3d3a,	// (0x00072060) main_cam5_pane_t6_ParamLimits

0x3d3a,	// (0x00072060) main_cam5_pane_t6

0x3d4c,	// (0x00072072) main_cam5_pane_t7_ParamLimits

0x3d4c,	// (0x00072072) main_cam5_pane_t7

0x3d5e,	// (0x00072084) main_cam5_pane_t8_ParamLimits

0x3d5e,	// (0x00072084) main_cam5_pane_t8

0x3d7a,	// (0x000720a0) main_cam5_pane_t9_ParamLimits

0x3d7a,	// (0x000720a0) main_cam5_pane_t9

0x3d8c,	// (0x000720b2) main_cam5_pane_t10_ParamLimits

0x3d8c,	// (0x000720b2) main_cam5_pane_t10

0x3d9e,	// (0x000720c4) main_cam5_pane_t11_ParamLimits

0x3d9e,	// (0x000720c4) main_cam5_pane_t11

0x3db0,	// (0x000720d6) main_cam5_pane_t12_ParamLimits

0x3db0,	// (0x000720d6) main_cam5_pane_t12

0x3dc5,	// (0x000720eb) main_cam5_pane_t13_ParamLimits

0x3dc5,	// (0x000720eb) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x0007ddd9) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x0007ddd9) main_cam5_pane_t

0x6bba,	// (0x00074ee0) popup_scut_keymap_window_ParamLimits

0x6bba,	// (0x00074ee0) popup_scut_keymap_window

0xbdca,	// (0x0007a0f0) aid_size_cell_brow_shortcut

0xe3df,	// (0x0007c705) bg_popup_window_pane_cp010

0xbdd6,	// (0x0007a0fc) grid_scut_pane

0xbde0,	// (0x0007a106) cell_scut_pane_ParamLimits

0xbde0,	// (0x0007a106) cell_scut_pane

0xbdf5,	// (0x0007a11b) cell_scut_pane_g1

0x3de2,	// (0x00072108) cell_scut_pane_t1

0x3df1,	// (0x00072117) cell_scut_pane_t2

0xbdfe,	// (0x0007a124) cell_scut_pane_t3

0x0002,

0xface,	// (0x0007ddf4) cell_scut_pane_t

0x9f2e,	// (0x00078254) main_mup3_pane_g8_ParamLimits

0x9f2e,	// (0x00078254) main_mup3_pane_g8

0xb21d,	// (0x00079543) area_vitu2_query_pane_ParamLimits

0xb21d,	// (0x00079543) area_vitu2_query_pane

0xbc1a,	// (0x00079f40) input_focus_pane_cp08

0x3e00,	// (0x00072126) area_vitu2_query_pane_g1

0xbe0c,	// (0x0007a132) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x0007ddfb) area_vitu2_query_pane_g

0xbe1b,	// (0x0007a141) area_vitu2_query_pane_t1_ParamLimits

0xbe1b,	// (0x0007a141) area_vitu2_query_pane_t1

0xbe2d,	// (0x0007a153) area_vitu2_query_pane_t2_ParamLimits

0xbe2d,	// (0x0007a153) area_vitu2_query_pane_t2

0xbe3f,	// (0x0007a165) area_vitu2_query_pane_t3_ParamLimits

0xbe3f,	// (0x0007a165) area_vitu2_query_pane_t3

0x3e0c,	// (0x00072132) area_vitu2_query_pane_t4_ParamLimits

0x3e0c,	// (0x00072132) area_vitu2_query_pane_t4

0x3e34,	// (0x0007215a) area_vitu2_query_pane_t5_ParamLimits

0x3e34,	// (0x0007215a) area_vitu2_query_pane_t5

0x3e5c,	// (0x00072182) area_vitu2_query_pane_t6_ParamLimits

0x3e5c,	// (0x00072182) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x0007de00) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x0007de00) area_vitu2_query_pane_t

0xbe67,	// (0x0007a18d) bg_button_pane_cp018

0xbe74,	// (0x0007a19a) bg_button_pane_cp021

0xbe80,	// (0x0007a1a6) bg_button_pane_cp022

0xbe8f,	// (0x0007a1b5) input_focus_pane_cp09

0x8748,	// (0x00076a6e) aid_size_touch_mv_arrow_left

0xe2b8,	// (0x0007c5de) aid_size_touch_mv_arrow_right

0xb746,	// (0x00079a6c) main_cset_slider_pane_g16_ParamLimits

0xb746,	// (0x00079a6c) main_cset_slider_pane_g16

0xb752,	// (0x00079a78) main_cset_slider_pane_g17_ParamLimits

0xb752,	// (0x00079a78) main_cset_slider_pane_g17

0xbdb7,	// (0x0007a0dd) cell_cam4_burst_pane_g1_ParamLimits

0x0f26,	// (0x0006f24c) compa_mode_pane

0xb966,	// (0x00079c8c) popup_vtel_slider_window_g3_ParamLimits

0xb966,	// (0x00079c8c) popup_vtel_slider_window_g3

0xb97a,	// (0x00079ca0) popup_vtel_slider_window_g4_ParamLimits

0xb97a,	// (0x00079ca0) popup_vtel_slider_window_g4

0xb98e,	// (0x00079cb4) popup_vtel_slider_window_t1_ParamLimits

0xb98e,	// (0x00079cb4) popup_vtel_slider_window_t1

0x0f26,	// (0x0006f24c) main_cl_pane

0x2bb5,	// (0x00070edb) popup_imed_adjust2_window_ParamLimits

0x2b8f,	// (0x00070eb5) bg_tb_trans_pane_cp05_ParamLimits

0x344b,	// (0x00071771) popup_imed_adjust2_window_g1_ParamLimits

0x345a,	// (0x00071780) popup_imed_adjust2_window_g2_ParamLimits

0x345a,	// (0x00071780) popup_imed_adjust2_window_g2

0x3466,	// (0x0007178c) popup_imed_adjust2_window_g3_ParamLimits

0x3466,	// (0x0007178c) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x0007db7a) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x0007db7a) popup_imed_adjust2_window_g

0x3472,	// (0x00071798) popup_imed_adjust2_window_t1_ParamLimits

0x348a,	// (0x000717b0) slider_imed_adjust_pane_ParamLimits

0x349e,	// (0x000717c4) slider_imed_adjust_pane_g1_ParamLimits

0x34ae,	// (0x000717d4) slider_imed_adjust_pane_g2_ParamLimits

0x34be,	// (0x000717e4) slider_imed_adjust_pane_g3_ParamLimits

0x34cf,	// (0x000717f5) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x0007db81) slider_imed_adjust_pane_g_ParamLimits

0xafa7,	// (0x000792cd) aid_touch_area_cam4_ParamLimits

0xafa7,	// (0x000792cd) aid_touch_area_cam4

0xafb5,	// (0x000792db) battery_pane_cp01

0xb036,	// (0x0007935c) main_camera4_pane_g6_ParamLimits

0xb036,	// (0x0007935c) main_camera4_pane_g6

0xb054,	// (0x0007937a) main_camera4_pane_t2_ParamLimits

0xb054,	// (0x0007937a) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x0007dc84) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x0007dc84) main_camera4_pane_t

0xb0c6,	// (0x000793ec) aid_touch_area_vid4_ParamLimits

0xb0c6,	// (0x000793ec) aid_touch_area_vid4

0xb0f8,	// (0x0007941e) main_video4_pane_g5_ParamLimits

0xb0f8,	// (0x0007941e) main_video4_pane_g5

0xb11a,	// (0x00079440) vid4_progress_pane_ParamLimits

0xb11a,	// (0x00079440) vid4_progress_pane

0x3ac7,	// (0x00071ded) main_cset_slider_pane_g18_ParamLimits

0x3ac7,	// (0x00071ded) main_cset_slider_pane_g18

0x3cd0,	// (0x00071ff6) cell_cam4_burst_pane_g2_ParamLimits

0x3cd0,	// (0x00071ff6) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x0007ddd4) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x0007ddd4) cell_cam4_burst_pane_g

0xbe9e,	// (0x0007a1c4) bg_cl_pane_ParamLimits

0xbe9e,	// (0x0007a1c4) bg_cl_pane

0xbeaa,	// (0x0007a1d0) cl_header_pane_ParamLimits

0xbeaa,	// (0x0007a1d0) cl_header_pane

0xbeb6,	// (0x0007a1dc) cl_listscroll_pane_ParamLimits

0xbeb6,	// (0x0007a1dc) cl_listscroll_pane

0x3ea8,	// (0x000721ce) bg_cl_pane_g1

0x3eb0,	// (0x000721d6) bg_cl_pane_g2

0x3eb8,	// (0x000721de) bg_cl_pane_g3

0x3ec0,	// (0x000721e6) bg_cl_pane_g4

0x3ec8,	// (0x000721ee) bg_cl_pane_g5

0x3ed0,	// (0x000721f6) bg_cl_pane_g6

0x3ed8,	// (0x000721fe) bg_cl_pane_g7

0x3ee0,	// (0x00072206) bg_cl_pane_g8

0x3ee8,	// (0x0007220e) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x0007de0f) bg_cl_pane_g

0xbec2,	// (0x0007a1e8) aid_height_cl_leading_ParamLimits

0xbec2,	// (0x0007a1e8) aid_height_cl_leading

0xbece,	// (0x0007a1f4) aid_height_cl_text_ParamLimits

0xbece,	// (0x0007a1f4) aid_height_cl_text

0x38fd,	// (0x00071c23) bg_cl_header_pane_ParamLimits

0x38fd,	// (0x00071c23) bg_cl_header_pane

0xbee6,	// (0x0007a20c) cl_header_pane_g1_ParamLimits

0xbee6,	// (0x0007a20c) cl_header_pane_g1

0xbef3,	// (0x0007a219) cl_header_pane_t1_ParamLimits

0xbef3,	// (0x0007a219) cl_header_pane_t1

0x3ef0,	// (0x00072216) cl_list_pane

0x3ef9,	// (0x0007221f) hc_scroll_pane_cp01

0xdc71,	// (0x0007bf97) bg_cl_header_pane_g1

0x3994,	// (0x00071cba) bg_cl_header_pane_g2

0xdc91,	// (0x0007bfb7) bg_cl_header_pane_g3

0x39a4,	// (0x00071cca) bg_cl_header_pane_g4

0x399c,	// (0x00071cc2) bg_cl_header_pane_g5

0x3be9,	// (0x00071f0f) bg_cl_header_pane_g6

0x39bc,	// (0x00071ce2) bg_cl_header_pane_g7

0x39c4,	// (0x00071cea) bg_cl_header_pane_g8

0x39b4,	// (0x00071cda) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x0007de22) bg_cl_header_pane_g

0xbf05,	// (0x0007a22b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbf05,	// (0x0007a22b) hc_cl_list_double_graphic_heading_pane

0xbf15,	// (0x0007a23b) hc_cl_list_single_graphic_pane_ParamLimits

0xbf15,	// (0x0007a23b) hc_cl_list_single_graphic_pane

0xbf27,	// (0x0007a24d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbf27,	// (0x0007a24d) hc_cl_list_single_graphic_pane_g1

0xbf33,	// (0x0007a259) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbf33,	// (0x0007a259) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x0007de35) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x0007de35) hc_cl_list_single_graphic_pane_g

0xbf47,	// (0x0007a26d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbf47,	// (0x0007a26d) hc_cl_list_single_graphic_pane_t1

0xbf27,	// (0x0007a24d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbf27,	// (0x0007a24d) hc_cl_list_double_graphic_heading_pane_g1

0xbf5c,	// (0x0007a282) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbf5c,	// (0x0007a282) hc_cl_list_double_graphic_heading_pane_g2

0xbf70,	// (0x0007a296) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbf70,	// (0x0007a296) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x0007de3a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x0007de3a) hc_cl_list_double_graphic_heading_pane_g

0xbf84,	// (0x0007a2aa) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbf84,	// (0x0007a2aa) hc_cl_list_double_graphic_heading_pane_t1

0xbf99,	// (0x0007a2bf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbf99,	// (0x0007a2bf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x0007de41) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x0007de41) hc_cl_list_double_graphic_heading_pane_t

0xbfae,	// (0x0007a2d4) vid4_progress_pane_g1

0xbfbd,	// (0x0007a2e3) vid4_progress_pane_g2

0xbfcc,	// (0x0007a2f2) vid4_progress_pane_g3

0xbfdb,	// (0x0007a301) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x0007de46) vid4_progress_pane_g

0xbff3,	// (0x0007a319) vid4_progress_pane_t1

0xc009,	// (0x0007a32f) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x0007de51) vid4_progress_pane_t

0xc033,	// (0x0007a359) wait_bar_pane_cp07

0x2dc5,	// (0x000710eb) blid_firmament_pane_ParamLimits

0x2e06,	// (0x0007112c) popup_blid_sat_info2_window_g1

0x2e2a,	// (0x00071150) popup_blid_sat_info2_window_t3

0x2e38,	// (0x0007115e) popup_blid_sat_info2_window_t4

0x2e46,	// (0x0007116c) popup_blid_sat_info2_window_t5

0x2e54,	// (0x0007117a) popup_blid_sat_info2_window_t6

0x2e64,	// (0x0007118a) popup_blid_sat_info2_window_t7

0x2e72,	// (0x00071198) popup_blid_sat_info2_window_t8

0x2e80,	// (0x000711a6) popup_blid_sat_info2_window_t9

0x2e8e,	// (0x000711b4) popup_blid_sat_info2_window_t10

0x2f4a,	// (0x00071270) aid_firma_cardinal_ParamLimits

0x2f5e,	// (0x00071284) blid_firmament_pane_t1_ParamLimits

0x2f75,	// (0x0007129b) blid_firmament_pane_t2_ParamLimits

0x2f8c,	// (0x000712b2) blid_firmament_pane_t3_ParamLimits

0x2fa3,	// (0x000712c9) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x0007da73) blid_firmament_pane_t_ParamLimits

0x2fba,	// (0x000712e0) blid_sat_info_pane_ParamLimits

0x542b,	// (0x00073751) main_cam_set_pane_ParamLimits

0xa693,	// (0x000789b9) aid_size_cell_colour_35_ParamLimits

0xa6aa,	// (0x000789d0) aid_size_cell_colour_112_ParamLimits

0xa6c1,	// (0x000789e7) aid_size_cell_effect_ParamLimits

0x542b,	// (0x00073751) bg_tb_trans_pane_cp02_ParamLimits

0xe823,	// (0x0007cb49) heading_imed_pane_ParamLimits

0xa6db,	// (0x00078a01) listscroll_imed_pane_ParamLimits

0x2181,	// (0x000704a7) popup_call2_audio_first_window_g5_ParamLimits

0x2181,	// (0x000704a7) popup_call2_audio_first_window_g5

0xad5e,	// (0x00079084) aid_size_touch_image3_arrow_left_ParamLimits

0xad5e,	// (0x00079084) aid_size_touch_image3_arrow_left

0xad72,	// (0x00079098) aid_size_touch_image3_arrow_right_ParamLimits

0xad72,	// (0x00079098) aid_size_touch_image3_arrow_right

0xc01e,	// (0x0007a344) vid4_progress_pane_t3

0xa93f,	// (0x00078c65) main_hwr_training_symbol_option_pane_ParamLimits

0xa93f,	// (0x00078c65) main_hwr_training_symbol_option_pane

0x372a,	// (0x00071a50) popup_hwr_training_preview_window_ParamLimits

0x372a,	// (0x00071a50) popup_hwr_training_preview_window

0xa99a,	// (0x00078cc0) hwr_training_navi_pane_g5_ParamLimits

0xa99a,	// (0x00078cc0) hwr_training_navi_pane_g5

0x3982,	// (0x00071ca8) popup_char_count_window

0xba84,	// (0x00079daa) bg_popup_sub_pane_cp20_ParamLimits

0xba92,	// (0x00079db8) list_vitu2_match_list_pane_ParamLimits

0xba9e,	// (0x00079dc4) vitu2_page_scroll_pane_ParamLimits

0xba9e,	// (0x00079dc4) vitu2_page_scroll_pane

0x3f4b,	// (0x00072271) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3f4b,	// (0x00072271) list_single_hwr_training_symbol_option_pane

0x3f5e,	// (0x00072284) list_single_hwr_training_symbol_option_pane_g1

0x3f66,	// (0x0007228c) list_single_hwr_training_symbol_option_pane_t1

0x3f74,	// (0x0007229a) bg_button_pane_cp023

0x3f7d,	// (0x000722a3) bg_button_pane_cp024

0xc043,	// (0x0007a369) vitu2_page_scroll_pane_g1

0xc04b,	// (0x0007a371) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x0007de58) vitu2_page_scroll_pane_g

0xc053,	// (0x0007a379) vitu2_page_scroll_pane_t1

0x2d25,	// (0x0007104b) popup_char_count_window_g1

0x3fb0,	// (0x000722d6) popup_char_count_window_g2

0x3fb9,	// (0x000722df) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x0007de5d) popup_char_count_window_g

0x3fc2,	// (0x000722e8) popup_char_count_window_t1

0x0f26,	// (0x0006f24c) main_vded2_pane

0x3439,	// (0x0007175f) aid_size_cell_imed_line

0x3443,	// (0x00071769) grid_imed_line_width_pane

0xb173,	// (0x00079499) vid4_indicators_pane_g4

0x3fd0,	// (0x000722f6) cell_imed_line_width_pane_ParamLimits

0x3fd0,	// (0x000722f6) cell_imed_line_width_pane

0x3fe2,	// (0x00072308) cell_imed_line_width_pane_g1

0x3feb,	// (0x00072311) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x0007de64) cell_imed_line_width_pane_g

0xc062,	// (0x0007a388) main_vded2_pane_g1_ParamLimits

0xc062,	// (0x0007a388) main_vded2_pane_g1

0xc06f,	// (0x0007a395) main_vded2_pane_g2_ParamLimits

0xc06f,	// (0x0007a395) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x0007de69) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x0007de69) main_vded2_pane_g

0xc07b,	// (0x0007a3a1) vded2_slider_pane_ParamLimits

0xc07b,	// (0x0007a3a1) vded2_slider_pane

0xc088,	// (0x0007a3ae) aid_size_touch_vded2_end

0xc090,	// (0x0007a3b6) aid_size_touch_vded2_playhead

0xc098,	// (0x0007a3be) aid_size_touch_vded2_start

0xc0a0,	// (0x0007a3c6) vded2_slider_bg_pane

0xc0a9,	// (0x0007a3cf) vded2_slider_pane_g1

0xc0b2,	// (0x0007a3d8) vded2_slider_pane_g2

0xc0ba,	// (0x0007a3e0) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0007de6e) vded2_slider_pane_g

0xc0c3,	// (0x0007a3e9) vded2_slider_bg_pane_g1

0xc0cc,	// (0x0007a3f2) vded2_slider_bg_pane_g2

0xc0d5,	// (0x0007a3fb) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x0007de75) vded2_slider_bg_pane_g

0x8d1f,	// (0x00077045) aid_postcard_touch_down_pane_ParamLimits

0x8d1f,	// (0x00077045) aid_postcard_touch_down_pane

0x8d2b,	// (0x00077051) aid_postcard_touch_up_pane_ParamLimits

0x8d2b,	// (0x00077051) aid_postcard_touch_up_pane

0x0f26,	// (0x0006f24c) main_blid2_pane

0x2b9d,	// (0x00070ec3) popup_blid2_search_window

0x0f26,	// (0x0006f24c) blid2_gps_pane

0x0f26,	// (0x0006f24c) blid2_navig_pane

0x0f26,	// (0x0006f24c) blid2_search_pane

0x0f26,	// (0x0006f24c) blid2_tripm_pane

0xc0de,	// (0x0007a404) blid2_search_pane_g1_ParamLimits

0xc0de,	// (0x0007a404) blid2_search_pane_g1

0xc0ea,	// (0x0007a410) blid2_search_pane_t1_ParamLimits

0xc0ea,	// (0x0007a410) blid2_search_pane_t1

0xc0fc,	// (0x0007a422) aid_size_cell_blid2_gps_ParamLimits

0xc0fc,	// (0x0007a422) aid_size_cell_blid2_gps

0xc10c,	// (0x0007a432) blid2_gps_pane_g1_ParamLimits

0xc10c,	// (0x0007a432) blid2_gps_pane_g1

0xc118,	// (0x0007a43e) grid_blid2_satellite_pane_ParamLimits

0xc118,	// (0x0007a43e) grid_blid2_satellite_pane

0xc124,	// (0x0007a44a) blid2_navig_pane_g1_ParamLimits

0xc124,	// (0x0007a44a) blid2_navig_pane_g1

0xc130,	// (0x0007a456) blid2_navig_pane_t1_ParamLimits

0xc130,	// (0x0007a456) blid2_navig_pane_t1

0xc142,	// (0x0007a468) blid2_navig_pane_t2_ParamLimits

0xc142,	// (0x0007a468) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x0007de7c) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x0007de7c) blid2_navig_pane_t

0xc154,	// (0x0007a47a) blid2_navig_ring_pane_ParamLimits

0xc154,	// (0x0007a47a) blid2_navig_ring_pane

0xc160,	// (0x0007a486) blid2_speed_pane_ParamLimits

0xc160,	// (0x0007a486) blid2_speed_pane

0xc16c,	// (0x0007a492) blid2_tripm_pane_g1_ParamLimits

0xc16c,	// (0x0007a492) blid2_tripm_pane_g1

0xc178,	// (0x0007a49e) blid2_tripm_pane_g2_ParamLimits

0xc178,	// (0x0007a49e) blid2_tripm_pane_g2

0xc184,	// (0x0007a4aa) blid2_tripm_pane_g3_ParamLimits

0xc184,	// (0x0007a4aa) blid2_tripm_pane_g3

0xc190,	// (0x0007a4b6) blid2_tripm_pane_g4_ParamLimits

0xc190,	// (0x0007a4b6) blid2_tripm_pane_g4

0xc19c,	// (0x0007a4c2) blid2_tripm_pane_g5_ParamLimits

0xc19c,	// (0x0007a4c2) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x0007de81) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x0007de81) blid2_tripm_pane_g

0xc1b4,	// (0x0007a4da) blid2_tripm_pane_t1_ParamLimits

0xc1b4,	// (0x0007a4da) blid2_tripm_pane_t1

0xc1c6,	// (0x0007a4ec) blid2_tripm_pane_t2_ParamLimits

0xc1c6,	// (0x0007a4ec) blid2_tripm_pane_t2

0xc1d8,	// (0x0007a4fe) blid2_tripm_pane_t3_ParamLimits

0xc1d8,	// (0x0007a4fe) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0007de8e) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0007de8e) blid2_tripm_pane_t

0xc208,	// (0x0007a52e) cell_blid2_satellite_pane_ParamLimits

0xc208,	// (0x0007a52e) cell_blid2_satellite_pane

0xc220,	// (0x0007a546) cell_blid2_satellite_pane_g1

0x3ff3,	// (0x00072319) cell_blid2_satellite_pane_t1

0x2fca,	// (0x000712f0) blid2_speed_pane_g1

0x4001,	// (0x00072327) blid2_speed_pane_t1

0x400f,	// (0x00072335) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x0007de97) blid2_speed_pane_t

0x2fca,	// (0x000712f0) blid2_navig_ring_pane_g1

0xc229,	// (0x0007a54f) blid2_navig_ring_pane_g2

0xc231,	// (0x0007a557) blid2_navig_ring_pane_g3

0xc239,	// (0x0007a55f) blid2_navig_ring_pane_g4

0xc241,	// (0x0007a567) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x0007de9c) blid2_navig_ring_pane_g

0x0f26,	// (0x0006f24c) bg_popup_window_pane_cp011

0x401d,	// (0x00072343) popup_blid2_search_window_g1

0x4025,	// (0x0007234b) popup_blid2_search_window_t1

0x4033,	// (0x00072359) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x0007dea7) popup_blid2_search_window_t

0x54f9,	// (0x0007381f) main_browser_pane_g1

0x16de,	// (0x0006fa04) main_browser_pane_ParamLimits

0xb144,	// (0x0007946a) bg_button_pane_cp011_ParamLimits

0xb3a7,	// (0x000796cd) cell_vitu2_function_pane_g1_ParamLimits

0x542b,	// (0x00073751) bg_popup_sub_pane_cp22_ParamLimits

0xbc1a,	// (0x00079f40) input_focus_pane_cp08_ParamLimits

0xbc27,	// (0x00079f4d) popup_vitu2_query_button_pane_ParamLimits

0xbc27,	// (0x00079f4d) popup_vitu2_query_button_pane

0xbbfe,	// (0x00079f24) popup_vitu2_query_input_button_pane

0x3c26,	// (0x00071f4c) popup_vitu2_query_window_g1_ParamLimits

0xbc38,	// (0x00079f5e) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x0007ddae) popup_vitu2_query_window_g_ParamLimits

0x0f26,	// (0x0006f24c) bg_button_pane_cp026

0xc249,	// (0x0007a56f) popup_vitu2_query_input_button_pane_g1

0x0f26,	// (0x0006f24c) bg_button_pane_cp025

0x4041,	// (0x00072367) popup_vitu2_query_button_pane_t1

0x9cd0,	// (0x00077ff6) main_mp3_pane_t6

0x9cde,	// (0x00078004) popup_slider_window_cp01

0xb074,	// (0x0007939a) cam4_battery_pane

0xb074,	// (0x0007939a) cam4_battery_pane_cp02

0xb074,	// (0x0007939a) cam4_battery_pane_cp01

0xb074,	// (0x0007939a) cam4_battery_pane_cp03

0x404f,	// (0x00072375) cam4_battery_pane_g1

0x2fca,	// (0x000712f0) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x0007deac) cam4_battery_pane_g

0x2e9c,	// (0x000711c2) popup_blid_sat_info2_window_t11

0x8748,	// (0x00076a6e) aid_size_touch_mv_arrow_left_ParamLimits

0xe2b8,	// (0x0007c5de) aid_size_touch_mv_arrow_right_ParamLimits

0xe2f0,	// (0x0007c616) navi_pane_g1_ParamLimits

0xe2fc,	// (0x0007c622) navi_pane_g2_ParamLimits

0x8761,	// (0x00076a87) navi_pane_g3_ParamLimits

0xf44c,	// (0x0007d772) navi_pane_g_ParamLimits

0x8786,	// (0x00076aac) navi_pane_mv_t1_ParamLimits

0xa6e7,	// (0x00078a0d) grid_imed_effect_pane_ParamLimits

0x1ad5,	// (0x0006fdfb) aid_placing_vt_slider_lsc

0x1add,	// (0x0006fe03) aid_placing_vt_slider_prt

0x542b,	// (0x00073751) bg_tb_trans_pane_cp01_ParamLimits

0x3119,	// (0x0007143f) popup_image_details_window_g1_ParamLimits

0x312c,	// (0x00071452) popup_image_details_window_g2_ParamLimits

0x3141,	// (0x00071467) popup_image_details_window_g3_ParamLimits

0x3141,	// (0x00071467) popup_image_details_window_g3

0xf792,	// (0x0007dab8) popup_image_details_window_g_ParamLimits

0x3155,	// (0x0007147b) popup_image_details_window_t1_ParamLimits

0x3167,	// (0x0007148d) popup_image_details_window_t2_ParamLimits

0x3180,	// (0x000714a6) popup_image_details_window_t3_ParamLimits

0x3194,	// (0x000714ba) popup_image_details_window_t4_ParamLimits

0x31af,	// (0x000714d5) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x0007dabf) popup_image_details_window_t_ParamLimits

0xbeda,	// (0x0007a200) cl_header_name_pane_ParamLimits

0xbeda,	// (0x0007a200) cl_header_name_pane

0xc251,	// (0x0007a577) cl_header_name_pane_t1_ParamLimits

0xc251,	// (0x0007a577) cl_header_name_pane_t1

0xc268,	// (0x0007a58e) cl_header_name_pane_t2_ParamLimits

0xc268,	// (0x0007a58e) cl_header_name_pane_t2

0xc292,	// (0x0007a5b8) cl_header_name_pane_t3_ParamLimits

0xc292,	// (0x0007a5b8) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x0007deb1) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x0007deb1) cl_header_name_pane_t

0xe37e,	// (0x0007c6a4) navi_pane_mv_g2_ParamLimits

0x3924,	// (0x00071c4a) field_vitu2_entry_pane_g1_ParamLimits

0x3930,	// (0x00071c56) field_vitu2_entry_pane_g2_ParamLimits

0x393c,	// (0x00071c62) field_vitu2_entry_pane_g3_ParamLimits

0x393c,	// (0x00071c62) field_vitu2_entry_pane_g3

0xf987,	// (0x0007dcad) field_vitu2_entry_pane_g_ParamLimits

0xb337,	// (0x0007965d) cell_vitu2_itu_pane_g1_ParamLimits

0xb347,	// (0x0007966d) cell_vitu2_itu_pane_g2_ParamLimits

0xb347,	// (0x0007966d) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x0007dcb9) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x0007dcb9) cell_vitu2_itu_pane_g

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp05_ParamLimits

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp05

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp03

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp04

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp10_ParamLimits

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp10

0xbe80,	// (0x0007a1a6) bg_vkb2_func_pane_cp08

0xbe67,	// (0x0007a18d) bg_vkb2_func_pane_cp06

0xbe74,	// (0x0007a19a) bg_vkb2_func_pane_cp07

0x3f86,	// (0x000722ac) bg_vkb2_func_pane_cp11_ParamLimits

0x3f86,	// (0x000722ac) bg_vkb2_func_pane_cp11

0x3f9b,	// (0x000722c1) bg_vkb2_func_pane_cp12_ParamLimits

0x3f9b,	// (0x000722c1) bg_vkb2_func_pane_cp12

0x0f26,	// (0x0006f24c) bg_vkb2_func_pane_cp09

0x3994,	// (0x00071cba) bg_vkb2_func_pane_g1

0xdc91,	// (0x0007bfb7) bg_vkb2_func_pane_g2

0x399c,	// (0x00071cc2) bg_vkb2_func_pane_g3

0x39a4,	// (0x00071cca) bg_vkb2_func_pane_g4

0x3be9,	// (0x00071f0f) bg_vkb2_func_pane_g5

0x39bc,	// (0x00071ce2) bg_vkb2_func_pane_g6

0x39c4,	// (0x00071cea) bg_vkb2_func_pane_g7

0x39b4,	// (0x00071cda) bg_vkb2_func_pane_g8

0xdc71,	// (0x0007bf97) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x0007deb8) bg_vkb2_func_pane_g

0xc1a8,	// (0x0007a4ce) blid2_tripm_pane_g6_ParamLimits

0xc1a8,	// (0x0007a4ce) blid2_tripm_pane_g6

0x37e8,	// (0x00071b0e) mp4_progress_pane_g1

0xc1fc,	// (0x0007a522) blid2_tripm_values_pane_ParamLimits

0xc1fc,	// (0x0007a522) blid2_tripm_values_pane

0xc2b7,	// (0x0007a5dd) blid2_tripm_values_pane_t1

0xc2c5,	// (0x0007a5eb) blid2_tripm_values_pane_t2

0xc2d3,	// (0x0007a5f9) blid2_tripm_values_pane_t3

0xc2e1,	// (0x0007a607) blid2_tripm_values_pane_t4

0xc2ef,	// (0x0007a615) blid2_tripm_values_pane_t5

0xc2fd,	// (0x0007a623) blid2_tripm_values_pane_t6

0xc30b,	// (0x0007a631) blid2_tripm_values_pane_t7

0xc319,	// (0x0007a63f) blid2_tripm_values_pane_t8

0xc327,	// (0x0007a64d) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x0007decb) blid2_tripm_values_pane_t

0x78ae,	// (0x00075bd4) call_video_pane_t1_ParamLimits

0x78c4,	// (0x00075bea) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0007d5fb) call_video_pane_t_ParamLimits

0x8bf2,	// (0x00076f18) msg_header_pane_g1_ParamLimits

0xe55a,	// (0x0007c880) msg_header_pane_g2_ParamLimits

0xe55a,	// (0x0007c880) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0007d815) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0007d815) msg_header_pane_g

0x16de,	// (0x0006fa04) main_clock2_pane_ParamLimits

0xa4a7,	// (0x000787cd) grid_clock2_toolbar_pane_ParamLimits

0xa4a7,	// (0x000787cd) grid_clock2_toolbar_pane

0xa4a7,	// (0x000787cd) listscroll_clock2_pane_ParamLimits

0xa4a7,	// (0x000787cd) listscroll_clock2_pane

0xa54a,	// (0x00078870) main_clock2_pane_t3_ParamLimits

0xa54a,	// (0x00078870) main_clock2_pane_t3

0xa55c,	// (0x00078882) main_clock2_pane_t4_ParamLimits

0xa55c,	// (0x00078882) main_clock2_pane_t4

0x4059,	// (0x0007237f) cell_clock2_toolbar_pane

0x4061,	// (0x00072387) cell_clock2_toolbar_pane_cp01

0x4061,	// (0x00072387) cell_clock2_toolbar_pane_cp02

0x4069,	// (0x0007238f) cell_clock2_toolbar_pane_cp03

0x4071,	// (0x00072397) list_clock2_pane

0xe220,	// (0x0007c546) scroll_pane_cp10

0x4079,	// (0x0007239f) list_single_clock2_pane_ParamLimits

0x4079,	// (0x0007239f) list_single_clock2_pane

0xe3df,	// (0x0007c705) list_highlight_pane_cp08

0x4086,	// (0x000723ac) list_single_clock2_pane_t1

0x4094,	// (0x000723ba) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x0007dede) list_single_clock2_pane_t

0x0f26,	// (0x0006f24c) bg_button_pane_cp10

0x40a2,	// (0x000723c8) cell_clock2_toolbar_pane_g1

0x8c89,	// (0x00076faf) aid_main_viewer_pane_g1_ParamLimits

0x8c89,	// (0x00076faf) aid_main_viewer_pane_g1

0x8c95,	// (0x00076fbb) aid_main_viewer_pane_g2_ParamLimits

0x8c95,	// (0x00076fbb) aid_main_viewer_pane_g2

0x8ca1,	// (0x00076fc7) aid_main_viewer_pane_g3_ParamLimits

0x8ca1,	// (0x00076fc7) aid_main_viewer_pane_g3

0x8cb0,	// (0x00076fd6) aid_main_viewer_pane_g4_ParamLimits

0x8cb0,	// (0x00076fd6) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0007d826) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0007d826) aid_main_viewer_pane_g

0x38fd,	// (0x00071c23) main_calc_pane_ParamLimits

0x9337,	// (0x0007765d) main_dialer2_pane_ParamLimits

0x0f26,	// (0x0006f24c) main_cam6_pane

0x0f26,	// (0x0006f24c) main_vid6_pane

0xa4b3,	// (0x000787d9) listscroll_gen_pane_cp06_ParamLimits

0xa4b3,	// (0x000787d9) listscroll_gen_pane_cp06

0xa56e,	// (0x00078894) main_clock2_pane_t5_ParamLimits

0xa56e,	// (0x00078894) main_clock2_pane_t5

0xa5b5,	// (0x000788db) aid_call2_pane_cp10_ParamLimits

0xa5c1,	// (0x000788e7) aid_call_pane_cp10_ParamLimits

0xe2ac,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe2ac,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa5cd,	// (0x000788f3) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa5cd,	// (0x000788f3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe2ac,	// (0x0007c5d2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x0007db6f) popup_clock_analogue_window_cp10_g_ParamLimits

0xa5d9,	// (0x000788ff) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3848,	// (0x00071b6e) cell_dialer2_keypad_pane_g2_ParamLimits

0x3848,	// (0x00071b6e) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x0007dc55) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x0007dc55) cell_dialer2_keypad_pane_g

0xad27,	// (0x0007904d) cell_dialer2_keypad_pane_t1

0xb634,	// (0x0007995a) main_cset_text2_pane_ParamLimits

0xb634,	// (0x0007995a) main_cset_text2_pane

0x3e00,	// (0x00072126) area_vitu2_query_pane_g1_ParamLimits

0xbe0c,	// (0x0007a132) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x0007ddfb) area_vitu2_query_pane_g_ParamLimits

0x3e84,	// (0x000721aa) area_vitu2_query_pane_t7_ParamLimits

0x3e84,	// (0x000721aa) area_vitu2_query_pane_t7

0xbe67,	// (0x0007a18d) bg_button_pane_cp018_ParamLimits

0xbe74,	// (0x0007a19a) bg_button_pane_cp021_ParamLimits

0xbe80,	// (0x0007a1a6) bg_button_pane_cp022_ParamLimits

0xbe80,	// (0x0007a1a6) bg_vkb2_func_pane_cp08_ParamLimits

0xbe67,	// (0x0007a18d) bg_vkb2_func_pane_cp06_ParamLimits

0xbe74,	// (0x0007a19a) bg_vkb2_func_pane_cp07_ParamLimits

0xbe8f,	// (0x0007a1b5) input_focus_pane_cp09_ParamLimits

0xc335,	// (0x0007a65b) cam6_autofocus_pane_ParamLimits

0xc335,	// (0x0007a65b) cam6_autofocus_pane

0xc351,	// (0x0007a677) cam6_image_uncrop_pane_ParamLimits

0xc351,	// (0x0007a677) cam6_image_uncrop_pane

0xc374,	// (0x0007a69a) cam6_indi_pane_ParamLimits

0xc374,	// (0x0007a69a) cam6_indi_pane

0xc38e,	// (0x0007a6b4) cam6_mode_pane_ParamLimits

0xc38e,	// (0x0007a6b4) cam6_mode_pane

0xc3a2,	// (0x0007a6c8) cam6_timer_pane_ParamLimits

0xc3a2,	// (0x0007a6c8) cam6_timer_pane

0xc3ae,	// (0x0007a6d4) cam6_zoom_pane_ParamLimits

0xc3ae,	// (0x0007a6d4) cam6_zoom_pane

0xc3c4,	// (0x0007a6ea) cam6_mode_pane_g1_ParamLimits

0xc3c4,	// (0x0007a6ea) cam6_mode_pane_g1

0xc3d0,	// (0x0007a6f6) cam6_mode_pane_g2_ParamLimits

0xc3d0,	// (0x0007a6f6) cam6_mode_pane_g2

0xc3dc,	// (0x0007a702) cam6_mode_pane_g3_ParamLimits

0xc3dc,	// (0x0007a702) cam6_mode_pane_g3

0xc3e8,	// (0x0007a70e) cam6_mode_pane_g4_ParamLimits

0xc3e8,	// (0x0007a70e) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x0007dee3) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x0007dee3) cam6_mode_pane_g

0x40aa,	// (0x000723d0) bg_tb_trans_pane_cp08_ParamLimits

0x40aa,	// (0x000723d0) bg_tb_trans_pane_cp08

0x40b8,	// (0x000723de) cam6_battery_pane_ParamLimits

0x40b8,	// (0x000723de) cam6_battery_pane

0x40ce,	// (0x000723f4) cam6_indi_pane_g1_ParamLimits

0x40ce,	// (0x000723f4) cam6_indi_pane_g1

0x40e0,	// (0x00072406) cam6_indi_pane_g2_ParamLimits

0x40e0,	// (0x00072406) cam6_indi_pane_g2

0x40f2,	// (0x00072418) cam6_indi_pane_g3_ParamLimits

0x40f2,	// (0x00072418) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x0007deec) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x0007deec) cam6_indi_pane_g

0x4104,	// (0x0007242a) cam6_indi_pane_t1_ParamLimits

0x4104,	// (0x0007242a) cam6_indi_pane_t1

0xb1b1,	// (0x000794d7) cam6_autofocus_pane_g1

0xb1a9,	// (0x000794cf) cam6_autofocus_pane_g2

0xb1c1,	// (0x000794e7) cam6_autofocus_pane_g3

0xb1b9,	// (0x000794df) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x0007def3) cam6_autofocus_pane_g

0x412a,	// (0x00072450) cam6_timer_pane_g1

0x4132,	// (0x00072458) cam6_timer_pane_t1

0x4140,	// (0x00072466) cam6_zoom_cont_pane

0x4148,	// (0x0007246e) cam6_zoom_pane_g1

0x4150,	// (0x00072476) cam6_zoom_pane_g2

0xc3f4,	// (0x0007a71a) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x0007defc) cam6_zoom_pane_g

0x2fca,	// (0x000712f0) cam6_battery_pane_g1

0x2fca,	// (0x000712f0) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x0007da7c) cam6_battery_pane_g

0x4158,	// (0x0007247e) cam6_zoom_cont_pane_g1

0x4161,	// (0x00072487) cam6_zoom_cont_pane_g2

0x416a,	// (0x00072490) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x0007df03) cam6_zoom_cont_pane_g

0xc411,	// (0x0007a737) cam6_mode_pane_cp_ParamLimits

0xc411,	// (0x0007a737) cam6_mode_pane_cp

0xc425,	// (0x0007a74b) cam6_zoom_pane_cp_ParamLimits

0xc425,	// (0x0007a74b) cam6_zoom_pane_cp

0xc43b,	// (0x0007a761) vid6_image_uncrop_cif_pane_ParamLimits

0xc43b,	// (0x0007a761) vid6_image_uncrop_cif_pane

0xc45d,	// (0x0007a783) vid6_image_uncrop_nhd_pane_ParamLimits

0xc45d,	// (0x0007a783) vid6_image_uncrop_nhd_pane

0xc474,	// (0x0007a79a) vid6_image_uncrop_vga_pane_ParamLimits

0xc474,	// (0x0007a79a) vid6_image_uncrop_vga_pane

0xc48b,	// (0x0007a7b1) vid6_image_uncrop_wvga_pane_ParamLimits

0xc48b,	// (0x0007a7b1) vid6_image_uncrop_wvga_pane

0xc4a2,	// (0x0007a7c8) vid6_indi_pane_ParamLimits

0xc4a2,	// (0x0007a7c8) vid6_indi_pane

0x40aa,	// (0x000723d0) bg_tb_trans_pane_cp09_ParamLimits

0x40aa,	// (0x000723d0) bg_tb_trans_pane_cp09

0x417e,	// (0x000724a4) cam6_battery_pane_cp_ParamLimits

0x417e,	// (0x000724a4) cam6_battery_pane_cp

0x418a,	// (0x000724b0) vid6_indi_pane_g1_ParamLimits

0x418a,	// (0x000724b0) vid6_indi_pane_g1

0x419c,	// (0x000724c2) vid6_indi_pane_g2_ParamLimits

0x419c,	// (0x000724c2) vid6_indi_pane_g2

0x41ae,	// (0x000724d4) vid6_indi_pane_g3_ParamLimits

0x41ae,	// (0x000724d4) vid6_indi_pane_g3

0x41c3,	// (0x000724e9) vid6_indi_pane_g4_ParamLimits

0x41c3,	// (0x000724e9) vid6_indi_pane_g4

0x41d8,	// (0x000724fe) vid6_indi_pane_g5_ParamLimits

0x41d8,	// (0x000724fe) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x0007df0a) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x0007df0a) vid6_indi_pane_g

0x41f2,	// (0x00072518) vid6_indi_pane_t1_ParamLimits

0x41f2,	// (0x00072518) vid6_indi_pane_t1

0x4208,	// (0x0007252e) vid6_indi_pane_t2_ParamLimits

0x4208,	// (0x0007252e) vid6_indi_pane_t2

0x4230,	// (0x00072556) vid6_indi_pane_t3_ParamLimits

0x4230,	// (0x00072556) vid6_indi_pane_t3

0x4258,	// (0x0007257e) vid6_indi_pane_t4_ParamLimits

0x4258,	// (0x0007257e) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x0007df15) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x0007df15) vid6_indi_pane_t

0x427c,	// (0x000725a2) wait_bar_pane_cp08

0xc4c2,	// (0x0007a7e8) main_cset_text2_pane_t1_ParamLimits

0xc4c2,	// (0x0007a7e8) main_cset_text2_pane_t1

0xc3fc,	// (0x0007a722) listscroll_gen_pane_cp06_t1_ParamLimits

0xc3fc,	// (0x0007a722) listscroll_gen_pane_cp06_t1

0x0f26,	// (0x0006f24c) main_cam6_set_pane

0xb066,	// (0x0007938c) bg_tb_trans_pane_cp06_ParamLimits

0xb07c,	// (0x000793a2) cam4_indicators_pane_g1_ParamLimits

0xb08c,	// (0x000793b2) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x0007dc89) cam4_indicators_pane_g_ParamLimits

0xb0ac,	// (0x000793d2) cam4_indicators_pane_t1_ParamLimits

0xb144,	// (0x0007946a) bg_tb_trans_pane_cp07_ParamLimits

0xb07c,	// (0x000793a2) vid4_indicators_pane_g1_ParamLimits

0xb152,	// (0x00079478) vid4_indicators_pane_g2_ParamLimits

0xb162,	// (0x00079488) vid4_indicators_pane_g3_ParamLimits

0xb173,	// (0x00079499) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x0007dc9b) vid4_indicators_pane_g_ParamLimits

0xb18f,	// (0x000794b5) vid4_indicators_pane_t1_ParamLimits

0xbfae,	// (0x0007a2d4) vid4_progress_pane_g1_ParamLimits

0xbfbd,	// (0x0007a2e3) vid4_progress_pane_g2_ParamLimits

0xbfcc,	// (0x0007a2f2) vid4_progress_pane_g3_ParamLimits

0xbfdb,	// (0x0007a301) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x0007de46) vid4_progress_pane_g_ParamLimits

0xbff3,	// (0x0007a319) vid4_progress_pane_t1_ParamLimits

0xc009,	// (0x0007a32f) vid4_progress_pane_t2_ParamLimits

0xc01e,	// (0x0007a344) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x0007de51) vid4_progress_pane_t_ParamLimits

0xc033,	// (0x0007a359) wait_bar_pane_cp07_ParamLimits

0xc4de,	// (0x0007a804) main_cam6_set_pane_g2_ParamLimits

0xc4de,	// (0x0007a804) main_cam6_set_pane_g2

0xc4ea,	// (0x0007a810) main_cset6_listscroll_pane_ParamLimits

0xc4ea,	// (0x0007a810) main_cset6_listscroll_pane

0xc513,	// (0x0007a839) main_cset6_slider_pane_ParamLimits

0xc513,	// (0x0007a839) main_cset6_slider_pane

0xc51f,	// (0x0007a845) main_cset6_text2_pane_ParamLimits

0xc51f,	// (0x0007a845) main_cset6_text2_pane

0x428c,	// (0x000725b2) main_cset6_text_pane

0x3a8a,	// (0x00071db0) main_cset_list_pane_copy1_ParamLimits

0x3a8a,	// (0x00071db0) main_cset_list_pane_copy1

0x3a9a,	// (0x00071dc0) scroll_pane_cp028_copy1

0xc532,	// (0x0007a858) cset_list_set_pane_copy1

0xb8ef,	// (0x00079c15) aid_position_infowindow_above_copy1

0xb8f7,	// (0x00079c1d) aid_position_infowindow_below_copy1

0xc541,	// (0x0007a867) cset_list_set_pane_g1_copy1

0xc549,	// (0x0007a86f) cset_list_set_pane_g3_copy1_ParamLimits

0xc549,	// (0x0007a86f) cset_list_set_pane_g3_copy1

0xc558,	// (0x0007a87e) cset_list_set_pane_t1_copy1_ParamLimits

0xc558,	// (0x0007a87e) cset_list_set_pane_t1_copy1

0x542b,	// (0x00073751) list_highlight_pane_cp021_copy1_ParamLimits

0x542b,	// (0x00073751) list_highlight_pane_cp021_copy1

0x4294,	// (0x000725ba) cset6_slider_pane_ParamLimits

0x4294,	// (0x000725ba) cset6_slider_pane

0x42c0,	// (0x000725e6) main_cset6_slider_pane_g1_ParamLimits

0x42c0,	// (0x000725e6) main_cset6_slider_pane_g1

0xc56d,	// (0x0007a893) main_cset6_slider_pane_g2_ParamLimits

0xc56d,	// (0x0007a893) main_cset6_slider_pane_g2

0x3aaf,	// (0x00071dd5) main_cset6_slider_pane_g3_ParamLimits

0x3aaf,	// (0x00071dd5) main_cset6_slider_pane_g3

0xc595,	// (0x0007a8bb) main_cset6_slider_pane_g4_ParamLimits

0xc595,	// (0x0007a8bb) main_cset6_slider_pane_g4

0xc5a1,	// (0x0007a8c7) main_cset6_slider_pane_g5_ParamLimits

0xc5a1,	// (0x0007a8c7) main_cset6_slider_pane_g5

0x3aaf,	// (0x00071dd5) main_cset6_slider_pane_g7_ParamLimits

0x3aaf,	// (0x00071dd5) main_cset6_slider_pane_g7

0x3abb,	// (0x00071de1) main_cset6_slider_pane_g8_ParamLimits

0x3abb,	// (0x00071de1) main_cset6_slider_pane_g8

0xc5ad,	// (0x0007a8d3) main_cset6_slider_pane_g9_ParamLimits

0xc5ad,	// (0x0007a8d3) main_cset6_slider_pane_g9

0xc5b9,	// (0x0007a8df) main_cset6_slider_pane_g10_ParamLimits

0xc5b9,	// (0x0007a8df) main_cset6_slider_pane_g10

0xc595,	// (0x0007a8bb) main_cset6_slider_pane_g11_ParamLimits

0xc595,	// (0x0007a8bb) main_cset6_slider_pane_g11

0xc5c5,	// (0x0007a8eb) main_cset6_slider_pane_g12_ParamLimits

0xc5c5,	// (0x0007a8eb) main_cset6_slider_pane_g12

0xc5d1,	// (0x0007a8f7) main_cset6_slider_pane_g13_ParamLimits

0xc5d1,	// (0x0007a8f7) main_cset6_slider_pane_g13

0xc5dd,	// (0x0007a903) main_cset6_slider_pane_g14_ParamLimits

0xc5dd,	// (0x0007a903) main_cset6_slider_pane_g14

0xc5e9,	// (0x0007a90f) main_cset6_slider_pane_g15_ParamLimits

0xc5e9,	// (0x0007a90f) main_cset6_slider_pane_g15

0xc5a1,	// (0x0007a8c7) main_cset6_slider_pane_g16_ParamLimits

0xc5a1,	// (0x0007a8c7) main_cset6_slider_pane_g16

0xc601,	// (0x0007a927) main_cset6_slider_pane_g17_ParamLimits

0xc601,	// (0x0007a927) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x0007df1e) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x0007df1e) main_cset6_slider_pane_g

0x42e8,	// (0x0007260e) main_cset6_slider_pane_t1_ParamLimits

0x42e8,	// (0x0007260e) main_cset6_slider_pane_t1

0xc60d,	// (0x0007a933) main_cset6_slider_pane_t2_ParamLimits

0xc60d,	// (0x0007a933) main_cset6_slider_pane_t2

0x4329,	// (0x0007264f) main_cset6_slider_pane_t3_ParamLimits

0x4329,	// (0x0007264f) main_cset6_slider_pane_t3

0xc638,	// (0x0007a95e) main_cset6_slider_pane_t4_ParamLimits

0xc638,	// (0x0007a95e) main_cset6_slider_pane_t4

0x4354,	// (0x0007267a) main_cset6_slider_pane_t5_ParamLimits

0x4354,	// (0x0007267a) main_cset6_slider_pane_t5

0x437f,	// (0x000726a5) main_cset6_slider_pane_t7_ParamLimits

0x437f,	// (0x000726a5) main_cset6_slider_pane_t7

0xc663,	// (0x0007a989) main_cset6_slider_pane_t8_ParamLimits

0xc663,	// (0x0007a989) main_cset6_slider_pane_t8

0xc687,	// (0x0007a9ad) main_cset6_slider_pane_t9_ParamLimits

0xc687,	// (0x0007a9ad) main_cset6_slider_pane_t9

0xc6ab,	// (0x0007a9d1) main_cset6_slider_pane_t10_ParamLimits

0xc6ab,	// (0x0007a9d1) main_cset6_slider_pane_t10

0xc6cf,	// (0x0007a9f5) main_cset6_slider_pane_t11_ParamLimits

0xc6cf,	// (0x0007a9f5) main_cset6_slider_pane_t11

0x43b5,	// (0x000726db) main_cset6_slider_pane_t14_ParamLimits

0x43b5,	// (0x000726db) main_cset6_slider_pane_t14

0x43ee,	// (0x00072714) main_cset6_slider_pane_t15_ParamLimits

0x43ee,	// (0x00072714) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x0007df43) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x0007df43) main_cset6_slider_pane_t

0x3b97,	// (0x00071ebd) cset_slider_pane_g1_copy1

0x3ba0,	// (0x00071ec6) cset_slider_pane_g2_copy1

0x3ba9,	// (0x00071ecf) cset_slider_pane_g3_copy1

0x0f26,	// (0x0006f24c) bg_popup_sub_pane_cp011_copy1

0x3c32,	// (0x00071f58) main_cset_text_pane_g1_copy1

0x3c3a,	// (0x00071f60) main_cset_text_pane_t1_copy1

0x3c48,	// (0x00071f6e) main_cset_text_pane_t2_copy1

0x3c56,	// (0x00071f7c) main_cset_text_pane_t3_copy1

0x3c64,	// (0x00071f8a) main_cset_text_pane_t4_copy1

0x3c72,	// (0x00071f98) main_cset_text_pane_t5_copy1

0x3c80,	// (0x00071fa6) main_cset_text_pane_t6_copy1

0x3c8e,	// (0x00071fb4) main_cset_text_pane_t7_copy1

0xc6f3,	// (0x0007aa19) main_cset_text2_pane_t1_copy1

0x0f26,	// (0x0006f24c) main_ncimui_pane

0x9372,	// (0x00077698) popup_query_ncimui_window_ParamLimits

0x9372,	// (0x00077698) popup_query_ncimui_window

0x5728,	// (0x00073a4e) field_cale_ev2_pane_g4_ParamLimits

0x5728,	// (0x00073a4e) field_cale_ev2_pane_g4

0xaa5b,	// (0x00078d81) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaa5b,	// (0x00078d81) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x0007dc30) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x0007dc30) cell_video_dialer_keypad_pane_g

0xaa73,	// (0x00078d99) cell_video_dialer_keypad_pane_t1

0x0f26,	// (0x0006f24c) bg_popup_window_pane_cp012

0xe0f9,	// (0x0007c41f) heading_pane_cp06

0x4510,	// (0x00072836) ncim_query_content_pane

0x0f26,	// (0x0006f24c) bg_popup_heading_pane_cp01

0x4518,	// (0x0007283e) ncim_heading_pane_t1

0x4526,	// (0x0007284c) ncim_indicator_popup_pane

0x4538,	// (0x0007285e) ncim_query_button_pane

0x454c,	// (0x00072872) ncim_query_content_pane_t1

0x455e,	// (0x00072884) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0007df82) ncim_query_content_pane_t

0x4598,	// (0x000728be) ncim_query_list_pane

0x45aa,	// (0x000728d0) ncim_query_popup_pane

0x4526,	// (0x0007284c) ncim_indicator_popup_pane_ParamLimits

0xc7d4,	// (0x0007aafa) ncim_query_content_pane_g1_ParamLimits

0xc7d4,	// (0x0007aafa) ncim_query_content_pane_g1

0x454c,	// (0x00072872) ncim_query_content_pane_t1_ParamLimits

0x455e,	// (0x00072884) ncim_query_content_pane_t2_ParamLimits

0xc7e0,	// (0x0007ab06) ncim_query_content_pane_t3_ParamLimits

0xc7e0,	// (0x0007ab06) ncim_query_content_pane_t3

0xc7fd,	// (0x0007ab23) ncim_query_content_pane_t4_ParamLimits

0xc7fd,	// (0x0007ab23) ncim_query_content_pane_t4

0xc81a,	// (0x0007ab40) ncim_query_content_pane_t5_ParamLimits

0xc81a,	// (0x0007ab40) ncim_query_content_pane_t5

0x4570,	// (0x00072896) ncim_query_content_pane_t6_ParamLimits

0x4570,	// (0x00072896) ncim_query_content_pane_t6

0xfc5c,	// (0x0007df82) ncim_query_content_pane_t_ParamLimits

0x4598,	// (0x000728be) ncim_query_list_pane_ParamLimits

0x45aa,	// (0x000728d0) ncim_query_popup_pane_ParamLimits

0x45be,	// (0x000728e4) wait_bar_pane_cp04

0x0f26,	// (0x0006f24c) input_focus_pane_cp011

0x45c6,	// (0x000728ec) ncim_query_popup_pane_t1

0x45d4,	// (0x000728fa) ncim_list_query_list_pane_ParamLimits

0x45d4,	// (0x000728fa) ncim_list_query_list_pane

0x0f26,	// (0x0006f24c) bg_button_pane_cp027

0x45e7,	// (0x0007290d) ncim_query_button_pane_g1

0x0f26,	// (0x0006f24c) list_highlight_pane_cp012

0x45f1,	// (0x00072917) ncim_list_query_list_pane_g1

0x45f9,	// (0x0007291f) ncim_list_query_list_pane_t1

0xb09c,	// (0x000793c2) cam4_indicators_pane_g3_ParamLimits

0xb09c,	// (0x000793c2) cam4_indicators_pane_g3

0xb17f,	// (0x000794a5) vid4_indicators_pane_g5_ParamLimits

0xb17f,	// (0x000794a5) vid4_indicators_pane_g5

0xbfe7,	// (0x0007a30d) vid4_progress_pane_g5_ParamLimits

0xbfe7,	// (0x0007a30d) vid4_progress_pane_g5

0xc71e,	// (0x0007aa44) main_ncimui_pane_g1

0xc764,	// (0x0007aa8a) ncimui_group_query_pane_ParamLimits

0xc764,	// (0x0007aa8a) ncimui_group_query_pane

0xc798,	// (0x0007aabe) ncimui_list_pane_ParamLimits

0xc798,	// (0x0007aabe) ncimui_list_pane

0xc7b0,	// (0x0007aad6) ncimui_text_pane_ParamLimits

0xc7b0,	// (0x0007aad6) ncimui_text_pane

0xc837,	// (0x0007ab5d) ncimui_text_pane_t1_ParamLimits

0xc837,	// (0x0007ab5d) ncimui_text_pane_t1

0x4607,	// (0x0007292d) ncimui_list_single_graphic_pane_ParamLimits

0x4607,	// (0x0007292d) ncimui_list_single_graphic_pane

0xc855,	// (0x0007ab7b) ncimui_query_pane_ParamLimits

0xc855,	// (0x0007ab7b) ncimui_query_pane

0x0f26,	// (0x0006f24c) list_highlight_pane_cp013

0x4614,	// (0x0007293a) ncim_list_query_list_pane_t1_copy1

0x4622,	// (0x00072948) ncim_list_single_graphic_pane_g1

0x462a,	// (0x00072950) ncim_query_button_pane_cp01

0x4632,	// (0x00072958) ncim_query_entry_pane_ParamLimits

0x4632,	// (0x00072958) ncim_query_entry_pane

0x4642,	// (0x00072968) ncimui_query_pane_g1

0x464a,	// (0x00072970) ncimui_query_pane_t1_ParamLimits

0x464a,	// (0x00072970) ncimui_query_pane_t1

0x0f26,	// (0x0006f24c) input_focus_pane_cp012

0x45c6,	// (0x000728ec) ncim_query_entry_pane_t1

0x16de,	// (0x0006fa04) main_im_pane_ParamLimits

0x542b,	// (0x00073751) main_mobtv_pane_ParamLimits

0x542b,	// (0x00073751) main_mobtv_pane

0xc5ad,	// (0x0007a8d3) main_cset6_slider_pane_g18_ParamLimits

0xc5ad,	// (0x0007a8d3) main_cset6_slider_pane_g18

0xc5d1,	// (0x0007a8f7) main_cset6_slider_pane_g19_ParamLimits

0xc5d1,	// (0x0007a8f7) main_cset6_slider_pane_g19

0x393c,	// (0x00071c62) bg_main_mobtv_pane_ParamLimits

0x393c,	// (0x00071c62) bg_main_mobtv_pane

0xc865,	// (0x0007ab8b) main_mobtv_info_pane

0xc86e,	// (0x0007ab94) main_mobtv_loading_pane_ParamLimits

0xc86e,	// (0x0007ab94) main_mobtv_loading_pane

0x466e,	// (0x00072994) main_mobtv_pg_channel_list_pane

0x4678,	// (0x0007299e) main_mobtv_pg_hdr_pane

0xc87b,	// (0x0007aba1) main_mobtv_programe_curr_pane_ParamLimits

0xc87b,	// (0x0007aba1) main_mobtv_programe_curr_pane

0xc888,	// (0x0007abae) main_mobtv_programe_next_pane_ParamLimits

0xc888,	// (0x0007abae) main_mobtv_programe_next_pane

0x4681,	// (0x000729a7) popup_mobtv_noti_window

0x2fca,	// (0x000712f0) main_tv_pg_hdr_pane_g1

0x4689,	// (0x000729af) main_tv_pg_hdr_pane_g2

0x4691,	// (0x000729b7) main_tv_pg_hdr_pane_g3

0x4699,	// (0x000729bf) main_tv_pg_hdr_pane_g4

0x46a1,	// (0x000729c7) main_tv_pg_hdr_pane_g5

0x46a9,	// (0x000729cf) main_tv_pg_hdr_pane_g6

0x46b1,	// (0x000729d7) main_tv_pg_hdr_pane_g7

0x46b9,	// (0x000729df) main_tv_pg_hdr_pane_g8

0x46c1,	// (0x000729e7) main_tv_pg_hdr_pane_g9

0x46c9,	// (0x000729ef) main_tv_pg_hdr_pane_g10

0x46d3,	// (0x000729f9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0007df8f) main_tv_pg_hdr_pane_g

0x46dd,	// (0x00072a03) main_tv_pg_hdr_pane_t1

0x46eb,	// (0x00072a11) main_tv_pg_hdr_pane_t2

0x46f9,	// (0x00072a1f) main_tv_pg_hdr_pane_t3

0x4707,	// (0x00072a2d) main_tv_pg_hdr_pane_t4

0x4715,	// (0x00072a3b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x0007dfa6) main_tv_pg_hdr_pane_t

0x4723,	// (0x00072a49) single_mobtv_pg_channel_pane_ParamLimits

0x4723,	// (0x00072a49) single_mobtv_pg_channel_pane

0x4735,	// (0x00072a5b) single_mobtv_pg_channel_table_pane

0x473e,	// (0x00072a64) single_mobtv_pg_channel_thumb_pane

0x4747,	// (0x00072a6d) single_tv_pg_channel_pane_g1

0x4750,	// (0x00072a76) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x0007dfb1) single_tv_pg_channel_pane_g

0x31f9,	// (0x0007151f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x31f9,	// (0x0007151f) bg_single_mobtv_pg_channel_thumb_pane

0x4759,	// (0x00072a7f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4759,	// (0x00072a7f) single_mobtv_pg_channel_thumb_pane_g1

0x4767,	// (0x00072a8d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4767,	// (0x00072a8d) single_mobtv_pg_channel_thumb_pane_g2

0x4773,	// (0x00072a99) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4773,	// (0x00072a99) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x0007dfb6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x0007dfb6) single_mobtv_pg_channel_thumb_pane_g

0x477f,	// (0x00072aa5) single_mobtv_pg_channel_thumb_pane_t1

0x478d,	// (0x00072ab3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x0007dfbd) single_mobtv_pg_channel_thumb_pane_t

0x2fca,	// (0x000712f0) bg_single_mobtv_pg_channel_table_pane_g1

0x2fca,	// (0x000712f0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x0007da7c) bg_single_mobtv_pg_channel_table_pane_g

0x479b,	// (0x00072ac1) single_mobtv_pg_channel_table_pane_t1

0x47a9,	// (0x00072acf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x0007dfc2) single_mobtv_pg_channel_table_pane_t

0xc89d,	// (0x0007abc3) main_mobtv_info_pane_g1_ParamLimits

0xc89d,	// (0x0007abc3) main_mobtv_info_pane_g1

0xc8b9,	// (0x0007abdf) main_mobtv_info_pane_t1_ParamLimits

0xc8b9,	// (0x0007abdf) main_mobtv_info_pane_t1

0xc91f,	// (0x0007ac45) main_mobtv_info_pane_t2_ParamLimits

0xc91f,	// (0x0007ac45) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x0007dfcc) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x0007dfcc) main_mobtv_info_pane_t

0xc9a2,	// (0x0007acc8) wait_bar_pane_cp05

0xc9b2,	// (0x0007acd8) main_mobtv_loading_pane_g1_ParamLimits

0xc9b2,	// (0x0007acd8) main_mobtv_loading_pane_g1

0xc9be,	// (0x0007ace4) main_mobtv_loading_pane_g2_ParamLimits

0xc9be,	// (0x0007ace4) main_mobtv_loading_pane_g2

0xc9ca,	// (0x0007acf0) main_mobtv_loading_pane_g3_ParamLimits

0xc9ca,	// (0x0007acf0) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x0007dfd3) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x0007dfd3) main_mobtv_loading_pane_g

0x47b7,	// (0x00072add) main_mobtv_loading_pane_t1_ParamLimits

0x47b7,	// (0x00072add) main_mobtv_loading_pane_t1

0x47cf,	// (0x00072af5) main_mobtv_loading_pane_t2_ParamLimits

0x47cf,	// (0x00072af5) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x0007dfda) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x0007dfda) main_mobtv_loading_pane_t

0xc9d6,	// (0x0007acfc) wait_bar_pane_cp06_ParamLimits

0xc9d6,	// (0x0007acfc) wait_bar_pane_cp06

0x47f3,	// (0x00072b19) main_mobtv_programe_curr_pane_t1

0x4801,	// (0x00072b27) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x0007dfdf) main_mobtv_programe_curr_pane_t

0x480f,	// (0x00072b35) main_mobtv_programe_next_pane_t1

0x481d,	// (0x00072b43) main_mobtv_programe_next_pane_t2

0x482b,	// (0x00072b51) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x0007dfe4) main_mobtv_programe_next_pane_t

0x0f26,	// (0x0006f24c) bg_popup_mobtv_noti_window_pane

0x4839,	// (0x00072b5f) popup_mobtv_noti_window_g1

0x4841,	// (0x00072b67) popup_mobtv_noti_window_t1

0x484f,	// (0x00072b75) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x0007dfeb) popup_mobtv_noti_window_t

0x2fca,	// (0x000712f0) bg_popup_mobtv_noti_window_pane_g1

0x0f26,	// (0x0006f24c) sc_clock_pane

0x0f26,	// (0x0006f24c) main_fs_bigclock_pane

0xc1ea,	// (0x0007a510) blid2_tripm_pane_t4_ParamLimits

0xc1ea,	// (0x0007a510) blid2_tripm_pane_t4

0xc9e2,	// (0x0007ad08) sc_clock_pane_g1_ParamLimits

0xc9e2,	// (0x0007ad08) sc_clock_pane_g1

0xc9f0,	// (0x0007ad16) sc_clock_pane_t1_ParamLimits

0xc9f0,	// (0x0007ad16) sc_clock_pane_t1

0xca03,	// (0x0007ad29) sc_clock_pane_t2_ParamLimits

0xca03,	// (0x0007ad29) sc_clock_pane_t2

0xca15,	// (0x0007ad3b) sc_clock_pane_t3_ParamLimits

0xca15,	// (0x0007ad3b) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x0007dff0) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x0007dff0) sc_clock_pane_t

0xe938,	// (0x0007cc5e) main_fs_bigclock_indicator_pane_ParamLimits

0xe938,	// (0x0007cc5e) main_fs_bigclock_indicator_pane

0xca8d,	// (0x0007adb3) main_fs_bigclock_pane_g1_ParamLimits

0xca8d,	// (0x0007adb3) main_fs_bigclock_pane_g1

0xe944,	// (0x0007cc6a) main_fs_bigclock_pane_t1_ParamLimits

0xe944,	// (0x0007cc6a) main_fs_bigclock_pane_t1

0xe956,	// (0x0007cc7c) main_fs_bigclock_pane_t2_ParamLimits

0xe956,	// (0x0007cc7c) main_fs_bigclock_pane_t2

0xe968,	// (0x0007cc8e) main_fs_bigclock_pane_t3_ParamLimits

0xe968,	// (0x0007cc8e) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x0007e1ea) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x0007e1ea) main_fs_bigclock_pane_t

0xe97a,	// (0x0007cca0) main_fs_bigclock_indicator_pane_g1

0x4540,	// (0x00072866) ncim_query_content_pane_g2_ParamLimits

0x4540,	// (0x00072866) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x0007df7d) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x0007df7d) ncim_query_content_pane_g

0xca27,	// (0x0007ad4d) sc_clock_pane_t4_ParamLimits

0xca27,	// (0x0007ad4d) sc_clock_pane_t4

0x542b,	// (0x00073751) main_radioblah_pane

0x389f,	// (0x00071bc5) cell_call4_button_pane_t1_copy1_ParamLimits

0x389f,	// (0x00071bc5) cell_call4_button_pane_t1_copy1

0xc726,	// (0x0007aa4c) main_ncimui_pane_t1_ParamLimits

0xc726,	// (0x0007aa4c) main_ncimui_pane_t1

0xc738,	// (0x0007aa5e) main_ncimui_pane_t2_ParamLimits

0xc738,	// (0x0007aa5e) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x0007df76) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x0007df76) main_ncimui_pane_t

0x4979,	// (0x00072c9f) main_radioblah_anim_pane_ParamLimits

0x4979,	// (0x00072c9f) main_radioblah_anim_pane

0x498a,	// (0x00072cb0) main_radioblah_info_pane_ParamLimits

0x498a,	// (0x00072cb0) main_radioblah_info_pane

0x499e,	// (0x00072cc4) main_radioblah_pane_t1_ParamLimits

0x499e,	// (0x00072cc4) main_radioblah_pane_t1

0x49ba,	// (0x00072ce0) main_radioblah_pane_t2_ParamLimits

0x49ba,	// (0x00072ce0) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x0007e011) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x0007e011) main_radioblah_pane_t

0xcad5,	// (0x0007adfb) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcad5,	// (0x0007adfb) main_radioblah_rocker_ctrl_pane

0x4a02,	// (0x00072d28) main_radioblah_info_pane_t1_ParamLimits

0x4a02,	// (0x00072d28) main_radioblah_info_pane_t1

0xcb1a,	// (0x0007ae40) main_radioblah_info_pane_t2_ParamLimits

0xcb1a,	// (0x0007ae40) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x0007e01a) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x0007e01a) main_radioblah_info_pane_t

0x2fca,	// (0x000712f0) main_radioblah_rocker_ctrl_pane_g1

0xcbc2,	// (0x0007aee8) main_radioblah_rocker_ctrl_pane_g2

0xcbca,	// (0x0007aef0) main_radioblah_rocker_ctrl_pane_g3

0xcbd2,	// (0x0007aef8) main_radioblah_rocker_ctrl_pane_g4

0xcbda,	// (0x0007af00) main_radioblah_rocker_ctrl_pane_g5

0xcbe2,	// (0x0007af08) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x0007e023) main_radioblah_rocker_ctrl_pane_g

0xc6f3,	// (0x0007aa19) main_cset_text2_pane_t1_copy1_ParamLimits

0xafd6,	// (0x000792fc) cam4_image_uncrop_qvga_pane

0xb104,	// (0x0007942a) vid4_image_uncrop_qcif_pane

0xc368,	// (0x0007a68e) cam6_image_uncrop_qvga_pane_ParamLimits

0xc368,	// (0x0007a68e) cam6_image_uncrop_qvga_pane

0x4172,	// (0x00072498) vid6_image_uncrop_qcif_pane_ParamLimits

0x4172,	// (0x00072498) vid6_image_uncrop_qcif_pane

0x0f26,	// (0x0006f24c) bg_popup_preview_window_pane_cp03

0x44f2,	// (0x00072818) list_cset_text2_pane

0x44fa,	// (0x00072820) main_cset6_text2_pane_g1

0x4502,	// (0x00072828) main_cset6_text2_pane_t1

0xcbea,	// (0x0007af10) list_cset_text2_pane_t1_ParamLimits

0xcbea,	// (0x0007af10) list_cset_text2_pane_t1

0x542b,	// (0x00073751) main_radioblah_pane_ParamLimits

0xc990,	// (0x0007acb6) main_mobtv_info_pane_t3_ParamLimits

0xc990,	// (0x0007acb6) main_mobtv_info_pane_t3

0xcac3,	// (0x0007ade9) main_radioblah_pane_g1

0xcaee,	// (0x0007ae14) main_radioblah_info_pane_g1

0xcb69,	// (0x0007ae8f) main_radioblah_info_pane_t3_ParamLimits

0xcb69,	// (0x0007ae8f) main_radioblah_info_pane_t3

0x82b6,	// (0x000765dc) highlight_cell_cale_month_pane_ParamLimits

0x82b6,	// (0x000765dc) highlight_cell_cale_month_pane

0x0f26,	// (0x0006f24c) main_phob_fisheye_pane

0x32fb,	// (0x00071621) scroll_pane_cp0031_ParamLimits

0x32fb,	// (0x00071621) scroll_pane_cp0031

0x427c,	// (0x000725a2) wait_bar_pane_cp08_ParamLimits

0xc532,	// (0x0007a858) cset_list_set_pane_copy1_ParamLimits

0x4a3c,	// (0x00072d62) highlight_cell_cale_month_pane_g1

0xcc01,	// (0x0007af27) highlight_cell_cale_month_pane_t1

0x4a44,	// (0x00072d6a) list_gen_pane_cp01

0x3a9a,	// (0x00071dc0) scroll_pane_01

0xcc0f,	// (0x0007af35) list_single_double_fisheye_pane

0xcc18,	// (0x0007af3e) list_double_fisheye_pane_g1_ParamLimits

0xcc18,	// (0x0007af3e) list_double_fisheye_pane_g1

0xcc24,	// (0x0007af4a) list_double_fisheye_pane_g2_ParamLimits

0xcc24,	// (0x0007af4a) list_double_fisheye_pane_g2

0xcc38,	// (0x0007af5e) list_double_fisheye_pane_g3_ParamLimits

0xcc38,	// (0x0007af5e) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x0007e030) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x0007e030) list_double_fisheye_pane_g

0xcc61,	// (0x0007af87) list_double_fisheye_pane_t1_ParamLimits

0xcc61,	// (0x0007af87) list_double_fisheye_pane_t1

0xcc7c,	// (0x0007afa2) list_double_fisheye_pane_t2_ParamLimits

0xcc7c,	// (0x0007afa2) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x0007e03b) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x0007e03b) list_double_fisheye_pane_t

0x0f26,	// (0x0006f24c) main_call5_pane

0xca4d,	// (0x0007ad73) sc_swipe_pane_ParamLimits

0xca4d,	// (0x0007ad73) sc_swipe_pane

0xccaa,	// (0x0007afd0) call5_image_pane_ParamLimits

0xccaa,	// (0x0007afd0) call5_image_pane

0xccb6,	// (0x0007afdc) call5_swipe_1_pane_ParamLimits

0xccb6,	// (0x0007afdc) call5_swipe_1_pane

0xccc2,	// (0x0007afe8) call5_swipe_2_pane_ParamLimits

0xccc2,	// (0x0007afe8) call5_swipe_2_pane

0xccda,	// (0x0007b000) popup_call5_audio_first_window_ParamLimits

0xccda,	// (0x0007b000) popup_call5_audio_first_window

0x31f9,	// (0x0007151f) call5_swipe_1_pane_g1_ParamLimits

0x31f9,	// (0x0007151f) call5_swipe_1_pane_g1

0xcce6,	// (0x0007b00c) call5_swipe_1_pane_g2_ParamLimits

0xcce6,	// (0x0007b00c) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x0007e040) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x0007e040) call5_swipe_1_pane_g

0xccf2,	// (0x0007b018) call5_swipe_1_pane_t1_ParamLimits

0xccf2,	// (0x0007b018) call5_swipe_1_pane_t1

0x31f9,	// (0x0007151f) call5_swipe_2_pane_g1_ParamLimits

0x31f9,	// (0x0007151f) call5_swipe_2_pane_g1

0xcd07,	// (0x0007b02d) call5_swipe_2_pane_g2_ParamLimits

0xcd07,	// (0x0007b02d) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x0007e045) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x0007e045) call5_swipe_2_pane_g

0xcd13,	// (0x0007b039) call5_swipe_2_pane_t1_ParamLimits

0xcd13,	// (0x0007b039) call5_swipe_2_pane_t1

0xcd28,	// (0x0007b04e) sc_swipe_pane_g1_ParamLimits

0xcd28,	// (0x0007b04e) sc_swipe_pane_g1

0xcd35,	// (0x0007b05b) sc_swipe_pane_g2_ParamLimits

0xcd35,	// (0x0007b05b) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x0007e04a) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x0007e04a) sc_swipe_pane_g

0xcd41,	// (0x0007b067) sc_swipe_pane_t1_ParamLimits

0xcd41,	// (0x0007b067) sc_swipe_pane_t1

0x0f26,	// (0x0006f24c) main_cmail_launcher_pane

0xcd56,	// (0x0007b07c) aid_size_cell_cmail_l_ParamLimits

0xcd56,	// (0x0007b07c) aid_size_cell_cmail_l

0xcd66,	// (0x0007b08c) grid_cmail_l_pane_ParamLimits

0xcd66,	// (0x0007b08c) grid_cmail_l_pane

0xcd72,	// (0x0007b098) cell_cmail_l_pane_ParamLimits

0xcd72,	// (0x0007b098) cell_cmail_l_pane

0xcd84,	// (0x0007b0aa) cell_cmail_l_pane_g1_ParamLimits

0xcd84,	// (0x0007b0aa) cell_cmail_l_pane_g1

0xcd94,	// (0x0007b0ba) cell_cmail_l_pane_t1_ParamLimits

0xcd94,	// (0x0007b0ba) cell_cmail_l_pane_t1

0xcdaa,	// (0x0007b0d0) cell_cmail_l_pane_t2_ParamLimits

0xcdaa,	// (0x0007b0d0) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x0007e04f) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x0007e04f) cell_cmail_l_pane_t

0x542b,	// (0x00073751) grid_highlight_pane_cp018_ParamLimits

0x542b,	// (0x00073751) grid_highlight_pane_cp018

0x6aa3,	// (0x00074dc9) main2_pane_ParamLimits

0x6aa3,	// (0x00074dc9) main2_pane

0x17e1,	// (0x0006fb07) popup_sp_fs_action_menu_bg_pane_g1

0x17e9,	// (0x0006fb0f) popup_sp_fs_action_menu_bg_pane_g2

0x17f1,	// (0x0006fb17) popup_sp_fs_action_menu_bg_pane_g3

0x17f9,	// (0x0006fb1f) popup_sp_fs_action_menu_bg_pane_g4

0x1801,	// (0x0006fb27) popup_sp_fs_action_menu_bg_pane_g5

0x1809,	// (0x0006fb2f) popup_sp_fs_action_menu_bg_pane_g6

0x1811,	// (0x0006fb37) popup_sp_fs_action_menu_bg_pane_g7

0x1819,	// (0x0006fb3f) popup_sp_fs_action_menu_bg_pane_g8

0x1821,	// (0x0006fb47) popup_sp_fs_action_menu_bg_pane_g9

0x1829,	// (0x0006fb4f) popup_sp_fs_action_menu_bg_pane_g10

0x1829,	// (0x0006fb4f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0007d515) popup_sp_fs_action_menu_bg_pane_g

0x1a00,	// (0x0006fd26) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t3_g3_g1

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t3_g3_g2

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0007d5c5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0007d5c5) list_medium_line_x2_t3_g3_g

0x1a24,	// (0x0006fd4a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a24,	// (0x0006fd4a) list_medium_line_x2_t3_g3_t1

0x77f5,	// (0x00075b1b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x77f5,	// (0x00075b1b) list_medium_line_x2_t3_g3_t2

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0007d5cc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0007d5cc) list_medium_line_x2_t3_g3_t

0x1a00,	// (0x0006fd26) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t3_g2_g1

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0007d5d3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0007d5d3) list_medium_line_x2_t3_g2_g

0x1a4e,	// (0x0006fd74) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1a4e,	// (0x0006fd74) list_medium_line_x2_t3_g2_t1

0x1a64,	// (0x0006fd8a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1a64,	// (0x0006fd8a) list_medium_line_x2_t3_g2_t2

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0007d5d8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0007d5d8) list_medium_line_x2_t3_g2_t

0x1a00,	// (0x0006fd26) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t4_g4_g1

0x1a76,	// (0x0006fd9c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1a76,	// (0x0006fd9c) list_medium_line_x2_t4_g4_g2

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t4_g4_g3

0x1a82,	// (0x0006fda8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1a82,	// (0x0006fda8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0007d5df) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0007d5df) list_medium_line_x2_t4_g4_g

0x7807,	// (0x00075b2d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x7807,	// (0x00075b2d) list_medium_line_x2_t4_g4_t1

0x781e,	// (0x00075b44) list_medium_line_x2_t4_g4_t2_ParamLimits

0x781e,	// (0x00075b44) list_medium_line_x2_t4_g4_t2

0x7833,	// (0x00075b59) list_medium_line_x2_t4_g4_t3_ParamLimits

0x7833,	// (0x00075b59) list_medium_line_x2_t4_g4_t3

0x1a8e,	// (0x0006fdb4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1a8e,	// (0x0006fdb4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0007d5e8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0007d5e8) list_medium_line_x2_t4_g4_t

0x1a00,	// (0x0006fd26) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t2_g4_g1

0x1a76,	// (0x0006fd9c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1a76,	// (0x0006fd9c) list_medium_line_x2_t2_g4_g2

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t2_g4_g3

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0007d64f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0007d64f) list_medium_line_x2_t2_g4_g

0x1aef,	// (0x0006fe15) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1aef,	// (0x0006fe15) list_medium_line_x2_t2_g4_t1

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0007d658) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0007d658) list_medium_line_x2_t2_g4_t

0x1a00,	// (0x0006fd26) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t2_g3_g1

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t2_g3_g2

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0007d5c5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0007d5c5) list_medium_line_x2_t2_g3_g

0x1b04,	// (0x0006fe2a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1b04,	// (0x0006fe2a) list_medium_line_x2_t2_g3_t1

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0007d65d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0007d65d) list_medium_line_x2_t2_g3_t

0x8426,	// (0x0007674c) main_sp_fs_list_pane_ParamLimits

0x8426,	// (0x0007674c) main_sp_fs_list_pane

0x8433,	// (0x00076759) sp_fs_scroll_pane_ParamLimits

0x8433,	// (0x00076759) sp_fs_scroll_pane

0x8440,	// (0x00076766) list_medium_line_x2_t3_t1

0x8450,	// (0x00076776) list_medium_line_x2_t3_t2

0x1b19,	// (0x0006fe3f) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0007d6a8) list_medium_line_x2_t3_t

0x845e,	// (0x00076784) list_medium_line_x3_t4_t1

0x846e,	// (0x00076794) list_medium_line_x3_t4_t2

0x1b27,	// (0x0006fe4d) list_medium_line_x3_t4_t3

0x1b35,	// (0x0006fe5b) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0007d6af) list_medium_line_x3_t4_t

0x847c,	// (0x000767a2) list_medium_line_x4_t5_t1

0x848c,	// (0x000767b2) list_medium_line_x4_t5_t2

0x1b27,	// (0x0006fe4d) list_medium_line_x4_t5_t3

0x1b43,	// (0x0006fe69) list_medium_line_x4_t5_t4

0x1b35,	// (0x0006fe5b) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0007d6b8) list_medium_line_x4_t5_t

0x1a00,	// (0x0006fd26) list_medium_line_t4_g4_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t4_g4_g1

0x1a82,	// (0x0006fda8) list_medium_line_t4_g4_g2_ParamLimits

0x1a82,	// (0x0006fda8) list_medium_line_t4_g4_g2

0x1b51,	// (0x0006fe77) list_medium_line_t4_g4_g3_ParamLimits

0x1b51,	// (0x0006fe77) list_medium_line_t4_g4_g3

0x1a18,	// (0x0006fd3e) list_medium_line_t4_g4_g4_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0007d6c3) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0007d6c3) list_medium_line_t4_g4_g

0x1b5d,	// (0x0006fe83) list_medium_line_t4_g4_t1_ParamLimits

0x1b5d,	// (0x0006fe83) list_medium_line_t4_g4_t1

0x1b72,	// (0x0006fe98) list_medium_line_t4_g4_t2_ParamLimits

0x1b72,	// (0x0006fe98) list_medium_line_t4_g4_t2

0x1b88,	// (0x0006feae) list_medium_line_t4_g4_t3_ParamLimits

0x1b88,	// (0x0006feae) list_medium_line_t4_g4_t3

0x1b9e,	// (0x0006fec4) list_medium_line_t4_g4_t4_ParamLimits

0x1b9e,	// (0x0006fec4) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0007d6cc) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0007d6cc) list_medium_line_t4_g4_t

0x85a8,	// (0x000768ce) chi_dic_find_pane_g1

0x9345,	// (0x0007766b) main_tport_pane

0x3bdb,	// (0x00071f01) list_medium_line_plain_t1

0x1a00,	// (0x0006fd26) list_medium_line_t2_g2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t2_g2_g1

0x1a0c,	// (0x0006fd32) list_medium_line_t2_g2_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x0007dd92) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x0007dd92) list_medium_line_t2_g2_g

0xbaca,	// (0x00079df0) list_medium_line_t2_g2_t1_ParamLimits

0xbaca,	// (0x00079df0) list_medium_line_t2_g2_t1

0xbae1,	// (0x00079e07) list_medium_line_t2_g2_t2_ParamLimits

0xbae1,	// (0x00079e07) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x0007dd97) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x0007dd97) list_medium_line_t2_g2_t

0x3f02,	// (0x00072228) aid_sp_fs_list_icon_a_sm

0x5abe,	// (0x00073de4) aid_sp_fs_list_icon_d

0x3f0a,	// (0x00072230) aid_sp_fs_text_primary

0x3f13,	// (0x00072239) aid_sp_fs_text_secondary

0x5ac6,	// (0x00073dec) list_medium_line

0x5ac6,	// (0x00073dec) list_medium_line_g2

0x5ac6,	// (0x00073dec) list_medium_line_g3

0x5ac6,	// (0x00073dec) list_medium_line_plain

0x5ac6,	// (0x00073dec) list_medium_line_plain_t2

0x5ac6,	// (0x00073dec) list_medium_line_plain_t3

0x5ac6,	// (0x00073dec) list_medium_line_right_icon

0x5ac6,	// (0x00073dec) list_medium_line_right_iconx2

0x5ac6,	// (0x00073dec) list_medium_line_t2

0x5ac6,	// (0x00073dec) list_medium_line_t2_g2

0x5ac6,	// (0x00073dec) list_medium_line_t2_g3

0x5ac6,	// (0x00073dec) list_medium_line_t2_right_icon

0x5ac6,	// (0x00073dec) list_medium_line_t2_right_iconx2

0x5ac6,	// (0x00073dec) list_medium_line_t3

0x5ac6,	// (0x00073dec) list_medium_line_t3_g2

0x5ac6,	// (0x00073dec) list_medium_line_t3_g3

0x5ac6,	// (0x00073dec) list_medium_line_t3_right_iconx2

0x3f1c,	// (0x00072242) list_medium_line_t4_g4

0x3f25,	// (0x0007224b) list_medium_line_x2

0x3f25,	// (0x0007224b) list_medium_line_x2_t2_g2

0x3f25,	// (0x0007224b) list_medium_line_x2_t2_g3

0x3f25,	// (0x0007224b) list_medium_line_x2_t2_g4

0x3f25,	// (0x0007224b) list_medium_line_x2_t3

0x3f25,	// (0x0007224b) list_medium_line_x2_t3_g2

0x3f25,	// (0x0007224b) list_medium_line_x2_t3_g3

0x3f25,	// (0x0007224b) list_medium_line_x2_t3_g4

0x3f25,	// (0x0007224b) list_medium_line_x2_t4_g2

0x3f25,	// (0x0007224b) list_medium_line_x2_t4_g4

0x3f2e,	// (0x00072254) list_medium_line_x3

0x3f2e,	// (0x00072254) list_medium_line_x3_t4

0x3f2e,	// (0x00072254) list_medium_line_x3_t4_g4

0x3f1c,	// (0x00072242) list_medium_line_x4_t4

0x3f1c,	// (0x00072242) list_medium_line_x4_t4_g7

0x3f1c,	// (0x00072242) list_medium_line_x4_t5

0x3f37,	// (0x0007225d) list_single_fs_dyc_pane_ParamLimits

0x3f37,	// (0x0007225d) list_single_fs_dyc_pane

0x1a00,	// (0x0006fd26) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x4_t4_g7_g1

0x4427,	// (0x0007274d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4427,	// (0x0007274d) list_medium_line_x4_t4_g7_g2

0x4433,	// (0x00072759) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4433,	// (0x00072759) list_medium_line_x4_t4_g7_g3

0x4442,	// (0x00072768) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4442,	// (0x00072768) list_medium_line_x4_t4_g7_g4

0x444e,	// (0x00072774) list_medium_line_x4_t4_g7_g5_ParamLimits

0x444e,	// (0x00072774) list_medium_line_x4_t4_g7_g5

0x445d,	// (0x00072783) list_medium_line_x4_t4_g7_g6_ParamLimits

0x445d,	// (0x00072783) list_medium_line_x4_t4_g7_g6

0x446c,	// (0x00072792) list_medium_line_x4_t4_g7_g7_ParamLimits

0x446c,	// (0x00072792) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x0007df5c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x0007df5c) list_medium_line_x4_t4_g7_g

0x4478,	// (0x0007279e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4478,	// (0x0007279e) list_medium_line_x4_t4_g7_t1

0x448d,	// (0x000727b3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x448d,	// (0x000727b3) list_medium_line_x4_t4_g7_t2

0x44a2,	// (0x000727c8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x44a2,	// (0x000727c8) list_medium_line_x4_t4_g7_t3

0x44b7,	// (0x000727dd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x44b7,	// (0x000727dd) list_medium_line_x4_t4_g7_t4

0x44c9,	// (0x000727ef) list_medium_line_x4_t4_g7_t5_ParamLimits

0x44c9,	// (0x000727ef) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x0007df6b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x0007df6b) list_medium_line_x4_t4_g7_t

0x44db,	// (0x00072801) list_single_dyc_row_pane_ParamLimits

0x44db,	// (0x00072801) list_single_dyc_row_pane

0xcc9e,	// (0x0007afc4) call5_gesture_pane_ParamLimits

0xcc9e,	// (0x0007afc4) call5_gesture_pane

0xccce,	// (0x0007aff4) call5_windows_pane_ParamLimits

0xccce,	// (0x0007aff4) call5_windows_pane

0xcdbc,	// (0x0007b0e2) call5_swipe_1_pane_cp_ParamLimits

0xcdbc,	// (0x0007b0e2) call5_swipe_1_pane_cp

0xcdc8,	// (0x0007b0ee) call5_swipe_2_pane_cp_ParamLimits

0xcdc8,	// (0x0007b0ee) call5_swipe_2_pane_cp

0xe3df,	// (0x0007c705) call5_image_pane_cp

0xcdd4,	// (0x0007b0fa) popup_call5_audio_first_window_cp_ParamLimits

0xcdd4,	// (0x0007b0fa) popup_call5_audio_first_window_cp

0xcd28,	// (0x0007b04e) call5_swipe_1_pane_g1_cp_ParamLimits

0xcd28,	// (0x0007b04e) call5_swipe_1_pane_g1_cp

0xcde0,	// (0x0007b106) call5_swipe_1_pane_g2_cp

0xcd41,	// (0x0007b067) call5_swipe_1_pane_t1_cp_ParamLimits

0xcd41,	// (0x0007b067) call5_swipe_1_pane_t1_cp

0xcd28,	// (0x0007b04e) call5_swipe_2_pane_g1_cp_ParamLimits

0xcd28,	// (0x0007b04e) call5_swipe_2_pane_g1_cp

0xcde8,	// (0x0007b10e) call5_swipe_2_pane_g2_cp

0xcdf0,	// (0x0007b116) call5_swipe_2_pane_t1_cp_ParamLimits

0xcdf0,	// (0x0007b116) call5_swipe_2_pane_t1_cp

0x542b,	// (0x00073751) main_sp_fs_email_pane

0xce05,	// (0x0007b12b) main_sp_fs_listscroll_pane_te

0xce0e,	// (0x0007b134) popup_sp_fs_action_menu_pane_ParamLimits

0xce0e,	// (0x0007b134) popup_sp_fs_action_menu_pane

0x2fca,	// (0x000712f0) bg_sp_fs_ctrlbar_pane_g1

0xce3e,	// (0x0007b164) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xce47,	// (0x0007b16d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xce50,	// (0x0007b176) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2fca,	// (0x000712f0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x0007e054) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2db7,	// (0x000710dd) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2db7,	// (0x000710dd) bg_sp_fs_ctrlbar_ddmenu_pane

0xce59,	// (0x0007b17f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xce59,	// (0x0007b17f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe82f,	// (0x0007cb55) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe82f,	// (0x0007cb55) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x0007e05d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x0007e05d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xce65,	// (0x0007b18b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xce65,	// (0x0007b18b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4a56,	// (0x00072d7c) list_medium_line_t2_right_icon_g1

0xce7f,	// (0x0007b1a5) list_medium_line_t2_right_icon_t1

0xce8e,	// (0x0007b1b4) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x0007e062) list_medium_line_t2_right_icon_t

0x2b8f,	// (0x00070eb5) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2b8f,	// (0x00070eb5) bg_sp_fs_ctrlbar_pane

0xcf29,	// (0x0007b24f) main_sp_fs_ctrlbar_button_pane_cp01

0xcf31,	// (0x0007b257) main_sp_fs_ctrlbar_ddmenu_pane

0xcf3b,	// (0x0007b261) main_sp_fs_ctrlbar_pane_g1

0xcf47,	// (0x0007b26d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x0007e067) main_sp_fs_ctrlbar_pane_g

0xcf53,	// (0x0007b279) main_sp_fs_ctrlbar_pane_t1

0xcf68,	// (0x0007b28e) main_sp_fs_ctrlbar_pane

0xcf80,	// (0x0007b2a6) main_sp_fs_listscroll_pane_te_cp01

0xcf91,	// (0x0007b2b7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcf91,	// (0x0007b2b7) popup_sp_fs_action_menu_pane_cp01

0x542b,	// (0x00073751) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x542b,	// (0x00073751) bg_sp_fs_highlight_list_pane_cp01

0xcfb3,	// (0x0007b2d9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcfb3,	// (0x0007b2d9) sp_fs_action_menu_list_gene_pane_g1

0xcfc2,	// (0x0007b2e8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcfc2,	// (0x0007b2e8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x0007e06c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x0007e06c) sp_fs_action_menu_list_gene_pane_g

0xcfcf,	// (0x0007b2f5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcfcf,	// (0x0007b2f5) sp_fs_action_menu_list_gene_pane_t1

0xcfe7,	// (0x0007b30d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcfe7,	// (0x0007b30d) sp_fs_action_menu_list_gene_pane

0xd004,	// (0x0007b32a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd004,	// (0x0007b32a) popup_sp_fs_action_menu_bg_pane

0xd012,	// (0x0007b338) sp_fs_action_menu_list_pane_ParamLimits

0xd012,	// (0x0007b338) sp_fs_action_menu_list_pane

0xd02e,	// (0x0007b354) sp_fs_scroll_pane_cp01_ParamLimits

0xd02e,	// (0x0007b354) sp_fs_scroll_pane_cp01

0xd054,	// (0x0007b37a) list_medium_line_plain_t2_t1

0xd063,	// (0x0007b389) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x0007e071) list_medium_line_plain_t2_t

0xd071,	// (0x0007b397) list_medium_line_plain_t3_t1

0xd081,	// (0x0007b3a7) list_medium_line_plain_t3_t2

0xd08f,	// (0x0007b3b5) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x0007e076) list_medium_line_plain_t3_t

0x1a00,	// (0x0006fd26) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t2_g2_g1

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0007d5d3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0007d5d3) list_medium_line_x2_t2_g2_g

0x1b5d,	// (0x0006fe83) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1b5d,	// (0x0006fe83) list_medium_line_x2_t2_g2_t1

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x0007e07d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x0007e07d) list_medium_line_x2_t2_g2_t

0x1a00,	// (0x0006fd26) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t4_g2_g1

0x4a6e,	// (0x00072d94) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4a6e,	// (0x00072d94) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x0007e082) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x0007e082) list_medium_line_x2_t4_g2_g

0xd09d,	// (0x0007b3c3) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd09d,	// (0x0007b3c3) list_medium_line_x2_t4_g2_t1

0xd0b4,	// (0x0007b3da) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd0b4,	// (0x0007b3da) list_medium_line_x2_t4_g2_t2

0xd0c9,	// (0x0007b3ef) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd0c9,	// (0x0007b3ef) list_medium_line_x2_t4_g2_t3

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x0007e087) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x0007e087) list_medium_line_x2_t4_g2_t

0x4a80,	// (0x00072da6) list_medium_line_t3_right_iconx2_g1

0x4a56,	// (0x00072d7c) list_medium_line_t3_right_iconx2_g2

0xd0db,	// (0x0007b401) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x0007e090) list_medium_line_t3_right_iconx2_g

0x4a5e,	// (0x00072d84) list_medium_line_t3_right_iconx2_t1

0xd0e3,	// (0x0007b409) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x0007e097) list_medium_line_t3_right_iconx2_t

0x1a00,	// (0x0006fd26) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x3_t4_g4_g1

0x1a0c,	// (0x0006fd32) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x3_t4_g4_g2

0x1a82,	// (0x0006fda8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1a82,	// (0x0006fda8) list_medium_line_x3_t4_g4_g3

0x4a88,	// (0x00072dae) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4a88,	// (0x00072dae) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x0007e09c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x0007e09c) list_medium_line_x3_t4_g4_g

0xbaca,	// (0x00079df0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbaca,	// (0x00079df0) list_medium_line_x3_t4_g4_t1

0xbae1,	// (0x00079e07) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbae1,	// (0x00079e07) list_medium_line_x3_t4_g4_t2

0x4a94,	// (0x00072dba) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4a94,	// (0x00072dba) list_medium_line_x3_t4_g4_t3

0x4aa9,	// (0x00072dcf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4aa9,	// (0x00072dcf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x0007e0a5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x0007e0a5) list_medium_line_x3_t4_g4_t

0xd0f1,	// (0x0007b417) list_single_dyc_row_text_pane_t1_ParamLimits

0xd0f1,	// (0x0007b417) list_single_dyc_row_text_pane_t1

0xd128,	// (0x0007b44e) list_single_dyc_row_text_pane_t2_ParamLimits

0xd128,	// (0x0007b44e) list_single_dyc_row_text_pane_t2

0x4ac6,	// (0x00072dec) list_single_dyc_row_text_pane_t3_ParamLimits

0x4ac6,	// (0x00072dec) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x0007e0ae) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x0007e0ae) list_single_dyc_row_text_pane_t

0x4ad8,	// (0x00072dfe) list_single_dyc_row_pane_g1_ParamLimits

0x4ad8,	// (0x00072dfe) list_single_dyc_row_pane_g1

0x4ae4,	// (0x00072e0a) list_single_dyc_row_pane_g2_ParamLimits

0x4ae4,	// (0x00072e0a) list_single_dyc_row_pane_g2

0x4af0,	// (0x00072e16) list_single_dyc_row_pane_g3_ParamLimits

0x4af0,	// (0x00072e16) list_single_dyc_row_pane_g3

0x4afc,	// (0x00072e22) list_single_dyc_row_pane_g4_ParamLimits

0x4afc,	// (0x00072e22) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x0007e0b5) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x0007e0b5) list_single_dyc_row_pane_g

0x4b08,	// (0x00072e2e) list_single_dyc_row_text_pane_ParamLimits

0x4b08,	// (0x00072e2e) list_single_dyc_row_text_pane

0x0f26,	// (0x0006f24c) bg_sp_fs_scroll_pane

0xd17f,	// (0x0007b4a5) thumb_sp_fs_scroll_pane

0x1a00,	// (0x0006fd26) list_medium_line_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_g1

0x1b5d,	// (0x0006fe83) list_medium_line_t1_ParamLimits

0x1b5d,	// (0x0006fe83) list_medium_line_t1

0x1a00,	// (0x0006fd26) list_medium_line_x2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_g1

0x1a0c,	// (0x0006fd32) list_medium_line_x2_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x0007dd92) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x0007dd92) list_medium_line_x2_g

0x4b27,	// (0x00072e4d) list_medium_line_x2_t1_ParamLimits

0x4b27,	// (0x00072e4d) list_medium_line_x2_t1

0x1a00,	// (0x0006fd26) list_medium_line_x3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x3_g1

0x1a0c,	// (0x0006fd32) list_medium_line_x3_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x0007dd92) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x0007dd92) list_medium_line_x3_g

0x4b27,	// (0x00072e4d) list_medium_line_x3_t1_ParamLimits

0x4b27,	// (0x00072e4d) list_medium_line_x3_t1

0xd188,	// (0x0007b4ae) thumb_sp_fs_scroll_pane_g1

0xd191,	// (0x0007b4b7) thumb_sp_fs_scroll_pane_g2

0xd19a,	// (0x0007b4c0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0007e0be) thumb_sp_fs_scroll_pane_g

0xd188,	// (0x0007b4ae) bg_sp_fs_scroll_pane_g1

0xd191,	// (0x0007b4b7) bg_sp_fs_scroll_pane_g2

0xd19a,	// (0x0007b4c0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0007e0be) bg_sp_fs_scroll_pane_g

0x1a00,	// (0x0006fd26) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_x2_t3_g4_g1

0x1a76,	// (0x0006fd9c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1a76,	// (0x0006fd9c) list_medium_line_x2_t3_g4_g2

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_x2_t3_g4_g3

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a18,	// (0x0006fd3e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0007d64f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0007d64f) list_medium_line_x2_t3_g4_g

0xd1a3,	// (0x0007b4c9) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd1a3,	// (0x0007b4c9) list_medium_line_x2_t3_g4_t1

0xd1b9,	// (0x0007b4df) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd1b9,	// (0x0007b4df) list_medium_line_x2_t3_g4_t2

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a39,	// (0x0006fd5f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x0007e0c5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x0007e0c5) list_medium_line_x2_t3_g4_t

0x1a00,	// (0x0006fd26) list_medium_line_g2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_g2_g1

0x1a0c,	// (0x0006fd32) list_medium_line_g2_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x0007dd92) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x0007dd92) list_medium_line_g2_g

0x1b04,	// (0x0006fe2a) list_medium_line_g2_t1_ParamLimits

0x1b04,	// (0x0006fe2a) list_medium_line_g2_t1

0x1a00,	// (0x0006fd26) list_medium_line_t3_g2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t3_g2_g1

0x1a0c,	// (0x0006fd32) list_medium_line_t3_g2_g2_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x0007dd92) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x0007dd92) list_medium_line_t3_g2_g

0x4b4b,	// (0x00072e71) list_medium_line_t3_g2_t1_ParamLimits

0x4b4b,	// (0x00072e71) list_medium_line_t3_g2_t1

0xd1d2,	// (0x0007b4f8) list_medium_line_t3_g2_t2_ParamLimits

0xd1d2,	// (0x0007b4f8) list_medium_line_t3_g2_t2

0xd1e7,	// (0x0007b50d) list_medium_line_t3_g2_t3_ParamLimits

0xd1e7,	// (0x0007b50d) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x0007e0cc) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x0007e0cc) list_medium_line_t3_g2_t

0x4a56,	// (0x00072d7c) list_medium_line_right_icon_g1

0x4b3d,	// (0x00072e63) list_medium_line_right_icon_t1

0x1a00,	// (0x0006fd26) list_medium_line_t2_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t2_g1

0xd1fd,	// (0x0007b523) list_medium_line_t2_t1_ParamLimits

0xd1fd,	// (0x0007b523) list_medium_line_t2_t1

0xd217,	// (0x0007b53d) list_medium_line_t2_t2_ParamLimits

0xd217,	// (0x0007b53d) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x0007e0d3) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x0007e0d3) list_medium_line_t2_t

0x1a00,	// (0x0006fd26) list_medium_line_t3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t3_g1

0xd09d,	// (0x0007b3c3) list_medium_line_t3_t1_ParamLimits

0xd09d,	// (0x0007b3c3) list_medium_line_t3_t1

0xd0b4,	// (0x0007b3da) list_medium_line_t3_t2_ParamLimits

0xd0b4,	// (0x0007b3da) list_medium_line_t3_t2

0xd0c9,	// (0x0007b3ef) list_medium_line_t3_t3_ParamLimits

0xd0c9,	// (0x0007b3ef) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x0007e0d8) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x0007e0d8) list_medium_line_t3_t

0x1a00,	// (0x0006fd26) list_medium_line_g3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_g3_g1

0x1a76,	// (0x0006fd9c) list_medium_line_g3_g2_ParamLimits

0x1a76,	// (0x0006fd9c) list_medium_line_g3_g2

0x1a0c,	// (0x0006fd32) list_medium_line_g3_g3_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x0007e0df) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x0007e0df) list_medium_line_g3_g

0x1aef,	// (0x0006fe15) list_medium_line_g3_t1_ParamLimits

0x1aef,	// (0x0006fe15) list_medium_line_g3_t1

0x1a00,	// (0x0006fd26) list_medium_line_t2_g3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t2_g3_g1

0x1a76,	// (0x0006fd9c) list_medium_line_t2_g3_g2_ParamLimits

0x1a76,	// (0x0006fd9c) list_medium_line_t2_g3_g2

0x1a0c,	// (0x0006fd32) list_medium_line_t2_g3_g3_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x0007e0df) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x0007e0df) list_medium_line_t2_g3_g

0xd22c,	// (0x0007b552) list_medium_line_t2_g3_t1_ParamLimits

0xd22c,	// (0x0007b552) list_medium_line_t2_g3_t1

0xd243,	// (0x0007b569) list_medium_line_t2_g3_t2_ParamLimits

0xd243,	// (0x0007b569) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x0007e0e6) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x0007e0e6) list_medium_line_t2_g3_t

0x1a00,	// (0x0006fd26) list_medium_line_t3_g3_g1_ParamLimits

0x1a00,	// (0x0006fd26) list_medium_line_t3_g3_g1

0x1a76,	// (0x0006fd9c) list_medium_line_t3_g3_g2_ParamLimits

0x1a76,	// (0x0006fd9c) list_medium_line_t3_g3_g2

0x1a0c,	// (0x0006fd32) list_medium_line_t3_g3_g3_ParamLimits

0x1a0c,	// (0x0006fd32) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x0007e0df) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x0007e0df) list_medium_line_t3_g3_g

0xd258,	// (0x0007b57e) list_medium_line_t3_g3_t1_ParamLimits

0xd258,	// (0x0007b57e) list_medium_line_t3_g3_t1

0xd26c,	// (0x0007b592) list_medium_line_t3_g3_t2_ParamLimits

0xd26c,	// (0x0007b592) list_medium_line_t3_g3_t2

0xd27e,	// (0x0007b5a4) list_medium_line_t3_g3_t3_ParamLimits

0xd27e,	// (0x0007b5a4) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x0007e0eb) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x0007e0eb) list_medium_line_t3_g3_t

0x4a80,	// (0x00072da6) list_medium_line_right_iconx2_g1

0x4a56,	// (0x00072d7c) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x0007e0f2) list_medium_line_right_iconx2_g

0x4b65,	// (0x00072e8b) list_medium_line_right_iconx2_t1

0x4a80,	// (0x00072da6) list_medium_line_t2_right_iconx2_g1

0x4a56,	// (0x00072d7c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x0007e0f2) list_medium_line_t2_right_iconx2_g

0xd290,	// (0x0007b5b6) list_medium_line_t2_right_iconx2_t1

0xd2a0,	// (0x0007b5c6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x0007e0f7) list_medium_line_t2_right_iconx2_t

0x3bdb,	// (0x00071f01) list_medium_line_x4_t4_t1

0xd2ae,	// (0x0007b5d4) list_medium_line_x4_t4_t2

0xd2bc,	// (0x0007b5e2) list_medium_line_x4_t4_t3

0xd2ca,	// (0x0007b5f0) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x0007e0fc) list_medium_line_x4_t4_t

0xd2fd,	// (0x0007b623) tport_appsw_pane_ParamLimits

0xd2fd,	// (0x0007b623) tport_appsw_pane

0xd309,	// (0x0007b62f) tport_contact_pane_ParamLimits

0xd309,	// (0x0007b62f) tport_contact_pane

0xd317,	// (0x0007b63d) tport_listscroll_pane_ParamLimits

0xd317,	// (0x0007b63d) tport_listscroll_pane

0xd325,	// (0x0007b64b) cell_tport_appsw_pane_ParamLimits

0xd325,	// (0x0007b64b) cell_tport_appsw_pane

0x328a,	// (0x000715b0) tport_appsw_pane_g1_ParamLimits

0x328a,	// (0x000715b0) tport_appsw_pane_g1

0xd332,	// (0x0007b658) tport_contact_pane_g1

0xd33b,	// (0x0007b661) tport_contact_pane_t1

0xd349,	// (0x0007b66f) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x0007e105) tport_contact_pane_t

0xd357,	// (0x0007b67d) list_tport_pane

0x183b,	// (0x0006fb61) scroll_pane_cp_030

0xd368,	// (0x0007b68e) cell_tport_appsw_pane_g1

0xd381,	// (0x0007b6a7) cell_tport_appsw_pane_t1

0x0f26,	// (0x0006f24c) grid_highlight_pane_cp019

0xd38f,	// (0x0007b6b5) list_tport_double_graphic_pane_ParamLimits

0xd38f,	// (0x0007b6b5) list_tport_double_graphic_pane

0x542b,	// (0x00073751) list_highlight_pane_cp023_ParamLimits

0x542b,	// (0x00073751) list_highlight_pane_cp023

0xd39c,	// (0x0007b6c2) list_tport_double_graphic_pane_g1_ParamLimits

0xd39c,	// (0x0007b6c2) list_tport_double_graphic_pane_g1

0xd3a9,	// (0x0007b6cf) list_tport_double_graphic_pane_t1_ParamLimits

0xd3a9,	// (0x0007b6cf) list_tport_double_graphic_pane_t1

0xd3be,	// (0x0007b6e4) list_tport_double_graphic_pane_t2_ParamLimits

0xd3be,	// (0x0007b6e4) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x0007e111) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x0007e111) list_tport_double_graphic_pane_t

0x0f26,	// (0x0006f24c) main_cale_note_pane

0xb30f,	// (0x00079635) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb30f,	// (0x00079635) cell_vitu2_function_top_wide_pane_cp01

0xc9a2,	// (0x0007acc8) wait_bar_pane_cp05_ParamLimits

0x0f26,	// (0x0006f24c) listscroll_cmail_pane

0xd3d0,	// (0x0007b6f6) list_cmail_pane

0xd3ec,	// (0x0007b712) list_cmail_body_pane

0xd3ec,	// (0x0007b712) list_single_cmail_header_caption_pane

0xd404,	// (0x0007b72a) list_single_cmail_header_detail_pane_ParamLimits

0xd404,	// (0x0007b72a) list_single_cmail_header_detail_pane

0xd42e,	// (0x0007b754) list_single_cmail_header_caption_pane_t1

0xd43c,	// (0x0007b762) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd43c,	// (0x0007b762) list_single_cmail_header_detail_pane_g1

0xd452,	// (0x0007b778) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd452,	// (0x0007b778) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x0007e116) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x0007e116) list_single_cmail_header_detail_pane_g

0x4b7b,	// (0x00072ea1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4b7b,	// (0x00072ea1) list_single_cmail_header_detail_pane_t1

0x4bad,	// (0x00072ed3) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4bad,	// (0x00072ed3) list_single_cmail_header_editor_pane_bg

0xd48f,	// (0x0007b7b5) list_cmail_body_pane_g1

0xd498,	// (0x0007b7be) list_cmail_body_pane_t1

0x3994,	// (0x00071cba) list_single_cmail_header_editor_pane_bg_g1

0xdc91,	// (0x0007bfb7) list_single_cmail_header_editor_pane_bg_g1_copy1

0x39a4,	// (0x00071cca) list_single_cmail_header_editor_pane_bg_g1_copy2

0x399c,	// (0x00071cc2) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3be9,	// (0x00071f0f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x39c4,	// (0x00071cea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x39b4,	// (0x00071cda) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x39bc,	// (0x00071ce2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdc71,	// (0x0007bf97) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd4a6,	// (0x0007b7cc) calenote_gesture_pane_ParamLimits

0xd4a6,	// (0x0007b7cc) calenote_gesture_pane

0xd4be,	// (0x0007b7e4) calenote_window_pane_ParamLimits

0xd4be,	// (0x0007b7e4) calenote_window_pane

0xd4d6,	// (0x0007b7fc) popup_note_window_cp01

0xd4df,	// (0x0007b805) calenote_swipe_1_pane_ParamLimits

0xd4df,	// (0x0007b805) calenote_swipe_1_pane

0xcdc8,	// (0x0007b0ee) calenote_swipe_2_pane_ParamLimits

0xcdc8,	// (0x0007b0ee) calenote_swipe_2_pane

0xcd28,	// (0x0007b04e) calenote_swipe_1_pane_g1_ParamLimits

0xcd28,	// (0x0007b04e) calenote_swipe_1_pane_g1

0xcd35,	// (0x0007b05b) calenote_swipe_1_pane_g2_ParamLimits

0xcd35,	// (0x0007b05b) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x0007e04a) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x0007e04a) calenote_swipe_1_pane_g

0xd4fb,	// (0x0007b821) calenote_swipe_1_pane_t1_ParamLimits

0xd4fb,	// (0x0007b821) calenote_swipe_1_pane_t1

0xcd28,	// (0x0007b04e) calenote_swipe_2_pane_g1_ParamLimits

0xcd28,	// (0x0007b04e) calenote_swipe_2_pane_g1

0xd51a,	// (0x0007b840) calenote_swipe_2_pane_g2_ParamLimits

0xd51a,	// (0x0007b840) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x0007e122) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x0007e122) calenote_swipe_2_pane_g

0xd526,	// (0x0007b84c) calenote_swipe_2_pane_t1_ParamLimits

0xd526,	// (0x0007b84c) calenote_swipe_2_pane_t1

0x0f26,	// (0x0006f24c) main_mup_navstr_pane

0xa1ac,	// (0x000784d2) main_mup3_pane_t7_ParamLimits

0xa1ac,	// (0x000784d2) main_mup3_pane_t7

0xab36,	// (0x00078e5c) main_mp4_pane_g6_ParamLimits

0xab36,	// (0x00078e5c) main_mp4_pane_g6

0xae78,	// (0x0007919e) main_image3_pane_t4_ParamLimits

0xae78,	// (0x0007919e) main_image3_pane_t4

0xd54d,	// (0x0007b873) popup_navstr_preview_pane_ParamLimits

0xd54d,	// (0x0007b873) popup_navstr_preview_pane

0xd559,	// (0x0007b87f) scroll_navstr_pane_ParamLimits

0xd559,	// (0x0007b87f) scroll_navstr_pane

0x0f26,	// (0x0006f24c) bg_popup_preview_window_pane_cp04

0xd565,	// (0x0007b88b) popup_navstr_preview_pane_t1

0xd573,	// (0x0007b899) scroll_navstr_pane_g1_ParamLimits

0xd573,	// (0x0007b899) scroll_navstr_pane_g1

0xd580,	// (0x0007b8a6) scroll_navstr_pane_t1_ParamLimits

0xd580,	// (0x0007b8a6) scroll_navstr_pane_t1

0xd4f2,	// (0x0007b818) bg_button_pane_cp014

0xd4f2,	// (0x0007b818) bg_button_pane_cp030

0xcc44,	// (0x0007af6a) list_double_fisheye_pane_g4_ParamLimits

0xcc44,	// (0x0007af6a) list_double_fisheye_pane_g4

0xcc50,	// (0x0007af76) list_double_fisheye_pane_g5_ParamLimits

0xcc50,	// (0x0007af76) list_double_fisheye_pane_g5

0xd3e0,	// (0x0007b706) sp_fs_scroll_pane_cp03

0xcf3b,	// (0x0007b261) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcf47,	// (0x0007b26d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x0007e067) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcf53,	// (0x0007b279) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd3d8,	// (0x0007b6fe) sp_fs_scroll_pane_cp02

0x1895,	// (0x0006fbbb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1895,	// (0x0006fbbb) popup_sp_fs_calendar_preview_list_single_pane

0x0f26,	// (0x0006f24c) main_cam6_pano_pane

0x542b,	// (0x00073751) main_mup3_pane_ParamLimits

0x0f26,	// (0x0006f24c) main_phacti_pane

0xc895,	// (0x0007abbb) bg_button_pane_cp11

0xc8ad,	// (0x0007abd3) main_mobtv_info_pane_g2_ParamLimits

0xc8ad,	// (0x0007abd3) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x0007dfc7) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x0007dfc7) main_mobtv_info_pane_g

0xca39,	// (0x0007ad5f) sc_clock_pane_t5_ParamLimits

0xca39,	// (0x0007ad5f) sc_clock_pane_t5

0xcac3,	// (0x0007ade9) main_radioblah_pane_g1_ParamLimits

0x49d2,	// (0x00072cf8) main_radioblah_pane_t3_ParamLimits

0x49d2,	// (0x00072cf8) main_radioblah_pane_t3

0x49ea,	// (0x00072d10) main_radioblah_pane_t4_ParamLimits

0x49ea,	// (0x00072d10) main_radioblah_pane_t4

0xcae1,	// (0x0007ae07) main_radioblah_text_pane_ParamLimits

0xcae1,	// (0x0007ae07) main_radioblah_text_pane

0xcaee,	// (0x0007ae14) main_radioblah_info_pane_g1_ParamLimits

0xcb7b,	// (0x0007aea1) main_radioblah_info_pane_t4_ParamLimits

0xcb7b,	// (0x0007aea1) main_radioblah_info_pane_t4

0x542b,	// (0x00073751) main_sp_fs_calendar_pane

0xd592,	// (0x0007b8b8) main_phacti_pane_g1

0xd5a3,	// (0x0007b8c9) phacti_note_pane_ParamLimits

0xd5a3,	// (0x0007b8c9) phacti_note_pane

0xd5b7,	// (0x0007b8dd) phacti_term_pane_ParamLimits

0xd5b7,	// (0x0007b8dd) phacti_term_pane

0xd5cc,	// (0x0007b8f2) phacti_note_pane_t1_ParamLimits

0xd5cc,	// (0x0007b8f2) phacti_note_pane_t1

0x4bbf,	// (0x00072ee5) phacti_term_pane_g1

0x4bc7,	// (0x00072eed) phacti_term_pane_t1_ParamLimits

0x4bc7,	// (0x00072eed) phacti_term_pane_t1

0xd5e3,	// (0x0007b909) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd5eb,	// (0x0007b911) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x0007e12c) popup_sp_fs_calendar_preview_list_single_pane_g

0xd5f3,	// (0x0007b919) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd5f3,	// (0x0007b919) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd609,	// (0x0007b92f) aid_popup_sp_fs_bg_corner_pane

0x2fca,	// (0x000712f0) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f26,	// (0x0006f24c) popup_sp_fs_calendar_preview_bg_pane

0xd611,	// (0x0007b937) popup_sp_fs_calendar_preview_list_pane

0x542b,	// (0x00073751) bg_main_sp_fs_cale_pane_ParamLimits

0x542b,	// (0x00073751) bg_main_sp_fs_cale_pane

0x4bf1,	// (0x00072f17) listscroll_cale_mrui_pane_ParamLimits

0x4bf1,	// (0x00072f17) listscroll_cale_mrui_pane

0x3a04,	// (0x00071d2a) listscroll_sp_fs_schedule_track_pane

0x4c05,	// (0x00072f2b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4c05,	// (0x00072f2b) main_sp_fs_ctrlbar_pane_cp01

0xd640,	// (0x0007b966) main_sp_fs_ribbon_pane

0x4c16,	// (0x00072f3c) popup_sp_fs_cale_preview_window

0xd648,	// (0x0007b96e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd648,	// (0x0007b96e) list_single_sp_fs_schedule_track_pane

0x38fd,	// (0x00071c23) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x38fd,	// (0x00071c23) bg_sp_fs_highlight_list_pane_cp03

0xd65d,	// (0x0007b983) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd65d,	// (0x0007b983) list_single_sp_fs_schedule_track_pane_g1

0xd669,	// (0x0007b98f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd669,	// (0x0007b98f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x0007e131) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x0007e131) list_single_sp_fs_schedule_track_pane_g

0xd675,	// (0x0007b99b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd675,	// (0x0007b99b) list_single_sp_fs_schedule_track_pane_t1

0xd68d,	// (0x0007b9b3) sp_fs_schedule_track_pane_ParamLimits

0xd68d,	// (0x0007b9b3) sp_fs_schedule_track_pane

0xd69d,	// (0x0007b9c3) sp_fs_schedule_track_pane_g1

0xd6a5,	// (0x0007b9cb) sp_fs_schedule_track_pane_g2

0xd6ad,	// (0x0007b9d3) sp_fs_schedule_track_pane_g3

0xd6b5,	// (0x0007b9db) sp_fs_schedule_track_pane_g4

0xd6bd,	// (0x0007b9e3) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x0007e136) sp_fs_schedule_track_pane_g

0x3994,	// (0x00071cba) bg_sp_fs_schedule_viewer_highlight_g1

0xdc91,	// (0x0007bfb7) bg_sp_fs_schedule_viewer_highlight_g2

0x399c,	// (0x00071cc2) bg_sp_fs_schedule_viewer_highlight_g3

0x39a4,	// (0x00071cca) bg_sp_fs_schedule_viewer_highlight_g4

0x3be9,	// (0x00071f0f) bg_sp_fs_schedule_viewer_highlight_g5

0x39b4,	// (0x00071cda) bg_sp_fs_schedule_viewer_highlight_g6

0x39bc,	// (0x00071ce2) bg_sp_fs_schedule_viewer_highlight_g7

0x39c4,	// (0x00071cea) bg_sp_fs_schedule_viewer_highlight_g8

0xdc71,	// (0x0007bf97) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x0007e141) bg_sp_fs_schedule_viewer_highlight_g

0x0f26,	// (0x0006f24c) bg_main_sp_fs_ribbon_pane

0xd6c5,	// (0x0007b9eb) main_sp_fs_ribbon_pane_g1

0xd6ce,	// (0x0007b9f4) main_sp_fs_ribbon_pane_t1

0xd6dd,	// (0x0007ba03) main_sp_fs_ribbon_pane_t2

0xd6ec,	// (0x0007ba12) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x0007e154) main_sp_fs_ribbon_pane_t

0xd6fb,	// (0x0007ba21) main_sp_fs_ribbon_scheduler_pane

0xd703,	// (0x0007ba29) bg_main_sp_fs_ribbon_pane_g1

0xd70c,	// (0x0007ba32) bg_main_sp_fs_ribbon_pane_g2

0xd715,	// (0x0007ba3b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x0007e15b) bg_main_sp_fs_ribbon_pane_g

0xd71d,	// (0x0007ba43) main_sp_fs_ribbon_scheduler_pane_g1

0xd726,	// (0x0007ba4c) main_sp_fs_ribbon_scheduler_pane_g2

0xd72f,	// (0x0007ba55) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x0007e162) main_sp_fs_ribbon_scheduler_pane_g

0x4a44,	// (0x00072d6a) list_cale_mrui_pane

0xd738,	// (0x0007ba5e) sp_fs_scroll_pane_cp07_ParamLimits

0xd738,	// (0x0007ba5e) sp_fs_scroll_pane_cp07

0xd74d,	// (0x0007ba73) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd74d,	// (0x0007ba73) bg_sp_fs_schedule_viewer_highlight

0xd75a,	// (0x0007ba80) list_single_sp_fs_schedule_track_pane_cp01

0xd762,	// (0x0007ba88) list_sp_fs_schedule_track_pane

0xd76a,	// (0x0007ba90) sp_fs_scroll_pane_cp06_ParamLimits

0xd76a,	// (0x0007ba90) sp_fs_scroll_pane_cp06

0x2fca,	// (0x000712f0) bgmain_sp_fs_calendar_pane_g1

0xd77c,	// (0x0007baa2) list_single_cale_mrui_pane_ParamLimits

0xd77c,	// (0x0007baa2) list_single_cale_mrui_pane

0x4c28,	// (0x00072f4e) list_single_cale_mrui_row_pane_ParamLimits

0x4c28,	// (0x00072f4e) list_single_cale_mrui_row_pane

0x4c35,	// (0x00072f5b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4c35,	// (0x00072f5b) list_single_cale_mrui_row_pane_g1

0x4c6d,	// (0x00072f93) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4c6d,	// (0x00072f93) list_single_cale_mrui_row_pane_t1

0xd7a1,	// (0x0007bac7) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd7a1,	// (0x0007bac7) list_single_cale_mrui_row_pane_t2

0x4c7f,	// (0x00072fa5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4c7f,	// (0x00072fa5) list_single_cale_mrui_row_pane_t3

0x4cae,	// (0x00072fd4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4cae,	// (0x00072fd4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x0007e16e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x0007e16e) list_single_cale_mrui_row_pane_t

0xd807,	// (0x0007bb2d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd807,	// (0x0007bb2d) list_single_cmail_header_editor_pane_bg_cp01

0xd82b,	// (0x0007bb51) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd82b,	// (0x0007bb51) list_single_cmail_header_editor_pane_bg_cp02

0xd849,	// (0x0007bb6f) main_radioblah_text_pane_t1_ParamLimits

0xd849,	// (0x0007bb6f) main_radioblah_text_pane_t1

0xd862,	// (0x0007bb88) cam6_indi_pane_cp01

0xd86a,	// (0x0007bb90) cam6_mode_pane_cp01

0xd872,	// (0x0007bb98) cam6_pano_pane

0xd87b,	// (0x0007bba1) cam6_zoom_pane_cp01

0xd883,	// (0x0007bba9) cam6_pano_image_pane

0xd88c,	// (0x0007bbb2) cam6_pano_pane_g1

0x4750,	// (0x00072a76) cam6_pano_pane_g2

0xd895,	// (0x0007bbbb) cam6_pano_pane_g3

0xd89e,	// (0x0007bbc4) cam6_pano_pane_g4

0x34e8,	// (0x0007180e) cam6_pano_pane_g5

0xd8a7,	// (0x0007bbcd) cam6_pano_pane_g6

0xd8af,	// (0x0007bbd5) cam6_pano_pane_g7

0xd8b7,	// (0x0007bbdd) cam6_pano_pane_g8

0xd8c0,	// (0x0007bbe6) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x0007e177) cam6_pano_pane_g

0x0f26,	// (0x0006f24c) main_browser_tag_pane

0xd545,	// (0x0007b86b) grid_navstr_albumart_pane

0xd8c9,	// (0x0007bbef) cell_navstr_albumart_pane_ParamLimits

0xd8c9,	// (0x0007bbef) cell_navstr_albumart_pane

0xe540,	// (0x0007c866) cell_navstr_albumart_pane_g1

0x296c,	// (0x00070c92) cell_navstr_albumart_pane_g2

0x297c,	// (0x00070ca2) cell_navstr_albumart_pane_g3

0x2974,	// (0x00070c9a) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x0007e18a) cell_navstr_albumart_pane_g

0xd8e0,	// (0x0007bc06) bt_list_pane_ParamLimits

0xd8e0,	// (0x0007bc06) bt_list_pane

0xd8f5,	// (0x0007bc1b) bt_list_pane_t1

0xd904,	// (0x0007bc2a) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x0007e193) bt_list_pane_t

0x0f26,	// (0x0006f24c) main_cale_prevew_pane

0xd913,	// (0x0007bc39) popup_cale_preview_window_ParamLimits

0xd913,	// (0x0007bc39) popup_cale_preview_window

0x542b,	// (0x00073751) bg_popup_preview_window_pane_cp05_ParamLimits

0x542b,	// (0x00073751) bg_popup_preview_window_pane_cp05

0xd928,	// (0x0007bc4e) list_cale_preview_pane_ParamLimits

0xd928,	// (0x0007bc4e) list_cale_preview_pane

0xd934,	// (0x0007bc5a) list_double_cale_preview_pane_ParamLimits

0xd934,	// (0x0007bc5a) list_double_cale_preview_pane

0xd945,	// (0x0007bc6b) list_single_cale_preview_pane_ParamLimits

0xd945,	// (0x0007bc6b) list_single_cale_preview_pane

0xd959,	// (0x0007bc7f) list_single_cale_preview_pane_g1

0xd961,	// (0x0007bc87) list_single_cale_preview_pane_t1_ParamLimits

0xd961,	// (0x0007bc87) list_single_cale_preview_pane_t1

0xd976,	// (0x0007bc9c) list_double_cale_preview_pane_g1

0xd97e,	// (0x0007bca4) list_double_cale_preview_pane_t1_ParamLimits

0xd97e,	// (0x0007bca4) list_double_cale_preview_pane_t1

0xd993,	// (0x0007bcb9) list_double_cale_preview_pane_t2_ParamLimits

0xd993,	// (0x0007bcb9) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x0007e198) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x0007e198) list_double_cale_preview_pane_t

0x0f26,	// (0x0006f24c) main_ezdial_pane

0x542b,	// (0x00073751) main_sp_fs_email_pane_ParamLimits

0xce9c,	// (0x0007b1c2) cmail_ddmenu_btn01_pane_ParamLimits

0xce9c,	// (0x0007b1c2) cmail_ddmenu_btn01_pane

0xceb9,	// (0x0007b1df) cmail_ddmenu_btn02_pane_ParamLimits

0xceb9,	// (0x0007b1df) cmail_ddmenu_btn02_pane

0xcf0f,	// (0x0007b235) cmail_ddmenu_btn03_pane_ParamLimits

0xcf0f,	// (0x0007b235) cmail_ddmenu_btn03_pane

0xcf68,	// (0x0007b28e) main_sp_fs_ctrlbar_pane_ParamLimits

0xcf80,	// (0x0007b2a6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd3ec,	// (0x0007b712) list_cmail_body_pane_ParamLimits

0x4b73,	// (0x00072e99) bg_button_pane_cp12

0xd45e,	// (0x0007b784) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd45e,	// (0x0007b784) list_single_cmail_header_detail_pane_g3

0xd46b,	// (0x0007b791) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd46b,	// (0x0007b791) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x0007e11d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x0007e11d) list_single_cmail_header_detail_pane_t

0x4bdc,	// (0x00072f02) phacti_term_pane_t2_ParamLimits

0x4bdc,	// (0x00072f02) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x0007e127) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x0007e127) phacti_term_pane_t

0xd9ab,	// (0x0007bcd1) aid_size_list_single_double

0xd9b7,	// (0x0007bcdd) popup_ezdial_listscroll_window

0xd9d0,	// (0x0007bcf6) popup_number_entry_window_cp01

0xe3df,	// (0x0007c705) bg_popup_call_pane_cp09

0xd9dc,	// (0x0007bd02) ezdial_list_pane

0xd9e4,	// (0x0007bd0a) scroll_pane_cp23

0x2db7,	// (0x000710dd) bg_button_pane_cp028_ParamLimits

0x2db7,	// (0x000710dd) bg_button_pane_cp028

0xd9ec,	// (0x0007bd12) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd9ec,	// (0x0007bd12) cmail_ddmenu_btn01_pane_g1

0xd9fe,	// (0x0007bd24) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd9fe,	// (0x0007bd24) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x0007e19d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x0007e19d) cmail_ddmenu_btn01_pane_g

0xda0a,	// (0x0007bd30) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xda0a,	// (0x0007bd30) cmail_ddmenu_btn01_pane_t1

0x2b8f,	// (0x00070eb5) bg_button_pane_cp029_ParamLimits

0x2b8f,	// (0x00070eb5) bg_button_pane_cp029

0xd9fe,	// (0x0007bd24) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd9fe,	// (0x0007bd24) cmail_ddmenu_btn02_pane_g1

0xda2b,	// (0x0007bd51) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xda2b,	// (0x0007bd51) cmail_ddmenu_btn02_pane_t1

0x38fd,	// (0x00071c23) bg_button_pane_cp031_ParamLimits

0x38fd,	// (0x00071c23) bg_button_pane_cp031

0xd9fe,	// (0x0007bd24) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd9fe,	// (0x0007bd24) cmail_ddmenu_btn03_pane_g1

0xda2b,	// (0x0007bd51) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xda2b,	// (0x0007bd51) cmail_ddmenu_btn03_pane_t1

0xad27,	// (0x0007904d) cell_dialer2_keypad_pane_t1_ParamLimits

0xad41,	// (0x00079067) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xad41,	// (0x00079067) cell_dialer2_keypad_pane_t1_copy1

0xc75c,	// (0x0007aa82) ncimui_group_button_pane

0x542b,	// (0x00073751) main_sp_fs_calendar_pane_ParamLimits

0xd3ec,	// (0x0007b712) list_single_cmail_header_caption_pane_ParamLimits

0x3f13,	// (0x00072239) aid_recal_txt_sm_pane

0x0f26,	// (0x0006f24c) mian_recal_day_pane

0x4c16,	// (0x00072f3c) popup_sp_fs_cale_preview_window_ParamLimits

0x0f26,	// (0x0006f24c) list_recal_day_pane

0x4d53,	// (0x00073079) list_single_recal_day_pane_ParamLimits

0x4d53,	// (0x00073079) list_single_recal_day_pane

0xda5f,	// (0x0007bd85) list_single_recal_day_pane_g1_ParamLimits

0xda5f,	// (0x0007bd85) list_single_recal_day_pane_g1

0x4d65,	// (0x0007308b) list_single_recal_day_pane_g2_ParamLimits

0x4d65,	// (0x0007308b) list_single_recal_day_pane_g2

0x4d71,	// (0x00073097) list_single_recal_day_pane_g3_ParamLimits

0x4d71,	// (0x00073097) list_single_recal_day_pane_g3

0xda6b,	// (0x0007bd91) list_single_recal_day_pane_g4_ParamLimits

0xda6b,	// (0x0007bd91) list_single_recal_day_pane_g4

0x4d7d,	// (0x000730a3) list_single_recal_day_pane_g5_ParamLimits

0x4d7d,	// (0x000730a3) list_single_recal_day_pane_g5

0x4d89,	// (0x000730af) list_single_recal_day_pane_g6_ParamLimits

0x4d89,	// (0x000730af) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x0007e1ac) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x0007e1ac) list_single_recal_day_pane_g

0x4d95,	// (0x000730bb) list_single_recal_day_pane_t1

0x4da3,	// (0x000730c9) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x0007e1b9) list_single_recal_day_pane_t

0xda77,	// (0x0007bd9d) ncimui_query_button_pane_ParamLimits

0xda77,	// (0x0007bd9d) ncimui_query_button_pane

0xda87,	// (0x0007bdad) ncimui_query_button_pane_t1_ParamLimits

0xda87,	// (0x0007bdad) ncimui_query_button_pane_t1

0xda9a,	// (0x0007bdc0) ncimui_query_button_pane_t2_ParamLimits

0xda9a,	// (0x0007bdc0) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x0007e1be) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x0007e1be) ncimui_query_button_pane_t

0xdaad,	// (0x0007bdd3) query_button_pane_ParamLimits

0xdaad,	// (0x0007bdd3) query_button_pane

0x0f26,	// (0x0006f24c) bg_button_pane_cp0028

0xdaba,	// (0x0007bde0) query_button_pane_t1

0x9345,	// (0x0007766b) main_tport_pane_ParamLimits

0xd2d8,	// (0x0007b5fe) bg_popup_window_pane_cp01_ParamLimits

0xd2d8,	// (0x0007b5fe) bg_popup_window_pane_cp01

0xd2e5,	// (0x0007b60b) heading_pane_cp08_ParamLimits

0xd2e5,	// (0x0007b60b) heading_pane_cp08

0xd2f1,	// (0x0007b617) heading_pane_cp07_ParamLimits

0xd2f1,	// (0x0007b617) heading_pane_cp07

0xd371,	// (0x0007b697) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x0007e10a) cell_tport_appsw_pane_g

0x1bb3,	// (0x0006fed9) input_candi_list_open_g1

0xde39,	// (0x0007c15f) list_cale_time_pane_g6_ParamLimits

0xde39,	// (0x0007c15f) list_cale_time_pane_g6

0x9ce6,	// (0x0007800c) aid_size_touch_calib_1_ParamLimits

0x9ce6,	// (0x0007800c) aid_size_touch_calib_1

0x9cf2,	// (0x00078018) aid_size_touch_calib_2_ParamLimits

0x9cf2,	// (0x00078018) aid_size_touch_calib_2

0x9cfe,	// (0x00078024) aid_size_touch_calib_3_ParamLimits

0x9cfe,	// (0x00078024) aid_size_touch_calib_3

0x9d0c,	// (0x00078032) aid_size_touch_calib_4_ParamLimits

0x9d0c,	// (0x00078032) aid_size_touch_calib_4

0x9d1a,	// (0x00078040) main_touch_calib_button_group_pane_ParamLimits

0x9d1a,	// (0x00078040) main_touch_calib_button_group_pane

0x9d27,	// (0x0007804d) main_touch_calib_pane_g1_ParamLimits

0x9d33,	// (0x00078059) main_touch_calib_pane_g2_ParamLimits

0x9d3f,	// (0x00078065) main_touch_calib_pane_g3_ParamLimits

0x9d4b,	// (0x00078071) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x0007daf1) main_touch_calib_pane_g_ParamLimits

0x9d57,	// (0x0007807d) main_touch_calib_pane_t1_ParamLimits

0x9d6c,	// (0x00078092) main_touch_calib_pane_t2_ParamLimits

0x9d81,	// (0x000780a7) main_touch_calib_pane_t3_ParamLimits

0x9d93,	// (0x000780b9) main_touch_calib_pane_t4_ParamLimits

0x9da5,	// (0x000780cb) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x0007dafa) main_touch_calib_pane_t_ParamLimits

0x3313,	// (0x00071639) list_single_fp_cale_pane_g3_ParamLimits

0x3313,	// (0x00071639) list_single_fp_cale_pane_g3

0xb144,	// (0x0007946a) bg_button_pane_cp012_ParamLimits

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp03_ParamLimits

0xba41,	// (0x00079d67) cell_vitu2_function_top_pane_g1_ParamLimits

0xb144,	// (0x0007946a) bg_vkb2_func_pane_cp04_ParamLimits

0xc70f,	// (0x0007aa35) main_ncimui_button_group_pane_ParamLimits

0xc70f,	// (0x0007aa35) main_ncimui_button_group_pane

0xc74a,	// (0x0007aa70) main_ncimui_pane_t3_ParamLimits

0xc74a,	// (0x0007aa70) main_ncimui_pane_t3

0xd59a,	// (0x0007b8c0) phacti_button_group_pane

0xd9ab,	// (0x0007bcd1) aid_size_list_single_double_ParamLimits

0xd9b7,	// (0x0007bcdd) popup_ezdial_listscroll_window_ParamLimits

0xd9d0,	// (0x0007bcf6) popup_number_entry_window_cp01_ParamLimits

0xdac8,	// (0x0007bdee) phacti_button_pane_ParamLimits

0xdac8,	// (0x0007bdee) phacti_button_pane

0x0f26,	// (0x0006f24c) bg_button_pane_cp14

0xdad7,	// (0x0007bdfd) phacti_button_pane_t1

0xdae5,	// (0x0007be0b) main_touch_calib_button_pane_ParamLimits

0xdae5,	// (0x0007be0b) main_touch_calib_button_pane

0x16de,	// (0x0006fa04) bg_button_pane_cp18_ParamLimits

0x16de,	// (0x0006fa04) bg_button_pane_cp18

0xdaf5,	// (0x0007be1b) main_touch_calib_button_pane_t1_ParamLimits

0xdaf5,	// (0x0007be1b) main_touch_calib_button_pane_t1

0xdb0b,	// (0x0007be31) main_touch_calib_button_pane_t2_ParamLimits

0xdb0b,	// (0x0007be31) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x0007e1c3) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x0007e1c3) main_touch_calib_button_pane_t

0x0f26,	// (0x0006f24c) cell_ncimui_button_pane

0x0f26,	// (0x0006f24c) bg_button_pane_cp032

0xdb29,	// (0x0007be4f) cell_ncimui_button_pane_t1

0xad93,	// (0x000790b9) image3_infobar_pane_ParamLimits

0xad93,	// (0x000790b9) image3_infobar_pane

0xca59,	// (0x0007ad7f) fs_bigclock_status_pane_ParamLimits

0xca59,	// (0x0007ad7f) fs_bigclock_status_pane

0xca66,	// (0x0007ad8c) main_fs_bigclock_clock_pane_ParamLimits

0xca66,	// (0x0007ad8c) main_fs_bigclock_clock_pane

0xca76,	// (0x0007ad9c) main_fs_bigclock_indi_pane_ParamLimits

0xca76,	// (0x0007ad9c) main_fs_bigclock_indi_pane

0xca9b,	// (0x0007adc1) main_fs_bigclock_swipe_pane_ParamLimits

0xca9b,	// (0x0007adc1) main_fs_bigclock_swipe_pane

0x0f26,	// (0x0006f24c) main_fs_clock_dumped_data

0x485d,	// (0x00072b83) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x485d,	// (0x00072b83) list_single_fs_bigclock_indicator_pane_g1

0x4877,	// (0x00072b9d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4877,	// (0x00072b9d) list_single_fs_bigclock_indicator_pane_g2

0x4891,	// (0x00072bb7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4891,	// (0x00072bb7) list_single_fs_bigclock_indicator_pane_g3

0x48ab,	// (0x00072bd1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x48ab,	// (0x00072bd1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x0007dffb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x0007dffb) list_single_fs_bigclock_indicator_pane_g

0x48cf,	// (0x00072bf5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x48cf,	// (0x00072bf5) list_single_fs_bigclock_indicator_pane_t1

0x48f7,	// (0x00072c1d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x48f7,	// (0x00072c1d) list_single_fs_bigclock_indicator_pane_t2

0x491f,	// (0x00072c45) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x491f,	// (0x00072c45) list_single_fs_bigclock_indicator_pane_t3

0x4947,	// (0x00072c6d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4947,	// (0x00072c6d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x0007e006) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x0007e006) list_single_fs_bigclock_indicator_pane_t

0xe83b,	// (0x0007cb61) image3_infobar_fav_pane_ParamLimits

0xe83b,	// (0x0007cb61) image3_infobar_fav_pane

0xe84b,	// (0x0007cb71) image3_infobar_loc_pane_ParamLimits

0xe84b,	// (0x0007cb71) image3_infobar_loc_pane

0xe85f,	// (0x0007cb85) image3_infobar_time_pane_ParamLimits

0xe85f,	// (0x0007cb85) image3_infobar_time_pane

0x2fca,	// (0x000712f0) image3_infobar_time_pane_g1

0xe86f,	// (0x0007cb95) image3_infobar_time_pane_t1

0x2fca,	// (0x000712f0) image3_infobar_loc_pane_g1

0xe87d,	// (0x0007cba3) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x0007e1c8) image3_infobar_loc_pane_g

0xe885,	// (0x0007cbab) image3_infobar_loc_pane_t1

0x2fca,	// (0x000712f0) image3_infobar_fav_pane_g1

0xe893,	// (0x0007cbb9) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x0007e1cd) image3_infobar_fav_pane_g

0xe89b,	// (0x0007cbc1) fs_bigclock_status_battery_pane

0xe8a4,	// (0x0007cbca) fs_bigclock_status_signal_pane

0xe8ad,	// (0x0007cbd3) fs_bigclock_status_title_pane

0xe8b6,	// (0x0007cbdc) fs_bigclock_status_signal_pane_g1

0xe8bf,	// (0x0007cbe5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x0007e1d2) fs_bigclock_status_signal_pane_g

0xe8c7,	// (0x0007cbed) fs_bigclock_status_battery_pane_g1

0xe8d0,	// (0x0007cbf6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x0007e1d7) fs_bigclock_status_battery_pane_g

0xe8d8,	// (0x0007cbfe) fs_bigclock_status_title_pane_t1

0x2fca,	// (0x000712f0) main_fs_bigclock_clock_pane_g1

0xe8e6,	// (0x0007cc0c) main_fs_bigclock_clock_pane_g2

0xe8e6,	// (0x0007cc0c) main_fs_bigclock_clock_pane_g3

0xe8e6,	// (0x0007cc0c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x0007e1dc) main_fs_bigclock_clock_pane_g

0xe8ee,	// (0x0007cc14) main_fs_bigclock_clock_pane_t1

0xe8fc,	// (0x0007cc22) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x0007e1e5) main_fs_bigclock_clock_pane_t

0xe90b,	// (0x0007cc31) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe90b,	// (0x0007cc31) list_single_fs_bigclock_indicator_pane

0xe91c,	// (0x0007cc42) list_single_fs_bigclock_pane_ParamLimits

0xe91c,	// (0x0007cc42) list_single_fs_bigclock_pane

0xe983,	// (0x0007cca9) main_fs_bigclock_indicator_pane_t1

0xe992,	// (0x0007ccb8) list_single_fs_bigclock_pane_g1

0xe99a,	// (0x0007ccc0) list_single_fs_bigclock_pane_t1

0x2fca,	// (0x000712f0) main_fs_bigclock_swipe_pane_g1

0xe9d8,	// (0x0007ccfe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x0007e1f6) main_fs_bigclock_swipe_pane_g

0xe9e0,	// (0x0007cd06) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9e0,	// (0x0007cd06) main_fs_bigclock_swipe_pane_t1

0x849a,	// (0x000767c0) call_type_pane_ParamLimits

0x0f26,	// (0x0006f24c) main_btmg_pane

0x4c61,	// (0x00072f87) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4c61,	// (0x00072f87) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x0007e169) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x0007e169) list_single_cale_mrui_row_pane_g

0xda4f,	// (0x0007bd75) list_recal_vselct_arw_lo_pane

0xda57,	// (0x0007bd7d) list_recal_vselct_arw_up_pane

0x4d4a,	// (0x00073070) list_recal_vselct_pane

0xe9fd,	// (0x0007cd23) btmg_button_pane

0xea05,	// (0x0007cd2b) main_btmg_pane_g1

0x0f26,	// (0x0006f24c) bg_button_pane_cp044

0xea0d,	// (0x0007cd33) btmg_button_pane_t1

0x2b87,	// (0x00070ead) aid_listscroll_gen

0x542b,	// (0x00073751) main_cntbar_detail_pane

0xd3d0,	// (0x0007b6f6) list_cmail_folder_pane

0xd3e0,	// (0x0007b706) sp_fs_scroll_pane_cp03_ParamLimits

0xdb37,	// (0x0007be5d) list_single_fs_dyc_pane_cp01_ParamLimits

0xdb37,	// (0x0007be5d) list_single_fs_dyc_pane_cp01

0xea1b,	// (0x0007cd41) aid_size_cmail_indent

0x5ac6,	// (0x00073dec) list_single_dyc_row_pane_cp01

0xea3e,	// (0x0007cd64) cntbar_detail_list_pane_ParamLimits

0xea3e,	// (0x0007cd64) cntbar_detail_list_pane

0xea74,	// (0x0007cd9a) main_cntbar_detail_cont_pane_ParamLimits

0xea74,	// (0x0007cd9a) main_cntbar_detail_cont_pane

0xea80,	// (0x0007cda6) scroll_pane_cp032_ParamLimits

0xea80,	// (0x0007cda6) scroll_pane_cp032

0xea8c,	// (0x0007cdb2) cntbar_detail_list_event_pane_ParamLimits

0xea8c,	// (0x0007cdb2) cntbar_detail_list_event_pane

0xea4a,	// (0x0007cd70) cntbar_detail_list_shct_pane

0xea9c,	// (0x0007cdc2) aid_list_gen

0x183b,	// (0x0006fb61) aid_scroll

0x3ef9,	// (0x0007221f) aid_size_touch_scroll_bar

0xeaa5,	// (0x0007cdcb) aid_list_double

0xdb4e,	// (0x0007be74) aid_list_single

0x4f0f,	// (0x00073235) aid_list_single_lg

0xdb57,	// (0x0007be7d) aid_list_z_g_a_sm

0xdb5f,	// (0x0007be85) aid_list_z_g_d

0xdb67,	// (0x0007be8d) aid_txt_z_prm

0xdb75,	// (0x0007be9b) aid_txt_z_prm_cp01

0xdb83,	// (0x0007bea9) aid_txt_z_sec

0xeaae,	// (0x0007cdd4) main_cntbar_detail_cont_pane_g1_ParamLimits

0xeaae,	// (0x0007cdd4) main_cntbar_detail_cont_pane_g1

0xeabb,	// (0x0007cde1) main_cntbar_detail_cont_pane_g2_ParamLimits

0xeabb,	// (0x0007cde1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x0007e1fb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x0007e1fb) main_cntbar_detail_cont_pane_g

0xeac7,	// (0x0007cded) main_cntbar_detail_cont_pane_t1

0xead5,	// (0x0007cdfb) main_cntbar_detail_cont_pane_t2

0xeae3,	// (0x0007ce09) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x0007e200) main_cntbar_detail_cont_pane_t

0xeaf1,	// (0x0007ce17) cell_cntbar_detail_list_shct_pane_ParamLimits

0xeaf1,	// (0x0007ce17) cell_cntbar_detail_list_shct_pane

0xeb03,	// (0x0007ce29) cntbar_detail_list_shct_pane_g1

0xeb0c,	// (0x0007ce32) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x0007e207) cntbar_detail_list_shct_pane_g

0xeb15,	// (0x0007ce3b) cntbar_detail_list_event_pane_g1_ParamLimits

0xeb15,	// (0x0007ce3b) cntbar_detail_list_event_pane_g1

0xeb21,	// (0x0007ce47) cntbar_detail_list_event_pane_g2_ParamLimits

0xeb21,	// (0x0007ce47) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x0007e20c) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x0007e20c) cntbar_detail_list_event_pane_g

0xeb8d,	// (0x0007ceb3) cntbar_detail_list_event_pane_t1_ParamLimits

0xeb8d,	// (0x0007ceb3) cntbar_detail_list_event_pane_t1

0xeba2,	// (0x0007cec8) cntbar_detail_list_event_pane_t2_ParamLimits

0xeba2,	// (0x0007cec8) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x0007e219) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x0007e219) cntbar_detail_list_event_pane_t

0x2fca,	// (0x000712f0) cell_cntbar_detail_list_shct_pane_g1

0xe39e,	// (0x0007c6c4) navi_pane_mv_g3

0x542b,	// (0x00073751) main_cntbar_detail_pane_ParamLimits

0x0f26,	// (0x0006f24c) main_notif_wgt_pane

0xaa81,	// (0x00078da7) aid_tch_main_mp4_pane_g4

0xaca8,	// (0x00078fce) popup_slider_window_cp02

0x4d4a,	// (0x00073070) list_recal_day_event_pane

0xea24,	// (0x0007cd4a) cntbar_detail_btn_pane_ParamLimits

0xea24,	// (0x0007cd4a) cntbar_detail_btn_pane

0xea30,	// (0x0007cd56) cntbar_detail_btn_pane_cp01_ParamLimits

0xea30,	// (0x0007cd56) cntbar_detail_btn_pane_cp01

0xea4a,	// (0x0007cd70) cntbar_detail_list_shct_pane_ParamLimits

0xea56,	// (0x0007cd7c) cntbar_detail_pane_g1_ParamLimits

0xea56,	// (0x0007cd7c) cntbar_detail_pane_g1

0xea62,	// (0x0007cd88) cntbar_detail_pane_t1_ParamLimits

0xea62,	// (0x0007cd88) cntbar_detail_pane_t1

0xeb2d,	// (0x0007ce53) cntbar_detail_list_event_pane_g3_ParamLimits

0xeb2d,	// (0x0007ce53) cntbar_detail_list_event_pane_g3

0xeb45,	// (0x0007ce6b) cntbar_detail_list_event_pane_g4_ParamLimits

0xeb45,	// (0x0007ce6b) cntbar_detail_list_event_pane_g4

0xeb5d,	// (0x0007ce83) cntbar_detail_list_event_pane_g5_ParamLimits

0xeb5d,	// (0x0007ce83) cntbar_detail_list_event_pane_g5

0xeb75,	// (0x0007ce9b) cntbar_detail_list_event_pane_g6_ParamLimits

0xeb75,	// (0x0007ce9b) cntbar_detail_list_event_pane_g6

0xebb7,	// (0x0007cedd) cntbar_detail_list_event_pane_t3_ParamLimits

0xebb7,	// (0x0007cedd) cntbar_detail_list_event_pane_t3

0xebc9,	// (0x0007ceef) popup_notif_wgt_window_ParamLimits

0xebc9,	// (0x0007ceef) popup_notif_wgt_window

0xebd7,	// (0x0007cefd) popup_submenu_window_cp01_ParamLimits

0xebd7,	// (0x0007cefd) popup_submenu_window_cp01

0xe3df,	// (0x0007c705) bg_popup_window_pane_cp10

0xebe3,	// (0x0007cf09) listscroll_notif_wgt_pane

0xebeb,	// (0x0007cf11) list_notif_wgt_window

0xebf4,	// (0x0007cf1a) scroll_pane_cp033

0xebfd,	// (0x0007cf23) list_notif_wgt_row_pane_ParamLimits

0xebfd,	// (0x0007cf23) list_notif_wgt_row_pane

0xec0f,	// (0x0007cf35) aid_size_list_notif_wgt_del

0xec18,	// (0x0007cf3e) list_notif_wgt_row_pane_g1

0xec20,	// (0x0007cf46) list_notif_wgt_row_pane_g2

0xec28,	// (0x0007cf4e) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x0007e220) list_notif_wgt_row_pane_g

0xec31,	// (0x0007cf57) list_notif_wgt_row_pane_t1

0xec3f,	// (0x0007cf65) list_notif_wgt_row_pane_t2

0xec4d,	// (0x0007cf73) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x0007e227) list_notif_wgt_row_pane_t

0x3bf1,	// (0x00071f17) list_recal_day_event_pane_g1

0xec5b,	// (0x0007cf81) list_recal_day_event_pane_t1

0x0f26,	// (0x0006f24c) bg_button_pane_cp045

0xec6a,	// (0x0007cf90) cntbar_detail_btn_pane_t1

0x2b8f,	// (0x00070eb5) main_callh_pane_ParamLimits

0x2b8f,	// (0x00070eb5) main_callh_pane

0x0f26,	// (0x0006f24c) main_coverflow0_pane

0x0f26,	// (0x0006f24c) main_wgtman_pane

0xcaad,	// (0x0007add3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcaad,	// (0x0007add3) main_fs_bigclock_unlock_btn_pane

0xd360,	// (0x0007b686) bg_button_pane_cp16

0xd379,	// (0x0007b69f) cell_tport_appsw_pane_g3

0xec78,	// (0x0007cf9e) cf0_flow_pane_ParamLimits

0xec78,	// (0x0007cf9e) cf0_flow_pane

0xec87,	// (0x0007cfad) listscroll_cf0_pane

0xec90,	// (0x0007cfb6) main_cf0_pane_g1

0xec9a,	// (0x0007cfc0) main_cf0_pane_t1_ParamLimits

0xec9a,	// (0x0007cfc0) main_cf0_pane_t1

0xecac,	// (0x0007cfd2) main_cf0_pane_t2_ParamLimits

0xecac,	// (0x0007cfd2) main_cf0_pane_t2

0x0001,

0xff08,	// (0x0007e22e) main_cf0_pane_t_ParamLimits

0xff08,	// (0x0007e22e) main_cf0_pane_t

0xecbe,	// (0x0007cfe4) scroll_pane_cp11

0xecc7,	// (0x0007cfed) cf0_flow_pane_g1

0xeccf,	// (0x0007cff5) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x0007e233) cf0_flow_pane_g

0xecd7,	// (0x0007cffd) cf0_flow_pane_t1

0x0f26,	// (0x0006f24c) main_call6_pane

0x0f26,	// (0x0006f24c) main_calllock_pane

0xece5,	// (0x0007d00b) call6_btn_grp_pane_ParamLimits

0xece5,	// (0x0007d00b) call6_btn_grp_pane

0xecf2,	// (0x0007d018) call6_pane_g1_ParamLimits

0xecf2,	// (0x0007d018) call6_pane_g1

0xecff,	// (0x0007d025) popup_call6_1st_window_ParamLimits

0xecff,	// (0x0007d025) popup_call6_1st_window

0xed0b,	// (0x0007d031) popup_call6_2nd_window_ParamLimits

0xed0b,	// (0x0007d031) popup_call6_2nd_window

0xed17,	// (0x0007d03d) cell_call6_btn_pane_ParamLimits

0xed17,	// (0x0007d03d) cell_call6_btn_pane

0xe3df,	// (0x0007c705) bg_popup_call2_in_pane_cp03

0xed26,	// (0x0007d04c) popup_call6_1st_window_g1

0xed2e,	// (0x0007d054) popup_call6_1st_window_g2

0xed36,	// (0x0007d05c) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x0007e238) popup_call6_1st_window_g

0xed3e,	// (0x0007d064) popup_call6_1st_window_t1

0xed4d,	// (0x0007d073) popup_call6_1st_window_t2

0xed5b,	// (0x0007d081) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x0007e23f) popup_call6_1st_window_t

0xe3df,	// (0x0007c705) bg_popup_call2_in_pane_cp04

0xed26,	// (0x0007d04c) popup_call6_2nd_window_g1

0xed2e,	// (0x0007d054) popup_call6_2nd_window_g2

0xed36,	// (0x0007d05c) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x0007e238) popup_call6_2nd_window_g

0xed3e,	// (0x0007d064) popup_call6_2nd_window_t1

0x0f26,	// (0x0006f24c) bg_button_pane_cp15

0xed69,	// (0x0007d08f) cell_call6_btn_pane_g1

0xed72,	// (0x0007d098) cell_call6_btn_pane_t1

0xed81,	// (0x0007d0a7) listscroll_wgtman_pane_ParamLimits

0xed81,	// (0x0007d0a7) listscroll_wgtman_pane

0xed8e,	// (0x0007d0b4) wgtman_btn_pane_ParamLimits

0xed8e,	// (0x0007d0b4) wgtman_btn_pane

0xe220,	// (0x0007c546) aid_scroll_copy1

0xed9a,	// (0x0007d0c0) list_wgtman_pane

0xeda4,	// (0x0007d0ca) wgtman_btn_pane_g1_ParamLimits

0xeda4,	// (0x0007d0ca) wgtman_btn_pane_g1

0xedb0,	// (0x0007d0d6) wgtman_btn_pane_t1_ParamLimits

0xedb0,	// (0x0007d0d6) wgtman_btn_pane_t1

0xedc2,	// (0x0007d0e8) wgtman_btn_pane_t2_ParamLimits

0xedc2,	// (0x0007d0e8) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x0007e246) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x0007e246) wgtman_btn_pane_t

0xedd4,	// (0x0007d0fa) listrow_wgtman_pane_ParamLimits

0xedd4,	// (0x0007d0fa) listrow_wgtman_pane

0xede5,	// (0x0007d10b) listrow_wgtman_pane_g1

0xedee,	// (0x0007d114) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x0007e24b) listrow_wgtman_pane_g

0xdb91,	// (0x0007beb7) listrow_wgtman_pane_t1

0xdb9f,	// (0x0007bec5) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x0007e250) listrow_wgtman_pane_t

0xdbad,	// (0x0007bed3) wait_bar_pane_cp09

0xedf6,	// (0x0007d11c) main_calllock_btn_pane

0xedfe,	// (0x0007d124) main_calllock_pane_g1

0x0f26,	// (0x0006f24c) bg_button_pane_cp17

0xee07,	// (0x0007d12d) main_calllock_btn_pane_g1

0xee10,	// (0x0007d136) main_calllock_btn_pane_t1

0x0f26,	// (0x0006f24c) main_dialer3_pane

0x0f26,	// (0x0006f24c) main_fmrd2_pane

0x2fca,	// (0x000712f0) main_fs_bigclock_unlock_btn_pane_g1

0xee27,	// (0x0007d14d) main_fs_bigclock_unlock_btn_pane_t1

0xee35,	// (0x0007d15b) area_fmrd2_info_pane_ParamLimits

0xee35,	// (0x0007d15b) area_fmrd2_info_pane

0xee42,	// (0x0007d168) area_fmrd2_visual_pane_ParamLimits

0xee42,	// (0x0007d168) area_fmrd2_visual_pane

0xee50,	// (0x0007d176) fmrd2_indi_pane_ParamLimits

0xee50,	// (0x0007d176) fmrd2_indi_pane

0xee5d,	// (0x0007d183) area_fmrd2_visual_pane_g1

0xee65,	// (0x0007d18b) area_fmrd2_visual_pane_t1

0xee73,	// (0x0007d199) area_fmrd2_visual_pane_t2

0xee81,	// (0x0007d1a7) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x0007e25a) area_fmrd2_visual_pane_t

0xee8f,	// (0x0007d1b5) area_fmrd2_info_pane_g1

0xee97,	// (0x0007d1bd) area_fmrd2_info_pane_t1

0xeea5,	// (0x0007d1cb) area_fmrd2_info_pane_t2

0xeeb3,	// (0x0007d1d9) area_fmrd2_info_pane_t3

0xeec1,	// (0x0007d1e7) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x0007e261) area_fmrd2_info_pane_t

0xeecf,	// (0x0007d1f5) fmrd2_indi_pane_t1

0xeedd,	// (0x0007d203) fmrd2_indi_pane_t2

0xeeeb,	// (0x0007d211) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x0007e26a) fmrd2_indi_pane_t

0x48ba,	// (0x00072be0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x48ba,	// (0x00072be0) list_single_fs_bigclock_indicator_pane_g5

0x495c,	// (0x00072c82) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x495c,	// (0x00072c82) list_single_fs_bigclock_indicator_pane_t5

0xd619,	// (0x0007b93f) aid_cell_bcale_month_pane_ParamLimits

0xd619,	// (0x0007b93f) aid_cell_bcale_month_pane

0xd625,	// (0x0007b94b) bcale_month_pane_ParamLimits

0xd625,	// (0x0007b94b) bcale_month_pane

0xd631,	// (0x0007b957) bcale_preview_pane_ParamLimits

0xd631,	// (0x0007b957) bcale_preview_pane

0xe99a,	// (0x0007ccc0) list_single_fs_bigclock_pane_t1_ParamLimits

0xe9b4,	// (0x0007ccda) list_single_fs_bigclock_pane_t2_ParamLimits

0xe9b4,	// (0x0007ccda) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x0007e1f1) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x0007e1f1) list_single_fs_bigclock_pane_t

0xee1f,	// (0x0007d145) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x0007e255) main_fs_bigclock_unlock_btn_pane_g

0xeef9,	// (0x0007d21f) aid_dia3_key_size_ParamLimits

0xeef9,	// (0x0007d21f) aid_dia3_key_size

0xef05,	// (0x0007d22b) aid_dia3_listrow_size_ParamLimits

0xef05,	// (0x0007d22b) aid_dia3_listrow_size

0xef11,	// (0x0007d237) dia3_keypad_fun_pane_ParamLimits

0xef11,	// (0x0007d237) dia3_keypad_fun_pane

0xef1d,	// (0x0007d243) dia3_keypad_num_pane_ParamLimits

0xef1d,	// (0x0007d243) dia3_keypad_num_pane

0xef29,	// (0x0007d24f) dia3_listscroll_pane_ParamLimits

0xef29,	// (0x0007d24f) dia3_listscroll_pane

0xef35,	// (0x0007d25b) dia3_numentry_pane_ParamLimits

0xef35,	// (0x0007d25b) dia3_numentry_pane

0xef41,	// (0x0007d267) dia3_list_pane

0xef4a,	// (0x0007d270) scroll_pane_cp12

0x0f26,	// (0x0006f24c) bg_dia3_numentry_pane

0xef53,	// (0x0007d279) dia3_numentry_pane_t1

0xef62,	// (0x0007d288) cell_dia3_key_num_pane

0xef6a,	// (0x0007d290) cell_dia3_key0_fun_pane_ParamLimits

0xef6a,	// (0x0007d290) cell_dia3_key0_fun_pane

0xef77,	// (0x0007d29d) cell_dia3_key1_fun_pane_ParamLimits

0xef77,	// (0x0007d29d) cell_dia3_key1_fun_pane

0xef84,	// (0x0007d2aa) dia3_listrow_pane

0x45e7,	// (0x0007290d) bg_dia3_numentry_pane_g1

0x0f26,	// (0x0006f24c) bg_button_pane_cp21

0xef8d,	// (0x0007d2b3) cell_dia3_key_num_pane_t1

0xef9b,	// (0x0007d2c1) cell_dia3_key_num_pane_t2

0xefaa,	// (0x0007d2d0) cell_dia3_key_num_pane_t3

0xefb9,	// (0x0007d2df) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x0007e271) cell_dia3_key_num_pane_t

0x0f26,	// (0x0006f24c) bg_button_pane_cp19

0xefc8,	// (0x0007d2ee) cell_dia3_key0_fun_pane_g1

0x0f26,	// (0x0006f24c) bg_button_pane_cp20

0xefd0,	// (0x0007d2f6) cell_dia3_key1_fun_pane_g1

0xefd8,	// (0x0007d2fe) area_left_week_number_pane

0xefe1,	// (0x0007d307) area_top_day_name_pane

0xefea,	// (0x0007d310) frame_month_view_pane

0xeff2,	// (0x0007d318) grid_month_view_pane

0xeffc,	// (0x0007d322) cell_top_day_name_pane_ParamLimits

0xeffc,	// (0x0007d322) cell_top_day_name_pane

0xf012,	// (0x0007d338) cell_area_left_week_number_pane_ParamLimits

0xf012,	// (0x0007d338) cell_area_left_week_number_pane

0xf026,	// (0x0007d34c) cell_month_view_pane_ParamLimits

0xf026,	// (0x0007d34c) cell_month_view_pane

0xf041,	// (0x0007d367) frm_month_g1

0xf04a,	// (0x0007d370) frm_month_g2

0xf052,	// (0x0007d378) frm_month_g3

0xf05a,	// (0x0007d380) frm_month_g4

0xf062,	// (0x0007d388) frm_month_g5

0xf06a,	// (0x0007d390) frm_month_g6

0xf072,	// (0x0007d398) frm_month_g7

0xf07a,	// (0x0007d3a0) frm_month_g8

0xf083,	// (0x0007d3a9) frm_month_g9

0xf08c,	// (0x0007d3b2) frm_month_g10

0xf095,	// (0x0007d3bb) frm_month_g11

0xf09e,	// (0x0007d3c4) frm_month_g12

0xf0a7,	// (0x0007d3cd) frm_month_g13

0xf0b0,	// (0x0007d3d6) frm_month_g14

0xf0b9,	// (0x0007d3df) frm_month_g15

0xf0c2,	// (0x0007d3e8) frm_month_g16

0x000f,

0xff54,	// (0x0007e27a) frm_month_g

0xf0cb,	// (0x0007d3f1) cell_top_day_name_pane_t1

0xf0da,	// (0x0007d400) cell_area_left_week_number_pane_g1

0xf0cb,	// (0x0007d3f1) cell_area_left_week_number_pane_t1

0x2fca,	// (0x000712f0) cell_month_view_pane_g1

0xf0e2,	// (0x0007d408) cell_month_view_pane_t1

0x0f26,	// (0x0006f24c) main_fps_pane

0xced7,	// (0x0007b1fd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xced7,	// (0x0007b1fd) cmail_ddmenu_btn02_pane_cp1

0xcef3,	// (0x0007b219) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcef3,	// (0x0007b219) cmail_ddmenu_btn02_pane_cp2

0xda1f,	// (0x0007bd45) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xda1f,	// (0x0007bd45) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x0007e1a2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x0007e1a2) cmail_ddmenu_btn02_pane_g

0xda3d,	// (0x0007bd63) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xda3d,	// (0x0007bd63) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x0007e1a7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x0007e1a7) cmail_ddmenu_btn02_pane_t

0xf0f1,	// (0x0007d417) fps_text_pane_ParamLimits

0xf0f1,	// (0x0007d417) fps_text_pane

0xf0fe,	// (0x0007d424) main_fps_pane_g1_ParamLimits

0xf0fe,	// (0x0007d424) main_fps_pane_g1

0xf10a,	// (0x0007d430) wait_bar_pane_cp010_ParamLimits

0xf10a,	// (0x0007d430) wait_bar_pane_cp010

0xf116,	// (0x0007d43c) fps_text_pane_t1_ParamLimits

0xf116,	// (0x0007d43c) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
