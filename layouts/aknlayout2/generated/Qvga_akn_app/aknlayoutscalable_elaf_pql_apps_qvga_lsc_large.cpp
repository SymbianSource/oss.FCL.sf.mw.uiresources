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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000687b9 };

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
0x2e4b,	// (0x0006b604) Screen

0x2e55,	// (0x0006b60e) application_window

0x2e84,	// (0x0006b63d) area_bottom_pane_ParamLimits

0x2e84,	// (0x0006b63d) area_bottom_pane

0x2eb7,	// (0x0006b670) area_top_pane_ParamLimits

0x2eb7,	// (0x0006b670) area_top_pane

0xadcb,	// (0x00073584) call_video_uplink_pane_ParamLimits

0xadcb,	// (0x00073584) call_video_uplink_pane

0x2f28,	// (0x0006b6e1) main_pane_ParamLimits

0x2f28,	// (0x0006b6e1) main_pane

0xc51a,	// (0x00074cd3) context_pane

0x66f4,	// (0x0006eead) navi_pane

0x671d,	// (0x0006eed6) popup_cale_events_window_ParamLimits

0x671d,	// (0x0006eed6) popup_cale_events_window

0xc52d,	// (0x00074ce6) popup_mup_playback_window

0x6735,	// (0x0006eeee) signal_pane

0xb544,	// (0x00073cfd) main_browser_pane

0x11c0,	// (0x00069979) main_burst_pane

0x1547,	// (0x00069d00) main_calc_pane

0x11c0,	// (0x00069979) main_cale_day_pane

0xb70c,	// (0x00073ec5) main_cale_month_pane

0x11c0,	// (0x00069979) main_cale_week_pane

0x11c0,	// (0x00069979) main_call_pane

0xb1f8,	// (0x000739b1) main_call_poc_pane

0x11c0,	// (0x00069979) main_camera_pane

0x11c0,	// (0x00069979) main_chi_dic_pane

0x0fbf,	// (0x00069778) main_clock_pane

0xb1f8,	// (0x000739b1) main_fmradio_pane

0x11c0,	// (0x00069979) main_graph_messa_pane

0xb1f8,	// (0x000739b1) main_help_pane

0xb544,	// (0x00073cfd) main_im_pane

0xb453,	// (0x00073c0c) main_image_pane_ParamLimits

0xb453,	// (0x00073c0c) main_image_pane

0xb1f8,	// (0x000739b1) main_location2_pane

0x11c0,	// (0x00069979) main_location_pane

0xb1f8,	// (0x000739b1) main_messa_pane

0xb1f8,	// (0x000739b1) main_mp2_pane

0x11c0,	// (0x00069979) main_mp_pane

0xb1f8,	// (0x000739b1) main_msg_pane

0xb1f8,	// (0x000739b1) main_mup_eq_pane

0xb1f8,	// (0x000739b1) main_mup_pane

0x11c0,	// (0x00069979) main_notes_pane

0xb1f8,	// (0x000739b1) main_pec_pane

0xb1f8,	// (0x000739b1) main_phob_pane

0xb1f8,	// (0x000739b1) main_pinb_pane

0xb1f8,	// (0x000739b1) main_postcard_pane

0xb1f8,	// (0x000739b1) main_qdial_pane

0x11c0,	// (0x00069979) main_skin_pane

0xb1f8,	// (0x000739b1) main_smil2_pane

0x11c0,	// (0x00069979) main_smil_pane

0x11c0,	// (0x00069979) main_video_pane

0x11c0,	// (0x00069979) main_video_tele_pane

0xb453,	// (0x00073c0c) main_viewer_pane_ParamLimits

0xb453,	// (0x00073c0c) main_viewer_pane

0x11c0,	// (0x00069979) main_vorec_pane

0x64d4,	// (0x0006ec8d) popup_blid_sat_info_window_ParamLimits

0x64d4,	// (0x0006ec8d) popup_blid_sat_info_window

0x652a,	// (0x0006ece3) popup_dyc_status_message_window_ParamLimits

0x652a,	// (0x0006ece3) popup_dyc_status_message_window

0x6540,	// (0x0006ecf9) popup_grid_large_graphic_window_ParamLimits

0x6540,	// (0x0006ecf9) popup_grid_large_graphic_window

0x65d6,	// (0x0006ed8f) popup_loc_request_window_ParamLimits

0x65d6,	// (0x0006ed8f) popup_loc_request_window

0x66ce,	// (0x0006ee87) popup_wml_address_window_ParamLimits

0x66ce,	// (0x0006ee87) popup_wml_address_window

0x632a,	// (0x0006eae3) call_muted_g1

0x5454,	// (0x0006dc0d) popup_call_audio_conf_window_ParamLimits

0x5454,	// (0x0006dc0d) popup_call_audio_conf_window

0x633a,	// (0x0006eaf3) popup_call_audio_first_window_ParamLimits

0x633a,	// (0x0006eaf3) popup_call_audio_first_window

0x6398,	// (0x0006eb51) popup_call_audio_in_window_ParamLimits

0x6398,	// (0x0006eb51) popup_call_audio_in_window

0x63c4,	// (0x0006eb7d) popup_call_audio_out_window_ParamLimits

0x63c4,	// (0x0006eb7d) popup_call_audio_out_window

0x63f2,	// (0x0006ebab) popup_call_audio_second_window_ParamLimits

0x63f2,	// (0x0006ebab) popup_call_audio_second_window

0x6438,	// (0x0006ebf1) popup_call_audio_wait_window_ParamLimits

0x6438,	// (0x0006ebf1) popup_call_audio_wait_window

0x646b,	// (0x0006ec24) popup_number_entry_window_ParamLimits

0x646b,	// (0x0006ec24) popup_number_entry_window

0xade7,	// (0x000735a0) bg_popup_call_pane_cp05_ParamLimits

0xade7,	// (0x000735a0) bg_popup_call_pane_cp05

0xae07,	// (0x000735c0) popup_number_entry_window_t1

0xae1a,	// (0x000735d3) popup_number_entry_window_t2

0xae2c,	// (0x000735e5) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000778a5) popup_number_entry_window_t

0xae3e,	// (0x000735f7) text_title_cp2

0xae51,	// (0x0007360a) bg_popup_call_pane_cp_ParamLimits

0xae51,	// (0x0007360a) bg_popup_call_pane_cp

0xae5f,	// (0x00073618) call_thumbnail_pane

0xae67,	// (0x00073620) popup_call_audio_in_window_g1_ParamLimits

0xae67,	// (0x00073620) popup_call_audio_in_window_g1

0xae73,	// (0x0007362c) popup_call_audio_in_window_g2_ParamLimits

0xae73,	// (0x0007362c) popup_call_audio_in_window_g2

0xae7f,	// (0x00073638) popup_call_audio_in_window_g3_ParamLimits

0xae7f,	// (0x00073638) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000778ae) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000778ae) popup_call_audio_in_window_g

0xae8b,	// (0x00073644) popup_call_audio_in_window_t1_ParamLimits

0xae8b,	// (0x00073644) popup_call_audio_in_window_t1

0xaea6,	// (0x0007365f) popup_call_audio_in_window_t2_ParamLimits

0xaea6,	// (0x0007365f) popup_call_audio_in_window_t2

0xaec1,	// (0x0007367a) popup_call_audio_in_window_t3_ParamLimits

0xaec1,	// (0x0007367a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000778b5) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000778b5) popup_call_audio_in_window_t

0xae51,	// (0x0007360a) bg_popup_call_pane_cp01_ParamLimits

0xae51,	// (0x0007360a) bg_popup_call_pane_cp01

0xae5f,	// (0x00073618) call_thumbnail_pane_cp02

0xaed4,	// (0x0007368d) call_type_pane_cp022

0xaedc,	// (0x00073695) popup_call_audio_out_window_g1_ParamLimits

0xaedc,	// (0x00073695) popup_call_audio_out_window_g1

0xaeee,	// (0x000736a7) popup_call_audio_out_window_g2_ParamLimits

0xaeee,	// (0x000736a7) popup_call_audio_out_window_g2

0xaefa,	// (0x000736b3) popup_call_audio_out_window_g3_ParamLimits

0xaefa,	// (0x000736b3) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000778bc) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000778bc) popup_call_audio_out_window_g

0xaf0c,	// (0x000736c5) popup_call_audio_out_window_t1_ParamLimits

0xaf0c,	// (0x000736c5) popup_call_audio_out_window_t1

0xaf24,	// (0x000736dd) popup_call_audio_out_window_t2_ParamLimits

0xaf24,	// (0x000736dd) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000778c3) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000778c3) popup_call_audio_out_window_t

0xaf39,	// (0x000736f2) bg_popup_call_pane_ParamLimits

0xaf39,	// (0x000736f2) bg_popup_call_pane

0x30ba,	// (0x0006b873) call_thumbnail_pane_cp_ParamLimits

0x30ba,	// (0x0006b873) call_thumbnail_pane_cp

0xafbd,	// (0x00073776) call_type_pane_cp01_ParamLimits

0xafbd,	// (0x00073776) call_type_pane_cp01

0xb001,	// (0x000737ba) popup_call_audio_first_window_g1_ParamLimits

0xb001,	// (0x000737ba) popup_call_audio_first_window_g1

0xb04d,	// (0x00073806) popup_call_audio_first_window_g2_ParamLimits

0xb04d,	// (0x00073806) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000778c8) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000778c8) popup_call_audio_first_window_g

0xb091,	// (0x0007384a) popup_call_audio_first_window_t1_ParamLimits

0xb091,	// (0x0007384a) popup_call_audio_first_window_t1

0xb13d,	// (0x000738f6) popup_call_audio_first_window_t4_ParamLimits

0xb13d,	// (0x000738f6) popup_call_audio_first_window_t4

0xb1c9,	// (0x00073982) popup_call_audio_first_window_t5_ParamLimits

0xb1c9,	// (0x00073982) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000778cd) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000778cd) popup_call_audio_first_window_t

0xb1f8,	// (0x000739b1) bg_popup_call_pane_cp02

0xb202,	// (0x000739bb) call_type_pane_cp023

0xb20a,	// (0x000739c3) popup_call_audio_wait_window_g1

0xb212,	// (0x000739cb) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000778d4) popup_call_audio_wait_window_g

0xb21a,	// (0x000739d3) popup_call_audio_wait_window_t3

0xb228,	// (0x000739e1) bg_popup_call_pane_cp03_ParamLimits

0xb228,	// (0x000739e1) bg_popup_call_pane_cp03

0xb288,	// (0x00073a41) call_thumbnail_pane_cp011_ParamLimits

0xb288,	// (0x00073a41) call_thumbnail_pane_cp011

0xb294,	// (0x00073a4d) call_type_pane_cp034_ParamLimits

0xb294,	// (0x00073a4d) call_type_pane_cp034

0xb2d0,	// (0x00073a89) popup_call_audio_second_window_g1_ParamLimits

0xb2d0,	// (0x00073a89) popup_call_audio_second_window_g1

0xb30c,	// (0x00073ac5) popup_call_audio_second_window_g2_ParamLimits

0xb30c,	// (0x00073ac5) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000778d9) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000778d9) popup_call_audio_second_window_g

0xb348,	// (0x00073b01) popup_call_audio_second_window_t1_ParamLimits

0xb348,	// (0x00073b01) popup_call_audio_second_window_t1

0xb3c9,	// (0x00073b82) popup_call_audio_second_window_t2_ParamLimits

0xb3c9,	// (0x00073b82) popup_call_audio_second_window_t2

0xb3ff,	// (0x00073bb8) popup_call_audio_second_window_t3_ParamLimits

0xb3ff,	// (0x00073bb8) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000778de) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000778de) popup_call_audio_second_window_t

0xb1f8,	// (0x000739b1) bg_popup_call_pane_cp04

0xb435,	// (0x00073bee) list_conf_pane

0xb43d,	// (0x00073bf6) popup_call_audio_conf_window_t1

0xb44b,	// (0x00073c04) call_thumbnail_pane_g1

0xb453,	// (0x00073c0c) bg_pinb_pane_ParamLimits

0xb453,	// (0x00073c0c) bg_pinb_pane

0xb461,	// (0x00073c1a) find_pinb_pane

0xb46a,	// (0x00073c23) listscroll_pinb_pane_ParamLimits

0xb46a,	// (0x00073c23) listscroll_pinb_pane

0xb479,	// (0x00073c32) pinb_bg_pane_g1

0x30de,	// (0x0006b897) pinb_bg_pane_g2

0x30e8,	// (0x0006b8a1) pinb_bg_pane_g3

0x30f2,	// (0x0006b8ab) pinb_bg_pane_g4

0x30fc,	// (0x0006b8b5) pinb_bg_pane_g5

0x3106,	// (0x0006b8bf) pinb_bg_pane_g6

0x310f,	// (0x0006b8c8) pinb_bg_pane_g7

0x3118,	// (0x0006b8d1) pinb_bg_pane_g8

0x3123,	// (0x0006b8dc) pinb_bg_pane_g9

0x312d,	// (0x0006b8e6) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000778e5) pinb_bg_pane_g

0x3148,	// (0x0006b901) grid_pinb_pane

0x3151,	// (0x0006b90a) list_pinb_pane

0x315a,	// (0x0006b913) scroll_pane_cp01_ParamLimits

0x315a,	// (0x0006b913) scroll_pane_cp01

0xb483,	// (0x00073c3c) find_pinb_pane_g1_ParamLimits

0xb483,	// (0x00073c3c) find_pinb_pane_g1

0xb49b,	// (0x00073c54) find_pinb_pane_t1

0xb4ad,	// (0x00073c66) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000778ff) find_pinb_pane_t

0xb4c2,	// (0x00073c7b) input_focus_pane_cp01_ParamLimits

0xb4c2,	// (0x00073c7b) input_focus_pane_cp01

0x316c,	// (0x0006b925) cell_pinb_pane_ParamLimits

0x316c,	// (0x0006b925) cell_pinb_pane

0x3187,	// (0x0006b940) cell_pinb_pane_g1_ParamLimits

0x3187,	// (0x0006b940) cell_pinb_pane_g1

0x3197,	// (0x0006b950) cell_pinb_pane_g2_ParamLimits

0x3197,	// (0x0006b950) cell_pinb_pane_g2

0xb4ce,	// (0x00073c87) cell_pinb_pane_g3_ParamLimits

0xb4ce,	// (0x00073c87) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00077904) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00077904) cell_pinb_pane_g

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp01

0x31a3,	// (0x0006b95c) list_pinb_item_pane_ParamLimits

0x31a3,	// (0x0006b95c) list_pinb_item_pane

0xb1f8,	// (0x000739b1) list_highlight_pane_cp02

0x31b5,	// (0x0006b96e) list_pinb_item_pane_g1_ParamLimits

0x31b5,	// (0x0006b96e) list_pinb_item_pane_g1

0x31c2,	// (0x0006b97b) list_pinb_item_pane_g2_ParamLimits

0x31c2,	// (0x0006b97b) list_pinb_item_pane_g2

0x31ce,	// (0x0006b987) list_pinb_item_pane_g3_ParamLimits

0x31ce,	// (0x0006b987) list_pinb_item_pane_g3

0x31df,	// (0x0006b998) list_pinb_item_pane_g4_ParamLimits

0x31df,	// (0x0006b998) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0007790b) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0007790b) list_pinb_item_pane_g

0x31eb,	// (0x0006b9a4) list_pinb_item_pane_t1_ParamLimits

0x31eb,	// (0x0006b9a4) list_pinb_item_pane_t1

0x3220,	// (0x0006b9d9) calc_display_pane

0x323c,	// (0x0006b9f5) calc_paper_pane

0x325d,	// (0x0006ba16) grid_calc_pane

0xb1f8,	// (0x000739b1) bg_list_pane_cp01

0x3279,	// (0x0006ba32) clock_g1

0x3281,	// (0x0006ba3a) clock_g2

0x0001,

0xf15b,	// (0x00077914) clock_g

0x3289,	// (0x0006ba42) clock_t1_ParamLimits

0x3289,	// (0x0006ba42) clock_t1

0x329e,	// (0x0006ba57) clock_t2_ParamLimits

0x329e,	// (0x0006ba57) clock_t2

0x32b0,	// (0x0006ba69) clock_t3_ParamLimits

0x32b0,	// (0x0006ba69) clock_t3

0x32c2,	// (0x0006ba7b) clock_t4_ParamLimits

0x32c2,	// (0x0006ba7b) clock_t4

0x32d4,	// (0x0006ba8d) clock_t5_ParamLimits

0x32d4,	// (0x0006ba8d) clock_t5

0x32e9,	// (0x0006baa2) clock_t6_ParamLimits

0x32e9,	// (0x0006baa2) clock_t6

0x32fb,	// (0x0006bab4) clock_t7_ParamLimits

0x32fb,	// (0x0006bab4) clock_t7

0x330d,	// (0x0006bac6) clock_t8_ParamLimits

0x330d,	// (0x0006bac6) clock_t8

0x331f,	// (0x0006bad8) clock_t9_ParamLimits

0x331f,	// (0x0006bad8) clock_t9

0x0008,

0xf160,	// (0x00077919) clock_t_ParamLimits

0xf160,	// (0x00077919) clock_t

0xb4e2,	// (0x00073c9b) popup_clock_analogue_window_cp02

0xb4e2,	// (0x00073c9b) popup_clock_digital_window_cp01

0xb4ea,	// (0x00073ca3) listscroll_help_pane

0xb1f8,	// (0x000739b1) phob_pre_status_pane

0xb4f4,	// (0x00073cad) grid_qdial_pane

0xb1f8,	// (0x000739b1) listscroll_mce_pane

0xb4fe,	// (0x00073cb7) bg_notes_pane

0xb508,	// (0x00073cc1) list_notes_pane

0x3331,	// (0x0006baea) scroll_pane_cp06

0xb512,	// (0x00073ccb) bg_calc_paper_pane

0xb52a,	// (0x00073ce3) list_calc_pane

0xb544,	// (0x00073cfd) bg_calc_display_pane

0xb550,	// (0x00073d09) calc_display_pane_t1

0xb565,	// (0x00073d1e) calc_display_pane_t2

0xb57a,	// (0x00073d33) calc_display_pane_t3

0x0002,

0xf173,	// (0x0007792c) calc_display_pane_t

0x333c,	// (0x0006baf5) cell_calc_pane_ParamLimits

0x333c,	// (0x0006baf5) cell_calc_pane

0xb58c,	// (0x00073d45) bg_calc_paper_pane_g1

0xb598,	// (0x00073d51) bg_calc_paper_pane_g2

0xb5a4,	// (0x00073d5d) bg_calc_paper_pane_g3

0xb5b0,	// (0x00073d69) bg_calc_paper_pane_g4

0xb5bc,	// (0x00073d75) bg_calc_paper_pane_g5

0x336f,	// (0x0006bb28) bg_calc_paper_pane_g6

0x337e,	// (0x0006bb37) bg_calc_paper_pane_g7

0x338d,	// (0x0006bb46) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00077933) bg_calc_paper_pane_g

0x339c,	// (0x0006bb55) calc_bg_paper_pane_g9

0x33ab,	// (0x0006bb64) list_calc_item_pane_ParamLimits

0x33ab,	// (0x0006bb64) list_calc_item_pane

0xb5c8,	// (0x00073d81) list_calc_item_pane_g1

0xb5d5,	// (0x00073d8e) list_calc_item_pane_t1_ParamLimits

0xb5d5,	// (0x00073d8e) list_calc_item_pane_t1

0x33bf,	// (0x0006bb78) list_calc_item_pane_t2_ParamLimits

0x33bf,	// (0x0006bb78) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00077944) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00077944) list_calc_item_pane_t

0xb5e7,	// (0x00073da0) cell_calc_pane_g1

0xb5f1,	// (0x00073daa) grid_highlight_pane_cp02

0xb613,	// (0x00073dcc) bg_calc_display_pane_g1

0xb61c,	// (0x00073dd5) bg_calc_display_pane_g2

0xb626,	// (0x00073ddf) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0007794e) bg_calc_display_pane_g

0x33ed,	// (0x0006bba6) cell_qdial_pane_ParamLimits

0x33ed,	// (0x0006bba6) cell_qdial_pane

0x33ff,	// (0x0006bbb8) cell_qdial_pane_g1_ParamLimits

0x33ff,	// (0x0006bbb8) cell_qdial_pane_g1

0x3415,	// (0x0006bbce) cell_qdial_pane_g2_ParamLimits

0x3415,	// (0x0006bbce) cell_qdial_pane_g2

0xb62f,	// (0x00073de8) cell_qdial_pane_g3_ParamLimits

0xb62f,	// (0x00073de8) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00077955) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00077955) cell_qdial_pane_g

0x343c,	// (0x0006bbf5) cell_qdial_pane_t1_ParamLimits

0x343c,	// (0x0006bbf5) cell_qdial_pane_t1

0x3454,	// (0x0006bc0d) cell_qdial_pane_t2_ParamLimits

0x3454,	// (0x0006bc0d) cell_qdial_pane_t2

0x3467,	// (0x0006bc20) cell_qdial_pane_t3_ParamLimits

0x3467,	// (0x0006bc20) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0007795e) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0007795e) cell_qdial_pane_t

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp04

0xb63b,	// (0x00073df4) thumbnail_qdial_pane_ParamLimits

0xb63b,	// (0x00073df4) thumbnail_qdial_pane

0xb697,	// (0x00073e50) list_help_pane

0xb6a1,	// (0x00073e5a) scroll_pane_cp02

0x347a,	// (0x0006bc33) help_list_pane_t1_ParamLimits

0x347a,	// (0x0006bc33) help_list_pane_t1

0xb6aa,	// (0x00073e63) bg_notes_pane_g2

0xb6b2,	// (0x00073e6b) bg_notes_pane_g3

0xb6ba,	// (0x00073e73) notes_bg_pane_g1

0xb6c2,	// (0x00073e7b) notes_bg_pane_g4

0xb6ca,	// (0x00073e83) notes_bg_pane_g5

0xb6d2,	// (0x00073e8b) notes_bg_pane_g6

0xb6da,	// (0x00073e93) notes_bg_pane_g7

0xb6e2,	// (0x00073e9b) notes_bg_pane_g8

0xb6ea,	// (0x00073ea3) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0007797c) notes_bg_pane_g

0x1561,	// (0x00069d1a) list_notes_text_pane_ParamLimits

0x1561,	// (0x00069d1a) list_notes_text_pane

0xb6f2,	// (0x00073eab) list_notes_text_pane_g1

0x2444,	// (0x0006abfd) list_notes_text_pane_t1

0xb70c,	// (0x00073ec5) listscroll_cale_week_pane

0x34b1,	// (0x0006bc6a) bg_cale_heading_pane

0xb71b,	// (0x00073ed4) bg_cale_pane_cp01

0x34c5,	// (0x0006bc7e) cale_week_corner_pane

0x34db,	// (0x0006bc94) cale_week_day_heading_pane

0x34ef,	// (0x0006bca8) cale_week_scroll_pane_g1

0x3500,	// (0x0006bcb9) cale_week_scroll_pane_g2

0x3511,	// (0x0006bcca) cale_week_scroll_pane_g3

0x3522,	// (0x0006bcdb) cale_week_scroll_pane_g4

0x3533,	// (0x0006bcec) cale_week_scroll_pane_g5

0x3544,	// (0x0006bcfd) cale_week_scroll_pane_g6

0x3555,	// (0x0006bd0e) cale_week_scroll_pane_g7

0x3566,	// (0x0006bd1f) cale_week_scroll_pane_g8

0x3579,	// (0x0006bd32) cale_week_scroll_pane_g9

0x358a,	// (0x0006bd43) cale_week_scroll_pane_g10

0x359b,	// (0x0006bd54) cale_week_scroll_pane_g11

0x35ac,	// (0x0006bd65) cale_week_scroll_pane_g12

0x35bd,	// (0x0006bd76) cale_week_scroll_pane_g13

0x35ce,	// (0x0006bd87) cale_week_scroll_pane_g14

0x35df,	// (0x0006bd98) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0007798b) cale_week_scroll_pane_g

0x35f0,	// (0x0006bda9) cale_week_time_pane

0x3603,	// (0x0006bdbc) grid_cale_week_pane

0x3616,	// (0x0006bdcf) scroll_pane_cp08

0x3630,	// (0x0006bde9) cell_cale_week_pane_ParamLimits

0x3630,	// (0x0006bde9) cell_cale_week_pane

0x366c,	// (0x0006be25) cale_week_day_heading_pane_t1

0x3696,	// (0x0006be4f) cale_week_day_heading_pane_t2

0x36c0,	// (0x0006be79) cale_week_day_heading_pane_t3

0x36ea,	// (0x0006bea3) cale_week_day_heading_pane_t4

0x3714,	// (0x0006becd) cale_week_day_heading_pane_t5

0x373e,	// (0x0006bef7) cale_week_day_heading_pane_t6

0x3768,	// (0x0006bf21) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000779aa) cale_week_day_heading_pane_t

0xb746,	// (0x00073eff) bg_cale_side_pane

0x3792,	// (0x0006bf4b) cale_week_time_pane_t1

0x37be,	// (0x0006bf77) cale_week_time_pane_t2

0x37ea,	// (0x0006bfa3) cale_week_time_pane_t3

0x3816,	// (0x0006bfcf) cale_week_time_pane_t4

0x3842,	// (0x0006bffb) cale_week_time_pane_t5

0x386e,	// (0x0006c027) cale_week_time_pane_t6

0x389a,	// (0x0006c053) cale_week_time_pane_t7

0x38c6,	// (0x0006c07f) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000779b9) cale_week_time_pane_t

0x38f2,	// (0x0006c0ab) cell_cale_week_pane_g2

0x390b,	// (0x0006c0c4) cell_cale_week_pane_g3_ParamLimits

0x390b,	// (0x0006c0c4) cell_cale_week_pane_g3

0xb754,	// (0x00073f0d) grid_highlight_pane_cp07

0xb75c,	// (0x00073f15) listscroll_gms_pane

0xb766,	// (0x00073f1f) grid_gms_pane

0xb76f,	// (0x00073f28) listscroll_gms_pane_g1

0xb777,	// (0x00073f30) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000779ca) listscroll_gms_pane_g

0x3923,	// (0x0006c0dc) scroll_pane_cp010

0x392e,	// (0x0006c0e7) cell_gms_pane_ParamLimits

0x392e,	// (0x0006c0e7) cell_gms_pane

0x393e,	// (0x0006c0f7) cell_gms_pane_g1

0xb77f,	// (0x00073f38) cell_gms_pane_g2

0xb6f2,	// (0x00073eab) cell_gms_pane_g3

0xb787,	// (0x00073f40) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000779cf) cell_gms_pane_g

0xb790,	// (0x00073f49) grid_highlight_pane_cp09

0x62d8,	// (0x0006ea91) phob_pre_status_pane_g1

0x62e0,	// (0x0006ea99) phob_pre_status_pane_g2

0x62e8,	// (0x0006eaa1) phob_pre_status_pane_g3

0x62f0,	// (0x0006eaa9) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x00077dd1) phob_pre_status_pane_g

0x6300,	// (0x0006eab9) phob_pre_status_pane_t1

0x630e,	// (0x0006eac7) phob_pre_status_pane_t2

0x631c,	// (0x0006ead5) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x00077ddc) phob_pre_status_pane_t

0xb1f8,	// (0x000739b1) bg_list_pane_cp05

0x394e,	// (0x0006c107) grid_vorec_pane

0xb798,	// (0x00073f51) vorec_t1

0xb7a6,	// (0x00073f5f) vorec_t2

0xb7b4,	// (0x00073f6d) vorec_t3

0xb7c2,	// (0x00073f7b) vorec_t4

0xb7d0,	// (0x00073f89) vorec_t5

0xb7de,	// (0x00073f97) vorec_t6

0x0006,

0xf21f,	// (0x000779d8) vorec_t

0xb7fa,	// (0x00073fb3) wait_bar_pane_cp01

0x3956,	// (0x0006c10f) cell_vorec_pane_ParamLimits

0x3956,	// (0x0006c10f) cell_vorec_pane

0xb802,	// (0x00073fbb) cell_vorec_pane_g1

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp05

0x397b,	// (0x0006c134) cams_zoom_pane

0x398a,	// (0x0006c143) image_vga_pane

0x39a2,	// (0x0006c15b) main_camera_pane_g1

0x39b2,	// (0x0006c16b) main_camera_pane_g2

0x39c2,	// (0x0006c17b) main_camera_pane_g3

0x39d2,	// (0x0006c18b) main_camera_pane_g4

0x39e2,	// (0x0006c19b) main_camera_pane_g5

0x39f2,	// (0x0006c1ab) main_camera_pane_g6

0x3a02,	// (0x0006c1bb) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000779e7) main_camera_pane_g

0x3a12,	// (0x0006c1cb) main_camera_pane_t1

0x3a28,	// (0x0006c1e1) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000779f8) main_camera_pane_t

0x3a5a,	// (0x0006c213) cams_zoom_pane_cp_ParamLimits

0x3a5a,	// (0x0006c213) cams_zoom_pane_cp

0x3a82,	// (0x0006c23b) image_cif_pane_ParamLimits

0x3a82,	// (0x0006c23b) image_cif_pane

0x3ab3,	// (0x0006c26c) image_subqcif_pane

0x3abb,	// (0x0006c274) main_video_pane_g1_ParamLimits

0x3abb,	// (0x0006c274) main_video_pane_g1

0x3adf,	// (0x0006c298) main_video_pane_g2_ParamLimits

0x3adf,	// (0x0006c298) main_video_pane_g2

0x3b13,	// (0x0006c2cc) main_video_pane_g3_ParamLimits

0x3b13,	// (0x0006c2cc) main_video_pane_g3

0x3b41,	// (0x0006c2fa) main_video_pane_g4_ParamLimits

0x3b41,	// (0x0006c2fa) main_video_pane_g4

0x3b6f,	// (0x0006c328) main_video_pane_g5_ParamLimits

0x3b6f,	// (0x0006c328) main_video_pane_g5

0xb818,	// (0x00073fd1) main_video_pane_g6_ParamLimits

0xb818,	// (0x00073fd1) main_video_pane_g6

0x0006,

0xf244,	// (0x000779fd) main_video_pane_g_ParamLimits

0xf244,	// (0x000779fd) main_video_pane_g

0x3b96,	// (0x0006c34f) main_video_pane_t1_ParamLimits

0x3b96,	// (0x0006c34f) main_video_pane_t1

0xb832,	// (0x00073feb) cams_zoom_pane_g1

0xb83b,	// (0x00073ff4) cams_zoom_pane_g2

0xb844,	// (0x00073ffd) cams_zoom_pane_g3

0xb84d,	// (0x00074006) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00077a0c) cams_zoom_pane_g

0x3bf3,	// (0x0006c3ac) grid_cams_pane

0x3c08,	// (0x0006c3c1) linegrid_cams_pane

0x3c19,	// (0x0006c3d2) cell_cams_pane_ParamLimits

0x3c19,	// (0x0006c3d2) cell_cams_pane

0xb856,	// (0x0007400f) cams_burst_image_pane

0xb85e,	// (0x00074017) cell_cams_pane_g1

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp03

0xb5e7,	// (0x00073da0) mp_bg_pane_g1

0xb1f8,	// (0x000739b1) bg_list_pane_cp03

0xc3f6,	// (0x00074baf) bg_mp_pane

0xc3fe,	// (0x00074bb7) grid_mp_pane

0xc406,	// (0x00074bbf) media_player_g1

0xc40e,	// (0x00074bc7) media_player_t1

0xc41c,	// (0x00074bd5) media_player_t2

0xc42a,	// (0x00074be3) media_player_t3

0xc438,	// (0x00074bf1) media_player_t4

0xc446,	// (0x00074bff) media_player_t5

0xc454,	// (0x00074c0d) media_player_t6

0xc462,	// (0x00074c1b) media_player_t7

0x0006,

0xf602,	// (0x00077dbb) media_player_t

0xc470,	// (0x00074c29) wait_bar_pane_cp02

0xf5e7,	// (0x00077da0) main_usb_pane_t

0x62cf,	// (0x0006ea88) cell_mp_pane

0xb5e7,	// (0x00073da0) cell_mp_pane_g1

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp06

0xb906,	// (0x000740bf) grid_skin_colour_pane

0xb90e,	// (0x000740c7) list_highlight_pane_cp03

0x3c37,	// (0x0006c3f0) skin_g1

0xb916,	// (0x000740cf) skin_t1

0xb925,	// (0x000740de) skin_t2

0x0001,

0xf288,	// (0x00077a41) skin_t

0x3c3f,	// (0x0006c3f8) cell_skin_colour_pane_ParamLimits

0x3c3f,	// (0x0006c3f8) cell_skin_colour_pane

0xb933,	// (0x000740ec) cell_skin_colour_pane_g1

0x3ca8,	// (0x0006c461) call_video_g1_ParamLimits

0x3ca8,	// (0x0006c461) call_video_g1

0x3cbe,	// (0x0006c477) call_video_g2_ParamLimits

0x3cbe,	// (0x0006c477) call_video_g2

0x0001,

0xf28d,	// (0x00077a46) call_video_g_ParamLimits

0xf28d,	// (0x00077a46) call_video_g

0x3d06,	// (0x0006c4bf) call_video_uplink_pane_cp1_ParamLimits

0x3d06,	// (0x0006c4bf) call_video_uplink_pane_cp1

0xb945,	// (0x000740fe) call_video_uplink_pane_cp2

0x3d9b,	// (0x0006c554) video_down_crop_pane_ParamLimits

0x3d9b,	// (0x0006c554) video_down_crop_pane

0x3e5e,	// (0x0006c617) video_down_pane_ParamLimits

0x3e5e,	// (0x0006c617) video_down_pane

0xb94d,	// (0x00074106) video_down_subqcif_pane_ParamLimits

0xb94d,	// (0x00074106) video_down_subqcif_pane

0xb965,	// (0x0007411e) video_down_subqcif_pane_cp_ParamLimits

0xb965,	// (0x0007411e) video_down_subqcif_pane_cp

0xb989,	// (0x00074142) im_reading_pane_ParamLimits

0xb989,	// (0x00074142) im_reading_pane

0x3f1b,	// (0x0006c6d4) im_writing_pane_ParamLimits

0x3f1b,	// (0x0006c6d4) im_writing_pane

0x3f31,	// (0x0006c6ea) im_reading_pane_t1

0xb9a3,	// (0x0007415c) list_im_pane

0xb9b4,	// (0x0007416d) scroll_pane_cp07

0x3f67,	// (0x0006c720) im_writing_pane_t1_ParamLimits

0x3f67,	// (0x0006c720) im_writing_pane_t1

0xb9cd,	// (0x00074186) im_writing_pane_t2_ParamLimits

0xb9cd,	// (0x00074186) im_writing_pane_t2

0x0001,

0xf297,	// (0x00077a50) im_writing_pane_t_ParamLimits

0xf297,	// (0x00077a50) im_writing_pane_t

0xb1f8,	// (0x000739b1) input_focus_pane_cp04

0xb1f8,	// (0x000739b1) input_focus_pane_cp05

0x3f7c,	// (0x0006c735) list_im_single_pane_ParamLimits

0x3f7c,	// (0x0006c735) list_im_single_pane

0xb9ea,	// (0x000741a3) list_single_im_pane_t1

0x6295,	// (0x0006ea4e) blid_accuracy_pane

0x629d,	// (0x0006ea56) blid_compass_pane

0x62a5,	// (0x0006ea5e) main_location_t1

0x62b3,	// (0x0006ea6c) main_location_t2

0x62c1,	// (0x0006ea7a) main_location_t3

0x0002,

0xf611,	// (0x00077dca) main_location_t

0xb1f8,	// (0x000739b1) aid_levels_location

0xb5e7,	// (0x00073da0) blid_accuracy_pane_g1

0xb5e7,	// (0x00073da0) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00077ab2) blid_accuracy_pane_g

0xba24,	// (0x000741dd) wml_content_pane

0xba62,	// (0x0007421b) wml_button_pane_ParamLimits

0xba62,	// (0x0007421b) wml_button_pane

0x3f92,	// (0x0006c74b) wml_list_single_large_pane_ParamLimits

0x3f92,	// (0x0006c74b) wml_list_single_large_pane

0x3fa6,	// (0x0006c75f) wml_list_single_medium_pane_ParamLimits

0x3fa6,	// (0x0006c75f) wml_list_single_medium_pane

0x3fbb,	// (0x0006c774) wml_list_single_small_pane_ParamLimits

0x3fbb,	// (0x0006c774) wml_list_single_small_pane

0xba76,	// (0x0007422f) wml_selection_box_pane_ParamLimits

0xba76,	// (0x0007422f) wml_selection_box_pane

0xba89,	// (0x00074242) wml_list_single_pane_t1

0xba98,	// (0x00074251) wml_list_single_medium_pane_t1

0xbaa7,	// (0x00074260) wml_list_single_large_pane_t1

0xbab6,	// (0x0007426f) input_focus_pane_cp02_ParamLimits

0xbab6,	// (0x0007426f) input_focus_pane_cp02

0xbac9,	// (0x00074282) wml_selection_box_pane_g1

0xbad2,	// (0x0007428b) wml_selection_box_pane_t1_ParamLimits

0xbad2,	// (0x0007428b) wml_selection_box_pane_t1

0xb453,	// (0x00073c0c) bg_wml_button_pane_ParamLimits

0xb453,	// (0x00073c0c) bg_wml_button_pane

0xbaea,	// (0x000742a3) wml_button_pane_g1

0xbaf2,	// (0x000742ab) wml_button_pane_t1

0xbaea,	// (0x000742a3) wml_button_bg_pane_g1

0xbb02,	// (0x000742bb) wml_button_bg_pane_g2

0xbb0a,	// (0x000742c3) wml_button_bg_pane_g3

0xbb12,	// (0x000742cb) wml_button_bg_pane_g4

0xbb1a,	// (0x000742d3) wml_button_bg_pane_g5

0xbb22,	// (0x000742db) wml_button_bg_pane_g6

0xbb2a,	// (0x000742e3) wml_button_bg_pane_g7

0xbb32,	// (0x000742eb) wml_button_bg_pane_g8

0xbb3a,	// (0x000742f3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00077a55) wml_button_bg_pane_g

0x3fd2,	// (0x0006c78b) bg_list_pane_cp02

0xbb42,	// (0x000742fb) mce_header_pane_ParamLimits

0xbb42,	// (0x000742fb) mce_header_pane

0xbb56,	// (0x0007430f) mce_icon_pane

0xbb56,	// (0x0007430f) mce_image_pane

0xbb5f,	// (0x00074318) mce_text_pane_ParamLimits

0xbb5f,	// (0x00074318) mce_text_pane

0x3fdb,	// (0x0006c794) scroll_pane_cp03

0x3fdb,	// (0x0006c794) scroll_pane_cp04

0xbb73,	// (0x0007432c) scroll_pane_cp05_ParamLimits

0xbb73,	// (0x0007432c) scroll_pane_cp05

0x3fe5,	// (0x0006c79e) mce_header_field_pane_ParamLimits

0x3fe5,	// (0x0006c79e) mce_header_field_pane

0x3ffc,	// (0x0006c7b5) mce_header_field_pane_2_ParamLimits

0x3ffc,	// (0x0006c7b5) mce_header_field_pane_2

0x4012,	// (0x0006c7cb) mce_header_field_pane_3

0x401a,	// (0x0006c7d3) list_single_mce_message_pane_ParamLimits

0x401a,	// (0x0006c7d3) list_single_mce_message_pane

0x402f,	// (0x0006c7e8) list_single_mce_smart_pane_ParamLimits

0x402f,	// (0x0006c7e8) list_single_mce_smart_pane

0xbb7f,	// (0x00074338) input_focus_pane_cp03

0xbb88,	// (0x00074341) list_header_data_pane

0x404f,	// (0x0006c808) mce_header_field_pane_t1

0x405d,	// (0x0006c816) list_single_mce_header_pane_ParamLimits

0x405d,	// (0x0006c816) list_single_mce_header_pane

0xbb90,	// (0x00074349) list_single_mce_header_pane_t1

0xbb9f,	// (0x00074358) list_single_mce_message_pane_g1

0xbba8,	// (0x00074361) list_single_mce_message_pane_t1

0x408f,	// (0x0006c848) bg_cale_heading_pane_cp01_ParamLimits

0x408f,	// (0x0006c848) bg_cale_heading_pane_cp01

0xbbb7,	// (0x00074370) bg_cale_pane_cp02_ParamLimits

0xbbb7,	// (0x00074370) bg_cale_pane_cp02

0x40b2,	// (0x0006c86b) cale_month_corner_pane

0x40c8,	// (0x0006c881) cale_month_day_heading_pane_ParamLimits

0x40c8,	// (0x0006c881) cale_month_day_heading_pane

0x40fb,	// (0x0006c8b4) cale_month_pane_g1_ParamLimits

0x40fb,	// (0x0006c8b4) cale_month_pane_g1

0x4117,	// (0x0006c8d0) cale_month_pane_g2_ParamLimits

0x4117,	// (0x0006c8d0) cale_month_pane_g2

0x4132,	// (0x0006c8eb) cale_month_pane_g3_ParamLimits

0x4132,	// (0x0006c8eb) cale_month_pane_g3

0x415e,	// (0x0006c917) cale_month_pane_g4_ParamLimits

0x415e,	// (0x0006c917) cale_month_pane_g4

0x418a,	// (0x0006c943) cale_month_pane_g5_ParamLimits

0x418a,	// (0x0006c943) cale_month_pane_g5

0x41b6,	// (0x0006c96f) cale_month_pane_g6_ParamLimits

0x41b6,	// (0x0006c96f) cale_month_pane_g6

0x41e2,	// (0x0006c99b) cale_month_pane_g7_ParamLimits

0x41e2,	// (0x0006c99b) cale_month_pane_g7

0x420e,	// (0x0006c9c7) cale_month_pane_g8_ParamLimits

0x420e,	// (0x0006c9c7) cale_month_pane_g8

0x424a,	// (0x0006ca03) cale_month_pane_g9_ParamLimits

0x424a,	// (0x0006ca03) cale_month_pane_g9

0x4284,	// (0x0006ca3d) cale_month_pane_g10_ParamLimits

0x4284,	// (0x0006ca3d) cale_month_pane_g10

0x42be,	// (0x0006ca77) cale_month_pane_g11_ParamLimits

0x42be,	// (0x0006ca77) cale_month_pane_g11

0x42f8,	// (0x0006cab1) cale_month_pane_g12_ParamLimits

0x42f8,	// (0x0006cab1) cale_month_pane_g12

0x4332,	// (0x0006caeb) cale_month_pane_g13_ParamLimits

0x4332,	// (0x0006caeb) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00077a68) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00077a68) cale_month_pane_g

0x436c,	// (0x0006cb25) cale_month_week_pane

0x437f,	// (0x0006cb38) grid_cale_month_pane_ParamLimits

0x437f,	// (0x0006cb38) grid_cale_month_pane

0x43ad,	// (0x0006cb66) cale_month_day_heading_pane_t1

0x440b,	// (0x0006cbc4) cale_month_day_heading_pane_t2

0x4470,	// (0x0006cc29) cale_month_day_heading_pane_t3

0x44d5,	// (0x0006cc8e) cale_month_day_heading_pane_t4

0x453a,	// (0x0006ccf3) cale_month_day_heading_pane_t5

0x459f,	// (0x0006cd58) cale_month_day_heading_pane_t6

0x4604,	// (0x0006cdbd) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00077a83) cale_month_day_heading_pane_t

0xb746,	// (0x00073eff) bg_cale_side_pane_cp01

0x4671,	// (0x0006ce2a) cale_month_week_pane_t1

0x4688,	// (0x0006ce41) cale_month_week_pane_t2

0x469f,	// (0x0006ce58) cale_month_week_pane_t3

0x46b6,	// (0x0006ce6f) cale_month_week_pane_t4

0x46cd,	// (0x0006ce86) cale_month_week_pane_t5

0x46e4,	// (0x0006ce9d) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00077a92) cale_month_week_pane_t

0x46fb,	// (0x0006ceb4) cell_cale_month_pane_ParamLimits

0x46fb,	// (0x0006ceb4) cell_cale_month_pane

0xbc16,	// (0x000743cf) cell_cale_month_pane_g1

0x47a9,	// (0x0006cf62) cell_cale_month_pane_t1_ParamLimits

0x47a9,	// (0x0006cf62) cell_cale_month_pane_t1

0xb754,	// (0x00073f0d) grid_highlight_pane_cp08

0xb5e7,	// (0x00073da0) main_smil_g1

0x47c5,	// (0x0006cf7e) smil_status_pane

0xbc22,	// (0x000743db) smil_text_pane

0xc2d6,	// (0x00074a8f) bg_popup_call3_rect_pane_g8

0xc2de,	// (0x00074a97) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00077d4b) bg_popup_call3_rect_pane_g

0xc594,	// (0x00074d4d) smil_status_volume_pane_g1

0xbc2c,	// (0x000743e5) smil_status_pane_t1

0xebe7,	// (0x000773a0) volume_smil_pane

0xbc43,	// (0x000743fc) list_smil_text_pane

0x47d6,	// (0x0006cf8f) scroll_pane_cp011

0x47e1,	// (0x0006cf9a) smil_text_list_pane_t1_ParamLimits

0x47e1,	// (0x0006cf9a) smil_text_list_pane_t1

0xbc4d,	// (0x00074406) aid_volume_smil_ParamLimits

0xbc4d,	// (0x00074406) aid_volume_smil

0xb5e7,	// (0x00073da0) smil_volume_pane_g1

0xb5e7,	// (0x00073da0) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00077ab2) smil_volume_pane_g

0xb544,	// (0x00073cfd) listscroll_cale_day_pane

0xbc6f,	// (0x00074428) bg_cale_pane

0xbc87,	// (0x00074440) list_cale_pane

0xbc98,	// (0x00074451) scroll_pane_cp09

0xbca9,	// (0x00074462) cale_bg_pane_g1

0xbcb1,	// (0x0007446a) cale_bg_pane_g2

0xbcb9,	// (0x00074472) cale_bg_pane_g3

0xbcc1,	// (0x0007447a) cale_bg_pane_g4

0xbcc9,	// (0x00074482) cale_bg_pane_g5

0xbcd1,	// (0x0007448a) cale_bg_pane_g6

0xbcd9,	// (0x00074492) cale_bg_pane_g7

0xbce1,	// (0x0007449a) cale_bg_pane_g8

0xbce9,	// (0x000744a2) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00077ab7) cale_bg_pane_g

0x481f,	// (0x0006cfd8) list_cale_time_pane_ParamLimits

0x481f,	// (0x0006cfd8) list_cale_time_pane

0xbcf1,	// (0x000744aa) list_cale_time_pane_g1_ParamLimits

0xbcf1,	// (0x000744aa) list_cale_time_pane_g1

0xbcfd,	// (0x000744b6) list_cale_time_pane_g2_ParamLimits

0xbcfd,	// (0x000744b6) list_cale_time_pane_g2

0x4834,	// (0x0006cfed) list_cale_time_pane_g3_ParamLimits

0x4834,	// (0x0006cfed) list_cale_time_pane_g3

0x4842,	// (0x0006cffb) list_cale_time_pane_g4_ParamLimits

0x4842,	// (0x0006cffb) list_cale_time_pane_g4

0x4850,	// (0x0006d009) list_cale_time_pane_g5_ParamLimits

0x4850,	// (0x0006d009) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00077aca) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00077aca) list_cale_time_pane_g

0xbd17,	// (0x000744d0) list_cale_time_pane_t1_ParamLimits

0xbd17,	// (0x000744d0) list_cale_time_pane_t1

0xbd3f,	// (0x000744f8) list_cale_time_pane_t2_ParamLimits

0xbd3f,	// (0x000744f8) list_cale_time_pane_t2

0x4afa,	// (0x0006d2b3) aid_blid_cardinal_pane

0x4b38,	// (0x0006d2f1) compass_pane_t4

0xbd67,	// (0x00074520) list_cale_time_pane_t4_ParamLimits

0xbd67,	// (0x00074520) list_cale_time_pane_t4

0x4b46,	// (0x0006d2ff) compass_pane_t5

0x4b54,	// (0x0006d30d) compass_pane_t6

0x4b62,	// (0x0006d31b) compass_pane_t7

0x10c3,	// (0x0006987c) navi_pane_cc_t1

0x1267,	// (0x00069a20) aid_phob_thumbnail_center_pane

0x5097,	// (0x0006d850) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00077ad7) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00077ad7) list_cale_time_pane_t

0xae51,	// (0x0007360a) bg_popup_window_pane_cp02_ParamLimits

0xae51,	// (0x0007360a) bg_popup_window_pane_cp02

0xbd8f,	// (0x00074548) heading_pane_cp01_ParamLimits

0xbd8f,	// (0x00074548) heading_pane_cp01

0xbd9b,	// (0x00074554) loc_req_pane_ParamLimits

0xbd9b,	// (0x00074554) loc_req_pane

0xbdab,	// (0x00074564) loc_type_pane_ParamLimits

0xbdab,	// (0x00074564) loc_type_pane

0xbdbd,	// (0x00074576) loc_type_pane_t1_ParamLimits

0xbdbd,	// (0x00074576) loc_type_pane_t1

0xbdcf,	// (0x00074588) loc_type_pane_t2_ParamLimits

0xbdcf,	// (0x00074588) loc_type_pane_t2

0xbde1,	// (0x0007459a) loc_type_pane_t3_ParamLimits

0xbde1,	// (0x0007459a) loc_type_pane_t3

0x0002,

0xf325,	// (0x00077ade) loc_type_pane_t_ParamLimits

0xf325,	// (0x00077ade) loc_type_pane_t

0xbdf3,	// (0x000745ac) list_loc_req_pane

0xbdfd,	// (0x000745b6) scroll_pane_cp012

0x485c,	// (0x0006d015) list_single_loc_request_popup_menu_pane_ParamLimits

0x485c,	// (0x0006d015) list_single_loc_request_popup_menu_pane

0xbe06,	// (0x000745bf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbe06,	// (0x000745bf) list_single_loc_request_popup_menu_pane_g1

0xbe12,	// (0x000745cb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbe12,	// (0x000745cb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00077ae5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00077ae5) list_single_loc_request_popup_menu_pane_g

0xbe1e,	// (0x000745d7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbe1e,	// (0x000745d7) list_single_loc_request_popup_menu_pane_t1

0xb453,	// (0x00073c0c) bg_popup_window_pane_cp03_ParamLimits

0xb453,	// (0x00073c0c) bg_popup_window_pane_cp03

0x1555,	// (0x00069d0e) heading_loc_req_pane_ParamLimits

0x1555,	// (0x00069d0e) heading_loc_req_pane

0x4869,	// (0x0006d022) popup_dyc_status_message_window_g1_ParamLimits

0x4869,	// (0x0006d022) popup_dyc_status_message_window_g1

0x487d,	// (0x0006d036) popup_dyc_status_message_window_t1_ParamLimits

0x487d,	// (0x0006d036) popup_dyc_status_message_window_t1

0x4892,	// (0x0006d04b) popup_dyc_status_message_window_t2_ParamLimits

0x4892,	// (0x0006d04b) popup_dyc_status_message_window_t2

0x48a7,	// (0x0006d060) popup_dyc_status_message_window_t3_ParamLimits

0x48a7,	// (0x0006d060) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00077aea) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00077aea) popup_dyc_status_message_window_t

0xb1f8,	// (0x000739b1) bg_heading_pane_cp01

0xbe34,	// (0x000745ed) heading_loc_req_pane_g1

0xbe3c,	// (0x000745f5) heading_loc_req_pane_g2

0xbe44,	// (0x000745fd) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00077af1) heading_loc_req_pane_g

0xbe4c,	// (0x00074605) heading_loc_req_pane_t1

0xbef5,	// (0x000746ae) bg_popup_sub_pane_cp01_ParamLimits

0xbef5,	// (0x000746ae) bg_popup_sub_pane_cp01

0xbf03,	// (0x000746bc) popup_cale_events_window_g1_ParamLimits

0xbf03,	// (0x000746bc) popup_cale_events_window_g1

0xbf23,	// (0x000746dc) popup_cale_events_window_g2_ParamLimits

0xbf23,	// (0x000746dc) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00077b25) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00077b25) popup_cale_events_window_g

0xbf43,	// (0x000746fc) popup_cale_events_window_t1_ParamLimits

0xbf43,	// (0x000746fc) popup_cale_events_window_t1

0xbf55,	// (0x0007470e) popup_cale_events_window_t2_ParamLimits

0xbf55,	// (0x0007470e) popup_cale_events_window_t2

0xbf93,	// (0x0007474c) popup_cale_events_window_t3_ParamLimits

0xbf93,	// (0x0007474c) popup_cale_events_window_t3

0xbfcd,	// (0x00074786) popup_cale_events_window_t4_ParamLimits

0xbfcd,	// (0x00074786) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00077b2a) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00077b2a) popup_cale_events_window_t

0x48dd,	// (0x0006d096) call_type_pane

0x48ed,	// (0x0006d0a6) popup_call_status_window_g1

0x4901,	// (0x0006d0ba) popup_call_status_window_g2

0x4915,	// (0x0006d0ce) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00077b33) popup_call_status_window_g

0xc003,	// (0x000747bc) call_type_pane_g1

0xc00c,	// (0x000747c5) call_type_pane_g2

0x0001,

0xf381,	// (0x00077b3a) call_type_pane_g

0xb1f8,	// (0x000739b1) bg_popup_sub_pane_cp02

0xc015,	// (0x000747ce) listscroll_popup_wml_pane

0xc01d,	// (0x000747d6) list_wml_pane

0xc027,	// (0x000747e0) scroll_pane_cp013

0x4925,	// (0x0006d0de) list_single_graphic_popup_wml_pane_ParamLimits

0x4925,	// (0x0006d0de) list_single_graphic_popup_wml_pane

0xb5e7,	// (0x00073da0) list_single_graphic_popup_wml_pane_g1

0xc030,	// (0x000747e9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00077b3f) list_single_graphic_popup_wml_pane_g

0xc038,	// (0x000747f1) list_single_graphic_popup_wml_pane_t1

0xc046,	// (0x000747ff) aid_call_pane

0xb44b,	// (0x00073c04) popup_clock_analogue_window_g1

0xb44b,	// (0x00073c04) popup_clock_analogue_window_g2

0xc04e,	// (0x00074807) popup_clock_analogue_window_g3

0xc04e,	// (0x00074807) popup_clock_analogue_window_g4

0xb5e7,	// (0x00073da0) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00077b44) popup_clock_analogue_window_g

0xc056,	// (0x0007480f) popup_clock_analogue_window_t1

0xc064,	// (0x0007481d) clock_digital_number_pane_ParamLimits

0xc064,	// (0x0007481d) clock_digital_number_pane

0xc070,	// (0x00074829) clock_digital_number_pane_cp02_ParamLimits

0xc070,	// (0x00074829) clock_digital_number_pane_cp02

0xc07c,	// (0x00074835) clock_digital_number_pane_cp03_ParamLimits

0xc07c,	// (0x00074835) clock_digital_number_pane_cp03

0xc088,	// (0x00074841) clock_digital_number_pane_cp04_ParamLimits

0xc088,	// (0x00074841) clock_digital_number_pane_cp04

0xc094,	// (0x0007484d) clock_digital_separator_pane_ParamLimits

0xc094,	// (0x0007484d) clock_digital_separator_pane

0xc0a0,	// (0x00074859) popup_clock_digital_window_t1

0xb5e7,	// (0x00073da0) clock_digital_number_pane_g1

0xb5e7,	// (0x00073da0) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00077ab2) clock_digital_number_pane_g

0xb5e7,	// (0x00073da0) clock_digital_separator_pane_g1

0xb5e7,	// (0x00073da0) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00077ab2) clock_digital_separator_pane_g

0xb1f8,	// (0x000739b1) bg_popup_window_pane_cp04

0x0eda,	// (0x00069693) heading_pane_cp03

0x0ee2,	// (0x0006969b) listscroll_popup_gms_pane

0x0eea,	// (0x000696a3) grid_large_graphic_popup_pane

0x0ef4,	// (0x000696ad) listscroll_popup_gms_pane_g1

0x0efc,	// (0x000696b5) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00077b4f) listscroll_popup_gms_pane_g

0xba5a,	// (0x00074213) scroll_pane_cp014

0x4938,	// (0x0006d0f1) cell_large_graphic_popup_pane_ParamLimits

0x4938,	// (0x0006d0f1) cell_large_graphic_popup_pane

0x494e,	// (0x0006d107) cell_large_graphic_popup_pane_g1_ParamLimits

0x494e,	// (0x0006d107) cell_large_graphic_popup_pane_g1

0x0f04,	// (0x000696bd) cell_large_graphic_popup_pane_g2_ParamLimits

0x0f04,	// (0x000696bd) cell_large_graphic_popup_pane_g2

0x0f10,	// (0x000696c9) cell_large_graphic_popup_pane_g3_ParamLimits

0x0f10,	// (0x000696c9) cell_large_graphic_popup_pane_g3

0x0f1d,	// (0x000696d6) cell_large_graphic_popup_pane_g4_ParamLimits

0x0f1d,	// (0x000696d6) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00077b54) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00077b54) cell_large_graphic_popup_pane_g

0x0f2d,	// (0x000696e6) grid_highlight_pane_cp010

0xb5e7,	// (0x00073da0) bg_popup_call_pane_g1

0x0f37,	// (0x000696f0) list_single_graphic_popup_conf_pane_ParamLimits

0x0f37,	// (0x000696f0) list_single_graphic_popup_conf_pane

0x0f4a,	// (0x00069703) list_highlight_pane_cp01

0x0f53,	// (0x0006970c) list_single_graphic_popup_conf_pane_g1

0x0f5b,	// (0x00069714) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00077b5d) list_single_graphic_popup_conf_pane_g

0x0f63,	// (0x0006971c) list_single_graphic_popup_conf_pane_t1

0x0f71,	// (0x0006972a) linegrid_cams_pane_g1

0x495a,	// (0x0006d113) linegrid_cams_pane_g2

0xb6f2,	// (0x00073eab) linegrid_cams_pane_g3

0x0f7a,	// (0x00069733) linegrid_cams_pane_g4

0x4963,	// (0x0006d11c) linegrid_cams_pane_g5

0x496c,	// (0x0006d125) linegrid_cams_pane_g6

0xb787,	// (0x00073f40) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00077b62) linegrid_cams_pane_g

0x0f83,	// (0x0006973c) popup_clock_analogue_window

0x0f83,	// (0x0006973c) popup_clock_digital_window

0xb1f8,	// (0x000739b1) popup_phob_thumbnail_window

0xb5e7,	// (0x00073da0) call_video_uplink_pane_g1

0x0f8c,	// (0x00069745) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00077b71) call_video_uplink_pane_g

0xb754,	// (0x00073f0d) video_uplink_pane

0x0f94,	// (0x0006974d) mce_image_pane_g1

0x4975,	// (0x0006d12e) mce_image_pane_g2

0x497d,	// (0x0006d136) mce_image_pane_g3

0x4985,	// (0x0006d13e) mce_image_pane_g4

0x498d,	// (0x0006d146) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00077b76) mce_image_pane_g

0x0f9e,	// (0x00069757) control_top_pane_stacon_cp01_ParamLimits

0x0f9e,	// (0x00069757) control_top_pane_stacon_cp01

0x0fae,	// (0x00069767) uni_indicator_pane_stacon_cp01_ParamLimits

0x0fae,	// (0x00069767) uni_indicator_pane_stacon_cp01

0x0fbf,	// (0x00069778) bg_popup_sub_pane_cp03

0x0fc9,	// (0x00069782) chi_dic_find_pane

0x4995,	// (0x0006d14e) listscroll_chi_dic_pane

0x0fd1,	// (0x0006978a) main_pane_chidic_g1

0x0fd9,	// (0x00069792) chi_dic_find_pane_t1

0x0fe7,	// (0x000697a0) find_chidic_pane

0x0ff0,	// (0x000697a9) chi_dic_list_pane_ParamLimits

0x0ff0,	// (0x000697a9) chi_dic_list_pane

0x1001,	// (0x000697ba) scroll_pane_cp020

0x1009,	// (0x000697c2) find_chidic_pane_t1

0xb1f8,	// (0x000739b1) input_focus_pane_cp06

0x49a9,	// (0x0006d162) list_chi_dic_pane_ParamLimits

0x49a9,	// (0x0006d162) list_chi_dic_pane

0x49bb,	// (0x0006d174) list_chi_dic_pane_t1_ParamLimits

0x49bb,	// (0x0006d174) list_chi_dic_pane_t1

0xb1f8,	// (0x000739b1) list_highlight_pane_cp020

0x1018,	// (0x000697d1) bg_cale_heading_pane_g1

0x49ce,	// (0x0006d187) bg_cale_heading_pane_g2

0x49d6,	// (0x0006d18f) bg_cale_heading_pane_g3

0x49de,	// (0x0006d197) bg_cale_heading_pane_g4

0x49e8,	// (0x0006d1a1) bg_cale_heading_pane_g5

0x49f2,	// (0x0006d1ab) bg_cale_heading_pane_g6

0x49fa,	// (0x0006d1b3) bg_cale_heading_pane_g7

0x4a02,	// (0x0006d1bb) bg_cale_heading_pane_g8

0x4a0c,	// (0x0006d1c5) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00077b81) bg_cale_heading_pane_g

0x1018,	// (0x000697d1) bg_cale_side_pane_g1

0x4a16,	// (0x0006d1cf) bg_cale_side_pane_g2

0x4a1e,	// (0x0006d1d7) bg_cale_side_pane_g3

0x4a26,	// (0x0006d1df) bg_cale_side_pane_g4

0x4a2e,	// (0x0006d1e7) bg_cale_side_pane_g5

0x4a36,	// (0x0006d1ef) bg_cale_side_pane_g6

0x4a3e,	// (0x0006d1f7) bg_cale_side_pane_g7

0x4a46,	// (0x0006d1ff) bg_cale_side_pane_g8

0x4a4e,	// (0x0006d207) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00077b94) bg_cale_side_pane_g

0x4a56,	// (0x0006d20f) popup_call_status_window_ParamLimits

0x4a56,	// (0x0006d20f) popup_call_status_window

0x1020,	// (0x000697d9) stacon_top_pane

0x1028,	// (0x000697e1) status_pane_ParamLimits

0x1028,	// (0x000697e1) status_pane

0x1042,	// (0x000697fb) status_small_pane

0x104a,	// (0x00069803) control_pane

0xb1f8,	// (0x000739b1) stacon_bottom_pane

0x1052,	// (0x0006980b) list_single_mce_smart_pane_t1_ParamLimits

0x1052,	// (0x0006980b) list_single_mce_smart_pane_t1

0x1065,	// (0x0006981e) list_single_mce_smart_pane_t2_ParamLimits

0x1065,	// (0x0006981e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00077ba7) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00077ba7) list_single_mce_smart_pane_t

0x4a9d,	// (0x0006d256) compass_pane

0x4aa6,	// (0x0006d25f) main_location2_pane_t1

0x4abc,	// (0x0006d275) main_location2_pane_t2

0x4ad2,	// (0x0006d28b) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00077bac) main_location2_pane_t

0x108d,	// (0x00069846) compass_pane_g1_ParamLimits

0x108d,	// (0x00069846) compass_pane_g1

0x4b1a,	// (0x0006d2d3) compass_pane_t1

0x4b29,	// (0x0006d2e2) compass_pane_t2

0x0005,

0xf3fc,	// (0x00077bb5) compass_pane_t

0x4b70,	// (0x0006d329) text_secondary_cp61

0x10ba,	// (0x00069873) navi_pane_cams_g5

0x10fb,	// (0x000698b4) navi_pane_im_t1

0x1109,	// (0x000698c2) navi_pane_mp_g1_ParamLimits

0x1109,	// (0x000698c2) navi_pane_mp_g1

0x111d,	// (0x000698d6) navi_pane_mp_g2_ParamLimits

0x111d,	// (0x000698d6) navi_pane_mp_g2

0x1129,	// (0x000698e2) navi_pane_mp_g3_ParamLimits

0x1129,	// (0x000698e2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00077bc9) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00077bc9) navi_pane_mp_g

0x1135,	// (0x000698ee) navi_pane_mp_t1

0x1143,	// (0x000698fc) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00077bd0) navi_pane_mp_t

0x11b0,	// (0x00069969) navi_pane_vt_g1

0x1135,	// (0x000698ee) navi_pane_vt_t1

0x11b8,	// (0x00069971) navi_slider_pane

0x11c0,	// (0x00069979) zooming_pane

0x11c8,	// (0x00069981) navi_slider_pane_g1

0xc0bd,	// (0x00074876) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00077bd7) navi_slider_pane_g

0x11ec,	// (0x000699a5) aid_levels_zoom

0x11f4,	// (0x000699ad) zooming_pane_g1

0x11fc,	// (0x000699b5) zooming_pane_g2

0x11fc,	// (0x000699b5) zooming_pane_g3

0x0002,

0xf42d,	// (0x00077be6) zooming_pane_g

0x1204,	// (0x000699bd) level_10_zoom

0x120d,	// (0x000699c6) level_11_zoom

0x1216,	// (0x000699cf) level_1_zoom

0x121f,	// (0x000699d8) level_2_zoom

0x1228,	// (0x000699e1) level_3_zoom

0x1231,	// (0x000699ea) level_4_zoom

0x123a,	// (0x000699f3) level_5_zoom

0x1243,	// (0x000699fc) level_6_zoom

0x124c,	// (0x00069a05) level_7_zoom

0x1255,	// (0x00069a0e) level_8_zoom

0x125e,	// (0x00069a17) level_9_zoom

0x126f,	// (0x00069a28) popup_phob_thumbnail_window_g1

0x1277,	// (0x00069a30) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00077bed) popup_phob_thumbnail_window_g

0xc478,	// (0x00074c31) level_1_location

0xc480,	// (0x00074c39) level_2_location

0xc488,	// (0x00074c41) level_3_location

0xc490,	// (0x00074c49) level_4_location

0x11c0,	// (0x00069979) level_5_location

0x4bfb,	// (0x0006d3b4) mce_icon_pane_g1

0x4c03,	// (0x0006d3bc) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00077bf2) mce_icon_pane_g

0x4c0b,	// (0x0006d3c4) main_mup_pane_g1_ParamLimits

0x4c0b,	// (0x0006d3c4) main_mup_pane_g1

0x4c21,	// (0x0006d3da) main_mup_pane_g2_ParamLimits

0x4c21,	// (0x0006d3da) main_mup_pane_g2

0x4c39,	// (0x0006d3f2) main_mup_pane_g3_ParamLimits

0x4c39,	// (0x0006d3f2) main_mup_pane_g3

0x4c51,	// (0x0006d40a) main_mup_pane_g4_ParamLimits

0x4c51,	// (0x0006d40a) main_mup_pane_g4

0x4c69,	// (0x0006d422) main_mup_pane_g5_ParamLimits

0x4c69,	// (0x0006d422) main_mup_pane_g5

0x4c83,	// (0x0006d43c) main_mup_pane_g6_ParamLimits

0x4c83,	// (0x0006d43c) main_mup_pane_g6

0x4c9b,	// (0x0006d454) main_mup_pane_g7_ParamLimits

0x4c9b,	// (0x0006d454) main_mup_pane_g7

0x4cb3,	// (0x0006d46c) main_mup_pane_g8_ParamLimits

0x4cb3,	// (0x0006d46c) main_mup_pane_g8

0x4ccb,	// (0x0006d484) main_mup_pane_g9_ParamLimits

0x4ccb,	// (0x0006d484) main_mup_pane_g9

0x4cdf,	// (0x0006d498) main_mup_pane_g10_ParamLimits

0x4cdf,	// (0x0006d498) main_mup_pane_g10

0x4cf3,	// (0x0006d4ac) main_mup_pane_g11_ParamLimits

0x4cf3,	// (0x0006d4ac) main_mup_pane_g11

0x4d05,	// (0x0006d4be) main_mup_pane_g12_ParamLimits

0x4d05,	// (0x0006d4be) main_mup_pane_g12

0x4d19,	// (0x0006d4d2) main_mup_pane_g13_ParamLimits

0x4d19,	// (0x0006d4d2) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00077bf7) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00077bf7) main_mup_pane_g

0x4d2b,	// (0x0006d4e4) main_mup_pane_t1_ParamLimits

0x4d2b,	// (0x0006d4e4) main_mup_pane_t1

0x4d45,	// (0x0006d4fe) main_mup_pane_t2_ParamLimits

0x4d45,	// (0x0006d4fe) main_mup_pane_t2

0x4d5d,	// (0x0006d516) main_mup_pane_t3_ParamLimits

0x4d5d,	// (0x0006d516) main_mup_pane_t3

0x4d75,	// (0x0006d52e) main_mup_pane_t4_ParamLimits

0x4d75,	// (0x0006d52e) main_mup_pane_t4

0x4d93,	// (0x0006d54c) main_mup_pane_t5_ParamLimits

0x4d93,	// (0x0006d54c) main_mup_pane_t5

0x4da8,	// (0x0006d561) main_mup_pane_t6_ParamLimits

0x4da8,	// (0x0006d561) main_mup_pane_t6

0x0005,

0xf459,	// (0x00077c12) main_mup_pane_t_ParamLimits

0xf459,	// (0x00077c12) main_mup_pane_t

0x4dba,	// (0x0006d573) mup_progress_pane_ParamLimits

0x4dba,	// (0x0006d573) mup_progress_pane

0x4dc6,	// (0x0006d57f) mup_visualizer_pane_ParamLimits

0x4dc6,	// (0x0006d57f) mup_visualizer_pane

0x4dee,	// (0x0006d5a7) mup_volume_pane_ParamLimits

0x4dee,	// (0x0006d5a7) mup_volume_pane

0xc0cf,	// (0x00074888) mup_visualizer_pane_g1_ParamLimits

0xc0cf,	// (0x00074888) mup_visualizer_pane_g1

0xc0cf,	// (0x00074888) mup_visualizer_pane_g2_ParamLimits

0xc0cf,	// (0x00074888) mup_visualizer_pane_g2

0x108d,	// (0x00069846) mup_visualizer_pane_g3_ParamLimits

0x108d,	// (0x00069846) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00077c1f) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00077c1f) mup_visualizer_pane_g

0xb5e7,	// (0x00073da0) mup_volume_pane_g1

0x1287,	// (0x00069a40) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00077c26) mup_volume_pane_g

0xb5e7,	// (0x00073da0) mup_progress_pane_g1

0x1290,	// (0x00069a49) mup_progress_pane_g2

0x1299,	// (0x00069a52) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00077c2b) mup_progress_pane_g

0xb1f8,	// (0x000739b1) bg_popup_window_pane_cp05

0x12a2,	// (0x00069a5b) heading_pane_cp02_ParamLimits

0x12a2,	// (0x00069a5b) heading_pane_cp02

0x12bc,	// (0x00069a75) list_popup_blid_pane

0x12c4,	// (0x00069a7d) list_blid_sat_info_pane_ParamLimits

0x12c4,	// (0x00069a7d) list_blid_sat_info_pane

0x12d7,	// (0x00069a90) list_blid_sat_info_pane_g1

0x12df,	// (0x00069a98) list_blid_sat_info_pane_t1

0x4ede,	// (0x0006d697) mup_equalizer_pane_ParamLimits

0x4ede,	// (0x0006d697) mup_equalizer_pane

0x4ef7,	// (0x0006d6b0) mup_equalizer_pane_cp1_ParamLimits

0x4ef7,	// (0x0006d6b0) mup_equalizer_pane_cp1

0x4f10,	// (0x0006d6c9) mup_equalizer_pane_cp2_ParamLimits

0x4f10,	// (0x0006d6c9) mup_equalizer_pane_cp2

0x4f29,	// (0x0006d6e2) mup_equalizer_pane_cp3_ParamLimits

0x4f29,	// (0x0006d6e2) mup_equalizer_pane_cp3

0x4f42,	// (0x0006d6fb) mup_equalizer_pane_cp4_ParamLimits

0x4f42,	// (0x0006d6fb) mup_equalizer_pane_cp4

0x4f5b,	// (0x0006d714) mup_equalizer_pane_cp5

0x4f6d,	// (0x0006d726) mup_equalizer_pane_cp6

0x4f7f,	// (0x0006d738) mup_equalizer_pane_cp7

0xc356,	// (0x00074b0f) bg_popup_call_poc_act_pane_g9

0xc35e,	// (0x00074b17) bg_popup_call_poc_act_pane_g10

0xc366,	// (0x00074b1f) bg_popup_call_poc_act_pane_g11

0x000a,

0xb453,	// (0x00073c0c) mup_scale_pane

0xb5e7,	// (0x00073da0) mup_scale_pane_g1

0x12ed,	// (0x00069aa6) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00077c47) mup_scale_pane_g

0x1311,	// (0x00069aca) msg_data_pane

0x1319,	// (0x00069ad2) scroll_pane_cp017

0x2502,	// (0x0006acbb) bg_list_pane_cp04_ParamLimits

0x2502,	// (0x0006acbb) bg_list_pane_cp04

0x1321,	// (0x00069ada) msg_data_pane_g1

0x4975,	// (0x0006d12e) msg_data_pane_g2

0x497d,	// (0x0006d136) msg_data_pane_g3

0x4fa5,	// (0x0006d75e) msg_data_pane_g4

0x498d,	// (0x0006d146) msg_data_pane_g5

0x4bfb,	// (0x0006d3b4) msg_data_pane_g6

0x4fad,	// (0x0006d766) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00077c56) msg_data_pane_g

0x251a,	// (0x0006acd3) msg_text_pane_ParamLimits

0x251a,	// (0x0006acd3) msg_text_pane

0x4fb5,	// (0x0006d76e) qrid_highlight_pane_cp011_ParamLimits

0x4fb5,	// (0x0006d76e) qrid_highlight_pane_cp011

0xb1f8,	// (0x000739b1) msg_body_pane

0xb1f8,	// (0x000739b1) msg_header_pane

0x1332,	// (0x00069aeb) input_focus_pane_cp07

0x2548,	// (0x0006ad01) msg_header_pane_t1_ParamLimits

0x2548,	// (0x0006ad01) msg_header_pane_t1

0x255a,	// (0x0006ad13) msg_header_pane_t2_ParamLimits

0x255a,	// (0x0006ad13) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00077c6a) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00077c6a) msg_header_pane_t

0x1347,	// (0x00069b00) msg_body_pane_g1

0x256c,	// (0x0006ad25) msg_body_pane_t1_ParamLimits

0x256c,	// (0x0006ad25) msg_body_pane_t1

0x2597,	// (0x0006ad50) msg_body_pane_t2_ParamLimits

0x2597,	// (0x0006ad50) msg_body_pane_t2

0x25a9,	// (0x0006ad62) msg_body_pane_t3_ParamLimits

0x25a9,	// (0x0006ad62) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00077c6f) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00077c6f) msg_body_pane_t

0x5001,	// (0x0006d7ba) main_viewer_pane_g1_ParamLimits

0x5001,	// (0x0006d7ba) main_viewer_pane_g1

0x500d,	// (0x0006d7c6) main_viewer_pane_g2_ParamLimits

0x500d,	// (0x0006d7c6) main_viewer_pane_g2

0x5019,	// (0x0006d7d2) main_viewer_pane_g3_ParamLimits

0x5019,	// (0x0006d7d2) main_viewer_pane_g3

0x5028,	// (0x0006d7e1) main_viewer_pane_g4_ParamLimits

0x5028,	// (0x0006d7e1) main_viewer_pane_g4

0xebb0,	// (0x00077369) main_viewer_pane_g5_ParamLimits

0xebb0,	// (0x00077369) main_viewer_pane_g5

0xebb0,	// (0x00077369) main_viewer_pane_g7_ParamLimits

0xebb0,	// (0x00077369) main_viewer_pane_g7

0xebc2,	// (0x0007737b) main_viewer_pane_g8_ParamLimits

0xebc2,	// (0x0007737b) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00077c7f) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00077c7f) main_viewer_pane_g

0x134f,	// (0x00069b08) viewer_content_pane_ParamLimits

0x134f,	// (0x00069b08) viewer_content_pane

0x505c,	// (0x0006d815) main_postcard_pane_g1_ParamLimits

0x505c,	// (0x0006d815) main_postcard_pane_g1

0x5070,	// (0x0006d829) main_postcard_pane_g2_ParamLimits

0x5070,	// (0x0006d829) main_postcard_pane_g2

0x5084,	// (0x0006d83d) main_postcard_pane_g3_ParamLimits

0x5084,	// (0x0006d83d) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00077c90) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00077c90) main_postcard_pane_g

0x5097,	// (0x0006d850) main_postcard_pane_g4

0xc5a7,	// (0x00074d60) smil_status_volume_pane_g2

0x50d2,	// (0x0006d88b) postcard_pane_ParamLimits

0x50d2,	// (0x0006d88b) postcard_pane

0x136b,	// (0x00069b24) postcard_pane_g1_ParamLimits

0x136b,	// (0x00069b24) postcard_pane_g1

0x5112,	// (0x0006d8cb) postcard_pane_g2_ParamLimits

0x5112,	// (0x0006d8cb) postcard_pane_g2

0x511e,	// (0x0006d8d7) postcard_pane_g3_ParamLimits

0x511e,	// (0x0006d8d7) postcard_pane_g3

0x135d,	// (0x00069b16) postcard_pane_g4_ParamLimits

0x135d,	// (0x00069b16) postcard_pane_g4

0x512a,	// (0x0006d8e3) postcard_pane_g5_ParamLimits

0x512a,	// (0x0006d8e3) postcard_pane_g5

0x513f,	// (0x0006d8f8) postcard_pane_g6_ParamLimits

0x513f,	// (0x0006d8f8) postcard_pane_g6

0x136b,	// (0x00069b24) postcard_pane_g7_ParamLimits

0x136b,	// (0x00069b24) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00077c9d) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00077c9d) postcard_pane_g

0x5153,	// (0x0006d90c) main_mp2_pane_g1_ParamLimits

0x5153,	// (0x0006d90c) main_mp2_pane_g1

0x515f,	// (0x0006d918) main_mp2_pane_g2_ParamLimits

0x515f,	// (0x0006d918) main_mp2_pane_g2

0x516b,	// (0x0006d924) main_mp2_pane_g3_ParamLimits

0x516b,	// (0x0006d924) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00077cac) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00077cac) main_mp2_pane_g

0x5177,	// (0x0006d930) main_mp2_pane_t1_ParamLimits

0x5177,	// (0x0006d930) main_mp2_pane_t1

0x518c,	// (0x0006d945) main_mp2_pane_t2_ParamLimits

0x518c,	// (0x0006d945) main_mp2_pane_t2

0x519e,	// (0x0006d957) main_mp2_pane_t3_ParamLimits

0x519e,	// (0x0006d957) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00077cb3) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00077cb3) main_mp2_pane_t

0x1379,	// (0x00069b32) pec_content_pane_ParamLimits

0x1379,	// (0x00069b32) pec_content_pane

0xba5a,	// (0x00074213) scroll_pane_cp015

0x138b,	// (0x00069b44) pec_attribute_pane_ParamLimits

0x138b,	// (0x00069b44) pec_attribute_pane

0x51b0,	// (0x0006d969) pec_content_pane_g1_ParamLimits

0x51b0,	// (0x0006d969) pec_content_pane_g1

0x139b,	// (0x00069b54) pec_content_pane_t1_ParamLimits

0x139b,	// (0x00069b54) pec_content_pane_t1

0x13ad,	// (0x00069b66) pec_content_pane_t2_ParamLimits

0x13ad,	// (0x00069b66) pec_content_pane_t2

0x0001,

0xf501,	// (0x00077cba) pec_content_pane_t_ParamLimits

0xf501,	// (0x00077cba) pec_content_pane_t

0x51bc,	// (0x0006d975) list_single_graphic_pane_cp01_ParamLimits

0x51bc,	// (0x0006d975) list_single_graphic_pane_cp01

0xb453,	// (0x00073c0c) bg_popup_sub_pane_cp04

0x13bf,	// (0x00069b78) popup_mup_playback_window_g1

0x13cb,	// (0x00069b84) popup_mup_playback_window_t1

0x13e0,	// (0x00069b99) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00077cbf) popup_mup_playback_window_t

0x1417,	// (0x00069bd0) main_image_pane_g1_ParamLimits

0x1417,	// (0x00069bd0) main_image_pane_g1

0x145a,	// (0x00069c13) scroll_pane_cp018_ParamLimits

0x145a,	// (0x00069c13) scroll_pane_cp018

0x1472,	// (0x00069c2b) scroll_pane_cp016_ParamLimits

0x1472,	// (0x00069c2b) scroll_pane_cp016

0x5287,	// (0x0006da40) smil2_image_pane_ParamLimits

0x5287,	// (0x0006da40) smil2_image_pane

0x52af,	// (0x0006da68) smil2_root_pane_ParamLimits

0x52af,	// (0x0006da68) smil2_root_pane

0x52e7,	// (0x0006daa0) smil2_text_pane_ParamLimits

0x52e7,	// (0x0006daa0) smil2_text_pane

0xb1f8,	// (0x000739b1) bg_list_pane_cp06

0x14a6,	// (0x00069c5f) grid_radio_pane

0xb1f8,	// (0x000739b1) bg_popup_window_pane_cp06

0x14ae,	// (0x00069c67) main_fmradio_pane_t1

0x0eda,	// (0x00069693) heading_pane_cp04

0x14bc,	// (0x00069c75) main_fmradio_pane_t2

0xc3ae,	// (0x00074b67) popup_cale_lunar_info_window_g1

0x14ca,	// (0x00069c83) main_fmradio_pane_t3

0xc3b6,	// (0x00074b6f) popup_cale_lunar_info_window_g2

0x14d8,	// (0x00069c91) main_fmradio_pane_t4

0x0001,

0x14e6,	// (0x00069c9f) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x00077dad) popup_cale_lunar_info_window_g

0xf51b,	// (0x00077cd4) main_fmradio_pane_t

0x14f4,	// (0x00069cad) wait_bar_pane_cp03

0xc0e5,	// (0x0007489e) cell_fmradio_pane_ParamLimits

0xc0e5,	// (0x0007489e) cell_fmradio_pane

0x136b,	// (0x00069b24) cell_fmradio_pane_g1_ParamLimits

0x136b,	// (0x00069b24) cell_fmradio_pane_g1

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp011

0x14fc,	// (0x00069cb5) poc_content_pane_ParamLimits

0x14fc,	// (0x00069cb5) poc_content_pane

0x150f,	// (0x00069cc8) scroll_pane_cp019

0x5353,	// (0x0006db0c) popup_call_poc_act_window_ParamLimits

0x5353,	// (0x0006db0c) popup_call_poc_act_window

0x5373,	// (0x0006db2c) popup_call_poc_inact_window_ParamLimits

0x5373,	// (0x0006db2c) popup_call_poc_inact_window

0xf5b8,	// (0x00077d71) bg_popup_call_poc_act_pane_g

0xc36e,	// (0x00074b27) bg_popup_call_poc_inact_pane_g1

0xc376,	// (0x00074b2f) bg_popup_call_poc_inact_pane_g2

0x1517,	// (0x00069cd0) popup_call_poc_act_window_g2

0xc37e,	// (0x00074b37) bg_popup_call_poc_inact_pane_g3

0xc2fe,	// (0x00074ab7) bg_popup_call_poc_inact_pane_g4

0xc386,	// (0x00074b3f) bg_popup_call_poc_inact_pane_g5

0x151f,	// (0x00069cd8) popup_call_poc_act_window_t1_ParamLimits

0x151f,	// (0x00069cd8) popup_call_poc_act_window_t1

0x5388,	// (0x0006db41) popup_call_poc_act_window_t2_ParamLimits

0x5388,	// (0x0006db41) popup_call_poc_act_window_t2

0x53b0,	// (0x0006db69) popup_call_poc_act_window_t3_ParamLimits

0x53b0,	// (0x0006db69) popup_call_poc_act_window_t3

0x53d8,	// (0x0006db91) popup_call_poc_act_window_t4_ParamLimits

0x53d8,	// (0x0006db91) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00077cdf) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00077cdf) popup_call_poc_act_window_t

0xc38e,	// (0x00074b47) bg_popup_call_poc_inact_pane_g6

0xc396,	// (0x00074b4f) bg_popup_call_poc_inact_pane_g7

0xc39e,	// (0x00074b57) bg_popup_call_poc_inact_pane_g8

0x53ea,	// (0x0006dba3) popup_call_poc_inact_window_g2

0xc3a6,	// (0x00074b5f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x00077d88) bg_popup_call_poc_inact_pane_g

0x53f2,	// (0x0006dbab) popup_call_poc_inact_window_t1_ParamLimits

0x53f2,	// (0x0006dbab) popup_call_poc_inact_window_t1

0x5407,	// (0x0006dbc0) popup_call_poc_inact_window_t2_ParamLimits

0x5407,	// (0x0006dbc0) popup_call_poc_inact_window_t2

0x541c,	// (0x0006dbd5) popup_call_poc_inact_window_t3_ParamLimits

0x541c,	// (0x0006dbd5) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00077ce8) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00077ce8) popup_call_poc_inact_window_t

0xc51a,	// (0x00074cd3) context_pane_ParamLimits

0x6735,	// (0x0006eeee) signal_pane_ParamLimits

0x11c0,	// (0x00069979) main_call2_pane

0xc508,	// (0x00074cc1) popup_phob_thumbnail2_window_ParamLimits

0xc508,	// (0x00074cc1) popup_phob_thumbnail2_window

0xeb98,	// (0x00077351) aid_hotspot_pointer_arrow_pane

0xeba0,	// (0x00077359) aid_hotspot_pointer_hand_pane

0x62f8,	// (0x0006eab1) phob_pre_status_pane_g5

0x397b,	// (0x0006c134) cams_zoom_pane_ParamLimits

0x398a,	// (0x0006c143) image_vga_pane_ParamLimits

0x39a2,	// (0x0006c15b) main_camera_pane_g1_ParamLimits

0x39b2,	// (0x0006c16b) main_camera_pane_g2_ParamLimits

0x39c2,	// (0x0006c17b) main_camera_pane_g3_ParamLimits

0x39d2,	// (0x0006c18b) main_camera_pane_g4_ParamLimits

0x39e2,	// (0x0006c19b) main_camera_pane_g5_ParamLimits

0x39f2,	// (0x0006c1ab) main_camera_pane_g6_ParamLimits

0x3a02,	// (0x0006c1bb) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000779e7) main_camera_pane_g_ParamLimits

0x3a12,	// (0x0006c1cb) main_camera_pane_t1_ParamLimits

0x3a28,	// (0x0006c1e1) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000779f8) main_camera_pane_t_ParamLimits

0xb453,	// (0x00073c0c) bg_popup_preview_window_pane_cp01_ParamLimits

0xb453,	// (0x00073c0c) bg_popup_preview_window_pane_cp01

0x5431,	// (0x0006dbea) popup_phob_thumbnail2_window_g1_ParamLimits

0x5431,	// (0x0006dbea) popup_phob_thumbnail2_window_g1

0xb1f8,	// (0x000739b1) call2_cli_visual_pane

0x5454,	// (0x0006dc0d) popup_call2_audio_conf_window_ParamLimits

0x5454,	// (0x0006dc0d) popup_call2_audio_conf_window

0x5472,	// (0x0006dc2b) popup_call2_audio_first_window_ParamLimits

0x5472,	// (0x0006dc2b) popup_call2_audio_first_window

0x54e8,	// (0x0006dca1) popup_call2_audio_in_window_ParamLimits

0x54e8,	// (0x0006dca1) popup_call2_audio_in_window

0x551c,	// (0x0006dcd5) popup_call2_audio_out_window_ParamLimits

0x551c,	// (0x0006dcd5) popup_call2_audio_out_window

0x556e,	// (0x0006dd27) popup_call2_audio_second_window_ParamLimits

0x556e,	// (0x0006dd27) popup_call2_audio_second_window

0x55c0,	// (0x0006dd79) popup_call2_audio_wait_window_ParamLimits

0x55c0,	// (0x0006dd79) popup_call2_audio_wait_window

0xb1f8,	// (0x000739b1) bg_popup_call2_act_pane_cp03

0xb435,	// (0x00073bee) list_conf_pane_cp

0x55f8,	// (0x0006ddb1) popup_call2_audio_conf_window_t1

0x0f37,	// (0x000696f0) list_single_graphic_popup_conf2_pane_ParamLimits

0x0f37,	// (0x000696f0) list_single_graphic_popup_conf2_pane

0x0f4a,	// (0x00069703) list_highlight_pane_cp04

0x5606,	// (0x0006ddbf) list_single_graphic_popup_conf2_pane_g1

0x0f5b,	// (0x00069714) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00077cef) list_single_graphic_popup_conf2_pane_g

0x560e,	// (0x0006ddc7) list_single_graphic_popup_conf2_pane_t1

0x561c,	// (0x0006ddd5) bg_popup_call2_act_pane_cp01_ParamLimits

0x561c,	// (0x0006ddd5) bg_popup_call2_act_pane_cp01

0x56a6,	// (0x0006de5f) call_type_pane_cp05_ParamLimits

0x56a6,	// (0x0006de5f) call_type_pane_cp05

0x56fa,	// (0x0006deb3) popup_call2_audio_second_window_g1_ParamLimits

0x56fa,	// (0x0006deb3) popup_call2_audio_second_window_g1

0x574e,	// (0x0006df07) popup_call2_audio_second_window_g2_ParamLimits

0x574e,	// (0x0006df07) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00077cf4) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00077cf4) popup_call2_audio_second_window_g

0x57b3,	// (0x0006df6c) popup_call2_audio_second_window_t1_ParamLimits

0x57b3,	// (0x0006df6c) popup_call2_audio_second_window_t1

0x586e,	// (0x0006e027) popup_call2_audio_second_window_t2_ParamLimits

0x586e,	// (0x0006e027) popup_call2_audio_second_window_t2

0x58c1,	// (0x0006e07a) popup_call2_audio_second_window_t3_ParamLimits

0x58c1,	// (0x0006e07a) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00077cfb) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00077cfb) popup_call2_audio_second_window_t

0xb1f8,	// (0x000739b1) bg_popup_call2_in_pane_cp02

0xb202,	// (0x000739bb) call_type_pane_cp04

0xb20a,	// (0x000739c3) popup_call2_audio_wait_window_g1

0xb212,	// (0x000739cb) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000778d4) popup_call2_audio_wait_window_g

0xb21a,	// (0x000739d3) popup_call2_audio_wait_window_t3

0x59b4,	// (0x0006e16d) bg_popup_call2_act_pane_ParamLimits

0x59b4,	// (0x0006e16d) bg_popup_call2_act_pane

0x5a74,	// (0x0006e22d) call_type_pane_cp03_ParamLimits

0x5a74,	// (0x0006e22d) call_type_pane_cp03

0x5ad8,	// (0x0006e291) popup_call2_audio_first_window_g1_ParamLimits

0x5ad8,	// (0x0006e291) popup_call2_audio_first_window_g1

0x5b48,	// (0x0006e301) popup_call2_audio_first_window_g2_ParamLimits

0x5b48,	// (0x0006e301) popup_call2_audio_first_window_g2

0xc0cf,	// (0x00074888) popup_call2_audio_first_window_g3_ParamLimits

0xc0cf,	// (0x00074888) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00077d04) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00077d04) popup_call2_audio_first_window_g

0x5c26,	// (0x0006e3df) popup_call2_audio_first_window_t1_ParamLimits

0x5c26,	// (0x0006e3df) popup_call2_audio_first_window_t1

0x5d29,	// (0x0006e4e2) popup_call2_audio_first_window_t4_ParamLimits

0x5d29,	// (0x0006e4e2) popup_call2_audio_first_window_t4

0x5e0c,	// (0x0006e5c5) popup_call2_audio_first_window_t5_ParamLimits

0x5e0c,	// (0x0006e5c5) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00077d0f) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00077d0f) popup_call2_audio_first_window_t

0xb44b,	// (0x00073c04) bg_popup_call2_act_pane_g1

0xc3be,	// (0x00074b77) popup_cale_lunar_info_window_t1

0xc3cc,	// (0x00074b85) popup_cale_lunar_info_window_t2

0xc3da,	// (0x00074b93) popup_cale_lunar_info_window_t3

0xb1f8,	// (0x000739b1) bg_popup_call2_bubble_pane

0x5f0d,	// (0x0006e6c6) bg_popup_call2_in_pane_cp01_ParamLimits

0x5f0d,	// (0x0006e6c6) bg_popup_call2_in_pane_cp01

0xaed4,	// (0x0007368d) call_type_pane_cp02

0x5f55,	// (0x0006e70e) popup_call2_audio_out_window_g1_ParamLimits

0x5f55,	// (0x0006e70e) popup_call2_audio_out_window_g1

0x5f81,	// (0x0006e73a) popup_call2_audio_out_window_g2_ParamLimits

0x5f81,	// (0x0006e73a) popup_call2_audio_out_window_g2

0x5fa9,	// (0x0006e762) popup_call2_audio_out_window_g3_ParamLimits

0x5fa9,	// (0x0006e762) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00077d18) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00077d18) popup_call2_audio_out_window_g

0x5fe4,	// (0x0006e79d) popup_call2_audio_out_window_t1_ParamLimits

0x5fe4,	// (0x0006e79d) popup_call2_audio_out_window_t1

0x6043,	// (0x0006e7fc) popup_call2_audio_out_window_t2_ParamLimits

0x6043,	// (0x0006e7fc) popup_call2_audio_out_window_t2

0x6097,	// (0x0006e850) popup_call2_audio_out_window_t3_ParamLimits

0x6097,	// (0x0006e850) popup_call2_audio_out_window_t3

0x60ad,	// (0x0006e866) popup_call2_audio_out_window_t4_ParamLimits

0x60ad,	// (0x0006e866) popup_call2_audio_out_window_t4

0x60c3,	// (0x0006e87c) popup_call2_audio_out_window_t5_ParamLimits

0x60c3,	// (0x0006e87c) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00077d21) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00077d21) popup_call2_audio_out_window_t

0x6127,	// (0x0006e8e0) bg_popup_call2_in_pane_ParamLimits

0x6127,	// (0x0006e8e0) bg_popup_call2_in_pane

0x6183,	// (0x0006e93c) popup_call2_audio_in_window_g1_ParamLimits

0x6183,	// (0x0006e93c) popup_call2_audio_in_window_g1

0x61bb,	// (0x0006e974) popup_call2_audio_in_window_g2_ParamLimits

0x61bb,	// (0x0006e974) popup_call2_audio_in_window_g2

0xc0f8,	// (0x000748b1) popup_call2_audio_in_window_g3_ParamLimits

0xc0f8,	// (0x000748b1) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00077d2e) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00077d2e) popup_call2_audio_in_window_g

0xc150,	// (0x00074909) popup_call2_audio_in_window_t1_ParamLimits

0xc150,	// (0x00074909) popup_call2_audio_in_window_t1

0xc1d0,	// (0x00074989) popup_call2_audio_in_window_t2_ParamLimits

0xc1d0,	// (0x00074989) popup_call2_audio_in_window_t2

0xc250,	// (0x00074a09) popup_call2_audio_in_window_t3_ParamLimits

0xc250,	// (0x00074a09) popup_call2_audio_in_window_t3

0xc26a,	// (0x00074a23) popup_call2_audio_in_window_t4_ParamLimits

0xc26a,	// (0x00074a23) popup_call2_audio_in_window_t4

0xc27c,	// (0x00074a35) popup_call2_audio_in_window_t5_ParamLimits

0xc27c,	// (0x00074a35) popup_call2_audio_in_window_t5

0xc291,	// (0x00074a4a) popup_call2_audio_in_window_t6_ParamLimits

0xc291,	// (0x00074a4a) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00077d37) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00077d37) popup_call2_audio_in_window_t

0xb44b,	// (0x00073c04) bg_popup_call2_in_pane_g1

0xc3e8,	// (0x00074ba1) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x00077db2) popup_cale_lunar_info_window_t

0xb453,	// (0x00073c0c) bg_popup_call2_rect_pane_ParamLimits

0xb453,	// (0x00073c0c) bg_popup_call2_rect_pane

0xb1f8,	// (0x000739b1) call2_cli_visual_graphic_pane

0xb1f8,	// (0x000739b1) call2_cli_visual_text_pane

0xebda,	// (0x00077393) smil_status_volume_pane_g3

0x0002,

0xb5e7,	// (0x00073da0) call2_cli_visual_graphic_pane_g1

0xb5e7,	// (0x00073da0) call2_cli_visual_graphic_pane_g2

0xb5e7,	// (0x00073da0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00077d44) call2_cli_visual_graphic_pane_g

0xc2a6,	// (0x00074a5f) bg_popup_call2_rect_pane_g1

0xb68f,	// (0x00073e48) bg_popup_call2_rect_pane_g2

0xc2ae,	// (0x00074a67) bg_popup_call2_rect_pane_g3

0xc2b6,	// (0x00074a6f) bg_popup_call2_rect_pane_g4

0xc2be,	// (0x00074a77) bg_popup_call2_rect_pane_g5

0xc2c6,	// (0x00074a7f) bg_popup_call2_rect_pane_g6

0xc2ce,	// (0x00074a87) bg_popup_call2_rect_pane_g7

0xc2d6,	// (0x00074a8f) bg_popup_call2_rect_pane_g8

0xc2de,	// (0x00074a97) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00077d4b) bg_popup_call2_rect_pane_g

0xc2e6,	// (0x00074a9f) bg_popup_call2_bubble_pane_g1

0xc2ee,	// (0x00074aa7) bg_popup_call2_bubble_pane_g2

0xc2f6,	// (0x00074aaf) bg_popup_call2_bubble_pane_g3

0xc2fe,	// (0x00074ab7) bg_popup_call2_bubble_pane_g4

0xc306,	// (0x00074abf) bg_popup_call2_bubble_pane_g5

0xc30e,	// (0x00074ac7) bg_popup_call2_bubble_pane_g6

0xc316,	// (0x00074acf) bg_popup_call2_bubble_pane_g7

0xc31e,	// (0x00074ad7) bg_popup_call2_bubble_pane_g8

0xc326,	// (0x00074adf) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00077d5e) bg_popup_call2_bubble_pane_g

0x349e,	// (0x0006bc57) aid_cale_week_size_cell_pane

0x3a3e,	// (0x0006c1f7) aid_cams_cif_uncrop_pane_ParamLimits

0x3a3e,	// (0x0006c1f7) aid_cams_cif_uncrop_pane

0x3bdf,	// (0x0006c398) aid_cams_size_cell_ParamLimits

0x3bdf,	// (0x0006c398) aid_cams_size_cell

0x3bf3,	// (0x0006c3ac) grid_cams_pane_ParamLimits

0x3c08,	// (0x0006c3c1) linegrid_cams_pane_ParamLimits

0x3cd2,	// (0x0006c48b) call_video_pane_t1

0x3cec,	// (0x0006c4a5) call_video_pane_t2

0x0001,

0xf292,	// (0x00077a4b) call_video_pane_t

0x4071,	// (0x0006c82a) aid_cale_month_size_cell_pane_ParamLimits

0x4071,	// (0x0006c82a) aid_cale_month_size_cell_pane

0xf642,	// (0x00077dfb) smil_status_volume_pane_g

0xebe7,	// (0x000773a0) volume_smil_pane_ParamLimits

0xad9e,	// (0x00073557) aid_popup2_width_pane

0x3426,	// (0x0006bbdf) cell_qdial_pane_g4_ParamLimits

0x3426,	// (0x0006bbdf) cell_qdial_pane_g4

0x4afa,	// (0x0006d2b3) aid_blid_cardinal_pane_ParamLimits

0x4b06,	// (0x0006d2bf) aid_blid_destination_pane_ParamLimits

0x4b06,	// (0x0006d2bf) aid_blid_destination_pane

0xb453,	// (0x00073c0c) bg_popup_call_poc_act_pane_ParamLimits

0xb453,	// (0x00073c0c) bg_popup_call_poc_act_pane

0xb453,	// (0x00073c0c) bg_popup_call_poc_inact_pane_ParamLimits

0xb453,	// (0x00073c0c) bg_popup_call_poc_inact_pane

0xc32e,	// (0x00074ae7) bg_popup_call_poc_act_pane_g1

0xc336,	// (0x00074aef) bg_popup_call_poc_act_pane_g2

0xc33e,	// (0x00074af7) bg_popup_call_poc_act_pane_g3

0xc2fe,	// (0x00074ab7) bg_popup_call_poc_act_pane_g4

0xc306,	// (0x00074abf) bg_popup_call_poc_act_pane_g5

0xc346,	// (0x00074aff) bg_popup_call_poc_act_pane_g6

0xc316,	// (0x00074acf) bg_popup_call_poc_act_pane_g7

0xc34e,	// (0x00074b07) bg_popup_call_poc_act_pane_g8

0xb1f8,	// (0x000739b1) main_usb_pane

0xc4e7,	// (0x00074ca0) popup_cale_lunar_info_window

0x3f31,	// (0x0006c6ea) im_reading_pane_t1_ParamLimits

0xb9a3,	// (0x0007415c) list_im_pane_ParamLimits

0xb9b4,	// (0x0007416d) scroll_pane_cp07_ParamLimits

0xb1f8,	// (0x000739b1) grid_highlight_pane_cp012

0xb453,	// (0x00073c0c) mup_scale_pane_ParamLimits

0x136b,	// (0x00069b24) main_usb_pane_g1_ParamLimits

0x136b,	// (0x00069b24) main_usb_pane_g1

0x6215,	// (0x0006e9ce) main_usb_pane_g2_ParamLimits

0x6215,	// (0x0006e9ce) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x00077d9b) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x00077d9b) main_usb_pane_g

0x6229,	// (0x0006e9e2) main_usb_pane_t1_ParamLimits

0x6229,	// (0x0006e9e2) main_usb_pane_t1

0x623b,	// (0x0006e9f4) main_usb_pane_t2_ParamLimits

0x623b,	// (0x0006e9f4) main_usb_pane_t2

0x624d,	// (0x0006ea06) main_usb_pane_t3_ParamLimits

0x624d,	// (0x0006ea06) main_usb_pane_t3

0x625f,	// (0x0006ea18) main_usb_pane_t4_ParamLimits

0x625f,	// (0x0006ea18) main_usb_pane_t4

0x6271,	// (0x0006ea2a) main_usb_pane_t5_ParamLimits

0x6271,	// (0x0006ea2a) main_usb_pane_t5

0x6283,	// (0x0006ea3c) main_usb_pane_t6_ParamLimits

0x6283,	// (0x0006ea3c) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x00077da0) main_usb_pane_t_ParamLimits

0x1084,	// (0x0006983d) aid_text_placing

0x4aa6,	// (0x0006d25f) main_location2_pane_t1_ParamLimits

0x4abc,	// (0x0006d275) main_location2_pane_t2_ParamLimits

0x4ad2,	// (0x0006d28b) main_location2_pane_t3_ParamLimits

0x4ae8,	// (0x0006d2a1) main_location2_pane_t4_ParamLimits

0x4ae8,	// (0x0006d2a1) main_location2_pane_t4

0xf3f3,	// (0x00077bac) main_location2_pane_t_ParamLimits

0xb48f,	// (0x00073c48) find_pinb_pane_g2_ParamLimits

0xb48f,	// (0x00073c48) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000778fa) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000778fa) find_pinb_pane_g

0xb49b,	// (0x00073c54) find_pinb_pane_t1_ParamLimits

0xb4ad,	// (0x00073c66) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000778ff) find_pinb_pane_t_ParamLimits

0xb1f8,	// (0x000739b1) main_call3_pane

0x43ad,	// (0x0006cb66) cale_month_day_heading_pane_t1_ParamLimits

0x440b,	// (0x0006cbc4) cale_month_day_heading_pane_t2_ParamLimits

0x4470,	// (0x0006cc29) cale_month_day_heading_pane_t3_ParamLimits

0x44d5,	// (0x0006cc8e) cale_month_day_heading_pane_t4_ParamLimits

0x453a,	// (0x0006ccf3) cale_month_day_heading_pane_t5_ParamLimits

0x459f,	// (0x0006cd58) cale_month_day_heading_pane_t6_ParamLimits

0x4604,	// (0x0006cdbd) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00077a83) cale_month_day_heading_pane_t_ParamLimits

0xbc3a,	// (0x000743f3) smil_status_volume_pane

0x50ee,	// (0x0006d8a7) postcard_address_pane_ParamLimits

0x50ee,	// (0x0006d8a7) postcard_address_pane

0x5100,	// (0x0006d8b9) postcard_message_pane_ParamLimits

0x5100,	// (0x0006d8b9) postcard_message_pane

0x61f3,	// (0x0006e9ac) call2_cli_visual_pane_t1_ParamLimits

0x61f3,	// (0x0006e9ac) call2_cli_visual_pane_t1

0x6951,	// (0x0006f10a) postcard_message_pane_t1_ParamLimits

0x6951,	// (0x0006f10a) postcard_message_pane_t1

0x693a,	// (0x0006f0f3) postcard_address_pane_t1_ParamLimits

0x693a,	// (0x0006f0f3) postcard_address_pane_t1

0x6928,	// (0x0006f0e1) popup_call3_audio_in_window_ParamLimits

0x6928,	// (0x0006f0e1) popup_call3_audio_in_window

0x67b7,	// (0x0006ef70) bg_popup_call3_in_pane_ParamLimits

0x67b7,	// (0x0006ef70) bg_popup_call3_in_pane

0x6829,	// (0x0006efe2) popup_call3_audio_in_window_g1_ParamLimits

0x6829,	// (0x0006efe2) popup_call3_audio_in_window_g1

0x6849,	// (0x0006f002) popup_call3_audio_in_window_g2_ParamLimits

0x6849,	// (0x0006f002) popup_call3_audio_in_window_g2

0x6869,	// (0x0006f022) popup_call3_audio_in_window_g3_ParamLimits

0x6869,	// (0x0006f022) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x00077e02) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x00077e02) popup_call3_audio_in_window_g

0x689a,	// (0x0006f053) popup_call3_audio_in_window_t1_ParamLimits

0x689a,	// (0x0006f053) popup_call3_audio_in_window_t1

0x68d8,	// (0x0006f091) popup_call3_audio_in_window_t2_ParamLimits

0x68d8,	// (0x0006f091) popup_call3_audio_in_window_t2

0x6916,	// (0x0006f0cf) popup_call3_audio_in_window_t3_ParamLimits

0x6916,	// (0x0006f0cf) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x00077e0b) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x00077e0b) popup_call3_audio_in_window_t

0x11c0,	// (0x00069979) bg_popup_call3_rect_pane

0xc2a6,	// (0x00074a5f) bg_popup_call3_rect_pane_g1

0xb68f,	// (0x00073e48) bg_popup_call3_rect_pane_g2

0xc2ae,	// (0x00074a67) bg_popup_call3_rect_pane_g3

0xc2b6,	// (0x00074a6f) bg_popup_call3_rect_pane_g4

0xc2be,	// (0x00074a77) bg_popup_call3_rect_pane_g5

0xc2c6,	// (0x00074a7f) bg_popup_call3_rect_pane_g6

0xc2ce,	// (0x00074a87) bg_popup_call3_rect_pane_g7

0x4e04,	// (0x0006d5bd) mup_visualizer_osc_pane

0x127f,	// (0x00069a38) mup_visualizer_spec_pane

0x67e7,	// (0x0006efa0) call3_video_qcif_pane_ParamLimits

0x67e7,	// (0x0006efa0) call3_video_qcif_pane

0x67f8,	// (0x0006efb1) call3_video_qcif_uncrop_pane_ParamLimits

0x67f8,	// (0x0006efb1) call3_video_qcif_uncrop_pane

0x6804,	// (0x0006efbd) call3_video_subqcif_pane_ParamLimits

0x6804,	// (0x0006efbd) call3_video_subqcif_pane

0x6818,	// (0x0006efd1) call3_video_subqcif_uncrop_pane_ParamLimits

0x6818,	// (0x0006efd1) call3_video_subqcif_uncrop_pane

0x6889,	// (0x0006f042) popup_call3_audio_in_window_g4_ParamLimits

0x6889,	// (0x0006f042) popup_call3_audio_in_window_g4

0x67a6,	// (0x0006ef5f) mup_spec_half_pane

0x67af,	// (0x0006ef68) mup_spec_half_pane_cp

0xc57a,	// (0x00074d33) mup_osc_middle_pane

0xc583,	// (0x00074d3c) mup_visualizer_osc_pane_g1

0x6787,	// (0x0006ef40) mup_spec_bar_pane_ParamLimits

0x6787,	// (0x0006ef40) mup_spec_bar_pane

0xc567,	// (0x00074d20) mup_spec_bar_pane_g1

0xc571,	// (0x00074d2a) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00077df6) mup_spec_bar_pane_g

0x349e,	// (0x0006bc57) aid_cale_week_size_cell_pane_ParamLimits

0x34b1,	// (0x0006bc6a) bg_cale_heading_pane_ParamLimits

0xb71b,	// (0x00073ed4) bg_cale_pane_cp01_ParamLimits

0x34c5,	// (0x0006bc7e) cale_week_corner_pane_ParamLimits

0x34db,	// (0x0006bc94) cale_week_day_heading_pane_ParamLimits

0x34ef,	// (0x0006bca8) cale_week_scroll_pane_g1_ParamLimits

0x3500,	// (0x0006bcb9) cale_week_scroll_pane_g2_ParamLimits

0x3511,	// (0x0006bcca) cale_week_scroll_pane_g3_ParamLimits

0x3522,	// (0x0006bcdb) cale_week_scroll_pane_g4_ParamLimits

0x3533,	// (0x0006bcec) cale_week_scroll_pane_g5_ParamLimits

0x3544,	// (0x0006bcfd) cale_week_scroll_pane_g6_ParamLimits

0x3555,	// (0x0006bd0e) cale_week_scroll_pane_g7_ParamLimits

0x3566,	// (0x0006bd1f) cale_week_scroll_pane_g8_ParamLimits

0x3579,	// (0x0006bd32) cale_week_scroll_pane_g9_ParamLimits

0x358a,	// (0x0006bd43) cale_week_scroll_pane_g10_ParamLimits

0x359b,	// (0x0006bd54) cale_week_scroll_pane_g11_ParamLimits

0x35ac,	// (0x0006bd65) cale_week_scroll_pane_g12_ParamLimits

0x35bd,	// (0x0006bd76) cale_week_scroll_pane_g13_ParamLimits

0x35ce,	// (0x0006bd87) cale_week_scroll_pane_g14_ParamLimits

0x35df,	// (0x0006bd98) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0007798b) cale_week_scroll_pane_g_ParamLimits

0x35f0,	// (0x0006bda9) cale_week_time_pane_ParamLimits

0x3603,	// (0x0006bdbc) grid_cale_week_pane_ParamLimits

0xb734,	// (0x00073eed) listscroll_cale_week_pane_t1

0x3616,	// (0x0006bdcf) scroll_pane_cp08_ParamLimits

0x40b2,	// (0x0006c86b) cale_month_corner_pane_ParamLimits

0xbbda,	// (0x00074393) cale_month_pane_t1

0x436c,	// (0x0006cb25) cale_month_week_pane_ParamLimits

0x48ed,	// (0x0006d0a6) popup_call_status_window_g1_ParamLimits

0x4901,	// (0x0006d0ba) popup_call_status_window_g2_ParamLimits

0x4915,	// (0x0006d0ce) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00077b33) popup_call_status_window_g_ParamLimits

0x0ed2,	// (0x0006968b) aid_call2_pane

0x253c,	// (0x0006acf5) msg_header_pane_g1

0x50ee,	// (0x0006d8a7) postcard_address2_pane_ParamLimits

0x50ee,	// (0x0006d8a7) postcard_address2_pane

0x5100,	// (0x0006d8b9) postcard_message2_pane_ParamLimits

0x5100,	// (0x0006d8b9) postcard_message2_pane

0x6743,	// (0x0006eefc) message2_row_pane_ParamLimits

0x6743,	// (0x0006eefc) message2_row_pane

0x675d,	// (0x0006ef16) address2_row_pane_ParamLimits

0x675d,	// (0x0006ef16) address2_row_pane

0xc535,	// (0x00074cee) postcard_message2_row_pane_g1

0xc53d,	// (0x00074cf6) postcard_message2_row_pane_t1

0xc535,	// (0x00074cee) address2_row_pane_g1

0xc53d,	// (0x00074cf6) address2_row_pane_t1

0x3946,	// (0x0006c0ff) aid_size_cell_vorec

0xb1f8,	// (0x000739b1) main_rss_pane

0x6770,	// (0x0006ef29) rss_list_single_pane_ParamLimits

0x6770,	// (0x0006ef29) rss_list_single_pane

0xc54b,	// (0x00074d04) rss_list_single_pane_t1

0xc559,	// (0x00074d12) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x00077df1) rss_list_single_pane_t

0xb1f8,	// (0x000739b1) main_camera2_pane

0xb1f8,	// (0x000739b1) main_video2_pane

0x69aa,	// (0x0006f163) cams_zoom_pane_cp2_ParamLimits

0x69aa,	// (0x0006f163) cams_zoom_pane_cp2

0x69c1,	// (0x0006f17a) image2_vga_pane_ParamLimits

0x69c1,	// (0x0006f17a) image2_vga_pane

0x69f7,	// (0x0006f1b0) main_camera2_pane_g1_ParamLimits

0x69f7,	// (0x0006f1b0) main_camera2_pane_g1

0x6a17,	// (0x0006f1d0) main_camera2_pane_g2_ParamLimits

0x6a17,	// (0x0006f1d0) main_camera2_pane_g2

0x6a2e,	// (0x0006f1e7) main_camera2_pane_g3_ParamLimits

0x6a2e,	// (0x0006f1e7) main_camera2_pane_g3

0x6a45,	// (0x0006f1fe) main_camera2_pane_g4_ParamLimits

0x6a45,	// (0x0006f1fe) main_camera2_pane_g4

0x6a5c,	// (0x0006f215) main_camera2_pane_g5_ParamLimits

0x6a5c,	// (0x0006f215) main_camera2_pane_g5

0x6a73,	// (0x0006f22c) main_camera2_pane_g6_ParamLimits

0x6a73,	// (0x0006f22c) main_camera2_pane_g6

0x6a8a,	// (0x0006f243) main_camera2_pane_g7_ParamLimits

0x6a8a,	// (0x0006f243) main_camera2_pane_g7

0x6aa1,	// (0x0006f25a) main_camera2_pane_g8_ParamLimits

0x6aa1,	// (0x0006f25a) main_camera2_pane_g8

0x0008,

0xf659,	// (0x00077e12) main_camera2_pane_g_ParamLimits

0xf659,	// (0x00077e12) main_camera2_pane_g

0x6acf,	// (0x0006f288) main_camera2_pane_t1_ParamLimits

0x6acf,	// (0x0006f288) main_camera2_pane_t1

0x6afe,	// (0x0006f2b7) main_camera2_pane_t2_ParamLimits

0x6afe,	// (0x0006f2b7) main_camera2_pane_t2

0x6b1b,	// (0x0006f2d4) main_camera2_pane_t3_ParamLimits

0x6b1b,	// (0x0006f2d4) main_camera2_pane_t3

0x6b67,	// (0x0006f320) main_camera2_pane_t4_ParamLimits

0x6b67,	// (0x0006f320) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x00077e25) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x00077e25) main_camera2_pane_t

0x6bdc,	// (0x0006f395) cams_zoom_pane_cp4_ParamLimits

0x6bdc,	// (0x0006f395) cams_zoom_pane_cp4

0x6bf2,	// (0x0006f3ab) image2_cif_pane_ParamLimits

0x6bf2,	// (0x0006f3ab) image2_cif_pane

0x6c15,	// (0x0006f3ce) image2_subqcif_pane_ParamLimits

0x6c15,	// (0x0006f3ce) image2_subqcif_pane

0x6c2b,	// (0x0006f3e4) main_video2_pane_g1_ParamLimits

0x6c2b,	// (0x0006f3e4) main_video2_pane_g1

0x6c45,	// (0x0006f3fe) main_video2_pane_g2_ParamLimits

0x6c45,	// (0x0006f3fe) main_video2_pane_g2

0x6c5b,	// (0x0006f414) main_video2_pane_g3_ParamLimits

0x6c5b,	// (0x0006f414) main_video2_pane_g3

0x6c71,	// (0x0006f42a) main_video2_pane_g4_ParamLimits

0x6c71,	// (0x0006f42a) main_video2_pane_g4

0x6c87,	// (0x0006f440) main_video2_pane_g5_ParamLimits

0x6c87,	// (0x0006f440) main_video2_pane_g5

0x6c9d,	// (0x0006f456) main_video2_pane_g6_ParamLimits

0x6c9d,	// (0x0006f456) main_video2_pane_g6

0x0005,

0xf67b,	// (0x00077e34) main_video2_pane_g_ParamLimits

0xf67b,	// (0x00077e34) main_video2_pane_g

0x6cb7,	// (0x0006f470) main_video2_pane_t1_ParamLimits

0x6cb7,	// (0x0006f470) main_video2_pane_t1

0x6cdb,	// (0x0006f494) main_video2_pane_t2_ParamLimits

0x6cdb,	// (0x0006f494) main_video2_pane_t2

0x6d25,	// (0x0006f4de) main_video2_pane_t3_ParamLimits

0x6d25,	// (0x0006f4de) main_video2_pane_t3

0x0002,

0xf688,	// (0x00077e41) main_video2_pane_t_ParamLimits

0xf688,	// (0x00077e41) main_video2_pane_t

0x6332,	// (0x0006eaeb) call_muted_g2

0x0001,

0xf62a,	// (0x00077de3) call_muted_g

0xb1f8,	// (0x000739b1) main_mup2_pane

0x6d67,	// (0x0006f520) main_mup2_pane_g1_ParamLimits

0x6d67,	// (0x0006f520) main_mup2_pane_g1

0x6d73,	// (0x0006f52c) main_mup2_pane_g2_ParamLimits

0x6d73,	// (0x0006f52c) main_mup2_pane_g2

0xec50,	// (0x00077409) main_mup_pane_g13_cp1

0xec58,	// (0x00077411) mup_volume_pane_cp1

0x6d8f,	// (0x0006f548) main_mup2_pane_g4_ParamLimits

0x6d8f,	// (0x0006f548) main_mup2_pane_g4

0x6d9f,	// (0x0006f558) main_mup2_pane_g5_ParamLimits

0x6d9f,	// (0x0006f558) main_mup2_pane_g5

0x6daf,	// (0x0006f568) main_mup2_pane_g6_ParamLimits

0x6daf,	// (0x0006f568) main_mup2_pane_g6

0x6dbf,	// (0x0006f578) main_mup2_pane_g7_ParamLimits

0x6dbf,	// (0x0006f578) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x00077e48) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x00077e48) main_mup2_pane_g

0x6dd7,	// (0x0006f590) main_mup2_pane_t1_ParamLimits

0x6dd7,	// (0x0006f590) main_mup2_pane_t1

0x6ded,	// (0x0006f5a6) main_mup2_pane_t2_ParamLimits

0x6ded,	// (0x0006f5a6) main_mup2_pane_t2

0x6e03,	// (0x0006f5bc) main_mup2_pane_t3_ParamLimits

0x6e03,	// (0x0006f5bc) main_mup2_pane_t3

0x6e19,	// (0x0006f5d2) main_mup2_pane_t4_ParamLimits

0x6e19,	// (0x0006f5d2) main_mup2_pane_t4

0x6e31,	// (0x0006f5ea) main_mup2_pane_t5_ParamLimits

0x6e31,	// (0x0006f5ea) main_mup2_pane_t5

0x6e49,	// (0x0006f602) main_mup2_pane_t6_ParamLimits

0x6e49,	// (0x0006f602) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x00077e57) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x00077e57) main_mup2_pane_t

0x6e79,	// (0x0006f632) mup2_visualizer_pane_ParamLimits

0x6e79,	// (0x0006f632) mup2_visualizer_pane

0x6ea4,	// (0x0006f65d) mup_progress_pane_cp_ParamLimits

0x6ea4,	// (0x0006f65d) mup_progress_pane_cp

0xec3b,	// (0x000773f4) mup_volume_pane_cp_ParamLimits

0xec3b,	// (0x000773f4) mup_volume_pane_cp

0x6eb8,	// (0x0006f671) mup2_visualizer_pane_g1_ParamLimits

0x6eb8,	// (0x0006f671) mup2_visualizer_pane_g1

0xc5ba,	// (0x00074d73) mup2_visualizer_pane_g2_ParamLimits

0xc5ba,	// (0x00074d73) mup2_visualizer_pane_g2

0x6ecd,	// (0x0006f686) mup2_visualizer_pane_g3_ParamLimits

0x6ecd,	// (0x0006f686) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x00077e64) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x00077e64) mup2_visualizer_pane_g

0x0eca,	// (0x00069683) aid_size_cell_fmradio

0x648e,	// (0x0006ec47) aid_height_parent_landcape

0xba41,	// (0x000741fa) wml_content_pane_cp

0xba49,	// (0x00074202) wml_tabs_pane

0xba52,	// (0x0007420b) popup_wml_miniature_window

0xba5a,	// (0x00074213) scroll_pane_cp021

0xba6e,	// (0x00074227) wml_content_pane_comp8

0xb1f8,	// (0x000739b1) bg_popup_sub_pane_cp05

0xc5d8,	// (0x00074d91) popup_wml_miniature_window_g1

0xc5e0,	// (0x00074d99) wml_miniature_view_pane

0x6ed9,	// (0x0006f692) aid_size_wml_view

0x6ee1,	// (0x0006f69a) wml_miniature_view_pane_g1

0x6eea,	// (0x0006f6a3) wml_miniature_view_pane_g2

0x6ef3,	// (0x0006f6ac) wml_miniature_view_pane_g3

0x6efb,	// (0x0006f6b4) wml_miniature_view_pane_g4

0x6f03,	// (0x0006f6bc) wml_miniature_view_pane_g5

0x6f0b,	// (0x0006f6c4) wml_miniature_view_pane_g6

0x6f13,	// (0x0006f6cc) wml_miniature_view_pane_g7

0x6f1b,	// (0x0006f6d4) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x00077e6b) wml_miniature_view_pane_g

0xc5e8,	// (0x00074da1) background_graphic_ParamLimits

0xc5e8,	// (0x00074da1) background_graphic

0xc5f4,	// (0x00074dad) wml_tabs_2_pane

0xc5fd,	// (0x00074db6) wml_tabs_3_pane_ParamLimits

0xc5fd,	// (0x00074db6) wml_tabs_3_pane

0xc60f,	// (0x00074dc8) wml_tabs_4_pane_ParamLimits

0xc60f,	// (0x00074dc8) wml_tabs_4_pane

0xc625,	// (0x00074dde) wml_tabs_5_pane_ParamLimits

0xc625,	// (0x00074dde) wml_tabs_5_pane

0xc63f,	// (0x00074df8) wml_tabs_pane_g2_ParamLimits

0xc63f,	// (0x00074df8) wml_tabs_pane_g2

0xc653,	// (0x00074e0c) wml_tabs_pane_g3_ParamLimits

0xc653,	// (0x00074e0c) wml_tabs_pane_g3

0x6f23,	// (0x0006f6dc) wml_tabs_2_active_pane_ParamLimits

0x6f23,	// (0x0006f6dc) wml_tabs_2_active_pane

0x6f33,	// (0x0006f6ec) wml_tabs_2_passive_pane_ParamLimits

0x6f33,	// (0x0006f6ec) wml_tabs_2_passive_pane

0x6f43,	// (0x0006f6fc) wml_tabs_3_active_pane_cp_ParamLimits

0x6f43,	// (0x0006f6fc) wml_tabs_3_active_pane_cp

0x6f54,	// (0x0006f70d) wml_tabs_3_passive_pane_ParamLimits

0x6f54,	// (0x0006f70d) wml_tabs_3_passive_pane

0x6f65,	// (0x0006f71e) wml_tabs_3_passive_pane_cp_ParamLimits

0x6f65,	// (0x0006f71e) wml_tabs_3_passive_pane_cp

0x6f76,	// (0x0006f72f) tabs_4_active_pane

0x6f7e,	// (0x0006f737) tabs_4_passive_pane

0x6f86,	// (0x0006f73f) tabs_4_passive_pane_cp

0x6f8e,	// (0x0006f747) tabs_4_passive_pane_cp2

0x620d,	// (0x0006e9c6) aid_height_text

0x4dda,	// (0x0006d593) mup_volume_cont_pane_ParamLimits

0x4dda,	// (0x0006d593) mup_volume_cont_pane

0x3136,	// (0x0006b8ef) aid_size_cell_pinb

0x3140,	// (0x0006b8f9) aid_size_list_pinb

0x6e90,	// (0x0006f649) mup2_volume_cont_pane_ParamLimits

0x6e90,	// (0x0006f649) mup2_volume_cont_pane

0xec27,	// (0x000773e0) mup2_volume_cont_pane_g1_ParamLimits

0xec27,	// (0x000773e0) mup2_volume_cont_pane_g1

0x2e5f,	// (0x0006b618) aid_size_cell_touch_ParamLimits

0x2e5f,	// (0x0006b618) aid_size_cell_touch

0x303e,	// (0x0006b7f7) touch_pane_ParamLimits

0x303e,	// (0x0006b7f7) touch_pane

0xad8c,	// (0x00073545) main_rss2_pane

0xc670,	// (0x00074e29) listscroll_rss2_pane

0xc679,	// (0x00074e32) rss2_navigation_pane

0xc681,	// (0x00074e3a) list_rss2_pane

0x1001,	// (0x000697ba) scroll_pane_cp22

0xc689,	// (0x00074e42) rss2_navigation_pane_g1

0xc692,	// (0x00074e4b) rss2_navigation_pane_g2

0xc69a,	// (0x00074e53) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x00077e7c) rss2_navigation_pane_g

0xc6a2,	// (0x00074e5b) rss2_navigation_pane_t1

0x6f96,	// (0x0006f74f) rss2_list_single_pane_ParamLimits

0x6f96,	// (0x0006f74f) rss2_list_single_pane

0xc6b0,	// (0x00074e69) rss2_list_single_pane_t2

0xc6be,	// (0x00074e77) rss2_list_single_pane_t3_ParamLimits

0xc6be,	// (0x00074e77) rss2_list_single_pane_t3

0xc6db,	// (0x00074e94) rss2_list_single_pane_t4

0x47ce,	// (0x0006cf87) smil_status_pane_g1

0x1547,	// (0x00069d00) main_image2_pane_ParamLimits

0x1547,	// (0x00069d00) main_image2_pane

0x6ab8,	// (0x0006f271) main_camera2_pane_g9_ParamLimits

0x6ab8,	// (0x0006f271) main_camera2_pane_g9

0x6baa,	// (0x0006f363) main_camera2_pane_t5_ParamLimits

0x6baa,	// (0x0006f363) main_camera2_pane_t5

0xebfc,	// (0x000773b5) main_camera2_pane_t6_ParamLimits

0xebfc,	// (0x000773b5) main_camera2_pane_t6

0x6faa,	// (0x0006f763) main_image2_pane_g1_ParamLimits

0x6faa,	// (0x0006f763) main_image2_pane_g1

0x5315,	// (0x0006dace) smil2_video_pane_ParamLimits

0x5315,	// (0x0006dace) smil2_video_pane

0xadb6,	// (0x0007356f) aid_zoom_text_primary_cp

0xaddf,	// (0x00073598) popup_preview_fixed_window

0xb99b,	// (0x00074154) im_reading_pane_g1

0x699e,	// (0x0006f157) cams2_bc_adjust_pane_cp_ParamLimits

0x699e,	// (0x0006f157) cams2_bc_adjust_pane_cp

0x6bd0,	// (0x0006f389) cams2_bc_adjust_pane_ParamLimits

0x6bd0,	// (0x0006f389) cams2_bc_adjust_pane

0xec60,	// (0x00077419) cams2_bc_adjust_pane_g1

0xec68,	// (0x00077421) cams2_slider_pane

0xec71,	// (0x0007742a) cams2_slider_pane_g1

0xec7a,	// (0x00077433) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x00077e83) cams2_slider_pane_g

0x3220,	// (0x0006b9d9) calc_display_pane_ParamLimits

0x323c,	// (0x0006b9f5) calc_paper_pane_ParamLimits

0x325d,	// (0x0006ba16) grid_calc_pane_ParamLimits

0xc0a0,	// (0x00074859) popup_clock_digital_window_t1_ParamLimits

0x1443,	// (0x00069bfc) main_image_pane_t1

0x3202,	// (0x0006b9bb) aid_size_cell_calc_ParamLimits

0x3202,	// (0x0006b9bb) aid_size_cell_calc

0x64be,	// (0x0006ec77) popup_blid_sat_info2_window_ParamLimits

0x64be,	// (0x0006ec77) popup_blid_sat_info2_window

0xc6f1,	// (0x00074eaa) aid_size_cell_blid

0xc6f9,	// (0x00074eb2) bg_popup_window_pane_cp07

0xc71c,	// (0x00074ed5) grid_popup_blid_pane

0xc724,	// (0x00074edd) heading_pane_cp05_ParamLimits

0xc724,	// (0x00074edd) heading_pane_cp05

0xc7ec,	// (0x00074fa5) cell_popup_blid_pane_ParamLimits

0xc7ec,	// (0x00074fa5) cell_popup_blid_pane

0xc80c,	// (0x00074fc5) cell_popup_blid_pane_g1

0xc814,	// (0x00074fcd) cell_popup_blid_pane_t1

0x6e63,	// (0x0006f61c) mup2_indicator_pane_ParamLimits

0x6e63,	// (0x0006f61c) mup2_indicator_pane

0x11c0,	// (0x00069979) mup2_visualizer_osc_pane

0xc5c6,	// (0x00074d7f) mup2_visualizer_spec_pane_ParamLimits

0xc5c6,	// (0x00074d7f) mup2_visualizer_spec_pane

0x6fbe,	// (0x0006f777) mup2_spec_half_pane

0x6fc7,	// (0x0006f780) mup2_spec_half_pane_cp

0x6fcf,	// (0x0006f788) mup2_spec_bar_pane_ParamLimits

0x6fcf,	// (0x0006f788) mup2_spec_bar_pane

0xc567,	// (0x00074d20) mup2_spec_bar_pane_g1

0xc571,	// (0x00074d2a) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00077df6) mup2_spec_bar_pane_g

0x6fee,	// (0x0006f7a7) mup2_osc_middle_pane

0xc583,	// (0x00074d3c) mup2_visualizer_osc_pane_g1

0xae07,	// (0x000735c0) popup_number_entry_window_t1_ParamLimits

0xae1a,	// (0x000735d3) popup_number_entry_window_t2_ParamLimits

0xae2c,	// (0x000735e5) popup_number_entry_window_t3_ParamLimits

0x3086,	// (0x0006b83f) popup_number_entry_window_t5_ParamLimits

0x3086,	// (0x0006b83f) popup_number_entry_window_t5

0xf0ec,	// (0x000778a5) popup_number_entry_window_t_ParamLimits

0xae3e,	// (0x000735f7) text_title_cp2_ParamLimits

0xeba8,	// (0x00077361) aid_hotspot_pointer_text2_pane

0xebce,	// (0x00077387) main_viewer_pane_g9_ParamLimits

0xebce,	// (0x00077387) main_viewer_pane_g9

0xbbda,	// (0x00074393) cale_month_pane_t1_ParamLimits

0xbc6f,	// (0x00074428) bg_cale_pane_ParamLimits

0xbc87,	// (0x00074440) list_cale_pane_ParamLimits

0xb734,	// (0x00073eed) listscroll_cale_day_pane_t1

0xbc98,	// (0x00074451) scroll_pane_cp09_ParamLimits

0x4e0c,	// (0x0006d5c5) main_mup_eq_pane_t1_ParamLimits

0x4e0c,	// (0x0006d5c5) main_mup_eq_pane_t1

0x4e24,	// (0x0006d5dd) main_mup_eq_pane_t2_ParamLimits

0x4e24,	// (0x0006d5dd) main_mup_eq_pane_t2

0x4e3a,	// (0x0006d5f3) main_mup_eq_pane_t3_ParamLimits

0x4e3a,	// (0x0006d5f3) main_mup_eq_pane_t3

0x4e50,	// (0x0006d609) main_mup_eq_pane_t4_ParamLimits

0x4e50,	// (0x0006d609) main_mup_eq_pane_t4

0x4e66,	// (0x0006d61f) main_mup_eq_pane_t5_ParamLimits

0x4e66,	// (0x0006d61f) main_mup_eq_pane_t5

0x4e7c,	// (0x0006d635) main_mup_eq_pane_t6_ParamLimits

0x4e7c,	// (0x0006d635) main_mup_eq_pane_t6

0x4e8e,	// (0x0006d647) main_mup_eq_pane_t7_ParamLimits

0x4e8e,	// (0x0006d647) main_mup_eq_pane_t7

0x4ea0,	// (0x0006d659) main_mup_eq_pane_t8_ParamLimits

0x4ea0,	// (0x0006d659) main_mup_eq_pane_t8

0x4eb2,	// (0x0006d66b) main_mup_eq_pane_t9_ParamLimits

0x4eb2,	// (0x0006d66b) main_mup_eq_pane_t9

0x4ec8,	// (0x0006d681) main_mup_eq_pane_t10_ParamLimits

0x4ec8,	// (0x0006d681) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00077c32) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00077c32) main_mup_eq_pane_t

0x4f5b,	// (0x0006d714) mup_equalizer_pane_cp5_ParamLimits

0x4f6d,	// (0x0006d726) mup_equalizer_pane_cp6_ParamLimits

0x4f7f,	// (0x0006d738) mup_equalizer_pane_cp7_ParamLimits

0xad8c,	// (0x00073545) main_gallery_pane

0xc58c,	// (0x00074d45) smil2_volume_pane

0xc594,	// (0x00074d4d) smil_status_volume_pane_g1_ParamLimits

0xc5a7,	// (0x00074d60) smil_status_volume_pane_g2_ParamLimits

0xebda,	// (0x00077393) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x00077dfb) smil_status_volume_pane_g_ParamLimits

0xc6f9,	// (0x00074eb2) bg_popup_window_pane_cp07_ParamLimits

0xc707,	// (0x00074ec0) blid_firmament_pane

0x6ff7,	// (0x0006f7b0) aid_size_cell_gallery_ParamLimits

0x6ff7,	// (0x0006f7b0) aid_size_cell_gallery

0x700d,	// (0x0006f7c6) grid_gallery_pane_ParamLimits

0x700d,	// (0x0006f7c6) grid_gallery_pane

0x7021,	// (0x0006f7da) cell_gallery_pane_ParamLimits

0x7021,	// (0x0006f7da) cell_gallery_pane

0xc822,	// (0x00074fdb) bg_cell_gallery_focus_pane_ParamLimits

0xc822,	// (0x00074fdb) bg_cell_gallery_focus_pane

0xc834,	// (0x00074fed) cell_gallery_pane_g1_ParamLimits

0xc834,	// (0x00074fed) cell_gallery_pane_g1

0x7068,	// (0x0006f821) cell_gallery_pane_g2_ParamLimits

0x7068,	// (0x0006f821) cell_gallery_pane_g2

0x7075,	// (0x0006f82e) cell_gallery_pane_g3_ParamLimits

0x7075,	// (0x0006f82e) cell_gallery_pane_g3

0xc840,	// (0x00074ff9) cell_gallery_pane_g4_ParamLimits

0xc840,	// (0x00074ff9) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x00077ea9) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x00077ea9) cell_gallery_pane_g

0xc84c,	// (0x00075005) bg_cell_gallery_focus_pane_g1

0xc854,	// (0x0007500d) bg_cell_gallery_focus_pane_g2

0xc85c,	// (0x00075015) bg_cell_gallery_focus_pane_g3

0xc864,	// (0x0007501d) bg_cell_gallery_focus_pane_g4

0xc86c,	// (0x00075025) bg_cell_gallery_focus_pane_g5

0xc874,	// (0x0007502d) bg_cell_gallery_focus_pane_g6

0xc87c,	// (0x00075035) bg_cell_gallery_focus_pane_g7

0xc884,	// (0x0007503d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x00077eb2) bg_cell_gallery_focus_pane_g

0xc88c,	// (0x00075045) aid_firma_cardinal

0xc8a0,	// (0x00075059) blid_firmament_pane_t1

0xc8b7,	// (0x00075070) blid_firmament_pane_t2

0xc8ce,	// (0x00075087) blid_firmament_pane_t3

0xc8e5,	// (0x0007509e) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x00077ec3) blid_firmament_pane_t

0xc8fc,	// (0x000750b5) blid_sat_info_pane

0xc90c,	// (0x000750c5) blid_sat_info_pane_g1

0xc90c,	// (0x000750c5) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x00077ecc) blid_sat_info_pane_g

0xc916,	// (0x000750cf) blid_sat_info_pane_t1

0xc924,	// (0x000750dd) smil2_volume_content_pane

0xc92d,	// (0x000750e6) smil2_volume_pane_g1

0xc935,	// (0x000750ee) smil2_volume_content_pane_g1

0xc93e,	// (0x000750f7) smil2_volume_content_pane_g2

0xc947,	// (0x00075100) smil2_volume_content_pane_g3

0xc950,	// (0x00075109) smil2_volume_content_pane_g4

0xc959,	// (0x00075112) smil2_volume_content_pane_g5

0xc962,	// (0x0007511b) smil2_volume_content_pane_g6

0xc96b,	// (0x00075124) smil2_volume_content_pane_g7

0xc974,	// (0x0007512d) smil2_volume_content_pane_g8

0xc97d,	// (0x00075136) smil2_volume_content_pane_g9

0xc986,	// (0x0007513f) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x00077ed1) smil2_volume_content_pane_g

0x366c,	// (0x0006be25) cale_week_day_heading_pane_t1_ParamLimits

0x3696,	// (0x0006be4f) cale_week_day_heading_pane_t2_ParamLimits

0x36c0,	// (0x0006be79) cale_week_day_heading_pane_t3_ParamLimits

0x36ea,	// (0x0006bea3) cale_week_day_heading_pane_t4_ParamLimits

0x3714,	// (0x0006becd) cale_week_day_heading_pane_t5_ParamLimits

0x373e,	// (0x0006bef7) cale_week_day_heading_pane_t6_ParamLimits

0x3768,	// (0x0006bf21) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000779aa) cale_week_day_heading_pane_t_ParamLimits

0xb746,	// (0x00073eff) bg_cale_side_pane_ParamLimits

0x3792,	// (0x0006bf4b) cale_week_time_pane_t1_ParamLimits

0x37be,	// (0x0006bf77) cale_week_time_pane_t2_ParamLimits

0x37ea,	// (0x0006bfa3) cale_week_time_pane_t3_ParamLimits

0x3816,	// (0x0006bfcf) cale_week_time_pane_t4_ParamLimits

0x3842,	// (0x0006bffb) cale_week_time_pane_t5_ParamLimits

0x386e,	// (0x0006c027) cale_week_time_pane_t6_ParamLimits

0x389a,	// (0x0006c053) cale_week_time_pane_t7_ParamLimits

0x38c6,	// (0x0006c07f) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000779b9) cale_week_time_pane_t_ParamLimits

0x38f2,	// (0x0006c0ab) cell_cale_week_pane_g2_ParamLimits

0xb746,	// (0x00073eff) bg_cale_side_pane_cp01_ParamLimits

0x4671,	// (0x0006ce2a) cale_month_week_pane_t1_ParamLimits

0x4688,	// (0x0006ce41) cale_month_week_pane_t2_ParamLimits

0x469f,	// (0x0006ce58) cale_month_week_pane_t3_ParamLimits

0x46b6,	// (0x0006ce6f) cale_month_week_pane_t4_ParamLimits

0x46cd,	// (0x0006ce86) cale_month_week_pane_t5_ParamLimits

0x46e4,	// (0x0006ce9d) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00077a92) cale_month_week_pane_t_ParamLimits

0xbc16,	// (0x000743cf) cell_cale_month_pane_g1_ParamLimits

0xad8c,	// (0x00073545) main_cale_event_viewer_pane

0xad8c,	// (0x00073545) listscroll_cale_event_viewer_pane

0xc98f,	// (0x00075148) list_cale_ev_pane

0xc997,	// (0x00075150) scroll_pane_cp023

0x7082,	// (0x0006f83b) field_cale_ev_pane_ParamLimits

0x7082,	// (0x0006f83b) field_cale_ev_pane

0xc9a3,	// (0x0007515c) field_cale_ev_content_pane_ParamLimits

0xc9a3,	// (0x0007515c) field_cale_ev_content_pane

0xc9af,	// (0x00075168) field_cale_ev_pane_g1_ParamLimits

0xc9af,	// (0x00075168) field_cale_ev_pane_g1

0xc9bb,	// (0x00075174) field_cale_ev_pane_g2_ParamLimits

0xc9bb,	// (0x00075174) field_cale_ev_pane_g2

0xc9d3,	// (0x0007518c) field_cale_ev_pane_g3_ParamLimits

0xc9d3,	// (0x0007518c) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x00077ee6) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x00077ee6) field_cale_ev_pane_g

0xc9eb,	// (0x000751a4) field_cale_ev_pane_t1_ParamLimits

0xc9eb,	// (0x000751a4) field_cale_ev_pane_t1

0x709c,	// (0x0006f855) field_cale_ev_content_pane_t1_ParamLimits

0x709c,	// (0x0006f855) field_cale_ev_content_pane_t1

0x1329,	// (0x00069ae2) bg_button_pane_cp01

0xb70c,	// (0x00073ec5) listscroll_cale_week_pane_ParamLimits

0x3496,	// (0x0006bc4f) popup_toolbar_window_cp01

0xb734,	// (0x00073eed) listscroll_cale_week_pane_t1_ParamLimits

0xb544,	// (0x00073cfd) listscroll_cale_day_pane_ParamLimits

0x3496,	// (0x0006bc4f) popup_toolbar_window_cp02

0xb734,	// (0x00073eed) listscroll_cale_day_pane_t1_ParamLimits

0xb70c,	// (0x00073ec5) main_cale_month_pane_ParamLimits

0x66ba,	// (0x0006ee73) popup_toolbar_window_cp03_ParamLimits

0x66ba,	// (0x0006ee73) popup_toolbar_window_cp03

0x51ef,	// (0x0006d9a8) main_image_pane_g2_ParamLimits

0x51ef,	// (0x0006d9a8) main_image_pane_g2

0x5200,	// (0x0006d9b9) main_image_pane_g3_ParamLimits

0x5200,	// (0x0006d9b9) main_image_pane_g3

0x0002,

0xf50b,	// (0x00077cc4) main_image_pane_g_ParamLimits

0xf50b,	// (0x00077cc4) main_image_pane_g

0x1443,	// (0x00069bfc) main_image_pane_t1_ParamLimits

0x5211,	// (0x0006d9ca) main_image_pane_t2_ParamLimits

0x5211,	// (0x0006d9ca) main_image_pane_t2

0x5223,	// (0x0006d9dc) main_image_pane_t3_ParamLimits

0x5223,	// (0x0006d9dc) main_image_pane_t3

0x524b,	// (0x0006da04) main_image_pane_t4_ParamLimits

0x524b,	// (0x0006da04) main_image_pane_t4

0x0003,

0xf512,	// (0x00077ccb) main_image_pane_t_ParamLimits

0xf512,	// (0x00077ccb) main_image_pane_t

0x526b,	// (0x0006da24) popup_image_details_window_cp01

0x5273,	// (0x0006da2c) popup_toobar_trans_pane_cp01_ParamLimits

0x5273,	// (0x0006da2c) popup_toobar_trans_pane_cp01

0x6587,	// (0x0006ed40) popup_image_details_window_ParamLimits

0x6587,	// (0x0006ed40) popup_image_details_window

0xc4ef,	// (0x00074ca8) popup_image_focus_window

0x696c,	// (0x0006f125) camera2_autofocus_pane_ParamLimits

0x696c,	// (0x0006f125) camera2_autofocus_pane

0xad8c,	// (0x00073545) bg_popup_sub_pane_cp06

0xca02,	// (0x000751bb) popup_image_focus_window_g1

0xca0a,	// (0x000751c3) popup_image_focus_window_g2

0xca12,	// (0x000751cb) popup_image_focus_window_g3

0xca1a,	// (0x000751d3) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x00077eed) popup_image_focus_window_g

0xca22,	// (0x000751db) popup_image_focus_window_t1

0xca30,	// (0x000751e9) popup_image_focus_window_t2

0xca3f,	// (0x000751f8) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x00077ef6) popup_image_focus_window_t

0xca4d,	// (0x00075206) camera2_autofocus_pane_g1

0x1547,	// (0x00069d00) bg_tb_trans_pane_cp01

0xca5b,	// (0x00075214) popup_image_details_window_g1

0xca6e,	// (0x00075227) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x00077f08) popup_image_details_window_g

0xca97,	// (0x00075250) popup_image_details_window_t1

0xcaa9,	// (0x00075262) popup_image_details_window_t2

0xcac2,	// (0x0007527b) popup_image_details_window_t3

0xcad6,	// (0x0007528f) popup_image_details_window_t4

0xcaf1,	// (0x000752aa) popup_image_details_window_t5

0x0004,

0xf756,	// (0x00077f0f) popup_image_details_window_t

0xb512,	// (0x00073ccb) bg_calc_paper_pane_ParamLimits

0xad8c,	// (0x00073545) grid_highlight_pane_cp013

0xb52a,	// (0x00073ce3) list_calc_pane_ParamLimits

0xb53c,	// (0x00073cf5) scroll_pane_cp024

0xb544,	// (0x00073cfd) bg_calc_display_pane_ParamLimits

0xb550,	// (0x00073d09) calc_display_pane_t1_ParamLimits

0xb565,	// (0x00073d1e) calc_display_pane_t2_ParamLimits

0xb57a,	// (0x00073d33) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0007792c) calc_display_pane_t_ParamLimits

0x33d5,	// (0x0006bb8e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00077949) cell_calc_pane_g

0x33de,	// (0x0006bb97) cell_calc_pane_t1

0xb5f1,	// (0x00073daa) grid_highlight_pane_cp02_ParamLimits

0xb607,	// (0x00073dc0) toolbar_button_pane_cp01_ParamLimits

0xb607,	// (0x00073dc0) toolbar_button_pane_cp01

0x1488,	// (0x00069c41) temp_image_control_pane_ParamLimits

0x1488,	// (0x00069c41) temp_image_control_pane

0x1547,	// (0x00069d00) main_mp3_pane

0xcb0b,	// (0x000752c4) temp_image_control_pane_g1_ParamLimits

0xcb0b,	// (0x000752c4) temp_image_control_pane_g1

0xcb19,	// (0x000752d2) temp_image_control_pane_g2_ParamLimits

0xcb19,	// (0x000752d2) temp_image_control_pane_g2

0xcb2b,	// (0x000752e4) temp_image_control_pane_g3_ParamLimits

0xcb2b,	// (0x000752e4) temp_image_control_pane_g3

0x70e9,	// (0x0006f8a2) temp_image_control_pane_g4_ParamLimits

0x70e9,	// (0x0006f8a2) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x00077f1a) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x00077f1a) temp_image_control_pane_g

0xcb0b,	// (0x000752c4) main_mp3_pane_g1

0x70fa,	// (0x0006f8b3) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x00077f23) main_mp3_pane_g

0xcb6e,	// (0x00075327) main_mp3_pane_t1

0xb80c,	// (0x00073fc5) main_camera_pane_g8_ParamLimits

0xb80c,	// (0x00073fc5) main_camera_pane_g8

0x3b87,	// (0x0006c340) main_video_pane_g7_ParamLimits

0x3b87,	// (0x0006c340) main_video_pane_g7

0xec15,	// (0x000773ce) main_camera2_pane_t7_ParamLimits

0xec15,	// (0x000773ce) main_camera2_pane_t7

0xba01,	// (0x000741ba) scroll_pane_cp025_ParamLimits

0xba01,	// (0x000741ba) scroll_pane_cp025

0xba15,	// (0x000741ce) scroll_pane_cp026_ParamLimits

0xba15,	// (0x000741ce) scroll_pane_cp026

0xba24,	// (0x000741dd) wml_content_pane_ParamLimits

0xad8c,	// (0x00073545) main_touch_calib_pane

0x71b1,	// (0x0006f96a) main_touch_calib_pane_g1

0x71bd,	// (0x0006f976) main_touch_calib_pane_g2

0x71c9,	// (0x0006f982) main_touch_calib_pane_g3

0x71d5,	// (0x0006f98e) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x00077f41) main_touch_calib_pane_g

0x71e1,	// (0x0006f99a) main_touch_calib_pane_t1

0x71f9,	// (0x0006f9b2) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x00077f4a) main_touch_calib_pane_t

0x10b2,	// (0x0006986b) mup_progress_pane_cp02

0x10d1,	// (0x0006988a) navi_pane_g1

0x1151,	// (0x0006990a) navi_pane_mp_t3

0x1547,	// (0x00069d00) main_mp3_pane_ParamLimits

0x66f4,	// (0x0006eead) navi_pane_ParamLimits

0xcb0b,	// (0x000752c4) main_mp3_pane_g1_ParamLimits

0x70fa,	// (0x0006f8b3) main_mp3_pane_g2_ParamLimits

0x7106,	// (0x0006f8bf) main_mp3_pane_g3_ParamLimits

0x7106,	// (0x0006f8bf) main_mp3_pane_g3

0x7112,	// (0x0006f8cb) main_mp3_pane_g4_ParamLimits

0x7112,	// (0x0006f8cb) main_mp3_pane_g4

0xcb3b,	// (0x000752f4) main_mp3_pane_g5_ParamLimits

0xcb3b,	// (0x000752f4) main_mp3_pane_g5

0xcb49,	// (0x00075302) main_mp3_pane_g6_ParamLimits

0xcb49,	// (0x00075302) main_mp3_pane_g6

0xcb56,	// (0x0007530f) main_mp3_pane_g7_ParamLimits

0xcb56,	// (0x0007530f) main_mp3_pane_g7

0xcb62,	// (0x0007531b) main_mp3_pane_g8_ParamLimits

0xcb62,	// (0x0007531b) main_mp3_pane_g8

0xf76a,	// (0x00077f23) main_mp3_pane_g_ParamLimits

0x711e,	// (0x0006f8d7) main_mp3_pane_t2

0x712c,	// (0x0006f8e5) main_mp3_pane_t3

0xcb7c,	// (0x00075335) main_mp3_pane_t4

0xcb8a,	// (0x00075343) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x00077f34) main_mp3_pane_t

0xcb98,	// (0x00075351) mup_progress_pane_cp01

0xadb6,	// (0x0007356f) aid_zoom_text_secondary2

0xc98f,	// (0x00075148) list_cale_ev2_pane

0xc997,	// (0x00075150) scroll_pane_cp023_ParamLimits

0x7247,	// (0x0006fa00) field_cale_ev2_pane_ParamLimits

0x7247,	// (0x0006fa00) field_cale_ev2_pane

0xec94,	// (0x0007744d) field_cale_ev2_pane_g1_ParamLimits

0xec94,	// (0x0007744d) field_cale_ev2_pane_g1

0xeca0,	// (0x00077459) field_cale_ev2_pane_g2_ParamLimits

0xeca0,	// (0x00077459) field_cale_ev2_pane_g2

0xecb8,	// (0x00077471) field_cale_ev2_pane_g3_ParamLimits

0xecb8,	// (0x00077471) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x00077f55) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x00077f55) field_cale_ev2_pane_g

0xcba0,	// (0x00075359) field_cale_ev2_pane_t1_ParamLimits

0xcba0,	// (0x00075359) field_cale_ev2_pane_t1

0xcbb7,	// (0x00075370) field_cale_ev2_pane_t2_ParamLimits

0xcbb7,	// (0x00075370) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x00077f5e) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x00077f5e) field_cale_ev2_pane_t

0x50aa,	// (0x0006d863) main_postcard_pane_g5_ParamLimits

0x50aa,	// (0x0006d863) main_postcard_pane_g5

0x50be,	// (0x0006d877) main_postcard_pane_g6_ParamLimits

0x50be,	// (0x0006d877) main_postcard_pane_g6

0x3969,	// (0x0006c122) camera2_autofocus_pane_cp_ParamLimits

0x3969,	// (0x0006c122) camera2_autofocus_pane_cp

0x1547,	// (0x00069d00) main_mup3_pane

0x727f,	// (0x0006fa38) main_mup3_pane_g1_ParamLimits

0x727f,	// (0x0006fa38) main_mup3_pane_g1

0x72a1,	// (0x0006fa5a) main_mup3_pane_g2_ParamLimits

0x72a1,	// (0x0006fa5a) main_mup3_pane_g2

0x7309,	// (0x0006fac2) main_mup3_pane_g3_ParamLimits

0x7309,	// (0x0006fac2) main_mup3_pane_g3

0x7347,	// (0x0006fb00) main_mup3_pane_g4_ParamLimits

0x7347,	// (0x0006fb00) main_mup3_pane_g4

0x7385,	// (0x0006fb3e) main_mup3_pane_g5_ParamLimits

0x7385,	// (0x0006fb3e) main_mup3_pane_g5

0x73c3,	// (0x0006fb7c) main_mup3_pane_g6_ParamLimits

0x73c3,	// (0x0006fb7c) main_mup3_pane_g6

0xcbcc,	// (0x00075385) main_mup3_pane_g7_ParamLimits

0xcbcc,	// (0x00075385) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x00077f6e) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x00077f6e) main_mup3_pane_g

0x7439,	// (0x0006fbf2) main_mup3_pane_t1_ParamLimits

0x7439,	// (0x0006fbf2) main_mup3_pane_t1

0x74a1,	// (0x0006fc5a) main_mup3_pane_t2_ParamLimits

0x74a1,	// (0x0006fc5a) main_mup3_pane_t2

0x7569,	// (0x0006fd22) main_mup3_pane_t4_ParamLimits

0x7569,	// (0x0006fd22) main_mup3_pane_t4

0x75b7,	// (0x0006fd70) main_mup3_pane_t5_ParamLimits

0x75b7,	// (0x0006fd70) main_mup3_pane_t5

0x7665,	// (0x0006fe1e) main_mup3_pane_t6_ParamLimits

0x7665,	// (0x0006fe1e) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x00077f7f) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x00077f7f) main_mup3_pane_t

0x7719,	// (0x0006fed2) mup3_progress_pane_ParamLimits

0x7719,	// (0x0006fed2) mup3_progress_pane

0x7775,	// (0x0006ff2e) popup_mup3_control_window_ParamLimits

0x7775,	// (0x0006ff2e) popup_mup3_control_window

0xcbda,	// (0x00075393) popup_mup3_text_window

0x77a3,	// (0x0006ff5c) mup3_progress_pane_t1

0x77b9,	// (0x0006ff72) mup3_progress_pane_t2

0xcbe2,	// (0x0007539b) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x00077f8c) mup3_progress_pane_t

0xcbf9,	// (0x000753b2) mup_progress_pane_cp03

0xad8c,	// (0x00073545) bg_tb_trans_pane_cp04

0x77cf,	// (0x0006ff88) mup3_volume_pane

0x77d7,	// (0x0006ff90) popup_mup3_control_window_g1

0x77e0,	// (0x0006ff99) mup3_volume_pane_g1

0x77e9,	// (0x0006ffa2) mup3_volume_pane_g2

0x77f2,	// (0x0006ffab) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x00077f93) mup3_volume_pane_g

0xad8c,	// (0x00073545) bg_tb_trans_pane_cp03

0xcc09,	// (0x000753c2) popup_mup3_text_window_g1

0xcc11,	// (0x000753ca) popup_mup3_text_window_t1

0xb5c8,	// (0x00073d81) list_calc_item_pane_g1_ParamLimits

0xc667,	// (0x00074e20) mup_volume_pane_cp_g1

0x7211,	// (0x0006f9ca) main_touch_calib_pane_t3

0x7223,	// (0x0006f9dc) main_touch_calib_pane_t4

0x7235,	// (0x0006f9ee) main_touch_calib_pane_t5

0xad96,	// (0x0007354f) aid_cell_size_toolbar2

0xad9e,	// (0x00073557) aid_popup3_width_pane

0xada6,	// (0x0007355f) aid_zoom_text_msg_primary

0xb7ec,	// (0x00073fa5) vorec_t7

0xb58c,	// (0x00073d45) bg_calc_paper_pane_g1_ParamLimits

0xb598,	// (0x00073d51) bg_calc_paper_pane_g2_ParamLimits

0xb5a4,	// (0x00073d5d) bg_calc_paper_pane_g3_ParamLimits

0xb5b0,	// (0x00073d69) bg_calc_paper_pane_g4_ParamLimits

0xb5bc,	// (0x00073d75) bg_calc_paper_pane_g5_ParamLimits

0x336f,	// (0x0006bb28) bg_calc_paper_pane_g6_ParamLimits

0x337e,	// (0x0006bb37) bg_calc_paper_pane_g7_ParamLimits

0x338d,	// (0x0006bb46) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00077933) bg_calc_paper_pane_g_ParamLimits

0x339c,	// (0x0006bb55) calc_bg_paper_pane_g9_ParamLimits

0x3a9d,	// (0x0006c256) image_qvga_pane_ParamLimits

0x3a9d,	// (0x0006c256) image_qvga_pane

0xb453,	// (0x00073c0c) bg_popup_sub_pane_cp04_ParamLimits

0x13bf,	// (0x00069b78) popup_mup_playback_window_g1_ParamLimits

0x13cb,	// (0x00069b84) popup_mup_playback_window_t1_ParamLimits

0x13e0,	// (0x00069b99) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00077cbf) popup_mup_playback_window_t_ParamLimits

0x6d83,	// (0x0006f53c) main_mup2_pane_g3_ParamLimits

0x6d83,	// (0x0006f53c) main_mup2_pane_g3

0x3d6b,	// (0x0006c524) popup_toolbar_window_cp04

0x57a2,	// (0x0006df5b) popup_call2_audio_second_window_g3_ParamLimits

0x57a2,	// (0x0006df5b) popup_call2_audio_second_window_g3

0x5bac,	// (0x0006e365) popup_call2_audio_first_window_g4_ParamLimits

0x5bac,	// (0x0006e365) popup_call2_audio_first_window_g4

0xc130,	// (0x000748e9) popup_call2_audio_in_window_g4_ParamLimits

0xc130,	// (0x000748e9) popup_call2_audio_in_window_g4

0x51d1,	// (0x0006d98a) aid_area_sk_bg_cut_ParamLimits

0x51d1,	// (0x0006d98a) aid_area_sk_bg_cut

0x13f5,	// (0x00069bae) aid_area_sk_bg_cut_2_ParamLimits

0x13f5,	// (0x00069bae) aid_area_sk_bg_cut_2

0x7058,	// (0x0006f811) aid_placing_details_win

0x7060,	// (0x0006f819) aid_placing_details_win_2

0xca4d,	// (0x00075206) camera2_autofocus_pane_g1_ParamLimits

0x2fe5,	// (0x0006b79e) popup_fixed_preview_cale_window_ParamLimits

0x2fe5,	// (0x0006b79e) popup_fixed_preview_cale_window

0x11d1,	// (0x0006998a) navi_slider_pane_g3

0x11da,	// (0x00069993) navi_slider_pane_g4

0x11e3,	// (0x0006999c) navi_slider_pane_g5

0x11d1,	// (0x0006998a) navi_slider_pane_g6

0xc0c6,	// (0x0007487f) navi_slider_pane_g7

0x12f6,	// (0x00069aaf) mup_scale_pane_g3

0x12ff,	// (0x00069ab8) mup_scale_pane_g4

0x1308,	// (0x00069ac1) mup_scale_pane_g5

0x4f93,	// (0x0006d74c) mup_scale_pane_g6

0x4f9c,	// (0x0006d755) mup_scale_pane_g7

0x11d1,	// (0x0006998a) cams2_slider_pane_g3

0xc6e9,	// (0x00074ea2) cams2_slider_pane_g4

0xec83,	// (0x0007743c) cams2_slider_pane_g5

0x11d1,	// (0x0006998a) cams2_slider_pane_g6

0xec8b,	// (0x00077444) cams2_slider_pane_g7

0xc90c,	// (0x000750c5) camera2_autofocus_pane_cp_g1

0xcc1f,	// (0x000753d8) bg_popup_preview_window_pane_cp02_ParamLimits

0xcc1f,	// (0x000753d8) bg_popup_preview_window_pane_cp02

0x77fb,	// (0x0006ffb4) list_fp_cale_pane_ParamLimits

0x77fb,	// (0x0006ffb4) list_fp_cale_pane

0xcc2b,	// (0x000753e4) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc2b,	// (0x000753e4) popup_fixed_preview_cale_window_t1

0x7807,	// (0x0006ffc0) popup_fixed_preview_cale_window_t2_ParamLimits

0x7807,	// (0x0006ffc0) popup_fixed_preview_cale_window_t2

0x781c,	// (0x0006ffd5) popup_fixed_preview_cale_window_t3_ParamLimits

0x781c,	// (0x0006ffd5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x00077f9a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x00077f9a) popup_fixed_preview_cale_window_t

0x7831,	// (0x0006ffea) list_single_fp_cale_pane_ParamLimits

0x7831,	// (0x0006ffea) list_single_fp_cale_pane

0x7845,	// (0x0006fffe) list_single_fp_cale_pane_g1_ParamLimits

0x7845,	// (0x0006fffe) list_single_fp_cale_pane_g1

0xcc49,	// (0x00075402) list_single_fp_cale_pane_g2_ParamLimits

0xcc49,	// (0x00075402) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x00077fa1) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x00077fa1) list_single_fp_cale_pane_g

0x7851,	// (0x0007000a) list_single_fp_cale_pane_t1_ParamLimits

0x7851,	// (0x0007000a) list_single_fp_cale_pane_t1

0x7863,	// (0x0007001c) list_single_fp_cale_pane_t2_ParamLimits

0x7863,	// (0x0007001c) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x00077fa8) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x00077fa8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xad8c,	// (0x00073545) main_dialer_pane

0x7896,	// (0x0007004f) aid_cell_size_keypad

0x78a0,	// (0x00070059) dialer_ne_pane

0x78a8,	// (0x00070061) grid_dialer_command_1_pane

0x78b0,	// (0x00070069) grid_dialer_command_2_pane

0x78b8,	// (0x00070071) grid_dialer_keypad_pane

0x78c8,	// (0x00070081) bg_popup_call_pane_cp06_ParamLimits

0x78c8,	// (0x00070081) bg_popup_call_pane_cp06

0x78d4,	// (0x0007008d) dialer_ne_clear_pane_ParamLimits

0x78d4,	// (0x0007008d) dialer_ne_clear_pane

0xcc62,	// (0x0007541b) dialer_ne_pane_g1

0xcc6a,	// (0x00075423) dialer_ne_pane_t1_ParamLimits

0xcc6a,	// (0x00075423) dialer_ne_pane_t1

0x78e0,	// (0x00070099) dialer_ne_pane_t2_ParamLimits

0x78e0,	// (0x00070099) dialer_ne_pane_t2

0x790a,	// (0x000700c3) dialer_ne_pane_t3_ParamLimits

0x790a,	// (0x000700c3) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x00077fad) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x00077fad) dialer_ne_pane_t

0x793a,	// (0x000700f3) dialer_ne_pane_t3_copy1_ParamLimits

0x793a,	// (0x000700f3) dialer_ne_pane_t3_copy1

0x7969,	// (0x00070122) cell_dialer_keypad_pane_ParamLimits

0x7969,	// (0x00070122) cell_dialer_keypad_pane

0x797e,	// (0x00070137) cell_dialer_command_1_pane_ParamLimits

0x797e,	// (0x00070137) cell_dialer_command_1_pane

0x7994,	// (0x0007014d) cell_dialer_command_2_pane_ParamLimits

0x7994,	// (0x0007014d) cell_dialer_command_2_pane

0xcc7c,	// (0x00075435) bg_button_pane_cp02_ParamLimits

0xcc7c,	// (0x00075435) bg_button_pane_cp02

0x79a3,	// (0x0007015c) cell_dialer_keypad_pane_g1_ParamLimits

0x79a3,	// (0x0007015c) cell_dialer_keypad_pane_g1

0xcc7c,	// (0x00075435) bg_button_pane_cp03_ParamLimits

0xcc7c,	// (0x00075435) bg_button_pane_cp03

0x79b8,	// (0x00070171) cell_dialer_command_1_pane_g1_ParamLimits

0x79b8,	// (0x00070171) cell_dialer_command_1_pane_g1

0xcc88,	// (0x00075441) bg_button_pane_cp04

0x79cc,	// (0x00070185) cell_dialer_command_2_pane_g1

0x11c0,	// (0x00069979) bg_button_pane_cp06

0xcc90,	// (0x00075449) dialer_ne_clear_pane_g1

0x10dd,	// (0x00069896) navi_pane_g2

0x4b98,	// (0x0006d351) navi_pane_g3

0x0002,

0xf409,	// (0x00077bc2) navi_pane_g

0x115f,	// (0x00069918) navi_pane_mv_g2

0x1187,	// (0x00069940) navi_pane_mv_g5

0x4bbd,	// (0x0006d376) navi_pane_mv_t1

0xb544,	// (0x00073cfd) main_clock2_pane

0x7a03,	// (0x000701bc) main_clock2_list_pane_ParamLimits

0x7a03,	// (0x000701bc) main_clock2_list_pane

0x7a35,	// (0x000701ee) main_clock2_pane_t1_ParamLimits

0x7a35,	// (0x000701ee) main_clock2_pane_t1

0x7a6c,	// (0x00070225) main_clock2_pane_t2_ParamLimits

0x7a6c,	// (0x00070225) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x00077fb4) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x00077fb4) main_clock2_pane_t

0x7aee,	// (0x000702a7) popup_clock_analogue_window_cp03_ParamLimits

0x7aee,	// (0x000702a7) popup_clock_analogue_window_cp03

0x7b11,	// (0x000702ca) popup_clock_digital_window_cp02_ParamLimits

0x7b11,	// (0x000702ca) popup_clock_digital_window_cp02

0x7b82,	// (0x0007033b) main_clock2_list_single_pane_ParamLimits

0x7b82,	// (0x0007033b) main_clock2_list_single_pane

0x11c0,	// (0x00069979) list_highlight_pane_cp05

0xcc98,	// (0x00075451) main_clock2_list_single_pane_t1

0x3d6b,	// (0x0006c524) popup_toolbar_window_cp04_ParamLimits

0x70b9,	// (0x0006f872) camera2_autofocus_pane_g2_ParamLimits

0x70b9,	// (0x0006f872) camera2_autofocus_pane_g2

0x70c5,	// (0x0006f87e) camera2_autofocus_pane_g3_ParamLimits

0x70c5,	// (0x0006f87e) camera2_autofocus_pane_g3

0x70d1,	// (0x0006f88a) camera2_autofocus_pane_g4_ParamLimits

0x70d1,	// (0x0006f88a) camera2_autofocus_pane_g4

0x70dd,	// (0x0006f896) camera2_autofocus_pane_g5_ParamLimits

0x70dd,	// (0x0006f896) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x00077efd) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x00077efd) camera2_autofocus_pane_g

0x725f,	// (0x0006fa18) camera2_autofocus_pane_cp_g2

0x7267,	// (0x0006fa20) camera2_autofocus_pane_cp_g3

0x726f,	// (0x0006fa28) camera2_autofocus_pane_cp_g4

0x7277,	// (0x0006fa30) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x00077f63) camera2_autofocus_pane_cp_g

0x78c0,	// (0x00070079) popup_dialer_spcha_window

0xad8c,	// (0x00073545) bg_popup_sub_pane_cp07

0xcca6,	// (0x0007545f) list_spcha_pane

0xccae,	// (0x00075467) list_single_spcha_pane_ParamLimits

0xccae,	// (0x00075467) list_single_spcha_pane

0xad8c,	// (0x00073545) list_highlight_pane_cp06

0xccbf,	// (0x00075478) list_single_spcha_pane_t1

0x5fd5,	// (0x0006e78e) popup_call2_audio_out_window_g4_ParamLimits

0x5fd5,	// (0x0006e78e) popup_call2_audio_out_window_g4

0xad8c,	// (0x00073545) main_imed2_pane

0xc4f7,	// (0x00074cb0) popup_imed_adjust2_window

0x659d,	// (0x0006ed56) popup_imed_trans_window_ParamLimits

0x659d,	// (0x0006ed56) popup_imed_trans_window

0xc750,	// (0x00074f09) popup_blid_sat_info2_window_t1

0xc75e,	// (0x00074f17) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x00077e92) popup_blid_sat_info2_window_t

0x7c2c,	// (0x000703e5) aid_size_cell_colour_35

0x7c4c,	// (0x00070405) aid_size_cell_colour_112

0x7c6c,	// (0x00070425) aid_size_cell_effect

0xc4d1,	// (0x00074c8a) bg_tb_trans_pane_cp02

0xbd8f,	// (0x00074548) heading_imed_pane

0x7c8c,	// (0x00070445) listscroll_imed_pane

0xcccd,	// (0x00075486) heading_imed_pane_g1

0xccd5,	// (0x0007548e) heading_imed_pane_t1

0xcce3,	// (0x0007549c) grid_imed_colour_35_pane_ParamLimits

0xcce3,	// (0x0007549c) grid_imed_colour_35_pane

0x7c98,	// (0x00070451) grid_imed_effect_pane

0xccf6,	// (0x000754af) list_imed_aspect_pane

0x7cab,	// (0x00070464) scroll_pane_cp027_ParamLimits

0x7cab,	// (0x00070464) scroll_pane_cp027

0x7cb7,	// (0x00070470) cell_imed_effect_pane_ParamLimits

0x7cb7,	// (0x00070470) cell_imed_effect_pane

0xccfe,	// (0x000754b7) cell_imed_colour_pane_ParamLimits

0xccfe,	// (0x000754b7) cell_imed_colour_pane

0xcd38,	// (0x000754f1) cell_imed_colour_pane_g1_ParamLimits

0xcd38,	// (0x000754f1) cell_imed_colour_pane_g1

0xcd49,	// (0x00075502) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd49,	// (0x00075502) hgihlgiht_grid_pane_cp016

0x7cdc,	// (0x00070495) cell_imed_effect_pane_g1

0x7ce4,	// (0x0007049d) grid_highlight_pane_cp017

0xcd5a,	// (0x00075513) list_imed_single_pane_ParamLimits

0xcd5a,	// (0x00075513) list_imed_single_pane

0xad8c,	// (0x00073545) list_highlight_pane_cp07

0xcd6d,	// (0x00075526) list_imed_aspect_pane_comp1_t1

0xc4d1,	// (0x00074c8a) bg_tb_trans_pane_cp05

0xcd8d,	// (0x00075546) popup_imed_adjust2_window_g1

0xcdb4,	// (0x0007556d) popup_imed_adjust2_window_t1

0xcdcc,	// (0x00075585) slider_imed_adjust_pane

0xcde0,	// (0x00075599) slider_imed_adjust_pane_g1

0xcdf0,	// (0x000755a9) slider_imed_adjust_pane_g2

0xce00,	// (0x000755b9) slider_imed_adjust_pane_g3

0xce11,	// (0x000755ca) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x00077fd1) slider_imed_adjust_pane_g

0x7ced,	// (0x000704a6) aid_size_cell_clipart2

0x7cf9,	// (0x000704b2) grid_imed_clipart_pane

0xce22,	// (0x000755db) scroll_pane_cp031

0x7d03,	// (0x000704bc) cell_imed_clipart_pane_ParamLimits

0x7d03,	// (0x000704bc) cell_imed_clipart_pane

0x7d1b,	// (0x000704d4) cell_imed_clipart_pane_g1

0xad8c,	// (0x00073545) grid_highlight_pane_cp014

0x7a16,	// (0x000701cf) main_clock2_pane_g1_ParamLimits

0x7a16,	// (0x000701cf) main_clock2_pane_g1

0x7b2d,	// (0x000702e6) aid_call2_pane_cp10

0x7b3f,	// (0x000702f8) aid_call_pane_cp10

0x108d,	// (0x00069846) popup_clock_analogue_window_cp10_g1

0x108d,	// (0x00069846) popup_clock_analogue_window_cp10_g2

0x7b51,	// (0x0007030a) popup_clock_analogue_window_cp10_g3

0x7b51,	// (0x0007030a) popup_clock_analogue_window_cp10_g4

0x108d,	// (0x00069846) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x00077fbf) popup_clock_analogue_window_cp10_g

0x7b63,	// (0x0007031c) popup_clock_analogue_window_cp10_t1

0x7b94,	// (0x0007034d) clock_digital_number_pane_cp10_ParamLimits

0x7b94,	// (0x0007034d) clock_digital_number_pane_cp10

0x7bac,	// (0x00070365) clock_digital_number_pane_cp11_ParamLimits

0x7bac,	// (0x00070365) clock_digital_number_pane_cp11

0x7bc4,	// (0x0007037d) clock_digital_number_pane_cp12_ParamLimits

0x7bc4,	// (0x0007037d) clock_digital_number_pane_cp12

0x7bdc,	// (0x00070395) clock_digital_number_pane_cp13_ParamLimits

0x7bdc,	// (0x00070395) clock_digital_number_pane_cp13

0x7bf4,	// (0x000703ad) clock_digital_separator_pane_cp10_ParamLimits

0x7bf4,	// (0x000703ad) clock_digital_separator_pane_cp10

0x7c0c,	// (0x000703c5) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c0c,	// (0x000703c5) popup_clock_digital_window_cp02_t1

0xb44b,	// (0x00073c04) clock_digital_number_pane_cp10_g1

0xb44b,	// (0x00073c04) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x00077fda) clock_digital_number_pane_cp10_g

0xb44b,	// (0x00073c04) clock_digital_separator_pane_cp10_g1

0xb44b,	// (0x00073c04) clock_digital_separator_pane_g2_cp10

0x1190,	// (0x00069949) navi_pane_vded_g4

0x1199,	// (0x00069952) navi_pane_vded_g5

0x11a2,	// (0x0006995b) navi_pane_vded_t1

0xad8c,	// (0x00073545) main_vded_pane

0x7d24,	// (0x000704dd) main_vded_pane_g1

0x7d2e,	// (0x000704e7) main_vded_pane_g2

0x7d36,	// (0x000704ef) main_vded_pane_g3

0x0002,

0xf826,	// (0x00077fdf) main_vded_pane_g

0x7d3e,	// (0x000704f7) main_vded_pane_t1

0x7d4c,	// (0x00070505) main_vded_pane_t2

0x0001,

0xf82d,	// (0x00077fe6) main_vded_pane_t

0x7d5a,	// (0x00070513) vded_slider_pane

0x7d62,	// (0x0007051b) vded_video_pane

0xce2a,	// (0x000755e3) vded_video_pane_g1

0x7d6a,	// (0x00070523) vded_video_pane_g2

0xc90c,	// (0x000750c5) vded_video_pane_g3

0x0002,

0xf832,	// (0x00077feb) vded_video_pane_g

0xce34,	// (0x000755ed) vded_slider_pane_g1

0xc667,	// (0x00074e20) vded_slider_pane_g2

0xce3d,	// (0x000755f6) vded_slider_pane_g3

0xce46,	// (0x000755ff) vded_slider_pane_g4

0xce4f,	// (0x00075608) vded_slider_pane_g5

0x0004,

0xf839,	// (0x00077ff2) vded_slider_pane_g

0x775f,	// (0x0006ff18) mup3_rocker_pane_ParamLimits

0x775f,	// (0x0006ff18) mup3_rocker_pane

0x7d73,	// (0x0007052c) mup3_control_keys_pane_g1

0x7d7b,	// (0x00070534) mup3_control_keys_pane_g2

0x7d83,	// (0x0007053c) mup3_control_keys_pane_g3

0x7d8b,	// (0x00070544) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x00077ffd) mup3_control_keys_pane_g

0x3018,	// (0x0006b7d1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3018,	// (0x0006b7d1) popup_toolbar2_fixed_window_cp01

0x778d,	// (0x0006ff46) popup_toolbar2_fixed_window_cp02_ParamLimits

0x778d,	// (0x0006ff46) popup_toolbar2_fixed_window_cp02

0x5914,	// (0x0006e0cd) popup_call2_audio_second_window_t4_ParamLimits

0x5914,	// (0x0006e0cd) popup_call2_audio_second_window_t4

0x5e42,	// (0x0006e5fb) popup_call2_audio_first_window_t6_ParamLimits

0x5e42,	// (0x0006e5fb) popup_call2_audio_first_window_t6

0x60d8,	// (0x0006e891) popup_call2_audio_out_window_t6_ParamLimits

0x60d8,	// (0x0006e891) popup_call2_audio_out_window_t6

0xad8c,	// (0x00073545) main_vitu_pane

0x7d9b,	// (0x00070554) aid_size_cell_itu_ParamLimits

0x7d9b,	// (0x00070554) aid_size_cell_itu

0x1547,	// (0x00069d00) bg_popup_window_pane_cp08_ParamLimits

0x1547,	// (0x00069d00) bg_popup_window_pane_cp08

0x7db1,	// (0x0007056a) field_vitu_entry_pane_ParamLimits

0x7db1,	// (0x0007056a) field_vitu_entry_pane

0x7dc4,	// (0x0007057d) grid_vitu_function_pane_ParamLimits

0x7dc4,	// (0x0007057d) grid_vitu_function_pane

0x7dd9,	// (0x00070592) grid_vitu_itu_pane_ParamLimits

0x7dd9,	// (0x00070592) grid_vitu_itu_pane

0x7def,	// (0x000705a8) cell_vitu_itu_pane_ParamLimits

0x7def,	// (0x000705a8) cell_vitu_itu_pane

0x7e11,	// (0x000705ca) cell_vitu_function_pane_ParamLimits

0x7e11,	// (0x000705ca) cell_vitu_function_pane

0x1547,	// (0x00069d00) bg_popup_sub_pane_cp08_ParamLimits

0x1547,	// (0x00069d00) bg_popup_sub_pane_cp08

0x7e2a,	// (0x000705e3) field_vitu_entry_pane_t1_ParamLimits

0x7e2a,	// (0x000705e3) field_vitu_entry_pane_t1

0xce70,	// (0x00075629) field_vitu_entry_pane_t2_ParamLimits

0xce70,	// (0x00075629) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x0007800b) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x0007800b) field_vitu_entry_pane_t

0xce8d,	// (0x00075646) bg_button_pane_cp05_ParamLimits

0xce8d,	// (0x00075646) bg_button_pane_cp05

0x7e46,	// (0x000705ff) cell_vitu_itu_pane_g1

0x7e5e,	// (0x00070617) cell_vitu_itu_pane_t1_ParamLimits

0x7e5e,	// (0x00070617) cell_vitu_itu_pane_t1

0x7e70,	// (0x00070629) cell_vitu_itu_pane_t2_ParamLimits

0x7e70,	// (0x00070629) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x00078010) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x00078010) cell_vitu_itu_pane_t

0xce9b,	// (0x00075654) bg_button_pane_cp07

0x7ea5,	// (0x0007065e) cell_vitu_function_pane_g1

0xb4da,	// (0x00073c93) main_calc_pane_g1

0x2e7c,	// (0x0006b635) aid_visual_content_pane

0xad8c,	// (0x00073545) main_vradio_pane

0x7eae,	// (0x00070667) main_vradio_pane_g1_ParamLimits

0x7eae,	// (0x00070667) main_vradio_pane_g1

0xcea5,	// (0x0007565e) main_vradio_pane_g2_ParamLimits

0xcea5,	// (0x0007565e) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x00078017) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x00078017) main_vradio_pane_g

0x7ec4,	// (0x0007067d) main_vradio_pane_t1_ParamLimits

0x7ec4,	// (0x0007067d) main_vradio_pane_t1

0x7ed9,	// (0x00070692) main_vradio_pane_t2_ParamLimits

0x7ed9,	// (0x00070692) main_vradio_pane_t2

0xceb2,	// (0x0007566b) main_vradio_pane_t3_ParamLimits

0xceb2,	// (0x0007566b) main_vradio_pane_t3

0x0002,

0xf863,	// (0x0007801c) main_vradio_pane_t_ParamLimits

0xf863,	// (0x0007801c) main_vradio_pane_t

0x7eee,	// (0x000706a7) vradio_rocker_control_pane_ParamLimits

0x7eee,	// (0x000706a7) vradio_rocker_control_pane

0x7f00,	// (0x000706b9) vradio_station_info_pane_ParamLimits

0x7f00,	// (0x000706b9) vradio_station_info_pane

0xcec4,	// (0x0007567d) vradio_frequency_info_pane_ParamLimits

0xcec4,	// (0x0007567d) vradio_frequency_info_pane

0xc90c,	// (0x000750c5) vradio_station_info_pane_g1

0xced3,	// (0x0007568c) vradio_station_info_pane_t1_ParamLimits

0xced3,	// (0x0007568c) vradio_station_info_pane_t1

0xcef5,	// (0x000756ae) vradio_station_info_pane_t2_ParamLimits

0xcef5,	// (0x000756ae) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x00078023) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x00078023) vradio_station_info_pane_t

0xcf07,	// (0x000756c0) vradio_tuning_pane

0xcf0f,	// (0x000756c8) vradio_rocker_control_pane_g1

0xcf17,	// (0x000756d0) vradio_rocker_control_pane_g2

0xcf1f,	// (0x000756d8) vradio_rocker_control_pane_g3

0xcf27,	// (0x000756e0) vradio_rocker_control_pane_g4

0xcf2f,	// (0x000756e8) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x00078028) vradio_rocker_control_pane_g

0x7f10,	// (0x000706c9) vradio_frequency_info_pane_g1

0xcf37,	// (0x000756f0) vradio_frequency_info_pane_t1_ParamLimits

0xcf37,	// (0x000756f0) vradio_frequency_info_pane_t1

0x7f1a,	// (0x000706d3) vradio_tuning_pane_g1

0x7f23,	// (0x000706dc) vradio_tuning_pane_t1

0xadbe,	// (0x00073577) area_side_right_pane_ParamLimits

0xadbe,	// (0x00073577) area_side_right_pane

0xc498,	// (0x00074c51) status_small_pane_g1

0xc4a0,	// (0x00074c59) status_small_pane_g2

0xc4a9,	// (0x00074c62) status_small_pane_g3

0xc4b2,	// (0x00074c6b) status_small_pane_g4

0x0003,

0xf62f,	// (0x00077de8) status_small_pane_g

0xc4bb,	// (0x00074c74) status_small_pane_t1

0xad8c,	// (0x00073545) main_video3_pane

0xcf4b,	// (0x00075704) cams_zoom_vslider_pane

0xcf53,	// (0x0007570c) image3_wide_pane_ParamLimits

0xcf53,	// (0x0007570c) image3_wide_pane

0xcf6d,	// (0x00075726) image3_wide_small_pane

0xcf77,	// (0x00075730) main_video3_pane_g1_ParamLimits

0xcf77,	// (0x00075730) main_video3_pane_g1

0xcf93,	// (0x0007574c) main_video3_pane_g2_ParamLimits

0xcf93,	// (0x0007574c) main_video3_pane_g2

0x0001,

0xf87a,	// (0x00078033) main_video3_pane_g_ParamLimits

0xf87a,	// (0x00078033) main_video3_pane_g

0xcfaf,	// (0x00075768) main_video3_pane_t1_ParamLimits

0xcfaf,	// (0x00075768) main_video3_pane_t1

0xcfda,	// (0x00075793) main_video3_pane_t2_ParamLimits

0xcfda,	// (0x00075793) main_video3_pane_t2

0xd005,	// (0x000757be) main_video3_pane_t3_ParamLimits

0xd005,	// (0x000757be) main_video3_pane_t3

0x0002,

0xf87f,	// (0x00078038) main_video3_pane_t_ParamLimits

0xf87f,	// (0x00078038) main_video3_pane_t

0xd030,	// (0x000757e9) cams_zoom_vslider_pane_g1

0xd039,	// (0x000757f2) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x0007803f) cams_zoom_vslider_pane_g

0xd041,	// (0x000757fa) small_slider_vertical_pane

0xc90c,	// (0x000750c5) small_slider_vertical_pane_g1

0xc90c,	// (0x000750c5) small_slider_vertical_pane_g2

0xd049,	// (0x00075802) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x00078044) small_slider_vertical_pane_g

0xad8c,	// (0x00073545) main_hwr_training_pane

0xd052,	// (0x0007580b) hwr_training_instruct_pane_ParamLimits

0xd052,	// (0x0007580b) hwr_training_instruct_pane

0x7f32,	// (0x000706eb) hwr_training_navi_pane_ParamLimits

0x7f32,	// (0x000706eb) hwr_training_navi_pane

0x7f49,	// (0x00070702) hwr_training_write_pane_ParamLimits

0x7f49,	// (0x00070702) hwr_training_write_pane

0xad8c,	// (0x00073545) bg_frame_shadow_pane

0xd081,	// (0x0007583a) hwr_training_write_pane_g1

0xd089,	// (0x00075842) hwr_training_write_pane_g2

0xd091,	// (0x0007584a) hwr_training_write_pane_g3

0xd099,	// (0x00075852) hwr_training_write_pane_g4

0xd0a1,	// (0x0007585a) hwr_training_write_pane_g5

0xd0a9,	// (0x00075862) hwr_training_write_pane_g6

0xd0b1,	// (0x0007586a) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x0007804b) hwr_training_write_pane_g

0xecdc,	// (0x00077495) hwr_training_navi_pane_g1_ParamLimits

0xecdc,	// (0x00077495) hwr_training_navi_pane_g1

0xecee,	// (0x000774a7) hwr_training_navi_pane_g2_ParamLimits

0xecee,	// (0x000774a7) hwr_training_navi_pane_g2

0xed00,	// (0x000774b9) hwr_training_navi_pane_g3_ParamLimits

0xed00,	// (0x000774b9) hwr_training_navi_pane_g3

0xed10,	// (0x000774c9) hwr_training_navi_pane_g4_ParamLimits

0xed10,	// (0x000774c9) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x0007805a) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x0007805a) hwr_training_navi_pane_g

0xed1d,	// (0x000774d6) hwr_training_navi_pane_t1

0x7f89,	// (0x00070742) list_single_hwr_training_instruct_pane_ParamLimits

0x7f89,	// (0x00070742) list_single_hwr_training_instruct_pane

0xd0b9,	// (0x00075872) list_single_hwr_training_instruct_pane_t1

0xc84c,	// (0x00075005) bg_frame_shadow_pane_g1

0xd0c8,	// (0x00075881) bg_frame_shadow_pane_g2

0xd0d0,	// (0x00075889) bg_frame_shadow_pane_g3

0xd0d8,	// (0x00075891) bg_frame_shadow_pane_g4

0xd0e0,	// (0x00075899) bg_frame_shadow_pane_g5

0xd0e8,	// (0x000758a1) bg_frame_shadow_pane_g6

0xd0f0,	// (0x000758a9) bg_frame_shadow_pane_g7

0xb667,	// (0x00073e20) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x00078065) bg_frame_shadow_pane_g

0xad8c,	// (0x00073545) main_video_tele_dialer_pane

0x7fa1,	// (0x0007075a) aid_size_cell_video_keypad_ParamLimits

0x7fa1,	// (0x0007075a) aid_size_cell_video_keypad

0x7fbb,	// (0x00070774) grid_video_dialer_keypad_pane_ParamLimits

0x7fbb,	// (0x00070774) grid_video_dialer_keypad_pane

0x7ffd,	// (0x000707b6) video_down_pane_cp_ParamLimits

0x7ffd,	// (0x000707b6) video_down_pane_cp

0x802d,	// (0x000707e6) cell_video_dialer_keypad_pane_ParamLimits

0x802d,	// (0x000707e6) cell_video_dialer_keypad_pane

0xd0f8,	// (0x000758b1) bg_button_pane_cp08_ParamLimits

0xd0f8,	// (0x000758b1) bg_button_pane_cp08

0x804f,	// (0x00070808) cell_video_dialer_keypad_pane_g1_ParamLimits

0x804f,	// (0x00070808) cell_video_dialer_keypad_pane_g1

0x7749,	// (0x0006ff02) mup3_rocker2_pane_ParamLimits

0x7749,	// (0x0006ff02) mup3_rocker2_pane

0xc90c,	// (0x000750c5) mup3_rocker2_pane_g1

0x6496,	// (0x0006ec4f) main_dialer2_pane

0xad8c,	// (0x00073545) main_mp4_pane

0xed33,	// (0x000774ec) main_mp4_pane_g1_ParamLimits

0xed33,	// (0x000774ec) main_mp4_pane_g1

0xed33,	// (0x000774ec) main_mp4_pane_g2_ParamLimits

0xed33,	// (0x000774ec) main_mp4_pane_g2

0x808a,	// (0x00070843) main_mp4_pane_g3_ParamLimits

0x808a,	// (0x00070843) main_mp4_pane_g3

0xed41,	// (0x000774fa) main_mp4_pane_g4_ParamLimits

0xed41,	// (0x000774fa) main_mp4_pane_g4

0xed6f,	// (0x00077528) main_mp4_pane_g5_ParamLimits

0xed6f,	// (0x00077528) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x00078085) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x00078085) main_mp4_pane_g

0xedcb,	// (0x00077584) main_mp4_pane_t1_ParamLimits

0xedcb,	// (0x00077584) main_mp4_pane_t1

0xee23,	// (0x000775dc) main_mp4_pane_t2_ParamLimits

0xee23,	// (0x000775dc) main_mp4_pane_t2

0xd104,	// (0x000758bd) main_mp4_pane_t3_ParamLimits

0xd104,	// (0x000758bd) main_mp4_pane_t3

0xee75,	// (0x0007762e) main_mp4_pane_t4_ParamLimits

0xee75,	// (0x0007762e) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x00078092) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x00078092) main_mp4_pane_t

0xeeb5,	// (0x0007766e) mp4_progress_pane_ParamLimits

0xeeb5,	// (0x0007766e) mp4_progress_pane

0xeef9,	// (0x000776b2) mp4_rocker_pane_ParamLimits

0xeef9,	// (0x000776b2) mp4_rocker_pane

0xd132,	// (0x000758eb) mp4_progress_pane_t1

0xd149,	// (0x00075902) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x0007809b) mp4_progress_pane_t

0xd160,	// (0x00075919) mup_progress_pane_cp04

0xc90c,	// (0x000750c5) mp4_rocker_pane_g1

0x80ba,	// (0x00070873) aid_cell_size_keypad2_ParamLimits

0x80ba,	// (0x00070873) aid_cell_size_keypad2

0x80d4,	// (0x0007088d) dialer2_ne_pane_ParamLimits

0x80d4,	// (0x0007088d) dialer2_ne_pane

0x80e9,	// (0x000708a2) grid_dialer2_keypad_pane_ParamLimits

0x80e9,	// (0x000708a2) grid_dialer2_keypad_pane

0xc6f9,	// (0x00074eb2) bg_popup_call_pane_cp07_ParamLimits

0xc6f9,	// (0x00074eb2) bg_popup_call_pane_cp07

0x80ff,	// (0x000708b8) dialer2_ne_pane_t1_ParamLimits

0x80ff,	// (0x000708b8) dialer2_ne_pane_t1

0x813c,	// (0x000708f5) cell_dialer2_keypad_pane_ParamLimits

0x813c,	// (0x000708f5) cell_dialer2_keypad_pane

0xd17e,	// (0x00075937) bg_button_pane_pane_cp04_ParamLimits

0xd17e,	// (0x00075937) bg_button_pane_pane_cp04

0x815e,	// (0x00070917) cell_dialer2_keypad_pane_g1_ParamLimits

0x815e,	// (0x00070917) cell_dialer2_keypad_pane_g1

0x3c59,	// (0x0006c412) aid_placing_vt_set_content_ParamLimits

0x3c59,	// (0x0006c412) aid_placing_vt_set_content

0x3c7b,	// (0x0006c434) aid_placing_vt_set_title_ParamLimits

0x3c7b,	// (0x0006c434) aid_placing_vt_set_title

0xad8c,	// (0x00073545) main_image3_pane

0x81ed,	// (0x000709a6) area_side_right_pane_cp01_ParamLimits

0x81ed,	// (0x000709a6) area_side_right_pane_cp01

0xed33,	// (0x000774ec) main_image3_pane_g1_ParamLimits

0xed33,	// (0x000774ec) main_image3_pane_g1

0x8204,	// (0x000709bd) main_image3_pane_g2_ParamLimits

0x8204,	// (0x000709bd) main_image3_pane_g2

0x822a,	// (0x000709e3) main_image3_pane_g3_ParamLimits

0x822a,	// (0x000709e3) main_image3_pane_g3

0x8250,	// (0x00070a09) main_image3_pane_g4_ParamLimits

0x8250,	// (0x00070a09) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x000780aa) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x000780aa) main_image3_pane_g

0x8276,	// (0x00070a2f) main_image3_pane_t1_ParamLimits

0x8276,	// (0x00070a2f) main_image3_pane_t1

0x82ce,	// (0x00070a87) main_image3_pane_t2_ParamLimits

0x82ce,	// (0x00070a87) main_image3_pane_t2

0x8320,	// (0x00070ad9) main_image3_pane_t3_ParamLimits

0x8320,	// (0x00070ad9) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x000780b3) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x000780b3) main_image3_pane_t

0x1547,	// (0x00069d00) grid_sctrl_middle_pane_cp01_ParamLimits

0x1547,	// (0x00069d00) grid_sctrl_middle_pane_cp01

0x83a0,	// (0x00070b59) cell_sctrl_middle_pane_cp01_ParamLimits

0x83a0,	// (0x00070b59) cell_sctrl_middle_pane_cp01

0x83bd,	// (0x00070b76) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x83bd,	// (0x00070b76) cell_sctrl_middle_pane_cp01_g1

0xad8c,	// (0x00073545) main_call4_pane

0x83d3,	// (0x00070b8c) aid_size_button_call4_ParamLimits

0x83d3,	// (0x00070b8c) aid_size_button_call4

0x8400,	// (0x00070bb9) call4_windows_pane_ParamLimits

0x8400,	// (0x00070bb9) call4_windows_pane

0x8416,	// (0x00070bcf) grid_call4_button_pane_ParamLimits

0x8416,	// (0x00070bcf) grid_call4_button_pane

0xd1a2,	// (0x0007595b) call4_windows_conf_pane

0x8435,	// (0x00070bee) popup_call4_audio_first_window_ParamLimits

0x8435,	// (0x00070bee) popup_call4_audio_first_window

0x8455,	// (0x00070c0e) popup_call4_audio_second_window_ParamLimits

0x8455,	// (0x00070c0e) popup_call4_audio_second_window

0xd1d5,	// (0x0007598e) popup_call4_audio_wait_window_ParamLimits

0xd1d5,	// (0x0007598e) popup_call4_audio_wait_window

0x8467,	// (0x00070c20) cell_call4_button_pane_ParamLimits

0x8467,	// (0x00070c20) cell_call4_button_pane

0x848c,	// (0x00070c45) bg_button_pane_cp09_ParamLimits

0x848c,	// (0x00070c45) bg_button_pane_cp09

0x8498,	// (0x00070c51) cell_call4_button_pane_g1_ParamLimits

0x8498,	// (0x00070c51) cell_call4_button_pane_g1

0x84be,	// (0x00070c77) cell_call4_button_pane_t1_ParamLimits

0x84be,	// (0x00070c77) cell_call4_button_pane_t1

0xd21b,	// (0x000759d4) popup_call4_audio_conf_window_ParamLimits

0xd21b,	// (0x000759d4) popup_call4_audio_conf_window

0x77a3,	// (0x0006ff5c) mup3_progress_pane_t1_ParamLimits

0x77b9,	// (0x0006ff72) mup3_progress_pane_t2_ParamLimits

0xcbe2,	// (0x0007539b) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x00077f8c) mup3_progress_pane_t_ParamLimits

0xcbf9,	// (0x000753b2) mup_progress_pane_cp03_ParamLimits

0x7d93,	// (0x0007054c) mup3_control_keys_pane_g4_copy1

0xeee3,	// (0x0007769c) mp4_rocker2_pane_ParamLimits

0xeee3,	// (0x0007769c) mp4_rocker2_pane

0xd22f,	// (0x000759e8) mp4_rocker2_pane_g1

0xd237,	// (0x000759f0) mp4_rocker2_pane_g2

0xef49,	// (0x00077702) mp4_rocker2_pane_g3

0xef51,	// (0x0007770a) mp4_rocker2_pane_g4

0xef59,	// (0x00077712) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x000780bc) mp4_rocker2_pane_g

0xad8c,	// (0x00073545) main_camera4_pane

0xad8c,	// (0x00073545) main_video4_pane

0x7fcf,	// (0x00070788) main_video_tele_dialer_pane_t1_ParamLimits

0x7fcf,	// (0x00070788) main_video_tele_dialer_pane_t1

0x7fe6,	// (0x0007079f) main_video_tele_dialer_pane_t2_ParamLimits

0x7fe6,	// (0x0007079f) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x00078076) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x00078076) main_video_tele_dialer_pane_t

0x84fc,	// (0x00070cb5) cam4_autofocus_pane_ParamLimits

0x84fc,	// (0x00070cb5) cam4_autofocus_pane

0x8510,	// (0x00070cc9) cam4_image_uncrop_pane_ParamLimits

0x8510,	// (0x00070cc9) cam4_image_uncrop_pane

0x8527,	// (0x00070ce0) cam4_indicators_pane_ParamLimits

0x8527,	// (0x00070ce0) cam4_indicators_pane

0x854b,	// (0x00070d04) main_camera4_pane_g1_ParamLimits

0x854b,	// (0x00070d04) main_camera4_pane_g1

0x8557,	// (0x00070d10) main_camera4_pane_g2_ParamLimits

0x8557,	// (0x00070d10) main_camera4_pane_g2

0x8557,	// (0x00070d10) main_camera4_pane_g3_ParamLimits

0x8557,	// (0x00070d10) main_camera4_pane_g3

0x8563,	// (0x00070d1c) main_camera4_pane_g4_ParamLimits

0x8563,	// (0x00070d1c) main_camera4_pane_g4

0x856f,	// (0x00070d28) main_camera4_pane_g5_ParamLimits

0x856f,	// (0x00070d28) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x000780c7) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x000780c7) main_camera4_pane_g

0x858c,	// (0x00070d45) main_camera4_pane_t1_ParamLimits

0x858c,	// (0x00070d45) main_camera4_pane_t1

0xcb3b,	// (0x000752f4) bg_tb_trans_pane_cp06

0xef83,	// (0x0007773c) cam4_indicators_pane_g1

0xef93,	// (0x0007774c) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x000780e2) cam4_indicators_pane_g

0xefb3,	// (0x0007776c) cam4_indicators_pane_t1

0x85e1,	// (0x00070d9a) main_video4_pane_g1_ParamLimits

0x85e1,	// (0x00070d9a) main_video4_pane_g1

0x85f3,	// (0x00070dac) main_video4_pane_g2_ParamLimits

0x85f3,	// (0x00070dac) main_video4_pane_g2

0x85f3,	// (0x00070dac) main_video4_pane_g3_ParamLimits

0x85f3,	// (0x00070dac) main_video4_pane_g3

0x8602,	// (0x00070dbb) main_video4_pane_g4_ParamLimits

0x8602,	// (0x00070dbb) main_video4_pane_g4

0x0004,

0xf930,	// (0x000780e9) main_video4_pane_g_ParamLimits

0xf930,	// (0x000780e9) main_video4_pane_g

0x8620,	// (0x00070dd9) vid4_indicators_pane_ParamLimits

0x8620,	// (0x00070dd9) vid4_indicators_pane

0x8648,	// (0x00070e01) video4_image_uncrop_cif_pane_ParamLimits

0x8648,	// (0x00070e01) video4_image_uncrop_cif_pane

0x8660,	// (0x00070e19) video4_image_uncrop_nhd_pane_ParamLimits

0x8660,	// (0x00070e19) video4_image_uncrop_nhd_pane

0x8674,	// (0x00070e2d) video4_image_uncrop_vga_pane_ParamLimits

0x8674,	// (0x00070e2d) video4_image_uncrop_vga_pane

0xd23f,	// (0x000759f8) bg_tb_trans_pane_cp07

0x868c,	// (0x00070e45) vid4_indicators_pane_g1

0x8699,	// (0x00070e52) vid4_indicators_pane_g2

0x86a6,	// (0x00070e5f) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x000780f4) vid4_indicators_pane_g

0x86cb,	// (0x00070e84) vid4_indicators_pane_t1

0x86dd,	// (0x00070e96) cam4_autofocus_pane_g1

0x86e5,	// (0x00070e9e) cam4_autofocus_pane_g2

0x86ed,	// (0x00070ea6) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x000780ff) cam4_autofocus_pane_g

0x86f5,	// (0x00070eae) cam4_autofocus_pane_g3_copy1

0x8011,	// (0x000707ca) video_down_pane_cp_t1

0x801f,	// (0x000707d8) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x0007807b) video_down_pane_cp_t

0x1547,	// (0x00069d00) popup_vitu2_window_ParamLimits

0x1547,	// (0x00069d00) popup_vitu2_window

0x86fd,	// (0x00070eb6) aid_size_cell2_itu2_ParamLimits

0x86fd,	// (0x00070eb6) aid_size_cell2_itu2

0x8723,	// (0x00070edc) aid_size_cell_itu2_ParamLimits

0x8723,	// (0x00070edc) aid_size_cell_itu2

0x8775,	// (0x00070f2e) bg_popup_window_pane_cp09_ParamLimits

0x8775,	// (0x00070f2e) bg_popup_window_pane_cp09

0x8783,	// (0x00070f3c) field_vitu2_entry_pane_ParamLimits

0x8783,	// (0x00070f3c) field_vitu2_entry_pane

0x879d,	// (0x00070f56) grid_vitu2_function_pane_ParamLimits

0x879d,	// (0x00070f56) grid_vitu2_function_pane

0x87d8,	// (0x00070f91) grid_vitu2_itu_pane_ParamLimits

0x87d8,	// (0x00070f91) grid_vitu2_itu_pane

0x883d,	// (0x00070ff6) cell_vitu2_itu_pane_ParamLimits

0x883d,	// (0x00070ff6) cell_vitu2_itu_pane

0x885f,	// (0x00071018) cell_vitu2_function_pane_ParamLimits

0x885f,	// (0x00071018) cell_vitu2_function_pane

0xd24d,	// (0x00075a06) bg_popup_call_pane_cp08_ParamLimits

0xd24d,	// (0x00075a06) bg_popup_call_pane_cp08

0xd266,	// (0x00075a1f) field_vitu2_entry_pane_g1

0xd272,	// (0x00075a2b) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x00078106) field_vitu2_entry_pane_g

0xd28c,	// (0x00075a45) field_vitu2_entry_pane_t1_ParamLimits

0xd28c,	// (0x00075a45) field_vitu2_entry_pane_t1

0xd2a7,	// (0x00075a60) field_vitu2_entry_pane_t2_ParamLimits

0xd2a7,	// (0x00075a60) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x0007810d) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x0007810d) field_vitu2_entry_pane_t

0x889e,	// (0x00071057) bg_button_pane_cp010_ParamLimits

0x889e,	// (0x00071057) bg_button_pane_cp010

0x88ac,	// (0x00071065) cell_vitu2_itu_pane_g1

0x88ca,	// (0x00071083) cell_vitu2_itu_pane_t1_ParamLimits

0x88ca,	// (0x00071083) cell_vitu2_itu_pane_t1

0x25bb,	// (0x0006ad74) cell_vitu2_itu_pane_t2_ParamLimits

0x25bb,	// (0x0006ad74) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x00078117) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x00078117) cell_vitu2_itu_pane_t

0x1547,	// (0x00069d00) bg_button_pane_cp011

0x8930,	// (0x000710e9) cell_vitu2_function_pane_g1

0xad8c,	// (0x00073545) main_myfav_hc_pane

0x836c,	// (0x00070b25) popup_image3_note_pane_ParamLimits

0x836c,	// (0x00070b25) popup_image3_note_pane

0x8386,	// (0x00070b3f) popup_image3_tool_bar_pane_ParamLimits

0x8386,	// (0x00070b3f) popup_image3_tool_bar_pane

0x263f,	// (0x0006adf8) cell_vitu2_itu_pane_t3_ParamLimits

0x263f,	// (0x0006adf8) cell_vitu2_itu_pane_t3

0xad8c,	// (0x00073545) bg_popup_trans_pane

0xd2cc,	// (0x00075a85) grid_image3_tool_bar_pane

0xd2d6,	// (0x00075a8f) bg_popup_trans_pane_g1

0xbb0a,	// (0x000742c3) bg_popup_trans_pane_g2

0xd2de,	// (0x00075a97) bg_popup_trans_pane_g3

0xd2e6,	// (0x00075a9f) bg_popup_trans_pane_g4

0xd2ee,	// (0x00075aa7) bg_popup_trans_pane_g5

0xd2f6,	// (0x00075aaf) bg_popup_trans_pane_g6

0xd2fe,	// (0x00075ab7) bg_popup_trans_pane_g7

0xd306,	// (0x00075abf) bg_popup_trans_pane_g8

0xbaea,	// (0x000742a3) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0007811e) bg_popup_trans_pane_g

0x1561,	// (0x00069d1a) cell_image3_tool_bar_pane_ParamLimits

0x1561,	// (0x00069d1a) cell_image3_tool_bar_pane

0xc90c,	// (0x000750c5) cell_image3_tool_bar_pane_g1

0xad8c,	// (0x00073545) bg_popup_trans_pane_cp1

0xd30e,	// (0x00075ac7) popup_image3_note_pane_t1

0xd31c,	// (0x00075ad5) popup_image3_note_pane_t2

0xd32a,	// (0x00075ae3) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x00078131) popup_image3_note_pane_t

0xd338,	// (0x00075af1) popup_image3_note_pane_t3_copy1

0x8944,	// (0x000710fd) bg_myfav_hc_instruction_pane_ParamLimits

0x8944,	// (0x000710fd) bg_myfav_hc_instruction_pane

0x8956,	// (0x0007110f) cell_myfav_contact_pane_ParamLimits

0x8956,	// (0x0007110f) cell_myfav_contact_pane

0x8970,	// (0x00071129) cell_myfav_contact_pane_cp1_ParamLimits

0x8970,	// (0x00071129) cell_myfav_contact_pane_cp1

0x8986,	// (0x0007113f) cell_myfav_contact_pane_cp2_ParamLimits

0x8986,	// (0x0007113f) cell_myfav_contact_pane_cp2

0x899c,	// (0x00071155) cell_myfav_contact_pane_cp3_ParamLimits

0x899c,	// (0x00071155) cell_myfav_contact_pane_cp3

0x89b1,	// (0x0007116a) cell_myfav_contact_pane_cp4_ParamLimits

0x89b1,	// (0x0007116a) cell_myfav_contact_pane_cp4

0x89c5,	// (0x0007117e) cell_myfav_contact_pane_cp5_ParamLimits

0x89c5,	// (0x0007117e) cell_myfav_contact_pane_cp5

0x89d9,	// (0x00071192) cell_myfav_contact_pane_cp6_ParamLimits

0x89d9,	// (0x00071192) cell_myfav_contact_pane_cp6

0x89ed,	// (0x000711a6) cell_myfav_contact_pane_cp7_ParamLimits

0x89ed,	// (0x000711a6) cell_myfav_contact_pane_cp7

0xd346,	// (0x00075aff) listscroll_gen_pane_cp05

0x8a05,	// (0x000711be) main_myfav_hc_pane_g1_ParamLimits

0x8a05,	// (0x000711be) main_myfav_hc_pane_g1

0x8a1b,	// (0x000711d4) main_myfav_hc_pane_g2_ParamLimits

0x8a1b,	// (0x000711d4) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x00078138) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x00078138) main_myfav_hc_pane_g

0x8a45,	// (0x000711fe) main_myfav_hc_pane_t1_ParamLimits

0x8a45,	// (0x000711fe) main_myfav_hc_pane_t1

0xd34f,	// (0x00075b08) main_myfav_hc_pane_t2_ParamLimits

0xd34f,	// (0x00075b08) main_myfav_hc_pane_t2

0xd361,	// (0x00075b1a) main_myfav_hc_pane_t3_ParamLimits

0xd361,	// (0x00075b1a) main_myfav_hc_pane_t3

0x8a5a,	// (0x00071213) main_myfav_hc_pane_t4_ParamLimits

0x8a5a,	// (0x00071213) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0007813f) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0007813f) main_myfav_hc_pane_t

0xc90c,	// (0x000750c5) bg_myfav_hc_instruction_pane_g1

0xd373,	// (0x00075b2c) cell_myfav_contact_pane_g1_ParamLimits

0xd373,	// (0x00075b2c) cell_myfav_contact_pane_g1

0xd373,	// (0x00075b2c) cell_myfav_contact_pane_g2_ParamLimits

0xd373,	// (0x00075b2c) cell_myfav_contact_pane_g2

0xd37f,	// (0x00075b38) cell_myfav_contact_pane_g3_ParamLimits

0xd37f,	// (0x00075b38) cell_myfav_contact_pane_g3

0xcbcc,	// (0x00075385) cell_myfav_contact_pane_g4_ParamLimits

0xcbcc,	// (0x00075385) cell_myfav_contact_pane_g4

0xd38c,	// (0x00075b45) cell_myfav_contact_pane_g5_ParamLimits

0xd38c,	// (0x00075b45) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x0007814a) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x0007814a) cell_myfav_contact_pane_g

0x8a31,	// (0x000711ea) main_myfav_hc_pane_g3_ParamLimits

0x8a31,	// (0x000711ea) main_myfav_hc_pane_g3

0x2f9e,	// (0x0006b757) popup_adpt_find_window

0x8a7e,	// (0x00071237) afind_page_pane_ParamLimits

0x8a7e,	// (0x00071237) afind_page_pane

0x8a93,	// (0x0007124c) aid_size_cell_afind_ParamLimits

0x8a93,	// (0x0007124c) aid_size_cell_afind

0x8ab1,	// (0x0007126a) bg_popup_sub_pane_cp09_ParamLimits

0x8ab1,	// (0x0007126a) bg_popup_sub_pane_cp09

0x8abe,	// (0x00071277) find_pane_cp01_ParamLimits

0x8abe,	// (0x00071277) find_pane_cp01

0xd398,	// (0x00075b51) grid_afind_control_pane_ParamLimits

0xd398,	// (0x00075b51) grid_afind_control_pane

0x8acb,	// (0x00071284) grid_afind_pane_ParamLimits

0x8acb,	// (0x00071284) grid_afind_pane

0x8ae9,	// (0x000712a2) cell_afind_pane_ParamLimits

0x8ae9,	// (0x000712a2) cell_afind_pane

0xc90c,	// (0x000750c5) afind_page_pane_g1

0x8b36,	// (0x000712ef) afind_page_pane_g2

0x8b3f,	// (0x000712f8) afind_page_pane_g3

0x0002,

0xf99c,	// (0x00078155) afind_page_pane_g

0x8b48,	// (0x00071301) afind_page_pane_t1

0xd3ac,	// (0x00075b65) cell_afind_grid_control_pane_ParamLimits

0xd3ac,	// (0x00075b65) cell_afind_grid_control_pane

0xd17e,	// (0x00075937) bg_button_pane_cp69_ParamLimits

0xd17e,	// (0x00075937) bg_button_pane_cp69

0x8b68,	// (0x00071321) cell_afind_pane_g1_ParamLimits

0x8b68,	// (0x00071321) cell_afind_pane_g1

0x8b75,	// (0x0007132e) cell_afind_pane_t1_ParamLimits

0x8b75,	// (0x0007132e) cell_afind_pane_t1

0xb856,	// (0x0007400f) bg_button_pane_cp72

0xd3bb,	// (0x00075b74) cell_afind_grid_control_pane_g1

0x543d,	// (0x0006dbf6) aid_image_placing_area_ParamLimits

0x543d,	// (0x0006dbf6) aid_image_placing_area

0xce58,	// (0x00075611) field_vitu_entry_pane_g1_ParamLimits

0xce58,	// (0x00075611) field_vitu_entry_pane_g1

0xce64,	// (0x0007561d) field_vitu_entry_pane_g2_ParamLimits

0xce64,	// (0x0007561d) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x00078006) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x00078006) field_vitu_entry_pane_g

0x7e46,	// (0x000705ff) cell_vitu_itu_pane_g1_ParamLimits

0x7e88,	// (0x00070641) cell_vitu_itu_pane_t3_ParamLimits

0x7e88,	// (0x00070641) cell_vitu_itu_pane_t3

0xd132,	// (0x000758eb) mp4_progress_pane_t1_ParamLimits

0xd149,	// (0x00075902) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x0007809b) mp4_progress_pane_t_ParamLimits

0xd160,	// (0x00075919) mup_progress_pane_cp04_ParamLimits

0x8a6c,	// (0x00071225) main_myfav_hc_pane_t5_ParamLimits

0x8a6c,	// (0x00071225) main_myfav_hc_pane_t5

0xadae,	// (0x00073567) aid_zoom_text_primary

0x2f9e,	// (0x0006b757) popup_adpt_find_window_ParamLimits

0x1547,	// (0x00069d00) main_cam_set_pane

0x8539,	// (0x00070cf2) cam4_zoom_pane_ParamLimits

0x8539,	// (0x00070cf2) cam4_zoom_pane

0x8b87,	// (0x00071340) main_cam_set_pane_g1_ParamLimits

0x8b87,	// (0x00071340) main_cam_set_pane_g1

0x8b95,	// (0x0007134e) main_cam_set_pane_g2_ParamLimits

0x8b95,	// (0x0007134e) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0007815c) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0007815c) main_cam_set_pane_g

0x8bb4,	// (0x0007136d) main_cam_set_pane_t1_ParamLimits

0x8bb4,	// (0x0007136d) main_cam_set_pane_t1

0x8bc6,	// (0x0007137f) main_cset_listscroll_pane_ParamLimits

0x8bc6,	// (0x0007137f) main_cset_listscroll_pane

0x8be4,	// (0x0007139d) main_cset_slider_pane_ParamLimits

0x8be4,	// (0x0007139d) main_cset_slider_pane

0xd3cc,	// (0x00075b85) main_cset_list_pane_ParamLimits

0xd3cc,	// (0x00075b85) main_cset_list_pane

0xd3dc,	// (0x00075b95) scroll_pane_cp028

0x8c08,	// (0x000713c1) aid_area_touch_slider

0x8c24,	// (0x000713dd) cset_slider_pane

0x8c4e,	// (0x00071407) main_cset_slider_pane_g1

0x8c63,	// (0x0007141c) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x00078161) main_cset_slider_pane_g

0xd415,	// (0x00075bce) main_cset_slider_pane_t1

0x8d1f,	// (0x000714d8) main_cset_slider_pane_t2

0x8d39,	// (0x000714f2) main_cset_slider_pane_t3

0x8d53,	// (0x0007150c) main_cset_slider_pane_t4

0x8d6d,	// (0x00071526) main_cset_slider_pane_t5

0x8d87,	// (0x00071540) main_cset_slider_pane_t6

0x8d9c,	// (0x00071555) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x00078186) main_cset_slider_pane_t

0x8ea0,	// (0x00071659) cset_list_set_pane_ParamLimits

0x8ea0,	// (0x00071659) cset_list_set_pane

0x8eb1,	// (0x0007166a) aid_position_infowindow_above

0x8eb9,	// (0x00071672) aid_position_infowindow_below

0x8ec1,	// (0x0007167a) cset_list_set_pane_g1_ParamLimits

0x8ec1,	// (0x0007167a) cset_list_set_pane_g1

0xd4b5,	// (0x00075c6e) cset_list_set_pane_g3_ParamLimits

0xd4b5,	// (0x00075c6e) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x000781a5) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x000781a5) cset_list_set_pane_g

0xd4c4,	// (0x00075c7d) cset_list_set_pane_t1_ParamLimits

0xd4c4,	// (0x00075c7d) cset_list_set_pane_t1

0x1547,	// (0x00069d00) list_highlight_pane_cp021_ParamLimits

0x1547,	// (0x00069d00) list_highlight_pane_cp021

0x12f6,	// (0x00069aaf) cset_slider_pane_g1

0x1308,	// (0x00069ac1) cset_slider_pane_g2

0x12ff,	// (0x00069ab8) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x000781aa) cset_slider_pane_g

0xefd5,	// (0x0007778e) aid_area_touch_cam4_zoom

0xefdd,	// (0x00077796) cam4_zoom_cont_pane

0xefe5,	// (0x0007779e) cam4_zoom_pane_g1

0xefed,	// (0x000777a6) cam4_zoom_pane_g2

0x8ecd,	// (0x00071686) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x000781b1) cam4_zoom_pane_g

0xd4d9,	// (0x00075c92) cam4_zoom_cont_pane_g1

0xd4e2,	// (0x00075c9b) cam4_zoom_cont_pane_g2

0xd4eb,	// (0x00075ca4) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x000781b8) cam4_zoom_cont_pane_g

0x83f1,	// (0x00070baa) call4_image_pane_ParamLimits

0x83f1,	// (0x00070baa) call4_image_pane

0xd1a2,	// (0x0007595b) call4_windows_conf_pane_ParamLimits

0xd1b5,	// (0x0007596e) popup_call4_audio_in_window_ParamLimits

0xd1b5,	// (0x0007596e) popup_call4_audio_in_window

0xad8c,	// (0x00073545) bg_popup_call2_act_pane_cp02

0xd213,	// (0x000759cc) call4_list_conf_pane

0xc90c,	// (0x000750c5) call4_image_pane_g1

0xc90c,	// (0x000750c5) call4_image_pane_g2

0x0001,

0xf713,	// (0x00077ecc) call4_image_pane_g

0xd4f4,	// (0x00075cad) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4f4,	// (0x00075cad) list_single_graphic_popup_conf4_pane

0xad8c,	// (0x00073545) list_highlight_pane_cp022

0xd507,	// (0x00075cc0) list_single_graphic_popup_conf4_pane_g1

0x0f5b,	// (0x00069714) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x000781bf) list_single_graphic_popup_conf4_pane_g

0xd50f,	// (0x00075cc8) list_single_graphic_popup_conf4_pane_t1

0x3d85,	// (0x0006c53e) popup_vtel_slider_window_ParamLimits

0x3d85,	// (0x0006c53e) popup_vtel_slider_window

0xd16c,	// (0x00075925) dialer2_ne_pane_t2_ParamLimits

0xd16c,	// (0x00075925) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x000780a0) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x000780a0) dialer2_ne_pane_t

0xc6f9,	// (0x00074eb2) bg_popup_sub_pane_cp010_ParamLimits

0xc6f9,	// (0x00074eb2) bg_popup_sub_pane_cp010

0x8ed5,	// (0x0007168e) popup_vtel_slider_window_g1_ParamLimits

0x8ed5,	// (0x0007168e) popup_vtel_slider_window_g1

0x8ee8,	// (0x000716a1) popup_vtel_slider_window_g2_ParamLimits

0x8ee8,	// (0x000716a1) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x000781c4) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x000781c4) popup_vtel_slider_window_g

0x8f3c,	// (0x000716f5) vtel_slider_pane_ParamLimits

0x8f3c,	// (0x000716f5) vtel_slider_pane

0x8f5e,	// (0x00071717) vtel_slider_pane_g1_ParamLimits

0x8f5e,	// (0x00071717) vtel_slider_pane_g1

0x8f72,	// (0x0007172b) vtel_slider_pane_g2_ParamLimits

0x8f72,	// (0x0007172b) vtel_slider_pane_g2

0x8f8a,	// (0x00071743) vtel_slider_pane_g3_ParamLimits

0x8f8a,	// (0x00071743) vtel_slider_pane_g3

0x8f5e,	// (0x00071717) vtel_slider_pane_g4_ParamLimits

0x8f5e,	// (0x00071717) vtel_slider_pane_g4

0x8fa0,	// (0x00071759) vtel_slider_pane_g5_ParamLimits

0x8fa0,	// (0x00071759) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x000781cd) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x000781cd) vtel_slider_pane_g

0xad8c,	// (0x00073545) main_gallery2_pane

0x874f,	// (0x00070f08) aid_size_row_itut2_dropdow_list_ParamLimits

0x874f,	// (0x00070f08) aid_size_row_itut2_dropdow_list

0x87b9,	// (0x00070f72) grid_vitu2_function_top_pane_ParamLimits

0x87b9,	// (0x00070f72) grid_vitu2_function_top_pane

0x87fc,	// (0x00070fb5) popup_vitu2_dropdown_list_window_ParamLimits

0x87fc,	// (0x00070fb5) popup_vitu2_dropdown_list_window

0x881b,	// (0x00070fd4) popup_vitu2_match_list_window

0x8fb6,	// (0x0007176f) cell_vitu2_function_top_pane_ParamLimits

0x8fb6,	// (0x0007176f) cell_vitu2_function_top_pane

0x8fd6,	// (0x0007178f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8fd6,	// (0x0007178f) cell_vitu2_function_top_pane_cp01

0x8ff6,	// (0x000717af) cell_vitu2_function_top_wide_pane_ParamLimits

0x8ff6,	// (0x000717af) cell_vitu2_function_top_wide_pane

0x1547,	// (0x00069d00) bg_button_pane_cp012

0x9014,	// (0x000717cd) cell_vitu2_function_top_pane_g1

0xeff5,	// (0x000777ae) bg_button_pane_cp013_ParamLimits

0xeff5,	// (0x000777ae) bg_button_pane_cp013

0x9028,	// (0x000717e1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9028,	// (0x000717e1) cell_vitu2_function_top_wide_pane_g1

0x1547,	// (0x00069d00) bg_popup_sub_pane_cp20

0x9040,	// (0x000717f9) list_vitu2_match_list_pane

0xd2d6,	// (0x00075a8f) bg_popup_sub_pane_cp20_g1

0xd2de,	// (0x00075a97) bg_popup_sub_pane_cp20_g2

0xbb0a,	// (0x000742c3) bg_popup_sub_pane_cp20_g3

0xd2e6,	// (0x00075a9f) bg_popup_sub_pane_cp20_g4

0xbaea,	// (0x000742a3) bg_popup_sub_pane_cp20_g5

0xd533,	// (0x00075cec) bg_popup_sub_pane_cp20_g6

0xd2f6,	// (0x00075aaf) bg_popup_sub_pane_cp20_g7

0xd2fe,	// (0x00075ab7) bg_popup_sub_pane_cp20_g8

0xd306,	// (0x00075abf) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x000781d8) bg_popup_sub_pane_cp20_g

0xf011,	// (0x000777ca) list_vitu2_match_list_item_pane_ParamLimits

0xf011,	// (0x000777ca) list_vitu2_match_list_item_pane

0xf023,	// (0x000777dc) list_vitu2_match_list_item_pane_t1

0xad8c,	// (0x00073545) bg_popup_sub_pane_cp21

0xc015,	// (0x000747ce) grid_vitu2_dropdown_list_pane

0x905e,	// (0x00071817) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x905e,	// (0x00071817) cell_vitu2_dropdown_list_char_pane

0x907f,	// (0x00071838) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x907f,	// (0x00071838) cell_vitu2_dropdown_list_ctrl_pane

0xd53b,	// (0x00075cf4) cell_vitu2_dropdown_list_char_pane_g1

0xd544,	// (0x00075cfd) cell_vitu2_dropdown_list_char_pane_g2

0xd54d,	// (0x00075d06) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x000781f5) cell_vitu2_dropdown_list_char_pane_g

0x90ab,	// (0x00071864) cell_vitu2_dropdown_list_char_pane_t1

0x90b9,	// (0x00071872) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x90b9,	// (0x00071872) cell_vitu2_dropdown_list_ctrl_pane_g1

0x90c6,	// (0x0007187f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x90c6,	// (0x0007187f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x90d3,	// (0x0007188c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x90d3,	// (0x0007188c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x90e0,	// (0x00071899) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x90e0,	// (0x00071899) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcb3b,	// (0x000752f4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcb3b,	// (0x000752f4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x000781fc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x000781fc) cell_vitu2_dropdown_list_ctrl_pane_g

0x90fc,	// (0x000718b5) aid_size_cell_gallery2_ParamLimits

0x90fc,	// (0x000718b5) aid_size_cell_gallery2

0x9112,	// (0x000718cb) grid_gallery2_pane_ParamLimits

0x9112,	// (0x000718cb) grid_gallery2_pane

0x9124,	// (0x000718dd) scroll_pane_cp029_ParamLimits

0x9124,	// (0x000718dd) scroll_pane_cp029

0x9130,	// (0x000718e9) cell_gallery2_pane_ParamLimits

0x9130,	// (0x000718e9) cell_gallery2_pane

0xd556,	// (0x00075d0f) cell_gallery2_pane_g2

0x9162,	// (0x0007191b) cell_gallery2_pane_g3

0xd560,	// (0x00075d19) cell_gallery2_pane_g4

0xd568,	// (0x00075d21) cell_gallery2_pane_g5

0x11c0,	// (0x00069979) grid_highlight_pane_cp10

0x881b,	// (0x00070fd4) popup_vitu2_match_list_window_ParamLimits

0x882c,	// (0x00070fe5) popup_vitu2_query_window_ParamLimits

0x882c,	// (0x00070fe5) popup_vitu2_query_window

0xad8c,	// (0x00073545) bg_vitu2_candi_button_pane

0xd53b,	// (0x00075cf4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd544,	// (0x00075cfd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd54d,	// (0x00075d06) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x26c3,	// (0x0006ae7c) bg_button_pane_cp015

0x916a,	// (0x00071923) bg_button_pane_cp016

0x917c,	// (0x00071935) bg_button_pane_cp017

0xc4d1,	// (0x00074c8a) bg_popup_sub_pane_cp22

0xd570,	// (0x00075d29) popup_vitu2_query_window_g1

0x26f2,	// (0x0006aeab) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x00078207) popup_vitu2_query_window_g

0x270d,	// (0x0006aec6) popup_vitu2_query_window_t1_ParamLimits

0x270d,	// (0x0006aec6) popup_vitu2_query_window_t1

0x2740,	// (0x0006aef9) popup_vitu2_query_window_t2_ParamLimits

0x2740,	// (0x0006aef9) popup_vitu2_query_window_t2

0x2752,	// (0x0006af0b) popup_vitu2_query_window_t3_ParamLimits

0x2752,	// (0x0006af0b) popup_vitu2_query_window_t3

0x919e,	// (0x00071957) popup_vitu2_query_window_t4_ParamLimits

0x919e,	// (0x00071957) popup_vitu2_query_window_t4

0x91bb,	// (0x00071974) popup_vitu2_query_window_t5_ParamLimits

0x91bb,	// (0x00071974) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0007820e) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0007820e) popup_vitu2_query_window_t

0xd3c4,	// (0x00075b7d) main_cset_text_pane

0x8c08,	// (0x000713c1) aid_area_touch_slider_ParamLimits

0x8c24,	// (0x000713dd) cset_slider_pane_ParamLimits

0x8c4e,	// (0x00071407) main_cset_slider_pane_g1_ParamLimits

0x8c63,	// (0x0007141c) main_cset_slider_pane_g2_ParamLimits

0xd3e5,	// (0x00075b9e) main_cset_slider_pane_g3_ParamLimits

0xd3e5,	// (0x00075b9e) main_cset_slider_pane_g3

0x8c78,	// (0x00071431) main_cset_slider_pane_g4_ParamLimits

0x8c78,	// (0x00071431) main_cset_slider_pane_g4

0x8c87,	// (0x00071440) main_cset_slider_pane_g5_ParamLimits

0x8c87,	// (0x00071440) main_cset_slider_pane_g5

0x8c93,	// (0x0007144c) main_cset_slider_pane_g6_ParamLimits

0x8c93,	// (0x0007144c) main_cset_slider_pane_g6

0xf9a8,	// (0x00078161) main_cset_slider_pane_g_ParamLimits

0xd415,	// (0x00075bce) main_cset_slider_pane_t1_ParamLimits

0x8d1f,	// (0x000714d8) main_cset_slider_pane_t2_ParamLimits

0x8d39,	// (0x000714f2) main_cset_slider_pane_t3_ParamLimits

0x8d53,	// (0x0007150c) main_cset_slider_pane_t4_ParamLimits

0x8d6d,	// (0x00071526) main_cset_slider_pane_t5_ParamLimits

0x8d87,	// (0x00071540) main_cset_slider_pane_t6_ParamLimits

0x8d9c,	// (0x00071555) main_cset_slider_pane_t7_ParamLimits

0x8dc6,	// (0x0007157f) main_cset_slider_pane_t8_ParamLimits

0x8dc6,	// (0x0007157f) main_cset_slider_pane_t8

0x8dee,	// (0x000715a7) main_cset_slider_pane_t9_ParamLimits

0x8dee,	// (0x000715a7) main_cset_slider_pane_t9

0x8e16,	// (0x000715cf) main_cset_slider_pane_t10_ParamLimits

0x8e16,	// (0x000715cf) main_cset_slider_pane_t10

0x8e3e,	// (0x000715f7) main_cset_slider_pane_t11_ParamLimits

0x8e3e,	// (0x000715f7) main_cset_slider_pane_t11

0x8e66,	// (0x0007161f) main_cset_slider_pane_t12_ParamLimits

0x8e66,	// (0x0007161f) main_cset_slider_pane_t12

0x8e83,	// (0x0007163c) main_cset_slider_pane_t13_ParamLimits

0x8e83,	// (0x0007163c) main_cset_slider_pane_t13

0xf9cd,	// (0x00078186) main_cset_slider_pane_t_ParamLimits

0xad8c,	// (0x00073545) bg_popup_sub_pane_cp011

0xd57c,	// (0x00075d35) main_cset_text_pane_g1

0xd584,	// (0x00075d3d) main_cset_text_pane_t1

0xd592,	// (0x00075d4b) main_cset_text_pane_t2

0xd5a0,	// (0x00075d59) main_cset_text_pane_t3

0xd5ae,	// (0x00075d67) main_cset_text_pane_t4

0xd5bc,	// (0x00075d75) main_cset_text_pane_t5

0xd5ca,	// (0x00075d83) main_cset_text_pane_t6

0xd5d8,	// (0x00075d91) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0007821d) main_cset_text_pane_t

0xad8c,	// (0x00073545) main_cam4_burst_pane

0xad8c,	// (0x00073545) main_cam5_pane

0x8b56,	// (0x0007130f) bg_button_pane_cp019

0x8b5f,	// (0x00071318) bg_button_pane_cp020

0xd3f1,	// (0x00075baa) main_cset_slider_pane_g7_ParamLimits

0xd3f1,	// (0x00075baa) main_cset_slider_pane_g7

0xd3fd,	// (0x00075bb6) main_cset_slider_pane_g8_ParamLimits

0xd3fd,	// (0x00075bb6) main_cset_slider_pane_g8

0x8ca7,	// (0x00071460) main_cset_slider_pane_g9_ParamLimits

0x8ca7,	// (0x00071460) main_cset_slider_pane_g9

0x8cb3,	// (0x0007146c) main_cset_slider_pane_g10_ParamLimits

0x8cb3,	// (0x0007146c) main_cset_slider_pane_g10

0x8cbf,	// (0x00071478) main_cset_slider_pane_g11_ParamLimits

0x8cbf,	// (0x00071478) main_cset_slider_pane_g11

0x8ccb,	// (0x00071484) main_cset_slider_pane_g12_ParamLimits

0x8ccb,	// (0x00071484) main_cset_slider_pane_g12

0x8cd7,	// (0x00071490) main_cset_slider_pane_g13_ParamLimits

0x8cd7,	// (0x00071490) main_cset_slider_pane_g13

0x8ce3,	// (0x0007149c) main_cset_slider_pane_g14_ParamLimits

0x8ce3,	// (0x0007149c) main_cset_slider_pane_g14

0x8cef,	// (0x000714a8) main_cset_slider_pane_g15_ParamLimits

0x8cef,	// (0x000714a8) main_cset_slider_pane_g15

0xd443,	// (0x00075bfc) main_cset_slider_pane_t14_ParamLimits

0xd443,	// (0x00075bfc) main_cset_slider_pane_t14

0xd47c,	// (0x00075c35) main_cset_slider_pane_t15_ParamLimits

0xd47c,	// (0x00075c35) main_cset_slider_pane_t15

0x91d8,	// (0x00071991) aid_cam4_burst_size_cell_ParamLimits

0x91d8,	// (0x00071991) aid_cam4_burst_size_cell

0x91f8,	// (0x000719b1) grid_cam4_burst_pane_ParamLimits

0x91f8,	// (0x000719b1) grid_cam4_burst_pane

0x921e,	// (0x000719d7) linegrid_cam4_burst_pane_ParamLimits

0x921e,	// (0x000719d7) linegrid_cam4_burst_pane

0x9240,	// (0x000719f9) scroll_pane_cp30_ParamLimits

0x9240,	// (0x000719f9) scroll_pane_cp30

0x924c,	// (0x00071a05) cell_cam4_burst_pane_ParamLimits

0x924c,	// (0x00071a05) cell_cam4_burst_pane

0xd5e6,	// (0x00075d9f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5e6,	// (0x00075d9f) linegrid_cam4_burst_pane_g1

0x9293,	// (0x00071a4c) linegrid_cam4_burst_pane_g2_ParamLimits

0x9293,	// (0x00071a4c) linegrid_cam4_burst_pane_g2

0xd5f3,	// (0x00075dac) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5f3,	// (0x00075dac) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0007822c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0007822c) linegrid_cam4_burst_pane_g

0x92a4,	// (0x00071a5d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x92a4,	// (0x00071a5d) linegrid_cam4_burst_pane_g3_copy1

0xd600,	// (0x00075db9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd600,	// (0x00075db9) linegrid_cam4_burst_pane_g4

0x92be,	// (0x00071a77) linegrid_cam4_burst_pane_g5_ParamLimits

0x92be,	// (0x00071a77) linegrid_cam4_burst_pane_g5

0x92cf,	// (0x00071a88) linegrid_cam4_burst_pane_g6_ParamLimits

0x92cf,	// (0x00071a88) linegrid_cam4_burst_pane_g6

0xd60d,	// (0x00075dc6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd60d,	// (0x00075dc6) linegrid_cam4_burst_pane_g7

0x92e0,	// (0x00071a99) cell_cam4_burst_pane_g1

0xd626,	// (0x00075ddf) main_cam5_pane_t1_ParamLimits

0xd626,	// (0x00075ddf) main_cam5_pane_t1

0xd638,	// (0x00075df1) main_cam5_pane_t2_ParamLimits

0xd638,	// (0x00075df1) main_cam5_pane_t2

0xd64a,	// (0x00075e03) main_cam5_pane_t3_ParamLimits

0xd64a,	// (0x00075e03) main_cam5_pane_t3

0xd65c,	// (0x00075e15) main_cam5_pane_t4_ParamLimits

0xd65c,	// (0x00075e15) main_cam5_pane_t4

0xd672,	// (0x00075e2b) main_cam5_pane_t5_ParamLimits

0xd672,	// (0x00075e2b) main_cam5_pane_t5

0xd684,	// (0x00075e3d) main_cam5_pane_t6_ParamLimits

0xd684,	// (0x00075e3d) main_cam5_pane_t6

0xd696,	// (0x00075e4f) main_cam5_pane_t7_ParamLimits

0xd696,	// (0x00075e4f) main_cam5_pane_t7

0xd6a8,	// (0x00075e61) main_cam5_pane_t8_ParamLimits

0xd6a8,	// (0x00075e61) main_cam5_pane_t8

0xd6c4,	// (0x00075e7d) main_cam5_pane_t9_ParamLimits

0xd6c4,	// (0x00075e7d) main_cam5_pane_t9

0xd6d6,	// (0x00075e8f) main_cam5_pane_t10_ParamLimits

0xd6d6,	// (0x00075e8f) main_cam5_pane_t10

0xd6e8,	// (0x00075ea1) main_cam5_pane_t11_ParamLimits

0xd6e8,	// (0x00075ea1) main_cam5_pane_t11

0xd6fa,	// (0x00075eb3) main_cam5_pane_t12_ParamLimits

0xd6fa,	// (0x00075eb3) main_cam5_pane_t12

0xd70f,	// (0x00075ec8) main_cam5_pane_t13_ParamLimits

0xd70f,	// (0x00075ec8) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x00078238) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x00078238) main_cam5_pane_t

0x2ffc,	// (0x0006b7b5) popup_scut_keymap_window_ParamLimits

0x2ffc,	// (0x0006b7b5) popup_scut_keymap_window

0x92f5,	// (0x00071aae) aid_size_cell_brow_shortcut

0x11c0,	// (0x00069979) bg_popup_window_pane_cp010

0x9301,	// (0x00071aba) grid_scut_pane

0x930b,	// (0x00071ac4) cell_scut_pane_ParamLimits

0x930b,	// (0x00071ac4) cell_scut_pane

0x9320,	// (0x00071ad9) cell_scut_pane_g1

0xd72c,	// (0x00075ee5) cell_scut_pane_t1

0xd73b,	// (0x00075ef4) cell_scut_pane_t2

0x9329,	// (0x00071ae2) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x00078253) cell_scut_pane_t

0x73d2,	// (0x0006fb8b) main_mup3_pane_g8_ParamLimits

0x73d2,	// (0x0006fb8b) main_mup3_pane_g8

0x8763,	// (0x00070f1c) area_vitu2_query_pane_ParamLimits

0x8763,	// (0x00070f1c) area_vitu2_query_pane

0x26d3,	// (0x0006ae8c) input_focus_pane_cp08

0xd74a,	// (0x00075f03) area_vitu2_query_pane_g1

0x27d0,	// (0x0006af89) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0007825a) area_vitu2_query_pane_g

0x9337,	// (0x00071af0) area_vitu2_query_pane_t1_ParamLimits

0x9337,	// (0x00071af0) area_vitu2_query_pane_t1

0x9349,	// (0x00071b02) area_vitu2_query_pane_t2_ParamLimits

0x9349,	// (0x00071b02) area_vitu2_query_pane_t2

0x27df,	// (0x0006af98) area_vitu2_query_pane_t3_ParamLimits

0x27df,	// (0x0006af98) area_vitu2_query_pane_t3

0xd756,	// (0x00075f0f) area_vitu2_query_pane_t4_ParamLimits

0xd756,	// (0x00075f0f) area_vitu2_query_pane_t4

0xd77e,	// (0x00075f37) area_vitu2_query_pane_t5_ParamLimits

0xd77e,	// (0x00075f37) area_vitu2_query_pane_t5

0xd7a6,	// (0x00075f5f) area_vitu2_query_pane_t6_ParamLimits

0xd7a6,	// (0x00075f5f) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0007825f) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0007825f) area_vitu2_query_pane_t

0x935b,	// (0x00071b14) bg_button_pane_cp018

0x9368,	// (0x00071b21) bg_button_pane_cp021

0x2807,	// (0x0006afc0) bg_button_pane_cp022

0x2816,	// (0x0006afcf) input_focus_pane_cp09

0x4b7f,	// (0x0006d338) aid_size_touch_mv_arrow_left

0x1099,	// (0x00069852) aid_size_touch_mv_arrow_right

0x8d07,	// (0x000714c0) main_cset_slider_pane_g16_ParamLimits

0x8d07,	// (0x000714c0) main_cset_slider_pane_g16

0x8d13,	// (0x000714cc) main_cset_slider_pane_g17_ParamLimits

0x8d13,	// (0x000714cc) main_cset_slider_pane_g17

0x92e0,	// (0x00071a99) cell_cam4_burst_pane_g1_ParamLimits

0xad8c,	// (0x00073545) compa_mode_pane

0x8ef8,	// (0x000716b1) popup_vtel_slider_window_g3_ParamLimits

0x8ef8,	// (0x000716b1) popup_vtel_slider_window_g3

0x8f0f,	// (0x000716c8) popup_vtel_slider_window_g4_ParamLimits

0x8f0f,	// (0x000716c8) popup_vtel_slider_window_g4

0x8f26,	// (0x000716df) popup_vtel_slider_window_t1_ParamLimits

0x8f26,	// (0x000716df) popup_vtel_slider_window_t1

0xad8c,	// (0x00073545) main_cl_pane

0xc4f7,	// (0x00074cb0) popup_imed_adjust2_window_ParamLimits

0xc4d1,	// (0x00074c8a) bg_tb_trans_pane_cp05_ParamLimits

0xcd8d,	// (0x00075546) popup_imed_adjust2_window_g1_ParamLimits

0xcd9c,	// (0x00075555) popup_imed_adjust2_window_g2_ParamLimits

0xcd9c,	// (0x00075555) popup_imed_adjust2_window_g2

0xcda8,	// (0x00075561) popup_imed_adjust2_window_g3_ParamLimits

0xcda8,	// (0x00075561) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x00077fca) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x00077fca) popup_imed_adjust2_window_g

0xcdb4,	// (0x0007556d) popup_imed_adjust2_window_t1_ParamLimits

0xcdcc,	// (0x00075585) slider_imed_adjust_pane_ParamLimits

0xcde0,	// (0x00075599) slider_imed_adjust_pane_g1_ParamLimits

0xcdf0,	// (0x000755a9) slider_imed_adjust_pane_g2_ParamLimits

0xce00,	// (0x000755b9) slider_imed_adjust_pane_g3_ParamLimits

0xce11,	// (0x000755ca) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x00077fd1) slider_imed_adjust_pane_g_ParamLimits

0x84e8,	// (0x00070ca1) aid_touch_area_cam4_ParamLimits

0x84e8,	// (0x00070ca1) aid_touch_area_cam4

0xef61,	// (0x0007771a) battery_pane_cp01

0x8580,	// (0x00070d39) main_camera4_pane_g6_ParamLimits

0x8580,	// (0x00070d39) main_camera4_pane_g6

0x85a1,	// (0x00070d5a) main_camera4_pane_t2_ParamLimits

0x85a1,	// (0x00070d5a) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x000780d4) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x000780d4) main_camera4_pane_t

0x85cf,	// (0x00070d88) aid_touch_area_vid4_ParamLimits

0x85cf,	// (0x00070d88) aid_touch_area_vid4

0x8611,	// (0x00070dca) main_video4_pane_g5_ParamLimits

0x8611,	// (0x00070dca) main_video4_pane_g5

0x8632,	// (0x00070deb) vid4_progress_pane_ParamLimits

0x8632,	// (0x00070deb) vid4_progress_pane

0xd409,	// (0x00075bc2) main_cset_slider_pane_g18_ParamLimits

0xd409,	// (0x00075bc2) main_cset_slider_pane_g18

0xd61a,	// (0x00075dd3) cell_cam4_burst_pane_g2_ParamLimits

0xd61a,	// (0x00075dd3) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x00078233) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x00078233) cell_cam4_burst_pane_g

0xb544,	// (0x00073cfd) bg_cl_pane_ParamLimits

0xb544,	// (0x00073cfd) bg_cl_pane

0x9374,	// (0x00071b2d) cl_header_pane_ParamLimits

0x9374,	// (0x00071b2d) cl_header_pane

0x9388,	// (0x00071b41) cl_listscroll_pane_ParamLimits

0x9388,	// (0x00071b41) cl_listscroll_pane

0xd7f2,	// (0x00075fab) bg_cl_pane_g1

0xd7fa,	// (0x00075fb3) bg_cl_pane_g2

0xd802,	// (0x00075fbb) bg_cl_pane_g3

0xd80a,	// (0x00075fc3) bg_cl_pane_g4

0xd812,	// (0x00075fcb) bg_cl_pane_g5

0xd81a,	// (0x00075fd3) bg_cl_pane_g6

0xd822,	// (0x00075fdb) bg_cl_pane_g7

0xd82a,	// (0x00075fe3) bg_cl_pane_g8

0xd832,	// (0x00075feb) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0007826e) bg_cl_pane_g

0x9398,	// (0x00071b51) aid_height_cl_leading_ParamLimits

0x9398,	// (0x00071b51) aid_height_cl_leading

0x93a4,	// (0x00071b5d) aid_height_cl_text_ParamLimits

0x93a4,	// (0x00071b5d) aid_height_cl_text

0x1547,	// (0x00069d00) bg_cl_header_pane_ParamLimits

0x1547,	// (0x00069d00) bg_cl_header_pane

0x93c3,	// (0x00071b7c) cl_header_pane_g1_ParamLimits

0x93c3,	// (0x00071b7c) cl_header_pane_g1

0x93d9,	// (0x00071b92) cl_header_pane_t1_ParamLimits

0x93d9,	// (0x00071b92) cl_header_pane_t1

0xd83a,	// (0x00075ff3) cl_list_pane

0xd843,	// (0x00075ffc) hc_scroll_pane_cp01

0xbaea,	// (0x000742a3) bg_cl_header_pane_g1

0xd2d6,	// (0x00075a8f) bg_cl_header_pane_g2

0xbb0a,	// (0x000742c3) bg_cl_header_pane_g3

0xd2e6,	// (0x00075a9f) bg_cl_header_pane_g4

0xd2de,	// (0x00075a97) bg_cl_header_pane_g5

0xd533,	// (0x00075cec) bg_cl_header_pane_g6

0xd2fe,	// (0x00075ab7) bg_cl_header_pane_g7

0xd306,	// (0x00075abf) bg_cl_header_pane_g8

0xd2f6,	// (0x00075aaf) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x00078281) bg_cl_header_pane_g

0x93f2,	// (0x00071bab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x93f2,	// (0x00071bab) hc_cl_list_double_graphic_heading_pane

0x9402,	// (0x00071bbb) hc_cl_list_single_graphic_pane_ParamLimits

0x9402,	// (0x00071bbb) hc_cl_list_single_graphic_pane

0x9415,	// (0x00071bce) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9415,	// (0x00071bce) hc_cl_list_single_graphic_pane_g1

0x9421,	// (0x00071bda) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9421,	// (0x00071bda) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x00078294) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x00078294) hc_cl_list_single_graphic_pane_g

0x9435,	// (0x00071bee) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9435,	// (0x00071bee) hc_cl_list_single_graphic_pane_t1

0x9415,	// (0x00071bce) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9415,	// (0x00071bce) hc_cl_list_double_graphic_heading_pane_g1

0x944a,	// (0x00071c03) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x944a,	// (0x00071c03) hc_cl_list_double_graphic_heading_pane_g2

0x945e,	// (0x00071c17) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x945e,	// (0x00071c17) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x00078299) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x00078299) hc_cl_list_double_graphic_heading_pane_g

0x9472,	// (0x00071c2b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9472,	// (0x00071c2b) hc_cl_list_double_graphic_heading_pane_t1

0x9487,	// (0x00071c40) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9487,	// (0x00071c40) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x000782a0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x000782a0) hc_cl_list_double_graphic_heading_pane_t

0xf031,	// (0x000777ea) vid4_progress_pane_g1

0xf040,	// (0x000777f9) vid4_progress_pane_g2

0xf04f,	// (0x00077808) vid4_progress_pane_g3

0xf05e,	// (0x00077817) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x000782a5) vid4_progress_pane_g

0xf06a,	// (0x00077823) vid4_progress_pane_t1

0xf080,	// (0x00077839) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x000782b0) vid4_progress_pane_t

0xf0aa,	// (0x00077863) wait_bar_pane_cp07

0xc707,	// (0x00074ec0) blid_firmament_pane_ParamLimits

0xc748,	// (0x00074f01) popup_blid_sat_info2_window_g1

0xc76c,	// (0x00074f25) popup_blid_sat_info2_window_t3

0xc77a,	// (0x00074f33) popup_blid_sat_info2_window_t4

0xc788,	// (0x00074f41) popup_blid_sat_info2_window_t5

0xc796,	// (0x00074f4f) popup_blid_sat_info2_window_t6

0xc7a6,	// (0x00074f5f) popup_blid_sat_info2_window_t7

0xc7b4,	// (0x00074f6d) popup_blid_sat_info2_window_t8

0xc7c2,	// (0x00074f7b) popup_blid_sat_info2_window_t9

0xc7d0,	// (0x00074f89) popup_blid_sat_info2_window_t10

0xc88c,	// (0x00075045) aid_firma_cardinal_ParamLimits

0xc8a0,	// (0x00075059) blid_firmament_pane_t1_ParamLimits

0xc8b7,	// (0x00075070) blid_firmament_pane_t2_ParamLimits

0xc8ce,	// (0x00075087) blid_firmament_pane_t3_ParamLimits

0xc8e5,	// (0x0007509e) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x00077ec3) blid_firmament_pane_t_ParamLimits

0xc8fc,	// (0x000750b5) blid_sat_info_pane_ParamLimits

0x1547,	// (0x00069d00) main_cam_set_pane_ParamLimits

0x7c2c,	// (0x000703e5) aid_size_cell_colour_35_ParamLimits

0x7c4c,	// (0x00070405) aid_size_cell_colour_112_ParamLimits

0x7c6c,	// (0x00070425) aid_size_cell_effect_ParamLimits

0xc4d1,	// (0x00074c8a) bg_tb_trans_pane_cp02_ParamLimits

0xbd8f,	// (0x00074548) heading_imed_pane_ParamLimits

0x7c8c,	// (0x00070445) listscroll_imed_pane_ParamLimits

0x5bbe,	// (0x0006e377) popup_call2_audio_first_window_g5_ParamLimits

0x5bbe,	// (0x0006e377) popup_call2_audio_first_window_g5

0x81a9,	// (0x00070962) aid_size_touch_image3_arrow_left_ParamLimits

0x81a9,	// (0x00070962) aid_size_touch_image3_arrow_left

0x81c9,	// (0x00070982) aid_size_touch_image3_arrow_right_ParamLimits

0x81c9,	// (0x00070982) aid_size_touch_image3_arrow_right

0xf095,	// (0x0007784e) vid4_progress_pane_t3

0x7f60,	// (0x00070719) main_hwr_training_symbol_option_pane_ParamLimits

0x7f60,	// (0x00070719) main_hwr_training_symbol_option_pane

0xd06c,	// (0x00075825) popup_hwr_training_preview_window_ParamLimits

0xd06c,	// (0x00075825) popup_hwr_training_preview_window

0x7f7c,	// (0x00070735) hwr_training_navi_pane_g5_ParamLimits

0x7f7c,	// (0x00070735) hwr_training_navi_pane_g5

0xd2c4,	// (0x00075a7d) popup_char_count_window

0x1547,	// (0x00069d00) bg_popup_sub_pane_cp20_ParamLimits

0x9040,	// (0x000717f9) list_vitu2_match_list_pane_ParamLimits

0x904f,	// (0x00071808) vitu2_page_scroll_pane_ParamLimits

0x904f,	// (0x00071808) vitu2_page_scroll_pane

0xd895,	// (0x0007604e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd895,	// (0x0007604e) list_single_hwr_training_symbol_option_pane

0xd8a8,	// (0x00076061) list_single_hwr_training_symbol_option_pane_g1

0xd8b0,	// (0x00076069) list_single_hwr_training_symbol_option_pane_t1

0xd8be,	// (0x00076077) bg_button_pane_cp023

0xd8c7,	// (0x00076080) bg_button_pane_cp024

0x949c,	// (0x00071c55) vitu2_page_scroll_pane_g1

0x94a4,	// (0x00071c5d) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x000782b7) vitu2_page_scroll_pane_g

0x94ac,	// (0x00071c65) vitu2_page_scroll_pane_t1

0xc667,	// (0x00074e20) popup_char_count_window_g1

0xd8fa,	// (0x000760b3) popup_char_count_window_g2

0xd903,	// (0x000760bc) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x000782bc) popup_char_count_window_g

0xd90c,	// (0x000760c5) popup_char_count_window_t1

0xad8c,	// (0x00073545) main_vded2_pane

0xcd7b,	// (0x00075534) aid_size_cell_imed_line

0xcd85,	// (0x0007553e) grid_imed_line_width_pane

0x86b3,	// (0x00070e6c) vid4_indicators_pane_g4

0xd91a,	// (0x000760d3) cell_imed_line_width_pane_ParamLimits

0xd91a,	// (0x000760d3) cell_imed_line_width_pane

0xd92c,	// (0x000760e5) cell_imed_line_width_pane_g1

0xd935,	// (0x000760ee) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x000782c3) cell_imed_line_width_pane_g

0x94bb,	// (0x00071c74) main_vded2_pane_g1_ParamLimits

0x94bb,	// (0x00071c74) main_vded2_pane_g1

0x94d1,	// (0x00071c8a) main_vded2_pane_g2_ParamLimits

0x94d1,	// (0x00071c8a) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x000782c8) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x000782c8) main_vded2_pane_g

0x94e1,	// (0x00071c9a) vded2_slider_pane_ParamLimits

0x94e1,	// (0x00071c9a) vded2_slider_pane

0x94f4,	// (0x00071cad) aid_size_touch_vded2_end

0x94fc,	// (0x00071cb5) aid_size_touch_vded2_playhead

0x9504,	// (0x00071cbd) aid_size_touch_vded2_start

0x950c,	// (0x00071cc5) vded2_slider_bg_pane

0x9515,	// (0x00071cce) vded2_slider_pane_g1

0x951e,	// (0x00071cd7) vded2_slider_pane_g2

0x9526,	// (0x00071cdf) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x000782cd) vded2_slider_pane_g

0x952f,	// (0x00071ce8) vded2_slider_bg_pane_g1

0x9538,	// (0x00071cf1) vded2_slider_bg_pane_g2

0x9541,	// (0x00071cfa) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x000782d4) vded2_slider_bg_pane_g

0x5037,	// (0x0006d7f0) aid_postcard_touch_down_pane_ParamLimits

0x5037,	// (0x0006d7f0) aid_postcard_touch_down_pane

0x5049,	// (0x0006d802) aid_postcard_touch_up_pane_ParamLimits

0x5049,	// (0x0006d802) aid_postcard_touch_up_pane

0xad8c,	// (0x00073545) main_blid2_pane

0xc4df,	// (0x00074c98) popup_blid2_search_window

0xad8c,	// (0x00073545) blid2_gps_pane

0xad8c,	// (0x00073545) blid2_navig_pane

0xad8c,	// (0x00073545) blid2_search_pane

0xad8c,	// (0x00073545) blid2_tripm_pane

0x954a,	// (0x00071d03) blid2_search_pane_g1_ParamLimits

0x954a,	// (0x00071d03) blid2_search_pane_g1

0x955e,	// (0x00071d17) blid2_search_pane_t1_ParamLimits

0x955e,	// (0x00071d17) blid2_search_pane_t1

0x9570,	// (0x00071d29) aid_size_cell_blid2_gps_ParamLimits

0x9570,	// (0x00071d29) aid_size_cell_blid2_gps

0x9588,	// (0x00071d41) blid2_gps_pane_g1_ParamLimits

0x9588,	// (0x00071d41) blid2_gps_pane_g1

0x959c,	// (0x00071d55) grid_blid2_satellite_pane_ParamLimits

0x959c,	// (0x00071d55) grid_blid2_satellite_pane

0x95b0,	// (0x00071d69) blid2_navig_pane_g1_ParamLimits

0x95b0,	// (0x00071d69) blid2_navig_pane_g1

0x95bc,	// (0x00071d75) blid2_navig_pane_t1_ParamLimits

0x95bc,	// (0x00071d75) blid2_navig_pane_t1

0x95d5,	// (0x00071d8e) blid2_navig_pane_t2_ParamLimits

0x95d5,	// (0x00071d8e) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x000782db) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x000782db) blid2_navig_pane_t

0x95ee,	// (0x00071da7) blid2_navig_ring_pane_ParamLimits

0x95ee,	// (0x00071da7) blid2_navig_ring_pane

0x9603,	// (0x00071dbc) blid2_speed_pane_ParamLimits

0x9603,	// (0x00071dbc) blid2_speed_pane

0x960f,	// (0x00071dc8) blid2_tripm_pane_g1_ParamLimits

0x960f,	// (0x00071dc8) blid2_tripm_pane_g1

0x9624,	// (0x00071ddd) blid2_tripm_pane_g2_ParamLimits

0x9624,	// (0x00071ddd) blid2_tripm_pane_g2

0x9638,	// (0x00071df1) blid2_tripm_pane_g3_ParamLimits

0x9638,	// (0x00071df1) blid2_tripm_pane_g3

0x964c,	// (0x00071e05) blid2_tripm_pane_g4_ParamLimits

0x964c,	// (0x00071e05) blid2_tripm_pane_g4

0x9660,	// (0x00071e19) blid2_tripm_pane_g5_ParamLimits

0x9660,	// (0x00071e19) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x000782e0) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x000782e0) blid2_tripm_pane_g

0x9682,	// (0x00071e3b) blid2_tripm_pane_t1_ParamLimits

0x9682,	// (0x00071e3b) blid2_tripm_pane_t1

0x9699,	// (0x00071e52) blid2_tripm_pane_t2_ParamLimits

0x9699,	// (0x00071e52) blid2_tripm_pane_t2

0x96b0,	// (0x00071e69) blid2_tripm_pane_t3_ParamLimits

0x96b0,	// (0x00071e69) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x000782ed) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x000782ed) blid2_tripm_pane_t

0x96f3,	// (0x00071eac) cell_blid2_satellite_pane_ParamLimits

0x96f3,	// (0x00071eac) cell_blid2_satellite_pane

0x970b,	// (0x00071ec4) cell_blid2_satellite_pane_g1

0xd93d,	// (0x000760f6) cell_blid2_satellite_pane_t1

0xc90c,	// (0x000750c5) blid2_speed_pane_g1

0xd94b,	// (0x00076104) blid2_speed_pane_t1

0xd959,	// (0x00076112) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x000782f6) blid2_speed_pane_t

0xc90c,	// (0x000750c5) blid2_navig_ring_pane_g1

0x9714,	// (0x00071ecd) blid2_navig_ring_pane_g2

0x971c,	// (0x00071ed5) blid2_navig_ring_pane_g3

0x9724,	// (0x00071edd) blid2_navig_ring_pane_g4

0x972c,	// (0x00071ee5) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x000782fb) blid2_navig_ring_pane_g

0xad8c,	// (0x00073545) bg_popup_window_pane_cp011

0xd967,	// (0x00076120) popup_blid2_search_window_g1

0xd96f,	// (0x00076128) popup_blid2_search_window_t1

0xd97d,	// (0x00076136) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x00078306) popup_blid2_search_window_t

0xb9f9,	// (0x000741b2) main_browser_pane_g1

0xb544,	// (0x00073cfd) main_browser_pane_ParamLimits

0x1547,	// (0x00069d00) bg_button_pane_cp011_ParamLimits

0x8930,	// (0x000710e9) cell_vitu2_function_pane_g1_ParamLimits

0xc4d1,	// (0x00074c8a) bg_popup_sub_pane_cp22_ParamLimits

0x26d3,	// (0x0006ae8c) input_focus_pane_cp08_ParamLimits

0x918e,	// (0x00071947) popup_vitu2_query_button_pane_ParamLimits

0x918e,	// (0x00071947) popup_vitu2_query_button_pane

0x26ea,	// (0x0006aea3) popup_vitu2_query_input_button_pane

0xd570,	// (0x00075d29) popup_vitu2_query_window_g1_ParamLimits

0x26f2,	// (0x0006aeab) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x00078207) popup_vitu2_query_window_g_ParamLimits

0xad8c,	// (0x00073545) bg_button_pane_cp026

0x9734,	// (0x00071eed) popup_vitu2_query_input_button_pane_g1

0xad8c,	// (0x00073545) bg_button_pane_cp025

0xd98b,	// (0x00076144) popup_vitu2_query_button_pane_t1

0x713a,	// (0x0006f8f3) main_mp3_pane_t6

0x7148,	// (0x0006f901) popup_slider_window_cp01

0xef7b,	// (0x00077734) cam4_battery_pane

0xef7b,	// (0x00077734) cam4_battery_pane_cp02

0xef7b,	// (0x00077734) cam4_battery_pane_cp01

0xef7b,	// (0x00077734) cam4_battery_pane_cp03

0xc90c,	// (0x000750c5) cam4_battery_pane_g1

0xd999,	// (0x00076152) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x0007830b) cam4_battery_pane_g

0xc7de,	// (0x00074f97) popup_blid_sat_info2_window_t11

0x4b7f,	// (0x0006d338) aid_size_touch_mv_arrow_left_ParamLimits

0x1099,	// (0x00069852) aid_size_touch_mv_arrow_right_ParamLimits

0x10d1,	// (0x0006988a) navi_pane_g1_ParamLimits

0x10dd,	// (0x00069896) navi_pane_g2_ParamLimits

0x4b98,	// (0x0006d351) navi_pane_g3_ParamLimits

0xf409,	// (0x00077bc2) navi_pane_g_ParamLimits

0x4bbd,	// (0x0006d376) navi_pane_mv_t1_ParamLimits

0x7c98,	// (0x00070451) grid_imed_effect_pane_ParamLimits

0x3c98,	// (0x0006c451) aid_placing_vt_slider_lsc

0xb93b,	// (0x000740f4) aid_placing_vt_slider_prt

0x1547,	// (0x00069d00) bg_tb_trans_pane_cp01_ParamLimits

0xca5b,	// (0x00075214) popup_image_details_window_g1_ParamLimits

0xca6e,	// (0x00075227) popup_image_details_window_g2_ParamLimits

0xca83,	// (0x0007523c) popup_image_details_window_g3_ParamLimits

0xca83,	// (0x0007523c) popup_image_details_window_g3

0xf74f,	// (0x00077f08) popup_image_details_window_g_ParamLimits

0xca97,	// (0x00075250) popup_image_details_window_t1_ParamLimits

0xcaa9,	// (0x00075262) popup_image_details_window_t2_ParamLimits

0xcac2,	// (0x0007527b) popup_image_details_window_t3_ParamLimits

0xcad6,	// (0x0007528f) popup_image_details_window_t4_ParamLimits

0xcaf1,	// (0x000752aa) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x00077f0f) popup_image_details_window_t_ParamLimits

0x93b0,	// (0x00071b69) cl_header_name_pane_ParamLimits

0x93b0,	// (0x00071b69) cl_header_name_pane

0x973c,	// (0x00071ef5) cl_header_name_pane_t1_ParamLimits

0x973c,	// (0x00071ef5) cl_header_name_pane_t1

0x975d,	// (0x00071f16) cl_header_name_pane_t2_ParamLimits

0x975d,	// (0x00071f16) cl_header_name_pane_t2

0x979f,	// (0x00071f58) cl_header_name_pane_t3_ParamLimits

0x979f,	// (0x00071f58) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x00078310) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x00078310) cl_header_name_pane_t

0x115f,	// (0x00069918) navi_pane_mv_g2_ParamLimits

0xd266,	// (0x00075a1f) field_vitu2_entry_pane_g1_ParamLimits

0xd272,	// (0x00075a2b) field_vitu2_entry_pane_g2_ParamLimits

0xd27e,	// (0x00075a37) field_vitu2_entry_pane_g3_ParamLimits

0xd27e,	// (0x00075a37) field_vitu2_entry_pane_g3

0xf94d,	// (0x00078106) field_vitu2_entry_pane_g_ParamLimits

0x88ac,	// (0x00071065) cell_vitu2_itu_pane_g1_ParamLimits

0x88bc,	// (0x00071075) cell_vitu2_itu_pane_g2_ParamLimits

0x88bc,	// (0x00071075) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x00078112) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x00078112) cell_vitu2_itu_pane_g

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp05_ParamLimits

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp05

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp03

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp04

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp10_ParamLimits

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp10

0x2807,	// (0x0006afc0) bg_vkb2_func_pane_cp08

0x935b,	// (0x00071b14) bg_vkb2_func_pane_cp06

0x9368,	// (0x00071b21) bg_vkb2_func_pane_cp07

0xd8d0,	// (0x00076089) bg_vkb2_func_pane_cp11_ParamLimits

0xd8d0,	// (0x00076089) bg_vkb2_func_pane_cp11

0xd8e5,	// (0x0007609e) bg_vkb2_func_pane_cp12_ParamLimits

0xd8e5,	// (0x0007609e) bg_vkb2_func_pane_cp12

0xad8c,	// (0x00073545) bg_vkb2_func_pane_cp09

0xd2d6,	// (0x00075a8f) bg_vkb2_func_pane_g1

0xbb0a,	// (0x000742c3) bg_vkb2_func_pane_g2

0xd2de,	// (0x00075a97) bg_vkb2_func_pane_g3

0xd2e6,	// (0x00075a9f) bg_vkb2_func_pane_g4

0xd533,	// (0x00075cec) bg_vkb2_func_pane_g5

0xd2fe,	// (0x00075ab7) bg_vkb2_func_pane_g6

0xd306,	// (0x00075abf) bg_vkb2_func_pane_g7

0xd2f6,	// (0x00075aaf) bg_vkb2_func_pane_g8

0xbaea,	// (0x000742a3) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x00078317) bg_vkb2_func_pane_g

0x9672,	// (0x00071e2b) blid2_tripm_pane_g6_ParamLimits

0x9672,	// (0x00071e2b) blid2_tripm_pane_g6

0xd12a,	// (0x000758e3) mp4_progress_pane_g1

0x96e1,	// (0x00071e9a) blid2_tripm_values_pane_ParamLimits

0x96e1,	// (0x00071e9a) blid2_tripm_values_pane

0x97d0,	// (0x00071f89) blid2_tripm_values_pane_t1

0x97de,	// (0x00071f97) blid2_tripm_values_pane_t2

0x97ec,	// (0x00071fa5) blid2_tripm_values_pane_t3

0x97fa,	// (0x00071fb3) blid2_tripm_values_pane_t4

0x9808,	// (0x00071fc1) blid2_tripm_values_pane_t5

0x9816,	// (0x00071fcf) blid2_tripm_values_pane_t6

0x9824,	// (0x00071fdd) blid2_tripm_values_pane_t7

0x9832,	// (0x00071feb) blid2_tripm_values_pane_t8

0x9840,	// (0x00071ff9) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x0007832a) blid2_tripm_values_pane_t

0x3cd2,	// (0x0006c48b) call_video_pane_t1_ParamLimits

0x3cec,	// (0x0006c4a5) call_video_pane_t2_ParamLimits

0xf292,	// (0x00077a4b) call_video_pane_t_ParamLimits

0x253c,	// (0x0006acf5) msg_header_pane_g1_ParamLimits

0x133b,	// (0x00069af4) msg_header_pane_g2_ParamLimits

0x133b,	// (0x00069af4) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00077c65) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00077c65) msg_header_pane_g

0xb544,	// (0x00073cfd) main_clock2_pane_ParamLimits

0x79d4,	// (0x0007018d) grid_clock2_toolbar_pane_ParamLimits

0x79d4,	// (0x0007018d) grid_clock2_toolbar_pane

0x79d4,	// (0x0007018d) listscroll_clock2_pane_ParamLimits

0x79d4,	// (0x0007018d) listscroll_clock2_pane

0x7aa6,	// (0x0007025f) main_clock2_pane_t3_ParamLimits

0x7aa6,	// (0x0007025f) main_clock2_pane_t3

0x7abf,	// (0x00070278) main_clock2_pane_t4_ParamLimits

0x7abf,	// (0x00070278) main_clock2_pane_t4

0xd9a3,	// (0x0007615c) cell_clock2_toolbar_pane

0xd9ab,	// (0x00076164) cell_clock2_toolbar_pane_cp01

0xd9ab,	// (0x00076164) cell_clock2_toolbar_pane_cp02

0xd9b3,	// (0x0007616c) cell_clock2_toolbar_pane_cp03

0xd9bb,	// (0x00076174) list_clock2_pane

0x1001,	// (0x000697ba) scroll_pane_cp10

0xd9c3,	// (0x0007617c) list_single_clock2_pane_ParamLimits

0xd9c3,	// (0x0007617c) list_single_clock2_pane

0x11c0,	// (0x00069979) list_highlight_pane_cp08

0xd9d0,	// (0x00076189) list_single_clock2_pane_t1

0xd9de,	// (0x00076197) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0007833d) list_single_clock2_pane_t

0xad8c,	// (0x00073545) bg_button_pane_cp10

0xd9ec,	// (0x000761a5) cell_clock2_toolbar_pane_g1

0x4fcb,	// (0x0006d784) aid_main_viewer_pane_g1_ParamLimits

0x4fcb,	// (0x0006d784) aid_main_viewer_pane_g1

0x4fd7,	// (0x0006d790) aid_main_viewer_pane_g2_ParamLimits

0x4fd7,	// (0x0006d790) aid_main_viewer_pane_g2

0x4fe3,	// (0x0006d79c) aid_main_viewer_pane_g3_ParamLimits

0x4fe3,	// (0x0006d79c) aid_main_viewer_pane_g3

0x4ff2,	// (0x0006d7ab) aid_main_viewer_pane_g4_ParamLimits

0x4ff2,	// (0x0006d7ab) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00077c76) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00077c76) aid_main_viewer_pane_g

0x1547,	// (0x00069d00) main_calc_pane_ParamLimits

0x6496,	// (0x0006ec4f) main_dialer2_pane_ParamLimits

0xad8c,	// (0x00073545) main_cam6_pane

0xad8c,	// (0x00073545) main_vid6_pane

0x79e0,	// (0x00070199) listscroll_gen_pane_cp06_ParamLimits

0x79e0,	// (0x00070199) listscroll_gen_pane_cp06

0x7ad8,	// (0x00070291) main_clock2_pane_t5_ParamLimits

0x7ad8,	// (0x00070291) main_clock2_pane_t5

0x7b2d,	// (0x000702e6) aid_call2_pane_cp10_ParamLimits

0x7b3f,	// (0x000702f8) aid_call_pane_cp10_ParamLimits

0x108d,	// (0x00069846) popup_clock_analogue_window_cp10_g1_ParamLimits

0x108d,	// (0x00069846) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b51,	// (0x0007030a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b51,	// (0x0007030a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x108d,	// (0x00069846) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x00077fbf) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b63,	// (0x0007031c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd18a,	// (0x00075943) cell_dialer2_keypad_pane_g2_ParamLimits

0xd18a,	// (0x00075943) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x000780a5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x000780a5) cell_dialer2_keypad_pane_g

0x8172,	// (0x0007092b) cell_dialer2_keypad_pane_t1

0x8bfa,	// (0x000713b3) main_cset_text2_pane_ParamLimits

0x8bfa,	// (0x000713b3) main_cset_text2_pane

0xd74a,	// (0x00075f03) area_vitu2_query_pane_g1_ParamLimits

0x27d0,	// (0x0006af89) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0007825a) area_vitu2_query_pane_g_ParamLimits

0xd7ce,	// (0x00075f87) area_vitu2_query_pane_t7_ParamLimits

0xd7ce,	// (0x00075f87) area_vitu2_query_pane_t7

0x935b,	// (0x00071b14) bg_button_pane_cp018_ParamLimits

0x9368,	// (0x00071b21) bg_button_pane_cp021_ParamLimits

0x2807,	// (0x0006afc0) bg_button_pane_cp022_ParamLimits

0x2807,	// (0x0006afc0) bg_vkb2_func_pane_cp08_ParamLimits

0x935b,	// (0x00071b14) bg_vkb2_func_pane_cp06_ParamLimits

0x9368,	// (0x00071b21) bg_vkb2_func_pane_cp07_ParamLimits

0x2816,	// (0x0006afcf) input_focus_pane_cp09_ParamLimits

0xf0cb,	// (0x00077884) cam6_autofocus_pane_ParamLimits

0xf0cb,	// (0x00077884) cam6_autofocus_pane

0x984e,	// (0x00072007) cam6_image_uncrop_pane_ParamLimits

0x984e,	// (0x00072007) cam6_image_uncrop_pane

0x985b,	// (0x00072014) cam6_indi_pane_ParamLimits

0x985b,	// (0x00072014) cam6_indi_pane

0x9871,	// (0x0007202a) cam6_mode_pane_ParamLimits

0x9871,	// (0x0007202a) cam6_mode_pane

0x9883,	// (0x0007203c) cam6_timer_pane_ParamLimits

0x9883,	// (0x0007203c) cam6_timer_pane

0x988f,	// (0x00072048) cam6_zoom_pane_ParamLimits

0x988f,	// (0x00072048) cam6_zoom_pane

0x989b,	// (0x00072054) cam6_mode_pane_g1_ParamLimits

0x989b,	// (0x00072054) cam6_mode_pane_g1

0x98ab,	// (0x00072064) cam6_mode_pane_g2_ParamLimits

0x98ab,	// (0x00072064) cam6_mode_pane_g2

0x98bb,	// (0x00072074) cam6_mode_pane_g3_ParamLimits

0x98bb,	// (0x00072074) cam6_mode_pane_g3

0x98cb,	// (0x00072084) cam6_mode_pane_g4_ParamLimits

0x98cb,	// (0x00072084) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x00078342) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x00078342) cam6_mode_pane_g

0xd9f4,	// (0x000761ad) bg_tb_trans_pane_cp08_ParamLimits

0xd9f4,	// (0x000761ad) bg_tb_trans_pane_cp08

0xda02,	// (0x000761bb) cam6_battery_pane_ParamLimits

0xda02,	// (0x000761bb) cam6_battery_pane

0xda18,	// (0x000761d1) cam6_indi_pane_g1_ParamLimits

0xda18,	// (0x000761d1) cam6_indi_pane_g1

0xda2a,	// (0x000761e3) cam6_indi_pane_g2_ParamLimits

0xda2a,	// (0x000761e3) cam6_indi_pane_g2

0xda3c,	// (0x000761f5) cam6_indi_pane_g3_ParamLimits

0xda3c,	// (0x000761f5) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0007834b) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0007834b) cam6_indi_pane_g

0xda4e,	// (0x00076207) cam6_indi_pane_t1_ParamLimits

0xda4e,	// (0x00076207) cam6_indi_pane_t1

0x86dd,	// (0x00070e96) cam6_autofocus_pane_g1

0x86e5,	// (0x00070e9e) cam6_autofocus_pane_g2

0x86ed,	// (0x00070ea6) cam6_autofocus_pane_g3

0x86f5,	// (0x00070eae) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x00078352) cam6_autofocus_pane_g

0xda74,	// (0x0007622d) cam6_timer_pane_g1

0xda7c,	// (0x00076235) cam6_timer_pane_t1

0xda8a,	// (0x00076243) cam6_zoom_cont_pane

0xda92,	// (0x0007624b) cam6_zoom_pane_g1

0xda9a,	// (0x00076253) cam6_zoom_pane_g2

0x98db,	// (0x00072094) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0007835b) cam6_zoom_pane_g

0xc90c,	// (0x000750c5) cam6_battery_pane_g1

0xc90c,	// (0x000750c5) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x00077ecc) cam6_battery_pane_g

0xdaa2,	// (0x0007625b) cam6_zoom_cont_pane_g1

0xdaab,	// (0x00076264) cam6_zoom_cont_pane_g2

0xdab4,	// (0x0007626d) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x00078362) cam6_zoom_cont_pane_g

0x98f8,	// (0x000720b1) cam6_mode_pane_cp_ParamLimits

0x98f8,	// (0x000720b1) cam6_mode_pane_cp

0x988f,	// (0x00072048) cam6_zoom_pane_cp_ParamLimits

0x988f,	// (0x00072048) cam6_zoom_pane_cp

0x990a,	// (0x000720c3) vid6_image_uncrop_cif_pane_ParamLimits

0x990a,	// (0x000720c3) vid6_image_uncrop_cif_pane

0x9918,	// (0x000720d1) vid6_image_uncrop_nhd_pane_ParamLimits

0x9918,	// (0x000720d1) vid6_image_uncrop_nhd_pane

0x984e,	// (0x00072007) vid6_image_uncrop_vga_pane_ParamLimits

0x984e,	// (0x00072007) vid6_image_uncrop_vga_pane

0x9925,	// (0x000720de) vid6_image_uncrop_wvga_pane_ParamLimits

0x9925,	// (0x000720de) vid6_image_uncrop_wvga_pane

0x9932,	// (0x000720eb) vid6_indi_pane_ParamLimits

0x9932,	// (0x000720eb) vid6_indi_pane

0xd9f4,	// (0x000761ad) bg_tb_trans_pane_cp09_ParamLimits

0xd9f4,	// (0x000761ad) bg_tb_trans_pane_cp09

0xdac8,	// (0x00076281) cam6_battery_pane_cp_ParamLimits

0xdac8,	// (0x00076281) cam6_battery_pane_cp

0xdad4,	// (0x0007628d) vid6_indi_pane_g1_ParamLimits

0xdad4,	// (0x0007628d) vid6_indi_pane_g1

0xdae6,	// (0x0007629f) vid6_indi_pane_g2_ParamLimits

0xdae6,	// (0x0007629f) vid6_indi_pane_g2

0xdaf8,	// (0x000762b1) vid6_indi_pane_g3_ParamLimits

0xdaf8,	// (0x000762b1) vid6_indi_pane_g3

0xdb0d,	// (0x000762c6) vid6_indi_pane_g4_ParamLimits

0xdb0d,	// (0x000762c6) vid6_indi_pane_g4

0xdb22,	// (0x000762db) vid6_indi_pane_g5_ParamLimits

0xdb22,	// (0x000762db) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x00078369) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x00078369) vid6_indi_pane_g

0xdb3c,	// (0x000762f5) vid6_indi_pane_t1_ParamLimits

0xdb3c,	// (0x000762f5) vid6_indi_pane_t1

0xdb52,	// (0x0007630b) vid6_indi_pane_t2_ParamLimits

0xdb52,	// (0x0007630b) vid6_indi_pane_t2

0xdb7a,	// (0x00076333) vid6_indi_pane_t3_ParamLimits

0xdb7a,	// (0x00076333) vid6_indi_pane_t3

0xdba2,	// (0x0007635b) vid6_indi_pane_t4_ParamLimits

0xdba2,	// (0x0007635b) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x00078374) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x00078374) vid6_indi_pane_t

0xdbc6,	// (0x0007637f) wait_bar_pane_cp08

0x9949,	// (0x00072102) main_cset_text2_pane_t1_ParamLimits

0x9949,	// (0x00072102) main_cset_text2_pane_t1

0x98e3,	// (0x0007209c) listscroll_gen_pane_cp06_t1_ParamLimits

0x98e3,	// (0x0007209c) listscroll_gen_pane_cp06_t1

0xad8c,	// (0x00073545) main_cam6_set_pane

0xcb3b,	// (0x000752f4) bg_tb_trans_pane_cp06_ParamLimits

0xef83,	// (0x0007773c) cam4_indicators_pane_g1_ParamLimits

0xef93,	// (0x0007774c) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x000780e2) cam4_indicators_pane_g_ParamLimits

0xefb3,	// (0x0007776c) cam4_indicators_pane_t1_ParamLimits

0xd23f,	// (0x000759f8) bg_tb_trans_pane_cp07_ParamLimits

0x868c,	// (0x00070e45) vid4_indicators_pane_g1_ParamLimits

0x8699,	// (0x00070e52) vid4_indicators_pane_g2_ParamLimits

0x86a6,	// (0x00070e5f) vid4_indicators_pane_g3_ParamLimits

0x86b3,	// (0x00070e6c) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x000780f4) vid4_indicators_pane_g_ParamLimits

0x86cb,	// (0x00070e84) vid4_indicators_pane_t1_ParamLimits

0xf031,	// (0x000777ea) vid4_progress_pane_g1_ParamLimits

0xf040,	// (0x000777f9) vid4_progress_pane_g2_ParamLimits

0xf04f,	// (0x00077808) vid4_progress_pane_g3_ParamLimits

0xf05e,	// (0x00077817) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x000782a5) vid4_progress_pane_g_ParamLimits

0xf06a,	// (0x00077823) vid4_progress_pane_t1_ParamLimits

0xf080,	// (0x00077839) vid4_progress_pane_t2_ParamLimits

0xf095,	// (0x0007784e) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x000782b0) vid4_progress_pane_t_ParamLimits

0xf0aa,	// (0x00077863) wait_bar_pane_cp07_ParamLimits

0x9963,	// (0x0007211c) main_cam6_set_pane_g2_ParamLimits

0x9963,	// (0x0007211c) main_cam6_set_pane_g2

0x9985,	// (0x0007213e) main_cset6_listscroll_pane_ParamLimits

0x9985,	// (0x0007213e) main_cset6_listscroll_pane

0x999f,	// (0x00072158) main_cset6_slider_pane_ParamLimits

0x999f,	// (0x00072158) main_cset6_slider_pane

0x99b5,	// (0x0007216e) main_cset6_text2_pane_ParamLimits

0x99b5,	// (0x0007216e) main_cset6_text2_pane

0xdbd6,	// (0x0007638f) main_cset6_text_pane

0xd3cc,	// (0x00075b85) main_cset_list_pane_copy1_ParamLimits

0xd3cc,	// (0x00075b85) main_cset_list_pane_copy1

0xd3dc,	// (0x00075b95) scroll_pane_cp028_copy1

0x99c3,	// (0x0007217c) cset_list_set_pane_copy1

0x99d5,	// (0x0007218e) aid_position_infowindow_above_copy1

0x99dd,	// (0x00072196) aid_position_infowindow_below_copy1

0x99e5,	// (0x0007219e) cset_list_set_pane_g1_copy1

0x2825,	// (0x0006afde) cset_list_set_pane_g3_copy1_ParamLimits

0x2825,	// (0x0006afde) cset_list_set_pane_g3_copy1

0x2834,	// (0x0006afed) cset_list_set_pane_t1_copy1_ParamLimits

0x2834,	// (0x0006afed) cset_list_set_pane_t1_copy1

0x1547,	// (0x00069d00) list_highlight_pane_cp021_copy1_ParamLimits

0x1547,	// (0x00069d00) list_highlight_pane_cp021_copy1

0xdbde,	// (0x00076397) cset6_slider_pane_ParamLimits

0xdbde,	// (0x00076397) cset6_slider_pane

0xdc0a,	// (0x000763c3) main_cset6_slider_pane_g1_ParamLimits

0xdc0a,	// (0x000763c3) main_cset6_slider_pane_g1

0x99ed,	// (0x000721a6) main_cset6_slider_pane_g2_ParamLimits

0x99ed,	// (0x000721a6) main_cset6_slider_pane_g2

0xd3f1,	// (0x00075baa) main_cset6_slider_pane_g3_ParamLimits

0xd3f1,	// (0x00075baa) main_cset6_slider_pane_g3

0x8cbf,	// (0x00071478) main_cset6_slider_pane_g4_ParamLimits

0x8cbf,	// (0x00071478) main_cset6_slider_pane_g4

0x8d07,	// (0x000714c0) main_cset6_slider_pane_g5_ParamLimits

0x8d07,	// (0x000714c0) main_cset6_slider_pane_g5

0xd3f1,	// (0x00075baa) main_cset6_slider_pane_g7_ParamLimits

0xd3f1,	// (0x00075baa) main_cset6_slider_pane_g7

0xd3fd,	// (0x00075bb6) main_cset6_slider_pane_g8_ParamLimits

0xd3fd,	// (0x00075bb6) main_cset6_slider_pane_g8

0x8ca7,	// (0x00071460) main_cset6_slider_pane_g9_ParamLimits

0x8ca7,	// (0x00071460) main_cset6_slider_pane_g9

0x8cb3,	// (0x0007146c) main_cset6_slider_pane_g10_ParamLimits

0x8cb3,	// (0x0007146c) main_cset6_slider_pane_g10

0x8cbf,	// (0x00071478) main_cset6_slider_pane_g11_ParamLimits

0x8cbf,	// (0x00071478) main_cset6_slider_pane_g11

0x8ccb,	// (0x00071484) main_cset6_slider_pane_g12_ParamLimits

0x8ccb,	// (0x00071484) main_cset6_slider_pane_g12

0x8cd7,	// (0x00071490) main_cset6_slider_pane_g13_ParamLimits

0x8cd7,	// (0x00071490) main_cset6_slider_pane_g13

0x8ce3,	// (0x0007149c) main_cset6_slider_pane_g14_ParamLimits

0x8ce3,	// (0x0007149c) main_cset6_slider_pane_g14

0x9a15,	// (0x000721ce) main_cset6_slider_pane_g15_ParamLimits

0x9a15,	// (0x000721ce) main_cset6_slider_pane_g15

0x8d07,	// (0x000714c0) main_cset6_slider_pane_g16_ParamLimits

0x8d07,	// (0x000714c0) main_cset6_slider_pane_g16

0x8d13,	// (0x000714cc) main_cset6_slider_pane_g17_ParamLimits

0x8d13,	// (0x000714cc) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0007837d) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0007837d) main_cset6_slider_pane_g

0xdc32,	// (0x000763eb) main_cset6_slider_pane_t1_ParamLimits

0xdc32,	// (0x000763eb) main_cset6_slider_pane_t1

0xdc73,	// (0x0007642c) main_cset6_slider_pane_t2_ParamLimits

0xdc73,	// (0x0007642c) main_cset6_slider_pane_t2

0xdc9e,	// (0x00076457) main_cset6_slider_pane_t3_ParamLimits

0xdc9e,	// (0x00076457) main_cset6_slider_pane_t3

0x9a2d,	// (0x000721e6) main_cset6_slider_pane_t4_ParamLimits

0x9a2d,	// (0x000721e6) main_cset6_slider_pane_t4

0x9a58,	// (0x00072211) main_cset6_slider_pane_t5_ParamLimits

0x9a58,	// (0x00072211) main_cset6_slider_pane_t5

0xdcc9,	// (0x00076482) main_cset6_slider_pane_t7_ParamLimits

0xdcc9,	// (0x00076482) main_cset6_slider_pane_t7

0x9a83,	// (0x0007223c) main_cset6_slider_pane_t8_ParamLimits

0x9a83,	// (0x0007223c) main_cset6_slider_pane_t8

0x9aa7,	// (0x00072260) main_cset6_slider_pane_t9_ParamLimits

0x9aa7,	// (0x00072260) main_cset6_slider_pane_t9

0x9acb,	// (0x00072284) main_cset6_slider_pane_t10_ParamLimits

0x9acb,	// (0x00072284) main_cset6_slider_pane_t10

0x9aef,	// (0x000722a8) main_cset6_slider_pane_t11_ParamLimits

0x9aef,	// (0x000722a8) main_cset6_slider_pane_t11

0xdcff,	// (0x000764b8) main_cset6_slider_pane_t14_ParamLimits

0xdcff,	// (0x000764b8) main_cset6_slider_pane_t14

0xdd38,	// (0x000764f1) main_cset6_slider_pane_t15_ParamLimits

0xdd38,	// (0x000764f1) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x000783a2) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x000783a2) main_cset6_slider_pane_t

0xd4d9,	// (0x00075c92) cset_slider_pane_g1_copy1

0xd4e2,	// (0x00075c9b) cset_slider_pane_g2_copy1

0xd4eb,	// (0x00075ca4) cset_slider_pane_g3_copy1

0xad8c,	// (0x00073545) bg_popup_sub_pane_cp011_copy1

0xd57c,	// (0x00075d35) main_cset_text_pane_g1_copy1

0xd584,	// (0x00075d3d) main_cset_text_pane_t1_copy1

0xd592,	// (0x00075d4b) main_cset_text_pane_t2_copy1

0xd5a0,	// (0x00075d59) main_cset_text_pane_t3_copy1

0xd5ae,	// (0x00075d67) main_cset_text_pane_t4_copy1

0xd5bc,	// (0x00075d75) main_cset_text_pane_t5_copy1

0xd5ca,	// (0x00075d83) main_cset_text_pane_t6_copy1

0xd5d8,	// (0x00075d91) main_cset_text_pane_t7_copy1

0x9b13,	// (0x000722cc) main_cset_text2_pane_t1_copy1

0xad8c,	// (0x00073545) main_ncimui_pane

0x66a4,	// (0x0006ee5d) popup_query_ncimui_window_ParamLimits

0x66a4,	// (0x0006ee5d) popup_query_ncimui_window

0xecd0,	// (0x00077489) field_cale_ev2_pane_g4_ParamLimits

0xecd0,	// (0x00077489) field_cale_ev2_pane_g4

0x8064,	// (0x0007081d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8064,	// (0x0007081d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x00078080) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x00078080) cell_video_dialer_keypad_pane_g

0x807c,	// (0x00070835) cell_video_dialer_keypad_pane_t1

0xad8c,	// (0x00073545) bg_popup_window_pane_cp012

0x0eda,	// (0x00069693) heading_pane_cp06

0xde66,	// (0x0007661f) ncim_query_content_pane

0xad8c,	// (0x00073545) bg_popup_heading_pane_cp01

0xde6e,	// (0x00076627) ncim_heading_pane_t1

0xde7c,	// (0x00076635) ncim_indicator_popup_pane

0xde8e,	// (0x00076647) ncim_query_button_pane

0xdea2,	// (0x0007665b) ncim_query_content_pane_t1

0xdeb4,	// (0x0007666d) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x000783e1) ncim_query_content_pane_t

0xdeee,	// (0x000766a7) ncim_query_list_pane

0xdf00,	// (0x000766b9) ncim_query_popup_pane

0xde7c,	// (0x00076635) ncim_indicator_popup_pane_ParamLimits

0x9c26,	// (0x000723df) ncim_query_content_pane_g1_ParamLimits

0x9c26,	// (0x000723df) ncim_query_content_pane_g1

0xdea2,	// (0x0007665b) ncim_query_content_pane_t1_ParamLimits

0xdeb4,	// (0x0007666d) ncim_query_content_pane_t2_ParamLimits

0x9c32,	// (0x000723eb) ncim_query_content_pane_t3_ParamLimits

0x9c32,	// (0x000723eb) ncim_query_content_pane_t3

0x9c5a,	// (0x00072413) ncim_query_content_pane_t4_ParamLimits

0x9c5a,	// (0x00072413) ncim_query_content_pane_t4

0x9c82,	// (0x0007243b) ncim_query_content_pane_t5_ParamLimits

0x9c82,	// (0x0007243b) ncim_query_content_pane_t5

0xdec6,	// (0x0007667f) ncim_query_content_pane_t6_ParamLimits

0xdec6,	// (0x0007667f) ncim_query_content_pane_t6

0xfc28,	// (0x000783e1) ncim_query_content_pane_t_ParamLimits

0xdeee,	// (0x000766a7) ncim_query_list_pane_ParamLimits

0xdf00,	// (0x000766b9) ncim_query_popup_pane_ParamLimits

0xdf14,	// (0x000766cd) wait_bar_pane_cp04

0xad8c,	// (0x00073545) input_focus_pane_cp011

0xdf1c,	// (0x000766d5) ncim_query_popup_pane_t1

0xdf2a,	// (0x000766e3) ncim_list_query_list_pane_ParamLimits

0xdf2a,	// (0x000766e3) ncim_list_query_list_pane

0xad8c,	// (0x00073545) bg_button_pane_cp027

0xdf3d,	// (0x000766f6) ncim_query_button_pane_g1

0xad8c,	// (0x00073545) list_highlight_pane_cp012

0xdf47,	// (0x00076700) ncim_list_query_list_pane_g1

0xdf4f,	// (0x00076708) ncim_list_query_list_pane_t1

0xefa3,	// (0x0007775c) cam4_indicators_pane_g3_ParamLimits

0xefa3,	// (0x0007775c) cam4_indicators_pane_g3

0x86bf,	// (0x00070e78) vid4_indicators_pane_g5_ParamLimits

0x86bf,	// (0x00070e78) vid4_indicators_pane_g5

0xbe06,	// (0x000745bf) vid4_progress_pane_g5_ParamLimits

0xbe06,	// (0x000745bf) vid4_progress_pane_g5

0x9b41,	// (0x000722fa) main_ncimui_pane_g1

0x9b97,	// (0x00072350) ncimui_group_query_pane_ParamLimits

0x9b97,	// (0x00072350) ncimui_group_query_pane

0x9bd3,	// (0x0007238c) ncimui_list_pane_ParamLimits

0x9bd3,	// (0x0007238c) ncimui_list_pane

0x9bf2,	// (0x000723ab) ncimui_text_pane_ParamLimits

0x9bf2,	// (0x000723ab) ncimui_text_pane

0x9caa,	// (0x00072463) ncimui_text_pane_t1_ParamLimits

0x9caa,	// (0x00072463) ncimui_text_pane_t1

0xdf66,	// (0x0007671f) ncimui_list_single_graphic_pane_ParamLimits

0xdf66,	// (0x0007671f) ncimui_list_single_graphic_pane

0x9cc8,	// (0x00072481) ncimui_query_pane_ParamLimits

0x9cc8,	// (0x00072481) ncimui_query_pane

0xad8c,	// (0x00073545) list_highlight_pane_cp013

0xdf73,	// (0x0007672c) ncim_list_query_list_pane_t1_copy1

0xdf81,	// (0x0007673a) ncim_list_single_graphic_pane_g1

0xdf89,	// (0x00076742) ncim_query_button_pane_cp01

0xdf95,	// (0x0007674e) ncim_query_entry_pane_ParamLimits

0xdf95,	// (0x0007674e) ncim_query_entry_pane

0xdfa8,	// (0x00076761) ncimui_query_pane_g1

0xdfb4,	// (0x0007676d) ncimui_query_pane_t1_ParamLimits

0xdfb4,	// (0x0007676d) ncimui_query_pane_t1

0x1547,	// (0x00069d00) input_focus_pane_cp012

0xdfcd,	// (0x00076786) ncim_query_entry_pane_t1

0xb544,	// (0x00073cfd) main_im_pane_ParamLimits

0x1547,	// (0x00069d00) main_mobtv_pane_ParamLimits

0x1547,	// (0x00069d00) main_mobtv_pane

0x8ca7,	// (0x00071460) main_cset6_slider_pane_g18_ParamLimits

0x8ca7,	// (0x00071460) main_cset6_slider_pane_g18

0x8cd7,	// (0x00071490) main_cset6_slider_pane_g19_ParamLimits

0x8cd7,	// (0x00071490) main_cset6_slider_pane_g19

0xdfdf,	// (0x00076798) bg_main_mobtv_pane_ParamLimits

0xdfdf,	// (0x00076798) bg_main_mobtv_pane

0x9cd8,	// (0x00072491) main_mobtv_info_pane

0x9ce1,	// (0x0007249a) main_mobtv_loading_pane_ParamLimits

0x9ce1,	// (0x0007249a) main_mobtv_loading_pane

0xdfed,	// (0x000767a6) main_mobtv_pg_channel_list_pane

0xdff7,	// (0x000767b0) main_mobtv_pg_hdr_pane

0x9cee,	// (0x000724a7) main_mobtv_programe_curr_pane_ParamLimits

0x9cee,	// (0x000724a7) main_mobtv_programe_curr_pane

0x9cfb,	// (0x000724b4) main_mobtv_programe_next_pane_ParamLimits

0x9cfb,	// (0x000724b4) main_mobtv_programe_next_pane

0xe000,	// (0x000767b9) popup_mobtv_noti_window

0xc90c,	// (0x000750c5) main_tv_pg_hdr_pane_g1

0xe008,	// (0x000767c1) main_tv_pg_hdr_pane_g2

0xe010,	// (0x000767c9) main_tv_pg_hdr_pane_g3

0xe018,	// (0x000767d1) main_tv_pg_hdr_pane_g4

0xe020,	// (0x000767d9) main_tv_pg_hdr_pane_g5

0xe028,	// (0x000767e1) main_tv_pg_hdr_pane_g6

0xe030,	// (0x000767e9) main_tv_pg_hdr_pane_g7

0xe038,	// (0x000767f1) main_tv_pg_hdr_pane_g8

0xe040,	// (0x000767f9) main_tv_pg_hdr_pane_g9

0xe048,	// (0x00076801) main_tv_pg_hdr_pane_g10

0xe052,	// (0x0007680b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x000783ee) main_tv_pg_hdr_pane_g

0xe05c,	// (0x00076815) main_tv_pg_hdr_pane_t1

0xe06a,	// (0x00076823) main_tv_pg_hdr_pane_t2

0xe078,	// (0x00076831) main_tv_pg_hdr_pane_t3

0xe086,	// (0x0007683f) main_tv_pg_hdr_pane_t4

0xe094,	// (0x0007684d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x00078405) main_tv_pg_hdr_pane_t

0xe0a2,	// (0x0007685b) single_mobtv_pg_channel_pane_ParamLimits

0xe0a2,	// (0x0007685b) single_mobtv_pg_channel_pane

0xe0b4,	// (0x0007686d) single_mobtv_pg_channel_table_pane

0xe0bd,	// (0x00076876) single_mobtv_pg_channel_thumb_pane

0xe0c6,	// (0x0007687f) single_tv_pg_channel_pane_g1

0xe0cf,	// (0x00076888) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x00078410) single_tv_pg_channel_pane_g

0xcb3b,	// (0x000752f4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb3b,	// (0x000752f4) bg_single_mobtv_pg_channel_thumb_pane

0xe0d8,	// (0x00076891) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0d8,	// (0x00076891) single_mobtv_pg_channel_thumb_pane_g1

0xe0e6,	// (0x0007689f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0e6,	// (0x0007689f) single_mobtv_pg_channel_thumb_pane_g2

0xe0f2,	// (0x000768ab) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0f2,	// (0x000768ab) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x00078415) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x00078415) single_mobtv_pg_channel_thumb_pane_g

0xe0fe,	// (0x000768b7) single_mobtv_pg_channel_thumb_pane_t1

0xe10c,	// (0x000768c5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0007841c) single_mobtv_pg_channel_thumb_pane_t

0xc90c,	// (0x000750c5) bg_single_mobtv_pg_channel_table_pane_g1

0xc90c,	// (0x000750c5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x00077ecc) bg_single_mobtv_pg_channel_table_pane_g

0xe11a,	// (0x000768d3) single_mobtv_pg_channel_table_pane_t1

0xe128,	// (0x000768e1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x00078421) single_mobtv_pg_channel_table_pane_t

0x9d10,	// (0x000724c9) main_mobtv_info_pane_g1_ParamLimits

0x9d10,	// (0x000724c9) main_mobtv_info_pane_g1

0x9d2c,	// (0x000724e5) main_mobtv_info_pane_t1_ParamLimits

0x9d2c,	// (0x000724e5) main_mobtv_info_pane_t1

0x9d92,	// (0x0007254b) main_mobtv_info_pane_t2_ParamLimits

0x9d92,	// (0x0007254b) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0007842b) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0007842b) main_mobtv_info_pane_t

0x9e15,	// (0x000725ce) wait_bar_pane_cp05

0x9e25,	// (0x000725de) main_mobtv_loading_pane_g1_ParamLimits

0x9e25,	// (0x000725de) main_mobtv_loading_pane_g1

0x9e36,	// (0x000725ef) main_mobtv_loading_pane_g2_ParamLimits

0x9e36,	// (0x000725ef) main_mobtv_loading_pane_g2

0x9e42,	// (0x000725fb) main_mobtv_loading_pane_g3_ParamLimits

0x9e42,	// (0x000725fb) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x00078432) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x00078432) main_mobtv_loading_pane_g

0xe136,	// (0x000768ef) main_mobtv_loading_pane_t1_ParamLimits

0xe136,	// (0x000768ef) main_mobtv_loading_pane_t1

0xe14e,	// (0x00076907) main_mobtv_loading_pane_t2_ParamLimits

0xe14e,	// (0x00076907) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x00078439) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x00078439) main_mobtv_loading_pane_t

0x9e53,	// (0x0007260c) wait_bar_pane_cp06_ParamLimits

0x9e53,	// (0x0007260c) wait_bar_pane_cp06

0xe172,	// (0x0007692b) main_mobtv_programe_curr_pane_t1

0xe180,	// (0x00076939) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0007843e) main_mobtv_programe_curr_pane_t

0xe18e,	// (0x00076947) main_mobtv_programe_next_pane_t1

0xe19c,	// (0x00076955) main_mobtv_programe_next_pane_t2

0xe1aa,	// (0x00076963) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x00078443) main_mobtv_programe_next_pane_t

0xad8c,	// (0x00073545) bg_popup_mobtv_noti_window_pane

0xe1b8,	// (0x00076971) popup_mobtv_noti_window_g1

0xe1c0,	// (0x00076979) popup_mobtv_noti_window_t1

0xe1ce,	// (0x00076987) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x0007844a) popup_mobtv_noti_window_t

0xc90c,	// (0x000750c5) bg_popup_mobtv_noti_window_pane_g1

0xad8c,	// (0x00073545) sc_clock_pane

0xad8c,	// (0x00073545) main_fs_bigclock_pane

0x96cb,	// (0x00071e84) blid2_tripm_pane_t4_ParamLimits

0x96cb,	// (0x00071e84) blid2_tripm_pane_t4

0x9e62,	// (0x0007261b) sc_clock_pane_g1_ParamLimits

0x9e62,	// (0x0007261b) sc_clock_pane_g1

0x9e74,	// (0x0007262d) sc_clock_pane_t1_ParamLimits

0x9e74,	// (0x0007262d) sc_clock_pane_t1

0x9e96,	// (0x0007264f) sc_clock_pane_t2_ParamLimits

0x9e96,	// (0x0007264f) sc_clock_pane_t2

0x9eac,	// (0x00072665) sc_clock_pane_t3_ParamLimits

0x9eac,	// (0x00072665) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0007844f) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0007844f) sc_clock_pane_t

0xa6c2,	// (0x00072e7b) main_fs_bigclock_indicator_pane_ParamLimits

0xa6c2,	// (0x00072e7b) main_fs_bigclock_indicator_pane

0xcb0b,	// (0x000752c4) main_fs_bigclock_pane_g1_ParamLimits

0xcb0b,	// (0x000752c4) main_fs_bigclock_pane_g1

0xa6ce,	// (0x00072e87) main_fs_bigclock_pane_t1_ParamLimits

0xa6ce,	// (0x00072e87) main_fs_bigclock_pane_t1

0xa6e0,	// (0x00072e99) main_fs_bigclock_pane_t2_ParamLimits

0xa6e0,	// (0x00072e99) main_fs_bigclock_pane_t2

0xa6f2,	// (0x00072eab) main_fs_bigclock_pane_t3_ParamLimits

0xa6f2,	// (0x00072eab) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x00078649) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x00078649) main_fs_bigclock_pane_t

0x0505,	// (0x00068cbe) main_fs_bigclock_indicator_pane_g1

0xde96,	// (0x0007664f) ncim_query_content_pane_g2_ParamLimits

0xde96,	// (0x0007664f) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x000783dc) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x000783dc) ncim_query_content_pane_g

0x9ec1,	// (0x0007267a) sc_clock_pane_t4_ParamLimits

0x9ec1,	// (0x0007267a) sc_clock_pane_t4

0x1547,	// (0x00069d00) main_radioblah_pane

0xd1e1,	// (0x0007599a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1e1,	// (0x0007599a) cell_call4_button_pane_t1_copy1

0x9b49,	// (0x00072302) main_ncimui_pane_t1_ParamLimits

0x9b49,	// (0x00072302) main_ncimui_pane_t1

0x9b63,	// (0x0007231c) main_ncimui_pane_t2_ParamLimits

0x9b63,	// (0x0007231c) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x000783d5) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x000783d5) main_ncimui_pane_t

0xe2f8,	// (0x00076ab1) main_radioblah_anim_pane_ParamLimits

0xe2f8,	// (0x00076ab1) main_radioblah_anim_pane

0xe309,	// (0x00076ac2) main_radioblah_info_pane_ParamLimits

0xe309,	// (0x00076ac2) main_radioblah_info_pane

0xe31d,	// (0x00076ad6) main_radioblah_pane_t1_ParamLimits

0xe31d,	// (0x00076ad6) main_radioblah_pane_t1

0xe339,	// (0x00076af2) main_radioblah_pane_t2_ParamLimits

0xe339,	// (0x00076af2) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x00078470) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x00078470) main_radioblah_pane_t

0x9f58,	// (0x00072711) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f58,	// (0x00072711) main_radioblah_rocker_ctrl_pane

0xe381,	// (0x00076b3a) main_radioblah_info_pane_t1_ParamLimits

0xe381,	// (0x00076b3a) main_radioblah_info_pane_t1

0x9fac,	// (0x00072765) main_radioblah_info_pane_t2_ParamLimits

0x9fac,	// (0x00072765) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x00078479) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x00078479) main_radioblah_info_pane_t

0xc90c,	// (0x000750c5) main_radioblah_rocker_ctrl_pane_g1

0xa05a,	// (0x00072813) main_radioblah_rocker_ctrl_pane_g2

0xa062,	// (0x0007281b) main_radioblah_rocker_ctrl_pane_g3

0xa06a,	// (0x00072823) main_radioblah_rocker_ctrl_pane_g4

0xa072,	// (0x0007282b) main_radioblah_rocker_ctrl_pane_g5

0xa07a,	// (0x00072833) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x00078482) main_radioblah_rocker_ctrl_pane_g

0x9b13,	// (0x000722cc) main_cset_text2_pane_t1_copy1_ParamLimits

0xef73,	// (0x0007772c) cam4_image_uncrop_qvga_pane

0xefcd,	// (0x00077786) vid4_image_uncrop_qcif_pane

0xf0cb,	// (0x00077884) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0cb,	// (0x00077884) cam6_image_uncrop_qvga_pane

0xdabc,	// (0x00076275) vid6_image_uncrop_qcif_pane_ParamLimits

0xdabc,	// (0x00076275) vid6_image_uncrop_qcif_pane

0xad8c,	// (0x00073545) bg_popup_preview_window_pane_cp03

0xde3c,	// (0x000765f5) list_cset_text2_pane

0xde44,	// (0x000765fd) main_cset6_text2_pane_g1

0xde4c,	// (0x00076605) main_cset6_text2_pane_t1

0xa082,	// (0x0007283b) list_cset_text2_pane_t1_ParamLimits

0xa082,	// (0x0007283b) list_cset_text2_pane_t1

0x1547,	// (0x00069d00) main_radioblah_pane_ParamLimits

0x9e03,	// (0x000725bc) main_mobtv_info_pane_t3_ParamLimits

0x9e03,	// (0x000725bc) main_mobtv_info_pane_t3

0x9f46,	// (0x000726ff) main_radioblah_pane_g1

0x9f80,	// (0x00072739) main_radioblah_info_pane_g1

0x9fff,	// (0x000727b8) main_radioblah_info_pane_t3_ParamLimits

0x9fff,	// (0x000727b8) main_radioblah_info_pane_t3

0x478b,	// (0x0006cf44) highlight_cell_cale_month_pane_ParamLimits

0x478b,	// (0x0006cf44) highlight_cell_cale_month_pane

0xad8c,	// (0x00073545) main_phob_fisheye_pane

0xcc3d,	// (0x000753f6) scroll_pane_cp0031_ParamLimits

0xcc3d,	// (0x000753f6) scroll_pane_cp0031

0xdbc6,	// (0x0007637f) wait_bar_pane_cp08_ParamLimits

0x99c3,	// (0x0007217c) cset_list_set_pane_copy1_ParamLimits

0xe3bb,	// (0x00076b74) highlight_cell_cale_month_pane_g1

0xa09b,	// (0x00072854) highlight_cell_cale_month_pane_t1

0xe3c3,	// (0x00076b7c) list_gen_pane_cp01

0xd3dc,	// (0x00075b95) scroll_pane_01

0xe3cc,	// (0x00076b85) list_single_double_fisheye_pane

0x2849,	// (0x0006b002) list_double_fisheye_pane_g1_ParamLimits

0x2849,	// (0x0006b002) list_double_fisheye_pane_g1

0x2855,	// (0x0006b00e) list_double_fisheye_pane_g2_ParamLimits

0x2855,	// (0x0006b00e) list_double_fisheye_pane_g2

0x2869,	// (0x0006b022) list_double_fisheye_pane_g3_ParamLimits

0x2869,	// (0x0006b022) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0007848f) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0007848f) list_double_fisheye_pane_g

0x2892,	// (0x0006b04b) list_double_fisheye_pane_t1_ParamLimits

0x2892,	// (0x0006b04b) list_double_fisheye_pane_t1

0x28ad,	// (0x0006b066) list_double_fisheye_pane_t2_ParamLimits

0x28ad,	// (0x0006b066) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x0007849a) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x0007849a) list_double_fisheye_pane_t

0xad8c,	// (0x00073545) main_call5_pane

0x9eea,	// (0x000726a3) sc_swipe_pane_ParamLimits

0x9eea,	// (0x000726a3) sc_swipe_pane

0xa0ba,	// (0x00072873) call5_image_pane_ParamLimits

0xa0ba,	// (0x00072873) call5_image_pane

0xa0cf,	// (0x00072888) call5_swipe_1_pane_ParamLimits

0xa0cf,	// (0x00072888) call5_swipe_1_pane

0xa0e0,	// (0x00072899) call5_swipe_2_pane_ParamLimits

0xa0e0,	// (0x00072899) call5_swipe_2_pane

0xa105,	// (0x000728be) popup_call5_audio_first_window_ParamLimits

0xa105,	// (0x000728be) popup_call5_audio_first_window

0xcb3b,	// (0x000752f4) call5_swipe_1_pane_g1_ParamLimits

0xcb3b,	// (0x000752f4) call5_swipe_1_pane_g1

0xe3d5,	// (0x00076b8e) call5_swipe_1_pane_g2_ParamLimits

0xe3d5,	// (0x00076b8e) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0007849f) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0007849f) call5_swipe_1_pane_g

0xe3e1,	// (0x00076b9a) call5_swipe_1_pane_t1_ParamLimits

0xe3e1,	// (0x00076b9a) call5_swipe_1_pane_t1

0xcb3b,	// (0x000752f4) call5_swipe_2_pane_g1_ParamLimits

0xcb3b,	// (0x000752f4) call5_swipe_2_pane_g1

0xe3f6,	// (0x00076baf) call5_swipe_2_pane_g2_ParamLimits

0xe3f6,	// (0x00076baf) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x000784a4) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x000784a4) call5_swipe_2_pane_g

0xe402,	// (0x00076bbb) call5_swipe_2_pane_t1_ParamLimits

0xe402,	// (0x00076bbb) call5_swipe_2_pane_t1

0xe417,	// (0x00076bd0) sc_swipe_pane_g1_ParamLimits

0xe417,	// (0x00076bd0) sc_swipe_pane_g1

0xe424,	// (0x00076bdd) sc_swipe_pane_g2_ParamLimits

0xe424,	// (0x00076bdd) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000784a9) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x000784a9) sc_swipe_pane_g

0xe430,	// (0x00076be9) sc_swipe_pane_t1_ParamLimits

0xe430,	// (0x00076be9) sc_swipe_pane_t1

0xad8c,	// (0x00073545) main_cmail_launcher_pane

0xa114,	// (0x000728cd) aid_size_cell_cmail_l_ParamLimits

0xa114,	// (0x000728cd) aid_size_cell_cmail_l

0xa12d,	// (0x000728e6) grid_cmail_l_pane_ParamLimits

0xa12d,	// (0x000728e6) grid_cmail_l_pane

0xa142,	// (0x000728fb) cell_cmail_l_pane_ParamLimits

0xa142,	// (0x000728fb) cell_cmail_l_pane

0xa164,	// (0x0007291d) cell_cmail_l_pane_g1_ParamLimits

0xa164,	// (0x0007291d) cell_cmail_l_pane_g1

0xa174,	// (0x0007292d) cell_cmail_l_pane_t1_ParamLimits

0xa174,	// (0x0007292d) cell_cmail_l_pane_t1

0xe445,	// (0x00076bfe) cell_cmail_l_pane_t2_ParamLimits

0xe445,	// (0x00076bfe) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x000784ae) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x000784ae) cell_cmail_l_pane_t

0x1547,	// (0x00069d00) grid_highlight_pane_cp018_ParamLimits

0x1547,	// (0x00069d00) grid_highlight_pane_cp018

0x2f0c,	// (0x0006b6c5) main2_pane_ParamLimits

0x2f0c,	// (0x0006b6c5) main2_pane

0xb647,	// (0x00073e00) popup_sp_fs_action_menu_bg_pane_g1

0xb64f,	// (0x00073e08) popup_sp_fs_action_menu_bg_pane_g2

0xb657,	// (0x00073e10) popup_sp_fs_action_menu_bg_pane_g3

0xb65f,	// (0x00073e18) popup_sp_fs_action_menu_bg_pane_g4

0xb667,	// (0x00073e20) popup_sp_fs_action_menu_bg_pane_g5

0xb66f,	// (0x00073e28) popup_sp_fs_action_menu_bg_pane_g6

0xb677,	// (0x00073e30) popup_sp_fs_action_menu_bg_pane_g7

0xb67f,	// (0x00073e38) popup_sp_fs_action_menu_bg_pane_g8

0xb687,	// (0x00073e40) popup_sp_fs_action_menu_bg_pane_g9

0xb68f,	// (0x00073e48) popup_sp_fs_action_menu_bg_pane_g10

0xb68f,	// (0x00073e48) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00077965) popup_sp_fs_action_menu_bg_pane_g

0xb866,	// (0x0007401f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t3_g3_g1

0xb872,	// (0x0007402b) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x2_t3_g3_g2

0xb87e,	// (0x00074037) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00077a15) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00077a15) list_medium_line_x2_t3_g3_g

0xb88a,	// (0x00074043) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb88a,	// (0x00074043) list_medium_line_x2_t3_g3_t1

0x2452,	// (0x0006ac0b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2452,	// (0x0006ac0b) list_medium_line_x2_t3_g3_t2

0xb89f,	// (0x00074058) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00077a1c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00077a1c) list_medium_line_x2_t3_g3_t

0xb866,	// (0x0007401f) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t3_g2_g1

0xb87e,	// (0x00074037) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00077a23) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00077a23) list_medium_line_x2_t3_g2_g

0xb8b4,	// (0x0007406d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb8b4,	// (0x0007406d) list_medium_line_x2_t3_g2_t1

0xb8ca,	// (0x00074083) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb8ca,	// (0x00074083) list_medium_line_x2_t3_g2_t2

0xb89f,	// (0x00074058) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00077a28) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00077a28) list_medium_line_x2_t3_g2_t

0xb866,	// (0x0007401f) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t4_g4_g1

0xb8dc,	// (0x00074095) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb8dc,	// (0x00074095) list_medium_line_x2_t4_g4_g2

0xb872,	// (0x0007402b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x2_t4_g4_g3

0xb8e8,	// (0x000740a1) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb8e8,	// (0x000740a1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00077a2f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00077a2f) list_medium_line_x2_t4_g4_g

0x2464,	// (0x0006ac1d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2464,	// (0x0006ac1d) list_medium_line_x2_t4_g4_t1

0x247e,	// (0x0006ac37) list_medium_line_x2_t4_g4_t2_ParamLimits

0x247e,	// (0x0006ac37) list_medium_line_x2_t4_g4_t2

0x2493,	// (0x0006ac4c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2493,	// (0x0006ac4c) list_medium_line_x2_t4_g4_t3

0xb8f4,	// (0x000740ad) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb8f4,	// (0x000740ad) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00077a38) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00077a38) list_medium_line_x2_t4_g4_t

0xb866,	// (0x0007401f) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t2_g4_g1

0xb8dc,	// (0x00074095) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb8dc,	// (0x00074095) list_medium_line_x2_t2_g4_g2

0xb872,	// (0x0007402b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x2_t2_g4_g3

0xb87e,	// (0x00074037) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00077a9f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00077a9f) list_medium_line_x2_t2_g4_g

0xbbec,	// (0x000743a5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbbec,	// (0x000743a5) list_medium_line_x2_t2_g4_t1

0xb89f,	// (0x00074058) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00077aa8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00077aa8) list_medium_line_x2_t2_g4_t

0xb866,	// (0x0007401f) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t2_g3_g1

0xb872,	// (0x0007402b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x2_t2_g3_g2

0xb87e,	// (0x00074037) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00077a15) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00077a15) list_medium_line_x2_t2_g3_g

0xbc01,	// (0x000743ba) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbc01,	// (0x000743ba) list_medium_line_x2_t2_g3_t1

0xb89f,	// (0x00074058) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00077aad) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00077aad) list_medium_line_x2_t2_g3_t

0x48c3,	// (0x0006d07c) main_sp_fs_list_pane_ParamLimits

0x48c3,	// (0x0006d07c) main_sp_fs_list_pane

0x48d0,	// (0x0006d089) sp_fs_scroll_pane_ParamLimits

0x48d0,	// (0x0006d089) sp_fs_scroll_pane

0x24a8,	// (0x0006ac61) list_medium_line_x2_t3_t1

0x24b8,	// (0x0006ac71) list_medium_line_x2_t3_t2

0xbe5b,	// (0x00074614) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00077af8) list_medium_line_x2_t3_t

0x24c6,	// (0x0006ac7f) list_medium_line_x3_t4_t1

0x24d6,	// (0x0006ac8f) list_medium_line_x3_t4_t2

0xbe69,	// (0x00074622) list_medium_line_x3_t4_t3

0xbe77,	// (0x00074630) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00077aff) list_medium_line_x3_t4_t

0x24e4,	// (0x0006ac9d) list_medium_line_x4_t5_t1

0x24f4,	// (0x0006acad) list_medium_line_x4_t5_t2

0xbe69,	// (0x00074622) list_medium_line_x4_t5_t3

0xbe85,	// (0x0007463e) list_medium_line_x4_t5_t4

0xbe77,	// (0x00074630) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00077b08) list_medium_line_x4_t5_t

0xb866,	// (0x0007401f) list_medium_line_t4_g4_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t4_g4_g1

0xb8e8,	// (0x000740a1) list_medium_line_t4_g4_g2_ParamLimits

0xb8e8,	// (0x000740a1) list_medium_line_t4_g4_g2

0xbe93,	// (0x0007464c) list_medium_line_t4_g4_g3_ParamLimits

0xbe93,	// (0x0007464c) list_medium_line_t4_g4_g3

0xb87e,	// (0x00074037) list_medium_line_t4_g4_g4_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00077b13) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00077b13) list_medium_line_t4_g4_g

0xbe9f,	// (0x00074658) list_medium_line_t4_g4_t1_ParamLimits

0xbe9f,	// (0x00074658) list_medium_line_t4_g4_t1

0xbeb4,	// (0x0007466d) list_medium_line_t4_g4_t2_ParamLimits

0xbeb4,	// (0x0007466d) list_medium_line_t4_g4_t2

0xbeca,	// (0x00074683) list_medium_line_t4_g4_t3_ParamLimits

0xbeca,	// (0x00074683) list_medium_line_t4_g4_t3

0xbee0,	// (0x00074699) list_medium_line_t4_g4_t4_ParamLimits

0xbee0,	// (0x00074699) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00077b1c) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00077b1c) list_medium_line_t4_g4_t

0x499e,	// (0x0006d157) chi_dic_find_pane_g1

0x64aa,	// (0x0006ec63) main_tport_pane

0xd525,	// (0x00075cde) list_medium_line_plain_t1

0xb866,	// (0x0007401f) list_medium_line_t2_g2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t2_g2_g1

0xb872,	// (0x0007402b) list_medium_line_t2_g2_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x000781eb) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x000781eb) list_medium_line_t2_g2_g

0x2697,	// (0x0006ae50) list_medium_line_t2_g2_t1_ParamLimits

0x2697,	// (0x0006ae50) list_medium_line_t2_g2_t1

0x26ae,	// (0x0006ae67) list_medium_line_t2_g2_t2_ParamLimits

0x26ae,	// (0x0006ae67) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x000781f0) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x000781f0) list_medium_line_t2_g2_t

0xd84c,	// (0x00076005) aid_sp_fs_list_icon_a_sm

0xf0ba,	// (0x00077873) aid_sp_fs_list_icon_d

0xd854,	// (0x0007600d) aid_sp_fs_text_primary

0xd85d,	// (0x00076016) aid_sp_fs_text_secondary

0xf0c2,	// (0x0007787b) list_medium_line

0xf0c2,	// (0x0007787b) list_medium_line_g2

0xf0c2,	// (0x0007787b) list_medium_line_g3

0xf0c2,	// (0x0007787b) list_medium_line_plain

0xf0c2,	// (0x0007787b) list_medium_line_plain_t2

0xf0c2,	// (0x0007787b) list_medium_line_plain_t3

0xf0c2,	// (0x0007787b) list_medium_line_right_icon

0xf0c2,	// (0x0007787b) list_medium_line_right_iconx2

0xf0c2,	// (0x0007787b) list_medium_line_t2

0xf0c2,	// (0x0007787b) list_medium_line_t2_g2

0xf0c2,	// (0x0007787b) list_medium_line_t2_g3

0xf0c2,	// (0x0007787b) list_medium_line_t2_right_icon

0xf0c2,	// (0x0007787b) list_medium_line_t2_right_iconx2

0xf0c2,	// (0x0007787b) list_medium_line_t3

0xf0c2,	// (0x0007787b) list_medium_line_t3_g2

0xf0c2,	// (0x0007787b) list_medium_line_t3_g3

0xf0c2,	// (0x0007787b) list_medium_line_t3_right_iconx2

0xd866,	// (0x0007601f) list_medium_line_t4_g4

0xd86f,	// (0x00076028) list_medium_line_x2

0xd86f,	// (0x00076028) list_medium_line_x2_t2_g2

0xd86f,	// (0x00076028) list_medium_line_x2_t2_g3

0xd86f,	// (0x00076028) list_medium_line_x2_t2_g4

0xd86f,	// (0x00076028) list_medium_line_x2_t3

0xd86f,	// (0x00076028) list_medium_line_x2_t3_g2

0xd86f,	// (0x00076028) list_medium_line_x2_t3_g3

0xd86f,	// (0x00076028) list_medium_line_x2_t3_g4

0xd86f,	// (0x00076028) list_medium_line_x2_t4_g2

0xd86f,	// (0x00076028) list_medium_line_x2_t4_g4

0xd878,	// (0x00076031) list_medium_line_x3

0xd878,	// (0x00076031) list_medium_line_x3_t4

0xd878,	// (0x00076031) list_medium_line_x3_t4_g4

0xd866,	// (0x0007601f) list_medium_line_x4_t4

0xd866,	// (0x0007601f) list_medium_line_x4_t4_g7

0xd866,	// (0x0007601f) list_medium_line_x4_t5

0xd881,	// (0x0007603a) list_single_fs_dyc_pane_ParamLimits

0xd881,	// (0x0007603a) list_single_fs_dyc_pane

0xb866,	// (0x0007401f) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x4_t4_g7_g1

0xdd71,	// (0x0007652a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd71,	// (0x0007652a) list_medium_line_x4_t4_g7_g2

0xdd7d,	// (0x00076536) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd7d,	// (0x00076536) list_medium_line_x4_t4_g7_g3

0xdd8c,	// (0x00076545) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd8c,	// (0x00076545) list_medium_line_x4_t4_g7_g4

0xdd98,	// (0x00076551) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdd98,	// (0x00076551) list_medium_line_x4_t4_g7_g5

0xdda7,	// (0x00076560) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdda7,	// (0x00076560) list_medium_line_x4_t4_g7_g6

0xddb6,	// (0x0007656f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddb6,	// (0x0007656f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x000783bb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x000783bb) list_medium_line_x4_t4_g7_g

0xddc2,	// (0x0007657b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddc2,	// (0x0007657b) list_medium_line_x4_t4_g7_t1

0xddd7,	// (0x00076590) list_medium_line_x4_t4_g7_t2_ParamLimits

0xddd7,	// (0x00076590) list_medium_line_x4_t4_g7_t2

0xddec,	// (0x000765a5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xddec,	// (0x000765a5) list_medium_line_x4_t4_g7_t3

0xde01,	// (0x000765ba) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde01,	// (0x000765ba) list_medium_line_x4_t4_g7_t4

0xde13,	// (0x000765cc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde13,	// (0x000765cc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x000783ca) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x000783ca) list_medium_line_x4_t4_g7_t

0xde25,	// (0x000765de) list_single_dyc_row_pane_ParamLimits

0xde25,	// (0x000765de) list_single_dyc_row_pane

0xa0a9,	// (0x00072862) call5_gesture_pane_ParamLimits

0xa0a9,	// (0x00072862) call5_gesture_pane

0xa0f1,	// (0x000728aa) call5_windows_pane_ParamLimits

0xa0f1,	// (0x000728aa) call5_windows_pane

0xa18a,	// (0x00072943) call5_swipe_1_pane_cp_ParamLimits

0xa18a,	// (0x00072943) call5_swipe_1_pane_cp

0xa196,	// (0x0007294f) call5_swipe_2_pane_cp_ParamLimits

0xa196,	// (0x0007294f) call5_swipe_2_pane_cp

0x11c0,	// (0x00069979) call5_image_pane_cp

0xa1a2,	// (0x0007295b) popup_call5_audio_first_window_cp_ParamLimits

0xa1a2,	// (0x0007295b) popup_call5_audio_first_window_cp

0xe417,	// (0x00076bd0) call5_swipe_1_pane_g1_cp_ParamLimits

0xe417,	// (0x00076bd0) call5_swipe_1_pane_g1_cp

0xe457,	// (0x00076c10) call5_swipe_1_pane_g2_cp

0xe430,	// (0x00076be9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe430,	// (0x00076be9) call5_swipe_1_pane_t1_cp

0xe417,	// (0x00076bd0) call5_swipe_2_pane_g1_cp_ParamLimits

0xe417,	// (0x00076bd0) call5_swipe_2_pane_g1_cp

0xe45f,	// (0x00076c18) call5_swipe_2_pane_g2_cp

0xe467,	// (0x00076c20) call5_swipe_2_pane_t1_cp_ParamLimits

0xe467,	// (0x00076c20) call5_swipe_2_pane_t1_cp

0x1547,	// (0x00069d00) main_sp_fs_email_pane

0xe47c,	// (0x00076c35) main_sp_fs_listscroll_pane_te

0xa1ae,	// (0x00072967) popup_sp_fs_action_menu_pane_ParamLimits

0xa1ae,	// (0x00072967) popup_sp_fs_action_menu_pane

0xc90c,	// (0x000750c5) bg_sp_fs_ctrlbar_pane_g1

0xe485,	// (0x00076c3e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe48e,	// (0x00076c47) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe497,	// (0x00076c50) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc90c,	// (0x000750c5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x000784b3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6f9,	// (0x00074eb2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6f9,	// (0x00074eb2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4a0,	// (0x00076c59) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4a0,	// (0x00076c59) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1575,	// (0x00069d2e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1575,	// (0x00069d2e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x000784bc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x000784bc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4ac,	// (0x00076c65) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4ac,	// (0x00076c65) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe4c6,	// (0x00076c7f) list_medium_line_t2_right_icon_g1

0xe4ce,	// (0x00076c87) list_medium_line_t2_right_icon_t1

0x28cf,	// (0x0006b088) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x000784c1) list_medium_line_t2_right_icon_t

0xc4d1,	// (0x00074c8a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc4d1,	// (0x00074c8a) bg_sp_fs_ctrlbar_pane

0xa227,	// (0x000729e0) main_sp_fs_ctrlbar_button_pane_cp01

0xa22f,	// (0x000729e8) main_sp_fs_ctrlbar_ddmenu_pane

0xe516,	// (0x00076ccf) main_sp_fs_ctrlbar_pane_g1

0xe522,	// (0x00076cdb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x000784c6) main_sp_fs_ctrlbar_pane_g

0xe52e,	// (0x00076ce7) main_sp_fs_ctrlbar_pane_t1

0x28dd,	// (0x0006b096) main_sp_fs_ctrlbar_pane

0x28fe,	// (0x0006b0b7) main_sp_fs_listscroll_pane_te_cp01

0x291e,	// (0x0006b0d7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x291e,	// (0x0006b0d7) popup_sp_fs_action_menu_pane_cp01

0x1547,	// (0x00069d00) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1547,	// (0x00069d00) bg_sp_fs_highlight_list_pane_cp01

0x2943,	// (0x0006b0fc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2943,	// (0x0006b0fc) sp_fs_action_menu_list_gene_pane_g1

0xe543,	// (0x00076cfc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe543,	// (0x00076cfc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x000784cb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x000784cb) sp_fs_action_menu_list_gene_pane_g

0x2952,	// (0x0006b10b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2952,	// (0x0006b10b) sp_fs_action_menu_list_gene_pane_t1

0xa239,	// (0x000729f2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa239,	// (0x000729f2) sp_fs_action_menu_list_gene_pane

0xe550,	// (0x00076d09) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe550,	// (0x00076d09) popup_sp_fs_action_menu_bg_pane

0xa256,	// (0x00072a0f) sp_fs_action_menu_list_pane_ParamLimits

0xa256,	// (0x00072a0f) sp_fs_action_menu_list_pane

0xe55e,	// (0x00076d17) sp_fs_scroll_pane_cp01_ParamLimits

0xe55e,	// (0x00076d17) sp_fs_scroll_pane_cp01

0x296a,	// (0x0006b123) list_medium_line_plain_t2_t1

0x297a,	// (0x0006b133) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x000784d0) list_medium_line_plain_t2_t

0x2988,	// (0x0006b141) list_medium_line_plain_t3_t1

0x2998,	// (0x0006b151) list_medium_line_plain_t3_t2

0x29a6,	// (0x0006b15f) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x000784d5) list_medium_line_plain_t3_t

0xb866,	// (0x0007401f) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t2_g2_g1

0xb87e,	// (0x00074037) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00077a23) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00077a23) list_medium_line_x2_t2_g2_g

0xbe9f,	// (0x00074658) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbe9f,	// (0x00074658) list_medium_line_x2_t2_g2_t1

0xb89f,	// (0x00074058) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x000784dc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x000784dc) list_medium_line_x2_t2_g2_t

0xb866,	// (0x0007401f) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t4_g2_g1

0xe584,	// (0x00076d3d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe584,	// (0x00076d3d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x000784e1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x000784e1) list_medium_line_x2_t4_g2_g

0x29b4,	// (0x0006b16d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x29b4,	// (0x0006b16d) list_medium_line_x2_t4_g2_t1

0x29ce,	// (0x0006b187) list_medium_line_x2_t4_g2_t2_ParamLimits

0x29ce,	// (0x0006b187) list_medium_line_x2_t4_g2_t2

0x29e3,	// (0x0006b19c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x29e3,	// (0x0006b19c) list_medium_line_x2_t4_g2_t3

0xb89f,	// (0x00074058) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x000784e6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x000784e6) list_medium_line_x2_t4_g2_t

0xe596,	// (0x00076d4f) list_medium_line_t3_right_iconx2_g1

0xe4c6,	// (0x00076c7f) list_medium_line_t3_right_iconx2_g2

0x29f8,	// (0x0006b1b1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x000784ef) list_medium_line_t3_right_iconx2_g

0x2a00,	// (0x0006b1b9) list_medium_line_t3_right_iconx2_t1

0x2a10,	// (0x0006b1c9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x000784f6) list_medium_line_t3_right_iconx2_t

0xb866,	// (0x0007401f) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x3_t4_g4_g1

0xb872,	// (0x0007402b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x3_t4_g4_g2

0xb8e8,	// (0x000740a1) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb8e8,	// (0x000740a1) list_medium_line_x3_t4_g4_g3

0xe59e,	// (0x00076d57) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe59e,	// (0x00076d57) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x000784fb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x000784fb) list_medium_line_x3_t4_g4_g

0x2697,	// (0x0006ae50) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2697,	// (0x0006ae50) list_medium_line_x3_t4_g4_t1

0x26ae,	// (0x0006ae67) list_medium_line_x3_t4_g4_t2_ParamLimits

0x26ae,	// (0x0006ae67) list_medium_line_x3_t4_g4_t2

0xe5aa,	// (0x00076d63) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe5aa,	// (0x00076d63) list_medium_line_x3_t4_g4_t3

0xe5bf,	// (0x00076d78) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe5bf,	// (0x00076d78) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x00078504) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x00078504) list_medium_line_x3_t4_g4_t

0x2a1e,	// (0x0006b1d7) list_single_dyc_row_text_pane_t1_ParamLimits

0x2a1e,	// (0x0006b1d7) list_single_dyc_row_text_pane_t1

0x2a55,	// (0x0006b20e) list_single_dyc_row_text_pane_t2_ParamLimits

0x2a55,	// (0x0006b20e) list_single_dyc_row_text_pane_t2

0xe5dc,	// (0x00076d95) list_single_dyc_row_text_pane_t3_ParamLimits

0xe5dc,	// (0x00076d95) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x0007850d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x0007850d) list_single_dyc_row_text_pane_t

0xe5ee,	// (0x00076da7) list_single_dyc_row_pane_g1_ParamLimits

0xe5ee,	// (0x00076da7) list_single_dyc_row_pane_g1

0xe5fa,	// (0x00076db3) list_single_dyc_row_pane_g2_ParamLimits

0xe5fa,	// (0x00076db3) list_single_dyc_row_pane_g2

0xe606,	// (0x00076dbf) list_single_dyc_row_pane_g3_ParamLimits

0xe606,	// (0x00076dbf) list_single_dyc_row_pane_g3

0xe612,	// (0x00076dcb) list_single_dyc_row_pane_g4_ParamLimits

0xe612,	// (0x00076dcb) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x00078514) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x00078514) list_single_dyc_row_pane_g

0xe61e,	// (0x00076dd7) list_single_dyc_row_text_pane_ParamLimits

0xe61e,	// (0x00076dd7) list_single_dyc_row_text_pane

0xad8c,	// (0x00073545) bg_sp_fs_scroll_pane

0xe63d,	// (0x00076df6) thumb_sp_fs_scroll_pane

0xb866,	// (0x0007401f) list_medium_line_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_g1

0xbe9f,	// (0x00074658) list_medium_line_t1_ParamLimits

0xbe9f,	// (0x00074658) list_medium_line_t1

0xb866,	// (0x0007401f) list_medium_line_x2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_g1

0xb872,	// (0x0007402b) list_medium_line_x2_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x000781eb) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x000781eb) list_medium_line_x2_g

0xe646,	// (0x00076dff) list_medium_line_x2_t1_ParamLimits

0xe646,	// (0x00076dff) list_medium_line_x2_t1

0xb866,	// (0x0007401f) list_medium_line_x3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x3_g1

0xb872,	// (0x0007402b) list_medium_line_x3_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x000781eb) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x000781eb) list_medium_line_x3_g

0xe646,	// (0x00076dff) list_medium_line_x3_t1_ParamLimits

0xe646,	// (0x00076dff) list_medium_line_x3_t1

0xe65c,	// (0x00076e15) thumb_sp_fs_scroll_pane_g1

0xe665,	// (0x00076e1e) thumb_sp_fs_scroll_pane_g2

0xe66e,	// (0x00076e27) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0007851d) thumb_sp_fs_scroll_pane_g

0xe65c,	// (0x00076e15) bg_sp_fs_scroll_pane_g1

0xe665,	// (0x00076e1e) bg_sp_fs_scroll_pane_g2

0xe66e,	// (0x00076e27) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0007851d) bg_sp_fs_scroll_pane_g

0xb866,	// (0x0007401f) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_x2_t3_g4_g1

0xb8dc,	// (0x00074095) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb8dc,	// (0x00074095) list_medium_line_x2_t3_g4_g2

0xb872,	// (0x0007402b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_x2_t3_g4_g3

0xb87e,	// (0x00074037) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb87e,	// (0x00074037) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00077a9f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00077a9f) list_medium_line_x2_t3_g4_g

0x2aaf,	// (0x0006b268) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2aaf,	// (0x0006b268) list_medium_line_x2_t3_g4_t1

0x2ac5,	// (0x0006b27e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2ac5,	// (0x0006b27e) list_medium_line_x2_t3_g4_t2

0xb89f,	// (0x00074058) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb89f,	// (0x00074058) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x00078524) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x00078524) list_medium_line_x2_t3_g4_t

0xb866,	// (0x0007401f) list_medium_line_g2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_g2_g1

0xb872,	// (0x0007402b) list_medium_line_g2_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x000781eb) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x000781eb) list_medium_line_g2_g

0xbc01,	// (0x000743ba) list_medium_line_g2_t1_ParamLimits

0xbc01,	// (0x000743ba) list_medium_line_g2_t1

0xb866,	// (0x0007401f) list_medium_line_t3_g2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t3_g2_g1

0xb872,	// (0x0007402b) list_medium_line_t3_g2_g2_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x000781eb) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x000781eb) list_medium_line_t3_g2_g

0x2ade,	// (0x0006b297) list_medium_line_t3_g2_t1_ParamLimits

0x2ade,	// (0x0006b297) list_medium_line_t3_g2_t1

0x2af5,	// (0x0006b2ae) list_medium_line_t3_g2_t2_ParamLimits

0x2af5,	// (0x0006b2ae) list_medium_line_t3_g2_t2

0x2b0a,	// (0x0006b2c3) list_medium_line_t3_g2_t3_ParamLimits

0x2b0a,	// (0x0006b2c3) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x0007852b) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x0007852b) list_medium_line_t3_g2_t

0xe4c6,	// (0x00076c7f) list_medium_line_right_icon_g1

0xe677,	// (0x00076e30) list_medium_line_right_icon_t1

0xb866,	// (0x0007401f) list_medium_line_t2_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t2_g1

0xe685,	// (0x00076e3e) list_medium_line_t2_t1_ParamLimits

0xe685,	// (0x00076e3e) list_medium_line_t2_t1

0x2b1f,	// (0x0006b2d8) list_medium_line_t2_t2_ParamLimits

0x2b1f,	// (0x0006b2d8) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x00078532) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x00078532) list_medium_line_t2_t

0xb866,	// (0x0007401f) list_medium_line_t3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t3_g1

0x2b34,	// (0x0006b2ed) list_medium_line_t3_t1_ParamLimits

0x2b34,	// (0x0006b2ed) list_medium_line_t3_t1

0x2b4b,	// (0x0006b304) list_medium_line_t3_t2_ParamLimits

0x2b4b,	// (0x0006b304) list_medium_line_t3_t2

0x2b60,	// (0x0006b319) list_medium_line_t3_t3_ParamLimits

0x2b60,	// (0x0006b319) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x00078537) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x00078537) list_medium_line_t3_t

0xb866,	// (0x0007401f) list_medium_line_g3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_g3_g1

0xb8dc,	// (0x00074095) list_medium_line_g3_g2_ParamLimits

0xb8dc,	// (0x00074095) list_medium_line_g3_g2

0xb872,	// (0x0007402b) list_medium_line_g3_g3_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x0007853e) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x0007853e) list_medium_line_g3_g

0xbbec,	// (0x000743a5) list_medium_line_g3_t1_ParamLimits

0xbbec,	// (0x000743a5) list_medium_line_g3_t1

0xb866,	// (0x0007401f) list_medium_line_t2_g3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t2_g3_g1

0xb8dc,	// (0x00074095) list_medium_line_t2_g3_g2_ParamLimits

0xb8dc,	// (0x00074095) list_medium_line_t2_g3_g2

0xb872,	// (0x0007402b) list_medium_line_t2_g3_g3_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x0007853e) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x0007853e) list_medium_line_t2_g3_g

0x2b72,	// (0x0006b32b) list_medium_line_t2_g3_t1_ParamLimits

0x2b72,	// (0x0006b32b) list_medium_line_t2_g3_t1

0x2b89,	// (0x0006b342) list_medium_line_t2_g3_t2_ParamLimits

0x2b89,	// (0x0006b342) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x00078545) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x00078545) list_medium_line_t2_g3_t

0xb866,	// (0x0007401f) list_medium_line_t3_g3_g1_ParamLimits

0xb866,	// (0x0007401f) list_medium_line_t3_g3_g1

0xb8dc,	// (0x00074095) list_medium_line_t3_g3_g2_ParamLimits

0xb8dc,	// (0x00074095) list_medium_line_t3_g3_g2

0xb872,	// (0x0007402b) list_medium_line_t3_g3_g3_ParamLimits

0xb872,	// (0x0007402b) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x0007853e) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x0007853e) list_medium_line_t3_g3_g

0x2b9e,	// (0x0006b357) list_medium_line_t3_g3_t1_ParamLimits

0x2b9e,	// (0x0006b357) list_medium_line_t3_g3_t1

0x2bb2,	// (0x0006b36b) list_medium_line_t3_g3_t2_ParamLimits

0x2bb2,	// (0x0006b36b) list_medium_line_t3_g3_t2

0x2bc4,	// (0x0006b37d) list_medium_line_t3_g3_t3_ParamLimits

0x2bc4,	// (0x0006b37d) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x0007854a) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x0007854a) list_medium_line_t3_g3_t

0xe596,	// (0x00076d4f) list_medium_line_right_iconx2_g1

0xe4c6,	// (0x00076c7f) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x00078551) list_medium_line_right_iconx2_g

0xe69f,	// (0x00076e58) list_medium_line_right_iconx2_t1

0xe596,	// (0x00076d4f) list_medium_line_t2_right_iconx2_g1

0xe4c6,	// (0x00076c7f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x00078551) list_medium_line_t2_right_iconx2_g

0x2bd6,	// (0x0006b38f) list_medium_line_t2_right_iconx2_t1

0x2be6,	// (0x0006b39f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x00078556) list_medium_line_t2_right_iconx2_t

0xd525,	// (0x00075cde) list_medium_line_x4_t4_t1

0x2bf4,	// (0x0006b3ad) list_medium_line_x4_t4_t2

0x2c04,	// (0x0006b3bd) list_medium_line_x4_t4_t3

0x2c14,	// (0x0006b3cd) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x0007855b) list_medium_line_x4_t4_t

0xa2ad,	// (0x00072a66) tport_appsw_pane_ParamLimits

0xa2ad,	// (0x00072a66) tport_appsw_pane

0xa2be,	// (0x00072a77) tport_contact_pane_ParamLimits

0xa2be,	// (0x00072a77) tport_contact_pane

0xa2d3,	// (0x00072a8c) tport_listscroll_pane_ParamLimits

0xa2d3,	// (0x00072a8c) tport_listscroll_pane

0xa2ec,	// (0x00072aa5) cell_tport_appsw_pane_ParamLimits

0xa2ec,	// (0x00072aa5) cell_tport_appsw_pane

0xd27e,	// (0x00075a37) tport_appsw_pane_g1_ParamLimits

0xd27e,	// (0x00075a37) tport_appsw_pane_g1

0xe6ad,	// (0x00076e66) tport_contact_pane_g1

0xe6b6,	// (0x00076e6f) tport_contact_pane_t1

0xe6c4,	// (0x00076e7d) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x00078564) tport_contact_pane_t

0xe6d2,	// (0x00076e8b) list_tport_pane

0xb6a1,	// (0x00073e5a) scroll_pane_cp_030

0xe6e3,	// (0x00076e9c) cell_tport_appsw_pane_g1

0xe6f3,	// (0x00076eac) cell_tport_appsw_pane_t1

0xad8c,	// (0x00073545) grid_highlight_pane_cp019

0xa322,	// (0x00072adb) list_tport_double_graphic_pane_ParamLimits

0xa322,	// (0x00072adb) list_tport_double_graphic_pane

0x1547,	// (0x00069d00) list_highlight_pane_cp023_ParamLimits

0x1547,	// (0x00069d00) list_highlight_pane_cp023

0xa32f,	// (0x00072ae8) list_tport_double_graphic_pane_g1_ParamLimits

0xa32f,	// (0x00072ae8) list_tport_double_graphic_pane_g1

0xa33c,	// (0x00072af5) list_tport_double_graphic_pane_t1_ParamLimits

0xa33c,	// (0x00072af5) list_tport_double_graphic_pane_t1

0xa351,	// (0x00072b0a) list_tport_double_graphic_pane_t2_ParamLimits

0xa351,	// (0x00072b0a) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x00078570) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x00078570) list_tport_double_graphic_pane_t

0xad8c,	// (0x00073545) main_cale_note_pane

0x8884,	// (0x0007103d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8884,	// (0x0007103d) cell_vitu2_function_top_wide_pane_cp01

0x9e15,	// (0x000725ce) wait_bar_pane_cp05_ParamLimits

0xad8c,	// (0x00073545) listscroll_cmail_pane

0xe701,	// (0x00076eba) list_cmail_pane

0xa363,	// (0x00072b1c) list_cmail_body_pane

0xa363,	// (0x00072b1c) list_single_cmail_header_caption_pane

0xa379,	// (0x00072b32) list_single_cmail_header_detail_pane_ParamLimits

0xa379,	// (0x00072b32) list_single_cmail_header_detail_pane

0xe71d,	// (0x00076ed6) list_single_cmail_header_caption_pane_t1

0x2c24,	// (0x0006b3dd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2c24,	// (0x0006b3dd) list_single_cmail_header_detail_pane_g1

0xf0d7,	// (0x00077890) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0d7,	// (0x00077890) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x00078575) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x00078575) list_single_cmail_header_detail_pane_g

0xe740,	// (0x00076ef9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe740,	// (0x00076ef9) list_single_cmail_header_detail_pane_t1

0xe772,	// (0x00076f2b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe772,	// (0x00076f2b) list_single_cmail_header_editor_pane_bg

0xe784,	// (0x00076f3d) list_cmail_body_pane_g1

0xe78d,	// (0x00076f46) list_cmail_body_pane_t1

0xd2d6,	// (0x00075a8f) list_single_cmail_header_editor_pane_bg_g1

0xbb0a,	// (0x000742c3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2e6,	// (0x00075a9f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2de,	// (0x00075a97) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd533,	// (0x00075cec) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd306,	// (0x00075abf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2f6,	// (0x00075aaf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2fe,	// (0x00075ab7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xbaea,	// (0x000742a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa3a1,	// (0x00072b5a) calenote_gesture_pane_ParamLimits

0xa3a1,	// (0x00072b5a) calenote_gesture_pane

0xa3bd,	// (0x00072b76) calenote_window_pane_ParamLimits

0xa3bd,	// (0x00072b76) calenote_window_pane

0xe79b,	// (0x00076f54) popup_note_window_cp01

0xa3d9,	// (0x00072b92) calenote_swipe_1_pane_ParamLimits

0xa3d9,	// (0x00072b92) calenote_swipe_1_pane

0xa196,	// (0x0007294f) calenote_swipe_2_pane_ParamLimits

0xa196,	// (0x0007294f) calenote_swipe_2_pane

0xe417,	// (0x00076bd0) calenote_swipe_1_pane_g1_ParamLimits

0xe417,	// (0x00076bd0) calenote_swipe_1_pane_g1

0xe424,	// (0x00076bdd) calenote_swipe_1_pane_g2_ParamLimits

0xe424,	// (0x00076bdd) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x000784a9) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x000784a9) calenote_swipe_1_pane_g

0xe7ad,	// (0x00076f66) calenote_swipe_1_pane_t1_ParamLimits

0xe7ad,	// (0x00076f66) calenote_swipe_1_pane_t1

0xe417,	// (0x00076bd0) calenote_swipe_2_pane_g1_ParamLimits

0xe417,	// (0x00076bd0) calenote_swipe_2_pane_g1

0xe7cc,	// (0x00076f85) calenote_swipe_2_pane_g2_ParamLimits

0xe7cc,	// (0x00076f85) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x00078581) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x00078581) calenote_swipe_2_pane_g

0xe7d8,	// (0x00076f91) calenote_swipe_2_pane_t1_ParamLimits

0xe7d8,	// (0x00076f91) calenote_swipe_2_pane_t1

0xad8c,	// (0x00073545) main_mup_navstr_pane

0x7677,	// (0x0006fe30) main_mup3_pane_t7_ParamLimits

0x7677,	// (0x0006fe30) main_mup3_pane_t7

0xed9d,	// (0x00077556) main_mp4_pane_g6_ParamLimits

0xed9d,	// (0x00077556) main_mp4_pane_g6

0xef37,	// (0x000776f0) main_image3_pane_t4_ParamLimits

0xef37,	// (0x000776f0) main_image3_pane_t4

0xa3ee,	// (0x00072ba7) popup_navstr_preview_pane_ParamLimits

0xa3ee,	// (0x00072ba7) popup_navstr_preview_pane

0xa3fe,	// (0x00072bb7) scroll_navstr_pane_ParamLimits

0xa3fe,	// (0x00072bb7) scroll_navstr_pane

0xad8c,	// (0x00073545) bg_popup_preview_window_pane_cp04

0xe7ff,	// (0x00076fb8) popup_navstr_preview_pane_t1

0xa412,	// (0x00072bcb) scroll_navstr_pane_g1_ParamLimits

0xa412,	// (0x00072bcb) scroll_navstr_pane_g1

0xa426,	// (0x00072bdf) scroll_navstr_pane_t1_ParamLimits

0xa426,	// (0x00072bdf) scroll_navstr_pane_t1

0xe7a4,	// (0x00076f5d) bg_button_pane_cp014

0xe7a4,	// (0x00076f5d) bg_button_pane_cp030

0x2875,	// (0x0006b02e) list_double_fisheye_pane_g4_ParamLimits

0x2875,	// (0x0006b02e) list_double_fisheye_pane_g4

0x2881,	// (0x0006b03a) list_double_fisheye_pane_g5_ParamLimits

0x2881,	// (0x0006b03a) list_double_fisheye_pane_g5

0xe711,	// (0x00076eca) sp_fs_scroll_pane_cp03

0xe516,	// (0x00076ccf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe522,	// (0x00076cdb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x000784c6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe52e,	// (0x00076ce7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe709,	// (0x00076ec2) sp_fs_scroll_pane_cp02

0xb6fb,	// (0x00073eb4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb6fb,	// (0x00073eb4) popup_sp_fs_calendar_preview_list_single_pane

0xad8c,	// (0x00073545) main_cam6_pano_pane

0x1547,	// (0x00069d00) main_mup3_pane_ParamLimits

0xad8c,	// (0x00073545) main_phacti_pane

0x9d08,	// (0x000724c1) bg_button_pane_cp11

0x9d20,	// (0x000724d9) main_mobtv_info_pane_g2_ParamLimits

0x9d20,	// (0x000724d9) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x00078426) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x00078426) main_mobtv_info_pane_g

0x9ed3,	// (0x0007268c) sc_clock_pane_t5_ParamLimits

0x9ed3,	// (0x0007268c) sc_clock_pane_t5

0x9f46,	// (0x000726ff) main_radioblah_pane_g1_ParamLimits

0xe351,	// (0x00076b0a) main_radioblah_pane_t3_ParamLimits

0xe351,	// (0x00076b0a) main_radioblah_pane_t3

0xe369,	// (0x00076b22) main_radioblah_pane_t4_ParamLimits

0xe369,	// (0x00076b22) main_radioblah_pane_t4

0x9f6e,	// (0x00072727) main_radioblah_text_pane_ParamLimits

0x9f6e,	// (0x00072727) main_radioblah_text_pane

0x9f80,	// (0x00072739) main_radioblah_info_pane_g1_ParamLimits

0xa013,	// (0x000727cc) main_radioblah_info_pane_t4_ParamLimits

0xa013,	// (0x000727cc) main_radioblah_info_pane_t4

0x1547,	// (0x00069d00) main_sp_fs_calendar_pane

0xa43c,	// (0x00072bf5) main_phacti_pane_g1

0xa444,	// (0x00072bfd) phacti_note_pane_ParamLimits

0xa444,	// (0x00072bfd) phacti_note_pane

0xe816,	// (0x00076fcf) phacti_term_pane_ParamLimits

0xe816,	// (0x00076fcf) phacti_term_pane

0xe82b,	// (0x00076fe4) phacti_note_pane_t1_ParamLimits

0xe82b,	// (0x00076fe4) phacti_note_pane_t1

0xe842,	// (0x00076ffb) phacti_term_pane_g1

0xe84a,	// (0x00077003) phacti_term_pane_t1_ParamLimits

0xe84a,	// (0x00077003) phacti_term_pane_t1

0xe874,	// (0x0007702d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe87c,	// (0x00077035) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x0007858b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe884,	// (0x0007703d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe884,	// (0x0007703d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe89a,	// (0x00077053) aid_popup_sp_fs_bg_corner_pane

0xc90c,	// (0x000750c5) popup_sp_fs_calendar_preview_bg_pane_g1

0xad8c,	// (0x00073545) popup_sp_fs_calendar_preview_bg_pane

0xe8a2,	// (0x0007705b) popup_sp_fs_calendar_preview_list_pane

0x1547,	// (0x00069d00) bg_main_sp_fs_cale_pane_ParamLimits

0x1547,	// (0x00069d00) bg_main_sp_fs_cale_pane

0xe8aa,	// (0x00077063) listscroll_cale_mrui_pane_ParamLimits

0xe8aa,	// (0x00077063) listscroll_cale_mrui_pane

0xd346,	// (0x00075aff) listscroll_sp_fs_schedule_track_pane

0xe8be,	// (0x00077077) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8be,	// (0x00077077) main_sp_fs_ctrlbar_pane_cp01

0xe8cf,	// (0x00077088) main_sp_fs_ribbon_pane

0xe8d7,	// (0x00077090) popup_sp_fs_cale_preview_window

0xa493,	// (0x00072c4c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa493,	// (0x00072c4c) list_single_sp_fs_schedule_track_pane

0x1547,	// (0x00069d00) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1547,	// (0x00069d00) bg_sp_fs_highlight_list_pane_cp03

0xa4a6,	// (0x00072c5f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa4a6,	// (0x00072c5f) list_single_sp_fs_schedule_track_pane_g1

0xa4b2,	// (0x00072c6b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa4b2,	// (0x00072c6b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x00078590) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x00078590) list_single_sp_fs_schedule_track_pane_g

0xa4be,	// (0x00072c77) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa4be,	// (0x00072c77) list_single_sp_fs_schedule_track_pane_t1

0xa4d8,	// (0x00072c91) sp_fs_schedule_track_pane_ParamLimits

0xa4d8,	// (0x00072c91) sp_fs_schedule_track_pane

0xe8e9,	// (0x000770a2) sp_fs_schedule_track_pane_g1

0xe8f1,	// (0x000770aa) sp_fs_schedule_track_pane_g2

0xe8f9,	// (0x000770b2) sp_fs_schedule_track_pane_g3

0xe901,	// (0x000770ba) sp_fs_schedule_track_pane_g4

0xe909,	// (0x000770c2) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x00078595) sp_fs_schedule_track_pane_g

0xd2d6,	// (0x00075a8f) bg_sp_fs_schedule_viewer_highlight_g1

0xbb0a,	// (0x000742c3) bg_sp_fs_schedule_viewer_highlight_g2

0xd2de,	// (0x00075a97) bg_sp_fs_schedule_viewer_highlight_g3

0xd2e6,	// (0x00075a9f) bg_sp_fs_schedule_viewer_highlight_g4

0xd533,	// (0x00075cec) bg_sp_fs_schedule_viewer_highlight_g5

0xd2f6,	// (0x00075aaf) bg_sp_fs_schedule_viewer_highlight_g6

0xd2fe,	// (0x00075ab7) bg_sp_fs_schedule_viewer_highlight_g7

0xd306,	// (0x00075abf) bg_sp_fs_schedule_viewer_highlight_g8

0xbaea,	// (0x000742a3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x000785a0) bg_sp_fs_schedule_viewer_highlight_g

0xad8c,	// (0x00073545) bg_main_sp_fs_ribbon_pane

0xa4e9,	// (0x00072ca2) main_sp_fs_ribbon_pane_g1

0xe911,	// (0x000770ca) main_sp_fs_ribbon_pane_t1

0xa4f2,	// (0x00072cab) main_sp_fs_ribbon_pane_t2

0xe920,	// (0x000770d9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x000785b3) main_sp_fs_ribbon_pane_t

0xe92f,	// (0x000770e8) main_sp_fs_ribbon_scheduler_pane

0xe937,	// (0x000770f0) bg_main_sp_fs_ribbon_pane_g1

0xe940,	// (0x000770f9) bg_main_sp_fs_ribbon_pane_g2

0xe949,	// (0x00077102) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x000785ba) bg_main_sp_fs_ribbon_pane_g

0xe951,	// (0x0007710a) main_sp_fs_ribbon_scheduler_pane_g1

0xe95a,	// (0x00077113) main_sp_fs_ribbon_scheduler_pane_g2

0xe963,	// (0x0007711c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x000785c1) main_sp_fs_ribbon_scheduler_pane_g

0xe3c3,	// (0x00076b7c) list_cale_mrui_pane

0xe96c,	// (0x00077125) sp_fs_scroll_pane_cp07_ParamLimits

0xe96c,	// (0x00077125) sp_fs_scroll_pane_cp07

0xa501,	// (0x00072cba) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa501,	// (0x00072cba) bg_sp_fs_schedule_viewer_highlight

0xe981,	// (0x0007713a) list_single_sp_fs_schedule_track_pane_cp01

0xe989,	// (0x00077142) list_sp_fs_schedule_track_pane

0xe991,	// (0x0007714a) sp_fs_scroll_pane_cp06_ParamLimits

0xe991,	// (0x0007714a) sp_fs_scroll_pane_cp06

0xc90c,	// (0x000750c5) bgmain_sp_fs_calendar_pane_g1

0x2c5e,	// (0x0006b417) list_single_cale_mrui_pane_ParamLimits

0x2c5e,	// (0x0006b417) list_single_cale_mrui_pane

0xe9a3,	// (0x0007715c) list_single_cale_mrui_row_pane_ParamLimits

0xe9a3,	// (0x0007715c) list_single_cale_mrui_row_pane

0xe9b0,	// (0x00077169) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9b0,	// (0x00077169) list_single_cale_mrui_row_pane_g1

0xe9e8,	// (0x000771a1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9e8,	// (0x000771a1) list_single_cale_mrui_row_pane_t1

0x2c81,	// (0x0006b43a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2c81,	// (0x0006b43a) list_single_cale_mrui_row_pane_t2

0xe9fa,	// (0x000771b3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9fa,	// (0x000771b3) list_single_cale_mrui_row_pane_t3

0xea29,	// (0x000771e2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea29,	// (0x000771e2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x000785cd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x000785cd) list_single_cale_mrui_row_pane_t

0x2ce7,	// (0x0006b4a0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x2ce7,	// (0x0006b4a0) list_single_cmail_header_editor_pane_bg_cp01

0x2d0b,	// (0x0006b4c4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2d0b,	// (0x0006b4c4) list_single_cmail_header_editor_pane_bg_cp02

0xa511,	// (0x00072cca) main_radioblah_text_pane_t1_ParamLimits

0xa511,	// (0x00072cca) main_radioblah_text_pane_t1

0x00fd,	// (0x000688b6) cam6_indi_pane_cp01

0x0105,	// (0x000688be) cam6_mode_pane_cp01

0x010d,	// (0x000688c6) cam6_pano_pane

0x0116,	// (0x000688cf) cam6_zoom_pane_cp01

0x011e,	// (0x000688d7) cam6_pano_image_pane

0x0127,	// (0x000688e0) cam6_pano_pane_g1

0xe0cf,	// (0x00076888) cam6_pano_pane_g2

0x0130,	// (0x000688e9) cam6_pano_pane_g3

0x0139,	// (0x000688f2) cam6_pano_pane_g4

0xce2a,	// (0x000755e3) cam6_pano_pane_g5

0x0142,	// (0x000688fb) cam6_pano_pane_g6

0x014a,	// (0x00068903) cam6_pano_pane_g7

0x0152,	// (0x0006890b) cam6_pano_pane_g8

0x015b,	// (0x00068914) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x000785d6) cam6_pano_pane_g

0xad8c,	// (0x00073545) main_browser_tag_pane

0xe7f7,	// (0x00076fb0) grid_navstr_albumart_pane

0x0164,	// (0x0006891d) cell_navstr_albumart_pane_ParamLimits

0x0164,	// (0x0006891d) cell_navstr_albumart_pane

0x1321,	// (0x00069ada) cell_navstr_albumart_pane_g1

0xc2ae,	// (0x00074a67) cell_navstr_albumart_pane_g2

0xc2be,	// (0x00074a77) cell_navstr_albumart_pane_g3

0xc2b6,	// (0x00074a6f) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x000785e9) cell_navstr_albumart_pane_g

0xa52a,	// (0x00072ce3) bt_list_pane_ParamLimits

0xa52a,	// (0x00072ce3) bt_list_pane

0xa53d,	// (0x00072cf6) bt_list_pane_t1

0xa54c,	// (0x00072d05) bt_list_pane_t2

0x0001,

0xfe39,	// (0x000785f2) bt_list_pane_t

0xad8c,	// (0x00073545) main_cale_prevew_pane

0xa55b,	// (0x00072d14) popup_cale_preview_window_ParamLimits

0xa55b,	// (0x00072d14) popup_cale_preview_window

0x1547,	// (0x00069d00) bg_popup_preview_window_pane_cp05_ParamLimits

0x1547,	// (0x00069d00) bg_popup_preview_window_pane_cp05

0x01c3,	// (0x0006897c) list_cale_preview_pane_ParamLimits

0x01c3,	// (0x0006897c) list_cale_preview_pane

0xa570,	// (0x00072d29) list_double_cale_preview_pane_ParamLimits

0xa570,	// (0x00072d29) list_double_cale_preview_pane

0xa581,	// (0x00072d3a) list_single_cale_preview_pane_ParamLimits

0xa581,	// (0x00072d3a) list_single_cale_preview_pane

0x0211,	// (0x000689ca) list_single_cale_preview_pane_g1

0x0219,	// (0x000689d2) list_single_cale_preview_pane_t1_ParamLimits

0x0219,	// (0x000689d2) list_single_cale_preview_pane_t1

0xa595,	// (0x00072d4e) list_double_cale_preview_pane_g1

0xa59d,	// (0x00072d56) list_double_cale_preview_pane_t1_ParamLimits

0xa59d,	// (0x00072d56) list_double_cale_preview_pane_t1

0xa5b2,	// (0x00072d6b) list_double_cale_preview_pane_t2_ParamLimits

0xa5b2,	// (0x00072d6b) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x000785f7) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x000785f7) list_double_cale_preview_pane_t

0xad8c,	// (0x00073545) main_ezdial_pane

0x1547,	// (0x00069d00) main_sp_fs_email_pane_ParamLimits

0xa1de,	// (0x00072997) cmail_ddmenu_btn01_pane_ParamLimits

0xa1de,	// (0x00072997) cmail_ddmenu_btn01_pane

0xa1f1,	// (0x000729aa) cmail_ddmenu_btn02_pane_ParamLimits

0xa1f1,	// (0x000729aa) cmail_ddmenu_btn02_pane

0xa214,	// (0x000729cd) cmail_ddmenu_btn03_pane_ParamLimits

0xa214,	// (0x000729cd) cmail_ddmenu_btn03_pane

0x28dd,	// (0x0006b096) main_sp_fs_ctrlbar_pane_ParamLimits

0x28fe,	// (0x0006b0b7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa363,	// (0x00072b1c) list_cmail_body_pane_ParamLimits

0xe72b,	// (0x00076ee4) bg_button_pane_cp12

0xe733,	// (0x00076eec) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe733,	// (0x00076eec) list_single_cmail_header_detail_pane_g3

0x2c3a,	// (0x0006b3f3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2c3a,	// (0x0006b3f3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x0007857c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x0007857c) list_single_cmail_header_detail_pane_t

0xe85f,	// (0x00077018) phacti_term_pane_t2_ParamLimits

0xe85f,	// (0x00077018) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x00078586) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x00078586) phacti_term_pane_t

0x0246,	// (0x000689ff) aid_size_list_single_double

0xa5ca,	// (0x00072d83) popup_ezdial_listscroll_window

0xa5e0,	// (0x00072d99) popup_number_entry_window_cp01

0x11c0,	// (0x00069979) bg_popup_call_pane_cp09

0x0277,	// (0x00068a30) ezdial_list_pane

0x027f,	// (0x00068a38) scroll_pane_cp23

0xc4d1,	// (0x00074c8a) bg_button_pane_cp028_ParamLimits

0xc4d1,	// (0x00074c8a) bg_button_pane_cp028

0xa5ec,	// (0x00072da5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa5ec,	// (0x00072da5) cmail_ddmenu_btn01_pane_g1

0xa5fb,	// (0x00072db4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa5fb,	// (0x00072db4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x000785fc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x000785fc) cmail_ddmenu_btn01_pane_g

0x02a5,	// (0x00068a5e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x02a5,	// (0x00068a5e) cmail_ddmenu_btn01_pane_t1

0xc4d1,	// (0x00074c8a) bg_button_pane_cp029_ParamLimits

0xc4d1,	// (0x00074c8a) bg_button_pane_cp029

0xa60b,	// (0x00072dc4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa60b,	// (0x00072dc4) cmail_ddmenu_btn02_pane_g1

0xa626,	// (0x00072ddf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa626,	// (0x00072ddf) cmail_ddmenu_btn02_pane_t1

0x1547,	// (0x00069d00) bg_button_pane_cp031_ParamLimits

0x1547,	// (0x00069d00) bg_button_pane_cp031

0xa60b,	// (0x00072dc4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa60b,	// (0x00072dc4) cmail_ddmenu_btn03_pane_g1

0xa626,	// (0x00072ddf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa626,	// (0x00072ddf) cmail_ddmenu_btn03_pane_t1

0x8172,	// (0x0007092b) cell_dialer2_keypad_pane_t1_ParamLimits

0x818c,	// (0x00070945) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x818c,	// (0x00070945) cell_dialer2_keypad_pane_t1_copy1

0x9b8f,	// (0x00072348) ncimui_group_button_pane

0x1547,	// (0x00069d00) main_sp_fs_calendar_pane_ParamLimits

0xa363,	// (0x00072b1c) list_single_cmail_header_caption_pane_ParamLimits

0xd85d,	// (0x00076016) aid_recal_txt_sm_pane

0xad8c,	// (0x00073545) mian_recal_day_pane

0xe8d7,	// (0x00077090) popup_sp_fs_cale_preview_window_ParamLimits

0xad8c,	// (0x00073545) list_recal_day_pane

0xea61,	// (0x0007721a) list_single_recal_day_pane_ParamLimits

0xea61,	// (0x0007721a) list_single_recal_day_pane

0x02fa,	// (0x00068ab3) list_single_recal_day_pane_g1_ParamLimits

0x02fa,	// (0x00068ab3) list_single_recal_day_pane_g1

0xea73,	// (0x0007722c) list_single_recal_day_pane_g2_ParamLimits

0xea73,	// (0x0007722c) list_single_recal_day_pane_g2

0xea7f,	// (0x00077238) list_single_recal_day_pane_g3_ParamLimits

0xea7f,	// (0x00077238) list_single_recal_day_pane_g3

0x2d29,	// (0x0006b4e2) list_single_recal_day_pane_g4_ParamLimits

0x2d29,	// (0x0006b4e2) list_single_recal_day_pane_g4

0xea8b,	// (0x00077244) list_single_recal_day_pane_g5_ParamLimits

0xea8b,	// (0x00077244) list_single_recal_day_pane_g5

0xea97,	// (0x00077250) list_single_recal_day_pane_g6_ParamLimits

0xea97,	// (0x00077250) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x0007860b) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x0007860b) list_single_recal_day_pane_g

0xeaa3,	// (0x0007725c) list_single_recal_day_pane_t1

0xeab1,	// (0x0007726a) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x00078618) list_single_recal_day_pane_t

0xa64d,	// (0x00072e06) ncimui_query_button_pane_ParamLimits

0xa64d,	// (0x00072e06) ncimui_query_button_pane

0xa65d,	// (0x00072e16) ncimui_query_button_pane_t1_ParamLimits

0xa65d,	// (0x00072e16) ncimui_query_button_pane_t1

0x0329,	// (0x00068ae2) ncimui_query_button_pane_t2_ParamLimits

0x0329,	// (0x00068ae2) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x0007861d) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x0007861d) ncimui_query_button_pane_t

0xa670,	// (0x00072e29) query_button_pane_ParamLimits

0xa670,	// (0x00072e29) query_button_pane

0xad8c,	// (0x00073545) bg_button_pane_cp0028

0x0349,	// (0x00068b02) query_button_pane_t1

0x64aa,	// (0x0006ec63) main_tport_pane_ParamLimits

0xa272,	// (0x00072a2b) bg_popup_window_pane_cp01_ParamLimits

0xa272,	// (0x00072a2b) bg_popup_window_pane_cp01

0xa28a,	// (0x00072a43) heading_pane_cp08_ParamLimits

0xa28a,	// (0x00072a43) heading_pane_cp08

0xa29c,	// (0x00072a55) heading_pane_cp07_ParamLimits

0xa29c,	// (0x00072a55) heading_pane_cp07

0xe6e3,	// (0x00076e9c) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x00078569) cell_tport_appsw_pane_g

0xc0dd,	// (0x00074896) input_candi_list_open_g1

0xbd0a,	// (0x000744c3) list_cale_time_pane_g6_ParamLimits

0xbd0a,	// (0x000744c3) list_cale_time_pane_g6

0x7150,	// (0x0006f909) aid_size_touch_calib_1_ParamLimits

0x7150,	// (0x0006f909) aid_size_touch_calib_1

0x715c,	// (0x0006f915) aid_size_touch_calib_2_ParamLimits

0x715c,	// (0x0006f915) aid_size_touch_calib_2

0x7170,	// (0x0006f929) aid_size_touch_calib_3_ParamLimits

0x7170,	// (0x0006f929) aid_size_touch_calib_3

0x7188,	// (0x0006f941) aid_size_touch_calib_4_ParamLimits

0x7188,	// (0x0006f941) aid_size_touch_calib_4

0x719a,	// (0x0006f953) main_touch_calib_button_group_pane_ParamLimits

0x719a,	// (0x0006f953) main_touch_calib_button_group_pane

0x71b1,	// (0x0006f96a) main_touch_calib_pane_g1_ParamLimits

0x71bd,	// (0x0006f976) main_touch_calib_pane_g2_ParamLimits

0x71c9,	// (0x0006f982) main_touch_calib_pane_g3_ParamLimits

0x71d5,	// (0x0006f98e) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x00077f41) main_touch_calib_pane_g_ParamLimits

0x71e1,	// (0x0006f99a) main_touch_calib_pane_t1_ParamLimits

0x71f9,	// (0x0006f9b2) main_touch_calib_pane_t2_ParamLimits

0x7211,	// (0x0006f9ca) main_touch_calib_pane_t3_ParamLimits

0x7223,	// (0x0006f9dc) main_touch_calib_pane_t4_ParamLimits

0x7235,	// (0x0006f9ee) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x00077f4a) main_touch_calib_pane_t_ParamLimits

0xcc55,	// (0x0007540e) list_single_fp_cale_pane_g3_ParamLimits

0xcc55,	// (0x0007540e) list_single_fp_cale_pane_g3

0x1547,	// (0x00069d00) bg_button_pane_cp012_ParamLimits

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp03_ParamLimits

0x9014,	// (0x000717cd) cell_vitu2_function_top_pane_g1_ParamLimits

0x1547,	// (0x00069d00) bg_vkb2_func_pane_cp04_ParamLimits

0x9b31,	// (0x000722ea) main_ncimui_button_group_pane_ParamLimits

0x9b31,	// (0x000722ea) main_ncimui_button_group_pane

0x9b7d,	// (0x00072336) main_ncimui_pane_t3_ParamLimits

0x9b7d,	// (0x00072336) main_ncimui_pane_t3

0xe80d,	// (0x00076fc6) phacti_button_group_pane

0x0246,	// (0x000689ff) aid_size_list_single_double_ParamLimits

0xa5ca,	// (0x00072d83) popup_ezdial_listscroll_window_ParamLimits

0xa5e0,	// (0x00072d99) popup_number_entry_window_cp01_ParamLimits

0xa682,	// (0x00072e3b) phacti_button_pane_ParamLimits

0xa682,	// (0x00072e3b) phacti_button_pane

0xad8c,	// (0x00073545) bg_button_pane_cp14

0x0366,	// (0x00068b1f) phacti_button_pane_t1

0xa691,	// (0x00072e4a) main_touch_calib_button_pane_ParamLimits

0xa691,	// (0x00072e4a) main_touch_calib_button_pane

0xb544,	// (0x00073cfd) bg_button_pane_cp18_ParamLimits

0xb544,	// (0x00073cfd) bg_button_pane_cp18

0x0384,	// (0x00068b3d) main_touch_calib_button_pane_t1_ParamLimits

0x0384,	// (0x00068b3d) main_touch_calib_button_pane_t1

0x039a,	// (0x00068b53) main_touch_calib_button_pane_t2_ParamLimits

0x039a,	// (0x00068b53) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x00078622) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x00078622) main_touch_calib_button_pane_t

0xad8c,	// (0x00073545) cell_ncimui_button_pane

0xad8c,	// (0x00073545) bg_button_pane_cp032

0x03b8,	// (0x00068b71) cell_ncimui_button_pane_t1

0xef17,	// (0x000776d0) image3_infobar_pane_ParamLimits

0xef17,	// (0x000776d0) image3_infobar_pane

0x9efb,	// (0x000726b4) fs_bigclock_status_pane_ParamLimits

0x9efb,	// (0x000726b4) fs_bigclock_status_pane

0x9f08,	// (0x000726c1) main_fs_bigclock_clock_pane_ParamLimits

0x9f08,	// (0x000726c1) main_fs_bigclock_clock_pane

0x9f17,	// (0x000726d0) main_fs_bigclock_indi_pane_ParamLimits

0x9f17,	// (0x000726d0) main_fs_bigclock_indi_pane

0x9f2b,	// (0x000726e4) main_fs_bigclock_swipe_pane_ParamLimits

0x9f2b,	// (0x000726e4) main_fs_bigclock_swipe_pane

0xad8c,	// (0x00073545) main_fs_clock_dumped_data

0xe1dc,	// (0x00076995) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1dc,	// (0x00076995) list_single_fs_bigclock_indicator_pane_g1

0xe1f6,	// (0x000769af) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1f6,	// (0x000769af) list_single_fs_bigclock_indicator_pane_g2

0xe210,	// (0x000769c9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe210,	// (0x000769c9) list_single_fs_bigclock_indicator_pane_g3

0xe22a,	// (0x000769e3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe22a,	// (0x000769e3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x0007845a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x0007845a) list_single_fs_bigclock_indicator_pane_g

0xe24e,	// (0x00076a07) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe24e,	// (0x00076a07) list_single_fs_bigclock_indicator_pane_t1

0xe276,	// (0x00076a2f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe276,	// (0x00076a2f) list_single_fs_bigclock_indicator_pane_t2

0xe29e,	// (0x00076a57) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe29e,	// (0x00076a57) list_single_fs_bigclock_indicator_pane_t3

0xe2c6,	// (0x00076a7f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2c6,	// (0x00076a7f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x00078465) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x00078465) list_single_fs_bigclock_indicator_pane_t

0x03c6,	// (0x00068b7f) image3_infobar_fav_pane_ParamLimits

0x03c6,	// (0x00068b7f) image3_infobar_fav_pane

0x03d6,	// (0x00068b8f) image3_infobar_loc_pane_ParamLimits

0x03d6,	// (0x00068b8f) image3_infobar_loc_pane

0x03ea,	// (0x00068ba3) image3_infobar_time_pane_ParamLimits

0x03ea,	// (0x00068ba3) image3_infobar_time_pane

0xc90c,	// (0x000750c5) image3_infobar_time_pane_g1

0x03fa,	// (0x00068bb3) image3_infobar_time_pane_t1

0xc90c,	// (0x000750c5) image3_infobar_loc_pane_g1

0x0408,	// (0x00068bc1) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x00078627) image3_infobar_loc_pane_g

0x0410,	// (0x00068bc9) image3_infobar_loc_pane_t1

0xc90c,	// (0x000750c5) image3_infobar_fav_pane_g1

0x041e,	// (0x00068bd7) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x0007862c) image3_infobar_fav_pane_g

0x0426,	// (0x00068bdf) fs_bigclock_status_battery_pane

0x042f,	// (0x00068be8) fs_bigclock_status_signal_pane

0x0438,	// (0x00068bf1) fs_bigclock_status_title_pane

0x0441,	// (0x00068bfa) fs_bigclock_status_signal_pane_g1

0x044a,	// (0x00068c03) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x00078631) fs_bigclock_status_signal_pane_g

0x0452,	// (0x00068c0b) fs_bigclock_status_battery_pane_g1

0x045b,	// (0x00068c14) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x00078636) fs_bigclock_status_battery_pane_g

0x0463,	// (0x00068c1c) fs_bigclock_status_title_pane_t1

0xc90c,	// (0x000750c5) main_fs_bigclock_clock_pane_g1

0x0471,	// (0x00068c2a) main_fs_bigclock_clock_pane_g2

0x0471,	// (0x00068c2a) main_fs_bigclock_clock_pane_g3

0x0471,	// (0x00068c2a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x0007863b) main_fs_bigclock_clock_pane_g

0x0479,	// (0x00068c32) main_fs_bigclock_clock_pane_t1

0x0487,	// (0x00068c40) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x00078644) main_fs_bigclock_clock_pane_t

0x0496,	// (0x00068c4f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0496,	// (0x00068c4f) list_single_fs_bigclock_indicator_pane

0xa6a4,	// (0x00072e5d) list_single_fs_bigclock_pane_ParamLimits

0xa6a4,	// (0x00072e5d) list_single_fs_bigclock_pane

0x050e,	// (0x00068cc7) main_fs_bigclock_indicator_pane_t1

0x051d,	// (0x00068cd6) list_single_fs_bigclock_pane_g1

0x0525,	// (0x00068cde) list_single_fs_bigclock_pane_t1

0xc90c,	// (0x000750c5) main_fs_bigclock_swipe_pane_g1

0x0563,	// (0x00068d1c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x00078655) main_fs_bigclock_swipe_pane_g

0x056b,	// (0x00068d24) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x056b,	// (0x00068d24) main_fs_bigclock_swipe_pane_t1

0x48dd,	// (0x0006d096) call_type_pane_ParamLimits

0xad8c,	// (0x00073545) main_btmg_pane

0xe9dc,	// (0x00077195) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9dc,	// (0x00077195) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x000785c8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x000785c8) list_single_cale_mrui_row_pane_g

0x02ea,	// (0x00068aa3) list_recal_vselct_arw_lo_pane

0x02f2,	// (0x00068aab) list_recal_vselct_arw_up_pane

0xea58,	// (0x00077211) list_recal_vselct_pane

0x0588,	// (0x00068d41) btmg_button_pane

0xa704,	// (0x00072ebd) main_btmg_pane_g1

0xad8c,	// (0x00073545) bg_button_pane_cp044

0x0598,	// (0x00068d51) btmg_button_pane_t1

0xc4c9,	// (0x00074c82) aid_listscroll_gen

0x1547,	// (0x00069d00) main_cntbar_detail_pane

0xe701,	// (0x00076eba) list_cmail_folder_pane

0xe711,	// (0x00076eca) sp_fs_scroll_pane_cp03_ParamLimits

0x2d37,	// (0x0006b4f0) list_single_fs_dyc_pane_cp01_ParamLimits

0x2d37,	// (0x0006b4f0) list_single_fs_dyc_pane_cp01

0x05a6,	// (0x00068d5f) aid_size_cmail_indent

0xf0c2,	// (0x0007787b) list_single_dyc_row_pane_cp01

0xa734,	// (0x00072eed) cntbar_detail_list_pane_ParamLimits

0xa734,	// (0x00072eed) cntbar_detail_list_pane

0xa77a,	// (0x00072f33) main_cntbar_detail_cont_pane_ParamLimits

0xa77a,	// (0x00072f33) main_cntbar_detail_cont_pane

0xa78e,	// (0x00072f47) scroll_pane_cp032_ParamLimits

0xa78e,	// (0x00072f47) scroll_pane_cp032

0xa79a,	// (0x00072f53) cntbar_detail_list_event_pane_ParamLimits

0xa79a,	// (0x00072f53) cntbar_detail_list_event_pane

0xa744,	// (0x00072efd) cntbar_detail_list_shct_pane

0x0627,	// (0x00068de0) aid_list_gen

0xb6a1,	// (0x00073e5a) aid_scroll

0xd843,	// (0x00075ffc) aid_size_touch_scroll_bar

0xf0e3,	// (0x0007789c) aid_list_double

0xa7ab,	// (0x00072f64) aid_list_single

0xeabf,	// (0x00077278) aid_list_single_lg

0x2d4c,	// (0x0006b505) aid_list_z_g_a_sm

0xa7b4,	// (0x00072f6d) aid_list_z_g_d

0x2d54,	// (0x0006b50d) aid_txt_z_prm

0x2d62,	// (0x0006b51b) aid_txt_z_prm_cp01

0x2d70,	// (0x0006b529) aid_txt_z_sec

0xa7bc,	// (0x00072f75) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa7bc,	// (0x00072f75) main_cntbar_detail_cont_pane_g1

0xa7d0,	// (0x00072f89) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7d0,	// (0x00072f89) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x0007865a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x0007865a) main_cntbar_detail_cont_pane_g

0x0652,	// (0x00068e0b) main_cntbar_detail_cont_pane_t1

0x0660,	// (0x00068e19) main_cntbar_detail_cont_pane_t2

0x066e,	// (0x00068e27) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x0007865f) main_cntbar_detail_cont_pane_t

0xa7e0,	// (0x00072f99) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa7e0,	// (0x00072f99) cell_cntbar_detail_list_shct_pane

0x068e,	// (0x00068e47) cntbar_detail_list_shct_pane_g1

0x0697,	// (0x00068e50) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x00078666) cntbar_detail_list_shct_pane_g

0xa7f2,	// (0x00072fab) cntbar_detail_list_event_pane_g1_ParamLimits

0xa7f2,	// (0x00072fab) cntbar_detail_list_event_pane_g1

0xa7fe,	// (0x00072fb7) cntbar_detail_list_event_pane_g2_ParamLimits

0xa7fe,	// (0x00072fb7) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x0007866b) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x0007866b) cntbar_detail_list_event_pane_g

0xa86a,	// (0x00073023) cntbar_detail_list_event_pane_t1_ParamLimits

0xa86a,	// (0x00073023) cntbar_detail_list_event_pane_t1

0xa87f,	// (0x00073038) cntbar_detail_list_event_pane_t2_ParamLimits

0xa87f,	// (0x00073038) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x00078678) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x00078678) cntbar_detail_list_event_pane_t

0xc90c,	// (0x000750c5) cell_cntbar_detail_list_shct_pane_g1

0x117f,	// (0x00069938) navi_pane_mv_g3

0x1547,	// (0x00069d00) main_cntbar_detail_pane_ParamLimits

0xad8c,	// (0x00073545) main_notif_wgt_pane

0xed2b,	// (0x000774e4) aid_tch_main_mp4_pane_g4

0xef0f,	// (0x000776c8) popup_slider_window_cp02

0xea58,	// (0x00077211) list_recal_day_event_pane

0xa70c,	// (0x00072ec5) cntbar_detail_btn_pane_ParamLimits

0xa70c,	// (0x00072ec5) cntbar_detail_btn_pane

0xa71f,	// (0x00072ed8) cntbar_detail_btn_pane_cp01_ParamLimits

0xa71f,	// (0x00072ed8) cntbar_detail_btn_pane_cp01

0xa744,	// (0x00072efd) cntbar_detail_list_shct_pane_ParamLimits

0xa754,	// (0x00072f0d) cntbar_detail_pane_g1_ParamLimits

0xa754,	// (0x00072f0d) cntbar_detail_pane_g1

0xa764,	// (0x00072f1d) cntbar_detail_pane_t1_ParamLimits

0xa764,	// (0x00072f1d) cntbar_detail_pane_t1

0xa80a,	// (0x00072fc3) cntbar_detail_list_event_pane_g3_ParamLimits

0xa80a,	// (0x00072fc3) cntbar_detail_list_event_pane_g3

0xa822,	// (0x00072fdb) cntbar_detail_list_event_pane_g4_ParamLimits

0xa822,	// (0x00072fdb) cntbar_detail_list_event_pane_g4

0xa83a,	// (0x00072ff3) cntbar_detail_list_event_pane_g5_ParamLimits

0xa83a,	// (0x00072ff3) cntbar_detail_list_event_pane_g5

0xa852,	// (0x0007300b) cntbar_detail_list_event_pane_g6_ParamLimits

0xa852,	// (0x0007300b) cntbar_detail_list_event_pane_g6

0xa894,	// (0x0007304d) cntbar_detail_list_event_pane_t3_ParamLimits

0xa894,	// (0x0007304d) cntbar_detail_list_event_pane_t3

0xa8a6,	// (0x0007305f) popup_notif_wgt_window_ParamLimits

0xa8a6,	// (0x0007305f) popup_notif_wgt_window

0xa8bb,	// (0x00073074) popup_submenu_window_cp01_ParamLimits

0xa8bb,	// (0x00073074) popup_submenu_window_cp01

0x11c0,	// (0x00069979) bg_popup_window_pane_cp10

0x076e,	// (0x00068f27) listscroll_notif_wgt_pane

0x0776,	// (0x00068f2f) list_notif_wgt_window

0x077f,	// (0x00068f38) scroll_pane_cp033

0x0788,	// (0x00068f41) list_notif_wgt_row_pane_ParamLimits

0x0788,	// (0x00068f41) list_notif_wgt_row_pane

0x079a,	// (0x00068f53) aid_size_list_notif_wgt_del

0x07a3,	// (0x00068f5c) list_notif_wgt_row_pane_g1

0x07ab,	// (0x00068f64) list_notif_wgt_row_pane_g2

0x07b3,	// (0x00068f6c) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x0007867f) list_notif_wgt_row_pane_g

0x07bc,	// (0x00068f75) list_notif_wgt_row_pane_t1

0x07ca,	// (0x00068f83) list_notif_wgt_row_pane_t2

0x07d8,	// (0x00068f91) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x00078686) list_notif_wgt_row_pane_t

0xd53b,	// (0x00075cf4) list_recal_day_event_pane_g1

0x07e6,	// (0x00068f9f) list_recal_day_event_pane_t1

0xad8c,	// (0x00073545) bg_button_pane_cp045

0xa8cb,	// (0x00073084) cntbar_detail_btn_pane_t1

0xc4d1,	// (0x00074c8a) main_callh_pane_ParamLimits

0xc4d1,	// (0x00074c8a) main_callh_pane

0xad8c,	// (0x00073545) main_coverflow0_pane

0xad8c,	// (0x00073545) main_wgtman_pane

0x9f37,	// (0x000726f0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f37,	// (0x000726f0) main_fs_bigclock_unlock_btn_pane

0xe6db,	// (0x00076e94) bg_button_pane_cp16

0xe6eb,	// (0x00076ea4) cell_tport_appsw_pane_g3

0xa8d9,	// (0x00073092) cf0_flow_pane_ParamLimits

0xa8d9,	// (0x00073092) cf0_flow_pane

0x0812,	// (0x00068fcb) listscroll_cf0_pane

0x081b,	// (0x00068fd4) main_cf0_pane_g1

0xa8ee,	// (0x000730a7) main_cf0_pane_t1_ParamLimits

0xa8ee,	// (0x000730a7) main_cf0_pane_t1

0xa903,	// (0x000730bc) main_cf0_pane_t2_ParamLimits

0xa903,	// (0x000730bc) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x0007868d) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x0007868d) main_cf0_pane_t

0x0849,	// (0x00069002) scroll_pane_cp11

0xa918,	// (0x000730d1) cf0_flow_pane_g1

0xa920,	// (0x000730d9) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x00078692) cf0_flow_pane_g

0xa928,	// (0x000730e1) cf0_flow_pane_t1

0xad8c,	// (0x00073545) main_call6_pane

0xad8c,	// (0x00073545) main_calllock_pane

0xa936,	// (0x000730ef) call6_btn_grp_pane_ParamLimits

0xa936,	// (0x000730ef) call6_btn_grp_pane

0xa94c,	// (0x00073105) call6_pane_g1_ParamLimits

0xa94c,	// (0x00073105) call6_pane_g1

0xa95f,	// (0x00073118) popup_call6_1st_window_ParamLimits

0xa95f,	// (0x00073118) popup_call6_1st_window

0xa96e,	// (0x00073127) popup_call6_2nd_window_ParamLimits

0xa96e,	// (0x00073127) popup_call6_2nd_window

0xa97d,	// (0x00073136) cell_call6_btn_pane_ParamLimits

0xa97d,	// (0x00073136) cell_call6_btn_pane

0x11c0,	// (0x00069979) bg_popup_call2_in_pane_cp03

0x08b1,	// (0x0006906a) popup_call6_1st_window_g1

0x08b9,	// (0x00069072) popup_call6_1st_window_g2

0x08c1,	// (0x0006907a) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x00078697) popup_call6_1st_window_g

0x08c9,	// (0x00069082) popup_call6_1st_window_t1

0x08d8,	// (0x00069091) popup_call6_1st_window_t2

0x08e6,	// (0x0006909f) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x0007869e) popup_call6_1st_window_t

0x11c0,	// (0x00069979) bg_popup_call2_in_pane_cp04

0x08b1,	// (0x0006906a) popup_call6_2nd_window_g1

0x08b9,	// (0x00069072) popup_call6_2nd_window_g2

0x08c1,	// (0x0006907a) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x00078697) popup_call6_2nd_window_g

0x08c9,	// (0x00069082) popup_call6_2nd_window_t1

0xad8c,	// (0x00073545) bg_button_pane_cp15

0x08f4,	// (0x000690ad) cell_call6_btn_pane_g1

0x08fd,	// (0x000690b6) cell_call6_btn_pane_t1

0xa991,	// (0x0007314a) listscroll_wgtman_pane_ParamLimits

0xa991,	// (0x0007314a) listscroll_wgtman_pane

0xa9b0,	// (0x00073169) wgtman_btn_pane_ParamLimits

0xa9b0,	// (0x00073169) wgtman_btn_pane

0x1001,	// (0x000697ba) aid_scroll_copy1

0x0959,	// (0x00069112) list_wgtman_pane

0xa9f0,	// (0x000731a9) wgtman_btn_pane_g1_ParamLimits

0xa9f0,	// (0x000731a9) wgtman_btn_pane_g1

0xaa1c,	// (0x000731d5) wgtman_btn_pane_t1_ParamLimits

0xaa1c,	// (0x000731d5) wgtman_btn_pane_t1

0x09c2,	// (0x0006917b) wgtman_btn_pane_t2_ParamLimits

0x09c2,	// (0x0006917b) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x000786a5) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x000786a5) wgtman_btn_pane_t

0xaa59,	// (0x00073212) listrow_wgtman_pane_ParamLimits

0xaa59,	// (0x00073212) listrow_wgtman_pane

0xaa6a,	// (0x00073223) listrow_wgtman_pane_g1

0xaa73,	// (0x0007322c) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x000786aa) listrow_wgtman_pane_g

0x2d7e,	// (0x0006b537) listrow_wgtman_pane_t1

0x2d8c,	// (0x0006b545) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x000786af) listrow_wgtman_pane_t

0x2d9a,	// (0x0006b553) wait_bar_pane_cp09

0x09fb,	// (0x000691b4) main_calllock_btn_pane

0x0a03,	// (0x000691bc) main_calllock_pane_g1

0xad8c,	// (0x00073545) bg_button_pane_cp17

0x0a0c,	// (0x000691c5) main_calllock_btn_pane_g1

0x0a15,	// (0x000691ce) main_calllock_btn_pane_t1

0xad8c,	// (0x00073545) main_dialer3_pane

0xad8c,	// (0x00073545) main_fmrd2_pane

0xc90c,	// (0x000750c5) main_fs_bigclock_unlock_btn_pane_g1

0x0a2c,	// (0x000691e5) main_fs_bigclock_unlock_btn_pane_t1

0xaa7b,	// (0x00073234) area_fmrd2_info_pane_ParamLimits

0xaa7b,	// (0x00073234) area_fmrd2_info_pane

0xaa8a,	// (0x00073243) area_fmrd2_visual_pane_ParamLimits

0xaa8a,	// (0x00073243) area_fmrd2_visual_pane

0xaa98,	// (0x00073251) fmrd2_indi_pane_ParamLimits

0xaa98,	// (0x00073251) fmrd2_indi_pane

0xaaa5,	// (0x0007325e) area_fmrd2_visual_pane_g1

0xaaad,	// (0x00073266) area_fmrd2_visual_pane_t1

0xaabb,	// (0x00073274) area_fmrd2_visual_pane_t2

0xaac9,	// (0x00073282) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x000786b9) area_fmrd2_visual_pane_t

0xaad7,	// (0x00073290) area_fmrd2_info_pane_g1

0xaadf,	// (0x00073298) area_fmrd2_info_pane_t1

0xaaed,	// (0x000732a6) area_fmrd2_info_pane_t2

0xaafb,	// (0x000732b4) area_fmrd2_info_pane_t3

0xab09,	// (0x000732c2) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x000786c0) area_fmrd2_info_pane_t

0xab17,	// (0x000732d0) fmrd2_indi_pane_t1

0xab25,	// (0x000732de) fmrd2_indi_pane_t2

0xab33,	// (0x000732ec) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x000786c9) fmrd2_indi_pane_t

0xe239,	// (0x000769f2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe239,	// (0x000769f2) list_single_fs_bigclock_indicator_pane_g5

0xe2db,	// (0x00076a94) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2db,	// (0x00076a94) list_single_fs_bigclock_indicator_pane_t5

0xa458,	// (0x00072c11) aid_cell_bcale_month_pane_ParamLimits

0xa458,	// (0x00072c11) aid_cell_bcale_month_pane

0xa46a,	// (0x00072c23) bcale_month_pane_ParamLimits

0xa46a,	// (0x00072c23) bcale_month_pane

0xa47c,	// (0x00072c35) bcale_preview_pane_ParamLimits

0xa47c,	// (0x00072c35) bcale_preview_pane

0x0525,	// (0x00068cde) list_single_fs_bigclock_pane_t1_ParamLimits

0x053f,	// (0x00068cf8) list_single_fs_bigclock_pane_t2_ParamLimits

0x053f,	// (0x00068cf8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x00078650) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x00078650) list_single_fs_bigclock_pane_t

0x0a24,	// (0x000691dd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x000786b4) main_fs_bigclock_unlock_btn_pane_g

0xab41,	// (0x000732fa) aid_dia3_key_size_ParamLimits

0xab41,	// (0x000732fa) aid_dia3_key_size

0xab50,	// (0x00073309) aid_dia3_listrow_size_ParamLimits

0xab50,	// (0x00073309) aid_dia3_listrow_size

0xab63,	// (0x0007331c) dia3_keypad_fun_pane_ParamLimits

0xab63,	// (0x0007331c) dia3_keypad_fun_pane

0xab77,	// (0x00073330) dia3_keypad_num_pane_ParamLimits

0xab77,	// (0x00073330) dia3_keypad_num_pane

0xab88,	// (0x00073341) dia3_listscroll_pane_ParamLimits

0xab88,	// (0x00073341) dia3_listscroll_pane

0xab99,	// (0x00073352) dia3_numentry_pane_ParamLimits

0xab99,	// (0x00073352) dia3_numentry_pane

0x0b47,	// (0x00069300) dia3_list_pane

0x0b50,	// (0x00069309) scroll_pane_cp12

0xad8c,	// (0x00073545) bg_dia3_numentry_pane

0xabab,	// (0x00073364) dia3_numentry_pane_t1

0xabba,	// (0x00073373) cell_dia3_key_num_pane

0xabc2,	// (0x0007337b) cell_dia3_key0_fun_pane_ParamLimits

0xabc2,	// (0x0007337b) cell_dia3_key0_fun_pane

0xabd6,	// (0x0007338f) cell_dia3_key1_fun_pane_ParamLimits

0xabd6,	// (0x0007338f) cell_dia3_key1_fun_pane

0xabed,	// (0x000733a6) dia3_listrow_pane

0xdf3d,	// (0x000766f6) bg_dia3_numentry_pane_g1

0xad8c,	// (0x00073545) bg_button_pane_cp21

0x0b97,	// (0x00069350) cell_dia3_key_num_pane_t1

0x0ba5,	// (0x0006935e) cell_dia3_key_num_pane_t2

0x0bb4,	// (0x0006936d) cell_dia3_key_num_pane_t3

0x0bc3,	// (0x0006937c) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x000786d0) cell_dia3_key_num_pane_t

0xad8c,	// (0x00073545) bg_button_pane_cp19

0x0bd2,	// (0x0006938b) cell_dia3_key0_fun_pane_g1

0xad8c,	// (0x00073545) bg_button_pane_cp20

0xabff,	// (0x000733b8) cell_dia3_key1_fun_pane_g1

0xac07,	// (0x000733c0) area_left_week_number_pane

0xac10,	// (0x000733c9) area_top_day_name_pane

0xac19,	// (0x000733d2) frame_month_view_pane

0xac21,	// (0x000733da) grid_month_view_pane

0xac2b,	// (0x000733e4) cell_top_day_name_pane_ParamLimits

0xac2b,	// (0x000733e4) cell_top_day_name_pane

0xac41,	// (0x000733fa) cell_area_left_week_number_pane_ParamLimits

0xac41,	// (0x000733fa) cell_area_left_week_number_pane

0xac55,	// (0x0007340e) cell_month_view_pane_ParamLimits

0xac55,	// (0x0007340e) cell_month_view_pane

0x0c4b,	// (0x00069404) frm_month_g1

0xac70,	// (0x00073429) frm_month_g2

0xac78,	// (0x00073431) frm_month_g3

0xac80,	// (0x00073439) frm_month_g4

0xac88,	// (0x00073441) frm_month_g5

0xac90,	// (0x00073449) frm_month_g6

0xac98,	// (0x00073451) frm_month_g7

0x0c84,	// (0x0006943d) frm_month_g8

0xaca0,	// (0x00073459) frm_month_g9

0xaca9,	// (0x00073462) frm_month_g10

0xacb2,	// (0x0007346b) frm_month_g11

0xacbb,	// (0x00073474) frm_month_g12

0xacc4,	// (0x0007347d) frm_month_g13

0xaccd,	// (0x00073486) frm_month_g14

0xacd6,	// (0x0007348f) frm_month_g15

0xacdf,	// (0x00073498) frm_month_g16

0x000f,

0xff20,	// (0x000786d9) frm_month_g

0xace8,	// (0x000734a1) cell_top_day_name_pane_t1

0xacf7,	// (0x000734b0) cell_area_left_week_number_pane_g1

0xace8,	// (0x000734a1) cell_area_left_week_number_pane_t1

0xc90c,	// (0x000750c5) cell_month_view_pane_g1

0xacff,	// (0x000734b8) cell_month_view_pane_t1

0xad8c,	// (0x00073545) main_fps_pane

0xe4de,	// (0x00076c97) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe4de,	// (0x00076c97) cmail_ddmenu_btn02_pane_cp1

0xe4fa,	// (0x00076cb3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4fa,	// (0x00076cb3) cmail_ddmenu_btn02_pane_cp2

0xa61a,	// (0x00072dd3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa61a,	// (0x00072dd3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x00078601) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x00078601) cmail_ddmenu_btn02_pane_g

0xa63b,	// (0x00072df4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa63b,	// (0x00072df4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x00078606) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x00078606) cmail_ddmenu_btn02_pane_t

0xad0e,	// (0x000734c7) fps_text_pane_ParamLimits

0xad0e,	// (0x000734c7) fps_text_pane

0xad24,	// (0x000734dd) main_fps_pane_g1_ParamLimits

0xad24,	// (0x000734dd) main_fps_pane_g1

0xad3a,	// (0x000734f3) wait_bar_pane_cp010_ParamLimits

0xad3a,	// (0x000734f3) wait_bar_pane_cp010

0xad4b,	// (0x00073504) fps_text_pane_t1_ParamLimits

0xad4b,	// (0x00073504) fps_text_pane_t1

0x1581,	// (0x00069d3a) cam4_image_uncrop_pane_g1

0x158a,	// (0x00069d43) cam4_image_uncrop_pane_g2

0x85bd,	// (0x00070d76) cam4_image_uncrop_pane_g3

0x85c6,	// (0x00070d7f) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x000780d9) cam4_image_uncrop_pane_g

0xabed,	// (0x000733a6) dia3_listrow_pane_ParamLimits

0xad8c,	// (0x00073545) main_phob2_pane

0xa2fd,	// (0x00072ab6) cell_tport_appsw_pane_cp02_ParamLimits

0xa2fd,	// (0x00072ab6) cell_tport_appsw_pane_cp02

0xa30d,	// (0x00072ac6) cell_tport_appsw_pane_cp03_ParamLimits

0xa30d,	// (0x00072ac6) cell_tport_appsw_pane_cp03

0xad8c,	// (0x00073545) phob2_contact_card_pane

0xad8c,	// (0x00073545) phob2_listscroll_pane

0x0d30,	// (0x000694e9) phob2_list_pane

0x0d38,	// (0x000694f1) scroll_pane_cp034

0xad63,	// (0x0007351c) phob2_cc_data_pane_ParamLimits

0xad63,	// (0x0007351c) phob2_cc_data_pane

0xeac8,	// (0x00077281) phob2_cc_listscroll_pane_ParamLimits

0xeac8,	// (0x00077281) phob2_cc_listscroll_pane

0xeae4,	// (0x0007729d) list_double_large_graphic_phob2_pane_ParamLimits

0xeae4,	// (0x0007729d) list_double_large_graphic_phob2_pane

0xeaf6,	// (0x000772af) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeaf6,	// (0x000772af) list_double_large_graphic_phob2_pane_g1

0x2da2,	// (0x0006b55b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2da2,	// (0x0006b55b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x000786fa) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x000786fa) list_double_large_graphic_phob2_pane_g

0x2dae,	// (0x0006b567) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2dae,	// (0x0006b567) list_double_large_graphic_phob2_pane_t1

0x2dc3,	// (0x0006b57c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2dc3,	// (0x0006b57c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x000786ff) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x000786ff) list_double_large_graphic_phob2_pane_t

0xad8c,	// (0x00073545) list_highlight_pane_cp024

0x0d9c,	// (0x00069555) phob2_cc_button_pane

0xeb03,	// (0x000772bc) phob2_cc_data_pane_g1_ParamLimits

0xeb03,	// (0x000772bc) phob2_cc_data_pane_g1

0xeb18,	// (0x000772d1) phob2_cc_data_pane_g2_ParamLimits

0xeb18,	// (0x000772d1) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x00078704) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x00078704) phob2_cc_data_pane_g

0xeb2a,	// (0x000772e3) phob2_cc_data_pane_t1_ParamLimits

0xeb2a,	// (0x000772e3) phob2_cc_data_pane_t1

0xeb42,	// (0x000772fb) phob2_cc_data_pane_t2_ParamLimits

0xeb42,	// (0x000772fb) phob2_cc_data_pane_t2

0xeb5a,	// (0x00077313) phob2_cc_data_pane_t3_ParamLimits

0xeb5a,	// (0x00077313) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x00078709) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x00078709) phob2_cc_data_pane_t

0x0df2,	// (0x000695ab) phob2_cc_list_pane_ParamLimits

0x0df2,	// (0x000695ab) phob2_cc_list_pane

0xde5a,	// (0x00076613) scroll_pane_cp035_ParamLimits

0xde5a,	// (0x00076613) scroll_pane_cp035

0x1547,	// (0x00069d00) bg_button_pane_cp033

0x0dfe,	// (0x000695b7) phob2_cc_button_pane_g1

0x0e0a,	// (0x000695c3) phob2_cc_button_pane_t1

0x0e1f,	// (0x000695d8) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x00078710) phob2_cc_button_pane_t

0xeb72,	// (0x0007732b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeb72,	// (0x0007732b) list_double_large_graphic_phob2_cc_pane

0xeb84,	// (0x0007733d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeb84,	// (0x0007733d) list_double_large_graphic_phob2_cc_pane_g1

0xad80,	// (0x00073539) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad80,	// (0x00073539) list_double_large_graphic_phob2_cc_pane_g2

0x2dd5,	// (0x0006b58e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2dd5,	// (0x0006b58e) list_double_large_graphic_phob2_cc_pane_g3

0x2de1,	// (0x0006b59a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2de1,	// (0x0006b59a) list_double_large_graphic_phob2_cc_pane_g4

0x2ded,	// (0x0006b5a6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2ded,	// (0x0006b5a6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x00078715) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x00078715) list_double_large_graphic_phob2_cc_pane_g

0x2df9,	// (0x0006b5b2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2df9,	// (0x0006b5b2) list_double_large_graphic_phob2_cc_pane_t1

0x2e22,	// (0x0006b5db) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2e22,	// (0x0006b5db) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x00078720) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x00078720) list_double_large_graphic_phob2_cc_pane_t

0x0e6c,	// (0x00069625) list_highlight_pane_cp025_ParamLimits

0x0e6c,	// (0x00069625) list_highlight_pane_cp025

0x1547,	// (0x00069d00) bg_button_pane_cp033_ParamLimits

0x0dfe,	// (0x000695b7) phob2_cc_button_pane_g1_ParamLimits

0x0e0a,	// (0x000695c3) phob2_cc_button_pane_t1_ParamLimits

0x0e1f,	// (0x000695d8) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x00078710) phob2_cc_button_pane_t_ParamLimits

0x3036,	// (0x0006b7ef) popup_wgtman_window

0xdf5d,	// (0x00076716) scroll_pane_cp038

0xa9d2,	// (0x0007318b) wgtman_btn_pane_cp_01_ParamLimits

0xa9d2,	// (0x0007318b) wgtman_btn_pane_cp_01

0x0e7a,	// (0x00069633) wgtman_content_pane

0x0e83,	// (0x0006963c) wgtman_heading_pane

0xad8c,	// (0x00073545) bg_heading_pane_cp02

0x0e8c,	// (0x00069645) wgtman_heading_pane_g1

0x0e94,	// (0x0006964d) wgtman_heading_pane_t1

0x0ea2,	// (0x0006965b) scroll_pane_cp036

0x0eaa,	// (0x00069663) wgtman_list_pane

0x0eb2,	// (0x0006966b) wgtman_list_pane_t1_ParamLimits

0x0eb2,	// (0x0006966b) wgtman_list_pane_t1

0xef69,	// (0x00077722) cam4_grid_pane

0x26c3,	// (0x0006ae7c) bg_button_pane_cp015_ParamLimits

0x916a,	// (0x00071923) bg_button_pane_cp016_ParamLimits

0x917c,	// (0x00071935) bg_button_pane_cp017_ParamLimits

0x2701,	// (0x0006aeba) popup_vitu2_query_window_g3_ParamLimits

0x2701,	// (0x0006aeba) popup_vitu2_query_window_g3

0x277a,	// (0x0006af33) popup_vitu2_query_window_t6_ParamLimits

0x277a,	// (0x0006af33) popup_vitu2_query_window_t6

0x27a5,	// (0x0006af5e) popup_vitu2_query_window_t7_ParamLimits

0x27a5,	// (0x0006af5e) popup_vitu2_query_window_t7

0x1581,	// (0x00069d3a) cam4_grid_pane_g1

0x158a,	// (0x00069d43) cam4_grid_pane_g2

0x1593,	// (0x00069d4c) cam4_grid_pane_g3

0x159c,	// (0x00069d55) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x00078725) cam4_grid_pane_g

0x3c98,	// (0x0006c451) aid_placing_vt_slider_lsc_ParamLimits

0x3f08,	// (0x0006c6c1) vidtel_button_pane_ParamLimits

0x3f08,	// (0x0006c6c1) vidtel_button_pane

0xad8c,	// (0x00073545) bg_button_pane_cp034

0xeb90,	// (0x00077349) vidtel_button_pane_g1

0x15ad,	// (0x00069d66) vidtel_button_pane_t1

0xd51d,	// (0x00075cd6) aid_size_vtel_slider_touch

0xde5a,	// (0x00076613) scroll_pane_cp039

0xdf89,	// (0x00076742) ncim_query_button_pane_cp01_ParamLimits

0xdfa8,	// (0x00076761) ncimui_query_pane_g1_ParamLimits

0x1547,	// (0x00069d00) input_focus_pane_cp012_ParamLimits

0xdfcd,	// (0x00076786) ncim_query_entry_pane_t1_ParamLimits

0xde5a,	// (0x00076613) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
