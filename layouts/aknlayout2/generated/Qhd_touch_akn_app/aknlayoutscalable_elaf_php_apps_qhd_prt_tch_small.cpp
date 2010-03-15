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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00037719 };

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
0x5373,	// (0x0003ca8c) Screen

0x537f,	// (0x0003ca98) application_window

0x53db,	// (0x0003caf4) area_bottom_pane_ParamLimits

0x53db,	// (0x0003caf4) area_bottom_pane

0x5434,	// (0x0003cb4d) area_top_pane_ParamLimits

0x5434,	// (0x0003cb4d) area_top_pane

0x5498,	// (0x0003cbb1) call_video_uplink_pane_ParamLimits

0x5498,	// (0x0003cbb1) call_video_uplink_pane

0x54d7,	// (0x0003cbf0) main_pane_ParamLimits

0x54d7,	// (0x0003cbf0) main_pane

0x242d,	// (0x00039b46) context_pane

0x88ce,	// (0x0003ffe7) navi_pane

0x88ee,	// (0x00040007) popup_cale_events_window_ParamLimits

0x88ee,	// (0x00040007) popup_cale_events_window

0x2440,	// (0x00039b59) popup_mup_playback_window

0x8906,	// (0x0004001f) signal_pane

0x045d,	// (0x00037b76) main_browser_pane

0x0fa1,	// (0x000386ba) main_burst_pane

0x875a,	// (0x0003fe73) main_calc_pane

0x2413,	// (0x00039b2c) main_cale_day_pane

0x5c14,	// (0x0003d32d) main_cale_month_pane

0x2413,	// (0x00039b2c) main_cale_week_pane

0x0fa1,	// (0x000386ba) main_call_pane

0x013d,	// (0x00037856) main_call_poc_pane

0x0fa1,	// (0x000386ba) main_camera_pane

0x0fa1,	// (0x000386ba) main_chi_dic_pane

0x0e16,	// (0x0003852f) main_clock_pane

0x013d,	// (0x00037856) main_fmradio_pane

0x0fa1,	// (0x000386ba) main_graph_messa_pane

0x013d,	// (0x00037856) main_help_pane

0x045d,	// (0x00037b76) main_im_pane

0x0398,	// (0x00037ab1) main_image_pane_ParamLimits

0x0398,	// (0x00037ab1) main_image_pane

0x013d,	// (0x00037856) main_location2_pane

0x0fa1,	// (0x000386ba) main_location_pane

0x0398,	// (0x00037ab1) main_messa_pane

0x013d,	// (0x00037856) main_mp2_pane

0x0fa1,	// (0x000386ba) main_mp_pane

0x013d,	// (0x00037856) main_msg_pane

0x013d,	// (0x00037856) main_mup_eq_pane

0x013d,	// (0x00037856) main_mup_pane

0x045d,	// (0x00037b76) main_notes_pane

0x013d,	// (0x00037856) main_pec_pane

0x013d,	// (0x00037856) main_phob_pane

0x013d,	// (0x00037856) main_pinb_pane

0x013d,	// (0x00037856) main_postcard_pane

0x013d,	// (0x00037856) main_qdial_pane

0x0fa1,	// (0x000386ba) main_skin_pane

0x013d,	// (0x00037856) main_smil2_pane

0x0fa1,	// (0x000386ba) main_smil_pane

0x0fa1,	// (0x000386ba) main_video_pane

0x0fa1,	// (0x000386ba) main_video_tele_pane

0x0398,	// (0x00037ab1) main_viewer_pane_ParamLimits

0x0398,	// (0x00037ab1) main_viewer_pane

0x0fa1,	// (0x000386ba) main_vorec_pane

0x8798,	// (0x0003feb1) popup_blid_sat_info_window_ParamLimits

0x8798,	// (0x0003feb1) popup_blid_sat_info_window

0x87b8,	// (0x0003fed1) popup_dyc_status_message_window_ParamLimits

0x87b8,	// (0x0003fed1) popup_dyc_status_message_window

0x87c8,	// (0x0003fee1) popup_grid_large_graphic_window_ParamLimits

0x87c8,	// (0x0003fee1) popup_grid_large_graphic_window

0x8859,	// (0x0003ff72) popup_loc_request_window_ParamLimits

0x8859,	// (0x0003ff72) popup_loc_request_window

0x88a6,	// (0x0003ffbf) popup_wml_address_window_ParamLimits

0x88a6,	// (0x0003ffbf) popup_wml_address_window

0x8632,	// (0x0003fd4b) call_muted_g1

0x82f4,	// (0x0003fa0d) popup_call_audio_conf_window_ParamLimits

0x82f4,	// (0x0003fa0d) popup_call_audio_conf_window

0x8642,	// (0x0003fd5b) popup_call_audio_first_window_ParamLimits

0x8642,	// (0x0003fd5b) popup_call_audio_first_window

0x8682,	// (0x0003fd9b) popup_call_audio_in_window_ParamLimits

0x8682,	// (0x0003fd9b) popup_call_audio_in_window

0x86a6,	// (0x0003fdbf) popup_call_audio_out_window_ParamLimits

0x86a6,	// (0x0003fdbf) popup_call_audio_out_window

0x86c8,	// (0x0003fde1) popup_call_audio_second_window_ParamLimits

0x86c8,	// (0x0003fde1) popup_call_audio_second_window

0x86f8,	// (0x0003fe11) popup_call_audio_wait_window_ParamLimits

0x86f8,	// (0x0003fe11) popup_call_audio_wait_window

0x8719,	// (0x0003fe32) popup_number_entry_window_ParamLimits

0x8719,	// (0x0003fe32) popup_number_entry_window

0xecef,	// (0x00046408) bg_popup_call_pane_cp05_ParamLimits

0xecef,	// (0x00046408) bg_popup_call_pane_cp05

0xed0f,	// (0x00046428) popup_number_entry_window_t1

0xed22,	// (0x0004643b) popup_number_entry_window_t2

0xed34,	// (0x0004644d) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000467ec) popup_number_entry_window_t

0xed46,	// (0x0004645f) text_title_cp2

0xed59,	// (0x00046472) bg_popup_call_pane_cp_ParamLimits

0xed59,	// (0x00046472) bg_popup_call_pane_cp

0xed67,	// (0x00046480) call_thumbnail_pane

0xed6f,	// (0x00046488) popup_call_audio_in_window_g1_ParamLimits

0xed6f,	// (0x00046488) popup_call_audio_in_window_g1

0xed7b,	// (0x00046494) popup_call_audio_in_window_g2_ParamLimits

0xed7b,	// (0x00046494) popup_call_audio_in_window_g2

0xed87,	// (0x000464a0) popup_call_audio_in_window_g3_ParamLimits

0xed87,	// (0x000464a0) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000467f5) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000467f5) popup_call_audio_in_window_g

0xed93,	// (0x000464ac) popup_call_audio_in_window_t1_ParamLimits

0xed93,	// (0x000464ac) popup_call_audio_in_window_t1

0xedaf,	// (0x000464c8) popup_call_audio_in_window_t2_ParamLimits

0xedaf,	// (0x000464c8) popup_call_audio_in_window_t2

0xedcb,	// (0x000464e4) popup_call_audio_in_window_t3_ParamLimits

0xedcb,	// (0x000464e4) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000467fc) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000467fc) popup_call_audio_in_window_t

0xed59,	// (0x00046472) bg_popup_call_pane_cp01_ParamLimits

0xed59,	// (0x00046472) bg_popup_call_pane_cp01

0xed67,	// (0x00046480) call_thumbnail_pane_cp02

0xedde,	// (0x000464f7) call_type_pane_cp022

0xede6,	// (0x000464ff) popup_call_audio_out_window_g1_ParamLimits

0xede6,	// (0x000464ff) popup_call_audio_out_window_g1

0xedf8,	// (0x00046511) popup_call_audio_out_window_g2_ParamLimits

0xedf8,	// (0x00046511) popup_call_audio_out_window_g2

0xee04,	// (0x0004651d) popup_call_audio_out_window_g3_ParamLimits

0xee04,	// (0x0004651d) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x00046803) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x00046803) popup_call_audio_out_window_g

0xee16,	// (0x0004652f) popup_call_audio_out_window_t1_ParamLimits

0xee16,	// (0x0004652f) popup_call_audio_out_window_t1

0xee2e,	// (0x00046547) popup_call_audio_out_window_t2_ParamLimits

0xee2e,	// (0x00046547) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0004680a) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0004680a) popup_call_audio_out_window_t

0xee43,	// (0x0004655c) bg_popup_call_pane_ParamLimits

0xee43,	// (0x0004655c) bg_popup_call_pane

0x56d8,	// (0x0003cdf1) call_thumbnail_pane_cp_ParamLimits

0x56d8,	// (0x0003cdf1) call_thumbnail_pane_cp

0xeec7,	// (0x000465e0) call_type_pane_cp01_ParamLimits

0xeec7,	// (0x000465e0) call_type_pane_cp01

0xef0b,	// (0x00046624) popup_call_audio_first_window_g1_ParamLimits

0xef0b,	// (0x00046624) popup_call_audio_first_window_g1

0xef57,	// (0x00046670) popup_call_audio_first_window_g2_ParamLimits

0xef57,	// (0x00046670) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0004680f) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0004680f) popup_call_audio_first_window_g

0xef9b,	// (0x000466b4) popup_call_audio_first_window_t1_ParamLimits

0xef9b,	// (0x000466b4) popup_call_audio_first_window_t1

0xf047,	// (0x00046760) popup_call_audio_first_window_t4_ParamLimits

0xf047,	// (0x00046760) popup_call_audio_first_window_t4

0x010e,	// (0x00037827) popup_call_audio_first_window_t5_ParamLimits

0x010e,	// (0x00037827) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x00046814) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x00046814) popup_call_audio_first_window_t

0x013d,	// (0x00037856) bg_popup_call_pane_cp02

0x0147,	// (0x00037860) call_type_pane_cp023

0x014f,	// (0x00037868) popup_call_audio_wait_window_g1

0x0157,	// (0x00037870) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0004681b) popup_call_audio_wait_window_g

0x015f,	// (0x00037878) popup_call_audio_wait_window_t3

0x016d,	// (0x00037886) bg_popup_call_pane_cp03_ParamLimits

0x016d,	// (0x00037886) bg_popup_call_pane_cp03

0x01cd,	// (0x000378e6) call_thumbnail_pane_cp011_ParamLimits

0x01cd,	// (0x000378e6) call_thumbnail_pane_cp011

0x01d9,	// (0x000378f2) call_type_pane_cp034_ParamLimits

0x01d9,	// (0x000378f2) call_type_pane_cp034

0x0215,	// (0x0003792e) popup_call_audio_second_window_g1_ParamLimits

0x0215,	// (0x0003792e) popup_call_audio_second_window_g1

0x0251,	// (0x0003796a) popup_call_audio_second_window_g2_ParamLimits

0x0251,	// (0x0003796a) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x00046820) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x00046820) popup_call_audio_second_window_g

0x028d,	// (0x000379a6) popup_call_audio_second_window_t1_ParamLimits

0x028d,	// (0x000379a6) popup_call_audio_second_window_t1

0x030e,	// (0x00037a27) popup_call_audio_second_window_t2_ParamLimits

0x030e,	// (0x00037a27) popup_call_audio_second_window_t2

0x0344,	// (0x00037a5d) popup_call_audio_second_window_t3_ParamLimits

0x0344,	// (0x00037a5d) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x00046825) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x00046825) popup_call_audio_second_window_t

0x013d,	// (0x00037856) bg_popup_call_pane_cp04

0x037a,	// (0x00037a93) list_conf_pane

0x0382,	// (0x00037a9b) popup_call_audio_conf_window_t1

0x0390,	// (0x00037aa9) call_thumbnail_pane_g1

0x0398,	// (0x00037ab1) bg_pinb_pane_ParamLimits

0x0398,	// (0x00037ab1) bg_pinb_pane

0x03a6,	// (0x00037abf) find_pinb_pane

0x03af,	// (0x00037ac8) listscroll_pinb_pane_ParamLimits

0x03af,	// (0x00037ac8) listscroll_pinb_pane

0x03be,	// (0x00037ad7) pinb_bg_pane_g1

0x56fc,	// (0x0003ce15) pinb_bg_pane_g2

0x5708,	// (0x0003ce21) pinb_bg_pane_g3

0x5714,	// (0x0003ce2d) pinb_bg_pane_g4

0x5720,	// (0x0003ce39) pinb_bg_pane_g5

0x572c,	// (0x0003ce45) pinb_bg_pane_g6

0x5737,	// (0x0003ce50) pinb_bg_pane_g7

0x5742,	// (0x0003ce5b) pinb_bg_pane_g8

0x574d,	// (0x0003ce66) pinb_bg_pane_g9

0x5757,	// (0x0003ce70) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0004682c) pinb_bg_pane_g

0x5774,	// (0x0003ce8d) grid_pinb_pane

0x577f,	// (0x0003ce98) list_pinb_pane

0x578a,	// (0x0003cea3) scroll_pane_cp01_ParamLimits

0x578a,	// (0x0003cea3) scroll_pane_cp01

0x03c8,	// (0x00037ae1) find_pinb_pane_g1_ParamLimits

0x03c8,	// (0x00037ae1) find_pinb_pane_g1

0x03e0,	// (0x00037af9) find_pinb_pane_t1

0x03f2,	// (0x00037b0b) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x00046846) find_pinb_pane_t

0x0407,	// (0x00037b20) input_focus_pane_cp01_ParamLimits

0x0407,	// (0x00037b20) input_focus_pane_cp01

0x579c,	// (0x0003ceb5) cell_pinb_pane_ParamLimits

0x579c,	// (0x0003ceb5) cell_pinb_pane

0x57c4,	// (0x0003cedd) cell_pinb_pane_g1_ParamLimits

0x57c4,	// (0x0003cedd) cell_pinb_pane_g1

0x57d9,	// (0x0003cef2) cell_pinb_pane_g2_ParamLimits

0x57d9,	// (0x0003cef2) cell_pinb_pane_g2

0x0413,	// (0x00037b2c) cell_pinb_pane_g3_ParamLimits

0x0413,	// (0x00037b2c) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0004684b) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0004684b) cell_pinb_pane_g

0x013d,	// (0x00037856) grid_highlight_pane_cp01

0x57e5,	// (0x0003cefe) list_pinb_item_pane_ParamLimits

0x57e5,	// (0x0003cefe) list_pinb_item_pane

0x013d,	// (0x00037856) list_highlight_pane_cp02

0x580b,	// (0x0003cf24) list_pinb_item_pane_g1_ParamLimits

0x580b,	// (0x0003cf24) list_pinb_item_pane_g1

0x5818,	// (0x0003cf31) list_pinb_item_pane_g2_ParamLimits

0x5818,	// (0x0003cf31) list_pinb_item_pane_g2

0x5824,	// (0x0003cf3d) list_pinb_item_pane_g3_ParamLimits

0x5824,	// (0x0003cf3d) list_pinb_item_pane_g3

0x5835,	// (0x0003cf4e) list_pinb_item_pane_g4_ParamLimits

0x5835,	// (0x0003cf4e) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x00046852) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x00046852) list_pinb_item_pane_g

0x5841,	// (0x0003cf5a) list_pinb_item_pane_t1_ParamLimits

0x5841,	// (0x0003cf5a) list_pinb_item_pane_t1

0x5872,	// (0x0003cf8b) calc_display_pane

0x5890,	// (0x0003cfa9) calc_paper_pane

0x58ac,	// (0x0003cfc5) grid_calc_pane

0x013d,	// (0x00037856) bg_list_pane_cp01

0x58d8,	// (0x0003cff1) clock_g1

0x58e0,	// (0x0003cff9) clock_g2

0x0001,

0xf142,	// (0x0004685b) clock_g

0x58ea,	// (0x0003d003) clock_t1_ParamLimits

0x58ea,	// (0x0003d003) clock_t1

0x58ff,	// (0x0003d018) clock_t2_ParamLimits

0x58ff,	// (0x0003d018) clock_t2

0x5911,	// (0x0003d02a) clock_t3_ParamLimits

0x5911,	// (0x0003d02a) clock_t3

0x5923,	// (0x0003d03c) clock_t4_ParamLimits

0x5923,	// (0x0003d03c) clock_t4

0x5935,	// (0x0003d04e) clock_t5_ParamLimits

0x5935,	// (0x0003d04e) clock_t5

0x594a,	// (0x0003d063) clock_t6_ParamLimits

0x594a,	// (0x0003d063) clock_t6

0x595c,	// (0x0003d075) clock_t7_ParamLimits

0x595c,	// (0x0003d075) clock_t7

0x596e,	// (0x0003d087) clock_t8_ParamLimits

0x596e,	// (0x0003d087) clock_t8

0x5984,	// (0x0003d09d) clock_t9_ParamLimits

0x5984,	// (0x0003d09d) clock_t9

0x0008,

0xf147,	// (0x00046860) clock_t_ParamLimits

0xf147,	// (0x00046860) clock_t

0x041f,	// (0x00037b38) popup_clock_analogue_window_cp02

0x041f,	// (0x00037b38) popup_clock_digital_window_cp01

0x0427,	// (0x00037b40) listscroll_help_pane

0x013d,	// (0x00037856) phob_pre_status_pane

0x0431,	// (0x00037b4a) grid_qdial_pane

0x0398,	// (0x00037ab1) listscroll_mce_pane

0x0398,	// (0x00037ab1) bg_notes_pane

0x043b,	// (0x00037b54) list_notes_pane

0x599a,	// (0x0003d0b3) scroll_pane_cp06

0x0449,	// (0x00037b62) bg_calc_paper_pane

0x59a9,	// (0x0003d0c2) list_calc_pane

0x045d,	// (0x00037b76) bg_calc_display_pane

0x59c3,	// (0x0003d0dc) calc_display_pane_t1

0x59d8,	// (0x0003d0f1) calc_display_pane_t2

0x59ed,	// (0x0003d106) calc_display_pane_t3

0x0002,

0xf15a,	// (0x00046873) calc_display_pane_t

0x59ff,	// (0x0003d118) cell_calc_pane_ParamLimits

0x59ff,	// (0x0003d118) cell_calc_pane

0x0469,	// (0x00037b82) bg_calc_paper_pane_g1

0x0481,	// (0x00037b9a) bg_calc_paper_pane_g2

0x0475,	// (0x00037b8e) bg_calc_paper_pane_g3

0x0499,	// (0x00037bb2) bg_calc_paper_pane_g4

0x048d,	// (0x00037ba6) bg_calc_paper_pane_g5

0x5a2c,	// (0x0003d145) bg_calc_paper_pane_g6

0x5a3d,	// (0x0003d156) bg_calc_paper_pane_g7

0x5a4e,	// (0x0003d167) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0004687a) bg_calc_paper_pane_g

0x5a5f,	// (0x0003d178) calc_bg_paper_pane_g9

0x5a70,	// (0x0003d189) list_calc_item_pane_ParamLimits

0x5a70,	// (0x0003d189) list_calc_item_pane

0x04a5,	// (0x00037bbe) list_calc_item_pane_g1

0x5a9f,	// (0x0003d1b8) list_calc_item_pane_t1_ParamLimits

0x5a9f,	// (0x0003d1b8) list_calc_item_pane_t1

0x5ab1,	// (0x0003d1ca) list_calc_item_pane_t2_ParamLimits

0x5ab1,	// (0x0003d1ca) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0004688b) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0004688b) list_calc_item_pane_t

0x04b2,	// (0x00037bcb) cell_calc_pane_g1

0x04bc,	// (0x00037bd5) grid_highlight_pane_cp02

0x2850,	// (0x00039f69) bg_calc_display_pane_g1

0x5ae1,	// (0x0003d1fa) bg_calc_display_pane_g2

0x5aeb,	// (0x0003d204) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x00046895) bg_calc_display_pane_g

0x5af4,	// (0x0003d20d) cell_qdial_pane_ParamLimits

0x5af4,	// (0x0003d20d) cell_qdial_pane

0x5b08,	// (0x0003d221) cell_qdial_pane_g1_ParamLimits

0x5b08,	// (0x0003d221) cell_qdial_pane_g1

0x5b15,	// (0x0003d22e) cell_qdial_pane_g2_ParamLimits

0x5b15,	// (0x0003d22e) cell_qdial_pane_g2

0x04de,	// (0x00037bf7) cell_qdial_pane_g3_ParamLimits

0x04de,	// (0x00037bf7) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0004689c) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0004689c) cell_qdial_pane_g

0x5b33,	// (0x0003d24c) cell_qdial_pane_t1_ParamLimits

0x5b33,	// (0x0003d24c) cell_qdial_pane_t1

0x5b4b,	// (0x0003d264) cell_qdial_pane_t2_ParamLimits

0x5b4b,	// (0x0003d264) cell_qdial_pane_t2

0x5b5e,	// (0x0003d277) cell_qdial_pane_t3_ParamLimits

0x5b5e,	// (0x0003d277) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000468a5) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000468a5) cell_qdial_pane_t

0x013d,	// (0x00037856) grid_highlight_pane_cp04

0x04ea,	// (0x00037c03) thumbnail_qdial_pane_ParamLimits

0x04ea,	// (0x00037c03) thumbnail_qdial_pane

0x0546,	// (0x00037c5f) list_help_pane

0x054f,	// (0x00037c68) scroll_pane_cp02

0x5b71,	// (0x0003d28a) help_list_pane_t1_ParamLimits

0x5b71,	// (0x0003d28a) help_list_pane_t1

0x5ba4,	// (0x0003d2bd) bg_notes_pane_g2

0x5bac,	// (0x0003d2c5) bg_notes_pane_g3

0x5bb4,	// (0x0003d2cd) notes_bg_pane_g1

0x5bbc,	// (0x0003d2d5) notes_bg_pane_g4

0x5bc4,	// (0x0003d2dd) notes_bg_pane_g5

0x5bcc,	// (0x0003d2e5) notes_bg_pane_g6

0x5bd4,	// (0x0003d2ed) notes_bg_pane_g7

0x5bdc,	// (0x0003d2f5) notes_bg_pane_g8

0x5be4,	// (0x0003d2fd) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000468c3) notes_bg_pane_g

0x5bec,	// (0x0003d305) list_notes_text_pane_ParamLimits

0x5bec,	// (0x0003d305) list_notes_text_pane

0x0558,	// (0x00037c71) list_notes_text_pane_g1

0x40ed,	// (0x0003b806) list_notes_text_pane_t1

0x5c14,	// (0x0003d32d) listscroll_cale_week_pane

0x5c39,	// (0x0003d352) bg_cale_heading_pane

0x057b,	// (0x00037c94) bg_cale_pane_cp01

0x5c5b,	// (0x0003d374) cale_week_corner_pane

0x5c75,	// (0x0003d38e) cale_week_day_heading_pane

0x5c97,	// (0x0003d3b0) cale_week_scroll_pane_g1

0x5cb4,	// (0x0003d3cd) cale_week_scroll_pane_g2

0x5cc7,	// (0x0003d3e0) cale_week_scroll_pane_g3

0x5cda,	// (0x0003d3f3) cale_week_scroll_pane_g4

0x5ced,	// (0x0003d406) cale_week_scroll_pane_g5

0x5d00,	// (0x0003d419) cale_week_scroll_pane_g6

0x5d13,	// (0x0003d42c) cale_week_scroll_pane_g7

0x5d26,	// (0x0003d43f) cale_week_scroll_pane_g8

0x5d3b,	// (0x0003d454) cale_week_scroll_pane_g9

0x5d4e,	// (0x0003d467) cale_week_scroll_pane_g10

0x5d61,	// (0x0003d47a) cale_week_scroll_pane_g11

0x5d74,	// (0x0003d48d) cale_week_scroll_pane_g12

0x5d8b,	// (0x0003d4a4) cale_week_scroll_pane_g13

0x5da6,	// (0x0003d4bf) cale_week_scroll_pane_g14

0x5dc1,	// (0x0003d4da) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000468d2) cale_week_scroll_pane_g

0x5ddc,	// (0x0003d4f5) cale_week_time_pane

0x5df1,	// (0x0003d50a) grid_cale_week_pane

0x05ab,	// (0x00037cc4) scroll_pane_cp08

0x5e10,	// (0x0003d529) cell_cale_week_pane_ParamLimits

0x5e10,	// (0x0003d529) cell_cale_week_pane

0x5e72,	// (0x0003d58b) cale_week_day_heading_pane_t1

0x5ead,	// (0x0003d5c6) cale_week_day_heading_pane_t2

0x5ee8,	// (0x0003d601) cale_week_day_heading_pane_t3

0x5f23,	// (0x0003d63c) cale_week_day_heading_pane_t4

0x5f5e,	// (0x0003d677) cale_week_day_heading_pane_t5

0x5f99,	// (0x0003d6b2) cale_week_day_heading_pane_t6

0x5fd4,	// (0x0003d6ed) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000468f1) cale_week_day_heading_pane_t

0x05c8,	// (0x00037ce1) bg_cale_side_pane

0x600f,	// (0x0003d728) cale_week_time_pane_t1

0x6029,	// (0x0003d742) cale_week_time_pane_t2

0x6043,	// (0x0003d75c) cale_week_time_pane_t3

0x605d,	// (0x0003d776) cale_week_time_pane_t4

0x6077,	// (0x0003d790) cale_week_time_pane_t5

0x6091,	// (0x0003d7aa) cale_week_time_pane_t6

0x60b1,	// (0x0003d7ca) cale_week_time_pane_t7

0x60d3,	// (0x0003d7ec) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x00046900) cale_week_time_pane_t

0x60f7,	// (0x0003d810) cell_cale_week_pane_g2

0x610a,	// (0x0003d823) cell_cale_week_pane_g3_ParamLimits

0x610a,	// (0x0003d823) cell_cale_week_pane_g3

0x05d6,	// (0x00037cef) grid_highlight_pane_cp07

0x05de,	// (0x00037cf7) listscroll_gms_pane

0x05e8,	// (0x00037d01) grid_gms_pane

0x05f1,	// (0x00037d0a) listscroll_gms_pane_g1

0x05f9,	// (0x00037d12) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x00046911) listscroll_gms_pane_g

0x6122,	// (0x0003d83b) scroll_pane_cp010

0x612d,	// (0x0003d846) cell_gms_pane_ParamLimits

0x612d,	// (0x0003d846) cell_gms_pane

0x6140,	// (0x0003d859) cell_gms_pane_g1

0x0601,	// (0x00037d1a) cell_gms_pane_g2

0x0609,	// (0x00037d22) cell_gms_pane_g3

0x0612,	// (0x00037d2b) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x00046916) cell_gms_pane_g

0x061b,	// (0x00037d34) grid_highlight_pane_cp09

0x85da,	// (0x0003fcf3) phob_pre_status_pane_g1

0x85e2,	// (0x0003fcfb) phob_pre_status_pane_g2

0x85ea,	// (0x0003fd03) phob_pre_status_pane_g3

0x85f2,	// (0x0003fd0b) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x00046d05) phob_pre_status_pane_g

0x8602,	// (0x0003fd1b) phob_pre_status_pane_t1

0x8612,	// (0x0003fd2b) phob_pre_status_pane_t2

0x8622,	// (0x0003fd3b) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x00046d10) phob_pre_status_pane_t

0x013d,	// (0x00037856) bg_list_pane_cp05

0x6150,	// (0x0003d869) grid_vorec_pane

0x615c,	// (0x0003d875) vorec_t1

0x616a,	// (0x0003d883) vorec_t2

0x6178,	// (0x0003d891) vorec_t3

0x6186,	// (0x0003d89f) vorec_t4

0x6194,	// (0x0003d8ad) vorec_t5

0x61a2,	// (0x0003d8bb) vorec_t6

0x0006,

0xf206,	// (0x0004691f) vorec_t

0x61be,	// (0x0003d8d7) wait_bar_pane_cp01

0x61c6,	// (0x0003d8df) cell_vorec_pane_ParamLimits

0x61c6,	// (0x0003d8df) cell_vorec_pane

0x0623,	// (0x00037d3c) cell_vorec_pane_g1

0x013d,	// (0x00037856) grid_highlight_pane_cp05

0x61e9,	// (0x0003d902) cams_zoom_pane

0x61f5,	// (0x0003d90e) image_vga_pane

0x6204,	// (0x0003d91d) main_camera_pane_g1

0x6212,	// (0x0003d92b) main_camera_pane_g2

0x621e,	// (0x0003d937) main_camera_pane_g3

0x622a,	// (0x0003d943) main_camera_pane_g4

0x6236,	// (0x0003d94f) main_camera_pane_g5

0x6242,	// (0x0003d95b) main_camera_pane_g6

0x624e,	// (0x0003d967) main_camera_pane_g7

0x0007,

0xf215,	// (0x0004692e) main_camera_pane_g

0x625a,	// (0x0003d973) main_camera_pane_t1

0x626c,	// (0x0003d985) main_camera_pane_t2

0x0001,

0xf226,	// (0x0004693f) main_camera_pane_t

0x628d,	// (0x0003d9a6) cams_zoom_pane_cp_ParamLimits

0x628d,	// (0x0003d9a6) cams_zoom_pane_cp

0x62b1,	// (0x0003d9ca) image_cif_pane_ParamLimits

0x62b1,	// (0x0003d9ca) image_cif_pane

0x62cf,	// (0x0003d9e8) image_subqcif_pane

0x62d7,	// (0x0003d9f0) main_video_pane_g1_ParamLimits

0x62d7,	// (0x0003d9f0) main_video_pane_g1

0x62f7,	// (0x0003da10) main_video_pane_g2_ParamLimits

0x62f7,	// (0x0003da10) main_video_pane_g2

0x6327,	// (0x0003da40) main_video_pane_g3_ParamLimits

0x6327,	// (0x0003da40) main_video_pane_g3

0x6350,	// (0x0003da69) main_video_pane_g4_ParamLimits

0x6350,	// (0x0003da69) main_video_pane_g4

0x6379,	// (0x0003da92) main_video_pane_g5_ParamLimits

0x6379,	// (0x0003da92) main_video_pane_g5

0x0639,	// (0x00037d52) main_video_pane_g6_ParamLimits

0x0639,	// (0x00037d52) main_video_pane_g6

0x0006,

0xf22b,	// (0x00046944) main_video_pane_g_ParamLimits

0xf22b,	// (0x00046944) main_video_pane_g

0x639b,	// (0x0003dab4) main_video_pane_t1_ParamLimits

0x639b,	// (0x0003dab4) main_video_pane_t1

0x0653,	// (0x00037d6c) cams_zoom_pane_g1

0x065c,	// (0x00037d75) cams_zoom_pane_g2

0x0665,	// (0x00037d7e) cams_zoom_pane_g3

0x066e,	// (0x00037d87) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x00046953) cams_zoom_pane_g

0x63e5,	// (0x0003dafe) grid_cams_pane

0x63f3,	// (0x0003db0c) linegrid_cams_pane

0x6401,	// (0x0003db1a) cell_cams_pane_ParamLimits

0x6401,	// (0x0003db1a) cell_cams_pane

0x0677,	// (0x00037d90) cams_burst_image_pane

0x067f,	// (0x00037d98) cell_cams_pane_g1

0x013d,	// (0x00037856) grid_highlight_pane_cp03

0x04b2,	// (0x00037bcb) mp_bg_pane_g1

0x013d,	// (0x00037856) bg_list_pane_cp03

0x2338,	// (0x00039a51) bg_mp_pane

0x2340,	// (0x00039a59) grid_mp_pane

0x2348,	// (0x00039a61) media_player_g1

0x2350,	// (0x00039a69) media_player_t1

0x235e,	// (0x00039a77) media_player_t2

0x236c,	// (0x00039a85) media_player_t3

0x237a,	// (0x00039a93) media_player_t4

0x2388,	// (0x00039aa1) media_player_t5

0x2396,	// (0x00039aaf) media_player_t6

0x23a4,	// (0x00039abd) media_player_t7

0x0006,

0xf5d6,	// (0x00046cef) media_player_t

0x23b2,	// (0x00039acb) wait_bar_pane_cp02

0xf5bb,	// (0x00046cd4) main_usb_pane_t

0x85d1,	// (0x0003fcea) cell_mp_pane

0x04b2,	// (0x00037bcb) cell_mp_pane_g1

0x013d,	// (0x00037856) grid_highlight_pane_cp06

0x0687,	// (0x00037da0) grid_skin_colour_pane

0x068f,	// (0x00037da8) list_highlight_pane_cp03

0x6414,	// (0x0003db2d) skin_g1

0x0697,	// (0x00037db0) skin_t1

0x06a6,	// (0x00037dbf) skin_t2

0x0001,

0xf26f,	// (0x00046988) skin_t

0x641e,	// (0x0003db37) cell_skin_colour_pane_ParamLimits

0x641e,	// (0x0003db37) cell_skin_colour_pane

0x06b4,	// (0x00037dcd) cell_skin_colour_pane_g1

0x64a2,	// (0x0003dbbb) call_video_g1_ParamLimits

0x64a2,	// (0x0003dbbb) call_video_g1

0x64b2,	// (0x0003dbcb) call_video_g2_ParamLimits

0x64b2,	// (0x0003dbcb) call_video_g2

0x0001,

0xf274,	// (0x0004698d) call_video_g_ParamLimits

0xf274,	// (0x0004698d) call_video_g

0x650c,	// (0x0003dc25) call_video_uplink_pane_cp1_ParamLimits

0x650c,	// (0x0003dc25) call_video_uplink_pane_cp1

0x06c6,	// (0x00037ddf) call_video_uplink_pane_cp2

0x65d8,	// (0x0003dcf1) video_down_crop_pane_ParamLimits

0x65d8,	// (0x0003dcf1) video_down_crop_pane

0x66d6,	// (0x0003ddef) video_down_pane_ParamLimits

0x66d6,	// (0x0003ddef) video_down_pane

0x06ce,	// (0x00037de7) video_down_subqcif_pane_ParamLimits

0x06ce,	// (0x00037de7) video_down_subqcif_pane

0x06e6,	// (0x00037dff) video_down_subqcif_pane_cp_ParamLimits

0x06e6,	// (0x00037dff) video_down_subqcif_pane_cp

0x070c,	// (0x00037e25) im_reading_pane_ParamLimits

0x070c,	// (0x00037e25) im_reading_pane

0x67f8,	// (0x0003df11) im_writing_pane_ParamLimits

0x67f8,	// (0x0003df11) im_writing_pane

0x6816,	// (0x0003df2f) im_reading_pane_t1

0x0726,	// (0x00037e3f) list_im_pane

0x0737,	// (0x00037e50) scroll_pane_cp07

0x686a,	// (0x0003df83) im_writing_pane_t1_ParamLimits

0x686a,	// (0x0003df83) im_writing_pane_t1

0x0750,	// (0x00037e69) im_writing_pane_t2_ParamLimits

0x0750,	// (0x00037e69) im_writing_pane_t2

0x0001,

0xf27e,	// (0x00046997) im_writing_pane_t_ParamLimits

0xf27e,	// (0x00046997) im_writing_pane_t

0x013d,	// (0x00037856) input_focus_pane_cp04

0x013d,	// (0x00037856) input_focus_pane_cp05

0x687f,	// (0x0003df98) list_im_single_pane_ParamLimits

0x687f,	// (0x0003df98) list_im_single_pane

0x68a3,	// (0x0003dfbc) list_single_im_pane_t1

0x8595,	// (0x0003fcae) blid_accuracy_pane

0x859d,	// (0x0003fcb6) blid_compass_pane

0x85a7,	// (0x0003fcc0) main_location_t1

0x85b5,	// (0x0003fcce) main_location_t2

0x85c3,	// (0x0003fcdc) main_location_t3

0x0002,

0xf5e5,	// (0x00046cfe) main_location_t

0x013d,	// (0x00037856) aid_levels_location

0x04b2,	// (0x00037bcb) blid_accuracy_pane_g1

0x04b2,	// (0x00037bcb) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000469f9) blid_accuracy_pane_g

0x0798,	// (0x00037eb1) wml_content_pane

0x07d6,	// (0x00037eef) wml_button_pane_ParamLimits

0x07d6,	// (0x00037eef) wml_button_pane

0x68b2,	// (0x0003dfcb) wml_list_single_large_pane_ParamLimits

0x68b2,	// (0x0003dfcb) wml_list_single_large_pane

0x68dc,	// (0x0003dff5) wml_list_single_medium_pane_ParamLimits

0x68dc,	// (0x0003dff5) wml_list_single_medium_pane

0x690d,	// (0x0003e026) wml_list_single_small_pane_ParamLimits

0x690d,	// (0x0003e026) wml_list_single_small_pane

0x07ea,	// (0x00037f03) wml_selection_box_pane_ParamLimits

0x07ea,	// (0x00037f03) wml_selection_box_pane

0x07fd,	// (0x00037f16) wml_list_single_pane_t1

0x080c,	// (0x00037f25) wml_list_single_medium_pane_t1

0x081b,	// (0x00037f34) wml_list_single_large_pane_t1

0x082a,	// (0x00037f43) input_focus_pane_cp02_ParamLimits

0x082a,	// (0x00037f43) input_focus_pane_cp02

0x083d,	// (0x00037f56) wml_selection_box_pane_g1

0x0846,	// (0x00037f5f) wml_selection_box_pane_t1_ParamLimits

0x0846,	// (0x00037f5f) wml_selection_box_pane_t1

0x0398,	// (0x00037ab1) bg_wml_button_pane_ParamLimits

0x0398,	// (0x00037ab1) bg_wml_button_pane

0x085e,	// (0x00037f77) wml_button_pane_g1

0x0866,	// (0x00037f7f) wml_button_pane_t1

0x085e,	// (0x00037f77) wml_button_bg_pane_g1

0x0876,	// (0x00037f8f) wml_button_bg_pane_g2

0x087e,	// (0x00037f97) wml_button_bg_pane_g3

0x0886,	// (0x00037f9f) wml_button_bg_pane_g4

0x088e,	// (0x00037fa7) wml_button_bg_pane_g5

0x0896,	// (0x00037faf) wml_button_bg_pane_g6

0x089e,	// (0x00037fb7) wml_button_bg_pane_g7

0x08a6,	// (0x00037fbf) wml_button_bg_pane_g8

0x08ae,	// (0x00037fc7) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0004699c) wml_button_bg_pane_g

0x6947,	// (0x0003e060) bg_list_pane_cp02

0x08b6,	// (0x00037fcf) mce_header_pane_ParamLimits

0x08b6,	// (0x00037fcf) mce_header_pane

0x08cc,	// (0x00037fe5) mce_icon_pane

0x08cc,	// (0x00037fe5) mce_image_pane

0x08d5,	// (0x00037fee) mce_text_pane_ParamLimits

0x08d5,	// (0x00037fee) mce_text_pane

0x6951,	// (0x0003e06a) scroll_pane_cp03

0x07ce,	// (0x00037ee7) scroll_pane_cp04

0x08e8,	// (0x00038001) scroll_pane_cp05_ParamLimits

0x08e8,	// (0x00038001) scroll_pane_cp05

0x695b,	// (0x0003e074) mce_header_field_pane_ParamLimits

0x695b,	// (0x0003e074) mce_header_field_pane

0x697b,	// (0x0003e094) mce_header_field_pane_2_ParamLimits

0x697b,	// (0x0003e094) mce_header_field_pane_2

0x6991,	// (0x0003e0aa) mce_header_field_pane_3

0x6999,	// (0x0003e0b2) list_single_mce_message_pane_ParamLimits

0x6999,	// (0x0003e0b2) list_single_mce_message_pane

0x69c4,	// (0x0003e0dd) list_single_mce_smart_pane_ParamLimits

0x69c4,	// (0x0003e0dd) list_single_mce_smart_pane

0x08f4,	// (0x0003800d) input_focus_pane_cp03

0x08fd,	// (0x00038016) list_header_data_pane

0x69fa,	// (0x0003e113) mce_header_field_pane_t1

0x6a08,	// (0x0003e121) list_single_mce_header_pane_ParamLimits

0x6a08,	// (0x0003e121) list_single_mce_header_pane

0x0905,	// (0x0003801e) list_single_mce_header_pane_t1

0x0914,	// (0x0003802d) list_single_mce_message_pane_g1

0x091c,	// (0x00038035) list_single_mce_message_pane_t1

0x6a5a,	// (0x0003e173) bg_cale_heading_pane_cp01_ParamLimits

0x6a5a,	// (0x0003e173) bg_cale_heading_pane_cp01

0x092a,	// (0x00038043) bg_cale_pane_cp02_ParamLimits

0x092a,	// (0x00038043) bg_cale_pane_cp02

0x6a9d,	// (0x0003e1b6) cale_month_corner_pane

0x6ab7,	// (0x0003e1d0) cale_month_day_heading_pane_ParamLimits

0x6ab7,	// (0x0003e1d0) cale_month_day_heading_pane

0x6b12,	// (0x0003e22b) cale_month_pane_g1_ParamLimits

0x6b12,	// (0x0003e22b) cale_month_pane_g1

0x6b4a,	// (0x0003e263) cale_month_pane_g2_ParamLimits

0x6b4a,	// (0x0003e263) cale_month_pane_g2

0x6b73,	// (0x0003e28c) cale_month_pane_g3_ParamLimits

0x6b73,	// (0x0003e28c) cale_month_pane_g3

0x6bbf,	// (0x0003e2d8) cale_month_pane_g4_ParamLimits

0x6bbf,	// (0x0003e2d8) cale_month_pane_g4

0x6c0b,	// (0x0003e324) cale_month_pane_g5_ParamLimits

0x6c0b,	// (0x0003e324) cale_month_pane_g5

0x6c57,	// (0x0003e370) cale_month_pane_g6_ParamLimits

0x6c57,	// (0x0003e370) cale_month_pane_g6

0x6ca3,	// (0x0003e3bc) cale_month_pane_g7_ParamLimits

0x6ca3,	// (0x0003e3bc) cale_month_pane_g7

0x6d07,	// (0x0003e420) cale_month_pane_g8_ParamLimits

0x6d07,	// (0x0003e420) cale_month_pane_g8

0x6d6b,	// (0x0003e484) cale_month_pane_g9_ParamLimits

0x6d6b,	// (0x0003e484) cale_month_pane_g9

0x6dc9,	// (0x0003e4e2) cale_month_pane_g10_ParamLimits

0x6dc9,	// (0x0003e4e2) cale_month_pane_g10

0x6e25,	// (0x0003e53e) cale_month_pane_g11_ParamLimits

0x6e25,	// (0x0003e53e) cale_month_pane_g11

0x6e79,	// (0x0003e592) cale_month_pane_g12_ParamLimits

0x6e79,	// (0x0003e592) cale_month_pane_g12

0x6ecf,	// (0x0003e5e8) cale_month_pane_g13_ParamLimits

0x6ecf,	// (0x0003e5e8) cale_month_pane_g13

0x000c,

0xf296,	// (0x000469af) cale_month_pane_g_ParamLimits

0xf296,	// (0x000469af) cale_month_pane_g

0x6f25,	// (0x0003e63e) cale_month_week_pane

0x6f3a,	// (0x0003e653) grid_cale_month_pane_ParamLimits

0x6f3a,	// (0x0003e653) grid_cale_month_pane

0x6f88,	// (0x0003e6a1) cale_month_day_heading_pane_t1

0x700e,	// (0x0003e727) cale_month_day_heading_pane_t2

0x709f,	// (0x0003e7b8) cale_month_day_heading_pane_t3

0x7130,	// (0x0003e849) cale_month_day_heading_pane_t4

0x71c1,	// (0x0003e8da) cale_month_day_heading_pane_t5

0x7252,	// (0x0003e96b) cale_month_day_heading_pane_t6

0x72e3,	// (0x0003e9fc) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000469ca) cale_month_day_heading_pane_t

0x05c8,	// (0x00037ce1) bg_cale_side_pane_cp01

0x738c,	// (0x0003eaa5) cale_month_week_pane_t1

0x73a5,	// (0x0003eabe) cale_month_week_pane_t2

0x73be,	// (0x0003ead7) cale_month_week_pane_t3

0x73d7,	// (0x0003eaf0) cale_month_week_pane_t4

0x73f0,	// (0x0003eb09) cale_month_week_pane_t5

0x7411,	// (0x0003eb2a) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000469d9) cale_month_week_pane_t

0x7432,	// (0x0003eb4b) cell_cale_month_pane_ParamLimits

0x7432,	// (0x0003eb4b) cell_cale_month_pane

0x7554,	// (0x0003ec6d) cell_cale_month_pane_g1

0x7560,	// (0x0003ec79) cell_cale_month_pane_t1_ParamLimits

0x7560,	// (0x0003ec79) cell_cale_month_pane_t1

0x05d6,	// (0x00037cef) grid_highlight_pane_cp08

0x04b2,	// (0x00037bcb) main_smil_g1

0x7580,	// (0x0003ec99) smil_status_pane

0x0969,	// (0x00038082) smil_text_pane

0x2258,	// (0x00039971) bg_popup_call3_rect_pane_g8

0x2260,	// (0x00039979) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x00046c92) bg_popup_call3_rect_pane_g

0x24ba,	// (0x00039bd3) smil_status_volume_pane_g1

0x0973,	// (0x0003808c) smil_status_pane_t1

0x89b9,	// (0x000400d2) volume_smil_pane

0x098a,	// (0x000380a3) list_smil_text_pane

0x7593,	// (0x0003ecac) scroll_pane_cp011

0x759e,	// (0x0003ecb7) smil_text_list_pane_t1_ParamLimits

0x759e,	// (0x0003ecb7) smil_text_list_pane_t1

0x7616,	// (0x0003ed2f) aid_volume_smil_ParamLimits

0x7616,	// (0x0003ed2f) aid_volume_smil

0x04b2,	// (0x00037bcb) smil_volume_pane_g1

0x04b2,	// (0x00037bcb) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000469f9) smil_volume_pane_g

0x5c14,	// (0x0003d32d) listscroll_cale_day_pane

0x0994,	// (0x000380ad) bg_cale_pane

0x09ac,	// (0x000380c5) list_cale_pane

0x09cf,	// (0x000380e8) scroll_pane_cp09

0x09e0,	// (0x000380f9) cale_bg_pane_g1

0x09e8,	// (0x00038101) cale_bg_pane_g2

0x09f0,	// (0x00038109) cale_bg_pane_g3

0x09f8,	// (0x00038111) cale_bg_pane_g4

0x0a00,	// (0x00038119) cale_bg_pane_g5

0x0a08,	// (0x00038121) cale_bg_pane_g6

0x0a10,	// (0x00038129) cale_bg_pane_g7

0x0a18,	// (0x00038131) cale_bg_pane_g8

0x0a20,	// (0x00038139) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000469fe) cale_bg_pane_g

0x7638,	// (0x0003ed51) list_cale_time_pane_ParamLimits

0x7638,	// (0x0003ed51) list_cale_time_pane

0x0a28,	// (0x00038141) list_cale_time_pane_g1_ParamLimits

0x0a28,	// (0x00038141) list_cale_time_pane_g1

0x0a34,	// (0x0003814d) list_cale_time_pane_g2_ParamLimits

0x0a34,	// (0x0003814d) list_cale_time_pane_g2

0x7654,	// (0x0003ed6d) list_cale_time_pane_g3_ParamLimits

0x7654,	// (0x0003ed6d) list_cale_time_pane_g3

0x7662,	// (0x0003ed7b) list_cale_time_pane_g4_ParamLimits

0x7662,	// (0x0003ed7b) list_cale_time_pane_g4

0x7670,	// (0x0003ed89) list_cale_time_pane_g5_ParamLimits

0x7670,	// (0x0003ed89) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x00046a11) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x00046a11) list_cale_time_pane_g

0x0a4e,	// (0x00038167) list_cale_time_pane_t1_ParamLimits

0x0a4e,	// (0x00038167) list_cale_time_pane_t1

0x0a76,	// (0x0003818f) list_cale_time_pane_t2_ParamLimits

0x0a76,	// (0x0003818f) list_cale_time_pane_t2

0x7937,	// (0x0003f050) aid_blid_cardinal_pane

0x7979,	// (0x0003f092) compass_pane_t4

0x0a9e,	// (0x000381b7) list_cale_time_pane_t4_ParamLimits

0x0a9e,	// (0x000381b7) list_cale_time_pane_t4

0x7987,	// (0x0003f0a0) compass_pane_t5

0x7997,	// (0x0003f0b0) compass_pane_t6

0x79a5,	// (0x0003f0be) compass_pane_t7

0x0ef3,	// (0x0003860c) navi_pane_cc_t1

0x1048,	// (0x00038761) aid_phob_thumbnail_center_pane

0x809b,	// (0x0003f7b4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x00046a1e) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x00046a1e) list_cale_time_pane_t

0xed59,	// (0x00046472) bg_popup_window_pane_cp02_ParamLimits

0xed59,	// (0x00046472) bg_popup_window_pane_cp02

0x0ac6,	// (0x000381df) heading_pane_cp01_ParamLimits

0x0ac6,	// (0x000381df) heading_pane_cp01

0x0ad2,	// (0x000381eb) loc_req_pane_ParamLimits

0x0ad2,	// (0x000381eb) loc_req_pane

0x0ae2,	// (0x000381fb) loc_type_pane_ParamLimits

0x0ae2,	// (0x000381fb) loc_type_pane

0x0af4,	// (0x0003820d) loc_type_pane_t1_ParamLimits

0x0af4,	// (0x0003820d) loc_type_pane_t1

0x0b06,	// (0x0003821f) loc_type_pane_t2_ParamLimits

0x0b06,	// (0x0003821f) loc_type_pane_t2

0x0b18,	// (0x00038231) loc_type_pane_t3_ParamLimits

0x0b18,	// (0x00038231) loc_type_pane_t3

0x0002,

0xf30c,	// (0x00046a25) loc_type_pane_t_ParamLimits

0xf30c,	// (0x00046a25) loc_type_pane_t

0x0b2a,	// (0x00038243) list_loc_req_pane

0x0b34,	// (0x0003824d) scroll_pane_cp012

0x767e,	// (0x0003ed97) list_single_loc_request_popup_menu_pane_ParamLimits

0x767e,	// (0x0003ed97) list_single_loc_request_popup_menu_pane

0x0b3f,	// (0x00038258) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0b3f,	// (0x00038258) list_single_loc_request_popup_menu_pane_g1

0x0b4b,	// (0x00038264) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0b4b,	// (0x00038264) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x00046a2c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x00046a2c) list_single_loc_request_popup_menu_pane_g

0x0b57,	// (0x00038270) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0b57,	// (0x00038270) list_single_loc_request_popup_menu_pane_t1

0x7690,	// (0x0003eda9) bg_popup_window_pane_cp03_ParamLimits

0x7690,	// (0x0003eda9) bg_popup_window_pane_cp03

0x769e,	// (0x0003edb7) heading_loc_req_pane_ParamLimits

0x769e,	// (0x0003edb7) heading_loc_req_pane

0x76aa,	// (0x0003edc3) popup_dyc_status_message_window_g1_ParamLimits

0x76aa,	// (0x0003edc3) popup_dyc_status_message_window_g1

0x76b6,	// (0x0003edcf) popup_dyc_status_message_window_t1_ParamLimits

0x76b6,	// (0x0003edcf) popup_dyc_status_message_window_t1

0x76c8,	// (0x0003ede1) popup_dyc_status_message_window_t2_ParamLimits

0x76c8,	// (0x0003ede1) popup_dyc_status_message_window_t2

0x76da,	// (0x0003edf3) popup_dyc_status_message_window_t3_ParamLimits

0x76da,	// (0x0003edf3) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x00046a31) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x00046a31) popup_dyc_status_message_window_t

0x013d,	// (0x00037856) bg_heading_pane_cp01

0x0b6d,	// (0x00038286) heading_loc_req_pane_g1

0x0b75,	// (0x0003828e) heading_loc_req_pane_g2

0x0b7d,	// (0x00038296) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x00046a38) heading_loc_req_pane_g

0x0b85,	// (0x0003829e) heading_loc_req_pane_t1

0x0b94,	// (0x000382ad) bg_popup_sub_pane_cp01_ParamLimits

0x0b94,	// (0x000382ad) bg_popup_sub_pane_cp01

0x0ba2,	// (0x000382bb) popup_cale_events_window_g1_ParamLimits

0x0ba2,	// (0x000382bb) popup_cale_events_window_g1

0x0bc2,	// (0x000382db) popup_cale_events_window_g2_ParamLimits

0x0bc2,	// (0x000382db) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x00046a6c) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x00046a6c) popup_cale_events_window_g

0x0be2,	// (0x000382fb) popup_cale_events_window_t1_ParamLimits

0x0be2,	// (0x000382fb) popup_cale_events_window_t1

0x0bf4,	// (0x0003830d) popup_cale_events_window_t2_ParamLimits

0x0bf4,	// (0x0003830d) popup_cale_events_window_t2

0x0c32,	// (0x0003834b) popup_cale_events_window_t3_ParamLimits

0x0c32,	// (0x0003834b) popup_cale_events_window_t3

0x0c86,	// (0x0003839f) popup_cale_events_window_t4_ParamLimits

0x0c86,	// (0x0003839f) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x00046a71) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x00046a71) popup_cale_events_window_t

0x7704,	// (0x0003ee1d) call_type_pane

0x1060,	// (0x00038779) popup_call_status_window_g1

0x7710,	// (0x0003ee29) popup_call_status_window_g2

0x771c,	// (0x0003ee35) popup_call_status_window_g3

0x0002,

0xf361,	// (0x00046a7a) popup_call_status_window_g

0x0cbc,	// (0x000383d5) call_type_pane_g1

0x0cc5,	// (0x000383de) call_type_pane_g2

0x0001,

0xf368,	// (0x00046a81) call_type_pane_g

0x013d,	// (0x00037856) bg_popup_sub_pane_cp02

0x0cce,	// (0x000383e7) listscroll_popup_wml_pane

0x0cd6,	// (0x000383ef) list_wml_pane

0x0ce0,	// (0x000383f9) scroll_pane_cp013

0x0ceb,	// (0x00038404) list_single_graphic_popup_wml_pane_ParamLimits

0x0ceb,	// (0x00038404) list_single_graphic_popup_wml_pane

0x04b2,	// (0x00037bcb) list_single_graphic_popup_wml_pane_g1

0x0cff,	// (0x00038418) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x00046a86) list_single_graphic_popup_wml_pane_g

0x0d07,	// (0x00038420) list_single_graphic_popup_wml_pane_t1

0x0d15,	// (0x0003842e) aid_call_pane

0x0390,	// (0x00037aa9) popup_clock_analogue_window_g1

0x0390,	// (0x00037aa9) popup_clock_analogue_window_g2

0x7728,	// (0x0003ee41) popup_clock_analogue_window_g3

0x7728,	// (0x0003ee41) popup_clock_analogue_window_g4

0x04b2,	// (0x00037bcb) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x00046a8b) popup_clock_analogue_window_g

0x7730,	// (0x0003ee49) popup_clock_analogue_window_t1

0x773e,	// (0x0003ee57) clock_digital_number_pane_ParamLimits

0x773e,	// (0x0003ee57) clock_digital_number_pane

0x774a,	// (0x0003ee63) clock_digital_number_pane_cp02_ParamLimits

0x774a,	// (0x0003ee63) clock_digital_number_pane_cp02

0x7756,	// (0x0003ee6f) clock_digital_number_pane_cp03_ParamLimits

0x7756,	// (0x0003ee6f) clock_digital_number_pane_cp03

0x7762,	// (0x0003ee7b) clock_digital_number_pane_cp04_ParamLimits

0x7762,	// (0x0003ee7b) clock_digital_number_pane_cp04

0x7772,	// (0x0003ee8b) clock_digital_separator_pane_ParamLimits

0x7772,	// (0x0003ee8b) clock_digital_separator_pane

0x777e,	// (0x0003ee97) popup_clock_digital_window_t1

0x04b2,	// (0x00037bcb) clock_digital_number_pane_g1

0x04b2,	// (0x00037bcb) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000469f9) clock_digital_number_pane_g

0x04b2,	// (0x00037bcb) clock_digital_separator_pane_g1

0x04b2,	// (0x00037bcb) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000469f9) clock_digital_separator_pane_g

0x013d,	// (0x00037856) bg_popup_window_pane_cp04

0x0d25,	// (0x0003843e) heading_pane_cp03

0x0d2d,	// (0x00038446) listscroll_popup_gms_pane

0x0d35,	// (0x0003844e) grid_large_graphic_popup_pane

0x0d3f,	// (0x00038458) listscroll_popup_gms_pane_g1

0x0d47,	// (0x00038460) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x00046a96) listscroll_popup_gms_pane_g

0x07ce,	// (0x00037ee7) scroll_pane_cp014

0x779b,	// (0x0003eeb4) cell_large_graphic_popup_pane_ParamLimits

0x779b,	// (0x0003eeb4) cell_large_graphic_popup_pane

0x77b3,	// (0x0003eecc) cell_large_graphic_popup_pane_g1_ParamLimits

0x77b3,	// (0x0003eecc) cell_large_graphic_popup_pane_g1

0x0d4f,	// (0x00038468) cell_large_graphic_popup_pane_g2_ParamLimits

0x0d4f,	// (0x00038468) cell_large_graphic_popup_pane_g2

0x0d5b,	// (0x00038474) cell_large_graphic_popup_pane_g3_ParamLimits

0x0d5b,	// (0x00038474) cell_large_graphic_popup_pane_g3

0x0d68,	// (0x00038481) cell_large_graphic_popup_pane_g4_ParamLimits

0x0d68,	// (0x00038481) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x00046a9b) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x00046a9b) cell_large_graphic_popup_pane_g

0x0d78,	// (0x00038491) grid_highlight_pane_cp010

0x04b2,	// (0x00037bcb) bg_popup_call_pane_g1

0x0d82,	// (0x0003849b) list_single_graphic_popup_conf_pane_ParamLimits

0x0d82,	// (0x0003849b) list_single_graphic_popup_conf_pane

0x0d95,	// (0x000384ae) list_highlight_pane_cp01

0x0d9e,	// (0x000384b7) list_single_graphic_popup_conf_pane_g1

0x0da6,	// (0x000384bf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x00046aa4) list_single_graphic_popup_conf_pane_g

0x0dae,	// (0x000384c7) list_single_graphic_popup_conf_pane_t1

0x0dbc,	// (0x000384d5) linegrid_cams_pane_g1

0x77bf,	// (0x0003eed8) linegrid_cams_pane_g2

0x0609,	// (0x00037d22) linegrid_cams_pane_g3

0x0dc5,	// (0x000384de) linegrid_cams_pane_g4

0x77c8,	// (0x0003eee1) linegrid_cams_pane_g5

0x77d1,	// (0x0003eeea) linegrid_cams_pane_g6

0x0612,	// (0x00037d2b) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x00046aa9) linegrid_cams_pane_g

0x0dce,	// (0x000384e7) popup_clock_analogue_window

0x0dce,	// (0x000384e7) popup_clock_digital_window

0x013d,	// (0x00037856) popup_phob_thumbnail_window

0x04b2,	// (0x00037bcb) call_video_uplink_pane_g1

0x0dd7,	// (0x000384f0) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x00046ab8) call_video_uplink_pane_g

0x0ddf,	// (0x000384f8) video_uplink_pane

0x0de7,	// (0x00038500) mce_image_pane_g1

0x77da,	// (0x0003eef3) mce_image_pane_g2

0x77e4,	// (0x0003eefd) mce_image_pane_g3

0x77ec,	// (0x0003ef05) mce_image_pane_g4

0x77f4,	// (0x0003ef0d) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x00046abd) mce_image_pane_g

0x0df1,	// (0x0003850a) control_top_pane_stacon_cp01_ParamLimits

0x0df1,	// (0x0003850a) control_top_pane_stacon_cp01

0x0e05,	// (0x0003851e) uni_indicator_pane_stacon_cp01_ParamLimits

0x0e05,	// (0x0003851e) uni_indicator_pane_stacon_cp01

0x0e16,	// (0x0003852f) bg_popup_sub_pane_cp03

0x0e20,	// (0x00038539) chi_dic_find_pane

0x77fc,	// (0x0003ef15) listscroll_chi_dic_pane

0x0e28,	// (0x00038541) main_pane_chidic_g1

0x0e30,	// (0x00038549) chi_dic_find_pane_t1

0x0e3e,	// (0x00038557) find_chidic_pane

0x0e47,	// (0x00038560) chi_dic_list_pane_ParamLimits

0x0e47,	// (0x00038560) chi_dic_list_pane

0x0e58,	// (0x00038571) scroll_pane_cp020

0x0e60,	// (0x00038579) find_chidic_pane_t1

0x013d,	// (0x00037856) input_focus_pane_cp06

0x7810,	// (0x0003ef29) list_chi_dic_pane_ParamLimits

0x7810,	// (0x0003ef29) list_chi_dic_pane

0x782a,	// (0x0003ef43) list_chi_dic_pane_t1_ParamLimits

0x782a,	// (0x0003ef43) list_chi_dic_pane_t1

0x013d,	// (0x00037856) list_highlight_pane_cp020

0x0e6f,	// (0x00038588) bg_cale_heading_pane_g1

0x783d,	// (0x0003ef56) bg_cale_heading_pane_g2

0x7845,	// (0x0003ef5e) bg_cale_heading_pane_g3

0x784d,	// (0x0003ef66) bg_cale_heading_pane_g4

0x7857,	// (0x0003ef70) bg_cale_heading_pane_g5

0x7861,	// (0x0003ef7a) bg_cale_heading_pane_g6

0x7869,	// (0x0003ef82) bg_cale_heading_pane_g7

0x7871,	// (0x0003ef8a) bg_cale_heading_pane_g8

0x787b,	// (0x0003ef94) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x00046ac8) bg_cale_heading_pane_g

0x0e6f,	// (0x00038588) bg_cale_side_pane_g1

0x7885,	// (0x0003ef9e) bg_cale_side_pane_g2

0x788f,	// (0x0003efa8) bg_cale_side_pane_g3

0x7899,	// (0x0003efb2) bg_cale_side_pane_g4

0x78a3,	// (0x0003efbc) bg_cale_side_pane_g5

0x78ad,	// (0x0003efc6) bg_cale_side_pane_g6

0x78b7,	// (0x0003efd0) bg_cale_side_pane_g7

0x78c1,	// (0x0003efda) bg_cale_side_pane_g8

0x78c9,	// (0x0003efe2) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x00046adb) bg_cale_side_pane_g

0x78d1,	// (0x0003efea) popup_call_status_window_ParamLimits

0x78d1,	// (0x0003efea) popup_call_status_window

0x0e77,	// (0x00038590) stacon_top_pane

0x0e7f,	// (0x00038598) status_pane_ParamLimits

0x0e7f,	// (0x00038598) status_pane

0x0e94,	// (0x000385ad) status_small_pane

0x0e9c,	// (0x000385b5) control_pane

0x013d,	// (0x00037856) stacon_bottom_pane

0x0ea4,	// (0x000385bd) list_single_mce_smart_pane_t1_ParamLimits

0x0ea4,	// (0x000385bd) list_single_mce_smart_pane_t1

0x0eb7,	// (0x000385d0) list_single_mce_smart_pane_t2_ParamLimits

0x0eb7,	// (0x000385d0) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x00046aee) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x00046aee) list_single_mce_smart_pane_t

0x78dd,	// (0x0003eff6) compass_pane

0x78e9,	// (0x0003f002) main_location2_pane_t1

0x78fd,	// (0x0003f016) main_location2_pane_t2

0x7911,	// (0x0003f02a) main_location2_pane_t3

0x0003,

0xf3da,	// (0x00046af3) main_location2_pane_t

0x0ed6,	// (0x000385ef) compass_pane_g1_ParamLimits

0x0ed6,	// (0x000385ef) compass_pane_g1

0x795b,	// (0x0003f074) compass_pane_t1

0x796a,	// (0x0003f083) compass_pane_t2

0x0005,

0xf3e3,	// (0x00046afc) compass_pane_t

0x79b5,	// (0x0003f0ce) text_secondary_cp61

0x0eea,	// (0x00038603) navi_pane_cams_g5

0x0f0d,	// (0x00038626) navi_pane_im_t1

0x0f1b,	// (0x00038634) navi_pane_mp_g1_ParamLimits

0x0f1b,	// (0x00038634) navi_pane_mp_g1

0x0f2f,	// (0x00038648) navi_pane_mp_g2_ParamLimits

0x0f2f,	// (0x00038648) navi_pane_mp_g2

0x0f3b,	// (0x00038654) navi_pane_mp_g3_ParamLimits

0x0f3b,	// (0x00038654) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x00046b10) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x00046b10) navi_pane_mp_g

0x0f47,	// (0x00038660) navi_pane_mp_t1

0x0f55,	// (0x0003866e) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x00046b17) navi_pane_mp_t

0x0f91,	// (0x000386aa) navi_pane_vt_g1

0x0f47,	// (0x00038660) navi_pane_vt_t1

0x0f99,	// (0x000386b2) navi_slider_pane

0x0fa1,	// (0x000386ba) zooming_pane

0x0fa9,	// (0x000386c2) navi_slider_pane_g1

0x7ae8,	// (0x0003f201) navi_slider_pane_g2

0x0006,

0xf405,	// (0x00046b1e) navi_slider_pane_g

0x0fcd,	// (0x000386e6) aid_levels_zoom

0x0fd5,	// (0x000386ee) zooming_pane_g1

0x0fdd,	// (0x000386f6) zooming_pane_g2

0x0fdd,	// (0x000386f6) zooming_pane_g3

0x0002,

0xf414,	// (0x00046b2d) zooming_pane_g

0x0fe5,	// (0x000386fe) level_10_zoom

0x0fee,	// (0x00038707) level_11_zoom

0x0ff7,	// (0x00038710) level_1_zoom

0x1000,	// (0x00038719) level_2_zoom

0x1009,	// (0x00038722) level_3_zoom

0x1012,	// (0x0003872b) level_4_zoom

0x101b,	// (0x00038734) level_5_zoom

0x1024,	// (0x0003873d) level_6_zoom

0x102d,	// (0x00038746) level_7_zoom

0x1036,	// (0x0003874f) level_8_zoom

0x103f,	// (0x00038758) level_9_zoom

0x1050,	// (0x00038769) popup_phob_thumbnail_window_g1

0x1058,	// (0x00038771) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x00046b34) popup_phob_thumbnail_window_g

0x23ba,	// (0x00039ad3) level_1_location

0x23c2,	// (0x00039adb) level_2_location

0x23ca,	// (0x00039ae3) level_3_location

0x23d2,	// (0x00039aeb) level_4_location

0x0fa1,	// (0x000386ba) level_5_location

0x7afa,	// (0x0003f213) mce_icon_pane_g1

0x7b02,	// (0x0003f21b) mce_icon_pane_g2

0x0001,

0xf420,	// (0x00046b39) mce_icon_pane_g

0x7b0a,	// (0x0003f223) main_mup_pane_g1_ParamLimits

0x7b0a,	// (0x0003f223) main_mup_pane_g1

0x7b22,	// (0x0003f23b) main_mup_pane_g2_ParamLimits

0x7b22,	// (0x0003f23b) main_mup_pane_g2

0x7b3e,	// (0x0003f257) main_mup_pane_g3_ParamLimits

0x7b3e,	// (0x0003f257) main_mup_pane_g3

0x7b5a,	// (0x0003f273) main_mup_pane_g4_ParamLimits

0x7b5a,	// (0x0003f273) main_mup_pane_g4

0x7b76,	// (0x0003f28f) main_mup_pane_g5_ParamLimits

0x7b76,	// (0x0003f28f) main_mup_pane_g5

0x7b97,	// (0x0003f2b0) main_mup_pane_g6_ParamLimits

0x7b97,	// (0x0003f2b0) main_mup_pane_g6

0x7bb3,	// (0x0003f2cc) main_mup_pane_g7_ParamLimits

0x7bb3,	// (0x0003f2cc) main_mup_pane_g7

0x7bcf,	// (0x0003f2e8) main_mup_pane_g8_ParamLimits

0x7bcf,	// (0x0003f2e8) main_mup_pane_g8

0x7bef,	// (0x0003f308) main_mup_pane_g9_ParamLimits

0x7bef,	// (0x0003f308) main_mup_pane_g9

0x7c0e,	// (0x0003f327) main_mup_pane_g10_ParamLimits

0x7c0e,	// (0x0003f327) main_mup_pane_g10

0x7c2d,	// (0x0003f346) main_mup_pane_g11_ParamLimits

0x7c2d,	// (0x0003f346) main_mup_pane_g11

0x7c45,	// (0x0003f35e) main_mup_pane_g12_ParamLimits

0x7c45,	// (0x0003f35e) main_mup_pane_g12

0x7c53,	// (0x0003f36c) main_mup_pane_g13_ParamLimits

0x7c53,	// (0x0003f36c) main_mup_pane_g13

0x000c,

0xf425,	// (0x00046b3e) main_mup_pane_g_ParamLimits

0xf425,	// (0x00046b3e) main_mup_pane_g

0x7c69,	// (0x0003f382) main_mup_pane_t1_ParamLimits

0x7c69,	// (0x0003f382) main_mup_pane_t1

0x7c86,	// (0x0003f39f) main_mup_pane_t2_ParamLimits

0x7c86,	// (0x0003f39f) main_mup_pane_t2

0x7ca0,	// (0x0003f3b9) main_mup_pane_t3_ParamLimits

0x7ca0,	// (0x0003f3b9) main_mup_pane_t3

0x7cba,	// (0x0003f3d3) main_mup_pane_t4_ParamLimits

0x7cba,	// (0x0003f3d3) main_mup_pane_t4

0x7ccc,	// (0x0003f3e5) main_mup_pane_t5_ParamLimits

0x7ccc,	// (0x0003f3e5) main_mup_pane_t5

0x7cde,	// (0x0003f3f7) main_mup_pane_t6_ParamLimits

0x7cde,	// (0x0003f3f7) main_mup_pane_t6

0x0005,

0xf440,	// (0x00046b59) main_mup_pane_t_ParamLimits

0xf440,	// (0x00046b59) main_mup_pane_t

0x7cf4,	// (0x0003f40d) mup_progress_pane_ParamLimits

0x7cf4,	// (0x0003f40d) mup_progress_pane

0x7d00,	// (0x0003f419) mup_visualizer_pane_ParamLimits

0x7d00,	// (0x0003f419) mup_visualizer_pane

0x7d3a,	// (0x0003f453) mup_volume_pane_ParamLimits

0x7d3a,	// (0x0003f453) mup_volume_pane

0x1060,	// (0x00038779) mup_visualizer_pane_g1_ParamLimits

0x1060,	// (0x00038779) mup_visualizer_pane_g1

0x1060,	// (0x00038779) mup_visualizer_pane_g2_ParamLimits

0x1060,	// (0x00038779) mup_visualizer_pane_g2

0x0ed6,	// (0x000385ef) mup_visualizer_pane_g3_ParamLimits

0x0ed6,	// (0x000385ef) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x00046b66) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x00046b66) mup_visualizer_pane_g

0x04b2,	// (0x00037bcb) mup_volume_pane_g1

0x1076,	// (0x0003878f) mup_volume_pane_g2

0x0001,

0xf454,	// (0x00046b6d) mup_volume_pane_g

0x04b2,	// (0x00037bcb) mup_progress_pane_g1

0x107f,	// (0x00038798) mup_progress_pane_g2

0x1088,	// (0x000387a1) mup_progress_pane_g3

0x0002,

0xf459,	// (0x00046b72) mup_progress_pane_g

0x013d,	// (0x00037856) bg_popup_window_pane_cp05

0x1091,	// (0x000387aa) heading_pane_cp02_ParamLimits

0x1091,	// (0x000387aa) heading_pane_cp02

0x10ab,	// (0x000387c4) list_popup_blid_pane

0x10b3,	// (0x000387cc) list_blid_sat_info_pane_ParamLimits

0x10b3,	// (0x000387cc) list_blid_sat_info_pane

0x10c6,	// (0x000387df) list_blid_sat_info_pane_g1

0x10ce,	// (0x000387e7) list_blid_sat_info_pane_t1

0x7e47,	// (0x0003f560) mup_equalizer_pane_ParamLimits

0x7e47,	// (0x0003f560) mup_equalizer_pane

0x7e68,	// (0x0003f581) mup_equalizer_pane_cp1_ParamLimits

0x7e68,	// (0x0003f581) mup_equalizer_pane_cp1

0x7e89,	// (0x0003f5a2) mup_equalizer_pane_cp2_ParamLimits

0x7e89,	// (0x0003f5a2) mup_equalizer_pane_cp2

0x7eaa,	// (0x0003f5c3) mup_equalizer_pane_cp3_ParamLimits

0x7eaa,	// (0x0003f5c3) mup_equalizer_pane_cp3

0x7ecb,	// (0x0003f5e4) mup_equalizer_pane_cp4_ParamLimits

0x7ecb,	// (0x0003f5e4) mup_equalizer_pane_cp4

0x7eec,	// (0x0003f605) mup_equalizer_pane_cp5

0x7f02,	// (0x0003f61b) mup_equalizer_pane_cp6

0x7f1a,	// (0x0003f633) mup_equalizer_pane_cp7

0x22d8,	// (0x000399f1) bg_popup_call_poc_act_pane_g9

0x22e0,	// (0x000399f9) bg_popup_call_poc_act_pane_g10

0x22e8,	// (0x00039a01) bg_popup_call_poc_act_pane_g11

0x000a,

0x0398,	// (0x00037ab1) mup_scale_pane

0x04b2,	// (0x00037bcb) mup_scale_pane_g1

0x10dc,	// (0x000387f5) mup_scale_pane_g2

0x0006,

0xf475,	// (0x00046b8e) mup_scale_pane_g

0x1100,	// (0x00038819) msg_data_pane

0x1108,	// (0x00038821) scroll_pane_cp017

0x42eb,	// (0x0003ba04) bg_list_pane_cp04_ParamLimits

0x42eb,	// (0x0003ba04) bg_list_pane_cp04

0x1118,	// (0x00038831) msg_data_pane_g1

0x7f44,	// (0x0003f65d) msg_data_pane_g2

0x7f4e,	// (0x0003f667) msg_data_pane_g3

0x7f56,	// (0x0003f66f) msg_data_pane_g4

0x7f5e,	// (0x0003f677) msg_data_pane_g5

0x7f66,	// (0x0003f67f) msg_data_pane_g6

0x7f6e,	// (0x0003f687) msg_data_pane_g7

0x0006,

0xf484,	// (0x00046b9d) msg_data_pane_g

0x430f,	// (0x0003ba28) msg_text_pane_ParamLimits

0x430f,	// (0x0003ba28) msg_text_pane

0x7f76,	// (0x0003f68f) qrid_highlight_pane_cp011_ParamLimits

0x7f76,	// (0x0003f68f) qrid_highlight_pane_cp011

0x013d,	// (0x00037856) msg_body_pane

0x013d,	// (0x00037856) msg_header_pane

0x1120,	// (0x00038839) input_focus_pane_cp07

0x435b,	// (0x0003ba74) msg_header_pane_t1_ParamLimits

0x435b,	// (0x0003ba74) msg_header_pane_t1

0x436d,	// (0x0003ba86) msg_header_pane_t2_ParamLimits

0x436d,	// (0x0003ba86) msg_header_pane_t2

0x0001,

0xf498,	// (0x00046bb1) msg_header_pane_t_ParamLimits

0xf498,	// (0x00046bb1) msg_header_pane_t

0x1159,	// (0x00038872) msg_body_pane_g1

0x437f,	// (0x0003ba98) msg_body_pane_t1_ParamLimits

0x437f,	// (0x0003ba98) msg_body_pane_t1

0x43b0,	// (0x0003bac9) msg_body_pane_t2_ParamLimits

0x43b0,	// (0x0003bac9) msg_body_pane_t2

0x43c2,	// (0x0003badb) msg_body_pane_t3_ParamLimits

0x43c2,	// (0x0003badb) msg_body_pane_t3

0x0002,

0xf49d,	// (0x00046bb6) msg_body_pane_t_ParamLimits

0xf49d,	// (0x00046bb6) msg_body_pane_t

0x7feb,	// (0x0003f704) main_viewer_pane_g1_ParamLimits

0x7feb,	// (0x0003f704) main_viewer_pane_g1

0x7ff7,	// (0x0003f710) main_viewer_pane_g2_ParamLimits

0x7ff7,	// (0x0003f710) main_viewer_pane_g2

0x8003,	// (0x0003f71c) main_viewer_pane_g3_ParamLimits

0x8003,	// (0x0003f71c) main_viewer_pane_g3

0x8014,	// (0x0003f72d) main_viewer_pane_g4_ParamLimits

0x8014,	// (0x0003f72d) main_viewer_pane_g4

0x8025,	// (0x0003f73e) main_viewer_pane_g5_ParamLimits

0x8025,	// (0x0003f73e) main_viewer_pane_g5

0x8025,	// (0x0003f73e) main_viewer_pane_g7_ParamLimits

0x8025,	// (0x0003f73e) main_viewer_pane_g7

0x8037,	// (0x0003f750) main_viewer_pane_g8_ParamLimits

0x8037,	// (0x0003f750) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x00046bc6) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x00046bc6) main_viewer_pane_g

0x11b6,	// (0x000388cf) viewer_content_pane_ParamLimits

0x11b6,	// (0x000388cf) viewer_content_pane

0x806f,	// (0x0003f788) main_postcard_pane_g1_ParamLimits

0x806f,	// (0x0003f788) main_postcard_pane_g1

0x807d,	// (0x0003f796) main_postcard_pane_g2_ParamLimits

0x807d,	// (0x0003f796) main_postcard_pane_g2

0x808b,	// (0x0003f7a4) main_postcard_pane_g3_ParamLimits

0x808b,	// (0x0003f7a4) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x00046bd7) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x00046bd7) main_postcard_pane_g

0x809b,	// (0x0003f7b4) main_postcard_pane_g4

0x24a7,	// (0x00039bc0) smil_status_volume_pane_g2

0x80c7,	// (0x0003f7e0) postcard_pane_ParamLimits

0x80c7,	// (0x0003f7e0) postcard_pane

0x1060,	// (0x00038779) postcard_pane_g1_ParamLimits

0x1060,	// (0x00038779) postcard_pane_g1

0x80f9,	// (0x0003f812) postcard_pane_g2_ParamLimits

0x80f9,	// (0x0003f812) postcard_pane_g2

0x8105,	// (0x0003f81e) postcard_pane_g3_ParamLimits

0x8105,	// (0x0003f81e) postcard_pane_g3

0x11d2,	// (0x000388eb) postcard_pane_g4_ParamLimits

0x11d2,	// (0x000388eb) postcard_pane_g4

0x8111,	// (0x0003f82a) postcard_pane_g5_ParamLimits

0x8111,	// (0x0003f82a) postcard_pane_g5

0x811d,	// (0x0003f836) postcard_pane_g6_ParamLimits

0x811d,	// (0x0003f836) postcard_pane_g6

0x11c4,	// (0x000388dd) postcard_pane_g7_ParamLimits

0x11c4,	// (0x000388dd) postcard_pane_g7

0x0006,

0xf4cb,	// (0x00046be4) postcard_pane_g_ParamLimits

0xf4cb,	// (0x00046be4) postcard_pane_g

0x8129,	// (0x0003f842) main_mp2_pane_g1_ParamLimits

0x8129,	// (0x0003f842) main_mp2_pane_g1

0x8135,	// (0x0003f84e) main_mp2_pane_g2_ParamLimits

0x8135,	// (0x0003f84e) main_mp2_pane_g2

0x8141,	// (0x0003f85a) main_mp2_pane_g3_ParamLimits

0x8141,	// (0x0003f85a) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x00046bf3) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x00046bf3) main_mp2_pane_g

0x814d,	// (0x0003f866) main_mp2_pane_t1_ParamLimits

0x814d,	// (0x0003f866) main_mp2_pane_t1

0x8164,	// (0x0003f87d) main_mp2_pane_t2_ParamLimits

0x8164,	// (0x0003f87d) main_mp2_pane_t2

0x8178,	// (0x0003f891) main_mp2_pane_t3_ParamLimits

0x8178,	// (0x0003f891) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x00046bfa) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x00046bfa) main_mp2_pane_t

0x11e0,	// (0x000388f9) pec_content_pane_ParamLimits

0x11e0,	// (0x000388f9) pec_content_pane

0x07ce,	// (0x00037ee7) scroll_pane_cp015

0x11f2,	// (0x0003890b) pec_attribute_pane_ParamLimits

0x11f2,	// (0x0003890b) pec_attribute_pane

0x818a,	// (0x0003f8a3) pec_content_pane_g1_ParamLimits

0x818a,	// (0x0003f8a3) pec_content_pane_g1

0x1202,	// (0x0003891b) pec_content_pane_t1_ParamLimits

0x1202,	// (0x0003891b) pec_content_pane_t1

0x1214,	// (0x0003892d) pec_content_pane_t2_ParamLimits

0x1214,	// (0x0003892d) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x00046c01) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x00046c01) pec_content_pane_t

0x8196,	// (0x0003f8af) list_single_graphic_pane_cp01_ParamLimits

0x8196,	// (0x0003f8af) list_single_graphic_pane_cp01

0x0398,	// (0x00037ab1) bg_popup_sub_pane_cp04

0x1226,	// (0x0003893f) popup_mup_playback_window_g1

0x1232,	// (0x0003894b) popup_mup_playback_window_t1

0x1247,	// (0x00038960) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x00046c06) popup_mup_playback_window_t

0x127e,	// (0x00038997) main_image_pane_g1_ParamLimits

0x127e,	// (0x00038997) main_image_pane_g1

0x12c1,	// (0x000389da) scroll_pane_cp018_ParamLimits

0x12c1,	// (0x000389da) scroll_pane_cp018

0x12d9,	// (0x000389f2) scroll_pane_cp016_ParamLimits

0x12d9,	// (0x000389f2) scroll_pane_cp016

0x822f,	// (0x0003f948) smil2_image_pane_ParamLimits

0x822f,	// (0x0003f948) smil2_image_pane

0x825f,	// (0x0003f978) smil2_root_pane_ParamLimits

0x825f,	// (0x0003f978) smil2_root_pane

0x828b,	// (0x0003f9a4) smil2_text_pane_ParamLimits

0x828b,	// (0x0003f9a4) smil2_text_pane

0x013d,	// (0x00037856) bg_list_pane_cp06

0x1315,	// (0x00038a2e) grid_radio_pane

0x013d,	// (0x00037856) bg_popup_window_pane_cp06

0x131d,	// (0x00038a36) main_fmradio_pane_t1

0x0d25,	// (0x0003843e) heading_pane_cp04

0x132b,	// (0x00038a44) main_fmradio_pane_t2

0x22f0,	// (0x00039a09) popup_cale_lunar_info_window_g1

0x1339,	// (0x00038a52) main_fmradio_pane_t3

0x22f8,	// (0x00039a11) popup_cale_lunar_info_window_g2

0x1347,	// (0x00038a60) main_fmradio_pane_t4

0x0001,

0x1355,	// (0x00038a6e) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x00046ce1) popup_cale_lunar_info_window_g

0xf502,	// (0x00046c1b) main_fmradio_pane_t

0x1363,	// (0x00038a7c) wait_bar_pane_cp03

0x136b,	// (0x00038a84) cell_fmradio_pane_ParamLimits

0x136b,	// (0x00038a84) cell_fmradio_pane

0x11c4,	// (0x000388dd) cell_fmradio_pane_g1_ParamLimits

0x11c4,	// (0x000388dd) cell_fmradio_pane_g1

0x013d,	// (0x00037856) grid_highlight_pane_cp011

0x137e,	// (0x00038a97) poc_content_pane_ParamLimits

0x137e,	// (0x00038a97) poc_content_pane

0x1390,	// (0x00038aa9) scroll_pane_cp019

0x82cb,	// (0x0003f9e4) popup_call_poc_act_window_ParamLimits

0x82cb,	// (0x0003f9e4) popup_call_poc_act_window

0x82d8,	// (0x0003f9f1) popup_call_poc_inact_window_ParamLimits

0x82d8,	// (0x0003f9f1) popup_call_poc_inact_window

0xf59f,	// (0x00046cb8) bg_popup_call_poc_act_pane_g

0x2268,	// (0x00039981) bg_popup_call_poc_inact_pane_g1

0x2270,	// (0x00039989) bg_popup_call_poc_inact_pane_g2

0x1398,	// (0x00038ab1) popup_call_poc_act_window_g2

0x2278,	// (0x00039991) bg_popup_call_poc_inact_pane_g3

0x2280,	// (0x00039999) bg_popup_call_poc_inact_pane_g4

0x2288,	// (0x000399a1) bg_popup_call_poc_inact_pane_g5

0x13a0,	// (0x00038ab9) popup_call_poc_act_window_t1_ParamLimits

0x13a0,	// (0x00038ab9) popup_call_poc_act_window_t1

0x13c8,	// (0x00038ae1) popup_call_poc_act_window_t2_ParamLimits

0x13c8,	// (0x00038ae1) popup_call_poc_act_window_t2

0x13f0,	// (0x00038b09) popup_call_poc_act_window_t3_ParamLimits

0x13f0,	// (0x00038b09) popup_call_poc_act_window_t3

0x1418,	// (0x00038b31) popup_call_poc_act_window_t4_ParamLimits

0x1418,	// (0x00038b31) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x00046c26) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x00046c26) popup_call_poc_act_window_t

0x2290,	// (0x000399a9) bg_popup_call_poc_inact_pane_g6

0x2298,	// (0x000399b1) bg_popup_call_poc_inact_pane_g7

0x22a0,	// (0x000399b9) bg_popup_call_poc_inact_pane_g8

0x142a,	// (0x00038b43) popup_call_poc_inact_window_g2

0x22a8,	// (0x000399c1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x00046ca5) bg_popup_call_poc_inact_pane_g

0x1432,	// (0x00038b4b) popup_call_poc_inact_window_t1_ParamLimits

0x1432,	// (0x00038b4b) popup_call_poc_inact_window_t1

0x1447,	// (0x00038b60) popup_call_poc_inact_window_t2_ParamLimits

0x1447,	// (0x00038b60) popup_call_poc_inact_window_t2

0x145c,	// (0x00038b75) popup_call_poc_inact_window_t3_ParamLimits

0x145c,	// (0x00038b75) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x00046c2f) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x00046c2f) popup_call_poc_inact_window_t

0x242d,	// (0x00039b46) context_pane_ParamLimits

0x8906,	// (0x0004001f) signal_pane_ParamLimits

0x0fa1,	// (0x000386ba) main_call2_pane

0x887f,	// (0x0003ff98) popup_phob_thumbnail2_window_ParamLimits

0x887f,	// (0x0003ff98) popup_phob_thumbnail2_window

0x7f99,	// (0x0003f6b2) aid_hotspot_pointer_arrow_pane

0x7fa1,	// (0x0003f6ba) aid_hotspot_pointer_hand_pane

0x85fa,	// (0x0003fd13) phob_pre_status_pane_g5

0x61e9,	// (0x0003d902) cams_zoom_pane_ParamLimits

0x61f5,	// (0x0003d90e) image_vga_pane_ParamLimits

0x6204,	// (0x0003d91d) main_camera_pane_g1_ParamLimits

0x6212,	// (0x0003d92b) main_camera_pane_g2_ParamLimits

0x621e,	// (0x0003d937) main_camera_pane_g3_ParamLimits

0x622a,	// (0x0003d943) main_camera_pane_g4_ParamLimits

0x6236,	// (0x0003d94f) main_camera_pane_g5_ParamLimits

0x6242,	// (0x0003d95b) main_camera_pane_g6_ParamLimits

0x624e,	// (0x0003d967) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0004692e) main_camera_pane_g_ParamLimits

0x625a,	// (0x0003d973) main_camera_pane_t1_ParamLimits

0x626c,	// (0x0003d985) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0004693f) main_camera_pane_t_ParamLimits

0x0398,	// (0x00037ab1) bg_popup_preview_window_pane_cp01_ParamLimits

0x0398,	// (0x00037ab1) bg_popup_preview_window_pane_cp01

0x1471,	// (0x00038b8a) popup_phob_thumbnail2_window_g1_ParamLimits

0x1471,	// (0x00038b8a) popup_phob_thumbnail2_window_g1

0x013d,	// (0x00037856) call2_cli_visual_pane

0x82f4,	// (0x0003fa0d) popup_call2_audio_conf_window_ParamLimits

0x82f4,	// (0x0003fa0d) popup_call2_audio_conf_window

0x8309,	// (0x0003fa22) popup_call2_audio_first_window_ParamLimits

0x8309,	// (0x0003fa22) popup_call2_audio_first_window

0x83a7,	// (0x0003fac0) popup_call2_audio_in_window_ParamLimits

0x83a7,	// (0x0003fac0) popup_call2_audio_in_window

0x83e9,	// (0x0003fb02) popup_call2_audio_out_window_ParamLimits

0x83e9,	// (0x0003fb02) popup_call2_audio_out_window

0x844b,	// (0x0003fb64) popup_call2_audio_second_window_ParamLimits

0x844b,	// (0x0003fb64) popup_call2_audio_second_window

0x84a9,	// (0x0003fbc2) popup_call2_audio_wait_window_ParamLimits

0x84a9,	// (0x0003fbc2) popup_call2_audio_wait_window

0x013d,	// (0x00037856) bg_popup_call2_act_pane_cp03

0x037a,	// (0x00037a93) list_conf_pane_cp

0x147d,	// (0x00038b96) popup_call2_audio_conf_window_t1

0x0d82,	// (0x0003849b) list_single_graphic_popup_conf2_pane_ParamLimits

0x0d82,	// (0x0003849b) list_single_graphic_popup_conf2_pane

0x0d95,	// (0x000384ae) list_highlight_pane_cp04

0x148b,	// (0x00038ba4) list_single_graphic_popup_conf2_pane_g1

0x0da6,	// (0x000384bf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x00046c36) list_single_graphic_popup_conf2_pane_g

0x1495,	// (0x00038bae) list_single_graphic_popup_conf2_pane_t1

0x14a3,	// (0x00038bbc) bg_popup_call2_act_pane_cp01_ParamLimits

0x14a3,	// (0x00038bbc) bg_popup_call2_act_pane_cp01

0x152d,	// (0x00038c46) call_type_pane_cp05_ParamLimits

0x152d,	// (0x00038c46) call_type_pane_cp05

0x1581,	// (0x00038c9a) popup_call2_audio_second_window_g1_ParamLimits

0x1581,	// (0x00038c9a) popup_call2_audio_second_window_g1

0x15d5,	// (0x00038cee) popup_call2_audio_second_window_g2_ParamLimits

0x15d5,	// (0x00038cee) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x00046c3b) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x00046c3b) popup_call2_audio_second_window_g

0x163a,	// (0x00038d53) popup_call2_audio_second_window_t1_ParamLimits

0x163a,	// (0x00038d53) popup_call2_audio_second_window_t1

0x16f5,	// (0x00038e0e) popup_call2_audio_second_window_t2_ParamLimits

0x16f5,	// (0x00038e0e) popup_call2_audio_second_window_t2

0x1748,	// (0x00038e61) popup_call2_audio_second_window_t3_ParamLimits

0x1748,	// (0x00038e61) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x00046c42) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x00046c42) popup_call2_audio_second_window_t

0x013d,	// (0x00037856) bg_popup_call2_in_pane_cp02

0x0147,	// (0x00037860) call_type_pane_cp04

0x014f,	// (0x00037868) popup_call2_audio_wait_window_g1

0x0157,	// (0x00037870) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0004681b) popup_call2_audio_wait_window_g

0x015f,	// (0x00037878) popup_call2_audio_wait_window_t3

0x183b,	// (0x00038f54) bg_popup_call2_act_pane_ParamLimits

0x183b,	// (0x00038f54) bg_popup_call2_act_pane

0x18fb,	// (0x00039014) call_type_pane_cp03_ParamLimits

0x18fb,	// (0x00039014) call_type_pane_cp03

0x195f,	// (0x00039078) popup_call2_audio_first_window_g1_ParamLimits

0x195f,	// (0x00039078) popup_call2_audio_first_window_g1

0x19cf,	// (0x000390e8) popup_call2_audio_first_window_g2_ParamLimits

0x19cf,	// (0x000390e8) popup_call2_audio_first_window_g2

0x1060,	// (0x00038779) popup_call2_audio_first_window_g3_ParamLimits

0x1060,	// (0x00038779) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x00046c4b) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x00046c4b) popup_call2_audio_first_window_g

0x1aad,	// (0x000391c6) popup_call2_audio_first_window_t1_ParamLimits

0x1aad,	// (0x000391c6) popup_call2_audio_first_window_t1

0x1bb0,	// (0x000392c9) popup_call2_audio_first_window_t4_ParamLimits

0x1bb0,	// (0x000392c9) popup_call2_audio_first_window_t4

0x1c93,	// (0x000393ac) popup_call2_audio_first_window_t5_ParamLimits

0x1c93,	// (0x000393ac) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x00046c56) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x00046c56) popup_call2_audio_first_window_t

0x0390,	// (0x00037aa9) bg_popup_call2_act_pane_g1

0x2300,	// (0x00039a19) popup_cale_lunar_info_window_t1

0x230e,	// (0x00039a27) popup_cale_lunar_info_window_t2

0x231c,	// (0x00039a35) popup_cale_lunar_info_window_t3

0x013d,	// (0x00037856) bg_popup_call2_bubble_pane

0x1d94,	// (0x000394ad) bg_popup_call2_in_pane_cp01_ParamLimits

0x1d94,	// (0x000394ad) bg_popup_call2_in_pane_cp01

0xedde,	// (0x000464f7) call_type_pane_cp02

0x1ddc,	// (0x000394f5) popup_call2_audio_out_window_g1_ParamLimits

0x1ddc,	// (0x000394f5) popup_call2_audio_out_window_g1

0x1e08,	// (0x00039521) popup_call2_audio_out_window_g2_ParamLimits

0x1e08,	// (0x00039521) popup_call2_audio_out_window_g2

0x1e30,	// (0x00039549) popup_call2_audio_out_window_g3_ParamLimits

0x1e30,	// (0x00039549) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x00046c5f) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x00046c5f) popup_call2_audio_out_window_g

0x1e6b,	// (0x00039584) popup_call2_audio_out_window_t1_ParamLimits

0x1e6b,	// (0x00039584) popup_call2_audio_out_window_t1

0x1eca,	// (0x000395e3) popup_call2_audio_out_window_t2_ParamLimits

0x1eca,	// (0x000395e3) popup_call2_audio_out_window_t2

0x1f1e,	// (0x00039637) popup_call2_audio_out_window_t3_ParamLimits

0x1f1e,	// (0x00039637) popup_call2_audio_out_window_t3

0x1f34,	// (0x0003964d) popup_call2_audio_out_window_t4_ParamLimits

0x1f34,	// (0x0003964d) popup_call2_audio_out_window_t4

0x1f4a,	// (0x00039663) popup_call2_audio_out_window_t5_ParamLimits

0x1f4a,	// (0x00039663) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x00046c68) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x00046c68) popup_call2_audio_out_window_t

0x1fae,	// (0x000396c7) bg_popup_call2_in_pane_ParamLimits

0x1fae,	// (0x000396c7) bg_popup_call2_in_pane

0x200a,	// (0x00039723) popup_call2_audio_in_window_g1_ParamLimits

0x200a,	// (0x00039723) popup_call2_audio_in_window_g1

0x2042,	// (0x0003975b) popup_call2_audio_in_window_g2_ParamLimits

0x2042,	// (0x0003975b) popup_call2_audio_in_window_g2

0x207a,	// (0x00039793) popup_call2_audio_in_window_g3_ParamLimits

0x207a,	// (0x00039793) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x00046c75) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x00046c75) popup_call2_audio_in_window_g

0x20d2,	// (0x000397eb) popup_call2_audio_in_window_t1_ParamLimits

0x20d2,	// (0x000397eb) popup_call2_audio_in_window_t1

0x2152,	// (0x0003986b) popup_call2_audio_in_window_t2_ParamLimits

0x2152,	// (0x0003986b) popup_call2_audio_in_window_t2

0x21d2,	// (0x000398eb) popup_call2_audio_in_window_t3_ParamLimits

0x21d2,	// (0x000398eb) popup_call2_audio_in_window_t3

0x21ec,	// (0x00039905) popup_call2_audio_in_window_t4_ParamLimits

0x21ec,	// (0x00039905) popup_call2_audio_in_window_t4

0x21fe,	// (0x00039917) popup_call2_audio_in_window_t5_ParamLimits

0x21fe,	// (0x00039917) popup_call2_audio_in_window_t5

0x2213,	// (0x0003992c) popup_call2_audio_in_window_t6_ParamLimits

0x2213,	// (0x0003992c) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x00046c7e) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x00046c7e) popup_call2_audio_in_window_t

0x0390,	// (0x00037aa9) bg_popup_call2_in_pane_g1

0x232a,	// (0x00039a43) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x00046ce6) popup_cale_lunar_info_window_t

0x0398,	// (0x00037ab1) bg_popup_call2_rect_pane_ParamLimits

0x0398,	// (0x00037ab1) bg_popup_call2_rect_pane

0x013d,	// (0x00037856) call2_cli_visual_graphic_pane

0x013d,	// (0x00037856) call2_cli_visual_text_pane

0x89ac,	// (0x000400c5) smil_status_volume_pane_g3

0x0002,

0x04b2,	// (0x00037bcb) call2_cli_visual_graphic_pane_g1

0x04b2,	// (0x00037bcb) call2_cli_visual_graphic_pane_g2

0x04b2,	// (0x00037bcb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x00046c8b) call2_cli_visual_graphic_pane_g

0x2228,	// (0x00039941) bg_popup_call2_rect_pane_g1

0x053e,	// (0x00037c57) bg_popup_call2_rect_pane_g2

0x2230,	// (0x00039949) bg_popup_call2_rect_pane_g3

0x2238,	// (0x00039951) bg_popup_call2_rect_pane_g4

0x2240,	// (0x00039959) bg_popup_call2_rect_pane_g5

0x2248,	// (0x00039961) bg_popup_call2_rect_pane_g6

0x2250,	// (0x00039969) bg_popup_call2_rect_pane_g7

0x2258,	// (0x00039971) bg_popup_call2_rect_pane_g8

0x2260,	// (0x00039979) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x00046c92) bg_popup_call2_rect_pane_g

0x2268,	// (0x00039981) bg_popup_call2_bubble_pane_g1

0x2270,	// (0x00039989) bg_popup_call2_bubble_pane_g2

0x2278,	// (0x00039991) bg_popup_call2_bubble_pane_g3

0x2280,	// (0x00039999) bg_popup_call2_bubble_pane_g4

0x2288,	// (0x000399a1) bg_popup_call2_bubble_pane_g5

0x2290,	// (0x000399a9) bg_popup_call2_bubble_pane_g6

0x2298,	// (0x000399b1) bg_popup_call2_bubble_pane_g7

0x22a0,	// (0x000399b9) bg_popup_call2_bubble_pane_g8

0x22a8,	// (0x000399c1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x00046ca5) bg_popup_call2_bubble_pane_g

0x5c24,	// (0x0003d33d) aid_cale_week_size_cell_pane

0x627e,	// (0x0003d997) aid_cams_cif_uncrop_pane_ParamLimits

0x627e,	// (0x0003d997) aid_cams_cif_uncrop_pane

0x63d9,	// (0x0003daf2) aid_cams_size_cell_ParamLimits

0x63d9,	// (0x0003daf2) aid_cams_size_cell

0x63e5,	// (0x0003dafe) grid_cams_pane_ParamLimits

0x63f3,	// (0x0003db0c) linegrid_cams_pane_ParamLimits

0x64ca,	// (0x0003dbe3) call_video_pane_t1

0x64eb,	// (0x0003dc04) call_video_pane_t2

0x0001,

0xf279,	// (0x00046992) call_video_pane_t

0x6a34,	// (0x0003e14d) aid_cale_month_size_cell_pane_ParamLimits

0x6a34,	// (0x0003e14d) aid_cale_month_size_cell_pane

0xf616,	// (0x00046d2f) smil_status_volume_pane_g

0x89b9,	// (0x000400d2) volume_smil_pane_ParamLimits

0x5393,	// (0x0003caac) aid_popup2_width_pane

0x5b26,	// (0x0003d23f) cell_qdial_pane_g4_ParamLimits

0x5b26,	// (0x0003d23f) cell_qdial_pane_g4

0x7937,	// (0x0003f050) aid_blid_cardinal_pane_ParamLimits

0x7947,	// (0x0003f060) aid_blid_destination_pane_ParamLimits

0x7947,	// (0x0003f060) aid_blid_destination_pane

0x0398,	// (0x00037ab1) bg_popup_call_poc_act_pane_ParamLimits

0x0398,	// (0x00037ab1) bg_popup_call_poc_act_pane

0x0398,	// (0x00037ab1) bg_popup_call_poc_inact_pane_ParamLimits

0x0398,	// (0x00037ab1) bg_popup_call_poc_inact_pane

0x22b0,	// (0x000399c9) bg_popup_call_poc_act_pane_g1

0x22b8,	// (0x000399d1) bg_popup_call_poc_act_pane_g2

0x22c0,	// (0x000399d9) bg_popup_call_poc_act_pane_g3

0x2280,	// (0x00039999) bg_popup_call_poc_act_pane_g4

0x2288,	// (0x000399a1) bg_popup_call_poc_act_pane_g5

0x22c8,	// (0x000399e1) bg_popup_call_poc_act_pane_g6

0x2298,	// (0x000399b1) bg_popup_call_poc_act_pane_g7

0x22d0,	// (0x000399e9) bg_popup_call_poc_act_pane_g8

0x013d,	// (0x00037856) main_usb_pane

0x87ae,	// (0x0003fec7) popup_cale_lunar_info_window

0x6816,	// (0x0003df2f) im_reading_pane_t1_ParamLimits

0x0726,	// (0x00037e3f) list_im_pane_ParamLimits

0x0737,	// (0x00037e50) scroll_pane_cp07_ParamLimits

0x013d,	// (0x00037856) grid_highlight_pane_cp012

0x0398,	// (0x00037ab1) mup_scale_pane_ParamLimits

0x1060,	// (0x00038779) main_usb_pane_g1_ParamLimits

0x1060,	// (0x00038779) main_usb_pane_g1

0x851d,	// (0x0003fc36) main_usb_pane_g2_ParamLimits

0x851d,	// (0x0003fc36) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x00046ccf) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x00046ccf) main_usb_pane_g

0x8529,	// (0x0003fc42) main_usb_pane_t1_ParamLimits

0x8529,	// (0x0003fc42) main_usb_pane_t1

0x853b,	// (0x0003fc54) main_usb_pane_t2_ParamLimits

0x853b,	// (0x0003fc54) main_usb_pane_t2

0x854d,	// (0x0003fc66) main_usb_pane_t3_ParamLimits

0x854d,	// (0x0003fc66) main_usb_pane_t3

0x855f,	// (0x0003fc78) main_usb_pane_t4_ParamLimits

0x855f,	// (0x0003fc78) main_usb_pane_t4

0x8571,	// (0x0003fc8a) main_usb_pane_t5_ParamLimits

0x8571,	// (0x0003fc8a) main_usb_pane_t5

0x8583,	// (0x0003fc9c) main_usb_pane_t6_ParamLimits

0x8583,	// (0x0003fc9c) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x00046cd4) main_usb_pane_t_ParamLimits

0x78dd,	// (0x0003eff6) aid_text_placing

0x78e9,	// (0x0003f002) main_location2_pane_t1_ParamLimits

0x78fd,	// (0x0003f016) main_location2_pane_t2_ParamLimits

0x7911,	// (0x0003f02a) main_location2_pane_t3_ParamLimits

0x7925,	// (0x0003f03e) main_location2_pane_t4_ParamLimits

0x7925,	// (0x0003f03e) main_location2_pane_t4

0xf3da,	// (0x00046af3) main_location2_pane_t_ParamLimits

0x03d4,	// (0x00037aed) find_pinb_pane_g2_ParamLimits

0x03d4,	// (0x00037aed) find_pinb_pane_g2

0x0001,

0xf128,	// (0x00046841) find_pinb_pane_g_ParamLimits

0xf128,	// (0x00046841) find_pinb_pane_g

0x03e0,	// (0x00037af9) find_pinb_pane_t1_ParamLimits

0x03f2,	// (0x00037b0b) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x00046846) find_pinb_pane_t_ParamLimits

0x013d,	// (0x00037856) main_call3_pane

0x6f88,	// (0x0003e6a1) cale_month_day_heading_pane_t1_ParamLimits

0x700e,	// (0x0003e727) cale_month_day_heading_pane_t2_ParamLimits

0x709f,	// (0x0003e7b8) cale_month_day_heading_pane_t3_ParamLimits

0x7130,	// (0x0003e849) cale_month_day_heading_pane_t4_ParamLimits

0x71c1,	// (0x0003e8da) cale_month_day_heading_pane_t5_ParamLimits

0x7252,	// (0x0003e96b) cale_month_day_heading_pane_t6_ParamLimits

0x72e3,	// (0x0003e9fc) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000469ca) cale_month_day_heading_pane_t_ParamLimits

0x0981,	// (0x0003809a) smil_status_volume_pane

0x80e1,	// (0x0003f7fa) postcard_address_pane_ParamLimits

0x80e1,	// (0x0003f7fa) postcard_address_pane

0x80ed,	// (0x0003f806) postcard_message_pane_ParamLimits

0x80ed,	// (0x0003f806) postcard_message_pane

0x84e8,	// (0x0003fc01) call2_cli_visual_pane_t1_ParamLimits

0x84e8,	// (0x0003fc01) call2_cli_visual_pane_t1

0x8b10,	// (0x00040229) postcard_message_pane_t1_ParamLimits

0x8b10,	// (0x00040229) postcard_message_pane_t1

0x8af9,	// (0x00040212) postcard_address_pane_t1_ParamLimits

0x8af9,	// (0x00040212) postcard_address_pane_t1

0x8aea,	// (0x00040203) popup_call3_audio_in_window_ParamLimits

0x8aea,	// (0x00040203) popup_call3_audio_in_window

0x89ce,	// (0x000400e7) bg_popup_call3_in_pane_ParamLimits

0x89ce,	// (0x000400e7) bg_popup_call3_in_pane

0x8a30,	// (0x00040149) popup_call3_audio_in_window_g1_ParamLimits

0x8a30,	// (0x00040149) popup_call3_audio_in_window_g1

0x8a48,	// (0x00040161) popup_call3_audio_in_window_g2_ParamLimits

0x8a48,	// (0x00040161) popup_call3_audio_in_window_g2

0x8a60,	// (0x00040179) popup_call3_audio_in_window_g3_ParamLimits

0x8a60,	// (0x00040179) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x00046d36) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x00046d36) popup_call3_audio_in_window_g

0x8a88,	// (0x000401a1) popup_call3_audio_in_window_t1_ParamLimits

0x8a88,	// (0x000401a1) popup_call3_audio_in_window_t1

0x8ab0,	// (0x000401c9) popup_call3_audio_in_window_t2_ParamLimits

0x8ab0,	// (0x000401c9) popup_call3_audio_in_window_t2

0x8ad8,	// (0x000401f1) popup_call3_audio_in_window_t3_ParamLimits

0x8ad8,	// (0x000401f1) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x00046d3f) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x00046d3f) popup_call3_audio_in_window_t

0x0fa1,	// (0x000386ba) bg_popup_call3_rect_pane

0x2228,	// (0x00039941) bg_popup_call3_rect_pane_g1

0x053e,	// (0x00037c57) bg_popup_call3_rect_pane_g2

0x2230,	// (0x00039949) bg_popup_call3_rect_pane_g3

0x2238,	// (0x00039951) bg_popup_call3_rect_pane_g4

0x2240,	// (0x00039959) bg_popup_call3_rect_pane_g5

0x2248,	// (0x00039961) bg_popup_call3_rect_pane_g6

0x2250,	// (0x00039969) bg_popup_call3_rect_pane_g7

0x7d55,	// (0x0003f46e) mup_visualizer_osc_pane

0x106e,	// (0x00038787) mup_visualizer_spec_pane

0x89ee,	// (0x00040107) call3_video_qcif_pane_ParamLimits

0x89ee,	// (0x00040107) call3_video_qcif_pane

0x8a00,	// (0x00040119) call3_video_qcif_uncrop_pane_ParamLimits

0x8a00,	// (0x00040119) call3_video_qcif_uncrop_pane

0x8a0e,	// (0x00040127) call3_video_subqcif_pane_ParamLimits

0x8a0e,	// (0x00040127) call3_video_subqcif_pane

0x8a20,	// (0x00040139) call3_video_subqcif_uncrop_pane_ParamLimits

0x8a20,	// (0x00040139) call3_video_subqcif_uncrop_pane

0x8a78,	// (0x00040191) popup_call3_audio_in_window_g4_ParamLimits

0x8a78,	// (0x00040191) popup_call3_audio_in_window_g4

0x899b,	// (0x000400b4) mup_spec_half_pane

0x89a4,	// (0x000400bd) mup_spec_half_pane_cp

0x248d,	// (0x00039ba6) mup_osc_middle_pane

0x2496,	// (0x00039baf) mup_visualizer_osc_pane_g1

0x897c,	// (0x00040095) mup_spec_bar_pane_ParamLimits

0x897c,	// (0x00040095) mup_spec_bar_pane

0x247a,	// (0x00039b93) mup_spec_bar_pane_g1

0x2484,	// (0x00039b9d) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00046d2a) mup_spec_bar_pane_g

0x5c24,	// (0x0003d33d) aid_cale_week_size_cell_pane_ParamLimits

0x5c39,	// (0x0003d352) bg_cale_heading_pane_ParamLimits

0x057b,	// (0x00037c94) bg_cale_pane_cp01_ParamLimits

0x5c5b,	// (0x0003d374) cale_week_corner_pane_ParamLimits

0x5c75,	// (0x0003d38e) cale_week_day_heading_pane_ParamLimits

0x5c97,	// (0x0003d3b0) cale_week_scroll_pane_g1_ParamLimits

0x5cb4,	// (0x0003d3cd) cale_week_scroll_pane_g2_ParamLimits

0x5cc7,	// (0x0003d3e0) cale_week_scroll_pane_g3_ParamLimits

0x5cda,	// (0x0003d3f3) cale_week_scroll_pane_g4_ParamLimits

0x5ced,	// (0x0003d406) cale_week_scroll_pane_g5_ParamLimits

0x5d00,	// (0x0003d419) cale_week_scroll_pane_g6_ParamLimits

0x5d13,	// (0x0003d42c) cale_week_scroll_pane_g7_ParamLimits

0x5d26,	// (0x0003d43f) cale_week_scroll_pane_g8_ParamLimits

0x5d3b,	// (0x0003d454) cale_week_scroll_pane_g9_ParamLimits

0x5d4e,	// (0x0003d467) cale_week_scroll_pane_g10_ParamLimits

0x5d61,	// (0x0003d47a) cale_week_scroll_pane_g11_ParamLimits

0x5d74,	// (0x0003d48d) cale_week_scroll_pane_g12_ParamLimits

0x5d8b,	// (0x0003d4a4) cale_week_scroll_pane_g13_ParamLimits

0x5da6,	// (0x0003d4bf) cale_week_scroll_pane_g14_ParamLimits

0x5dc1,	// (0x0003d4da) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000468d2) cale_week_scroll_pane_g_ParamLimits

0x5ddc,	// (0x0003d4f5) cale_week_time_pane_ParamLimits

0x5df1,	// (0x0003d50a) grid_cale_week_pane_ParamLimits

0x0599,	// (0x00037cb2) listscroll_cale_week_pane_t1

0x05ab,	// (0x00037cc4) scroll_pane_cp08_ParamLimits

0x6a9d,	// (0x0003e1b6) cale_month_corner_pane_ParamLimits

0x0957,	// (0x00038070) cale_month_pane_t1

0x6f25,	// (0x0003e63e) cale_month_week_pane_ParamLimits

0x1060,	// (0x00038779) popup_call_status_window_g1_ParamLimits

0x7710,	// (0x0003ee29) popup_call_status_window_g2_ParamLimits

0x771c,	// (0x0003ee35) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x00046a7a) popup_call_status_window_g_ParamLimits

0x0d1d,	// (0x00038436) aid_call2_pane

0x434f,	// (0x0003ba68) msg_header_pane_g1

0x80e1,	// (0x0003f7fa) postcard_address2_pane_ParamLimits

0x80e1,	// (0x0003f7fa) postcard_address2_pane

0x80ed,	// (0x0003f806) postcard_message2_pane_ParamLimits

0x80ed,	// (0x0003f806) postcard_message2_pane

0x8914,	// (0x0004002d) message2_row_pane_ParamLimits

0x8914,	// (0x0004002d) message2_row_pane

0x892f,	// (0x00040048) address2_row_pane_ParamLimits

0x892f,	// (0x00040048) address2_row_pane

0x2448,	// (0x00039b61) postcard_message2_row_pane_g1

0x2450,	// (0x00039b69) postcard_message2_row_pane_t1

0x2448,	// (0x00039b61) address2_row_pane_g1

0x2450,	// (0x00039b69) address2_row_pane_t1

0x6148,	// (0x0003d861) aid_size_cell_vorec

0x013d,	// (0x00037856) main_rss_pane

0x8942,	// (0x0004005b) rss_list_single_pane_ParamLimits

0x8942,	// (0x0004005b) rss_list_single_pane

0x245e,	// (0x00039b77) rss_list_single_pane_t1

0x246c,	// (0x00039b85) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x00046d25) rss_list_single_pane_t

0x013d,	// (0x00037856) main_camera2_pane

0x013d,	// (0x00037856) main_video2_pane

0x8b74,	// (0x0004028d) cams_zoom_pane_cp2_ParamLimits

0x8b74,	// (0x0004028d) cams_zoom_pane_cp2

0x8b80,	// (0x00040299) image2_vga_pane_ParamLimits

0x8b80,	// (0x00040299) image2_vga_pane

0x8b8f,	// (0x000402a8) main_camera2_pane_g1_ParamLimits

0x8b8f,	// (0x000402a8) main_camera2_pane_g1

0x8b9b,	// (0x000402b4) main_camera2_pane_g2_ParamLimits

0x8b9b,	// (0x000402b4) main_camera2_pane_g2

0x8ba7,	// (0x000402c0) main_camera2_pane_g3_ParamLimits

0x8ba7,	// (0x000402c0) main_camera2_pane_g3

0x8bb3,	// (0x000402cc) main_camera2_pane_g4_ParamLimits

0x8bb3,	// (0x000402cc) main_camera2_pane_g4

0x8bbf,	// (0x000402d8) main_camera2_pane_g5_ParamLimits

0x8bbf,	// (0x000402d8) main_camera2_pane_g5

0x8bcb,	// (0x000402e4) main_camera2_pane_g6_ParamLimits

0x8bcb,	// (0x000402e4) main_camera2_pane_g6

0x8bd7,	// (0x000402f0) main_camera2_pane_g7_ParamLimits

0x8bd7,	// (0x000402f0) main_camera2_pane_g7

0x8be3,	// (0x000402fc) main_camera2_pane_g8_ParamLimits

0x8be3,	// (0x000402fc) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x00046d46) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x00046d46) main_camera2_pane_g

0x8bfb,	// (0x00040314) main_camera2_pane_t1_ParamLimits

0x8bfb,	// (0x00040314) main_camera2_pane_t1

0x8c0d,	// (0x00040326) main_camera2_pane_t2_ParamLimits

0x8c0d,	// (0x00040326) main_camera2_pane_t2

0x8c1f,	// (0x00040338) main_camera2_pane_t3_ParamLimits

0x8c1f,	// (0x00040338) main_camera2_pane_t3

0x8c31,	// (0x0004034a) main_camera2_pane_t4_ParamLimits

0x8c31,	// (0x0004034a) main_camera2_pane_t4

0x0006,

0xf640,	// (0x00046d59) main_camera2_pane_t_ParamLimits

0xf640,	// (0x00046d59) main_camera2_pane_t

0x8c93,	// (0x000403ac) cams_zoom_pane_cp4_ParamLimits

0x8c93,	// (0x000403ac) cams_zoom_pane_cp4

0x8ca3,	// (0x000403bc) image2_cif_pane_ParamLimits

0x8ca3,	// (0x000403bc) image2_cif_pane

0x8cb8,	// (0x000403d1) image2_subqcif_pane_ParamLimits

0x8cb8,	// (0x000403d1) image2_subqcif_pane

0x8cc7,	// (0x000403e0) main_video2_pane_g1_ParamLimits

0x8cc7,	// (0x000403e0) main_video2_pane_g1

0x8cd9,	// (0x000403f2) main_video2_pane_g2_ParamLimits

0x8cd9,	// (0x000403f2) main_video2_pane_g2

0x8ce9,	// (0x00040402) main_video2_pane_g3_ParamLimits

0x8ce9,	// (0x00040402) main_video2_pane_g3

0x8cf9,	// (0x00040412) main_video2_pane_g4_ParamLimits

0x8cf9,	// (0x00040412) main_video2_pane_g4

0x8d09,	// (0x00040422) main_video2_pane_g5_ParamLimits

0x8d09,	// (0x00040422) main_video2_pane_g5

0x8d19,	// (0x00040432) main_video2_pane_g6_ParamLimits

0x8d19,	// (0x00040432) main_video2_pane_g6

0x0005,

0xf64f,	// (0x00046d68) main_video2_pane_g_ParamLimits

0xf64f,	// (0x00046d68) main_video2_pane_g

0x8d2b,	// (0x00040444) main_video2_pane_t1_ParamLimits

0x8d2b,	// (0x00040444) main_video2_pane_t1

0x8d45,	// (0x0004045e) main_video2_pane_t2_ParamLimits

0x8d45,	// (0x0004045e) main_video2_pane_t2

0x8d6b,	// (0x00040484) main_video2_pane_t3_ParamLimits

0x8d6b,	// (0x00040484) main_video2_pane_t3

0x0002,

0xf65c,	// (0x00046d75) main_video2_pane_t_ParamLimits

0xf65c,	// (0x00046d75) main_video2_pane_t

0x863a,	// (0x0003fd53) call_muted_g2

0x0001,

0xf5fe,	// (0x00046d17) call_muted_g

0x013d,	// (0x00037856) main_mup2_pane

0x24fb,	// (0x00039c14) main_mup2_pane_g1_ParamLimits

0x24fb,	// (0x00039c14) main_mup2_pane_g1

0x8d91,	// (0x000404aa) main_mup2_pane_g2_ParamLimits

0x8d91,	// (0x000404aa) main_mup2_pane_g2

0x9013,	// (0x0004072c) main_mup_pane_g13_cp1

0x901b,	// (0x00040734) mup_volume_pane_cp1

0x8db1,	// (0x000404ca) main_mup2_pane_g4_ParamLimits

0x8db1,	// (0x000404ca) main_mup2_pane_g4

0x8dc6,	// (0x000404df) main_mup2_pane_g5_ParamLimits

0x8dc6,	// (0x000404df) main_mup2_pane_g5

0x8ddb,	// (0x000404f4) main_mup2_pane_g6_ParamLimits

0x8ddb,	// (0x000404f4) main_mup2_pane_g6

0x8df0,	// (0x00040509) main_mup2_pane_g7_ParamLimits

0x8df0,	// (0x00040509) main_mup2_pane_g7

0x0006,

0xf663,	// (0x00046d7c) main_mup2_pane_g_ParamLimits

0xf663,	// (0x00046d7c) main_mup2_pane_g

0x8e0c,	// (0x00040525) main_mup2_pane_t1_ParamLimits

0x8e0c,	// (0x00040525) main_mup2_pane_t1

0x8e23,	// (0x0004053c) main_mup2_pane_t2_ParamLimits

0x8e23,	// (0x0004053c) main_mup2_pane_t2

0x8e3a,	// (0x00040553) main_mup2_pane_t3_ParamLimits

0x8e3a,	// (0x00040553) main_mup2_pane_t3

0x8e51,	// (0x0004056a) main_mup2_pane_t4_ParamLimits

0x8e51,	// (0x0004056a) main_mup2_pane_t4

0x8e6b,	// (0x00040584) main_mup2_pane_t5_ParamLimits

0x8e6b,	// (0x00040584) main_mup2_pane_t5

0x8e85,	// (0x0004059e) main_mup2_pane_t6_ParamLimits

0x8e85,	// (0x0004059e) main_mup2_pane_t6

0x0005,

0xf672,	// (0x00046d8b) main_mup2_pane_t_ParamLimits

0xf672,	// (0x00046d8b) main_mup2_pane_t

0x8ebd,	// (0x000405d6) mup2_visualizer_pane_ParamLimits

0x8ebd,	// (0x000405d6) mup2_visualizer_pane

0x8ef3,	// (0x0004060c) mup_progress_pane_cp_ParamLimits

0x8ef3,	// (0x0004060c) mup_progress_pane_cp

0x8ffe,	// (0x00040717) mup_volume_pane_cp_ParamLimits

0x8ffe,	// (0x00040717) mup_volume_pane_cp

0x8f0a,	// (0x00040623) mup2_visualizer_pane_g1_ParamLimits

0x8f0a,	// (0x00040623) mup2_visualizer_pane_g1

0x24cd,	// (0x00039be6) mup2_visualizer_pane_g2_ParamLimits

0x24cd,	// (0x00039be6) mup2_visualizer_pane_g2

0x8f1f,	// (0x00040638) mup2_visualizer_pane_g3_ParamLimits

0x8f1f,	// (0x00040638) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x00046d98) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x00046d98) mup2_visualizer_pane_g

0x130d,	// (0x00038a26) aid_size_cell_fmradio

0x8750,	// (0x0003fe69) aid_height_parent_landcape

0x07b5,	// (0x00037ece) wml_content_pane_cp

0x07bd,	// (0x00037ed6) wml_tabs_pane

0x07c6,	// (0x00037edf) popup_wml_miniature_window

0x07ce,	// (0x00037ee7) scroll_pane_cp021

0x07e2,	// (0x00037efb) wml_content_pane_comp8

0x013d,	// (0x00037856) bg_popup_sub_pane_cp05

0x24eb,	// (0x00039c04) popup_wml_miniature_window_g1

0x24f3,	// (0x00039c0c) wml_miniature_view_pane

0x8f2d,	// (0x00040646) aid_size_wml_view

0x8f35,	// (0x0004064e) wml_miniature_view_pane_g1

0x8f3e,	// (0x00040657) wml_miniature_view_pane_g2

0x8f47,	// (0x00040660) wml_miniature_view_pane_g3

0x8f4f,	// (0x00040668) wml_miniature_view_pane_g4

0x8f57,	// (0x00040670) wml_miniature_view_pane_g5

0x8f5f,	// (0x00040678) wml_miniature_view_pane_g6

0x8f67,	// (0x00040680) wml_miniature_view_pane_g7

0x8f6f,	// (0x00040688) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x00046d9f) wml_miniature_view_pane_g

0x24fb,	// (0x00039c14) background_graphic_ParamLimits

0x24fb,	// (0x00039c14) background_graphic

0x2507,	// (0x00039c20) wml_tabs_2_pane

0x2510,	// (0x00039c29) wml_tabs_3_pane_ParamLimits

0x2510,	// (0x00039c29) wml_tabs_3_pane

0x2522,	// (0x00039c3b) wml_tabs_4_pane_ParamLimits

0x2522,	// (0x00039c3b) wml_tabs_4_pane

0x2538,	// (0x00039c51) wml_tabs_5_pane_ParamLimits

0x2538,	// (0x00039c51) wml_tabs_5_pane

0x2552,	// (0x00039c6b) wml_tabs_pane_g2_ParamLimits

0x2552,	// (0x00039c6b) wml_tabs_pane_g2

0x2566,	// (0x00039c7f) wml_tabs_pane_g3_ParamLimits

0x2566,	// (0x00039c7f) wml_tabs_pane_g3

0x8f77,	// (0x00040690) wml_tabs_2_active_pane_ParamLimits

0x8f77,	// (0x00040690) wml_tabs_2_active_pane

0x8f87,	// (0x000406a0) wml_tabs_2_passive_pane_ParamLimits

0x8f87,	// (0x000406a0) wml_tabs_2_passive_pane

0x8f97,	// (0x000406b0) wml_tabs_3_active_pane_cp_ParamLimits

0x8f97,	// (0x000406b0) wml_tabs_3_active_pane_cp

0x8fa8,	// (0x000406c1) wml_tabs_3_passive_pane_ParamLimits

0x8fa8,	// (0x000406c1) wml_tabs_3_passive_pane

0x8fb9,	// (0x000406d2) wml_tabs_3_passive_pane_cp_ParamLimits

0x8fb9,	// (0x000406d2) wml_tabs_3_passive_pane_cp

0x8fca,	// (0x000406e3) tabs_4_active_pane

0x8fd2,	// (0x000406eb) tabs_4_passive_pane

0x8fda,	// (0x000406f3) tabs_4_passive_pane_cp

0x8fe2,	// (0x000406fb) tabs_4_passive_pane_cp2

0x8515,	// (0x0003fc2e) aid_height_text

0x7d22,	// (0x0003f43b) mup_volume_cont_pane_ParamLimits

0x7d22,	// (0x0003f43b) mup_volume_cont_pane

0x5762,	// (0x0003ce7b) aid_size_cell_pinb

0x576c,	// (0x0003ce85) aid_size_list_pinb

0x8edc,	// (0x000405f5) mup2_volume_cont_pane_ParamLimits

0x8edc,	// (0x000405f5) mup2_volume_cont_pane

0x8fea,	// (0x00040703) mup2_volume_cont_pane_g1_ParamLimits

0x8fea,	// (0x00040703) mup2_volume_cont_pane_g1

0x539f,	// (0x0003cab8) aid_size_cell_touch_ParamLimits

0x539f,	// (0x0003cab8) aid_size_cell_touch

0x5648,	// (0x0003cd61) touch_pane_ParamLimits

0x5648,	// (0x0003cd61) touch_pane

0xe6de,	// (0x00045df7) main_rss2_pane

0x2583,	// (0x00039c9c) listscroll_rss2_pane

0x258c,	// (0x00039ca5) rss2_navigation_pane

0x2594,	// (0x00039cad) list_rss2_pane

0x0e58,	// (0x00038571) scroll_pane_cp22

0x259c,	// (0x00039cb5) rss2_navigation_pane_g1

0x25a5,	// (0x00039cbe) rss2_navigation_pane_g2

0x25ad,	// (0x00039cc6) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x00046db0) rss2_navigation_pane_g

0x25b5,	// (0x00039cce) rss2_navigation_pane_t1

0x9023,	// (0x0004073c) rss2_list_single_pane_ParamLimits

0x9023,	// (0x0004073c) rss2_list_single_pane

0x25c3,	// (0x00039cdc) rss2_list_single_pane_t2

0x25d1,	// (0x00039cea) rss2_list_single_pane_t3_ParamLimits

0x25d1,	// (0x00039cea) rss2_list_single_pane_t3

0x25ee,	// (0x00039d07) rss2_list_single_pane_t4

0x758b,	// (0x0003eca4) smil_status_pane_g1

0x0c6c,	// (0x00038385) main_image2_pane_ParamLimits

0x0c6c,	// (0x00038385) main_image2_pane

0x8bef,	// (0x00040308) main_camera2_pane_g9_ParamLimits

0x8bef,	// (0x00040308) main_camera2_pane_g9

0x8c43,	// (0x0004035c) main_camera2_pane_t5_ParamLimits

0x8c43,	// (0x0004035c) main_camera2_pane_t5

0x8c55,	// (0x0004036e) main_camera2_pane_t6_ParamLimits

0x8c55,	// (0x0004036e) main_camera2_pane_t6

0x9054,	// (0x0004076d) main_image2_pane_g1_ParamLimits

0x9054,	// (0x0004076d) main_image2_pane_g1

0x82b5,	// (0x0003f9ce) smil2_video_pane_ParamLimits

0x82b5,	// (0x0003f9ce) smil2_video_pane

0x40e5,	// (0x0003b7fe) aid_zoom_text_primary_cp

0x55f1,	// (0x0003cd0a) popup_preview_fixed_window

0x071e,	// (0x00037e37) im_reading_pane_g1

0x8b39,	// (0x00040252) cams2_bc_adjust_pane_cp_ParamLimits

0x8b39,	// (0x00040252) cams2_bc_adjust_pane_cp

0x8c85,	// (0x0004039e) cams2_bc_adjust_pane_ParamLimits

0x8c85,	// (0x0004039e) cams2_bc_adjust_pane

0x9060,	// (0x00040779) cams2_bc_adjust_pane_g1

0x9068,	// (0x00040781) cams2_slider_pane

0x9071,	// (0x0004078a) cams2_slider_pane_g1

0x907a,	// (0x00040793) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x00046db7) cams2_slider_pane_g

0x5872,	// (0x0003cf8b) calc_display_pane_ParamLimits

0x5890,	// (0x0003cfa9) calc_paper_pane_ParamLimits

0x58ac,	// (0x0003cfc5) grid_calc_pane_ParamLimits

0x777e,	// (0x0003ee97) popup_clock_digital_window_t1_ParamLimits

0x12aa,	// (0x000389c3) main_image_pane_t1

0x5858,	// (0x0003cf71) aid_size_cell_calc_ParamLimits

0x5858,	// (0x0003cf71) aid_size_cell_calc

0x878a,	// (0x0003fea3) popup_blid_sat_info2_window_ParamLimits

0x878a,	// (0x0003fea3) popup_blid_sat_info2_window

0x2604,	// (0x00039d1d) aid_size_cell_blid

0x260c,	// (0x00039d25) bg_popup_window_pane_cp07

0x262f,	// (0x00039d48) grid_popup_blid_pane

0x2639,	// (0x00039d52) heading_pane_cp05_ParamLimits

0x2639,	// (0x00039d52) heading_pane_cp05

0x2703,	// (0x00039e1c) cell_popup_blid_pane_ParamLimits

0x2703,	// (0x00039e1c) cell_popup_blid_pane

0x2727,	// (0x00039e40) cell_popup_blid_pane_g1

0x272f,	// (0x00039e48) cell_popup_blid_pane_t1

0x8ea2,	// (0x000405bb) mup2_indicator_pane_ParamLimits

0x8ea2,	// (0x000405bb) mup2_indicator_pane

0x0fa1,	// (0x000386ba) mup2_visualizer_osc_pane

0x24d9,	// (0x00039bf2) mup2_visualizer_spec_pane_ParamLimits

0x24d9,	// (0x00039bf2) mup2_visualizer_spec_pane

0x9094,	// (0x000407ad) mup2_spec_half_pane

0x909d,	// (0x000407b6) mup2_spec_half_pane_cp

0x90a7,	// (0x000407c0) mup2_spec_bar_pane_ParamLimits

0x90a7,	// (0x000407c0) mup2_spec_bar_pane

0x247a,	// (0x00039b93) mup2_spec_bar_pane_g1

0x2484,	// (0x00039b9d) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00046d2a) mup2_spec_bar_pane_g

0x90c6,	// (0x000407df) mup2_osc_middle_pane

0x2496,	// (0x00039baf) mup2_visualizer_osc_pane_g1

0xed0f,	// (0x00046428) popup_number_entry_window_t1_ParamLimits

0xed22,	// (0x0004643b) popup_number_entry_window_t2_ParamLimits

0xed34,	// (0x0004644d) popup_number_entry_window_t3_ParamLimits

0x569f,	// (0x0003cdb8) popup_number_entry_window_t5_ParamLimits

0x569f,	// (0x0003cdb8) popup_number_entry_window_t5

0xf0d3,	// (0x000467ec) popup_number_entry_window_t_ParamLimits

0xed46,	// (0x0004645f) text_title_cp2_ParamLimits

0x7fa9,	// (0x0003f6c2) aid_hotspot_pointer_text2_pane

0x8043,	// (0x0003f75c) main_viewer_pane_g9_ParamLimits

0x8043,	// (0x0003f75c) main_viewer_pane_g9

0x0957,	// (0x00038070) cale_month_pane_t1_ParamLimits

0x0994,	// (0x000380ad) bg_cale_pane_ParamLimits

0x09ac,	// (0x000380c5) list_cale_pane_ParamLimits

0x09bd,	// (0x000380d6) listscroll_cale_day_pane_t1

0x09cf,	// (0x000380e8) scroll_pane_cp09_ParamLimits

0x7d5d,	// (0x0003f476) main_mup_eq_pane_t1_ParamLimits

0x7d5d,	// (0x0003f476) main_mup_eq_pane_t1

0x7d77,	// (0x0003f490) main_mup_eq_pane_t2_ParamLimits

0x7d77,	// (0x0003f490) main_mup_eq_pane_t2

0x7d91,	// (0x0003f4aa) main_mup_eq_pane_t3_ParamLimits

0x7d91,	// (0x0003f4aa) main_mup_eq_pane_t3

0x7da9,	// (0x0003f4c2) main_mup_eq_pane_t4_ParamLimits

0x7da9,	// (0x0003f4c2) main_mup_eq_pane_t4

0x7dc1,	// (0x0003f4da) main_mup_eq_pane_t5_ParamLimits

0x7dc1,	// (0x0003f4da) main_mup_eq_pane_t5

0x7dd9,	// (0x0003f4f2) main_mup_eq_pane_t6_ParamLimits

0x7dd9,	// (0x0003f4f2) main_mup_eq_pane_t6

0x7ded,	// (0x0003f506) main_mup_eq_pane_t7_ParamLimits

0x7ded,	// (0x0003f506) main_mup_eq_pane_t7

0x7e01,	// (0x0003f51a) main_mup_eq_pane_t8_ParamLimits

0x7e01,	// (0x0003f51a) main_mup_eq_pane_t8

0x7e17,	// (0x0003f530) main_mup_eq_pane_t9_ParamLimits

0x7e17,	// (0x0003f530) main_mup_eq_pane_t9

0x7e2f,	// (0x0003f548) main_mup_eq_pane_t10_ParamLimits

0x7e2f,	// (0x0003f548) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x00046b79) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x00046b79) main_mup_eq_pane_t

0x7eec,	// (0x0003f605) mup_equalizer_pane_cp5_ParamLimits

0x7f02,	// (0x0003f61b) mup_equalizer_pane_cp6_ParamLimits

0x7f1a,	// (0x0003f633) mup_equalizer_pane_cp7_ParamLimits

0xe6de,	// (0x00045df7) main_gallery_pane

0x249f,	// (0x00039bb8) smil2_volume_pane

0x24ba,	// (0x00039bd3) smil_status_volume_pane_g1_ParamLimits

0x24a7,	// (0x00039bc0) smil_status_volume_pane_g2_ParamLimits

0x89ac,	// (0x000400c5) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x00046d2f) smil_status_volume_pane_g_ParamLimits

0x260c,	// (0x00039d25) bg_popup_window_pane_cp07_ParamLimits

0x261a,	// (0x00039d33) blid_firmament_pane

0x90cf,	// (0x000407e8) aid_size_cell_gallery_ParamLimits

0x90cf,	// (0x000407e8) aid_size_cell_gallery

0x90dd,	// (0x000407f6) grid_gallery_pane_ParamLimits

0x90dd,	// (0x000407f6) grid_gallery_pane

0x90ed,	// (0x00040806) cell_gallery_pane_ParamLimits

0x90ed,	// (0x00040806) cell_gallery_pane

0x273d,	// (0x00039e56) bg_cell_gallery_focus_pane_ParamLimits

0x273d,	// (0x00039e56) bg_cell_gallery_focus_pane

0x274f,	// (0x00039e68) cell_gallery_pane_g1_ParamLimits

0x274f,	// (0x00039e68) cell_gallery_pane_g1

0x913b,	// (0x00040854) cell_gallery_pane_g2_ParamLimits

0x913b,	// (0x00040854) cell_gallery_pane_g2

0x9148,	// (0x00040861) cell_gallery_pane_g3_ParamLimits

0x9148,	// (0x00040861) cell_gallery_pane_g3

0x275b,	// (0x00039e74) cell_gallery_pane_g4_ParamLimits

0x275b,	// (0x00039e74) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x00046ddd) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x00046ddd) cell_gallery_pane_g

0x2767,	// (0x00039e80) bg_cell_gallery_focus_pane_g1

0x276f,	// (0x00039e88) bg_cell_gallery_focus_pane_g2

0x2777,	// (0x00039e90) bg_cell_gallery_focus_pane_g3

0x277f,	// (0x00039e98) bg_cell_gallery_focus_pane_g4

0x2787,	// (0x00039ea0) bg_cell_gallery_focus_pane_g5

0x278f,	// (0x00039ea8) bg_cell_gallery_focus_pane_g6

0x2797,	// (0x00039eb0) bg_cell_gallery_focus_pane_g7

0x279f,	// (0x00039eb8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x00046de6) bg_cell_gallery_focus_pane_g

0x27a7,	// (0x00039ec0) aid_firma_cardinal

0x27bb,	// (0x00039ed4) blid_firmament_pane_t1

0x27d2,	// (0x00039eeb) blid_firmament_pane_t2

0x27e9,	// (0x00039f02) blid_firmament_pane_t3

0x2800,	// (0x00039f19) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x00046df7) blid_firmament_pane_t

0x2817,	// (0x00039f30) blid_sat_info_pane

0x2827,	// (0x00039f40) blid_sat_info_pane_g1

0x2827,	// (0x00039f40) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x00046e00) blid_sat_info_pane_g

0x2831,	// (0x00039f4a) blid_sat_info_pane_t1

0x283f,	// (0x00039f58) smil2_volume_content_pane

0x2848,	// (0x00039f61) smil2_volume_pane_g1

0x2850,	// (0x00039f69) smil2_volume_content_pane_g1

0x2859,	// (0x00039f72) smil2_volume_content_pane_g2

0x2862,	// (0x00039f7b) smil2_volume_content_pane_g3

0x286b,	// (0x00039f84) smil2_volume_content_pane_g4

0x2874,	// (0x00039f8d) smil2_volume_content_pane_g5

0x287d,	// (0x00039f96) smil2_volume_content_pane_g6

0x2886,	// (0x00039f9f) smil2_volume_content_pane_g7

0x288f,	// (0x00039fa8) smil2_volume_content_pane_g8

0x2898,	// (0x00039fb1) smil2_volume_content_pane_g9

0x28a1,	// (0x00039fba) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x00046e05) smil2_volume_content_pane_g

0x5e72,	// (0x0003d58b) cale_week_day_heading_pane_t1_ParamLimits

0x5ead,	// (0x0003d5c6) cale_week_day_heading_pane_t2_ParamLimits

0x5ee8,	// (0x0003d601) cale_week_day_heading_pane_t3_ParamLimits

0x5f23,	// (0x0003d63c) cale_week_day_heading_pane_t4_ParamLimits

0x5f5e,	// (0x0003d677) cale_week_day_heading_pane_t5_ParamLimits

0x5f99,	// (0x0003d6b2) cale_week_day_heading_pane_t6_ParamLimits

0x5fd4,	// (0x0003d6ed) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000468f1) cale_week_day_heading_pane_t_ParamLimits

0x05c8,	// (0x00037ce1) bg_cale_side_pane_ParamLimits

0x600f,	// (0x0003d728) cale_week_time_pane_t1_ParamLimits

0x6029,	// (0x0003d742) cale_week_time_pane_t2_ParamLimits

0x6043,	// (0x0003d75c) cale_week_time_pane_t3_ParamLimits

0x605d,	// (0x0003d776) cale_week_time_pane_t4_ParamLimits

0x6077,	// (0x0003d790) cale_week_time_pane_t5_ParamLimits

0x6091,	// (0x0003d7aa) cale_week_time_pane_t6_ParamLimits

0x60b1,	// (0x0003d7ca) cale_week_time_pane_t7_ParamLimits

0x60d3,	// (0x0003d7ec) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x00046900) cale_week_time_pane_t_ParamLimits

0x60f7,	// (0x0003d810) cell_cale_week_pane_g2_ParamLimits

0x05c8,	// (0x00037ce1) bg_cale_side_pane_cp01_ParamLimits

0x738c,	// (0x0003eaa5) cale_month_week_pane_t1_ParamLimits

0x73a5,	// (0x0003eabe) cale_month_week_pane_t2_ParamLimits

0x73be,	// (0x0003ead7) cale_month_week_pane_t3_ParamLimits

0x73d7,	// (0x0003eaf0) cale_month_week_pane_t4_ParamLimits

0x73f0,	// (0x0003eb09) cale_month_week_pane_t5_ParamLimits

0x7411,	// (0x0003eb2a) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000469d9) cale_month_week_pane_t_ParamLimits

0x7554,	// (0x0003ec6d) cell_cale_month_pane_g1_ParamLimits

0xe6de,	// (0x00045df7) main_cale_event_viewer_pane

0xe6de,	// (0x00045df7) listscroll_cale_event_viewer_pane

0x28aa,	// (0x00039fc3) list_cale_ev_pane

0x28b2,	// (0x00039fcb) scroll_pane_cp023

0x28be,	// (0x00039fd7) field_cale_ev_pane_ParamLimits

0x28be,	// (0x00039fd7) field_cale_ev_pane

0x28dc,	// (0x00039ff5) field_cale_ev_content_pane_ParamLimits

0x28dc,	// (0x00039ff5) field_cale_ev_content_pane

0x28e8,	// (0x0003a001) field_cale_ev_pane_g1_ParamLimits

0x28e8,	// (0x0003a001) field_cale_ev_pane_g1

0x28f4,	// (0x0003a00d) field_cale_ev_pane_g2_ParamLimits

0x28f4,	// (0x0003a00d) field_cale_ev_pane_g2

0x290c,	// (0x0003a025) field_cale_ev_pane_g3_ParamLimits

0x290c,	// (0x0003a025) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x00046e1a) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x00046e1a) field_cale_ev_pane_g

0x2924,	// (0x0003a03d) field_cale_ev_pane_t1_ParamLimits

0x2924,	// (0x0003a03d) field_cale_ev_pane_t1

0x293b,	// (0x0003a054) field_cale_ev_content_pane_t1_ParamLimits

0x293b,	// (0x0003a054) field_cale_ev_content_pane_t1

0x7f90,	// (0x0003f6a9) bg_button_pane_cp01

0x5c14,	// (0x0003d32d) listscroll_cale_week_pane_ParamLimits

0x0572,	// (0x00037c8b) popup_toolbar_window_cp01

0x0599,	// (0x00037cb2) listscroll_cale_week_pane_t1_ParamLimits

0x5c14,	// (0x0003d32d) listscroll_cale_day_pane_ParamLimits

0x0572,	// (0x00037c8b) popup_toolbar_window_cp02

0x09bd,	// (0x000380d6) listscroll_cale_day_pane_t1_ParamLimits

0x5c14,	// (0x0003d32d) main_cale_month_pane_ParamLimits

0x8891,	// (0x0003ffaa) popup_toolbar_window_cp03_ParamLimits

0x8891,	// (0x0003ffaa) popup_toolbar_window_cp03

0x81cb,	// (0x0003f8e4) main_image_pane_g2_ParamLimits

0x81cb,	// (0x0003f8e4) main_image_pane_g2

0x81d7,	// (0x0003f8f0) main_image_pane_g3_ParamLimits

0x81d7,	// (0x0003f8f0) main_image_pane_g3

0x0002,

0xf4f2,	// (0x00046c0b) main_image_pane_g_ParamLimits

0xf4f2,	// (0x00046c0b) main_image_pane_g

0x12aa,	// (0x000389c3) main_image_pane_t1_ParamLimits

0x81e3,	// (0x0003f8fc) main_image_pane_t2_ParamLimits

0x81e3,	// (0x0003f8fc) main_image_pane_t2

0x81f5,	// (0x0003f90e) main_image_pane_t3_ParamLimits

0x81f5,	// (0x0003f90e) main_image_pane_t3

0x8207,	// (0x0003f920) main_image_pane_t4_ParamLimits

0x8207,	// (0x0003f920) main_image_pane_t4

0x0003,

0xf4f9,	// (0x00046c12) main_image_pane_t_ParamLimits

0xf4f9,	// (0x00046c12) main_image_pane_t

0x8219,	// (0x0003f932) popup_image_details_window_cp01

0x8223,	// (0x0003f93c) popup_toobar_trans_pane_cp01_ParamLimits

0x8223,	// (0x0003f93c) popup_toobar_trans_pane_cp01

0x87e1,	// (0x0003fefa) popup_image_details_window_ParamLimits

0x87e1,	// (0x0003fefa) popup_image_details_window

0x87ef,	// (0x0003ff08) popup_image_focus_window

0x8b2b,	// (0x00040244) camera2_autofocus_pane_ParamLimits

0x8b2b,	// (0x00040244) camera2_autofocus_pane

0xe6de,	// (0x00045df7) bg_popup_sub_pane_cp06

0x2959,	// (0x0003a072) popup_image_focus_window_g1

0x2961,	// (0x0003a07a) popup_image_focus_window_g2

0x2969,	// (0x0003a082) popup_image_focus_window_g3

0x2971,	// (0x0003a08a) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x00046e21) popup_image_focus_window_g

0x2979,	// (0x0003a092) popup_image_focus_window_t1

0x2987,	// (0x0003a0a0) popup_image_focus_window_t2

0x2997,	// (0x0003a0b0) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x00046e2a) popup_image_focus_window_t

0x29a5,	// (0x0003a0be) camera2_autofocus_pane_g1

0x0c6c,	// (0x00038385) bg_tb_trans_pane_cp01

0x29b3,	// (0x0003a0cc) popup_image_details_window_g1

0x29c6,	// (0x0003a0df) popup_image_details_window_g2

0x0002,

0xf723,	// (0x00046e3c) popup_image_details_window_g

0x29ef,	// (0x0003a108) popup_image_details_window_t1

0x2a01,	// (0x0003a11a) popup_image_details_window_t2

0x2a1a,	// (0x0003a133) popup_image_details_window_t3

0x2a2e,	// (0x0003a147) popup_image_details_window_t4

0x2a49,	// (0x0003a162) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x00046e43) popup_image_details_window_t

0x0449,	// (0x00037b62) bg_calc_paper_pane_ParamLimits

0xe6de,	// (0x00045df7) grid_highlight_pane_cp013

0x59a9,	// (0x0003d0c2) list_calc_pane_ParamLimits

0x59bb,	// (0x0003d0d4) scroll_pane_cp024

0x045d,	// (0x00037b76) bg_calc_display_pane_ParamLimits

0x59c3,	// (0x0003d0dc) calc_display_pane_t1_ParamLimits

0x59d8,	// (0x0003d0f1) calc_display_pane_t2_ParamLimits

0x59ed,	// (0x0003d106) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x00046873) calc_display_pane_t_ParamLimits

0x5ac9,	// (0x0003d1e2) cell_calc_pane_g2

0x0001,

0xf177,	// (0x00046890) cell_calc_pane_g

0x5ad2,	// (0x0003d1eb) cell_calc_pane_t1

0x04bc,	// (0x00037bd5) grid_highlight_pane_cp02_ParamLimits

0x04d2,	// (0x00037beb) toolbar_button_pane_cp01_ParamLimits

0x04d2,	// (0x00037beb) toolbar_button_pane_cp01

0x12ef,	// (0x00038a08) temp_image_control_pane_ParamLimits

0x12ef,	// (0x00038a08) temp_image_control_pane

0x0c6c,	// (0x00038385) main_mp3_pane

0x2a63,	// (0x0003a17c) temp_image_control_pane_g1_ParamLimits

0x2a63,	// (0x0003a17c) temp_image_control_pane_g1

0x2a71,	// (0x0003a18a) temp_image_control_pane_g2_ParamLimits

0x2a71,	// (0x0003a18a) temp_image_control_pane_g2

0x2a83,	// (0x0003a19c) temp_image_control_pane_g3_ParamLimits

0x2a83,	// (0x0003a19c) temp_image_control_pane_g3

0x9185,	// (0x0004089e) temp_image_control_pane_g4_ParamLimits

0x9185,	// (0x0004089e) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x00046e4e) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x00046e4e) temp_image_control_pane_g

0x2a63,	// (0x0003a17c) main_mp3_pane_g1

0x9196,	// (0x000408af) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x00046e57) main_mp3_pane_g

0x2ac6,	// (0x0003a1df) main_mp3_pane_t1

0x062d,	// (0x00037d46) main_camera_pane_g8_ParamLimits

0x062d,	// (0x00037d46) main_camera_pane_g8

0x638f,	// (0x0003daa8) main_video_pane_g7_ParamLimits

0x638f,	// (0x0003daa8) main_video_pane_g7

0x8c73,	// (0x0004038c) main_camera2_pane_t7_ParamLimits

0x8c73,	// (0x0004038c) main_camera2_pane_t7

0x0775,	// (0x00037e8e) scroll_pane_cp025_ParamLimits

0x0775,	// (0x00037e8e) scroll_pane_cp025

0x0789,	// (0x00037ea2) scroll_pane_cp026_ParamLimits

0x0789,	// (0x00037ea2) scroll_pane_cp026

0x0798,	// (0x00037eb1) wml_content_pane_ParamLimits

0xe6de,	// (0x00045df7) main_touch_calib_pane

0x923a,	// (0x00040953) main_touch_calib_pane_g1

0x9246,	// (0x0004095f) main_touch_calib_pane_g2

0x9252,	// (0x0004096b) main_touch_calib_pane_g3

0x925e,	// (0x00040977) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x00046e75) main_touch_calib_pane_g

0x926a,	// (0x00040983) main_touch_calib_pane_t1

0x9283,	// (0x0004099c) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x00046e7e) main_touch_calib_pane_t

0x0ee2,	// (0x000385fb) mup_progress_pane_cp02

0x0f01,	// (0x0003861a) navi_pane_g1

0x0f63,	// (0x0003867c) navi_pane_mp_t3

0x0c6c,	// (0x00038385) main_mp3_pane_ParamLimits

0x88ce,	// (0x0003ffe7) navi_pane_ParamLimits

0x2a63,	// (0x0003a17c) main_mp3_pane_g1_ParamLimits

0x9196,	// (0x000408af) main_mp3_pane_g2_ParamLimits

0x91a2,	// (0x000408bb) main_mp3_pane_g3_ParamLimits

0x91a2,	// (0x000408bb) main_mp3_pane_g3

0x91ae,	// (0x000408c7) main_mp3_pane_g4_ParamLimits

0x91ae,	// (0x000408c7) main_mp3_pane_g4

0x2a93,	// (0x0003a1ac) main_mp3_pane_g5_ParamLimits

0x2a93,	// (0x0003a1ac) main_mp3_pane_g5

0x2aa1,	// (0x0003a1ba) main_mp3_pane_g6_ParamLimits

0x2aa1,	// (0x0003a1ba) main_mp3_pane_g6

0x2aae,	// (0x0003a1c7) main_mp3_pane_g7_ParamLimits

0x2aae,	// (0x0003a1c7) main_mp3_pane_g7

0x2aba,	// (0x0003a1d3) main_mp3_pane_g8_ParamLimits

0x2aba,	// (0x0003a1d3) main_mp3_pane_g8

0xf73e,	// (0x00046e57) main_mp3_pane_g_ParamLimits

0x91ba,	// (0x000408d3) main_mp3_pane_t2

0x91ca,	// (0x000408e3) main_mp3_pane_t3

0x2ad4,	// (0x0003a1ed) main_mp3_pane_t4

0x2ae2,	// (0x0003a1fb) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x00046e68) main_mp3_pane_t

0x2af0,	// (0x0003a209) mup_progress_pane_cp01

0x40e5,	// (0x0003b7fe) aid_zoom_text_secondary2

0x28aa,	// (0x00039fc3) list_cale_ev2_pane

0x28b2,	// (0x00039fcb) scroll_pane_cp023_ParamLimits

0x92de,	// (0x000409f7) field_cale_ev2_pane_ParamLimits

0x92de,	// (0x000409f7) field_cale_ev2_pane

0x43d4,	// (0x0003baed) field_cale_ev2_pane_g1_ParamLimits

0x43d4,	// (0x0003baed) field_cale_ev2_pane_g1

0x43e0,	// (0x0003baf9) field_cale_ev2_pane_g2_ParamLimits

0x43e0,	// (0x0003baf9) field_cale_ev2_pane_g2

0x43f8,	// (0x0003bb11) field_cale_ev2_pane_g3_ParamLimits

0x43f8,	// (0x0003bb11) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x00046e89) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x00046e89) field_cale_ev2_pane_g

0x441c,	// (0x0003bb35) field_cale_ev2_pane_t1_ParamLimits

0x441c,	// (0x0003bb35) field_cale_ev2_pane_t1

0x4433,	// (0x0003bb4c) field_cale_ev2_pane_t2_ParamLimits

0x4433,	// (0x0003bb4c) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x00046e92) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x00046e92) field_cale_ev2_pane_t

0x80ab,	// (0x0003f7c4) main_postcard_pane_g5_ParamLimits

0x80ab,	// (0x0003f7c4) main_postcard_pane_g5

0x80b9,	// (0x0003f7d2) main_postcard_pane_g6_ParamLimits

0x80b9,	// (0x0003f7d2) main_postcard_pane_g6

0x61d9,	// (0x0003d8f2) camera2_autofocus_pane_cp_ParamLimits

0x61d9,	// (0x0003d8f2) camera2_autofocus_pane_cp

0x0c6c,	// (0x00038385) main_mup3_pane

0x9307,	// (0x00040a20) main_mup3_pane_g1_ParamLimits

0x9307,	// (0x00040a20) main_mup3_pane_g1

0x9328,	// (0x00040a41) main_mup3_pane_g2_ParamLimits

0x9328,	// (0x00040a41) main_mup3_pane_g2

0x93a0,	// (0x00040ab9) main_mup3_pane_g3_ParamLimits

0x93a0,	// (0x00040ab9) main_mup3_pane_g3

0x93e3,	// (0x00040afc) main_mup3_pane_g4_ParamLimits

0x93e3,	// (0x00040afc) main_mup3_pane_g4

0x9426,	// (0x00040b3f) main_mup3_pane_g5_ParamLimits

0x9426,	// (0x00040b3f) main_mup3_pane_g5

0x9469,	// (0x00040b82) main_mup3_pane_g6_ParamLimits

0x9469,	// (0x00040b82) main_mup3_pane_g6

0x2b24,	// (0x0003a23d) main_mup3_pane_g7_ParamLimits

0x2b24,	// (0x0003a23d) main_mup3_pane_g7

0x0007,

0xf789,	// (0x00046ea2) main_mup3_pane_g_ParamLimits

0xf789,	// (0x00046ea2) main_mup3_pane_g

0x94df,	// (0x00040bf8) main_mup3_pane_t1_ParamLimits

0x94df,	// (0x00040bf8) main_mup3_pane_t1

0x954e,	// (0x00040c67) main_mup3_pane_t2_ParamLimits

0x954e,	// (0x00040c67) main_mup3_pane_t2

0x9617,	// (0x00040d30) main_mup3_pane_t4_ParamLimits

0x9617,	// (0x00040d30) main_mup3_pane_t4

0x9665,	// (0x00040d7e) main_mup3_pane_t5_ParamLimits

0x9665,	// (0x00040d7e) main_mup3_pane_t5

0x9715,	// (0x00040e2e) main_mup3_pane_t6_ParamLimits

0x9715,	// (0x00040e2e) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x00046eb3) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x00046eb3) main_mup3_pane_t

0x97c1,	// (0x00040eda) mup3_progress_pane_ParamLimits

0x97c1,	// (0x00040eda) mup3_progress_pane

0x983f,	// (0x00040f58) popup_mup3_control_window_ParamLimits

0x983f,	// (0x00040f58) popup_mup3_control_window

0x2b32,	// (0x0003a24b) popup_mup3_text_window

0x9858,	// (0x00040f71) mup3_progress_pane_t1

0x9877,	// (0x00040f90) mup3_progress_pane_t2

0x2b3a,	// (0x0003a253) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x00046ec0) mup3_progress_pane_t

0x2b57,	// (0x0003a270) mup_progress_pane_cp03

0xe6de,	// (0x00045df7) bg_tb_trans_pane_cp04

0x9896,	// (0x00040faf) mup3_volume_pane

0x989e,	// (0x00040fb7) popup_mup3_control_window_g1

0x98a7,	// (0x00040fc0) mup3_volume_pane_g1

0x98b0,	// (0x00040fc9) mup3_volume_pane_g2

0x98b9,	// (0x00040fd2) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x00046ec7) mup3_volume_pane_g

0xe6de,	// (0x00045df7) bg_tb_trans_pane_cp03

0x2b67,	// (0x0003a280) popup_mup3_text_window_g1

0x2b6f,	// (0x0003a288) popup_mup3_text_window_t1

0x04a5,	// (0x00037bbe) list_calc_item_pane_g1_ParamLimits

0x257a,	// (0x00039c93) mup_volume_pane_cp_g1

0x929c,	// (0x000409b5) main_touch_calib_pane_t3

0x92b2,	// (0x000409cb) main_touch_calib_pane_t4

0x92c8,	// (0x000409e1) main_touch_calib_pane_t5

0x538b,	// (0x0003caa4) aid_cell_size_toolbar2

0x5393,	// (0x0003caac) aid_popup3_width_pane

0x40dd,	// (0x0003b7f6) aid_zoom_text_msg_primary

0x61b0,	// (0x0003d8c9) vorec_t7

0x0469,	// (0x00037b82) bg_calc_paper_pane_g1_ParamLimits

0x0481,	// (0x00037b9a) bg_calc_paper_pane_g2_ParamLimits

0x0475,	// (0x00037b8e) bg_calc_paper_pane_g3_ParamLimits

0x0499,	// (0x00037bb2) bg_calc_paper_pane_g4_ParamLimits

0x048d,	// (0x00037ba6) bg_calc_paper_pane_g5_ParamLimits

0x5a2c,	// (0x0003d145) bg_calc_paper_pane_g6_ParamLimits

0x5a3d,	// (0x0003d156) bg_calc_paper_pane_g7_ParamLimits

0x5a4e,	// (0x0003d167) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0004687a) bg_calc_paper_pane_g_ParamLimits

0x5a5f,	// (0x0003d178) calc_bg_paper_pane_g9_ParamLimits

0x62c0,	// (0x0003d9d9) image_qvga_pane_ParamLimits

0x62c0,	// (0x0003d9d9) image_qvga_pane

0x0398,	// (0x00037ab1) bg_popup_sub_pane_cp04_ParamLimits

0x1226,	// (0x0003893f) popup_mup_playback_window_g1_ParamLimits

0x1232,	// (0x0003894b) popup_mup_playback_window_t1_ParamLimits

0x1247,	// (0x00038960) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x00046c06) popup_mup_playback_window_t_ParamLimits

0x8da2,	// (0x000404bb) main_mup2_pane_g3_ParamLimits

0x8da2,	// (0x000404bb) main_mup2_pane_g3

0x6578,	// (0x0003dc91) popup_toolbar_window_cp04

0x1629,	// (0x00038d42) popup_call2_audio_second_window_g3_ParamLimits

0x1629,	// (0x00038d42) popup_call2_audio_second_window_g3

0x1a33,	// (0x0003914c) popup_call2_audio_first_window_g4_ParamLimits

0x1a33,	// (0x0003914c) popup_call2_audio_first_window_g4

0x20b2,	// (0x000397cb) popup_call2_audio_in_window_g4_ParamLimits

0x20b2,	// (0x000397cb) popup_call2_audio_in_window_g4

0x81be,	// (0x0003f8d7) aid_area_sk_bg_cut_ParamLimits

0x81be,	// (0x0003f8d7) aid_area_sk_bg_cut

0x125c,	// (0x00038975) aid_area_sk_bg_cut_2_ParamLimits

0x125c,	// (0x00038975) aid_area_sk_bg_cut_2

0x912b,	// (0x00040844) aid_placing_details_win

0x9133,	// (0x0004084c) aid_placing_details_win_2

0x29a5,	// (0x0003a0be) camera2_autofocus_pane_g1_ParamLimits

0x55e2,	// (0x0003ccfb) popup_fixed_preview_cale_window_ParamLimits

0x55e2,	// (0x0003ccfb) popup_fixed_preview_cale_window

0x0fc4,	// (0x000386dd) navi_slider_pane_g3

0x0fbb,	// (0x000386d4) navi_slider_pane_g4

0x0fb2,	// (0x000386cb) navi_slider_pane_g5

0x0fc4,	// (0x000386dd) navi_slider_pane_g6

0x7af1,	// (0x0003f20a) navi_slider_pane_g7

0x10e5,	// (0x000387fe) mup_scale_pane_g3

0x10ee,	// (0x00038807) mup_scale_pane_g4

0x10f7,	// (0x00038810) mup_scale_pane_g5

0x7f32,	// (0x0003f64b) mup_scale_pane_g6

0x7f3b,	// (0x0003f654) mup_scale_pane_g7

0x0fc4,	// (0x000386dd) cams2_slider_pane_g3

0x25fc,	// (0x00039d15) cams2_slider_pane_g4

0x9083,	// (0x0004079c) cams2_slider_pane_g5

0x0fc4,	// (0x000386dd) cams2_slider_pane_g6

0x908b,	// (0x000407a4) cams2_slider_pane_g7

0x2827,	// (0x00039f40) camera2_autofocus_pane_cp_g1

0x2413,	// (0x00039b2c) bg_popup_preview_window_pane_cp02_ParamLimits

0x2413,	// (0x00039b2c) bg_popup_preview_window_pane_cp02

0x2b7d,	// (0x0003a296) list_fp_cale_pane_ParamLimits

0x2b7d,	// (0x0003a296) list_fp_cale_pane

0x2b89,	// (0x0003a2a2) popup_fixed_preview_cale_window_t1_ParamLimits

0x2b89,	// (0x0003a2a2) popup_fixed_preview_cale_window_t1

0x98c2,	// (0x00040fdb) popup_fixed_preview_cale_window_t2_ParamLimits

0x98c2,	// (0x00040fdb) popup_fixed_preview_cale_window_t2

0x98d7,	// (0x00040ff0) popup_fixed_preview_cale_window_t3_ParamLimits

0x98d7,	// (0x00040ff0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x00046ece) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x00046ece) popup_fixed_preview_cale_window_t

0x98ec,	// (0x00041005) list_single_fp_cale_pane_ParamLimits

0x98ec,	// (0x00041005) list_single_fp_cale_pane

0x2ba7,	// (0x0003a2c0) list_single_fp_cale_pane_g1_ParamLimits

0x2ba7,	// (0x0003a2c0) list_single_fp_cale_pane_g1

0x2bb3,	// (0x0003a2cc) list_single_fp_cale_pane_g2_ParamLimits

0x2bb3,	// (0x0003a2cc) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x00046ed5) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x00046ed5) list_single_fp_cale_pane_g

0x2bcc,	// (0x0003a2e5) list_single_fp_cale_pane_t1_ParamLimits

0x2bcc,	// (0x0003a2e5) list_single_fp_cale_pane_t1

0x2bde,	// (0x0003a2f7) list_single_fp_cale_pane_t2_ParamLimits

0x2bde,	// (0x0003a2f7) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x00046edc) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x00046edc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe6de,	// (0x00045df7) main_dialer_pane

0x98ff,	// (0x00041018) aid_cell_size_keypad

0x9909,	// (0x00041022) dialer_ne_pane

0x9913,	// (0x0004102c) grid_dialer_command_1_pane

0x991b,	// (0x00041034) grid_dialer_command_2_pane

0x9923,	// (0x0004103c) grid_dialer_keypad_pane

0x9935,	// (0x0004104e) bg_popup_call_pane_cp06_ParamLimits

0x9935,	// (0x0004104e) bg_popup_call_pane_cp06

0x9941,	// (0x0004105a) dialer_ne_clear_pane_ParamLimits

0x9941,	// (0x0004105a) dialer_ne_clear_pane

0x2c11,	// (0x0003a32a) dialer_ne_pane_g1

0x2c19,	// (0x0003a332) dialer_ne_pane_t1_ParamLimits

0x2c19,	// (0x0003a332) dialer_ne_pane_t1

0x994d,	// (0x00041066) dialer_ne_pane_t2_ParamLimits

0x994d,	// (0x00041066) dialer_ne_pane_t2

0x996a,	// (0x00041083) dialer_ne_pane_t3_ParamLimits

0x996a,	// (0x00041083) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x00046ee1) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x00046ee1) dialer_ne_pane_t

0x998e,	// (0x000410a7) dialer_ne_pane_t3_copy1_ParamLimits

0x998e,	// (0x000410a7) dialer_ne_pane_t3_copy1

0x99b2,	// (0x000410cb) cell_dialer_keypad_pane_ParamLimits

0x99b2,	// (0x000410cb) cell_dialer_keypad_pane

0x99c9,	// (0x000410e2) cell_dialer_command_1_pane_ParamLimits

0x99c9,	// (0x000410e2) cell_dialer_command_1_pane

0x99df,	// (0x000410f8) cell_dialer_command_2_pane_ParamLimits

0x99df,	// (0x000410f8) cell_dialer_command_2_pane

0x2c2b,	// (0x0003a344) bg_button_pane_cp02_ParamLimits

0x2c2b,	// (0x0003a344) bg_button_pane_cp02

0x99ee,	// (0x00041107) cell_dialer_keypad_pane_g1_ParamLimits

0x99ee,	// (0x00041107) cell_dialer_keypad_pane_g1

0x2c2b,	// (0x0003a344) bg_button_pane_cp03_ParamLimits

0x2c2b,	// (0x0003a344) bg_button_pane_cp03

0x9a03,	// (0x0004111c) cell_dialer_command_1_pane_g1_ParamLimits

0x9a03,	// (0x0004111c) cell_dialer_command_1_pane_g1

0x2c37,	// (0x0003a350) bg_button_pane_cp04

0x9a17,	// (0x00041130) cell_dialer_command_2_pane_g1

0x0fa1,	// (0x000386ba) bg_button_pane_cp06

0x2c3f,	// (0x0003a358) dialer_ne_clear_pane_g1

0x7a2c,	// (0x0003f145) navi_pane_g2

0x7a5a,	// (0x0003f173) navi_pane_g3

0x0002,

0xf3f0,	// (0x00046b09) navi_pane_g

0x7a85,	// (0x0003f19e) navi_pane_mv_g2

0x7aac,	// (0x0003f1c5) navi_pane_mv_g5

0x7ab4,	// (0x0003f1cd) navi_pane_mv_t1

0x045d,	// (0x00037b76) main_clock2_pane

0x9a55,	// (0x0004116e) main_clock2_list_pane_ParamLimits

0x9a55,	// (0x0004116e) main_clock2_list_pane

0x9a7d,	// (0x00041196) main_clock2_pane_t1_ParamLimits

0x9a7d,	// (0x00041196) main_clock2_pane_t1

0x9a9f,	// (0x000411b8) main_clock2_pane_t2_ParamLimits

0x9a9f,	// (0x000411b8) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x00046ee8) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x00046ee8) main_clock2_pane_t

0x9afa,	// (0x00041213) popup_clock_analogue_window_cp03_ParamLimits

0x9afa,	// (0x00041213) popup_clock_analogue_window_cp03

0x9b18,	// (0x00041231) popup_clock_digital_window_cp02_ParamLimits

0x9b18,	// (0x00041231) popup_clock_digital_window_cp02

0x9b85,	// (0x0004129e) main_clock2_list_single_pane_ParamLimits

0x9b85,	// (0x0004129e) main_clock2_list_single_pane

0x0fa1,	// (0x000386ba) list_highlight_pane_cp05

0x2c5d,	// (0x0003a376) main_clock2_list_single_pane_t1

0x6578,	// (0x0003dc91) popup_toolbar_window_cp04_ParamLimits

0x9155,	// (0x0004086e) camera2_autofocus_pane_g2_ParamLimits

0x9155,	// (0x0004086e) camera2_autofocus_pane_g2

0x9161,	// (0x0004087a) camera2_autofocus_pane_g3_ParamLimits

0x9161,	// (0x0004087a) camera2_autofocus_pane_g3

0x916d,	// (0x00040886) camera2_autofocus_pane_g4_ParamLimits

0x916d,	// (0x00040886) camera2_autofocus_pane_g4

0x9179,	// (0x00040892) camera2_autofocus_pane_g5_ParamLimits

0x9179,	// (0x00040892) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x00046e31) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x00046e31) camera2_autofocus_pane_g

0x2b04,	// (0x0003a21d) camera2_autofocus_pane_cp_g2

0x2b0c,	// (0x0003a225) camera2_autofocus_pane_cp_g3

0x2b14,	// (0x0003a22d) camera2_autofocus_pane_cp_g4

0x2b1c,	// (0x0003a235) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x00046e97) camera2_autofocus_pane_cp_g

0x992d,	// (0x00041046) popup_dialer_spcha_window

0xe6de,	// (0x00045df7) bg_popup_sub_pane_cp07

0x2c6b,	// (0x0003a384) list_spcha_pane

0x2c73,	// (0x0003a38c) list_single_spcha_pane_ParamLimits

0x2c73,	// (0x0003a38c) list_single_spcha_pane

0xe6de,	// (0x00045df7) list_highlight_pane_cp06

0x2c84,	// (0x0003a39d) list_single_spcha_pane_t1

0x1e5c,	// (0x00039575) popup_call2_audio_out_window_g4_ParamLimits

0x1e5c,	// (0x00039575) popup_call2_audio_out_window_g4

0xe6de,	// (0x00045df7) main_imed2_pane

0x87f7,	// (0x0003ff10) popup_imed_adjust2_window

0x880a,	// (0x0003ff23) popup_imed_trans_window_ParamLimits

0x880a,	// (0x0003ff23) popup_imed_trans_window

0x2665,	// (0x00039d7e) popup_blid_sat_info2_window_t1

0x2673,	// (0x00039d8c) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x00046dc6) popup_blid_sat_info2_window_t

0x9c2f,	// (0x00041348) aid_size_cell_colour_35

0x9c49,	// (0x00041362) aid_size_cell_colour_112

0x9c60,	// (0x00041379) aid_size_cell_effect

0x0c6c,	// (0x00038385) bg_tb_trans_pane_cp02

0x0c7a,	// (0x00038393) heading_imed_pane

0x9c7a,	// (0x00041393) listscroll_imed_pane

0x2c92,	// (0x0003a3ab) heading_imed_pane_g1

0x2c9a,	// (0x0003a3b3) heading_imed_pane_t1

0x2ca8,	// (0x0003a3c1) grid_imed_colour_35_pane_ParamLimits

0x2ca8,	// (0x0003a3c1) grid_imed_colour_35_pane

0x9c86,	// (0x0004139f) grid_imed_effect_pane

0x2cbf,	// (0x0003a3d8) list_imed_aspect_pane

0x9c96,	// (0x000413af) scroll_pane_cp027_ParamLimits

0x9c96,	// (0x000413af) scroll_pane_cp027

0x9ca2,	// (0x000413bb) cell_imed_effect_pane_ParamLimits

0x9ca2,	// (0x000413bb) cell_imed_effect_pane

0x2cc7,	// (0x0003a3e0) cell_imed_colour_pane_ParamLimits

0x2cc7,	// (0x0003a3e0) cell_imed_colour_pane

0x2d09,	// (0x0003a422) cell_imed_colour_pane_g1_ParamLimits

0x2d09,	// (0x0003a422) cell_imed_colour_pane_g1

0x2d1a,	// (0x0003a433) hgihlgiht_grid_pane_cp016_ParamLimits

0x2d1a,	// (0x0003a433) hgihlgiht_grid_pane_cp016

0x9cba,	// (0x000413d3) cell_imed_effect_pane_g1

0x9cc2,	// (0x000413db) grid_highlight_pane_cp017

0x2d2b,	// (0x0003a444) list_imed_single_pane_ParamLimits

0x2d2b,	// (0x0003a444) list_imed_single_pane

0xe6de,	// (0x00045df7) list_highlight_pane_cp07

0x2d40,	// (0x0003a459) list_imed_aspect_pane_comp1_t1

0x241f,	// (0x00039b38) bg_tb_trans_pane_cp05

0x2d62,	// (0x0003a47b) popup_imed_adjust2_window_g1

0x2d89,	// (0x0003a4a2) popup_imed_adjust2_window_t1

0x2da1,	// (0x0003a4ba) slider_imed_adjust_pane

0x2db5,	// (0x0003a4ce) slider_imed_adjust_pane_g1

0x2dc5,	// (0x0003a4de) slider_imed_adjust_pane_g2

0x2dd5,	// (0x0003a4ee) slider_imed_adjust_pane_g3

0x2de6,	// (0x0003a4ff) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x00046f05) slider_imed_adjust_pane_g

0x9ccb,	// (0x000413e4) aid_size_cell_clipart2

0x9cd7,	// (0x000413f0) grid_imed_clipart_pane

0x2df7,	// (0x0003a510) scroll_pane_cp031

0x9ce1,	// (0x000413fa) cell_imed_clipart_pane_ParamLimits

0x9ce1,	// (0x000413fa) cell_imed_clipart_pane

0x9d03,	// (0x0004141c) cell_imed_clipart_pane_g1

0xe6de,	// (0x00045df7) grid_highlight_pane_cp014

0x9a61,	// (0x0004117a) main_clock2_pane_g1_ParamLimits

0x9a61,	// (0x0004117a) main_clock2_pane_g1

0x9b30,	// (0x00041249) aid_call2_pane_cp10

0x9b42,	// (0x0004125b) aid_call_pane_cp10

0x0ed6,	// (0x000385ef) popup_clock_analogue_window_cp10_g1

0x0ed6,	// (0x000385ef) popup_clock_analogue_window_cp10_g2

0x9b54,	// (0x0004126d) popup_clock_analogue_window_cp10_g3

0x9b54,	// (0x0004126d) popup_clock_analogue_window_cp10_g4

0x0ed6,	// (0x000385ef) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x00046ef3) popup_clock_analogue_window_cp10_g

0x9b66,	// (0x0004127f) popup_clock_analogue_window_cp10_t1

0x9b97,	// (0x000412b0) clock_digital_number_pane_cp10_ParamLimits

0x9b97,	// (0x000412b0) clock_digital_number_pane_cp10

0x9baf,	// (0x000412c8) clock_digital_number_pane_cp11_ParamLimits

0x9baf,	// (0x000412c8) clock_digital_number_pane_cp11

0x9bc7,	// (0x000412e0) clock_digital_number_pane_cp12_ParamLimits

0x9bc7,	// (0x000412e0) clock_digital_number_pane_cp12

0x9bdf,	// (0x000412f8) clock_digital_number_pane_cp13_ParamLimits

0x9bdf,	// (0x000412f8) clock_digital_number_pane_cp13

0x9bf7,	// (0x00041310) clock_digital_separator_pane_cp10_ParamLimits

0x9bf7,	// (0x00041310) clock_digital_separator_pane_cp10

0x9c0f,	// (0x00041328) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c0f,	// (0x00041328) popup_clock_digital_window_cp02_t1

0x0390,	// (0x00037aa9) clock_digital_number_pane_cp10_g1

0x0390,	// (0x00037aa9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x00046f0e) clock_digital_number_pane_cp10_g

0x0390,	// (0x00037aa9) clock_digital_separator_pane_cp10_g1

0x0390,	// (0x00037aa9) clock_digital_separator_pane_g2_cp10

0x0f71,	// (0x0003868a) navi_pane_vded_g4

0x0f7a,	// (0x00038693) navi_pane_vded_g5

0x0f83,	// (0x0003869c) navi_pane_vded_t1

0xe6de,	// (0x00045df7) main_vded_pane

0x9d0c,	// (0x00041425) main_vded_pane_g1

0x9d18,	// (0x00041431) main_vded_pane_g2

0x9d22,	// (0x0004143b) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x00046f13) main_vded_pane_g

0x9d2c,	// (0x00041445) main_vded_pane_t1

0x9d3a,	// (0x00041453) main_vded_pane_t2

0x0001,

0xf801,	// (0x00046f1a) main_vded_pane_t

0x9d48,	// (0x00041461) vded_slider_pane

0x9d52,	// (0x0004146b) vded_video_pane

0x2dff,	// (0x0003a518) vded_video_pane_g1

0x9d5c,	// (0x00041475) vded_video_pane_g2

0x2827,	// (0x00039f40) vded_video_pane_g3

0x0002,

0xf806,	// (0x00046f1f) vded_video_pane_g

0x2e09,	// (0x0003a522) vded_slider_pane_g1

0x257a,	// (0x00039c93) vded_slider_pane_g2

0x2e12,	// (0x0003a52b) vded_slider_pane_g3

0x2e1b,	// (0x0003a534) vded_slider_pane_g4

0x2e24,	// (0x0003a53d) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x00046f26) vded_slider_pane_g

0x9831,	// (0x00040f4a) mup3_rocker_pane_ParamLimits

0x9831,	// (0x00040f4a) mup3_rocker_pane

0x9d65,	// (0x0004147e) mup3_control_keys_pane_g1

0x9d6d,	// (0x00041486) mup3_control_keys_pane_g2

0x9d75,	// (0x0004148e) mup3_control_keys_pane_g3

0x9d7d,	// (0x00041496) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x00046f31) mup3_control_keys_pane_g

0x560a,	// (0x0003cd23) popup_toolbar2_fixed_window_cp01_ParamLimits

0x560a,	// (0x0003cd23) popup_toolbar2_fixed_window_cp01

0x984b,	// (0x00040f64) popup_toolbar2_fixed_window_cp02_ParamLimits

0x984b,	// (0x00040f64) popup_toolbar2_fixed_window_cp02

0x179b,	// (0x00038eb4) popup_call2_audio_second_window_t4_ParamLimits

0x179b,	// (0x00038eb4) popup_call2_audio_second_window_t4

0x1cc9,	// (0x000393e2) popup_call2_audio_first_window_t6_ParamLimits

0x1cc9,	// (0x000393e2) popup_call2_audio_first_window_t6

0x1f5f,	// (0x00039678) popup_call2_audio_out_window_t6_ParamLimits

0x1f5f,	// (0x00039678) popup_call2_audio_out_window_t6

0xe6de,	// (0x00045df7) main_vitu_pane

0x9d8d,	// (0x000414a6) aid_size_cell_itu_ParamLimits

0x9d8d,	// (0x000414a6) aid_size_cell_itu

0xe6e8,	// (0x00045e01) bg_popup_window_pane_cp08_ParamLimits

0xe6e8,	// (0x00045e01) bg_popup_window_pane_cp08

0x9d9b,	// (0x000414b4) field_vitu_entry_pane_ParamLimits

0x9d9b,	// (0x000414b4) field_vitu_entry_pane

0x9daa,	// (0x000414c3) grid_vitu_function_pane_ParamLimits

0x9daa,	// (0x000414c3) grid_vitu_function_pane

0x9dba,	// (0x000414d3) grid_vitu_itu_pane_ParamLimits

0x9dba,	// (0x000414d3) grid_vitu_itu_pane

0x9dca,	// (0x000414e3) cell_vitu_itu_pane_ParamLimits

0x9dca,	// (0x000414e3) cell_vitu_itu_pane

0x9ddf,	// (0x000414f8) cell_vitu_function_pane_ParamLimits

0x9ddf,	// (0x000414f8) cell_vitu_function_pane

0x0c6c,	// (0x00038385) bg_popup_sub_pane_cp08_ParamLimits

0x0c6c,	// (0x00038385) bg_popup_sub_pane_cp08

0x9df1,	// (0x0004150a) field_vitu_entry_pane_t1_ParamLimits

0x9df1,	// (0x0004150a) field_vitu_entry_pane_t1

0x2e45,	// (0x0003a55e) field_vitu_entry_pane_t2_ParamLimits

0x2e45,	// (0x0003a55e) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x00046f3f) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x00046f3f) field_vitu_entry_pane_t

0x2e62,	// (0x0003a57b) bg_button_pane_cp05_ParamLimits

0x2e62,	// (0x0003a57b) bg_button_pane_cp05

0x9e0d,	// (0x00041526) cell_vitu_itu_pane_g1

0x9e25,	// (0x0004153e) cell_vitu_itu_pane_t1_ParamLimits

0x9e25,	// (0x0004153e) cell_vitu_itu_pane_t1

0x9e37,	// (0x00041550) cell_vitu_itu_pane_t2_ParamLimits

0x9e37,	// (0x00041550) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x00046f44) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x00046f44) cell_vitu_itu_pane_t

0x2e70,	// (0x0003a589) bg_button_pane_cp07

0x9e6c,	// (0x00041585) cell_vitu_function_pane_g1

0x58d0,	// (0x0003cfe9) main_calc_pane_g1

0x53c7,	// (0x0003cae0) aid_visual_content_pane

0xe6de,	// (0x00045df7) main_vradio_pane

0x9e75,	// (0x0004158e) main_vradio_pane_g1_ParamLimits

0x9e75,	// (0x0004158e) main_vradio_pane_g1

0x2e7a,	// (0x0003a593) main_vradio_pane_g2_ParamLimits

0x2e7a,	// (0x0003a593) main_vradio_pane_g2

0x0001,

0xf832,	// (0x00046f4b) main_vradio_pane_g_ParamLimits

0xf832,	// (0x00046f4b) main_vradio_pane_g

0x9e85,	// (0x0004159e) main_vradio_pane_t1_ParamLimits

0x9e85,	// (0x0004159e) main_vradio_pane_t1

0x9e97,	// (0x000415b0) main_vradio_pane_t2_ParamLimits

0x9e97,	// (0x000415b0) main_vradio_pane_t2

0x2e87,	// (0x0003a5a0) main_vradio_pane_t3_ParamLimits

0x2e87,	// (0x0003a5a0) main_vradio_pane_t3

0x0002,

0xf837,	// (0x00046f50) main_vradio_pane_t_ParamLimits

0xf837,	// (0x00046f50) main_vradio_pane_t

0x9ea9,	// (0x000415c2) vradio_rocker_control_pane_ParamLimits

0x9ea9,	// (0x000415c2) vradio_rocker_control_pane

0x9eb5,	// (0x000415ce) vradio_station_info_pane_ParamLimits

0x9eb5,	// (0x000415ce) vradio_station_info_pane

0x2e9b,	// (0x0003a5b4) vradio_frequency_info_pane_ParamLimits

0x2e9b,	// (0x0003a5b4) vradio_frequency_info_pane

0x2827,	// (0x00039f40) vradio_station_info_pane_g1

0x2eaa,	// (0x0003a5c3) vradio_station_info_pane_t1_ParamLimits

0x2eaa,	// (0x0003a5c3) vradio_station_info_pane_t1

0x2ecc,	// (0x0003a5e5) vradio_station_info_pane_t2_ParamLimits

0x2ecc,	// (0x0003a5e5) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x00046f57) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x00046f57) vradio_station_info_pane_t

0x2ede,	// (0x0003a5f7) vradio_tuning_pane

0x2ee6,	// (0x0003a5ff) vradio_rocker_control_pane_g1

0x2eee,	// (0x0003a607) vradio_rocker_control_pane_g2

0x2ef6,	// (0x0003a60f) vradio_rocker_control_pane_g3

0x2efe,	// (0x0003a617) vradio_rocker_control_pane_g4

0x2f06,	// (0x0003a61f) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x00046f5c) vradio_rocker_control_pane_g

0x9ec4,	// (0x000415dd) vradio_frequency_info_pane_g1

0x2f0e,	// (0x0003a627) vradio_frequency_info_pane_t1_ParamLimits

0x2f0e,	// (0x0003a627) vradio_frequency_info_pane_t1

0x9ece,	// (0x000415e7) vradio_tuning_pane_g1

0x9ed7,	// (0x000415f0) vradio_tuning_pane_t1

0x5410,	// (0x0003cb29) area_side_right_pane_ParamLimits

0x5410,	// (0x0003cb29) area_side_right_pane

0x23da,	// (0x00039af3) status_small_pane_g1

0x23e2,	// (0x00039afb) status_small_pane_g2

0x23eb,	// (0x00039b04) status_small_pane_g3

0x23f4,	// (0x00039b0d) status_small_pane_g4

0x0003,

0xf603,	// (0x00046d1c) status_small_pane_g

0x23fd,	// (0x00039b16) status_small_pane_t1

0xe6de,	// (0x00045df7) main_video3_pane

0x2f22,	// (0x0003a63b) cams_zoom_vslider_pane

0x2f2a,	// (0x0003a643) image3_wide_pane_ParamLimits

0x2f2a,	// (0x0003a643) image3_wide_pane

0x2f44,	// (0x0003a65d) image3_wide_small_pane

0x2f50,	// (0x0003a669) main_video3_pane_g1_ParamLimits

0x2f50,	// (0x0003a669) main_video3_pane_g1

0x2f6c,	// (0x0003a685) main_video3_pane_g2_ParamLimits

0x2f6c,	// (0x0003a685) main_video3_pane_g2

0x0001,

0xf84e,	// (0x00046f67) main_video3_pane_g_ParamLimits

0xf84e,	// (0x00046f67) main_video3_pane_g

0x2f88,	// (0x0003a6a1) main_video3_pane_t1_ParamLimits

0x2f88,	// (0x0003a6a1) main_video3_pane_t1

0x2fb3,	// (0x0003a6cc) main_video3_pane_t2_ParamLimits

0x2fb3,	// (0x0003a6cc) main_video3_pane_t2

0x2fde,	// (0x0003a6f7) main_video3_pane_t3_ParamLimits

0x2fde,	// (0x0003a6f7) main_video3_pane_t3

0x0002,

0xf853,	// (0x00046f6c) main_video3_pane_t_ParamLimits

0xf853,	// (0x00046f6c) main_video3_pane_t

0x300b,	// (0x0003a724) cams_zoom_vslider_pane_g1

0x3014,	// (0x0003a72d) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x00046f73) cams_zoom_vslider_pane_g

0x301c,	// (0x0003a735) small_slider_vertical_pane

0x2827,	// (0x00039f40) small_slider_vertical_pane_g1

0x2827,	// (0x00039f40) small_slider_vertical_pane_g2

0x3024,	// (0x0003a73d) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x00046f78) small_slider_vertical_pane_g

0xe6de,	// (0x00045df7) main_hwr_training_pane

0x302d,	// (0x0003a746) hwr_training_instruct_pane_ParamLimits

0x302d,	// (0x0003a746) hwr_training_instruct_pane

0x9ee6,	// (0x000415ff) hwr_training_navi_pane_ParamLimits

0x9ee6,	// (0x000415ff) hwr_training_navi_pane

0x9f00,	// (0x00041619) hwr_training_write_pane_ParamLimits

0x9f00,	// (0x00041619) hwr_training_write_pane

0xe6de,	// (0x00045df7) bg_frame_shadow_pane

0x3064,	// (0x0003a77d) hwr_training_write_pane_g1

0x306c,	// (0x0003a785) hwr_training_write_pane_g2

0x3074,	// (0x0003a78d) hwr_training_write_pane_g3

0x307c,	// (0x0003a795) hwr_training_write_pane_g4

0x3084,	// (0x0003a79d) hwr_training_write_pane_g5

0x308c,	// (0x0003a7a5) hwr_training_write_pane_g6

0x3094,	// (0x0003a7ad) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x00046f7f) hwr_training_write_pane_g

0x9f38,	// (0x00041651) hwr_training_navi_pane_g1_ParamLimits

0x9f38,	// (0x00041651) hwr_training_navi_pane_g1

0x9f4a,	// (0x00041663) hwr_training_navi_pane_g2_ParamLimits

0x9f4a,	// (0x00041663) hwr_training_navi_pane_g2

0x9f5c,	// (0x00041675) hwr_training_navi_pane_g3_ParamLimits

0x9f5c,	// (0x00041675) hwr_training_navi_pane_g3

0x9f6c,	// (0x00041685) hwr_training_navi_pane_g4_ParamLimits

0x9f6c,	// (0x00041685) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x00046f8e) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x00046f8e) hwr_training_navi_pane_g

0x9f86,	// (0x0004169f) hwr_training_navi_pane_t1

0x9f94,	// (0x000416ad) list_single_hwr_training_instruct_pane_ParamLimits

0x9f94,	// (0x000416ad) list_single_hwr_training_instruct_pane

0x309c,	// (0x0003a7b5) list_single_hwr_training_instruct_pane_t1

0x2767,	// (0x00039e80) bg_frame_shadow_pane_g1

0x30ab,	// (0x0003a7c4) bg_frame_shadow_pane_g2

0x30b3,	// (0x0003a7cc) bg_frame_shadow_pane_g3

0x30bb,	// (0x0003a7d4) bg_frame_shadow_pane_g4

0x30c3,	// (0x0003a7dc) bg_frame_shadow_pane_g5

0x30cb,	// (0x0003a7e4) bg_frame_shadow_pane_g6

0x30d3,	// (0x0003a7ec) bg_frame_shadow_pane_g7

0x0516,	// (0x00037c2f) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x00046f99) bg_frame_shadow_pane_g

0xe6de,	// (0x00045df7) main_video_tele_dialer_pane

0x9fb9,	// (0x000416d2) aid_size_cell_video_keypad_ParamLimits

0x9fb9,	// (0x000416d2) aid_size_cell_video_keypad

0x9fc9,	// (0x000416e2) grid_video_dialer_keypad_pane_ParamLimits

0x9fc9,	// (0x000416e2) grid_video_dialer_keypad_pane

0x9ffd,	// (0x00041716) video_down_pane_cp_ParamLimits

0x9ffd,	// (0x00041716) video_down_pane_cp

0xa027,	// (0x00041740) cell_video_dialer_keypad_pane_ParamLimits

0xa027,	// (0x00041740) cell_video_dialer_keypad_pane

0x30db,	// (0x0003a7f4) bg_button_pane_cp08_ParamLimits

0x30db,	// (0x0003a7f4) bg_button_pane_cp08

0xa03c,	// (0x00041755) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa03c,	// (0x00041755) cell_video_dialer_keypad_pane_g1

0x9825,	// (0x00040f3e) mup3_rocker2_pane_ParamLimits

0x9825,	// (0x00040f3e) mup3_rocker2_pane

0x2827,	// (0x00039f40) mup3_rocker2_pane_g1

0x8767,	// (0x0003fe80) main_dialer2_pane

0xe6de,	// (0x00045df7) main_mp4_pane

0xa07b,	// (0x00041794) main_mp4_pane_g1_ParamLimits

0xa07b,	// (0x00041794) main_mp4_pane_g1

0xa089,	// (0x000417a2) main_mp4_pane_g2_ParamLimits

0xa089,	// (0x000417a2) main_mp4_pane_g2

0xa097,	// (0x000417b0) main_mp4_pane_g3_ParamLimits

0xa097,	// (0x000417b0) main_mp4_pane_g3

0xa0dc,	// (0x000417f5) main_mp4_pane_g4_ParamLimits

0xa0dc,	// (0x000417f5) main_mp4_pane_g4

0xa104,	// (0x0004181d) main_mp4_pane_g5_ParamLimits

0xa104,	// (0x0004181d) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x00046fb9) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x00046fb9) main_mp4_pane_g

0xa154,	// (0x0004186d) main_mp4_pane_t1_ParamLimits

0xa154,	// (0x0004186d) main_mp4_pane_t1

0xa1b0,	// (0x000418c9) main_mp4_pane_t2_ParamLimits

0xa1b0,	// (0x000418c9) main_mp4_pane_t2

0x30e7,	// (0x0003a800) main_mp4_pane_t3_ParamLimits

0x30e7,	// (0x0003a800) main_mp4_pane_t3

0xa202,	// (0x0004191b) main_mp4_pane_t4_ParamLimits

0xa202,	// (0x0004191b) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x00046fc6) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x00046fc6) main_mp4_pane_t

0xa246,	// (0x0004195f) mp4_progress_pane_ParamLimits

0xa246,	// (0x0004195f) mp4_progress_pane

0xa290,	// (0x000419a9) mp4_rocker_pane_ParamLimits

0xa290,	// (0x000419a9) mp4_rocker_pane

0x310f,	// (0x0003a828) mp4_progress_pane_t1

0x3128,	// (0x0003a841) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x00046fcf) mp4_progress_pane_t

0x3141,	// (0x0003a85a) mup_progress_pane_cp04

0x2827,	// (0x00039f40) mp4_rocker_pane_g1

0xa2b0,	// (0x000419c9) aid_cell_size_keypad2_ParamLimits

0xa2b0,	// (0x000419c9) aid_cell_size_keypad2

0xa2c0,	// (0x000419d9) dialer2_ne_pane_ParamLimits

0xa2c0,	// (0x000419d9) dialer2_ne_pane

0xa2ce,	// (0x000419e7) grid_dialer2_keypad_pane_ParamLimits

0xa2ce,	// (0x000419e7) grid_dialer2_keypad_pane

0xd2a2,	// (0x000449bb) bg_popup_call_pane_cp07_ParamLimits

0xd2a2,	// (0x000449bb) bg_popup_call_pane_cp07

0xa2de,	// (0x000419f7) dialer2_ne_pane_t1_ParamLimits

0xa2de,	// (0x000419f7) dialer2_ne_pane_t1

0xa303,	// (0x00041a1c) cell_dialer2_keypad_pane_ParamLimits

0xa303,	// (0x00041a1c) cell_dialer2_keypad_pane

0x315f,	// (0x0003a878) bg_button_pane_pane_cp04_ParamLimits

0x315f,	// (0x0003a878) bg_button_pane_pane_cp04

0xa318,	// (0x00041a31) cell_dialer2_keypad_pane_g1_ParamLimits

0xa318,	// (0x00041a31) cell_dialer2_keypad_pane_g1

0x643a,	// (0x0003db53) aid_placing_vt_set_content_ParamLimits

0x643a,	// (0x0003db53) aid_placing_vt_set_content

0x6466,	// (0x0003db7f) aid_placing_vt_set_title_ParamLimits

0x6466,	// (0x0003db7f) aid_placing_vt_set_title

0xe6de,	// (0x00045df7) main_image3_pane

0xa3b2,	// (0x00041acb) area_side_right_pane_cp01_ParamLimits

0xa3b2,	// (0x00041acb) area_side_right_pane_cp01

0xd2b0,	// (0x000449c9) main_image3_pane_g1_ParamLimits

0xd2b0,	// (0x000449c9) main_image3_pane_g1

0xa3df,	// (0x00041af8) main_image3_pane_g2_ParamLimits

0xa3df,	// (0x00041af8) main_image3_pane_g2

0xa3f8,	// (0x00041b11) main_image3_pane_g3_ParamLimits

0xa3f8,	// (0x00041b11) main_image3_pane_g3

0xa411,	// (0x00041b2a) main_image3_pane_g4_ParamLimits

0xa411,	// (0x00041b2a) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x00046fde) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x00046fde) main_image3_pane_g

0xa42a,	// (0x00041b43) main_image3_pane_t1_ParamLimits

0xa42a,	// (0x00041b43) main_image3_pane_t1

0xa44f,	// (0x00041b68) main_image3_pane_t2_ParamLimits

0xa44f,	// (0x00041b68) main_image3_pane_t2

0xa46e,	// (0x00041b87) main_image3_pane_t3_ParamLimits

0xa46e,	// (0x00041b87) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x00046fe7) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x00046fe7) main_image3_pane_t

0xe6e8,	// (0x00045e01) grid_sctrl_middle_pane_cp01_ParamLimits

0xe6e8,	// (0x00045e01) grid_sctrl_middle_pane_cp01

0xa4cf,	// (0x00041be8) cell_sctrl_middle_pane_cp01_ParamLimits

0xa4cf,	// (0x00041be8) cell_sctrl_middle_pane_cp01

0xa4e0,	// (0x00041bf9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa4e0,	// (0x00041bf9) cell_sctrl_middle_pane_cp01_g1

0xe6de,	// (0x00045df7) main_call4_pane

0xa4ed,	// (0x00041c06) aid_size_button_call4_ParamLimits

0xa4ed,	// (0x00041c06) aid_size_button_call4

0xa51d,	// (0x00041c36) call4_windows_pane_ParamLimits

0xa51d,	// (0x00041c36) call4_windows_pane

0xa537,	// (0x00041c50) grid_call4_button_pane_ParamLimits

0xa537,	// (0x00041c50) grid_call4_button_pane

0x316b,	// (0x0003a884) call4_windows_conf_pane

0x3182,	// (0x0003a89b) popup_call4_audio_first_window_ParamLimits

0x3182,	// (0x0003a89b) popup_call4_audio_first_window

0x31ce,	// (0x0003a8e7) popup_call4_audio_second_window_ParamLimits

0x31ce,	// (0x0003a8e7) popup_call4_audio_second_window

0x31e2,	// (0x0003a8fb) popup_call4_audio_wait_window_ParamLimits

0x31e2,	// (0x0003a8fb) popup_call4_audio_wait_window

0xa55b,	// (0x00041c74) cell_call4_button_pane_ParamLimits

0xa55b,	// (0x00041c74) cell_call4_button_pane

0xa580,	// (0x00041c99) bg_button_pane_cp09_ParamLimits

0xa580,	// (0x00041c99) bg_button_pane_cp09

0xa58c,	// (0x00041ca5) cell_call4_button_pane_g1_ParamLimits

0xa58c,	// (0x00041ca5) cell_call4_button_pane_g1

0xa599,	// (0x00041cb2) cell_call4_button_pane_t1_ParamLimits

0xa599,	// (0x00041cb2) cell_call4_button_pane_t1

0x322a,	// (0x0003a943) popup_call4_audio_conf_window_ParamLimits

0x322a,	// (0x0003a943) popup_call4_audio_conf_window

0x9858,	// (0x00040f71) mup3_progress_pane_t1_ParamLimits

0x9877,	// (0x00040f90) mup3_progress_pane_t2_ParamLimits

0x2b3a,	// (0x0003a253) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x00046ec0) mup3_progress_pane_t_ParamLimits

0x2b57,	// (0x0003a270) mup_progress_pane_cp03_ParamLimits

0x9d85,	// (0x0004149e) mup3_control_keys_pane_g4_copy1

0xa274,	// (0x0004198d) mp4_rocker2_pane_ParamLimits

0xa274,	// (0x0004198d) mp4_rocker2_pane

0x3246,	// (0x0003a95f) mp4_rocker2_pane_g1

0x323e,	// (0x0003a957) mp4_rocker2_pane_g2

0xa5ab,	// (0x00041cc4) mp4_rocker2_pane_g3

0xa5b3,	// (0x00041ccc) mp4_rocker2_pane_g4

0xa5bb,	// (0x00041cd4) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x00046ff0) mp4_rocker2_pane_g

0xe6de,	// (0x00045df7) main_camera4_pane

0xe6de,	// (0x00045df7) main_video4_pane

0x9fd9,	// (0x000416f2) main_video_tele_dialer_pane_t1_ParamLimits

0x9fd9,	// (0x000416f2) main_video_tele_dialer_pane_t1

0x9feb,	// (0x00041704) main_video_tele_dialer_pane_t2_ParamLimits

0x9feb,	// (0x00041704) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x00046faa) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x00046faa) main_video_tele_dialer_pane_t

0xa5db,	// (0x00041cf4) cam4_autofocus_pane_ParamLimits

0xa5db,	// (0x00041cf4) cam4_autofocus_pane

0xa5f5,	// (0x00041d0e) cam4_image_uncrop_pane_ParamLimits

0xa5f5,	// (0x00041d0e) cam4_image_uncrop_pane

0xa60c,	// (0x00041d25) cam4_indicators_pane_ParamLimits

0xa60c,	// (0x00041d25) cam4_indicators_pane

0xa628,	// (0x00041d41) main_camera4_pane_g1_ParamLimits

0xa628,	// (0x00041d41) main_camera4_pane_g1

0xa634,	// (0x00041d4d) main_camera4_pane_g2_ParamLimits

0xa634,	// (0x00041d4d) main_camera4_pane_g2

0xa634,	// (0x00041d4d) main_camera4_pane_g3_ParamLimits

0xa634,	// (0x00041d4d) main_camera4_pane_g3

0xa640,	// (0x00041d59) main_camera4_pane_g4_ParamLimits

0xa640,	// (0x00041d59) main_camera4_pane_g4

0xa64c,	// (0x00041d65) main_camera4_pane_g5_ParamLimits

0xa64c,	// (0x00041d65) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x00046ffb) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x00046ffb) main_camera4_pane_g

0xa666,	// (0x00041d7f) main_camera4_pane_t1_ParamLimits

0xa666,	// (0x00041d7f) main_camera4_pane_t1

0x2a93,	// (0x0003a1ac) bg_tb_trans_pane_cp06

0xa6b6,	// (0x00041dcf) cam4_indicators_pane_g1

0xa6c7,	// (0x00041de0) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x00047016) cam4_indicators_pane_g

0xa6e5,	// (0x00041dfe) cam4_indicators_pane_t1

0xa70f,	// (0x00041e28) main_video4_pane_g1_ParamLimits

0xa70f,	// (0x00041e28) main_video4_pane_g1

0xa71b,	// (0x00041e34) main_video4_pane_g2_ParamLimits

0xa71b,	// (0x00041e34) main_video4_pane_g2

0xa727,	// (0x00041e40) main_video4_pane_g3_ParamLimits

0xa727,	// (0x00041e40) main_video4_pane_g3

0xa733,	// (0x00041e4c) main_video4_pane_g4_ParamLimits

0xa733,	// (0x00041e4c) main_video4_pane_g4

0x0004,

0xf904,	// (0x0004701d) main_video4_pane_g_ParamLimits

0xf904,	// (0x0004701d) main_video4_pane_g

0xa753,	// (0x00041e6c) vid4_indicators_pane_ParamLimits

0xa753,	// (0x00041e6c) vid4_indicators_pane

0xa772,	// (0x00041e8b) video4_image_uncrop_cif_pane_ParamLimits

0xa772,	// (0x00041e8b) video4_image_uncrop_cif_pane

0xa781,	// (0x00041e9a) video4_image_uncrop_nhd_pane_ParamLimits

0xa781,	// (0x00041e9a) video4_image_uncrop_nhd_pane

0xa5f5,	// (0x00041d0e) video4_image_uncrop_vga_pane_ParamLimits

0xa5f5,	// (0x00041d0e) video4_image_uncrop_vga_pane

0x0c6c,	// (0x00038385) bg_tb_trans_pane_cp07

0xa798,	// (0x00041eb1) vid4_indicators_pane_g1

0xa7ac,	// (0x00041ec5) vid4_indicators_pane_g2

0xa7c0,	// (0x00041ed9) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x00047028) vid4_indicators_pane_g

0xa7ef,	// (0x00041f08) vid4_indicators_pane_t1

0xa806,	// (0x00041f1f) cam4_autofocus_pane_g1

0xa80e,	// (0x00041f27) cam4_autofocus_pane_g2

0xa816,	// (0x00041f2f) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x00047033) cam4_autofocus_pane_g

0xa81e,	// (0x00041f37) cam4_autofocus_pane_g3_copy1

0xa00b,	// (0x00041724) video_down_pane_cp_t1

0xa019,	// (0x00041732) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x00046faf) video_down_pane_cp_t

0xe6e8,	// (0x00045e01) popup_vitu2_window_ParamLimits

0xe6e8,	// (0x00045e01) popup_vitu2_window

0xa826,	// (0x00041f3f) aid_size_cell2_itu2_ParamLimits

0xa826,	// (0x00041f3f) aid_size_cell2_itu2

0xa848,	// (0x00041f61) aid_size_cell_itu2_ParamLimits

0xa848,	// (0x00041f61) aid_size_cell_itu2

0xd2a2,	// (0x000449bb) bg_popup_window_pane_cp09_ParamLimits

0xd2a2,	// (0x000449bb) bg_popup_window_pane_cp09

0xa88c,	// (0x00041fa5) field_vitu2_entry_pane_ParamLimits

0xa88c,	// (0x00041fa5) field_vitu2_entry_pane

0xa8ac,	// (0x00041fc5) grid_vitu2_function_pane_ParamLimits

0xa8ac,	// (0x00041fc5) grid_vitu2_function_pane

0xa8f0,	// (0x00042009) grid_vitu2_itu_pane_ParamLimits

0xa8f0,	// (0x00042009) grid_vitu2_itu_pane

0xa968,	// (0x00042081) cell_vitu2_itu_pane_ParamLimits

0xa968,	// (0x00042081) cell_vitu2_itu_pane

0xa97d,	// (0x00042096) cell_vitu2_function_pane_ParamLimits

0xa97d,	// (0x00042096) cell_vitu2_function_pane

0xd2be,	// (0x000449d7) bg_popup_call_pane_cp08_ParamLimits

0xd2be,	// (0x000449d7) bg_popup_call_pane_cp08

0xd2d7,	// (0x000449f0) field_vitu2_entry_pane_g1

0xd2e3,	// (0x000449fc) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0004703a) field_vitu2_entry_pane_g

0x4448,	// (0x0003bb61) field_vitu2_entry_pane_t1_ParamLimits

0x4448,	// (0x0003bb61) field_vitu2_entry_pane_t1

0x4478,	// (0x0003bb91) field_vitu2_entry_pane_t2_ParamLimits

0x4478,	// (0x0003bb91) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x00047041) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x00047041) field_vitu2_entry_pane_t

0xa9bc,	// (0x000420d5) bg_button_pane_cp010_ParamLimits

0xa9bc,	// (0x000420d5) bg_button_pane_cp010

0xa9ca,	// (0x000420e3) cell_vitu2_itu_pane_g1

0xa9e8,	// (0x00042101) cell_vitu2_itu_pane_t1_ParamLimits

0xa9e8,	// (0x00042101) cell_vitu2_itu_pane_t1

0x4495,	// (0x0003bbae) cell_vitu2_itu_pane_t2_ParamLimits

0x4495,	// (0x0003bbae) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0004704b) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0004704b) cell_vitu2_itu_pane_t

0x0c6c,	// (0x00038385) bg_button_pane_cp011

0xaa3a,	// (0x00042153) cell_vitu2_function_pane_g1

0xe6de,	// (0x00045df7) main_myfav_hc_pane

0xa4b0,	// (0x00041bc9) popup_image3_note_pane_ParamLimits

0xa4b0,	// (0x00041bc9) popup_image3_note_pane

0xa4be,	// (0x00041bd7) popup_image3_tool_bar_pane_ParamLimits

0xa4be,	// (0x00041bd7) popup_image3_tool_bar_pane

0x4503,	// (0x0003bc1c) cell_vitu2_itu_pane_t3_ParamLimits

0x4503,	// (0x0003bc1c) cell_vitu2_itu_pane_t3

0xe6de,	// (0x00045df7) bg_popup_trans_pane

0xd305,	// (0x00044a1e) grid_image3_tool_bar_pane

0xd30f,	// (0x00044a28) bg_popup_trans_pane_g1

0x087e,	// (0x00037f97) bg_popup_trans_pane_g2

0xd317,	// (0x00044a30) bg_popup_trans_pane_g3

0xd31f,	// (0x00044a38) bg_popup_trans_pane_g4

0xd327,	// (0x00044a40) bg_popup_trans_pane_g5

0xd32f,	// (0x00044a48) bg_popup_trans_pane_g6

0xd337,	// (0x00044a50) bg_popup_trans_pane_g7

0xd33f,	// (0x00044a58) bg_popup_trans_pane_g8

0x085e,	// (0x00037f77) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x00047052) bg_popup_trans_pane_g

0xd347,	// (0x00044a60) cell_image3_tool_bar_pane_ParamLimits

0xd347,	// (0x00044a60) cell_image3_tool_bar_pane

0x2827,	// (0x00039f40) cell_image3_tool_bar_pane_g1

0xe6de,	// (0x00045df7) bg_popup_trans_pane_cp1

0xd35b,	// (0x00044a74) popup_image3_note_pane_t1

0xd369,	// (0x00044a82) popup_image3_note_pane_t2

0xd377,	// (0x00044a90) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x00047065) popup_image3_note_pane_t

0xd385,	// (0x00044a9e) popup_image3_note_pane_t3_copy1

0xaa4e,	// (0x00042167) bg_myfav_hc_instruction_pane_ParamLimits

0xaa4e,	// (0x00042167) bg_myfav_hc_instruction_pane

0xaa66,	// (0x0004217f) cell_myfav_contact_pane_ParamLimits

0xaa66,	// (0x0004217f) cell_myfav_contact_pane

0xaa80,	// (0x00042199) cell_myfav_contact_pane_cp1_ParamLimits

0xaa80,	// (0x00042199) cell_myfav_contact_pane_cp1

0xaa98,	// (0x000421b1) cell_myfav_contact_pane_cp2_ParamLimits

0xaa98,	// (0x000421b1) cell_myfav_contact_pane_cp2

0xaab0,	// (0x000421c9) cell_myfav_contact_pane_cp3_ParamLimits

0xaab0,	// (0x000421c9) cell_myfav_contact_pane_cp3

0xaac7,	// (0x000421e0) cell_myfav_contact_pane_cp4_ParamLimits

0xaac7,	// (0x000421e0) cell_myfav_contact_pane_cp4

0xaadd,	// (0x000421f6) cell_myfav_contact_pane_cp5_ParamLimits

0xaadd,	// (0x000421f6) cell_myfav_contact_pane_cp5

0xaaf1,	// (0x0004220a) cell_myfav_contact_pane_cp6_ParamLimits

0xaaf1,	// (0x0004220a) cell_myfav_contact_pane_cp6

0xab05,	// (0x0004221e) cell_myfav_contact_pane_cp7_ParamLimits

0xab05,	// (0x0004221e) cell_myfav_contact_pane_cp7

0xd393,	// (0x00044aac) listscroll_gen_pane_cp05

0xab1d,	// (0x00042236) main_myfav_hc_pane_g1_ParamLimits

0xab1d,	// (0x00042236) main_myfav_hc_pane_g1

0xab33,	// (0x0004224c) main_myfav_hc_pane_g2_ParamLimits

0xab33,	// (0x0004224c) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0004706c) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0004706c) main_myfav_hc_pane_g

0xab61,	// (0x0004227a) main_myfav_hc_pane_t1_ParamLimits

0xab61,	// (0x0004227a) main_myfav_hc_pane_t1

0xd39c,	// (0x00044ab5) main_myfav_hc_pane_t2_ParamLimits

0xd39c,	// (0x00044ab5) main_myfav_hc_pane_t2

0xd3ae,	// (0x00044ac7) main_myfav_hc_pane_t3_ParamLimits

0xd3ae,	// (0x00044ac7) main_myfav_hc_pane_t3

0xab78,	// (0x00042291) main_myfav_hc_pane_t4_ParamLimits

0xab78,	// (0x00042291) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x00047073) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x00047073) main_myfav_hc_pane_t

0x2827,	// (0x00039f40) bg_myfav_hc_instruction_pane_g1

0xd3c0,	// (0x00044ad9) cell_myfav_contact_pane_g1_ParamLimits

0xd3c0,	// (0x00044ad9) cell_myfav_contact_pane_g1

0xd3c0,	// (0x00044ad9) cell_myfav_contact_pane_g2_ParamLimits

0xd3c0,	// (0x00044ad9) cell_myfav_contact_pane_g2

0xd3cc,	// (0x00044ae5) cell_myfav_contact_pane_g3_ParamLimits

0xd3cc,	// (0x00044ae5) cell_myfav_contact_pane_g3

0x2b24,	// (0x0003a23d) cell_myfav_contact_pane_g4_ParamLimits

0x2b24,	// (0x0003a23d) cell_myfav_contact_pane_g4

0xd3d9,	// (0x00044af2) cell_myfav_contact_pane_g5_ParamLimits

0xd3d9,	// (0x00044af2) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0004707e) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0004707e) cell_myfav_contact_pane_g

0xab49,	// (0x00042262) main_myfav_hc_pane_g3_ParamLimits

0xab49,	// (0x00042262) main_myfav_hc_pane_g3

0x5545,	// (0x0003cc5e) popup_adpt_find_window

0xaba2,	// (0x000422bb) afind_page_pane_ParamLimits

0xaba2,	// (0x000422bb) afind_page_pane

0xabaf,	// (0x000422c8) aid_size_cell_afind_ParamLimits

0xabaf,	// (0x000422c8) aid_size_cell_afind

0xabc9,	// (0x000422e2) bg_popup_sub_pane_cp09_ParamLimits

0xabc9,	// (0x000422e2) bg_popup_sub_pane_cp09

0xabd6,	// (0x000422ef) find_pane_cp01_ParamLimits

0xabd6,	// (0x000422ef) find_pane_cp01

0xd3e5,	// (0x00044afe) grid_afind_control_pane_ParamLimits

0xd3e5,	// (0x00044afe) grid_afind_control_pane

0xabe3,	// (0x000422fc) grid_afind_pane_ParamLimits

0xabe3,	// (0x000422fc) grid_afind_pane

0xabff,	// (0x00042318) cell_afind_pane_ParamLimits

0xabff,	// (0x00042318) cell_afind_pane

0x2827,	// (0x00039f40) afind_page_pane_g1

0xac47,	// (0x00042360) afind_page_pane_g2

0xac50,	// (0x00042369) afind_page_pane_g3

0x0002,

0xf970,	// (0x00047089) afind_page_pane_g

0xac59,	// (0x00042372) afind_page_pane_t1

0xd3f9,	// (0x00044b12) cell_afind_grid_control_pane_ParamLimits

0xd3f9,	// (0x00044b12) cell_afind_grid_control_pane

0x315f,	// (0x0003a878) bg_button_pane_cp69_ParamLimits

0x315f,	// (0x0003a878) bg_button_pane_cp69

0xac79,	// (0x00042392) cell_afind_pane_g1_ParamLimits

0xac79,	// (0x00042392) cell_afind_pane_g1

0xac86,	// (0x0004239f) cell_afind_pane_t1_ParamLimits

0xac86,	// (0x0004239f) cell_afind_pane_t1

0x0677,	// (0x00037d90) bg_button_pane_cp72

0xd408,	// (0x00044b21) cell_afind_grid_control_pane_g1

0x82e5,	// (0x0003f9fe) aid_image_placing_area_ParamLimits

0x82e5,	// (0x0003f9fe) aid_image_placing_area

0x2e2d,	// (0x0003a546) field_vitu_entry_pane_g1_ParamLimits

0x2e2d,	// (0x0003a546) field_vitu_entry_pane_g1

0x2e39,	// (0x0003a552) field_vitu_entry_pane_g2_ParamLimits

0x2e39,	// (0x0003a552) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x00046f3a) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x00046f3a) field_vitu_entry_pane_g

0x9e0d,	// (0x00041526) cell_vitu_itu_pane_g1_ParamLimits

0x9e4f,	// (0x00041568) cell_vitu_itu_pane_t3_ParamLimits

0x9e4f,	// (0x00041568) cell_vitu_itu_pane_t3

0x310f,	// (0x0003a828) mp4_progress_pane_t1_ParamLimits

0x3128,	// (0x0003a841) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x00046fcf) mp4_progress_pane_t_ParamLimits

0x3141,	// (0x0003a85a) mup_progress_pane_cp04_ParamLimits

0xab8c,	// (0x000422a5) main_myfav_hc_pane_t5_ParamLimits

0xab8c,	// (0x000422a5) main_myfav_hc_pane_t5

0x53d3,	// (0x0003caec) aid_zoom_text_primary

0x5545,	// (0x0003cc5e) popup_adpt_find_window_ParamLimits

0x0c6c,	// (0x00038385) main_cam_set_pane

0xa61a,	// (0x00041d33) cam4_zoom_pane_ParamLimits

0xa61a,	// (0x00041d33) cam4_zoom_pane

0xac98,	// (0x000423b1) main_cam_set_pane_g1_ParamLimits

0xac98,	// (0x000423b1) main_cam_set_pane_g1

0xaca6,	// (0x000423bf) main_cam_set_pane_g2_ParamLimits

0xaca6,	// (0x000423bf) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x00047090) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x00047090) main_cam_set_pane_g

0xacb2,	// (0x000423cb) main_cam_set_pane_t1_ParamLimits

0xacb2,	// (0x000423cb) main_cam_set_pane_t1

0xacce,	// (0x000423e7) main_cset_listscroll_pane_ParamLimits

0xacce,	// (0x000423e7) main_cset_listscroll_pane

0xacf9,	// (0x00042412) main_cset_slider_pane_ParamLimits

0xacf9,	// (0x00042412) main_cset_slider_pane

0xd419,	// (0x00044b32) main_cset_list_pane_ParamLimits

0xd419,	// (0x00044b32) main_cset_list_pane

0xd429,	// (0x00044b42) scroll_pane_cp028

0xad18,	// (0x00042431) aid_area_touch_slider

0xad34,	// (0x0004244d) cset_slider_pane

0xad5e,	// (0x00042477) main_cset_slider_pane_g1

0xad73,	// (0x0004248c) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x00047095) main_cset_slider_pane_g

0xd462,	// (0x00044b7b) main_cset_slider_pane_t1

0xae35,	// (0x0004254e) main_cset_slider_pane_t2

0xae4f,	// (0x00042568) main_cset_slider_pane_t3

0xae69,	// (0x00042582) main_cset_slider_pane_t4

0xae83,	// (0x0004259c) main_cset_slider_pane_t5

0xaea1,	// (0x000425ba) main_cset_slider_pane_t6

0xaeb8,	// (0x000425d1) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000470ba) main_cset_slider_pane_t

0xafc4,	// (0x000426dd) cset_list_set_pane_ParamLimits

0xafc4,	// (0x000426dd) cset_list_set_pane

0xafda,	// (0x000426f3) aid_position_infowindow_above

0xafe2,	// (0x000426fb) aid_position_infowindow_below

0x4550,	// (0x0003bc69) cset_list_set_pane_g1_ParamLimits

0x4550,	// (0x0003bc69) cset_list_set_pane_g1

0x455c,	// (0x0003bc75) cset_list_set_pane_g3_ParamLimits

0x455c,	// (0x0003bc75) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000470d9) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000470d9) cset_list_set_pane_g

0x456b,	// (0x0003bc84) cset_list_set_pane_t1_ParamLimits

0x456b,	// (0x0003bc84) cset_list_set_pane_t1

0x0c6c,	// (0x00038385) list_highlight_pane_cp021_ParamLimits

0x0c6c,	// (0x00038385) list_highlight_pane_cp021

0x10e5,	// (0x000387fe) cset_slider_pane_g1

0x10f7,	// (0x00038810) cset_slider_pane_g2

0x10ee,	// (0x00038807) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x000470de) cset_slider_pane_g

0xafea,	// (0x00042703) aid_area_touch_cam4_zoom

0xaff2,	// (0x0004270b) cam4_zoom_cont_pane

0xaffa,	// (0x00042713) cam4_zoom_pane_g1

0xb002,	// (0x0004271b) cam4_zoom_pane_g2

0xb00a,	// (0x00042723) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x000470e5) cam4_zoom_pane_g

0xd502,	// (0x00044c1b) cam4_zoom_cont_pane_g1

0xd50b,	// (0x00044c24) cam4_zoom_cont_pane_g2

0xd514,	// (0x00044c2d) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x000470ec) cam4_zoom_cont_pane_g

0xa507,	// (0x00041c20) call4_image_pane_ParamLimits

0xa507,	// (0x00041c20) call4_image_pane

0x316b,	// (0x0003a884) call4_windows_conf_pane_ParamLimits

0x31ac,	// (0x0003a8c5) popup_call4_audio_in_window_ParamLimits

0x31ac,	// (0x0003a8c5) popup_call4_audio_in_window

0xe6de,	// (0x00045df7) bg_popup_call2_act_pane_cp02

0x3222,	// (0x0003a93b) call4_list_conf_pane

0x2827,	// (0x00039f40) call4_image_pane_g1

0x2827,	// (0x00039f40) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x00046e00) call4_image_pane_g

0xd51d,	// (0x00044c36) list_single_graphic_popup_conf4_pane_ParamLimits

0xd51d,	// (0x00044c36) list_single_graphic_popup_conf4_pane

0xe6de,	// (0x00045df7) list_highlight_pane_cp022

0xd530,	// (0x00044c49) list_single_graphic_popup_conf4_pane_g1

0x0da6,	// (0x000384bf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x000470f3) list_single_graphic_popup_conf4_pane_g

0xd538,	// (0x00044c51) list_single_graphic_popup_conf4_pane_t1

0x65ca,	// (0x0003dce3) popup_vtel_slider_window_ParamLimits

0x65ca,	// (0x0003dce3) popup_vtel_slider_window

0x314d,	// (0x0003a866) dialer2_ne_pane_t2_ParamLimits

0x314d,	// (0x0003a866) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x00046fd4) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x00046fd4) dialer2_ne_pane_t

0x0c6c,	// (0x00038385) bg_popup_sub_pane_cp010_ParamLimits

0x0c6c,	// (0x00038385) bg_popup_sub_pane_cp010

0xb012,	// (0x0004272b) popup_vtel_slider_window_g1_ParamLimits

0xb012,	// (0x0004272b) popup_vtel_slider_window_g1

0xb01e,	// (0x00042737) popup_vtel_slider_window_g2_ParamLimits

0xb01e,	// (0x00042737) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x000470f8) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x000470f8) popup_vtel_slider_window_g

0xb066,	// (0x0004277f) vtel_slider_pane_ParamLimits

0xb066,	// (0x0004277f) vtel_slider_pane

0xb075,	// (0x0004278e) vtel_slider_pane_g1_ParamLimits

0xb075,	// (0x0004278e) vtel_slider_pane_g1

0xb082,	// (0x0004279b) vtel_slider_pane_g2_ParamLimits

0xb082,	// (0x0004279b) vtel_slider_pane_g2

0xb08f,	// (0x000427a8) vtel_slider_pane_g3_ParamLimits

0xb08f,	// (0x000427a8) vtel_slider_pane_g3

0xb075,	// (0x0004278e) vtel_slider_pane_g4_ParamLimits

0xb075,	// (0x0004278e) vtel_slider_pane_g4

0xb09c,	// (0x000427b5) vtel_slider_pane_g5_ParamLimits

0xb09c,	// (0x000427b5) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x00047101) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x00047101) vtel_slider_pane_g

0xe6de,	// (0x00045df7) main_gallery2_pane

0xa86e,	// (0x00041f87) aid_size_row_itut2_dropdow_list_ParamLimits

0xa86e,	// (0x00041f87) aid_size_row_itut2_dropdow_list

0xa8ce,	// (0x00041fe7) grid_vitu2_function_top_pane_ParamLimits

0xa8ce,	// (0x00041fe7) grid_vitu2_function_top_pane

0xa924,	// (0x0004203d) popup_vitu2_dropdown_list_window_ParamLimits

0xa924,	// (0x0004203d) popup_vitu2_dropdown_list_window

0xa944,	// (0x0004205d) popup_vitu2_match_list_window

0xb0a9,	// (0x000427c2) cell_vitu2_function_top_pane_ParamLimits

0xb0a9,	// (0x000427c2) cell_vitu2_function_top_pane

0xb0c9,	// (0x000427e2) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb0c9,	// (0x000427e2) cell_vitu2_function_top_pane_cp01

0xb0e7,	// (0x00042800) cell_vitu2_function_top_wide_pane_ParamLimits

0xb0e7,	// (0x00042800) cell_vitu2_function_top_wide_pane

0x0c6c,	// (0x00038385) bg_button_pane_cp012

0xb105,	// (0x0004281e) cell_vitu2_function_top_pane_g1

0xb114,	// (0x0004282d) bg_button_pane_cp013_ParamLimits

0xb114,	// (0x0004282d) bg_button_pane_cp013

0xb130,	// (0x00042849) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb130,	// (0x00042849) cell_vitu2_function_top_wide_pane_g1

0xe6e8,	// (0x00045e01) bg_popup_sub_pane_cp20

0xb148,	// (0x00042861) list_vitu2_match_list_pane

0xd30f,	// (0x00044a28) bg_popup_sub_pane_cp20_g1

0xd317,	// (0x00044a30) bg_popup_sub_pane_cp20_g2

0x087e,	// (0x00037f97) bg_popup_sub_pane_cp20_g3

0xd31f,	// (0x00044a38) bg_popup_sub_pane_cp20_g4

0x085e,	// (0x00037f77) bg_popup_sub_pane_cp20_g5

0xd54e,	// (0x00044c67) bg_popup_sub_pane_cp20_g6

0xd32f,	// (0x00044a48) bg_popup_sub_pane_cp20_g7

0xd337,	// (0x00044a50) bg_popup_sub_pane_cp20_g8

0xd33f,	// (0x00044a58) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0004710c) bg_popup_sub_pane_cp20_g

0xb160,	// (0x00042879) list_vitu2_match_list_item_pane_ParamLimits

0xb160,	// (0x00042879) list_vitu2_match_list_item_pane

0xb172,	// (0x0004288b) list_vitu2_match_list_item_pane_t1

0xe6de,	// (0x00045df7) bg_popup_sub_pane_cp21

0x0cce,	// (0x000383e7) grid_vitu2_dropdown_list_pane

0xb180,	// (0x00042899) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb180,	// (0x00042899) cell_vitu2_dropdown_list_char_pane

0xb1a1,	// (0x000428ba) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb1a1,	// (0x000428ba) cell_vitu2_dropdown_list_ctrl_pane

0xd556,	// (0x00044c6f) cell_vitu2_dropdown_list_char_pane_g1

0xd55f,	// (0x00044c78) cell_vitu2_dropdown_list_char_pane_g2

0xd568,	// (0x00044c81) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x00047129) cell_vitu2_dropdown_list_char_pane_g

0xb1cd,	// (0x000428e6) cell_vitu2_dropdown_list_char_pane_t1

0xb1db,	// (0x000428f4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb1db,	// (0x000428f4) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb1eb,	// (0x00042904) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb1eb,	// (0x00042904) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb1fc,	// (0x00042915) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb1fc,	// (0x00042915) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb20c,	// (0x00042925) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb20c,	// (0x00042925) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2a93,	// (0x0003a1ac) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2a93,	// (0x0003a1ac) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x00047130) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x00047130) cell_vitu2_dropdown_list_ctrl_pane_g

0xb228,	// (0x00042941) aid_size_cell_gallery2_ParamLimits

0xb228,	// (0x00042941) aid_size_cell_gallery2

0xb236,	// (0x0004294f) grid_gallery2_pane_ParamLimits

0xb236,	// (0x0004294f) grid_gallery2_pane

0xb245,	// (0x0004295e) scroll_pane_cp029_ParamLimits

0xb245,	// (0x0004295e) scroll_pane_cp029

0xb251,	// (0x0004296a) cell_gallery2_pane_ParamLimits

0xb251,	// (0x0004296a) cell_gallery2_pane

0xd571,	// (0x00044c8a) cell_gallery2_pane_g2

0xd57b,	// (0x00044c94) cell_gallery2_pane_g3

0xd583,	// (0x00044c9c) cell_gallery2_pane_g4

0xd58b,	// (0x00044ca4) cell_gallery2_pane_g5

0x0fa1,	// (0x000386ba) grid_highlight_pane_cp10

0xa944,	// (0x0004205d) popup_vitu2_match_list_window_ParamLimits

0xa958,	// (0x00042071) popup_vitu2_query_window_ParamLimits

0xa958,	// (0x00042071) popup_vitu2_query_window

0xe6de,	// (0x00045df7) bg_vitu2_candi_button_pane

0xd556,	// (0x00044c6f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd55f,	// (0x00044c78) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd568,	// (0x00044c81) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x45d5,	// (0x0003bcee) bg_button_pane_cp015

0xb27f,	// (0x00042998) bg_button_pane_cp016

0xb292,	// (0x000429ab) bg_button_pane_cp017

0x241f,	// (0x00039b38) bg_popup_sub_pane_cp22

0xd593,	// (0x00044cac) popup_vitu2_query_window_g1

0x4608,	// (0x0003bd21) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0004713b) popup_vitu2_query_window_g

0x4625,	// (0x0003bd3e) popup_vitu2_query_window_t1_ParamLimits

0x4625,	// (0x0003bd3e) popup_vitu2_query_window_t1

0x4658,	// (0x0003bd71) popup_vitu2_query_window_t2_ParamLimits

0x4658,	// (0x0003bd71) popup_vitu2_query_window_t2

0x466a,	// (0x0003bd83) popup_vitu2_query_window_t3_ParamLimits

0x466a,	// (0x0003bd83) popup_vitu2_query_window_t3

0xb2b6,	// (0x000429cf) popup_vitu2_query_window_t4_ParamLimits

0xb2b6,	// (0x000429cf) popup_vitu2_query_window_t4

0xb2d7,	// (0x000429f0) popup_vitu2_query_window_t5_ParamLimits

0xb2d7,	// (0x000429f0) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x00047142) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x00047142) popup_vitu2_query_window_t

0xd411,	// (0x00044b2a) main_cset_text_pane

0xad18,	// (0x00042431) aid_area_touch_slider_ParamLimits

0xad34,	// (0x0004244d) cset_slider_pane_ParamLimits

0xad5e,	// (0x00042477) main_cset_slider_pane_g1_ParamLimits

0xad73,	// (0x0004248c) main_cset_slider_pane_g2_ParamLimits

0xd432,	// (0x00044b4b) main_cset_slider_pane_g3_ParamLimits

0xd432,	// (0x00044b4b) main_cset_slider_pane_g3

0xad88,	// (0x000424a1) main_cset_slider_pane_g4_ParamLimits

0xad88,	// (0x000424a1) main_cset_slider_pane_g4

0xad97,	// (0x000424b0) main_cset_slider_pane_g5_ParamLimits

0xad97,	// (0x000424b0) main_cset_slider_pane_g5

0xada5,	// (0x000424be) main_cset_slider_pane_g6_ParamLimits

0xada5,	// (0x000424be) main_cset_slider_pane_g6

0xf97c,	// (0x00047095) main_cset_slider_pane_g_ParamLimits

0xd462,	// (0x00044b7b) main_cset_slider_pane_t1_ParamLimits

0xae35,	// (0x0004254e) main_cset_slider_pane_t2_ParamLimits

0xae4f,	// (0x00042568) main_cset_slider_pane_t3_ParamLimits

0xae69,	// (0x00042582) main_cset_slider_pane_t4_ParamLimits

0xae83,	// (0x0004259c) main_cset_slider_pane_t5_ParamLimits

0xaea1,	// (0x000425ba) main_cset_slider_pane_t6_ParamLimits

0xaeb8,	// (0x000425d1) main_cset_slider_pane_t7_ParamLimits

0xaee6,	// (0x000425ff) main_cset_slider_pane_t8_ParamLimits

0xaee6,	// (0x000425ff) main_cset_slider_pane_t8

0xaf0e,	// (0x00042627) main_cset_slider_pane_t9_ParamLimits

0xaf0e,	// (0x00042627) main_cset_slider_pane_t9

0xaf36,	// (0x0004264f) main_cset_slider_pane_t10_ParamLimits

0xaf36,	// (0x0004264f) main_cset_slider_pane_t10

0xaf5e,	// (0x00042677) main_cset_slider_pane_t11_ParamLimits

0xaf5e,	// (0x00042677) main_cset_slider_pane_t11

0xaf88,	// (0x000426a1) main_cset_slider_pane_t12_ParamLimits

0xaf88,	// (0x000426a1) main_cset_slider_pane_t12

0xafa5,	// (0x000426be) main_cset_slider_pane_t13_ParamLimits

0xafa5,	// (0x000426be) main_cset_slider_pane_t13

0xf9a1,	// (0x000470ba) main_cset_slider_pane_t_ParamLimits

0xe6de,	// (0x00045df7) bg_popup_sub_pane_cp011

0xd59f,	// (0x00044cb8) main_cset_text_pane_g1

0xd5a7,	// (0x00044cc0) main_cset_text_pane_t1

0xd5b5,	// (0x00044cce) main_cset_text_pane_t2

0xd5c3,	// (0x00044cdc) main_cset_text_pane_t3

0xd5d1,	// (0x00044cea) main_cset_text_pane_t4

0xd5df,	// (0x00044cf8) main_cset_text_pane_t5

0xd5ed,	// (0x00044d06) main_cset_text_pane_t6

0xd5fb,	// (0x00044d14) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x00047151) main_cset_text_pane_t

0xe6de,	// (0x00045df7) main_cam4_burst_pane

0xe6de,	// (0x00045df7) main_cam5_pane

0xac67,	// (0x00042380) bg_button_pane_cp019

0xac70,	// (0x00042389) bg_button_pane_cp020

0xd43e,	// (0x00044b57) main_cset_slider_pane_g7_ParamLimits

0xd43e,	// (0x00044b57) main_cset_slider_pane_g7

0xd44a,	// (0x00044b63) main_cset_slider_pane_g8_ParamLimits

0xd44a,	// (0x00044b63) main_cset_slider_pane_g8

0xadb9,	// (0x000424d2) main_cset_slider_pane_g9_ParamLimits

0xadb9,	// (0x000424d2) main_cset_slider_pane_g9

0xadc5,	// (0x000424de) main_cset_slider_pane_g10_ParamLimits

0xadc5,	// (0x000424de) main_cset_slider_pane_g10

0xadd1,	// (0x000424ea) main_cset_slider_pane_g11_ParamLimits

0xadd1,	// (0x000424ea) main_cset_slider_pane_g11

0xaddd,	// (0x000424f6) main_cset_slider_pane_g12_ParamLimits

0xaddd,	// (0x000424f6) main_cset_slider_pane_g12

0xade9,	// (0x00042502) main_cset_slider_pane_g13_ParamLimits

0xade9,	// (0x00042502) main_cset_slider_pane_g13

0xadf5,	// (0x0004250e) main_cset_slider_pane_g14_ParamLimits

0xadf5,	// (0x0004250e) main_cset_slider_pane_g14

0xae01,	// (0x0004251a) main_cset_slider_pane_g15_ParamLimits

0xae01,	// (0x0004251a) main_cset_slider_pane_g15

0xd490,	// (0x00044ba9) main_cset_slider_pane_t14_ParamLimits

0xd490,	// (0x00044ba9) main_cset_slider_pane_t14

0xd4c9,	// (0x00044be2) main_cset_slider_pane_t15_ParamLimits

0xd4c9,	// (0x00044be2) main_cset_slider_pane_t15

0xb2f8,	// (0x00042a11) aid_cam4_burst_size_cell_ParamLimits

0xb2f8,	// (0x00042a11) aid_cam4_burst_size_cell

0xb314,	// (0x00042a2d) grid_cam4_burst_pane_ParamLimits

0xb314,	// (0x00042a2d) grid_cam4_burst_pane

0xb344,	// (0x00042a5d) linegrid_cam4_burst_pane_ParamLimits

0xb344,	// (0x00042a5d) linegrid_cam4_burst_pane

0xb364,	// (0x00042a7d) scroll_pane_cp30_ParamLimits

0xb364,	// (0x00042a7d) scroll_pane_cp30

0xb370,	// (0x00042a89) cell_cam4_burst_pane_ParamLimits

0xb370,	// (0x00042a89) cell_cam4_burst_pane

0xd609,	// (0x00044d22) linegrid_cam4_burst_pane_g1_ParamLimits

0xd609,	// (0x00044d22) linegrid_cam4_burst_pane_g1

0xb3ac,	// (0x00042ac5) linegrid_cam4_burst_pane_g2_ParamLimits

0xb3ac,	// (0x00042ac5) linegrid_cam4_burst_pane_g2

0xd616,	// (0x00044d2f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd616,	// (0x00044d2f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x00047160) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x00047160) linegrid_cam4_burst_pane_g

0xb3bd,	// (0x00042ad6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb3bd,	// (0x00042ad6) linegrid_cam4_burst_pane_g3_copy1

0xd623,	// (0x00044d3c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd623,	// (0x00044d3c) linegrid_cam4_burst_pane_g4

0xb3d7,	// (0x00042af0) linegrid_cam4_burst_pane_g5_ParamLimits

0xb3d7,	// (0x00042af0) linegrid_cam4_burst_pane_g5

0xb3e8,	// (0x00042b01) linegrid_cam4_burst_pane_g6_ParamLimits

0xb3e8,	// (0x00042b01) linegrid_cam4_burst_pane_g6

0xd630,	// (0x00044d49) linegrid_cam4_burst_pane_g7_ParamLimits

0xd630,	// (0x00044d49) linegrid_cam4_burst_pane_g7

0xb3f9,	// (0x00042b12) cell_cam4_burst_pane_g1

0xd649,	// (0x00044d62) main_cam5_pane_t1_ParamLimits

0xd649,	// (0x00044d62) main_cam5_pane_t1

0xd65b,	// (0x00044d74) main_cam5_pane_t2_ParamLimits

0xd65b,	// (0x00044d74) main_cam5_pane_t2

0xd66d,	// (0x00044d86) main_cam5_pane_t3_ParamLimits

0xd66d,	// (0x00044d86) main_cam5_pane_t3

0xd67f,	// (0x00044d98) main_cam5_pane_t4_ParamLimits

0xd67f,	// (0x00044d98) main_cam5_pane_t4

0xd697,	// (0x00044db0) main_cam5_pane_t5_ParamLimits

0xd697,	// (0x00044db0) main_cam5_pane_t5

0xd6ab,	// (0x00044dc4) main_cam5_pane_t6_ParamLimits

0xd6ab,	// (0x00044dc4) main_cam5_pane_t6

0xd6bf,	// (0x00044dd8) main_cam5_pane_t7_ParamLimits

0xd6bf,	// (0x00044dd8) main_cam5_pane_t7

0xd6d1,	// (0x00044dea) main_cam5_pane_t8_ParamLimits

0xd6d1,	// (0x00044dea) main_cam5_pane_t8

0xd6ed,	// (0x00044e06) main_cam5_pane_t9_ParamLimits

0xd6ed,	// (0x00044e06) main_cam5_pane_t9

0xd6ff,	// (0x00044e18) main_cam5_pane_t10_ParamLimits

0xd6ff,	// (0x00044e18) main_cam5_pane_t10

0xd711,	// (0x00044e2a) main_cam5_pane_t11_ParamLimits

0xd711,	// (0x00044e2a) main_cam5_pane_t11

0xd723,	// (0x00044e3c) main_cam5_pane_t12_ParamLimits

0xd723,	// (0x00044e3c) main_cam5_pane_t12

0xd738,	// (0x00044e51) main_cam5_pane_t13_ParamLimits

0xd738,	// (0x00044e51) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0004716c) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0004716c) main_cam5_pane_t

0x55fb,	// (0x0003cd14) popup_scut_keymap_window_ParamLimits

0x55fb,	// (0x0003cd14) popup_scut_keymap_window

0xb40c,	// (0x00042b25) aid_size_cell_brow_shortcut

0x0fa1,	// (0x000386ba) bg_popup_window_pane_cp010

0xb418,	// (0x00042b31) grid_scut_pane

0xb424,	// (0x00042b3d) cell_scut_pane_ParamLimits

0xb424,	// (0x00042b3d) cell_scut_pane

0xb43b,	// (0x00042b54) cell_scut_pane_g1

0xd755,	// (0x00044e6e) cell_scut_pane_t1

0xd764,	// (0x00044e7d) cell_scut_pane_t2

0xb444,	// (0x00042b5d) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x00047187) cell_scut_pane_t

0x9477,	// (0x00040b90) main_mup3_pane_g8_ParamLimits

0x9477,	// (0x00040b90) main_mup3_pane_g8

0xa87c,	// (0x00041f95) area_vitu2_query_pane_ParamLimits

0xa87c,	// (0x00041f95) area_vitu2_query_pane

0x45e7,	// (0x0003bd00) input_focus_pane_cp08

0xd773,	// (0x00044e8c) area_vitu2_query_pane_g1

0x46e8,	// (0x0003be01) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0004718e) area_vitu2_query_pane_g

0xb452,	// (0x00042b6b) area_vitu2_query_pane_t1_ParamLimits

0xb452,	// (0x00042b6b) area_vitu2_query_pane_t1

0xb466,	// (0x00042b7f) area_vitu2_query_pane_t2_ParamLimits

0xb466,	// (0x00042b7f) area_vitu2_query_pane_t2

0x46f9,	// (0x0003be12) area_vitu2_query_pane_t3_ParamLimits

0x46f9,	// (0x0003be12) area_vitu2_query_pane_t3

0x4721,	// (0x0003be3a) area_vitu2_query_pane_t4_ParamLimits

0x4721,	// (0x0003be3a) area_vitu2_query_pane_t4

0x4749,	// (0x0003be62) area_vitu2_query_pane_t5_ParamLimits

0x4749,	// (0x0003be62) area_vitu2_query_pane_t5

0x4771,	// (0x0003be8a) area_vitu2_query_pane_t6_ParamLimits

0x4771,	// (0x0003be8a) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x00047193) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x00047193) area_vitu2_query_pane_t

0xb47a,	// (0x00042b93) bg_button_pane_cp018

0xb488,	// (0x00042ba1) bg_button_pane_cp021

0x47bd,	// (0x0003bed6) bg_button_pane_cp022

0x47ce,	// (0x0003bee7) input_focus_pane_cp09

0x79c4,	// (0x0003f0dd) aid_size_touch_mv_arrow_left

0x79ed,	// (0x0003f106) aid_size_touch_mv_arrow_right

0xae19,	// (0x00042532) main_cset_slider_pane_g16_ParamLimits

0xae19,	// (0x00042532) main_cset_slider_pane_g16

0xae27,	// (0x00042540) main_cset_slider_pane_g17_ParamLimits

0xae27,	// (0x00042540) main_cset_slider_pane_g17

0xb3f9,	// (0x00042b12) cell_cam4_burst_pane_g1_ParamLimits

0xe6de,	// (0x00045df7) compa_mode_pane

0xb02a,	// (0x00042743) popup_vtel_slider_window_g3_ParamLimits

0xb02a,	// (0x00042743) popup_vtel_slider_window_g3

0xb03e,	// (0x00042757) popup_vtel_slider_window_g4_ParamLimits

0xb03e,	// (0x00042757) popup_vtel_slider_window_g4

0xb052,	// (0x0004276b) popup_vtel_slider_window_t1_ParamLimits

0xb052,	// (0x0004276b) popup_vtel_slider_window_t1

0xe6de,	// (0x00045df7) main_cl_pane

0x87f7,	// (0x0003ff10) popup_imed_adjust2_window_ParamLimits

0x241f,	// (0x00039b38) bg_tb_trans_pane_cp05_ParamLimits

0x2d62,	// (0x0003a47b) popup_imed_adjust2_window_g1_ParamLimits

0x2d71,	// (0x0003a48a) popup_imed_adjust2_window_g2_ParamLimits

0x2d71,	// (0x0003a48a) popup_imed_adjust2_window_g2

0x2d7d,	// (0x0003a496) popup_imed_adjust2_window_g3_ParamLimits

0x2d7d,	// (0x0003a496) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x00046efe) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x00046efe) popup_imed_adjust2_window_g

0x2d89,	// (0x0003a4a2) popup_imed_adjust2_window_t1_ParamLimits

0x2da1,	// (0x0003a4ba) slider_imed_adjust_pane_ParamLimits

0x2db5,	// (0x0003a4ce) slider_imed_adjust_pane_g1_ParamLimits

0x2dc5,	// (0x0003a4de) slider_imed_adjust_pane_g2_ParamLimits

0x2dd5,	// (0x0003a4ee) slider_imed_adjust_pane_g3_ParamLimits

0x2de6,	// (0x0003a4ff) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x00046f05) slider_imed_adjust_pane_g_ParamLimits

0xa5c3,	// (0x00041cdc) aid_touch_area_cam4_ParamLimits

0xa5c3,	// (0x00041cdc) aid_touch_area_cam4

0xa5d3,	// (0x00041cec) battery_pane_cp01

0xa65a,	// (0x00041d73) main_camera4_pane_g6_ParamLimits

0xa65a,	// (0x00041d73) main_camera4_pane_g6

0xa678,	// (0x00041d91) main_camera4_pane_t2_ParamLimits

0xa678,	// (0x00041d91) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x00047008) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x00047008) main_camera4_pane_t

0xa6ff,	// (0x00041e18) aid_touch_area_vid4_ParamLimits

0xa6ff,	// (0x00041e18) aid_touch_area_vid4

0xa73f,	// (0x00041e58) main_video4_pane_g5_ParamLimits

0xa73f,	// (0x00041e58) main_video4_pane_g5

0xa763,	// (0x00041e7c) vid4_progress_pane_ParamLimits

0xa763,	// (0x00041e7c) vid4_progress_pane

0xd456,	// (0x00044b6f) main_cset_slider_pane_g18_ParamLimits

0xd456,	// (0x00044b6f) main_cset_slider_pane_g18

0xd63d,	// (0x00044d56) cell_cam4_burst_pane_g2_ParamLimits

0xd63d,	// (0x00044d56) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x00047167) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x00047167) cell_cam4_burst_pane_g

0xb494,	// (0x00042bad) bg_cl_pane_ParamLimits

0xb494,	// (0x00042bad) bg_cl_pane

0xb4a0,	// (0x00042bb9) cl_header_pane_ParamLimits

0xb4a0,	// (0x00042bb9) cl_header_pane

0xb4ac,	// (0x00042bc5) cl_listscroll_pane_ParamLimits

0xb4ac,	// (0x00042bc5) cl_listscroll_pane

0xd77f,	// (0x00044e98) bg_cl_pane_g1

0xd787,	// (0x00044ea0) bg_cl_pane_g2

0xd78f,	// (0x00044ea8) bg_cl_pane_g3

0xd797,	// (0x00044eb0) bg_cl_pane_g4

0xd79f,	// (0x00044eb8) bg_cl_pane_g5

0xd7a7,	// (0x00044ec0) bg_cl_pane_g6

0xd7af,	// (0x00044ec8) bg_cl_pane_g7

0xd7b7,	// (0x00044ed0) bg_cl_pane_g8

0xd7bf,	// (0x00044ed8) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x000471a2) bg_cl_pane_g

0xb4b8,	// (0x00042bd1) aid_height_cl_leading_ParamLimits

0xb4b8,	// (0x00042bd1) aid_height_cl_leading

0xb4c4,	// (0x00042bdd) aid_height_cl_text_ParamLimits

0xb4c4,	// (0x00042bdd) aid_height_cl_text

0xe6e8,	// (0x00045e01) bg_cl_header_pane_ParamLimits

0xe6e8,	// (0x00045e01) bg_cl_header_pane

0xb4dc,	// (0x00042bf5) cl_header_pane_g1_ParamLimits

0xb4dc,	// (0x00042bf5) cl_header_pane_g1

0xb4e9,	// (0x00042c02) cl_header_pane_t1_ParamLimits

0xb4e9,	// (0x00042c02) cl_header_pane_t1

0xd7c7,	// (0x00044ee0) cl_list_pane

0xd429,	// (0x00044b42) hc_scroll_pane_cp01

0x085e,	// (0x00037f77) bg_cl_header_pane_g1

0xd30f,	// (0x00044a28) bg_cl_header_pane_g2

0x087e,	// (0x00037f97) bg_cl_header_pane_g3

0xd31f,	// (0x00044a38) bg_cl_header_pane_g4

0xd317,	// (0x00044a30) bg_cl_header_pane_g5

0xd54e,	// (0x00044c67) bg_cl_header_pane_g6

0xd337,	// (0x00044a50) bg_cl_header_pane_g7

0xd33f,	// (0x00044a58) bg_cl_header_pane_g8

0xd32f,	// (0x00044a48) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x000471b5) bg_cl_header_pane_g

0xb4fb,	// (0x00042c14) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb4fb,	// (0x00042c14) hc_cl_list_double_graphic_heading_pane

0xb50c,	// (0x00042c25) hc_cl_list_single_graphic_pane_ParamLimits

0xb50c,	// (0x00042c25) hc_cl_list_single_graphic_pane

0xb525,	// (0x00042c3e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb525,	// (0x00042c3e) hc_cl_list_single_graphic_pane_g1

0xb531,	// (0x00042c4a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb531,	// (0x00042c4a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x000471c8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x000471c8) hc_cl_list_single_graphic_pane_g

0xb545,	// (0x00042c5e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb545,	// (0x00042c5e) hc_cl_list_single_graphic_pane_t1

0xb525,	// (0x00042c3e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb525,	// (0x00042c3e) hc_cl_list_double_graphic_heading_pane_g1

0xb55a,	// (0x00042c73) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb55a,	// (0x00042c73) hc_cl_list_double_graphic_heading_pane_g2

0xb56e,	// (0x00042c87) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb56e,	// (0x00042c87) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x000471cd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x000471cd) hc_cl_list_double_graphic_heading_pane_g

0xb582,	// (0x00042c9b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb582,	// (0x00042c9b) hc_cl_list_double_graphic_heading_pane_t1

0xb597,	// (0x00042cb0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb597,	// (0x00042cb0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x000471d4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x000471d4) hc_cl_list_double_graphic_heading_pane_t

0xb5b4,	// (0x00042ccd) vid4_progress_pane_g1

0xb5c6,	// (0x00042cdf) vid4_progress_pane_g2

0x8037,	// (0x0003f750) vid4_progress_pane_g3

0xb5d6,	// (0x00042cef) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x000471d9) vid4_progress_pane_g

0xb5f4,	// (0x00042d0d) vid4_progress_pane_t1

0xb609,	// (0x00042d22) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x000471e4) vid4_progress_pane_t

0xb634,	// (0x00042d4d) wait_bar_pane_cp07

0x261a,	// (0x00039d33) blid_firmament_pane_ParamLimits

0x265d,	// (0x00039d76) popup_blid_sat_info2_window_g1

0x2681,	// (0x00039d9a) popup_blid_sat_info2_window_t3

0x268f,	// (0x00039da8) popup_blid_sat_info2_window_t4

0x269d,	// (0x00039db6) popup_blid_sat_info2_window_t5

0x26ab,	// (0x00039dc4) popup_blid_sat_info2_window_t6

0x26bb,	// (0x00039dd4) popup_blid_sat_info2_window_t7

0x26c9,	// (0x00039de2) popup_blid_sat_info2_window_t8

0x26d7,	// (0x00039df0) popup_blid_sat_info2_window_t9

0x26e5,	// (0x00039dfe) popup_blid_sat_info2_window_t10

0x27a7,	// (0x00039ec0) aid_firma_cardinal_ParamLimits

0x27bb,	// (0x00039ed4) blid_firmament_pane_t1_ParamLimits

0x27d2,	// (0x00039eeb) blid_firmament_pane_t2_ParamLimits

0x27e9,	// (0x00039f02) blid_firmament_pane_t3_ParamLimits

0x2800,	// (0x00039f19) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x00046df7) blid_firmament_pane_t_ParamLimits

0x2817,	// (0x00039f30) blid_sat_info_pane_ParamLimits

0x0c6c,	// (0x00038385) main_cam_set_pane_ParamLimits

0x9c2f,	// (0x00041348) aid_size_cell_colour_35_ParamLimits

0x9c49,	// (0x00041362) aid_size_cell_colour_112_ParamLimits

0x9c60,	// (0x00041379) aid_size_cell_effect_ParamLimits

0x0c6c,	// (0x00038385) bg_tb_trans_pane_cp02_ParamLimits

0x0c7a,	// (0x00038393) heading_imed_pane_ParamLimits

0x9c7a,	// (0x00041393) listscroll_imed_pane_ParamLimits

0x1a45,	// (0x0003915e) popup_call2_audio_first_window_g5_ParamLimits

0x1a45,	// (0x0003915e) popup_call2_audio_first_window_g5

0xa380,	// (0x00041a99) aid_size_touch_image3_arrow_left_ParamLimits

0xa380,	// (0x00041a99) aid_size_touch_image3_arrow_left

0xa396,	// (0x00041aaf) aid_size_touch_image3_arrow_right_ParamLimits

0xa396,	// (0x00041aaf) aid_size_touch_image3_arrow_right

0xb61f,	// (0x00042d38) vid4_progress_pane_t3

0x9f18,	// (0x00041631) main_hwr_training_symbol_option_pane_ParamLimits

0x9f18,	// (0x00041631) main_hwr_training_symbol_option_pane

0x304f,	// (0x0003a768) popup_hwr_training_preview_window_ParamLimits

0x304f,	// (0x0003a768) popup_hwr_training_preview_window

0x9f79,	// (0x00041692) hwr_training_navi_pane_g5_ParamLimits

0x9f79,	// (0x00041692) hwr_training_navi_pane_g5

0xd2fd,	// (0x00044a16) popup_char_count_window

0xe6e8,	// (0x00045e01) bg_popup_sub_pane_cp20_ParamLimits

0xb148,	// (0x00042861) list_vitu2_match_list_pane_ParamLimits

0xb154,	// (0x0004286d) vitu2_page_scroll_pane_ParamLimits

0xb154,	// (0x0004286d) vitu2_page_scroll_pane

0xd7d9,	// (0x00044ef2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d9,	// (0x00044ef2) list_single_hwr_training_symbol_option_pane

0xd7ec,	// (0x00044f05) list_single_hwr_training_symbol_option_pane_g1

0xd7f4,	// (0x00044f0d) list_single_hwr_training_symbol_option_pane_t1

0xd802,	// (0x00044f1b) bg_button_pane_cp023

0xd80b,	// (0x00044f24) bg_button_pane_cp024

0xb658,	// (0x00042d71) vitu2_page_scroll_pane_g1

0xb660,	// (0x00042d79) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x000471eb) vitu2_page_scroll_pane_g

0xb668,	// (0x00042d81) vitu2_page_scroll_pane_t1

0xd83e,	// (0x00044f57) popup_char_count_window_g1

0xd847,	// (0x00044f60) popup_char_count_window_g2

0xd850,	// (0x00044f69) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x000471f0) popup_char_count_window_g

0xd859,	// (0x00044f72) popup_char_count_window_t1

0xe6de,	// (0x00045df7) main_vded2_pane

0x2d4e,	// (0x0003a467) aid_size_cell_imed_line

0x2d58,	// (0x0003a471) grid_imed_line_width_pane

0xa7d1,	// (0x00041eea) vid4_indicators_pane_g4

0xd867,	// (0x00044f80) cell_imed_line_width_pane_ParamLimits

0xd867,	// (0x00044f80) cell_imed_line_width_pane

0xd87b,	// (0x00044f94) cell_imed_line_width_pane_g1

0xd884,	// (0x00044f9d) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x000471f7) cell_imed_line_width_pane_g

0xb677,	// (0x00042d90) main_vded2_pane_g1_ParamLimits

0xb677,	// (0x00042d90) main_vded2_pane_g1

0xb684,	// (0x00042d9d) main_vded2_pane_g2_ParamLimits

0xb684,	// (0x00042d9d) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x000471fc) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x000471fc) main_vded2_pane_g

0xb692,	// (0x00042dab) vded2_slider_pane_ParamLimits

0xb692,	// (0x00042dab) vded2_slider_pane

0xb69f,	// (0x00042db8) aid_size_touch_vded2_end

0xb6a9,	// (0x00042dc2) aid_size_touch_vded2_playhead

0xd88c,	// (0x00044fa5) aid_size_touch_vded2_start

0xd894,	// (0x00044fad) vded2_slider_bg_pane

0xd89d,	// (0x00044fb6) vded2_slider_pane_g1

0xd8a6,	// (0x00044fbf) vded2_slider_pane_g2

0xb6b1,	// (0x00042dca) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x00047201) vded2_slider_pane_g

0xd8ae,	// (0x00044fc7) vded2_slider_bg_pane_g1

0xd8b7,	// (0x00044fd0) vded2_slider_bg_pane_g2

0xd8c0,	// (0x00044fd9) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x00047208) vded2_slider_bg_pane_g

0x804f,	// (0x0003f768) aid_postcard_touch_down_pane_ParamLimits

0x804f,	// (0x0003f768) aid_postcard_touch_down_pane

0x805f,	// (0x0003f778) aid_postcard_touch_up_pane_ParamLimits

0x805f,	// (0x0003f778) aid_postcard_touch_up_pane

0xe6de,	// (0x00045df7) main_blid2_pane

0x8782,	// (0x0003fe9b) popup_blid2_search_window

0xe6de,	// (0x00045df7) blid2_gps_pane

0xe6de,	// (0x00045df7) blid2_navig_pane

0xe6de,	// (0x00045df7) blid2_search_pane

0xe6de,	// (0x00045df7) blid2_tripm_pane

0xb6ba,	// (0x00042dd3) blid2_search_pane_g1_ParamLimits

0xb6ba,	// (0x00042dd3) blid2_search_pane_g1

0xb6ca,	// (0x00042de3) blid2_search_pane_t1_ParamLimits

0xb6ca,	// (0x00042de3) blid2_search_pane_t1

0xb6dc,	// (0x00042df5) aid_size_cell_blid2_gps_ParamLimits

0xb6dc,	// (0x00042df5) aid_size_cell_blid2_gps

0xb6ec,	// (0x00042e05) blid2_gps_pane_g1_ParamLimits

0xb6ec,	// (0x00042e05) blid2_gps_pane_g1

0xb6f8,	// (0x00042e11) grid_blid2_satellite_pane_ParamLimits

0xb6f8,	// (0x00042e11) grid_blid2_satellite_pane

0xb708,	// (0x00042e21) blid2_navig_pane_g1_ParamLimits

0xb708,	// (0x00042e21) blid2_navig_pane_g1

0xb714,	// (0x00042e2d) blid2_navig_pane_t1_ParamLimits

0xb714,	// (0x00042e2d) blid2_navig_pane_t1

0xb726,	// (0x00042e3f) blid2_navig_pane_t2_ParamLimits

0xb726,	// (0x00042e3f) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0004720f) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0004720f) blid2_navig_pane_t

0xb738,	// (0x00042e51) blid2_navig_ring_pane_ParamLimits

0xb738,	// (0x00042e51) blid2_navig_ring_pane

0xb748,	// (0x00042e61) blid2_speed_pane_ParamLimits

0xb748,	// (0x00042e61) blid2_speed_pane

0xb754,	// (0x00042e6d) blid2_tripm_pane_g1_ParamLimits

0xb754,	// (0x00042e6d) blid2_tripm_pane_g1

0xb764,	// (0x00042e7d) blid2_tripm_pane_g2_ParamLimits

0xb764,	// (0x00042e7d) blid2_tripm_pane_g2

0xb770,	// (0x00042e89) blid2_tripm_pane_g3_ParamLimits

0xb770,	// (0x00042e89) blid2_tripm_pane_g3

0xb77c,	// (0x00042e95) blid2_tripm_pane_g4_ParamLimits

0xb77c,	// (0x00042e95) blid2_tripm_pane_g4

0xb788,	// (0x00042ea1) blid2_tripm_pane_g5_ParamLimits

0xb788,	// (0x00042ea1) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x00047214) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x00047214) blid2_tripm_pane_g

0xb7a4,	// (0x00042ebd) blid2_tripm_pane_t1_ParamLimits

0xb7a4,	// (0x00042ebd) blid2_tripm_pane_t1

0xb7b8,	// (0x00042ed1) blid2_tripm_pane_t2_ParamLimits

0xb7b8,	// (0x00042ed1) blid2_tripm_pane_t2

0xb7ca,	// (0x00042ee3) blid2_tripm_pane_t3_ParamLimits

0xb7ca,	// (0x00042ee3) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x00047221) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x00047221) blid2_tripm_pane_t

0xb7fc,	// (0x00042f15) cell_blid2_satellite_pane_ParamLimits

0xb7fc,	// (0x00042f15) cell_blid2_satellite_pane

0xb816,	// (0x00042f2f) cell_blid2_satellite_pane_g1

0xd8c9,	// (0x00044fe2) cell_blid2_satellite_pane_t1

0x2827,	// (0x00039f40) blid2_speed_pane_g1

0xd8d7,	// (0x00044ff0) blid2_speed_pane_t1

0xd8e5,	// (0x00044ffe) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0004722a) blid2_speed_pane_t

0x2827,	// (0x00039f40) blid2_navig_ring_pane_g1

0xb81f,	// (0x00042f38) blid2_navig_ring_pane_g2

0xb827,	// (0x00042f40) blid2_navig_ring_pane_g3

0xb82f,	// (0x00042f48) blid2_navig_ring_pane_g4

0xb837,	// (0x00042f50) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0004722f) blid2_navig_ring_pane_g

0xe6de,	// (0x00045df7) bg_popup_window_pane_cp011

0xd8f3,	// (0x0004500c) popup_blid2_search_window_g1

0xd8fb,	// (0x00045014) popup_blid2_search_window_t1

0xd909,	// (0x00045022) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0004723a) popup_blid2_search_window_t

0x076d,	// (0x00037e86) main_browser_pane_g1

0x045d,	// (0x00037b76) main_browser_pane_ParamLimits

0x0c6c,	// (0x00038385) bg_button_pane_cp011_ParamLimits

0xaa3a,	// (0x00042153) cell_vitu2_function_pane_g1_ParamLimits

0x241f,	// (0x00039b38) bg_popup_sub_pane_cp22_ParamLimits

0x45e7,	// (0x0003bd00) input_focus_pane_cp08_ParamLimits

0xb2a5,	// (0x000429be) popup_vitu2_query_button_pane_ParamLimits

0xb2a5,	// (0x000429be) popup_vitu2_query_button_pane

0x45fe,	// (0x0003bd17) popup_vitu2_query_input_button_pane

0xd593,	// (0x00044cac) popup_vitu2_query_window_g1_ParamLimits

0x4608,	// (0x0003bd21) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0004713b) popup_vitu2_query_window_g_ParamLimits

0xe6de,	// (0x00045df7) bg_button_pane_cp026

0xb83f,	// (0x00042f58) popup_vitu2_query_input_button_pane_g1

0xe6de,	// (0x00045df7) bg_button_pane_cp025

0xd917,	// (0x00045030) popup_vitu2_query_button_pane_t1

0x91da,	// (0x000408f3) main_mp3_pane_t6

0x91ea,	// (0x00040903) popup_slider_window_cp01

0xa6ae,	// (0x00041dc7) cam4_battery_pane

0xa78e,	// (0x00041ea7) cam4_battery_pane_cp02

0xb5ac,	// (0x00042cc5) cam4_battery_pane_cp01

0xb5ac,	// (0x00042cc5) cam4_battery_pane_cp03

0x2827,	// (0x00039f40) cam4_battery_pane_g1

0xd925,	// (0x0004503e) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0004723f) cam4_battery_pane_g

0x26f3,	// (0x00039e0c) popup_blid_sat_info2_window_t11

0x79c4,	// (0x0003f0dd) aid_size_touch_mv_arrow_left_ParamLimits

0x79ed,	// (0x0003f106) aid_size_touch_mv_arrow_right_ParamLimits

0x0f01,	// (0x0003861a) navi_pane_g1_ParamLimits

0x7a2c,	// (0x0003f145) navi_pane_g2_ParamLimits

0x7a5a,	// (0x0003f173) navi_pane_g3_ParamLimits

0xf3f0,	// (0x00046b09) navi_pane_g_ParamLimits

0x7ab4,	// (0x0003f1cd) navi_pane_mv_t1_ParamLimits

0x9c86,	// (0x0004139f) grid_imed_effect_pane_ParamLimits

0x648a,	// (0x0003dba3) aid_placing_vt_slider_lsc

0x06bc,	// (0x00037dd5) aid_placing_vt_slider_prt

0x0c6c,	// (0x00038385) bg_tb_trans_pane_cp01_ParamLimits

0x29b3,	// (0x0003a0cc) popup_image_details_window_g1_ParamLimits

0x29c6,	// (0x0003a0df) popup_image_details_window_g2_ParamLimits

0x29db,	// (0x0003a0f4) popup_image_details_window_g3_ParamLimits

0x29db,	// (0x0003a0f4) popup_image_details_window_g3

0xf723,	// (0x00046e3c) popup_image_details_window_g_ParamLimits

0x29ef,	// (0x0003a108) popup_image_details_window_t1_ParamLimits

0x2a01,	// (0x0003a11a) popup_image_details_window_t2_ParamLimits

0x2a1a,	// (0x0003a133) popup_image_details_window_t3_ParamLimits

0x2a2e,	// (0x0003a147) popup_image_details_window_t4_ParamLimits

0x2a49,	// (0x0003a162) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x00046e43) popup_image_details_window_t_ParamLimits

0xb4d0,	// (0x00042be9) cl_header_name_pane_ParamLimits

0xb4d0,	// (0x00042be9) cl_header_name_pane

0xb847,	// (0x00042f60) cl_header_name_pane_t1_ParamLimits

0xb847,	// (0x00042f60) cl_header_name_pane_t1

0xb85e,	// (0x00042f77) cl_header_name_pane_t2_ParamLimits

0xb85e,	// (0x00042f77) cl_header_name_pane_t2

0xb888,	// (0x00042fa1) cl_header_name_pane_t3_ParamLimits

0xb888,	// (0x00042fa1) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x00047244) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x00047244) cl_header_name_pane_t

0x7a85,	// (0x0003f19e) navi_pane_mv_g2_ParamLimits

0xd2d7,	// (0x000449f0) field_vitu2_entry_pane_g1_ParamLimits

0xd2e3,	// (0x000449fc) field_vitu2_entry_pane_g2_ParamLimits

0xd2ef,	// (0x00044a08) field_vitu2_entry_pane_g3_ParamLimits

0xd2ef,	// (0x00044a08) field_vitu2_entry_pane_g3

0xf921,	// (0x0004703a) field_vitu2_entry_pane_g_ParamLimits

0xa9ca,	// (0x000420e3) cell_vitu2_itu_pane_g1_ParamLimits

0xa9da,	// (0x000420f3) cell_vitu2_itu_pane_g2_ParamLimits

0xa9da,	// (0x000420f3) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x00047046) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x00047046) cell_vitu2_itu_pane_g

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp05_ParamLimits

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp05

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp03

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp04

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp10_ParamLimits

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp10

0x47bd,	// (0x0003bed6) bg_vkb2_func_pane_cp08

0xb47a,	// (0x00042b93) bg_vkb2_func_pane_cp06

0xb488,	// (0x00042ba1) bg_vkb2_func_pane_cp07

0xd814,	// (0x00044f2d) bg_vkb2_func_pane_cp11_ParamLimits

0xd814,	// (0x00044f2d) bg_vkb2_func_pane_cp11

0xd829,	// (0x00044f42) bg_vkb2_func_pane_cp12_ParamLimits

0xd829,	// (0x00044f42) bg_vkb2_func_pane_cp12

0xe6de,	// (0x00045df7) bg_vkb2_func_pane_cp09

0xd30f,	// (0x00044a28) bg_vkb2_func_pane_g1

0x087e,	// (0x00037f97) bg_vkb2_func_pane_g2

0xd317,	// (0x00044a30) bg_vkb2_func_pane_g3

0xd31f,	// (0x00044a38) bg_vkb2_func_pane_g4

0xd54e,	// (0x00044c67) bg_vkb2_func_pane_g5

0xd337,	// (0x00044a50) bg_vkb2_func_pane_g6

0xd33f,	// (0x00044a58) bg_vkb2_func_pane_g7

0xd32f,	// (0x00044a48) bg_vkb2_func_pane_g8

0x085e,	// (0x00037f77) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0004724b) bg_vkb2_func_pane_g

0xb796,	// (0x00042eaf) blid2_tripm_pane_g6_ParamLimits

0xb796,	// (0x00042eaf) blid2_tripm_pane_g6

0x3107,	// (0x0003a820) mp4_progress_pane_g1

0xb7f0,	// (0x00042f09) blid2_tripm_values_pane_ParamLimits

0xb7f0,	// (0x00042f09) blid2_tripm_values_pane

0xb8ad,	// (0x00042fc6) blid2_tripm_values_pane_t1

0xb8bb,	// (0x00042fd4) blid2_tripm_values_pane_t2

0xb8c9,	// (0x00042fe2) blid2_tripm_values_pane_t3

0xb8d7,	// (0x00042ff0) blid2_tripm_values_pane_t4

0xb8e5,	// (0x00042ffe) blid2_tripm_values_pane_t5

0xb8f3,	// (0x0004300c) blid2_tripm_values_pane_t6

0xb901,	// (0x0004301a) blid2_tripm_values_pane_t7

0xb90f,	// (0x00043028) blid2_tripm_values_pane_t8

0xb91d,	// (0x00043036) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0004725e) blid2_tripm_values_pane_t

0x64ca,	// (0x0003dbe3) call_video_pane_t1_ParamLimits

0x64eb,	// (0x0003dc04) call_video_pane_t2_ParamLimits

0xf279,	// (0x00046992) call_video_pane_t_ParamLimits

0x434f,	// (0x0003ba68) msg_header_pane_g1_ParamLimits

0x1129,	// (0x00038842) msg_header_pane_g2_ParamLimits

0x1129,	// (0x00038842) msg_header_pane_g2

0x0001,

0xf493,	// (0x00046bac) msg_header_pane_g_ParamLimits

0xf493,	// (0x00046bac) msg_header_pane_g

0x045d,	// (0x00037b76) main_clock2_pane_ParamLimits

0x9a1f,	// (0x00041138) grid_clock2_toolbar_pane_ParamLimits

0x9a1f,	// (0x00041138) grid_clock2_toolbar_pane

0x9a1f,	// (0x00041138) listscroll_clock2_pane_ParamLimits

0x9a1f,	// (0x00041138) listscroll_clock2_pane

0x9ac3,	// (0x000411dc) main_clock2_pane_t3_ParamLimits

0x9ac3,	// (0x000411dc) main_clock2_pane_t3

0x9ad5,	// (0x000411ee) main_clock2_pane_t4_ParamLimits

0x9ad5,	// (0x000411ee) main_clock2_pane_t4

0xd92f,	// (0x00045048) cell_clock2_toolbar_pane

0xd937,	// (0x00045050) cell_clock2_toolbar_pane_cp01

0xd937,	// (0x00045050) cell_clock2_toolbar_pane_cp02

0xd93f,	// (0x00045058) cell_clock2_toolbar_pane_cp03

0xd947,	// (0x00045060) list_clock2_pane

0x0e58,	// (0x00038571) scroll_pane_cp10

0xd94f,	// (0x00045068) list_single_clock2_pane_ParamLimits

0xd94f,	// (0x00045068) list_single_clock2_pane

0x0fa1,	// (0x000386ba) list_highlight_pane_cp08

0xd95c,	// (0x00045075) list_single_clock2_pane_t1

0xd96a,	// (0x00045083) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x00047271) list_single_clock2_pane_t

0xe6de,	// (0x00045df7) bg_button_pane_cp10

0xd978,	// (0x00045091) cell_clock2_toolbar_pane_g1

0x7fb1,	// (0x0003f6ca) aid_main_viewer_pane_g1_ParamLimits

0x7fb1,	// (0x0003f6ca) aid_main_viewer_pane_g1

0x7fbd,	// (0x0003f6d6) aid_main_viewer_pane_g2_ParamLimits

0x7fbd,	// (0x0003f6d6) aid_main_viewer_pane_g2

0x7fc9,	// (0x0003f6e2) aid_main_viewer_pane_g3_ParamLimits

0x7fc9,	// (0x0003f6e2) aid_main_viewer_pane_g3

0x7fda,	// (0x0003f6f3) aid_main_viewer_pane_g4_ParamLimits

0x7fda,	// (0x0003f6f3) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x00046bbd) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x00046bbd) aid_main_viewer_pane_g

0x875a,	// (0x0003fe73) main_calc_pane_ParamLimits

0x8767,	// (0x0003fe80) main_dialer2_pane_ParamLimits

0xe6de,	// (0x00045df7) main_cam6_pane

0xe6de,	// (0x00045df7) main_vid6_pane

0x9a2b,	// (0x00041144) listscroll_gen_pane_cp06_ParamLimits

0x9a2b,	// (0x00041144) listscroll_gen_pane_cp06

0x9ae7,	// (0x00041200) main_clock2_pane_t5_ParamLimits

0x9ae7,	// (0x00041200) main_clock2_pane_t5

0x9b30,	// (0x00041249) aid_call2_pane_cp10_ParamLimits

0x9b42,	// (0x0004125b) aid_call_pane_cp10_ParamLimits

0x0ed6,	// (0x000385ef) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0ed6,	// (0x000385ef) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b54,	// (0x0004126d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b54,	// (0x0004126d) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0ed6,	// (0x000385ef) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x00046ef3) popup_clock_analogue_window_cp10_g_ParamLimits

0x9b66,	// (0x0004127f) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa32d,	// (0x00041a46) cell_dialer2_keypad_pane_g2_ParamLimits

0xa32d,	// (0x00041a46) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x00046fd9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x00046fd9) cell_dialer2_keypad_pane_g

0xa349,	// (0x00041a62) cell_dialer2_keypad_pane_t1

0xad05,	// (0x0004241e) main_cset_text2_pane_ParamLimits

0xad05,	// (0x0004241e) main_cset_text2_pane

0xd773,	// (0x00044e8c) area_vitu2_query_pane_g1_ParamLimits

0x46e8,	// (0x0003be01) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0004718e) area_vitu2_query_pane_g_ParamLimits

0x4799,	// (0x0003beb2) area_vitu2_query_pane_t7_ParamLimits

0x4799,	// (0x0003beb2) area_vitu2_query_pane_t7

0xb47a,	// (0x00042b93) bg_button_pane_cp018_ParamLimits

0xb488,	// (0x00042ba1) bg_button_pane_cp021_ParamLimits

0x47bd,	// (0x0003bed6) bg_button_pane_cp022_ParamLimits

0x47bd,	// (0x0003bed6) bg_vkb2_func_pane_cp08_ParamLimits

0xb47a,	// (0x00042b93) bg_vkb2_func_pane_cp06_ParamLimits

0xb488,	// (0x00042ba1) bg_vkb2_func_pane_cp07_ParamLimits

0x47ce,	// (0x0003bee7) input_focus_pane_cp09_ParamLimits

0xb92b,	// (0x00043044) cam6_autofocus_pane_ParamLimits

0xb92b,	// (0x00043044) cam6_autofocus_pane

0xb94d,	// (0x00043066) cam6_image_uncrop_pane_ParamLimits

0xb94d,	// (0x00043066) cam6_image_uncrop_pane

0xb97a,	// (0x00043093) cam6_indi_pane_ParamLimits

0xb97a,	// (0x00043093) cam6_indi_pane

0xb994,	// (0x000430ad) cam6_mode_pane_ParamLimits

0xb994,	// (0x000430ad) cam6_mode_pane

0xb9a8,	// (0x000430c1) cam6_timer_pane_ParamLimits

0xb9a8,	// (0x000430c1) cam6_timer_pane

0xb9b4,	// (0x000430cd) cam6_zoom_pane_ParamLimits

0xb9b4,	// (0x000430cd) cam6_zoom_pane

0xb9cc,	// (0x000430e5) cam6_mode_pane_g1_ParamLimits

0xb9cc,	// (0x000430e5) cam6_mode_pane_g1

0xb9d8,	// (0x000430f1) cam6_mode_pane_g2_ParamLimits

0xb9d8,	// (0x000430f1) cam6_mode_pane_g2

0xb9e4,	// (0x000430fd) cam6_mode_pane_g3_ParamLimits

0xb9e4,	// (0x000430fd) cam6_mode_pane_g3

0xb9f0,	// (0x00043109) cam6_mode_pane_g4_ParamLimits

0xb9f0,	// (0x00043109) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x00047276) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x00047276) cam6_mode_pane_g

0xd2a2,	// (0x000449bb) bg_tb_trans_pane_cp08_ParamLimits

0xd2a2,	// (0x000449bb) bg_tb_trans_pane_cp08

0xd980,	// (0x00045099) cam6_battery_pane_ParamLimits

0xd980,	// (0x00045099) cam6_battery_pane

0xd996,	// (0x000450af) cam6_indi_pane_g1_ParamLimits

0xd996,	// (0x000450af) cam6_indi_pane_g1

0xd9a8,	// (0x000450c1) cam6_indi_pane_g2_ParamLimits

0xd9a8,	// (0x000450c1) cam6_indi_pane_g2

0xd9ba,	// (0x000450d3) cam6_indi_pane_g3_ParamLimits

0xd9ba,	// (0x000450d3) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0004727f) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0004727f) cam6_indi_pane_g

0xd9cc,	// (0x000450e5) cam6_indi_pane_t1_ParamLimits

0xd9cc,	// (0x000450e5) cam6_indi_pane_t1

0xa806,	// (0x00041f1f) cam6_autofocus_pane_g1

0xa80e,	// (0x00041f27) cam6_autofocus_pane_g2

0xa816,	// (0x00041f2f) cam6_autofocus_pane_g3

0xa81e,	// (0x00041f37) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x00047286) cam6_autofocus_pane_g

0xd9f2,	// (0x0004510b) cam6_timer_pane_g1

0xd9fa,	// (0x00045113) cam6_timer_pane_t1

0xda08,	// (0x00045121) cam6_zoom_cont_pane

0xda10,	// (0x00045129) cam6_zoom_pane_g1

0xda18,	// (0x00045131) cam6_zoom_pane_g2

0xb9fc,	// (0x00043115) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0004728f) cam6_zoom_pane_g

0x2827,	// (0x00039f40) cam6_battery_pane_g1

0x2827,	// (0x00039f40) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x00046e00) cam6_battery_pane_g

0xda20,	// (0x00045139) cam6_zoom_cont_pane_g1

0xda29,	// (0x00045142) cam6_zoom_cont_pane_g2

0xda32,	// (0x0004514b) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x00047296) cam6_zoom_cont_pane_g

0xba19,	// (0x00043132) cam6_mode_pane_cp_ParamLimits

0xba19,	// (0x00043132) cam6_mode_pane_cp

0xb9b4,	// (0x000430cd) cam6_zoom_pane_cp_ParamLimits

0xb9b4,	// (0x000430cd) cam6_zoom_pane_cp

0xba2d,	// (0x00043146) vid6_image_uncrop_cif_pane_ParamLimits

0xba2d,	// (0x00043146) vid6_image_uncrop_cif_pane

0xba59,	// (0x00043172) vid6_image_uncrop_nhd_pane_ParamLimits

0xba59,	// (0x00043172) vid6_image_uncrop_nhd_pane

0xb94d,	// (0x00043066) vid6_image_uncrop_vga_pane_ParamLimits

0xb94d,	// (0x00043066) vid6_image_uncrop_vga_pane

0xba76,	// (0x0004318f) vid6_image_uncrop_wvga_pane_ParamLimits

0xba76,	// (0x0004318f) vid6_image_uncrop_wvga_pane

0xba93,	// (0x000431ac) vid6_indi_pane_ParamLimits

0xba93,	// (0x000431ac) vid6_indi_pane

0xd2a2,	// (0x000449bb) bg_tb_trans_pane_cp09_ParamLimits

0xd2a2,	// (0x000449bb) bg_tb_trans_pane_cp09

0xda4a,	// (0x00045163) cam6_battery_pane_cp_ParamLimits

0xda4a,	// (0x00045163) cam6_battery_pane_cp

0xda56,	// (0x0004516f) vid6_indi_pane_g1_ParamLimits

0xda56,	// (0x0004516f) vid6_indi_pane_g1

0xda68,	// (0x00045181) vid6_indi_pane_g2_ParamLimits

0xda68,	// (0x00045181) vid6_indi_pane_g2

0xda7a,	// (0x00045193) vid6_indi_pane_g3_ParamLimits

0xda7a,	// (0x00045193) vid6_indi_pane_g3

0xda8f,	// (0x000451a8) vid6_indi_pane_g4_ParamLimits

0xda8f,	// (0x000451a8) vid6_indi_pane_g4

0xdaa4,	// (0x000451bd) vid6_indi_pane_g5_ParamLimits

0xdaa4,	// (0x000451bd) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0004729d) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0004729d) vid6_indi_pane_g

0xdabe,	// (0x000451d7) vid6_indi_pane_t1_ParamLimits

0xdabe,	// (0x000451d7) vid6_indi_pane_t1

0xdad4,	// (0x000451ed) vid6_indi_pane_t2_ParamLimits

0xdad4,	// (0x000451ed) vid6_indi_pane_t2

0xdafc,	// (0x00045215) vid6_indi_pane_t3_ParamLimits

0xdafc,	// (0x00045215) vid6_indi_pane_t3

0xdb24,	// (0x0004523d) vid6_indi_pane_t4_ParamLimits

0xdb24,	// (0x0004523d) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x000472a8) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x000472a8) vid6_indi_pane_t

0xdb48,	// (0x00045261) wait_bar_pane_cp08

0xbab8,	// (0x000431d1) main_cset_text2_pane_t1_ParamLimits

0xbab8,	// (0x000431d1) main_cset_text2_pane_t1

0xba04,	// (0x0004311d) listscroll_gen_pane_cp06_t1_ParamLimits

0xba04,	// (0x0004311d) listscroll_gen_pane_cp06_t1

0xe6de,	// (0x00045df7) main_cam6_set_pane

0x2a93,	// (0x0003a1ac) bg_tb_trans_pane_cp06_ParamLimits

0xa6b6,	// (0x00041dcf) cam4_indicators_pane_g1_ParamLimits

0xa6c7,	// (0x00041de0) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x00047016) cam4_indicators_pane_g_ParamLimits

0xa6e5,	// (0x00041dfe) cam4_indicators_pane_t1_ParamLimits

0x0c6c,	// (0x00038385) bg_tb_trans_pane_cp07_ParamLimits

0xa798,	// (0x00041eb1) vid4_indicators_pane_g1_ParamLimits

0xa7ac,	// (0x00041ec5) vid4_indicators_pane_g2_ParamLimits

0xa7c0,	// (0x00041ed9) vid4_indicators_pane_g3_ParamLimits

0xa7d1,	// (0x00041eea) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x00047028) vid4_indicators_pane_g_ParamLimits

0xa7ef,	// (0x00041f08) vid4_indicators_pane_t1_ParamLimits

0xb5b4,	// (0x00042ccd) vid4_progress_pane_g1_ParamLimits

0xb5c6,	// (0x00042cdf) vid4_progress_pane_g2_ParamLimits

0x8037,	// (0x0003f750) vid4_progress_pane_g3_ParamLimits

0xb5d6,	// (0x00042cef) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x000471d9) vid4_progress_pane_g_ParamLimits

0xb5f4,	// (0x00042d0d) vid4_progress_pane_t1_ParamLimits

0xb609,	// (0x00042d22) vid4_progress_pane_t2_ParamLimits

0xb61f,	// (0x00042d38) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x000471e4) vid4_progress_pane_t_ParamLimits

0xb634,	// (0x00042d4d) wait_bar_pane_cp07_ParamLimits

0xbaeb,	// (0x00043204) main_cam6_set_pane_g2_ParamLimits

0xbaeb,	// (0x00043204) main_cam6_set_pane_g2

0xbaf7,	// (0x00043210) main_cset6_listscroll_pane_ParamLimits

0xbaf7,	// (0x00043210) main_cset6_listscroll_pane

0xbb22,	// (0x0004323b) main_cset6_slider_pane_ParamLimits

0xbb22,	// (0x0004323b) main_cset6_slider_pane

0xbb2e,	// (0x00043247) main_cset6_text2_pane_ParamLimits

0xbb2e,	// (0x00043247) main_cset6_text2_pane

0xdb57,	// (0x00045270) main_cset6_text_pane

0xdb5f,	// (0x00045278) main_cset_list_pane_copy1_ParamLimits

0xdb5f,	// (0x00045278) main_cset_list_pane_copy1

0xdb6f,	// (0x00045288) scroll_pane_cp028_copy1

0xbb41,	// (0x0004325a) cset_list_set_pane_copy1

0xbb54,	// (0x0004326d) aid_position_infowindow_above_copy1

0xbb5c,	// (0x00043275) aid_position_infowindow_below_copy1

0x481e,	// (0x0003bf37) cset_list_set_pane_g1_copy1

0x455c,	// (0x0003bc75) cset_list_set_pane_g3_copy1_ParamLimits

0x455c,	// (0x0003bc75) cset_list_set_pane_g3_copy1

0x456b,	// (0x0003bc84) cset_list_set_pane_t1_copy1_ParamLimits

0x456b,	// (0x0003bc84) cset_list_set_pane_t1_copy1

0x0c6c,	// (0x00038385) list_highlight_pane_cp021_copy1_ParamLimits

0x0c6c,	// (0x00038385) list_highlight_pane_cp021_copy1

0xdb78,	// (0x00045291) cset6_slider_pane_ParamLimits

0xdb78,	// (0x00045291) cset6_slider_pane

0xdba4,	// (0x000452bd) main_cset6_slider_pane_g1_ParamLimits

0xdba4,	// (0x000452bd) main_cset6_slider_pane_g1

0xbb64,	// (0x0004327d) main_cset6_slider_pane_g2_ParamLimits

0xbb64,	// (0x0004327d) main_cset6_slider_pane_g2

0xdbcc,	// (0x000452e5) main_cset6_slider_pane_g3_ParamLimits

0xdbcc,	// (0x000452e5) main_cset6_slider_pane_g3

0xbb8c,	// (0x000432a5) main_cset6_slider_pane_g4_ParamLimits

0xbb8c,	// (0x000432a5) main_cset6_slider_pane_g4

0xbb98,	// (0x000432b1) main_cset6_slider_pane_g5_ParamLimits

0xbb98,	// (0x000432b1) main_cset6_slider_pane_g5

0xd43e,	// (0x00044b57) main_cset6_slider_pane_g7_ParamLimits

0xd43e,	// (0x00044b57) main_cset6_slider_pane_g7

0xd44a,	// (0x00044b63) main_cset6_slider_pane_g8_ParamLimits

0xd44a,	// (0x00044b63) main_cset6_slider_pane_g8

0xbba6,	// (0x000432bf) main_cset6_slider_pane_g9_ParamLimits

0xbba6,	// (0x000432bf) main_cset6_slider_pane_g9

0xbbb2,	// (0x000432cb) main_cset6_slider_pane_g10_ParamLimits

0xbbb2,	// (0x000432cb) main_cset6_slider_pane_g10

0xbbbe,	// (0x000432d7) main_cset6_slider_pane_g11_ParamLimits

0xbbbe,	// (0x000432d7) main_cset6_slider_pane_g11

0xbbca,	// (0x000432e3) main_cset6_slider_pane_g12_ParamLimits

0xbbca,	// (0x000432e3) main_cset6_slider_pane_g12

0xbbd6,	// (0x000432ef) main_cset6_slider_pane_g13_ParamLimits

0xbbd6,	// (0x000432ef) main_cset6_slider_pane_g13

0xbbe2,	// (0x000432fb) main_cset6_slider_pane_g14_ParamLimits

0xbbe2,	// (0x000432fb) main_cset6_slider_pane_g14

0xbbee,	// (0x00043307) main_cset6_slider_pane_g15_ParamLimits

0xbbee,	// (0x00043307) main_cset6_slider_pane_g15

0xbc06,	// (0x0004331f) main_cset6_slider_pane_g16_ParamLimits

0xbc06,	// (0x0004331f) main_cset6_slider_pane_g16

0xbc14,	// (0x0004332d) main_cset6_slider_pane_g17_ParamLimits

0xbc14,	// (0x0004332d) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x000472b1) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x000472b1) main_cset6_slider_pane_g

0xdbd8,	// (0x000452f1) main_cset6_slider_pane_t1_ParamLimits

0xdbd8,	// (0x000452f1) main_cset6_slider_pane_t1

0xbc3a,	// (0x00043353) main_cset6_slider_pane_t2_ParamLimits

0xbc3a,	// (0x00043353) main_cset6_slider_pane_t2

0xbc65,	// (0x0004337e) main_cset6_slider_pane_t3_ParamLimits

0xbc65,	// (0x0004337e) main_cset6_slider_pane_t3

0xbc90,	// (0x000433a9) main_cset6_slider_pane_t4_ParamLimits

0xbc90,	// (0x000433a9) main_cset6_slider_pane_t4

0xbcbb,	// (0x000433d4) main_cset6_slider_pane_t5_ParamLimits

0xbcbb,	// (0x000433d4) main_cset6_slider_pane_t5

0xdc19,	// (0x00045332) main_cset6_slider_pane_t7_ParamLimits

0xdc19,	// (0x00045332) main_cset6_slider_pane_t7

0xbce8,	// (0x00043401) main_cset6_slider_pane_t8_ParamLimits

0xbce8,	// (0x00043401) main_cset6_slider_pane_t8

0xbd0c,	// (0x00043425) main_cset6_slider_pane_t9_ParamLimits

0xbd0c,	// (0x00043425) main_cset6_slider_pane_t9

0xbd30,	// (0x00043449) main_cset6_slider_pane_t10_ParamLimits

0xbd30,	// (0x00043449) main_cset6_slider_pane_t10

0xbd54,	// (0x0004346d) main_cset6_slider_pane_t11_ParamLimits

0xbd54,	// (0x0004346d) main_cset6_slider_pane_t11

0xdc4f,	// (0x00045368) main_cset6_slider_pane_t14_ParamLimits

0xdc4f,	// (0x00045368) main_cset6_slider_pane_t14

0xdc88,	// (0x000453a1) main_cset6_slider_pane_t15_ParamLimits

0xdc88,	// (0x000453a1) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x000472d6) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x000472d6) main_cset6_slider_pane_t

0xd502,	// (0x00044c1b) cset_slider_pane_g1_copy1

0xd50b,	// (0x00044c24) cset_slider_pane_g2_copy1

0xd514,	// (0x00044c2d) cset_slider_pane_g3_copy1

0xe6de,	// (0x00045df7) bg_popup_sub_pane_cp011_copy1

0xdcc1,	// (0x000453da) main_cset_text_pane_g1_copy1

0xd5a7,	// (0x00044cc0) main_cset_text_pane_t1_copy1

0xd5b5,	// (0x00044cce) main_cset_text_pane_t2_copy1

0xd5c3,	// (0x00044cdc) main_cset_text_pane_t3_copy1

0xd5d1,	// (0x00044cea) main_cset_text_pane_t4_copy1

0xd5df,	// (0x00044cf8) main_cset_text_pane_t5_copy1

0xdcc9,	// (0x000453e2) main_cset_text_pane_t6_copy1

0xd5fb,	// (0x00044d14) main_cset_text_pane_t7_copy1

0xbd78,	// (0x00043491) main_cset_text2_pane_t1_copy1

0x0c6c,	// (0x00038385) main_ncimui_pane

0x87b8,	// (0x0003fed1) popup_query_ncimui_window_ParamLimits

0x87b8,	// (0x0003fed1) popup_query_ncimui_window

0x4410,	// (0x0003bb29) field_cale_ev2_pane_g4_ParamLimits

0x4410,	// (0x0003bb29) field_cale_ev2_pane_g4

0xa04d,	// (0x00041766) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa04d,	// (0x00041766) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x00046fb4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x00046fb4) cell_video_dialer_keypad_pane_g

0xa065,	// (0x0004177e) cell_video_dialer_keypad_pane_t1

0xe6de,	// (0x00045df7) bg_popup_window_pane_cp012

0x0d25,	// (0x0003843e) heading_pane_cp06

0xdd01,	// (0x0004541a) ncim_query_content_pane

0xe6de,	// (0x00045df7) bg_popup_heading_pane_cp01

0xdd09,	// (0x00045422) ncim_heading_pane_t1

0xdd17,	// (0x00045430) ncim_indicator_popup_pane

0xdd29,	// (0x00045442) ncim_query_button_pane

0xdd3d,	// (0x00045456) ncim_query_content_pane_t1

0xdd4f,	// (0x00045468) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0004731a) ncim_query_content_pane_t

0xdd89,	// (0x000454a2) ncim_query_list_pane

0xdd9b,	// (0x000454b4) ncim_query_popup_pane

0xdd17,	// (0x00045430) ncim_indicator_popup_pane_ParamLimits

0xbecb,	// (0x000435e4) ncim_query_content_pane_g1_ParamLimits

0xbecb,	// (0x000435e4) ncim_query_content_pane_g1

0xdd3d,	// (0x00045456) ncim_query_content_pane_t1_ParamLimits

0xdd4f,	// (0x00045468) ncim_query_content_pane_t2_ParamLimits

0xbed7,	// (0x000435f0) ncim_query_content_pane_t3_ParamLimits

0xbed7,	// (0x000435f0) ncim_query_content_pane_t3

0xbef4,	// (0x0004360d) ncim_query_content_pane_t4_ParamLimits

0xbef4,	// (0x0004360d) ncim_query_content_pane_t4

0xbf11,	// (0x0004362a) ncim_query_content_pane_t5_ParamLimits

0xbf11,	// (0x0004362a) ncim_query_content_pane_t5

0xdd61,	// (0x0004547a) ncim_query_content_pane_t6_ParamLimits

0xdd61,	// (0x0004547a) ncim_query_content_pane_t6

0xfc01,	// (0x0004731a) ncim_query_content_pane_t_ParamLimits

0xdd89,	// (0x000454a2) ncim_query_list_pane_ParamLimits

0xdd9b,	// (0x000454b4) ncim_query_popup_pane_ParamLimits

0xddaf,	// (0x000454c8) wait_bar_pane_cp04

0xe6de,	// (0x00045df7) input_focus_pane_cp011

0xddb7,	// (0x000454d0) ncim_query_popup_pane_t1

0xddc5,	// (0x000454de) ncim_list_query_list_pane_ParamLimits

0xddc5,	// (0x000454de) ncim_list_query_list_pane

0xe6de,	// (0x00045df7) bg_button_pane_cp027

0xddd2,	// (0x000454eb) ncim_query_button_pane_g1

0xe6de,	// (0x00045df7) list_highlight_pane_cp012

0xdddc,	// (0x000454f5) ncim_list_query_list_pane_g1

0xdde4,	// (0x000454fd) ncim_list_query_list_pane_t1

0xa6d6,	// (0x00041def) cam4_indicators_pane_g3_ParamLimits

0xa6d6,	// (0x00041def) cam4_indicators_pane_g3

0xa7dd,	// (0x00041ef6) vid4_indicators_pane_g5_ParamLimits

0xa7dd,	// (0x00041ef6) vid4_indicators_pane_g5

0xb5e5,	// (0x00042cfe) vid4_progress_pane_g5_ParamLimits

0xb5e5,	// (0x00042cfe) vid4_progress_pane_g5

0xbdb7,	// (0x000434d0) main_ncimui_pane_g1

0xbe1f,	// (0x00043538) ncimui_group_query_pane_ParamLimits

0xbe1f,	// (0x00043538) ncimui_group_query_pane

0xbe67,	// (0x00043580) ncimui_list_pane_ParamLimits

0xbe67,	// (0x00043580) ncimui_list_pane

0xbe8e,	// (0x000435a7) ncimui_text_pane_ParamLimits

0xbe8e,	// (0x000435a7) ncimui_text_pane

0xbf2e,	// (0x00043647) ncimui_text_pane_t1_ParamLimits

0xbf2e,	// (0x00043647) ncimui_text_pane_t1

0xddf2,	// (0x0004550b) ncimui_list_single_graphic_pane_ParamLimits

0xddf2,	// (0x0004550b) ncimui_list_single_graphic_pane

0xbf4d,	// (0x00043666) ncimui_query_pane_ParamLimits

0xbf4d,	// (0x00043666) ncimui_query_pane

0xe6de,	// (0x00045df7) list_highlight_pane_cp013

0xde02,	// (0x0004551b) ncim_list_query_list_pane_t1_copy1

0xdddc,	// (0x000454f5) ncim_list_single_graphic_pane_g1

0xde10,	// (0x00045529) ncim_query_button_pane_cp01

0xde1c,	// (0x00045535) ncim_query_entry_pane_ParamLimits

0xde1c,	// (0x00045535) ncim_query_entry_pane

0xde2f,	// (0x00045548) ncimui_query_pane_g1

0xde3b,	// (0x00045554) ncimui_query_pane_t1_ParamLimits

0xde3b,	// (0x00045554) ncimui_query_pane_t1

0x0c6c,	// (0x00038385) input_focus_pane_cp012

0xde54,	// (0x0004556d) ncim_query_entry_pane_t1

0x045d,	// (0x00037b76) main_im_pane_ParamLimits

0x0c6c,	// (0x00038385) main_mobtv_pane_ParamLimits

0x0c6c,	// (0x00038385) main_mobtv_pane

0xbc22,	// (0x0004333b) main_cset6_slider_pane_g18_ParamLimits

0xbc22,	// (0x0004333b) main_cset6_slider_pane_g18

0xbc2e,	// (0x00043347) main_cset6_slider_pane_g19_ParamLimits

0xbc2e,	// (0x00043347) main_cset6_slider_pane_g19

0xd2ef,	// (0x00044a08) bg_main_mobtv_pane_ParamLimits

0xd2ef,	// (0x00044a08) bg_main_mobtv_pane

0xbf60,	// (0x00043679) main_mobtv_info_pane

0xbf6b,	// (0x00043684) main_mobtv_loading_pane_ParamLimits

0xbf6b,	// (0x00043684) main_mobtv_loading_pane

0xde66,	// (0x0004557f) main_mobtv_pg_channel_list_pane

0xde70,	// (0x00045589) main_mobtv_pg_hdr_pane

0xbf78,	// (0x00043691) main_mobtv_programe_curr_pane_ParamLimits

0xbf78,	// (0x00043691) main_mobtv_programe_curr_pane

0xbf85,	// (0x0004369e) main_mobtv_programe_next_pane_ParamLimits

0xbf85,	// (0x0004369e) main_mobtv_programe_next_pane

0xde79,	// (0x00045592) popup_mobtv_noti_window

0x2827,	// (0x00039f40) main_tv_pg_hdr_pane_g1

0xde81,	// (0x0004559a) main_tv_pg_hdr_pane_g2

0xde89,	// (0x000455a2) main_tv_pg_hdr_pane_g3

0xde91,	// (0x000455aa) main_tv_pg_hdr_pane_g4

0xde99,	// (0x000455b2) main_tv_pg_hdr_pane_g5

0xdea3,	// (0x000455bc) main_tv_pg_hdr_pane_g6

0xdead,	// (0x000455c6) main_tv_pg_hdr_pane_g7

0xdeb7,	// (0x000455d0) main_tv_pg_hdr_pane_g8

0xdec1,	// (0x000455da) main_tv_pg_hdr_pane_g9

0xdecb,	// (0x000455e4) main_tv_pg_hdr_pane_g10

0xded5,	// (0x000455ee) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x00047327) main_tv_pg_hdr_pane_g

0xdedf,	// (0x000455f8) main_tv_pg_hdr_pane_t1

0xdeed,	// (0x00045606) main_tv_pg_hdr_pane_t2

0xdefb,	// (0x00045614) main_tv_pg_hdr_pane_t3

0xdf0b,	// (0x00045624) main_tv_pg_hdr_pane_t4

0xdf1b,	// (0x00045634) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0004733e) main_tv_pg_hdr_pane_t

0xdf2b,	// (0x00045644) single_mobtv_pg_channel_pane_ParamLimits

0xdf2b,	// (0x00045644) single_mobtv_pg_channel_pane

0xdf3d,	// (0x00045656) single_mobtv_pg_channel_table_pane

0xdf46,	// (0x0004565f) single_mobtv_pg_channel_thumb_pane

0xdf4f,	// (0x00045668) single_tv_pg_channel_pane_g1

0xdf58,	// (0x00045671) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x00047349) single_tv_pg_channel_pane_g

0x2a93,	// (0x0003a1ac) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2a93,	// (0x0003a1ac) bg_single_mobtv_pg_channel_thumb_pane

0xdf61,	// (0x0004567a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf61,	// (0x0004567a) single_mobtv_pg_channel_thumb_pane_g1

0xdf6f,	// (0x00045688) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf6f,	// (0x00045688) single_mobtv_pg_channel_thumb_pane_g2

0xdf7b,	// (0x00045694) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf7b,	// (0x00045694) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0004734e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0004734e) single_mobtv_pg_channel_thumb_pane_g

0xdf87,	// (0x000456a0) single_mobtv_pg_channel_thumb_pane_t1

0xdf95,	// (0x000456ae) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x00047355) single_mobtv_pg_channel_thumb_pane_t

0x2827,	// (0x00039f40) bg_single_mobtv_pg_channel_table_pane_g1

0x2827,	// (0x00039f40) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x00046e00) bg_single_mobtv_pg_channel_table_pane_g

0xdfa3,	// (0x000456bc) single_mobtv_pg_channel_table_pane_t1

0xdfb1,	// (0x000456ca) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0004735a) single_mobtv_pg_channel_table_pane_t

0xbf9a,	// (0x000436b3) main_mobtv_info_pane_g1_ParamLimits

0xbf9a,	// (0x000436b3) main_mobtv_info_pane_g1

0xbfb6,	// (0x000436cf) main_mobtv_info_pane_t1_ParamLimits

0xbfb6,	// (0x000436cf) main_mobtv_info_pane_t1

0xc02e,	// (0x00043747) main_mobtv_info_pane_t2_ParamLimits

0xc02e,	// (0x00043747) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x00047364) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x00047364) main_mobtv_info_pane_t

0xc0bd,	// (0x000437d6) wait_bar_pane_cp05

0xc0cf,	// (0x000437e8) main_mobtv_loading_pane_g1_ParamLimits

0xc0cf,	// (0x000437e8) main_mobtv_loading_pane_g1

0xc0dd,	// (0x000437f6) main_mobtv_loading_pane_g2_ParamLimits

0xc0dd,	// (0x000437f6) main_mobtv_loading_pane_g2

0xc0e9,	// (0x00043802) main_mobtv_loading_pane_g3_ParamLimits

0xc0e9,	// (0x00043802) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0004736b) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0004736b) main_mobtv_loading_pane_g

0xdfbf,	// (0x000456d8) main_mobtv_loading_pane_t1_ParamLimits

0xdfbf,	// (0x000456d8) main_mobtv_loading_pane_t1

0xdfd7,	// (0x000456f0) main_mobtv_loading_pane_t2_ParamLimits

0xdfd7,	// (0x000456f0) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x00047372) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x00047372) main_mobtv_loading_pane_t

0xc0f7,	// (0x00043810) wait_bar_pane_cp06_ParamLimits

0xc0f7,	// (0x00043810) wait_bar_pane_cp06

0xdffb,	// (0x00045714) main_mobtv_programe_curr_pane_t1

0xe009,	// (0x00045722) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x00047377) main_mobtv_programe_curr_pane_t

0xe017,	// (0x00045730) main_mobtv_programe_next_pane_t1

0xe025,	// (0x0004573e) main_mobtv_programe_next_pane_t2

0xe033,	// (0x0004574c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0004737c) main_mobtv_programe_next_pane_t

0xe6de,	// (0x00045df7) bg_popup_mobtv_noti_window_pane

0xe041,	// (0x0004575a) popup_mobtv_noti_window_g1

0xe049,	// (0x00045762) popup_mobtv_noti_window_t1

0xe057,	// (0x00045770) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x00047383) popup_mobtv_noti_window_t

0x2827,	// (0x00039f40) bg_popup_mobtv_noti_window_pane_g1

0xe6de,	// (0x00045df7) sc_clock_pane

0xe6de,	// (0x00045df7) main_fs_bigclock_pane

0xb7de,	// (0x00042ef7) blid2_tripm_pane_t4_ParamLimits

0xb7de,	// (0x00042ef7) blid2_tripm_pane_t4

0xc103,	// (0x0004381c) sc_clock_pane_g1_ParamLimits

0xc103,	// (0x0004381c) sc_clock_pane_g1

0xc111,	// (0x0004382a) sc_clock_pane_t1_ParamLimits

0xc111,	// (0x0004382a) sc_clock_pane_t1

0xc124,	// (0x0004383d) sc_clock_pane_t2_ParamLimits

0xc124,	// (0x0004383d) sc_clock_pane_t2

0xc136,	// (0x0004384f) sc_clock_pane_t3_ParamLimits

0xc136,	// (0x0004384f) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x00047388) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x00047388) sc_clock_pane_t

0xc9da,	// (0x000440f3) main_fs_bigclock_indicator_pane_ParamLimits

0xc9da,	// (0x000440f3) main_fs_bigclock_indicator_pane

0xc1d1,	// (0x000438ea) main_fs_bigclock_pane_g1_ParamLimits

0xc1d1,	// (0x000438ea) main_fs_bigclock_pane_g1

0xc9e6,	// (0x000440ff) main_fs_bigclock_pane_t1_ParamLimits

0xc9e6,	// (0x000440ff) main_fs_bigclock_pane_t1

0xc9f8,	// (0x00044111) main_fs_bigclock_pane_t2_ParamLimits

0xc9f8,	// (0x00044111) main_fs_bigclock_pane_t2

0xca0c,	// (0x00044125) main_fs_bigclock_pane_t3_ParamLimits

0xca0c,	// (0x00044125) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004758c) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004758c) main_fs_bigclock_pane_t

0xe89b,	// (0x00045fb4) main_fs_bigclock_indicator_pane_g1

0xdd31,	// (0x0004544a) ncim_query_content_pane_g2_ParamLimits

0xdd31,	// (0x0004544a) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x00047315) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x00047315) ncim_query_content_pane_g

0xc14a,	// (0x00043863) sc_clock_pane_t4_ParamLimits

0xc14a,	// (0x00043863) sc_clock_pane_t4

0x0c6c,	// (0x00038385) main_radioblah_pane

0x31f0,	// (0x0003a909) cell_call4_button_pane_t1_copy1_ParamLimits

0x31f0,	// (0x0003a909) cell_call4_button_pane_t1_copy1

0xbdd1,	// (0x000434ea) main_ncimui_pane_t1_ParamLimits

0xbdd1,	// (0x000434ea) main_ncimui_pane_t1

0xbdeb,	// (0x00043504) main_ncimui_pane_t2_ParamLimits

0xbdeb,	// (0x00043504) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0004730e) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0004730e) main_ncimui_pane_t

0xe191,	// (0x000458aa) main_radioblah_anim_pane_ParamLimits

0xe191,	// (0x000458aa) main_radioblah_anim_pane

0xe1a2,	// (0x000458bb) main_radioblah_info_pane_ParamLimits

0xe1a2,	// (0x000458bb) main_radioblah_info_pane

0xe1b6,	// (0x000458cf) main_radioblah_pane_t1_ParamLimits

0xe1b6,	// (0x000458cf) main_radioblah_pane_t1

0xe1d2,	// (0x000458eb) main_radioblah_pane_t2_ParamLimits

0xe1d2,	// (0x000458eb) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x000473a9) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x000473a9) main_radioblah_pane_t

0xc223,	// (0x0004393c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc223,	// (0x0004393c) main_radioblah_rocker_ctrl_pane

0xe21a,	// (0x00045933) main_radioblah_info_pane_t1_ParamLimits

0xe21a,	// (0x00045933) main_radioblah_info_pane_t1

0xc268,	// (0x00043981) main_radioblah_info_pane_t2_ParamLimits

0xc268,	// (0x00043981) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x000473b2) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x000473b2) main_radioblah_info_pane_t

0x2827,	// (0x00039f40) main_radioblah_rocker_ctrl_pane_g1

0xc318,	// (0x00043a31) main_radioblah_rocker_ctrl_pane_g2

0xc320,	// (0x00043a39) main_radioblah_rocker_ctrl_pane_g3

0xc328,	// (0x00043a41) main_radioblah_rocker_ctrl_pane_g4

0xc330,	// (0x00043a49) main_radioblah_rocker_ctrl_pane_g5

0xc338,	// (0x00043a51) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x000473bb) main_radioblah_rocker_ctrl_pane_g

0xbd78,	// (0x00043491) main_cset_text2_pane_t1_copy1_ParamLimits

0xa604,	// (0x00041d1d) cam4_image_uncrop_qvga_pane

0xa74b,	// (0x00041e64) vid4_image_uncrop_qcif_pane

0xb96c,	// (0x00043085) cam6_image_uncrop_qvga_pane_ParamLimits

0xb96c,	// (0x00043085) cam6_image_uncrop_qvga_pane

0xda3a,	// (0x00045153) vid6_image_uncrop_qcif_pane_ParamLimits

0xda3a,	// (0x00045153) vid6_image_uncrop_qcif_pane

0xe6de,	// (0x00045df7) bg_popup_preview_window_pane_cp03

0xdcd7,	// (0x000453f0) list_cset_text2_pane

0xdcdf,	// (0x000453f8) main_cset6_text2_pane_g1

0xdce7,	// (0x00045400) main_cset6_text2_pane_t1

0xc340,	// (0x00043a59) list_cset_text2_pane_t1_ParamLimits

0xc340,	// (0x00043a59) list_cset_text2_pane_t1

0x0c6c,	// (0x00038385) main_radioblah_pane_ParamLimits

0xc0a9,	// (0x000437c2) main_mobtv_info_pane_t3_ParamLimits

0xc0a9,	// (0x000437c2) main_mobtv_info_pane_t3

0xc211,	// (0x0004392a) main_radioblah_pane_g1

0xc23c,	// (0x00043955) main_radioblah_info_pane_g1

0xc2bd,	// (0x000439d6) main_radioblah_info_pane_t3_ParamLimits

0xc2bd,	// (0x000439d6) main_radioblah_info_pane_t3

0x752e,	// (0x0003ec47) highlight_cell_cale_month_pane_ParamLimits

0x752e,	// (0x0003ec47) highlight_cell_cale_month_pane

0xe6de,	// (0x00045df7) main_phob_fisheye_pane

0x2b9b,	// (0x0003a2b4) scroll_pane_cp0031_ParamLimits

0x2b9b,	// (0x0003a2b4) scroll_pane_cp0031

0xdb48,	// (0x00045261) wait_bar_pane_cp08_ParamLimits

0xbb41,	// (0x0004325a) cset_list_set_pane_copy1_ParamLimits

0xe254,	// (0x0004596d) highlight_cell_cale_month_pane_g1

0xc35d,	// (0x00043a76) highlight_cell_cale_month_pane_t1

0xd7c7,	// (0x00044ee0) list_gen_pane_cp01

0xd429,	// (0x00044b42) scroll_pane_01

0xc36b,	// (0x00043a84) list_single_double_fisheye_pane

0x48f6,	// (0x0003c00f) list_double_fisheye_pane_g1_ParamLimits

0x48f6,	// (0x0003c00f) list_double_fisheye_pane_g1

0x4902,	// (0x0003c01b) list_double_fisheye_pane_g2_ParamLimits

0x4902,	// (0x0003c01b) list_double_fisheye_pane_g2

0xc374,	// (0x00043a8d) list_double_fisheye_pane_g3_ParamLimits

0xc374,	// (0x00043a8d) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x000473c8) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x000473c8) list_double_fisheye_pane_g

0x4933,	// (0x0003c04c) list_double_fisheye_pane_t1_ParamLimits

0x4933,	// (0x0003c04c) list_double_fisheye_pane_t1

0x494e,	// (0x0003c067) list_double_fisheye_pane_t2_ParamLimits

0x494e,	// (0x0003c067) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x000473d3) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x000473d3) list_double_fisheye_pane_t

0xe6de,	// (0x00045df7) main_call5_pane

0xc170,	// (0x00043889) sc_swipe_pane_ParamLimits

0xc170,	// (0x00043889) sc_swipe_pane

0xc38c,	// (0x00043aa5) call5_image_pane_ParamLimits

0xc38c,	// (0x00043aa5) call5_image_pane

0xc39c,	// (0x00043ab5) call5_swipe_1_pane_ParamLimits

0xc39c,	// (0x00043ab5) call5_swipe_1_pane

0xc3a8,	// (0x00043ac1) call5_swipe_2_pane_ParamLimits

0xc3a8,	// (0x00043ac1) call5_swipe_2_pane

0xc3c2,	// (0x00043adb) popup_call5_audio_first_window_ParamLimits

0xc3c2,	// (0x00043adb) popup_call5_audio_first_window

0x2a93,	// (0x0003a1ac) call5_swipe_1_pane_g1_ParamLimits

0x2a93,	// (0x0003a1ac) call5_swipe_1_pane_g1

0xe25c,	// (0x00045975) call5_swipe_1_pane_g2_ParamLimits

0xe25c,	// (0x00045975) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x000473d8) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x000473d8) call5_swipe_1_pane_g

0xe268,	// (0x00045981) call5_swipe_1_pane_t1_ParamLimits

0xe268,	// (0x00045981) call5_swipe_1_pane_t1

0x2a93,	// (0x0003a1ac) call5_swipe_2_pane_g1_ParamLimits

0x2a93,	// (0x0003a1ac) call5_swipe_2_pane_g1

0xe27d,	// (0x00045996) call5_swipe_2_pane_g2_ParamLimits

0xe27d,	// (0x00045996) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x000473dd) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x000473dd) call5_swipe_2_pane_g

0xe289,	// (0x000459a2) call5_swipe_2_pane_t1_ParamLimits

0xe289,	// (0x000459a2) call5_swipe_2_pane_t1

0xe29e,	// (0x000459b7) sc_swipe_pane_g1_ParamLimits

0xe29e,	// (0x000459b7) sc_swipe_pane_g1

0xe2ab,	// (0x000459c4) sc_swipe_pane_g2_ParamLimits

0xe2ab,	// (0x000459c4) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x000473e2) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x000473e2) sc_swipe_pane_g

0xe2b7,	// (0x000459d0) sc_swipe_pane_t1_ParamLimits

0xe2b7,	// (0x000459d0) sc_swipe_pane_t1

0xe6de,	// (0x00045df7) main_cmail_launcher_pane

0xc3d0,	// (0x00043ae9) aid_size_cell_cmail_l_ParamLimits

0xc3d0,	// (0x00043ae9) aid_size_cell_cmail_l

0xc3e0,	// (0x00043af9) grid_cmail_l_pane_ParamLimits

0xc3e0,	// (0x00043af9) grid_cmail_l_pane

0xc3f0,	// (0x00043b09) cell_cmail_l_pane_ParamLimits

0xc3f0,	// (0x00043b09) cell_cmail_l_pane

0xc404,	// (0x00043b1d) cell_cmail_l_pane_g1_ParamLimits

0xc404,	// (0x00043b1d) cell_cmail_l_pane_g1

0xc410,	// (0x00043b29) cell_cmail_l_pane_t1_ParamLimits

0xc410,	// (0x00043b29) cell_cmail_l_pane_t1

0xe2cc,	// (0x000459e5) cell_cmail_l_pane_t2_ParamLimits

0xe2cc,	// (0x000459e5) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x000473e7) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x000473e7) cell_cmail_l_pane_t

0x0c6c,	// (0x00038385) grid_highlight_pane_cp018_ParamLimits

0x0c6c,	// (0x00038385) grid_highlight_pane_cp018

0x54ac,	// (0x0003cbc5) main2_pane_ParamLimits

0x54ac,	// (0x0003cbc5) main2_pane

0x04f6,	// (0x00037c0f) popup_sp_fs_action_menu_bg_pane_g1

0x04fe,	// (0x00037c17) popup_sp_fs_action_menu_bg_pane_g2

0x0506,	// (0x00037c1f) popup_sp_fs_action_menu_bg_pane_g3

0x050e,	// (0x00037c27) popup_sp_fs_action_menu_bg_pane_g4

0x0516,	// (0x00037c2f) popup_sp_fs_action_menu_bg_pane_g5

0x051e,	// (0x00037c37) popup_sp_fs_action_menu_bg_pane_g6

0x0526,	// (0x00037c3f) popup_sp_fs_action_menu_bg_pane_g7

0x052e,	// (0x00037c47) popup_sp_fs_action_menu_bg_pane_g8

0x0536,	// (0x00037c4f) popup_sp_fs_action_menu_bg_pane_g9

0x053e,	// (0x00037c57) popup_sp_fs_action_menu_bg_pane_g10

0x053e,	// (0x00037c57) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000468ac) popup_sp_fs_action_menu_bg_pane_g

0x40fb,	// (0x0003b814) list_medium_line_x2_t3_g3_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t3_g3_g1

0x4107,	// (0x0003b820) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x2_t3_g3_g2

0x4113,	// (0x0003b82c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0004695c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0004695c) list_medium_line_x2_t3_g3_g

0x411f,	// (0x0003b838) list_medium_line_x2_t3_g3_t1_ParamLimits

0x411f,	// (0x0003b838) list_medium_line_x2_t3_g3_t1

0x4134,	// (0x0003b84d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4134,	// (0x0003b84d) list_medium_line_x2_t3_g3_t2

0x4146,	// (0x0003b85f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x00046963) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x00046963) list_medium_line_x2_t3_g3_t

0x40fb,	// (0x0003b814) list_medium_line_x2_t3_g2_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t3_g2_g1

0x4113,	// (0x0003b82c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0004696a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0004696a) list_medium_line_x2_t3_g2_g

0x415b,	// (0x0003b874) list_medium_line_x2_t3_g2_t1_ParamLimits

0x415b,	// (0x0003b874) list_medium_line_x2_t3_g2_t1

0x4171,	// (0x0003b88a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4171,	// (0x0003b88a) list_medium_line_x2_t3_g2_t2

0x4146,	// (0x0003b85f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0004696f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0004696f) list_medium_line_x2_t3_g2_t

0x40fb,	// (0x0003b814) list_medium_line_x2_t4_g4_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t4_g4_g1

0x4183,	// (0x0003b89c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4183,	// (0x0003b89c) list_medium_line_x2_t4_g4_g2

0x4107,	// (0x0003b820) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x2_t4_g4_g3

0x418f,	// (0x0003b8a8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x418f,	// (0x0003b8a8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x00046976) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x00046976) list_medium_line_x2_t4_g4_g

0x419b,	// (0x0003b8b4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x419b,	// (0x0003b8b4) list_medium_line_x2_t4_g4_t1

0x41b5,	// (0x0003b8ce) list_medium_line_x2_t4_g4_t2_ParamLimits

0x41b5,	// (0x0003b8ce) list_medium_line_x2_t4_g4_t2

0x41cb,	// (0x0003b8e4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x41cb,	// (0x0003b8e4) list_medium_line_x2_t4_g4_t3

0x41e0,	// (0x0003b8f9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x41e0,	// (0x0003b8f9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0004697f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0004697f) list_medium_line_x2_t4_g4_t

0x40fb,	// (0x0003b814) list_medium_line_x2_t2_g4_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t2_g4_g1

0x4183,	// (0x0003b89c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4183,	// (0x0003b89c) list_medium_line_x2_t2_g4_g2

0x4107,	// (0x0003b820) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x2_t2_g4_g3

0x4113,	// (0x0003b82c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000469e6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000469e6) list_medium_line_x2_t2_g4_g

0x41f2,	// (0x0003b90b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x41f2,	// (0x0003b90b) list_medium_line_x2_t2_g4_t1

0x4146,	// (0x0003b85f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000469ef) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000469ef) list_medium_line_x2_t2_g4_t

0x40fb,	// (0x0003b814) list_medium_line_x2_t2_g3_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t2_g3_g1

0x4107,	// (0x0003b820) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x2_t2_g3_g2

0x4113,	// (0x0003b82c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0004695c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0004695c) list_medium_line_x2_t2_g3_g

0x4207,	// (0x0003b920) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4207,	// (0x0003b920) list_medium_line_x2_t2_g3_t1

0x4146,	// (0x0003b85f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000469f4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000469f4) list_medium_line_x2_t2_g3_t

0x76ec,	// (0x0003ee05) main_sp_fs_list_pane_ParamLimits

0x76ec,	// (0x0003ee05) main_sp_fs_list_pane

0x76f8,	// (0x0003ee11) sp_fs_scroll_pane_ParamLimits

0x76f8,	// (0x0003ee11) sp_fs_scroll_pane

0x421c,	// (0x0003b935) list_medium_line_x2_t3_t1

0x422c,	// (0x0003b945) list_medium_line_x2_t3_t2

0x423a,	// (0x0003b953) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x00046a3f) list_medium_line_x2_t3_t

0x4248,	// (0x0003b961) list_medium_line_x3_t4_t1

0x4258,	// (0x0003b971) list_medium_line_x3_t4_t2

0x4266,	// (0x0003b97f) list_medium_line_x3_t4_t3

0x423a,	// (0x0003b953) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x00046a46) list_medium_line_x3_t4_t

0x4274,	// (0x0003b98d) list_medium_line_x4_t5_t1

0x4284,	// (0x0003b99d) list_medium_line_x4_t5_t2

0x4266,	// (0x0003b97f) list_medium_line_x4_t5_t3

0x4292,	// (0x0003b9ab) list_medium_line_x4_t5_t4

0x423a,	// (0x0003b953) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x00046a4f) list_medium_line_x4_t5_t

0x40fb,	// (0x0003b814) list_medium_line_t4_g4_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_t4_g4_g1

0x418f,	// (0x0003b8a8) list_medium_line_t4_g4_g2_ParamLimits

0x418f,	// (0x0003b8a8) list_medium_line_t4_g4_g2

0x42a0,	// (0x0003b9b9) list_medium_line_t4_g4_g3_ParamLimits

0x42a0,	// (0x0003b9b9) list_medium_line_t4_g4_g3

0x4113,	// (0x0003b82c) list_medium_line_t4_g4_g4_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x00046a5a) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x00046a5a) list_medium_line_t4_g4_g

0x42ac,	// (0x0003b9c5) list_medium_line_t4_g4_t1_ParamLimits

0x42ac,	// (0x0003b9c5) list_medium_line_t4_g4_t1

0x42c1,	// (0x0003b9da) list_medium_line_t4_g4_t2_ParamLimits

0x42c1,	// (0x0003b9da) list_medium_line_t4_g4_t2

0x42d6,	// (0x0003b9ef) list_medium_line_t4_g4_t3_ParamLimits

0x42d6,	// (0x0003b9ef) list_medium_line_t4_g4_t3

0x4146,	// (0x0003b85f) list_medium_line_t4_g4_t4_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x00046a63) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x00046a63) list_medium_line_t4_g4_t

0x7805,	// (0x0003ef1e) chi_dic_find_pane_g1

0x8775,	// (0x0003fe8e) main_tport_pane

0x4580,	// (0x0003bc99) list_medium_line_plain_t1

0x458e,	// (0x0003bca7) list_medium_line_t2_g2_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_t2_g2_g1

0x459a,	// (0x0003bcb3) list_medium_line_t2_g2_g2_ParamLimits

0x459a,	// (0x0003bcb3) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0004711f) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0004711f) list_medium_line_t2_g2_g

0x45a6,	// (0x0003bcbf) list_medium_line_t2_g2_t1_ParamLimits

0x45a6,	// (0x0003bcbf) list_medium_line_t2_g2_t1

0x45c0,	// (0x0003bcd9) list_medium_line_t2_g2_t2_ParamLimits

0x45c0,	// (0x0003bcd9) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x00047124) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x00047124) list_medium_line_t2_g2_t

0x47df,	// (0x0003bef8) aid_sp_fs_list_icon_a_sm

0x47e7,	// (0x0003bf00) aid_sp_fs_list_icon_d

0x47ef,	// (0x0003bf08) aid_sp_fs_text_primary

0xd7d0,	// (0x00044ee9) aid_sp_fs_text_secondary

0xb646,	// (0x00042d5f) list_medium_line

0xb646,	// (0x00042d5f) list_medium_line_g2

0xb646,	// (0x00042d5f) list_medium_line_g3

0xb646,	// (0x00042d5f) list_medium_line_plain

0xb646,	// (0x00042d5f) list_medium_line_plain_t2

0xb646,	// (0x00042d5f) list_medium_line_plain_t3

0xb646,	// (0x00042d5f) list_medium_line_right_icon

0xb646,	// (0x00042d5f) list_medium_line_right_iconx2

0xb646,	// (0x00042d5f) list_medium_line_t2

0xb646,	// (0x00042d5f) list_medium_line_t2_g2

0xb646,	// (0x00042d5f) list_medium_line_t2_g3

0xb646,	// (0x00042d5f) list_medium_line_t2_right_icon

0xb646,	// (0x00042d5f) list_medium_line_t2_right_iconx2

0xb646,	// (0x00042d5f) list_medium_line_t3

0xb646,	// (0x00042d5f) list_medium_line_t3_g2

0xb646,	// (0x00042d5f) list_medium_line_t3_g3

0xb646,	// (0x00042d5f) list_medium_line_t3_right_iconx2

0x47f8,	// (0x0003bf11) list_medium_line_t4_g4

0xb64f,	// (0x00042d68) list_medium_line_x2

0xb64f,	// (0x00042d68) list_medium_line_x2_t2_g2

0xb64f,	// (0x00042d68) list_medium_line_x2_t2_g3

0xb64f,	// (0x00042d68) list_medium_line_x2_t2_g4

0xb64f,	// (0x00042d68) list_medium_line_x2_t3

0xb64f,	// (0x00042d68) list_medium_line_x2_t3_g2

0xb64f,	// (0x00042d68) list_medium_line_x2_t3_g3

0xb64f,	// (0x00042d68) list_medium_line_x2_t3_g4

0xb64f,	// (0x00042d68) list_medium_line_x2_t4_g2

0xb64f,	// (0x00042d68) list_medium_line_x2_t4_g4

0x4801,	// (0x0003bf1a) list_medium_line_x3

0x4801,	// (0x0003bf1a) list_medium_line_x3_t4

0x4801,	// (0x0003bf1a) list_medium_line_x3_t4_g4

0x47f8,	// (0x0003bf11) list_medium_line_x4_t4

0x47f8,	// (0x0003bf11) list_medium_line_x4_t4_g7

0x47f8,	// (0x0003bf11) list_medium_line_x4_t5

0x480a,	// (0x0003bf23) list_single_fs_dyc_pane_ParamLimits

0x480a,	// (0x0003bf23) list_single_fs_dyc_pane

0x40fb,	// (0x0003b814) list_medium_line_x4_t4_g7_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x4_t4_g7_g1

0x4826,	// (0x0003bf3f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4826,	// (0x0003bf3f) list_medium_line_x4_t4_g7_g2

0x4832,	// (0x0003bf4b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4832,	// (0x0003bf4b) list_medium_line_x4_t4_g7_g3

0x4841,	// (0x0003bf5a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4841,	// (0x0003bf5a) list_medium_line_x4_t4_g7_g4

0x484d,	// (0x0003bf66) list_medium_line_x4_t4_g7_g5_ParamLimits

0x484d,	// (0x0003bf66) list_medium_line_x4_t4_g7_g5

0x485c,	// (0x0003bf75) list_medium_line_x4_t4_g7_g6_ParamLimits

0x485c,	// (0x0003bf75) list_medium_line_x4_t4_g7_g6

0x486b,	// (0x0003bf84) list_medium_line_x4_t4_g7_g7_ParamLimits

0x486b,	// (0x0003bf84) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x000472ef) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x000472ef) list_medium_line_x4_t4_g7_g

0x4877,	// (0x0003bf90) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4877,	// (0x0003bf90) list_medium_line_x4_t4_g7_t1

0x488c,	// (0x0003bfa5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x488c,	// (0x0003bfa5) list_medium_line_x4_t4_g7_t2

0x48a1,	// (0x0003bfba) list_medium_line_x4_t4_g7_t3_ParamLimits

0x48a1,	// (0x0003bfba) list_medium_line_x4_t4_g7_t3

0x48b6,	// (0x0003bfcf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x48b6,	// (0x0003bfcf) list_medium_line_x4_t4_g7_t4

0x48c8,	// (0x0003bfe1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x48c8,	// (0x0003bfe1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x000472fe) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x000472fe) list_medium_line_x4_t4_g7_t

0x48da,	// (0x0003bff3) list_single_dyc_row_pane_ParamLimits

0x48da,	// (0x0003bff3) list_single_dyc_row_pane

0xc380,	// (0x00043a99) call5_gesture_pane_ParamLimits

0xc380,	// (0x00043a99) call5_gesture_pane

0xc3b4,	// (0x00043acd) call5_windows_pane_ParamLimits

0xc3b4,	// (0x00043acd) call5_windows_pane

0xc426,	// (0x00043b3f) call5_swipe_1_pane_cp_ParamLimits

0xc426,	// (0x00043b3f) call5_swipe_1_pane_cp

0xc432,	// (0x00043b4b) call5_swipe_2_pane_cp_ParamLimits

0xc432,	// (0x00043b4b) call5_swipe_2_pane_cp

0x0fa1,	// (0x000386ba) call5_image_pane_cp

0xc43e,	// (0x00043b57) popup_call5_audio_first_window_cp_ParamLimits

0xc43e,	// (0x00043b57) popup_call5_audio_first_window_cp

0xe29e,	// (0x000459b7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe29e,	// (0x000459b7) call5_swipe_1_pane_g1_cp

0xe2de,	// (0x000459f7) call5_swipe_1_pane_g2_cp

0xe2b7,	// (0x000459d0) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2b7,	// (0x000459d0) call5_swipe_1_pane_t1_cp

0xe29e,	// (0x000459b7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe29e,	// (0x000459b7) call5_swipe_2_pane_g1_cp

0xe2e6,	// (0x000459ff) call5_swipe_2_pane_g2_cp

0xe2ee,	// (0x00045a07) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2ee,	// (0x00045a07) call5_swipe_2_pane_t1_cp

0x0c6c,	// (0x00038385) main_sp_fs_email_pane

0xe303,	// (0x00045a1c) main_sp_fs_listscroll_pane_te

0x4970,	// (0x0003c089) popup_sp_fs_action_menu_pane_ParamLimits

0x4970,	// (0x0003c089) popup_sp_fs_action_menu_pane

0x2827,	// (0x00039f40) bg_sp_fs_ctrlbar_pane_g1

0xe30c,	// (0x00045a25) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe315,	// (0x00045a2e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe31e,	// (0x00045a37) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2827,	// (0x00039f40) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x000473ec) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x260c,	// (0x00039d25) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x260c,	// (0x00039d25) bg_sp_fs_ctrlbar_ddmenu_pane

0xe327,	// (0x00045a40) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe327,	// (0x00045a40) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe333,	// (0x00045a4c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe333,	// (0x00045a4c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x000473f5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x000473f5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe33f,	// (0x00045a58) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe33f,	// (0x00045a58) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x49b2,	// (0x0003c0cb) list_medium_line_t2_right_icon_g1

0x49ba,	// (0x0003c0d3) list_medium_line_t2_right_icon_t1

0x49ca,	// (0x0003c0e3) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x000473fa) list_medium_line_t2_right_icon_t

0x241f,	// (0x00039b38) bg_sp_fs_ctrlbar_pane_ParamLimits

0x241f,	// (0x00039b38) bg_sp_fs_ctrlbar_pane

0xc4a3,	// (0x00043bbc) main_sp_fs_ctrlbar_button_pane_cp01

0xc4ab,	// (0x00043bc4) main_sp_fs_ctrlbar_ddmenu_pane

0xe391,	// (0x00045aaa) main_sp_fs_ctrlbar_pane_g1

0xe39d,	// (0x00045ab6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x000473ff) main_sp_fs_ctrlbar_pane_g

0xe3a9,	// (0x00045ac2) main_sp_fs_ctrlbar_pane_t1

0xc4b5,	// (0x00043bce) main_sp_fs_ctrlbar_pane

0xc4cb,	// (0x00043be4) main_sp_fs_listscroll_pane_te_cp01

0x49d8,	// (0x0003c0f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x49d8,	// (0x0003c0f1) popup_sp_fs_action_menu_pane_cp01

0x0c6c,	// (0x00038385) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0c6c,	// (0x00038385) bg_sp_fs_highlight_list_pane_cp01

0x4a02,	// (0x0003c11b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4a02,	// (0x0003c11b) sp_fs_action_menu_list_gene_pane_g1

0xe3d9,	// (0x00045af2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3d9,	// (0x00045af2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x00047409) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x00047409) sp_fs_action_menu_list_gene_pane_g

0x4a11,	// (0x0003c12a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4a11,	// (0x0003c12a) sp_fs_action_menu_list_gene_pane_t1

0x4a29,	// (0x0003c142) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4a29,	// (0x0003c142) sp_fs_action_menu_list_gene_pane

0xe3e6,	// (0x00045aff) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3e6,	// (0x00045aff) popup_sp_fs_action_menu_bg_pane

0x4a48,	// (0x0003c161) sp_fs_action_menu_list_pane_ParamLimits

0x4a48,	// (0x0003c161) sp_fs_action_menu_list_pane

0xe3f4,	// (0x00045b0d) sp_fs_scroll_pane_cp01_ParamLimits

0xe3f4,	// (0x00045b0d) sp_fs_scroll_pane_cp01

0x4a68,	// (0x0003c181) list_medium_line_plain_t2_t1

0x4a78,	// (0x0003c191) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0004740e) list_medium_line_plain_t2_t

0x4a86,	// (0x0003c19f) list_medium_line_plain_t3_t1

0x4a96,	// (0x0003c1af) list_medium_line_plain_t3_t2

0x4aa4,	// (0x0003c1bd) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x00047413) list_medium_line_plain_t3_t

0x40fb,	// (0x0003b814) list_medium_line_x2_t2_g2_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t2_g2_g1

0x4113,	// (0x0003b82c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0004696a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0004696a) list_medium_line_x2_t2_g2_g

0x42ac,	// (0x0003b9c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x42ac,	// (0x0003b9c5) list_medium_line_x2_t2_g2_t1

0x4146,	// (0x0003b85f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0004741a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0004741a) list_medium_line_x2_t2_g2_t

0x40fb,	// (0x0003b814) list_medium_line_x2_t4_g2_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t4_g2_g1

0x4ab2,	// (0x0003c1cb) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4ab2,	// (0x0003c1cb) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0004741f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0004741f) list_medium_line_x2_t4_g2_g

0x4ac4,	// (0x0003c1dd) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4ac4,	// (0x0003c1dd) list_medium_line_x2_t4_g2_t1

0x4ade,	// (0x0003c1f7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x4ade,	// (0x0003c1f7) list_medium_line_x2_t4_g2_t2

0x4af3,	// (0x0003c20c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4af3,	// (0x0003c20c) list_medium_line_x2_t4_g2_t3

0x4146,	// (0x0003b85f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00047424) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00047424) list_medium_line_x2_t4_g2_t

0x4b08,	// (0x0003c221) list_medium_line_t3_right_iconx2_g1

0x49b2,	// (0x0003c0cb) list_medium_line_t3_right_iconx2_g2

0x4b10,	// (0x0003c229) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0004742d) list_medium_line_t3_right_iconx2_g

0x4b18,	// (0x0003c231) list_medium_line_t3_right_iconx2_t1

0x4b28,	// (0x0003c241) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00047434) list_medium_line_t3_right_iconx2_t

0x40fb,	// (0x0003b814) list_medium_line_x3_t4_g4_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x3_t4_g4_g1

0x4107,	// (0x0003b820) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x3_t4_g4_g2

0x418f,	// (0x0003b8a8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x418f,	// (0x0003b8a8) list_medium_line_x3_t4_g4_g3

0x4b36,	// (0x0003c24f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4b36,	// (0x0003c24f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00047439) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00047439) list_medium_line_x3_t4_g4_g

0x4b42,	// (0x0003c25b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4b42,	// (0x0003c25b) list_medium_line_x3_t4_g4_t1

0x4b59,	// (0x0003c272) list_medium_line_x3_t4_g4_t2_ParamLimits

0x4b59,	// (0x0003c272) list_medium_line_x3_t4_g4_t2

0x42c1,	// (0x0003b9da) list_medium_line_x3_t4_g4_t3_ParamLimits

0x42c1,	// (0x0003b9da) list_medium_line_x3_t4_g4_t3

0x4b6e,	// (0x0003c287) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4b6e,	// (0x0003c287) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00047442) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00047442) list_medium_line_x3_t4_g4_t

0x4b8b,	// (0x0003c2a4) list_single_dyc_row_text_pane_t1_ParamLimits

0x4b8b,	// (0x0003c2a4) list_single_dyc_row_text_pane_t1

0x4bc2,	// (0x0003c2db) list_single_dyc_row_text_pane_t2_ParamLimits

0x4bc2,	// (0x0003c2db) list_single_dyc_row_text_pane_t2

0x4c1c,	// (0x0003c335) list_single_dyc_row_text_pane_t3_ParamLimits

0x4c1c,	// (0x0003c335) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0004744b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0004744b) list_single_dyc_row_text_pane_t

0x4c2e,	// (0x0003c347) list_single_dyc_row_pane_g1_ParamLimits

0x4c2e,	// (0x0003c347) list_single_dyc_row_pane_g1

0x4c3a,	// (0x0003c353) list_single_dyc_row_pane_g2_ParamLimits

0x4c3a,	// (0x0003c353) list_single_dyc_row_pane_g2

0x4c46,	// (0x0003c35f) list_single_dyc_row_pane_g3_ParamLimits

0x4c46,	// (0x0003c35f) list_single_dyc_row_pane_g3

0x4c52,	// (0x0003c36b) list_single_dyc_row_pane_g4_ParamLimits

0x4c52,	// (0x0003c36b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00047452) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00047452) list_single_dyc_row_pane_g

0x4c5e,	// (0x0003c377) list_single_dyc_row_text_pane_ParamLimits

0x4c5e,	// (0x0003c377) list_single_dyc_row_text_pane

0xe6de,	// (0x00045df7) bg_sp_fs_scroll_pane

0xe41a,	// (0x00045b33) thumb_sp_fs_scroll_pane

0x458e,	// (0x0003bca7) list_medium_line_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_g1

0x4c7d,	// (0x0003c396) list_medium_line_t1_ParamLimits

0x4c7d,	// (0x0003c396) list_medium_line_t1

0x40fb,	// (0x0003b814) list_medium_line_x2_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_g1

0x4107,	// (0x0003b820) list_medium_line_x2_g2_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004745b) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004745b) list_medium_line_x2_g

0x4c92,	// (0x0003c3ab) list_medium_line_x2_t1_ParamLimits

0x4c92,	// (0x0003c3ab) list_medium_line_x2_t1

0x40fb,	// (0x0003b814) list_medium_line_x3_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x3_g1

0x4107,	// (0x0003b820) list_medium_line_x3_g2_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004745b) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004745b) list_medium_line_x3_g

0x4c92,	// (0x0003c3ab) list_medium_line_x3_t1_ParamLimits

0x4c92,	// (0x0003c3ab) list_medium_line_x3_t1

0xe423,	// (0x00045b3c) thumb_sp_fs_scroll_pane_g1

0xe42c,	// (0x00045b45) thumb_sp_fs_scroll_pane_g2

0xe435,	// (0x00045b4e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00047460) thumb_sp_fs_scroll_pane_g

0xe423,	// (0x00045b3c) bg_sp_fs_scroll_pane_g1

0xe42c,	// (0x00045b45) bg_sp_fs_scroll_pane_g2

0xe435,	// (0x00045b4e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00047460) bg_sp_fs_scroll_pane_g

0x40fb,	// (0x0003b814) list_medium_line_x2_t3_g4_g1_ParamLimits

0x40fb,	// (0x0003b814) list_medium_line_x2_t3_g4_g1

0x4183,	// (0x0003b89c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4183,	// (0x0003b89c) list_medium_line_x2_t3_g4_g2

0x4107,	// (0x0003b820) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4107,	// (0x0003b820) list_medium_line_x2_t3_g4_g3

0x4113,	// (0x0003b82c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4113,	// (0x0003b82c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000469e6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000469e6) list_medium_line_x2_t3_g4_g

0x4ca8,	// (0x0003c3c1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4ca8,	// (0x0003c3c1) list_medium_line_x2_t3_g4_t1

0x4cbe,	// (0x0003c3d7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4cbe,	// (0x0003c3d7) list_medium_line_x2_t3_g4_t2

0x4146,	// (0x0003b85f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4146,	// (0x0003b85f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00047467) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00047467) list_medium_line_x2_t3_g4_t

0x458e,	// (0x0003bca7) list_medium_line_g2_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_g2_g1

0x459a,	// (0x0003bcb3) list_medium_line_g2_g2_ParamLimits

0x459a,	// (0x0003bcb3) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0004711f) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0004711f) list_medium_line_g2_g

0x4cd8,	// (0x0003c3f1) list_medium_line_g2_t1_ParamLimits

0x4cd8,	// (0x0003c3f1) list_medium_line_g2_t1

0x458e,	// (0x0003bca7) list_medium_line_t3_g2_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_t3_g2_g1

0x459a,	// (0x0003bcb3) list_medium_line_t3_g2_g2_ParamLimits

0x459a,	// (0x0003bcb3) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0004711f) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0004711f) list_medium_line_t3_g2_g

0x4ced,	// (0x0003c406) list_medium_line_t3_g2_t1_ParamLimits

0x4ced,	// (0x0003c406) list_medium_line_t3_g2_t1

0x4d04,	// (0x0003c41d) list_medium_line_t3_g2_t2_ParamLimits

0x4d04,	// (0x0003c41d) list_medium_line_t3_g2_t2

0x4d19,	// (0x0003c432) list_medium_line_t3_g2_t3_ParamLimits

0x4d19,	// (0x0003c432) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004746e) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004746e) list_medium_line_t3_g2_t

0x49b2,	// (0x0003c0cb) list_medium_line_right_icon_g1

0x4d2e,	// (0x0003c447) list_medium_line_right_icon_t1

0x458e,	// (0x0003bca7) list_medium_line_t2_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_t2_g1

0x4d3c,	// (0x0003c455) list_medium_line_t2_t1_ParamLimits

0x4d3c,	// (0x0003c455) list_medium_line_t2_t1

0x4d56,	// (0x0003c46f) list_medium_line_t2_t2_ParamLimits

0x4d56,	// (0x0003c46f) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00047475) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00047475) list_medium_line_t2_t

0x458e,	// (0x0003bca7) list_medium_line_t3_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_t3_g1

0x4d6b,	// (0x0003c484) list_medium_line_t3_t1_ParamLimits

0x4d6b,	// (0x0003c484) list_medium_line_t3_t1

0x4d82,	// (0x0003c49b) list_medium_line_t3_t2_ParamLimits

0x4d82,	// (0x0003c49b) list_medium_line_t3_t2

0x4d97,	// (0x0003c4b0) list_medium_line_t3_t3_ParamLimits

0x4d97,	// (0x0003c4b0) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004747a) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004747a) list_medium_line_t3_t

0x458e,	// (0x0003bca7) list_medium_line_g3_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_g3_g1

0x4da9,	// (0x0003c4c2) list_medium_line_g3_g2_ParamLimits

0x4da9,	// (0x0003c4c2) list_medium_line_g3_g2

0x459a,	// (0x0003bcb3) list_medium_line_g3_g3_ParamLimits

0x459a,	// (0x0003bcb3) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00047481) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00047481) list_medium_line_g3_g

0x4db5,	// (0x0003c4ce) list_medium_line_g3_t1_ParamLimits

0x4db5,	// (0x0003c4ce) list_medium_line_g3_t1

0x458e,	// (0x0003bca7) list_medium_line_t2_g3_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_t2_g3_g1

0x4da9,	// (0x0003c4c2) list_medium_line_t2_g3_g2_ParamLimits

0x4da9,	// (0x0003c4c2) list_medium_line_t2_g3_g2

0x459a,	// (0x0003bcb3) list_medium_line_t2_g3_g3_ParamLimits

0x459a,	// (0x0003bcb3) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00047481) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00047481) list_medium_line_t2_g3_g

0x4dca,	// (0x0003c4e3) list_medium_line_t2_g3_t1_ParamLimits

0x4dca,	// (0x0003c4e3) list_medium_line_t2_g3_t1

0x4de4,	// (0x0003c4fd) list_medium_line_t2_g3_t2_ParamLimits

0x4de4,	// (0x0003c4fd) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00047488) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00047488) list_medium_line_t2_g3_t

0x458e,	// (0x0003bca7) list_medium_line_t3_g3_g1_ParamLimits

0x458e,	// (0x0003bca7) list_medium_line_t3_g3_g1

0x4da9,	// (0x0003c4c2) list_medium_line_t3_g3_g2_ParamLimits

0x4da9,	// (0x0003c4c2) list_medium_line_t3_g3_g2

0x459a,	// (0x0003bcb3) list_medium_line_t3_g3_g3_ParamLimits

0x459a,	// (0x0003bcb3) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00047481) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00047481) list_medium_line_t3_g3_g

0x4df9,	// (0x0003c512) list_medium_line_t3_g3_t1_ParamLimits

0x4df9,	// (0x0003c512) list_medium_line_t3_g3_t1

0x4e0d,	// (0x0003c526) list_medium_line_t3_g3_t2_ParamLimits

0x4e0d,	// (0x0003c526) list_medium_line_t3_g3_t2

0x4e1f,	// (0x0003c538) list_medium_line_t3_g3_t3_ParamLimits

0x4e1f,	// (0x0003c538) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004748d) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004748d) list_medium_line_t3_g3_t

0x4b08,	// (0x0003c221) list_medium_line_right_iconx2_g1

0x49b2,	// (0x0003c0cb) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00047494) list_medium_line_right_iconx2_g

0x4e31,	// (0x0003c54a) list_medium_line_right_iconx2_t1

0x4b08,	// (0x0003c221) list_medium_line_t2_right_iconx2_g1

0x49b2,	// (0x0003c0cb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00047494) list_medium_line_t2_right_iconx2_g

0x4e3f,	// (0x0003c558) list_medium_line_t2_right_iconx2_t1

0x4e4f,	// (0x0003c568) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00047499) list_medium_line_t2_right_iconx2_t

0x4e5d,	// (0x0003c576) list_medium_line_x4_t4_t1

0x4e6b,	// (0x0003c584) list_medium_line_x4_t4_t2

0x4e7b,	// (0x0003c594) list_medium_line_x4_t4_t3

0x4e8b,	// (0x0003c5a4) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004749e) list_medium_line_x4_t4_t

0xc506,	// (0x00043c1f) tport_appsw_pane_ParamLimits

0xc506,	// (0x00043c1f) tport_appsw_pane

0xc514,	// (0x00043c2d) tport_contact_pane_ParamLimits

0xc514,	// (0x00043c2d) tport_contact_pane

0xc524,	// (0x00043c3d) tport_listscroll_pane_ParamLimits

0xc524,	// (0x00043c3d) tport_listscroll_pane

0xc534,	// (0x00043c4d) cell_tport_appsw_pane_ParamLimits

0xc534,	// (0x00043c4d) cell_tport_appsw_pane

0x2b24,	// (0x0003a23d) tport_appsw_pane_g1_ParamLimits

0x2b24,	// (0x0003a23d) tport_appsw_pane_g1

0xe43e,	// (0x00045b57) tport_contact_pane_g1

0xddb7,	// (0x000454d0) tport_contact_pane_t1

0xe447,	// (0x00045b60) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000474a7) tport_contact_pane_t

0xe455,	// (0x00045b6e) list_tport_pane

0xe45e,	// (0x00045b77) scroll_pane_cp_030

0xc567,	// (0x00043c80) cell_tport_appsw_pane_g1

0xc577,	// (0x00043c90) cell_tport_appsw_pane_t1

0xe6de,	// (0x00045df7) grid_highlight_pane_cp019

0xc585,	// (0x00043c9e) list_tport_double_graphic_pane_ParamLimits

0xc585,	// (0x00043c9e) list_tport_double_graphic_pane

0x0c6c,	// (0x00038385) list_highlight_pane_cp023_ParamLimits

0x0c6c,	// (0x00038385) list_highlight_pane_cp023

0xc596,	// (0x00043caf) list_tport_double_graphic_pane_g1_ParamLimits

0xc596,	// (0x00043caf) list_tport_double_graphic_pane_g1

0xc5a3,	// (0x00043cbc) list_tport_double_graphic_pane_t1_ParamLimits

0xc5a3,	// (0x00043cbc) list_tport_double_graphic_pane_t1

0xc5b8,	// (0x00043cd1) list_tport_double_graphic_pane_t2_ParamLimits

0xc5b8,	// (0x00043cd1) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000474b3) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000474b3) list_tport_double_graphic_pane_t

0xe6de,	// (0x00045df7) main_cale_note_pane

0xa9a2,	// (0x000420bb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa9a2,	// (0x000420bb) cell_vitu2_function_top_wide_pane_cp01

0xc0bd,	// (0x000437d6) wait_bar_pane_cp05_ParamLimits

0x0c6c,	// (0x00038385) listscroll_cmail_pane

0xe467,	// (0x00045b80) list_cmail_pane

0xc5ca,	// (0x00043ce3) list_cmail_body_pane

0xc5ea,	// (0x00043d03) list_single_cmail_header_caption_pane

0xc615,	// (0x00043d2e) list_single_cmail_header_detail_pane_ParamLimits

0xc615,	// (0x00043d2e) list_single_cmail_header_detail_pane

0xe483,	// (0x00045b9c) list_single_cmail_header_caption_pane_t1

0x4e9b,	// (0x0003c5b4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4e9b,	// (0x0003c5b4) list_single_cmail_header_detail_pane_g1

0x4eb1,	// (0x0003c5ca) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4eb1,	// (0x0003c5ca) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000474b8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000474b8) list_single_cmail_header_detail_pane_g

0x4ebd,	// (0x0003c5d6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4ebd,	// (0x0003c5d6) list_single_cmail_header_detail_pane_t1

0x4f1d,	// (0x0003c636) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4f1d,	// (0x0003c636) list_single_cmail_header_editor_pane_bg

0xdf58,	// (0x00045671) list_cmail_body_pane_g1

0xe49e,	// (0x00045bb7) list_cmail_body_pane_t1

0xd30f,	// (0x00044a28) list_single_cmail_header_editor_pane_bg_g1

0x087e,	// (0x00037f97) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd31f,	// (0x00044a38) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd317,	// (0x00044a30) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd54e,	// (0x00044c67) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd33f,	// (0x00044a58) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd32f,	// (0x00044a48) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd337,	// (0x00044a50) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x085e,	// (0x00037f77) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc654,	// (0x00043d6d) calenote_gesture_pane_ParamLimits

0xc654,	// (0x00043d6d) calenote_gesture_pane

0xc66e,	// (0x00043d87) calenote_window_pane_ParamLimits

0xc66e,	// (0x00043d87) calenote_window_pane

0xe4ac,	// (0x00045bc5) popup_note_window_cp01

0xc686,	// (0x00043d9f) calenote_swipe_1_pane_ParamLimits

0xc686,	// (0x00043d9f) calenote_swipe_1_pane

0xc432,	// (0x00043b4b) calenote_swipe_2_pane_ParamLimits

0xc432,	// (0x00043b4b) calenote_swipe_2_pane

0xe29e,	// (0x000459b7) calenote_swipe_1_pane_g1_ParamLimits

0xe29e,	// (0x000459b7) calenote_swipe_1_pane_g1

0xe2ab,	// (0x000459c4) calenote_swipe_1_pane_g2_ParamLimits

0xe2ab,	// (0x000459c4) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x000473e2) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x000473e2) calenote_swipe_1_pane_g

0xe4be,	// (0x00045bd7) calenote_swipe_1_pane_t1_ParamLimits

0xe4be,	// (0x00045bd7) calenote_swipe_1_pane_t1

0xe29e,	// (0x000459b7) calenote_swipe_2_pane_g1_ParamLimits

0xe29e,	// (0x000459b7) calenote_swipe_2_pane_g1

0xe4dd,	// (0x00045bf6) calenote_swipe_2_pane_g2_ParamLimits

0xe4dd,	// (0x00045bf6) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000474c4) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000474c4) calenote_swipe_2_pane_g

0xe4e9,	// (0x00045c02) calenote_swipe_2_pane_t1_ParamLimits

0xe4e9,	// (0x00045c02) calenote_swipe_2_pane_t1

0xe6de,	// (0x00045df7) main_mup_navstr_pane

0x9727,	// (0x00040e40) main_mup3_pane_t7_ParamLimits

0x9727,	// (0x00040e40) main_mup3_pane_t7

0xa12c,	// (0x00041845) main_mp4_pane_g6_ParamLimits

0xa12c,	// (0x00041845) main_mp4_pane_g6

0xa49e,	// (0x00041bb7) main_image3_pane_t4_ParamLimits

0xa49e,	// (0x00041bb7) main_image3_pane_t4

0xc699,	// (0x00043db2) popup_navstr_preview_pane_ParamLimits

0xc699,	// (0x00043db2) popup_navstr_preview_pane

0xc6a5,	// (0x00043dbe) scroll_navstr_pane_ParamLimits

0xc6a5,	// (0x00043dbe) scroll_navstr_pane

0xe6de,	// (0x00045df7) bg_popup_preview_window_pane_cp04

0xe510,	// (0x00045c29) popup_navstr_preview_pane_t1

0xc6b1,	// (0x00043dca) scroll_navstr_pane_g1_ParamLimits

0xc6b1,	// (0x00043dca) scroll_navstr_pane_g1

0xc6be,	// (0x00043dd7) scroll_navstr_pane_t1_ParamLimits

0xc6be,	// (0x00043dd7) scroll_navstr_pane_t1

0xe4b5,	// (0x00045bce) bg_button_pane_cp014

0xe4b5,	// (0x00045bce) bg_button_pane_cp030

0x4916,	// (0x0003c02f) list_double_fisheye_pane_g4_ParamLimits

0x4916,	// (0x0003c02f) list_double_fisheye_pane_g4

0x4922,	// (0x0003c03b) list_double_fisheye_pane_g5_ParamLimits

0x4922,	// (0x0003c03b) list_double_fisheye_pane_g5

0xe477,	// (0x00045b90) sp_fs_scroll_pane_cp03

0xe391,	// (0x00045aaa) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe39d,	// (0x00045ab6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x000473ff) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3a9,	// (0x00045ac2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe46f,	// (0x00045b88) sp_fs_scroll_pane_cp02

0x0561,	// (0x00037c7a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0561,	// (0x00037c7a) popup_sp_fs_calendar_preview_list_single_pane

0xe6de,	// (0x00045df7) main_cam6_pano_pane

0x0c6c,	// (0x00038385) main_mup3_pane_ParamLimits

0xe6de,	// (0x00045df7) main_phacti_pane

0xbf92,	// (0x000436ab) bg_button_pane_cp11

0xbfaa,	// (0x000436c3) main_mobtv_info_pane_g2_ParamLimits

0xbfaa,	// (0x000436c3) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0004735f) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0004735f) main_mobtv_info_pane_g

0xc15c,	// (0x00043875) sc_clock_pane_t5_ParamLimits

0xc15c,	// (0x00043875) sc_clock_pane_t5

0xc211,	// (0x0004392a) main_radioblah_pane_g1_ParamLimits

0xe1ea,	// (0x00045903) main_radioblah_pane_t3_ParamLimits

0xe1ea,	// (0x00045903) main_radioblah_pane_t3

0xe202,	// (0x0004591b) main_radioblah_pane_t4_ParamLimits

0xe202,	// (0x0004591b) main_radioblah_pane_t4

0xc22f,	// (0x00043948) main_radioblah_text_pane_ParamLimits

0xc22f,	// (0x00043948) main_radioblah_text_pane

0xc23c,	// (0x00043955) main_radioblah_info_pane_g1_ParamLimits

0xc2d1,	// (0x000439ea) main_radioblah_info_pane_t4_ParamLimits

0xc2d1,	// (0x000439ea) main_radioblah_info_pane_t4

0x0c6c,	// (0x00038385) main_sp_fs_calendar_pane

0xc6d0,	// (0x00043de9) main_phacti_pane_g1

0xc6d8,	// (0x00043df1) phacti_note_pane_ParamLimits

0xc6d8,	// (0x00043df1) phacti_note_pane

0xe527,	// (0x00045c40) phacti_term_pane_ParamLimits

0xe527,	// (0x00045c40) phacti_term_pane

0xe53c,	// (0x00045c55) phacti_note_pane_t1_ParamLimits

0xe53c,	// (0x00045c55) phacti_note_pane_t1

0x4f34,	// (0x0003c64d) phacti_term_pane_g1

0x4f3c,	// (0x0003c655) phacti_term_pane_t1_ParamLimits

0x4f3c,	// (0x0003c655) phacti_term_pane_t1

0xe553,	// (0x00045c6c) popup_sp_fs_calendar_preview_list_single_pane_g1

0x067f,	// (0x00037d98) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000474ce) popup_sp_fs_calendar_preview_list_single_pane_g

0xe55b,	// (0x00045c74) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe55b,	// (0x00045c74) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe570,	// (0x00045c89) aid_popup_sp_fs_bg_corner_pane

0x2827,	// (0x00039f40) popup_sp_fs_calendar_preview_bg_pane_g1

0xe6de,	// (0x00045df7) popup_sp_fs_calendar_preview_bg_pane

0xe578,	// (0x00045c91) popup_sp_fs_calendar_preview_list_pane

0x241f,	// (0x00039b38) bg_main_sp_fs_cale_pane_ParamLimits

0x241f,	// (0x00039b38) bg_main_sp_fs_cale_pane

0x4f6f,	// (0x0003c688) listscroll_cale_mrui_pane_ParamLimits

0x4f6f,	// (0x0003c688) listscroll_cale_mrui_pane

0x4f84,	// (0x0003c69d) listscroll_sp_fs_schedule_track_pane

0x4f8d,	// (0x0003c6a6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4f8d,	// (0x0003c6a6) main_sp_fs_ctrlbar_pane_cp01

0xe580,	// (0x00045c99) main_sp_fs_ribbon_pane

0x4fa0,	// (0x0003c6b9) popup_sp_fs_cale_preview_window

0xc73b,	// (0x00043e54) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc73b,	// (0x00043e54) list_single_sp_fs_schedule_track_pane

0xe6e8,	// (0x00045e01) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe6e8,	// (0x00045e01) bg_sp_fs_highlight_list_pane_cp03

0xc75d,	// (0x00043e76) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc75d,	// (0x00043e76) list_single_sp_fs_schedule_track_pane_g1

0xc769,	// (0x00043e82) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc769,	// (0x00043e82) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000474d3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000474d3) list_single_sp_fs_schedule_track_pane_g

0xc775,	// (0x00043e8e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc775,	// (0x00043e8e) list_single_sp_fs_schedule_track_pane_t1

0xc78d,	// (0x00043ea6) sp_fs_schedule_track_pane_ParamLimits

0xc78d,	// (0x00043ea6) sp_fs_schedule_track_pane

0xe588,	// (0x00045ca1) sp_fs_schedule_track_pane_g1

0xe590,	// (0x00045ca9) sp_fs_schedule_track_pane_g2

0xe598,	// (0x00045cb1) sp_fs_schedule_track_pane_g3

0xe5a0,	// (0x00045cb9) sp_fs_schedule_track_pane_g4

0xe5a8,	// (0x00045cc1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000474d8) sp_fs_schedule_track_pane_g

0xd30f,	// (0x00044a28) bg_sp_fs_schedule_viewer_highlight_g1

0x087e,	// (0x00037f97) bg_sp_fs_schedule_viewer_highlight_g2

0xd317,	// (0x00044a30) bg_sp_fs_schedule_viewer_highlight_g3

0xd31f,	// (0x00044a38) bg_sp_fs_schedule_viewer_highlight_g4

0xd54e,	// (0x00044c67) bg_sp_fs_schedule_viewer_highlight_g5

0xd32f,	// (0x00044a48) bg_sp_fs_schedule_viewer_highlight_g6

0xd337,	// (0x00044a50) bg_sp_fs_schedule_viewer_highlight_g7

0xd33f,	// (0x00044a58) bg_sp_fs_schedule_viewer_highlight_g8

0x085e,	// (0x00037f77) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000474e3) bg_sp_fs_schedule_viewer_highlight_g

0xe6de,	// (0x00045df7) bg_main_sp_fs_ribbon_pane

0xc79d,	// (0x00043eb6) main_sp_fs_ribbon_pane_g1

0xe5b0,	// (0x00045cc9) main_sp_fs_ribbon_pane_t1

0xc7a6,	// (0x00043ebf) main_sp_fs_ribbon_pane_t2

0xe5bf,	// (0x00045cd8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000474f6) main_sp_fs_ribbon_pane_t

0xe5ce,	// (0x00045ce7) main_sp_fs_ribbon_scheduler_pane

0xe5d6,	// (0x00045cef) bg_main_sp_fs_ribbon_pane_g1

0xe5df,	// (0x00045cf8) bg_main_sp_fs_ribbon_pane_g2

0xe5e8,	// (0x00045d01) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000474fd) bg_main_sp_fs_ribbon_pane_g

0xe5f0,	// (0x00045d09) main_sp_fs_ribbon_scheduler_pane_g1

0xe5f9,	// (0x00045d12) main_sp_fs_ribbon_scheduler_pane_g2

0xe602,	// (0x00045d1b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00047504) main_sp_fs_ribbon_scheduler_pane_g

0xe60b,	// (0x00045d24) list_cale_mrui_pane

0xc7b5,	// (0x00043ece) sp_fs_scroll_pane_cp07_ParamLimits

0xc7b5,	// (0x00043ece) sp_fs_scroll_pane_cp07

0xc7d1,	// (0x00043eea) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc7d1,	// (0x00043eea) bg_sp_fs_schedule_viewer_highlight

0xe618,	// (0x00045d31) list_single_sp_fs_schedule_track_pane_cp01

0xe620,	// (0x00045d39) list_sp_fs_schedule_track_pane

0xe628,	// (0x00045d41) sp_fs_scroll_pane_cp06_ParamLimits

0xe628,	// (0x00045d41) sp_fs_scroll_pane_cp06

0x2827,	// (0x00039f40) bgmain_sp_fs_calendar_pane_g1

0x4fb2,	// (0x0003c6cb) list_single_cale_mrui_pane_ParamLimits

0x4fb2,	// (0x0003c6cb) list_single_cale_mrui_pane

0x4fe0,	// (0x0003c6f9) list_single_cale_mrui_row_pane_ParamLimits

0x4fe0,	// (0x0003c6f9) list_single_cale_mrui_row_pane

0x4fed,	// (0x0003c706) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4fed,	// (0x0003c706) list_single_cale_mrui_row_pane_g1

0x5025,	// (0x0003c73e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5025,	// (0x0003c73e) list_single_cale_mrui_row_pane_t1

0x5037,	// (0x0003c750) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5037,	// (0x0003c750) list_single_cale_mrui_row_pane_t2

0x509d,	// (0x0003c7b6) list_single_cale_mrui_row_pane_t3_ParamLimits

0x509d,	// (0x0003c7b6) list_single_cale_mrui_row_pane_t3

0x50cc,	// (0x0003c7e5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x50cc,	// (0x0003c7e5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00047512) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00047512) list_single_cale_mrui_row_pane_t

0x50fb,	// (0x0003c814) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x50fb,	// (0x0003c814) list_single_cmail_header_editor_pane_bg_cp01

0x511b,	// (0x0003c834) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x511b,	// (0x0003c834) list_single_cmail_header_editor_pane_bg_cp02

0xc7de,	// (0x00043ef7) main_radioblah_text_pane_t1_ParamLimits

0xc7de,	// (0x00043ef7) main_radioblah_text_pane_t1

0xe647,	// (0x00045d60) cam6_indi_pane_cp01

0xe64f,	// (0x00045d68) cam6_mode_pane_cp01

0xe657,	// (0x00045d70) cam6_pano_pane

0xe660,	// (0x00045d79) cam6_zoom_pane_cp01

0xe668,	// (0x00045d81) cam6_pano_image_pane

0xe673,	// (0x00045d8c) cam6_pano_pane_g1

0xdf58,	// (0x00045671) cam6_pano_pane_g2

0xe67c,	// (0x00045d95) cam6_pano_pane_g3

0xe685,	// (0x00045d9e) cam6_pano_pane_g4

0x2dff,	// (0x0003a518) cam6_pano_pane_g5

0xe68e,	// (0x00045da7) cam6_pano_pane_g6

0xd57b,	// (0x00044c94) cam6_pano_pane_g7

0xe698,	// (0x00045db1) cam6_pano_pane_g8

0xe6a1,	// (0x00045dba) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004751b) cam6_pano_pane_g

0xe6de,	// (0x00045df7) main_browser_tag_pane

0xe508,	// (0x00045c21) grid_navstr_albumart_pane

0xe6ac,	// (0x00045dc5) cell_navstr_albumart_pane_ParamLimits

0xe6ac,	// (0x00045dc5) cell_navstr_albumart_pane

0xe6f6,	// (0x00045e0f) cell_navstr_albumart_pane_g1

0x2230,	// (0x00039949) cell_navstr_albumart_pane_g2

0x2240,	// (0x00039959) cell_navstr_albumart_pane_g3

0x2238,	// (0x00039951) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004752e) cell_navstr_albumart_pane_g

0xc7f9,	// (0x00043f12) bt_list_pane_ParamLimits

0xc7f9,	// (0x00043f12) bt_list_pane

0xc819,	// (0x00043f32) bt_list_pane_t1

0xc828,	// (0x00043f41) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00047537) bt_list_pane_t

0xe6de,	// (0x00045df7) main_cale_prevew_pane

0xc837,	// (0x00043f50) popup_cale_preview_window_ParamLimits

0xc837,	// (0x00043f50) popup_cale_preview_window

0x0c6c,	// (0x00038385) bg_popup_preview_window_pane_cp05_ParamLimits

0x0c6c,	// (0x00038385) bg_popup_preview_window_pane_cp05

0xe6fe,	// (0x00045e17) list_cale_preview_pane_ParamLimits

0xe6fe,	// (0x00045e17) list_cale_preview_pane

0xc850,	// (0x00043f69) list_double_cale_preview_pane_ParamLimits

0xc850,	// (0x00043f69) list_double_cale_preview_pane

0xc862,	// (0x00043f7b) list_single_cale_preview_pane_ParamLimits

0xc862,	// (0x00043f7b) list_single_cale_preview_pane

0xc878,	// (0x00043f91) list_single_cale_preview_pane_g1

0xc880,	// (0x00043f99) list_single_cale_preview_pane_t1_ParamLimits

0xc880,	// (0x00043f99) list_single_cale_preview_pane_t1

0xc895,	// (0x00043fae) list_double_cale_preview_pane_g1

0xc89d,	// (0x00043fb6) list_double_cale_preview_pane_t1_ParamLimits

0xc89d,	// (0x00043fb6) list_double_cale_preview_pane_t1

0xc8b2,	// (0x00043fcb) list_double_cale_preview_pane_t2_ParamLimits

0xc8b2,	// (0x00043fcb) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004753c) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004753c) list_double_cale_preview_pane_t

0xe6de,	// (0x00045df7) main_ezdial_pane

0x0c6c,	// (0x00038385) main_sp_fs_email_pane_ParamLimits

0xc44c,	// (0x00043b65) cmail_ddmenu_btn01_pane_ParamLimits

0xc44c,	// (0x00043b65) cmail_ddmenu_btn01_pane

0xc469,	// (0x00043b82) cmail_ddmenu_btn02_pane_ParamLimits

0xc469,	// (0x00043b82) cmail_ddmenu_btn02_pane

0xc487,	// (0x00043ba0) cmail_ddmenu_btn03_pane_ParamLimits

0xc487,	// (0x00043ba0) cmail_ddmenu_btn03_pane

0xc4b5,	// (0x00043bce) main_sp_fs_ctrlbar_pane_ParamLimits

0xc4cb,	// (0x00043be4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc5ca,	// (0x00043ce3) list_cmail_body_pane_ParamLimits

0xc64b,	// (0x00043d64) bg_button_pane_cp12

0xe491,	// (0x00045baa) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe491,	// (0x00045baa) list_single_cmail_header_detail_pane_g3

0x4ef9,	// (0x0003c612) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4ef9,	// (0x0003c612) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000474bf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000474bf) list_single_cmail_header_detail_pane_t

0x4f51,	// (0x0003c66a) phacti_term_pane_t2_ParamLimits

0x4f51,	// (0x0003c66a) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000474c9) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000474c9) phacti_term_pane_t

0xe70a,	// (0x00045e23) aid_size_list_single_double

0xc8ca,	// (0x00043fe3) popup_ezdial_listscroll_window

0xc8eb,	// (0x00044004) popup_number_entry_window_cp01

0x0fa1,	// (0x000386ba) bg_popup_call_pane_cp09

0xe716,	// (0x00045e2f) ezdial_list_pane

0xe71e,	// (0x00045e37) scroll_pane_cp23

0x260c,	// (0x00039d25) bg_button_pane_cp028_ParamLimits

0x260c,	// (0x00039d25) bg_button_pane_cp028

0xc8f9,	// (0x00044012) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc8f9,	// (0x00044012) cmail_ddmenu_btn01_pane_g1

0xc90b,	// (0x00044024) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc90b,	// (0x00044024) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00047541) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00047541) cmail_ddmenu_btn01_pane_g

0xe726,	// (0x00045e3f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe726,	// (0x00045e3f) cmail_ddmenu_btn01_pane_t1

0x241f,	// (0x00039b38) bg_button_pane_cp029_ParamLimits

0x241f,	// (0x00039b38) bg_button_pane_cp029

0xc90b,	// (0x00044024) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc90b,	// (0x00044024) cmail_ddmenu_btn02_pane_g1

0xc923,	// (0x0004403c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc923,	// (0x0004403c) cmail_ddmenu_btn02_pane_t1

0xe6e8,	// (0x00045e01) bg_button_pane_cp031_ParamLimits

0xe6e8,	// (0x00045e01) bg_button_pane_cp031

0xc90b,	// (0x00044024) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc90b,	// (0x00044024) cmail_ddmenu_btn03_pane_g1

0xc923,	// (0x0004403c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc923,	// (0x0004403c) cmail_ddmenu_btn03_pane_t1

0xa349,	// (0x00041a62) cell_dialer2_keypad_pane_t1_ParamLimits

0xa363,	// (0x00041a7c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa363,	// (0x00041a7c) cell_dialer2_keypad_pane_t1_copy1

0xbe17,	// (0x00043530) ncimui_group_button_pane

0x0c6c,	// (0x00038385) main_sp_fs_calendar_pane_ParamLimits

0xc5ea,	// (0x00043d03) list_single_cmail_header_caption_pane_ParamLimits

0x4f66,	// (0x0003c67f) aid_recal_txt_sm_pane

0xe6de,	// (0x00045df7) mian_recal_day_pane

0x4fa0,	// (0x0003c6b9) popup_sp_fs_cale_preview_window_ParamLimits

0xe73b,	// (0x00045e54) list_recal_day_pane

0x5152,	// (0x0003c86b) list_single_recal_day_pane_ParamLimits

0x5152,	// (0x0003c86b) list_single_recal_day_pane

0xe762,	// (0x00045e7b) list_single_recal_day_pane_g1_ParamLimits

0xe762,	// (0x00045e7b) list_single_recal_day_pane_g1

0x5164,	// (0x0003c87d) list_single_recal_day_pane_g2_ParamLimits

0x5164,	// (0x0003c87d) list_single_recal_day_pane_g2

0x5174,	// (0x0003c88d) list_single_recal_day_pane_g3_ParamLimits

0x5174,	// (0x0003c88d) list_single_recal_day_pane_g3

0x5180,	// (0x0003c899) list_single_recal_day_pane_g4_ParamLimits

0x5180,	// (0x0003c899) list_single_recal_day_pane_g4

0x5196,	// (0x0003c8af) list_single_recal_day_pane_g5_ParamLimits

0x5196,	// (0x0003c8af) list_single_recal_day_pane_g5

0x51b0,	// (0x0003c8c9) list_single_recal_day_pane_g6_ParamLimits

0x51b0,	// (0x0003c8c9) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00047550) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00047550) list_single_recal_day_pane_g

0x51c4,	// (0x0003c8dd) list_single_recal_day_pane_t1

0x51d6,	// (0x0003c8ef) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004755b) list_single_recal_day_pane_t

0xc947,	// (0x00044060) ncimui_query_button_pane_ParamLimits

0xc947,	// (0x00044060) ncimui_query_button_pane

0xc957,	// (0x00044070) ncimui_query_button_pane_t1_ParamLimits

0xc957,	// (0x00044070) ncimui_query_button_pane_t1

0xe76e,	// (0x00045e87) ncimui_query_button_pane_t2_ParamLimits

0xe76e,	// (0x00045e87) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00047560) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00047560) ncimui_query_button_pane_t

0xc96a,	// (0x00044083) query_button_pane_ParamLimits

0xc96a,	// (0x00044083) query_button_pane

0xe6de,	// (0x00045df7) bg_button_pane_cp0028

0xe781,	// (0x00045e9a) query_button_pane_t1

0x8775,	// (0x0003fe8e) main_tport_pane_ParamLimits

0xc4dc,	// (0x00043bf5) bg_popup_window_pane_cp01_ParamLimits

0xc4dc,	// (0x00043bf5) bg_popup_window_pane_cp01

0xc4ea,	// (0x00043c03) heading_pane_cp08_ParamLimits

0xc4ea,	// (0x00043c03) heading_pane_cp08

0xc4f8,	// (0x00043c11) heading_pane_cp07_ParamLimits

0xc4f8,	// (0x00043c11) heading_pane_cp07

0xc567,	// (0x00043c80) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000474ac) cell_tport_appsw_pane_g

0x4307,	// (0x0003ba20) input_candi_list_open_g1

0x0a41,	// (0x0003815a) list_cale_time_pane_g6_ParamLimits

0x0a41,	// (0x0003815a) list_cale_time_pane_g6

0x91f4,	// (0x0004090d) aid_size_touch_calib_1_ParamLimits

0x91f4,	// (0x0004090d) aid_size_touch_calib_1

0x9200,	// (0x00040919) aid_size_touch_calib_2_ParamLimits

0x9200,	// (0x00040919) aid_size_touch_calib_2

0x920e,	// (0x00040927) aid_size_touch_calib_3_ParamLimits

0x920e,	// (0x00040927) aid_size_touch_calib_3

0x921e,	// (0x00040937) aid_size_touch_calib_4_ParamLimits

0x921e,	// (0x00040937) aid_size_touch_calib_4

0x922c,	// (0x00040945) main_touch_calib_button_group_pane_ParamLimits

0x922c,	// (0x00040945) main_touch_calib_button_group_pane

0x923a,	// (0x00040953) main_touch_calib_pane_g1_ParamLimits

0x9246,	// (0x0004095f) main_touch_calib_pane_g2_ParamLimits

0x9252,	// (0x0004096b) main_touch_calib_pane_g3_ParamLimits

0x925e,	// (0x00040977) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x00046e75) main_touch_calib_pane_g_ParamLimits

0x926a,	// (0x00040983) main_touch_calib_pane_t1_ParamLimits

0x9283,	// (0x0004099c) main_touch_calib_pane_t2_ParamLimits

0x929c,	// (0x000409b5) main_touch_calib_pane_t3_ParamLimits

0x92b2,	// (0x000409cb) main_touch_calib_pane_t4_ParamLimits

0x92c8,	// (0x000409e1) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x00046e7e) main_touch_calib_pane_t_ParamLimits

0x2bbf,	// (0x0003a2d8) list_single_fp_cale_pane_g3_ParamLimits

0x2bbf,	// (0x0003a2d8) list_single_fp_cale_pane_g3

0x0c6c,	// (0x00038385) bg_button_pane_cp012_ParamLimits

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp03_ParamLimits

0xb105,	// (0x0004281e) cell_vitu2_function_top_pane_g1_ParamLimits

0x0c6c,	// (0x00038385) bg_vkb2_func_pane_cp04_ParamLimits

0xbd9f,	// (0x000434b8) main_ncimui_button_group_pane_ParamLimits

0xbd9f,	// (0x000434b8) main_ncimui_button_group_pane

0xbe05,	// (0x0004351e) main_ncimui_pane_t3_ParamLimits

0xbe05,	// (0x0004351e) main_ncimui_pane_t3

0xe51e,	// (0x00045c37) phacti_button_group_pane

0xe70a,	// (0x00045e23) aid_size_list_single_double_ParamLimits

0xc8ca,	// (0x00043fe3) popup_ezdial_listscroll_window_ParamLimits

0xc8eb,	// (0x00044004) popup_number_entry_window_cp01_ParamLimits

0xc977,	// (0x00044090) phacti_button_pane_ParamLimits

0xc977,	// (0x00044090) phacti_button_pane

0xe6de,	// (0x00045df7) bg_button_pane_cp14

0xe78f,	// (0x00045ea8) phacti_button_pane_t1

0xc988,	// (0x000440a1) main_touch_calib_button_pane_ParamLimits

0xc988,	// (0x000440a1) main_touch_calib_button_pane

0x045d,	// (0x00037b76) bg_button_pane_cp18_ParamLimits

0x045d,	// (0x00037b76) bg_button_pane_cp18

0xe79d,	// (0x00045eb6) main_touch_calib_button_pane_t1_ParamLimits

0xe79d,	// (0x00045eb6) main_touch_calib_button_pane_t1

0xe7b3,	// (0x00045ecc) main_touch_calib_button_pane_t2_ParamLimits

0xe7b3,	// (0x00045ecc) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00047565) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00047565) main_touch_calib_button_pane_t

0xe6de,	// (0x00045df7) cell_ncimui_button_pane

0xe6de,	// (0x00045df7) bg_button_pane_cp032

0xe7d1,	// (0x00045eea) cell_ncimui_button_pane_t1

0xa3bf,	// (0x00041ad8) image3_infobar_pane_ParamLimits

0xa3bf,	// (0x00041ad8) image3_infobar_pane

0xc17e,	// (0x00043897) fs_bigclock_status_pane_ParamLimits

0xc17e,	// (0x00043897) fs_bigclock_status_pane

0xc18b,	// (0x000438a4) main_fs_bigclock_clock_pane_ParamLimits

0xc18b,	// (0x000438a4) main_fs_bigclock_clock_pane

0xc1af,	// (0x000438c8) main_fs_bigclock_indi_pane_ParamLimits

0xc1af,	// (0x000438c8) main_fs_bigclock_indi_pane

0xc1df,	// (0x000438f8) main_fs_bigclock_swipe_pane_ParamLimits

0xc1df,	// (0x000438f8) main_fs_bigclock_swipe_pane

0xe6de,	// (0x00045df7) main_fs_clock_dumped_data

0xe065,	// (0x0004577e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe065,	// (0x0004577e) list_single_fs_bigclock_indicator_pane_g1

0xe07f,	// (0x00045798) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe07f,	// (0x00045798) list_single_fs_bigclock_indicator_pane_g2

0xe099,	// (0x000457b2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe099,	// (0x000457b2) list_single_fs_bigclock_indicator_pane_g3

0xe0b3,	// (0x000457cc) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b3,	// (0x000457cc) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x00047393) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x00047393) list_single_fs_bigclock_indicator_pane_g

0xe0dc,	// (0x000457f5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0dc,	// (0x000457f5) list_single_fs_bigclock_indicator_pane_t1

0xe104,	// (0x0004581d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe104,	// (0x0004581d) list_single_fs_bigclock_indicator_pane_t2

0xe12c,	// (0x00045845) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe12c,	// (0x00045845) list_single_fs_bigclock_indicator_pane_t3

0xe154,	// (0x0004586d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe154,	// (0x0004586d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0004739e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0004739e) list_single_fs_bigclock_indicator_pane_t

0xe7df,	// (0x00045ef8) image3_infobar_fav_pane_ParamLimits

0xe7df,	// (0x00045ef8) image3_infobar_fav_pane

0xe7ef,	// (0x00045f08) image3_infobar_loc_pane_ParamLimits

0xe7ef,	// (0x00045f08) image3_infobar_loc_pane

0xe803,	// (0x00045f1c) image3_infobar_time_pane_ParamLimits

0xe803,	// (0x00045f1c) image3_infobar_time_pane

0x2827,	// (0x00039f40) image3_infobar_time_pane_g1

0xe813,	// (0x00045f2c) image3_infobar_time_pane_t1

0x2827,	// (0x00039f40) image3_infobar_loc_pane_g1

0xe821,	// (0x00045f3a) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004756a) image3_infobar_loc_pane_g

0xe829,	// (0x00045f42) image3_infobar_loc_pane_t1

0x2827,	// (0x00039f40) image3_infobar_fav_pane_g1

0xe837,	// (0x00045f50) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004756f) image3_infobar_fav_pane_g

0xe83f,	// (0x00045f58) fs_bigclock_status_battery_pane

0xe848,	// (0x00045f61) fs_bigclock_status_signal_pane

0xe851,	// (0x00045f6a) fs_bigclock_status_title_pane

0xe85a,	// (0x00045f73) fs_bigclock_status_signal_pane_g1

0xe863,	// (0x00045f7c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00047574) fs_bigclock_status_signal_pane_g

0xe86b,	// (0x00045f84) fs_bigclock_status_battery_pane_g1

0xe874,	// (0x00045f8d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00047579) fs_bigclock_status_battery_pane_g

0xe87c,	// (0x00045f95) fs_bigclock_status_title_pane_t1

0x2827,	// (0x00039f40) main_fs_bigclock_clock_pane_g1

0xc998,	// (0x000440b1) main_fs_bigclock_clock_pane_g2

0xc998,	// (0x000440b1) main_fs_bigclock_clock_pane_g3

0xc998,	// (0x000440b1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004757e) main_fs_bigclock_clock_pane_g

0xc9a0,	// (0x000440b9) main_fs_bigclock_clock_pane_t1

0xc9ae,	// (0x000440c7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00047587) main_fs_bigclock_clock_pane_t

0xe88a,	// (0x00045fa3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe88a,	// (0x00045fa3) list_single_fs_bigclock_indicator_pane

0xc9bd,	// (0x000440d6) list_single_fs_bigclock_pane_ParamLimits

0xc9bd,	// (0x000440d6) list_single_fs_bigclock_pane

0xe8a4,	// (0x00045fbd) main_fs_bigclock_indicator_pane_t1

0xe8b3,	// (0x00045fcc) list_single_fs_bigclock_pane_g1

0xe8bb,	// (0x00045fd4) list_single_fs_bigclock_pane_t1

0x2827,	// (0x00039f40) main_fs_bigclock_swipe_pane_g1

0xe8fe,	// (0x00046017) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00047598) main_fs_bigclock_swipe_pane_g

0xe906,	// (0x0004601f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe906,	// (0x0004601f) main_fs_bigclock_swipe_pane_t1

0x7704,	// (0x0003ee1d) call_type_pane_ParamLimits

0xe6de,	// (0x00045df7) main_btmg_pane

0x5019,	// (0x0003c732) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5019,	// (0x0003c732) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004750b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004750b) list_single_cale_mrui_row_pane_g

0x5141,	// (0x0003c85a) list_recal_vselct_arw_lo_pane

0xe75a,	// (0x00045e73) list_recal_vselct_arw_up_pane

0x5149,	// (0x0003c862) list_recal_vselct_pane

0xca1e,	// (0x00044137) btmg_button_pane

0xca2a,	// (0x00044143) main_btmg_pane_g1

0xe6de,	// (0x00045df7) bg_button_pane_cp044

0xe923,	// (0x0004603c) btmg_button_pane_t1

0x240b,	// (0x00039b24) aid_listscroll_gen

0x0c6c,	// (0x00038385) main_cntbar_detail_pane

0xe467,	// (0x00045b80) list_cmail_folder_pane

0xe477,	// (0x00045b90) sp_fs_scroll_pane_cp03_ParamLimits

0x51e8,	// (0x0003c901) list_single_fs_dyc_pane_cp01_ParamLimits

0x51e8,	// (0x0003c901) list_single_fs_dyc_pane_cp01

0xe931,	// (0x0004604a) aid_size_cmail_indent

0x5214,	// (0x0003c92d) list_single_dyc_row_pane_cp01

0xca52,	// (0x0004416b) cntbar_detail_list_pane_ParamLimits

0xca52,	// (0x0004416b) cntbar_detail_list_pane

0xca8c,	// (0x000441a5) main_cntbar_detail_cont_pane_ParamLimits

0xca8c,	// (0x000441a5) main_cntbar_detail_cont_pane

0x76f8,	// (0x0003ee11) scroll_pane_cp032_ParamLimits

0x76f8,	// (0x0003ee11) scroll_pane_cp032

0xca98,	// (0x000441b1) cntbar_detail_list_event_pane_ParamLimits

0xca98,	// (0x000441b1) cntbar_detail_list_event_pane

0xca5e,	// (0x00044177) cntbar_detail_list_shct_pane

0x08cc,	// (0x00037fe5) aid_list_gen

0xe93a,	// (0x00046053) aid_scroll

0xe943,	// (0x0004605c) aid_size_touch_scroll_bar

0xb64f,	// (0x00042d68) aid_list_double

0x521d,	// (0x0003c936) aid_list_single

0xb646,	// (0x00042d5f) aid_list_single_lg

0x5226,	// (0x0003c93f) aid_list_z_g_a_sm

0x522e,	// (0x0003c947) aid_list_z_g_d

0x5236,	// (0x0003c94f) aid_txt_z_prm

0x5244,	// (0x0003c95d) aid_txt_z_prm_cp01

0x5252,	// (0x0003c96b) aid_txt_z_sec

0xcaac,	// (0x000441c5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcaac,	// (0x000441c5) main_cntbar_detail_cont_pane_g1

0xcab9,	// (0x000441d2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcab9,	// (0x000441d2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004759d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004759d) main_cntbar_detail_cont_pane_g

0xe94c,	// (0x00046065) main_cntbar_detail_cont_pane_t1

0xe95a,	// (0x00046073) main_cntbar_detail_cont_pane_t2

0xe968,	// (0x00046081) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000475a2) main_cntbar_detail_cont_pane_t

0xcac5,	// (0x000441de) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcac5,	// (0x000441de) cell_cntbar_detail_list_shct_pane

0xe976,	// (0x0004608f) cntbar_detail_list_shct_pane_g1

0xe97f,	// (0x00046098) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000475a9) cntbar_detail_list_shct_pane_g

0xcad9,	// (0x000441f2) cntbar_detail_list_event_pane_g1_ParamLimits

0xcad9,	// (0x000441f2) cntbar_detail_list_event_pane_g1

0xcae5,	// (0x000441fe) cntbar_detail_list_event_pane_g2_ParamLimits

0xcae5,	// (0x000441fe) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000475ae) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000475ae) cntbar_detail_list_event_pane_g

0xcb51,	// (0x0004426a) cntbar_detail_list_event_pane_t1_ParamLimits

0xcb51,	// (0x0004426a) cntbar_detail_list_event_pane_t1

0xcb66,	// (0x0004427f) cntbar_detail_list_event_pane_t2_ParamLimits

0xcb66,	// (0x0004427f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000475bb) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000475bb) cntbar_detail_list_event_pane_t

0x2827,	// (0x00039f40) cell_cntbar_detail_list_shct_pane_g1

0x7aa4,	// (0x0003f1bd) navi_pane_mv_g3

0x0c6c,	// (0x00038385) main_cntbar_detail_pane_ParamLimits

0xe6de,	// (0x00045df7) main_notif_wgt_pane

0xa073,	// (0x0004178c) aid_tch_main_mp4_pane_g4

0xa2a8,	// (0x000419c1) popup_slider_window_cp02

0x5137,	// (0x0003c850) list_recal_day_event_pane

0xca32,	// (0x0004414b) cntbar_detail_btn_pane_ParamLimits

0xca32,	// (0x0004414b) cntbar_detail_btn_pane

0xca42,	// (0x0004415b) cntbar_detail_btn_pane_cp01_ParamLimits

0xca42,	// (0x0004415b) cntbar_detail_btn_pane_cp01

0xca5e,	// (0x00044177) cntbar_detail_list_shct_pane_ParamLimits

0xca6a,	// (0x00044183) cntbar_detail_pane_g1_ParamLimits

0xca6a,	// (0x00044183) cntbar_detail_pane_g1

0xca76,	// (0x0004418f) cntbar_detail_pane_t1_ParamLimits

0xca76,	// (0x0004418f) cntbar_detail_pane_t1

0xcaf1,	// (0x0004420a) cntbar_detail_list_event_pane_g3_ParamLimits

0xcaf1,	// (0x0004420a) cntbar_detail_list_event_pane_g3

0xcb09,	// (0x00044222) cntbar_detail_list_event_pane_g4_ParamLimits

0xcb09,	// (0x00044222) cntbar_detail_list_event_pane_g4

0xcb21,	// (0x0004423a) cntbar_detail_list_event_pane_g5_ParamLimits

0xcb21,	// (0x0004423a) cntbar_detail_list_event_pane_g5

0xcb39,	// (0x00044252) cntbar_detail_list_event_pane_g6_ParamLimits

0xcb39,	// (0x00044252) cntbar_detail_list_event_pane_g6

0xcb7b,	// (0x00044294) cntbar_detail_list_event_pane_t3_ParamLimits

0xcb7b,	// (0x00044294) cntbar_detail_list_event_pane_t3

0xcb8d,	// (0x000442a6) popup_notif_wgt_window_ParamLimits

0xcb8d,	// (0x000442a6) popup_notif_wgt_window

0xcb9d,	// (0x000442b6) popup_submenu_window_cp01_ParamLimits

0xcb9d,	// (0x000442b6) popup_submenu_window_cp01

0x0fa1,	// (0x000386ba) bg_popup_window_pane_cp10

0xe988,	// (0x000460a1) listscroll_notif_wgt_pane

0xe99a,	// (0x000460b3) list_notif_wgt_window

0xe9a3,	// (0x000460bc) scroll_pane_cp033

0xcbaf,	// (0x000442c8) list_notif_wgt_row_pane_ParamLimits

0xcbaf,	// (0x000442c8) list_notif_wgt_row_pane

0xe9ac,	// (0x000460c5) aid_size_list_notif_wgt_del

0xe9b9,	// (0x000460d2) list_notif_wgt_row_pane_g1

0xe9c5,	// (0x000460de) list_notif_wgt_row_pane_g2

0xe9d1,	// (0x000460ea) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000475c2) list_notif_wgt_row_pane_g

0xe9de,	// (0x000460f7) list_notif_wgt_row_pane_t1

0xe9f3,	// (0x0004610c) list_notif_wgt_row_pane_t2

0xea05,	// (0x0004611e) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000475c9) list_notif_wgt_row_pane_t

0xd556,	// (0x00044c6f) list_recal_day_event_pane_g1

0xea17,	// (0x00046130) list_recal_day_event_pane_t1

0xe6de,	// (0x00045df7) bg_button_pane_cp045

0xcbc0,	// (0x000442d9) cntbar_detail_btn_pane_t1

0x241f,	// (0x00039b38) main_callh_pane_ParamLimits

0x241f,	// (0x00039b38) main_callh_pane

0xe6de,	// (0x00045df7) main_coverflow0_pane

0xe6de,	// (0x00045df7) main_wgtman_pane

0xc1f7,	// (0x00043910) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc1f7,	// (0x00043910) main_fs_bigclock_unlock_btn_pane

0xc55f,	// (0x00043c78) bg_button_pane_cp16

0xc56f,	// (0x00043c88) cell_tport_appsw_pane_g3

0xcbce,	// (0x000442e7) cf0_flow_pane_ParamLimits

0xcbce,	// (0x000442e7) cf0_flow_pane

0xea26,	// (0x0004613f) listscroll_cf0_pane

0xea31,	// (0x0004614a) main_cf0_pane_g1

0xcbdd,	// (0x000442f6) main_cf0_pane_t1_ParamLimits

0xcbdd,	// (0x000442f6) main_cf0_pane_t1

0xcbf1,	// (0x0004430a) main_cf0_pane_t2_ParamLimits

0xcbf1,	// (0x0004430a) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000475d5) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000475d5) main_cf0_pane_t

0xea43,	// (0x0004615c) scroll_pane_cp11

0xcc05,	// (0x0004431e) cf0_flow_pane_g1

0xcc0d,	// (0x00044326) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000475da) cf0_flow_pane_g

0xcc15,	// (0x0004432e) cf0_flow_pane_t1

0xe6de,	// (0x00045df7) main_call6_pane

0xe6de,	// (0x00045df7) main_calllock_pane

0xcc23,	// (0x0004433c) call6_btn_grp_pane_ParamLimits

0xcc23,	// (0x0004433c) call6_btn_grp_pane

0xcc32,	// (0x0004434b) call6_pane_g1_ParamLimits

0xcc32,	// (0x0004434b) call6_pane_g1

0xcc41,	// (0x0004435a) popup_call6_1st_window_ParamLimits

0xcc41,	// (0x0004435a) popup_call6_1st_window

0xcc4f,	// (0x00044368) popup_call6_2nd_window_ParamLimits

0xcc4f,	// (0x00044368) popup_call6_2nd_window

0xcc5d,	// (0x00044376) cell_call6_btn_pane_ParamLimits

0xcc5d,	// (0x00044376) cell_call6_btn_pane

0x0fa1,	// (0x000386ba) bg_popup_call2_in_pane_cp03

0xea4e,	// (0x00046167) popup_call6_1st_window_g1

0xea56,	// (0x0004616f) popup_call6_1st_window_g2

0xea5e,	// (0x00046177) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000475df) popup_call6_1st_window_g

0xea66,	// (0x0004617f) popup_call6_1st_window_t1

0xea75,	// (0x0004618e) popup_call6_1st_window_t2

0xea85,	// (0x0004619e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000475e6) popup_call6_1st_window_t

0x0fa1,	// (0x000386ba) bg_popup_call2_in_pane_cp04

0xea4e,	// (0x00046167) popup_call6_2nd_window_g1

0xea56,	// (0x0004616f) popup_call6_2nd_window_g2

0xea5e,	// (0x00046177) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000475df) popup_call6_2nd_window_g

0xea66,	// (0x0004617f) popup_call6_2nd_window_t1

0xe6de,	// (0x00045df7) bg_button_pane_cp15

0xea95,	// (0x000461ae) cell_call6_btn_pane_g1

0xea9e,	// (0x000461b7) cell_call6_btn_pane_t1

0xcc6c,	// (0x00044385) listscroll_wgtman_pane_ParamLimits

0xcc6c,	// (0x00044385) listscroll_wgtman_pane

0xcc8a,	// (0x000443a3) wgtman_btn_pane_ParamLimits

0xcc8a,	// (0x000443a3) wgtman_btn_pane

0x0e58,	// (0x00038571) aid_scroll_copy1

0xeaad,	// (0x000461c6) list_wgtman_pane

0xccbf,	// (0x000443d8) wgtman_btn_pane_g1_ParamLimits

0xccbf,	// (0x000443d8) wgtman_btn_pane_g1

0xcce7,	// (0x00044400) wgtman_btn_pane_t1_ParamLimits

0xcce7,	// (0x00044400) wgtman_btn_pane_t1

0xeab7,	// (0x000461d0) wgtman_btn_pane_t2_ParamLimits

0xeab7,	// (0x000461d0) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000475ed) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000475ed) wgtman_btn_pane_t

0xcd1e,	// (0x00044437) listrow_wgtman_pane_ParamLimits

0xcd1e,	// (0x00044437) listrow_wgtman_pane

0xcd36,	// (0x0004444f) listrow_wgtman_pane_g1

0xcd43,	// (0x0004445c) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000475f2) listrow_wgtman_pane_g

0x5260,	// (0x0003c979) listrow_wgtman_pane_t1

0x5278,	// (0x0003c991) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000475f7) listrow_wgtman_pane_t

0x529e,	// (0x0003c9b7) wait_bar_pane_cp09

0xeace,	// (0x000461e7) main_calllock_btn_pane

0xead8,	// (0x000461f1) main_calllock_pane_g1

0xe6de,	// (0x00045df7) bg_button_pane_cp17

0xeae4,	// (0x000461fd) main_calllock_btn_pane_g1

0xeaed,	// (0x00046206) main_calllock_btn_pane_t1

0xe6de,	// (0x00045df7) main_dialer3_pane

0xe6de,	// (0x00045df7) main_fmrd2_pane

0x2827,	// (0x00039f40) main_fs_bigclock_unlock_btn_pane_g1

0xeb04,	// (0x0004621d) main_fs_bigclock_unlock_btn_pane_t1

0xcd61,	// (0x0004447a) area_fmrd2_info_pane_ParamLimits

0xcd61,	// (0x0004447a) area_fmrd2_info_pane

0xcd6f,	// (0x00044488) area_fmrd2_visual_pane_ParamLimits

0xcd6f,	// (0x00044488) area_fmrd2_visual_pane

0xcd7d,	// (0x00044496) fmrd2_indi_pane_ParamLimits

0xcd7d,	// (0x00044496) fmrd2_indi_pane

0xcd8a,	// (0x000444a3) area_fmrd2_visual_pane_g1

0xcd92,	// (0x000444ab) area_fmrd2_visual_pane_t1

0xcda2,	// (0x000444bb) area_fmrd2_visual_pane_t2

0xcdb2,	// (0x000444cb) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00047601) area_fmrd2_visual_pane_t

0xcdc2,	// (0x000444db) area_fmrd2_info_pane_g1

0xcdca,	// (0x000444e3) area_fmrd2_info_pane_t1

0xcdda,	// (0x000444f3) area_fmrd2_info_pane_t2

0xcdea,	// (0x00044503) area_fmrd2_info_pane_t3

0xcdfa,	// (0x00044513) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00047608) area_fmrd2_info_pane_t

0xce08,	// (0x00044521) fmrd2_indi_pane_t1

0xce18,	// (0x00044531) fmrd2_indi_pane_t2

0xce28,	// (0x00044541) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00047611) fmrd2_indi_pane_t

0xe0c2,	// (0x000457db) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c2,	// (0x000457db) list_single_fs_bigclock_indicator_pane_g5

0xe169,	// (0x00045882) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe169,	// (0x00045882) list_single_fs_bigclock_indicator_pane_t5

0xc6ee,	// (0x00043e07) aid_cell_bcale_month_pane_ParamLimits

0xc6ee,	// (0x00043e07) aid_cell_bcale_month_pane

0xc70c,	// (0x00043e25) bcale_month_pane_ParamLimits

0xc70c,	// (0x00043e25) bcale_month_pane

0xc72a,	// (0x00043e43) bcale_preview_pane_ParamLimits

0xc72a,	// (0x00043e43) bcale_preview_pane

0xe8bb,	// (0x00045fd4) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8da,	// (0x00045ff3) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8da,	// (0x00045ff3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00047593) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00047593) list_single_fs_bigclock_pane_t

0xeafc,	// (0x00046215) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000475fc) main_fs_bigclock_unlock_btn_pane_g

0xce36,	// (0x0004454f) aid_dia3_key_size_ParamLimits

0xce36,	// (0x0004454f) aid_dia3_key_size

0xce42,	// (0x0004455b) aid_dia3_listrow_size_ParamLimits

0xce42,	// (0x0004455b) aid_dia3_listrow_size

0xce52,	// (0x0004456b) dia3_keypad_fun_pane_ParamLimits

0xce52,	// (0x0004456b) dia3_keypad_fun_pane

0xce64,	// (0x0004457d) dia3_keypad_num_pane_ParamLimits

0xce64,	// (0x0004457d) dia3_keypad_num_pane

0xce76,	// (0x0004458f) dia3_listscroll_pane_ParamLimits

0xce76,	// (0x0004458f) dia3_listscroll_pane

0xce84,	// (0x0004459d) dia3_numentry_pane_ParamLimits

0xce84,	// (0x0004459d) dia3_numentry_pane

0xeb12,	// (0x0004622b) dia3_list_pane

0xeb1d,	// (0x00046236) scroll_pane_cp12

0xe6de,	// (0x00045df7) bg_dia3_numentry_pane

0xce92,	// (0x000445ab) dia3_numentry_pane_t1

0xcea1,	// (0x000445ba) cell_dia3_key_num_pane

0xcea9,	// (0x000445c2) cell_dia3_key0_fun_pane_ParamLimits

0xcea9,	// (0x000445c2) cell_dia3_key0_fun_pane

0xceb6,	// (0x000445cf) cell_dia3_key1_fun_pane_ParamLimits

0xceb6,	// (0x000445cf) cell_dia3_key1_fun_pane

0xcec3,	// (0x000445dc) dia3_listrow_pane

0xddd2,	// (0x000454eb) bg_dia3_numentry_pane_g1

0xe6de,	// (0x00045df7) bg_button_pane_cp21

0xeb28,	// (0x00046241) cell_dia3_key_num_pane_t1

0xeb36,	// (0x0004624f) cell_dia3_key_num_pane_t2

0xeb45,	// (0x0004625e) cell_dia3_key_num_pane_t3

0xeb54,	// (0x0004626d) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00047618) cell_dia3_key_num_pane_t

0xe6de,	// (0x00045df7) bg_button_pane_cp19

0xced0,	// (0x000445e9) cell_dia3_key0_fun_pane_g1

0xe6de,	// (0x00045df7) bg_button_pane_cp20

0xced8,	// (0x000445f1) cell_dia3_key1_fun_pane_g1

0xcee0,	// (0x000445f9) area_left_week_number_pane

0xcef3,	// (0x0004460c) area_top_day_name_pane

0xcf01,	// (0x0004461a) frame_month_view_pane

0xeb63,	// (0x0004627c) grid_month_view_pane

0xcf16,	// (0x0004462f) cell_top_day_name_pane_ParamLimits

0xcf16,	// (0x0004462f) cell_top_day_name_pane

0xcf30,	// (0x00044649) cell_area_left_week_number_pane_ParamLimits

0xcf30,	// (0x00044649) cell_area_left_week_number_pane

0xcf53,	// (0x0004466c) cell_month_view_pane_ParamLimits

0xcf53,	// (0x0004466c) cell_month_view_pane

0xeb71,	// (0x0004628a) frm_month_g1

0xcf7f,	// (0x00044698) frm_month_g2

0xcf90,	// (0x000446a9) frm_month_g3

0xcfa1,	// (0x000446ba) frm_month_g4

0xcfb2,	// (0x000446cb) frm_month_g5

0xcfc5,	// (0x000446de) frm_month_g6

0xcfd8,	// (0x000446f1) frm_month_g7

0xeb7e,	// (0x00046297) frm_month_g8

0xcfeb,	// (0x00044704) frm_month_g9

0xcff8,	// (0x00044711) frm_month_g10

0xd005,	// (0x0004471e) frm_month_g11

0xd012,	// (0x0004472b) frm_month_g12

0xd01f,	// (0x00044738) frm_month_g13

0xd02c,	// (0x00044745) frm_month_g14

0xd03b,	// (0x00044754) frm_month_g15

0xd04a,	// (0x00044763) frm_month_g16

0x000f,

0xff08,	// (0x00047621) frm_month_g

0xeb8b,	// (0x000462a4) cell_top_day_name_pane_t1

0xd059,	// (0x00044772) cell_area_left_week_number_pane_g1

0xd068,	// (0x00044781) cell_area_left_week_number_pane_t1

0x2a93,	// (0x0003a1ac) cell_month_view_pane_g1

0xd07e,	// (0x00044797) cell_month_view_pane_t1

0xe6de,	// (0x00045df7) main_fps_pane

0xe359,	// (0x00045a72) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe359,	// (0x00045a72) cmail_ddmenu_btn02_pane_cp1

0xe375,	// (0x00045a8e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe375,	// (0x00045a8e) cmail_ddmenu_btn02_pane_cp2

0xc917,	// (0x00044030) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc917,	// (0x00044030) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00047546) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00047546) cmail_ddmenu_btn02_pane_g

0xc935,	// (0x0004404e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc935,	// (0x0004404e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004754b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004754b) cmail_ddmenu_btn02_pane_t

0xd094,	// (0x000447ad) fps_text_pane_ParamLimits

0xd094,	// (0x000447ad) fps_text_pane

0xd0a1,	// (0x000447ba) main_fps_pane_g1_ParamLimits

0xd0a1,	// (0x000447ba) main_fps_pane_g1

0xd0af,	// (0x000447c8) wait_bar_pane_cp010_ParamLimits

0xd0af,	// (0x000447c8) wait_bar_pane_cp010

0xd0bb,	// (0x000447d4) fps_text_pane_t1_ParamLimits

0xd0bb,	// (0x000447d4) fps_text_pane_t1

0xa68a,	// (0x00041da3) cam4_image_uncrop_pane_g1

0xa693,	// (0x00041dac) cam4_image_uncrop_pane_g2

0xa69c,	// (0x00041db5) cam4_image_uncrop_pane_g3

0xa6a5,	// (0x00041dbe) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0004700d) cam4_image_uncrop_pane_g

0xcec3,	// (0x000445dc) dia3_listrow_pane_ParamLimits

0xe6de,	// (0x00045df7) main_phob2_pane

0xc541,	// (0x00043c5a) cell_tport_appsw_pane_cp02_ParamLimits

0xc541,	// (0x00043c5a) cell_tport_appsw_pane_cp02

0xc550,	// (0x00043c69) cell_tport_appsw_pane_cp03_ParamLimits

0xc550,	// (0x00043c69) cell_tport_appsw_pane_cp03

0xe6de,	// (0x00045df7) phob2_contact_card_pane

0xe6de,	// (0x00045df7) phob2_listscroll_pane

0xeb9e,	// (0x000462b7) phob2_list_pane

0xeba6,	// (0x000462bf) scroll_pane_cp034

0xd0d4,	// (0x000447ed) phob2_cc_data_pane_ParamLimits

0xd0d4,	// (0x000447ed) phob2_cc_data_pane

0xd0ee,	// (0x00044807) phob2_cc_listscroll_pane_ParamLimits

0xd0ee,	// (0x00044807) phob2_cc_listscroll_pane

0xd108,	// (0x00044821) list_double_large_graphic_phob2_pane_ParamLimits

0xd108,	// (0x00044821) list_double_large_graphic_phob2_pane

0xd126,	// (0x0004483f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd126,	// (0x0004483f) list_double_large_graphic_phob2_pane_g1

0x52b0,	// (0x0003c9c9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x52b0,	// (0x0003c9c9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00047642) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00047642) list_double_large_graphic_phob2_pane_g

0x52bc,	// (0x0003c9d5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x52bc,	// (0x0003c9d5) list_double_large_graphic_phob2_pane_t1

0x52d1,	// (0x0003c9ea) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x52d1,	// (0x0003c9ea) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00047647) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00047647) list_double_large_graphic_phob2_pane_t

0xe6de,	// (0x00045df7) list_highlight_pane_cp024

0xebae,	// (0x000462c7) phob2_cc_button_pane

0xd13c,	// (0x00044855) phob2_cc_data_pane_g1_ParamLimits

0xd13c,	// (0x00044855) phob2_cc_data_pane_g1

0xd148,	// (0x00044861) phob2_cc_data_pane_g2_ParamLimits

0xd148,	// (0x00044861) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004764c) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004764c) phob2_cc_data_pane_g

0xd154,	// (0x0004486d) phob2_cc_data_pane_t1_ParamLimits

0xd154,	// (0x0004486d) phob2_cc_data_pane_t1

0xd166,	// (0x0004487f) phob2_cc_data_pane_t2_ParamLimits

0xd166,	// (0x0004487f) phob2_cc_data_pane_t2

0xd178,	// (0x00044891) phob2_cc_data_pane_t3_ParamLimits

0xd178,	// (0x00044891) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00047651) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00047651) phob2_cc_data_pane_t

0xebb6,	// (0x000462cf) phob2_cc_list_pane_ParamLimits

0xebb6,	// (0x000462cf) phob2_cc_list_pane

0xdcf5,	// (0x0004540e) scroll_pane_cp035_ParamLimits

0xdcf5,	// (0x0004540e) scroll_pane_cp035

0x0c6c,	// (0x00038385) bg_button_pane_cp033

0xebc2,	// (0x000462db) phob2_cc_button_pane_g1

0xebce,	// (0x000462e7) phob2_cc_button_pane_t1

0xebe3,	// (0x000462fc) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00047658) phob2_cc_button_pane_t

0xd18a,	// (0x000448a3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd18a,	// (0x000448a3) list_double_large_graphic_phob2_cc_pane

0xd1b1,	// (0x000448ca) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd1b1,	// (0x000448ca) list_double_large_graphic_phob2_cc_pane_g1

0x52e3,	// (0x0003c9fc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x52e3,	// (0x0003c9fc) list_double_large_graphic_phob2_cc_pane_g2

0x52ef,	// (0x0003ca08) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x52ef,	// (0x0003ca08) list_double_large_graphic_phob2_cc_pane_g3

0x52fb,	// (0x0003ca14) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x52fb,	// (0x0003ca14) list_double_large_graphic_phob2_cc_pane_g4

0x5307,	// (0x0003ca20) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5307,	// (0x0003ca20) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004765d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004765d) list_double_large_graphic_phob2_cc_pane_g

0x5313,	// (0x0003ca2c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5313,	// (0x0003ca2c) list_double_large_graphic_phob2_cc_pane_t1

0x533c,	// (0x0003ca55) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x533c,	// (0x0003ca55) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00047668) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00047668) list_double_large_graphic_phob2_cc_pane_t

0xebf5,	// (0x0004630e) list_highlight_pane_cp025_ParamLimits

0xebf5,	// (0x0004630e) list_highlight_pane_cp025

0x0c6c,	// (0x00038385) bg_button_pane_cp033_ParamLimits

0xebc2,	// (0x000462db) phob2_cc_button_pane_g1_ParamLimits

0xebce,	// (0x000462e7) phob2_cc_button_pane_t1_ParamLimits

0xebe3,	// (0x000462fc) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00047658) phob2_cc_button_pane_t_ParamLimits

0x563c,	// (0x0003cd55) popup_wgtman_window

0xd429,	// (0x00044b42) scroll_pane_cp038

0xcca7,	// (0x000443c0) wgtman_btn_pane_cp_01_ParamLimits

0xcca7,	// (0x000443c0) wgtman_btn_pane_cp_01

0xec03,	// (0x0004631c) wgtman_content_pane

0xec0c,	// (0x00046325) wgtman_heading_pane

0xe6de,	// (0x00045df7) bg_heading_pane_cp02

0xec15,	// (0x0004632e) wgtman_heading_pane_g1

0xec1d,	// (0x00046336) wgtman_heading_pane_t1

0xec2b,	// (0x00046344) scroll_pane_cp036

0xec33,	// (0x0004634c) wgtman_list_pane

0xec3b,	// (0x00046354) wgtman_list_pane_t1_ParamLimits

0xec3b,	// (0x00046354) wgtman_list_pane_t1

0xa5e9,	// (0x00041d02) cam4_grid_pane

0x45d5,	// (0x0003bcee) bg_button_pane_cp015_ParamLimits

0xb27f,	// (0x00042998) bg_button_pane_cp016_ParamLimits

0xb292,	// (0x000429ab) bg_button_pane_cp017_ParamLimits

0x4619,	// (0x0003bd32) popup_vitu2_query_window_g3_ParamLimits

0x4619,	// (0x0003bd32) popup_vitu2_query_window_g3

0x4692,	// (0x0003bdab) popup_vitu2_query_window_t6_ParamLimits

0x4692,	// (0x0003bdab) popup_vitu2_query_window_t6

0x46bd,	// (0x0003bdd6) popup_vitu2_query_window_t7_ParamLimits

0x46bd,	// (0x0003bdd6) popup_vitu2_query_window_t7

0xe6cc,	// (0x00045de5) cam4_grid_pane_g1

0xe6d5,	// (0x00045dee) cam4_grid_pane_g2

0xec55,	// (0x0004636e) cam4_grid_pane_g3

0xec5e,	// (0x00046377) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004766d) cam4_grid_pane_g

0x648a,	// (0x0003dba3) aid_placing_vt_slider_lsc_ParamLimits

0x67d6,	// (0x0003deef) vidtel_button_pane_ParamLimits

0x67d6,	// (0x0003deef) vidtel_button_pane

0xec69,	// (0x00046382) bg_button_pane_cp034

0xd1c2,	// (0x000448db) vidtel_button_pane_g1

0xec73,	// (0x0004638c) vidtel_button_pane_t1

0xd546,	// (0x00044c5f) aid_size_vtel_slider_touch

0xdcf5,	// (0x0004540e) scroll_pane_cp039

0xde10,	// (0x00045529) ncim_query_button_pane_cp01_ParamLimits

0xde2f,	// (0x00045548) ncimui_query_pane_g1_ParamLimits

0x0c6c,	// (0x00038385) input_focus_pane_cp012_ParamLimits

0xde54,	// (0x0004556d) ncim_query_entry_pane_t1_ParamLimits

0xdcf5,	// (0x0004540e) scroll_pane_cp039_ParamLimits

0x7a16,	// (0x0003f12f) navi_pane_bcale_mc_g1

0x7a1e,	// (0x0003f137) navi_pane_bcale_mc_t1

0xe3be,	// (0x00045ad7) main_sp_fs_email_pane_g1

0xe3ca,	// (0x00045ae3) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x00047404) main_sp_fs_email_pane_g

0xe63a,	// (0x00045d53) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe63a,	// (0x00045d53) list_single_cale_mrui_row_pane_g3

0x51a6,	// (0x0003c8bf) list_single_recal_day_pane_g5_event_pane

0x51bc,	// (0x0003c8d5) list_single_recal_day_pane_g7

0xec81,	// (0x0004639a) list_recal_day_event_pane_cp01

0xec8a,	// (0x000463a3) list_recal_vselct_arw_lo_pane_cp01

0xec92,	// (0x000463ab) list_recal_vselct_arw_up_pane_cp01

0xec9a,	// (0x000463b3) list_recal_vselct_pane_cp01

0xd556,	// (0x00044c6f) list_recal_day_event_pane_cp01_g1

0x5365,	// (0x0003ca7e) list_recal_day_event_pane_cp01_t1

0x51c4,	// (0x0003c8dd) list_single_recal_day_pane_t1_ParamLimits

0x51d6,	// (0x0003c8ef) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004755b) list_single_recal_day_pane_t_ParamLimits

0x0398,	// (0x00037ab1) bg_notes_pane_ParamLimits

0x043b,	// (0x00037b54) list_notes_pane_ParamLimits

0x599a,	// (0x0003d0b3) scroll_pane_cp06_ParamLimits

0x045d,	// (0x00037b76) main_notes_pane_ParamLimits

0xe6de,	// (0x00045df7) main_welc_pane

0xd1ca,	// (0x000448e3) main_welc_body_pane_ParamLimits

0xd1ca,	// (0x000448e3) main_welc_body_pane

0xd1e4,	// (0x000448fd) main_welc_opti_pane_ParamLimits

0xd1e4,	// (0x000448fd) main_welc_opti_pane

0xd217,	// (0x00044930) main_welc_pane_t1_ParamLimits

0xd217,	// (0x00044930) main_welc_pane_t1

0xd231,	// (0x0004494a) main_welc_body_row_pane_ParamLimits

0xd231,	// (0x0004494a) main_welc_body_row_pane

0xe6e8,	// (0x00045e01) main_welc_opti_row_pane_ParamLimits

0xe6e8,	// (0x00045e01) main_welc_opti_row_pane

0xeca4,	// (0x000463bd) main_welc_opti_row_pane_g1

0xecac,	// (0x000463c5) main_welc_opti_row_pane_t1

0xecbc,	// (0x000463d5) main_welc_body_row_pane_t1

0xe992,	// (0x000460ab) popup_notif_wgt_heading_pane

0xe9ac,	// (0x000460c5) aid_size_list_notif_wgt_del_ParamLimits

0xe9b9,	// (0x000460d2) list_notif_wgt_row_pane_g1_ParamLimits

0xe9c5,	// (0x000460de) list_notif_wgt_row_pane_g2_ParamLimits

0xe9d1,	// (0x000460ea) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000475c2) list_notif_wgt_row_pane_g_ParamLimits

0xe9de,	// (0x000460f7) list_notif_wgt_row_pane_t1_ParamLimits

0xe9f3,	// (0x0004610c) list_notif_wgt_row_pane_t2_ParamLimits

0xea05,	// (0x0004611e) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000475c9) list_notif_wgt_row_pane_t_ParamLimits

0xcd36,	// (0x0004444f) listrow_wgtman_pane_g1_ParamLimits

0xcd43,	// (0x0004445c) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000475f2) listrow_wgtman_pane_g_ParamLimits

0x5260,	// (0x0003c979) listrow_wgtman_pane_t1_ParamLimits

0x5278,	// (0x0003c991) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000475f7) listrow_wgtman_pane_t_ParamLimits

0x529e,	// (0x0003c9b7) wait_bar_pane_cp09_ParamLimits

0xe6de,	// (0x00045df7) bg_popup_heading_pane_cp02

0xeccb,	// (0x000463e4) popup_notif_wgt_heading_pane_g1

0xecd3,	// (0x000463ec) popup_notif_wgt_heading_pane_t1

0xe6de,	// (0x00045df7) main_vids_pane

0xe6de,	// (0x00045df7) vids_listscroll_pane

0xd256,	// (0x0004496f) scroll_pane_cp040

0xe6de,	// (0x00045df7) vids_list_pane

0xd261,	// (0x0004497a) vids_list_double_pane_ParamLimits

0xd261,	// (0x0004497a) vids_list_double_pane

0xd27b,	// (0x00044994) vids_list_double_pane_g1

0xd284,	// (0x0004499d) vids_list_double_pane_t1

0xd294,	// (0x000449ad) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004767b) vids_list_double_pane_t

0x0c6c,	// (0x00038385) main_ncimui_pane_ParamLimits

0xbdb7,	// (0x000434d0) main_ncimui_pane_g1_ParamLimits

0xbdc3,	// (0x000434dc) main_ncimui_pane_g2_ParamLimits

0xbdc3,	// (0x000434dc) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x00047309) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x00047309) main_ncimui_pane_g

0xd1fd,	// (0x00044916) main_welc_pane_g1_ParamLimits

0xd1fd,	// (0x00044916) main_welc_pane_g1

0xd209,	// (0x00044922) main_welc_pane_g2_ParamLimits

0xd209,	// (0x00044922) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00047676) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00047676) main_welc_pane_g

0x0398,	// (0x00037ab1) listscroll_mce_pane_ParamLimits

0x7ae0,	// (0x0003f1f9) wait_bar_pane_cp10

0x2413,	// (0x00039b2c) main_cale_day_pane_ParamLimits

0x2413,	// (0x00039b2c) main_cale_week_pane_ParamLimits

0x0398,	// (0x00037ab1) main_messa_pane_ParamLimits

0x9a49,	// (0x00041162) main_clock2_btn_pane_ParamLimits

0x9a49,	// (0x00041162) main_clock2_btn_pane

0x2c47,	// (0x0003a360) main_clock2_btn_pane_cp01_ParamLimits

0x2c47,	// (0x0003a360) main_clock2_btn_pane_cp01

0xe60b,	// (0x00045d24) list_cale_mrui_pane_ParamLimits

0xea3b,	// (0x00046154) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000475d0) main_cf0_pane_g

0xcee0,	// (0x000445f9) area_left_week_number_pane_ParamLimits

0xcef3,	// (0x0004460c) area_top_day_name_pane_ParamLimits

0xcf01,	// (0x0004461a) frame_month_view_pane_ParamLimits

0xeb63,	// (0x0004627c) grid_month_view_pane_ParamLimits

0xeb71,	// (0x0004628a) frm_month_g1_ParamLimits

0xcf7f,	// (0x00044698) frm_month_g2_ParamLimits

0xcf90,	// (0x000446a9) frm_month_g3_ParamLimits

0xcfa1,	// (0x000446ba) frm_month_g4_ParamLimits

0xcfb2,	// (0x000446cb) frm_month_g5_ParamLimits

0xcfc5,	// (0x000446de) frm_month_g6_ParamLimits

0xcfd8,	// (0x000446f1) frm_month_g7_ParamLimits

0xeb7e,	// (0x00046297) frm_month_g8_ParamLimits

0xcfeb,	// (0x00044704) frm_month_g9_ParamLimits

0xcff8,	// (0x00044711) frm_month_g10_ParamLimits

0xd005,	// (0x0004471e) frm_month_g11_ParamLimits

0xd012,	// (0x0004472b) frm_month_g12_ParamLimits

0xd01f,	// (0x00044738) frm_month_g13_ParamLimits

0xd02c,	// (0x00044745) frm_month_g14_ParamLimits

0xd03b,	// (0x00044754) frm_month_g15_ParamLimits

0xd04a,	// (0x00044763) frm_month_g16_ParamLimits

0xff08,	// (0x00047621) frm_month_g_ParamLimits

0xeb8b,	// (0x000462a4) cell_top_day_name_pane_t1_ParamLimits

0xd059,	// (0x00044772) cell_area_left_week_number_pane_g1_ParamLimits

0xd068,	// (0x00044781) cell_area_left_week_number_pane_t1_ParamLimits

0x2a93,	// (0x0003a1ac) cell_month_view_pane_g1_ParamLimits

0xd07e,	// (0x00044797) cell_month_view_pane_t1_ParamLimits

0x0390,	// (0x00037aa9) main_clock2_btn_pane_g1

0xece1,	// (0x000463fa) main_clock2_btn_pane_t1

0x0c6c,	// (0x00038385) listscroll_cmail_pane_ParamLimits

0xe3be,	// (0x00045ad7) main_sp_fs_email_pane_g1_ParamLimits

0xe3ca,	// (0x00045ae3) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x00047404) main_sp_fs_email_pane_g_ParamLimits

0xe73b,	// (0x00045e54) list_recal_day_pane_ParamLimits

0xe74c,	// (0x00045e65) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
