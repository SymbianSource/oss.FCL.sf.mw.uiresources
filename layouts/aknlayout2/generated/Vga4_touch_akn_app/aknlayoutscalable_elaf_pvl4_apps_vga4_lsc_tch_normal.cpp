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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000f3bb };

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
0xfdb4,	// (0x0000f16f) Screen

0xfdc0,	// (0x0000f17b) application_window

0xfdfc,	// (0x0000f1b7) area_bottom_pane_ParamLimits

0xfdfc,	// (0x0000f1b7) area_bottom_pane

0xfe35,	// (0x0000f1f0) area_top_pane_ParamLimits

0xfe35,	// (0x0000f1f0) area_top_pane

0x95e9,	// (0x000189a4) call_video_uplink_pane_ParamLimits

0x95e9,	// (0x000189a4) call_video_uplink_pane

0xfec3,	// (0x0000f27e) main_pane_ParamLimits

0xfec3,	// (0x0000f27e) main_pane

0xbea0,	// (0x0001b25b) context_pane

0x3a52,	// (0x00012e0d) navi_pane

0x3a82,	// (0x00012e3d) popup_cale_events_window_ParamLimits

0x3a82,	// (0x00012e3d) popup_cale_events_window

0xbeb3,	// (0x0001b26e) popup_mup_playback_window

0x3a9a,	// (0x00012e55) signal_pane

0x9d6a,	// (0x00019125) main_browser_pane

0xa9a4,	// (0x00019d5f) main_burst_pane

0x3754,	// (0x00012b0f) main_calc_pane

0xbe43,	// (0x0001b1fe) main_cale_day_pane

0x050d,	// (0x0000f8c8) main_cale_month_pane

0xbe43,	// (0x0001b1fe) main_cale_week_pane

0xa9a4,	// (0x00019d5f) main_call_pane

0x9a28,	// (0x00018de3) main_call_poc_pane

0xa9a4,	// (0x00019d5f) main_camera_pane

0xa9a4,	// (0x00019d5f) main_chi_dic_pane

0xa846,	// (0x00019c01) main_clock_pane

0x9a28,	// (0x00018de3) main_fmradio_pane

0xa9a4,	// (0x00019d5f) main_graph_messa_pane

0x9a28,	// (0x00018de3) main_help_pane

0x9d6a,	// (0x00019125) main_im_pane

0x9c83,	// (0x0001903e) main_image_pane_ParamLimits

0x9c83,	// (0x0001903e) main_image_pane

0x9a28,	// (0x00018de3) main_location2_pane

0xa9a4,	// (0x00019d5f) main_location_pane

0x9c83,	// (0x0001903e) main_messa_pane

0x9a28,	// (0x00018de3) main_mp2_pane

0xa9a4,	// (0x00019d5f) main_mp_pane

0x9a28,	// (0x00018de3) main_msg_pane

0x9a28,	// (0x00018de3) main_mup_eq_pane

0x9a28,	// (0x00018de3) main_mup_pane

0x9d6a,	// (0x00019125) main_notes_pane

0x9a28,	// (0x00018de3) main_pec_pane

0x9a28,	// (0x00018de3) main_phob_pane

0x9a28,	// (0x00018de3) main_pinb_pane

0x9a28,	// (0x00018de3) main_postcard_pane

0x9a28,	// (0x00018de3) main_qdial_pane

0xa9a4,	// (0x00019d5f) main_skin_pane

0x9a28,	// (0x00018de3) main_smil2_pane

0xa9a4,	// (0x00019d5f) main_smil_pane

0xa9a4,	// (0x00019d5f) main_video_pane

0xa9a4,	// (0x00019d5f) main_video_tele_pane

0x9c83,	// (0x0001903e) main_viewer_pane_ParamLimits

0x9c83,	// (0x0001903e) main_viewer_pane

0xa9a4,	// (0x00019d5f) main_vorec_pane

0x37aa,	// (0x00012b65) popup_blid_sat_info_window_ParamLimits

0x37aa,	// (0x00012b65) popup_blid_sat_info_window

0x380e,	// (0x00012bc9) popup_dyc_status_message_window_ParamLimits

0x380e,	// (0x00012bc9) popup_dyc_status_message_window

0x3828,	// (0x00012be3) popup_grid_large_graphic_window_ParamLimits

0x3828,	// (0x00012be3) popup_grid_large_graphic_window

0x38ea,	// (0x00012ca5) popup_loc_request_window_ParamLimits

0x38ea,	// (0x00012ca5) popup_loc_request_window

0x3a26,	// (0x00012de1) popup_wml_address_window_ParamLimits

0x3a26,	// (0x00012de1) popup_wml_address_window

0x3592,	// (0x0001294d) call_muted_g1

0x3226,	// (0x000125e1) popup_call_audio_conf_window_ParamLimits

0x3226,	// (0x000125e1) popup_call_audio_conf_window

0x35a2,	// (0x0001295d) popup_call_audio_first_window_ParamLimits

0x35a2,	// (0x0001295d) popup_call_audio_first_window

0x3618,	// (0x000129d3) popup_call_audio_in_window_ParamLimits

0x3618,	// (0x000129d3) popup_call_audio_in_window

0x3654,	// (0x00012a0f) popup_call_audio_out_window_ParamLimits

0x3654,	// (0x00012a0f) popup_call_audio_out_window

0x368e,	// (0x00012a49) popup_call_audio_second_window_ParamLimits

0x368e,	// (0x00012a49) popup_call_audio_second_window

0x36e4,	// (0x00012a9f) popup_call_audio_wait_window_ParamLimits

0x36e4,	// (0x00012a9f) popup_call_audio_wait_window

0x3719,	// (0x00012ad4) popup_number_entry_window_ParamLimits

0x3719,	// (0x00012ad4) popup_number_entry_window

0x9615,	// (0x000189d0) bg_popup_call_pane_cp05_ParamLimits

0x9615,	// (0x000189d0) bg_popup_call_pane_cp05

0x9635,	// (0x000189f0) popup_number_entry_window_t1

0x9648,	// (0x00018a03) popup_number_entry_window_t2

0x965a,	// (0x00018a15) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0001e48e) popup_number_entry_window_t

0x966c,	// (0x00018a27) text_title_cp2

0x967f,	// (0x00018a3a) bg_popup_call_pane_cp_ParamLimits

0x967f,	// (0x00018a3a) bg_popup_call_pane_cp

0x968d,	// (0x00018a48) call_thumbnail_pane

0x9695,	// (0x00018a50) popup_call_audio_in_window_g1_ParamLimits

0x9695,	// (0x00018a50) popup_call_audio_in_window_g1

0x96a1,	// (0x00018a5c) popup_call_audio_in_window_g2_ParamLimits

0x96a1,	// (0x00018a5c) popup_call_audio_in_window_g2

0x96ad,	// (0x00018a68) popup_call_audio_in_window_g3_ParamLimits

0x96ad,	// (0x00018a68) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0001e497) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0001e497) popup_call_audio_in_window_g

0x96b9,	// (0x00018a74) popup_call_audio_in_window_t1_ParamLimits

0x96b9,	// (0x00018a74) popup_call_audio_in_window_t1

0x96d5,	// (0x00018a90) popup_call_audio_in_window_t2_ParamLimits

0x96d5,	// (0x00018a90) popup_call_audio_in_window_t2

0x96f1,	// (0x00018aac) popup_call_audio_in_window_t3_ParamLimits

0x96f1,	// (0x00018aac) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0001e49e) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0001e49e) popup_call_audio_in_window_t

0x967f,	// (0x00018a3a) bg_popup_call_pane_cp01_ParamLimits

0x967f,	// (0x00018a3a) bg_popup_call_pane_cp01

0x968d,	// (0x00018a48) call_thumbnail_pane_cp02

0x9704,	// (0x00018abf) call_type_pane_cp022

0x970c,	// (0x00018ac7) popup_call_audio_out_window_g1_ParamLimits

0x970c,	// (0x00018ac7) popup_call_audio_out_window_g1

0x971e,	// (0x00018ad9) popup_call_audio_out_window_g2_ParamLimits

0x971e,	// (0x00018ad9) popup_call_audio_out_window_g2

0x972a,	// (0x00018ae5) popup_call_audio_out_window_g3_ParamLimits

0x972a,	// (0x00018ae5) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0001e4a5) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0001e4a5) popup_call_audio_out_window_g

0x973c,	// (0x00018af7) popup_call_audio_out_window_t1_ParamLimits

0x973c,	// (0x00018af7) popup_call_audio_out_window_t1

0x9754,	// (0x00018b0f) popup_call_audio_out_window_t2_ParamLimits

0x9754,	// (0x00018b0f) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0001e4ac) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0001e4ac) popup_call_audio_out_window_t

0x9769,	// (0x00018b24) bg_popup_call_pane_ParamLimits

0x9769,	// (0x00018b24) bg_popup_call_pane

0x007c,	// (0x0000f437) call_thumbnail_pane_cp_ParamLimits

0x007c,	// (0x0000f437) call_thumbnail_pane_cp

0x97ed,	// (0x00018ba8) call_type_pane_cp01_ParamLimits

0x97ed,	// (0x00018ba8) call_type_pane_cp01

0x9831,	// (0x00018bec) popup_call_audio_first_window_g1_ParamLimits

0x9831,	// (0x00018bec) popup_call_audio_first_window_g1

0x987d,	// (0x00018c38) popup_call_audio_first_window_g2_ParamLimits

0x987d,	// (0x00018c38) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0001e4b1) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0001e4b1) popup_call_audio_first_window_g

0x98c1,	// (0x00018c7c) popup_call_audio_first_window_t1_ParamLimits

0x98c1,	// (0x00018c7c) popup_call_audio_first_window_t1

0x996d,	// (0x00018d28) popup_call_audio_first_window_t4_ParamLimits

0x996d,	// (0x00018d28) popup_call_audio_first_window_t4

0x99f9,	// (0x00018db4) popup_call_audio_first_window_t5_ParamLimits

0x99f9,	// (0x00018db4) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0001e4b6) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0001e4b6) popup_call_audio_first_window_t

0x9a28,	// (0x00018de3) bg_popup_call_pane_cp02

0x9a32,	// (0x00018ded) call_type_pane_cp023

0x9a3a,	// (0x00018df5) popup_call_audio_wait_window_g1

0x9a42,	// (0x00018dfd) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0001e4bd) popup_call_audio_wait_window_g

0x9a4a,	// (0x00018e05) popup_call_audio_wait_window_t3

0x9a58,	// (0x00018e13) bg_popup_call_pane_cp03_ParamLimits

0x9a58,	// (0x00018e13) bg_popup_call_pane_cp03

0x9ab8,	// (0x00018e73) call_thumbnail_pane_cp011_ParamLimits

0x9ab8,	// (0x00018e73) call_thumbnail_pane_cp011

0x9ac4,	// (0x00018e7f) call_type_pane_cp034_ParamLimits

0x9ac4,	// (0x00018e7f) call_type_pane_cp034

0x9b00,	// (0x00018ebb) popup_call_audio_second_window_g1_ParamLimits

0x9b00,	// (0x00018ebb) popup_call_audio_second_window_g1

0x9b3c,	// (0x00018ef7) popup_call_audio_second_window_g2_ParamLimits

0x9b3c,	// (0x00018ef7) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0001e4c2) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0001e4c2) popup_call_audio_second_window_g

0x9b78,	// (0x00018f33) popup_call_audio_second_window_t1_ParamLimits

0x9b78,	// (0x00018f33) popup_call_audio_second_window_t1

0x9bf9,	// (0x00018fb4) popup_call_audio_second_window_t2_ParamLimits

0x9bf9,	// (0x00018fb4) popup_call_audio_second_window_t2

0x9c2f,	// (0x00018fea) popup_call_audio_second_window_t3_ParamLimits

0x9c2f,	// (0x00018fea) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0001e4c7) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0001e4c7) popup_call_audio_second_window_t

0x9a28,	// (0x00018de3) bg_popup_call_pane_cp04

0x9c65,	// (0x00019020) list_conf_pane

0x9c6d,	// (0x00019028) popup_call_audio_conf_window_t1

0x9c7b,	// (0x00019036) call_thumbnail_pane_g1

0x9c83,	// (0x0001903e) bg_pinb_pane_ParamLimits

0x9c83,	// (0x0001903e) bg_pinb_pane

0x9c91,	// (0x0001904c) find_pinb_pane

0x9c9a,	// (0x00019055) listscroll_pinb_pane_ParamLimits

0x9c9a,	// (0x00019055) listscroll_pinb_pane

0x9ca9,	// (0x00019064) pinb_bg_pane_g1

0x00a0,	// (0x0000f45b) pinb_bg_pane_g2

0x00ac,	// (0x0000f467) pinb_bg_pane_g3

0x00b8,	// (0x0000f473) pinb_bg_pane_g4

0x00c4,	// (0x0000f47f) pinb_bg_pane_g5

0x00d0,	// (0x0000f48b) pinb_bg_pane_g6

0x00db,	// (0x0000f496) pinb_bg_pane_g7

0x00e6,	// (0x0000f4a1) pinb_bg_pane_g8

0x00f1,	// (0x0000f4ac) pinb_bg_pane_g9

0x00fb,	// (0x0000f4b6) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0001e4ce) pinb_bg_pane_g

0x0118,	// (0x0000f4d3) grid_pinb_pane

0x0123,	// (0x0000f4de) list_pinb_pane

0x012e,	// (0x0000f4e9) scroll_pane_cp01_ParamLimits

0x012e,	// (0x0000f4e9) scroll_pane_cp01

0x9cb3,	// (0x0001906e) find_pinb_pane_g1_ParamLimits

0x9cb3,	// (0x0001906e) find_pinb_pane_g1

0x9ccb,	// (0x00019086) find_pinb_pane_t1

0x9cdd,	// (0x00019098) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0001e4e8) find_pinb_pane_t

0x9cf2,	// (0x000190ad) input_focus_pane_cp01_ParamLimits

0x9cf2,	// (0x000190ad) input_focus_pane_cp01

0x0140,	// (0x0000f4fb) cell_pinb_pane_ParamLimits

0x0140,	// (0x0000f4fb) cell_pinb_pane

0x0162,	// (0x0000f51d) cell_pinb_pane_g1_ParamLimits

0x0162,	// (0x0000f51d) cell_pinb_pane_g1

0x0177,	// (0x0000f532) cell_pinb_pane_g2_ParamLimits

0x0177,	// (0x0000f532) cell_pinb_pane_g2

0x9cfe,	// (0x000190b9) cell_pinb_pane_g3_ParamLimits

0x9cfe,	// (0x000190b9) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0001e4ed) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0001e4ed) cell_pinb_pane_g

0x9a28,	// (0x00018de3) grid_highlight_pane_cp01

0x0183,	// (0x0000f53e) list_pinb_item_pane_ParamLimits

0x0183,	// (0x0000f53e) list_pinb_item_pane

0x9a28,	// (0x00018de3) list_highlight_pane_cp02

0x0195,	// (0x0000f550) list_pinb_item_pane_g1_ParamLimits

0x0195,	// (0x0000f550) list_pinb_item_pane_g1

0x01a2,	// (0x0000f55d) list_pinb_item_pane_g2_ParamLimits

0x01a2,	// (0x0000f55d) list_pinb_item_pane_g2

0x01ae,	// (0x0000f569) list_pinb_item_pane_g3_ParamLimits

0x01ae,	// (0x0000f569) list_pinb_item_pane_g3

0x01bf,	// (0x0000f57a) list_pinb_item_pane_g4_ParamLimits

0x01bf,	// (0x0000f57a) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0001e4f4) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0001e4f4) list_pinb_item_pane_g

0x01cb,	// (0x0000f586) list_pinb_item_pane_t1_ParamLimits

0x01cb,	// (0x0000f586) list_pinb_item_pane_t1

0x0200,	// (0x0000f5bb) calc_display_pane

0x0228,	// (0x0000f5e3) calc_paper_pane

0x024b,	// (0x0000f606) grid_calc_pane

0x9a28,	// (0x00018de3) bg_list_pane_cp01

0x0279,	// (0x0000f634) clock_g1

0x0281,	// (0x0000f63c) clock_g2

0x0001,

0xf142,	// (0x0001e4fd) clock_g

0x0289,	// (0x0000f644) clock_t1_ParamLimits

0x0289,	// (0x0000f644) clock_t1

0x029e,	// (0x0000f659) clock_t2_ParamLimits

0x029e,	// (0x0000f659) clock_t2

0x02b0,	// (0x0000f66b) clock_t3_ParamLimits

0x02b0,	// (0x0000f66b) clock_t3

0x02c2,	// (0x0000f67d) clock_t4_ParamLimits

0x02c2,	// (0x0000f67d) clock_t4

0x02d4,	// (0x0000f68f) clock_t5_ParamLimits

0x02d4,	// (0x0000f68f) clock_t5

0x02e9,	// (0x0000f6a4) clock_t6_ParamLimits

0x02e9,	// (0x0000f6a4) clock_t6

0x02fb,	// (0x0000f6b6) clock_t7_ParamLimits

0x02fb,	// (0x0000f6b6) clock_t7

0x030d,	// (0x0000f6c8) clock_t8_ParamLimits

0x030d,	// (0x0000f6c8) clock_t8

0x0321,	// (0x0000f6dc) clock_t9_ParamLimits

0x0321,	// (0x0000f6dc) clock_t9

0x0008,

0xf147,	// (0x0001e502) clock_t_ParamLimits

0xf147,	// (0x0001e502) clock_t

0x9d12,	// (0x000190cd) popup_clock_analogue_window_cp02

0x9d12,	// (0x000190cd) popup_clock_digital_window_cp01

0x9d1a,	// (0x000190d5) listscroll_help_pane

0x9a28,	// (0x00018de3) phob_pre_status_pane

0x9d24,	// (0x000190df) grid_qdial_pane

0x9c83,	// (0x0001903e) listscroll_mce_pane

0x9c83,	// (0x0001903e) bg_notes_pane

0x9d2e,	// (0x000190e9) list_notes_pane

0x0337,	// (0x0000f6f2) scroll_pane_cp06

0x9d3c,	// (0x000190f7) bg_calc_paper_pane

0x9d50,	// (0x0001910b) list_calc_pane

0x9d6a,	// (0x00019125) bg_calc_display_pane

0x034b,	// (0x0000f706) calc_display_pane_t1

0x035d,	// (0x0000f718) calc_display_pane_t2

0x9d76,	// (0x00019131) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0001e515) calc_display_pane_t

0x036f,	// (0x0000f72a) cell_calc_pane_ParamLimits

0x036f,	// (0x0000f72a) cell_calc_pane

0x9d88,	// (0x00019143) bg_calc_paper_pane_g1

0x9d94,	// (0x0001914f) bg_calc_paper_pane_g2

0x9da0,	// (0x0001915b) bg_calc_paper_pane_g3

0x9dac,	// (0x00019167) bg_calc_paper_pane_g4

0x9db8,	// (0x00019173) bg_calc_paper_pane_g5

0x03ac,	// (0x0000f767) bg_calc_paper_pane_g6

0x03bf,	// (0x0000f77a) bg_calc_paper_pane_g7

0x03d2,	// (0x0000f78d) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0001e51c) bg_calc_paper_pane_g

0x03e3,	// (0x0000f79e) calc_bg_paper_pane_g9

0x03f4,	// (0x0000f7af) list_calc_item_pane_ParamLimits

0x03f4,	// (0x0000f7af) list_calc_item_pane

0x9dc4,	// (0x0001917f) list_calc_item_pane_g1

0x9dd1,	// (0x0001918c) list_calc_item_pane_t1_ParamLimits

0x9dd1,	// (0x0001918c) list_calc_item_pane_t1

0x040c,	// (0x0000f7c7) list_calc_item_pane_t2_ParamLimits

0x040c,	// (0x0000f7c7) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0001e52d) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0001e52d) list_calc_item_pane_t

0x9de3,	// (0x0001919e) cell_calc_pane_g1

0x9ded,	// (0x000191a8) grid_highlight_pane_cp02

0x9e0f,	// (0x000191ca) bg_calc_display_pane_g1

0x9e18,	// (0x000191d3) bg_calc_display_pane_g2

0x9e22,	// (0x000191dd) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0001e537) bg_calc_display_pane_g

0x043e,	// (0x0000f7f9) cell_qdial_pane_ParamLimits

0x043e,	// (0x0000f7f9) cell_qdial_pane

0x0452,	// (0x0000f80d) cell_qdial_pane_g1_ParamLimits

0x0452,	// (0x0000f80d) cell_qdial_pane_g1

0x0468,	// (0x0000f823) cell_qdial_pane_g2_ParamLimits

0x0468,	// (0x0000f823) cell_qdial_pane_g2

0x9e2b,	// (0x000191e6) cell_qdial_pane_g3_ParamLimits

0x9e2b,	// (0x000191e6) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0001e53e) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0001e53e) cell_qdial_pane_g

0x048f,	// (0x0000f84a) cell_qdial_pane_t1_ParamLimits

0x048f,	// (0x0000f84a) cell_qdial_pane_t1

0x04a7,	// (0x0000f862) cell_qdial_pane_t2_ParamLimits

0x04a7,	// (0x0000f862) cell_qdial_pane_t2

0x04ba,	// (0x0000f875) cell_qdial_pane_t3_ParamLimits

0x04ba,	// (0x0000f875) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0001e547) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0001e547) cell_qdial_pane_t

0x9a28,	// (0x00018de3) grid_highlight_pane_cp04

0x9e37,	// (0x000191f2) thumbnail_qdial_pane_ParamLimits

0x9e37,	// (0x000191f2) thumbnail_qdial_pane

0x9e93,	// (0x0001924e) list_help_pane

0x9e9c,	// (0x00019257) scroll_pane_cp02

0x04cd,	// (0x0000f888) help_list_pane_t1_ParamLimits

0x04cd,	// (0x0000f888) help_list_pane_t1

0x9ea5,	// (0x00019260) bg_notes_pane_g2

0x9ead,	// (0x00019268) bg_notes_pane_g3

0x9eb5,	// (0x00019270) notes_bg_pane_g1

0x9ebd,	// (0x00019278) notes_bg_pane_g4

0x9ec5,	// (0x00019280) notes_bg_pane_g5

0x9ecd,	// (0x00019288) notes_bg_pane_g6

0x9ed5,	// (0x00019290) notes_bg_pane_g7

0x9edd,	// (0x00019298) notes_bg_pane_g8

0x9ee5,	// (0x000192a0) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0001e565) notes_bg_pane_g

0x04eb,	// (0x0000f8a6) list_notes_text_pane_ParamLimits

0x04eb,	// (0x0000f8a6) list_notes_text_pane

0x9eed,	// (0x000192a8) list_notes_text_pane_g1

0x04ff,	// (0x0000f8ba) list_notes_text_pane_t1

0x050d,	// (0x0000f8c8) listscroll_cale_week_pane

0x0547,	// (0x0000f902) bg_cale_heading_pane

0x9f07,	// (0x000192c2) bg_cale_pane_cp01

0x056c,	// (0x0000f927) cale_week_corner_pane

0x058b,	// (0x0000f946) cale_week_day_heading_pane

0x05b5,	// (0x0000f970) cale_week_scroll_pane_g1

0x05d5,	// (0x0000f990) cale_week_scroll_pane_g2

0x05ed,	// (0x0000f9a8) cale_week_scroll_pane_g3

0x0605,	// (0x0000f9c0) cale_week_scroll_pane_g4

0x061d,	// (0x0000f9d8) cale_week_scroll_pane_g5

0x0639,	// (0x0000f9f4) cale_week_scroll_pane_g6

0x0655,	// (0x0000fa10) cale_week_scroll_pane_g7

0x0675,	// (0x0000fa30) cale_week_scroll_pane_g8

0x0695,	// (0x0000fa50) cale_week_scroll_pane_g9

0x06b2,	// (0x0000fa6d) cale_week_scroll_pane_g10

0x06cf,	// (0x0000fa8a) cale_week_scroll_pane_g11

0x06ec,	// (0x0000faa7) cale_week_scroll_pane_g12

0x0709,	// (0x0000fac4) cale_week_scroll_pane_g13

0x0726,	// (0x0000fae1) cale_week_scroll_pane_g14

0x074b,	// (0x0000fb06) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0001e574) cale_week_scroll_pane_g

0x0770,	// (0x0000fb2b) cale_week_time_pane

0x0790,	// (0x0000fb4b) grid_cale_week_pane

0x9f37,	// (0x000192f2) scroll_pane_cp08

0x07bf,	// (0x0000fb7a) cell_cale_week_pane_ParamLimits

0x07bf,	// (0x0000fb7a) cell_cale_week_pane

0x0841,	// (0x0000fbfc) cale_week_day_heading_pane_t1

0x088b,	// (0x0000fc46) cale_week_day_heading_pane_t2

0x08da,	// (0x0000fc95) cale_week_day_heading_pane_t3

0x0929,	// (0x0000fce4) cale_week_day_heading_pane_t4

0x0978,	// (0x0000fd33) cale_week_day_heading_pane_t5

0x09c7,	// (0x0000fd82) cale_week_day_heading_pane_t6

0x0a1a,	// (0x0000fdd5) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0001e593) cale_week_day_heading_pane_t

0x9f59,	// (0x00019314) bg_cale_side_pane

0x0a64,	// (0x0000fe1f) cale_week_time_pane_t1

0x0a9e,	// (0x0000fe59) cale_week_time_pane_t2

0x0ad8,	// (0x0000fe93) cale_week_time_pane_t3

0x0b12,	// (0x0000fecd) cale_week_time_pane_t4

0x0b4c,	// (0x0000ff07) cale_week_time_pane_t5

0x0b86,	// (0x0000ff41) cale_week_time_pane_t6

0x0bc0,	// (0x0000ff7b) cale_week_time_pane_t7

0x0bfa,	// (0x0000ffb5) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0001e5a2) cale_week_time_pane_t

0x0c38,	// (0x0000fff3) cell_cale_week_pane_g2

0x0c57,	// (0x00010012) cell_cale_week_pane_g3_ParamLimits

0x0c57,	// (0x00010012) cell_cale_week_pane_g3

0x9f67,	// (0x00019322) grid_highlight_pane_cp07

0x9f6f,	// (0x0001932a) listscroll_gms_pane

0x9f79,	// (0x00019334) grid_gms_pane

0x9f82,	// (0x0001933d) listscroll_gms_pane_g1

0x9f8a,	// (0x00019345) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0001e5b3) listscroll_gms_pane_g

0x0c6f,	// (0x0001002a) scroll_pane_cp010

0x0c7a,	// (0x00010035) cell_gms_pane_ParamLimits

0x0c7a,	// (0x00010035) cell_gms_pane

0x0c94,	// (0x0001004f) cell_gms_pane_g1

0x9f92,	// (0x0001934d) cell_gms_pane_g2

0x9f9a,	// (0x00019355) cell_gms_pane_g3

0x9fa3,	// (0x0001935e) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0001e5b8) cell_gms_pane_g

0x9fac,	// (0x00019367) grid_highlight_pane_cp09

0x353a,	// (0x000128f5) phob_pre_status_pane_g1

0x3542,	// (0x000128fd) phob_pre_status_pane_g2

0x354a,	// (0x00012905) phob_pre_status_pane_g3

0x3552,	// (0x0001290d) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0001e9a7) phob_pre_status_pane_g

0x3562,	// (0x0001291d) phob_pre_status_pane_t1

0x3572,	// (0x0001292d) phob_pre_status_pane_t2

0x3582,	// (0x0001293d) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0001e9b2) phob_pre_status_pane_t

0x9a28,	// (0x00018de3) bg_list_pane_cp05

0x0ca4,	// (0x0001005f) grid_vorec_pane

0x0cb0,	// (0x0001006b) vorec_t1

0x0cbe,	// (0x00010079) vorec_t2

0x0ccc,	// (0x00010087) vorec_t3

0x0cda,	// (0x00010095) vorec_t4

0x0ce8,	// (0x000100a3) vorec_t5

0x9fb4,	// (0x0001936f) vorec_t6

0x0006,

0xf206,	// (0x0001e5c1) vorec_t

0x0d04,	// (0x000100bf) wait_bar_pane_cp01

0x0d0c,	// (0x000100c7) cell_vorec_pane_ParamLimits

0x0d0c,	// (0x000100c7) cell_vorec_pane

0x9fc2,	// (0x0001937d) cell_vorec_pane_g1

0x9a28,	// (0x00018de3) grid_highlight_pane_cp05

0x0d37,	// (0x000100f2) cams_zoom_pane

0x0d46,	// (0x00010101) image_vga_pane

0x0d60,	// (0x0001011b) main_camera_pane_g1

0x0d72,	// (0x0001012d) main_camera_pane_g2

0x0d82,	// (0x0001013d) main_camera_pane_g3

0x0d96,	// (0x00010151) main_camera_pane_g4

0x0daa,	// (0x00010165) main_camera_pane_g5

0x0dbe,	// (0x00010179) main_camera_pane_g6

0x0dd2,	// (0x0001018d) main_camera_pane_g7

0x0007,

0xf215,	// (0x0001e5d0) main_camera_pane_g

0x0de6,	// (0x000101a1) main_camera_pane_t1

0x0dfc,	// (0x000101b7) main_camera_pane_t2

0x0001,

0xf226,	// (0x0001e5e1) main_camera_pane_t

0x0e3a,	// (0x000101f5) cams_zoom_pane_cp_ParamLimits

0x0e3a,	// (0x000101f5) cams_zoom_pane_cp

0x0e62,	// (0x0001021d) image_cif_pane_ParamLimits

0x0e62,	// (0x0001021d) image_cif_pane

0x0e9d,	// (0x00010258) image_subqcif_pane

0x0ea7,	// (0x00010262) main_video_pane_g1_ParamLimits

0x0ea7,	// (0x00010262) main_video_pane_g1

0x0ecb,	// (0x00010286) main_video_pane_g2_ParamLimits

0x0ecb,	// (0x00010286) main_video_pane_g2

0x0f01,	// (0x000102bc) main_video_pane_g3_ParamLimits

0x0f01,	// (0x000102bc) main_video_pane_g3

0x0f2f,	// (0x000102ea) main_video_pane_g4_ParamLimits

0x0f2f,	// (0x000102ea) main_video_pane_g4

0x0f5d,	// (0x00010318) main_video_pane_g5_ParamLimits

0x0f5d,	// (0x00010318) main_video_pane_g5

0x9fd8,	// (0x00019393) main_video_pane_g6_ParamLimits

0x9fd8,	// (0x00019393) main_video_pane_g6

0x0006,

0xf22b,	// (0x0001e5e6) main_video_pane_g_ParamLimits

0xf22b,	// (0x0001e5e6) main_video_pane_g

0x0f86,	// (0x00010341) main_video_pane_t1_ParamLimits

0x0f86,	// (0x00010341) main_video_pane_t1

0x9ff2,	// (0x000193ad) cams_zoom_pane_g1

0x9ffb,	// (0x000193b6) cams_zoom_pane_g2

0xa004,	// (0x000193bf) cams_zoom_pane_g3

0xa00d,	// (0x000193c8) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0001e5f5) cams_zoom_pane_g

0x0fe3,	// (0x0001039e) grid_cams_pane

0x0ffd,	// (0x000103b8) linegrid_cams_pane

0x100f,	// (0x000103ca) cell_cams_pane_ParamLimits

0x100f,	// (0x000103ca) cell_cams_pane

0xa016,	// (0x000193d1) cams_burst_image_pane

0xa01e,	// (0x000193d9) cell_cams_pane_g1

0x9a28,	// (0x00018de3) grid_highlight_pane_cp03

0x9de3,	// (0x0001919e) mp_bg_pane_g1

0x9a28,	// (0x00018de3) bg_list_pane_cp03

0xbd66,	// (0x0001b121) bg_mp_pane

0xbd6e,	// (0x0001b129) grid_mp_pane

0xbd76,	// (0x0001b131) media_player_g1

0xbd80,	// (0x0001b13b) media_player_t1

0xbd8e,	// (0x0001b149) media_player_t2

0xbd9c,	// (0x0001b157) media_player_t3

0xbdaa,	// (0x0001b165) media_player_t4

0xbdb8,	// (0x0001b173) media_player_t5

0xbdc6,	// (0x0001b181) media_player_t6

0xbdd4,	// (0x0001b18f) media_player_t7

0x0006,

0xf5d6,	// (0x0001e991) media_player_t

0xbde2,	// (0x0001b19d) wait_bar_pane_cp02

0xf5bb,	// (0x0001e976) main_usb_pane_t

0x3531,	// (0x000128ec) cell_mp_pane

0x9de3,	// (0x0001919e) cell_mp_pane_g1

0x9a28,	// (0x00018de3) grid_highlight_pane_cp06

0xa026,	// (0x000193e1) grid_skin_colour_pane

0xa02e,	// (0x000193e9) list_highlight_pane_cp03

0x1141,	// (0x000104fc) skin_g1

0xa036,	// (0x000193f1) skin_t1

0xa045,	// (0x00019400) skin_t2

0x0001,

0xf26f,	// (0x0001e62a) skin_t

0x1149,	// (0x00010504) cell_skin_colour_pane_ParamLimits

0x1149,	// (0x00010504) cell_skin_colour_pane

0xa053,	// (0x0001940e) cell_skin_colour_pane_g1

0x11bc,	// (0x00010577) call_video_g1_ParamLimits

0x11bc,	// (0x00010577) call_video_g1

0x11d8,	// (0x00010593) call_video_g2_ParamLimits

0x11d8,	// (0x00010593) call_video_g2

0x0001,

0xf274,	// (0x0001e62f) call_video_g_ParamLimits

0xf274,	// (0x0001e62f) call_video_g

0x121d,	// (0x000105d8) call_video_uplink_pane_cp1_ParamLimits

0x121d,	// (0x000105d8) call_video_uplink_pane_cp1

0xa065,	// (0x00019420) call_video_uplink_pane_cp2

0x12be,	// (0x00010679) video_down_crop_pane_ParamLimits

0x12be,	// (0x00010679) video_down_crop_pane

0x13a7,	// (0x00010762) video_down_pane_ParamLimits

0x13a7,	// (0x00010762) video_down_pane

0xa06d,	// (0x00019428) video_down_subqcif_pane_ParamLimits

0xa06d,	// (0x00019428) video_down_subqcif_pane

0xa087,	// (0x00019442) video_down_subqcif_pane_cp_ParamLimits

0xa087,	// (0x00019442) video_down_subqcif_pane_cp

0xa0af,	// (0x0001946a) im_reading_pane_ParamLimits

0xa0af,	// (0x0001946a) im_reading_pane

0x14b0,	// (0x0001086b) im_writing_pane_ParamLimits

0x14b0,	// (0x0001086b) im_writing_pane

0x14cc,	// (0x00010887) im_reading_pane_t1

0xa0c9,	// (0x00019484) list_im_pane

0xa0da,	// (0x00019495) scroll_pane_cp07

0x1508,	// (0x000108c3) im_writing_pane_t1_ParamLimits

0x1508,	// (0x000108c3) im_writing_pane_t1

0xa0f3,	// (0x000194ae) im_writing_pane_t2_ParamLimits

0xa0f3,	// (0x000194ae) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0001e639) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0001e639) im_writing_pane_t

0x9a28,	// (0x00018de3) input_focus_pane_cp04

0x9a28,	// (0x00018de3) input_focus_pane_cp05

0x151d,	// (0x000108d8) list_im_single_pane_ParamLimits

0x151d,	// (0x000108d8) list_im_single_pane

0x1533,	// (0x000108ee) list_single_im_pane_t1

0x34f1,	// (0x000128ac) blid_accuracy_pane

0x34f9,	// (0x000128b4) blid_compass_pane

0x3503,	// (0x000128be) main_location_t1

0x3513,	// (0x000128ce) main_location_t2

0x3523,	// (0x000128de) main_location_t3

0x0002,

0xf5e5,	// (0x0001e9a0) main_location_t

0x9a28,	// (0x00018de3) aid_levels_location

0x9de3,	// (0x0001919e) blid_accuracy_pane_g1

0x9de3,	// (0x0001919e) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0001e69b) blid_accuracy_pane_g

0xa13b,	// (0x000194f6) wml_content_pane

0xa179,	// (0x00019534) wml_button_pane_ParamLimits

0xa179,	// (0x00019534) wml_button_pane

0x1542,	// (0x000108fd) wml_list_single_large_pane_ParamLimits

0x1542,	// (0x000108fd) wml_list_single_large_pane

0x1558,	// (0x00010913) wml_list_single_medium_pane_ParamLimits

0x1558,	// (0x00010913) wml_list_single_medium_pane

0x156f,	// (0x0001092a) wml_list_single_small_pane_ParamLimits

0x156f,	// (0x0001092a) wml_list_single_small_pane

0xa18d,	// (0x00019548) wml_selection_box_pane_ParamLimits

0xa18d,	// (0x00019548) wml_selection_box_pane

0xa1a0,	// (0x0001955b) wml_list_single_pane_t1

0xa1af,	// (0x0001956a) wml_list_single_medium_pane_t1

0xa1be,	// (0x00019579) wml_list_single_large_pane_t1

0xa1cd,	// (0x00019588) input_focus_pane_cp02_ParamLimits

0xa1cd,	// (0x00019588) input_focus_pane_cp02

0xa1e0,	// (0x0001959b) wml_selection_box_pane_g1

0xa1e9,	// (0x000195a4) wml_selection_box_pane_t1_ParamLimits

0xa1e9,	// (0x000195a4) wml_selection_box_pane_t1

0x9c83,	// (0x0001903e) bg_wml_button_pane_ParamLimits

0x9c83,	// (0x0001903e) bg_wml_button_pane

0xa201,	// (0x000195bc) wml_button_pane_g1

0xa209,	// (0x000195c4) wml_button_pane_t1

0xa201,	// (0x000195bc) wml_button_bg_pane_g1

0xa219,	// (0x000195d4) wml_button_bg_pane_g2

0xa221,	// (0x000195dc) wml_button_bg_pane_g3

0xa229,	// (0x000195e4) wml_button_bg_pane_g4

0xa231,	// (0x000195ec) wml_button_bg_pane_g5

0xa239,	// (0x000195f4) wml_button_bg_pane_g6

0xa241,	// (0x000195fc) wml_button_bg_pane_g7

0xa249,	// (0x00019604) wml_button_bg_pane_g8

0xa251,	// (0x0001960c) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0001e63e) wml_button_bg_pane_g

0x158b,	// (0x00010946) bg_list_pane_cp02

0xa259,	// (0x00019614) mce_header_pane_ParamLimits

0xa259,	// (0x00019614) mce_header_pane

0xa26f,	// (0x0001962a) mce_icon_pane

0xa26f,	// (0x0001962a) mce_image_pane

0xa278,	// (0x00019633) mce_text_pane_ParamLimits

0xa278,	// (0x00019633) mce_text_pane

0x1595,	// (0x00010950) scroll_pane_cp03

0xa171,	// (0x0001952c) scroll_pane_cp04

0xa28b,	// (0x00019646) scroll_pane_cp05_ParamLimits

0xa28b,	// (0x00019646) scroll_pane_cp05

0x159f,	// (0x0001095a) mce_header_field_pane_ParamLimits

0x159f,	// (0x0001095a) mce_header_field_pane

0x15b8,	// (0x00010973) mce_header_field_pane_2_ParamLimits

0x15b8,	// (0x00010973) mce_header_field_pane_2

0x15ce,	// (0x00010989) mce_header_field_pane_3

0x15d6,	// (0x00010991) list_single_mce_message_pane_ParamLimits

0x15d6,	// (0x00010991) list_single_mce_message_pane

0x15ef,	// (0x000109aa) list_single_mce_smart_pane_ParamLimits

0x15ef,	// (0x000109aa) list_single_mce_smart_pane

0xa297,	// (0x00019652) input_focus_pane_cp03

0xa2a0,	// (0x0001965b) list_header_data_pane

0x1613,	// (0x000109ce) mce_header_field_pane_t1

0x1623,	// (0x000109de) list_single_mce_header_pane_ParamLimits

0x1623,	// (0x000109de) list_single_mce_header_pane

0xa2a8,	// (0x00019663) list_single_mce_header_pane_t1

0xa2b7,	// (0x00019672) list_single_mce_message_pane_g1

0xa2bf,	// (0x0001967a) list_single_mce_message_pane_t1

0x165d,	// (0x00010a18) bg_cale_heading_pane_cp01_ParamLimits

0x165d,	// (0x00010a18) bg_cale_heading_pane_cp01

0xa2cd,	// (0x00019688) bg_cale_pane_cp02_ParamLimits

0xa2cd,	// (0x00019688) bg_cale_pane_cp02

0x169c,	// (0x00010a57) cale_month_corner_pane

0x16bb,	// (0x00010a76) cale_month_day_heading_pane_ParamLimits

0x16bb,	// (0x00010a76) cale_month_day_heading_pane

0x1712,	// (0x00010acd) cale_month_pane_g1_ParamLimits

0x1712,	// (0x00010acd) cale_month_pane_g1

0x1746,	// (0x00010b01) cale_month_pane_g2_ParamLimits

0x1746,	// (0x00010b01) cale_month_pane_g2

0x177e,	// (0x00010b39) cale_month_pane_g3_ParamLimits

0x177e,	// (0x00010b39) cale_month_pane_g3

0x17ca,	// (0x00010b85) cale_month_pane_g4_ParamLimits

0x17ca,	// (0x00010b85) cale_month_pane_g4

0x1816,	// (0x00010bd1) cale_month_pane_g5_ParamLimits

0x1816,	// (0x00010bd1) cale_month_pane_g5

0x1866,	// (0x00010c21) cale_month_pane_g6_ParamLimits

0x1866,	// (0x00010c21) cale_month_pane_g6

0x18be,	// (0x00010c79) cale_month_pane_g7_ParamLimits

0x18be,	// (0x00010c79) cale_month_pane_g7

0x1922,	// (0x00010cdd) cale_month_pane_g8_ParamLimits

0x1922,	// (0x00010cdd) cale_month_pane_g8

0x1986,	// (0x00010d41) cale_month_pane_g9_ParamLimits

0x1986,	// (0x00010d41) cale_month_pane_g9

0x19e0,	// (0x00010d9b) cale_month_pane_g10_ParamLimits

0x19e0,	// (0x00010d9b) cale_month_pane_g10

0x1a32,	// (0x00010ded) cale_month_pane_g11_ParamLimits

0x1a32,	// (0x00010ded) cale_month_pane_g11

0x1a84,	// (0x00010e3f) cale_month_pane_g12_ParamLimits

0x1a84,	// (0x00010e3f) cale_month_pane_g12

0x1ada,	// (0x00010e95) cale_month_pane_g13_ParamLimits

0x1ada,	// (0x00010e95) cale_month_pane_g13

0x000c,

0xf296,	// (0x0001e651) cale_month_pane_g_ParamLimits

0xf296,	// (0x0001e651) cale_month_pane_g

0x1b30,	// (0x00010eeb) cale_month_week_pane

0x1b54,	// (0x00010f0f) grid_cale_month_pane_ParamLimits

0x1b54,	// (0x00010f0f) grid_cale_month_pane

0x1ba2,	// (0x00010f5d) cale_month_day_heading_pane_t1

0x1c28,	// (0x00010fe3) cale_month_day_heading_pane_t2

0x1cb9,	// (0x00011074) cale_month_day_heading_pane_t3

0x1d4a,	// (0x00011105) cale_month_day_heading_pane_t4

0x1ddb,	// (0x00011196) cale_month_day_heading_pane_t5

0x1e74,	// (0x0001122f) cale_month_day_heading_pane_t6

0x1f15,	// (0x000112d0) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0001e66c) cale_month_day_heading_pane_t

0x9f59,	// (0x00019314) bg_cale_side_pane_cp01

0x1fbe,	// (0x00011379) cale_month_week_pane_t1

0x1ff7,	// (0x000113b2) cale_month_week_pane_t2

0x2030,	// (0x000113eb) cale_month_week_pane_t3

0x2069,	// (0x00011424) cale_month_week_pane_t4

0x20a2,	// (0x0001145d) cale_month_week_pane_t5

0x20db,	// (0x00011496) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0001e67b) cale_month_week_pane_t

0x2118,	// (0x000114d3) cell_cale_month_pane_ParamLimits

0x2118,	// (0x000114d3) cell_cale_month_pane

0xa30c,	// (0x000196c7) cell_cale_month_pane_g1

0x2260,	// (0x0001161b) cell_cale_month_pane_t1_ParamLimits

0x2260,	// (0x0001161b) cell_cale_month_pane_t1

0x9f67,	// (0x00019322) grid_highlight_pane_cp08

0x9de3,	// (0x0001919e) main_smil_g1

0x2280,	// (0x0001163b) smil_status_pane

0xa318,	// (0x000196d3) smil_text_pane

0xbc84,	// (0x0001b03f) bg_popup_call3_rect_pane_g8

0xbc8c,	// (0x0001b047) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0001e934) bg_popup_call3_rect_pane_g

0xbf1a,	// (0x0001b2d5) smil_status_volume_pane_g1

0x2293,	// (0x0001164e) smil_status_pane_t1

0xbf4d,	// (0x0001b308) volume_smil_pane

0xa322,	// (0x000196dd) list_smil_text_pane

0x22ac,	// (0x00011667) scroll_pane_cp011

0x22b7,	// (0x00011672) smil_text_list_pane_t1_ParamLimits

0x22b7,	// (0x00011672) smil_text_list_pane_t1

0xa32c,	// (0x000196e7) aid_volume_smil_ParamLimits

0xa32c,	// (0x000196e7) aid_volume_smil

0x9de3,	// (0x0001919e) smil_volume_pane_g1

0x9de3,	// (0x0001919e) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0001e69b) smil_volume_pane_g

0x22f0,	// (0x000116ab) listscroll_cale_day_pane

0xa34e,	// (0x00019709) bg_cale_pane

0xa366,	// (0x00019721) list_cale_pane

0xa389,	// (0x00019744) scroll_pane_cp09

0xa39a,	// (0x00019755) cale_bg_pane_g1

0xa3a2,	// (0x0001975d) cale_bg_pane_g2

0xa3aa,	// (0x00019765) cale_bg_pane_g3

0xa3b2,	// (0x0001976d) cale_bg_pane_g4

0xa3ba,	// (0x00019775) cale_bg_pane_g5

0xa3c2,	// (0x0001977d) cale_bg_pane_g6

0xa3ca,	// (0x00019785) cale_bg_pane_g7

0xa3d2,	// (0x0001978d) cale_bg_pane_g8

0xa3da,	// (0x00019795) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0001e6a0) cale_bg_pane_g

0xa3e2,	// (0x0001979d) list_cale_time_pane_ParamLimits

0xa3e2,	// (0x0001979d) list_cale_time_pane

0xa3f7,	// (0x000197b2) list_cale_time_pane_g1_ParamLimits

0xa3f7,	// (0x000197b2) list_cale_time_pane_g1

0xa403,	// (0x000197be) list_cale_time_pane_g2_ParamLimits

0xa403,	// (0x000197be) list_cale_time_pane_g2

0x2312,	// (0x000116cd) list_cale_time_pane_g3_ParamLimits

0x2312,	// (0x000116cd) list_cale_time_pane_g3

0x2320,	// (0x000116db) list_cale_time_pane_g4_ParamLimits

0x2320,	// (0x000116db) list_cale_time_pane_g4

0x232e,	// (0x000116e9) list_cale_time_pane_g5_ParamLimits

0x232e,	// (0x000116e9) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0001e6b3) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0001e6b3) list_cale_time_pane_g

0xa41d,	// (0x000197d8) list_cale_time_pane_t1_ParamLimits

0xa41d,	// (0x000197d8) list_cale_time_pane_t1

0xa445,	// (0x00019800) list_cale_time_pane_t2_ParamLimits

0xa445,	// (0x00019800) list_cale_time_pane_t2

0x26cd,	// (0x00011a88) aid_blid_cardinal_pane

0x270b,	// (0x00011ac6) compass_pane_t4

0xa46d,	// (0x00019828) list_cale_time_pane_t4_ParamLimits

0xa46d,	// (0x00019828) list_cale_time_pane_t4

0x2719,	// (0x00011ad4) compass_pane_t5

0x2727,	// (0x00011ae2) compass_pane_t6

0x2735,	// (0x00011af0) compass_pane_t7

0xa8f6,	// (0x00019cb1) navi_pane_cc_t1

0xaa5d,	// (0x00019e18) aid_phob_thumbnail_center_pane

0x2ebc,	// (0x00012277) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0001e6c0) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0001e6c0) list_cale_time_pane_t

0x967f,	// (0x00018a3a) bg_popup_window_pane_cp02_ParamLimits

0x967f,	// (0x00018a3a) bg_popup_window_pane_cp02

0xa495,	// (0x00019850) heading_pane_cp01_ParamLimits

0xa495,	// (0x00019850) heading_pane_cp01

0xa4a1,	// (0x0001985c) loc_req_pane_ParamLimits

0xa4a1,	// (0x0001985c) loc_req_pane

0xa4b1,	// (0x0001986c) loc_type_pane_ParamLimits

0xa4b1,	// (0x0001986c) loc_type_pane

0xa4c3,	// (0x0001987e) loc_type_pane_t1_ParamLimits

0xa4c3,	// (0x0001987e) loc_type_pane_t1

0xa4d5,	// (0x00019890) loc_type_pane_t2_ParamLimits

0xa4d5,	// (0x00019890) loc_type_pane_t2

0xa4e7,	// (0x000198a2) loc_type_pane_t3_ParamLimits

0xa4e7,	// (0x000198a2) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0001e6c7) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0001e6c7) loc_type_pane_t

0xa4f9,	// (0x000198b4) list_loc_req_pane

0xa503,	// (0x000198be) scroll_pane_cp012

0x233c,	// (0x000116f7) list_single_loc_request_popup_menu_pane_ParamLimits

0x233c,	// (0x000116f7) list_single_loc_request_popup_menu_pane

0xa50e,	// (0x000198c9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa50e,	// (0x000198c9) list_single_loc_request_popup_menu_pane_g1

0xa51a,	// (0x000198d5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa51a,	// (0x000198d5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0001e6ce) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0001e6ce) list_single_loc_request_popup_menu_pane_g

0xa526,	// (0x000198e1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa526,	// (0x000198e1) list_single_loc_request_popup_menu_pane_t1

0x9c83,	// (0x0001903e) bg_popup_window_pane_cp03_ParamLimits

0x9c83,	// (0x0001903e) bg_popup_window_pane_cp03

0xa53c,	// (0x000198f7) heading_loc_req_pane_ParamLimits

0xa53c,	// (0x000198f7) heading_loc_req_pane

0x2349,	// (0x00011704) popup_dyc_status_message_window_g1_ParamLimits

0x2349,	// (0x00011704) popup_dyc_status_message_window_g1

0x235d,	// (0x00011718) popup_dyc_status_message_window_t1_ParamLimits

0x235d,	// (0x00011718) popup_dyc_status_message_window_t1

0x2372,	// (0x0001172d) popup_dyc_status_message_window_t2_ParamLimits

0x2372,	// (0x0001172d) popup_dyc_status_message_window_t2

0x2387,	// (0x00011742) popup_dyc_status_message_window_t3_ParamLimits

0x2387,	// (0x00011742) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0001e6d3) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0001e6d3) popup_dyc_status_message_window_t

0x9a28,	// (0x00018de3) bg_heading_pane_cp01

0xa548,	// (0x00019903) heading_loc_req_pane_g1

0xa550,	// (0x0001990b) heading_loc_req_pane_g2

0xa558,	// (0x00019913) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0001e6da) heading_loc_req_pane_g

0xa560,	// (0x0001991b) heading_loc_req_pane_t1

0xa570,	// (0x0001992b) bg_popup_sub_pane_cp01_ParamLimits

0xa570,	// (0x0001992b) bg_popup_sub_pane_cp01

0xa57e,	// (0x00019939) popup_cale_events_window_g1_ParamLimits

0xa57e,	// (0x00019939) popup_cale_events_window_g1

0xa59e,	// (0x00019959) popup_cale_events_window_g2_ParamLimits

0xa59e,	// (0x00019959) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0001e70e) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0001e70e) popup_cale_events_window_g

0xa5be,	// (0x00019979) popup_cale_events_window_t1_ParamLimits

0xa5be,	// (0x00019979) popup_cale_events_window_t1

0xa5d0,	// (0x0001998b) popup_cale_events_window_t2_ParamLimits

0xa5d0,	// (0x0001998b) popup_cale_events_window_t2

0xa60e,	// (0x000199c9) popup_cale_events_window_t3_ParamLimits

0xa60e,	// (0x000199c9) popup_cale_events_window_t3

0xa648,	// (0x00019a03) popup_cale_events_window_t4_ParamLimits

0xa648,	// (0x00019a03) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0001e713) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0001e713) popup_cale_events_window_t

0x248c,	// (0x00011847) call_type_pane

0x249c,	// (0x00011857) popup_call_status_window_g1

0x24b0,	// (0x0001186b) popup_call_status_window_g2

0x24c4,	// (0x0001187f) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0001e71c) popup_call_status_window_g

0xa67e,	// (0x00019a39) call_type_pane_g1

0xa687,	// (0x00019a42) call_type_pane_g2

0x0001,

0xf368,	// (0x0001e723) call_type_pane_g

0x9a28,	// (0x00018de3) bg_popup_sub_pane_cp02

0xa690,	// (0x00019a4b) listscroll_popup_wml_pane

0xa698,	// (0x00019a53) list_wml_pane

0xa6a2,	// (0x00019a5d) scroll_pane_cp013

0xa6ad,	// (0x00019a68) list_single_graphic_popup_wml_pane_ParamLimits

0xa6ad,	// (0x00019a68) list_single_graphic_popup_wml_pane

0x9de3,	// (0x0001919e) list_single_graphic_popup_wml_pane_g1

0xa6c1,	// (0x00019a7c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0001e728) list_single_graphic_popup_wml_pane_g

0xa6c9,	// (0x00019a84) list_single_graphic_popup_wml_pane_t1

0xa6df,	// (0x00019a9a) aid_call_pane

0x9c7b,	// (0x00019036) popup_clock_analogue_window_g1

0x9c7b,	// (0x00019036) popup_clock_analogue_window_g2

0xa6e7,	// (0x00019aa2) popup_clock_analogue_window_g3

0xa6e7,	// (0x00019aa2) popup_clock_analogue_window_g4

0x9de3,	// (0x0001919e) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0001e72d) popup_clock_analogue_window_g

0xa6ef,	// (0x00019aaa) popup_clock_analogue_window_t1

0xa6fd,	// (0x00019ab8) clock_digital_number_pane_ParamLimits

0xa6fd,	// (0x00019ab8) clock_digital_number_pane

0xa709,	// (0x00019ac4) clock_digital_number_pane_cp02_ParamLimits

0xa709,	// (0x00019ac4) clock_digital_number_pane_cp02

0xa715,	// (0x00019ad0) clock_digital_number_pane_cp03_ParamLimits

0xa715,	// (0x00019ad0) clock_digital_number_pane_cp03

0xa721,	// (0x00019adc) clock_digital_number_pane_cp04_ParamLimits

0xa721,	// (0x00019adc) clock_digital_number_pane_cp04

0xa72d,	// (0x00019ae8) clock_digital_separator_pane_ParamLimits

0xa72d,	// (0x00019ae8) clock_digital_separator_pane

0xa739,	// (0x00019af4) popup_clock_digital_window_t1

0x9de3,	// (0x0001919e) clock_digital_number_pane_g1

0x9de3,	// (0x0001919e) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0001e69b) clock_digital_number_pane_g

0x9de3,	// (0x0001919e) clock_digital_separator_pane_g1

0x9de3,	// (0x0001919e) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0001e69b) clock_digital_separator_pane_g

0x9a28,	// (0x00018de3) bg_popup_window_pane_cp04

0xa756,	// (0x00019b11) heading_pane_cp03

0xa75e,	// (0x00019b19) listscroll_popup_gms_pane

0xa766,	// (0x00019b21) grid_large_graphic_popup_pane

0xa770,	// (0x00019b2b) listscroll_popup_gms_pane_g1

0xa778,	// (0x00019b33) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0001e738) listscroll_popup_gms_pane_g

0xa171,	// (0x0001952c) scroll_pane_cp014

0x24d4,	// (0x0001188f) cell_large_graphic_popup_pane_ParamLimits

0x24d4,	// (0x0001188f) cell_large_graphic_popup_pane

0x24ec,	// (0x000118a7) cell_large_graphic_popup_pane_g1_ParamLimits

0x24ec,	// (0x000118a7) cell_large_graphic_popup_pane_g1

0xa780,	// (0x00019b3b) cell_large_graphic_popup_pane_g2_ParamLimits

0xa780,	// (0x00019b3b) cell_large_graphic_popup_pane_g2

0xa78c,	// (0x00019b47) cell_large_graphic_popup_pane_g3_ParamLimits

0xa78c,	// (0x00019b47) cell_large_graphic_popup_pane_g3

0xa799,	// (0x00019b54) cell_large_graphic_popup_pane_g4_ParamLimits

0xa799,	// (0x00019b54) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0001e73d) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0001e73d) cell_large_graphic_popup_pane_g

0xa7a9,	// (0x00019b64) grid_highlight_pane_cp010

0x9de3,	// (0x0001919e) bg_popup_call_pane_g1

0xa7b3,	// (0x00019b6e) list_single_graphic_popup_conf_pane_ParamLimits

0xa7b3,	// (0x00019b6e) list_single_graphic_popup_conf_pane

0xa7c5,	// (0x00019b80) list_highlight_pane_cp01

0xa7ce,	// (0x00019b89) list_single_graphic_popup_conf_pane_g1

0xa7d6,	// (0x00019b91) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0001e746) list_single_graphic_popup_conf_pane_g

0xa7de,	// (0x00019b99) list_single_graphic_popup_conf_pane_t1

0xa7ec,	// (0x00019ba7) linegrid_cams_pane_g1

0x24f8,	// (0x000118b3) linegrid_cams_pane_g2

0x9f9a,	// (0x00019355) linegrid_cams_pane_g3

0xa7f5,	// (0x00019bb0) linegrid_cams_pane_g4

0x2501,	// (0x000118bc) linegrid_cams_pane_g5

0x250a,	// (0x000118c5) linegrid_cams_pane_g6

0x9fa3,	// (0x0001935e) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0001e74b) linegrid_cams_pane_g

0xa7fe,	// (0x00019bb9) popup_clock_analogue_window

0xa7fe,	// (0x00019bb9) popup_clock_digital_window

0x9a28,	// (0x00018de3) popup_phob_thumbnail_window

0x9de3,	// (0x0001919e) call_video_uplink_pane_g1

0xa807,	// (0x00019bc2) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0001e75a) call_video_uplink_pane_g

0xa80f,	// (0x00019bca) video_uplink_pane

0xa817,	// (0x00019bd2) mce_image_pane_g1

0x2515,	// (0x000118d0) mce_image_pane_g2

0x251f,	// (0x000118da) mce_image_pane_g3

0x2529,	// (0x000118e4) mce_image_pane_g4

0x2531,	// (0x000118ec) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0001e75f) mce_image_pane_g

0xa821,	// (0x00019bdc) control_top_pane_stacon_cp01_ParamLimits

0xa821,	// (0x00019bdc) control_top_pane_stacon_cp01

0xa835,	// (0x00019bf0) uni_indicator_pane_stacon_cp01_ParamLimits

0xa835,	// (0x00019bf0) uni_indicator_pane_stacon_cp01

0xa846,	// (0x00019c01) bg_popup_sub_pane_cp03

0x2539,	// (0x000118f4) chi_dic_find_pane

0x2541,	// (0x000118fc) listscroll_chi_dic_pane

0x254a,	// (0x00011905) main_pane_chidic_g1

0x255d,	// (0x00011918) chi_dic_find_pane_t1

0xa850,	// (0x00019c0b) find_chidic_pane

0xa859,	// (0x00019c14) chi_dic_list_pane_ParamLimits

0xa859,	// (0x00019c14) chi_dic_list_pane

0xa86a,	// (0x00019c25) scroll_pane_cp020

0x256b,	// (0x00011926) find_chidic_pane_t1

0x9a28,	// (0x00018de3) input_focus_pane_cp06

0x0183,	// (0x0000f53e) list_chi_dic_pane_ParamLimits

0x0183,	// (0x0000f53e) list_chi_dic_pane

0x257a,	// (0x00011935) list_chi_dic_pane_t1_ParamLimits

0x257a,	// (0x00011935) list_chi_dic_pane_t1

0x9a28,	// (0x00018de3) list_highlight_pane_cp020

0xa872,	// (0x00019c2d) bg_cale_heading_pane_g1

0x258d,	// (0x00011948) bg_cale_heading_pane_g2

0x2595,	// (0x00011950) bg_cale_heading_pane_g3

0x259d,	// (0x00011958) bg_cale_heading_pane_g4

0x25a7,	// (0x00011962) bg_cale_heading_pane_g5

0x25b1,	// (0x0001196c) bg_cale_heading_pane_g6

0x25b9,	// (0x00011974) bg_cale_heading_pane_g7

0x25c1,	// (0x0001197c) bg_cale_heading_pane_g8

0x25cb,	// (0x00011986) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0001e76a) bg_cale_heading_pane_g

0xa872,	// (0x00019c2d) bg_cale_side_pane_g1

0x25d5,	// (0x00011990) bg_cale_side_pane_g2

0x25df,	// (0x0001199a) bg_cale_side_pane_g3

0x25e9,	// (0x000119a4) bg_cale_side_pane_g4

0x25f3,	// (0x000119ae) bg_cale_side_pane_g5

0x25fd,	// (0x000119b8) bg_cale_side_pane_g6

0x2607,	// (0x000119c2) bg_cale_side_pane_g7

0x2611,	// (0x000119cc) bg_cale_side_pane_g8

0x2619,	// (0x000119d4) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0001e77d) bg_cale_side_pane_g

0x2621,	// (0x000119dc) popup_call_status_window_ParamLimits

0x2621,	// (0x000119dc) popup_call_status_window

0xa87a,	// (0x00019c35) stacon_top_pane

0xa882,	// (0x00019c3d) status_pane_ParamLimits

0xa882,	// (0x00019c3d) status_pane

0xa897,	// (0x00019c52) status_small_pane

0xa89f,	// (0x00019c5a) control_pane

0x9a28,	// (0x00018de3) stacon_bottom_pane

0xa8a7,	// (0x00019c62) list_single_mce_smart_pane_t1_ParamLimits

0xa8a7,	// (0x00019c62) list_single_mce_smart_pane_t1

0xa8ba,	// (0x00019c75) list_single_mce_smart_pane_t2_ParamLimits

0xa8ba,	// (0x00019c75) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0001e790) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0001e790) list_single_mce_smart_pane_t

0x266e,	// (0x00011a29) compass_pane

0x2679,	// (0x00011a34) main_location2_pane_t1

0x268d,	// (0x00011a48) main_location2_pane_t2

0x26a3,	// (0x00011a5e) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0001e795) main_location2_pane_t

0xa8d9,	// (0x00019c94) compass_pane_g1_ParamLimits

0xa8d9,	// (0x00019c94) compass_pane_g1

0x26ed,	// (0x00011aa8) compass_pane_t1

0x26fc,	// (0x00011ab7) compass_pane_t2

0x0005,

0xf3e3,	// (0x0001e79e) compass_pane_t

0x2743,	// (0x00011afe) text_secondary_cp61

0xa8ed,	// (0x00019ca8) navi_pane_cams_g5

0xa910,	// (0x00019ccb) navi_pane_im_t1

0xa91e,	// (0x00019cd9) navi_pane_mp_g1_ParamLimits

0xa91e,	// (0x00019cd9) navi_pane_mp_g1

0xa932,	// (0x00019ced) navi_pane_mp_g2_ParamLimits

0xa932,	// (0x00019ced) navi_pane_mp_g2

0xa93e,	// (0x00019cf9) navi_pane_mp_g3_ParamLimits

0xa93e,	// (0x00019cf9) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0001e7b2) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0001e7b2) navi_pane_mp_g

0xa94a,	// (0x00019d05) navi_pane_mp_t1

0xa958,	// (0x00019d13) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0001e7b9) navi_pane_mp_t

0xa994,	// (0x00019d4f) navi_pane_vt_g1

0xa94a,	// (0x00019d05) navi_pane_vt_t1

0xa99c,	// (0x00019d57) navi_slider_pane

0xa9a4,	// (0x00019d5f) zooming_pane

0xa9ac,	// (0x00019d67) navi_slider_pane_g1

0xa9b5,	// (0x00019d70) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0001e7c0) navi_slider_pane_g

0xa9e2,	// (0x00019d9d) aid_levels_zoom

0xa9ea,	// (0x00019da5) zooming_pane_g1

0xa9f2,	// (0x00019dad) zooming_pane_g2

0xa9f2,	// (0x00019dad) zooming_pane_g3

0x0002,

0xf414,	// (0x0001e7cf) zooming_pane_g

0xa9fa,	// (0x00019db5) level_10_zoom

0xaa03,	// (0x00019dbe) level_11_zoom

0xaa0c,	// (0x00019dc7) level_1_zoom

0xaa15,	// (0x00019dd0) level_2_zoom

0xaa1e,	// (0x00019dd9) level_3_zoom

0xaa27,	// (0x00019de2) level_4_zoom

0xaa30,	// (0x00019deb) level_5_zoom

0xaa39,	// (0x00019df4) level_6_zoom

0xaa42,	// (0x00019dfd) level_7_zoom

0xaa4b,	// (0x00019e06) level_8_zoom

0xaa54,	// (0x00019e0f) level_9_zoom

0xaa65,	// (0x00019e20) popup_phob_thumbnail_window_g1

0xaa6d,	// (0x00019e28) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0001e7d6) popup_phob_thumbnail_window_g

0xbdea,	// (0x0001b1a5) level_1_location

0xbdf2,	// (0x0001b1ad) level_2_location

0xbdfa,	// (0x0001b1b5) level_3_location

0xbe02,	// (0x0001b1bd) level_4_location

0xa9a4,	// (0x00019d5f) level_5_location

0x288c,	// (0x00011c47) mce_icon_pane_g1

0x2896,	// (0x00011c51) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0001e7db) mce_icon_pane_g

0x289e,	// (0x00011c59) main_mup_pane_g1_ParamLimits

0x289e,	// (0x00011c59) main_mup_pane_g1

0x28b4,	// (0x00011c6f) main_mup_pane_g2_ParamLimits

0x28b4,	// (0x00011c6f) main_mup_pane_g2

0x28cc,	// (0x00011c87) main_mup_pane_g3_ParamLimits

0x28cc,	// (0x00011c87) main_mup_pane_g3

0x28e4,	// (0x00011c9f) main_mup_pane_g4_ParamLimits

0x28e4,	// (0x00011c9f) main_mup_pane_g4

0x28fc,	// (0x00011cb7) main_mup_pane_g5_ParamLimits

0x28fc,	// (0x00011cb7) main_mup_pane_g5

0x2918,	// (0x00011cd3) main_mup_pane_g6_ParamLimits

0x2918,	// (0x00011cd3) main_mup_pane_g6

0x2932,	// (0x00011ced) main_mup_pane_g7_ParamLimits

0x2932,	// (0x00011ced) main_mup_pane_g7

0x2950,	// (0x00011d0b) main_mup_pane_g8_ParamLimits

0x2950,	// (0x00011d0b) main_mup_pane_g8

0x296e,	// (0x00011d29) main_mup_pane_g9_ParamLimits

0x296e,	// (0x00011d29) main_mup_pane_g9

0x298a,	// (0x00011d45) main_mup_pane_g10_ParamLimits

0x298a,	// (0x00011d45) main_mup_pane_g10

0x29a8,	// (0x00011d63) main_mup_pane_g11_ParamLimits

0x29a8,	// (0x00011d63) main_mup_pane_g11

0x29c2,	// (0x00011d7d) main_mup_pane_g12_ParamLimits

0x29c2,	// (0x00011d7d) main_mup_pane_g12

0x29d8,	// (0x00011d93) main_mup_pane_g13_ParamLimits

0x29d8,	// (0x00011d93) main_mup_pane_g13

0x000c,

0xf425,	// (0x0001e7e0) main_mup_pane_g_ParamLimits

0xf425,	// (0x0001e7e0) main_mup_pane_g

0x29ec,	// (0x00011da7) main_mup_pane_t1_ParamLimits

0x29ec,	// (0x00011da7) main_mup_pane_t1

0x2a08,	// (0x00011dc3) main_mup_pane_t2_ParamLimits

0x2a08,	// (0x00011dc3) main_mup_pane_t2

0x2a20,	// (0x00011ddb) main_mup_pane_t3_ParamLimits

0x2a20,	// (0x00011ddb) main_mup_pane_t3

0x2a38,	// (0x00011df3) main_mup_pane_t4_ParamLimits

0x2a38,	// (0x00011df3) main_mup_pane_t4

0x2a56,	// (0x00011e11) main_mup_pane_t5_ParamLimits

0x2a56,	// (0x00011e11) main_mup_pane_t5

0x2a6b,	// (0x00011e26) main_mup_pane_t6_ParamLimits

0x2a6b,	// (0x00011e26) main_mup_pane_t6

0x0005,

0xf440,	// (0x0001e7fb) main_mup_pane_t_ParamLimits

0xf440,	// (0x0001e7fb) main_mup_pane_t

0x2a7d,	// (0x00011e38) mup_progress_pane_ParamLimits

0x2a7d,	// (0x00011e38) mup_progress_pane

0x2a89,	// (0x00011e44) mup_visualizer_pane_ParamLimits

0x2a89,	// (0x00011e44) mup_visualizer_pane

0x2abd,	// (0x00011e78) mup_volume_pane_ParamLimits

0x2abd,	// (0x00011e78) mup_volume_pane

0xaa75,	// (0x00019e30) mup_visualizer_pane_g1_ParamLimits

0xaa75,	// (0x00019e30) mup_visualizer_pane_g1

0xaa75,	// (0x00019e30) mup_visualizer_pane_g2_ParamLimits

0xaa75,	// (0x00019e30) mup_visualizer_pane_g2

0xa8d9,	// (0x00019c94) mup_visualizer_pane_g3_ParamLimits

0xa8d9,	// (0x00019c94) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0001e808) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0001e808) mup_visualizer_pane_g

0x9de3,	// (0x0001919e) mup_volume_pane_g1

0xaa8b,	// (0x00019e46) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0001e80f) mup_volume_pane_g

0x9de3,	// (0x0001919e) mup_progress_pane_g1

0xaa94,	// (0x00019e4f) mup_progress_pane_g2

0xaa9d,	// (0x00019e58) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0001e814) mup_progress_pane_g

0x9a28,	// (0x00018de3) bg_popup_window_pane_cp05

0xaaa6,	// (0x00019e61) heading_pane_cp02_ParamLimits

0xaaa6,	// (0x00019e61) heading_pane_cp02

0xaac2,	// (0x00019e7d) list_popup_blid_pane

0xaaca,	// (0x00019e85) list_blid_sat_info_pane_ParamLimits

0xaaca,	// (0x00019e85) list_blid_sat_info_pane

0xaadd,	// (0x00019e98) list_blid_sat_info_pane_g1

0xaae5,	// (0x00019ea0) list_blid_sat_info_pane_t1

0x2be7,	// (0x00011fa2) mup_equalizer_pane_ParamLimits

0x2be7,	// (0x00011fa2) mup_equalizer_pane

0x2c08,	// (0x00011fc3) mup_equalizer_pane_cp1_ParamLimits

0x2c08,	// (0x00011fc3) mup_equalizer_pane_cp1

0x2c29,	// (0x00011fe4) mup_equalizer_pane_cp2_ParamLimits

0x2c29,	// (0x00011fe4) mup_equalizer_pane_cp2

0x2c4e,	// (0x00012009) mup_equalizer_pane_cp3_ParamLimits

0x2c4e,	// (0x00012009) mup_equalizer_pane_cp3

0x2c77,	// (0x00012032) mup_equalizer_pane_cp4_ParamLimits

0x2c77,	// (0x00012032) mup_equalizer_pane_cp4

0x2ca0,	// (0x0001205b) mup_equalizer_pane_cp5

0x2cb8,	// (0x00012073) mup_equalizer_pane_cp6

0x2cd0,	// (0x0001208b) mup_equalizer_pane_cp7

0xbd04,	// (0x0001b0bf) bg_popup_call_poc_act_pane_g9

0xbd0c,	// (0x0001b0c7) bg_popup_call_poc_act_pane_g10

0xbd14,	// (0x0001b0cf) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c83,	// (0x0001903e) mup_scale_pane

0x9de3,	// (0x0001919e) mup_scale_pane_g1

0xaaf3,	// (0x00019eae) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0001e830) mup_scale_pane_g

0xab17,	// (0x00019ed2) msg_data_pane

0xab1f,	// (0x00019eda) scroll_pane_cp017

0x2cfa,	// (0x000120b5) bg_list_pane_cp04_ParamLimits

0x2cfa,	// (0x000120b5) bg_list_pane_cp04

0xab2f,	// (0x00019eea) msg_data_pane_g1

0x2d1a,	// (0x000120d5) msg_data_pane_g2

0x2d24,	// (0x000120df) msg_data_pane_g3

0x2d2e,	// (0x000120e9) msg_data_pane_g4

0x2d36,	// (0x000120f1) msg_data_pane_g5

0x2d3e,	// (0x000120f9) msg_data_pane_g6

0x2d46,	// (0x00012101) msg_data_pane_g7

0x0006,

0xf484,	// (0x0001e83f) msg_data_pane_g

0x2d4e,	// (0x00012109) msg_text_pane_ParamLimits

0x2d4e,	// (0x00012109) msg_text_pane

0x2d76,	// (0x00012131) qrid_highlight_pane_cp011_ParamLimits

0x2d76,	// (0x00012131) qrid_highlight_pane_cp011

0x9a28,	// (0x00018de3) msg_body_pane

0x9a28,	// (0x00018de3) msg_header_pane

0xab37,	// (0x00019ef2) input_focus_pane_cp07

0xab4c,	// (0x00019f07) msg_header_pane_t1_ParamLimits

0xab4c,	// (0x00019f07) msg_header_pane_t1

0xab5e,	// (0x00019f19) msg_header_pane_t2_ParamLimits

0xab5e,	// (0x00019f19) msg_header_pane_t2

0x0001,

0xf498,	// (0x0001e853) msg_header_pane_t_ParamLimits

0xf498,	// (0x0001e853) msg_header_pane_t

0xab70,	// (0x00019f2b) msg_body_pane_g1

0x2da5,	// (0x00012160) msg_body_pane_t1_ParamLimits

0x2da5,	// (0x00012160) msg_body_pane_t1

0xab78,	// (0x00019f33) msg_body_pane_t2_ParamLimits

0xab78,	// (0x00019f33) msg_body_pane_t2

0xab8a,	// (0x00019f45) msg_body_pane_t3_ParamLimits

0xab8a,	// (0x00019f45) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0001e858) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0001e858) msg_body_pane_t

0x2e10,	// (0x000121cb) main_viewer_pane_g1_ParamLimits

0x2e10,	// (0x000121cb) main_viewer_pane_g1

0x2e1e,	// (0x000121d9) main_viewer_pane_g2_ParamLimits

0x2e1e,	// (0x000121d9) main_viewer_pane_g2

0x2e2c,	// (0x000121e7) main_viewer_pane_g3_ParamLimits

0x2e2c,	// (0x000121e7) main_viewer_pane_g3

0x2e3b,	// (0x000121f6) main_viewer_pane_g4_ParamLimits

0x2e3b,	// (0x000121f6) main_viewer_pane_g4

0xabb4,	// (0x00019f6f) main_viewer_pane_g5_ParamLimits

0xabb4,	// (0x00019f6f) main_viewer_pane_g5

0xabb4,	// (0x00019f6f) main_viewer_pane_g7_ParamLimits

0xabb4,	// (0x00019f6f) main_viewer_pane_g7

0xabc6,	// (0x00019f81) main_viewer_pane_g8_ParamLimits

0xabc6,	// (0x00019f81) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0001e868) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0001e868) main_viewer_pane_g

0xabde,	// (0x00019f99) viewer_content_pane_ParamLimits

0xabde,	// (0x00019f99) viewer_content_pane

0x2e79,	// (0x00012234) main_postcard_pane_g1_ParamLimits

0x2e79,	// (0x00012234) main_postcard_pane_g1

0x2e8f,	// (0x0001224a) main_postcard_pane_g2_ParamLimits

0x2e8f,	// (0x0001224a) main_postcard_pane_g2

0x2ea5,	// (0x00012260) main_postcard_pane_g3_ParamLimits

0x2ea5,	// (0x00012260) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0001e879) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0001e879) main_postcard_pane_g

0x2ebc,	// (0x00012277) main_postcard_pane_g4

0xbf2d,	// (0x0001b2e8) smil_status_volume_pane_g2

0x2eff,	// (0x000122ba) postcard_pane_ParamLimits

0x2eff,	// (0x000122ba) postcard_pane

0xabec,	// (0x00019fa7) postcard_pane_g1_ParamLimits

0xabec,	// (0x00019fa7) postcard_pane_g1

0x2f4f,	// (0x0001230a) postcard_pane_g2_ParamLimits

0x2f4f,	// (0x0001230a) postcard_pane_g2

0x2f5b,	// (0x00012316) postcard_pane_g3_ParamLimits

0x2f5b,	// (0x00012316) postcard_pane_g3

0xabfa,	// (0x00019fb5) postcard_pane_g4_ParamLimits

0xabfa,	// (0x00019fb5) postcard_pane_g4

0x2f67,	// (0x00012322) postcard_pane_g5_ParamLimits

0x2f67,	// (0x00012322) postcard_pane_g5

0x2f7c,	// (0x00012337) postcard_pane_g6_ParamLimits

0x2f7c,	// (0x00012337) postcard_pane_g6

0xabec,	// (0x00019fa7) postcard_pane_g7_ParamLimits

0xabec,	// (0x00019fa7) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0001e886) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0001e886) postcard_pane_g

0x2f94,	// (0x0001234f) main_mp2_pane_g1_ParamLimits

0x2f94,	// (0x0001234f) main_mp2_pane_g1

0x2fa2,	// (0x0001235d) main_mp2_pane_g2_ParamLimits

0x2fa2,	// (0x0001235d) main_mp2_pane_g2

0x2fae,	// (0x00012369) main_mp2_pane_g3_ParamLimits

0x2fae,	// (0x00012369) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0001e895) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0001e895) main_mp2_pane_g

0x2fba,	// (0x00012375) main_mp2_pane_t1_ParamLimits

0x2fba,	// (0x00012375) main_mp2_pane_t1

0x2fd1,	// (0x0001238c) main_mp2_pane_t2_ParamLimits

0x2fd1,	// (0x0001238c) main_mp2_pane_t2

0x2fe3,	// (0x0001239e) main_mp2_pane_t3_ParamLimits

0x2fe3,	// (0x0001239e) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0001e89c) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0001e89c) main_mp2_pane_t

0xac08,	// (0x00019fc3) pec_content_pane_ParamLimits

0xac08,	// (0x00019fc3) pec_content_pane

0xa171,	// (0x0001952c) scroll_pane_cp015

0xac1a,	// (0x00019fd5) pec_attribute_pane_ParamLimits

0xac1a,	// (0x00019fd5) pec_attribute_pane

0x2ff5,	// (0x000123b0) pec_content_pane_g1_ParamLimits

0x2ff5,	// (0x000123b0) pec_content_pane_g1

0xac2a,	// (0x00019fe5) pec_content_pane_t1_ParamLimits

0xac2a,	// (0x00019fe5) pec_content_pane_t1

0xac3c,	// (0x00019ff7) pec_content_pane_t2_ParamLimits

0xac3c,	// (0x00019ff7) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0001e8a3) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0001e8a3) pec_content_pane_t

0x3001,	// (0x000123bc) list_single_graphic_pane_cp01_ParamLimits

0x3001,	// (0x000123bc) list_single_graphic_pane_cp01

0x9c83,	// (0x0001903e) bg_popup_sub_pane_cp04

0xac4e,	// (0x0001a009) popup_mup_playback_window_g1

0xac5a,	// (0x0001a015) popup_mup_playback_window_t1

0xac6f,	// (0x0001a02a) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0001e8a8) popup_mup_playback_window_t

0xaca6,	// (0x0001a061) main_image_pane_g1_ParamLimits

0xaca6,	// (0x0001a061) main_image_pane_g1

0xace9,	// (0x0001a0a4) scroll_pane_cp018_ParamLimits

0xace9,	// (0x0001a0a4) scroll_pane_cp018

0xad01,	// (0x0001a0bc) scroll_pane_cp016_ParamLimits

0xad01,	// (0x0001a0bc) scroll_pane_cp016

0x30d0,	// (0x0001248b) smil2_image_pane_ParamLimits

0x30d0,	// (0x0001248b) smil2_image_pane

0x3106,	// (0x000124c1) smil2_root_pane_ParamLimits

0x3106,	// (0x000124c1) smil2_root_pane

0x313e,	// (0x000124f9) smil2_text_pane_ParamLimits

0x313e,	// (0x000124f9) smil2_text_pane

0x9a28,	// (0x00018de3) bg_list_pane_cp06

0xad3d,	// (0x0001a0f8) grid_radio_pane

0x9a28,	// (0x00018de3) bg_popup_window_pane_cp06

0xad47,	// (0x0001a102) main_fmradio_pane_t1

0xa756,	// (0x00019b11) heading_pane_cp04

0xad55,	// (0x0001a110) main_fmradio_pane_t2

0xbd1c,	// (0x0001b0d7) popup_cale_lunar_info_window_g1

0xad63,	// (0x0001a11e) main_fmradio_pane_t3

0xbd24,	// (0x0001b0df) popup_cale_lunar_info_window_g2

0xad73,	// (0x0001a12e) main_fmradio_pane_t4

0x0001,

0xad81,	// (0x0001a13c) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0001e983) popup_cale_lunar_info_window_g

0xf502,	// (0x0001e8bd) main_fmradio_pane_t

0xad8f,	// (0x0001a14a) wait_bar_pane_cp03

0xa3e2,	// (0x0001979d) cell_fmradio_pane_ParamLimits

0xa3e2,	// (0x0001979d) cell_fmradio_pane

0xabec,	// (0x00019fa7) cell_fmradio_pane_g1_ParamLimits

0xabec,	// (0x00019fa7) cell_fmradio_pane_g1

0x9a28,	// (0x00018de3) grid_highlight_pane_cp011

0xad97,	// (0x0001a152) poc_content_pane_ParamLimits

0xad97,	// (0x0001a152) poc_content_pane

0xada9,	// (0x0001a164) scroll_pane_cp019

0x31ce,	// (0x00012589) popup_call_poc_act_window_ParamLimits

0x31ce,	// (0x00012589) popup_call_poc_act_window

0x31f2,	// (0x000125ad) popup_call_poc_inact_window_ParamLimits

0x31f2,	// (0x000125ad) popup_call_poc_inact_window

0xf59f,	// (0x0001e95a) bg_popup_call_poc_act_pane_g

0xbc94,	// (0x0001b04f) bg_popup_call_poc_inact_pane_g1

0xbc9c,	// (0x0001b057) bg_popup_call_poc_inact_pane_g2

0xadb1,	// (0x0001a16c) popup_call_poc_act_window_g2

0xbca4,	// (0x0001b05f) bg_popup_call_poc_inact_pane_g3

0xbcac,	// (0x0001b067) bg_popup_call_poc_inact_pane_g4

0xbcb4,	// (0x0001b06f) bg_popup_call_poc_inact_pane_g5

0xadb9,	// (0x0001a174) popup_call_poc_act_window_t1_ParamLimits

0xadb9,	// (0x0001a174) popup_call_poc_act_window_t1

0xade1,	// (0x0001a19c) popup_call_poc_act_window_t2_ParamLimits

0xade1,	// (0x0001a19c) popup_call_poc_act_window_t2

0xae09,	// (0x0001a1c4) popup_call_poc_act_window_t3_ParamLimits

0xae09,	// (0x0001a1c4) popup_call_poc_act_window_t3

0xae31,	// (0x0001a1ec) popup_call_poc_act_window_t4_ParamLimits

0xae31,	// (0x0001a1ec) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0001e8c8) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0001e8c8) popup_call_poc_act_window_t

0xbcbc,	// (0x0001b077) bg_popup_call_poc_inact_pane_g6

0xbcc4,	// (0x0001b07f) bg_popup_call_poc_inact_pane_g7

0xbccc,	// (0x0001b087) bg_popup_call_poc_inact_pane_g8

0xae43,	// (0x0001a1fe) popup_call_poc_inact_window_g2

0xbcd4,	// (0x0001b08f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0001e947) bg_popup_call_poc_inact_pane_g

0xae4b,	// (0x0001a206) popup_call_poc_inact_window_t1_ParamLimits

0xae4b,	// (0x0001a206) popup_call_poc_inact_window_t1

0xae60,	// (0x0001a21b) popup_call_poc_inact_window_t2_ParamLimits

0xae60,	// (0x0001a21b) popup_call_poc_inact_window_t2

0xae75,	// (0x0001a230) popup_call_poc_inact_window_t3_ParamLimits

0xae75,	// (0x0001a230) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0001e8d1) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0001e8d1) popup_call_poc_inact_window_t

0xbea0,	// (0x0001b25b) context_pane_ParamLimits

0x3a9a,	// (0x00012e55) signal_pane_ParamLimits

0xa9a4,	// (0x00019d5f) main_call2_pane

0xbe8e,	// (0x0001b249) popup_phob_thumbnail2_window_ParamLimits

0xbe8e,	// (0x0001b249) popup_phob_thumbnail2_window

0xab9c,	// (0x00019f57) aid_hotspot_pointer_arrow_pane

0xaba4,	// (0x00019f5f) aid_hotspot_pointer_hand_pane

0x355a,	// (0x00012915) phob_pre_status_pane_g5

0x0d37,	// (0x000100f2) cams_zoom_pane_ParamLimits

0x0d46,	// (0x00010101) image_vga_pane_ParamLimits

0x0d60,	// (0x0001011b) main_camera_pane_g1_ParamLimits

0x0d72,	// (0x0001012d) main_camera_pane_g2_ParamLimits

0x0d82,	// (0x0001013d) main_camera_pane_g3_ParamLimits

0x0d96,	// (0x00010151) main_camera_pane_g4_ParamLimits

0x0daa,	// (0x00010165) main_camera_pane_g5_ParamLimits

0x0dbe,	// (0x00010179) main_camera_pane_g6_ParamLimits

0x0dd2,	// (0x0001018d) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0001e5d0) main_camera_pane_g_ParamLimits

0x0de6,	// (0x000101a1) main_camera_pane_t1_ParamLimits

0x0dfc,	// (0x000101b7) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0001e5e1) main_camera_pane_t_ParamLimits

0x9c83,	// (0x0001903e) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c83,	// (0x0001903e) bg_popup_preview_window_pane_cp01

0xae8a,	// (0x0001a245) popup_phob_thumbnail2_window_g1_ParamLimits

0xae8a,	// (0x0001a245) popup_phob_thumbnail2_window_g1

0x9a28,	// (0x00018de3) call2_cli_visual_pane

0x3226,	// (0x000125e1) popup_call2_audio_conf_window_ParamLimits

0x3226,	// (0x000125e1) popup_call2_audio_conf_window

0x324e,	// (0x00012609) popup_call2_audio_first_window_ParamLimits

0x324e,	// (0x00012609) popup_call2_audio_first_window

0x32e4,	// (0x0001269f) popup_call2_audio_in_window_ParamLimits

0x32e4,	// (0x0001269f) popup_call2_audio_in_window

0x3330,	// (0x000126eb) popup_call2_audio_out_window_ParamLimits

0x3330,	// (0x000126eb) popup_call2_audio_out_window

0x33a2,	// (0x0001275d) popup_call2_audio_second_window_ParamLimits

0x33a2,	// (0x0001275d) popup_call2_audio_second_window

0x3408,	// (0x000127c3) popup_call2_audio_wait_window_ParamLimits

0x3408,	// (0x000127c3) popup_call2_audio_wait_window

0x9a28,	// (0x00018de3) bg_popup_call2_act_pane_cp03

0x9c65,	// (0x00019020) list_conf_pane_cp

0xae96,	// (0x0001a251) popup_call2_audio_conf_window_t1

0xaea4,	// (0x0001a25f) list_single_graphic_popup_conf2_pane_ParamLimits

0xaea4,	// (0x0001a25f) list_single_graphic_popup_conf2_pane

0xa7c5,	// (0x00019b80) list_highlight_pane_cp04

0xaeb7,	// (0x0001a272) list_single_graphic_popup_conf2_pane_g1

0xa7d6,	// (0x00019b91) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0001e8d8) list_single_graphic_popup_conf2_pane_g

0xaec1,	// (0x0001a27c) list_single_graphic_popup_conf2_pane_t1

0xaecf,	// (0x0001a28a) bg_popup_call2_act_pane_cp01_ParamLimits

0xaecf,	// (0x0001a28a) bg_popup_call2_act_pane_cp01

0xaf59,	// (0x0001a314) call_type_pane_cp05_ParamLimits

0xaf59,	// (0x0001a314) call_type_pane_cp05

0xafad,	// (0x0001a368) popup_call2_audio_second_window_g1_ParamLimits

0xafad,	// (0x0001a368) popup_call2_audio_second_window_g1

0xb001,	// (0x0001a3bc) popup_call2_audio_second_window_g2_ParamLimits

0xb001,	// (0x0001a3bc) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0001e8dd) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0001e8dd) popup_call2_audio_second_window_g

0xb066,	// (0x0001a421) popup_call2_audio_second_window_t1_ParamLimits

0xb066,	// (0x0001a421) popup_call2_audio_second_window_t1

0xb121,	// (0x0001a4dc) popup_call2_audio_second_window_t2_ParamLimits

0xb121,	// (0x0001a4dc) popup_call2_audio_second_window_t2

0xb174,	// (0x0001a52f) popup_call2_audio_second_window_t3_ParamLimits

0xb174,	// (0x0001a52f) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0001e8e4) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0001e8e4) popup_call2_audio_second_window_t

0x9a28,	// (0x00018de3) bg_popup_call2_in_pane_cp02

0x9a32,	// (0x00018ded) call_type_pane_cp04

0x9a3a,	// (0x00018df5) popup_call2_audio_wait_window_g1

0x9a42,	// (0x00018dfd) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0001e4bd) popup_call2_audio_wait_window_g

0x9a4a,	// (0x00018e05) popup_call2_audio_wait_window_t3

0xb267,	// (0x0001a622) bg_popup_call2_act_pane_ParamLimits

0xb267,	// (0x0001a622) bg_popup_call2_act_pane

0xb327,	// (0x0001a6e2) call_type_pane_cp03_ParamLimits

0xb327,	// (0x0001a6e2) call_type_pane_cp03

0xb38b,	// (0x0001a746) popup_call2_audio_first_window_g1_ParamLimits

0xb38b,	// (0x0001a746) popup_call2_audio_first_window_g1

0xb3fb,	// (0x0001a7b6) popup_call2_audio_first_window_g2_ParamLimits

0xb3fb,	// (0x0001a7b6) popup_call2_audio_first_window_g2

0xaa75,	// (0x00019e30) popup_call2_audio_first_window_g3_ParamLimits

0xaa75,	// (0x00019e30) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0001e8ed) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0001e8ed) popup_call2_audio_first_window_g

0xb4d9,	// (0x0001a894) popup_call2_audio_first_window_t1_ParamLimits

0xb4d9,	// (0x0001a894) popup_call2_audio_first_window_t1

0xb5dc,	// (0x0001a997) popup_call2_audio_first_window_t4_ParamLimits

0xb5dc,	// (0x0001a997) popup_call2_audio_first_window_t4

0xb6bf,	// (0x0001aa7a) popup_call2_audio_first_window_t5_ParamLimits

0xb6bf,	// (0x0001aa7a) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0001e8f8) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0001e8f8) popup_call2_audio_first_window_t

0x9c7b,	// (0x00019036) bg_popup_call2_act_pane_g1

0xbd2e,	// (0x0001b0e9) popup_cale_lunar_info_window_t1

0xbd3c,	// (0x0001b0f7) popup_cale_lunar_info_window_t2

0xbd4a,	// (0x0001b105) popup_cale_lunar_info_window_t3

0x9a28,	// (0x00018de3) bg_popup_call2_bubble_pane

0xb7c0,	// (0x0001ab7b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb7c0,	// (0x0001ab7b) bg_popup_call2_in_pane_cp01

0x9704,	// (0x00018abf) call_type_pane_cp02

0xb808,	// (0x0001abc3) popup_call2_audio_out_window_g1_ParamLimits

0xb808,	// (0x0001abc3) popup_call2_audio_out_window_g1

0xb834,	// (0x0001abef) popup_call2_audio_out_window_g2_ParamLimits

0xb834,	// (0x0001abef) popup_call2_audio_out_window_g2

0xb85c,	// (0x0001ac17) popup_call2_audio_out_window_g3_ParamLimits

0xb85c,	// (0x0001ac17) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0001e901) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0001e901) popup_call2_audio_out_window_g

0xb897,	// (0x0001ac52) popup_call2_audio_out_window_t1_ParamLimits

0xb897,	// (0x0001ac52) popup_call2_audio_out_window_t1

0xb8f6,	// (0x0001acb1) popup_call2_audio_out_window_t2_ParamLimits

0xb8f6,	// (0x0001acb1) popup_call2_audio_out_window_t2

0xb94a,	// (0x0001ad05) popup_call2_audio_out_window_t3_ParamLimits

0xb94a,	// (0x0001ad05) popup_call2_audio_out_window_t3

0xb960,	// (0x0001ad1b) popup_call2_audio_out_window_t4_ParamLimits

0xb960,	// (0x0001ad1b) popup_call2_audio_out_window_t4

0xb976,	// (0x0001ad31) popup_call2_audio_out_window_t5_ParamLimits

0xb976,	// (0x0001ad31) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0001e90a) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0001e90a) popup_call2_audio_out_window_t

0xb9da,	// (0x0001ad95) bg_popup_call2_in_pane_ParamLimits

0xb9da,	// (0x0001ad95) bg_popup_call2_in_pane

0xba36,	// (0x0001adf1) popup_call2_audio_in_window_g1_ParamLimits

0xba36,	// (0x0001adf1) popup_call2_audio_in_window_g1

0xba6e,	// (0x0001ae29) popup_call2_audio_in_window_g2_ParamLimits

0xba6e,	// (0x0001ae29) popup_call2_audio_in_window_g2

0xbaa6,	// (0x0001ae61) popup_call2_audio_in_window_g3_ParamLimits

0xbaa6,	// (0x0001ae61) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0001e917) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0001e917) popup_call2_audio_in_window_g

0xbafe,	// (0x0001aeb9) popup_call2_audio_in_window_t1_ParamLimits

0xbafe,	// (0x0001aeb9) popup_call2_audio_in_window_t1

0xbb7e,	// (0x0001af39) popup_call2_audio_in_window_t2_ParamLimits

0xbb7e,	// (0x0001af39) popup_call2_audio_in_window_t2

0xbbfe,	// (0x0001afb9) popup_call2_audio_in_window_t3_ParamLimits

0xbbfe,	// (0x0001afb9) popup_call2_audio_in_window_t3

0xbc18,	// (0x0001afd3) popup_call2_audio_in_window_t4_ParamLimits

0xbc18,	// (0x0001afd3) popup_call2_audio_in_window_t4

0xbc2a,	// (0x0001afe5) popup_call2_audio_in_window_t5_ParamLimits

0xbc2a,	// (0x0001afe5) popup_call2_audio_in_window_t5

0xbc3f,	// (0x0001affa) popup_call2_audio_in_window_t6_ParamLimits

0xbc3f,	// (0x0001affa) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0001e920) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0001e920) popup_call2_audio_in_window_t

0x9c7b,	// (0x00019036) bg_popup_call2_in_pane_g1

0xbd58,	// (0x0001b113) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0001e988) popup_cale_lunar_info_window_t

0x9c83,	// (0x0001903e) bg_popup_call2_rect_pane_ParamLimits

0x9c83,	// (0x0001903e) bg_popup_call2_rect_pane

0x9a28,	// (0x00018de3) call2_cli_visual_graphic_pane

0x9a28,	// (0x00018de3) call2_cli_visual_text_pane

0xbf40,	// (0x0001b2fb) smil_status_volume_pane_g3

0x0002,

0x9de3,	// (0x0001919e) call2_cli_visual_graphic_pane_g1

0x9de3,	// (0x0001919e) call2_cli_visual_graphic_pane_g2

0x9de3,	// (0x0001919e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0001e92d) call2_cli_visual_graphic_pane_g

0xbc54,	// (0x0001b00f) bg_popup_call2_rect_pane_g1

0x9e8b,	// (0x00019246) bg_popup_call2_rect_pane_g2

0xbc5c,	// (0x0001b017) bg_popup_call2_rect_pane_g3

0xbc64,	// (0x0001b01f) bg_popup_call2_rect_pane_g4

0xbc6c,	// (0x0001b027) bg_popup_call2_rect_pane_g5

0xbc74,	// (0x0001b02f) bg_popup_call2_rect_pane_g6

0xbc7c,	// (0x0001b037) bg_popup_call2_rect_pane_g7

0xbc84,	// (0x0001b03f) bg_popup_call2_rect_pane_g8

0xbc8c,	// (0x0001b047) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0001e934) bg_popup_call2_rect_pane_g

0xbc94,	// (0x0001b04f) bg_popup_call2_bubble_pane_g1

0xbc9c,	// (0x0001b057) bg_popup_call2_bubble_pane_g2

0xbca4,	// (0x0001b05f) bg_popup_call2_bubble_pane_g3

0xbcac,	// (0x0001b067) bg_popup_call2_bubble_pane_g4

0xbcb4,	// (0x0001b06f) bg_popup_call2_bubble_pane_g5

0xbcbc,	// (0x0001b077) bg_popup_call2_bubble_pane_g6

0xbcc4,	// (0x0001b07f) bg_popup_call2_bubble_pane_g7

0xbccc,	// (0x0001b087) bg_popup_call2_bubble_pane_g8

0xbcd4,	// (0x0001b08f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0001e947) bg_popup_call2_bubble_pane_g

0x052d,	// (0x0000f8e8) aid_cale_week_size_cell_pane

0x0e16,	// (0x000101d1) aid_cams_cif_uncrop_pane_ParamLimits

0x0e16,	// (0x000101d1) aid_cams_cif_uncrop_pane

0x0fcf,	// (0x0001038a) aid_cams_size_cell_ParamLimits

0x0fcf,	// (0x0001038a) aid_cams_size_cell

0x0fe3,	// (0x0001039e) grid_cams_pane_ParamLimits

0x0ffd,	// (0x000103b8) linegrid_cams_pane_ParamLimits

0x11e9,	// (0x000105a4) call_video_pane_t1

0x1203,	// (0x000105be) call_video_pane_t2

0x0001,

0xf279,	// (0x0001e634) call_video_pane_t

0x1637,	// (0x000109f2) aid_cale_month_size_cell_pane_ParamLimits

0x1637,	// (0x000109f2) aid_cale_month_size_cell_pane

0xf616,	// (0x0001e9d1) smil_status_volume_pane_g

0xbf4d,	// (0x0001b308) volume_smil_pane_ParamLimits

0x95b8,	// (0x00018973) aid_popup2_width_pane

0x0479,	// (0x0000f834) cell_qdial_pane_g4_ParamLimits

0x0479,	// (0x0000f834) cell_qdial_pane_g4

0x26cd,	// (0x00011a88) aid_blid_cardinal_pane_ParamLimits

0x26d9,	// (0x00011a94) aid_blid_destination_pane_ParamLimits

0x26d9,	// (0x00011a94) aid_blid_destination_pane

0x9c83,	// (0x0001903e) bg_popup_call_poc_act_pane_ParamLimits

0x9c83,	// (0x0001903e) bg_popup_call_poc_act_pane

0x9c83,	// (0x0001903e) bg_popup_call_poc_inact_pane_ParamLimits

0x9c83,	// (0x0001903e) bg_popup_call_poc_inact_pane

0xbcdc,	// (0x0001b097) bg_popup_call_poc_act_pane_g1

0xbce4,	// (0x0001b09f) bg_popup_call_poc_act_pane_g2

0xbcec,	// (0x0001b0a7) bg_popup_call_poc_act_pane_g3

0xbcac,	// (0x0001b067) bg_popup_call_poc_act_pane_g4

0xbcb4,	// (0x0001b06f) bg_popup_call_poc_act_pane_g5

0xbcf4,	// (0x0001b0af) bg_popup_call_poc_act_pane_g6

0xbcc4,	// (0x0001b07f) bg_popup_call_poc_act_pane_g7

0xbcfc,	// (0x0001b0b7) bg_popup_call_poc_act_pane_g8

0x9a28,	// (0x00018de3) main_usb_pane

0xbe65,	// (0x0001b220) popup_cale_lunar_info_window

0x14cc,	// (0x00010887) im_reading_pane_t1_ParamLimits

0xa0c9,	// (0x00019484) list_im_pane_ParamLimits

0xa0da,	// (0x00019495) scroll_pane_cp07_ParamLimits

0x9a28,	// (0x00018de3) grid_highlight_pane_cp012

0x9c83,	// (0x0001903e) mup_scale_pane_ParamLimits

0xabec,	// (0x00019fa7) main_usb_pane_g1_ParamLimits

0xabec,	// (0x00019fa7) main_usb_pane_g1

0x3466,	// (0x00012821) main_usb_pane_g2_ParamLimits

0x3466,	// (0x00012821) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0001e971) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0001e971) main_usb_pane_g

0x347c,	// (0x00012837) main_usb_pane_t1_ParamLimits

0x347c,	// (0x00012837) main_usb_pane_t1

0x348e,	// (0x00012849) main_usb_pane_t2_ParamLimits

0x348e,	// (0x00012849) main_usb_pane_t2

0x34a0,	// (0x0001285b) main_usb_pane_t3_ParamLimits

0x34a0,	// (0x0001285b) main_usb_pane_t3

0x34b2,	// (0x0001286d) main_usb_pane_t4_ParamLimits

0x34b2,	// (0x0001286d) main_usb_pane_t4

0x34c7,	// (0x00012882) main_usb_pane_t5_ParamLimits

0x34c7,	// (0x00012882) main_usb_pane_t5

0x34dc,	// (0x00012897) main_usb_pane_t6_ParamLimits

0x34dc,	// (0x00012897) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0001e976) main_usb_pane_t_ParamLimits

0x266e,	// (0x00011a29) aid_text_placing

0x2679,	// (0x00011a34) main_location2_pane_t1_ParamLimits

0x268d,	// (0x00011a48) main_location2_pane_t2_ParamLimits

0x26a3,	// (0x00011a5e) main_location2_pane_t3_ParamLimits

0x26b9,	// (0x00011a74) main_location2_pane_t4_ParamLimits

0x26b9,	// (0x00011a74) main_location2_pane_t4

0xf3da,	// (0x0001e795) main_location2_pane_t_ParamLimits

0x9cbf,	// (0x0001907a) find_pinb_pane_g2_ParamLimits

0x9cbf,	// (0x0001907a) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0001e4e3) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0001e4e3) find_pinb_pane_g

0x9ccb,	// (0x00019086) find_pinb_pane_t1_ParamLimits

0x9cdd,	// (0x00019098) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0001e4e8) find_pinb_pane_t_ParamLimits

0x9a28,	// (0x00018de3) main_call3_pane

0x1ba2,	// (0x00010f5d) cale_month_day_heading_pane_t1_ParamLimits

0x1c28,	// (0x00010fe3) cale_month_day_heading_pane_t2_ParamLimits

0x1cb9,	// (0x00011074) cale_month_day_heading_pane_t3_ParamLimits

0x1d4a,	// (0x00011105) cale_month_day_heading_pane_t4_ParamLimits

0x1ddb,	// (0x00011196) cale_month_day_heading_pane_t5_ParamLimits

0x1e74,	// (0x0001122f) cale_month_day_heading_pane_t6_ParamLimits

0x1f15,	// (0x000112d0) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0001e66c) cale_month_day_heading_pane_t_ParamLimits

0x22a3,	// (0x0001165e) smil_status_volume_pane

0x2f23,	// (0x000122de) postcard_address_pane_ParamLimits

0x2f23,	// (0x000122de) postcard_address_pane

0x2f39,	// (0x000122f4) postcard_message_pane_ParamLimits

0x2f39,	// (0x000122f4) postcard_message_pane

0x3442,	// (0x000127fd) call2_cli_visual_pane_t1_ParamLimits

0x3442,	// (0x000127fd) call2_cli_visual_pane_t1

0x3ccf,	// (0x0001308a) postcard_message_pane_t1_ParamLimits

0x3ccf,	// (0x0001308a) postcard_message_pane_t1

0x3cb8,	// (0x00013073) postcard_address_pane_t1_ParamLimits

0x3cb8,	// (0x00013073) postcard_address_pane_t1

0x3ca4,	// (0x0001305f) popup_call3_audio_in_window_ParamLimits

0x3ca4,	// (0x0001305f) popup_call3_audio_in_window

0x3b29,	// (0x00012ee4) bg_popup_call3_in_pane_ParamLimits

0x3b29,	// (0x00012ee4) bg_popup_call3_in_pane

0x3ba5,	// (0x00012f60) popup_call3_audio_in_window_g1_ParamLimits

0x3ba5,	// (0x00012f60) popup_call3_audio_in_window_g1

0x3bc5,	// (0x00012f80) popup_call3_audio_in_window_g2_ParamLimits

0x3bc5,	// (0x00012f80) popup_call3_audio_in_window_g2

0x3be5,	// (0x00012fa0) popup_call3_audio_in_window_g3_ParamLimits

0x3be5,	// (0x00012fa0) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0001e9d8) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0001e9d8) popup_call3_audio_in_window_g

0x3c16,	// (0x00012fd1) popup_call3_audio_in_window_t1_ParamLimits

0x3c16,	// (0x00012fd1) popup_call3_audio_in_window_t1

0x3c54,	// (0x0001300f) popup_call3_audio_in_window_t2_ParamLimits

0x3c54,	// (0x0001300f) popup_call3_audio_in_window_t2

0x3c92,	// (0x0001304d) popup_call3_audio_in_window_t3_ParamLimits

0x3c92,	// (0x0001304d) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0001e9e1) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0001e9e1) popup_call3_audio_in_window_t

0xa9a4,	// (0x00019d5f) bg_popup_call3_rect_pane

0xbc54,	// (0x0001b00f) bg_popup_call3_rect_pane_g1

0x9e8b,	// (0x00019246) bg_popup_call3_rect_pane_g2

0xbc5c,	// (0x0001b017) bg_popup_call3_rect_pane_g3

0xbc64,	// (0x0001b01f) bg_popup_call3_rect_pane_g4

0xbc6c,	// (0x0001b027) bg_popup_call3_rect_pane_g5

0xbc74,	// (0x0001b02f) bg_popup_call3_rect_pane_g6

0xbc7c,	// (0x0001b037) bg_popup_call3_rect_pane_g7

0x2ad3,	// (0x00011e8e) mup_visualizer_osc_pane

0xaa83,	// (0x00019e3e) mup_visualizer_spec_pane

0x3b59,	// (0x00012f14) call3_video_qcif_pane_ParamLimits

0x3b59,	// (0x00012f14) call3_video_qcif_pane

0x3b6c,	// (0x00012f27) call3_video_qcif_uncrop_pane_ParamLimits

0x3b6c,	// (0x00012f27) call3_video_qcif_uncrop_pane

0x3b7c,	// (0x00012f37) call3_video_subqcif_pane_ParamLimits

0x3b7c,	// (0x00012f37) call3_video_subqcif_pane

0x3b92,	// (0x00012f4d) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b92,	// (0x00012f4d) call3_video_subqcif_uncrop_pane

0x3c05,	// (0x00012fc0) popup_call3_audio_in_window_g4_ParamLimits

0x3c05,	// (0x00012fc0) popup_call3_audio_in_window_g4

0x3b18,	// (0x00012ed3) mup_spec_half_pane

0x3b21,	// (0x00012edc) mup_spec_half_pane_cp

0xbf00,	// (0x0001b2bb) mup_osc_middle_pane

0xbf09,	// (0x0001b2c4) mup_visualizer_osc_pane_g1

0x3af8,	// (0x00012eb3) mup_spec_bar_pane_ParamLimits

0x3af8,	// (0x00012eb3) mup_spec_bar_pane

0xbeed,	// (0x0001b2a8) mup_spec_bar_pane_g1

0xbef7,	// (0x0001b2b2) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0001e9cc) mup_spec_bar_pane_g

0x052d,	// (0x0000f8e8) aid_cale_week_size_cell_pane_ParamLimits

0x0547,	// (0x0000f902) bg_cale_heading_pane_ParamLimits

0x9f07,	// (0x000192c2) bg_cale_pane_cp01_ParamLimits

0x056c,	// (0x0000f927) cale_week_corner_pane_ParamLimits

0x058b,	// (0x0000f946) cale_week_day_heading_pane_ParamLimits

0x05b5,	// (0x0000f970) cale_week_scroll_pane_g1_ParamLimits

0x05d5,	// (0x0000f990) cale_week_scroll_pane_g2_ParamLimits

0x05ed,	// (0x0000f9a8) cale_week_scroll_pane_g3_ParamLimits

0x0605,	// (0x0000f9c0) cale_week_scroll_pane_g4_ParamLimits

0x061d,	// (0x0000f9d8) cale_week_scroll_pane_g5_ParamLimits

0x0639,	// (0x0000f9f4) cale_week_scroll_pane_g6_ParamLimits

0x0655,	// (0x0000fa10) cale_week_scroll_pane_g7_ParamLimits

0x0675,	// (0x0000fa30) cale_week_scroll_pane_g8_ParamLimits

0x0695,	// (0x0000fa50) cale_week_scroll_pane_g9_ParamLimits

0x06b2,	// (0x0000fa6d) cale_week_scroll_pane_g10_ParamLimits

0x06cf,	// (0x0000fa8a) cale_week_scroll_pane_g11_ParamLimits

0x06ec,	// (0x0000faa7) cale_week_scroll_pane_g12_ParamLimits

0x0709,	// (0x0000fac4) cale_week_scroll_pane_g13_ParamLimits

0x0726,	// (0x0000fae1) cale_week_scroll_pane_g14_ParamLimits

0x074b,	// (0x0000fb06) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0001e574) cale_week_scroll_pane_g_ParamLimits

0x0770,	// (0x0000fb2b) cale_week_time_pane_ParamLimits

0x0790,	// (0x0000fb4b) grid_cale_week_pane_ParamLimits

0x9f25,	// (0x000192e0) listscroll_cale_week_pane_t1

0x9f37,	// (0x000192f2) scroll_pane_cp08_ParamLimits

0x169c,	// (0x00010a57) cale_month_corner_pane_ParamLimits

0xa2fa,	// (0x000196b5) cale_month_pane_t1

0x1b30,	// (0x00010eeb) cale_month_week_pane_ParamLimits

0x249c,	// (0x00011857) popup_call_status_window_g1_ParamLimits

0x24b0,	// (0x0001186b) popup_call_status_window_g2_ParamLimits

0x24c4,	// (0x0001187f) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0001e71c) popup_call_status_window_g_ParamLimits

0xa6d7,	// (0x00019a92) aid_call2_pane

0x2d97,	// (0x00012152) msg_header_pane_g1

0x2f23,	// (0x000122de) postcard_address2_pane_ParamLimits

0x2f23,	// (0x000122de) postcard_address2_pane

0x2f39,	// (0x000122f4) postcard_message2_pane_ParamLimits

0x2f39,	// (0x000122f4) postcard_message2_pane

0x3aa8,	// (0x00012e63) message2_row_pane_ParamLimits

0x3aa8,	// (0x00012e63) message2_row_pane

0x3ac5,	// (0x00012e80) address2_row_pane_ParamLimits

0x3ac5,	// (0x00012e80) address2_row_pane

0xbebb,	// (0x0001b276) postcard_message2_row_pane_g1

0xbec3,	// (0x0001b27e) postcard_message2_row_pane_t1

0xbebb,	// (0x0001b276) address2_row_pane_g1

0xbec3,	// (0x0001b27e) address2_row_pane_t1

0x0c9c,	// (0x00010057) aid_size_cell_vorec

0x9a28,	// (0x00018de3) main_rss_pane

0x3ad8,	// (0x00012e93) rss_list_single_pane_ParamLimits

0x3ad8,	// (0x00012e93) rss_list_single_pane

0xbed1,	// (0x0001b28c) rss_list_single_pane_t1

0xbedf,	// (0x0001b29a) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0001e9c7) rss_list_single_pane_t

0x9a28,	// (0x00018de3) main_camera2_pane

0x9a28,	// (0x00018de3) main_video2_pane

0x3d3e,	// (0x000130f9) cams_zoom_pane_cp2_ParamLimits

0x3d3e,	// (0x000130f9) cams_zoom_pane_cp2

0x3d55,	// (0x00013110) image2_vga_pane_ParamLimits

0x3d55,	// (0x00013110) image2_vga_pane

0x3d9d,	// (0x00013158) main_camera2_pane_g1_ParamLimits

0x3d9d,	// (0x00013158) main_camera2_pane_g1

0x3dbd,	// (0x00013178) main_camera2_pane_g2_ParamLimits

0x3dbd,	// (0x00013178) main_camera2_pane_g2

0x3dd4,	// (0x0001318f) main_camera2_pane_g3_ParamLimits

0x3dd4,	// (0x0001318f) main_camera2_pane_g3

0x3deb,	// (0x000131a6) main_camera2_pane_g4_ParamLimits

0x3deb,	// (0x000131a6) main_camera2_pane_g4

0x3e02,	// (0x000131bd) main_camera2_pane_g5_ParamLimits

0x3e02,	// (0x000131bd) main_camera2_pane_g5

0x3e19,	// (0x000131d4) main_camera2_pane_g6_ParamLimits

0x3e19,	// (0x000131d4) main_camera2_pane_g6

0x3e30,	// (0x000131eb) main_camera2_pane_g7_ParamLimits

0x3e30,	// (0x000131eb) main_camera2_pane_g7

0x3e47,	// (0x00013202) main_camera2_pane_g8_ParamLimits

0x3e47,	// (0x00013202) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0001e9e8) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0001e9e8) main_camera2_pane_g

0x3e75,	// (0x00013230) main_camera2_pane_t1_ParamLimits

0x3e75,	// (0x00013230) main_camera2_pane_t1

0x3eaa,	// (0x00013265) main_camera2_pane_t2_ParamLimits

0x3eaa,	// (0x00013265) main_camera2_pane_t2

0x3ec7,	// (0x00013282) main_camera2_pane_t3_ParamLimits

0x3ec7,	// (0x00013282) main_camera2_pane_t3

0x3f25,	// (0x000132e0) main_camera2_pane_t4_ParamLimits

0x3f25,	// (0x000132e0) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0001e9fb) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0001e9fb) main_camera2_pane_t

0x3fae,	// (0x00013369) cams_zoom_pane_cp4_ParamLimits

0x3fae,	// (0x00013369) cams_zoom_pane_cp4

0x3fc4,	// (0x0001337f) image2_cif_pane_ParamLimits

0x3fc4,	// (0x0001337f) image2_cif_pane

0x3fef,	// (0x000133aa) image2_subqcif_pane_ParamLimits

0x3fef,	// (0x000133aa) image2_subqcif_pane

0x400a,	// (0x000133c5) main_video2_pane_g1_ParamLimits

0x400a,	// (0x000133c5) main_video2_pane_g1

0x4024,	// (0x000133df) main_video2_pane_g2_ParamLimits

0x4024,	// (0x000133df) main_video2_pane_g2

0x403a,	// (0x000133f5) main_video2_pane_g3_ParamLimits

0x403a,	// (0x000133f5) main_video2_pane_g3

0x4050,	// (0x0001340b) main_video2_pane_g4_ParamLimits

0x4050,	// (0x0001340b) main_video2_pane_g4

0x4066,	// (0x00013421) main_video2_pane_g5_ParamLimits

0x4066,	// (0x00013421) main_video2_pane_g5

0x407c,	// (0x00013437) main_video2_pane_g6_ParamLimits

0x407c,	// (0x00013437) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0001ea0a) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0001ea0a) main_video2_pane_g

0x4096,	// (0x00013451) main_video2_pane_t1_ParamLimits

0x4096,	// (0x00013451) main_video2_pane_t1

0x40ba,	// (0x00013475) main_video2_pane_t2_ParamLimits

0x40ba,	// (0x00013475) main_video2_pane_t2

0x410a,	// (0x000134c5) main_video2_pane_t3_ParamLimits

0x410a,	// (0x000134c5) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0001ea17) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0001ea17) main_video2_pane_t

0x359a,	// (0x00012955) call_muted_g2

0x0001,

0xf5fe,	// (0x0001e9b9) call_muted_g

0x9a28,	// (0x00018de3) main_mup2_pane

0x4152,	// (0x0001350d) main_mup2_pane_g1_ParamLimits

0x4152,	// (0x0001350d) main_mup2_pane_g1

0x415e,	// (0x00013519) main_mup2_pane_g2_ParamLimits

0x415e,	// (0x00013519) main_mup2_pane_g2

0xc06e,	// (0x0001b429) main_mup_pane_g13_cp1

0xc076,	// (0x0001b431) mup_volume_pane_cp1

0x417c,	// (0x00013537) main_mup2_pane_g4_ParamLimits

0x417c,	// (0x00013537) main_mup2_pane_g4

0x418e,	// (0x00013549) main_mup2_pane_g5_ParamLimits

0x418e,	// (0x00013549) main_mup2_pane_g5

0x41a0,	// (0x0001355b) main_mup2_pane_g6_ParamLimits

0x41a0,	// (0x0001355b) main_mup2_pane_g6

0x41b2,	// (0x0001356d) main_mup2_pane_g7_ParamLimits

0x41b2,	// (0x0001356d) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0001ea1e) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0001ea1e) main_mup2_pane_g

0x41ca,	// (0x00013585) main_mup2_pane_t1_ParamLimits

0x41ca,	// (0x00013585) main_mup2_pane_t1

0x41e0,	// (0x0001359b) main_mup2_pane_t2_ParamLimits

0x41e0,	// (0x0001359b) main_mup2_pane_t2

0x41f6,	// (0x000135b1) main_mup2_pane_t3_ParamLimits

0x41f6,	// (0x000135b1) main_mup2_pane_t3

0x420c,	// (0x000135c7) main_mup2_pane_t4_ParamLimits

0x420c,	// (0x000135c7) main_mup2_pane_t4

0x4224,	// (0x000135df) main_mup2_pane_t5_ParamLimits

0x4224,	// (0x000135df) main_mup2_pane_t5

0x423c,	// (0x000135f7) main_mup2_pane_t6_ParamLimits

0x423c,	// (0x000135f7) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0001ea2d) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0001ea2d) main_mup2_pane_t

0x426c,	// (0x00013627) mup2_visualizer_pane_ParamLimits

0x426c,	// (0x00013627) mup2_visualizer_pane

0x429a,	// (0x00013655) mup_progress_pane_cp_ParamLimits

0x429a,	// (0x00013655) mup_progress_pane_cp

0xc050,	// (0x0001b40b) mup_volume_pane_cp_ParamLimits

0xc050,	// (0x0001b40b) mup_volume_pane_cp

0x42b0,	// (0x0001366b) mup2_visualizer_pane_g1_ParamLimits

0x42b0,	// (0x0001366b) mup2_visualizer_pane_g1

0xbf8f,	// (0x0001b34a) mup2_visualizer_pane_g2_ParamLimits

0xbf8f,	// (0x0001b34a) mup2_visualizer_pane_g2

0x42c7,	// (0x00013682) mup2_visualizer_pane_g3_ParamLimits

0x42c7,	// (0x00013682) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0001ea3a) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0001ea3a) mup2_visualizer_pane_g

0xad35,	// (0x0001a0f0) aid_size_cell_fmradio

0x374a,	// (0x00012b05) aid_height_parent_landcape

0xa158,	// (0x00019513) wml_content_pane_cp

0xa160,	// (0x0001951b) wml_tabs_pane

0xa169,	// (0x00019524) popup_wml_miniature_window

0xa171,	// (0x0001952c) scroll_pane_cp021

0xa185,	// (0x00019540) wml_content_pane_comp8

0x9a28,	// (0x00018de3) bg_popup_sub_pane_cp05

0xbfad,	// (0x0001b368) popup_wml_miniature_window_g1

0xbfb5,	// (0x0001b370) wml_miniature_view_pane

0x42d3,	// (0x0001368e) aid_size_wml_view

0x42db,	// (0x00013696) wml_miniature_view_pane_g1

0x42e4,	// (0x0001369f) wml_miniature_view_pane_g2

0x42ed,	// (0x000136a8) wml_miniature_view_pane_g3

0x42f5,	// (0x000136b0) wml_miniature_view_pane_g4

0x42fd,	// (0x000136b8) wml_miniature_view_pane_g5

0x4305,	// (0x000136c0) wml_miniature_view_pane_g6

0x430d,	// (0x000136c8) wml_miniature_view_pane_g7

0x4315,	// (0x000136d0) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0001ea41) wml_miniature_view_pane_g

0xbfbd,	// (0x0001b378) background_graphic_ParamLimits

0xbfbd,	// (0x0001b378) background_graphic

0xbfc9,	// (0x0001b384) wml_tabs_2_pane

0xbfd2,	// (0x0001b38d) wml_tabs_3_pane_ParamLimits

0xbfd2,	// (0x0001b38d) wml_tabs_3_pane

0xbfe4,	// (0x0001b39f) wml_tabs_4_pane_ParamLimits

0xbfe4,	// (0x0001b39f) wml_tabs_4_pane

0xbffa,	// (0x0001b3b5) wml_tabs_5_pane_ParamLimits

0xbffa,	// (0x0001b3b5) wml_tabs_5_pane

0xc014,	// (0x0001b3cf) wml_tabs_pane_g2_ParamLimits

0xc014,	// (0x0001b3cf) wml_tabs_pane_g2

0xc028,	// (0x0001b3e3) wml_tabs_pane_g3_ParamLimits

0xc028,	// (0x0001b3e3) wml_tabs_pane_g3

0x431d,	// (0x000136d8) wml_tabs_2_active_pane_ParamLimits

0x431d,	// (0x000136d8) wml_tabs_2_active_pane

0x4331,	// (0x000136ec) wml_tabs_2_passive_pane_ParamLimits

0x4331,	// (0x000136ec) wml_tabs_2_passive_pane

0x4345,	// (0x00013700) wml_tabs_3_active_pane_cp_ParamLimits

0x4345,	// (0x00013700) wml_tabs_3_active_pane_cp

0x435a,	// (0x00013715) wml_tabs_3_passive_pane_ParamLimits

0x435a,	// (0x00013715) wml_tabs_3_passive_pane

0x436d,	// (0x00013728) wml_tabs_3_passive_pane_cp_ParamLimits

0x436d,	// (0x00013728) wml_tabs_3_passive_pane_cp

0x4384,	// (0x0001373f) tabs_4_active_pane

0x438c,	// (0x00013747) tabs_4_passive_pane

0x4396,	// (0x00013751) tabs_4_passive_pane_cp

0x439e,	// (0x00013759) tabs_4_passive_pane_cp2

0x345e,	// (0x00012819) aid_height_text

0x2aa5,	// (0x00011e60) mup_volume_cont_pane_ParamLimits

0x2aa5,	// (0x00011e60) mup_volume_cont_pane

0x0106,	// (0x0000f4c1) aid_size_cell_pinb

0x0110,	// (0x0000f4cb) aid_size_list_pinb

0x4286,	// (0x00013641) mup2_volume_cont_pane_ParamLimits

0x4286,	// (0x00013641) mup2_volume_cont_pane

0xc03c,	// (0x0001b3f7) mup2_volume_cont_pane_g1_ParamLimits

0xc03c,	// (0x0001b3f7) mup2_volume_cont_pane_g1

0xfdcc,	// (0x0000f187) aid_size_cell_touch_ParamLimits

0xfdcc,	// (0x0000f187) aid_size_cell_touch

0xfff6,	// (0x0000f3b1) touch_pane_ParamLimits

0xfff6,	// (0x0000f3b1) touch_pane

0x95a6,	// (0x00018961) main_rss2_pane

0xc07e,	// (0x0001b439) listscroll_rss2_pane

0xc087,	// (0x0001b442) rss2_navigation_pane

0xc08f,	// (0x0001b44a) list_rss2_pane

0xa86a,	// (0x00019c25) scroll_pane_cp22

0xc097,	// (0x0001b452) rss2_navigation_pane_g1

0xc0a0,	// (0x0001b45b) rss2_navigation_pane_g2

0xc0a8,	// (0x0001b463) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0001ea52) rss2_navigation_pane_g

0xc0b0,	// (0x0001b46b) rss2_navigation_pane_t1

0x43a8,	// (0x00013763) rss2_list_single_pane_ParamLimits

0x43a8,	// (0x00013763) rss2_list_single_pane

0xc0be,	// (0x0001b479) rss2_list_single_pane_t2

0xc0cc,	// (0x0001b487) rss2_list_single_pane_t3_ParamLimits

0xc0cc,	// (0x0001b487) rss2_list_single_pane_t3

0xc0e9,	// (0x0001b4a4) rss2_list_single_pane_t4

0x228b,	// (0x00011646) smil_status_pane_g1

0x9607,	// (0x000189c2) main_image2_pane_ParamLimits

0x9607,	// (0x000189c2) main_image2_pane

0x3e5e,	// (0x00013219) main_camera2_pane_g9_ParamLimits

0x3e5e,	// (0x00013219) main_camera2_pane_g9

0x3f7a,	// (0x00013335) main_camera2_pane_t5_ParamLimits

0x3f7a,	// (0x00013335) main_camera2_pane_t5

0xbf64,	// (0x0001b31f) main_camera2_pane_t6_ParamLimits

0xbf64,	// (0x0001b31f) main_camera2_pane_t6

0x43be,	// (0x00013779) main_image2_pane_g1_ParamLimits

0x43be,	// (0x00013779) main_image2_pane_g1

0x3178,	// (0x00012533) smil2_video_pane_ParamLimits

0x3178,	// (0x00012533) smil2_video_pane

0x95c4,	// (0x0001897f) aid_zoom_text_primary_cp

0x95fd,	// (0x000189b8) popup_preview_fixed_window

0xa0c1,	// (0x0001947c) im_reading_pane_g1

0x3d30,	// (0x000130eb) cams2_bc_adjust_pane_cp_ParamLimits

0x3d30,	// (0x000130eb) cams2_bc_adjust_pane_cp

0x3fa0,	// (0x0001335b) cams2_bc_adjust_pane_ParamLimits

0x3fa0,	// (0x0001335b) cams2_bc_adjust_pane

0xc0f7,	// (0x0001b4b2) cams2_bc_adjust_pane_g1

0xc0ff,	// (0x0001b4ba) cams2_slider_pane

0xc108,	// (0x0001b4c3) cams2_slider_pane_g1

0xc111,	// (0x0001b4cc) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0001ea59) cams2_slider_pane_g

0x0200,	// (0x0000f5bb) calc_display_pane_ParamLimits

0x0228,	// (0x0000f5e3) calc_paper_pane_ParamLimits

0x024b,	// (0x0000f606) grid_calc_pane_ParamLimits

0xa739,	// (0x00019af4) popup_clock_digital_window_t1_ParamLimits

0xacd2,	// (0x0001a08d) main_image_pane_t1

0x01e2,	// (0x0000f59d) aid_size_cell_calc_ParamLimits

0x01e2,	// (0x0000f59d) aid_size_cell_calc

0x3790,	// (0x00012b4b) popup_blid_sat_info2_window_ParamLimits

0x3790,	// (0x00012b4b) popup_blid_sat_info2_window

0xc133,	// (0x0001b4ee) aid_size_cell_blid

0xc13b,	// (0x0001b4f6) bg_popup_window_pane_cp07

0xc15e,	// (0x0001b519) grid_popup_blid_pane

0xc168,	// (0x0001b523) heading_pane_cp05_ParamLimits

0xc168,	// (0x0001b523) heading_pane_cp05

0xc232,	// (0x0001b5ed) cell_popup_blid_pane_ParamLimits

0xc232,	// (0x0001b5ed) cell_popup_blid_pane

0xc25c,	// (0x0001b617) cell_popup_blid_pane_g1

0xc264,	// (0x0001b61f) cell_popup_blid_pane_t1

0x4256,	// (0x00013611) mup2_indicator_pane_ParamLimits

0x4256,	// (0x00013611) mup2_indicator_pane

0xa9a4,	// (0x00019d5f) mup2_visualizer_osc_pane

0xbf9b,	// (0x0001b356) mup2_visualizer_spec_pane_ParamLimits

0xbf9b,	// (0x0001b356) mup2_visualizer_spec_pane

0x43d4,	// (0x0001378f) mup2_spec_half_pane

0x43dd,	// (0x00013798) mup2_spec_half_pane_cp

0x43e5,	// (0x000137a0) mup2_spec_bar_pane_ParamLimits

0x43e5,	// (0x000137a0) mup2_spec_bar_pane

0xbeed,	// (0x0001b2a8) mup2_spec_bar_pane_g1

0xbef7,	// (0x0001b2b2) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0001e9cc) mup2_spec_bar_pane_g

0x4405,	// (0x000137c0) mup2_osc_middle_pane

0xbf09,	// (0x0001b2c4) mup2_visualizer_osc_pane_g1

0x9635,	// (0x000189f0) popup_number_entry_window_t1_ParamLimits

0x9648,	// (0x00018a03) popup_number_entry_window_t2_ParamLimits

0x965a,	// (0x00018a15) popup_number_entry_window_t3_ParamLimits

0x0048,	// (0x0000f403) popup_number_entry_window_t5_ParamLimits

0x0048,	// (0x0000f403) popup_number_entry_window_t5

0xf0d3,	// (0x0001e48e) popup_number_entry_window_t_ParamLimits

0x966c,	// (0x00018a27) text_title_cp2_ParamLimits

0xabac,	// (0x00019f67) aid_hotspot_pointer_text2_pane

0xabd2,	// (0x00019f8d) main_viewer_pane_g9_ParamLimits

0xabd2,	// (0x00019f8d) main_viewer_pane_g9

0xa2fa,	// (0x000196b5) cale_month_pane_t1_ParamLimits

0xa34e,	// (0x00019709) bg_cale_pane_ParamLimits

0xa366,	// (0x00019721) list_cale_pane_ParamLimits

0xa377,	// (0x00019732) listscroll_cale_day_pane_t1

0xa389,	// (0x00019744) scroll_pane_cp09_ParamLimits

0x2adb,	// (0x00011e96) main_mup_eq_pane_t1_ParamLimits

0x2adb,	// (0x00011e96) main_mup_eq_pane_t1

0x2af7,	// (0x00011eb2) main_mup_eq_pane_t2_ParamLimits

0x2af7,	// (0x00011eb2) main_mup_eq_pane_t2

0x2b13,	// (0x00011ece) main_mup_eq_pane_t3_ParamLimits

0x2b13,	// (0x00011ece) main_mup_eq_pane_t3

0x2b31,	// (0x00011eec) main_mup_eq_pane_t4_ParamLimits

0x2b31,	// (0x00011eec) main_mup_eq_pane_t4

0x2b4f,	// (0x00011f0a) main_mup_eq_pane_t5_ParamLimits

0x2b4f,	// (0x00011f0a) main_mup_eq_pane_t5

0x2b6d,	// (0x00011f28) main_mup_eq_pane_t6_ParamLimits

0x2b6d,	// (0x00011f28) main_mup_eq_pane_t6

0x2b83,	// (0x00011f3e) main_mup_eq_pane_t7_ParamLimits

0x2b83,	// (0x00011f3e) main_mup_eq_pane_t7

0x2b99,	// (0x00011f54) main_mup_eq_pane_t8_ParamLimits

0x2b99,	// (0x00011f54) main_mup_eq_pane_t8

0x2baf,	// (0x00011f6a) main_mup_eq_pane_t9_ParamLimits

0x2baf,	// (0x00011f6a) main_mup_eq_pane_t9

0x2bcb,	// (0x00011f86) main_mup_eq_pane_t10_ParamLimits

0x2bcb,	// (0x00011f86) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0001e81b) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0001e81b) main_mup_eq_pane_t

0x2ca0,	// (0x0001205b) mup_equalizer_pane_cp5_ParamLimits

0x2cb8,	// (0x00012073) mup_equalizer_pane_cp6_ParamLimits

0x2cd0,	// (0x0001208b) mup_equalizer_pane_cp7_ParamLimits

0x95a6,	// (0x00018961) main_gallery_pane

0xbf12,	// (0x0001b2cd) smil2_volume_pane

0xbf1a,	// (0x0001b2d5) smil_status_volume_pane_g1_ParamLimits

0xbf2d,	// (0x0001b2e8) smil_status_volume_pane_g2_ParamLimits

0xbf40,	// (0x0001b2fb) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0001e9d1) smil_status_volume_pane_g_ParamLimits

0xc13b,	// (0x0001b4f6) bg_popup_window_pane_cp07_ParamLimits

0xc149,	// (0x0001b504) blid_firmament_pane

0x440e,	// (0x000137c9) aid_size_cell_gallery_ParamLimits

0x440e,	// (0x000137c9) aid_size_cell_gallery

0x4424,	// (0x000137df) grid_gallery_pane_ParamLimits

0x4424,	// (0x000137df) grid_gallery_pane

0x443f,	// (0x000137fa) cell_gallery_pane_ParamLimits

0x443f,	// (0x000137fa) cell_gallery_pane

0xc272,	// (0x0001b62d) bg_cell_gallery_focus_pane_ParamLimits

0xc272,	// (0x0001b62d) bg_cell_gallery_focus_pane

0xc284,	// (0x0001b63f) cell_gallery_pane_g1_ParamLimits

0xc284,	// (0x0001b63f) cell_gallery_pane_g1

0x448a,	// (0x00013845) cell_gallery_pane_g2_ParamLimits

0x448a,	// (0x00013845) cell_gallery_pane_g2

0x4497,	// (0x00013852) cell_gallery_pane_g3_ParamLimits

0x4497,	// (0x00013852) cell_gallery_pane_g3

0xc290,	// (0x0001b64b) cell_gallery_pane_g4_ParamLimits

0xc290,	// (0x0001b64b) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0001ea7f) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0001ea7f) cell_gallery_pane_g

0xc29c,	// (0x0001b657) bg_cell_gallery_focus_pane_g1

0xc2a4,	// (0x0001b65f) bg_cell_gallery_focus_pane_g2

0xc2ac,	// (0x0001b667) bg_cell_gallery_focus_pane_g3

0xc2b4,	// (0x0001b66f) bg_cell_gallery_focus_pane_g4

0xc2bc,	// (0x0001b677) bg_cell_gallery_focus_pane_g5

0xc2c4,	// (0x0001b67f) bg_cell_gallery_focus_pane_g6

0xc2cc,	// (0x0001b687) bg_cell_gallery_focus_pane_g7

0xc2d4,	// (0x0001b68f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0001ea88) bg_cell_gallery_focus_pane_g

0xc2dc,	// (0x0001b697) aid_firma_cardinal

0xc2f0,	// (0x0001b6ab) blid_firmament_pane_t1

0xc307,	// (0x0001b6c2) blid_firmament_pane_t2

0xc31e,	// (0x0001b6d9) blid_firmament_pane_t3

0xc335,	// (0x0001b6f0) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0001ea99) blid_firmament_pane_t

0xc34c,	// (0x0001b707) blid_sat_info_pane

0xc35c,	// (0x0001b717) blid_sat_info_pane_g1

0xc35c,	// (0x0001b717) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0001eaa2) blid_sat_info_pane_g

0xc366,	// (0x0001b721) blid_sat_info_pane_t1

0xc374,	// (0x0001b72f) smil2_volume_content_pane

0xc37d,	// (0x0001b738) smil2_volume_pane_g1

0xc385,	// (0x0001b740) smil2_volume_content_pane_g1

0xc38e,	// (0x0001b749) smil2_volume_content_pane_g2

0xc397,	// (0x0001b752) smil2_volume_content_pane_g3

0xc3a0,	// (0x0001b75b) smil2_volume_content_pane_g4

0xc3a9,	// (0x0001b764) smil2_volume_content_pane_g5

0xc3b2,	// (0x0001b76d) smil2_volume_content_pane_g6

0xc3bb,	// (0x0001b776) smil2_volume_content_pane_g7

0xc3c4,	// (0x0001b77f) smil2_volume_content_pane_g8

0xc3cd,	// (0x0001b788) smil2_volume_content_pane_g9

0xc3d6,	// (0x0001b791) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0001eaa7) smil2_volume_content_pane_g

0x0841,	// (0x0000fbfc) cale_week_day_heading_pane_t1_ParamLimits

0x088b,	// (0x0000fc46) cale_week_day_heading_pane_t2_ParamLimits

0x08da,	// (0x0000fc95) cale_week_day_heading_pane_t3_ParamLimits

0x0929,	// (0x0000fce4) cale_week_day_heading_pane_t4_ParamLimits

0x0978,	// (0x0000fd33) cale_week_day_heading_pane_t5_ParamLimits

0x09c7,	// (0x0000fd82) cale_week_day_heading_pane_t6_ParamLimits

0x0a1a,	// (0x0000fdd5) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0001e593) cale_week_day_heading_pane_t_ParamLimits

0x9f59,	// (0x00019314) bg_cale_side_pane_ParamLimits

0x0a64,	// (0x0000fe1f) cale_week_time_pane_t1_ParamLimits

0x0a9e,	// (0x0000fe59) cale_week_time_pane_t2_ParamLimits

0x0ad8,	// (0x0000fe93) cale_week_time_pane_t3_ParamLimits

0x0b12,	// (0x0000fecd) cale_week_time_pane_t4_ParamLimits

0x0b4c,	// (0x0000ff07) cale_week_time_pane_t5_ParamLimits

0x0b86,	// (0x0000ff41) cale_week_time_pane_t6_ParamLimits

0x0bc0,	// (0x0000ff7b) cale_week_time_pane_t7_ParamLimits

0x0bfa,	// (0x0000ffb5) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0001e5a2) cale_week_time_pane_t_ParamLimits

0x0c38,	// (0x0000fff3) cell_cale_week_pane_g2_ParamLimits

0x9f59,	// (0x00019314) bg_cale_side_pane_cp01_ParamLimits

0x1fbe,	// (0x00011379) cale_month_week_pane_t1_ParamLimits

0x1ff7,	// (0x000113b2) cale_month_week_pane_t2_ParamLimits

0x2030,	// (0x000113eb) cale_month_week_pane_t3_ParamLimits

0x2069,	// (0x00011424) cale_month_week_pane_t4_ParamLimits

0x20a2,	// (0x0001145d) cale_month_week_pane_t5_ParamLimits

0x20db,	// (0x00011496) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0001e67b) cale_month_week_pane_t_ParamLimits

0xa30c,	// (0x000196c7) cell_cale_month_pane_g1_ParamLimits

0x95a6,	// (0x00018961) main_cale_event_viewer_pane

0x95a6,	// (0x00018961) listscroll_cale_event_viewer_pane

0xc3df,	// (0x0001b79a) list_cale_ev_pane

0xc3e7,	// (0x0001b7a2) scroll_pane_cp023

0x44a4,	// (0x0001385f) field_cale_ev_pane_ParamLimits

0x44a4,	// (0x0001385f) field_cale_ev_pane

0xc3f3,	// (0x0001b7ae) field_cale_ev_content_pane_ParamLimits

0xc3f3,	// (0x0001b7ae) field_cale_ev_content_pane

0xc3ff,	// (0x0001b7ba) field_cale_ev_pane_g1_ParamLimits

0xc3ff,	// (0x0001b7ba) field_cale_ev_pane_g1

0xc40b,	// (0x0001b7c6) field_cale_ev_pane_g2_ParamLimits

0xc40b,	// (0x0001b7c6) field_cale_ev_pane_g2

0xc423,	// (0x0001b7de) field_cale_ev_pane_g3_ParamLimits

0xc423,	// (0x0001b7de) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0001eabc) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0001eabc) field_cale_ev_pane_g

0xc43b,	// (0x0001b7f6) field_cale_ev_pane_t1_ParamLimits

0xc43b,	// (0x0001b7f6) field_cale_ev_pane_t1

0x44c8,	// (0x00013883) field_cale_ev_content_pane_t1_ParamLimits

0x44c8,	// (0x00013883) field_cale_ev_content_pane_t1

0x2d8c,	// (0x00012147) bg_button_pane_cp01

0x050d,	// (0x0000f8c8) listscroll_cale_week_pane_ParamLimits

0x0523,	// (0x0000f8de) popup_toolbar_window_cp01

0x9f25,	// (0x000192e0) listscroll_cale_week_pane_t1_ParamLimits

0x22f0,	// (0x000116ab) listscroll_cale_day_pane_ParamLimits

0x2308,	// (0x000116c3) popup_toolbar_window_cp02

0xa377,	// (0x00019732) listscroll_cale_day_pane_t1_ParamLimits

0x050d,	// (0x0000f8c8) main_cale_month_pane_ParamLimits

0x3a10,	// (0x00012dcb) popup_toolbar_window_cp03_ParamLimits

0x3a10,	// (0x00012dcb) popup_toolbar_window_cp03

0x3036,	// (0x000123f1) main_image_pane_g2_ParamLimits

0x3036,	// (0x000123f1) main_image_pane_g2

0x3047,	// (0x00012402) main_image_pane_g3_ParamLimits

0x3047,	// (0x00012402) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0001e8ad) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0001e8ad) main_image_pane_g

0xacd2,	// (0x0001a08d) main_image_pane_t1_ParamLimits

0x3058,	// (0x00012413) main_image_pane_t2_ParamLimits

0x3058,	// (0x00012413) main_image_pane_t2

0x306a,	// (0x00012425) main_image_pane_t3_ParamLimits

0x306a,	// (0x00012425) main_image_pane_t3

0x3092,	// (0x0001244d) main_image_pane_t4_ParamLimits

0x3092,	// (0x0001244d) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0001e8b4) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0001e8b4) main_image_pane_t

0x30b2,	// (0x0001246d) popup_image_details_window_cp01

0x30bc,	// (0x00012477) popup_toobar_trans_pane_cp01_ParamLimits

0x30bc,	// (0x00012477) popup_toobar_trans_pane_cp01

0x3883,	// (0x00012c3e) popup_image_details_window_ParamLimits

0x3883,	// (0x00012c3e) popup_image_details_window

0xbe71,	// (0x0001b22c) popup_image_focus_window

0x3cea,	// (0x000130a5) camera2_autofocus_pane_ParamLimits

0x3cea,	// (0x000130a5) camera2_autofocus_pane

0x95a6,	// (0x00018961) bg_popup_sub_pane_cp06

0xc452,	// (0x0001b80d) popup_image_focus_window_g1

0xc45a,	// (0x0001b815) popup_image_focus_window_g2

0xc462,	// (0x0001b81d) popup_image_focus_window_g3

0xc46a,	// (0x0001b825) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0001eac3) popup_image_focus_window_g

0xc472,	// (0x0001b82d) popup_image_focus_window_t1

0xc480,	// (0x0001b83b) popup_image_focus_window_t2

0xc490,	// (0x0001b84b) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0001eacc) popup_image_focus_window_t

0xc49e,	// (0x0001b859) camera2_autofocus_pane_g1

0x9607,	// (0x000189c2) bg_tb_trans_pane_cp01

0xc4ac,	// (0x0001b867) popup_image_details_window_g1

0xc4bf,	// (0x0001b87a) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0001eade) popup_image_details_window_g

0xc4e8,	// (0x0001b8a3) popup_image_details_window_t1

0xc4fa,	// (0x0001b8b5) popup_image_details_window_t2

0xc513,	// (0x0001b8ce) popup_image_details_window_t3

0xc527,	// (0x0001b8e2) popup_image_details_window_t4

0xc542,	// (0x0001b8fd) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0001eae5) popup_image_details_window_t

0x9d3c,	// (0x000190f7) bg_calc_paper_pane_ParamLimits

0x95a6,	// (0x00018961) grid_highlight_pane_cp013

0x9d50,	// (0x0001910b) list_calc_pane_ParamLimits

0x9d62,	// (0x0001911d) scroll_pane_cp024

0x9d6a,	// (0x00019125) bg_calc_display_pane_ParamLimits

0x034b,	// (0x0000f706) calc_display_pane_t1_ParamLimits

0x035d,	// (0x0000f718) calc_display_pane_t2_ParamLimits

0x9d76,	// (0x00019131) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0001e515) calc_display_pane_t_ParamLimits

0x0426,	// (0x0000f7e1) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0001e532) cell_calc_pane_g

0x042f,	// (0x0000f7ea) cell_calc_pane_t1

0x9ded,	// (0x000191a8) grid_highlight_pane_cp02_ParamLimits

0x9e03,	// (0x000191be) toolbar_button_pane_cp01_ParamLimits

0x9e03,	// (0x000191be) toolbar_button_pane_cp01

0xad17,	// (0x0001a0d2) temp_image_control_pane_ParamLimits

0xad17,	// (0x0001a0d2) temp_image_control_pane

0x9607,	// (0x000189c2) main_mp3_pane

0xc55c,	// (0x0001b917) temp_image_control_pane_g1_ParamLimits

0xc55c,	// (0x0001b917) temp_image_control_pane_g1

0xc56a,	// (0x0001b925) temp_image_control_pane_g2_ParamLimits

0xc56a,	// (0x0001b925) temp_image_control_pane_g2

0xc57c,	// (0x0001b937) temp_image_control_pane_g3_ParamLimits

0xc57c,	// (0x0001b937) temp_image_control_pane_g3

0x4519,	// (0x000138d4) temp_image_control_pane_g4_ParamLimits

0x4519,	// (0x000138d4) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0001eaf0) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0001eaf0) temp_image_control_pane_g

0xc55c,	// (0x0001b917) main_mp3_pane_g1

0x452c,	// (0x000138e7) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0001eaf9) main_mp3_pane_g

0xc5bf,	// (0x0001b97a) main_mp3_pane_t1

0x9fcc,	// (0x00019387) main_camera_pane_g8_ParamLimits

0x9fcc,	// (0x00019387) main_camera_pane_g8

0x0f75,	// (0x00010330) main_video_pane_g7_ParamLimits

0x0f75,	// (0x00010330) main_video_pane_g7

0xbf7d,	// (0x0001b338) main_camera2_pane_t7_ParamLimits

0xbf7d,	// (0x0001b338) main_camera2_pane_t7

0xa118,	// (0x000194d3) scroll_pane_cp025_ParamLimits

0xa118,	// (0x000194d3) scroll_pane_cp025

0xa12c,	// (0x000194e7) scroll_pane_cp026_ParamLimits

0xa12c,	// (0x000194e7) scroll_pane_cp026

0xa13b,	// (0x000194f6) wml_content_pane_ParamLimits

0x95a6,	// (0x00018961) main_touch_calib_pane

0x45fe,	// (0x000139b9) main_touch_calib_pane_g1

0x4610,	// (0x000139cb) main_touch_calib_pane_g2

0x4622,	// (0x000139dd) main_touch_calib_pane_g3

0x4634,	// (0x000139ef) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0001eb17) main_touch_calib_pane_g

0x4646,	// (0x00013a01) main_touch_calib_pane_t1

0x4660,	// (0x00013a1b) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0001eb20) main_touch_calib_pane_t

0xa8e5,	// (0x00019ca0) mup_progress_pane_cp02

0xa904,	// (0x00019cbf) navi_pane_g1

0xa966,	// (0x00019d21) navi_pane_mp_t3

0x9607,	// (0x000189c2) main_mp3_pane_ParamLimits

0x3a52,	// (0x00012e0d) navi_pane_ParamLimits

0xc55c,	// (0x0001b917) main_mp3_pane_g1_ParamLimits

0x452c,	// (0x000138e7) main_mp3_pane_g2_ParamLimits

0x4538,	// (0x000138f3) main_mp3_pane_g3_ParamLimits

0x4538,	// (0x000138f3) main_mp3_pane_g3

0x4546,	// (0x00013901) main_mp3_pane_g4_ParamLimits

0x4546,	// (0x00013901) main_mp3_pane_g4

0xc58c,	// (0x0001b947) main_mp3_pane_g5_ParamLimits

0xc58c,	// (0x0001b947) main_mp3_pane_g5

0xc59a,	// (0x0001b955) main_mp3_pane_g6_ParamLimits

0xc59a,	// (0x0001b955) main_mp3_pane_g6

0xc5a7,	// (0x0001b962) main_mp3_pane_g7_ParamLimits

0xc5a7,	// (0x0001b962) main_mp3_pane_g7

0xc5b3,	// (0x0001b96e) main_mp3_pane_g8_ParamLimits

0xc5b3,	// (0x0001b96e) main_mp3_pane_g8

0xf73e,	// (0x0001eaf9) main_mp3_pane_g_ParamLimits

0x4552,	// (0x0001390d) main_mp3_pane_t2

0x4560,	// (0x0001391b) main_mp3_pane_t3

0xc5cd,	// (0x0001b988) main_mp3_pane_t4

0xc5db,	// (0x0001b996) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0001eb0a) main_mp3_pane_t

0xc5e9,	// (0x0001b9a4) mup_progress_pane_cp01

0x95c4,	// (0x0001897f) aid_zoom_text_secondary2

0xc3df,	// (0x0001b79a) list_cale_ev2_pane

0xc3e7,	// (0x0001b7a2) scroll_pane_cp023_ParamLimits

0x46ba,	// (0x00013a75) field_cale_ev2_pane_ParamLimits

0x46ba,	// (0x00013a75) field_cale_ev2_pane

0x46de,	// (0x00013a99) field_cale_ev2_pane_g1_ParamLimits

0x46de,	// (0x00013a99) field_cale_ev2_pane_g1

0x46ea,	// (0x00013aa5) field_cale_ev2_pane_g2_ParamLimits

0x46ea,	// (0x00013aa5) field_cale_ev2_pane_g2

0x4702,	// (0x00013abd) field_cale_ev2_pane_g3_ParamLimits

0x4702,	// (0x00013abd) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0001eb2b) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0001eb2b) field_cale_ev2_pane_g

0x471a,	// (0x00013ad5) field_cale_ev2_pane_t1_ParamLimits

0x471a,	// (0x00013ad5) field_cale_ev2_pane_t1

0x4731,	// (0x00013aec) field_cale_ev2_pane_t2_ParamLimits

0x4731,	// (0x00013aec) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0001eb34) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0001eb34) field_cale_ev2_pane_t

0x2ed3,	// (0x0001228e) main_postcard_pane_g5_ParamLimits

0x2ed3,	// (0x0001228e) main_postcard_pane_g5

0x2ee9,	// (0x000122a4) main_postcard_pane_g6_ParamLimits

0x2ee9,	// (0x000122a4) main_postcard_pane_g6

0x0d21,	// (0x000100dc) camera2_autofocus_pane_cp_ParamLimits

0x0d21,	// (0x000100dc) camera2_autofocus_pane_cp

0x9607,	// (0x000189c2) main_mup3_pane

0x4766,	// (0x00013b21) main_mup3_pane_g1_ParamLimits

0x4766,	// (0x00013b21) main_mup3_pane_g1

0x4788,	// (0x00013b43) main_mup3_pane_g2_ParamLimits

0x4788,	// (0x00013b43) main_mup3_pane_g2

0x480b,	// (0x00013bc6) main_mup3_pane_g3_ParamLimits

0x480b,	// (0x00013bc6) main_mup3_pane_g3

0x4853,	// (0x00013c0e) main_mup3_pane_g4_ParamLimits

0x4853,	// (0x00013c0e) main_mup3_pane_g4

0x4899,	// (0x00013c54) main_mup3_pane_g5_ParamLimits

0x4899,	// (0x00013c54) main_mup3_pane_g5

0x48e1,	// (0x00013c9c) main_mup3_pane_g6_ParamLimits

0x48e1,	// (0x00013c9c) main_mup3_pane_g6

0xc5fd,	// (0x0001b9b8) main_mup3_pane_g7_ParamLimits

0xc5fd,	// (0x0001b9b8) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0001eb44) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0001eb44) main_mup3_pane_g

0x4961,	// (0x00013d1c) main_mup3_pane_t1_ParamLimits

0x4961,	// (0x00013d1c) main_mup3_pane_t1

0x49cf,	// (0x00013d8a) main_mup3_pane_t2_ParamLimits

0x49cf,	// (0x00013d8a) main_mup3_pane_t2

0x4aa5,	// (0x00013e60) main_mup3_pane_t4_ParamLimits

0x4aa5,	// (0x00013e60) main_mup3_pane_t4

0x4b03,	// (0x00013ebe) main_mup3_pane_t5_ParamLimits

0x4b03,	// (0x00013ebe) main_mup3_pane_t5

0x4bbd,	// (0x00013f78) main_mup3_pane_t6_ParamLimits

0x4bbd,	// (0x00013f78) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0001eb55) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0001eb55) main_mup3_pane_t

0x4c75,	// (0x00014030) mup3_progress_pane_ParamLimits

0x4c75,	// (0x00014030) mup3_progress_pane

0x4d07,	// (0x000140c2) popup_mup3_control_window_ParamLimits

0x4d07,	// (0x000140c2) popup_mup3_control_window

0xc60b,	// (0x0001b9c6) popup_mup3_text_window

0x4d3d,	// (0x000140f8) mup3_progress_pane_t1

0x4d5b,	// (0x00014116) mup3_progress_pane_t2

0xc613,	// (0x0001b9ce) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0001eb62) mup3_progress_pane_t

0xc630,	// (0x0001b9eb) mup_progress_pane_cp03

0x95a6,	// (0x00018961) bg_tb_trans_pane_cp04

0x4d79,	// (0x00014134) mup3_volume_pane

0x4d81,	// (0x0001413c) popup_mup3_control_window_g1

0x4d8a,	// (0x00014145) mup3_volume_pane_g1

0x4d93,	// (0x0001414e) mup3_volume_pane_g2

0x4d9c,	// (0x00014157) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0001eb69) mup3_volume_pane_g

0x95a6,	// (0x00018961) bg_tb_trans_pane_cp03

0xc640,	// (0x0001b9fb) popup_mup3_text_window_g1

0xc648,	// (0x0001ba03) popup_mup3_text_window_t1

0x9dc4,	// (0x0001917f) list_calc_item_pane_g1_ParamLimits

0xc065,	// (0x0001b420) mup_volume_pane_cp_g1

0x467a,	// (0x00013a35) main_touch_calib_pane_t3

0x468e,	// (0x00013a49) main_touch_calib_pane_t4

0x46a4,	// (0x00013a5f) main_touch_calib_pane_t5

0x95b0,	// (0x0001896b) aid_cell_size_toolbar2

0x95b8,	// (0x00018973) aid_popup3_width_pane

0x95c4,	// (0x0001897f) aid_zoom_text_msg_primary

0x0cf6,	// (0x000100b1) vorec_t7

0x9d88,	// (0x00019143) bg_calc_paper_pane_g1_ParamLimits

0x9d94,	// (0x0001914f) bg_calc_paper_pane_g2_ParamLimits

0x9da0,	// (0x0001915b) bg_calc_paper_pane_g3_ParamLimits

0x9dac,	// (0x00019167) bg_calc_paper_pane_g4_ParamLimits

0x9db8,	// (0x00019173) bg_calc_paper_pane_g5_ParamLimits

0x03ac,	// (0x0000f767) bg_calc_paper_pane_g6_ParamLimits

0x03bf,	// (0x0000f77a) bg_calc_paper_pane_g7_ParamLimits

0x03d2,	// (0x0000f78d) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0001e51c) bg_calc_paper_pane_g_ParamLimits

0x03e3,	// (0x0000f79e) calc_bg_paper_pane_g9_ParamLimits

0x0e83,	// (0x0001023e) image_qvga_pane_ParamLimits

0x0e83,	// (0x0001023e) image_qvga_pane

0x9c83,	// (0x0001903e) bg_popup_sub_pane_cp04_ParamLimits

0xac4e,	// (0x0001a009) popup_mup_playback_window_g1_ParamLimits

0xac5a,	// (0x0001a015) popup_mup_playback_window_t1_ParamLimits

0xac6f,	// (0x0001a02a) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0001e8a8) popup_mup_playback_window_t_ParamLimits

0x416e,	// (0x00013529) main_mup2_pane_g3_ParamLimits

0x416e,	// (0x00013529) main_mup2_pane_g3

0x1282,	// (0x0001063d) popup_toolbar_window_cp04

0xb055,	// (0x0001a410) popup_call2_audio_second_window_g3_ParamLimits

0xb055,	// (0x0001a410) popup_call2_audio_second_window_g3

0xb45f,	// (0x0001a81a) popup_call2_audio_first_window_g4_ParamLimits

0xb45f,	// (0x0001a81a) popup_call2_audio_first_window_g4

0xbade,	// (0x0001ae99) popup_call2_audio_in_window_g4_ParamLimits

0xbade,	// (0x0001ae99) popup_call2_audio_in_window_g4

0x3018,	// (0x000123d3) aid_area_sk_bg_cut_ParamLimits

0x3018,	// (0x000123d3) aid_area_sk_bg_cut

0xac84,	// (0x0001a03f) aid_area_sk_bg_cut_2_ParamLimits

0xac84,	// (0x0001a03f) aid_area_sk_bg_cut_2

0x447a,	// (0x00013835) aid_placing_details_win

0x4482,	// (0x0001383d) aid_placing_details_win_2

0xc49e,	// (0x0001b859) camera2_autofocus_pane_g1_ParamLimits

0xff95,	// (0x0000f350) popup_fixed_preview_cale_window_ParamLimits

0xff95,	// (0x0000f350) popup_fixed_preview_cale_window

0xa9be,	// (0x00019d79) navi_slider_pane_g3

0xa9c7,	// (0x00019d82) navi_slider_pane_g4

0xa9d0,	// (0x00019d8b) navi_slider_pane_g5

0xa9be,	// (0x00019d79) navi_slider_pane_g6

0xa9d9,	// (0x00019d94) navi_slider_pane_g7

0xaafc,	// (0x00019eb7) mup_scale_pane_g3

0xab05,	// (0x00019ec0) mup_scale_pane_g4

0xab0e,	// (0x00019ec9) mup_scale_pane_g5

0x2ce8,	// (0x000120a3) mup_scale_pane_g6

0x2cf1,	// (0x000120ac) mup_scale_pane_g7

0xa9be,	// (0x00019d79) cams2_slider_pane_g3

0xc11a,	// (0x0001b4d5) cams2_slider_pane_g4

0xc122,	// (0x0001b4dd) cams2_slider_pane_g5

0xa9be,	// (0x00019d79) cams2_slider_pane_g6

0xc12a,	// (0x0001b4e5) cams2_slider_pane_g7

0xc35c,	// (0x0001b717) camera2_autofocus_pane_cp_g1

0xbe43,	// (0x0001b1fe) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe43,	// (0x0001b1fe) bg_popup_preview_window_pane_cp02

0xc656,	// (0x0001ba11) list_fp_cale_pane_ParamLimits

0xc656,	// (0x0001ba11) list_fp_cale_pane

0xc662,	// (0x0001ba1d) popup_fixed_preview_cale_window_t1_ParamLimits

0xc662,	// (0x0001ba1d) popup_fixed_preview_cale_window_t1

0x4da5,	// (0x00014160) popup_fixed_preview_cale_window_t2_ParamLimits

0x4da5,	// (0x00014160) popup_fixed_preview_cale_window_t2

0x4dba,	// (0x00014175) popup_fixed_preview_cale_window_t3_ParamLimits

0x4dba,	// (0x00014175) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0001eb70) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0001eb70) popup_fixed_preview_cale_window_t

0x4dcf,	// (0x0001418a) list_single_fp_cale_pane_ParamLimits

0x4dcf,	// (0x0001418a) list_single_fp_cale_pane

0xc680,	// (0x0001ba3b) list_single_fp_cale_pane_g1_ParamLimits

0xc680,	// (0x0001ba3b) list_single_fp_cale_pane_g1

0xc68c,	// (0x0001ba47) list_single_fp_cale_pane_g2_ParamLimits

0xc68c,	// (0x0001ba47) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0001eb77) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0001eb77) list_single_fp_cale_pane_g

0xc6a5,	// (0x0001ba60) list_single_fp_cale_pane_t1_ParamLimits

0xc6a5,	// (0x0001ba60) list_single_fp_cale_pane_t1

0xc6b7,	// (0x0001ba72) list_single_fp_cale_pane_t2_ParamLimits

0xc6b7,	// (0x0001ba72) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0001eb7e) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0001eb7e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95a6,	// (0x00018961) main_dialer_pane

0x4de4,	// (0x0001419f) aid_cell_size_keypad

0x4dee,	// (0x000141a9) dialer_ne_pane

0x4df8,	// (0x000141b3) grid_dialer_command_1_pane

0x4e00,	// (0x000141bb) grid_dialer_command_2_pane

0x4e08,	// (0x000141c3) grid_dialer_keypad_pane

0x4e1a,	// (0x000141d5) bg_popup_call_pane_cp06_ParamLimits

0x4e1a,	// (0x000141d5) bg_popup_call_pane_cp06

0x4e26,	// (0x000141e1) dialer_ne_clear_pane_ParamLimits

0x4e26,	// (0x000141e1) dialer_ne_clear_pane

0xc6ea,	// (0x0001baa5) dialer_ne_pane_g1

0xc6f2,	// (0x0001baad) dialer_ne_pane_t1_ParamLimits

0xc6f2,	// (0x0001baad) dialer_ne_pane_t1

0x4e32,	// (0x000141ed) dialer_ne_pane_t2_ParamLimits

0x4e32,	// (0x000141ed) dialer_ne_pane_t2

0x4e5c,	// (0x00014217) dialer_ne_pane_t3_ParamLimits

0x4e5c,	// (0x00014217) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0001eb83) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0001eb83) dialer_ne_pane_t

0x4e8c,	// (0x00014247) dialer_ne_pane_t3_copy1_ParamLimits

0x4e8c,	// (0x00014247) dialer_ne_pane_t3_copy1

0x4ebb,	// (0x00014276) cell_dialer_keypad_pane_ParamLimits

0x4ebb,	// (0x00014276) cell_dialer_keypad_pane

0x4ed2,	// (0x0001428d) cell_dialer_command_1_pane_ParamLimits

0x4ed2,	// (0x0001428d) cell_dialer_command_1_pane

0x4ee8,	// (0x000142a3) cell_dialer_command_2_pane_ParamLimits

0x4ee8,	// (0x000142a3) cell_dialer_command_2_pane

0xc704,	// (0x0001babf) bg_button_pane_cp02_ParamLimits

0xc704,	// (0x0001babf) bg_button_pane_cp02

0x4ef7,	// (0x000142b2) cell_dialer_keypad_pane_g1_ParamLimits

0x4ef7,	// (0x000142b2) cell_dialer_keypad_pane_g1

0xc704,	// (0x0001babf) bg_button_pane_cp03_ParamLimits

0xc704,	// (0x0001babf) bg_button_pane_cp03

0x4f0c,	// (0x000142c7) cell_dialer_command_1_pane_g1_ParamLimits

0x4f0c,	// (0x000142c7) cell_dialer_command_1_pane_g1

0xc710,	// (0x0001bacb) bg_button_pane_cp04

0x4f20,	// (0x000142db) cell_dialer_command_2_pane_g1

0xa9a4,	// (0x00019d5f) bg_button_pane_cp06

0xc718,	// (0x0001bad3) dialer_ne_clear_pane_g1

0x27ba,	// (0x00011b75) navi_pane_g2

0x27e8,	// (0x00011ba3) navi_pane_g3

0x0002,

0xf3f0,	// (0x0001e7ab) navi_pane_g

0x2813,	// (0x00011bce) navi_pane_mv_g2

0x283a,	// (0x00011bf5) navi_pane_mv_g5

0x2842,	// (0x00011bfd) navi_pane_mv_t1

0x9d6a,	// (0x00019125) main_clock2_pane

0x4f6b,	// (0x00014326) main_clock2_list_pane_ParamLimits

0x4f6b,	// (0x00014326) main_clock2_list_pane

0x4fa3,	// (0x0001435e) main_clock2_pane_t1_ParamLimits

0x4fa3,	// (0x0001435e) main_clock2_pane_t1

0x4fdf,	// (0x0001439a) main_clock2_pane_t2_ParamLimits

0x4fdf,	// (0x0001439a) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0001eb8a) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0001eb8a) main_clock2_pane_t

0x507f,	// (0x0001443a) popup_clock_analogue_window_cp03_ParamLimits

0x507f,	// (0x0001443a) popup_clock_analogue_window_cp03

0x50a6,	// (0x00014461) popup_clock_digital_window_cp02_ParamLimits

0x50a6,	// (0x00014461) popup_clock_digital_window_cp02

0x511f,	// (0x000144da) main_clock2_list_single_pane_ParamLimits

0x511f,	// (0x000144da) main_clock2_list_single_pane

0xa9a4,	// (0x00019d5f) list_highlight_pane_cp05

0xc734,	// (0x0001baef) main_clock2_list_single_pane_t1

0x1282,	// (0x0001063d) popup_toolbar_window_cp04_ParamLimits

0x44e9,	// (0x000138a4) camera2_autofocus_pane_g2_ParamLimits

0x44e9,	// (0x000138a4) camera2_autofocus_pane_g2

0x44f5,	// (0x000138b0) camera2_autofocus_pane_g3_ParamLimits

0x44f5,	// (0x000138b0) camera2_autofocus_pane_g3

0x4501,	// (0x000138bc) camera2_autofocus_pane_g4_ParamLimits

0x4501,	// (0x000138bc) camera2_autofocus_pane_g4

0x450d,	// (0x000138c8) camera2_autofocus_pane_g5_ParamLimits

0x450d,	// (0x000138c8) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0001ead3) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0001ead3) camera2_autofocus_pane_g

0x4746,	// (0x00013b01) camera2_autofocus_pane_cp_g2

0x474e,	// (0x00013b09) camera2_autofocus_pane_cp_g3

0x4756,	// (0x00013b11) camera2_autofocus_pane_cp_g4

0x475e,	// (0x00013b19) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0001eb39) camera2_autofocus_pane_cp_g

0x4e12,	// (0x000141cd) popup_dialer_spcha_window

0x95a6,	// (0x00018961) bg_popup_sub_pane_cp07

0xc742,	// (0x0001bafd) list_spcha_pane

0xc74a,	// (0x0001bb05) list_single_spcha_pane_ParamLimits

0xc74a,	// (0x0001bb05) list_single_spcha_pane

0x95a6,	// (0x00018961) list_highlight_pane_cp06

0xc75b,	// (0x0001bb16) list_single_spcha_pane_t1

0xb888,	// (0x0001ac43) popup_call2_audio_out_window_g4_ParamLimits

0xb888,	// (0x0001ac43) popup_call2_audio_out_window_g4

0x95a6,	// (0x00018961) main_imed2_pane

0xbe7b,	// (0x0001b236) popup_imed_adjust2_window

0x389b,	// (0x00012c56) popup_imed_trans_window_ParamLimits

0x389b,	// (0x00012c56) popup_imed_trans_window

0xc194,	// (0x0001b54f) popup_blid_sat_info2_window_t1

0xc1a2,	// (0x0001b55d) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0001ea68) popup_blid_sat_info2_window_t

0x51d5,	// (0x00014590) aid_size_cell_colour_35

0x51f5,	// (0x000145b0) aid_size_cell_colour_112

0x5215,	// (0x000145d0) aid_size_cell_effect

0xbe4f,	// (0x0001b20a) bg_tb_trans_pane_cp02

0xa495,	// (0x00019850) heading_imed_pane

0x5235,	// (0x000145f0) listscroll_imed_pane

0xc769,	// (0x0001bb24) heading_imed_pane_g1

0xc771,	// (0x0001bb2c) heading_imed_pane_t1

0xc77f,	// (0x0001bb3a) grid_imed_colour_35_pane_ParamLimits

0xc77f,	// (0x0001bb3a) grid_imed_colour_35_pane

0x5241,	// (0x000145fc) grid_imed_effect_pane

0xc79b,	// (0x0001bb56) list_imed_aspect_pane

0x5256,	// (0x00014611) scroll_pane_cp027_ParamLimits

0x5256,	// (0x00014611) scroll_pane_cp027

0x5267,	// (0x00014622) cell_imed_effect_pane_ParamLimits

0x5267,	// (0x00014622) cell_imed_effect_pane

0xc7a3,	// (0x0001bb5e) cell_imed_colour_pane_ParamLimits

0xc7a3,	// (0x0001bb5e) cell_imed_colour_pane

0xc7ed,	// (0x0001bba8) cell_imed_colour_pane_g1_ParamLimits

0xc7ed,	// (0x0001bba8) cell_imed_colour_pane_g1

0xc7fe,	// (0x0001bbb9) hgihlgiht_grid_pane_cp016_ParamLimits

0xc7fe,	// (0x0001bbb9) hgihlgiht_grid_pane_cp016

0x5292,	// (0x0001464d) cell_imed_effect_pane_g1

0x529a,	// (0x00014655) grid_highlight_pane_cp017

0xc80f,	// (0x0001bbca) list_imed_single_pane_ParamLimits

0xc80f,	// (0x0001bbca) list_imed_single_pane

0x95a6,	// (0x00018961) list_highlight_pane_cp07

0xc823,	// (0x0001bbde) list_imed_aspect_pane_comp1_t1

0xbe4f,	// (0x0001b20a) bg_tb_trans_pane_cp05

0xc845,	// (0x0001bc00) popup_imed_adjust2_window_g1

0xc86c,	// (0x0001bc27) popup_imed_adjust2_window_t1

0xc884,	// (0x0001bc3f) slider_imed_adjust_pane

0xc898,	// (0x0001bc53) slider_imed_adjust_pane_g1

0xc8a8,	// (0x0001bc63) slider_imed_adjust_pane_g2

0xc8b8,	// (0x0001bc73) slider_imed_adjust_pane_g3

0xc8c9,	// (0x0001bc84) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0001eba7) slider_imed_adjust_pane_g

0x52a3,	// (0x0001465e) aid_size_cell_clipart2

0x52af,	// (0x0001466a) grid_imed_clipart_pane

0xc8da,	// (0x0001bc95) scroll_pane_cp031

0x52b9,	// (0x00014674) cell_imed_clipart_pane_ParamLimits

0x52b9,	// (0x00014674) cell_imed_clipart_pane

0x52d6,	// (0x00014691) cell_imed_clipart_pane_g1

0x95a6,	// (0x00018961) grid_highlight_pane_cp014

0x4f80,	// (0x0001433b) main_clock2_pane_g1_ParamLimits

0x4f80,	// (0x0001433b) main_clock2_pane_g1

0x50c6,	// (0x00014481) aid_call2_pane_cp10

0x50d8,	// (0x00014493) aid_call_pane_cp10

0xa8d9,	// (0x00019c94) popup_clock_analogue_window_cp10_g1

0xa8d9,	// (0x00019c94) popup_clock_analogue_window_cp10_g2

0x50ea,	// (0x000144a5) popup_clock_analogue_window_cp10_g3

0x50ea,	// (0x000144a5) popup_clock_analogue_window_cp10_g4

0xa8d9,	// (0x00019c94) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0001eb95) popup_clock_analogue_window_cp10_g

0x5100,	// (0x000144bb) popup_clock_analogue_window_cp10_t1

0x5131,	// (0x000144ec) clock_digital_number_pane_cp10_ParamLimits

0x5131,	// (0x000144ec) clock_digital_number_pane_cp10

0x514b,	// (0x00014506) clock_digital_number_pane_cp11_ParamLimits

0x514b,	// (0x00014506) clock_digital_number_pane_cp11

0x5165,	// (0x00014520) clock_digital_number_pane_cp12_ParamLimits

0x5165,	// (0x00014520) clock_digital_number_pane_cp12

0x517f,	// (0x0001453a) clock_digital_number_pane_cp13_ParamLimits

0x517f,	// (0x0001453a) clock_digital_number_pane_cp13

0x5199,	// (0x00014554) clock_digital_separator_pane_cp10_ParamLimits

0x5199,	// (0x00014554) clock_digital_separator_pane_cp10

0x51b3,	// (0x0001456e) popup_clock_digital_window_cp02_t1_ParamLimits

0x51b3,	// (0x0001456e) popup_clock_digital_window_cp02_t1

0x9c7b,	// (0x00019036) clock_digital_number_pane_cp10_g1

0x9c7b,	// (0x00019036) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0001ebb0) clock_digital_number_pane_cp10_g

0x9c7b,	// (0x00019036) clock_digital_separator_pane_cp10_g1

0x9c7b,	// (0x00019036) clock_digital_separator_pane_g2_cp10

0xa974,	// (0x00019d2f) navi_pane_vded_g4

0xa97d,	// (0x00019d38) navi_pane_vded_g5

0xa986,	// (0x00019d41) navi_pane_vded_t1

0x95a6,	// (0x00018961) main_vded_pane

0x52df,	// (0x0001469a) main_vded_pane_g1

0x52eb,	// (0x000146a6) main_vded_pane_g2

0x52f7,	// (0x000146b2) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0001ebb5) main_vded_pane_g

0x5303,	// (0x000146be) main_vded_pane_t1

0x5311,	// (0x000146cc) main_vded_pane_t2

0x0001,

0xf801,	// (0x0001ebbc) main_vded_pane_t

0x531f,	// (0x000146da) vded_slider_pane

0x5329,	// (0x000146e4) vded_video_pane

0xc8e2,	// (0x0001bc9d) vded_video_pane_g1

0x5333,	// (0x000146ee) vded_video_pane_g2

0xc35c,	// (0x0001b717) vded_video_pane_g3

0x0002,

0xf806,	// (0x0001ebc1) vded_video_pane_g

0xc8ec,	// (0x0001bca7) vded_slider_pane_g1

0xc065,	// (0x0001b420) vded_slider_pane_g2

0xc8f5,	// (0x0001bcb0) vded_slider_pane_g3

0xc8fe,	// (0x0001bcb9) vded_slider_pane_g4

0xc907,	// (0x0001bcc2) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0001ebc8) vded_slider_pane_g

0x4cf1,	// (0x000140ac) mup3_rocker_pane_ParamLimits

0x4cf1,	// (0x000140ac) mup3_rocker_pane

0x533c,	// (0x000146f7) mup3_control_keys_pane_g1

0x5344,	// (0x000146ff) mup3_control_keys_pane_g2

0x534c,	// (0x00014707) mup3_control_keys_pane_g3

0x5354,	// (0x0001470f) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0001ebd3) mup3_control_keys_pane_g

0xffcc,	// (0x0000f387) popup_toolbar2_fixed_window_cp01_ParamLimits

0xffcc,	// (0x0000f387) popup_toolbar2_fixed_window_cp01

0x4d27,	// (0x000140e2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d27,	// (0x000140e2) popup_toolbar2_fixed_window_cp02

0xb1c7,	// (0x0001a582) popup_call2_audio_second_window_t4_ParamLimits

0xb1c7,	// (0x0001a582) popup_call2_audio_second_window_t4

0xb6f5,	// (0x0001aab0) popup_call2_audio_first_window_t6_ParamLimits

0xb6f5,	// (0x0001aab0) popup_call2_audio_first_window_t6

0xb98b,	// (0x0001ad46) popup_call2_audio_out_window_t6_ParamLimits

0xb98b,	// (0x0001ad46) popup_call2_audio_out_window_t6

0x95a6,	// (0x00018961) main_vitu_pane

0x5364,	// (0x0001471f) aid_size_cell_itu_ParamLimits

0x5364,	// (0x0001471f) aid_size_cell_itu

0x9607,	// (0x000189c2) bg_popup_window_pane_cp08_ParamLimits

0x9607,	// (0x000189c2) bg_popup_window_pane_cp08

0x537a,	// (0x00014735) field_vitu_entry_pane_ParamLimits

0x537a,	// (0x00014735) field_vitu_entry_pane

0x5391,	// (0x0001474c) grid_vitu_function_pane_ParamLimits

0x5391,	// (0x0001474c) grid_vitu_function_pane

0x53ac,	// (0x00014767) grid_vitu_itu_pane_ParamLimits

0x53ac,	// (0x00014767) grid_vitu_itu_pane

0x53ca,	// (0x00014785) cell_vitu_itu_pane_ParamLimits

0x53ca,	// (0x00014785) cell_vitu_itu_pane

0x53f0,	// (0x000147ab) cell_vitu_function_pane_ParamLimits

0x53f0,	// (0x000147ab) cell_vitu_function_pane

0x9607,	// (0x000189c2) bg_popup_sub_pane_cp08_ParamLimits

0x9607,	// (0x000189c2) bg_popup_sub_pane_cp08

0x540b,	// (0x000147c6) field_vitu_entry_pane_t1_ParamLimits

0x540b,	// (0x000147c6) field_vitu_entry_pane_t1

0xc928,	// (0x0001bce3) field_vitu_entry_pane_t2_ParamLimits

0xc928,	// (0x0001bce3) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0001ebe1) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0001ebe1) field_vitu_entry_pane_t

0xc945,	// (0x0001bd00) bg_button_pane_cp05_ParamLimits

0xc945,	// (0x0001bd00) bg_button_pane_cp05

0x542b,	// (0x000147e6) cell_vitu_itu_pane_g1

0x5443,	// (0x000147fe) cell_vitu_itu_pane_t1_ParamLimits

0x5443,	// (0x000147fe) cell_vitu_itu_pane_t1

0x5455,	// (0x00014810) cell_vitu_itu_pane_t2_ParamLimits

0x5455,	// (0x00014810) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0001ebe6) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0001ebe6) cell_vitu_itu_pane_t

0xc953,	// (0x0001bd0e) bg_button_pane_cp07

0x548a,	// (0x00014845) cell_vitu_function_pane_g1

0x9d0a,	// (0x000190c5) main_calc_pane_g1

0xfdf0,	// (0x0000f1ab) aid_visual_content_pane

0x95a6,	// (0x00018961) main_vradio_pane

0x5493,	// (0x0001484e) main_vradio_pane_g1_ParamLimits

0x5493,	// (0x0001484e) main_vradio_pane_g1

0xc95d,	// (0x0001bd18) main_vradio_pane_g2_ParamLimits

0xc95d,	// (0x0001bd18) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0001ebed) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0001ebed) main_vradio_pane_g

0x54aa,	// (0x00014865) main_vradio_pane_t1_ParamLimits

0x54aa,	// (0x00014865) main_vradio_pane_t1

0x54bf,	// (0x0001487a) main_vradio_pane_t2_ParamLimits

0x54bf,	// (0x0001487a) main_vradio_pane_t2

0xc96a,	// (0x0001bd25) main_vradio_pane_t3_ParamLimits

0xc96a,	// (0x0001bd25) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0001ebf2) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0001ebf2) main_vradio_pane_t

0x54d4,	// (0x0001488f) vradio_rocker_control_pane_ParamLimits

0x54d4,	// (0x0001488f) vradio_rocker_control_pane

0x54e6,	// (0x000148a1) vradio_station_info_pane_ParamLimits

0x54e6,	// (0x000148a1) vradio_station_info_pane

0xc97e,	// (0x0001bd39) vradio_frequency_info_pane_ParamLimits

0xc97e,	// (0x0001bd39) vradio_frequency_info_pane

0xc35c,	// (0x0001b717) vradio_station_info_pane_g1

0xc98d,	// (0x0001bd48) vradio_station_info_pane_t1_ParamLimits

0xc98d,	// (0x0001bd48) vradio_station_info_pane_t1

0xc9af,	// (0x0001bd6a) vradio_station_info_pane_t2_ParamLimits

0xc9af,	// (0x0001bd6a) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0001ebf9) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0001ebf9) vradio_station_info_pane_t

0xc9c1,	// (0x0001bd7c) vradio_tuning_pane

0xc9c9,	// (0x0001bd84) vradio_rocker_control_pane_g1

0xc9d1,	// (0x0001bd8c) vradio_rocker_control_pane_g2

0xc9d9,	// (0x0001bd94) vradio_rocker_control_pane_g3

0xc9e1,	// (0x0001bd9c) vradio_rocker_control_pane_g4

0xc9e9,	// (0x0001bda4) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0001ebfe) vradio_rocker_control_pane_g

0x54f6,	// (0x000148b1) vradio_frequency_info_pane_g1

0xc9f1,	// (0x0001bdac) vradio_frequency_info_pane_t1_ParamLimits

0xc9f1,	// (0x0001bdac) vradio_frequency_info_pane_t1

0x5500,	// (0x000148bb) vradio_tuning_pane_g1

0x550b,	// (0x000148c6) vradio_tuning_pane_t1

0x95d4,	// (0x0001898f) area_side_right_pane_ParamLimits

0x95d4,	// (0x0001898f) area_side_right_pane

0xbe0a,	// (0x0001b1c5) status_small_pane_g1

0xbe12,	// (0x0001b1cd) status_small_pane_g2

0xbe1b,	// (0x0001b1d6) status_small_pane_g3

0xbe24,	// (0x0001b1df) status_small_pane_g4

0x0003,

0xf603,	// (0x0001e9be) status_small_pane_g

0xbe2d,	// (0x0001b1e8) status_small_pane_t1

0x95a6,	// (0x00018961) main_video3_pane

0xca05,	// (0x0001bdc0) cams_zoom_vslider_pane

0xca0d,	// (0x0001bdc8) image3_wide_pane_ParamLimits

0xca0d,	// (0x0001bdc8) image3_wide_pane

0xca27,	// (0x0001bde2) image3_wide_small_pane

0xca33,	// (0x0001bdee) main_video3_pane_g1_ParamLimits

0xca33,	// (0x0001bdee) main_video3_pane_g1

0xca4f,	// (0x0001be0a) main_video3_pane_g2_ParamLimits

0xca4f,	// (0x0001be0a) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0001ec09) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0001ec09) main_video3_pane_g

0xca6b,	// (0x0001be26) main_video3_pane_t1_ParamLimits

0xca6b,	// (0x0001be26) main_video3_pane_t1

0xca96,	// (0x0001be51) main_video3_pane_t2_ParamLimits

0xca96,	// (0x0001be51) main_video3_pane_t2

0xcac3,	// (0x0001be7e) main_video3_pane_t3_ParamLimits

0xcac3,	// (0x0001be7e) main_video3_pane_t3

0x0002,

0xf853,	// (0x0001ec0e) main_video3_pane_t_ParamLimits

0xf853,	// (0x0001ec0e) main_video3_pane_t

0xcaf0,	// (0x0001beab) cams_zoom_vslider_pane_g1

0xcaf9,	// (0x0001beb4) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0001ec15) cams_zoom_vslider_pane_g

0xcb01,	// (0x0001bebc) small_slider_vertical_pane

0xc35c,	// (0x0001b717) small_slider_vertical_pane_g1

0xc35c,	// (0x0001b717) small_slider_vertical_pane_g2

0xcb09,	// (0x0001bec4) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0001ec1a) small_slider_vertical_pane_g

0x95a6,	// (0x00018961) main_hwr_training_pane

0xcb12,	// (0x0001becd) hwr_training_instruct_pane_ParamLimits

0xcb12,	// (0x0001becd) hwr_training_instruct_pane

0x551a,	// (0x000148d5) hwr_training_navi_pane_ParamLimits

0x551a,	// (0x000148d5) hwr_training_navi_pane

0x5539,	// (0x000148f4) hwr_training_write_pane_ParamLimits

0x5539,	// (0x000148f4) hwr_training_write_pane

0x95a6,	// (0x00018961) bg_frame_shadow_pane

0xcb49,	// (0x0001bf04) hwr_training_write_pane_g1

0xcb51,	// (0x0001bf0c) hwr_training_write_pane_g2

0xcb59,	// (0x0001bf14) hwr_training_write_pane_g3

0xcb61,	// (0x0001bf1c) hwr_training_write_pane_g4

0xcb69,	// (0x0001bf24) hwr_training_write_pane_g5

0xcb71,	// (0x0001bf2c) hwr_training_write_pane_g6

0xcb79,	// (0x0001bf34) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0001ec21) hwr_training_write_pane_g

0xcb81,	// (0x0001bf3c) hwr_training_navi_pane_g1_ParamLimits

0xcb81,	// (0x0001bf3c) hwr_training_navi_pane_g1

0xcb93,	// (0x0001bf4e) hwr_training_navi_pane_g2_ParamLimits

0xcb93,	// (0x0001bf4e) hwr_training_navi_pane_g2

0xcba5,	// (0x0001bf60) hwr_training_navi_pane_g3_ParamLimits

0xcba5,	// (0x0001bf60) hwr_training_navi_pane_g3

0xcbb5,	// (0x0001bf70) hwr_training_navi_pane_g4_ParamLimits

0xcbb5,	// (0x0001bf70) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0001ec30) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0001ec30) hwr_training_navi_pane_g

0xcbc2,	// (0x0001bf7d) hwr_training_navi_pane_t1

0x5581,	// (0x0001493c) list_single_hwr_training_instruct_pane_ParamLimits

0x5581,	// (0x0001493c) list_single_hwr_training_instruct_pane

0xcbd0,	// (0x0001bf8b) list_single_hwr_training_instruct_pane_t1

0xc29c,	// (0x0001b657) bg_frame_shadow_pane_g1

0xcbdf,	// (0x0001bf9a) bg_frame_shadow_pane_g2

0xcbe7,	// (0x0001bfa2) bg_frame_shadow_pane_g3

0xcbef,	// (0x0001bfaa) bg_frame_shadow_pane_g4

0xcbf7,	// (0x0001bfb2) bg_frame_shadow_pane_g5

0xcbff,	// (0x0001bfba) bg_frame_shadow_pane_g6

0xcc07,	// (0x0001bfc2) bg_frame_shadow_pane_g7

0x9e63,	// (0x0001921e) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0001ec3b) bg_frame_shadow_pane_g

0x95a6,	// (0x00018961) main_video_tele_dialer_pane

0x5596,	// (0x00014951) aid_size_cell_video_keypad_ParamLimits

0x5596,	// (0x00014951) aid_size_cell_video_keypad

0x55b0,	// (0x0001496b) grid_video_dialer_keypad_pane_ParamLimits

0x55b0,	// (0x0001496b) grid_video_dialer_keypad_pane

0x55fc,	// (0x000149b7) video_down_pane_cp_ParamLimits

0x55fc,	// (0x000149b7) video_down_pane_cp

0x562c,	// (0x000149e7) cell_video_dialer_keypad_pane_ParamLimits

0x562c,	// (0x000149e7) cell_video_dialer_keypad_pane

0xcc0f,	// (0x0001bfca) bg_button_pane_cp08_ParamLimits

0xcc0f,	// (0x0001bfca) bg_button_pane_cp08

0x5650,	// (0x00014a0b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5650,	// (0x00014a0b) cell_video_dialer_keypad_pane_g1

0x4cdb,	// (0x00014096) mup3_rocker2_pane_ParamLimits

0x4cdb,	// (0x00014096) mup3_rocker2_pane

0xc35c,	// (0x0001b717) mup3_rocker2_pane_g1

0x3768,	// (0x00012b23) main_dialer2_pane

0x95a6,	// (0x00018961) main_mp4_pane

0xcc23,	// (0x0001bfde) main_mp4_pane_g1_ParamLimits

0xcc23,	// (0x0001bfde) main_mp4_pane_g1

0xcc23,	// (0x0001bfde) main_mp4_pane_g2_ParamLimits

0xcc23,	// (0x0001bfde) main_mp4_pane_g2

0x568b,	// (0x00014a46) main_mp4_pane_g3_ParamLimits

0x568b,	// (0x00014a46) main_mp4_pane_g3

0xcc31,	// (0x0001bfec) main_mp4_pane_g4_ParamLimits

0xcc31,	// (0x0001bfec) main_mp4_pane_g4

0xcc59,	// (0x0001c014) main_mp4_pane_g5_ParamLimits

0xcc59,	// (0x0001c014) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0001ec5b) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0001ec5b) main_mp4_pane_g

0xcca9,	// (0x0001c064) main_mp4_pane_t1_ParamLimits

0xcca9,	// (0x0001c064) main_mp4_pane_t1

0xcd05,	// (0x0001c0c0) main_mp4_pane_t2_ParamLimits

0xcd05,	// (0x0001c0c0) main_mp4_pane_t2

0xcd57,	// (0x0001c112) main_mp4_pane_t3_ParamLimits

0xcd57,	// (0x0001c112) main_mp4_pane_t3

0xcd77,	// (0x0001c132) main_mp4_pane_t4_ParamLimits

0xcd77,	// (0x0001c132) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0001ec68) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0001ec68) main_mp4_pane_t

0xcdb7,	// (0x0001c172) mp4_progress_pane_ParamLimits

0xcdb7,	// (0x0001c172) mp4_progress_pane

0xce01,	// (0x0001c1bc) mp4_rocker_pane_ParamLimits

0xce01,	// (0x0001c1bc) mp4_rocker_pane

0xce2b,	// (0x0001c1e6) mp4_progress_pane_t1

0xce44,	// (0x0001c1ff) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0001ec71) mp4_progress_pane_t

0xce5d,	// (0x0001c218) mup_progress_pane_cp04

0xc35c,	// (0x0001b717) mp4_rocker_pane_g1

0x56d5,	// (0x00014a90) aid_cell_size_keypad2_ParamLimits

0x56d5,	// (0x00014a90) aid_cell_size_keypad2

0x56eb,	// (0x00014aa6) dialer2_ne_pane_ParamLimits

0x56eb,	// (0x00014aa6) dialer2_ne_pane

0x5703,	// (0x00014abe) grid_dialer2_keypad_pane_ParamLimits

0x5703,	// (0x00014abe) grid_dialer2_keypad_pane

0xc13b,	// (0x0001b4f6) bg_popup_call_pane_cp07_ParamLimits

0xc13b,	// (0x0001b4f6) bg_popup_call_pane_cp07

0x571f,	// (0x00014ada) dialer2_ne_pane_t1_ParamLimits

0x571f,	// (0x00014ada) dialer2_ne_pane_t1

0x575a,	// (0x00014b15) cell_dialer2_keypad_pane_ParamLimits

0x575a,	// (0x00014b15) cell_dialer2_keypad_pane

0xce7b,	// (0x0001c236) bg_button_pane_pane_cp04_ParamLimits

0xce7b,	// (0x0001c236) bg_button_pane_pane_cp04

0x577e,	// (0x00014b39) cell_dialer2_keypad_pane_g1_ParamLimits

0x577e,	// (0x00014b39) cell_dialer2_keypad_pane_g1

0x1169,	// (0x00010524) aid_placing_vt_set_content_ParamLimits

0x1169,	// (0x00010524) aid_placing_vt_set_content

0x118d,	// (0x00010548) aid_placing_vt_set_title_ParamLimits

0x118d,	// (0x00010548) aid_placing_vt_set_title

0x95a6,	// (0x00018961) main_image3_pane

0x5844,	// (0x00014bff) area_side_right_pane_cp01_ParamLimits

0x5844,	// (0x00014bff) area_side_right_pane_cp01

0xcc23,	// (0x0001bfde) main_image3_pane_g1_ParamLimits

0xcc23,	// (0x0001bfde) main_image3_pane_g1

0x585d,	// (0x00014c18) main_image3_pane_g2_ParamLimits

0x585d,	// (0x00014c18) main_image3_pane_g2

0x5885,	// (0x00014c40) main_image3_pane_g3_ParamLimits

0x5885,	// (0x00014c40) main_image3_pane_g3

0x58af,	// (0x00014c6a) main_image3_pane_g4_ParamLimits

0x58af,	// (0x00014c6a) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0001ec80) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0001ec80) main_image3_pane_g

0x58d9,	// (0x00014c94) main_image3_pane_t1_ParamLimits

0x58d9,	// (0x00014c94) main_image3_pane_t1

0x5931,	// (0x00014cec) main_image3_pane_t2_ParamLimits

0x5931,	// (0x00014cec) main_image3_pane_t2

0x5983,	// (0x00014d3e) main_image3_pane_t3_ParamLimits

0x5983,	// (0x00014d3e) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0001ec89) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0001ec89) main_image3_pane_t

0x9607,	// (0x000189c2) grid_sctrl_middle_pane_cp01_ParamLimits

0x9607,	// (0x000189c2) grid_sctrl_middle_pane_cp01

0x5a0b,	// (0x00014dc6) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a0b,	// (0x00014dc6) cell_sctrl_middle_pane_cp01

0x5a28,	// (0x00014de3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a28,	// (0x00014de3) cell_sctrl_middle_pane_cp01_g1

0x95a6,	// (0x00018961) main_call4_pane

0x5a3d,	// (0x00014df8) aid_size_button_call4_ParamLimits

0x5a3d,	// (0x00014df8) aid_size_button_call4

0x5a70,	// (0x00014e2b) call4_windows_pane_ParamLimits

0x5a70,	// (0x00014e2b) call4_windows_pane

0x5a92,	// (0x00014e4d) grid_call4_button_pane_ParamLimits

0x5a92,	// (0x00014e4d) grid_call4_button_pane

0xcebb,	// (0x0001c276) call4_windows_conf_pane

0x5abd,	// (0x00014e78) popup_call4_audio_first_window_ParamLimits

0x5abd,	// (0x00014e78) popup_call4_audio_first_window

0x5ae9,	// (0x00014ea4) popup_call4_audio_second_window_ParamLimits

0x5ae9,	// (0x00014ea4) popup_call4_audio_second_window

0xcef8,	// (0x0001c2b3) popup_call4_audio_wait_window_ParamLimits

0xcef8,	// (0x0001c2b3) popup_call4_audio_wait_window

0x5aff,	// (0x00014eba) cell_call4_button_pane_ParamLimits

0x5aff,	// (0x00014eba) cell_call4_button_pane

0x5b26,	// (0x00014ee1) bg_button_pane_cp09_ParamLimits

0x5b26,	// (0x00014ee1) bg_button_pane_cp09

0x5b32,	// (0x00014eed) cell_call4_button_pane_g1_ParamLimits

0x5b32,	// (0x00014eed) cell_call4_button_pane_g1

0x5b58,	// (0x00014f13) cell_call4_button_pane_t1_ParamLimits

0x5b58,	// (0x00014f13) cell_call4_button_pane_t1

0xcf40,	// (0x0001c2fb) popup_call4_audio_conf_window_ParamLimits

0xcf40,	// (0x0001c2fb) popup_call4_audio_conf_window

0x4d3d,	// (0x000140f8) mup3_progress_pane_t1_ParamLimits

0x4d5b,	// (0x00014116) mup3_progress_pane_t2_ParamLimits

0xc613,	// (0x0001b9ce) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0001eb62) mup3_progress_pane_t_ParamLimits

0xc630,	// (0x0001b9eb) mup_progress_pane_cp03_ParamLimits

0x535c,	// (0x00014717) mup3_control_keys_pane_g4_copy1

0xcde5,	// (0x0001c1a0) mp4_rocker2_pane_ParamLimits

0xcde5,	// (0x0001c1a0) mp4_rocker2_pane

0xcf5a,	// (0x0001c315) mp4_rocker2_pane_g1

0xcf62,	// (0x0001c31d) mp4_rocker2_pane_g2

0xcf6a,	// (0x0001c325) mp4_rocker2_pane_g3

0xcf72,	// (0x0001c32d) mp4_rocker2_pane_g4

0xcf7a,	// (0x0001c335) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0001ec92) mp4_rocker2_pane_g

0x95a6,	// (0x00018961) main_camera4_pane

0x95a6,	// (0x00018961) main_video4_pane

0x55ca,	// (0x00014985) main_video_tele_dialer_pane_t1_ParamLimits

0x55ca,	// (0x00014985) main_video_tele_dialer_pane_t1

0x55e3,	// (0x0001499e) main_video_tele_dialer_pane_t2_ParamLimits

0x55e3,	// (0x0001499e) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0001ec4c) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0001ec4c) main_video_tele_dialer_pane_t

0x5b96,	// (0x00014f51) cam4_autofocus_pane_ParamLimits

0x5b96,	// (0x00014f51) cam4_autofocus_pane

0x5bac,	// (0x00014f67) cam4_image_uncrop_pane_ParamLimits

0x5bac,	// (0x00014f67) cam4_image_uncrop_pane

0x5bc5,	// (0x00014f80) cam4_indicators_pane_ParamLimits

0x5bc5,	// (0x00014f80) cam4_indicators_pane

0x5bf4,	// (0x00014faf) main_camera4_pane_g1_ParamLimits

0x5bf4,	// (0x00014faf) main_camera4_pane_g1

0x5c06,	// (0x00014fc1) main_camera4_pane_g2_ParamLimits

0x5c06,	// (0x00014fc1) main_camera4_pane_g2

0x5c19,	// (0x00014fd4) main_camera4_pane_g3_ParamLimits

0x5c19,	// (0x00014fd4) main_camera4_pane_g3

0x5c2c,	// (0x00014fe7) main_camera4_pane_g4_ParamLimits

0x5c2c,	// (0x00014fe7) main_camera4_pane_g4

0x5c3f,	// (0x00014ffa) main_camera4_pane_g5_ParamLimits

0x5c3f,	// (0x00014ffa) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0001ec9d) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0001ec9d) main_camera4_pane_g

0x5c63,	// (0x0001501e) main_camera4_pane_t1_ParamLimits

0x5c63,	// (0x0001501e) main_camera4_pane_t1

0xc58c,	// (0x0001b947) bg_tb_trans_pane_cp06

0xcfa8,	// (0x0001c363) cam4_indicators_pane_g1

0xcfb9,	// (0x0001c374) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0001ecb8) cam4_indicators_pane_g

0xcfd1,	// (0x0001c38c) cam4_indicators_pane_t1

0x5cc7,	// (0x00015082) main_video4_pane_g1_ParamLimits

0x5cc7,	// (0x00015082) main_video4_pane_g1

0x5cd6,	// (0x00015091) main_video4_pane_g2_ParamLimits

0x5cd6,	// (0x00015091) main_video4_pane_g2

0x5ce5,	// (0x000150a0) main_video4_pane_g3_ParamLimits

0x5ce5,	// (0x000150a0) main_video4_pane_g3

0x5cf4,	// (0x000150af) main_video4_pane_g4_ParamLimits

0x5cf4,	// (0x000150af) main_video4_pane_g4

0x0004,

0xf904,	// (0x0001ecbf) main_video4_pane_g_ParamLimits

0xf904,	// (0x0001ecbf) main_video4_pane_g

0x5d12,	// (0x000150cd) vid4_indicators_pane_ParamLimits

0x5d12,	// (0x000150cd) vid4_indicators_pane

0x5d40,	// (0x000150fb) video4_image_uncrop_cif_pane_ParamLimits

0x5d40,	// (0x000150fb) video4_image_uncrop_cif_pane

0x5d5a,	// (0x00015115) video4_image_uncrop_nhd_pane_ParamLimits

0x5d5a,	// (0x00015115) video4_image_uncrop_nhd_pane

0x5bac,	// (0x00014f67) video4_image_uncrop_vga_pane_ParamLimits

0x5bac,	// (0x00014f67) video4_image_uncrop_vga_pane

0x9607,	// (0x000189c2) bg_tb_trans_pane_cp07

0xcfff,	// (0x0001c3ba) vid4_indicators_pane_g1

0xd015,	// (0x0001c3d0) vid4_indicators_pane_g2

0xd029,	// (0x0001c3e4) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0001ecca) vid4_indicators_pane_g

0xd05a,	// (0x0001c415) vid4_indicators_pane_t1

0x5d70,	// (0x0001512b) cam4_autofocus_pane_g1

0x5d78,	// (0x00015133) cam4_autofocus_pane_g2

0x5d80,	// (0x0001513b) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0001ecd5) cam4_autofocus_pane_g

0x5d88,	// (0x00015143) cam4_autofocus_pane_g3_copy1

0x5610,	// (0x000149cb) video_down_pane_cp_t1

0x561e,	// (0x000149d9) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0001ec51) video_down_pane_cp_t

0x9607,	// (0x000189c2) popup_vitu2_window_ParamLimits

0x9607,	// (0x000189c2) popup_vitu2_window

0x5d90,	// (0x0001514b) aid_size_cell2_itu2_ParamLimits

0x5d90,	// (0x0001514b) aid_size_cell2_itu2

0x5db6,	// (0x00015171) aid_size_cell_itu2_ParamLimits

0x5db6,	// (0x00015171) aid_size_cell_itu2

0x5e14,	// (0x000151cf) bg_popup_window_pane_cp09_ParamLimits

0x5e14,	// (0x000151cf) bg_popup_window_pane_cp09

0x5e22,	// (0x000151dd) field_vitu2_entry_pane_ParamLimits

0x5e22,	// (0x000151dd) field_vitu2_entry_pane

0x5e4a,	// (0x00015205) grid_vitu2_function_pane_ParamLimits

0x5e4a,	// (0x00015205) grid_vitu2_function_pane

0x5e9b,	// (0x00015256) grid_vitu2_itu_pane_ParamLimits

0x5e9b,	// (0x00015256) grid_vitu2_itu_pane

0x5f26,	// (0x000152e1) cell_vitu2_itu_pane_ParamLimits

0x5f26,	// (0x000152e1) cell_vitu2_itu_pane

0x5f4c,	// (0x00015307) cell_vitu2_function_pane_ParamLimits

0x5f4c,	// (0x00015307) cell_vitu2_function_pane

0xd071,	// (0x0001c42c) bg_popup_call_pane_cp08_ParamLimits

0xd071,	// (0x0001c42c) bg_popup_call_pane_cp08

0xd08a,	// (0x0001c445) field_vitu2_entry_pane_g1

0xd096,	// (0x0001c451) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0001ecdc) field_vitu2_entry_pane_g

0x5f90,	// (0x0001534b) field_vitu2_entry_pane_t1_ParamLimits

0x5f90,	// (0x0001534b) field_vitu2_entry_pane_t1

0xd0b0,	// (0x0001c46b) field_vitu2_entry_pane_t2_ParamLimits

0xd0b0,	// (0x0001c46b) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0001ece3) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0001ece3) field_vitu2_entry_pane_t

0x5fbf,	// (0x0001537a) bg_button_pane_cp010_ParamLimits

0x5fbf,	// (0x0001537a) bg_button_pane_cp010

0x5fcd,	// (0x00015388) cell_vitu2_itu_pane_g1

0x5feb,	// (0x000153a6) cell_vitu2_itu_pane_t1_ParamLimits

0x5feb,	// (0x000153a6) cell_vitu2_itu_pane_t1

0x6051,	// (0x0001540c) cell_vitu2_itu_pane_t2_ParamLimits

0x6051,	// (0x0001540c) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0001eced) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0001eced) cell_vitu2_itu_pane_t

0x9607,	// (0x000189c2) bg_button_pane_cp011

0x612d,	// (0x000154e8) cell_vitu2_function_pane_g1

0x95a6,	// (0x00018961) main_myfav_hc_pane

0x59d3,	// (0x00014d8e) popup_image3_note_pane_ParamLimits

0x59d3,	// (0x00014d8e) popup_image3_note_pane

0x59ef,	// (0x00014daa) popup_image3_tool_bar_pane_ParamLimits

0x59ef,	// (0x00014daa) popup_image3_tool_bar_pane

0x60d5,	// (0x00015490) cell_vitu2_itu_pane_t3_ParamLimits

0x60d5,	// (0x00015490) cell_vitu2_itu_pane_t3

0x95a6,	// (0x00018961) bg_popup_trans_pane

0xd0d5,	// (0x0001c490) grid_image3_tool_bar_pane

0xd0df,	// (0x0001c49a) bg_popup_trans_pane_g1

0xa221,	// (0x000195dc) bg_popup_trans_pane_g2

0xd0e7,	// (0x0001c4a2) bg_popup_trans_pane_g3

0xd0ef,	// (0x0001c4aa) bg_popup_trans_pane_g4

0xd0f7,	// (0x0001c4b2) bg_popup_trans_pane_g5

0xd0ff,	// (0x0001c4ba) bg_popup_trans_pane_g6

0xd107,	// (0x0001c4c2) bg_popup_trans_pane_g7

0xd10f,	// (0x0001c4ca) bg_popup_trans_pane_g8

0xa201,	// (0x000195bc) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0001ecf4) bg_popup_trans_pane_g

0xd117,	// (0x0001c4d2) cell_image3_tool_bar_pane_ParamLimits

0xd117,	// (0x0001c4d2) cell_image3_tool_bar_pane

0xc35c,	// (0x0001b717) cell_image3_tool_bar_pane_g1

0x95a6,	// (0x00018961) bg_popup_trans_pane_cp1

0xd12d,	// (0x0001c4e8) popup_image3_note_pane_t1

0xd13b,	// (0x0001c4f6) popup_image3_note_pane_t2

0xd149,	// (0x0001c504) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0001ed07) popup_image3_note_pane_t

0xd159,	// (0x0001c514) popup_image3_note_pane_t3_copy1

0x6141,	// (0x000154fc) bg_myfav_hc_instruction_pane_ParamLimits

0x6141,	// (0x000154fc) bg_myfav_hc_instruction_pane

0x6159,	// (0x00015514) cell_myfav_contact_pane_ParamLimits

0x6159,	// (0x00015514) cell_myfav_contact_pane

0x6175,	// (0x00015530) cell_myfav_contact_pane_cp1_ParamLimits

0x6175,	// (0x00015530) cell_myfav_contact_pane_cp1

0x618d,	// (0x00015548) cell_myfav_contact_pane_cp2_ParamLimits

0x618d,	// (0x00015548) cell_myfav_contact_pane_cp2

0x61a5,	// (0x00015560) cell_myfav_contact_pane_cp3_ParamLimits

0x61a5,	// (0x00015560) cell_myfav_contact_pane_cp3

0x61bc,	// (0x00015577) cell_myfav_contact_pane_cp4_ParamLimits

0x61bc,	// (0x00015577) cell_myfav_contact_pane_cp4

0x61d4,	// (0x0001558f) cell_myfav_contact_pane_cp5_ParamLimits

0x61d4,	// (0x0001558f) cell_myfav_contact_pane_cp5

0x61e8,	// (0x000155a3) cell_myfav_contact_pane_cp6_ParamLimits

0x61e8,	// (0x000155a3) cell_myfav_contact_pane_cp6

0x61fe,	// (0x000155b9) cell_myfav_contact_pane_cp7_ParamLimits

0x61fe,	// (0x000155b9) cell_myfav_contact_pane_cp7

0xd167,	// (0x0001c522) listscroll_gen_pane_cp05

0x6216,	// (0x000155d1) main_myfav_hc_pane_g1_ParamLimits

0x6216,	// (0x000155d1) main_myfav_hc_pane_g1

0x6230,	// (0x000155eb) main_myfav_hc_pane_g2_ParamLimits

0x6230,	// (0x000155eb) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0001ed0e) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0001ed0e) main_myfav_hc_pane_g

0x6264,	// (0x0001561f) main_myfav_hc_pane_t1_ParamLimits

0x6264,	// (0x0001561f) main_myfav_hc_pane_t1

0xd170,	// (0x0001c52b) main_myfav_hc_pane_t2_ParamLimits

0xd170,	// (0x0001c52b) main_myfav_hc_pane_t2

0xd182,	// (0x0001c53d) main_myfav_hc_pane_t3_ParamLimits

0xd182,	// (0x0001c53d) main_myfav_hc_pane_t3

0x627b,	// (0x00015636) main_myfav_hc_pane_t4_ParamLimits

0x627b,	// (0x00015636) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0001ed15) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0001ed15) main_myfav_hc_pane_t

0xc35c,	// (0x0001b717) bg_myfav_hc_instruction_pane_g1

0xd194,	// (0x0001c54f) cell_myfav_contact_pane_g1_ParamLimits

0xd194,	// (0x0001c54f) cell_myfav_contact_pane_g1

0xd194,	// (0x0001c54f) cell_myfav_contact_pane_g2_ParamLimits

0xd194,	// (0x0001c54f) cell_myfav_contact_pane_g2

0xd1a0,	// (0x0001c55b) cell_myfav_contact_pane_g3_ParamLimits

0xd1a0,	// (0x0001c55b) cell_myfav_contact_pane_g3

0xc5fd,	// (0x0001b9b8) cell_myfav_contact_pane_g4_ParamLimits

0xc5fd,	// (0x0001b9b8) cell_myfav_contact_pane_g4

0xd1ad,	// (0x0001c568) cell_myfav_contact_pane_g5_ParamLimits

0xd1ad,	// (0x0001c568) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0001ed20) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0001ed20) cell_myfav_contact_pane_g

0x624a,	// (0x00015605) main_myfav_hc_pane_g3_ParamLimits

0x624a,	// (0x00015605) main_myfav_hc_pane_g3

0xff2d,	// (0x0000f2e8) popup_adpt_find_window

0x62a5,	// (0x00015660) afind_page_pane_ParamLimits

0x62a5,	// (0x00015660) afind_page_pane

0x62ba,	// (0x00015675) aid_size_cell_afind_ParamLimits

0x62ba,	// (0x00015675) aid_size_cell_afind

0x62d8,	// (0x00015693) bg_popup_sub_pane_cp09_ParamLimits

0x62d8,	// (0x00015693) bg_popup_sub_pane_cp09

0x62e5,	// (0x000156a0) find_pane_cp01_ParamLimits

0x62e5,	// (0x000156a0) find_pane_cp01

0xd1b9,	// (0x0001c574) grid_afind_control_pane_ParamLimits

0xd1b9,	// (0x0001c574) grid_afind_control_pane

0x62f2,	// (0x000156ad) grid_afind_pane_ParamLimits

0x62f2,	// (0x000156ad) grid_afind_pane

0x6314,	// (0x000156cf) cell_afind_pane_ParamLimits

0x6314,	// (0x000156cf) cell_afind_pane

0xc35c,	// (0x0001b717) afind_page_pane_g1

0x637b,	// (0x00015736) afind_page_pane_g2

0x6384,	// (0x0001573f) afind_page_pane_g3

0x0002,

0xf970,	// (0x0001ed2b) afind_page_pane_g

0x638d,	// (0x00015748) afind_page_pane_t1

0xd1cd,	// (0x0001c588) cell_afind_grid_control_pane_ParamLimits

0xd1cd,	// (0x0001c588) cell_afind_grid_control_pane

0xce7b,	// (0x0001c236) bg_button_pane_cp69_ParamLimits

0xce7b,	// (0x0001c236) bg_button_pane_cp69

0x63ad,	// (0x00015768) cell_afind_pane_g1_ParamLimits

0x63ad,	// (0x00015768) cell_afind_pane_g1

0x63ba,	// (0x00015775) cell_afind_pane_t1_ParamLimits

0x63ba,	// (0x00015775) cell_afind_pane_t1

0xa016,	// (0x000193d1) bg_button_pane_cp72

0xd1dc,	// (0x0001c597) cell_afind_grid_control_pane_g1

0x320b,	// (0x000125c6) aid_image_placing_area_ParamLimits

0x320b,	// (0x000125c6) aid_image_placing_area

0xc910,	// (0x0001bccb) field_vitu_entry_pane_g1_ParamLimits

0xc910,	// (0x0001bccb) field_vitu_entry_pane_g1

0xc91c,	// (0x0001bcd7) field_vitu_entry_pane_g2_ParamLimits

0xc91c,	// (0x0001bcd7) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0001ebdc) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0001ebdc) field_vitu_entry_pane_g

0x542b,	// (0x000147e6) cell_vitu_itu_pane_g1_ParamLimits

0x546d,	// (0x00014828) cell_vitu_itu_pane_t3_ParamLimits

0x546d,	// (0x00014828) cell_vitu_itu_pane_t3

0xce2b,	// (0x0001c1e6) mp4_progress_pane_t1_ParamLimits

0xce44,	// (0x0001c1ff) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0001ec71) mp4_progress_pane_t_ParamLimits

0xce5d,	// (0x0001c218) mup_progress_pane_cp04_ParamLimits

0x628f,	// (0x0001564a) main_myfav_hc_pane_t5_ParamLimits

0x628f,	// (0x0001564a) main_myfav_hc_pane_t5

0x95cc,	// (0x00018987) aid_zoom_text_primary

0xff2d,	// (0x0000f2e8) popup_adpt_find_window_ParamLimits

0x9607,	// (0x000189c2) main_cam_set_pane

0x5bde,	// (0x00014f99) cam4_zoom_pane_ParamLimits

0x5bde,	// (0x00014f99) cam4_zoom_pane

0x63cc,	// (0x00015787) main_cam_set_pane_g1_ParamLimits

0x63cc,	// (0x00015787) main_cam_set_pane_g1

0x63da,	// (0x00015795) main_cam_set_pane_g2_ParamLimits

0x63da,	// (0x00015795) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0001ed32) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0001ed32) main_cam_set_pane_g

0x63fb,	// (0x000157b6) main_cam_set_pane_t1_ParamLimits

0x63fb,	// (0x000157b6) main_cam_set_pane_t1

0x6416,	// (0x000157d1) main_cset_listscroll_pane_ParamLimits

0x6416,	// (0x000157d1) main_cset_listscroll_pane

0x643a,	// (0x000157f5) main_cset_slider_pane_ParamLimits

0x643a,	// (0x000157f5) main_cset_slider_pane

0xd1ed,	// (0x0001c5a8) main_cset_list_pane_ParamLimits

0xd1ed,	// (0x0001c5a8) main_cset_list_pane

0xd1fd,	// (0x0001c5b8) scroll_pane_cp028

0x6464,	// (0x0001581f) aid_area_touch_slider

0x6480,	// (0x0001583b) cset_slider_pane

0x64aa,	// (0x00015865) main_cset_slider_pane_g1

0x64bf,	// (0x0001587a) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0001ed37) main_cset_slider_pane_g

0xd236,	// (0x0001c5f1) main_cset_slider_pane_t1

0x6581,	// (0x0001593c) main_cset_slider_pane_t2

0x659b,	// (0x00015956) main_cset_slider_pane_t3

0x65b5,	// (0x00015970) main_cset_slider_pane_t4

0x65cf,	// (0x0001598a) main_cset_slider_pane_t5

0x65ed,	// (0x000159a8) main_cset_slider_pane_t6

0x6602,	// (0x000159bd) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0001ed5c) main_cset_slider_pane_t

0x670e,	// (0x00015ac9) cset_list_set_pane_ParamLimits

0x670e,	// (0x00015ac9) cset_list_set_pane

0x6722,	// (0x00015add) aid_position_infowindow_above

0x672a,	// (0x00015ae5) aid_position_infowindow_below

0x6732,	// (0x00015aed) cset_list_set_pane_g1_ParamLimits

0x6732,	// (0x00015aed) cset_list_set_pane_g1

0x673e,	// (0x00015af9) cset_list_set_pane_g3_ParamLimits

0x673e,	// (0x00015af9) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0001ed7b) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0001ed7b) cset_list_set_pane_g

0x674d,	// (0x00015b08) cset_list_set_pane_t1_ParamLimits

0x674d,	// (0x00015b08) cset_list_set_pane_t1

0x9607,	// (0x000189c2) list_highlight_pane_cp021_ParamLimits

0x9607,	// (0x000189c2) list_highlight_pane_cp021

0xaafc,	// (0x00019eb7) cset_slider_pane_g1

0xab0e,	// (0x00019ec9) cset_slider_pane_g2

0xab05,	// (0x00019ec0) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0001ed80) cset_slider_pane_g

0xd30d,	// (0x0001c6c8) aid_area_touch_cam4_zoom

0xd315,	// (0x0001c6d0) cam4_zoom_cont_pane

0xd31d,	// (0x0001c6d8) cam4_zoom_pane_g1

0xd325,	// (0x0001c6e0) cam4_zoom_pane_g2

0x6762,	// (0x00015b1d) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0001ed87) cam4_zoom_pane_g

0xd32d,	// (0x0001c6e8) cam4_zoom_cont_pane_g1

0xd336,	// (0x0001c6f1) cam4_zoom_cont_pane_g2

0xd33f,	// (0x0001c6fa) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0001ed8e) cam4_zoom_cont_pane_g

0x5a5b,	// (0x00014e16) call4_image_pane_ParamLimits

0x5a5b,	// (0x00014e16) call4_image_pane

0xcebb,	// (0x0001c276) call4_windows_conf_pane_ParamLimits

0xced6,	// (0x0001c291) popup_call4_audio_in_window_ParamLimits

0xced6,	// (0x0001c291) popup_call4_audio_in_window

0x95a6,	// (0x00018961) bg_popup_call2_act_pane_cp02

0xcf38,	// (0x0001c2f3) call4_list_conf_pane

0xc35c,	// (0x0001b717) call4_image_pane_g1

0xc35c,	// (0x0001b717) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0001eaa2) call4_image_pane_g

0xd348,	// (0x0001c703) list_single_graphic_popup_conf4_pane_ParamLimits

0xd348,	// (0x0001c703) list_single_graphic_popup_conf4_pane

0x95a6,	// (0x00018961) list_highlight_pane_cp022

0xd35d,	// (0x0001c718) list_single_graphic_popup_conf4_pane_g1

0xa7d6,	// (0x00019b91) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0001ed95) list_single_graphic_popup_conf4_pane_g

0xd365,	// (0x0001c720) list_single_graphic_popup_conf4_pane_t1

0x12a4,	// (0x0001065f) popup_vtel_slider_window_ParamLimits

0x12a4,	// (0x0001065f) popup_vtel_slider_window

0xce69,	// (0x0001c224) dialer2_ne_pane_t2_ParamLimits

0xce69,	// (0x0001c224) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0001ec76) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0001ec76) dialer2_ne_pane_t

0xc13b,	// (0x0001b4f6) bg_popup_sub_pane_cp010_ParamLimits

0xc13b,	// (0x0001b4f6) bg_popup_sub_pane_cp010

0x676a,	// (0x00015b25) popup_vtel_slider_window_g1_ParamLimits

0x676a,	// (0x00015b25) popup_vtel_slider_window_g1

0x677d,	// (0x00015b38) popup_vtel_slider_window_g2_ParamLimits

0x677d,	// (0x00015b38) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0001ed9a) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0001ed9a) popup_vtel_slider_window_g

0x67d3,	// (0x00015b8e) vtel_slider_pane_ParamLimits

0x67d3,	// (0x00015b8e) vtel_slider_pane

0x67f5,	// (0x00015bb0) vtel_slider_pane_g1_ParamLimits

0x67f5,	// (0x00015bb0) vtel_slider_pane_g1

0x6809,	// (0x00015bc4) vtel_slider_pane_g2_ParamLimits

0x6809,	// (0x00015bc4) vtel_slider_pane_g2

0x6821,	// (0x00015bdc) vtel_slider_pane_g3_ParamLimits

0x6821,	// (0x00015bdc) vtel_slider_pane_g3

0x67f5,	// (0x00015bb0) vtel_slider_pane_g4_ParamLimits

0x67f5,	// (0x00015bb0) vtel_slider_pane_g4

0x6837,	// (0x00015bf2) vtel_slider_pane_g5_ParamLimits

0x6837,	// (0x00015bf2) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0001eda3) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0001eda3) vtel_slider_pane_g

0x95a6,	// (0x00018961) main_gallery2_pane

0x5de2,	// (0x0001519d) aid_size_row_itut2_dropdow_list_ParamLimits

0x5de2,	// (0x0001519d) aid_size_row_itut2_dropdow_list

0x5e72,	// (0x0001522d) grid_vitu2_function_top_pane_ParamLimits

0x5e72,	// (0x0001522d) grid_vitu2_function_top_pane

0x5ed1,	// (0x0001528c) popup_vitu2_dropdown_list_window_ParamLimits

0x5ed1,	// (0x0001528c) popup_vitu2_dropdown_list_window

0x5efa,	// (0x000152b5) popup_vitu2_match_list_window

0x684d,	// (0x00015c08) cell_vitu2_function_top_pane_ParamLimits

0x684d,	// (0x00015c08) cell_vitu2_function_top_pane

0x686d,	// (0x00015c28) cell_vitu2_function_top_pane_cp01_ParamLimits

0x686d,	// (0x00015c28) cell_vitu2_function_top_pane_cp01

0x688b,	// (0x00015c46) cell_vitu2_function_top_wide_pane_ParamLimits

0x688b,	// (0x00015c46) cell_vitu2_function_top_wide_pane

0x9607,	// (0x000189c2) bg_button_pane_cp012

0x68a9,	// (0x00015c64) cell_vitu2_function_top_pane_g1

0xd389,	// (0x0001c744) bg_button_pane_cp013_ParamLimits

0xd389,	// (0x0001c744) bg_button_pane_cp013

0x68bd,	// (0x00015c78) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x68bd,	// (0x00015c78) cell_vitu2_function_top_wide_pane_g1

0x9607,	// (0x000189c2) bg_popup_sub_pane_cp20

0x68d5,	// (0x00015c90) list_vitu2_match_list_pane

0xd0df,	// (0x0001c49a) bg_popup_sub_pane_cp20_g1

0xd0e7,	// (0x0001c4a2) bg_popup_sub_pane_cp20_g2

0xa221,	// (0x000195dc) bg_popup_sub_pane_cp20_g3

0xd0ef,	// (0x0001c4aa) bg_popup_sub_pane_cp20_g4

0xa201,	// (0x000195bc) bg_popup_sub_pane_cp20_g5

0xd3a5,	// (0x0001c760) bg_popup_sub_pane_cp20_g6

0xd0ff,	// (0x0001c4ba) bg_popup_sub_pane_cp20_g7

0xd107,	// (0x0001c4c2) bg_popup_sub_pane_cp20_g8

0xd10f,	// (0x0001c4ca) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0001edae) bg_popup_sub_pane_cp20_g

0xd3ad,	// (0x0001c768) list_vitu2_match_list_item_pane_ParamLimits

0xd3ad,	// (0x0001c768) list_vitu2_match_list_item_pane

0xd3bf,	// (0x0001c77a) list_vitu2_match_list_item_pane_t1

0x95a6,	// (0x00018961) bg_popup_sub_pane_cp21

0xa690,	// (0x00019a4b) grid_vitu2_dropdown_list_pane

0x6931,	// (0x00015cec) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6931,	// (0x00015cec) cell_vitu2_dropdown_list_char_pane

0x6954,	// (0x00015d0f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6954,	// (0x00015d0f) cell_vitu2_dropdown_list_ctrl_pane

0xd3d9,	// (0x0001c794) cell_vitu2_dropdown_list_char_pane_g1

0xd3e2,	// (0x0001c79d) cell_vitu2_dropdown_list_char_pane_g2

0xd3eb,	// (0x0001c7a6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0001edcb) cell_vitu2_dropdown_list_char_pane_g

0x6982,	// (0x00015d3d) cell_vitu2_dropdown_list_char_pane_t1

0x6990,	// (0x00015d4b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6990,	// (0x00015d4b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x69a0,	// (0x00015d5b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x69a0,	// (0x00015d5b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x69b1,	// (0x00015d6c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x69b1,	// (0x00015d6c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69c1,	// (0x00015d7c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69c1,	// (0x00015d7c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc58c,	// (0x0001b947) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc58c,	// (0x0001b947) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0001edd2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0001edd2) cell_vitu2_dropdown_list_ctrl_pane_g

0x69dd,	// (0x00015d98) aid_size_cell_gallery2_ParamLimits

0x69dd,	// (0x00015d98) aid_size_cell_gallery2

0x69f3,	// (0x00015dae) grid_gallery2_pane_ParamLimits

0x69f3,	// (0x00015dae) grid_gallery2_pane

0x6a07,	// (0x00015dc2) scroll_pane_cp029_ParamLimits

0x6a07,	// (0x00015dc2) scroll_pane_cp029

0x6a13,	// (0x00015dce) cell_gallery2_pane_ParamLimits

0x6a13,	// (0x00015dce) cell_gallery2_pane

0xd3f4,	// (0x0001c7af) cell_gallery2_pane_g2

0x6a4c,	// (0x00015e07) cell_gallery2_pane_g3

0xd3fe,	// (0x0001c7b9) cell_gallery2_pane_g4

0xd406,	// (0x0001c7c1) cell_gallery2_pane_g5

0xa9a4,	// (0x00019d5f) grid_highlight_pane_cp10

0x5efa,	// (0x000152b5) popup_vitu2_match_list_window_ParamLimits

0x5f11,	// (0x000152cc) popup_vitu2_query_window_ParamLimits

0x5f11,	// (0x000152cc) popup_vitu2_query_window

0x95a6,	// (0x00018961) bg_vitu2_candi_button_pane

0xd3d9,	// (0x0001c794) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3e2,	// (0x0001c79d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3eb,	// (0x0001c7a6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a54,	// (0x00015e0f) bg_button_pane_cp015

0x6a68,	// (0x00015e23) bg_button_pane_cp016

0x6a7b,	// (0x00015e36) bg_button_pane_cp017

0xbe4f,	// (0x0001b20a) bg_popup_sub_pane_cp22

0xd40e,	// (0x0001c7c9) popup_vitu2_query_window_g1

0x6ac0,	// (0x00015e7b) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0001eddd) popup_vitu2_query_window_g

0x6adf,	// (0x00015e9a) popup_vitu2_query_window_t1_ParamLimits

0x6adf,	// (0x00015e9a) popup_vitu2_query_window_t1

0x6b14,	// (0x00015ecf) popup_vitu2_query_window_t2_ParamLimits

0x6b14,	// (0x00015ecf) popup_vitu2_query_window_t2

0x6b26,	// (0x00015ee1) popup_vitu2_query_window_t3_ParamLimits

0x6b26,	// (0x00015ee1) popup_vitu2_query_window_t3

0x6b4e,	// (0x00015f09) popup_vitu2_query_window_t4_ParamLimits

0x6b4e,	// (0x00015f09) popup_vitu2_query_window_t4

0x6b6f,	// (0x00015f2a) popup_vitu2_query_window_t5_ParamLimits

0x6b6f,	// (0x00015f2a) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0001ede4) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0001ede4) popup_vitu2_query_window_t

0xd1e5,	// (0x0001c5a0) main_cset_text_pane

0x6464,	// (0x0001581f) aid_area_touch_slider_ParamLimits

0x6480,	// (0x0001583b) cset_slider_pane_ParamLimits

0x64aa,	// (0x00015865) main_cset_slider_pane_g1_ParamLimits

0x64bf,	// (0x0001587a) main_cset_slider_pane_g2_ParamLimits

0xd206,	// (0x0001c5c1) main_cset_slider_pane_g3_ParamLimits

0xd206,	// (0x0001c5c1) main_cset_slider_pane_g3

0x64d4,	// (0x0001588f) main_cset_slider_pane_g4_ParamLimits

0x64d4,	// (0x0001588f) main_cset_slider_pane_g4

0x64e3,	// (0x0001589e) main_cset_slider_pane_g5_ParamLimits

0x64e3,	// (0x0001589e) main_cset_slider_pane_g5

0x64f1,	// (0x000158ac) main_cset_slider_pane_g6_ParamLimits

0x64f1,	// (0x000158ac) main_cset_slider_pane_g6

0xf97c,	// (0x0001ed37) main_cset_slider_pane_g_ParamLimits

0xd236,	// (0x0001c5f1) main_cset_slider_pane_t1_ParamLimits

0x6581,	// (0x0001593c) main_cset_slider_pane_t2_ParamLimits

0x659b,	// (0x00015956) main_cset_slider_pane_t3_ParamLimits

0x65b5,	// (0x00015970) main_cset_slider_pane_t4_ParamLimits

0x65cf,	// (0x0001598a) main_cset_slider_pane_t5_ParamLimits

0x65ed,	// (0x000159a8) main_cset_slider_pane_t6_ParamLimits

0x6602,	// (0x000159bd) main_cset_slider_pane_t7_ParamLimits

0x6630,	// (0x000159eb) main_cset_slider_pane_t8_ParamLimits

0x6630,	// (0x000159eb) main_cset_slider_pane_t8

0x6658,	// (0x00015a13) main_cset_slider_pane_t9_ParamLimits

0x6658,	// (0x00015a13) main_cset_slider_pane_t9

0x6680,	// (0x00015a3b) main_cset_slider_pane_t10_ParamLimits

0x6680,	// (0x00015a3b) main_cset_slider_pane_t10

0x66a8,	// (0x00015a63) main_cset_slider_pane_t11_ParamLimits

0x66a8,	// (0x00015a63) main_cset_slider_pane_t11

0x66d2,	// (0x00015a8d) main_cset_slider_pane_t12_ParamLimits

0x66d2,	// (0x00015a8d) main_cset_slider_pane_t12

0x66ef,	// (0x00015aaa) main_cset_slider_pane_t13_ParamLimits

0x66ef,	// (0x00015aaa) main_cset_slider_pane_t13

0xf9a1,	// (0x0001ed5c) main_cset_slider_pane_t_ParamLimits

0x95a6,	// (0x00018961) bg_popup_sub_pane_cp011

0xd41a,	// (0x0001c7d5) main_cset_text_pane_g1

0xd422,	// (0x0001c7dd) main_cset_text_pane_t1

0xd430,	// (0x0001c7eb) main_cset_text_pane_t2

0xd43e,	// (0x0001c7f9) main_cset_text_pane_t3

0xd44c,	// (0x0001c807) main_cset_text_pane_t4

0xd45a,	// (0x0001c815) main_cset_text_pane_t5

0xd468,	// (0x0001c823) main_cset_text_pane_t6

0xd476,	// (0x0001c831) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0001edf3) main_cset_text_pane_t

0x95a6,	// (0x00018961) main_cam4_burst_pane

0x95a6,	// (0x00018961) main_cam5_pane

0x639b,	// (0x00015756) bg_button_pane_cp019

0x63a4,	// (0x0001575f) bg_button_pane_cp020

0xd212,	// (0x0001c5cd) main_cset_slider_pane_g7_ParamLimits

0xd212,	// (0x0001c5cd) main_cset_slider_pane_g7

0xd21e,	// (0x0001c5d9) main_cset_slider_pane_g8_ParamLimits

0xd21e,	// (0x0001c5d9) main_cset_slider_pane_g8

0x6505,	// (0x000158c0) main_cset_slider_pane_g9_ParamLimits

0x6505,	// (0x000158c0) main_cset_slider_pane_g9

0x6511,	// (0x000158cc) main_cset_slider_pane_g10_ParamLimits

0x6511,	// (0x000158cc) main_cset_slider_pane_g10

0x651d,	// (0x000158d8) main_cset_slider_pane_g11_ParamLimits

0x651d,	// (0x000158d8) main_cset_slider_pane_g11

0x6529,	// (0x000158e4) main_cset_slider_pane_g12_ParamLimits

0x6529,	// (0x000158e4) main_cset_slider_pane_g12

0x6535,	// (0x000158f0) main_cset_slider_pane_g13_ParamLimits

0x6535,	// (0x000158f0) main_cset_slider_pane_g13

0x6541,	// (0x000158fc) main_cset_slider_pane_g14_ParamLimits

0x6541,	// (0x000158fc) main_cset_slider_pane_g14

0x654d,	// (0x00015908) main_cset_slider_pane_g15_ParamLimits

0x654d,	// (0x00015908) main_cset_slider_pane_g15

0xd29b,	// (0x0001c656) main_cset_slider_pane_t14_ParamLimits

0xd29b,	// (0x0001c656) main_cset_slider_pane_t14

0xd2d4,	// (0x0001c68f) main_cset_slider_pane_t15_ParamLimits

0xd2d4,	// (0x0001c68f) main_cset_slider_pane_t15

0x6be6,	// (0x00015fa1) aid_cam4_burst_size_cell_ParamLimits

0x6be6,	// (0x00015fa1) aid_cam4_burst_size_cell

0x6c06,	// (0x00015fc1) grid_cam4_burst_pane_ParamLimits

0x6c06,	// (0x00015fc1) grid_cam4_burst_pane

0x6c40,	// (0x00015ffb) linegrid_cam4_burst_pane_ParamLimits

0x6c40,	// (0x00015ffb) linegrid_cam4_burst_pane

0xd484,	// (0x0001c83f) scroll_pane_cp30_ParamLimits

0xd484,	// (0x0001c83f) scroll_pane_cp30

0x6c62,	// (0x0001601d) cell_cam4_burst_pane_ParamLimits

0x6c62,	// (0x0001601d) cell_cam4_burst_pane

0xd490,	// (0x0001c84b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd490,	// (0x0001c84b) linegrid_cam4_burst_pane_g1

0x6cb7,	// (0x00016072) linegrid_cam4_burst_pane_g2_ParamLimits

0x6cb7,	// (0x00016072) linegrid_cam4_burst_pane_g2

0xd49d,	// (0x0001c858) linegrid_cam4_burst_pane_g3_ParamLimits

0xd49d,	// (0x0001c858) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0001ee02) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0001ee02) linegrid_cam4_burst_pane_g

0x6cc8,	// (0x00016083) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6cc8,	// (0x00016083) linegrid_cam4_burst_pane_g3_copy1

0xd4aa,	// (0x0001c865) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4aa,	// (0x0001c865) linegrid_cam4_burst_pane_g4

0x6ce6,	// (0x000160a1) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ce6,	// (0x000160a1) linegrid_cam4_burst_pane_g5

0x6cf7,	// (0x000160b2) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cf7,	// (0x000160b2) linegrid_cam4_burst_pane_g6

0xd4b7,	// (0x0001c872) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4b7,	// (0x0001c872) linegrid_cam4_burst_pane_g7

0x6d0e,	// (0x000160c9) cell_cam4_burst_pane_g1

0xd4d0,	// (0x0001c88b) main_cam5_pane_t1_ParamLimits

0xd4d0,	// (0x0001c88b) main_cam5_pane_t1

0xd4e2,	// (0x0001c89d) main_cam5_pane_t2_ParamLimits

0xd4e2,	// (0x0001c89d) main_cam5_pane_t2

0xd4f4,	// (0x0001c8af) main_cam5_pane_t3_ParamLimits

0xd4f4,	// (0x0001c8af) main_cam5_pane_t3

0xd506,	// (0x0001c8c1) main_cam5_pane_t4_ParamLimits

0xd506,	// (0x0001c8c1) main_cam5_pane_t4

0xd51e,	// (0x0001c8d9) main_cam5_pane_t5_ParamLimits

0xd51e,	// (0x0001c8d9) main_cam5_pane_t5

0xd532,	// (0x0001c8ed) main_cam5_pane_t6_ParamLimits

0xd532,	// (0x0001c8ed) main_cam5_pane_t6

0xd546,	// (0x0001c901) main_cam5_pane_t7_ParamLimits

0xd546,	// (0x0001c901) main_cam5_pane_t7

0xd558,	// (0x0001c913) main_cam5_pane_t8_ParamLimits

0xd558,	// (0x0001c913) main_cam5_pane_t8

0xd576,	// (0x0001c931) main_cam5_pane_t9_ParamLimits

0xd576,	// (0x0001c931) main_cam5_pane_t9

0xd588,	// (0x0001c943) main_cam5_pane_t10_ParamLimits

0xd588,	// (0x0001c943) main_cam5_pane_t10

0xd59a,	// (0x0001c955) main_cam5_pane_t11_ParamLimits

0xd59a,	// (0x0001c955) main_cam5_pane_t11

0xd5ae,	// (0x0001c969) main_cam5_pane_t12_ParamLimits

0xd5ae,	// (0x0001c969) main_cam5_pane_t12

0xd5c5,	// (0x0001c980) main_cam5_pane_t13_ParamLimits

0xd5c5,	// (0x0001c980) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0001ee0e) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0001ee0e) main_cam5_pane_t

0xffb0,	// (0x0000f36b) popup_scut_keymap_window_ParamLimits

0xffb0,	// (0x0000f36b) popup_scut_keymap_window

0x6d21,	// (0x000160dc) aid_size_cell_brow_shortcut

0xa9a4,	// (0x00019d5f) bg_popup_window_pane_cp010

0x6d2d,	// (0x000160e8) grid_scut_pane

0x6d39,	// (0x000160f4) cell_scut_pane_ParamLimits

0x6d39,	// (0x000160f4) cell_scut_pane

0x6d52,	// (0x0001610d) cell_scut_pane_g1

0xd5e8,	// (0x0001c9a3) cell_scut_pane_t1

0xd5f7,	// (0x0001c9b2) cell_scut_pane_t2

0x6d5b,	// (0x00016116) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0001ee29) cell_scut_pane_t

0x48f4,	// (0x00013caf) main_mup3_pane_g8_ParamLimits

0x48f4,	// (0x00013caf) main_mup3_pane_g8

0x5dfc,	// (0x000151b7) area_vitu2_query_pane_ParamLimits

0x5dfc,	// (0x000151b7) area_vitu2_query_pane

0x6a8e,	// (0x00015e49) input_focus_pane_cp08

0xd606,	// (0x0001c9c1) area_vitu2_query_pane_g1

0x6d69,	// (0x00016124) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0001ee30) area_vitu2_query_pane_g

0x6d7a,	// (0x00016135) area_vitu2_query_pane_t1_ParamLimits

0x6d7a,	// (0x00016135) area_vitu2_query_pane_t1

0x6d8e,	// (0x00016149) area_vitu2_query_pane_t2_ParamLimits

0x6d8e,	// (0x00016149) area_vitu2_query_pane_t2

0x6da2,	// (0x0001615d) area_vitu2_query_pane_t3_ParamLimits

0x6da2,	// (0x0001615d) area_vitu2_query_pane_t3

0xd612,	// (0x0001c9cd) area_vitu2_query_pane_t4_ParamLimits

0xd612,	// (0x0001c9cd) area_vitu2_query_pane_t4

0xd63a,	// (0x0001c9f5) area_vitu2_query_pane_t5_ParamLimits

0xd63a,	// (0x0001c9f5) area_vitu2_query_pane_t5

0xd662,	// (0x0001ca1d) area_vitu2_query_pane_t6_ParamLimits

0xd662,	// (0x0001ca1d) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0001ee35) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0001ee35) area_vitu2_query_pane_t

0x6dca,	// (0x00016185) bg_button_pane_cp018

0x6dd8,	// (0x00016193) bg_button_pane_cp021

0x6de4,	// (0x0001619f) bg_button_pane_cp022

0x6df5,	// (0x000161b0) input_focus_pane_cp09

0x2752,	// (0x00011b0d) aid_size_touch_mv_arrow_left

0x277b,	// (0x00011b36) aid_size_touch_mv_arrow_right

0x6565,	// (0x00015920) main_cset_slider_pane_g16_ParamLimits

0x6565,	// (0x00015920) main_cset_slider_pane_g16

0x6573,	// (0x0001592e) main_cset_slider_pane_g17_ParamLimits

0x6573,	// (0x0001592e) main_cset_slider_pane_g17

0x6d0e,	// (0x000160c9) cell_cam4_burst_pane_g1_ParamLimits

0x95a6,	// (0x00018961) compa_mode_pane

0x678d,	// (0x00015b48) popup_vtel_slider_window_g3_ParamLimits

0x678d,	// (0x00015b48) popup_vtel_slider_window_g3

0x67a4,	// (0x00015b5f) popup_vtel_slider_window_g4_ParamLimits

0x67a4,	// (0x00015b5f) popup_vtel_slider_window_g4

0x67bb,	// (0x00015b76) popup_vtel_slider_window_t1_ParamLimits

0x67bb,	// (0x00015b76) popup_vtel_slider_window_t1

0x95a6,	// (0x00018961) main_cl_pane

0xbe7b,	// (0x0001b236) popup_imed_adjust2_window_ParamLimits

0xbe4f,	// (0x0001b20a) bg_tb_trans_pane_cp05_ParamLimits

0xc845,	// (0x0001bc00) popup_imed_adjust2_window_g1_ParamLimits

0xc854,	// (0x0001bc0f) popup_imed_adjust2_window_g2_ParamLimits

0xc854,	// (0x0001bc0f) popup_imed_adjust2_window_g2

0xc860,	// (0x0001bc1b) popup_imed_adjust2_window_g3_ParamLimits

0xc860,	// (0x0001bc1b) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0001eba0) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0001eba0) popup_imed_adjust2_window_g

0xc86c,	// (0x0001bc27) popup_imed_adjust2_window_t1_ParamLimits

0xc884,	// (0x0001bc3f) slider_imed_adjust_pane_ParamLimits

0xc898,	// (0x0001bc53) slider_imed_adjust_pane_g1_ParamLimits

0xc8a8,	// (0x0001bc63) slider_imed_adjust_pane_g2_ParamLimits

0xc8b8,	// (0x0001bc73) slider_imed_adjust_pane_g3_ParamLimits

0xc8c9,	// (0x0001bc84) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0001eba7) slider_imed_adjust_pane_g_ParamLimits

0x5b7e,	// (0x00014f39) aid_touch_area_cam4_ParamLimits

0x5b7e,	// (0x00014f39) aid_touch_area_cam4

0xcf82,	// (0x0001c33d) battery_pane_cp01

0x5c50,	// (0x0001500b) main_camera4_pane_g6_ParamLimits

0x5c50,	// (0x0001500b) main_camera4_pane_g6

0x5c7a,	// (0x00015035) main_camera4_pane_t2_ParamLimits

0x5c7a,	// (0x00015035) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0001ecaa) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0001ecaa) main_camera4_pane_t

0x5caf,	// (0x0001506a) aid_touch_area_vid4_ParamLimits

0x5caf,	// (0x0001506a) aid_touch_area_vid4

0x5d03,	// (0x000150be) main_video4_pane_g5_ParamLimits

0x5d03,	// (0x000150be) main_video4_pane_g5

0x5d28,	// (0x000150e3) vid4_progress_pane_ParamLimits

0x5d28,	// (0x000150e3) vid4_progress_pane

0xd22a,	// (0x0001c5e5) main_cset_slider_pane_g18_ParamLimits

0xd22a,	// (0x0001c5e5) main_cset_slider_pane_g18

0xd4c4,	// (0x0001c87f) cell_cam4_burst_pane_g2_ParamLimits

0xd4c4,	// (0x0001c87f) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0001ee09) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0001ee09) cell_cam4_burst_pane_g

0x9d6a,	// (0x00019125) bg_cl_pane_ParamLimits

0x9d6a,	// (0x00019125) bg_cl_pane

0x6e06,	// (0x000161c1) cl_header_pane_ParamLimits

0x6e06,	// (0x000161c1) cl_header_pane

0x6e1a,	// (0x000161d5) cl_listscroll_pane_ParamLimits

0x6e1a,	// (0x000161d5) cl_listscroll_pane

0xd6ae,	// (0x0001ca69) bg_cl_pane_g1

0xd6b6,	// (0x0001ca71) bg_cl_pane_g2

0xd6be,	// (0x0001ca79) bg_cl_pane_g3

0xd6c6,	// (0x0001ca81) bg_cl_pane_g4

0xd6ce,	// (0x0001ca89) bg_cl_pane_g5

0xd6d6,	// (0x0001ca91) bg_cl_pane_g6

0xd6de,	// (0x0001ca99) bg_cl_pane_g7

0xd6e6,	// (0x0001caa1) bg_cl_pane_g8

0xd6ee,	// (0x0001caa9) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0001ee44) bg_cl_pane_g

0x6e2a,	// (0x000161e5) aid_height_cl_leading_ParamLimits

0x6e2a,	// (0x000161e5) aid_height_cl_leading

0x6e36,	// (0x000161f1) aid_height_cl_text_ParamLimits

0x6e36,	// (0x000161f1) aid_height_cl_text

0x9607,	// (0x000189c2) bg_cl_header_pane_ParamLimits

0x9607,	// (0x000189c2) bg_cl_header_pane

0x6e55,	// (0x00016210) cl_header_pane_g1_ParamLimits

0x6e55,	// (0x00016210) cl_header_pane_g1

0x6e6b,	// (0x00016226) cl_header_pane_t1_ParamLimits

0x6e6b,	// (0x00016226) cl_header_pane_t1

0xd6f6,	// (0x0001cab1) cl_list_pane

0xd1fd,	// (0x0001c5b8) hc_scroll_pane_cp01

0xa201,	// (0x000195bc) bg_cl_header_pane_g1

0xd0df,	// (0x0001c49a) bg_cl_header_pane_g2

0xa221,	// (0x000195dc) bg_cl_header_pane_g3

0xd0ef,	// (0x0001c4aa) bg_cl_header_pane_g4

0xd0e7,	// (0x0001c4a2) bg_cl_header_pane_g5

0xd3a5,	// (0x0001c760) bg_cl_header_pane_g6

0xd107,	// (0x0001c4c2) bg_cl_header_pane_g7

0xd10f,	// (0x0001c4ca) bg_cl_header_pane_g8

0xd0ff,	// (0x0001c4ba) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0001ee57) bg_cl_header_pane_g

0x6e84,	// (0x0001623f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e84,	// (0x0001623f) hc_cl_list_double_graphic_heading_pane

0x6e97,	// (0x00016252) hc_cl_list_single_graphic_pane_ParamLimits

0x6e97,	// (0x00016252) hc_cl_list_single_graphic_pane

0x6eaf,	// (0x0001626a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6eaf,	// (0x0001626a) hc_cl_list_single_graphic_pane_g1

0x6ebb,	// (0x00016276) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ebb,	// (0x00016276) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0001ee6a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0001ee6a) hc_cl_list_single_graphic_pane_g

0x6ecf,	// (0x0001628a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ecf,	// (0x0001628a) hc_cl_list_single_graphic_pane_t1

0x6eaf,	// (0x0001626a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6eaf,	// (0x0001626a) hc_cl_list_double_graphic_heading_pane_g1

0x6ee4,	// (0x0001629f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ee4,	// (0x0001629f) hc_cl_list_double_graphic_heading_pane_g2

0x6ef8,	// (0x000162b3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ef8,	// (0x000162b3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0001ee6f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0001ee6f) hc_cl_list_double_graphic_heading_pane_g

0x6f0c,	// (0x000162c7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6f0c,	// (0x000162c7) hc_cl_list_double_graphic_heading_pane_t1

0x6f21,	// (0x000162dc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6f21,	// (0x000162dc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0001ee76) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0001ee76) hc_cl_list_double_graphic_heading_pane_t

0x6f36,	// (0x000162f1) vid4_progress_pane_g1

0x6f48,	// (0x00016303) vid4_progress_pane_g2

0xabc6,	// (0x00019f81) vid4_progress_pane_g3

0xd707,	// (0x0001cac2) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0001ee7b) vid4_progress_pane_g

0xd725,	// (0x0001cae0) vid4_progress_pane_t1

0xd73a,	// (0x0001caf5) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0001ee86) vid4_progress_pane_t

0xd765,	// (0x0001cb20) wait_bar_pane_cp07

0xc149,	// (0x0001b504) blid_firmament_pane_ParamLimits

0xc18c,	// (0x0001b547) popup_blid_sat_info2_window_g1

0xc1b0,	// (0x0001b56b) popup_blid_sat_info2_window_t3

0xc1be,	// (0x0001b579) popup_blid_sat_info2_window_t4

0xc1cc,	// (0x0001b587) popup_blid_sat_info2_window_t5

0xc1da,	// (0x0001b595) popup_blid_sat_info2_window_t6

0xc1ea,	// (0x0001b5a5) popup_blid_sat_info2_window_t7

0xc1f8,	// (0x0001b5b3) popup_blid_sat_info2_window_t8

0xc206,	// (0x0001b5c1) popup_blid_sat_info2_window_t9

0xc214,	// (0x0001b5cf) popup_blid_sat_info2_window_t10

0xc2dc,	// (0x0001b697) aid_firma_cardinal_ParamLimits

0xc2f0,	// (0x0001b6ab) blid_firmament_pane_t1_ParamLimits

0xc307,	// (0x0001b6c2) blid_firmament_pane_t2_ParamLimits

0xc31e,	// (0x0001b6d9) blid_firmament_pane_t3_ParamLimits

0xc335,	// (0x0001b6f0) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0001ea99) blid_firmament_pane_t_ParamLimits

0xc34c,	// (0x0001b707) blid_sat_info_pane_ParamLimits

0x9607,	// (0x000189c2) main_cam_set_pane_ParamLimits

0x51d5,	// (0x00014590) aid_size_cell_colour_35_ParamLimits

0x51f5,	// (0x000145b0) aid_size_cell_colour_112_ParamLimits

0x5215,	// (0x000145d0) aid_size_cell_effect_ParamLimits

0xbe4f,	// (0x0001b20a) bg_tb_trans_pane_cp02_ParamLimits

0xa495,	// (0x00019850) heading_imed_pane_ParamLimits

0x5235,	// (0x000145f0) listscroll_imed_pane_ParamLimits

0xb471,	// (0x0001a82c) popup_call2_audio_first_window_g5_ParamLimits

0xb471,	// (0x0001a82c) popup_call2_audio_first_window_g5

0x57e6,	// (0x00014ba1) aid_size_touch_image3_arrow_left_ParamLimits

0x57e6,	// (0x00014ba1) aid_size_touch_image3_arrow_left

0x5812,	// (0x00014bcd) aid_size_touch_image3_arrow_right_ParamLimits

0x5812,	// (0x00014bcd) aid_size_touch_image3_arrow_right

0xd750,	// (0x0001cb0b) vid4_progress_pane_t3

0x5554,	// (0x0001490f) main_hwr_training_symbol_option_pane_ParamLimits

0x5554,	// (0x0001490f) main_hwr_training_symbol_option_pane

0xcb34,	// (0x0001beef) popup_hwr_training_preview_window_ParamLimits

0xcb34,	// (0x0001beef) popup_hwr_training_preview_window

0x5574,	// (0x0001492f) hwr_training_navi_pane_g5_ParamLimits

0x5574,	// (0x0001492f) hwr_training_navi_pane_g5

0xd0cd,	// (0x0001c488) popup_char_count_window

0x9607,	// (0x000189c2) bg_popup_sub_pane_cp20_ParamLimits

0x68d5,	// (0x00015c90) list_vitu2_match_list_pane_ParamLimits

0x68e4,	// (0x00015c9f) vitu2_page_scroll_pane_ParamLimits

0x68e4,	// (0x00015c9f) vitu2_page_scroll_pane

0xd79b,	// (0x0001cb56) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd79b,	// (0x0001cb56) list_single_hwr_training_symbol_option_pane

0xd7ae,	// (0x0001cb69) list_single_hwr_training_symbol_option_pane_g1

0xd7b6,	// (0x0001cb71) list_single_hwr_training_symbol_option_pane_t1

0xd7c4,	// (0x0001cb7f) bg_button_pane_cp023

0xd7cd,	// (0x0001cb88) bg_button_pane_cp024

0x6f89,	// (0x00016344) vitu2_page_scroll_pane_g1

0x6f91,	// (0x0001634c) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0001ee8d) vitu2_page_scroll_pane_g

0x6f9b,	// (0x00016356) vitu2_page_scroll_pane_t1

0xc065,	// (0x0001b420) popup_char_count_window_g1

0xd800,	// (0x0001cbbb) popup_char_count_window_g2

0xd809,	// (0x0001cbc4) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0001ee92) popup_char_count_window_g

0xd812,	// (0x0001cbcd) popup_char_count_window_t1

0x95a6,	// (0x00018961) main_vded2_pane

0xc831,	// (0x0001bbec) aid_size_cell_imed_line

0xc83b,	// (0x0001bbf6) grid_imed_line_width_pane

0xd03c,	// (0x0001c3f7) vid4_indicators_pane_g4

0xd820,	// (0x0001cbdb) cell_imed_line_width_pane_ParamLimits

0xd820,	// (0x0001cbdb) cell_imed_line_width_pane

0xd836,	// (0x0001cbf1) cell_imed_line_width_pane_g1

0xd83f,	// (0x0001cbfa) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0001ee99) cell_imed_line_width_pane_g

0x6faa,	// (0x00016365) main_vded2_pane_g1_ParamLimits

0x6faa,	// (0x00016365) main_vded2_pane_g1

0x6fc5,	// (0x00016380) main_vded2_pane_g2_ParamLimits

0x6fc5,	// (0x00016380) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0001ee9e) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0001ee9e) main_vded2_pane_g

0x6fd7,	// (0x00016392) vded2_slider_pane_ParamLimits

0x6fd7,	// (0x00016392) vded2_slider_pane

0x6fe7,	// (0x000163a2) aid_size_touch_vded2_end

0x6ff1,	// (0x000163ac) aid_size_touch_vded2_playhead

0xd847,	// (0x0001cc02) aid_size_touch_vded2_start

0xd84f,	// (0x0001cc0a) vded2_slider_bg_pane

0xd858,	// (0x0001cc13) vded2_slider_pane_g1

0xd861,	// (0x0001cc1c) vded2_slider_pane_g2

0x6ffb,	// (0x000163b6) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0001eea3) vded2_slider_pane_g

0xd264,	// (0x0001c61f) vded2_slider_bg_pane_g1

0xd26d,	// (0x0001c628) vded2_slider_bg_pane_g2

0xd276,	// (0x0001c631) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0001eeaa) vded2_slider_bg_pane_g

0x2e4a,	// (0x00012205) aid_postcard_touch_down_pane_ParamLimits

0x2e4a,	// (0x00012205) aid_postcard_touch_down_pane

0x2e62,	// (0x0001221d) aid_postcard_touch_up_pane_ParamLimits

0x2e62,	// (0x0001221d) aid_postcard_touch_up_pane

0x95a6,	// (0x00018961) main_blid2_pane

0xbe5d,	// (0x0001b218) popup_blid2_search_window

0x95a6,	// (0x00018961) blid2_gps_pane

0x95a6,	// (0x00018961) blid2_navig_pane

0x95a6,	// (0x00018961) blid2_search_pane

0x95a6,	// (0x00018961) blid2_tripm_pane

0x7006,	// (0x000163c1) blid2_search_pane_g1_ParamLimits

0x7006,	// (0x000163c1) blid2_search_pane_g1

0x7019,	// (0x000163d4) blid2_search_pane_t1_ParamLimits

0x7019,	// (0x000163d4) blid2_search_pane_t1

0x702b,	// (0x000163e6) aid_size_cell_blid2_gps_ParamLimits

0x702b,	// (0x000163e6) aid_size_cell_blid2_gps

0x7043,	// (0x000163fe) blid2_gps_pane_g1_ParamLimits

0x7043,	// (0x000163fe) blid2_gps_pane_g1

0x7057,	// (0x00016412) grid_blid2_satellite_pane_ParamLimits

0x7057,	// (0x00016412) grid_blid2_satellite_pane

0x706f,	// (0x0001642a) blid2_navig_pane_g1_ParamLimits

0x706f,	// (0x0001642a) blid2_navig_pane_g1

0x707b,	// (0x00016436) blid2_navig_pane_t1_ParamLimits

0x707b,	// (0x00016436) blid2_navig_pane_t1

0x7096,	// (0x00016451) blid2_navig_pane_t2_ParamLimits

0x7096,	// (0x00016451) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0001eeb1) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0001eeb1) blid2_navig_pane_t

0x70b1,	// (0x0001646c) blid2_navig_ring_pane_ParamLimits

0x70b1,	// (0x0001646c) blid2_navig_ring_pane

0x70cc,	// (0x00016487) blid2_speed_pane_ParamLimits

0x70cc,	// (0x00016487) blid2_speed_pane

0x70d8,	// (0x00016493) blid2_tripm_pane_g1_ParamLimits

0x70d8,	// (0x00016493) blid2_tripm_pane_g1

0x70f3,	// (0x000164ae) blid2_tripm_pane_g2_ParamLimits

0x70f3,	// (0x000164ae) blid2_tripm_pane_g2

0x7107,	// (0x000164c2) blid2_tripm_pane_g3_ParamLimits

0x7107,	// (0x000164c2) blid2_tripm_pane_g3

0x711b,	// (0x000164d6) blid2_tripm_pane_g4_ParamLimits

0x711b,	// (0x000164d6) blid2_tripm_pane_g4

0x712f,	// (0x000164ea) blid2_tripm_pane_g5_ParamLimits

0x712f,	// (0x000164ea) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0001eeb6) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0001eeb6) blid2_tripm_pane_g

0x7155,	// (0x00016510) blid2_tripm_pane_t1_ParamLimits

0x7155,	// (0x00016510) blid2_tripm_pane_t1

0x716e,	// (0x00016529) blid2_tripm_pane_t2_ParamLimits

0x716e,	// (0x00016529) blid2_tripm_pane_t2

0x7187,	// (0x00016542) blid2_tripm_pane_t3_ParamLimits

0x7187,	// (0x00016542) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0001eec3) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0001eec3) blid2_tripm_pane_t

0x71ce,	// (0x00016589) cell_blid2_satellite_pane_ParamLimits

0x71ce,	// (0x00016589) cell_blid2_satellite_pane

0x71ec,	// (0x000165a7) cell_blid2_satellite_pane_g1

0xd869,	// (0x0001cc24) cell_blid2_satellite_pane_t1

0xc35c,	// (0x0001b717) blid2_speed_pane_g1

0xd877,	// (0x0001cc32) blid2_speed_pane_t1

0xd885,	// (0x0001cc40) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0001eecc) blid2_speed_pane_t

0xc35c,	// (0x0001b717) blid2_navig_ring_pane_g1

0x71f5,	// (0x000165b0) blid2_navig_ring_pane_g2

0x71fd,	// (0x000165b8) blid2_navig_ring_pane_g3

0x7205,	// (0x000165c0) blid2_navig_ring_pane_g4

0x720d,	// (0x000165c8) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0001eed1) blid2_navig_ring_pane_g

0x95a6,	// (0x00018961) bg_popup_window_pane_cp011

0xd893,	// (0x0001cc4e) popup_blid2_search_window_g1

0xd89b,	// (0x0001cc56) popup_blid2_search_window_t1

0xd8a9,	// (0x0001cc64) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0001eedc) popup_blid2_search_window_t

0xa110,	// (0x000194cb) main_browser_pane_g1

0x9d6a,	// (0x00019125) main_browser_pane_ParamLimits

0x9607,	// (0x000189c2) bg_button_pane_cp011_ParamLimits

0x612d,	// (0x000154e8) cell_vitu2_function_pane_g1_ParamLimits

0xbe4f,	// (0x0001b20a) bg_popup_sub_pane_cp22_ParamLimits

0x6a8e,	// (0x00015e49) input_focus_pane_cp08_ParamLimits

0x6aa5,	// (0x00015e60) popup_vitu2_query_button_pane_ParamLimits

0x6aa5,	// (0x00015e60) popup_vitu2_query_button_pane

0x6ab6,	// (0x00015e71) popup_vitu2_query_input_button_pane

0xd40e,	// (0x0001c7c9) popup_vitu2_query_window_g1_ParamLimits

0x6ac0,	// (0x00015e7b) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0001eddd) popup_vitu2_query_window_g_ParamLimits

0x95a6,	// (0x00018961) bg_button_pane_cp026

0x7215,	// (0x000165d0) popup_vitu2_query_input_button_pane_g1

0x95a6,	// (0x00018961) bg_button_pane_cp025

0xd8b7,	// (0x0001cc72) popup_vitu2_query_button_pane_t1

0x456e,	// (0x00013929) main_mp3_pane_t6

0x457c,	// (0x00013937) popup_slider_window_cp01

0xcfa0,	// (0x0001c35b) cam4_battery_pane

0xcff5,	// (0x0001c3b0) cam4_battery_pane_cp02

0xd6ff,	// (0x0001caba) cam4_battery_pane_cp01

0xd6ff,	// (0x0001caba) cam4_battery_pane_cp03

0xc35c,	// (0x0001b717) cam4_battery_pane_g1

0xd8c5,	// (0x0001cc80) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0001eee1) cam4_battery_pane_g

0xc222,	// (0x0001b5dd) popup_blid_sat_info2_window_t11

0x2752,	// (0x00011b0d) aid_size_touch_mv_arrow_left_ParamLimits

0x277b,	// (0x00011b36) aid_size_touch_mv_arrow_right_ParamLimits

0xa904,	// (0x00019cbf) navi_pane_g1_ParamLimits

0x27ba,	// (0x00011b75) navi_pane_g2_ParamLimits

0x27e8,	// (0x00011ba3) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0001e7ab) navi_pane_g_ParamLimits

0x2842,	// (0x00011bfd) navi_pane_mv_t1_ParamLimits

0x5241,	// (0x000145fc) grid_imed_effect_pane_ParamLimits

0x11ac,	// (0x00010567) aid_placing_vt_slider_lsc

0xa05b,	// (0x00019416) aid_placing_vt_slider_prt

0x9607,	// (0x000189c2) bg_tb_trans_pane_cp01_ParamLimits

0xc4ac,	// (0x0001b867) popup_image_details_window_g1_ParamLimits

0xc4bf,	// (0x0001b87a) popup_image_details_window_g2_ParamLimits

0xc4d4,	// (0x0001b88f) popup_image_details_window_g3_ParamLimits

0xc4d4,	// (0x0001b88f) popup_image_details_window_g3

0xf723,	// (0x0001eade) popup_image_details_window_g_ParamLimits

0xc4e8,	// (0x0001b8a3) popup_image_details_window_t1_ParamLimits

0xc4fa,	// (0x0001b8b5) popup_image_details_window_t2_ParamLimits

0xc513,	// (0x0001b8ce) popup_image_details_window_t3_ParamLimits

0xc527,	// (0x0001b8e2) popup_image_details_window_t4_ParamLimits

0xc542,	// (0x0001b8fd) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0001eae5) popup_image_details_window_t_ParamLimits

0x6e42,	// (0x000161fd) cl_header_name_pane_ParamLimits

0x6e42,	// (0x000161fd) cl_header_name_pane

0x721d,	// (0x000165d8) cl_header_name_pane_t1_ParamLimits

0x721d,	// (0x000165d8) cl_header_name_pane_t1

0x723e,	// (0x000165f9) cl_header_name_pane_t2_ParamLimits

0x723e,	// (0x000165f9) cl_header_name_pane_t2

0x7280,	// (0x0001663b) cl_header_name_pane_t3_ParamLimits

0x7280,	// (0x0001663b) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0001eee6) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0001eee6) cl_header_name_pane_t

0x2813,	// (0x00011bce) navi_pane_mv_g2_ParamLimits

0xd08a,	// (0x0001c445) field_vitu2_entry_pane_g1_ParamLimits

0xd096,	// (0x0001c451) field_vitu2_entry_pane_g2_ParamLimits

0xd0a2,	// (0x0001c45d) field_vitu2_entry_pane_g3_ParamLimits

0xd0a2,	// (0x0001c45d) field_vitu2_entry_pane_g3

0xf921,	// (0x0001ecdc) field_vitu2_entry_pane_g_ParamLimits

0x5fcd,	// (0x00015388) cell_vitu2_itu_pane_g1_ParamLimits

0x5fdd,	// (0x00015398) cell_vitu2_itu_pane_g2_ParamLimits

0x5fdd,	// (0x00015398) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0001ece8) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0001ece8) cell_vitu2_itu_pane_g

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp05_ParamLimits

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp05

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp03

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp04

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp10_ParamLimits

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp10

0x6de4,	// (0x0001619f) bg_vkb2_func_pane_cp08

0x6dca,	// (0x00016185) bg_vkb2_func_pane_cp06

0x6dd8,	// (0x00016193) bg_vkb2_func_pane_cp07

0xd7d6,	// (0x0001cb91) bg_vkb2_func_pane_cp11_ParamLimits

0xd7d6,	// (0x0001cb91) bg_vkb2_func_pane_cp11

0xd7eb,	// (0x0001cba6) bg_vkb2_func_pane_cp12_ParamLimits

0xd7eb,	// (0x0001cba6) bg_vkb2_func_pane_cp12

0x95a6,	// (0x00018961) bg_vkb2_func_pane_cp09

0xd0df,	// (0x0001c49a) bg_vkb2_func_pane_g1

0xa221,	// (0x000195dc) bg_vkb2_func_pane_g2

0xd0e7,	// (0x0001c4a2) bg_vkb2_func_pane_g3

0xd0ef,	// (0x0001c4aa) bg_vkb2_func_pane_g4

0xd3a5,	// (0x0001c760) bg_vkb2_func_pane_g5

0xd107,	// (0x0001c4c2) bg_vkb2_func_pane_g6

0xd10f,	// (0x0001c4ca) bg_vkb2_func_pane_g7

0xd0ff,	// (0x0001c4ba) bg_vkb2_func_pane_g8

0xa201,	// (0x000195bc) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0001eeed) bg_vkb2_func_pane_g

0x7143,	// (0x000164fe) blid2_tripm_pane_g6_ParamLimits

0x7143,	// (0x000164fe) blid2_tripm_pane_g6

0xce23,	// (0x0001c1de) mp4_progress_pane_g1

0x71ba,	// (0x00016575) blid2_tripm_values_pane_ParamLimits

0x71ba,	// (0x00016575) blid2_tripm_values_pane

0x72b1,	// (0x0001666c) blid2_tripm_values_pane_t1

0x72bf,	// (0x0001667a) blid2_tripm_values_pane_t2

0x72cd,	// (0x00016688) blid2_tripm_values_pane_t3

0x72db,	// (0x00016696) blid2_tripm_values_pane_t4

0x72e9,	// (0x000166a4) blid2_tripm_values_pane_t5

0x72f7,	// (0x000166b2) blid2_tripm_values_pane_t6

0x7305,	// (0x000166c0) blid2_tripm_values_pane_t7

0x7313,	// (0x000166ce) blid2_tripm_values_pane_t8

0x7321,	// (0x000166dc) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0001ef00) blid2_tripm_values_pane_t

0x11e9,	// (0x000105a4) call_video_pane_t1_ParamLimits

0x1203,	// (0x000105be) call_video_pane_t2_ParamLimits

0xf279,	// (0x0001e634) call_video_pane_t_ParamLimits

0x2d97,	// (0x00012152) msg_header_pane_g1_ParamLimits

0xab40,	// (0x00019efb) msg_header_pane_g2_ParamLimits

0xab40,	// (0x00019efb) msg_header_pane_g2

0x0001,

0xf493,	// (0x0001e84e) msg_header_pane_g_ParamLimits

0xf493,	// (0x0001e84e) msg_header_pane_g

0x9d6a,	// (0x00019125) main_clock2_pane_ParamLimits

0x4f28,	// (0x000142e3) grid_clock2_toolbar_pane_ParamLimits

0x4f28,	// (0x000142e3) grid_clock2_toolbar_pane

0x4f28,	// (0x000142e3) listscroll_clock2_pane_ParamLimits

0x4f28,	// (0x000142e3) listscroll_clock2_pane

0x501f,	// (0x000143da) main_clock2_pane_t3_ParamLimits

0x501f,	// (0x000143da) main_clock2_pane_t3

0x5043,	// (0x000143fe) main_clock2_pane_t4_ParamLimits

0x5043,	// (0x000143fe) main_clock2_pane_t4

0xd8cf,	// (0x0001cc8a) cell_clock2_toolbar_pane

0xd8d7,	// (0x0001cc92) cell_clock2_toolbar_pane_cp01

0xd8d7,	// (0x0001cc92) cell_clock2_toolbar_pane_cp02

0xd8df,	// (0x0001cc9a) cell_clock2_toolbar_pane_cp03

0xd8e7,	// (0x0001cca2) list_clock2_pane

0xa86a,	// (0x00019c25) scroll_pane_cp10

0xd8ef,	// (0x0001ccaa) list_single_clock2_pane_ParamLimits

0xd8ef,	// (0x0001ccaa) list_single_clock2_pane

0xa9a4,	// (0x00019d5f) list_highlight_pane_cp08

0xd8fc,	// (0x0001ccb7) list_single_clock2_pane_t1

0xd90a,	// (0x0001ccc5) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0001ef13) list_single_clock2_pane_t

0x95a6,	// (0x00018961) bg_button_pane_cp10

0xd918,	// (0x0001ccd3) cell_clock2_toolbar_pane_g1

0x2dd6,	// (0x00012191) aid_main_viewer_pane_g1_ParamLimits

0x2dd6,	// (0x00012191) aid_main_viewer_pane_g1

0x2de4,	// (0x0001219f) aid_main_viewer_pane_g2_ParamLimits

0x2de4,	// (0x0001219f) aid_main_viewer_pane_g2

0x2df2,	// (0x000121ad) aid_main_viewer_pane_g3_ParamLimits

0x2df2,	// (0x000121ad) aid_main_viewer_pane_g3

0x2e01,	// (0x000121bc) aid_main_viewer_pane_g4_ParamLimits

0x2e01,	// (0x000121bc) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0001e85f) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0001e85f) aid_main_viewer_pane_g

0x3754,	// (0x00012b0f) main_calc_pane_ParamLimits

0x3768,	// (0x00012b23) main_dialer2_pane_ParamLimits

0x95a6,	// (0x00018961) main_cam6_pane

0x95a6,	// (0x00018961) main_vid6_pane

0x4f34,	// (0x000142ef) listscroll_gen_pane_cp06_ParamLimits

0x4f34,	// (0x000142ef) listscroll_gen_pane_cp06

0x5066,	// (0x00014421) main_clock2_pane_t5_ParamLimits

0x5066,	// (0x00014421) main_clock2_pane_t5

0x50c6,	// (0x00014481) aid_call2_pane_cp10_ParamLimits

0x50d8,	// (0x00014493) aid_call_pane_cp10_ParamLimits

0xa8d9,	// (0x00019c94) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8d9,	// (0x00019c94) popup_clock_analogue_window_cp10_g2_ParamLimits

0x50ea,	// (0x000144a5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x50ea,	// (0x000144a5) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8d9,	// (0x00019c94) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0001eb95) popup_clock_analogue_window_cp10_g_ParamLimits

0x5100,	// (0x000144bb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5793,	// (0x00014b4e) cell_dialer2_keypad_pane_g2_ParamLimits

0x5793,	// (0x00014b4e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0001ec7b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0001ec7b) cell_dialer2_keypad_pane_g

0x57af,	// (0x00014b6a) cell_dialer2_keypad_pane_t1

0x6456,	// (0x00015811) main_cset_text2_pane_ParamLimits

0x6456,	// (0x00015811) main_cset_text2_pane

0xd606,	// (0x0001c9c1) area_vitu2_query_pane_g1_ParamLimits

0x6d69,	// (0x00016124) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0001ee30) area_vitu2_query_pane_g_ParamLimits

0xd68a,	// (0x0001ca45) area_vitu2_query_pane_t7_ParamLimits

0xd68a,	// (0x0001ca45) area_vitu2_query_pane_t7

0x6dca,	// (0x00016185) bg_button_pane_cp018_ParamLimits

0x6dd8,	// (0x00016193) bg_button_pane_cp021_ParamLimits

0x6de4,	// (0x0001619f) bg_button_pane_cp022_ParamLimits

0x6de4,	// (0x0001619f) bg_vkb2_func_pane_cp08_ParamLimits

0x6dca,	// (0x00016185) bg_vkb2_func_pane_cp06_ParamLimits

0x6dd8,	// (0x00016193) bg_vkb2_func_pane_cp07_ParamLimits

0x6df5,	// (0x000161b0) input_focus_pane_cp09_ParamLimits

0xd920,	// (0x0001ccdb) cam6_autofocus_pane_ParamLimits

0xd920,	// (0x0001ccdb) cam6_autofocus_pane

0x732f,	// (0x000166ea) cam6_image_uncrop_pane_ParamLimits

0x732f,	// (0x000166ea) cam6_image_uncrop_pane

0x733e,	// (0x000166f9) cam6_indi_pane_ParamLimits

0x733e,	// (0x000166f9) cam6_indi_pane

0x7354,	// (0x0001670f) cam6_mode_pane_ParamLimits

0x7354,	// (0x0001670f) cam6_mode_pane

0x7366,	// (0x00016721) cam6_timer_pane_ParamLimits

0x7366,	// (0x00016721) cam6_timer_pane

0x7372,	// (0x0001672d) cam6_zoom_pane_ParamLimits

0x7372,	// (0x0001672d) cam6_zoom_pane

0x7380,	// (0x0001673b) cam6_mode_pane_g1_ParamLimits

0x7380,	// (0x0001673b) cam6_mode_pane_g1

0x7390,	// (0x0001674b) cam6_mode_pane_g2_ParamLimits

0x7390,	// (0x0001674b) cam6_mode_pane_g2

0x73a0,	// (0x0001675b) cam6_mode_pane_g3_ParamLimits

0x73a0,	// (0x0001675b) cam6_mode_pane_g3

0x73b0,	// (0x0001676b) cam6_mode_pane_g4_ParamLimits

0x73b0,	// (0x0001676b) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0001ef18) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0001ef18) cam6_mode_pane_g

0xd27f,	// (0x0001c63a) bg_tb_trans_pane_cp08_ParamLimits

0xd27f,	// (0x0001c63a) bg_tb_trans_pane_cp08

0xd92e,	// (0x0001cce9) cam6_battery_pane_ParamLimits

0xd92e,	// (0x0001cce9) cam6_battery_pane

0xd944,	// (0x0001ccff) cam6_indi_pane_g1_ParamLimits

0xd944,	// (0x0001ccff) cam6_indi_pane_g1

0xd956,	// (0x0001cd11) cam6_indi_pane_g2_ParamLimits

0xd956,	// (0x0001cd11) cam6_indi_pane_g2

0xd968,	// (0x0001cd23) cam6_indi_pane_g3_ParamLimits

0xd968,	// (0x0001cd23) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0001ef21) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0001ef21) cam6_indi_pane_g

0xd97a,	// (0x0001cd35) cam6_indi_pane_t1_ParamLimits

0xd97a,	// (0x0001cd35) cam6_indi_pane_t1

0x5d70,	// (0x0001512b) cam6_autofocus_pane_g1

0x5d78,	// (0x00015133) cam6_autofocus_pane_g2

0x5d80,	// (0x0001513b) cam6_autofocus_pane_g3

0x5d88,	// (0x00015143) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0001ef28) cam6_autofocus_pane_g

0xd9a0,	// (0x0001cd5b) cam6_timer_pane_g1

0xd9a8,	// (0x0001cd63) cam6_timer_pane_t1

0xd9b6,	// (0x0001cd71) cam6_zoom_cont_pane

0xd9be,	// (0x0001cd79) cam6_zoom_pane_g1

0xd9c6,	// (0x0001cd81) cam6_zoom_pane_g2

0x73c0,	// (0x0001677b) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0001ef31) cam6_zoom_pane_g

0xc35c,	// (0x0001b717) cam6_battery_pane_g1

0xc35c,	// (0x0001b717) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0001eaa2) cam6_battery_pane_g

0xd9ce,	// (0x0001cd89) cam6_zoom_cont_pane_g1

0xd9d7,	// (0x0001cd92) cam6_zoom_cont_pane_g2

0xd9e0,	// (0x0001cd9b) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0001ef38) cam6_zoom_cont_pane_g

0x73dd,	// (0x00016798) cam6_mode_pane_cp_ParamLimits

0x73dd,	// (0x00016798) cam6_mode_pane_cp

0x7372,	// (0x0001672d) cam6_zoom_pane_cp_ParamLimits

0x7372,	// (0x0001672d) cam6_zoom_pane_cp

0x73ef,	// (0x000167aa) vid6_image_uncrop_cif_pane_ParamLimits

0x73ef,	// (0x000167aa) vid6_image_uncrop_cif_pane

0x73ff,	// (0x000167ba) vid6_image_uncrop_nhd_pane_ParamLimits

0x73ff,	// (0x000167ba) vid6_image_uncrop_nhd_pane

0x732f,	// (0x000166ea) vid6_image_uncrop_vga_pane_ParamLimits

0x732f,	// (0x000166ea) vid6_image_uncrop_vga_pane

0x740e,	// (0x000167c9) vid6_image_uncrop_wvga_pane_ParamLimits

0x740e,	// (0x000167c9) vid6_image_uncrop_wvga_pane

0x741d,	// (0x000167d8) vid6_indi_pane_ParamLimits

0x741d,	// (0x000167d8) vid6_indi_pane

0xd27f,	// (0x0001c63a) bg_tb_trans_pane_cp09_ParamLimits

0xd27f,	// (0x0001c63a) bg_tb_trans_pane_cp09

0xd9f8,	// (0x0001cdb3) cam6_battery_pane_cp_ParamLimits

0xd9f8,	// (0x0001cdb3) cam6_battery_pane_cp

0xda04,	// (0x0001cdbf) vid6_indi_pane_g1_ParamLimits

0xda04,	// (0x0001cdbf) vid6_indi_pane_g1

0xda16,	// (0x0001cdd1) vid6_indi_pane_g2_ParamLimits

0xda16,	// (0x0001cdd1) vid6_indi_pane_g2

0xda28,	// (0x0001cde3) vid6_indi_pane_g3_ParamLimits

0xda28,	// (0x0001cde3) vid6_indi_pane_g3

0xda3f,	// (0x0001cdfa) vid6_indi_pane_g4_ParamLimits

0xda3f,	// (0x0001cdfa) vid6_indi_pane_g4

0xda56,	// (0x0001ce11) vid6_indi_pane_g5_ParamLimits

0xda56,	// (0x0001ce11) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0001ef3f) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0001ef3f) vid6_indi_pane_g

0xda70,	// (0x0001ce2b) vid6_indi_pane_t1_ParamLimits

0xda70,	// (0x0001ce2b) vid6_indi_pane_t1

0xda86,	// (0x0001ce41) vid6_indi_pane_t2_ParamLimits

0xda86,	// (0x0001ce41) vid6_indi_pane_t2

0xdaae,	// (0x0001ce69) vid6_indi_pane_t3_ParamLimits

0xdaae,	// (0x0001ce69) vid6_indi_pane_t3

0xdad6,	// (0x0001ce91) vid6_indi_pane_t4_ParamLimits

0xdad6,	// (0x0001ce91) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0001ef4a) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0001ef4a) vid6_indi_pane_t

0xdafa,	// (0x0001ceb5) wait_bar_pane_cp08

0x7435,	// (0x000167f0) main_cset_text2_pane_t1_ParamLimits

0x7435,	// (0x000167f0) main_cset_text2_pane_t1

0x73c8,	// (0x00016783) listscroll_gen_pane_cp06_t1_ParamLimits

0x73c8,	// (0x00016783) listscroll_gen_pane_cp06_t1

0x95a6,	// (0x00018961) main_cam6_set_pane

0xc58c,	// (0x0001b947) bg_tb_trans_pane_cp06_ParamLimits

0xcfa8,	// (0x0001c363) cam4_indicators_pane_g1_ParamLimits

0xcfb9,	// (0x0001c374) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0001ecb8) cam4_indicators_pane_g_ParamLimits

0xcfd1,	// (0x0001c38c) cam4_indicators_pane_t1_ParamLimits

0x9607,	// (0x000189c2) bg_tb_trans_pane_cp07_ParamLimits

0xcfff,	// (0x0001c3ba) vid4_indicators_pane_g1_ParamLimits

0xd015,	// (0x0001c3d0) vid4_indicators_pane_g2_ParamLimits

0xd029,	// (0x0001c3e4) vid4_indicators_pane_g3_ParamLimits

0xd03c,	// (0x0001c3f7) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0001ecca) vid4_indicators_pane_g_ParamLimits

0xd05a,	// (0x0001c415) vid4_indicators_pane_t1_ParamLimits

0x6f36,	// (0x000162f1) vid4_progress_pane_g1_ParamLimits

0x6f48,	// (0x00016303) vid4_progress_pane_g2_ParamLimits

0xabc6,	// (0x00019f81) vid4_progress_pane_g3_ParamLimits

0xd707,	// (0x0001cac2) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0001ee7b) vid4_progress_pane_g_ParamLimits

0xd725,	// (0x0001cae0) vid4_progress_pane_t1_ParamLimits

0xd73a,	// (0x0001caf5) vid4_progress_pane_t2_ParamLimits

0xd750,	// (0x0001cb0b) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0001ee86) vid4_progress_pane_t_ParamLimits

0xd765,	// (0x0001cb20) wait_bar_pane_cp07_ParamLimits

0x7453,	// (0x0001680e) main_cam6_set_pane_g2_ParamLimits

0x7453,	// (0x0001680e) main_cam6_set_pane_g2

0x7479,	// (0x00016834) main_cset6_listscroll_pane_ParamLimits

0x7479,	// (0x00016834) main_cset6_listscroll_pane

0x7497,	// (0x00016852) main_cset6_slider_pane_ParamLimits

0x7497,	// (0x00016852) main_cset6_slider_pane

0x74ad,	// (0x00016868) main_cset6_text2_pane_ParamLimits

0x74ad,	// (0x00016868) main_cset6_text2_pane

0xdb09,	// (0x0001cec4) main_cset6_text_pane

0xdb11,	// (0x0001cecc) main_cset_list_pane_copy1_ParamLimits

0xdb11,	// (0x0001cecc) main_cset_list_pane_copy1

0xdb21,	// (0x0001cedc) scroll_pane_cp028_copy1

0x74bb,	// (0x00016876) cset_list_set_pane_copy1

0x74cf,	// (0x0001688a) aid_position_infowindow_above_copy1

0x74d7,	// (0x00016892) aid_position_infowindow_below_copy1

0x74df,	// (0x0001689a) cset_list_set_pane_g1_copy1

0x74e7,	// (0x000168a2) cset_list_set_pane_g3_copy1_ParamLimits

0x74e7,	// (0x000168a2) cset_list_set_pane_g3_copy1

0x74f6,	// (0x000168b1) cset_list_set_pane_t1_copy1_ParamLimits

0x74f6,	// (0x000168b1) cset_list_set_pane_t1_copy1

0x9607,	// (0x000189c2) list_highlight_pane_cp021_copy1_ParamLimits

0x9607,	// (0x000189c2) list_highlight_pane_cp021_copy1

0xdb2a,	// (0x0001cee5) cset6_slider_pane_ParamLimits

0xdb2a,	// (0x0001cee5) cset6_slider_pane

0xdb56,	// (0x0001cf11) main_cset6_slider_pane_g1_ParamLimits

0xdb56,	// (0x0001cf11) main_cset6_slider_pane_g1

0x750b,	// (0x000168c6) main_cset6_slider_pane_g2_ParamLimits

0x750b,	// (0x000168c6) main_cset6_slider_pane_g2

0xdb7e,	// (0x0001cf39) main_cset6_slider_pane_g3_ParamLimits

0xdb7e,	// (0x0001cf39) main_cset6_slider_pane_g3

0x7533,	// (0x000168ee) main_cset6_slider_pane_g4_ParamLimits

0x7533,	// (0x000168ee) main_cset6_slider_pane_g4

0x753f,	// (0x000168fa) main_cset6_slider_pane_g5_ParamLimits

0x753f,	// (0x000168fa) main_cset6_slider_pane_g5

0xd212,	// (0x0001c5cd) main_cset6_slider_pane_g7_ParamLimits

0xd212,	// (0x0001c5cd) main_cset6_slider_pane_g7

0xd21e,	// (0x0001c5d9) main_cset6_slider_pane_g8_ParamLimits

0xd21e,	// (0x0001c5d9) main_cset6_slider_pane_g8

0x6505,	// (0x000158c0) main_cset6_slider_pane_g9_ParamLimits

0x6505,	// (0x000158c0) main_cset6_slider_pane_g9

0x6511,	// (0x000158cc) main_cset6_slider_pane_g10_ParamLimits

0x6511,	// (0x000158cc) main_cset6_slider_pane_g10

0x651d,	// (0x000158d8) main_cset6_slider_pane_g11_ParamLimits

0x651d,	// (0x000158d8) main_cset6_slider_pane_g11

0x6529,	// (0x000158e4) main_cset6_slider_pane_g12_ParamLimits

0x6529,	// (0x000158e4) main_cset6_slider_pane_g12

0x6535,	// (0x000158f0) main_cset6_slider_pane_g13_ParamLimits

0x6535,	// (0x000158f0) main_cset6_slider_pane_g13

0x6541,	// (0x000158fc) main_cset6_slider_pane_g14_ParamLimits

0x6541,	// (0x000158fc) main_cset6_slider_pane_g14

0x754d,	// (0x00016908) main_cset6_slider_pane_g15_ParamLimits

0x754d,	// (0x00016908) main_cset6_slider_pane_g15

0x6565,	// (0x00015920) main_cset6_slider_pane_g16_ParamLimits

0x6565,	// (0x00015920) main_cset6_slider_pane_g16

0x6573,	// (0x0001592e) main_cset6_slider_pane_g17_ParamLimits

0x6573,	// (0x0001592e) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0001ef53) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0001ef53) main_cset6_slider_pane_g

0xdb8a,	// (0x0001cf45) main_cset6_slider_pane_t1_ParamLimits

0xdb8a,	// (0x0001cf45) main_cset6_slider_pane_t1

0x757d,	// (0x00016938) main_cset6_slider_pane_t2_ParamLimits

0x757d,	// (0x00016938) main_cset6_slider_pane_t2

0x75a8,	// (0x00016963) main_cset6_slider_pane_t3_ParamLimits

0x75a8,	// (0x00016963) main_cset6_slider_pane_t3

0x75d3,	// (0x0001698e) main_cset6_slider_pane_t4_ParamLimits

0x75d3,	// (0x0001698e) main_cset6_slider_pane_t4

0x75fe,	// (0x000169b9) main_cset6_slider_pane_t5_ParamLimits

0x75fe,	// (0x000169b9) main_cset6_slider_pane_t5

0xdbcb,	// (0x0001cf86) main_cset6_slider_pane_t7_ParamLimits

0xdbcb,	// (0x0001cf86) main_cset6_slider_pane_t7

0x762b,	// (0x000169e6) main_cset6_slider_pane_t8_ParamLimits

0x762b,	// (0x000169e6) main_cset6_slider_pane_t8

0x764f,	// (0x00016a0a) main_cset6_slider_pane_t9_ParamLimits

0x764f,	// (0x00016a0a) main_cset6_slider_pane_t9

0x7673,	// (0x00016a2e) main_cset6_slider_pane_t10_ParamLimits

0x7673,	// (0x00016a2e) main_cset6_slider_pane_t10

0x7697,	// (0x00016a52) main_cset6_slider_pane_t11_ParamLimits

0x7697,	// (0x00016a52) main_cset6_slider_pane_t11

0xdc01,	// (0x0001cfbc) main_cset6_slider_pane_t14_ParamLimits

0xdc01,	// (0x0001cfbc) main_cset6_slider_pane_t14

0xdc3a,	// (0x0001cff5) main_cset6_slider_pane_t15_ParamLimits

0xdc3a,	// (0x0001cff5) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0001ef78) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0001ef78) main_cset6_slider_pane_t

0xd32d,	// (0x0001c6e8) cset_slider_pane_g1_copy1

0xd336,	// (0x0001c6f1) cset_slider_pane_g2_copy1

0xd33f,	// (0x0001c6fa) cset_slider_pane_g3_copy1

0x95a6,	// (0x00018961) bg_popup_sub_pane_cp011_copy1

0xdc73,	// (0x0001d02e) main_cset_text_pane_g1_copy1

0xd422,	// (0x0001c7dd) main_cset_text_pane_t1_copy1

0xd430,	// (0x0001c7eb) main_cset_text_pane_t2_copy1

0xd43e,	// (0x0001c7f9) main_cset_text_pane_t3_copy1

0xd44c,	// (0x0001c807) main_cset_text_pane_t4_copy1

0xd45a,	// (0x0001c815) main_cset_text_pane_t5_copy1

0xdc7b,	// (0x0001d036) main_cset_text_pane_t6_copy1

0xdc89,	// (0x0001d044) main_cset_text_pane_t7_copy1

0x7435,	// (0x000167f0) main_cset_text2_pane_t1_copy1

0x9607,	// (0x000189c2) main_ncimui_pane

0x39f6,	// (0x00012db1) popup_query_ncimui_window_ParamLimits

0x39f6,	// (0x00012db1) popup_query_ncimui_window

0xc5f1,	// (0x0001b9ac) field_cale_ev2_pane_g4_ParamLimits

0xc5f1,	// (0x0001b9ac) field_cale_ev2_pane_g4

0x5665,	// (0x00014a20) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5665,	// (0x00014a20) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0001ec56) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0001ec56) cell_video_dialer_keypad_pane_g

0x567d,	// (0x00014a38) cell_video_dialer_keypad_pane_t1

0x95a6,	// (0x00018961) bg_popup_window_pane_cp012

0xa756,	// (0x00019b11) heading_pane_cp06

0xdcb5,	// (0x0001d070) ncim_query_content_pane

0x95a6,	// (0x00018961) bg_popup_heading_pane_cp01

0xdcbd,	// (0x0001d078) ncim_heading_pane_t1

0xdccb,	// (0x0001d086) ncim_indicator_popup_pane

0xdcdd,	// (0x0001d098) ncim_query_button_pane

0xdcf3,	// (0x0001d0ae) ncim_query_content_pane_t1

0xdd05,	// (0x0001d0c0) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0001efbc) ncim_query_content_pane_t

0xdd3f,	// (0x0001d0fa) ncim_query_list_pane

0xdd51,	// (0x0001d10c) ncim_query_popup_pane

0xdccb,	// (0x0001d086) ncim_indicator_popup_pane_ParamLimits

0x78b3,	// (0x00016c6e) ncim_query_content_pane_g1_ParamLimits

0x78b3,	// (0x00016c6e) ncim_query_content_pane_g1

0xdcf3,	// (0x0001d0ae) ncim_query_content_pane_t1_ParamLimits

0xdd05,	// (0x0001d0c0) ncim_query_content_pane_t2_ParamLimits

0x78bf,	// (0x00016c7a) ncim_query_content_pane_t3_ParamLimits

0x78bf,	// (0x00016c7a) ncim_query_content_pane_t3

0x78e7,	// (0x00016ca2) ncim_query_content_pane_t4_ParamLimits

0x78e7,	// (0x00016ca2) ncim_query_content_pane_t4

0x790f,	// (0x00016cca) ncim_query_content_pane_t5_ParamLimits

0x790f,	// (0x00016cca) ncim_query_content_pane_t5

0xdd17,	// (0x0001d0d2) ncim_query_content_pane_t6_ParamLimits

0xdd17,	// (0x0001d0d2) ncim_query_content_pane_t6

0xfc01,	// (0x0001efbc) ncim_query_content_pane_t_ParamLimits

0xdd3f,	// (0x0001d0fa) ncim_query_list_pane_ParamLimits

0xdd51,	// (0x0001d10c) ncim_query_popup_pane_ParamLimits

0xdd65,	// (0x0001d120) wait_bar_pane_cp04

0x95a6,	// (0x00018961) input_focus_pane_cp011

0xdd6d,	// (0x0001d128) ncim_query_popup_pane_t1

0xdd7b,	// (0x0001d136) ncim_list_query_list_pane_ParamLimits

0xdd7b,	// (0x0001d136) ncim_list_query_list_pane

0x95a6,	// (0x00018961) bg_button_pane_cp027

0xdd8e,	// (0x0001d149) ncim_query_button_pane_g1

0x95a6,	// (0x00018961) list_highlight_pane_cp012

0xdd98,	// (0x0001d153) ncim_list_query_list_pane_g1

0xdda0,	// (0x0001d15b) ncim_list_query_list_pane_t1

0xcfc5,	// (0x0001c380) cam4_indicators_pane_g3_ParamLimits

0xcfc5,	// (0x0001c380) cam4_indicators_pane_g3

0xd048,	// (0x0001c403) vid4_indicators_pane_g5_ParamLimits

0xd048,	// (0x0001c403) vid4_indicators_pane_g5

0xd716,	// (0x0001cad1) vid4_progress_pane_g5_ParamLimits

0xd716,	// (0x0001cad1) vid4_progress_pane_g5

0x77a1,	// (0x00016b5c) main_ncimui_pane_g1

0x7807,	// (0x00016bc2) ncimui_group_query_pane_ParamLimits

0x7807,	// (0x00016bc2) ncimui_group_query_pane

0x784f,	// (0x00016c0a) ncimui_list_pane_ParamLimits

0x784f,	// (0x00016c0a) ncimui_list_pane

0x7876,	// (0x00016c31) ncimui_text_pane_ParamLimits

0x7876,	// (0x00016c31) ncimui_text_pane

0x7937,	// (0x00016cf2) ncimui_text_pane_t1_ParamLimits

0x7937,	// (0x00016cf2) ncimui_text_pane_t1

0xddae,	// (0x0001d169) ncimui_list_single_graphic_pane_ParamLimits

0xddae,	// (0x0001d169) ncimui_list_single_graphic_pane

0x7955,	// (0x00016d10) ncimui_query_pane_ParamLimits

0x7955,	// (0x00016d10) ncimui_query_pane

0x95a6,	// (0x00018961) list_highlight_pane_cp013

0xddbe,	// (0x0001d179) ncim_list_query_list_pane_t1_copy1

0xdd98,	// (0x0001d153) ncim_list_single_graphic_pane_g1

0xddcc,	// (0x0001d187) ncim_query_button_pane_cp01

0xddd8,	// (0x0001d193) ncim_query_entry_pane_ParamLimits

0xddd8,	// (0x0001d193) ncim_query_entry_pane

0xddeb,	// (0x0001d1a6) ncimui_query_pane_g1

0xddf7,	// (0x0001d1b2) ncimui_query_pane_t1_ParamLimits

0xddf7,	// (0x0001d1b2) ncimui_query_pane_t1

0x9607,	// (0x000189c2) input_focus_pane_cp012

0xde10,	// (0x0001d1cb) ncim_query_entry_pane_t1

0x9d6a,	// (0x00019125) main_im_pane_ParamLimits

0x9607,	// (0x000189c2) main_mobtv_pane_ParamLimits

0x9607,	// (0x000189c2) main_mobtv_pane

0x7565,	// (0x00016920) main_cset6_slider_pane_g18_ParamLimits

0x7565,	// (0x00016920) main_cset6_slider_pane_g18

0x7571,	// (0x0001692c) main_cset6_slider_pane_g19_ParamLimits

0x7571,	// (0x0001692c) main_cset6_slider_pane_g19

0xd28d,	// (0x0001c648) bg_main_mobtv_pane_ParamLimits

0xd28d,	// (0x0001c648) bg_main_mobtv_pane

0x7968,	// (0x00016d23) main_mobtv_info_pane

0x7973,	// (0x00016d2e) main_mobtv_loading_pane_ParamLimits

0x7973,	// (0x00016d2e) main_mobtv_loading_pane

0xde22,	// (0x0001d1dd) main_mobtv_pg_channel_list_pane

0xde2c,	// (0x0001d1e7) main_mobtv_pg_hdr_pane

0x7980,	// (0x00016d3b) main_mobtv_programe_curr_pane_ParamLimits

0x7980,	// (0x00016d3b) main_mobtv_programe_curr_pane

0x798d,	// (0x00016d48) main_mobtv_programe_next_pane_ParamLimits

0x798d,	// (0x00016d48) main_mobtv_programe_next_pane

0xde35,	// (0x0001d1f0) popup_mobtv_noti_window

0xc35c,	// (0x0001b717) main_tv_pg_hdr_pane_g1

0xde3f,	// (0x0001d1fa) main_tv_pg_hdr_pane_g2

0xde47,	// (0x0001d202) main_tv_pg_hdr_pane_g3

0xde4f,	// (0x0001d20a) main_tv_pg_hdr_pane_g4

0xde57,	// (0x0001d212) main_tv_pg_hdr_pane_g5

0xde61,	// (0x0001d21c) main_tv_pg_hdr_pane_g6

0xde6b,	// (0x0001d226) main_tv_pg_hdr_pane_g7

0xde75,	// (0x0001d230) main_tv_pg_hdr_pane_g8

0xde7f,	// (0x0001d23a) main_tv_pg_hdr_pane_g9

0xde89,	// (0x0001d244) main_tv_pg_hdr_pane_g10

0xde93,	// (0x0001d24e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0001efc9) main_tv_pg_hdr_pane_g

0xde9d,	// (0x0001d258) main_tv_pg_hdr_pane_t1

0xdeab,	// (0x0001d266) main_tv_pg_hdr_pane_t2

0xdeb9,	// (0x0001d274) main_tv_pg_hdr_pane_t3

0xdec9,	// (0x0001d284) main_tv_pg_hdr_pane_t4

0xded9,	// (0x0001d294) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0001efe0) main_tv_pg_hdr_pane_t

0xdee9,	// (0x0001d2a4) single_mobtv_pg_channel_pane_ParamLimits

0xdee9,	// (0x0001d2a4) single_mobtv_pg_channel_pane

0xdefb,	// (0x0001d2b6) single_mobtv_pg_channel_table_pane

0xdf04,	// (0x0001d2bf) single_mobtv_pg_channel_thumb_pane

0xdf0d,	// (0x0001d2c8) single_tv_pg_channel_pane_g1

0xdf16,	// (0x0001d2d1) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0001efeb) single_tv_pg_channel_pane_g

0xc58c,	// (0x0001b947) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc58c,	// (0x0001b947) bg_single_mobtv_pg_channel_thumb_pane

0xdf1f,	// (0x0001d2da) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf1f,	// (0x0001d2da) single_mobtv_pg_channel_thumb_pane_g1

0xdf2d,	// (0x0001d2e8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf2d,	// (0x0001d2e8) single_mobtv_pg_channel_thumb_pane_g2

0xdf39,	// (0x0001d2f4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf39,	// (0x0001d2f4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0001eff0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0001eff0) single_mobtv_pg_channel_thumb_pane_g

0xdf45,	// (0x0001d300) single_mobtv_pg_channel_thumb_pane_t1

0xdf53,	// (0x0001d30e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0001eff7) single_mobtv_pg_channel_thumb_pane_t

0xc35c,	// (0x0001b717) bg_single_mobtv_pg_channel_table_pane_g1

0xc35c,	// (0x0001b717) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0001eaa2) bg_single_mobtv_pg_channel_table_pane_g

0xdf61,	// (0x0001d31c) single_mobtv_pg_channel_table_pane_t1

0xdf6f,	// (0x0001d32a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0001effc) single_mobtv_pg_channel_table_pane_t

0x79a2,	// (0x00016d5d) main_mobtv_info_pane_g1_ParamLimits

0x79a2,	// (0x00016d5d) main_mobtv_info_pane_g1

0x79c0,	// (0x00016d7b) main_mobtv_info_pane_t1_ParamLimits

0x79c0,	// (0x00016d7b) main_mobtv_info_pane_t1

0x7a38,	// (0x00016df3) main_mobtv_info_pane_t2_ParamLimits

0x7a38,	// (0x00016df3) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0001f006) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0001f006) main_mobtv_info_pane_t

0x7ac7,	// (0x00016e82) wait_bar_pane_cp05

0x7ad9,	// (0x00016e94) main_mobtv_loading_pane_g1_ParamLimits

0x7ad9,	// (0x00016e94) main_mobtv_loading_pane_g1

0x7aea,	// (0x00016ea5) main_mobtv_loading_pane_g2_ParamLimits

0x7aea,	// (0x00016ea5) main_mobtv_loading_pane_g2

0x7af6,	// (0x00016eb1) main_mobtv_loading_pane_g3_ParamLimits

0x7af6,	// (0x00016eb1) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0001f00d) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0001f00d) main_mobtv_loading_pane_g

0xdf7d,	// (0x0001d338) main_mobtv_loading_pane_t1_ParamLimits

0xdf7d,	// (0x0001d338) main_mobtv_loading_pane_t1

0xdf95,	// (0x0001d350) main_mobtv_loading_pane_t2_ParamLimits

0xdf95,	// (0x0001d350) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0001f014) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0001f014) main_mobtv_loading_pane_t

0x7b09,	// (0x00016ec4) wait_bar_pane_cp06_ParamLimits

0x7b09,	// (0x00016ec4) wait_bar_pane_cp06

0xdfb9,	// (0x0001d374) main_mobtv_programe_curr_pane_t1

0xdfc7,	// (0x0001d382) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0001f019) main_mobtv_programe_curr_pane_t

0xdfd5,	// (0x0001d390) main_mobtv_programe_next_pane_t1

0xdfe3,	// (0x0001d39e) main_mobtv_programe_next_pane_t2

0xdff1,	// (0x0001d3ac) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0001f01e) main_mobtv_programe_next_pane_t

0x95a6,	// (0x00018961) bg_popup_mobtv_noti_window_pane

0xdfff,	// (0x0001d3ba) popup_mobtv_noti_window_g1

0xe007,	// (0x0001d3c2) popup_mobtv_noti_window_t1

0xe015,	// (0x0001d3d0) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0001f025) popup_mobtv_noti_window_t

0xc35c,	// (0x0001b717) bg_popup_mobtv_noti_window_pane_g1

0x95a6,	// (0x00018961) sc_clock_pane

0x95a6,	// (0x00018961) main_fs_bigclock_pane

0x71a4,	// (0x0001655f) blid2_tripm_pane_t4_ParamLimits

0x71a4,	// (0x0001655f) blid2_tripm_pane_t4

0x7b18,	// (0x00016ed3) sc_clock_pane_g1_ParamLimits

0x7b18,	// (0x00016ed3) sc_clock_pane_g1

0x7b2a,	// (0x00016ee5) sc_clock_pane_t1_ParamLimits

0x7b2a,	// (0x00016ee5) sc_clock_pane_t1

0x7b4e,	// (0x00016f09) sc_clock_pane_t2_ParamLimits

0x7b4e,	// (0x00016f09) sc_clock_pane_t2

0x7b66,	// (0x00016f21) sc_clock_pane_t3_ParamLimits

0x7b66,	// (0x00016f21) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0001f02a) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0001f02a) sc_clock_pane_t

0x8aa2,	// (0x00017e5d) main_fs_bigclock_indicator_pane_ParamLimits

0x8aa2,	// (0x00017e5d) main_fs_bigclock_indicator_pane

0xc55c,	// (0x0001b917) main_fs_bigclock_pane_g1_ParamLimits

0xc55c,	// (0x0001b917) main_fs_bigclock_pane_g1

0x8aae,	// (0x00017e69) main_fs_bigclock_pane_t1_ParamLimits

0x8aae,	// (0x00017e69) main_fs_bigclock_pane_t1

0x8ac0,	// (0x00017e7b) main_fs_bigclock_pane_t2_ParamLimits

0x8ac0,	// (0x00017e7b) main_fs_bigclock_pane_t2

0x8ad4,	// (0x00017e8f) main_fs_bigclock_pane_t3_ParamLimits

0x8ad4,	// (0x00017e8f) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f229) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f229) main_fs_bigclock_pane_t

0xec00,	// (0x0001dfbb) main_fs_bigclock_indicator_pane_g1

0xdce5,	// (0x0001d0a0) ncim_query_content_pane_g2_ParamLimits

0xdce5,	// (0x0001d0a0) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0001efb7) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0001efb7) ncim_query_content_pane_g

0x7b7d,	// (0x00016f38) sc_clock_pane_t4_ParamLimits

0x7b7d,	// (0x00016f38) sc_clock_pane_t4

0x9607,	// (0x000189c2) main_radioblah_pane

0xcf06,	// (0x0001c2c1) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf06,	// (0x0001c2c1) cell_call4_button_pane_t1_copy1

0x77b9,	// (0x00016b74) main_ncimui_pane_t1_ParamLimits

0x77b9,	// (0x00016b74) main_ncimui_pane_t1

0x77d3,	// (0x00016b8e) main_ncimui_pane_t2_ParamLimits

0x77d3,	// (0x00016b8e) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0001efb0) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0001efb0) main_ncimui_pane_t

0xe161,	// (0x0001d51c) main_radioblah_anim_pane_ParamLimits

0xe161,	// (0x0001d51c) main_radioblah_anim_pane

0xe172,	// (0x0001d52d) main_radioblah_info_pane_ParamLimits

0xe172,	// (0x0001d52d) main_radioblah_info_pane

0xe186,	// (0x0001d541) main_radioblah_pane_t1_ParamLimits

0xe186,	// (0x0001d541) main_radioblah_pane_t1

0xe1a2,	// (0x0001d55d) main_radioblah_pane_t2_ParamLimits

0xe1a2,	// (0x0001d55d) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0001f04b) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0001f04b) main_radioblah_pane_t

0x7c2d,	// (0x00016fe8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7c2d,	// (0x00016fe8) main_radioblah_rocker_ctrl_pane

0xe1ea,	// (0x0001d5a5) main_radioblah_info_pane_t1_ParamLimits

0xe1ea,	// (0x0001d5a5) main_radioblah_info_pane_t1

0x7c85,	// (0x00017040) main_radioblah_info_pane_t2_ParamLimits

0x7c85,	// (0x00017040) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0001f054) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0001f054) main_radioblah_info_pane_t

0xc35c,	// (0x0001b717) main_radioblah_rocker_ctrl_pane_g1

0x7d35,	// (0x000170f0) main_radioblah_rocker_ctrl_pane_g2

0x7d3d,	// (0x000170f8) main_radioblah_rocker_ctrl_pane_g3

0x7d45,	// (0x00017100) main_radioblah_rocker_ctrl_pane_g4

0x7d4d,	// (0x00017108) main_radioblah_rocker_ctrl_pane_g5

0x7d55,	// (0x00017110) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0001f05d) main_radioblah_rocker_ctrl_pane_g

0x7435,	// (0x000167f0) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf96,	// (0x0001c351) cam4_image_uncrop_qvga_pane

0xcfeb,	// (0x0001c3a6) vid4_image_uncrop_qcif_pane

0xd920,	// (0x0001ccdb) cam6_image_uncrop_qvga_pane_ParamLimits

0xd920,	// (0x0001ccdb) cam6_image_uncrop_qvga_pane

0xd9e8,	// (0x0001cda3) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9e8,	// (0x0001cda3) vid6_image_uncrop_qcif_pane

0x95a6,	// (0x00018961) bg_popup_preview_window_pane_cp03

0xdc97,	// (0x0001d052) list_cset_text2_pane

0xdc9f,	// (0x0001d05a) main_cset6_text2_pane_g1

0xdca7,	// (0x0001d062) main_cset6_text2_pane_t1

0x7d5d,	// (0x00017118) list_cset_text2_pane_t1_ParamLimits

0x7d5d,	// (0x00017118) list_cset_text2_pane_t1

0x9607,	// (0x000189c2) main_radioblah_pane_ParamLimits

0x7ab3,	// (0x00016e6e) main_mobtv_info_pane_t3_ParamLimits

0x7ab3,	// (0x00016e6e) main_mobtv_info_pane_t3

0x7c1b,	// (0x00016fd6) main_radioblah_pane_g1

0x7c55,	// (0x00017010) main_radioblah_info_pane_g1

0x7cda,	// (0x00017095) main_radioblah_info_pane_t3_ParamLimits

0x7cda,	// (0x00017095) main_radioblah_info_pane_t3

0x2210,	// (0x000115cb) highlight_cell_cale_month_pane_ParamLimits

0x2210,	// (0x000115cb) highlight_cell_cale_month_pane

0x95a6,	// (0x00018961) main_phob_fisheye_pane

0xc674,	// (0x0001ba2f) scroll_pane_cp0031_ParamLimits

0xc674,	// (0x0001ba2f) scroll_pane_cp0031

0xdafa,	// (0x0001ceb5) wait_bar_pane_cp08_ParamLimits

0x74bb,	// (0x00016876) cset_list_set_pane_copy1_ParamLimits

0xe224,	// (0x0001d5df) highlight_cell_cale_month_pane_g1

0x7d76,	// (0x00017131) highlight_cell_cale_month_pane_t1

0xd6f6,	// (0x0001cab1) list_gen_pane_cp01

0xd1fd,	// (0x0001c5b8) scroll_pane_01

0x7d84,	// (0x0001713f) list_single_double_fisheye_pane

0x7d8d,	// (0x00017148) list_double_fisheye_pane_g1_ParamLimits

0x7d8d,	// (0x00017148) list_double_fisheye_pane_g1

0x7d99,	// (0x00017154) list_double_fisheye_pane_g2_ParamLimits

0x7d99,	// (0x00017154) list_double_fisheye_pane_g2

0x7dad,	// (0x00017168) list_double_fisheye_pane_g3_ParamLimits

0x7dad,	// (0x00017168) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0001f06a) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0001f06a) list_double_fisheye_pane_g

0x7dd6,	// (0x00017191) list_double_fisheye_pane_t1_ParamLimits

0x7dd6,	// (0x00017191) list_double_fisheye_pane_t1

0x7df1,	// (0x000171ac) list_double_fisheye_pane_t2_ParamLimits

0x7df1,	// (0x000171ac) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0001f075) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0001f075) list_double_fisheye_pane_t

0x95a6,	// (0x00018961) main_call5_pane

0x7ba8,	// (0x00016f63) sc_swipe_pane_ParamLimits

0x7ba8,	// (0x00016f63) sc_swipe_pane

0x7e26,	// (0x000171e1) call5_image_pane_ParamLimits

0x7e26,	// (0x000171e1) call5_image_pane

0x7e43,	// (0x000171fe) call5_swipe_1_pane_ParamLimits

0x7e43,	// (0x000171fe) call5_swipe_1_pane

0x7e56,	// (0x00017211) call5_swipe_2_pane_ParamLimits

0x7e56,	// (0x00017211) call5_swipe_2_pane

0x7e83,	// (0x0001723e) popup_call5_audio_first_window_ParamLimits

0x7e83,	// (0x0001723e) popup_call5_audio_first_window

0xc58c,	// (0x0001b947) call5_swipe_1_pane_g1_ParamLimits

0xc58c,	// (0x0001b947) call5_swipe_1_pane_g1

0xe22c,	// (0x0001d5e7) call5_swipe_1_pane_g2_ParamLimits

0xe22c,	// (0x0001d5e7) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0001f07a) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0001f07a) call5_swipe_1_pane_g

0xe238,	// (0x0001d5f3) call5_swipe_1_pane_t1_ParamLimits

0xe238,	// (0x0001d5f3) call5_swipe_1_pane_t1

0xc58c,	// (0x0001b947) call5_swipe_2_pane_g1_ParamLimits

0xc58c,	// (0x0001b947) call5_swipe_2_pane_g1

0xe24d,	// (0x0001d608) call5_swipe_2_pane_g2_ParamLimits

0xe24d,	// (0x0001d608) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0001f07f) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0001f07f) call5_swipe_2_pane_g

0xe259,	// (0x0001d614) call5_swipe_2_pane_t1_ParamLimits

0xe259,	// (0x0001d614) call5_swipe_2_pane_t1

0xe26e,	// (0x0001d629) sc_swipe_pane_g1_ParamLimits

0xe26e,	// (0x0001d629) sc_swipe_pane_g1

0xe27b,	// (0x0001d636) sc_swipe_pane_g2_ParamLimits

0xe27b,	// (0x0001d636) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0001f084) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0001f084) sc_swipe_pane_g

0xe287,	// (0x0001d642) sc_swipe_pane_t1_ParamLimits

0xe287,	// (0x0001d642) sc_swipe_pane_t1

0x95a6,	// (0x00018961) main_cmail_launcher_pane

0x7e98,	// (0x00017253) aid_size_cell_cmail_l_ParamLimits

0x7e98,	// (0x00017253) aid_size_cell_cmail_l

0x7eb2,	// (0x0001726d) grid_cmail_l_pane_ParamLimits

0x7eb2,	// (0x0001726d) grid_cmail_l_pane

0x7ecd,	// (0x00017288) cell_cmail_l_pane_ParamLimits

0x7ecd,	// (0x00017288) cell_cmail_l_pane

0x7ef5,	// (0x000172b0) cell_cmail_l_pane_g1_ParamLimits

0x7ef5,	// (0x000172b0) cell_cmail_l_pane_g1

0x7f01,	// (0x000172bc) cell_cmail_l_pane_t1_ParamLimits

0x7f01,	// (0x000172bc) cell_cmail_l_pane_t1

0xe29c,	// (0x0001d657) cell_cmail_l_pane_t2_ParamLimits

0xe29c,	// (0x0001d657) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0001f089) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0001f089) cell_cmail_l_pane_t

0x9607,	// (0x000189c2) grid_highlight_pane_cp018_ParamLimits

0x9607,	// (0x000189c2) grid_highlight_pane_cp018

0xfe92,	// (0x0000f24d) main2_pane_ParamLimits

0xfe92,	// (0x0000f24d) main2_pane

0x9e43,	// (0x000191fe) popup_sp_fs_action_menu_bg_pane_g1

0x9e4b,	// (0x00019206) popup_sp_fs_action_menu_bg_pane_g2

0x9e53,	// (0x0001920e) popup_sp_fs_action_menu_bg_pane_g3

0x9e5b,	// (0x00019216) popup_sp_fs_action_menu_bg_pane_g4

0x9e63,	// (0x0001921e) popup_sp_fs_action_menu_bg_pane_g5

0x9e6b,	// (0x00019226) popup_sp_fs_action_menu_bg_pane_g6

0x9e73,	// (0x0001922e) popup_sp_fs_action_menu_bg_pane_g7

0x9e7b,	// (0x00019236) popup_sp_fs_action_menu_bg_pane_g8

0x9e83,	// (0x0001923e) popup_sp_fs_action_menu_bg_pane_g9

0x9e8b,	// (0x00019246) popup_sp_fs_action_menu_bg_pane_g10

0x9e8b,	// (0x00019246) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0001e54e) popup_sp_fs_action_menu_bg_pane_g

0x1031,	// (0x000103ec) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t3_g3_g1

0x103d,	// (0x000103f8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x2_t3_g3_g2

0x1049,	// (0x00010404) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0001e5fe) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0001e5fe) list_medium_line_x2_t3_g3_g

0x1055,	// (0x00010410) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1055,	// (0x00010410) list_medium_line_x2_t3_g3_t1

0x106a,	// (0x00010425) list_medium_line_x2_t3_g3_t2_ParamLimits

0x106a,	// (0x00010425) list_medium_line_x2_t3_g3_t2

0x107e,	// (0x00010439) list_medium_line_x2_t3_g3_t3_ParamLimits

0x107e,	// (0x00010439) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0001e605) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0001e605) list_medium_line_x2_t3_g3_t

0x1031,	// (0x000103ec) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t3_g2_g1

0x1049,	// (0x00010404) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0001e60c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0001e60c) list_medium_line_x2_t3_g2_g

0x1093,	// (0x0001044e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1093,	// (0x0001044e) list_medium_line_x2_t3_g2_t1

0x10a9,	// (0x00010464) list_medium_line_x2_t3_g2_t2_ParamLimits

0x10a9,	// (0x00010464) list_medium_line_x2_t3_g2_t2

0x10bb,	// (0x00010476) list_medium_line_x2_t3_g2_t3_ParamLimits

0x10bb,	// (0x00010476) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0001e611) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0001e611) list_medium_line_x2_t3_g2_t

0x1031,	// (0x000103ec) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t4_g4_g1

0x10d9,	// (0x00010494) list_medium_line_x2_t4_g4_g2_ParamLimits

0x10d9,	// (0x00010494) list_medium_line_x2_t4_g4_g2

0x103d,	// (0x000103f8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x2_t4_g4_g3

0x10e5,	// (0x000104a0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x10e5,	// (0x000104a0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0001e618) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0001e618) list_medium_line_x2_t4_g4_g

0x10f1,	// (0x000104ac) list_medium_line_x2_t4_g4_t1_ParamLimits

0x10f1,	// (0x000104ac) list_medium_line_x2_t4_g4_t1

0x1108,	// (0x000104c3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1108,	// (0x000104c3) list_medium_line_x2_t4_g4_t2

0x111d,	// (0x000104d8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x111d,	// (0x000104d8) list_medium_line_x2_t4_g4_t3

0x112f,	// (0x000104ea) list_medium_line_x2_t4_g4_t4_ParamLimits

0x112f,	// (0x000104ea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0001e621) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0001e621) list_medium_line_x2_t4_g4_t

0x1031,	// (0x000103ec) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t2_g4_g1

0x10d9,	// (0x00010494) list_medium_line_x2_t2_g4_g2_ParamLimits

0x10d9,	// (0x00010494) list_medium_line_x2_t2_g4_g2

0x103d,	// (0x000103f8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x2_t2_g4_g3

0x1049,	// (0x00010404) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0001e688) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0001e688) list_medium_line_x2_t2_g4_g

0x2236,	// (0x000115f1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2236,	// (0x000115f1) list_medium_line_x2_t2_g4_t1

0x107e,	// (0x00010439) list_medium_line_x2_t2_g4_t2_ParamLimits

0x107e,	// (0x00010439) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0001e691) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0001e691) list_medium_line_x2_t2_g4_t

0x1031,	// (0x000103ec) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t2_g3_g1

0x103d,	// (0x000103f8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x2_t2_g3_g2

0x1049,	// (0x00010404) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0001e5fe) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0001e5fe) list_medium_line_x2_t2_g3_g

0x224b,	// (0x00011606) list_medium_line_x2_t2_g3_t1_ParamLimits

0x224b,	// (0x00011606) list_medium_line_x2_t2_g3_t1

0x107e,	// (0x00010439) list_medium_line_x2_t2_g3_t2_ParamLimits

0x107e,	// (0x00010439) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0001e696) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0001e696) list_medium_line_x2_t2_g3_t

0x23a3,	// (0x0001175e) main_sp_fs_list_pane_ParamLimits

0x23a3,	// (0x0001175e) main_sp_fs_list_pane

0x23af,	// (0x0001176a) sp_fs_scroll_pane_ParamLimits

0x23af,	// (0x0001176a) sp_fs_scroll_pane

0x23bb,	// (0x00011776) list_medium_line_x2_t3_t1

0x23cb,	// (0x00011786) list_medium_line_x2_t3_t2

0x23d9,	// (0x00011794) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0001e6e1) list_medium_line_x2_t3_t

0x23e7,	// (0x000117a2) list_medium_line_x3_t4_t1

0x23f7,	// (0x000117b2) list_medium_line_x3_t4_t2

0x2405,	// (0x000117c0) list_medium_line_x3_t4_t3

0x23d9,	// (0x00011794) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0001e6e8) list_medium_line_x3_t4_t

0x2413,	// (0x000117ce) list_medium_line_x4_t5_t1

0x2423,	// (0x000117de) list_medium_line_x4_t5_t2

0x2405,	// (0x000117c0) list_medium_line_x4_t5_t3

0x2431,	// (0x000117ec) list_medium_line_x4_t5_t4

0x23d9,	// (0x00011794) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0001e6f1) list_medium_line_x4_t5_t

0x1031,	// (0x000103ec) list_medium_line_t4_g4_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_t4_g4_g1

0x10e5,	// (0x000104a0) list_medium_line_t4_g4_g2_ParamLimits

0x10e5,	// (0x000104a0) list_medium_line_t4_g4_g2

0x243f,	// (0x000117fa) list_medium_line_t4_g4_g3_ParamLimits

0x243f,	// (0x000117fa) list_medium_line_t4_g4_g3

0x1049,	// (0x00010404) list_medium_line_t4_g4_g4_ParamLimits

0x1049,	// (0x00010404) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0001e6fc) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0001e6fc) list_medium_line_t4_g4_g

0x244b,	// (0x00011806) list_medium_line_t4_g4_t1_ParamLimits

0x244b,	// (0x00011806) list_medium_line_t4_g4_t1

0x2460,	// (0x0001181b) list_medium_line_t4_g4_t2_ParamLimits

0x2460,	// (0x0001181b) list_medium_line_t4_g4_t2

0x2476,	// (0x00011831) list_medium_line_t4_g4_t3_ParamLimits

0x2476,	// (0x00011831) list_medium_line_t4_g4_t3

0x107e,	// (0x00010439) list_medium_line_t4_g4_t4_ParamLimits

0x107e,	// (0x00010439) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0001e705) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0001e705) list_medium_line_t4_g4_t

0x2552,	// (0x0001190d) chi_dic_find_pane_g1

0x377c,	// (0x00012b37) main_tport_pane

0xd37b,	// (0x0001c736) list_medium_line_plain_t1

0x68f3,	// (0x00015cae) list_medium_line_t2_g2_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_t2_g2_g1

0xd3cd,	// (0x0001c788) list_medium_line_t2_g2_g2_ParamLimits

0xd3cd,	// (0x0001c788) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0001edc1) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0001edc1) list_medium_line_t2_g2_g

0x68ff,	// (0x00015cba) list_medium_line_t2_g2_t1_ParamLimits

0x68ff,	// (0x00015cba) list_medium_line_t2_g2_t1

0x6916,	// (0x00015cd1) list_medium_line_t2_g2_t2_ParamLimits

0x6916,	// (0x00015cd1) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0001edc6) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0001edc6) list_medium_line_t2_g2_t

0xd779,	// (0x0001cb34) aid_sp_fs_list_icon_a_sm

0xd781,	// (0x0001cb3c) aid_sp_fs_list_icon_d

0xd789,	// (0x0001cb44) aid_sp_fs_text_primary

0xd792,	// (0x0001cb4d) aid_sp_fs_text_secondary

0x6f5a,	// (0x00016315) list_medium_line

0x6f5a,	// (0x00016315) list_medium_line_g2

0x6f5a,	// (0x00016315) list_medium_line_g3

0x6f5a,	// (0x00016315) list_medium_line_plain

0x6f5a,	// (0x00016315) list_medium_line_plain_t2

0x6f5a,	// (0x00016315) list_medium_line_plain_t3

0x6f5a,	// (0x00016315) list_medium_line_right_icon

0x6f5a,	// (0x00016315) list_medium_line_right_iconx2

0x6f5a,	// (0x00016315) list_medium_line_t2

0x6f5a,	// (0x00016315) list_medium_line_t2_g2

0x6f5a,	// (0x00016315) list_medium_line_t2_g3

0x6f5a,	// (0x00016315) list_medium_line_t2_right_icon

0x6f5a,	// (0x00016315) list_medium_line_t2_right_iconx2

0x6f5a,	// (0x00016315) list_medium_line_t3

0x6f5a,	// (0x00016315) list_medium_line_t3_g2

0x6f5a,	// (0x00016315) list_medium_line_t3_g3

0x6f5a,	// (0x00016315) list_medium_line_t3_right_iconx2

0x6f63,	// (0x0001631e) list_medium_line_t4_g4

0x6f5a,	// (0x00016315) list_medium_line_x2

0x6f5a,	// (0x00016315) list_medium_line_x2_t2_g2

0x6f5a,	// (0x00016315) list_medium_line_x2_t2_g3

0x6f5a,	// (0x00016315) list_medium_line_x2_t2_g4

0x6f5a,	// (0x00016315) list_medium_line_x2_t3

0x6f5a,	// (0x00016315) list_medium_line_x2_t3_g2

0x6f5a,	// (0x00016315) list_medium_line_x2_t3_g3

0x6f5a,	// (0x00016315) list_medium_line_x2_t3_g4

0x6f5a,	// (0x00016315) list_medium_line_x2_t4_g2

0x6f5a,	// (0x00016315) list_medium_line_x2_t4_g4

0x6f6c,	// (0x00016327) list_medium_line_x3

0x6f6c,	// (0x00016327) list_medium_line_x3_t4

0x6f6c,	// (0x00016327) list_medium_line_x3_t4_g4

0x6f63,	// (0x0001631e) list_medium_line_x4_t4

0x6f63,	// (0x0001631e) list_medium_line_x4_t4_g7

0x6f63,	// (0x0001631e) list_medium_line_x4_t5

0x6f75,	// (0x00016330) list_single_fs_dyc_pane_ParamLimits

0x6f75,	// (0x00016330) list_single_fs_dyc_pane

0x1031,	// (0x000103ec) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x4_t4_g7_g1

0x76bd,	// (0x00016a78) list_medium_line_x4_t4_g7_g2_ParamLimits

0x76bd,	// (0x00016a78) list_medium_line_x4_t4_g7_g2

0x76c9,	// (0x00016a84) list_medium_line_x4_t4_g7_g3_ParamLimits

0x76c9,	// (0x00016a84) list_medium_line_x4_t4_g7_g3

0x76d8,	// (0x00016a93) list_medium_line_x4_t4_g7_g4_ParamLimits

0x76d8,	// (0x00016a93) list_medium_line_x4_t4_g7_g4

0x76e4,	// (0x00016a9f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x76e4,	// (0x00016a9f) list_medium_line_x4_t4_g7_g5

0x76f3,	// (0x00016aae) list_medium_line_x4_t4_g7_g6_ParamLimits

0x76f3,	// (0x00016aae) list_medium_line_x4_t4_g7_g6

0x7702,	// (0x00016abd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7702,	// (0x00016abd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0001ef91) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0001ef91) list_medium_line_x4_t4_g7_g

0x770e,	// (0x00016ac9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x770e,	// (0x00016ac9) list_medium_line_x4_t4_g7_t1

0x7723,	// (0x00016ade) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7723,	// (0x00016ade) list_medium_line_x4_t4_g7_t2

0x7738,	// (0x00016af3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7738,	// (0x00016af3) list_medium_line_x4_t4_g7_t3

0x774d,	// (0x00016b08) list_medium_line_x4_t4_g7_t4_ParamLimits

0x774d,	// (0x00016b08) list_medium_line_x4_t4_g7_t4

0x775f,	// (0x00016b1a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x775f,	// (0x00016b1a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0001efa0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0001efa0) list_medium_line_x4_t4_g7_t

0x7771,	// (0x00016b2c) list_single_dyc_row_pane_ParamLimits

0x7771,	// (0x00016b2c) list_single_dyc_row_pane

0x7e13,	// (0x000171ce) call5_gesture_pane_ParamLimits

0x7e13,	// (0x000171ce) call5_gesture_pane

0x7e69,	// (0x00017224) call5_windows_pane_ParamLimits

0x7e69,	// (0x00017224) call5_windows_pane

0x7f17,	// (0x000172d2) call5_swipe_1_pane_cp_ParamLimits

0x7f17,	// (0x000172d2) call5_swipe_1_pane_cp

0x7f23,	// (0x000172de) call5_swipe_2_pane_cp_ParamLimits

0x7f23,	// (0x000172de) call5_swipe_2_pane_cp

0xa9a4,	// (0x00019d5f) call5_image_pane_cp

0x7f2f,	// (0x000172ea) popup_call5_audio_first_window_cp_ParamLimits

0x7f2f,	// (0x000172ea) popup_call5_audio_first_window_cp

0xe26e,	// (0x0001d629) call5_swipe_1_pane_g1_cp_ParamLimits

0xe26e,	// (0x0001d629) call5_swipe_1_pane_g1_cp

0xe2ae,	// (0x0001d669) call5_swipe_1_pane_g2_cp

0xe287,	// (0x0001d642) call5_swipe_1_pane_t1_cp_ParamLimits

0xe287,	// (0x0001d642) call5_swipe_1_pane_t1_cp

0xe26e,	// (0x0001d629) call5_swipe_2_pane_g1_cp_ParamLimits

0xe26e,	// (0x0001d629) call5_swipe_2_pane_g1_cp

0xe2b6,	// (0x0001d671) call5_swipe_2_pane_g2_cp

0xe2be,	// (0x0001d679) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2be,	// (0x0001d679) call5_swipe_2_pane_t1_cp

0x9607,	// (0x000189c2) main_sp_fs_email_pane

0xe2d3,	// (0x0001d68e) main_sp_fs_listscroll_pane_te

0xe2dc,	// (0x0001d697) popup_sp_fs_action_menu_pane_ParamLimits

0xe2dc,	// (0x0001d697) popup_sp_fs_action_menu_pane

0xc35c,	// (0x0001b717) bg_sp_fs_ctrlbar_pane_g1

0xe322,	// (0x0001d6dd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32b,	// (0x0001d6e6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe334,	// (0x0001d6ef) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc35c,	// (0x0001b717) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0001f08e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc13b,	// (0x0001b4f6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc13b,	// (0x0001b4f6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33d,	// (0x0001d6f8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33d,	// (0x0001d6f8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe349,	// (0x0001d704) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe349,	// (0x0001d704) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0001f097) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0001f097) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe355,	// (0x0001d710) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe355,	// (0x0001d710) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe36f,	// (0x0001d72a) list_medium_line_t2_right_icon_g1

0x7f3d,	// (0x000172f8) list_medium_line_t2_right_icon_t1

0x7f4d,	// (0x00017308) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0001f09c) list_medium_line_t2_right_icon_t

0xbe4f,	// (0x0001b20a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe4f,	// (0x0001b20a) bg_sp_fs_ctrlbar_pane

0x7fac,	// (0x00017367) main_sp_fs_ctrlbar_button_pane_cp01

0x7fb6,	// (0x00017371) main_sp_fs_ctrlbar_ddmenu_pane

0xe3af,	// (0x0001d76a) main_sp_fs_ctrlbar_pane_g1

0xe3bb,	// (0x0001d776) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0001f0a1) main_sp_fs_ctrlbar_pane_g

0xe3c7,	// (0x0001d782) main_sp_fs_ctrlbar_pane_t1

0x7fc0,	// (0x0001737b) main_sp_fs_ctrlbar_pane

0x7fe4,	// (0x0001739f) main_sp_fs_listscroll_pane_te_cp01

0x8004,	// (0x000173bf) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8004,	// (0x000173bf) popup_sp_fs_action_menu_pane_cp01

0x9607,	// (0x000189c2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9607,	// (0x000189c2) bg_sp_fs_highlight_list_pane_cp01

0xe3f7,	// (0x0001d7b2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3f7,	// (0x0001d7b2) sp_fs_action_menu_list_gene_pane_g1

0xe406,	// (0x0001d7c1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe406,	// (0x0001d7c1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0001f0ab) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0001f0ab) sp_fs_action_menu_list_gene_pane_g

0xe413,	// (0x0001d7ce) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe413,	// (0x0001d7ce) sp_fs_action_menu_list_gene_pane_t1

0xe42b,	// (0x0001d7e6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe42b,	// (0x0001d7e6) sp_fs_action_menu_list_gene_pane

0xe44e,	// (0x0001d809) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe44e,	// (0x0001d809) popup_sp_fs_action_menu_bg_pane

0xe45c,	// (0x0001d817) sp_fs_action_menu_list_pane_ParamLimits

0xe45c,	// (0x0001d817) sp_fs_action_menu_list_pane

0xe480,	// (0x0001d83b) sp_fs_scroll_pane_cp01_ParamLimits

0xe480,	// (0x0001d83b) sp_fs_scroll_pane_cp01

0x803a,	// (0x000173f5) list_medium_line_plain_t2_t1

0x804a,	// (0x00017405) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0001f0b0) list_medium_line_plain_t2_t

0x805a,	// (0x00017415) list_medium_line_plain_t3_t1

0x806a,	// (0x00017425) list_medium_line_plain_t3_t2

0x8078,	// (0x00017433) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0001f0b5) list_medium_line_plain_t3_t

0x1031,	// (0x000103ec) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t2_g2_g1

0x1049,	// (0x00010404) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0001e60c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0001e60c) list_medium_line_x2_t2_g2_g

0x244b,	// (0x00011806) list_medium_line_x2_t2_g2_t1_ParamLimits

0x244b,	// (0x00011806) list_medium_line_x2_t2_g2_t1

0x107e,	// (0x00010439) list_medium_line_x2_t2_g2_t2_ParamLimits

0x107e,	// (0x00010439) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0001f0bc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0001f0bc) list_medium_line_x2_t2_g2_t

0x1031,	// (0x000103ec) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t4_g2_g1

0x1049,	// (0x00010404) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0001e60c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0001e60c) list_medium_line_x2_t4_g2_g

0x8086,	// (0x00017441) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8086,	// (0x00017441) list_medium_line_x2_t4_g2_t1

0x80a0,	// (0x0001745b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x80a0,	// (0x0001745b) list_medium_line_x2_t4_g2_t2

0x80b6,	// (0x00017471) list_medium_line_x2_t4_g2_t3_ParamLimits

0x80b6,	// (0x00017471) list_medium_line_x2_t4_g2_t3

0x107e,	// (0x00010439) list_medium_line_x2_t4_g2_t4_ParamLimits

0x107e,	// (0x00010439) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0001f0c1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0001f0c1) list_medium_line_x2_t4_g2_t

0xe4a6,	// (0x0001d861) list_medium_line_t3_right_iconx2_g1

0xe36f,	// (0x0001d72a) list_medium_line_t3_right_iconx2_g2

0x80cb,	// (0x00017486) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0001f0ca) list_medium_line_t3_right_iconx2_g

0x80d5,	// (0x00017490) list_medium_line_t3_right_iconx2_t1

0x80e5,	// (0x000174a0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0001f0d1) list_medium_line_t3_right_iconx2_t

0x1031,	// (0x000103ec) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x3_t4_g4_g1

0x103d,	// (0x000103f8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x3_t4_g4_g2

0x10e5,	// (0x000104a0) list_medium_line_x3_t4_g4_g3_ParamLimits

0x10e5,	// (0x000104a0) list_medium_line_x3_t4_g4_g3

0x80f3,	// (0x000174ae) list_medium_line_x3_t4_g4_g4_ParamLimits

0x80f3,	// (0x000174ae) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0001f0d6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0001f0d6) list_medium_line_x3_t4_g4_g

0x80ff,	// (0x000174ba) list_medium_line_x3_t4_g4_t1_ParamLimits

0x80ff,	// (0x000174ba) list_medium_line_x3_t4_g4_t1

0x8116,	// (0x000174d1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8116,	// (0x000174d1) list_medium_line_x3_t4_g4_t2

0x8131,	// (0x000174ec) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8131,	// (0x000174ec) list_medium_line_x3_t4_g4_t3

0x8146,	// (0x00017501) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8146,	// (0x00017501) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0001f0df) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0001f0df) list_medium_line_x3_t4_g4_t

0x8163,	// (0x0001751e) list_single_dyc_row_text_pane_t1_ParamLimits

0x8163,	// (0x0001751e) list_single_dyc_row_text_pane_t1

0x81ac,	// (0x00017567) list_single_dyc_row_text_pane_t2_ParamLimits

0x81ac,	// (0x00017567) list_single_dyc_row_text_pane_t2

0xe4ae,	// (0x0001d869) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4ae,	// (0x0001d869) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0001f0e8) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0001f0e8) list_single_dyc_row_text_pane_t

0xe4c0,	// (0x0001d87b) list_single_dyc_row_pane_g1_ParamLimits

0xe4c0,	// (0x0001d87b) list_single_dyc_row_pane_g1

0xe4cc,	// (0x0001d887) list_single_dyc_row_pane_g2_ParamLimits

0xe4cc,	// (0x0001d887) list_single_dyc_row_pane_g2

0xe4d8,	// (0x0001d893) list_single_dyc_row_pane_g3_ParamLimits

0xe4d8,	// (0x0001d893) list_single_dyc_row_pane_g3

0xe4e4,	// (0x0001d89f) list_single_dyc_row_pane_g4_ParamLimits

0xe4e4,	// (0x0001d89f) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001f0ef) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001f0ef) list_single_dyc_row_pane_g

0xe4f0,	// (0x0001d8ab) list_single_dyc_row_text_pane_ParamLimits

0xe4f0,	// (0x0001d8ab) list_single_dyc_row_text_pane

0x95a6,	// (0x00018961) bg_sp_fs_scroll_pane

0xe50f,	// (0x0001d8ca) thumb_sp_fs_scroll_pane

0x68f3,	// (0x00015cae) list_medium_line_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_g1

0xe518,	// (0x0001d8d3) list_medium_line_t1_ParamLimits

0xe518,	// (0x0001d8d3) list_medium_line_t1

0x1031,	// (0x000103ec) list_medium_line_x2_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_g1

0x103d,	// (0x000103f8) list_medium_line_x2_g2_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001f0f8) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001f0f8) list_medium_line_x2_g

0xe52d,	// (0x0001d8e8) list_medium_line_x2_t1_ParamLimits

0xe52d,	// (0x0001d8e8) list_medium_line_x2_t1

0x1031,	// (0x000103ec) list_medium_line_x3_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x3_g1

0x103d,	// (0x000103f8) list_medium_line_x3_g2_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001f0f8) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001f0f8) list_medium_line_x3_g

0xe52d,	// (0x0001d8e8) list_medium_line_x3_t1_ParamLimits

0xe52d,	// (0x0001d8e8) list_medium_line_x3_t1

0xe543,	// (0x0001d8fe) thumb_sp_fs_scroll_pane_g1

0xe54c,	// (0x0001d907) thumb_sp_fs_scroll_pane_g2

0xe555,	// (0x0001d910) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f0fd) thumb_sp_fs_scroll_pane_g

0xe543,	// (0x0001d8fe) bg_sp_fs_scroll_pane_g1

0xe54c,	// (0x0001d907) bg_sp_fs_scroll_pane_g2

0xe555,	// (0x0001d910) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f0fd) bg_sp_fs_scroll_pane_g

0x1031,	// (0x000103ec) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1031,	// (0x000103ec) list_medium_line_x2_t3_g4_g1

0x10d9,	// (0x00010494) list_medium_line_x2_t3_g4_g2_ParamLimits

0x10d9,	// (0x00010494) list_medium_line_x2_t3_g4_g2

0x103d,	// (0x000103f8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x103d,	// (0x000103f8) list_medium_line_x2_t3_g4_g3

0x1049,	// (0x00010404) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1049,	// (0x00010404) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0001e688) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0001e688) list_medium_line_x2_t3_g4_g

0x8206,	// (0x000175c1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8206,	// (0x000175c1) list_medium_line_x2_t3_g4_t1

0x821c,	// (0x000175d7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x821c,	// (0x000175d7) list_medium_line_x2_t3_g4_t2

0x107e,	// (0x00010439) list_medium_line_x2_t3_g4_t3_ParamLimits

0x107e,	// (0x00010439) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001f104) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001f104) list_medium_line_x2_t3_g4_t

0x68f3,	// (0x00015cae) list_medium_line_g2_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_g2_g1

0xd3cd,	// (0x0001c788) list_medium_line_g2_g2_ParamLimits

0xd3cd,	// (0x0001c788) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0001edc1) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0001edc1) list_medium_line_g2_g

0xe55e,	// (0x0001d919) list_medium_line_g2_t1_ParamLimits

0xe55e,	// (0x0001d919) list_medium_line_g2_t1

0x68f3,	// (0x00015cae) list_medium_line_t3_g2_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_t3_g2_g1

0xd3cd,	// (0x0001c788) list_medium_line_t3_g2_g2_ParamLimits

0xd3cd,	// (0x0001c788) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0001edc1) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0001edc1) list_medium_line_t3_g2_g

0x8235,	// (0x000175f0) list_medium_line_t3_g2_t1_ParamLimits

0x8235,	// (0x000175f0) list_medium_line_t3_g2_t1

0x824f,	// (0x0001760a) list_medium_line_t3_g2_t2_ParamLimits

0x824f,	// (0x0001760a) list_medium_line_t3_g2_t2

0x8265,	// (0x00017620) list_medium_line_t3_g2_t3_ParamLimits

0x8265,	// (0x00017620) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001f10b) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001f10b) list_medium_line_t3_g2_t

0xe36f,	// (0x0001d72a) list_medium_line_right_icon_g1

0xe573,	// (0x0001d92e) list_medium_line_right_icon_t1

0x68f3,	// (0x00015cae) list_medium_line_t2_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_t2_g1

0x827c,	// (0x00017637) list_medium_line_t2_t1_ParamLimits

0x827c,	// (0x00017637) list_medium_line_t2_t1

0x8296,	// (0x00017651) list_medium_line_t2_t2_ParamLimits

0x8296,	// (0x00017651) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001f112) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001f112) list_medium_line_t2_t

0x68f3,	// (0x00015cae) list_medium_line_t3_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_t3_g1

0x82af,	// (0x0001766a) list_medium_line_t3_t1_ParamLimits

0x82af,	// (0x0001766a) list_medium_line_t3_t1

0x82c9,	// (0x00017684) list_medium_line_t3_t2_ParamLimits

0x82c9,	// (0x00017684) list_medium_line_t3_t2

0x82df,	// (0x0001769a) list_medium_line_t3_t3_ParamLimits

0x82df,	// (0x0001769a) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001f117) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001f117) list_medium_line_t3_t

0x68f3,	// (0x00015cae) list_medium_line_g3_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_g3_g1

0xe581,	// (0x0001d93c) list_medium_line_g3_g2_ParamLimits

0xe581,	// (0x0001d93c) list_medium_line_g3_g2

0xd3cd,	// (0x0001c788) list_medium_line_g3_g3_ParamLimits

0xd3cd,	// (0x0001c788) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001f11e) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001f11e) list_medium_line_g3_g

0xe58d,	// (0x0001d948) list_medium_line_g3_t1_ParamLimits

0xe58d,	// (0x0001d948) list_medium_line_g3_t1

0x68f3,	// (0x00015cae) list_medium_line_t2_g3_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_t2_g3_g1

0xe581,	// (0x0001d93c) list_medium_line_t2_g3_g2_ParamLimits

0xe581,	// (0x0001d93c) list_medium_line_t2_g3_g2

0xd3cd,	// (0x0001c788) list_medium_line_t2_g3_g3_ParamLimits

0xd3cd,	// (0x0001c788) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001f11e) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001f11e) list_medium_line_t2_g3_g

0x82f4,	// (0x000176af) list_medium_line_t2_g3_t1_ParamLimits

0x82f4,	// (0x000176af) list_medium_line_t2_g3_t1

0x830b,	// (0x000176c6) list_medium_line_t2_g3_t2_ParamLimits

0x830b,	// (0x000176c6) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001f125) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001f125) list_medium_line_t2_g3_t

0x68f3,	// (0x00015cae) list_medium_line_t3_g3_g1_ParamLimits

0x68f3,	// (0x00015cae) list_medium_line_t3_g3_g1

0xe581,	// (0x0001d93c) list_medium_line_t3_g3_g2_ParamLimits

0xe581,	// (0x0001d93c) list_medium_line_t3_g3_g2

0xd3cd,	// (0x0001c788) list_medium_line_t3_g3_g3_ParamLimits

0xd3cd,	// (0x0001c788) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001f11e) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001f11e) list_medium_line_t3_g3_g

0x8324,	// (0x000176df) list_medium_line_t3_g3_t1_ParamLimits

0x8324,	// (0x000176df) list_medium_line_t3_g3_t1

0x833d,	// (0x000176f8) list_medium_line_t3_g3_t2_ParamLimits

0x833d,	// (0x000176f8) list_medium_line_t3_g3_t2

0x8353,	// (0x0001770e) list_medium_line_t3_g3_t3_ParamLimits

0x8353,	// (0x0001770e) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001f12a) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001f12a) list_medium_line_t3_g3_t

0xe4a6,	// (0x0001d861) list_medium_line_right_iconx2_g1

0xe36f,	// (0x0001d72a) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f131) list_medium_line_right_iconx2_g

0xe5a2,	// (0x0001d95d) list_medium_line_right_iconx2_t1

0xe4a6,	// (0x0001d861) list_medium_line_t2_right_iconx2_g1

0xe36f,	// (0x0001d72a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f131) list_medium_line_t2_right_iconx2_g

0x836d,	// (0x00017728) list_medium_line_t2_right_iconx2_t1

0x837d,	// (0x00017738) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001f136) list_medium_line_t2_right_iconx2_t

0x838f,	// (0x0001774a) list_medium_line_x4_t4_t1

0x839d,	// (0x00017758) list_medium_line_x4_t4_t2

0x83ad,	// (0x00017768) list_medium_line_x4_t4_t3

0x83bd,	// (0x00017778) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001f13b) list_medium_line_x4_t4_t

0x8410,	// (0x000177cb) tport_appsw_pane_ParamLimits

0x8410,	// (0x000177cb) tport_appsw_pane

0x8428,	// (0x000177e3) tport_contact_pane_ParamLimits

0x8428,	// (0x000177e3) tport_contact_pane

0x8440,	// (0x000177fb) tport_listscroll_pane_ParamLimits

0x8440,	// (0x000177fb) tport_listscroll_pane

0x845a,	// (0x00017815) cell_tport_appsw_pane_ParamLimits

0x845a,	// (0x00017815) cell_tport_appsw_pane

0xd0a2,	// (0x0001c45d) tport_appsw_pane_g1_ParamLimits

0xd0a2,	// (0x0001c45d) tport_appsw_pane_g1

0xe5b0,	// (0x0001d96b) tport_contact_pane_g1

0xe5b9,	// (0x0001d974) tport_contact_pane_t1

0xe5c7,	// (0x0001d982) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001f144) tport_contact_pane_t

0xe5d5,	// (0x0001d990) list_tport_pane

0xe5de,	// (0x0001d999) scroll_pane_cp_030

0x84a6,	// (0x00017861) cell_tport_appsw_pane_g1

0x84b6,	// (0x00017871) cell_tport_appsw_pane_t1

0x95a6,	// (0x00018961) grid_highlight_pane_cp019

0x84c4,	// (0x0001787f) list_tport_double_graphic_pane_ParamLimits

0x84c4,	// (0x0001787f) list_tport_double_graphic_pane

0x9607,	// (0x000189c2) list_highlight_pane_cp023_ParamLimits

0x9607,	// (0x000189c2) list_highlight_pane_cp023

0x84d1,	// (0x0001788c) list_tport_double_graphic_pane_g1_ParamLimits

0x84d1,	// (0x0001788c) list_tport_double_graphic_pane_g1

0x84de,	// (0x00017899) list_tport_double_graphic_pane_t1_ParamLimits

0x84de,	// (0x00017899) list_tport_double_graphic_pane_t1

0x84f3,	// (0x000178ae) list_tport_double_graphic_pane_t2_ParamLimits

0x84f3,	// (0x000178ae) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001f150) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001f150) list_tport_double_graphic_pane_t

0x95a6,	// (0x00018961) main_cale_note_pane

0x5f75,	// (0x00015330) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5f75,	// (0x00015330) cell_vitu2_function_top_wide_pane_cp01

0x7ac7,	// (0x00016e82) wait_bar_pane_cp05_ParamLimits

0x9607,	// (0x000189c2) listscroll_cmail_pane

0xe5ef,	// (0x0001d9aa) list_cmail_pane

0x850f,	// (0x000178ca) list_cmail_body_pane

0x8524,	// (0x000178df) list_single_cmail_header_caption_pane

0x853e,	// (0x000178f9) list_single_cmail_header_detail_pane_ParamLimits

0x853e,	// (0x000178f9) list_single_cmail_header_detail_pane

0x856d,	// (0x00017928) list_single_cmail_header_caption_pane_t1

0x8588,	// (0x00017943) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8588,	// (0x00017943) list_single_cmail_header_detail_pane_g1

0xe606,	// (0x0001d9c1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe606,	// (0x0001d9c1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001f155) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001f155) list_single_cmail_header_detail_pane_g

0x85a0,	// (0x0001795b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x85a0,	// (0x0001795b) list_single_cmail_header_detail_pane_t1

0x85f0,	// (0x000179ab) list_single_cmail_header_editor_pane_bg_ParamLimits

0x85f0,	// (0x000179ab) list_single_cmail_header_editor_pane_bg

0xdf16,	// (0x0001d2d1) list_cmail_body_pane_g1

0xe643,	// (0x0001d9fe) list_cmail_body_pane_t1

0xd0df,	// (0x0001c49a) list_single_cmail_header_editor_pane_bg_g1

0xa221,	// (0x000195dc) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0ef,	// (0x0001c4aa) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0e7,	// (0x0001c4a2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3a5,	// (0x0001c760) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd10f,	// (0x0001c4ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd0ff,	// (0x0001c4ba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd107,	// (0x0001c4c2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa201,	// (0x000195bc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8609,	// (0x000179c4) calenote_gesture_pane_ParamLimits

0x8609,	// (0x000179c4) calenote_gesture_pane

0x8629,	// (0x000179e4) calenote_window_pane_ParamLimits

0x8629,	// (0x000179e4) calenote_window_pane

0xe651,	// (0x0001da0c) popup_note_window_cp01

0x8645,	// (0x00017a00) calenote_swipe_1_pane_ParamLimits

0x8645,	// (0x00017a00) calenote_swipe_1_pane

0x7f23,	// (0x000172de) calenote_swipe_2_pane_ParamLimits

0x7f23,	// (0x000172de) calenote_swipe_2_pane

0xe26e,	// (0x0001d629) calenote_swipe_1_pane_g1_ParamLimits

0xe26e,	// (0x0001d629) calenote_swipe_1_pane_g1

0xe27b,	// (0x0001d636) calenote_swipe_1_pane_g2_ParamLimits

0xe27b,	// (0x0001d636) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0001f084) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0001f084) calenote_swipe_1_pane_g

0xe663,	// (0x0001da1e) calenote_swipe_1_pane_t1_ParamLimits

0xe663,	// (0x0001da1e) calenote_swipe_1_pane_t1

0xe26e,	// (0x0001d629) calenote_swipe_2_pane_g1_ParamLimits

0xe26e,	// (0x0001d629) calenote_swipe_2_pane_g1

0xe682,	// (0x0001da3d) calenote_swipe_2_pane_g2_ParamLimits

0xe682,	// (0x0001da3d) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001f161) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001f161) calenote_swipe_2_pane_g

0xe68e,	// (0x0001da49) calenote_swipe_2_pane_t1_ParamLimits

0xe68e,	// (0x0001da49) calenote_swipe_2_pane_t1

0x95a6,	// (0x00018961) main_mup_navstr_pane

0x4bcf,	// (0x00013f8a) main_mup3_pane_t7_ParamLimits

0x4bcf,	// (0x00013f8a) main_mup3_pane_t7

0xcc81,	// (0x0001c03c) main_mp4_pane_g6_ParamLimits

0xcc81,	// (0x0001c03c) main_mp4_pane_g6

0xcea9,	// (0x0001c264) main_image3_pane_t4_ParamLimits

0xcea9,	// (0x0001c264) main_image3_pane_t4

0x865a,	// (0x00017a15) popup_navstr_preview_pane_ParamLimits

0x865a,	// (0x00017a15) popup_navstr_preview_pane

0x866a,	// (0x00017a25) scroll_navstr_pane_ParamLimits

0x866a,	// (0x00017a25) scroll_navstr_pane

0x95a6,	// (0x00018961) bg_popup_preview_window_pane_cp04

0xe6b5,	// (0x0001da70) popup_navstr_preview_pane_t1

0x867e,	// (0x00017a39) scroll_navstr_pane_g1_ParamLimits

0x867e,	// (0x00017a39) scroll_navstr_pane_g1

0x8692,	// (0x00017a4d) scroll_navstr_pane_t1_ParamLimits

0x8692,	// (0x00017a4d) scroll_navstr_pane_t1

0xe65a,	// (0x0001da15) bg_button_pane_cp014

0xe65a,	// (0x0001da15) bg_button_pane_cp030

0x7db9,	// (0x00017174) list_double_fisheye_pane_g4_ParamLimits

0x7db9,	// (0x00017174) list_double_fisheye_pane_g4

0x7dc5,	// (0x00017180) list_double_fisheye_pane_g5_ParamLimits

0x7dc5,	// (0x00017180) list_double_fisheye_pane_g5

0xe5f7,	// (0x0001d9b2) sp_fs_scroll_pane_cp03

0xe3af,	// (0x0001d76a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3bb,	// (0x0001d776) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0001f0a1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3c7,	// (0x0001d782) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8505,	// (0x000178c0) sp_fs_scroll_pane_cp02

0x9ef6,	// (0x000192b1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ef6,	// (0x000192b1) popup_sp_fs_calendar_preview_list_single_pane

0x95a6,	// (0x00018961) main_cam6_pano_pane

0x9607,	// (0x000189c2) main_mup3_pane_ParamLimits

0x95a6,	// (0x00018961) main_phacti_pane

0x799a,	// (0x00016d55) bg_button_pane_cp11

0x79b4,	// (0x00016d6f) main_mobtv_info_pane_g2_ParamLimits

0x79b4,	// (0x00016d6f) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0001f001) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0001f001) main_mobtv_info_pane_g

0x7b8f,	// (0x00016f4a) sc_clock_pane_t5_ParamLimits

0x7b8f,	// (0x00016f4a) sc_clock_pane_t5

0x7c1b,	// (0x00016fd6) main_radioblah_pane_g1_ParamLimits

0xe1ba,	// (0x0001d575) main_radioblah_pane_t3_ParamLimits

0xe1ba,	// (0x0001d575) main_radioblah_pane_t3

0xe1d2,	// (0x0001d58d) main_radioblah_pane_t4_ParamLimits

0xe1d2,	// (0x0001d58d) main_radioblah_pane_t4

0x7c43,	// (0x00016ffe) main_radioblah_text_pane_ParamLimits

0x7c43,	// (0x00016ffe) main_radioblah_text_pane

0x7c55,	// (0x00017010) main_radioblah_info_pane_g1_ParamLimits

0x7cee,	// (0x000170a9) main_radioblah_info_pane_t4_ParamLimits

0x7cee,	// (0x000170a9) main_radioblah_info_pane_t4

0x9607,	// (0x000189c2) main_sp_fs_calendar_pane

0x86a9,	// (0x00017a64) main_phacti_pane_g1

0x86b1,	// (0x00017a6c) phacti_note_pane_ParamLimits

0x86b1,	// (0x00017a6c) phacti_note_pane

0xe6cc,	// (0x0001da87) phacti_term_pane_ParamLimits

0xe6cc,	// (0x0001da87) phacti_term_pane

0xe6e1,	// (0x0001da9c) phacti_note_pane_t1_ParamLimits

0xe6e1,	// (0x0001da9c) phacti_note_pane_t1

0xe6f8,	// (0x0001dab3) phacti_term_pane_g1

0xe700,	// (0x0001dabb) phacti_term_pane_t1_ParamLimits

0xe700,	// (0x0001dabb) phacti_term_pane_t1

0xe72a,	// (0x0001dae5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe732,	// (0x0001daed) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001f16b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe73a,	// (0x0001daf5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe73a,	// (0x0001daf5) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe750,	// (0x0001db0b) aid_popup_sp_fs_bg_corner_pane

0xc35c,	// (0x0001b717) popup_sp_fs_calendar_preview_bg_pane_g1

0x95a6,	// (0x00018961) popup_sp_fs_calendar_preview_bg_pane

0xe758,	// (0x0001db13) popup_sp_fs_calendar_preview_list_pane

0xbe4f,	// (0x0001b20a) bg_main_sp_fs_cale_pane_ParamLimits

0xbe4f,	// (0x0001b20a) bg_main_sp_fs_cale_pane

0xe769,	// (0x0001db24) listscroll_cale_mrui_pane_ParamLimits

0xe769,	// (0x0001db24) listscroll_cale_mrui_pane

0xe77e,	// (0x0001db39) listscroll_sp_fs_schedule_track_pane

0xe787,	// (0x0001db42) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe787,	// (0x0001db42) main_sp_fs_ctrlbar_pane_cp01

0xe79a,	// (0x0001db55) main_sp_fs_ribbon_pane

0xe7a2,	// (0x0001db5d) popup_sp_fs_cale_preview_window

0x8722,	// (0x00017add) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8722,	// (0x00017add) list_single_sp_fs_schedule_track_pane

0x9607,	// (0x000189c2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9607,	// (0x000189c2) bg_sp_fs_highlight_list_pane_cp03

0x8735,	// (0x00017af0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8735,	// (0x00017af0) list_single_sp_fs_schedule_track_pane_g1

0x8741,	// (0x00017afc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8741,	// (0x00017afc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001f170) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001f170) list_single_sp_fs_schedule_track_pane_g

0x874d,	// (0x00017b08) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x874d,	// (0x00017b08) list_single_sp_fs_schedule_track_pane_t1

0x876f,	// (0x00017b2a) sp_fs_schedule_track_pane_ParamLimits

0x876f,	// (0x00017b2a) sp_fs_schedule_track_pane

0xe7b4,	// (0x0001db6f) sp_fs_schedule_track_pane_g1

0xe7bc,	// (0x0001db77) sp_fs_schedule_track_pane_g2

0xe7c4,	// (0x0001db7f) sp_fs_schedule_track_pane_g3

0xe7cc,	// (0x0001db87) sp_fs_schedule_track_pane_g4

0xe7d4,	// (0x0001db8f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001f175) sp_fs_schedule_track_pane_g

0xd0df,	// (0x0001c49a) bg_sp_fs_schedule_viewer_highlight_g1

0xa221,	// (0x000195dc) bg_sp_fs_schedule_viewer_highlight_g2

0xd0e7,	// (0x0001c4a2) bg_sp_fs_schedule_viewer_highlight_g3

0xd0ef,	// (0x0001c4aa) bg_sp_fs_schedule_viewer_highlight_g4

0xd3a5,	// (0x0001c760) bg_sp_fs_schedule_viewer_highlight_g5

0xd0ff,	// (0x0001c4ba) bg_sp_fs_schedule_viewer_highlight_g6

0xd107,	// (0x0001c4c2) bg_sp_fs_schedule_viewer_highlight_g7

0xd10f,	// (0x0001c4ca) bg_sp_fs_schedule_viewer_highlight_g8

0xa201,	// (0x000195bc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001f180) bg_sp_fs_schedule_viewer_highlight_g

0x95a6,	// (0x00018961) bg_main_sp_fs_ribbon_pane

0x8784,	// (0x00017b3f) main_sp_fs_ribbon_pane_g1

0xe7dc,	// (0x0001db97) main_sp_fs_ribbon_pane_t1

0x878d,	// (0x00017b48) main_sp_fs_ribbon_pane_t2

0xe7eb,	// (0x0001dba6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001f193) main_sp_fs_ribbon_pane_t

0xe7fa,	// (0x0001dbb5) main_sp_fs_ribbon_scheduler_pane

0xe802,	// (0x0001dbbd) bg_main_sp_fs_ribbon_pane_g1

0xe80b,	// (0x0001dbc6) bg_main_sp_fs_ribbon_pane_g2

0xe814,	// (0x0001dbcf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001f19a) bg_main_sp_fs_ribbon_pane_g

0xe81c,	// (0x0001dbd7) main_sp_fs_ribbon_scheduler_pane_g1

0xe825,	// (0x0001dbe0) main_sp_fs_ribbon_scheduler_pane_g2

0xe82e,	// (0x0001dbe9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001f1a1) main_sp_fs_ribbon_scheduler_pane_g

0xe837,	// (0x0001dbf2) list_cale_mrui_pane

0x879c,	// (0x00017b57) sp_fs_scroll_pane_cp07_ParamLimits

0x879c,	// (0x00017b57) sp_fs_scroll_pane_cp07

0x87b8,	// (0x00017b73) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x87b8,	// (0x00017b73) bg_sp_fs_schedule_viewer_highlight

0xe844,	// (0x0001dbff) list_single_sp_fs_schedule_track_pane_cp01

0xe84c,	// (0x0001dc07) list_sp_fs_schedule_track_pane

0xe854,	// (0x0001dc0f) sp_fs_scroll_pane_cp06_ParamLimits

0xe854,	// (0x0001dc0f) sp_fs_scroll_pane_cp06

0xc35c,	// (0x0001b717) bgmain_sp_fs_calendar_pane_g1

0x87ca,	// (0x00017b85) list_single_cale_mrui_pane_ParamLimits

0x87ca,	// (0x00017b85) list_single_cale_mrui_pane

0xe866,	// (0x0001dc21) list_single_cale_mrui_row_pane_ParamLimits

0xe866,	// (0x0001dc21) list_single_cale_mrui_row_pane

0xe87c,	// (0x0001dc37) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe87c,	// (0x0001dc37) list_single_cale_mrui_row_pane_g1

0xe8c1,	// (0x0001dc7c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c1,	// (0x0001dc7c) list_single_cale_mrui_row_pane_t1

0x87df,	// (0x00017b9a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87df,	// (0x00017b9a) list_single_cale_mrui_row_pane_t2

0xe8d3,	// (0x0001dc8e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8d3,	// (0x0001dc8e) list_single_cale_mrui_row_pane_t3

0xe902,	// (0x0001dcbd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe902,	// (0x0001dcbd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001f1af) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001f1af) list_single_cale_mrui_row_pane_t

0x8847,	// (0x00017c02) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8847,	// (0x00017c02) list_single_cmail_header_editor_pane_bg_cp01

0x886b,	// (0x00017c26) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x886b,	// (0x00017c26) list_single_cmail_header_editor_pane_bg_cp02

0x8889,	// (0x00017c44) main_radioblah_text_pane_t1_ParamLimits

0x8889,	// (0x00017c44) main_radioblah_text_pane_t1

0xe931,	// (0x0001dcec) cam6_indi_pane_cp01

0xe939,	// (0x0001dcf4) cam6_mode_pane_cp01

0xe941,	// (0x0001dcfc) cam6_pano_pane

0xe94a,	// (0x0001dd05) cam6_zoom_pane_cp01

0xe954,	// (0x0001dd0f) cam6_pano_image_pane

0xe95d,	// (0x0001dd18) cam6_pano_pane_g1

0xdf16,	// (0x0001d2d1) cam6_pano_pane_g2

0xe966,	// (0x0001dd21) cam6_pano_pane_g3

0xe96f,	// (0x0001dd2a) cam6_pano_pane_g4

0xc8e2,	// (0x0001bc9d) cam6_pano_pane_g5

0xe978,	// (0x0001dd33) cam6_pano_pane_g6

0xe980,	// (0x0001dd3b) cam6_pano_pane_g7

0xe988,	// (0x0001dd43) cam6_pano_pane_g8

0xe991,	// (0x0001dd4c) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001f1b8) cam6_pano_pane_g

0x95a6,	// (0x00018961) main_browser_tag_pane

0xe6ad,	// (0x0001da68) grid_navstr_albumart_pane

0xe99c,	// (0x0001dd57) cell_navstr_albumart_pane_ParamLimits

0xe99c,	// (0x0001dd57) cell_navstr_albumart_pane

0xe9bb,	// (0x0001dd76) cell_navstr_albumart_pane_g1

0xbc5c,	// (0x0001b017) cell_navstr_albumart_pane_g2

0xbc6c,	// (0x0001b027) cell_navstr_albumart_pane_g3

0xbc64,	// (0x0001b01f) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001f1cb) cell_navstr_albumart_pane_g

0x88a4,	// (0x00017c5f) bt_list_pane_ParamLimits

0x88a4,	// (0x00017c5f) bt_list_pane

0x88ba,	// (0x00017c75) bt_list_pane_t1

0x88c9,	// (0x00017c84) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001f1d4) bt_list_pane_t

0x95a6,	// (0x00018961) main_cale_prevew_pane

0x88d8,	// (0x00017c93) popup_cale_preview_window_ParamLimits

0x88d8,	// (0x00017c93) popup_cale_preview_window

0x9607,	// (0x000189c2) bg_popup_preview_window_pane_cp05_ParamLimits

0x9607,	// (0x000189c2) bg_popup_preview_window_pane_cp05

0xe9c3,	// (0x0001dd7e) list_cale_preview_pane_ParamLimits

0xe9c3,	// (0x0001dd7e) list_cale_preview_pane

0x88f5,	// (0x00017cb0) list_double_cale_preview_pane_ParamLimits

0x88f5,	// (0x00017cb0) list_double_cale_preview_pane

0x8909,	// (0x00017cc4) list_single_cale_preview_pane_ParamLimits

0x8909,	// (0x00017cc4) list_single_cale_preview_pane

0x8921,	// (0x00017cdc) list_single_cale_preview_pane_g1

0x8929,	// (0x00017ce4) list_single_cale_preview_pane_t1_ParamLimits

0x8929,	// (0x00017ce4) list_single_cale_preview_pane_t1

0x893e,	// (0x00017cf9) list_double_cale_preview_pane_g1

0x8946,	// (0x00017d01) list_double_cale_preview_pane_t1_ParamLimits

0x8946,	// (0x00017d01) list_double_cale_preview_pane_t1

0x895b,	// (0x00017d16) list_double_cale_preview_pane_t2_ParamLimits

0x895b,	// (0x00017d16) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001f1d9) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001f1d9) list_double_cale_preview_pane_t

0x95a6,	// (0x00018961) main_ezdial_pane

0x9607,	// (0x000189c2) main_sp_fs_email_pane_ParamLimits

0x7f5f,	// (0x0001731a) cmail_ddmenu_btn01_pane_ParamLimits

0x7f5f,	// (0x0001731a) cmail_ddmenu_btn01_pane

0x7f72,	// (0x0001732d) cmail_ddmenu_btn02_pane_ParamLimits

0x7f72,	// (0x0001732d) cmail_ddmenu_btn02_pane

0x7f95,	// (0x00017350) cmail_ddmenu_btn03_pane_ParamLimits

0x7f95,	// (0x00017350) cmail_ddmenu_btn03_pane

0x7fc0,	// (0x0001737b) main_sp_fs_ctrlbar_pane_ParamLimits

0x7fe4,	// (0x0001739f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x850f,	// (0x000178ca) list_cmail_body_pane_ParamLimits

0x857d,	// (0x00017938) bg_button_pane_cp12

0xe612,	// (0x0001d9cd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe612,	// (0x0001d9cd) list_single_cmail_header_detail_pane_g3

0xe61f,	// (0x0001d9da) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe61f,	// (0x0001d9da) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001f15c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001f15c) list_single_cmail_header_detail_pane_t

0xe715,	// (0x0001dad0) phacti_term_pane_t2_ParamLimits

0xe715,	// (0x0001dad0) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001f166) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001f166) phacti_term_pane_t

0xe9cf,	// (0x0001dd8a) aid_size_list_single_double

0x8973,	// (0x00017d2e) popup_ezdial_listscroll_window

0x898f,	// (0x00017d4a) popup_number_entry_window_cp01

0xa9a4,	// (0x00019d5f) bg_popup_call_pane_cp09

0xe9db,	// (0x0001dd96) ezdial_list_pane

0xe9e3,	// (0x0001dd9e) scroll_pane_cp23

0xbe4f,	// (0x0001b20a) bg_button_pane_cp028_ParamLimits

0xbe4f,	// (0x0001b20a) bg_button_pane_cp028

0x899d,	// (0x00017d58) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x899d,	// (0x00017d58) cmail_ddmenu_btn01_pane_g1

0x89ac,	// (0x00017d67) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x89ac,	// (0x00017d67) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f1de) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f1de) cmail_ddmenu_btn01_pane_g

0xe9eb,	// (0x0001dda6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9eb,	// (0x0001dda6) cmail_ddmenu_btn01_pane_t1

0xbe4f,	// (0x0001b20a) bg_button_pane_cp029_ParamLimits

0xbe4f,	// (0x0001b20a) bg_button_pane_cp029

0x89bc,	// (0x00017d77) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x89bc,	// (0x00017d77) cmail_ddmenu_btn02_pane_g1

0x89d7,	// (0x00017d92) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x89d7,	// (0x00017d92) cmail_ddmenu_btn02_pane_t1

0x9607,	// (0x000189c2) bg_button_pane_cp031_ParamLimits

0x9607,	// (0x000189c2) bg_button_pane_cp031

0x89bc,	// (0x00017d77) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x89bc,	// (0x00017d77) cmail_ddmenu_btn03_pane_g1

0x89d7,	// (0x00017d92) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x89d7,	// (0x00017d92) cmail_ddmenu_btn03_pane_t1

0x57af,	// (0x00014b6a) cell_dialer2_keypad_pane_t1_ParamLimits

0x57c9,	// (0x00014b84) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x57c9,	// (0x00014b84) cell_dialer2_keypad_pane_t1_copy1

0x77ff,	// (0x00016bba) ncimui_group_button_pane

0x9607,	// (0x000189c2) main_sp_fs_calendar_pane_ParamLimits

0x8524,	// (0x000178df) list_single_cmail_header_caption_pane_ParamLimits

0xe760,	// (0x0001db1b) aid_recal_txt_sm_pane

0x95a6,	// (0x00018961) mian_recal_day_pane

0xe7a2,	// (0x0001db5d) popup_sp_fs_cale_preview_window_ParamLimits

0xea00,	// (0x0001ddbb) list_recal_day_pane

0xea43,	// (0x0001ddfe) list_single_recal_day_pane_ParamLimits

0xea43,	// (0x0001ddfe) list_single_recal_day_pane

0xea55,	// (0x0001de10) list_single_recal_day_pane_g1_ParamLimits

0xea55,	// (0x0001de10) list_single_recal_day_pane_g1

0xea61,	// (0x0001de1c) list_single_recal_day_pane_g2_ParamLimits

0xea61,	// (0x0001de1c) list_single_recal_day_pane_g2

0xea6d,	// (0x0001de28) list_single_recal_day_pane_g3_ParamLimits

0xea6d,	// (0x0001de28) list_single_recal_day_pane_g3

0x89fe,	// (0x00017db9) list_single_recal_day_pane_g4_ParamLimits

0x89fe,	// (0x00017db9) list_single_recal_day_pane_g4

0xea79,	// (0x0001de34) list_single_recal_day_pane_g5_ParamLimits

0xea79,	// (0x0001de34) list_single_recal_day_pane_g5

0xea85,	// (0x0001de40) list_single_recal_day_pane_g6_ParamLimits

0xea85,	// (0x0001de40) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f1ed) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f1ed) list_single_recal_day_pane_g

0xea99,	// (0x0001de54) list_single_recal_day_pane_t1

0xeaab,	// (0x0001de66) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f1f8) list_single_recal_day_pane_t

0x8a16,	// (0x00017dd1) ncimui_query_button_pane_ParamLimits

0x8a16,	// (0x00017dd1) ncimui_query_button_pane

0x8a26,	// (0x00017de1) ncimui_query_button_pane_t1_ParamLimits

0x8a26,	// (0x00017de1) ncimui_query_button_pane_t1

0xeabd,	// (0x0001de78) ncimui_query_button_pane_t2_ParamLimits

0xeabd,	// (0x0001de78) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f1fd) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f1fd) ncimui_query_button_pane_t

0x8a39,	// (0x00017df4) query_button_pane_ParamLimits

0x8a39,	// (0x00017df4) query_button_pane

0x95a6,	// (0x00018961) bg_button_pane_cp0028

0xead0,	// (0x0001de8b) query_button_pane_t1

0x377c,	// (0x00012b37) main_tport_pane_ParamLimits

0x83cd,	// (0x00017788) bg_popup_window_pane_cp01_ParamLimits

0x83cd,	// (0x00017788) bg_popup_window_pane_cp01

0x83e8,	// (0x000177a3) heading_pane_cp08_ParamLimits

0x83e8,	// (0x000177a3) heading_pane_cp08

0x83fb,	// (0x000177b6) heading_pane_cp07_ParamLimits

0x83fb,	// (0x000177b6) heading_pane_cp07

0x84a6,	// (0x00017861) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001f149) cell_tport_appsw_pane_g

0xab27,	// (0x00019ee2) input_candi_list_open_g1

0xa410,	// (0x000197cb) list_cale_time_pane_g6_ParamLimits

0xa410,	// (0x000197cb) list_cale_time_pane_g6

0x4586,	// (0x00013941) aid_size_touch_calib_1_ParamLimits

0x4586,	// (0x00013941) aid_size_touch_calib_1

0x4598,	// (0x00013953) aid_size_touch_calib_2_ParamLimits

0x4598,	// (0x00013953) aid_size_touch_calib_2

0x45b0,	// (0x0001396b) aid_size_touch_calib_3_ParamLimits

0x45b0,	// (0x0001396b) aid_size_touch_calib_3

0x45ce,	// (0x00013989) aid_size_touch_calib_4_ParamLimits

0x45ce,	// (0x00013989) aid_size_touch_calib_4

0x45e6,	// (0x000139a1) main_touch_calib_button_group_pane_ParamLimits

0x45e6,	// (0x000139a1) main_touch_calib_button_group_pane

0x45fe,	// (0x000139b9) main_touch_calib_pane_g1_ParamLimits

0x4610,	// (0x000139cb) main_touch_calib_pane_g2_ParamLimits

0x4622,	// (0x000139dd) main_touch_calib_pane_g3_ParamLimits

0x4634,	// (0x000139ef) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0001eb17) main_touch_calib_pane_g_ParamLimits

0x4646,	// (0x00013a01) main_touch_calib_pane_t1_ParamLimits

0x4660,	// (0x00013a1b) main_touch_calib_pane_t2_ParamLimits

0x467a,	// (0x00013a35) main_touch_calib_pane_t3_ParamLimits

0x468e,	// (0x00013a49) main_touch_calib_pane_t4_ParamLimits

0x46a4,	// (0x00013a5f) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0001eb20) main_touch_calib_pane_t_ParamLimits

0xc698,	// (0x0001ba53) list_single_fp_cale_pane_g3_ParamLimits

0xc698,	// (0x0001ba53) list_single_fp_cale_pane_g3

0x9607,	// (0x000189c2) bg_button_pane_cp012_ParamLimits

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp03_ParamLimits

0x68a9,	// (0x00015c64) cell_vitu2_function_top_pane_g1_ParamLimits

0x9607,	// (0x000189c2) bg_vkb2_func_pane_cp04_ParamLimits

0x778d,	// (0x00016b48) main_ncimui_button_group_pane_ParamLimits

0x778d,	// (0x00016b48) main_ncimui_button_group_pane

0x77ed,	// (0x00016ba8) main_ncimui_pane_t3_ParamLimits

0x77ed,	// (0x00016ba8) main_ncimui_pane_t3

0xe6c3,	// (0x0001da7e) phacti_button_group_pane

0xe9cf,	// (0x0001dd8a) aid_size_list_single_double_ParamLimits

0x8973,	// (0x00017d2e) popup_ezdial_listscroll_window_ParamLimits

0x898f,	// (0x00017d4a) popup_number_entry_window_cp01_ParamLimits

0x8a4c,	// (0x00017e07) phacti_button_pane_ParamLimits

0x8a4c,	// (0x00017e07) phacti_button_pane

0x95a6,	// (0x00018961) bg_button_pane_cp14

0xeade,	// (0x0001de99) phacti_button_pane_t1

0x8a5d,	// (0x00017e18) main_touch_calib_button_pane_ParamLimits

0x8a5d,	// (0x00017e18) main_touch_calib_button_pane

0x9d6a,	// (0x00019125) bg_button_pane_cp18_ParamLimits

0x9d6a,	// (0x00019125) bg_button_pane_cp18

0xeaec,	// (0x0001dea7) main_touch_calib_button_pane_t1_ParamLimits

0xeaec,	// (0x0001dea7) main_touch_calib_button_pane_t1

0xeb02,	// (0x0001debd) main_touch_calib_button_pane_t2_ParamLimits

0xeb02,	// (0x0001debd) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f202) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f202) main_touch_calib_button_pane_t

0x95a6,	// (0x00018961) cell_ncimui_button_pane

0x95a6,	// (0x00018961) bg_button_pane_cp032

0xeb20,	// (0x0001dedb) cell_ncimui_button_pane_t1

0xce87,	// (0x0001c242) image3_infobar_pane_ParamLimits

0xce87,	// (0x0001c242) image3_infobar_pane

0x7bbb,	// (0x00016f76) fs_bigclock_status_pane_ParamLimits

0x7bbb,	// (0x00016f76) fs_bigclock_status_pane

0x7bc8,	// (0x00016f83) main_fs_bigclock_clock_pane_ParamLimits

0x7bc8,	// (0x00016f83) main_fs_bigclock_clock_pane

0x7bdc,	// (0x00016f97) main_fs_bigclock_indi_pane_ParamLimits

0x7bdc,	// (0x00016f97) main_fs_bigclock_indi_pane

0x7bf7,	// (0x00016fb2) main_fs_bigclock_swipe_pane_ParamLimits

0x7bf7,	// (0x00016fb2) main_fs_bigclock_swipe_pane

0x95a6,	// (0x00018961) main_fs_clock_dumped_data

0xe023,	// (0x0001d3de) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe023,	// (0x0001d3de) list_single_fs_bigclock_indicator_pane_g1

0xe04d,	// (0x0001d408) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe04d,	// (0x0001d408) list_single_fs_bigclock_indicator_pane_g2

0xe067,	// (0x0001d422) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe067,	// (0x0001d422) list_single_fs_bigclock_indicator_pane_g3

0xe081,	// (0x0001d43c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe081,	// (0x0001d43c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0001f035) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0001f035) list_single_fs_bigclock_indicator_pane_g

0xe0ac,	// (0x0001d467) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0ac,	// (0x0001d467) list_single_fs_bigclock_indicator_pane_t1

0xe0d4,	// (0x0001d48f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0d4,	// (0x0001d48f) list_single_fs_bigclock_indicator_pane_t2

0xe0fc,	// (0x0001d4b7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0fc,	// (0x0001d4b7) list_single_fs_bigclock_indicator_pane_t3

0xe124,	// (0x0001d4df) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe124,	// (0x0001d4df) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0001f040) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0001f040) list_single_fs_bigclock_indicator_pane_t

0xeb2e,	// (0x0001dee9) image3_infobar_fav_pane_ParamLimits

0xeb2e,	// (0x0001dee9) image3_infobar_fav_pane

0xeb3e,	// (0x0001def9) image3_infobar_loc_pane_ParamLimits

0xeb3e,	// (0x0001def9) image3_infobar_loc_pane

0xeb54,	// (0x0001df0f) image3_infobar_time_pane_ParamLimits

0xeb54,	// (0x0001df0f) image3_infobar_time_pane

0xc35c,	// (0x0001b717) image3_infobar_time_pane_g1

0xeb64,	// (0x0001df1f) image3_infobar_time_pane_t1

0xc35c,	// (0x0001b717) image3_infobar_loc_pane_g1

0xeb72,	// (0x0001df2d) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f207) image3_infobar_loc_pane_g

0xeb7a,	// (0x0001df35) image3_infobar_loc_pane_t1

0xc35c,	// (0x0001b717) image3_infobar_fav_pane_g1

0xeb88,	// (0x0001df43) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f20c) image3_infobar_fav_pane_g

0xeb90,	// (0x0001df4b) fs_bigclock_status_battery_pane

0xeb99,	// (0x0001df54) fs_bigclock_status_signal_pane

0xeba2,	// (0x0001df5d) fs_bigclock_status_title_pane

0xebab,	// (0x0001df66) fs_bigclock_status_signal_pane_g1

0xebb4,	// (0x0001df6f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f211) fs_bigclock_status_signal_pane_g

0xebbc,	// (0x0001df77) fs_bigclock_status_battery_pane_g1

0xebc5,	// (0x0001df80) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f216) fs_bigclock_status_battery_pane_g

0xebcd,	// (0x0001df88) fs_bigclock_status_title_pane_t1

0xc35c,	// (0x0001b717) main_fs_bigclock_clock_pane_g1

0xebdb,	// (0x0001df96) main_fs_bigclock_clock_pane_g2

0xebdb,	// (0x0001df96) main_fs_bigclock_clock_pane_g3

0xebdb,	// (0x0001df96) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f21b) main_fs_bigclock_clock_pane_g

0xebe3,	// (0x0001df9e) main_fs_bigclock_clock_pane_t1

0xebf1,	// (0x0001dfac) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f224) main_fs_bigclock_clock_pane_t

0x8a72,	// (0x00017e2d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a72,	// (0x00017e2d) list_single_fs_bigclock_indicator_pane

0x8a83,	// (0x00017e3e) list_single_fs_bigclock_pane_ParamLimits

0x8a83,	// (0x00017e3e) list_single_fs_bigclock_pane

0xec09,	// (0x0001dfc4) main_fs_bigclock_indicator_pane_t1

0xec18,	// (0x0001dfd3) list_single_fs_bigclock_pane_g1

0xec20,	// (0x0001dfdb) list_single_fs_bigclock_pane_t1

0xc35c,	// (0x0001b717) main_fs_bigclock_swipe_pane_g1

0xec63,	// (0x0001e01e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f235) main_fs_bigclock_swipe_pane_g

0xec6b,	// (0x0001e026) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec6b,	// (0x0001e026) main_fs_bigclock_swipe_pane_t1

0x248c,	// (0x00011847) call_type_pane_ParamLimits

0x95a6,	// (0x00018961) main_btmg_pane

0xe8a8,	// (0x0001dc63) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a8,	// (0x0001dc63) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001f1a8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001f1a8) list_single_cale_mrui_row_pane_g

0xea29,	// (0x0001dde4) list_recal_vselct_arw_lo_pane

0xea31,	// (0x0001ddec) list_recal_vselct_arw_up_pane

0xea39,	// (0x0001ddf4) list_recal_vselct_pane

0x8ae6,	// (0x00017ea1) btmg_button_pane

0x8af0,	// (0x00017eab) main_btmg_pane_g1

0x95a6,	// (0x00018961) bg_button_pane_cp044

0xec88,	// (0x0001e043) btmg_button_pane_t1

0xbe3b,	// (0x0001b1f6) aid_listscroll_gen

0x9607,	// (0x000189c2) main_cntbar_detail_pane

0xe5e7,	// (0x0001d9a2) list_cmail_folder_pane

0xe5f7,	// (0x0001d9b2) sp_fs_scroll_pane_cp03_ParamLimits

0xecd0,	// (0x0001e08b) list_single_fs_dyc_pane_cp01_ParamLimits

0xecd0,	// (0x0001e08b) list_single_fs_dyc_pane_cp01

0xec96,	// (0x0001e051) aid_size_cmail_indent

0xec9f,	// (0x0001e05a) list_single_dyc_row_pane_cp01

0x8b2a,	// (0x00017ee5) cntbar_detail_list_pane_ParamLimits

0x8b2a,	// (0x00017ee5) cntbar_detail_list_pane

0x8b7c,	// (0x00017f37) main_cntbar_detail_cont_pane_ParamLimits

0x8b7c,	// (0x00017f37) main_cntbar_detail_cont_pane

0x23af,	// (0x0001176a) scroll_pane_cp032_ParamLimits

0x23af,	// (0x0001176a) scroll_pane_cp032

0x8b90,	// (0x00017f4b) cntbar_detail_list_event_pane_ParamLimits

0x8b90,	// (0x00017f4b) cntbar_detail_list_event_pane

0x8b3c,	// (0x00017ef7) cntbar_detail_list_shct_pane

0xa26f,	// (0x0001962a) aid_list_gen

0xecea,	// (0x0001e0a5) aid_scroll

0xecf3,	// (0x0001e0ae) aid_size_touch_scroll_bar

0x6f5a,	// (0x00016315) aid_list_double

0xecfc,	// (0x0001e0b7) aid_list_single

0x6f5a,	// (0x00016315) aid_list_single_lg

0xed05,	// (0x0001e0c0) aid_list_z_g_a_sm

0xed0d,	// (0x0001e0c8) aid_list_z_g_d

0x8ba0,	// (0x00017f5b) aid_txt_z_prm

0x8bae,	// (0x00017f69) aid_txt_z_prm_cp01

0x8bbc,	// (0x00017f77) aid_txt_z_sec

0x8bca,	// (0x00017f85) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8bca,	// (0x00017f85) main_cntbar_detail_cont_pane_g1

0x8bde,	// (0x00017f99) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bde,	// (0x00017f99) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f23a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f23a) main_cntbar_detail_cont_pane_g

0xed15,	// (0x0001e0d0) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x0001e0de) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x0001e0ec) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f23f) main_cntbar_detail_cont_pane_t

0x8bee,	// (0x00017fa9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bee,	// (0x00017fa9) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x0001e0fa) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x0001e103) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f246) cntbar_detail_list_shct_pane_g

0x8c00,	// (0x00017fbb) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c00,	// (0x00017fbb) cntbar_detail_list_event_pane_g1

0x8c0c,	// (0x00017fc7) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c0c,	// (0x00017fc7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f24b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f24b) cntbar_detail_list_event_pane_g

0x8c7a,	// (0x00018035) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c7a,	// (0x00018035) cntbar_detail_list_event_pane_t1

0x8c8f,	// (0x0001804a) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c8f,	// (0x0001804a) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f258) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f258) cntbar_detail_list_event_pane_t

0xc35c,	// (0x0001b717) cell_cntbar_detail_list_shct_pane_g1

0x2832,	// (0x00011bed) navi_pane_mv_g3

0x9607,	// (0x000189c2) main_cntbar_detail_pane_ParamLimits

0x95a6,	// (0x00018961) main_notif_wgt_pane

0xcc1b,	// (0x0001bfd6) aid_tch_main_mp4_pane_g4

0xce19,	// (0x0001c1d4) popup_slider_window_cp02

0xea1f,	// (0x0001ddda) list_recal_day_event_pane

0x8afa,	// (0x00017eb5) cntbar_detail_btn_pane_ParamLimits

0x8afa,	// (0x00017eb5) cntbar_detail_btn_pane

0x8b12,	// (0x00017ecd) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b12,	// (0x00017ecd) cntbar_detail_btn_pane_cp01

0x8b3c,	// (0x00017ef7) cntbar_detail_list_shct_pane_ParamLimits

0x8b4c,	// (0x00017f07) cntbar_detail_pane_g1_ParamLimits

0x8b4c,	// (0x00017f07) cntbar_detail_pane_g1

0x8b60,	// (0x00017f1b) cntbar_detail_pane_t1_ParamLimits

0x8b60,	// (0x00017f1b) cntbar_detail_pane_t1

0x8c18,	// (0x00017fd3) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c18,	// (0x00017fd3) cntbar_detail_list_event_pane_g3

0x8c30,	// (0x00017feb) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c30,	// (0x00017feb) cntbar_detail_list_event_pane_g4

0x8c48,	// (0x00018003) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c48,	// (0x00018003) cntbar_detail_list_event_pane_g5

0x8c60,	// (0x0001801b) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c60,	// (0x0001801b) cntbar_detail_list_event_pane_g6

0x8ca4,	// (0x0001805f) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ca4,	// (0x0001805f) cntbar_detail_list_event_pane_t3

0x8cb6,	// (0x00018071) popup_notif_wgt_window_ParamLimits

0x8cb6,	// (0x00018071) popup_notif_wgt_window

0x8ccf,	// (0x0001808a) popup_submenu_window_cp01_ParamLimits

0x8ccf,	// (0x0001808a) popup_submenu_window_cp01

0xa9a4,	// (0x00019d5f) bg_popup_window_pane_cp10

0xed51,	// (0x0001e10c) listscroll_notif_wgt_pane

0xed63,	// (0x0001e11e) list_notif_wgt_window

0xed6c,	// (0x0001e127) scroll_pane_cp033

0x8ce3,	// (0x0001809e) list_notif_wgt_row_pane_ParamLimits

0x8ce3,	// (0x0001809e) list_notif_wgt_row_pane

0xed75,	// (0x0001e130) aid_size_list_notif_wgt_del

0xed82,	// (0x0001e13d) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0001e149) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0001e155) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f25f) list_notif_wgt_row_pane_g

0xeda7,	// (0x0001e162) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0001e177) list_notif_wgt_row_pane_t2

0xedce,	// (0x0001e189) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f266) list_notif_wgt_row_pane_t

0xd3d9,	// (0x0001c794) list_recal_day_event_pane_g1

0xede0,	// (0x0001e19b) list_recal_day_event_pane_t1

0x95a6,	// (0x00018961) bg_button_pane_cp045

0xedef,	// (0x0001e1aa) cntbar_detail_btn_pane_t1

0xbe4f,	// (0x0001b20a) main_callh_pane_ParamLimits

0xbe4f,	// (0x0001b20a) main_callh_pane

0x95a6,	// (0x00018961) main_coverflow0_pane

0x95a6,	// (0x00018961) main_wgtman_pane

0x7c05,	// (0x00016fc0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c05,	// (0x00016fc0) main_fs_bigclock_unlock_btn_pane

0x849e,	// (0x00017859) bg_button_pane_cp16

0x84ae,	// (0x00017869) cell_tport_appsw_pane_g3

0x8cf3,	// (0x000180ae) cf0_flow_pane_ParamLimits

0x8cf3,	// (0x000180ae) cf0_flow_pane

0xedfd,	// (0x0001e1b8) listscroll_cf0_pane

0xee08,	// (0x0001e1c3) main_cf0_pane_g1

0x8d08,	// (0x000180c3) main_cf0_pane_t1_ParamLimits

0x8d08,	// (0x000180c3) main_cf0_pane_t1

0x8d1f,	// (0x000180da) main_cf0_pane_t2_ParamLimits

0x8d1f,	// (0x000180da) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f272) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f272) main_cf0_pane_t

0xee1a,	// (0x0001e1d5) scroll_pane_cp11

0x8d36,	// (0x000180f1) cf0_flow_pane_g1

0x8d42,	// (0x000180fd) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f277) cf0_flow_pane_g

0x8d4e,	// (0x00018109) cf0_flow_pane_t1

0x95a6,	// (0x00018961) main_call6_pane

0x95a6,	// (0x00018961) main_calllock_pane

0x8d60,	// (0x0001811b) call6_btn_grp_pane_ParamLimits

0x8d60,	// (0x0001811b) call6_btn_grp_pane

0x8d7a,	// (0x00018135) call6_pane_g1_ParamLimits

0x8d7a,	// (0x00018135) call6_pane_g1

0x8d90,	// (0x0001814b) popup_call6_1st_window_ParamLimits

0x8d90,	// (0x0001814b) popup_call6_1st_window

0x8da1,	// (0x0001815c) popup_call6_2nd_window_ParamLimits

0x8da1,	// (0x0001815c) popup_call6_2nd_window

0x8db2,	// (0x0001816d) cell_call6_btn_pane_ParamLimits

0x8db2,	// (0x0001816d) cell_call6_btn_pane

0xa9a4,	// (0x00019d5f) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0001e1e0) popup_call6_1st_window_g1

0xee2d,	// (0x0001e1e8) popup_call6_1st_window_g2

0xee35,	// (0x0001e1f0) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f27c) popup_call6_1st_window_g

0xee3d,	// (0x0001e1f8) popup_call6_1st_window_t1

0xee4c,	// (0x0001e207) popup_call6_1st_window_t2

0xee5c,	// (0x0001e217) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f283) popup_call6_1st_window_t

0xa9a4,	// (0x00019d5f) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0001e1e0) popup_call6_2nd_window_g1

0xee2d,	// (0x0001e1e8) popup_call6_2nd_window_g2

0xee35,	// (0x0001e1f0) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f27c) popup_call6_2nd_window_g

0xee3d,	// (0x0001e1f8) popup_call6_2nd_window_t1

0x95a6,	// (0x00018961) bg_button_pane_cp15

0xee6c,	// (0x0001e227) cell_call6_btn_pane_g1

0xee75,	// (0x0001e230) cell_call6_btn_pane_t1

0x8dc6,	// (0x00018181) listscroll_wgtman_pane_ParamLimits

0x8dc6,	// (0x00018181) listscroll_wgtman_pane

0x8de9,	// (0x000181a4) wgtman_btn_pane_ParamLimits

0x8de9,	// (0x000181a4) wgtman_btn_pane

0xa86a,	// (0x00019c25) aid_scroll_copy1

0xee84,	// (0x0001e23f) list_wgtman_pane

0x8e2c,	// (0x000181e7) wgtman_btn_pane_g1_ParamLimits

0x8e2c,	// (0x000181e7) wgtman_btn_pane_g1

0x8e58,	// (0x00018213) wgtman_btn_pane_t1_ParamLimits

0x8e58,	// (0x00018213) wgtman_btn_pane_t1

0xee8e,	// (0x0001e249) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0001e249) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f28a) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f28a) wgtman_btn_pane_t

0xd3ad,	// (0x0001c768) listrow_wgtman_pane_ParamLimits

0xd3ad,	// (0x0001c768) listrow_wgtman_pane

0x8e95,	// (0x00018250) listrow_wgtman_pane_g1

0x8ea2,	// (0x0001825d) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f28f) listrow_wgtman_pane_g

0x8ec0,	// (0x0001827b) listrow_wgtman_pane_t1

0x8ed8,	// (0x00018293) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f294) listrow_wgtman_pane_t

0x8efe,	// (0x000182b9) wait_bar_pane_cp09

0xeea5,	// (0x0001e260) main_calllock_btn_pane

0xeeaf,	// (0x0001e26a) main_calllock_pane_g1

0x95a6,	// (0x00018961) bg_button_pane_cp17

0xeebb,	// (0x0001e276) main_calllock_btn_pane_g1

0xeec4,	// (0x0001e27f) main_calllock_btn_pane_t1

0x95a6,	// (0x00018961) main_dialer3_pane

0x95a6,	// (0x00018961) main_fmrd2_pane

0xc35c,	// (0x0001b717) main_fs_bigclock_unlock_btn_pane_g1

0xeedb,	// (0x0001e296) main_fs_bigclock_unlock_btn_pane_t1

0x8f10,	// (0x000182cb) area_fmrd2_info_pane_ParamLimits

0x8f10,	// (0x000182cb) area_fmrd2_info_pane

0x8f1f,	// (0x000182da) area_fmrd2_visual_pane_ParamLimits

0x8f1f,	// (0x000182da) area_fmrd2_visual_pane

0x8f2d,	// (0x000182e8) fmrd2_indi_pane_ParamLimits

0x8f2d,	// (0x000182e8) fmrd2_indi_pane

0x8f3a,	// (0x000182f5) area_fmrd2_visual_pane_g1

0x8f42,	// (0x000182fd) area_fmrd2_visual_pane_t1

0x8f52,	// (0x0001830d) area_fmrd2_visual_pane_t2

0x8f62,	// (0x0001831d) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f29e) area_fmrd2_visual_pane_t

0x8f72,	// (0x0001832d) area_fmrd2_info_pane_g1

0x8f7a,	// (0x00018335) area_fmrd2_info_pane_t1

0x8f8a,	// (0x00018345) area_fmrd2_info_pane_t2

0x8f9a,	// (0x00018355) area_fmrd2_info_pane_t3

0x8faa,	// (0x00018365) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f2a5) area_fmrd2_info_pane_t

0x8fba,	// (0x00018375) fmrd2_indi_pane_t1

0x8fca,	// (0x00018385) fmrd2_indi_pane_t2

0x8fda,	// (0x00018395) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f2ae) fmrd2_indi_pane_t

0xe090,	// (0x0001d44b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe090,	// (0x0001d44b) list_single_fs_bigclock_indicator_pane_g5

0xe139,	// (0x0001d4f4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe139,	// (0x0001d4f4) list_single_fs_bigclock_indicator_pane_t5

0x86c5,	// (0x00017a80) aid_cell_bcale_month_pane_ParamLimits

0x86c5,	// (0x00017a80) aid_cell_bcale_month_pane

0x86e3,	// (0x00017a9e) bcale_month_pane_ParamLimits

0x86e3,	// (0x00017a9e) bcale_month_pane

0x8705,	// (0x00017ac0) bcale_preview_pane_ParamLimits

0x8705,	// (0x00017ac0) bcale_preview_pane

0xec20,	// (0x0001dfdb) list_single_fs_bigclock_pane_t1_ParamLimits

0xec3f,	// (0x0001dffa) list_single_fs_bigclock_pane_t2_ParamLimits

0xec3f,	// (0x0001dffa) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f230) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f230) list_single_fs_bigclock_pane_t

0xeed3,	// (0x0001e28e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f299) main_fs_bigclock_unlock_btn_pane_g

0x8fea,	// (0x000183a5) aid_dia3_key_size_ParamLimits

0x8fea,	// (0x000183a5) aid_dia3_key_size

0x8ff9,	// (0x000183b4) aid_dia3_listrow_size_ParamLimits

0x8ff9,	// (0x000183b4) aid_dia3_listrow_size

0x900e,	// (0x000183c9) dia3_keypad_fun_pane_ParamLimits

0x900e,	// (0x000183c9) dia3_keypad_fun_pane

0x902a,	// (0x000183e5) dia3_keypad_num_pane_ParamLimits

0x902a,	// (0x000183e5) dia3_keypad_num_pane

0x9043,	// (0x000183fe) dia3_listscroll_pane_ParamLimits

0x9043,	// (0x000183fe) dia3_listscroll_pane

0x9056,	// (0x00018411) dia3_numentry_pane_ParamLimits

0x9056,	// (0x00018411) dia3_numentry_pane

0xeee9,	// (0x0001e2a4) dia3_list_pane

0xeef4,	// (0x0001e2af) scroll_pane_cp12

0x95a6,	// (0x00018961) bg_dia3_numentry_pane

0x906a,	// (0x00018425) dia3_numentry_pane_t1

0x9079,	// (0x00018434) cell_dia3_key_num_pane

0x9081,	// (0x0001843c) cell_dia3_key0_fun_pane_ParamLimits

0x9081,	// (0x0001843c) cell_dia3_key0_fun_pane

0x9095,	// (0x00018450) cell_dia3_key1_fun_pane_ParamLimits

0x9095,	// (0x00018450) cell_dia3_key1_fun_pane

0x90ad,	// (0x00018468) dia3_listrow_pane

0xdd8e,	// (0x0001d149) bg_dia3_numentry_pane_g1

0x95a6,	// (0x00018961) bg_button_pane_cp21

0xeeff,	// (0x0001e2ba) cell_dia3_key_num_pane_t1

0xef0d,	// (0x0001e2c8) cell_dia3_key_num_pane_t2

0xef1c,	// (0x0001e2d7) cell_dia3_key_num_pane_t3

0xef2b,	// (0x0001e2e6) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f2b5) cell_dia3_key_num_pane_t

0x95a6,	// (0x00018961) bg_button_pane_cp19

0x90bf,	// (0x0001847a) cell_dia3_key0_fun_pane_g1

0x95a6,	// (0x00018961) bg_button_pane_cp20

0x90c7,	// (0x00018482) cell_dia3_key1_fun_pane_g1

0x90cf,	// (0x0001848a) area_left_week_number_pane

0x90dd,	// (0x00018498) area_top_day_name_pane

0x90f0,	// (0x000184ab) frame_month_view_pane

0xef3a,	// (0x0001e2f5) grid_month_view_pane

0x9105,	// (0x000184c0) cell_top_day_name_pane_ParamLimits

0x9105,	// (0x000184c0) cell_top_day_name_pane

0x9134,	// (0x000184ef) cell_area_left_week_number_pane_ParamLimits

0x9134,	// (0x000184ef) cell_area_left_week_number_pane

0x9148,	// (0x00018503) cell_month_view_pane_ParamLimits

0x9148,	// (0x00018503) cell_month_view_pane

0xef48,	// (0x0001e303) frm_month_g1

0x9177,	// (0x00018532) frm_month_g2

0x918a,	// (0x00018545) frm_month_g3

0x919d,	// (0x00018558) frm_month_g4

0x91b0,	// (0x0001856b) frm_month_g5

0x91c3,	// (0x0001857e) frm_month_g6

0x91d6,	// (0x00018591) frm_month_g7

0xef55,	// (0x0001e310) frm_month_g8

0x91eb,	// (0x000185a6) frm_month_g9

0x91fb,	// (0x000185b6) frm_month_g10

0x920b,	// (0x000185c6) frm_month_g11

0x921b,	// (0x000185d6) frm_month_g12

0x922d,	// (0x000185e8) frm_month_g13

0x9241,	// (0x000185fc) frm_month_g14

0x9255,	// (0x00018610) frm_month_g15

0x9269,	// (0x00018624) frm_month_g16

0x000f,

0xff03,	// (0x0001f2be) frm_month_g

0xef62,	// (0x0001e31d) cell_top_day_name_pane_t1

0x927d,	// (0x00018638) cell_area_left_week_number_pane_g1

0x9289,	// (0x00018644) cell_area_left_week_number_pane_t1

0xc58c,	// (0x0001b947) cell_month_view_pane_g1

0x929c,	// (0x00018657) cell_month_view_pane_t1

0x95a6,	// (0x00018961) main_fps_pane

0xe377,	// (0x0001d732) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe377,	// (0x0001d732) cmail_ddmenu_btn02_pane_cp1

0xe393,	// (0x0001d74e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe393,	// (0x0001d74e) cmail_ddmenu_btn02_pane_cp2

0x89cb,	// (0x00017d86) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x89cb,	// (0x00017d86) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f1e3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f1e3) cmail_ddmenu_btn02_pane_g

0x89ec,	// (0x00017da7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x89ec,	// (0x00017da7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f1e8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f1e8) cmail_ddmenu_btn02_pane_t

0x92af,	// (0x0001866a) fps_text_pane_ParamLimits

0x92af,	// (0x0001866a) fps_text_pane

0x92c6,	// (0x00018681) main_fps_pane_g1_ParamLimits

0x92c6,	// (0x00018681) main_fps_pane_g1

0x92de,	// (0x00018699) wait_bar_pane_cp010_ParamLimits

0x92de,	// (0x00018699) wait_bar_pane_cp010

0x92f1,	// (0x000186ac) fps_text_pane_t1_ParamLimits

0x92f1,	// (0x000186ac) fps_text_pane_t1

0xecbc,	// (0x0001e077) cam4_image_uncrop_pane_g1

0xecc5,	// (0x0001e080) cam4_image_uncrop_pane_g2

0x5c9b,	// (0x00015056) cam4_image_uncrop_pane_g3

0x5ca4,	// (0x0001505f) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0001ecaf) cam4_image_uncrop_pane_g

0x90ad,	// (0x00018468) dia3_listrow_pane_ParamLimits

0x95a6,	// (0x00018961) main_phob2_pane

0x846d,	// (0x00017828) cell_tport_appsw_pane_cp02_ParamLimits

0x846d,	// (0x00017828) cell_tport_appsw_pane_cp02

0x8481,	// (0x0001783c) cell_tport_appsw_pane_cp03_ParamLimits

0x8481,	// (0x0001783c) cell_tport_appsw_pane_cp03

0x95a6,	// (0x00018961) phob2_contact_card_pane

0x95a6,	// (0x00018961) phob2_listscroll_pane

0xef75,	// (0x0001e330) phob2_list_pane

0xef7d,	// (0x0001e338) scroll_pane_cp034

0x9309,	// (0x000186c4) phob2_cc_data_pane_ParamLimits

0x9309,	// (0x000186c4) phob2_cc_data_pane

0x932a,	// (0x000186e5) phob2_cc_listscroll_pane_ParamLimits

0x932a,	// (0x000186e5) phob2_cc_listscroll_pane

0x934c,	// (0x00018707) list_double_large_graphic_phob2_pane_ParamLimits

0x934c,	// (0x00018707) list_double_large_graphic_phob2_pane

0x9360,	// (0x0001871b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9360,	// (0x0001871b) list_double_large_graphic_phob2_pane_g1

0x9376,	// (0x00018731) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9376,	// (0x00018731) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f2df) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f2df) list_double_large_graphic_phob2_pane_g

0x9382,	// (0x0001873d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9382,	// (0x0001873d) list_double_large_graphic_phob2_pane_t1

0x9397,	// (0x00018752) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9397,	// (0x00018752) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f2e4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f2e4) list_double_large_graphic_phob2_pane_t

0x95a6,	// (0x00018961) list_highlight_pane_cp024

0xef85,	// (0x0001e340) phob2_cc_button_pane

0x93a9,	// (0x00018764) phob2_cc_data_pane_g1_ParamLimits

0x93a9,	// (0x00018764) phob2_cc_data_pane_g1

0x93bf,	// (0x0001877a) phob2_cc_data_pane_g2_ParamLimits

0x93bf,	// (0x0001877a) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f2e9) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f2e9) phob2_cc_data_pane_g

0x93d1,	// (0x0001878c) phob2_cc_data_pane_t1_ParamLimits

0x93d1,	// (0x0001878c) phob2_cc_data_pane_t1

0x93e9,	// (0x000187a4) phob2_cc_data_pane_t2_ParamLimits

0x93e9,	// (0x000187a4) phob2_cc_data_pane_t2

0x9403,	// (0x000187be) phob2_cc_data_pane_t3_ParamLimits

0x9403,	// (0x000187be) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f2ee) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f2ee) phob2_cc_data_pane_t

0xef8d,	// (0x0001e348) phob2_cc_list_pane_ParamLimits

0xef8d,	// (0x0001e348) phob2_cc_list_pane

0xd484,	// (0x0001c83f) scroll_pane_cp035_ParamLimits

0xd484,	// (0x0001c83f) scroll_pane_cp035

0x9607,	// (0x000189c2) bg_button_pane_cp033

0xef99,	// (0x0001e354) phob2_cc_button_pane_g1

0xefa5,	// (0x0001e360) phob2_cc_button_pane_t1

0xefba,	// (0x0001e375) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f2f5) phob2_cc_button_pane_t

0x941d,	// (0x000187d8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x941d,	// (0x000187d8) list_double_large_graphic_phob2_cc_pane

0x9431,	// (0x000187ec) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9431,	// (0x000187ec) list_double_large_graphic_phob2_cc_pane_g1

0x943d,	// (0x000187f8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x943d,	// (0x000187f8) list_double_large_graphic_phob2_cc_pane_g2

0x9449,	// (0x00018804) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9449,	// (0x00018804) list_double_large_graphic_phob2_cc_pane_g3

0x9455,	// (0x00018810) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9455,	// (0x00018810) list_double_large_graphic_phob2_cc_pane_g4

0x9461,	// (0x0001881c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9461,	// (0x0001881c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f2fa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f2fa) list_double_large_graphic_phob2_cc_pane_g

0x946d,	// (0x00018828) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x946d,	// (0x00018828) list_double_large_graphic_phob2_cc_pane_t1

0x9496,	// (0x00018851) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9496,	// (0x00018851) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f305) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f305) list_double_large_graphic_phob2_cc_pane_t

0xefcc,	// (0x0001e387) list_highlight_pane_cp025_ParamLimits

0xefcc,	// (0x0001e387) list_highlight_pane_cp025

0x9607,	// (0x000189c2) bg_button_pane_cp033_ParamLimits

0xef99,	// (0x0001e354) phob2_cc_button_pane_g1_ParamLimits

0xefa5,	// (0x0001e360) phob2_cc_button_pane_t1_ParamLimits

0xefba,	// (0x0001e375) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f2f5) phob2_cc_button_pane_t_ParamLimits

0xffea,	// (0x0000f3a5) popup_wgtman_window

0xd1fd,	// (0x0001c5b8) scroll_pane_cp038

0x8e0e,	// (0x000181c9) wgtman_btn_pane_cp_01_ParamLimits

0x8e0e,	// (0x000181c9) wgtman_btn_pane_cp_01

0xefda,	// (0x0001e395) wgtman_content_pane

0xefe3,	// (0x0001e39e) wgtman_heading_pane

0x95a6,	// (0x00018961) bg_heading_pane_cp02

0xefec,	// (0x0001e3a7) wgtman_heading_pane_g1

0xeff4,	// (0x0001e3af) wgtman_heading_pane_t1

0xf002,	// (0x0001e3bd) scroll_pane_cp036

0xf00a,	// (0x0001e3c5) wgtman_list_pane

0xf012,	// (0x0001e3cd) wgtman_list_pane_t1_ParamLimits

0xf012,	// (0x0001e3cd) wgtman_list_pane_t1

0xcf8a,	// (0x0001c345) cam4_grid_pane

0x6a54,	// (0x00015e0f) bg_button_pane_cp015_ParamLimits

0x6a68,	// (0x00015e23) bg_button_pane_cp016_ParamLimits

0x6a7b,	// (0x00015e36) bg_button_pane_cp017_ParamLimits

0x6ad3,	// (0x00015e8e) popup_vitu2_query_window_g3_ParamLimits

0x6ad3,	// (0x00015e8e) popup_vitu2_query_window_g3

0x6b90,	// (0x00015f4b) popup_vitu2_query_window_t6_ParamLimits

0x6b90,	// (0x00015f4b) popup_vitu2_query_window_t6

0x6bbb,	// (0x00015f76) popup_vitu2_query_window_t7_ParamLimits

0x6bbb,	// (0x00015f76) popup_vitu2_query_window_t7

0xecbc,	// (0x0001e077) cam4_grid_pane_g1

0xecc5,	// (0x0001e080) cam4_grid_pane_g2

0xf02c,	// (0x0001e3e7) cam4_grid_pane_g3

0xf035,	// (0x0001e3f0) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f30a) cam4_grid_pane_g

0x11ac,	// (0x00010567) aid_placing_vt_slider_lsc_ParamLimits

0x1499,	// (0x00010854) vidtel_button_pane_ParamLimits

0x1499,	// (0x00010854) vidtel_button_pane

0xf040,	// (0x0001e3fb) bg_button_pane_cp034

0x94bf,	// (0x0001887a) vidtel_button_pane_g1

0xf04a,	// (0x0001e405) vidtel_button_pane_t1

0xd373,	// (0x0001c72e) aid_size_vtel_slider_touch

0xd484,	// (0x0001c83f) scroll_pane_cp039

0xddcc,	// (0x0001d187) ncim_query_button_pane_cp01_ParamLimits

0xddeb,	// (0x0001d1a6) ncimui_query_pane_g1_ParamLimits

0x9607,	// (0x000189c2) input_focus_pane_cp012_ParamLimits

0xde10,	// (0x0001d1cb) ncim_query_entry_pane_t1_ParamLimits

0xd484,	// (0x0001c83f) scroll_pane_cp039_ParamLimits

0x27a4,	// (0x00011b5f) navi_pane_bcale_mc_g1

0x27ac,	// (0x00011b67) navi_pane_bcale_mc_t1

0xe3dc,	// (0x0001d797) main_sp_fs_email_pane_g1

0xe3e8,	// (0x0001d7a3) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0001f0a6) main_sp_fs_email_pane_g

0xe8b4,	// (0x0001dc6f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8b4,	// (0x0001dc6f) list_single_cale_mrui_row_pane_g3

0x8a0c,	// (0x00017dc7) list_single_recal_day_pane_g5_event_pane

0xea91,	// (0x0001de4c) list_single_recal_day_pane_g7

0xf058,	// (0x0001e413) list_recal_day_event_pane_cp01

0xf061,	// (0x0001e41c) list_recal_vselct_arw_lo_pane_cp01

0xf069,	// (0x0001e424) list_recal_vselct_arw_up_pane_cp01

0xf071,	// (0x0001e42c) list_recal_vselct_pane_cp01

0xd3d9,	// (0x0001c794) list_recal_day_event_pane_cp01_g1

0xf07b,	// (0x0001e436) list_recal_day_event_pane_cp01_t1

0xea99,	// (0x0001de54) list_single_recal_day_pane_t1_ParamLimits

0xeaab,	// (0x0001de66) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f1f8) list_single_recal_day_pane_t_ParamLimits

0x9c83,	// (0x0001903e) bg_notes_pane_ParamLimits

0x9d2e,	// (0x000190e9) list_notes_pane_ParamLimits

0x0337,	// (0x0000f6f2) scroll_pane_cp06_ParamLimits

0x9d6a,	// (0x00019125) main_notes_pane_ParamLimits

0x95a6,	// (0x00018961) main_welc_pane

0x94c7,	// (0x00018882) main_welc_body_pane_ParamLimits

0x94c7,	// (0x00018882) main_welc_body_pane

0x94e6,	// (0x000188a1) main_welc_opti_pane_ParamLimits

0x94e6,	// (0x000188a1) main_welc_opti_pane

0x952f,	// (0x000188ea) main_welc_pane_t1_ParamLimits

0x952f,	// (0x000188ea) main_welc_pane_t1

0xeca8,	// (0x0001e063) main_welc_body_row_pane_ParamLimits

0xeca8,	// (0x0001e063) main_welc_body_row_pane

0x9551,	// (0x0001890c) main_welc_opti_row_pane_ParamLimits

0x9551,	// (0x0001890c) main_welc_opti_row_pane

0xf089,	// (0x0001e444) main_welc_opti_row_pane_g1

0xf091,	// (0x0001e44c) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0001e45b) main_welc_body_row_pane_t1

0xed5b,	// (0x0001e116) popup_notif_wgt_heading_pane

0xed75,	// (0x0001e130) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0001e13d) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0001e149) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0001e155) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f25f) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0001e162) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0001e177) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0001e189) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f266) list_notif_wgt_row_pane_t_ParamLimits

0x8e95,	// (0x00018250) listrow_wgtman_pane_g1_ParamLimits

0x8ea2,	// (0x0001825d) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f28f) listrow_wgtman_pane_g_ParamLimits

0x8ec0,	// (0x0001827b) listrow_wgtman_pane_t1_ParamLimits

0x8ed8,	// (0x00018293) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f294) listrow_wgtman_pane_t_ParamLimits

0x8efe,	// (0x000182b9) wait_bar_pane_cp09_ParamLimits

0x95a6,	// (0x00018961) bg_popup_heading_pane_cp02

0xf0af,	// (0x0001e46a) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0001e472) popup_notif_wgt_heading_pane_t1

0x95a6,	// (0x00018961) main_vids_pane

0x95a6,	// (0x00018961) vids_listscroll_pane

0x9561,	// (0x0001891c) scroll_pane_cp040

0x95a6,	// (0x00018961) vids_list_pane

0x956c,	// (0x00018927) vids_list_double_pane_ParamLimits

0x956c,	// (0x00018927) vids_list_double_pane

0x957d,	// (0x00018938) vids_list_double_pane_g1

0x9586,	// (0x00018941) vids_list_double_pane_t1

0x9596,	// (0x00018951) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f318) vids_list_double_pane_t

0x9607,	// (0x000189c2) main_ncimui_pane_ParamLimits

0x77a1,	// (0x00016b5c) main_ncimui_pane_g1_ParamLimits

0x77ad,	// (0x00016b68) main_ncimui_pane_g2_ParamLimits

0x77ad,	// (0x00016b68) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0001efab) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0001efab) main_ncimui_pane_g

0x9505,	// (0x000188c0) main_welc_pane_g1_ParamLimits

0x9505,	// (0x000188c0) main_welc_pane_g1

0x951a,	// (0x000188d5) main_welc_pane_g2_ParamLimits

0x951a,	// (0x000188d5) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f313) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f313) main_welc_pane_g

0x9c83,	// (0x0001903e) listscroll_mce_pane_ParamLimits

0x2884,	// (0x00011c3f) wait_bar_pane_cp10

0xbe43,	// (0x0001b1fe) main_cale_day_pane_ParamLimits

0xbe43,	// (0x0001b1fe) main_cale_week_pane_ParamLimits

0x9c83,	// (0x0001903e) main_messa_pane_ParamLimits

0x4f59,	// (0x00014314) main_clock2_btn_pane_ParamLimits

0x4f59,	// (0x00014314) main_clock2_btn_pane

0xc720,	// (0x0001badb) main_clock2_btn_pane_cp01_ParamLimits

0xc720,	// (0x0001badb) main_clock2_btn_pane_cp01

0xe837,	// (0x0001dbf2) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0001e1cd) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f26d) main_cf0_pane_g

0x90cf,	// (0x0001848a) area_left_week_number_pane_ParamLimits

0x90dd,	// (0x00018498) area_top_day_name_pane_ParamLimits

0x90f0,	// (0x000184ab) frame_month_view_pane_ParamLimits

0xef3a,	// (0x0001e2f5) grid_month_view_pane_ParamLimits

0xef48,	// (0x0001e303) frm_month_g1_ParamLimits

0x9177,	// (0x00018532) frm_month_g2_ParamLimits

0x918a,	// (0x00018545) frm_month_g3_ParamLimits

0x919d,	// (0x00018558) frm_month_g4_ParamLimits

0x91b0,	// (0x0001856b) frm_month_g5_ParamLimits

0x91c3,	// (0x0001857e) frm_month_g6_ParamLimits

0x91d6,	// (0x00018591) frm_month_g7_ParamLimits

0xef55,	// (0x0001e310) frm_month_g8_ParamLimits

0x91eb,	// (0x000185a6) frm_month_g9_ParamLimits

0x91fb,	// (0x000185b6) frm_month_g10_ParamLimits

0x920b,	// (0x000185c6) frm_month_g11_ParamLimits

0x921b,	// (0x000185d6) frm_month_g12_ParamLimits

0x922d,	// (0x000185e8) frm_month_g13_ParamLimits

0x9241,	// (0x000185fc) frm_month_g14_ParamLimits

0x9255,	// (0x00018610) frm_month_g15_ParamLimits

0x9269,	// (0x00018624) frm_month_g16_ParamLimits

0xff03,	// (0x0001f2be) frm_month_g_ParamLimits

0xef62,	// (0x0001e31d) cell_top_day_name_pane_t1_ParamLimits

0x927d,	// (0x00018638) cell_area_left_week_number_pane_g1_ParamLimits

0x9289,	// (0x00018644) cell_area_left_week_number_pane_t1_ParamLimits

0xc58c,	// (0x0001b947) cell_month_view_pane_g1_ParamLimits

0x929c,	// (0x00018657) cell_month_view_pane_t1_ParamLimits

0x9c7b,	// (0x00019036) main_clock2_btn_pane_g1

0xf0c5,	// (0x0001e480) main_clock2_btn_pane_t1

0x9607,	// (0x000189c2) listscroll_cmail_pane_ParamLimits

0xe3dc,	// (0x0001d797) main_sp_fs_email_pane_g1_ParamLimits

0xe3e8,	// (0x0001d7a3) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0001f0a6) main_sp_fs_email_pane_g_ParamLimits

0xea00,	// (0x0001ddbb) list_recal_day_pane_ParamLimits

0xea11,	// (0x0001ddcc) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
