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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004b187 };

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
0x10ea,	// (0x0004c271) Screen

0x10f6,	// (0x0004c27d) application_window

0x1142,	// (0x0004c2c9) area_bottom_pane_ParamLimits

0x1142,	// (0x0004c2c9) area_bottom_pane

0x117b,	// (0x0004c302) area_top_pane_ParamLimits

0x117b,	// (0x0004c302) area_top_pane

0x97e5,	// (0x0005496c) call_video_uplink_pane_ParamLimits

0x97e5,	// (0x0005496c) call_video_uplink_pane

0x1209,	// (0x0004c390) main_pane_ParamLimits

0x1209,	// (0x0004c390) main_pane

0xdde9,	// (0x00058f70) context_pane

0x44b2,	// (0x0004f639) navi_pane

0x44e4,	// (0x0004f66b) popup_cale_events_window_ParamLimits

0x44e4,	// (0x0004f66b) popup_cale_events_window

0xddfc,	// (0x00058f83) popup_mup_playback_window

0x44fc,	// (0x0004f683) signal_pane

0xb86d,	// (0x000569f4) main_browser_pane

0xbf6b,	// (0x000570f2) main_burst_pane

0x4212,	// (0x0004f399) main_calc_pane

0xddcf,	// (0x00058f56) main_cale_day_pane

0x1851,	// (0x0004c9d8) main_cale_month_pane

0xddcf,	// (0x00058f56) main_cale_week_pane

0xbf6b,	// (0x000570f2) main_call_pane

0xb54d,	// (0x000566d4) main_call_poc_pane

0xbf6b,	// (0x000570f2) main_camera_pane

0xbf6b,	// (0x000570f2) main_chi_dic_pane

0xc74e,	// (0x000578d5) main_clock_pane

0xb54d,	// (0x000566d4) main_fmradio_pane

0xbf6b,	// (0x000570f2) main_graph_messa_pane

0xb54d,	// (0x000566d4) main_help_pane

0xb86d,	// (0x000569f4) main_im_pane

0xb7a8,	// (0x0005692f) main_image_pane_ParamLimits

0xb7a8,	// (0x0005692f) main_image_pane

0xb54d,	// (0x000566d4) main_location2_pane

0xbf6b,	// (0x000570f2) main_location_pane

0xb7a8,	// (0x0005692f) main_messa_pane

0xb54d,	// (0x000566d4) main_mp2_pane

0xbf6b,	// (0x000570f2) main_mp_pane

0xb54d,	// (0x000566d4) main_msg_pane

0xb54d,	// (0x000566d4) main_mup_eq_pane

0xb54d,	// (0x000566d4) main_mup_pane

0xb86d,	// (0x000569f4) main_notes_pane

0xb54d,	// (0x000566d4) main_pec_pane

0xb54d,	// (0x000566d4) main_phob_pane

0xb54d,	// (0x000566d4) main_pinb_pane

0xb54d,	// (0x000566d4) main_postcard_pane

0xb54d,	// (0x000566d4) main_qdial_pane

0xbf6b,	// (0x000570f2) main_skin_pane

0xb54d,	// (0x000566d4) main_smil2_pane

0xbf6b,	// (0x000570f2) main_smil_pane

0xbf6b,	// (0x000570f2) main_video_pane

0xbf6b,	// (0x000570f2) main_video_tele_pane

0xb7a8,	// (0x0005692f) main_viewer_pane_ParamLimits

0xb7a8,	// (0x0005692f) main_viewer_pane

0xbf6b,	// (0x000570f2) main_vorec_pane

0x4266,	// (0x0004f3ed) popup_blid_sat_info_window_ParamLimits

0x4266,	// (0x0004f3ed) popup_blid_sat_info_window

0x42be,	// (0x0004f445) popup_dyc_status_message_window_ParamLimits

0x42be,	// (0x0004f445) popup_dyc_status_message_window

0x42d8,	// (0x0004f45f) popup_grid_large_graphic_window_ParamLimits

0x42d8,	// (0x0004f45f) popup_grid_large_graphic_window

0x4394,	// (0x0004f51b) popup_loc_request_window_ParamLimits

0x4394,	// (0x0004f51b) popup_loc_request_window

0x448a,	// (0x0004f611) popup_wml_address_window_ParamLimits

0x448a,	// (0x0004f611) popup_wml_address_window

0x404c,	// (0x0004f1d3) call_muted_g1

0x3d01,	// (0x0004ee88) popup_call_audio_conf_window_ParamLimits

0x3d01,	// (0x0004ee88) popup_call_audio_conf_window

0x4060,	// (0x0004f1e7) popup_call_audio_first_window_ParamLimits

0x4060,	// (0x0004f1e7) popup_call_audio_first_window

0x40d6,	// (0x0004f25d) popup_call_audio_in_window_ParamLimits

0x40d6,	// (0x0004f25d) popup_call_audio_in_window

0x4112,	// (0x0004f299) popup_call_audio_out_window_ParamLimits

0x4112,	// (0x0004f299) popup_call_audio_out_window

0x414c,	// (0x0004f2d3) popup_call_audio_second_window_ParamLimits

0x414c,	// (0x0004f2d3) popup_call_audio_second_window

0x41a2,	// (0x0004f329) popup_call_audio_wait_window_ParamLimits

0x41a2,	// (0x0004f329) popup_call_audio_wait_window

0x41d7,	// (0x0004f35e) popup_number_entry_window_ParamLimits

0x41d7,	// (0x0004f35e) popup_number_entry_window

0xb13a,	// (0x000562c1) bg_popup_call_pane_cp05_ParamLimits

0xb13a,	// (0x000562c1) bg_popup_call_pane_cp05

0xb15a,	// (0x000562e1) popup_number_entry_window_t1

0xb16d,	// (0x000562f4) popup_number_entry_window_t2

0xb17f,	// (0x00056306) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005a251) popup_number_entry_window_t

0xb191,	// (0x00056318) text_title_cp2

0xb1a4,	// (0x0005632b) bg_popup_call_pane_cp_ParamLimits

0xb1a4,	// (0x0005632b) bg_popup_call_pane_cp

0xb1b2,	// (0x00056339) call_thumbnail_pane

0xb1ba,	// (0x00056341) popup_call_audio_in_window_g1_ParamLimits

0xb1ba,	// (0x00056341) popup_call_audio_in_window_g1

0xb1c6,	// (0x0005634d) popup_call_audio_in_window_g2_ParamLimits

0xb1c6,	// (0x0005634d) popup_call_audio_in_window_g2

0xb1d2,	// (0x00056359) popup_call_audio_in_window_g3_ParamLimits

0xb1d2,	// (0x00056359) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005a25a) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005a25a) popup_call_audio_in_window_g

0xb1de,	// (0x00056365) popup_call_audio_in_window_t1_ParamLimits

0xb1de,	// (0x00056365) popup_call_audio_in_window_t1

0xb1fa,	// (0x00056381) popup_call_audio_in_window_t2_ParamLimits

0xb1fa,	// (0x00056381) popup_call_audio_in_window_t2

0xb216,	// (0x0005639d) popup_call_audio_in_window_t3_ParamLimits

0xb216,	// (0x0005639d) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005a261) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005a261) popup_call_audio_in_window_t

0xb1a4,	// (0x0005632b) bg_popup_call_pane_cp01_ParamLimits

0xb1a4,	// (0x0005632b) bg_popup_call_pane_cp01

0xb1b2,	// (0x00056339) call_thumbnail_pane_cp02

0xb229,	// (0x000563b0) call_type_pane_cp022

0xb231,	// (0x000563b8) popup_call_audio_out_window_g1_ParamLimits

0xb231,	// (0x000563b8) popup_call_audio_out_window_g1

0xb243,	// (0x000563ca) popup_call_audio_out_window_g2_ParamLimits

0xb243,	// (0x000563ca) popup_call_audio_out_window_g2

0xb24f,	// (0x000563d6) popup_call_audio_out_window_g3_ParamLimits

0xb24f,	// (0x000563d6) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005a268) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005a268) popup_call_audio_out_window_g

0xb261,	// (0x000563e8) popup_call_audio_out_window_t1_ParamLimits

0xb261,	// (0x000563e8) popup_call_audio_out_window_t1

0xb279,	// (0x00056400) popup_call_audio_out_window_t2_ParamLimits

0xb279,	// (0x00056400) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005a26f) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005a26f) popup_call_audio_out_window_t

0xb28e,	// (0x00056415) bg_popup_call_pane_ParamLimits

0xb28e,	// (0x00056415) bg_popup_call_pane

0x13c5,	// (0x0004c54c) call_thumbnail_pane_cp_ParamLimits

0x13c5,	// (0x0004c54c) call_thumbnail_pane_cp

0xb312,	// (0x00056499) call_type_pane_cp01_ParamLimits

0xb312,	// (0x00056499) call_type_pane_cp01

0xb356,	// (0x000564dd) popup_call_audio_first_window_g1_ParamLimits

0xb356,	// (0x000564dd) popup_call_audio_first_window_g1

0xb3a2,	// (0x00056529) popup_call_audio_first_window_g2_ParamLimits

0xb3a2,	// (0x00056529) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005a274) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005a274) popup_call_audio_first_window_g

0xb3e6,	// (0x0005656d) popup_call_audio_first_window_t1_ParamLimits

0xb3e6,	// (0x0005656d) popup_call_audio_first_window_t1

0xb492,	// (0x00056619) popup_call_audio_first_window_t4_ParamLimits

0xb492,	// (0x00056619) popup_call_audio_first_window_t4

0xb51e,	// (0x000566a5) popup_call_audio_first_window_t5_ParamLimits

0xb51e,	// (0x000566a5) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005a279) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005a279) popup_call_audio_first_window_t

0xb54d,	// (0x000566d4) bg_popup_call_pane_cp02

0xb557,	// (0x000566de) call_type_pane_cp023

0xb55f,	// (0x000566e6) popup_call_audio_wait_window_g1

0xb567,	// (0x000566ee) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005a280) popup_call_audio_wait_window_g

0xb56f,	// (0x000566f6) popup_call_audio_wait_window_t3

0xb57d,	// (0x00056704) bg_popup_call_pane_cp03_ParamLimits

0xb57d,	// (0x00056704) bg_popup_call_pane_cp03

0xb5dd,	// (0x00056764) call_thumbnail_pane_cp011_ParamLimits

0xb5dd,	// (0x00056764) call_thumbnail_pane_cp011

0xb5e9,	// (0x00056770) call_type_pane_cp034_ParamLimits

0xb5e9,	// (0x00056770) call_type_pane_cp034

0xb625,	// (0x000567ac) popup_call_audio_second_window_g1_ParamLimits

0xb625,	// (0x000567ac) popup_call_audio_second_window_g1

0xb661,	// (0x000567e8) popup_call_audio_second_window_g2_ParamLimits

0xb661,	// (0x000567e8) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005a285) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005a285) popup_call_audio_second_window_g

0xb69d,	// (0x00056824) popup_call_audio_second_window_t1_ParamLimits

0xb69d,	// (0x00056824) popup_call_audio_second_window_t1

0xb71e,	// (0x000568a5) popup_call_audio_second_window_t2_ParamLimits

0xb71e,	// (0x000568a5) popup_call_audio_second_window_t2

0xb754,	// (0x000568db) popup_call_audio_second_window_t3_ParamLimits

0xb754,	// (0x000568db) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005a28a) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005a28a) popup_call_audio_second_window_t

0xb54d,	// (0x000566d4) bg_popup_call_pane_cp04

0xb78a,	// (0x00056911) list_conf_pane

0xb792,	// (0x00056919) popup_call_audio_conf_window_t1

0xb7a0,	// (0x00056927) call_thumbnail_pane_g1

0xb7a8,	// (0x0005692f) bg_pinb_pane_ParamLimits

0xb7a8,	// (0x0005692f) bg_pinb_pane

0xb7b6,	// (0x0005693d) find_pinb_pane

0xb7bf,	// (0x00056946) listscroll_pinb_pane_ParamLimits

0xb7bf,	// (0x00056946) listscroll_pinb_pane

0xb7ce,	// (0x00056955) pinb_bg_pane_g1

0x13e9,	// (0x0004c570) pinb_bg_pane_g2

0x13f5,	// (0x0004c57c) pinb_bg_pane_g3

0x1401,	// (0x0004c588) pinb_bg_pane_g4

0x140d,	// (0x0004c594) pinb_bg_pane_g5

0x1419,	// (0x0004c5a0) pinb_bg_pane_g6

0x1424,	// (0x0004c5ab) pinb_bg_pane_g7

0x142f,	// (0x0004c5b6) pinb_bg_pane_g8

0x143a,	// (0x0004c5c1) pinb_bg_pane_g9

0x1444,	// (0x0004c5cb) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005a291) pinb_bg_pane_g

0x1461,	// (0x0004c5e8) grid_pinb_pane

0x146a,	// (0x0004c5f1) list_pinb_pane

0x1473,	// (0x0004c5fa) scroll_pane_cp01_ParamLimits

0x1473,	// (0x0004c5fa) scroll_pane_cp01

0xb7d8,	// (0x0005695f) find_pinb_pane_g1_ParamLimits

0xb7d8,	// (0x0005695f) find_pinb_pane_g1

0xb7f0,	// (0x00056977) find_pinb_pane_t1

0xb802,	// (0x00056989) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005a2ab) find_pinb_pane_t

0xb817,	// (0x0005699e) input_focus_pane_cp01_ParamLimits

0xb817,	// (0x0005699e) input_focus_pane_cp01

0x1485,	// (0x0004c60c) cell_pinb_pane_ParamLimits

0x1485,	// (0x0004c60c) cell_pinb_pane

0x14ae,	// (0x0004c635) cell_pinb_pane_g1_ParamLimits

0x14ae,	// (0x0004c635) cell_pinb_pane_g1

0x14be,	// (0x0004c645) cell_pinb_pane_g2_ParamLimits

0x14be,	// (0x0004c645) cell_pinb_pane_g2

0xb823,	// (0x000569aa) cell_pinb_pane_g3_ParamLimits

0xb823,	// (0x000569aa) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005a2b0) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005a2b0) cell_pinb_pane_g

0xb54d,	// (0x000566d4) grid_highlight_pane_cp01

0x14ca,	// (0x0004c651) list_pinb_item_pane_ParamLimits

0x14ca,	// (0x0004c651) list_pinb_item_pane

0xb54d,	// (0x000566d4) list_highlight_pane_cp02

0x14dc,	// (0x0004c663) list_pinb_item_pane_g1_ParamLimits

0x14dc,	// (0x0004c663) list_pinb_item_pane_g1

0x14e9,	// (0x0004c670) list_pinb_item_pane_g2_ParamLimits

0x14e9,	// (0x0004c670) list_pinb_item_pane_g2

0x14f5,	// (0x0004c67c) list_pinb_item_pane_g3_ParamLimits

0x14f5,	// (0x0004c67c) list_pinb_item_pane_g3

0x1506,	// (0x0004c68d) list_pinb_item_pane_g4_ParamLimits

0x1506,	// (0x0004c68d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005a2b7) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005a2b7) list_pinb_item_pane_g

0x1512,	// (0x0004c699) list_pinb_item_pane_t1_ParamLimits

0x1512,	// (0x0004c699) list_pinb_item_pane_t1

0x1547,	// (0x0004c6ce) calc_display_pane

0x156f,	// (0x0004c6f6) calc_paper_pane

0x1592,	// (0x0004c719) grid_calc_pane

0xb54d,	// (0x000566d4) bg_list_pane_cp01

0x15c0,	// (0x0004c747) clock_g1

0x15c8,	// (0x0004c74f) clock_g2

0x0001,

0xf139,	// (0x0005a2c0) clock_g

0x15d0,	// (0x0004c757) clock_t1_ParamLimits

0x15d0,	// (0x0004c757) clock_t1

0x15e5,	// (0x0004c76c) clock_t2_ParamLimits

0x15e5,	// (0x0004c76c) clock_t2

0x15f7,	// (0x0004c77e) clock_t3_ParamLimits

0x15f7,	// (0x0004c77e) clock_t3

0x1609,	// (0x0004c790) clock_t4_ParamLimits

0x1609,	// (0x0004c790) clock_t4

0x161b,	// (0x0004c7a2) clock_t5_ParamLimits

0x161b,	// (0x0004c7a2) clock_t5

0x1630,	// (0x0004c7b7) clock_t6_ParamLimits

0x1630,	// (0x0004c7b7) clock_t6

0x1642,	// (0x0004c7c9) clock_t7_ParamLimits

0x1642,	// (0x0004c7c9) clock_t7

0x1654,	// (0x0004c7db) clock_t8_ParamLimits

0x1654,	// (0x0004c7db) clock_t8

0x1668,	// (0x0004c7ef) clock_t9_ParamLimits

0x1668,	// (0x0004c7ef) clock_t9

0x0008,

0xf13e,	// (0x0005a2c5) clock_t_ParamLimits

0xf13e,	// (0x0005a2c5) clock_t

0xb82f,	// (0x000569b6) popup_clock_analogue_window_cp02

0xb82f,	// (0x000569b6) popup_clock_digital_window_cp01

0xb837,	// (0x000569be) listscroll_help_pane

0xb54d,	// (0x000566d4) phob_pre_status_pane

0xb841,	// (0x000569c8) grid_qdial_pane

0xb7a8,	// (0x0005692f) listscroll_mce_pane

0xb7a8,	// (0x0005692f) bg_notes_pane

0xb84b,	// (0x000569d2) list_notes_pane

0x167c,	// (0x0004c803) scroll_pane_cp06

0xb859,	// (0x000569e0) bg_calc_paper_pane

0x980b,	// (0x00054992) list_calc_pane

0xb86d,	// (0x000569f4) bg_calc_display_pane

0x1690,	// (0x0004c817) calc_display_pane_t1

0x16a2,	// (0x0004c829) calc_display_pane_t2

0x9825,	// (0x000549ac) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005a2d8) calc_display_pane_t

0x16b4,	// (0x0004c83b) cell_calc_pane_ParamLimits

0x16b4,	// (0x0004c83b) cell_calc_pane

0xb879,	// (0x00056a00) bg_calc_paper_pane_g1

0xb885,	// (0x00056a0c) bg_calc_paper_pane_g2

0xb891,	// (0x00056a18) bg_calc_paper_pane_g3

0xb89d,	// (0x00056a24) bg_calc_paper_pane_g4

0xbde2,	// (0x00056f69) bg_calc_paper_pane_g5

0x16e9,	// (0x0004c870) bg_calc_paper_pane_g6

0x16f8,	// (0x0004c87f) bg_calc_paper_pane_g7

0x1707,	// (0x0004c88e) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005a2df) bg_calc_paper_pane_g

0x171a,	// (0x0004c8a1) calc_bg_paper_pane_g9

0x172d,	// (0x0004c8b4) list_calc_item_pane_ParamLimits

0x172d,	// (0x0004c8b4) list_calc_item_pane

0xbdee,	// (0x00056f75) list_calc_item_pane_g1

0x9837,	// (0x000549be) list_calc_item_pane_t1_ParamLimits

0x9837,	// (0x000549be) list_calc_item_pane_t1

0x1742,	// (0x0004c8c9) list_calc_item_pane_t2_ParamLimits

0x1742,	// (0x0004c8c9) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005a2f0) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005a2f0) list_calc_item_pane_t

0xbdfb,	// (0x00056f82) cell_calc_pane_g1

0xbe05,	// (0x00056f8c) grid_highlight_pane_cp02

0x1774,	// (0x0004c8fb) bg_calc_display_pane_g1

0x177d,	// (0x0004c904) bg_calc_display_pane_g2

0x1787,	// (0x0004c90e) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005a2fa) bg_calc_display_pane_g

0x1790,	// (0x0004c917) cell_qdial_pane_ParamLimits

0x1790,	// (0x0004c917) cell_qdial_pane

0x17a4,	// (0x0004c92b) cell_qdial_pane_g1_ParamLimits

0x17a4,	// (0x0004c92b) cell_qdial_pane_g1

0x17ba,	// (0x0004c941) cell_qdial_pane_g2_ParamLimits

0x17ba,	// (0x0004c941) cell_qdial_pane_g2

0xbe27,	// (0x00056fae) cell_qdial_pane_g3_ParamLimits

0xbe27,	// (0x00056fae) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005a301) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005a301) cell_qdial_pane_g

0x17e1,	// (0x0004c968) cell_qdial_pane_t1_ParamLimits

0x17e1,	// (0x0004c968) cell_qdial_pane_t1

0x17f9,	// (0x0004c980) cell_qdial_pane_t2_ParamLimits

0x17f9,	// (0x0004c980) cell_qdial_pane_t2

0x180c,	// (0x0004c993) cell_qdial_pane_t3_ParamLimits

0x180c,	// (0x0004c993) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005a30a) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005a30a) cell_qdial_pane_t

0xb54d,	// (0x000566d4) grid_highlight_pane_cp04

0xbe33,	// (0x00056fba) thumbnail_qdial_pane_ParamLimits

0xbe33,	// (0x00056fba) thumbnail_qdial_pane

0xbe8f,	// (0x00057016) list_help_pane

0xbe98,	// (0x0005701f) scroll_pane_cp02

0x181f,	// (0x0004c9a6) help_list_pane_t1_ParamLimits

0x181f,	// (0x0004c9a6) help_list_pane_t1

0x9849,	// (0x000549d0) bg_notes_pane_g2

0x9851,	// (0x000549d8) bg_notes_pane_g3

0x9859,	// (0x000549e0) notes_bg_pane_g1

0x9861,	// (0x000549e8) notes_bg_pane_g4

0x9869,	// (0x000549f0) notes_bg_pane_g5

0x9871,	// (0x000549f8) notes_bg_pane_g6

0x9879,	// (0x00054a00) notes_bg_pane_g7

0x9881,	// (0x00054a08) notes_bg_pane_g8

0x9889,	// (0x00054a10) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005a328) notes_bg_pane_g

0x183c,	// (0x0004c9c3) list_notes_text_pane_ParamLimits

0x183c,	// (0x0004c9c3) list_notes_text_pane

0xbea1,	// (0x00057028) list_notes_text_pane_g1

0x01f9,	// (0x0004b380) list_notes_text_pane_t1

0x1851,	// (0x0004c9d8) listscroll_cale_week_pane

0x187d,	// (0x0004ca04) bg_cale_heading_pane

0xbec4,	// (0x0005704b) bg_cale_pane_cp01

0x1895,	// (0x0004ca1c) cale_week_corner_pane

0x18b4,	// (0x0004ca3b) cale_week_day_heading_pane

0x18d1,	// (0x0004ca58) cale_week_scroll_pane_g1

0x18e4,	// (0x0004ca6b) cale_week_scroll_pane_g2

0x18fc,	// (0x0004ca83) cale_week_scroll_pane_g3

0x1914,	// (0x0004ca9b) cale_week_scroll_pane_g4

0x192c,	// (0x0004cab3) cale_week_scroll_pane_g5

0x194c,	// (0x0004cad3) cale_week_scroll_pane_g6

0x196c,	// (0x0004caf3) cale_week_scroll_pane_g7

0x198c,	// (0x0004cb13) cale_week_scroll_pane_g8

0x19b0,	// (0x0004cb37) cale_week_scroll_pane_g9

0x19c8,	// (0x0004cb4f) cale_week_scroll_pane_g10

0x19e0,	// (0x0004cb67) cale_week_scroll_pane_g11

0x19f8,	// (0x0004cb7f) cale_week_scroll_pane_g12

0x1a10,	// (0x0004cb97) cale_week_scroll_pane_g13

0x1a10,	// (0x0004cb97) cale_week_scroll_pane_g14

0x1a10,	// (0x0004cb97) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005a337) cale_week_scroll_pane_g

0x1a4c,	// (0x0004cbd3) cale_week_time_pane

0x1a70,	// (0x0004cbf7) grid_cale_week_pane

0xbef3,	// (0x0005707a) scroll_pane_cp08

0x1a96,	// (0x0004cc1d) cell_cale_week_pane_ParamLimits

0x1a96,	// (0x0004cc1d) cell_cale_week_pane

0x1b24,	// (0x0004ccab) cale_week_day_heading_pane_t1

0x1b4e,	// (0x0004ccd5) cale_week_day_heading_pane_t2

0x1b7d,	// (0x0004cd04) cale_week_day_heading_pane_t3

0x1bac,	// (0x0004cd33) cale_week_day_heading_pane_t4

0x1bdb,	// (0x0004cd62) cale_week_day_heading_pane_t5

0x1c12,	// (0x0004cd99) cale_week_day_heading_pane_t6

0x1c49,	// (0x0004cdd0) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005a358) cale_week_day_heading_pane_t

0xbf10,	// (0x00057097) bg_cale_side_pane

0x1c73,	// (0x0004cdfa) cale_week_time_pane_t1

0x1c8d,	// (0x0004ce14) cale_week_time_pane_t2

0x1ca7,	// (0x0004ce2e) cale_week_time_pane_t3

0x1cc1,	// (0x0004ce48) cale_week_time_pane_t4

0x1cdb,	// (0x0004ce62) cale_week_time_pane_t5

0x1cf5,	// (0x0004ce7c) cale_week_time_pane_t6

0x1d0f,	// (0x0004ce96) cale_week_time_pane_t7

0x1d29,	// (0x0004ceb0) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005a367) cale_week_time_pane_t

0x1d43,	// (0x0004ceca) cell_cale_week_pane_g2

0x1d62,	// (0x0004cee9) cell_cale_week_pane_g3_ParamLimits

0x1d62,	// (0x0004cee9) cell_cale_week_pane_g3

0xbf1e,	// (0x000570a5) grid_highlight_pane_cp07

0xbf26,	// (0x000570ad) listscroll_gms_pane

0xbf30,	// (0x000570b7) grid_gms_pane

0xbf39,	// (0x000570c0) listscroll_gms_pane_g1

0xbf41,	// (0x000570c8) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005a378) listscroll_gms_pane_g

0x1d7a,	// (0x0004cf01) scroll_pane_cp010

0x1d85,	// (0x0004cf0c) cell_gms_pane_ParamLimits

0x1d85,	// (0x0004cf0c) cell_gms_pane

0x1d98,	// (0x0004cf1f) cell_gms_pane_g1

0xbf49,	// (0x000570d0) cell_gms_pane_g2

0xbf51,	// (0x000570d8) cell_gms_pane_g3

0xbf5a,	// (0x000570e1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005a37d) cell_gms_pane_g

0xbf63,	// (0x000570ea) grid_highlight_pane_cp09

0x3ff6,	// (0x0004f17d) phob_pre_status_pane_g1

0x3ffe,	// (0x0004f185) phob_pre_status_pane_g2

0x4006,	// (0x0004f18d) phob_pre_status_pane_g3

0x400e,	// (0x0004f195) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0005a768) phob_pre_status_pane_g

0x401e,	// (0x0004f1a5) phob_pre_status_pane_t1

0x402c,	// (0x0004f1b3) phob_pre_status_pane_t2

0x403c,	// (0x0004f1c3) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0005a773) phob_pre_status_pane_t

0xbf6b,	// (0x000570f2) bg_list_pane_cp05

0x1da8,	// (0x0004cf2f) grid_vorec_pane

0x1db0,	// (0x0004cf37) vorec_t1

0x1dbe,	// (0x0004cf45) vorec_t2

0x1dcc,	// (0x0004cf53) vorec_t3

0x1dda,	// (0x0004cf61) vorec_t4

0x9763,	// (0x000548ea) vorec_t5

0x9771,	// (0x000548f8) vorec_t6

0x0004,

0xf1ff,	// (0x0005a386) vorec_t

0x977f,	// (0x00054906) wait_bar_pane_cp01

0x1df6,	// (0x0004cf7d) cell_vorec_pane_ParamLimits

0x1df6,	// (0x0004cf7d) cell_vorec_pane

0x9891,	// (0x00054a18) cell_vorec_pane_g1

0xb54d,	// (0x000566d4) grid_highlight_pane_cp05

0x1e1e,	// (0x0004cfa5) cams_zoom_pane

0x1e2d,	// (0x0004cfb4) image_vga_pane

0x1e47,	// (0x0004cfce) main_camera_pane_g1

0x1e59,	// (0x0004cfe0) main_camera_pane_g2

0x1e69,	// (0x0004cff0) main_camera_pane_g3

0x1e79,	// (0x0004d000) main_camera_pane_g4

0x1e89,	// (0x0004d010) main_camera_pane_g5

0x1e99,	// (0x0004d020) main_camera_pane_g6

0x1eab,	// (0x0004d032) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005a391) main_camera_pane_g

0x1ebb,	// (0x0004d042) main_camera_pane_t1

0x1ed1,	// (0x0004d058) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005a3a2) main_camera_pane_t

0x1f0b,	// (0x0004d092) cams_zoom_pane_cp_ParamLimits

0x1f0b,	// (0x0004d092) cams_zoom_pane_cp

0x1f33,	// (0x0004d0ba) image_cif_pane_ParamLimits

0x1f33,	// (0x0004d0ba) image_cif_pane

0x1f69,	// (0x0004d0f0) image_subqcif_pane

0x1f71,	// (0x0004d0f8) main_video_pane_g1_ParamLimits

0x1f71,	// (0x0004d0f8) main_video_pane_g1

0x1f95,	// (0x0004d11c) main_video_pane_g2_ParamLimits

0x1f95,	// (0x0004d11c) main_video_pane_g2

0x1fc9,	// (0x0004d150) main_video_pane_g3_ParamLimits

0x1fc9,	// (0x0004d150) main_video_pane_g3

0x1ff7,	// (0x0004d17e) main_video_pane_g4_ParamLimits

0x1ff7,	// (0x0004d17e) main_video_pane_g4

0x2025,	// (0x0004d1ac) main_video_pane_g5_ParamLimits

0x2025,	// (0x0004d1ac) main_video_pane_g5

0xbf7f,	// (0x00057106) main_video_pane_g6_ParamLimits

0xbf7f,	// (0x00057106) main_video_pane_g6

0x0006,

0xf220,	// (0x0005a3a7) main_video_pane_g_ParamLimits

0xf220,	// (0x0005a3a7) main_video_pane_g

0x204e,	// (0x0004d1d5) main_video_pane_t1_ParamLimits

0x204e,	// (0x0004d1d5) main_video_pane_t1

0xbf99,	// (0x00057120) cams_zoom_pane_g1

0xbfa2,	// (0x00057129) cams_zoom_pane_g2

0xbfab,	// (0x00057132) cams_zoom_pane_g3

0xbfb4,	// (0x0005713b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005a3b6) cams_zoom_pane_g

0x20ab,	// (0x0004d232) grid_cams_pane

0x20c5,	// (0x0004d24c) linegrid_cams_pane

0x20d9,	// (0x0004d260) cell_cams_pane_ParamLimits

0x20d9,	// (0x0004d260) cell_cams_pane

0xbfbd,	// (0x00057144) cams_burst_image_pane

0xbfc5,	// (0x0005714c) cell_cams_pane_g1

0xb54d,	// (0x000566d4) grid_highlight_pane_cp03

0xbdfb,	// (0x00056f82) mp_bg_pane_g1

0xb54d,	// (0x000566d4) bg_list_pane_cp03

0xdcf4,	// (0x00058e7b) bg_mp_pane

0xdcfc,	// (0x00058e83) grid_mp_pane

0xdd04,	// (0x00058e8b) media_player_g1

0xdd0c,	// (0x00058e93) media_player_t1

0xdd1a,	// (0x00058ea1) media_player_t2

0xdd28,	// (0x00058eaf) media_player_t3

0xdd36,	// (0x00058ebd) media_player_t4

0xdd44,	// (0x00058ecb) media_player_t5

0xdd52,	// (0x00058ed9) media_player_t6

0xdd60,	// (0x00058ee7) media_player_t7

0x0006,

0xf5cb,	// (0x0005a752) media_player_t

0xdd6e,	// (0x00058ef5) wait_bar_pane_cp02

0xf5b0,	// (0x0005a737) main_usb_pane_t

0x3fed,	// (0x0004f174) cell_mp_pane

0xbdfb,	// (0x00056f82) cell_mp_pane_g1

0xb54d,	// (0x000566d4) grid_highlight_pane_cp06

0xbfcd,	// (0x00057154) grid_skin_colour_pane

0xbfd5,	// (0x0005715c) list_highlight_pane_cp03

0x20f9,	// (0x0004d280) skin_g1

0xbfdd,	// (0x00057164) skin_t1

0xbfec,	// (0x00057173) skin_t2

0x0001,

0xf264,	// (0x0005a3eb) skin_t

0x2101,	// (0x0004d288) cell_skin_colour_pane_ParamLimits

0x2101,	// (0x0004d288) cell_skin_colour_pane

0xbffa,	// (0x00057181) cell_skin_colour_pane_g1

0x217a,	// (0x0004d301) call_video_g1_ParamLimits

0x217a,	// (0x0004d301) call_video_g1

0x2196,	// (0x0004d31d) call_video_g2_ParamLimits

0x2196,	// (0x0004d31d) call_video_g2

0x0001,

0xf269,	// (0x0005a3f0) call_video_g_ParamLimits

0xf269,	// (0x0005a3f0) call_video_g

0x21e8,	// (0x0004d36f) call_video_uplink_pane_cp1_ParamLimits

0x21e8,	// (0x0004d36f) call_video_uplink_pane_cp1

0xc00c,	// (0x00057193) call_video_uplink_pane_cp2

0x2287,	// (0x0004d40e) video_down_crop_pane_ParamLimits

0x2287,	// (0x0004d40e) video_down_crop_pane

0x237e,	// (0x0004d505) video_down_pane_ParamLimits

0x237e,	// (0x0004d505) video_down_pane

0xc014,	// (0x0005719b) video_down_subqcif_pane_ParamLimits

0xc014,	// (0x0005719b) video_down_subqcif_pane

0xc02c,	// (0x000571b3) video_down_subqcif_pane_cp_ParamLimits

0xc02c,	// (0x000571b3) video_down_subqcif_pane_cp

0xc052,	// (0x000571d9) im_reading_pane_ParamLimits

0xc052,	// (0x000571d9) im_reading_pane

0x248e,	// (0x0004d615) im_writing_pane_ParamLimits

0x248e,	// (0x0004d615) im_writing_pane

0x24a4,	// (0x0004d62b) im_reading_pane_t1

0xc06c,	// (0x000571f3) list_im_pane

0xc07d,	// (0x00057204) scroll_pane_cp07

0x24dd,	// (0x0004d664) im_writing_pane_t1_ParamLimits

0x24dd,	// (0x0004d664) im_writing_pane_t1

0xc096,	// (0x0005721d) im_writing_pane_t2_ParamLimits

0xc096,	// (0x0005721d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005a3fa) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005a3fa) im_writing_pane_t

0xb54d,	// (0x000566d4) input_focus_pane_cp04

0xb54d,	// (0x000566d4) input_focus_pane_cp05

0x24f2,	// (0x0004d679) list_im_single_pane_ParamLimits

0x24f2,	// (0x0004d679) list_im_single_pane

0x2506,	// (0x0004d68d) list_single_im_pane_t1

0x3fad,	// (0x0004f134) blid_accuracy_pane

0x3fb5,	// (0x0004f13c) blid_compass_pane

0x3fbf,	// (0x0004f146) main_location_t1

0x3fcf,	// (0x0004f156) main_location_t2

0x3fdf,	// (0x0004f166) main_location_t3

0x0002,

0xf5da,	// (0x0005a761) main_location_t

0xb54d,	// (0x000566d4) aid_levels_location

0xbdfb,	// (0x00056f82) blid_accuracy_pane_g1

0xbdfb,	// (0x00056f82) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005a45c) blid_accuracy_pane_g

0xc0de,	// (0x00057265) wml_content_pane

0xc11c,	// (0x000572a3) wml_button_pane_ParamLimits

0xc11c,	// (0x000572a3) wml_button_pane

0x2515,	// (0x0004d69c) wml_list_single_large_pane_ParamLimits

0x2515,	// (0x0004d69c) wml_list_single_large_pane

0x252a,	// (0x0004d6b1) wml_list_single_medium_pane_ParamLimits

0x252a,	// (0x0004d6b1) wml_list_single_medium_pane

0x2540,	// (0x0004d6c7) wml_list_single_small_pane_ParamLimits

0x2540,	// (0x0004d6c7) wml_list_single_small_pane

0xc130,	// (0x000572b7) wml_selection_box_pane_ParamLimits

0xc130,	// (0x000572b7) wml_selection_box_pane

0xc143,	// (0x000572ca) wml_list_single_pane_t1

0xc152,	// (0x000572d9) wml_list_single_medium_pane_t1

0xc161,	// (0x000572e8) wml_list_single_large_pane_t1

0xc170,	// (0x000572f7) input_focus_pane_cp02_ParamLimits

0xc170,	// (0x000572f7) input_focus_pane_cp02

0xc183,	// (0x0005730a) wml_selection_box_pane_g1

0xc18c,	// (0x00057313) wml_selection_box_pane_t1_ParamLimits

0xc18c,	// (0x00057313) wml_selection_box_pane_t1

0xb7a8,	// (0x0005692f) bg_wml_button_pane_ParamLimits

0xb7a8,	// (0x0005692f) bg_wml_button_pane

0xc1a4,	// (0x0005732b) wml_button_pane_g1

0xc1ac,	// (0x00057333) wml_button_pane_t1

0xc1a4,	// (0x0005732b) wml_button_bg_pane_g1

0xc1bc,	// (0x00057343) wml_button_bg_pane_g2

0xc1c4,	// (0x0005734b) wml_button_bg_pane_g3

0xc1cc,	// (0x00057353) wml_button_bg_pane_g4

0xc1d4,	// (0x0005735b) wml_button_bg_pane_g5

0xc1dc,	// (0x00057363) wml_button_bg_pane_g6

0xc1e4,	// (0x0005736b) wml_button_bg_pane_g7

0xc1ec,	// (0x00057373) wml_button_bg_pane_g8

0xc1f4,	// (0x0005737b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005a3ff) wml_button_bg_pane_g

0x2558,	// (0x0004d6df) bg_list_pane_cp02

0xc1fc,	// (0x00057383) mce_header_pane_ParamLimits

0xc1fc,	// (0x00057383) mce_header_pane

0xc212,	// (0x00057399) mce_icon_pane

0xc212,	// (0x00057399) mce_image_pane

0xc21b,	// (0x000573a2) mce_text_pane_ParamLimits

0xc21b,	// (0x000573a2) mce_text_pane

0x2560,	// (0x0004d6e7) scroll_pane_cp03

0xc114,	// (0x0005729b) scroll_pane_cp04

0xc22e,	// (0x000573b5) scroll_pane_cp05_ParamLimits

0xc22e,	// (0x000573b5) scroll_pane_cp05

0x256a,	// (0x0004d6f1) mce_header_field_pane_ParamLimits

0x256a,	// (0x0004d6f1) mce_header_field_pane

0x2581,	// (0x0004d708) mce_header_field_pane_2_ParamLimits

0x2581,	// (0x0004d708) mce_header_field_pane_2

0x2597,	// (0x0004d71e) mce_header_field_pane_3

0x259f,	// (0x0004d726) list_single_mce_message_pane_ParamLimits

0x259f,	// (0x0004d726) list_single_mce_message_pane

0x25b4,	// (0x0004d73b) list_single_mce_smart_pane_ParamLimits

0x25b4,	// (0x0004d73b) list_single_mce_smart_pane

0xc23a,	// (0x000573c1) input_focus_pane_cp03

0xc243,	// (0x000573ca) list_header_data_pane

0x25d4,	// (0x0004d75b) mce_header_field_pane_t1

0x25e4,	// (0x0004d76b) list_single_mce_header_pane_ParamLimits

0x25e4,	// (0x0004d76b) list_single_mce_header_pane

0xc24b,	// (0x000573d2) list_single_mce_header_pane_t1

0xc25a,	// (0x000573e1) list_single_mce_message_pane_g1

0xc262,	// (0x000573e9) list_single_mce_message_pane_t1

0x261e,	// (0x0004d7a5) bg_cale_heading_pane_cp01_ParamLimits

0x261e,	// (0x0004d7a5) bg_cale_heading_pane_cp01

0xc270,	// (0x000573f7) bg_cale_pane_cp02_ParamLimits

0xc270,	// (0x000573f7) bg_cale_pane_cp02

0x2658,	// (0x0004d7df) cale_month_corner_pane

0x2677,	// (0x0004d7fe) cale_month_day_heading_pane_ParamLimits

0x2677,	// (0x0004d7fe) cale_month_day_heading_pane

0x26c9,	// (0x0004d850) cale_month_pane_g1_ParamLimits

0x26c9,	// (0x0004d850) cale_month_pane_g1

0x26f8,	// (0x0004d87f) cale_month_pane_g2_ParamLimits

0x26f8,	// (0x0004d87f) cale_month_pane_g2

0x2728,	// (0x0004d8af) cale_month_pane_g3_ParamLimits

0x2728,	// (0x0004d8af) cale_month_pane_g3

0x2764,	// (0x0004d8eb) cale_month_pane_g4_ParamLimits

0x2764,	// (0x0004d8eb) cale_month_pane_g4

0x27a0,	// (0x0004d927) cale_month_pane_g5_ParamLimits

0x27a0,	// (0x0004d927) cale_month_pane_g5

0x27e8,	// (0x0004d96f) cale_month_pane_g6_ParamLimits

0x27e8,	// (0x0004d96f) cale_month_pane_g6

0x2834,	// (0x0004d9bb) cale_month_pane_g7_ParamLimits

0x2834,	// (0x0004d9bb) cale_month_pane_g7

0x2888,	// (0x0004da0f) cale_month_pane_g8_ParamLimits

0x2888,	// (0x0004da0f) cale_month_pane_g8

0x28dc,	// (0x0004da63) cale_month_pane_g9_ParamLimits

0x28dc,	// (0x0004da63) cale_month_pane_g9

0x292e,	// (0x0004dab5) cale_month_pane_g10_ParamLimits

0x292e,	// (0x0004dab5) cale_month_pane_g10

0x2980,	// (0x0004db07) cale_month_pane_g11_ParamLimits

0x2980,	// (0x0004db07) cale_month_pane_g11

0x29d2,	// (0x0004db59) cale_month_pane_g12_ParamLimits

0x29d2,	// (0x0004db59) cale_month_pane_g12

0x2a24,	// (0x0004dbab) cale_month_pane_g13_ParamLimits

0x2a24,	// (0x0004dbab) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005a412) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005a412) cale_month_pane_g

0x2a76,	// (0x0004dbfd) cale_month_week_pane

0x2a9a,	// (0x0004dc21) grid_cale_month_pane_ParamLimits

0x2a9a,	// (0x0004dc21) grid_cale_month_pane

0x2ae3,	// (0x0004dc6a) cale_month_day_heading_pane_t1

0x2b69,	// (0x0004dcf0) cale_month_day_heading_pane_t2

0x2be2,	// (0x0004dd69) cale_month_day_heading_pane_t3

0x2c5b,	// (0x0004dde2) cale_month_day_heading_pane_t4

0x2cdc,	// (0x0004de63) cale_month_day_heading_pane_t5

0x2d65,	// (0x0004deec) cale_month_day_heading_pane_t6

0x2dee,	// (0x0004df75) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005a42d) cale_month_day_heading_pane_t

0xbf10,	// (0x00057097) bg_cale_side_pane_cp01

0x2e7f,	// (0x0004e006) cale_month_week_pane_t1

0x2e98,	// (0x0004e01f) cale_month_week_pane_t2

0x2eb1,	// (0x0004e038) cale_month_week_pane_t3

0x2eca,	// (0x0004e051) cale_month_week_pane_t4

0x2ee3,	// (0x0004e06a) cale_month_week_pane_t5

0x2efc,	// (0x0004e083) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005a43c) cale_month_week_pane_t

0x2f15,	// (0x0004e09c) cell_cale_month_pane_ParamLimits

0x2f15,	// (0x0004e09c) cell_cale_month_pane

0x989b,	// (0x00054a22) cell_cale_month_pane_g1

0x3043,	// (0x0004e1ca) cell_cale_month_pane_t1_ParamLimits

0x3043,	// (0x0004e1ca) cell_cale_month_pane_t1

0xbf1e,	// (0x000570a5) grid_highlight_pane_cp08

0xbdfb,	// (0x00056f82) main_smil_g1

0x306f,	// (0x0004e1f6) smil_status_pane

0xc2af,	// (0x00057436) smil_text_pane

0xdc14,	// (0x00058d9b) bg_popup_call3_rect_pane_g8

0xdc1c,	// (0x00058da3) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005a6f5) bg_popup_call3_rect_pane_g

0xde63,	// (0x00058fea) smil_status_volume_pane_g1

0xc2b9,	// (0x00057440) smil_status_pane_t1

0x99f1,	// (0x00054b78) volume_smil_pane

0xc2d0,	// (0x00057457) list_smil_text_pane

0x3082,	// (0x0004e209) scroll_pane_cp011

0x308d,	// (0x0004e214) smil_text_list_pane_t1_ParamLimits

0x308d,	// (0x0004e214) smil_text_list_pane_t1

0x98a7,	// (0x00054a2e) aid_volume_smil_ParamLimits

0x98a7,	// (0x00054a2e) aid_volume_smil

0xbdfb,	// (0x00056f82) smil_volume_pane_g1

0xbdfb,	// (0x00056f82) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005a45c) smil_volume_pane_g

0x1851,	// (0x0004c9d8) listscroll_cale_day_pane

0xc2da,	// (0x00057461) bg_cale_pane

0xc2f2,	// (0x00057479) list_cale_pane

0xc315,	// (0x0005749c) scroll_pane_cp09

0xc326,	// (0x000574ad) cale_bg_pane_g1

0xc32e,	// (0x000574b5) cale_bg_pane_g2

0xc336,	// (0x000574bd) cale_bg_pane_g3

0xc33e,	// (0x000574c5) cale_bg_pane_g4

0xc346,	// (0x000574cd) cale_bg_pane_g5

0xc34e,	// (0x000574d5) cale_bg_pane_g6

0xc356,	// (0x000574dd) cale_bg_pane_g7

0xc35e,	// (0x000574e5) cale_bg_pane_g8

0xc366,	// (0x000574ed) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005a461) cale_bg_pane_g

0x30d1,	// (0x0004e258) list_cale_time_pane_ParamLimits

0x30d1,	// (0x0004e258) list_cale_time_pane

0xc36e,	// (0x000574f5) list_cale_time_pane_g1_ParamLimits

0xc36e,	// (0x000574f5) list_cale_time_pane_g1

0xc37a,	// (0x00057501) list_cale_time_pane_g2_ParamLimits

0xc37a,	// (0x00057501) list_cale_time_pane_g2

0x30e6,	// (0x0004e26d) list_cale_time_pane_g3_ParamLimits

0x30e6,	// (0x0004e26d) list_cale_time_pane_g3

0x30f4,	// (0x0004e27b) list_cale_time_pane_g4_ParamLimits

0x30f4,	// (0x0004e27b) list_cale_time_pane_g4

0x3102,	// (0x0004e289) list_cale_time_pane_g5_ParamLimits

0x3102,	// (0x0004e289) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005a474) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005a474) list_cale_time_pane_g

0xc394,	// (0x0005751b) list_cale_time_pane_t1_ParamLimits

0xc394,	// (0x0005751b) list_cale_time_pane_t1

0xc3bc,	// (0x00057543) list_cale_time_pane_t2_ParamLimits

0xc3bc,	// (0x00057543) list_cale_time_pane_t2

0x3388,	// (0x0004e50f) aid_blid_cardinal_pane

0x33c6,	// (0x0004e54d) compass_pane_t4

0xc3e4,	// (0x0005756b) list_cale_time_pane_t4_ParamLimits

0xc3e4,	// (0x0005756b) list_cale_time_pane_t4

0x33d4,	// (0x0004e55b) compass_pane_t5

0x33e2,	// (0x0004e569) compass_pane_t6

0x33f0,	// (0x0004e577) compass_pane_t7

0xc893,	// (0x00057a1a) navi_pane_cc_t1

0xca7e,	// (0x00057c05) aid_phob_thumbnail_center_pane

0x39c5,	// (0x0004eb4c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005a481) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005a481) list_cale_time_pane_t

0xb1a4,	// (0x0005632b) bg_popup_window_pane_cp02_ParamLimits

0xb1a4,	// (0x0005632b) bg_popup_window_pane_cp02

0xc40c,	// (0x00057593) heading_pane_cp01_ParamLimits

0xc40c,	// (0x00057593) heading_pane_cp01

0xc418,	// (0x0005759f) loc_req_pane_ParamLimits

0xc418,	// (0x0005759f) loc_req_pane

0xc428,	// (0x000575af) loc_type_pane_ParamLimits

0xc428,	// (0x000575af) loc_type_pane

0xc43a,	// (0x000575c1) loc_type_pane_t1_ParamLimits

0xc43a,	// (0x000575c1) loc_type_pane_t1

0xc44c,	// (0x000575d3) loc_type_pane_t2_ParamLimits

0xc44c,	// (0x000575d3) loc_type_pane_t2

0xc45e,	// (0x000575e5) loc_type_pane_t3_ParamLimits

0xc45e,	// (0x000575e5) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005a488) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005a488) loc_type_pane_t

0xc470,	// (0x000575f7) list_loc_req_pane

0xc47a,	// (0x00057601) scroll_pane_cp012

0x3110,	// (0x0004e297) list_single_loc_request_popup_menu_pane_ParamLimits

0x3110,	// (0x0004e297) list_single_loc_request_popup_menu_pane

0xc485,	// (0x0005760c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc485,	// (0x0005760c) list_single_loc_request_popup_menu_pane_g1

0xc491,	// (0x00057618) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc491,	// (0x00057618) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005a48f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005a48f) list_single_loc_request_popup_menu_pane_g

0xc49d,	// (0x00057624) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc49d,	// (0x00057624) list_single_loc_request_popup_menu_pane_t1

0xb7a8,	// (0x0005692f) bg_popup_window_pane_cp03_ParamLimits

0xb7a8,	// (0x0005692f) bg_popup_window_pane_cp03

0xc4b3,	// (0x0005763a) heading_loc_req_pane_ParamLimits

0xc4b3,	// (0x0005763a) heading_loc_req_pane

0x311d,	// (0x0004e2a4) popup_dyc_status_message_window_g1_ParamLimits

0x311d,	// (0x0004e2a4) popup_dyc_status_message_window_g1

0x3131,	// (0x0004e2b8) popup_dyc_status_message_window_t1_ParamLimits

0x3131,	// (0x0004e2b8) popup_dyc_status_message_window_t1

0x3146,	// (0x0004e2cd) popup_dyc_status_message_window_t2_ParamLimits

0x3146,	// (0x0004e2cd) popup_dyc_status_message_window_t2

0x315b,	// (0x0004e2e2) popup_dyc_status_message_window_t3_ParamLimits

0x315b,	// (0x0004e2e2) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005a494) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005a494) popup_dyc_status_message_window_t

0xb54d,	// (0x000566d4) bg_heading_pane_cp01

0xc4bf,	// (0x00057646) heading_loc_req_pane_g1

0xc4c7,	// (0x0005764e) heading_loc_req_pane_g2

0xc4cf,	// (0x00057656) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005a49b) heading_loc_req_pane_g

0xc4d7,	// (0x0005765e) heading_loc_req_pane_t1

0xc4e6,	// (0x0005766d) bg_popup_sub_pane_cp01_ParamLimits

0xc4e6,	// (0x0005766d) bg_popup_sub_pane_cp01

0xc4f4,	// (0x0005767b) popup_cale_events_window_g1_ParamLimits

0xc4f4,	// (0x0005767b) popup_cale_events_window_g1

0xc514,	// (0x0005769b) popup_cale_events_window_g2_ParamLimits

0xc514,	// (0x0005769b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005a4cf) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005a4cf) popup_cale_events_window_g

0xc534,	// (0x000576bb) popup_cale_events_window_t1_ParamLimits

0xc534,	// (0x000576bb) popup_cale_events_window_t1

0xc546,	// (0x000576cd) popup_cale_events_window_t2_ParamLimits

0xc546,	// (0x000576cd) popup_cale_events_window_t2

0xc584,	// (0x0005770b) popup_cale_events_window_t3_ParamLimits

0xc584,	// (0x0005770b) popup_cale_events_window_t3

0xc5be,	// (0x00057745) popup_cale_events_window_t4_ParamLimits

0xc5be,	// (0x00057745) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005a4d4) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005a4d4) popup_cale_events_window_t

0x3183,	// (0x0004e30a) call_type_pane

0x3193,	// (0x0004e31a) popup_call_status_window_g1

0x31a7,	// (0x0004e32e) popup_call_status_window_g2

0x31bb,	// (0x0004e342) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005a4dd) popup_call_status_window_g

0xc5f4,	// (0x0005777b) call_type_pane_g1

0xc5fd,	// (0x00057784) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005a4e4) call_type_pane_g

0xb54d,	// (0x000566d4) bg_popup_sub_pane_cp02

0xc606,	// (0x0005778d) listscroll_popup_wml_pane

0xc60e,	// (0x00057795) list_wml_pane

0xc618,	// (0x0005779f) scroll_pane_cp013

0xc623,	// (0x000577aa) list_single_graphic_popup_wml_pane_ParamLimits

0xc623,	// (0x000577aa) list_single_graphic_popup_wml_pane

0xbdfb,	// (0x00056f82) list_single_graphic_popup_wml_pane_g1

0xc637,	// (0x000577be) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005a4e9) list_single_graphic_popup_wml_pane_g

0xc63f,	// (0x000577c6) list_single_graphic_popup_wml_pane_t1

0xc655,	// (0x000577dc) aid_call_pane

0xb7a0,	// (0x00056927) popup_clock_analogue_window_g1

0xb7a0,	// (0x00056927) popup_clock_analogue_window_g2

0x98c9,	// (0x00054a50) popup_clock_analogue_window_g3

0x98c9,	// (0x00054a50) popup_clock_analogue_window_g4

0xbdfb,	// (0x00056f82) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005a4ee) popup_clock_analogue_window_g

0x98d1,	// (0x00054a58) popup_clock_analogue_window_t1

0x98df,	// (0x00054a66) clock_digital_number_pane_ParamLimits

0x98df,	// (0x00054a66) clock_digital_number_pane

0x98eb,	// (0x00054a72) clock_digital_number_pane_cp02_ParamLimits

0x98eb,	// (0x00054a72) clock_digital_number_pane_cp02

0x98f7,	// (0x00054a7e) clock_digital_number_pane_cp03_ParamLimits

0x98f7,	// (0x00054a7e) clock_digital_number_pane_cp03

0x9903,	// (0x00054a8a) clock_digital_number_pane_cp04_ParamLimits

0x9903,	// (0x00054a8a) clock_digital_number_pane_cp04

0x9913,	// (0x00054a9a) clock_digital_separator_pane_ParamLimits

0x9913,	// (0x00054a9a) clock_digital_separator_pane

0x991f,	// (0x00054aa6) popup_clock_digital_window_t1

0xbdfb,	// (0x00056f82) clock_digital_number_pane_g1

0xbdfb,	// (0x00056f82) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005a45c) clock_digital_number_pane_g

0xbdfb,	// (0x00056f82) clock_digital_separator_pane_g1

0xbdfb,	// (0x00056f82) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005a45c) clock_digital_separator_pane_g

0xb54d,	// (0x000566d4) bg_popup_window_pane_cp04

0xc65d,	// (0x000577e4) heading_pane_cp03

0xc665,	// (0x000577ec) listscroll_popup_gms_pane

0xc66d,	// (0x000577f4) grid_large_graphic_popup_pane

0xc677,	// (0x000577fe) listscroll_popup_gms_pane_g1

0xc67f,	// (0x00057806) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005a4f9) listscroll_popup_gms_pane_g

0xc114,	// (0x0005729b) scroll_pane_cp014

0x31ca,	// (0x0004e351) cell_large_graphic_popup_pane_ParamLimits

0x31ca,	// (0x0004e351) cell_large_graphic_popup_pane

0x31e2,	// (0x0004e369) cell_large_graphic_popup_pane_g1_ParamLimits

0x31e2,	// (0x0004e369) cell_large_graphic_popup_pane_g1

0xc687,	// (0x0005780e) cell_large_graphic_popup_pane_g2_ParamLimits

0xc687,	// (0x0005780e) cell_large_graphic_popup_pane_g2

0xc693,	// (0x0005781a) cell_large_graphic_popup_pane_g3_ParamLimits

0xc693,	// (0x0005781a) cell_large_graphic_popup_pane_g3

0xc6a0,	// (0x00057827) cell_large_graphic_popup_pane_g4_ParamLimits

0xc6a0,	// (0x00057827) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005a4fe) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005a4fe) cell_large_graphic_popup_pane_g

0xc6b0,	// (0x00057837) grid_highlight_pane_cp010

0xbdfb,	// (0x00056f82) bg_popup_call_pane_g1

0xc6ba,	// (0x00057841) list_single_graphic_popup_conf_pane_ParamLimits

0xc6ba,	// (0x00057841) list_single_graphic_popup_conf_pane

0xc6cd,	// (0x00057854) list_highlight_pane_cp01

0xc6d6,	// (0x0005785d) list_single_graphic_popup_conf_pane_g1

0xc6de,	// (0x00057865) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005a507) list_single_graphic_popup_conf_pane_g

0xc6e6,	// (0x0005786d) list_single_graphic_popup_conf_pane_t1

0xc6f4,	// (0x0005787b) linegrid_cams_pane_g1

0x31ee,	// (0x0004e375) linegrid_cams_pane_g2

0xbf51,	// (0x000570d8) linegrid_cams_pane_g3

0xc6fd,	// (0x00057884) linegrid_cams_pane_g4

0x31f7,	// (0x0004e37e) linegrid_cams_pane_g5

0x3200,	// (0x0004e387) linegrid_cams_pane_g6

0xbf5a,	// (0x000570e1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005a50c) linegrid_cams_pane_g

0xc706,	// (0x0005788d) popup_clock_analogue_window

0xc706,	// (0x0005788d) popup_clock_digital_window

0xb54d,	// (0x000566d4) popup_phob_thumbnail_window

0xbdfb,	// (0x00056f82) call_video_uplink_pane_g1

0xc70f,	// (0x00057896) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005a51b) call_video_uplink_pane_g

0xc717,	// (0x0005789e) video_uplink_pane

0xc71f,	// (0x000578a6) mce_image_pane_g1

0x320b,	// (0x0004e392) mce_image_pane_g2

0x3215,	// (0x0004e39c) mce_image_pane_g3

0x321d,	// (0x0004e3a4) mce_image_pane_g4

0x3225,	// (0x0004e3ac) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005a520) mce_image_pane_g

0xc729,	// (0x000578b0) control_top_pane_stacon_cp01_ParamLimits

0xc729,	// (0x000578b0) control_top_pane_stacon_cp01

0xc73d,	// (0x000578c4) uni_indicator_pane_stacon_cp01_ParamLimits

0xc73d,	// (0x000578c4) uni_indicator_pane_stacon_cp01

0xc74e,	// (0x000578d5) bg_popup_sub_pane_cp03

0xc758,	// (0x000578df) chi_dic_find_pane

0x322d,	// (0x0004e3b4) listscroll_chi_dic_pane

0xc760,	// (0x000578e7) main_pane_chidic_g1

0xc768,	// (0x000578ef) chi_dic_find_pane_t1

0xc776,	// (0x000578fd) find_chidic_pane

0xc77f,	// (0x00057906) chi_dic_list_pane_ParamLimits

0xc77f,	// (0x00057906) chi_dic_list_pane

0xc790,	// (0x00057917) scroll_pane_cp020

0xc798,	// (0x0005791f) find_chidic_pane_t1

0xb54d,	// (0x000566d4) input_focus_pane_cp06

0x3241,	// (0x0004e3c8) list_chi_dic_pane_ParamLimits

0x3241,	// (0x0004e3c8) list_chi_dic_pane

0x3253,	// (0x0004e3da) list_chi_dic_pane_t1_ParamLimits

0x3253,	// (0x0004e3da) list_chi_dic_pane_t1

0xb54d,	// (0x000566d4) list_highlight_pane_cp020

0xc7a7,	// (0x0005792e) bg_cale_heading_pane_g1

0x3266,	// (0x0004e3ed) bg_cale_heading_pane_g2

0x326e,	// (0x0004e3f5) bg_cale_heading_pane_g3

0x3276,	// (0x0004e3fd) bg_cale_heading_pane_g4

0x3280,	// (0x0004e407) bg_cale_heading_pane_g5

0x328a,	// (0x0004e411) bg_cale_heading_pane_g6

0x3292,	// (0x0004e419) bg_cale_heading_pane_g7

0x329a,	// (0x0004e421) bg_cale_heading_pane_g8

0x32a4,	// (0x0004e42b) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005a52b) bg_cale_heading_pane_g

0xc7a7,	// (0x0005792e) bg_cale_side_pane_g1

0x32ae,	// (0x0004e435) bg_cale_side_pane_g2

0x32b6,	// (0x0004e43d) bg_cale_side_pane_g3

0x32be,	// (0x0004e445) bg_cale_side_pane_g4

0x32c6,	// (0x0004e44d) bg_cale_side_pane_g5

0x32ce,	// (0x0004e455) bg_cale_side_pane_g6

0x32d6,	// (0x0004e45d) bg_cale_side_pane_g7

0x32de,	// (0x0004e465) bg_cale_side_pane_g8

0x32e6,	// (0x0004e46d) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005a53e) bg_cale_side_pane_g

0x32ee,	// (0x0004e475) popup_call_status_window_ParamLimits

0x32ee,	// (0x0004e475) popup_call_status_window

0xc7af,	// (0x00057936) stacon_top_pane

0xc7b7,	// (0x0005793e) status_pane_ParamLimits

0xc7b7,	// (0x0005793e) status_pane

0xc7cc,	// (0x00057953) status_small_pane

0xc7d4,	// (0x0005795b) control_pane

0xb54d,	// (0x000566d4) stacon_bottom_pane

0xc7dc,	// (0x00057963) list_single_mce_smart_pane_t1_ParamLimits

0xc7dc,	// (0x00057963) list_single_mce_smart_pane_t1

0xc7ef,	// (0x00057976) list_single_mce_smart_pane_t2_ParamLimits

0xc7ef,	// (0x00057976) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005a551) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005a551) list_single_mce_smart_pane_t

0x3337,	// (0x0004e4be) compass_pane

0x3340,	// (0x0004e4c7) main_location2_pane_t1

0x3352,	// (0x0004e4d9) main_location2_pane_t2

0x3364,	// (0x0004e4eb) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005a556) main_location2_pane_t

0xc80e,	// (0x00057995) compass_pane_g1_ParamLimits

0xc80e,	// (0x00057995) compass_pane_g1

0x33a8,	// (0x0004e52f) compass_pane_t1

0x33b7,	// (0x0004e53e) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005a55f) compass_pane_t

0x33fe,	// (0x0004e585) text_secondary_cp61

0xc88a,	// (0x00057a11) navi_pane_cams_g5

0xc906,	// (0x00057a8d) navi_pane_im_t1

0xc914,	// (0x00057a9b) navi_pane_mp_g1_ParamLimits

0xc914,	// (0x00057a9b) navi_pane_mp_g1

0xc928,	// (0x00057aaf) navi_pane_mp_g2_ParamLimits

0xc928,	// (0x00057aaf) navi_pane_mp_g2

0xc934,	// (0x00057abb) navi_pane_mp_g3_ParamLimits

0xc934,	// (0x00057abb) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005a573) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005a573) navi_pane_mp_g

0xc940,	// (0x00057ac7) navi_pane_mp_t1

0xc94e,	// (0x00057ad5) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005a57a) navi_pane_mp_t

0xc9b9,	// (0x00057b40) navi_pane_vt_g1

0xc940,	// (0x00057ac7) navi_pane_vt_t1

0xc9c1,	// (0x00057b48) navi_slider_pane

0xbf6b,	// (0x000570f2) zooming_pane

0xc9d1,	// (0x00057b58) navi_slider_pane_g1

0x993c,	// (0x00054ac3) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005a581) navi_slider_pane_g

0xc9f5,	// (0x00057b7c) aid_levels_zoom

0xc9fd,	// (0x00057b84) zooming_pane_g1

0xca05,	// (0x00057b8c) zooming_pane_g2

0xca05,	// (0x00057b8c) zooming_pane_g3

0x0002,

0xf409,	// (0x0005a590) zooming_pane_g

0xca0d,	// (0x00057b94) level_10_zoom

0xca16,	// (0x00057b9d) level_11_zoom

0xca1f,	// (0x00057ba6) level_1_zoom

0xca28,	// (0x00057baf) level_2_zoom

0xca31,	// (0x00057bb8) level_3_zoom

0xca3a,	// (0x00057bc1) level_4_zoom

0xca43,	// (0x00057bca) level_5_zoom

0xca4c,	// (0x00057bd3) level_6_zoom

0xca55,	// (0x00057bdc) level_7_zoom

0xca5e,	// (0x00057be5) level_8_zoom

0xca67,	// (0x00057bee) level_9_zoom

0xca86,	// (0x00057c0d) popup_phob_thumbnail_window_g1

0xca8e,	// (0x00057c15) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005a597) popup_phob_thumbnail_window_g

0xdd76,	// (0x00058efd) level_1_location

0xdd7e,	// (0x00058f05) level_2_location

0xdd86,	// (0x00058f0d) level_3_location

0xdd8e,	// (0x00058f15) level_4_location

0xbf6b,	// (0x000570f2) level_5_location

0x344f,	// (0x0004e5d6) mce_icon_pane_g1

0x3459,	// (0x0004e5e0) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005a59c) mce_icon_pane_g

0x3461,	// (0x0004e5e8) main_mup_pane_g1_ParamLimits

0x3461,	// (0x0004e5e8) main_mup_pane_g1

0x3477,	// (0x0004e5fe) main_mup_pane_g2_ParamLimits

0x3477,	// (0x0004e5fe) main_mup_pane_g2

0x348f,	// (0x0004e616) main_mup_pane_g3_ParamLimits

0x348f,	// (0x0004e616) main_mup_pane_g3

0x34a7,	// (0x0004e62e) main_mup_pane_g4_ParamLimits

0x34a7,	// (0x0004e62e) main_mup_pane_g4

0x34bf,	// (0x0004e646) main_mup_pane_g5_ParamLimits

0x34bf,	// (0x0004e646) main_mup_pane_g5

0x34db,	// (0x0004e662) main_mup_pane_g6_ParamLimits

0x34db,	// (0x0004e662) main_mup_pane_g6

0x34f3,	// (0x0004e67a) main_mup_pane_g7_ParamLimits

0x34f3,	// (0x0004e67a) main_mup_pane_g7

0x350b,	// (0x0004e692) main_mup_pane_g8_ParamLimits

0x350b,	// (0x0004e692) main_mup_pane_g8

0x3525,	// (0x0004e6ac) main_mup_pane_g9_ParamLimits

0x3525,	// (0x0004e6ac) main_mup_pane_g9

0x353f,	// (0x0004e6c6) main_mup_pane_g10_ParamLimits

0x353f,	// (0x0004e6c6) main_mup_pane_g10

0x3559,	// (0x0004e6e0) main_mup_pane_g11_ParamLimits

0x3559,	// (0x0004e6e0) main_mup_pane_g11

0x356d,	// (0x0004e6f4) main_mup_pane_g12_ParamLimits

0x356d,	// (0x0004e6f4) main_mup_pane_g12

0x3583,	// (0x0004e70a) main_mup_pane_g13_ParamLimits

0x3583,	// (0x0004e70a) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005a5a1) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005a5a1) main_mup_pane_g

0x3597,	// (0x0004e71e) main_mup_pane_t1_ParamLimits

0x3597,	// (0x0004e71e) main_mup_pane_t1

0x35b1,	// (0x0004e738) main_mup_pane_t2_ParamLimits

0x35b1,	// (0x0004e738) main_mup_pane_t2

0x35c9,	// (0x0004e750) main_mup_pane_t3_ParamLimits

0x35c9,	// (0x0004e750) main_mup_pane_t3

0x35e1,	// (0x0004e768) main_mup_pane_t4_ParamLimits

0x35e1,	// (0x0004e768) main_mup_pane_t4

0x35ff,	// (0x0004e786) main_mup_pane_t5_ParamLimits

0x35ff,	// (0x0004e786) main_mup_pane_t5

0x3614,	// (0x0004e79b) main_mup_pane_t6_ParamLimits

0x3614,	// (0x0004e79b) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005a5bc) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005a5bc) main_mup_pane_t

0x3626,	// (0x0004e7ad) mup_progress_pane_ParamLimits

0x3626,	// (0x0004e7ad) mup_progress_pane

0x3632,	// (0x0004e7b9) mup_visualizer_pane_ParamLimits

0x3632,	// (0x0004e7b9) mup_visualizer_pane

0x3662,	// (0x0004e7e9) mup_volume_pane_ParamLimits

0x3662,	// (0x0004e7e9) mup_volume_pane

0xca70,	// (0x00057bf7) mup_visualizer_pane_g1_ParamLimits

0xca70,	// (0x00057bf7) mup_visualizer_pane_g1

0xca70,	// (0x00057bf7) mup_visualizer_pane_g2_ParamLimits

0xca70,	// (0x00057bf7) mup_visualizer_pane_g2

0xc80e,	// (0x00057995) mup_visualizer_pane_g3_ParamLimits

0xc80e,	// (0x00057995) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005a5c9) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005a5c9) mup_visualizer_pane_g

0xbdfb,	// (0x00056f82) mup_volume_pane_g1

0xca9e,	// (0x00057c25) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005a5d0) mup_volume_pane_g

0xbdfb,	// (0x00056f82) mup_progress_pane_g1

0xcaa7,	// (0x00057c2e) mup_progress_pane_g2

0xcab0,	// (0x00057c37) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005a5d5) mup_progress_pane_g

0xb54d,	// (0x000566d4) bg_popup_window_pane_cp05

0xcab9,	// (0x00057c40) heading_pane_cp02_ParamLimits

0xcab9,	// (0x00057c40) heading_pane_cp02

0xcad3,	// (0x00057c5a) list_popup_blid_pane

0xcadb,	// (0x00057c62) list_blid_sat_info_pane_ParamLimits

0xcadb,	// (0x00057c62) list_blid_sat_info_pane

0xcaee,	// (0x00057c75) list_blid_sat_info_pane_g1

0xcaf6,	// (0x00057c7d) list_blid_sat_info_pane_t1

0x3778,	// (0x0004e8ff) mup_equalizer_pane_ParamLimits

0x3778,	// (0x0004e8ff) mup_equalizer_pane

0x3791,	// (0x0004e918) mup_equalizer_pane_cp1_ParamLimits

0x3791,	// (0x0004e918) mup_equalizer_pane_cp1

0x37ae,	// (0x0004e935) mup_equalizer_pane_cp2_ParamLimits

0x37ae,	// (0x0004e935) mup_equalizer_pane_cp2

0x37cb,	// (0x0004e952) mup_equalizer_pane_cp3_ParamLimits

0x37cb,	// (0x0004e952) mup_equalizer_pane_cp3

0x37ec,	// (0x0004e973) mup_equalizer_pane_cp4_ParamLimits

0x37ec,	// (0x0004e973) mup_equalizer_pane_cp4

0x380d,	// (0x0004e994) mup_equalizer_pane_cp5

0x3821,	// (0x0004e9a8) mup_equalizer_pane_cp6

0x3835,	// (0x0004e9bc) mup_equalizer_pane_cp7

0xdc94,	// (0x00058e1b) bg_popup_call_poc_act_pane_g9

0xdc9c,	// (0x00058e23) bg_popup_call_poc_act_pane_g10

0xdca4,	// (0x00058e2b) bg_popup_call_poc_act_pane_g11

0x000a,

0xb7a8,	// (0x0005692f) mup_scale_pane

0xbdfb,	// (0x00056f82) mup_scale_pane_g1

0xcb04,	// (0x00057c8b) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005a5f1) mup_scale_pane_g

0xcb28,	// (0x00057caf) msg_data_pane

0xcb30,	// (0x00057cb7) scroll_pane_cp017

0x0422,	// (0x0004b5a9) bg_list_pane_cp04_ParamLimits

0x0422,	// (0x0004b5a9) bg_list_pane_cp04

0xcb38,	// (0x00057cbf) msg_data_pane_g1

0x3863,	// (0x0004e9ea) msg_data_pane_g2

0x386d,	// (0x0004e9f4) msg_data_pane_g3

0x3875,	// (0x0004e9fc) msg_data_pane_g4

0x387d,	// (0x0004ea04) msg_data_pane_g5

0x3885,	// (0x0004ea0c) msg_data_pane_g6

0x388d,	// (0x0004ea14) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005a600) msg_data_pane_g

0x043a,	// (0x0004b5c1) msg_text_pane_ParamLimits

0x043a,	// (0x0004b5c1) msg_text_pane

0x3895,	// (0x0004ea1c) qrid_highlight_pane_cp011_ParamLimits

0x3895,	// (0x0004ea1c) qrid_highlight_pane_cp011

0xb54d,	// (0x000566d4) msg_body_pane

0xb54d,	// (0x000566d4) msg_header_pane

0xcb49,	// (0x00057cd0) input_focus_pane_cp07

0x0475,	// (0x0004b5fc) msg_header_pane_t1_ParamLimits

0x0475,	// (0x0004b5fc) msg_header_pane_t1

0x38ab,	// (0x0004ea32) msg_header_pane_t2_ParamLimits

0x38ab,	// (0x0004ea32) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005a614) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005a614) msg_header_pane_t

0xcb5e,	// (0x00057ce5) msg_body_pane_g1

0x0487,	// (0x0004b60e) msg_body_pane_t1_ParamLimits

0x0487,	// (0x0004b60e) msg_body_pane_t1

0x38bd,	// (0x0004ea44) msg_body_pane_t2_ParamLimits

0x38bd,	// (0x0004ea44) msg_body_pane_t2

0x38cf,	// (0x0004ea56) msg_body_pane_t3_ParamLimits

0x38cf,	// (0x0004ea56) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005a619) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005a619) msg_body_pane_t

0x391b,	// (0x0004eaa2) main_viewer_pane_g1_ParamLimits

0x391b,	// (0x0004eaa2) main_viewer_pane_g1

0x3929,	// (0x0004eab0) main_viewer_pane_g2_ParamLimits

0x3929,	// (0x0004eab0) main_viewer_pane_g2

0x3937,	// (0x0004eabe) main_viewer_pane_g3_ParamLimits

0x3937,	// (0x0004eabe) main_viewer_pane_g3

0x3946,	// (0x0004eacd) main_viewer_pane_g4_ParamLimits

0x3946,	// (0x0004eacd) main_viewer_pane_g4

0x9966,	// (0x00054aed) main_viewer_pane_g5_ParamLimits

0x9966,	// (0x00054aed) main_viewer_pane_g5

0x9966,	// (0x00054aed) main_viewer_pane_g7_ParamLimits

0x9966,	// (0x00054aed) main_viewer_pane_g7

0x9978,	// (0x00054aff) main_viewer_pane_g8_ParamLimits

0x9978,	// (0x00054aff) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005a629) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005a629) main_viewer_pane_g

0xcb66,	// (0x00057ced) viewer_content_pane_ParamLimits

0xcb66,	// (0x00057ced) viewer_content_pane

0x3982,	// (0x0004eb09) main_postcard_pane_g1_ParamLimits

0x3982,	// (0x0004eb09) main_postcard_pane_g1

0x3998,	// (0x0004eb1f) main_postcard_pane_g2_ParamLimits

0x3998,	// (0x0004eb1f) main_postcard_pane_g2

0x39ae,	// (0x0004eb35) main_postcard_pane_g3_ParamLimits

0x39ae,	// (0x0004eb35) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005a63a) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005a63a) main_postcard_pane_g

0x39c5,	// (0x0004eb4c) main_postcard_pane_g4

0xde76,	// (0x00058ffd) smil_status_volume_pane_g2

0x3a08,	// (0x0004eb8f) postcard_pane_ParamLimits

0x3a08,	// (0x0004eb8f) postcard_pane

0xcb74,	// (0x00057cfb) postcard_pane_g1_ParamLimits

0xcb74,	// (0x00057cfb) postcard_pane_g1

0x3a4a,	// (0x0004ebd1) postcard_pane_g2_ParamLimits

0x3a4a,	// (0x0004ebd1) postcard_pane_g2

0x3a56,	// (0x0004ebdd) postcard_pane_g3_ParamLimits

0x3a56,	// (0x0004ebdd) postcard_pane_g3

0xcb82,	// (0x00057d09) postcard_pane_g4_ParamLimits

0xcb82,	// (0x00057d09) postcard_pane_g4

0x3a62,	// (0x0004ebe9) postcard_pane_g5_ParamLimits

0x3a62,	// (0x0004ebe9) postcard_pane_g5

0x3a77,	// (0x0004ebfe) postcard_pane_g6_ParamLimits

0x3a77,	// (0x0004ebfe) postcard_pane_g6

0xcb74,	// (0x00057cfb) postcard_pane_g7_ParamLimits

0xcb74,	// (0x00057cfb) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005a647) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005a647) postcard_pane_g

0x3a8b,	// (0x0004ec12) main_mp2_pane_g1_ParamLimits

0x3a8b,	// (0x0004ec12) main_mp2_pane_g1

0x3a97,	// (0x0004ec1e) main_mp2_pane_g2_ParamLimits

0x3a97,	// (0x0004ec1e) main_mp2_pane_g2

0x3aa3,	// (0x0004ec2a) main_mp2_pane_g3_ParamLimits

0x3aa3,	// (0x0004ec2a) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005a656) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005a656) main_mp2_pane_g

0x3aaf,	// (0x0004ec36) main_mp2_pane_t1_ParamLimits

0x3aaf,	// (0x0004ec36) main_mp2_pane_t1

0x3ac4,	// (0x0004ec4b) main_mp2_pane_t2_ParamLimits

0x3ac4,	// (0x0004ec4b) main_mp2_pane_t2

0x3ad6,	// (0x0004ec5d) main_mp2_pane_t3_ParamLimits

0x3ad6,	// (0x0004ec5d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005a65d) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005a65d) main_mp2_pane_t

0xcb90,	// (0x00057d17) pec_content_pane_ParamLimits

0xcb90,	// (0x00057d17) pec_content_pane

0xc114,	// (0x0005729b) scroll_pane_cp015

0xcba2,	// (0x00057d29) pec_attribute_pane_ParamLimits

0xcba2,	// (0x00057d29) pec_attribute_pane

0x3ae8,	// (0x0004ec6f) pec_content_pane_g1_ParamLimits

0x3ae8,	// (0x0004ec6f) pec_content_pane_g1

0xcbb2,	// (0x00057d39) pec_content_pane_t1_ParamLimits

0xcbb2,	// (0x00057d39) pec_content_pane_t1

0xcbc4,	// (0x00057d4b) pec_content_pane_t2_ParamLimits

0xcbc4,	// (0x00057d4b) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005a664) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005a664) pec_content_pane_t

0x3af4,	// (0x0004ec7b) list_single_graphic_pane_cp01_ParamLimits

0x3af4,	// (0x0004ec7b) list_single_graphic_pane_cp01

0xb7a8,	// (0x0005692f) bg_popup_sub_pane_cp04

0xcbd6,	// (0x00057d5d) popup_mup_playback_window_g1

0xcbe2,	// (0x00057d69) popup_mup_playback_window_t1

0xcbf7,	// (0x00057d7e) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005a669) popup_mup_playback_window_t

0xcc2e,	// (0x00057db5) main_image_pane_g1_ParamLimits

0xcc2e,	// (0x00057db5) main_image_pane_g1

0xcc71,	// (0x00057df8) scroll_pane_cp018_ParamLimits

0xcc71,	// (0x00057df8) scroll_pane_cp018

0xcc89,	// (0x00057e10) scroll_pane_cp016_ParamLimits

0xcc89,	// (0x00057e10) scroll_pane_cp016

0x3bc1,	// (0x0004ed48) smil2_image_pane_ParamLimits

0x3bc1,	// (0x0004ed48) smil2_image_pane

0x3bf1,	// (0x0004ed78) smil2_root_pane_ParamLimits

0x3bf1,	// (0x0004ed78) smil2_root_pane

0x3c29,	// (0x0004edb0) smil2_text_pane_ParamLimits

0x3c29,	// (0x0004edb0) smil2_text_pane

0xb54d,	// (0x000566d4) bg_list_pane_cp06

0xccc5,	// (0x00057e4c) grid_radio_pane

0xb54d,	// (0x000566d4) bg_popup_window_pane_cp06

0xcccd,	// (0x00057e54) main_fmradio_pane_t1

0xc65d,	// (0x000577e4) heading_pane_cp04

0xccdb,	// (0x00057e62) main_fmradio_pane_t2

0xdcac,	// (0x00058e33) popup_cale_lunar_info_window_g1

0xcce9,	// (0x00057e70) main_fmradio_pane_t3

0xdcb4,	// (0x00058e3b) popup_cale_lunar_info_window_g2

0xccf7,	// (0x00057e7e) main_fmradio_pane_t4

0x0001,

0xcd05,	// (0x00057e8c) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0005a744) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005a67e) main_fmradio_pane_t

0xcd13,	// (0x00057e9a) wait_bar_pane_cp03

0xcd1b,	// (0x00057ea2) cell_fmradio_pane_ParamLimits

0xcd1b,	// (0x00057ea2) cell_fmradio_pane

0xcb74,	// (0x00057cfb) cell_fmradio_pane_g1_ParamLimits

0xcb74,	// (0x00057cfb) cell_fmradio_pane_g1

0xb54d,	// (0x000566d4) grid_highlight_pane_cp011

0xcd2e,	// (0x00057eb5) poc_content_pane_ParamLimits

0xcd2e,	// (0x00057eb5) poc_content_pane

0xcd40,	// (0x00057ec7) scroll_pane_cp019

0x3ca9,	// (0x0004ee30) popup_call_poc_act_window_ParamLimits

0x3ca9,	// (0x0004ee30) popup_call_poc_act_window

0x3ccd,	// (0x0004ee54) popup_call_poc_inact_window_ParamLimits

0x3ccd,	// (0x0004ee54) popup_call_poc_inact_window

0xf594,	// (0x0005a71b) bg_popup_call_poc_act_pane_g

0xdc24,	// (0x00058dab) bg_popup_call_poc_inact_pane_g1

0xdc2c,	// (0x00058db3) bg_popup_call_poc_inact_pane_g2

0xcd48,	// (0x00057ecf) popup_call_poc_act_window_g2

0xdc34,	// (0x00058dbb) bg_popup_call_poc_inact_pane_g3

0xdc3c,	// (0x00058dc3) bg_popup_call_poc_inact_pane_g4

0xdc44,	// (0x00058dcb) bg_popup_call_poc_inact_pane_g5

0xcd50,	// (0x00057ed7) popup_call_poc_act_window_t1_ParamLimits

0xcd50,	// (0x00057ed7) popup_call_poc_act_window_t1

0xcd78,	// (0x00057eff) popup_call_poc_act_window_t2_ParamLimits

0xcd78,	// (0x00057eff) popup_call_poc_act_window_t2

0xcda0,	// (0x00057f27) popup_call_poc_act_window_t3_ParamLimits

0xcda0,	// (0x00057f27) popup_call_poc_act_window_t3

0xcdc8,	// (0x00057f4f) popup_call_poc_act_window_t4_ParamLimits

0xcdc8,	// (0x00057f4f) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005a689) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005a689) popup_call_poc_act_window_t

0xdc4c,	// (0x00058dd3) bg_popup_call_poc_inact_pane_g6

0xdc54,	// (0x00058ddb) bg_popup_call_poc_inact_pane_g7

0xdc5c,	// (0x00058de3) bg_popup_call_poc_inact_pane_g8

0xcdda,	// (0x00057f61) popup_call_poc_inact_window_g2

0xdc64,	// (0x00058deb) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0005a708) bg_popup_call_poc_inact_pane_g

0xcde2,	// (0x00057f69) popup_call_poc_inact_window_t1_ParamLimits

0xcde2,	// (0x00057f69) popup_call_poc_inact_window_t1

0xcdf7,	// (0x00057f7e) popup_call_poc_inact_window_t2_ParamLimits

0xcdf7,	// (0x00057f7e) popup_call_poc_inact_window_t2

0xce0c,	// (0x00057f93) popup_call_poc_inact_window_t3_ParamLimits

0xce0c,	// (0x00057f93) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005a692) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005a692) popup_call_poc_inact_window_t

0xdde9,	// (0x00058f70) context_pane_ParamLimits

0x44fc,	// (0x0004f683) signal_pane_ParamLimits

0xbf6b,	// (0x000570f2) main_call2_pane

0x99bd,	// (0x00054b44) popup_phob_thumbnail2_window_ParamLimits

0x99bd,	// (0x00054b44) popup_phob_thumbnail2_window

0x994e,	// (0x00054ad5) aid_hotspot_pointer_arrow_pane

0x9956,	// (0x00054add) aid_hotspot_pointer_hand_pane

0x4016,	// (0x0004f19d) phob_pre_status_pane_g5

0x1e1e,	// (0x0004cfa5) cams_zoom_pane_ParamLimits

0x1e2d,	// (0x0004cfb4) image_vga_pane_ParamLimits

0x1e47,	// (0x0004cfce) main_camera_pane_g1_ParamLimits

0x1e59,	// (0x0004cfe0) main_camera_pane_g2_ParamLimits

0x1e69,	// (0x0004cff0) main_camera_pane_g3_ParamLimits

0x1e79,	// (0x0004d000) main_camera_pane_g4_ParamLimits

0x1e89,	// (0x0004d010) main_camera_pane_g5_ParamLimits

0x1e99,	// (0x0004d020) main_camera_pane_g6_ParamLimits

0x1eab,	// (0x0004d032) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005a391) main_camera_pane_g_ParamLimits

0x1ebb,	// (0x0004d042) main_camera_pane_t1_ParamLimits

0x1ed1,	// (0x0004d058) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005a3a2) main_camera_pane_t_ParamLimits

0xb7a8,	// (0x0005692f) bg_popup_preview_window_pane_cp01_ParamLimits

0xb7a8,	// (0x0005692f) bg_popup_preview_window_pane_cp01

0xce21,	// (0x00057fa8) popup_phob_thumbnail2_window_g1_ParamLimits

0xce21,	// (0x00057fa8) popup_phob_thumbnail2_window_g1

0xb54d,	// (0x000566d4) call2_cli_visual_pane

0x3d01,	// (0x0004ee88) popup_call2_audio_conf_window_ParamLimits

0x3d01,	// (0x0004ee88) popup_call2_audio_conf_window

0x3d21,	// (0x0004eea8) popup_call2_audio_first_window_ParamLimits

0x3d21,	// (0x0004eea8) popup_call2_audio_first_window

0x3db7,	// (0x0004ef3e) popup_call2_audio_in_window_ParamLimits

0x3db7,	// (0x0004ef3e) popup_call2_audio_in_window

0x3dff,	// (0x0004ef86) popup_call2_audio_out_window_ParamLimits

0x3dff,	// (0x0004ef86) popup_call2_audio_out_window

0x3e69,	// (0x0004eff0) popup_call2_audio_second_window_ParamLimits

0x3e69,	// (0x0004eff0) popup_call2_audio_second_window

0x3ecf,	// (0x0004f056) popup_call2_audio_wait_window_ParamLimits

0x3ecf,	// (0x0004f056) popup_call2_audio_wait_window

0xb54d,	// (0x000566d4) bg_popup_call2_act_pane_cp03

0xb78a,	// (0x00056911) list_conf_pane_cp

0xce2d,	// (0x00057fb4) popup_call2_audio_conf_window_t1

0xc6ba,	// (0x00057841) list_single_graphic_popup_conf2_pane_ParamLimits

0xc6ba,	// (0x00057841) list_single_graphic_popup_conf2_pane

0xc6cd,	// (0x00057854) list_highlight_pane_cp04

0xce3b,	// (0x00057fc2) list_single_graphic_popup_conf2_pane_g1

0xc6de,	// (0x00057865) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005a699) list_single_graphic_popup_conf2_pane_g

0xce45,	// (0x00057fcc) list_single_graphic_popup_conf2_pane_t1

0xce53,	// (0x00057fda) bg_popup_call2_act_pane_cp01_ParamLimits

0xce53,	// (0x00057fda) bg_popup_call2_act_pane_cp01

0xcedd,	// (0x00058064) call_type_pane_cp05_ParamLimits

0xcedd,	// (0x00058064) call_type_pane_cp05

0xcf31,	// (0x000580b8) popup_call2_audio_second_window_g1_ParamLimits

0xcf31,	// (0x000580b8) popup_call2_audio_second_window_g1

0xcf85,	// (0x0005810c) popup_call2_audio_second_window_g2_ParamLimits

0xcf85,	// (0x0005810c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005a69e) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005a69e) popup_call2_audio_second_window_g

0xcfea,	// (0x00058171) popup_call2_audio_second_window_t1_ParamLimits

0xcfea,	// (0x00058171) popup_call2_audio_second_window_t1

0xd0a5,	// (0x0005822c) popup_call2_audio_second_window_t2_ParamLimits

0xd0a5,	// (0x0005822c) popup_call2_audio_second_window_t2

0xd0f8,	// (0x0005827f) popup_call2_audio_second_window_t3_ParamLimits

0xd0f8,	// (0x0005827f) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005a6a5) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005a6a5) popup_call2_audio_second_window_t

0xb54d,	// (0x000566d4) bg_popup_call2_in_pane_cp02

0xb557,	// (0x000566de) call_type_pane_cp04

0xb55f,	// (0x000566e6) popup_call2_audio_wait_window_g1

0xb567,	// (0x000566ee) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005a280) popup_call2_audio_wait_window_g

0xb56f,	// (0x000566f6) popup_call2_audio_wait_window_t3

0xd1eb,	// (0x00058372) bg_popup_call2_act_pane_ParamLimits

0xd1eb,	// (0x00058372) bg_popup_call2_act_pane

0xd2ab,	// (0x00058432) call_type_pane_cp03_ParamLimits

0xd2ab,	// (0x00058432) call_type_pane_cp03

0xd30f,	// (0x00058496) popup_call2_audio_first_window_g1_ParamLimits

0xd30f,	// (0x00058496) popup_call2_audio_first_window_g1

0xd37f,	// (0x00058506) popup_call2_audio_first_window_g2_ParamLimits

0xd37f,	// (0x00058506) popup_call2_audio_first_window_g2

0xca70,	// (0x00057bf7) popup_call2_audio_first_window_g3_ParamLimits

0xca70,	// (0x00057bf7) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005a6ae) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005a6ae) popup_call2_audio_first_window_g

0xd45d,	// (0x000585e4) popup_call2_audio_first_window_t1_ParamLimits

0xd45d,	// (0x000585e4) popup_call2_audio_first_window_t1

0xd560,	// (0x000586e7) popup_call2_audio_first_window_t4_ParamLimits

0xd560,	// (0x000586e7) popup_call2_audio_first_window_t4

0xd643,	// (0x000587ca) popup_call2_audio_first_window_t5_ParamLimits

0xd643,	// (0x000587ca) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005a6b9) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005a6b9) popup_call2_audio_first_window_t

0xb7a0,	// (0x00056927) bg_popup_call2_act_pane_g1

0xdcbc,	// (0x00058e43) popup_cale_lunar_info_window_t1

0xdcca,	// (0x00058e51) popup_cale_lunar_info_window_t2

0xdcd8,	// (0x00058e5f) popup_cale_lunar_info_window_t3

0xb54d,	// (0x000566d4) bg_popup_call2_bubble_pane

0xd750,	// (0x000588d7) bg_popup_call2_in_pane_cp01_ParamLimits

0xd750,	// (0x000588d7) bg_popup_call2_in_pane_cp01

0xb229,	// (0x000563b0) call_type_pane_cp02

0xd798,	// (0x0005891f) popup_call2_audio_out_window_g1_ParamLimits

0xd798,	// (0x0005891f) popup_call2_audio_out_window_g1

0xd7c4,	// (0x0005894b) popup_call2_audio_out_window_g2_ParamLimits

0xd7c4,	// (0x0005894b) popup_call2_audio_out_window_g2

0xd7ec,	// (0x00058973) popup_call2_audio_out_window_g3_ParamLimits

0xd7ec,	// (0x00058973) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005a6c2) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005a6c2) popup_call2_audio_out_window_g

0xd827,	// (0x000589ae) popup_call2_audio_out_window_t1_ParamLimits

0xd827,	// (0x000589ae) popup_call2_audio_out_window_t1

0xd886,	// (0x00058a0d) popup_call2_audio_out_window_t2_ParamLimits

0xd886,	// (0x00058a0d) popup_call2_audio_out_window_t2

0xd8da,	// (0x00058a61) popup_call2_audio_out_window_t3_ParamLimits

0xd8da,	// (0x00058a61) popup_call2_audio_out_window_t3

0xd8f0,	// (0x00058a77) popup_call2_audio_out_window_t4_ParamLimits

0xd8f0,	// (0x00058a77) popup_call2_audio_out_window_t4

0xd906,	// (0x00058a8d) popup_call2_audio_out_window_t5_ParamLimits

0xd906,	// (0x00058a8d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005a6cb) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005a6cb) popup_call2_audio_out_window_t

0xd96a,	// (0x00058af1) bg_popup_call2_in_pane_ParamLimits

0xd96a,	// (0x00058af1) bg_popup_call2_in_pane

0xd9c6,	// (0x00058b4d) popup_call2_audio_in_window_g1_ParamLimits

0xd9c6,	// (0x00058b4d) popup_call2_audio_in_window_g1

0xd9fe,	// (0x00058b85) popup_call2_audio_in_window_g2_ParamLimits

0xd9fe,	// (0x00058b85) popup_call2_audio_in_window_g2

0xda36,	// (0x00058bbd) popup_call2_audio_in_window_g3_ParamLimits

0xda36,	// (0x00058bbd) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005a6d8) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005a6d8) popup_call2_audio_in_window_g

0xda8e,	// (0x00058c15) popup_call2_audio_in_window_t1_ParamLimits

0xda8e,	// (0x00058c15) popup_call2_audio_in_window_t1

0xdb0e,	// (0x00058c95) popup_call2_audio_in_window_t2_ParamLimits

0xdb0e,	// (0x00058c95) popup_call2_audio_in_window_t2

0xdb8e,	// (0x00058d15) popup_call2_audio_in_window_t3_ParamLimits

0xdb8e,	// (0x00058d15) popup_call2_audio_in_window_t3

0xdba8,	// (0x00058d2f) popup_call2_audio_in_window_t4_ParamLimits

0xdba8,	// (0x00058d2f) popup_call2_audio_in_window_t4

0xdbba,	// (0x00058d41) popup_call2_audio_in_window_t5_ParamLimits

0xdbba,	// (0x00058d41) popup_call2_audio_in_window_t5

0xdbcf,	// (0x00058d56) popup_call2_audio_in_window_t6_ParamLimits

0xdbcf,	// (0x00058d56) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005a6e1) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005a6e1) popup_call2_audio_in_window_t

0xb7a0,	// (0x00056927) bg_popup_call2_in_pane_g1

0xdce6,	// (0x00058e6d) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0005a749) popup_cale_lunar_info_window_t

0xb7a8,	// (0x0005692f) bg_popup_call2_rect_pane_ParamLimits

0xb7a8,	// (0x0005692f) bg_popup_call2_rect_pane

0xb54d,	// (0x000566d4) call2_cli_visual_graphic_pane

0xb54d,	// (0x000566d4) call2_cli_visual_text_pane

0x99e4,	// (0x00054b6b) smil_status_volume_pane_g3

0x0002,

0xbdfb,	// (0x00056f82) call2_cli_visual_graphic_pane_g1

0xbdfb,	// (0x00056f82) call2_cli_visual_graphic_pane_g2

0xbdfb,	// (0x00056f82) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005a6ee) call2_cli_visual_graphic_pane_g

0xdbe4,	// (0x00058d6b) bg_popup_call2_rect_pane_g1

0xbe87,	// (0x0005700e) bg_popup_call2_rect_pane_g2

0xdbec,	// (0x00058d73) bg_popup_call2_rect_pane_g3

0xdbf4,	// (0x00058d7b) bg_popup_call2_rect_pane_g4

0xdbfc,	// (0x00058d83) bg_popup_call2_rect_pane_g5

0xdc04,	// (0x00058d8b) bg_popup_call2_rect_pane_g6

0xdc0c,	// (0x00058d93) bg_popup_call2_rect_pane_g7

0xdc14,	// (0x00058d9b) bg_popup_call2_rect_pane_g8

0xdc1c,	// (0x00058da3) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005a6f5) bg_popup_call2_rect_pane_g

0xdc24,	// (0x00058dab) bg_popup_call2_bubble_pane_g1

0xdc2c,	// (0x00058db3) bg_popup_call2_bubble_pane_g2

0xdc34,	// (0x00058dbb) bg_popup_call2_bubble_pane_g3

0xdc3c,	// (0x00058dc3) bg_popup_call2_bubble_pane_g4

0xdc44,	// (0x00058dcb) bg_popup_call2_bubble_pane_g5

0xdc4c,	// (0x00058dd3) bg_popup_call2_bubble_pane_g6

0xdc54,	// (0x00058ddb) bg_popup_call2_bubble_pane_g7

0xdc5c,	// (0x00058de3) bg_popup_call2_bubble_pane_g8

0xdc64,	// (0x00058deb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005a708) bg_popup_call2_bubble_pane_g

0x1863,	// (0x0004c9ea) aid_cale_week_size_cell_pane

0x1ee7,	// (0x0004d06e) aid_cams_cif_uncrop_pane_ParamLimits

0x1ee7,	// (0x0004d06e) aid_cams_cif_uncrop_pane

0x2097,	// (0x0004d21e) aid_cams_size_cell_ParamLimits

0x2097,	// (0x0004d21e) aid_cams_size_cell

0x20ab,	// (0x0004d232) grid_cams_pane_ParamLimits

0x20c5,	// (0x0004d24c) linegrid_cams_pane_ParamLimits

0x21ac,	// (0x0004d333) call_video_pane_t1

0x21ca,	// (0x0004d351) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005a3f5) call_video_pane_t

0x25f8,	// (0x0004d77f) aid_cale_month_size_cell_pane_ParamLimits

0x25f8,	// (0x0004d77f) aid_cale_month_size_cell_pane

0xf60b,	// (0x0005a792) smil_status_volume_pane_g

0x99f1,	// (0x00054b78) volume_smil_pane_ParamLimits

0x97ad,	// (0x00054934) aid_popup2_width_pane

0x17cb,	// (0x0004c952) cell_qdial_pane_g4_ParamLimits

0x17cb,	// (0x0004c952) cell_qdial_pane_g4

0x3388,	// (0x0004e50f) aid_blid_cardinal_pane_ParamLimits

0x3394,	// (0x0004e51b) aid_blid_destination_pane_ParamLimits

0x3394,	// (0x0004e51b) aid_blid_destination_pane

0xb7a8,	// (0x0005692f) bg_popup_call_poc_act_pane_ParamLimits

0xb7a8,	// (0x0005692f) bg_popup_call_poc_act_pane

0xb7a8,	// (0x0005692f) bg_popup_call_poc_inact_pane_ParamLimits

0xb7a8,	// (0x0005692f) bg_popup_call_poc_inact_pane

0xdc6c,	// (0x00058df3) bg_popup_call_poc_act_pane_g1

0xdc74,	// (0x00058dfb) bg_popup_call_poc_act_pane_g2

0xdc7c,	// (0x00058e03) bg_popup_call_poc_act_pane_g3

0xdc3c,	// (0x00058dc3) bg_popup_call_poc_act_pane_g4

0xdc44,	// (0x00058dcb) bg_popup_call_poc_act_pane_g5

0xdc84,	// (0x00058e0b) bg_popup_call_poc_act_pane_g6

0xdc54,	// (0x00058ddb) bg_popup_call_poc_act_pane_g7

0xdc8c,	// (0x00058e13) bg_popup_call_poc_act_pane_g8

0xb54d,	// (0x000566d4) main_usb_pane

0x9998,	// (0x00054b1f) popup_cale_lunar_info_window

0x24a4,	// (0x0004d62b) im_reading_pane_t1_ParamLimits

0xc06c,	// (0x000571f3) list_im_pane_ParamLimits

0xc07d,	// (0x00057204) scroll_pane_cp07_ParamLimits

0xb54d,	// (0x000566d4) grid_highlight_pane_cp012

0xb7a8,	// (0x0005692f) mup_scale_pane_ParamLimits

0xcb74,	// (0x00057cfb) main_usb_pane_g1_ParamLimits

0xcb74,	// (0x00057cfb) main_usb_pane_g1

0x3f2b,	// (0x0004f0b2) main_usb_pane_g2_ParamLimits

0x3f2b,	// (0x0004f0b2) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0005a732) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0005a732) main_usb_pane_g

0x3f41,	// (0x0004f0c8) main_usb_pane_t1_ParamLimits

0x3f41,	// (0x0004f0c8) main_usb_pane_t1

0x3f53,	// (0x0004f0da) main_usb_pane_t2_ParamLimits

0x3f53,	// (0x0004f0da) main_usb_pane_t2

0x3f65,	// (0x0004f0ec) main_usb_pane_t3_ParamLimits

0x3f65,	// (0x0004f0ec) main_usb_pane_t3

0x3f77,	// (0x0004f0fe) main_usb_pane_t4_ParamLimits

0x3f77,	// (0x0004f0fe) main_usb_pane_t4

0x3f89,	// (0x0004f110) main_usb_pane_t5_ParamLimits

0x3f89,	// (0x0004f110) main_usb_pane_t5

0x3f9b,	// (0x0004f122) main_usb_pane_t6_ParamLimits

0x3f9b,	// (0x0004f122) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0005a737) main_usb_pane_t_ParamLimits

0x3337,	// (0x0004e4be) aid_text_placing

0x3340,	// (0x0004e4c7) main_location2_pane_t1_ParamLimits

0x3352,	// (0x0004e4d9) main_location2_pane_t2_ParamLimits

0x3364,	// (0x0004e4eb) main_location2_pane_t3_ParamLimits

0x3376,	// (0x0004e4fd) main_location2_pane_t4_ParamLimits

0x3376,	// (0x0004e4fd) main_location2_pane_t4

0xf3cf,	// (0x0005a556) main_location2_pane_t_ParamLimits

0xb7e4,	// (0x0005696b) find_pinb_pane_g2_ParamLimits

0xb7e4,	// (0x0005696b) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005a2a6) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005a2a6) find_pinb_pane_g

0xb7f0,	// (0x00056977) find_pinb_pane_t1_ParamLimits

0xb802,	// (0x00056989) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005a2ab) find_pinb_pane_t_ParamLimits

0xb54d,	// (0x000566d4) main_call3_pane

0x2ae3,	// (0x0004dc6a) cale_month_day_heading_pane_t1_ParamLimits

0x2b69,	// (0x0004dcf0) cale_month_day_heading_pane_t2_ParamLimits

0x2be2,	// (0x0004dd69) cale_month_day_heading_pane_t3_ParamLimits

0x2c5b,	// (0x0004dde2) cale_month_day_heading_pane_t4_ParamLimits

0x2cdc,	// (0x0004de63) cale_month_day_heading_pane_t5_ParamLimits

0x2d65,	// (0x0004deec) cale_month_day_heading_pane_t6_ParamLimits

0x2dee,	// (0x0004df75) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005a42d) cale_month_day_heading_pane_t_ParamLimits

0xc2c7,	// (0x0005744e) smil_status_volume_pane

0x3a26,	// (0x0004ebad) postcard_address_pane_ParamLimits

0x3a26,	// (0x0004ebad) postcard_address_pane

0x3a38,	// (0x0004ebbf) postcard_message_pane_ParamLimits

0x3a38,	// (0x0004ebbf) postcard_message_pane

0x3f09,	// (0x0004f090) call2_cli_visual_pane_t1_ParamLimits

0x3f09,	// (0x0004f090) call2_cli_visual_pane_t1

0x4729,	// (0x0004f8b0) postcard_message_pane_t1_ParamLimits

0x4729,	// (0x0004f8b0) postcard_message_pane_t1

0x4712,	// (0x0004f899) postcard_address_pane_t1_ParamLimits

0x4712,	// (0x0004f899) postcard_address_pane_t1

0x46fe,	// (0x0004f885) popup_call3_audio_in_window_ParamLimits

0x46fe,	// (0x0004f885) popup_call3_audio_in_window

0x4589,	// (0x0004f710) bg_popup_call3_in_pane_ParamLimits

0x4589,	// (0x0004f710) bg_popup_call3_in_pane

0x45ff,	// (0x0004f786) popup_call3_audio_in_window_g1_ParamLimits

0x45ff,	// (0x0004f786) popup_call3_audio_in_window_g1

0x461f,	// (0x0004f7a6) popup_call3_audio_in_window_g2_ParamLimits

0x461f,	// (0x0004f7a6) popup_call3_audio_in_window_g2

0x463f,	// (0x0004f7c6) popup_call3_audio_in_window_g3_ParamLimits

0x463f,	// (0x0004f7c6) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0005a799) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0005a799) popup_call3_audio_in_window_g

0x4670,	// (0x0004f7f7) popup_call3_audio_in_window_t1_ParamLimits

0x4670,	// (0x0004f7f7) popup_call3_audio_in_window_t1

0x46ae,	// (0x0004f835) popup_call3_audio_in_window_t2_ParamLimits

0x46ae,	// (0x0004f835) popup_call3_audio_in_window_t2

0x46ec,	// (0x0004f873) popup_call3_audio_in_window_t3_ParamLimits

0x46ec,	// (0x0004f873) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0005a7a2) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0005a7a2) popup_call3_audio_in_window_t

0xbf6b,	// (0x000570f2) bg_popup_call3_rect_pane

0xdbe4,	// (0x00058d6b) bg_popup_call3_rect_pane_g1

0xbe87,	// (0x0005700e) bg_popup_call3_rect_pane_g2

0xdbec,	// (0x00058d73) bg_popup_call3_rect_pane_g3

0xdbf4,	// (0x00058d7b) bg_popup_call3_rect_pane_g4

0xdbfc,	// (0x00058d83) bg_popup_call3_rect_pane_g5

0xdc04,	// (0x00058d8b) bg_popup_call3_rect_pane_g6

0xdc0c,	// (0x00058d93) bg_popup_call3_rect_pane_g7

0x3678,	// (0x0004e7ff) mup_visualizer_osc_pane

0xca96,	// (0x00057c1d) mup_visualizer_spec_pane

0x45b9,	// (0x0004f740) call3_video_qcif_pane_ParamLimits

0x45b9,	// (0x0004f740) call3_video_qcif_pane

0x45cc,	// (0x0004f753) call3_video_qcif_uncrop_pane_ParamLimits

0x45cc,	// (0x0004f753) call3_video_qcif_uncrop_pane

0x45da,	// (0x0004f761) call3_video_subqcif_pane_ParamLimits

0x45da,	// (0x0004f761) call3_video_subqcif_pane

0x45ee,	// (0x0004f775) call3_video_subqcif_uncrop_pane_ParamLimits

0x45ee,	// (0x0004f775) call3_video_subqcif_uncrop_pane

0x465f,	// (0x0004f7e6) popup_call3_audio_in_window_g4_ParamLimits

0x465f,	// (0x0004f7e6) popup_call3_audio_in_window_g4

0x4578,	// (0x0004f6ff) mup_spec_half_pane

0x4581,	// (0x0004f708) mup_spec_half_pane_cp

0xde49,	// (0x00058fd0) mup_osc_middle_pane

0xde52,	// (0x00058fd9) mup_visualizer_osc_pane_g1

0x4558,	// (0x0004f6df) mup_spec_bar_pane_ParamLimits

0x4558,	// (0x0004f6df) mup_spec_bar_pane

0xde36,	// (0x00058fbd) mup_spec_bar_pane_g1

0xde40,	// (0x00058fc7) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005a78d) mup_spec_bar_pane_g

0x1863,	// (0x0004c9ea) aid_cale_week_size_cell_pane_ParamLimits

0x187d,	// (0x0004ca04) bg_cale_heading_pane_ParamLimits

0xbec4,	// (0x0005704b) bg_cale_pane_cp01_ParamLimits

0x1895,	// (0x0004ca1c) cale_week_corner_pane_ParamLimits

0x18b4,	// (0x0004ca3b) cale_week_day_heading_pane_ParamLimits

0x18d1,	// (0x0004ca58) cale_week_scroll_pane_g1_ParamLimits

0x18e4,	// (0x0004ca6b) cale_week_scroll_pane_g2_ParamLimits

0x18fc,	// (0x0004ca83) cale_week_scroll_pane_g3_ParamLimits

0x1914,	// (0x0004ca9b) cale_week_scroll_pane_g4_ParamLimits

0x192c,	// (0x0004cab3) cale_week_scroll_pane_g5_ParamLimits

0x194c,	// (0x0004cad3) cale_week_scroll_pane_g6_ParamLimits

0x196c,	// (0x0004caf3) cale_week_scroll_pane_g7_ParamLimits

0x198c,	// (0x0004cb13) cale_week_scroll_pane_g8_ParamLimits

0x19b0,	// (0x0004cb37) cale_week_scroll_pane_g9_ParamLimits

0x19c8,	// (0x0004cb4f) cale_week_scroll_pane_g10_ParamLimits

0x19e0,	// (0x0004cb67) cale_week_scroll_pane_g11_ParamLimits

0x19f8,	// (0x0004cb7f) cale_week_scroll_pane_g12_ParamLimits

0x1a10,	// (0x0004cb97) cale_week_scroll_pane_g13_ParamLimits

0x1a10,	// (0x0004cb97) cale_week_scroll_pane_g14_ParamLimits

0x1a10,	// (0x0004cb97) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005a337) cale_week_scroll_pane_g_ParamLimits

0x1a4c,	// (0x0004cbd3) cale_week_time_pane_ParamLimits

0x1a70,	// (0x0004cbf7) grid_cale_week_pane_ParamLimits

0xbee1,	// (0x00057068) listscroll_cale_week_pane_t1

0xbef3,	// (0x0005707a) scroll_pane_cp08_ParamLimits

0x2658,	// (0x0004d7df) cale_month_corner_pane_ParamLimits

0xc29d,	// (0x00057424) cale_month_pane_t1

0x2a76,	// (0x0004dbfd) cale_month_week_pane_ParamLimits

0x3193,	// (0x0004e31a) popup_call_status_window_g1_ParamLimits

0x31a7,	// (0x0004e32e) popup_call_status_window_g2_ParamLimits

0x31bb,	// (0x0004e342) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005a4dd) popup_call_status_window_g_ParamLimits

0xc64d,	// (0x000577d4) aid_call2_pane

0x0467,	// (0x0004b5ee) msg_header_pane_g1

0x3a26,	// (0x0004ebad) postcard_address2_pane_ParamLimits

0x3a26,	// (0x0004ebad) postcard_address2_pane

0x3a38,	// (0x0004ebbf) postcard_message2_pane_ParamLimits

0x3a38,	// (0x0004ebbf) postcard_message2_pane

0x450a,	// (0x0004f691) message2_row_pane_ParamLimits

0x450a,	// (0x0004f691) message2_row_pane

0x4526,	// (0x0004f6ad) address2_row_pane_ParamLimits

0x4526,	// (0x0004f6ad) address2_row_pane

0xde04,	// (0x00058f8b) postcard_message2_row_pane_g1

0xde0c,	// (0x00058f93) postcard_message2_row_pane_t1

0xde04,	// (0x00058f8b) address2_row_pane_g1

0xde0c,	// (0x00058f93) address2_row_pane_t1

0x1da0,	// (0x0004cf27) aid_size_cell_vorec

0xb54d,	// (0x000566d4) main_rss_pane

0x4539,	// (0x0004f6c0) rss_list_single_pane_ParamLimits

0x4539,	// (0x0004f6c0) rss_list_single_pane

0xde1a,	// (0x00058fa1) rss_list_single_pane_t1

0xde28,	// (0x00058faf) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0005a788) rss_list_single_pane_t

0xb54d,	// (0x000566d4) main_camera2_pane

0xb54d,	// (0x000566d4) main_video2_pane

0x47a2,	// (0x0004f929) cams_zoom_pane_cp2_ParamLimits

0x47a2,	// (0x0004f929) cams_zoom_pane_cp2

0x47c2,	// (0x0004f949) image2_vga_pane_ParamLimits

0x47c2,	// (0x0004f949) image2_vga_pane

0x4813,	// (0x0004f99a) main_camera2_pane_g1_ParamLimits

0x4813,	// (0x0004f99a) main_camera2_pane_g1

0x4833,	// (0x0004f9ba) main_camera2_pane_g2_ParamLimits

0x4833,	// (0x0004f9ba) main_camera2_pane_g2

0x4853,	// (0x0004f9da) main_camera2_pane_g3_ParamLimits

0x4853,	// (0x0004f9da) main_camera2_pane_g3

0x4873,	// (0x0004f9fa) main_camera2_pane_g4_ParamLimits

0x4873,	// (0x0004f9fa) main_camera2_pane_g4

0x4893,	// (0x0004fa1a) main_camera2_pane_g5_ParamLimits

0x4893,	// (0x0004fa1a) main_camera2_pane_g5

0x48b3,	// (0x0004fa3a) main_camera2_pane_g6_ParamLimits

0x48b3,	// (0x0004fa3a) main_camera2_pane_g6

0x48d3,	// (0x0004fa5a) main_camera2_pane_g7_ParamLimits

0x48d3,	// (0x0004fa5a) main_camera2_pane_g7

0x48f3,	// (0x0004fa7a) main_camera2_pane_g8_ParamLimits

0x48f3,	// (0x0004fa7a) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0005a7a9) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0005a7a9) main_camera2_pane_g

0x4933,	// (0x0004faba) main_camera2_pane_t1_ParamLimits

0x4933,	// (0x0004faba) main_camera2_pane_t1

0x4968,	// (0x0004faef) main_camera2_pane_t2_ParamLimits

0x4968,	// (0x0004faef) main_camera2_pane_t2

0x498e,	// (0x0004fb15) main_camera2_pane_t3_ParamLimits

0x498e,	// (0x0004fb15) main_camera2_pane_t3

0x49ec,	// (0x0004fb73) main_camera2_pane_t4_ParamLimits

0x49ec,	// (0x0004fb73) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0005a7bc) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0005a7bc) main_camera2_pane_t

0x4a7e,	// (0x0004fc05) cams_zoom_pane_cp4_ParamLimits

0x4a7e,	// (0x0004fc05) cams_zoom_pane_cp4

0x4a94,	// (0x0004fc1b) image2_cif_pane_ParamLimits

0x4a94,	// (0x0004fc1b) image2_cif_pane

0x4abf,	// (0x0004fc46) image2_subqcif_pane_ParamLimits

0x4abf,	// (0x0004fc46) image2_subqcif_pane

0x4ad9,	// (0x0004fc60) main_video2_pane_g1_ParamLimits

0x4ad9,	// (0x0004fc60) main_video2_pane_g1

0x4af3,	// (0x0004fc7a) main_video2_pane_g2_ParamLimits

0x4af3,	// (0x0004fc7a) main_video2_pane_g2

0x4b09,	// (0x0004fc90) main_video2_pane_g3_ParamLimits

0x4b09,	// (0x0004fc90) main_video2_pane_g3

0x4b1f,	// (0x0004fca6) main_video2_pane_g4_ParamLimits

0x4b1f,	// (0x0004fca6) main_video2_pane_g4

0x4b35,	// (0x0004fcbc) main_video2_pane_g5_ParamLimits

0x4b35,	// (0x0004fcbc) main_video2_pane_g5

0x4b4b,	// (0x0004fcd2) main_video2_pane_g6_ParamLimits

0x4b4b,	// (0x0004fcd2) main_video2_pane_g6

0x0005,

0xf644,	// (0x0005a7cb) main_video2_pane_g_ParamLimits

0xf644,	// (0x0005a7cb) main_video2_pane_g

0x4b65,	// (0x0004fcec) main_video2_pane_t1_ParamLimits

0x4b65,	// (0x0004fcec) main_video2_pane_t1

0x4b89,	// (0x0004fd10) main_video2_pane_t2_ParamLimits

0x4b89,	// (0x0004fd10) main_video2_pane_t2

0x4bd7,	// (0x0004fd5e) main_video2_pane_t3_ParamLimits

0x4bd7,	// (0x0004fd5e) main_video2_pane_t3

0x0002,

0xf651,	// (0x0005a7d8) main_video2_pane_t_ParamLimits

0xf651,	// (0x0005a7d8) main_video2_pane_t

0x4056,	// (0x0004f1dd) call_muted_g2

0x0001,

0xf5f3,	// (0x0005a77a) call_muted_g

0xb54d,	// (0x000566d4) main_mup2_pane

0x4c1b,	// (0x0004fda2) main_mup2_pane_g1_ParamLimits

0x4c1b,	// (0x0004fda2) main_mup2_pane_g1

0x4c27,	// (0x0004fdae) main_mup2_pane_g2_ParamLimits

0x4c27,	// (0x0004fdae) main_mup2_pane_g2

0x9a5f,	// (0x00054be6) main_mup_pane_g13_cp1

0x9a67,	// (0x00054bee) mup_volume_pane_cp1

0x4c43,	// (0x0004fdca) main_mup2_pane_g4_ParamLimits

0x4c43,	// (0x0004fdca) main_mup2_pane_g4

0x4c55,	// (0x0004fddc) main_mup2_pane_g5_ParamLimits

0x4c55,	// (0x0004fddc) main_mup2_pane_g5

0x4c67,	// (0x0004fdee) main_mup2_pane_g6_ParamLimits

0x4c67,	// (0x0004fdee) main_mup2_pane_g6

0x4c79,	// (0x0004fe00) main_mup2_pane_g7_ParamLimits

0x4c79,	// (0x0004fe00) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0005a7df) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0005a7df) main_mup2_pane_g

0x4c91,	// (0x0004fe18) main_mup2_pane_t1_ParamLimits

0x4c91,	// (0x0004fe18) main_mup2_pane_t1

0x4ca7,	// (0x0004fe2e) main_mup2_pane_t2_ParamLimits

0x4ca7,	// (0x0004fe2e) main_mup2_pane_t2

0x4cbd,	// (0x0004fe44) main_mup2_pane_t3_ParamLimits

0x4cbd,	// (0x0004fe44) main_mup2_pane_t3

0x4cd3,	// (0x0004fe5a) main_mup2_pane_t4_ParamLimits

0x4cd3,	// (0x0004fe5a) main_mup2_pane_t4

0x4ceb,	// (0x0004fe72) main_mup2_pane_t5_ParamLimits

0x4ceb,	// (0x0004fe72) main_mup2_pane_t5

0x4d03,	// (0x0004fe8a) main_mup2_pane_t6_ParamLimits

0x4d03,	// (0x0004fe8a) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0005a7ee) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0005a7ee) main_mup2_pane_t

0x4d33,	// (0x0004feba) mup2_visualizer_pane_ParamLimits

0x4d33,	// (0x0004feba) mup2_visualizer_pane

0x4d61,	// (0x0004fee8) mup_progress_pane_cp_ParamLimits

0x4d61,	// (0x0004fee8) mup_progress_pane_cp

0x9a4a,	// (0x00054bd1) mup_volume_pane_cp_ParamLimits

0x9a4a,	// (0x00054bd1) mup_volume_pane_cp

0x4d75,	// (0x0004fefc) mup2_visualizer_pane_g1_ParamLimits

0x4d75,	// (0x0004fefc) mup2_visualizer_pane_g1

0xde89,	// (0x00059010) mup2_visualizer_pane_g2_ParamLimits

0xde89,	// (0x00059010) mup2_visualizer_pane_g2

0x4d8c,	// (0x0004ff13) mup2_visualizer_pane_g3_ParamLimits

0x4d8c,	// (0x0004ff13) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0005a7fb) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0005a7fb) mup2_visualizer_pane_g

0xccbd,	// (0x00057e44) aid_size_cell_fmradio

0x4208,	// (0x0004f38f) aid_height_parent_landcape

0xc0fb,	// (0x00057282) wml_content_pane_cp

0xc103,	// (0x0005728a) wml_tabs_pane

0xc10c,	// (0x00057293) popup_wml_miniature_window

0xc114,	// (0x0005729b) scroll_pane_cp021

0xc128,	// (0x000572af) wml_content_pane_comp8

0xb54d,	// (0x000566d4) bg_popup_sub_pane_cp05

0xdea7,	// (0x0005902e) popup_wml_miniature_window_g1

0xdeaf,	// (0x00059036) wml_miniature_view_pane

0x4d98,	// (0x0004ff1f) aid_size_wml_view

0x4da0,	// (0x0004ff27) wml_miniature_view_pane_g1

0x4da9,	// (0x0004ff30) wml_miniature_view_pane_g2

0x4db2,	// (0x0004ff39) wml_miniature_view_pane_g3

0x4dba,	// (0x0004ff41) wml_miniature_view_pane_g4

0x4dc2,	// (0x0004ff49) wml_miniature_view_pane_g5

0x4dca,	// (0x0004ff51) wml_miniature_view_pane_g6

0x4dd2,	// (0x0004ff59) wml_miniature_view_pane_g7

0x4dda,	// (0x0004ff61) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005a802) wml_miniature_view_pane_g

0xdeb7,	// (0x0005903e) background_graphic_ParamLimits

0xdeb7,	// (0x0005903e) background_graphic

0xdec3,	// (0x0005904a) wml_tabs_2_pane

0xdecc,	// (0x00059053) wml_tabs_3_pane_ParamLimits

0xdecc,	// (0x00059053) wml_tabs_3_pane

0xdede,	// (0x00059065) wml_tabs_4_pane_ParamLimits

0xdede,	// (0x00059065) wml_tabs_4_pane

0xdef4,	// (0x0005907b) wml_tabs_5_pane_ParamLimits

0xdef4,	// (0x0005907b) wml_tabs_5_pane

0xdf0e,	// (0x00059095) wml_tabs_pane_g2_ParamLimits

0xdf0e,	// (0x00059095) wml_tabs_pane_g2

0xdf22,	// (0x000590a9) wml_tabs_pane_g3_ParamLimits

0xdf22,	// (0x000590a9) wml_tabs_pane_g3

0x4de2,	// (0x0004ff69) wml_tabs_2_active_pane_ParamLimits

0x4de2,	// (0x0004ff69) wml_tabs_2_active_pane

0x4df6,	// (0x0004ff7d) wml_tabs_2_passive_pane_ParamLimits

0x4df6,	// (0x0004ff7d) wml_tabs_2_passive_pane

0x4e0a,	// (0x0004ff91) wml_tabs_3_active_pane_cp_ParamLimits

0x4e0a,	// (0x0004ff91) wml_tabs_3_active_pane_cp

0x4e1f,	// (0x0004ffa6) wml_tabs_3_passive_pane_ParamLimits

0x4e1f,	// (0x0004ffa6) wml_tabs_3_passive_pane

0x4e32,	// (0x0004ffb9) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e32,	// (0x0004ffb9) wml_tabs_3_passive_pane_cp

0x4e49,	// (0x0004ffd0) tabs_4_active_pane

0x4e51,	// (0x0004ffd8) tabs_4_passive_pane

0x4e5b,	// (0x0004ffe2) tabs_4_passive_pane_cp

0x4e63,	// (0x0004ffea) tabs_4_passive_pane_cp2

0x3f23,	// (0x0004f0aa) aid_height_text

0x364e,	// (0x0004e7d5) mup_volume_cont_pane_ParamLimits

0x364e,	// (0x0004e7d5) mup_volume_cont_pane

0x144f,	// (0x0004c5d6) aid_size_cell_pinb

0x1459,	// (0x0004c5e0) aid_size_list_pinb

0x4d4d,	// (0x0004fed4) mup2_volume_cont_pane_ParamLimits

0x4d4d,	// (0x0004fed4) mup2_volume_cont_pane

0x9a36,	// (0x00054bbd) mup2_volume_cont_pane_g1_ParamLimits

0x9a36,	// (0x00054bbd) mup2_volume_cont_pane_g1

0x1102,	// (0x0004c289) aid_size_cell_touch_ParamLimits

0x1102,	// (0x0004c289) aid_size_cell_touch

0x133f,	// (0x0004c4c6) touch_pane_ParamLimits

0x133f,	// (0x0004c4c6) touch_pane

0xb130,	// (0x000562b7) main_rss2_pane

0xdf3f,	// (0x000590c6) listscroll_rss2_pane

0xdf48,	// (0x000590cf) rss2_navigation_pane

0xdf50,	// (0x000590d7) list_rss2_pane

0xc790,	// (0x00057917) scroll_pane_cp22

0xdf58,	// (0x000590df) rss2_navigation_pane_g1

0xdf61,	// (0x000590e8) rss2_navigation_pane_g2

0xdf69,	// (0x000590f0) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0005a813) rss2_navigation_pane_g

0xdf71,	// (0x000590f8) rss2_navigation_pane_t1

0x4e6d,	// (0x0004fff4) rss2_list_single_pane_ParamLimits

0x4e6d,	// (0x0004fff4) rss2_list_single_pane

0xdf7f,	// (0x00059106) rss2_list_single_pane_t2

0xdf8d,	// (0x00059114) rss2_list_single_pane_t3_ParamLimits

0xdf8d,	// (0x00059114) rss2_list_single_pane_t3

0xdfaa,	// (0x00059131) rss2_list_single_pane_t4

0x3078,	// (0x0004e1ff) smil_status_pane_g1

0xbdd4,	// (0x00056f5b) main_image2_pane_ParamLimits

0xbdd4,	// (0x00056f5b) main_image2_pane

0x4913,	// (0x0004fa9a) main_camera2_pane_g9_ParamLimits

0x4913,	// (0x0004fa9a) main_camera2_pane_g9

0x4a41,	// (0x0004fbc8) main_camera2_pane_t5_ParamLimits

0x4a41,	// (0x0004fbc8) main_camera2_pane_t5

0x9a06,	// (0x00054b8d) main_camera2_pane_t6_ParamLimits

0x9a06,	// (0x00054b8d) main_camera2_pane_t6

0x4e82,	// (0x00050009) main_image2_pane_g1_ParamLimits

0x4e82,	// (0x00050009) main_image2_pane_g1

0x3c5f,	// (0x0004ede6) smil2_video_pane_ParamLimits

0x3c5f,	// (0x0004ede6) smil2_video_pane

0x113a,	// (0x0004c2c1) aid_zoom_text_primary_cp

0x97f9,	// (0x00054980) popup_preview_fixed_window

0xc064,	// (0x000571eb) im_reading_pane_g1

0x478a,	// (0x0004f911) cams2_bc_adjust_pane_cp_ParamLimits

0x478a,	// (0x0004f911) cams2_bc_adjust_pane_cp

0x4a70,	// (0x0004fbf7) cams2_bc_adjust_pane_ParamLimits

0x4a70,	// (0x0004fbf7) cams2_bc_adjust_pane

0x9a6f,	// (0x00054bf6) cams2_bc_adjust_pane_g1

0x9a77,	// (0x00054bfe) cams2_slider_pane

0x9a80,	// (0x00054c07) cams2_slider_pane_g1

0x9a89,	// (0x00054c10) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0005a81a) cams2_slider_pane_g

0x1547,	// (0x0004c6ce) calc_display_pane_ParamLimits

0x156f,	// (0x0004c6f6) calc_paper_pane_ParamLimits

0x1592,	// (0x0004c719) grid_calc_pane_ParamLimits

0x991f,	// (0x00054aa6) popup_clock_digital_window_t1_ParamLimits

0xcc5a,	// (0x00057de1) main_image_pane_t1

0x1529,	// (0x0004c6b0) aid_size_cell_calc_ParamLimits

0x1529,	// (0x0004c6b0) aid_size_cell_calc

0x424e,	// (0x0004f3d5) popup_blid_sat_info2_window_ParamLimits

0x424e,	// (0x0004f3d5) popup_blid_sat_info2_window

0xdfc0,	// (0x00059147) aid_size_cell_blid

0xdfc8,	// (0x0005914f) bg_popup_window_pane_cp07

0xdfeb,	// (0x00059172) grid_popup_blid_pane

0xdff5,	// (0x0005917c) heading_pane_cp05_ParamLimits

0xdff5,	// (0x0005917c) heading_pane_cp05

0xe0bf,	// (0x00059246) cell_popup_blid_pane_ParamLimits

0xe0bf,	// (0x00059246) cell_popup_blid_pane

0xe0e3,	// (0x0005926a) cell_popup_blid_pane_g1

0xe0eb,	// (0x00059272) cell_popup_blid_pane_t1

0x4d1d,	// (0x0004fea4) mup2_indicator_pane_ParamLimits

0x4d1d,	// (0x0004fea4) mup2_indicator_pane

0xbf6b,	// (0x000570f2) mup2_visualizer_osc_pane

0xde95,	// (0x0005901c) mup2_visualizer_spec_pane_ParamLimits

0xde95,	// (0x0005901c) mup2_visualizer_spec_pane

0x4e98,	// (0x0005001f) mup2_spec_half_pane

0x4ea1,	// (0x00050028) mup2_spec_half_pane_cp

0x4ea9,	// (0x00050030) mup2_spec_bar_pane_ParamLimits

0x4ea9,	// (0x00050030) mup2_spec_bar_pane

0xde36,	// (0x00058fbd) mup2_spec_bar_pane_g1

0xde40,	// (0x00058fc7) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005a78d) mup2_spec_bar_pane_g

0x4ec9,	// (0x00050050) mup2_osc_middle_pane

0xde52,	// (0x00058fd9) mup2_visualizer_osc_pane_g1

0xb15a,	// (0x000562e1) popup_number_entry_window_t1_ParamLimits

0xb16d,	// (0x000562f4) popup_number_entry_window_t2_ParamLimits

0xb17f,	// (0x00056306) popup_number_entry_window_t3_ParamLimits

0x1391,	// (0x0004c518) popup_number_entry_window_t5_ParamLimits

0x1391,	// (0x0004c518) popup_number_entry_window_t5

0xf0ca,	// (0x0005a251) popup_number_entry_window_t_ParamLimits

0xb191,	// (0x00056318) text_title_cp2_ParamLimits

0x995e,	// (0x00054ae5) aid_hotspot_pointer_text2_pane

0x9984,	// (0x00054b0b) main_viewer_pane_g9_ParamLimits

0x9984,	// (0x00054b0b) main_viewer_pane_g9

0xc29d,	// (0x00057424) cale_month_pane_t1_ParamLimits

0xc2da,	// (0x00057461) bg_cale_pane_ParamLimits

0xc2f2,	// (0x00057479) list_cale_pane_ParamLimits

0xc303,	// (0x0005748a) listscroll_cale_day_pane_t1

0xc315,	// (0x0005749c) scroll_pane_cp09_ParamLimits

0x3680,	// (0x0004e807) main_mup_eq_pane_t1_ParamLimits

0x3680,	// (0x0004e807) main_mup_eq_pane_t1

0x369a,	// (0x0004e821) main_mup_eq_pane_t2_ParamLimits

0x369a,	// (0x0004e821) main_mup_eq_pane_t2

0x36b4,	// (0x0004e83b) main_mup_eq_pane_t3_ParamLimits

0x36b4,	// (0x0004e83b) main_mup_eq_pane_t3

0x36d0,	// (0x0004e857) main_mup_eq_pane_t4_ParamLimits

0x36d0,	// (0x0004e857) main_mup_eq_pane_t4

0x36ec,	// (0x0004e873) main_mup_eq_pane_t5_ParamLimits

0x36ec,	// (0x0004e873) main_mup_eq_pane_t5

0x3708,	// (0x0004e88f) main_mup_eq_pane_t6_ParamLimits

0x3708,	// (0x0004e88f) main_mup_eq_pane_t6

0x371c,	// (0x0004e8a3) main_mup_eq_pane_t7_ParamLimits

0x371c,	// (0x0004e8a3) main_mup_eq_pane_t7

0x3730,	// (0x0004e8b7) main_mup_eq_pane_t8_ParamLimits

0x3730,	// (0x0004e8b7) main_mup_eq_pane_t8

0x3744,	// (0x0004e8cb) main_mup_eq_pane_t9_ParamLimits

0x3744,	// (0x0004e8cb) main_mup_eq_pane_t9

0x375e,	// (0x0004e8e5) main_mup_eq_pane_t10_ParamLimits

0x375e,	// (0x0004e8e5) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005a5dc) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005a5dc) main_mup_eq_pane_t

0x380d,	// (0x0004e994) mup_equalizer_pane_cp5_ParamLimits

0x3821,	// (0x0004e9a8) mup_equalizer_pane_cp6_ParamLimits

0x3835,	// (0x0004e9bc) mup_equalizer_pane_cp7_ParamLimits

0xb130,	// (0x000562b7) main_gallery_pane

0xde5b,	// (0x00058fe2) smil2_volume_pane

0xde63,	// (0x00058fea) smil_status_volume_pane_g1_ParamLimits

0xde76,	// (0x00058ffd) smil_status_volume_pane_g2_ParamLimits

0x99e4,	// (0x00054b6b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0005a792) smil_status_volume_pane_g_ParamLimits

0xdfc8,	// (0x0005914f) bg_popup_window_pane_cp07_ParamLimits

0xdfd6,	// (0x0005915d) blid_firmament_pane

0x4ed2,	// (0x00050059) aid_size_cell_gallery_ParamLimits

0x4ed2,	// (0x00050059) aid_size_cell_gallery

0x4ee8,	// (0x0005006f) grid_gallery_pane_ParamLimits

0x4ee8,	// (0x0005006f) grid_gallery_pane

0x4f01,	// (0x00050088) cell_gallery_pane_ParamLimits

0x4f01,	// (0x00050088) cell_gallery_pane

0xe0f9,	// (0x00059280) bg_cell_gallery_focus_pane_ParamLimits

0xe0f9,	// (0x00059280) bg_cell_gallery_focus_pane

0xe10b,	// (0x00059292) cell_gallery_pane_g1_ParamLimits

0xe10b,	// (0x00059292) cell_gallery_pane_g1

0x4f4a,	// (0x000500d1) cell_gallery_pane_g2_ParamLimits

0x4f4a,	// (0x000500d1) cell_gallery_pane_g2

0x4f57,	// (0x000500de) cell_gallery_pane_g3_ParamLimits

0x4f57,	// (0x000500de) cell_gallery_pane_g3

0xe117,	// (0x0005929e) cell_gallery_pane_g4_ParamLimits

0xe117,	// (0x0005929e) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005a840) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005a840) cell_gallery_pane_g

0xe123,	// (0x000592aa) bg_cell_gallery_focus_pane_g1

0xe12b,	// (0x000592b2) bg_cell_gallery_focus_pane_g2

0xe133,	// (0x000592ba) bg_cell_gallery_focus_pane_g3

0xe13b,	// (0x000592c2) bg_cell_gallery_focus_pane_g4

0xe143,	// (0x000592ca) bg_cell_gallery_focus_pane_g5

0xe14b,	// (0x000592d2) bg_cell_gallery_focus_pane_g6

0xe153,	// (0x000592da) bg_cell_gallery_focus_pane_g7

0xe15b,	// (0x000592e2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0005a849) bg_cell_gallery_focus_pane_g

0xe163,	// (0x000592ea) aid_firma_cardinal

0xe177,	// (0x000592fe) blid_firmament_pane_t1

0xe18e,	// (0x00059315) blid_firmament_pane_t2

0xe1a5,	// (0x0005932c) blid_firmament_pane_t3

0xe1bc,	// (0x00059343) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0005a85a) blid_firmament_pane_t

0xe1d3,	// (0x0005935a) blid_sat_info_pane

0xe1e3,	// (0x0005936a) blid_sat_info_pane_g1

0xe1e3,	// (0x0005936a) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0005a863) blid_sat_info_pane_g

0xe1ed,	// (0x00059374) blid_sat_info_pane_t1

0xe1fb,	// (0x00059382) smil2_volume_content_pane

0xe204,	// (0x0005938b) smil2_volume_pane_g1

0xe20c,	// (0x00059393) smil2_volume_content_pane_g1

0xe215,	// (0x0005939c) smil2_volume_content_pane_g2

0xe21e,	// (0x000593a5) smil2_volume_content_pane_g3

0xe227,	// (0x000593ae) smil2_volume_content_pane_g4

0xe230,	// (0x000593b7) smil2_volume_content_pane_g5

0xe239,	// (0x000593c0) smil2_volume_content_pane_g6

0xe242,	// (0x000593c9) smil2_volume_content_pane_g7

0xe24b,	// (0x000593d2) smil2_volume_content_pane_g8

0xe254,	// (0x000593db) smil2_volume_content_pane_g9

0xe25d,	// (0x000593e4) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0005a868) smil2_volume_content_pane_g

0x1b24,	// (0x0004ccab) cale_week_day_heading_pane_t1_ParamLimits

0x1b4e,	// (0x0004ccd5) cale_week_day_heading_pane_t2_ParamLimits

0x1b7d,	// (0x0004cd04) cale_week_day_heading_pane_t3_ParamLimits

0x1bac,	// (0x0004cd33) cale_week_day_heading_pane_t4_ParamLimits

0x1bdb,	// (0x0004cd62) cale_week_day_heading_pane_t5_ParamLimits

0x1c12,	// (0x0004cd99) cale_week_day_heading_pane_t6_ParamLimits

0x1c49,	// (0x0004cdd0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005a358) cale_week_day_heading_pane_t_ParamLimits

0xbf10,	// (0x00057097) bg_cale_side_pane_ParamLimits

0x1c73,	// (0x0004cdfa) cale_week_time_pane_t1_ParamLimits

0x1c8d,	// (0x0004ce14) cale_week_time_pane_t2_ParamLimits

0x1ca7,	// (0x0004ce2e) cale_week_time_pane_t3_ParamLimits

0x1cc1,	// (0x0004ce48) cale_week_time_pane_t4_ParamLimits

0x1cdb,	// (0x0004ce62) cale_week_time_pane_t5_ParamLimits

0x1cf5,	// (0x0004ce7c) cale_week_time_pane_t6_ParamLimits

0x1d0f,	// (0x0004ce96) cale_week_time_pane_t7_ParamLimits

0x1d29,	// (0x0004ceb0) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005a367) cale_week_time_pane_t_ParamLimits

0x1d43,	// (0x0004ceca) cell_cale_week_pane_g2_ParamLimits

0xbf10,	// (0x00057097) bg_cale_side_pane_cp01_ParamLimits

0x2e7f,	// (0x0004e006) cale_month_week_pane_t1_ParamLimits

0x2e98,	// (0x0004e01f) cale_month_week_pane_t2_ParamLimits

0x2eb1,	// (0x0004e038) cale_month_week_pane_t3_ParamLimits

0x2eca,	// (0x0004e051) cale_month_week_pane_t4_ParamLimits

0x2ee3,	// (0x0004e06a) cale_month_week_pane_t5_ParamLimits

0x2efc,	// (0x0004e083) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005a43c) cale_month_week_pane_t_ParamLimits

0x989b,	// (0x00054a22) cell_cale_month_pane_g1_ParamLimits

0xb130,	// (0x000562b7) main_cale_event_viewer_pane

0xb130,	// (0x000562b7) listscroll_cale_event_viewer_pane

0xe266,	// (0x000593ed) list_cale_ev_pane

0xe26e,	// (0x000593f5) scroll_pane_cp023

0xe27a,	// (0x00059401) field_cale_ev_pane_ParamLimits

0xe27a,	// (0x00059401) field_cale_ev_pane

0xe298,	// (0x0005941f) field_cale_ev_content_pane_ParamLimits

0xe298,	// (0x0005941f) field_cale_ev_content_pane

0xe2a4,	// (0x0005942b) field_cale_ev_pane_g1_ParamLimits

0xe2a4,	// (0x0005942b) field_cale_ev_pane_g1

0xe2b0,	// (0x00059437) field_cale_ev_pane_g2_ParamLimits

0xe2b0,	// (0x00059437) field_cale_ev_pane_g2

0xe2c8,	// (0x0005944f) field_cale_ev_pane_g3_ParamLimits

0xe2c8,	// (0x0005944f) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005a87d) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005a87d) field_cale_ev_pane_g

0xe2e0,	// (0x00059467) field_cale_ev_pane_t1_ParamLimits

0xe2e0,	// (0x00059467) field_cale_ev_pane_t1

0xe2f7,	// (0x0005947e) field_cale_ev_content_pane_t1_ParamLimits

0xe2f7,	// (0x0005947e) field_cale_ev_content_pane_t1

0xcb40,	// (0x00057cc7) bg_button_pane_cp01

0x1851,	// (0x0004c9d8) listscroll_cale_week_pane_ParamLimits

0xbebb,	// (0x00057042) popup_toolbar_window_cp01

0xbee1,	// (0x00057068) listscroll_cale_week_pane_t1_ParamLimits

0x1851,	// (0x0004c9d8) listscroll_cale_day_pane_ParamLimits

0xbebb,	// (0x00057042) popup_toolbar_window_cp02

0xc303,	// (0x0005748a) listscroll_cale_day_pane_t1_ParamLimits

0x1851,	// (0x0004c9d8) main_cale_month_pane_ParamLimits

0x99cf,	// (0x00054b56) popup_toolbar_window_cp03_ParamLimits

0x99cf,	// (0x00054b56) popup_toolbar_window_cp03

0x3b27,	// (0x0004ecae) main_image_pane_g2_ParamLimits

0x3b27,	// (0x0004ecae) main_image_pane_g2

0x3b38,	// (0x0004ecbf) main_image_pane_g3_ParamLimits

0x3b38,	// (0x0004ecbf) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005a66e) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005a66e) main_image_pane_g

0xcc5a,	// (0x00057de1) main_image_pane_t1_ParamLimits

0x3b49,	// (0x0004ecd0) main_image_pane_t2_ParamLimits

0x3b49,	// (0x0004ecd0) main_image_pane_t2

0x3b5b,	// (0x0004ece2) main_image_pane_t3_ParamLimits

0x3b5b,	// (0x0004ece2) main_image_pane_t3

0x3b83,	// (0x0004ed0a) main_image_pane_t4_ParamLimits

0x3b83,	// (0x0004ed0a) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005a675) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005a675) main_image_pane_t

0x3ba3,	// (0x0004ed2a) popup_image_details_window_cp01

0x3bad,	// (0x0004ed34) popup_toobar_trans_pane_cp01_ParamLimits

0x3bad,	// (0x0004ed34) popup_toobar_trans_pane_cp01

0x432d,	// (0x0004f4b4) popup_image_details_window_ParamLimits

0x432d,	// (0x0004f4b4) popup_image_details_window

0x99a2,	// (0x00054b29) popup_image_focus_window

0x4744,	// (0x0004f8cb) camera2_autofocus_pane_ParamLimits

0x4744,	// (0x0004f8cb) camera2_autofocus_pane

0xb130,	// (0x000562b7) bg_popup_sub_pane_cp06

0xe315,	// (0x0005949c) popup_image_focus_window_g1

0xe31d,	// (0x000594a4) popup_image_focus_window_g2

0xe325,	// (0x000594ac) popup_image_focus_window_g3

0xe32d,	// (0x000594b4) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0005a884) popup_image_focus_window_g

0xe335,	// (0x000594bc) popup_image_focus_window_t1

0xe343,	// (0x000594ca) popup_image_focus_window_t2

0xe353,	// (0x000594da) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005a88d) popup_image_focus_window_t

0xe361,	// (0x000594e8) camera2_autofocus_pane_g1

0xbdd4,	// (0x00056f5b) bg_tb_trans_pane_cp01

0xe36f,	// (0x000594f6) popup_image_details_window_g1

0xe382,	// (0x00059509) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0005a89f) popup_image_details_window_g

0xe3ab,	// (0x00059532) popup_image_details_window_t1

0xe3bd,	// (0x00059544) popup_image_details_window_t2

0xe3d6,	// (0x0005955d) popup_image_details_window_t3

0xe3ea,	// (0x00059571) popup_image_details_window_t4

0xe405,	// (0x0005958c) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0005a8a6) popup_image_details_window_t

0xb859,	// (0x000569e0) bg_calc_paper_pane_ParamLimits

0xb130,	// (0x000562b7) grid_highlight_pane_cp013

0x980b,	// (0x00054992) list_calc_pane_ParamLimits

0x981d,	// (0x000549a4) scroll_pane_cp024

0xb86d,	// (0x000569f4) bg_calc_display_pane_ParamLimits

0x1690,	// (0x0004c817) calc_display_pane_t1_ParamLimits

0x16a2,	// (0x0004c829) calc_display_pane_t2_ParamLimits

0x9825,	// (0x000549ac) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005a2d8) calc_display_pane_t_ParamLimits

0x175c,	// (0x0004c8e3) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005a2f5) cell_calc_pane_g

0x1765,	// (0x0004c8ec) cell_calc_pane_t1

0xbe05,	// (0x00056f8c) grid_highlight_pane_cp02_ParamLimits

0xbe1b,	// (0x00056fa2) toolbar_button_pane_cp01_ParamLimits

0xbe1b,	// (0x00056fa2) toolbar_button_pane_cp01

0xcc9f,	// (0x00057e26) temp_image_control_pane_ParamLimits

0xcc9f,	// (0x00057e26) temp_image_control_pane

0xbdd4,	// (0x00056f5b) main_mp3_pane

0xe41f,	// (0x000595a6) temp_image_control_pane_g1_ParamLimits

0xe41f,	// (0x000595a6) temp_image_control_pane_g1

0xe42d,	// (0x000595b4) temp_image_control_pane_g2_ParamLimits

0xe42d,	// (0x000595b4) temp_image_control_pane_g2

0xe43f,	// (0x000595c6) temp_image_control_pane_g3_ParamLimits

0xe43f,	// (0x000595c6) temp_image_control_pane_g3

0x4f94,	// (0x0005011b) temp_image_control_pane_g4_ParamLimits

0x4f94,	// (0x0005011b) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0005a8b1) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0005a8b1) temp_image_control_pane_g

0xe41f,	// (0x000595a6) main_mp3_pane_g1

0x4fa7,	// (0x0005012e) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0005a8ba) main_mp3_pane_g

0xe482,	// (0x00059609) main_mp3_pane_t1

0xbf73,	// (0x000570fa) main_camera_pane_g8_ParamLimits

0xbf73,	// (0x000570fa) main_camera_pane_g8

0x203d,	// (0x0004d1c4) main_video_pane_g7_ParamLimits

0x203d,	// (0x0004d1c4) main_video_pane_g7

0x9a24,	// (0x00054bab) main_camera2_pane_t7_ParamLimits

0x9a24,	// (0x00054bab) main_camera2_pane_t7

0xc0bb,	// (0x00057242) scroll_pane_cp025_ParamLimits

0xc0bb,	// (0x00057242) scroll_pane_cp025

0xc0cf,	// (0x00057256) scroll_pane_cp026_ParamLimits

0xc0cf,	// (0x00057256) scroll_pane_cp026

0xc0de,	// (0x00057265) wml_content_pane_ParamLimits

0xb130,	// (0x000562b7) main_touch_calib_pane

0x507b,	// (0x00050202) main_touch_calib_pane_g1

0x508d,	// (0x00050214) main_touch_calib_pane_g2

0x509f,	// (0x00050226) main_touch_calib_pane_g3

0x50b1,	// (0x00050238) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0005a8d8) main_touch_calib_pane_g

0x50c3,	// (0x0005024a) main_touch_calib_pane_t1

0x50dd,	// (0x00050264) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0005a8e1) main_touch_calib_pane_t

0xc86c,	// (0x000579f3) mup_progress_pane_cp02

0xc8a1,	// (0x00057a28) navi_pane_g1

0xc95c,	// (0x00057ae3) navi_pane_mp_t3

0xbdd4,	// (0x00056f5b) main_mp3_pane_ParamLimits

0x44b2,	// (0x0004f639) navi_pane_ParamLimits

0xe41f,	// (0x000595a6) main_mp3_pane_g1_ParamLimits

0x4fa7,	// (0x0005012e) main_mp3_pane_g2_ParamLimits

0x4fb5,	// (0x0005013c) main_mp3_pane_g3_ParamLimits

0x4fb5,	// (0x0005013c) main_mp3_pane_g3

0x4fc3,	// (0x0005014a) main_mp3_pane_g4_ParamLimits

0x4fc3,	// (0x0005014a) main_mp3_pane_g4

0xe44f,	// (0x000595d6) main_mp3_pane_g5_ParamLimits

0xe44f,	// (0x000595d6) main_mp3_pane_g5

0xe45d,	// (0x000595e4) main_mp3_pane_g6_ParamLimits

0xe45d,	// (0x000595e4) main_mp3_pane_g6

0xe46a,	// (0x000595f1) main_mp3_pane_g7_ParamLimits

0xe46a,	// (0x000595f1) main_mp3_pane_g7

0xe476,	// (0x000595fd) main_mp3_pane_g8_ParamLimits

0xe476,	// (0x000595fd) main_mp3_pane_g8

0xf733,	// (0x0005a8ba) main_mp3_pane_g_ParamLimits

0x4fcf,	// (0x00050156) main_mp3_pane_t2

0x4fdd,	// (0x00050164) main_mp3_pane_t3

0xe490,	// (0x00059617) main_mp3_pane_t4

0xe49e,	// (0x00059625) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0005a8cb) main_mp3_pane_t

0xe4ac,	// (0x00059633) mup_progress_pane_cp01

0x113a,	// (0x0004c2c1) aid_zoom_text_secondary2

0xe266,	// (0x000593ed) list_cale_ev2_pane

0xe26e,	// (0x000593f5) scroll_pane_cp023_ParamLimits

0x5133,	// (0x000502ba) field_cale_ev2_pane_ParamLimits

0x5133,	// (0x000502ba) field_cale_ev2_pane

0x5153,	// (0x000502da) field_cale_ev2_pane_g1_ParamLimits

0x5153,	// (0x000502da) field_cale_ev2_pane_g1

0x515f,	// (0x000502e6) field_cale_ev2_pane_g2_ParamLimits

0x515f,	// (0x000502e6) field_cale_ev2_pane_g2

0x5177,	// (0x000502fe) field_cale_ev2_pane_g3_ParamLimits

0x5177,	// (0x000502fe) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0005a8ec) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0005a8ec) field_cale_ev2_pane_g

0x04b8,	// (0x0004b63f) field_cale_ev2_pane_t1_ParamLimits

0x04b8,	// (0x0004b63f) field_cale_ev2_pane_t1

0x04cf,	// (0x0004b656) field_cale_ev2_pane_t2_ParamLimits

0x04cf,	// (0x0004b656) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0005a8f5) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0005a8f5) field_cale_ev2_pane_t

0x39dc,	// (0x0004eb63) main_postcard_pane_g5_ParamLimits

0x39dc,	// (0x0004eb63) main_postcard_pane_g5

0x39f2,	// (0x0004eb79) main_postcard_pane_g6_ParamLimits

0x39f2,	// (0x0004eb79) main_postcard_pane_g6

0x1e09,	// (0x0004cf90) camera2_autofocus_pane_cp_ParamLimits

0x1e09,	// (0x0004cf90) camera2_autofocus_pane_cp

0xbdd4,	// (0x00056f5b) main_mup3_pane

0x51bf,	// (0x00050346) main_mup3_pane_g1_ParamLimits

0x51bf,	// (0x00050346) main_mup3_pane_g1

0x51e1,	// (0x00050368) main_mup3_pane_g2_ParamLimits

0x51e1,	// (0x00050368) main_mup3_pane_g2

0x525f,	// (0x000503e6) main_mup3_pane_g3_ParamLimits

0x525f,	// (0x000503e6) main_mup3_pane_g3

0x52a5,	// (0x0005042c) main_mup3_pane_g4_ParamLimits

0x52a5,	// (0x0005042c) main_mup3_pane_g4

0x52eb,	// (0x00050472) main_mup3_pane_g5_ParamLimits

0x52eb,	// (0x00050472) main_mup3_pane_g5

0x5331,	// (0x000504b8) main_mup3_pane_g6_ParamLimits

0x5331,	// (0x000504b8) main_mup3_pane_g6

0xe4d4,	// (0x0005965b) main_mup3_pane_g7_ParamLimits

0xe4d4,	// (0x0005965b) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0005a905) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0005a905) main_mup3_pane_g

0x53af,	// (0x00050536) main_mup3_pane_t1_ParamLimits

0x53af,	// (0x00050536) main_mup3_pane_t1

0x5423,	// (0x000505aa) main_mup3_pane_t2_ParamLimits

0x5423,	// (0x000505aa) main_mup3_pane_t2

0x54f7,	// (0x0005067e) main_mup3_pane_t4_ParamLimits

0x54f7,	// (0x0005067e) main_mup3_pane_t4

0x554d,	// (0x000506d4) main_mup3_pane_t5_ParamLimits

0x554d,	// (0x000506d4) main_mup3_pane_t5

0x5609,	// (0x00050790) main_mup3_pane_t6_ParamLimits

0x5609,	// (0x00050790) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0005a916) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0005a916) main_mup3_pane_t

0x56c1,	// (0x00050848) mup3_progress_pane_ParamLimits

0x56c1,	// (0x00050848) mup3_progress_pane

0x5757,	// (0x000508de) popup_mup3_control_window_ParamLimits

0x5757,	// (0x000508de) popup_mup3_control_window

0xe4e2,	// (0x00059669) popup_mup3_text_window

0x5789,	// (0x00050910) mup3_progress_pane_t1

0x57a8,	// (0x0005092f) mup3_progress_pane_t2

0xe4ea,	// (0x00059671) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0005a923) mup3_progress_pane_t

0xe507,	// (0x0005968e) mup_progress_pane_cp03

0xb130,	// (0x000562b7) bg_tb_trans_pane_cp04

0x57c7,	// (0x0005094e) mup3_volume_pane

0x57cf,	// (0x00050956) popup_mup3_control_window_g1

0x57d8,	// (0x0005095f) mup3_volume_pane_g1

0x57e1,	// (0x00050968) mup3_volume_pane_g2

0x57ea,	// (0x00050971) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0005a92a) mup3_volume_pane_g

0xb130,	// (0x000562b7) bg_tb_trans_pane_cp03

0xe517,	// (0x0005969e) popup_mup3_text_window_g1

0xe51f,	// (0x000596a6) popup_mup3_text_window_t1

0xbdee,	// (0x00056f75) list_calc_item_pane_g1_ParamLimits

0xdf36,	// (0x000590bd) mup_volume_pane_cp_g1

0x50f7,	// (0x0005027e) main_touch_calib_pane_t3

0x510b,	// (0x00050292) main_touch_calib_pane_t4

0x511f,	// (0x000502a6) main_touch_calib_pane_t5

0x97a5,	// (0x0005492c) aid_cell_size_toolbar2

0x97ad,	// (0x00054934) aid_popup3_width_pane

0x1132,	// (0x0004c2b9) aid_zoom_text_msg_primary

0x1de8,	// (0x0004cf6f) vorec_t7

0xb879,	// (0x00056a00) bg_calc_paper_pane_g1_ParamLimits

0xb885,	// (0x00056a0c) bg_calc_paper_pane_g2_ParamLimits

0xb891,	// (0x00056a18) bg_calc_paper_pane_g3_ParamLimits

0xb89d,	// (0x00056a24) bg_calc_paper_pane_g4_ParamLimits

0xbde2,	// (0x00056f69) bg_calc_paper_pane_g5_ParamLimits

0x16e9,	// (0x0004c870) bg_calc_paper_pane_g6_ParamLimits

0x16f8,	// (0x0004c87f) bg_calc_paper_pane_g7_ParamLimits

0x1707,	// (0x0004c88e) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005a2df) bg_calc_paper_pane_g_ParamLimits

0x171a,	// (0x0004c8a1) calc_bg_paper_pane_g9_ParamLimits

0x1f54,	// (0x0004d0db) image_qvga_pane_ParamLimits

0x1f54,	// (0x0004d0db) image_qvga_pane

0xb7a8,	// (0x0005692f) bg_popup_sub_pane_cp04_ParamLimits

0xcbd6,	// (0x00057d5d) popup_mup_playback_window_g1_ParamLimits

0xcbe2,	// (0x00057d69) popup_mup_playback_window_t1_ParamLimits

0xcbf7,	// (0x00057d7e) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005a669) popup_mup_playback_window_t_ParamLimits

0x4c37,	// (0x0004fdbe) main_mup2_pane_g3_ParamLimits

0x4c37,	// (0x0004fdbe) main_mup2_pane_g3

0x224d,	// (0x0004d3d4) popup_toolbar_window_cp04

0xcfd9,	// (0x00058160) popup_call2_audio_second_window_g3_ParamLimits

0xcfd9,	// (0x00058160) popup_call2_audio_second_window_g3

0xd3e3,	// (0x0005856a) popup_call2_audio_first_window_g4_ParamLimits

0xd3e3,	// (0x0005856a) popup_call2_audio_first_window_g4

0xda6e,	// (0x00058bf5) popup_call2_audio_in_window_g4_ParamLimits

0xda6e,	// (0x00058bf5) popup_call2_audio_in_window_g4

0x3b09,	// (0x0004ec90) aid_area_sk_bg_cut_ParamLimits

0x3b09,	// (0x0004ec90) aid_area_sk_bg_cut

0xcc0c,	// (0x00057d93) aid_area_sk_bg_cut_2_ParamLimits

0xcc0c,	// (0x00057d93) aid_area_sk_bg_cut_2

0x4f3a,	// (0x000500c1) aid_placing_details_win

0x4f42,	// (0x000500c9) aid_placing_details_win_2

0xe361,	// (0x000594e8) camera2_autofocus_pane_g1_ParamLimits

0x12d8,	// (0x0004c45f) popup_fixed_preview_cale_window_ParamLimits

0x12d8,	// (0x0004c45f) popup_fixed_preview_cale_window

0xc9da,	// (0x00057b61) navi_slider_pane_g3

0xc9e3,	// (0x00057b6a) navi_slider_pane_g4

0xc9ec,	// (0x00057b73) navi_slider_pane_g5

0xc9da,	// (0x00057b61) navi_slider_pane_g6

0x9945,	// (0x00054acc) navi_slider_pane_g7

0xcb0d,	// (0x00057c94) mup_scale_pane_g3

0xcb16,	// (0x00057c9d) mup_scale_pane_g4

0xcb1f,	// (0x00057ca6) mup_scale_pane_g5

0x3849,	// (0x0004e9d0) mup_scale_pane_g6

0x3852,	// (0x0004e9d9) mup_scale_pane_g7

0xc9da,	// (0x00057b61) cams2_slider_pane_g3

0xdfb8,	// (0x0005913f) cams2_slider_pane_g4

0x9a92,	// (0x00054c19) cams2_slider_pane_g5

0xc9da,	// (0x00057b61) cams2_slider_pane_g6

0x9a9a,	// (0x00054c21) cams2_slider_pane_g7

0xe1e3,	// (0x0005936a) camera2_autofocus_pane_cp_g1

0xddcf,	// (0x00058f56) bg_popup_preview_window_pane_cp02_ParamLimits

0xddcf,	// (0x00058f56) bg_popup_preview_window_pane_cp02

0xe52d,	// (0x000596b4) list_fp_cale_pane_ParamLimits

0xe52d,	// (0x000596b4) list_fp_cale_pane

0xe539,	// (0x000596c0) popup_fixed_preview_cale_window_t1_ParamLimits

0xe539,	// (0x000596c0) popup_fixed_preview_cale_window_t1

0x57f3,	// (0x0005097a) popup_fixed_preview_cale_window_t2_ParamLimits

0x57f3,	// (0x0005097a) popup_fixed_preview_cale_window_t2

0x5808,	// (0x0005098f) popup_fixed_preview_cale_window_t3_ParamLimits

0x5808,	// (0x0005098f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005a931) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005a931) popup_fixed_preview_cale_window_t

0x581d,	// (0x000509a4) list_single_fp_cale_pane_ParamLimits

0x581d,	// (0x000509a4) list_single_fp_cale_pane

0xe557,	// (0x000596de) list_single_fp_cale_pane_g1_ParamLimits

0xe557,	// (0x000596de) list_single_fp_cale_pane_g1

0xe563,	// (0x000596ea) list_single_fp_cale_pane_g2_ParamLimits

0xe563,	// (0x000596ea) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0005a938) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0005a938) list_single_fp_cale_pane_g

0xe57c,	// (0x00059703) list_single_fp_cale_pane_t1_ParamLimits

0xe57c,	// (0x00059703) list_single_fp_cale_pane_t1

0xe58e,	// (0x00059715) list_single_fp_cale_pane_t2_ParamLimits

0xe58e,	// (0x00059715) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005a93f) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005a93f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb130,	// (0x000562b7) main_dialer_pane

0x5832,	// (0x000509b9) aid_cell_size_keypad

0x583c,	// (0x000509c3) dialer_ne_pane

0x5844,	// (0x000509cb) grid_dialer_command_1_pane

0x584c,	// (0x000509d3) grid_dialer_command_2_pane

0x5854,	// (0x000509db) grid_dialer_keypad_pane

0x5866,	// (0x000509ed) bg_popup_call_pane_cp06_ParamLimits

0x5866,	// (0x000509ed) bg_popup_call_pane_cp06

0x5872,	// (0x000509f9) dialer_ne_clear_pane_ParamLimits

0x5872,	// (0x000509f9) dialer_ne_clear_pane

0xe5c1,	// (0x00059748) dialer_ne_pane_g1

0xe5c9,	// (0x00059750) dialer_ne_pane_t1_ParamLimits

0xe5c9,	// (0x00059750) dialer_ne_pane_t1

0x587e,	// (0x00050a05) dialer_ne_pane_t2_ParamLimits

0x587e,	// (0x00050a05) dialer_ne_pane_t2

0x58a8,	// (0x00050a2f) dialer_ne_pane_t3_ParamLimits

0x58a8,	// (0x00050a2f) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0005a944) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0005a944) dialer_ne_pane_t

0x58d8,	// (0x00050a5f) dialer_ne_pane_t3_copy1_ParamLimits

0x58d8,	// (0x00050a5f) dialer_ne_pane_t3_copy1

0x5907,	// (0x00050a8e) cell_dialer_keypad_pane_ParamLimits

0x5907,	// (0x00050a8e) cell_dialer_keypad_pane

0x591e,	// (0x00050aa5) cell_dialer_command_1_pane_ParamLimits

0x591e,	// (0x00050aa5) cell_dialer_command_1_pane

0x5934,	// (0x00050abb) cell_dialer_command_2_pane_ParamLimits

0x5934,	// (0x00050abb) cell_dialer_command_2_pane

0xe5db,	// (0x00059762) bg_button_pane_cp02_ParamLimits

0xe5db,	// (0x00059762) bg_button_pane_cp02

0x5943,	// (0x00050aca) cell_dialer_keypad_pane_g1_ParamLimits

0x5943,	// (0x00050aca) cell_dialer_keypad_pane_g1

0xe5db,	// (0x00059762) bg_button_pane_cp03_ParamLimits

0xe5db,	// (0x00059762) bg_button_pane_cp03

0x5957,	// (0x00050ade) cell_dialer_command_1_pane_g1_ParamLimits

0x5957,	// (0x00050ade) cell_dialer_command_1_pane_g1

0xe5e7,	// (0x0005976e) bg_button_pane_cp04

0x596b,	// (0x00050af2) cell_dialer_command_2_pane_g1

0xbf6b,	// (0x000570f2) bg_button_pane_cp06

0xe5ef,	// (0x00059776) dialer_ne_clear_pane_g1

0xc8ad,	// (0x00057a34) navi_pane_g2

0xc8db,	// (0x00057a62) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005a56c) navi_pane_g

0xc96a,	// (0x00057af1) navi_pane_mv_g2

0xc991,	// (0x00057b18) navi_pane_mv_g5

0x340d,	// (0x0004e594) navi_pane_mv_t1

0xb86d,	// (0x000569f4) main_clock2_pane

0x59b8,	// (0x00050b3f) main_clock2_list_pane_ParamLimits

0x59b8,	// (0x00050b3f) main_clock2_list_pane

0x59f0,	// (0x00050b77) main_clock2_pane_t1_ParamLimits

0x59f0,	// (0x00050b77) main_clock2_pane_t1

0x5a2c,	// (0x00050bb3) main_clock2_pane_t2_ParamLimits

0x5a2c,	// (0x00050bb3) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005a950) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005a950) main_clock2_pane_t

0x5aca,	// (0x00050c51) popup_clock_analogue_window_cp03_ParamLimits

0x5aca,	// (0x00050c51) popup_clock_analogue_window_cp03

0x5aef,	// (0x00050c76) popup_clock_digital_window_cp02_ParamLimits

0x5aef,	// (0x00050c76) popup_clock_digital_window_cp02

0x5b60,	// (0x00050ce7) main_clock2_list_single_pane_ParamLimits

0x5b60,	// (0x00050ce7) main_clock2_list_single_pane

0xbf6b,	// (0x000570f2) list_highlight_pane_cp05

0xe62d,	// (0x000597b4) main_clock2_list_single_pane_t1

0x224d,	// (0x0004d3d4) popup_toolbar_window_cp04_ParamLimits

0x4f64,	// (0x000500eb) camera2_autofocus_pane_g2_ParamLimits

0x4f64,	// (0x000500eb) camera2_autofocus_pane_g2

0x4f70,	// (0x000500f7) camera2_autofocus_pane_g3_ParamLimits

0x4f70,	// (0x000500f7) camera2_autofocus_pane_g3

0x4f7c,	// (0x00050103) camera2_autofocus_pane_g4_ParamLimits

0x4f7c,	// (0x00050103) camera2_autofocus_pane_g4

0x4f88,	// (0x0005010f) camera2_autofocus_pane_g5_ParamLimits

0x4f88,	// (0x0005010f) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0005a894) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0005a894) camera2_autofocus_pane_g

0xe4b4,	// (0x0005963b) camera2_autofocus_pane_cp_g2

0xe4bc,	// (0x00059643) camera2_autofocus_pane_cp_g3

0xe4c4,	// (0x0005964b) camera2_autofocus_pane_cp_g4

0xe4cc,	// (0x00059653) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0005a8fa) camera2_autofocus_pane_cp_g

0x585e,	// (0x000509e5) popup_dialer_spcha_window

0xb130,	// (0x000562b7) bg_popup_sub_pane_cp07

0xe63b,	// (0x000597c2) list_spcha_pane

0xe643,	// (0x000597ca) list_single_spcha_pane_ParamLimits

0xe643,	// (0x000597ca) list_single_spcha_pane

0xb130,	// (0x000562b7) list_highlight_pane_cp06

0xe654,	// (0x000597db) list_single_spcha_pane_t1

0xd818,	// (0x0005899f) popup_call2_audio_out_window_g4_ParamLimits

0xd818,	// (0x0005899f) popup_call2_audio_out_window_g4

0xb130,	// (0x000562b7) main_imed2_pane

0x99aa,	// (0x00054b31) popup_imed_adjust2_window

0x4345,	// (0x0004f4cc) popup_imed_trans_window_ParamLimits

0x4345,	// (0x0004f4cc) popup_imed_trans_window

0xe021,	// (0x000591a8) popup_blid_sat_info2_window_t1

0xe02f,	// (0x000591b6) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0005a829) popup_blid_sat_info2_window_t

0x5c09,	// (0x00050d90) aid_size_cell_colour_35

0x5c29,	// (0x00050db0) aid_size_cell_colour_112

0x5c49,	// (0x00050dd0) aid_size_cell_effect

0xdddb,	// (0x00058f62) bg_tb_trans_pane_cp02

0xc40c,	// (0x00057593) heading_imed_pane

0x5c69,	// (0x00050df0) listscroll_imed_pane

0xe662,	// (0x000597e9) heading_imed_pane_g1

0xe66a,	// (0x000597f1) heading_imed_pane_t1

0xe678,	// (0x000597ff) grid_imed_colour_35_pane_ParamLimits

0xe678,	// (0x000597ff) grid_imed_colour_35_pane

0x5c75,	// (0x00050dfc) grid_imed_effect_pane

0xe68f,	// (0x00059816) list_imed_aspect_pane

0x5c8b,	// (0x00050e12) scroll_pane_cp027_ParamLimits

0x5c8b,	// (0x00050e12) scroll_pane_cp027

0x5c9c,	// (0x00050e23) cell_imed_effect_pane_ParamLimits

0x5c9c,	// (0x00050e23) cell_imed_effect_pane

0xe697,	// (0x0005981e) cell_imed_colour_pane_ParamLimits

0xe697,	// (0x0005981e) cell_imed_colour_pane

0xe6d9,	// (0x00059860) cell_imed_colour_pane_g1_ParamLimits

0xe6d9,	// (0x00059860) cell_imed_colour_pane_g1

0xe6ea,	// (0x00059871) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6ea,	// (0x00059871) hgihlgiht_grid_pane_cp016

0x5cc3,	// (0x00050e4a) cell_imed_effect_pane_g1

0x5ccb,	// (0x00050e52) grid_highlight_pane_cp017

0xe6fb,	// (0x00059882) list_imed_single_pane_ParamLimits

0xe6fb,	// (0x00059882) list_imed_single_pane

0xb130,	// (0x000562b7) list_highlight_pane_cp07

0xe710,	// (0x00059897) list_imed_aspect_pane_comp1_t1

0xdddb,	// (0x00058f62) bg_tb_trans_pane_cp05

0xe732,	// (0x000598b9) popup_imed_adjust2_window_g1

0xe759,	// (0x000598e0) popup_imed_adjust2_window_t1

0xe771,	// (0x000598f8) slider_imed_adjust_pane

0xe785,	// (0x0005990c) slider_imed_adjust_pane_g1

0xe795,	// (0x0005991c) slider_imed_adjust_pane_g2

0xe7a5,	// (0x0005992c) slider_imed_adjust_pane_g3

0xe7b6,	// (0x0005993d) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005a96d) slider_imed_adjust_pane_g

0x5cd4,	// (0x00050e5b) aid_size_cell_clipart2

0x5ce0,	// (0x00050e67) grid_imed_clipart_pane

0xe7c7,	// (0x0005994e) scroll_pane_cp031

0x5cea,	// (0x00050e71) cell_imed_clipart_pane_ParamLimits

0x5cea,	// (0x00050e71) cell_imed_clipart_pane

0x5d0c,	// (0x00050e93) cell_imed_clipart_pane_g1

0xb130,	// (0x000562b7) grid_highlight_pane_cp014

0x59cd,	// (0x00050b54) main_clock2_pane_g1_ParamLimits

0x59cd,	// (0x00050b54) main_clock2_pane_g1

0x5b0b,	// (0x00050c92) aid_call2_pane_cp10

0x5b1d,	// (0x00050ca4) aid_call_pane_cp10

0xc80e,	// (0x00057995) popup_clock_analogue_window_cp10_g1

0xc80e,	// (0x00057995) popup_clock_analogue_window_cp10_g2

0x5b2f,	// (0x00050cb6) popup_clock_analogue_window_cp10_g3

0x5b2f,	// (0x00050cb6) popup_clock_analogue_window_cp10_g4

0xc80e,	// (0x00057995) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005a95b) popup_clock_analogue_window_cp10_g

0x5b41,	// (0x00050cc8) popup_clock_analogue_window_cp10_t1

0x5b72,	// (0x00050cf9) clock_digital_number_pane_cp10_ParamLimits

0x5b72,	// (0x00050cf9) clock_digital_number_pane_cp10

0x5b8a,	// (0x00050d11) clock_digital_number_pane_cp11_ParamLimits

0x5b8a,	// (0x00050d11) clock_digital_number_pane_cp11

0x5ba2,	// (0x00050d29) clock_digital_number_pane_cp12_ParamLimits

0x5ba2,	// (0x00050d29) clock_digital_number_pane_cp12

0x5bba,	// (0x00050d41) clock_digital_number_pane_cp13_ParamLimits

0x5bba,	// (0x00050d41) clock_digital_number_pane_cp13

0x5bd2,	// (0x00050d59) clock_digital_separator_pane_cp10_ParamLimits

0x5bd2,	// (0x00050d59) clock_digital_separator_pane_cp10

0x5bea,	// (0x00050d71) popup_clock_digital_window_cp02_t1_ParamLimits

0x5bea,	// (0x00050d71) popup_clock_digital_window_cp02_t1

0xb7a0,	// (0x00056927) clock_digital_number_pane_cp10_g1

0xb7a0,	// (0x00056927) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005a976) clock_digital_number_pane_cp10_g

0xb7a0,	// (0x00056927) clock_digital_separator_pane_cp10_g1

0xb7a0,	// (0x00056927) clock_digital_separator_pane_g2_cp10

0xc999,	// (0x00057b20) navi_pane_vded_g4

0xc9a2,	// (0x00057b29) navi_pane_vded_g5

0xc9ab,	// (0x00057b32) navi_pane_vded_t1

0xb130,	// (0x000562b7) main_vded_pane

0x5d15,	// (0x00050e9c) main_vded_pane_g1

0x5d1f,	// (0x00050ea6) main_vded_pane_g2

0x5d29,	// (0x00050eb0) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005a97b) main_vded_pane_g

0x5d33,	// (0x00050eba) main_vded_pane_t1

0x5d41,	// (0x00050ec8) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005a982) main_vded_pane_t

0x5d4f,	// (0x00050ed6) vded_slider_pane

0x5d57,	// (0x00050ede) vded_video_pane

0xe7cf,	// (0x00059956) vded_video_pane_g1

0x5d5f,	// (0x00050ee6) vded_video_pane_g2

0xe1e3,	// (0x0005936a) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005a987) vded_video_pane_g

0xe7d9,	// (0x00059960) vded_slider_pane_g1

0xdf36,	// (0x000590bd) vded_slider_pane_g2

0xe7e2,	// (0x00059969) vded_slider_pane_g3

0xe7eb,	// (0x00059972) vded_slider_pane_g4

0xe7f4,	// (0x0005997b) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005a98e) vded_slider_pane_g

0x573f,	// (0x000508c6) mup3_rocker_pane_ParamLimits

0x573f,	// (0x000508c6) mup3_rocker_pane

0x5d68,	// (0x00050eef) mup3_control_keys_pane_g1

0x5d70,	// (0x00050ef7) mup3_control_keys_pane_g2

0x5d78,	// (0x00050eff) mup3_control_keys_pane_g3

0x5d80,	// (0x00050f07) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005a999) mup3_control_keys_pane_g

0x130f,	// (0x0004c496) popup_toolbar2_fixed_window_cp01_ParamLimits

0x130f,	// (0x0004c496) popup_toolbar2_fixed_window_cp01

0x5773,	// (0x000508fa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5773,	// (0x000508fa) popup_toolbar2_fixed_window_cp02

0xd14b,	// (0x000582d2) popup_call2_audio_second_window_t4_ParamLimits

0xd14b,	// (0x000582d2) popup_call2_audio_second_window_t4

0xd679,	// (0x00058800) popup_call2_audio_first_window_t6_ParamLimits

0xd679,	// (0x00058800) popup_call2_audio_first_window_t6

0xd91b,	// (0x00058aa2) popup_call2_audio_out_window_t6_ParamLimits

0xd91b,	// (0x00058aa2) popup_call2_audio_out_window_t6

0xb130,	// (0x000562b7) main_vitu_pane

0x5d90,	// (0x00050f17) aid_size_cell_itu_ParamLimits

0x5d90,	// (0x00050f17) aid_size_cell_itu

0xbdd4,	// (0x00056f5b) bg_popup_window_pane_cp08_ParamLimits

0xbdd4,	// (0x00056f5b) bg_popup_window_pane_cp08

0x5da6,	// (0x00050f2d) field_vitu_entry_pane_ParamLimits

0x5da6,	// (0x00050f2d) field_vitu_entry_pane

0x5dbd,	// (0x00050f44) grid_vitu_function_pane_ParamLimits

0x5dbd,	// (0x00050f44) grid_vitu_function_pane

0x5dd8,	// (0x00050f5f) grid_vitu_itu_pane_ParamLimits

0x5dd8,	// (0x00050f5f) grid_vitu_itu_pane

0x5df6,	// (0x00050f7d) cell_vitu_itu_pane_ParamLimits

0x5df6,	// (0x00050f7d) cell_vitu_itu_pane

0x5e18,	// (0x00050f9f) cell_vitu_function_pane_ParamLimits

0x5e18,	// (0x00050f9f) cell_vitu_function_pane

0xbdd4,	// (0x00056f5b) bg_popup_sub_pane_cp08_ParamLimits

0xbdd4,	// (0x00056f5b) bg_popup_sub_pane_cp08

0x5e31,	// (0x00050fb8) field_vitu_entry_pane_t1_ParamLimits

0x5e31,	// (0x00050fb8) field_vitu_entry_pane_t1

0xe815,	// (0x0005999c) field_vitu_entry_pane_t2_ParamLimits

0xe815,	// (0x0005999c) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005a9a7) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005a9a7) field_vitu_entry_pane_t

0xe832,	// (0x000599b9) bg_button_pane_cp05_ParamLimits

0xe832,	// (0x000599b9) bg_button_pane_cp05

0x5e4f,	// (0x00050fd6) cell_vitu_itu_pane_g1

0x5e67,	// (0x00050fee) cell_vitu_itu_pane_t1_ParamLimits

0x5e67,	// (0x00050fee) cell_vitu_itu_pane_t1

0x5e79,	// (0x00051000) cell_vitu_itu_pane_t2_ParamLimits

0x5e79,	// (0x00051000) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005a9ac) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005a9ac) cell_vitu_itu_pane_t

0xe840,	// (0x000599c7) bg_button_pane_cp07

0x5eae,	// (0x00051035) cell_vitu_function_pane_g1

0x9803,	// (0x0005498a) main_calc_pane_g1

0x1126,	// (0x0004c2ad) aid_visual_content_pane

0xb130,	// (0x000562b7) main_vradio_pane

0x5eb7,	// (0x0005103e) main_vradio_pane_g1_ParamLimits

0x5eb7,	// (0x0005103e) main_vradio_pane_g1

0xe84a,	// (0x000599d1) main_vradio_pane_g2_ParamLimits

0xe84a,	// (0x000599d1) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005a9b3) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005a9b3) main_vradio_pane_g

0x5ed0,	// (0x00051057) main_vradio_pane_t1_ParamLimits

0x5ed0,	// (0x00051057) main_vradio_pane_t1

0x5ee5,	// (0x0005106c) main_vradio_pane_t2_ParamLimits

0x5ee5,	// (0x0005106c) main_vradio_pane_t2

0xe857,	// (0x000599de) main_vradio_pane_t3_ParamLimits

0xe857,	// (0x000599de) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005a9b8) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005a9b8) main_vradio_pane_t

0x5efa,	// (0x00051081) vradio_rocker_control_pane_ParamLimits

0x5efa,	// (0x00051081) vradio_rocker_control_pane

0x5f0c,	// (0x00051093) vradio_station_info_pane_ParamLimits

0x5f0c,	// (0x00051093) vradio_station_info_pane

0xe86b,	// (0x000599f2) vradio_frequency_info_pane_ParamLimits

0xe86b,	// (0x000599f2) vradio_frequency_info_pane

0xe1e3,	// (0x0005936a) vradio_station_info_pane_g1

0xe87a,	// (0x00059a01) vradio_station_info_pane_t1_ParamLimits

0xe87a,	// (0x00059a01) vradio_station_info_pane_t1

0xe89c,	// (0x00059a23) vradio_station_info_pane_t2_ParamLimits

0xe89c,	// (0x00059a23) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005a9bf) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005a9bf) vradio_station_info_pane_t

0xe8ae,	// (0x00059a35) vradio_tuning_pane

0xe8b6,	// (0x00059a3d) vradio_rocker_control_pane_g1

0xe8be,	// (0x00059a45) vradio_rocker_control_pane_g2

0xe8c6,	// (0x00059a4d) vradio_rocker_control_pane_g3

0xe8ce,	// (0x00059a55) vradio_rocker_control_pane_g4

0xe8d6,	// (0x00059a5d) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005a9c4) vradio_rocker_control_pane_g

0x5f1e,	// (0x000510a5) vradio_frequency_info_pane_g1

0xe8de,	// (0x00059a65) vradio_frequency_info_pane_t1_ParamLimits

0xe8de,	// (0x00059a65) vradio_frequency_info_pane_t1

0x5f28,	// (0x000510af) vradio_tuning_pane_g1

0x5f33,	// (0x000510ba) vradio_tuning_pane_t1

0x97c1,	// (0x00054948) area_side_right_pane_ParamLimits

0x97c1,	// (0x00054948) area_side_right_pane

0xdd96,	// (0x00058f1d) status_small_pane_g1

0xdd9e,	// (0x00058f25) status_small_pane_g2

0xdda7,	// (0x00058f2e) status_small_pane_g3

0xddb0,	// (0x00058f37) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0005a77f) status_small_pane_g

0xddb9,	// (0x00058f40) status_small_pane_t1

0xb130,	// (0x000562b7) main_video3_pane

0xe8f2,	// (0x00059a79) cams_zoom_vslider_pane

0xe8fa,	// (0x00059a81) image3_wide_pane_ParamLimits

0xe8fa,	// (0x00059a81) image3_wide_pane

0xe914,	// (0x00059a9b) image3_wide_small_pane

0xe920,	// (0x00059aa7) main_video3_pane_g1_ParamLimits

0xe920,	// (0x00059aa7) main_video3_pane_g1

0xe93c,	// (0x00059ac3) main_video3_pane_g2_ParamLimits

0xe93c,	// (0x00059ac3) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005a9cf) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005a9cf) main_video3_pane_g

0xe958,	// (0x00059adf) main_video3_pane_t1_ParamLimits

0xe958,	// (0x00059adf) main_video3_pane_t1

0xe983,	// (0x00059b0a) main_video3_pane_t2_ParamLimits

0xe983,	// (0x00059b0a) main_video3_pane_t2

0xe9ae,	// (0x00059b35) main_video3_pane_t3_ParamLimits

0xe9ae,	// (0x00059b35) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005a9d4) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005a9d4) main_video3_pane_t

0xe9db,	// (0x00059b62) cams_zoom_vslider_pane_g1

0xe9e4,	// (0x00059b6b) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005a9db) cams_zoom_vslider_pane_g

0xe9ec,	// (0x00059b73) small_slider_vertical_pane

0xe1e3,	// (0x0005936a) small_slider_vertical_pane_g1

0xe1e3,	// (0x0005936a) small_slider_vertical_pane_g2

0xe9f4,	// (0x00059b7b) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005a9e0) small_slider_vertical_pane_g

0xb130,	// (0x000562b7) main_hwr_training_pane

0xe9fd,	// (0x00059b84) hwr_training_instruct_pane_ParamLimits

0xe9fd,	// (0x00059b84) hwr_training_instruct_pane

0x5f42,	// (0x000510c9) hwr_training_navi_pane_ParamLimits

0x5f42,	// (0x000510c9) hwr_training_navi_pane

0x5f61,	// (0x000510e8) hwr_training_write_pane_ParamLimits

0x5f61,	// (0x000510e8) hwr_training_write_pane

0xb130,	// (0x000562b7) bg_frame_shadow_pane

0xea34,	// (0x00059bbb) hwr_training_write_pane_g1

0xea3c,	// (0x00059bc3) hwr_training_write_pane_g2

0xea44,	// (0x00059bcb) hwr_training_write_pane_g3

0xea4c,	// (0x00059bd3) hwr_training_write_pane_g4

0xea54,	// (0x00059bdb) hwr_training_write_pane_g5

0xea5c,	// (0x00059be3) hwr_training_write_pane_g6

0xea64,	// (0x00059beb) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005a9e7) hwr_training_write_pane_g

0x9aa3,	// (0x00054c2a) hwr_training_navi_pane_g1_ParamLimits

0x9aa3,	// (0x00054c2a) hwr_training_navi_pane_g1

0x9ab5,	// (0x00054c3c) hwr_training_navi_pane_g2_ParamLimits

0x9ab5,	// (0x00054c3c) hwr_training_navi_pane_g2

0x9ac7,	// (0x00054c4e) hwr_training_navi_pane_g3_ParamLimits

0x9ac7,	// (0x00054c4e) hwr_training_navi_pane_g3

0x9ad7,	// (0x00054c5e) hwr_training_navi_pane_g4_ParamLimits

0x9ad7,	// (0x00054c5e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005a9f6) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005a9f6) hwr_training_navi_pane_g

0x9ae4,	// (0x00054c6b) hwr_training_navi_pane_t1

0x5fa9,	// (0x00051130) list_single_hwr_training_instruct_pane_ParamLimits

0x5fa9,	// (0x00051130) list_single_hwr_training_instruct_pane

0xea6c,	// (0x00059bf3) list_single_hwr_training_instruct_pane_t1

0xe123,	// (0x000592aa) bg_frame_shadow_pane_g1

0xea7b,	// (0x00059c02) bg_frame_shadow_pane_g2

0xea83,	// (0x00059c0a) bg_frame_shadow_pane_g3

0xea8b,	// (0x00059c12) bg_frame_shadow_pane_g4

0xea93,	// (0x00059c1a) bg_frame_shadow_pane_g5

0xea9b,	// (0x00059c22) bg_frame_shadow_pane_g6

0xeaa3,	// (0x00059c2a) bg_frame_shadow_pane_g7

0xbe5f,	// (0x00056fe6) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005aa01) bg_frame_shadow_pane_g

0xb130,	// (0x000562b7) main_video_tele_dialer_pane

0x5fbe,	// (0x00051145) aid_size_cell_video_keypad_ParamLimits

0x5fbe,	// (0x00051145) aid_size_cell_video_keypad

0x5fd8,	// (0x0005115f) grid_video_dialer_keypad_pane_ParamLimits

0x5fd8,	// (0x0005115f) grid_video_dialer_keypad_pane

0x6024,	// (0x000511ab) video_down_pane_cp_ParamLimits

0x6024,	// (0x000511ab) video_down_pane_cp

0x6056,	// (0x000511dd) cell_video_dialer_keypad_pane_ParamLimits

0x6056,	// (0x000511dd) cell_video_dialer_keypad_pane

0xeaab,	// (0x00059c32) bg_button_pane_cp08_ParamLimits

0xeaab,	// (0x00059c32) bg_button_pane_cp08

0x6078,	// (0x000511ff) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6078,	// (0x000511ff) cell_video_dialer_keypad_pane_g1

0x5729,	// (0x000508b0) mup3_rocker2_pane_ParamLimits

0x5729,	// (0x000508b0) mup3_rocker2_pane

0xe1e3,	// (0x0005936a) mup3_rocker2_pane_g1

0x4226,	// (0x0004f3ad) main_dialer2_pane

0xb130,	// (0x000562b7) main_mp4_pane

0x9afa,	// (0x00054c81) main_mp4_pane_g1_ParamLimits

0x9afa,	// (0x00054c81) main_mp4_pane_g1

0x9afa,	// (0x00054c81) main_mp4_pane_g2_ParamLimits

0x9afa,	// (0x00054c81) main_mp4_pane_g2

0x60af,	// (0x00051236) main_mp4_pane_g3_ParamLimits

0x60af,	// (0x00051236) main_mp4_pane_g3

0x9b08,	// (0x00054c8f) main_mp4_pane_g4_ParamLimits

0x9b08,	// (0x00054c8f) main_mp4_pane_g4

0x9b30,	// (0x00054cb7) main_mp4_pane_g5_ParamLimits

0x9b30,	// (0x00054cb7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005aa21) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005aa21) main_mp4_pane_g

0x9b80,	// (0x00054d07) main_mp4_pane_t1_ParamLimits

0x9b80,	// (0x00054d07) main_mp4_pane_t1

0x9bdc,	// (0x00054d63) main_mp4_pane_t2_ParamLimits

0x9bdc,	// (0x00054d63) main_mp4_pane_t2

0xeab7,	// (0x00059c3e) main_mp4_pane_t3_ParamLimits

0xeab7,	// (0x00059c3e) main_mp4_pane_t3

0x9c2e,	// (0x00054db5) main_mp4_pane_t4_ParamLimits

0x9c2e,	// (0x00054db5) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005aa2e) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005aa2e) main_mp4_pane_t

0x9c72,	// (0x00054df9) mp4_progress_pane_ParamLimits

0x9c72,	// (0x00054df9) mp4_progress_pane

0x9cbc,	// (0x00054e43) mp4_rocker_pane_ParamLimits

0x9cbc,	// (0x00054e43) mp4_rocker_pane

0xeadf,	// (0x00059c66) mp4_progress_pane_t1

0xeaf8,	// (0x00059c7f) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005aa37) mp4_progress_pane_t

0xeb11,	// (0x00059c98) mup_progress_pane_cp04

0xe1e3,	// (0x0005936a) mp4_rocker_pane_g1

0x60eb,	// (0x00051272) aid_cell_size_keypad2_ParamLimits

0x60eb,	// (0x00051272) aid_cell_size_keypad2

0x6101,	// (0x00051288) dialer2_ne_pane_ParamLimits

0x6101,	// (0x00051288) dialer2_ne_pane

0x611b,	// (0x000512a2) grid_dialer2_keypad_pane_ParamLimits

0x611b,	// (0x000512a2) grid_dialer2_keypad_pane

0xdfc8,	// (0x0005914f) bg_popup_call_pane_cp07_ParamLimits

0xdfc8,	// (0x0005914f) bg_popup_call_pane_cp07

0x6137,	// (0x000512be) dialer2_ne_pane_t1_ParamLimits

0x6137,	// (0x000512be) dialer2_ne_pane_t1

0x6172,	// (0x000512f9) cell_dialer2_keypad_pane_ParamLimits

0x6172,	// (0x000512f9) cell_dialer2_keypad_pane

0xeb2f,	// (0x00059cb6) bg_button_pane_pane_cp04_ParamLimits

0xeb2f,	// (0x00059cb6) bg_button_pane_pane_cp04

0x6194,	// (0x0005131b) cell_dialer2_keypad_pane_g1_ParamLimits

0x6194,	// (0x0005131b) cell_dialer2_keypad_pane_g1

0x2121,	// (0x0004d2a8) aid_placing_vt_set_content_ParamLimits

0x2121,	// (0x0004d2a8) aid_placing_vt_set_content

0x2149,	// (0x0004d2d0) aid_placing_vt_set_title_ParamLimits

0x2149,	// (0x0004d2d0) aid_placing_vt_set_title

0xb130,	// (0x000562b7) main_image3_pane

0x625a,	// (0x000513e1) area_side_right_pane_cp01_ParamLimits

0x625a,	// (0x000513e1) area_side_right_pane_cp01

0x9afa,	// (0x00054c81) main_image3_pane_g1_ParamLimits

0x9afa,	// (0x00054c81) main_image3_pane_g1

0x6271,	// (0x000513f8) main_image3_pane_g2_ParamLimits

0x6271,	// (0x000513f8) main_image3_pane_g2

0x6299,	// (0x00051420) main_image3_pane_g3_ParamLimits

0x6299,	// (0x00051420) main_image3_pane_g3

0x62c3,	// (0x0005144a) main_image3_pane_g4_ParamLimits

0x62c3,	// (0x0005144a) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005aa46) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005aa46) main_image3_pane_g

0x62ed,	// (0x00051474) main_image3_pane_t1_ParamLimits

0x62ed,	// (0x00051474) main_image3_pane_t1

0x6345,	// (0x000514cc) main_image3_pane_t2_ParamLimits

0x6345,	// (0x000514cc) main_image3_pane_t2

0x6397,	// (0x0005151e) main_image3_pane_t3_ParamLimits

0x6397,	// (0x0005151e) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005aa4f) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005aa4f) main_image3_pane_t

0xbdd4,	// (0x00056f5b) grid_sctrl_middle_pane_cp01_ParamLimits

0xbdd4,	// (0x00056f5b) grid_sctrl_middle_pane_cp01

0x641f,	// (0x000515a6) cell_sctrl_middle_pane_cp01_ParamLimits

0x641f,	// (0x000515a6) cell_sctrl_middle_pane_cp01

0x643c,	// (0x000515c3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x643c,	// (0x000515c3) cell_sctrl_middle_pane_cp01_g1

0xb130,	// (0x000562b7) main_call4_pane

0x6452,	// (0x000515d9) aid_size_button_call4_ParamLimits

0x6452,	// (0x000515d9) aid_size_button_call4

0x6483,	// (0x0005160a) call4_windows_pane_ParamLimits

0x6483,	// (0x0005160a) call4_windows_pane

0x64a3,	// (0x0005162a) grid_call4_button_pane_ParamLimits

0x64a3,	// (0x0005162a) grid_call4_button_pane

0xeb3b,	// (0x00059cc2) call4_windows_conf_pane

0xeb52,	// (0x00059cd9) popup_call4_audio_first_window_ParamLimits

0xeb52,	// (0x00059cd9) popup_call4_audio_first_window

0xeb9a,	// (0x00059d21) popup_call4_audio_second_window_ParamLimits

0xeb9a,	// (0x00059d21) popup_call4_audio_second_window

0xebb3,	// (0x00059d3a) popup_call4_audio_wait_window_ParamLimits

0xebb3,	// (0x00059d3a) popup_call4_audio_wait_window

0x64d0,	// (0x00051657) cell_call4_button_pane_ParamLimits

0x64d0,	// (0x00051657) cell_call4_button_pane

0x64f9,	// (0x00051680) bg_button_pane_cp09_ParamLimits

0x64f9,	// (0x00051680) bg_button_pane_cp09

0x6505,	// (0x0005168c) cell_call4_button_pane_g1_ParamLimits

0x6505,	// (0x0005168c) cell_call4_button_pane_g1

0x652b,	// (0x000516b2) cell_call4_button_pane_t1_ParamLimits

0x652b,	// (0x000516b2) cell_call4_button_pane_t1

0xebc9,	// (0x00059d50) popup_call4_audio_conf_window_ParamLimits

0xebc9,	// (0x00059d50) popup_call4_audio_conf_window

0x5789,	// (0x00050910) mup3_progress_pane_t1_ParamLimits

0x57a8,	// (0x0005092f) mup3_progress_pane_t2_ParamLimits

0xe4ea,	// (0x00059671) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0005a923) mup3_progress_pane_t_ParamLimits

0xe507,	// (0x0005968e) mup_progress_pane_cp03_ParamLimits

0x5d88,	// (0x00050f0f) mup3_control_keys_pane_g4_copy1

0x9ca0,	// (0x00054e27) mp4_rocker2_pane_ParamLimits

0x9ca0,	// (0x00054e27) mp4_rocker2_pane

0xebdd,	// (0x00059d64) mp4_rocker2_pane_g1

0xebe5,	// (0x00059d6c) mp4_rocker2_pane_g2

0x9d40,	// (0x00054ec7) mp4_rocker2_pane_g3

0x9d48,	// (0x00054ecf) mp4_rocker2_pane_g4

0x9d50,	// (0x00054ed7) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005aa58) mp4_rocker2_pane_g

0xb130,	// (0x000562b7) main_camera4_pane

0xb130,	// (0x000562b7) main_video4_pane

0x5ff2,	// (0x00051179) main_video_tele_dialer_pane_t1_ParamLimits

0x5ff2,	// (0x00051179) main_video_tele_dialer_pane_t1

0x600b,	// (0x00051192) main_video_tele_dialer_pane_t2_ParamLimits

0x600b,	// (0x00051192) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005aa12) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005aa12) main_video_tele_dialer_pane_t

0x6569,	// (0x000516f0) cam4_autofocus_pane_ParamLimits

0x6569,	// (0x000516f0) cam4_autofocus_pane

0x657f,	// (0x00051706) cam4_image_uncrop_pane_ParamLimits

0x657f,	// (0x00051706) cam4_image_uncrop_pane

0x6599,	// (0x00051720) cam4_indicators_pane_ParamLimits

0x6599,	// (0x00051720) cam4_indicators_pane

0x65c4,	// (0x0005174b) main_camera4_pane_g1_ParamLimits

0x65c4,	// (0x0005174b) main_camera4_pane_g1

0x65d6,	// (0x0005175d) main_camera4_pane_g2_ParamLimits

0x65d6,	// (0x0005175d) main_camera4_pane_g2

0x65e9,	// (0x00051770) main_camera4_pane_g3_ParamLimits

0x65e9,	// (0x00051770) main_camera4_pane_g3

0x65fc,	// (0x00051783) main_camera4_pane_g4_ParamLimits

0x65fc,	// (0x00051783) main_camera4_pane_g4

0x660f,	// (0x00051796) main_camera4_pane_g5_ParamLimits

0x660f,	// (0x00051796) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005aa63) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005aa63) main_camera4_pane_g

0x6633,	// (0x000517ba) main_camera4_pane_t1_ParamLimits

0x6633,	// (0x000517ba) main_camera4_pane_t1

0xe44f,	// (0x000595d6) bg_tb_trans_pane_cp06

0x9d7c,	// (0x00054f03) cam4_indicators_pane_g1

0x9d8d,	// (0x00054f14) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005aa7e) cam4_indicators_pane_g

0x9dab,	// (0x00054f32) cam4_indicators_pane_t1

0x6697,	// (0x0005181e) main_video4_pane_g1_ParamLimits

0x6697,	// (0x0005181e) main_video4_pane_g1

0x66a6,	// (0x0005182d) main_video4_pane_g2_ParamLimits

0x66a6,	// (0x0005182d) main_video4_pane_g2

0x66b5,	// (0x0005183c) main_video4_pane_g3_ParamLimits

0x66b5,	// (0x0005183c) main_video4_pane_g3

0x66c4,	// (0x0005184b) main_video4_pane_g4_ParamLimits

0x66c4,	// (0x0005184b) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005aa85) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005aa85) main_video4_pane_g

0x66e2,	// (0x00051869) vid4_indicators_pane_ParamLimits

0x66e2,	// (0x00051869) vid4_indicators_pane

0x6710,	// (0x00051897) video4_image_uncrop_cif_pane_ParamLimits

0x6710,	// (0x00051897) video4_image_uncrop_cif_pane

0x672a,	// (0x000518b1) video4_image_uncrop_nhd_pane_ParamLimits

0x672a,	// (0x000518b1) video4_image_uncrop_nhd_pane

0x657f,	// (0x00051706) video4_image_uncrop_vga_pane_ParamLimits

0x657f,	// (0x00051706) video4_image_uncrop_vga_pane

0xbdd4,	// (0x00056f5b) bg_tb_trans_pane_cp07

0x9dd7,	// (0x00054f5e) vid4_indicators_pane_g1

0x9deb,	// (0x00054f72) vid4_indicators_pane_g2

0x9dff,	// (0x00054f86) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005aa90) vid4_indicators_pane_g

0x9e2e,	// (0x00054fb5) vid4_indicators_pane_t1

0x673e,	// (0x000518c5) cam4_autofocus_pane_g1

0x6746,	// (0x000518cd) cam4_autofocus_pane_g2

0x674e,	// (0x000518d5) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005aa9b) cam4_autofocus_pane_g

0x6756,	// (0x000518dd) cam4_autofocus_pane_g3_copy1

0x603a,	// (0x000511c1) video_down_pane_cp_t1

0x6048,	// (0x000511cf) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005aa17) video_down_pane_cp_t

0xbdd4,	// (0x00056f5b) popup_vitu2_window_ParamLimits

0xbdd4,	// (0x00056f5b) popup_vitu2_window

0x675e,	// (0x000518e5) aid_size_cell2_itu2_ParamLimits

0x675e,	// (0x000518e5) aid_size_cell2_itu2

0x6784,	// (0x0005190b) aid_size_cell_itu2_ParamLimits

0x6784,	// (0x0005190b) aid_size_cell_itu2

0x67e0,	// (0x00051967) bg_popup_window_pane_cp09_ParamLimits

0x67e0,	// (0x00051967) bg_popup_window_pane_cp09

0x67ee,	// (0x00051975) field_vitu2_entry_pane_ParamLimits

0x67ee,	// (0x00051975) field_vitu2_entry_pane

0x6814,	// (0x0005199b) grid_vitu2_function_pane_ParamLimits

0x6814,	// (0x0005199b) grid_vitu2_function_pane

0x6865,	// (0x000519ec) grid_vitu2_itu_pane_ParamLimits

0x6865,	// (0x000519ec) grid_vitu2_itu_pane

0x68fd,	// (0x00051a84) cell_vitu2_itu_pane_ParamLimits

0x68fd,	// (0x00051a84) cell_vitu2_itu_pane

0x6929,	// (0x00051ab0) cell_vitu2_function_pane_ParamLimits

0x6929,	// (0x00051ab0) cell_vitu2_function_pane

0xebed,	// (0x00059d74) bg_popup_call_pane_cp08_ParamLimits

0xebed,	// (0x00059d74) bg_popup_call_pane_cp08

0xec04,	// (0x00059d8b) field_vitu2_entry_pane_g1

0xec10,	// (0x00059d97) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005aaa2) field_vitu2_entry_pane_g

0x04e4,	// (0x0004b66b) field_vitu2_entry_pane_t1_ParamLimits

0x04e4,	// (0x0004b66b) field_vitu2_entry_pane_t1

0x6968,	// (0x00051aef) field_vitu2_entry_pane_t2_ParamLimits

0x6968,	// (0x00051aef) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005aaa9) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005aaa9) field_vitu2_entry_pane_t

0x6985,	// (0x00051b0c) bg_button_pane_cp010_ParamLimits

0x6985,	// (0x00051b0c) bg_button_pane_cp010

0x9e45,	// (0x00054fcc) cell_vitu2_itu_pane_g1

0x69a1,	// (0x00051b28) cell_vitu2_itu_pane_t1_ParamLimits

0x69a1,	// (0x00051b28) cell_vitu2_itu_pane_t1

0x0514,	// (0x0004b69b) cell_vitu2_itu_pane_t2_ParamLimits

0x0514,	// (0x0004b69b) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005aab3) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005aab3) cell_vitu2_itu_pane_t

0xbdd4,	// (0x00056f5b) bg_button_pane_cp011

0x69ff,	// (0x00051b86) cell_vitu2_function_pane_g1

0xb130,	// (0x000562b7) main_myfav_hc_pane

0x63e7,	// (0x0005156e) popup_image3_note_pane_ParamLimits

0x63e7,	// (0x0005156e) popup_image3_note_pane

0x6403,	// (0x0005158a) popup_image3_tool_bar_pane_ParamLimits

0x6403,	// (0x0005158a) popup_image3_tool_bar_pane

0x05a2,	// (0x0004b729) cell_vitu2_itu_pane_t3_ParamLimits

0x05a2,	// (0x0004b729) cell_vitu2_itu_pane_t3

0xb130,	// (0x000562b7) bg_popup_trans_pane

0xec32,	// (0x00059db9) grid_image3_tool_bar_pane

0xec3c,	// (0x00059dc3) bg_popup_trans_pane_g1

0xc1c4,	// (0x0005734b) bg_popup_trans_pane_g2

0xec44,	// (0x00059dcb) bg_popup_trans_pane_g3

0xec4c,	// (0x00059dd3) bg_popup_trans_pane_g4

0xec54,	// (0x00059ddb) bg_popup_trans_pane_g5

0xec5c,	// (0x00059de3) bg_popup_trans_pane_g6

0xec64,	// (0x00059deb) bg_popup_trans_pane_g7

0xec6c,	// (0x00059df3) bg_popup_trans_pane_g8

0xc1a4,	// (0x0005732b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005aaba) bg_popup_trans_pane_g

0xec74,	// (0x00059dfb) cell_image3_tool_bar_pane_ParamLimits

0xec74,	// (0x00059dfb) cell_image3_tool_bar_pane

0xe1e3,	// (0x0005936a) cell_image3_tool_bar_pane_g1

0xb130,	// (0x000562b7) bg_popup_trans_pane_cp1

0xec88,	// (0x00059e0f) popup_image3_note_pane_t1

0xec96,	// (0x00059e1d) popup_image3_note_pane_t2

0xeca4,	// (0x00059e2b) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005aacd) popup_image3_note_pane_t

0xecb2,	// (0x00059e39) popup_image3_note_pane_t3_copy1

0x6a13,	// (0x00051b9a) bg_myfav_hc_instruction_pane_ParamLimits

0x6a13,	// (0x00051b9a) bg_myfav_hc_instruction_pane

0x6a27,	// (0x00051bae) cell_myfav_contact_pane_ParamLimits

0x6a27,	// (0x00051bae) cell_myfav_contact_pane

0x6a45,	// (0x00051bcc) cell_myfav_contact_pane_cp1_ParamLimits

0x6a45,	// (0x00051bcc) cell_myfav_contact_pane_cp1

0x6a5d,	// (0x00051be4) cell_myfav_contact_pane_cp2_ParamLimits

0x6a5d,	// (0x00051be4) cell_myfav_contact_pane_cp2

0x6a75,	// (0x00051bfc) cell_myfav_contact_pane_cp3_ParamLimits

0x6a75,	// (0x00051bfc) cell_myfav_contact_pane_cp3

0x6a8c,	// (0x00051c13) cell_myfav_contact_pane_cp4_ParamLimits

0x6a8c,	// (0x00051c13) cell_myfav_contact_pane_cp4

0x6aa4,	// (0x00051c2b) cell_myfav_contact_pane_cp5_ParamLimits

0x6aa4,	// (0x00051c2b) cell_myfav_contact_pane_cp5

0x6ab8,	// (0x00051c3f) cell_myfav_contact_pane_cp6_ParamLimits

0x6ab8,	// (0x00051c3f) cell_myfav_contact_pane_cp6

0x6ace,	// (0x00051c55) cell_myfav_contact_pane_cp7_ParamLimits

0x6ace,	// (0x00051c55) cell_myfav_contact_pane_cp7

0xecc0,	// (0x00059e47) listscroll_gen_pane_cp05

0x6ae8,	// (0x00051c6f) main_myfav_hc_pane_g1_ParamLimits

0x6ae8,	// (0x00051c6f) main_myfav_hc_pane_g1

0x6b02,	// (0x00051c89) main_myfav_hc_pane_g2_ParamLimits

0x6b02,	// (0x00051c89) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005aad4) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005aad4) main_myfav_hc_pane_g

0x6b34,	// (0x00051cbb) main_myfav_hc_pane_t1_ParamLimits

0x6b34,	// (0x00051cbb) main_myfav_hc_pane_t1

0xecc9,	// (0x00059e50) main_myfav_hc_pane_t2_ParamLimits

0xecc9,	// (0x00059e50) main_myfav_hc_pane_t2

0xecdb,	// (0x00059e62) main_myfav_hc_pane_t3_ParamLimits

0xecdb,	// (0x00059e62) main_myfav_hc_pane_t3

0x6b4b,	// (0x00051cd2) main_myfav_hc_pane_t4_ParamLimits

0x6b4b,	// (0x00051cd2) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005aadb) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005aadb) main_myfav_hc_pane_t

0xe1e3,	// (0x0005936a) bg_myfav_hc_instruction_pane_g1

0xeced,	// (0x00059e74) cell_myfav_contact_pane_g1_ParamLimits

0xeced,	// (0x00059e74) cell_myfav_contact_pane_g1

0xeced,	// (0x00059e74) cell_myfav_contact_pane_g2_ParamLimits

0xeced,	// (0x00059e74) cell_myfav_contact_pane_g2

0xecf9,	// (0x00059e80) cell_myfav_contact_pane_g3_ParamLimits

0xecf9,	// (0x00059e80) cell_myfav_contact_pane_g3

0xe4d4,	// (0x0005965b) cell_myfav_contact_pane_g4_ParamLimits

0xe4d4,	// (0x0005965b) cell_myfav_contact_pane_g4

0xed06,	// (0x00059e8d) cell_myfav_contact_pane_g5_ParamLimits

0xed06,	// (0x00059e8d) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005aae6) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005aae6) cell_myfav_contact_pane_g

0x6b1c,	// (0x00051ca3) main_myfav_hc_pane_g3_ParamLimits

0x6b1c,	// (0x00051ca3) main_myfav_hc_pane_g3

0x1271,	// (0x0004c3f8) popup_adpt_find_window

0x6b73,	// (0x00051cfa) afind_page_pane_ParamLimits

0x6b73,	// (0x00051cfa) afind_page_pane

0x6b88,	// (0x00051d0f) aid_size_cell_afind_ParamLimits

0x6b88,	// (0x00051d0f) aid_size_cell_afind

0x6ba6,	// (0x00051d2d) bg_popup_sub_pane_cp09_ParamLimits

0x6ba6,	// (0x00051d2d) bg_popup_sub_pane_cp09

0x6bb3,	// (0x00051d3a) find_pane_cp01_ParamLimits

0x6bb3,	// (0x00051d3a) find_pane_cp01

0xed12,	// (0x00059e99) grid_afind_control_pane_ParamLimits

0xed12,	// (0x00059e99) grid_afind_control_pane

0x6bc0,	// (0x00051d47) grid_afind_pane_ParamLimits

0x6bc0,	// (0x00051d47) grid_afind_pane

0x6be2,	// (0x00051d69) cell_afind_pane_ParamLimits

0x6be2,	// (0x00051d69) cell_afind_pane

0xe1e3,	// (0x0005936a) afind_page_pane_g1

0x6c49,	// (0x00051dd0) afind_page_pane_g2

0x6c52,	// (0x00051dd9) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005aaf1) afind_page_pane_g

0x6c5b,	// (0x00051de2) afind_page_pane_t1

0xed26,	// (0x00059ead) cell_afind_grid_control_pane_ParamLimits

0xed26,	// (0x00059ead) cell_afind_grid_control_pane

0xeb2f,	// (0x00059cb6) bg_button_pane_cp69_ParamLimits

0xeb2f,	// (0x00059cb6) bg_button_pane_cp69

0x6c7b,	// (0x00051e02) cell_afind_pane_g1_ParamLimits

0x6c7b,	// (0x00051e02) cell_afind_pane_g1

0x6c88,	// (0x00051e0f) cell_afind_pane_t1_ParamLimits

0x6c88,	// (0x00051e0f) cell_afind_pane_t1

0xbfbd,	// (0x00057144) bg_button_pane_cp72

0xed35,	// (0x00059ebc) cell_afind_grid_control_pane_g1

0x3ce6,	// (0x0004ee6d) aid_image_placing_area_ParamLimits

0x3ce6,	// (0x0004ee6d) aid_image_placing_area

0xe7fd,	// (0x00059984) field_vitu_entry_pane_g1_ParamLimits

0xe7fd,	// (0x00059984) field_vitu_entry_pane_g1

0xe809,	// (0x00059990) field_vitu_entry_pane_g2_ParamLimits

0xe809,	// (0x00059990) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005a9a2) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005a9a2) field_vitu_entry_pane_g

0x5e4f,	// (0x00050fd6) cell_vitu_itu_pane_g1_ParamLimits

0x5e91,	// (0x00051018) cell_vitu_itu_pane_t3_ParamLimits

0x5e91,	// (0x00051018) cell_vitu_itu_pane_t3

0xeadf,	// (0x00059c66) mp4_progress_pane_t1_ParamLimits

0xeaf8,	// (0x00059c7f) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005aa37) mp4_progress_pane_t_ParamLimits

0xeb11,	// (0x00059c98) mup_progress_pane_cp04_ParamLimits

0x6b5f,	// (0x00051ce6) main_myfav_hc_pane_t5_ParamLimits

0x6b5f,	// (0x00051ce6) main_myfav_hc_pane_t5

0x97b9,	// (0x00054940) aid_zoom_text_primary

0x1271,	// (0x0004c3f8) popup_adpt_find_window_ParamLimits

0xbdd4,	// (0x00056f5b) main_cam_set_pane

0x65b0,	// (0x00051737) cam4_zoom_pane_ParamLimits

0x65b0,	// (0x00051737) cam4_zoom_pane

0x6c9a,	// (0x00051e21) main_cam_set_pane_g1_ParamLimits

0x6c9a,	// (0x00051e21) main_cam_set_pane_g1

0x6ca8,	// (0x00051e2f) main_cam_set_pane_g2_ParamLimits

0x6ca8,	// (0x00051e2f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005aaf8) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005aaf8) main_cam_set_pane_g

0x6cc9,	// (0x00051e50) main_cam_set_pane_t1_ParamLimits

0x6cc9,	// (0x00051e50) main_cam_set_pane_t1

0x6ce4,	// (0x00051e6b) main_cset_listscroll_pane_ParamLimits

0x6ce4,	// (0x00051e6b) main_cset_listscroll_pane

0x6d04,	// (0x00051e8b) main_cset_slider_pane_ParamLimits

0x6d04,	// (0x00051e8b) main_cset_slider_pane

0xed46,	// (0x00059ecd) main_cset_list_pane_ParamLimits

0xed46,	// (0x00059ecd) main_cset_list_pane

0xed56,	// (0x00059edd) scroll_pane_cp028

0x6d2a,	// (0x00051eb1) aid_area_touch_slider

0x6d46,	// (0x00051ecd) cset_slider_pane

0x6d70,	// (0x00051ef7) main_cset_slider_pane_g1

0x6d85,	// (0x00051f0c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005aafd) main_cset_slider_pane_g

0xed8f,	// (0x00059f16) main_cset_slider_pane_t1

0x6e41,	// (0x00051fc8) main_cset_slider_pane_t2

0x6e5b,	// (0x00051fe2) main_cset_slider_pane_t3

0x6e75,	// (0x00051ffc) main_cset_slider_pane_t4

0x6e8f,	// (0x00052016) main_cset_slider_pane_t5

0x6ea9,	// (0x00052030) main_cset_slider_pane_t6

0x6ebe,	// (0x00052045) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005ab22) main_cset_slider_pane_t

0x6fc2,	// (0x00052149) cset_list_set_pane_ParamLimits

0x6fc2,	// (0x00052149) cset_list_set_pane

0x6fd4,	// (0x0005215b) aid_position_infowindow_above

0x6fdc,	// (0x00052163) aid_position_infowindow_below

0x6fe4,	// (0x0005216b) cset_list_set_pane_g1_ParamLimits

0x6fe4,	// (0x0005216b) cset_list_set_pane_g1

0x6ff0,	// (0x00052177) cset_list_set_pane_g3_ParamLimits

0x6ff0,	// (0x00052177) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005ab41) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005ab41) cset_list_set_pane_g

0x6fff,	// (0x00052186) cset_list_set_pane_t1_ParamLimits

0x6fff,	// (0x00052186) cset_list_set_pane_t1

0xbdd4,	// (0x00056f5b) list_highlight_pane_cp021_ParamLimits

0xbdd4,	// (0x00056f5b) list_highlight_pane_cp021

0xcb0d,	// (0x00057c94) cset_slider_pane_g1

0xcb1f,	// (0x00057ca6) cset_slider_pane_g2

0xcb16,	// (0x00057c9d) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005ab46) cset_slider_pane_g

0x9e57,	// (0x00054fde) aid_area_touch_cam4_zoom

0x9e5f,	// (0x00054fe6) cam4_zoom_cont_pane

0x9e67,	// (0x00054fee) cam4_zoom_pane_g1

0x9e6f,	// (0x00054ff6) cam4_zoom_pane_g2

0x7014,	// (0x0005219b) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005ab4d) cam4_zoom_pane_g

0xee2f,	// (0x00059fb6) cam4_zoom_cont_pane_g1

0xee38,	// (0x00059fbf) cam4_zoom_cont_pane_g2

0xee41,	// (0x00059fc8) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005ab54) cam4_zoom_cont_pane_g

0x6470,	// (0x000515f7) call4_image_pane_ParamLimits

0x6470,	// (0x000515f7) call4_image_pane

0xeb3b,	// (0x00059cc2) call4_windows_conf_pane_ParamLimits

0xeb78,	// (0x00059cff) popup_call4_audio_in_window_ParamLimits

0xeb78,	// (0x00059cff) popup_call4_audio_in_window

0xb130,	// (0x000562b7) bg_popup_call2_act_pane_cp02

0xebc1,	// (0x00059d48) call4_list_conf_pane

0xe1e3,	// (0x0005936a) call4_image_pane_g1

0xe1e3,	// (0x0005936a) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0005a863) call4_image_pane_g

0xee4a,	// (0x00059fd1) list_single_graphic_popup_conf4_pane_ParamLimits

0xee4a,	// (0x00059fd1) list_single_graphic_popup_conf4_pane

0xb130,	// (0x000562b7) list_highlight_pane_cp022

0xee5d,	// (0x00059fe4) list_single_graphic_popup_conf4_pane_g1

0xc6de,	// (0x00057865) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005ab5b) list_single_graphic_popup_conf4_pane_g

0xee65,	// (0x00059fec) list_single_graphic_popup_conf4_pane_t1

0x226d,	// (0x0004d3f4) popup_vtel_slider_window_ParamLimits

0x226d,	// (0x0004d3f4) popup_vtel_slider_window

0xeb1d,	// (0x00059ca4) dialer2_ne_pane_t2_ParamLimits

0xeb1d,	// (0x00059ca4) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005aa3c) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005aa3c) dialer2_ne_pane_t

0xdfc8,	// (0x0005914f) bg_popup_sub_pane_cp010_ParamLimits

0xdfc8,	// (0x0005914f) bg_popup_sub_pane_cp010

0x701c,	// (0x000521a3) popup_vtel_slider_window_g1_ParamLimits

0x701c,	// (0x000521a3) popup_vtel_slider_window_g1

0x702f,	// (0x000521b6) popup_vtel_slider_window_g2_ParamLimits

0x702f,	// (0x000521b6) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005ab60) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005ab60) popup_vtel_slider_window_g

0x7085,	// (0x0005220c) vtel_slider_pane_ParamLimits

0x7085,	// (0x0005220c) vtel_slider_pane

0x70a7,	// (0x0005222e) vtel_slider_pane_g1_ParamLimits

0x70a7,	// (0x0005222e) vtel_slider_pane_g1

0x70bb,	// (0x00052242) vtel_slider_pane_g2_ParamLimits

0x70bb,	// (0x00052242) vtel_slider_pane_g2

0x70d3,	// (0x0005225a) vtel_slider_pane_g3_ParamLimits

0x70d3,	// (0x0005225a) vtel_slider_pane_g3

0x70a7,	// (0x0005222e) vtel_slider_pane_g4_ParamLimits

0x70a7,	// (0x0005222e) vtel_slider_pane_g4

0x70e9,	// (0x00052270) vtel_slider_pane_g5_ParamLimits

0x70e9,	// (0x00052270) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005ab69) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005ab69) vtel_slider_pane_g

0xbdd4,	// (0x00056f5b) main_gallery2_pane

0x67b0,	// (0x00051937) aid_size_row_itut2_dropdow_list_ParamLimits

0x67b0,	// (0x00051937) aid_size_row_itut2_dropdow_list

0x683c,	// (0x000519c3) grid_vitu2_function_top_pane_ParamLimits

0x683c,	// (0x000519c3) grid_vitu2_function_top_pane

0x68a6,	// (0x00051a2d) popup_vitu2_dropdown_list_window_ParamLimits

0x68a6,	// (0x00051a2d) popup_vitu2_dropdown_list_window

0x68cf,	// (0x00051a56) popup_vitu2_match_list_window

0x70ff,	// (0x00052286) cell_vitu2_function_top_pane_ParamLimits

0x70ff,	// (0x00052286) cell_vitu2_function_top_pane

0x7117,	// (0x0005229e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7117,	// (0x0005229e) cell_vitu2_function_top_pane_cp01

0x7133,	// (0x000522ba) cell_vitu2_function_top_wide_pane_ParamLimits

0x7133,	// (0x000522ba) cell_vitu2_function_top_wide_pane

0xbdd4,	// (0x00056f5b) bg_button_pane_cp012

0x714f,	// (0x000522d6) cell_vitu2_function_top_pane_g1

0x9e77,	// (0x00054ffe) bg_button_pane_cp013_ParamLimits

0x9e77,	// (0x00054ffe) bg_button_pane_cp013

0x7163,	// (0x000522ea) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7163,	// (0x000522ea) cell_vitu2_function_top_wide_pane_g1

0xbdd4,	// (0x00056f5b) bg_popup_sub_pane_cp20

0x717b,	// (0x00052302) list_vitu2_match_list_pane

0xec3c,	// (0x00059dc3) bg_popup_sub_pane_cp20_g1

0xec44,	// (0x00059dcb) bg_popup_sub_pane_cp20_g2

0xc1c4,	// (0x0005734b) bg_popup_sub_pane_cp20_g3

0xec4c,	// (0x00059dd3) bg_popup_sub_pane_cp20_g4

0xc1a4,	// (0x0005732b) bg_popup_sub_pane_cp20_g5

0xee7b,	// (0x0005a002) bg_popup_sub_pane_cp20_g6

0xec5c,	// (0x00059de3) bg_popup_sub_pane_cp20_g7

0xec64,	// (0x00059deb) bg_popup_sub_pane_cp20_g8

0xec6c,	// (0x00059df3) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005ab74) bg_popup_sub_pane_cp20_g

0x9e93,	// (0x0005501a) list_vitu2_match_list_item_pane_ParamLimits

0x9e93,	// (0x0005501a) list_vitu2_match_list_item_pane

0x9ea5,	// (0x0005502c) list_vitu2_match_list_item_pane_t1

0xb130,	// (0x000562b7) bg_popup_sub_pane_cp21

0xc606,	// (0x0005778d) grid_vitu2_dropdown_list_pane

0x7199,	// (0x00052320) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7199,	// (0x00052320) cell_vitu2_dropdown_list_char_pane

0x71ba,	// (0x00052341) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71ba,	// (0x00052341) cell_vitu2_dropdown_list_ctrl_pane

0xee83,	// (0x0005a00a) cell_vitu2_dropdown_list_char_pane_g1

0xee8c,	// (0x0005a013) cell_vitu2_dropdown_list_char_pane_g2

0xee95,	// (0x0005a01c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005ab91) cell_vitu2_dropdown_list_char_pane_g

0x71e6,	// (0x0005236d) cell_vitu2_dropdown_list_char_pane_t1

0x71f4,	// (0x0005237b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71f4,	// (0x0005237b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7201,	// (0x00052388) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7201,	// (0x00052388) cell_vitu2_dropdown_list_ctrl_pane_g2

0x720e,	// (0x00052395) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x720e,	// (0x00052395) cell_vitu2_dropdown_list_ctrl_pane_g3

0x721b,	// (0x000523a2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x721b,	// (0x000523a2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe44f,	// (0x000595d6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe44f,	// (0x000595d6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005ab98) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005ab98) cell_vitu2_dropdown_list_ctrl_pane_g

0x7237,	// (0x000523be) aid_size_cell_gallery2_ParamLimits

0x7237,	// (0x000523be) aid_size_cell_gallery2

0x7255,	// (0x000523dc) grid_gallery2_pane_ParamLimits

0x7255,	// (0x000523dc) grid_gallery2_pane

0x726f,	// (0x000523f6) scroll_pane_cp029_ParamLimits

0x726f,	// (0x000523f6) scroll_pane_cp029

0x7280,	// (0x00052407) cell_gallery2_pane_ParamLimits

0x7280,	// (0x00052407) cell_gallery2_pane

0xee9e,	// (0x0005a025) cell_gallery2_pane_g2

0x72df,	// (0x00052466) cell_gallery2_pane_g3

0xeea6,	// (0x0005a02d) cell_gallery2_pane_g4

0xeeae,	// (0x0005a035) cell_gallery2_pane_g5

0xbf6b,	// (0x000570f2) grid_highlight_pane_cp10

0x68cf,	// (0x00051a56) popup_vitu2_match_list_window_ParamLimits

0x68e6,	// (0x00051a6d) popup_vitu2_query_window_ParamLimits

0x68e6,	// (0x00051a6d) popup_vitu2_query_window

0xb130,	// (0x000562b7) bg_vitu2_candi_button_pane

0xee83,	// (0x0005a00a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee8c,	// (0x0005a013) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee95,	// (0x0005a01c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x065e,	// (0x0004b7e5) bg_button_pane_cp015

0x72e7,	// (0x0005246e) bg_button_pane_cp016

0x72fa,	// (0x00052481) bg_button_pane_cp017

0xdddb,	// (0x00058f62) bg_popup_sub_pane_cp22

0xeeb6,	// (0x0005a03d) popup_vitu2_query_window_g1

0x0691,	// (0x0004b818) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005aba3) popup_vitu2_query_window_g

0x06b0,	// (0x0004b837) popup_vitu2_query_window_t1_ParamLimits

0x06b0,	// (0x0004b837) popup_vitu2_query_window_t1

0x06e5,	// (0x0004b86c) popup_vitu2_query_window_t2_ParamLimits

0x06e5,	// (0x0004b86c) popup_vitu2_query_window_t2

0x06f7,	// (0x0004b87e) popup_vitu2_query_window_t3_ParamLimits

0x06f7,	// (0x0004b87e) popup_vitu2_query_window_t3

0x731e,	// (0x000524a5) popup_vitu2_query_window_t4_ParamLimits

0x731e,	// (0x000524a5) popup_vitu2_query_window_t4

0x733f,	// (0x000524c6) popup_vitu2_query_window_t5_ParamLimits

0x733f,	// (0x000524c6) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005abaa) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005abaa) popup_vitu2_query_window_t

0xed3e,	// (0x00059ec5) main_cset_text_pane

0x6d2a,	// (0x00051eb1) aid_area_touch_slider_ParamLimits

0x6d46,	// (0x00051ecd) cset_slider_pane_ParamLimits

0x6d70,	// (0x00051ef7) main_cset_slider_pane_g1_ParamLimits

0x6d85,	// (0x00051f0c) main_cset_slider_pane_g2_ParamLimits

0xed5f,	// (0x00059ee6) main_cset_slider_pane_g3_ParamLimits

0xed5f,	// (0x00059ee6) main_cset_slider_pane_g3

0x6d9a,	// (0x00051f21) main_cset_slider_pane_g4_ParamLimits

0x6d9a,	// (0x00051f21) main_cset_slider_pane_g4

0x6da9,	// (0x00051f30) main_cset_slider_pane_g5_ParamLimits

0x6da9,	// (0x00051f30) main_cset_slider_pane_g5

0x6db5,	// (0x00051f3c) main_cset_slider_pane_g6_ParamLimits

0x6db5,	// (0x00051f3c) main_cset_slider_pane_g6

0xf976,	// (0x0005aafd) main_cset_slider_pane_g_ParamLimits

0xed8f,	// (0x00059f16) main_cset_slider_pane_t1_ParamLimits

0x6e41,	// (0x00051fc8) main_cset_slider_pane_t2_ParamLimits

0x6e5b,	// (0x00051fe2) main_cset_slider_pane_t3_ParamLimits

0x6e75,	// (0x00051ffc) main_cset_slider_pane_t4_ParamLimits

0x6e8f,	// (0x00052016) main_cset_slider_pane_t5_ParamLimits

0x6ea9,	// (0x00052030) main_cset_slider_pane_t6_ParamLimits

0x6ebe,	// (0x00052045) main_cset_slider_pane_t7_ParamLimits

0x6ee8,	// (0x0005206f) main_cset_slider_pane_t8_ParamLimits

0x6ee8,	// (0x0005206f) main_cset_slider_pane_t8

0x6f10,	// (0x00052097) main_cset_slider_pane_t9_ParamLimits

0x6f10,	// (0x00052097) main_cset_slider_pane_t9

0x6f38,	// (0x000520bf) main_cset_slider_pane_t10_ParamLimits

0x6f38,	// (0x000520bf) main_cset_slider_pane_t10

0x6f60,	// (0x000520e7) main_cset_slider_pane_t11_ParamLimits

0x6f60,	// (0x000520e7) main_cset_slider_pane_t11

0x6f88,	// (0x0005210f) main_cset_slider_pane_t12_ParamLimits

0x6f88,	// (0x0005210f) main_cset_slider_pane_t12

0x6fa5,	// (0x0005212c) main_cset_slider_pane_t13_ParamLimits

0x6fa5,	// (0x0005212c) main_cset_slider_pane_t13

0xf99b,	// (0x0005ab22) main_cset_slider_pane_t_ParamLimits

0xb130,	// (0x000562b7) bg_popup_sub_pane_cp011

0xeec2,	// (0x0005a049) main_cset_text_pane_g1

0xeeca,	// (0x0005a051) main_cset_text_pane_t1

0xeed8,	// (0x0005a05f) main_cset_text_pane_t2

0xeee6,	// (0x0005a06d) main_cset_text_pane_t3

0xeef4,	// (0x0005a07b) main_cset_text_pane_t4

0xef02,	// (0x0005a089) main_cset_text_pane_t5

0xef10,	// (0x0005a097) main_cset_text_pane_t6

0xef1e,	// (0x0005a0a5) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005abb9) main_cset_text_pane_t

0xb130,	// (0x000562b7) main_cam4_burst_pane

0xb130,	// (0x000562b7) main_cam5_pane

0x6c69,	// (0x00051df0) bg_button_pane_cp019

0x6c72,	// (0x00051df9) bg_button_pane_cp020

0xed6b,	// (0x00059ef2) main_cset_slider_pane_g7_ParamLimits

0xed6b,	// (0x00059ef2) main_cset_slider_pane_g7

0xed77,	// (0x00059efe) main_cset_slider_pane_g8_ParamLimits

0xed77,	// (0x00059efe) main_cset_slider_pane_g8

0x6dc9,	// (0x00051f50) main_cset_slider_pane_g9_ParamLimits

0x6dc9,	// (0x00051f50) main_cset_slider_pane_g9

0x6dd5,	// (0x00051f5c) main_cset_slider_pane_g10_ParamLimits

0x6dd5,	// (0x00051f5c) main_cset_slider_pane_g10

0x6de1,	// (0x00051f68) main_cset_slider_pane_g11_ParamLimits

0x6de1,	// (0x00051f68) main_cset_slider_pane_g11

0x6ded,	// (0x00051f74) main_cset_slider_pane_g12_ParamLimits

0x6ded,	// (0x00051f74) main_cset_slider_pane_g12

0x6df9,	// (0x00051f80) main_cset_slider_pane_g13_ParamLimits

0x6df9,	// (0x00051f80) main_cset_slider_pane_g13

0x6e05,	// (0x00051f8c) main_cset_slider_pane_g14_ParamLimits

0x6e05,	// (0x00051f8c) main_cset_slider_pane_g14

0x6e11,	// (0x00051f98) main_cset_slider_pane_g15_ParamLimits

0x6e11,	// (0x00051f98) main_cset_slider_pane_g15

0xedbd,	// (0x00059f44) main_cset_slider_pane_t14_ParamLimits

0xedbd,	// (0x00059f44) main_cset_slider_pane_t14

0xedf6,	// (0x00059f7d) main_cset_slider_pane_t15_ParamLimits

0xedf6,	// (0x00059f7d) main_cset_slider_pane_t15

0x7360,	// (0x000524e7) aid_cam4_burst_size_cell_ParamLimits

0x7360,	// (0x000524e7) aid_cam4_burst_size_cell

0x7380,	// (0x00052507) grid_cam4_burst_pane_ParamLimits

0x7380,	// (0x00052507) grid_cam4_burst_pane

0x73b8,	// (0x0005253f) linegrid_cam4_burst_pane_ParamLimits

0x73b8,	// (0x0005253f) linegrid_cam4_burst_pane

0xef2c,	// (0x0005a0b3) scroll_pane_cp30_ParamLimits

0xef2c,	// (0x0005a0b3) scroll_pane_cp30

0x73dc,	// (0x00052563) cell_cam4_burst_pane_ParamLimits

0x73dc,	// (0x00052563) cell_cam4_burst_pane

0xef38,	// (0x0005a0bf) linegrid_cam4_burst_pane_g1_ParamLimits

0xef38,	// (0x0005a0bf) linegrid_cam4_burst_pane_g1

0x7429,	// (0x000525b0) linegrid_cam4_burst_pane_g2_ParamLimits

0x7429,	// (0x000525b0) linegrid_cam4_burst_pane_g2

0xef45,	// (0x0005a0cc) linegrid_cam4_burst_pane_g3_ParamLimits

0xef45,	// (0x0005a0cc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005abc8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005abc8) linegrid_cam4_burst_pane_g

0x743a,	// (0x000525c1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x743a,	// (0x000525c1) linegrid_cam4_burst_pane_g3_copy1

0xef52,	// (0x0005a0d9) linegrid_cam4_burst_pane_g4_ParamLimits

0xef52,	// (0x0005a0d9) linegrid_cam4_burst_pane_g4

0x7454,	// (0x000525db) linegrid_cam4_burst_pane_g5_ParamLimits

0x7454,	// (0x000525db) linegrid_cam4_burst_pane_g5

0x7465,	// (0x000525ec) linegrid_cam4_burst_pane_g6_ParamLimits

0x7465,	// (0x000525ec) linegrid_cam4_burst_pane_g6

0xef5f,	// (0x0005a0e6) linegrid_cam4_burst_pane_g7_ParamLimits

0xef5f,	// (0x0005a0e6) linegrid_cam4_burst_pane_g7

0x747c,	// (0x00052603) cell_cam4_burst_pane_g1

0xef78,	// (0x0005a0ff) main_cam5_pane_t1_ParamLimits

0xef78,	// (0x0005a0ff) main_cam5_pane_t1

0xef8a,	// (0x0005a111) main_cam5_pane_t2_ParamLimits

0xef8a,	// (0x0005a111) main_cam5_pane_t2

0xef9c,	// (0x0005a123) main_cam5_pane_t3_ParamLimits

0xef9c,	// (0x0005a123) main_cam5_pane_t3

0xefae,	// (0x0005a135) main_cam5_pane_t4_ParamLimits

0xefae,	// (0x0005a135) main_cam5_pane_t4

0xefc6,	// (0x0005a14d) main_cam5_pane_t5_ParamLimits

0xefc6,	// (0x0005a14d) main_cam5_pane_t5

0xefda,	// (0x0005a161) main_cam5_pane_t6_ParamLimits

0xefda,	// (0x0005a161) main_cam5_pane_t6

0xefee,	// (0x0005a175) main_cam5_pane_t7_ParamLimits

0xefee,	// (0x0005a175) main_cam5_pane_t7

0xf000,	// (0x0005a187) main_cam5_pane_t8_ParamLimits

0xf000,	// (0x0005a187) main_cam5_pane_t8

0xf01c,	// (0x0005a1a3) main_cam5_pane_t9_ParamLimits

0xf01c,	// (0x0005a1a3) main_cam5_pane_t9

0xf02e,	// (0x0005a1b5) main_cam5_pane_t10_ParamLimits

0xf02e,	// (0x0005a1b5) main_cam5_pane_t10

0xf040,	// (0x0005a1c7) main_cam5_pane_t11_ParamLimits

0xf040,	// (0x0005a1c7) main_cam5_pane_t11

0xf052,	// (0x0005a1d9) main_cam5_pane_t12_ParamLimits

0xf052,	// (0x0005a1d9) main_cam5_pane_t12

0xf067,	// (0x0005a1ee) main_cam5_pane_t13_ParamLimits

0xf067,	// (0x0005a1ee) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005abd4) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005abd4) main_cam5_pane_t

0x12f3,	// (0x0004c47a) popup_scut_keymap_window_ParamLimits

0x12f3,	// (0x0004c47a) popup_scut_keymap_window

0x748f,	// (0x00052616) aid_size_cell_brow_shortcut

0xbf6b,	// (0x000570f2) bg_popup_window_pane_cp010

0x749b,	// (0x00052622) grid_scut_pane

0x74a7,	// (0x0005262e) cell_scut_pane_ParamLimits

0x74a7,	// (0x0005262e) cell_scut_pane

0x74be,	// (0x00052645) cell_scut_pane_g1

0xf0a0,	// (0x0005a227) cell_scut_pane_t1

0xf0af,	// (0x0005a236) cell_scut_pane_t2

0x74c7,	// (0x0005264e) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005abef) cell_scut_pane_t

0x5342,	// (0x000504c9) main_mup3_pane_g8_ParamLimits

0x5342,	// (0x000504c9) main_mup3_pane_g8

0x67c8,	// (0x0005194f) area_vitu2_query_pane_ParamLimits

0x67c8,	// (0x0005194f) area_vitu2_query_pane

0x0670,	// (0x0004b7f7) input_focus_pane_cp08

0xf0be,	// (0x0005a245) area_vitu2_query_pane_g1

0x0775,	// (0x0004b8fc) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005abf6) area_vitu2_query_pane_g

0x74d5,	// (0x0005265c) area_vitu2_query_pane_t1_ParamLimits

0x74d5,	// (0x0005265c) area_vitu2_query_pane_t1

0x74e9,	// (0x00052670) area_vitu2_query_pane_t2_ParamLimits

0x74e9,	// (0x00052670) area_vitu2_query_pane_t2

0x0786,	// (0x0004b90d) area_vitu2_query_pane_t3_ParamLimits

0x0786,	// (0x0004b90d) area_vitu2_query_pane_t3

0x74fd,	// (0x00052684) area_vitu2_query_pane_t4_ParamLimits

0x74fd,	// (0x00052684) area_vitu2_query_pane_t4

0x7525,	// (0x000526ac) area_vitu2_query_pane_t5_ParamLimits

0x7525,	// (0x000526ac) area_vitu2_query_pane_t5

0x754d,	// (0x000526d4) area_vitu2_query_pane_t6_ParamLimits

0x754d,	// (0x000526d4) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005abfb) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005abfb) area_vitu2_query_pane_t

0x7599,	// (0x00052720) bg_button_pane_cp018

0x75a7,	// (0x0005272e) bg_button_pane_cp021

0x07ae,	// (0x0004b935) bg_button_pane_cp022

0x07bd,	// (0x0004b944) input_focus_pane_cp09

0xc81a,	// (0x000579a1) aid_size_touch_mv_arrow_left

0xc843,	// (0x000579ca) aid_size_touch_mv_arrow_right

0x6e29,	// (0x00051fb0) main_cset_slider_pane_g16_ParamLimits

0x6e29,	// (0x00051fb0) main_cset_slider_pane_g16

0x6e35,	// (0x00051fbc) main_cset_slider_pane_g17_ParamLimits

0x6e35,	// (0x00051fbc) main_cset_slider_pane_g17

0x747c,	// (0x00052603) cell_cam4_burst_pane_g1_ParamLimits

0xb130,	// (0x000562b7) compa_mode_pane

0x703f,	// (0x000521c6) popup_vtel_slider_window_g3_ParamLimits

0x703f,	// (0x000521c6) popup_vtel_slider_window_g3

0x7056,	// (0x000521dd) popup_vtel_slider_window_g4_ParamLimits

0x7056,	// (0x000521dd) popup_vtel_slider_window_g4

0x706d,	// (0x000521f4) popup_vtel_slider_window_t1_ParamLimits

0x706d,	// (0x000521f4) popup_vtel_slider_window_t1

0xb130,	// (0x000562b7) main_cl_pane

0x99aa,	// (0x00054b31) popup_imed_adjust2_window_ParamLimits

0xdddb,	// (0x00058f62) bg_tb_trans_pane_cp05_ParamLimits

0xe732,	// (0x000598b9) popup_imed_adjust2_window_g1_ParamLimits

0xe741,	// (0x000598c8) popup_imed_adjust2_window_g2_ParamLimits

0xe741,	// (0x000598c8) popup_imed_adjust2_window_g2

0xe74d,	// (0x000598d4) popup_imed_adjust2_window_g3_ParamLimits

0xe74d,	// (0x000598d4) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005a966) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005a966) popup_imed_adjust2_window_g

0xe759,	// (0x000598e0) popup_imed_adjust2_window_t1_ParamLimits

0xe771,	// (0x000598f8) slider_imed_adjust_pane_ParamLimits

0xe785,	// (0x0005990c) slider_imed_adjust_pane_g1_ParamLimits

0xe795,	// (0x0005991c) slider_imed_adjust_pane_g2_ParamLimits

0xe7a5,	// (0x0005992c) slider_imed_adjust_pane_g3_ParamLimits

0xe7b6,	// (0x0005993d) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005a96d) slider_imed_adjust_pane_g_ParamLimits

0x6551,	// (0x000516d8) aid_touch_area_cam4_ParamLimits

0x6551,	// (0x000516d8) aid_touch_area_cam4

0x9d58,	// (0x00054edf) battery_pane_cp01

0x6620,	// (0x000517a7) main_camera4_pane_g6_ParamLimits

0x6620,	// (0x000517a7) main_camera4_pane_g6

0x664a,	// (0x000517d1) main_camera4_pane_t2_ParamLimits

0x664a,	// (0x000517d1) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005aa70) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005aa70) main_camera4_pane_t

0x667f,	// (0x00051806) aid_touch_area_vid4_ParamLimits

0x667f,	// (0x00051806) aid_touch_area_vid4

0x66d3,	// (0x0005185a) main_video4_pane_g5_ParamLimits

0x66d3,	// (0x0005185a) main_video4_pane_g5

0x66f8,	// (0x0005187f) vid4_progress_pane_ParamLimits

0x66f8,	// (0x0005187f) vid4_progress_pane

0xed83,	// (0x00059f0a) main_cset_slider_pane_g18_ParamLimits

0xed83,	// (0x00059f0a) main_cset_slider_pane_g18

0xef6c,	// (0x0005a0f3) cell_cam4_burst_pane_g2_ParamLimits

0xef6c,	// (0x0005a0f3) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005abcf) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005abcf) cell_cam4_burst_pane_g

0xb86d,	// (0x000569f4) bg_cl_pane_ParamLimits

0xb86d,	// (0x000569f4) bg_cl_pane

0x75b3,	// (0x0005273a) cl_header_pane_ParamLimits

0x75b3,	// (0x0005273a) cl_header_pane

0x75c7,	// (0x0005274e) cl_listscroll_pane_ParamLimits

0x75c7,	// (0x0005274e) cl_listscroll_pane

0x75d7,	// (0x0005275e) bg_cl_pane_g1

0x75df,	// (0x00052766) bg_cl_pane_g2

0x75e7,	// (0x0005276e) bg_cl_pane_g3

0x75ef,	// (0x00052776) bg_cl_pane_g4

0x75f7,	// (0x0005277e) bg_cl_pane_g5

0x75ff,	// (0x00052786) bg_cl_pane_g6

0x7607,	// (0x0005278e) bg_cl_pane_g7

0x760f,	// (0x00052796) bg_cl_pane_g8

0x7617,	// (0x0005279e) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005ac0a) bg_cl_pane_g

0x761f,	// (0x000527a6) aid_height_cl_leading_ParamLimits

0x761f,	// (0x000527a6) aid_height_cl_leading

0x762b,	// (0x000527b2) aid_height_cl_text_ParamLimits

0x762b,	// (0x000527b2) aid_height_cl_text

0xbdd4,	// (0x00056f5b) bg_cl_header_pane_ParamLimits

0xbdd4,	// (0x00056f5b) bg_cl_header_pane

0x764a,	// (0x000527d1) cl_header_pane_g1_ParamLimits

0x764a,	// (0x000527d1) cl_header_pane_g1

0x7660,	// (0x000527e7) cl_header_pane_t1_ParamLimits

0x7660,	// (0x000527e7) cl_header_pane_t1

0x7679,	// (0x00052800) cl_list_pane

0xed56,	// (0x00059edd) hc_scroll_pane_cp01

0xc1a4,	// (0x0005732b) bg_cl_header_pane_g1

0xec3c,	// (0x00059dc3) bg_cl_header_pane_g2

0xc1c4,	// (0x0005734b) bg_cl_header_pane_g3

0xec4c,	// (0x00059dd3) bg_cl_header_pane_g4

0xec44,	// (0x00059dcb) bg_cl_header_pane_g5

0xee7b,	// (0x0005a002) bg_cl_header_pane_g6

0xec64,	// (0x00059deb) bg_cl_header_pane_g7

0xec6c,	// (0x00059df3) bg_cl_header_pane_g8

0xec5c,	// (0x00059de3) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005ac1d) bg_cl_header_pane_g

0x7682,	// (0x00052809) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7682,	// (0x00052809) hc_cl_list_double_graphic_heading_pane

0x7693,	// (0x0005281a) hc_cl_list_single_graphic_pane_ParamLimits

0x7693,	// (0x0005281a) hc_cl_list_single_graphic_pane

0x76a9,	// (0x00052830) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76a9,	// (0x00052830) hc_cl_list_single_graphic_pane_g1

0x76b5,	// (0x0005283c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76b5,	// (0x0005283c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005ac30) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005ac30) hc_cl_list_single_graphic_pane_g

0x76c9,	// (0x00052850) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76c9,	// (0x00052850) hc_cl_list_single_graphic_pane_t1

0x76a9,	// (0x00052830) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76a9,	// (0x00052830) hc_cl_list_double_graphic_heading_pane_g1

0x76de,	// (0x00052865) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76de,	// (0x00052865) hc_cl_list_double_graphic_heading_pane_g2

0x76f2,	// (0x00052879) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76f2,	// (0x00052879) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005ac35) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005ac35) hc_cl_list_double_graphic_heading_pane_g

0x7706,	// (0x0005288d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7706,	// (0x0005288d) hc_cl_list_double_graphic_heading_pane_t1

0x771b,	// (0x000528a2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x771b,	// (0x000528a2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005ac3c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005ac3c) hc_cl_list_double_graphic_heading_pane_t

0x9ebb,	// (0x00055042) vid4_progress_pane_g1

0x9ecb,	// (0x00055052) vid4_progress_pane_g2

0x7730,	// (0x000528b7) vid4_progress_pane_g3

0x9edb,	// (0x00055062) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005ac41) vid4_progress_pane_g

0x7742,	// (0x000528c9) vid4_progress_pane_t1

0x9ef3,	// (0x0005507a) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005ac4c) vid4_progress_pane_t

0x775a,	// (0x000528e1) wait_bar_pane_cp07

0xdfd6,	// (0x0005915d) blid_firmament_pane_ParamLimits

0xe019,	// (0x000591a0) popup_blid_sat_info2_window_g1

0xe03d,	// (0x000591c4) popup_blid_sat_info2_window_t3

0xe04b,	// (0x000591d2) popup_blid_sat_info2_window_t4

0xe059,	// (0x000591e0) popup_blid_sat_info2_window_t5

0xe067,	// (0x000591ee) popup_blid_sat_info2_window_t6

0xe077,	// (0x000591fe) popup_blid_sat_info2_window_t7

0xe085,	// (0x0005920c) popup_blid_sat_info2_window_t8

0xe093,	// (0x0005921a) popup_blid_sat_info2_window_t9

0xe0a1,	// (0x00059228) popup_blid_sat_info2_window_t10

0xe163,	// (0x000592ea) aid_firma_cardinal_ParamLimits

0xe177,	// (0x000592fe) blid_firmament_pane_t1_ParamLimits

0xe18e,	// (0x00059315) blid_firmament_pane_t2_ParamLimits

0xe1a5,	// (0x0005932c) blid_firmament_pane_t3_ParamLimits

0xe1bc,	// (0x00059343) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0005a85a) blid_firmament_pane_t_ParamLimits

0xe1d3,	// (0x0005935a) blid_sat_info_pane_ParamLimits

0xbdd4,	// (0x00056f5b) main_cam_set_pane_ParamLimits

0x5c09,	// (0x00050d90) aid_size_cell_colour_35_ParamLimits

0x5c29,	// (0x00050db0) aid_size_cell_colour_112_ParamLimits

0x5c49,	// (0x00050dd0) aid_size_cell_effect_ParamLimits

0xdddb,	// (0x00058f62) bg_tb_trans_pane_cp02_ParamLimits

0xc40c,	// (0x00057593) heading_imed_pane_ParamLimits

0x5c69,	// (0x00050df0) listscroll_imed_pane_ParamLimits

0xd3f5,	// (0x0005857c) popup_call2_audio_first_window_g5_ParamLimits

0xd3f5,	// (0x0005857c) popup_call2_audio_first_window_g5

0x61fc,	// (0x00051383) aid_size_touch_image3_arrow_left_ParamLimits

0x61fc,	// (0x00051383) aid_size_touch_image3_arrow_left

0x6228,	// (0x000513af) aid_size_touch_image3_arrow_right_ParamLimits

0x6228,	// (0x000513af) aid_size_touch_image3_arrow_right

0x9f08,	// (0x0005508f) vid4_progress_pane_t3

0x5f7c,	// (0x00051103) main_hwr_training_symbol_option_pane_ParamLimits

0x5f7c,	// (0x00051103) main_hwr_training_symbol_option_pane

0xea1f,	// (0x00059ba6) popup_hwr_training_preview_window_ParamLimits

0xea1f,	// (0x00059ba6) popup_hwr_training_preview_window

0x5f9c,	// (0x00051123) hwr_training_navi_pane_g5_ParamLimits

0x5f9c,	// (0x00051123) hwr_training_navi_pane_g5

0xec2a,	// (0x00059db1) popup_char_count_window

0xbdd4,	// (0x00056f5b) bg_popup_sub_pane_cp20_ParamLimits

0x717b,	// (0x00052302) list_vitu2_match_list_pane_ParamLimits

0x718a,	// (0x00052311) vitu2_page_scroll_pane_ParamLimits

0x718a,	// (0x00052311) vitu2_page_scroll_pane

0x9f26,	// (0x000550ad) list_single_hwr_training_symbol_option_pane_ParamLimits

0x9f26,	// (0x000550ad) list_single_hwr_training_symbol_option_pane

0x9f39,	// (0x000550c0) list_single_hwr_training_symbol_option_pane_g1

0x9f41,	// (0x000550c8) list_single_hwr_training_symbol_option_pane_t1

0x9f4f,	// (0x000550d6) bg_button_pane_cp023

0x9f58,	// (0x000550df) bg_button_pane_cp024

0x77aa,	// (0x00052931) vitu2_page_scroll_pane_g1

0x77b2,	// (0x00052939) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005ac53) vitu2_page_scroll_pane_g

0x77ba,	// (0x00052941) vitu2_page_scroll_pane_t1

0xdf36,	// (0x000590bd) popup_char_count_window_g1

0x9f8b,	// (0x00055112) popup_char_count_window_g2

0x9f94,	// (0x0005511b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005ac58) popup_char_count_window_g

0x9f9d,	// (0x00055124) popup_char_count_window_t1

0xb130,	// (0x000562b7) main_vded2_pane

0xe71e,	// (0x000598a5) aid_size_cell_imed_line

0xe728,	// (0x000598af) grid_imed_line_width_pane

0x9e10,	// (0x00054f97) vid4_indicators_pane_g4

0x9fab,	// (0x00055132) cell_imed_line_width_pane_ParamLimits

0x9fab,	// (0x00055132) cell_imed_line_width_pane

0x9fbf,	// (0x00055146) cell_imed_line_width_pane_g1

0x9fc8,	// (0x0005514f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005ac5f) cell_imed_line_width_pane_g

0x77c9,	// (0x00052950) main_vded2_pane_g1_ParamLimits

0x77c9,	// (0x00052950) main_vded2_pane_g1

0x77df,	// (0x00052966) main_vded2_pane_g2_ParamLimits

0x77df,	// (0x00052966) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005ac64) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005ac64) main_vded2_pane_g

0x77f1,	// (0x00052978) vded2_slider_pane_ParamLimits

0x77f1,	// (0x00052978) vded2_slider_pane

0x7801,	// (0x00052988) aid_size_touch_vded2_end

0x780b,	// (0x00052992) aid_size_touch_vded2_playhead

0x9fd0,	// (0x00055157) aid_size_touch_vded2_start

0x9fd8,	// (0x0005515f) vded2_slider_bg_pane

0x9fe1,	// (0x00055168) vded2_slider_pane_g1

0x9fea,	// (0x00055171) vded2_slider_pane_g2

0x7815,	// (0x0005299c) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005ac69) vded2_slider_pane_g

0x9ff2,	// (0x00055179) vded2_slider_bg_pane_g1

0x9ffb,	// (0x00055182) vded2_slider_bg_pane_g2

0xa004,	// (0x0005518b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005ac70) vded2_slider_bg_pane_g

0x3955,	// (0x0004eadc) aid_postcard_touch_down_pane_ParamLimits

0x3955,	// (0x0004eadc) aid_postcard_touch_down_pane

0x396b,	// (0x0004eaf2) aid_postcard_touch_up_pane_ParamLimits

0x396b,	// (0x0004eaf2) aid_postcard_touch_up_pane

0xb130,	// (0x000562b7) main_blid2_pane

0x9990,	// (0x00054b17) popup_blid2_search_window

0xb130,	// (0x000562b7) blid2_gps_pane

0xb130,	// (0x000562b7) blid2_navig_pane

0xb130,	// (0x000562b7) blid2_search_pane

0xb130,	// (0x000562b7) blid2_tripm_pane

0x7820,	// (0x000529a7) blid2_search_pane_g1_ParamLimits

0x7820,	// (0x000529a7) blid2_search_pane_g1

0x783a,	// (0x000529c1) blid2_search_pane_t1_ParamLimits

0x783a,	// (0x000529c1) blid2_search_pane_t1

0x784c,	// (0x000529d3) aid_size_cell_blid2_gps_ParamLimits

0x784c,	// (0x000529d3) aid_size_cell_blid2_gps

0x7864,	// (0x000529eb) blid2_gps_pane_g1_ParamLimits

0x7864,	// (0x000529eb) blid2_gps_pane_g1

0x7878,	// (0x000529ff) grid_blid2_satellite_pane_ParamLimits

0x7878,	// (0x000529ff) grid_blid2_satellite_pane

0x7892,	// (0x00052a19) blid2_navig_pane_g1_ParamLimits

0x7892,	// (0x00052a19) blid2_navig_pane_g1

0x789e,	// (0x00052a25) blid2_navig_pane_t1_ParamLimits

0x789e,	// (0x00052a25) blid2_navig_pane_t1

0x78b9,	// (0x00052a40) blid2_navig_pane_t2_ParamLimits

0x78b9,	// (0x00052a40) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005ac77) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005ac77) blid2_navig_pane_t

0x78d4,	// (0x00052a5b) blid2_navig_ring_pane_ParamLimits

0x78d4,	// (0x00052a5b) blid2_navig_ring_pane

0x78ed,	// (0x00052a74) blid2_speed_pane_ParamLimits

0x78ed,	// (0x00052a74) blid2_speed_pane

0x78f9,	// (0x00052a80) blid2_tripm_pane_g1_ParamLimits

0x78f9,	// (0x00052a80) blid2_tripm_pane_g1

0x7912,	// (0x00052a99) blid2_tripm_pane_g2_ParamLimits

0x7912,	// (0x00052a99) blid2_tripm_pane_g2

0x7926,	// (0x00052aad) blid2_tripm_pane_g3_ParamLimits

0x7926,	// (0x00052aad) blid2_tripm_pane_g3

0x793a,	// (0x00052ac1) blid2_tripm_pane_g4_ParamLimits

0x793a,	// (0x00052ac1) blid2_tripm_pane_g4

0x794e,	// (0x00052ad5) blid2_tripm_pane_g5_ParamLimits

0x794e,	// (0x00052ad5) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005ac7c) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005ac7c) blid2_tripm_pane_g

0x7974,	// (0x00052afb) blid2_tripm_pane_t1_ParamLimits

0x7974,	// (0x00052afb) blid2_tripm_pane_t1

0x798f,	// (0x00052b16) blid2_tripm_pane_t2_ParamLimits

0x798f,	// (0x00052b16) blid2_tripm_pane_t2

0x79a8,	// (0x00052b2f) blid2_tripm_pane_t3_ParamLimits

0x79a8,	// (0x00052b2f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005ac89) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005ac89) blid2_tripm_pane_t

0x79ef,	// (0x00052b76) cell_blid2_satellite_pane_ParamLimits

0x79ef,	// (0x00052b76) cell_blid2_satellite_pane

0x7a0d,	// (0x00052b94) cell_blid2_satellite_pane_g1

0xa00d,	// (0x00055194) cell_blid2_satellite_pane_t1

0xe1e3,	// (0x0005936a) blid2_speed_pane_g1

0xa01b,	// (0x000551a2) blid2_speed_pane_t1

0xa029,	// (0x000551b0) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005ac92) blid2_speed_pane_t

0xe1e3,	// (0x0005936a) blid2_navig_ring_pane_g1

0x7a16,	// (0x00052b9d) blid2_navig_ring_pane_g2

0x7a1e,	// (0x00052ba5) blid2_navig_ring_pane_g3

0x7a26,	// (0x00052bad) blid2_navig_ring_pane_g4

0x7a2e,	// (0x00052bb5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005ac97) blid2_navig_ring_pane_g

0xb130,	// (0x000562b7) bg_popup_window_pane_cp011

0xa037,	// (0x000551be) popup_blid2_search_window_g1

0xa03f,	// (0x000551c6) popup_blid2_search_window_t1

0xa04d,	// (0x000551d4) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005aca2) popup_blid2_search_window_t

0xc0b3,	// (0x0005723a) main_browser_pane_g1

0xb86d,	// (0x000569f4) main_browser_pane_ParamLimits

0xbdd4,	// (0x00056f5b) bg_button_pane_cp011_ParamLimits

0x69ff,	// (0x00051b86) cell_vitu2_function_pane_g1_ParamLimits

0xdddb,	// (0x00058f62) bg_popup_sub_pane_cp22_ParamLimits

0x0670,	// (0x0004b7f7) input_focus_pane_cp08_ParamLimits

0x730d,	// (0x00052494) popup_vitu2_query_button_pane_ParamLimits

0x730d,	// (0x00052494) popup_vitu2_query_button_pane

0x0687,	// (0x0004b80e) popup_vitu2_query_input_button_pane

0xeeb6,	// (0x0005a03d) popup_vitu2_query_window_g1_ParamLimits

0x0691,	// (0x0004b818) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005aba3) popup_vitu2_query_window_g_ParamLimits

0xb130,	// (0x000562b7) bg_button_pane_cp026

0x7a36,	// (0x00052bbd) popup_vitu2_query_input_button_pane_g1

0xb130,	// (0x000562b7) bg_button_pane_cp025

0xa05b,	// (0x000551e2) popup_vitu2_query_button_pane_t1

0x4feb,	// (0x00050172) main_mp3_pane_t6

0x4ff9,	// (0x00050180) popup_slider_window_cp01

0x9d74,	// (0x00054efb) cam4_battery_pane

0x9dcd,	// (0x00054f54) cam4_battery_pane_cp02

0x9eb3,	// (0x0005503a) cam4_battery_pane_cp01

0x9eb3,	// (0x0005503a) cam4_battery_pane_cp03

0xe1e3,	// (0x0005936a) cam4_battery_pane_g1

0xa069,	// (0x000551f0) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005aca7) cam4_battery_pane_g

0xe0af,	// (0x00059236) popup_blid_sat_info2_window_t11

0xc81a,	// (0x000579a1) aid_size_touch_mv_arrow_left_ParamLimits

0xc843,	// (0x000579ca) aid_size_touch_mv_arrow_right_ParamLimits

0xc8a1,	// (0x00057a28) navi_pane_g1_ParamLimits

0xc8ad,	// (0x00057a34) navi_pane_g2_ParamLimits

0xc8db,	// (0x00057a62) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005a56c) navi_pane_g_ParamLimits

0x340d,	// (0x0004e594) navi_pane_mv_t1_ParamLimits

0x5c75,	// (0x00050dfc) grid_imed_effect_pane_ParamLimits

0x216a,	// (0x0004d2f1) aid_placing_vt_slider_lsc

0xc002,	// (0x00057189) aid_placing_vt_slider_prt

0xbdd4,	// (0x00056f5b) bg_tb_trans_pane_cp01_ParamLimits

0xe36f,	// (0x000594f6) popup_image_details_window_g1_ParamLimits

0xe382,	// (0x00059509) popup_image_details_window_g2_ParamLimits

0xe397,	// (0x0005951e) popup_image_details_window_g3_ParamLimits

0xe397,	// (0x0005951e) popup_image_details_window_g3

0xf718,	// (0x0005a89f) popup_image_details_window_g_ParamLimits

0xe3ab,	// (0x00059532) popup_image_details_window_t1_ParamLimits

0xe3bd,	// (0x00059544) popup_image_details_window_t2_ParamLimits

0xe3d6,	// (0x0005955d) popup_image_details_window_t3_ParamLimits

0xe3ea,	// (0x00059571) popup_image_details_window_t4_ParamLimits

0xe405,	// (0x0005958c) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0005a8a6) popup_image_details_window_t_ParamLimits

0x7637,	// (0x000527be) cl_header_name_pane_ParamLimits

0x7637,	// (0x000527be) cl_header_name_pane

0x7a3e,	// (0x00052bc5) cl_header_name_pane_t1_ParamLimits

0x7a3e,	// (0x00052bc5) cl_header_name_pane_t1

0x7a5f,	// (0x00052be6) cl_header_name_pane_t2_ParamLimits

0x7a5f,	// (0x00052be6) cl_header_name_pane_t2

0x7aa1,	// (0x00052c28) cl_header_name_pane_t3_ParamLimits

0x7aa1,	// (0x00052c28) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005acac) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005acac) cl_header_name_pane_t

0xc96a,	// (0x00057af1) navi_pane_mv_g2_ParamLimits

0xec04,	// (0x00059d8b) field_vitu2_entry_pane_g1_ParamLimits

0xec10,	// (0x00059d97) field_vitu2_entry_pane_g2_ParamLimits

0xec1c,	// (0x00059da3) field_vitu2_entry_pane_g3_ParamLimits

0xec1c,	// (0x00059da3) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005aaa2) field_vitu2_entry_pane_g_ParamLimits

0x9e45,	// (0x00054fcc) cell_vitu2_itu_pane_g1_ParamLimits

0x6993,	// (0x00051b1a) cell_vitu2_itu_pane_g2_ParamLimits

0x6993,	// (0x00051b1a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005aaae) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005aaae) cell_vitu2_itu_pane_g

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp05_ParamLimits

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp05

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp03

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp04

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp10_ParamLimits

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp10

0x07ae,	// (0x0004b935) bg_vkb2_func_pane_cp08

0x7599,	// (0x00052720) bg_vkb2_func_pane_cp06

0x75a7,	// (0x0005272e) bg_vkb2_func_pane_cp07

0x9f61,	// (0x000550e8) bg_vkb2_func_pane_cp11_ParamLimits

0x9f61,	// (0x000550e8) bg_vkb2_func_pane_cp11

0x9f76,	// (0x000550fd) bg_vkb2_func_pane_cp12_ParamLimits

0x9f76,	// (0x000550fd) bg_vkb2_func_pane_cp12

0xb130,	// (0x000562b7) bg_vkb2_func_pane_cp09

0xec3c,	// (0x00059dc3) bg_vkb2_func_pane_g1

0xc1c4,	// (0x0005734b) bg_vkb2_func_pane_g2

0xec44,	// (0x00059dcb) bg_vkb2_func_pane_g3

0xec4c,	// (0x00059dd3) bg_vkb2_func_pane_g4

0xee7b,	// (0x0005a002) bg_vkb2_func_pane_g5

0xec64,	// (0x00059deb) bg_vkb2_func_pane_g6

0xec6c,	// (0x00059df3) bg_vkb2_func_pane_g7

0xec5c,	// (0x00059de3) bg_vkb2_func_pane_g8

0xc1a4,	// (0x0005732b) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005acb3) bg_vkb2_func_pane_g

0x7962,	// (0x00052ae9) blid2_tripm_pane_g6_ParamLimits

0x7962,	// (0x00052ae9) blid2_tripm_pane_g6

0xead7,	// (0x00059c5e) mp4_progress_pane_g1

0x79db,	// (0x00052b62) blid2_tripm_values_pane_ParamLimits

0x79db,	// (0x00052b62) blid2_tripm_values_pane

0x7ad2,	// (0x00052c59) blid2_tripm_values_pane_t1

0x7ae0,	// (0x00052c67) blid2_tripm_values_pane_t2

0x7aee,	// (0x00052c75) blid2_tripm_values_pane_t3

0x7afc,	// (0x00052c83) blid2_tripm_values_pane_t4

0x7b0a,	// (0x00052c91) blid2_tripm_values_pane_t5

0x7b18,	// (0x00052c9f) blid2_tripm_values_pane_t6

0x7b26,	// (0x00052cad) blid2_tripm_values_pane_t7

0x7b34,	// (0x00052cbb) blid2_tripm_values_pane_t8

0x7b42,	// (0x00052cc9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005acc6) blid2_tripm_values_pane_t

0x21ac,	// (0x0004d333) call_video_pane_t1_ParamLimits

0x21ca,	// (0x0004d351) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005a3f5) call_video_pane_t_ParamLimits

0x0467,	// (0x0004b5ee) msg_header_pane_g1_ParamLimits

0xcb52,	// (0x00057cd9) msg_header_pane_g2_ParamLimits

0xcb52,	// (0x00057cd9) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005a60f) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005a60f) msg_header_pane_g

0xb86d,	// (0x000569f4) main_clock2_pane_ParamLimits

0x5973,	// (0x00050afa) grid_clock2_toolbar_pane_ParamLimits

0x5973,	// (0x00050afa) grid_clock2_toolbar_pane

0x5973,	// (0x00050afa) listscroll_clock2_pane_ParamLimits

0x5973,	// (0x00050afa) listscroll_clock2_pane

0x5a6a,	// (0x00050bf1) main_clock2_pane_t3_ParamLimits

0x5a6a,	// (0x00050bf1) main_clock2_pane_t3

0x5a8e,	// (0x00050c15) main_clock2_pane_t4_ParamLimits

0x5a8e,	// (0x00050c15) main_clock2_pane_t4

0xa073,	// (0x000551fa) cell_clock2_toolbar_pane

0xa07b,	// (0x00055202) cell_clock2_toolbar_pane_cp01

0xa07b,	// (0x00055202) cell_clock2_toolbar_pane_cp02

0xa083,	// (0x0005520a) cell_clock2_toolbar_pane_cp03

0xa08b,	// (0x00055212) list_clock2_pane

0xc790,	// (0x00057917) scroll_pane_cp10

0xa093,	// (0x0005521a) list_single_clock2_pane_ParamLimits

0xa093,	// (0x0005521a) list_single_clock2_pane

0xbf6b,	// (0x000570f2) list_highlight_pane_cp08

0xa0a0,	// (0x00055227) list_single_clock2_pane_t1

0xa0ae,	// (0x00055235) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005acd9) list_single_clock2_pane_t

0xb130,	// (0x000562b7) bg_button_pane_cp10

0xa0bc,	// (0x00055243) cell_clock2_toolbar_pane_g1

0x38e1,	// (0x0004ea68) aid_main_viewer_pane_g1_ParamLimits

0x38e1,	// (0x0004ea68) aid_main_viewer_pane_g1

0x38ef,	// (0x0004ea76) aid_main_viewer_pane_g2_ParamLimits

0x38ef,	// (0x0004ea76) aid_main_viewer_pane_g2

0x38fd,	// (0x0004ea84) aid_main_viewer_pane_g3_ParamLimits

0x38fd,	// (0x0004ea84) aid_main_viewer_pane_g3

0x390c,	// (0x0004ea93) aid_main_viewer_pane_g4_ParamLimits

0x390c,	// (0x0004ea93) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005a620) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005a620) aid_main_viewer_pane_g

0x4212,	// (0x0004f399) main_calc_pane_ParamLimits

0x4226,	// (0x0004f3ad) main_dialer2_pane_ParamLimits

0xb130,	// (0x000562b7) main_cam6_pane

0xb130,	// (0x000562b7) main_vid6_pane

0x597f,	// (0x00050b06) listscroll_gen_pane_cp06_ParamLimits

0x597f,	// (0x00050b06) listscroll_gen_pane_cp06

0x5ab1,	// (0x00050c38) main_clock2_pane_t5_ParamLimits

0x5ab1,	// (0x00050c38) main_clock2_pane_t5

0x5b0b,	// (0x00050c92) aid_call2_pane_cp10_ParamLimits

0x5b1d,	// (0x00050ca4) aid_call_pane_cp10_ParamLimits

0xc80e,	// (0x00057995) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc80e,	// (0x00057995) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b2f,	// (0x00050cb6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b2f,	// (0x00050cb6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc80e,	// (0x00057995) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005a95b) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b41,	// (0x00050cc8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61a9,	// (0x00051330) cell_dialer2_keypad_pane_g2_ParamLimits

0x61a9,	// (0x00051330) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005aa41) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005aa41) cell_dialer2_keypad_pane_g

0x61c5,	// (0x0005134c) cell_dialer2_keypad_pane_t1

0x6d1c,	// (0x00051ea3) main_cset_text2_pane_ParamLimits

0x6d1c,	// (0x00051ea3) main_cset_text2_pane

0xf0be,	// (0x0005a245) area_vitu2_query_pane_g1_ParamLimits

0x0775,	// (0x0004b8fc) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005abf6) area_vitu2_query_pane_g_ParamLimits

0x7575,	// (0x000526fc) area_vitu2_query_pane_t7_ParamLimits

0x7575,	// (0x000526fc) area_vitu2_query_pane_t7

0x7599,	// (0x00052720) bg_button_pane_cp018_ParamLimits

0x75a7,	// (0x0005272e) bg_button_pane_cp021_ParamLimits

0x07ae,	// (0x0004b935) bg_button_pane_cp022_ParamLimits

0x07ae,	// (0x0004b935) bg_vkb2_func_pane_cp08_ParamLimits

0x7599,	// (0x00052720) bg_vkb2_func_pane_cp06_ParamLimits

0x75a7,	// (0x0005272e) bg_vkb2_func_pane_cp07_ParamLimits

0x07bd,	// (0x0004b944) input_focus_pane_cp09_ParamLimits

0xa0c4,	// (0x0005524b) cam6_autofocus_pane_ParamLimits

0xa0c4,	// (0x0005524b) cam6_autofocus_pane

0x7b50,	// (0x00052cd7) cam6_image_uncrop_pane_ParamLimits

0x7b50,	// (0x00052cd7) cam6_image_uncrop_pane

0x7b5f,	// (0x00052ce6) cam6_indi_pane_ParamLimits

0x7b5f,	// (0x00052ce6) cam6_indi_pane

0x7b75,	// (0x00052cfc) cam6_mode_pane_ParamLimits

0x7b75,	// (0x00052cfc) cam6_mode_pane

0x7b87,	// (0x00052d0e) cam6_timer_pane_ParamLimits

0x7b87,	// (0x00052d0e) cam6_timer_pane

0x7b93,	// (0x00052d1a) cam6_zoom_pane_ParamLimits

0x7b93,	// (0x00052d1a) cam6_zoom_pane

0x7b9f,	// (0x00052d26) cam6_mode_pane_g1_ParamLimits

0x7b9f,	// (0x00052d26) cam6_mode_pane_g1

0x7baf,	// (0x00052d36) cam6_mode_pane_g2_ParamLimits

0x7baf,	// (0x00052d36) cam6_mode_pane_g2

0x7bbf,	// (0x00052d46) cam6_mode_pane_g3_ParamLimits

0x7bbf,	// (0x00052d46) cam6_mode_pane_g3

0x7bcf,	// (0x00052d56) cam6_mode_pane_g4_ParamLimits

0x7bcf,	// (0x00052d56) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005acde) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005acde) cam6_mode_pane_g

0xf084,	// (0x0005a20b) bg_tb_trans_pane_cp08_ParamLimits

0xf084,	// (0x0005a20b) bg_tb_trans_pane_cp08

0xa0d2,	// (0x00055259) cam6_battery_pane_ParamLimits

0xa0d2,	// (0x00055259) cam6_battery_pane

0xa0e8,	// (0x0005526f) cam6_indi_pane_g1_ParamLimits

0xa0e8,	// (0x0005526f) cam6_indi_pane_g1

0xa0fa,	// (0x00055281) cam6_indi_pane_g2_ParamLimits

0xa0fa,	// (0x00055281) cam6_indi_pane_g2

0xa10c,	// (0x00055293) cam6_indi_pane_g3_ParamLimits

0xa10c,	// (0x00055293) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005ace7) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005ace7) cam6_indi_pane_g

0xa11e,	// (0x000552a5) cam6_indi_pane_t1_ParamLimits

0xa11e,	// (0x000552a5) cam6_indi_pane_t1

0x7bdf,	// (0x00052d66) cam6_autofocus_pane_g1

0x7be7,	// (0x00052d6e) cam6_autofocus_pane_g2

0x7bef,	// (0x00052d76) cam6_autofocus_pane_g3

0x7bf7,	// (0x00052d7e) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005acee) cam6_autofocus_pane_g

0xa144,	// (0x000552cb) cam6_timer_pane_g1

0xa14c,	// (0x000552d3) cam6_timer_pane_t1

0xa15a,	// (0x000552e1) cam6_zoom_cont_pane

0xa162,	// (0x000552e9) cam6_zoom_pane_g1

0xa16a,	// (0x000552f1) cam6_zoom_pane_g2

0x7bff,	// (0x00052d86) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005acf7) cam6_zoom_pane_g

0xe1e3,	// (0x0005936a) cam6_battery_pane_g1

0xe1e3,	// (0x0005936a) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0005a863) cam6_battery_pane_g

0xa172,	// (0x000552f9) cam6_zoom_cont_pane_g1

0xa17b,	// (0x00055302) cam6_zoom_cont_pane_g2

0xa184,	// (0x0005530b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005acfe) cam6_zoom_cont_pane_g

0x7c1c,	// (0x00052da3) cam6_mode_pane_cp_ParamLimits

0x7c1c,	// (0x00052da3) cam6_mode_pane_cp

0x7b93,	// (0x00052d1a) cam6_zoom_pane_cp_ParamLimits

0x7b93,	// (0x00052d1a) cam6_zoom_pane_cp

0x7c2e,	// (0x00052db5) vid6_image_uncrop_cif_pane_ParamLimits

0x7c2e,	// (0x00052db5) vid6_image_uncrop_cif_pane

0x7c3e,	// (0x00052dc5) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c3e,	// (0x00052dc5) vid6_image_uncrop_nhd_pane

0x7b50,	// (0x00052cd7) vid6_image_uncrop_vga_pane_ParamLimits

0x7b50,	// (0x00052cd7) vid6_image_uncrop_vga_pane

0x7c4d,	// (0x00052dd4) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c4d,	// (0x00052dd4) vid6_image_uncrop_wvga_pane

0x7c5c,	// (0x00052de3) vid6_indi_pane_ParamLimits

0x7c5c,	// (0x00052de3) vid6_indi_pane

0xf084,	// (0x0005a20b) bg_tb_trans_pane_cp09_ParamLimits

0xf084,	// (0x0005a20b) bg_tb_trans_pane_cp09

0xa19c,	// (0x00055323) cam6_battery_pane_cp_ParamLimits

0xa19c,	// (0x00055323) cam6_battery_pane_cp

0xa1a8,	// (0x0005532f) vid6_indi_pane_g1_ParamLimits

0xa1a8,	// (0x0005532f) vid6_indi_pane_g1

0xa1ba,	// (0x00055341) vid6_indi_pane_g2_ParamLimits

0xa1ba,	// (0x00055341) vid6_indi_pane_g2

0xa1cc,	// (0x00055353) vid6_indi_pane_g3_ParamLimits

0xa1cc,	// (0x00055353) vid6_indi_pane_g3

0xa1e1,	// (0x00055368) vid6_indi_pane_g4_ParamLimits

0xa1e1,	// (0x00055368) vid6_indi_pane_g4

0xa47d,	// (0x00055604) vid6_indi_pane_g5_ParamLimits

0xa47d,	// (0x00055604) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005ad05) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005ad05) vid6_indi_pane_g

0xa497,	// (0x0005561e) vid6_indi_pane_t1_ParamLimits

0xa497,	// (0x0005561e) vid6_indi_pane_t1

0xa4ad,	// (0x00055634) vid6_indi_pane_t2_ParamLimits

0xa4ad,	// (0x00055634) vid6_indi_pane_t2

0xa4d5,	// (0x0005565c) vid6_indi_pane_t3_ParamLimits

0xa4d5,	// (0x0005565c) vid6_indi_pane_t3

0xa4fd,	// (0x00055684) vid6_indi_pane_t4_ParamLimits

0xa4fd,	// (0x00055684) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005ad10) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005ad10) vid6_indi_pane_t

0xa521,	// (0x000556a8) wait_bar_pane_cp08

0x7c74,	// (0x00052dfb) main_cset_text2_pane_t1_ParamLimits

0x7c74,	// (0x00052dfb) main_cset_text2_pane_t1

0x7c07,	// (0x00052d8e) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c07,	// (0x00052d8e) listscroll_gen_pane_cp06_t1

0xb130,	// (0x000562b7) main_cam6_set_pane

0xe44f,	// (0x000595d6) bg_tb_trans_pane_cp06_ParamLimits

0x9d7c,	// (0x00054f03) cam4_indicators_pane_g1_ParamLimits

0x9d8d,	// (0x00054f14) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005aa7e) cam4_indicators_pane_g_ParamLimits

0x9dab,	// (0x00054f32) cam4_indicators_pane_t1_ParamLimits

0xbdd4,	// (0x00056f5b) bg_tb_trans_pane_cp07_ParamLimits

0x9dd7,	// (0x00054f5e) vid4_indicators_pane_g1_ParamLimits

0x9deb,	// (0x00054f72) vid4_indicators_pane_g2_ParamLimits

0x9dff,	// (0x00054f86) vid4_indicators_pane_g3_ParamLimits

0x9e10,	// (0x00054f97) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005aa90) vid4_indicators_pane_g_ParamLimits

0x9e2e,	// (0x00054fb5) vid4_indicators_pane_t1_ParamLimits

0x9ebb,	// (0x00055042) vid4_progress_pane_g1_ParamLimits

0x9ecb,	// (0x00055052) vid4_progress_pane_g2_ParamLimits

0x7730,	// (0x000528b7) vid4_progress_pane_g3_ParamLimits

0x9edb,	// (0x00055062) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005ac41) vid4_progress_pane_g_ParamLimits

0x7742,	// (0x000528c9) vid4_progress_pane_t1_ParamLimits

0x9ef3,	// (0x0005507a) vid4_progress_pane_t2_ParamLimits

0x9f08,	// (0x0005508f) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005ac4c) vid4_progress_pane_t_ParamLimits

0x775a,	// (0x000528e1) wait_bar_pane_cp07_ParamLimits

0x7c91,	// (0x00052e18) main_cam6_set_pane_g2_ParamLimits

0x7c91,	// (0x00052e18) main_cam6_set_pane_g2

0x7cb5,	// (0x00052e3c) main_cset6_listscroll_pane_ParamLimits

0x7cb5,	// (0x00052e3c) main_cset6_listscroll_pane

0x7cd5,	// (0x00052e5c) main_cset6_slider_pane_ParamLimits

0x7cd5,	// (0x00052e5c) main_cset6_slider_pane

0x7ceb,	// (0x00052e72) main_cset6_text2_pane_ParamLimits

0x7ceb,	// (0x00052e72) main_cset6_text2_pane

0xa530,	// (0x000556b7) main_cset6_text_pane

0xa538,	// (0x000556bf) main_cset_list_pane_copy1_ParamLimits

0xa538,	// (0x000556bf) main_cset_list_pane_copy1

0xa548,	// (0x000556cf) scroll_pane_cp028_copy1

0x7cf9,	// (0x00052e80) cset_list_set_pane_copy1

0x7d0a,	// (0x00052e91) aid_position_infowindow_above_copy1

0x7d12,	// (0x00052e99) aid_position_infowindow_below_copy1

0x07e0,	// (0x0004b967) cset_list_set_pane_g1_copy1

0x07e8,	// (0x0004b96f) cset_list_set_pane_g3_copy1_ParamLimits

0x07e8,	// (0x0004b96f) cset_list_set_pane_g3_copy1

0x07f7,	// (0x0004b97e) cset_list_set_pane_t1_copy1_ParamLimits

0x07f7,	// (0x0004b97e) cset_list_set_pane_t1_copy1

0xbdd4,	// (0x00056f5b) list_highlight_pane_cp021_copy1_ParamLimits

0xbdd4,	// (0x00056f5b) list_highlight_pane_cp021_copy1

0xa551,	// (0x000556d8) cset6_slider_pane_ParamLimits

0xa551,	// (0x000556d8) cset6_slider_pane

0xa57d,	// (0x00055704) main_cset6_slider_pane_g1_ParamLimits

0xa57d,	// (0x00055704) main_cset6_slider_pane_g1

0x7d1a,	// (0x00052ea1) main_cset6_slider_pane_g2_ParamLimits

0x7d1a,	// (0x00052ea1) main_cset6_slider_pane_g2

0xa5a5,	// (0x0005572c) main_cset6_slider_pane_g3_ParamLimits

0xa5a5,	// (0x0005572c) main_cset6_slider_pane_g3

0x7d42,	// (0x00052ec9) main_cset6_slider_pane_g4_ParamLimits

0x7d42,	// (0x00052ec9) main_cset6_slider_pane_g4

0x7d4e,	// (0x00052ed5) main_cset6_slider_pane_g5_ParamLimits

0x7d4e,	// (0x00052ed5) main_cset6_slider_pane_g5

0xed6b,	// (0x00059ef2) main_cset6_slider_pane_g7_ParamLimits

0xed6b,	// (0x00059ef2) main_cset6_slider_pane_g7

0xed77,	// (0x00059efe) main_cset6_slider_pane_g8_ParamLimits

0xed77,	// (0x00059efe) main_cset6_slider_pane_g8

0x6dc9,	// (0x00051f50) main_cset6_slider_pane_g9_ParamLimits

0x6dc9,	// (0x00051f50) main_cset6_slider_pane_g9

0x6dd5,	// (0x00051f5c) main_cset6_slider_pane_g10_ParamLimits

0x6dd5,	// (0x00051f5c) main_cset6_slider_pane_g10

0x6de1,	// (0x00051f68) main_cset6_slider_pane_g11_ParamLimits

0x6de1,	// (0x00051f68) main_cset6_slider_pane_g11

0x6ded,	// (0x00051f74) main_cset6_slider_pane_g12_ParamLimits

0x6ded,	// (0x00051f74) main_cset6_slider_pane_g12

0x6df9,	// (0x00051f80) main_cset6_slider_pane_g13_ParamLimits

0x6df9,	// (0x00051f80) main_cset6_slider_pane_g13

0x6e05,	// (0x00051f8c) main_cset6_slider_pane_g14_ParamLimits

0x6e05,	// (0x00051f8c) main_cset6_slider_pane_g14

0x7d5a,	// (0x00052ee1) main_cset6_slider_pane_g15_ParamLimits

0x7d5a,	// (0x00052ee1) main_cset6_slider_pane_g15

0x6e29,	// (0x00051fb0) main_cset6_slider_pane_g16_ParamLimits

0x6e29,	// (0x00051fb0) main_cset6_slider_pane_g16

0x6e35,	// (0x00051fbc) main_cset6_slider_pane_g17_ParamLimits

0x6e35,	// (0x00051fbc) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005ad19) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005ad19) main_cset6_slider_pane_g

0xa5b1,	// (0x00055738) main_cset6_slider_pane_t1_ParamLimits

0xa5b1,	// (0x00055738) main_cset6_slider_pane_t1

0x7d8a,	// (0x00052f11) main_cset6_slider_pane_t2_ParamLimits

0x7d8a,	// (0x00052f11) main_cset6_slider_pane_t2

0x7db5,	// (0x00052f3c) main_cset6_slider_pane_t3_ParamLimits

0x7db5,	// (0x00052f3c) main_cset6_slider_pane_t3

0x7de0,	// (0x00052f67) main_cset6_slider_pane_t4_ParamLimits

0x7de0,	// (0x00052f67) main_cset6_slider_pane_t4

0x7e0b,	// (0x00052f92) main_cset6_slider_pane_t5_ParamLimits

0x7e0b,	// (0x00052f92) main_cset6_slider_pane_t5

0xa5f2,	// (0x00055779) main_cset6_slider_pane_t7_ParamLimits

0xa5f2,	// (0x00055779) main_cset6_slider_pane_t7

0x7e36,	// (0x00052fbd) main_cset6_slider_pane_t8_ParamLimits

0x7e36,	// (0x00052fbd) main_cset6_slider_pane_t8

0x7e5a,	// (0x00052fe1) main_cset6_slider_pane_t9_ParamLimits

0x7e5a,	// (0x00052fe1) main_cset6_slider_pane_t9

0x7e7e,	// (0x00053005) main_cset6_slider_pane_t10_ParamLimits

0x7e7e,	// (0x00053005) main_cset6_slider_pane_t10

0x7ea2,	// (0x00053029) main_cset6_slider_pane_t11_ParamLimits

0x7ea2,	// (0x00053029) main_cset6_slider_pane_t11

0xa628,	// (0x000557af) main_cset6_slider_pane_t14_ParamLimits

0xa628,	// (0x000557af) main_cset6_slider_pane_t14

0xa661,	// (0x000557e8) main_cset6_slider_pane_t15_ParamLimits

0xa661,	// (0x000557e8) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005ad3e) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005ad3e) main_cset6_slider_pane_t

0xee2f,	// (0x00059fb6) cset_slider_pane_g1_copy1

0xee38,	// (0x00059fbf) cset_slider_pane_g2_copy1

0xee41,	// (0x00059fc8) cset_slider_pane_g3_copy1

0xb130,	// (0x000562b7) bg_popup_sub_pane_cp011_copy1

0xa69a,	// (0x00055821) main_cset_text_pane_g1_copy1

0xeeca,	// (0x0005a051) main_cset_text_pane_t1_copy1

0xeed8,	// (0x0005a05f) main_cset_text_pane_t2_copy1

0xeee6,	// (0x0005a06d) main_cset_text_pane_t3_copy1

0xeef4,	// (0x0005a07b) main_cset_text_pane_t4_copy1

0xef02,	// (0x0005a089) main_cset_text_pane_t5_copy1

0xa6a2,	// (0x00055829) main_cset_text_pane_t6_copy1

0xa6b0,	// (0x00055837) main_cset_text_pane_t7_copy1

0x7c74,	// (0x00052dfb) main_cset_text2_pane_t1_copy1

0xbdd4,	// (0x00056f5b) main_ncimui_pane

0x4470,	// (0x0004f5f7) popup_query_ncimui_window_ParamLimits

0x4470,	// (0x0004f5f7) popup_query_ncimui_window

0x518f,	// (0x00050316) field_cale_ev2_pane_g4_ParamLimits

0x518f,	// (0x00050316) field_cale_ev2_pane_g4

0x6089,	// (0x00051210) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6089,	// (0x00051210) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005aa1c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005aa1c) cell_video_dialer_keypad_pane_g

0x60a1,	// (0x00051228) cell_video_dialer_keypad_pane_t1

0xb130,	// (0x000562b7) bg_popup_window_pane_cp012

0xc65d,	// (0x000577e4) heading_pane_cp06

0xa6dc,	// (0x00055863) ncim_query_content_pane

0xb130,	// (0x000562b7) bg_popup_heading_pane_cp01

0xa6e4,	// (0x0005586b) ncim_heading_pane_t1

0xa6f2,	// (0x00055879) ncim_indicator_popup_pane

0xa704,	// (0x0005588b) ncim_query_button_pane

0xa718,	// (0x0005589f) ncim_query_content_pane_t1

0xa72a,	// (0x000558b1) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005ad82) ncim_query_content_pane_t

0xa764,	// (0x000558eb) ncim_query_list_pane

0xa776,	// (0x000558fd) ncim_query_popup_pane

0xa6f2,	// (0x00055879) ncim_indicator_popup_pane_ParamLimits

0x7fef,	// (0x00053176) ncim_query_content_pane_g1_ParamLimits

0x7fef,	// (0x00053176) ncim_query_content_pane_g1

0xa718,	// (0x0005589f) ncim_query_content_pane_t1_ParamLimits

0xa72a,	// (0x000558b1) ncim_query_content_pane_t2_ParamLimits

0x7ffb,	// (0x00053182) ncim_query_content_pane_t3_ParamLimits

0x7ffb,	// (0x00053182) ncim_query_content_pane_t3

0x8023,	// (0x000531aa) ncim_query_content_pane_t4_ParamLimits

0x8023,	// (0x000531aa) ncim_query_content_pane_t4

0x804b,	// (0x000531d2) ncim_query_content_pane_t5_ParamLimits

0x804b,	// (0x000531d2) ncim_query_content_pane_t5

0xa73c,	// (0x000558c3) ncim_query_content_pane_t6_ParamLimits

0xa73c,	// (0x000558c3) ncim_query_content_pane_t6

0xfbfb,	// (0x0005ad82) ncim_query_content_pane_t_ParamLimits

0xa764,	// (0x000558eb) ncim_query_list_pane_ParamLimits

0xa776,	// (0x000558fd) ncim_query_popup_pane_ParamLimits

0xa78a,	// (0x00055911) wait_bar_pane_cp04

0xb130,	// (0x000562b7) input_focus_pane_cp011

0xa792,	// (0x00055919) ncim_query_popup_pane_t1

0xa7a0,	// (0x00055927) ncim_list_query_list_pane_ParamLimits

0xa7a0,	// (0x00055927) ncim_list_query_list_pane

0xb130,	// (0x000562b7) bg_button_pane_cp027

0xa7ad,	// (0x00055934) ncim_query_button_pane_g1

0xb130,	// (0x000562b7) list_highlight_pane_cp012

0xa7b7,	// (0x0005593e) ncim_list_query_list_pane_g1

0xa7bf,	// (0x00055946) ncim_list_query_list_pane_t1

0x9d9c,	// (0x00054f23) cam4_indicators_pane_g3_ParamLimits

0x9d9c,	// (0x00054f23) cam4_indicators_pane_g3

0x9e1c,	// (0x00054fa3) vid4_indicators_pane_g5_ParamLimits

0x9e1c,	// (0x00054fa3) vid4_indicators_pane_g5

0x9ee7,	// (0x0005506e) vid4_progress_pane_g5_ParamLimits

0x9ee7,	// (0x0005506e) vid4_progress_pane_g5

0x7eda,	// (0x00053061) main_ncimui_pane_g1

0x7f43,	// (0x000530ca) ncimui_group_query_pane_ParamLimits

0x7f43,	// (0x000530ca) ncimui_group_query_pane

0x7f8b,	// (0x00053112) ncimui_list_pane_ParamLimits

0x7f8b,	// (0x00053112) ncimui_list_pane

0x7fb2,	// (0x00053139) ncimui_text_pane_ParamLimits

0x7fb2,	// (0x00053139) ncimui_text_pane

0x8073,	// (0x000531fa) ncimui_text_pane_t1_ParamLimits

0x8073,	// (0x000531fa) ncimui_text_pane_t1

0xa7cd,	// (0x00055954) ncimui_list_single_graphic_pane_ParamLimits

0xa7cd,	// (0x00055954) ncimui_list_single_graphic_pane

0x8091,	// (0x00053218) ncimui_query_pane_ParamLimits

0x8091,	// (0x00053218) ncimui_query_pane

0xb130,	// (0x000562b7) list_highlight_pane_cp013

0xa7dd,	// (0x00055964) ncim_list_query_list_pane_t1_copy1

0xa7b7,	// (0x0005593e) ncim_list_single_graphic_pane_g1

0x80a4,	// (0x0005322b) ncim_query_button_pane_cp01

0x80b0,	// (0x00053237) ncim_query_entry_pane_ParamLimits

0x80b0,	// (0x00053237) ncim_query_entry_pane

0x80c3,	// (0x0005324a) ncimui_query_pane_g1

0x80cf,	// (0x00053256) ncimui_query_pane_t1_ParamLimits

0x80cf,	// (0x00053256) ncimui_query_pane_t1

0xbdd4,	// (0x00056f5b) input_focus_pane_cp012

0xa7eb,	// (0x00055972) ncim_query_entry_pane_t1

0xb86d,	// (0x000569f4) main_im_pane_ParamLimits

0xbdd4,	// (0x00056f5b) main_mobtv_pane_ParamLimits

0xbdd4,	// (0x00056f5b) main_mobtv_pane

0x7d72,	// (0x00052ef9) main_cset6_slider_pane_g18_ParamLimits

0x7d72,	// (0x00052ef9) main_cset6_slider_pane_g18

0x7d7e,	// (0x00052f05) main_cset6_slider_pane_g19_ParamLimits

0x7d7e,	// (0x00052f05) main_cset6_slider_pane_g19

0xa1f6,	// (0x0005537d) bg_main_mobtv_pane_ParamLimits

0xa1f6,	// (0x0005537d) bg_main_mobtv_pane

0x80e8,	// (0x0005326f) main_mobtv_info_pane

0x80f1,	// (0x00053278) main_mobtv_loading_pane_ParamLimits

0x80f1,	// (0x00053278) main_mobtv_loading_pane

0xa7fd,	// (0x00055984) main_mobtv_pg_channel_list_pane

0xa807,	// (0x0005598e) main_mobtv_pg_hdr_pane

0x80fe,	// (0x00053285) main_mobtv_programe_curr_pane_ParamLimits

0x80fe,	// (0x00053285) main_mobtv_programe_curr_pane

0x810b,	// (0x00053292) main_mobtv_programe_next_pane_ParamLimits

0x810b,	// (0x00053292) main_mobtv_programe_next_pane

0xa810,	// (0x00055997) popup_mobtv_noti_window

0xe1e3,	// (0x0005936a) main_tv_pg_hdr_pane_g1

0xa818,	// (0x0005599f) main_tv_pg_hdr_pane_g2

0xa820,	// (0x000559a7) main_tv_pg_hdr_pane_g3

0xa828,	// (0x000559af) main_tv_pg_hdr_pane_g4

0xa830,	// (0x000559b7) main_tv_pg_hdr_pane_g5

0xa83a,	// (0x000559c1) main_tv_pg_hdr_pane_g6

0xa844,	// (0x000559cb) main_tv_pg_hdr_pane_g7

0xa84e,	// (0x000559d5) main_tv_pg_hdr_pane_g8

0xa858,	// (0x000559df) main_tv_pg_hdr_pane_g9

0xa862,	// (0x000559e9) main_tv_pg_hdr_pane_g10

0xa86c,	// (0x000559f3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005ad8f) main_tv_pg_hdr_pane_g

0xa876,	// (0x000559fd) main_tv_pg_hdr_pane_t1

0xa884,	// (0x00055a0b) main_tv_pg_hdr_pane_t2

0xa892,	// (0x00055a19) main_tv_pg_hdr_pane_t3

0xa8a2,	// (0x00055a29) main_tv_pg_hdr_pane_t4

0xa8b2,	// (0x00055a39) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005ada6) main_tv_pg_hdr_pane_t

0xa8c2,	// (0x00055a49) single_mobtv_pg_channel_pane_ParamLimits

0xa8c2,	// (0x00055a49) single_mobtv_pg_channel_pane

0xa8d4,	// (0x00055a5b) single_mobtv_pg_channel_table_pane

0xa8dd,	// (0x00055a64) single_mobtv_pg_channel_thumb_pane

0xa8e6,	// (0x00055a6d) single_tv_pg_channel_pane_g1

0xa8ef,	// (0x00055a76) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005adb1) single_tv_pg_channel_pane_g

0xe44f,	// (0x000595d6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe44f,	// (0x000595d6) bg_single_mobtv_pg_channel_thumb_pane

0xa8f8,	// (0x00055a7f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xa8f8,	// (0x00055a7f) single_mobtv_pg_channel_thumb_pane_g1

0xa906,	// (0x00055a8d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xa906,	// (0x00055a8d) single_mobtv_pg_channel_thumb_pane_g2

0xa912,	// (0x00055a99) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xa912,	// (0x00055a99) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005adb6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005adb6) single_mobtv_pg_channel_thumb_pane_g

0xa91e,	// (0x00055aa5) single_mobtv_pg_channel_thumb_pane_t1

0xa92c,	// (0x00055ab3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005adbd) single_mobtv_pg_channel_thumb_pane_t

0xe1e3,	// (0x0005936a) bg_single_mobtv_pg_channel_table_pane_g1

0xe1e3,	// (0x0005936a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0005a863) bg_single_mobtv_pg_channel_table_pane_g

0xa93a,	// (0x00055ac1) single_mobtv_pg_channel_table_pane_t1

0xa948,	// (0x00055acf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005adc2) single_mobtv_pg_channel_table_pane_t

0x8120,	// (0x000532a7) main_mobtv_info_pane_g1_ParamLimits

0x8120,	// (0x000532a7) main_mobtv_info_pane_g1

0x813e,	// (0x000532c5) main_mobtv_info_pane_t1_ParamLimits

0x813e,	// (0x000532c5) main_mobtv_info_pane_t1

0x81b6,	// (0x0005333d) main_mobtv_info_pane_t2_ParamLimits

0x81b6,	// (0x0005333d) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005adcc) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005adcc) main_mobtv_info_pane_t

0x8245,	// (0x000533cc) wait_bar_pane_cp05

0x8257,	// (0x000533de) main_mobtv_loading_pane_g1_ParamLimits

0x8257,	// (0x000533de) main_mobtv_loading_pane_g1

0x826a,	// (0x000533f1) main_mobtv_loading_pane_g2_ParamLimits

0x826a,	// (0x000533f1) main_mobtv_loading_pane_g2

0x8276,	// (0x000533fd) main_mobtv_loading_pane_g3_ParamLimits

0x8276,	// (0x000533fd) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005add3) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005add3) main_mobtv_loading_pane_g

0xa956,	// (0x00055add) main_mobtv_loading_pane_t1_ParamLimits

0xa956,	// (0x00055add) main_mobtv_loading_pane_t1

0xa96e,	// (0x00055af5) main_mobtv_loading_pane_t2_ParamLimits

0xa96e,	// (0x00055af5) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005adda) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005adda) main_mobtv_loading_pane_t

0x8289,	// (0x00053410) wait_bar_pane_cp06_ParamLimits

0x8289,	// (0x00053410) wait_bar_pane_cp06

0xa992,	// (0x00055b19) main_mobtv_programe_curr_pane_t1

0xa9a0,	// (0x00055b27) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005addf) main_mobtv_programe_curr_pane_t

0xa9ae,	// (0x00055b35) main_mobtv_programe_next_pane_t1

0xa9bc,	// (0x00055b43) main_mobtv_programe_next_pane_t2

0xa9ca,	// (0x00055b51) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005ade4) main_mobtv_programe_next_pane_t

0xb130,	// (0x000562b7) bg_popup_mobtv_noti_window_pane

0xa9d8,	// (0x00055b5f) popup_mobtv_noti_window_g1

0xa9e0,	// (0x00055b67) popup_mobtv_noti_window_t1

0xa9ee,	// (0x00055b75) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005adeb) popup_mobtv_noti_window_t

0xe1e3,	// (0x0005936a) bg_popup_mobtv_noti_window_pane_g1

0xb130,	// (0x000562b7) sc_clock_pane

0xb130,	// (0x000562b7) main_fs_bigclock_pane

0x79c5,	// (0x00052b4c) blid2_tripm_pane_t4_ParamLimits

0x79c5,	// (0x00052b4c) blid2_tripm_pane_t4

0x8298,	// (0x0005341f) sc_clock_pane_g1_ParamLimits

0x8298,	// (0x0005341f) sc_clock_pane_g1

0x82aa,	// (0x00053431) sc_clock_pane_t1_ParamLimits

0x82aa,	// (0x00053431) sc_clock_pane_t1

0x82cc,	// (0x00053453) sc_clock_pane_t2_ParamLimits

0x82cc,	// (0x00053453) sc_clock_pane_t2

0x82e4,	// (0x0005346b) sc_clock_pane_t3_ParamLimits

0x82e4,	// (0x0005346b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005adf0) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005adf0) sc_clock_pane_t

0x8d8c,	// (0x00053f13) main_fs_bigclock_indicator_pane_ParamLimits

0x8d8c,	// (0x00053f13) main_fs_bigclock_indicator_pane

0x838a,	// (0x00053511) main_fs_bigclock_pane_g1_ParamLimits

0x838a,	// (0x00053511) main_fs_bigclock_pane_g1

0x8d98,	// (0x00053f1f) main_fs_bigclock_pane_t1_ParamLimits

0x8d98,	// (0x00053f1f) main_fs_bigclock_pane_t1

0x8daa,	// (0x00053f31) main_fs_bigclock_pane_t2_ParamLimits

0x8daa,	// (0x00053f31) main_fs_bigclock_pane_t2

0x8dbe,	// (0x00053f45) main_fs_bigclock_pane_t3_ParamLimits

0x8dbe,	// (0x00053f45) main_fs_bigclock_pane_t3

0x0002,

0xfe5a,	// (0x0005afe1) main_fs_bigclock_pane_t_ParamLimits

0xfe5a,	// (0x0005afe1) main_fs_bigclock_pane_t

0xb9c0,	// (0x00056b47) main_fs_bigclock_indicator_pane_g1

0xa70c,	// (0x00055893) ncim_query_content_pane_g2_ParamLimits

0xa70c,	// (0x00055893) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005ad7d) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005ad7d) ncim_query_content_pane_g

0x82fd,	// (0x00053484) sc_clock_pane_t4_ParamLimits

0x82fd,	// (0x00053484) sc_clock_pane_t4

0xbdd4,	// (0x00056f5b) main_radioblah_pane

0x9d0e,	// (0x00054e95) cell_call4_button_pane_t1_copy1_ParamLimits

0x9d0e,	// (0x00054e95) cell_call4_button_pane_t1_copy1

0x7ef2,	// (0x00053079) main_ncimui_pane_t1_ParamLimits

0x7ef2,	// (0x00053079) main_ncimui_pane_t1

0x7f0c,	// (0x00053093) main_ncimui_pane_t2_ParamLimits

0x7f0c,	// (0x00053093) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005ad76) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005ad76) main_ncimui_pane_t

0xab33,	// (0x00055cba) main_radioblah_anim_pane_ParamLimits

0xab33,	// (0x00055cba) main_radioblah_anim_pane

0xab44,	// (0x00055ccb) main_radioblah_info_pane_ParamLimits

0xab44,	// (0x00055ccb) main_radioblah_info_pane

0xab58,	// (0x00055cdf) main_radioblah_pane_t1_ParamLimits

0xab58,	// (0x00055cdf) main_radioblah_pane_t1

0xab74,	// (0x00055cfb) main_radioblah_pane_t2_ParamLimits

0xab74,	// (0x00055cfb) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005ae11) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005ae11) main_radioblah_pane_t

0x83e9,	// (0x00053570) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83e9,	// (0x00053570) main_radioblah_rocker_ctrl_pane

0xabbc,	// (0x00055d43) main_radioblah_info_pane_t1_ParamLimits

0xabbc,	// (0x00055d43) main_radioblah_info_pane_t1

0x8441,	// (0x000535c8) main_radioblah_info_pane_t2_ParamLimits

0x8441,	// (0x000535c8) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005ae1a) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005ae1a) main_radioblah_info_pane_t

0xe1e3,	// (0x0005936a) main_radioblah_rocker_ctrl_pane_g1

0x84f1,	// (0x00053678) main_radioblah_rocker_ctrl_pane_g2

0x84f9,	// (0x00053680) main_radioblah_rocker_ctrl_pane_g3

0x8501,	// (0x00053688) main_radioblah_rocker_ctrl_pane_g4

0x8509,	// (0x00053690) main_radioblah_rocker_ctrl_pane_g5

0x8511,	// (0x00053698) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005ae23) main_radioblah_rocker_ctrl_pane_g

0x7c74,	// (0x00052dfb) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d6c,	// (0x00054ef3) cam4_image_uncrop_qvga_pane

0x9dc5,	// (0x00054f4c) vid4_image_uncrop_qcif_pane

0xa0c4,	// (0x0005524b) cam6_image_uncrop_qvga_pane_ParamLimits

0xa0c4,	// (0x0005524b) cam6_image_uncrop_qvga_pane

0xa18c,	// (0x00055313) vid6_image_uncrop_qcif_pane_ParamLimits

0xa18c,	// (0x00055313) vid6_image_uncrop_qcif_pane

0xb130,	// (0x000562b7) bg_popup_preview_window_pane_cp03

0xa6be,	// (0x00055845) list_cset_text2_pane

0xa6c6,	// (0x0005584d) main_cset6_text2_pane_g1

0xa6ce,	// (0x00055855) main_cset6_text2_pane_t1

0x8519,	// (0x000536a0) list_cset_text2_pane_t1_ParamLimits

0x8519,	// (0x000536a0) list_cset_text2_pane_t1

0xbdd4,	// (0x00056f5b) main_radioblah_pane_ParamLimits

0x8231,	// (0x000533b8) main_mobtv_info_pane_t3_ParamLimits

0x8231,	// (0x000533b8) main_mobtv_info_pane_t3

0x83d7,	// (0x0005355e) main_radioblah_pane_g1

0x8411,	// (0x00053598) main_radioblah_info_pane_g1

0x8496,	// (0x0005361d) main_radioblah_info_pane_t3_ParamLimits

0x8496,	// (0x0005361d) main_radioblah_info_pane_t3

0x301d,	// (0x0004e1a4) highlight_cell_cale_month_pane_ParamLimits

0x301d,	// (0x0004e1a4) highlight_cell_cale_month_pane

0xb130,	// (0x000562b7) main_phob_fisheye_pane

0xe54b,	// (0x000596d2) scroll_pane_cp0031_ParamLimits

0xe54b,	// (0x000596d2) scroll_pane_cp0031

0xa521,	// (0x000556a8) wait_bar_pane_cp08_ParamLimits

0x7cf9,	// (0x00052e80) cset_list_set_pane_copy1_ParamLimits

0xabf6,	// (0x00055d7d) highlight_cell_cale_month_pane_g1

0x8532,	// (0x000536b9) highlight_cell_cale_month_pane_t1

0x7679,	// (0x00052800) list_gen_pane_cp01

0xed56,	// (0x00059edd) scroll_pane_01

0x8540,	// (0x000536c7) list_single_double_fisheye_pane

0x08e4,	// (0x0004ba6b) list_double_fisheye_pane_g1_ParamLimits

0x08e4,	// (0x0004ba6b) list_double_fisheye_pane_g1

0x08f0,	// (0x0004ba77) list_double_fisheye_pane_g2_ParamLimits

0x08f0,	// (0x0004ba77) list_double_fisheye_pane_g2

0x8549,	// (0x000536d0) list_double_fisheye_pane_g3_ParamLimits

0x8549,	// (0x000536d0) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005ae30) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005ae30) list_double_fisheye_pane_g

0x0921,	// (0x0004baa8) list_double_fisheye_pane_t1_ParamLimits

0x0921,	// (0x0004baa8) list_double_fisheye_pane_t1

0x093c,	// (0x0004bac3) list_double_fisheye_pane_t2_ParamLimits

0x093c,	// (0x0004bac3) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005ae3b) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005ae3b) list_double_fisheye_pane_t

0xb130,	// (0x000562b7) main_call5_pane

0x8328,	// (0x000534af) sc_swipe_pane_ParamLimits

0x8328,	// (0x000534af) sc_swipe_pane

0x8568,	// (0x000536ef) call5_image_pane_ParamLimits

0x8568,	// (0x000536ef) call5_image_pane

0x8585,	// (0x0005370c) call5_swipe_1_pane_ParamLimits

0x8585,	// (0x0005370c) call5_swipe_1_pane

0x8598,	// (0x0005371f) call5_swipe_2_pane_ParamLimits

0x8598,	// (0x0005371f) call5_swipe_2_pane

0x85c3,	// (0x0005374a) popup_call5_audio_first_window_ParamLimits

0x85c3,	// (0x0005374a) popup_call5_audio_first_window

0xe44f,	// (0x000595d6) call5_swipe_1_pane_g1_ParamLimits

0xe44f,	// (0x000595d6) call5_swipe_1_pane_g1

0xabfe,	// (0x00055d85) call5_swipe_1_pane_g2_ParamLimits

0xabfe,	// (0x00055d85) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005ae40) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005ae40) call5_swipe_1_pane_g

0xac0a,	// (0x00055d91) call5_swipe_1_pane_t1_ParamLimits

0xac0a,	// (0x00055d91) call5_swipe_1_pane_t1

0xe44f,	// (0x000595d6) call5_swipe_2_pane_g1_ParamLimits

0xe44f,	// (0x000595d6) call5_swipe_2_pane_g1

0xac1f,	// (0x00055da6) call5_swipe_2_pane_g2_ParamLimits

0xac1f,	// (0x00055da6) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005ae45) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005ae45) call5_swipe_2_pane_g

0xac2b,	// (0x00055db2) call5_swipe_2_pane_t1_ParamLimits

0xac2b,	// (0x00055db2) call5_swipe_2_pane_t1

0xac40,	// (0x00055dc7) sc_swipe_pane_g1_ParamLimits

0xac40,	// (0x00055dc7) sc_swipe_pane_g1

0xac4d,	// (0x00055dd4) sc_swipe_pane_g2_ParamLimits

0xac4d,	// (0x00055dd4) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005ae4a) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005ae4a) sc_swipe_pane_g

0xac59,	// (0x00055de0) sc_swipe_pane_t1_ParamLimits

0xac59,	// (0x00055de0) sc_swipe_pane_t1

0xb130,	// (0x000562b7) main_cmail_launcher_pane

0x85d4,	// (0x0005375b) aid_size_cell_cmail_l_ParamLimits

0x85d4,	// (0x0005375b) aid_size_cell_cmail_l

0x85e2,	// (0x00053769) grid_cmail_l_pane_ParamLimits

0x85e2,	// (0x00053769) grid_cmail_l_pane

0x85fc,	// (0x00053783) cell_cmail_l_pane_ParamLimits

0x85fc,	// (0x00053783) cell_cmail_l_pane

0xac6e,	// (0x00055df5) cell_cmail_l_pane_g1_ParamLimits

0xac6e,	// (0x00055df5) cell_cmail_l_pane_g1

0xac7a,	// (0x00055e01) cell_cmail_l_pane_t1_ParamLimits

0xac7a,	// (0x00055e01) cell_cmail_l_pane_t1

0xac90,	// (0x00055e17) cell_cmail_l_pane_t2_ParamLimits

0xac90,	// (0x00055e17) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005ae4f) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005ae4f) cell_cmail_l_pane_t

0xbdd4,	// (0x00056f5b) grid_highlight_pane_cp018_ParamLimits

0xbdd4,	// (0x00056f5b) grid_highlight_pane_cp018

0x11d8,	// (0x0004c35f) main2_pane_ParamLimits

0x11d8,	// (0x0004c35f) main2_pane

0xbe3f,	// (0x00056fc6) popup_sp_fs_action_menu_bg_pane_g1

0xbe47,	// (0x00056fce) popup_sp_fs_action_menu_bg_pane_g2

0xbe4f,	// (0x00056fd6) popup_sp_fs_action_menu_bg_pane_g3

0xbe57,	// (0x00056fde) popup_sp_fs_action_menu_bg_pane_g4

0xbe5f,	// (0x00056fe6) popup_sp_fs_action_menu_bg_pane_g5

0xbe67,	// (0x00056fee) popup_sp_fs_action_menu_bg_pane_g6

0xbe6f,	// (0x00056ff6) popup_sp_fs_action_menu_bg_pane_g7

0xbe77,	// (0x00056ffe) popup_sp_fs_action_menu_bg_pane_g8

0xbe7f,	// (0x00057006) popup_sp_fs_action_menu_bg_pane_g9

0xbe87,	// (0x0005700e) popup_sp_fs_action_menu_bg_pane_g10

0xbe87,	// (0x0005700e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005a311) popup_sp_fs_action_menu_bg_pane_g

0x0207,	// (0x0004b38e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t3_g3_g1

0x0213,	// (0x0004b39a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x2_t3_g3_g2

0x021f,	// (0x0004b3a6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005a3bf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005a3bf) list_medium_line_x2_t3_g3_g

0x022b,	// (0x0004b3b2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x022b,	// (0x0004b3b2) list_medium_line_x2_t3_g3_t1

0x0240,	// (0x0004b3c7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0240,	// (0x0004b3c7) list_medium_line_x2_t3_g3_t2

0x0254,	// (0x0004b3db) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005a3c6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005a3c6) list_medium_line_x2_t3_g3_t

0x0207,	// (0x0004b38e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t3_g2_g1

0x021f,	// (0x0004b3a6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005a3cd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005a3cd) list_medium_line_x2_t3_g2_g

0x0269,	// (0x0004b3f0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0269,	// (0x0004b3f0) list_medium_line_x2_t3_g2_t1

0x027f,	// (0x0004b406) list_medium_line_x2_t3_g2_t2_ParamLimits

0x027f,	// (0x0004b406) list_medium_line_x2_t3_g2_t2

0x0291,	// (0x0004b418) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0291,	// (0x0004b418) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005a3d2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005a3d2) list_medium_line_x2_t3_g2_t

0x0207,	// (0x0004b38e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t4_g4_g1

0x02ae,	// (0x0004b435) list_medium_line_x2_t4_g4_g2_ParamLimits

0x02ae,	// (0x0004b435) list_medium_line_x2_t4_g4_g2

0x0213,	// (0x0004b39a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x2_t4_g4_g3

0x02ba,	// (0x0004b441) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02ba,	// (0x0004b441) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005a3d9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005a3d9) list_medium_line_x2_t4_g4_g

0x02c6,	// (0x0004b44d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02c6,	// (0x0004b44d) list_medium_line_x2_t4_g4_t1

0x02e0,	// (0x0004b467) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02e0,	// (0x0004b467) list_medium_line_x2_t4_g4_t2

0x02f6,	// (0x0004b47d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x02f6,	// (0x0004b47d) list_medium_line_x2_t4_g4_t3

0x030b,	// (0x0004b492) list_medium_line_x2_t4_g4_t4_ParamLimits

0x030b,	// (0x0004b492) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005a3e2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005a3e2) list_medium_line_x2_t4_g4_t

0x0207,	// (0x0004b38e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t2_g4_g1

0x02ae,	// (0x0004b435) list_medium_line_x2_t2_g4_g2_ParamLimits

0x02ae,	// (0x0004b435) list_medium_line_x2_t2_g4_g2

0x0213,	// (0x0004b39a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x2_t2_g4_g3

0x021f,	// (0x0004b3a6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005a449) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005a449) list_medium_line_x2_t2_g4_g

0x031d,	// (0x0004b4a4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x031d,	// (0x0004b4a4) list_medium_line_x2_t2_g4_t1

0x0254,	// (0x0004b3db) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005a452) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005a452) list_medium_line_x2_t2_g4_t

0x0207,	// (0x0004b38e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t2_g3_g1

0x0213,	// (0x0004b39a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x2_t2_g3_g2

0x021f,	// (0x0004b3a6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005a3bf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005a3bf) list_medium_line_x2_t2_g3_g

0x0332,	// (0x0004b4b9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0332,	// (0x0004b4b9) list_medium_line_x2_t2_g3_t1

0x0254,	// (0x0004b3db) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005a457) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005a457) list_medium_line_x2_t2_g3_t

0x3177,	// (0x0004e2fe) main_sp_fs_list_pane_ParamLimits

0x3177,	// (0x0004e2fe) main_sp_fs_list_pane

0xd744,	// (0x000588cb) sp_fs_scroll_pane_ParamLimits

0xd744,	// (0x000588cb) sp_fs_scroll_pane

0x0347,	// (0x0004b4ce) list_medium_line_x2_t3_t1

0x0357,	// (0x0004b4de) list_medium_line_x2_t3_t2

0x0365,	// (0x0004b4ec) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005a4a2) list_medium_line_x2_t3_t

0x0373,	// (0x0004b4fa) list_medium_line_x3_t4_t1

0x0383,	// (0x0004b50a) list_medium_line_x3_t4_t2

0x0391,	// (0x0004b518) list_medium_line_x3_t4_t3

0x0365,	// (0x0004b4ec) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005a4a9) list_medium_line_x3_t4_t

0x039f,	// (0x0004b526) list_medium_line_x4_t5_t1

0x03af,	// (0x0004b536) list_medium_line_x4_t5_t2

0x0391,	// (0x0004b518) list_medium_line_x4_t5_t3

0x03bd,	// (0x0004b544) list_medium_line_x4_t5_t4

0x0365,	// (0x0004b4ec) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005a4b2) list_medium_line_x4_t5_t

0x0207,	// (0x0004b38e) list_medium_line_t4_g4_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_t4_g4_g1

0x03cb,	// (0x0004b552) list_medium_line_t4_g4_g2_ParamLimits

0x03cb,	// (0x0004b552) list_medium_line_t4_g4_g2

0x03d7,	// (0x0004b55e) list_medium_line_t4_g4_g3_ParamLimits

0x03d7,	// (0x0004b55e) list_medium_line_t4_g4_g3

0x021f,	// (0x0004b3a6) list_medium_line_t4_g4_g4_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005a4bd) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005a4bd) list_medium_line_t4_g4_g

0x03e3,	// (0x0004b56a) list_medium_line_t4_g4_t1_ParamLimits

0x03e3,	// (0x0004b56a) list_medium_line_t4_g4_t1

0x03f8,	// (0x0004b57f) list_medium_line_t4_g4_t2_ParamLimits

0x03f8,	// (0x0004b57f) list_medium_line_t4_g4_t2

0x040d,	// (0x0004b594) list_medium_line_t4_g4_t3_ParamLimits

0x040d,	// (0x0004b594) list_medium_line_t4_g4_t3

0x0254,	// (0x0004b3db) list_medium_line_t4_g4_t4_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005a4c6) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005a4c6) list_medium_line_t4_g4_t

0x3236,	// (0x0004e3bd) chi_dic_find_pane_g1

0x423a,	// (0x0004f3c1) main_tport_pane

0x0600,	// (0x0004b787) list_medium_line_plain_t1

0x060e,	// (0x0004b795) list_medium_line_t2_g2_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_t2_g2_g1

0x061a,	// (0x0004b7a1) list_medium_line_t2_g2_g2_ParamLimits

0x061a,	// (0x0004b7a1) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005ab87) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005ab87) list_medium_line_t2_g2_g

0x0626,	// (0x0004b7ad) list_medium_line_t2_g2_t1_ParamLimits

0x0626,	// (0x0004b7ad) list_medium_line_t2_g2_t1

0x0640,	// (0x0004b7c7) list_medium_line_t2_g2_t2_ParamLimits

0x0640,	// (0x0004b7c7) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005ab8c) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005ab8c) list_medium_line_t2_g2_t

0x776d,	// (0x000528f4) aid_sp_fs_list_icon_a_sm

0x7775,	// (0x000528fc) aid_sp_fs_list_icon_d

0x777d,	// (0x00052904) aid_sp_fs_text_primary

0x9f1d,	// (0x000550a4) aid_sp_fs_text_secondary

0x7786,	// (0x0005290d) list_medium_line

0x7786,	// (0x0005290d) list_medium_line_g2

0x7786,	// (0x0005290d) list_medium_line_g3

0x7786,	// (0x0005290d) list_medium_line_plain

0x7786,	// (0x0005290d) list_medium_line_plain_t2

0x7786,	// (0x0005290d) list_medium_line_plain_t3

0x7786,	// (0x0005290d) list_medium_line_right_icon

0x7786,	// (0x0005290d) list_medium_line_right_iconx2

0x7786,	// (0x0005290d) list_medium_line_t2

0x7786,	// (0x0005290d) list_medium_line_t2_g2

0x7786,	// (0x0005290d) list_medium_line_t2_g3

0x7786,	// (0x0005290d) list_medium_line_t2_right_icon

0x7786,	// (0x0005290d) list_medium_line_t2_right_iconx2

0x7786,	// (0x0005290d) list_medium_line_t3

0x7786,	// (0x0005290d) list_medium_line_t3_g2

0x7786,	// (0x0005290d) list_medium_line_t3_g3

0x7786,	// (0x0005290d) list_medium_line_t3_right_iconx2

0x778f,	// (0x00052916) list_medium_line_t4_g4

0x7798,	// (0x0005291f) list_medium_line_x2

0x7798,	// (0x0005291f) list_medium_line_x2_t2_g2

0x7798,	// (0x0005291f) list_medium_line_x2_t2_g3

0x7798,	// (0x0005291f) list_medium_line_x2_t2_g4

0x7798,	// (0x0005291f) list_medium_line_x2_t3

0x7798,	// (0x0005291f) list_medium_line_x2_t3_g2

0x7798,	// (0x0005291f) list_medium_line_x2_t3_g3

0x7798,	// (0x0005291f) list_medium_line_x2_t3_g4

0x7798,	// (0x0005291f) list_medium_line_x2_t4_g2

0x7798,	// (0x0005291f) list_medium_line_x2_t4_g4

0x77a1,	// (0x00052928) list_medium_line_x3

0x77a1,	// (0x00052928) list_medium_line_x3_t4

0x77a1,	// (0x00052928) list_medium_line_x3_t4_g4

0x778f,	// (0x00052916) list_medium_line_x4_t4

0x778f,	// (0x00052916) list_medium_line_x4_t4_g7

0x778f,	// (0x00052916) list_medium_line_x4_t5

0x07cc,	// (0x0004b953) list_single_fs_dyc_pane_ParamLimits

0x07cc,	// (0x0004b953) list_single_fs_dyc_pane

0x0207,	// (0x0004b38e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x4_t4_g7_g1

0x080c,	// (0x0004b993) list_medium_line_x4_t4_g7_g2_ParamLimits

0x080c,	// (0x0004b993) list_medium_line_x4_t4_g7_g2

0x0818,	// (0x0004b99f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0818,	// (0x0004b99f) list_medium_line_x4_t4_g7_g3

0x0827,	// (0x0004b9ae) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0827,	// (0x0004b9ae) list_medium_line_x4_t4_g7_g4

0x0833,	// (0x0004b9ba) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0833,	// (0x0004b9ba) list_medium_line_x4_t4_g7_g5

0x0842,	// (0x0004b9c9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0842,	// (0x0004b9c9) list_medium_line_x4_t4_g7_g6

0x0851,	// (0x0004b9d8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0851,	// (0x0004b9d8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005ad57) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005ad57) list_medium_line_x4_t4_g7_g

0x085d,	// (0x0004b9e4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x085d,	// (0x0004b9e4) list_medium_line_x4_t4_g7_t1

0x0872,	// (0x0004b9f9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0872,	// (0x0004b9f9) list_medium_line_x4_t4_g7_t2

0x0887,	// (0x0004ba0e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0887,	// (0x0004ba0e) list_medium_line_x4_t4_g7_t3

0x089c,	// (0x0004ba23) list_medium_line_x4_t4_g7_t4_ParamLimits

0x089c,	// (0x0004ba23) list_medium_line_x4_t4_g7_t4

0x08ae,	// (0x0004ba35) list_medium_line_x4_t4_g7_t5_ParamLimits

0x08ae,	// (0x0004ba35) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005ad66) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005ad66) list_medium_line_x4_t4_g7_t

0x08c0,	// (0x0004ba47) list_single_dyc_row_pane_ParamLimits

0x08c0,	// (0x0004ba47) list_single_dyc_row_pane

0x8555,	// (0x000536dc) call5_gesture_pane_ParamLimits

0x8555,	// (0x000536dc) call5_gesture_pane

0x85ab,	// (0x00053732) call5_windows_pane_ParamLimits

0x85ab,	// (0x00053732) call5_windows_pane

0x8616,	// (0x0005379d) call5_swipe_1_pane_cp_ParamLimits

0x8616,	// (0x0005379d) call5_swipe_1_pane_cp

0x8622,	// (0x000537a9) call5_swipe_2_pane_cp_ParamLimits

0x8622,	// (0x000537a9) call5_swipe_2_pane_cp

0xbf6b,	// (0x000570f2) call5_image_pane_cp

0x862e,	// (0x000537b5) popup_call5_audio_first_window_cp_ParamLimits

0x862e,	// (0x000537b5) popup_call5_audio_first_window_cp

0xac40,	// (0x00055dc7) call5_swipe_1_pane_g1_cp_ParamLimits

0xac40,	// (0x00055dc7) call5_swipe_1_pane_g1_cp

0xacad,	// (0x00055e34) call5_swipe_1_pane_g2_cp

0xac59,	// (0x00055de0) call5_swipe_1_pane_t1_cp_ParamLimits

0xac59,	// (0x00055de0) call5_swipe_1_pane_t1_cp

0xac40,	// (0x00055dc7) call5_swipe_2_pane_g1_cp_ParamLimits

0xac40,	// (0x00055dc7) call5_swipe_2_pane_g1_cp

0xacb5,	// (0x00055e3c) call5_swipe_2_pane_g2_cp

0xacbd,	// (0x00055e44) call5_swipe_2_pane_t1_cp_ParamLimits

0xacbd,	// (0x00055e44) call5_swipe_2_pane_t1_cp

0xbdd4,	// (0x00056f5b) main_sp_fs_email_pane

0xacd2,	// (0x00055e59) main_sp_fs_listscroll_pane_te

0x863c,	// (0x000537c3) popup_sp_fs_action_menu_pane_ParamLimits

0x863c,	// (0x000537c3) popup_sp_fs_action_menu_pane

0xe1e3,	// (0x0005936a) bg_sp_fs_ctrlbar_pane_g1

0xacdb,	// (0x00055e62) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xace4,	// (0x00055e6b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xaced,	// (0x00055e74) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe1e3,	// (0x0005936a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005ae54) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfc8,	// (0x0005914f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfc8,	// (0x0005914f) bg_sp_fs_ctrlbar_ddmenu_pane

0xacf6,	// (0x00055e7d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xacf6,	// (0x00055e7d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xad02,	// (0x00055e89) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xad02,	// (0x00055e89) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005ae5d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005ae5d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xad0e,	// (0x00055e95) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xad0e,	// (0x00055e95) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x095e,	// (0x0004bae5) list_medium_line_t2_right_icon_g1

0x0966,	// (0x0004baed) list_medium_line_t2_right_icon_t1

0x0976,	// (0x0004bafd) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005ae62) list_medium_line_t2_right_icon_t

0xdddb,	// (0x00058f62) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdddb,	// (0x00058f62) bg_sp_fs_ctrlbar_pane

0x86c8,	// (0x0005384f) main_sp_fs_ctrlbar_button_pane_cp01

0x86d2,	// (0x00053859) main_sp_fs_ctrlbar_ddmenu_pane

0xad60,	// (0x00055ee7) main_sp_fs_ctrlbar_pane_g1

0xad6c,	// (0x00055ef3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005ae67) main_sp_fs_ctrlbar_pane_g

0xad78,	// (0x00055eff) main_sp_fs_ctrlbar_pane_t1

0x86dc,	// (0x00053863) main_sp_fs_ctrlbar_pane

0x8700,	// (0x00053887) main_sp_fs_listscroll_pane_te_cp01

0x0988,	// (0x0004bb0f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0988,	// (0x0004bb0f) popup_sp_fs_action_menu_pane_cp01

0xbdd4,	// (0x00056f5b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbdd4,	// (0x00056f5b) bg_sp_fs_highlight_list_pane_cp01

0x8720,	// (0x000538a7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8720,	// (0x000538a7) sp_fs_action_menu_list_gene_pane_g1

0xada8,	// (0x00055f2f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xada8,	// (0x00055f2f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005ae71) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005ae71) sp_fs_action_menu_list_gene_pane_g

0x872f,	// (0x000538b6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x872f,	// (0x000538b6) sp_fs_action_menu_list_gene_pane_t1

0x8747,	// (0x000538ce) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8747,	// (0x000538ce) sp_fs_action_menu_list_gene_pane

0xadb5,	// (0x00055f3c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xadb5,	// (0x00055f3c) popup_sp_fs_action_menu_bg_pane

0x8766,	// (0x000538ed) sp_fs_action_menu_list_pane_ParamLimits

0x8766,	// (0x000538ed) sp_fs_action_menu_list_pane

0x8786,	// (0x0005390d) sp_fs_scroll_pane_cp01_ParamLimits

0x8786,	// (0x0005390d) sp_fs_scroll_pane_cp01

0x09b8,	// (0x0004bb3f) list_medium_line_plain_t2_t1

0x09c8,	// (0x0004bb4f) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005ae76) list_medium_line_plain_t2_t

0x09d8,	// (0x0004bb5f) list_medium_line_plain_t3_t1

0x09e8,	// (0x0004bb6f) list_medium_line_plain_t3_t2

0x09f6,	// (0x0004bb7d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005ae7b) list_medium_line_plain_t3_t

0x0207,	// (0x0004b38e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t2_g2_g1

0x021f,	// (0x0004b3a6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005a3cd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005a3cd) list_medium_line_x2_t2_g2_g

0x03e3,	// (0x0004b56a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03e3,	// (0x0004b56a) list_medium_line_x2_t2_g2_t1

0x0254,	// (0x0004b3db) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005ae82) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005ae82) list_medium_line_x2_t2_g2_t

0x0207,	// (0x0004b38e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t4_g2_g1

0x0a04,	// (0x0004bb8b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a04,	// (0x0004bb8b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005ae87) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005ae87) list_medium_line_x2_t4_g2_g

0x0a16,	// (0x0004bb9d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0a16,	// (0x0004bb9d) list_medium_line_x2_t4_g2_t1

0x0a30,	// (0x0004bbb7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a30,	// (0x0004bbb7) list_medium_line_x2_t4_g2_t2

0x0a46,	// (0x0004bbcd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a46,	// (0x0004bbcd) list_medium_line_x2_t4_g2_t3

0x0254,	// (0x0004b3db) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005ae8c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005ae8c) list_medium_line_x2_t4_g2_t

0x0a5b,	// (0x0004bbe2) list_medium_line_t3_right_iconx2_g1

0x095e,	// (0x0004bae5) list_medium_line_t3_right_iconx2_g2

0x0a63,	// (0x0004bbea) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005ae95) list_medium_line_t3_right_iconx2_g

0x0a6d,	// (0x0004bbf4) list_medium_line_t3_right_iconx2_t1

0x0a7d,	// (0x0004bc04) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005ae9c) list_medium_line_t3_right_iconx2_t

0x0207,	// (0x0004b38e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x3_t4_g4_g1

0x0213,	// (0x0004b39a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x3_t4_g4_g2

0x03cb,	// (0x0004b552) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03cb,	// (0x0004b552) list_medium_line_x3_t4_g4_g3

0x0a8b,	// (0x0004bc12) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a8b,	// (0x0004bc12) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005aea1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005aea1) list_medium_line_x3_t4_g4_g

0x0a97,	// (0x0004bc1e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a97,	// (0x0004bc1e) list_medium_line_x3_t4_g4_t1

0x0aae,	// (0x0004bc35) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0aae,	// (0x0004bc35) list_medium_line_x3_t4_g4_t2

0x03f8,	// (0x0004b57f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x03f8,	// (0x0004b57f) list_medium_line_x3_t4_g4_t3

0x0ac9,	// (0x0004bc50) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ac9,	// (0x0004bc50) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005aeaa) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005aeaa) list_medium_line_x3_t4_g4_t

0x0ae6,	// (0x0004bc6d) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ae6,	// (0x0004bc6d) list_single_dyc_row_text_pane_t1

0x0b2f,	// (0x0004bcb6) list_single_dyc_row_text_pane_t2_ParamLimits

0x0b2f,	// (0x0004bcb6) list_single_dyc_row_text_pane_t2

0x87ac,	// (0x00053933) list_single_dyc_row_text_pane_t3_ParamLimits

0x87ac,	// (0x00053933) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005aeb3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005aeb3) list_single_dyc_row_text_pane_t

0x87d0,	// (0x00053957) list_single_dyc_row_pane_g1_ParamLimits

0x87d0,	// (0x00053957) list_single_dyc_row_pane_g1

0x87dc,	// (0x00053963) list_single_dyc_row_pane_g2_ParamLimits

0x87dc,	// (0x00053963) list_single_dyc_row_pane_g2

0x87e8,	// (0x0005396f) list_single_dyc_row_pane_g3_ParamLimits

0x87e8,	// (0x0005396f) list_single_dyc_row_pane_g3

0x87f4,	// (0x0005397b) list_single_dyc_row_pane_g4_ParamLimits

0x87f4,	// (0x0005397b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005aec0) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005aec0) list_single_dyc_row_pane_g

0x8800,	// (0x00053987) list_single_dyc_row_text_pane_ParamLimits

0x8800,	// (0x00053987) list_single_dyc_row_text_pane

0xb130,	// (0x000562b7) bg_sp_fs_scroll_pane

0xadc3,	// (0x00055f4a) thumb_sp_fs_scroll_pane

0x060e,	// (0x0004b795) list_medium_line_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_g1

0x0c64,	// (0x0004bdeb) list_medium_line_t1_ParamLimits

0x0c64,	// (0x0004bdeb) list_medium_line_t1

0x0207,	// (0x0004b38e) list_medium_line_x2_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_g1

0x0213,	// (0x0004b39a) list_medium_line_x2_g2_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005aec9) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005aec9) list_medium_line_x2_g

0x881f,	// (0x000539a6) list_medium_line_x2_t1_ParamLimits

0x881f,	// (0x000539a6) list_medium_line_x2_t1

0x0207,	// (0x0004b38e) list_medium_line_x3_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x3_g1

0x0213,	// (0x0004b39a) list_medium_line_x3_g2_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005aec9) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005aec9) list_medium_line_x3_g

0x881f,	// (0x000539a6) list_medium_line_x3_t1_ParamLimits

0x881f,	// (0x000539a6) list_medium_line_x3_t1

0xadcc,	// (0x00055f53) thumb_sp_fs_scroll_pane_g1

0xadd5,	// (0x00055f5c) thumb_sp_fs_scroll_pane_g2

0xadde,	// (0x00055f65) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005aece) thumb_sp_fs_scroll_pane_g

0xadcc,	// (0x00055f53) bg_sp_fs_scroll_pane_g1

0xadd5,	// (0x00055f5c) bg_sp_fs_scroll_pane_g2

0xadde,	// (0x00055f65) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005aece) bg_sp_fs_scroll_pane_g

0x0207,	// (0x0004b38e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0207,	// (0x0004b38e) list_medium_line_x2_t3_g4_g1

0x02ae,	// (0x0004b435) list_medium_line_x2_t3_g4_g2_ParamLimits

0x02ae,	// (0x0004b435) list_medium_line_x2_t3_g4_g2

0x0213,	// (0x0004b39a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0213,	// (0x0004b39a) list_medium_line_x2_t3_g4_g3

0x021f,	// (0x0004b3a6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x021f,	// (0x0004b3a6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005a449) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005a449) list_medium_line_x2_t3_g4_g

0x0c79,	// (0x0004be00) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c79,	// (0x0004be00) list_medium_line_x2_t3_g4_t1

0x0c93,	// (0x0004be1a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c93,	// (0x0004be1a) list_medium_line_x2_t3_g4_t2

0x0254,	// (0x0004b3db) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0254,	// (0x0004b3db) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005aed5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005aed5) list_medium_line_x2_t3_g4_t

0x060e,	// (0x0004b795) list_medium_line_g2_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_g2_g1

0x061a,	// (0x0004b7a1) list_medium_line_g2_g2_ParamLimits

0x061a,	// (0x0004b7a1) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005ab87) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005ab87) list_medium_line_g2_g

0x0cad,	// (0x0004be34) list_medium_line_g2_t1_ParamLimits

0x0cad,	// (0x0004be34) list_medium_line_g2_t1

0x060e,	// (0x0004b795) list_medium_line_t3_g2_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_t3_g2_g1

0x061a,	// (0x0004b7a1) list_medium_line_t3_g2_g2_ParamLimits

0x061a,	// (0x0004b7a1) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005ab87) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005ab87) list_medium_line_t3_g2_g

0x0cc2,	// (0x0004be49) list_medium_line_t3_g2_t1_ParamLimits

0x0cc2,	// (0x0004be49) list_medium_line_t3_g2_t1

0x0cdc,	// (0x0004be63) list_medium_line_t3_g2_t2_ParamLimits

0x0cdc,	// (0x0004be63) list_medium_line_t3_g2_t2

0x0cf2,	// (0x0004be79) list_medium_line_t3_g2_t3_ParamLimits

0x0cf2,	// (0x0004be79) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005aedc) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005aedc) list_medium_line_t3_g2_t

0x095e,	// (0x0004bae5) list_medium_line_right_icon_g1

0x0d0c,	// (0x0004be93) list_medium_line_right_icon_t1

0x060e,	// (0x0004b795) list_medium_line_t2_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_t2_g1

0x0d1a,	// (0x0004bea1) list_medium_line_t2_t1_ParamLimits

0x0d1a,	// (0x0004bea1) list_medium_line_t2_t1

0x0d34,	// (0x0004bebb) list_medium_line_t2_t2_ParamLimits

0x0d34,	// (0x0004bebb) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005aee3) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005aee3) list_medium_line_t2_t

0x060e,	// (0x0004b795) list_medium_line_t3_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_t3_g1

0x0d4d,	// (0x0004bed4) list_medium_line_t3_t1_ParamLimits

0x0d4d,	// (0x0004bed4) list_medium_line_t3_t1

0x0d67,	// (0x0004beee) list_medium_line_t3_t2_ParamLimits

0x0d67,	// (0x0004beee) list_medium_line_t3_t2

0x0d7d,	// (0x0004bf04) list_medium_line_t3_t3_ParamLimits

0x0d7d,	// (0x0004bf04) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005aee8) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005aee8) list_medium_line_t3_t

0x060e,	// (0x0004b795) list_medium_line_g3_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_g3_g1

0x0d92,	// (0x0004bf19) list_medium_line_g3_g2_ParamLimits

0x0d92,	// (0x0004bf19) list_medium_line_g3_g2

0x061a,	// (0x0004b7a1) list_medium_line_g3_g3_ParamLimits

0x061a,	// (0x0004b7a1) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005aeef) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005aeef) list_medium_line_g3_g

0x0d9e,	// (0x0004bf25) list_medium_line_g3_t1_ParamLimits

0x0d9e,	// (0x0004bf25) list_medium_line_g3_t1

0x060e,	// (0x0004b795) list_medium_line_t2_g3_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_t2_g3_g1

0x0d92,	// (0x0004bf19) list_medium_line_t2_g3_g2_ParamLimits

0x0d92,	// (0x0004bf19) list_medium_line_t2_g3_g2

0x061a,	// (0x0004b7a1) list_medium_line_t2_g3_g3_ParamLimits

0x061a,	// (0x0004b7a1) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005aeef) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005aeef) list_medium_line_t2_g3_g

0x0db3,	// (0x0004bf3a) list_medium_line_t2_g3_t1_ParamLimits

0x0db3,	// (0x0004bf3a) list_medium_line_t2_g3_t1

0x0dcd,	// (0x0004bf54) list_medium_line_t2_g3_t2_ParamLimits

0x0dcd,	// (0x0004bf54) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005aef6) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005aef6) list_medium_line_t2_g3_t

0x060e,	// (0x0004b795) list_medium_line_t3_g3_g1_ParamLimits

0x060e,	// (0x0004b795) list_medium_line_t3_g3_g1

0x0d92,	// (0x0004bf19) list_medium_line_t3_g3_g2_ParamLimits

0x0d92,	// (0x0004bf19) list_medium_line_t3_g3_g2

0x061a,	// (0x0004b7a1) list_medium_line_t3_g3_g3_ParamLimits

0x061a,	// (0x0004b7a1) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005aeef) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005aeef) list_medium_line_t3_g3_g

0x0deb,	// (0x0004bf72) list_medium_line_t3_g3_t1_ParamLimits

0x0deb,	// (0x0004bf72) list_medium_line_t3_g3_t1

0x0e04,	// (0x0004bf8b) list_medium_line_t3_g3_t2_ParamLimits

0x0e04,	// (0x0004bf8b) list_medium_line_t3_g3_t2

0x0e1a,	// (0x0004bfa1) list_medium_line_t3_g3_t3_ParamLimits

0x0e1a,	// (0x0004bfa1) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005aefb) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005aefb) list_medium_line_t3_g3_t

0x0a5b,	// (0x0004bbe2) list_medium_line_right_iconx2_g1

0x095e,	// (0x0004bae5) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005af02) list_medium_line_right_iconx2_g

0x0e34,	// (0x0004bfbb) list_medium_line_right_iconx2_t1

0x0a5b,	// (0x0004bbe2) list_medium_line_t2_right_iconx2_g1

0x095e,	// (0x0004bae5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005af02) list_medium_line_t2_right_iconx2_g

0x0e42,	// (0x0004bfc9) list_medium_line_t2_right_iconx2_t1

0x0e52,	// (0x0004bfd9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005af07) list_medium_line_t2_right_iconx2_t

0x0e64,	// (0x0004bfeb) list_medium_line_x4_t4_t1

0x0e72,	// (0x0004bff9) list_medium_line_x4_t4_t2

0x0e82,	// (0x0004c009) list_medium_line_x4_t4_t3

0x0e92,	// (0x0004c019) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005af0c) list_medium_line_x4_t4_t

0x8878,	// (0x000539ff) tport_appsw_pane_ParamLimits

0x8878,	// (0x000539ff) tport_appsw_pane

0x8890,	// (0x00053a17) tport_contact_pane_ParamLimits

0x8890,	// (0x00053a17) tport_contact_pane

0x88a8,	// (0x00053a2f) tport_listscroll_pane_ParamLimits

0x88a8,	// (0x00053a2f) tport_listscroll_pane

0x88c2,	// (0x00053a49) cell_tport_appsw_pane_ParamLimits

0x88c2,	// (0x00053a49) cell_tport_appsw_pane

0xec1c,	// (0x00059da3) tport_appsw_pane_g1_ParamLimits

0xec1c,	// (0x00059da3) tport_appsw_pane_g1

0xade7,	// (0x00055f6e) tport_contact_pane_g1

0xa792,	// (0x00055919) tport_contact_pane_t1

0xadf0,	// (0x00055f77) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005af15) tport_contact_pane_t

0xadfe,	// (0x00055f85) list_tport_pane

0xae07,	// (0x00055f8e) scroll_pane_cp_030

0x890a,	// (0x00053a91) cell_tport_appsw_pane_g1

0x891a,	// (0x00053aa1) cell_tport_appsw_pane_t1

0x8928,	// (0x00053aaf) grid_highlight_pane_cp019

0x8930,	// (0x00053ab7) list_tport_double_graphic_pane_ParamLimits

0x8930,	// (0x00053ab7) list_tport_double_graphic_pane

0xbdd4,	// (0x00056f5b) list_highlight_pane_cp023_ParamLimits

0xbdd4,	// (0x00056f5b) list_highlight_pane_cp023

0x893d,	// (0x00053ac4) list_tport_double_graphic_pane_g1_ParamLimits

0x893d,	// (0x00053ac4) list_tport_double_graphic_pane_g1

0x894a,	// (0x00053ad1) list_tport_double_graphic_pane_t1_ParamLimits

0x894a,	// (0x00053ad1) list_tport_double_graphic_pane_t1

0x895f,	// (0x00053ae6) list_tport_double_graphic_pane_t2_ParamLimits

0x895f,	// (0x00053ae6) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005af21) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005af21) list_tport_double_graphic_pane_t

0xb130,	// (0x000562b7) main_cale_note_pane

0x694e,	// (0x00051ad5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x694e,	// (0x00051ad5) cell_vitu2_function_top_wide_pane_cp01

0x8245,	// (0x000533cc) wait_bar_pane_cp05_ParamLimits

0xbdd4,	// (0x00056f5b) listscroll_cmail_pane

0xae10,	// (0x00055f97) list_cmail_pane

0x8971,	// (0x00053af8) list_cmail_body_pane

0x8986,	// (0x00053b0d) list_single_cmail_header_caption_pane

0x899c,	// (0x00053b23) list_single_cmail_header_detail_pane_ParamLimits

0x899c,	// (0x00053b23) list_single_cmail_header_detail_pane

0xae20,	// (0x00055fa7) list_single_cmail_header_caption_pane_t1

0x0ea2,	// (0x0004c029) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ea2,	// (0x0004c029) list_single_cmail_header_detail_pane_g1

0xa204,	// (0x0005538b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa204,	// (0x0005538b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005af26) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005af26) list_single_cmail_header_detail_pane_g

0xa210,	// (0x00055397) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa210,	// (0x00055397) list_single_cmail_header_detail_pane_t1

0xa270,	// (0x000553f7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa270,	// (0x000553f7) list_single_cmail_header_editor_pane_bg

0xa8ef,	// (0x00055a76) list_cmail_body_pane_g1

0xae44,	// (0x00055fcb) list_cmail_body_pane_t1

0xec3c,	// (0x00059dc3) list_single_cmail_header_editor_pane_bg_g1

0xc1c4,	// (0x0005734b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec4c,	// (0x00059dd3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec44,	// (0x00059dcb) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee7b,	// (0x0005a002) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec6c,	// (0x00059df3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec5c,	// (0x00059de3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec64,	// (0x00059deb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc1a4,	// (0x0005732b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89c5,	// (0x00053b4c) calenote_gesture_pane_ParamLimits

0x89c5,	// (0x00053b4c) calenote_gesture_pane

0x89e5,	// (0x00053b6c) calenote_window_pane_ParamLimits

0x89e5,	// (0x00053b6c) calenote_window_pane

0xae52,	// (0x00055fd9) popup_note_window_cp01

0x8a01,	// (0x00053b88) calenote_swipe_1_pane_ParamLimits

0x8a01,	// (0x00053b88) calenote_swipe_1_pane

0x8622,	// (0x000537a9) calenote_swipe_2_pane_ParamLimits

0x8622,	// (0x000537a9) calenote_swipe_2_pane

0xac40,	// (0x00055dc7) calenote_swipe_1_pane_g1_ParamLimits

0xac40,	// (0x00055dc7) calenote_swipe_1_pane_g1

0xac4d,	// (0x00055dd4) calenote_swipe_1_pane_g2_ParamLimits

0xac4d,	// (0x00055dd4) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005ae4a) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005ae4a) calenote_swipe_1_pane_g

0xae64,	// (0x00055feb) calenote_swipe_1_pane_t1_ParamLimits

0xae64,	// (0x00055feb) calenote_swipe_1_pane_t1

0xac40,	// (0x00055dc7) calenote_swipe_2_pane_g1_ParamLimits

0xac40,	// (0x00055dc7) calenote_swipe_2_pane_g1

0xae83,	// (0x0005600a) calenote_swipe_2_pane_g2_ParamLimits

0xae83,	// (0x0005600a) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005af32) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005af32) calenote_swipe_2_pane_g

0xae8f,	// (0x00056016) calenote_swipe_2_pane_t1_ParamLimits

0xae8f,	// (0x00056016) calenote_swipe_2_pane_t1

0xb130,	// (0x000562b7) main_mup_navstr_pane

0x561b,	// (0x000507a2) main_mup3_pane_t7_ParamLimits

0x561b,	// (0x000507a2) main_mup3_pane_t7

0x9b58,	// (0x00054cdf) main_mp4_pane_g6_ParamLimits

0x9b58,	// (0x00054cdf) main_mp4_pane_g6

0x9cfc,	// (0x00054e83) main_image3_pane_t4_ParamLimits

0x9cfc,	// (0x00054e83) main_image3_pane_t4

0x8a16,	// (0x00053b9d) popup_navstr_preview_pane_ParamLimits

0x8a16,	// (0x00053b9d) popup_navstr_preview_pane

0x8a2a,	// (0x00053bb1) scroll_navstr_pane_ParamLimits

0x8a2a,	// (0x00053bb1) scroll_navstr_pane

0xb130,	// (0x000562b7) bg_popup_preview_window_pane_cp04

0xaeb6,	// (0x0005603d) popup_navstr_preview_pane_t1

0x8a3e,	// (0x00053bc5) scroll_navstr_pane_g1_ParamLimits

0x8a3e,	// (0x00053bc5) scroll_navstr_pane_g1

0x8a52,	// (0x00053bd9) scroll_navstr_pane_t1_ParamLimits

0x8a52,	// (0x00053bd9) scroll_navstr_pane_t1

0xae5b,	// (0x00055fe2) bg_button_pane_cp014

0xae5b,	// (0x00055fe2) bg_button_pane_cp030

0x0904,	// (0x0004ba8b) list_double_fisheye_pane_g4_ParamLimits

0x0904,	// (0x0004ba8b) list_double_fisheye_pane_g4

0x0910,	// (0x0004ba97) list_double_fisheye_pane_g5_ParamLimits

0x0910,	// (0x0004ba97) list_double_fisheye_pane_g5

0xd744,	// (0x000588cb) sp_fs_scroll_pane_cp03

0xad60,	// (0x00055ee7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xad6c,	// (0x00055ef3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005ae67) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xad78,	// (0x00055eff) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xae18,	// (0x00055f9f) sp_fs_scroll_pane_cp02

0xbeaa,	// (0x00057031) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbeaa,	// (0x00057031) popup_sp_fs_calendar_preview_list_single_pane

0xb130,	// (0x000562b7) main_cam6_pano_pane

0xbdd4,	// (0x00056f5b) main_mup3_pane_ParamLimits

0xb130,	// (0x000562b7) main_phacti_pane

0x8118,	// (0x0005329f) bg_button_pane_cp11

0x8132,	// (0x000532b9) main_mobtv_info_pane_g2_ParamLimits

0x8132,	// (0x000532b9) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005adc7) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005adc7) main_mobtv_info_pane_g

0x830f,	// (0x00053496) sc_clock_pane_t5_ParamLimits

0x830f,	// (0x00053496) sc_clock_pane_t5

0x83d7,	// (0x0005355e) main_radioblah_pane_g1_ParamLimits

0xab8c,	// (0x00055d13) main_radioblah_pane_t3_ParamLimits

0xab8c,	// (0x00055d13) main_radioblah_pane_t3

0xaba4,	// (0x00055d2b) main_radioblah_pane_t4_ParamLimits

0xaba4,	// (0x00055d2b) main_radioblah_pane_t4

0x83ff,	// (0x00053586) main_radioblah_text_pane_ParamLimits

0x83ff,	// (0x00053586) main_radioblah_text_pane

0x8411,	// (0x00053598) main_radioblah_info_pane_g1_ParamLimits

0x84aa,	// (0x00053631) main_radioblah_info_pane_t4_ParamLimits

0x84aa,	// (0x00053631) main_radioblah_info_pane_t4

0xbdd4,	// (0x00056f5b) main_sp_fs_calendar_pane

0x8a69,	// (0x00053bf0) main_phacti_pane_g1

0x8a71,	// (0x00053bf8) phacti_note_pane_ParamLimits

0x8a71,	// (0x00053bf8) phacti_note_pane

0xaecd,	// (0x00056054) phacti_term_pane_ParamLimits

0xaecd,	// (0x00056054) phacti_term_pane

0xaee2,	// (0x00056069) phacti_note_pane_t1_ParamLimits

0xaee2,	// (0x00056069) phacti_note_pane_t1

0xa287,	// (0x0005540e) phacti_term_pane_g1

0xa28f,	// (0x00055416) phacti_term_pane_t1_ParamLimits

0xa28f,	// (0x00055416) phacti_term_pane_t1

0xaef9,	// (0x00056080) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbf49,	// (0x000570d0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005af3c) popup_sp_fs_calendar_preview_list_single_pane_g

0xaf01,	// (0x00056088) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xaf01,	// (0x00056088) popup_sp_fs_calendar_preview_list_single_pane_t1

0xaf17,	// (0x0005609e) aid_popup_sp_fs_bg_corner_pane

0xe1e3,	// (0x0005936a) popup_sp_fs_calendar_preview_bg_pane_g1

0xb130,	// (0x000562b7) popup_sp_fs_calendar_preview_bg_pane

0xaf1f,	// (0x000560a6) popup_sp_fs_calendar_preview_list_pane

0xdddb,	// (0x00058f62) bg_main_sp_fs_cale_pane_ParamLimits

0xdddb,	// (0x00058f62) bg_main_sp_fs_cale_pane

0xa2c2,	// (0x00055449) listscroll_cale_mrui_pane_ParamLimits

0xa2c2,	// (0x00055449) listscroll_cale_mrui_pane

0xa2d7,	// (0x0005545e) listscroll_sp_fs_schedule_track_pane

0xa2e0,	// (0x00055467) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2e0,	// (0x00055467) main_sp_fs_ctrlbar_pane_cp01

0xaf27,	// (0x000560ae) main_sp_fs_ribbon_pane

0xa2f3,	// (0x0005547a) popup_sp_fs_cale_preview_window

0x8ae6,	// (0x00053c6d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ae6,	// (0x00053c6d) list_single_sp_fs_schedule_track_pane

0xbdd4,	// (0x00056f5b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbdd4,	// (0x00056f5b) bg_sp_fs_highlight_list_pane_cp03

0x8af9,	// (0x00053c80) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8af9,	// (0x00053c80) list_single_sp_fs_schedule_track_pane_g1

0x8b05,	// (0x00053c8c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b05,	// (0x00053c8c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005af41) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005af41) list_single_sp_fs_schedule_track_pane_g

0x8b11,	// (0x00053c98) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b11,	// (0x00053c98) list_single_sp_fs_schedule_track_pane_t1

0x8b2b,	// (0x00053cb2) sp_fs_schedule_track_pane_ParamLimits

0x8b2b,	// (0x00053cb2) sp_fs_schedule_track_pane

0xaf2f,	// (0x000560b6) sp_fs_schedule_track_pane_g1

0xaf37,	// (0x000560be) sp_fs_schedule_track_pane_g2

0xaf3f,	// (0x000560c6) sp_fs_schedule_track_pane_g3

0xaf47,	// (0x000560ce) sp_fs_schedule_track_pane_g4

0xaf4f,	// (0x000560d6) sp_fs_schedule_track_pane_g5

0x0004,

0x0051,	// (0x0004b1d8) sp_fs_schedule_track_pane_g

0xec3c,	// (0x00059dc3) bg_sp_fs_schedule_viewer_highlight_g1

0xc1c4,	// (0x0005734b) bg_sp_fs_schedule_viewer_highlight_g2

0xec44,	// (0x00059dcb) bg_sp_fs_schedule_viewer_highlight_g3

0xec4c,	// (0x00059dd3) bg_sp_fs_schedule_viewer_highlight_g4

0xee7b,	// (0x0005a002) bg_sp_fs_schedule_viewer_highlight_g5

0xec5c,	// (0x00059de3) bg_sp_fs_schedule_viewer_highlight_g6

0xec64,	// (0x00059deb) bg_sp_fs_schedule_viewer_highlight_g7

0xec6c,	// (0x00059df3) bg_sp_fs_schedule_viewer_highlight_g8

0xc1a4,	// (0x0005732b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbf,	// (0x0005af46) bg_sp_fs_schedule_viewer_highlight_g

0xb130,	// (0x000562b7) bg_main_sp_fs_ribbon_pane

0x8b3c,	// (0x00053cc3) main_sp_fs_ribbon_pane_g1

0xaf57,	// (0x000560de) main_sp_fs_ribbon_pane_t1

0x8b45,	// (0x00053ccc) main_sp_fs_ribbon_pane_t2

0xaf66,	// (0x000560ed) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd2,	// (0x0005af59) main_sp_fs_ribbon_pane_t

0xaf75,	// (0x000560fc) main_sp_fs_ribbon_scheduler_pane

0xaf7d,	// (0x00056104) bg_main_sp_fs_ribbon_pane_g1

0xaf86,	// (0x0005610d) bg_main_sp_fs_ribbon_pane_g2

0xaf8f,	// (0x00056116) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0076,	// (0x0004b1fd) bg_main_sp_fs_ribbon_pane_g

0xaf97,	// (0x0005611e) main_sp_fs_ribbon_scheduler_pane_g1

0xafa0,	// (0x00056127) main_sp_fs_ribbon_scheduler_pane_g2

0xafa9,	// (0x00056130) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x007d,	// (0x0004b204) main_sp_fs_ribbon_scheduler_pane_g

0xafb2,	// (0x00056139) list_cale_mrui_pane

0x8b54,	// (0x00053cdb) sp_fs_scroll_pane_cp07_ParamLimits

0x8b54,	// (0x00053cdb) sp_fs_scroll_pane_cp07

0x8b70,	// (0x00053cf7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b70,	// (0x00053cf7) bg_sp_fs_schedule_viewer_highlight

0xafbf,	// (0x00056146) list_single_sp_fs_schedule_track_pane_cp01

0xafc7,	// (0x0005614e) list_sp_fs_schedule_track_pane

0xafcf,	// (0x00056156) sp_fs_scroll_pane_cp06_ParamLimits

0xafcf,	// (0x00056156) sp_fs_scroll_pane_cp06

0xe1e3,	// (0x0005936a) bgmain_sp_fs_calendar_pane_g1

0x0eba,	// (0x0004c041) list_single_cale_mrui_pane_ParamLimits

0x0eba,	// (0x0004c041) list_single_cale_mrui_pane

0xa305,	// (0x0005548c) list_single_cale_mrui_row_pane_ParamLimits

0xa305,	// (0x0005548c) list_single_cale_mrui_row_pane

0xa312,	// (0x00055499) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa312,	// (0x00055499) list_single_cale_mrui_row_pane_g1

0xa34a,	// (0x000554d1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa34a,	// (0x000554d1) list_single_cale_mrui_row_pane_t1

0x0edb,	// (0x0004c062) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0edb,	// (0x0004c062) list_single_cale_mrui_row_pane_t2

0xa35c,	// (0x000554e3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa35c,	// (0x000554e3) list_single_cale_mrui_row_pane_t3

0xa38b,	// (0x00055512) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa38b,	// (0x00055512) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde0,	// (0x0005af67) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde0,	// (0x0005af67) list_single_cale_mrui_row_pane_t

0x0f43,	// (0x0004c0ca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f43,	// (0x0004c0ca) list_single_cmail_header_editor_pane_bg_cp01

0x0f69,	// (0x0004c0f0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f69,	// (0x0004c0f0) list_single_cmail_header_editor_pane_bg_cp02

0x8b80,	// (0x00053d07) main_radioblah_text_pane_t1_ParamLimits

0x8b80,	// (0x00053d07) main_radioblah_text_pane_t1

0xafee,	// (0x00056175) cam6_indi_pane_cp01

0xaff6,	// (0x0005617d) cam6_mode_pane_cp01

0xaffe,	// (0x00056185) cam6_pano_pane

0xb007,	// (0x0005618e) cam6_zoom_pane_cp01

0xb00f,	// (0x00056196) cam6_pano_image_pane

0xb01a,	// (0x000561a1) cam6_pano_pane_g1

0xa8ef,	// (0x00055a76) cam6_pano_pane_g2

0xb023,	// (0x000561aa) cam6_pano_pane_g3

0xb02c,	// (0x000561b3) cam6_pano_pane_g4

0xe7cf,	// (0x00059956) cam6_pano_pane_g5

0xb035,	// (0x000561bc) cam6_pano_pane_g6

0xa3ba,	// (0x00055541) cam6_pano_pane_g7

0xb03f,	// (0x000561c6) cam6_pano_pane_g8

0xb048,	// (0x000561cf) cam6_pano_pane_g9

0x0008,

0xfde9,	// (0x0005af70) cam6_pano_pane_g

0xb130,	// (0x000562b7) main_browser_tag_pane

0xaeae,	// (0x00056035) grid_navstr_albumart_pane

0xb053,	// (0x000561da) cell_navstr_albumart_pane_ParamLimits

0xb053,	// (0x000561da) cell_navstr_albumart_pane

0xb073,	// (0x000561fa) cell_navstr_albumart_pane_g1

0xdbec,	// (0x00058d73) cell_navstr_albumart_pane_g2

0xdbfc,	// (0x00058d83) cell_navstr_albumart_pane_g3

0xdbf4,	// (0x00058d7b) cell_navstr_albumart_pane_g4

0x0003,

0xfdfc,	// (0x0005af83) cell_navstr_albumart_pane_g

0x8b9a,	// (0x00053d21) bt_list_pane_ParamLimits

0x8b9a,	// (0x00053d21) bt_list_pane

0x8bae,	// (0x00053d35) bt_list_pane_t1

0x8bbd,	// (0x00053d44) bt_list_pane_t2

0x0001,

0xfe05,	// (0x0005af8c) bt_list_pane_t

0xb130,	// (0x000562b7) main_cale_prevew_pane

0x8bcc,	// (0x00053d53) popup_cale_preview_window_ParamLimits

0x8bcc,	// (0x00053d53) popup_cale_preview_window

0xbdd4,	// (0x00056f5b) bg_popup_preview_window_pane_cp05_ParamLimits

0xbdd4,	// (0x00056f5b) bg_popup_preview_window_pane_cp05

0xb07b,	// (0x00056202) list_cale_preview_pane_ParamLimits

0xb07b,	// (0x00056202) list_cale_preview_pane

0x8be7,	// (0x00053d6e) list_double_cale_preview_pane_ParamLimits

0x8be7,	// (0x00053d6e) list_double_cale_preview_pane

0x8bf9,	// (0x00053d80) list_single_cale_preview_pane_ParamLimits

0x8bf9,	// (0x00053d80) list_single_cale_preview_pane

0x8c0f,	// (0x00053d96) list_single_cale_preview_pane_g1

0x8c17,	// (0x00053d9e) list_single_cale_preview_pane_t1_ParamLimits

0x8c17,	// (0x00053d9e) list_single_cale_preview_pane_t1

0x8c2c,	// (0x00053db3) list_double_cale_preview_pane_g1

0x8c34,	// (0x00053dbb) list_double_cale_preview_pane_t1_ParamLimits

0x8c34,	// (0x00053dbb) list_double_cale_preview_pane_t1

0x8c49,	// (0x00053dd0) list_double_cale_preview_pane_t2_ParamLimits

0x8c49,	// (0x00053dd0) list_double_cale_preview_pane_t2

0x0001,

0xfe0a,	// (0x0005af91) list_double_cale_preview_pane_t_ParamLimits

0xfe0a,	// (0x0005af91) list_double_cale_preview_pane_t

0xb130,	// (0x000562b7) main_ezdial_pane

0xbdd4,	// (0x00056f5b) main_sp_fs_email_pane_ParamLimits

0x8680,	// (0x00053807) cmail_ddmenu_btn01_pane_ParamLimits

0x8680,	// (0x00053807) cmail_ddmenu_btn01_pane

0x8693,	// (0x0005381a) cmail_ddmenu_btn02_pane_ParamLimits

0x8693,	// (0x0005381a) cmail_ddmenu_btn02_pane

0x86b6,	// (0x0005383d) cmail_ddmenu_btn03_pane_ParamLimits

0x86b6,	// (0x0005383d) cmail_ddmenu_btn03_pane

0x86dc,	// (0x00053863) main_sp_fs_ctrlbar_pane_ParamLimits

0x8700,	// (0x00053887) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8971,	// (0x00053af8) list_cmail_body_pane_ParamLimits

0xae2e,	// (0x00055fb5) bg_button_pane_cp12

0xae37,	// (0x00055fbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0xae37,	// (0x00055fbe) list_single_cmail_header_detail_pane_g3

0xa24c,	// (0x000553d3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa24c,	// (0x000553d3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005af2d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005af2d) list_single_cmail_header_detail_pane_t

0xa2a4,	// (0x0005542b) phacti_term_pane_t2_ParamLimits

0xa2a4,	// (0x0005542b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005af37) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005af37) phacti_term_pane_t

0xb087,	// (0x0005620e) aid_size_list_single_double

0x8c61,	// (0x00053de8) popup_ezdial_listscroll_window

0x8c7d,	// (0x00053e04) popup_number_entry_window_cp01

0xbf6b,	// (0x000570f2) bg_popup_call_pane_cp09

0xb093,	// (0x0005621a) ezdial_list_pane

0xb09b,	// (0x00056222) scroll_pane_cp23

0xdddb,	// (0x00058f62) bg_button_pane_cp028_ParamLimits

0xdddb,	// (0x00058f62) bg_button_pane_cp028

0x8c8b,	// (0x00053e12) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c8b,	// (0x00053e12) cmail_ddmenu_btn01_pane_g1

0x8c97,	// (0x00053e1e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c97,	// (0x00053e1e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0f,	// (0x0005af96) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0f,	// (0x0005af96) cmail_ddmenu_btn01_pane_g

0xb0a3,	// (0x0005622a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb0a3,	// (0x0005622a) cmail_ddmenu_btn01_pane_t1

0xdddb,	// (0x00058f62) bg_button_pane_cp029_ParamLimits

0xdddb,	// (0x00058f62) bg_button_pane_cp029

0x8ca3,	// (0x00053e2a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ca3,	// (0x00053e2a) cmail_ddmenu_btn02_pane_g1

0x8cbc,	// (0x00053e43) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cbc,	// (0x00053e43) cmail_ddmenu_btn02_pane_t1

0xbdd4,	// (0x00056f5b) bg_button_pane_cp031_ParamLimits

0xbdd4,	// (0x00056f5b) bg_button_pane_cp031

0x8ca3,	// (0x00053e2a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ca3,	// (0x00053e2a) cmail_ddmenu_btn03_pane_g1

0x8cbc,	// (0x00053e43) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cbc,	// (0x00053e43) cmail_ddmenu_btn03_pane_t1

0x61c5,	// (0x0005134c) cell_dialer2_keypad_pane_t1_ParamLimits

0x61df,	// (0x00051366) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x61df,	// (0x00051366) cell_dialer2_keypad_pane_t1_copy1

0x7f3b,	// (0x000530c2) ncimui_group_button_pane

0xbdd4,	// (0x00056f5b) main_sp_fs_calendar_pane_ParamLimits

0x8986,	// (0x00053b0d) list_single_cmail_header_caption_pane_ParamLimits

0xa2b9,	// (0x00055440) aid_recal_txt_sm_pane

0xb130,	// (0x000562b7) mian_recal_day_pane

0xa2f3,	// (0x0005547a) popup_sp_fs_cale_preview_window_ParamLimits

0xb0b8,	// (0x0005623f) list_recal_day_pane

0xa3dd,	// (0x00055564) list_single_recal_day_pane_ParamLimits

0xa3dd,	// (0x00055564) list_single_recal_day_pane

0xb0df,	// (0x00056266) list_single_recal_day_pane_g1_ParamLimits

0xb0df,	// (0x00056266) list_single_recal_day_pane_g1

0xa3ef,	// (0x00055576) list_single_recal_day_pane_g2_ParamLimits

0xa3ef,	// (0x00055576) list_single_recal_day_pane_g2

0xa3fb,	// (0x00055582) list_single_recal_day_pane_g3_ParamLimits

0xa3fb,	// (0x00055582) list_single_recal_day_pane_g3

0x0f89,	// (0x0004c110) list_single_recal_day_pane_g4_ParamLimits

0x0f89,	// (0x0004c110) list_single_recal_day_pane_g4

0xa407,	// (0x0005558e) list_single_recal_day_pane_g5_ParamLimits

0xa407,	// (0x0005558e) list_single_recal_day_pane_g5

0xa413,	// (0x0005559a) list_single_recal_day_pane_g6_ParamLimits

0xa413,	// (0x0005559a) list_single_recal_day_pane_g6

0x0004,

0xfe1e,	// (0x0005afa5) list_single_recal_day_pane_g_ParamLimits

0xfe1e,	// (0x0005afa5) list_single_recal_day_pane_g

0xa427,	// (0x000555ae) list_single_recal_day_pane_t1

0xa439,	// (0x000555c0) list_single_recal_day_pane_t2

0x0001,

0xfe29,	// (0x0005afb0) list_single_recal_day_pane_t

0x8ce0,	// (0x00053e67) ncimui_query_button_pane_ParamLimits

0x8ce0,	// (0x00053e67) ncimui_query_button_pane

0x8cf0,	// (0x00053e77) ncimui_query_button_pane_t1_ParamLimits

0x8cf0,	// (0x00053e77) ncimui_query_button_pane_t1

0xb0eb,	// (0x00056272) ncimui_query_button_pane_t2_ParamLimits

0xb0eb,	// (0x00056272) ncimui_query_button_pane_t2

0x0001,

0xfe2e,	// (0x0005afb5) ncimui_query_button_pane_t_ParamLimits

0xfe2e,	// (0x0005afb5) ncimui_query_button_pane_t

0x8d03,	// (0x00053e8a) query_button_pane_ParamLimits

0x8d03,	// (0x00053e8a) query_button_pane

0xb130,	// (0x000562b7) bg_button_pane_cp0028

0xb0fe,	// (0x00056285) query_button_pane_t1

0x423a,	// (0x0004f3c1) main_tport_pane_ParamLimits

0x8835,	// (0x000539bc) bg_popup_window_pane_cp01_ParamLimits

0x8835,	// (0x000539bc) bg_popup_window_pane_cp01

0x8850,	// (0x000539d7) heading_pane_cp08_ParamLimits

0x8850,	// (0x000539d7) heading_pane_cp08

0x8863,	// (0x000539ea) heading_pane_cp07_ParamLimits

0x8863,	// (0x000539ea) heading_pane_cp07

0x890a,	// (0x00053a91) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005af1a) cell_tport_appsw_pane_g

0x385b,	// (0x0004e9e2) input_candi_list_open_g1

0xc387,	// (0x0005750e) list_cale_time_pane_g6_ParamLimits

0xc387,	// (0x0005750e) list_cale_time_pane_g6

0x5003,	// (0x0005018a) aid_size_touch_calib_1_ParamLimits

0x5003,	// (0x0005018a) aid_size_touch_calib_1

0x5015,	// (0x0005019c) aid_size_touch_calib_2_ParamLimits

0x5015,	// (0x0005019c) aid_size_touch_calib_2

0x502d,	// (0x000501b4) aid_size_touch_calib_3_ParamLimits

0x502d,	// (0x000501b4) aid_size_touch_calib_3

0x504b,	// (0x000501d2) aid_size_touch_calib_4_ParamLimits

0x504b,	// (0x000501d2) aid_size_touch_calib_4

0x5063,	// (0x000501ea) main_touch_calib_button_group_pane_ParamLimits

0x5063,	// (0x000501ea) main_touch_calib_button_group_pane

0x507b,	// (0x00050202) main_touch_calib_pane_g1_ParamLimits

0x508d,	// (0x00050214) main_touch_calib_pane_g2_ParamLimits

0x509f,	// (0x00050226) main_touch_calib_pane_g3_ParamLimits

0x50b1,	// (0x00050238) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0005a8d8) main_touch_calib_pane_g_ParamLimits

0x50c3,	// (0x0005024a) main_touch_calib_pane_t1_ParamLimits

0x50dd,	// (0x00050264) main_touch_calib_pane_t2_ParamLimits

0x50f7,	// (0x0005027e) main_touch_calib_pane_t3_ParamLimits

0x510b,	// (0x00050292) main_touch_calib_pane_t4_ParamLimits

0x511f,	// (0x000502a6) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0005a8e1) main_touch_calib_pane_t_ParamLimits

0xe56f,	// (0x000596f6) list_single_fp_cale_pane_g3_ParamLimits

0xe56f,	// (0x000596f6) list_single_fp_cale_pane_g3

0xbdd4,	// (0x00056f5b) bg_button_pane_cp012_ParamLimits

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp03_ParamLimits

0x714f,	// (0x000522d6) cell_vitu2_function_top_pane_g1_ParamLimits

0xbdd4,	// (0x00056f5b) bg_vkb2_func_pane_cp04_ParamLimits

0x7ec6,	// (0x0005304d) main_ncimui_button_group_pane_ParamLimits

0x7ec6,	// (0x0005304d) main_ncimui_button_group_pane

0x7f26,	// (0x000530ad) main_ncimui_pane_t3_ParamLimits

0x7f26,	// (0x000530ad) main_ncimui_pane_t3

0xaec4,	// (0x0005604b) phacti_button_group_pane

0xb087,	// (0x0005620e) aid_size_list_single_double_ParamLimits

0x8c61,	// (0x00053de8) popup_ezdial_listscroll_window_ParamLimits

0x8c7d,	// (0x00053e04) popup_number_entry_window_cp01_ParamLimits

0x8d16,	// (0x00053e9d) phacti_button_pane_ParamLimits

0x8d16,	// (0x00053e9d) phacti_button_pane

0xb130,	// (0x000562b7) bg_button_pane_cp14

0xb10c,	// (0x00056293) phacti_button_pane_t1

0x8d27,	// (0x00053eae) main_touch_calib_button_pane_ParamLimits

0x8d27,	// (0x00053eae) main_touch_calib_button_pane

0xb86d,	// (0x000569f4) bg_button_pane_cp18_ParamLimits

0xb86d,	// (0x000569f4) bg_button_pane_cp18

0xb11a,	// (0x000562a1) main_touch_calib_button_pane_t1_ParamLimits

0xb11a,	// (0x000562a1) main_touch_calib_button_pane_t1

0xb8bb,	// (0x00056a42) main_touch_calib_button_pane_t2_ParamLimits

0xb8bb,	// (0x00056a42) main_touch_calib_button_pane_t2

0x0001,

0xfe33,	// (0x0005afba) main_touch_calib_button_pane_t_ParamLimits

0xfe33,	// (0x0005afba) main_touch_calib_button_pane_t

0xb130,	// (0x000562b7) cell_ncimui_button_pane

0xb130,	// (0x000562b7) bg_button_pane_cp032

0xb8d9,	// (0x00056a60) cell_ncimui_button_pane_t1

0x9cdc,	// (0x00054e63) image3_infobar_pane_ParamLimits

0x9cdc,	// (0x00054e63) image3_infobar_pane

0x833b,	// (0x000534c2) fs_bigclock_status_pane_ParamLimits

0x833b,	// (0x000534c2) fs_bigclock_status_pane

0x8348,	// (0x000534cf) main_fs_bigclock_clock_pane_ParamLimits

0x8348,	// (0x000534cf) main_fs_bigclock_clock_pane

0x8366,	// (0x000534ed) main_fs_bigclock_indi_pane_ParamLimits

0x8366,	// (0x000534ed) main_fs_bigclock_indi_pane

0x8398,	// (0x0005351f) main_fs_bigclock_swipe_pane_ParamLimits

0x8398,	// (0x0005351f) main_fs_bigclock_swipe_pane

0xb130,	// (0x000562b7) main_fs_clock_dumped_data

0xa9fc,	// (0x00055b83) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa9fc,	// (0x00055b83) list_single_fs_bigclock_indicator_pane_g1

0xaa17,	// (0x00055b9e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xaa17,	// (0x00055b9e) list_single_fs_bigclock_indicator_pane_g2

0xaa31,	// (0x00055bb8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xaa31,	// (0x00055bb8) list_single_fs_bigclock_indicator_pane_g3

0xaa4b,	// (0x00055bd2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xaa4b,	// (0x00055bd2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005adfb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005adfb) list_single_fs_bigclock_indicator_pane_g

0xaa76,	// (0x00055bfd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xaa76,	// (0x00055bfd) list_single_fs_bigclock_indicator_pane_t1

0xaa9e,	// (0x00055c25) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xaa9e,	// (0x00055c25) list_single_fs_bigclock_indicator_pane_t2

0xaac6,	// (0x00055c4d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xaac6,	// (0x00055c4d) list_single_fs_bigclock_indicator_pane_t3

0xaaee,	// (0x00055c75) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xaaee,	// (0x00055c75) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005ae06) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005ae06) list_single_fs_bigclock_indicator_pane_t

0xb8e7,	// (0x00056a6e) image3_infobar_fav_pane_ParamLimits

0xb8e7,	// (0x00056a6e) image3_infobar_fav_pane

0xb8f7,	// (0x00056a7e) image3_infobar_loc_pane_ParamLimits

0xb8f7,	// (0x00056a7e) image3_infobar_loc_pane

0xb90b,	// (0x00056a92) image3_infobar_time_pane_ParamLimits

0xb90b,	// (0x00056a92) image3_infobar_time_pane

0xe1e3,	// (0x0005936a) image3_infobar_time_pane_g1

0xb91b,	// (0x00056aa2) image3_infobar_time_pane_t1

0xe1e3,	// (0x0005936a) image3_infobar_loc_pane_g1

0xb929,	// (0x00056ab0) image3_infobar_loc_pane_g2

0x0001,

0xfe38,	// (0x0005afbf) image3_infobar_loc_pane_g

0xb931,	// (0x00056ab8) image3_infobar_loc_pane_t1

0xe1e3,	// (0x0005936a) image3_infobar_fav_pane_g1

0xb93f,	// (0x00056ac6) image3_infobar_fav_pane_g2

0x0001,

0xfe3d,	// (0x0005afc4) image3_infobar_fav_pane_g

0xb947,	// (0x00056ace) fs_bigclock_status_battery_pane

0xb950,	// (0x00056ad7) fs_bigclock_status_signal_pane

0xb959,	// (0x00056ae0) fs_bigclock_status_title_pane

0xb962,	// (0x00056ae9) fs_bigclock_status_signal_pane_g1

0xb96b,	// (0x00056af2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe42,	// (0x0005afc9) fs_bigclock_status_signal_pane_g

0xb973,	// (0x00056afa) fs_bigclock_status_battery_pane_g1

0xb97c,	// (0x00056b03) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe47,	// (0x0005afce) fs_bigclock_status_battery_pane_g

0xb984,	// (0x00056b0b) fs_bigclock_status_title_pane_t1

0x8d3c,	// (0x00053ec3) main_fs_bigclock_clock_pane_g1

0x8d3c,	// (0x00053ec3) main_fs_bigclock_clock_pane_g2

0x8d4d,	// (0x00053ed4) main_fs_bigclock_clock_pane_g3

0x8d4d,	// (0x00053ed4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4c,	// (0x0005afd3) main_fs_bigclock_clock_pane_g

0x8d60,	// (0x00053ee7) main_fs_bigclock_clock_pane_t1

0x8d76,	// (0x00053efd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe55,	// (0x0005afdc) main_fs_bigclock_clock_pane_t

0xb992,	// (0x00056b19) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb992,	// (0x00056b19) list_single_fs_bigclock_indicator_pane

0xb9a3,	// (0x00056b2a) list_single_fs_bigclock_pane_ParamLimits

0xb9a3,	// (0x00056b2a) list_single_fs_bigclock_pane

0xb9c9,	// (0x00056b50) main_fs_bigclock_indicator_pane_t1

0xb9d8,	// (0x00056b5f) list_single_fs_bigclock_pane_g1

0xb9e0,	// (0x00056b67) list_single_fs_bigclock_pane_t1

0xe1e3,	// (0x0005936a) main_fs_bigclock_swipe_pane_g1

0xba23,	// (0x00056baa) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe66,	// (0x0005afed) main_fs_bigclock_swipe_pane_g

0xba2b,	// (0x00056bb2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xba2b,	// (0x00056bb2) main_fs_bigclock_swipe_pane_t1

0x3183,	// (0x0004e30a) call_type_pane_ParamLimits

0xb130,	// (0x000562b7) main_btmg_pane

0xa33e,	// (0x000554c5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa33e,	// (0x000554c5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd9,	// (0x0005af60) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd9,	// (0x0005af60) list_single_cale_mrui_row_pane_g

0xa3cc,	// (0x00055553) list_recal_vselct_arw_lo_pane

0xb0d7,	// (0x0005625e) list_recal_vselct_arw_up_pane

0xa3d4,	// (0x0005555b) list_recal_vselct_pane

0x8dd0,	// (0x00053f57) btmg_button_pane

0x8dda,	// (0x00053f61) main_btmg_pane_g1

0xb130,	// (0x000562b7) bg_button_pane_cp044

0xba48,	// (0x00056bcf) btmg_button_pane_t1

0xddc7,	// (0x00058f4e) aid_listscroll_gen

0xbdd4,	// (0x00056f5b) main_cntbar_detail_pane

0xae10,	// (0x00055f97) list_cmail_folder_pane

0xd744,	// (0x000588cb) sp_fs_scroll_pane_cp03_ParamLimits

0x0fa1,	// (0x0004c128) list_single_fs_dyc_pane_cp01_ParamLimits

0x0fa1,	// (0x0004c128) list_single_fs_dyc_pane_cp01

0xba56,	// (0x00056bdd) aid_size_cmail_indent

0xa44b,	// (0x000555d2) list_single_dyc_row_pane_cp01

0x8e16,	// (0x00053f9d) cntbar_detail_list_pane_ParamLimits

0x8e16,	// (0x00053f9d) cntbar_detail_list_pane

0x8e62,	// (0x00053fe9) main_cntbar_detail_cont_pane_ParamLimits

0x8e62,	// (0x00053fe9) main_cntbar_detail_cont_pane

0xd744,	// (0x000588cb) scroll_pane_cp032_ParamLimits

0xd744,	// (0x000588cb) scroll_pane_cp032

0x8e76,	// (0x00053ffd) cntbar_detail_list_event_pane_ParamLimits

0x8e76,	// (0x00053ffd) cntbar_detail_list_event_pane

0x8e26,	// (0x00053fad) cntbar_detail_list_shct_pane

0xc212,	// (0x00057399) aid_list_gen

0xba5f,	// (0x00056be6) aid_scroll

0xba68,	// (0x00056bef) aid_size_touch_scroll_bar

0x7798,	// (0x0005291f) aid_list_double

0x7786,	// (0x0005290d) aid_list_single

0x7786,	// (0x0005290d) aid_list_single_lg

0x0fb7,	// (0x0004c13e) aid_list_z_g_a_sm

0x0fbf,	// (0x0004c146) aid_list_z_g_d

0x0fc7,	// (0x0004c14e) aid_txt_z_prm

0x0fd5,	// (0x0004c15c) aid_txt_z_prm_cp01

0x0fe3,	// (0x0004c16a) aid_txt_z_sec

0x8e86,	// (0x0005400d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e86,	// (0x0005400d) main_cntbar_detail_cont_pane_g1

0x8e9a,	// (0x00054021) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e9a,	// (0x00054021) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6b,	// (0x0005aff2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6b,	// (0x0005aff2) main_cntbar_detail_cont_pane_g

0xba71,	// (0x00056bf8) main_cntbar_detail_cont_pane_t1

0xba7f,	// (0x00056c06) main_cntbar_detail_cont_pane_t2

0xba8d,	// (0x00056c14) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe70,	// (0x0005aff7) main_cntbar_detail_cont_pane_t

0x8eaa,	// (0x00054031) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8eaa,	// (0x00054031) cell_cntbar_detail_list_shct_pane

0xba9b,	// (0x00056c22) cntbar_detail_list_shct_pane_g1

0xbaa4,	// (0x00056c2b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe77,	// (0x0005affe) cntbar_detail_list_shct_pane_g

0x8ebe,	// (0x00054045) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ebe,	// (0x00054045) cntbar_detail_list_event_pane_g1

0x8eca,	// (0x00054051) cntbar_detail_list_event_pane_g2_ParamLimits

0x8eca,	// (0x00054051) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7c,	// (0x0005b003) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7c,	// (0x0005b003) cntbar_detail_list_event_pane_g

0x8f36,	// (0x000540bd) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f36,	// (0x000540bd) cntbar_detail_list_event_pane_t1

0x8f4b,	// (0x000540d2) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f4b,	// (0x000540d2) cntbar_detail_list_event_pane_t2

0x0002,

0xfe89,	// (0x0005b010) cntbar_detail_list_event_pane_t_ParamLimits

0xfe89,	// (0x0005b010) cntbar_detail_list_event_pane_t

0xe1e3,	// (0x0005936a) cell_cntbar_detail_list_shct_pane_g1

0xc989,	// (0x00057b10) navi_pane_mv_g3

0xbdd4,	// (0x00056f5b) main_cntbar_detail_pane_ParamLimits

0xb130,	// (0x000562b7) main_notif_wgt_pane

0x9af2,	// (0x00054c79) aid_tch_main_mp4_pane_g4

0x9cd4,	// (0x00054e5b) popup_slider_window_cp02

0xa3c2,	// (0x00055549) list_recal_day_event_pane

0x8de4,	// (0x00053f6b) cntbar_detail_btn_pane_ParamLimits

0x8de4,	// (0x00053f6b) cntbar_detail_btn_pane

0x8dfd,	// (0x00053f84) cntbar_detail_btn_pane_cp01_ParamLimits

0x8dfd,	// (0x00053f84) cntbar_detail_btn_pane_cp01

0x8e26,	// (0x00053fad) cntbar_detail_list_shct_pane_ParamLimits

0x8e36,	// (0x00053fbd) cntbar_detail_pane_g1_ParamLimits

0x8e36,	// (0x00053fbd) cntbar_detail_pane_g1

0x8e46,	// (0x00053fcd) cntbar_detail_pane_t1_ParamLimits

0x8e46,	// (0x00053fcd) cntbar_detail_pane_t1

0x8ed6,	// (0x0005405d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ed6,	// (0x0005405d) cntbar_detail_list_event_pane_g3

0x8eee,	// (0x00054075) cntbar_detail_list_event_pane_g4_ParamLimits

0x8eee,	// (0x00054075) cntbar_detail_list_event_pane_g4

0x8f06,	// (0x0005408d) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f06,	// (0x0005408d) cntbar_detail_list_event_pane_g5

0x8f1e,	// (0x000540a5) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f1e,	// (0x000540a5) cntbar_detail_list_event_pane_g6

0x8f60,	// (0x000540e7) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f60,	// (0x000540e7) cntbar_detail_list_event_pane_t3

0x8f72,	// (0x000540f9) popup_notif_wgt_window_ParamLimits

0x8f72,	// (0x000540f9) popup_notif_wgt_window

0x8f8b,	// (0x00054112) popup_submenu_window_cp01_ParamLimits

0x8f8b,	// (0x00054112) popup_submenu_window_cp01

0xbf6b,	// (0x000570f2) bg_popup_window_pane_cp10

0xbaad,	// (0x00056c34) listscroll_notif_wgt_pane

0xbabf,	// (0x00056c46) list_notif_wgt_window

0xbac8,	// (0x00056c4f) scroll_pane_cp033

0x8fa1,	// (0x00054128) list_notif_wgt_row_pane_ParamLimits

0x8fa1,	// (0x00054128) list_notif_wgt_row_pane

0xbad1,	// (0x00056c58) aid_size_list_notif_wgt_del

0xbade,	// (0x00056c65) list_notif_wgt_row_pane_g1

0xbaea,	// (0x00056c71) list_notif_wgt_row_pane_g2

0xbaf9,	// (0x00056c80) list_notif_wgt_row_pane_g3

0x0002,

0xfe90,	// (0x0005b017) list_notif_wgt_row_pane_g

0xbb06,	// (0x00056c8d) list_notif_wgt_row_pane_t1

0xbb1c,	// (0x00056ca3) list_notif_wgt_row_pane_t2

0xbb2e,	// (0x00056cb5) list_notif_wgt_row_pane_t3

0x0002,

0xfe97,	// (0x0005b01e) list_notif_wgt_row_pane_t

0xee83,	// (0x0005a00a) list_recal_day_event_pane_g1

0xbb40,	// (0x00056cc7) list_recal_day_event_pane_t1

0xb130,	// (0x000562b7) bg_button_pane_cp045

0x8fb1,	// (0x00054138) cntbar_detail_btn_pane_t1

0xdddb,	// (0x00058f62) main_callh_pane_ParamLimits

0xdddb,	// (0x00058f62) main_callh_pane

0xb130,	// (0x000562b7) main_coverflow0_pane

0xb130,	// (0x000562b7) main_wgtman_pane

0x83b0,	// (0x00053537) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83b0,	// (0x00053537) main_fs_bigclock_unlock_btn_pane

0x8902,	// (0x00053a89) bg_button_pane_cp16

0x8912,	// (0x00053a99) cell_tport_appsw_pane_g3

0x8fbf,	// (0x00054146) cf0_flow_pane_ParamLimits

0x8fbf,	// (0x00054146) cf0_flow_pane

0xbb4f,	// (0x00056cd6) listscroll_cf0_pane

0xbb5a,	// (0x00056ce1) main_cf0_pane_g1

0x8fd4,	// (0x0005415b) main_cf0_pane_t1_ParamLimits

0x8fd4,	// (0x0005415b) main_cf0_pane_t1

0x8feb,	// (0x00054172) main_cf0_pane_t2_ParamLimits

0x8feb,	// (0x00054172) main_cf0_pane_t2

0x0001,

0xfea3,	// (0x0005b02a) main_cf0_pane_t_ParamLimits

0xfea3,	// (0x0005b02a) main_cf0_pane_t

0xbb6c,	// (0x00056cf3) scroll_pane_cp11

0x9002,	// (0x00054189) cf0_flow_pane_g1

0x900a,	// (0x00054191) cf0_flow_pane_g2

0x0001,

0xfea8,	// (0x0005b02f) cf0_flow_pane_g

0x9012,	// (0x00054199) cf0_flow_pane_t1

0xb130,	// (0x000562b7) main_call6_pane

0xb130,	// (0x000562b7) main_calllock_pane

0x9020,	// (0x000541a7) call6_btn_grp_pane_ParamLimits

0x9020,	// (0x000541a7) call6_btn_grp_pane

0x903a,	// (0x000541c1) call6_pane_g1_ParamLimits

0x903a,	// (0x000541c1) call6_pane_g1

0x9050,	// (0x000541d7) popup_call6_1st_window_ParamLimits

0x9050,	// (0x000541d7) popup_call6_1st_window

0x9061,	// (0x000541e8) popup_call6_2nd_window_ParamLimits

0x9061,	// (0x000541e8) popup_call6_2nd_window

0x9072,	// (0x000541f9) cell_call6_btn_pane_ParamLimits

0x9072,	// (0x000541f9) cell_call6_btn_pane

0xbf6b,	// (0x000570f2) bg_popup_call2_in_pane_cp03

0xbb77,	// (0x00056cfe) popup_call6_1st_window_g1

0xbb7f,	// (0x00056d06) popup_call6_1st_window_g2

0xbb87,	// (0x00056d0e) popup_call6_1st_window_g3

0x0002,

0xfead,	// (0x0005b034) popup_call6_1st_window_g

0xbb8f,	// (0x00056d16) popup_call6_1st_window_t1

0xbb9e,	// (0x00056d25) popup_call6_1st_window_t2

0xbbac,	// (0x00056d33) popup_call6_1st_window_t3

0x0002,

0xfeb4,	// (0x0005b03b) popup_call6_1st_window_t

0xbf6b,	// (0x000570f2) bg_popup_call2_in_pane_cp04

0xbb77,	// (0x00056cfe) popup_call6_2nd_window_g1

0xbb7f,	// (0x00056d06) popup_call6_2nd_window_g2

0xbb87,	// (0x00056d0e) popup_call6_2nd_window_g3

0x0002,

0xfead,	// (0x0005b034) popup_call6_2nd_window_g

0xbb8f,	// (0x00056d16) popup_call6_2nd_window_t1

0xb130,	// (0x000562b7) bg_button_pane_cp15

0xbbba,	// (0x00056d41) cell_call6_btn_pane_g1

0xa454,	// (0x000555db) cell_call6_btn_pane_t1

0x9085,	// (0x0005420c) listscroll_wgtman_pane_ParamLimits

0x9085,	// (0x0005420c) listscroll_wgtman_pane

0x90a6,	// (0x0005422d) wgtman_btn_pane_ParamLimits

0x90a6,	// (0x0005422d) wgtman_btn_pane

0xc790,	// (0x00057917) aid_scroll_copy1

0xbbc3,	// (0x00056d4a) list_wgtman_pane

0x90e9,	// (0x00054270) wgtman_btn_pane_g1_ParamLimits

0x90e9,	// (0x00054270) wgtman_btn_pane_g1

0x9115,	// (0x0005429c) wgtman_btn_pane_t1_ParamLimits

0x9115,	// (0x0005429c) wgtman_btn_pane_t1

0xbbcd,	// (0x00056d54) wgtman_btn_pane_t2_ParamLimits

0xbbcd,	// (0x00056d54) wgtman_btn_pane_t2

0x0001,

0xfebb,	// (0x0005b042) wgtman_btn_pane_t_ParamLimits

0xfebb,	// (0x0005b042) wgtman_btn_pane_t

0x9152,	// (0x000542d9) listrow_wgtman_pane_ParamLimits

0x9152,	// (0x000542d9) listrow_wgtman_pane

0x9164,	// (0x000542eb) listrow_wgtman_pane_g1

0x9171,	// (0x000542f8) listrow_wgtman_pane_g2

0x0001,

0xfec0,	// (0x0005b047) listrow_wgtman_pane_g

0x0ff1,	// (0x0004c178) listrow_wgtman_pane_t1

0x1009,	// (0x0004c190) listrow_wgtman_pane_t2

0x0001,

0xfec5,	// (0x0005b04c) listrow_wgtman_pane_t

0x102f,	// (0x0004c1b6) wait_bar_pane_cp09

0xbbe4,	// (0x00056d6b) main_calllock_btn_pane

0xbbee,	// (0x00056d75) main_calllock_pane_g1

0xb130,	// (0x000562b7) bg_button_pane_cp17

0xbbba,	// (0x00056d41) main_calllock_btn_pane_g1

0xbbfa,	// (0x00056d81) main_calllock_btn_pane_t1

0xb130,	// (0x000562b7) main_dialer3_pane

0xb130,	// (0x000562b7) main_fmrd2_pane

0xe1e3,	// (0x0005936a) main_fs_bigclock_unlock_btn_pane_g1

0x9197,	// (0x0005431e) main_fs_bigclock_unlock_btn_pane_t1

0x91a5,	// (0x0005432c) area_fmrd2_info_pane_ParamLimits

0x91a5,	// (0x0005432c) area_fmrd2_info_pane

0x91b6,	// (0x0005433d) area_fmrd2_visual_pane_ParamLimits

0x91b6,	// (0x0005433d) area_fmrd2_visual_pane

0x91c4,	// (0x0005434b) fmrd2_indi_pane_ParamLimits

0x91c4,	// (0x0005434b) fmrd2_indi_pane

0x91d1,	// (0x00054358) area_fmrd2_visual_pane_g1

0x91d9,	// (0x00054360) area_fmrd2_visual_pane_t1

0x91e9,	// (0x00054370) area_fmrd2_visual_pane_t2

0x91f9,	// (0x00054380) area_fmrd2_visual_pane_t3

0x0002,

0xfecf,	// (0x0005b056) area_fmrd2_visual_pane_t

0x9209,	// (0x00054390) area_fmrd2_info_pane_g1

0x9211,	// (0x00054398) area_fmrd2_info_pane_t1

0x9221,	// (0x000543a8) area_fmrd2_info_pane_t2

0x9231,	// (0x000543b8) area_fmrd2_info_pane_t3

0x9241,	// (0x000543c8) area_fmrd2_info_pane_t4

0x0003,

0xfed6,	// (0x0005b05d) area_fmrd2_info_pane_t

0x924f,	// (0x000543d6) fmrd2_indi_pane_t1

0x925f,	// (0x000543e6) fmrd2_indi_pane_t2

0x926f,	// (0x000543f6) fmrd2_indi_pane_t3

0x0002,

0xfedf,	// (0x0005b066) fmrd2_indi_pane_t

0xaa5a,	// (0x00055be1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xaa5a,	// (0x00055be1) list_single_fs_bigclock_indicator_pane_g5

0xab0b,	// (0x00055c92) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xab0b,	// (0x00055c92) list_single_fs_bigclock_indicator_pane_t5

0x8a85,	// (0x00053c0c) aid_cell_bcale_month_pane_ParamLimits

0x8a85,	// (0x00053c0c) aid_cell_bcale_month_pane

0x8aa3,	// (0x00053c2a) bcale_month_pane_ParamLimits

0x8aa3,	// (0x00053c2a) bcale_month_pane

0x8ac7,	// (0x00053c4e) bcale_preview_pane_ParamLimits

0x8ac7,	// (0x00053c4e) bcale_preview_pane

0xb9e0,	// (0x00056b67) list_single_fs_bigclock_pane_t1_ParamLimits

0xb9ff,	// (0x00056b86) list_single_fs_bigclock_pane_t2_ParamLimits

0xb9ff,	// (0x00056b86) list_single_fs_bigclock_pane_t2

0x0001,

0xfe61,	// (0x0005afe8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe61,	// (0x0005afe8) list_single_fs_bigclock_pane_t

0x918f,	// (0x00054316) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeca,	// (0x0005b051) main_fs_bigclock_unlock_btn_pane_g

0x927f,	// (0x00054406) aid_dia3_key_size_ParamLimits

0x927f,	// (0x00054406) aid_dia3_key_size

0x928e,	// (0x00054415) aid_dia3_listrow_size_ParamLimits

0x928e,	// (0x00054415) aid_dia3_listrow_size

0x92a3,	// (0x0005442a) dia3_keypad_fun_pane_ParamLimits

0x92a3,	// (0x0005442a) dia3_keypad_fun_pane

0x92bf,	// (0x00054446) dia3_keypad_num_pane_ParamLimits

0x92bf,	// (0x00054446) dia3_keypad_num_pane

0x92da,	// (0x00054461) dia3_listscroll_pane_ParamLimits

0x92da,	// (0x00054461) dia3_listscroll_pane

0x92ed,	// (0x00054474) dia3_numentry_pane_ParamLimits

0x92ed,	// (0x00054474) dia3_numentry_pane

0xbc09,	// (0x00056d90) dia3_list_pane

0xbc14,	// (0x00056d9b) scroll_pane_cp12

0xb130,	// (0x000562b7) bg_dia3_numentry_pane

0x9301,	// (0x00054488) dia3_numentry_pane_t1

0x9310,	// (0x00054497) cell_dia3_key_num_pane

0x9318,	// (0x0005449f) cell_dia3_key0_fun_pane_ParamLimits

0x9318,	// (0x0005449f) cell_dia3_key0_fun_pane

0x932c,	// (0x000544b3) cell_dia3_key1_fun_pane_ParamLimits

0x932c,	// (0x000544b3) cell_dia3_key1_fun_pane

0x9344,	// (0x000544cb) dia3_listrow_pane

0xa7ad,	// (0x00055934) bg_dia3_numentry_pane_g1

0xb130,	// (0x000562b7) bg_button_pane_cp21

0xbc1f,	// (0x00056da6) cell_dia3_key_num_pane_t1

0xbc2d,	// (0x00056db4) cell_dia3_key_num_pane_t2

0xbc3c,	// (0x00056dc3) cell_dia3_key_num_pane_t3

0xbc4b,	// (0x00056dd2) cell_dia3_key_num_pane_t4

0x0003,

0xfee6,	// (0x0005b06d) cell_dia3_key_num_pane_t

0xb130,	// (0x000562b7) bg_button_pane_cp19

0x9356,	// (0x000544dd) cell_dia3_key0_fun_pane_g1

0xb130,	// (0x000562b7) bg_button_pane_cp20

0x935e,	// (0x000544e5) cell_dia3_key1_fun_pane_g1

0x9366,	// (0x000544ed) area_left_week_number_pane

0x9372,	// (0x000544f9) area_top_day_name_pane

0x9385,	// (0x0005450c) frame_month_view_pane

0xbc5a,	// (0x00056de1) grid_month_view_pane

0x9398,	// (0x0005451f) cell_top_day_name_pane_ParamLimits

0x9398,	// (0x0005451f) cell_top_day_name_pane

0x93c5,	// (0x0005454c) cell_area_left_week_number_pane_ParamLimits

0x93c5,	// (0x0005454c) cell_area_left_week_number_pane

0x93d9,	// (0x00054560) cell_month_view_pane_ParamLimits

0x93d9,	// (0x00054560) cell_month_view_pane

0xbc68,	// (0x00056def) frm_month_g1

0x9406,	// (0x0005458d) frm_month_g2

0x9419,	// (0x000545a0) frm_month_g3

0x942c,	// (0x000545b3) frm_month_g4

0x943f,	// (0x000545c6) frm_month_g5

0x9452,	// (0x000545d9) frm_month_g6

0x9465,	// (0x000545ec) frm_month_g7

0xbc75,	// (0x00056dfc) frm_month_g8

0x9478,	// (0x000545ff) frm_month_g9

0x9488,	// (0x0005460f) frm_month_g10

0x9498,	// (0x0005461f) frm_month_g11

0x94a8,	// (0x0005462f) frm_month_g12

0x94ba,	// (0x00054641) frm_month_g13

0x94cc,	// (0x00054653) frm_month_g14

0x94e0,	// (0x00054667) frm_month_g15

0x94f4,	// (0x0005467b) frm_month_g16

0x000f,

0xfeef,	// (0x0005b076) frm_month_g

0xbc82,	// (0x00056e09) cell_top_day_name_pane_t1

0x9508,	// (0x0005468f) cell_area_left_week_number_pane_g1

0x9514,	// (0x0005469b) cell_area_left_week_number_pane_t1

0xe44f,	// (0x000595d6) cell_month_view_pane_g1

0x9527,	// (0x000546ae) cell_month_view_pane_t1

0xb130,	// (0x000562b7) main_fps_pane

0xad28,	// (0x00055eaf) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xad28,	// (0x00055eaf) cmail_ddmenu_btn02_pane_cp1

0xad44,	// (0x00055ecb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xad44,	// (0x00055ecb) cmail_ddmenu_btn02_pane_cp2

0x8caf,	// (0x00053e36) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8caf,	// (0x00053e36) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe14,	// (0x0005af9b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe14,	// (0x0005af9b) cmail_ddmenu_btn02_pane_g

0x8cce,	// (0x00053e55) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8cce,	// (0x00053e55) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe19,	// (0x0005afa0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe19,	// (0x0005afa0) cmail_ddmenu_btn02_pane_t

0x953a,	// (0x000546c1) fps_text_pane_ParamLimits

0x953a,	// (0x000546c1) fps_text_pane

0x9551,	// (0x000546d8) main_fps_pane_g1_ParamLimits

0x9551,	// (0x000546d8) main_fps_pane_g1

0x956b,	// (0x000546f2) wait_bar_pane_cp010_ParamLimits

0x956b,	// (0x000546f2) wait_bar_pane_cp010

0x957c,	// (0x00054703) fps_text_pane_t1_ParamLimits

0x957c,	// (0x00054703) fps_text_pane_t1

0xb8a9,	// (0x00056a30) cam4_image_uncrop_pane_g1

0xb8b2,	// (0x00056a39) cam4_image_uncrop_pane_g2

0x666b,	// (0x000517f2) cam4_image_uncrop_pane_g3

0x6674,	// (0x000517fb) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005aa75) cam4_image_uncrop_pane_g

0x9344,	// (0x000544cb) dia3_listrow_pane_ParamLimits

0xb130,	// (0x000562b7) main_phob2_pane

0x88d3,	// (0x00053a5a) cell_tport_appsw_pane_cp02_ParamLimits

0x88d3,	// (0x00053a5a) cell_tport_appsw_pane_cp02

0x88e7,	// (0x00053a6e) cell_tport_appsw_pane_cp03_ParamLimits

0x88e7,	// (0x00053a6e) cell_tport_appsw_pane_cp03

0xb130,	// (0x000562b7) phob2_contact_card_pane

0xb130,	// (0x000562b7) phob2_listscroll_pane

0xbc95,	// (0x00056e1c) phob2_list_pane

0xbc9d,	// (0x00056e24) scroll_pane_cp034

0x9594,	// (0x0005471b) phob2_cc_data_pane_ParamLimits

0x9594,	// (0x0005471b) phob2_cc_data_pane

0x95b3,	// (0x0005473a) phob2_cc_listscroll_pane_ParamLimits

0x95b3,	// (0x0005473a) phob2_cc_listscroll_pane

0x9152,	// (0x000542d9) list_double_large_graphic_phob2_pane_ParamLimits

0x9152,	// (0x000542d9) list_double_large_graphic_phob2_pane

0x95d1,	// (0x00054758) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x95d1,	// (0x00054758) list_double_large_graphic_phob2_pane_g1

0x1041,	// (0x0004c1c8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1041,	// (0x0004c1c8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff10,	// (0x0005b097) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff10,	// (0x0005b097) list_double_large_graphic_phob2_pane_g

0x104d,	// (0x0004c1d4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x104d,	// (0x0004c1d4) list_double_large_graphic_phob2_pane_t1

0x1062,	// (0x0004c1e9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1062,	// (0x0004c1e9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff15,	// (0x0005b09c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff15,	// (0x0005b09c) list_double_large_graphic_phob2_pane_t

0xb130,	// (0x000562b7) list_highlight_pane_cp024

0x95e7,	// (0x0005476e) phob2_cc_button_pane

0x95ef,	// (0x00054776) phob2_cc_data_pane_g1_ParamLimits

0x95ef,	// (0x00054776) phob2_cc_data_pane_g1

0x9604,	// (0x0005478b) phob2_cc_data_pane_g2_ParamLimits

0x9604,	// (0x0005478b) phob2_cc_data_pane_g2

0x0001,

0xff1a,	// (0x0005b0a1) phob2_cc_data_pane_g_ParamLimits

0xff1a,	// (0x0005b0a1) phob2_cc_data_pane_g

0x9614,	// (0x0005479b) phob2_cc_data_pane_t1_ParamLimits

0x9614,	// (0x0005479b) phob2_cc_data_pane_t1

0x962c,	// (0x000547b3) phob2_cc_data_pane_t2_ParamLimits

0x962c,	// (0x000547b3) phob2_cc_data_pane_t2

0x9644,	// (0x000547cb) phob2_cc_data_pane_t3_ParamLimits

0x9644,	// (0x000547cb) phob2_cc_data_pane_t3

0x0002,

0xff1f,	// (0x0005b0a6) phob2_cc_data_pane_t_ParamLimits

0xff1f,	// (0x0005b0a6) phob2_cc_data_pane_t

0xbca5,	// (0x00056e2c) phob2_cc_list_pane_ParamLimits

0xbca5,	// (0x00056e2c) phob2_cc_list_pane

0xef2c,	// (0x0005a0b3) scroll_pane_cp035_ParamLimits

0xef2c,	// (0x0005a0b3) scroll_pane_cp035

0xbdd4,	// (0x00056f5b) bg_button_pane_cp033

0xbcb1,	// (0x00056e38) phob2_cc_button_pane_g1

0xbcbd,	// (0x00056e44) phob2_cc_button_pane_t1

0xbcd2,	// (0x00056e59) phob2_cc_button_pane_t2

0x0001,

0xff26,	// (0x0005b0ad) phob2_cc_button_pane_t

0x965c,	// (0x000547e3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x965c,	// (0x000547e3) list_double_large_graphic_phob2_cc_pane

0x966e,	// (0x000547f5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x966e,	// (0x000547f5) list_double_large_graphic_phob2_cc_pane_g1

0x1074,	// (0x0004c1fb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1074,	// (0x0004c1fb) list_double_large_graphic_phob2_cc_pane_g2

0x1080,	// (0x0004c207) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1080,	// (0x0004c207) list_double_large_graphic_phob2_cc_pane_g3

0x108c,	// (0x0004c213) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x108c,	// (0x0004c213) list_double_large_graphic_phob2_cc_pane_g4

0xa463,	// (0x000555ea) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa463,	// (0x000555ea) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2b,	// (0x0005b0b2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2b,	// (0x0005b0b2) list_double_large_graphic_phob2_cc_pane_g

0x1098,	// (0x0004c21f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1098,	// (0x0004c21f) list_double_large_graphic_phob2_cc_pane_t1

0x10c1,	// (0x0004c248) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10c1,	// (0x0004c248) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff36,	// (0x0005b0bd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff36,	// (0x0005b0bd) list_double_large_graphic_phob2_cc_pane_t

0xbce4,	// (0x00056e6b) list_highlight_pane_cp025_ParamLimits

0xbce4,	// (0x00056e6b) list_highlight_pane_cp025

0xbdd4,	// (0x00056f5b) bg_button_pane_cp033_ParamLimits

0xbcb1,	// (0x00056e38) phob2_cc_button_pane_g1_ParamLimits

0xbcbd,	// (0x00056e44) phob2_cc_button_pane_t1_ParamLimits

0xbcd2,	// (0x00056e59) phob2_cc_button_pane_t2_ParamLimits

0xff26,	// (0x0005b0ad) phob2_cc_button_pane_t_ParamLimits

0x1333,	// (0x0004c4ba) popup_wgtman_window

0xed56,	// (0x00059edd) scroll_pane_cp038

0x90cb,	// (0x00054252) wgtman_btn_pane_cp_01_ParamLimits

0x90cb,	// (0x00054252) wgtman_btn_pane_cp_01

0xbcf2,	// (0x00056e79) wgtman_content_pane

0xbcfb,	// (0x00056e82) wgtman_heading_pane

0xb130,	// (0x000562b7) bg_heading_pane_cp02

0xbd04,	// (0x00056e8b) wgtman_heading_pane_g1

0xbd0c,	// (0x00056e93) wgtman_heading_pane_t1

0xbd1a,	// (0x00056ea1) scroll_pane_cp036

0xbd22,	// (0x00056ea9) wgtman_list_pane

0xbd2a,	// (0x00056eb1) wgtman_list_pane_t1_ParamLimits

0xbd2a,	// (0x00056eb1) wgtman_list_pane_t1

0x9d60,	// (0x00054ee7) cam4_grid_pane

0x065e,	// (0x0004b7e5) bg_button_pane_cp015_ParamLimits

0x72e7,	// (0x0005246e) bg_button_pane_cp016_ParamLimits

0x72fa,	// (0x00052481) bg_button_pane_cp017_ParamLimits

0x06a4,	// (0x0004b82b) popup_vitu2_query_window_g3_ParamLimits

0x06a4,	// (0x0004b82b) popup_vitu2_query_window_g3

0x071f,	// (0x0004b8a6) popup_vitu2_query_window_t6_ParamLimits

0x071f,	// (0x0004b8a6) popup_vitu2_query_window_t6

0x074a,	// (0x0004b8d1) popup_vitu2_query_window_t7_ParamLimits

0x074a,	// (0x0004b8d1) popup_vitu2_query_window_t7

0xb8a9,	// (0x00056a30) cam4_grid_pane_g1

0xb8b2,	// (0x00056a39) cam4_grid_pane_g2

0xbd44,	// (0x00056ecb) cam4_grid_pane_g3

0xbd4d,	// (0x00056ed4) cam4_grid_pane_g4

0x0003,

0xff3b,	// (0x0005b0c2) cam4_grid_pane_g

0x216a,	// (0x0004d2f1) aid_placing_vt_slider_lsc_ParamLimits

0x2475,	// (0x0004d5fc) vidtel_button_pane_ParamLimits

0x2475,	// (0x0004d5fc) vidtel_button_pane

0xb130,	// (0x000562b7) bg_button_pane_cp034

0xbd58,	// (0x00056edf) vidtel_button_pane_g1

0xbd60,	// (0x00056ee7) vidtel_button_pane_t1

0xee73,	// (0x00059ffa) aid_size_vtel_slider_touch

0xef2c,	// (0x0005a0b3) scroll_pane_cp039

0x80a4,	// (0x0005322b) ncim_query_button_pane_cp01_ParamLimits

0x80c3,	// (0x0005324a) ncimui_query_pane_g1_ParamLimits

0xbdd4,	// (0x00056f5b) input_focus_pane_cp012_ParamLimits

0xa7eb,	// (0x00055972) ncim_query_entry_pane_t1_ParamLimits

0xef2c,	// (0x0005a0b3) scroll_pane_cp039_ParamLimits

0xc874,	// (0x000579fb) navi_pane_bcale_mc_g1

0xc87c,	// (0x00057a03) navi_pane_bcale_mc_t1

0xad8d,	// (0x00055f14) main_sp_fs_email_pane_g1

0xad99,	// (0x00055f20) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005ae6c) main_sp_fs_email_pane_g

0xafe1,	// (0x00056168) list_single_cale_mrui_row_pane_g3_ParamLimits

0xafe1,	// (0x00056168) list_single_cale_mrui_row_pane_g3

0x0f97,	// (0x0004c11e) list_single_recal_day_pane_g5_event_pane

0xa41f,	// (0x000555a6) list_single_recal_day_pane_g7

0xbd76,	// (0x00056efd) list_recal_day_event_pane_cp01

0xbd7f,	// (0x00056f06) list_recal_vselct_arw_lo_pane_cp01

0xbd87,	// (0x00056f0e) list_recal_vselct_arw_up_pane_cp01

0xbd8f,	// (0x00056f16) list_recal_vselct_pane_cp01

0xee83,	// (0x0005a00a) list_recal_day_event_pane_cp01_g1

0xa46f,	// (0x000555f6) list_recal_day_event_pane_cp01_t1

0xa427,	// (0x000555ae) list_single_recal_day_pane_t1_ParamLimits

0xa439,	// (0x000555c0) list_single_recal_day_pane_t2_ParamLimits

0xfe29,	// (0x0005afb0) list_single_recal_day_pane_t_ParamLimits

0xb7a8,	// (0x0005692f) bg_notes_pane_ParamLimits

0xb84b,	// (0x000569d2) list_notes_pane_ParamLimits

0x167c,	// (0x0004c803) scroll_pane_cp06_ParamLimits

0xb86d,	// (0x000569f4) main_notes_pane_ParamLimits

0xb130,	// (0x000562b7) main_welc_pane

0x967a,	// (0x00054801) main_welc_body_pane_ParamLimits

0x967a,	// (0x00054801) main_welc_body_pane

0x9698,	// (0x0005481f) main_welc_opti_pane_ParamLimits

0x9698,	// (0x0005481f) main_welc_opti_pane

0x96dd,	// (0x00054864) main_welc_pane_t1_ParamLimits

0x96dd,	// (0x00054864) main_welc_pane_t1

0x96fb,	// (0x00054882) main_welc_body_row_pane_ParamLimits

0x96fb,	// (0x00054882) main_welc_body_row_pane

0xf092,	// (0x0005a219) main_welc_opti_row_pane_ParamLimits

0xf092,	// (0x0005a219) main_welc_opti_row_pane

0xbd99,	// (0x00056f20) main_welc_opti_row_pane_g1

0x970f,	// (0x00054896) main_welc_opti_row_pane_t1

0xbda1,	// (0x00056f28) main_welc_body_row_pane_t1

0xbab7,	// (0x00056c3e) popup_notif_wgt_heading_pane

0xbad1,	// (0x00056c58) aid_size_list_notif_wgt_del_ParamLimits

0xbade,	// (0x00056c65) list_notif_wgt_row_pane_g1_ParamLimits

0xbaea,	// (0x00056c71) list_notif_wgt_row_pane_g2_ParamLimits

0xbaf9,	// (0x00056c80) list_notif_wgt_row_pane_g3_ParamLimits

0xfe90,	// (0x0005b017) list_notif_wgt_row_pane_g_ParamLimits

0xbb06,	// (0x00056c8d) list_notif_wgt_row_pane_t1_ParamLimits

0xbb1c,	// (0x00056ca3) list_notif_wgt_row_pane_t2_ParamLimits

0xbb2e,	// (0x00056cb5) list_notif_wgt_row_pane_t3_ParamLimits

0xfe97,	// (0x0005b01e) list_notif_wgt_row_pane_t_ParamLimits

0x9164,	// (0x000542eb) listrow_wgtman_pane_g1_ParamLimits

0x9171,	// (0x000542f8) listrow_wgtman_pane_g2_ParamLimits

0xfec0,	// (0x0005b047) listrow_wgtman_pane_g_ParamLimits

0x0ff1,	// (0x0004c178) listrow_wgtman_pane_t1_ParamLimits

0x1009,	// (0x0004c190) listrow_wgtman_pane_t2_ParamLimits

0xfec5,	// (0x0005b04c) listrow_wgtman_pane_t_ParamLimits

0x102f,	// (0x0004c1b6) wait_bar_pane_cp09_ParamLimits

0xb130,	// (0x000562b7) bg_popup_heading_pane_cp02

0xbdb0,	// (0x00056f37) popup_notif_wgt_heading_pane_g1

0xbdb8,	// (0x00056f3f) popup_notif_wgt_heading_pane_t1

0xb130,	// (0x000562b7) main_vids_pane

0xb130,	// (0x000562b7) vids_listscroll_pane

0x971e,	// (0x000548a5) scroll_pane_cp040

0xb130,	// (0x000562b7) vids_list_pane

0x9729,	// (0x000548b0) vids_list_double_pane_ParamLimits

0x9729,	// (0x000548b0) vids_list_double_pane

0x973a,	// (0x000548c1) vids_list_double_pane_g1

0x9743,	// (0x000548ca) vids_list_double_pane_t1

0x9753,	// (0x000548da) vids_list_double_pane_t2

0x0001,

0xff49,	// (0x0005b0d0) vids_list_double_pane_t

0xbdd4,	// (0x00056f5b) main_ncimui_pane_ParamLimits

0x7eda,	// (0x00053061) main_ncimui_pane_g1_ParamLimits

0x7ee6,	// (0x0005306d) main_ncimui_pane_g2_ParamLimits

0x7ee6,	// (0x0005306d) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005ad71) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005ad71) main_ncimui_pane_g

0x96b3,	// (0x0005483a) main_welc_pane_g1_ParamLimits

0x96b3,	// (0x0005483a) main_welc_pane_g1

0x96c8,	// (0x0005484f) main_welc_pane_g2_ParamLimits

0x96c8,	// (0x0005484f) main_welc_pane_g2

0x0001,

0xff44,	// (0x0005b0cb) main_welc_pane_g_ParamLimits

0xff44,	// (0x0005b0cb) main_welc_pane_g

0xb7a8,	// (0x0005692f) listscroll_mce_pane_ParamLimits

0xc9c9,	// (0x00057b50) wait_bar_pane_cp10

0xddcf,	// (0x00058f56) main_cale_day_pane_ParamLimits

0xddcf,	// (0x00058f56) main_cale_week_pane_ParamLimits

0xb7a8,	// (0x0005692f) main_messa_pane_ParamLimits

0x59a7,	// (0x00050b2e) main_clock2_btn_pane_ParamLimits

0x59a7,	// (0x00050b2e) main_clock2_btn_pane

0xe5f7,	// (0x0005977e) main_clock2_btn_pane_cp01_ParamLimits

0xe5f7,	// (0x0005977e) main_clock2_btn_pane_cp01

0xafb2,	// (0x00056139) list_cale_mrui_pane_ParamLimits

0xbb64,	// (0x00056ceb) main_cf0_pane_g2

0x0001,

0xfe9e,	// (0x0005b025) main_cf0_pane_g

0x9366,	// (0x000544ed) area_left_week_number_pane_ParamLimits

0x9372,	// (0x000544f9) area_top_day_name_pane_ParamLimits

0x9385,	// (0x0005450c) frame_month_view_pane_ParamLimits

0xbc5a,	// (0x00056de1) grid_month_view_pane_ParamLimits

0xbc68,	// (0x00056def) frm_month_g1_ParamLimits

0x9406,	// (0x0005458d) frm_month_g2_ParamLimits

0x9419,	// (0x000545a0) frm_month_g3_ParamLimits

0x942c,	// (0x000545b3) frm_month_g4_ParamLimits

0x943f,	// (0x000545c6) frm_month_g5_ParamLimits

0x9452,	// (0x000545d9) frm_month_g6_ParamLimits

0x9465,	// (0x000545ec) frm_month_g7_ParamLimits

0xbc75,	// (0x00056dfc) frm_month_g8_ParamLimits

0x9478,	// (0x000545ff) frm_month_g9_ParamLimits

0x9488,	// (0x0005460f) frm_month_g10_ParamLimits

0x9498,	// (0x0005461f) frm_month_g11_ParamLimits

0x94a8,	// (0x0005462f) frm_month_g12_ParamLimits

0x94ba,	// (0x00054641) frm_month_g13_ParamLimits

0x94cc,	// (0x00054653) frm_month_g14_ParamLimits

0x94e0,	// (0x00054667) frm_month_g15_ParamLimits

0x94f4,	// (0x0005467b) frm_month_g16_ParamLimits

0xfeef,	// (0x0005b076) frm_month_g_ParamLimits

0xbc82,	// (0x00056e09) cell_top_day_name_pane_t1_ParamLimits

0x9508,	// (0x0005468f) cell_area_left_week_number_pane_g1_ParamLimits

0x9514,	// (0x0005469b) cell_area_left_week_number_pane_t1_ParamLimits

0xe44f,	// (0x000595d6) cell_month_view_pane_g1_ParamLimits

0x9527,	// (0x000546ae) cell_month_view_pane_t1_ParamLimits

0xb7a0,	// (0x00056927) main_clock2_btn_pane_g1

0xbdc6,	// (0x00056f4d) main_clock2_btn_pane_t1

0xbdd4,	// (0x00056f5b) listscroll_cmail_pane_ParamLimits

0xad8d,	// (0x00055f14) main_sp_fs_email_pane_g1_ParamLimits

0xad99,	// (0x00055f20) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005ae6c) main_sp_fs_email_pane_g_ParamLimits

0xb0b8,	// (0x0005623f) list_recal_day_pane_ParamLimits

0xb0c9,	// (0x00056250) mian_recal_day_pane_t1

0x0ba5,	// (0x0004bd2c) list_single_dyc_row_text_pane_t4_ParamLimits

0x0ba5,	// (0x0004bd2c) list_single_dyc_row_text_pane_t4

0x0bee,	// (0x0004bd75) list_single_dyc_row_text_pane_t5_ParamLimits

0x0bee,	// (0x0004bd75) list_single_dyc_row_text_pane_t5

0x87be,	// (0x00053945) list_single_dyc_row_text_pane_t6_ParamLimits

0x87be,	// (0x00053945) list_single_dyc_row_text_pane_t6

0x30c9,	// (0x0004e250) aid_mgn_list_cale_time_pane

0xbdd4,	// (0x00056f5b) main_gallery2_pane_ParamLimits

0xe60d,	// (0x00059794) main_clock2_pane_cp01_t1

0xe61d,	// (0x000597a4) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0005a94b) main_clock2_pane_cp01_t

0x1a28,	// (0x0004cbaf) cale_week_scroll_pane_g16_ParamLimits

0x1a28,	// (0x0004cbaf) cale_week_scroll_pane_g16

0xbf6b,	// (0x000570f2) vorec_slider_pane

0xbd60,	// (0x00056ee7) vidtel_button_pane_t1_ParamLimits

0x8d3c,	// (0x00053ec3) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d3c,	// (0x00053ec3) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d4d,	// (0x00053ed4) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d4d,	// (0x00053ed4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4c,	// (0x0005afd3) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d60,	// (0x00053ee7) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d76,	// (0x00053efd) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe55,	// (0x0005afdc) main_fs_bigclock_clock_pane_t_ParamLimits

0x519b,	// (0x00050322) main_mup3_lyrics_pane_ParamLimits

0x519b,	// (0x00050322) main_mup3_lyrics_pane

0x9789,	// (0x00054910) main_mup3_lyrics_pane_t1_ParamLimits

0x9789,	// (0x00054910) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
