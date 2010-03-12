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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00043e3b };

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
0x124f,	// (0x0004508a) Screen

0x125b,	// (0x00045096) application_window

0x1297,	// (0x000450d2) area_bottom_pane_ParamLimits

0x1297,	// (0x000450d2) area_bottom_pane

0x12d0,	// (0x0004510b) area_top_pane_ParamLimits

0x12d0,	// (0x0004510b) area_top_pane

0xa7f1,	// (0x0004e62c) call_video_uplink_pane_ParamLimits

0xa7f1,	// (0x0004e62c) call_video_uplink_pane

0x1345,	// (0x00045180) main_pane_ParamLimits

0x1345,	// (0x00045180) main_pane

0xddd4,	// (0x00051c0f) context_pane

0x443e,	// (0x00048279) navi_pane

0x446e,	// (0x000482a9) popup_cale_events_window_ParamLimits

0x446e,	// (0x000482a9) popup_cale_events_window

0xdde7,	// (0x00051c22) popup_mup_playback_window

0x4486,	// (0x000482c1) signal_pane

0xafb5,	// (0x0004edf0) main_browser_pane

0xc99f,	// (0x000507da) main_burst_pane

0x4140,	// (0x00047f7b) main_calc_pane

0xc99f,	// (0x000507da) main_cale_day_pane

0xafb5,	// (0x0004edf0) main_cale_month_pane

0xc99f,	// (0x000507da) main_cale_week_pane

0xc99f,	// (0x000507da) main_call_pane

0xac65,	// (0x0004eaa0) main_call_poc_pane

0xc99f,	// (0x000507da) main_camera_pane

0xc99f,	// (0x000507da) main_chi_dic_pane

0xc841,	// (0x0005067c) main_clock_pane

0xac65,	// (0x0004eaa0) main_fmradio_pane

0xc99f,	// (0x000507da) main_graph_messa_pane

0xac65,	// (0x0004eaa0) main_help_pane

0xafb5,	// (0x0004edf0) main_im_pane

0xaec0,	// (0x0004ecfb) main_image_pane_ParamLimits

0xaec0,	// (0x0004ecfb) main_image_pane

0xac65,	// (0x0004eaa0) main_location2_pane

0xc99f,	// (0x000507da) main_location_pane

0xac65,	// (0x0004eaa0) main_messa_pane

0xac65,	// (0x0004eaa0) main_mp2_pane

0xc99f,	// (0x000507da) main_mp_pane

0xac65,	// (0x0004eaa0) main_msg_pane

0xac65,	// (0x0004eaa0) main_mup_eq_pane

0xac65,	// (0x0004eaa0) main_mup_pane

0xafb5,	// (0x0004edf0) main_notes_pane

0xac65,	// (0x0004eaa0) main_pec_pane

0xac65,	// (0x0004eaa0) main_phob_pane

0xac65,	// (0x0004eaa0) main_pinb_pane

0xac65,	// (0x0004eaa0) main_postcard_pane

0xac65,	// (0x0004eaa0) main_qdial_pane

0xc99f,	// (0x000507da) main_skin_pane

0xac65,	// (0x0004eaa0) main_smil2_pane

0xc99f,	// (0x000507da) main_smil_pane

0xc99f,	// (0x000507da) main_video_pane

0xc99f,	// (0x000507da) main_video_tele_pane

0xaec0,	// (0x0004ecfb) main_viewer_pane_ParamLimits

0xaec0,	// (0x0004ecfb) main_viewer_pane

0xc99f,	// (0x000507da) main_vorec_pane

0x4196,	// (0x00047fd1) popup_blid_sat_info_window_ParamLimits

0x4196,	// (0x00047fd1) popup_blid_sat_info_window

0x41fa,	// (0x00048035) popup_dyc_status_message_window_ParamLimits

0x41fa,	// (0x00048035) popup_dyc_status_message_window

0x4214,	// (0x0004804f) popup_grid_large_graphic_window_ParamLimits

0x4214,	// (0x0004804f) popup_grid_large_graphic_window

0x42d6,	// (0x00048111) popup_loc_request_window_ParamLimits

0x42d6,	// (0x00048111) popup_loc_request_window

0x4412,	// (0x0004824d) popup_wml_address_window_ParamLimits

0x4412,	// (0x0004824d) popup_wml_address_window

0x3f7e,	// (0x00047db9) call_muted_g1

0x3c0f,	// (0x00047a4a) popup_call_audio_conf_window_ParamLimits

0x3c0f,	// (0x00047a4a) popup_call_audio_conf_window

0x3f8e,	// (0x00047dc9) popup_call_audio_first_window_ParamLimits

0x3f8e,	// (0x00047dc9) popup_call_audio_first_window

0x4004,	// (0x00047e3f) popup_call_audio_in_window_ParamLimits

0x4004,	// (0x00047e3f) popup_call_audio_in_window

0x4040,	// (0x00047e7b) popup_call_audio_out_window_ParamLimits

0x4040,	// (0x00047e7b) popup_call_audio_out_window

0x407a,	// (0x00047eb5) popup_call_audio_second_window_ParamLimits

0x407a,	// (0x00047eb5) popup_call_audio_second_window

0x40d0,	// (0x00047f0b) popup_call_audio_wait_window_ParamLimits

0x40d0,	// (0x00047f0b) popup_call_audio_wait_window

0x4105,	// (0x00047f40) popup_number_entry_window_ParamLimits

0x4105,	// (0x00047f40) popup_number_entry_window

0xa81d,	// (0x0004e658) bg_popup_call_pane_cp05_ParamLimits

0xa81d,	// (0x0004e658) bg_popup_call_pane_cp05

0xa83d,	// (0x0004e678) popup_number_entry_window_t1

0xa850,	// (0x0004e68b) popup_number_entry_window_t2

0xa862,	// (0x0004e69d) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00052f13) popup_number_entry_window_t

0xa8a9,	// (0x0004e6e4) text_title_cp2

0xa8bc,	// (0x0004e6f7) bg_popup_call_pane_cp_ParamLimits

0xa8bc,	// (0x0004e6f7) bg_popup_call_pane_cp

0xa8ca,	// (0x0004e705) call_thumbnail_pane

0xa8d2,	// (0x0004e70d) popup_call_audio_in_window_g1_ParamLimits

0xa8d2,	// (0x0004e70d) popup_call_audio_in_window_g1

0xa8de,	// (0x0004e719) popup_call_audio_in_window_g2_ParamLimits

0xa8de,	// (0x0004e719) popup_call_audio_in_window_g2

0xa8ea,	// (0x0004e725) popup_call_audio_in_window_g3_ParamLimits

0xa8ea,	// (0x0004e725) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00052f1c) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00052f1c) popup_call_audio_in_window_g

0xa8f6,	// (0x0004e731) popup_call_audio_in_window_t1_ParamLimits

0xa8f6,	// (0x0004e731) popup_call_audio_in_window_t1

0xa912,	// (0x0004e74d) popup_call_audio_in_window_t2_ParamLimits

0xa912,	// (0x0004e74d) popup_call_audio_in_window_t2

0xa92e,	// (0x0004e769) popup_call_audio_in_window_t3_ParamLimits

0xa92e,	// (0x0004e769) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00052f23) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00052f23) popup_call_audio_in_window_t

0xa8bc,	// (0x0004e6f7) bg_popup_call_pane_cp01_ParamLimits

0xa8bc,	// (0x0004e6f7) bg_popup_call_pane_cp01

0xa8ca,	// (0x0004e705) call_thumbnail_pane_cp02

0xa941,	// (0x0004e77c) call_type_pane_cp022

0xa949,	// (0x0004e784) popup_call_audio_out_window_g1_ParamLimits

0xa949,	// (0x0004e784) popup_call_audio_out_window_g1

0xa95b,	// (0x0004e796) popup_call_audio_out_window_g2_ParamLimits

0xa95b,	// (0x0004e796) popup_call_audio_out_window_g2

0xa967,	// (0x0004e7a2) popup_call_audio_out_window_g3_ParamLimits

0xa967,	// (0x0004e7a2) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00052f2a) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00052f2a) popup_call_audio_out_window_g

0xa979,	// (0x0004e7b4) popup_call_audio_out_window_t1_ParamLimits

0xa979,	// (0x0004e7b4) popup_call_audio_out_window_t1

0xa991,	// (0x0004e7cc) popup_call_audio_out_window_t2_ParamLimits

0xa991,	// (0x0004e7cc) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00052f31) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00052f31) popup_call_audio_out_window_t

0xa9a6,	// (0x0004e7e1) bg_popup_call_pane_ParamLimits

0xa9a6,	// (0x0004e7e1) bg_popup_call_pane

0x14cc,	// (0x00045307) call_thumbnail_pane_cp_ParamLimits

0x14cc,	// (0x00045307) call_thumbnail_pane_cp

0xaa2a,	// (0x0004e865) call_type_pane_cp01_ParamLimits

0xaa2a,	// (0x0004e865) call_type_pane_cp01

0xaa6e,	// (0x0004e8a9) popup_call_audio_first_window_g1_ParamLimits

0xaa6e,	// (0x0004e8a9) popup_call_audio_first_window_g1

0xaaba,	// (0x0004e8f5) popup_call_audio_first_window_g2_ParamLimits

0xaaba,	// (0x0004e8f5) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00052f36) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00052f36) popup_call_audio_first_window_g

0xaafe,	// (0x0004e939) popup_call_audio_first_window_t1_ParamLimits

0xaafe,	// (0x0004e939) popup_call_audio_first_window_t1

0xabaa,	// (0x0004e9e5) popup_call_audio_first_window_t4_ParamLimits

0xabaa,	// (0x0004e9e5) popup_call_audio_first_window_t4

0xac36,	// (0x0004ea71) popup_call_audio_first_window_t5_ParamLimits

0xac36,	// (0x0004ea71) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00052f3b) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00052f3b) popup_call_audio_first_window_t

0xac65,	// (0x0004eaa0) bg_popup_call_pane_cp02

0xac6f,	// (0x0004eaaa) call_type_pane_cp023

0xac77,	// (0x0004eab2) popup_call_audio_wait_window_g1

0xac7f,	// (0x0004eaba) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00052f42) popup_call_audio_wait_window_g

0xac87,	// (0x0004eac2) popup_call_audio_wait_window_t3

0xac95,	// (0x0004ead0) bg_popup_call_pane_cp03_ParamLimits

0xac95,	// (0x0004ead0) bg_popup_call_pane_cp03

0xacf5,	// (0x0004eb30) call_thumbnail_pane_cp011_ParamLimits

0xacf5,	// (0x0004eb30) call_thumbnail_pane_cp011

0xad01,	// (0x0004eb3c) call_type_pane_cp034_ParamLimits

0xad01,	// (0x0004eb3c) call_type_pane_cp034

0xad3d,	// (0x0004eb78) popup_call_audio_second_window_g1_ParamLimits

0xad3d,	// (0x0004eb78) popup_call_audio_second_window_g1

0xad79,	// (0x0004ebb4) popup_call_audio_second_window_g2_ParamLimits

0xad79,	// (0x0004ebb4) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00052f47) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00052f47) popup_call_audio_second_window_g

0xadb5,	// (0x0004ebf0) popup_call_audio_second_window_t1_ParamLimits

0xadb5,	// (0x0004ebf0) popup_call_audio_second_window_t1

0xae36,	// (0x0004ec71) popup_call_audio_second_window_t2_ParamLimits

0xae36,	// (0x0004ec71) popup_call_audio_second_window_t2

0xae6c,	// (0x0004eca7) popup_call_audio_second_window_t3_ParamLimits

0xae6c,	// (0x0004eca7) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00052f4c) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00052f4c) popup_call_audio_second_window_t

0xac65,	// (0x0004eaa0) bg_popup_call_pane_cp04

0xaea2,	// (0x0004ecdd) list_conf_pane

0xaeaa,	// (0x0004ece5) popup_call_audio_conf_window_t1

0xaeb8,	// (0x0004ecf3) call_thumbnail_pane_g1

0xaec0,	// (0x0004ecfb) bg_pinb_pane_ParamLimits

0xaec0,	// (0x0004ecfb) bg_pinb_pane

0xaece,	// (0x0004ed09) find_pinb_pane

0xaed7,	// (0x0004ed12) listscroll_pinb_pane_ParamLimits

0xaed7,	// (0x0004ed12) listscroll_pinb_pane

0xaee6,	// (0x0004ed21) pinb_bg_pane_g1

0x14f0,	// (0x0004532b) pinb_bg_pane_g2

0x14fc,	// (0x00045337) pinb_bg_pane_g3

0x1508,	// (0x00045343) pinb_bg_pane_g4

0x1514,	// (0x0004534f) pinb_bg_pane_g5

0x1520,	// (0x0004535b) pinb_bg_pane_g6

0x152b,	// (0x00045366) pinb_bg_pane_g7

0x1536,	// (0x00045371) pinb_bg_pane_g8

0x1541,	// (0x0004537c) pinb_bg_pane_g9

0x154b,	// (0x00045386) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00052f53) pinb_bg_pane_g

0x1568,	// (0x000453a3) grid_pinb_pane

0x1573,	// (0x000453ae) list_pinb_pane

0x157e,	// (0x000453b9) scroll_pane_cp01_ParamLimits

0x157e,	// (0x000453b9) scroll_pane_cp01

0xaef0,	// (0x0004ed2b) find_pinb_pane_g1_ParamLimits

0xaef0,	// (0x0004ed2b) find_pinb_pane_g1

0xaf08,	// (0x0004ed43) find_pinb_pane_t1

0xaf1a,	// (0x0004ed55) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00052f6d) find_pinb_pane_t

0xaf2f,	// (0x0004ed6a) input_focus_pane_cp01_ParamLimits

0xaf2f,	// (0x0004ed6a) input_focus_pane_cp01

0x1590,	// (0x000453cb) cell_pinb_pane_ParamLimits

0x1590,	// (0x000453cb) cell_pinb_pane

0x15b2,	// (0x000453ed) cell_pinb_pane_g1_ParamLimits

0x15b2,	// (0x000453ed) cell_pinb_pane_g1

0x15c6,	// (0x00045401) cell_pinb_pane_g2_ParamLimits

0x15c6,	// (0x00045401) cell_pinb_pane_g2

0xaf3b,	// (0x0004ed76) cell_pinb_pane_g3_ParamLimits

0xaf3b,	// (0x0004ed76) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00052f72) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00052f72) cell_pinb_pane_g

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp01

0x15d2,	// (0x0004540d) list_pinb_item_pane_ParamLimits

0x15d2,	// (0x0004540d) list_pinb_item_pane

0xac65,	// (0x0004eaa0) list_highlight_pane_cp02

0x15e5,	// (0x00045420) list_pinb_item_pane_g1_ParamLimits

0x15e5,	// (0x00045420) list_pinb_item_pane_g1

0x15f2,	// (0x0004542d) list_pinb_item_pane_g2_ParamLimits

0x15f2,	// (0x0004542d) list_pinb_item_pane_g2

0x15fe,	// (0x00045439) list_pinb_item_pane_g3_ParamLimits

0x15fe,	// (0x00045439) list_pinb_item_pane_g3

0x160f,	// (0x0004544a) list_pinb_item_pane_g4_ParamLimits

0x160f,	// (0x0004544a) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00052f79) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00052f79) list_pinb_item_pane_g

0x161b,	// (0x00045456) list_pinb_item_pane_t1_ParamLimits

0x161b,	// (0x00045456) list_pinb_item_pane_t1

0x1650,	// (0x0004548b) calc_display_pane

0x1678,	// (0x000454b3) calc_paper_pane

0x169b,	// (0x000454d6) grid_calc_pane

0xac65,	// (0x0004eaa0) bg_list_pane_cp01

0x16c9,	// (0x00045504) clock_g1

0x16d1,	// (0x0004550c) clock_g2

0x0001,

0xf147,	// (0x00052f82) clock_g

0x16d9,	// (0x00045514) clock_t1_ParamLimits

0x16d9,	// (0x00045514) clock_t1

0x16ee,	// (0x00045529) clock_t2_ParamLimits

0x16ee,	// (0x00045529) clock_t2

0x1700,	// (0x0004553b) clock_t3_ParamLimits

0x1700,	// (0x0004553b) clock_t3

0x1712,	// (0x0004554d) clock_t4_ParamLimits

0x1712,	// (0x0004554d) clock_t4

0x1724,	// (0x0004555f) clock_t5_ParamLimits

0x1724,	// (0x0004555f) clock_t5

0x1739,	// (0x00045574) clock_t6_ParamLimits

0x1739,	// (0x00045574) clock_t6

0x174b,	// (0x00045586) clock_t7_ParamLimits

0x174b,	// (0x00045586) clock_t7

0x175d,	// (0x00045598) clock_t8_ParamLimits

0x175d,	// (0x00045598) clock_t8

0x1771,	// (0x000455ac) clock_t9_ParamLimits

0x1771,	// (0x000455ac) clock_t9

0x0008,

0xf14c,	// (0x00052f87) clock_t_ParamLimits

0xf14c,	// (0x00052f87) clock_t

0xaf4f,	// (0x0004ed8a) popup_clock_analogue_window_cp02

0xaf4f,	// (0x0004ed8a) popup_clock_digital_window_cp01

0xaf57,	// (0x0004ed92) listscroll_help_pane

0xac65,	// (0x0004eaa0) phob_pre_status_pane

0xaf61,	// (0x0004ed9c) grid_qdial_pane

0xac65,	// (0x0004eaa0) listscroll_mce_pane

0xaf6b,	// (0x0004eda6) bg_notes_pane

0xaf79,	// (0x0004edb4) list_notes_pane

0x1787,	// (0x000455c2) scroll_pane_cp06

0xaf87,	// (0x0004edc2) bg_calc_paper_pane

0xaf9b,	// (0x0004edd6) list_calc_pane

0xafb5,	// (0x0004edf0) bg_calc_display_pane

0x179b,	// (0x000455d6) calc_display_pane_t1

0x17ad,	// (0x000455e8) calc_display_pane_t2

0xafc1,	// (0x0004edfc) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00052f9a) calc_display_pane_t

0x17bf,	// (0x000455fa) cell_calc_pane_ParamLimits

0x17bf,	// (0x000455fa) cell_calc_pane

0xafd3,	// (0x0004ee0e) bg_calc_paper_pane_g1

0xafdf,	// (0x0004ee1a) bg_calc_paper_pane_g2

0xafeb,	// (0x0004ee26) bg_calc_paper_pane_g3

0xaff7,	// (0x0004ee32) bg_calc_paper_pane_g4

0xb003,	// (0x0004ee3e) bg_calc_paper_pane_g5

0x17fe,	// (0x00045639) bg_calc_paper_pane_g6

0x1811,	// (0x0004564c) bg_calc_paper_pane_g7

0x1824,	// (0x0004565f) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00052fa1) bg_calc_paper_pane_g

0x1835,	// (0x00045670) calc_bg_paper_pane_g9

0x1846,	// (0x00045681) list_calc_item_pane_ParamLimits

0x1846,	// (0x00045681) list_calc_item_pane

0xb00f,	// (0x0004ee4a) list_calc_item_pane_g1

0xb01c,	// (0x0004ee57) list_calc_item_pane_t1_ParamLimits

0xb01c,	// (0x0004ee57) list_calc_item_pane_t1

0x185b,	// (0x00045696) list_calc_item_pane_t2_ParamLimits

0x185b,	// (0x00045696) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00052fb2) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00052fb2) list_calc_item_pane_t

0xb02e,	// (0x0004ee69) cell_calc_pane_g1

0xb038,	// (0x0004ee73) grid_highlight_pane_cp02

0xb05a,	// (0x0004ee95) bg_calc_display_pane_g1

0xb063,	// (0x0004ee9e) bg_calc_display_pane_g2

0xb06d,	// (0x0004eea8) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00052fbc) bg_calc_display_pane_g

0x188d,	// (0x000456c8) cell_qdial_pane_ParamLimits

0x188d,	// (0x000456c8) cell_qdial_pane

0x18a3,	// (0x000456de) cell_qdial_pane_g1_ParamLimits

0x18a3,	// (0x000456de) cell_qdial_pane_g1

0x18b9,	// (0x000456f4) cell_qdial_pane_g2_ParamLimits

0x18b9,	// (0x000456f4) cell_qdial_pane_g2

0xb076,	// (0x0004eeb1) cell_qdial_pane_g3_ParamLimits

0xb076,	// (0x0004eeb1) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00052fc3) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00052fc3) cell_qdial_pane_g

0x18df,	// (0x0004571a) cell_qdial_pane_t1_ParamLimits

0x18df,	// (0x0004571a) cell_qdial_pane_t1

0x18f7,	// (0x00045732) cell_qdial_pane_t2_ParamLimits

0x18f7,	// (0x00045732) cell_qdial_pane_t2

0x190a,	// (0x00045745) cell_qdial_pane_t3_ParamLimits

0x190a,	// (0x00045745) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00052fcc) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00052fcc) cell_qdial_pane_t

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp04

0xb082,	// (0x0004eebd) thumbnail_qdial_pane_ParamLimits

0xb082,	// (0x0004eebd) thumbnail_qdial_pane

0xb0de,	// (0x0004ef19) list_help_pane

0xb0e7,	// (0x0004ef22) scroll_pane_cp02

0x191d,	// (0x00045758) help_list_pane_t1_ParamLimits

0x191d,	// (0x00045758) help_list_pane_t1

0xb0f0,	// (0x0004ef2b) bg_notes_pane_g2

0xb0f8,	// (0x0004ef33) bg_notes_pane_g3

0xb100,	// (0x0004ef3b) notes_bg_pane_g1

0xb108,	// (0x0004ef43) notes_bg_pane_g4

0xb110,	// (0x0004ef4b) notes_bg_pane_g5

0xb118,	// (0x0004ef53) notes_bg_pane_g6

0xb120,	// (0x0004ef5b) notes_bg_pane_g7

0xb128,	// (0x0004ef63) notes_bg_pane_g8

0xb130,	// (0x0004ef6b) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00052fea) notes_bg_pane_g

0x1941,	// (0x0004577c) list_notes_text_pane_ParamLimits

0x1941,	// (0x0004577c) list_notes_text_pane

0xb138,	// (0x0004ef73) list_notes_text_pane_g1

0x06e0,	// (0x0004451b) list_notes_text_pane_t1

0xafb5,	// (0x0004edf0) listscroll_cale_week_pane

0x1975,	// (0x000457b0) bg_cale_heading_pane

0xb152,	// (0x0004ef8d) bg_cale_pane_cp01

0x1991,	// (0x000457cc) cale_week_corner_pane

0x19a7,	// (0x000457e2) cale_week_day_heading_pane

0x19c3,	// (0x000457fe) cale_week_scroll_pane_g1

0x19dc,	// (0x00045817) cale_week_scroll_pane_g2

0x19ed,	// (0x00045828) cale_week_scroll_pane_g3

0x19fe,	// (0x00045839) cale_week_scroll_pane_g4

0x1a0f,	// (0x0004584a) cale_week_scroll_pane_g5

0x1a20,	// (0x0004585b) cale_week_scroll_pane_g6

0x1a31,	// (0x0004586c) cale_week_scroll_pane_g7

0x1a42,	// (0x0004587d) cale_week_scroll_pane_g8

0x1a53,	// (0x0004588e) cale_week_scroll_pane_g9

0x1a64,	// (0x0004589f) cale_week_scroll_pane_g10

0x1a75,	// (0x000458b0) cale_week_scroll_pane_g11

0x1a86,	// (0x000458c1) cale_week_scroll_pane_g12

0x1a97,	// (0x000458d2) cale_week_scroll_pane_g13

0x1ab0,	// (0x000458eb) cale_week_scroll_pane_g14

0x1ac9,	// (0x00045904) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00052ff9) cale_week_scroll_pane_g

0x1ae2,	// (0x0004591d) cale_week_time_pane

0x1af3,	// (0x0004592e) grid_cale_week_pane

0x1b0e,	// (0x00045949) scroll_pane_cp08

0x1b26,	// (0x00045961) cell_cale_week_pane_ParamLimits

0x1b26,	// (0x00045961) cell_cale_week_pane

0x1b6e,	// (0x000459a9) cale_week_day_heading_pane_t1

0x1b82,	// (0x000459bd) cale_week_day_heading_pane_t2

0x1b96,	// (0x000459d1) cale_week_day_heading_pane_t3

0x1baa,	// (0x000459e5) cale_week_day_heading_pane_t4

0x1bbe,	// (0x000459f9) cale_week_day_heading_pane_t5

0x1bd2,	// (0x00045a0d) cale_week_day_heading_pane_t6

0x1be6,	// (0x00045a21) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00053018) cale_week_day_heading_pane_t

0xb17d,	// (0x0004efb8) bg_cale_side_pane

0x1bfa,	// (0x00045a35) cale_week_time_pane_t1

0x1c12,	// (0x00045a4d) cale_week_time_pane_t2

0x1c2a,	// (0x00045a65) cale_week_time_pane_t3

0x1c42,	// (0x00045a7d) cale_week_time_pane_t4

0x1c5a,	// (0x00045a95) cale_week_time_pane_t5

0x1c72,	// (0x00045aad) cale_week_time_pane_t6

0x1c8a,	// (0x00045ac5) cale_week_time_pane_t7

0x1ca6,	// (0x00045ae1) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00053027) cale_week_time_pane_t

0x1cc6,	// (0x00045b01) cell_cale_week_pane_g2

0x1cd7,	// (0x00045b12) cell_cale_week_pane_g3_ParamLimits

0x1cd7,	// (0x00045b12) cell_cale_week_pane_g3

0xb18b,	// (0x0004efc6) grid_highlight_pane_cp07

0xb193,	// (0x0004efce) listscroll_gms_pane

0xb19d,	// (0x0004efd8) grid_gms_pane

0xb1a6,	// (0x0004efe1) listscroll_gms_pane_g1

0xb1ae,	// (0x0004efe9) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00053038) listscroll_gms_pane_g

0x1cef,	// (0x00045b2a) scroll_pane_cp010

0x1cfa,	// (0x00045b35) cell_gms_pane_ParamLimits

0x1cfa,	// (0x00045b35) cell_gms_pane

0x1d14,	// (0x00045b4f) cell_gms_pane_g1

0xb1b6,	// (0x0004eff1) cell_gms_pane_g2

0xb1be,	// (0x0004eff9) cell_gms_pane_g3

0xb1c7,	// (0x0004f002) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0005303d) cell_gms_pane_g

0xb1d0,	// (0x0004f00b) grid_highlight_pane_cp09

0x3f26,	// (0x00047d61) phob_pre_status_pane_g1

0x3f2e,	// (0x00047d69) phob_pre_status_pane_g2

0x3f36,	// (0x00047d71) phob_pre_status_pane_g3

0x3f3e,	// (0x00047d79) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0005342c) phob_pre_status_pane_g

0x3f4e,	// (0x00047d89) phob_pre_status_pane_t1

0x3f5e,	// (0x00047d99) phob_pre_status_pane_t2

0x3f6e,	// (0x00047da9) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00053437) phob_pre_status_pane_t

0xac65,	// (0x0004eaa0) bg_list_pane_cp05

0x1d24,	// (0x00045b5f) grid_vorec_pane

0x1d30,	// (0x00045b6b) vorec_t1

0x1d3e,	// (0x00045b79) vorec_t2

0x1d4c,	// (0x00045b87) vorec_t3

0x1d5a,	// (0x00045b95) vorec_t4

0x1d68,	// (0x00045ba3) vorec_t5

0xb1d8,	// (0x0004f013) vorec_t6

0x0006,

0xf20b,	// (0x00053046) vorec_t

0x1d84,	// (0x00045bbf) wait_bar_pane_cp01

0x1d8c,	// (0x00045bc7) cell_vorec_pane_ParamLimits

0x1d8c,	// (0x00045bc7) cell_vorec_pane

0xb1e6,	// (0x0004f021) cell_vorec_pane_g1

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp05

0x1db7,	// (0x00045bf2) cams_zoom_pane

0x1dc6,	// (0x00045c01) image_vga_pane

0x1de0,	// (0x00045c1b) main_camera_pane_g1

0x1df2,	// (0x00045c2d) main_camera_pane_g2

0x1e02,	// (0x00045c3d) main_camera_pane_g3

0x1e16,	// (0x00045c51) main_camera_pane_g4

0x1e2a,	// (0x00045c65) main_camera_pane_g5

0x1e3e,	// (0x00045c79) main_camera_pane_g6

0x1e52,	// (0x00045c8d) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00053055) main_camera_pane_g

0x1e66,	// (0x00045ca1) main_camera_pane_t1

0x1e7c,	// (0x00045cb7) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00053066) main_camera_pane_t

0x1eba,	// (0x00045cf5) cams_zoom_pane_cp_ParamLimits

0x1eba,	// (0x00045cf5) cams_zoom_pane_cp

0x1ee2,	// (0x00045d1d) image_cif_pane_ParamLimits

0x1ee2,	// (0x00045d1d) image_cif_pane

0x1f1d,	// (0x00045d58) image_subqcif_pane

0x1f27,	// (0x00045d62) main_video_pane_g1_ParamLimits

0x1f27,	// (0x00045d62) main_video_pane_g1

0x1f4b,	// (0x00045d86) main_video_pane_g2_ParamLimits

0x1f4b,	// (0x00045d86) main_video_pane_g2

0x1f81,	// (0x00045dbc) main_video_pane_g3_ParamLimits

0x1f81,	// (0x00045dbc) main_video_pane_g3

0x1faf,	// (0x00045dea) main_video_pane_g4_ParamLimits

0x1faf,	// (0x00045dea) main_video_pane_g4

0x1fdd,	// (0x00045e18) main_video_pane_g5_ParamLimits

0x1fdd,	// (0x00045e18) main_video_pane_g5

0xb1fc,	// (0x0004f037) main_video_pane_g6_ParamLimits

0xb1fc,	// (0x0004f037) main_video_pane_g6

0x0006,

0xf230,	// (0x0005306b) main_video_pane_g_ParamLimits

0xf230,	// (0x0005306b) main_video_pane_g

0x2006,	// (0x00045e41) main_video_pane_t1_ParamLimits

0x2006,	// (0x00045e41) main_video_pane_t1

0xb216,	// (0x0004f051) cams_zoom_pane_g1

0xb21f,	// (0x0004f05a) cams_zoom_pane_g2

0xb228,	// (0x0004f063) cams_zoom_pane_g3

0xb231,	// (0x0004f06c) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0005307a) cams_zoom_pane_g

0x2063,	// (0x00045e9e) grid_cams_pane

0x207d,	// (0x00045eb8) linegrid_cams_pane

0x208f,	// (0x00045eca) cell_cams_pane_ParamLimits

0x208f,	// (0x00045eca) cell_cams_pane

0xb23a,	// (0x0004f075) cams_burst_image_pane

0xb242,	// (0x0004f07d) cell_cams_pane_g1

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp03

0xb02e,	// (0x0004ee69) mp_bg_pane_g1

0xac65,	// (0x0004eaa0) bg_list_pane_cp03

0xdce9,	// (0x00051b24) bg_mp_pane

0xdcf1,	// (0x00051b2c) grid_mp_pane

0xdcf9,	// (0x00051b34) media_player_g1

0xdd03,	// (0x00051b3e) media_player_t1

0xdd11,	// (0x00051b4c) media_player_t2

0xdd1f,	// (0x00051b5a) media_player_t3

0xdd2d,	// (0x00051b68) media_player_t4

0xdd3b,	// (0x00051b76) media_player_t5

0xdd49,	// (0x00051b84) media_player_t6

0xdd57,	// (0x00051b92) media_player_t7

0x0006,

0xf5db,	// (0x00053416) media_player_t

0xdd65,	// (0x00051ba0) wait_bar_pane_cp02

0xf5c0,	// (0x000533fb) main_usb_pane_t

0x3f1d,	// (0x00047d58) cell_mp_pane

0xb02e,	// (0x0004ee69) cell_mp_pane_g1

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp06

0xb308,	// (0x0004f143) grid_skin_colour_pane

0xb310,	// (0x0004f14b) list_highlight_pane_cp03

0x20b1,	// (0x00045eec) skin_g1

0xb318,	// (0x0004f153) skin_t1

0xb327,	// (0x0004f162) skin_t2

0x0001,

0xf274,	// (0x000530af) skin_t

0x20bb,	// (0x00045ef6) cell_skin_colour_pane_ParamLimits

0x20bb,	// (0x00045ef6) cell_skin_colour_pane

0xb335,	// (0x0004f170) cell_skin_colour_pane_g1

0x212e,	// (0x00045f69) call_video_g1_ParamLimits

0x212e,	// (0x00045f69) call_video_g1

0x214a,	// (0x00045f85) call_video_g2_ParamLimits

0x214a,	// (0x00045f85) call_video_g2

0x0001,

0xf279,	// (0x000530b4) call_video_g_ParamLimits

0xf279,	// (0x000530b4) call_video_g

0x218f,	// (0x00045fca) call_video_uplink_pane_cp1_ParamLimits

0x218f,	// (0x00045fca) call_video_uplink_pane_cp1

0xb347,	// (0x0004f182) call_video_uplink_pane_cp2

0x2230,	// (0x0004606b) video_down_crop_pane_ParamLimits

0x2230,	// (0x0004606b) video_down_crop_pane

0x2319,	// (0x00046154) video_down_pane_ParamLimits

0x2319,	// (0x00046154) video_down_pane

0xb34f,	// (0x0004f18a) video_down_subqcif_pane_ParamLimits

0xb34f,	// (0x0004f18a) video_down_subqcif_pane

0xb369,	// (0x0004f1a4) video_down_subqcif_pane_cp_ParamLimits

0xb369,	// (0x0004f1a4) video_down_subqcif_pane_cp

0xb391,	// (0x0004f1cc) im_reading_pane_ParamLimits

0xb391,	// (0x0004f1cc) im_reading_pane

0x2422,	// (0x0004625d) im_writing_pane_ParamLimits

0x2422,	// (0x0004625d) im_writing_pane

0x2440,	// (0x0004627b) im_reading_pane_t1

0xb3ab,	// (0x0004f1e6) list_im_pane

0xb3bc,	// (0x0004f1f7) scroll_pane_cp07

0x247f,	// (0x000462ba) im_writing_pane_t1_ParamLimits

0x247f,	// (0x000462ba) im_writing_pane_t1

0xb3d5,	// (0x0004f210) im_writing_pane_t2_ParamLimits

0xb3d5,	// (0x0004f210) im_writing_pane_t2

0x0001,

0xf283,	// (0x000530be) im_writing_pane_t_ParamLimits

0xf283,	// (0x000530be) im_writing_pane_t

0xac65,	// (0x0004eaa0) input_focus_pane_cp04

0xac65,	// (0x0004eaa0) input_focus_pane_cp05

0x2494,	// (0x000462cf) list_im_single_pane_ParamLimits

0x2494,	// (0x000462cf) list_im_single_pane

0x24ad,	// (0x000462e8) list_single_im_pane_t1

0x3edd,	// (0x00047d18) blid_accuracy_pane

0x3ee5,	// (0x00047d20) blid_compass_pane

0x3eef,	// (0x00047d2a) main_location_t1

0x3eff,	// (0x00047d3a) main_location_t2

0x3f0f,	// (0x00047d4a) main_location_t3

0x0002,

0xf5ea,	// (0x00053425) main_location_t

0xac65,	// (0x0004eaa0) aid_levels_location

0xb02e,	// (0x0004ee69) blid_accuracy_pane_g1

0xb02e,	// (0x0004ee69) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00053120) blid_accuracy_pane_g

0xb41d,	// (0x0004f258) wml_content_pane

0xb45b,	// (0x0004f296) wml_button_pane_ParamLimits

0xb45b,	// (0x0004f296) wml_button_pane

0x24bc,	// (0x000462f7) wml_list_single_large_pane_ParamLimits

0x24bc,	// (0x000462f7) wml_list_single_large_pane

0x24d5,	// (0x00046310) wml_list_single_medium_pane_ParamLimits

0x24d5,	// (0x00046310) wml_list_single_medium_pane

0x24ef,	// (0x0004632a) wml_list_single_small_pane_ParamLimits

0x24ef,	// (0x0004632a) wml_list_single_small_pane

0xb46f,	// (0x0004f2aa) wml_selection_box_pane_ParamLimits

0xb46f,	// (0x0004f2aa) wml_selection_box_pane

0xb482,	// (0x0004f2bd) wml_list_single_pane_t1

0xb491,	// (0x0004f2cc) wml_list_single_medium_pane_t1

0xb4a0,	// (0x0004f2db) wml_list_single_large_pane_t1

0xb4af,	// (0x0004f2ea) input_focus_pane_cp02_ParamLimits

0xb4af,	// (0x0004f2ea) input_focus_pane_cp02

0xb4c2,	// (0x0004f2fd) wml_selection_box_pane_g1

0xb4cb,	// (0x0004f306) wml_selection_box_pane_t1_ParamLimits

0xb4cb,	// (0x0004f306) wml_selection_box_pane_t1

0xaec0,	// (0x0004ecfb) bg_wml_button_pane_ParamLimits

0xaec0,	// (0x0004ecfb) bg_wml_button_pane

0xb4e3,	// (0x0004f31e) wml_button_pane_g1

0xb4eb,	// (0x0004f326) wml_button_pane_t1

0xb4e3,	// (0x0004f31e) wml_button_bg_pane_g1

0xb4fb,	// (0x0004f336) wml_button_bg_pane_g2

0xb503,	// (0x0004f33e) wml_button_bg_pane_g3

0xb50b,	// (0x0004f346) wml_button_bg_pane_g4

0xb513,	// (0x0004f34e) wml_button_bg_pane_g5

0xb51b,	// (0x0004f356) wml_button_bg_pane_g6

0xb523,	// (0x0004f35e) wml_button_bg_pane_g7

0xb52b,	// (0x0004f366) wml_button_bg_pane_g8

0xb533,	// (0x0004f36e) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000530c3) wml_button_bg_pane_g

0x250e,	// (0x00046349) bg_list_pane_cp02

0xb53b,	// (0x0004f376) mce_header_pane_ParamLimits

0xb53b,	// (0x0004f376) mce_header_pane

0xb551,	// (0x0004f38c) mce_icon_pane

0xb551,	// (0x0004f38c) mce_image_pane

0xb55a,	// (0x0004f395) mce_text_pane_ParamLimits

0xb55a,	// (0x0004f395) mce_text_pane

0x2518,	// (0x00046353) scroll_pane_cp03

0xb453,	// (0x0004f28e) scroll_pane_cp04

0xb56d,	// (0x0004f3a8) scroll_pane_cp05_ParamLimits

0xb56d,	// (0x0004f3a8) scroll_pane_cp05

0x2522,	// (0x0004635d) mce_header_field_pane_ParamLimits

0x2522,	// (0x0004635d) mce_header_field_pane

0x253b,	// (0x00046376) mce_header_field_pane_2_ParamLimits

0x253b,	// (0x00046376) mce_header_field_pane_2

0x2551,	// (0x0004638c) mce_header_field_pane_3

0x2559,	// (0x00046394) list_single_mce_message_pane_ParamLimits

0x2559,	// (0x00046394) list_single_mce_message_pane

0x2575,	// (0x000463b0) list_single_mce_smart_pane_ParamLimits

0x2575,	// (0x000463b0) list_single_mce_smart_pane

0xb579,	// (0x0004f3b4) input_focus_pane_cp03

0xb582,	// (0x0004f3bd) list_header_data_pane

0x259c,	// (0x000463d7) mce_header_field_pane_t1

0x25ac,	// (0x000463e7) list_single_mce_header_pane_ParamLimits

0x25ac,	// (0x000463e7) list_single_mce_header_pane

0xb58a,	// (0x0004f3c5) list_single_mce_header_pane_t1

0xb599,	// (0x0004f3d4) list_single_mce_message_pane_g1

0xb5a1,	// (0x0004f3dc) list_single_mce_message_pane_t1

0x25de,	// (0x00046419) bg_cale_heading_pane_cp01_ParamLimits

0x25de,	// (0x00046419) bg_cale_heading_pane_cp01

0xb5af,	// (0x0004f3ea) bg_cale_pane_cp02_ParamLimits

0xb5af,	// (0x0004f3ea) bg_cale_pane_cp02

0x2611,	// (0x0004644c) cale_month_corner_pane

0x2627,	// (0x00046462) cale_month_day_heading_pane_ParamLimits

0x2627,	// (0x00046462) cale_month_day_heading_pane

0x265a,	// (0x00046495) cale_month_pane_g1_ParamLimits

0x265a,	// (0x00046495) cale_month_pane_g1

0x2686,	// (0x000464c1) cale_month_pane_g2_ParamLimits

0x2686,	// (0x000464c1) cale_month_pane_g2

0x26a7,	// (0x000464e2) cale_month_pane_g3_ParamLimits

0x26a7,	// (0x000464e2) cale_month_pane_g3

0x26e3,	// (0x0004651e) cale_month_pane_g4_ParamLimits

0x26e3,	// (0x0004651e) cale_month_pane_g4

0x271f,	// (0x0004655a) cale_month_pane_g5_ParamLimits

0x271f,	// (0x0004655a) cale_month_pane_g5

0x275b,	// (0x00046596) cale_month_pane_g6_ParamLimits

0x275b,	// (0x00046596) cale_month_pane_g6

0x2797,	// (0x000465d2) cale_month_pane_g7_ParamLimits

0x2797,	// (0x000465d2) cale_month_pane_g7

0x27d3,	// (0x0004660e) cale_month_pane_g8_ParamLimits

0x27d3,	// (0x0004660e) cale_month_pane_g8

0x280f,	// (0x0004664a) cale_month_pane_g9_ParamLimits

0x280f,	// (0x0004664a) cale_month_pane_g9

0x2845,	// (0x00046680) cale_month_pane_g10_ParamLimits

0x2845,	// (0x00046680) cale_month_pane_g10

0x286f,	// (0x000466aa) cale_month_pane_g11_ParamLimits

0x286f,	// (0x000466aa) cale_month_pane_g11

0x2899,	// (0x000466d4) cale_month_pane_g12_ParamLimits

0x2899,	// (0x000466d4) cale_month_pane_g12

0x28c7,	// (0x00046702) cale_month_pane_g13_ParamLimits

0x28c7,	// (0x00046702) cale_month_pane_g13

0x000c,

0xf29b,	// (0x000530d6) cale_month_pane_g_ParamLimits

0xf29b,	// (0x000530d6) cale_month_pane_g

0x28f5,	// (0x00046730) cale_month_week_pane

0x2906,	// (0x00046741) grid_cale_month_pane_ParamLimits

0x2906,	// (0x00046741) grid_cale_month_pane

0x2934,	// (0x0004676f) cale_month_day_heading_pane_t1

0x2992,	// (0x000467cd) cale_month_day_heading_pane_t2

0x29f7,	// (0x00046832) cale_month_day_heading_pane_t3

0x2a5c,	// (0x00046897) cale_month_day_heading_pane_t4

0x2ac1,	// (0x000468fc) cale_month_day_heading_pane_t5

0x2b26,	// (0x00046961) cale_month_day_heading_pane_t6

0x2b8b,	// (0x000469c6) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000530f1) cale_month_day_heading_pane_t

0xb17d,	// (0x0004efb8) bg_cale_side_pane_cp01

0x2bf0,	// (0x00046a2b) cale_month_week_pane_t1

0x2c07,	// (0x00046a42) cale_month_week_pane_t2

0x2c1e,	// (0x00046a59) cale_month_week_pane_t3

0x2c35,	// (0x00046a70) cale_month_week_pane_t4

0x2c4c,	// (0x00046a87) cale_month_week_pane_t5

0x2c63,	// (0x00046a9e) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00053100) cale_month_week_pane_t

0x2c82,	// (0x00046abd) cell_cale_month_pane_ParamLimits

0x2c82,	// (0x00046abd) cell_cale_month_pane

0xb60e,	// (0x0004f449) cell_cale_month_pane_g1

0x2d30,	// (0x00046b6b) cell_cale_month_pane_t1_ParamLimits

0x2d30,	// (0x00046b6b) cell_cale_month_pane_t1

0xb18b,	// (0x0004efc6) grid_highlight_pane_cp08

0xb02e,	// (0x0004ee69) main_smil_g1

0x2d4c,	// (0x00046b87) smil_status_pane

0xb61a,	// (0x0004f455) smil_text_pane

0xdc07,	// (0x00051a42) bg_popup_call3_rect_pane_g8

0xdc0f,	// (0x00051a4a) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000533b9) bg_popup_call3_rect_pane_g

0xde61,	// (0x00051c9c) smil_status_volume_pane_g1

0xb624,	// (0x0004f45f) smil_status_pane_t1

0xbadf,	// (0x0004f91a) volume_smil_pane

0xb63b,	// (0x0004f476) list_smil_text_pane

0x2d61,	// (0x00046b9c) scroll_pane_cp011

0x2d6c,	// (0x00046ba7) smil_text_list_pane_t1_ParamLimits

0x2d6c,	// (0x00046ba7) smil_text_list_pane_t1

0xb645,	// (0x0004f480) aid_volume_smil_ParamLimits

0xb645,	// (0x0004f480) aid_volume_smil

0xb02e,	// (0x0004ee69) smil_volume_pane_g1

0xb02e,	// (0x0004ee69) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00053120) smil_volume_pane_g

0xafb5,	// (0x0004edf0) listscroll_cale_day_pane

0xb667,	// (0x0004f4a2) bg_cale_pane

0xb67f,	// (0x0004f4ba) list_cale_pane

0xb690,	// (0x0004f4cb) scroll_pane_cp09

0xb6a1,	// (0x0004f4dc) cale_bg_pane_g1

0xb6a9,	// (0x0004f4e4) cale_bg_pane_g2

0xb6b1,	// (0x0004f4ec) cale_bg_pane_g3

0xb6b9,	// (0x0004f4f4) cale_bg_pane_g4

0xb6c1,	// (0x0004f4fc) cale_bg_pane_g5

0xb6c9,	// (0x0004f504) cale_bg_pane_g6

0xb6d1,	// (0x0004f50c) cale_bg_pane_g7

0xb6d9,	// (0x0004f514) cale_bg_pane_g8

0xb6e1,	// (0x0004f51c) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00053125) cale_bg_pane_g

0x2dc1,	// (0x00046bfc) list_cale_time_pane_ParamLimits

0x2dc1,	// (0x00046bfc) list_cale_time_pane

0x2dd6,	// (0x00046c11) list_cale_time_pane_g1_ParamLimits

0x2dd6,	// (0x00046c11) list_cale_time_pane_g1

0xb6e9,	// (0x0004f524) list_cale_time_pane_g2_ParamLimits

0xb6e9,	// (0x0004f524) list_cale_time_pane_g2

0x2de2,	// (0x00046c1d) list_cale_time_pane_g3_ParamLimits

0x2de2,	// (0x00046c1d) list_cale_time_pane_g3

0x2df0,	// (0x00046c2b) list_cale_time_pane_g4_ParamLimits

0x2df0,	// (0x00046c2b) list_cale_time_pane_g4

0x2dfe,	// (0x00046c39) list_cale_time_pane_g5_ParamLimits

0x2dfe,	// (0x00046c39) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00053138) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00053138) list_cale_time_pane_g

0x2e0c,	// (0x00046c47) list_cale_time_pane_t1_ParamLimits

0x2e0c,	// (0x00046c47) list_cale_time_pane_t1

0x2e34,	// (0x00046c6f) list_cale_time_pane_t2_ParamLimits

0x2e34,	// (0x00046c6f) list_cale_time_pane_t2

0x3150,	// (0x00046f8b) aid_blid_cardinal_pane

0x3192,	// (0x00046fcd) compass_pane_t4

0x2e5c,	// (0x00046c97) list_cale_time_pane_t4_ParamLimits

0x2e5c,	// (0x00046c97) list_cale_time_pane_t4

0x31a0,	// (0x00046fdb) compass_pane_t5

0x31b0,	// (0x00046feb) compass_pane_t6

0x31be,	// (0x00046ff9) compass_pane_t7

0xc8f1,	// (0x0005072c) navi_pane_cc_t1

0xca46,	// (0x00050881) aid_phob_thumbnail_center_pane

0x38a3,	// (0x000476de) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00053145) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00053145) list_cale_time_pane_t

0xa8bc,	// (0x0004e6f7) bg_popup_window_pane_cp02_ParamLimits

0xa8bc,	// (0x0004e6f7) bg_popup_window_pane_cp02

0xb703,	// (0x0004f53e) heading_pane_cp01_ParamLimits

0xb703,	// (0x0004f53e) heading_pane_cp01

0xb70f,	// (0x0004f54a) loc_req_pane_ParamLimits

0xb70f,	// (0x0004f54a) loc_req_pane

0xb71f,	// (0x0004f55a) loc_type_pane_ParamLimits

0xb71f,	// (0x0004f55a) loc_type_pane

0xb731,	// (0x0004f56c) loc_type_pane_t1_ParamLimits

0xb731,	// (0x0004f56c) loc_type_pane_t1

0xb743,	// (0x0004f57e) loc_type_pane_t2_ParamLimits

0xb743,	// (0x0004f57e) loc_type_pane_t2

0xb755,	// (0x0004f590) loc_type_pane_t3_ParamLimits

0xb755,	// (0x0004f590) loc_type_pane_t3

0x0002,

0xf311,	// (0x0005314c) loc_type_pane_t_ParamLimits

0xf311,	// (0x0005314c) loc_type_pane_t

0xb767,	// (0x0004f5a2) list_loc_req_pane

0xb771,	// (0x0004f5ac) scroll_pane_cp012

0x2e84,	// (0x00046cbf) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e84,	// (0x00046cbf) list_single_loc_request_popup_menu_pane

0xb77c,	// (0x0004f5b7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb77c,	// (0x0004f5b7) list_single_loc_request_popup_menu_pane_g1

0xb788,	// (0x0004f5c3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb788,	// (0x0004f5c3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00053153) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00053153) list_single_loc_request_popup_menu_pane_g

0xb794,	// (0x0004f5cf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb794,	// (0x0004f5cf) list_single_loc_request_popup_menu_pane_t1

0xaec0,	// (0x0004ecfb) bg_popup_window_pane_cp03_ParamLimits

0xaec0,	// (0x0004ecfb) bg_popup_window_pane_cp03

0xb7aa,	// (0x0004f5e5) heading_loc_req_pane_ParamLimits

0xb7aa,	// (0x0004f5e5) heading_loc_req_pane

0x2e91,	// (0x00046ccc) popup_dyc_status_message_window_g1_ParamLimits

0x2e91,	// (0x00046ccc) popup_dyc_status_message_window_g1

0x2ea5,	// (0x00046ce0) popup_dyc_status_message_window_t1_ParamLimits

0x2ea5,	// (0x00046ce0) popup_dyc_status_message_window_t1

0x2eba,	// (0x00046cf5) popup_dyc_status_message_window_t2_ParamLimits

0x2eba,	// (0x00046cf5) popup_dyc_status_message_window_t2

0x2ecf,	// (0x00046d0a) popup_dyc_status_message_window_t3_ParamLimits

0x2ecf,	// (0x00046d0a) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00053158) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00053158) popup_dyc_status_message_window_t

0xac65,	// (0x0004eaa0) bg_heading_pane_cp01

0xb7b6,	// (0x0004f5f1) heading_loc_req_pane_g1

0xb7be,	// (0x0004f5f9) heading_loc_req_pane_g2

0xb7c6,	// (0x0004f601) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0005315f) heading_loc_req_pane_g

0xb7ce,	// (0x0004f609) heading_loc_req_pane_t1

0xb855,	// (0x0004f690) bg_popup_sub_pane_cp01_ParamLimits

0xb855,	// (0x0004f690) bg_popup_sub_pane_cp01

0xb863,	// (0x0004f69e) popup_cale_events_window_g1_ParamLimits

0xb863,	// (0x0004f69e) popup_cale_events_window_g1

0xb883,	// (0x0004f6be) popup_cale_events_window_g2_ParamLimits

0xb883,	// (0x0004f6be) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00053193) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00053193) popup_cale_events_window_g

0xb8a3,	// (0x0004f6de) popup_cale_events_window_t1_ParamLimits

0xb8a3,	// (0x0004f6de) popup_cale_events_window_t1

0xb8b5,	// (0x0004f6f0) popup_cale_events_window_t2_ParamLimits

0xb8b5,	// (0x0004f6f0) popup_cale_events_window_t2

0xb8f3,	// (0x0004f72e) popup_cale_events_window_t3_ParamLimits

0xb8f3,	// (0x0004f72e) popup_cale_events_window_t3

0xb92d,	// (0x0004f768) popup_cale_events_window_t4_ParamLimits

0xb92d,	// (0x0004f768) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00053198) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00053198) popup_cale_events_window_t

0x2f03,	// (0x00046d3e) call_type_pane

0x2f13,	// (0x00046d4e) popup_call_status_window_g1

0x2f27,	// (0x00046d62) popup_call_status_window_g2

0x2f3b,	// (0x00046d76) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000531a1) popup_call_status_window_g

0xb963,	// (0x0004f79e) call_type_pane_g1

0xb96c,	// (0x0004f7a7) call_type_pane_g2

0x0001,

0xf36d,	// (0x000531a8) call_type_pane_g

0xac65,	// (0x0004eaa0) bg_popup_sub_pane_cp02

0xb975,	// (0x0004f7b0) listscroll_popup_wml_pane

0xb97d,	// (0x0004f7b8) list_wml_pane

0xb987,	// (0x0004f7c2) scroll_pane_cp013

0xb992,	// (0x0004f7cd) list_single_graphic_popup_wml_pane_ParamLimits

0xb992,	// (0x0004f7cd) list_single_graphic_popup_wml_pane

0xb02e,	// (0x0004ee69) list_single_graphic_popup_wml_pane_g1

0xb9a6,	// (0x0004f7e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000531ad) list_single_graphic_popup_wml_pane_g

0xb9ae,	// (0x0004f7e9) list_single_graphic_popup_wml_pane_t1

0xb9c4,	// (0x0004f7ff) aid_call_pane

0xaeb8,	// (0x0004ecf3) popup_clock_analogue_window_g1

0xaeb8,	// (0x0004ecf3) popup_clock_analogue_window_g2

0xb9cc,	// (0x0004f807) popup_clock_analogue_window_g3

0xb9cc,	// (0x0004f807) popup_clock_analogue_window_g4

0xb02e,	// (0x0004ee69) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000531b2) popup_clock_analogue_window_g

0xb9d4,	// (0x0004f80f) popup_clock_analogue_window_t1

0xb9e2,	// (0x0004f81d) clock_digital_number_pane_ParamLimits

0xb9e2,	// (0x0004f81d) clock_digital_number_pane

0xb9ee,	// (0x0004f829) clock_digital_number_pane_cp02_ParamLimits

0xb9ee,	// (0x0004f829) clock_digital_number_pane_cp02

0xb9fa,	// (0x0004f835) clock_digital_number_pane_cp03_ParamLimits

0xb9fa,	// (0x0004f835) clock_digital_number_pane_cp03

0xba06,	// (0x0004f841) clock_digital_number_pane_cp04_ParamLimits

0xba06,	// (0x0004f841) clock_digital_number_pane_cp04

0xba12,	// (0x0004f84d) clock_digital_separator_pane_ParamLimits

0xba12,	// (0x0004f84d) clock_digital_separator_pane

0xba1e,	// (0x0004f859) popup_clock_digital_window_t1

0xb02e,	// (0x0004ee69) clock_digital_number_pane_g1

0xb02e,	// (0x0004ee69) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00053120) clock_digital_number_pane_g

0xb02e,	// (0x0004ee69) clock_digital_separator_pane_g1

0xb02e,	// (0x0004ee69) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00053120) clock_digital_separator_pane_g

0xac65,	// (0x0004eaa0) bg_popup_window_pane_cp04

0xc751,	// (0x0005058c) heading_pane_cp03

0xc759,	// (0x00050594) listscroll_popup_gms_pane

0xc761,	// (0x0005059c) grid_large_graphic_popup_pane

0xc76b,	// (0x000505a6) listscroll_popup_gms_pane_g1

0xc773,	// (0x000505ae) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000531bd) listscroll_popup_gms_pane_g

0xb453,	// (0x0004f28e) scroll_pane_cp014

0x2f4b,	// (0x00046d86) cell_large_graphic_popup_pane_ParamLimits

0x2f4b,	// (0x00046d86) cell_large_graphic_popup_pane

0x2f63,	// (0x00046d9e) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f63,	// (0x00046d9e) cell_large_graphic_popup_pane_g1

0xc77b,	// (0x000505b6) cell_large_graphic_popup_pane_g2_ParamLimits

0xc77b,	// (0x000505b6) cell_large_graphic_popup_pane_g2

0xc787,	// (0x000505c2) cell_large_graphic_popup_pane_g3_ParamLimits

0xc787,	// (0x000505c2) cell_large_graphic_popup_pane_g3

0xc794,	// (0x000505cf) cell_large_graphic_popup_pane_g4_ParamLimits

0xc794,	// (0x000505cf) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000531c2) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000531c2) cell_large_graphic_popup_pane_g

0xc7a4,	// (0x000505df) grid_highlight_pane_cp010

0xb02e,	// (0x0004ee69) bg_popup_call_pane_g1

0xc7ae,	// (0x000505e9) list_single_graphic_popup_conf_pane_ParamLimits

0xc7ae,	// (0x000505e9) list_single_graphic_popup_conf_pane

0xc7c0,	// (0x000505fb) list_highlight_pane_cp01

0xc7c9,	// (0x00050604) list_single_graphic_popup_conf_pane_g1

0xc7d1,	// (0x0005060c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000531cb) list_single_graphic_popup_conf_pane_g

0xc7d9,	// (0x00050614) list_single_graphic_popup_conf_pane_t1

0xc7e7,	// (0x00050622) linegrid_cams_pane_g1

0x2f6f,	// (0x00046daa) linegrid_cams_pane_g2

0xb1be,	// (0x0004eff9) linegrid_cams_pane_g3

0xc7f0,	// (0x0005062b) linegrid_cams_pane_g4

0x2f78,	// (0x00046db3) linegrid_cams_pane_g5

0x2f81,	// (0x00046dbc) linegrid_cams_pane_g6

0xb1c7,	// (0x0004f002) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000531d0) linegrid_cams_pane_g

0xc7f9,	// (0x00050634) popup_clock_analogue_window

0xc7f9,	// (0x00050634) popup_clock_digital_window

0xac65,	// (0x0004eaa0) popup_phob_thumbnail_window

0xb02e,	// (0x0004ee69) call_video_uplink_pane_g1

0xc802,	// (0x0005063d) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x000531df) call_video_uplink_pane_g

0xc80a,	// (0x00050645) video_uplink_pane

0xc812,	// (0x0005064d) mce_image_pane_g1

0x2f8c,	// (0x00046dc7) mce_image_pane_g2

0x2f96,	// (0x00046dd1) mce_image_pane_g3

0x2fa0,	// (0x00046ddb) mce_image_pane_g4

0x2fa8,	// (0x00046de3) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x000531e4) mce_image_pane_g

0xc81c,	// (0x00050657) control_top_pane_stacon_cp01_ParamLimits

0xc81c,	// (0x00050657) control_top_pane_stacon_cp01

0xc830,	// (0x0005066b) uni_indicator_pane_stacon_cp01_ParamLimits

0xc830,	// (0x0005066b) uni_indicator_pane_stacon_cp01

0xc841,	// (0x0005067c) bg_popup_sub_pane_cp03

0x2fb0,	// (0x00046deb) chi_dic_find_pane

0x2fb8,	// (0x00046df3) listscroll_chi_dic_pane

0x2fc1,	// (0x00046dfc) main_pane_chidic_g1

0x2fd4,	// (0x00046e0f) chi_dic_find_pane_t1

0xc84b,	// (0x00050686) find_chidic_pane

0xc854,	// (0x0005068f) chi_dic_list_pane_ParamLimits

0xc854,	// (0x0005068f) chi_dic_list_pane

0xc865,	// (0x000506a0) scroll_pane_cp020

0x2fe2,	// (0x00046e1d) find_chidic_pane_t1

0xac65,	// (0x0004eaa0) input_focus_pane_cp06

0x2ff1,	// (0x00046e2c) list_chi_dic_pane_ParamLimits

0x2ff1,	// (0x00046e2c) list_chi_dic_pane

0x3003,	// (0x00046e3e) list_chi_dic_pane_t1_ParamLimits

0x3003,	// (0x00046e3e) list_chi_dic_pane_t1

0xac65,	// (0x0004eaa0) list_highlight_pane_cp020

0xc86d,	// (0x000506a8) bg_cale_heading_pane_g1

0x3016,	// (0x00046e51) bg_cale_heading_pane_g2

0x301e,	// (0x00046e59) bg_cale_heading_pane_g3

0x3026,	// (0x00046e61) bg_cale_heading_pane_g4

0x302e,	// (0x00046e69) bg_cale_heading_pane_g5

0x3036,	// (0x00046e71) bg_cale_heading_pane_g6

0x303e,	// (0x00046e79) bg_cale_heading_pane_g7

0x3046,	// (0x00046e81) bg_cale_heading_pane_g8

0x304e,	// (0x00046e89) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000531ef) bg_cale_heading_pane_g

0xc86d,	// (0x000506a8) bg_cale_side_pane_g1

0x3056,	// (0x00046e91) bg_cale_side_pane_g2

0x3060,	// (0x00046e9b) bg_cale_side_pane_g3

0x306a,	// (0x00046ea5) bg_cale_side_pane_g4

0x3074,	// (0x00046eaf) bg_cale_side_pane_g5

0x307e,	// (0x00046eb9) bg_cale_side_pane_g6

0x3088,	// (0x00046ec3) bg_cale_side_pane_g7

0x3092,	// (0x00046ecd) bg_cale_side_pane_g8

0x309a,	// (0x00046ed5) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00053202) bg_cale_side_pane_g

0x30a2,	// (0x00046edd) popup_call_status_window_ParamLimits

0x30a2,	// (0x00046edd) popup_call_status_window

0xc875,	// (0x000506b0) stacon_top_pane

0xc87d,	// (0x000506b8) status_pane_ParamLimits

0xc87d,	// (0x000506b8) status_pane

0xc892,	// (0x000506cd) status_small_pane

0xc89a,	// (0x000506d5) control_pane

0xac65,	// (0x0004eaa0) stacon_bottom_pane

0xc8a2,	// (0x000506dd) list_single_mce_smart_pane_t1_ParamLimits

0xc8a2,	// (0x000506dd) list_single_mce_smart_pane_t1

0xc8b5,	// (0x000506f0) list_single_mce_smart_pane_t2_ParamLimits

0xc8b5,	// (0x000506f0) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00053215) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00053215) list_single_mce_smart_pane_t

0x30ef,	// (0x00046f2a) compass_pane

0x30fa,	// (0x00046f35) main_location2_pane_t1

0x3110,	// (0x00046f4b) main_location2_pane_t2

0x3126,	// (0x00046f61) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0005321a) main_location2_pane_t

0xc8d4,	// (0x0005070f) compass_pane_g1_ParamLimits

0xc8d4,	// (0x0005070f) compass_pane_g1

0x3174,	// (0x00046faf) compass_pane_t1

0x3183,	// (0x00046fbe) compass_pane_t2

0x0005,

0xf3e8,	// (0x00053223) compass_pane_t

0x31ce,	// (0x00047009) text_secondary_cp61

0xc8e8,	// (0x00050723) navi_pane_cams_g5

0xc90b,	// (0x00050746) navi_pane_im_t1

0xc919,	// (0x00050754) navi_pane_mp_g1_ParamLimits

0xc919,	// (0x00050754) navi_pane_mp_g1

0xc92d,	// (0x00050768) navi_pane_mp_g2_ParamLimits

0xc92d,	// (0x00050768) navi_pane_mp_g2

0xc939,	// (0x00050774) navi_pane_mp_g3_ParamLimits

0xc939,	// (0x00050774) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00053237) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00053237) navi_pane_mp_g

0xc945,	// (0x00050780) navi_pane_mp_t1

0xc953,	// (0x0005078e) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0005323e) navi_pane_mp_t

0xc98f,	// (0x000507ca) navi_pane_vt_g1

0xc945,	// (0x00050780) navi_pane_vt_t1

0xc997,	// (0x000507d2) navi_slider_pane

0xc99f,	// (0x000507da) zooming_pane

0xc9a7,	// (0x000507e2) navi_slider_pane_g1

0xba3b,	// (0x0004f876) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00053245) navi_slider_pane_g

0xc9cb,	// (0x00050806) aid_levels_zoom

0xc9d3,	// (0x0005080e) zooming_pane_g1

0xc9db,	// (0x00050816) zooming_pane_g2

0xc9db,	// (0x00050816) zooming_pane_g3

0x0002,

0xf419,	// (0x00053254) zooming_pane_g

0xc9e3,	// (0x0005081e) level_10_zoom

0xc9ec,	// (0x00050827) level_11_zoom

0xc9f5,	// (0x00050830) level_1_zoom

0xc9fe,	// (0x00050839) level_2_zoom

0xca07,	// (0x00050842) level_3_zoom

0xca10,	// (0x0005084b) level_4_zoom

0xca19,	// (0x00050854) level_5_zoom

0xca22,	// (0x0005085d) level_6_zoom

0xca2b,	// (0x00050866) level_7_zoom

0xca34,	// (0x0005086f) level_8_zoom

0xca3d,	// (0x00050878) level_9_zoom

0xca4e,	// (0x00050889) popup_phob_thumbnail_window_g1

0xca56,	// (0x00050891) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0005325b) popup_phob_thumbnail_window_g

0xdd6d,	// (0x00051ba8) level_1_location

0xdd75,	// (0x00051bb0) level_2_location

0xdd7d,	// (0x00051bb8) level_3_location

0xdd85,	// (0x00051bc0) level_4_location

0xc99f,	// (0x000507da) level_5_location

0x330f,	// (0x0004714a) mce_icon_pane_g1

0x3317,	// (0x00047152) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00053260) mce_icon_pane_g

0x331f,	// (0x0004715a) main_mup_pane_g1_ParamLimits

0x331f,	// (0x0004715a) main_mup_pane_g1

0x3335,	// (0x00047170) main_mup_pane_g2_ParamLimits

0x3335,	// (0x00047170) main_mup_pane_g2

0x334d,	// (0x00047188) main_mup_pane_g3_ParamLimits

0x334d,	// (0x00047188) main_mup_pane_g3

0x3365,	// (0x000471a0) main_mup_pane_g4_ParamLimits

0x3365,	// (0x000471a0) main_mup_pane_g4

0x3377,	// (0x000471b2) main_mup_pane_g5_ParamLimits

0x3377,	// (0x000471b2) main_mup_pane_g5

0x3393,	// (0x000471ce) main_mup_pane_g6_ParamLimits

0x3393,	// (0x000471ce) main_mup_pane_g6

0x33ad,	// (0x000471e8) main_mup_pane_g7_ParamLimits

0x33ad,	// (0x000471e8) main_mup_pane_g7

0x33cb,	// (0x00047206) main_mup_pane_g8_ParamLimits

0x33cb,	// (0x00047206) main_mup_pane_g8

0x33e9,	// (0x00047224) main_mup_pane_g9_ParamLimits

0x33e9,	// (0x00047224) main_mup_pane_g9

0x3405,	// (0x00047240) main_mup_pane_g10_ParamLimits

0x3405,	// (0x00047240) main_mup_pane_g10

0x3423,	// (0x0004725e) main_mup_pane_g11_ParamLimits

0x3423,	// (0x0004725e) main_mup_pane_g11

0x343d,	// (0x00047278) main_mup_pane_g12_ParamLimits

0x343d,	// (0x00047278) main_mup_pane_g12

0x3453,	// (0x0004728e) main_mup_pane_g13_ParamLimits

0x3453,	// (0x0004728e) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00053265) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00053265) main_mup_pane_g

0x3467,	// (0x000472a2) main_mup_pane_t1_ParamLimits

0x3467,	// (0x000472a2) main_mup_pane_t1

0x3483,	// (0x000472be) main_mup_pane_t2_ParamLimits

0x3483,	// (0x000472be) main_mup_pane_t2

0x349b,	// (0x000472d6) main_mup_pane_t3_ParamLimits

0x349b,	// (0x000472d6) main_mup_pane_t3

0x34b3,	// (0x000472ee) main_mup_pane_t4_ParamLimits

0x34b3,	// (0x000472ee) main_mup_pane_t4

0x34d1,	// (0x0004730c) main_mup_pane_t5_ParamLimits

0x34d1,	// (0x0004730c) main_mup_pane_t5

0x34e6,	// (0x00047321) main_mup_pane_t6_ParamLimits

0x34e6,	// (0x00047321) main_mup_pane_t6

0x0005,

0xf445,	// (0x00053280) main_mup_pane_t_ParamLimits

0xf445,	// (0x00053280) main_mup_pane_t

0x34f8,	// (0x00047333) mup_progress_pane_ParamLimits

0x34f8,	// (0x00047333) mup_progress_pane

0x3504,	// (0x0004733f) mup_visualizer_pane_ParamLimits

0x3504,	// (0x0004733f) mup_visualizer_pane

0x3536,	// (0x00047371) mup_volume_pane_ParamLimits

0x3536,	// (0x00047371) mup_volume_pane

0xca5e,	// (0x00050899) mup_visualizer_pane_g1_ParamLimits

0xca5e,	// (0x00050899) mup_visualizer_pane_g1

0xca5e,	// (0x00050899) mup_visualizer_pane_g2_ParamLimits

0xca5e,	// (0x00050899) mup_visualizer_pane_g2

0xc8d4,	// (0x0005070f) mup_visualizer_pane_g3_ParamLimits

0xc8d4,	// (0x0005070f) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0005328d) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0005328d) mup_visualizer_pane_g

0xb02e,	// (0x0004ee69) mup_volume_pane_g1

0xca74,	// (0x000508af) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00053294) mup_volume_pane_g

0xb02e,	// (0x0004ee69) mup_progress_pane_g1

0xca7d,	// (0x000508b8) mup_progress_pane_g2

0xca86,	// (0x000508c1) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00053299) mup_progress_pane_g

0xac65,	// (0x0004eaa0) bg_popup_window_pane_cp05

0xca8f,	// (0x000508ca) heading_pane_cp02_ParamLimits

0xca8f,	// (0x000508ca) heading_pane_cp02

0xcaab,	// (0x000508e6) list_popup_blid_pane

0xcab3,	// (0x000508ee) list_blid_sat_info_pane_ParamLimits

0xcab3,	// (0x000508ee) list_blid_sat_info_pane

0xcac6,	// (0x00050901) list_blid_sat_info_pane_g1

0xcace,	// (0x00050909) list_blid_sat_info_pane_t1

0x3660,	// (0x0004749b) mup_equalizer_pane_ParamLimits

0x3660,	// (0x0004749b) mup_equalizer_pane

0x3681,	// (0x000474bc) mup_equalizer_pane_cp1_ParamLimits

0x3681,	// (0x000474bc) mup_equalizer_pane_cp1

0x36a2,	// (0x000474dd) mup_equalizer_pane_cp2_ParamLimits

0x36a2,	// (0x000474dd) mup_equalizer_pane_cp2

0x36c7,	// (0x00047502) mup_equalizer_pane_cp3_ParamLimits

0x36c7,	// (0x00047502) mup_equalizer_pane_cp3

0x36f0,	// (0x0004752b) mup_equalizer_pane_cp4_ParamLimits

0x36f0,	// (0x0004752b) mup_equalizer_pane_cp4

0x3719,	// (0x00047554) mup_equalizer_pane_cp5

0x3731,	// (0x0004756c) mup_equalizer_pane_cp6

0x3749,	// (0x00047584) mup_equalizer_pane_cp7

0xdc87,	// (0x00051ac2) bg_popup_call_poc_act_pane_g9

0xdc8f,	// (0x00051aca) bg_popup_call_poc_act_pane_g10

0xdc97,	// (0x00051ad2) bg_popup_call_poc_act_pane_g11

0x000a,

0xaec0,	// (0x0004ecfb) mup_scale_pane

0xb02e,	// (0x0004ee69) mup_scale_pane_g1

0xcadc,	// (0x00050917) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000532b5) mup_scale_pane_g

0xcb00,	// (0x0005093b) msg_data_pane

0xcb08,	// (0x00050943) scroll_pane_cp017

0x07a1,	// (0x000445dc) bg_list_pane_cp04_ParamLimits

0x07a1,	// (0x000445dc) bg_list_pane_cp04

0xcb10,	// (0x0005094b) msg_data_pane_g1

0x3773,	// (0x000475ae) msg_data_pane_g2

0x377d,	// (0x000475b8) msg_data_pane_g3

0x3787,	// (0x000475c2) msg_data_pane_g4

0x378f,	// (0x000475ca) msg_data_pane_g5

0x3797,	// (0x000475d2) msg_data_pane_g6

0x379f,	// (0x000475da) msg_data_pane_g7

0x0006,

0xf489,	// (0x000532c4) msg_data_pane_g

0x07c7,	// (0x00044602) msg_text_pane_ParamLimits

0x07c7,	// (0x00044602) msg_text_pane

0x37a7,	// (0x000475e2) qrid_highlight_pane_cp011_ParamLimits

0x37a7,	// (0x000475e2) qrid_highlight_pane_cp011

0xac65,	// (0x0004eaa0) msg_body_pane

0xac65,	// (0x0004eaa0) msg_header_pane

0xcb21,	// (0x0005095c) input_focus_pane_cp07

0x0806,	// (0x00044641) msg_header_pane_t1_ParamLimits

0x0806,	// (0x00044641) msg_header_pane_t1

0x081a,	// (0x00044655) msg_header_pane_t2_ParamLimits

0x081a,	// (0x00044655) msg_header_pane_t2

0x0001,

0xf49d,	// (0x000532d8) msg_header_pane_t_ParamLimits

0xf49d,	// (0x000532d8) msg_header_pane_t

0xcb36,	// (0x00050971) msg_body_pane_g1

0x082c,	// (0x00044667) msg_body_pane_t1_ParamLimits

0x082c,	// (0x00044667) msg_body_pane_t1

0x085d,	// (0x00044698) msg_body_pane_t2_ParamLimits

0x085d,	// (0x00044698) msg_body_pane_t2

0x086f,	// (0x000446aa) msg_body_pane_t3_ParamLimits

0x086f,	// (0x000446aa) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x000532dd) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x000532dd) msg_body_pane_t

0x37f7,	// (0x00047632) main_viewer_pane_g1_ParamLimits

0x37f7,	// (0x00047632) main_viewer_pane_g1

0x3805,	// (0x00047640) main_viewer_pane_g2_ParamLimits

0x3805,	// (0x00047640) main_viewer_pane_g2

0x3813,	// (0x0004764e) main_viewer_pane_g3_ParamLimits

0x3813,	// (0x0004764e) main_viewer_pane_g3

0x3822,	// (0x0004765d) main_viewer_pane_g4_ParamLimits

0x3822,	// (0x0004765d) main_viewer_pane_g4

0xba65,	// (0x0004f8a0) main_viewer_pane_g5_ParamLimits

0xba65,	// (0x0004f8a0) main_viewer_pane_g5

0xba65,	// (0x0004f8a0) main_viewer_pane_g7_ParamLimits

0xba65,	// (0x0004f8a0) main_viewer_pane_g7

0xba77,	// (0x0004f8b2) main_viewer_pane_g8_ParamLimits

0xba77,	// (0x0004f8b2) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000532ed) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000532ed) main_viewer_pane_g

0xcb3e,	// (0x00050979) viewer_content_pane_ParamLimits

0xcb3e,	// (0x00050979) viewer_content_pane

0x3860,	// (0x0004769b) main_postcard_pane_g1_ParamLimits

0x3860,	// (0x0004769b) main_postcard_pane_g1

0x3876,	// (0x000476b1) main_postcard_pane_g2_ParamLimits

0x3876,	// (0x000476b1) main_postcard_pane_g2

0x388c,	// (0x000476c7) main_postcard_pane_g3_ParamLimits

0x388c,	// (0x000476c7) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000532fe) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000532fe) main_postcard_pane_g

0x38a3,	// (0x000476de) main_postcard_pane_g4

0xde74,	// (0x00051caf) smil_status_volume_pane_g2

0x38e6,	// (0x00047721) postcard_pane_ParamLimits

0x38e6,	// (0x00047721) postcard_pane

0xcb4c,	// (0x00050987) postcard_pane_g1_ParamLimits

0xcb4c,	// (0x00050987) postcard_pane_g1

0x3936,	// (0x00047771) postcard_pane_g2_ParamLimits

0x3936,	// (0x00047771) postcard_pane_g2

0x3942,	// (0x0004777d) postcard_pane_g3_ParamLimits

0x3942,	// (0x0004777d) postcard_pane_g3

0xcb5a,	// (0x00050995) postcard_pane_g4_ParamLimits

0xcb5a,	// (0x00050995) postcard_pane_g4

0x394e,	// (0x00047789) postcard_pane_g5_ParamLimits

0x394e,	// (0x00047789) postcard_pane_g5

0x3960,	// (0x0004779b) postcard_pane_g6_ParamLimits

0x3960,	// (0x0004779b) postcard_pane_g6

0xcb4c,	// (0x00050987) postcard_pane_g7_ParamLimits

0xcb4c,	// (0x00050987) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0005330b) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0005330b) postcard_pane_g

0x3978,	// (0x000477b3) main_mp2_pane_g1_ParamLimits

0x3978,	// (0x000477b3) main_mp2_pane_g1

0x3986,	// (0x000477c1) main_mp2_pane_g2_ParamLimits

0x3986,	// (0x000477c1) main_mp2_pane_g2

0x3992,	// (0x000477cd) main_mp2_pane_g3_ParamLimits

0x3992,	// (0x000477cd) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0005331a) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0005331a) main_mp2_pane_g

0x399e,	// (0x000477d9) main_mp2_pane_t1_ParamLimits

0x399e,	// (0x000477d9) main_mp2_pane_t1

0x39b5,	// (0x000477f0) main_mp2_pane_t2_ParamLimits

0x39b5,	// (0x000477f0) main_mp2_pane_t2

0x39c9,	// (0x00047804) main_mp2_pane_t3_ParamLimits

0x39c9,	// (0x00047804) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00053321) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00053321) main_mp2_pane_t

0xcb68,	// (0x000509a3) pec_content_pane_ParamLimits

0xcb68,	// (0x000509a3) pec_content_pane

0xb453,	// (0x0004f28e) scroll_pane_cp015

0xcb7a,	// (0x000509b5) pec_attribute_pane_ParamLimits

0xcb7a,	// (0x000509b5) pec_attribute_pane

0x39db,	// (0x00047816) pec_content_pane_g1_ParamLimits

0x39db,	// (0x00047816) pec_content_pane_g1

0xcb8a,	// (0x000509c5) pec_content_pane_t1_ParamLimits

0xcb8a,	// (0x000509c5) pec_content_pane_t1

0xcb9c,	// (0x000509d7) pec_content_pane_t2_ParamLimits

0xcb9c,	// (0x000509d7) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00053328) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00053328) pec_content_pane_t

0x39e7,	// (0x00047822) list_single_graphic_pane_cp01_ParamLimits

0x39e7,	// (0x00047822) list_single_graphic_pane_cp01

0xaec0,	// (0x0004ecfb) bg_popup_sub_pane_cp04

0xcbae,	// (0x000509e9) popup_mup_playback_window_g1

0xcbba,	// (0x000509f5) popup_mup_playback_window_t1

0xcbcf,	// (0x00050a0a) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0005332d) popup_mup_playback_window_t

0xcc06,	// (0x00050a41) main_image_pane_g1_ParamLimits

0xcc06,	// (0x00050a41) main_image_pane_g1

0xcc49,	// (0x00050a84) scroll_pane_cp018_ParamLimits

0xcc49,	// (0x00050a84) scroll_pane_cp018

0xcc61,	// (0x00050a9c) scroll_pane_cp016_ParamLimits

0xcc61,	// (0x00050a9c) scroll_pane_cp016

0x3ab9,	// (0x000478f4) smil2_image_pane_ParamLimits

0x3ab9,	// (0x000478f4) smil2_image_pane

0x3aef,	// (0x0004792a) smil2_root_pane_ParamLimits

0x3aef,	// (0x0004792a) smil2_root_pane

0x3b27,	// (0x00047962) smil2_text_pane_ParamLimits

0x3b27,	// (0x00047962) smil2_text_pane

0xac65,	// (0x0004eaa0) bg_list_pane_cp06

0xcc9d,	// (0x00050ad8) grid_radio_pane

0xac65,	// (0x0004eaa0) bg_popup_window_pane_cp06

0xcca7,	// (0x00050ae2) main_fmradio_pane_t1

0xc751,	// (0x0005058c) heading_pane_cp04

0xccb5,	// (0x00050af0) main_fmradio_pane_t2

0xdc9f,	// (0x00051ada) popup_cale_lunar_info_window_g1

0xccc3,	// (0x00050afe) main_fmradio_pane_t3

0xdca7,	// (0x00051ae2) popup_cale_lunar_info_window_g2

0xccd3,	// (0x00050b0e) main_fmradio_pane_t4

0x0001,

0xcce1,	// (0x00050b1c) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00053408) popup_cale_lunar_info_window_g

0xf507,	// (0x00053342) main_fmradio_pane_t

0xccef,	// (0x00050b2a) wait_bar_pane_cp03

0xccf7,	// (0x00050b32) cell_fmradio_pane_ParamLimits

0xccf7,	// (0x00050b32) cell_fmradio_pane

0xcb4c,	// (0x00050987) cell_fmradio_pane_g1_ParamLimits

0xcb4c,	// (0x00050987) cell_fmradio_pane_g1

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp011

0xcd0c,	// (0x00050b47) poc_content_pane_ParamLimits

0xcd0c,	// (0x00050b47) poc_content_pane

0xcd1e,	// (0x00050b59) scroll_pane_cp019

0x3bb7,	// (0x000479f2) popup_call_poc_act_window_ParamLimits

0x3bb7,	// (0x000479f2) popup_call_poc_act_window

0x3bdb,	// (0x00047a16) popup_call_poc_inact_window_ParamLimits

0x3bdb,	// (0x00047a16) popup_call_poc_inact_window

0xf5a4,	// (0x000533df) bg_popup_call_poc_act_pane_g

0xdc17,	// (0x00051a52) bg_popup_call_poc_inact_pane_g1

0xdc1f,	// (0x00051a5a) bg_popup_call_poc_inact_pane_g2

0xcd26,	// (0x00050b61) popup_call_poc_act_window_g2

0xdc27,	// (0x00051a62) bg_popup_call_poc_inact_pane_g3

0xdc2f,	// (0x00051a6a) bg_popup_call_poc_inact_pane_g4

0xdc37,	// (0x00051a72) bg_popup_call_poc_inact_pane_g5

0xcd2e,	// (0x00050b69) popup_call_poc_act_window_t1_ParamLimits

0xcd2e,	// (0x00050b69) popup_call_poc_act_window_t1

0xcd56,	// (0x00050b91) popup_call_poc_act_window_t2_ParamLimits

0xcd56,	// (0x00050b91) popup_call_poc_act_window_t2

0xcd7e,	// (0x00050bb9) popup_call_poc_act_window_t3_ParamLimits

0xcd7e,	// (0x00050bb9) popup_call_poc_act_window_t3

0xcda6,	// (0x00050be1) popup_call_poc_act_window_t4_ParamLimits

0xcda6,	// (0x00050be1) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0005334d) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0005334d) popup_call_poc_act_window_t

0xdc3f,	// (0x00051a7a) bg_popup_call_poc_inact_pane_g6

0xdc47,	// (0x00051a82) bg_popup_call_poc_inact_pane_g7

0xdc4f,	// (0x00051a8a) bg_popup_call_poc_inact_pane_g8

0xcdb8,	// (0x00050bf3) popup_call_poc_inact_window_g2

0xdc57,	// (0x00051a92) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000533cc) bg_popup_call_poc_inact_pane_g

0xcdc0,	// (0x00050bfb) popup_call_poc_inact_window_t1_ParamLimits

0xcdc0,	// (0x00050bfb) popup_call_poc_inact_window_t1

0xcdd5,	// (0x00050c10) popup_call_poc_inact_window_t2_ParamLimits

0xcdd5,	// (0x00050c10) popup_call_poc_inact_window_t2

0xcdea,	// (0x00050c25) popup_call_poc_inact_window_t3_ParamLimits

0xcdea,	// (0x00050c25) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00053356) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00053356) popup_call_poc_inact_window_t

0xddd4,	// (0x00051c0f) context_pane_ParamLimits

0x4486,	// (0x000482c1) signal_pane_ParamLimits

0xc99f,	// (0x000507da) main_call2_pane

0xbac0,	// (0x0004f8fb) popup_phob_thumbnail2_window_ParamLimits

0xbac0,	// (0x0004f8fb) popup_phob_thumbnail2_window

0xba4d,	// (0x0004f888) aid_hotspot_pointer_arrow_pane

0xba55,	// (0x0004f890) aid_hotspot_pointer_hand_pane

0x3f46,	// (0x00047d81) phob_pre_status_pane_g5

0x1db7,	// (0x00045bf2) cams_zoom_pane_ParamLimits

0x1dc6,	// (0x00045c01) image_vga_pane_ParamLimits

0x1de0,	// (0x00045c1b) main_camera_pane_g1_ParamLimits

0x1df2,	// (0x00045c2d) main_camera_pane_g2_ParamLimits

0x1e02,	// (0x00045c3d) main_camera_pane_g3_ParamLimits

0x1e16,	// (0x00045c51) main_camera_pane_g4_ParamLimits

0x1e2a,	// (0x00045c65) main_camera_pane_g5_ParamLimits

0x1e3e,	// (0x00045c79) main_camera_pane_g6_ParamLimits

0x1e52,	// (0x00045c8d) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00053055) main_camera_pane_g_ParamLimits

0x1e66,	// (0x00045ca1) main_camera_pane_t1_ParamLimits

0x1e7c,	// (0x00045cb7) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00053066) main_camera_pane_t_ParamLimits

0xaec0,	// (0x0004ecfb) bg_popup_preview_window_pane_cp01_ParamLimits

0xaec0,	// (0x0004ecfb) bg_popup_preview_window_pane_cp01

0xcdff,	// (0x00050c3a) popup_phob_thumbnail2_window_g1_ParamLimits

0xcdff,	// (0x00050c3a) popup_phob_thumbnail2_window_g1

0xac65,	// (0x0004eaa0) call2_cli_visual_pane

0x3c0f,	// (0x00047a4a) popup_call2_audio_conf_window_ParamLimits

0x3c0f,	// (0x00047a4a) popup_call2_audio_conf_window

0x3c37,	// (0x00047a72) popup_call2_audio_first_window_ParamLimits

0x3c37,	// (0x00047a72) popup_call2_audio_first_window

0x3ccd,	// (0x00047b08) popup_call2_audio_in_window_ParamLimits

0x3ccd,	// (0x00047b08) popup_call2_audio_in_window

0x3d19,	// (0x00047b54) popup_call2_audio_out_window_ParamLimits

0x3d19,	// (0x00047b54) popup_call2_audio_out_window

0x3d8b,	// (0x00047bc6) popup_call2_audio_second_window_ParamLimits

0x3d8b,	// (0x00047bc6) popup_call2_audio_second_window

0x3df1,	// (0x00047c2c) popup_call2_audio_wait_window_ParamLimits

0x3df1,	// (0x00047c2c) popup_call2_audio_wait_window

0xac65,	// (0x0004eaa0) bg_popup_call2_act_pane_cp03

0xaea2,	// (0x0004ecdd) list_conf_pane_cp

0xce0b,	// (0x00050c46) popup_call2_audio_conf_window_t1

0xce19,	// (0x00050c54) list_single_graphic_popup_conf2_pane_ParamLimits

0xce19,	// (0x00050c54) list_single_graphic_popup_conf2_pane

0xc7c0,	// (0x000505fb) list_highlight_pane_cp04

0xce2c,	// (0x00050c67) list_single_graphic_popup_conf2_pane_g1

0xc7d1,	// (0x0005060c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0005335d) list_single_graphic_popup_conf2_pane_g

0xce36,	// (0x00050c71) list_single_graphic_popup_conf2_pane_t1

0xce44,	// (0x00050c7f) bg_popup_call2_act_pane_cp01_ParamLimits

0xce44,	// (0x00050c7f) bg_popup_call2_act_pane_cp01

0xcece,	// (0x00050d09) call_type_pane_cp05_ParamLimits

0xcece,	// (0x00050d09) call_type_pane_cp05

0xcf30,	// (0x00050d6b) popup_call2_audio_second_window_g1_ParamLimits

0xcf30,	// (0x00050d6b) popup_call2_audio_second_window_g1

0xcf84,	// (0x00050dbf) popup_call2_audio_second_window_g2_ParamLimits

0xcf84,	// (0x00050dbf) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00053362) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00053362) popup_call2_audio_second_window_g

0xcfe9,	// (0x00050e24) popup_call2_audio_second_window_t1_ParamLimits

0xcfe9,	// (0x00050e24) popup_call2_audio_second_window_t1

0xd0a4,	// (0x00050edf) popup_call2_audio_second_window_t2_ParamLimits

0xd0a4,	// (0x00050edf) popup_call2_audio_second_window_t2

0xd0f7,	// (0x00050f32) popup_call2_audio_second_window_t3_ParamLimits

0xd0f7,	// (0x00050f32) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00053369) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00053369) popup_call2_audio_second_window_t

0xac65,	// (0x0004eaa0) bg_popup_call2_in_pane_cp02

0xac6f,	// (0x0004eaaa) call_type_pane_cp04

0xac77,	// (0x0004eab2) popup_call2_audio_wait_window_g1

0xac7f,	// (0x0004eaba) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00052f42) popup_call2_audio_wait_window_g

0xac87,	// (0x0004eac2) popup_call2_audio_wait_window_t3

0xd1ea,	// (0x00051025) bg_popup_call2_act_pane_ParamLimits

0xd1ea,	// (0x00051025) bg_popup_call2_act_pane

0xd2aa,	// (0x000510e5) call_type_pane_cp03_ParamLimits

0xd2aa,	// (0x000510e5) call_type_pane_cp03

0xd30e,	// (0x00051149) popup_call2_audio_first_window_g1_ParamLimits

0xd30e,	// (0x00051149) popup_call2_audio_first_window_g1

0xd37e,	// (0x000511b9) popup_call2_audio_first_window_g2_ParamLimits

0xd37e,	// (0x000511b9) popup_call2_audio_first_window_g2

0xca5e,	// (0x00050899) popup_call2_audio_first_window_g3_ParamLimits

0xca5e,	// (0x00050899) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00053372) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00053372) popup_call2_audio_first_window_g

0xd45c,	// (0x00051297) popup_call2_audio_first_window_t1_ParamLimits

0xd45c,	// (0x00051297) popup_call2_audio_first_window_t1

0xd55f,	// (0x0005139a) popup_call2_audio_first_window_t4_ParamLimits

0xd55f,	// (0x0005139a) popup_call2_audio_first_window_t4

0xd642,	// (0x0005147d) popup_call2_audio_first_window_t5_ParamLimits

0xd642,	// (0x0005147d) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0005337d) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0005337d) popup_call2_audio_first_window_t

0xaeb8,	// (0x0004ecf3) bg_popup_call2_act_pane_g1

0xdcb1,	// (0x00051aec) popup_cale_lunar_info_window_t1

0xdcbf,	// (0x00051afa) popup_cale_lunar_info_window_t2

0xdccd,	// (0x00051b08) popup_cale_lunar_info_window_t3

0xac65,	// (0x0004eaa0) bg_popup_call2_bubble_pane

0xd743,	// (0x0005157e) bg_popup_call2_in_pane_cp01_ParamLimits

0xd743,	// (0x0005157e) bg_popup_call2_in_pane_cp01

0xa941,	// (0x0004e77c) call_type_pane_cp02

0xd78b,	// (0x000515c6) popup_call2_audio_out_window_g1_ParamLimits

0xd78b,	// (0x000515c6) popup_call2_audio_out_window_g1

0xd7b7,	// (0x000515f2) popup_call2_audio_out_window_g2_ParamLimits

0xd7b7,	// (0x000515f2) popup_call2_audio_out_window_g2

0xd7df,	// (0x0005161a) popup_call2_audio_out_window_g3_ParamLimits

0xd7df,	// (0x0005161a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00053386) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00053386) popup_call2_audio_out_window_g

0xd81a,	// (0x00051655) popup_call2_audio_out_window_t1_ParamLimits

0xd81a,	// (0x00051655) popup_call2_audio_out_window_t1

0xd879,	// (0x000516b4) popup_call2_audio_out_window_t2_ParamLimits

0xd879,	// (0x000516b4) popup_call2_audio_out_window_t2

0xd8cd,	// (0x00051708) popup_call2_audio_out_window_t3_ParamLimits

0xd8cd,	// (0x00051708) popup_call2_audio_out_window_t3

0xd8e3,	// (0x0005171e) popup_call2_audio_out_window_t4_ParamLimits

0xd8e3,	// (0x0005171e) popup_call2_audio_out_window_t4

0xd8f9,	// (0x00051734) popup_call2_audio_out_window_t5_ParamLimits

0xd8f9,	// (0x00051734) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0005338f) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0005338f) popup_call2_audio_out_window_t

0xd95d,	// (0x00051798) bg_popup_call2_in_pane_ParamLimits

0xd95d,	// (0x00051798) bg_popup_call2_in_pane

0xd9b9,	// (0x000517f4) popup_call2_audio_in_window_g1_ParamLimits

0xd9b9,	// (0x000517f4) popup_call2_audio_in_window_g1

0xd9f1,	// (0x0005182c) popup_call2_audio_in_window_g2_ParamLimits

0xd9f1,	// (0x0005182c) popup_call2_audio_in_window_g2

0xda29,	// (0x00051864) popup_call2_audio_in_window_g3_ParamLimits

0xda29,	// (0x00051864) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0005339c) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0005339c) popup_call2_audio_in_window_g

0xda81,	// (0x000518bc) popup_call2_audio_in_window_t1_ParamLimits

0xda81,	// (0x000518bc) popup_call2_audio_in_window_t1

0xdb01,	// (0x0005193c) popup_call2_audio_in_window_t2_ParamLimits

0xdb01,	// (0x0005193c) popup_call2_audio_in_window_t2

0xdb81,	// (0x000519bc) popup_call2_audio_in_window_t3_ParamLimits

0xdb81,	// (0x000519bc) popup_call2_audio_in_window_t3

0xdb9b,	// (0x000519d6) popup_call2_audio_in_window_t4_ParamLimits

0xdb9b,	// (0x000519d6) popup_call2_audio_in_window_t4

0xdbad,	// (0x000519e8) popup_call2_audio_in_window_t5_ParamLimits

0xdbad,	// (0x000519e8) popup_call2_audio_in_window_t5

0xdbc2,	// (0x000519fd) popup_call2_audio_in_window_t6_ParamLimits

0xdbc2,	// (0x000519fd) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000533a5) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000533a5) popup_call2_audio_in_window_t

0xaeb8,	// (0x0004ecf3) bg_popup_call2_in_pane_g1

0xdcdb,	// (0x00051b16) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0005340d) popup_cale_lunar_info_window_t

0xaec0,	// (0x0004ecfb) bg_popup_call2_rect_pane_ParamLimits

0xaec0,	// (0x0004ecfb) bg_popup_call2_rect_pane

0xac65,	// (0x0004eaa0) call2_cli_visual_graphic_pane

0xac65,	// (0x0004eaa0) call2_cli_visual_text_pane

0xbad2,	// (0x0004f90d) smil_status_volume_pane_g3

0x0002,

0xb02e,	// (0x0004ee69) call2_cli_visual_graphic_pane_g1

0xb02e,	// (0x0004ee69) call2_cli_visual_graphic_pane_g2

0xb02e,	// (0x0004ee69) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000533b2) call2_cli_visual_graphic_pane_g

0xdbd7,	// (0x00051a12) bg_popup_call2_rect_pane_g1

0xb0d6,	// (0x0004ef11) bg_popup_call2_rect_pane_g2

0xdbdf,	// (0x00051a1a) bg_popup_call2_rect_pane_g3

0xdbe7,	// (0x00051a22) bg_popup_call2_rect_pane_g4

0xdbef,	// (0x00051a2a) bg_popup_call2_rect_pane_g5

0xdbf7,	// (0x00051a32) bg_popup_call2_rect_pane_g6

0xdbff,	// (0x00051a3a) bg_popup_call2_rect_pane_g7

0xdc07,	// (0x00051a42) bg_popup_call2_rect_pane_g8

0xdc0f,	// (0x00051a4a) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000533b9) bg_popup_call2_rect_pane_g

0xdc17,	// (0x00051a52) bg_popup_call2_bubble_pane_g1

0xdc1f,	// (0x00051a5a) bg_popup_call2_bubble_pane_g2

0xdc27,	// (0x00051a62) bg_popup_call2_bubble_pane_g3

0xdc2f,	// (0x00051a6a) bg_popup_call2_bubble_pane_g4

0xdc37,	// (0x00051a72) bg_popup_call2_bubble_pane_g5

0xdc3f,	// (0x00051a7a) bg_popup_call2_bubble_pane_g6

0xdc47,	// (0x00051a82) bg_popup_call2_bubble_pane_g7

0xdc4f,	// (0x00051a8a) bg_popup_call2_bubble_pane_g8

0xdc57,	// (0x00051a92) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000533cc) bg_popup_call2_bubble_pane_g

0x1962,	// (0x0004579d) aid_cale_week_size_cell_pane

0x1e96,	// (0x00045cd1) aid_cams_cif_uncrop_pane_ParamLimits

0x1e96,	// (0x00045cd1) aid_cams_cif_uncrop_pane

0x204f,	// (0x00045e8a) aid_cams_size_cell_ParamLimits

0x204f,	// (0x00045e8a) aid_cams_size_cell

0x2063,	// (0x00045e9e) grid_cams_pane_ParamLimits

0x207d,	// (0x00045eb8) linegrid_cams_pane_ParamLimits

0x215b,	// (0x00045f96) call_video_pane_t1

0x2175,	// (0x00045fb0) call_video_pane_t2

0x0001,

0xf27e,	// (0x000530b9) call_video_pane_t

0x25c0,	// (0x000463fb) aid_cale_month_size_cell_pane_ParamLimits

0x25c0,	// (0x000463fb) aid_cale_month_size_cell_pane

0xf61b,	// (0x00053456) smil_status_volume_pane_g

0xbadf,	// (0x0004f91a) volume_smil_pane_ParamLimits

0xa7a8,	// (0x0004e5e3) aid_popup2_width_pane

0x18ca,	// (0x00045705) cell_qdial_pane_g4_ParamLimits

0x18ca,	// (0x00045705) cell_qdial_pane_g4

0x3150,	// (0x00046f8b) aid_blid_cardinal_pane_ParamLimits

0x3160,	// (0x00046f9b) aid_blid_destination_pane_ParamLimits

0x3160,	// (0x00046f9b) aid_blid_destination_pane

0xaec0,	// (0x0004ecfb) bg_popup_call_poc_act_pane_ParamLimits

0xaec0,	// (0x0004ecfb) bg_popup_call_poc_act_pane

0xaec0,	// (0x0004ecfb) bg_popup_call_poc_inact_pane_ParamLimits

0xaec0,	// (0x0004ecfb) bg_popup_call_poc_inact_pane

0xdc5f,	// (0x00051a9a) bg_popup_call_poc_act_pane_g1

0xdc67,	// (0x00051aa2) bg_popup_call_poc_act_pane_g2

0xdc6f,	// (0x00051aaa) bg_popup_call_poc_act_pane_g3

0xdc2f,	// (0x00051a6a) bg_popup_call_poc_act_pane_g4

0xdc37,	// (0x00051a72) bg_popup_call_poc_act_pane_g5

0xdc77,	// (0x00051ab2) bg_popup_call_poc_act_pane_g6

0xdc47,	// (0x00051a82) bg_popup_call_poc_act_pane_g7

0xdc7f,	// (0x00051aba) bg_popup_call_poc_act_pane_g8

0xac65,	// (0x0004eaa0) main_usb_pane

0xba97,	// (0x0004f8d2) popup_cale_lunar_info_window

0x2440,	// (0x0004627b) im_reading_pane_t1_ParamLimits

0xb3ab,	// (0x0004f1e6) list_im_pane_ParamLimits

0xb3bc,	// (0x0004f1f7) scroll_pane_cp07_ParamLimits

0xac65,	// (0x0004eaa0) grid_highlight_pane_cp012

0xaec0,	// (0x0004ecfb) mup_scale_pane_ParamLimits

0xcb4c,	// (0x00050987) main_usb_pane_g1_ParamLimits

0xcb4c,	// (0x00050987) main_usb_pane_g1

0x3e52,	// (0x00047c8d) main_usb_pane_g2_ParamLimits

0x3e52,	// (0x00047c8d) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000533f6) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000533f6) main_usb_pane_g

0x3e68,	// (0x00047ca3) main_usb_pane_t1_ParamLimits

0x3e68,	// (0x00047ca3) main_usb_pane_t1

0x3e7a,	// (0x00047cb5) main_usb_pane_t2_ParamLimits

0x3e7a,	// (0x00047cb5) main_usb_pane_t2

0x3e8c,	// (0x00047cc7) main_usb_pane_t3_ParamLimits

0x3e8c,	// (0x00047cc7) main_usb_pane_t3

0x3e9e,	// (0x00047cd9) main_usb_pane_t4_ParamLimits

0x3e9e,	// (0x00047cd9) main_usb_pane_t4

0x3eb3,	// (0x00047cee) main_usb_pane_t5_ParamLimits

0x3eb3,	// (0x00047cee) main_usb_pane_t5

0x3ec8,	// (0x00047d03) main_usb_pane_t6_ParamLimits

0x3ec8,	// (0x00047d03) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000533fb) main_usb_pane_t_ParamLimits

0x30ef,	// (0x00046f2a) aid_text_placing

0x30fa,	// (0x00046f35) main_location2_pane_t1_ParamLimits

0x3110,	// (0x00046f4b) main_location2_pane_t2_ParamLimits

0x3126,	// (0x00046f61) main_location2_pane_t3_ParamLimits

0x313c,	// (0x00046f77) main_location2_pane_t4_ParamLimits

0x313c,	// (0x00046f77) main_location2_pane_t4

0xf3df,	// (0x0005321a) main_location2_pane_t_ParamLimits

0xaefc,	// (0x0004ed37) find_pinb_pane_g2_ParamLimits

0xaefc,	// (0x0004ed37) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00052f68) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00052f68) find_pinb_pane_g

0xaf08,	// (0x0004ed43) find_pinb_pane_t1_ParamLimits

0xaf1a,	// (0x0004ed55) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00052f6d) find_pinb_pane_t_ParamLimits

0xac65,	// (0x0004eaa0) main_call3_pane

0x2934,	// (0x0004676f) cale_month_day_heading_pane_t1_ParamLimits

0x2992,	// (0x000467cd) cale_month_day_heading_pane_t2_ParamLimits

0x29f7,	// (0x00046832) cale_month_day_heading_pane_t3_ParamLimits

0x2a5c,	// (0x00046897) cale_month_day_heading_pane_t4_ParamLimits

0x2ac1,	// (0x000468fc) cale_month_day_heading_pane_t5_ParamLimits

0x2b26,	// (0x00046961) cale_month_day_heading_pane_t6_ParamLimits

0x2b8b,	// (0x000469c6) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000530f1) cale_month_day_heading_pane_t_ParamLimits

0xb632,	// (0x0004f46d) smil_status_volume_pane

0x390a,	// (0x00047745) postcard_address_pane_ParamLimits

0x390a,	// (0x00047745) postcard_address_pane

0x3920,	// (0x0004775b) postcard_message_pane_ParamLimits

0x3920,	// (0x0004775b) postcard_message_pane

0x3e2b,	// (0x00047c66) call2_cli_visual_pane_t1_ParamLimits

0x3e2b,	// (0x00047c66) call2_cli_visual_pane_t1

0x4697,	// (0x000484d2) postcard_message_pane_t1_ParamLimits

0x4697,	// (0x000484d2) postcard_message_pane_t1

0xde87,	// (0x00051cc2) postcard_address_pane_t1_ParamLimits

0xde87,	// (0x00051cc2) postcard_address_pane_t1

0x4683,	// (0x000484be) popup_call3_audio_in_window_ParamLimits

0x4683,	// (0x000484be) popup_call3_audio_in_window

0x4508,	// (0x00048343) bg_popup_call3_in_pane_ParamLimits

0x4508,	// (0x00048343) bg_popup_call3_in_pane

0x4584,	// (0x000483bf) popup_call3_audio_in_window_g1_ParamLimits

0x4584,	// (0x000483bf) popup_call3_audio_in_window_g1

0x45a4,	// (0x000483df) popup_call3_audio_in_window_g2_ParamLimits

0x45a4,	// (0x000483df) popup_call3_audio_in_window_g2

0x45c4,	// (0x000483ff) popup_call3_audio_in_window_g3_ParamLimits

0x45c4,	// (0x000483ff) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0005345d) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0005345d) popup_call3_audio_in_window_g

0x45f5,	// (0x00048430) popup_call3_audio_in_window_t1_ParamLimits

0x45f5,	// (0x00048430) popup_call3_audio_in_window_t1

0x4633,	// (0x0004846e) popup_call3_audio_in_window_t2_ParamLimits

0x4633,	// (0x0004846e) popup_call3_audio_in_window_t2

0x4671,	// (0x000484ac) popup_call3_audio_in_window_t3_ParamLimits

0x4671,	// (0x000484ac) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00053466) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00053466) popup_call3_audio_in_window_t

0xc99f,	// (0x000507da) bg_popup_call3_rect_pane

0xdbd7,	// (0x00051a12) bg_popup_call3_rect_pane_g1

0xb0d6,	// (0x0004ef11) bg_popup_call3_rect_pane_g2

0xdbdf,	// (0x00051a1a) bg_popup_call3_rect_pane_g3

0xdbe7,	// (0x00051a22) bg_popup_call3_rect_pane_g4

0xdbef,	// (0x00051a2a) bg_popup_call3_rect_pane_g5

0xdbf7,	// (0x00051a32) bg_popup_call3_rect_pane_g6

0xdbff,	// (0x00051a3a) bg_popup_call3_rect_pane_g7

0x354c,	// (0x00047387) mup_visualizer_osc_pane

0xca6c,	// (0x000508a7) mup_visualizer_spec_pane

0x4538,	// (0x00048373) call3_video_qcif_pane_ParamLimits

0x4538,	// (0x00048373) call3_video_qcif_pane

0x454b,	// (0x00048386) call3_video_qcif_uncrop_pane_ParamLimits

0x454b,	// (0x00048386) call3_video_qcif_uncrop_pane

0x455b,	// (0x00048396) call3_video_subqcif_pane_ParamLimits

0x455b,	// (0x00048396) call3_video_subqcif_pane

0x4571,	// (0x000483ac) call3_video_subqcif_uncrop_pane_ParamLimits

0x4571,	// (0x000483ac) call3_video_subqcif_uncrop_pane

0x45e4,	// (0x0004841f) popup_call3_audio_in_window_g4_ParamLimits

0x45e4,	// (0x0004841f) popup_call3_audio_in_window_g4

0x44f7,	// (0x00048332) mup_spec_half_pane

0x4500,	// (0x0004833b) mup_spec_half_pane_cp

0xde47,	// (0x00051c82) mup_osc_middle_pane

0xde50,	// (0x00051c8b) mup_visualizer_osc_pane_g1

0x44d7,	// (0x00048312) mup_spec_bar_pane_ParamLimits

0x44d7,	// (0x00048312) mup_spec_bar_pane

0xde34,	// (0x00051c6f) mup_spec_bar_pane_g1

0xde3e,	// (0x00051c79) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00053451) mup_spec_bar_pane_g

0x1962,	// (0x0004579d) aid_cale_week_size_cell_pane_ParamLimits

0x1975,	// (0x000457b0) bg_cale_heading_pane_ParamLimits

0xb152,	// (0x0004ef8d) bg_cale_pane_cp01_ParamLimits

0x1991,	// (0x000457cc) cale_week_corner_pane_ParamLimits

0x19a7,	// (0x000457e2) cale_week_day_heading_pane_ParamLimits

0x19c3,	// (0x000457fe) cale_week_scroll_pane_g1_ParamLimits

0x19dc,	// (0x00045817) cale_week_scroll_pane_g2_ParamLimits

0x19ed,	// (0x00045828) cale_week_scroll_pane_g3_ParamLimits

0x19fe,	// (0x00045839) cale_week_scroll_pane_g4_ParamLimits

0x1a0f,	// (0x0004584a) cale_week_scroll_pane_g5_ParamLimits

0x1a20,	// (0x0004585b) cale_week_scroll_pane_g6_ParamLimits

0x1a31,	// (0x0004586c) cale_week_scroll_pane_g7_ParamLimits

0x1a42,	// (0x0004587d) cale_week_scroll_pane_g8_ParamLimits

0x1a53,	// (0x0004588e) cale_week_scroll_pane_g9_ParamLimits

0x1a64,	// (0x0004589f) cale_week_scroll_pane_g10_ParamLimits

0x1a75,	// (0x000458b0) cale_week_scroll_pane_g11_ParamLimits

0x1a86,	// (0x000458c1) cale_week_scroll_pane_g12_ParamLimits

0x1a97,	// (0x000458d2) cale_week_scroll_pane_g13_ParamLimits

0x1ab0,	// (0x000458eb) cale_week_scroll_pane_g14_ParamLimits

0x1ac9,	// (0x00045904) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00052ff9) cale_week_scroll_pane_g_ParamLimits

0x1ae2,	// (0x0004591d) cale_week_time_pane_ParamLimits

0x1af3,	// (0x0004592e) grid_cale_week_pane_ParamLimits

0xb16b,	// (0x0004efa6) listscroll_cale_week_pane_t1

0x1b0e,	// (0x00045949) scroll_pane_cp08_ParamLimits

0x2611,	// (0x0004644c) cale_month_corner_pane_ParamLimits

0xb5d2,	// (0x0004f40d) cale_month_pane_t1

0x28f5,	// (0x00046730) cale_month_week_pane_ParamLimits

0x2f13,	// (0x00046d4e) popup_call_status_window_g1_ParamLimits

0x2f27,	// (0x00046d62) popup_call_status_window_g2_ParamLimits

0x2f3b,	// (0x00046d76) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000531a1) popup_call_status_window_g_ParamLimits

0xb9bc,	// (0x0004f7f7) aid_call2_pane

0x07f8,	// (0x00044633) msg_header_pane_g1

0x390a,	// (0x00047745) postcard_address2_pane_ParamLimits

0x390a,	// (0x00047745) postcard_address2_pane

0x3920,	// (0x0004775b) postcard_message2_pane_ParamLimits

0x3920,	// (0x0004775b) postcard_message2_pane

0x4494,	// (0x000482cf) message2_row_pane_ParamLimits

0x4494,	// (0x000482cf) message2_row_pane

0xddef,	// (0x00051c2a) address2_row_pane_ParamLimits

0xddef,	// (0x00051c2a) address2_row_pane

0xde02,	// (0x00051c3d) postcard_message2_row_pane_g1

0xde0a,	// (0x00051c45) postcard_message2_row_pane_t1

0xde02,	// (0x00051c3d) address2_row_pane_g1

0xde0a,	// (0x00051c45) address2_row_pane_t1

0x1d1c,	// (0x00045b57) aid_size_cell_vorec

0xac65,	// (0x0004eaa0) main_rss_pane

0x44b7,	// (0x000482f2) rss_list_single_pane_ParamLimits

0x44b7,	// (0x000482f2) rss_list_single_pane

0xde18,	// (0x00051c53) rss_list_single_pane_t1

0xde26,	// (0x00051c61) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0005344c) rss_list_single_pane_t

0xac65,	// (0x0004eaa0) main_camera2_pane

0xac65,	// (0x0004eaa0) main_video2_pane

0x4706,	// (0x00048541) cams_zoom_pane_cp2_ParamLimits

0x4706,	// (0x00048541) cams_zoom_pane_cp2

0x471d,	// (0x00048558) image2_vga_pane_ParamLimits

0x471d,	// (0x00048558) image2_vga_pane

0x4765,	// (0x000485a0) main_camera2_pane_g1_ParamLimits

0x4765,	// (0x000485a0) main_camera2_pane_g1

0x4785,	// (0x000485c0) main_camera2_pane_g2_ParamLimits

0x4785,	// (0x000485c0) main_camera2_pane_g2

0x479c,	// (0x000485d7) main_camera2_pane_g3_ParamLimits

0x479c,	// (0x000485d7) main_camera2_pane_g3

0x47b3,	// (0x000485ee) main_camera2_pane_g4_ParamLimits

0x47b3,	// (0x000485ee) main_camera2_pane_g4

0x47ca,	// (0x00048605) main_camera2_pane_g5_ParamLimits

0x47ca,	// (0x00048605) main_camera2_pane_g5

0x47e1,	// (0x0004861c) main_camera2_pane_g6_ParamLimits

0x47e1,	// (0x0004861c) main_camera2_pane_g6

0x47f8,	// (0x00048633) main_camera2_pane_g7_ParamLimits

0x47f8,	// (0x00048633) main_camera2_pane_g7

0x480f,	// (0x0004864a) main_camera2_pane_g8_ParamLimits

0x480f,	// (0x0004864a) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0005346d) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0005346d) main_camera2_pane_g

0x483d,	// (0x00048678) main_camera2_pane_t1_ParamLimits

0x483d,	// (0x00048678) main_camera2_pane_t1

0x4872,	// (0x000486ad) main_camera2_pane_t2_ParamLimits

0x4872,	// (0x000486ad) main_camera2_pane_t2

0x488f,	// (0x000486ca) main_camera2_pane_t3_ParamLimits

0x488f,	// (0x000486ca) main_camera2_pane_t3

0x48ed,	// (0x00048728) main_camera2_pane_t4_ParamLimits

0x48ed,	// (0x00048728) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00053480) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00053480) main_camera2_pane_t

0x4976,	// (0x000487b1) cams_zoom_pane_cp4_ParamLimits

0x4976,	// (0x000487b1) cams_zoom_pane_cp4

0x498c,	// (0x000487c7) image2_cif_pane_ParamLimits

0x498c,	// (0x000487c7) image2_cif_pane

0x49b7,	// (0x000487f2) image2_subqcif_pane_ParamLimits

0x49b7,	// (0x000487f2) image2_subqcif_pane

0x49d2,	// (0x0004880d) main_video2_pane_g1_ParamLimits

0x49d2,	// (0x0004880d) main_video2_pane_g1

0x49ec,	// (0x00048827) main_video2_pane_g2_ParamLimits

0x49ec,	// (0x00048827) main_video2_pane_g2

0x4a02,	// (0x0004883d) main_video2_pane_g3_ParamLimits

0x4a02,	// (0x0004883d) main_video2_pane_g3

0x4a18,	// (0x00048853) main_video2_pane_g4_ParamLimits

0x4a18,	// (0x00048853) main_video2_pane_g4

0x4a2e,	// (0x00048869) main_video2_pane_g5_ParamLimits

0x4a2e,	// (0x00048869) main_video2_pane_g5

0x4a44,	// (0x0004887f) main_video2_pane_g6_ParamLimits

0x4a44,	// (0x0004887f) main_video2_pane_g6

0x0005,

0xf654,	// (0x0005348f) main_video2_pane_g_ParamLimits

0xf654,	// (0x0005348f) main_video2_pane_g

0x4a5e,	// (0x00048899) main_video2_pane_t1_ParamLimits

0x4a5e,	// (0x00048899) main_video2_pane_t1

0x4a82,	// (0x000488bd) main_video2_pane_t2_ParamLimits

0x4a82,	// (0x000488bd) main_video2_pane_t2

0x4ad2,	// (0x0004890d) main_video2_pane_t3_ParamLimits

0x4ad2,	// (0x0004890d) main_video2_pane_t3

0x0002,

0xf661,	// (0x0005349c) main_video2_pane_t_ParamLimits

0xf661,	// (0x0005349c) main_video2_pane_t

0x3f86,	// (0x00047dc1) call_muted_g2

0x0001,

0xf603,	// (0x0005343e) call_muted_g

0xac65,	// (0x0004eaa0) main_mup2_pane

0x4b1a,	// (0x00048955) main_mup2_pane_g1_ParamLimits

0x4b1a,	// (0x00048955) main_mup2_pane_g1

0x4b26,	// (0x00048961) main_mup2_pane_g2_ParamLimits

0x4b26,	// (0x00048961) main_mup2_pane_g2

0xbb48,	// (0x0004f983) main_mup_pane_g13_cp1

0xbb50,	// (0x0004f98b) mup_volume_pane_cp1

0x4b44,	// (0x0004897f) main_mup2_pane_g4_ParamLimits

0x4b44,	// (0x0004897f) main_mup2_pane_g4

0x4b54,	// (0x0004898f) main_mup2_pane_g5_ParamLimits

0x4b54,	// (0x0004898f) main_mup2_pane_g5

0x4b64,	// (0x0004899f) main_mup2_pane_g6_ParamLimits

0x4b64,	// (0x0004899f) main_mup2_pane_g6

0x4b74,	// (0x000489af) main_mup2_pane_g7_ParamLimits

0x4b74,	// (0x000489af) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000534a3) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000534a3) main_mup2_pane_g

0x4b8c,	// (0x000489c7) main_mup2_pane_t1_ParamLimits

0x4b8c,	// (0x000489c7) main_mup2_pane_t1

0x4ba2,	// (0x000489dd) main_mup2_pane_t2_ParamLimits

0x4ba2,	// (0x000489dd) main_mup2_pane_t2

0x4bb8,	// (0x000489f3) main_mup2_pane_t3_ParamLimits

0x4bb8,	// (0x000489f3) main_mup2_pane_t3

0x4bce,	// (0x00048a09) main_mup2_pane_t4_ParamLimits

0x4bce,	// (0x00048a09) main_mup2_pane_t4

0x4be6,	// (0x00048a21) main_mup2_pane_t5_ParamLimits

0x4be6,	// (0x00048a21) main_mup2_pane_t5

0x4bfe,	// (0x00048a39) main_mup2_pane_t6_ParamLimits

0x4bfe,	// (0x00048a39) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000534b2) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000534b2) main_mup2_pane_t

0x4c2e,	// (0x00048a69) mup2_visualizer_pane_ParamLimits

0x4c2e,	// (0x00048a69) mup2_visualizer_pane

0x4c5c,	// (0x00048a97) mup_progress_pane_cp_ParamLimits

0x4c5c,	// (0x00048a97) mup_progress_pane_cp

0xbb33,	// (0x0004f96e) mup_volume_pane_cp_ParamLimits

0xbb33,	// (0x0004f96e) mup_volume_pane_cp

0x4c72,	// (0x00048aad) mup2_visualizer_pane_g1_ParamLimits

0x4c72,	// (0x00048aad) mup2_visualizer_pane_g1

0xde9e,	// (0x00051cd9) mup2_visualizer_pane_g2_ParamLimits

0xde9e,	// (0x00051cd9) mup2_visualizer_pane_g2

0x4c87,	// (0x00048ac2) mup2_visualizer_pane_g3_ParamLimits

0x4c87,	// (0x00048ac2) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000534bf) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000534bf) mup2_visualizer_pane_g

0xcc95,	// (0x00050ad0) aid_size_cell_fmradio

0x4136,	// (0x00047f71) aid_height_parent_landcape

0xb43a,	// (0x0004f275) wml_content_pane_cp

0xb442,	// (0x0004f27d) wml_tabs_pane

0xb44b,	// (0x0004f286) popup_wml_miniature_window

0xb453,	// (0x0004f28e) scroll_pane_cp021

0xb467,	// (0x0004f2a2) wml_content_pane_comp8

0xac65,	// (0x0004eaa0) bg_popup_sub_pane_cp05

0xdebc,	// (0x00051cf7) popup_wml_miniature_window_g1

0xdec4,	// (0x00051cff) wml_miniature_view_pane

0x4c93,	// (0x00048ace) aid_size_wml_view

0x4c9b,	// (0x00048ad6) wml_miniature_view_pane_g1

0x4ca4,	// (0x00048adf) wml_miniature_view_pane_g2

0x4cad,	// (0x00048ae8) wml_miniature_view_pane_g3

0x4cb5,	// (0x00048af0) wml_miniature_view_pane_g4

0x4cbd,	// (0x00048af8) wml_miniature_view_pane_g5

0x4cc5,	// (0x00048b00) wml_miniature_view_pane_g6

0x4ccd,	// (0x00048b08) wml_miniature_view_pane_g7

0x4cd5,	// (0x00048b10) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000534c6) wml_miniature_view_pane_g

0xdecc,	// (0x00051d07) background_graphic_ParamLimits

0xdecc,	// (0x00051d07) background_graphic

0xded8,	// (0x00051d13) wml_tabs_2_pane

0xdee1,	// (0x00051d1c) wml_tabs_3_pane_ParamLimits

0xdee1,	// (0x00051d1c) wml_tabs_3_pane

0xdef3,	// (0x00051d2e) wml_tabs_4_pane_ParamLimits

0xdef3,	// (0x00051d2e) wml_tabs_4_pane

0xdf09,	// (0x00051d44) wml_tabs_5_pane_ParamLimits

0xdf09,	// (0x00051d44) wml_tabs_5_pane

0xdf23,	// (0x00051d5e) wml_tabs_pane_g2_ParamLimits

0xdf23,	// (0x00051d5e) wml_tabs_pane_g2

0xdf37,	// (0x00051d72) wml_tabs_pane_g3_ParamLimits

0xdf37,	// (0x00051d72) wml_tabs_pane_g3

0x4cdd,	// (0x00048b18) wml_tabs_2_active_pane_ParamLimits

0x4cdd,	// (0x00048b18) wml_tabs_2_active_pane

0x4cf1,	// (0x00048b2c) wml_tabs_2_passive_pane_ParamLimits

0x4cf1,	// (0x00048b2c) wml_tabs_2_passive_pane

0x4d05,	// (0x00048b40) wml_tabs_3_active_pane_cp_ParamLimits

0x4d05,	// (0x00048b40) wml_tabs_3_active_pane_cp

0x4d1a,	// (0x00048b55) wml_tabs_3_passive_pane_ParamLimits

0x4d1a,	// (0x00048b55) wml_tabs_3_passive_pane

0x4d2d,	// (0x00048b68) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d2d,	// (0x00048b68) wml_tabs_3_passive_pane_cp

0x4d44,	// (0x00048b7f) tabs_4_active_pane

0x4d4c,	// (0x00048b87) tabs_4_passive_pane

0x4d56,	// (0x00048b91) tabs_4_passive_pane_cp

0x4d5e,	// (0x00048b99) tabs_4_passive_pane_cp2

0x3e4a,	// (0x00047c85) aid_height_text

0x351e,	// (0x00047359) mup_volume_cont_pane_ParamLimits

0x351e,	// (0x00047359) mup_volume_cont_pane

0x1556,	// (0x00045391) aid_size_cell_pinb

0x1560,	// (0x0004539b) aid_size_list_pinb

0x4c48,	// (0x00048a83) mup2_volume_cont_pane_ParamLimits

0x4c48,	// (0x00048a83) mup2_volume_cont_pane

0xbb1f,	// (0x0004f95a) mup2_volume_cont_pane_g1_ParamLimits

0xbb1f,	// (0x0004f95a) mup2_volume_cont_pane_g1

0x1267,	// (0x000450a2) aid_size_cell_touch_ParamLimits

0x1267,	// (0x000450a2) aid_size_cell_touch

0x147a,	// (0x000452b5) touch_pane_ParamLimits

0x147a,	// (0x000452b5) touch_pane

0xa796,	// (0x0004e5d1) main_rss2_pane

0xdf54,	// (0x00051d8f) listscroll_rss2_pane

0xdf5d,	// (0x00051d98) rss2_navigation_pane

0xdf65,	// (0x00051da0) list_rss2_pane

0xc865,	// (0x000506a0) scroll_pane_cp22

0xdf6d,	// (0x00051da8) rss2_navigation_pane_g1

0xdf76,	// (0x00051db1) rss2_navigation_pane_g2

0xdf7e,	// (0x00051db9) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x000534d7) rss2_navigation_pane_g

0xdf86,	// (0x00051dc1) rss2_navigation_pane_t1

0x4d68,	// (0x00048ba3) rss2_list_single_pane_ParamLimits

0x4d68,	// (0x00048ba3) rss2_list_single_pane

0xdf94,	// (0x00051dcf) rss2_list_single_pane_t2

0xdfa2,	// (0x00051ddd) rss2_list_single_pane_t3_ParamLimits

0xdfa2,	// (0x00051ddd) rss2_list_single_pane_t3

0xdfbf,	// (0x00051dfa) rss2_list_single_pane_t4

0x2d57,	// (0x00046b92) smil_status_pane_g1

0xa80f,	// (0x0004e64a) main_image2_pane_ParamLimits

0xa80f,	// (0x0004e64a) main_image2_pane

0x4826,	// (0x00048661) main_camera2_pane_g9_ParamLimits

0x4826,	// (0x00048661) main_camera2_pane_g9

0x4942,	// (0x0004877d) main_camera2_pane_t5_ParamLimits

0x4942,	// (0x0004877d) main_camera2_pane_t5

0xbaf4,	// (0x0004f92f) main_camera2_pane_t6_ParamLimits

0xbaf4,	// (0x0004f92f) main_camera2_pane_t6

0x4d82,	// (0x00048bbd) main_image2_pane_g1_ParamLimits

0x4d82,	// (0x00048bbd) main_image2_pane_g1

0x3b61,	// (0x0004799c) smil2_video_pane_ParamLimits

0x3b61,	// (0x0004799c) smil2_video_pane

0xa7c4,	// (0x0004e5ff) aid_zoom_text_primary_cp

0xa805,	// (0x0004e640) popup_preview_fixed_window

0xb3a3,	// (0x0004f1de) im_reading_pane_g1

0x46f8,	// (0x00048533) cams2_bc_adjust_pane_cp_ParamLimits

0x46f8,	// (0x00048533) cams2_bc_adjust_pane_cp

0x4968,	// (0x000487a3) cams2_bc_adjust_pane_ParamLimits

0x4968,	// (0x000487a3) cams2_bc_adjust_pane

0xbb58,	// (0x0004f993) cams2_bc_adjust_pane_g1

0xbb60,	// (0x0004f99b) cams2_slider_pane

0xbb69,	// (0x0004f9a4) cams2_slider_pane_g1

0xbb72,	// (0x0004f9ad) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x000534de) cams2_slider_pane_g

0x1650,	// (0x0004548b) calc_display_pane_ParamLimits

0x1678,	// (0x000454b3) calc_paper_pane_ParamLimits

0x169b,	// (0x000454d6) grid_calc_pane_ParamLimits

0xba1e,	// (0x0004f859) popup_clock_digital_window_t1_ParamLimits

0xcc32,	// (0x00050a6d) main_image_pane_t1

0x1632,	// (0x0004546d) aid_size_cell_calc_ParamLimits

0x1632,	// (0x0004546d) aid_size_cell_calc

0x417c,	// (0x00047fb7) popup_blid_sat_info2_window_ParamLimits

0x417c,	// (0x00047fb7) popup_blid_sat_info2_window

0xdfd5,	// (0x00051e10) aid_size_cell_blid

0xdfdd,	// (0x00051e18) bg_popup_window_pane_cp07

0xe000,	// (0x00051e3b) grid_popup_blid_pane

0xe00a,	// (0x00051e45) heading_pane_cp05_ParamLimits

0xe00a,	// (0x00051e45) heading_pane_cp05

0xe0d4,	// (0x00051f0f) cell_popup_blid_pane_ParamLimits

0xe0d4,	// (0x00051f0f) cell_popup_blid_pane

0xe0fe,	// (0x00051f39) cell_popup_blid_pane_g1

0xe106,	// (0x00051f41) cell_popup_blid_pane_t1

0x4c18,	// (0x00048a53) mup2_indicator_pane_ParamLimits

0x4c18,	// (0x00048a53) mup2_indicator_pane

0xc99f,	// (0x000507da) mup2_visualizer_osc_pane

0xdeaa,	// (0x00051ce5) mup2_visualizer_spec_pane_ParamLimits

0xdeaa,	// (0x00051ce5) mup2_visualizer_spec_pane

0x4d98,	// (0x00048bd3) mup2_spec_half_pane

0x4da1,	// (0x00048bdc) mup2_spec_half_pane_cp

0x4da9,	// (0x00048be4) mup2_spec_bar_pane_ParamLimits

0x4da9,	// (0x00048be4) mup2_spec_bar_pane

0xde34,	// (0x00051c6f) mup2_spec_bar_pane_g1

0xde3e,	// (0x00051c79) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00053451) mup2_spec_bar_pane_g

0x4dc9,	// (0x00048c04) mup2_osc_middle_pane

0xde50,	// (0x00051c8b) mup2_visualizer_osc_pane_g1

0xa83d,	// (0x0004e678) popup_number_entry_window_t1_ParamLimits

0xa850,	// (0x0004e68b) popup_number_entry_window_t2_ParamLimits

0xa862,	// (0x0004e69d) popup_number_entry_window_t3_ParamLimits

0xa874,	// (0x0004e6af) popup_number_entry_window_t5_ParamLimits

0xa874,	// (0x0004e6af) popup_number_entry_window_t5

0xf0d8,	// (0x00052f13) popup_number_entry_window_t_ParamLimits

0xa8a9,	// (0x0004e6e4) text_title_cp2_ParamLimits

0xba5d,	// (0x0004f898) aid_hotspot_pointer_text2_pane

0xba83,	// (0x0004f8be) main_viewer_pane_g9_ParamLimits

0xba83,	// (0x0004f8be) main_viewer_pane_g9

0xb5d2,	// (0x0004f40d) cale_month_pane_t1_ParamLimits

0xb667,	// (0x0004f4a2) bg_cale_pane_ParamLimits

0xb67f,	// (0x0004f4ba) list_cale_pane_ParamLimits

0xb16b,	// (0x0004efa6) listscroll_cale_day_pane_t1

0xb690,	// (0x0004f4cb) scroll_pane_cp09_ParamLimits

0x3554,	// (0x0004738f) main_mup_eq_pane_t1_ParamLimits

0x3554,	// (0x0004738f) main_mup_eq_pane_t1

0x3570,	// (0x000473ab) main_mup_eq_pane_t2_ParamLimits

0x3570,	// (0x000473ab) main_mup_eq_pane_t2

0x358c,	// (0x000473c7) main_mup_eq_pane_t3_ParamLimits

0x358c,	// (0x000473c7) main_mup_eq_pane_t3

0x35aa,	// (0x000473e5) main_mup_eq_pane_t4_ParamLimits

0x35aa,	// (0x000473e5) main_mup_eq_pane_t4

0x35c8,	// (0x00047403) main_mup_eq_pane_t5_ParamLimits

0x35c8,	// (0x00047403) main_mup_eq_pane_t5

0x35e6,	// (0x00047421) main_mup_eq_pane_t6_ParamLimits

0x35e6,	// (0x00047421) main_mup_eq_pane_t6

0x35fc,	// (0x00047437) main_mup_eq_pane_t7_ParamLimits

0x35fc,	// (0x00047437) main_mup_eq_pane_t7

0x3612,	// (0x0004744d) main_mup_eq_pane_t8_ParamLimits

0x3612,	// (0x0004744d) main_mup_eq_pane_t8

0x3628,	// (0x00047463) main_mup_eq_pane_t9_ParamLimits

0x3628,	// (0x00047463) main_mup_eq_pane_t9

0x3644,	// (0x0004747f) main_mup_eq_pane_t10_ParamLimits

0x3644,	// (0x0004747f) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000532a0) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000532a0) main_mup_eq_pane_t

0x3719,	// (0x00047554) mup_equalizer_pane_cp5_ParamLimits

0x3731,	// (0x0004756c) mup_equalizer_pane_cp6_ParamLimits

0x3749,	// (0x00047584) mup_equalizer_pane_cp7_ParamLimits

0xa796,	// (0x0004e5d1) main_gallery_pane

0xde59,	// (0x00051c94) smil2_volume_pane

0xde61,	// (0x00051c9c) smil_status_volume_pane_g1_ParamLimits

0xde74,	// (0x00051caf) smil_status_volume_pane_g2_ParamLimits

0xbad2,	// (0x0004f90d) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00053456) smil_status_volume_pane_g_ParamLimits

0xdfdd,	// (0x00051e18) bg_popup_window_pane_cp07_ParamLimits

0xdfeb,	// (0x00051e26) blid_firmament_pane

0x4dd2,	// (0x00048c0d) aid_size_cell_gallery_ParamLimits

0x4dd2,	// (0x00048c0d) aid_size_cell_gallery

0x4de8,	// (0x00048c23) grid_gallery_pane_ParamLimits

0x4de8,	// (0x00048c23) grid_gallery_pane

0x4e03,	// (0x00048c3e) cell_gallery_pane_ParamLimits

0x4e03,	// (0x00048c3e) cell_gallery_pane

0xe114,	// (0x00051f4f) bg_cell_gallery_focus_pane_ParamLimits

0xe114,	// (0x00051f4f) bg_cell_gallery_focus_pane

0xe126,	// (0x00051f61) cell_gallery_pane_g1_ParamLimits

0xe126,	// (0x00051f61) cell_gallery_pane_g1

0x4e54,	// (0x00048c8f) cell_gallery_pane_g2_ParamLimits

0x4e54,	// (0x00048c8f) cell_gallery_pane_g2

0x4e61,	// (0x00048c9c) cell_gallery_pane_g3_ParamLimits

0x4e61,	// (0x00048c9c) cell_gallery_pane_g3

0xe132,	// (0x00051f6d) cell_gallery_pane_g4_ParamLimits

0xe132,	// (0x00051f6d) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00053504) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00053504) cell_gallery_pane_g

0xe13e,	// (0x00051f79) bg_cell_gallery_focus_pane_g1

0xe146,	// (0x00051f81) bg_cell_gallery_focus_pane_g2

0xe14e,	// (0x00051f89) bg_cell_gallery_focus_pane_g3

0xe156,	// (0x00051f91) bg_cell_gallery_focus_pane_g4

0xe15e,	// (0x00051f99) bg_cell_gallery_focus_pane_g5

0xe166,	// (0x00051fa1) bg_cell_gallery_focus_pane_g6

0xe16e,	// (0x00051fa9) bg_cell_gallery_focus_pane_g7

0xe176,	// (0x00051fb1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0005350d) bg_cell_gallery_focus_pane_g

0xe17e,	// (0x00051fb9) aid_firma_cardinal

0xe192,	// (0x00051fcd) blid_firmament_pane_t1

0xe1a9,	// (0x00051fe4) blid_firmament_pane_t2

0xe1c0,	// (0x00051ffb) blid_firmament_pane_t3

0xe1d7,	// (0x00052012) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0005351e) blid_firmament_pane_t

0xe1ee,	// (0x00052029) blid_sat_info_pane

0xe1fe,	// (0x00052039) blid_sat_info_pane_g1

0xe1fe,	// (0x00052039) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00053527) blid_sat_info_pane_g

0xe208,	// (0x00052043) blid_sat_info_pane_t1

0xe216,	// (0x00052051) smil2_volume_content_pane

0xe21f,	// (0x0005205a) smil2_volume_pane_g1

0xe227,	// (0x00052062) smil2_volume_content_pane_g1

0xe230,	// (0x0005206b) smil2_volume_content_pane_g2

0xe239,	// (0x00052074) smil2_volume_content_pane_g3

0xe242,	// (0x0005207d) smil2_volume_content_pane_g4

0xe24b,	// (0x00052086) smil2_volume_content_pane_g5

0xe254,	// (0x0005208f) smil2_volume_content_pane_g6

0xe25d,	// (0x00052098) smil2_volume_content_pane_g7

0xe266,	// (0x000520a1) smil2_volume_content_pane_g8

0xe26f,	// (0x000520aa) smil2_volume_content_pane_g9

0xe278,	// (0x000520b3) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0005352c) smil2_volume_content_pane_g

0x1b6e,	// (0x000459a9) cale_week_day_heading_pane_t1_ParamLimits

0x1b82,	// (0x000459bd) cale_week_day_heading_pane_t2_ParamLimits

0x1b96,	// (0x000459d1) cale_week_day_heading_pane_t3_ParamLimits

0x1baa,	// (0x000459e5) cale_week_day_heading_pane_t4_ParamLimits

0x1bbe,	// (0x000459f9) cale_week_day_heading_pane_t5_ParamLimits

0x1bd2,	// (0x00045a0d) cale_week_day_heading_pane_t6_ParamLimits

0x1be6,	// (0x00045a21) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00053018) cale_week_day_heading_pane_t_ParamLimits

0xb17d,	// (0x0004efb8) bg_cale_side_pane_ParamLimits

0x1bfa,	// (0x00045a35) cale_week_time_pane_t1_ParamLimits

0x1c12,	// (0x00045a4d) cale_week_time_pane_t2_ParamLimits

0x1c2a,	// (0x00045a65) cale_week_time_pane_t3_ParamLimits

0x1c42,	// (0x00045a7d) cale_week_time_pane_t4_ParamLimits

0x1c5a,	// (0x00045a95) cale_week_time_pane_t5_ParamLimits

0x1c72,	// (0x00045aad) cale_week_time_pane_t6_ParamLimits

0x1c8a,	// (0x00045ac5) cale_week_time_pane_t7_ParamLimits

0x1ca6,	// (0x00045ae1) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00053027) cale_week_time_pane_t_ParamLimits

0x1cc6,	// (0x00045b01) cell_cale_week_pane_g2_ParamLimits

0xb17d,	// (0x0004efb8) bg_cale_side_pane_cp01_ParamLimits

0x2bf0,	// (0x00046a2b) cale_month_week_pane_t1_ParamLimits

0x2c07,	// (0x00046a42) cale_month_week_pane_t2_ParamLimits

0x2c1e,	// (0x00046a59) cale_month_week_pane_t3_ParamLimits

0x2c35,	// (0x00046a70) cale_month_week_pane_t4_ParamLimits

0x2c4c,	// (0x00046a87) cale_month_week_pane_t5_ParamLimits

0x2c63,	// (0x00046a9e) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00053100) cale_month_week_pane_t_ParamLimits

0xb60e,	// (0x0004f449) cell_cale_month_pane_g1_ParamLimits

0xa796,	// (0x0004e5d1) main_cale_event_viewer_pane

0xa796,	// (0x0004e5d1) listscroll_cale_event_viewer_pane

0xe281,	// (0x000520bc) list_cale_ev_pane

0xe289,	// (0x000520c4) scroll_pane_cp023

0x4e6e,	// (0x00048ca9) field_cale_ev_pane_ParamLimits

0x4e6e,	// (0x00048ca9) field_cale_ev_pane

0xe295,	// (0x000520d0) field_cale_ev_content_pane_ParamLimits

0xe295,	// (0x000520d0) field_cale_ev_content_pane

0xe2a1,	// (0x000520dc) field_cale_ev_pane_g1_ParamLimits

0xe2a1,	// (0x000520dc) field_cale_ev_pane_g1

0xe2ad,	// (0x000520e8) field_cale_ev_pane_g2_ParamLimits

0xe2ad,	// (0x000520e8) field_cale_ev_pane_g2

0xe2c5,	// (0x00052100) field_cale_ev_pane_g3_ParamLimits

0xe2c5,	// (0x00052100) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00053541) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00053541) field_cale_ev_pane_g

0xe2dd,	// (0x00052118) field_cale_ev_pane_t1_ParamLimits

0xe2dd,	// (0x00052118) field_cale_ev_pane_t1

0x4e92,	// (0x00048ccd) field_cale_ev_content_pane_t1_ParamLimits

0x4e92,	// (0x00048ccd) field_cale_ev_content_pane_t1

0xcb18,	// (0x00050953) bg_button_pane_cp01

0xafb5,	// (0x0004edf0) listscroll_cale_week_pane_ParamLimits

0x1958,	// (0x00045793) popup_toolbar_window_cp01

0xb16b,	// (0x0004efa6) listscroll_cale_week_pane_t1_ParamLimits

0xafb5,	// (0x0004edf0) listscroll_cale_day_pane_ParamLimits

0x2db7,	// (0x00046bf2) popup_toolbar_window_cp02

0xb16b,	// (0x0004efa6) listscroll_cale_day_pane_t1_ParamLimits

0xafb5,	// (0x0004edf0) main_cale_month_pane_ParamLimits

0x43fc,	// (0x00048237) popup_toolbar_window_cp03_ParamLimits

0x43fc,	// (0x00048237) popup_toolbar_window_cp03

0x3a1f,	// (0x0004785a) main_image_pane_g2_ParamLimits

0x3a1f,	// (0x0004785a) main_image_pane_g2

0x3a30,	// (0x0004786b) main_image_pane_g3_ParamLimits

0x3a30,	// (0x0004786b) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00053332) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00053332) main_image_pane_g

0xcc32,	// (0x00050a6d) main_image_pane_t1_ParamLimits

0x3a41,	// (0x0004787c) main_image_pane_t2_ParamLimits

0x3a41,	// (0x0004787c) main_image_pane_t2

0x3a53,	// (0x0004788e) main_image_pane_t3_ParamLimits

0x3a53,	// (0x0004788e) main_image_pane_t3

0x3a7b,	// (0x000478b6) main_image_pane_t4_ParamLimits

0x3a7b,	// (0x000478b6) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00053339) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00053339) main_image_pane_t

0x3a9b,	// (0x000478d6) popup_image_details_window_cp01

0x3aa5,	// (0x000478e0) popup_toobar_trans_pane_cp01_ParamLimits

0x3aa5,	// (0x000478e0) popup_toobar_trans_pane_cp01

0x426f,	// (0x000480aa) popup_image_details_window_ParamLimits

0x426f,	// (0x000480aa) popup_image_details_window

0xbaa3,	// (0x0004f8de) popup_image_focus_window

0x46b2,	// (0x000484ed) camera2_autofocus_pane_ParamLimits

0x46b2,	// (0x000484ed) camera2_autofocus_pane

0xa796,	// (0x0004e5d1) bg_popup_sub_pane_cp06

0xe2f4,	// (0x0005212f) popup_image_focus_window_g1

0xe2fc,	// (0x00052137) popup_image_focus_window_g2

0xe304,	// (0x0005213f) popup_image_focus_window_g3

0xe30c,	// (0x00052147) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00053548) popup_image_focus_window_g

0xe314,	// (0x0005214f) popup_image_focus_window_t1

0xe322,	// (0x0005215d) popup_image_focus_window_t2

0xe332,	// (0x0005216d) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00053551) popup_image_focus_window_t

0xe340,	// (0x0005217b) camera2_autofocus_pane_g1

0xa80f,	// (0x0004e64a) bg_tb_trans_pane_cp01

0xe34e,	// (0x00052189) popup_image_details_window_g1

0xe361,	// (0x0005219c) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00053563) popup_image_details_window_g

0xe38a,	// (0x000521c5) popup_image_details_window_t1

0xe39c,	// (0x000521d7) popup_image_details_window_t2

0xe3b5,	// (0x000521f0) popup_image_details_window_t3

0xe3c9,	// (0x00052204) popup_image_details_window_t4

0xe3e4,	// (0x0005221f) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0005356a) popup_image_details_window_t

0xaf87,	// (0x0004edc2) bg_calc_paper_pane_ParamLimits

0xa796,	// (0x0004e5d1) grid_highlight_pane_cp013

0xaf9b,	// (0x0004edd6) list_calc_pane_ParamLimits

0xafad,	// (0x0004ede8) scroll_pane_cp024

0xafb5,	// (0x0004edf0) bg_calc_display_pane_ParamLimits

0x179b,	// (0x000455d6) calc_display_pane_t1_ParamLimits

0x17ad,	// (0x000455e8) calc_display_pane_t2_ParamLimits

0xafc1,	// (0x0004edfc) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00052f9a) calc_display_pane_t_ParamLimits

0x1875,	// (0x000456b0) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00052fb7) cell_calc_pane_g

0x187e,	// (0x000456b9) cell_calc_pane_t1

0xb038,	// (0x0004ee73) grid_highlight_pane_cp02_ParamLimits

0xb04e,	// (0x0004ee89) toolbar_button_pane_cp01_ParamLimits

0xb04e,	// (0x0004ee89) toolbar_button_pane_cp01

0xcc77,	// (0x00050ab2) temp_image_control_pane_ParamLimits

0xcc77,	// (0x00050ab2) temp_image_control_pane

0xa80f,	// (0x0004e64a) main_mp3_pane

0xe3fe,	// (0x00052239) temp_image_control_pane_g1_ParamLimits

0xe3fe,	// (0x00052239) temp_image_control_pane_g1

0xe40c,	// (0x00052247) temp_image_control_pane_g2_ParamLimits

0xe40c,	// (0x00052247) temp_image_control_pane_g2

0xe41e,	// (0x00052259) temp_image_control_pane_g3_ParamLimits

0xe41e,	// (0x00052259) temp_image_control_pane_g3

0x4ee3,	// (0x00048d1e) temp_image_control_pane_g4_ParamLimits

0x4ee3,	// (0x00048d1e) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00053575) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00053575) temp_image_control_pane_g

0xe3fe,	// (0x00052239) main_mp3_pane_g1

0x4ef6,	// (0x00048d31) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0005357e) main_mp3_pane_g

0xe461,	// (0x0005229c) main_mp3_pane_t1

0xb1f0,	// (0x0004f02b) main_camera_pane_g8_ParamLimits

0xb1f0,	// (0x0004f02b) main_camera_pane_g8

0x1ff5,	// (0x00045e30) main_video_pane_g7_ParamLimits

0x1ff5,	// (0x00045e30) main_video_pane_g7

0xbb0d,	// (0x0004f948) main_camera2_pane_t7_ParamLimits

0xbb0d,	// (0x0004f948) main_camera2_pane_t7

0xb3fa,	// (0x0004f235) scroll_pane_cp025_ParamLimits

0xb3fa,	// (0x0004f235) scroll_pane_cp025

0xb40e,	// (0x0004f249) scroll_pane_cp026_ParamLimits

0xb40e,	// (0x0004f249) scroll_pane_cp026

0xb41d,	// (0x0004f258) wml_content_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_touch_calib_pane

0x4fc8,	// (0x00048e03) main_touch_calib_pane_g1

0x4fda,	// (0x00048e15) main_touch_calib_pane_g2

0x4fec,	// (0x00048e27) main_touch_calib_pane_g3

0x4ffe,	// (0x00048e39) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0005359c) main_touch_calib_pane_g

0x5010,	// (0x00048e4b) main_touch_calib_pane_t1

0x502a,	// (0x00048e65) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000535a5) main_touch_calib_pane_t

0xc8e0,	// (0x0005071b) mup_progress_pane_cp02

0xc8ff,	// (0x0005073a) navi_pane_g1

0xc961,	// (0x0005079c) navi_pane_mp_t3

0xa80f,	// (0x0004e64a) main_mp3_pane_ParamLimits

0x443e,	// (0x00048279) navi_pane_ParamLimits

0xe3fe,	// (0x00052239) main_mp3_pane_g1_ParamLimits

0x4ef6,	// (0x00048d31) main_mp3_pane_g2_ParamLimits

0x4f02,	// (0x00048d3d) main_mp3_pane_g3_ParamLimits

0x4f02,	// (0x00048d3d) main_mp3_pane_g3

0x4f10,	// (0x00048d4b) main_mp3_pane_g4_ParamLimits

0x4f10,	// (0x00048d4b) main_mp3_pane_g4

0xe42e,	// (0x00052269) main_mp3_pane_g5_ParamLimits

0xe42e,	// (0x00052269) main_mp3_pane_g5

0xe43c,	// (0x00052277) main_mp3_pane_g6_ParamLimits

0xe43c,	// (0x00052277) main_mp3_pane_g6

0xe449,	// (0x00052284) main_mp3_pane_g7_ParamLimits

0xe449,	// (0x00052284) main_mp3_pane_g7

0xe455,	// (0x00052290) main_mp3_pane_g8_ParamLimits

0xe455,	// (0x00052290) main_mp3_pane_g8

0xf743,	// (0x0005357e) main_mp3_pane_g_ParamLimits

0x4f1c,	// (0x00048d57) main_mp3_pane_t2

0x4f2a,	// (0x00048d65) main_mp3_pane_t3

0xe46f,	// (0x000522aa) main_mp3_pane_t4

0xe47d,	// (0x000522b8) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0005358f) main_mp3_pane_t

0xe48b,	// (0x000522c6) mup_progress_pane_cp01

0xa7c4,	// (0x0004e5ff) aid_zoom_text_secondary2

0xe281,	// (0x000520bc) list_cale_ev2_pane

0xe289,	// (0x000520c4) scroll_pane_cp023_ParamLimits

0x5084,	// (0x00048ebf) field_cale_ev2_pane_ParamLimits

0x5084,	// (0x00048ebf) field_cale_ev2_pane

0x0881,	// (0x000446bc) field_cale_ev2_pane_g1_ParamLimits

0x0881,	// (0x000446bc) field_cale_ev2_pane_g1

0x088d,	// (0x000446c8) field_cale_ev2_pane_g2_ParamLimits

0x088d,	// (0x000446c8) field_cale_ev2_pane_g2

0x08a5,	// (0x000446e0) field_cale_ev2_pane_g3_ParamLimits

0x08a5,	// (0x000446e0) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000535b0) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000535b0) field_cale_ev2_pane_g

0x08bd,	// (0x000446f8) field_cale_ev2_pane_t1_ParamLimits

0x08bd,	// (0x000446f8) field_cale_ev2_pane_t1

0x08d4,	// (0x0004470f) field_cale_ev2_pane_t2_ParamLimits

0x08d4,	// (0x0004470f) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000535b9) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000535b9) field_cale_ev2_pane_t

0x38ba,	// (0x000476f5) main_postcard_pane_g5_ParamLimits

0x38ba,	// (0x000476f5) main_postcard_pane_g5

0x38d0,	// (0x0004770b) main_postcard_pane_g6_ParamLimits

0x38d0,	// (0x0004770b) main_postcard_pane_g6

0x1da1,	// (0x00045bdc) camera2_autofocus_pane_cp_ParamLimits

0x1da1,	// (0x00045bdc) camera2_autofocus_pane_cp

0xa80f,	// (0x0004e64a) main_mup3_pane

0x50c8,	// (0x00048f03) main_mup3_pane_g1_ParamLimits

0x50c8,	// (0x00048f03) main_mup3_pane_g1

0x50ea,	// (0x00048f25) main_mup3_pane_g2_ParamLimits

0x50ea,	// (0x00048f25) main_mup3_pane_g2

0x516d,	// (0x00048fa8) main_mup3_pane_g3_ParamLimits

0x516d,	// (0x00048fa8) main_mup3_pane_g3

0x51b9,	// (0x00048ff4) main_mup3_pane_g4_ParamLimits

0x51b9,	// (0x00048ff4) main_mup3_pane_g4

0x5205,	// (0x00049040) main_mup3_pane_g5_ParamLimits

0x5205,	// (0x00049040) main_mup3_pane_g5

0x5251,	// (0x0004908c) main_mup3_pane_g6_ParamLimits

0x5251,	// (0x0004908c) main_mup3_pane_g6

0xe493,	// (0x000522ce) main_mup3_pane_g7_ParamLimits

0xe493,	// (0x000522ce) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000535c9) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000535c9) main_mup3_pane_g

0x52d5,	// (0x00049110) main_mup3_pane_t1_ParamLimits

0x52d5,	// (0x00049110) main_mup3_pane_t1

0x534d,	// (0x00049188) main_mup3_pane_t2_ParamLimits

0x534d,	// (0x00049188) main_mup3_pane_t2

0x5423,	// (0x0004925e) main_mup3_pane_t4_ParamLimits

0x5423,	// (0x0004925e) main_mup3_pane_t4

0x5481,	// (0x000492bc) main_mup3_pane_t5_ParamLimits

0x5481,	// (0x000492bc) main_mup3_pane_t5

0x5545,	// (0x00049380) main_mup3_pane_t6_ParamLimits

0x5545,	// (0x00049380) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x000535da) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x000535da) main_mup3_pane_t

0x55ff,	// (0x0004943a) mup3_progress_pane_ParamLimits

0x55ff,	// (0x0004943a) mup3_progress_pane

0x569b,	// (0x000494d6) popup_mup3_control_window_ParamLimits

0x569b,	// (0x000494d6) popup_mup3_control_window

0xe4a1,	// (0x000522dc) popup_mup3_text_window

0x56d1,	// (0x0004950c) mup3_progress_pane_t1

0x56ef,	// (0x0004952a) mup3_progress_pane_t2

0xe4a9,	// (0x000522e4) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x000535e7) mup3_progress_pane_t

0xe4c6,	// (0x00052301) mup_progress_pane_cp03

0xa796,	// (0x0004e5d1) bg_tb_trans_pane_cp04

0x570d,	// (0x00049548) mup3_volume_pane

0x5715,	// (0x00049550) popup_mup3_control_window_g1

0x571e,	// (0x00049559) mup3_volume_pane_g1

0x5727,	// (0x00049562) mup3_volume_pane_g2

0x5730,	// (0x0004956b) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x000535ee) mup3_volume_pane_g

0xa796,	// (0x0004e5d1) bg_tb_trans_pane_cp03

0xe4d6,	// (0x00052311) popup_mup3_text_window_g1

0xe4de,	// (0x00052319) popup_mup3_text_window_t1

0xb00f,	// (0x0004ee4a) list_calc_item_pane_g1_ParamLimits

0xdf4b,	// (0x00051d86) mup_volume_pane_cp_g1

0x5044,	// (0x00048e7f) main_touch_calib_pane_t3

0x5058,	// (0x00048e93) main_touch_calib_pane_t4

0x506e,	// (0x00048ea9) main_touch_calib_pane_t5

0xa7a0,	// (0x0004e5db) aid_cell_size_toolbar2

0xa7a8,	// (0x0004e5e3) aid_popup3_width_pane

0xa7b4,	// (0x0004e5ef) aid_zoom_text_msg_primary

0x1d76,	// (0x00045bb1) vorec_t7

0xafd3,	// (0x0004ee0e) bg_calc_paper_pane_g1_ParamLimits

0xafdf,	// (0x0004ee1a) bg_calc_paper_pane_g2_ParamLimits

0xafeb,	// (0x0004ee26) bg_calc_paper_pane_g3_ParamLimits

0xaff7,	// (0x0004ee32) bg_calc_paper_pane_g4_ParamLimits

0xb003,	// (0x0004ee3e) bg_calc_paper_pane_g5_ParamLimits

0x17fe,	// (0x00045639) bg_calc_paper_pane_g6_ParamLimits

0x1811,	// (0x0004564c) bg_calc_paper_pane_g7_ParamLimits

0x1824,	// (0x0004565f) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00052fa1) bg_calc_paper_pane_g_ParamLimits

0x1835,	// (0x00045670) calc_bg_paper_pane_g9_ParamLimits

0x1f03,	// (0x00045d3e) image_qvga_pane_ParamLimits

0x1f03,	// (0x00045d3e) image_qvga_pane

0xaec0,	// (0x0004ecfb) bg_popup_sub_pane_cp04_ParamLimits

0xcbae,	// (0x000509e9) popup_mup_playback_window_g1_ParamLimits

0xcbba,	// (0x000509f5) popup_mup_playback_window_t1_ParamLimits

0xcbcf,	// (0x00050a0a) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0005332d) popup_mup_playback_window_t_ParamLimits

0x4b36,	// (0x00048971) main_mup2_pane_g3_ParamLimits

0x4b36,	// (0x00048971) main_mup2_pane_g3

0x21f4,	// (0x0004602f) popup_toolbar_window_cp04

0xcfd8,	// (0x00050e13) popup_call2_audio_second_window_g3_ParamLimits

0xcfd8,	// (0x00050e13) popup_call2_audio_second_window_g3

0xd3e2,	// (0x0005121d) popup_call2_audio_first_window_g4_ParamLimits

0xd3e2,	// (0x0005121d) popup_call2_audio_first_window_g4

0xda61,	// (0x0005189c) popup_call2_audio_in_window_g4_ParamLimits

0xda61,	// (0x0005189c) popup_call2_audio_in_window_g4

0x3a01,	// (0x0004783c) aid_area_sk_bg_cut_ParamLimits

0x3a01,	// (0x0004783c) aid_area_sk_bg_cut

0xcbe4,	// (0x00050a1f) aid_area_sk_bg_cut_2_ParamLimits

0xcbe4,	// (0x00050a1f) aid_area_sk_bg_cut_2

0x4e44,	// (0x00048c7f) aid_placing_details_win

0x4e4c,	// (0x00048c87) aid_placing_details_win_2

0xe340,	// (0x0005217b) camera2_autofocus_pane_g1_ParamLimits

0x1419,	// (0x00045254) popup_fixed_preview_cale_window_ParamLimits

0x1419,	// (0x00045254) popup_fixed_preview_cale_window

0xc9b0,	// (0x000507eb) navi_slider_pane_g3

0xc9b9,	// (0x000507f4) navi_slider_pane_g4

0xc9c2,	// (0x000507fd) navi_slider_pane_g5

0xc9b0,	// (0x000507eb) navi_slider_pane_g6

0xba44,	// (0x0004f87f) navi_slider_pane_g7

0xcae5,	// (0x00050920) mup_scale_pane_g3

0xcaee,	// (0x00050929) mup_scale_pane_g4

0xcaf7,	// (0x00050932) mup_scale_pane_g5

0x3761,	// (0x0004759c) mup_scale_pane_g6

0x376a,	// (0x000475a5) mup_scale_pane_g7

0xc9b0,	// (0x000507eb) cams2_slider_pane_g3

0xdfcd,	// (0x00051e08) cams2_slider_pane_g4

0xbb7b,	// (0x0004f9b6) cams2_slider_pane_g5

0xc9b0,	// (0x000507eb) cams2_slider_pane_g6

0xbb83,	// (0x0004f9be) cams2_slider_pane_g7

0xe1fe,	// (0x00052039) camera2_autofocus_pane_cp_g1

0xe4ec,	// (0x00052327) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4ec,	// (0x00052327) bg_popup_preview_window_pane_cp02

0xe4f8,	// (0x00052333) list_fp_cale_pane_ParamLimits

0xe4f8,	// (0x00052333) list_fp_cale_pane

0xe504,	// (0x0005233f) popup_fixed_preview_cale_window_t1_ParamLimits

0xe504,	// (0x0005233f) popup_fixed_preview_cale_window_t1

0x5739,	// (0x00049574) popup_fixed_preview_cale_window_t2_ParamLimits

0x5739,	// (0x00049574) popup_fixed_preview_cale_window_t2

0x574e,	// (0x00049589) popup_fixed_preview_cale_window_t3_ParamLimits

0x574e,	// (0x00049589) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x000535f5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x000535f5) popup_fixed_preview_cale_window_t

0xe69d,	// (0x000524d8) list_single_fp_cale_pane_ParamLimits

0xe69d,	// (0x000524d8) list_single_fp_cale_pane

0xe522,	// (0x0005235d) list_single_fp_cale_pane_g1_ParamLimits

0xe522,	// (0x0005235d) list_single_fp_cale_pane_g1

0xe52e,	// (0x00052369) list_single_fp_cale_pane_g2_ParamLimits

0xe52e,	// (0x00052369) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000535fc) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000535fc) list_single_fp_cale_pane_g

0xe547,	// (0x00052382) list_single_fp_cale_pane_t1_ParamLimits

0xe547,	// (0x00052382) list_single_fp_cale_pane_t1

0xe559,	// (0x00052394) list_single_fp_cale_pane_t2_ParamLimits

0xe559,	// (0x00052394) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00053603) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00053603) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa796,	// (0x0004e5d1) main_dialer_pane

0x5765,	// (0x000495a0) aid_cell_size_keypad

0x576f,	// (0x000495aa) dialer_ne_pane

0x5779,	// (0x000495b4) grid_dialer_command_1_pane

0x5781,	// (0x000495bc) grid_dialer_command_2_pane

0x5789,	// (0x000495c4) grid_dialer_keypad_pane

0x579d,	// (0x000495d8) bg_popup_call_pane_cp06_ParamLimits

0x579d,	// (0x000495d8) bg_popup_call_pane_cp06

0x57a9,	// (0x000495e4) dialer_ne_clear_pane_ParamLimits

0x57a9,	// (0x000495e4) dialer_ne_clear_pane

0xe58c,	// (0x000523c7) dialer_ne_pane_g1

0xe594,	// (0x000523cf) dialer_ne_pane_t1_ParamLimits

0xe594,	// (0x000523cf) dialer_ne_pane_t1

0x57b5,	// (0x000495f0) dialer_ne_pane_t2_ParamLimits

0x57b5,	// (0x000495f0) dialer_ne_pane_t2

0x57df,	// (0x0004961a) dialer_ne_pane_t3_ParamLimits

0x57df,	// (0x0004961a) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00053608) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00053608) dialer_ne_pane_t

0x580f,	// (0x0004964a) dialer_ne_pane_t3_copy1_ParamLimits

0x580f,	// (0x0004964a) dialer_ne_pane_t3_copy1

0x583e,	// (0x00049679) cell_dialer_keypad_pane_ParamLimits

0x583e,	// (0x00049679) cell_dialer_keypad_pane

0x5855,	// (0x00049690) cell_dialer_command_1_pane_ParamLimits

0x5855,	// (0x00049690) cell_dialer_command_1_pane

0x586b,	// (0x000496a6) cell_dialer_command_2_pane_ParamLimits

0x586b,	// (0x000496a6) cell_dialer_command_2_pane

0xe5a6,	// (0x000523e1) bg_button_pane_cp02_ParamLimits

0xe5a6,	// (0x000523e1) bg_button_pane_cp02

0x587a,	// (0x000496b5) cell_dialer_keypad_pane_g1_ParamLimits

0x587a,	// (0x000496b5) cell_dialer_keypad_pane_g1

0xe5a6,	// (0x000523e1) bg_button_pane_cp03_ParamLimits

0xe5a6,	// (0x000523e1) bg_button_pane_cp03

0x588f,	// (0x000496ca) cell_dialer_command_1_pane_g1_ParamLimits

0x588f,	// (0x000496ca) cell_dialer_command_1_pane_g1

0xe5b2,	// (0x000523ed) bg_button_pane_cp04

0x58a3,	// (0x000496de) cell_dialer_command_2_pane_g1

0xc99f,	// (0x000507da) bg_button_pane_cp06

0xe5ba,	// (0x000523f5) dialer_ne_clear_pane_g1

0x3245,	// (0x00047080) navi_pane_g2

0x3273,	// (0x000470ae) navi_pane_g3

0x0002,

0xf3f5,	// (0x00053230) navi_pane_g

0x329e,	// (0x000470d9) navi_pane_mv_g2

0x32c5,	// (0x00047100) navi_pane_mv_g5

0x32cd,	// (0x00047108) navi_pane_mv_t1

0xafb5,	// (0x0004edf0) main_clock2_pane

0x58dc,	// (0x00049717) main_clock2_list_pane_ParamLimits

0x58dc,	// (0x00049717) main_clock2_list_pane

0x5916,	// (0x00049751) main_clock2_pane_t1_ParamLimits

0x5916,	// (0x00049751) main_clock2_pane_t1

0x5952,	// (0x0004978d) main_clock2_pane_t2_ParamLimits

0x5952,	// (0x0004978d) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0005360f) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0005360f) main_clock2_pane_t

0x59f1,	// (0x0004982c) popup_clock_analogue_window_cp03_ParamLimits

0x59f1,	// (0x0004982c) popup_clock_analogue_window_cp03

0x5a18,	// (0x00049853) popup_clock_digital_window_cp02_ParamLimits

0x5a18,	// (0x00049853) popup_clock_digital_window_cp02

0x5a93,	// (0x000498ce) main_clock2_list_single_pane_ParamLimits

0x5a93,	// (0x000498ce) main_clock2_list_single_pane

0xc99f,	// (0x000507da) list_highlight_pane_cp05

0xe5c2,	// (0x000523fd) main_clock2_list_single_pane_t1

0x21f4,	// (0x0004602f) popup_toolbar_window_cp04_ParamLimits

0x4eb3,	// (0x00048cee) camera2_autofocus_pane_g2_ParamLimits

0x4eb3,	// (0x00048cee) camera2_autofocus_pane_g2

0x4ebf,	// (0x00048cfa) camera2_autofocus_pane_g3_ParamLimits

0x4ebf,	// (0x00048cfa) camera2_autofocus_pane_g3

0x4ecb,	// (0x00048d06) camera2_autofocus_pane_g4_ParamLimits

0x4ecb,	// (0x00048d06) camera2_autofocus_pane_g4

0x4ed7,	// (0x00048d12) camera2_autofocus_pane_g5_ParamLimits

0x4ed7,	// (0x00048d12) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00053558) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00053558) camera2_autofocus_pane_g

0x50a8,	// (0x00048ee3) camera2_autofocus_pane_cp_g2

0x50b0,	// (0x00048eeb) camera2_autofocus_pane_cp_g3

0x50b8,	// (0x00048ef3) camera2_autofocus_pane_cp_g4

0x50c0,	// (0x00048efb) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000535be) camera2_autofocus_pane_cp_g

0x5795,	// (0x000495d0) popup_dialer_spcha_window

0xa796,	// (0x0004e5d1) bg_popup_sub_pane_cp07

0xe5d0,	// (0x0005240b) list_spcha_pane

0xe5d8,	// (0x00052413) list_single_spcha_pane_ParamLimits

0xe5d8,	// (0x00052413) list_single_spcha_pane

0xa796,	// (0x0004e5d1) list_highlight_pane_cp06

0xe5e9,	// (0x00052424) list_single_spcha_pane_t1

0xd80b,	// (0x00051646) popup_call2_audio_out_window_g4_ParamLimits

0xd80b,	// (0x00051646) popup_call2_audio_out_window_g4

0xa796,	// (0x0004e5d1) main_imed2_pane

0xbaad,	// (0x0004f8e8) popup_imed_adjust2_window

0x4287,	// (0x000480c2) popup_imed_trans_window_ParamLimits

0x4287,	// (0x000480c2) popup_imed_trans_window

0xe036,	// (0x00051e71) popup_blid_sat_info2_window_t1

0xe044,	// (0x00051e7f) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x000534ed) popup_blid_sat_info2_window_t

0x5b49,	// (0x00049984) aid_size_cell_colour_35

0x5b69,	// (0x000499a4) aid_size_cell_colour_112

0x5b89,	// (0x000499c4) aid_size_cell_effect

0xddc6,	// (0x00051c01) bg_tb_trans_pane_cp02

0xb703,	// (0x0004f53e) heading_imed_pane

0x5ba9,	// (0x000499e4) listscroll_imed_pane

0xe5f7,	// (0x00052432) heading_imed_pane_g1

0xe5ff,	// (0x0005243a) heading_imed_pane_t1

0xe60d,	// (0x00052448) grid_imed_colour_35_pane_ParamLimits

0xe60d,	// (0x00052448) grid_imed_colour_35_pane

0x5bb5,	// (0x000499f0) grid_imed_effect_pane

0xe629,	// (0x00052464) list_imed_aspect_pane

0x5bcc,	// (0x00049a07) scroll_pane_cp027_ParamLimits

0x5bcc,	// (0x00049a07) scroll_pane_cp027

0x5bdd,	// (0x00049a18) cell_imed_effect_pane_ParamLimits

0x5bdd,	// (0x00049a18) cell_imed_effect_pane

0xe631,	// (0x0005246c) cell_imed_colour_pane_ParamLimits

0xe631,	// (0x0005246c) cell_imed_colour_pane

0xe67b,	// (0x000524b6) cell_imed_colour_pane_g1_ParamLimits

0xe67b,	// (0x000524b6) cell_imed_colour_pane_g1

0xe68c,	// (0x000524c7) hgihlgiht_grid_pane_cp016_ParamLimits

0xe68c,	// (0x000524c7) hgihlgiht_grid_pane_cp016

0x5c02,	// (0x00049a3d) cell_imed_effect_pane_g1

0x5c0a,	// (0x00049a45) grid_highlight_pane_cp017

0xe6b5,	// (0x000524f0) list_imed_single_pane_ParamLimits

0xe6b5,	// (0x000524f0) list_imed_single_pane

0xa796,	// (0x0004e5d1) list_highlight_pane_cp07

0xe6c9,	// (0x00052504) list_imed_aspect_pane_comp1_t1

0xddc6,	// (0x00051c01) bg_tb_trans_pane_cp05

0xe6eb,	// (0x00052526) popup_imed_adjust2_window_g1

0xe712,	// (0x0005254d) popup_imed_adjust2_window_t1

0xe72a,	// (0x00052565) slider_imed_adjust_pane

0xe73e,	// (0x00052579) slider_imed_adjust_pane_g1

0xe74e,	// (0x00052589) slider_imed_adjust_pane_g2

0xe75e,	// (0x00052599) slider_imed_adjust_pane_g3

0xe76f,	// (0x000525aa) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0005362c) slider_imed_adjust_pane_g

0x5c13,	// (0x00049a4e) aid_size_cell_clipart2

0x5c1f,	// (0x00049a5a) grid_imed_clipart_pane

0xe780,	// (0x000525bb) scroll_pane_cp031

0x5c29,	// (0x00049a64) cell_imed_clipart_pane_ParamLimits

0x5c29,	// (0x00049a64) cell_imed_clipart_pane

0x5c46,	// (0x00049a81) cell_imed_clipart_pane_g1

0xa796,	// (0x0004e5d1) grid_highlight_pane_cp014

0x58f1,	// (0x0004972c) main_clock2_pane_g1_ParamLimits

0x58f1,	// (0x0004972c) main_clock2_pane_g1

0x5a3a,	// (0x00049875) aid_call2_pane_cp10

0x5a4c,	// (0x00049887) aid_call_pane_cp10

0xc8d4,	// (0x0005070f) popup_clock_analogue_window_cp10_g1

0xc8d4,	// (0x0005070f) popup_clock_analogue_window_cp10_g2

0x5a5e,	// (0x00049899) popup_clock_analogue_window_cp10_g3

0x5a5e,	// (0x00049899) popup_clock_analogue_window_cp10_g4

0xc8d4,	// (0x0005070f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0005361a) popup_clock_analogue_window_cp10_g

0x5a74,	// (0x000498af) popup_clock_analogue_window_cp10_t1

0x5aa5,	// (0x000498e0) clock_digital_number_pane_cp10_ParamLimits

0x5aa5,	// (0x000498e0) clock_digital_number_pane_cp10

0x5abf,	// (0x000498fa) clock_digital_number_pane_cp11_ParamLimits

0x5abf,	// (0x000498fa) clock_digital_number_pane_cp11

0x5ad9,	// (0x00049914) clock_digital_number_pane_cp12_ParamLimits

0x5ad9,	// (0x00049914) clock_digital_number_pane_cp12

0x5af3,	// (0x0004992e) clock_digital_number_pane_cp13_ParamLimits

0x5af3,	// (0x0004992e) clock_digital_number_pane_cp13

0x5b0d,	// (0x00049948) clock_digital_separator_pane_cp10_ParamLimits

0x5b0d,	// (0x00049948) clock_digital_separator_pane_cp10

0x5b27,	// (0x00049962) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b27,	// (0x00049962) popup_clock_digital_window_cp02_t1

0xaeb8,	// (0x0004ecf3) clock_digital_number_pane_cp10_g1

0xaeb8,	// (0x0004ecf3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00053635) clock_digital_number_pane_cp10_g

0xaeb8,	// (0x0004ecf3) clock_digital_separator_pane_cp10_g1

0xaeb8,	// (0x0004ecf3) clock_digital_separator_pane_g2_cp10

0xc96f,	// (0x000507aa) navi_pane_vded_g4

0xc978,	// (0x000507b3) navi_pane_vded_g5

0xc981,	// (0x000507bc) navi_pane_vded_t1

0xa796,	// (0x0004e5d1) main_vded_pane

0x5c4f,	// (0x00049a8a) main_vded_pane_g1

0x5c5b,	// (0x00049a96) main_vded_pane_g2

0x5c67,	// (0x00049aa2) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0005363a) main_vded_pane_g

0x5c73,	// (0x00049aae) main_vded_pane_t1

0x5c81,	// (0x00049abc) main_vded_pane_t2

0x0001,

0xf806,	// (0x00053641) main_vded_pane_t

0x5c8f,	// (0x00049aca) vded_slider_pane

0x5c99,	// (0x00049ad4) vded_video_pane

0xe788,	// (0x000525c3) vded_video_pane_g1

0x5ca5,	// (0x00049ae0) vded_video_pane_g2

0xe1fe,	// (0x00052039) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00053646) vded_video_pane_g

0xe792,	// (0x000525cd) vded_slider_pane_g1

0xdf4b,	// (0x00051d86) vded_slider_pane_g2

0xe79b,	// (0x000525d6) vded_slider_pane_g3

0xe7a4,	// (0x000525df) vded_slider_pane_g4

0xe7ad,	// (0x000525e8) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0005364d) vded_slider_pane_g

0x5685,	// (0x000494c0) mup3_rocker_pane_ParamLimits

0x5685,	// (0x000494c0) mup3_rocker_pane

0x5cae,	// (0x00049ae9) mup3_control_keys_pane_g1

0x5cb6,	// (0x00049af1) mup3_control_keys_pane_g2

0x5cbe,	// (0x00049af9) mup3_control_keys_pane_g3

0x5cc6,	// (0x00049b01) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00053658) mup3_control_keys_pane_g

0x1450,	// (0x0004528b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1450,	// (0x0004528b) popup_toolbar2_fixed_window_cp01

0x56bb,	// (0x000494f6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56bb,	// (0x000494f6) popup_toolbar2_fixed_window_cp02

0xd14a,	// (0x00050f85) popup_call2_audio_second_window_t4_ParamLimits

0xd14a,	// (0x00050f85) popup_call2_audio_second_window_t4

0xd678,	// (0x000514b3) popup_call2_audio_first_window_t6_ParamLimits

0xd678,	// (0x000514b3) popup_call2_audio_first_window_t6

0xd90e,	// (0x00051749) popup_call2_audio_out_window_t6_ParamLimits

0xd90e,	// (0x00051749) popup_call2_audio_out_window_t6

0xa796,	// (0x0004e5d1) main_vitu_pane

0x5cd6,	// (0x00049b11) aid_size_cell_itu_ParamLimits

0x5cd6,	// (0x00049b11) aid_size_cell_itu

0xa80f,	// (0x0004e64a) bg_popup_window_pane_cp08_ParamLimits

0xa80f,	// (0x0004e64a) bg_popup_window_pane_cp08

0x5cec,	// (0x00049b27) field_vitu_entry_pane_ParamLimits

0x5cec,	// (0x00049b27) field_vitu_entry_pane

0x5d03,	// (0x00049b3e) grid_vitu_function_pane_ParamLimits

0x5d03,	// (0x00049b3e) grid_vitu_function_pane

0x5d1e,	// (0x00049b59) grid_vitu_itu_pane_ParamLimits

0x5d1e,	// (0x00049b59) grid_vitu_itu_pane

0x5d3a,	// (0x00049b75) cell_vitu_itu_pane_ParamLimits

0x5d3a,	// (0x00049b75) cell_vitu_itu_pane

0x5d60,	// (0x00049b9b) cell_vitu_function_pane_ParamLimits

0x5d60,	// (0x00049b9b) cell_vitu_function_pane

0xa80f,	// (0x0004e64a) bg_popup_sub_pane_cp08_ParamLimits

0xa80f,	// (0x0004e64a) bg_popup_sub_pane_cp08

0x5d7b,	// (0x00049bb6) field_vitu_entry_pane_t1_ParamLimits

0x5d7b,	// (0x00049bb6) field_vitu_entry_pane_t1

0xe7ce,	// (0x00052609) field_vitu_entry_pane_t2_ParamLimits

0xe7ce,	// (0x00052609) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00053666) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00053666) field_vitu_entry_pane_t

0xe7eb,	// (0x00052626) bg_button_pane_cp05_ParamLimits

0xe7eb,	// (0x00052626) bg_button_pane_cp05

0x5d9b,	// (0x00049bd6) cell_vitu_itu_pane_g1

0x5db3,	// (0x00049bee) cell_vitu_itu_pane_t1_ParamLimits

0x5db3,	// (0x00049bee) cell_vitu_itu_pane_t1

0x5dc5,	// (0x00049c00) cell_vitu_itu_pane_t2_ParamLimits

0x5dc5,	// (0x00049c00) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0005366b) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0005366b) cell_vitu_itu_pane_t

0xe7f9,	// (0x00052634) bg_button_pane_cp07

0x5dfa,	// (0x00049c35) cell_vitu_function_pane_g1

0xaf47,	// (0x0004ed82) main_calc_pane_g1

0x128b,	// (0x000450c6) aid_visual_content_pane

0xa796,	// (0x0004e5d1) main_vradio_pane

0x5e03,	// (0x00049c3e) main_vradio_pane_g1_ParamLimits

0x5e03,	// (0x00049c3e) main_vradio_pane_g1

0xe803,	// (0x0005263e) main_vradio_pane_g2_ParamLimits

0xe803,	// (0x0005263e) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00053672) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00053672) main_vradio_pane_g

0x5e1a,	// (0x00049c55) main_vradio_pane_t1_ParamLimits

0x5e1a,	// (0x00049c55) main_vradio_pane_t1

0x5e2f,	// (0x00049c6a) main_vradio_pane_t2_ParamLimits

0x5e2f,	// (0x00049c6a) main_vradio_pane_t2

0xe810,	// (0x0005264b) main_vradio_pane_t3_ParamLimits

0xe810,	// (0x0005264b) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00053677) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00053677) main_vradio_pane_t

0x5e44,	// (0x00049c7f) vradio_rocker_control_pane_ParamLimits

0x5e44,	// (0x00049c7f) vradio_rocker_control_pane

0x5e56,	// (0x00049c91) vradio_station_info_pane_ParamLimits

0x5e56,	// (0x00049c91) vradio_station_info_pane

0xe824,	// (0x0005265f) vradio_frequency_info_pane_ParamLimits

0xe824,	// (0x0005265f) vradio_frequency_info_pane

0xe1fe,	// (0x00052039) vradio_station_info_pane_g1

0xe833,	// (0x0005266e) vradio_station_info_pane_t1_ParamLimits

0xe833,	// (0x0005266e) vradio_station_info_pane_t1

0xe855,	// (0x00052690) vradio_station_info_pane_t2_ParamLimits

0xe855,	// (0x00052690) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0005367e) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0005367e) vradio_station_info_pane_t

0xe867,	// (0x000526a2) vradio_tuning_pane

0xe86f,	// (0x000526aa) vradio_rocker_control_pane_g1

0xe877,	// (0x000526b2) vradio_rocker_control_pane_g2

0xe87f,	// (0x000526ba) vradio_rocker_control_pane_g3

0xe887,	// (0x000526c2) vradio_rocker_control_pane_g4

0xe88f,	// (0x000526ca) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00053683) vradio_rocker_control_pane_g

0x5e66,	// (0x00049ca1) vradio_frequency_info_pane_g1

0xe897,	// (0x000526d2) vradio_frequency_info_pane_t1_ParamLimits

0xe897,	// (0x000526d2) vradio_frequency_info_pane_t1

0x5e70,	// (0x00049cab) vradio_tuning_pane_g1

0x5e7b,	// (0x00049cb6) vradio_tuning_pane_t1

0xa7cc,	// (0x0004e607) area_side_right_pane_ParamLimits

0xa7cc,	// (0x0004e607) area_side_right_pane

0xdd8d,	// (0x00051bc8) status_small_pane_g1

0xdd95,	// (0x00051bd0) status_small_pane_g2

0xdd9e,	// (0x00051bd9) status_small_pane_g3

0xdda7,	// (0x00051be2) status_small_pane_g4

0x0003,

0xf608,	// (0x00053443) status_small_pane_g

0xddb0,	// (0x00051beb) status_small_pane_t1

0xa796,	// (0x0004e5d1) main_video3_pane

0xe8ab,	// (0x000526e6) cams_zoom_vslider_pane

0xe8b3,	// (0x000526ee) image3_wide_pane_ParamLimits

0xe8b3,	// (0x000526ee) image3_wide_pane

0xe8cd,	// (0x00052708) image3_wide_small_pane

0xe8d9,	// (0x00052714) main_video3_pane_g1_ParamLimits

0xe8d9,	// (0x00052714) main_video3_pane_g1

0xe8f5,	// (0x00052730) main_video3_pane_g2_ParamLimits

0xe8f5,	// (0x00052730) main_video3_pane_g2

0x0001,

0xf853,	// (0x0005368e) main_video3_pane_g_ParamLimits

0xf853,	// (0x0005368e) main_video3_pane_g

0xe911,	// (0x0005274c) main_video3_pane_t1_ParamLimits

0xe911,	// (0x0005274c) main_video3_pane_t1

0xe93c,	// (0x00052777) main_video3_pane_t2_ParamLimits

0xe93c,	// (0x00052777) main_video3_pane_t2

0xe969,	// (0x000527a4) main_video3_pane_t3_ParamLimits

0xe969,	// (0x000527a4) main_video3_pane_t3

0x0002,

0xf858,	// (0x00053693) main_video3_pane_t_ParamLimits

0xf858,	// (0x00053693) main_video3_pane_t

0xe996,	// (0x000527d1) cams_zoom_vslider_pane_g1

0xe99f,	// (0x000527da) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0005369a) cams_zoom_vslider_pane_g

0xe9a7,	// (0x000527e2) small_slider_vertical_pane

0xe1fe,	// (0x00052039) small_slider_vertical_pane_g1

0xe1fe,	// (0x00052039) small_slider_vertical_pane_g2

0xe9af,	// (0x000527ea) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0005369f) small_slider_vertical_pane_g

0xa796,	// (0x0004e5d1) main_hwr_training_pane

0xe9b8,	// (0x000527f3) hwr_training_instruct_pane_ParamLimits

0xe9b8,	// (0x000527f3) hwr_training_instruct_pane

0x5e8a,	// (0x00049cc5) hwr_training_navi_pane_ParamLimits

0x5e8a,	// (0x00049cc5) hwr_training_navi_pane

0x5ea9,	// (0x00049ce4) hwr_training_write_pane_ParamLimits

0x5ea9,	// (0x00049ce4) hwr_training_write_pane

0xa796,	// (0x0004e5d1) bg_frame_shadow_pane

0xe9ef,	// (0x0005282a) hwr_training_write_pane_g1

0xe9f7,	// (0x00052832) hwr_training_write_pane_g2

0xe9ff,	// (0x0005283a) hwr_training_write_pane_g3

0xea07,	// (0x00052842) hwr_training_write_pane_g4

0xea0f,	// (0x0005284a) hwr_training_write_pane_g5

0xea17,	// (0x00052852) hwr_training_write_pane_g6

0xea1f,	// (0x0005285a) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x000536a6) hwr_training_write_pane_g

0xbb98,	// (0x0004f9d3) hwr_training_navi_pane_g1_ParamLimits

0xbb98,	// (0x0004f9d3) hwr_training_navi_pane_g1

0xbbaa,	// (0x0004f9e5) hwr_training_navi_pane_g2_ParamLimits

0xbbaa,	// (0x0004f9e5) hwr_training_navi_pane_g2

0xbbbc,	// (0x0004f9f7) hwr_training_navi_pane_g3_ParamLimits

0xbbbc,	// (0x0004f9f7) hwr_training_navi_pane_g3

0xbbcc,	// (0x0004fa07) hwr_training_navi_pane_g4_ParamLimits

0xbbcc,	// (0x0004fa07) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x000536b5) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x000536b5) hwr_training_navi_pane_g

0xbbd9,	// (0x0004fa14) hwr_training_navi_pane_t1

0x5ef1,	// (0x00049d2c) list_single_hwr_training_instruct_pane_ParamLimits

0x5ef1,	// (0x00049d2c) list_single_hwr_training_instruct_pane

0xea27,	// (0x00052862) list_single_hwr_training_instruct_pane_t1

0xe13e,	// (0x00051f79) bg_frame_shadow_pane_g1

0xea36,	// (0x00052871) bg_frame_shadow_pane_g2

0xea3e,	// (0x00052879) bg_frame_shadow_pane_g3

0xea46,	// (0x00052881) bg_frame_shadow_pane_g4

0xea4e,	// (0x00052889) bg_frame_shadow_pane_g5

0xea56,	// (0x00052891) bg_frame_shadow_pane_g6

0xea5e,	// (0x00052899) bg_frame_shadow_pane_g7

0xb0ae,	// (0x0004eee9) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000536c0) bg_frame_shadow_pane_g

0xa796,	// (0x0004e5d1) main_video_tele_dialer_pane

0x5f0d,	// (0x00049d48) aid_size_cell_video_keypad_ParamLimits

0x5f0d,	// (0x00049d48) aid_size_cell_video_keypad

0x5f27,	// (0x00049d62) grid_video_dialer_keypad_pane_ParamLimits

0x5f27,	// (0x00049d62) grid_video_dialer_keypad_pane

0x5f73,	// (0x00049dae) video_down_pane_cp_ParamLimits

0x5f73,	// (0x00049dae) video_down_pane_cp

0x5fa3,	// (0x00049dde) cell_video_dialer_keypad_pane_ParamLimits

0x5fa3,	// (0x00049dde) cell_video_dialer_keypad_pane

0xea66,	// (0x000528a1) bg_button_pane_cp08_ParamLimits

0xea66,	// (0x000528a1) bg_button_pane_cp08

0x5fc9,	// (0x00049e04) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5fc9,	// (0x00049e04) cell_video_dialer_keypad_pane_g1

0x566f,	// (0x000494aa) mup3_rocker2_pane_ParamLimits

0x566f,	// (0x000494aa) mup3_rocker2_pane

0xe1fe,	// (0x00052039) mup3_rocker2_pane_g1

0x4154,	// (0x00047f8f) main_dialer2_pane

0xa796,	// (0x0004e5d1) main_mp4_pane

0xbbef,	// (0x0004fa2a) main_mp4_pane_g1_ParamLimits

0xbbef,	// (0x0004fa2a) main_mp4_pane_g1

0xbbef,	// (0x0004fa2a) main_mp4_pane_g2_ParamLimits

0xbbef,	// (0x0004fa2a) main_mp4_pane_g2

0x6004,	// (0x00049e3f) main_mp4_pane_g3_ParamLimits

0x6004,	// (0x00049e3f) main_mp4_pane_g3

0xbbfd,	// (0x0004fa38) main_mp4_pane_g4_ParamLimits

0xbbfd,	// (0x0004fa38) main_mp4_pane_g4

0xbc25,	// (0x0004fa60) main_mp4_pane_g5_ParamLimits

0xbc25,	// (0x0004fa60) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x000536e0) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x000536e0) main_mp4_pane_g

0xbc75,	// (0x0004fab0) main_mp4_pane_t1_ParamLimits

0xbc75,	// (0x0004fab0) main_mp4_pane_t1

0xbcd1,	// (0x0004fb0c) main_mp4_pane_t2_ParamLimits

0xbcd1,	// (0x0004fb0c) main_mp4_pane_t2

0xea72,	// (0x000528ad) main_mp4_pane_t3_ParamLimits

0xea72,	// (0x000528ad) main_mp4_pane_t3

0xbd23,	// (0x0004fb5e) main_mp4_pane_t4_ParamLimits

0xbd23,	// (0x0004fb5e) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x000536ed) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x000536ed) main_mp4_pane_t

0xbd63,	// (0x0004fb9e) mp4_progress_pane_ParamLimits

0xbd63,	// (0x0004fb9e) mp4_progress_pane

0xbdad,	// (0x0004fbe8) mp4_rocker_pane_ParamLimits

0xbdad,	// (0x0004fbe8) mp4_rocker_pane

0xea9a,	// (0x000528d5) mp4_progress_pane_t1

0xeab3,	// (0x000528ee) mp4_progress_pane_t2

0x0001,

0x003b,	// (0x00043e76) mp4_progress_pane_t

0xeacc,	// (0x00052907) mup_progress_pane_cp04

0xe1fe,	// (0x00052039) mp4_rocker_pane_g1

0x604e,	// (0x00049e89) aid_cell_size_keypad2_ParamLimits

0x604e,	// (0x00049e89) aid_cell_size_keypad2

0x6064,	// (0x00049e9f) dialer2_ne_pane_ParamLimits

0x6064,	// (0x00049e9f) dialer2_ne_pane

0x607c,	// (0x00049eb7) grid_dialer2_keypad_pane_ParamLimits

0x607c,	// (0x00049eb7) grid_dialer2_keypad_pane

0xdfdd,	// (0x00051e18) bg_popup_call_pane_cp07_ParamLimits

0xdfdd,	// (0x00051e18) bg_popup_call_pane_cp07

0x6098,	// (0x00049ed3) dialer2_ne_pane_t1_ParamLimits

0x6098,	// (0x00049ed3) dialer2_ne_pane_t1

0x60d8,	// (0x00049f13) cell_dialer2_keypad_pane_ParamLimits

0x60d8,	// (0x00049f13) cell_dialer2_keypad_pane

0xeaea,	// (0x00052925) bg_button_pane_pane_cp04_ParamLimits

0xeaea,	// (0x00052925) bg_button_pane_pane_cp04

0x60fe,	// (0x00049f39) cell_dialer2_keypad_pane_g1_ParamLimits

0x60fe,	// (0x00049f39) cell_dialer2_keypad_pane_g1

0x20db,	// (0x00045f16) aid_placing_vt_set_content_ParamLimits

0x20db,	// (0x00045f16) aid_placing_vt_set_content

0x20ff,	// (0x00045f3a) aid_placing_vt_set_title_ParamLimits

0x20ff,	// (0x00045f3a) aid_placing_vt_set_title

0xa796,	// (0x0004e5d1) main_image3_pane

0x61c4,	// (0x00049fff) area_side_right_pane_cp01_ParamLimits

0x61c4,	// (0x00049fff) area_side_right_pane_cp01

0xbbef,	// (0x0004fa2a) main_image3_pane_g1_ParamLimits

0xbbef,	// (0x0004fa2a) main_image3_pane_g1

0x61dd,	// (0x0004a018) main_image3_pane_g2_ParamLimits

0x61dd,	// (0x0004a018) main_image3_pane_g2

0x6205,	// (0x0004a040) main_image3_pane_g3_ParamLimits

0x6205,	// (0x0004a040) main_image3_pane_g3

0x622f,	// (0x0004a06a) main_image3_pane_g4_ParamLimits

0x622f,	// (0x0004a06a) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x00053700) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x00053700) main_image3_pane_g

0x6259,	// (0x0004a094) main_image3_pane_t1_ParamLimits

0x6259,	// (0x0004a094) main_image3_pane_t1

0x62b1,	// (0x0004a0ec) main_image3_pane_t2_ParamLimits

0x62b1,	// (0x0004a0ec) main_image3_pane_t2

0x6303,	// (0x0004a13e) main_image3_pane_t3_ParamLimits

0x6303,	// (0x0004a13e) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x00053709) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x00053709) main_image3_pane_t

0xa80f,	// (0x0004e64a) grid_sctrl_middle_pane_cp01_ParamLimits

0xa80f,	// (0x0004e64a) grid_sctrl_middle_pane_cp01

0x638b,	// (0x0004a1c6) cell_sctrl_middle_pane_cp01_ParamLimits

0x638b,	// (0x0004a1c6) cell_sctrl_middle_pane_cp01

0x63a8,	// (0x0004a1e3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63a8,	// (0x0004a1e3) cell_sctrl_middle_pane_cp01_g1

0xa796,	// (0x0004e5d1) main_call4_pane

0x63bd,	// (0x0004a1f8) aid_size_button_call4_ParamLimits

0x63bd,	// (0x0004a1f8) aid_size_button_call4

0x63f0,	// (0x0004a22b) call4_windows_pane_ParamLimits

0x63f0,	// (0x0004a22b) call4_windows_pane

0x6412,	// (0x0004a24d) grid_call4_button_pane_ParamLimits

0x6412,	// (0x0004a24d) grid_call4_button_pane

0xeaf6,	// (0x00052931) call4_windows_conf_pane

0x643d,	// (0x0004a278) popup_call4_audio_first_window_ParamLimits

0x643d,	// (0x0004a278) popup_call4_audio_first_window

0x6469,	// (0x0004a2a4) popup_call4_audio_second_window_ParamLimits

0x6469,	// (0x0004a2a4) popup_call4_audio_second_window

0xeb33,	// (0x0005296e) popup_call4_audio_wait_window_ParamLimits

0xeb33,	// (0x0005296e) popup_call4_audio_wait_window

0x647f,	// (0x0004a2ba) cell_call4_button_pane_ParamLimits

0x647f,	// (0x0004a2ba) cell_call4_button_pane

0x64a6,	// (0x0004a2e1) bg_button_pane_cp09_ParamLimits

0x64a6,	// (0x0004a2e1) bg_button_pane_cp09

0x64b2,	// (0x0004a2ed) cell_call4_button_pane_g1_ParamLimits

0x64b2,	// (0x0004a2ed) cell_call4_button_pane_g1

0x64d8,	// (0x0004a313) cell_call4_button_pane_t1_ParamLimits

0x64d8,	// (0x0004a313) cell_call4_button_pane_t1

0xeb7b,	// (0x000529b6) popup_call4_audio_conf_window_ParamLimits

0xeb7b,	// (0x000529b6) popup_call4_audio_conf_window

0x56d1,	// (0x0004950c) mup3_progress_pane_t1_ParamLimits

0x56ef,	// (0x0004952a) mup3_progress_pane_t2_ParamLimits

0xe4a9,	// (0x000522e4) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x000535e7) mup3_progress_pane_t_ParamLimits

0xe4c6,	// (0x00052301) mup_progress_pane_cp03_ParamLimits

0x5cce,	// (0x00049b09) mup3_control_keys_pane_g4_copy1

0xbd91,	// (0x0004fbcc) mp4_rocker2_pane_ParamLimits

0xbd91,	// (0x0004fbcc) mp4_rocker2_pane

0xeb95,	// (0x000529d0) mp4_rocker2_pane_g1

0xeb9d,	// (0x000529d8) mp4_rocker2_pane_g2

0xbe03,	// (0x0004fc3e) mp4_rocker2_pane_g3

0xbe0b,	// (0x0004fc46) mp4_rocker2_pane_g4

0xbe13,	// (0x0004fc4e) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x00053712) mp4_rocker2_pane_g

0xa796,	// (0x0004e5d1) main_camera4_pane

0xa796,	// (0x0004e5d1) main_video4_pane

0x5f41,	// (0x00049d7c) main_video_tele_dialer_pane_t1_ParamLimits

0x5f41,	// (0x00049d7c) main_video_tele_dialer_pane_t1

0x5f5a,	// (0x00049d95) main_video_tele_dialer_pane_t2_ParamLimits

0x5f5a,	// (0x00049d95) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x000536d1) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x000536d1) main_video_tele_dialer_pane_t

0x6516,	// (0x0004a351) cam4_autofocus_pane_ParamLimits

0x6516,	// (0x0004a351) cam4_autofocus_pane

0x652c,	// (0x0004a367) cam4_image_uncrop_pane_ParamLimits

0x652c,	// (0x0004a367) cam4_image_uncrop_pane

0x6545,	// (0x0004a380) cam4_indicators_pane_ParamLimits

0x6545,	// (0x0004a380) cam4_indicators_pane

0x6574,	// (0x0004a3af) main_camera4_pane_g1_ParamLimits

0x6574,	// (0x0004a3af) main_camera4_pane_g1

0x6586,	// (0x0004a3c1) main_camera4_pane_g2_ParamLimits

0x6586,	// (0x0004a3c1) main_camera4_pane_g2

0x6599,	// (0x0004a3d4) main_camera4_pane_g3_ParamLimits

0x6599,	// (0x0004a3d4) main_camera4_pane_g3

0x65ac,	// (0x0004a3e7) main_camera4_pane_g4_ParamLimits

0x65ac,	// (0x0004a3e7) main_camera4_pane_g4

0x65bf,	// (0x0004a3fa) main_camera4_pane_g5_ParamLimits

0x65bf,	// (0x0004a3fa) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0005371d) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0005371d) main_camera4_pane_g

0x65e3,	// (0x0004a41e) main_camera4_pane_t1_ParamLimits

0x65e3,	// (0x0004a41e) main_camera4_pane_t1

0xe42e,	// (0x00052269) bg_tb_trans_pane_cp06

0xbe41,	// (0x0004fc7c) cam4_indicators_pane_g1

0xbe52,	// (0x0004fc8d) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x00053738) cam4_indicators_pane_g

0xbe6a,	// (0x0004fca5) cam4_indicators_pane_t1

0x6647,	// (0x0004a482) main_video4_pane_g1_ParamLimits

0x6647,	// (0x0004a482) main_video4_pane_g1

0x6656,	// (0x0004a491) main_video4_pane_g2_ParamLimits

0x6656,	// (0x0004a491) main_video4_pane_g2

0x6665,	// (0x0004a4a0) main_video4_pane_g3_ParamLimits

0x6665,	// (0x0004a4a0) main_video4_pane_g3

0x6674,	// (0x0004a4af) main_video4_pane_g4_ParamLimits

0x6674,	// (0x0004a4af) main_video4_pane_g4

0x0004,

0xf904,	// (0x0005373f) main_video4_pane_g_ParamLimits

0xf904,	// (0x0005373f) main_video4_pane_g

0x6692,	// (0x0004a4cd) vid4_indicators_pane_ParamLimits

0x6692,	// (0x0004a4cd) vid4_indicators_pane

0x66c0,	// (0x0004a4fb) video4_image_uncrop_cif_pane_ParamLimits

0x66c0,	// (0x0004a4fb) video4_image_uncrop_cif_pane

0x66da,	// (0x0004a515) video4_image_uncrop_nhd_pane_ParamLimits

0x66da,	// (0x0004a515) video4_image_uncrop_nhd_pane

0x652c,	// (0x0004a367) video4_image_uncrop_vga_pane_ParamLimits

0x652c,	// (0x0004a367) video4_image_uncrop_vga_pane

0xa80f,	// (0x0004e64a) bg_tb_trans_pane_cp07

0xbe98,	// (0x0004fcd3) vid4_indicators_pane_g1

0xbeae,	// (0x0004fce9) vid4_indicators_pane_g2

0xbec2,	// (0x0004fcfd) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0005374a) vid4_indicators_pane_g

0xbef3,	// (0x0004fd2e) vid4_indicators_pane_t1

0x66f0,	// (0x0004a52b) cam4_autofocus_pane_g1

0x66f8,	// (0x0004a533) cam4_autofocus_pane_g2

0x6700,	// (0x0004a53b) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x00053755) cam4_autofocus_pane_g

0x6708,	// (0x0004a543) cam4_autofocus_pane_g3_copy1

0x5f87,	// (0x00049dc2) video_down_pane_cp_t1

0x5f95,	// (0x00049dd0) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x000536d6) video_down_pane_cp_t

0xa80f,	// (0x0004e64a) popup_vitu2_window_ParamLimits

0xa80f,	// (0x0004e64a) popup_vitu2_window

0x6710,	// (0x0004a54b) aid_size_cell2_itu2_ParamLimits

0x6710,	// (0x0004a54b) aid_size_cell2_itu2

0x6736,	// (0x0004a571) aid_size_cell_itu2_ParamLimits

0x6736,	// (0x0004a571) aid_size_cell_itu2

0x6794,	// (0x0004a5cf) bg_popup_window_pane_cp09_ParamLimits

0x6794,	// (0x0004a5cf) bg_popup_window_pane_cp09

0x67a2,	// (0x0004a5dd) field_vitu2_entry_pane_ParamLimits

0x67a2,	// (0x0004a5dd) field_vitu2_entry_pane

0x67ca,	// (0x0004a605) grid_vitu2_function_pane_ParamLimits

0x67ca,	// (0x0004a605) grid_vitu2_function_pane

0x681b,	// (0x0004a656) grid_vitu2_itu_pane_ParamLimits

0x681b,	// (0x0004a656) grid_vitu2_itu_pane

0x68a6,	// (0x0004a6e1) cell_vitu2_itu_pane_ParamLimits

0x68a6,	// (0x0004a6e1) cell_vitu2_itu_pane

0x68cc,	// (0x0004a707) cell_vitu2_function_pane_ParamLimits

0x68cc,	// (0x0004a707) cell_vitu2_function_pane

0xebb9,	// (0x000529f4) bg_popup_call_pane_cp08_ParamLimits

0xebb9,	// (0x000529f4) bg_popup_call_pane_cp08

0xebd2,	// (0x00052a0d) field_vitu2_entry_pane_g1

0xebde,	// (0x00052a19) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0005375c) field_vitu2_entry_pane_g

0xbf0a,	// (0x0004fd45) field_vitu2_entry_pane_t1_ParamLimits

0xbf0a,	// (0x0004fd45) field_vitu2_entry_pane_t1

0xbf39,	// (0x0004fd74) field_vitu2_entry_pane_t2_ParamLimits

0xbf39,	// (0x0004fd74) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x00053763) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x00053763) field_vitu2_entry_pane_t

0x6910,	// (0x0004a74b) bg_button_pane_cp010_ParamLimits

0x6910,	// (0x0004a74b) bg_button_pane_cp010

0x691e,	// (0x0004a759) cell_vitu2_itu_pane_g1

0x693c,	// (0x0004a777) cell_vitu2_itu_pane_t1_ParamLimits

0x693c,	// (0x0004a777) cell_vitu2_itu_pane_t1

0x08e9,	// (0x00044724) cell_vitu2_itu_pane_t2_ParamLimits

0x08e9,	// (0x00044724) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0005376d) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0005376d) cell_vitu2_itu_pane_t

0xa80f,	// (0x0004e64a) bg_button_pane_cp011

0x69a2,	// (0x0004a7dd) cell_vitu2_function_pane_g1

0xa796,	// (0x0004e5d1) main_myfav_hc_pane

0x6353,	// (0x0004a18e) popup_image3_note_pane_ParamLimits

0x6353,	// (0x0004a18e) popup_image3_note_pane

0x636f,	// (0x0004a1aa) popup_image3_tool_bar_pane_ParamLimits

0x636f,	// (0x0004a1aa) popup_image3_tool_bar_pane

0x096d,	// (0x000447a8) cell_vitu2_itu_pane_t3_ParamLimits

0x096d,	// (0x000447a8) cell_vitu2_itu_pane_t3

0xa796,	// (0x0004e5d1) bg_popup_trans_pane

0xec00,	// (0x00052a3b) grid_image3_tool_bar_pane

0xec0a,	// (0x00052a45) bg_popup_trans_pane_g1

0xb503,	// (0x0004f33e) bg_popup_trans_pane_g2

0xec12,	// (0x00052a4d) bg_popup_trans_pane_g3

0xec1a,	// (0x00052a55) bg_popup_trans_pane_g4

0xec22,	// (0x00052a5d) bg_popup_trans_pane_g5

0xec2a,	// (0x00052a65) bg_popup_trans_pane_g6

0xec32,	// (0x00052a6d) bg_popup_trans_pane_g7

0xec3a,	// (0x00052a75) bg_popup_trans_pane_g8

0xb4e3,	// (0x0004f31e) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x00053774) bg_popup_trans_pane_g

0xec42,	// (0x00052a7d) cell_image3_tool_bar_pane_ParamLimits

0xec42,	// (0x00052a7d) cell_image3_tool_bar_pane

0xe1fe,	// (0x00052039) cell_image3_tool_bar_pane_g1

0xa796,	// (0x0004e5d1) bg_popup_trans_pane_cp1

0xec58,	// (0x00052a93) popup_image3_note_pane_t1

0xec66,	// (0x00052aa1) popup_image3_note_pane_t2

0xec74,	// (0x00052aaf) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x00053787) popup_image3_note_pane_t

0xec84,	// (0x00052abf) popup_image3_note_pane_t3_copy1

0x69b6,	// (0x0004a7f1) bg_myfav_hc_instruction_pane_ParamLimits

0x69b6,	// (0x0004a7f1) bg_myfav_hc_instruction_pane

0x69ce,	// (0x0004a809) cell_myfav_contact_pane_ParamLimits

0x69ce,	// (0x0004a809) cell_myfav_contact_pane

0x69ea,	// (0x0004a825) cell_myfav_contact_pane_cp1_ParamLimits

0x69ea,	// (0x0004a825) cell_myfav_contact_pane_cp1

0x6a02,	// (0x0004a83d) cell_myfav_contact_pane_cp2_ParamLimits

0x6a02,	// (0x0004a83d) cell_myfav_contact_pane_cp2

0x6a1a,	// (0x0004a855) cell_myfav_contact_pane_cp3_ParamLimits

0x6a1a,	// (0x0004a855) cell_myfav_contact_pane_cp3

0x6a31,	// (0x0004a86c) cell_myfav_contact_pane_cp4_ParamLimits

0x6a31,	// (0x0004a86c) cell_myfav_contact_pane_cp4

0x6a49,	// (0x0004a884) cell_myfav_contact_pane_cp5_ParamLimits

0x6a49,	// (0x0004a884) cell_myfav_contact_pane_cp5

0x6a5d,	// (0x0004a898) cell_myfav_contact_pane_cp6_ParamLimits

0x6a5d,	// (0x0004a898) cell_myfav_contact_pane_cp6

0x6a73,	// (0x0004a8ae) cell_myfav_contact_pane_cp7_ParamLimits

0x6a73,	// (0x0004a8ae) cell_myfav_contact_pane_cp7

0xec92,	// (0x00052acd) listscroll_gen_pane_cp05

0x6a8b,	// (0x0004a8c6) main_myfav_hc_pane_g1_ParamLimits

0x6a8b,	// (0x0004a8c6) main_myfav_hc_pane_g1

0x6aa5,	// (0x0004a8e0) main_myfav_hc_pane_g2_ParamLimits

0x6aa5,	// (0x0004a8e0) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0005378e) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0005378e) main_myfav_hc_pane_g

0x6ad9,	// (0x0004a914) main_myfav_hc_pane_t1_ParamLimits

0x6ad9,	// (0x0004a914) main_myfav_hc_pane_t1

0xec9b,	// (0x00052ad6) main_myfav_hc_pane_t2_ParamLimits

0xec9b,	// (0x00052ad6) main_myfav_hc_pane_t2

0xecad,	// (0x00052ae8) main_myfav_hc_pane_t3_ParamLimits

0xecad,	// (0x00052ae8) main_myfav_hc_pane_t3

0x6af0,	// (0x0004a92b) main_myfav_hc_pane_t4_ParamLimits

0x6af0,	// (0x0004a92b) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x00053795) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x00053795) main_myfav_hc_pane_t

0xe1fe,	// (0x00052039) bg_myfav_hc_instruction_pane_g1

0xecbf,	// (0x00052afa) cell_myfav_contact_pane_g1_ParamLimits

0xecbf,	// (0x00052afa) cell_myfav_contact_pane_g1

0xecbf,	// (0x00052afa) cell_myfav_contact_pane_g2_ParamLimits

0xecbf,	// (0x00052afa) cell_myfav_contact_pane_g2

0xeccb,	// (0x00052b06) cell_myfav_contact_pane_g3_ParamLimits

0xeccb,	// (0x00052b06) cell_myfav_contact_pane_g3

0xe493,	// (0x000522ce) cell_myfav_contact_pane_g4_ParamLimits

0xe493,	// (0x000522ce) cell_myfav_contact_pane_g4

0xecd8,	// (0x00052b13) cell_myfav_contact_pane_g5_ParamLimits

0xecd8,	// (0x00052b13) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x000537a0) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x000537a0) cell_myfav_contact_pane_g

0x6abf,	// (0x0004a8fa) main_myfav_hc_pane_g3_ParamLimits

0x6abf,	// (0x0004a8fa) main_myfav_hc_pane_g3

0x13b1,	// (0x000451ec) popup_adpt_find_window

0x6b1a,	// (0x0004a955) afind_page_pane_ParamLimits

0x6b1a,	// (0x0004a955) afind_page_pane

0x6b2f,	// (0x0004a96a) aid_size_cell_afind_ParamLimits

0x6b2f,	// (0x0004a96a) aid_size_cell_afind

0x6b4d,	// (0x0004a988) bg_popup_sub_pane_cp09_ParamLimits

0x6b4d,	// (0x0004a988) bg_popup_sub_pane_cp09

0x6b5a,	// (0x0004a995) find_pane_cp01_ParamLimits

0x6b5a,	// (0x0004a995) find_pane_cp01

0xece4,	// (0x00052b1f) grid_afind_control_pane_ParamLimits

0xece4,	// (0x00052b1f) grid_afind_control_pane

0x6b67,	// (0x0004a9a2) grid_afind_pane_ParamLimits

0x6b67,	// (0x0004a9a2) grid_afind_pane

0x6b89,	// (0x0004a9c4) cell_afind_pane_ParamLimits

0x6b89,	// (0x0004a9c4) cell_afind_pane

0xe1fe,	// (0x00052039) afind_page_pane_g1

0x6bec,	// (0x0004aa27) afind_page_pane_g2

0x6bf5,	// (0x0004aa30) afind_page_pane_g3

0x0002,

0xf970,	// (0x000537ab) afind_page_pane_g

0x6bfe,	// (0x0004aa39) afind_page_pane_t1

0xecf8,	// (0x00052b33) cell_afind_grid_control_pane_ParamLimits

0xecf8,	// (0x00052b33) cell_afind_grid_control_pane

0xeaea,	// (0x00052925) bg_button_pane_cp69_ParamLimits

0xeaea,	// (0x00052925) bg_button_pane_cp69

0x6c1e,	// (0x0004aa59) cell_afind_pane_g1_ParamLimits

0x6c1e,	// (0x0004aa59) cell_afind_pane_g1

0x6c2b,	// (0x0004aa66) cell_afind_pane_t1_ParamLimits

0x6c2b,	// (0x0004aa66) cell_afind_pane_t1

0xb23a,	// (0x0004f075) bg_button_pane_cp72

0xed07,	// (0x00052b42) cell_afind_grid_control_pane_g1

0x3bf4,	// (0x00047a2f) aid_image_placing_area_ParamLimits

0x3bf4,	// (0x00047a2f) aid_image_placing_area

0xe7b6,	// (0x000525f1) field_vitu_entry_pane_g1_ParamLimits

0xe7b6,	// (0x000525f1) field_vitu_entry_pane_g1

0xe7c2,	// (0x000525fd) field_vitu_entry_pane_g2_ParamLimits

0xe7c2,	// (0x000525fd) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00053661) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00053661) field_vitu_entry_pane_g

0x5d9b,	// (0x00049bd6) cell_vitu_itu_pane_g1_ParamLimits

0x5ddd,	// (0x00049c18) cell_vitu_itu_pane_t3_ParamLimits

0x5ddd,	// (0x00049c18) cell_vitu_itu_pane_t3

0xea9a,	// (0x000528d5) mp4_progress_pane_t1_ParamLimits

0xeab3,	// (0x000528ee) mp4_progress_pane_t2_ParamLimits

0x003b,	// (0x00043e76) mp4_progress_pane_t_ParamLimits

0xeacc,	// (0x00052907) mup_progress_pane_cp04_ParamLimits

0x6b04,	// (0x0004a93f) main_myfav_hc_pane_t5_ParamLimits

0x6b04,	// (0x0004a93f) main_myfav_hc_pane_t5

0xa7bc,	// (0x0004e5f7) aid_zoom_text_primary

0x13b1,	// (0x000451ec) popup_adpt_find_window_ParamLimits

0xa80f,	// (0x0004e64a) main_cam_set_pane

0x655e,	// (0x0004a399) cam4_zoom_pane_ParamLimits

0x655e,	// (0x0004a399) cam4_zoom_pane

0x6c3d,	// (0x0004aa78) main_cam_set_pane_g1_ParamLimits

0x6c3d,	// (0x0004aa78) main_cam_set_pane_g1

0x6c4b,	// (0x0004aa86) main_cam_set_pane_g2_ParamLimits

0x6c4b,	// (0x0004aa86) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x000537b2) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x000537b2) main_cam_set_pane_g

0x6c6c,	// (0x0004aaa7) main_cam_set_pane_t1_ParamLimits

0x6c6c,	// (0x0004aaa7) main_cam_set_pane_t1

0x6c87,	// (0x0004aac2) main_cset_listscroll_pane_ParamLimits

0x6c87,	// (0x0004aac2) main_cset_listscroll_pane

0x6cab,	// (0x0004aae6) main_cset_slider_pane_ParamLimits

0x6cab,	// (0x0004aae6) main_cset_slider_pane

0xed18,	// (0x00052b53) main_cset_list_pane_ParamLimits

0xed18,	// (0x00052b53) main_cset_list_pane

0xed28,	// (0x00052b63) scroll_pane_cp028

0x6cd5,	// (0x0004ab10) aid_area_touch_slider

0x6cf1,	// (0x0004ab2c) cset_slider_pane

0x6d1b,	// (0x0004ab56) main_cset_slider_pane_g1

0x6d30,	// (0x0004ab6b) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x000537b7) main_cset_slider_pane_g

0xed61,	// (0x00052b9c) main_cset_slider_pane_t1

0x6df2,	// (0x0004ac2d) main_cset_slider_pane_t2

0x6e0c,	// (0x0004ac47) main_cset_slider_pane_t3

0x6e26,	// (0x0004ac61) main_cset_slider_pane_t4

0x6e40,	// (0x0004ac7b) main_cset_slider_pane_t5

0x6e5e,	// (0x0004ac99) main_cset_slider_pane_t6

0x6e75,	// (0x0004acb0) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000537dc) main_cset_slider_pane_t

0x6f81,	// (0x0004adbc) cset_list_set_pane_ParamLimits

0x6f81,	// (0x0004adbc) cset_list_set_pane

0x6f95,	// (0x0004add0) aid_position_infowindow_above

0x6f9d,	// (0x0004add8) aid_position_infowindow_below

0x09c5,	// (0x00044800) cset_list_set_pane_g1_ParamLimits

0x09c5,	// (0x00044800) cset_list_set_pane_g1

0x09d1,	// (0x0004480c) cset_list_set_pane_g3_ParamLimits

0x09d1,	// (0x0004480c) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000537fb) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000537fb) cset_list_set_pane_g

0x09e0,	// (0x0004481b) cset_list_set_pane_t1_ParamLimits

0x09e0,	// (0x0004481b) cset_list_set_pane_t1

0xa80f,	// (0x0004e64a) list_highlight_pane_cp021_ParamLimits

0xa80f,	// (0x0004e64a) list_highlight_pane_cp021

0xcae5,	// (0x00050920) cset_slider_pane_g1

0xcaf7,	// (0x00050932) cset_slider_pane_g2

0xcaee,	// (0x00050929) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x00053800) cset_slider_pane_g

0xbf56,	// (0x0004fd91) aid_area_touch_cam4_zoom

0xbf5e,	// (0x0004fd99) cam4_zoom_cont_pane

0xbf66,	// (0x0004fda1) cam4_zoom_pane_g1

0xbf6e,	// (0x0004fda9) cam4_zoom_pane_g2

0x6fa5,	// (0x0004ade0) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x00053807) cam4_zoom_pane_g

0x6fad,	// (0x0004ade8) cam4_zoom_cont_pane_g1

0x6fb6,	// (0x0004adf1) cam4_zoom_cont_pane_g2

0x6fbf,	// (0x0004adfa) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0005380e) cam4_zoom_cont_pane_g

0x63db,	// (0x0004a216) call4_image_pane_ParamLimits

0x63db,	// (0x0004a216) call4_image_pane

0xeaf6,	// (0x00052931) call4_windows_conf_pane_ParamLimits

0xeb11,	// (0x0005294c) popup_call4_audio_in_window_ParamLimits

0xeb11,	// (0x0005294c) popup_call4_audio_in_window

0xa796,	// (0x0004e5d1) bg_popup_call2_act_pane_cp02

0xeb73,	// (0x000529ae) call4_list_conf_pane

0xe1fe,	// (0x00052039) call4_image_pane_g1

0xe1fe,	// (0x00052039) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00053527) call4_image_pane_g

0xee01,	// (0x00052c3c) list_single_graphic_popup_conf4_pane_ParamLimits

0xee01,	// (0x00052c3c) list_single_graphic_popup_conf4_pane

0xa796,	// (0x0004e5d1) list_highlight_pane_cp022

0xee16,	// (0x00052c51) list_single_graphic_popup_conf4_pane_g1

0xc7d1,	// (0x0005060c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x00053815) list_single_graphic_popup_conf4_pane_g

0xee1e,	// (0x00052c59) list_single_graphic_popup_conf4_pane_t1

0x2216,	// (0x00046051) popup_vtel_slider_window_ParamLimits

0x2216,	// (0x00046051) popup_vtel_slider_window

0xead8,	// (0x00052913) dialer2_ne_pane_t2_ParamLimits

0xead8,	// (0x00052913) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000536f6) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000536f6) dialer2_ne_pane_t

0xdfdd,	// (0x00051e18) bg_popup_sub_pane_cp010_ParamLimits

0xdfdd,	// (0x00051e18) bg_popup_sub_pane_cp010

0x6fc8,	// (0x0004ae03) popup_vtel_slider_window_g1_ParamLimits

0x6fc8,	// (0x0004ae03) popup_vtel_slider_window_g1

0x6fdb,	// (0x0004ae16) popup_vtel_slider_window_g2_ParamLimits

0x6fdb,	// (0x0004ae16) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0005381a) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0005381a) popup_vtel_slider_window_g

0x7031,	// (0x0004ae6c) vtel_slider_pane_ParamLimits

0x7031,	// (0x0004ae6c) vtel_slider_pane

0x7053,	// (0x0004ae8e) vtel_slider_pane_g1_ParamLimits

0x7053,	// (0x0004ae8e) vtel_slider_pane_g1

0x7067,	// (0x0004aea2) vtel_slider_pane_g2_ParamLimits

0x7067,	// (0x0004aea2) vtel_slider_pane_g2

0x707f,	// (0x0004aeba) vtel_slider_pane_g3_ParamLimits

0x707f,	// (0x0004aeba) vtel_slider_pane_g3

0x7053,	// (0x0004ae8e) vtel_slider_pane_g4_ParamLimits

0x7053,	// (0x0004ae8e) vtel_slider_pane_g4

0x7095,	// (0x0004aed0) vtel_slider_pane_g5_ParamLimits

0x7095,	// (0x0004aed0) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x00053823) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x00053823) vtel_slider_pane_g

0xa796,	// (0x0004e5d1) main_gallery2_pane

0x6762,	// (0x0004a59d) aid_size_row_itut2_dropdow_list_ParamLimits

0x6762,	// (0x0004a59d) aid_size_row_itut2_dropdow_list

0x67f2,	// (0x0004a62d) grid_vitu2_function_top_pane_ParamLimits

0x67f2,	// (0x0004a62d) grid_vitu2_function_top_pane

0x6851,	// (0x0004a68c) popup_vitu2_dropdown_list_window_ParamLimits

0x6851,	// (0x0004a68c) popup_vitu2_dropdown_list_window

0x687a,	// (0x0004a6b5) popup_vitu2_match_list_window

0x70ab,	// (0x0004aee6) cell_vitu2_function_top_pane_ParamLimits

0x70ab,	// (0x0004aee6) cell_vitu2_function_top_pane

0x70cb,	// (0x0004af06) cell_vitu2_function_top_pane_cp01_ParamLimits

0x70cb,	// (0x0004af06) cell_vitu2_function_top_pane_cp01

0x70e9,	// (0x0004af24) cell_vitu2_function_top_wide_pane_ParamLimits

0x70e9,	// (0x0004af24) cell_vitu2_function_top_wide_pane

0xa80f,	// (0x0004e64a) bg_button_pane_cp012

0x7107,	// (0x0004af42) cell_vitu2_function_top_pane_g1

0xbf84,	// (0x0004fdbf) bg_button_pane_cp013_ParamLimits

0xbf84,	// (0x0004fdbf) bg_button_pane_cp013

0x711b,	// (0x0004af56) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x711b,	// (0x0004af56) cell_vitu2_function_top_wide_pane_g1

0xa80f,	// (0x0004e64a) bg_popup_sub_pane_cp20

0x7133,	// (0x0004af6e) list_vitu2_match_list_pane

0xec0a,	// (0x00052a45) bg_popup_sub_pane_cp20_g1

0xec12,	// (0x00052a4d) bg_popup_sub_pane_cp20_g2

0xb503,	// (0x0004f33e) bg_popup_sub_pane_cp20_g3

0xec1a,	// (0x00052a55) bg_popup_sub_pane_cp20_g4

0xb4e3,	// (0x0004f31e) bg_popup_sub_pane_cp20_g5

0xee46,	// (0x00052c81) bg_popup_sub_pane_cp20_g6

0xec2a,	// (0x00052a65) bg_popup_sub_pane_cp20_g7

0xec32,	// (0x00052a6d) bg_popup_sub_pane_cp20_g8

0xec3a,	// (0x00052a75) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0005382e) bg_popup_sub_pane_cp20_g

0xbfa0,	// (0x0004fddb) list_vitu2_match_list_item_pane_ParamLimits

0xbfa0,	// (0x0004fddb) list_vitu2_match_list_item_pane

0xbfb2,	// (0x0004fded) list_vitu2_match_list_item_pane_t1

0xa796,	// (0x0004e5d1) bg_popup_sub_pane_cp21

0xb975,	// (0x0004f7b0) grid_vitu2_dropdown_list_pane

0x7151,	// (0x0004af8c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7151,	// (0x0004af8c) cell_vitu2_dropdown_list_char_pane

0x7174,	// (0x0004afaf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7174,	// (0x0004afaf) cell_vitu2_dropdown_list_ctrl_pane

0xee4e,	// (0x00052c89) cell_vitu2_dropdown_list_char_pane_g1

0xee57,	// (0x00052c92) cell_vitu2_dropdown_list_char_pane_g2

0xee60,	// (0x00052c9b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0195,	// (0x00043fd0) cell_vitu2_dropdown_list_char_pane_g

0x71a2,	// (0x0004afdd) cell_vitu2_dropdown_list_char_pane_t1

0x71b0,	// (0x0004afeb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71b0,	// (0x0004afeb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71c0,	// (0x0004affb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71c0,	// (0x0004affb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71d1,	// (0x0004b00c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71d1,	// (0x0004b00c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x71e1,	// (0x0004b01c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x71e1,	// (0x0004b01c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe42e,	// (0x00052269) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe42e,	// (0x00052269) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa10,	// (0x0005384b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa10,	// (0x0005384b) cell_vitu2_dropdown_list_ctrl_pane_g

0x71fd,	// (0x0004b038) aid_size_cell_gallery2_ParamLimits

0x71fd,	// (0x0004b038) aid_size_cell_gallery2

0x7213,	// (0x0004b04e) grid_gallery2_pane_ParamLimits

0x7213,	// (0x0004b04e) grid_gallery2_pane

0x7227,	// (0x0004b062) scroll_pane_cp029_ParamLimits

0x7227,	// (0x0004b062) scroll_pane_cp029

0x7233,	// (0x0004b06e) cell_gallery2_pane_ParamLimits

0x7233,	// (0x0004b06e) cell_gallery2_pane

0xee69,	// (0x00052ca4) cell_gallery2_pane_g2

0x726d,	// (0x0004b0a8) cell_gallery2_pane_g3

0xee73,	// (0x00052cae) cell_gallery2_pane_g4

0xee7b,	// (0x00052cb6) cell_gallery2_pane_g5

0xc99f,	// (0x000507da) grid_highlight_pane_cp10

0x687a,	// (0x0004a6b5) popup_vitu2_match_list_window_ParamLimits

0x6891,	// (0x0004a6cc) popup_vitu2_query_window_ParamLimits

0x6891,	// (0x0004a6cc) popup_vitu2_query_window

0xa796,	// (0x0004e5d1) bg_vitu2_candi_button_pane

0xee4e,	// (0x00052c89) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee57,	// (0x00052c92) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee60,	// (0x00052c9b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0a27,	// (0x00044862) bg_button_pane_cp015

0x7275,	// (0x0004b0b0) bg_button_pane_cp016

0x7288,	// (0x0004b0c3) bg_button_pane_cp017

0xddc6,	// (0x00051c01) bg_popup_sub_pane_cp22

0xee83,	// (0x00052cbe) popup_vitu2_query_window_g1

0x0a5c,	// (0x00044897) popup_vitu2_query_window_g2

0x0002,

0xfa1b,	// (0x00053856) popup_vitu2_query_window_g

0x0a7b,	// (0x000448b6) popup_vitu2_query_window_t1_ParamLimits

0x0a7b,	// (0x000448b6) popup_vitu2_query_window_t1

0x0ab0,	// (0x000448eb) popup_vitu2_query_window_t2_ParamLimits

0x0ab0,	// (0x000448eb) popup_vitu2_query_window_t2

0x0ac2,	// (0x000448fd) popup_vitu2_query_window_t3_ParamLimits

0x0ac2,	// (0x000448fd) popup_vitu2_query_window_t3

0x72ac,	// (0x0004b0e7) popup_vitu2_query_window_t4_ParamLimits

0x72ac,	// (0x0004b0e7) popup_vitu2_query_window_t4

0x72cd,	// (0x0004b108) popup_vitu2_query_window_t5_ParamLimits

0x72cd,	// (0x0004b108) popup_vitu2_query_window_t5

0x0006,

0xfa22,	// (0x0005385d) popup_vitu2_query_window_t_ParamLimits

0xfa22,	// (0x0005385d) popup_vitu2_query_window_t

0xed10,	// (0x00052b4b) main_cset_text_pane

0x6cd5,	// (0x0004ab10) aid_area_touch_slider_ParamLimits

0x6cf1,	// (0x0004ab2c) cset_slider_pane_ParamLimits

0x6d1b,	// (0x0004ab56) main_cset_slider_pane_g1_ParamLimits

0x6d30,	// (0x0004ab6b) main_cset_slider_pane_g2_ParamLimits

0xed31,	// (0x00052b6c) main_cset_slider_pane_g3_ParamLimits

0xed31,	// (0x00052b6c) main_cset_slider_pane_g3

0x6d45,	// (0x0004ab80) main_cset_slider_pane_g4_ParamLimits

0x6d45,	// (0x0004ab80) main_cset_slider_pane_g4

0x6d54,	// (0x0004ab8f) main_cset_slider_pane_g5_ParamLimits

0x6d54,	// (0x0004ab8f) main_cset_slider_pane_g5

0x6d62,	// (0x0004ab9d) main_cset_slider_pane_g6_ParamLimits

0x6d62,	// (0x0004ab9d) main_cset_slider_pane_g6

0xf97c,	// (0x000537b7) main_cset_slider_pane_g_ParamLimits

0xed61,	// (0x00052b9c) main_cset_slider_pane_t1_ParamLimits

0x6df2,	// (0x0004ac2d) main_cset_slider_pane_t2_ParamLimits

0x6e0c,	// (0x0004ac47) main_cset_slider_pane_t3_ParamLimits

0x6e26,	// (0x0004ac61) main_cset_slider_pane_t4_ParamLimits

0x6e40,	// (0x0004ac7b) main_cset_slider_pane_t5_ParamLimits

0x6e5e,	// (0x0004ac99) main_cset_slider_pane_t6_ParamLimits

0x6e75,	// (0x0004acb0) main_cset_slider_pane_t7_ParamLimits

0x6ea3,	// (0x0004acde) main_cset_slider_pane_t8_ParamLimits

0x6ea3,	// (0x0004acde) main_cset_slider_pane_t8

0x6ecb,	// (0x0004ad06) main_cset_slider_pane_t9_ParamLimits

0x6ecb,	// (0x0004ad06) main_cset_slider_pane_t9

0x6ef3,	// (0x0004ad2e) main_cset_slider_pane_t10_ParamLimits

0x6ef3,	// (0x0004ad2e) main_cset_slider_pane_t10

0x6f1b,	// (0x0004ad56) main_cset_slider_pane_t11_ParamLimits

0x6f1b,	// (0x0004ad56) main_cset_slider_pane_t11

0x6f45,	// (0x0004ad80) main_cset_slider_pane_t12_ParamLimits

0x6f45,	// (0x0004ad80) main_cset_slider_pane_t12

0x6f62,	// (0x0004ad9d) main_cset_slider_pane_t13_ParamLimits

0x6f62,	// (0x0004ad9d) main_cset_slider_pane_t13

0xf9a1,	// (0x000537dc) main_cset_slider_pane_t_ParamLimits

0xa796,	// (0x0004e5d1) bg_popup_sub_pane_cp011

0xee8f,	// (0x00052cca) main_cset_text_pane_g1

0xee97,	// (0x00052cd2) main_cset_text_pane_t1

0xeea5,	// (0x00052ce0) main_cset_text_pane_t2

0xeeb3,	// (0x00052cee) main_cset_text_pane_t3

0xeec1,	// (0x00052cfc) main_cset_text_pane_t4

0xeecf,	// (0x00052d0a) main_cset_text_pane_t5

0xeedd,	// (0x00052d18) main_cset_text_pane_t6

0xeeeb,	// (0x00052d26) main_cset_text_pane_t7

0x0006,

0x01bd,	// (0x00043ff8) main_cset_text_pane_t

0xa796,	// (0x0004e5d1) main_cam4_burst_pane

0xa796,	// (0x0004e5d1) main_cam5_pane

0x6c0c,	// (0x0004aa47) bg_button_pane_cp019

0x6c15,	// (0x0004aa50) bg_button_pane_cp020

0xed3d,	// (0x00052b78) main_cset_slider_pane_g7_ParamLimits

0xed3d,	// (0x00052b78) main_cset_slider_pane_g7

0xed49,	// (0x00052b84) main_cset_slider_pane_g8_ParamLimits

0xed49,	// (0x00052b84) main_cset_slider_pane_g8

0x6d76,	// (0x0004abb1) main_cset_slider_pane_g9_ParamLimits

0x6d76,	// (0x0004abb1) main_cset_slider_pane_g9

0x6d82,	// (0x0004abbd) main_cset_slider_pane_g10_ParamLimits

0x6d82,	// (0x0004abbd) main_cset_slider_pane_g10

0x6d8e,	// (0x0004abc9) main_cset_slider_pane_g11_ParamLimits

0x6d8e,	// (0x0004abc9) main_cset_slider_pane_g11

0x6d9a,	// (0x0004abd5) main_cset_slider_pane_g12_ParamLimits

0x6d9a,	// (0x0004abd5) main_cset_slider_pane_g12

0x6da6,	// (0x0004abe1) main_cset_slider_pane_g13_ParamLimits

0x6da6,	// (0x0004abe1) main_cset_slider_pane_g13

0x6db2,	// (0x0004abed) main_cset_slider_pane_g14_ParamLimits

0x6db2,	// (0x0004abed) main_cset_slider_pane_g14

0x6dbe,	// (0x0004abf9) main_cset_slider_pane_g15_ParamLimits

0x6dbe,	// (0x0004abf9) main_cset_slider_pane_g15

0xed8f,	// (0x00052bca) main_cset_slider_pane_t14_ParamLimits

0xed8f,	// (0x00052bca) main_cset_slider_pane_t14

0xedc8,	// (0x00052c03) main_cset_slider_pane_t15_ParamLimits

0xedc8,	// (0x00052c03) main_cset_slider_pane_t15

0x72ee,	// (0x0004b129) aid_cam4_burst_size_cell_ParamLimits

0x72ee,	// (0x0004b129) aid_cam4_burst_size_cell

0x730e,	// (0x0004b149) grid_cam4_burst_pane_ParamLimits

0x730e,	// (0x0004b149) grid_cam4_burst_pane

0x7348,	// (0x0004b183) linegrid_cam4_burst_pane_ParamLimits

0x7348,	// (0x0004b183) linegrid_cam4_burst_pane

0xeef9,	// (0x00052d34) scroll_pane_cp30_ParamLimits

0xeef9,	// (0x00052d34) scroll_pane_cp30

0x736a,	// (0x0004b1a5) cell_cam4_burst_pane_ParamLimits

0x736a,	// (0x0004b1a5) cell_cam4_burst_pane

0xef05,	// (0x00052d40) linegrid_cam4_burst_pane_g1_ParamLimits

0xef05,	// (0x00052d40) linegrid_cam4_burst_pane_g1

0x73bf,	// (0x0004b1fa) linegrid_cam4_burst_pane_g2_ParamLimits

0x73bf,	// (0x0004b1fa) linegrid_cam4_burst_pane_g2

0xef12,	// (0x00052d4d) linegrid_cam4_burst_pane_g3_ParamLimits

0xef12,	// (0x00052d4d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa31,	// (0x0005386c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0005386c) linegrid_cam4_burst_pane_g

0x73d0,	// (0x0004b20b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73d0,	// (0x0004b20b) linegrid_cam4_burst_pane_g3_copy1

0xef1f,	// (0x00052d5a) linegrid_cam4_burst_pane_g4_ParamLimits

0xef1f,	// (0x00052d5a) linegrid_cam4_burst_pane_g4

0x73ee,	// (0x0004b229) linegrid_cam4_burst_pane_g5_ParamLimits

0x73ee,	// (0x0004b229) linegrid_cam4_burst_pane_g5

0x73ff,	// (0x0004b23a) linegrid_cam4_burst_pane_g6_ParamLimits

0x73ff,	// (0x0004b23a) linegrid_cam4_burst_pane_g6

0xef2c,	// (0x00052d67) linegrid_cam4_burst_pane_g7_ParamLimits

0xef2c,	// (0x00052d67) linegrid_cam4_burst_pane_g7

0x7416,	// (0x0004b251) cell_cam4_burst_pane_g1

0xef45,	// (0x00052d80) main_cam5_pane_t1_ParamLimits

0xef45,	// (0x00052d80) main_cam5_pane_t1

0xef57,	// (0x00052d92) main_cam5_pane_t2_ParamLimits

0xef57,	// (0x00052d92) main_cam5_pane_t2

0xef69,	// (0x00052da4) main_cam5_pane_t3_ParamLimits

0xef69,	// (0x00052da4) main_cam5_pane_t3

0xef7b,	// (0x00052db6) main_cam5_pane_t4_ParamLimits

0xef7b,	// (0x00052db6) main_cam5_pane_t4

0xef93,	// (0x00052dce) main_cam5_pane_t5_ParamLimits

0xef93,	// (0x00052dce) main_cam5_pane_t5

0xefa7,	// (0x00052de2) main_cam5_pane_t6_ParamLimits

0xefa7,	// (0x00052de2) main_cam5_pane_t6

0xefbb,	// (0x00052df6) main_cam5_pane_t7_ParamLimits

0xefbb,	// (0x00052df6) main_cam5_pane_t7

0xefcd,	// (0x00052e08) main_cam5_pane_t8_ParamLimits

0xefcd,	// (0x00052e08) main_cam5_pane_t8

0xefeb,	// (0x00052e26) main_cam5_pane_t9_ParamLimits

0xefeb,	// (0x00052e26) main_cam5_pane_t9

0xeffd,	// (0x00052e38) main_cam5_pane_t10_ParamLimits

0xeffd,	// (0x00052e38) main_cam5_pane_t10

0xf00f,	// (0x00052e4a) main_cam5_pane_t11_ParamLimits

0xf00f,	// (0x00052e4a) main_cam5_pane_t11

0xf023,	// (0x00052e5e) main_cam5_pane_t12_ParamLimits

0xf023,	// (0x00052e5e) main_cam5_pane_t12

0xf03a,	// (0x00052e75) main_cam5_pane_t13_ParamLimits

0xf03a,	// (0x00052e75) main_cam5_pane_t13

0x000c,

0x01d8,	// (0x00044013) main_cam5_pane_t_ParamLimits

0x01d8,	// (0x00044013) main_cam5_pane_t

0x1434,	// (0x0004526f) popup_scut_keymap_window_ParamLimits

0x1434,	// (0x0004526f) popup_scut_keymap_window

0x7429,	// (0x0004b264) aid_size_cell_brow_shortcut

0xc99f,	// (0x000507da) bg_popup_window_pane_cp010

0x7435,	// (0x0004b270) grid_scut_pane

0x7441,	// (0x0004b27c) cell_scut_pane_ParamLimits

0x7441,	// (0x0004b27c) cell_scut_pane

0x745a,	// (0x0004b295) cell_scut_pane_g1

0xf05d,	// (0x00052e98) cell_scut_pane_t1

0xf06c,	// (0x00052ea7) cell_scut_pane_t2

0x7463,	// (0x0004b29e) cell_scut_pane_t3

0x0002,

0xfa3d,	// (0x00053878) cell_scut_pane_t

0x5264,	// (0x0004909f) main_mup3_pane_g8_ParamLimits

0x5264,	// (0x0004909f) main_mup3_pane_g8

0x677c,	// (0x0004a5b7) area_vitu2_query_pane_ParamLimits

0x677c,	// (0x0004a5b7) area_vitu2_query_pane

0x0a3b,	// (0x00044876) input_focus_pane_cp08

0xf07b,	// (0x00052eb6) area_vitu2_query_pane_g1

0x0b40,	// (0x0004497b) area_vitu2_query_pane_g2

0x0001,

0xfa44,	// (0x0005387f) area_vitu2_query_pane_g

0x7471,	// (0x0004b2ac) area_vitu2_query_pane_t1_ParamLimits

0x7471,	// (0x0004b2ac) area_vitu2_query_pane_t1

0x7485,	// (0x0004b2c0) area_vitu2_query_pane_t2_ParamLimits

0x7485,	// (0x0004b2c0) area_vitu2_query_pane_t2

0x0b51,	// (0x0004498c) area_vitu2_query_pane_t3_ParamLimits

0x0b51,	// (0x0004498c) area_vitu2_query_pane_t3

0xbfd8,	// (0x0004fe13) area_vitu2_query_pane_t4_ParamLimits

0xbfd8,	// (0x0004fe13) area_vitu2_query_pane_t4

0xc000,	// (0x0004fe3b) area_vitu2_query_pane_t5_ParamLimits

0xc000,	// (0x0004fe3b) area_vitu2_query_pane_t5

0xc028,	// (0x0004fe63) area_vitu2_query_pane_t6_ParamLimits

0xc028,	// (0x0004fe63) area_vitu2_query_pane_t6

0x0006,

0xfa49,	// (0x00053884) area_vitu2_query_pane_t_ParamLimits

0xfa49,	// (0x00053884) area_vitu2_query_pane_t

0x7499,	// (0x0004b2d4) bg_button_pane_cp018

0x74a7,	// (0x0004b2e2) bg_button_pane_cp021

0x0b79,	// (0x000449b4) bg_button_pane_cp022

0x0b8a,	// (0x000449c5) input_focus_pane_cp09

0x31dd,	// (0x00047018) aid_size_touch_mv_arrow_left

0x3206,	// (0x00047041) aid_size_touch_mv_arrow_right

0x6dd6,	// (0x0004ac11) main_cset_slider_pane_g16_ParamLimits

0x6dd6,	// (0x0004ac11) main_cset_slider_pane_g16

0x6de4,	// (0x0004ac1f) main_cset_slider_pane_g17_ParamLimits

0x6de4,	// (0x0004ac1f) main_cset_slider_pane_g17

0x7416,	// (0x0004b251) cell_cam4_burst_pane_g1_ParamLimits

0xa796,	// (0x0004e5d1) compa_mode_pane

0x6feb,	// (0x0004ae26) popup_vtel_slider_window_g3_ParamLimits

0x6feb,	// (0x0004ae26) popup_vtel_slider_window_g3

0x7002,	// (0x0004ae3d) popup_vtel_slider_window_g4_ParamLimits

0x7002,	// (0x0004ae3d) popup_vtel_slider_window_g4

0x7019,	// (0x0004ae54) popup_vtel_slider_window_t1_ParamLimits

0x7019,	// (0x0004ae54) popup_vtel_slider_window_t1

0xa796,	// (0x0004e5d1) main_cl_pane

0xbaad,	// (0x0004f8e8) popup_imed_adjust2_window_ParamLimits

0xddc6,	// (0x00051c01) bg_tb_trans_pane_cp05_ParamLimits

0xe6eb,	// (0x00052526) popup_imed_adjust2_window_g1_ParamLimits

0xe6fa,	// (0x00052535) popup_imed_adjust2_window_g2_ParamLimits

0xe6fa,	// (0x00052535) popup_imed_adjust2_window_g2

0xe706,	// (0x00052541) popup_imed_adjust2_window_g3_ParamLimits

0xe706,	// (0x00052541) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00053625) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00053625) popup_imed_adjust2_window_g

0xe712,	// (0x0005254d) popup_imed_adjust2_window_t1_ParamLimits

0xe72a,	// (0x00052565) slider_imed_adjust_pane_ParamLimits

0xe73e,	// (0x00052579) slider_imed_adjust_pane_g1_ParamLimits

0xe74e,	// (0x00052589) slider_imed_adjust_pane_g2_ParamLimits

0xe75e,	// (0x00052599) slider_imed_adjust_pane_g3_ParamLimits

0xe76f,	// (0x000525aa) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0005362c) slider_imed_adjust_pane_g_ParamLimits

0x64fe,	// (0x0004a339) aid_touch_area_cam4_ParamLimits

0x64fe,	// (0x0004a339) aid_touch_area_cam4

0xbe1b,	// (0x0004fc56) battery_pane_cp01

0x65d0,	// (0x0004a40b) main_camera4_pane_g6_ParamLimits

0x65d0,	// (0x0004a40b) main_camera4_pane_g6

0x65fa,	// (0x0004a435) main_camera4_pane_t2_ParamLimits

0x65fa,	// (0x0004a435) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0005372a) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0005372a) main_camera4_pane_t

0x662f,	// (0x0004a46a) aid_touch_area_vid4_ParamLimits

0x662f,	// (0x0004a46a) aid_touch_area_vid4

0x6683,	// (0x0004a4be) main_video4_pane_g5_ParamLimits

0x6683,	// (0x0004a4be) main_video4_pane_g5

0x66a8,	// (0x0004a4e3) vid4_progress_pane_ParamLimits

0x66a8,	// (0x0004a4e3) vid4_progress_pane

0xed55,	// (0x00052b90) main_cset_slider_pane_g18_ParamLimits

0xed55,	// (0x00052b90) main_cset_slider_pane_g18

0xef39,	// (0x00052d74) cell_cam4_burst_pane_g2_ParamLimits

0xef39,	// (0x00052d74) cell_cam4_burst_pane_g2

0x0001,

0xfa38,	// (0x00053873) cell_cam4_burst_pane_g_ParamLimits

0xfa38,	// (0x00053873) cell_cam4_burst_pane_g

0xafb5,	// (0x0004edf0) bg_cl_pane_ParamLimits

0xafb5,	// (0x0004edf0) bg_cl_pane

0x74b3,	// (0x0004b2ee) cl_header_pane_ParamLimits

0x74b3,	// (0x0004b2ee) cl_header_pane

0x74c7,	// (0x0004b302) cl_listscroll_pane_ParamLimits

0x74c7,	// (0x0004b302) cl_listscroll_pane

0xf087,	// (0x00052ec2) bg_cl_pane_g1

0xf08f,	// (0x00052eca) bg_cl_pane_g2

0xf097,	// (0x00052ed2) bg_cl_pane_g3

0xf09f,	// (0x00052eda) bg_cl_pane_g4

0xf0a7,	// (0x00052ee2) bg_cl_pane_g5

0xf0af,	// (0x00052eea) bg_cl_pane_g6

0xf0b7,	// (0x00052ef2) bg_cl_pane_g7

0xf0bf,	// (0x00052efa) bg_cl_pane_g8

0xf0c7,	// (0x00052f02) bg_cl_pane_g9

0x0008,

0x020e,	// (0x00044049) bg_cl_pane_g

0x74d7,	// (0x0004b312) aid_height_cl_leading_ParamLimits

0x74d7,	// (0x0004b312) aid_height_cl_leading

0x74e3,	// (0x0004b31e) aid_height_cl_text_ParamLimits

0x74e3,	// (0x0004b31e) aid_height_cl_text

0xa80f,	// (0x0004e64a) bg_cl_header_pane_ParamLimits

0xa80f,	// (0x0004e64a) bg_cl_header_pane

0x7502,	// (0x0004b33d) cl_header_pane_g1_ParamLimits

0x7502,	// (0x0004b33d) cl_header_pane_g1

0x7518,	// (0x0004b353) cl_header_pane_t1_ParamLimits

0x7518,	// (0x0004b353) cl_header_pane_t1

0xf0cf,	// (0x00052f0a) cl_list_pane

0xed28,	// (0x00052b63) hc_scroll_pane_cp01

0xb4e3,	// (0x0004f31e) bg_cl_header_pane_g1

0xec0a,	// (0x00052a45) bg_cl_header_pane_g2

0xb503,	// (0x0004f33e) bg_cl_header_pane_g3

0xec1a,	// (0x00052a55) bg_cl_header_pane_g4

0xec12,	// (0x00052a4d) bg_cl_header_pane_g5

0xee46,	// (0x00052c81) bg_cl_header_pane_g6

0xec32,	// (0x00052a6d) bg_cl_header_pane_g7

0xec3a,	// (0x00052a75) bg_cl_header_pane_g8

0xec2a,	// (0x00052a65) bg_cl_header_pane_g9

0x0008,

0xfa58,	// (0x00053893) bg_cl_header_pane_g

0x7531,	// (0x0004b36c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7531,	// (0x0004b36c) hc_cl_list_double_graphic_heading_pane

0x7544,	// (0x0004b37f) hc_cl_list_single_graphic_pane_ParamLimits

0x7544,	// (0x0004b37f) hc_cl_list_single_graphic_pane

0x755c,	// (0x0004b397) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x755c,	// (0x0004b397) hc_cl_list_single_graphic_pane_g1

0x7568,	// (0x0004b3a3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7568,	// (0x0004b3a3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa6b,	// (0x000538a6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa6b,	// (0x000538a6) hc_cl_list_single_graphic_pane_g

0x757c,	// (0x0004b3b7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x757c,	// (0x0004b3b7) hc_cl_list_single_graphic_pane_t1

0x755c,	// (0x0004b397) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x755c,	// (0x0004b397) hc_cl_list_double_graphic_heading_pane_g1

0x7591,	// (0x0004b3cc) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7591,	// (0x0004b3cc) hc_cl_list_double_graphic_heading_pane_g2

0x75a5,	// (0x0004b3e0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75a5,	// (0x0004b3e0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa70,	// (0x000538ab) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa70,	// (0x000538ab) hc_cl_list_double_graphic_heading_pane_g

0x75b9,	// (0x0004b3f4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75b9,	// (0x0004b3f4) hc_cl_list_double_graphic_heading_pane_t1

0x75ce,	// (0x0004b409) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75ce,	// (0x0004b409) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa77,	// (0x000538b2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa77,	// (0x000538b2) hc_cl_list_double_graphic_heading_pane_t

0x75e3,	// (0x0004b41e) vid4_progress_pane_g1

0x75f5,	// (0x0004b430) vid4_progress_pane_g2

0xba77,	// (0x0004f8b2) vid4_progress_pane_g3

0xc07c,	// (0x0004feb7) vid4_progress_pane_g4

0x0004,

0xfa7c,	// (0x000538b7) vid4_progress_pane_g

0xc09a,	// (0x0004fed5) vid4_progress_pane_t1

0xc0af,	// (0x0004feea) vid4_progress_pane_t2

0x0002,

0xfa87,	// (0x000538c2) vid4_progress_pane_t

0xc0da,	// (0x0004ff15) wait_bar_pane_cp07

0xdfeb,	// (0x00051e26) blid_firmament_pane_ParamLimits

0xe02e,	// (0x00051e69) popup_blid_sat_info2_window_g1

0xe052,	// (0x00051e8d) popup_blid_sat_info2_window_t3

0xe060,	// (0x00051e9b) popup_blid_sat_info2_window_t4

0xe06e,	// (0x00051ea9) popup_blid_sat_info2_window_t5

0xe07c,	// (0x00051eb7) popup_blid_sat_info2_window_t6

0xe08c,	// (0x00051ec7) popup_blid_sat_info2_window_t7

0xe09a,	// (0x00051ed5) popup_blid_sat_info2_window_t8

0xe0a8,	// (0x00051ee3) popup_blid_sat_info2_window_t9

0xe0b6,	// (0x00051ef1) popup_blid_sat_info2_window_t10

0xe17e,	// (0x00051fb9) aid_firma_cardinal_ParamLimits

0xe192,	// (0x00051fcd) blid_firmament_pane_t1_ParamLimits

0xe1a9,	// (0x00051fe4) blid_firmament_pane_t2_ParamLimits

0xe1c0,	// (0x00051ffb) blid_firmament_pane_t3_ParamLimits

0xe1d7,	// (0x00052012) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0005351e) blid_firmament_pane_t_ParamLimits

0xe1ee,	// (0x00052029) blid_sat_info_pane_ParamLimits

0xa80f,	// (0x0004e64a) main_cam_set_pane_ParamLimits

0x5b49,	// (0x00049984) aid_size_cell_colour_35_ParamLimits

0x5b69,	// (0x000499a4) aid_size_cell_colour_112_ParamLimits

0x5b89,	// (0x000499c4) aid_size_cell_effect_ParamLimits

0xddc6,	// (0x00051c01) bg_tb_trans_pane_cp02_ParamLimits

0xb703,	// (0x0004f53e) heading_imed_pane_ParamLimits

0x5ba9,	// (0x000499e4) listscroll_imed_pane_ParamLimits

0xd3f4,	// (0x0005122f) popup_call2_audio_first_window_g5_ParamLimits

0xd3f4,	// (0x0005122f) popup_call2_audio_first_window_g5

0x6166,	// (0x00049fa1) aid_size_touch_image3_arrow_left_ParamLimits

0x6166,	// (0x00049fa1) aid_size_touch_image3_arrow_left

0x6192,	// (0x00049fcd) aid_size_touch_image3_arrow_right_ParamLimits

0x6192,	// (0x00049fcd) aid_size_touch_image3_arrow_right

0xc0c5,	// (0x0004ff00) vid4_progress_pane_t3

0x5ec4,	// (0x00049cff) main_hwr_training_symbol_option_pane_ParamLimits

0x5ec4,	// (0x00049cff) main_hwr_training_symbol_option_pane

0xe9da,	// (0x00052815) popup_hwr_training_preview_window_ParamLimits

0xe9da,	// (0x00052815) popup_hwr_training_preview_window

0x5ee4,	// (0x00049d1f) hwr_training_navi_pane_g5_ParamLimits

0x5ee4,	// (0x00049d1f) hwr_training_navi_pane_g5

0xebf8,	// (0x00052a33) popup_char_count_window

0xa80f,	// (0x0004e64a) bg_popup_sub_pane_cp20_ParamLimits

0x7133,	// (0x0004af6e) list_vitu2_match_list_pane_ParamLimits

0x7142,	// (0x0004af7d) vitu2_page_scroll_pane_ParamLimits

0x7142,	// (0x0004af7d) vitu2_page_scroll_pane

0x7619,	// (0x0004b454) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7619,	// (0x0004b454) list_single_hwr_training_symbol_option_pane

0x762c,	// (0x0004b467) list_single_hwr_training_symbol_option_pane_g1

0x7634,	// (0x0004b46f) list_single_hwr_training_symbol_option_pane_t1

0x7642,	// (0x0004b47d) bg_button_pane_cp023

0x764b,	// (0x0004b486) bg_button_pane_cp024

0x767e,	// (0x0004b4b9) vitu2_page_scroll_pane_g1

0x7686,	// (0x0004b4c1) vitu2_page_scroll_pane_g2

0x0001,

0xfa8e,	// (0x000538c9) vitu2_page_scroll_pane_g

0x7690,	// (0x0004b4cb) vitu2_page_scroll_pane_t1

0xdf4b,	// (0x00051d86) popup_char_count_window_g1

0x769f,	// (0x0004b4da) popup_char_count_window_g2

0x76a8,	// (0x0004b4e3) popup_char_count_window_g3

0x0002,

0xfa93,	// (0x000538ce) popup_char_count_window_g

0x76b1,	// (0x0004b4ec) popup_char_count_window_t1

0xa796,	// (0x0004e5d1) main_vded2_pane

0xe6d7,	// (0x00052512) aid_size_cell_imed_line

0xe6e1,	// (0x0005251c) grid_imed_line_width_pane

0xbed5,	// (0x0004fd10) vid4_indicators_pane_g4

0x76bf,	// (0x0004b4fa) cell_imed_line_width_pane_ParamLimits

0x76bf,	// (0x0004b4fa) cell_imed_line_width_pane

0x76d5,	// (0x0004b510) cell_imed_line_width_pane_g1

0xee34,	// (0x00052c6f) cell_imed_line_width_pane_g2

0x0001,

0xfa9a,	// (0x000538d5) cell_imed_line_width_pane_g

0x76de,	// (0x0004b519) main_vded2_pane_g1_ParamLimits

0x76de,	// (0x0004b519) main_vded2_pane_g1

0x76f9,	// (0x0004b534) main_vded2_pane_g2_ParamLimits

0x76f9,	// (0x0004b534) main_vded2_pane_g2

0x0001,

0xfa9f,	// (0x000538da) main_vded2_pane_g_ParamLimits

0xfa9f,	// (0x000538da) main_vded2_pane_g

0x770b,	// (0x0004b546) vded2_slider_pane_ParamLimits

0x770b,	// (0x0004b546) vded2_slider_pane

0x771b,	// (0x0004b556) aid_size_touch_vded2_end

0x7725,	// (0x0004b560) aid_size_touch_vded2_playhead

0x772f,	// (0x0004b56a) aid_size_touch_vded2_start

0x7737,	// (0x0004b572) vded2_slider_bg_pane

0x7740,	// (0x0004b57b) vded2_slider_pane_g1

0x7749,	// (0x0004b584) vded2_slider_pane_g2

0x7751,	// (0x0004b58c) vded2_slider_pane_g3

0x0002,

0xfaa4,	// (0x000538df) vded2_slider_pane_g

0x775c,	// (0x0004b597) vded2_slider_bg_pane_g1

0x7765,	// (0x0004b5a0) vded2_slider_bg_pane_g2

0x776e,	// (0x0004b5a9) vded2_slider_bg_pane_g3

0x0002,

0xfaab,	// (0x000538e6) vded2_slider_bg_pane_g

0x3831,	// (0x0004766c) aid_postcard_touch_down_pane_ParamLimits

0x3831,	// (0x0004766c) aid_postcard_touch_down_pane

0x3849,	// (0x00047684) aid_postcard_touch_up_pane_ParamLimits

0x3849,	// (0x00047684) aid_postcard_touch_up_pane

0xa796,	// (0x0004e5d1) main_blid2_pane

0xba8f,	// (0x0004f8ca) popup_blid2_search_window

0xa796,	// (0x0004e5d1) blid2_gps_pane

0xa796,	// (0x0004e5d1) blid2_navig_pane

0xa796,	// (0x0004e5d1) blid2_search_pane

0xa796,	// (0x0004e5d1) blid2_tripm_pane

0x7777,	// (0x0004b5b2) blid2_search_pane_g1_ParamLimits

0x7777,	// (0x0004b5b2) blid2_search_pane_g1

0x778a,	// (0x0004b5c5) blid2_search_pane_t1_ParamLimits

0x778a,	// (0x0004b5c5) blid2_search_pane_t1

0x779c,	// (0x0004b5d7) aid_size_cell_blid2_gps_ParamLimits

0x779c,	// (0x0004b5d7) aid_size_cell_blid2_gps

0x77b4,	// (0x0004b5ef) blid2_gps_pane_g1_ParamLimits

0x77b4,	// (0x0004b5ef) blid2_gps_pane_g1

0x77c8,	// (0x0004b603) grid_blid2_satellite_pane_ParamLimits

0x77c8,	// (0x0004b603) grid_blid2_satellite_pane

0x77e0,	// (0x0004b61b) blid2_navig_pane_g1_ParamLimits

0x77e0,	// (0x0004b61b) blid2_navig_pane_g1

0x77ec,	// (0x0004b627) blid2_navig_pane_t1_ParamLimits

0x77ec,	// (0x0004b627) blid2_navig_pane_t1

0x7807,	// (0x0004b642) blid2_navig_pane_t2_ParamLimits

0x7807,	// (0x0004b642) blid2_navig_pane_t2

0x0001,

0xfab2,	// (0x000538ed) blid2_navig_pane_t_ParamLimits

0xfab2,	// (0x000538ed) blid2_navig_pane_t

0x7822,	// (0x0004b65d) blid2_navig_ring_pane_ParamLimits

0x7822,	// (0x0004b65d) blid2_navig_ring_pane

0x783d,	// (0x0004b678) blid2_speed_pane_ParamLimits

0x783d,	// (0x0004b678) blid2_speed_pane

0x7849,	// (0x0004b684) blid2_tripm_pane_g1_ParamLimits

0x7849,	// (0x0004b684) blid2_tripm_pane_g1

0x7864,	// (0x0004b69f) blid2_tripm_pane_g2_ParamLimits

0x7864,	// (0x0004b69f) blid2_tripm_pane_g2

0x7878,	// (0x0004b6b3) blid2_tripm_pane_g3_ParamLimits

0x7878,	// (0x0004b6b3) blid2_tripm_pane_g3

0x788c,	// (0x0004b6c7) blid2_tripm_pane_g4_ParamLimits

0x788c,	// (0x0004b6c7) blid2_tripm_pane_g4

0x78a0,	// (0x0004b6db) blid2_tripm_pane_g5_ParamLimits

0x78a0,	// (0x0004b6db) blid2_tripm_pane_g5

0x0005,

0xfab7,	// (0x000538f2) blid2_tripm_pane_g_ParamLimits

0xfab7,	// (0x000538f2) blid2_tripm_pane_g

0x78c6,	// (0x0004b701) blid2_tripm_pane_t1_ParamLimits

0x78c6,	// (0x0004b701) blid2_tripm_pane_t1

0x78df,	// (0x0004b71a) blid2_tripm_pane_t2_ParamLimits

0x78df,	// (0x0004b71a) blid2_tripm_pane_t2

0x78f8,	// (0x0004b733) blid2_tripm_pane_t3_ParamLimits

0x78f8,	// (0x0004b733) blid2_tripm_pane_t3

0x0003,

0xfac4,	// (0x000538ff) blid2_tripm_pane_t_ParamLimits

0xfac4,	// (0x000538ff) blid2_tripm_pane_t

0x793f,	// (0x0004b77a) cell_blid2_satellite_pane_ParamLimits

0x793f,	// (0x0004b77a) cell_blid2_satellite_pane

0x795b,	// (0x0004b796) cell_blid2_satellite_pane_g1

0x7964,	// (0x0004b79f) cell_blid2_satellite_pane_t1

0xe1fe,	// (0x00052039) blid2_speed_pane_g1

0x7972,	// (0x0004b7ad) blid2_speed_pane_t1

0x7980,	// (0x0004b7bb) blid2_speed_pane_t2

0x0001,

0xfacd,	// (0x00053908) blid2_speed_pane_t

0xe1fe,	// (0x00052039) blid2_navig_ring_pane_g1

0x798e,	// (0x0004b7c9) blid2_navig_ring_pane_g2

0x7996,	// (0x0004b7d1) blid2_navig_ring_pane_g3

0x799e,	// (0x0004b7d9) blid2_navig_ring_pane_g4

0x79a6,	// (0x0004b7e1) blid2_navig_ring_pane_g5

0x0004,

0xfad2,	// (0x0005390d) blid2_navig_ring_pane_g

0xa796,	// (0x0004e5d1) bg_popup_window_pane_cp011

0x79ae,	// (0x0004b7e9) popup_blid2_search_window_g1

0x79b6,	// (0x0004b7f1) popup_blid2_search_window_t1

0x79c4,	// (0x0004b7ff) popup_blid2_search_window_t2

0x0001,

0xfadd,	// (0x00053918) popup_blid2_search_window_t

0xb3f2,	// (0x0004f22d) main_browser_pane_g1

0xafb5,	// (0x0004edf0) main_browser_pane_ParamLimits

0xa80f,	// (0x0004e64a) bg_button_pane_cp011_ParamLimits

0x69a2,	// (0x0004a7dd) cell_vitu2_function_pane_g1_ParamLimits

0xddc6,	// (0x00051c01) bg_popup_sub_pane_cp22_ParamLimits

0x0a3b,	// (0x00044876) input_focus_pane_cp08_ParamLimits

0x729b,	// (0x0004b0d6) popup_vitu2_query_button_pane_ParamLimits

0x729b,	// (0x0004b0d6) popup_vitu2_query_button_pane

0x0a52,	// (0x0004488d) popup_vitu2_query_input_button_pane

0xee83,	// (0x00052cbe) popup_vitu2_query_window_g1_ParamLimits

0x0a5c,	// (0x00044897) popup_vitu2_query_window_g2_ParamLimits

0xfa1b,	// (0x00053856) popup_vitu2_query_window_g_ParamLimits

0xa796,	// (0x0004e5d1) bg_button_pane_cp026

0x79d2,	// (0x0004b80d) popup_vitu2_query_input_button_pane_g1

0xa796,	// (0x0004e5d1) bg_button_pane_cp025

0x79da,	// (0x0004b815) popup_vitu2_query_button_pane_t1

0x4f38,	// (0x00048d73) main_mp3_pane_t6

0x4f46,	// (0x00048d81) popup_slider_window_cp01

0xbe39,	// (0x0004fc74) cam4_battery_pane

0xbe8e,	// (0x0004fcc9) cam4_battery_pane_cp02

0xc074,	// (0x0004feaf) cam4_battery_pane_cp01

0xc074,	// (0x0004feaf) cam4_battery_pane_cp03

0xe1fe,	// (0x00052039) cam4_battery_pane_g1

0xee3c,	// (0x00052c77) cam4_battery_pane_g2

0x0001,

0xfae2,	// (0x0005391d) cam4_battery_pane_g

0xe0c4,	// (0x00051eff) popup_blid_sat_info2_window_t11

0x31dd,	// (0x00047018) aid_size_touch_mv_arrow_left_ParamLimits

0x3206,	// (0x00047041) aid_size_touch_mv_arrow_right_ParamLimits

0xc8ff,	// (0x0005073a) navi_pane_g1_ParamLimits

0x3245,	// (0x00047080) navi_pane_g2_ParamLimits

0x3273,	// (0x000470ae) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00053230) navi_pane_g_ParamLimits

0x32cd,	// (0x00047108) navi_pane_mv_t1_ParamLimits

0x5bb5,	// (0x000499f0) grid_imed_effect_pane_ParamLimits

0x211e,	// (0x00045f59) aid_placing_vt_slider_lsc

0xb33d,	// (0x0004f178) aid_placing_vt_slider_prt

0xa80f,	// (0x0004e64a) bg_tb_trans_pane_cp01_ParamLimits

0xe34e,	// (0x00052189) popup_image_details_window_g1_ParamLimits

0xe361,	// (0x0005219c) popup_image_details_window_g2_ParamLimits

0xe376,	// (0x000521b1) popup_image_details_window_g3_ParamLimits

0xe376,	// (0x000521b1) popup_image_details_window_g3

0xf728,	// (0x00053563) popup_image_details_window_g_ParamLimits

0xe38a,	// (0x000521c5) popup_image_details_window_t1_ParamLimits

0xe39c,	// (0x000521d7) popup_image_details_window_t2_ParamLimits

0xe3b5,	// (0x000521f0) popup_image_details_window_t3_ParamLimits

0xe3c9,	// (0x00052204) popup_image_details_window_t4_ParamLimits

0xe3e4,	// (0x0005221f) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0005356a) popup_image_details_window_t_ParamLimits

0x74ef,	// (0x0004b32a) cl_header_name_pane_ParamLimits

0x74ef,	// (0x0004b32a) cl_header_name_pane

0x79e8,	// (0x0004b823) cl_header_name_pane_t1_ParamLimits

0x79e8,	// (0x0004b823) cl_header_name_pane_t1

0x7a09,	// (0x0004b844) cl_header_name_pane_t2_ParamLimits

0x7a09,	// (0x0004b844) cl_header_name_pane_t2

0x7a4b,	// (0x0004b886) cl_header_name_pane_t3_ParamLimits

0x7a4b,	// (0x0004b886) cl_header_name_pane_t3

0x0002,

0xfae7,	// (0x00053922) cl_header_name_pane_t_ParamLimits

0xfae7,	// (0x00053922) cl_header_name_pane_t

0x329e,	// (0x000470d9) navi_pane_mv_g2_ParamLimits

0xebd2,	// (0x00052a0d) field_vitu2_entry_pane_g1_ParamLimits

0xebde,	// (0x00052a19) field_vitu2_entry_pane_g2_ParamLimits

0xebea,	// (0x00052a25) field_vitu2_entry_pane_g3_ParamLimits

0xebea,	// (0x00052a25) field_vitu2_entry_pane_g3

0xf921,	// (0x0005375c) field_vitu2_entry_pane_g_ParamLimits

0x691e,	// (0x0004a759) cell_vitu2_itu_pane_g1_ParamLimits

0x692e,	// (0x0004a769) cell_vitu2_itu_pane_g2_ParamLimits

0x692e,	// (0x0004a769) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x00053768) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x00053768) cell_vitu2_itu_pane_g

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp05_ParamLimits

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp05

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp03

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp04

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp10_ParamLimits

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp10

0x0b79,	// (0x000449b4) bg_vkb2_func_pane_cp08

0x7499,	// (0x0004b2d4) bg_vkb2_func_pane_cp06

0x74a7,	// (0x0004b2e2) bg_vkb2_func_pane_cp07

0x7654,	// (0x0004b48f) bg_vkb2_func_pane_cp11_ParamLimits

0x7654,	// (0x0004b48f) bg_vkb2_func_pane_cp11

0x7669,	// (0x0004b4a4) bg_vkb2_func_pane_cp12_ParamLimits

0x7669,	// (0x0004b4a4) bg_vkb2_func_pane_cp12

0xa796,	// (0x0004e5d1) bg_vkb2_func_pane_cp09

0xec0a,	// (0x00052a45) bg_vkb2_func_pane_g1

0xb503,	// (0x0004f33e) bg_vkb2_func_pane_g2

0xec12,	// (0x00052a4d) bg_vkb2_func_pane_g3

0xec1a,	// (0x00052a55) bg_vkb2_func_pane_g4

0xee46,	// (0x00052c81) bg_vkb2_func_pane_g5

0xec32,	// (0x00052a6d) bg_vkb2_func_pane_g6

0xec3a,	// (0x00052a75) bg_vkb2_func_pane_g7

0xec2a,	// (0x00052a65) bg_vkb2_func_pane_g8

0xb4e3,	// (0x0004f31e) bg_vkb2_func_pane_g9

0x0008,

0xfaee,	// (0x00053929) bg_vkb2_func_pane_g

0x78b4,	// (0x0004b6ef) blid2_tripm_pane_g6_ParamLimits

0x78b4,	// (0x0004b6ef) blid2_tripm_pane_g6

0xea92,	// (0x000528cd) mp4_progress_pane_g1

0x792b,	// (0x0004b766) blid2_tripm_values_pane_ParamLimits

0x792b,	// (0x0004b766) blid2_tripm_values_pane

0x7a7c,	// (0x0004b8b7) blid2_tripm_values_pane_t1

0x7a8a,	// (0x0004b8c5) blid2_tripm_values_pane_t2

0x7a98,	// (0x0004b8d3) blid2_tripm_values_pane_t3

0x7aa6,	// (0x0004b8e1) blid2_tripm_values_pane_t4

0x7ab4,	// (0x0004b8ef) blid2_tripm_values_pane_t5

0x7ac2,	// (0x0004b8fd) blid2_tripm_values_pane_t6

0x7ad0,	// (0x0004b90b) blid2_tripm_values_pane_t7

0x7ade,	// (0x0004b919) blid2_tripm_values_pane_t8

0x7aec,	// (0x0004b927) blid2_tripm_values_pane_t9

0x0008,

0xfb01,	// (0x0005393c) blid2_tripm_values_pane_t

0x215b,	// (0x00045f96) call_video_pane_t1_ParamLimits

0x2175,	// (0x00045fb0) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000530b9) call_video_pane_t_ParamLimits

0x07f8,	// (0x00044633) msg_header_pane_g1_ParamLimits

0xcb2a,	// (0x00050965) msg_header_pane_g2_ParamLimits

0xcb2a,	// (0x00050965) msg_header_pane_g2

0x0001,

0xf498,	// (0x000532d3) msg_header_pane_g_ParamLimits

0xf498,	// (0x000532d3) msg_header_pane_g

0xafb5,	// (0x0004edf0) main_clock2_pane_ParamLimits

0x58ab,	// (0x000496e6) grid_clock2_toolbar_pane_ParamLimits

0x58ab,	// (0x000496e6) grid_clock2_toolbar_pane

0x58ab,	// (0x000496e6) listscroll_clock2_pane_ParamLimits

0x58ab,	// (0x000496e6) listscroll_clock2_pane

0x5992,	// (0x000497cd) main_clock2_pane_t3_ParamLimits

0x5992,	// (0x000497cd) main_clock2_pane_t3

0x59b5,	// (0x000497f0) main_clock2_pane_t4_ParamLimits

0x59b5,	// (0x000497f0) main_clock2_pane_t4

0x7afa,	// (0x0004b935) cell_clock2_toolbar_pane

0x7b02,	// (0x0004b93d) cell_clock2_toolbar_pane_cp01

0x7b02,	// (0x0004b93d) cell_clock2_toolbar_pane_cp02

0x7b0a,	// (0x0004b945) cell_clock2_toolbar_pane_cp03

0x7b12,	// (0x0004b94d) list_clock2_pane

0xc865,	// (0x000506a0) scroll_pane_cp10

0x7b1a,	// (0x0004b955) list_single_clock2_pane_ParamLimits

0x7b1a,	// (0x0004b955) list_single_clock2_pane

0xc99f,	// (0x000507da) list_highlight_pane_cp08

0x7b27,	// (0x0004b962) list_single_clock2_pane_t1

0x7b35,	// (0x0004b970) list_single_clock2_pane_t2

0x0001,

0xfb14,	// (0x0005394f) list_single_clock2_pane_t

0xa796,	// (0x0004e5d1) bg_button_pane_cp10

0x7b43,	// (0x0004b97e) cell_clock2_toolbar_pane_g1

0x37bd,	// (0x000475f8) aid_main_viewer_pane_g1_ParamLimits

0x37bd,	// (0x000475f8) aid_main_viewer_pane_g1

0x37cb,	// (0x00047606) aid_main_viewer_pane_g2_ParamLimits

0x37cb,	// (0x00047606) aid_main_viewer_pane_g2

0x37d9,	// (0x00047614) aid_main_viewer_pane_g3_ParamLimits

0x37d9,	// (0x00047614) aid_main_viewer_pane_g3

0x37e8,	// (0x00047623) aid_main_viewer_pane_g4_ParamLimits

0x37e8,	// (0x00047623) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x000532e4) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x000532e4) aid_main_viewer_pane_g

0x4140,	// (0x00047f7b) main_calc_pane_ParamLimits

0x4154,	// (0x00047f8f) main_dialer2_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_cam6_pane

0xa796,	// (0x0004e5d1) main_vid6_pane

0x58b7,	// (0x000496f2) listscroll_gen_pane_cp06_ParamLimits

0x58b7,	// (0x000496f2) listscroll_gen_pane_cp06

0x59d8,	// (0x00049813) main_clock2_pane_t5_ParamLimits

0x59d8,	// (0x00049813) main_clock2_pane_t5

0x5a3a,	// (0x00049875) aid_call2_pane_cp10_ParamLimits

0x5a4c,	// (0x00049887) aid_call_pane_cp10_ParamLimits

0xc8d4,	// (0x0005070f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc8d4,	// (0x0005070f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a5e,	// (0x00049899) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a5e,	// (0x00049899) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc8d4,	// (0x0005070f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0005361a) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a74,	// (0x000498af) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6113,	// (0x00049f4e) cell_dialer2_keypad_pane_g2_ParamLimits

0x6113,	// (0x00049f4e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000536fb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000536fb) cell_dialer2_keypad_pane_g

0x612f,	// (0x00049f6a) cell_dialer2_keypad_pane_t1

0x6cc7,	// (0x0004ab02) main_cset_text2_pane_ParamLimits

0x6cc7,	// (0x0004ab02) main_cset_text2_pane

0xf07b,	// (0x00052eb6) area_vitu2_query_pane_g1_ParamLimits

0x0b40,	// (0x0004497b) area_vitu2_query_pane_g2_ParamLimits

0xfa44,	// (0x0005387f) area_vitu2_query_pane_g_ParamLimits

0xc050,	// (0x0004fe8b) area_vitu2_query_pane_t7_ParamLimits

0xc050,	// (0x0004fe8b) area_vitu2_query_pane_t7

0x7499,	// (0x0004b2d4) bg_button_pane_cp018_ParamLimits

0x74a7,	// (0x0004b2e2) bg_button_pane_cp021_ParamLimits

0x0b79,	// (0x000449b4) bg_button_pane_cp022_ParamLimits

0x0b79,	// (0x000449b4) bg_vkb2_func_pane_cp08_ParamLimits

0x7499,	// (0x0004b2d4) bg_vkb2_func_pane_cp06_ParamLimits

0x74a7,	// (0x0004b2e2) bg_vkb2_func_pane_cp07_ParamLimits

0x0b8a,	// (0x000449c5) input_focus_pane_cp09_ParamLimits

0xcf22,	// (0x00050d5d) cam6_autofocus_pane_ParamLimits

0xcf22,	// (0x00050d5d) cam6_autofocus_pane

0x7b4b,	// (0x0004b986) cam6_image_uncrop_pane_ParamLimits

0x7b4b,	// (0x0004b986) cam6_image_uncrop_pane

0x7b5a,	// (0x0004b995) cam6_indi_pane_ParamLimits

0x7b5a,	// (0x0004b995) cam6_indi_pane

0x7b70,	// (0x0004b9ab) cam6_mode_pane_ParamLimits

0x7b70,	// (0x0004b9ab) cam6_mode_pane

0x7b82,	// (0x0004b9bd) cam6_timer_pane_ParamLimits

0x7b82,	// (0x0004b9bd) cam6_timer_pane

0x7b8e,	// (0x0004b9c9) cam6_zoom_pane_ParamLimits

0x7b8e,	// (0x0004b9c9) cam6_zoom_pane

0x7b9c,	// (0x0004b9d7) cam6_mode_pane_g1_ParamLimits

0x7b9c,	// (0x0004b9d7) cam6_mode_pane_g1

0x7bac,	// (0x0004b9e7) cam6_mode_pane_g2_ParamLimits

0x7bac,	// (0x0004b9e7) cam6_mode_pane_g2

0x7bbc,	// (0x0004b9f7) cam6_mode_pane_g3_ParamLimits

0x7bbc,	// (0x0004b9f7) cam6_mode_pane_g3

0x7bcc,	// (0x0004ba07) cam6_mode_pane_g4_ParamLimits

0x7bcc,	// (0x0004ba07) cam6_mode_pane_g4

0x0003,

0xfb19,	// (0x00053954) cam6_mode_pane_g_ParamLimits

0xfb19,	// (0x00053954) cam6_mode_pane_g

0x7bdc,	// (0x0004ba17) bg_tb_trans_pane_cp08_ParamLimits

0x7bdc,	// (0x0004ba17) bg_tb_trans_pane_cp08

0x7bea,	// (0x0004ba25) cam6_battery_pane_ParamLimits

0x7bea,	// (0x0004ba25) cam6_battery_pane

0x7c00,	// (0x0004ba3b) cam6_indi_pane_g1_ParamLimits

0x7c00,	// (0x0004ba3b) cam6_indi_pane_g1

0x7c12,	// (0x0004ba4d) cam6_indi_pane_g2_ParamLimits

0x7c12,	// (0x0004ba4d) cam6_indi_pane_g2

0x7c24,	// (0x0004ba5f) cam6_indi_pane_g3_ParamLimits

0x7c24,	// (0x0004ba5f) cam6_indi_pane_g3

0x0002,

0xfb22,	// (0x0005395d) cam6_indi_pane_g_ParamLimits

0xfb22,	// (0x0005395d) cam6_indi_pane_g

0x7c36,	// (0x0004ba71) cam6_indi_pane_t1_ParamLimits

0x7c36,	// (0x0004ba71) cam6_indi_pane_t1

0x66f0,	// (0x0004a52b) cam6_autofocus_pane_g1

0x66f8,	// (0x0004a533) cam6_autofocus_pane_g2

0x6700,	// (0x0004a53b) cam6_autofocus_pane_g3

0x6708,	// (0x0004a543) cam6_autofocus_pane_g4

0x0003,

0xfb29,	// (0x00053964) cam6_autofocus_pane_g

0x7c5c,	// (0x0004ba97) cam6_timer_pane_g1

0x7c64,	// (0x0004ba9f) cam6_timer_pane_t1

0x7c72,	// (0x0004baad) cam6_zoom_cont_pane

0x7c7a,	// (0x0004bab5) cam6_zoom_pane_g1

0x7c82,	// (0x0004babd) cam6_zoom_pane_g2

0x7c8a,	// (0x0004bac5) cam6_zoom_pane_g3

0x0002,

0xfb32,	// (0x0005396d) cam6_zoom_pane_g

0xe1fe,	// (0x00052039) cam6_battery_pane_g1

0xe1fe,	// (0x00052039) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00053527) cam6_battery_pane_g

0x7c92,	// (0x0004bacd) cam6_zoom_cont_pane_g1

0x7c9b,	// (0x0004bad6) cam6_zoom_cont_pane_g2

0x7ca4,	// (0x0004badf) cam6_zoom_cont_pane_g3

0x0002,

0xfb39,	// (0x00053974) cam6_zoom_cont_pane_g

0x7cc1,	// (0x0004bafc) cam6_mode_pane_cp_ParamLimits

0x7cc1,	// (0x0004bafc) cam6_mode_pane_cp

0x7b8e,	// (0x0004b9c9) cam6_zoom_pane_cp_ParamLimits

0x7b8e,	// (0x0004b9c9) cam6_zoom_pane_cp

0x7cd3,	// (0x0004bb0e) vid6_image_uncrop_cif_pane_ParamLimits

0x7cd3,	// (0x0004bb0e) vid6_image_uncrop_cif_pane

0x7ce3,	// (0x0004bb1e) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ce3,	// (0x0004bb1e) vid6_image_uncrop_nhd_pane

0x7b4b,	// (0x0004b986) vid6_image_uncrop_vga_pane_ParamLimits

0x7b4b,	// (0x0004b986) vid6_image_uncrop_vga_pane

0x7d02,	// (0x0004bb3d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d02,	// (0x0004bb3d) vid6_image_uncrop_wvga_pane

0x7d11,	// (0x0004bb4c) vid6_indi_pane_ParamLimits

0x7d11,	// (0x0004bb4c) vid6_indi_pane

0x7bdc,	// (0x0004ba17) bg_tb_trans_pane_cp09_ParamLimits

0x7bdc,	// (0x0004ba17) bg_tb_trans_pane_cp09

0x7d29,	// (0x0004bb64) cam6_battery_pane_cp_ParamLimits

0x7d29,	// (0x0004bb64) cam6_battery_pane_cp

0x7d35,	// (0x0004bb70) vid6_indi_pane_g1_ParamLimits

0x7d35,	// (0x0004bb70) vid6_indi_pane_g1

0x7d47,	// (0x0004bb82) vid6_indi_pane_g2_ParamLimits

0x7d47,	// (0x0004bb82) vid6_indi_pane_g2

0x7d59,	// (0x0004bb94) vid6_indi_pane_g3_ParamLimits

0x7d59,	// (0x0004bb94) vid6_indi_pane_g3

0x7d70,	// (0x0004bbab) vid6_indi_pane_g4_ParamLimits

0x7d70,	// (0x0004bbab) vid6_indi_pane_g4

0x7d87,	// (0x0004bbc2) vid6_indi_pane_g5_ParamLimits

0x7d87,	// (0x0004bbc2) vid6_indi_pane_g5

0x0004,

0xfb40,	// (0x0005397b) vid6_indi_pane_g_ParamLimits

0xfb40,	// (0x0005397b) vid6_indi_pane_g

0x7da1,	// (0x0004bbdc) vid6_indi_pane_t1_ParamLimits

0x7da1,	// (0x0004bbdc) vid6_indi_pane_t1

0x7db7,	// (0x0004bbf2) vid6_indi_pane_t2_ParamLimits

0x7db7,	// (0x0004bbf2) vid6_indi_pane_t2

0x7ddf,	// (0x0004bc1a) vid6_indi_pane_t3_ParamLimits

0x7ddf,	// (0x0004bc1a) vid6_indi_pane_t3

0x7e07,	// (0x0004bc42) vid6_indi_pane_t4_ParamLimits

0x7e07,	// (0x0004bc42) vid6_indi_pane_t4

0x0003,

0xfb4b,	// (0x00053986) vid6_indi_pane_t_ParamLimits

0xfb4b,	// (0x00053986) vid6_indi_pane_t

0x7e2b,	// (0x0004bc66) wait_bar_pane_cp08

0x7e3a,	// (0x0004bc75) main_cset_text2_pane_t1_ParamLimits

0x7e3a,	// (0x0004bc75) main_cset_text2_pane_t1

0x7cac,	// (0x0004bae7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7cac,	// (0x0004bae7) listscroll_gen_pane_cp06_t1

0xa796,	// (0x0004e5d1) main_cam6_set_pane

0xe42e,	// (0x00052269) bg_tb_trans_pane_cp06_ParamLimits

0xbe41,	// (0x0004fc7c) cam4_indicators_pane_g1_ParamLimits

0xbe52,	// (0x0004fc8d) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x00053738) cam4_indicators_pane_g_ParamLimits

0xbe6a,	// (0x0004fca5) cam4_indicators_pane_t1_ParamLimits

0xa80f,	// (0x0004e64a) bg_tb_trans_pane_cp07_ParamLimits

0xbe98,	// (0x0004fcd3) vid4_indicators_pane_g1_ParamLimits

0xbeae,	// (0x0004fce9) vid4_indicators_pane_g2_ParamLimits

0xbec2,	// (0x0004fcfd) vid4_indicators_pane_g3_ParamLimits

0xbed5,	// (0x0004fd10) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0005374a) vid4_indicators_pane_g_ParamLimits

0xbef3,	// (0x0004fd2e) vid4_indicators_pane_t1_ParamLimits

0x75e3,	// (0x0004b41e) vid4_progress_pane_g1_ParamLimits

0x75f5,	// (0x0004b430) vid4_progress_pane_g2_ParamLimits

0xba77,	// (0x0004f8b2) vid4_progress_pane_g3_ParamLimits

0xc07c,	// (0x0004feb7) vid4_progress_pane_g4_ParamLimits

0xfa7c,	// (0x000538b7) vid4_progress_pane_g_ParamLimits

0xc09a,	// (0x0004fed5) vid4_progress_pane_t1_ParamLimits

0xc0af,	// (0x0004feea) vid4_progress_pane_t2_ParamLimits

0xc0c5,	// (0x0004ff00) vid4_progress_pane_t3_ParamLimits

0xfa87,	// (0x000538c2) vid4_progress_pane_t_ParamLimits

0xc0da,	// (0x0004ff15) wait_bar_pane_cp07_ParamLimits

0x7e5b,	// (0x0004bc96) main_cam6_set_pane_g2_ParamLimits

0x7e5b,	// (0x0004bc96) main_cam6_set_pane_g2

0x7e81,	// (0x0004bcbc) main_cset6_listscroll_pane_ParamLimits

0x7e81,	// (0x0004bcbc) main_cset6_listscroll_pane

0x7e9f,	// (0x0004bcda) main_cset6_slider_pane_ParamLimits

0x7e9f,	// (0x0004bcda) main_cset6_slider_pane

0x7eb5,	// (0x0004bcf0) main_cset6_text2_pane_ParamLimits

0x7eb5,	// (0x0004bcf0) main_cset6_text2_pane

0x7ec3,	// (0x0004bcfe) main_cset6_text_pane

0x7ecb,	// (0x0004bd06) main_cset_list_pane_copy1_ParamLimits

0x7ecb,	// (0x0004bd06) main_cset_list_pane_copy1

0x7edb,	// (0x0004bd16) scroll_pane_cp028_copy1

0x7ee4,	// (0x0004bd1f) cset_list_set_pane_copy1

0x7ef8,	// (0x0004bd33) aid_position_infowindow_above_copy1

0x7f00,	// (0x0004bd3b) aid_position_infowindow_below_copy1

0x0b9b,	// (0x000449d6) cset_list_set_pane_g1_copy1

0x0ba3,	// (0x000449de) cset_list_set_pane_g3_copy1_ParamLimits

0x0ba3,	// (0x000449de) cset_list_set_pane_g3_copy1

0x0bb2,	// (0x000449ed) cset_list_set_pane_t1_copy1_ParamLimits

0x0bb2,	// (0x000449ed) cset_list_set_pane_t1_copy1

0xa80f,	// (0x0004e64a) list_highlight_pane_cp021_copy1_ParamLimits

0xa80f,	// (0x0004e64a) list_highlight_pane_cp021_copy1

0x7f08,	// (0x0004bd43) cset6_slider_pane_ParamLimits

0x7f08,	// (0x0004bd43) cset6_slider_pane

0x7f34,	// (0x0004bd6f) main_cset6_slider_pane_g1_ParamLimits

0x7f34,	// (0x0004bd6f) main_cset6_slider_pane_g1

0x7f5c,	// (0x0004bd97) main_cset6_slider_pane_g2_ParamLimits

0x7f5c,	// (0x0004bd97) main_cset6_slider_pane_g2

0x7f84,	// (0x0004bdbf) main_cset6_slider_pane_g3_ParamLimits

0x7f84,	// (0x0004bdbf) main_cset6_slider_pane_g3

0x7f90,	// (0x0004bdcb) main_cset6_slider_pane_g4_ParamLimits

0x7f90,	// (0x0004bdcb) main_cset6_slider_pane_g4

0x7f9c,	// (0x0004bdd7) main_cset6_slider_pane_g5_ParamLimits

0x7f9c,	// (0x0004bdd7) main_cset6_slider_pane_g5

0xed3d,	// (0x00052b78) main_cset6_slider_pane_g7_ParamLimits

0xed3d,	// (0x00052b78) main_cset6_slider_pane_g7

0xed49,	// (0x00052b84) main_cset6_slider_pane_g8_ParamLimits

0xed49,	// (0x00052b84) main_cset6_slider_pane_g8

0x6d76,	// (0x0004abb1) main_cset6_slider_pane_g9_ParamLimits

0x6d76,	// (0x0004abb1) main_cset6_slider_pane_g9

0x6d82,	// (0x0004abbd) main_cset6_slider_pane_g10_ParamLimits

0x6d82,	// (0x0004abbd) main_cset6_slider_pane_g10

0x6d8e,	// (0x0004abc9) main_cset6_slider_pane_g11_ParamLimits

0x6d8e,	// (0x0004abc9) main_cset6_slider_pane_g11

0x6d9a,	// (0x0004abd5) main_cset6_slider_pane_g12_ParamLimits

0x6d9a,	// (0x0004abd5) main_cset6_slider_pane_g12

0x6da6,	// (0x0004abe1) main_cset6_slider_pane_g13_ParamLimits

0x6da6,	// (0x0004abe1) main_cset6_slider_pane_g13

0x6db2,	// (0x0004abed) main_cset6_slider_pane_g14_ParamLimits

0x6db2,	// (0x0004abed) main_cset6_slider_pane_g14

0x7faa,	// (0x0004bde5) main_cset6_slider_pane_g15_ParamLimits

0x7faa,	// (0x0004bde5) main_cset6_slider_pane_g15

0x6dd6,	// (0x0004ac11) main_cset6_slider_pane_g16_ParamLimits

0x6dd6,	// (0x0004ac11) main_cset6_slider_pane_g16

0x6de4,	// (0x0004ac1f) main_cset6_slider_pane_g17_ParamLimits

0x6de4,	// (0x0004ac1f) main_cset6_slider_pane_g17

0x0011,

0xfb54,	// (0x0005398f) main_cset6_slider_pane_g_ParamLimits

0xfb54,	// (0x0005398f) main_cset6_slider_pane_g

0x7fda,	// (0x0004be15) main_cset6_slider_pane_t1_ParamLimits

0x7fda,	// (0x0004be15) main_cset6_slider_pane_t1

0x801b,	// (0x0004be56) main_cset6_slider_pane_t2_ParamLimits

0x801b,	// (0x0004be56) main_cset6_slider_pane_t2

0x8046,	// (0x0004be81) main_cset6_slider_pane_t3_ParamLimits

0x8046,	// (0x0004be81) main_cset6_slider_pane_t3

0x8071,	// (0x0004beac) main_cset6_slider_pane_t4_ParamLimits

0x8071,	// (0x0004beac) main_cset6_slider_pane_t4

0x809e,	// (0x0004bed9) main_cset6_slider_pane_t5_ParamLimits

0x809e,	// (0x0004bed9) main_cset6_slider_pane_t5

0x80cb,	// (0x0004bf06) main_cset6_slider_pane_t7_ParamLimits

0x80cb,	// (0x0004bf06) main_cset6_slider_pane_t7

0x8101,	// (0x0004bf3c) main_cset6_slider_pane_t8_ParamLimits

0x8101,	// (0x0004bf3c) main_cset6_slider_pane_t8

0x8125,	// (0x0004bf60) main_cset6_slider_pane_t9_ParamLimits

0x8125,	// (0x0004bf60) main_cset6_slider_pane_t9

0x8149,	// (0x0004bf84) main_cset6_slider_pane_t10_ParamLimits

0x8149,	// (0x0004bf84) main_cset6_slider_pane_t10

0x816d,	// (0x0004bfa8) main_cset6_slider_pane_t11_ParamLimits

0x816d,	// (0x0004bfa8) main_cset6_slider_pane_t11

0x8193,	// (0x0004bfce) main_cset6_slider_pane_t14_ParamLimits

0x8193,	// (0x0004bfce) main_cset6_slider_pane_t14

0x81cc,	// (0x0004c007) main_cset6_slider_pane_t15_ParamLimits

0x81cc,	// (0x0004c007) main_cset6_slider_pane_t15

0x000b,

0xfb79,	// (0x000539b4) main_cset6_slider_pane_t_ParamLimits

0xfb79,	// (0x000539b4) main_cset6_slider_pane_t

0x6fad,	// (0x0004ade8) cset_slider_pane_g1_copy1

0x6fb6,	// (0x0004adf1) cset_slider_pane_g2_copy1

0x6fbf,	// (0x0004adfa) cset_slider_pane_g3_copy1

0xa796,	// (0x0004e5d1) bg_popup_sub_pane_cp011_copy1

0x8205,	// (0x0004c040) main_cset_text_pane_g1_copy1

0xee97,	// (0x00052cd2) main_cset_text_pane_t1_copy1

0xeea5,	// (0x00052ce0) main_cset_text_pane_t2_copy1

0xeeb3,	// (0x00052cee) main_cset_text_pane_t3_copy1

0xeec1,	// (0x00052cfc) main_cset_text_pane_t4_copy1

0xeecf,	// (0x00052d0a) main_cset_text_pane_t5_copy1

0x820d,	// (0x0004c048) main_cset_text_pane_t6_copy1

0x821b,	// (0x0004c056) main_cset_text_pane_t7_copy1

0x7e3a,	// (0x0004bc75) main_cset_text2_pane_t1_copy1

0xa80f,	// (0x0004e64a) main_ncimui_pane

0x43e2,	// (0x0004821d) popup_query_ncimui_window_ParamLimits

0x43e2,	// (0x0004821d) popup_query_ncimui_window

0xbb8c,	// (0x0004f9c7) field_cale_ev2_pane_g4_ParamLimits

0xbb8c,	// (0x0004f9c7) field_cale_ev2_pane_g4

0x5fde,	// (0x00049e19) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5fde,	// (0x00049e19) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x000536db) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x000536db) cell_video_dialer_keypad_pane_g

0x5ff6,	// (0x00049e31) cell_video_dialer_keypad_pane_t1

0xa796,	// (0x0004e5d1) bg_popup_window_pane_cp012

0xc751,	// (0x0005058c) heading_pane_cp06

0x836d,	// (0x0004c1a8) ncim_query_content_pane

0xa796,	// (0x0004e5d1) bg_popup_heading_pane_cp01

0x8375,	// (0x0004c1b0) ncim_heading_pane_t1

0x8383,	// (0x0004c1be) ncim_indicator_popup_pane

0x8395,	// (0x0004c1d0) ncim_query_button_pane

0x83b7,	// (0x0004c1f2) ncim_query_content_pane_t1

0x83c9,	// (0x0004c204) ncim_query_content_pane_t2

0x0005,

0xfbbd,	// (0x000539f8) ncim_query_content_pane_t

0x847b,	// (0x0004c2b6) ncim_query_list_pane

0x848d,	// (0x0004c2c8) ncim_query_popup_pane

0x8383,	// (0x0004c1be) ncim_indicator_popup_pane_ParamLimits

0x839d,	// (0x0004c1d8) ncim_query_content_pane_g1_ParamLimits

0x839d,	// (0x0004c1d8) ncim_query_content_pane_g1

0x83b7,	// (0x0004c1f2) ncim_query_content_pane_t1_ParamLimits

0x83c9,	// (0x0004c204) ncim_query_content_pane_t2_ParamLimits

0x83db,	// (0x0004c216) ncim_query_content_pane_t3_ParamLimits

0x83db,	// (0x0004c216) ncim_query_content_pane_t3

0x8403,	// (0x0004c23e) ncim_query_content_pane_t4_ParamLimits

0x8403,	// (0x0004c23e) ncim_query_content_pane_t4

0x842b,	// (0x0004c266) ncim_query_content_pane_t5_ParamLimits

0x842b,	// (0x0004c266) ncim_query_content_pane_t5

0x8453,	// (0x0004c28e) ncim_query_content_pane_t6_ParamLimits

0x8453,	// (0x0004c28e) ncim_query_content_pane_t6

0xfbbd,	// (0x000539f8) ncim_query_content_pane_t_ParamLimits

0x847b,	// (0x0004c2b6) ncim_query_list_pane_ParamLimits

0x848d,	// (0x0004c2c8) ncim_query_popup_pane_ParamLimits

0x84a1,	// (0x0004c2dc) wait_bar_pane_cp04

0xa796,	// (0x0004e5d1) input_focus_pane_cp011

0x84a9,	// (0x0004c2e4) ncim_query_popup_pane_t1

0x84b7,	// (0x0004c2f2) ncim_list_query_list_pane_ParamLimits

0x84b7,	// (0x0004c2f2) ncim_list_query_list_pane

0xa796,	// (0x0004e5d1) bg_button_pane_cp027

0x84ca,	// (0x0004c305) ncim_query_button_pane_g1

0xa796,	// (0x0004e5d1) list_highlight_pane_cp012

0x84d4,	// (0x0004c30f) ncim_list_query_list_pane_g1

0x84dc,	// (0x0004c317) ncim_list_query_list_pane_t1

0xbe5e,	// (0x0004fc99) cam4_indicators_pane_g3_ParamLimits

0xbe5e,	// (0x0004fc99) cam4_indicators_pane_g3

0xbee1,	// (0x0004fd1c) vid4_indicators_pane_g5_ParamLimits

0xbee1,	// (0x0004fd1c) vid4_indicators_pane_g5

0xc08b,	// (0x0004fec6) vid4_progress_pane_g5_ParamLimits

0xc08b,	// (0x0004fec6) vid4_progress_pane_g5

0x825b,	// (0x0004c096) main_ncimui_pane_g1

0x82c1,	// (0x0004c0fc) ncimui_group_query_pane_ParamLimits

0x82c1,	// (0x0004c0fc) ncimui_group_query_pane

0x8309,	// (0x0004c144) ncimui_list_pane_ParamLimits

0x8309,	// (0x0004c144) ncimui_list_pane

0x8330,	// (0x0004c16b) ncimui_text_pane_ParamLimits

0x8330,	// (0x0004c16b) ncimui_text_pane

0x84ea,	// (0x0004c325) ncimui_text_pane_t1_ParamLimits

0x84ea,	// (0x0004c325) ncimui_text_pane_t1

0x8508,	// (0x0004c343) ncimui_list_single_graphic_pane_ParamLimits

0x8508,	// (0x0004c343) ncimui_list_single_graphic_pane

0x8518,	// (0x0004c353) ncimui_query_pane_ParamLimits

0x8518,	// (0x0004c353) ncimui_query_pane

0xa796,	// (0x0004e5d1) list_highlight_pane_cp013

0x852b,	// (0x0004c366) ncim_list_query_list_pane_t1_copy1

0x84d4,	// (0x0004c30f) ncim_list_single_graphic_pane_g1

0x8539,	// (0x0004c374) ncim_query_button_pane_cp01

0x8545,	// (0x0004c380) ncim_query_entry_pane_ParamLimits

0x8545,	// (0x0004c380) ncim_query_entry_pane

0x8558,	// (0x0004c393) ncimui_query_pane_g1

0x8564,	// (0x0004c39f) ncimui_query_pane_t1_ParamLimits

0x8564,	// (0x0004c39f) ncimui_query_pane_t1

0xa80f,	// (0x0004e64a) input_focus_pane_cp012

0x857d,	// (0x0004c3b8) ncim_query_entry_pane_t1

0xafb5,	// (0x0004edf0) main_im_pane_ParamLimits

0xa80f,	// (0x0004e64a) main_mobtv_pane_ParamLimits

0xa80f,	// (0x0004e64a) main_mobtv_pane

0x7fc2,	// (0x0004bdfd) main_cset6_slider_pane_g18_ParamLimits

0x7fc2,	// (0x0004bdfd) main_cset6_slider_pane_g18

0x7fce,	// (0x0004be09) main_cset6_slider_pane_g19_ParamLimits

0x7fce,	// (0x0004be09) main_cset6_slider_pane_g19

0x858f,	// (0x0004c3ca) bg_main_mobtv_pane_ParamLimits

0x858f,	// (0x0004c3ca) bg_main_mobtv_pane

0x859d,	// (0x0004c3d8) main_mobtv_info_pane

0x85a8,	// (0x0004c3e3) main_mobtv_loading_pane_ParamLimits

0x85a8,	// (0x0004c3e3) main_mobtv_loading_pane

0x85b5,	// (0x0004c3f0) main_mobtv_pg_channel_list_pane

0x85bf,	// (0x0004c3fa) main_mobtv_pg_hdr_pane

0x85c8,	// (0x0004c403) main_mobtv_programe_curr_pane_ParamLimits

0x85c8,	// (0x0004c403) main_mobtv_programe_curr_pane

0x85d5,	// (0x0004c410) main_mobtv_programe_next_pane_ParamLimits

0x85d5,	// (0x0004c410) main_mobtv_programe_next_pane

0x85e2,	// (0x0004c41d) popup_mobtv_noti_window

0xe1fe,	// (0x00052039) main_tv_pg_hdr_pane_g1

0x85ec,	// (0x0004c427) main_tv_pg_hdr_pane_g2

0x85f4,	// (0x0004c42f) main_tv_pg_hdr_pane_g3

0x85fc,	// (0x0004c437) main_tv_pg_hdr_pane_g4

0x8604,	// (0x0004c43f) main_tv_pg_hdr_pane_g5

0x860e,	// (0x0004c449) main_tv_pg_hdr_pane_g6

0x8618,	// (0x0004c453) main_tv_pg_hdr_pane_g7

0x8622,	// (0x0004c45d) main_tv_pg_hdr_pane_g8

0x862c,	// (0x0004c467) main_tv_pg_hdr_pane_g9

0x8636,	// (0x0004c471) main_tv_pg_hdr_pane_g10

0x8640,	// (0x0004c47b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbca,	// (0x00053a05) main_tv_pg_hdr_pane_g

0x864a,	// (0x0004c485) main_tv_pg_hdr_pane_t1

0x8658,	// (0x0004c493) main_tv_pg_hdr_pane_t2

0x8666,	// (0x0004c4a1) main_tv_pg_hdr_pane_t3

0x8676,	// (0x0004c4b1) main_tv_pg_hdr_pane_t4

0x8686,	// (0x0004c4c1) main_tv_pg_hdr_pane_t5

0x0004,

0xfbe1,	// (0x00053a1c) main_tv_pg_hdr_pane_t

0x8696,	// (0x0004c4d1) single_mobtv_pg_channel_pane_ParamLimits

0x8696,	// (0x0004c4d1) single_mobtv_pg_channel_pane

0x86a8,	// (0x0004c4e3) single_mobtv_pg_channel_table_pane

0x86b1,	// (0x0004c4ec) single_mobtv_pg_channel_thumb_pane

0x86ba,	// (0x0004c4f5) single_tv_pg_channel_pane_g1

0x86c3,	// (0x0004c4fe) single_tv_pg_channel_pane_g2

0x0001,

0xfbec,	// (0x00053a27) single_tv_pg_channel_pane_g

0xe42e,	// (0x00052269) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe42e,	// (0x00052269) bg_single_mobtv_pg_channel_thumb_pane

0x86cc,	// (0x0004c507) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x86cc,	// (0x0004c507) single_mobtv_pg_channel_thumb_pane_g1

0x86da,	// (0x0004c515) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x86da,	// (0x0004c515) single_mobtv_pg_channel_thumb_pane_g2

0x86e6,	// (0x0004c521) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x86e6,	// (0x0004c521) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbf1,	// (0x00053a2c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbf1,	// (0x00053a2c) single_mobtv_pg_channel_thumb_pane_g

0x86f2,	// (0x0004c52d) single_mobtv_pg_channel_thumb_pane_t1

0x8700,	// (0x0004c53b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbf8,	// (0x00053a33) single_mobtv_pg_channel_thumb_pane_t

0xe1fe,	// (0x00052039) bg_single_mobtv_pg_channel_table_pane_g1

0xe1fe,	// (0x00052039) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00053527) bg_single_mobtv_pg_channel_table_pane_g

0x870e,	// (0x0004c549) single_mobtv_pg_channel_table_pane_t1

0x871c,	// (0x0004c557) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbfd,	// (0x00053a38) single_mobtv_pg_channel_table_pane_t

0x8732,	// (0x0004c56d) main_mobtv_info_pane_g1_ParamLimits

0x8732,	// (0x0004c56d) main_mobtv_info_pane_g1

0x8750,	// (0x0004c58b) main_mobtv_info_pane_t1_ParamLimits

0x8750,	// (0x0004c58b) main_mobtv_info_pane_t1

0x87c8,	// (0x0004c603) main_mobtv_info_pane_t2_ParamLimits

0x87c8,	// (0x0004c603) main_mobtv_info_pane_t2

0x0002,

0xfc07,	// (0x00053a42) main_mobtv_info_pane_t_ParamLimits

0xfc07,	// (0x00053a42) main_mobtv_info_pane_t

0x8859,	// (0x0004c694) wait_bar_pane_cp05

0x886b,	// (0x0004c6a6) main_mobtv_loading_pane_g1_ParamLimits

0x886b,	// (0x0004c6a6) main_mobtv_loading_pane_g1

0x887c,	// (0x0004c6b7) main_mobtv_loading_pane_g2_ParamLimits

0x887c,	// (0x0004c6b7) main_mobtv_loading_pane_g2

0x8888,	// (0x0004c6c3) main_mobtv_loading_pane_g3_ParamLimits

0x8888,	// (0x0004c6c3) main_mobtv_loading_pane_g3

0x0002,

0xfc0e,	// (0x00053a49) main_mobtv_loading_pane_g_ParamLimits

0xfc0e,	// (0x00053a49) main_mobtv_loading_pane_g

0x889b,	// (0x0004c6d6) main_mobtv_loading_pane_t1_ParamLimits

0x889b,	// (0x0004c6d6) main_mobtv_loading_pane_t1

0x88b3,	// (0x0004c6ee) main_mobtv_loading_pane_t2_ParamLimits

0x88b3,	// (0x0004c6ee) main_mobtv_loading_pane_t2

0x0001,

0xfc15,	// (0x00053a50) main_mobtv_loading_pane_t_ParamLimits

0xfc15,	// (0x00053a50) main_mobtv_loading_pane_t

0x88d7,	// (0x0004c712) wait_bar_pane_cp06_ParamLimits

0x88d7,	// (0x0004c712) wait_bar_pane_cp06

0x88e6,	// (0x0004c721) main_mobtv_programe_curr_pane_t1

0x88f4,	// (0x0004c72f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc1a,	// (0x00053a55) main_mobtv_programe_curr_pane_t

0x8902,	// (0x0004c73d) main_mobtv_programe_next_pane_t1

0x8910,	// (0x0004c74b) main_mobtv_programe_next_pane_t2

0x891e,	// (0x0004c759) main_mobtv_programe_next_pane_t3

0x0002,

0xfc1f,	// (0x00053a5a) main_mobtv_programe_next_pane_t

0xa796,	// (0x0004e5d1) bg_popup_mobtv_noti_window_pane

0x892c,	// (0x0004c767) popup_mobtv_noti_window_g1

0x8934,	// (0x0004c76f) popup_mobtv_noti_window_t1

0x8942,	// (0x0004c77d) popup_mobtv_noti_window_t2

0x0001,

0xfc26,	// (0x00053a61) popup_mobtv_noti_window_t

0xe1fe,	// (0x00052039) bg_popup_mobtv_noti_window_pane_g1

0xa796,	// (0x0004e5d1) sc_clock_pane

0xa796,	// (0x0004e5d1) main_fs_bigclock_pane

0x7915,	// (0x0004b750) blid2_tripm_pane_t4_ParamLimits

0x7915,	// (0x0004b750) blid2_tripm_pane_t4

0x8950,	// (0x0004c78b) sc_clock_pane_g1_ParamLimits

0x8950,	// (0x0004c78b) sc_clock_pane_g1

0x8962,	// (0x0004c79d) sc_clock_pane_t1_ParamLimits

0x8962,	// (0x0004c79d) sc_clock_pane_t1

0x8986,	// (0x0004c7c1) sc_clock_pane_t2_ParamLimits

0x8986,	// (0x0004c7c1) sc_clock_pane_t2

0x899e,	// (0x0004c7d9) sc_clock_pane_t3_ParamLimits

0x899e,	// (0x0004c7d9) sc_clock_pane_t3

0x0004,

0xfc2b,	// (0x00053a66) sc_clock_pane_t_ParamLimits

0xfc2b,	// (0x00053a66) sc_clock_pane_t

0x9b9c,	// (0x0004d9d7) main_fs_bigclock_indicator_pane_ParamLimits

0x9b9c,	// (0x0004d9d7) main_fs_bigclock_indicator_pane

0xe3fe,	// (0x00052239) main_fs_bigclock_pane_g1_ParamLimits

0xe3fe,	// (0x00052239) main_fs_bigclock_pane_g1

0x9ba8,	// (0x0004d9e3) main_fs_bigclock_pane_t1_ParamLimits

0x9ba8,	// (0x0004d9e3) main_fs_bigclock_pane_t1

0x9bba,	// (0x0004d9f5) main_fs_bigclock_pane_t2_ParamLimits

0x9bba,	// (0x0004d9f5) main_fs_bigclock_pane_t2

0x9bce,	// (0x0004da09) main_fs_bigclock_pane_t3_ParamLimits

0x9bce,	// (0x0004da09) main_fs_bigclock_pane_t3

0x0002,

0xfe2f,	// (0x00053c6a) main_fs_bigclock_pane_t_ParamLimits

0xfe2f,	// (0x00053c6a) main_fs_bigclock_pane_t

0x9be0,	// (0x0004da1b) main_fs_bigclock_indicator_pane_g1

0x83a9,	// (0x0004c1e4) ncim_query_content_pane_g2_ParamLimits

0x83a9,	// (0x0004c1e4) ncim_query_content_pane_g2

0x0001,

0xfbb8,	// (0x000539f3) ncim_query_content_pane_g_ParamLimits

0xfbb8,	// (0x000539f3) ncim_query_content_pane_g

0x89b5,	// (0x0004c7f0) sc_clock_pane_t4_ParamLimits

0x89b5,	// (0x0004c7f0) sc_clock_pane_t4

0xa80f,	// (0x0004e64a) main_radioblah_pane

0xeb41,	// (0x0005297c) cell_call4_button_pane_t1_copy1_ParamLimits

0xeb41,	// (0x0005297c) cell_call4_button_pane_t1_copy1

0x8273,	// (0x0004c0ae) main_ncimui_pane_t1_ParamLimits

0x8273,	// (0x0004c0ae) main_ncimui_pane_t1

0x828d,	// (0x0004c0c8) main_ncimui_pane_t2_ParamLimits

0x828d,	// (0x0004c0c8) main_ncimui_pane_t2

0x0002,

0xfbb1,	// (0x000539ec) main_ncimui_pane_t_ParamLimits

0xfbb1,	// (0x000539ec) main_ncimui_pane_t

0x8b91,	// (0x0004c9cc) main_radioblah_anim_pane_ParamLimits

0x8b91,	// (0x0004c9cc) main_radioblah_anim_pane

0x8ba2,	// (0x0004c9dd) main_radioblah_info_pane_ParamLimits

0x8ba2,	// (0x0004c9dd) main_radioblah_info_pane

0x8bc8,	// (0x0004ca03) main_radioblah_pane_t1_ParamLimits

0x8bc8,	// (0x0004ca03) main_radioblah_pane_t1

0x8be4,	// (0x0004ca1f) main_radioblah_pane_t2_ParamLimits

0x8be4,	// (0x0004ca1f) main_radioblah_pane_t2

0x0003,

0xfc4c,	// (0x00053a87) main_radioblah_pane_t_ParamLimits

0xfc4c,	// (0x00053a87) main_radioblah_pane_t

0x8c2c,	// (0x0004ca67) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8c2c,	// (0x0004ca67) main_radioblah_rocker_ctrl_pane

0x8c84,	// (0x0004cabf) main_radioblah_info_pane_t1_ParamLimits

0x8c84,	// (0x0004cabf) main_radioblah_info_pane_t1

0x8cbe,	// (0x0004caf9) main_radioblah_info_pane_t2_ParamLimits

0x8cbe,	// (0x0004caf9) main_radioblah_info_pane_t2

0x0003,

0xfc55,	// (0x00053a90) main_radioblah_info_pane_t_ParamLimits

0xfc55,	// (0x00053a90) main_radioblah_info_pane_t

0xe1fe,	// (0x00052039) main_radioblah_rocker_ctrl_pane_g1

0x8d6e,	// (0x0004cba9) main_radioblah_rocker_ctrl_pane_g2

0x8d76,	// (0x0004cbb1) main_radioblah_rocker_ctrl_pane_g3

0x8d7e,	// (0x0004cbb9) main_radioblah_rocker_ctrl_pane_g4

0x8d86,	// (0x0004cbc1) main_radioblah_rocker_ctrl_pane_g5

0x8d8e,	// (0x0004cbc9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc5e,	// (0x00053a99) main_radioblah_rocker_ctrl_pane_g

0x7e3a,	// (0x0004bc75) main_cset_text2_pane_t1_copy1_ParamLimits

0xbe2f,	// (0x0004fc6a) cam4_image_uncrop_qvga_pane

0xbe84,	// (0x0004fcbf) vid4_image_uncrop_qcif_pane

0xcf22,	// (0x00050d5d) cam6_image_uncrop_qvga_pane_ParamLimits

0xcf22,	// (0x00050d5d) cam6_image_uncrop_qvga_pane

0x7cf2,	// (0x0004bb2d) vid6_image_uncrop_qcif_pane_ParamLimits

0x7cf2,	// (0x0004bb2d) vid6_image_uncrop_qcif_pane

0xa796,	// (0x0004e5d1) bg_popup_preview_window_pane_cp03

0x8229,	// (0x0004c064) list_cset_text2_pane

0x8231,	// (0x0004c06c) main_cset6_text2_pane_g1

0x8239,	// (0x0004c074) main_cset6_text2_pane_t1

0x8d96,	// (0x0004cbd1) list_cset_text2_pane_t1_ParamLimits

0x8d96,	// (0x0004cbd1) list_cset_text2_pane_t1

0xa80f,	// (0x0004e64a) main_radioblah_pane_ParamLimits

0x8845,	// (0x0004c680) main_mobtv_info_pane_t3_ParamLimits

0x8845,	// (0x0004c680) main_mobtv_info_pane_t3

0x8bb6,	// (0x0004c9f1) main_radioblah_pane_g1

0x8c54,	// (0x0004ca8f) main_radioblah_info_pane_g1

0x8d13,	// (0x0004cb4e) main_radioblah_info_pane_t3_ParamLimits

0x8d13,	// (0x0004cb4e) main_radioblah_info_pane_t3

0x2d12,	// (0x00046b4d) highlight_cell_cale_month_pane_ParamLimits

0x2d12,	// (0x00046b4d) highlight_cell_cale_month_pane

0xa796,	// (0x0004e5d1) main_phob_fisheye_pane

0xe516,	// (0x00052351) scroll_pane_cp0031_ParamLimits

0xe516,	// (0x00052351) scroll_pane_cp0031

0x7e2b,	// (0x0004bc66) wait_bar_pane_cp08_ParamLimits

0x7ee4,	// (0x0004bd1f) cset_list_set_pane_copy1_ParamLimits

0x8db0,	// (0x0004cbeb) highlight_cell_cale_month_pane_g1

0x8db8,	// (0x0004cbf3) highlight_cell_cale_month_pane_t1

0xf0cf,	// (0x00052f0a) list_gen_pane_cp01

0xed28,	// (0x00052b63) scroll_pane_01

0x8dc6,	// (0x0004cc01) list_single_double_fisheye_pane

0x0bc7,	// (0x00044a02) list_double_fisheye_pane_g1_ParamLimits

0x0bc7,	// (0x00044a02) list_double_fisheye_pane_g1

0x0bd3,	// (0x00044a0e) list_double_fisheye_pane_g2_ParamLimits

0x0bd3,	// (0x00044a0e) list_double_fisheye_pane_g2

0x8dcf,	// (0x0004cc0a) list_double_fisheye_pane_g3_ParamLimits

0x8dcf,	// (0x0004cc0a) list_double_fisheye_pane_g3

0x0004,

0xfc6b,	// (0x00053aa6) list_double_fisheye_pane_g_ParamLimits

0xfc6b,	// (0x00053aa6) list_double_fisheye_pane_g

0x0c04,	// (0x00044a3f) list_double_fisheye_pane_t1_ParamLimits

0x0c04,	// (0x00044a3f) list_double_fisheye_pane_t1

0x0c1f,	// (0x00044a5a) list_double_fisheye_pane_t2_ParamLimits

0x0c1f,	// (0x00044a5a) list_double_fisheye_pane_t2

0x0001,

0xfc76,	// (0x00053ab1) list_double_fisheye_pane_t_ParamLimits

0xfc76,	// (0x00053ab1) list_double_fisheye_pane_t

0xa796,	// (0x0004e5d1) main_call5_pane

0x89e0,	// (0x0004c81b) sc_swipe_pane_ParamLimits

0x89e0,	// (0x0004c81b) sc_swipe_pane

0x8dee,	// (0x0004cc29) call5_image_pane_ParamLimits

0x8dee,	// (0x0004cc29) call5_image_pane

0x8e0b,	// (0x0004cc46) call5_swipe_1_pane_ParamLimits

0x8e0b,	// (0x0004cc46) call5_swipe_1_pane

0x8e1e,	// (0x0004cc59) call5_swipe_2_pane_ParamLimits

0x8e1e,	// (0x0004cc59) call5_swipe_2_pane

0x8e4b,	// (0x0004cc86) popup_call5_audio_first_window_ParamLimits

0x8e4b,	// (0x0004cc86) popup_call5_audio_first_window

0xe42e,	// (0x00052269) call5_swipe_1_pane_g1_ParamLimits

0xe42e,	// (0x00052269) call5_swipe_1_pane_g1

0x8e60,	// (0x0004cc9b) call5_swipe_1_pane_g2_ParamLimits

0x8e60,	// (0x0004cc9b) call5_swipe_1_pane_g2

0x0001,

0xfc7b,	// (0x00053ab6) call5_swipe_1_pane_g_ParamLimits

0xfc7b,	// (0x00053ab6) call5_swipe_1_pane_g

0x8e6c,	// (0x0004cca7) call5_swipe_1_pane_t1_ParamLimits

0x8e6c,	// (0x0004cca7) call5_swipe_1_pane_t1

0xe42e,	// (0x00052269) call5_swipe_2_pane_g1_ParamLimits

0xe42e,	// (0x00052269) call5_swipe_2_pane_g1

0x8e81,	// (0x0004ccbc) call5_swipe_2_pane_g2_ParamLimits

0x8e81,	// (0x0004ccbc) call5_swipe_2_pane_g2

0x0001,

0xfc80,	// (0x00053abb) call5_swipe_2_pane_g_ParamLimits

0xfc80,	// (0x00053abb) call5_swipe_2_pane_g

0x8e8d,	// (0x0004ccc8) call5_swipe_2_pane_t1_ParamLimits

0x8e8d,	// (0x0004ccc8) call5_swipe_2_pane_t1

0x8ea2,	// (0x0004ccdd) sc_swipe_pane_g1_ParamLimits

0x8ea2,	// (0x0004ccdd) sc_swipe_pane_g1

0x8eaf,	// (0x0004ccea) sc_swipe_pane_g2_ParamLimits

0x8eaf,	// (0x0004ccea) sc_swipe_pane_g2

0x0001,

0xfc85,	// (0x00053ac0) sc_swipe_pane_g_ParamLimits

0xfc85,	// (0x00053ac0) sc_swipe_pane_g

0x8ebb,	// (0x0004ccf6) sc_swipe_pane_t1_ParamLimits

0x8ebb,	// (0x0004ccf6) sc_swipe_pane_t1

0xa796,	// (0x0004e5d1) main_cmail_launcher_pane

0x8ed0,	// (0x0004cd0b) aid_size_cell_cmail_l_ParamLimits

0x8ed0,	// (0x0004cd0b) aid_size_cell_cmail_l

0x8eea,	// (0x0004cd25) grid_cmail_l_pane_ParamLimits

0x8eea,	// (0x0004cd25) grid_cmail_l_pane

0x8f05,	// (0x0004cd40) cell_cmail_l_pane_ParamLimits

0x8f05,	// (0x0004cd40) cell_cmail_l_pane

0x8f2d,	// (0x0004cd68) cell_cmail_l_pane_g1_ParamLimits

0x8f2d,	// (0x0004cd68) cell_cmail_l_pane_g1

0x8f39,	// (0x0004cd74) cell_cmail_l_pane_t1_ParamLimits

0x8f39,	// (0x0004cd74) cell_cmail_l_pane_t1

0x8f4f,	// (0x0004cd8a) cell_cmail_l_pane_t2_ParamLimits

0x8f4f,	// (0x0004cd8a) cell_cmail_l_pane_t2

0x0001,

0xfc8a,	// (0x00053ac5) cell_cmail_l_pane_t_ParamLimits

0xfc8a,	// (0x00053ac5) cell_cmail_l_pane_t

0xa80f,	// (0x0004e64a) grid_highlight_pane_cp018_ParamLimits

0xa80f,	// (0x0004e64a) grid_highlight_pane_cp018

0x132d,	// (0x00045168) main2_pane_ParamLimits

0x132d,	// (0x00045168) main2_pane

0xb08e,	// (0x0004eec9) popup_sp_fs_action_menu_bg_pane_g1

0xb096,	// (0x0004eed1) popup_sp_fs_action_menu_bg_pane_g2

0xb09e,	// (0x0004eed9) popup_sp_fs_action_menu_bg_pane_g3

0xb0a6,	// (0x0004eee1) popup_sp_fs_action_menu_bg_pane_g4

0xb0ae,	// (0x0004eee9) popup_sp_fs_action_menu_bg_pane_g5

0xb0b6,	// (0x0004eef1) popup_sp_fs_action_menu_bg_pane_g6

0xb0be,	// (0x0004eef9) popup_sp_fs_action_menu_bg_pane_g7

0xb0c6,	// (0x0004ef01) popup_sp_fs_action_menu_bg_pane_g8

0xb0ce,	// (0x0004ef09) popup_sp_fs_action_menu_bg_pane_g9

0xb0d6,	// (0x0004ef11) popup_sp_fs_action_menu_bg_pane_g10

0xb0d6,	// (0x0004ef11) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00052fd3) popup_sp_fs_action_menu_bg_pane_g

0xb24a,	// (0x0004f085) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t3_g3_g1

0xb256,	// (0x0004f091) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x2_t3_g3_g2

0xb262,	// (0x0004f09d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00053083) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00053083) list_medium_line_x2_t3_g3_g

0xb26e,	// (0x0004f0a9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb26e,	// (0x0004f0a9) list_medium_line_x2_t3_g3_t1

0x06ee,	// (0x00044529) list_medium_line_x2_t3_g3_t2_ParamLimits

0x06ee,	// (0x00044529) list_medium_line_x2_t3_g3_t2

0xb283,	// (0x0004f0be) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0005308a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0005308a) list_medium_line_x2_t3_g3_t

0xb24a,	// (0x0004f085) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t3_g2_g1

0xb262,	// (0x0004f09d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00053091) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00053091) list_medium_line_x2_t3_g2_g

0xb298,	// (0x0004f0d3) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb298,	// (0x0004f0d3) list_medium_line_x2_t3_g2_t1

0xb2ae,	// (0x0004f0e9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb2ae,	// (0x0004f0e9) list_medium_line_x2_t3_g2_t2

0xb2c0,	// (0x0004f0fb) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb2c0,	// (0x0004f0fb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00053096) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00053096) list_medium_line_x2_t3_g2_t

0xb24a,	// (0x0004f085) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t4_g4_g1

0xb2de,	// (0x0004f119) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb2de,	// (0x0004f119) list_medium_line_x2_t4_g4_g2

0xb256,	// (0x0004f091) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x2_t4_g4_g3

0xb2ea,	// (0x0004f125) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb2ea,	// (0x0004f125) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0005309d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0005309d) list_medium_line_x2_t4_g4_g

0x0702,	// (0x0004453d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0702,	// (0x0004453d) list_medium_line_x2_t4_g4_t1

0x071c,	// (0x00044557) list_medium_line_x2_t4_g4_t2_ParamLimits

0x071c,	// (0x00044557) list_medium_line_x2_t4_g4_t2

0x0732,	// (0x0004456d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0732,	// (0x0004456d) list_medium_line_x2_t4_g4_t3

0xb2f6,	// (0x0004f131) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb2f6,	// (0x0004f131) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000530a6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000530a6) list_medium_line_x2_t4_g4_t

0xb24a,	// (0x0004f085) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t2_g4_g1

0xb2de,	// (0x0004f119) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb2de,	// (0x0004f119) list_medium_line_x2_t2_g4_g2

0xb256,	// (0x0004f091) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x2_t2_g4_g3

0xb262,	// (0x0004f09d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0005310d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0005310d) list_medium_line_x2_t2_g4_g

0xb5e4,	// (0x0004f41f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb5e4,	// (0x0004f41f) list_medium_line_x2_t2_g4_t1

0xb283,	// (0x0004f0be) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00053116) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00053116) list_medium_line_x2_t2_g4_t

0xb24a,	// (0x0004f085) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t2_g3_g1

0xb256,	// (0x0004f091) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x2_t2_g3_g2

0xb262,	// (0x0004f09d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00053083) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00053083) list_medium_line_x2_t2_g3_g

0xb5f9,	// (0x0004f434) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb5f9,	// (0x0004f434) list_medium_line_x2_t2_g3_t1

0xb283,	// (0x0004f0be) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0005311b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0005311b) list_medium_line_x2_t2_g3_t

0x2eeb,	// (0x00046d26) main_sp_fs_list_pane_ParamLimits

0x2eeb,	// (0x00046d26) main_sp_fs_list_pane

0x2ef7,	// (0x00046d32) sp_fs_scroll_pane_ParamLimits

0x2ef7,	// (0x00046d32) sp_fs_scroll_pane

0x0747,	// (0x00044582) list_medium_line_x2_t3_t1

0x0757,	// (0x00044592) list_medium_line_x2_t3_t2

0xb7de,	// (0x0004f619) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00053166) list_medium_line_x2_t3_t

0x0765,	// (0x000445a0) list_medium_line_x3_t4_t1

0x0775,	// (0x000445b0) list_medium_line_x3_t4_t2

0xb7ec,	// (0x0004f627) list_medium_line_x3_t4_t3

0xb7de,	// (0x0004f619) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0005316d) list_medium_line_x3_t4_t

0x0783,	// (0x000445be) list_medium_line_x4_t5_t1

0x0793,	// (0x000445ce) list_medium_line_x4_t5_t2

0xb7ec,	// (0x0004f627) list_medium_line_x4_t5_t3

0xb7fa,	// (0x0004f635) list_medium_line_x4_t5_t4

0xb7de,	// (0x0004f619) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00053176) list_medium_line_x4_t5_t

0xb24a,	// (0x0004f085) list_medium_line_t4_g4_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_t4_g4_g1

0xb2ea,	// (0x0004f125) list_medium_line_t4_g4_g2_ParamLimits

0xb2ea,	// (0x0004f125) list_medium_line_t4_g4_g2

0xb808,	// (0x0004f643) list_medium_line_t4_g4_g3_ParamLimits

0xb808,	// (0x0004f643) list_medium_line_t4_g4_g3

0xb262,	// (0x0004f09d) list_medium_line_t4_g4_g4_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00053181) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00053181) list_medium_line_t4_g4_g

0xb814,	// (0x0004f64f) list_medium_line_t4_g4_t1_ParamLimits

0xb814,	// (0x0004f64f) list_medium_line_t4_g4_t1

0xb829,	// (0x0004f664) list_medium_line_t4_g4_t2_ParamLimits

0xb829,	// (0x0004f664) list_medium_line_t4_g4_t2

0xb83f,	// (0x0004f67a) list_medium_line_t4_g4_t3_ParamLimits

0xb83f,	// (0x0004f67a) list_medium_line_t4_g4_t3

0xb283,	// (0x0004f0be) list_medium_line_t4_g4_t4_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0005318a) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0005318a) list_medium_line_t4_g4_t

0x2fc9,	// (0x00046e04) chi_dic_find_pane_g1

0x4168,	// (0x00047fa3) main_tport_pane

0xbf76,	// (0x0004fdb1) list_medium_line_plain_t1

0xbfc0,	// (0x0004fdfb) list_medium_line_t2_g2_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_t2_g2_g1

0xbfcc,	// (0x0004fe07) list_medium_line_t2_g2_g2_ParamLimits

0xbfcc,	// (0x0004fe07) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x00053841) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x00053841) list_medium_line_t2_g2_g

0x09f5,	// (0x00044830) list_medium_line_t2_g2_t1_ParamLimits

0x09f5,	// (0x00044830) list_medium_line_t2_g2_t1

0x0a0c,	// (0x00044847) list_medium_line_t2_g2_t2_ParamLimits

0x0a0c,	// (0x00044847) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x00053846) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x00053846) list_medium_line_t2_g2_t

0xc0ee,	// (0x0004ff29) aid_sp_fs_list_icon_a_sm

0xc0f6,	// (0x0004ff31) aid_sp_fs_list_icon_d

0x7607,	// (0x0004b442) aid_sp_fs_text_primary

0x7610,	// (0x0004b44b) aid_sp_fs_text_secondary

0xc0fe,	// (0x0004ff39) list_medium_line

0xc0fe,	// (0x0004ff39) list_medium_line_g2

0xc0fe,	// (0x0004ff39) list_medium_line_g3

0xc0fe,	// (0x0004ff39) list_medium_line_plain

0xc0fe,	// (0x0004ff39) list_medium_line_plain_t2

0xc0fe,	// (0x0004ff39) list_medium_line_plain_t3

0xc0fe,	// (0x0004ff39) list_medium_line_right_icon

0xc0fe,	// (0x0004ff39) list_medium_line_right_iconx2

0xc0fe,	// (0x0004ff39) list_medium_line_t2

0xc0fe,	// (0x0004ff39) list_medium_line_t2_g2

0xc0fe,	// (0x0004ff39) list_medium_line_t2_g3

0xc0fe,	// (0x0004ff39) list_medium_line_t2_right_icon

0xc0fe,	// (0x0004ff39) list_medium_line_t2_right_iconx2

0xc0fe,	// (0x0004ff39) list_medium_line_t3

0xc0fe,	// (0x0004ff39) list_medium_line_t3_g2

0xc0fe,	// (0x0004ff39) list_medium_line_t3_g3

0xc0fe,	// (0x0004ff39) list_medium_line_t3_right_iconx2

0xc107,	// (0x0004ff42) list_medium_line_t4_g4

0xc110,	// (0x0004ff4b) list_medium_line_x2

0xc110,	// (0x0004ff4b) list_medium_line_x2_t2_g2

0xc110,	// (0x0004ff4b) list_medium_line_x2_t2_g3

0xc110,	// (0x0004ff4b) list_medium_line_x2_t2_g4

0xc110,	// (0x0004ff4b) list_medium_line_x2_t3

0xc110,	// (0x0004ff4b) list_medium_line_x2_t3_g2

0xc110,	// (0x0004ff4b) list_medium_line_x2_t3_g3

0xc110,	// (0x0004ff4b) list_medium_line_x2_t3_g4

0xc110,	// (0x0004ff4b) list_medium_line_x2_t4_g2

0xc110,	// (0x0004ff4b) list_medium_line_x2_t4_g4

0xc119,	// (0x0004ff54) list_medium_line_x3

0xc119,	// (0x0004ff54) list_medium_line_x3_t4

0xc119,	// (0x0004ff54) list_medium_line_x3_t4_g4

0xc107,	// (0x0004ff42) list_medium_line_x4_t4

0xc107,	// (0x0004ff42) list_medium_line_x4_t4_g7

0xc107,	// (0x0004ff42) list_medium_line_x4_t5

0xc122,	// (0x0004ff5d) list_single_fs_dyc_pane_ParamLimits

0xc122,	// (0x0004ff5d) list_single_fs_dyc_pane

0xb24a,	// (0x0004f085) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x4_t4_g7_g1

0xc136,	// (0x0004ff71) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc136,	// (0x0004ff71) list_medium_line_x4_t4_g7_g2

0xc142,	// (0x0004ff7d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc142,	// (0x0004ff7d) list_medium_line_x4_t4_g7_g3

0xc151,	// (0x0004ff8c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc151,	// (0x0004ff8c) list_medium_line_x4_t4_g7_g4

0xc15d,	// (0x0004ff98) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc15d,	// (0x0004ff98) list_medium_line_x4_t4_g7_g5

0xc16c,	// (0x0004ffa7) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc16c,	// (0x0004ffa7) list_medium_line_x4_t4_g7_g6

0xc17b,	// (0x0004ffb6) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc17b,	// (0x0004ffb6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb92,	// (0x000539cd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb92,	// (0x000539cd) list_medium_line_x4_t4_g7_g

0xc187,	// (0x0004ffc2) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc187,	// (0x0004ffc2) list_medium_line_x4_t4_g7_t1

0xc19c,	// (0x0004ffd7) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc19c,	// (0x0004ffd7) list_medium_line_x4_t4_g7_t2

0xc1b1,	// (0x0004ffec) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc1b1,	// (0x0004ffec) list_medium_line_x4_t4_g7_t3

0xc1c6,	// (0x00050001) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc1c6,	// (0x00050001) list_medium_line_x4_t4_g7_t4

0xc1d8,	// (0x00050013) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc1d8,	// (0x00050013) list_medium_line_x4_t4_g7_t5

0x0004,

0xfba1,	// (0x000539dc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfba1,	// (0x000539dc) list_medium_line_x4_t4_g7_t

0xc1ea,	// (0x00050025) list_single_dyc_row_pane_ParamLimits

0xc1ea,	// (0x00050025) list_single_dyc_row_pane

0x8ddb,	// (0x0004cc16) call5_gesture_pane_ParamLimits

0x8ddb,	// (0x0004cc16) call5_gesture_pane

0x8e31,	// (0x0004cc6c) call5_windows_pane_ParamLimits

0x8e31,	// (0x0004cc6c) call5_windows_pane

0x8f61,	// (0x0004cd9c) call5_swipe_1_pane_cp_ParamLimits

0x8f61,	// (0x0004cd9c) call5_swipe_1_pane_cp

0x8f6d,	// (0x0004cda8) call5_swipe_2_pane_cp_ParamLimits

0x8f6d,	// (0x0004cda8) call5_swipe_2_pane_cp

0xc99f,	// (0x000507da) call5_image_pane_cp

0x8f79,	// (0x0004cdb4) popup_call5_audio_first_window_cp_ParamLimits

0x8f79,	// (0x0004cdb4) popup_call5_audio_first_window_cp

0x8ea2,	// (0x0004ccdd) call5_swipe_1_pane_g1_cp_ParamLimits

0x8ea2,	// (0x0004ccdd) call5_swipe_1_pane_g1_cp

0x8f87,	// (0x0004cdc2) call5_swipe_1_pane_g2_cp

0x8ebb,	// (0x0004ccf6) call5_swipe_1_pane_t1_cp_ParamLimits

0x8ebb,	// (0x0004ccf6) call5_swipe_1_pane_t1_cp

0x8ea2,	// (0x0004ccdd) call5_swipe_2_pane_g1_cp_ParamLimits

0x8ea2,	// (0x0004ccdd) call5_swipe_2_pane_g1_cp

0x8f8f,	// (0x0004cdca) call5_swipe_2_pane_g2_cp

0x8f97,	// (0x0004cdd2) call5_swipe_2_pane_t1_cp_ParamLimits

0x8f97,	// (0x0004cdd2) call5_swipe_2_pane_t1_cp

0xa80f,	// (0x0004e64a) main_sp_fs_email_pane

0x8fac,	// (0x0004cde7) main_sp_fs_listscroll_pane_te

0xc207,	// (0x00050042) popup_sp_fs_action_menu_pane_ParamLimits

0xc207,	// (0x00050042) popup_sp_fs_action_menu_pane

0xe1fe,	// (0x00052039) bg_sp_fs_ctrlbar_pane_g1

0x8fb5,	// (0x0004cdf0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8fbe,	// (0x0004cdf9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x8fc7,	// (0x0004ce02) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe1fe,	// (0x00052039) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc8f,	// (0x00053aca) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfdd,	// (0x00051e18) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfdd,	// (0x00051e18) bg_sp_fs_ctrlbar_ddmenu_pane

0x8fd0,	// (0x0004ce0b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x8fd0,	// (0x0004ce0b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8fdc,	// (0x0004ce17) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8fdc,	// (0x0004ce17) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc98,	// (0x00053ad3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc98,	// (0x00053ad3) main_sp_fs_ctrlbar_ddmenu_pane_g

0x8fe8,	// (0x0004ce23) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x8fe8,	// (0x0004ce23) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc24d,	// (0x00050088) list_medium_line_t2_right_icon_g1

0x0c41,	// (0x00044a7c) list_medium_line_t2_right_icon_t1

0x0c51,	// (0x00044a8c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc9d,	// (0x00053ad8) list_medium_line_t2_right_icon_t

0xddc6,	// (0x00051c01) bg_sp_fs_ctrlbar_pane_ParamLimits

0xddc6,	// (0x00051c01) bg_sp_fs_ctrlbar_pane

0x9089,	// (0x0004cec4) main_sp_fs_ctrlbar_button_pane_cp01

0x9093,	// (0x0004cece) main_sp_fs_ctrlbar_ddmenu_pane

0x909d,	// (0x0004ced8) main_sp_fs_ctrlbar_pane_g1

0x90a9,	// (0x0004cee4) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfca2,	// (0x00053add) main_sp_fs_ctrlbar_pane_g

0x90b5,	// (0x0004cef0) main_sp_fs_ctrlbar_pane_t1

0x0c63,	// (0x00044a9e) main_sp_fs_ctrlbar_pane

0x0c87,	// (0x00044ac2) main_sp_fs_listscroll_pane_te_cp01

0x0ca7,	// (0x00044ae2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ca7,	// (0x00044ae2) popup_sp_fs_action_menu_pane_cp01

0xa80f,	// (0x0004e64a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa80f,	// (0x0004e64a) bg_sp_fs_highlight_list_pane_cp01

0xc255,	// (0x00050090) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc255,	// (0x00050090) sp_fs_action_menu_list_gene_pane_g1

0x90da,	// (0x0004cf15) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x90da,	// (0x0004cf15) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcac,	// (0x00053ae7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcac,	// (0x00053ae7) sp_fs_action_menu_list_gene_pane_g

0xc264,	// (0x0005009f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc264,	// (0x0005009f) sp_fs_action_menu_list_gene_pane_t1

0xc27c,	// (0x000500b7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc27c,	// (0x000500b7) sp_fs_action_menu_list_gene_pane

0x90e7,	// (0x0004cf22) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x90e7,	// (0x0004cf22) popup_sp_fs_action_menu_bg_pane

0xc29f,	// (0x000500da) sp_fs_action_menu_list_pane_ParamLimits

0xc29f,	// (0x000500da) sp_fs_action_menu_list_pane

0x90f5,	// (0x0004cf30) sp_fs_scroll_pane_cp01_ParamLimits

0x90f5,	// (0x0004cf30) sp_fs_scroll_pane_cp01

0x0cd7,	// (0x00044b12) list_medium_line_plain_t2_t1

0x0ce7,	// (0x00044b22) list_medium_line_plain_t2_t2

0x0001,

0xfcb1,	// (0x00053aec) list_medium_line_plain_t2_t

0x0cf7,	// (0x00044b32) list_medium_line_plain_t3_t1

0x0d07,	// (0x00044b42) list_medium_line_plain_t3_t2

0x0d15,	// (0x00044b50) list_medium_line_plain_t3_t3

0x0002,

0xfcb6,	// (0x00053af1) list_medium_line_plain_t3_t

0xb24a,	// (0x0004f085) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t2_g2_g1

0xb262,	// (0x0004f09d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00053091) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00053091) list_medium_line_x2_t2_g2_g

0xb814,	// (0x0004f64f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb814,	// (0x0004f64f) list_medium_line_x2_t2_g2_t1

0xb283,	// (0x0004f0be) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcbd,	// (0x00053af8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcbd,	// (0x00053af8) list_medium_line_x2_t2_g2_t

0xb24a,	// (0x0004f085) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t4_g2_g1

0xc2c3,	// (0x000500fe) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc2c3,	// (0x000500fe) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcc2,	// (0x00053afd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcc2,	// (0x00053afd) list_medium_line_x2_t4_g2_g

0x0d23,	// (0x00044b5e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0d23,	// (0x00044b5e) list_medium_line_x2_t4_g2_t1

0x0d3d,	// (0x00044b78) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0d3d,	// (0x00044b78) list_medium_line_x2_t4_g2_t2

0x0d53,	// (0x00044b8e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0d53,	// (0x00044b8e) list_medium_line_x2_t4_g2_t3

0xb283,	// (0x0004f0be) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcc7,	// (0x00053b02) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcc7,	// (0x00053b02) list_medium_line_x2_t4_g2_t

0xc2d5,	// (0x00050110) list_medium_line_t3_right_iconx2_g1

0xc24d,	// (0x00050088) list_medium_line_t3_right_iconx2_g2

0x0d68,	// (0x00044ba3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcd0,	// (0x00053b0b) list_medium_line_t3_right_iconx2_g

0x0d72,	// (0x00044bad) list_medium_line_t3_right_iconx2_t1

0x0d82,	// (0x00044bbd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcd7,	// (0x00053b12) list_medium_line_t3_right_iconx2_t

0xb24a,	// (0x0004f085) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x3_t4_g4_g1

0xb256,	// (0x0004f091) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x3_t4_g4_g2

0xb2ea,	// (0x0004f125) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb2ea,	// (0x0004f125) list_medium_line_x3_t4_g4_g3

0xc2dd,	// (0x00050118) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc2dd,	// (0x00050118) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcdc,	// (0x00053b17) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcdc,	// (0x00053b17) list_medium_line_x3_t4_g4_g

0x0d90,	// (0x00044bcb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0d90,	// (0x00044bcb) list_medium_line_x3_t4_g4_t1

0x0da7,	// (0x00044be2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0da7,	// (0x00044be2) list_medium_line_x3_t4_g4_t2

0xc2e9,	// (0x00050124) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc2e9,	// (0x00050124) list_medium_line_x3_t4_g4_t3

0xc2fe,	// (0x00050139) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc2fe,	// (0x00050139) list_medium_line_x3_t4_g4_t4

0x0003,

0xfce5,	// (0x00053b20) list_medium_line_x3_t4_g4_t_ParamLimits

0xfce5,	// (0x00053b20) list_medium_line_x3_t4_g4_t

0x0dc2,	// (0x00044bfd) list_single_dyc_row_text_pane_t1_ParamLimits

0x0dc2,	// (0x00044bfd) list_single_dyc_row_text_pane_t1

0x0e0b,	// (0x00044c46) list_single_dyc_row_text_pane_t2_ParamLimits

0x0e0b,	// (0x00044c46) list_single_dyc_row_text_pane_t2

0xc31b,	// (0x00050156) list_single_dyc_row_text_pane_t3_ParamLimits

0xc31b,	// (0x00050156) list_single_dyc_row_text_pane_t3

0x0002,

0xfcee,	// (0x00053b29) list_single_dyc_row_text_pane_t_ParamLimits

0xfcee,	// (0x00053b29) list_single_dyc_row_text_pane_t

0xc32d,	// (0x00050168) list_single_dyc_row_pane_g1_ParamLimits

0xc32d,	// (0x00050168) list_single_dyc_row_pane_g1

0xc339,	// (0x00050174) list_single_dyc_row_pane_g2_ParamLimits

0xc339,	// (0x00050174) list_single_dyc_row_pane_g2

0xc345,	// (0x00050180) list_single_dyc_row_pane_g3_ParamLimits

0xc345,	// (0x00050180) list_single_dyc_row_pane_g3

0xc351,	// (0x0005018c) list_single_dyc_row_pane_g4_ParamLimits

0xc351,	// (0x0005018c) list_single_dyc_row_pane_g4

0x0003,

0xfcf5,	// (0x00053b30) list_single_dyc_row_pane_g_ParamLimits

0xfcf5,	// (0x00053b30) list_single_dyc_row_pane_g

0xc35d,	// (0x00050198) list_single_dyc_row_text_pane_ParamLimits

0xc35d,	// (0x00050198) list_single_dyc_row_text_pane

0xa796,	// (0x0004e5d1) bg_sp_fs_scroll_pane

0x911b,	// (0x0004cf56) thumb_sp_fs_scroll_pane

0xbfc0,	// (0x0004fdfb) list_medium_line_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_g1

0xc37c,	// (0x000501b7) list_medium_line_t1_ParamLimits

0xc37c,	// (0x000501b7) list_medium_line_t1

0xb24a,	// (0x0004f085) list_medium_line_x2_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_g1

0xb256,	// (0x0004f091) list_medium_line_x2_g2_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x2_g2

0x0001,

0xfcfe,	// (0x00053b39) list_medium_line_x2_g_ParamLimits

0xfcfe,	// (0x00053b39) list_medium_line_x2_g

0xc391,	// (0x000501cc) list_medium_line_x2_t1_ParamLimits

0xc391,	// (0x000501cc) list_medium_line_x2_t1

0xb24a,	// (0x0004f085) list_medium_line_x3_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x3_g1

0xb256,	// (0x0004f091) list_medium_line_x3_g2_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x3_g2

0x0001,

0xfcfe,	// (0x00053b39) list_medium_line_x3_g_ParamLimits

0xfcfe,	// (0x00053b39) list_medium_line_x3_g

0xc391,	// (0x000501cc) list_medium_line_x3_t1_ParamLimits

0xc391,	// (0x000501cc) list_medium_line_x3_t1

0x9124,	// (0x0004cf5f) thumb_sp_fs_scroll_pane_g1

0x912d,	// (0x0004cf68) thumb_sp_fs_scroll_pane_g2

0x9136,	// (0x0004cf71) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd03,	// (0x00053b3e) thumb_sp_fs_scroll_pane_g

0x9124,	// (0x0004cf5f) bg_sp_fs_scroll_pane_g1

0x912d,	// (0x0004cf68) bg_sp_fs_scroll_pane_g2

0x9136,	// (0x0004cf71) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd03,	// (0x00053b3e) bg_sp_fs_scroll_pane_g

0xb24a,	// (0x0004f085) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb24a,	// (0x0004f085) list_medium_line_x2_t3_g4_g1

0xb2de,	// (0x0004f119) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb2de,	// (0x0004f119) list_medium_line_x2_t3_g4_g2

0xb256,	// (0x0004f091) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb256,	// (0x0004f091) list_medium_line_x2_t3_g4_g3

0xb262,	// (0x0004f09d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb262,	// (0x0004f09d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0005310d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0005310d) list_medium_line_x2_t3_g4_g

0x0e65,	// (0x00044ca0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0e65,	// (0x00044ca0) list_medium_line_x2_t3_g4_t1

0x0e7b,	// (0x00044cb6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0e7b,	// (0x00044cb6) list_medium_line_x2_t3_g4_t2

0xb283,	// (0x0004f0be) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb283,	// (0x0004f0be) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd0a,	// (0x00053b45) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd0a,	// (0x00053b45) list_medium_line_x2_t3_g4_t

0xbfc0,	// (0x0004fdfb) list_medium_line_g2_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_g2_g1

0xbfcc,	// (0x0004fe07) list_medium_line_g2_g2_ParamLimits

0xbfcc,	// (0x0004fe07) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x00053841) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x00053841) list_medium_line_g2_g

0xc3a7,	// (0x000501e2) list_medium_line_g2_t1_ParamLimits

0xc3a7,	// (0x000501e2) list_medium_line_g2_t1

0xbfc0,	// (0x0004fdfb) list_medium_line_t3_g2_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_t3_g2_g1

0xbfcc,	// (0x0004fe07) list_medium_line_t3_g2_g2_ParamLimits

0xbfcc,	// (0x0004fe07) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x00053841) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x00053841) list_medium_line_t3_g2_g

0x0e94,	// (0x00044ccf) list_medium_line_t3_g2_t1_ParamLimits

0x0e94,	// (0x00044ccf) list_medium_line_t3_g2_t1

0x0eae,	// (0x00044ce9) list_medium_line_t3_g2_t2_ParamLimits

0x0eae,	// (0x00044ce9) list_medium_line_t3_g2_t2

0x0ec4,	// (0x00044cff) list_medium_line_t3_g2_t3_ParamLimits

0x0ec4,	// (0x00044cff) list_medium_line_t3_g2_t3

0x0002,

0xfd11,	// (0x00053b4c) list_medium_line_t3_g2_t_ParamLimits

0xfd11,	// (0x00053b4c) list_medium_line_t3_g2_t

0xc24d,	// (0x00050088) list_medium_line_right_icon_g1

0xc3bc,	// (0x000501f7) list_medium_line_right_icon_t1

0xbfc0,	// (0x0004fdfb) list_medium_line_t2_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_t2_g1

0x0edb,	// (0x00044d16) list_medium_line_t2_t1_ParamLimits

0x0edb,	// (0x00044d16) list_medium_line_t2_t1

0x0ef5,	// (0x00044d30) list_medium_line_t2_t2_ParamLimits

0x0ef5,	// (0x00044d30) list_medium_line_t2_t2

0x0001,

0xfd18,	// (0x00053b53) list_medium_line_t2_t_ParamLimits

0xfd18,	// (0x00053b53) list_medium_line_t2_t

0xbfc0,	// (0x0004fdfb) list_medium_line_t3_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_t3_g1

0x0f0e,	// (0x00044d49) list_medium_line_t3_t1_ParamLimits

0x0f0e,	// (0x00044d49) list_medium_line_t3_t1

0x0f25,	// (0x00044d60) list_medium_line_t3_t2_ParamLimits

0x0f25,	// (0x00044d60) list_medium_line_t3_t2

0x0f3a,	// (0x00044d75) list_medium_line_t3_t3_ParamLimits

0x0f3a,	// (0x00044d75) list_medium_line_t3_t3

0x0002,

0xfd1d,	// (0x00053b58) list_medium_line_t3_t_ParamLimits

0xfd1d,	// (0x00053b58) list_medium_line_t3_t

0xbfc0,	// (0x0004fdfb) list_medium_line_g3_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_g3_g1

0xc3ca,	// (0x00050205) list_medium_line_g3_g2_ParamLimits

0xc3ca,	// (0x00050205) list_medium_line_g3_g2

0xbfcc,	// (0x0004fe07) list_medium_line_g3_g3_ParamLimits

0xbfcc,	// (0x0004fe07) list_medium_line_g3_g3

0x0002,

0xfd24,	// (0x00053b5f) list_medium_line_g3_g_ParamLimits

0xfd24,	// (0x00053b5f) list_medium_line_g3_g

0xc3d6,	// (0x00050211) list_medium_line_g3_t1_ParamLimits

0xc3d6,	// (0x00050211) list_medium_line_g3_t1

0xbfc0,	// (0x0004fdfb) list_medium_line_t2_g3_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_t2_g3_g1

0xc3ca,	// (0x00050205) list_medium_line_t2_g3_g2_ParamLimits

0xc3ca,	// (0x00050205) list_medium_line_t2_g3_g2

0xbfcc,	// (0x0004fe07) list_medium_line_t2_g3_g3_ParamLimits

0xbfcc,	// (0x0004fe07) list_medium_line_t2_g3_g3

0x0002,

0xfd24,	// (0x00053b5f) list_medium_line_t2_g3_g_ParamLimits

0xfd24,	// (0x00053b5f) list_medium_line_t2_g3_g

0x0f4c,	// (0x00044d87) list_medium_line_t2_g3_t1_ParamLimits

0x0f4c,	// (0x00044d87) list_medium_line_t2_g3_t1

0x0f63,	// (0x00044d9e) list_medium_line_t2_g3_t2_ParamLimits

0x0f63,	// (0x00044d9e) list_medium_line_t2_g3_t2

0x0001,

0xfd2b,	// (0x00053b66) list_medium_line_t2_g3_t_ParamLimits

0xfd2b,	// (0x00053b66) list_medium_line_t2_g3_t

0xbfc0,	// (0x0004fdfb) list_medium_line_t3_g3_g1_ParamLimits

0xbfc0,	// (0x0004fdfb) list_medium_line_t3_g3_g1

0xc3ca,	// (0x00050205) list_medium_line_t3_g3_g2_ParamLimits

0xc3ca,	// (0x00050205) list_medium_line_t3_g3_g2

0xbfcc,	// (0x0004fe07) list_medium_line_t3_g3_g3_ParamLimits

0xbfcc,	// (0x0004fe07) list_medium_line_t3_g3_g3

0x0002,

0xfd24,	// (0x00053b5f) list_medium_line_t3_g3_g_ParamLimits

0xfd24,	// (0x00053b5f) list_medium_line_t3_g3_g

0x0f7c,	// (0x00044db7) list_medium_line_t3_g3_t1_ParamLimits

0x0f7c,	// (0x00044db7) list_medium_line_t3_g3_t1

0x0f95,	// (0x00044dd0) list_medium_line_t3_g3_t2_ParamLimits

0x0f95,	// (0x00044dd0) list_medium_line_t3_g3_t2

0x0fab,	// (0x00044de6) list_medium_line_t3_g3_t3_ParamLimits

0x0fab,	// (0x00044de6) list_medium_line_t3_g3_t3

0x0002,

0xfd30,	// (0x00053b6b) list_medium_line_t3_g3_t_ParamLimits

0xfd30,	// (0x00053b6b) list_medium_line_t3_g3_t

0xc2d5,	// (0x00050110) list_medium_line_right_iconx2_g1

0xc24d,	// (0x00050088) list_medium_line_right_iconx2_g2

0x0001,

0xfd37,	// (0x00053b72) list_medium_line_right_iconx2_g

0xc3eb,	// (0x00050226) list_medium_line_right_iconx2_t1

0xc2d5,	// (0x00050110) list_medium_line_t2_right_iconx2_g1

0xc24d,	// (0x00050088) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd37,	// (0x00053b72) list_medium_line_t2_right_iconx2_g

0x0fc5,	// (0x00044e00) list_medium_line_t2_right_iconx2_t1

0x0fd5,	// (0x00044e10) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd3c,	// (0x00053b77) list_medium_line_t2_right_iconx2_t

0xc3f9,	// (0x00050234) list_medium_line_x4_t4_t1

0x0fe7,	// (0x00044e22) list_medium_line_x4_t4_t2

0x0ff7,	// (0x00044e32) list_medium_line_x4_t4_t3

0x1007,	// (0x00044e42) list_medium_line_x4_t4_t4

0x0003,

0xfd41,	// (0x00053b7c) list_medium_line_x4_t4_t

0x9182,	// (0x0004cfbd) tport_appsw_pane_ParamLimits

0x9182,	// (0x0004cfbd) tport_appsw_pane

0x9195,	// (0x0004cfd0) tport_contact_pane_ParamLimits

0x9195,	// (0x0004cfd0) tport_contact_pane

0x91ae,	// (0x0004cfe9) tport_listscroll_pane_ParamLimits

0x91ae,	// (0x0004cfe9) tport_listscroll_pane

0x91c9,	// (0x0004d004) cell_tport_appsw_pane_ParamLimits

0x91c9,	// (0x0004d004) cell_tport_appsw_pane

0xebea,	// (0x00052a25) tport_appsw_pane_g1_ParamLimits

0xebea,	// (0x00052a25) tport_appsw_pane_g1

0x920d,	// (0x0004d048) tport_contact_pane_g1

0x9216,	// (0x0004d051) tport_contact_pane_t1

0x9224,	// (0x0004d05f) tport_contact_pane_t2

0x0001,

0xfd4a,	// (0x00053b85) tport_contact_pane_t

0x9232,	// (0x0004d06d) list_tport_pane

0x923b,	// (0x0004d076) scroll_pane_cp_030

0x924c,	// (0x0004d087) cell_tport_appsw_pane_g1

0x925c,	// (0x0004d097) cell_tport_appsw_pane_t1

0xa796,	// (0x0004e5d1) grid_highlight_pane_cp019

0x926a,	// (0x0004d0a5) list_tport_double_graphic_pane_ParamLimits

0x926a,	// (0x0004d0a5) list_tport_double_graphic_pane

0xa80f,	// (0x0004e64a) list_highlight_pane_cp023_ParamLimits

0xa80f,	// (0x0004e64a) list_highlight_pane_cp023

0x9277,	// (0x0004d0b2) list_tport_double_graphic_pane_g1_ParamLimits

0x9277,	// (0x0004d0b2) list_tport_double_graphic_pane_g1

0x9284,	// (0x0004d0bf) list_tport_double_graphic_pane_t1_ParamLimits

0x9284,	// (0x0004d0bf) list_tport_double_graphic_pane_t1

0x9299,	// (0x0004d0d4) list_tport_double_graphic_pane_t2_ParamLimits

0x9299,	// (0x0004d0d4) list_tport_double_graphic_pane_t2

0x0001,

0xfd56,	// (0x00053b91) list_tport_double_graphic_pane_t_ParamLimits

0xfd56,	// (0x00053b91) list_tport_double_graphic_pane_t

0xa796,	// (0x0004e5d1) main_cale_note_pane

0x68f5,	// (0x0004a730) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x68f5,	// (0x0004a730) cell_vitu2_function_top_wide_pane_cp01

0x8859,	// (0x0004c694) wait_bar_pane_cp05_ParamLimits

0xa796,	// (0x0004e5d1) listscroll_cmail_pane

0x92b3,	// (0x0004d0ee) list_cmail_pane

0x92d4,	// (0x0004d10f) list_cmail_body_pane

0x92ec,	// (0x0004d127) list_single_cmail_header_caption_pane

0x9309,	// (0x0004d144) list_single_cmail_header_detail_pane_ParamLimits

0x9309,	// (0x0004d144) list_single_cmail_header_detail_pane

0x933b,	// (0x0004d176) list_single_cmail_header_caption_pane_t1

0x1017,	// (0x00044e52) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1017,	// (0x00044e52) list_single_cmail_header_detail_pane_g1

0xc407,	// (0x00050242) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc407,	// (0x00050242) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd5b,	// (0x00053b96) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd5b,	// (0x00053b96) list_single_cmail_header_detail_pane_g

0xc413,	// (0x0005024e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc413,	// (0x0005024e) list_single_cmail_header_detail_pane_t1

0xc451,	// (0x0005028c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc451,	// (0x0005028c) list_single_cmail_header_editor_pane_bg

0x86c3,	// (0x0004c4fe) list_cmail_body_pane_g1

0x9361,	// (0x0004d19c) list_cmail_body_pane_t1

0xec0a,	// (0x00052a45) list_single_cmail_header_editor_pane_bg_g1

0xb503,	// (0x0004f33e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec1a,	// (0x00052a55) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec12,	// (0x00052a4d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee46,	// (0x00052c81) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec3a,	// (0x00052a75) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec2a,	// (0x00052a65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec32,	// (0x00052a6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb4e3,	// (0x0004f31e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x936f,	// (0x0004d1aa) calenote_gesture_pane_ParamLimits

0x936f,	// (0x0004d1aa) calenote_gesture_pane

0x938f,	// (0x0004d1ca) calenote_window_pane_ParamLimits

0x938f,	// (0x0004d1ca) calenote_window_pane

0x93ab,	// (0x0004d1e6) popup_note_window_cp01

0x93b4,	// (0x0004d1ef) calenote_swipe_1_pane_ParamLimits

0x93b4,	// (0x0004d1ef) calenote_swipe_1_pane

0x8f6d,	// (0x0004cda8) calenote_swipe_2_pane_ParamLimits

0x8f6d,	// (0x0004cda8) calenote_swipe_2_pane

0x8ea2,	// (0x0004ccdd) calenote_swipe_1_pane_g1_ParamLimits

0x8ea2,	// (0x0004ccdd) calenote_swipe_1_pane_g1

0x8eaf,	// (0x0004ccea) calenote_swipe_1_pane_g2_ParamLimits

0x8eaf,	// (0x0004ccea) calenote_swipe_1_pane_g2

0x0001,

0xfc85,	// (0x00053ac0) calenote_swipe_1_pane_g_ParamLimits

0xfc85,	// (0x00053ac0) calenote_swipe_1_pane_g

0x93d2,	// (0x0004d20d) calenote_swipe_1_pane_t1_ParamLimits

0x93d2,	// (0x0004d20d) calenote_swipe_1_pane_t1

0x8ea2,	// (0x0004ccdd) calenote_swipe_2_pane_g1_ParamLimits

0x8ea2,	// (0x0004ccdd) calenote_swipe_2_pane_g1

0x93f1,	// (0x0004d22c) calenote_swipe_2_pane_g2_ParamLimits

0x93f1,	// (0x0004d22c) calenote_swipe_2_pane_g2

0x0001,

0xfd67,	// (0x00053ba2) calenote_swipe_2_pane_g_ParamLimits

0xfd67,	// (0x00053ba2) calenote_swipe_2_pane_g

0x93fd,	// (0x0004d238) calenote_swipe_2_pane_t1_ParamLimits

0x93fd,	// (0x0004d238) calenote_swipe_2_pane_t1

0xa796,	// (0x0004e5d1) main_mup_navstr_pane

0x5557,	// (0x00049392) main_mup3_pane_t7_ParamLimits

0x5557,	// (0x00049392) main_mup3_pane_t7

0xbc4d,	// (0x0004fa88) main_mp4_pane_g6_ParamLimits

0xbc4d,	// (0x0004fa88) main_mp4_pane_g6

0xbdf1,	// (0x0004fc2c) main_image3_pane_t4_ParamLimits

0xbdf1,	// (0x0004fc2c) main_image3_pane_t4

0x9424,	// (0x0004d25f) popup_navstr_preview_pane_ParamLimits

0x9424,	// (0x0004d25f) popup_navstr_preview_pane

0x9434,	// (0x0004d26f) scroll_navstr_pane_ParamLimits

0x9434,	// (0x0004d26f) scroll_navstr_pane

0xa796,	// (0x0004e5d1) bg_popup_preview_window_pane_cp04

0x9448,	// (0x0004d283) popup_navstr_preview_pane_t1

0x9456,	// (0x0004d291) scroll_navstr_pane_g1_ParamLimits

0x9456,	// (0x0004d291) scroll_navstr_pane_g1

0x946a,	// (0x0004d2a5) scroll_navstr_pane_t1_ParamLimits

0x946a,	// (0x0004d2a5) scroll_navstr_pane_t1

0x93c9,	// (0x0004d204) bg_button_pane_cp014

0x93c9,	// (0x0004d204) bg_button_pane_cp030

0x0be7,	// (0x00044a22) list_double_fisheye_pane_g4_ParamLimits

0x0be7,	// (0x00044a22) list_double_fisheye_pane_g4

0x0bf3,	// (0x00044a2e) list_double_fisheye_pane_g5_ParamLimits

0x0bf3,	// (0x00044a2e) list_double_fisheye_pane_g5

0x92c5,	// (0x0004d100) sp_fs_scroll_pane_cp03

0x909d,	// (0x0004ced8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x90a9,	// (0x0004cee4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfca2,	// (0x00053add) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x90b5,	// (0x0004cef0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x92bb,	// (0x0004d0f6) sp_fs_scroll_pane_cp02

0xb141,	// (0x0004ef7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb141,	// (0x0004ef7c) popup_sp_fs_calendar_preview_list_single_pane

0xa796,	// (0x0004e5d1) main_cam6_pano_pane

0xa80f,	// (0x0004e64a) main_mup3_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_phacti_pane

0x872a,	// (0x0004c565) bg_button_pane_cp11

0x8744,	// (0x0004c57f) main_mobtv_info_pane_g2_ParamLimits

0x8744,	// (0x0004c57f) main_mobtv_info_pane_g2

0x0001,

0xfc02,	// (0x00053a3d) main_mobtv_info_pane_g_ParamLimits

0xfc02,	// (0x00053a3d) main_mobtv_info_pane_g

0x89c7,	// (0x0004c802) sc_clock_pane_t5_ParamLimits

0x89c7,	// (0x0004c802) sc_clock_pane_t5

0x8bb6,	// (0x0004c9f1) main_radioblah_pane_g1_ParamLimits

0x8bfc,	// (0x0004ca37) main_radioblah_pane_t3_ParamLimits

0x8bfc,	// (0x0004ca37) main_radioblah_pane_t3

0x8c14,	// (0x0004ca4f) main_radioblah_pane_t4_ParamLimits

0x8c14,	// (0x0004ca4f) main_radioblah_pane_t4

0x8c42,	// (0x0004ca7d) main_radioblah_text_pane_ParamLimits

0x8c42,	// (0x0004ca7d) main_radioblah_text_pane

0x8c54,	// (0x0004ca8f) main_radioblah_info_pane_g1_ParamLimits

0x8d27,	// (0x0004cb62) main_radioblah_info_pane_t4_ParamLimits

0x8d27,	// (0x0004cb62) main_radioblah_info_pane_t4

0xa80f,	// (0x0004e64a) main_sp_fs_calendar_pane

0x9481,	// (0x0004d2bc) main_phacti_pane_g1

0x9492,	// (0x0004d2cd) phacti_note_pane_ParamLimits

0x9492,	// (0x0004d2cd) phacti_note_pane

0x94a6,	// (0x0004d2e1) phacti_term_pane_ParamLimits

0x94a6,	// (0x0004d2e1) phacti_term_pane

0x94bb,	// (0x0004d2f6) phacti_note_pane_t1_ParamLimits

0x94bb,	// (0x0004d2f6) phacti_note_pane_t1

0xc463,	// (0x0005029e) phacti_term_pane_g1

0xc46b,	// (0x000502a6) phacti_term_pane_t1_ParamLimits

0xc46b,	// (0x000502a6) phacti_term_pane_t1

0x94d2,	// (0x0004d30d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x94da,	// (0x0004d315) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd71,	// (0x00053bac) popup_sp_fs_calendar_preview_list_single_pane_g

0x94e2,	// (0x0004d31d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x94e2,	// (0x0004d31d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x94f8,	// (0x0004d333) aid_popup_sp_fs_bg_corner_pane

0xe1fe,	// (0x00052039) popup_sp_fs_calendar_preview_bg_pane_g1

0xa796,	// (0x0004e5d1) popup_sp_fs_calendar_preview_bg_pane

0x9500,	// (0x0004d33b) popup_sp_fs_calendar_preview_list_pane

0xa80f,	// (0x0004e64a) bg_main_sp_fs_cale_pane_ParamLimits

0xa80f,	// (0x0004e64a) bg_main_sp_fs_cale_pane

0xc495,	// (0x000502d0) listscroll_cale_mrui_pane_ParamLimits

0xc495,	// (0x000502d0) listscroll_cale_mrui_pane

0xc4a9,	// (0x000502e4) listscroll_sp_fs_schedule_track_pane

0xc4b2,	// (0x000502ed) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc4b2,	// (0x000502ed) main_sp_fs_ctrlbar_pane_cp01

0x9555,	// (0x0004d390) main_sp_fs_ribbon_pane

0x955d,	// (0x0004d398) popup_sp_fs_cale_preview_window

0x956f,	// (0x0004d3aa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x956f,	// (0x0004d3aa) list_single_sp_fs_schedule_track_pane

0xa80f,	// (0x0004e64a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa80f,	// (0x0004e64a) bg_sp_fs_highlight_list_pane_cp03

0x9582,	// (0x0004d3bd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9582,	// (0x0004d3bd) list_single_sp_fs_schedule_track_pane_g1

0x958e,	// (0x0004d3c9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x958e,	// (0x0004d3c9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd76,	// (0x00053bb1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd76,	// (0x00053bb1) list_single_sp_fs_schedule_track_pane_g

0x959a,	// (0x0004d3d5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x959a,	// (0x0004d3d5) list_single_sp_fs_schedule_track_pane_t1

0x95bc,	// (0x0004d3f7) sp_fs_schedule_track_pane_ParamLimits

0x95bc,	// (0x0004d3f7) sp_fs_schedule_track_pane

0x95d1,	// (0x0004d40c) sp_fs_schedule_track_pane_g1

0x95d9,	// (0x0004d414) sp_fs_schedule_track_pane_g2

0x95e1,	// (0x0004d41c) sp_fs_schedule_track_pane_g3

0x95e9,	// (0x0004d424) sp_fs_schedule_track_pane_g4

0x95f1,	// (0x0004d42c) sp_fs_schedule_track_pane_g5

0x0004,

0xfd7b,	// (0x00053bb6) sp_fs_schedule_track_pane_g

0xec0a,	// (0x00052a45) bg_sp_fs_schedule_viewer_highlight_g1

0xb503,	// (0x0004f33e) bg_sp_fs_schedule_viewer_highlight_g2

0xec12,	// (0x00052a4d) bg_sp_fs_schedule_viewer_highlight_g3

0xec1a,	// (0x00052a55) bg_sp_fs_schedule_viewer_highlight_g4

0xee46,	// (0x00052c81) bg_sp_fs_schedule_viewer_highlight_g5

0xec2a,	// (0x00052a65) bg_sp_fs_schedule_viewer_highlight_g6

0xec32,	// (0x00052a6d) bg_sp_fs_schedule_viewer_highlight_g7

0xec3a,	// (0x00052a75) bg_sp_fs_schedule_viewer_highlight_g8

0xb4e3,	// (0x0004f31e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd86,	// (0x00053bc1) bg_sp_fs_schedule_viewer_highlight_g

0xa796,	// (0x0004e5d1) bg_main_sp_fs_ribbon_pane

0x95f9,	// (0x0004d434) main_sp_fs_ribbon_pane_g1

0x9602,	// (0x0004d43d) main_sp_fs_ribbon_pane_t1

0x9611,	// (0x0004d44c) main_sp_fs_ribbon_pane_t2

0x9620,	// (0x0004d45b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd99,	// (0x00053bd4) main_sp_fs_ribbon_pane_t

0x962f,	// (0x0004d46a) main_sp_fs_ribbon_scheduler_pane

0x9637,	// (0x0004d472) bg_main_sp_fs_ribbon_pane_g1

0x9640,	// (0x0004d47b) bg_main_sp_fs_ribbon_pane_g2

0x9649,	// (0x0004d484) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfda0,	// (0x00053bdb) bg_main_sp_fs_ribbon_pane_g

0x9651,	// (0x0004d48c) main_sp_fs_ribbon_scheduler_pane_g1

0x965a,	// (0x0004d495) main_sp_fs_ribbon_scheduler_pane_g2

0x9663,	// (0x0004d49e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfda7,	// (0x00053be2) main_sp_fs_ribbon_scheduler_pane_g

0x966c,	// (0x0004d4a7) list_cale_mrui_pane

0x9675,	// (0x0004d4b0) sp_fs_scroll_pane_cp07_ParamLimits

0x9675,	// (0x0004d4b0) sp_fs_scroll_pane_cp07

0x968b,	// (0x0004d4c6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x968b,	// (0x0004d4c6) bg_sp_fs_schedule_viewer_highlight

0x969d,	// (0x0004d4d8) list_single_sp_fs_schedule_track_pane_cp01

0x96a5,	// (0x0004d4e0) list_sp_fs_schedule_track_pane

0x96ad,	// (0x0004d4e8) sp_fs_scroll_pane_cp06_ParamLimits

0x96ad,	// (0x0004d4e8) sp_fs_scroll_pane_cp06

0xe1fe,	// (0x00052039) bgmain_sp_fs_calendar_pane_g1

0xc4c3,	// (0x000502fe) list_single_cale_mrui_pane_ParamLimits

0xc4c3,	// (0x000502fe) list_single_cale_mrui_pane

0xc4e6,	// (0x00050321) list_single_cale_mrui_row_pane_ParamLimits

0xc4e6,	// (0x00050321) list_single_cale_mrui_row_pane

0xc4f3,	// (0x0005032e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc4f3,	// (0x0005032e) list_single_cale_mrui_row_pane_g1

0xc52b,	// (0x00050366) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc52b,	// (0x00050366) list_single_cale_mrui_row_pane_t1

0x1055,	// (0x00044e90) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1055,	// (0x00044e90) list_single_cale_mrui_row_pane_t2

0xc53d,	// (0x00050378) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc53d,	// (0x00050378) list_single_cale_mrui_row_pane_t3

0xc56c,	// (0x000503a7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc56c,	// (0x000503a7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdb5,	// (0x00053bf0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdb5,	// (0x00053bf0) list_single_cale_mrui_row_pane_t

0x10bd,	// (0x00044ef8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x10bd,	// (0x00044ef8) list_single_cmail_header_editor_pane_bg_cp01

0x10e3,	// (0x00044f1e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x10e3,	// (0x00044f1e) list_single_cmail_header_editor_pane_bg_cp02

0x96cc,	// (0x0004d507) main_radioblah_text_pane_t1_ParamLimits

0x96cc,	// (0x0004d507) main_radioblah_text_pane_t1

0x96e7,	// (0x0004d522) cam6_indi_pane_cp01

0x96ef,	// (0x0004d52a) cam6_mode_pane_cp01

0x96f7,	// (0x0004d532) cam6_pano_pane

0x9700,	// (0x0004d53b) cam6_zoom_pane_cp01

0x970a,	// (0x0004d545) cam6_pano_image_pane

0x9713,	// (0x0004d54e) cam6_pano_pane_g1

0x86c3,	// (0x0004c4fe) cam6_pano_pane_g2

0x971c,	// (0x0004d557) cam6_pano_pane_g3

0x9725,	// (0x0004d560) cam6_pano_pane_g4

0xe788,	// (0x000525c3) cam6_pano_pane_g5

0x972e,	// (0x0004d569) cam6_pano_pane_g6

0x9736,	// (0x0004d571) cam6_pano_pane_g7

0x973e,	// (0x0004d579) cam6_pano_pane_g8

0x9747,	// (0x0004d582) cam6_pano_pane_g9

0x0008,

0xfdbe,	// (0x00053bf9) cam6_pano_pane_g

0xa796,	// (0x0004e5d1) main_browser_tag_pane

0x941c,	// (0x0004d257) grid_navstr_albumart_pane

0x9752,	// (0x0004d58d) cell_navstr_albumart_pane_ParamLimits

0x9752,	// (0x0004d58d) cell_navstr_albumart_pane

0x976e,	// (0x0004d5a9) cell_navstr_albumart_pane_g1

0xdbdf,	// (0x00051a1a) cell_navstr_albumart_pane_g2

0xdbef,	// (0x00051a2a) cell_navstr_albumart_pane_g3

0xdbe7,	// (0x00051a22) cell_navstr_albumart_pane_g4

0x0003,

0xfdd1,	// (0x00053c0c) cell_navstr_albumart_pane_g

0x9776,	// (0x0004d5b1) bt_list_pane_ParamLimits

0x9776,	// (0x0004d5b1) bt_list_pane

0x978c,	// (0x0004d5c7) bt_list_pane_t1

0x979b,	// (0x0004d5d6) bt_list_pane_t2

0x0001,

0xfdda,	// (0x00053c15) bt_list_pane_t

0xa796,	// (0x0004e5d1) main_cale_prevew_pane

0x97aa,	// (0x0004d5e5) popup_cale_preview_window_ParamLimits

0x97aa,	// (0x0004d5e5) popup_cale_preview_window

0xa80f,	// (0x0004e64a) bg_popup_preview_window_pane_cp05_ParamLimits

0xa80f,	// (0x0004e64a) bg_popup_preview_window_pane_cp05

0x97c5,	// (0x0004d600) list_cale_preview_pane_ParamLimits

0x97c5,	// (0x0004d600) list_cale_preview_pane

0x97d1,	// (0x0004d60c) list_double_cale_preview_pane_ParamLimits

0x97d1,	// (0x0004d60c) list_double_cale_preview_pane

0x97e5,	// (0x0004d620) list_single_cale_preview_pane_ParamLimits

0x97e5,	// (0x0004d620) list_single_cale_preview_pane

0x97fd,	// (0x0004d638) list_single_cale_preview_pane_g1

0x9805,	// (0x0004d640) list_single_cale_preview_pane_t1_ParamLimits

0x9805,	// (0x0004d640) list_single_cale_preview_pane_t1

0x981a,	// (0x0004d655) list_double_cale_preview_pane_g1

0x9822,	// (0x0004d65d) list_double_cale_preview_pane_t1_ParamLimits

0x9822,	// (0x0004d65d) list_double_cale_preview_pane_t1

0x9837,	// (0x0004d672) list_double_cale_preview_pane_t2_ParamLimits

0x9837,	// (0x0004d672) list_double_cale_preview_pane_t2

0x0001,

0xfddf,	// (0x00053c1a) list_double_cale_preview_pane_t_ParamLimits

0xfddf,	// (0x00053c1a) list_double_cale_preview_pane_t

0xa796,	// (0x0004e5d1) main_ezdial_pane

0xa80f,	// (0x0004e64a) main_sp_fs_email_pane_ParamLimits

0x9002,	// (0x0004ce3d) cmail_ddmenu_btn01_pane_ParamLimits

0x9002,	// (0x0004ce3d) cmail_ddmenu_btn01_pane

0x9015,	// (0x0004ce50) cmail_ddmenu_btn02_pane_ParamLimits

0x9015,	// (0x0004ce50) cmail_ddmenu_btn02_pane

0x9072,	// (0x0004cead) cmail_ddmenu_btn03_pane_ParamLimits

0x9072,	// (0x0004cead) cmail_ddmenu_btn03_pane

0x0c63,	// (0x00044a9e) main_sp_fs_ctrlbar_pane_ParamLimits

0x0c87,	// (0x00044ac2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x92d4,	// (0x0004d10f) list_cmail_body_pane_ParamLimits

0x934b,	// (0x0004d186) bg_button_pane_cp12

0x9354,	// (0x0004d18f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x9354,	// (0x0004d18f) list_single_cmail_header_detail_pane_g3

0x102f,	// (0x00044e6a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x102f,	// (0x00044e6a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd62,	// (0x00053b9d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd62,	// (0x00053b9d) list_single_cmail_header_detail_pane_t

0xc480,	// (0x000502bb) phacti_term_pane_t2_ParamLimits

0xc480,	// (0x000502bb) phacti_term_pane_t2

0x0001,

0xfd6c,	// (0x00053ba7) phacti_term_pane_t_ParamLimits

0xfd6c,	// (0x00053ba7) phacti_term_pane_t

0x984f,	// (0x0004d68a) aid_size_list_single_double

0x985b,	// (0x0004d696) popup_ezdial_listscroll_window

0x9877,	// (0x0004d6b2) popup_number_entry_window_cp01

0xc99f,	// (0x000507da) bg_popup_call_pane_cp09

0x9885,	// (0x0004d6c0) ezdial_list_pane

0x988d,	// (0x0004d6c8) scroll_pane_cp23

0xddc6,	// (0x00051c01) bg_button_pane_cp028_ParamLimits

0xddc6,	// (0x00051c01) bg_button_pane_cp028

0x9895,	// (0x0004d6d0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9895,	// (0x0004d6d0) cmail_ddmenu_btn01_pane_g1

0x98a4,	// (0x0004d6df) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x98a4,	// (0x0004d6df) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfde4,	// (0x00053c1f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfde4,	// (0x00053c1f) cmail_ddmenu_btn01_pane_g

0x98b4,	// (0x0004d6ef) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x98b4,	// (0x0004d6ef) cmail_ddmenu_btn01_pane_t1

0xddc6,	// (0x00051c01) bg_button_pane_cp029_ParamLimits

0xddc6,	// (0x00051c01) bg_button_pane_cp029

0x98c9,	// (0x0004d704) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x98c9,	// (0x0004d704) cmail_ddmenu_btn02_pane_g1

0x98e4,	// (0x0004d71f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x98e4,	// (0x0004d71f) cmail_ddmenu_btn02_pane_t1

0xa80f,	// (0x0004e64a) bg_button_pane_cp031_ParamLimits

0xa80f,	// (0x0004e64a) bg_button_pane_cp031

0x98c9,	// (0x0004d704) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x98c9,	// (0x0004d704) cmail_ddmenu_btn03_pane_g1

0x98e4,	// (0x0004d71f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x98e4,	// (0x0004d71f) cmail_ddmenu_btn03_pane_t1

0x612f,	// (0x00049f6a) cell_dialer2_keypad_pane_t1_ParamLimits

0x6149,	// (0x00049f84) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6149,	// (0x00049f84) cell_dialer2_keypad_pane_t1_copy1

0x82b9,	// (0x0004c0f4) ncimui_group_button_pane

0xa80f,	// (0x0004e64a) main_sp_fs_calendar_pane_ParamLimits

0x92ec,	// (0x0004d127) list_single_cmail_header_caption_pane_ParamLimits

0x7610,	// (0x0004b44b) aid_recal_txt_sm_pane

0xa796,	// (0x0004e5d1) mian_recal_day_pane

0x955d,	// (0x0004d398) popup_sp_fs_cale_preview_window_ParamLimits

0xa796,	// (0x0004e5d1) list_recal_day_pane

0x9925,	// (0x0004d760) list_single_recal_day_pane_ParamLimits

0x9925,	// (0x0004d760) list_single_recal_day_pane

0x9937,	// (0x0004d772) list_single_recal_day_pane_g1_ParamLimits

0x9937,	// (0x0004d772) list_single_recal_day_pane_g1

0x9943,	// (0x0004d77e) list_single_recal_day_pane_g2_ParamLimits

0x9943,	// (0x0004d77e) list_single_recal_day_pane_g2

0x9953,	// (0x0004d78e) list_single_recal_day_pane_g3_ParamLimits

0x9953,	// (0x0004d78e) list_single_recal_day_pane_g3

0x995f,	// (0x0004d79a) list_single_recal_day_pane_g4_ParamLimits

0x995f,	// (0x0004d79a) list_single_recal_day_pane_g4

0x9975,	// (0x0004d7b0) list_single_recal_day_pane_g5_ParamLimits

0x9975,	// (0x0004d7b0) list_single_recal_day_pane_g5

0x998f,	// (0x0004d7ca) list_single_recal_day_pane_g6_ParamLimits

0x998f,	// (0x0004d7ca) list_single_recal_day_pane_g6

0x0004,

0xfdf3,	// (0x00053c2e) list_single_recal_day_pane_g_ParamLimits

0xfdf3,	// (0x00053c2e) list_single_recal_day_pane_g

0x99a6,	// (0x0004d7e1) list_single_recal_day_pane_t1

0x99b8,	// (0x0004d7f3) list_single_recal_day_pane_t2

0x0001,

0xfdfe,	// (0x00053c39) list_single_recal_day_pane_t

0x99cd,	// (0x0004d808) ncimui_query_button_pane_ParamLimits

0x99cd,	// (0x0004d808) ncimui_query_button_pane

0x99dd,	// (0x0004d818) ncimui_query_button_pane_t1_ParamLimits

0x99dd,	// (0x0004d818) ncimui_query_button_pane_t1

0x99f0,	// (0x0004d82b) ncimui_query_button_pane_t2_ParamLimits

0x99f0,	// (0x0004d82b) ncimui_query_button_pane_t2

0x0001,

0xfe03,	// (0x00053c3e) ncimui_query_button_pane_t_ParamLimits

0xfe03,	// (0x00053c3e) ncimui_query_button_pane_t

0x9a03,	// (0x0004d83e) query_button_pane_ParamLimits

0x9a03,	// (0x0004d83e) query_button_pane

0xa796,	// (0x0004e5d1) bg_button_pane_cp0028

0x9a16,	// (0x0004d851) query_button_pane_t1

0x4168,	// (0x00047fa3) main_tport_pane_ParamLimits

0x913f,	// (0x0004cf7a) bg_popup_window_pane_cp01_ParamLimits

0x913f,	// (0x0004cf7a) bg_popup_window_pane_cp01

0x9159,	// (0x0004cf94) heading_pane_cp08_ParamLimits

0x9159,	// (0x0004cf94) heading_pane_cp08

0x916d,	// (0x0004cfa8) heading_pane_cp07_ParamLimits

0x916d,	// (0x0004cfa8) heading_pane_cp07

0x924c,	// (0x0004d087) cell_tport_appsw_pane_g2

0x0002,

0xfd4f,	// (0x00053b8a) cell_tport_appsw_pane_g

0x07bf,	// (0x000445fa) input_candi_list_open_g1

0xb6f6,	// (0x0004f531) list_cale_time_pane_g6_ParamLimits

0xb6f6,	// (0x0004f531) list_cale_time_pane_g6

0x4f50,	// (0x00048d8b) aid_size_touch_calib_1_ParamLimits

0x4f50,	// (0x00048d8b) aid_size_touch_calib_1

0x4f62,	// (0x00048d9d) aid_size_touch_calib_2_ParamLimits

0x4f62,	// (0x00048d9d) aid_size_touch_calib_2

0x4f7a,	// (0x00048db5) aid_size_touch_calib_3_ParamLimits

0x4f7a,	// (0x00048db5) aid_size_touch_calib_3

0x4f98,	// (0x00048dd3) aid_size_touch_calib_4_ParamLimits

0x4f98,	// (0x00048dd3) aid_size_touch_calib_4

0x4fb0,	// (0x00048deb) main_touch_calib_button_group_pane_ParamLimits

0x4fb0,	// (0x00048deb) main_touch_calib_button_group_pane

0x4fc8,	// (0x00048e03) main_touch_calib_pane_g1_ParamLimits

0x4fda,	// (0x00048e15) main_touch_calib_pane_g2_ParamLimits

0x4fec,	// (0x00048e27) main_touch_calib_pane_g3_ParamLimits

0x4ffe,	// (0x00048e39) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0005359c) main_touch_calib_pane_g_ParamLimits

0x5010,	// (0x00048e4b) main_touch_calib_pane_t1_ParamLimits

0x502a,	// (0x00048e65) main_touch_calib_pane_t2_ParamLimits

0x5044,	// (0x00048e7f) main_touch_calib_pane_t3_ParamLimits

0x5058,	// (0x00048e93) main_touch_calib_pane_t4_ParamLimits

0x506e,	// (0x00048ea9) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000535a5) main_touch_calib_pane_t_ParamLimits

0xe53a,	// (0x00052375) list_single_fp_cale_pane_g3_ParamLimits

0xe53a,	// (0x00052375) list_single_fp_cale_pane_g3

0xa80f,	// (0x0004e64a) bg_button_pane_cp012_ParamLimits

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp03_ParamLimits

0x7107,	// (0x0004af42) cell_vitu2_function_top_pane_g1_ParamLimits

0xa80f,	// (0x0004e64a) bg_vkb2_func_pane_cp04_ParamLimits

0x8247,	// (0x0004c082) main_ncimui_button_group_pane_ParamLimits

0x8247,	// (0x0004c082) main_ncimui_button_group_pane

0x82a7,	// (0x0004c0e2) main_ncimui_pane_t3_ParamLimits

0x82a7,	// (0x0004c0e2) main_ncimui_pane_t3

0x9489,	// (0x0004d2c4) phacti_button_group_pane

0x984f,	// (0x0004d68a) aid_size_list_single_double_ParamLimits

0x985b,	// (0x0004d696) popup_ezdial_listscroll_window_ParamLimits

0x9877,	// (0x0004d6b2) popup_number_entry_window_cp01_ParamLimits

0x9a24,	// (0x0004d85f) phacti_button_pane_ParamLimits

0x9a24,	// (0x0004d85f) phacti_button_pane

0xa796,	// (0x0004e5d1) bg_button_pane_cp14

0x9a35,	// (0x0004d870) phacti_button_pane_t1

0x9a43,	// (0x0004d87e) main_touch_calib_button_pane_ParamLimits

0x9a43,	// (0x0004d87e) main_touch_calib_button_pane

0xafb5,	// (0x0004edf0) bg_button_pane_cp18_ParamLimits

0xafb5,	// (0x0004edf0) bg_button_pane_cp18

0x9a58,	// (0x0004d893) main_touch_calib_button_pane_t1_ParamLimits

0x9a58,	// (0x0004d893) main_touch_calib_button_pane_t1

0x9a6e,	// (0x0004d8a9) main_touch_calib_button_pane_t2_ParamLimits

0x9a6e,	// (0x0004d8a9) main_touch_calib_button_pane_t2

0x0001,

0xfe08,	// (0x00053c43) main_touch_calib_button_pane_t_ParamLimits

0xfe08,	// (0x00053c43) main_touch_calib_button_pane_t

0xa796,	// (0x0004e5d1) cell_ncimui_button_pane

0xa796,	// (0x0004e5d1) bg_button_pane_cp032

0x9a8c,	// (0x0004d8c7) cell_ncimui_button_pane_t1

0xbdcf,	// (0x0004fc0a) image3_infobar_pane_ParamLimits

0xbdcf,	// (0x0004fc0a) image3_infobar_pane

0x89f3,	// (0x0004c82e) fs_bigclock_status_pane_ParamLimits

0x89f3,	// (0x0004c82e) fs_bigclock_status_pane

0x8a00,	// (0x0004c83b) main_fs_bigclock_clock_pane_ParamLimits

0x8a00,	// (0x0004c83b) main_fs_bigclock_clock_pane

0x8a14,	// (0x0004c84f) main_fs_bigclock_indi_pane_ParamLimits

0x8a14,	// (0x0004c84f) main_fs_bigclock_indi_pane

0x8a2f,	// (0x0004c86a) main_fs_bigclock_swipe_pane_ParamLimits

0x8a2f,	// (0x0004c86a) main_fs_bigclock_swipe_pane

0xa796,	// (0x0004e5d1) main_fs_clock_dumped_data

0x8a53,	// (0x0004c88e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8a53,	// (0x0004c88e) list_single_fs_bigclock_indicator_pane_g1

0x8a7d,	// (0x0004c8b8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8a7d,	// (0x0004c8b8) list_single_fs_bigclock_indicator_pane_g2

0x8a97,	// (0x0004c8d2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8a97,	// (0x0004c8d2) list_single_fs_bigclock_indicator_pane_g3

0x8ab1,	// (0x0004c8ec) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8ab1,	// (0x0004c8ec) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc36,	// (0x00053a71) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc36,	// (0x00053a71) list_single_fs_bigclock_indicator_pane_g

0x8adc,	// (0x0004c917) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8adc,	// (0x0004c917) list_single_fs_bigclock_indicator_pane_t1

0x8b04,	// (0x0004c93f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8b04,	// (0x0004c93f) list_single_fs_bigclock_indicator_pane_t2

0x8b2c,	// (0x0004c967) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8b2c,	// (0x0004c967) list_single_fs_bigclock_indicator_pane_t3

0x8b54,	// (0x0004c98f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8b54,	// (0x0004c98f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc41,	// (0x00053a7c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc41,	// (0x00053a7c) list_single_fs_bigclock_indicator_pane_t

0x9a9a,	// (0x0004d8d5) image3_infobar_fav_pane_ParamLimits

0x9a9a,	// (0x0004d8d5) image3_infobar_fav_pane

0x9aaa,	// (0x0004d8e5) image3_infobar_loc_pane_ParamLimits

0x9aaa,	// (0x0004d8e5) image3_infobar_loc_pane

0x9ac0,	// (0x0004d8fb) image3_infobar_time_pane_ParamLimits

0x9ac0,	// (0x0004d8fb) image3_infobar_time_pane

0xe1fe,	// (0x00052039) image3_infobar_time_pane_g1

0x9ad0,	// (0x0004d90b) image3_infobar_time_pane_t1

0xe1fe,	// (0x00052039) image3_infobar_loc_pane_g1

0x9ade,	// (0x0004d919) image3_infobar_loc_pane_g2

0x0001,

0xfe0d,	// (0x00053c48) image3_infobar_loc_pane_g

0x9ae6,	// (0x0004d921) image3_infobar_loc_pane_t1

0xe1fe,	// (0x00052039) image3_infobar_fav_pane_g1

0x9af4,	// (0x0004d92f) image3_infobar_fav_pane_g2

0x0001,

0xfe12,	// (0x00053c4d) image3_infobar_fav_pane_g

0x9afc,	// (0x0004d937) fs_bigclock_status_battery_pane

0x9b05,	// (0x0004d940) fs_bigclock_status_signal_pane

0x9b0e,	// (0x0004d949) fs_bigclock_status_title_pane

0x9b17,	// (0x0004d952) fs_bigclock_status_signal_pane_g1

0x9b20,	// (0x0004d95b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe17,	// (0x00053c52) fs_bigclock_status_signal_pane_g

0x9b28,	// (0x0004d963) fs_bigclock_status_battery_pane_g1

0x9b31,	// (0x0004d96c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe1c,	// (0x00053c57) fs_bigclock_status_battery_pane_g

0x9b39,	// (0x0004d974) fs_bigclock_status_title_pane_t1

0xe1fe,	// (0x00052039) main_fs_bigclock_clock_pane_g1

0x9b47,	// (0x0004d982) main_fs_bigclock_clock_pane_g2

0x9b47,	// (0x0004d982) main_fs_bigclock_clock_pane_g3

0x9b47,	// (0x0004d982) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe21,	// (0x00053c5c) main_fs_bigclock_clock_pane_g

0x9b4f,	// (0x0004d98a) main_fs_bigclock_clock_pane_t1

0x9b5d,	// (0x0004d998) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe2a,	// (0x00053c65) main_fs_bigclock_clock_pane_t

0x9b6c,	// (0x0004d9a7) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9b6c,	// (0x0004d9a7) list_single_fs_bigclock_indicator_pane

0x9b7d,	// (0x0004d9b8) list_single_fs_bigclock_pane_ParamLimits

0x9b7d,	// (0x0004d9b8) list_single_fs_bigclock_pane

0x9be9,	// (0x0004da24) main_fs_bigclock_indicator_pane_t1

0x9bf8,	// (0x0004da33) list_single_fs_bigclock_pane_g1

0x9c00,	// (0x0004da3b) list_single_fs_bigclock_pane_t1

0xe1fe,	// (0x00052039) main_fs_bigclock_swipe_pane_g1

0x9c43,	// (0x0004da7e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe3b,	// (0x00053c76) main_fs_bigclock_swipe_pane_g

0x9c4b,	// (0x0004da86) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x9c4b,	// (0x0004da86) main_fs_bigclock_swipe_pane_t1

0x2f03,	// (0x00046d3e) call_type_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_btmg_pane

0xc51f,	// (0x0005035a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc51f,	// (0x0005035a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdae,	// (0x00053be9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdae,	// (0x00053be9) list_single_cale_mrui_row_pane_g

0x9915,	// (0x0004d750) list_recal_vselct_arw_lo_pane

0x991d,	// (0x0004d758) list_recal_vselct_arw_up_pane

0x7607,	// (0x0004b442) list_recal_vselct_pane

0x9c68,	// (0x0004daa3) btmg_button_pane

0x9c72,	// (0x0004daad) main_btmg_pane_g1

0xa796,	// (0x0004e5d1) bg_button_pane_cp044

0x9c7c,	// (0x0004dab7) btmg_button_pane_t1

0xddbe,	// (0x00051bf9) aid_listscroll_gen

0xa80f,	// (0x0004e64a) main_cntbar_detail_pane

0x92ab,	// (0x0004d0e6) list_cmail_folder_pane

0x92c5,	// (0x0004d100) sp_fs_scroll_pane_cp03_ParamLimits

0x1103,	// (0x00044f3e) list_single_fs_dyc_pane_cp01_ParamLimits

0x1103,	// (0x00044f3e) list_single_fs_dyc_pane_cp01

0x9c8a,	// (0x0004dac5) aid_size_cmail_indent

0xc59b,	// (0x000503d6) list_single_dyc_row_pane_cp01

0x9cc3,	// (0x0004dafe) cntbar_detail_list_pane_ParamLimits

0x9cc3,	// (0x0004dafe) cntbar_detail_list_pane

0x9d15,	// (0x0004db50) main_cntbar_detail_cont_pane_ParamLimits

0x9d15,	// (0x0004db50) main_cntbar_detail_cont_pane

0x2ef7,	// (0x00046d32) scroll_pane_cp032_ParamLimits

0x2ef7,	// (0x00046d32) scroll_pane_cp032

0x9d29,	// (0x0004db64) cntbar_detail_list_event_pane_ParamLimits

0x9d29,	// (0x0004db64) cntbar_detail_list_event_pane

0x9cd5,	// (0x0004db10) cntbar_detail_list_shct_pane

0xb551,	// (0x0004f38c) aid_list_gen

0x9d39,	// (0x0004db74) aid_scroll

0x9d42,	// (0x0004db7d) aid_size_touch_scroll_bar

0x9d4b,	// (0x0004db86) aid_list_double

0x9d54,	// (0x0004db8f) aid_list_single

0x9d5e,	// (0x0004db99) aid_list_single_lg

0xc5a4,	// (0x000503df) aid_list_z_g_a_sm

0xc5ac,	// (0x000503e7) aid_list_z_g_d

0x111e,	// (0x00044f59) aid_txt_z_prm

0x112e,	// (0x00044f69) aid_txt_z_prm_cp01

0x113c,	// (0x00044f77) aid_txt_z_sec

0x9d67,	// (0x0004dba2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9d67,	// (0x0004dba2) main_cntbar_detail_cont_pane_g1

0x9d7b,	// (0x0004dbb6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9d7b,	// (0x0004dbb6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe40,	// (0x00053c7b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe40,	// (0x00053c7b) main_cntbar_detail_cont_pane_g

0x9d8b,	// (0x0004dbc6) main_cntbar_detail_cont_pane_t1

0x9d99,	// (0x0004dbd4) main_cntbar_detail_cont_pane_t2

0x9da7,	// (0x0004dbe2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe45,	// (0x00053c80) main_cntbar_detail_cont_pane_t

0x9db5,	// (0x0004dbf0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9db5,	// (0x0004dbf0) cell_cntbar_detail_list_shct_pane

0x9dc7,	// (0x0004dc02) cntbar_detail_list_shct_pane_g1

0x9dd0,	// (0x0004dc0b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe4c,	// (0x00053c87) cntbar_detail_list_shct_pane_g

0x9dd9,	// (0x0004dc14) cntbar_detail_list_event_pane_g1_ParamLimits

0x9dd9,	// (0x0004dc14) cntbar_detail_list_event_pane_g1

0x9de5,	// (0x0004dc20) cntbar_detail_list_event_pane_g2_ParamLimits

0x9de5,	// (0x0004dc20) cntbar_detail_list_event_pane_g2

0x0005,

0xfe51,	// (0x00053c8c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe51,	// (0x00053c8c) cntbar_detail_list_event_pane_g

0x9e53,	// (0x0004dc8e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9e53,	// (0x0004dc8e) cntbar_detail_list_event_pane_t1

0x9e68,	// (0x0004dca3) cntbar_detail_list_event_pane_t2_ParamLimits

0x9e68,	// (0x0004dca3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe5e,	// (0x00053c99) cntbar_detail_list_event_pane_t_ParamLimits

0xfe5e,	// (0x00053c99) cntbar_detail_list_event_pane_t

0xe1fe,	// (0x00052039) cell_cntbar_detail_list_shct_pane_g1

0x32bd,	// (0x000470f8) navi_pane_mv_g3

0xa80f,	// (0x0004e64a) main_cntbar_detail_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_notif_wgt_pane

0xbbe7,	// (0x0004fa22) aid_tch_main_mp4_pane_g4

0xbdc5,	// (0x0004fc00) popup_slider_window_cp02

0x990b,	// (0x0004d746) list_recal_day_event_pane

0x9c93,	// (0x0004dace) cntbar_detail_btn_pane_ParamLimits

0x9c93,	// (0x0004dace) cntbar_detail_btn_pane

0x9cab,	// (0x0004dae6) cntbar_detail_btn_pane_cp01_ParamLimits

0x9cab,	// (0x0004dae6) cntbar_detail_btn_pane_cp01

0x9cd5,	// (0x0004db10) cntbar_detail_list_shct_pane_ParamLimits

0x9ce5,	// (0x0004db20) cntbar_detail_pane_g1_ParamLimits

0x9ce5,	// (0x0004db20) cntbar_detail_pane_g1

0x9cf9,	// (0x0004db34) cntbar_detail_pane_t1_ParamLimits

0x9cf9,	// (0x0004db34) cntbar_detail_pane_t1

0x9df1,	// (0x0004dc2c) cntbar_detail_list_event_pane_g3_ParamLimits

0x9df1,	// (0x0004dc2c) cntbar_detail_list_event_pane_g3

0x9e09,	// (0x0004dc44) cntbar_detail_list_event_pane_g4_ParamLimits

0x9e09,	// (0x0004dc44) cntbar_detail_list_event_pane_g4

0x9e21,	// (0x0004dc5c) cntbar_detail_list_event_pane_g5_ParamLimits

0x9e21,	// (0x0004dc5c) cntbar_detail_list_event_pane_g5

0x9e39,	// (0x0004dc74) cntbar_detail_list_event_pane_g6_ParamLimits

0x9e39,	// (0x0004dc74) cntbar_detail_list_event_pane_g6

0x9e7d,	// (0x0004dcb8) cntbar_detail_list_event_pane_t3_ParamLimits

0x9e7d,	// (0x0004dcb8) cntbar_detail_list_event_pane_t3

0x9e8f,	// (0x0004dcca) popup_notif_wgt_window_ParamLimits

0x9e8f,	// (0x0004dcca) popup_notif_wgt_window

0x9ea8,	// (0x0004dce3) popup_submenu_window_cp01_ParamLimits

0x9ea8,	// (0x0004dce3) popup_submenu_window_cp01

0xc99f,	// (0x000507da) bg_popup_window_pane_cp10

0x9ebc,	// (0x0004dcf7) listscroll_notif_wgt_pane

0x9ece,	// (0x0004dd09) list_notif_wgt_window

0x9ed7,	// (0x0004dd12) scroll_pane_cp033

0x9ee0,	// (0x0004dd1b) list_notif_wgt_row_pane_ParamLimits

0x9ee0,	// (0x0004dd1b) list_notif_wgt_row_pane

0x9ef0,	// (0x0004dd2b) aid_size_list_notif_wgt_del

0x9efd,	// (0x0004dd38) list_notif_wgt_row_pane_g1

0x9f09,	// (0x0004dd44) list_notif_wgt_row_pane_g2

0x9f15,	// (0x0004dd50) list_notif_wgt_row_pane_g3

0x0002,

0xfe65,	// (0x00053ca0) list_notif_wgt_row_pane_g

0x9f22,	// (0x0004dd5d) list_notif_wgt_row_pane_t1

0x9f37,	// (0x0004dd72) list_notif_wgt_row_pane_t2

0x9f49,	// (0x0004dd84) list_notif_wgt_row_pane_t3

0x0002,

0xfe6c,	// (0x00053ca7) list_notif_wgt_row_pane_t

0xee4e,	// (0x00052c89) list_recal_day_event_pane_g1

0x9f5b,	// (0x0004dd96) list_recal_day_event_pane_t1

0xa796,	// (0x0004e5d1) bg_button_pane_cp045

0x9f6a,	// (0x0004dda5) cntbar_detail_btn_pane_t1

0xddc6,	// (0x00051c01) main_callh_pane_ParamLimits

0xddc6,	// (0x00051c01) main_callh_pane

0xa796,	// (0x0004e5d1) main_coverflow0_pane

0xa796,	// (0x0004e5d1) main_wgtman_pane

0x8a3d,	// (0x0004c878) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8a3d,	// (0x0004c878) main_fs_bigclock_unlock_btn_pane

0x9244,	// (0x0004d07f) bg_button_pane_cp16

0x9254,	// (0x0004d08f) cell_tport_appsw_pane_g3

0x9f78,	// (0x0004ddb3) cf0_flow_pane_ParamLimits

0x9f78,	// (0x0004ddb3) cf0_flow_pane

0x9f8d,	// (0x0004ddc8) listscroll_cf0_pane

0x9f98,	// (0x0004ddd3) main_cf0_pane_g1

0x9fa2,	// (0x0004dddd) main_cf0_pane_t1_ParamLimits

0x9fa2,	// (0x0004dddd) main_cf0_pane_t1

0x9fb9,	// (0x0004ddf4) main_cf0_pane_t2_ParamLimits

0x9fb9,	// (0x0004ddf4) main_cf0_pane_t2

0x0001,

0xfe73,	// (0x00053cae) main_cf0_pane_t_ParamLimits

0xfe73,	// (0x00053cae) main_cf0_pane_t

0x9fd0,	// (0x0004de0b) scroll_pane_cp11

0x9fdb,	// (0x0004de16) cf0_flow_pane_g1

0x9fe7,	// (0x0004de22) cf0_flow_pane_g2

0x0001,

0xfe78,	// (0x00053cb3) cf0_flow_pane_g

0x9ff3,	// (0x0004de2e) cf0_flow_pane_t1

0xa796,	// (0x0004e5d1) main_call6_pane

0xa796,	// (0x0004e5d1) main_calllock_pane

0xa005,	// (0x0004de40) call6_btn_grp_pane_ParamLimits

0xa005,	// (0x0004de40) call6_btn_grp_pane

0xa01f,	// (0x0004de5a) call6_pane_g1_ParamLimits

0xa01f,	// (0x0004de5a) call6_pane_g1

0xa035,	// (0x0004de70) popup_call6_1st_window_ParamLimits

0xa035,	// (0x0004de70) popup_call6_1st_window

0xa046,	// (0x0004de81) popup_call6_2nd_window_ParamLimits

0xa046,	// (0x0004de81) popup_call6_2nd_window

0xa057,	// (0x0004de92) cell_call6_btn_pane_ParamLimits

0xa057,	// (0x0004de92) cell_call6_btn_pane

0xc99f,	// (0x000507da) bg_popup_call2_in_pane_cp03

0xa06b,	// (0x0004dea6) popup_call6_1st_window_g1

0xa073,	// (0x0004deae) popup_call6_1st_window_g2

0xa07b,	// (0x0004deb6) popup_call6_1st_window_g3

0x0002,

0xfe7d,	// (0x00053cb8) popup_call6_1st_window_g

0xa083,	// (0x0004debe) popup_call6_1st_window_t1

0xa092,	// (0x0004decd) popup_call6_1st_window_t2

0xa0a2,	// (0x0004dedd) popup_call6_1st_window_t3

0x0002,

0xfe84,	// (0x00053cbf) popup_call6_1st_window_t

0xc99f,	// (0x000507da) bg_popup_call2_in_pane_cp04

0xa06b,	// (0x0004dea6) popup_call6_2nd_window_g1

0xa073,	// (0x0004deae) popup_call6_2nd_window_g2

0xa07b,	// (0x0004deb6) popup_call6_2nd_window_g3

0x0002,

0xfe7d,	// (0x00053cb8) popup_call6_2nd_window_g

0xa083,	// (0x0004debe) popup_call6_2nd_window_t1

0xa796,	// (0x0004e5d1) bg_button_pane_cp15

0xa0b2,	// (0x0004deed) cell_call6_btn_pane_g1

0xa0bb,	// (0x0004def6) cell_call6_btn_pane_t1

0xa0ca,	// (0x0004df05) listscroll_wgtman_pane_ParamLimits

0xa0ca,	// (0x0004df05) listscroll_wgtman_pane

0xa0ed,	// (0x0004df28) wgtman_btn_pane_ParamLimits

0xa0ed,	// (0x0004df28) wgtman_btn_pane

0xc865,	// (0x000506a0) aid_scroll_copy1

0xa130,	// (0x0004df6b) list_wgtman_pane

0xa13a,	// (0x0004df75) wgtman_btn_pane_g1_ParamLimits

0xa13a,	// (0x0004df75) wgtman_btn_pane_g1

0xa166,	// (0x0004dfa1) wgtman_btn_pane_t1_ParamLimits

0xa166,	// (0x0004dfa1) wgtman_btn_pane_t1

0xa1a3,	// (0x0004dfde) wgtman_btn_pane_t2_ParamLimits

0xa1a3,	// (0x0004dfde) wgtman_btn_pane_t2

0x0001,

0xfe8b,	// (0x00053cc6) wgtman_btn_pane_t_ParamLimits

0xfe8b,	// (0x00053cc6) wgtman_btn_pane_t

0xa1ba,	// (0x0004dff5) listrow_wgtman_pane_ParamLimits

0xa1ba,	// (0x0004dff5) listrow_wgtman_pane

0xa1ce,	// (0x0004e009) listrow_wgtman_pane_g1

0xa1db,	// (0x0004e016) listrow_wgtman_pane_g2

0x0001,

0xfe90,	// (0x00053ccb) listrow_wgtman_pane_g

0x114a,	// (0x00044f85) listrow_wgtman_pane_t1

0x1162,	// (0x00044f9d) listrow_wgtman_pane_t2

0x0001,

0xfe95,	// (0x00053cd0) listrow_wgtman_pane_t

0x1188,	// (0x00044fc3) wait_bar_pane_cp09

0xa1f9,	// (0x0004e034) main_calllock_btn_pane

0xa203,	// (0x0004e03e) main_calllock_pane_g1

0xa796,	// (0x0004e5d1) bg_button_pane_cp17

0xa20f,	// (0x0004e04a) main_calllock_btn_pane_g1

0xa218,	// (0x0004e053) main_calllock_btn_pane_t1

0xa796,	// (0x0004e5d1) main_dialer3_pane

0xa796,	// (0x0004e5d1) main_fmrd2_pane

0xe1fe,	// (0x00052039) main_fs_bigclock_unlock_btn_pane_g1

0xa22f,	// (0x0004e06a) main_fs_bigclock_unlock_btn_pane_t1

0xa23d,	// (0x0004e078) area_fmrd2_info_pane_ParamLimits

0xa23d,	// (0x0004e078) area_fmrd2_info_pane

0xa24e,	// (0x0004e089) area_fmrd2_visual_pane_ParamLimits

0xa24e,	// (0x0004e089) area_fmrd2_visual_pane

0xa25c,	// (0x0004e097) fmrd2_indi_pane_ParamLimits

0xa25c,	// (0x0004e097) fmrd2_indi_pane

0xa269,	// (0x0004e0a4) area_fmrd2_visual_pane_g1

0xa271,	// (0x0004e0ac) area_fmrd2_visual_pane_t1

0xa281,	// (0x0004e0bc) area_fmrd2_visual_pane_t2

0xa291,	// (0x0004e0cc) area_fmrd2_visual_pane_t3

0x0002,

0xfe9f,	// (0x00053cda) area_fmrd2_visual_pane_t

0xa2a1,	// (0x0004e0dc) area_fmrd2_info_pane_g1

0xa2a9,	// (0x0004e0e4) area_fmrd2_info_pane_t1

0xa2b9,	// (0x0004e0f4) area_fmrd2_info_pane_t2

0xa2c9,	// (0x0004e104) area_fmrd2_info_pane_t3

0xa2d9,	// (0x0004e114) area_fmrd2_info_pane_t4

0x0003,

0xfea6,	// (0x00053ce1) area_fmrd2_info_pane_t

0xa2e9,	// (0x0004e124) fmrd2_indi_pane_t1

0xa2f9,	// (0x0004e134) fmrd2_indi_pane_t2

0xa309,	// (0x0004e144) fmrd2_indi_pane_t3

0x0002,

0xfeaf,	// (0x00053cea) fmrd2_indi_pane_t

0x8ac0,	// (0x0004c8fb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8ac0,	// (0x0004c8fb) list_single_fs_bigclock_indicator_pane_g5

0x8b69,	// (0x0004c9a4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8b69,	// (0x0004c9a4) list_single_fs_bigclock_indicator_pane_t5

0x9508,	// (0x0004d343) aid_cell_bcale_month_pane_ParamLimits

0x9508,	// (0x0004d343) aid_cell_bcale_month_pane

0x9520,	// (0x0004d35b) bcale_month_pane_ParamLimits

0x9520,	// (0x0004d35b) bcale_month_pane

0x9537,	// (0x0004d372) bcale_preview_pane_ParamLimits

0x9537,	// (0x0004d372) bcale_preview_pane

0x9c00,	// (0x0004da3b) list_single_fs_bigclock_pane_t1_ParamLimits

0x9c1f,	// (0x0004da5a) list_single_fs_bigclock_pane_t2_ParamLimits

0x9c1f,	// (0x0004da5a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe36,	// (0x00053c71) list_single_fs_bigclock_pane_t_ParamLimits

0xfe36,	// (0x00053c71) list_single_fs_bigclock_pane_t

0xa227,	// (0x0004e062) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe9a,	// (0x00053cd5) main_fs_bigclock_unlock_btn_pane_g

0xa319,	// (0x0004e154) aid_dia3_key_size_ParamLimits

0xa319,	// (0x0004e154) aid_dia3_key_size

0xa328,	// (0x0004e163) aid_dia3_listrow_size_ParamLimits

0xa328,	// (0x0004e163) aid_dia3_listrow_size

0xa33d,	// (0x0004e178) dia3_keypad_fun_pane_ParamLimits

0xa33d,	// (0x0004e178) dia3_keypad_fun_pane

0xa359,	// (0x0004e194) dia3_keypad_num_pane_ParamLimits

0xa359,	// (0x0004e194) dia3_keypad_num_pane

0xa372,	// (0x0004e1ad) dia3_listscroll_pane_ParamLimits

0xa372,	// (0x0004e1ad) dia3_listscroll_pane

0xa385,	// (0x0004e1c0) dia3_numentry_pane_ParamLimits

0xa385,	// (0x0004e1c0) dia3_numentry_pane

0xa399,	// (0x0004e1d4) dia3_list_pane

0xa3a4,	// (0x0004e1df) scroll_pane_cp12

0xa796,	// (0x0004e5d1) bg_dia3_numentry_pane

0xa3af,	// (0x0004e1ea) dia3_numentry_pane_t1

0xa3be,	// (0x0004e1f9) cell_dia3_key_num_pane

0xa3c6,	// (0x0004e201) cell_dia3_key0_fun_pane_ParamLimits

0xa3c6,	// (0x0004e201) cell_dia3_key0_fun_pane

0xa3da,	// (0x0004e215) cell_dia3_key1_fun_pane_ParamLimits

0xa3da,	// (0x0004e215) cell_dia3_key1_fun_pane

0xa3f2,	// (0x0004e22d) dia3_listrow_pane

0x84ca,	// (0x0004c305) bg_dia3_numentry_pane_g1

0xa796,	// (0x0004e5d1) bg_button_pane_cp21

0xa404,	// (0x0004e23f) cell_dia3_key_num_pane_t1

0xa412,	// (0x0004e24d) cell_dia3_key_num_pane_t2

0xa421,	// (0x0004e25c) cell_dia3_key_num_pane_t3

0xa430,	// (0x0004e26b) cell_dia3_key_num_pane_t4

0x0003,

0xfeb6,	// (0x00053cf1) cell_dia3_key_num_pane_t

0xa796,	// (0x0004e5d1) bg_button_pane_cp19

0xa43f,	// (0x0004e27a) cell_dia3_key0_fun_pane_g1

0xa796,	// (0x0004e5d1) bg_button_pane_cp20

0xa447,	// (0x0004e282) cell_dia3_key1_fun_pane_g1

0xa44f,	// (0x0004e28a) area_left_week_number_pane

0xa45b,	// (0x0004e296) area_top_day_name_pane

0xa467,	// (0x0004e2a2) frame_month_view_pane

0xa473,	// (0x0004e2ae) grid_month_view_pane

0xa47f,	// (0x0004e2ba) cell_top_day_name_pane_ParamLimits

0xa47f,	// (0x0004e2ba) cell_top_day_name_pane

0xa49b,	// (0x0004e2d6) cell_area_left_week_number_pane_ParamLimits

0xa49b,	// (0x0004e2d6) cell_area_left_week_number_pane

0xa4b1,	// (0x0004e2ec) cell_month_view_pane_ParamLimits

0xa4b1,	// (0x0004e2ec) cell_month_view_pane

0xa4d2,	// (0x0004e30d) frm_month_g1

0xa4db,	// (0x0004e316) frm_month_g2

0xa4e5,	// (0x0004e320) frm_month_g3

0xa4ef,	// (0x0004e32a) frm_month_g4

0xa4f9,	// (0x0004e334) frm_month_g5

0xa503,	// (0x0004e33e) frm_month_g6

0xa50f,	// (0x0004e34a) frm_month_g7

0xa51b,	// (0x0004e356) frm_month_g8

0xc5b4,	// (0x000503ef) frm_month_g9

0xc5bd,	// (0x000503f8) frm_month_g10

0xc5c6,	// (0x00050401) frm_month_g11

0xc5cf,	// (0x0005040a) frm_month_g12

0xc5d8,	// (0x00050413) frm_month_g13

0xc5e3,	// (0x0005041e) frm_month_g14

0xc5ee,	// (0x00050429) frm_month_g15

0xc5f9,	// (0x00050434) frm_month_g16

0x000f,

0xfebf,	// (0x00053cfa) frm_month_g

0xa524,	// (0x0004e35f) cell_top_day_name_pane_t1

0xa533,	// (0x0004e36e) cell_area_left_week_number_pane_g1

0xa53b,	// (0x0004e376) cell_area_left_week_number_pane_t1

0xe1fe,	// (0x00052039) cell_month_view_pane_g1

0xa54a,	// (0x0004e385) cell_month_view_pane_t1

0xa796,	// (0x0004e5d1) main_fps_pane

0x9038,	// (0x0004ce73) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x9038,	// (0x0004ce73) cmail_ddmenu_btn02_pane_cp1

0x9054,	// (0x0004ce8f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9054,	// (0x0004ce8f) cmail_ddmenu_btn02_pane_cp2

0x98d8,	// (0x0004d713) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x98d8,	// (0x0004d713) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfde9,	// (0x00053c24) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfde9,	// (0x00053c24) cmail_ddmenu_btn02_pane_g

0x98f9,	// (0x0004d734) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x98f9,	// (0x0004d734) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdee,	// (0x00053c29) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdee,	// (0x00053c29) cmail_ddmenu_btn02_pane_t

0xa559,	// (0x0004e394) fps_text_pane_ParamLimits

0xa559,	// (0x0004e394) fps_text_pane

0xa570,	// (0x0004e3ab) main_fps_pane_g1_ParamLimits

0xa570,	// (0x0004e3ab) main_fps_pane_g1

0xa588,	// (0x0004e3c3) wait_bar_pane_cp010_ParamLimits

0xa588,	// (0x0004e3c3) wait_bar_pane_cp010

0xa59b,	// (0x0004e3d6) fps_text_pane_t1_ParamLimits

0xa59b,	// (0x0004e3d6) fps_text_pane_t1

0xeba5,	// (0x000529e0) cam4_image_uncrop_pane_g1

0xebae,	// (0x000529e9) cam4_image_uncrop_pane_g2

0x661b,	// (0x0004a456) cam4_image_uncrop_pane_g3

0x6624,	// (0x0004a45f) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0005372f) cam4_image_uncrop_pane_g

0xa3f2,	// (0x0004e22d) dia3_listrow_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_phob2_pane

0x91dc,	// (0x0004d017) cell_tport_appsw_pane_cp02_ParamLimits

0x91dc,	// (0x0004d017) cell_tport_appsw_pane_cp02

0x91f0,	// (0x0004d02b) cell_tport_appsw_pane_cp03_ParamLimits

0x91f0,	// (0x0004d02b) cell_tport_appsw_pane_cp03

0xa796,	// (0x0004e5d1) phob2_contact_card_pane

0xa796,	// (0x0004e5d1) phob2_listscroll_pane

0xc604,	// (0x0005043f) phob2_list_pane

0xc60c,	// (0x00050447) scroll_pane_cp034

0xa5b3,	// (0x0004e3ee) phob2_cc_data_pane_ParamLimits

0xa5b3,	// (0x0004e3ee) phob2_cc_data_pane

0xa5d4,	// (0x0004e40f) phob2_cc_listscroll_pane_ParamLimits

0xa5d4,	// (0x0004e40f) phob2_cc_listscroll_pane

0xa5f6,	// (0x0004e431) list_double_large_graphic_phob2_pane_ParamLimits

0xa5f6,	// (0x0004e431) list_double_large_graphic_phob2_pane

0xa60b,	// (0x0004e446) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa60b,	// (0x0004e446) list_double_large_graphic_phob2_pane_g1

0x119a,	// (0x00044fd5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x119a,	// (0x00044fd5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee0,	// (0x00053d1b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee0,	// (0x00053d1b) list_double_large_graphic_phob2_pane_g

0x11a6,	// (0x00044fe1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x11a6,	// (0x00044fe1) list_double_large_graphic_phob2_pane_t1

0x11bb,	// (0x00044ff6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x11bb,	// (0x00044ff6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee5,	// (0x00053d20) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee5,	// (0x00053d20) list_double_large_graphic_phob2_pane_t

0xa796,	// (0x0004e5d1) list_highlight_pane_cp024

0xc614,	// (0x0005044f) phob2_cc_button_pane

0xa618,	// (0x0004e453) phob2_cc_data_pane_g1_ParamLimits

0xa618,	// (0x0004e453) phob2_cc_data_pane_g1

0xa62e,	// (0x0004e469) phob2_cc_data_pane_g2_ParamLimits

0xa62e,	// (0x0004e469) phob2_cc_data_pane_g2

0x0001,

0xfeea,	// (0x00053d25) phob2_cc_data_pane_g_ParamLimits

0xfeea,	// (0x00053d25) phob2_cc_data_pane_g

0xa642,	// (0x0004e47d) phob2_cc_data_pane_t1_ParamLimits

0xa642,	// (0x0004e47d) phob2_cc_data_pane_t1

0xa65c,	// (0x0004e497) phob2_cc_data_pane_t2_ParamLimits

0xa65c,	// (0x0004e497) phob2_cc_data_pane_t2

0xa676,	// (0x0004e4b1) phob2_cc_data_pane_t3_ParamLimits

0xa676,	// (0x0004e4b1) phob2_cc_data_pane_t3

0x0002,

0xfeef,	// (0x00053d2a) phob2_cc_data_pane_t_ParamLimits

0xfeef,	// (0x00053d2a) phob2_cc_data_pane_t

0xc61c,	// (0x00050457) phob2_cc_list_pane_ParamLimits

0xc61c,	// (0x00050457) phob2_cc_list_pane

0xeef9,	// (0x00052d34) scroll_pane_cp035_ParamLimits

0xeef9,	// (0x00052d34) scroll_pane_cp035

0xa80f,	// (0x0004e64a) bg_button_pane_cp033

0xc628,	// (0x00050463) phob2_cc_button_pane_g1

0xc634,	// (0x0005046f) phob2_cc_button_pane_t1

0xc649,	// (0x00050484) phob2_cc_button_pane_t2

0x0001,

0xfef6,	// (0x00053d31) phob2_cc_button_pane_t

0xa690,	// (0x0004e4cb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa690,	// (0x0004e4cb) list_double_large_graphic_phob2_cc_pane

0xa6a5,	// (0x0004e4e0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa6a5,	// (0x0004e4e0) list_double_large_graphic_phob2_cc_pane_g1

0x11cd,	// (0x00045008) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x11cd,	// (0x00045008) list_double_large_graphic_phob2_cc_pane_g2

0x11d9,	// (0x00045014) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x11d9,	// (0x00045014) list_double_large_graphic_phob2_cc_pane_g3

0x11e5,	// (0x00045020) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x11e5,	// (0x00045020) list_double_large_graphic_phob2_cc_pane_g4

0x11f1,	// (0x0004502c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x11f1,	// (0x0004502c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfefb,	// (0x00053d36) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfefb,	// (0x00053d36) list_double_large_graphic_phob2_cc_pane_g

0x11fd,	// (0x00045038) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x11fd,	// (0x00045038) list_double_large_graphic_phob2_cc_pane_t1

0x1226,	// (0x00045061) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1226,	// (0x00045061) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff06,	// (0x00053d41) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff06,	// (0x00053d41) list_double_large_graphic_phob2_cc_pane_t

0xc65b,	// (0x00050496) list_highlight_pane_cp025_ParamLimits

0xc65b,	// (0x00050496) list_highlight_pane_cp025

0xa80f,	// (0x0004e64a) bg_button_pane_cp033_ParamLimits

0xc628,	// (0x00050463) phob2_cc_button_pane_g1_ParamLimits

0xc634,	// (0x0005046f) phob2_cc_button_pane_t1_ParamLimits

0xc649,	// (0x00050484) phob2_cc_button_pane_t2_ParamLimits

0xfef6,	// (0x00053d31) phob2_cc_button_pane_t_ParamLimits

0x146e,	// (0x000452a9) popup_wgtman_window

0xed28,	// (0x00052b63) scroll_pane_cp038

0xa112,	// (0x0004df4d) wgtman_btn_pane_cp_01_ParamLimits

0xa112,	// (0x0004df4d) wgtman_btn_pane_cp_01

0xc669,	// (0x000504a4) wgtman_content_pane

0xc672,	// (0x000504ad) wgtman_heading_pane

0xa796,	// (0x0004e5d1) bg_heading_pane_cp02

0xc67b,	// (0x000504b6) wgtman_heading_pane_g1

0xc683,	// (0x000504be) wgtman_heading_pane_t1

0xc691,	// (0x000504cc) scroll_pane_cp036

0xc699,	// (0x000504d4) wgtman_list_pane

0x8d96,	// (0x0004cbd1) wgtman_list_pane_t1_ParamLimits

0x8d96,	// (0x0004cbd1) wgtman_list_pane_t1

0xbe23,	// (0x0004fc5e) cam4_grid_pane

0x0a27,	// (0x00044862) bg_button_pane_cp015_ParamLimits

0x7275,	// (0x0004b0b0) bg_button_pane_cp016_ParamLimits

0x7288,	// (0x0004b0c3) bg_button_pane_cp017_ParamLimits

0x0a6f,	// (0x000448aa) popup_vitu2_query_window_g3_ParamLimits

0x0a6f,	// (0x000448aa) popup_vitu2_query_window_g3

0x0aea,	// (0x00044925) popup_vitu2_query_window_t6_ParamLimits

0x0aea,	// (0x00044925) popup_vitu2_query_window_t6

0x0b15,	// (0x00044950) popup_vitu2_query_window_t7_ParamLimits

0x0b15,	// (0x00044950) popup_vitu2_query_window_t7

0xeba5,	// (0x000529e0) cam4_grid_pane_g1

0xebae,	// (0x000529e9) cam4_grid_pane_g2

0xc6a1,	// (0x000504dc) cam4_grid_pane_g3

0xc6aa,	// (0x000504e5) cam4_grid_pane_g4

0x0003,

0xff0b,	// (0x00053d46) cam4_grid_pane_g

0x211e,	// (0x00045f59) aid_placing_vt_slider_lsc_ParamLimits

0x240b,	// (0x00046246) vidtel_button_pane_ParamLimits

0x240b,	// (0x00046246) vidtel_button_pane

0xc6b5,	// (0x000504f0) bg_button_pane_cp034

0xa6b1,	// (0x0004e4ec) vidtel_button_pane_g1

0xc6bf,	// (0x000504fa) vidtel_button_pane_t1

0xee2c,	// (0x00052c67) aid_size_vtel_slider_touch

0xeef9,	// (0x00052d34) scroll_pane_cp039

0x8539,	// (0x0004c374) ncim_query_button_pane_cp01_ParamLimits

0x8558,	// (0x0004c393) ncimui_query_pane_g1_ParamLimits

0xa80f,	// (0x0004e64a) input_focus_pane_cp012_ParamLimits

0x857d,	// (0x0004c3b8) ncim_query_entry_pane_t1_ParamLimits

0xeef9,	// (0x00052d34) scroll_pane_cp039_ParamLimits

0x322f,	// (0x0004706a) navi_pane_bcale_mc_g1

0x3237,	// (0x00047072) navi_pane_bcale_mc_t1

0x90ca,	// (0x0004cf05) main_sp_fs_email_pane_g1

0x90d2,	// (0x0004cf0d) main_sp_fs_email_pane_g2

0x0001,

0xfca7,	// (0x00053ae2) main_sp_fs_email_pane_g

0x96bf,	// (0x0004d4fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0x96bf,	// (0x0004d4fa) list_single_cale_mrui_row_pane_g3

0x9985,	// (0x0004d7c0) list_single_recal_day_pane_g5_event_pane

0x999e,	// (0x0004d7d9) list_single_recal_day_pane_g7

0xc6cd,	// (0x00050508) list_recal_day_event_pane_cp01

0xc6d6,	// (0x00050511) list_recal_vselct_arw_lo_pane_cp01

0xc6de,	// (0x00050519) list_recal_vselct_arw_up_pane_cp01

0xc6e6,	// (0x00050521) list_recal_vselct_pane_cp01

0xee4e,	// (0x00052c89) list_recal_day_event_pane_cp01_g1

0xc6f0,	// (0x0005052b) list_recal_day_event_pane_cp01_t1

0x99a6,	// (0x0004d7e1) list_single_recal_day_pane_t1_ParamLimits

0x99b8,	// (0x0004d7f3) list_single_recal_day_pane_t2_ParamLimits

0xfdfe,	// (0x00053c39) list_single_recal_day_pane_t_ParamLimits

0xaf6b,	// (0x0004eda6) bg_notes_pane_ParamLimits

0xaf79,	// (0x0004edb4) list_notes_pane_ParamLimits

0x1787,	// (0x000455c2) scroll_pane_cp06_ParamLimits

0xafb5,	// (0x0004edf0) main_notes_pane_ParamLimits

0xa796,	// (0x0004e5d1) main_welc_pane

0xa6b9,	// (0x0004e4f4) main_welc_body_pane_ParamLimits

0xa6b9,	// (0x0004e4f4) main_welc_body_pane

0xa6d8,	// (0x0004e513) main_welc_opti_pane_ParamLimits

0xa6d8,	// (0x0004e513) main_welc_opti_pane

0xa71f,	// (0x0004e55a) main_welc_pane_t1_ParamLimits

0xa71f,	// (0x0004e55a) main_welc_pane_t1

0xc6fe,	// (0x00050539) main_welc_body_row_pane_ParamLimits

0xc6fe,	// (0x00050539) main_welc_body_row_pane

0xa741,	// (0x0004e57c) main_welc_opti_row_pane_ParamLimits

0xa741,	// (0x0004e57c) main_welc_opti_row_pane

0xc715,	// (0x00050550) main_welc_opti_row_pane_g1

0xc71d,	// (0x00050558) main_welc_opti_row_pane_t1

0xc72c,	// (0x00050567) main_welc_body_row_pane_t1

0x9ec6,	// (0x0004dd01) popup_notif_wgt_heading_pane

0x9ef0,	// (0x0004dd2b) aid_size_list_notif_wgt_del_ParamLimits

0x9efd,	// (0x0004dd38) list_notif_wgt_row_pane_g1_ParamLimits

0x9f09,	// (0x0004dd44) list_notif_wgt_row_pane_g2_ParamLimits

0x9f15,	// (0x0004dd50) list_notif_wgt_row_pane_g3_ParamLimits

0xfe65,	// (0x00053ca0) list_notif_wgt_row_pane_g_ParamLimits

0x9f22,	// (0x0004dd5d) list_notif_wgt_row_pane_t1_ParamLimits

0x9f37,	// (0x0004dd72) list_notif_wgt_row_pane_t2_ParamLimits

0x9f49,	// (0x0004dd84) list_notif_wgt_row_pane_t3_ParamLimits

0xfe6c,	// (0x00053ca7) list_notif_wgt_row_pane_t_ParamLimits

0xa1ce,	// (0x0004e009) listrow_wgtman_pane_g1_ParamLimits

0xa1db,	// (0x0004e016) listrow_wgtman_pane_g2_ParamLimits

0xfe90,	// (0x00053ccb) listrow_wgtman_pane_g_ParamLimits

0x114a,	// (0x00044f85) listrow_wgtman_pane_t1_ParamLimits

0x1162,	// (0x00044f9d) listrow_wgtman_pane_t2_ParamLimits

0xfe95,	// (0x00053cd0) listrow_wgtman_pane_t_ParamLimits

0x1188,	// (0x00044fc3) wait_bar_pane_cp09_ParamLimits

0xa796,	// (0x0004e5d1) bg_popup_heading_pane_cp02

0xc73b,	// (0x00050576) popup_notif_wgt_heading_pane_g1

0xc743,	// (0x0005057e) popup_notif_wgt_heading_pane_t1

0xa796,	// (0x0004e5d1) main_vids_pane

0xa796,	// (0x0004e5d1) vids_listscroll_pane

0xa751,	// (0x0004e58c) scroll_pane_cp040

0xa796,	// (0x0004e5d1) vids_list_pane

0xa75c,	// (0x0004e597) vids_list_double_pane_ParamLimits

0xa75c,	// (0x0004e597) vids_list_double_pane

0xa76d,	// (0x0004e5a8) vids_list_double_pane_g1

0xa776,	// (0x0004e5b1) vids_list_double_pane_t1

0xa786,	// (0x0004e5c1) vids_list_double_pane_t2

0x0001,

0xff19,	// (0x00053d54) vids_list_double_pane_t

0xa80f,	// (0x0004e64a) main_ncimui_pane_ParamLimits

0x825b,	// (0x0004c096) main_ncimui_pane_g1_ParamLimits

0x8267,	// (0x0004c0a2) main_ncimui_pane_g2_ParamLimits

0x8267,	// (0x0004c0a2) main_ncimui_pane_g2

0x0001,

0xfbac,	// (0x000539e7) main_ncimui_pane_g_ParamLimits

0xfbac,	// (0x000539e7) main_ncimui_pane_g

0xa6f7,	// (0x0004e532) main_welc_pane_g1_ParamLimits

0xa6f7,	// (0x0004e532) main_welc_pane_g1

0xa70c,	// (0x0004e547) main_welc_pane_g2_ParamLimits

0xa70c,	// (0x0004e547) main_welc_pane_g2

0x0001,

0xff14,	// (0x00053d4f) main_welc_pane_g_ParamLimits

0xff14,	// (0x00053d4f) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
