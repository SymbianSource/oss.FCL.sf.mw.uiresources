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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000226a8 };

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
0x2ed1,	// (0x00025579) Screen

0x2edb,	// (0x00025583) application_window

0x2f34,	// (0x000255dc) area_bottom_pane_ParamLimits

0x2f34,	// (0x000255dc) area_bottom_pane

0x2f74,	// (0x0002561c) area_top_pane_ParamLimits

0x2f74,	// (0x0002561c) area_top_pane

0x2fc9,	// (0x00025671) call_video_uplink_pane_ParamLimits

0x2fc9,	// (0x00025671) call_video_uplink_pane

0x2ff9,	// (0x000256a1) main_pane_ParamLimits

0x2ff9,	// (0x000256a1) main_pane

0xc696,	// (0x0002ed3e) context_pane

0x66c5,	// (0x00028d6d) navi_pane

0x66ee,	// (0x00028d96) popup_cale_events_window_ParamLimits

0x66ee,	// (0x00028d96) popup_cale_events_window

0xc6a9,	// (0x0002ed51) popup_mup_playback_window

0x6706,	// (0x00028dae) signal_pane

0x3ae7,	// (0x0002618f) main_browser_pane

0xb157,	// (0x0002d7ff) main_burst_pane

0x310f,	// (0x000257b7) main_calc_pane

0xb157,	// (0x0002d7ff) main_cale_day_pane

0x3d04,	// (0x000263ac) main_cale_month_pane

0xb157,	// (0x0002d7ff) main_cale_week_pane

0xb157,	// (0x0002d7ff) main_call_pane

0x35d6,	// (0x00025c7e) main_call_poc_pane

0xb157,	// (0x0002d7ff) main_camera_pane

0xb157,	// (0x0002d7ff) main_chi_dic_pane

0xaf56,	// (0x0002d5fe) main_clock_pane

0x35d6,	// (0x00025c7e) main_fmradio_pane

0xb157,	// (0x0002d7ff) main_graph_messa_pane

0x35d6,	// (0x00025c7e) main_help_pane

0x3ae7,	// (0x0002618f) main_im_pane

0x3831,	// (0x00025ed9) main_image_pane_ParamLimits

0x3831,	// (0x00025ed9) main_image_pane

0x35d6,	// (0x00025c7e) main_location2_pane

0xb157,	// (0x0002d7ff) main_location_pane

0x35d6,	// (0x00025c7e) main_messa_pane

0x35d6,	// (0x00025c7e) main_mp2_pane

0xb157,	// (0x0002d7ff) main_mp_pane

0x35d6,	// (0x00025c7e) main_msg_pane

0x35d6,	// (0x00025c7e) main_mup_eq_pane

0x35d6,	// (0x00025c7e) main_mup_pane

0xb157,	// (0x0002d7ff) main_notes_pane

0x35d6,	// (0x00025c7e) main_pec_pane

0x35d6,	// (0x00025c7e) main_phob_pane

0x35d6,	// (0x00025c7e) main_pinb_pane

0x35d6,	// (0x00025c7e) main_postcard_pane

0x35d6,	// (0x00025c7e) main_qdial_pane

0xb157,	// (0x0002d7ff) main_skin_pane

0x35d6,	// (0x00025c7e) main_smil2_pane

0xb157,	// (0x0002d7ff) main_smil_pane

0xb157,	// (0x0002d7ff) main_video_pane

0xb157,	// (0x0002d7ff) main_video_tele_pane

0x3831,	// (0x00025ed9) main_viewer_pane_ParamLimits

0x3831,	// (0x00025ed9) main_viewer_pane

0xb157,	// (0x0002d7ff) main_vorec_pane

0x64a5,	// (0x00028b4d) popup_blid_sat_info_window_ParamLimits

0x64a5,	// (0x00028b4d) popup_blid_sat_info_window

0x64fb,	// (0x00028ba3) popup_dyc_status_message_window_ParamLimits

0x64fb,	// (0x00028ba3) popup_dyc_status_message_window

0x6511,	// (0x00028bb9) popup_grid_large_graphic_window_ParamLimits

0x6511,	// (0x00028bb9) popup_grid_large_graphic_window

0x65a7,	// (0x00028c4f) popup_loc_request_window_ParamLimits

0x65a7,	// (0x00028c4f) popup_loc_request_window

0x669f,	// (0x00028d47) popup_wml_address_window_ParamLimits

0x669f,	// (0x00028d47) popup_wml_address_window

0x62fb,	// (0x000289a3) call_muted_g1

0x6020,	// (0x000286c8) popup_call_audio_conf_window_ParamLimits

0x6020,	// (0x000286c8) popup_call_audio_conf_window

0x630b,	// (0x000289b3) popup_call_audio_first_window_ParamLimits

0x630b,	// (0x000289b3) popup_call_audio_first_window

0x6369,	// (0x00028a11) popup_call_audio_in_window_ParamLimits

0x6369,	// (0x00028a11) popup_call_audio_in_window

0x6395,	// (0x00028a3d) popup_call_audio_out_window_ParamLimits

0x6395,	// (0x00028a3d) popup_call_audio_out_window

0x63c3,	// (0x00028a6b) popup_call_audio_second_window_ParamLimits

0x63c3,	// (0x00028a6b) popup_call_audio_second_window

0x6409,	// (0x00028ab1) popup_call_audio_wait_window_ParamLimits

0x6409,	// (0x00028ab1) popup_call_audio_wait_window

0x643c,	// (0x00028ae4) popup_number_entry_window_ParamLimits

0x643c,	// (0x00028ae4) popup_number_entry_window

0x316d,	// (0x00025815) bg_popup_call_pane_cp05_ParamLimits

0x316d,	// (0x00025815) bg_popup_call_pane_cp05

0x318d,	// (0x00025835) popup_number_entry_window_t1

0x31a0,	// (0x00025848) popup_number_entry_window_t2

0x31b2,	// (0x0002585a) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00031794) popup_number_entry_window_t

0x31f8,	// (0x000258a0) text_title_cp2

0x320b,	// (0x000258b3) bg_popup_call_pane_cp_ParamLimits

0x320b,	// (0x000258b3) bg_popup_call_pane_cp

0x3219,	// (0x000258c1) call_thumbnail_pane

0x3221,	// (0x000258c9) popup_call_audio_in_window_g1_ParamLimits

0x3221,	// (0x000258c9) popup_call_audio_in_window_g1

0x322d,	// (0x000258d5) popup_call_audio_in_window_g2_ParamLimits

0x322d,	// (0x000258d5) popup_call_audio_in_window_g2

0x3239,	// (0x000258e1) popup_call_audio_in_window_g3_ParamLimits

0x3239,	// (0x000258e1) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0003179d) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0003179d) popup_call_audio_in_window_g

0x3245,	// (0x000258ed) popup_call_audio_in_window_t1_ParamLimits

0x3245,	// (0x000258ed) popup_call_audio_in_window_t1

0x3260,	// (0x00025908) popup_call_audio_in_window_t2_ParamLimits

0x3260,	// (0x00025908) popup_call_audio_in_window_t2

0x327b,	// (0x00025923) popup_call_audio_in_window_t3_ParamLimits

0x327b,	// (0x00025923) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000317a4) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000317a4) popup_call_audio_in_window_t

0x320b,	// (0x000258b3) bg_popup_call_pane_cp01_ParamLimits

0x320b,	// (0x000258b3) bg_popup_call_pane_cp01

0x3219,	// (0x000258c1) call_thumbnail_pane_cp02

0x328e,	// (0x00025936) call_type_pane_cp022

0x3296,	// (0x0002593e) popup_call_audio_out_window_g1_ParamLimits

0x3296,	// (0x0002593e) popup_call_audio_out_window_g1

0x32a8,	// (0x00025950) popup_call_audio_out_window_g2_ParamLimits

0x32a8,	// (0x00025950) popup_call_audio_out_window_g2

0x32b4,	// (0x0002595c) popup_call_audio_out_window_g3_ParamLimits

0x32b4,	// (0x0002595c) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000317ab) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000317ab) popup_call_audio_out_window_g

0x32c6,	// (0x0002596e) popup_call_audio_out_window_t1_ParamLimits

0x32c6,	// (0x0002596e) popup_call_audio_out_window_t1

0x32de,	// (0x00025986) popup_call_audio_out_window_t2_ParamLimits

0x32de,	// (0x00025986) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000317b2) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000317b2) popup_call_audio_out_window_t

0x32f3,	// (0x0002599b) bg_popup_call_pane_ParamLimits

0x32f3,	// (0x0002599b) bg_popup_call_pane

0x3377,	// (0x00025a1f) call_thumbnail_pane_cp_ParamLimits

0x3377,	// (0x00025a1f) call_thumbnail_pane_cp

0x339b,	// (0x00025a43) call_type_pane_cp01_ParamLimits

0x339b,	// (0x00025a43) call_type_pane_cp01

0x33df,	// (0x00025a87) popup_call_audio_first_window_g1_ParamLimits

0x33df,	// (0x00025a87) popup_call_audio_first_window_g1

0x342b,	// (0x00025ad3) popup_call_audio_first_window_g2_ParamLimits

0x342b,	// (0x00025ad3) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000317b7) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000317b7) popup_call_audio_first_window_g

0x346f,	// (0x00025b17) popup_call_audio_first_window_t1_ParamLimits

0x346f,	// (0x00025b17) popup_call_audio_first_window_t1

0x351b,	// (0x00025bc3) popup_call_audio_first_window_t4_ParamLimits

0x351b,	// (0x00025bc3) popup_call_audio_first_window_t4

0x35a7,	// (0x00025c4f) popup_call_audio_first_window_t5_ParamLimits

0x35a7,	// (0x00025c4f) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000317bc) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000317bc) popup_call_audio_first_window_t

0x35d6,	// (0x00025c7e) bg_popup_call_pane_cp02

0x35e0,	// (0x00025c88) call_type_pane_cp023

0x35e8,	// (0x00025c90) popup_call_audio_wait_window_g1

0x35f0,	// (0x00025c98) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000317c3) popup_call_audio_wait_window_g

0x35f8,	// (0x00025ca0) popup_call_audio_wait_window_t3

0x3606,	// (0x00025cae) bg_popup_call_pane_cp03_ParamLimits

0x3606,	// (0x00025cae) bg_popup_call_pane_cp03

0x3666,	// (0x00025d0e) call_thumbnail_pane_cp011_ParamLimits

0x3666,	// (0x00025d0e) call_thumbnail_pane_cp011

0x3672,	// (0x00025d1a) call_type_pane_cp034_ParamLimits

0x3672,	// (0x00025d1a) call_type_pane_cp034

0x36ae,	// (0x00025d56) popup_call_audio_second_window_g1_ParamLimits

0x36ae,	// (0x00025d56) popup_call_audio_second_window_g1

0x36ea,	// (0x00025d92) popup_call_audio_second_window_g2_ParamLimits

0x36ea,	// (0x00025d92) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000317c8) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000317c8) popup_call_audio_second_window_g

0x3726,	// (0x00025dce) popup_call_audio_second_window_t1_ParamLimits

0x3726,	// (0x00025dce) popup_call_audio_second_window_t1

0x37a7,	// (0x00025e4f) popup_call_audio_second_window_t2_ParamLimits

0x37a7,	// (0x00025e4f) popup_call_audio_second_window_t2

0x37dd,	// (0x00025e85) popup_call_audio_second_window_t3_ParamLimits

0x37dd,	// (0x00025e85) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000317cd) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000317cd) popup_call_audio_second_window_t

0x35d6,	// (0x00025c7e) bg_popup_call_pane_cp04

0x3813,	// (0x00025ebb) list_conf_pane

0x381b,	// (0x00025ec3) popup_call_audio_conf_window_t1

0x3829,	// (0x00025ed1) call_thumbnail_pane_g1

0x3831,	// (0x00025ed9) bg_pinb_pane_ParamLimits

0x3831,	// (0x00025ed9) bg_pinb_pane

0x383f,	// (0x00025ee7) find_pinb_pane

0x3848,	// (0x00025ef0) listscroll_pinb_pane_ParamLimits

0x3848,	// (0x00025ef0) listscroll_pinb_pane

0x3857,	// (0x00025eff) pinb_bg_pane_g1

0x3861,	// (0x00025f09) pinb_bg_pane_g2

0x386b,	// (0x00025f13) pinb_bg_pane_g3

0x3875,	// (0x00025f1d) pinb_bg_pane_g4

0x387f,	// (0x00025f27) pinb_bg_pane_g5

0x3889,	// (0x00025f31) pinb_bg_pane_g6

0x3892,	// (0x00025f3a) pinb_bg_pane_g7

0x389b,	// (0x00025f43) pinb_bg_pane_g8

0x38a6,	// (0x00025f4e) pinb_bg_pane_g9

0x38b0,	// (0x00025f58) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000317d4) pinb_bg_pane_g

0x38cb,	// (0x00025f73) grid_pinb_pane

0x38d4,	// (0x00025f7c) list_pinb_pane

0x38dd,	// (0x00025f85) scroll_pane_cp01_ParamLimits

0x38dd,	// (0x00025f85) scroll_pane_cp01

0x38ef,	// (0x00025f97) find_pinb_pane_g1_ParamLimits

0x38ef,	// (0x00025f97) find_pinb_pane_g1

0x3907,	// (0x00025faf) find_pinb_pane_t1

0x3919,	// (0x00025fc1) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000317ee) find_pinb_pane_t

0x392e,	// (0x00025fd6) input_focus_pane_cp01_ParamLimits

0x392e,	// (0x00025fd6) input_focus_pane_cp01

0x393a,	// (0x00025fe2) cell_pinb_pane_ParamLimits

0x393a,	// (0x00025fe2) cell_pinb_pane

0x3955,	// (0x00025ffd) cell_pinb_pane_g1_ParamLimits

0x3955,	// (0x00025ffd) cell_pinb_pane_g1

0x3965,	// (0x0002600d) cell_pinb_pane_g2_ParamLimits

0x3965,	// (0x0002600d) cell_pinb_pane_g2

0x3971,	// (0x00026019) cell_pinb_pane_g3_ParamLimits

0x3971,	// (0x00026019) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000317f3) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000317f3) cell_pinb_pane_g

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp01

0x397d,	// (0x00026025) list_pinb_item_pane_ParamLimits

0x397d,	// (0x00026025) list_pinb_item_pane

0x35d6,	// (0x00025c7e) list_highlight_pane_cp02

0x398f,	// (0x00026037) list_pinb_item_pane_g1_ParamLimits

0x398f,	// (0x00026037) list_pinb_item_pane_g1

0x399c,	// (0x00026044) list_pinb_item_pane_g2_ParamLimits

0x399c,	// (0x00026044) list_pinb_item_pane_g2

0x39a8,	// (0x00026050) list_pinb_item_pane_g3_ParamLimits

0x39a8,	// (0x00026050) list_pinb_item_pane_g3

0x39b9,	// (0x00026061) list_pinb_item_pane_g4_ParamLimits

0x39b9,	// (0x00026061) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000317fa) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000317fa) list_pinb_item_pane_g

0x39c5,	// (0x0002606d) list_pinb_item_pane_t1_ParamLimits

0x39c5,	// (0x0002606d) list_pinb_item_pane_t1

0x1e47,	// (0x000244ef) calc_display_pane

0x1e63,	// (0x0002450b) calc_paper_pane

0x1e84,	// (0x0002452c) grid_calc_pane

0x35d6,	// (0x00025c7e) bg_list_pane_cp01

0x39dc,	// (0x00026084) clock_g1

0x39e4,	// (0x0002608c) clock_g2

0x0001,

0xf15b,	// (0x00031803) clock_g

0x39ec,	// (0x00026094) clock_t1_ParamLimits

0x39ec,	// (0x00026094) clock_t1

0x3a01,	// (0x000260a9) clock_t2_ParamLimits

0x3a01,	// (0x000260a9) clock_t2

0x3a13,	// (0x000260bb) clock_t3_ParamLimits

0x3a13,	// (0x000260bb) clock_t3

0x3a25,	// (0x000260cd) clock_t4_ParamLimits

0x3a25,	// (0x000260cd) clock_t4

0x3a37,	// (0x000260df) clock_t5_ParamLimits

0x3a37,	// (0x000260df) clock_t5

0x3a4c,	// (0x000260f4) clock_t6_ParamLimits

0x3a4c,	// (0x000260f4) clock_t6

0x3a5e,	// (0x00026106) clock_t7_ParamLimits

0x3a5e,	// (0x00026106) clock_t7

0x3a70,	// (0x00026118) clock_t8_ParamLimits

0x3a70,	// (0x00026118) clock_t8

0x3a82,	// (0x0002612a) clock_t9_ParamLimits

0x3a82,	// (0x0002612a) clock_t9

0x0008,

0xf160,	// (0x00031808) clock_t_ParamLimits

0xf160,	// (0x00031808) clock_t

0x3a94,	// (0x0002613c) popup_clock_analogue_window_cp02

0x3a94,	// (0x0002613c) popup_clock_digital_window_cp01

0x3a9c,	// (0x00026144) listscroll_help_pane

0x35d6,	// (0x00025c7e) phob_pre_status_pane

0x3aa6,	// (0x0002614e) grid_qdial_pane

0x35d6,	// (0x00025c7e) listscroll_mce_pane

0x3ab0,	// (0x00026158) bg_notes_pane

0x3aba,	// (0x00026162) list_notes_pane

0x3ac4,	// (0x0002616c) scroll_pane_cp06

0x3acf,	// (0x00026177) bg_calc_paper_pane

0xa8ab,	// (0x0002cf53) list_calc_pane

0x3ae7,	// (0x0002618f) bg_calc_display_pane

0xa8c5,	// (0x0002cf6d) calc_display_pane_t1

0xa8da,	// (0x0002cf82) calc_display_pane_t2

0xa8ef,	// (0x0002cf97) calc_display_pane_t3

0x0002,

0xf173,	// (0x0003181b) calc_display_pane_t

0x1ea0,	// (0x00024548) cell_calc_pane_ParamLimits

0x1ea0,	// (0x00024548) cell_calc_pane

0x3af3,	// (0x0002619b) bg_calc_paper_pane_g1

0x3aff,	// (0x000261a7) bg_calc_paper_pane_g2

0x3b0b,	// (0x000261b3) bg_calc_paper_pane_g3

0x3b17,	// (0x000261bf) bg_calc_paper_pane_g4

0x3b23,	// (0x000261cb) bg_calc_paper_pane_g5

0x3b2f,	// (0x000261d7) bg_calc_paper_pane_g6

0x3b3e,	// (0x000261e6) bg_calc_paper_pane_g7

0x3b4d,	// (0x000261f5) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00031822) bg_calc_paper_pane_g

0x3b5c,	// (0x00026204) calc_bg_paper_pane_g9

0x3b6b,	// (0x00026213) list_calc_item_pane_ParamLimits

0x3b6b,	// (0x00026213) list_calc_item_pane

0x3b7f,	// (0x00026227) list_calc_item_pane_g1

0xa901,	// (0x0002cfa9) list_calc_item_pane_t1_ParamLimits

0xa901,	// (0x0002cfa9) list_calc_item_pane_t1

0x1ed3,	// (0x0002457b) list_calc_item_pane_t2_ParamLimits

0x1ed3,	// (0x0002457b) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00031833) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00031833) list_calc_item_pane_t

0x3b8c,	// (0x00026234) cell_calc_pane_g1

0x3b96,	// (0x0002623e) grid_highlight_pane_cp02

0x3bb8,	// (0x00026260) bg_calc_display_pane_g1

0xa913,	// (0x0002cfbb) bg_calc_display_pane_g2

0x3bc1,	// (0x00026269) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0003183d) bg_calc_display_pane_g

0x1f01,	// (0x000245a9) cell_qdial_pane_ParamLimits

0x1f01,	// (0x000245a9) cell_qdial_pane

0x3bca,	// (0x00026272) cell_qdial_pane_g1_ParamLimits

0x3bca,	// (0x00026272) cell_qdial_pane_g1

0x3be0,	// (0x00026288) cell_qdial_pane_g2_ParamLimits

0x3be0,	// (0x00026288) cell_qdial_pane_g2

0x3bf1,	// (0x00026299) cell_qdial_pane_g3_ParamLimits

0x3bf1,	// (0x00026299) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00031844) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00031844) cell_qdial_pane_g

0x3c13,	// (0x000262bb) cell_qdial_pane_t1_ParamLimits

0x3c13,	// (0x000262bb) cell_qdial_pane_t1

0x3c2b,	// (0x000262d3) cell_qdial_pane_t2_ParamLimits

0x3c2b,	// (0x000262d3) cell_qdial_pane_t2

0x3c3e,	// (0x000262e6) cell_qdial_pane_t3_ParamLimits

0x3c3e,	// (0x000262e6) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0003184d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0003184d) cell_qdial_pane_t

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp04

0x3c51,	// (0x000262f9) thumbnail_qdial_pane_ParamLimits

0x3c51,	// (0x000262f9) thumbnail_qdial_pane

0x3cad,	// (0x00026355) list_help_pane

0x3cb7,	// (0x0002635f) scroll_pane_cp02

0x3cc0,	// (0x00026368) help_list_pane_t1_ParamLimits

0x3cc0,	// (0x00026368) help_list_pane_t1

0xa91d,	// (0x0002cfc5) bg_notes_pane_g2

0xa925,	// (0x0002cfcd) bg_notes_pane_g3

0xa92d,	// (0x0002cfd5) notes_bg_pane_g1

0xa935,	// (0x0002cfdd) notes_bg_pane_g4

0xa93d,	// (0x0002cfe5) notes_bg_pane_g5

0xa945,	// (0x0002cfed) notes_bg_pane_g6

0xa94d,	// (0x0002cff5) notes_bg_pane_g7

0xa955,	// (0x0002cffd) notes_bg_pane_g8

0xa95d,	// (0x0002d005) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0003186b) notes_bg_pane_g

0xa965,	// (0x0002d00d) list_notes_text_pane_ParamLimits

0xa965,	// (0x0002d00d) list_notes_text_pane

0x3cdc,	// (0x00026384) list_notes_text_pane_g1

0x3ce5,	// (0x0002638d) list_notes_text_pane_t1

0x3d04,	// (0x000263ac) listscroll_cale_week_pane

0x3d2e,	// (0x000263d6) bg_cale_heading_pane

0x3d42,	// (0x000263ea) bg_cale_pane_cp01

0x3d5b,	// (0x00026403) cale_week_corner_pane

0x3d71,	// (0x00026419) cale_week_day_heading_pane

0x3d85,	// (0x0002642d) cale_week_scroll_pane_g1

0x3d96,	// (0x0002643e) cale_week_scroll_pane_g2

0x3da7,	// (0x0002644f) cale_week_scroll_pane_g3

0x3db8,	// (0x00026460) cale_week_scroll_pane_g4

0x3dc9,	// (0x00026471) cale_week_scroll_pane_g5

0x3dda,	// (0x00026482) cale_week_scroll_pane_g6

0x3deb,	// (0x00026493) cale_week_scroll_pane_g7

0x3dfc,	// (0x000264a4) cale_week_scroll_pane_g8

0x3e0f,	// (0x000264b7) cale_week_scroll_pane_g9

0x3e20,	// (0x000264c8) cale_week_scroll_pane_g10

0x3e31,	// (0x000264d9) cale_week_scroll_pane_g11

0x3e42,	// (0x000264ea) cale_week_scroll_pane_g12

0x3e53,	// (0x000264fb) cale_week_scroll_pane_g13

0x3e64,	// (0x0002650c) cale_week_scroll_pane_g14

0x3e75,	// (0x0002651d) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0003187a) cale_week_scroll_pane_g

0x3e86,	// (0x0002652e) cale_week_time_pane

0x3e99,	// (0x00026541) grid_cale_week_pane

0x3ebe,	// (0x00026566) scroll_pane_cp08

0x3ed8,	// (0x00026580) cell_cale_week_pane_ParamLimits

0x3ed8,	// (0x00026580) cell_cale_week_pane

0x3f14,	// (0x000265bc) cale_week_day_heading_pane_t1

0x3f3e,	// (0x000265e6) cale_week_day_heading_pane_t2

0x3f68,	// (0x00026610) cale_week_day_heading_pane_t3

0x3f92,	// (0x0002663a) cale_week_day_heading_pane_t4

0x3fbc,	// (0x00026664) cale_week_day_heading_pane_t5

0x3fe6,	// (0x0002668e) cale_week_day_heading_pane_t6

0x4010,	// (0x000266b8) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00031899) cale_week_day_heading_pane_t

0x403a,	// (0x000266e2) bg_cale_side_pane

0x1f13,	// (0x000245bb) cale_week_time_pane_t1

0x1f3f,	// (0x000245e7) cale_week_time_pane_t2

0x1f6b,	// (0x00024613) cale_week_time_pane_t3

0x1f97,	// (0x0002463f) cale_week_time_pane_t4

0x1fc3,	// (0x0002466b) cale_week_time_pane_t5

0x1fef,	// (0x00024697) cale_week_time_pane_t6

0x201b,	// (0x000246c3) cale_week_time_pane_t7

0x2047,	// (0x000246ef) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000318a8) cale_week_time_pane_t

0x4048,	// (0x000266f0) cell_cale_week_pane_g2

0x4061,	// (0x00026709) cell_cale_week_pane_g3_ParamLimits

0x4061,	// (0x00026709) cell_cale_week_pane_g3

0x4079,	// (0x00026721) grid_highlight_pane_cp07

0x4081,	// (0x00026729) listscroll_gms_pane

0x408b,	// (0x00026733) grid_gms_pane

0x4094,	// (0x0002673c) listscroll_gms_pane_g1

0x409c,	// (0x00026744) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000318b9) listscroll_gms_pane_g

0x40a4,	// (0x0002674c) scroll_pane_cp010

0x40af,	// (0x00026757) cell_gms_pane_ParamLimits

0x40af,	// (0x00026757) cell_gms_pane

0x40bf,	// (0x00026767) cell_gms_pane_g1

0x40c7,	// (0x0002676f) cell_gms_pane_g2

0x3cdc,	// (0x00026384) cell_gms_pane_g3

0x40cf,	// (0x00026777) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000318be) cell_gms_pane_g

0x40d8,	// (0x00026780) grid_highlight_pane_cp09

0x62a9,	// (0x00028951) phob_pre_status_pane_g1

0x62b1,	// (0x00028959) phob_pre_status_pane_g2

0x62b9,	// (0x00028961) phob_pre_status_pane_g3

0x62c1,	// (0x00028969) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x00031cc0) phob_pre_status_pane_g

0x62d1,	// (0x00028979) phob_pre_status_pane_t1

0x62df,	// (0x00028987) phob_pre_status_pane_t2

0x62ed,	// (0x00028995) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x00031ccb) phob_pre_status_pane_t

0x35d6,	// (0x00025c7e) bg_list_pane_cp05

0x207b,	// (0x00024723) grid_vorec_pane

0xa979,	// (0x0002d021) vorec_t1

0xa987,	// (0x0002d02f) vorec_t2

0xa995,	// (0x0002d03d) vorec_t3

0xa9a3,	// (0x0002d04b) vorec_t4

0xa9b1,	// (0x0002d059) vorec_t5

0xa9bf,	// (0x0002d067) vorec_t6

0x0006,

0xf21f,	// (0x000318c7) vorec_t

0xa9db,	// (0x0002d083) wait_bar_pane_cp01

0x40e0,	// (0x00026788) cell_vorec_pane_ParamLimits

0x40e0,	// (0x00026788) cell_vorec_pane

0x40f3,	// (0x0002679b) cell_vorec_pane_g1

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp05

0x410f,	// (0x000267b7) cams_zoom_pane

0x411e,	// (0x000267c6) image_vga_pane

0x4136,	// (0x000267de) main_camera_pane_g1

0x4146,	// (0x000267ee) main_camera_pane_g2

0x4156,	// (0x000267fe) main_camera_pane_g3

0x4166,	// (0x0002680e) main_camera_pane_g4

0x4176,	// (0x0002681e) main_camera_pane_g5

0x4186,	// (0x0002682e) main_camera_pane_g6

0x4196,	// (0x0002683e) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000318d6) main_camera_pane_g

0x41b2,	// (0x0002685a) main_camera_pane_t1

0x41c8,	// (0x00026870) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000318e7) main_camera_pane_t

0x41fa,	// (0x000268a2) cams_zoom_pane_cp_ParamLimits

0x41fa,	// (0x000268a2) cams_zoom_pane_cp

0x4222,	// (0x000268ca) image_cif_pane_ParamLimits

0x4222,	// (0x000268ca) image_cif_pane

0x4253,	// (0x000268fb) image_subqcif_pane

0x425b,	// (0x00026903) main_video_pane_g1_ParamLimits

0x425b,	// (0x00026903) main_video_pane_g1

0x427f,	// (0x00026927) main_video_pane_g2_ParamLimits

0x427f,	// (0x00026927) main_video_pane_g2

0x42b3,	// (0x0002695b) main_video_pane_g3_ParamLimits

0x42b3,	// (0x0002695b) main_video_pane_g3

0x42e1,	// (0x00026989) main_video_pane_g4_ParamLimits

0x42e1,	// (0x00026989) main_video_pane_g4

0x430f,	// (0x000269b7) main_video_pane_g5_ParamLimits

0x430f,	// (0x000269b7) main_video_pane_g5

0x4327,	// (0x000269cf) main_video_pane_g6_ParamLimits

0x4327,	// (0x000269cf) main_video_pane_g6

0x0006,

0xf244,	// (0x000318ec) main_video_pane_g_ParamLimits

0xf244,	// (0x000318ec) main_video_pane_g

0x4350,	// (0x000269f8) main_video_pane_t1_ParamLimits

0x4350,	// (0x000269f8) main_video_pane_t1

0x4399,	// (0x00026a41) cams_zoom_pane_g1

0x43a2,	// (0x00026a4a) cams_zoom_pane_g2

0x43ab,	// (0x00026a53) cams_zoom_pane_g3

0x43b4,	// (0x00026a5c) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000318fb) cams_zoom_pane_g

0x43d1,	// (0x00026a79) grid_cams_pane

0x43e6,	// (0x00026a8e) linegrid_cams_pane

0x43f7,	// (0x00026a9f) cell_cams_pane_ParamLimits

0x43f7,	// (0x00026a9f) cell_cams_pane

0x4415,	// (0x00026abd) cams_burst_image_pane

0x441d,	// (0x00026ac5) cell_cams_pane_g1

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp03

0x3b8c,	// (0x00026234) mp_bg_pane_g1

0x35d6,	// (0x00025c7e) bg_list_pane_cp03

0xc572,	// (0x0002ec1a) bg_mp_pane

0xc57a,	// (0x0002ec22) grid_mp_pane

0xc582,	// (0x0002ec2a) media_player_g1

0xc58a,	// (0x0002ec32) media_player_t1

0xc598,	// (0x0002ec40) media_player_t2

0xc5a6,	// (0x0002ec4e) media_player_t3

0xc5b4,	// (0x0002ec5c) media_player_t4

0xc5c2,	// (0x0002ec6a) media_player_t5

0xc5d0,	// (0x0002ec78) media_player_t6

0xc5de,	// (0x0002ec86) media_player_t7

0x0006,

0xf602,	// (0x00031caa) media_player_t

0xc5ec,	// (0x0002ec94) wait_bar_pane_cp02

0xf5e7,	// (0x00031c8f) main_usb_pane_t

0x62a0,	// (0x00028948) cell_mp_pane

0x3b8c,	// (0x00026234) cell_mp_pane_g1

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp06

0x4515,	// (0x00026bbd) grid_skin_colour_pane

0x451d,	// (0x00026bc5) list_highlight_pane_cp03

0x4525,	// (0x00026bcd) skin_g1

0x452d,	// (0x00026bd5) skin_t1

0x453c,	// (0x00026be4) skin_t2

0x0001,

0xf288,	// (0x00031930) skin_t

0x454a,	// (0x00026bf2) cell_skin_colour_pane_ParamLimits

0x454a,	// (0x00026bf2) cell_skin_colour_pane

0x4564,	// (0x00026c0c) cell_skin_colour_pane_g1

0x45c5,	// (0x00026c6d) call_video_g1_ParamLimits

0x45c5,	// (0x00026c6d) call_video_g1

0x45db,	// (0x00026c83) call_video_g2_ParamLimits

0x45db,	// (0x00026c83) call_video_g2

0x0001,

0xf28d,	// (0x00031935) call_video_g_ParamLimits

0xf28d,	// (0x00031935) call_video_g

0x4623,	// (0x00026ccb) call_video_uplink_pane_cp1_ParamLimits

0x4623,	// (0x00026ccb) call_video_uplink_pane_cp1

0x4688,	// (0x00026d30) call_video_uplink_pane_cp2

0x46c0,	// (0x00026d68) video_down_crop_pane_ParamLimits

0x46c0,	// (0x00026d68) video_down_crop_pane

0x4783,	// (0x00026e2b) video_down_pane_ParamLimits

0x4783,	// (0x00026e2b) video_down_pane

0x482d,	// (0x00026ed5) video_down_subqcif_pane_ParamLimits

0x482d,	// (0x00026ed5) video_down_subqcif_pane

0x4845,	// (0x00026eed) video_down_subqcif_pane_cp_ParamLimits

0x4845,	// (0x00026eed) video_down_subqcif_pane_cp

0x487c,	// (0x00026f24) im_reading_pane_ParamLimits

0x487c,	// (0x00026f24) im_reading_pane

0x488e,	// (0x00026f36) im_writing_pane_ParamLimits

0x488e,	// (0x00026f36) im_writing_pane

0x48ac,	// (0x00026f54) im_reading_pane_t1

0x48e2,	// (0x00026f8a) list_im_pane

0x48f3,	// (0x00026f9b) scroll_pane_cp07

0x490c,	// (0x00026fb4) im_writing_pane_t1_ParamLimits

0x490c,	// (0x00026fb4) im_writing_pane_t1

0x4921,	// (0x00026fc9) im_writing_pane_t2_ParamLimits

0x4921,	// (0x00026fc9) im_writing_pane_t2

0x0001,

0xf297,	// (0x0003193f) im_writing_pane_t_ParamLimits

0xf297,	// (0x0003193f) im_writing_pane_t

0x35d6,	// (0x00025c7e) input_focus_pane_cp04

0x35d6,	// (0x00025c7e) input_focus_pane_cp05

0x493e,	// (0x00026fe6) list_im_single_pane_ParamLimits

0x493e,	// (0x00026fe6) list_im_single_pane

0x4954,	// (0x00026ffc) list_single_im_pane_t1

0x6266,	// (0x0002890e) blid_accuracy_pane

0x626e,	// (0x00028916) blid_compass_pane

0x6276,	// (0x0002891e) main_location_t1

0x6284,	// (0x0002892c) main_location_t2

0x6292,	// (0x0002893a) main_location_t3

0x0002,

0xf611,	// (0x00031cb9) main_location_t

0x35d6,	// (0x00025c7e) aid_levels_location

0x3b8c,	// (0x00026234) blid_accuracy_pane_g1

0x3b8c,	// (0x00026234) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000319a1) blid_accuracy_pane_g

0x498e,	// (0x00027036) wml_content_pane

0x49cc,	// (0x00027074) wml_button_pane_ParamLimits

0x49cc,	// (0x00027074) wml_button_pane

0x49e0,	// (0x00027088) wml_list_single_large_pane_ParamLimits

0x49e0,	// (0x00027088) wml_list_single_large_pane

0x49f4,	// (0x0002709c) wml_list_single_medium_pane_ParamLimits

0x49f4,	// (0x0002709c) wml_list_single_medium_pane

0x4a09,	// (0x000270b1) wml_list_single_small_pane_ParamLimits

0x4a09,	// (0x000270b1) wml_list_single_small_pane

0x4a20,	// (0x000270c8) wml_selection_box_pane_ParamLimits

0x4a20,	// (0x000270c8) wml_selection_box_pane

0x4a33,	// (0x000270db) wml_list_single_pane_t1

0x4a42,	// (0x000270ea) wml_list_single_medium_pane_t1

0x4a51,	// (0x000270f9) wml_list_single_large_pane_t1

0x4a60,	// (0x00027108) input_focus_pane_cp02_ParamLimits

0x4a60,	// (0x00027108) input_focus_pane_cp02

0x4a73,	// (0x0002711b) wml_selection_box_pane_g1

0x4a7c,	// (0x00027124) wml_selection_box_pane_t1_ParamLimits

0x4a7c,	// (0x00027124) wml_selection_box_pane_t1

0x3831,	// (0x00025ed9) bg_wml_button_pane_ParamLimits

0x3831,	// (0x00025ed9) bg_wml_button_pane

0x4a94,	// (0x0002713c) wml_button_pane_g1

0x4a9c,	// (0x00027144) wml_button_pane_t1

0x4a94,	// (0x0002713c) wml_button_bg_pane_g1

0x4aac,	// (0x00027154) wml_button_bg_pane_g2

0x4ab4,	// (0x0002715c) wml_button_bg_pane_g3

0x4abc,	// (0x00027164) wml_button_bg_pane_g4

0x4ac4,	// (0x0002716c) wml_button_bg_pane_g5

0x4acc,	// (0x00027174) wml_button_bg_pane_g6

0x4ad4,	// (0x0002717c) wml_button_bg_pane_g7

0x4adc,	// (0x00027184) wml_button_bg_pane_g8

0x4ae4,	// (0x0002718c) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00031944) wml_button_bg_pane_g

0x4aec,	// (0x00027194) bg_list_pane_cp02

0x4af5,	// (0x0002719d) mce_header_pane_ParamLimits

0x4af5,	// (0x0002719d) mce_header_pane

0x4b09,	// (0x000271b1) mce_icon_pane

0x4b09,	// (0x000271b1) mce_image_pane

0x4b12,	// (0x000271ba) mce_text_pane_ParamLimits

0x4b12,	// (0x000271ba) mce_text_pane

0x4b26,	// (0x000271ce) scroll_pane_cp03

0x4b26,	// (0x000271ce) scroll_pane_cp04

0x4b30,	// (0x000271d8) scroll_pane_cp05_ParamLimits

0x4b30,	// (0x000271d8) scroll_pane_cp05

0x4b3c,	// (0x000271e4) mce_header_field_pane_ParamLimits

0x4b3c,	// (0x000271e4) mce_header_field_pane

0x4b53,	// (0x000271fb) mce_header_field_pane_2_ParamLimits

0x4b53,	// (0x000271fb) mce_header_field_pane_2

0x4b69,	// (0x00027211) mce_header_field_pane_3

0x4b71,	// (0x00027219) list_single_mce_message_pane_ParamLimits

0x4b71,	// (0x00027219) list_single_mce_message_pane

0x4b86,	// (0x0002722e) list_single_mce_smart_pane_ParamLimits

0x4b86,	// (0x0002722e) list_single_mce_smart_pane

0x4ba6,	// (0x0002724e) input_focus_pane_cp03

0x4baf,	// (0x00027257) list_header_data_pane

0x4bb7,	// (0x0002725f) mce_header_field_pane_t1

0x4bc5,	// (0x0002726d) list_single_mce_header_pane_ParamLimits

0x4bc5,	// (0x0002726d) list_single_mce_header_pane

0x4bd9,	// (0x00027281) list_single_mce_header_pane_t1

0x4be8,	// (0x00027290) list_single_mce_message_pane_g1

0x4bf1,	// (0x00027299) list_single_mce_message_pane_t1

0x4c1e,	// (0x000272c6) bg_cale_heading_pane_cp01_ParamLimits

0x4c1e,	// (0x000272c6) bg_cale_heading_pane_cp01

0x4c41,	// (0x000272e9) bg_cale_pane_cp02_ParamLimits

0x4c41,	// (0x000272e9) bg_cale_pane_cp02

0x4c64,	// (0x0002730c) cale_month_corner_pane

0x4c7a,	// (0x00027322) cale_month_day_heading_pane_ParamLimits

0x4c7a,	// (0x00027322) cale_month_day_heading_pane

0x4cad,	// (0x00027355) cale_month_pane_g1_ParamLimits

0x4cad,	// (0x00027355) cale_month_pane_g1

0x4cc9,	// (0x00027371) cale_month_pane_g2_ParamLimits

0x4cc9,	// (0x00027371) cale_month_pane_g2

0x4ce4,	// (0x0002738c) cale_month_pane_g3_ParamLimits

0x4ce4,	// (0x0002738c) cale_month_pane_g3

0x4d10,	// (0x000273b8) cale_month_pane_g4_ParamLimits

0x4d10,	// (0x000273b8) cale_month_pane_g4

0x4d3c,	// (0x000273e4) cale_month_pane_g5_ParamLimits

0x4d3c,	// (0x000273e4) cale_month_pane_g5

0x4d68,	// (0x00027410) cale_month_pane_g6_ParamLimits

0x4d68,	// (0x00027410) cale_month_pane_g6

0x4d94,	// (0x0002743c) cale_month_pane_g7_ParamLimits

0x4d94,	// (0x0002743c) cale_month_pane_g7

0x4dc0,	// (0x00027468) cale_month_pane_g8_ParamLimits

0x4dc0,	// (0x00027468) cale_month_pane_g8

0x4dfc,	// (0x000274a4) cale_month_pane_g9_ParamLimits

0x4dfc,	// (0x000274a4) cale_month_pane_g9

0x4e36,	// (0x000274de) cale_month_pane_g10_ParamLimits

0x4e36,	// (0x000274de) cale_month_pane_g10

0x4e70,	// (0x00027518) cale_month_pane_g11_ParamLimits

0x4e70,	// (0x00027518) cale_month_pane_g11

0x4eaa,	// (0x00027552) cale_month_pane_g12_ParamLimits

0x4eaa,	// (0x00027552) cale_month_pane_g12

0x4ee4,	// (0x0002758c) cale_month_pane_g13_ParamLimits

0x4ee4,	// (0x0002758c) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00031957) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00031957) cale_month_pane_g

0x4f30,	// (0x000275d8) cale_month_week_pane

0x4f43,	// (0x000275eb) grid_cale_month_pane_ParamLimits

0x4f43,	// (0x000275eb) grid_cale_month_pane

0x4f71,	// (0x00027619) cale_month_day_heading_pane_t1

0x4fcf,	// (0x00027677) cale_month_day_heading_pane_t2

0x5034,	// (0x000276dc) cale_month_day_heading_pane_t3

0x5099,	// (0x00027741) cale_month_day_heading_pane_t4

0x50fe,	// (0x000277a6) cale_month_day_heading_pane_t5

0x5163,	// (0x0002780b) cale_month_day_heading_pane_t6

0x51c8,	// (0x00027870) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00031972) cale_month_day_heading_pane_t

0x403a,	// (0x000266e2) bg_cale_side_pane_cp01

0x5235,	// (0x000278dd) cale_month_week_pane_t1

0x524c,	// (0x000278f4) cale_month_week_pane_t2

0x5263,	// (0x0002790b) cale_month_week_pane_t3

0x527a,	// (0x00027922) cale_month_week_pane_t4

0x5291,	// (0x00027939) cale_month_week_pane_t5

0x52a8,	// (0x00027950) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00031981) cale_month_week_pane_t

0x52bf,	// (0x00027967) cell_cale_month_pane_ParamLimits

0x52bf,	// (0x00027967) cell_cale_month_pane

0xa9e3,	// (0x0002d08b) cell_cale_month_pane_g1

0x2083,	// (0x0002472b) cell_cale_month_pane_t1_ParamLimits

0x2083,	// (0x0002472b) cell_cale_month_pane_t1

0x4079,	// (0x00026721) grid_highlight_pane_cp08

0x3b8c,	// (0x00026234) main_smil_g1

0x5397,	// (0x00027a3f) smil_status_pane

0x53a0,	// (0x00027a48) smil_text_pane

0xc452,	// (0x0002eafa) bg_popup_call3_rect_pane_g8

0xc45a,	// (0x0002eb02) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00031c3a) bg_popup_call3_rect_pane_g

0xc710,	// (0x0002edb8) smil_status_volume_pane_g1

0x53b2,	// (0x00027a5a) smil_status_pane_t1

0xc743,	// (0x0002edeb) volume_smil_pane

0x53c9,	// (0x00027a71) list_smil_text_pane

0x53d3,	// (0x00027a7b) scroll_pane_cp011

0x53de,	// (0x00027a86) smil_text_list_pane_t1_ParamLimits

0x53de,	// (0x00027a86) smil_text_list_pane_t1

0xa9ef,	// (0x0002d097) aid_volume_smil_ParamLimits

0xa9ef,	// (0x0002d097) aid_volume_smil

0x3b8c,	// (0x00026234) smil_volume_pane_g1

0x3b8c,	// (0x00026234) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000319a1) smil_volume_pane_g

0x3ae7,	// (0x0002618f) listscroll_cale_day_pane

0xaa11,	// (0x0002d0b9) bg_cale_pane

0xaa29,	// (0x0002d0d1) list_cale_pane

0xaa3a,	// (0x0002d0e2) scroll_pane_cp09

0xaa4b,	// (0x0002d0f3) cale_bg_pane_g1

0xaa53,	// (0x0002d0fb) cale_bg_pane_g2

0xaa5b,	// (0x0002d103) cale_bg_pane_g3

0xaa63,	// (0x0002d10b) cale_bg_pane_g4

0xaa6b,	// (0x0002d113) cale_bg_pane_g5

0xaa73,	// (0x0002d11b) cale_bg_pane_g6

0xaa7b,	// (0x0002d123) cale_bg_pane_g7

0xaa83,	// (0x0002d12b) cale_bg_pane_g8

0xaa8b,	// (0x0002d133) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000319a6) cale_bg_pane_g

0x541c,	// (0x00027ac4) list_cale_time_pane_ParamLimits

0x541c,	// (0x00027ac4) list_cale_time_pane

0xaa93,	// (0x0002d13b) list_cale_time_pane_g1_ParamLimits

0xaa93,	// (0x0002d13b) list_cale_time_pane_g1

0xaa9f,	// (0x0002d147) list_cale_time_pane_g2_ParamLimits

0xaa9f,	// (0x0002d147) list_cale_time_pane_g2

0x5431,	// (0x00027ad9) list_cale_time_pane_g3_ParamLimits

0x5431,	// (0x00027ad9) list_cale_time_pane_g3

0x543f,	// (0x00027ae7) list_cale_time_pane_g4_ParamLimits

0x543f,	// (0x00027ae7) list_cale_time_pane_g4

0x544d,	// (0x00027af5) list_cale_time_pane_g5_ParamLimits

0x544d,	// (0x00027af5) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000319b9) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000319b9) list_cale_time_pane_g

0xaab9,	// (0x0002d161) list_cale_time_pane_t1_ParamLimits

0xaab9,	// (0x0002d161) list_cale_time_pane_t1

0xaae1,	// (0x0002d189) list_cale_time_pane_t2_ParamLimits

0xaae1,	// (0x0002d189) list_cale_time_pane_t2

0x5751,	// (0x00027df9) aid_blid_cardinal_pane

0x578f,	// (0x00027e37) compass_pane_t4

0xab09,	// (0x0002d1b1) list_cale_time_pane_t4_ParamLimits

0xab09,	// (0x0002d1b1) list_cale_time_pane_t4

0x579d,	// (0x00027e45) compass_pane_t5

0x57ab,	// (0x00027e53) compass_pane_t6

0x57b9,	// (0x00027e61) compass_pane_t7

0xb05a,	// (0x0002d702) navi_pane_cc_t1

0xb210,	// (0x0002d8b8) aid_phob_thumbnail_center_pane

0x5d18,	// (0x000283c0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000319c6) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000319c6) list_cale_time_pane_t

0x320b,	// (0x000258b3) bg_popup_window_pane_cp02_ParamLimits

0x320b,	// (0x000258b3) bg_popup_window_pane_cp02

0xab31,	// (0x0002d1d9) heading_pane_cp01_ParamLimits

0xab31,	// (0x0002d1d9) heading_pane_cp01

0xab3d,	// (0x0002d1e5) loc_req_pane_ParamLimits

0xab3d,	// (0x0002d1e5) loc_req_pane

0xab4d,	// (0x0002d1f5) loc_type_pane_ParamLimits

0xab4d,	// (0x0002d1f5) loc_type_pane

0xab5f,	// (0x0002d207) loc_type_pane_t1_ParamLimits

0xab5f,	// (0x0002d207) loc_type_pane_t1

0xab71,	// (0x0002d219) loc_type_pane_t2_ParamLimits

0xab71,	// (0x0002d219) loc_type_pane_t2

0xab83,	// (0x0002d22b) loc_type_pane_t3_ParamLimits

0xab83,	// (0x0002d22b) loc_type_pane_t3

0x0002,

0xf325,	// (0x000319cd) loc_type_pane_t_ParamLimits

0xf325,	// (0x000319cd) loc_type_pane_t

0xab95,	// (0x0002d23d) list_loc_req_pane

0xab9f,	// (0x0002d247) scroll_pane_cp012

0x5459,	// (0x00027b01) list_single_loc_request_popup_menu_pane_ParamLimits

0x5459,	// (0x00027b01) list_single_loc_request_popup_menu_pane

0xaba8,	// (0x0002d250) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaba8,	// (0x0002d250) list_single_loc_request_popup_menu_pane_g1

0xabb4,	// (0x0002d25c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xabb4,	// (0x0002d25c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000319d4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000319d4) list_single_loc_request_popup_menu_pane_g

0xabc0,	// (0x0002d268) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xabc0,	// (0x0002d268) list_single_loc_request_popup_menu_pane_t1

0x3831,	// (0x00025ed9) bg_popup_window_pane_cp03_ParamLimits

0x3831,	// (0x00025ed9) bg_popup_window_pane_cp03

0xabd6,	// (0x0002d27e) heading_loc_req_pane_ParamLimits

0xabd6,	// (0x0002d27e) heading_loc_req_pane

0x5466,	// (0x00027b0e) popup_dyc_status_message_window_g1_ParamLimits

0x5466,	// (0x00027b0e) popup_dyc_status_message_window_g1

0x547a,	// (0x00027b22) popup_dyc_status_message_window_t1_ParamLimits

0x547a,	// (0x00027b22) popup_dyc_status_message_window_t1

0x548f,	// (0x00027b37) popup_dyc_status_message_window_t2_ParamLimits

0x548f,	// (0x00027b37) popup_dyc_status_message_window_t2

0x54a4,	// (0x00027b4c) popup_dyc_status_message_window_t3_ParamLimits

0x54a4,	// (0x00027b4c) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000319d9) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000319d9) popup_dyc_status_message_window_t

0x35d6,	// (0x00025c7e) bg_heading_pane_cp01

0xabe2,	// (0x0002d28a) heading_loc_req_pane_g1

0xabea,	// (0x0002d292) heading_loc_req_pane_g2

0xabf2,	// (0x0002d29a) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000319e0) heading_loc_req_pane_g

0xabfa,	// (0x0002d2a2) heading_loc_req_pane_t1

0xaca1,	// (0x0002d349) bg_popup_sub_pane_cp01_ParamLimits

0xaca1,	// (0x0002d349) bg_popup_sub_pane_cp01

0xacaf,	// (0x0002d357) popup_cale_events_window_g1_ParamLimits

0xacaf,	// (0x0002d357) popup_cale_events_window_g1

0xaccf,	// (0x0002d377) popup_cale_events_window_g2_ParamLimits

0xaccf,	// (0x0002d377) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00031a14) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00031a14) popup_cale_events_window_g

0xacef,	// (0x0002d397) popup_cale_events_window_t1_ParamLimits

0xacef,	// (0x0002d397) popup_cale_events_window_t1

0xad01,	// (0x0002d3a9) popup_cale_events_window_t2_ParamLimits

0xad01,	// (0x0002d3a9) popup_cale_events_window_t2

0xad3f,	// (0x0002d3e7) popup_cale_events_window_t3_ParamLimits

0xad3f,	// (0x0002d3e7) popup_cale_events_window_t3

0xad79,	// (0x0002d421) popup_cale_events_window_t4_ParamLimits

0xad79,	// (0x0002d421) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00031a19) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00031a19) popup_cale_events_window_t

0x5534,	// (0x00027bdc) call_type_pane

0x5544,	// (0x00027bec) popup_call_status_window_g1

0x5558,	// (0x00027c00) popup_call_status_window_g2

0x556c,	// (0x00027c14) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00031a22) popup_call_status_window_g

0xadaf,	// (0x0002d457) call_type_pane_g1

0xadb8,	// (0x0002d460) call_type_pane_g2

0x0001,

0xf381,	// (0x00031a29) call_type_pane_g

0x35d6,	// (0x00025c7e) bg_popup_sub_pane_cp02

0xadc1,	// (0x0002d469) listscroll_popup_wml_pane

0xadc9,	// (0x0002d471) list_wml_pane

0xadd3,	// (0x0002d47b) scroll_pane_cp013

0x557c,	// (0x00027c24) list_single_graphic_popup_wml_pane_ParamLimits

0x557c,	// (0x00027c24) list_single_graphic_popup_wml_pane

0x3b8c,	// (0x00026234) list_single_graphic_popup_wml_pane_g1

0xaddc,	// (0x0002d484) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00031a2e) list_single_graphic_popup_wml_pane_g

0xade4,	// (0x0002d48c) list_single_graphic_popup_wml_pane_t1

0xadfa,	// (0x0002d4a2) aid_call_pane

0x3829,	// (0x00025ed1) popup_clock_analogue_window_g1

0x3829,	// (0x00025ed1) popup_clock_analogue_window_g2

0xae02,	// (0x0002d4aa) popup_clock_analogue_window_g3

0xae02,	// (0x0002d4aa) popup_clock_analogue_window_g4

0x3b8c,	// (0x00026234) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00031a33) popup_clock_analogue_window_g

0xae0a,	// (0x0002d4b2) popup_clock_analogue_window_t1

0xae18,	// (0x0002d4c0) clock_digital_number_pane_ParamLimits

0xae18,	// (0x0002d4c0) clock_digital_number_pane

0xae24,	// (0x0002d4cc) clock_digital_number_pane_cp02_ParamLimits

0xae24,	// (0x0002d4cc) clock_digital_number_pane_cp02

0xae30,	// (0x0002d4d8) clock_digital_number_pane_cp03_ParamLimits

0xae30,	// (0x0002d4d8) clock_digital_number_pane_cp03

0xae3c,	// (0x0002d4e4) clock_digital_number_pane_cp04_ParamLimits

0xae3c,	// (0x0002d4e4) clock_digital_number_pane_cp04

0xae48,	// (0x0002d4f0) clock_digital_separator_pane_ParamLimits

0xae48,	// (0x0002d4f0) clock_digital_separator_pane

0xae54,	// (0x0002d4fc) popup_clock_digital_window_t1

0x3b8c,	// (0x00026234) clock_digital_number_pane_g1

0x3b8c,	// (0x00026234) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000319a1) clock_digital_number_pane_g

0x3b8c,	// (0x00026234) clock_digital_separator_pane_g1

0x3b8c,	// (0x00026234) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000319a1) clock_digital_separator_pane_g

0x35d6,	// (0x00025c7e) bg_popup_window_pane_cp04

0xae71,	// (0x0002d519) heading_pane_cp03

0xae79,	// (0x0002d521) listscroll_popup_gms_pane

0xae81,	// (0x0002d529) grid_large_graphic_popup_pane

0xae8b,	// (0x0002d533) listscroll_popup_gms_pane_g1

0xae93,	// (0x0002d53b) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00031a3e) listscroll_popup_gms_pane_g

0x49c4,	// (0x0002706c) scroll_pane_cp014

0x558f,	// (0x00027c37) cell_large_graphic_popup_pane_ParamLimits

0x558f,	// (0x00027c37) cell_large_graphic_popup_pane

0x55a5,	// (0x00027c4d) cell_large_graphic_popup_pane_g1_ParamLimits

0x55a5,	// (0x00027c4d) cell_large_graphic_popup_pane_g1

0xae9b,	// (0x0002d543) cell_large_graphic_popup_pane_g2_ParamLimits

0xae9b,	// (0x0002d543) cell_large_graphic_popup_pane_g2

0xaea7,	// (0x0002d54f) cell_large_graphic_popup_pane_g3_ParamLimits

0xaea7,	// (0x0002d54f) cell_large_graphic_popup_pane_g3

0xaeb4,	// (0x0002d55c) cell_large_graphic_popup_pane_g4_ParamLimits

0xaeb4,	// (0x0002d55c) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00031a43) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00031a43) cell_large_graphic_popup_pane_g

0xaec4,	// (0x0002d56c) grid_highlight_pane_cp010

0x3b8c,	// (0x00026234) bg_popup_call_pane_g1

0xaece,	// (0x0002d576) list_single_graphic_popup_conf_pane_ParamLimits

0xaece,	// (0x0002d576) list_single_graphic_popup_conf_pane

0xaee1,	// (0x0002d589) list_highlight_pane_cp01

0xaeea,	// (0x0002d592) list_single_graphic_popup_conf_pane_g1

0xaef2,	// (0x0002d59a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00031a4c) list_single_graphic_popup_conf_pane_g

0xaefa,	// (0x0002d5a2) list_single_graphic_popup_conf_pane_t1

0xaf08,	// (0x0002d5b0) linegrid_cams_pane_g1

0x55b1,	// (0x00027c59) linegrid_cams_pane_g2

0x3cdc,	// (0x00026384) linegrid_cams_pane_g3

0xaf11,	// (0x0002d5b9) linegrid_cams_pane_g4

0x55ba,	// (0x00027c62) linegrid_cams_pane_g5

0x55c3,	// (0x00027c6b) linegrid_cams_pane_g6

0x40cf,	// (0x00026777) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00031a51) linegrid_cams_pane_g

0xaf1a,	// (0x0002d5c2) popup_clock_analogue_window

0xaf1a,	// (0x0002d5c2) popup_clock_digital_window

0x35d6,	// (0x00025c7e) popup_phob_thumbnail_window

0x3b8c,	// (0x00026234) call_video_uplink_pane_g1

0xaf23,	// (0x0002d5cb) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00031a60) call_video_uplink_pane_g

0x4079,	// (0x00026721) video_uplink_pane

0xaf2b,	// (0x0002d5d3) mce_image_pane_g1

0x55cc,	// (0x00027c74) mce_image_pane_g2

0x55d4,	// (0x00027c7c) mce_image_pane_g3

0x55dc,	// (0x00027c84) mce_image_pane_g4

0x55e4,	// (0x00027c8c) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00031a65) mce_image_pane_g

0xaf35,	// (0x0002d5dd) control_top_pane_stacon_cp01_ParamLimits

0xaf35,	// (0x0002d5dd) control_top_pane_stacon_cp01

0xaf45,	// (0x0002d5ed) uni_indicator_pane_stacon_cp01_ParamLimits

0xaf45,	// (0x0002d5ed) uni_indicator_pane_stacon_cp01

0xaf56,	// (0x0002d5fe) bg_popup_sub_pane_cp03

0xaf60,	// (0x0002d608) chi_dic_find_pane

0x55ec,	// (0x00027c94) listscroll_chi_dic_pane

0xaf68,	// (0x0002d610) main_pane_chidic_g1

0xaf70,	// (0x0002d618) chi_dic_find_pane_t1

0xaf7e,	// (0x0002d626) find_chidic_pane

0xaf87,	// (0x0002d62f) chi_dic_list_pane_ParamLimits

0xaf87,	// (0x0002d62f) chi_dic_list_pane

0xaf98,	// (0x0002d640) scroll_pane_cp020

0xafa0,	// (0x0002d648) find_chidic_pane_t1

0x35d6,	// (0x00025c7e) input_focus_pane_cp06

0x5600,	// (0x00027ca8) list_chi_dic_pane_ParamLimits

0x5600,	// (0x00027ca8) list_chi_dic_pane

0x5612,	// (0x00027cba) list_chi_dic_pane_t1_ParamLimits

0x5612,	// (0x00027cba) list_chi_dic_pane_t1

0x35d6,	// (0x00025c7e) list_highlight_pane_cp020

0xafaf,	// (0x0002d657) bg_cale_heading_pane_g1

0x5625,	// (0x00027ccd) bg_cale_heading_pane_g2

0x562d,	// (0x00027cd5) bg_cale_heading_pane_g3

0x5635,	// (0x00027cdd) bg_cale_heading_pane_g4

0x563f,	// (0x00027ce7) bg_cale_heading_pane_g5

0x5649,	// (0x00027cf1) bg_cale_heading_pane_g6

0x5651,	// (0x00027cf9) bg_cale_heading_pane_g7

0x5659,	// (0x00027d01) bg_cale_heading_pane_g8

0x5663,	// (0x00027d0b) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00031a70) bg_cale_heading_pane_g

0xafaf,	// (0x0002d657) bg_cale_side_pane_g1

0x566d,	// (0x00027d15) bg_cale_side_pane_g2

0x5675,	// (0x00027d1d) bg_cale_side_pane_g3

0x567d,	// (0x00027d25) bg_cale_side_pane_g4

0x5685,	// (0x00027d2d) bg_cale_side_pane_g5

0x568d,	// (0x00027d35) bg_cale_side_pane_g6

0x5695,	// (0x00027d3d) bg_cale_side_pane_g7

0x569d,	// (0x00027d45) bg_cale_side_pane_g8

0x56a5,	// (0x00027d4d) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00031a83) bg_cale_side_pane_g

0x56ad,	// (0x00027d55) popup_call_status_window_ParamLimits

0x56ad,	// (0x00027d55) popup_call_status_window

0xafb7,	// (0x0002d65f) stacon_top_pane

0xafbf,	// (0x0002d667) status_pane_ParamLimits

0xafbf,	// (0x0002d667) status_pane

0xafd9,	// (0x0002d681) status_small_pane

0xafe1,	// (0x0002d689) control_pane

0x35d6,	// (0x00025c7e) stacon_bottom_pane

0xafe9,	// (0x0002d691) list_single_mce_smart_pane_t1_ParamLimits

0xafe9,	// (0x0002d691) list_single_mce_smart_pane_t1

0xaffc,	// (0x0002d6a4) list_single_mce_smart_pane_t2_ParamLimits

0xaffc,	// (0x0002d6a4) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00031a96) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00031a96) list_single_mce_smart_pane_t

0x56f4,	// (0x00027d9c) compass_pane

0x56fd,	// (0x00027da5) main_location2_pane_t1

0x5713,	// (0x00027dbb) main_location2_pane_t2

0x5729,	// (0x00027dd1) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00031a9b) main_location2_pane_t

0xb024,	// (0x0002d6cc) compass_pane_g1_ParamLimits

0xb024,	// (0x0002d6cc) compass_pane_g1

0x5771,	// (0x00027e19) compass_pane_t1

0x5780,	// (0x00027e28) compass_pane_t2

0x0005,

0xf3fc,	// (0x00031aa4) compass_pane_t

0x57c7,	// (0x00027e6f) text_secondary_cp61

0xb051,	// (0x0002d6f9) navi_pane_cams_g5

0xb092,	// (0x0002d73a) navi_pane_im_t1

0xb0a0,	// (0x0002d748) navi_pane_mp_g1_ParamLimits

0xb0a0,	// (0x0002d748) navi_pane_mp_g1

0xb0b4,	// (0x0002d75c) navi_pane_mp_g2_ParamLimits

0xb0b4,	// (0x0002d75c) navi_pane_mp_g2

0xb0c0,	// (0x0002d768) navi_pane_mp_g3_ParamLimits

0xb0c0,	// (0x0002d768) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00031ab8) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00031ab8) navi_pane_mp_g

0xb0cc,	// (0x0002d774) navi_pane_mp_t1

0xb0da,	// (0x0002d782) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00031abf) navi_pane_mp_t

0xb147,	// (0x0002d7ef) navi_pane_vt_g1

0xb0cc,	// (0x0002d774) navi_pane_vt_t1

0xb14f,	// (0x0002d7f7) navi_slider_pane

0xb157,	// (0x0002d7ff) zooming_pane

0xb15f,	// (0x0002d807) navi_slider_pane_g1

0xb168,	// (0x0002d810) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00031ac6) navi_slider_pane_g

0xb195,	// (0x0002d83d) aid_levels_zoom

0xb19d,	// (0x0002d845) zooming_pane_g1

0xb1a5,	// (0x0002d84d) zooming_pane_g2

0xb1a5,	// (0x0002d84d) zooming_pane_g3

0x0002,

0xf42d,	// (0x00031ad5) zooming_pane_g

0xb1ad,	// (0x0002d855) level_10_zoom

0xb1b6,	// (0x0002d85e) level_11_zoom

0xb1bf,	// (0x0002d867) level_1_zoom

0xb1c8,	// (0x0002d870) level_2_zoom

0xb1d1,	// (0x0002d879) level_3_zoom

0xb1da,	// (0x0002d882) level_4_zoom

0xb1e3,	// (0x0002d88b) level_5_zoom

0xb1ec,	// (0x0002d894) level_6_zoom

0xb1f5,	// (0x0002d89d) level_7_zoom

0xb1fe,	// (0x0002d8a6) level_8_zoom

0xb207,	// (0x0002d8af) level_9_zoom

0xb218,	// (0x0002d8c0) popup_phob_thumbnail_window_g1

0xb220,	// (0x0002d8c8) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00031adc) popup_phob_thumbnail_window_g

0xc5f4,	// (0x0002ec9c) level_1_location

0xc5fc,	// (0x0002eca4) level_2_location

0xc604,	// (0x0002ecac) level_3_location

0xc60c,	// (0x0002ecb4) level_4_location

0xb157,	// (0x0002d7ff) level_5_location

0x5852,	// (0x00027efa) mce_icon_pane_g1

0x585a,	// (0x00027f02) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00031ae1) mce_icon_pane_g

0x5862,	// (0x00027f0a) main_mup_pane_g1_ParamLimits

0x5862,	// (0x00027f0a) main_mup_pane_g1

0x5878,	// (0x00027f20) main_mup_pane_g2_ParamLimits

0x5878,	// (0x00027f20) main_mup_pane_g2

0x5890,	// (0x00027f38) main_mup_pane_g3_ParamLimits

0x5890,	// (0x00027f38) main_mup_pane_g3

0x58a8,	// (0x00027f50) main_mup_pane_g4_ParamLimits

0x58a8,	// (0x00027f50) main_mup_pane_g4

0x58c0,	// (0x00027f68) main_mup_pane_g5_ParamLimits

0x58c0,	// (0x00027f68) main_mup_pane_g5

0x58da,	// (0x00027f82) main_mup_pane_g6_ParamLimits

0x58da,	// (0x00027f82) main_mup_pane_g6

0x58f2,	// (0x00027f9a) main_mup_pane_g7_ParamLimits

0x58f2,	// (0x00027f9a) main_mup_pane_g7

0x590a,	// (0x00027fb2) main_mup_pane_g8_ParamLimits

0x590a,	// (0x00027fb2) main_mup_pane_g8

0x5922,	// (0x00027fca) main_mup_pane_g9_ParamLimits

0x5922,	// (0x00027fca) main_mup_pane_g9

0x5936,	// (0x00027fde) main_mup_pane_g10_ParamLimits

0x5936,	// (0x00027fde) main_mup_pane_g10

0x594a,	// (0x00027ff2) main_mup_pane_g11_ParamLimits

0x594a,	// (0x00027ff2) main_mup_pane_g11

0x595c,	// (0x00028004) main_mup_pane_g12_ParamLimits

0x595c,	// (0x00028004) main_mup_pane_g12

0x5970,	// (0x00028018) main_mup_pane_g13_ParamLimits

0x5970,	// (0x00028018) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00031ae6) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00031ae6) main_mup_pane_g

0x5982,	// (0x0002802a) main_mup_pane_t1_ParamLimits

0x5982,	// (0x0002802a) main_mup_pane_t1

0x599c,	// (0x00028044) main_mup_pane_t2_ParamLimits

0x599c,	// (0x00028044) main_mup_pane_t2

0x59b4,	// (0x0002805c) main_mup_pane_t3_ParamLimits

0x59b4,	// (0x0002805c) main_mup_pane_t3

0x59cc,	// (0x00028074) main_mup_pane_t4_ParamLimits

0x59cc,	// (0x00028074) main_mup_pane_t4

0x59ea,	// (0x00028092) main_mup_pane_t5_ParamLimits

0x59ea,	// (0x00028092) main_mup_pane_t5

0x59ff,	// (0x000280a7) main_mup_pane_t6_ParamLimits

0x59ff,	// (0x000280a7) main_mup_pane_t6

0x0005,

0xf459,	// (0x00031b01) main_mup_pane_t_ParamLimits

0xf459,	// (0x00031b01) main_mup_pane_t

0x5a11,	// (0x000280b9) mup_progress_pane_ParamLimits

0x5a11,	// (0x000280b9) mup_progress_pane

0x5a1d,	// (0x000280c5) mup_visualizer_pane_ParamLimits

0x5a1d,	// (0x000280c5) mup_visualizer_pane

0x5a45,	// (0x000280ed) mup_volume_pane_ParamLimits

0x5a45,	// (0x000280ed) mup_volume_pane

0xb228,	// (0x0002d8d0) mup_visualizer_pane_g1_ParamLimits

0xb228,	// (0x0002d8d0) mup_visualizer_pane_g1

0xb228,	// (0x0002d8d0) mup_visualizer_pane_g2_ParamLimits

0xb228,	// (0x0002d8d0) mup_visualizer_pane_g2

0xb024,	// (0x0002d6cc) mup_visualizer_pane_g3_ParamLimits

0xb024,	// (0x0002d6cc) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00031b0e) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00031b0e) mup_visualizer_pane_g

0x3b8c,	// (0x00026234) mup_volume_pane_g1

0xb23e,	// (0x0002d8e6) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00031b15) mup_volume_pane_g

0x3b8c,	// (0x00026234) mup_progress_pane_g1

0xb247,	// (0x0002d8ef) mup_progress_pane_g2

0xb250,	// (0x0002d8f8) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00031b1a) mup_progress_pane_g

0x35d6,	// (0x00025c7e) bg_popup_window_pane_cp05

0xb259,	// (0x0002d901) heading_pane_cp02_ParamLimits

0xb259,	// (0x0002d901) heading_pane_cp02

0xb273,	// (0x0002d91b) list_popup_blid_pane

0xb27b,	// (0x0002d923) list_blid_sat_info_pane_ParamLimits

0xb27b,	// (0x0002d923) list_blid_sat_info_pane

0xb28e,	// (0x0002d936) list_blid_sat_info_pane_g1

0xb296,	// (0x0002d93e) list_blid_sat_info_pane_t1

0x5b35,	// (0x000281dd) mup_equalizer_pane_ParamLimits

0x5b35,	// (0x000281dd) mup_equalizer_pane

0x5b4e,	// (0x000281f6) mup_equalizer_pane_cp1_ParamLimits

0x5b4e,	// (0x000281f6) mup_equalizer_pane_cp1

0x5b67,	// (0x0002820f) mup_equalizer_pane_cp2_ParamLimits

0x5b67,	// (0x0002820f) mup_equalizer_pane_cp2

0x5b80,	// (0x00028228) mup_equalizer_pane_cp3_ParamLimits

0x5b80,	// (0x00028228) mup_equalizer_pane_cp3

0x5b99,	// (0x00028241) mup_equalizer_pane_cp4_ParamLimits

0x5b99,	// (0x00028241) mup_equalizer_pane_cp4

0x5bb2,	// (0x0002825a) mup_equalizer_pane_cp5

0x5bc4,	// (0x0002826c) mup_equalizer_pane_cp6

0x5bd6,	// (0x0002827e) mup_equalizer_pane_cp7

0xc4d2,	// (0x0002eb7a) bg_popup_call_poc_act_pane_g9

0xc4da,	// (0x0002eb82) bg_popup_call_poc_act_pane_g10

0xc4e2,	// (0x0002eb8a) bg_popup_call_poc_act_pane_g11

0x000a,

0x3831,	// (0x00025ed9) mup_scale_pane

0x3b8c,	// (0x00026234) mup_scale_pane_g1

0xb2a4,	// (0x0002d94c) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00031b36) mup_scale_pane_g

0xb2c8,	// (0x0002d970) msg_data_pane

0xb2d0,	// (0x0002d978) scroll_pane_cp017

0x5bfc,	// (0x000282a4) bg_list_pane_cp04_ParamLimits

0x5bfc,	// (0x000282a4) bg_list_pane_cp04

0xb2e0,	// (0x0002d988) msg_data_pane_g1

0x55cc,	// (0x00027c74) msg_data_pane_g2

0x55d4,	// (0x00027c7c) msg_data_pane_g3

0x5c14,	// (0x000282bc) msg_data_pane_g4

0x55e4,	// (0x00027c8c) msg_data_pane_g5

0x5852,	// (0x00027efa) msg_data_pane_g6

0x5c1c,	// (0x000282c4) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00031b45) msg_data_pane_g

0x5c24,	// (0x000282cc) msg_text_pane_ParamLimits

0x5c24,	// (0x000282cc) msg_text_pane

0x5c48,	// (0x000282f0) qrid_highlight_pane_cp011_ParamLimits

0x5c48,	// (0x000282f0) qrid_highlight_pane_cp011

0x35d6,	// (0x00025c7e) msg_body_pane

0x35d6,	// (0x00025c7e) msg_header_pane

0xb2f1,	// (0x0002d999) input_focus_pane_cp07

0x5c6a,	// (0x00028312) msg_header_pane_t1_ParamLimits

0x5c6a,	// (0x00028312) msg_header_pane_t1

0xb306,	// (0x0002d9ae) msg_header_pane_t2_ParamLimits

0xb306,	// (0x0002d9ae) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00031b59) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00031b59) msg_header_pane_t

0xb318,	// (0x0002d9c0) msg_body_pane_g1

0xb320,	// (0x0002d9c8) msg_body_pane_t1_ParamLimits

0xb320,	// (0x0002d9c8) msg_body_pane_t1

0xb34b,	// (0x0002d9f3) msg_body_pane_t2_ParamLimits

0xb34b,	// (0x0002d9f3) msg_body_pane_t2

0xb35d,	// (0x0002da05) msg_body_pane_t3_ParamLimits

0xb35d,	// (0x0002da05) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00031b5e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00031b5e) msg_body_pane_t

0x20b7,	// (0x0002475f) main_viewer_pane_g1_ParamLimits

0x20b7,	// (0x0002475f) main_viewer_pane_g1

0x20c3,	// (0x0002476b) main_viewer_pane_g2_ParamLimits

0x20c3,	// (0x0002476b) main_viewer_pane_g2

0x5c9a,	// (0x00028342) main_viewer_pane_g3_ParamLimits

0x5c9a,	// (0x00028342) main_viewer_pane_g3

0x5ca9,	// (0x00028351) main_viewer_pane_g4_ParamLimits

0x5ca9,	// (0x00028351) main_viewer_pane_g4

0xb387,	// (0x0002da2f) main_viewer_pane_g5_ParamLimits

0xb387,	// (0x0002da2f) main_viewer_pane_g5

0xb387,	// (0x0002da2f) main_viewer_pane_g7_ParamLimits

0xb387,	// (0x0002da2f) main_viewer_pane_g7

0xb399,	// (0x0002da41) main_viewer_pane_g8_ParamLimits

0xb399,	// (0x0002da41) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00031b6e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00031b6e) main_viewer_pane_g

0xb3b1,	// (0x0002da59) viewer_content_pane_ParamLimits

0xb3b1,	// (0x0002da59) viewer_content_pane

0x5cdd,	// (0x00028385) main_postcard_pane_g1_ParamLimits

0x5cdd,	// (0x00028385) main_postcard_pane_g1

0x5cf1,	// (0x00028399) main_postcard_pane_g2_ParamLimits

0x5cf1,	// (0x00028399) main_postcard_pane_g2

0x5d05,	// (0x000283ad) main_postcard_pane_g3_ParamLimits

0x5d05,	// (0x000283ad) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00031b7f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00031b7f) main_postcard_pane_g

0x5d18,	// (0x000283c0) main_postcard_pane_g4

0xc723,	// (0x0002edcb) smil_status_volume_pane_g2

0x5d53,	// (0x000283fb) postcard_pane_ParamLimits

0x5d53,	// (0x000283fb) postcard_pane

0xb3bf,	// (0x0002da67) postcard_pane_g1_ParamLimits

0xb3bf,	// (0x0002da67) postcard_pane_g1

0x5d93,	// (0x0002843b) postcard_pane_g2_ParamLimits

0x5d93,	// (0x0002843b) postcard_pane_g2

0x5d9f,	// (0x00028447) postcard_pane_g3_ParamLimits

0x5d9f,	// (0x00028447) postcard_pane_g3

0xb3cd,	// (0x0002da75) postcard_pane_g4_ParamLimits

0xb3cd,	// (0x0002da75) postcard_pane_g4

0x5dab,	// (0x00028453) postcard_pane_g5_ParamLimits

0x5dab,	// (0x00028453) postcard_pane_g5

0x5dc0,	// (0x00028468) postcard_pane_g6_ParamLimits

0x5dc0,	// (0x00028468) postcard_pane_g6

0xb3bf,	// (0x0002da67) postcard_pane_g7_ParamLimits

0xb3bf,	// (0x0002da67) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00031b8c) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00031b8c) postcard_pane_g

0x5dd4,	// (0x0002847c) main_mp2_pane_g1_ParamLimits

0x5dd4,	// (0x0002847c) main_mp2_pane_g1

0x5de0,	// (0x00028488) main_mp2_pane_g2_ParamLimits

0x5de0,	// (0x00028488) main_mp2_pane_g2

0x5dec,	// (0x00028494) main_mp2_pane_g3_ParamLimits

0x5dec,	// (0x00028494) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00031b9b) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00031b9b) main_mp2_pane_g

0x5df8,	// (0x000284a0) main_mp2_pane_t1_ParamLimits

0x5df8,	// (0x000284a0) main_mp2_pane_t1

0x5e0d,	// (0x000284b5) main_mp2_pane_t2_ParamLimits

0x5e0d,	// (0x000284b5) main_mp2_pane_t2

0x5e1f,	// (0x000284c7) main_mp2_pane_t3_ParamLimits

0x5e1f,	// (0x000284c7) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00031ba2) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00031ba2) main_mp2_pane_t

0xb3db,	// (0x0002da83) pec_content_pane_ParamLimits

0xb3db,	// (0x0002da83) pec_content_pane

0x49c4,	// (0x0002706c) scroll_pane_cp015

0xb3ed,	// (0x0002da95) pec_attribute_pane_ParamLimits

0xb3ed,	// (0x0002da95) pec_attribute_pane

0x5e31,	// (0x000284d9) pec_content_pane_g1_ParamLimits

0x5e31,	// (0x000284d9) pec_content_pane_g1

0xb3fd,	// (0x0002daa5) pec_content_pane_t1_ParamLimits

0xb3fd,	// (0x0002daa5) pec_content_pane_t1

0xb40f,	// (0x0002dab7) pec_content_pane_t2_ParamLimits

0xb40f,	// (0x0002dab7) pec_content_pane_t2

0x0001,

0xf501,	// (0x00031ba9) pec_content_pane_t_ParamLimits

0xf501,	// (0x00031ba9) pec_content_pane_t

0x5e3d,	// (0x000284e5) list_single_graphic_pane_cp01_ParamLimits

0x5e3d,	// (0x000284e5) list_single_graphic_pane_cp01

0x3831,	// (0x00025ed9) bg_popup_sub_pane_cp04

0xb421,	// (0x0002dac9) popup_mup_playback_window_g1

0xb42d,	// (0x0002dad5) popup_mup_playback_window_t1

0xb442,	// (0x0002daea) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00031bae) popup_mup_playback_window_t

0xb479,	// (0x0002db21) main_image_pane_g1_ParamLimits

0xb479,	// (0x0002db21) main_image_pane_g1

0xb4bc,	// (0x0002db64) scroll_pane_cp018_ParamLimits

0xb4bc,	// (0x0002db64) scroll_pane_cp018

0xb4d4,	// (0x0002db7c) scroll_pane_cp016_ParamLimits

0xb4d4,	// (0x0002db7c) scroll_pane_cp016

0x5f08,	// (0x000285b0) smil2_image_pane_ParamLimits

0x5f08,	// (0x000285b0) smil2_image_pane

0x5f30,	// (0x000285d8) smil2_root_pane_ParamLimits

0x5f30,	// (0x000285d8) smil2_root_pane

0x5f68,	// (0x00028610) smil2_text_pane_ParamLimits

0x5f68,	// (0x00028610) smil2_text_pane

0x35d6,	// (0x00025c7e) bg_list_pane_cp06

0xb510,	// (0x0002dbb8) grid_radio_pane

0x35d6,	// (0x00025c7e) bg_popup_window_pane_cp06

0xb518,	// (0x0002dbc0) main_fmradio_pane_t1

0xae71,	// (0x0002d519) heading_pane_cp04

0xb526,	// (0x0002dbce) main_fmradio_pane_t2

0xc52a,	// (0x0002ebd2) popup_cale_lunar_info_window_g1

0xb534,	// (0x0002dbdc) main_fmradio_pane_t3

0xc532,	// (0x0002ebda) popup_cale_lunar_info_window_g2

0xb542,	// (0x0002dbea) main_fmradio_pane_t4

0x0001,

0xb550,	// (0x0002dbf8) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x00031c9c) popup_cale_lunar_info_window_g

0xf51b,	// (0x00031bc3) main_fmradio_pane_t

0xb55e,	// (0x0002dc06) wait_bar_pane_cp03

0xb566,	// (0x0002dc0e) cell_fmradio_pane_ParamLimits

0xb566,	// (0x0002dc0e) cell_fmradio_pane

0xb3bf,	// (0x0002da67) cell_fmradio_pane_g1_ParamLimits

0xb3bf,	// (0x0002da67) cell_fmradio_pane_g1

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp011

0xb579,	// (0x0002dc21) poc_content_pane_ParamLimits

0xb579,	// (0x0002dc21) poc_content_pane

0xb58c,	// (0x0002dc34) scroll_pane_cp019

0x5fd4,	// (0x0002867c) popup_call_poc_act_window_ParamLimits

0x5fd4,	// (0x0002867c) popup_call_poc_act_window

0x5ff4,	// (0x0002869c) popup_call_poc_inact_window_ParamLimits

0x5ff4,	// (0x0002869c) popup_call_poc_inact_window

0xf5b8,	// (0x00031c60) bg_popup_call_poc_act_pane_g

0xc4ea,	// (0x0002eb92) bg_popup_call_poc_inact_pane_g1

0xc4f2,	// (0x0002eb9a) bg_popup_call_poc_inact_pane_g2

0xb594,	// (0x0002dc3c) popup_call_poc_act_window_g2

0xc4fa,	// (0x0002eba2) bg_popup_call_poc_inact_pane_g3

0xc47a,	// (0x0002eb22) bg_popup_call_poc_inact_pane_g4

0xc502,	// (0x0002ebaa) bg_popup_call_poc_inact_pane_g5

0xb59c,	// (0x0002dc44) popup_call_poc_act_window_t1_ParamLimits

0xb59c,	// (0x0002dc44) popup_call_poc_act_window_t1

0xb5c4,	// (0x0002dc6c) popup_call_poc_act_window_t2_ParamLimits

0xb5c4,	// (0x0002dc6c) popup_call_poc_act_window_t2

0xb5ec,	// (0x0002dc94) popup_call_poc_act_window_t3_ParamLimits

0xb5ec,	// (0x0002dc94) popup_call_poc_act_window_t3

0xb614,	// (0x0002dcbc) popup_call_poc_act_window_t4_ParamLimits

0xb614,	// (0x0002dcbc) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00031bce) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00031bce) popup_call_poc_act_window_t

0xc50a,	// (0x0002ebb2) bg_popup_call_poc_inact_pane_g6

0xc512,	// (0x0002ebba) bg_popup_call_poc_inact_pane_g7

0xc51a,	// (0x0002ebc2) bg_popup_call_poc_inact_pane_g8

0xb626,	// (0x0002dcce) popup_call_poc_inact_window_g2

0xc522,	// (0x0002ebca) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x00031c77) bg_popup_call_poc_inact_pane_g

0xb62e,	// (0x0002dcd6) popup_call_poc_inact_window_t1_ParamLimits

0xb62e,	// (0x0002dcd6) popup_call_poc_inact_window_t1

0xb643,	// (0x0002dceb) popup_call_poc_inact_window_t2_ParamLimits

0xb643,	// (0x0002dceb) popup_call_poc_inact_window_t2

0xb658,	// (0x0002dd00) popup_call_poc_inact_window_t3_ParamLimits

0xb658,	// (0x0002dd00) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00031bd7) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00031bd7) popup_call_poc_inact_window_t

0xc696,	// (0x0002ed3e) context_pane_ParamLimits

0x6706,	// (0x00028dae) signal_pane_ParamLimits

0xb157,	// (0x0002d7ff) main_call2_pane

0xc684,	// (0x0002ed2c) popup_phob_thumbnail2_window_ParamLimits

0xc684,	// (0x0002ed2c) popup_phob_thumbnail2_window

0xb36f,	// (0x0002da17) aid_hotspot_pointer_arrow_pane

0xb377,	// (0x0002da1f) aid_hotspot_pointer_hand_pane

0x62c9,	// (0x00028971) phob_pre_status_pane_g5

0x410f,	// (0x000267b7) cams_zoom_pane_ParamLimits

0x411e,	// (0x000267c6) image_vga_pane_ParamLimits

0x4136,	// (0x000267de) main_camera_pane_g1_ParamLimits

0x4146,	// (0x000267ee) main_camera_pane_g2_ParamLimits

0x4156,	// (0x000267fe) main_camera_pane_g3_ParamLimits

0x4166,	// (0x0002680e) main_camera_pane_g4_ParamLimits

0x4176,	// (0x0002681e) main_camera_pane_g5_ParamLimits

0x4186,	// (0x0002682e) main_camera_pane_g6_ParamLimits

0x4196,	// (0x0002683e) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000318d6) main_camera_pane_g_ParamLimits

0x41b2,	// (0x0002685a) main_camera_pane_t1_ParamLimits

0x41c8,	// (0x00026870) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000318e7) main_camera_pane_t_ParamLimits

0x3831,	// (0x00025ed9) bg_popup_preview_window_pane_cp01_ParamLimits

0x3831,	// (0x00025ed9) bg_popup_preview_window_pane_cp01

0xb66d,	// (0x0002dd15) popup_phob_thumbnail2_window_g1_ParamLimits

0xb66d,	// (0x0002dd15) popup_phob_thumbnail2_window_g1

0x35d6,	// (0x00025c7e) call2_cli_visual_pane

0x6020,	// (0x000286c8) popup_call2_audio_conf_window_ParamLimits

0x6020,	// (0x000286c8) popup_call2_audio_conf_window

0x603e,	// (0x000286e6) popup_call2_audio_first_window_ParamLimits

0x603e,	// (0x000286e6) popup_call2_audio_first_window

0x60b4,	// (0x0002875c) popup_call2_audio_in_window_ParamLimits

0x60b4,	// (0x0002875c) popup_call2_audio_in_window

0x60e8,	// (0x00028790) popup_call2_audio_out_window_ParamLimits

0x60e8,	// (0x00028790) popup_call2_audio_out_window

0x613a,	// (0x000287e2) popup_call2_audio_second_window_ParamLimits

0x613a,	// (0x000287e2) popup_call2_audio_second_window

0x618c,	// (0x00028834) popup_call2_audio_wait_window_ParamLimits

0x618c,	// (0x00028834) popup_call2_audio_wait_window

0x35d6,	// (0x00025c7e) bg_popup_call2_act_pane_cp03

0x3813,	// (0x00025ebb) list_conf_pane_cp

0xb679,	// (0x0002dd21) popup_call2_audio_conf_window_t1

0xaece,	// (0x0002d576) list_single_graphic_popup_conf2_pane_ParamLimits

0xaece,	// (0x0002d576) list_single_graphic_popup_conf2_pane

0xaee1,	// (0x0002d589) list_highlight_pane_cp04

0xb687,	// (0x0002dd2f) list_single_graphic_popup_conf2_pane_g1

0xaef2,	// (0x0002d59a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00031bde) list_single_graphic_popup_conf2_pane_g

0xb68f,	// (0x0002dd37) list_single_graphic_popup_conf2_pane_t1

0xb69d,	// (0x0002dd45) bg_popup_call2_act_pane_cp01_ParamLimits

0xb69d,	// (0x0002dd45) bg_popup_call2_act_pane_cp01

0xb727,	// (0x0002ddcf) call_type_pane_cp05_ParamLimits

0xb727,	// (0x0002ddcf) call_type_pane_cp05

0xb77b,	// (0x0002de23) popup_call2_audio_second_window_g1_ParamLimits

0xb77b,	// (0x0002de23) popup_call2_audio_second_window_g1

0xb7cf,	// (0x0002de77) popup_call2_audio_second_window_g2_ParamLimits

0xb7cf,	// (0x0002de77) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00031be3) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00031be3) popup_call2_audio_second_window_g

0xb834,	// (0x0002dedc) popup_call2_audio_second_window_t1_ParamLimits

0xb834,	// (0x0002dedc) popup_call2_audio_second_window_t1

0xb8ef,	// (0x0002df97) popup_call2_audio_second_window_t2_ParamLimits

0xb8ef,	// (0x0002df97) popup_call2_audio_second_window_t2

0xb942,	// (0x0002dfea) popup_call2_audio_second_window_t3_ParamLimits

0xb942,	// (0x0002dfea) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00031bea) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00031bea) popup_call2_audio_second_window_t

0x35d6,	// (0x00025c7e) bg_popup_call2_in_pane_cp02

0x35e0,	// (0x00025c88) call_type_pane_cp04

0x35e8,	// (0x00025c90) popup_call2_audio_wait_window_g1

0x35f0,	// (0x00025c98) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000317c3) popup_call2_audio_wait_window_g

0x35f8,	// (0x00025ca0) popup_call2_audio_wait_window_t3

0xba35,	// (0x0002e0dd) bg_popup_call2_act_pane_ParamLimits

0xba35,	// (0x0002e0dd) bg_popup_call2_act_pane

0xbaf5,	// (0x0002e19d) call_type_pane_cp03_ParamLimits

0xbaf5,	// (0x0002e19d) call_type_pane_cp03

0xbb59,	// (0x0002e201) popup_call2_audio_first_window_g1_ParamLimits

0xbb59,	// (0x0002e201) popup_call2_audio_first_window_g1

0xbbc9,	// (0x0002e271) popup_call2_audio_first_window_g2_ParamLimits

0xbbc9,	// (0x0002e271) popup_call2_audio_first_window_g2

0xb228,	// (0x0002d8d0) popup_call2_audio_first_window_g3_ParamLimits

0xb228,	// (0x0002d8d0) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00031bf3) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00031bf3) popup_call2_audio_first_window_g

0xbca7,	// (0x0002e34f) popup_call2_audio_first_window_t1_ParamLimits

0xbca7,	// (0x0002e34f) popup_call2_audio_first_window_t1

0xbdaa,	// (0x0002e452) popup_call2_audio_first_window_t4_ParamLimits

0xbdaa,	// (0x0002e452) popup_call2_audio_first_window_t4

0xbe8d,	// (0x0002e535) popup_call2_audio_first_window_t5_ParamLimits

0xbe8d,	// (0x0002e535) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00031bfe) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00031bfe) popup_call2_audio_first_window_t

0x3829,	// (0x00025ed1) bg_popup_call2_act_pane_g1

0xc53a,	// (0x0002ebe2) popup_cale_lunar_info_window_t1

0xc548,	// (0x0002ebf0) popup_cale_lunar_info_window_t2

0xc556,	// (0x0002ebfe) popup_cale_lunar_info_window_t3

0x35d6,	// (0x00025c7e) bg_popup_call2_bubble_pane

0xbf8e,	// (0x0002e636) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf8e,	// (0x0002e636) bg_popup_call2_in_pane_cp01

0x328e,	// (0x00025936) call_type_pane_cp02

0xbfd6,	// (0x0002e67e) popup_call2_audio_out_window_g1_ParamLimits

0xbfd6,	// (0x0002e67e) popup_call2_audio_out_window_g1

0xc002,	// (0x0002e6aa) popup_call2_audio_out_window_g2_ParamLimits

0xc002,	// (0x0002e6aa) popup_call2_audio_out_window_g2

0xc02a,	// (0x0002e6d2) popup_call2_audio_out_window_g3_ParamLimits

0xc02a,	// (0x0002e6d2) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00031c07) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00031c07) popup_call2_audio_out_window_g

0xc065,	// (0x0002e70d) popup_call2_audio_out_window_t1_ParamLimits

0xc065,	// (0x0002e70d) popup_call2_audio_out_window_t1

0xc0c4,	// (0x0002e76c) popup_call2_audio_out_window_t2_ParamLimits

0xc0c4,	// (0x0002e76c) popup_call2_audio_out_window_t2

0xc118,	// (0x0002e7c0) popup_call2_audio_out_window_t3_ParamLimits

0xc118,	// (0x0002e7c0) popup_call2_audio_out_window_t3

0xc12e,	// (0x0002e7d6) popup_call2_audio_out_window_t4_ParamLimits

0xc12e,	// (0x0002e7d6) popup_call2_audio_out_window_t4

0xc144,	// (0x0002e7ec) popup_call2_audio_out_window_t5_ParamLimits

0xc144,	// (0x0002e7ec) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00031c10) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00031c10) popup_call2_audio_out_window_t

0xc1a8,	// (0x0002e850) bg_popup_call2_in_pane_ParamLimits

0xc1a8,	// (0x0002e850) bg_popup_call2_in_pane

0xc204,	// (0x0002e8ac) popup_call2_audio_in_window_g1_ParamLimits

0xc204,	// (0x0002e8ac) popup_call2_audio_in_window_g1

0xc23c,	// (0x0002e8e4) popup_call2_audio_in_window_g2_ParamLimits

0xc23c,	// (0x0002e8e4) popup_call2_audio_in_window_g2

0xc274,	// (0x0002e91c) popup_call2_audio_in_window_g3_ParamLimits

0xc274,	// (0x0002e91c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00031c1d) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00031c1d) popup_call2_audio_in_window_g

0xc2cc,	// (0x0002e974) popup_call2_audio_in_window_t1_ParamLimits

0xc2cc,	// (0x0002e974) popup_call2_audio_in_window_t1

0xc34c,	// (0x0002e9f4) popup_call2_audio_in_window_t2_ParamLimits

0xc34c,	// (0x0002e9f4) popup_call2_audio_in_window_t2

0xc3cc,	// (0x0002ea74) popup_call2_audio_in_window_t3_ParamLimits

0xc3cc,	// (0x0002ea74) popup_call2_audio_in_window_t3

0xc3e6,	// (0x0002ea8e) popup_call2_audio_in_window_t4_ParamLimits

0xc3e6,	// (0x0002ea8e) popup_call2_audio_in_window_t4

0xc3f8,	// (0x0002eaa0) popup_call2_audio_in_window_t5_ParamLimits

0xc3f8,	// (0x0002eaa0) popup_call2_audio_in_window_t5

0xc40d,	// (0x0002eab5) popup_call2_audio_in_window_t6_ParamLimits

0xc40d,	// (0x0002eab5) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00031c26) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00031c26) popup_call2_audio_in_window_t

0x3829,	// (0x00025ed1) bg_popup_call2_in_pane_g1

0xc564,	// (0x0002ec0c) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x00031ca1) popup_cale_lunar_info_window_t

0x3831,	// (0x00025ed9) bg_popup_call2_rect_pane_ParamLimits

0x3831,	// (0x00025ed9) bg_popup_call2_rect_pane

0x35d6,	// (0x00025c7e) call2_cli_visual_graphic_pane

0x35d6,	// (0x00025c7e) call2_cli_visual_text_pane

0xc736,	// (0x0002edde) smil_status_volume_pane_g3

0x0002,

0x3b8c,	// (0x00026234) call2_cli_visual_graphic_pane_g1

0x3b8c,	// (0x00026234) call2_cli_visual_graphic_pane_g2

0x3b8c,	// (0x00026234) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00031c33) call2_cli_visual_graphic_pane_g

0xc422,	// (0x0002eaca) bg_popup_call2_rect_pane_g1

0x3ca5,	// (0x0002634d) bg_popup_call2_rect_pane_g2

0xc42a,	// (0x0002ead2) bg_popup_call2_rect_pane_g3

0xc432,	// (0x0002eada) bg_popup_call2_rect_pane_g4

0xc43a,	// (0x0002eae2) bg_popup_call2_rect_pane_g5

0xc442,	// (0x0002eaea) bg_popup_call2_rect_pane_g6

0xc44a,	// (0x0002eaf2) bg_popup_call2_rect_pane_g7

0xc452,	// (0x0002eafa) bg_popup_call2_rect_pane_g8

0xc45a,	// (0x0002eb02) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00031c3a) bg_popup_call2_rect_pane_g

0xc462,	// (0x0002eb0a) bg_popup_call2_bubble_pane_g1

0xc46a,	// (0x0002eb12) bg_popup_call2_bubble_pane_g2

0xc472,	// (0x0002eb1a) bg_popup_call2_bubble_pane_g3

0xc47a,	// (0x0002eb22) bg_popup_call2_bubble_pane_g4

0xc482,	// (0x0002eb2a) bg_popup_call2_bubble_pane_g5

0xc48a,	// (0x0002eb32) bg_popup_call2_bubble_pane_g6

0xc492,	// (0x0002eb3a) bg_popup_call2_bubble_pane_g7

0xc49a,	// (0x0002eb42) bg_popup_call2_bubble_pane_g8

0xc4a2,	// (0x0002eb4a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00031c4d) bg_popup_call2_bubble_pane_g

0x3d1b,	// (0x000263c3) aid_cale_week_size_cell_pane

0x41de,	// (0x00026886) aid_cams_cif_uncrop_pane_ParamLimits

0x41de,	// (0x00026886) aid_cams_cif_uncrop_pane

0x43bd,	// (0x00026a65) aid_cams_size_cell_ParamLimits

0x43bd,	// (0x00026a65) aid_cams_size_cell

0x43d1,	// (0x00026a79) grid_cams_pane_ParamLimits

0x43e6,	// (0x00026a8e) linegrid_cams_pane_ParamLimits

0x45ef,	// (0x00026c97) call_video_pane_t1

0x4609,	// (0x00026cb1) call_video_pane_t2

0x0001,

0xf292,	// (0x0003193a) call_video_pane_t

0x4c00,	// (0x000272a8) aid_cale_month_size_cell_pane_ParamLimits

0x4c00,	// (0x000272a8) aid_cale_month_size_cell_pane

0xf642,	// (0x00031cea) smil_status_volume_pane_g

0xc743,	// (0x0002edeb) volume_smil_pane_ParamLimits

0x2ef7,	// (0x0002559f) aid_popup2_width_pane

0x3bfd,	// (0x000262a5) cell_qdial_pane_g4_ParamLimits

0x3bfd,	// (0x000262a5) cell_qdial_pane_g4

0x5751,	// (0x00027df9) aid_blid_cardinal_pane_ParamLimits

0x575d,	// (0x00027e05) aid_blid_destination_pane_ParamLimits

0x575d,	// (0x00027e05) aid_blid_destination_pane

0x3831,	// (0x00025ed9) bg_popup_call_poc_act_pane_ParamLimits

0x3831,	// (0x00025ed9) bg_popup_call_poc_act_pane

0x3831,	// (0x00025ed9) bg_popup_call_poc_inact_pane_ParamLimits

0x3831,	// (0x00025ed9) bg_popup_call_poc_inact_pane

0xc4aa,	// (0x0002eb52) bg_popup_call_poc_act_pane_g1

0xc4b2,	// (0x0002eb5a) bg_popup_call_poc_act_pane_g2

0xc4ba,	// (0x0002eb62) bg_popup_call_poc_act_pane_g3

0xc47a,	// (0x0002eb22) bg_popup_call_poc_act_pane_g4

0xc482,	// (0x0002eb2a) bg_popup_call_poc_act_pane_g5

0xc4c2,	// (0x0002eb6a) bg_popup_call_poc_act_pane_g6

0xc492,	// (0x0002eb3a) bg_popup_call_poc_act_pane_g7

0xc4ca,	// (0x0002eb72) bg_popup_call_poc_act_pane_g8

0x35d6,	// (0x00025c7e) main_usb_pane

0xc663,	// (0x0002ed0b) popup_cale_lunar_info_window

0x48ac,	// (0x00026f54) im_reading_pane_t1_ParamLimits

0x48e2,	// (0x00026f8a) list_im_pane_ParamLimits

0x48f3,	// (0x00026f9b) scroll_pane_cp07_ParamLimits

0x35d6,	// (0x00025c7e) grid_highlight_pane_cp012

0x3831,	// (0x00025ed9) mup_scale_pane_ParamLimits

0xb3bf,	// (0x0002da67) main_usb_pane_g1_ParamLimits

0xb3bf,	// (0x0002da67) main_usb_pane_g1

0x61e6,	// (0x0002888e) main_usb_pane_g2_ParamLimits

0x61e6,	// (0x0002888e) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x00031c8a) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x00031c8a) main_usb_pane_g

0x61fa,	// (0x000288a2) main_usb_pane_t1_ParamLimits

0x61fa,	// (0x000288a2) main_usb_pane_t1

0x620c,	// (0x000288b4) main_usb_pane_t2_ParamLimits

0x620c,	// (0x000288b4) main_usb_pane_t2

0x621e,	// (0x000288c6) main_usb_pane_t3_ParamLimits

0x621e,	// (0x000288c6) main_usb_pane_t3

0x6230,	// (0x000288d8) main_usb_pane_t4_ParamLimits

0x6230,	// (0x000288d8) main_usb_pane_t4

0x6242,	// (0x000288ea) main_usb_pane_t5_ParamLimits

0x6242,	// (0x000288ea) main_usb_pane_t5

0x6254,	// (0x000288fc) main_usb_pane_t6_ParamLimits

0x6254,	// (0x000288fc) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x00031c8f) main_usb_pane_t_ParamLimits

0xb01b,	// (0x0002d6c3) aid_text_placing

0x56fd,	// (0x00027da5) main_location2_pane_t1_ParamLimits

0x5713,	// (0x00027dbb) main_location2_pane_t2_ParamLimits

0x5729,	// (0x00027dd1) main_location2_pane_t3_ParamLimits

0x573f,	// (0x00027de7) main_location2_pane_t4_ParamLimits

0x573f,	// (0x00027de7) main_location2_pane_t4

0xf3f3,	// (0x00031a9b) main_location2_pane_t_ParamLimits

0x38fb,	// (0x00025fa3) find_pinb_pane_g2_ParamLimits

0x38fb,	// (0x00025fa3) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000317e9) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000317e9) find_pinb_pane_g

0x3907,	// (0x00025faf) find_pinb_pane_t1_ParamLimits

0x3919,	// (0x00025fc1) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000317ee) find_pinb_pane_t_ParamLimits

0x35d6,	// (0x00025c7e) main_call3_pane

0x4f71,	// (0x00027619) cale_month_day_heading_pane_t1_ParamLimits

0x4fcf,	// (0x00027677) cale_month_day_heading_pane_t2_ParamLimits

0x5034,	// (0x000276dc) cale_month_day_heading_pane_t3_ParamLimits

0x5099,	// (0x00027741) cale_month_day_heading_pane_t4_ParamLimits

0x50fe,	// (0x000277a6) cale_month_day_heading_pane_t5_ParamLimits

0x5163,	// (0x0002780b) cale_month_day_heading_pane_t6_ParamLimits

0x51c8,	// (0x00027870) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00031972) cale_month_day_heading_pane_t_ParamLimits

0x53c0,	// (0x00027a68) smil_status_volume_pane

0x5d6f,	// (0x00028417) postcard_address_pane_ParamLimits

0x5d6f,	// (0x00028417) postcard_address_pane

0x5d81,	// (0x00028429) postcard_message_pane_ParamLimits

0x5d81,	// (0x00028429) postcard_message_pane

0x61c4,	// (0x0002886c) call2_cli_visual_pane_t1_ParamLimits

0x61c4,	// (0x0002886c) call2_cli_visual_pane_t1

0x6922,	// (0x00028fca) postcard_message_pane_t1_ParamLimits

0x6922,	// (0x00028fca) postcard_message_pane_t1

0x690b,	// (0x00028fb3) postcard_address_pane_t1_ParamLimits

0x690b,	// (0x00028fb3) postcard_address_pane_t1

0x68f9,	// (0x00028fa1) popup_call3_audio_in_window_ParamLimits

0x68f9,	// (0x00028fa1) popup_call3_audio_in_window

0x6788,	// (0x00028e30) bg_popup_call3_in_pane_ParamLimits

0x6788,	// (0x00028e30) bg_popup_call3_in_pane

0x67fa,	// (0x00028ea2) popup_call3_audio_in_window_g1_ParamLimits

0x67fa,	// (0x00028ea2) popup_call3_audio_in_window_g1

0x681a,	// (0x00028ec2) popup_call3_audio_in_window_g2_ParamLimits

0x681a,	// (0x00028ec2) popup_call3_audio_in_window_g2

0x683a,	// (0x00028ee2) popup_call3_audio_in_window_g3_ParamLimits

0x683a,	// (0x00028ee2) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x00031cf1) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x00031cf1) popup_call3_audio_in_window_g

0x686b,	// (0x00028f13) popup_call3_audio_in_window_t1_ParamLimits

0x686b,	// (0x00028f13) popup_call3_audio_in_window_t1

0x68a9,	// (0x00028f51) popup_call3_audio_in_window_t2_ParamLimits

0x68a9,	// (0x00028f51) popup_call3_audio_in_window_t2

0x68e7,	// (0x00028f8f) popup_call3_audio_in_window_t3_ParamLimits

0x68e7,	// (0x00028f8f) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x00031cfa) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x00031cfa) popup_call3_audio_in_window_t

0xb157,	// (0x0002d7ff) bg_popup_call3_rect_pane

0xc422,	// (0x0002eaca) bg_popup_call3_rect_pane_g1

0x3ca5,	// (0x0002634d) bg_popup_call3_rect_pane_g2

0xc42a,	// (0x0002ead2) bg_popup_call3_rect_pane_g3

0xc432,	// (0x0002eada) bg_popup_call3_rect_pane_g4

0xc43a,	// (0x0002eae2) bg_popup_call3_rect_pane_g5

0xc442,	// (0x0002eaea) bg_popup_call3_rect_pane_g6

0xc44a,	// (0x0002eaf2) bg_popup_call3_rect_pane_g7

0x5a5b,	// (0x00028103) mup_visualizer_osc_pane

0xb236,	// (0x0002d8de) mup_visualizer_spec_pane

0x67b8,	// (0x00028e60) call3_video_qcif_pane_ParamLimits

0x67b8,	// (0x00028e60) call3_video_qcif_pane

0x67c9,	// (0x00028e71) call3_video_qcif_uncrop_pane_ParamLimits

0x67c9,	// (0x00028e71) call3_video_qcif_uncrop_pane

0x67d5,	// (0x00028e7d) call3_video_subqcif_pane_ParamLimits

0x67d5,	// (0x00028e7d) call3_video_subqcif_pane

0x67e9,	// (0x00028e91) call3_video_subqcif_uncrop_pane_ParamLimits

0x67e9,	// (0x00028e91) call3_video_subqcif_uncrop_pane

0x685a,	// (0x00028f02) popup_call3_audio_in_window_g4_ParamLimits

0x685a,	// (0x00028f02) popup_call3_audio_in_window_g4

0x6777,	// (0x00028e1f) mup_spec_half_pane

0x6780,	// (0x00028e28) mup_spec_half_pane_cp

0xc6f6,	// (0x0002ed9e) mup_osc_middle_pane

0xc6ff,	// (0x0002eda7) mup_visualizer_osc_pane_g1

0x6758,	// (0x00028e00) mup_spec_bar_pane_ParamLimits

0x6758,	// (0x00028e00) mup_spec_bar_pane

0xc6e3,	// (0x0002ed8b) mup_spec_bar_pane_g1

0xc6ed,	// (0x0002ed95) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00031ce5) mup_spec_bar_pane_g

0x3d1b,	// (0x000263c3) aid_cale_week_size_cell_pane_ParamLimits

0x3d2e,	// (0x000263d6) bg_cale_heading_pane_ParamLimits

0x3d42,	// (0x000263ea) bg_cale_pane_cp01_ParamLimits

0x3d5b,	// (0x00026403) cale_week_corner_pane_ParamLimits

0x3d71,	// (0x00026419) cale_week_day_heading_pane_ParamLimits

0x3d85,	// (0x0002642d) cale_week_scroll_pane_g1_ParamLimits

0x3d96,	// (0x0002643e) cale_week_scroll_pane_g2_ParamLimits

0x3da7,	// (0x0002644f) cale_week_scroll_pane_g3_ParamLimits

0x3db8,	// (0x00026460) cale_week_scroll_pane_g4_ParamLimits

0x3dc9,	// (0x00026471) cale_week_scroll_pane_g5_ParamLimits

0x3dda,	// (0x00026482) cale_week_scroll_pane_g6_ParamLimits

0x3deb,	// (0x00026493) cale_week_scroll_pane_g7_ParamLimits

0x3dfc,	// (0x000264a4) cale_week_scroll_pane_g8_ParamLimits

0x3e0f,	// (0x000264b7) cale_week_scroll_pane_g9_ParamLimits

0x3e20,	// (0x000264c8) cale_week_scroll_pane_g10_ParamLimits

0x3e31,	// (0x000264d9) cale_week_scroll_pane_g11_ParamLimits

0x3e42,	// (0x000264ea) cale_week_scroll_pane_g12_ParamLimits

0x3e53,	// (0x000264fb) cale_week_scroll_pane_g13_ParamLimits

0x3e64,	// (0x0002650c) cale_week_scroll_pane_g14_ParamLimits

0x3e75,	// (0x0002651d) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0003187a) cale_week_scroll_pane_g_ParamLimits

0x3e86,	// (0x0002652e) cale_week_time_pane_ParamLimits

0x3e99,	// (0x00026541) grid_cale_week_pane_ParamLimits

0x3eac,	// (0x00026554) listscroll_cale_week_pane_t1

0x3ebe,	// (0x00026566) scroll_pane_cp08_ParamLimits

0x4c64,	// (0x0002730c) cale_month_corner_pane_ParamLimits

0x4f1e,	// (0x000275c6) cale_month_pane_t1

0x4f30,	// (0x000275d8) cale_month_week_pane_ParamLimits

0x5544,	// (0x00027bec) popup_call_status_window_g1_ParamLimits

0x5558,	// (0x00027c00) popup_call_status_window_g2_ParamLimits

0x556c,	// (0x00027c14) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00031a22) popup_call_status_window_g_ParamLimits

0xadf2,	// (0x0002d49a) aid_call2_pane

0x5c5e,	// (0x00028306) msg_header_pane_g1

0x5d6f,	// (0x00028417) postcard_address2_pane_ParamLimits

0x5d6f,	// (0x00028417) postcard_address2_pane

0x5d81,	// (0x00028429) postcard_message2_pane_ParamLimits

0x5d81,	// (0x00028429) postcard_message2_pane

0x6714,	// (0x00028dbc) message2_row_pane_ParamLimits

0x6714,	// (0x00028dbc) message2_row_pane

0x672e,	// (0x00028dd6) address2_row_pane_ParamLimits

0x672e,	// (0x00028dd6) address2_row_pane

0xc6b1,	// (0x0002ed59) postcard_message2_row_pane_g1

0xc6b9,	// (0x0002ed61) postcard_message2_row_pane_t1

0xc6b1,	// (0x0002ed59) address2_row_pane_g1

0xc6b9,	// (0x0002ed61) address2_row_pane_t1

0x2073,	// (0x0002471b) aid_size_cell_vorec

0x35d6,	// (0x00025c7e) main_rss_pane

0x6741,	// (0x00028de9) rss_list_single_pane_ParamLimits

0x6741,	// (0x00028de9) rss_list_single_pane

0xc6c7,	// (0x0002ed6f) rss_list_single_pane_t1

0xc6d5,	// (0x0002ed7d) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x00031ce0) rss_list_single_pane_t

0x35d6,	// (0x00025c7e) main_camera2_pane

0x35d6,	// (0x00025c7e) main_video2_pane

0x210d,	// (0x000247b5) cams_zoom_pane_cp2_ParamLimits

0x210d,	// (0x000247b5) cams_zoom_pane_cp2

0x2124,	// (0x000247cc) image2_vga_pane_ParamLimits

0x2124,	// (0x000247cc) image2_vga_pane

0x215a,	// (0x00024802) main_camera2_pane_g1_ParamLimits

0x215a,	// (0x00024802) main_camera2_pane_g1

0x217a,	// (0x00024822) main_camera2_pane_g2_ParamLimits

0x217a,	// (0x00024822) main_camera2_pane_g2

0x2191,	// (0x00024839) main_camera2_pane_g3_ParamLimits

0x2191,	// (0x00024839) main_camera2_pane_g3

0x21a8,	// (0x00024850) main_camera2_pane_g4_ParamLimits

0x21a8,	// (0x00024850) main_camera2_pane_g4

0x21bf,	// (0x00024867) main_camera2_pane_g5_ParamLimits

0x21bf,	// (0x00024867) main_camera2_pane_g5

0x21d6,	// (0x0002487e) main_camera2_pane_g6_ParamLimits

0x21d6,	// (0x0002487e) main_camera2_pane_g6

0x21ed,	// (0x00024895) main_camera2_pane_g7_ParamLimits

0x21ed,	// (0x00024895) main_camera2_pane_g7

0x2204,	// (0x000248ac) main_camera2_pane_g8_ParamLimits

0x2204,	// (0x000248ac) main_camera2_pane_g8

0x0008,

0xf659,	// (0x00031d01) main_camera2_pane_g_ParamLimits

0xf659,	// (0x00031d01) main_camera2_pane_g

0x2232,	// (0x000248da) main_camera2_pane_t1_ParamLimits

0x2232,	// (0x000248da) main_camera2_pane_t1

0x2261,	// (0x00024909) main_camera2_pane_t2_ParamLimits

0x2261,	// (0x00024909) main_camera2_pane_t2

0x227e,	// (0x00024926) main_camera2_pane_t3_ParamLimits

0x227e,	// (0x00024926) main_camera2_pane_t3

0x22ca,	// (0x00024972) main_camera2_pane_t4_ParamLimits

0x22ca,	// (0x00024972) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x00031d14) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x00031d14) main_camera2_pane_t

0x233f,	// (0x000249e7) cams_zoom_pane_cp4_ParamLimits

0x233f,	// (0x000249e7) cams_zoom_pane_cp4

0x2355,	// (0x000249fd) image2_cif_pane_ParamLimits

0x2355,	// (0x000249fd) image2_cif_pane

0x2378,	// (0x00024a20) image2_subqcif_pane_ParamLimits

0x2378,	// (0x00024a20) image2_subqcif_pane

0x238e,	// (0x00024a36) main_video2_pane_g1_ParamLimits

0x238e,	// (0x00024a36) main_video2_pane_g1

0x23a8,	// (0x00024a50) main_video2_pane_g2_ParamLimits

0x23a8,	// (0x00024a50) main_video2_pane_g2

0x23be,	// (0x00024a66) main_video2_pane_g3_ParamLimits

0x23be,	// (0x00024a66) main_video2_pane_g3

0x23d4,	// (0x00024a7c) main_video2_pane_g4_ParamLimits

0x23d4,	// (0x00024a7c) main_video2_pane_g4

0x23ea,	// (0x00024a92) main_video2_pane_g5_ParamLimits

0x23ea,	// (0x00024a92) main_video2_pane_g5

0x2400,	// (0x00024aa8) main_video2_pane_g6_ParamLimits

0x2400,	// (0x00024aa8) main_video2_pane_g6

0x0005,

0xf67b,	// (0x00031d23) main_video2_pane_g_ParamLimits

0xf67b,	// (0x00031d23) main_video2_pane_g

0x241a,	// (0x00024ac2) main_video2_pane_t1_ParamLimits

0x241a,	// (0x00024ac2) main_video2_pane_t1

0x243e,	// (0x00024ae6) main_video2_pane_t2_ParamLimits

0x243e,	// (0x00024ae6) main_video2_pane_t2

0x2488,	// (0x00024b30) main_video2_pane_t3_ParamLimits

0x2488,	// (0x00024b30) main_video2_pane_t3

0x0002,

0xf688,	// (0x00031d30) main_video2_pane_t_ParamLimits

0xf688,	// (0x00031d30) main_video2_pane_t

0x6303,	// (0x000289ab) call_muted_g2

0x0001,

0xf62a,	// (0x00031cd2) call_muted_g

0x35d6,	// (0x00025c7e) main_mup2_pane

0x693d,	// (0x00028fe5) main_mup2_pane_g1_ParamLimits

0x693d,	// (0x00028fe5) main_mup2_pane_g1

0x6949,	// (0x00028ff1) main_mup2_pane_g2_ParamLimits

0x6949,	// (0x00028ff1) main_mup2_pane_g2

0xc862,	// (0x0002ef0a) main_mup_pane_g13_cp1

0xc86a,	// (0x0002ef12) mup_volume_pane_cp1

0x6965,	// (0x0002900d) main_mup2_pane_g4_ParamLimits

0x6965,	// (0x0002900d) main_mup2_pane_g4

0x6975,	// (0x0002901d) main_mup2_pane_g5_ParamLimits

0x6975,	// (0x0002901d) main_mup2_pane_g5

0x6985,	// (0x0002902d) main_mup2_pane_g6_ParamLimits

0x6985,	// (0x0002902d) main_mup2_pane_g6

0x6995,	// (0x0002903d) main_mup2_pane_g7_ParamLimits

0x6995,	// (0x0002903d) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x00031d37) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x00031d37) main_mup2_pane_g

0x69ad,	// (0x00029055) main_mup2_pane_t1_ParamLimits

0x69ad,	// (0x00029055) main_mup2_pane_t1

0x69c3,	// (0x0002906b) main_mup2_pane_t2_ParamLimits

0x69c3,	// (0x0002906b) main_mup2_pane_t2

0x69d9,	// (0x00029081) main_mup2_pane_t3_ParamLimits

0x69d9,	// (0x00029081) main_mup2_pane_t3

0x69ef,	// (0x00029097) main_mup2_pane_t4_ParamLimits

0x69ef,	// (0x00029097) main_mup2_pane_t4

0x6a07,	// (0x000290af) main_mup2_pane_t5_ParamLimits

0x6a07,	// (0x000290af) main_mup2_pane_t5

0x6a1f,	// (0x000290c7) main_mup2_pane_t6_ParamLimits

0x6a1f,	// (0x000290c7) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x00031d46) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x00031d46) main_mup2_pane_t

0x6a4f,	// (0x000290f7) mup2_visualizer_pane_ParamLimits

0x6a4f,	// (0x000290f7) mup2_visualizer_pane

0x6a7a,	// (0x00029122) mup_progress_pane_cp_ParamLimits

0x6a7a,	// (0x00029122) mup_progress_pane_cp

0xc844,	// (0x0002eeec) mup_volume_pane_cp_ParamLimits

0xc844,	// (0x0002eeec) mup_volume_pane_cp

0x6a8e,	// (0x00029136) mup2_visualizer_pane_g1_ParamLimits

0x6a8e,	// (0x00029136) mup2_visualizer_pane_g1

0xc783,	// (0x0002ee2b) mup2_visualizer_pane_g2_ParamLimits

0xc783,	// (0x0002ee2b) mup2_visualizer_pane_g2

0x6aa3,	// (0x0002914b) mup2_visualizer_pane_g3_ParamLimits

0x6aa3,	// (0x0002914b) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x00031d53) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x00031d53) mup2_visualizer_pane_g

0xb508,	// (0x0002dbb0) aid_size_cell_fmradio

0x645f,	// (0x00028b07) aid_height_parent_landcape

0x49ab,	// (0x00027053) wml_content_pane_cp

0x49b3,	// (0x0002705b) wml_tabs_pane

0x49bc,	// (0x00027064) popup_wml_miniature_window

0x49c4,	// (0x0002706c) scroll_pane_cp021

0x49d8,	// (0x00027080) wml_content_pane_comp8

0x35d6,	// (0x00025c7e) bg_popup_sub_pane_cp05

0xc7a1,	// (0x0002ee49) popup_wml_miniature_window_g1

0xc7a9,	// (0x0002ee51) wml_miniature_view_pane

0x6aaf,	// (0x00029157) aid_size_wml_view

0x6ab7,	// (0x0002915f) wml_miniature_view_pane_g1

0x6ac0,	// (0x00029168) wml_miniature_view_pane_g2

0x6ac9,	// (0x00029171) wml_miniature_view_pane_g3

0x6ad1,	// (0x00029179) wml_miniature_view_pane_g4

0x6ad9,	// (0x00029181) wml_miniature_view_pane_g5

0x6ae1,	// (0x00029189) wml_miniature_view_pane_g6

0x6ae9,	// (0x00029191) wml_miniature_view_pane_g7

0x6af1,	// (0x00029199) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x00031d5a) wml_miniature_view_pane_g

0xc7b1,	// (0x0002ee59) background_graphic_ParamLimits

0xc7b1,	// (0x0002ee59) background_graphic

0xc7bd,	// (0x0002ee65) wml_tabs_2_pane

0xc7c6,	// (0x0002ee6e) wml_tabs_3_pane_ParamLimits

0xc7c6,	// (0x0002ee6e) wml_tabs_3_pane

0xc7d8,	// (0x0002ee80) wml_tabs_4_pane_ParamLimits

0xc7d8,	// (0x0002ee80) wml_tabs_4_pane

0xc7ee,	// (0x0002ee96) wml_tabs_5_pane_ParamLimits

0xc7ee,	// (0x0002ee96) wml_tabs_5_pane

0xc808,	// (0x0002eeb0) wml_tabs_pane_g2_ParamLimits

0xc808,	// (0x0002eeb0) wml_tabs_pane_g2

0xc81c,	// (0x0002eec4) wml_tabs_pane_g3_ParamLimits

0xc81c,	// (0x0002eec4) wml_tabs_pane_g3

0x6af9,	// (0x000291a1) wml_tabs_2_active_pane_ParamLimits

0x6af9,	// (0x000291a1) wml_tabs_2_active_pane

0x6b09,	// (0x000291b1) wml_tabs_2_passive_pane_ParamLimits

0x6b09,	// (0x000291b1) wml_tabs_2_passive_pane

0x6b19,	// (0x000291c1) wml_tabs_3_active_pane_cp_ParamLimits

0x6b19,	// (0x000291c1) wml_tabs_3_active_pane_cp

0x6b2a,	// (0x000291d2) wml_tabs_3_passive_pane_ParamLimits

0x6b2a,	// (0x000291d2) wml_tabs_3_passive_pane

0x6b3b,	// (0x000291e3) wml_tabs_3_passive_pane_cp_ParamLimits

0x6b3b,	// (0x000291e3) wml_tabs_3_passive_pane_cp

0x6b4c,	// (0x000291f4) tabs_4_active_pane

0x6b54,	// (0x000291fc) tabs_4_passive_pane

0x6b5c,	// (0x00029204) tabs_4_passive_pane_cp

0x6b64,	// (0x0002920c) tabs_4_passive_pane_cp2

0x61de,	// (0x00028886) aid_height_text

0x5a31,	// (0x000280d9) mup_volume_cont_pane_ParamLimits

0x5a31,	// (0x000280d9) mup_volume_cont_pane

0x38b9,	// (0x00025f61) aid_size_cell_pinb

0x38c3,	// (0x00025f6b) aid_size_list_pinb

0x6a66,	// (0x0002910e) mup2_volume_cont_pane_ParamLimits

0x6a66,	// (0x0002910e) mup2_volume_cont_pane

0xc830,	// (0x0002eed8) mup2_volume_cont_pane_g1_ParamLimits

0xc830,	// (0x0002eed8) mup2_volume_cont_pane_g1

0x2eff,	// (0x000255a7) aid_size_cell_touch_ParamLimits

0x2eff,	// (0x000255a7) aid_size_cell_touch

0x3125,	// (0x000257cd) touch_pane_ParamLimits

0x3125,	// (0x000257cd) touch_pane

0x2ee5,	// (0x0002558d) main_rss2_pane

0xc872,	// (0x0002ef1a) listscroll_rss2_pane

0xc87b,	// (0x0002ef23) rss2_navigation_pane

0xc883,	// (0x0002ef2b) list_rss2_pane

0xaf98,	// (0x0002d640) scroll_pane_cp22

0xc88b,	// (0x0002ef33) rss2_navigation_pane_g1

0xc894,	// (0x0002ef3c) rss2_navigation_pane_g2

0xc89c,	// (0x0002ef44) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x00031d6b) rss2_navigation_pane_g

0xc8a4,	// (0x0002ef4c) rss2_navigation_pane_t1

0x6b6c,	// (0x00029214) rss2_list_single_pane_ParamLimits

0x6b6c,	// (0x00029214) rss2_list_single_pane

0xc8b2,	// (0x0002ef5a) rss2_list_single_pane_t2

0xc8c0,	// (0x0002ef68) rss2_list_single_pane_t3_ParamLimits

0xc8c0,	// (0x0002ef68) rss2_list_single_pane_t3

0xc8dd,	// (0x0002ef85) rss2_list_single_pane_t4

0x53aa,	// (0x00027a52) smil_status_pane_g1

0x310f,	// (0x000257b7) main_image2_pane_ParamLimits

0x310f,	// (0x000257b7) main_image2_pane

0x221b,	// (0x000248c3) main_camera2_pane_g9_ParamLimits

0x221b,	// (0x000248c3) main_camera2_pane_g9

0x230d,	// (0x000249b5) main_camera2_pane_t5_ParamLimits

0x230d,	// (0x000249b5) main_camera2_pane_t5

0xc758,	// (0x0002ee00) main_camera2_pane_t6_ParamLimits

0xc758,	// (0x0002ee00) main_camera2_pane_t6

0x6b80,	// (0x00029228) main_image2_pane_g1_ParamLimits

0x6b80,	// (0x00029228) main_image2_pane_g1

0x5f96,	// (0x0002863e) smil2_video_pane_ParamLimits

0x5f96,	// (0x0002863e) smil2_video_pane

0x2f24,	// (0x000255cc) aid_zoom_text_primary_cp

0x30cd,	// (0x00025775) popup_preview_fixed_window

0x48a4,	// (0x00026f4c) im_reading_pane_g1

0x2101,	// (0x000247a9) cams2_bc_adjust_pane_cp_ParamLimits

0x2101,	// (0x000247a9) cams2_bc_adjust_pane_cp

0x2333,	// (0x000249db) cams2_bc_adjust_pane_ParamLimits

0x2333,	// (0x000249db) cams2_bc_adjust_pane

0xc8eb,	// (0x0002ef93) cams2_bc_adjust_pane_g1

0xc8f3,	// (0x0002ef9b) cams2_slider_pane

0xc8fc,	// (0x0002efa4) cams2_slider_pane_g1

0xc905,	// (0x0002efad) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x00031d72) cams2_slider_pane_g

0x1e47,	// (0x000244ef) calc_display_pane_ParamLimits

0x1e63,	// (0x0002450b) calc_paper_pane_ParamLimits

0x1e84,	// (0x0002452c) grid_calc_pane_ParamLimits

0xae54,	// (0x0002d4fc) popup_clock_digital_window_t1_ParamLimits

0xb4a5,	// (0x0002db4d) main_image_pane_t1

0x1e29,	// (0x000244d1) aid_size_cell_calc_ParamLimits

0x1e29,	// (0x000244d1) aid_size_cell_calc

0x648f,	// (0x00028b37) popup_blid_sat_info2_window_ParamLimits

0x648f,	// (0x00028b37) popup_blid_sat_info2_window

0xc927,	// (0x0002efcf) aid_size_cell_blid

0xc92f,	// (0x0002efd7) bg_popup_window_pane_cp07

0xc952,	// (0x0002effa) grid_popup_blid_pane

0xc95a,	// (0x0002f002) heading_pane_cp05_ParamLimits

0xc95a,	// (0x0002f002) heading_pane_cp05

0xca22,	// (0x0002f0ca) cell_popup_blid_pane_ParamLimits

0xca22,	// (0x0002f0ca) cell_popup_blid_pane

0xca42,	// (0x0002f0ea) cell_popup_blid_pane_g1

0xca4a,	// (0x0002f0f2) cell_popup_blid_pane_t1

0x6a39,	// (0x000290e1) mup2_indicator_pane_ParamLimits

0x6a39,	// (0x000290e1) mup2_indicator_pane

0xb157,	// (0x0002d7ff) mup2_visualizer_osc_pane

0xc78f,	// (0x0002ee37) mup2_visualizer_spec_pane_ParamLimits

0xc78f,	// (0x0002ee37) mup2_visualizer_spec_pane

0x6b94,	// (0x0002923c) mup2_spec_half_pane

0x6b9d,	// (0x00029245) mup2_spec_half_pane_cp

0x6ba5,	// (0x0002924d) mup2_spec_bar_pane_ParamLimits

0x6ba5,	// (0x0002924d) mup2_spec_bar_pane

0xc6e3,	// (0x0002ed8b) mup2_spec_bar_pane_g1

0xc6ed,	// (0x0002ed95) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00031ce5) mup2_spec_bar_pane_g

0x6bc4,	// (0x0002926c) mup2_osc_middle_pane

0xc6ff,	// (0x0002eda7) mup2_visualizer_osc_pane_g1

0x318d,	// (0x00025835) popup_number_entry_window_t1_ParamLimits

0x31a0,	// (0x00025848) popup_number_entry_window_t2_ParamLimits

0x31b2,	// (0x0002585a) popup_number_entry_window_t3_ParamLimits

0x31c4,	// (0x0002586c) popup_number_entry_window_t5_ParamLimits

0x31c4,	// (0x0002586c) popup_number_entry_window_t5

0xf0ec,	// (0x00031794) popup_number_entry_window_t_ParamLimits

0x31f8,	// (0x000258a0) text_title_cp2_ParamLimits

0xb37f,	// (0x0002da27) aid_hotspot_pointer_text2_pane

0xb3a5,	// (0x0002da4d) main_viewer_pane_g9_ParamLimits

0xb3a5,	// (0x0002da4d) main_viewer_pane_g9

0x4f1e,	// (0x000275c6) cale_month_pane_t1_ParamLimits

0xaa11,	// (0x0002d0b9) bg_cale_pane_ParamLimits

0xaa29,	// (0x0002d0d1) list_cale_pane_ParamLimits

0x3eac,	// (0x00026554) listscroll_cale_day_pane_t1

0xaa3a,	// (0x0002d0e2) scroll_pane_cp09_ParamLimits

0x5a63,	// (0x0002810b) main_mup_eq_pane_t1_ParamLimits

0x5a63,	// (0x0002810b) main_mup_eq_pane_t1

0x5a7b,	// (0x00028123) main_mup_eq_pane_t2_ParamLimits

0x5a7b,	// (0x00028123) main_mup_eq_pane_t2

0x5a91,	// (0x00028139) main_mup_eq_pane_t3_ParamLimits

0x5a91,	// (0x00028139) main_mup_eq_pane_t3

0x5aa7,	// (0x0002814f) main_mup_eq_pane_t4_ParamLimits

0x5aa7,	// (0x0002814f) main_mup_eq_pane_t4

0x5abd,	// (0x00028165) main_mup_eq_pane_t5_ParamLimits

0x5abd,	// (0x00028165) main_mup_eq_pane_t5

0x5ad3,	// (0x0002817b) main_mup_eq_pane_t6_ParamLimits

0x5ad3,	// (0x0002817b) main_mup_eq_pane_t6

0x5ae5,	// (0x0002818d) main_mup_eq_pane_t7_ParamLimits

0x5ae5,	// (0x0002818d) main_mup_eq_pane_t7

0x5af7,	// (0x0002819f) main_mup_eq_pane_t8_ParamLimits

0x5af7,	// (0x0002819f) main_mup_eq_pane_t8

0x5b09,	// (0x000281b1) main_mup_eq_pane_t9_ParamLimits

0x5b09,	// (0x000281b1) main_mup_eq_pane_t9

0x5b1f,	// (0x000281c7) main_mup_eq_pane_t10_ParamLimits

0x5b1f,	// (0x000281c7) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00031b21) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00031b21) main_mup_eq_pane_t

0x5bb2,	// (0x0002825a) mup_equalizer_pane_cp5_ParamLimits

0x5bc4,	// (0x0002826c) mup_equalizer_pane_cp6_ParamLimits

0x5bd6,	// (0x0002827e) mup_equalizer_pane_cp7_ParamLimits

0x2ee5,	// (0x0002558d) main_gallery_pane

0xc708,	// (0x0002edb0) smil2_volume_pane

0xc710,	// (0x0002edb8) smil_status_volume_pane_g1_ParamLimits

0xc723,	// (0x0002edcb) smil_status_volume_pane_g2_ParamLimits

0xc736,	// (0x0002edde) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x00031cea) smil_status_volume_pane_g_ParamLimits

0xc92f,	// (0x0002efd7) bg_popup_window_pane_cp07_ParamLimits

0xc93d,	// (0x0002efe5) blid_firmament_pane

0x6bcd,	// (0x00029275) aid_size_cell_gallery_ParamLimits

0x6bcd,	// (0x00029275) aid_size_cell_gallery

0x6be3,	// (0x0002928b) grid_gallery_pane_ParamLimits

0x6be3,	// (0x0002928b) grid_gallery_pane

0x6bf7,	// (0x0002929f) cell_gallery_pane_ParamLimits

0x6bf7,	// (0x0002929f) cell_gallery_pane

0xca58,	// (0x0002f100) bg_cell_gallery_focus_pane_ParamLimits

0xca58,	// (0x0002f100) bg_cell_gallery_focus_pane

0xca6a,	// (0x0002f112) cell_gallery_pane_g1_ParamLimits

0xca6a,	// (0x0002f112) cell_gallery_pane_g1

0x6c3e,	// (0x000292e6) cell_gallery_pane_g2_ParamLimits

0x6c3e,	// (0x000292e6) cell_gallery_pane_g2

0x6c4b,	// (0x000292f3) cell_gallery_pane_g3_ParamLimits

0x6c4b,	// (0x000292f3) cell_gallery_pane_g3

0xca76,	// (0x0002f11e) cell_gallery_pane_g4_ParamLimits

0xca76,	// (0x0002f11e) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x00031d98) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x00031d98) cell_gallery_pane_g

0xca82,	// (0x0002f12a) bg_cell_gallery_focus_pane_g1

0xca8a,	// (0x0002f132) bg_cell_gallery_focus_pane_g2

0xca92,	// (0x0002f13a) bg_cell_gallery_focus_pane_g3

0xca9a,	// (0x0002f142) bg_cell_gallery_focus_pane_g4

0xcaa2,	// (0x0002f14a) bg_cell_gallery_focus_pane_g5

0xcaaa,	// (0x0002f152) bg_cell_gallery_focus_pane_g6

0xcab2,	// (0x0002f15a) bg_cell_gallery_focus_pane_g7

0xcaba,	// (0x0002f162) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x00031da1) bg_cell_gallery_focus_pane_g

0xcac2,	// (0x0002f16a) aid_firma_cardinal

0xcad6,	// (0x0002f17e) blid_firmament_pane_t1

0xcaed,	// (0x0002f195) blid_firmament_pane_t2

0xcb04,	// (0x0002f1ac) blid_firmament_pane_t3

0xcb1b,	// (0x0002f1c3) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x00031db2) blid_firmament_pane_t

0xcb32,	// (0x0002f1da) blid_sat_info_pane

0xcb42,	// (0x0002f1ea) blid_sat_info_pane_g1

0xcb42,	// (0x0002f1ea) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x00031dbb) blid_sat_info_pane_g

0xcb4c,	// (0x0002f1f4) blid_sat_info_pane_t1

0xcb5a,	// (0x0002f202) smil2_volume_content_pane

0xcb63,	// (0x0002f20b) smil2_volume_pane_g1

0xcb6b,	// (0x0002f213) smil2_volume_content_pane_g1

0xcb74,	// (0x0002f21c) smil2_volume_content_pane_g2

0xcb7d,	// (0x0002f225) smil2_volume_content_pane_g3

0xcb86,	// (0x0002f22e) smil2_volume_content_pane_g4

0xcb8f,	// (0x0002f237) smil2_volume_content_pane_g5

0xcb98,	// (0x0002f240) smil2_volume_content_pane_g6

0xcba1,	// (0x0002f249) smil2_volume_content_pane_g7

0xcbaa,	// (0x0002f252) smil2_volume_content_pane_g8

0xcbb3,	// (0x0002f25b) smil2_volume_content_pane_g9

0xcbbc,	// (0x0002f264) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x00031dc0) smil2_volume_content_pane_g

0x3f14,	// (0x000265bc) cale_week_day_heading_pane_t1_ParamLimits

0x3f3e,	// (0x000265e6) cale_week_day_heading_pane_t2_ParamLimits

0x3f68,	// (0x00026610) cale_week_day_heading_pane_t3_ParamLimits

0x3f92,	// (0x0002663a) cale_week_day_heading_pane_t4_ParamLimits

0x3fbc,	// (0x00026664) cale_week_day_heading_pane_t5_ParamLimits

0x3fe6,	// (0x0002668e) cale_week_day_heading_pane_t6_ParamLimits

0x4010,	// (0x000266b8) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00031899) cale_week_day_heading_pane_t_ParamLimits

0x403a,	// (0x000266e2) bg_cale_side_pane_ParamLimits

0x1f13,	// (0x000245bb) cale_week_time_pane_t1_ParamLimits

0x1f3f,	// (0x000245e7) cale_week_time_pane_t2_ParamLimits

0x1f6b,	// (0x00024613) cale_week_time_pane_t3_ParamLimits

0x1f97,	// (0x0002463f) cale_week_time_pane_t4_ParamLimits

0x1fc3,	// (0x0002466b) cale_week_time_pane_t5_ParamLimits

0x1fef,	// (0x00024697) cale_week_time_pane_t6_ParamLimits

0x201b,	// (0x000246c3) cale_week_time_pane_t7_ParamLimits

0x2047,	// (0x000246ef) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000318a8) cale_week_time_pane_t_ParamLimits

0x4048,	// (0x000266f0) cell_cale_week_pane_g2_ParamLimits

0x403a,	// (0x000266e2) bg_cale_side_pane_cp01_ParamLimits

0x5235,	// (0x000278dd) cale_month_week_pane_t1_ParamLimits

0x524c,	// (0x000278f4) cale_month_week_pane_t2_ParamLimits

0x5263,	// (0x0002790b) cale_month_week_pane_t3_ParamLimits

0x527a,	// (0x00027922) cale_month_week_pane_t4_ParamLimits

0x5291,	// (0x00027939) cale_month_week_pane_t5_ParamLimits

0x52a8,	// (0x00027950) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00031981) cale_month_week_pane_t_ParamLimits

0xa9e3,	// (0x0002d08b) cell_cale_month_pane_g1_ParamLimits

0x2ee5,	// (0x0002558d) main_cale_event_viewer_pane

0x2ee5,	// (0x0002558d) listscroll_cale_event_viewer_pane

0xcbc5,	// (0x0002f26d) list_cale_ev_pane

0xcbcd,	// (0x0002f275) scroll_pane_cp023

0x6c58,	// (0x00029300) field_cale_ev_pane_ParamLimits

0x6c58,	// (0x00029300) field_cale_ev_pane

0xcbd9,	// (0x0002f281) field_cale_ev_content_pane_ParamLimits

0xcbd9,	// (0x0002f281) field_cale_ev_content_pane

0xcbe5,	// (0x0002f28d) field_cale_ev_pane_g1_ParamLimits

0xcbe5,	// (0x0002f28d) field_cale_ev_pane_g1

0xcbf1,	// (0x0002f299) field_cale_ev_pane_g2_ParamLimits

0xcbf1,	// (0x0002f299) field_cale_ev_pane_g2

0xcc09,	// (0x0002f2b1) field_cale_ev_pane_g3_ParamLimits

0xcc09,	// (0x0002f2b1) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x00031dd5) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x00031dd5) field_cale_ev_pane_g

0xcc21,	// (0x0002f2c9) field_cale_ev_pane_t1_ParamLimits

0xcc21,	// (0x0002f2c9) field_cale_ev_pane_t1

0x6c72,	// (0x0002931a) field_cale_ev_content_pane_t1_ParamLimits

0x6c72,	// (0x0002931a) field_cale_ev_content_pane_t1

0xb2e8,	// (0x0002d990) bg_button_pane_cp01

0x3d04,	// (0x000263ac) listscroll_cale_week_pane_ParamLimits

0x3d13,	// (0x000263bb) popup_toolbar_window_cp01

0x3eac,	// (0x00026554) listscroll_cale_week_pane_t1_ParamLimits

0x3ae7,	// (0x0002618f) listscroll_cale_day_pane_ParamLimits

0x3d13,	// (0x000263bb) popup_toolbar_window_cp02

0x3eac,	// (0x00026554) listscroll_cale_day_pane_t1_ParamLimits

0x3d04,	// (0x000263ac) main_cale_month_pane_ParamLimits

0x668b,	// (0x00028d33) popup_toolbar_window_cp03_ParamLimits

0x668b,	// (0x00028d33) popup_toolbar_window_cp03

0x5e70,	// (0x00028518) main_image_pane_g2_ParamLimits

0x5e70,	// (0x00028518) main_image_pane_g2

0x5e81,	// (0x00028529) main_image_pane_g3_ParamLimits

0x5e81,	// (0x00028529) main_image_pane_g3

0x0002,

0xf50b,	// (0x00031bb3) main_image_pane_g_ParamLimits

0xf50b,	// (0x00031bb3) main_image_pane_g

0xb4a5,	// (0x0002db4d) main_image_pane_t1_ParamLimits

0x5e92,	// (0x0002853a) main_image_pane_t2_ParamLimits

0x5e92,	// (0x0002853a) main_image_pane_t2

0x5ea4,	// (0x0002854c) main_image_pane_t3_ParamLimits

0x5ea4,	// (0x0002854c) main_image_pane_t3

0x5ecc,	// (0x00028574) main_image_pane_t4_ParamLimits

0x5ecc,	// (0x00028574) main_image_pane_t4

0x0003,

0xf512,	// (0x00031bba) main_image_pane_t_ParamLimits

0xf512,	// (0x00031bba) main_image_pane_t

0x5eec,	// (0x00028594) popup_image_details_window_cp01

0x5ef4,	// (0x0002859c) popup_toobar_trans_pane_cp01_ParamLimits

0x5ef4,	// (0x0002859c) popup_toobar_trans_pane_cp01

0x6558,	// (0x00028c00) popup_image_details_window_ParamLimits

0x6558,	// (0x00028c00) popup_image_details_window

0xc66b,	// (0x0002ed13) popup_image_focus_window

0x20cf,	// (0x00024777) camera2_autofocus_pane_ParamLimits

0x20cf,	// (0x00024777) camera2_autofocus_pane

0x2ee5,	// (0x0002558d) bg_popup_sub_pane_cp06

0xcc38,	// (0x0002f2e0) popup_image_focus_window_g1

0xcc40,	// (0x0002f2e8) popup_image_focus_window_g2

0xcc48,	// (0x0002f2f0) popup_image_focus_window_g3

0xcc50,	// (0x0002f2f8) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x00031ddc) popup_image_focus_window_g

0xcc58,	// (0x0002f300) popup_image_focus_window_t1

0xcc66,	// (0x0002f30e) popup_image_focus_window_t2

0xcc75,	// (0x0002f31d) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x00031de5) popup_image_focus_window_t

0xcc83,	// (0x0002f32b) camera2_autofocus_pane_g1

0x310f,	// (0x000257b7) bg_tb_trans_pane_cp01

0xcc91,	// (0x0002f339) popup_image_details_window_g1

0xcca4,	// (0x0002f34c) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x00031df7) popup_image_details_window_g

0xcccd,	// (0x0002f375) popup_image_details_window_t1

0xccdf,	// (0x0002f387) popup_image_details_window_t2

0xccf8,	// (0x0002f3a0) popup_image_details_window_t3

0xcd0c,	// (0x0002f3b4) popup_image_details_window_t4

0xcd27,	// (0x0002f3cf) popup_image_details_window_t5

0x0004,

0xf756,	// (0x00031dfe) popup_image_details_window_t

0x3acf,	// (0x00026177) bg_calc_paper_pane_ParamLimits

0xa8a1,	// (0x0002cf49) grid_highlight_pane_cp013

0xa8ab,	// (0x0002cf53) list_calc_pane_ParamLimits

0xa8bd,	// (0x0002cf65) scroll_pane_cp024

0x3ae7,	// (0x0002618f) bg_calc_display_pane_ParamLimits

0xa8c5,	// (0x0002cf6d) calc_display_pane_t1_ParamLimits

0xa8da,	// (0x0002cf82) calc_display_pane_t2_ParamLimits

0xa8ef,	// (0x0002cf97) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0003181b) calc_display_pane_t_ParamLimits

0x1ee9,	// (0x00024591) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00031838) cell_calc_pane_g

0x1ef2,	// (0x0002459a) cell_calc_pane_t1

0x3b96,	// (0x0002623e) grid_highlight_pane_cp02_ParamLimits

0x3bac,	// (0x00026254) toolbar_button_pane_cp01_ParamLimits

0x3bac,	// (0x00026254) toolbar_button_pane_cp01

0xb4ea,	// (0x0002db92) temp_image_control_pane_ParamLimits

0xb4ea,	// (0x0002db92) temp_image_control_pane

0x310f,	// (0x000257b7) main_mp3_pane

0xcd41,	// (0x0002f3e9) temp_image_control_pane_g1_ParamLimits

0xcd41,	// (0x0002f3e9) temp_image_control_pane_g1

0xcd4f,	// (0x0002f3f7) temp_image_control_pane_g2_ParamLimits

0xcd4f,	// (0x0002f3f7) temp_image_control_pane_g2

0xcd61,	// (0x0002f409) temp_image_control_pane_g3_ParamLimits

0xcd61,	// (0x0002f409) temp_image_control_pane_g3

0x6cbf,	// (0x00029367) temp_image_control_pane_g4_ParamLimits

0x6cbf,	// (0x00029367) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x00031e09) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x00031e09) temp_image_control_pane_g

0xcd41,	// (0x0002f3e9) main_mp3_pane_g1

0x6cd0,	// (0x00029378) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x00031e12) main_mp3_pane_g

0xcda4,	// (0x0002f44c) main_mp3_pane_t1

0x41a6,	// (0x0002684e) main_camera_pane_g8_ParamLimits

0x41a6,	// (0x0002684e) main_camera_pane_g8

0x4341,	// (0x000269e9) main_video_pane_g7_ParamLimits

0x4341,	// (0x000269e9) main_video_pane_g7

0xc771,	// (0x0002ee19) main_camera2_pane_t7_ParamLimits

0xc771,	// (0x0002ee19) main_camera2_pane_t7

0x496b,	// (0x00027013) scroll_pane_cp025_ParamLimits

0x496b,	// (0x00027013) scroll_pane_cp025

0x497f,	// (0x00027027) scroll_pane_cp026_ParamLimits

0x497f,	// (0x00027027) scroll_pane_cp026

0x498e,	// (0x00027036) wml_content_pane_ParamLimits

0x2ee5,	// (0x0002558d) main_touch_calib_pane

0x6d87,	// (0x0002942f) main_touch_calib_pane_g1

0x6d93,	// (0x0002943b) main_touch_calib_pane_g2

0x6d9f,	// (0x00029447) main_touch_calib_pane_g3

0x6dab,	// (0x00029453) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x00031e30) main_touch_calib_pane_g

0x6db7,	// (0x0002945f) main_touch_calib_pane_t1

0x6dcf,	// (0x00029477) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x00031e39) main_touch_calib_pane_t

0xb049,	// (0x0002d6f1) mup_progress_pane_cp02

0xb068,	// (0x0002d710) navi_pane_g1

0xb0e8,	// (0x0002d790) navi_pane_mp_t3

0x310f,	// (0x000257b7) main_mp3_pane_ParamLimits

0x66c5,	// (0x00028d6d) navi_pane_ParamLimits

0xcd41,	// (0x0002f3e9) main_mp3_pane_g1_ParamLimits

0x6cd0,	// (0x00029378) main_mp3_pane_g2_ParamLimits

0x6cdc,	// (0x00029384) main_mp3_pane_g3_ParamLimits

0x6cdc,	// (0x00029384) main_mp3_pane_g3

0x6ce8,	// (0x00029390) main_mp3_pane_g4_ParamLimits

0x6ce8,	// (0x00029390) main_mp3_pane_g4

0xcd71,	// (0x0002f419) main_mp3_pane_g5_ParamLimits

0xcd71,	// (0x0002f419) main_mp3_pane_g5

0xcd7f,	// (0x0002f427) main_mp3_pane_g6_ParamLimits

0xcd7f,	// (0x0002f427) main_mp3_pane_g6

0xcd8c,	// (0x0002f434) main_mp3_pane_g7_ParamLimits

0xcd8c,	// (0x0002f434) main_mp3_pane_g7

0xcd98,	// (0x0002f440) main_mp3_pane_g8_ParamLimits

0xcd98,	// (0x0002f440) main_mp3_pane_g8

0xf76a,	// (0x00031e12) main_mp3_pane_g_ParamLimits

0x6cf4,	// (0x0002939c) main_mp3_pane_t2

0x6d02,	// (0x000293aa) main_mp3_pane_t3

0xcdb2,	// (0x0002f45a) main_mp3_pane_t4

0xcdc0,	// (0x0002f468) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x00031e23) main_mp3_pane_t

0xcdce,	// (0x0002f476) mup_progress_pane_cp01

0x2f24,	// (0x000255cc) aid_zoom_text_secondary2

0xcbc5,	// (0x0002f26d) list_cale_ev2_pane

0xcbcd,	// (0x0002f275) scroll_pane_cp023_ParamLimits

0x0520,	// (0x00022bc8) field_cale_ev2_pane_ParamLimits

0x0520,	// (0x00022bc8) field_cale_ev2_pane

0xcdd6,	// (0x0002f47e) field_cale_ev2_pane_g1_ParamLimits

0xcdd6,	// (0x0002f47e) field_cale_ev2_pane_g1

0xcde2,	// (0x0002f48a) field_cale_ev2_pane_g2_ParamLimits

0xcde2,	// (0x0002f48a) field_cale_ev2_pane_g2

0xcdfa,	// (0x0002f4a2) field_cale_ev2_pane_g3_ParamLimits

0xcdfa,	// (0x0002f4a2) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x00031e44) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x00031e44) field_cale_ev2_pane_g

0xce1e,	// (0x0002f4c6) field_cale_ev2_pane_t1_ParamLimits

0xce1e,	// (0x0002f4c6) field_cale_ev2_pane_t1

0xce35,	// (0x0002f4dd) field_cale_ev2_pane_t2_ParamLimits

0xce35,	// (0x0002f4dd) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x00031e4d) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x00031e4d) field_cale_ev2_pane_t

0x5d2b,	// (0x000283d3) main_postcard_pane_g5_ParamLimits

0x5d2b,	// (0x000283d3) main_postcard_pane_g5

0x5d3f,	// (0x000283e7) main_postcard_pane_g6_ParamLimits

0x5d3f,	// (0x000283e7) main_postcard_pane_g6

0x40fd,	// (0x000267a5) camera2_autofocus_pane_cp_ParamLimits

0x40fd,	// (0x000267a5) camera2_autofocus_pane_cp

0x310f,	// (0x000257b7) main_mup3_pane

0x6e3d,	// (0x000294e5) main_mup3_pane_g1_ParamLimits

0x6e3d,	// (0x000294e5) main_mup3_pane_g1

0x6e5f,	// (0x00029507) main_mup3_pane_g2_ParamLimits

0x6e5f,	// (0x00029507) main_mup3_pane_g2

0x6ec7,	// (0x0002956f) main_mup3_pane_g3_ParamLimits

0x6ec7,	// (0x0002956f) main_mup3_pane_g3

0x6f05,	// (0x000295ad) main_mup3_pane_g4_ParamLimits

0x6f05,	// (0x000295ad) main_mup3_pane_g4

0x6f43,	// (0x000295eb) main_mup3_pane_g5_ParamLimits

0x6f43,	// (0x000295eb) main_mup3_pane_g5

0x6f81,	// (0x00029629) main_mup3_pane_g6_ParamLimits

0x6f81,	// (0x00029629) main_mup3_pane_g6

0xce4a,	// (0x0002f4f2) main_mup3_pane_g7_ParamLimits

0xce4a,	// (0x0002f4f2) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x00031e5d) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x00031e5d) main_mup3_pane_g

0x6ff7,	// (0x0002969f) main_mup3_pane_t1_ParamLimits

0x6ff7,	// (0x0002969f) main_mup3_pane_t1

0x705f,	// (0x00029707) main_mup3_pane_t2_ParamLimits

0x705f,	// (0x00029707) main_mup3_pane_t2

0x7127,	// (0x000297cf) main_mup3_pane_t4_ParamLimits

0x7127,	// (0x000297cf) main_mup3_pane_t4

0x7175,	// (0x0002981d) main_mup3_pane_t5_ParamLimits

0x7175,	// (0x0002981d) main_mup3_pane_t5

0x7223,	// (0x000298cb) main_mup3_pane_t6_ParamLimits

0x7223,	// (0x000298cb) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x00031e6e) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x00031e6e) main_mup3_pane_t

0x72d7,	// (0x0002997f) mup3_progress_pane_ParamLimits

0x72d7,	// (0x0002997f) mup3_progress_pane

0x7333,	// (0x000299db) popup_mup3_control_window_ParamLimits

0x7333,	// (0x000299db) popup_mup3_control_window

0xce58,	// (0x0002f500) popup_mup3_text_window

0x7361,	// (0x00029a09) mup3_progress_pane_t1

0x7377,	// (0x00029a1f) mup3_progress_pane_t2

0xce60,	// (0x0002f508) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x00031e7b) mup3_progress_pane_t

0xce77,	// (0x0002f51f) mup_progress_pane_cp03

0x2ee5,	// (0x0002558d) bg_tb_trans_pane_cp04

0x738d,	// (0x00029a35) mup3_volume_pane

0x7395,	// (0x00029a3d) popup_mup3_control_window_g1

0x739e,	// (0x00029a46) mup3_volume_pane_g1

0x73a7,	// (0x00029a4f) mup3_volume_pane_g2

0x73b0,	// (0x00029a58) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x00031e82) mup3_volume_pane_g

0x2ee5,	// (0x0002558d) bg_tb_trans_pane_cp03

0xce87,	// (0x0002f52f) popup_mup3_text_window_g1

0xce8f,	// (0x0002f537) popup_mup3_text_window_t1

0x3b7f,	// (0x00026227) list_calc_item_pane_g1_ParamLimits

0xc859,	// (0x0002ef01) mup_volume_pane_cp_g1

0x6de7,	// (0x0002948f) main_touch_calib_pane_t3

0x6df9,	// (0x000294a1) main_touch_calib_pane_t4

0x6e0b,	// (0x000294b3) main_touch_calib_pane_t5

0x2eef,	// (0x00025597) aid_cell_size_toolbar2

0x2ef7,	// (0x0002559f) aid_popup3_width_pane

0x2f24,	// (0x000255cc) aid_zoom_text_msg_primary

0xa9cd,	// (0x0002d075) vorec_t7

0x3af3,	// (0x0002619b) bg_calc_paper_pane_g1_ParamLimits

0x3aff,	// (0x000261a7) bg_calc_paper_pane_g2_ParamLimits

0x3b0b,	// (0x000261b3) bg_calc_paper_pane_g3_ParamLimits

0x3b17,	// (0x000261bf) bg_calc_paper_pane_g4_ParamLimits

0x3b23,	// (0x000261cb) bg_calc_paper_pane_g5_ParamLimits

0x3b2f,	// (0x000261d7) bg_calc_paper_pane_g6_ParamLimits

0x3b3e,	// (0x000261e6) bg_calc_paper_pane_g7_ParamLimits

0x3b4d,	// (0x000261f5) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00031822) bg_calc_paper_pane_g_ParamLimits

0x3b5c,	// (0x00026204) calc_bg_paper_pane_g9_ParamLimits

0x423d,	// (0x000268e5) image_qvga_pane_ParamLimits

0x423d,	// (0x000268e5) image_qvga_pane

0x3831,	// (0x00025ed9) bg_popup_sub_pane_cp04_ParamLimits

0xb421,	// (0x0002dac9) popup_mup_playback_window_g1_ParamLimits

0xb42d,	// (0x0002dad5) popup_mup_playback_window_t1_ParamLimits

0xb442,	// (0x0002daea) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00031bae) popup_mup_playback_window_t_ParamLimits

0x6959,	// (0x00029001) main_mup2_pane_g3_ParamLimits

0x6959,	// (0x00029001) main_mup2_pane_g3

0x4690,	// (0x00026d38) popup_toolbar_window_cp04

0xb823,	// (0x0002decb) popup_call2_audio_second_window_g3_ParamLimits

0xb823,	// (0x0002decb) popup_call2_audio_second_window_g3

0xbc2d,	// (0x0002e2d5) popup_call2_audio_first_window_g4_ParamLimits

0xbc2d,	// (0x0002e2d5) popup_call2_audio_first_window_g4

0xc2ac,	// (0x0002e954) popup_call2_audio_in_window_g4_ParamLimits

0xc2ac,	// (0x0002e954) popup_call2_audio_in_window_g4

0x5e52,	// (0x000284fa) aid_area_sk_bg_cut_ParamLimits

0x5e52,	// (0x000284fa) aid_area_sk_bg_cut

0xb457,	// (0x0002daff) aid_area_sk_bg_cut_2_ParamLimits

0xb457,	// (0x0002daff) aid_area_sk_bg_cut_2

0x6c2e,	// (0x000292d6) aid_placing_details_win

0x6c36,	// (0x000292de) aid_placing_details_win_2

0xcc83,	// (0x0002f32b) camera2_autofocus_pane_g1_ParamLimits

0x30b6,	// (0x0002575e) popup_fixed_preview_cale_window_ParamLimits

0x30b6,	// (0x0002575e) popup_fixed_preview_cale_window

0xb171,	// (0x0002d819) navi_slider_pane_g3

0xb17a,	// (0x0002d822) navi_slider_pane_g4

0xb183,	// (0x0002d82b) navi_slider_pane_g5

0xb171,	// (0x0002d819) navi_slider_pane_g6

0xb18c,	// (0x0002d834) navi_slider_pane_g7

0xb2ad,	// (0x0002d955) mup_scale_pane_g3

0xb2b6,	// (0x0002d95e) mup_scale_pane_g4

0xb2bf,	// (0x0002d967) mup_scale_pane_g5

0x5bea,	// (0x00028292) mup_scale_pane_g6

0x5bf3,	// (0x0002829b) mup_scale_pane_g7

0xb171,	// (0x0002d819) cams2_slider_pane_g3

0xc90e,	// (0x0002efb6) cams2_slider_pane_g4

0xc916,	// (0x0002efbe) cams2_slider_pane_g5

0xb171,	// (0x0002d819) cams2_slider_pane_g6

0xc91e,	// (0x0002efc6) cams2_slider_pane_g7

0xcb42,	// (0x0002f1ea) camera2_autofocus_pane_cp_g1

0xce9d,	// (0x0002f545) bg_popup_preview_window_pane_cp02_ParamLimits

0xce9d,	// (0x0002f545) bg_popup_preview_window_pane_cp02

0x73b9,	// (0x00029a61) list_fp_cale_pane_ParamLimits

0x73b9,	// (0x00029a61) list_fp_cale_pane

0xcea9,	// (0x0002f551) popup_fixed_preview_cale_window_t1_ParamLimits

0xcea9,	// (0x0002f551) popup_fixed_preview_cale_window_t1

0x73c5,	// (0x00029a6d) popup_fixed_preview_cale_window_t2_ParamLimits

0x73c5,	// (0x00029a6d) popup_fixed_preview_cale_window_t2

0x73da,	// (0x00029a82) popup_fixed_preview_cale_window_t3_ParamLimits

0x73da,	// (0x00029a82) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x00031e89) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x00031e89) popup_fixed_preview_cale_window_t

0x73ef,	// (0x00029a97) list_single_fp_cale_pane_ParamLimits

0x73ef,	// (0x00029a97) list_single_fp_cale_pane

0x7403,	// (0x00029aab) list_single_fp_cale_pane_g1_ParamLimits

0x7403,	// (0x00029aab) list_single_fp_cale_pane_g1

0xcec7,	// (0x0002f56f) list_single_fp_cale_pane_g2_ParamLimits

0xcec7,	// (0x0002f56f) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x00031e90) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x00031e90) list_single_fp_cale_pane_g

0x740f,	// (0x00029ab7) list_single_fp_cale_pane_t1_ParamLimits

0x740f,	// (0x00029ab7) list_single_fp_cale_pane_t1

0x7421,	// (0x00029ac9) list_single_fp_cale_pane_t2_ParamLimits

0x7421,	// (0x00029ac9) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x00031e97) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x00031e97) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2ee5,	// (0x0002558d) main_dialer_pane

0x7454,	// (0x00029afc) aid_cell_size_keypad

0x745e,	// (0x00029b06) dialer_ne_pane

0x7466,	// (0x00029b0e) grid_dialer_command_1_pane

0x746e,	// (0x00029b16) grid_dialer_command_2_pane

0x7476,	// (0x00029b1e) grid_dialer_keypad_pane

0x7486,	// (0x00029b2e) bg_popup_call_pane_cp06_ParamLimits

0x7486,	// (0x00029b2e) bg_popup_call_pane_cp06

0x7492,	// (0x00029b3a) dialer_ne_clear_pane_ParamLimits

0x7492,	// (0x00029b3a) dialer_ne_clear_pane

0xcee0,	// (0x0002f588) dialer_ne_pane_g1

0xcee8,	// (0x0002f590) dialer_ne_pane_t1_ParamLimits

0xcee8,	// (0x0002f590) dialer_ne_pane_t1

0x749e,	// (0x00029b46) dialer_ne_pane_t2_ParamLimits

0x749e,	// (0x00029b46) dialer_ne_pane_t2

0x74c8,	// (0x00029b70) dialer_ne_pane_t3_ParamLimits

0x74c8,	// (0x00029b70) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x00031e9c) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x00031e9c) dialer_ne_pane_t

0x74f8,	// (0x00029ba0) dialer_ne_pane_t3_copy1_ParamLimits

0x74f8,	// (0x00029ba0) dialer_ne_pane_t3_copy1

0x7527,	// (0x00029bcf) cell_dialer_keypad_pane_ParamLimits

0x7527,	// (0x00029bcf) cell_dialer_keypad_pane

0x753c,	// (0x00029be4) cell_dialer_command_1_pane_ParamLimits

0x753c,	// (0x00029be4) cell_dialer_command_1_pane

0x7552,	// (0x00029bfa) cell_dialer_command_2_pane_ParamLimits

0x7552,	// (0x00029bfa) cell_dialer_command_2_pane

0xcefa,	// (0x0002f5a2) bg_button_pane_cp02_ParamLimits

0xcefa,	// (0x0002f5a2) bg_button_pane_cp02

0x7561,	// (0x00029c09) cell_dialer_keypad_pane_g1_ParamLimits

0x7561,	// (0x00029c09) cell_dialer_keypad_pane_g1

0xcefa,	// (0x0002f5a2) bg_button_pane_cp03_ParamLimits

0xcefa,	// (0x0002f5a2) bg_button_pane_cp03

0x7576,	// (0x00029c1e) cell_dialer_command_1_pane_g1_ParamLimits

0x7576,	// (0x00029c1e) cell_dialer_command_1_pane_g1

0xcf06,	// (0x0002f5ae) bg_button_pane_cp04

0x758a,	// (0x00029c32) cell_dialer_command_2_pane_g1

0xb157,	// (0x0002d7ff) bg_button_pane_cp06

0xcf0e,	// (0x0002f5b6) dialer_ne_clear_pane_g1

0xb074,	// (0x0002d71c) navi_pane_g2

0x57ef,	// (0x00027e97) navi_pane_g3

0x0002,

0xf409,	// (0x00031ab1) navi_pane_g

0xb0f6,	// (0x0002d79e) navi_pane_mv_g2

0xb11e,	// (0x0002d7c6) navi_pane_mv_g5

0x5814,	// (0x00027ebc) navi_pane_mv_t1

0x3ae7,	// (0x0002618f) main_clock2_pane

0x75c1,	// (0x00029c69) main_clock2_list_pane_ParamLimits

0x75c1,	// (0x00029c69) main_clock2_list_pane

0x75f3,	// (0x00029c9b) main_clock2_pane_t1_ParamLimits

0x75f3,	// (0x00029c9b) main_clock2_pane_t1

0x762a,	// (0x00029cd2) main_clock2_pane_t2_ParamLimits

0x762a,	// (0x00029cd2) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x00031ea3) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x00031ea3) main_clock2_pane_t

0x76ac,	// (0x00029d54) popup_clock_analogue_window_cp03_ParamLimits

0x76ac,	// (0x00029d54) popup_clock_analogue_window_cp03

0x76cf,	// (0x00029d77) popup_clock_digital_window_cp02_ParamLimits

0x76cf,	// (0x00029d77) popup_clock_digital_window_cp02

0x7740,	// (0x00029de8) main_clock2_list_single_pane_ParamLimits

0x7740,	// (0x00029de8) main_clock2_list_single_pane

0xb157,	// (0x0002d7ff) list_highlight_pane_cp05

0xcf16,	// (0x0002f5be) main_clock2_list_single_pane_t1

0x4690,	// (0x00026d38) popup_toolbar_window_cp04_ParamLimits

0x6c8f,	// (0x00029337) camera2_autofocus_pane_g2_ParamLimits

0x6c8f,	// (0x00029337) camera2_autofocus_pane_g2

0x6c9b,	// (0x00029343) camera2_autofocus_pane_g3_ParamLimits

0x6c9b,	// (0x00029343) camera2_autofocus_pane_g3

0x6ca7,	// (0x0002934f) camera2_autofocus_pane_g4_ParamLimits

0x6ca7,	// (0x0002934f) camera2_autofocus_pane_g4

0x6cb3,	// (0x0002935b) camera2_autofocus_pane_g5_ParamLimits

0x6cb3,	// (0x0002935b) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x00031dec) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x00031dec) camera2_autofocus_pane_g

0x6e1d,	// (0x000294c5) camera2_autofocus_pane_cp_g2

0x6e25,	// (0x000294cd) camera2_autofocus_pane_cp_g3

0x6e2d,	// (0x000294d5) camera2_autofocus_pane_cp_g4

0x6e35,	// (0x000294dd) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x00031e52) camera2_autofocus_pane_cp_g

0x747e,	// (0x00029b26) popup_dialer_spcha_window

0x2ee5,	// (0x0002558d) bg_popup_sub_pane_cp07

0xcf24,	// (0x0002f5cc) list_spcha_pane

0xcf2c,	// (0x0002f5d4) list_single_spcha_pane_ParamLimits

0xcf2c,	// (0x0002f5d4) list_single_spcha_pane

0x2ee5,	// (0x0002558d) list_highlight_pane_cp06

0xcf3d,	// (0x0002f5e5) list_single_spcha_pane_t1

0xc056,	// (0x0002e6fe) popup_call2_audio_out_window_g4_ParamLimits

0xc056,	// (0x0002e6fe) popup_call2_audio_out_window_g4

0x2ee5,	// (0x0002558d) main_imed2_pane

0xc673,	// (0x0002ed1b) popup_imed_adjust2_window

0x656e,	// (0x00028c16) popup_imed_trans_window_ParamLimits

0x656e,	// (0x00028c16) popup_imed_trans_window

0xc986,	// (0x0002f02e) popup_blid_sat_info2_window_t1

0xc994,	// (0x0002f03c) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x00031d81) popup_blid_sat_info2_window_t

0x7772,	// (0x00029e1a) aid_size_cell_colour_35

0x7792,	// (0x00029e3a) aid_size_cell_colour_112

0x77b2,	// (0x00029e5a) aid_size_cell_effect

0xc64d,	// (0x0002ecf5) bg_tb_trans_pane_cp02

0xab31,	// (0x0002d1d9) heading_imed_pane

0x77d2,	// (0x00029e7a) listscroll_imed_pane

0xcf4b,	// (0x0002f5f3) heading_imed_pane_g1

0xcf53,	// (0x0002f5fb) heading_imed_pane_t1

0xcf61,	// (0x0002f609) grid_imed_colour_35_pane_ParamLimits

0xcf61,	// (0x0002f609) grid_imed_colour_35_pane

0x77de,	// (0x00029e86) grid_imed_effect_pane

0xcf74,	// (0x0002f61c) list_imed_aspect_pane

0x77f1,	// (0x00029e99) scroll_pane_cp027_ParamLimits

0x77f1,	// (0x00029e99) scroll_pane_cp027

0x77fd,	// (0x00029ea5) cell_imed_effect_pane_ParamLimits

0x77fd,	// (0x00029ea5) cell_imed_effect_pane

0xcf7c,	// (0x0002f624) cell_imed_colour_pane_ParamLimits

0xcf7c,	// (0x0002f624) cell_imed_colour_pane

0xcfb6,	// (0x0002f65e) cell_imed_colour_pane_g1_ParamLimits

0xcfb6,	// (0x0002f65e) cell_imed_colour_pane_g1

0xcfc7,	// (0x0002f66f) hgihlgiht_grid_pane_cp016_ParamLimits

0xcfc7,	// (0x0002f66f) hgihlgiht_grid_pane_cp016

0x7822,	// (0x00029eca) cell_imed_effect_pane_g1

0x782a,	// (0x00029ed2) grid_highlight_pane_cp017

0xcfd8,	// (0x0002f680) list_imed_single_pane_ParamLimits

0xcfd8,	// (0x0002f680) list_imed_single_pane

0x2ee5,	// (0x0002558d) list_highlight_pane_cp07

0xcfeb,	// (0x0002f693) list_imed_aspect_pane_comp1_t1

0xc64d,	// (0x0002ecf5) bg_tb_trans_pane_cp05

0xd00b,	// (0x0002f6b3) popup_imed_adjust2_window_g1

0xd032,	// (0x0002f6da) popup_imed_adjust2_window_t1

0xd04a,	// (0x0002f6f2) slider_imed_adjust_pane

0xd05e,	// (0x0002f706) slider_imed_adjust_pane_g1

0xd06e,	// (0x0002f716) slider_imed_adjust_pane_g2

0xd07e,	// (0x0002f726) slider_imed_adjust_pane_g3

0xd08f,	// (0x0002f737) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x00031ec0) slider_imed_adjust_pane_g

0x7833,	// (0x00029edb) aid_size_cell_clipart2

0x783f,	// (0x00029ee7) grid_imed_clipart_pane

0xd0a0,	// (0x0002f748) scroll_pane_cp031

0x7849,	// (0x00029ef1) cell_imed_clipart_pane_ParamLimits

0x7849,	// (0x00029ef1) cell_imed_clipart_pane

0x7861,	// (0x00029f09) cell_imed_clipart_pane_g1

0x2ee5,	// (0x0002558d) grid_highlight_pane_cp014

0x75d4,	// (0x00029c7c) main_clock2_pane_g1_ParamLimits

0x75d4,	// (0x00029c7c) main_clock2_pane_g1

0x76eb,	// (0x00029d93) aid_call2_pane_cp10

0x76fd,	// (0x00029da5) aid_call_pane_cp10

0xb024,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g1

0xb024,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g2

0x770f,	// (0x00029db7) popup_clock_analogue_window_cp10_g3

0x770f,	// (0x00029db7) popup_clock_analogue_window_cp10_g4

0xb024,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x00031eae) popup_clock_analogue_window_cp10_g

0x7721,	// (0x00029dc9) popup_clock_analogue_window_cp10_t1

0x24ca,	// (0x00024b72) clock_digital_number_pane_cp10_ParamLimits

0x24ca,	// (0x00024b72) clock_digital_number_pane_cp10

0x24e2,	// (0x00024b8a) clock_digital_number_pane_cp11_ParamLimits

0x24e2,	// (0x00024b8a) clock_digital_number_pane_cp11

0x24fa,	// (0x00024ba2) clock_digital_number_pane_cp12_ParamLimits

0x24fa,	// (0x00024ba2) clock_digital_number_pane_cp12

0x2512,	// (0x00024bba) clock_digital_number_pane_cp13_ParamLimits

0x2512,	// (0x00024bba) clock_digital_number_pane_cp13

0x252a,	// (0x00024bd2) clock_digital_separator_pane_cp10_ParamLimits

0x252a,	// (0x00024bd2) clock_digital_separator_pane_cp10

0x7752,	// (0x00029dfa) popup_clock_digital_window_cp02_t1_ParamLimits

0x7752,	// (0x00029dfa) popup_clock_digital_window_cp02_t1

0x3829,	// (0x00025ed1) clock_digital_number_pane_cp10_g1

0x3829,	// (0x00025ed1) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x00031ec9) clock_digital_number_pane_cp10_g

0x3829,	// (0x00025ed1) clock_digital_separator_pane_cp10_g1

0x3829,	// (0x00025ed1) clock_digital_separator_pane_g2_cp10

0xb127,	// (0x0002d7cf) navi_pane_vded_g4

0xb130,	// (0x0002d7d8) navi_pane_vded_g5

0xb139,	// (0x0002d7e1) navi_pane_vded_t1

0x2ee5,	// (0x0002558d) main_vded_pane

0x786a,	// (0x00029f12) main_vded_pane_g1

0x7874,	// (0x00029f1c) main_vded_pane_g2

0x787c,	// (0x00029f24) main_vded_pane_g3

0x0002,

0xf826,	// (0x00031ece) main_vded_pane_g

0x7884,	// (0x00029f2c) main_vded_pane_t1

0x7892,	// (0x00029f3a) main_vded_pane_t2

0x0001,

0xf82d,	// (0x00031ed5) main_vded_pane_t

0x78a0,	// (0x00029f48) vded_slider_pane

0x78a8,	// (0x00029f50) vded_video_pane

0xd0a8,	// (0x0002f750) vded_video_pane_g1

0x78b0,	// (0x00029f58) vded_video_pane_g2

0xcb42,	// (0x0002f1ea) vded_video_pane_g3

0x0002,

0xf832,	// (0x00031eda) vded_video_pane_g

0xd0b2,	// (0x0002f75a) vded_slider_pane_g1

0xc859,	// (0x0002ef01) vded_slider_pane_g2

0xd0bb,	// (0x0002f763) vded_slider_pane_g3

0xd0c4,	// (0x0002f76c) vded_slider_pane_g4

0xd0cd,	// (0x0002f775) vded_slider_pane_g5

0x0004,

0xf839,	// (0x00031ee1) vded_slider_pane_g

0x731d,	// (0x000299c5) mup3_rocker_pane_ParamLimits

0x731d,	// (0x000299c5) mup3_rocker_pane

0x78b9,	// (0x00029f61) mup3_control_keys_pane_g1

0x78c1,	// (0x00029f69) mup3_control_keys_pane_g2

0x78c9,	// (0x00029f71) mup3_control_keys_pane_g3

0x78d1,	// (0x00029f79) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x00031eec) mup3_control_keys_pane_g

0x30f1,	// (0x00025799) popup_toolbar2_fixed_window_cp01_ParamLimits

0x30f1,	// (0x00025799) popup_toolbar2_fixed_window_cp01

0x734b,	// (0x000299f3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x734b,	// (0x000299f3) popup_toolbar2_fixed_window_cp02

0xb995,	// (0x0002e03d) popup_call2_audio_second_window_t4_ParamLimits

0xb995,	// (0x0002e03d) popup_call2_audio_second_window_t4

0xbec3,	// (0x0002e56b) popup_call2_audio_first_window_t6_ParamLimits

0xbec3,	// (0x0002e56b) popup_call2_audio_first_window_t6

0xc159,	// (0x0002e801) popup_call2_audio_out_window_t6_ParamLimits

0xc159,	// (0x0002e801) popup_call2_audio_out_window_t6

0x2ee5,	// (0x0002558d) main_vitu_pane

0x78e1,	// (0x00029f89) aid_size_cell_itu_ParamLimits

0x78e1,	// (0x00029f89) aid_size_cell_itu

0x310f,	// (0x000257b7) bg_popup_window_pane_cp08_ParamLimits

0x310f,	// (0x000257b7) bg_popup_window_pane_cp08

0x78f7,	// (0x00029f9f) field_vitu_entry_pane_ParamLimits

0x78f7,	// (0x00029f9f) field_vitu_entry_pane

0x790a,	// (0x00029fb2) grid_vitu_function_pane_ParamLimits

0x790a,	// (0x00029fb2) grid_vitu_function_pane

0x791f,	// (0x00029fc7) grid_vitu_itu_pane_ParamLimits

0x791f,	// (0x00029fc7) grid_vitu_itu_pane

0x7935,	// (0x00029fdd) cell_vitu_itu_pane_ParamLimits

0x7935,	// (0x00029fdd) cell_vitu_itu_pane

0x7957,	// (0x00029fff) cell_vitu_function_pane_ParamLimits

0x7957,	// (0x00029fff) cell_vitu_function_pane

0x310f,	// (0x000257b7) bg_popup_sub_pane_cp08_ParamLimits

0x310f,	// (0x000257b7) bg_popup_sub_pane_cp08

0x7970,	// (0x0002a018) field_vitu_entry_pane_t1_ParamLimits

0x7970,	// (0x0002a018) field_vitu_entry_pane_t1

0xd0ee,	// (0x0002f796) field_vitu_entry_pane_t2_ParamLimits

0xd0ee,	// (0x0002f796) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x00031efa) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x00031efa) field_vitu_entry_pane_t

0xd10b,	// (0x0002f7b3) bg_button_pane_cp05_ParamLimits

0xd10b,	// (0x0002f7b3) bg_button_pane_cp05

0x798c,	// (0x0002a034) cell_vitu_itu_pane_g1

0x79a4,	// (0x0002a04c) cell_vitu_itu_pane_t1_ParamLimits

0x79a4,	// (0x0002a04c) cell_vitu_itu_pane_t1

0x79b6,	// (0x0002a05e) cell_vitu_itu_pane_t2_ParamLimits

0x79b6,	// (0x0002a05e) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x00031eff) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x00031eff) cell_vitu_itu_pane_t

0xd119,	// (0x0002f7c1) bg_button_pane_cp07

0x79eb,	// (0x0002a093) cell_vitu_function_pane_g1

0xa899,	// (0x0002cf41) main_calc_pane_g1

0x2f1c,	// (0x000255c4) aid_visual_content_pane

0x2ee5,	// (0x0002558d) main_vradio_pane

0x79f4,	// (0x0002a09c) main_vradio_pane_g1_ParamLimits

0x79f4,	// (0x0002a09c) main_vradio_pane_g1

0xd123,	// (0x0002f7cb) main_vradio_pane_g2_ParamLimits

0xd123,	// (0x0002f7cb) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x00031f06) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x00031f06) main_vradio_pane_g

0x7a0a,	// (0x0002a0b2) main_vradio_pane_t1_ParamLimits

0x7a0a,	// (0x0002a0b2) main_vradio_pane_t1

0x7a1f,	// (0x0002a0c7) main_vradio_pane_t2_ParamLimits

0x7a1f,	// (0x0002a0c7) main_vradio_pane_t2

0xd130,	// (0x0002f7d8) main_vradio_pane_t3_ParamLimits

0xd130,	// (0x0002f7d8) main_vradio_pane_t3

0x0002,

0xf863,	// (0x00031f0b) main_vradio_pane_t_ParamLimits

0xf863,	// (0x00031f0b) main_vradio_pane_t

0x7a34,	// (0x0002a0dc) vradio_rocker_control_pane_ParamLimits

0x7a34,	// (0x0002a0dc) vradio_rocker_control_pane

0x7a46,	// (0x0002a0ee) vradio_station_info_pane_ParamLimits

0x7a46,	// (0x0002a0ee) vradio_station_info_pane

0xd142,	// (0x0002f7ea) vradio_frequency_info_pane_ParamLimits

0xd142,	// (0x0002f7ea) vradio_frequency_info_pane

0xcb42,	// (0x0002f1ea) vradio_station_info_pane_g1

0xd151,	// (0x0002f7f9) vradio_station_info_pane_t1_ParamLimits

0xd151,	// (0x0002f7f9) vradio_station_info_pane_t1

0xd173,	// (0x0002f81b) vradio_station_info_pane_t2_ParamLimits

0xd173,	// (0x0002f81b) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x00031f12) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x00031f12) vradio_station_info_pane_t

0xd185,	// (0x0002f82d) vradio_tuning_pane

0xd18d,	// (0x0002f835) vradio_rocker_control_pane_g1

0xd195,	// (0x0002f83d) vradio_rocker_control_pane_g2

0xd19d,	// (0x0002f845) vradio_rocker_control_pane_g3

0xd1a5,	// (0x0002f84d) vradio_rocker_control_pane_g4

0xd1ad,	// (0x0002f855) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x00031f17) vradio_rocker_control_pane_g

0x7a56,	// (0x0002a0fe) vradio_frequency_info_pane_g1

0xd1b5,	// (0x0002f85d) vradio_frequency_info_pane_t1_ParamLimits

0xd1b5,	// (0x0002f85d) vradio_frequency_info_pane_t1

0x7a60,	// (0x0002a108) vradio_tuning_pane_g1

0x7a69,	// (0x0002a111) vradio_tuning_pane_t1

0x2f67,	// (0x0002560f) area_side_right_pane_ParamLimits

0x2f67,	// (0x0002560f) area_side_right_pane

0xc614,	// (0x0002ecbc) status_small_pane_g1

0xc61c,	// (0x0002ecc4) status_small_pane_g2

0xc625,	// (0x0002eccd) status_small_pane_g3

0xc62e,	// (0x0002ecd6) status_small_pane_g4

0x0003,

0xf62f,	// (0x00031cd7) status_small_pane_g

0xc637,	// (0x0002ecdf) status_small_pane_t1

0x2ee5,	// (0x0002558d) main_video3_pane

0xd1c9,	// (0x0002f871) cams_zoom_vslider_pane

0xd1d1,	// (0x0002f879) image3_wide_pane_ParamLimits

0xd1d1,	// (0x0002f879) image3_wide_pane

0xd1eb,	// (0x0002f893) image3_wide_small_pane

0xd1f5,	// (0x0002f89d) main_video3_pane_g1_ParamLimits

0xd1f5,	// (0x0002f89d) main_video3_pane_g1

0xd211,	// (0x0002f8b9) main_video3_pane_g2_ParamLimits

0xd211,	// (0x0002f8b9) main_video3_pane_g2

0x0001,

0xf87a,	// (0x00031f22) main_video3_pane_g_ParamLimits

0xf87a,	// (0x00031f22) main_video3_pane_g

0xd22d,	// (0x0002f8d5) main_video3_pane_t1_ParamLimits

0xd22d,	// (0x0002f8d5) main_video3_pane_t1

0xd258,	// (0x0002f900) main_video3_pane_t2_ParamLimits

0xd258,	// (0x0002f900) main_video3_pane_t2

0xd283,	// (0x0002f92b) main_video3_pane_t3_ParamLimits

0xd283,	// (0x0002f92b) main_video3_pane_t3

0x0002,

0xf87f,	// (0x00031f27) main_video3_pane_t_ParamLimits

0xf87f,	// (0x00031f27) main_video3_pane_t

0xd2ae,	// (0x0002f956) cams_zoom_vslider_pane_g1

0xd2b7,	// (0x0002f95f) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x00031f2e) cams_zoom_vslider_pane_g

0xd2bf,	// (0x0002f967) small_slider_vertical_pane

0xcb42,	// (0x0002f1ea) small_slider_vertical_pane_g1

0xcb42,	// (0x0002f1ea) small_slider_vertical_pane_g2

0xd2c7,	// (0x0002f96f) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x00031f33) small_slider_vertical_pane_g

0x2ee5,	// (0x0002558d) main_hwr_training_pane

0xd2d0,	// (0x0002f978) hwr_training_instruct_pane_ParamLimits

0xd2d0,	// (0x0002f978) hwr_training_instruct_pane

0x7a78,	// (0x0002a120) hwr_training_navi_pane_ParamLimits

0x7a78,	// (0x0002a120) hwr_training_navi_pane

0x7a8f,	// (0x0002a137) hwr_training_write_pane_ParamLimits

0x7a8f,	// (0x0002a137) hwr_training_write_pane

0x2ee5,	// (0x0002558d) bg_frame_shadow_pane

0xd2ff,	// (0x0002f9a7) hwr_training_write_pane_g1

0xd307,	// (0x0002f9af) hwr_training_write_pane_g2

0xd30f,	// (0x0002f9b7) hwr_training_write_pane_g3

0xd317,	// (0x0002f9bf) hwr_training_write_pane_g4

0xd31f,	// (0x0002f9c7) hwr_training_write_pane_g5

0xd327,	// (0x0002f9cf) hwr_training_write_pane_g6

0xd32f,	// (0x0002f9d7) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x00031f3a) hwr_training_write_pane_g

0xd337,	// (0x0002f9df) hwr_training_navi_pane_g1_ParamLimits

0xd337,	// (0x0002f9df) hwr_training_navi_pane_g1

0xd349,	// (0x0002f9f1) hwr_training_navi_pane_g2_ParamLimits

0xd349,	// (0x0002f9f1) hwr_training_navi_pane_g2

0xd35b,	// (0x0002fa03) hwr_training_navi_pane_g3_ParamLimits

0xd35b,	// (0x0002fa03) hwr_training_navi_pane_g3

0xd36b,	// (0x0002fa13) hwr_training_navi_pane_g4_ParamLimits

0xd36b,	// (0x0002fa13) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x00031f49) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x00031f49) hwr_training_navi_pane_g

0xd378,	// (0x0002fa20) hwr_training_navi_pane_t1

0x7ac2,	// (0x0002a16a) list_single_hwr_training_instruct_pane_ParamLimits

0x7ac2,	// (0x0002a16a) list_single_hwr_training_instruct_pane

0xd386,	// (0x0002fa2e) list_single_hwr_training_instruct_pane_t1

0xca82,	// (0x0002f12a) bg_frame_shadow_pane_g1

0xd395,	// (0x0002fa3d) bg_frame_shadow_pane_g2

0xd39d,	// (0x0002fa45) bg_frame_shadow_pane_g3

0xd3a5,	// (0x0002fa4d) bg_frame_shadow_pane_g4

0xd3ad,	// (0x0002fa55) bg_frame_shadow_pane_g5

0xd3b5,	// (0x0002fa5d) bg_frame_shadow_pane_g6

0xd3bd,	// (0x0002fa65) bg_frame_shadow_pane_g7

0x3c7d,	// (0x00026325) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x00031f54) bg_frame_shadow_pane_g

0x2ee5,	// (0x0002558d) main_video_tele_dialer_pane

0x254f,	// (0x00024bf7) aid_size_cell_video_keypad_ParamLimits

0x254f,	// (0x00024bf7) aid_size_cell_video_keypad

0x2569,	// (0x00024c11) grid_video_dialer_keypad_pane_ParamLimits

0x2569,	// (0x00024c11) grid_video_dialer_keypad_pane

0x25ab,	// (0x00024c53) video_down_pane_cp_ParamLimits

0x25ab,	// (0x00024c53) video_down_pane_cp

0x25bf,	// (0x00024c67) cell_video_dialer_keypad_pane_ParamLimits

0x25bf,	// (0x00024c67) cell_video_dialer_keypad_pane

0xd3c5,	// (0x0002fa6d) bg_button_pane_cp08_ParamLimits

0xd3c5,	// (0x0002fa6d) bg_button_pane_cp08

0x7af6,	// (0x0002a19e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7af6,	// (0x0002a19e) cell_video_dialer_keypad_pane_g1

0x7307,	// (0x000299af) mup3_rocker2_pane_ParamLimits

0x7307,	// (0x000299af) mup3_rocker2_pane

0xcb42,	// (0x0002f1ea) mup3_rocker2_pane_g1

0x6467,	// (0x00028b0f) main_dialer2_pane

0x2ee5,	// (0x0002558d) main_mp4_pane

0xd3d9,	// (0x0002fa81) main_mp4_pane_g1_ParamLimits

0xd3d9,	// (0x0002fa81) main_mp4_pane_g1

0xd3d9,	// (0x0002fa81) main_mp4_pane_g2_ParamLimits

0xd3d9,	// (0x0002fa81) main_mp4_pane_g2

0x25e1,	// (0x00024c89) main_mp4_pane_g3_ParamLimits

0x25e1,	// (0x00024c89) main_mp4_pane_g3

0xd3e7,	// (0x0002fa8f) main_mp4_pane_g4_ParamLimits

0xd3e7,	// (0x0002fa8f) main_mp4_pane_g4

0xd415,	// (0x0002fabd) main_mp4_pane_g5_ParamLimits

0xd415,	// (0x0002fabd) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x00031f74) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x00031f74) main_mp4_pane_g

0xd471,	// (0x0002fb19) main_mp4_pane_t1_ParamLimits

0xd471,	// (0x0002fb19) main_mp4_pane_t1

0xd4c9,	// (0x0002fb71) main_mp4_pane_t2_ParamLimits

0xd4c9,	// (0x0002fb71) main_mp4_pane_t2

0xd51b,	// (0x0002fbc3) main_mp4_pane_t3_ParamLimits

0xd51b,	// (0x0002fbc3) main_mp4_pane_t3

0xd541,	// (0x0002fbe9) main_mp4_pane_t4_ParamLimits

0xd541,	// (0x0002fbe9) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x00031f81) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x00031f81) main_mp4_pane_t

0xd581,	// (0x0002fc29) mp4_progress_pane_ParamLimits

0xd581,	// (0x0002fc29) mp4_progress_pane

0xd5c5,	// (0x0002fc6d) mp4_rocker_pane_ParamLimits

0xd5c5,	// (0x0002fc6d) mp4_rocker_pane

0xd5eb,	// (0x0002fc93) mp4_progress_pane_t1

0xd602,	// (0x0002fcaa) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x00031f8a) mp4_progress_pane_t

0xd619,	// (0x0002fcc1) mup_progress_pane_cp04

0xd625,	// (0x0002fccd) mp4_rocker_pane_g1

0x2611,	// (0x00024cb9) aid_cell_size_keypad2_ParamLimits

0x2611,	// (0x00024cb9) aid_cell_size_keypad2

0x262b,	// (0x00024cd3) dialer2_ne_pane_ParamLimits

0x262b,	// (0x00024cd3) dialer2_ne_pane

0x2640,	// (0x00024ce8) grid_dialer2_keypad_pane_ParamLimits

0x2640,	// (0x00024ce8) grid_dialer2_keypad_pane

0xc92f,	// (0x0002efd7) bg_popup_call_pane_cp07_ParamLimits

0xc92f,	// (0x0002efd7) bg_popup_call_pane_cp07

0x7b31,	// (0x0002a1d9) dialer2_ne_pane_t1_ParamLimits

0x7b31,	// (0x0002a1d9) dialer2_ne_pane_t1

0x2656,	// (0x00024cfe) cell_dialer2_keypad_pane_ParamLimits

0x2656,	// (0x00024cfe) cell_dialer2_keypad_pane

0xd641,	// (0x0002fce9) bg_button_pane_pane_cp04_ParamLimits

0xd641,	// (0x0002fce9) bg_button_pane_pane_cp04

0x7b6e,	// (0x0002a216) cell_dialer2_keypad_pane_g1_ParamLimits

0x7b6e,	// (0x0002a216) cell_dialer2_keypad_pane_g1

0x456c,	// (0x00026c14) aid_placing_vt_set_content_ParamLimits

0x456c,	// (0x00026c14) aid_placing_vt_set_content

0x458e,	// (0x00026c36) aid_placing_vt_set_title_ParamLimits

0x458e,	// (0x00026c36) aid_placing_vt_set_title

0x2ee5,	// (0x0002558d) main_image3_pane

0x26bc,	// (0x00024d64) area_side_right_pane_cp01_ParamLimits

0x26bc,	// (0x00024d64) area_side_right_pane_cp01

0xd3d9,	// (0x0002fa81) main_image3_pane_g1_ParamLimits

0xd3d9,	// (0x0002fa81) main_image3_pane_g1

0x26d3,	// (0x00024d7b) main_image3_pane_g2_ParamLimits

0x26d3,	// (0x00024d7b) main_image3_pane_g2

0x26f9,	// (0x00024da1) main_image3_pane_g3_ParamLimits

0x26f9,	// (0x00024da1) main_image3_pane_g3

0x271f,	// (0x00024dc7) main_image3_pane_g4_ParamLimits

0x271f,	// (0x00024dc7) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x00031f99) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x00031f99) main_image3_pane_g

0x2745,	// (0x00024ded) main_image3_pane_t1_ParamLimits

0x2745,	// (0x00024ded) main_image3_pane_t1

0x279d,	// (0x00024e45) main_image3_pane_t2_ParamLimits

0x279d,	// (0x00024e45) main_image3_pane_t2

0x27ef,	// (0x00024e97) main_image3_pane_t3_ParamLimits

0x27ef,	// (0x00024e97) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x00031fa2) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x00031fa2) main_image3_pane_t

0x310f,	// (0x000257b7) grid_sctrl_middle_pane_cp01_ParamLimits

0x310f,	// (0x000257b7) grid_sctrl_middle_pane_cp01

0x7bb9,	// (0x0002a261) cell_sctrl_middle_pane_cp01_ParamLimits

0x7bb9,	// (0x0002a261) cell_sctrl_middle_pane_cp01

0x7bd6,	// (0x0002a27e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7bd6,	// (0x0002a27e) cell_sctrl_middle_pane_cp01_g1

0x2ee5,	// (0x0002558d) main_call4_pane

0x7bec,	// (0x0002a294) aid_size_button_call4_ParamLimits

0x7bec,	// (0x0002a294) aid_size_button_call4

0x7c19,	// (0x0002a2c1) call4_windows_pane_ParamLimits

0x7c19,	// (0x0002a2c1) call4_windows_pane

0x7c2f,	// (0x0002a2d7) grid_call4_button_pane_ParamLimits

0x7c2f,	// (0x0002a2d7) grid_call4_button_pane

0xd697,	// (0x0002fd3f) call4_windows_conf_pane

0x7c4e,	// (0x0002a2f6) popup_call4_audio_first_window_ParamLimits

0x7c4e,	// (0x0002a2f6) popup_call4_audio_first_window

0x7c6e,	// (0x0002a316) popup_call4_audio_second_window_ParamLimits

0x7c6e,	// (0x0002a316) popup_call4_audio_second_window

0xd6ca,	// (0x0002fd72) popup_call4_audio_wait_window_ParamLimits

0xd6ca,	// (0x0002fd72) popup_call4_audio_wait_window

0x7c80,	// (0x0002a328) cell_call4_button_pane_ParamLimits

0x7c80,	// (0x0002a328) cell_call4_button_pane

0x7ca5,	// (0x0002a34d) bg_button_pane_cp09_ParamLimits

0x7ca5,	// (0x0002a34d) bg_button_pane_cp09

0x7cb1,	// (0x0002a359) cell_call4_button_pane_g1_ParamLimits

0x7cb1,	// (0x0002a359) cell_call4_button_pane_g1

0x7cd7,	// (0x0002a37f) cell_call4_button_pane_t1_ParamLimits

0x7cd7,	// (0x0002a37f) cell_call4_button_pane_t1

0xd710,	// (0x0002fdb8) popup_call4_audio_conf_window_ParamLimits

0xd710,	// (0x0002fdb8) popup_call4_audio_conf_window

0x7361,	// (0x00029a09) mup3_progress_pane_t1_ParamLimits

0x7377,	// (0x00029a1f) mup3_progress_pane_t2_ParamLimits

0xce60,	// (0x0002f508) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x00031e7b) mup3_progress_pane_t_ParamLimits

0xce77,	// (0x0002f51f) mup_progress_pane_cp03_ParamLimits

0x78d9,	// (0x00029f81) mup3_control_keys_pane_g4_copy1

0xd5af,	// (0x0002fc57) mp4_rocker2_pane_ParamLimits

0xd5af,	// (0x0002fc57) mp4_rocker2_pane

0xd724,	// (0x0002fdcc) mp4_rocker2_pane_g1

0xd72c,	// (0x0002fdd4) mp4_rocker2_pane_g2

0xd734,	// (0x0002fddc) mp4_rocker2_pane_g3

0xd73c,	// (0x0002fde4) mp4_rocker2_pane_g4

0xd744,	// (0x0002fdec) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x00031fab) mp4_rocker2_pane_g

0x2ee5,	// (0x0002558d) main_camera4_pane

0x2ee5,	// (0x0002558d) main_video4_pane

0x257d,	// (0x00024c25) main_video_tele_dialer_pane_t1_ParamLimits

0x257d,	// (0x00024c25) main_video_tele_dialer_pane_t1

0x2594,	// (0x00024c3c) main_video_tele_dialer_pane_t2_ParamLimits

0x2594,	// (0x00024c3c) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x00031f65) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x00031f65) main_video_tele_dialer_pane_t

0x2883,	// (0x00024f2b) cam4_autofocus_pane_ParamLimits

0x2883,	// (0x00024f2b) cam4_autofocus_pane

0x2897,	// (0x00024f3f) cam4_image_uncrop_pane_ParamLimits

0x2897,	// (0x00024f3f) cam4_image_uncrop_pane

0x28ae,	// (0x00024f56) cam4_indicators_pane_ParamLimits

0x28ae,	// (0x00024f56) cam4_indicators_pane

0x28d2,	// (0x00024f7a) main_camera4_pane_g1_ParamLimits

0x28d2,	// (0x00024f7a) main_camera4_pane_g1

0x28de,	// (0x00024f86) main_camera4_pane_g2_ParamLimits

0x28de,	// (0x00024f86) main_camera4_pane_g2

0x28de,	// (0x00024f86) main_camera4_pane_g3_ParamLimits

0x28de,	// (0x00024f86) main_camera4_pane_g3

0x28ea,	// (0x00024f92) main_camera4_pane_g4_ParamLimits

0x28ea,	// (0x00024f92) main_camera4_pane_g4

0x28f6,	// (0x00024f9e) main_camera4_pane_g5_ParamLimits

0x28f6,	// (0x00024f9e) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x00031fb6) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x00031fb6) main_camera4_pane_g

0x2913,	// (0x00024fbb) main_camera4_pane_t1_ParamLimits

0x2913,	// (0x00024fbb) main_camera4_pane_t1

0xd766,	// (0x0002fe0e) bg_tb_trans_pane_cp06

0xd77c,	// (0x0002fe24) cam4_indicators_pane_g1

0xd78c,	// (0x0002fe34) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x00031fd1) cam4_indicators_pane_g

0xd7ac,	// (0x0002fe54) cam4_indicators_pane_t1

0x2956,	// (0x00024ffe) main_video4_pane_g1_ParamLimits

0x2956,	// (0x00024ffe) main_video4_pane_g1

0x2968,	// (0x00025010) main_video4_pane_g2_ParamLimits

0x2968,	// (0x00025010) main_video4_pane_g2

0x2968,	// (0x00025010) main_video4_pane_g3_ParamLimits

0x2968,	// (0x00025010) main_video4_pane_g3

0x2977,	// (0x0002501f) main_video4_pane_g4_ParamLimits

0x2977,	// (0x0002501f) main_video4_pane_g4

0x0004,

0xf930,	// (0x00031fd8) main_video4_pane_g_ParamLimits

0xf930,	// (0x00031fd8) main_video4_pane_g

0x2995,	// (0x0002503d) vid4_indicators_pane_ParamLimits

0x2995,	// (0x0002503d) vid4_indicators_pane

0x29bd,	// (0x00025065) video4_image_uncrop_cif_pane_ParamLimits

0x29bd,	// (0x00025065) video4_image_uncrop_cif_pane

0x29d5,	// (0x0002507d) video4_image_uncrop_nhd_pane_ParamLimits

0x29d5,	// (0x0002507d) video4_image_uncrop_nhd_pane

0x29e9,	// (0x00025091) video4_image_uncrop_vga_pane_ParamLimits

0x29e9,	// (0x00025091) video4_image_uncrop_vga_pane

0xd7ce,	// (0x0002fe76) bg_tb_trans_pane_cp07

0x2a01,	// (0x000250a9) vid4_indicators_pane_g1

0x2a0e,	// (0x000250b6) vid4_indicators_pane_g2

0x2a1b,	// (0x000250c3) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x00031fe3) vid4_indicators_pane_g

0x2a40,	// (0x000250e8) vid4_indicators_pane_t1

0x7d13,	// (0x0002a3bb) cam4_autofocus_pane_g1

0x7d1b,	// (0x0002a3c3) cam4_autofocus_pane_g2

0x7d23,	// (0x0002a3cb) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x00031fee) cam4_autofocus_pane_g

0x7d2b,	// (0x0002a3d3) cam4_autofocus_pane_g3_copy1

0x7ada,	// (0x0002a182) video_down_pane_cp_t1

0x7ae8,	// (0x0002a190) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x00031f6a) video_down_pane_cp_t

0x310f,	// (0x000257b7) popup_vitu2_window_ParamLimits

0x310f,	// (0x000257b7) popup_vitu2_window

0x2a52,	// (0x000250fa) aid_size_cell2_itu2_ParamLimits

0x2a52,	// (0x000250fa) aid_size_cell2_itu2

0x2a78,	// (0x00025120) aid_size_cell_itu2_ParamLimits

0x2a78,	// (0x00025120) aid_size_cell_itu2

0x2aca,	// (0x00025172) bg_popup_window_pane_cp09_ParamLimits

0x2aca,	// (0x00025172) bg_popup_window_pane_cp09

0x2ad8,	// (0x00025180) field_vitu2_entry_pane_ParamLimits

0x2ad8,	// (0x00025180) field_vitu2_entry_pane

0x2af2,	// (0x0002519a) grid_vitu2_function_pane_ParamLimits

0x2af2,	// (0x0002519a) grid_vitu2_function_pane

0x2b2d,	// (0x000251d5) grid_vitu2_itu_pane_ParamLimits

0x2b2d,	// (0x000251d5) grid_vitu2_itu_pane

0x2b92,	// (0x0002523a) cell_vitu2_itu_pane_ParamLimits

0x2b92,	// (0x0002523a) cell_vitu2_itu_pane

0x2bb4,	// (0x0002525c) cell_vitu2_function_pane_ParamLimits

0x2bb4,	// (0x0002525c) cell_vitu2_function_pane

0xd7dc,	// (0x0002fe84) bg_popup_call_pane_cp08_ParamLimits

0xd7dc,	// (0x0002fe84) bg_popup_call_pane_cp08

0xd7f5,	// (0x0002fe9d) field_vitu2_entry_pane_g1

0xd801,	// (0x0002fea9) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x00031ff5) field_vitu2_entry_pane_g

0x7d33,	// (0x0002a3db) field_vitu2_entry_pane_t1_ParamLimits

0x7d33,	// (0x0002a3db) field_vitu2_entry_pane_t1

0xd81b,	// (0x0002fec3) field_vitu2_entry_pane_t2_ParamLimits

0xd81b,	// (0x0002fec3) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x00031ffc) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x00031ffc) field_vitu2_entry_pane_t

0x2bf3,	// (0x0002529b) bg_button_pane_cp010_ParamLimits

0x2bf3,	// (0x0002529b) bg_button_pane_cp010

0x2c01,	// (0x000252a9) cell_vitu2_itu_pane_g1

0x2c1f,	// (0x000252c7) cell_vitu2_itu_pane_t1_ParamLimits

0x2c1f,	// (0x000252c7) cell_vitu2_itu_pane_t1

0x2c85,	// (0x0002532d) cell_vitu2_itu_pane_t2_ParamLimits

0x2c85,	// (0x0002532d) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x00032006) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x00032006) cell_vitu2_itu_pane_t

0xd840,	// (0x0002fee8) bg_button_pane_cp011

0x2d61,	// (0x00025409) cell_vitu2_function_pane_g1

0x2ee5,	// (0x0002558d) main_myfav_hc_pane

0x283b,	// (0x00024ee3) popup_image3_note_pane_ParamLimits

0x283b,	// (0x00024ee3) popup_image3_note_pane

0x2855,	// (0x00024efd) popup_image3_tool_bar_pane_ParamLimits

0x2855,	// (0x00024efd) popup_image3_tool_bar_pane

0x2d09,	// (0x000253b1) cell_vitu2_itu_pane_t3_ParamLimits

0x2d09,	// (0x000253b1) cell_vitu2_itu_pane_t3

0x2ee5,	// (0x0002558d) bg_popup_trans_pane

0xd84e,	// (0x0002fef6) grid_image3_tool_bar_pane

0xd858,	// (0x0002ff00) bg_popup_trans_pane_g1

0x4ab4,	// (0x0002715c) bg_popup_trans_pane_g2

0xd860,	// (0x0002ff08) bg_popup_trans_pane_g3

0xd868,	// (0x0002ff10) bg_popup_trans_pane_g4

0xd870,	// (0x0002ff18) bg_popup_trans_pane_g5

0xd878,	// (0x0002ff20) bg_popup_trans_pane_g6

0xd880,	// (0x0002ff28) bg_popup_trans_pane_g7

0xd888,	// (0x0002ff30) bg_popup_trans_pane_g8

0x4a94,	// (0x0002713c) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0003200d) bg_popup_trans_pane_g

0xa965,	// (0x0002d00d) cell_image3_tool_bar_pane_ParamLimits

0xa965,	// (0x0002d00d) cell_image3_tool_bar_pane

0xcb42,	// (0x0002f1ea) cell_image3_tool_bar_pane_g1

0x2ee5,	// (0x0002558d) bg_popup_trans_pane_cp1

0xd890,	// (0x0002ff38) popup_image3_note_pane_t1

0xd89e,	// (0x0002ff46) popup_image3_note_pane_t2

0xd8ac,	// (0x0002ff54) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x00032020) popup_image3_note_pane_t

0xd8ba,	// (0x0002ff62) popup_image3_note_pane_t3_copy1

0x7d4f,	// (0x0002a3f7) bg_myfav_hc_instruction_pane_ParamLimits

0x7d4f,	// (0x0002a3f7) bg_myfav_hc_instruction_pane

0x7d61,	// (0x0002a409) cell_myfav_contact_pane_ParamLimits

0x7d61,	// (0x0002a409) cell_myfav_contact_pane

0x7d7b,	// (0x0002a423) cell_myfav_contact_pane_cp1_ParamLimits

0x7d7b,	// (0x0002a423) cell_myfav_contact_pane_cp1

0x7d91,	// (0x0002a439) cell_myfav_contact_pane_cp2_ParamLimits

0x7d91,	// (0x0002a439) cell_myfav_contact_pane_cp2

0x7da7,	// (0x0002a44f) cell_myfav_contact_pane_cp3_ParamLimits

0x7da7,	// (0x0002a44f) cell_myfav_contact_pane_cp3

0x7dbc,	// (0x0002a464) cell_myfav_contact_pane_cp4_ParamLimits

0x7dbc,	// (0x0002a464) cell_myfav_contact_pane_cp4

0x7dd0,	// (0x0002a478) cell_myfav_contact_pane_cp5_ParamLimits

0x7dd0,	// (0x0002a478) cell_myfav_contact_pane_cp5

0x7de4,	// (0x0002a48c) cell_myfav_contact_pane_cp6_ParamLimits

0x7de4,	// (0x0002a48c) cell_myfav_contact_pane_cp6

0x7df8,	// (0x0002a4a0) cell_myfav_contact_pane_cp7_ParamLimits

0x7df8,	// (0x0002a4a0) cell_myfav_contact_pane_cp7

0xd8c8,	// (0x0002ff70) listscroll_gen_pane_cp05

0x7e10,	// (0x0002a4b8) main_myfav_hc_pane_g1_ParamLimits

0x7e10,	// (0x0002a4b8) main_myfav_hc_pane_g1

0x7e26,	// (0x0002a4ce) main_myfav_hc_pane_g2_ParamLimits

0x7e26,	// (0x0002a4ce) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x00032027) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x00032027) main_myfav_hc_pane_g

0x7e50,	// (0x0002a4f8) main_myfav_hc_pane_t1_ParamLimits

0x7e50,	// (0x0002a4f8) main_myfav_hc_pane_t1

0xd8d1,	// (0x0002ff79) main_myfav_hc_pane_t2_ParamLimits

0xd8d1,	// (0x0002ff79) main_myfav_hc_pane_t2

0xd8e3,	// (0x0002ff8b) main_myfav_hc_pane_t3_ParamLimits

0xd8e3,	// (0x0002ff8b) main_myfav_hc_pane_t3

0x7e65,	// (0x0002a50d) main_myfav_hc_pane_t4_ParamLimits

0x7e65,	// (0x0002a50d) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0003202e) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0003202e) main_myfav_hc_pane_t

0xcb42,	// (0x0002f1ea) bg_myfav_hc_instruction_pane_g1

0xd8f5,	// (0x0002ff9d) cell_myfav_contact_pane_g1_ParamLimits

0xd8f5,	// (0x0002ff9d) cell_myfav_contact_pane_g1

0xd8f5,	// (0x0002ff9d) cell_myfav_contact_pane_g2_ParamLimits

0xd8f5,	// (0x0002ff9d) cell_myfav_contact_pane_g2

0xd901,	// (0x0002ffa9) cell_myfav_contact_pane_g3_ParamLimits

0xd901,	// (0x0002ffa9) cell_myfav_contact_pane_g3

0xce4a,	// (0x0002f4f2) cell_myfav_contact_pane_g4_ParamLimits

0xce4a,	// (0x0002f4f2) cell_myfav_contact_pane_g4

0xd90e,	// (0x0002ffb6) cell_myfav_contact_pane_g5_ParamLimits

0xd90e,	// (0x0002ffb6) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x00032039) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x00032039) cell_myfav_contact_pane_g

0x7e3c,	// (0x0002a4e4) main_myfav_hc_pane_g3_ParamLimits

0x7e3c,	// (0x0002a4e4) main_myfav_hc_pane_g3

0x306f,	// (0x00025717) popup_adpt_find_window

0x7e89,	// (0x0002a531) afind_page_pane_ParamLimits

0x7e89,	// (0x0002a531) afind_page_pane

0x7e9e,	// (0x0002a546) aid_size_cell_afind_ParamLimits

0x7e9e,	// (0x0002a546) aid_size_cell_afind

0x7ebc,	// (0x0002a564) bg_popup_sub_pane_cp09_ParamLimits

0x7ebc,	// (0x0002a564) bg_popup_sub_pane_cp09

0x7ec9,	// (0x0002a571) find_pane_cp01_ParamLimits

0x7ec9,	// (0x0002a571) find_pane_cp01

0xd91a,	// (0x0002ffc2) grid_afind_control_pane_ParamLimits

0xd91a,	// (0x0002ffc2) grid_afind_control_pane

0x7ed6,	// (0x0002a57e) grid_afind_pane_ParamLimits

0x7ed6,	// (0x0002a57e) grid_afind_pane

0x7ef4,	// (0x0002a59c) cell_afind_pane_ParamLimits

0x7ef4,	// (0x0002a59c) cell_afind_pane

0xcb42,	// (0x0002f1ea) afind_page_pane_g1

0x7f41,	// (0x0002a5e9) afind_page_pane_g2

0x7f4a,	// (0x0002a5f2) afind_page_pane_g3

0x0002,

0xf99c,	// (0x00032044) afind_page_pane_g

0x7f53,	// (0x0002a5fb) afind_page_pane_t1

0xd92e,	// (0x0002ffd6) cell_afind_grid_control_pane_ParamLimits

0xd92e,	// (0x0002ffd6) cell_afind_grid_control_pane

0xd641,	// (0x0002fce9) bg_button_pane_cp69_ParamLimits

0xd641,	// (0x0002fce9) bg_button_pane_cp69

0x7f73,	// (0x0002a61b) cell_afind_pane_g1_ParamLimits

0x7f73,	// (0x0002a61b) cell_afind_pane_g1

0x7f80,	// (0x0002a628) cell_afind_pane_t1_ParamLimits

0x7f80,	// (0x0002a628) cell_afind_pane_t1

0x4415,	// (0x00026abd) bg_button_pane_cp72

0xd93d,	// (0x0002ffe5) cell_afind_grid_control_pane_g1

0x6009,	// (0x000286b1) aid_image_placing_area_ParamLimits

0x6009,	// (0x000286b1) aid_image_placing_area

0xd0d6,	// (0x0002f77e) field_vitu_entry_pane_g1_ParamLimits

0xd0d6,	// (0x0002f77e) field_vitu_entry_pane_g1

0xd0e2,	// (0x0002f78a) field_vitu_entry_pane_g2_ParamLimits

0xd0e2,	// (0x0002f78a) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x00031ef5) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x00031ef5) field_vitu_entry_pane_g

0x798c,	// (0x0002a034) cell_vitu_itu_pane_g1_ParamLimits

0x79ce,	// (0x0002a076) cell_vitu_itu_pane_t3_ParamLimits

0x79ce,	// (0x0002a076) cell_vitu_itu_pane_t3

0xd5eb,	// (0x0002fc93) mp4_progress_pane_t1_ParamLimits

0xd602,	// (0x0002fcaa) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x00031f8a) mp4_progress_pane_t_ParamLimits

0xd619,	// (0x0002fcc1) mup_progress_pane_cp04_ParamLimits

0x7e77,	// (0x0002a51f) main_myfav_hc_pane_t5_ParamLimits

0x7e77,	// (0x0002a51f) main_myfav_hc_pane_t5

0x2f2c,	// (0x000255d4) aid_zoom_text_primary

0x306f,	// (0x00025717) popup_adpt_find_window_ParamLimits

0x310f,	// (0x000257b7) main_cam_set_pane

0x28c0,	// (0x00024f68) cam4_zoom_pane_ParamLimits

0x28c0,	// (0x00024f68) cam4_zoom_pane

0x7f92,	// (0x0002a63a) main_cam_set_pane_g1_ParamLimits

0x7f92,	// (0x0002a63a) main_cam_set_pane_g1

0x7fa0,	// (0x0002a648) main_cam_set_pane_g2_ParamLimits

0x7fa0,	// (0x0002a648) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0003204b) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0003204b) main_cam_set_pane_g

0x7fbf,	// (0x0002a667) main_cam_set_pane_t1_ParamLimits

0x7fbf,	// (0x0002a667) main_cam_set_pane_t1

0x7fd1,	// (0x0002a679) main_cset_listscroll_pane_ParamLimits

0x7fd1,	// (0x0002a679) main_cset_listscroll_pane

0x7fef,	// (0x0002a697) main_cset_slider_pane_ParamLimits

0x7fef,	// (0x0002a697) main_cset_slider_pane

0xd94e,	// (0x0002fff6) main_cset_list_pane_ParamLimits

0xd94e,	// (0x0002fff6) main_cset_list_pane

0xd95e,	// (0x00030006) scroll_pane_cp028

0x8013,	// (0x0002a6bb) aid_area_touch_slider

0x802f,	// (0x0002a6d7) cset_slider_pane

0x8059,	// (0x0002a701) main_cset_slider_pane_g1

0x806e,	// (0x0002a716) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x00032050) main_cset_slider_pane_g

0xd997,	// (0x0003003f) main_cset_slider_pane_t1

0x812a,	// (0x0002a7d2) main_cset_slider_pane_t2

0x8144,	// (0x0002a7ec) main_cset_slider_pane_t3

0x815e,	// (0x0002a806) main_cset_slider_pane_t4

0x8178,	// (0x0002a820) main_cset_slider_pane_t5

0x8192,	// (0x0002a83a) main_cset_slider_pane_t6

0x81a7,	// (0x0002a84f) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x00032075) main_cset_slider_pane_t

0x82ab,	// (0x0002a953) cset_list_set_pane_ParamLimits

0x82ab,	// (0x0002a953) cset_list_set_pane

0x82bc,	// (0x0002a964) aid_position_infowindow_above

0x82c4,	// (0x0002a96c) aid_position_infowindow_below

0x82cc,	// (0x0002a974) cset_list_set_pane_g1_ParamLimits

0x82cc,	// (0x0002a974) cset_list_set_pane_g1

0xda37,	// (0x000300df) cset_list_set_pane_g3_ParamLimits

0xda37,	// (0x000300df) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x00032094) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x00032094) cset_list_set_pane_g

0xda46,	// (0x000300ee) cset_list_set_pane_t1_ParamLimits

0xda46,	// (0x000300ee) cset_list_set_pane_t1

0x310f,	// (0x000257b7) list_highlight_pane_cp021_ParamLimits

0x310f,	// (0x000257b7) list_highlight_pane_cp021

0xb2ad,	// (0x0002d955) cset_slider_pane_g1

0xb2bf,	// (0x0002d967) cset_slider_pane_g2

0xb2b6,	// (0x0002d95e) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x00032099) cset_slider_pane_g

0xda5b,	// (0x00030103) aid_area_touch_cam4_zoom

0xda63,	// (0x0003010b) cam4_zoom_cont_pane

0xda6b,	// (0x00030113) cam4_zoom_pane_g1

0xda73,	// (0x0003011b) cam4_zoom_pane_g2

0x2d75,	// (0x0002541d) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x000320a0) cam4_zoom_pane_g

0xda7b,	// (0x00030123) cam4_zoom_cont_pane_g1

0xda84,	// (0x0003012c) cam4_zoom_cont_pane_g2

0xda8d,	// (0x00030135) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x000320a7) cam4_zoom_cont_pane_g

0x7c0a,	// (0x0002a2b2) call4_image_pane_ParamLimits

0x7c0a,	// (0x0002a2b2) call4_image_pane

0xd697,	// (0x0002fd3f) call4_windows_conf_pane_ParamLimits

0xd6aa,	// (0x0002fd52) popup_call4_audio_in_window_ParamLimits

0xd6aa,	// (0x0002fd52) popup_call4_audio_in_window

0x2ee5,	// (0x0002558d) bg_popup_call2_act_pane_cp02

0xd708,	// (0x0002fdb0) call4_list_conf_pane

0xcb42,	// (0x0002f1ea) call4_image_pane_g1

0xcb42,	// (0x0002f1ea) call4_image_pane_g2

0x0001,

0xf713,	// (0x00031dbb) call4_image_pane_g

0xda96,	// (0x0003013e) list_single_graphic_popup_conf4_pane_ParamLimits

0xda96,	// (0x0003013e) list_single_graphic_popup_conf4_pane

0x2ee5,	// (0x0002558d) list_highlight_pane_cp022

0xdaa9,	// (0x00030151) list_single_graphic_popup_conf4_pane_g1

0xaef2,	// (0x0002d59a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x000320ae) list_single_graphic_popup_conf4_pane_g

0xdab1,	// (0x00030159) list_single_graphic_popup_conf4_pane_t1

0x46aa,	// (0x00026d52) popup_vtel_slider_window_ParamLimits

0x46aa,	// (0x00026d52) popup_vtel_slider_window

0xd62f,	// (0x0002fcd7) dialer2_ne_pane_t2_ParamLimits

0xd62f,	// (0x0002fcd7) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x00031f8f) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x00031f8f) dialer2_ne_pane_t

0xc92f,	// (0x0002efd7) bg_popup_sub_pane_cp010_ParamLimits

0xc92f,	// (0x0002efd7) bg_popup_sub_pane_cp010

0x82d8,	// (0x0002a980) popup_vtel_slider_window_g1_ParamLimits

0x82d8,	// (0x0002a980) popup_vtel_slider_window_g1

0x82eb,	// (0x0002a993) popup_vtel_slider_window_g2_ParamLimits

0x82eb,	// (0x0002a993) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x000320b3) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x000320b3) popup_vtel_slider_window_g

0x833f,	// (0x0002a9e7) vtel_slider_pane_ParamLimits

0x833f,	// (0x0002a9e7) vtel_slider_pane

0x8361,	// (0x0002aa09) vtel_slider_pane_g1_ParamLimits

0x8361,	// (0x0002aa09) vtel_slider_pane_g1

0x8375,	// (0x0002aa1d) vtel_slider_pane_g2_ParamLimits

0x8375,	// (0x0002aa1d) vtel_slider_pane_g2

0x838d,	// (0x0002aa35) vtel_slider_pane_g3_ParamLimits

0x838d,	// (0x0002aa35) vtel_slider_pane_g3

0x8361,	// (0x0002aa09) vtel_slider_pane_g4_ParamLimits

0x8361,	// (0x0002aa09) vtel_slider_pane_g4

0x83a3,	// (0x0002aa4b) vtel_slider_pane_g5_ParamLimits

0x83a3,	// (0x0002aa4b) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x000320bc) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x000320bc) vtel_slider_pane_g

0x2ee5,	// (0x0002558d) main_gallery2_pane

0x2aa4,	// (0x0002514c) aid_size_row_itut2_dropdow_list_ParamLimits

0x2aa4,	// (0x0002514c) aid_size_row_itut2_dropdow_list

0x2b0e,	// (0x000251b6) grid_vitu2_function_top_pane_ParamLimits

0x2b0e,	// (0x000251b6) grid_vitu2_function_top_pane

0x2b51,	// (0x000251f9) popup_vitu2_dropdown_list_window_ParamLimits

0x2b51,	// (0x000251f9) popup_vitu2_dropdown_list_window

0x2b70,	// (0x00025218) popup_vitu2_match_list_window

0x2d7d,	// (0x00025425) cell_vitu2_function_top_pane_ParamLimits

0x2d7d,	// (0x00025425) cell_vitu2_function_top_pane

0x2d9d,	// (0x00025445) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2d9d,	// (0x00025445) cell_vitu2_function_top_pane_cp01

0x2dbd,	// (0x00025465) cell_vitu2_function_top_wide_pane_ParamLimits

0x2dbd,	// (0x00025465) cell_vitu2_function_top_wide_pane

0xd840,	// (0x0002fee8) bg_button_pane_cp012

0x2ddb,	// (0x00025483) cell_vitu2_function_top_pane_g1

0xdad5,	// (0x0003017d) bg_button_pane_cp013_ParamLimits

0xdad5,	// (0x0003017d) bg_button_pane_cp013

0x83b9,	// (0x0002aa61) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x83b9,	// (0x0002aa61) cell_vitu2_function_top_wide_pane_g1

0xd840,	// (0x0002fee8) bg_popup_sub_pane_cp20

0x2def,	// (0x00025497) list_vitu2_match_list_pane

0xd858,	// (0x0002ff00) bg_popup_sub_pane_cp20_g1

0xd860,	// (0x0002ff08) bg_popup_sub_pane_cp20_g2

0x4ab4,	// (0x0002715c) bg_popup_sub_pane_cp20_g3

0xd868,	// (0x0002ff10) bg_popup_sub_pane_cp20_g4

0x4a94,	// (0x0002713c) bg_popup_sub_pane_cp20_g5

0xdaf1,	// (0x00030199) bg_popup_sub_pane_cp20_g6

0xd878,	// (0x0002ff20) bg_popup_sub_pane_cp20_g7

0xd880,	// (0x0002ff28) bg_popup_sub_pane_cp20_g8

0xd888,	// (0x0002ff30) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x000320c7) bg_popup_sub_pane_cp20_g

0xdaf9,	// (0x000301a1) list_vitu2_match_list_item_pane_ParamLimits

0xdaf9,	// (0x000301a1) list_vitu2_match_list_item_pane

0xdb0b,	// (0x000301b3) list_vitu2_match_list_item_pane_t1

0xa8a1,	// (0x0002cf49) bg_popup_sub_pane_cp21

0xdb19,	// (0x000301c1) grid_vitu2_dropdown_list_pane

0x2e0d,	// (0x000254b5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2e0d,	// (0x000254b5) cell_vitu2_dropdown_list_char_pane

0x2e2e,	// (0x000254d6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2e2e,	// (0x000254d6) cell_vitu2_dropdown_list_ctrl_pane

0xdb21,	// (0x000301c9) cell_vitu2_dropdown_list_char_pane_g1

0xdb2a,	// (0x000301d2) cell_vitu2_dropdown_list_char_pane_g2

0xdb33,	// (0x000301db) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x000320e4) cell_vitu2_dropdown_list_char_pane_g

0x2e5a,	// (0x00025502) cell_vitu2_dropdown_list_char_pane_t1

0x83fd,	// (0x0002aaa5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x83fd,	// (0x0002aaa5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x840a,	// (0x0002aab2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x840a,	// (0x0002aab2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8417,	// (0x0002aabf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8417,	// (0x0002aabf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2e68,	// (0x00025510) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2e68,	// (0x00025510) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd766,	// (0x0002fe0e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd766,	// (0x0002fe0e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x000320eb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x000320eb) cell_vitu2_dropdown_list_ctrl_pane_g

0x8424,	// (0x0002aacc) aid_size_cell_gallery2_ParamLimits

0x8424,	// (0x0002aacc) aid_size_cell_gallery2

0x843a,	// (0x0002aae2) grid_gallery2_pane_ParamLimits

0x843a,	// (0x0002aae2) grid_gallery2_pane

0x844c,	// (0x0002aaf4) scroll_pane_cp029_ParamLimits

0x844c,	// (0x0002aaf4) scroll_pane_cp029

0x8458,	// (0x0002ab00) cell_gallery2_pane_ParamLimits

0x8458,	// (0x0002ab00) cell_gallery2_pane

0xdb3c,	// (0x000301e4) cell_gallery2_pane_g2

0x848a,	// (0x0002ab32) cell_gallery2_pane_g3

0xdb46,	// (0x000301ee) cell_gallery2_pane_g4

0xdb4e,	// (0x000301f6) cell_gallery2_pane_g5

0xb157,	// (0x0002d7ff) grid_highlight_pane_cp10

0x2b70,	// (0x00025218) popup_vitu2_match_list_window_ParamLimits

0x2b81,	// (0x00025229) popup_vitu2_query_window_ParamLimits

0x2b81,	// (0x00025229) popup_vitu2_query_window

0xa8a1,	// (0x0002cf49) bg_vitu2_candi_button_pane

0xdb21,	// (0x000301c9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdb2a,	// (0x000301d2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdb33,	// (0x000301db) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8492,	// (0x0002ab3a) bg_button_pane_cp015

0x84a2,	// (0x0002ab4a) bg_button_pane_cp016

0x84b4,	// (0x0002ab5c) bg_button_pane_cp017

0xc64d,	// (0x0002ecf5) bg_popup_sub_pane_cp22

0xdb56,	// (0x000301fe) popup_vitu2_query_window_g1

0x84f5,	// (0x0002ab9d) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x000320f6) popup_vitu2_query_window_g

0x8510,	// (0x0002abb8) popup_vitu2_query_window_t1_ParamLimits

0x8510,	// (0x0002abb8) popup_vitu2_query_window_t1

0x8543,	// (0x0002abeb) popup_vitu2_query_window_t2_ParamLimits

0x8543,	// (0x0002abeb) popup_vitu2_query_window_t2

0x8555,	// (0x0002abfd) popup_vitu2_query_window_t3_ParamLimits

0x8555,	// (0x0002abfd) popup_vitu2_query_window_t3

0x857d,	// (0x0002ac25) popup_vitu2_query_window_t4_ParamLimits

0x857d,	// (0x0002ac25) popup_vitu2_query_window_t4

0x859a,	// (0x0002ac42) popup_vitu2_query_window_t5_ParamLimits

0x859a,	// (0x0002ac42) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x000320fd) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x000320fd) popup_vitu2_query_window_t

0xd946,	// (0x0002ffee) main_cset_text_pane

0x8013,	// (0x0002a6bb) aid_area_touch_slider_ParamLimits

0x802f,	// (0x0002a6d7) cset_slider_pane_ParamLimits

0x8059,	// (0x0002a701) main_cset_slider_pane_g1_ParamLimits

0x806e,	// (0x0002a716) main_cset_slider_pane_g2_ParamLimits

0xd967,	// (0x0003000f) main_cset_slider_pane_g3_ParamLimits

0xd967,	// (0x0003000f) main_cset_slider_pane_g3

0x8083,	// (0x0002a72b) main_cset_slider_pane_g4_ParamLimits

0x8083,	// (0x0002a72b) main_cset_slider_pane_g4

0x8092,	// (0x0002a73a) main_cset_slider_pane_g5_ParamLimits

0x8092,	// (0x0002a73a) main_cset_slider_pane_g5

0x809e,	// (0x0002a746) main_cset_slider_pane_g6_ParamLimits

0x809e,	// (0x0002a746) main_cset_slider_pane_g6

0xf9a8,	// (0x00032050) main_cset_slider_pane_g_ParamLimits

0xd997,	// (0x0003003f) main_cset_slider_pane_t1_ParamLimits

0x812a,	// (0x0002a7d2) main_cset_slider_pane_t2_ParamLimits

0x8144,	// (0x0002a7ec) main_cset_slider_pane_t3_ParamLimits

0x815e,	// (0x0002a806) main_cset_slider_pane_t4_ParamLimits

0x8178,	// (0x0002a820) main_cset_slider_pane_t5_ParamLimits

0x8192,	// (0x0002a83a) main_cset_slider_pane_t6_ParamLimits

0x81a7,	// (0x0002a84f) main_cset_slider_pane_t7_ParamLimits

0x81d1,	// (0x0002a879) main_cset_slider_pane_t8_ParamLimits

0x81d1,	// (0x0002a879) main_cset_slider_pane_t8

0x81f9,	// (0x0002a8a1) main_cset_slider_pane_t9_ParamLimits

0x81f9,	// (0x0002a8a1) main_cset_slider_pane_t9

0x8221,	// (0x0002a8c9) main_cset_slider_pane_t10_ParamLimits

0x8221,	// (0x0002a8c9) main_cset_slider_pane_t10

0x8249,	// (0x0002a8f1) main_cset_slider_pane_t11_ParamLimits

0x8249,	// (0x0002a8f1) main_cset_slider_pane_t11

0x8271,	// (0x0002a919) main_cset_slider_pane_t12_ParamLimits

0x8271,	// (0x0002a919) main_cset_slider_pane_t12

0x828e,	// (0x0002a936) main_cset_slider_pane_t13_ParamLimits

0x828e,	// (0x0002a936) main_cset_slider_pane_t13

0xf9cd,	// (0x00032075) main_cset_slider_pane_t_ParamLimits

0x2ee5,	// (0x0002558d) bg_popup_sub_pane_cp011

0xdb62,	// (0x0003020a) main_cset_text_pane_g1

0xdb6a,	// (0x00030212) main_cset_text_pane_t1

0xdb78,	// (0x00030220) main_cset_text_pane_t2

0xdb86,	// (0x0003022e) main_cset_text_pane_t3

0xdb94,	// (0x0003023c) main_cset_text_pane_t4

0xdba2,	// (0x0003024a) main_cset_text_pane_t5

0xdbb0,	// (0x00030258) main_cset_text_pane_t6

0xdbbe,	// (0x00030266) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0003210c) main_cset_text_pane_t

0x2ee5,	// (0x0002558d) main_cam4_burst_pane

0x2ee5,	// (0x0002558d) main_cam5_pane

0x7f61,	// (0x0002a609) bg_button_pane_cp019

0x7f6a,	// (0x0002a612) bg_button_pane_cp020

0xd973,	// (0x0003001b) main_cset_slider_pane_g7_ParamLimits

0xd973,	// (0x0003001b) main_cset_slider_pane_g7

0xd97f,	// (0x00030027) main_cset_slider_pane_g8_ParamLimits

0xd97f,	// (0x00030027) main_cset_slider_pane_g8

0x80b2,	// (0x0002a75a) main_cset_slider_pane_g9_ParamLimits

0x80b2,	// (0x0002a75a) main_cset_slider_pane_g9

0x80be,	// (0x0002a766) main_cset_slider_pane_g10_ParamLimits

0x80be,	// (0x0002a766) main_cset_slider_pane_g10

0x80ca,	// (0x0002a772) main_cset_slider_pane_g11_ParamLimits

0x80ca,	// (0x0002a772) main_cset_slider_pane_g11

0x80d6,	// (0x0002a77e) main_cset_slider_pane_g12_ParamLimits

0x80d6,	// (0x0002a77e) main_cset_slider_pane_g12

0x80e2,	// (0x0002a78a) main_cset_slider_pane_g13_ParamLimits

0x80e2,	// (0x0002a78a) main_cset_slider_pane_g13

0x80ee,	// (0x0002a796) main_cset_slider_pane_g14_ParamLimits

0x80ee,	// (0x0002a796) main_cset_slider_pane_g14

0x80fa,	// (0x0002a7a2) main_cset_slider_pane_g15_ParamLimits

0x80fa,	// (0x0002a7a2) main_cset_slider_pane_g15

0xd9c5,	// (0x0003006d) main_cset_slider_pane_t14_ParamLimits

0xd9c5,	// (0x0003006d) main_cset_slider_pane_t14

0xd9fe,	// (0x000300a6) main_cset_slider_pane_t15_ParamLimits

0xd9fe,	// (0x000300a6) main_cset_slider_pane_t15

0x860d,	// (0x0002acb5) aid_cam4_burst_size_cell_ParamLimits

0x860d,	// (0x0002acb5) aid_cam4_burst_size_cell

0x862d,	// (0x0002acd5) grid_cam4_burst_pane_ParamLimits

0x862d,	// (0x0002acd5) grid_cam4_burst_pane

0x8653,	// (0x0002acfb) linegrid_cam4_burst_pane_ParamLimits

0x8653,	// (0x0002acfb) linegrid_cam4_burst_pane

0x8675,	// (0x0002ad1d) scroll_pane_cp30_ParamLimits

0x8675,	// (0x0002ad1d) scroll_pane_cp30

0x8681,	// (0x0002ad29) cell_cam4_burst_pane_ParamLimits

0x8681,	// (0x0002ad29) cell_cam4_burst_pane

0xdbcc,	// (0x00030274) linegrid_cam4_burst_pane_g1_ParamLimits

0xdbcc,	// (0x00030274) linegrid_cam4_burst_pane_g1

0x86c8,	// (0x0002ad70) linegrid_cam4_burst_pane_g2_ParamLimits

0x86c8,	// (0x0002ad70) linegrid_cam4_burst_pane_g2

0xdbd9,	// (0x00030281) linegrid_cam4_burst_pane_g3_ParamLimits

0xdbd9,	// (0x00030281) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0003211b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0003211b) linegrid_cam4_burst_pane_g

0x86d9,	// (0x0002ad81) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x86d9,	// (0x0002ad81) linegrid_cam4_burst_pane_g3_copy1

0xdbe6,	// (0x0003028e) linegrid_cam4_burst_pane_g4_ParamLimits

0xdbe6,	// (0x0003028e) linegrid_cam4_burst_pane_g4

0x86f3,	// (0x0002ad9b) linegrid_cam4_burst_pane_g5_ParamLimits

0x86f3,	// (0x0002ad9b) linegrid_cam4_burst_pane_g5

0x8704,	// (0x0002adac) linegrid_cam4_burst_pane_g6_ParamLimits

0x8704,	// (0x0002adac) linegrid_cam4_burst_pane_g6

0xdbf3,	// (0x0003029b) linegrid_cam4_burst_pane_g7_ParamLimits

0xdbf3,	// (0x0003029b) linegrid_cam4_burst_pane_g7

0x8715,	// (0x0002adbd) cell_cam4_burst_pane_g1

0xdc0c,	// (0x000302b4) main_cam5_pane_t1_ParamLimits

0xdc0c,	// (0x000302b4) main_cam5_pane_t1

0xdc1e,	// (0x000302c6) main_cam5_pane_t2_ParamLimits

0xdc1e,	// (0x000302c6) main_cam5_pane_t2

0xdc30,	// (0x000302d8) main_cam5_pane_t3_ParamLimits

0xdc30,	// (0x000302d8) main_cam5_pane_t3

0xdc42,	// (0x000302ea) main_cam5_pane_t4_ParamLimits

0xdc42,	// (0x000302ea) main_cam5_pane_t4

0xdc58,	// (0x00030300) main_cam5_pane_t5_ParamLimits

0xdc58,	// (0x00030300) main_cam5_pane_t5

0xdc6a,	// (0x00030312) main_cam5_pane_t6_ParamLimits

0xdc6a,	// (0x00030312) main_cam5_pane_t6

0xdc7c,	// (0x00030324) main_cam5_pane_t7_ParamLimits

0xdc7c,	// (0x00030324) main_cam5_pane_t7

0xdc8e,	// (0x00030336) main_cam5_pane_t8_ParamLimits

0xdc8e,	// (0x00030336) main_cam5_pane_t8

0xdcaa,	// (0x00030352) main_cam5_pane_t9_ParamLimits

0xdcaa,	// (0x00030352) main_cam5_pane_t9

0xdcbc,	// (0x00030364) main_cam5_pane_t10_ParamLimits

0xdcbc,	// (0x00030364) main_cam5_pane_t10

0xdcce,	// (0x00030376) main_cam5_pane_t11_ParamLimits

0xdcce,	// (0x00030376) main_cam5_pane_t11

0xdce0,	// (0x00030388) main_cam5_pane_t12_ParamLimits

0xdce0,	// (0x00030388) main_cam5_pane_t12

0xdcf5,	// (0x0003039d) main_cam5_pane_t13_ParamLimits

0xdcf5,	// (0x0003039d) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x00032127) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x00032127) main_cam5_pane_t

0x30d5,	// (0x0002577d) popup_scut_keymap_window_ParamLimits

0x30d5,	// (0x0002577d) popup_scut_keymap_window

0x872a,	// (0x0002add2) aid_size_cell_brow_shortcut

0xb157,	// (0x0002d7ff) bg_popup_window_pane_cp010

0x8736,	// (0x0002adde) grid_scut_pane

0x8740,	// (0x0002ade8) cell_scut_pane_ParamLimits

0x8740,	// (0x0002ade8) cell_scut_pane

0x8755,	// (0x0002adfd) cell_scut_pane_g1

0xdd12,	// (0x000303ba) cell_scut_pane_t1

0xdd21,	// (0x000303c9) cell_scut_pane_t2

0x875e,	// (0x0002ae06) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x00032142) cell_scut_pane_t

0x6f90,	// (0x00029638) main_mup3_pane_g8_ParamLimits

0x6f90,	// (0x00029638) main_mup3_pane_g8

0x2ab8,	// (0x00025160) area_vitu2_query_pane_ParamLimits

0x2ab8,	// (0x00025160) area_vitu2_query_pane

0x84c6,	// (0x0002ab6e) input_focus_pane_cp08

0xdd30,	// (0x000303d8) area_vitu2_query_pane_g1

0x876c,	// (0x0002ae14) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x00032149) area_vitu2_query_pane_g

0x877b,	// (0x0002ae23) area_vitu2_query_pane_t1_ParamLimits

0x877b,	// (0x0002ae23) area_vitu2_query_pane_t1

0x878d,	// (0x0002ae35) area_vitu2_query_pane_t2_ParamLimits

0x878d,	// (0x0002ae35) area_vitu2_query_pane_t2

0x879f,	// (0x0002ae47) area_vitu2_query_pane_t3_ParamLimits

0x879f,	// (0x0002ae47) area_vitu2_query_pane_t3

0xdd3c,	// (0x000303e4) area_vitu2_query_pane_t4_ParamLimits

0xdd3c,	// (0x000303e4) area_vitu2_query_pane_t4

0xdd64,	// (0x0003040c) area_vitu2_query_pane_t5_ParamLimits

0xdd64,	// (0x0003040c) area_vitu2_query_pane_t5

0xdd8c,	// (0x00030434) area_vitu2_query_pane_t6_ParamLimits

0xdd8c,	// (0x00030434) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0003214e) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0003214e) area_vitu2_query_pane_t

0x87c7,	// (0x0002ae6f) bg_button_pane_cp018

0x87d4,	// (0x0002ae7c) bg_button_pane_cp021

0x87e0,	// (0x0002ae88) bg_button_pane_cp022

0x87ef,	// (0x0002ae97) input_focus_pane_cp09

0x57d6,	// (0x00027e7e) aid_size_touch_mv_arrow_left

0xb030,	// (0x0002d6d8) aid_size_touch_mv_arrow_right

0x8112,	// (0x0002a7ba) main_cset_slider_pane_g16_ParamLimits

0x8112,	// (0x0002a7ba) main_cset_slider_pane_g16

0x811e,	// (0x0002a7c6) main_cset_slider_pane_g17_ParamLimits

0x811e,	// (0x0002a7c6) main_cset_slider_pane_g17

0x8715,	// (0x0002adbd) cell_cam4_burst_pane_g1_ParamLimits

0x2ee5,	// (0x0002558d) compa_mode_pane

0x82fb,	// (0x0002a9a3) popup_vtel_slider_window_g3_ParamLimits

0x82fb,	// (0x0002a9a3) popup_vtel_slider_window_g3

0x8312,	// (0x0002a9ba) popup_vtel_slider_window_g4_ParamLimits

0x8312,	// (0x0002a9ba) popup_vtel_slider_window_g4

0x8329,	// (0x0002a9d1) popup_vtel_slider_window_t1_ParamLimits

0x8329,	// (0x0002a9d1) popup_vtel_slider_window_t1

0x2ee5,	// (0x0002558d) main_cl_pane

0xc673,	// (0x0002ed1b) popup_imed_adjust2_window_ParamLimits

0xc64d,	// (0x0002ecf5) bg_tb_trans_pane_cp05_ParamLimits

0xd00b,	// (0x0002f6b3) popup_imed_adjust2_window_g1_ParamLimits

0xd01a,	// (0x0002f6c2) popup_imed_adjust2_window_g2_ParamLimits

0xd01a,	// (0x0002f6c2) popup_imed_adjust2_window_g2

0xd026,	// (0x0002f6ce) popup_imed_adjust2_window_g3_ParamLimits

0xd026,	// (0x0002f6ce) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x00031eb9) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x00031eb9) popup_imed_adjust2_window_g

0xd032,	// (0x0002f6da) popup_imed_adjust2_window_t1_ParamLimits

0xd04a,	// (0x0002f6f2) slider_imed_adjust_pane_ParamLimits

0xd05e,	// (0x0002f706) slider_imed_adjust_pane_g1_ParamLimits

0xd06e,	// (0x0002f716) slider_imed_adjust_pane_g2_ParamLimits

0xd07e,	// (0x0002f726) slider_imed_adjust_pane_g3_ParamLimits

0xd08f,	// (0x0002f737) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x00031ec0) slider_imed_adjust_pane_g_ParamLimits

0x286f,	// (0x00024f17) aid_touch_area_cam4_ParamLimits

0x286f,	// (0x00024f17) aid_touch_area_cam4

0xd74c,	// (0x0002fdf4) battery_pane_cp01

0x2907,	// (0x00024faf) main_camera4_pane_g6_ParamLimits

0x2907,	// (0x00024faf) main_camera4_pane_g6

0x2928,	// (0x00024fd0) main_camera4_pane_t2_ParamLimits

0x2928,	// (0x00024fd0) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x00031fc3) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x00031fc3) main_camera4_pane_t

0x2944,	// (0x00024fec) aid_touch_area_vid4_ParamLimits

0x2944,	// (0x00024fec) aid_touch_area_vid4

0x2986,	// (0x0002502e) main_video4_pane_g5_ParamLimits

0x2986,	// (0x0002502e) main_video4_pane_g5

0x29a7,	// (0x0002504f) vid4_progress_pane_ParamLimits

0x29a7,	// (0x0002504f) vid4_progress_pane

0xd98b,	// (0x00030033) main_cset_slider_pane_g18_ParamLimits

0xd98b,	// (0x00030033) main_cset_slider_pane_g18

0xdc00,	// (0x000302a8) cell_cam4_burst_pane_g2_ParamLimits

0xdc00,	// (0x000302a8) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x00032122) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x00032122) cell_cam4_burst_pane_g

0x3ae7,	// (0x0002618f) bg_cl_pane_ParamLimits

0x3ae7,	// (0x0002618f) bg_cl_pane

0x87fe,	// (0x0002aea6) cl_header_pane_ParamLimits

0x87fe,	// (0x0002aea6) cl_header_pane

0x8812,	// (0x0002aeba) cl_listscroll_pane_ParamLimits

0x8812,	// (0x0002aeba) cl_listscroll_pane

0xddd8,	// (0x00030480) bg_cl_pane_g1

0xdde0,	// (0x00030488) bg_cl_pane_g2

0xdde8,	// (0x00030490) bg_cl_pane_g3

0xddf0,	// (0x00030498) bg_cl_pane_g4

0xddf8,	// (0x000304a0) bg_cl_pane_g5

0xde00,	// (0x000304a8) bg_cl_pane_g6

0xde08,	// (0x000304b0) bg_cl_pane_g7

0xde10,	// (0x000304b8) bg_cl_pane_g8

0xde18,	// (0x000304c0) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0003215d) bg_cl_pane_g

0x8822,	// (0x0002aeca) aid_height_cl_leading_ParamLimits

0x8822,	// (0x0002aeca) aid_height_cl_leading

0x882e,	// (0x0002aed6) aid_height_cl_text_ParamLimits

0x882e,	// (0x0002aed6) aid_height_cl_text

0x310f,	// (0x000257b7) bg_cl_header_pane_ParamLimits

0x310f,	// (0x000257b7) bg_cl_header_pane

0x884d,	// (0x0002aef5) cl_header_pane_g1_ParamLimits

0x884d,	// (0x0002aef5) cl_header_pane_g1

0x8863,	// (0x0002af0b) cl_header_pane_t1_ParamLimits

0x8863,	// (0x0002af0b) cl_header_pane_t1

0xde20,	// (0x000304c8) cl_list_pane

0xde29,	// (0x000304d1) hc_scroll_pane_cp01

0x4a94,	// (0x0002713c) bg_cl_header_pane_g1

0xd858,	// (0x0002ff00) bg_cl_header_pane_g2

0x4ab4,	// (0x0002715c) bg_cl_header_pane_g3

0xd868,	// (0x0002ff10) bg_cl_header_pane_g4

0xd860,	// (0x0002ff08) bg_cl_header_pane_g5

0xdaf1,	// (0x00030199) bg_cl_header_pane_g6

0xd880,	// (0x0002ff28) bg_cl_header_pane_g7

0xd888,	// (0x0002ff30) bg_cl_header_pane_g8

0xd878,	// (0x0002ff20) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x00032170) bg_cl_header_pane_g

0x887c,	// (0x0002af24) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x887c,	// (0x0002af24) hc_cl_list_double_graphic_heading_pane

0x888c,	// (0x0002af34) hc_cl_list_single_graphic_pane_ParamLimits

0x888c,	// (0x0002af34) hc_cl_list_single_graphic_pane

0x889f,	// (0x0002af47) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x889f,	// (0x0002af47) hc_cl_list_single_graphic_pane_g1

0x88ab,	// (0x0002af53) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x88ab,	// (0x0002af53) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x00032183) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x00032183) hc_cl_list_single_graphic_pane_g

0x88bf,	// (0x0002af67) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x88bf,	// (0x0002af67) hc_cl_list_single_graphic_pane_t1

0x889f,	// (0x0002af47) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x889f,	// (0x0002af47) hc_cl_list_double_graphic_heading_pane_g1

0x88d4,	// (0x0002af7c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x88d4,	// (0x0002af7c) hc_cl_list_double_graphic_heading_pane_g2

0x88e8,	// (0x0002af90) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x88e8,	// (0x0002af90) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x00032188) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x00032188) hc_cl_list_double_graphic_heading_pane_g

0x88fc,	// (0x0002afa4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x88fc,	// (0x0002afa4) hc_cl_list_double_graphic_heading_pane_t1

0x8911,	// (0x0002afb9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8911,	// (0x0002afb9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x0003218f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x0003218f) hc_cl_list_double_graphic_heading_pane_t

0xde32,	// (0x000304da) vid4_progress_pane_g1

0xde41,	// (0x000304e9) vid4_progress_pane_g2

0xde50,	// (0x000304f8) vid4_progress_pane_g3

0xde5f,	// (0x00030507) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x00032194) vid4_progress_pane_g

0xde77,	// (0x0003051f) vid4_progress_pane_t1

0xde8d,	// (0x00030535) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x0003219f) vid4_progress_pane_t

0xdeb7,	// (0x0003055f) wait_bar_pane_cp07

0xc93d,	// (0x0002efe5) blid_firmament_pane_ParamLimits

0xc97e,	// (0x0002f026) popup_blid_sat_info2_window_g1

0xc9a2,	// (0x0002f04a) popup_blid_sat_info2_window_t3

0xc9b0,	// (0x0002f058) popup_blid_sat_info2_window_t4

0xc9be,	// (0x0002f066) popup_blid_sat_info2_window_t5

0xc9cc,	// (0x0002f074) popup_blid_sat_info2_window_t6

0xc9dc,	// (0x0002f084) popup_blid_sat_info2_window_t7

0xc9ea,	// (0x0002f092) popup_blid_sat_info2_window_t8

0xc9f8,	// (0x0002f0a0) popup_blid_sat_info2_window_t9

0xca06,	// (0x0002f0ae) popup_blid_sat_info2_window_t10

0xcac2,	// (0x0002f16a) aid_firma_cardinal_ParamLimits

0xcad6,	// (0x0002f17e) blid_firmament_pane_t1_ParamLimits

0xcaed,	// (0x0002f195) blid_firmament_pane_t2_ParamLimits

0xcb04,	// (0x0002f1ac) blid_firmament_pane_t3_ParamLimits

0xcb1b,	// (0x0002f1c3) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x00031db2) blid_firmament_pane_t_ParamLimits

0xcb32,	// (0x0002f1da) blid_sat_info_pane_ParamLimits

0x310f,	// (0x000257b7) main_cam_set_pane_ParamLimits

0x7772,	// (0x00029e1a) aid_size_cell_colour_35_ParamLimits

0x7792,	// (0x00029e3a) aid_size_cell_colour_112_ParamLimits

0x77b2,	// (0x00029e5a) aid_size_cell_effect_ParamLimits

0xc64d,	// (0x0002ecf5) bg_tb_trans_pane_cp02_ParamLimits

0xab31,	// (0x0002d1d9) heading_imed_pane_ParamLimits

0x77d2,	// (0x00029e7a) listscroll_imed_pane_ParamLimits

0xbc3f,	// (0x0002e2e7) popup_call2_audio_first_window_g5_ParamLimits

0xbc3f,	// (0x0002e2e7) popup_call2_audio_first_window_g5

0x2678,	// (0x00024d20) aid_size_touch_image3_arrow_left_ParamLimits

0x2678,	// (0x00024d20) aid_size_touch_image3_arrow_left

0x2698,	// (0x00024d40) aid_size_touch_image3_arrow_right_ParamLimits

0x2698,	// (0x00024d40) aid_size_touch_image3_arrow_right

0xdea2,	// (0x0003054a) vid4_progress_pane_t3

0x7aa6,	// (0x0002a14e) main_hwr_training_symbol_option_pane_ParamLimits

0x7aa6,	// (0x0002a14e) main_hwr_training_symbol_option_pane

0xd2ea,	// (0x0002f992) popup_hwr_training_preview_window_ParamLimits

0xd2ea,	// (0x0002f992) popup_hwr_training_preview_window

0x2542,	// (0x00024bea) hwr_training_navi_pane_g5_ParamLimits

0x2542,	// (0x00024bea) hwr_training_navi_pane_g5

0xd838,	// (0x0002fee0) popup_char_count_window

0xd840,	// (0x0002fee8) bg_popup_sub_pane_cp20_ParamLimits

0x2def,	// (0x00025497) list_vitu2_match_list_pane_ParamLimits

0x2dfe,	// (0x000254a6) vitu2_page_scroll_pane_ParamLimits

0x2dfe,	// (0x000254a6) vitu2_page_scroll_pane

0xdf21,	// (0x000305c9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdf21,	// (0x000305c9) list_single_hwr_training_symbol_option_pane

0xdf34,	// (0x000305dc) list_single_hwr_training_symbol_option_pane_g1

0xdf3c,	// (0x000305e4) list_single_hwr_training_symbol_option_pane_t1

0xdf4a,	// (0x000305f2) bg_button_pane_cp023

0xdf53,	// (0x000305fb) bg_button_pane_cp024

0x8926,	// (0x0002afce) vitu2_page_scroll_pane_g1

0x892e,	// (0x0002afd6) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x000321a6) vitu2_page_scroll_pane_g

0x8936,	// (0x0002afde) vitu2_page_scroll_pane_t1

0xc859,	// (0x0002ef01) popup_char_count_window_g1

0xdf86,	// (0x0003062e) popup_char_count_window_g2

0xdf8f,	// (0x00030637) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x000321ab) popup_char_count_window_g

0xdf98,	// (0x00030640) popup_char_count_window_t1

0x2ee5,	// (0x0002558d) main_vded2_pane

0xcff9,	// (0x0002f6a1) aid_size_cell_imed_line

0xd003,	// (0x0002f6ab) grid_imed_line_width_pane

0x2a28,	// (0x000250d0) vid4_indicators_pane_g4

0xdfa6,	// (0x0003064e) cell_imed_line_width_pane_ParamLimits

0xdfa6,	// (0x0003064e) cell_imed_line_width_pane

0xdfb8,	// (0x00030660) cell_imed_line_width_pane_g1

0xc8eb,	// (0x0002ef93) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x000321b2) cell_imed_line_width_pane_g

0x8945,	// (0x0002afed) main_vded2_pane_g1_ParamLimits

0x8945,	// (0x0002afed) main_vded2_pane_g1

0x895b,	// (0x0002b003) main_vded2_pane_g2_ParamLimits

0x895b,	// (0x0002b003) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x000321b7) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x000321b7) main_vded2_pane_g

0x896b,	// (0x0002b013) vded2_slider_pane_ParamLimits

0x896b,	// (0x0002b013) vded2_slider_pane

0x897e,	// (0x0002b026) aid_size_touch_vded2_end

0x8986,	// (0x0002b02e) aid_size_touch_vded2_playhead

0x898e,	// (0x0002b036) aid_size_touch_vded2_start

0x8996,	// (0x0002b03e) vded2_slider_bg_pane

0x899f,	// (0x0002b047) vded2_slider_pane_g1

0x89a8,	// (0x0002b050) vded2_slider_pane_g2

0x89b0,	// (0x0002b058) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x000321bc) vded2_slider_pane_g

0x89b9,	// (0x0002b061) vded2_slider_bg_pane_g1

0x89c2,	// (0x0002b06a) vded2_slider_bg_pane_g2

0x89cb,	// (0x0002b073) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x000321c3) vded2_slider_bg_pane_g

0x5cb8,	// (0x00028360) aid_postcard_touch_down_pane_ParamLimits

0x5cb8,	// (0x00028360) aid_postcard_touch_down_pane

0x5cca,	// (0x00028372) aid_postcard_touch_up_pane_ParamLimits

0x5cca,	// (0x00028372) aid_postcard_touch_up_pane

0x2ee5,	// (0x0002558d) main_blid2_pane

0xc65b,	// (0x0002ed03) popup_blid2_search_window

0x2ee5,	// (0x0002558d) blid2_gps_pane

0x2ee5,	// (0x0002558d) blid2_navig_pane

0x2ee5,	// (0x0002558d) blid2_search_pane

0x2ee5,	// (0x0002558d) blid2_tripm_pane

0x89d4,	// (0x0002b07c) blid2_search_pane_g1_ParamLimits

0x89d4,	// (0x0002b07c) blid2_search_pane_g1

0x89e8,	// (0x0002b090) blid2_search_pane_t1_ParamLimits

0x89e8,	// (0x0002b090) blid2_search_pane_t1

0x89fa,	// (0x0002b0a2) aid_size_cell_blid2_gps_ParamLimits

0x89fa,	// (0x0002b0a2) aid_size_cell_blid2_gps

0x8a12,	// (0x0002b0ba) blid2_gps_pane_g1_ParamLimits

0x8a12,	// (0x0002b0ba) blid2_gps_pane_g1

0x8a26,	// (0x0002b0ce) grid_blid2_satellite_pane_ParamLimits

0x8a26,	// (0x0002b0ce) grid_blid2_satellite_pane

0x8a3a,	// (0x0002b0e2) blid2_navig_pane_g1_ParamLimits

0x8a3a,	// (0x0002b0e2) blid2_navig_pane_g1

0x8a46,	// (0x0002b0ee) blid2_navig_pane_t1_ParamLimits

0x8a46,	// (0x0002b0ee) blid2_navig_pane_t1

0x8a5f,	// (0x0002b107) blid2_navig_pane_t2_ParamLimits

0x8a5f,	// (0x0002b107) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x000321ca) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x000321ca) blid2_navig_pane_t

0x8a78,	// (0x0002b120) blid2_navig_ring_pane_ParamLimits

0x8a78,	// (0x0002b120) blid2_navig_ring_pane

0x8a8d,	// (0x0002b135) blid2_speed_pane_ParamLimits

0x8a8d,	// (0x0002b135) blid2_speed_pane

0x8a99,	// (0x0002b141) blid2_tripm_pane_g1_ParamLimits

0x8a99,	// (0x0002b141) blid2_tripm_pane_g1

0x8aae,	// (0x0002b156) blid2_tripm_pane_g2_ParamLimits

0x8aae,	// (0x0002b156) blid2_tripm_pane_g2

0x8ac2,	// (0x0002b16a) blid2_tripm_pane_g3_ParamLimits

0x8ac2,	// (0x0002b16a) blid2_tripm_pane_g3

0x8ad6,	// (0x0002b17e) blid2_tripm_pane_g4_ParamLimits

0x8ad6,	// (0x0002b17e) blid2_tripm_pane_g4

0x8aea,	// (0x0002b192) blid2_tripm_pane_g5_ParamLimits

0x8aea,	// (0x0002b192) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x000321cf) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x000321cf) blid2_tripm_pane_g

0x8b0c,	// (0x0002b1b4) blid2_tripm_pane_t1_ParamLimits

0x8b0c,	// (0x0002b1b4) blid2_tripm_pane_t1

0x8b23,	// (0x0002b1cb) blid2_tripm_pane_t2_ParamLimits

0x8b23,	// (0x0002b1cb) blid2_tripm_pane_t2

0x8b3a,	// (0x0002b1e2) blid2_tripm_pane_t3_ParamLimits

0x8b3a,	// (0x0002b1e2) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x000321dc) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x000321dc) blid2_tripm_pane_t

0x8b7d,	// (0x0002b225) cell_blid2_satellite_pane_ParamLimits

0x8b7d,	// (0x0002b225) cell_blid2_satellite_pane

0x8b95,	// (0x0002b23d) cell_blid2_satellite_pane_g1

0xdfc1,	// (0x00030669) cell_blid2_satellite_pane_t1

0xcb42,	// (0x0002f1ea) blid2_speed_pane_g1

0xdfcf,	// (0x00030677) blid2_speed_pane_t1

0xdfdd,	// (0x00030685) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x000321e5) blid2_speed_pane_t

0xcb42,	// (0x0002f1ea) blid2_navig_ring_pane_g1

0x8b9e,	// (0x0002b246) blid2_navig_ring_pane_g2

0x8ba6,	// (0x0002b24e) blid2_navig_ring_pane_g3

0x8bae,	// (0x0002b256) blid2_navig_ring_pane_g4

0x8bb6,	// (0x0002b25e) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x000321ea) blid2_navig_ring_pane_g

0x2ee5,	// (0x0002558d) bg_popup_window_pane_cp011

0xdfeb,	// (0x00030693) popup_blid2_search_window_g1

0xdff3,	// (0x0003069b) popup_blid2_search_window_t1

0xe001,	// (0x000306a9) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x000321f5) popup_blid2_search_window_t

0x4963,	// (0x0002700b) main_browser_pane_g1

0x3ae7,	// (0x0002618f) main_browser_pane_ParamLimits

0xd840,	// (0x0002fee8) bg_button_pane_cp011_ParamLimits

0x2d61,	// (0x00025409) cell_vitu2_function_pane_g1_ParamLimits

0xc64d,	// (0x0002ecf5) bg_popup_sub_pane_cp22_ParamLimits

0x84c6,	// (0x0002ab6e) input_focus_pane_cp08_ParamLimits

0x84dd,	// (0x0002ab85) popup_vitu2_query_button_pane_ParamLimits

0x84dd,	// (0x0002ab85) popup_vitu2_query_button_pane

0x84ed,	// (0x0002ab95) popup_vitu2_query_input_button_pane

0xdb56,	// (0x000301fe) popup_vitu2_query_window_g1_ParamLimits

0x84f5,	// (0x0002ab9d) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x000320f6) popup_vitu2_query_window_g_ParamLimits

0x2ee5,	// (0x0002558d) bg_button_pane_cp026

0x8bbe,	// (0x0002b266) popup_vitu2_query_input_button_pane_g1

0x2ee5,	// (0x0002558d) bg_button_pane_cp025

0xe00f,	// (0x000306b7) popup_vitu2_query_button_pane_t1

0x6d10,	// (0x000293b8) main_mp3_pane_t6

0x6d1e,	// (0x000293c6) popup_slider_window_cp01

0xd774,	// (0x0002fe1c) cam4_battery_pane

0xd774,	// (0x0002fe1c) cam4_battery_pane_cp02

0xd774,	// (0x0002fe1c) cam4_battery_pane_cp01

0xd774,	// (0x0002fe1c) cam4_battery_pane_cp03

0xd625,	// (0x0002fccd) cam4_battery_pane_g1

0xcb42,	// (0x0002f1ea) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x000321fa) cam4_battery_pane_g

0xca14,	// (0x0002f0bc) popup_blid_sat_info2_window_t11

0x57d6,	// (0x00027e7e) aid_size_touch_mv_arrow_left_ParamLimits

0xb030,	// (0x0002d6d8) aid_size_touch_mv_arrow_right_ParamLimits

0xb068,	// (0x0002d710) navi_pane_g1_ParamLimits

0xb074,	// (0x0002d71c) navi_pane_g2_ParamLimits

0x57ef,	// (0x00027e97) navi_pane_g3_ParamLimits

0xf409,	// (0x00031ab1) navi_pane_g_ParamLimits

0x5814,	// (0x00027ebc) navi_pane_mv_t1_ParamLimits

0x77de,	// (0x00029e86) grid_imed_effect_pane_ParamLimits

0x45ab,	// (0x00026c53) aid_placing_vt_slider_lsc

0x45bb,	// (0x00026c63) aid_placing_vt_slider_prt

0x310f,	// (0x000257b7) bg_tb_trans_pane_cp01_ParamLimits

0xcc91,	// (0x0002f339) popup_image_details_window_g1_ParamLimits

0xcca4,	// (0x0002f34c) popup_image_details_window_g2_ParamLimits

0xccb9,	// (0x0002f361) popup_image_details_window_g3_ParamLimits

0xccb9,	// (0x0002f361) popup_image_details_window_g3

0xf74f,	// (0x00031df7) popup_image_details_window_g_ParamLimits

0xcccd,	// (0x0002f375) popup_image_details_window_t1_ParamLimits

0xccdf,	// (0x0002f387) popup_image_details_window_t2_ParamLimits

0xccf8,	// (0x0002f3a0) popup_image_details_window_t3_ParamLimits

0xcd0c,	// (0x0002f3b4) popup_image_details_window_t4_ParamLimits

0xcd27,	// (0x0002f3cf) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x00031dfe) popup_image_details_window_t_ParamLimits

0x883a,	// (0x0002aee2) cl_header_name_pane_ParamLimits

0x883a,	// (0x0002aee2) cl_header_name_pane

0x8bc6,	// (0x0002b26e) cl_header_name_pane_t1_ParamLimits

0x8bc6,	// (0x0002b26e) cl_header_name_pane_t1

0x8be7,	// (0x0002b28f) cl_header_name_pane_t2_ParamLimits

0x8be7,	// (0x0002b28f) cl_header_name_pane_t2

0x8c29,	// (0x0002b2d1) cl_header_name_pane_t3_ParamLimits

0x8c29,	// (0x0002b2d1) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x000321ff) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x000321ff) cl_header_name_pane_t

0xb0f6,	// (0x0002d79e) navi_pane_mv_g2_ParamLimits

0xd7f5,	// (0x0002fe9d) field_vitu2_entry_pane_g1_ParamLimits

0xd801,	// (0x0002fea9) field_vitu2_entry_pane_g2_ParamLimits

0xd80d,	// (0x0002feb5) field_vitu2_entry_pane_g3_ParamLimits

0xd80d,	// (0x0002feb5) field_vitu2_entry_pane_g3

0xf94d,	// (0x00031ff5) field_vitu2_entry_pane_g_ParamLimits

0x2c01,	// (0x000252a9) cell_vitu2_itu_pane_g1_ParamLimits

0x2c11,	// (0x000252b9) cell_vitu2_itu_pane_g2_ParamLimits

0x2c11,	// (0x000252b9) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x00032001) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x00032001) cell_vitu2_itu_pane_g

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp05_ParamLimits

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp05

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp03

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp04

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp10_ParamLimits

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp10

0x87e0,	// (0x0002ae88) bg_vkb2_func_pane_cp08

0x87c7,	// (0x0002ae6f) bg_vkb2_func_pane_cp06

0x87d4,	// (0x0002ae7c) bg_vkb2_func_pane_cp07

0xdf5c,	// (0x00030604) bg_vkb2_func_pane_cp11_ParamLimits

0xdf5c,	// (0x00030604) bg_vkb2_func_pane_cp11

0xdf71,	// (0x00030619) bg_vkb2_func_pane_cp12_ParamLimits

0xdf71,	// (0x00030619) bg_vkb2_func_pane_cp12

0x2ee5,	// (0x0002558d) bg_vkb2_func_pane_cp09

0xd858,	// (0x0002ff00) bg_vkb2_func_pane_g1

0x4ab4,	// (0x0002715c) bg_vkb2_func_pane_g2

0xd860,	// (0x0002ff08) bg_vkb2_func_pane_g3

0xd868,	// (0x0002ff10) bg_vkb2_func_pane_g4

0xdaf1,	// (0x00030199) bg_vkb2_func_pane_g5

0xd880,	// (0x0002ff28) bg_vkb2_func_pane_g6

0xd888,	// (0x0002ff30) bg_vkb2_func_pane_g7

0xd878,	// (0x0002ff20) bg_vkb2_func_pane_g8

0x4a94,	// (0x0002713c) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x00032206) bg_vkb2_func_pane_g

0x8afc,	// (0x0002b1a4) blid2_tripm_pane_g6_ParamLimits

0x8afc,	// (0x0002b1a4) blid2_tripm_pane_g6

0xd5e3,	// (0x0002fc8b) mp4_progress_pane_g1

0x8b6b,	// (0x0002b213) blid2_tripm_values_pane_ParamLimits

0x8b6b,	// (0x0002b213) blid2_tripm_values_pane

0x8c5a,	// (0x0002b302) blid2_tripm_values_pane_t1

0x8c68,	// (0x0002b310) blid2_tripm_values_pane_t2

0x8c76,	// (0x0002b31e) blid2_tripm_values_pane_t3

0x8c84,	// (0x0002b32c) blid2_tripm_values_pane_t4

0x8c92,	// (0x0002b33a) blid2_tripm_values_pane_t5

0x8ca0,	// (0x0002b348) blid2_tripm_values_pane_t6

0x8cae,	// (0x0002b356) blid2_tripm_values_pane_t7

0x8cbc,	// (0x0002b364) blid2_tripm_values_pane_t8

0x8cca,	// (0x0002b372) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x00032219) blid2_tripm_values_pane_t

0x45ef,	// (0x00026c97) call_video_pane_t1_ParamLimits

0x4609,	// (0x00026cb1) call_video_pane_t2_ParamLimits

0xf292,	// (0x0003193a) call_video_pane_t_ParamLimits

0x5c5e,	// (0x00028306) msg_header_pane_g1_ParamLimits

0xb2fa,	// (0x0002d9a2) msg_header_pane_g2_ParamLimits

0xb2fa,	// (0x0002d9a2) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00031b54) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00031b54) msg_header_pane_g

0x3ae7,	// (0x0002618f) main_clock2_pane_ParamLimits

0x7592,	// (0x00029c3a) grid_clock2_toolbar_pane_ParamLimits

0x7592,	// (0x00029c3a) grid_clock2_toolbar_pane

0x7592,	// (0x00029c3a) listscroll_clock2_pane_ParamLimits

0x7592,	// (0x00029c3a) listscroll_clock2_pane

0x7664,	// (0x00029d0c) main_clock2_pane_t3_ParamLimits

0x7664,	// (0x00029d0c) main_clock2_pane_t3

0x767d,	// (0x00029d25) main_clock2_pane_t4_ParamLimits

0x767d,	// (0x00029d25) main_clock2_pane_t4

0xe01d,	// (0x000306c5) cell_clock2_toolbar_pane

0xe025,	// (0x000306cd) cell_clock2_toolbar_pane_cp01

0xe025,	// (0x000306cd) cell_clock2_toolbar_pane_cp02

0xe02d,	// (0x000306d5) cell_clock2_toolbar_pane_cp03

0xe035,	// (0x000306dd) list_clock2_pane

0xaf98,	// (0x0002d640) scroll_pane_cp10

0xe03d,	// (0x000306e5) list_single_clock2_pane_ParamLimits

0xe03d,	// (0x000306e5) list_single_clock2_pane

0xb157,	// (0x0002d7ff) list_highlight_pane_cp08

0xe04a,	// (0x000306f2) list_single_clock2_pane_t1

0xe058,	// (0x00030700) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0003222c) list_single_clock2_pane_t

0x2ee5,	// (0x0002558d) bg_button_pane_cp10

0xe066,	// (0x0003070e) cell_clock2_toolbar_pane_g1

0x209f,	// (0x00024747) aid_main_viewer_pane_g1_ParamLimits

0x209f,	// (0x00024747) aid_main_viewer_pane_g1

0x20ab,	// (0x00024753) aid_main_viewer_pane_g2_ParamLimits

0x20ab,	// (0x00024753) aid_main_viewer_pane_g2

0x5c7c,	// (0x00028324) aid_main_viewer_pane_g3_ParamLimits

0x5c7c,	// (0x00028324) aid_main_viewer_pane_g3

0x5c8b,	// (0x00028333) aid_main_viewer_pane_g4_ParamLimits

0x5c8b,	// (0x00028333) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00031b65) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00031b65) aid_main_viewer_pane_g

0x310f,	// (0x000257b7) main_calc_pane_ParamLimits

0x6467,	// (0x00028b0f) main_dialer2_pane_ParamLimits

0x2ee5,	// (0x0002558d) main_cam6_pane

0x2ee5,	// (0x0002558d) main_vid6_pane

0x759e,	// (0x00029c46) listscroll_gen_pane_cp06_ParamLimits

0x759e,	// (0x00029c46) listscroll_gen_pane_cp06

0x7696,	// (0x00029d3e) main_clock2_pane_t5_ParamLimits

0x7696,	// (0x00029d3e) main_clock2_pane_t5

0x76eb,	// (0x00029d93) aid_call2_pane_cp10_ParamLimits

0x76fd,	// (0x00029da5) aid_call_pane_cp10_ParamLimits

0xb024,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb024,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x770f,	// (0x00029db7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x770f,	// (0x00029db7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb024,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x00031eae) popup_clock_analogue_window_cp10_g_ParamLimits

0x7721,	// (0x00029dc9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd64d,	// (0x0002fcf5) cell_dialer2_keypad_pane_g2_ParamLimits

0xd64d,	// (0x0002fcf5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x00031f94) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x00031f94) cell_dialer2_keypad_pane_g

0x7b82,	// (0x0002a22a) cell_dialer2_keypad_pane_t1

0x8005,	// (0x0002a6ad) main_cset_text2_pane_ParamLimits

0x8005,	// (0x0002a6ad) main_cset_text2_pane

0xdd30,	// (0x000303d8) area_vitu2_query_pane_g1_ParamLimits

0x876c,	// (0x0002ae14) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x00032149) area_vitu2_query_pane_g_ParamLimits

0xddb4,	// (0x0003045c) area_vitu2_query_pane_t7_ParamLimits

0xddb4,	// (0x0003045c) area_vitu2_query_pane_t7

0x87c7,	// (0x0002ae6f) bg_button_pane_cp018_ParamLimits

0x87d4,	// (0x0002ae7c) bg_button_pane_cp021_ParamLimits

0x87e0,	// (0x0002ae88) bg_button_pane_cp022_ParamLimits

0x87e0,	// (0x0002ae88) bg_vkb2_func_pane_cp08_ParamLimits

0x87c7,	// (0x0002ae6f) bg_vkb2_func_pane_cp06_ParamLimits

0x87d4,	// (0x0002ae7c) bg_vkb2_func_pane_cp07_ParamLimits

0x87ef,	// (0x0002ae97) input_focus_pane_cp09_ParamLimits

0xe06e,	// (0x00030716) cam6_autofocus_pane_ParamLimits

0xe06e,	// (0x00030716) cam6_autofocus_pane

0x2e84,	// (0x0002552c) cam6_image_uncrop_pane_ParamLimits

0x2e84,	// (0x0002552c) cam6_image_uncrop_pane

0x2e91,	// (0x00025539) cam6_indi_pane_ParamLimits

0x2e91,	// (0x00025539) cam6_indi_pane

0x2ea7,	// (0x0002554f) cam6_mode_pane_ParamLimits

0x2ea7,	// (0x0002554f) cam6_mode_pane

0x2eb9,	// (0x00025561) cam6_timer_pane_ParamLimits

0x2eb9,	// (0x00025561) cam6_timer_pane

0x2ec5,	// (0x0002556d) cam6_zoom_pane_ParamLimits

0x2ec5,	// (0x0002556d) cam6_zoom_pane

0x8cd8,	// (0x0002b380) cam6_mode_pane_g1_ParamLimits

0x8cd8,	// (0x0002b380) cam6_mode_pane_g1

0x8ce8,	// (0x0002b390) cam6_mode_pane_g2_ParamLimits

0x8ce8,	// (0x0002b390) cam6_mode_pane_g2

0x8cf8,	// (0x0002b3a0) cam6_mode_pane_g3_ParamLimits

0x8cf8,	// (0x0002b3a0) cam6_mode_pane_g3

0x8d08,	// (0x0002b3b0) cam6_mode_pane_g4_ParamLimits

0x8d08,	// (0x0002b3b0) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x00032231) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x00032231) cam6_mode_pane_g

0xe07a,	// (0x00030722) bg_tb_trans_pane_cp08_ParamLimits

0xe07a,	// (0x00030722) bg_tb_trans_pane_cp08

0xe088,	// (0x00030730) cam6_battery_pane_ParamLimits

0xe088,	// (0x00030730) cam6_battery_pane

0xe09e,	// (0x00030746) cam6_indi_pane_g1_ParamLimits

0xe09e,	// (0x00030746) cam6_indi_pane_g1

0xe0b0,	// (0x00030758) cam6_indi_pane_g2_ParamLimits

0xe0b0,	// (0x00030758) cam6_indi_pane_g2

0xe0c2,	// (0x0003076a) cam6_indi_pane_g3_ParamLimits

0xe0c2,	// (0x0003076a) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0003223a) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0003223a) cam6_indi_pane_g

0xe0d4,	// (0x0003077c) cam6_indi_pane_t1_ParamLimits

0xe0d4,	// (0x0003077c) cam6_indi_pane_t1

0x7d1b,	// (0x0002a3c3) cam6_autofocus_pane_g1

0x7d13,	// (0x0002a3bb) cam6_autofocus_pane_g2

0x7d2b,	// (0x0002a3d3) cam6_autofocus_pane_g3

0x7d23,	// (0x0002a3cb) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x00032241) cam6_autofocus_pane_g

0xe0fa,	// (0x000307a2) cam6_timer_pane_g1

0xe102,	// (0x000307aa) cam6_timer_pane_t1

0xe110,	// (0x000307b8) cam6_zoom_cont_pane

0xe118,	// (0x000307c0) cam6_zoom_pane_g1

0xe120,	// (0x000307c8) cam6_zoom_pane_g2

0x8d18,	// (0x0002b3c0) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0003224a) cam6_zoom_pane_g

0xcb42,	// (0x0002f1ea) cam6_battery_pane_g1

0xcb42,	// (0x0002f1ea) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x00031dbb) cam6_battery_pane_g

0xe128,	// (0x000307d0) cam6_zoom_cont_pane_g1

0xe131,	// (0x000307d9) cam6_zoom_cont_pane_g2

0xe13a,	// (0x000307e2) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x00032251) cam6_zoom_cont_pane_g

0x8d35,	// (0x0002b3dd) cam6_mode_pane_cp_ParamLimits

0x8d35,	// (0x0002b3dd) cam6_mode_pane_cp

0x8d47,	// (0x0002b3ef) cam6_zoom_pane_cp_ParamLimits

0x8d47,	// (0x0002b3ef) cam6_zoom_pane_cp

0x8d53,	// (0x0002b3fb) vid6_image_uncrop_cif_pane_ParamLimits

0x8d53,	// (0x0002b3fb) vid6_image_uncrop_cif_pane

0x8d61,	// (0x0002b409) vid6_image_uncrop_nhd_pane_ParamLimits

0x8d61,	// (0x0002b409) vid6_image_uncrop_nhd_pane

0x8d6e,	// (0x0002b416) vid6_image_uncrop_vga_pane_ParamLimits

0x8d6e,	// (0x0002b416) vid6_image_uncrop_vga_pane

0x8d7b,	// (0x0002b423) vid6_image_uncrop_wvga_pane_ParamLimits

0x8d7b,	// (0x0002b423) vid6_image_uncrop_wvga_pane

0x8d88,	// (0x0002b430) vid6_indi_pane_ParamLimits

0x8d88,	// (0x0002b430) vid6_indi_pane

0xe07a,	// (0x00030722) bg_tb_trans_pane_cp09_ParamLimits

0xe07a,	// (0x00030722) bg_tb_trans_pane_cp09

0xe14e,	// (0x000307f6) cam6_battery_pane_cp_ParamLimits

0xe14e,	// (0x000307f6) cam6_battery_pane_cp

0xe15a,	// (0x00030802) vid6_indi_pane_g1_ParamLimits

0xe15a,	// (0x00030802) vid6_indi_pane_g1

0xe16c,	// (0x00030814) vid6_indi_pane_g2_ParamLimits

0xe16c,	// (0x00030814) vid6_indi_pane_g2

0xe17e,	// (0x00030826) vid6_indi_pane_g3_ParamLimits

0xe17e,	// (0x00030826) vid6_indi_pane_g3

0xe193,	// (0x0003083b) vid6_indi_pane_g4_ParamLimits

0xe193,	// (0x0003083b) vid6_indi_pane_g4

0xe1a8,	// (0x00030850) vid6_indi_pane_g5_ParamLimits

0xe1a8,	// (0x00030850) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x00032258) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x00032258) vid6_indi_pane_g

0xe1c2,	// (0x0003086a) vid6_indi_pane_t1_ParamLimits

0xe1c2,	// (0x0003086a) vid6_indi_pane_t1

0xe1d8,	// (0x00030880) vid6_indi_pane_t2_ParamLimits

0xe1d8,	// (0x00030880) vid6_indi_pane_t2

0xe200,	// (0x000308a8) vid6_indi_pane_t3_ParamLimits

0xe200,	// (0x000308a8) vid6_indi_pane_t3

0xe228,	// (0x000308d0) vid6_indi_pane_t4_ParamLimits

0xe228,	// (0x000308d0) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x00032263) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x00032263) vid6_indi_pane_t

0xe24c,	// (0x000308f4) wait_bar_pane_cp08

0x8d9f,	// (0x0002b447) main_cset_text2_pane_t1_ParamLimits

0x8d9f,	// (0x0002b447) main_cset_text2_pane_t1

0x8d20,	// (0x0002b3c8) listscroll_gen_pane_cp06_t1_ParamLimits

0x8d20,	// (0x0002b3c8) listscroll_gen_pane_cp06_t1

0x2ee5,	// (0x0002558d) main_cam6_set_pane

0xd766,	// (0x0002fe0e) bg_tb_trans_pane_cp06_ParamLimits

0xd77c,	// (0x0002fe24) cam4_indicators_pane_g1_ParamLimits

0xd78c,	// (0x0002fe34) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x00031fd1) cam4_indicators_pane_g_ParamLimits

0xd7ac,	// (0x0002fe54) cam4_indicators_pane_t1_ParamLimits

0xd7ce,	// (0x0002fe76) bg_tb_trans_pane_cp07_ParamLimits

0x2a01,	// (0x000250a9) vid4_indicators_pane_g1_ParamLimits

0x2a0e,	// (0x000250b6) vid4_indicators_pane_g2_ParamLimits

0x2a1b,	// (0x000250c3) vid4_indicators_pane_g3_ParamLimits

0x2a28,	// (0x000250d0) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x00031fe3) vid4_indicators_pane_g_ParamLimits

0x2a40,	// (0x000250e8) vid4_indicators_pane_t1_ParamLimits

0xde32,	// (0x000304da) vid4_progress_pane_g1_ParamLimits

0xde41,	// (0x000304e9) vid4_progress_pane_g2_ParamLimits

0xde50,	// (0x000304f8) vid4_progress_pane_g3_ParamLimits

0xde5f,	// (0x00030507) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x00032194) vid4_progress_pane_g_ParamLimits

0xde77,	// (0x0003051f) vid4_progress_pane_t1_ParamLimits

0xde8d,	// (0x00030535) vid4_progress_pane_t2_ParamLimits

0xdea2,	// (0x0003054a) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x0003219f) vid4_progress_pane_t_ParamLimits

0xdeb7,	// (0x0003055f) wait_bar_pane_cp07_ParamLimits

0x8db9,	// (0x0002b461) main_cam6_set_pane_g2_ParamLimits

0x8db9,	// (0x0002b461) main_cam6_set_pane_g2

0x8ddb,	// (0x0002b483) main_cset6_listscroll_pane_ParamLimits

0x8ddb,	// (0x0002b483) main_cset6_listscroll_pane

0x8df5,	// (0x0002b49d) main_cset6_slider_pane_ParamLimits

0x8df5,	// (0x0002b49d) main_cset6_slider_pane

0x8e0b,	// (0x0002b4b3) main_cset6_text2_pane_ParamLimits

0x8e0b,	// (0x0002b4b3) main_cset6_text2_pane

0xe25c,	// (0x00030904) main_cset6_text_pane

0xd94e,	// (0x0002fff6) main_cset_list_pane_copy1_ParamLimits

0xd94e,	// (0x0002fff6) main_cset_list_pane_copy1

0xd95e,	// (0x00030006) scroll_pane_cp028_copy1

0x8e19,	// (0x0002b4c1) cset_list_set_pane_copy1

0x8e2b,	// (0x0002b4d3) aid_position_infowindow_above_copy1

0x8e33,	// (0x0002b4db) aid_position_infowindow_below_copy1

0x8e3b,	// (0x0002b4e3) cset_list_set_pane_g1_copy1

0x8e43,	// (0x0002b4eb) cset_list_set_pane_g3_copy1_ParamLimits

0x8e43,	// (0x0002b4eb) cset_list_set_pane_g3_copy1

0x8e52,	// (0x0002b4fa) cset_list_set_pane_t1_copy1_ParamLimits

0x8e52,	// (0x0002b4fa) cset_list_set_pane_t1_copy1

0x310f,	// (0x000257b7) list_highlight_pane_cp021_copy1_ParamLimits

0x310f,	// (0x000257b7) list_highlight_pane_cp021_copy1

0xe264,	// (0x0003090c) cset6_slider_pane_ParamLimits

0xe264,	// (0x0003090c) cset6_slider_pane

0xe290,	// (0x00030938) main_cset6_slider_pane_g1_ParamLimits

0xe290,	// (0x00030938) main_cset6_slider_pane_g1

0x8e67,	// (0x0002b50f) main_cset6_slider_pane_g2_ParamLimits

0x8e67,	// (0x0002b50f) main_cset6_slider_pane_g2

0xd973,	// (0x0003001b) main_cset6_slider_pane_g3_ParamLimits

0xd973,	// (0x0003001b) main_cset6_slider_pane_g3

0x80ca,	// (0x0002a772) main_cset6_slider_pane_g4_ParamLimits

0x80ca,	// (0x0002a772) main_cset6_slider_pane_g4

0x8112,	// (0x0002a7ba) main_cset6_slider_pane_g5_ParamLimits

0x8112,	// (0x0002a7ba) main_cset6_slider_pane_g5

0xd973,	// (0x0003001b) main_cset6_slider_pane_g7_ParamLimits

0xd973,	// (0x0003001b) main_cset6_slider_pane_g7

0xd97f,	// (0x00030027) main_cset6_slider_pane_g8_ParamLimits

0xd97f,	// (0x00030027) main_cset6_slider_pane_g8

0x80b2,	// (0x0002a75a) main_cset6_slider_pane_g9_ParamLimits

0x80b2,	// (0x0002a75a) main_cset6_slider_pane_g9

0x80be,	// (0x0002a766) main_cset6_slider_pane_g10_ParamLimits

0x80be,	// (0x0002a766) main_cset6_slider_pane_g10

0x80ca,	// (0x0002a772) main_cset6_slider_pane_g11_ParamLimits

0x80ca,	// (0x0002a772) main_cset6_slider_pane_g11

0x80d6,	// (0x0002a77e) main_cset6_slider_pane_g12_ParamLimits

0x80d6,	// (0x0002a77e) main_cset6_slider_pane_g12

0x80e2,	// (0x0002a78a) main_cset6_slider_pane_g13_ParamLimits

0x80e2,	// (0x0002a78a) main_cset6_slider_pane_g13

0x80ee,	// (0x0002a796) main_cset6_slider_pane_g14_ParamLimits

0x80ee,	// (0x0002a796) main_cset6_slider_pane_g14

0x8e8f,	// (0x0002b537) main_cset6_slider_pane_g15_ParamLimits

0x8e8f,	// (0x0002b537) main_cset6_slider_pane_g15

0x8112,	// (0x0002a7ba) main_cset6_slider_pane_g16_ParamLimits

0x8112,	// (0x0002a7ba) main_cset6_slider_pane_g16

0x811e,	// (0x0002a7c6) main_cset6_slider_pane_g17_ParamLimits

0x811e,	// (0x0002a7c6) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0003226c) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0003226c) main_cset6_slider_pane_g

0xe2b8,	// (0x00030960) main_cset6_slider_pane_t1_ParamLimits

0xe2b8,	// (0x00030960) main_cset6_slider_pane_t1

0xe2f9,	// (0x000309a1) main_cset6_slider_pane_t2_ParamLimits

0xe2f9,	// (0x000309a1) main_cset6_slider_pane_t2

0xe324,	// (0x000309cc) main_cset6_slider_pane_t3_ParamLimits

0xe324,	// (0x000309cc) main_cset6_slider_pane_t3

0x8ea7,	// (0x0002b54f) main_cset6_slider_pane_t4_ParamLimits

0x8ea7,	// (0x0002b54f) main_cset6_slider_pane_t4

0x8ed2,	// (0x0002b57a) main_cset6_slider_pane_t5_ParamLimits

0x8ed2,	// (0x0002b57a) main_cset6_slider_pane_t5

0xe34f,	// (0x000309f7) main_cset6_slider_pane_t7_ParamLimits

0xe34f,	// (0x000309f7) main_cset6_slider_pane_t7

0x8efd,	// (0x0002b5a5) main_cset6_slider_pane_t8_ParamLimits

0x8efd,	// (0x0002b5a5) main_cset6_slider_pane_t8

0x8f21,	// (0x0002b5c9) main_cset6_slider_pane_t9_ParamLimits

0x8f21,	// (0x0002b5c9) main_cset6_slider_pane_t9

0x8f45,	// (0x0002b5ed) main_cset6_slider_pane_t10_ParamLimits

0x8f45,	// (0x0002b5ed) main_cset6_slider_pane_t10

0x8f69,	// (0x0002b611) main_cset6_slider_pane_t11_ParamLimits

0x8f69,	// (0x0002b611) main_cset6_slider_pane_t11

0xe385,	// (0x00030a2d) main_cset6_slider_pane_t14_ParamLimits

0xe385,	// (0x00030a2d) main_cset6_slider_pane_t14

0xe3be,	// (0x00030a66) main_cset6_slider_pane_t15_ParamLimits

0xe3be,	// (0x00030a66) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x00032291) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x00032291) main_cset6_slider_pane_t

0xe3f7,	// (0x00030a9f) cset_slider_pane_g1_copy1

0xe400,	// (0x00030aa8) cset_slider_pane_g2_copy1

0xe409,	// (0x00030ab1) cset_slider_pane_g3_copy1

0x2ee5,	// (0x0002558d) bg_popup_sub_pane_cp011_copy1

0xdb62,	// (0x0003020a) main_cset_text_pane_g1_copy1

0xdb6a,	// (0x00030212) main_cset_text_pane_t1_copy1

0xdb78,	// (0x00030220) main_cset_text_pane_t2_copy1

0xdb86,	// (0x0003022e) main_cset_text_pane_t3_copy1

0xdb94,	// (0x0003023c) main_cset_text_pane_t4_copy1

0xdba2,	// (0x0003024a) main_cset_text_pane_t5_copy1

0xdbb0,	// (0x00030258) main_cset_text_pane_t6_copy1

0xdbbe,	// (0x00030266) main_cset_text_pane_t7_copy1

0x8f8d,	// (0x0002b635) main_cset_text2_pane_t1_copy1

0x2ee5,	// (0x0002558d) main_ncimui_pane

0x6675,	// (0x00028d1d) popup_query_ncimui_window_ParamLimits

0x6675,	// (0x00028d1d) popup_query_ncimui_window

0xce12,	// (0x0002f4ba) field_cale_ev2_pane_g4_ParamLimits

0xce12,	// (0x0002f4ba) field_cale_ev2_pane_g4

0x7b0b,	// (0x0002a1b3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7b0b,	// (0x0002a1b3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x00031f6f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x00031f6f) cell_video_dialer_keypad_pane_g

0x7b23,	// (0x0002a1cb) cell_video_dialer_keypad_pane_t1

0x2ee5,	// (0x0002558d) bg_popup_window_pane_cp012

0xae71,	// (0x0002d519) heading_pane_cp06

0xe507,	// (0x00030baf) ncim_query_content_pane

0x2ee5,	// (0x0002558d) bg_popup_heading_pane_cp01

0xe50f,	// (0x00030bb7) ncim_heading_pane_t1

0xe51d,	// (0x00030bc5) ncim_indicator_popup_pane

0xe52f,	// (0x00030bd7) ncim_query_button_pane

0xe543,	// (0x00030beb) ncim_query_content_pane_t1

0xe555,	// (0x00030bfd) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x000322d0) ncim_query_content_pane_t

0xe58f,	// (0x00030c37) ncim_query_list_pane

0xe5a1,	// (0x00030c49) ncim_query_popup_pane

0xe51d,	// (0x00030bc5) ncim_indicator_popup_pane_ParamLimits

0x90a0,	// (0x0002b748) ncim_query_content_pane_g1_ParamLimits

0x90a0,	// (0x0002b748) ncim_query_content_pane_g1

0xe543,	// (0x00030beb) ncim_query_content_pane_t1_ParamLimits

0xe555,	// (0x00030bfd) ncim_query_content_pane_t2_ParamLimits

0x90ac,	// (0x0002b754) ncim_query_content_pane_t3_ParamLimits

0x90ac,	// (0x0002b754) ncim_query_content_pane_t3

0x90d4,	// (0x0002b77c) ncim_query_content_pane_t4_ParamLimits

0x90d4,	// (0x0002b77c) ncim_query_content_pane_t4

0x90fc,	// (0x0002b7a4) ncim_query_content_pane_t5_ParamLimits

0x90fc,	// (0x0002b7a4) ncim_query_content_pane_t5

0xe567,	// (0x00030c0f) ncim_query_content_pane_t6_ParamLimits

0xe567,	// (0x00030c0f) ncim_query_content_pane_t6

0xfc28,	// (0x000322d0) ncim_query_content_pane_t_ParamLimits

0xe58f,	// (0x00030c37) ncim_query_list_pane_ParamLimits

0xe5a1,	// (0x00030c49) ncim_query_popup_pane_ParamLimits

0xe5b5,	// (0x00030c5d) wait_bar_pane_cp04

0x2ee5,	// (0x0002558d) input_focus_pane_cp011

0xe5bd,	// (0x00030c65) ncim_query_popup_pane_t1

0xe5cb,	// (0x00030c73) ncim_list_query_list_pane_ParamLimits

0xe5cb,	// (0x00030c73) ncim_list_query_list_pane

0x2ee5,	// (0x0002558d) bg_button_pane_cp027

0xe5de,	// (0x00030c86) ncim_query_button_pane_g1

0x2ee5,	// (0x0002558d) list_highlight_pane_cp012

0xe5e8,	// (0x00030c90) ncim_list_query_list_pane_g1

0xe5f0,	// (0x00030c98) ncim_list_query_list_pane_t1

0xd79c,	// (0x0002fe44) cam4_indicators_pane_g3_ParamLimits

0xd79c,	// (0x0002fe44) cam4_indicators_pane_g3

0x2a34,	// (0x000250dc) vid4_indicators_pane_g5_ParamLimits

0x2a34,	// (0x000250dc) vid4_indicators_pane_g5

0xde6b,	// (0x00030513) vid4_progress_pane_g5_ParamLimits

0xde6b,	// (0x00030513) vid4_progress_pane_g5

0x8fbb,	// (0x0002b663) main_ncimui_pane_g1

0x9011,	// (0x0002b6b9) ncimui_group_query_pane_ParamLimits

0x9011,	// (0x0002b6b9) ncimui_group_query_pane

0x904d,	// (0x0002b6f5) ncimui_list_pane_ParamLimits

0x904d,	// (0x0002b6f5) ncimui_list_pane

0x906c,	// (0x0002b714) ncimui_text_pane_ParamLimits

0x906c,	// (0x0002b714) ncimui_text_pane

0x9124,	// (0x0002b7cc) ncimui_text_pane_t1_ParamLimits

0x9124,	// (0x0002b7cc) ncimui_text_pane_t1

0xe607,	// (0x00030caf) ncimui_list_single_graphic_pane_ParamLimits

0xe607,	// (0x00030caf) ncimui_list_single_graphic_pane

0x9142,	// (0x0002b7ea) ncimui_query_pane_ParamLimits

0x9142,	// (0x0002b7ea) ncimui_query_pane

0x2ee5,	// (0x0002558d) list_highlight_pane_cp013

0xe614,	// (0x00030cbc) ncim_list_query_list_pane_t1_copy1

0xe622,	// (0x00030cca) ncim_list_single_graphic_pane_g1

0xe62a,	// (0x00030cd2) ncim_query_button_pane_cp01

0xe636,	// (0x00030cde) ncim_query_entry_pane_ParamLimits

0xe636,	// (0x00030cde) ncim_query_entry_pane

0xe649,	// (0x00030cf1) ncimui_query_pane_g1

0xe655,	// (0x00030cfd) ncimui_query_pane_t1_ParamLimits

0xe655,	// (0x00030cfd) ncimui_query_pane_t1

0x310f,	// (0x000257b7) input_focus_pane_cp012

0xe66e,	// (0x00030d16) ncim_query_entry_pane_t1

0x3ae7,	// (0x0002618f) main_im_pane_ParamLimits

0x310f,	// (0x000257b7) main_mobtv_pane_ParamLimits

0x310f,	// (0x000257b7) main_mobtv_pane

0x80b2,	// (0x0002a75a) main_cset6_slider_pane_g18_ParamLimits

0x80b2,	// (0x0002a75a) main_cset6_slider_pane_g18

0x80e2,	// (0x0002a78a) main_cset6_slider_pane_g19_ParamLimits

0x80e2,	// (0x0002a78a) main_cset6_slider_pane_g19

0xe680,	// (0x00030d28) bg_main_mobtv_pane_ParamLimits

0xe680,	// (0x00030d28) bg_main_mobtv_pane

0x9152,	// (0x0002b7fa) main_mobtv_info_pane

0x915b,	// (0x0002b803) main_mobtv_loading_pane_ParamLimits

0x915b,	// (0x0002b803) main_mobtv_loading_pane

0xe68e,	// (0x00030d36) main_mobtv_pg_channel_list_pane

0xe698,	// (0x00030d40) main_mobtv_pg_hdr_pane

0x9168,	// (0x0002b810) main_mobtv_programe_curr_pane_ParamLimits

0x9168,	// (0x0002b810) main_mobtv_programe_curr_pane

0x9175,	// (0x0002b81d) main_mobtv_programe_next_pane_ParamLimits

0x9175,	// (0x0002b81d) main_mobtv_programe_next_pane

0xe6a1,	// (0x00030d49) popup_mobtv_noti_window

0xcb42,	// (0x0002f1ea) main_tv_pg_hdr_pane_g1

0xe6a9,	// (0x00030d51) main_tv_pg_hdr_pane_g2

0xe6b1,	// (0x00030d59) main_tv_pg_hdr_pane_g3

0xe6b9,	// (0x00030d61) main_tv_pg_hdr_pane_g4

0xe6c1,	// (0x00030d69) main_tv_pg_hdr_pane_g5

0xe6c9,	// (0x00030d71) main_tv_pg_hdr_pane_g6

0xe6d1,	// (0x00030d79) main_tv_pg_hdr_pane_g7

0xe6d9,	// (0x00030d81) main_tv_pg_hdr_pane_g8

0xe6e1,	// (0x00030d89) main_tv_pg_hdr_pane_g9

0xe6e9,	// (0x00030d91) main_tv_pg_hdr_pane_g10

0xe6f3,	// (0x00030d9b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x000322dd) main_tv_pg_hdr_pane_g

0xe6fd,	// (0x00030da5) main_tv_pg_hdr_pane_t1

0xe70b,	// (0x00030db3) main_tv_pg_hdr_pane_t2

0xe719,	// (0x00030dc1) main_tv_pg_hdr_pane_t3

0xe727,	// (0x00030dcf) main_tv_pg_hdr_pane_t4

0xe735,	// (0x00030ddd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x000322f4) main_tv_pg_hdr_pane_t

0xe743,	// (0x00030deb) single_mobtv_pg_channel_pane_ParamLimits

0xe743,	// (0x00030deb) single_mobtv_pg_channel_pane

0xe755,	// (0x00030dfd) single_mobtv_pg_channel_table_pane

0xe75e,	// (0x00030e06) single_mobtv_pg_channel_thumb_pane

0xe767,	// (0x00030e0f) single_tv_pg_channel_pane_g1

0xe770,	// (0x00030e18) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x000322ff) single_tv_pg_channel_pane_g

0xcd71,	// (0x0002f419) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcd71,	// (0x0002f419) bg_single_mobtv_pg_channel_thumb_pane

0xe779,	// (0x00030e21) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe779,	// (0x00030e21) single_mobtv_pg_channel_thumb_pane_g1

0xe787,	// (0x00030e2f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe787,	// (0x00030e2f) single_mobtv_pg_channel_thumb_pane_g2

0xe793,	// (0x00030e3b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe793,	// (0x00030e3b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x00032304) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x00032304) single_mobtv_pg_channel_thumb_pane_g

0xe79f,	// (0x00030e47) single_mobtv_pg_channel_thumb_pane_t1

0xe7ad,	// (0x00030e55) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0003230b) single_mobtv_pg_channel_thumb_pane_t

0xcb42,	// (0x0002f1ea) bg_single_mobtv_pg_channel_table_pane_g1

0xcb42,	// (0x0002f1ea) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x00031dbb) bg_single_mobtv_pg_channel_table_pane_g

0xe7bb,	// (0x00030e63) single_mobtv_pg_channel_table_pane_t1

0xe7c9,	// (0x00030e71) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x00032310) single_mobtv_pg_channel_table_pane_t

0x918a,	// (0x0002b832) main_mobtv_info_pane_g1_ParamLimits

0x918a,	// (0x0002b832) main_mobtv_info_pane_g1

0x91a6,	// (0x0002b84e) main_mobtv_info_pane_t1_ParamLimits

0x91a6,	// (0x0002b84e) main_mobtv_info_pane_t1

0x920c,	// (0x0002b8b4) main_mobtv_info_pane_t2_ParamLimits

0x920c,	// (0x0002b8b4) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0003231a) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0003231a) main_mobtv_info_pane_t

0x928f,	// (0x0002b937) wait_bar_pane_cp05

0x929f,	// (0x0002b947) main_mobtv_loading_pane_g1_ParamLimits

0x929f,	// (0x0002b947) main_mobtv_loading_pane_g1

0x92b0,	// (0x0002b958) main_mobtv_loading_pane_g2_ParamLimits

0x92b0,	// (0x0002b958) main_mobtv_loading_pane_g2

0x92bc,	// (0x0002b964) main_mobtv_loading_pane_g3_ParamLimits

0x92bc,	// (0x0002b964) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x00032321) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x00032321) main_mobtv_loading_pane_g

0xe7d7,	// (0x00030e7f) main_mobtv_loading_pane_t1_ParamLimits

0xe7d7,	// (0x00030e7f) main_mobtv_loading_pane_t1

0xe7ef,	// (0x00030e97) main_mobtv_loading_pane_t2_ParamLimits

0xe7ef,	// (0x00030e97) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x00032328) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x00032328) main_mobtv_loading_pane_t

0x92cd,	// (0x0002b975) wait_bar_pane_cp06_ParamLimits

0x92cd,	// (0x0002b975) wait_bar_pane_cp06

0xe813,	// (0x00030ebb) main_mobtv_programe_curr_pane_t1

0xe821,	// (0x00030ec9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0003232d) main_mobtv_programe_curr_pane_t

0xe82f,	// (0x00030ed7) main_mobtv_programe_next_pane_t1

0xe83d,	// (0x00030ee5) main_mobtv_programe_next_pane_t2

0xe84b,	// (0x00030ef3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x00032332) main_mobtv_programe_next_pane_t

0x2ee5,	// (0x0002558d) bg_popup_mobtv_noti_window_pane

0xe859,	// (0x00030f01) popup_mobtv_noti_window_g1

0xe861,	// (0x00030f09) popup_mobtv_noti_window_t1

0xe86f,	// (0x00030f17) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x00032339) popup_mobtv_noti_window_t

0xcb42,	// (0x0002f1ea) bg_popup_mobtv_noti_window_pane_g1

0x2ee5,	// (0x0002558d) sc_clock_pane

0x2ee5,	// (0x0002558d) main_fs_bigclock_pane

0x8b55,	// (0x0002b1fd) blid2_tripm_pane_t4_ParamLimits

0x8b55,	// (0x0002b1fd) blid2_tripm_pane_t4

0x92dc,	// (0x0002b984) sc_clock_pane_g1_ParamLimits

0x92dc,	// (0x0002b984) sc_clock_pane_g1

0x92ee,	// (0x0002b996) sc_clock_pane_t1_ParamLimits

0x92ee,	// (0x0002b996) sc_clock_pane_t1

0x9310,	// (0x0002b9b8) sc_clock_pane_t2_ParamLimits

0x9310,	// (0x0002b9b8) sc_clock_pane_t2

0x9326,	// (0x0002b9ce) sc_clock_pane_t3_ParamLimits

0x9326,	// (0x0002b9ce) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0003233e) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0003233e) sc_clock_pane_t

0xa009,	// (0x0002c6b1) main_fs_bigclock_indicator_pane_ParamLimits

0xa009,	// (0x0002c6b1) main_fs_bigclock_indicator_pane

0xcd41,	// (0x0002f3e9) main_fs_bigclock_pane_g1_ParamLimits

0xcd41,	// (0x0002f3e9) main_fs_bigclock_pane_g1

0xa015,	// (0x0002c6bd) main_fs_bigclock_pane_t1_ParamLimits

0xa015,	// (0x0002c6bd) main_fs_bigclock_pane_t1

0xa027,	// (0x0002c6cf) main_fs_bigclock_pane_t2_ParamLimits

0xa027,	// (0x0002c6cf) main_fs_bigclock_pane_t2

0xa039,	// (0x0002c6e1) main_fs_bigclock_pane_t3_ParamLimits

0xa039,	// (0x0002c6e1) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x00032533) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00032533) main_fs_bigclock_pane_t

0x047f,	// (0x00022b27) main_fs_bigclock_indicator_pane_g1

0xe537,	// (0x00030bdf) ncim_query_content_pane_g2_ParamLimits

0xe537,	// (0x00030bdf) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x000322cb) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x000322cb) ncim_query_content_pane_g

0x933b,	// (0x0002b9e3) sc_clock_pane_t4_ParamLimits

0x933b,	// (0x0002b9e3) sc_clock_pane_t4

0x310f,	// (0x000257b7) main_radioblah_pane

0xd6d6,	// (0x0002fd7e) cell_call4_button_pane_t1_copy1_ParamLimits

0xd6d6,	// (0x0002fd7e) cell_call4_button_pane_t1_copy1

0x8fc3,	// (0x0002b66b) main_ncimui_pane_t1_ParamLimits

0x8fc3,	// (0x0002b66b) main_ncimui_pane_t1

0x8fdd,	// (0x0002b685) main_ncimui_pane_t2_ParamLimits

0x8fdd,	// (0x0002b685) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x000322c4) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x000322c4) main_ncimui_pane_t

0xe999,	// (0x00031041) main_radioblah_anim_pane_ParamLimits

0xe999,	// (0x00031041) main_radioblah_anim_pane

0xe9aa,	// (0x00031052) main_radioblah_info_pane_ParamLimits

0xe9aa,	// (0x00031052) main_radioblah_info_pane

0xe9be,	// (0x00031066) main_radioblah_pane_t1_ParamLimits

0xe9be,	// (0x00031066) main_radioblah_pane_t1

0xe9da,	// (0x00031082) main_radioblah_pane_t2_ParamLimits

0xe9da,	// (0x00031082) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x0003235f) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x0003235f) main_radioblah_pane_t

0x93d2,	// (0x0002ba7a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x93d2,	// (0x0002ba7a) main_radioblah_rocker_ctrl_pane

0xea22,	// (0x000310ca) main_radioblah_info_pane_t1_ParamLimits

0xea22,	// (0x000310ca) main_radioblah_info_pane_t1

0x9426,	// (0x0002bace) main_radioblah_info_pane_t2_ParamLimits

0x9426,	// (0x0002bace) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x00032368) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x00032368) main_radioblah_info_pane_t

0xcb42,	// (0x0002f1ea) main_radioblah_rocker_ctrl_pane_g1

0x94d4,	// (0x0002bb7c) main_radioblah_rocker_ctrl_pane_g2

0x94dc,	// (0x0002bb84) main_radioblah_rocker_ctrl_pane_g3

0x94e4,	// (0x0002bb8c) main_radioblah_rocker_ctrl_pane_g4

0x94ec,	// (0x0002bb94) main_radioblah_rocker_ctrl_pane_g5

0x94f4,	// (0x0002bb9c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x00032371) main_radioblah_rocker_ctrl_pane_g

0x8f8d,	// (0x0002b635) main_cset_text2_pane_t1_copy1_ParamLimits

0xd75e,	// (0x0002fe06) cam4_image_uncrop_qvga_pane

0xd7c6,	// (0x0002fe6e) vid4_image_uncrop_qcif_pane

0xe06e,	// (0x00030716) cam6_image_uncrop_qvga_pane_ParamLimits

0xe06e,	// (0x00030716) cam6_image_uncrop_qvga_pane

0xe142,	// (0x000307ea) vid6_image_uncrop_qcif_pane_ParamLimits

0xe142,	// (0x000307ea) vid6_image_uncrop_qcif_pane

0x2ee5,	// (0x0002558d) bg_popup_preview_window_pane_cp03

0xe4dd,	// (0x00030b85) list_cset_text2_pane

0xe4e5,	// (0x00030b8d) main_cset6_text2_pane_g1

0xe4ed,	// (0x00030b95) main_cset6_text2_pane_t1

0x94fc,	// (0x0002bba4) list_cset_text2_pane_t1_ParamLimits

0x94fc,	// (0x0002bba4) list_cset_text2_pane_t1

0x310f,	// (0x000257b7) main_radioblah_pane_ParamLimits

0x927d,	// (0x0002b925) main_mobtv_info_pane_t3_ParamLimits

0x927d,	// (0x0002b925) main_mobtv_info_pane_t3

0x93c0,	// (0x0002ba68) main_radioblah_pane_g1

0x93fa,	// (0x0002baa2) main_radioblah_info_pane_g1

0x9479,	// (0x0002bb21) main_radioblah_info_pane_t3_ParamLimits

0x9479,	// (0x0002bb21) main_radioblah_info_pane_t3

0x534f,	// (0x000279f7) highlight_cell_cale_month_pane_ParamLimits

0x534f,	// (0x000279f7) highlight_cell_cale_month_pane

0x2ee5,	// (0x0002558d) main_phob_fisheye_pane

0xcebb,	// (0x0002f563) scroll_pane_cp0031_ParamLimits

0xcebb,	// (0x0002f563) scroll_pane_cp0031

0xe24c,	// (0x000308f4) wait_bar_pane_cp08_ParamLimits

0x8e19,	// (0x0002b4c1) cset_list_set_pane_copy1_ParamLimits

0xea5c,	// (0x00031104) highlight_cell_cale_month_pane_g1

0x9515,	// (0x0002bbbd) highlight_cell_cale_month_pane_t1

0xea64,	// (0x0003110c) list_gen_pane_cp01

0xd95e,	// (0x00030006) scroll_pane_01

0x9523,	// (0x0002bbcb) list_single_double_fisheye_pane

0x952c,	// (0x0002bbd4) list_double_fisheye_pane_g1_ParamLimits

0x952c,	// (0x0002bbd4) list_double_fisheye_pane_g1

0x9538,	// (0x0002bbe0) list_double_fisheye_pane_g2_ParamLimits

0x9538,	// (0x0002bbe0) list_double_fisheye_pane_g2

0x9544,	// (0x0002bbec) list_double_fisheye_pane_g3_ParamLimits

0x9544,	// (0x0002bbec) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0003237e) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0003237e) list_double_fisheye_pane_g

0x9568,	// (0x0002bc10) list_double_fisheye_pane_t1_ParamLimits

0x9568,	// (0x0002bc10) list_double_fisheye_pane_t1

0x9583,	// (0x0002bc2b) list_double_fisheye_pane_t2_ParamLimits

0x9583,	// (0x0002bc2b) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x00032389) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x00032389) list_double_fisheye_pane_t

0x2ee5,	// (0x0002558d) main_call5_pane

0x9364,	// (0x0002ba0c) sc_swipe_pane_ParamLimits

0x9364,	// (0x0002ba0c) sc_swipe_pane

0x95b6,	// (0x0002bc5e) call5_image_pane_ParamLimits

0x95b6,	// (0x0002bc5e) call5_image_pane

0x95cb,	// (0x0002bc73) call5_swipe_1_pane_ParamLimits

0x95cb,	// (0x0002bc73) call5_swipe_1_pane

0x95dc,	// (0x0002bc84) call5_swipe_2_pane_ParamLimits

0x95dc,	// (0x0002bc84) call5_swipe_2_pane

0x9601,	// (0x0002bca9) popup_call5_audio_first_window_ParamLimits

0x9601,	// (0x0002bca9) popup_call5_audio_first_window

0xcd71,	// (0x0002f419) call5_swipe_1_pane_g1_ParamLimits

0xcd71,	// (0x0002f419) call5_swipe_1_pane_g1

0xea6d,	// (0x00031115) call5_swipe_1_pane_g2_ParamLimits

0xea6d,	// (0x00031115) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0003238e) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0003238e) call5_swipe_1_pane_g

0xea79,	// (0x00031121) call5_swipe_1_pane_t1_ParamLimits

0xea79,	// (0x00031121) call5_swipe_1_pane_t1

0xcd71,	// (0x0002f419) call5_swipe_2_pane_g1_ParamLimits

0xcd71,	// (0x0002f419) call5_swipe_2_pane_g1

0xea8e,	// (0x00031136) call5_swipe_2_pane_g2_ParamLimits

0xea8e,	// (0x00031136) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x00032393) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x00032393) call5_swipe_2_pane_g

0xea9a,	// (0x00031142) call5_swipe_2_pane_t1_ParamLimits

0xea9a,	// (0x00031142) call5_swipe_2_pane_t1

0xeaaf,	// (0x00031157) sc_swipe_pane_g1_ParamLimits

0xeaaf,	// (0x00031157) sc_swipe_pane_g1

0xeabc,	// (0x00031164) sc_swipe_pane_g2_ParamLimits

0xeabc,	// (0x00031164) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x00032398) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x00032398) sc_swipe_pane_g

0xeac8,	// (0x00031170) sc_swipe_pane_t1_ParamLimits

0xeac8,	// (0x00031170) sc_swipe_pane_t1

0x2ee5,	// (0x0002558d) main_cmail_launcher_pane

0x9610,	// (0x0002bcb8) aid_size_cell_cmail_l_ParamLimits

0x9610,	// (0x0002bcb8) aid_size_cell_cmail_l

0x9629,	// (0x0002bcd1) grid_cmail_l_pane_ParamLimits

0x9629,	// (0x0002bcd1) grid_cmail_l_pane

0x963e,	// (0x0002bce6) cell_cmail_l_pane_ParamLimits

0x963e,	// (0x0002bce6) cell_cmail_l_pane

0x9660,	// (0x0002bd08) cell_cmail_l_pane_g1_ParamLimits

0x9660,	// (0x0002bd08) cell_cmail_l_pane_g1

0x9670,	// (0x0002bd18) cell_cmail_l_pane_t1_ParamLimits

0x9670,	// (0x0002bd18) cell_cmail_l_pane_t1

0xeadd,	// (0x00031185) cell_cmail_l_pane_t2_ParamLimits

0xeadd,	// (0x00031185) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x0003239d) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x0003239d) cell_cmail_l_pane_t

0x310f,	// (0x000257b7) grid_highlight_pane_cp018_ParamLimits

0x310f,	// (0x000257b7) grid_highlight_pane_cp018

0x2fdd,	// (0x00025685) main2_pane_ParamLimits

0x2fdd,	// (0x00025685) main2_pane

0x3c5d,	// (0x00026305) popup_sp_fs_action_menu_bg_pane_g1

0x3c65,	// (0x0002630d) popup_sp_fs_action_menu_bg_pane_g2

0x3c6d,	// (0x00026315) popup_sp_fs_action_menu_bg_pane_g3

0x3c75,	// (0x0002631d) popup_sp_fs_action_menu_bg_pane_g4

0x3c7d,	// (0x00026325) popup_sp_fs_action_menu_bg_pane_g5

0x3c85,	// (0x0002632d) popup_sp_fs_action_menu_bg_pane_g6

0x3c8d,	// (0x00026335) popup_sp_fs_action_menu_bg_pane_g7

0x3c95,	// (0x0002633d) popup_sp_fs_action_menu_bg_pane_g8

0x3c9d,	// (0x00026345) popup_sp_fs_action_menu_bg_pane_g9

0x3ca5,	// (0x0002634d) popup_sp_fs_action_menu_bg_pane_g10

0x3ca5,	// (0x0002634d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00031854) popup_sp_fs_action_menu_bg_pane_g

0x4425,	// (0x00026acd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t3_g3_g1

0x4431,	// (0x00026ad9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x2_t3_g3_g2

0x443d,	// (0x00026ae5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00031904) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00031904) list_medium_line_x2_t3_g3_g

0x4449,	// (0x00026af1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4449,	// (0x00026af1) list_medium_line_x2_t3_g3_t1

0x445e,	// (0x00026b06) list_medium_line_x2_t3_g3_t2_ParamLimits

0x445e,	// (0x00026b06) list_medium_line_x2_t3_g3_t2

0x4470,	// (0x00026b18) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0003190b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0003190b) list_medium_line_x2_t3_g3_t

0x4425,	// (0x00026acd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t3_g2_g1

0x443d,	// (0x00026ae5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00031912) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00031912) list_medium_line_x2_t3_g2_g

0x4485,	// (0x00026b2d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4485,	// (0x00026b2d) list_medium_line_x2_t3_g2_t1

0x449b,	// (0x00026b43) list_medium_line_x2_t3_g2_t2_ParamLimits

0x449b,	// (0x00026b43) list_medium_line_x2_t3_g2_t2

0x4470,	// (0x00026b18) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00031917) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00031917) list_medium_line_x2_t3_g2_t

0x4425,	// (0x00026acd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t4_g4_g1

0x44ad,	// (0x00026b55) list_medium_line_x2_t4_g4_g2_ParamLimits

0x44ad,	// (0x00026b55) list_medium_line_x2_t4_g4_g2

0x4431,	// (0x00026ad9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x2_t4_g4_g3

0x44b9,	// (0x00026b61) list_medium_line_x2_t4_g4_g4_ParamLimits

0x44b9,	// (0x00026b61) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0003191e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0003191e) list_medium_line_x2_t4_g4_g

0x44c5,	// (0x00026b6d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x44c5,	// (0x00026b6d) list_medium_line_x2_t4_g4_t1

0x44dc,	// (0x00026b84) list_medium_line_x2_t4_g4_t2_ParamLimits

0x44dc,	// (0x00026b84) list_medium_line_x2_t4_g4_t2

0x44f1,	// (0x00026b99) list_medium_line_x2_t4_g4_t3_ParamLimits

0x44f1,	// (0x00026b99) list_medium_line_x2_t4_g4_t3

0x4503,	// (0x00026bab) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4503,	// (0x00026bab) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00031927) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00031927) list_medium_line_x2_t4_g4_t

0x4425,	// (0x00026acd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t2_g4_g1

0x44ad,	// (0x00026b55) list_medium_line_x2_t2_g4_g2_ParamLimits

0x44ad,	// (0x00026b55) list_medium_line_x2_t2_g4_g2

0x4431,	// (0x00026ad9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x2_t2_g4_g3

0x443d,	// (0x00026ae5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0003198e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0003198e) list_medium_line_x2_t2_g4_g

0x536d,	// (0x00027a15) list_medium_line_x2_t2_g4_t1_ParamLimits

0x536d,	// (0x00027a15) list_medium_line_x2_t2_g4_t1

0x4470,	// (0x00026b18) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00031997) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00031997) list_medium_line_x2_t2_g4_t

0x4425,	// (0x00026acd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t2_g3_g1

0x4431,	// (0x00026ad9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x2_t2_g3_g2

0x443d,	// (0x00026ae5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00031904) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00031904) list_medium_line_x2_t2_g3_g

0x5382,	// (0x00027a2a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5382,	// (0x00027a2a) list_medium_line_x2_t2_g3_t1

0x4470,	// (0x00026b18) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0003199c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0003199c) list_medium_line_x2_t2_g3_t

0x54c0,	// (0x00027b68) main_sp_fs_list_pane_ParamLimits

0x54c0,	// (0x00027b68) main_sp_fs_list_pane

0x54cd,	// (0x00027b75) sp_fs_scroll_pane_ParamLimits

0x54cd,	// (0x00027b75) sp_fs_scroll_pane

0x54da,	// (0x00027b82) list_medium_line_x2_t3_t1

0x54ea,	// (0x00027b92) list_medium_line_x2_t3_t2

0xac09,	// (0x0002d2b1) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000319e7) list_medium_line_x2_t3_t

0x54f8,	// (0x00027ba0) list_medium_line_x3_t4_t1

0x5508,	// (0x00027bb0) list_medium_line_x3_t4_t2

0xac17,	// (0x0002d2bf) list_medium_line_x3_t4_t3

0xac25,	// (0x0002d2cd) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000319ee) list_medium_line_x3_t4_t

0x5516,	// (0x00027bbe) list_medium_line_x4_t5_t1

0x5526,	// (0x00027bce) list_medium_line_x4_t5_t2

0xac17,	// (0x0002d2bf) list_medium_line_x4_t5_t3

0xac33,	// (0x0002d2db) list_medium_line_x4_t5_t4

0xac25,	// (0x0002d2cd) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000319f7) list_medium_line_x4_t5_t

0x4425,	// (0x00026acd) list_medium_line_t4_g4_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t4_g4_g1

0x44b9,	// (0x00026b61) list_medium_line_t4_g4_g2_ParamLimits

0x44b9,	// (0x00026b61) list_medium_line_t4_g4_g2

0xac41,	// (0x0002d2e9) list_medium_line_t4_g4_g3_ParamLimits

0xac41,	// (0x0002d2e9) list_medium_line_t4_g4_g3

0x443d,	// (0x00026ae5) list_medium_line_t4_g4_g4_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00031a02) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00031a02) list_medium_line_t4_g4_g

0xac4d,	// (0x0002d2f5) list_medium_line_t4_g4_t1_ParamLimits

0xac4d,	// (0x0002d2f5) list_medium_line_t4_g4_t1

0xac62,	// (0x0002d30a) list_medium_line_t4_g4_t2_ParamLimits

0xac62,	// (0x0002d30a) list_medium_line_t4_g4_t2

0xac77,	// (0x0002d31f) list_medium_line_t4_g4_t3_ParamLimits

0xac77,	// (0x0002d31f) list_medium_line_t4_g4_t3

0xac8c,	// (0x0002d334) list_medium_line_t4_g4_t4_ParamLimits

0xac8c,	// (0x0002d334) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00031a0b) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00031a0b) list_medium_line_t4_g4_t

0x55f5,	// (0x00027c9d) chi_dic_find_pane_g1

0x647b,	// (0x00028b23) main_tport_pane

0xdac7,	// (0x0003016f) list_medium_line_plain_t1

0x4425,	// (0x00026acd) list_medium_line_t2_g2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t2_g2_g1

0x4431,	// (0x00026ad9) list_medium_line_t2_g2_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x000320da) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x000320da) list_medium_line_t2_g2_g

0x83d1,	// (0x0002aa79) list_medium_line_t2_g2_t1_ParamLimits

0x83d1,	// (0x0002aa79) list_medium_line_t2_g2_t1

0x83e8,	// (0x0002aa90) list_medium_line_t2_g2_t2_ParamLimits

0x83e8,	// (0x0002aa90) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x000320df) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x000320df) list_medium_line_t2_g2_t

0xdec7,	// (0x0003056f) aid_sp_fs_list_icon_a_sm

0xdecf,	// (0x00030577) aid_sp_fs_list_icon_d

0xded7,	// (0x0003057f) aid_sp_fs_text_primary

0xdee0,	// (0x00030588) aid_sp_fs_text_secondary

0xdee9,	// (0x00030591) list_medium_line

0xdee9,	// (0x00030591) list_medium_line_g2

0xdee9,	// (0x00030591) list_medium_line_g3

0xdee9,	// (0x00030591) list_medium_line_plain

0xdee9,	// (0x00030591) list_medium_line_plain_t2

0xdee9,	// (0x00030591) list_medium_line_plain_t3

0xdee9,	// (0x00030591) list_medium_line_right_icon

0xdee9,	// (0x00030591) list_medium_line_right_iconx2

0xdee9,	// (0x00030591) list_medium_line_t2

0xdee9,	// (0x00030591) list_medium_line_t2_g2

0xdee9,	// (0x00030591) list_medium_line_t2_g3

0xdee9,	// (0x00030591) list_medium_line_t2_right_icon

0xdee9,	// (0x00030591) list_medium_line_t2_right_iconx2

0xdee9,	// (0x00030591) list_medium_line_t3

0xdee9,	// (0x00030591) list_medium_line_t3_g2

0xdee9,	// (0x00030591) list_medium_line_t3_g3

0xdee9,	// (0x00030591) list_medium_line_t3_right_iconx2

0xdef2,	// (0x0003059a) list_medium_line_t4_g4

0xdefb,	// (0x000305a3) list_medium_line_x2

0xdefb,	// (0x000305a3) list_medium_line_x2_t2_g2

0xdefb,	// (0x000305a3) list_medium_line_x2_t2_g3

0xdefb,	// (0x000305a3) list_medium_line_x2_t2_g4

0xdefb,	// (0x000305a3) list_medium_line_x2_t3

0xdefb,	// (0x000305a3) list_medium_line_x2_t3_g2

0xdefb,	// (0x000305a3) list_medium_line_x2_t3_g3

0xdefb,	// (0x000305a3) list_medium_line_x2_t3_g4

0xdefb,	// (0x000305a3) list_medium_line_x2_t4_g2

0xdefb,	// (0x000305a3) list_medium_line_x2_t4_g4

0xdf04,	// (0x000305ac) list_medium_line_x3

0xdf04,	// (0x000305ac) list_medium_line_x3_t4

0xdf04,	// (0x000305ac) list_medium_line_x3_t4_g4

0xdef2,	// (0x0003059a) list_medium_line_x4_t4

0xdef2,	// (0x0003059a) list_medium_line_x4_t4_g7

0xdef2,	// (0x0003059a) list_medium_line_x4_t5

0xdf0d,	// (0x000305b5) list_single_fs_dyc_pane_ParamLimits

0xdf0d,	// (0x000305b5) list_single_fs_dyc_pane

0x4425,	// (0x00026acd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x4_t4_g7_g1

0xe412,	// (0x00030aba) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe412,	// (0x00030aba) list_medium_line_x4_t4_g7_g2

0xe41e,	// (0x00030ac6) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe41e,	// (0x00030ac6) list_medium_line_x4_t4_g7_g3

0xe42d,	// (0x00030ad5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe42d,	// (0x00030ad5) list_medium_line_x4_t4_g7_g4

0xe439,	// (0x00030ae1) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe439,	// (0x00030ae1) list_medium_line_x4_t4_g7_g5

0xe448,	// (0x00030af0) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe448,	// (0x00030af0) list_medium_line_x4_t4_g7_g6

0xe457,	// (0x00030aff) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe457,	// (0x00030aff) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x000322aa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x000322aa) list_medium_line_x4_t4_g7_g

0xe463,	// (0x00030b0b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe463,	// (0x00030b0b) list_medium_line_x4_t4_g7_t1

0xe478,	// (0x00030b20) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe478,	// (0x00030b20) list_medium_line_x4_t4_g7_t2

0xe48d,	// (0x00030b35) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe48d,	// (0x00030b35) list_medium_line_x4_t4_g7_t3

0xe4a2,	// (0x00030b4a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe4a2,	// (0x00030b4a) list_medium_line_x4_t4_g7_t4

0xe4b4,	// (0x00030b5c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe4b4,	// (0x00030b5c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x000322b9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x000322b9) list_medium_line_x4_t4_g7_t

0xe4c6,	// (0x00030b6e) list_single_dyc_row_pane_ParamLimits

0xe4c6,	// (0x00030b6e) list_single_dyc_row_pane

0x95a5,	// (0x0002bc4d) call5_gesture_pane_ParamLimits

0x95a5,	// (0x0002bc4d) call5_gesture_pane

0x95ed,	// (0x0002bc95) call5_windows_pane_ParamLimits

0x95ed,	// (0x0002bc95) call5_windows_pane

0x9686,	// (0x0002bd2e) call5_swipe_1_pane_cp_ParamLimits

0x9686,	// (0x0002bd2e) call5_swipe_1_pane_cp

0x9692,	// (0x0002bd3a) call5_swipe_2_pane_cp_ParamLimits

0x9692,	// (0x0002bd3a) call5_swipe_2_pane_cp

0xb157,	// (0x0002d7ff) call5_image_pane_cp

0x969e,	// (0x0002bd46) popup_call5_audio_first_window_cp_ParamLimits

0x969e,	// (0x0002bd46) popup_call5_audio_first_window_cp

0xeaaf,	// (0x00031157) call5_swipe_1_pane_g1_cp_ParamLimits

0xeaaf,	// (0x00031157) call5_swipe_1_pane_g1_cp

0xeaef,	// (0x00031197) call5_swipe_1_pane_g2_cp

0xeac8,	// (0x00031170) call5_swipe_1_pane_t1_cp_ParamLimits

0xeac8,	// (0x00031170) call5_swipe_1_pane_t1_cp

0xeaaf,	// (0x00031157) call5_swipe_2_pane_g1_cp_ParamLimits

0xeaaf,	// (0x00031157) call5_swipe_2_pane_g1_cp

0xeaf7,	// (0x0003119f) call5_swipe_2_pane_g2_cp

0xeaff,	// (0x000311a7) call5_swipe_2_pane_t1_cp_ParamLimits

0xeaff,	// (0x000311a7) call5_swipe_2_pane_t1_cp

0x310f,	// (0x000257b7) main_sp_fs_email_pane

0xeb14,	// (0x000311bc) main_sp_fs_listscroll_pane_te

0x96aa,	// (0x0002bd52) popup_sp_fs_action_menu_pane_ParamLimits

0x96aa,	// (0x0002bd52) popup_sp_fs_action_menu_pane

0xcb42,	// (0x0002f1ea) bg_sp_fs_ctrlbar_pane_g1

0xeb1d,	// (0x000311c5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xeb26,	// (0x000311ce) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeb2f,	// (0x000311d7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcb42,	// (0x0002f1ea) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x000323a2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc92f,	// (0x0002efd7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc92f,	// (0x0002efd7) bg_sp_fs_ctrlbar_ddmenu_pane

0xeb38,	// (0x000311e0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xeb38,	// (0x000311e0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4425,	// (0x00026acd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4425,	// (0x00026acd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x000323ab) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x000323ab) main_sp_fs_ctrlbar_ddmenu_pane_g

0xeb44,	// (0x000311ec) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xeb44,	// (0x000311ec) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xeb5e,	// (0x00031206) list_medium_line_t2_right_icon_g1

0xeb66,	// (0x0003120e) list_medium_line_t2_right_icon_t1

0x96da,	// (0x0002bd82) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x000323b0) list_medium_line_t2_right_icon_t

0xc64d,	// (0x0002ecf5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc64d,	// (0x0002ecf5) bg_sp_fs_ctrlbar_pane

0x9731,	// (0x0002bdd9) main_sp_fs_ctrlbar_button_pane_cp01

0x9739,	// (0x0002bde1) main_sp_fs_ctrlbar_ddmenu_pane

0xebae,	// (0x00031256) main_sp_fs_ctrlbar_pane_g1

0xebba,	// (0x00031262) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x000323b5) main_sp_fs_ctrlbar_pane_g

0xebc6,	// (0x0003126e) main_sp_fs_ctrlbar_pane_t1

0x9743,	// (0x0002bdeb) main_sp_fs_ctrlbar_pane

0x9764,	// (0x0002be0c) main_sp_fs_listscroll_pane_te_cp01

0x9784,	// (0x0002be2c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9784,	// (0x0002be2c) popup_sp_fs_action_menu_pane_cp01

0x310f,	// (0x000257b7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x310f,	// (0x000257b7) bg_sp_fs_highlight_list_pane_cp01

0x97a3,	// (0x0002be4b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x97a3,	// (0x0002be4b) sp_fs_action_menu_list_gene_pane_g1

0xebdb,	// (0x00031283) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xebdb,	// (0x00031283) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x000323ba) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x000323ba) sp_fs_action_menu_list_gene_pane_g

0x97b2,	// (0x0002be5a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x97b2,	// (0x0002be5a) sp_fs_action_menu_list_gene_pane_t1

0x97ca,	// (0x0002be72) sp_fs_action_menu_list_gene_pane_ParamLimits

0x97ca,	// (0x0002be72) sp_fs_action_menu_list_gene_pane

0xebe8,	// (0x00031290) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xebe8,	// (0x00031290) popup_sp_fs_action_menu_bg_pane

0x97e7,	// (0x0002be8f) sp_fs_action_menu_list_pane_ParamLimits

0x97e7,	// (0x0002be8f) sp_fs_action_menu_list_pane

0xebf6,	// (0x0003129e) sp_fs_scroll_pane_cp01_ParamLimits

0xebf6,	// (0x0003129e) sp_fs_scroll_pane_cp01

0x9803,	// (0x0002beab) list_medium_line_plain_t2_t1

0x9813,	// (0x0002bebb) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x000323bf) list_medium_line_plain_t2_t

0x9821,	// (0x0002bec9) list_medium_line_plain_t3_t1

0x9831,	// (0x0002bed9) list_medium_line_plain_t3_t2

0x983f,	// (0x0002bee7) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x000323c4) list_medium_line_plain_t3_t

0x4425,	// (0x00026acd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t2_g2_g1

0x443d,	// (0x00026ae5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00031912) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00031912) list_medium_line_x2_t2_g2_g

0xac4d,	// (0x0002d2f5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xac4d,	// (0x0002d2f5) list_medium_line_x2_t2_g2_t1

0x4470,	// (0x00026b18) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x000323cb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x000323cb) list_medium_line_x2_t2_g2_t

0x4425,	// (0x00026acd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t4_g2_g1

0x443d,	// (0x00026ae5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00031912) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00031912) list_medium_line_x2_t4_g2_g

0x984d,	// (0x0002bef5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x984d,	// (0x0002bef5) list_medium_line_x2_t4_g2_t1

0x9867,	// (0x0002bf0f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9867,	// (0x0002bf0f) list_medium_line_x2_t4_g2_t2

0x987c,	// (0x0002bf24) list_medium_line_x2_t4_g2_t3_ParamLimits

0x987c,	// (0x0002bf24) list_medium_line_x2_t4_g2_t3

0x4470,	// (0x00026b18) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd28,	// (0x000323d0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd28,	// (0x000323d0) list_medium_line_x2_t4_g2_t

0xec1c,	// (0x000312c4) list_medium_line_t3_right_iconx2_g1

0xeb5e,	// (0x00031206) list_medium_line_t3_right_iconx2_g2

0x9891,	// (0x0002bf39) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd31,	// (0x000323d9) list_medium_line_t3_right_iconx2_g

0x9899,	// (0x0002bf41) list_medium_line_t3_right_iconx2_t1

0x98a9,	// (0x0002bf51) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd38,	// (0x000323e0) list_medium_line_t3_right_iconx2_t

0x4425,	// (0x00026acd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x3_t4_g4_g1

0x4431,	// (0x00026ad9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x3_t4_g4_g2

0x44b9,	// (0x00026b61) list_medium_line_x3_t4_g4_g3_ParamLimits

0x44b9,	// (0x00026b61) list_medium_line_x3_t4_g4_g3

0xec24,	// (0x000312cc) list_medium_line_x3_t4_g4_g4_ParamLimits

0xec24,	// (0x000312cc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd3d,	// (0x000323e5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd3d,	// (0x000323e5) list_medium_line_x3_t4_g4_g

0x83d1,	// (0x0002aa79) list_medium_line_x3_t4_g4_t1_ParamLimits

0x83d1,	// (0x0002aa79) list_medium_line_x3_t4_g4_t1

0x83e8,	// (0x0002aa90) list_medium_line_x3_t4_g4_t2_ParamLimits

0x83e8,	// (0x0002aa90) list_medium_line_x3_t4_g4_t2

0xac62,	// (0x0002d30a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xac62,	// (0x0002d30a) list_medium_line_x3_t4_g4_t3

0xec30,	// (0x000312d8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xec30,	// (0x000312d8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd46,	// (0x000323ee) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd46,	// (0x000323ee) list_medium_line_x3_t4_g4_t

0x98b7,	// (0x0002bf5f) list_single_dyc_row_text_pane_t1_ParamLimits

0x98b7,	// (0x0002bf5f) list_single_dyc_row_text_pane_t1

0x98ee,	// (0x0002bf96) list_single_dyc_row_text_pane_t2_ParamLimits

0x98ee,	// (0x0002bf96) list_single_dyc_row_text_pane_t2

0xec4d,	// (0x000312f5) list_single_dyc_row_text_pane_t3_ParamLimits

0xec4d,	// (0x000312f5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4f,	// (0x000323f7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4f,	// (0x000323f7) list_single_dyc_row_text_pane_t

0xec5f,	// (0x00031307) list_single_dyc_row_pane_g1_ParamLimits

0xec5f,	// (0x00031307) list_single_dyc_row_pane_g1

0xec6b,	// (0x00031313) list_single_dyc_row_pane_g2_ParamLimits

0xec6b,	// (0x00031313) list_single_dyc_row_pane_g2

0xec77,	// (0x0003131f) list_single_dyc_row_pane_g3_ParamLimits

0xec77,	// (0x0003131f) list_single_dyc_row_pane_g3

0xec83,	// (0x0003132b) list_single_dyc_row_pane_g4_ParamLimits

0xec83,	// (0x0003132b) list_single_dyc_row_pane_g4

0x0003,

0xfd56,	// (0x000323fe) list_single_dyc_row_pane_g_ParamLimits

0xfd56,	// (0x000323fe) list_single_dyc_row_pane_g

0xec8f,	// (0x00031337) list_single_dyc_row_text_pane_ParamLimits

0xec8f,	// (0x00031337) list_single_dyc_row_text_pane

0x2ee5,	// (0x0002558d) bg_sp_fs_scroll_pane

0xecae,	// (0x00031356) thumb_sp_fs_scroll_pane

0x4425,	// (0x00026acd) list_medium_line_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_g1

0xac4d,	// (0x0002d2f5) list_medium_line_t1_ParamLimits

0xac4d,	// (0x0002d2f5) list_medium_line_t1

0x4425,	// (0x00026acd) list_medium_line_x2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_g1

0x4431,	// (0x00026ad9) list_medium_line_x2_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x000320da) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x000320da) list_medium_line_x2_g

0xecb7,	// (0x0003135f) list_medium_line_x2_t1_ParamLimits

0xecb7,	// (0x0003135f) list_medium_line_x2_t1

0x4425,	// (0x00026acd) list_medium_line_x3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x3_g1

0x4431,	// (0x00026ad9) list_medium_line_x3_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x000320da) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x000320da) list_medium_line_x3_g

0xecb7,	// (0x0003135f) list_medium_line_x3_t1_ParamLimits

0xecb7,	// (0x0003135f) list_medium_line_x3_t1

0xeccd,	// (0x00031375) thumb_sp_fs_scroll_pane_g1

0xecd6,	// (0x0003137e) thumb_sp_fs_scroll_pane_g2

0xecdf,	// (0x00031387) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00032407) thumb_sp_fs_scroll_pane_g

0xeccd,	// (0x00031375) bg_sp_fs_scroll_pane_g1

0xecd6,	// (0x0003137e) bg_sp_fs_scroll_pane_g2

0xecdf,	// (0x00031387) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00032407) bg_sp_fs_scroll_pane_g

0x4425,	// (0x00026acd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_x2_t3_g4_g1

0x44ad,	// (0x00026b55) list_medium_line_x2_t3_g4_g2_ParamLimits

0x44ad,	// (0x00026b55) list_medium_line_x2_t3_g4_g2

0x4431,	// (0x00026ad9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_x2_t3_g4_g3

0x443d,	// (0x00026ae5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x443d,	// (0x00026ae5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0003198e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0003198e) list_medium_line_x2_t3_g4_g

0x9948,	// (0x0002bff0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9948,	// (0x0002bff0) list_medium_line_x2_t3_g4_t1

0x995e,	// (0x0002c006) list_medium_line_x2_t3_g4_t2_ParamLimits

0x995e,	// (0x0002c006) list_medium_line_x2_t3_g4_t2

0x4470,	// (0x00026b18) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4470,	// (0x00026b18) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0003240e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0003240e) list_medium_line_x2_t3_g4_t

0x4425,	// (0x00026acd) list_medium_line_g2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_g2_g1

0x4431,	// (0x00026ad9) list_medium_line_g2_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x000320da) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x000320da) list_medium_line_g2_g

0x5382,	// (0x00027a2a) list_medium_line_g2_t1_ParamLimits

0x5382,	// (0x00027a2a) list_medium_line_g2_t1

0x4425,	// (0x00026acd) list_medium_line_t3_g2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t3_g2_g1

0x4431,	// (0x00026ad9) list_medium_line_t3_g2_g2_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x000320da) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x000320da) list_medium_line_t3_g2_g

0x9977,	// (0x0002c01f) list_medium_line_t3_g2_t1_ParamLimits

0x9977,	// (0x0002c01f) list_medium_line_t3_g2_t1

0x998e,	// (0x0002c036) list_medium_line_t3_g2_t2_ParamLimits

0x998e,	// (0x0002c036) list_medium_line_t3_g2_t2

0x99a3,	// (0x0002c04b) list_medium_line_t3_g2_t3_ParamLimits

0x99a3,	// (0x0002c04b) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x00032415) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x00032415) list_medium_line_t3_g2_t

0xeb5e,	// (0x00031206) list_medium_line_right_icon_g1

0xece8,	// (0x00031390) list_medium_line_right_icon_t1

0x4425,	// (0x00026acd) list_medium_line_t2_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t2_g1

0x99b8,	// (0x0002c060) list_medium_line_t2_t1_ParamLimits

0x99b8,	// (0x0002c060) list_medium_line_t2_t1

0x99d2,	// (0x0002c07a) list_medium_line_t2_t2_ParamLimits

0x99d2,	// (0x0002c07a) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0003241c) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0003241c) list_medium_line_t2_t

0x4425,	// (0x00026acd) list_medium_line_t3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t3_g1

0x984d,	// (0x0002bef5) list_medium_line_t3_t1_ParamLimits

0x984d,	// (0x0002bef5) list_medium_line_t3_t1

0x9867,	// (0x0002bf0f) list_medium_line_t3_t2_ParamLimits

0x9867,	// (0x0002bf0f) list_medium_line_t3_t2

0x987c,	// (0x0002bf24) list_medium_line_t3_t3_ParamLimits

0x987c,	// (0x0002bf24) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x00032421) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x00032421) list_medium_line_t3_t

0x4425,	// (0x00026acd) list_medium_line_g3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_g3_g1

0x44ad,	// (0x00026b55) list_medium_line_g3_g2_ParamLimits

0x44ad,	// (0x00026b55) list_medium_line_g3_g2

0x4431,	// (0x00026ad9) list_medium_line_g3_g3_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x00032428) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x00032428) list_medium_line_g3_g

0x536d,	// (0x00027a15) list_medium_line_g3_t1_ParamLimits

0x536d,	// (0x00027a15) list_medium_line_g3_t1

0x4425,	// (0x00026acd) list_medium_line_t2_g3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t2_g3_g1

0x44ad,	// (0x00026b55) list_medium_line_t2_g3_g2_ParamLimits

0x44ad,	// (0x00026b55) list_medium_line_t2_g3_g2

0x4431,	// (0x00026ad9) list_medium_line_t2_g3_g3_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x00032428) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x00032428) list_medium_line_t2_g3_g

0x99e7,	// (0x0002c08f) list_medium_line_t2_g3_t1_ParamLimits

0x99e7,	// (0x0002c08f) list_medium_line_t2_g3_t1

0x99fe,	// (0x0002c0a6) list_medium_line_t2_g3_t2_ParamLimits

0x99fe,	// (0x0002c0a6) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0003242f) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0003242f) list_medium_line_t2_g3_t

0x4425,	// (0x00026acd) list_medium_line_t3_g3_g1_ParamLimits

0x4425,	// (0x00026acd) list_medium_line_t3_g3_g1

0x44ad,	// (0x00026b55) list_medium_line_t3_g3_g2_ParamLimits

0x44ad,	// (0x00026b55) list_medium_line_t3_g3_g2

0x4431,	// (0x00026ad9) list_medium_line_t3_g3_g3_ParamLimits

0x4431,	// (0x00026ad9) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x00032428) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x00032428) list_medium_line_t3_g3_g

0x9a13,	// (0x0002c0bb) list_medium_line_t3_g3_t1_ParamLimits

0x9a13,	// (0x0002c0bb) list_medium_line_t3_g3_t1

0x9a2c,	// (0x0002c0d4) list_medium_line_t3_g3_t2_ParamLimits

0x9a2c,	// (0x0002c0d4) list_medium_line_t3_g3_t2

0x9a42,	// (0x0002c0ea) list_medium_line_t3_g3_t3_ParamLimits

0x9a42,	// (0x0002c0ea) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x00032434) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x00032434) list_medium_line_t3_g3_t

0xec1c,	// (0x000312c4) list_medium_line_right_iconx2_g1

0xeb5e,	// (0x00031206) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0003243b) list_medium_line_right_iconx2_g

0xecf6,	// (0x0003139e) list_medium_line_right_iconx2_t1

0xec1c,	// (0x000312c4) list_medium_line_t2_right_iconx2_g1

0xeb5e,	// (0x00031206) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0003243b) list_medium_line_t2_right_iconx2_g

0x9a58,	// (0x0002c100) list_medium_line_t2_right_iconx2_t1

0x9a68,	// (0x0002c110) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00032440) list_medium_line_t2_right_iconx2_t

0xdac7,	// (0x0003016f) list_medium_line_x4_t4_t1

0x9a76,	// (0x0002c11e) list_medium_line_x4_t4_t2

0x9a86,	// (0x0002c12e) list_medium_line_x4_t4_t3

0x9a96,	// (0x0002c13e) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x00032445) list_medium_line_x4_t4_t

0x9ae1,	// (0x0002c189) tport_appsw_pane_ParamLimits

0x9ae1,	// (0x0002c189) tport_appsw_pane

0x9af2,	// (0x0002c19a) tport_contact_pane_ParamLimits

0x9af2,	// (0x0002c19a) tport_contact_pane

0x9b07,	// (0x0002c1af) tport_listscroll_pane_ParamLimits

0x9b07,	// (0x0002c1af) tport_listscroll_pane

0x9b20,	// (0x0002c1c8) cell_tport_appsw_pane_ParamLimits

0x9b20,	// (0x0002c1c8) cell_tport_appsw_pane

0xd80d,	// (0x0002feb5) tport_appsw_pane_g1_ParamLimits

0xd80d,	// (0x0002feb5) tport_appsw_pane_g1

0xed04,	// (0x000313ac) tport_contact_pane_g1

0xed0d,	// (0x000313b5) tport_contact_pane_t1

0xed1b,	// (0x000313c3) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0003244e) tport_contact_pane_t

0xed29,	// (0x000313d1) list_tport_pane

0x3cb7,	// (0x0002635f) scroll_pane_cp_030

0xed3a,	// (0x000313e2) cell_tport_appsw_pane_g1

0xed4a,	// (0x000313f2) cell_tport_appsw_pane_t1

0x2ee5,	// (0x0002558d) grid_highlight_pane_cp019

0x9b56,	// (0x0002c1fe) list_tport_double_graphic_pane_ParamLimits

0x9b56,	// (0x0002c1fe) list_tport_double_graphic_pane

0x310f,	// (0x000257b7) list_highlight_pane_cp023_ParamLimits

0x310f,	// (0x000257b7) list_highlight_pane_cp023

0x9b63,	// (0x0002c20b) list_tport_double_graphic_pane_g1_ParamLimits

0x9b63,	// (0x0002c20b) list_tport_double_graphic_pane_g1

0x9b70,	// (0x0002c218) list_tport_double_graphic_pane_t1_ParamLimits

0x9b70,	// (0x0002c218) list_tport_double_graphic_pane_t1

0x9b85,	// (0x0002c22d) list_tport_double_graphic_pane_t2_ParamLimits

0x9b85,	// (0x0002c22d) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0003245a) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0003245a) list_tport_double_graphic_pane_t

0x2ee5,	// (0x0002558d) main_cale_note_pane

0x2bd9,	// (0x00025281) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2bd9,	// (0x00025281) cell_vitu2_function_top_wide_pane_cp01

0x928f,	// (0x0002b937) wait_bar_pane_cp05_ParamLimits

0x2ee5,	// (0x0002558d) listscroll_cmail_pane

0xed58,	// (0x00031400) list_cmail_pane

0x9b97,	// (0x0002c23f) list_cmail_body_pane

0x9b97,	// (0x0002c23f) list_single_cmail_header_caption_pane

0x9bad,	// (0x0002c255) list_single_cmail_header_detail_pane_ParamLimits

0x9bad,	// (0x0002c255) list_single_cmail_header_detail_pane

0xed74,	// (0x0003141c) list_single_cmail_header_caption_pane_t1

0x9bd5,	// (0x0002c27d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9bd5,	// (0x0002c27d) list_single_cmail_header_detail_pane_g1

0xed8a,	// (0x00031432) list_single_cmail_header_detail_pane_g2_ParamLimits

0xed8a,	// (0x00031432) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0003245f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0003245f) list_single_cmail_header_detail_pane_g

0xeda3,	// (0x0003144b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xeda3,	// (0x0003144b) list_single_cmail_header_detail_pane_t1

0xedd5,	// (0x0003147d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xedd5,	// (0x0003147d) list_single_cmail_header_editor_pane_bg

0xede7,	// (0x0003148f) list_cmail_body_pane_g1

0xedf0,	// (0x00031498) list_cmail_body_pane_t1

0xd858,	// (0x0002ff00) list_single_cmail_header_editor_pane_bg_g1

0x4ab4,	// (0x0002715c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd868,	// (0x0002ff10) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd860,	// (0x0002ff08) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdaf1,	// (0x00030199) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd888,	// (0x0002ff30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd878,	// (0x0002ff20) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd880,	// (0x0002ff28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x4a94,	// (0x0002713c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9c0f,	// (0x0002c2b7) calenote_gesture_pane_ParamLimits

0x9c0f,	// (0x0002c2b7) calenote_gesture_pane

0x9c2b,	// (0x0002c2d3) calenote_window_pane_ParamLimits

0x9c2b,	// (0x0002c2d3) calenote_window_pane

0xedfe,	// (0x000314a6) popup_note_window_cp01

0x9c47,	// (0x0002c2ef) calenote_swipe_1_pane_ParamLimits

0x9c47,	// (0x0002c2ef) calenote_swipe_1_pane

0x9692,	// (0x0002bd3a) calenote_swipe_2_pane_ParamLimits

0x9692,	// (0x0002bd3a) calenote_swipe_2_pane

0xeaaf,	// (0x00031157) calenote_swipe_1_pane_g1_ParamLimits

0xeaaf,	// (0x00031157) calenote_swipe_1_pane_g1

0xeabc,	// (0x00031164) calenote_swipe_1_pane_g2_ParamLimits

0xeabc,	// (0x00031164) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x00032398) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x00032398) calenote_swipe_1_pane_g

0xee10,	// (0x000314b8) calenote_swipe_1_pane_t1_ParamLimits

0xee10,	// (0x000314b8) calenote_swipe_1_pane_t1

0xeaaf,	// (0x00031157) calenote_swipe_2_pane_g1_ParamLimits

0xeaaf,	// (0x00031157) calenote_swipe_2_pane_g1

0xee2f,	// (0x000314d7) calenote_swipe_2_pane_g2_ParamLimits

0xee2f,	// (0x000314d7) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0003246b) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0003246b) calenote_swipe_2_pane_g

0xee3b,	// (0x000314e3) calenote_swipe_2_pane_t1_ParamLimits

0xee3b,	// (0x000314e3) calenote_swipe_2_pane_t1

0x2ee5,	// (0x0002558d) main_mup_navstr_pane

0x7235,	// (0x000298dd) main_mup3_pane_t7_ParamLimits

0x7235,	// (0x000298dd) main_mup3_pane_t7

0xd443,	// (0x0002faeb) main_mp4_pane_g6_ParamLimits

0xd443,	// (0x0002faeb) main_mp4_pane_g6

0xd685,	// (0x0002fd2d) main_image3_pane_t4_ParamLimits

0xd685,	// (0x0002fd2d) main_image3_pane_t4

0x9c5c,	// (0x0002c304) popup_navstr_preview_pane_ParamLimits

0x9c5c,	// (0x0002c304) popup_navstr_preview_pane

0x9c6c,	// (0x0002c314) scroll_navstr_pane_ParamLimits

0x9c6c,	// (0x0002c314) scroll_navstr_pane

0x2ee5,	// (0x0002558d) bg_popup_preview_window_pane_cp04

0xee62,	// (0x0003150a) popup_navstr_preview_pane_t1

0x9c80,	// (0x0002c328) scroll_navstr_pane_g1_ParamLimits

0x9c80,	// (0x0002c328) scroll_navstr_pane_g1

0x9c94,	// (0x0002c33c) scroll_navstr_pane_t1_ParamLimits

0x9c94,	// (0x0002c33c) scroll_navstr_pane_t1

0xee07,	// (0x000314af) bg_button_pane_cp014

0xee07,	// (0x000314af) bg_button_pane_cp030

0x9550,	// (0x0002bbf8) list_double_fisheye_pane_g4_ParamLimits

0x9550,	// (0x0002bbf8) list_double_fisheye_pane_g4

0x955c,	// (0x0002bc04) list_double_fisheye_pane_g5_ParamLimits

0x955c,	// (0x0002bc04) list_double_fisheye_pane_g5

0xed68,	// (0x00031410) sp_fs_scroll_pane_cp03

0xebae,	// (0x00031256) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xebba,	// (0x00031262) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x000323b5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xebc6,	// (0x0003126e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xed60,	// (0x00031408) sp_fs_scroll_pane_cp02

0x3cf3,	// (0x0002639b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3cf3,	// (0x0002639b) popup_sp_fs_calendar_preview_list_single_pane

0x2ee5,	// (0x0002558d) main_cam6_pano_pane

0x310f,	// (0x000257b7) main_mup3_pane_ParamLimits

0x2ee5,	// (0x0002558d) main_phacti_pane

0x9182,	// (0x0002b82a) bg_button_pane_cp11

0x919a,	// (0x0002b842) main_mobtv_info_pane_g2_ParamLimits

0x919a,	// (0x0002b842) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x00032315) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x00032315) main_mobtv_info_pane_g

0x934d,	// (0x0002b9f5) sc_clock_pane_t5_ParamLimits

0x934d,	// (0x0002b9f5) sc_clock_pane_t5

0x93c0,	// (0x0002ba68) main_radioblah_pane_g1_ParamLimits

0xe9f2,	// (0x0003109a) main_radioblah_pane_t3_ParamLimits

0xe9f2,	// (0x0003109a) main_radioblah_pane_t3

0xea0a,	// (0x000310b2) main_radioblah_pane_t4_ParamLimits

0xea0a,	// (0x000310b2) main_radioblah_pane_t4

0x93e8,	// (0x0002ba90) main_radioblah_text_pane_ParamLimits

0x93e8,	// (0x0002ba90) main_radioblah_text_pane

0x93fa,	// (0x0002baa2) main_radioblah_info_pane_g1_ParamLimits

0x948d,	// (0x0002bb35) main_radioblah_info_pane_t4_ParamLimits

0x948d,	// (0x0002bb35) main_radioblah_info_pane_t4

0x310f,	// (0x000257b7) main_sp_fs_calendar_pane

0x9caa,	// (0x0002c352) main_phacti_pane_g1

0x9cb2,	// (0x0002c35a) phacti_note_pane_ParamLimits

0x9cb2,	// (0x0002c35a) phacti_note_pane

0xee79,	// (0x00031521) phacti_term_pane_ParamLimits

0xee79,	// (0x00031521) phacti_term_pane

0xee8e,	// (0x00031536) phacti_note_pane_t1_ParamLimits

0xee8e,	// (0x00031536) phacti_note_pane_t1

0xeea5,	// (0x0003154d) phacti_term_pane_g1

0xeead,	// (0x00031555) phacti_term_pane_t1_ParamLimits

0xeead,	// (0x00031555) phacti_term_pane_t1

0xeed7,	// (0x0003157f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xeedf,	// (0x00031587) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x00032475) popup_sp_fs_calendar_preview_list_single_pane_g

0xeee7,	// (0x0003158f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeee7,	// (0x0003158f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeefd,	// (0x000315a5) aid_popup_sp_fs_bg_corner_pane

0xcb42,	// (0x0002f1ea) popup_sp_fs_calendar_preview_bg_pane_g1

0x2ee5,	// (0x0002558d) popup_sp_fs_calendar_preview_bg_pane

0xef05,	// (0x000315ad) popup_sp_fs_calendar_preview_list_pane

0x310f,	// (0x000257b7) bg_main_sp_fs_cale_pane_ParamLimits

0x310f,	// (0x000257b7) bg_main_sp_fs_cale_pane

0xef16,	// (0x000315be) listscroll_cale_mrui_pane_ParamLimits

0xef16,	// (0x000315be) listscroll_cale_mrui_pane

0xef2a,	// (0x000315d2) listscroll_sp_fs_schedule_track_pane

0xef33,	// (0x000315db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xef33,	// (0x000315db) main_sp_fs_ctrlbar_pane_cp01

0xef44,	// (0x000315ec) main_sp_fs_ribbon_pane

0xef4c,	// (0x000315f4) popup_sp_fs_cale_preview_window

0x9d01,	// (0x0002c3a9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9d01,	// (0x0002c3a9) list_single_sp_fs_schedule_track_pane

0x310f,	// (0x000257b7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x310f,	// (0x000257b7) bg_sp_fs_highlight_list_pane_cp03

0x9d14,	// (0x0002c3bc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9d14,	// (0x0002c3bc) list_single_sp_fs_schedule_track_pane_g1

0x9d20,	// (0x0002c3c8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9d20,	// (0x0002c3c8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0003247a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0003247a) list_single_sp_fs_schedule_track_pane_g

0x9d2c,	// (0x0002c3d4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9d2c,	// (0x0002c3d4) list_single_sp_fs_schedule_track_pane_t1

0x9d46,	// (0x0002c3ee) sp_fs_schedule_track_pane_ParamLimits

0x9d46,	// (0x0002c3ee) sp_fs_schedule_track_pane

0xef5e,	// (0x00031606) sp_fs_schedule_track_pane_g1

0xef66,	// (0x0003160e) sp_fs_schedule_track_pane_g2

0xef6e,	// (0x00031616) sp_fs_schedule_track_pane_g3

0xef76,	// (0x0003161e) sp_fs_schedule_track_pane_g4

0xef7e,	// (0x00031626) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0003247f) sp_fs_schedule_track_pane_g

0xd858,	// (0x0002ff00) bg_sp_fs_schedule_viewer_highlight_g1

0x4ab4,	// (0x0002715c) bg_sp_fs_schedule_viewer_highlight_g2

0xd860,	// (0x0002ff08) bg_sp_fs_schedule_viewer_highlight_g3

0xd868,	// (0x0002ff10) bg_sp_fs_schedule_viewer_highlight_g4

0xdaf1,	// (0x00030199) bg_sp_fs_schedule_viewer_highlight_g5

0xd878,	// (0x0002ff20) bg_sp_fs_schedule_viewer_highlight_g6

0xd880,	// (0x0002ff28) bg_sp_fs_schedule_viewer_highlight_g7

0xd888,	// (0x0002ff30) bg_sp_fs_schedule_viewer_highlight_g8

0x4a94,	// (0x0002713c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0003248a) bg_sp_fs_schedule_viewer_highlight_g

0x2ee5,	// (0x0002558d) bg_main_sp_fs_ribbon_pane

0x9d57,	// (0x0002c3ff) main_sp_fs_ribbon_pane_g1

0xef86,	// (0x0003162e) main_sp_fs_ribbon_pane_t1

0x9d60,	// (0x0002c408) main_sp_fs_ribbon_pane_t2

0xef95,	// (0x0003163d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0003249d) main_sp_fs_ribbon_pane_t

0xefa4,	// (0x0003164c) main_sp_fs_ribbon_scheduler_pane

0xefac,	// (0x00031654) bg_main_sp_fs_ribbon_pane_g1

0xefb5,	// (0x0003165d) bg_main_sp_fs_ribbon_pane_g2

0xefbe,	// (0x00031666) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x000324a4) bg_main_sp_fs_ribbon_pane_g

0xefc6,	// (0x0003166e) main_sp_fs_ribbon_scheduler_pane_g1

0xefcf,	// (0x00031677) main_sp_fs_ribbon_scheduler_pane_g2

0xefd8,	// (0x00031680) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x000324ab) main_sp_fs_ribbon_scheduler_pane_g

0xea64,	// (0x0003110c) list_cale_mrui_pane

0xefe1,	// (0x00031689) sp_fs_scroll_pane_cp07_ParamLimits

0xefe1,	// (0x00031689) sp_fs_scroll_pane_cp07

0x9d6f,	// (0x0002c417) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9d6f,	// (0x0002c417) bg_sp_fs_schedule_viewer_highlight

0xeff6,	// (0x0003169e) list_single_sp_fs_schedule_track_pane_cp01

0xeffe,	// (0x000316a6) list_sp_fs_schedule_track_pane

0xf006,	// (0x000316ae) sp_fs_scroll_pane_cp06_ParamLimits

0xf006,	// (0x000316ae) sp_fs_scroll_pane_cp06

0xcb42,	// (0x0002f1ea) bgmain_sp_fs_calendar_pane_g1

0x9d7f,	// (0x0002c427) list_single_cale_mrui_pane_ParamLimits

0x9d7f,	// (0x0002c427) list_single_cale_mrui_pane

0xf018,	// (0x000316c0) list_single_cale_mrui_row_pane_ParamLimits

0xf018,	// (0x000316c0) list_single_cale_mrui_row_pane

0xf025,	// (0x000316cd) list_single_cale_mrui_row_pane_g1_ParamLimits

0xf025,	// (0x000316cd) list_single_cale_mrui_row_pane_g1

0xf05d,	// (0x00031705) list_single_cale_mrui_row_pane_t1_ParamLimits

0xf05d,	// (0x00031705) list_single_cale_mrui_row_pane_t1

0x9da2,	// (0x0002c44a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9da2,	// (0x0002c44a) list_single_cale_mrui_row_pane_t2

0xf08e,	// (0x00031736) list_single_cale_mrui_row_pane_t3_ParamLimits

0xf08e,	// (0x00031736) list_single_cale_mrui_row_pane_t3

0xf0bd,	// (0x00031765) list_single_cale_mrui_row_pane_t4_ParamLimits

0xf0bd,	// (0x00031765) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x000324b7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x000324b7) list_single_cale_mrui_row_pane_t

0x9e08,	// (0x0002c4b0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9e08,	// (0x0002c4b0) list_single_cmail_header_editor_pane_bg_cp01

0x9e2c,	// (0x0002c4d4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9e2c,	// (0x0002c4d4) list_single_cmail_header_editor_pane_bg_cp02

0x9e4a,	// (0x0002c4f2) main_radioblah_text_pane_t1_ParamLimits

0x9e4a,	// (0x0002c4f2) main_radioblah_text_pane_t1

0x0004,	// (0x000226ac) cam6_indi_pane_cp01

0x000c,	// (0x000226b4) cam6_mode_pane_cp01

0x0014,	// (0x000226bc) cam6_pano_pane

0x001d,	// (0x000226c5) cam6_zoom_pane_cp01

0x0025,	// (0x000226cd) cam6_pano_image_pane

0x002e,	// (0x000226d6) cam6_pano_pane_g1

0xe770,	// (0x00030e18) cam6_pano_pane_g2

0x0037,	// (0x000226df) cam6_pano_pane_g3

0x0040,	// (0x000226e8) cam6_pano_pane_g4

0xd0a8,	// (0x0002f750) cam6_pano_pane_g5

0x0049,	// (0x000226f1) cam6_pano_pane_g6

0x0051,	// (0x000226f9) cam6_pano_pane_g7

0x0059,	// (0x00022701) cam6_pano_pane_g8

0x0062,	// (0x0002270a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x000324c0) cam6_pano_pane_g

0x2ee5,	// (0x0002558d) main_browser_tag_pane

0xee5a,	// (0x00031502) grid_navstr_albumart_pane

0x006b,	// (0x00022713) cell_navstr_albumart_pane_ParamLimits

0x006b,	// (0x00022713) cell_navstr_albumart_pane

0xb2e0,	// (0x0002d988) cell_navstr_albumart_pane_g1

0xc42a,	// (0x0002ead2) cell_navstr_albumart_pane_g2

0xc43a,	// (0x0002eae2) cell_navstr_albumart_pane_g3

0xc432,	// (0x0002eada) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x000324d3) cell_navstr_albumart_pane_g

0x9e63,	// (0x0002c50b) bt_list_pane_ParamLimits

0x9e63,	// (0x0002c50b) bt_list_pane

0x9e76,	// (0x0002c51e) bt_list_pane_t1

0x9e85,	// (0x0002c52d) bt_list_pane_t2

0x0001,

0xfe34,	// (0x000324dc) bt_list_pane_t

0x2ee5,	// (0x0002558d) main_cale_prevew_pane

0x9e94,	// (0x0002c53c) popup_cale_preview_window_ParamLimits

0x9e94,	// (0x0002c53c) popup_cale_preview_window

0x310f,	// (0x000257b7) bg_popup_preview_window_pane_cp05_ParamLimits

0x310f,	// (0x000257b7) bg_popup_preview_window_pane_cp05

0x00ca,	// (0x00022772) list_cale_preview_pane_ParamLimits

0x00ca,	// (0x00022772) list_cale_preview_pane

0x9ea9,	// (0x0002c551) list_double_cale_preview_pane_ParamLimits

0x9ea9,	// (0x0002c551) list_double_cale_preview_pane

0x9eba,	// (0x0002c562) list_single_cale_preview_pane_ParamLimits

0x9eba,	// (0x0002c562) list_single_cale_preview_pane

0x0118,	// (0x000227c0) list_single_cale_preview_pane_g1

0x0120,	// (0x000227c8) list_single_cale_preview_pane_t1_ParamLimits

0x0120,	// (0x000227c8) list_single_cale_preview_pane_t1

0x9ece,	// (0x0002c576) list_double_cale_preview_pane_g1

0x9ed6,	// (0x0002c57e) list_double_cale_preview_pane_t1_ParamLimits

0x9ed6,	// (0x0002c57e) list_double_cale_preview_pane_t1

0x9eeb,	// (0x0002c593) list_double_cale_preview_pane_t2_ParamLimits

0x9eeb,	// (0x0002c593) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x000324e1) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x000324e1) list_double_cale_preview_pane_t

0x2ee5,	// (0x0002558d) main_ezdial_pane

0x310f,	// (0x000257b7) main_sp_fs_email_pane_ParamLimits

0x96e8,	// (0x0002bd90) cmail_ddmenu_btn01_pane_ParamLimits

0x96e8,	// (0x0002bd90) cmail_ddmenu_btn01_pane

0x96fb,	// (0x0002bda3) cmail_ddmenu_btn02_pane_ParamLimits

0x96fb,	// (0x0002bda3) cmail_ddmenu_btn02_pane

0x971e,	// (0x0002bdc6) cmail_ddmenu_btn03_pane_ParamLimits

0x971e,	// (0x0002bdc6) cmail_ddmenu_btn03_pane

0x9743,	// (0x0002bdeb) main_sp_fs_ctrlbar_pane_ParamLimits

0x9764,	// (0x0002be0c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9b97,	// (0x0002c23f) list_cmail_body_pane_ParamLimits

0xed82,	// (0x0003142a) bg_button_pane_cp12

0xed96,	// (0x0003143e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xed96,	// (0x0003143e) list_single_cmail_header_detail_pane_g3

0x9beb,	// (0x0002c293) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9beb,	// (0x0002c293) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x00032466) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x00032466) list_single_cmail_header_detail_pane_t

0xeec2,	// (0x0003156a) phacti_term_pane_t2_ParamLimits

0xeec2,	// (0x0003156a) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00032470) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00032470) phacti_term_pane_t

0x014d,	// (0x000227f5) aid_size_list_single_double

0x9f03,	// (0x0002c5ab) popup_ezdial_listscroll_window

0x9f19,	// (0x0002c5c1) popup_number_entry_window_cp01

0xb157,	// (0x0002d7ff) bg_popup_call_pane_cp09

0x017e,	// (0x00022826) ezdial_list_pane

0x0186,	// (0x0002282e) scroll_pane_cp23

0xc64d,	// (0x0002ecf5) bg_button_pane_cp028_ParamLimits

0xc64d,	// (0x0002ecf5) bg_button_pane_cp028

0x9f25,	// (0x0002c5cd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9f25,	// (0x0002c5cd) cmail_ddmenu_btn01_pane_g1

0x9f34,	// (0x0002c5dc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9f34,	// (0x0002c5dc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x000324e6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x000324e6) cmail_ddmenu_btn01_pane_g

0x01ac,	// (0x00022854) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x01ac,	// (0x00022854) cmail_ddmenu_btn01_pane_t1

0xc64d,	// (0x0002ecf5) bg_button_pane_cp029_ParamLimits

0xc64d,	// (0x0002ecf5) bg_button_pane_cp029

0x9f44,	// (0x0002c5ec) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9f44,	// (0x0002c5ec) cmail_ddmenu_btn02_pane_g1

0x9f5f,	// (0x0002c607) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9f5f,	// (0x0002c607) cmail_ddmenu_btn02_pane_t1

0x310f,	// (0x000257b7) bg_button_pane_cp031_ParamLimits

0x310f,	// (0x000257b7) bg_button_pane_cp031

0x9f44,	// (0x0002c5ec) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9f44,	// (0x0002c5ec) cmail_ddmenu_btn03_pane_g1

0x9f5f,	// (0x0002c607) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9f5f,	// (0x0002c607) cmail_ddmenu_btn03_pane_t1

0x7b82,	// (0x0002a22a) cell_dialer2_keypad_pane_t1_ParamLimits

0x7b9c,	// (0x0002a244) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7b9c,	// (0x0002a244) cell_dialer2_keypad_pane_t1_copy1

0x9009,	// (0x0002b6b1) ncimui_group_button_pane

0x310f,	// (0x000257b7) main_sp_fs_calendar_pane_ParamLimits

0x9b97,	// (0x0002c23f) list_single_cmail_header_caption_pane_ParamLimits

0xef0d,	// (0x000315b5) aid_recal_txt_sm_pane

0x2ee5,	// (0x0002558d) mian_recal_day_pane

0xef4c,	// (0x000315f4) popup_sp_fs_cale_preview_window_ParamLimits

0x2ee5,	// (0x0002558d) list_recal_day_pane

0x020a,	// (0x000228b2) list_single_recal_day_pane_ParamLimits

0x020a,	// (0x000228b2) list_single_recal_day_pane

0x021c,	// (0x000228c4) list_single_recal_day_pane_g1_ParamLimits

0x021c,	// (0x000228c4) list_single_recal_day_pane_g1

0x0228,	// (0x000228d0) list_single_recal_day_pane_g2_ParamLimits

0x0228,	// (0x000228d0) list_single_recal_day_pane_g2

0x0234,	// (0x000228dc) list_single_recal_day_pane_g3_ParamLimits

0x0234,	// (0x000228dc) list_single_recal_day_pane_g3

0x9f86,	// (0x0002c62e) list_single_recal_day_pane_g4_ParamLimits

0x9f86,	// (0x0002c62e) list_single_recal_day_pane_g4

0x024c,	// (0x000228f4) list_single_recal_day_pane_g5_ParamLimits

0x024c,	// (0x000228f4) list_single_recal_day_pane_g5

0x0258,	// (0x00022900) list_single_recal_day_pane_g6_ParamLimits

0x0258,	// (0x00022900) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x000324f5) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x000324f5) list_single_recal_day_pane_g

0x0264,	// (0x0002290c) list_single_recal_day_pane_t1

0x0272,	// (0x0002291a) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00032502) list_single_recal_day_pane_t

0x9f94,	// (0x0002c63c) ncimui_query_button_pane_ParamLimits

0x9f94,	// (0x0002c63c) ncimui_query_button_pane

0x9fa4,	// (0x0002c64c) ncimui_query_button_pane_t1_ParamLimits

0x9fa4,	// (0x0002c64c) ncimui_query_button_pane_t1

0x02a3,	// (0x0002294b) ncimui_query_button_pane_t2_ParamLimits

0x02a3,	// (0x0002294b) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x00032507) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x00032507) ncimui_query_button_pane_t

0x9fb7,	// (0x0002c65f) query_button_pane_ParamLimits

0x9fb7,	// (0x0002c65f) query_button_pane

0x2ee5,	// (0x0002558d) bg_button_pane_cp0028

0x02c3,	// (0x0002296b) query_button_pane_t1

0x647b,	// (0x00028b23) main_tport_pane_ParamLimits

0x9aa6,	// (0x0002c14e) bg_popup_window_pane_cp01_ParamLimits

0x9aa6,	// (0x0002c14e) bg_popup_window_pane_cp01

0x9abe,	// (0x0002c166) heading_pane_cp08_ParamLimits

0x9abe,	// (0x0002c166) heading_pane_cp08

0x9ad0,	// (0x0002c178) heading_pane_cp07_ParamLimits

0x9ad0,	// (0x0002c178) heading_pane_cp07

0xed3a,	// (0x000313e2) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x00032453) cell_tport_appsw_pane_g

0xb2d8,	// (0x0002d980) input_candi_list_open_g1

0xaaac,	// (0x0002d154) list_cale_time_pane_g6_ParamLimits

0xaaac,	// (0x0002d154) list_cale_time_pane_g6

0x6d26,	// (0x000293ce) aid_size_touch_calib_1_ParamLimits

0x6d26,	// (0x000293ce) aid_size_touch_calib_1

0x6d32,	// (0x000293da) aid_size_touch_calib_2_ParamLimits

0x6d32,	// (0x000293da) aid_size_touch_calib_2

0x6d46,	// (0x000293ee) aid_size_touch_calib_3_ParamLimits

0x6d46,	// (0x000293ee) aid_size_touch_calib_3

0x6d5e,	// (0x00029406) aid_size_touch_calib_4_ParamLimits

0x6d5e,	// (0x00029406) aid_size_touch_calib_4

0x6d70,	// (0x00029418) main_touch_calib_button_group_pane_ParamLimits

0x6d70,	// (0x00029418) main_touch_calib_button_group_pane

0x6d87,	// (0x0002942f) main_touch_calib_pane_g1_ParamLimits

0x6d93,	// (0x0002943b) main_touch_calib_pane_g2_ParamLimits

0x6d9f,	// (0x00029447) main_touch_calib_pane_g3_ParamLimits

0x6dab,	// (0x00029453) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x00031e30) main_touch_calib_pane_g_ParamLimits

0x6db7,	// (0x0002945f) main_touch_calib_pane_t1_ParamLimits

0x6dcf,	// (0x00029477) main_touch_calib_pane_t2_ParamLimits

0x6de7,	// (0x0002948f) main_touch_calib_pane_t3_ParamLimits

0x6df9,	// (0x000294a1) main_touch_calib_pane_t4_ParamLimits

0x6e0b,	// (0x000294b3) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x00031e39) main_touch_calib_pane_t_ParamLimits

0xced3,	// (0x0002f57b) list_single_fp_cale_pane_g3_ParamLimits

0xced3,	// (0x0002f57b) list_single_fp_cale_pane_g3

0xd840,	// (0x0002fee8) bg_button_pane_cp012_ParamLimits

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp03_ParamLimits

0x2ddb,	// (0x00025483) cell_vitu2_function_top_pane_g1_ParamLimits

0xd840,	// (0x0002fee8) bg_vkb2_func_pane_cp04_ParamLimits

0x8fab,	// (0x0002b653) main_ncimui_button_group_pane_ParamLimits

0x8fab,	// (0x0002b653) main_ncimui_button_group_pane

0x8ff7,	// (0x0002b69f) main_ncimui_pane_t3_ParamLimits

0x8ff7,	// (0x0002b69f) main_ncimui_pane_t3

0xee70,	// (0x00031518) phacti_button_group_pane

0x014d,	// (0x000227f5) aid_size_list_single_double_ParamLimits

0x9f03,	// (0x0002c5ab) popup_ezdial_listscroll_window_ParamLimits

0x9f19,	// (0x0002c5c1) popup_number_entry_window_cp01_ParamLimits

0x9fc9,	// (0x0002c671) phacti_button_pane_ParamLimits

0x9fc9,	// (0x0002c671) phacti_button_pane

0x2ee5,	// (0x0002558d) bg_button_pane_cp14

0x02e0,	// (0x00022988) phacti_button_pane_t1

0x9fd8,	// (0x0002c680) main_touch_calib_button_pane_ParamLimits

0x9fd8,	// (0x0002c680) main_touch_calib_button_pane

0x3ae7,	// (0x0002618f) bg_button_pane_cp18_ParamLimits

0x3ae7,	// (0x0002618f) bg_button_pane_cp18

0x02fe,	// (0x000229a6) main_touch_calib_button_pane_t1_ParamLimits

0x02fe,	// (0x000229a6) main_touch_calib_button_pane_t1

0x0314,	// (0x000229bc) main_touch_calib_button_pane_t2_ParamLimits

0x0314,	// (0x000229bc) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0003250c) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0003250c) main_touch_calib_button_pane_t

0x2ee5,	// (0x0002558d) cell_ncimui_button_pane

0x2ee5,	// (0x0002558d) bg_button_pane_cp032

0x0332,	// (0x000229da) cell_ncimui_button_pane_t1

0xd665,	// (0x0002fd0d) image3_infobar_pane_ParamLimits

0xd665,	// (0x0002fd0d) image3_infobar_pane

0x9375,	// (0x0002ba1d) fs_bigclock_status_pane_ParamLimits

0x9375,	// (0x0002ba1d) fs_bigclock_status_pane

0x9382,	// (0x0002ba2a) main_fs_bigclock_clock_pane_ParamLimits

0x9382,	// (0x0002ba2a) main_fs_bigclock_clock_pane

0x9391,	// (0x0002ba39) main_fs_bigclock_indi_pane_ParamLimits

0x9391,	// (0x0002ba39) main_fs_bigclock_indi_pane

0x93a5,	// (0x0002ba4d) main_fs_bigclock_swipe_pane_ParamLimits

0x93a5,	// (0x0002ba4d) main_fs_bigclock_swipe_pane

0x2ee5,	// (0x0002558d) main_fs_clock_dumped_data

0xe87d,	// (0x00030f25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe87d,	// (0x00030f25) list_single_fs_bigclock_indicator_pane_g1

0xe897,	// (0x00030f3f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe897,	// (0x00030f3f) list_single_fs_bigclock_indicator_pane_g2

0xe8b1,	// (0x00030f59) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe8b1,	// (0x00030f59) list_single_fs_bigclock_indicator_pane_g3

0xe8cb,	// (0x00030f73) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe8cb,	// (0x00030f73) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x00032349) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x00032349) list_single_fs_bigclock_indicator_pane_g

0xe8ef,	// (0x00030f97) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe8ef,	// (0x00030f97) list_single_fs_bigclock_indicator_pane_t1

0xe917,	// (0x00030fbf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe917,	// (0x00030fbf) list_single_fs_bigclock_indicator_pane_t2

0xe93f,	// (0x00030fe7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe93f,	// (0x00030fe7) list_single_fs_bigclock_indicator_pane_t3

0xe967,	// (0x0003100f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe967,	// (0x0003100f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x00032354) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x00032354) list_single_fs_bigclock_indicator_pane_t

0x0340,	// (0x000229e8) image3_infobar_fav_pane_ParamLimits

0x0340,	// (0x000229e8) image3_infobar_fav_pane

0x0350,	// (0x000229f8) image3_infobar_loc_pane_ParamLimits

0x0350,	// (0x000229f8) image3_infobar_loc_pane

0x0364,	// (0x00022a0c) image3_infobar_time_pane_ParamLimits

0x0364,	// (0x00022a0c) image3_infobar_time_pane

0xcb42,	// (0x0002f1ea) image3_infobar_time_pane_g1

0x0374,	// (0x00022a1c) image3_infobar_time_pane_t1

0xcb42,	// (0x0002f1ea) image3_infobar_loc_pane_g1

0x0382,	// (0x00022a2a) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00032511) image3_infobar_loc_pane_g

0x038a,	// (0x00022a32) image3_infobar_loc_pane_t1

0xcb42,	// (0x0002f1ea) image3_infobar_fav_pane_g1

0x0398,	// (0x00022a40) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x00032516) image3_infobar_fav_pane_g

0x03a0,	// (0x00022a48) fs_bigclock_status_battery_pane

0x03a9,	// (0x00022a51) fs_bigclock_status_signal_pane

0x03b2,	// (0x00022a5a) fs_bigclock_status_title_pane

0x03bb,	// (0x00022a63) fs_bigclock_status_signal_pane_g1

0x03c4,	// (0x00022a6c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0003251b) fs_bigclock_status_signal_pane_g

0x03cc,	// (0x00022a74) fs_bigclock_status_battery_pane_g1

0x03d5,	// (0x00022a7d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00032520) fs_bigclock_status_battery_pane_g

0x03dd,	// (0x00022a85) fs_bigclock_status_title_pane_t1

0xcb42,	// (0x0002f1ea) main_fs_bigclock_clock_pane_g1

0x03eb,	// (0x00022a93) main_fs_bigclock_clock_pane_g2

0x03eb,	// (0x00022a93) main_fs_bigclock_clock_pane_g3

0x03eb,	// (0x00022a93) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x00032525) main_fs_bigclock_clock_pane_g

0x03f3,	// (0x00022a9b) main_fs_bigclock_clock_pane_t1

0x0401,	// (0x00022aa9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0003252e) main_fs_bigclock_clock_pane_t

0x0410,	// (0x00022ab8) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0410,	// (0x00022ab8) list_single_fs_bigclock_indicator_pane

0x9feb,	// (0x0002c693) list_single_fs_bigclock_pane_ParamLimits

0x9feb,	// (0x0002c693) list_single_fs_bigclock_pane

0x0488,	// (0x00022b30) main_fs_bigclock_indicator_pane_t1

0x0497,	// (0x00022b3f) list_single_fs_bigclock_pane_g1

0x049f,	// (0x00022b47) list_single_fs_bigclock_pane_t1

0xcb42,	// (0x0002f1ea) main_fs_bigclock_swipe_pane_g1

0x04dd,	// (0x00022b85) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0003253f) main_fs_bigclock_swipe_pane_g

0x04e5,	// (0x00022b8d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x04e5,	// (0x00022b8d) main_fs_bigclock_swipe_pane_t1

0x5534,	// (0x00027bdc) call_type_pane_ParamLimits

0x2ee5,	// (0x0002558d) main_btmg_pane

0xf051,	// (0x000316f9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xf051,	// (0x000316f9) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x000324b2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x000324b2) list_single_cale_mrui_row_pane_g

0x01fa,	// (0x000228a2) list_recal_vselct_arw_lo_pane

0x0202,	// (0x000228aa) list_recal_vselct_arw_up_pane

0x01f1,	// (0x00022899) list_recal_vselct_pane

0x0502,	// (0x00022baa) btmg_button_pane

0xa04b,	// (0x0002c6f3) main_btmg_pane_g1

0x2ee5,	// (0x0002558d) bg_button_pane_cp044

0x0512,	// (0x00022bba) btmg_button_pane_t1

0xc645,	// (0x0002eced) aid_listscroll_gen

0x310f,	// (0x000257b7) main_cntbar_detail_pane

0xed58,	// (0x00031400) list_cmail_folder_pane

0xed68,	// (0x00031410) sp_fs_scroll_pane_cp03_ParamLimits

0xf06f,	// (0x00031717) list_single_fs_dyc_pane_cp01_ParamLimits

0xf06f,	// (0x00031717) list_single_fs_dyc_pane_cp01

0x0538,	// (0x00022be0) aid_size_cmail_indent

0xdee9,	// (0x00030591) list_single_dyc_row_pane_cp01

0xa07b,	// (0x0002c723) cntbar_detail_list_pane_ParamLimits

0xa07b,	// (0x0002c723) cntbar_detail_list_pane

0xa0c1,	// (0x0002c769) main_cntbar_detail_cont_pane_ParamLimits

0xa0c1,	// (0x0002c769) main_cntbar_detail_cont_pane

0xa0d5,	// (0x0002c77d) scroll_pane_cp032_ParamLimits

0xa0d5,	// (0x0002c77d) scroll_pane_cp032

0xa0e1,	// (0x0002c789) cntbar_detail_list_event_pane_ParamLimits

0xa0e1,	// (0x0002c789) cntbar_detail_list_event_pane

0xa08b,	// (0x0002c733) cntbar_detail_list_shct_pane

0x05b9,	// (0x00022c61) aid_list_gen

0x3cb7,	// (0x0002635f) aid_scroll

0xde29,	// (0x000304d1) aid_size_touch_scroll_bar

0xf085,	// (0x0003172d) aid_list_double

0xa0f2,	// (0x0002c79a) aid_list_single

0xdefb,	// (0x000305a3) aid_list_single_lg

0xa0fb,	// (0x0002c7a3) aid_list_z_g_a_sm

0xa103,	// (0x0002c7ab) aid_list_z_g_d

0xa10b,	// (0x0002c7b3) aid_txt_z_prm

0xa119,	// (0x0002c7c1) aid_txt_z_prm_cp01

0xa127,	// (0x0002c7cf) aid_txt_z_sec

0xa135,	// (0x0002c7dd) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa135,	// (0x0002c7dd) main_cntbar_detail_cont_pane_g1

0xa149,	// (0x0002c7f1) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa149,	// (0x0002c7f1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00032544) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00032544) main_cntbar_detail_cont_pane_g

0x0627,	// (0x00022ccf) main_cntbar_detail_cont_pane_t1

0x0635,	// (0x00022cdd) main_cntbar_detail_cont_pane_t2

0x0643,	// (0x00022ceb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00032549) main_cntbar_detail_cont_pane_t

0xa159,	// (0x0002c801) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa159,	// (0x0002c801) cell_cntbar_detail_list_shct_pane

0x0663,	// (0x00022d0b) cntbar_detail_list_shct_pane_g1

0x066c,	// (0x00022d14) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00032550) cntbar_detail_list_shct_pane_g

0xa16b,	// (0x0002c813) cntbar_detail_list_event_pane_g1_ParamLimits

0xa16b,	// (0x0002c813) cntbar_detail_list_event_pane_g1

0xa177,	// (0x0002c81f) cntbar_detail_list_event_pane_g2_ParamLimits

0xa177,	// (0x0002c81f) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00032555) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00032555) cntbar_detail_list_event_pane_g

0xa1e3,	// (0x0002c88b) cntbar_detail_list_event_pane_t1_ParamLimits

0xa1e3,	// (0x0002c88b) cntbar_detail_list_event_pane_t1

0xa1f8,	// (0x0002c8a0) cntbar_detail_list_event_pane_t2_ParamLimits

0xa1f8,	// (0x0002c8a0) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00032562) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00032562) cntbar_detail_list_event_pane_t

0xcb42,	// (0x0002f1ea) cell_cntbar_detail_list_shct_pane_g1

0xb116,	// (0x0002d7be) navi_pane_mv_g3

0x310f,	// (0x000257b7) main_cntbar_detail_pane_ParamLimits

0x2ee5,	// (0x0002558d) main_notif_wgt_pane

0xd3d1,	// (0x0002fa79) aid_tch_main_mp4_pane_g4

0xd5db,	// (0x0002fc83) popup_slider_window_cp02

0x01f1,	// (0x00022899) list_recal_day_event_pane

0xa053,	// (0x0002c6fb) cntbar_detail_btn_pane_ParamLimits

0xa053,	// (0x0002c6fb) cntbar_detail_btn_pane

0xa066,	// (0x0002c70e) cntbar_detail_btn_pane_cp01_ParamLimits

0xa066,	// (0x0002c70e) cntbar_detail_btn_pane_cp01

0xa08b,	// (0x0002c733) cntbar_detail_list_shct_pane_ParamLimits

0xa09b,	// (0x0002c743) cntbar_detail_pane_g1_ParamLimits

0xa09b,	// (0x0002c743) cntbar_detail_pane_g1

0xa0ab,	// (0x0002c753) cntbar_detail_pane_t1_ParamLimits

0xa0ab,	// (0x0002c753) cntbar_detail_pane_t1

0xa183,	// (0x0002c82b) cntbar_detail_list_event_pane_g3_ParamLimits

0xa183,	// (0x0002c82b) cntbar_detail_list_event_pane_g3

0xa19b,	// (0x0002c843) cntbar_detail_list_event_pane_g4_ParamLimits

0xa19b,	// (0x0002c843) cntbar_detail_list_event_pane_g4

0xa1b3,	// (0x0002c85b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa1b3,	// (0x0002c85b) cntbar_detail_list_event_pane_g5

0xa1cb,	// (0x0002c873) cntbar_detail_list_event_pane_g6_ParamLimits

0xa1cb,	// (0x0002c873) cntbar_detail_list_event_pane_g6

0xa20d,	// (0x0002c8b5) cntbar_detail_list_event_pane_t3_ParamLimits

0xa20d,	// (0x0002c8b5) cntbar_detail_list_event_pane_t3

0xa21f,	// (0x0002c8c7) popup_notif_wgt_window_ParamLimits

0xa21f,	// (0x0002c8c7) popup_notif_wgt_window

0xa234,	// (0x0002c8dc) popup_submenu_window_cp01_ParamLimits

0xa234,	// (0x0002c8dc) popup_submenu_window_cp01

0xb157,	// (0x0002d7ff) bg_popup_window_pane_cp10

0x0743,	// (0x00022deb) listscroll_notif_wgt_pane

0x074b,	// (0x00022df3) list_notif_wgt_window

0x0754,	// (0x00022dfc) scroll_pane_cp033

0x075d,	// (0x00022e05) list_notif_wgt_row_pane_ParamLimits

0x075d,	// (0x00022e05) list_notif_wgt_row_pane

0x076f,	// (0x00022e17) aid_size_list_notif_wgt_del

0x0778,	// (0x00022e20) list_notif_wgt_row_pane_g1

0x0780,	// (0x00022e28) list_notif_wgt_row_pane_g2

0x0788,	// (0x00022e30) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00032569) list_notif_wgt_row_pane_g

0x0791,	// (0x00022e39) list_notif_wgt_row_pane_t1

0x079f,	// (0x00022e47) list_notif_wgt_row_pane_t2

0x07ad,	// (0x00022e55) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00032570) list_notif_wgt_row_pane_t

0xdb33,	// (0x000301db) list_recal_day_event_pane_g1

0x07bb,	// (0x00022e63) list_recal_day_event_pane_t1

0x2ee5,	// (0x0002558d) bg_button_pane_cp045

0xa244,	// (0x0002c8ec) cntbar_detail_btn_pane_t1

0xc64d,	// (0x0002ecf5) main_callh_pane_ParamLimits

0xc64d,	// (0x0002ecf5) main_callh_pane

0x2ee5,	// (0x0002558d) main_coverflow0_pane

0x2ee5,	// (0x0002558d) main_wgtman_pane

0x93b1,	// (0x0002ba59) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x93b1,	// (0x0002ba59) main_fs_bigclock_unlock_btn_pane

0xed32,	// (0x000313da) bg_button_pane_cp16

0xed42,	// (0x000313ea) cell_tport_appsw_pane_g3

0xa252,	// (0x0002c8fa) cf0_flow_pane_ParamLimits

0xa252,	// (0x0002c8fa) cf0_flow_pane

0x07e7,	// (0x00022e8f) listscroll_cf0_pane

0x07f0,	// (0x00022e98) main_cf0_pane_g1

0xa267,	// (0x0002c90f) main_cf0_pane_t1_ParamLimits

0xa267,	// (0x0002c90f) main_cf0_pane_t1

0xa27c,	// (0x0002c924) main_cf0_pane_t2_ParamLimits

0xa27c,	// (0x0002c924) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00032577) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00032577) main_cf0_pane_t

0x081e,	// (0x00022ec6) scroll_pane_cp11

0xa291,	// (0x0002c939) cf0_flow_pane_g1

0xa299,	// (0x0002c941) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0003257c) cf0_flow_pane_g

0xa2a1,	// (0x0002c949) cf0_flow_pane_t1

0x2ee5,	// (0x0002558d) main_call6_pane

0x2ee5,	// (0x0002558d) main_calllock_pane

0xa2af,	// (0x0002c957) call6_btn_grp_pane_ParamLimits

0xa2af,	// (0x0002c957) call6_btn_grp_pane

0xa2c5,	// (0x0002c96d) call6_pane_g1_ParamLimits

0xa2c5,	// (0x0002c96d) call6_pane_g1

0xa2d8,	// (0x0002c980) popup_call6_1st_window_ParamLimits

0xa2d8,	// (0x0002c980) popup_call6_1st_window

0xa2e7,	// (0x0002c98f) popup_call6_2nd_window_ParamLimits

0xa2e7,	// (0x0002c98f) popup_call6_2nd_window

0xa2f6,	// (0x0002c99e) cell_call6_btn_pane_ParamLimits

0xa2f6,	// (0x0002c99e) cell_call6_btn_pane

0xb157,	// (0x0002d7ff) bg_popup_call2_in_pane_cp03

0x0886,	// (0x00022f2e) popup_call6_1st_window_g1

0x088e,	// (0x00022f36) popup_call6_1st_window_g2

0x0896,	// (0x00022f3e) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00032581) popup_call6_1st_window_g

0x089e,	// (0x00022f46) popup_call6_1st_window_t1

0x08ad,	// (0x00022f55) popup_call6_1st_window_t2

0x08bb,	// (0x00022f63) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00032588) popup_call6_1st_window_t

0xb157,	// (0x0002d7ff) bg_popup_call2_in_pane_cp04

0x0886,	// (0x00022f2e) popup_call6_2nd_window_g1

0x088e,	// (0x00022f36) popup_call6_2nd_window_g2

0x0896,	// (0x00022f3e) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00032581) popup_call6_2nd_window_g

0x089e,	// (0x00022f46) popup_call6_2nd_window_t1

0x2ee5,	// (0x0002558d) bg_button_pane_cp15

0x08c9,	// (0x00022f71) cell_call6_btn_pane_g1

0x08d2,	// (0x00022f7a) cell_call6_btn_pane_t1

0xa30a,	// (0x0002c9b2) listscroll_wgtman_pane_ParamLimits

0xa30a,	// (0x0002c9b2) listscroll_wgtman_pane

0xa329,	// (0x0002c9d1) wgtman_btn_pane_ParamLimits

0xa329,	// (0x0002c9d1) wgtman_btn_pane

0xaf98,	// (0x0002d640) aid_scroll_copy1

0x092e,	// (0x00022fd6) list_wgtman_pane

0xa369,	// (0x0002ca11) wgtman_btn_pane_g1_ParamLimits

0xa369,	// (0x0002ca11) wgtman_btn_pane_g1

0xa395,	// (0x0002ca3d) wgtman_btn_pane_t1_ParamLimits

0xa395,	// (0x0002ca3d) wgtman_btn_pane_t1

0x0997,	// (0x0002303f) wgtman_btn_pane_t2_ParamLimits

0x0997,	// (0x0002303f) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0003258f) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0003258f) wgtman_btn_pane_t

0xa3d2,	// (0x0002ca7a) listrow_wgtman_pane_ParamLimits

0xa3d2,	// (0x0002ca7a) listrow_wgtman_pane

0xa3e3,	// (0x0002ca8b) listrow_wgtman_pane_g1

0xa3ec,	// (0x0002ca94) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00032594) listrow_wgtman_pane_g

0xa3f4,	// (0x0002ca9c) listrow_wgtman_pane_t1

0xa402,	// (0x0002caaa) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00032599) listrow_wgtman_pane_t

0xa410,	// (0x0002cab8) wait_bar_pane_cp09

0x09f4,	// (0x0002309c) main_calllock_btn_pane

0x09fc,	// (0x000230a4) main_calllock_pane_g1

0x2ee5,	// (0x0002558d) bg_button_pane_cp17

0x0a05,	// (0x000230ad) main_calllock_btn_pane_g1

0x0a0e,	// (0x000230b6) main_calllock_btn_pane_t1

0x2ee5,	// (0x0002558d) main_dialer3_pane

0x2ee5,	// (0x0002558d) main_fmrd2_pane

0xcb42,	// (0x0002f1ea) main_fs_bigclock_unlock_btn_pane_g1

0x0a25,	// (0x000230cd) main_fs_bigclock_unlock_btn_pane_t1

0xa418,	// (0x0002cac0) area_fmrd2_info_pane_ParamLimits

0xa418,	// (0x0002cac0) area_fmrd2_info_pane

0xa427,	// (0x0002cacf) area_fmrd2_visual_pane_ParamLimits

0xa427,	// (0x0002cacf) area_fmrd2_visual_pane

0xa435,	// (0x0002cadd) fmrd2_indi_pane_ParamLimits

0xa435,	// (0x0002cadd) fmrd2_indi_pane

0xa442,	// (0x0002caea) area_fmrd2_visual_pane_g1

0xa44a,	// (0x0002caf2) area_fmrd2_visual_pane_t1

0xa458,	// (0x0002cb00) area_fmrd2_visual_pane_t2

0xa466,	// (0x0002cb0e) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x000325a3) area_fmrd2_visual_pane_t

0xa474,	// (0x0002cb1c) area_fmrd2_info_pane_g1

0xa47c,	// (0x0002cb24) area_fmrd2_info_pane_t1

0xa48a,	// (0x0002cb32) area_fmrd2_info_pane_t2

0xa498,	// (0x0002cb40) area_fmrd2_info_pane_t3

0xa4a6,	// (0x0002cb4e) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x000325aa) area_fmrd2_info_pane_t

0xa4b4,	// (0x0002cb5c) fmrd2_indi_pane_t1

0xa4c2,	// (0x0002cb6a) fmrd2_indi_pane_t2

0xa4d0,	// (0x0002cb78) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x000325b3) fmrd2_indi_pane_t

0xe8da,	// (0x00030f82) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe8da,	// (0x00030f82) list_single_fs_bigclock_indicator_pane_g5

0xe97c,	// (0x00031024) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe97c,	// (0x00031024) list_single_fs_bigclock_indicator_pane_t5

0x9cc6,	// (0x0002c36e) aid_cell_bcale_month_pane_ParamLimits

0x9cc6,	// (0x0002c36e) aid_cell_bcale_month_pane

0x9cd8,	// (0x0002c380) bcale_month_pane_ParamLimits

0x9cd8,	// (0x0002c380) bcale_month_pane

0x9cea,	// (0x0002c392) bcale_preview_pane_ParamLimits

0x9cea,	// (0x0002c392) bcale_preview_pane

0x049f,	// (0x00022b47) list_single_fs_bigclock_pane_t1_ParamLimits

0x04b9,	// (0x00022b61) list_single_fs_bigclock_pane_t2_ParamLimits

0x04b9,	// (0x00022b61) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0003253a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0003253a) list_single_fs_bigclock_pane_t

0x0a1d,	// (0x000230c5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0003259e) main_fs_bigclock_unlock_btn_pane_g

0xa4de,	// (0x0002cb86) aid_dia3_key_size_ParamLimits

0xa4de,	// (0x0002cb86) aid_dia3_key_size

0xa4ed,	// (0x0002cb95) aid_dia3_listrow_size_ParamLimits

0xa4ed,	// (0x0002cb95) aid_dia3_listrow_size

0xa500,	// (0x0002cba8) dia3_keypad_fun_pane_ParamLimits

0xa500,	// (0x0002cba8) dia3_keypad_fun_pane

0xa514,	// (0x0002cbbc) dia3_keypad_num_pane_ParamLimits

0xa514,	// (0x0002cbbc) dia3_keypad_num_pane

0xa525,	// (0x0002cbcd) dia3_listscroll_pane_ParamLimits

0xa525,	// (0x0002cbcd) dia3_listscroll_pane

0xa536,	// (0x0002cbde) dia3_numentry_pane_ParamLimits

0xa536,	// (0x0002cbde) dia3_numentry_pane

0x0b40,	// (0x000231e8) dia3_list_pane

0x0b49,	// (0x000231f1) scroll_pane_cp12

0x2ee5,	// (0x0002558d) bg_dia3_numentry_pane

0xa548,	// (0x0002cbf0) dia3_numentry_pane_t1

0xa557,	// (0x0002cbff) cell_dia3_key_num_pane

0xa55f,	// (0x0002cc07) cell_dia3_key0_fun_pane_ParamLimits

0xa55f,	// (0x0002cc07) cell_dia3_key0_fun_pane

0xa573,	// (0x0002cc1b) cell_dia3_key1_fun_pane_ParamLimits

0xa573,	// (0x0002cc1b) cell_dia3_key1_fun_pane

0xa58a,	// (0x0002cc32) dia3_listrow_pane

0xe5de,	// (0x00030c86) bg_dia3_numentry_pane_g1

0x2ee5,	// (0x0002558d) bg_button_pane_cp21

0x0b90,	// (0x00023238) cell_dia3_key_num_pane_t1

0x0b9e,	// (0x00023246) cell_dia3_key_num_pane_t2

0x0bad,	// (0x00023255) cell_dia3_key_num_pane_t3

0x0bbc,	// (0x00023264) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x000325ba) cell_dia3_key_num_pane_t

0x2ee5,	// (0x0002558d) bg_button_pane_cp19

0x0bcb,	// (0x00023273) cell_dia3_key0_fun_pane_g1

0x2ee5,	// (0x0002558d) bg_button_pane_cp20

0xa59c,	// (0x0002cc44) cell_dia3_key1_fun_pane_g1

0xa5a4,	// (0x0002cc4c) area_left_week_number_pane

0x05cb,	// (0x00022c73) area_top_day_name_pane

0xa5ad,	// (0x0002cc55) frame_month_view_pane

0xa5b5,	// (0x0002cc5d) grid_month_view_pane

0xa5bf,	// (0x0002cc67) cell_top_day_name_pane_ParamLimits

0xa5bf,	// (0x0002cc67) cell_top_day_name_pane

0xa5d5,	// (0x0002cc7d) cell_area_left_week_number_pane_ParamLimits

0xa5d5,	// (0x0002cc7d) cell_area_left_week_number_pane

0xa5e9,	// (0x0002cc91) cell_month_view_pane_ParamLimits

0xa5e9,	// (0x0002cc91) cell_month_view_pane

0x0c44,	// (0x000232ec) frm_month_g1

0xa604,	// (0x0002ccac) frm_month_g2

0xa60c,	// (0x0002ccb4) frm_month_g3

0xa614,	// (0x0002ccbc) frm_month_g4

0xa61c,	// (0x0002ccc4) frm_month_g5

0xa624,	// (0x0002cccc) frm_month_g6

0xa62c,	// (0x0002ccd4) frm_month_g7

0x0c7d,	// (0x00023325) frm_month_g8

0xa634,	// (0x0002ccdc) frm_month_g9

0xa63d,	// (0x0002cce5) frm_month_g10

0xa646,	// (0x0002ccee) frm_month_g11

0xa64f,	// (0x0002ccf7) frm_month_g12

0xa658,	// (0x0002cd00) frm_month_g13

0xa661,	// (0x0002cd09) frm_month_g14

0xa66a,	// (0x0002cd12) frm_month_g15

0xa673,	// (0x0002cd1b) frm_month_g16

0x000f,

0xff1b,	// (0x000325c3) frm_month_g

0xa67c,	// (0x0002cd24) cell_top_day_name_pane_t1

0xa68b,	// (0x0002cd33) cell_area_left_week_number_pane_g1

0xa67c,	// (0x0002cd24) cell_area_left_week_number_pane_t1

0xcb42,	// (0x0002f1ea) cell_month_view_pane_g1

0xa693,	// (0x0002cd3b) cell_month_view_pane_t1

0x2ee5,	// (0x0002558d) main_fps_pane

0xeb76,	// (0x0003121e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xeb76,	// (0x0003121e) cmail_ddmenu_btn02_pane_cp1

0xeb92,	// (0x0003123a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeb92,	// (0x0003123a) cmail_ddmenu_btn02_pane_cp2

0x9f53,	// (0x0002c5fb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9f53,	// (0x0002c5fb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x000324eb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x000324eb) cmail_ddmenu_btn02_pane_g

0x9f74,	// (0x0002c61c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9f74,	// (0x0002c61c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x000324f0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x000324f0) cmail_ddmenu_btn02_pane_t

0xa6a2,	// (0x0002cd4a) fps_text_pane_ParamLimits

0xa6a2,	// (0x0002cd4a) fps_text_pane

0xa6b8,	// (0x0002cd60) main_fps_pane_g1_ParamLimits

0xa6b8,	// (0x0002cd60) main_fps_pane_g1

0xa6ce,	// (0x0002cd76) wait_bar_pane_cp010_ParamLimits

0xa6ce,	// (0x0002cd76) wait_bar_pane_cp010

0xa6df,	// (0x0002cd87) fps_text_pane_t1_ParamLimits

0xa6df,	// (0x0002cd87) fps_text_pane_t1

0x0f6b,	// (0x00023613) cam4_image_uncrop_pane_g1

0x0f74,	// (0x0002361c) cam4_image_uncrop_pane_g2

0x7d01,	// (0x0002a3a9) cam4_image_uncrop_pane_g3

0x7d0a,	// (0x0002a3b2) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x00031fc8) cam4_image_uncrop_pane_g

0xa58a,	// (0x0002cc32) dia3_listrow_pane_ParamLimits

0x2ee5,	// (0x0002558d) main_phob2_pane

0x9b31,	// (0x0002c1d9) cell_tport_appsw_pane_cp02_ParamLimits

0x9b31,	// (0x0002c1d9) cell_tport_appsw_pane_cp02

0x9b41,	// (0x0002c1e9) cell_tport_appsw_pane_cp03_ParamLimits

0x9b41,	// (0x0002c1e9) cell_tport_appsw_pane_cp03

0x2ee5,	// (0x0002558d) phob2_contact_card_pane

0x2ee5,	// (0x0002558d) phob2_listscroll_pane

0x0d29,	// (0x000233d1) phob2_list_pane

0x0d31,	// (0x000233d9) scroll_pane_cp034

0xa6f7,	// (0x0002cd9f) phob2_cc_data_pane_ParamLimits

0xa6f7,	// (0x0002cd9f) phob2_cc_data_pane

0xa714,	// (0x0002cdbc) phob2_cc_listscroll_pane_ParamLimits

0xa714,	// (0x0002cdbc) phob2_cc_listscroll_pane

0xa730,	// (0x0002cdd8) list_double_large_graphic_phob2_pane_ParamLimits

0xa730,	// (0x0002cdd8) list_double_large_graphic_phob2_pane

0xa742,	// (0x0002cdea) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa742,	// (0x0002cdea) list_double_large_graphic_phob2_pane_g1

0xa74f,	// (0x0002cdf7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa74f,	// (0x0002cdf7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000325e4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000325e4) list_double_large_graphic_phob2_pane_g

0xa75b,	// (0x0002ce03) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa75b,	// (0x0002ce03) list_double_large_graphic_phob2_pane_t1

0xa770,	// (0x0002ce18) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa770,	// (0x0002ce18) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000325e9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000325e9) list_double_large_graphic_phob2_pane_t

0x2ee5,	// (0x0002558d) list_highlight_pane_cp024

0x0dbc,	// (0x00023464) phob2_cc_button_pane

0xa782,	// (0x0002ce2a) phob2_cc_data_pane_g1_ParamLimits

0xa782,	// (0x0002ce2a) phob2_cc_data_pane_g1

0xa797,	// (0x0002ce3f) phob2_cc_data_pane_g2_ParamLimits

0xa797,	// (0x0002ce3f) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000325ee) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000325ee) phob2_cc_data_pane_g

0xa7a9,	// (0x0002ce51) phob2_cc_data_pane_t1_ParamLimits

0xa7a9,	// (0x0002ce51) phob2_cc_data_pane_t1

0xa7c1,	// (0x0002ce69) phob2_cc_data_pane_t2_ParamLimits

0xa7c1,	// (0x0002ce69) phob2_cc_data_pane_t2

0xa7d9,	// (0x0002ce81) phob2_cc_data_pane_t3_ParamLimits

0xa7d9,	// (0x0002ce81) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000325f3) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000325f3) phob2_cc_data_pane_t

0x0e12,	// (0x000234ba) phob2_cc_list_pane_ParamLimits

0x0e12,	// (0x000234ba) phob2_cc_list_pane

0xe4fb,	// (0x00030ba3) scroll_pane_cp035_ParamLimits

0xe4fb,	// (0x00030ba3) scroll_pane_cp035

0x310f,	// (0x000257b7) bg_button_pane_cp033

0x0e1e,	// (0x000234c6) phob2_cc_button_pane_g1

0x0e2a,	// (0x000234d2) phob2_cc_button_pane_t1

0x0e3f,	// (0x000234e7) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000325fa) phob2_cc_button_pane_t

0xa7f1,	// (0x0002ce99) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa7f1,	// (0x0002ce99) list_double_large_graphic_phob2_cc_pane

0xa803,	// (0x0002ceab) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa803,	// (0x0002ceab) list_double_large_graphic_phob2_cc_pane_g1

0xa80f,	// (0x0002ceb7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa80f,	// (0x0002ceb7) list_double_large_graphic_phob2_cc_pane_g2

0xa81b,	// (0x0002cec3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa81b,	// (0x0002cec3) list_double_large_graphic_phob2_cc_pane_g3

0xa827,	// (0x0002cecf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa827,	// (0x0002cecf) list_double_large_graphic_phob2_cc_pane_g4

0xa833,	// (0x0002cedb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa833,	// (0x0002cedb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000325ff) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000325ff) list_double_large_graphic_phob2_cc_pane_g

0xa83f,	// (0x0002cee7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa83f,	// (0x0002cee7) list_double_large_graphic_phob2_cc_pane_t1

0xa868,	// (0x0002cf10) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa868,	// (0x0002cf10) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0003260a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0003260a) list_double_large_graphic_phob2_cc_pane_t

0x0f0d,	// (0x000235b5) list_highlight_pane_cp025_ParamLimits

0x0f0d,	// (0x000235b5) list_highlight_pane_cp025

0x310f,	// (0x000257b7) bg_button_pane_cp033_ParamLimits

0x0e1e,	// (0x000234c6) phob2_cc_button_pane_g1_ParamLimits

0x0e2a,	// (0x000234d2) phob2_cc_button_pane_t1_ParamLimits

0x0e3f,	// (0x000234e7) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000325fa) phob2_cc_button_pane_t_ParamLimits

0x311d,	// (0x000257c5) popup_wgtman_window

0xe5fe,	// (0x00030ca6) scroll_pane_cp038

0xa34b,	// (0x0002c9f3) wgtman_btn_pane_cp_01_ParamLimits

0xa34b,	// (0x0002c9f3) wgtman_btn_pane_cp_01

0x0f1b,	// (0x000235c3) wgtman_content_pane

0x0f24,	// (0x000235cc) wgtman_heading_pane

0x2ee5,	// (0x0002558d) bg_heading_pane_cp02

0x0f2d,	// (0x000235d5) wgtman_heading_pane_g1

0x0f35,	// (0x000235dd) wgtman_heading_pane_t1

0x0f43,	// (0x000235eb) scroll_pane_cp036

0x0f4b,	// (0x000235f3) wgtman_list_pane

0x0f53,	// (0x000235fb) wgtman_list_pane_t1_ParamLimits

0x0f53,	// (0x000235fb) wgtman_list_pane_t1

0xd754,	// (0x0002fdfc) cam4_grid_pane

0x8492,	// (0x0002ab3a) bg_button_pane_cp015_ParamLimits

0x84a2,	// (0x0002ab4a) bg_button_pane_cp016_ParamLimits

0x84b4,	// (0x0002ab5c) bg_button_pane_cp017_ParamLimits

0x8504,	// (0x0002abac) popup_vitu2_query_window_g3_ParamLimits

0x8504,	// (0x0002abac) popup_vitu2_query_window_g3

0x85b7,	// (0x0002ac5f) popup_vitu2_query_window_t6_ParamLimits

0x85b7,	// (0x0002ac5f) popup_vitu2_query_window_t6

0x85e2,	// (0x0002ac8a) popup_vitu2_query_window_t7_ParamLimits

0x85e2,	// (0x0002ac8a) popup_vitu2_query_window_t7

0x0f6b,	// (0x00023613) cam4_grid_pane_g1

0x0f74,	// (0x0002361c) cam4_grid_pane_g2

0x0f7d,	// (0x00023625) cam4_grid_pane_g3

0x0f86,	// (0x0002362e) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0003260f) cam4_grid_pane_g

0x45ab,	// (0x00026c53) aid_placing_vt_slider_lsc_ParamLimits

0x4869,	// (0x00026f11) vidtel_button_pane_ParamLimits

0x4869,	// (0x00026f11) vidtel_button_pane

0x2ee5,	// (0x0002558d) bg_button_pane_cp034

0xa891,	// (0x0002cf39) vidtel_button_pane_g1

0x0f97,	// (0x0002363f) vidtel_button_pane_t1

0xdabf,	// (0x00030167) aid_size_vtel_slider_touch

0xe4fb,	// (0x00030ba3) scroll_pane_cp039

0xe62a,	// (0x00030cd2) ncim_query_button_pane_cp01_ParamLimits

0xe649,	// (0x00030cf1) ncimui_query_pane_g1_ParamLimits

0x310f,	// (0x000257b7) input_focus_pane_cp012_ParamLimits

0xe66e,	// (0x00030d16) ncim_query_entry_pane_t1_ParamLimits

0xe4fb,	// (0x00030ba3) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
