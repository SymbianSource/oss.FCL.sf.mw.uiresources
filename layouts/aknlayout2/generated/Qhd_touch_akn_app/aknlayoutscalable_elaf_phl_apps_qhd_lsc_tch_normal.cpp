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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000e010 };

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
0x099e,	// (0x0000e9ae) Screen

0x09aa,	// (0x0000e9ba) application_window

0x09e6,	// (0x0000e9f6) area_bottom_pane_ParamLimits

0x09e6,	// (0x0000e9f6) area_bottom_pane

0x0a1f,	// (0x0000ea2f) area_top_pane_ParamLimits

0x0a1f,	// (0x0000ea2f) area_top_pane

0x9246,	// (0x00017256) call_video_uplink_pane_ParamLimits

0x9246,	// (0x00017256) call_video_uplink_pane

0x0aad,	// (0x0000eabd) main_pane_ParamLimits

0x0aad,	// (0x0000eabd) main_pane

0xba12,	// (0x00019a22) context_pane

0x37ce,	// (0x000117de) navi_pane

0x3800,	// (0x00011810) popup_cale_events_window_ParamLimits

0x3800,	// (0x00011810) popup_cale_events_window

0xba25,	// (0x00019a35) popup_mup_playback_window

0x3818,	// (0x00011828) signal_pane

0x9a19,	// (0x00017a29) main_browser_pane

0x9c5e,	// (0x00017c6e) main_burst_pane

0x352e,	// (0x0001153e) main_calc_pane

0xb9b2,	// (0x000199c2) main_cale_day_pane

0x0ee6,	// (0x0000eef6) main_cale_month_pane

0xb9b2,	// (0x000199c2) main_cale_week_pane

0x9c5e,	// (0x00017c6e) main_call_pane

0x9685,	// (0x00017695) main_call_poc_pane

0x9c5e,	// (0x00017c6e) main_camera_pane

0x9c5e,	// (0x00017c6e) main_chi_dic_pane

0xa471,	// (0x00018481) main_clock_pane

0x9685,	// (0x00017695) main_fmradio_pane

0x9c5e,	// (0x00017c6e) main_graph_messa_pane

0x9685,	// (0x00017695) main_help_pane

0x9a19,	// (0x00017a29) main_im_pane

0x98e0,	// (0x000178f0) main_image_pane_ParamLimits

0x98e0,	// (0x000178f0) main_image_pane

0x9685,	// (0x00017695) main_location2_pane

0x9c5e,	// (0x00017c6e) main_location_pane

0x98e0,	// (0x000178f0) main_messa_pane

0x9685,	// (0x00017695) main_mp2_pane

0x9c5e,	// (0x00017c6e) main_mp_pane

0x9685,	// (0x00017695) main_msg_pane

0x9685,	// (0x00017695) main_mup_eq_pane

0x9685,	// (0x00017695) main_mup_pane

0x9a19,	// (0x00017a29) main_notes_pane

0x9685,	// (0x00017695) main_pec_pane

0x9685,	// (0x00017695) main_phob_pane

0x9685,	// (0x00017695) main_pinb_pane

0x9685,	// (0x00017695) main_postcard_pane

0x9685,	// (0x00017695) main_qdial_pane

0x9c5e,	// (0x00017c6e) main_skin_pane

0x9685,	// (0x00017695) main_smil2_pane

0x9c5e,	// (0x00017c6e) main_smil_pane

0x9c5e,	// (0x00017c6e) main_video_pane

0x9c5e,	// (0x00017c6e) main_video_tele_pane

0x98e0,	// (0x000178f0) main_viewer_pane_ParamLimits

0x98e0,	// (0x000178f0) main_viewer_pane

0x9c5e,	// (0x00017c6e) main_vorec_pane

0x3582,	// (0x00011592) popup_blid_sat_info_window_ParamLimits

0x3582,	// (0x00011592) popup_blid_sat_info_window

0x35da,	// (0x000115ea) popup_dyc_status_message_window_ParamLimits

0x35da,	// (0x000115ea) popup_dyc_status_message_window

0x35f4,	// (0x00011604) popup_grid_large_graphic_window_ParamLimits

0x35f4,	// (0x00011604) popup_grid_large_graphic_window

0x36b0,	// (0x000116c0) popup_loc_request_window_ParamLimits

0x36b0,	// (0x000116c0) popup_loc_request_window

0x37a6,	// (0x000117b6) popup_wml_address_window_ParamLimits

0x37a6,	// (0x000117b6) popup_wml_address_window

0x3368,	// (0x00011378) call_muted_g1

0x305e,	// (0x0001106e) popup_call_audio_conf_window_ParamLimits

0x305e,	// (0x0001106e) popup_call_audio_conf_window

0x337c,	// (0x0001138c) popup_call_audio_first_window_ParamLimits

0x337c,	// (0x0001138c) popup_call_audio_first_window

0x33f2,	// (0x00011402) popup_call_audio_in_window_ParamLimits

0x33f2,	// (0x00011402) popup_call_audio_in_window

0x342e,	// (0x0001143e) popup_call_audio_out_window_ParamLimits

0x342e,	// (0x0001143e) popup_call_audio_out_window

0x3468,	// (0x00011478) popup_call_audio_second_window_ParamLimits

0x3468,	// (0x00011478) popup_call_audio_second_window

0x34be,	// (0x000114ce) popup_call_audio_wait_window_ParamLimits

0x34be,	// (0x000114ce) popup_call_audio_wait_window

0x34f3,	// (0x00011503) popup_number_entry_window_ParamLimits

0x34f3,	// (0x00011503) popup_number_entry_window

0x9272,	// (0x00017282) bg_popup_call_pane_cp05_ParamLimits

0x9272,	// (0x00017282) bg_popup_call_pane_cp05

0x9292,	// (0x000172a2) popup_number_entry_window_t1

0x92a5,	// (0x000172b5) popup_number_entry_window_t2

0x92b7,	// (0x000172c7) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0001d02d) popup_number_entry_window_t

0x92c9,	// (0x000172d9) text_title_cp2

0x92dc,	// (0x000172ec) bg_popup_call_pane_cp_ParamLimits

0x92dc,	// (0x000172ec) bg_popup_call_pane_cp

0x92ea,	// (0x000172fa) call_thumbnail_pane

0x92f2,	// (0x00017302) popup_call_audio_in_window_g1_ParamLimits

0x92f2,	// (0x00017302) popup_call_audio_in_window_g1

0x92fe,	// (0x0001730e) popup_call_audio_in_window_g2_ParamLimits

0x92fe,	// (0x0001730e) popup_call_audio_in_window_g2

0x930a,	// (0x0001731a) popup_call_audio_in_window_g3_ParamLimits

0x930a,	// (0x0001731a) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0001d036) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0001d036) popup_call_audio_in_window_g

0x9316,	// (0x00017326) popup_call_audio_in_window_t1_ParamLimits

0x9316,	// (0x00017326) popup_call_audio_in_window_t1

0x9332,	// (0x00017342) popup_call_audio_in_window_t2_ParamLimits

0x9332,	// (0x00017342) popup_call_audio_in_window_t2

0x934e,	// (0x0001735e) popup_call_audio_in_window_t3_ParamLimits

0x934e,	// (0x0001735e) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0001d03d) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0001d03d) popup_call_audio_in_window_t

0x92dc,	// (0x000172ec) bg_popup_call_pane_cp01_ParamLimits

0x92dc,	// (0x000172ec) bg_popup_call_pane_cp01

0x92ea,	// (0x000172fa) call_thumbnail_pane_cp02

0x9361,	// (0x00017371) call_type_pane_cp022

0x9369,	// (0x00017379) popup_call_audio_out_window_g1_ParamLimits

0x9369,	// (0x00017379) popup_call_audio_out_window_g1

0x937b,	// (0x0001738b) popup_call_audio_out_window_g2_ParamLimits

0x937b,	// (0x0001738b) popup_call_audio_out_window_g2

0x9387,	// (0x00017397) popup_call_audio_out_window_g3_ParamLimits

0x9387,	// (0x00017397) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0001d044) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0001d044) popup_call_audio_out_window_g

0x9399,	// (0x000173a9) popup_call_audio_out_window_t1_ParamLimits

0x9399,	// (0x000173a9) popup_call_audio_out_window_t1

0x93b1,	// (0x000173c1) popup_call_audio_out_window_t2_ParamLimits

0x93b1,	// (0x000173c1) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0001d04b) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0001d04b) popup_call_audio_out_window_t

0x93c6,	// (0x000173d6) bg_popup_call_pane_ParamLimits

0x93c6,	// (0x000173d6) bg_popup_call_pane

0x0c68,	// (0x0000ec78) call_thumbnail_pane_cp_ParamLimits

0x0c68,	// (0x0000ec78) call_thumbnail_pane_cp

0x944a,	// (0x0001745a) call_type_pane_cp01_ParamLimits

0x944a,	// (0x0001745a) call_type_pane_cp01

0x948e,	// (0x0001749e) popup_call_audio_first_window_g1_ParamLimits

0x948e,	// (0x0001749e) popup_call_audio_first_window_g1

0x94da,	// (0x000174ea) popup_call_audio_first_window_g2_ParamLimits

0x94da,	// (0x000174ea) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0001d050) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0001d050) popup_call_audio_first_window_g

0x951e,	// (0x0001752e) popup_call_audio_first_window_t1_ParamLimits

0x951e,	// (0x0001752e) popup_call_audio_first_window_t1

0x95ca,	// (0x000175da) popup_call_audio_first_window_t4_ParamLimits

0x95ca,	// (0x000175da) popup_call_audio_first_window_t4

0x9656,	// (0x00017666) popup_call_audio_first_window_t5_ParamLimits

0x9656,	// (0x00017666) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0001d055) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0001d055) popup_call_audio_first_window_t

0x9685,	// (0x00017695) bg_popup_call_pane_cp02

0x968f,	// (0x0001769f) call_type_pane_cp023

0x9697,	// (0x000176a7) popup_call_audio_wait_window_g1

0x969f,	// (0x000176af) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0001d05c) popup_call_audio_wait_window_g

0x96a7,	// (0x000176b7) popup_call_audio_wait_window_t3

0x96b5,	// (0x000176c5) bg_popup_call_pane_cp03_ParamLimits

0x96b5,	// (0x000176c5) bg_popup_call_pane_cp03

0x9715,	// (0x00017725) call_thumbnail_pane_cp011_ParamLimits

0x9715,	// (0x00017725) call_thumbnail_pane_cp011

0x9721,	// (0x00017731) call_type_pane_cp034_ParamLimits

0x9721,	// (0x00017731) call_type_pane_cp034

0x975d,	// (0x0001776d) popup_call_audio_second_window_g1_ParamLimits

0x975d,	// (0x0001776d) popup_call_audio_second_window_g1

0x9799,	// (0x000177a9) popup_call_audio_second_window_g2_ParamLimits

0x9799,	// (0x000177a9) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0001d061) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0001d061) popup_call_audio_second_window_g

0x97d5,	// (0x000177e5) popup_call_audio_second_window_t1_ParamLimits

0x97d5,	// (0x000177e5) popup_call_audio_second_window_t1

0x9856,	// (0x00017866) popup_call_audio_second_window_t2_ParamLimits

0x9856,	// (0x00017866) popup_call_audio_second_window_t2

0x988c,	// (0x0001789c) popup_call_audio_second_window_t3_ParamLimits

0x988c,	// (0x0001789c) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0001d066) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0001d066) popup_call_audio_second_window_t

0x9685,	// (0x00017695) bg_popup_call_pane_cp04

0x98c2,	// (0x000178d2) list_conf_pane

0x98ca,	// (0x000178da) popup_call_audio_conf_window_t1

0x98d8,	// (0x000178e8) call_thumbnail_pane_g1

0x98e0,	// (0x000178f0) bg_pinb_pane_ParamLimits

0x98e0,	// (0x000178f0) bg_pinb_pane

0x98ee,	// (0x000178fe) find_pinb_pane

0x98e0,	// (0x000178f0) listscroll_pinb_pane_ParamLimits

0x98e0,	// (0x000178f0) listscroll_pinb_pane

0x98f8,	// (0x00017908) pinb_bg_pane_g1

0x98f8,	// (0x00017908) pinb_bg_pane_g2

0x98f8,	// (0x00017908) pinb_bg_pane_g3

0x98f8,	// (0x00017908) pinb_bg_pane_g4

0x98f8,	// (0x00017908) pinb_bg_pane_g5

0x98f8,	// (0x00017908) pinb_bg_pane_g6

0x98f8,	// (0x00017908) pinb_bg_pane_g7

0x98f8,	// (0x00017908) pinb_bg_pane_g8

0x98f8,	// (0x00017908) pinb_bg_pane_g9

0x98f8,	// (0x00017908) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0001d06d) pinb_bg_pane_g

0x91f5,	// (0x00017205) grid_pinb_pane

0x91f5,	// (0x00017205) list_pinb_pane

0x9264,	// (0x00017274) scroll_pane_cp01_ParamLimits

0x9264,	// (0x00017274) scroll_pane_cp01

0x9902,	// (0x00017912) find_pinb_pane_g1_ParamLimits

0x9902,	// (0x00017912) find_pinb_pane_g1

0x991a,	// (0x0001792a) find_pinb_pane_t1

0x992c,	// (0x0001793c) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0001d087) find_pinb_pane_t

0x9941,	// (0x00017951) input_focus_pane_cp01_ParamLimits

0x9941,	// (0x00017951) input_focus_pane_cp01

0x994d,	// (0x0001795d) cell_pinb_pane_ParamLimits

0x994d,	// (0x0001795d) cell_pinb_pane

0x995b,	// (0x0001796b) cell_pinb_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_pinb_pane_g1

0x9969,	// (0x00017979) cell_pinb_pane_g2_ParamLimits

0x9969,	// (0x00017979) cell_pinb_pane_g2

0x9969,	// (0x00017979) cell_pinb_pane_g3_ParamLimits

0x9969,	// (0x00017979) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0001d08c) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0001d08c) cell_pinb_pane_g

0x9685,	// (0x00017695) grid_highlight_pane_cp01

0x994d,	// (0x0001795d) list_pinb_item_pane_ParamLimits

0x994d,	// (0x0001795d) list_pinb_item_pane

0x91f5,	// (0x00017205) list_highlight_pane_cp02

0x9977,	// (0x00017987) list_pinb_item_pane_g1_ParamLimits

0x9977,	// (0x00017987) list_pinb_item_pane_g1

0x9969,	// (0x00017979) list_pinb_item_pane_g2_ParamLimits

0x9969,	// (0x00017979) list_pinb_item_pane_g2

0x995b,	// (0x0001796b) list_pinb_item_pane_g3_ParamLimits

0x995b,	// (0x0001796b) list_pinb_item_pane_g3

0x9969,	// (0x00017979) list_pinb_item_pane_g4_ParamLimits

0x9969,	// (0x00017979) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0001d093) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0001d093) list_pinb_item_pane_g

0x9985,	// (0x00017995) list_pinb_item_pane_t1_ParamLimits

0x9985,	// (0x00017995) list_pinb_item_pane_t1

0x0caa,	// (0x0000ecba) calc_display_pane

0x0ccf,	// (0x0000ecdf) calc_paper_pane

0x0cf2,	// (0x0000ed02) grid_calc_pane

0x91f5,	// (0x00017205) bg_list_pane_cp01

0x99a1,	// (0x000179b1) clock_g1

0x99a1,	// (0x000179b1) clock_g2

0x0001,

0xf08c,	// (0x0001d09c) clock_g

0x99ab,	// (0x000179bb) clock_t1_ParamLimits

0x99ab,	// (0x000179bb) clock_t1

0x99bf,	// (0x000179cf) clock_t2_ParamLimits

0x99bf,	// (0x000179cf) clock_t2

0x99bf,	// (0x000179cf) clock_t3_ParamLimits

0x99bf,	// (0x000179cf) clock_t3

0x99bf,	// (0x000179cf) clock_t4_ParamLimits

0x99bf,	// (0x000179cf) clock_t4

0x99ab,	// (0x000179bb) clock_t5_ParamLimits

0x99ab,	// (0x000179bb) clock_t5

0x99bf,	// (0x000179cf) clock_t6_ParamLimits

0x99bf,	// (0x000179cf) clock_t6

0x99bf,	// (0x000179cf) clock_t7_ParamLimits

0x99bf,	// (0x000179cf) clock_t7

0x99bf,	// (0x000179cf) clock_t8_ParamLimits

0x99bf,	// (0x000179cf) clock_t8

0x99bf,	// (0x000179cf) clock_t9_ParamLimits

0x99bf,	// (0x000179cf) clock_t9

0x0008,

0xf091,	// (0x0001d0a1) clock_t_ParamLimits

0xf091,	// (0x0001d0a1) clock_t

0x91f5,	// (0x00017205) popup_clock_analogue_window_cp02

0x91f5,	// (0x00017205) popup_clock_digital_window_cp01

0x9685,	// (0x00017695) listscroll_help_pane

0x9685,	// (0x00017695) phob_pre_status_pane

0x99d3,	// (0x000179e3) grid_qdial_pane

0x98e0,	// (0x000178f0) listscroll_mce_pane

0x98e0,	// (0x000178f0) bg_notes_pane

0x99dd,	// (0x000179ed) list_notes_pane

0x0d20,	// (0x0000ed30) scroll_pane_cp06

0x99eb,	// (0x000179fb) bg_calc_paper_pane

0x99ff,	// (0x00017a0f) list_calc_pane

0x9a19,	// (0x00017a29) bg_calc_display_pane

0x0d34,	// (0x0000ed44) calc_display_pane_t1

0x0d49,	// (0x0000ed59) calc_display_pane_t2

0x9a25,	// (0x00017a35) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0001d0b4) calc_display_pane_t

0x0d5e,	// (0x0000ed6e) cell_calc_pane_ParamLimits

0x0d5e,	// (0x0000ed6e) cell_calc_pane

0x9a37,	// (0x00017a47) bg_calc_paper_pane_g1

0x9a43,	// (0x00017a53) bg_calc_paper_pane_g2

0x9a4f,	// (0x00017a5f) bg_calc_paper_pane_g3

0x9a5b,	// (0x00017a6b) bg_calc_paper_pane_g4

0x9a67,	// (0x00017a77) bg_calc_paper_pane_g5

0x0d93,	// (0x0000eda3) bg_calc_paper_pane_g6

0x0da2,	// (0x0000edb2) bg_calc_paper_pane_g7

0x0db1,	// (0x0000edc1) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0001d0bb) bg_calc_paper_pane_g

0x0dc4,	// (0x0000edd4) calc_bg_paper_pane_g9

0x0dd7,	// (0x0000ede7) list_calc_item_pane_ParamLimits

0x0dd7,	// (0x0000ede7) list_calc_item_pane

0x9a73,	// (0x00017a83) list_calc_item_pane_g1

0x9a80,	// (0x00017a90) list_calc_item_pane_t1_ParamLimits

0x9a80,	// (0x00017a90) list_calc_item_pane_t1

0x0def,	// (0x0000edff) list_calc_item_pane_t2_ParamLimits

0x0def,	// (0x0000edff) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0001d0cc) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0001d0cc) list_calc_item_pane_t

0x98f8,	// (0x00017908) cell_calc_pane_g1

0x9a92,	// (0x00017aa2) grid_highlight_pane_cp02

0x9ab4,	// (0x00017ac4) bg_calc_display_pane_g1

0x0e21,	// (0x0000ee31) bg_calc_display_pane_g2

0x0e2b,	// (0x0000ee3b) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0001d0d6) bg_calc_display_pane_g

0x0e34,	// (0x0000ee44) cell_qdial_pane_ParamLimits

0x0e34,	// (0x0000ee44) cell_qdial_pane

0x0e48,	// (0x0000ee58) cell_qdial_pane_g1_ParamLimits

0x0e48,	// (0x0000ee58) cell_qdial_pane_g1

0x0e5e,	// (0x0000ee6e) cell_qdial_pane_g2_ParamLimits

0x0e5e,	// (0x0000ee6e) cell_qdial_pane_g2

0x9abd,	// (0x00017acd) cell_qdial_pane_g3_ParamLimits

0x9abd,	// (0x00017acd) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0001d0dd) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0001d0dd) cell_qdial_pane_g

0x0e85,	// (0x0000ee95) cell_qdial_pane_t1_ParamLimits

0x0e85,	// (0x0000ee95) cell_qdial_pane_t1

0x0e9d,	// (0x0000eead) cell_qdial_pane_t2_ParamLimits

0x0e9d,	// (0x0000eead) cell_qdial_pane_t2

0x0eb0,	// (0x0000eec0) cell_qdial_pane_t3_ParamLimits

0x0eb0,	// (0x0000eec0) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0001d0e6) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0001d0e6) cell_qdial_pane_t

0x9685,	// (0x00017695) grid_highlight_pane_cp04

0x9ac9,	// (0x00017ad9) thumbnail_qdial_pane_ParamLimits

0x9ac9,	// (0x00017ad9) thumbnail_qdial_pane

0x9b25,	// (0x00017b35) list_help_pane

0x9b2e,	// (0x00017b3e) scroll_pane_cp02

0x9b37,	// (0x00017b47) help_list_pane_t1_ParamLimits

0x9b37,	// (0x00017b47) help_list_pane_t1

0x9b55,	// (0x00017b65) bg_notes_pane_g2

0x9b5d,	// (0x00017b6d) bg_notes_pane_g3

0x9b65,	// (0x00017b75) notes_bg_pane_g1

0x9b6d,	// (0x00017b7d) notes_bg_pane_g4

0x9b75,	// (0x00017b85) notes_bg_pane_g5

0x9b7d,	// (0x00017b8d) notes_bg_pane_g6

0x9b85,	// (0x00017b95) notes_bg_pane_g7

0x9b8d,	// (0x00017b9d) notes_bg_pane_g8

0x9b95,	// (0x00017ba5) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0001d104) notes_bg_pane_g

0x0ec3,	// (0x0000eed3) list_notes_text_pane_ParamLimits

0x0ec3,	// (0x0000eed3) list_notes_text_pane

0x9b9d,	// (0x00017bad) list_notes_text_pane_g1

0x0ed8,	// (0x0000eee8) list_notes_text_pane_t1

0x0ee6,	// (0x0000eef6) listscroll_cale_week_pane

0x0f12,	// (0x0000ef22) bg_cale_heading_pane

0x9bc0,	// (0x00017bd0) bg_cale_pane_cp01

0x0f2a,	// (0x0000ef3a) cale_week_corner_pane

0x0f49,	// (0x0000ef59) cale_week_day_heading_pane

0x0f66,	// (0x0000ef76) cale_week_scroll_pane_g1

0x0f79,	// (0x0000ef89) cale_week_scroll_pane_g2

0x0f91,	// (0x0000efa1) cale_week_scroll_pane_g3

0x0fa9,	// (0x0000efb9) cale_week_scroll_pane_g4

0x0fc1,	// (0x0000efd1) cale_week_scroll_pane_g5

0x0fe1,	// (0x0000eff1) cale_week_scroll_pane_g6

0x1001,	// (0x0000f011) cale_week_scroll_pane_g7

0x1021,	// (0x0000f031) cale_week_scroll_pane_g8

0x1045,	// (0x0000f055) cale_week_scroll_pane_g9

0x105d,	// (0x0000f06d) cale_week_scroll_pane_g10

0x1075,	// (0x0000f085) cale_week_scroll_pane_g11

0x108d,	// (0x0000f09d) cale_week_scroll_pane_g12

0x10a5,	// (0x0000f0b5) cale_week_scroll_pane_g13

0x10a5,	// (0x0000f0b5) cale_week_scroll_pane_g14

0x10a5,	// (0x0000f0b5) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0001d113) cale_week_scroll_pane_g

0x10e1,	// (0x0000f0f1) cale_week_time_pane

0x1105,	// (0x0000f115) grid_cale_week_pane

0x9bef,	// (0x00017bff) scroll_pane_cp08

0x112b,	// (0x0000f13b) cell_cale_week_pane_ParamLimits

0x112b,	// (0x0000f13b) cell_cale_week_pane

0x11b9,	// (0x0000f1c9) cale_week_day_heading_pane_t1

0x11e3,	// (0x0000f1f3) cale_week_day_heading_pane_t2

0x1212,	// (0x0000f222) cale_week_day_heading_pane_t3

0x1241,	// (0x0000f251) cale_week_day_heading_pane_t4

0x1270,	// (0x0000f280) cale_week_day_heading_pane_t5

0x12a7,	// (0x0000f2b7) cale_week_day_heading_pane_t6

0x12de,	// (0x0000f2ee) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0001d134) cale_week_day_heading_pane_t

0x9c0c,	// (0x00017c1c) bg_cale_side_pane

0x1308,	// (0x0000f318) cale_week_time_pane_t1

0x1322,	// (0x0000f332) cale_week_time_pane_t2

0x133c,	// (0x0000f34c) cale_week_time_pane_t3

0x1356,	// (0x0000f366) cale_week_time_pane_t4

0x1370,	// (0x0000f380) cale_week_time_pane_t5

0x138a,	// (0x0000f39a) cale_week_time_pane_t6

0x13a4,	// (0x0000f3b4) cale_week_time_pane_t7

0x13be,	// (0x0000f3ce) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0001d143) cale_week_time_pane_t

0x13d8,	// (0x0000f3e8) cell_cale_week_pane_g2

0x13f7,	// (0x0000f407) cell_cale_week_pane_g3_ParamLimits

0x13f7,	// (0x0000f407) cell_cale_week_pane_g3

0x9c1a,	// (0x00017c2a) grid_highlight_pane_cp07

0x9c22,	// (0x00017c32) listscroll_gms_pane

0x9c2c,	// (0x00017c3c) grid_gms_pane

0x9c35,	// (0x00017c45) listscroll_gms_pane_g1

0x9c3d,	// (0x00017c4d) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0001d154) listscroll_gms_pane_g

0x140f,	// (0x0000f41f) scroll_pane_cp010

0x141a,	// (0x0000f42a) cell_gms_pane_ParamLimits

0x141a,	// (0x0000f42a) cell_gms_pane

0x142d,	// (0x0000f43d) cell_gms_pane_g1

0x9c45,	// (0x00017c55) cell_gms_pane_g2

0x9b9d,	// (0x00017bad) cell_gms_pane_g3

0x9c4d,	// (0x00017c5d) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0001d159) cell_gms_pane_g

0x9c56,	// (0x00017c66) grid_highlight_pane_cp09

0x32f0,	// (0x00011300) phob_pre_status_pane_g1

0x32f8,	// (0x00011308) phob_pre_status_pane_g2

0x3300,	// (0x00011310) phob_pre_status_pane_g3

0x3308,	// (0x00011318) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x0001d4f5) phob_pre_status_pane_g

0x3318,	// (0x00011328) phob_pre_status_pane_t1

0x3326,	// (0x00011336) phob_pre_status_pane_t2

0x3336,	// (0x00011346) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0001d500) phob_pre_status_pane_t

0x9c5e,	// (0x00017c6e) bg_list_pane_cp05

0x143d,	// (0x0000f44d) grid_vorec_pane

0x1445,	// (0x0000f455) vorec_t1

0x1453,	// (0x0000f463) vorec_t2

0x1461,	// (0x0000f471) vorec_t3

0x146f,	// (0x0000f47f) vorec_t4

0xea05,	// (0x0001ca15) vorec_t5

0x8390,	// (0x000163a0) vorec_t6

0x0004,

0xf152,	// (0x0001d162) vorec_t

0x839e,	// (0x000163ae) wait_bar_pane_cp01

0x148b,	// (0x0000f49b) cell_vorec_pane_ParamLimits

0x148b,	// (0x0000f49b) cell_vorec_pane

0x9c66,	// (0x00017c76) cell_vorec_pane_g1

0x9685,	// (0x00017695) grid_highlight_pane_cp05

0x9264,	// (0x00017274) cams_zoom_pane

0x9264,	// (0x00017274) image_vga_pane

0x995b,	// (0x0001796b) main_camera_pane_g1

0x995b,	// (0x0001796b) main_camera_pane_g2

0x995b,	// (0x0001796b) main_camera_pane_g3

0x995b,	// (0x0001796b) main_camera_pane_g4

0x995b,	// (0x0001796b) main_camera_pane_g5

0x995b,	// (0x0001796b) main_camera_pane_g6

0x995b,	// (0x0001796b) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0001d16d) main_camera_pane_g

0x99ab,	// (0x000179bb) main_camera_pane_t1

0x99ab,	// (0x000179bb) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0001d17e) main_camera_pane_t

0x14b2,	// (0x0000f4c2) cams_zoom_pane_cp_ParamLimits

0x14b2,	// (0x0000f4c2) cams_zoom_pane_cp

0x14e6,	// (0x0000f4f6) image_cif_pane_ParamLimits

0x14e6,	// (0x0000f4f6) image_cif_pane

0x91f5,	// (0x00017205) image_subqcif_pane

0x14f8,	// (0x0000f508) main_video_pane_g1_ParamLimits

0x14f8,	// (0x0000f508) main_video_pane_g1

0x1526,	// (0x0000f536) main_video_pane_g2_ParamLimits

0x1526,	// (0x0000f536) main_video_pane_g2

0x1560,	// (0x0000f570) main_video_pane_g3_ParamLimits

0x1560,	// (0x0000f570) main_video_pane_g3

0x1560,	// (0x0000f570) main_video_pane_g4_ParamLimits

0x1560,	// (0x0000f570) main_video_pane_g4

0x1594,	// (0x0000f5a4) main_video_pane_g5_ParamLimits

0x1594,	// (0x0000f5a4) main_video_pane_g5

0x9c70,	// (0x00017c80) main_video_pane_g6_ParamLimits

0x9c70,	// (0x00017c80) main_video_pane_g6

0x0006,

0xf173,	// (0x0001d183) main_video_pane_g_ParamLimits

0xf173,	// (0x0001d183) main_video_pane_g

0x15b0,	// (0x0000f5c0) main_video_pane_t1_ParamLimits

0x15b0,	// (0x0000f5c0) main_video_pane_t1

0x99a1,	// (0x000179b1) cams_zoom_pane_g1

0x99a1,	// (0x000179b1) cams_zoom_pane_g2

0x99a1,	// (0x000179b1) cams_zoom_pane_g3

0x99a1,	// (0x000179b1) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0001d192) cams_zoom_pane_g

0x9264,	// (0x00017274) grid_cams_pane

0x9264,	// (0x00017274) linegrid_cams_pane

0x15f4,	// (0x0000f604) cell_cams_pane_ParamLimits

0x15f4,	// (0x0000f604) cell_cams_pane

0x91f5,	// (0x00017205) cams_burst_image_pane

0x99a1,	// (0x000179b1) cell_cams_pane_g1

0x91f5,	// (0x00017205) grid_highlight_pane_cp03

0x98f8,	// (0x00017908) mp_bg_pane_g1

0x91f5,	// (0x00017205) bg_list_pane_cp03

0x91f5,	// (0x00017205) bg_mp_pane

0x91f5,	// (0x00017205) grid_mp_pane

0x99a1,	// (0x000179b1) media_player_g1

0xa193,	// (0x000181a3) media_player_t1

0xa193,	// (0x000181a3) media_player_t2

0xa193,	// (0x000181a3) media_player_t3

0xa193,	// (0x000181a3) media_player_t4

0xa193,	// (0x000181a3) media_player_t5

0xa193,	// (0x000181a3) media_player_t6

0xa193,	// (0x000181a3) media_player_t7

0x0006,

0xf4cf,	// (0x0001d4df) media_player_t

0x91f5,	// (0x00017205) wait_bar_pane_cp02

0xf4b4,	// (0x0001d4c4) main_usb_pane_t

0xa471,	// (0x00018481) cell_mp_pane

0x98f8,	// (0x00017908) cell_mp_pane_g1

0x9685,	// (0x00017695) grid_highlight_pane_cp06

0x9c8a,	// (0x00017c9a) grid_skin_colour_pane

0x9c92,	// (0x00017ca2) list_highlight_pane_cp03

0x1609,	// (0x0000f619) skin_g1

0x9c9a,	// (0x00017caa) skin_t1

0x9ca9,	// (0x00017cb9) skin_t2

0x0001,

0xf1b0,	// (0x0001d1c0) skin_t

0x1611,	// (0x0000f621) cell_skin_colour_pane_ParamLimits

0x1611,	// (0x0000f621) cell_skin_colour_pane

0x9cb7,	// (0x00017cc7) cell_skin_colour_pane_g1

0x168a,	// (0x0000f69a) call_video_g1_ParamLimits

0x168a,	// (0x0000f69a) call_video_g1

0x16a6,	// (0x0000f6b6) call_video_g2_ParamLimits

0x16a6,	// (0x0000f6b6) call_video_g2

0x0001,

0xf1b5,	// (0x0001d1c5) call_video_g_ParamLimits

0xf1b5,	// (0x0001d1c5) call_video_g

0x16f8,	// (0x0000f708) call_video_uplink_pane_cp1_ParamLimits

0x16f8,	// (0x0000f708) call_video_uplink_pane_cp1

0x9cc9,	// (0x00017cd9) call_video_uplink_pane_cp2

0x1797,	// (0x0000f7a7) video_down_crop_pane_ParamLimits

0x1797,	// (0x0000f7a7) video_down_crop_pane

0x188e,	// (0x0000f89e) video_down_pane_ParamLimits

0x188e,	// (0x0000f89e) video_down_pane

0x9cd1,	// (0x00017ce1) video_down_subqcif_pane_ParamLimits

0x9cd1,	// (0x00017ce1) video_down_subqcif_pane

0x9ce9,	// (0x00017cf9) video_down_subqcif_pane_cp_ParamLimits

0x9ce9,	// (0x00017cf9) video_down_subqcif_pane_cp

0x9d0f,	// (0x00017d1f) im_reading_pane_ParamLimits

0x9d0f,	// (0x00017d1f) im_reading_pane

0x199e,	// (0x0000f9ae) im_writing_pane_ParamLimits

0x199e,	// (0x0000f9ae) im_writing_pane

0x19b4,	// (0x0000f9c4) im_reading_pane_t1

0x9d29,	// (0x00017d39) list_im_pane

0x9d3a,	// (0x00017d4a) scroll_pane_cp07

0x19ed,	// (0x0000f9fd) im_writing_pane_t1_ParamLimits

0x19ed,	// (0x0000f9fd) im_writing_pane_t1

0x9d53,	// (0x00017d63) im_writing_pane_t2_ParamLimits

0x9d53,	// (0x00017d63) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0001d1cf) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0001d1cf) im_writing_pane_t

0x9685,	// (0x00017695) input_focus_pane_cp04

0x9685,	// (0x00017695) input_focus_pane_cp05

0x1a02,	// (0x0000fa12) list_im_single_pane_ParamLimits

0x1a02,	// (0x0000fa12) list_im_single_pane

0x1a16,	// (0x0000fa26) list_single_im_pane_t1

0x9c5e,	// (0x00017c6e) blid_accuracy_pane

0x9c5e,	// (0x00017c6e) blid_compass_pane

0xb96a,	// (0x0001997a) main_location_t1

0xb96a,	// (0x0001997a) main_location_t2

0xb96a,	// (0x0001997a) main_location_t3

0x0002,

0xf4de,	// (0x0001d4ee) main_location_t

0x9685,	// (0x00017695) aid_levels_location

0x98f8,	// (0x00017908) blid_accuracy_pane_g1

0x98f8,	// (0x00017908) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0001d21e) blid_accuracy_pane_g

0x9d9b,	// (0x00017dab) wml_content_pane

0x9dd9,	// (0x00017de9) wml_button_pane_ParamLimits

0x9dd9,	// (0x00017de9) wml_button_pane

0x1a25,	// (0x0000fa35) wml_list_single_large_pane_ParamLimits

0x1a25,	// (0x0000fa35) wml_list_single_large_pane

0x1a3a,	// (0x0000fa4a) wml_list_single_medium_pane_ParamLimits

0x1a3a,	// (0x0000fa4a) wml_list_single_medium_pane

0x1a50,	// (0x0000fa60) wml_list_single_small_pane_ParamLimits

0x1a50,	// (0x0000fa60) wml_list_single_small_pane

0x9ded,	// (0x00017dfd) wml_selection_box_pane_ParamLimits

0x9ded,	// (0x00017dfd) wml_selection_box_pane

0x9e00,	// (0x00017e10) wml_list_single_pane_t1

0x9e0f,	// (0x00017e1f) wml_list_single_medium_pane_t1

0x9e1e,	// (0x00017e2e) wml_list_single_large_pane_t1

0x9e2d,	// (0x00017e3d) input_focus_pane_cp02_ParamLimits

0x9e2d,	// (0x00017e3d) input_focus_pane_cp02

0x9e40,	// (0x00017e50) wml_selection_box_pane_g1

0x9e49,	// (0x00017e59) wml_selection_box_pane_t1_ParamLimits

0x9e49,	// (0x00017e59) wml_selection_box_pane_t1

0x98e0,	// (0x000178f0) bg_wml_button_pane_ParamLimits

0x98e0,	// (0x000178f0) bg_wml_button_pane

0x9e61,	// (0x00017e71) wml_button_pane_g1

0x9e69,	// (0x00017e79) wml_button_pane_t1

0x9e61,	// (0x00017e71) wml_button_bg_pane_g1

0x9e79,	// (0x00017e89) wml_button_bg_pane_g2

0x9e81,	// (0x00017e91) wml_button_bg_pane_g3

0x9e89,	// (0x00017e99) wml_button_bg_pane_g4

0x9e91,	// (0x00017ea1) wml_button_bg_pane_g5

0x9e99,	// (0x00017ea9) wml_button_bg_pane_g6

0x9ea1,	// (0x00017eb1) wml_button_bg_pane_g7

0x9ea9,	// (0x00017eb9) wml_button_bg_pane_g8

0x9eb1,	// (0x00017ec1) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0001d1d4) wml_button_bg_pane_g

0x1a68,	// (0x0000fa78) bg_list_pane_cp02

0x9eb9,	// (0x00017ec9) mce_header_pane_ParamLimits

0x9eb9,	// (0x00017ec9) mce_header_pane

0x9ecf,	// (0x00017edf) mce_icon_pane

0x9ecf,	// (0x00017edf) mce_image_pane

0x9ed8,	// (0x00017ee8) mce_text_pane_ParamLimits

0x9ed8,	// (0x00017ee8) mce_text_pane

0x1a70,	// (0x0000fa80) scroll_pane_cp03

0x9dd1,	// (0x00017de1) scroll_pane_cp04

0x9eeb,	// (0x00017efb) scroll_pane_cp05_ParamLimits

0x9eeb,	// (0x00017efb) scroll_pane_cp05

0x1a7a,	// (0x0000fa8a) mce_header_field_pane_ParamLimits

0x1a7a,	// (0x0000fa8a) mce_header_field_pane

0x1a91,	// (0x0000faa1) mce_header_field_pane_2_ParamLimits

0x1a91,	// (0x0000faa1) mce_header_field_pane_2

0x1aa7,	// (0x0000fab7) mce_header_field_pane_3

0x1aaf,	// (0x0000fabf) list_single_mce_message_pane_ParamLimits

0x1aaf,	// (0x0000fabf) list_single_mce_message_pane

0x1ac4,	// (0x0000fad4) list_single_mce_smart_pane_ParamLimits

0x1ac4,	// (0x0000fad4) list_single_mce_smart_pane

0x9ef7,	// (0x00017f07) input_focus_pane_cp03

0x9f00,	// (0x00017f10) list_header_data_pane

0x1ae4,	// (0x0000faf4) mce_header_field_pane_t1

0x1af4,	// (0x0000fb04) list_single_mce_header_pane_ParamLimits

0x1af4,	// (0x0000fb04) list_single_mce_header_pane

0x9f08,	// (0x00017f18) list_single_mce_header_pane_t1

0x9f17,	// (0x00017f27) list_single_mce_message_pane_g1

0x9f1f,	// (0x00017f2f) list_single_mce_message_pane_t1

0x1b2e,	// (0x0000fb3e) bg_cale_heading_pane_cp01_ParamLimits

0x1b2e,	// (0x0000fb3e) bg_cale_heading_pane_cp01

0x9f2d,	// (0x00017f3d) bg_cale_pane_cp02_ParamLimits

0x9f2d,	// (0x00017f3d) bg_cale_pane_cp02

0x1b68,	// (0x0000fb78) cale_month_corner_pane

0x1b87,	// (0x0000fb97) cale_month_day_heading_pane_ParamLimits

0x1b87,	// (0x0000fb97) cale_month_day_heading_pane

0x1bd9,	// (0x0000fbe9) cale_month_pane_g1_ParamLimits

0x1bd9,	// (0x0000fbe9) cale_month_pane_g1

0x1c08,	// (0x0000fc18) cale_month_pane_g2_ParamLimits

0x1c08,	// (0x0000fc18) cale_month_pane_g2

0x1c38,	// (0x0000fc48) cale_month_pane_g3_ParamLimits

0x1c38,	// (0x0000fc48) cale_month_pane_g3

0x1c74,	// (0x0000fc84) cale_month_pane_g4_ParamLimits

0x1c74,	// (0x0000fc84) cale_month_pane_g4

0x1cb0,	// (0x0000fcc0) cale_month_pane_g5_ParamLimits

0x1cb0,	// (0x0000fcc0) cale_month_pane_g5

0x1cf8,	// (0x0000fd08) cale_month_pane_g6_ParamLimits

0x1cf8,	// (0x0000fd08) cale_month_pane_g6

0x1d44,	// (0x0000fd54) cale_month_pane_g7_ParamLimits

0x1d44,	// (0x0000fd54) cale_month_pane_g7

0x1d98,	// (0x0000fda8) cale_month_pane_g8_ParamLimits

0x1d98,	// (0x0000fda8) cale_month_pane_g8

0x1dec,	// (0x0000fdfc) cale_month_pane_g9_ParamLimits

0x1dec,	// (0x0000fdfc) cale_month_pane_g9

0x1e3e,	// (0x0000fe4e) cale_month_pane_g10_ParamLimits

0x1e3e,	// (0x0000fe4e) cale_month_pane_g10

0x1e90,	// (0x0000fea0) cale_month_pane_g11_ParamLimits

0x1e90,	// (0x0000fea0) cale_month_pane_g11

0x1ee2,	// (0x0000fef2) cale_month_pane_g12_ParamLimits

0x1ee2,	// (0x0000fef2) cale_month_pane_g12

0x1f34,	// (0x0000ff44) cale_month_pane_g13_ParamLimits

0x1f34,	// (0x0000ff44) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0001d1e7) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0001d1e7) cale_month_pane_g

0x1f86,	// (0x0000ff96) cale_month_week_pane

0x1faa,	// (0x0000ffba) grid_cale_month_pane_ParamLimits

0x1faa,	// (0x0000ffba) grid_cale_month_pane

0x1ff3,	// (0x00010003) cale_month_day_heading_pane_t1

0x2079,	// (0x00010089) cale_month_day_heading_pane_t2

0x20f2,	// (0x00010102) cale_month_day_heading_pane_t3

0x216b,	// (0x0001017b) cale_month_day_heading_pane_t4

0x21ec,	// (0x000101fc) cale_month_day_heading_pane_t5

0x2275,	// (0x00010285) cale_month_day_heading_pane_t6

0x22fe,	// (0x0001030e) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0001d202) cale_month_day_heading_pane_t

0x9c0c,	// (0x00017c1c) bg_cale_side_pane_cp01

0x238f,	// (0x0001039f) cale_month_week_pane_t1

0x23a8,	// (0x000103b8) cale_month_week_pane_t2

0x23c1,	// (0x000103d1) cale_month_week_pane_t3

0x23da,	// (0x000103ea) cale_month_week_pane_t4

0x23f3,	// (0x00010403) cale_month_week_pane_t5

0x240c,	// (0x0001041c) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0001d211) cale_month_week_pane_t

0x2425,	// (0x00010435) cell_cale_month_pane_ParamLimits

0x2425,	// (0x00010435) cell_cale_month_pane

0x9f6c,	// (0x00017f7c) cell_cale_month_pane_g1

0x2553,	// (0x00010563) cell_cale_month_pane_t1_ParamLimits

0x2553,	// (0x00010563) cell_cale_month_pane_t1

0x9c1a,	// (0x00017c2a) grid_highlight_pane_cp08

0x98f8,	// (0x00017908) main_smil_g1

0x257f,	// (0x0001058f) smil_status_pane

0x9f78,	// (0x00017f88) smil_text_pane

0x9b8d,	// (0x00017b9d) bg_popup_call3_rect_pane_g8

0x9b95,	// (0x00017ba5) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x0001d223) bg_popup_call3_rect_pane_g

0xba87,	// (0x00019a97) smil_status_volume_pane_g1

0x9f82,	// (0x00017f92) smil_status_pane_t1

0xbaba,	// (0x00019aca) volume_smil_pane

0x9f99,	// (0x00017fa9) list_smil_text_pane

0x2592,	// (0x000105a2) scroll_pane_cp011

0x259d,	// (0x000105ad) smil_text_list_pane_t1_ParamLimits

0x259d,	// (0x000105ad) smil_text_list_pane_t1

0x9fa3,	// (0x00017fb3) aid_volume_smil_ParamLimits

0x9fa3,	// (0x00017fb3) aid_volume_smil

0x98f8,	// (0x00017908) smil_volume_pane_g1

0x98f8,	// (0x00017908) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0001d21e) smil_volume_pane_g

0x0ee6,	// (0x0000eef6) listscroll_cale_day_pane

0x9fc5,	// (0x00017fd5) bg_cale_pane

0x9fdd,	// (0x00017fed) list_cale_pane

0xa000,	// (0x00018010) scroll_pane_cp09

0x9b65,	// (0x00017b75) cale_bg_pane_g1

0x9b55,	// (0x00017b65) cale_bg_pane_g2

0x9b5d,	// (0x00017b6d) cale_bg_pane_g3

0x9b6d,	// (0x00017b7d) cale_bg_pane_g4

0x9b75,	// (0x00017b85) cale_bg_pane_g5

0x9b7d,	// (0x00017b8d) cale_bg_pane_g6

0x9b85,	// (0x00017b95) cale_bg_pane_g7

0x9b8d,	// (0x00017b9d) cale_bg_pane_g8

0x9b95,	// (0x00017ba5) cale_bg_pane_g9

0x0008,

0xf213,	// (0x0001d223) cale_bg_pane_g

0x25d9,	// (0x000105e9) list_cale_time_pane_ParamLimits

0x25d9,	// (0x000105e9) list_cale_time_pane

0xa019,	// (0x00018029) list_cale_time_pane_g1_ParamLimits

0xa019,	// (0x00018029) list_cale_time_pane_g1

0xa025,	// (0x00018035) list_cale_time_pane_g2_ParamLimits

0xa025,	// (0x00018035) list_cale_time_pane_g2

0x25ee,	// (0x000105fe) list_cale_time_pane_g3_ParamLimits

0x25ee,	// (0x000105fe) list_cale_time_pane_g3

0x25fc,	// (0x0001060c) list_cale_time_pane_g4_ParamLimits

0x25fc,	// (0x0001060c) list_cale_time_pane_g4

0x260a,	// (0x0001061a) list_cale_time_pane_g5_ParamLimits

0x260a,	// (0x0001061a) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x0001d236) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x0001d236) list_cale_time_pane_g

0xa03f,	// (0x0001804f) list_cale_time_pane_t1_ParamLimits

0xa03f,	// (0x0001804f) list_cale_time_pane_t1

0xa067,	// (0x00018077) list_cale_time_pane_t2_ParamLimits

0xa067,	// (0x00018077) list_cale_time_pane_t2

0x286c,	// (0x0001087c) aid_blid_cardinal_pane

0x28aa,	// (0x000108ba) compass_pane_t4

0xa08f,	// (0x0001809f) list_cale_time_pane_t4_ParamLimits

0xa08f,	// (0x0001809f) list_cale_time_pane_t4

0x28b8,	// (0x000108c8) compass_pane_t5

0x28c6,	// (0x000108d6) compass_pane_t6

0x28d4,	// (0x000108e4) compass_pane_t7

0xa5b6,	// (0x000185c6) navi_pane_cc_t1

0xa7a5,	// (0x000187b5) aid_phob_thumbnail_center_pane

0x2d43,	// (0x00010d53) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x0001d243) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x0001d243) list_cale_time_pane_t

0x92dc,	// (0x000172ec) bg_popup_window_pane_cp02_ParamLimits

0x92dc,	// (0x000172ec) bg_popup_window_pane_cp02

0xa0b7,	// (0x000180c7) heading_pane_cp01_ParamLimits

0xa0b7,	// (0x000180c7) heading_pane_cp01

0xa0c3,	// (0x000180d3) loc_req_pane_ParamLimits

0xa0c3,	// (0x000180d3) loc_req_pane

0xa0d5,	// (0x000180e5) loc_type_pane_ParamLimits

0xa0d5,	// (0x000180e5) loc_type_pane

0xa0e7,	// (0x000180f7) loc_type_pane_t1_ParamLimits

0xa0e7,	// (0x000180f7) loc_type_pane_t1

0xa0f9,	// (0x00018109) loc_type_pane_t2_ParamLimits

0xa0f9,	// (0x00018109) loc_type_pane_t2

0xa10b,	// (0x0001811b) loc_type_pane_t3_ParamLimits

0xa10b,	// (0x0001811b) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0001d24a) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0001d24a) loc_type_pane_t

0xa11d,	// (0x0001812d) list_loc_req_pane

0xa127,	// (0x00018137) scroll_pane_cp012

0x2618,	// (0x00010628) list_single_loc_request_popup_menu_pane_ParamLimits

0x2618,	// (0x00010628) list_single_loc_request_popup_menu_pane

0xa132,	// (0x00018142) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa132,	// (0x00018142) list_single_loc_request_popup_menu_pane_g1

0xa13e,	// (0x0001814e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa13e,	// (0x0001814e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0001d251) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0001d251) list_single_loc_request_popup_menu_pane_g

0xa14a,	// (0x0001815a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa14a,	// (0x0001815a) list_single_loc_request_popup_menu_pane_t1

0x98e0,	// (0x000178f0) bg_popup_window_pane_cp03_ParamLimits

0x98e0,	// (0x000178f0) bg_popup_window_pane_cp03

0xa160,	// (0x00018170) heading_loc_req_pane_ParamLimits

0xa160,	// (0x00018170) heading_loc_req_pane

0x2625,	// (0x00010635) popup_dyc_status_message_window_g1_ParamLimits

0x2625,	// (0x00010635) popup_dyc_status_message_window_g1

0x2639,	// (0x00010649) popup_dyc_status_message_window_t1_ParamLimits

0x2639,	// (0x00010649) popup_dyc_status_message_window_t1

0x264e,	// (0x0001065e) popup_dyc_status_message_window_t2_ParamLimits

0x264e,	// (0x0001065e) popup_dyc_status_message_window_t2

0x2663,	// (0x00010673) popup_dyc_status_message_window_t3_ParamLimits

0x2663,	// (0x00010673) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x0001d256) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x0001d256) popup_dyc_status_message_window_t

0x9685,	// (0x00017695) bg_heading_pane_cp01

0xa16c,	// (0x0001817c) heading_loc_req_pane_g1

0xa174,	// (0x00018184) heading_loc_req_pane_g2

0xa17c,	// (0x0001818c) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0001d25d) heading_loc_req_pane_g

0xa184,	// (0x00018194) heading_loc_req_pane_t1

0xa1a3,	// (0x000181b3) bg_popup_sub_pane_cp01_ParamLimits

0xa1a3,	// (0x000181b3) bg_popup_sub_pane_cp01

0xa1b1,	// (0x000181c1) popup_cale_events_window_g1_ParamLimits

0xa1b1,	// (0x000181c1) popup_cale_events_window_g1

0xa1d1,	// (0x000181e1) popup_cale_events_window_g2_ParamLimits

0xa1d1,	// (0x000181e1) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x0001d27f) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x0001d27f) popup_cale_events_window_g

0xa1f1,	// (0x00018201) popup_cale_events_window_t1_ParamLimits

0xa1f1,	// (0x00018201) popup_cale_events_window_t1

0xa203,	// (0x00018213) popup_cale_events_window_t2_ParamLimits

0xa203,	// (0x00018213) popup_cale_events_window_t2

0xa241,	// (0x00018251) popup_cale_events_window_t3_ParamLimits

0xa241,	// (0x00018251) popup_cale_events_window_t3

0xa27b,	// (0x0001828b) popup_cale_events_window_t4_ParamLimits

0xa27b,	// (0x0001828b) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0001d284) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0001d284) popup_cale_events_window_t

0x268b,	// (0x0001069b) call_type_pane

0x269b,	// (0x000106ab) popup_call_status_window_g1

0x26af,	// (0x000106bf) popup_call_status_window_g2

0x26c3,	// (0x000106d3) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0001d28d) popup_call_status_window_g

0xa2b1,	// (0x000182c1) call_type_pane_g1

0xa2ba,	// (0x000182ca) call_type_pane_g2

0x0001,

0xf284,	// (0x0001d294) call_type_pane_g

0x9685,	// (0x00017695) bg_popup_sub_pane_cp02

0xa2c3,	// (0x000182d3) listscroll_popup_wml_pane

0xa2cb,	// (0x000182db) list_wml_pane

0xa2d5,	// (0x000182e5) scroll_pane_cp013

0xa2e0,	// (0x000182f0) list_single_graphic_popup_wml_pane_ParamLimits

0xa2e0,	// (0x000182f0) list_single_graphic_popup_wml_pane

0x98f8,	// (0x00017908) list_single_graphic_popup_wml_pane_g1

0xa2f4,	// (0x00018304) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0001d299) list_single_graphic_popup_wml_pane_g

0xa2fc,	// (0x0001830c) list_single_graphic_popup_wml_pane_t1

0xa312,	// (0x00018322) aid_call_pane

0x98d8,	// (0x000178e8) popup_clock_analogue_window_g1

0x98d8,	// (0x000178e8) popup_clock_analogue_window_g2

0xa31a,	// (0x0001832a) popup_clock_analogue_window_g3

0xa31a,	// (0x0001832a) popup_clock_analogue_window_g4

0x98f8,	// (0x00017908) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0001d29e) popup_clock_analogue_window_g

0xa322,	// (0x00018332) popup_clock_analogue_window_t1

0xa330,	// (0x00018340) clock_digital_number_pane_ParamLimits

0xa330,	// (0x00018340) clock_digital_number_pane

0xa33c,	// (0x0001834c) clock_digital_number_pane_cp02_ParamLimits

0xa33c,	// (0x0001834c) clock_digital_number_pane_cp02

0xa348,	// (0x00018358) clock_digital_number_pane_cp03_ParamLimits

0xa348,	// (0x00018358) clock_digital_number_pane_cp03

0xa354,	// (0x00018364) clock_digital_number_pane_cp04_ParamLimits

0xa354,	// (0x00018364) clock_digital_number_pane_cp04

0xa364,	// (0x00018374) clock_digital_separator_pane_ParamLimits

0xa364,	// (0x00018374) clock_digital_separator_pane

0xa370,	// (0x00018380) popup_clock_digital_window_t1

0x98f8,	// (0x00017908) clock_digital_number_pane_g1

0x98f8,	// (0x00017908) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0001d21e) clock_digital_number_pane_g

0x98f8,	// (0x00017908) clock_digital_separator_pane_g1

0x98f8,	// (0x00017908) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0001d21e) clock_digital_separator_pane_g

0x9685,	// (0x00017695) bg_popup_window_pane_cp04

0xa38d,	// (0x0001839d) heading_pane_cp03

0x9c5e,	// (0x00017c6e) listscroll_popup_gms_pane

0x9685,	// (0x00017695) grid_large_graphic_popup_pane

0xa395,	// (0x000183a5) listscroll_popup_gms_pane_g1

0xa39e,	// (0x000183ae) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0001d2a9) listscroll_popup_gms_pane_g

0xa3a7,	// (0x000183b7) scroll_pane_cp014

0x994d,	// (0x0001795d) cell_large_graphic_popup_pane_ParamLimits

0x994d,	// (0x0001795d) cell_large_graphic_popup_pane

0x995b,	// (0x0001796b) cell_large_graphic_popup_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_large_graphic_popup_pane_g1

0xa3b0,	// (0x000183c0) cell_large_graphic_popup_pane_g2_ParamLimits

0xa3b0,	// (0x000183c0) cell_large_graphic_popup_pane_g2

0xa3be,	// (0x000183ce) cell_large_graphic_popup_pane_g3_ParamLimits

0xa3be,	// (0x000183ce) cell_large_graphic_popup_pane_g3

0xa3cc,	// (0x000183dc) cell_large_graphic_popup_pane_g4_ParamLimits

0xa3cc,	// (0x000183dc) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0001d2ae) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0001d2ae) cell_large_graphic_popup_pane_g

0x9685,	// (0x00017695) grid_highlight_pane_cp010

0x98f8,	// (0x00017908) bg_popup_call_pane_g1

0xa3dd,	// (0x000183ed) list_single_graphic_popup_conf_pane_ParamLimits

0xa3dd,	// (0x000183ed) list_single_graphic_popup_conf_pane

0xa3f0,	// (0x00018400) list_highlight_pane_cp01

0xa3f9,	// (0x00018409) list_single_graphic_popup_conf_pane_g1

0xa401,	// (0x00018411) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0001d2b7) list_single_graphic_popup_conf_pane_g

0xa409,	// (0x00018419) list_single_graphic_popup_conf_pane_t1

0xa417,	// (0x00018427) linegrid_cams_pane_g1

0x26d2,	// (0x000106e2) linegrid_cams_pane_g2

0x9b9d,	// (0x00017bad) linegrid_cams_pane_g3

0xa420,	// (0x00018430) linegrid_cams_pane_g4

0x26db,	// (0x000106eb) linegrid_cams_pane_g5

0x26e4,	// (0x000106f4) linegrid_cams_pane_g6

0x9c4d,	// (0x00017c5d) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0001d2bc) linegrid_cams_pane_g

0xa429,	// (0x00018439) popup_clock_analogue_window

0xa429,	// (0x00018439) popup_clock_digital_window

0x9685,	// (0x00017695) popup_phob_thumbnail_window

0x98f8,	// (0x00017908) call_video_uplink_pane_g1

0xa432,	// (0x00018442) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0001d2cb) call_video_uplink_pane_g

0xa43a,	// (0x0001844a) video_uplink_pane

0xa442,	// (0x00018452) mce_image_pane_g1

0x26ef,	// (0x000106ff) mce_image_pane_g2

0x26f9,	// (0x00010709) mce_image_pane_g3

0x2701,	// (0x00010711) mce_image_pane_g4

0x2709,	// (0x00010719) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0001d2d0) mce_image_pane_g

0xa44c,	// (0x0001845c) control_top_pane_stacon_cp01_ParamLimits

0xa44c,	// (0x0001845c) control_top_pane_stacon_cp01

0xa460,	// (0x00018470) uni_indicator_pane_stacon_cp01_ParamLimits

0xa460,	// (0x00018470) uni_indicator_pane_stacon_cp01

0xa471,	// (0x00018481) bg_popup_sub_pane_cp03

0xa47b,	// (0x0001848b) chi_dic_find_pane

0x2711,	// (0x00010721) listscroll_chi_dic_pane

0xa483,	// (0x00018493) main_pane_chidic_g1

0xa48b,	// (0x0001849b) chi_dic_find_pane_t1

0xa499,	// (0x000184a9) find_chidic_pane

0xa4a2,	// (0x000184b2) chi_dic_list_pane_ParamLimits

0xa4a2,	// (0x000184b2) chi_dic_list_pane

0xa4b3,	// (0x000184c3) scroll_pane_cp020

0xa4bb,	// (0x000184cb) find_chidic_pane_t1

0x9685,	// (0x00017695) input_focus_pane_cp06

0x2725,	// (0x00010735) list_chi_dic_pane_ParamLimits

0x2725,	// (0x00010735) list_chi_dic_pane

0x2737,	// (0x00010747) list_chi_dic_pane_t1_ParamLimits

0x2737,	// (0x00010747) list_chi_dic_pane_t1

0x9685,	// (0x00017695) list_highlight_pane_cp020

0xa4ca,	// (0x000184da) bg_cale_heading_pane_g1

0x274a,	// (0x0001075a) bg_cale_heading_pane_g2

0x2752,	// (0x00010762) bg_cale_heading_pane_g3

0x275a,	// (0x0001076a) bg_cale_heading_pane_g4

0x2764,	// (0x00010774) bg_cale_heading_pane_g5

0x276e,	// (0x0001077e) bg_cale_heading_pane_g6

0x2776,	// (0x00010786) bg_cale_heading_pane_g7

0x277e,	// (0x0001078e) bg_cale_heading_pane_g8

0x2788,	// (0x00010798) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0001d2db) bg_cale_heading_pane_g

0xa4ca,	// (0x000184da) bg_cale_side_pane_g1

0x2792,	// (0x000107a2) bg_cale_side_pane_g2

0x279a,	// (0x000107aa) bg_cale_side_pane_g3

0x27a2,	// (0x000107b2) bg_cale_side_pane_g4

0x27aa,	// (0x000107ba) bg_cale_side_pane_g5

0x27b2,	// (0x000107c2) bg_cale_side_pane_g6

0x27ba,	// (0x000107ca) bg_cale_side_pane_g7

0x27c2,	// (0x000107d2) bg_cale_side_pane_g8

0x27ca,	// (0x000107da) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0001d2ee) bg_cale_side_pane_g

0x27d2,	// (0x000107e2) popup_call_status_window_ParamLimits

0x27d2,	// (0x000107e2) popup_call_status_window

0xa4d2,	// (0x000184e2) stacon_top_pane

0xa4da,	// (0x000184ea) status_pane_ParamLimits

0xa4da,	// (0x000184ea) status_pane

0xa4ef,	// (0x000184ff) status_small_pane

0xa4f7,	// (0x00018507) control_pane

0x9685,	// (0x00017695) stacon_bottom_pane

0xa4ff,	// (0x0001850f) list_single_mce_smart_pane_t1_ParamLimits

0xa4ff,	// (0x0001850f) list_single_mce_smart_pane_t1

0xa512,	// (0x00018522) list_single_mce_smart_pane_t2_ParamLimits

0xa512,	// (0x00018522) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0001d301) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0001d301) list_single_mce_smart_pane_t

0x281b,	// (0x0001082b) compass_pane

0x2824,	// (0x00010834) main_location2_pane_t1

0x2836,	// (0x00010846) main_location2_pane_t2

0x2848,	// (0x00010858) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0001d306) main_location2_pane_t

0xa531,	// (0x00018541) compass_pane_g1_ParamLimits

0xa531,	// (0x00018541) compass_pane_g1

0x288c,	// (0x0001089c) compass_pane_t1

0x289b,	// (0x000108ab) compass_pane_t2

0x0005,

0xf2ff,	// (0x0001d30f) compass_pane_t

0x28e2,	// (0x000108f2) text_secondary_cp61

0xa5ad,	// (0x000185bd) navi_pane_cams_g5

0xa629,	// (0x00018639) navi_pane_im_t1

0xa637,	// (0x00018647) navi_pane_mp_g1_ParamLimits

0xa637,	// (0x00018647) navi_pane_mp_g1

0xa64b,	// (0x0001865b) navi_pane_mp_g2_ParamLimits

0xa64b,	// (0x0001865b) navi_pane_mp_g2

0xa657,	// (0x00018667) navi_pane_mp_g3_ParamLimits

0xa657,	// (0x00018667) navi_pane_mp_g3

0x0002,

0xf313,	// (0x0001d323) navi_pane_mp_g_ParamLimits

0xf313,	// (0x0001d323) navi_pane_mp_g

0xa663,	// (0x00018673) navi_pane_mp_t1

0xa671,	// (0x00018681) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0001d32a) navi_pane_mp_t

0xa6dc,	// (0x000186ec) navi_pane_vt_g1

0xa663,	// (0x00018673) navi_pane_vt_t1

0xa6e4,	// (0x000186f4) navi_slider_pane

0x9c5e,	// (0x00017c6e) zooming_pane

0xa6f4,	// (0x00018704) navi_slider_pane_g1

0xa6fd,	// (0x0001870d) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0001d331) navi_slider_pane_g

0xa72a,	// (0x0001873a) aid_levels_zoom

0xa732,	// (0x00018742) zooming_pane_g1

0xa73a,	// (0x0001874a) zooming_pane_g2

0xa73a,	// (0x0001874a) zooming_pane_g3

0x0002,

0xf330,	// (0x0001d340) zooming_pane_g

0xa742,	// (0x00018752) level_10_zoom

0xa74b,	// (0x0001875b) level_11_zoom

0xa754,	// (0x00018764) level_1_zoom

0xa75d,	// (0x0001876d) level_2_zoom

0xa766,	// (0x00018776) level_3_zoom

0xa76f,	// (0x0001877f) level_4_zoom

0xa778,	// (0x00018788) level_5_zoom

0xa781,	// (0x00018791) level_6_zoom

0xa78a,	// (0x0001879a) level_7_zoom

0xa793,	// (0x000187a3) level_8_zoom

0xa79c,	// (0x000187ac) level_9_zoom

0xa7ad,	// (0x000187bd) popup_phob_thumbnail_window_g1

0xa7b5,	// (0x000187c5) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x0001d347) popup_phob_thumbnail_window_g

0x3346,	// (0x00011356) level_1_location

0x334e,	// (0x0001135e) level_2_location

0x3356,	// (0x00011366) level_3_location

0x335e,	// (0x0001136e) level_4_location

0x9c5e,	// (0x00017c6e) level_5_location

0x2933,	// (0x00010943) mce_icon_pane_g1

0x293d,	// (0x0001094d) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0001d34c) mce_icon_pane_g

0xa7bd,	// (0x000187cd) main_mup_pane_g1_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g1

0xa7bd,	// (0x000187cd) main_mup_pane_g2_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g2

0xa7bd,	// (0x000187cd) main_mup_pane_g3_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g3

0xa7bd,	// (0x000187cd) main_mup_pane_g4_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g4

0xa7bd,	// (0x000187cd) main_mup_pane_g5_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g5

0xa7bd,	// (0x000187cd) main_mup_pane_g6_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g6

0xa7bd,	// (0x000187cd) main_mup_pane_g7_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g7

0xa7bd,	// (0x000187cd) main_mup_pane_g8_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g8

0xa7bd,	// (0x000187cd) main_mup_pane_g9_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g9

0xa7bd,	// (0x000187cd) main_mup_pane_g10_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g10

0xa7bd,	// (0x000187cd) main_mup_pane_g11_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g11

0x995b,	// (0x0001796b) main_mup_pane_g12_ParamLimits

0x995b,	// (0x0001796b) main_mup_pane_g12

0xa7bd,	// (0x000187cd) main_mup_pane_g13_ParamLimits

0xa7bd,	// (0x000187cd) main_mup_pane_g13

0x000c,

0xf341,	// (0x0001d351) main_mup_pane_g_ParamLimits

0xf341,	// (0x0001d351) main_mup_pane_g

0xa7cb,	// (0x000187db) main_mup_pane_t1_ParamLimits

0xa7cb,	// (0x000187db) main_mup_pane_t1

0xa7cb,	// (0x000187db) main_mup_pane_t2_ParamLimits

0xa7cb,	// (0x000187db) main_mup_pane_t2

0xa7cb,	// (0x000187db) main_mup_pane_t3_ParamLimits

0xa7cb,	// (0x000187db) main_mup_pane_t3

0x99ab,	// (0x000179bb) main_mup_pane_t4_ParamLimits

0x99ab,	// (0x000179bb) main_mup_pane_t4

0x99ab,	// (0x000179bb) main_mup_pane_t5_ParamLimits

0x99ab,	// (0x000179bb) main_mup_pane_t5

0x99bf,	// (0x000179cf) main_mup_pane_t6_ParamLimits

0x99bf,	// (0x000179cf) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0001d36c) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0001d36c) main_mup_pane_t

0x994d,	// (0x0001795d) mup_progress_pane_ParamLimits

0x994d,	// (0x0001795d) mup_progress_pane

0xa7df,	// (0x000187ef) mup_visualizer_pane_ParamLimits

0xa7df,	// (0x000187ef) mup_visualizer_pane

0xa7df,	// (0x000187ef) mup_volume_pane_ParamLimits

0xa7df,	// (0x000187ef) mup_volume_pane

0x9969,	// (0x00017979) mup_visualizer_pane_g1_ParamLimits

0x9969,	// (0x00017979) mup_visualizer_pane_g1

0xa7ed,	// (0x000187fd) mup_visualizer_pane_g2_ParamLimits

0xa7ed,	// (0x000187fd) mup_visualizer_pane_g2

0x995b,	// (0x0001796b) mup_visualizer_pane_g3_ParamLimits

0x995b,	// (0x0001796b) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0001d379) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0001d379) mup_visualizer_pane_g

0x99a1,	// (0x000179b1) mup_volume_pane_g1

0x99a1,	// (0x000179b1) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) mup_volume_pane_g

0x99a1,	// (0x000179b1) mup_progress_pane_g1

0x99a1,	// (0x000179b1) mup_progress_pane_g2

0x99a1,	// (0x000179b1) mup_progress_pane_g3

0x0002,

0xf370,	// (0x0001d380) mup_progress_pane_g

0x9685,	// (0x00017695) bg_popup_window_pane_cp05

0xa7fb,	// (0x0001880b) heading_pane_cp02_ParamLimits

0xa7fb,	// (0x0001880b) heading_pane_cp02

0xa815,	// (0x00018825) list_popup_blid_pane

0xa81d,	// (0x0001882d) list_blid_sat_info_pane_ParamLimits

0xa81d,	// (0x0001882d) list_blid_sat_info_pane

0xa830,	// (0x00018840) list_blid_sat_info_pane_g1

0xa838,	// (0x00018848) list_blid_sat_info_pane_t1

0x2a3d,	// (0x00010a4d) mup_equalizer_pane_ParamLimits

0x2a3d,	// (0x00010a4d) mup_equalizer_pane

0x2a56,	// (0x00010a66) mup_equalizer_pane_cp1_ParamLimits

0x2a56,	// (0x00010a66) mup_equalizer_pane_cp1

0x2a73,	// (0x00010a83) mup_equalizer_pane_cp2_ParamLimits

0x2a73,	// (0x00010a83) mup_equalizer_pane_cp2

0x2a90,	// (0x00010aa0) mup_equalizer_pane_cp3_ParamLimits

0x2a90,	// (0x00010aa0) mup_equalizer_pane_cp3

0x2ab1,	// (0x00010ac1) mup_equalizer_pane_cp4_ParamLimits

0x2ab1,	// (0x00010ac1) mup_equalizer_pane_cp4

0x2ad2,	// (0x00010ae2) mup_equalizer_pane_cp5

0x2ae6,	// (0x00010af6) mup_equalizer_pane_cp6

0x2afa,	// (0x00010b0a) mup_equalizer_pane_cp7

0xb90a,	// (0x0001991a) bg_popup_call_poc_act_pane_g9

0xb912,	// (0x00019922) bg_popup_call_poc_act_pane_g10

0xb91a,	// (0x0001992a) bg_popup_call_poc_act_pane_g11

0x000a,

0x98e0,	// (0x000178f0) mup_scale_pane

0x98f8,	// (0x00017908) mup_scale_pane_g1

0xa846,	// (0x00018856) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0001d39c) mup_scale_pane_g

0xa86a,	// (0x0001887a) msg_data_pane

0xa872,	// (0x00018882) scroll_pane_cp017

0x2b20,	// (0x00010b30) bg_list_pane_cp04_ParamLimits

0x2b20,	// (0x00010b30) bg_list_pane_cp04

0xa87a,	// (0x0001888a) msg_data_pane_g1

0x2b46,	// (0x00010b56) msg_data_pane_g2

0x2b50,	// (0x00010b60) msg_data_pane_g3

0x2b58,	// (0x00010b68) msg_data_pane_g4

0x2b60,	// (0x00010b70) msg_data_pane_g5

0x2b68,	// (0x00010b78) msg_data_pane_g6

0x2b70,	// (0x00010b80) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0001d3ab) msg_data_pane_g

0x2b78,	// (0x00010b88) msg_text_pane_ParamLimits

0x2b78,	// (0x00010b88) msg_text_pane

0x2baa,	// (0x00010bba) qrid_highlight_pane_cp011_ParamLimits

0x2baa,	// (0x00010bba) qrid_highlight_pane_cp011

0x9685,	// (0x00017695) msg_body_pane

0x98e0,	// (0x000178f0) msg_header_pane

0xa896,	// (0x000188a6) input_focus_pane_cp07

0x2bce,	// (0x00010bde) msg_header_pane_t1_ParamLimits

0x2bce,	// (0x00010bde) msg_header_pane_t1

0x2bea,	// (0x00010bfa) msg_header_pane_t2_ParamLimits

0x2bea,	// (0x00010bfa) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0001d3bf) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0001d3bf) msg_header_pane_t

0xa8b7,	// (0x000188c7) msg_body_pane_g1

0x2c0a,	// (0x00010c1a) msg_body_pane_t1_ParamLimits

0x2c0a,	// (0x00010c1a) msg_body_pane_t1

0x2c3b,	// (0x00010c4b) msg_body_pane_t2_ParamLimits

0x2c3b,	// (0x00010c4b) msg_body_pane_t2

0x2c4d,	// (0x00010c5d) msg_body_pane_t3_ParamLimits

0x2c4d,	// (0x00010c5d) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0001d3c4) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0001d3c4) msg_body_pane_t

0x2c99,	// (0x00010ca9) main_viewer_pane_g1_ParamLimits

0x2c99,	// (0x00010ca9) main_viewer_pane_g1

0x2ca7,	// (0x00010cb7) main_viewer_pane_g2_ParamLimits

0x2ca7,	// (0x00010cb7) main_viewer_pane_g2

0x2cb5,	// (0x00010cc5) main_viewer_pane_g3_ParamLimits

0x2cb5,	// (0x00010cc5) main_viewer_pane_g3

0x2cc4,	// (0x00010cd4) main_viewer_pane_g4_ParamLimits

0x2cc4,	// (0x00010cd4) main_viewer_pane_g4

0xa8d7,	// (0x000188e7) main_viewer_pane_g5_ParamLimits

0xa8d7,	// (0x000188e7) main_viewer_pane_g5

0xa8d7,	// (0x000188e7) main_viewer_pane_g7_ParamLimits

0xa8d7,	// (0x000188e7) main_viewer_pane_g7

0xa8e9,	// (0x000188f9) main_viewer_pane_g8_ParamLimits

0xa8e9,	// (0x000188f9) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0001d3d4) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0001d3d4) main_viewer_pane_g

0xa901,	// (0x00018911) viewer_content_pane_ParamLimits

0xa901,	// (0x00018911) viewer_content_pane

0x2d00,	// (0x00010d10) main_postcard_pane_g1_ParamLimits

0x2d00,	// (0x00010d10) main_postcard_pane_g1

0x2d16,	// (0x00010d26) main_postcard_pane_g2_ParamLimits

0x2d16,	// (0x00010d26) main_postcard_pane_g2

0x2d2c,	// (0x00010d3c) main_postcard_pane_g3_ParamLimits

0x2d2c,	// (0x00010d3c) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0001d3e5) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0001d3e5) main_postcard_pane_g

0x2d43,	// (0x00010d53) main_postcard_pane_g4

0xba9a,	// (0x00019aaa) smil_status_volume_pane_g2

0x2d86,	// (0x00010d96) postcard_pane_ParamLimits

0x2d86,	// (0x00010d96) postcard_pane

0xa90f,	// (0x0001891f) postcard_pane_g1_ParamLimits

0xa90f,	// (0x0001891f) postcard_pane_g1

0x2dc8,	// (0x00010dd8) postcard_pane_g2_ParamLimits

0x2dc8,	// (0x00010dd8) postcard_pane_g2

0x2dd4,	// (0x00010de4) postcard_pane_g3_ParamLimits

0x2dd4,	// (0x00010de4) postcard_pane_g3

0xa91d,	// (0x0001892d) postcard_pane_g4_ParamLimits

0xa91d,	// (0x0001892d) postcard_pane_g4

0x2de0,	// (0x00010df0) postcard_pane_g5_ParamLimits

0x2de0,	// (0x00010df0) postcard_pane_g5

0x2df5,	// (0x00010e05) postcard_pane_g6_ParamLimits

0x2df5,	// (0x00010e05) postcard_pane_g6

0xa90f,	// (0x0001891f) postcard_pane_g7_ParamLimits

0xa90f,	// (0x0001891f) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0001d3f2) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0001d3f2) postcard_pane_g

0x2e09,	// (0x00010e19) main_mp2_pane_g1_ParamLimits

0x2e09,	// (0x00010e19) main_mp2_pane_g1

0x2e15,	// (0x00010e25) main_mp2_pane_g2_ParamLimits

0x2e15,	// (0x00010e25) main_mp2_pane_g2

0x2e21,	// (0x00010e31) main_mp2_pane_g3_ParamLimits

0x2e21,	// (0x00010e31) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0001d401) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0001d401) main_mp2_pane_g

0x2e2d,	// (0x00010e3d) main_mp2_pane_t1_ParamLimits

0x2e2d,	// (0x00010e3d) main_mp2_pane_t1

0x2e42,	// (0x00010e52) main_mp2_pane_t2_ParamLimits

0x2e42,	// (0x00010e52) main_mp2_pane_t2

0x2e54,	// (0x00010e64) main_mp2_pane_t3_ParamLimits

0x2e54,	// (0x00010e64) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0001d408) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0001d408) main_mp2_pane_t

0x9264,	// (0x00017274) pec_content_pane_ParamLimits

0x9264,	// (0x00017274) pec_content_pane

0x91f5,	// (0x00017205) scroll_pane_cp015

0xa7df,	// (0x000187ef) pec_attribute_pane_ParamLimits

0xa7df,	// (0x000187ef) pec_attribute_pane

0x995b,	// (0x0001796b) pec_content_pane_g1_ParamLimits

0x995b,	// (0x0001796b) pec_content_pane_g1

0xa92b,	// (0x0001893b) pec_content_pane_t1_ParamLimits

0xa92b,	// (0x0001893b) pec_content_pane_t1

0xa93f,	// (0x0001894f) pec_content_pane_t2_ParamLimits

0xa93f,	// (0x0001894f) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0001d40f) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0001d40f) pec_content_pane_t

0x994d,	// (0x0001795d) list_single_graphic_pane_cp01_ParamLimits

0x994d,	// (0x0001795d) list_single_graphic_pane_cp01

0x98e0,	// (0x000178f0) bg_popup_sub_pane_cp04

0xa953,	// (0x00018963) popup_mup_playback_window_g1

0xa95f,	// (0x0001896f) popup_mup_playback_window_t1

0xa974,	// (0x00018984) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x0001d414) popup_mup_playback_window_t

0xa9ab,	// (0x000189bb) main_image_pane_g1_ParamLimits

0xa9ab,	// (0x000189bb) main_image_pane_g1

0xa9ee,	// (0x000189fe) scroll_pane_cp018_ParamLimits

0xa9ee,	// (0x000189fe) scroll_pane_cp018

0xaa06,	// (0x00018a16) scroll_pane_cp016_ParamLimits

0xaa06,	// (0x00018a16) scroll_pane_cp016

0x2f1e,	// (0x00010f2e) smil2_image_pane_ParamLimits

0x2f1e,	// (0x00010f2e) smil2_image_pane

0x2f4e,	// (0x00010f5e) smil2_root_pane_ParamLimits

0x2f4e,	// (0x00010f5e) smil2_root_pane

0x2f86,	// (0x00010f96) smil2_text_pane_ParamLimits

0x2f86,	// (0x00010f96) smil2_text_pane

0x91f5,	// (0x00017205) bg_list_pane_cp06

0x91f5,	// (0x00017205) grid_radio_pane

0x9685,	// (0x00017695) bg_popup_window_pane_cp06

0xa193,	// (0x000181a3) main_fmradio_pane_t1

0xa38d,	// (0x0001839d) heading_pane_cp04

0xa193,	// (0x000181a3) main_fmradio_pane_t2

0xb922,	// (0x00019932) popup_cale_lunar_info_window_g1

0xa193,	// (0x000181a3) main_fmradio_pane_t3

0xb92a,	// (0x0001993a) popup_cale_lunar_info_window_g2

0xa193,	// (0x000181a3) main_fmradio_pane_t4

0x0001,

0xa193,	// (0x000181a3) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0001d4d1) popup_cale_lunar_info_window_g

0xf264,	// (0x0001d274) main_fmradio_pane_t

0x91f5,	// (0x00017205) wait_bar_pane_cp03

0x994d,	// (0x0001795d) cell_fmradio_pane_ParamLimits

0x994d,	// (0x0001795d) cell_fmradio_pane

0x995b,	// (0x0001796b) cell_fmradio_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_fmradio_pane_g1

0x91f5,	// (0x00017205) grid_highlight_pane_cp011

0xaa3a,	// (0x00018a4a) poc_content_pane_ParamLimits

0xaa3a,	// (0x00018a4a) poc_content_pane

0xaa4c,	// (0x00018a5c) scroll_pane_cp019

0x3006,	// (0x00011016) popup_call_poc_act_window_ParamLimits

0x3006,	// (0x00011016) popup_call_poc_act_window

0x302a,	// (0x0001103a) popup_call_poc_inact_window_ParamLimits

0x302a,	// (0x0001103a) popup_call_poc_inact_window

0xf49d,	// (0x0001d4ad) bg_popup_call_poc_act_pane_g

0xb89a,	// (0x000198aa) bg_popup_call_poc_inact_pane_g1

0xb8a2,	// (0x000198b2) bg_popup_call_poc_inact_pane_g2

0xaa54,	// (0x00018a64) popup_call_poc_act_window_g2

0xb8aa,	// (0x000198ba) bg_popup_call_poc_inact_pane_g3

0xb8b2,	// (0x000198c2) bg_popup_call_poc_inact_pane_g4

0xb8ba,	// (0x000198ca) bg_popup_call_poc_inact_pane_g5

0xaa5c,	// (0x00018a6c) popup_call_poc_act_window_t1_ParamLimits

0xaa5c,	// (0x00018a6c) popup_call_poc_act_window_t1

0xaa84,	// (0x00018a94) popup_call_poc_act_window_t2_ParamLimits

0xaa84,	// (0x00018a94) popup_call_poc_act_window_t2

0xaaac,	// (0x00018abc) popup_call_poc_act_window_t3_ParamLimits

0xaaac,	// (0x00018abc) popup_call_poc_act_window_t3

0xaad4,	// (0x00018ae4) popup_call_poc_act_window_t4_ParamLimits

0xaad4,	// (0x00018ae4) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0001d429) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0001d429) popup_call_poc_act_window_t

0xb8c2,	// (0x000198d2) bg_popup_call_poc_inact_pane_g6

0xb8ca,	// (0x000198da) bg_popup_call_poc_inact_pane_g7

0xb8d2,	// (0x000198e2) bg_popup_call_poc_inact_pane_g8

0xaae6,	// (0x00018af6) popup_call_poc_inact_window_g2

0xb8da,	// (0x000198ea) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x0001d49a) bg_popup_call_poc_inact_pane_g

0xaaee,	// (0x00018afe) popup_call_poc_inact_window_t1_ParamLimits

0xaaee,	// (0x00018afe) popup_call_poc_inact_window_t1

0xab03,	// (0x00018b13) popup_call_poc_inact_window_t2_ParamLimits

0xab03,	// (0x00018b13) popup_call_poc_inact_window_t2

0xab18,	// (0x00018b28) popup_call_poc_inact_window_t3_ParamLimits

0xab18,	// (0x00018b28) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0001d432) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0001d432) popup_call_poc_inact_window_t

0xba12,	// (0x00019a22) context_pane_ParamLimits

0x3818,	// (0x00011828) signal_pane_ParamLimits

0x9c5e,	// (0x00017c6e) main_call2_pane

0xb9eb,	// (0x000199fb) popup_phob_thumbnail2_window_ParamLimits

0xb9eb,	// (0x000199fb) popup_phob_thumbnail2_window

0xa8bf,	// (0x000188cf) aid_hotspot_pointer_arrow_pane

0xa8c7,	// (0x000188d7) aid_hotspot_pointer_hand_pane

0x3310,	// (0x00011320) phob_pre_status_pane_g5

0x9264,	// (0x00017274) cams_zoom_pane_ParamLimits

0x9264,	// (0x00017274) image_vga_pane_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g1_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g2_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g3_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g4_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g5_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g6_ParamLimits

0x995b,	// (0x0001796b) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0001d16d) main_camera_pane_g_ParamLimits

0x99ab,	// (0x000179bb) main_camera_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0001d17e) main_camera_pane_t_ParamLimits

0x98e0,	// (0x000178f0) bg_popup_preview_window_pane_cp01_ParamLimits

0x98e0,	// (0x000178f0) bg_popup_preview_window_pane_cp01

0xab2d,	// (0x00018b3d) popup_phob_thumbnail2_window_g1_ParamLimits

0xab2d,	// (0x00018b3d) popup_phob_thumbnail2_window_g1

0x9685,	// (0x00017695) call2_cli_visual_pane

0x305e,	// (0x0001106e) popup_call2_audio_conf_window_ParamLimits

0x305e,	// (0x0001106e) popup_call2_audio_conf_window

0x307e,	// (0x0001108e) popup_call2_audio_first_window_ParamLimits

0x307e,	// (0x0001108e) popup_call2_audio_first_window

0x3114,	// (0x00011124) popup_call2_audio_in_window_ParamLimits

0x3114,	// (0x00011124) popup_call2_audio_in_window

0x315c,	// (0x0001116c) popup_call2_audio_out_window_ParamLimits

0x315c,	// (0x0001116c) popup_call2_audio_out_window

0x31c6,	// (0x000111d6) popup_call2_audio_second_window_ParamLimits

0x31c6,	// (0x000111d6) popup_call2_audio_second_window

0x322c,	// (0x0001123c) popup_call2_audio_wait_window_ParamLimits

0x322c,	// (0x0001123c) popup_call2_audio_wait_window

0x9685,	// (0x00017695) bg_popup_call2_act_pane_cp03

0x98c2,	// (0x000178d2) list_conf_pane_cp

0xab39,	// (0x00018b49) popup_call2_audio_conf_window_t1

0xa3dd,	// (0x000183ed) list_single_graphic_popup_conf2_pane_ParamLimits

0xa3dd,	// (0x000183ed) list_single_graphic_popup_conf2_pane

0xa3f0,	// (0x00018400) list_highlight_pane_cp04

0xab47,	// (0x00018b57) list_single_graphic_popup_conf2_pane_g1

0xa401,	// (0x00018411) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0001d439) list_single_graphic_popup_conf2_pane_g

0xab51,	// (0x00018b61) list_single_graphic_popup_conf2_pane_t1

0xab5f,	// (0x00018b6f) bg_popup_call2_act_pane_cp01_ParamLimits

0xab5f,	// (0x00018b6f) bg_popup_call2_act_pane_cp01

0xabe9,	// (0x00018bf9) call_type_pane_cp05_ParamLimits

0xabe9,	// (0x00018bf9) call_type_pane_cp05

0xac3d,	// (0x00018c4d) popup_call2_audio_second_window_g1_ParamLimits

0xac3d,	// (0x00018c4d) popup_call2_audio_second_window_g1

0xac91,	// (0x00018ca1) popup_call2_audio_second_window_g2_ParamLimits

0xac91,	// (0x00018ca1) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0001d43e) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0001d43e) popup_call2_audio_second_window_g

0xacf6,	// (0x00018d06) popup_call2_audio_second_window_t1_ParamLimits

0xacf6,	// (0x00018d06) popup_call2_audio_second_window_t1

0xadb1,	// (0x00018dc1) popup_call2_audio_second_window_t2_ParamLimits

0xadb1,	// (0x00018dc1) popup_call2_audio_second_window_t2

0xae04,	// (0x00018e14) popup_call2_audio_second_window_t3_ParamLimits

0xae04,	// (0x00018e14) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x0001d445) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x0001d445) popup_call2_audio_second_window_t

0x9685,	// (0x00017695) bg_popup_call2_in_pane_cp02

0x968f,	// (0x0001769f) call_type_pane_cp04

0x3266,	// (0x00011276) popup_call2_audio_wait_window_g1

0x326e,	// (0x0001127e) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0001d44e) popup_call2_audio_wait_window_g

0x96a7,	// (0x000176b7) popup_call2_audio_wait_window_t3

0xaef7,	// (0x00018f07) bg_popup_call2_act_pane_ParamLimits

0xaef7,	// (0x00018f07) bg_popup_call2_act_pane

0xafb7,	// (0x00018fc7) call_type_pane_cp03_ParamLimits

0xafb7,	// (0x00018fc7) call_type_pane_cp03

0xb01b,	// (0x0001902b) popup_call2_audio_first_window_g1_ParamLimits

0xb01b,	// (0x0001902b) popup_call2_audio_first_window_g1

0xb08b,	// (0x0001909b) popup_call2_audio_first_window_g2_ParamLimits

0xb08b,	// (0x0001909b) popup_call2_audio_first_window_g2

0xb0ef,	// (0x000190ff) popup_call2_audio_first_window_g3_ParamLimits

0xb0ef,	// (0x000190ff) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x0001d453) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x0001d453) popup_call2_audio_first_window_g

0xb177,	// (0x00019187) popup_call2_audio_first_window_t1_ParamLimits

0xb177,	// (0x00019187) popup_call2_audio_first_window_t1

0xb27a,	// (0x0001928a) popup_call2_audio_first_window_t4_ParamLimits

0xb27a,	// (0x0001928a) popup_call2_audio_first_window_t4

0xb35d,	// (0x0001936d) popup_call2_audio_first_window_t5_ParamLimits

0xb35d,	// (0x0001936d) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0001d45e) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0001d45e) popup_call2_audio_first_window_t

0x98d8,	// (0x000178e8) bg_popup_call2_act_pane_g1

0xb932,	// (0x00019942) popup_cale_lunar_info_window_t1

0xb940,	// (0x00019950) popup_cale_lunar_info_window_t2

0xb94e,	// (0x0001995e) popup_cale_lunar_info_window_t3

0x9685,	// (0x00017695) bg_popup_call2_bubble_pane

0xb45e,	// (0x0001946e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb45e,	// (0x0001946e) bg_popup_call2_in_pane_cp01

0x9361,	// (0x00017371) call_type_pane_cp02

0x3276,	// (0x00011286) popup_call2_audio_out_window_g1_ParamLimits

0x3276,	// (0x00011286) popup_call2_audio_out_window_g1

0xb4a6,	// (0x000194b6) popup_call2_audio_out_window_g2_ParamLimits

0xb4a6,	// (0x000194b6) popup_call2_audio_out_window_g2

0x32a2,	// (0x000112b2) popup_call2_audio_out_window_g3_ParamLimits

0x32a2,	// (0x000112b2) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x0001d467) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x0001d467) popup_call2_audio_out_window_g

0xb4dd,	// (0x000194ed) popup_call2_audio_out_window_t1_ParamLimits

0xb4dd,	// (0x000194ed) popup_call2_audio_out_window_t1

0xb53c,	// (0x0001954c) popup_call2_audio_out_window_t2_ParamLimits

0xb53c,	// (0x0001954c) popup_call2_audio_out_window_t2

0xb590,	// (0x000195a0) popup_call2_audio_out_window_t3_ParamLimits

0xb590,	// (0x000195a0) popup_call2_audio_out_window_t3

0xb5a6,	// (0x000195b6) popup_call2_audio_out_window_t4_ParamLimits

0xb5a6,	// (0x000195b6) popup_call2_audio_out_window_t4

0xb5bc,	// (0x000195cc) popup_call2_audio_out_window_t5_ParamLimits

0xb5bc,	// (0x000195cc) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x0001d470) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x0001d470) popup_call2_audio_out_window_t

0xb620,	// (0x00019630) bg_popup_call2_in_pane_ParamLimits

0xb620,	// (0x00019630) bg_popup_call2_in_pane

0xb67c,	// (0x0001968c) popup_call2_audio_in_window_g1_ParamLimits

0xb67c,	// (0x0001968c) popup_call2_audio_in_window_g1

0xb6b4,	// (0x000196c4) popup_call2_audio_in_window_g2_ParamLimits

0xb6b4,	// (0x000196c4) popup_call2_audio_in_window_g2

0xb6ec,	// (0x000196fc) popup_call2_audio_in_window_g3_ParamLimits

0xb6ec,	// (0x000196fc) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0001d47d) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0001d47d) popup_call2_audio_in_window_g

0xb744,	// (0x00019754) popup_call2_audio_in_window_t1_ParamLimits

0xb744,	// (0x00019754) popup_call2_audio_in_window_t1

0xb7c4,	// (0x000197d4) popup_call2_audio_in_window_t2_ParamLimits

0xb7c4,	// (0x000197d4) popup_call2_audio_in_window_t2

0xb844,	// (0x00019854) popup_call2_audio_in_window_t3_ParamLimits

0xb844,	// (0x00019854) popup_call2_audio_in_window_t3

0xb85e,	// (0x0001986e) popup_call2_audio_in_window_t4_ParamLimits

0xb85e,	// (0x0001986e) popup_call2_audio_in_window_t4

0xb870,	// (0x00019880) popup_call2_audio_in_window_t5_ParamLimits

0xb870,	// (0x00019880) popup_call2_audio_in_window_t5

0xb885,	// (0x00019895) popup_call2_audio_in_window_t6_ParamLimits

0xb885,	// (0x00019895) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0001d486) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0001d486) popup_call2_audio_in_window_t

0x98d8,	// (0x000178e8) bg_popup_call2_in_pane_g1

0xb95c,	// (0x0001996c) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x0001d4d6) popup_cale_lunar_info_window_t

0x98e0,	// (0x000178f0) bg_popup_call2_rect_pane_ParamLimits

0x98e0,	// (0x000178f0) bg_popup_call2_rect_pane

0x9685,	// (0x00017695) call2_cli_visual_graphic_pane

0x9685,	// (0x00017695) call2_cli_visual_text_pane

0xbaad,	// (0x00019abd) smil_status_volume_pane_g3

0x0002,

0x98f8,	// (0x00017908) call2_cli_visual_graphic_pane_g1

0x98f8,	// (0x00017908) call2_cli_visual_graphic_pane_g2

0x98f8,	// (0x00017908) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0001d493) call2_cli_visual_graphic_pane_g

0x9b65,	// (0x00017b75) bg_popup_call2_rect_pane_g1

0x9b55,	// (0x00017b65) bg_popup_call2_rect_pane_g2

0x9b5d,	// (0x00017b6d) bg_popup_call2_rect_pane_g3

0x9b6d,	// (0x00017b7d) bg_popup_call2_rect_pane_g4

0x9b75,	// (0x00017b85) bg_popup_call2_rect_pane_g5

0x9b7d,	// (0x00017b8d) bg_popup_call2_rect_pane_g6

0x9b85,	// (0x00017b95) bg_popup_call2_rect_pane_g7

0x9b8d,	// (0x00017b9d) bg_popup_call2_rect_pane_g8

0x9b95,	// (0x00017ba5) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x0001d223) bg_popup_call2_rect_pane_g

0xb89a,	// (0x000198aa) bg_popup_call2_bubble_pane_g1

0xb8a2,	// (0x000198b2) bg_popup_call2_bubble_pane_g2

0xb8aa,	// (0x000198ba) bg_popup_call2_bubble_pane_g3

0xb8b2,	// (0x000198c2) bg_popup_call2_bubble_pane_g4

0xb8ba,	// (0x000198ca) bg_popup_call2_bubble_pane_g5

0xb8c2,	// (0x000198d2) bg_popup_call2_bubble_pane_g6

0xb8ca,	// (0x000198da) bg_popup_call2_bubble_pane_g7

0xb8d2,	// (0x000198e2) bg_popup_call2_bubble_pane_g8

0xb8da,	// (0x000198ea) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0001d49a) bg_popup_call2_bubble_pane_g

0x0ef8,	// (0x0000ef08) aid_cale_week_size_cell_pane

0x149e,	// (0x0000f4ae) aid_cams_cif_uncrop_pane_ParamLimits

0x149e,	// (0x0000f4ae) aid_cams_cif_uncrop_pane

0x9264,	// (0x00017274) aid_cams_size_cell_ParamLimits

0x9264,	// (0x00017274) aid_cams_size_cell

0x9264,	// (0x00017274) grid_cams_pane_ParamLimits

0x9264,	// (0x00017274) linegrid_cams_pane_ParamLimits

0x16bc,	// (0x0000f6cc) call_video_pane_t1

0x16da,	// (0x0000f6ea) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0001d1ca) call_video_pane_t

0x1b08,	// (0x0000fb18) aid_cale_month_size_cell_pane_ParamLimits

0x1b08,	// (0x0000fb18) aid_cale_month_size_cell_pane

0xf50a,	// (0x0001d51a) smil_status_volume_pane_g

0xbaba,	// (0x00019aca) volume_smil_pane_ParamLimits

0x9207,	// (0x00017217) aid_popup2_width_pane

0x0e6f,	// (0x0000ee7f) cell_qdial_pane_g4_ParamLimits

0x0e6f,	// (0x0000ee7f) cell_qdial_pane_g4

0x286c,	// (0x0001087c) aid_blid_cardinal_pane_ParamLimits

0x2878,	// (0x00010888) aid_blid_destination_pane_ParamLimits

0x2878,	// (0x00010888) aid_blid_destination_pane

0x98e0,	// (0x000178f0) bg_popup_call_poc_act_pane_ParamLimits

0x98e0,	// (0x000178f0) bg_popup_call_poc_act_pane

0x98e0,	// (0x000178f0) bg_popup_call_poc_inact_pane_ParamLimits

0x98e0,	// (0x000178f0) bg_popup_call_poc_inact_pane

0xb8e2,	// (0x000198f2) bg_popup_call_poc_act_pane_g1

0xb8ea,	// (0x000198fa) bg_popup_call_poc_act_pane_g2

0xb8f2,	// (0x00019902) bg_popup_call_poc_act_pane_g3

0xb8b2,	// (0x000198c2) bg_popup_call_poc_act_pane_g4

0xb8ba,	// (0x000198ca) bg_popup_call_poc_act_pane_g5

0xb8fa,	// (0x0001990a) bg_popup_call_poc_act_pane_g6

0xb8ca,	// (0x000198da) bg_popup_call_poc_act_pane_g7

0xb902,	// (0x00019912) bg_popup_call_poc_act_pane_g8

0x9685,	// (0x00017695) main_usb_pane

0xb9c6,	// (0x000199d6) popup_cale_lunar_info_window

0x19b4,	// (0x0000f9c4) im_reading_pane_t1_ParamLimits

0x9d29,	// (0x00017d39) list_im_pane_ParamLimits

0x9d3a,	// (0x00017d4a) scroll_pane_cp07_ParamLimits

0x9685,	// (0x00017695) grid_highlight_pane_cp012

0x98e0,	// (0x000178f0) mup_scale_pane_ParamLimits

0x995b,	// (0x0001796b) main_usb_pane_g1_ParamLimits

0x995b,	// (0x0001796b) main_usb_pane_g1

0x995b,	// (0x0001796b) main_usb_pane_g2_ParamLimits

0x995b,	// (0x0001796b) main_usb_pane_g2

0x0001,

0xf199,	// (0x0001d1a9) main_usb_pane_g_ParamLimits

0xf199,	// (0x0001d1a9) main_usb_pane_g

0x99ab,	// (0x000179bb) main_usb_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) main_usb_pane_t1

0x99ab,	// (0x000179bb) main_usb_pane_t2_ParamLimits

0x99ab,	// (0x000179bb) main_usb_pane_t2

0x99ab,	// (0x000179bb) main_usb_pane_t3_ParamLimits

0x99ab,	// (0x000179bb) main_usb_pane_t3

0x99ab,	// (0x000179bb) main_usb_pane_t4_ParamLimits

0x99ab,	// (0x000179bb) main_usb_pane_t4

0x99ab,	// (0x000179bb) main_usb_pane_t5_ParamLimits

0x99ab,	// (0x000179bb) main_usb_pane_t5

0x99ab,	// (0x000179bb) main_usb_pane_t6_ParamLimits

0x99ab,	// (0x000179bb) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x0001d4c4) main_usb_pane_t_ParamLimits

0x281b,	// (0x0001082b) aid_text_placing

0x2824,	// (0x00010834) main_location2_pane_t1_ParamLimits

0x2836,	// (0x00010846) main_location2_pane_t2_ParamLimits

0x2848,	// (0x00010858) main_location2_pane_t3_ParamLimits

0x285a,	// (0x0001086a) main_location2_pane_t4_ParamLimits

0x285a,	// (0x0001086a) main_location2_pane_t4

0xf2f6,	// (0x0001d306) main_location2_pane_t_ParamLimits

0x990e,	// (0x0001791e) find_pinb_pane_g2_ParamLimits

0x990e,	// (0x0001791e) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0001d082) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0001d082) find_pinb_pane_g

0x991a,	// (0x0001792a) find_pinb_pane_t1_ParamLimits

0x992c,	// (0x0001793c) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0001d087) find_pinb_pane_t_ParamLimits

0x9685,	// (0x00017695) main_call3_pane

0x1ff3,	// (0x00010003) cale_month_day_heading_pane_t1_ParamLimits

0x2079,	// (0x00010089) cale_month_day_heading_pane_t2_ParamLimits

0x20f2,	// (0x00010102) cale_month_day_heading_pane_t3_ParamLimits

0x216b,	// (0x0001017b) cale_month_day_heading_pane_t4_ParamLimits

0x21ec,	// (0x000101fc) cale_month_day_heading_pane_t5_ParamLimits

0x2275,	// (0x00010285) cale_month_day_heading_pane_t6_ParamLimits

0x22fe,	// (0x0001030e) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0001d202) cale_month_day_heading_pane_t_ParamLimits

0x9f90,	// (0x00017fa0) smil_status_volume_pane

0x2da4,	// (0x00010db4) postcard_address_pane_ParamLimits

0x2da4,	// (0x00010db4) postcard_address_pane

0x2db6,	// (0x00010dc6) postcard_message_pane_ParamLimits

0x2db6,	// (0x00010dc6) postcard_message_pane

0x32ce,	// (0x000112de) call2_cli_visual_pane_t1_ParamLimits

0x32ce,	// (0x000112de) call2_cli_visual_pane_t1

0xbae7,	// (0x00019af7) postcard_message_pane_t1_ParamLimits

0xbae7,	// (0x00019af7) postcard_message_pane_t1

0xbacf,	// (0x00019adf) postcard_address_pane_t1_ParamLimits

0xbacf,	// (0x00019adf) postcard_address_pane_t1

0x39ca,	// (0x000119da) popup_call3_audio_in_window_ParamLimits

0x39ca,	// (0x000119da) popup_call3_audio_in_window

0x3855,	// (0x00011865) bg_popup_call3_in_pane_ParamLimits

0x3855,	// (0x00011865) bg_popup_call3_in_pane

0x38cb,	// (0x000118db) popup_call3_audio_in_window_g1_ParamLimits

0x38cb,	// (0x000118db) popup_call3_audio_in_window_g1

0x38eb,	// (0x000118fb) popup_call3_audio_in_window_g2_ParamLimits

0x38eb,	// (0x000118fb) popup_call3_audio_in_window_g2

0x390b,	// (0x0001191b) popup_call3_audio_in_window_g3_ParamLimits

0x390b,	// (0x0001191b) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0001d521) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0001d521) popup_call3_audio_in_window_g

0x393c,	// (0x0001194c) popup_call3_audio_in_window_t1_ParamLimits

0x393c,	// (0x0001194c) popup_call3_audio_in_window_t1

0x397a,	// (0x0001198a) popup_call3_audio_in_window_t2_ParamLimits

0x397a,	// (0x0001198a) popup_call3_audio_in_window_t2

0x39b8,	// (0x000119c8) popup_call3_audio_in_window_t3_ParamLimits

0x39b8,	// (0x000119c8) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x0001d52a) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x0001d52a) popup_call3_audio_in_window_t

0x9c5e,	// (0x00017c6e) bg_popup_call3_rect_pane

0x9b65,	// (0x00017b75) bg_popup_call3_rect_pane_g1

0x9b55,	// (0x00017b65) bg_popup_call3_rect_pane_g2

0x9b5d,	// (0x00017b6d) bg_popup_call3_rect_pane_g3

0x9b6d,	// (0x00017b7d) bg_popup_call3_rect_pane_g4

0x9b75,	// (0x00017b85) bg_popup_call3_rect_pane_g5

0x9b7d,	// (0x00017b8d) bg_popup_call3_rect_pane_g6

0x9b85,	// (0x00017b95) bg_popup_call3_rect_pane_g7

0x91f5,	// (0x00017205) mup_visualizer_osc_pane

0x91f5,	// (0x00017205) mup_visualizer_spec_pane

0x3885,	// (0x00011895) call3_video_qcif_pane_ParamLimits

0x3885,	// (0x00011895) call3_video_qcif_pane

0x3898,	// (0x000118a8) call3_video_qcif_uncrop_pane_ParamLimits

0x3898,	// (0x000118a8) call3_video_qcif_uncrop_pane

0x38a6,	// (0x000118b6) call3_video_subqcif_pane_ParamLimits

0x38a6,	// (0x000118b6) call3_video_subqcif_pane

0x38ba,	// (0x000118ca) call3_video_subqcif_uncrop_pane_ParamLimits

0x38ba,	// (0x000118ca) call3_video_subqcif_uncrop_pane

0x392b,	// (0x0001193b) popup_call3_audio_in_window_g4_ParamLimits

0x392b,	// (0x0001193b) popup_call3_audio_in_window_g4

0x91f5,	// (0x00017205) mup_spec_half_pane

0x91f5,	// (0x00017205) mup_spec_half_pane_cp

0x91f5,	// (0x00017205) mup_osc_middle_pane

0x99a1,	// (0x000179b1) mup_visualizer_osc_pane_g1

0xba60,	// (0x00019a70) mup_spec_bar_pane_ParamLimits

0xba60,	// (0x00019a70) mup_spec_bar_pane

0x99a1,	// (0x000179b1) mup_spec_bar_pane_g1

0x99a1,	// (0x000179b1) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) mup_spec_bar_pane_g

0x0ef8,	// (0x0000ef08) aid_cale_week_size_cell_pane_ParamLimits

0x0f12,	// (0x0000ef22) bg_cale_heading_pane_ParamLimits

0x9bc0,	// (0x00017bd0) bg_cale_pane_cp01_ParamLimits

0x0f2a,	// (0x0000ef3a) cale_week_corner_pane_ParamLimits

0x0f49,	// (0x0000ef59) cale_week_day_heading_pane_ParamLimits

0x0f66,	// (0x0000ef76) cale_week_scroll_pane_g1_ParamLimits

0x0f79,	// (0x0000ef89) cale_week_scroll_pane_g2_ParamLimits

0x0f91,	// (0x0000efa1) cale_week_scroll_pane_g3_ParamLimits

0x0fa9,	// (0x0000efb9) cale_week_scroll_pane_g4_ParamLimits

0x0fc1,	// (0x0000efd1) cale_week_scroll_pane_g5_ParamLimits

0x0fe1,	// (0x0000eff1) cale_week_scroll_pane_g6_ParamLimits

0x1001,	// (0x0000f011) cale_week_scroll_pane_g7_ParamLimits

0x1021,	// (0x0000f031) cale_week_scroll_pane_g8_ParamLimits

0x1045,	// (0x0000f055) cale_week_scroll_pane_g9_ParamLimits

0x105d,	// (0x0000f06d) cale_week_scroll_pane_g10_ParamLimits

0x1075,	// (0x0000f085) cale_week_scroll_pane_g11_ParamLimits

0x108d,	// (0x0000f09d) cale_week_scroll_pane_g12_ParamLimits

0x10a5,	// (0x0000f0b5) cale_week_scroll_pane_g13_ParamLimits

0x10a5,	// (0x0000f0b5) cale_week_scroll_pane_g14_ParamLimits

0x10a5,	// (0x0000f0b5) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0001d113) cale_week_scroll_pane_g_ParamLimits

0x10e1,	// (0x0000f0f1) cale_week_time_pane_ParamLimits

0x1105,	// (0x0000f115) grid_cale_week_pane_ParamLimits

0x9bdd,	// (0x00017bed) listscroll_cale_week_pane_t1

0x9bef,	// (0x00017bff) scroll_pane_cp08_ParamLimits

0x1b68,	// (0x0000fb78) cale_month_corner_pane_ParamLimits

0x9f5a,	// (0x00017f6a) cale_month_pane_t1

0x1f86,	// (0x0000ff96) cale_month_week_pane_ParamLimits

0x269b,	// (0x000106ab) popup_call_status_window_g1_ParamLimits

0x26af,	// (0x000106bf) popup_call_status_window_g2_ParamLimits

0x26c3,	// (0x000106d3) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0001d28d) popup_call_status_window_g_ParamLimits

0xa30a,	// (0x0001831a) aid_call2_pane

0x2bc0,	// (0x00010bd0) msg_header_pane_g1

0x2da4,	// (0x00010db4) postcard_address2_pane_ParamLimits

0x2da4,	// (0x00010db4) postcard_address2_pane

0x2db6,	// (0x00010dc6) postcard_message2_pane_ParamLimits

0x2db6,	// (0x00010dc6) postcard_message2_pane

0x3826,	// (0x00011836) message2_row_pane_ParamLimits

0x3826,	// (0x00011836) message2_row_pane

0x3842,	// (0x00011852) address2_row_pane_ParamLimits

0x3842,	// (0x00011852) address2_row_pane

0xba2d,	// (0x00019a3d) postcard_message2_row_pane_g1

0xba35,	// (0x00019a45) postcard_message2_row_pane_t1

0xba2d,	// (0x00019a3d) address2_row_pane_g1

0xba35,	// (0x00019a45) address2_row_pane_t1

0x1435,	// (0x0000f445) aid_size_cell_vorec

0x9685,	// (0x00017695) main_rss_pane

0xba43,	// (0x00019a53) rss_list_single_pane_ParamLimits

0xba43,	// (0x00019a53) rss_list_single_pane

0xba51,	// (0x00019a61) rss_list_single_pane_t1

0xba51,	// (0x00019a61) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x0001d515) rss_list_single_pane_t

0x9685,	// (0x00017695) main_camera2_pane

0x9685,	// (0x00017695) main_video2_pane

0xbb03,	// (0x00019b13) cams_zoom_pane_cp2_ParamLimits

0xbb03,	// (0x00019b13) cams_zoom_pane_cp2

0xbb03,	// (0x00019b13) image2_vga_pane_ParamLimits

0xbb03,	// (0x00019b13) image2_vga_pane

0xbb11,	// (0x00019b21) main_camera2_pane_g1_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g1

0xbb11,	// (0x00019b21) main_camera2_pane_g2_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g2

0xbb11,	// (0x00019b21) main_camera2_pane_g3_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g3

0xbb11,	// (0x00019b21) main_camera2_pane_g4_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g4

0xbb11,	// (0x00019b21) main_camera2_pane_g5_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g5

0xbb11,	// (0x00019b21) main_camera2_pane_g6_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g6

0xbb11,	// (0x00019b21) main_camera2_pane_g7_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g7

0xbb11,	// (0x00019b21) main_camera2_pane_g8_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0001d531) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0001d531) main_camera2_pane_g

0x39ec,	// (0x000119fc) main_camera2_pane_t1_ParamLimits

0x39ec,	// (0x000119fc) main_camera2_pane_t1

0x39ec,	// (0x000119fc) main_camera2_pane_t2_ParamLimits

0x39ec,	// (0x000119fc) main_camera2_pane_t2

0x39ec,	// (0x000119fc) main_camera2_pane_t3_ParamLimits

0x39ec,	// (0x000119fc) main_camera2_pane_t3

0x39ec,	// (0x000119fc) main_camera2_pane_t4_ParamLimits

0x39ec,	// (0x000119fc) main_camera2_pane_t4

0x0006,

0xf534,	// (0x0001d544) main_camera2_pane_t_ParamLimits

0xf534,	// (0x0001d544) main_camera2_pane_t

0xbb33,	// (0x00019b43) cams_zoom_pane_cp4_ParamLimits

0xbb33,	// (0x00019b43) cams_zoom_pane_cp4

0xbb41,	// (0x00019b51) image2_cif_pane_ParamLimits

0xbb41,	// (0x00019b51) image2_cif_pane

0x9264,	// (0x00017274) image2_subqcif_pane_ParamLimits

0x9264,	// (0x00017274) image2_subqcif_pane

0x3a00,	// (0x00011a10) main_video2_pane_g1_ParamLimits

0x3a00,	// (0x00011a10) main_video2_pane_g1

0x3a00,	// (0x00011a10) main_video2_pane_g2_ParamLimits

0x3a00,	// (0x00011a10) main_video2_pane_g2

0x3a00,	// (0x00011a10) main_video2_pane_g3_ParamLimits

0x3a00,	// (0x00011a10) main_video2_pane_g3

0x3a00,	// (0x00011a10) main_video2_pane_g4_ParamLimits

0x3a00,	// (0x00011a10) main_video2_pane_g4

0x3a00,	// (0x00011a10) main_video2_pane_g5_ParamLimits

0x3a00,	// (0x00011a10) main_video2_pane_g5

0x3a00,	// (0x00011a10) main_video2_pane_g6_ParamLimits

0x3a00,	// (0x00011a10) main_video2_pane_g6

0x0005,

0xf543,	// (0x0001d553) main_video2_pane_g_ParamLimits

0xf543,	// (0x0001d553) main_video2_pane_g

0x3a0e,	// (0x00011a1e) main_video2_pane_t1_ParamLimits

0x3a0e,	// (0x00011a1e) main_video2_pane_t1

0x3a0e,	// (0x00011a1e) main_video2_pane_t2_ParamLimits

0x3a0e,	// (0x00011a1e) main_video2_pane_t2

0x3a0e,	// (0x00011a1e) main_video2_pane_t3_ParamLimits

0x3a0e,	// (0x00011a1e) main_video2_pane_t3

0x0002,

0xf550,	// (0x0001d560) main_video2_pane_t_ParamLimits

0xf550,	// (0x0001d560) main_video2_pane_t

0x3372,	// (0x00011382) call_muted_g2

0x0001,

0xf4f7,	// (0x0001d507) call_muted_g

0x9685,	// (0x00017695) main_mup2_pane

0xa7bd,	// (0x000187cd) main_mup2_pane_g1_ParamLimits

0xa7bd,	// (0x000187cd) main_mup2_pane_g1

0xa7bd,	// (0x000187cd) main_mup2_pane_g2_ParamLimits

0xa7bd,	// (0x000187cd) main_mup2_pane_g2

0x99a1,	// (0x000179b1) main_mup_pane_g13_cp1

0x91f5,	// (0x00017205) mup_volume_pane_cp1

0xa7bd,	// (0x000187cd) main_mup2_pane_g4_ParamLimits

0xa7bd,	// (0x000187cd) main_mup2_pane_g4

0xa7bd,	// (0x000187cd) main_mup2_pane_g5_ParamLimits

0xa7bd,	// (0x000187cd) main_mup2_pane_g5

0xa7bd,	// (0x000187cd) main_mup2_pane_g6_ParamLimits

0xa7bd,	// (0x000187cd) main_mup2_pane_g6

0xa7bd,	// (0x000187cd) main_mup2_pane_g7_ParamLimits

0xa7bd,	// (0x000187cd) main_mup2_pane_g7

0x0006,

0xf557,	// (0x0001d567) main_mup2_pane_g_ParamLimits

0xf557,	// (0x0001d567) main_mup2_pane_g

0xa7cb,	// (0x000187db) main_mup2_pane_t1_ParamLimits

0xa7cb,	// (0x000187db) main_mup2_pane_t1

0xa7cb,	// (0x000187db) main_mup2_pane_t2_ParamLimits

0xa7cb,	// (0x000187db) main_mup2_pane_t2

0xa7cb,	// (0x000187db) main_mup2_pane_t3_ParamLimits

0xa7cb,	// (0x000187db) main_mup2_pane_t3

0xa7cb,	// (0x000187db) main_mup2_pane_t4_ParamLimits

0xa7cb,	// (0x000187db) main_mup2_pane_t4

0xa7cb,	// (0x000187db) main_mup2_pane_t5_ParamLimits

0xa7cb,	// (0x000187db) main_mup2_pane_t5

0xa7cb,	// (0x000187db) main_mup2_pane_t6_ParamLimits

0xa7cb,	// (0x000187db) main_mup2_pane_t6

0x0005,

0xf566,	// (0x0001d576) main_mup2_pane_t_ParamLimits

0xf566,	// (0x0001d576) main_mup2_pane_t

0xa7df,	// (0x000187ef) mup2_visualizer_pane_ParamLimits

0xa7df,	// (0x000187ef) mup2_visualizer_pane

0xa7df,	// (0x000187ef) mup_progress_pane_cp_ParamLimits

0xa7df,	// (0x000187ef) mup_progress_pane_cp

0xbb4f,	// (0x00019b5f) mup_volume_pane_cp_ParamLimits

0xbb4f,	// (0x00019b5f) mup_volume_pane_cp

0x995b,	// (0x0001796b) mup2_visualizer_pane_g1_ParamLimits

0x995b,	// (0x0001796b) mup2_visualizer_pane_g1

0x9969,	// (0x00017979) mup2_visualizer_pane_g2_ParamLimits

0x9969,	// (0x00017979) mup2_visualizer_pane_g2

0x9969,	// (0x00017979) mup2_visualizer_pane_g3_ParamLimits

0x9969,	// (0x00017979) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0001d08c) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0001d08c) mup2_visualizer_pane_g

0x91f5,	// (0x00017205) aid_size_cell_fmradio

0x3524,	// (0x00011534) aid_height_parent_landcape

0x9db8,	// (0x00017dc8) wml_content_pane_cp

0x9dc0,	// (0x00017dd0) wml_tabs_pane

0x9dc9,	// (0x00017dd9) popup_wml_miniature_window

0x9dd1,	// (0x00017de1) scroll_pane_cp021

0x9de5,	// (0x00017df5) wml_content_pane_comp8

0x9685,	// (0x00017695) bg_popup_sub_pane_cp05

0xbb65,	// (0x00019b75) popup_wml_miniature_window_g1

0xbb6d,	// (0x00019b7d) wml_miniature_view_pane

0x3a22,	// (0x00011a32) aid_size_wml_view

0x3a2a,	// (0x00011a3a) wml_miniature_view_pane_g1

0x3a33,	// (0x00011a43) wml_miniature_view_pane_g2

0x3a3c,	// (0x00011a4c) wml_miniature_view_pane_g3

0x3a44,	// (0x00011a54) wml_miniature_view_pane_g4

0x3a4c,	// (0x00011a5c) wml_miniature_view_pane_g5

0x3a54,	// (0x00011a64) wml_miniature_view_pane_g6

0x3a5c,	// (0x00011a6c) wml_miniature_view_pane_g7

0x3a64,	// (0x00011a74) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x0001d583) wml_miniature_view_pane_g

0xbb75,	// (0x00019b85) background_graphic_ParamLimits

0xbb75,	// (0x00019b85) background_graphic

0xbb81,	// (0x00019b91) wml_tabs_2_pane

0xbb8a,	// (0x00019b9a) wml_tabs_3_pane_ParamLimits

0xbb8a,	// (0x00019b9a) wml_tabs_3_pane

0xbb9c,	// (0x00019bac) wml_tabs_4_pane_ParamLimits

0xbb9c,	// (0x00019bac) wml_tabs_4_pane

0xbbb2,	// (0x00019bc2) wml_tabs_5_pane_ParamLimits

0xbbb2,	// (0x00019bc2) wml_tabs_5_pane

0xbbcc,	// (0x00019bdc) wml_tabs_pane_g2_ParamLimits

0xbbcc,	// (0x00019bdc) wml_tabs_pane_g2

0xbbe1,	// (0x00019bf1) wml_tabs_pane_g3_ParamLimits

0xbbe1,	// (0x00019bf1) wml_tabs_pane_g3

0xbbf6,	// (0x00019c06) wml_tabs_2_active_pane_ParamLimits

0xbbf6,	// (0x00019c06) wml_tabs_2_active_pane

0xbbf6,	// (0x00019c06) wml_tabs_2_passive_pane_ParamLimits

0xbbf6,	// (0x00019c06) wml_tabs_2_passive_pane

0x3a6c,	// (0x00011a7c) wml_tabs_3_active_pane_cp_ParamLimits

0x3a6c,	// (0x00011a7c) wml_tabs_3_active_pane_cp

0x3a81,	// (0x00011a91) wml_tabs_3_passive_pane_ParamLimits

0x3a81,	// (0x00011a91) wml_tabs_3_passive_pane

0x3a94,	// (0x00011aa4) wml_tabs_3_passive_pane_cp_ParamLimits

0x3a94,	// (0x00011aa4) wml_tabs_3_passive_pane_cp

0x3aab,	// (0x00011abb) tabs_4_active_pane

0x3ab3,	// (0x00011ac3) tabs_4_passive_pane

0x3abd,	// (0x00011acd) tabs_4_passive_pane_cp

0x3ac5,	// (0x00011ad5) tabs_4_passive_pane_cp2

0x32e8,	// (0x000112f8) aid_height_text

0xa7df,	// (0x000187ef) mup_volume_cont_pane_ParamLimits

0xa7df,	// (0x000187ef) mup_volume_cont_pane

0x91f5,	// (0x00017205) aid_size_cell_pinb

0x91f5,	// (0x00017205) aid_size_list_pinb

0xa7df,	// (0x000187ef) mup2_volume_cont_pane_ParamLimits

0xa7df,	// (0x000187ef) mup2_volume_cont_pane

0xbc04,	// (0x00019c14) mup2_volume_cont_pane_g1_ParamLimits

0xbc04,	// (0x00019c14) mup2_volume_cont_pane_g1

0x09b6,	// (0x0000e9c6) aid_size_cell_touch_ParamLimits

0x09b6,	// (0x0000e9c6) aid_size_cell_touch

0x0be2,	// (0x0000ebf2) touch_pane_ParamLimits

0x0be2,	// (0x0000ebf2) touch_pane

0x91f5,	// (0x00017205) main_rss2_pane

0xbc23,	// (0x00019c33) listscroll_rss2_pane

0xbc2c,	// (0x00019c3c) rss2_navigation_pane

0xbc34,	// (0x00019c44) list_rss2_pane

0xa4b3,	// (0x000184c3) scroll_pane_cp22

0xbc3c,	// (0x00019c4c) rss2_navigation_pane_g1

0xbc45,	// (0x00019c55) rss2_navigation_pane_g2

0xbc4d,	// (0x00019c5d) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x0001d594) rss2_navigation_pane_g

0xbc55,	// (0x00019c65) rss2_navigation_pane_t1

0x3acf,	// (0x00011adf) rss2_list_single_pane_ParamLimits

0x3acf,	// (0x00011adf) rss2_list_single_pane

0xbc63,	// (0x00019c73) rss2_list_single_pane_t2

0xbc71,	// (0x00019c81) rss2_list_single_pane_t3_ParamLimits

0xbc71,	// (0x00019c81) rss2_list_single_pane_t3

0xbc8e,	// (0x00019c9e) rss2_list_single_pane_t4

0x2588,	// (0x00010598) smil_status_pane_g1

0x9264,	// (0x00017274) main_image2_pane_ParamLimits

0x9264,	// (0x00017274) main_image2_pane

0xbb11,	// (0x00019b21) main_camera2_pane_g9_ParamLimits

0xbb11,	// (0x00019b21) main_camera2_pane_g9

0x39ec,	// (0x000119fc) main_camera2_pane_t5_ParamLimits

0x39ec,	// (0x000119fc) main_camera2_pane_t5

0xbb1f,	// (0x00019b2f) main_camera2_pane_t6_ParamLimits

0xbb1f,	// (0x00019b2f) main_camera2_pane_t6

0x3ae4,	// (0x00011af4) main_image2_pane_g1_ParamLimits

0x3ae4,	// (0x00011af4) main_image2_pane_g1

0x2fbc,	// (0x00010fcc) smil2_video_pane_ParamLimits

0x2fbc,	// (0x00010fcc) smil2_video_pane

0x9213,	// (0x00017223) aid_zoom_text_primary_cp

0x925a,	// (0x0001726a) popup_preview_fixed_window

0x9d21,	// (0x00017d31) im_reading_pane_g1

0x39de,	// (0x000119ee) cams2_bc_adjust_pane_cp_ParamLimits

0x39de,	// (0x000119ee) cams2_bc_adjust_pane_cp

0xa7df,	// (0x000187ef) cams2_bc_adjust_pane_ParamLimits

0xa7df,	// (0x000187ef) cams2_bc_adjust_pane

0x99a1,	// (0x000179b1) cams2_bc_adjust_pane_g1

0x91f5,	// (0x00017205) cams2_slider_pane

0x99a1,	// (0x000179b1) cams2_slider_pane_g1

0x99a1,	// (0x000179b1) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x0001d59b) cams2_slider_pane_g

0x0caa,	// (0x0000ecba) calc_display_pane_ParamLimits

0x0ccf,	// (0x0000ecdf) calc_paper_pane_ParamLimits

0x0cf2,	// (0x0000ed02) grid_calc_pane_ParamLimits

0xa370,	// (0x00018380) popup_clock_digital_window_t1_ParamLimits

0xa9d7,	// (0x000189e7) main_image_pane_t1

0x0c8c,	// (0x0000ec9c) aid_size_cell_calc_ParamLimits

0x0c8c,	// (0x0000ec9c) aid_size_cell_calc

0x356a,	// (0x0001157a) popup_blid_sat_info2_window_ParamLimits

0x356a,	// (0x0001157a) popup_blid_sat_info2_window

0xbc9c,	// (0x00019cac) aid_size_cell_blid

0xbb41,	// (0x00019b51) bg_popup_window_pane_cp07

0xbcb9,	// (0x00019cc9) grid_popup_blid_pane

0xbcc3,	// (0x00019cd3) heading_pane_cp05_ParamLimits

0xbcc3,	// (0x00019cd3) heading_pane_cp05

0xbd8d,	// (0x00019d9d) cell_popup_blid_pane_ParamLimits

0xbd8d,	// (0x00019d9d) cell_popup_blid_pane

0xbdb1,	// (0x00019dc1) cell_popup_blid_pane_g1

0xbdb9,	// (0x00019dc9) cell_popup_blid_pane_t1

0xa7df,	// (0x000187ef) mup2_indicator_pane_ParamLimits

0xa7df,	// (0x000187ef) mup2_indicator_pane

0x91f5,	// (0x00017205) mup2_visualizer_osc_pane

0xbb4f,	// (0x00019b5f) mup2_visualizer_spec_pane_ParamLimits

0xbb4f,	// (0x00019b5f) mup2_visualizer_spec_pane

0x91f5,	// (0x00017205) mup2_spec_half_pane

0x91f5,	// (0x00017205) mup2_spec_half_pane_cp

0xbdc7,	// (0x00019dd7) mup2_spec_bar_pane_ParamLimits

0xbdc7,	// (0x00019dd7) mup2_spec_bar_pane

0x99a1,	// (0x000179b1) mup2_spec_bar_pane_g1

0xbde6,	// (0x00019df6) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x0001d5c1) mup2_spec_bar_pane_g

0x91f5,	// (0x00017205) mup2_osc_middle_pane

0x99a1,	// (0x000179b1) mup2_visualizer_osc_pane_g1

0x9292,	// (0x000172a2) popup_number_entry_window_t1_ParamLimits

0x92a5,	// (0x000172b5) popup_number_entry_window_t2_ParamLimits

0x92b7,	// (0x000172c7) popup_number_entry_window_t3_ParamLimits

0x0c34,	// (0x0000ec44) popup_number_entry_window_t5_ParamLimits

0x0c34,	// (0x0000ec44) popup_number_entry_window_t5

0xf01d,	// (0x0001d02d) popup_number_entry_window_t_ParamLimits

0x92c9,	// (0x000172d9) text_title_cp2_ParamLimits

0xa8cf,	// (0x000188df) aid_hotspot_pointer_text2_pane

0xa8f5,	// (0x00018905) main_viewer_pane_g9_ParamLimits

0xa8f5,	// (0x00018905) main_viewer_pane_g9

0x9f5a,	// (0x00017f6a) cale_month_pane_t1_ParamLimits

0x9fc5,	// (0x00017fd5) bg_cale_pane_ParamLimits

0x9fdd,	// (0x00017fed) list_cale_pane_ParamLimits

0x9fee,	// (0x00017ffe) listscroll_cale_day_pane_t1

0xa000,	// (0x00018010) scroll_pane_cp09_ParamLimits

0x2945,	// (0x00010955) main_mup_eq_pane_t1_ParamLimits

0x2945,	// (0x00010955) main_mup_eq_pane_t1

0x295f,	// (0x0001096f) main_mup_eq_pane_t2_ParamLimits

0x295f,	// (0x0001096f) main_mup_eq_pane_t2

0x2979,	// (0x00010989) main_mup_eq_pane_t3_ParamLimits

0x2979,	// (0x00010989) main_mup_eq_pane_t3

0x2995,	// (0x000109a5) main_mup_eq_pane_t4_ParamLimits

0x2995,	// (0x000109a5) main_mup_eq_pane_t4

0x29b1,	// (0x000109c1) main_mup_eq_pane_t5_ParamLimits

0x29b1,	// (0x000109c1) main_mup_eq_pane_t5

0x29cd,	// (0x000109dd) main_mup_eq_pane_t6_ParamLimits

0x29cd,	// (0x000109dd) main_mup_eq_pane_t6

0x29e1,	// (0x000109f1) main_mup_eq_pane_t7_ParamLimits

0x29e1,	// (0x000109f1) main_mup_eq_pane_t7

0x29f5,	// (0x00010a05) main_mup_eq_pane_t8_ParamLimits

0x29f5,	// (0x00010a05) main_mup_eq_pane_t8

0x2a09,	// (0x00010a19) main_mup_eq_pane_t9_ParamLimits

0x2a09,	// (0x00010a19) main_mup_eq_pane_t9

0x2a23,	// (0x00010a33) main_mup_eq_pane_t10_ParamLimits

0x2a23,	// (0x00010a33) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x0001d387) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x0001d387) main_mup_eq_pane_t

0x2ad2,	// (0x00010ae2) mup_equalizer_pane_cp5_ParamLimits

0x2ae6,	// (0x00010af6) mup_equalizer_pane_cp6_ParamLimits

0x2afa,	// (0x00010b0a) mup_equalizer_pane_cp7_ParamLimits

0x91f5,	// (0x00017205) main_gallery_pane

0xba7f,	// (0x00019a8f) smil2_volume_pane

0xba87,	// (0x00019a97) smil_status_volume_pane_g1_ParamLimits

0xba9a,	// (0x00019aaa) smil_status_volume_pane_g2_ParamLimits

0xbaad,	// (0x00019abd) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x0001d51a) smil_status_volume_pane_g_ParamLimits

0xbb41,	// (0x00019b51) bg_popup_window_pane_cp07_ParamLimits

0xbca4,	// (0x00019cb4) blid_firmament_pane

0x9264,	// (0x00017274) aid_size_cell_gallery_ParamLimits

0x9264,	// (0x00017274) aid_size_cell_gallery

0x9264,	// (0x00017274) grid_gallery_pane_ParamLimits

0x9264,	// (0x00017274) grid_gallery_pane

0xbb41,	// (0x00019b51) cell_gallery_pane_ParamLimits

0xbb41,	// (0x00019b51) cell_gallery_pane

0x9264,	// (0x00017274) bg_cell_gallery_focus_pane_ParamLimits

0x9264,	// (0x00017274) bg_cell_gallery_focus_pane

0x995b,	// (0x0001796b) cell_gallery_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_gallery_pane_g1

0x995b,	// (0x0001796b) cell_gallery_pane_g2_ParamLimits

0x995b,	// (0x0001796b) cell_gallery_pane_g2

0x995b,	// (0x0001796b) cell_gallery_pane_g3_ParamLimits

0x995b,	// (0x0001796b) cell_gallery_pane_g3

0x9969,	// (0x00017979) cell_gallery_pane_g4_ParamLimits

0x9969,	// (0x00017979) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x0001d5c6) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x0001d5c6) cell_gallery_pane_g

0xbdf0,	// (0x00019e00) bg_cell_gallery_focus_pane_g1

0xbdf8,	// (0x00019e08) bg_cell_gallery_focus_pane_g2

0xbe00,	// (0x00019e10) bg_cell_gallery_focus_pane_g3

0xbe08,	// (0x00019e18) bg_cell_gallery_focus_pane_g4

0xbe10,	// (0x00019e20) bg_cell_gallery_focus_pane_g5

0xbe18,	// (0x00019e28) bg_cell_gallery_focus_pane_g6

0xbe20,	// (0x00019e30) bg_cell_gallery_focus_pane_g7

0xbe28,	// (0x00019e38) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x0001d5cf) bg_cell_gallery_focus_pane_g

0xbe30,	// (0x00019e40) aid_firma_cardinal

0xbe44,	// (0x00019e54) blid_firmament_pane_t1

0xbe5b,	// (0x00019e6b) blid_firmament_pane_t2

0xbe72,	// (0x00019e82) blid_firmament_pane_t3

0xbe89,	// (0x00019e99) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x0001d5e0) blid_firmament_pane_t

0xbea0,	// (0x00019eb0) blid_sat_info_pane

0x99a1,	// (0x000179b1) blid_sat_info_pane_g1

0x99a1,	// (0x000179b1) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) blid_sat_info_pane_g

0xbeb0,	// (0x00019ec0) blid_sat_info_pane_t1

0xbebe,	// (0x00019ece) smil2_volume_content_pane

0xbec7,	// (0x00019ed7) smil2_volume_pane_g1

0x9ab4,	// (0x00017ac4) smil2_volume_content_pane_g1

0xbecf,	// (0x00019edf) smil2_volume_content_pane_g2

0xbed8,	// (0x00019ee8) smil2_volume_content_pane_g3

0xbee1,	// (0x00019ef1) smil2_volume_content_pane_g4

0xbeea,	// (0x00019efa) smil2_volume_content_pane_g5

0xbef3,	// (0x00019f03) smil2_volume_content_pane_g6

0xbefc,	// (0x00019f0c) smil2_volume_content_pane_g7

0xbf05,	// (0x00019f15) smil2_volume_content_pane_g8

0xbf0e,	// (0x00019f1e) smil2_volume_content_pane_g9

0xbf17,	// (0x00019f27) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x0001d5e9) smil2_volume_content_pane_g

0x11b9,	// (0x0000f1c9) cale_week_day_heading_pane_t1_ParamLimits

0x11e3,	// (0x0000f1f3) cale_week_day_heading_pane_t2_ParamLimits

0x1212,	// (0x0000f222) cale_week_day_heading_pane_t3_ParamLimits

0x1241,	// (0x0000f251) cale_week_day_heading_pane_t4_ParamLimits

0x1270,	// (0x0000f280) cale_week_day_heading_pane_t5_ParamLimits

0x12a7,	// (0x0000f2b7) cale_week_day_heading_pane_t6_ParamLimits

0x12de,	// (0x0000f2ee) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0001d134) cale_week_day_heading_pane_t_ParamLimits

0x9c0c,	// (0x00017c1c) bg_cale_side_pane_ParamLimits

0x1308,	// (0x0000f318) cale_week_time_pane_t1_ParamLimits

0x1322,	// (0x0000f332) cale_week_time_pane_t2_ParamLimits

0x133c,	// (0x0000f34c) cale_week_time_pane_t3_ParamLimits

0x1356,	// (0x0000f366) cale_week_time_pane_t4_ParamLimits

0x1370,	// (0x0000f380) cale_week_time_pane_t5_ParamLimits

0x138a,	// (0x0000f39a) cale_week_time_pane_t6_ParamLimits

0x13a4,	// (0x0000f3b4) cale_week_time_pane_t7_ParamLimits

0x13be,	// (0x0000f3ce) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0001d143) cale_week_time_pane_t_ParamLimits

0x13d8,	// (0x0000f3e8) cell_cale_week_pane_g2_ParamLimits

0x9c0c,	// (0x00017c1c) bg_cale_side_pane_cp01_ParamLimits

0x238f,	// (0x0001039f) cale_month_week_pane_t1_ParamLimits

0x23a8,	// (0x000103b8) cale_month_week_pane_t2_ParamLimits

0x23c1,	// (0x000103d1) cale_month_week_pane_t3_ParamLimits

0x23da,	// (0x000103ea) cale_month_week_pane_t4_ParamLimits

0x23f3,	// (0x00010403) cale_month_week_pane_t5_ParamLimits

0x240c,	// (0x0001041c) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0001d211) cale_month_week_pane_t_ParamLimits

0x9f6c,	// (0x00017f7c) cell_cale_month_pane_g1_ParamLimits

0x91f5,	// (0x00017205) main_cale_event_viewer_pane

0x91f5,	// (0x00017205) listscroll_cale_event_viewer_pane

0xbf20,	// (0x00019f30) list_cale_ev_pane

0xbf28,	// (0x00019f38) scroll_pane_cp023

0xbf34,	// (0x00019f44) field_cale_ev_pane_ParamLimits

0xbf34,	// (0x00019f44) field_cale_ev_pane

0xbf52,	// (0x00019f62) field_cale_ev_content_pane_ParamLimits

0xbf52,	// (0x00019f62) field_cale_ev_content_pane

0xbf5e,	// (0x00019f6e) field_cale_ev_pane_g1_ParamLimits

0xbf5e,	// (0x00019f6e) field_cale_ev_pane_g1

0xbf6a,	// (0x00019f7a) field_cale_ev_pane_g2_ParamLimits

0xbf6a,	// (0x00019f7a) field_cale_ev_pane_g2

0xbf82,	// (0x00019f92) field_cale_ev_pane_g3_ParamLimits

0xbf82,	// (0x00019f92) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x0001d5fe) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x0001d5fe) field_cale_ev_pane_g

0xbf9a,	// (0x00019faa) field_cale_ev_pane_t1_ParamLimits

0xbf9a,	// (0x00019faa) field_cale_ev_pane_t1

0x9b37,	// (0x00017b47) field_cale_ev_content_pane_t1_ParamLimits

0x9b37,	// (0x00017b47) field_cale_ev_content_pane_t1

0xa882,	// (0x00018892) bg_button_pane_cp01

0x0ee6,	// (0x0000eef6) listscroll_cale_week_pane_ParamLimits

0x9bb7,	// (0x00017bc7) popup_toolbar_window_cp01

0x9bdd,	// (0x00017bed) listscroll_cale_week_pane_t1_ParamLimits

0x0ee6,	// (0x0000eef6) listscroll_cale_day_pane_ParamLimits

0x9bb7,	// (0x00017bc7) popup_toolbar_window_cp02

0x9fee,	// (0x00017ffe) listscroll_cale_day_pane_t1_ParamLimits

0x0ee6,	// (0x0000eef6) main_cale_month_pane_ParamLimits

0xb9fd,	// (0x00019a0d) popup_toolbar_window_cp03_ParamLimits

0xb9fd,	// (0x00019a0d) popup_toolbar_window_cp03

0x2e84,	// (0x00010e94) main_image_pane_g2_ParamLimits

0x2e84,	// (0x00010e94) main_image_pane_g2

0x2e95,	// (0x00010ea5) main_image_pane_g3_ParamLimits

0x2e95,	// (0x00010ea5) main_image_pane_g3

0x0002,

0xf409,	// (0x0001d419) main_image_pane_g_ParamLimits

0xf409,	// (0x0001d419) main_image_pane_g

0xa9d7,	// (0x000189e7) main_image_pane_t1_ParamLimits

0x2ea6,	// (0x00010eb6) main_image_pane_t2_ParamLimits

0x2ea6,	// (0x00010eb6) main_image_pane_t2

0x2eb8,	// (0x00010ec8) main_image_pane_t3_ParamLimits

0x2eb8,	// (0x00010ec8) main_image_pane_t3

0x2ee0,	// (0x00010ef0) main_image_pane_t4_ParamLimits

0x2ee0,	// (0x00010ef0) main_image_pane_t4

0x0003,

0xf410,	// (0x0001d420) main_image_pane_t_ParamLimits

0xf410,	// (0x0001d420) main_image_pane_t

0x2f00,	// (0x00010f10) popup_image_details_window_cp01

0x2f0a,	// (0x00010f1a) popup_toobar_trans_pane_cp01_ParamLimits

0x2f0a,	// (0x00010f1a) popup_toobar_trans_pane_cp01

0x3649,	// (0x00011659) popup_image_details_window_ParamLimits

0x3649,	// (0x00011659) popup_image_details_window

0xb9d0,	// (0x000199e0) popup_image_focus_window

0xbb03,	// (0x00019b13) camera2_autofocus_pane_ParamLimits

0xbb03,	// (0x00019b13) camera2_autofocus_pane

0x91f5,	// (0x00017205) bg_popup_sub_pane_cp06

0xbfb1,	// (0x00019fc1) popup_image_focus_window_g1

0xbfb9,	// (0x00019fc9) popup_image_focus_window_g2

0xbfc1,	// (0x00019fd1) popup_image_focus_window_g3

0xbfc9,	// (0x00019fd9) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x0001d605) popup_image_focus_window_g

0xbfd1,	// (0x00019fe1) popup_image_focus_window_t1

0xbfdf,	// (0x00019fef) popup_image_focus_window_t2

0xbfef,	// (0x00019fff) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x0001d60e) popup_image_focus_window_t

0x995b,	// (0x0001796b) camera2_autofocus_pane_g1

0x9264,	// (0x00017274) bg_tb_trans_pane_cp01

0xbffd,	// (0x0001a00d) popup_image_details_window_g1

0xc010,	// (0x0001a020) popup_image_details_window_g2

0x0002,

0xf610,	// (0x0001d620) popup_image_details_window_g

0xc039,	// (0x0001a049) popup_image_details_window_t1

0xc04b,	// (0x0001a05b) popup_image_details_window_t2

0xc064,	// (0x0001a074) popup_image_details_window_t3

0xc078,	// (0x0001a088) popup_image_details_window_t4

0xc093,	// (0x0001a0a3) popup_image_details_window_t5

0x0004,

0xf617,	// (0x0001d627) popup_image_details_window_t

0x99eb,	// (0x000179fb) bg_calc_paper_pane_ParamLimits

0x91f5,	// (0x00017205) grid_highlight_pane_cp013

0x99ff,	// (0x00017a0f) list_calc_pane_ParamLimits

0x9a11,	// (0x00017a21) scroll_pane_cp024

0x9a19,	// (0x00017a29) bg_calc_display_pane_ParamLimits

0x0d34,	// (0x0000ed44) calc_display_pane_t1_ParamLimits

0x0d49,	// (0x0000ed59) calc_display_pane_t2_ParamLimits

0x9a25,	// (0x00017a35) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0001d0b4) calc_display_pane_t_ParamLimits

0x0e09,	// (0x0000ee19) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0001d0d1) cell_calc_pane_g

0x0e12,	// (0x0000ee22) cell_calc_pane_t1

0x9a92,	// (0x00017aa2) grid_highlight_pane_cp02_ParamLimits

0x9aa8,	// (0x00017ab8) toolbar_button_pane_cp01_ParamLimits

0x9aa8,	// (0x00017ab8) toolbar_button_pane_cp01

0xaa1c,	// (0x00018a2c) temp_image_control_pane_ParamLimits

0xaa1c,	// (0x00018a2c) temp_image_control_pane

0x9264,	// (0x00017274) main_mp3_pane

0xc0ad,	// (0x0001a0bd) temp_image_control_pane_g1_ParamLimits

0xc0ad,	// (0x0001a0bd) temp_image_control_pane_g1

0xc0bb,	// (0x0001a0cb) temp_image_control_pane_g2_ParamLimits

0xc0bb,	// (0x0001a0cb) temp_image_control_pane_g2

0xc0cd,	// (0x0001a0dd) temp_image_control_pane_g3_ParamLimits

0xc0cd,	// (0x0001a0dd) temp_image_control_pane_g3

0x3afa,	// (0x00011b0a) temp_image_control_pane_g4_ParamLimits

0x3afa,	// (0x00011b0a) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x0001d632) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x0001d632) temp_image_control_pane_g

0xc0ad,	// (0x0001a0bd) main_mp3_pane_g1

0x3b0d,	// (0x00011b1d) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x0001d63b) main_mp3_pane_g

0xc102,	// (0x0001a112) main_mp3_pane_t1

0x9969,	// (0x00017979) main_camera_pane_g8_ParamLimits

0x9969,	// (0x00017979) main_camera_pane_g8

0x15a2,	// (0x0000f5b2) main_video_pane_g7_ParamLimits

0x15a2,	// (0x0000f5b2) main_video_pane_g7

0x99bf,	// (0x000179cf) main_camera2_pane_t7_ParamLimits

0x99bf,	// (0x000179cf) main_camera2_pane_t7

0x9d78,	// (0x00017d88) scroll_pane_cp025_ParamLimits

0x9d78,	// (0x00017d88) scroll_pane_cp025

0x9d8c,	// (0x00017d9c) scroll_pane_cp026_ParamLimits

0x9d8c,	// (0x00017d9c) scroll_pane_cp026

0x9d9b,	// (0x00017dab) wml_content_pane_ParamLimits

0x91f5,	// (0x00017205) main_touch_calib_pane

0x3be1,	// (0x00011bf1) main_touch_calib_pane_g1

0x3bf3,	// (0x00011c03) main_touch_calib_pane_g2

0x3c05,	// (0x00011c15) main_touch_calib_pane_g3

0x3c17,	// (0x00011c27) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x0001d659) main_touch_calib_pane_g

0x3c29,	// (0x00011c39) main_touch_calib_pane_t1

0x3c43,	// (0x00011c53) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x0001d662) main_touch_calib_pane_t

0xa58f,	// (0x0001859f) mup_progress_pane_cp02

0xa5c4,	// (0x000185d4) navi_pane_g1

0xa67f,	// (0x0001868f) navi_pane_mp_t3

0x9264,	// (0x00017274) main_mp3_pane_ParamLimits

0x37ce,	// (0x000117de) navi_pane_ParamLimits

0xc0ad,	// (0x0001a0bd) main_mp3_pane_g1_ParamLimits

0x3b0d,	// (0x00011b1d) main_mp3_pane_g2_ParamLimits

0x3b1b,	// (0x00011b2b) main_mp3_pane_g3_ParamLimits

0x3b1b,	// (0x00011b2b) main_mp3_pane_g3

0x3b29,	// (0x00011b39) main_mp3_pane_g4_ParamLimits

0x3b29,	// (0x00011b39) main_mp3_pane_g4

0x995b,	// (0x0001796b) main_mp3_pane_g5_ParamLimits

0x995b,	// (0x0001796b) main_mp3_pane_g5

0xc0dd,	// (0x0001a0ed) main_mp3_pane_g6_ParamLimits

0xc0dd,	// (0x0001a0ed) main_mp3_pane_g6

0xc0ea,	// (0x0001a0fa) main_mp3_pane_g7_ParamLimits

0xc0ea,	// (0x0001a0fa) main_mp3_pane_g7

0xc0f6,	// (0x0001a106) main_mp3_pane_g8_ParamLimits

0xc0f6,	// (0x0001a106) main_mp3_pane_g8

0xf62b,	// (0x0001d63b) main_mp3_pane_g_ParamLimits

0x3b35,	// (0x00011b45) main_mp3_pane_t2

0x3b43,	// (0x00011b53) main_mp3_pane_t3

0xc110,	// (0x0001a120) main_mp3_pane_t4

0xc11e,	// (0x0001a12e) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x0001d64c) main_mp3_pane_t

0xc12c,	// (0x0001a13c) mup_progress_pane_cp01

0x9213,	// (0x00017223) aid_zoom_text_secondary2

0xbf20,	// (0x00019f30) list_cale_ev2_pane

0xbf28,	// (0x00019f38) scroll_pane_cp023_ParamLimits

0x3c99,	// (0x00011ca9) field_cale_ev2_pane_ParamLimits

0x3c99,	// (0x00011ca9) field_cale_ev2_pane

0x3cb9,	// (0x00011cc9) field_cale_ev2_pane_g1_ParamLimits

0x3cb9,	// (0x00011cc9) field_cale_ev2_pane_g1

0x3cc5,	// (0x00011cd5) field_cale_ev2_pane_g2_ParamLimits

0x3cc5,	// (0x00011cd5) field_cale_ev2_pane_g2

0x3cdd,	// (0x00011ced) field_cale_ev2_pane_g3_ParamLimits

0x3cdd,	// (0x00011ced) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x0001d66d) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x0001d66d) field_cale_ev2_pane_g

0x3cf5,	// (0x00011d05) field_cale_ev2_pane_t1_ParamLimits

0x3cf5,	// (0x00011d05) field_cale_ev2_pane_t1

0x3d0c,	// (0x00011d1c) field_cale_ev2_pane_t2_ParamLimits

0x3d0c,	// (0x00011d1c) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x0001d676) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x0001d676) field_cale_ev2_pane_t

0x2d5a,	// (0x00010d6a) main_postcard_pane_g5_ParamLimits

0x2d5a,	// (0x00010d6a) main_postcard_pane_g5

0x2d70,	// (0x00010d80) main_postcard_pane_g6_ParamLimits

0x2d70,	// (0x00010d80) main_postcard_pane_g6

0x9264,	// (0x00017274) camera2_autofocus_pane_cp_ParamLimits

0x9264,	// (0x00017274) camera2_autofocus_pane_cp

0x9264,	// (0x00017274) main_mup3_pane

0x3d65,	// (0x00011d75) main_mup3_pane_g1_ParamLimits

0x3d65,	// (0x00011d75) main_mup3_pane_g1

0x3db7,	// (0x00011dc7) main_mup3_pane_g2_ParamLimits

0x3db7,	// (0x00011dc7) main_mup3_pane_g2

0x3e1f,	// (0x00011e2f) main_mup3_pane_g3_ParamLimits

0x3e1f,	// (0x00011e2f) main_mup3_pane_g3

0x3e83,	// (0x00011e93) main_mup3_pane_g4_ParamLimits

0x3e83,	// (0x00011e93) main_mup3_pane_g4

0x3ee7,	// (0x00011ef7) main_mup3_pane_g5_ParamLimits

0x3ee7,	// (0x00011ef7) main_mup3_pane_g5

0xe6b8,	// (0x0001c6c8) main_mup3_pane_g6_ParamLimits

0xe6b8,	// (0x0001c6c8) main_mup3_pane_g6

0x9969,	// (0x00017979) main_mup3_pane_g7_ParamLimits

0x9969,	// (0x00017979) main_mup3_pane_g7

0x0007,

0xf676,	// (0x0001d686) main_mup3_pane_g_ParamLimits

0xf676,	// (0x0001d686) main_mup3_pane_g

0x3fb4,	// (0x00011fc4) main_mup3_pane_t1_ParamLimits

0x3fb4,	// (0x00011fc4) main_mup3_pane_t1

0x40a2,	// (0x000120b2) main_mup3_pane_t2_ParamLimits

0x40a2,	// (0x000120b2) main_mup3_pane_t2

0x4190,	// (0x000121a0) main_mup3_pane_t4_ParamLimits

0x4190,	// (0x000121a0) main_mup3_pane_t4

0x41a2,	// (0x000121b2) main_mup3_pane_t5_ParamLimits

0x41a2,	// (0x000121b2) main_mup3_pane_t5

0x4274,	// (0x00012284) main_mup3_pane_t6_ParamLimits

0x4274,	// (0x00012284) main_mup3_pane_t6

0x0005,

0xf687,	// (0x0001d697) main_mup3_pane_t_ParamLimits

0xf687,	// (0x0001d697) main_mup3_pane_t

0x431c,	// (0x0001232c) mup3_progress_pane_ParamLimits

0x431c,	// (0x0001232c) mup3_progress_pane

0x4384,	// (0x00012394) popup_mup3_control_window_ParamLimits

0x4384,	// (0x00012394) popup_mup3_control_window

0xc140,	// (0x0001a150) popup_mup3_text_window

0x439c,	// (0x000123ac) mup3_progress_pane_t1

0x43bb,	// (0x000123cb) mup3_progress_pane_t2

0xc148,	// (0x0001a158) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x0001d6a4) mup3_progress_pane_t

0xc165,	// (0x0001a175) mup_progress_pane_cp03

0xc175,	// (0x0001a185) bg_tb_trans_pane_cp04

0xc175,	// (0x0001a185) mup3_volume_pane

0xc17d,	// (0x0001a18d) popup_mup3_control_window_g1

0xc17d,	// (0x0001a18d) mup3_volume_pane_g1

0xc17d,	// (0x0001a18d) mup3_volume_pane_g2

0xc17d,	// (0x0001a18d) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x0001d6ab) mup3_volume_pane_g

0x91f5,	// (0x00017205) bg_tb_trans_pane_cp03

0xc185,	// (0x0001a195) popup_mup3_text_window_g1

0xc18d,	// (0x0001a19d) popup_mup3_text_window_t1

0x9a73,	// (0x00017a83) list_calc_item_pane_g1_ParamLimits

0xbc1a,	// (0x00019c2a) mup_volume_pane_cp_g1

0x3c5d,	// (0x00011c6d) main_touch_calib_pane_t3

0x3c71,	// (0x00011c81) main_touch_calib_pane_t4

0x3c85,	// (0x00011c95) main_touch_calib_pane_t5

0x91ff,	// (0x0001720f) aid_cell_size_toolbar2

0x9207,	// (0x00017217) aid_popup3_width_pane

0x9213,	// (0x00017223) aid_zoom_text_msg_primary

0x147d,	// (0x0000f48d) vorec_t7

0x9a37,	// (0x00017a47) bg_calc_paper_pane_g1_ParamLimits

0x9a43,	// (0x00017a53) bg_calc_paper_pane_g2_ParamLimits

0x9a4f,	// (0x00017a5f) bg_calc_paper_pane_g3_ParamLimits

0x9a5b,	// (0x00017a6b) bg_calc_paper_pane_g4_ParamLimits

0x9a67,	// (0x00017a77) bg_calc_paper_pane_g5_ParamLimits

0x0d93,	// (0x0000eda3) bg_calc_paper_pane_g6_ParamLimits

0x0da2,	// (0x0000edb2) bg_calc_paper_pane_g7_ParamLimits

0x0db1,	// (0x0000edc1) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0001d0bb) bg_calc_paper_pane_g_ParamLimits

0x0dc4,	// (0x0000edd4) calc_bg_paper_pane_g9_ParamLimits

0x9264,	// (0x00017274) image_qvga_pane_ParamLimits

0x9264,	// (0x00017274) image_qvga_pane

0x98e0,	// (0x000178f0) bg_popup_sub_pane_cp04_ParamLimits

0xa953,	// (0x00018963) popup_mup_playback_window_g1_ParamLimits

0xa95f,	// (0x0001896f) popup_mup_playback_window_t1_ParamLimits

0xa974,	// (0x00018984) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x0001d414) popup_mup_playback_window_t_ParamLimits

0x9969,	// (0x00017979) main_mup2_pane_g3_ParamLimits

0x9969,	// (0x00017979) main_mup2_pane_g3

0x175d,	// (0x0000f76d) popup_toolbar_window_cp04

0xace5,	// (0x00018cf5) popup_call2_audio_second_window_g3_ParamLimits

0xace5,	// (0x00018cf5) popup_call2_audio_second_window_g3

0xb0fd,	// (0x0001910d) popup_call2_audio_first_window_g4_ParamLimits

0xb0fd,	// (0x0001910d) popup_call2_audio_first_window_g4

0xb724,	// (0x00019734) popup_call2_audio_in_window_g4_ParamLimits

0xb724,	// (0x00019734) popup_call2_audio_in_window_g4

0x2e66,	// (0x00010e76) aid_area_sk_bg_cut_ParamLimits

0x2e66,	// (0x00010e76) aid_area_sk_bg_cut

0xa989,	// (0x00018999) aid_area_sk_bg_cut_2_ParamLimits

0xa989,	// (0x00018999) aid_area_sk_bg_cut_2

0x91f5,	// (0x00017205) aid_placing_details_win

0x91f5,	// (0x00017205) aid_placing_details_win_2

0x995b,	// (0x0001796b) camera2_autofocus_pane_g1_ParamLimits

0x0b7b,	// (0x0000eb8b) popup_fixed_preview_cale_window_ParamLimits

0x0b7b,	// (0x0000eb8b) popup_fixed_preview_cale_window

0xa706,	// (0x00018716) navi_slider_pane_g3

0xa70f,	// (0x0001871f) navi_slider_pane_g4

0xa718,	// (0x00018728) navi_slider_pane_g5

0xa706,	// (0x00018716) navi_slider_pane_g6

0xa721,	// (0x00018731) navi_slider_pane_g7

0xa84f,	// (0x0001885f) mup_scale_pane_g3

0xa858,	// (0x00018868) mup_scale_pane_g4

0xa861,	// (0x00018871) mup_scale_pane_g5

0x2b0e,	// (0x00010b1e) mup_scale_pane_g6

0x2b17,	// (0x00010b27) mup_scale_pane_g7

0x99a1,	// (0x000179b1) cams2_slider_pane_g3

0x99a1,	// (0x000179b1) cams2_slider_pane_g4

0x99a1,	// (0x000179b1) cams2_slider_pane_g5

0x99a1,	// (0x000179b1) cams2_slider_pane_g6

0x99a1,	// (0x000179b1) cams2_slider_pane_g7

0x99a1,	// (0x000179b1) camera2_autofocus_pane_cp_g1

0xb9b2,	// (0x000199c2) bg_popup_preview_window_pane_cp02_ParamLimits

0xb9b2,	// (0x000199c2) bg_popup_preview_window_pane_cp02

0xc19b,	// (0x0001a1ab) list_fp_cale_pane_ParamLimits

0xc19b,	// (0x0001a1ab) list_fp_cale_pane

0xc1a7,	// (0x0001a1b7) popup_fixed_preview_cale_window_t1_ParamLimits

0xc1a7,	// (0x0001a1b7) popup_fixed_preview_cale_window_t1

0x43da,	// (0x000123ea) popup_fixed_preview_cale_window_t2_ParamLimits

0x43da,	// (0x000123ea) popup_fixed_preview_cale_window_t2

0x43ef,	// (0x000123ff) popup_fixed_preview_cale_window_t3_ParamLimits

0x43ef,	// (0x000123ff) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x0001d6b2) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x0001d6b2) popup_fixed_preview_cale_window_t

0x4404,	// (0x00012414) list_single_fp_cale_pane_ParamLimits

0x4404,	// (0x00012414) list_single_fp_cale_pane

0xc1c5,	// (0x0001a1d5) list_single_fp_cale_pane_g1_ParamLimits

0xc1c5,	// (0x0001a1d5) list_single_fp_cale_pane_g1

0xc1d1,	// (0x0001a1e1) list_single_fp_cale_pane_g2_ParamLimits

0xc1d1,	// (0x0001a1e1) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x0001d6b9) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x0001d6b9) list_single_fp_cale_pane_g

0xc1ea,	// (0x0001a1fa) list_single_fp_cale_pane_t1_ParamLimits

0xc1ea,	// (0x0001a1fa) list_single_fp_cale_pane_t1

0xc1fc,	// (0x0001a20c) list_single_fp_cale_pane_t2_ParamLimits

0xc1fc,	// (0x0001a20c) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x0001d6c0) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x0001d6c0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x91f5,	// (0x00017205) main_dialer_pane

0x91f5,	// (0x00017205) aid_cell_size_keypad

0x91f5,	// (0x00017205) dialer_ne_pane

0x91f5,	// (0x00017205) grid_dialer_command_1_pane

0x91f5,	// (0x00017205) grid_dialer_command_2_pane

0x91f5,	// (0x00017205) grid_dialer_keypad_pane

0x4419,	// (0x00012429) bg_popup_call_pane_cp06_ParamLimits

0x4419,	// (0x00012429) bg_popup_call_pane_cp06

0x4419,	// (0x00012429) dialer_ne_clear_pane_ParamLimits

0x4419,	// (0x00012429) dialer_ne_clear_pane

0x99a1,	// (0x000179b1) dialer_ne_pane_g1

0x99bf,	// (0x000179cf) dialer_ne_pane_t1_ParamLimits

0x99bf,	// (0x000179cf) dialer_ne_pane_t1

0x4427,	// (0x00012437) dialer_ne_pane_t2_ParamLimits

0x4427,	// (0x00012437) dialer_ne_pane_t2

0x444f,	// (0x0001245f) dialer_ne_pane_t3_ParamLimits

0x444f,	// (0x0001245f) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x0001d6c5) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x0001d6c5) dialer_ne_pane_t

0x444f,	// (0x0001245f) dialer_ne_pane_t3_copy1_ParamLimits

0x444f,	// (0x0001245f) dialer_ne_pane_t3_copy1

0xc22f,	// (0x0001a23f) cell_dialer_keypad_pane_ParamLimits

0xc22f,	// (0x0001a23f) cell_dialer_keypad_pane

0x9264,	// (0x00017274) cell_dialer_command_1_pane_ParamLimits

0x9264,	// (0x00017274) cell_dialer_command_1_pane

0xc246,	// (0x0001a256) cell_dialer_command_2_pane_ParamLimits

0xc246,	// (0x0001a256) cell_dialer_command_2_pane

0x9264,	// (0x00017274) bg_button_pane_cp02_ParamLimits

0x9264,	// (0x00017274) bg_button_pane_cp02

0x995b,	// (0x0001796b) cell_dialer_keypad_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_dialer_keypad_pane_g1

0x9264,	// (0x00017274) bg_button_pane_cp03_ParamLimits

0x9264,	// (0x00017274) bg_button_pane_cp03

0x995b,	// (0x0001796b) cell_dialer_command_1_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_dialer_command_1_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp04

0x99a1,	// (0x000179b1) cell_dialer_command_2_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp06

0x99a1,	// (0x000179b1) dialer_ne_clear_pane_g1

0xa5d0,	// (0x000185e0) navi_pane_g2

0xa5fe,	// (0x0001860e) navi_pane_g3

0x0002,

0xf30c,	// (0x0001d31c) navi_pane_g

0xa68d,	// (0x0001869d) navi_pane_mv_g2

0xa6b4,	// (0x000186c4) navi_pane_mv_g5

0x28f1,	// (0x00010901) navi_pane_mv_t1

0x9a19,	// (0x00017a29) main_clock2_pane

0x9264,	// (0x00017274) main_clock2_list_pane_ParamLimits

0x9264,	// (0x00017274) main_clock2_list_pane

0x44e5,	// (0x000124f5) main_clock2_pane_t1_ParamLimits

0x44e5,	// (0x000124f5) main_clock2_pane_t1

0x4520,	// (0x00012530) main_clock2_pane_t2_ParamLimits

0x4520,	// (0x00012530) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x0001d6d1) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x0001d6d1) main_clock2_pane_t

0x45c0,	// (0x000125d0) popup_clock_analogue_window_cp03_ParamLimits

0x45c0,	// (0x000125d0) popup_clock_analogue_window_cp03

0x45e5,	// (0x000125f5) popup_clock_digital_window_cp02_ParamLimits

0x45e5,	// (0x000125f5) popup_clock_digital_window_cp02

0x465e,	// (0x0001266e) main_clock2_list_single_pane_ParamLimits

0x465e,	// (0x0001266e) main_clock2_list_single_pane

0x9c5e,	// (0x00017c6e) list_highlight_pane_cp05

0xc28b,	// (0x0001a29b) main_clock2_list_single_pane_t1

0x175d,	// (0x0000f76d) popup_toolbar_window_cp04_ParamLimits

0x9969,	// (0x00017979) camera2_autofocus_pane_g2_ParamLimits

0x9969,	// (0x00017979) camera2_autofocus_pane_g2

0x9969,	// (0x00017979) camera2_autofocus_pane_g3_ParamLimits

0x9969,	// (0x00017979) camera2_autofocus_pane_g3

0x9969,	// (0x00017979) camera2_autofocus_pane_g4_ParamLimits

0x9969,	// (0x00017979) camera2_autofocus_pane_g4

0x9969,	// (0x00017979) camera2_autofocus_pane_g5_ParamLimits

0x9969,	// (0x00017979) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x0001d615) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x0001d615) camera2_autofocus_pane_g

0x3d21,	// (0x00011d31) camera2_autofocus_pane_cp_g2

0x3d29,	// (0x00011d39) camera2_autofocus_pane_cp_g3

0x3d31,	// (0x00011d41) camera2_autofocus_pane_cp_g4

0x3d39,	// (0x00011d49) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x0001d67b) camera2_autofocus_pane_cp_g

0x91f5,	// (0x00017205) popup_dialer_spcha_window

0x91f5,	// (0x00017205) bg_popup_sub_pane_cp07

0x91f5,	// (0x00017205) list_spcha_pane

0xc299,	// (0x0001a2a9) list_single_spcha_pane_ParamLimits

0xc299,	// (0x0001a2a9) list_single_spcha_pane

0x91f5,	// (0x00017205) list_highlight_pane_cp06

0xa193,	// (0x000181a3) list_single_spcha_pane_t1

0xb4ce,	// (0x000194de) popup_call2_audio_out_window_g4_ParamLimits

0xb4ce,	// (0x000194de) popup_call2_audio_out_window_g4

0x91f5,	// (0x00017205) main_imed2_pane

0xb9d8,	// (0x000199e8) popup_imed_adjust2_window

0x3661,	// (0x00011671) popup_imed_trans_window_ParamLimits

0x3661,	// (0x00011671) popup_imed_trans_window

0xbcef,	// (0x00019cff) popup_blid_sat_info2_window_t1

0xbcfd,	// (0x00019d0d) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x0001d5aa) popup_blid_sat_info2_window_t

0x470f,	// (0x0001271f) aid_size_cell_colour_35

0x472f,	// (0x0001273f) aid_size_cell_colour_112

0x474f,	// (0x0001275f) aid_size_cell_effect

0xa7df,	// (0x000187ef) bg_tb_trans_pane_cp02

0x476f,	// (0x0001277f) heading_imed_pane

0x477b,	// (0x0001278b) listscroll_imed_pane

0xc2ab,	// (0x0001a2bb) heading_imed_pane_g1

0xc2b3,	// (0x0001a2c3) heading_imed_pane_t1

0xc2c1,	// (0x0001a2d1) grid_imed_colour_35_pane_ParamLimits

0xc2c1,	// (0x0001a2d1) grid_imed_colour_35_pane

0x4787,	// (0x00012797) grid_imed_effect_pane

0xc2d8,	// (0x0001a2e8) list_imed_aspect_pane

0x479d,	// (0x000127ad) scroll_pane_cp027_ParamLimits

0x479d,	// (0x000127ad) scroll_pane_cp027

0x47ae,	// (0x000127be) cell_imed_effect_pane_ParamLimits

0x47ae,	// (0x000127be) cell_imed_effect_pane

0xc2e0,	// (0x0001a2f0) cell_imed_colour_pane_ParamLimits

0xc2e0,	// (0x0001a2f0) cell_imed_colour_pane

0xc322,	// (0x0001a332) cell_imed_colour_pane_g1_ParamLimits

0xc322,	// (0x0001a332) cell_imed_colour_pane_g1

0xc333,	// (0x0001a343) hgihlgiht_grid_pane_cp016_ParamLimits

0xc333,	// (0x0001a343) hgihlgiht_grid_pane_cp016

0x47d5,	// (0x000127e5) cell_imed_effect_pane_g1

0x47dd,	// (0x000127ed) grid_highlight_pane_cp017

0xc344,	// (0x0001a354) list_imed_single_pane_ParamLimits

0xc344,	// (0x0001a354) list_imed_single_pane

0x91f5,	// (0x00017205) list_highlight_pane_cp07

0xc359,	// (0x0001a369) list_imed_aspect_pane_comp1_t1

0xa7df,	// (0x000187ef) bg_tb_trans_pane_cp05

0xc37b,	// (0x0001a38b) popup_imed_adjust2_window_g1

0xc3a2,	// (0x0001a3b2) popup_imed_adjust2_window_t1

0xc3ba,	// (0x0001a3ca) slider_imed_adjust_pane

0xc3ce,	// (0x0001a3de) slider_imed_adjust_pane_g1

0xc3de,	// (0x0001a3ee) slider_imed_adjust_pane_g2

0xc3ee,	// (0x0001a3fe) slider_imed_adjust_pane_g3

0xc3ff,	// (0x0001a40f) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x0001d6ee) slider_imed_adjust_pane_g

0x47e6,	// (0x000127f6) aid_size_cell_clipart2

0x47f2,	// (0x00012802) grid_imed_clipart_pane

0xa872,	// (0x00018882) scroll_pane_cp031

0x47fc,	// (0x0001280c) cell_imed_clipart_pane_ParamLimits

0x47fc,	// (0x0001280c) cell_imed_clipart_pane

0x481e,	// (0x0001282e) cell_imed_clipart_pane_g1

0x91f5,	// (0x00017205) grid_highlight_pane_cp014

0x44c1,	// (0x000124d1) main_clock2_pane_g1_ParamLimits

0x44c1,	// (0x000124d1) main_clock2_pane_g1

0x4605,	// (0x00012615) aid_call2_pane_cp10

0x4617,	// (0x00012627) aid_call_pane_cp10

0xa531,	// (0x00018541) popup_clock_analogue_window_cp10_g1

0xa531,	// (0x00018541) popup_clock_analogue_window_cp10_g2

0x4629,	// (0x00012639) popup_clock_analogue_window_cp10_g3

0x4629,	// (0x00012639) popup_clock_analogue_window_cp10_g4

0xa531,	// (0x00018541) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x0001d6dc) popup_clock_analogue_window_cp10_g

0x463f,	// (0x0001264f) popup_clock_analogue_window_cp10_t1

0x4670,	// (0x00012680) clock_digital_number_pane_cp10_ParamLimits

0x4670,	// (0x00012680) clock_digital_number_pane_cp10

0x4688,	// (0x00012698) clock_digital_number_pane_cp11_ParamLimits

0x4688,	// (0x00012698) clock_digital_number_pane_cp11

0x46a0,	// (0x000126b0) clock_digital_number_pane_cp12_ParamLimits

0x46a0,	// (0x000126b0) clock_digital_number_pane_cp12

0x46ba,	// (0x000126ca) clock_digital_number_pane_cp13_ParamLimits

0x46ba,	// (0x000126ca) clock_digital_number_pane_cp13

0x46d4,	// (0x000126e4) clock_digital_separator_pane_cp10_ParamLimits

0x46d4,	// (0x000126e4) clock_digital_separator_pane_cp10

0x46ee,	// (0x000126fe) popup_clock_digital_window_cp02_t1_ParamLimits

0x46ee,	// (0x000126fe) popup_clock_digital_window_cp02_t1

0x98d8,	// (0x000178e8) clock_digital_number_pane_cp10_g1

0x98d8,	// (0x000178e8) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x0001d6f7) clock_digital_number_pane_cp10_g

0x98d8,	// (0x000178e8) clock_digital_separator_pane_cp10_g1

0x98d8,	// (0x000178e8) clock_digital_separator_pane_g2_cp10

0xa6bc,	// (0x000186cc) navi_pane_vded_g4

0xa6c5,	// (0x000186d5) navi_pane_vded_g5

0xa6ce,	// (0x000186de) navi_pane_vded_t1

0x91f5,	// (0x00017205) main_vded_pane

0x4827,	// (0x00012837) main_vded_pane_g1

0x4831,	// (0x00012841) main_vded_pane_g2

0x483b,	// (0x0001284b) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x0001d6fc) main_vded_pane_g

0x4845,	// (0x00012855) main_vded_pane_t1

0x4853,	// (0x00012863) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x0001d703) main_vded_pane_t

0x4861,	// (0x00012871) vded_slider_pane

0x4869,	// (0x00012879) vded_video_pane

0xc410,	// (0x0001a420) vded_video_pane_g1

0x4871,	// (0x00012881) vded_video_pane_g2

0x99a1,	// (0x000179b1) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x0001d708) vded_video_pane_g

0xc41a,	// (0x0001a42a) vded_slider_pane_g1

0xbc1a,	// (0x00019c2a) vded_slider_pane_g2

0xc423,	// (0x0001a433) vded_slider_pane_g3

0xc42c,	// (0x0001a43c) vded_slider_pane_g4

0xc435,	// (0x0001a445) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x0001d70f) vded_slider_pane_g

0xe6c4,	// (0x0001c6d4) mup3_rocker_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) mup3_rocker_pane

0xc17d,	// (0x0001a18d) mup3_control_keys_pane_g1

0xc43e,	// (0x0001a44e) mup3_control_keys_pane_g2

0xc17d,	// (0x0001a18d) mup3_control_keys_pane_g3

0xc446,	// (0x0001a456) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x0001d71a) mup3_control_keys_pane_g

0x0bb2,	// (0x0000ebc2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bb2,	// (0x0000ebc2) popup_toolbar2_fixed_window_cp01

0xe6c4,	// (0x0001c6d4) popup_toolbar2_fixed_window_cp02_ParamLimits

0xe6c4,	// (0x0001c6d4) popup_toolbar2_fixed_window_cp02

0xae57,	// (0x00018e67) popup_call2_audio_second_window_t4_ParamLimits

0xae57,	// (0x00018e67) popup_call2_audio_second_window_t4

0xb393,	// (0x000193a3) popup_call2_audio_first_window_t6_ParamLimits

0xb393,	// (0x000193a3) popup_call2_audio_first_window_t6

0xb5d1,	// (0x000195e1) popup_call2_audio_out_window_t6_ParamLimits

0xb5d1,	// (0x000195e1) popup_call2_audio_out_window_t6

0x91f5,	// (0x00017205) main_vitu_pane

0x9264,	// (0x00017274) aid_size_cell_itu_ParamLimits

0x9264,	// (0x00017274) aid_size_cell_itu

0x9264,	// (0x00017274) bg_popup_window_pane_cp08_ParamLimits

0x9264,	// (0x00017274) bg_popup_window_pane_cp08

0x9264,	// (0x00017274) field_vitu_entry_pane_ParamLimits

0x9264,	// (0x00017274) field_vitu_entry_pane

0x9264,	// (0x00017274) grid_vitu_function_pane_ParamLimits

0x9264,	// (0x00017274) grid_vitu_function_pane

0x9264,	// (0x00017274) grid_vitu_itu_pane_ParamLimits

0x9264,	// (0x00017274) grid_vitu_itu_pane

0x9264,	// (0x00017274) cell_vitu_itu_pane_ParamLimits

0x9264,	// (0x00017274) cell_vitu_itu_pane

0x9264,	// (0x00017274) cell_vitu_function_pane_ParamLimits

0x9264,	// (0x00017274) cell_vitu_function_pane

0x9264,	// (0x00017274) bg_popup_sub_pane_cp08_ParamLimits

0x9264,	// (0x00017274) bg_popup_sub_pane_cp08

0x99ab,	// (0x000179bb) field_vitu_entry_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) field_vitu_entry_pane_t1

0xc44e,	// (0x0001a45e) field_vitu_entry_pane_t2_ParamLimits

0xc44e,	// (0x0001a45e) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x0001d723) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x0001d723) field_vitu_entry_pane_t

0xbb41,	// (0x00019b51) bg_button_pane_cp05_ParamLimits

0xbb41,	// (0x00019b51) bg_button_pane_cp05

0xc46b,	// (0x0001a47b) cell_vitu_itu_pane_g1

0xa7cb,	// (0x000187db) cell_vitu_itu_pane_t1_ParamLimits

0xa7cb,	// (0x000187db) cell_vitu_itu_pane_t1

0xa7cb,	// (0x000187db) cell_vitu_itu_pane_t2_ParamLimits

0xa7cb,	// (0x000187db) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x0001d728) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x0001d728) cell_vitu_itu_pane_t

0x91f5,	// (0x00017205) bg_button_pane_cp07

0x99a1,	// (0x000179b1) cell_vitu_function_pane_g1

0x9999,	// (0x000179a9) main_calc_pane_g1

0x09da,	// (0x0000e9ea) aid_visual_content_pane

0x91f5,	// (0x00017205) main_vradio_pane

0x995b,	// (0x0001796b) main_vradio_pane_g1_ParamLimits

0x995b,	// (0x0001796b) main_vradio_pane_g1

0x9969,	// (0x00017979) main_vradio_pane_g2_ParamLimits

0x9969,	// (0x00017979) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x0001d72f) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x0001d72f) main_vradio_pane_g

0x99ab,	// (0x000179bb) main_vradio_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) main_vradio_pane_t1

0x99ab,	// (0x000179bb) main_vradio_pane_t2_ParamLimits

0x99ab,	// (0x000179bb) main_vradio_pane_t2

0x99bf,	// (0x000179cf) main_vradio_pane_t3_ParamLimits

0x99bf,	// (0x000179cf) main_vradio_pane_t3

0x0002,

0xf724,	// (0x0001d734) main_vradio_pane_t_ParamLimits

0xf724,	// (0x0001d734) main_vradio_pane_t

0x9264,	// (0x00017274) vradio_rocker_control_pane_ParamLimits

0x9264,	// (0x00017274) vradio_rocker_control_pane

0x9264,	// (0x00017274) vradio_station_info_pane_ParamLimits

0x9264,	// (0x00017274) vradio_station_info_pane

0x9264,	// (0x00017274) vradio_frequency_info_pane_ParamLimits

0x9264,	// (0x00017274) vradio_frequency_info_pane

0x99a1,	// (0x000179b1) vradio_station_info_pane_g1

0xa7cb,	// (0x000187db) vradio_station_info_pane_t1_ParamLimits

0xa7cb,	// (0x000187db) vradio_station_info_pane_t1

0x99bf,	// (0x000179cf) vradio_station_info_pane_t2_ParamLimits

0x99bf,	// (0x000179cf) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x0001d73b) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x0001d73b) vradio_station_info_pane_t

0x91f5,	// (0x00017205) vradio_tuning_pane

0x487a,	// (0x0001288a) vradio_rocker_control_pane_g1

0xc487,	// (0x0001a497) vradio_rocker_control_pane_g2

0x4884,	// (0x00012894) vradio_rocker_control_pane_g3

0x488e,	// (0x0001289e) vradio_rocker_control_pane_g4

0x4898,	// (0x000128a8) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x0001d740) vradio_rocker_control_pane_g

0x99a1,	// (0x000179b1) vradio_frequency_info_pane_g1

0x99ab,	// (0x000179bb) vradio_frequency_info_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) vradio_frequency_info_pane_t1

0x48a2,	// (0x000128b2) vradio_tuning_pane_g1

0x48af,	// (0x000128bf) vradio_tuning_pane_t1

0x9223,	// (0x00017233) area_side_right_pane_ParamLimits

0x9223,	// (0x00017233) area_side_right_pane

0xb979,	// (0x00019989) status_small_pane_g1

0xb981,	// (0x00019991) status_small_pane_g2

0xb98a,	// (0x0001999a) status_small_pane_g3

0xb993,	// (0x000199a3) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0001d50c) status_small_pane_g

0xb99c,	// (0x000199ac) status_small_pane_t1

0x91f5,	// (0x00017205) main_video3_pane

0x91f5,	// (0x00017205) cams_zoom_vslider_pane

0xc48f,	// (0x0001a49f) image3_wide_pane_ParamLimits

0xc48f,	// (0x0001a49f) image3_wide_pane

0x91f5,	// (0x00017205) image3_wide_small_pane

0xc4a9,	// (0x0001a4b9) main_video3_pane_g1_ParamLimits

0xc4a9,	// (0x0001a4b9) main_video3_pane_g1

0xc4a9,	// (0x0001a4b9) main_video3_pane_g2_ParamLimits

0xc4a9,	// (0x0001a4b9) main_video3_pane_g2

0x0001,

0xf73b,	// (0x0001d74b) main_video3_pane_g_ParamLimits

0xf73b,	// (0x0001d74b) main_video3_pane_g

0xc4c7,	// (0x0001a4d7) main_video3_pane_t1_ParamLimits

0xc4c7,	// (0x0001a4d7) main_video3_pane_t1

0xc4c7,	// (0x0001a4d7) main_video3_pane_t2_ParamLimits

0xc4c7,	// (0x0001a4d7) main_video3_pane_t2

0xc4c7,	// (0x0001a4d7) main_video3_pane_t3_ParamLimits

0xc4c7,	// (0x0001a4d7) main_video3_pane_t3

0x0002,

0xf740,	// (0x0001d750) main_video3_pane_t_ParamLimits

0xf740,	// (0x0001d750) main_video3_pane_t

0x99a1,	// (0x000179b1) cams_zoom_vslider_pane_g1

0x99a1,	// (0x000179b1) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) cams_zoom_vslider_pane_g

0x91f5,	// (0x00017205) small_slider_vertical_pane

0x99a1,	// (0x000179b1) small_slider_vertical_pane_g1

0x99a1,	// (0x000179b1) small_slider_vertical_pane_g2

0xc4ee,	// (0x0001a4fe) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x0001d757) small_slider_vertical_pane_g

0x91f5,	// (0x00017205) main_hwr_training_pane

0xc4f7,	// (0x0001a507) hwr_training_instruct_pane_ParamLimits

0xc4f7,	// (0x0001a507) hwr_training_instruct_pane

0x48be,	// (0x000128ce) hwr_training_navi_pane_ParamLimits

0x48be,	// (0x000128ce) hwr_training_navi_pane

0x48dd,	// (0x000128ed) hwr_training_write_pane_ParamLimits

0x48dd,	// (0x000128ed) hwr_training_write_pane

0x91f5,	// (0x00017205) bg_frame_shadow_pane

0xc52e,	// (0x0001a53e) hwr_training_write_pane_g1

0xc536,	// (0x0001a546) hwr_training_write_pane_g2

0xc53e,	// (0x0001a54e) hwr_training_write_pane_g3

0xc546,	// (0x0001a556) hwr_training_write_pane_g4

0xc54e,	// (0x0001a55e) hwr_training_write_pane_g5

0xc556,	// (0x0001a566) hwr_training_write_pane_g6

0xc55e,	// (0x0001a56e) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x0001d75e) hwr_training_write_pane_g

0xc566,	// (0x0001a576) hwr_training_navi_pane_g1_ParamLimits

0xc566,	// (0x0001a576) hwr_training_navi_pane_g1

0xc578,	// (0x0001a588) hwr_training_navi_pane_g2_ParamLimits

0xc578,	// (0x0001a588) hwr_training_navi_pane_g2

0xc58a,	// (0x0001a59a) hwr_training_navi_pane_g3_ParamLimits

0xc58a,	// (0x0001a59a) hwr_training_navi_pane_g3

0xc59a,	// (0x0001a5aa) hwr_training_navi_pane_g4_ParamLimits

0xc59a,	// (0x0001a5aa) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x0001d76d) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x0001d76d) hwr_training_navi_pane_g

0xc5a7,	// (0x0001a5b7) hwr_training_navi_pane_t1

0x4925,	// (0x00012935) list_single_hwr_training_instruct_pane_ParamLimits

0x4925,	// (0x00012935) list_single_hwr_training_instruct_pane

0xc5b5,	// (0x0001a5c5) list_single_hwr_training_instruct_pane_t1

0xbdf0,	// (0x00019e00) bg_frame_shadow_pane_g1

0xc5c4,	// (0x0001a5d4) bg_frame_shadow_pane_g2

0xc5cc,	// (0x0001a5dc) bg_frame_shadow_pane_g3

0xc5d4,	// (0x0001a5e4) bg_frame_shadow_pane_g4

0xc5dc,	// (0x0001a5ec) bg_frame_shadow_pane_g5

0xc5e4,	// (0x0001a5f4) bg_frame_shadow_pane_g6

0xc5ec,	// (0x0001a5fc) bg_frame_shadow_pane_g7

0x9af5,	// (0x00017b05) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x0001d778) bg_frame_shadow_pane_g

0x91f5,	// (0x00017205) main_video_tele_dialer_pane

0x493a,	// (0x0001294a) aid_size_cell_video_keypad_ParamLimits

0x493a,	// (0x0001294a) aid_size_cell_video_keypad

0x4954,	// (0x00012964) grid_video_dialer_keypad_pane_ParamLimits

0x4954,	// (0x00012964) grid_video_dialer_keypad_pane

0x49a0,	// (0x000129b0) video_down_pane_cp_ParamLimits

0x49a0,	// (0x000129b0) video_down_pane_cp

0x49d2,	// (0x000129e2) cell_video_dialer_keypad_pane_ParamLimits

0x49d2,	// (0x000129e2) cell_video_dialer_keypad_pane

0xc5f4,	// (0x0001a604) bg_button_pane_cp08_ParamLimits

0xc5f4,	// (0x0001a604) bg_button_pane_cp08

0x49f4,	// (0x00012a04) cell_video_dialer_keypad_pane_g1_ParamLimits

0x49f4,	// (0x00012a04) cell_video_dialer_keypad_pane_g1

0xe6c4,	// (0x0001c6d4) mup3_rocker2_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) mup3_rocker2_pane

0x99a1,	// (0x000179b1) mup3_rocker2_pane_g1

0x3542,	// (0x00011552) main_dialer2_pane

0x91f5,	// (0x00017205) main_mp4_pane

0xc61e,	// (0x0001a62e) main_mp4_pane_g1_ParamLimits

0xc61e,	// (0x0001a62e) main_mp4_pane_g1

0xc61e,	// (0x0001a62e) main_mp4_pane_g2_ParamLimits

0xc61e,	// (0x0001a62e) main_mp4_pane_g2

0x4a2b,	// (0x00012a3b) main_mp4_pane_g3_ParamLimits

0x4a2b,	// (0x00012a3b) main_mp4_pane_g3

0xc63c,	// (0x0001a64c) main_mp4_pane_g4_ParamLimits

0xc63c,	// (0x0001a64c) main_mp4_pane_g4

0xc664,	// (0x0001a674) main_mp4_pane_g5_ParamLimits

0xc664,	// (0x0001a674) main_mp4_pane_g5

0x0007,

0xf788,	// (0x0001d798) main_mp4_pane_g_ParamLimits

0xf788,	// (0x0001d798) main_mp4_pane_g

0xc6cc,	// (0x0001a6dc) main_mp4_pane_t1_ParamLimits

0xc6cc,	// (0x0001a6dc) main_mp4_pane_t1

0xc72e,	// (0x0001a73e) main_mp4_pane_t2_ParamLimits

0xc72e,	// (0x0001a73e) main_mp4_pane_t2

0xc792,	// (0x0001a7a2) main_mp4_pane_t3_ParamLimits

0xc792,	// (0x0001a7a2) main_mp4_pane_t3

0xc7f0,	// (0x0001a800) main_mp4_pane_t4_ParamLimits

0xc7f0,	// (0x0001a800) main_mp4_pane_t4

0x0003,

0xf799,	// (0x0001d7a9) main_mp4_pane_t_ParamLimits

0xf799,	// (0x0001d7a9) main_mp4_pane_t

0xc84e,	// (0x0001a85e) mp4_progress_pane_ParamLimits

0xc84e,	// (0x0001a85e) mp4_progress_pane

0xc882,	// (0x0001a892) mp4_rocker_pane_ParamLimits

0xc882,	// (0x0001a892) mp4_rocker_pane

0xc89e,	// (0x0001a8ae) mp4_progress_pane_t1

0xc8bd,	// (0x0001a8cd) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x0001d7b2) mp4_progress_pane_t

0xc8dc,	// (0x0001a8ec) mup_progress_pane_cp04

0x99a1,	// (0x000179b1) mp4_rocker_pane_g1

0x9264,	// (0x00017274) aid_cell_size_keypad2_ParamLimits

0x9264,	// (0x00017274) aid_cell_size_keypad2

0x9264,	// (0x00017274) dialer2_ne_pane_ParamLimits

0x9264,	// (0x00017274) dialer2_ne_pane

0x9264,	// (0x00017274) grid_dialer2_keypad_pane_ParamLimits

0x9264,	// (0x00017274) grid_dialer2_keypad_pane

0xbb41,	// (0x00019b51) bg_popup_call_pane_cp07_ParamLimits

0xbb41,	// (0x00019b51) bg_popup_call_pane_cp07

0x4a5b,	// (0x00012a6b) dialer2_ne_pane_t1_ParamLimits

0x4a5b,	// (0x00012a6b) dialer2_ne_pane_t1

0x4a99,	// (0x00012aa9) cell_dialer2_keypad_pane_ParamLimits

0x4a99,	// (0x00012aa9) cell_dialer2_keypad_pane

0xbb41,	// (0x00019b51) bg_button_pane_pane_cp04_ParamLimits

0xbb41,	// (0x00019b51) bg_button_pane_pane_cp04

0x995b,	// (0x0001796b) cell_dialer2_keypad_pane_g1_ParamLimits

0x995b,	// (0x0001796b) cell_dialer2_keypad_pane_g1

0x1631,	// (0x0000f641) aid_placing_vt_set_content_ParamLimits

0x1631,	// (0x0000f641) aid_placing_vt_set_content

0x1659,	// (0x0000f669) aid_placing_vt_set_title_ParamLimits

0x1659,	// (0x0000f669) aid_placing_vt_set_title

0x91f5,	// (0x00017205) main_image3_pane

0x4b0e,	// (0x00012b1e) area_side_right_pane_cp01_ParamLimits

0x4b0e,	// (0x00012b1e) area_side_right_pane_cp01

0x4b25,	// (0x00012b35) main_image3_pane_g1_ParamLimits

0x4b25,	// (0x00012b35) main_image3_pane_g1

0x4b33,	// (0x00012b43) main_image3_pane_g2_ParamLimits

0x4b33,	// (0x00012b43) main_image3_pane_g2

0x4b5b,	// (0x00012b6b) main_image3_pane_g3_ParamLimits

0x4b5b,	// (0x00012b6b) main_image3_pane_g3

0x4b85,	// (0x00012b95) main_image3_pane_g4_ParamLimits

0x4b85,	// (0x00012b95) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x0001d7c1) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x0001d7c1) main_image3_pane_g

0x4baf,	// (0x00012bbf) main_image3_pane_t1_ParamLimits

0x4baf,	// (0x00012bbf) main_image3_pane_t1

0x4c07,	// (0x00012c17) main_image3_pane_t2_ParamLimits

0x4c07,	// (0x00012c17) main_image3_pane_t2

0x4c59,	// (0x00012c69) main_image3_pane_t3_ParamLimits

0x4c59,	// (0x00012c69) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x0001d7ca) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x0001d7ca) main_image3_pane_t

0x9264,	// (0x00017274) grid_sctrl_middle_pane_cp01_ParamLimits

0x9264,	// (0x00017274) grid_sctrl_middle_pane_cp01

0x4ce1,	// (0x00012cf1) cell_sctrl_middle_pane_cp01_ParamLimits

0x4ce1,	// (0x00012cf1) cell_sctrl_middle_pane_cp01

0x4cfe,	// (0x00012d0e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4cfe,	// (0x00012d0e) cell_sctrl_middle_pane_cp01_g1

0x91f5,	// (0x00017205) main_call4_pane

0x4d14,	// (0x00012d24) aid_size_button_call4_ParamLimits

0x4d14,	// (0x00012d24) aid_size_button_call4

0x4d47,	// (0x00012d57) call4_windows_pane_ParamLimits

0x4d47,	// (0x00012d57) call4_windows_pane

0x4d66,	// (0x00012d76) grid_call4_button_pane_ParamLimits

0x4d66,	// (0x00012d76) grid_call4_button_pane

0x4d99,	// (0x00012da9) call4_windows_conf_pane

0x4db0,	// (0x00012dc0) popup_call4_audio_first_window_ParamLimits

0x4db0,	// (0x00012dc0) popup_call4_audio_first_window

0x4e00,	// (0x00012e10) popup_call4_audio_second_window_ParamLimits

0x4e00,	// (0x00012e10) popup_call4_audio_second_window

0x4e17,	// (0x00012e27) popup_call4_audio_wait_window_ParamLimits

0x4e17,	// (0x00012e27) popup_call4_audio_wait_window

0x4e25,	// (0x00012e35) cell_call4_button_pane_ParamLimits

0x4e25,	// (0x00012e35) cell_call4_button_pane

0x4e4a,	// (0x00012e5a) bg_button_pane_cp09_ParamLimits

0x4e4a,	// (0x00012e5a) bg_button_pane_cp09

0x4e56,	// (0x00012e66) cell_call4_button_pane_g1_ParamLimits

0x4e56,	// (0x00012e66) cell_call4_button_pane_g1

0x4e7c,	// (0x00012e8c) cell_call4_button_pane_t1_ParamLimits

0x4e7c,	// (0x00012e8c) cell_call4_button_pane_t1

0xc989,	// (0x0001a999) popup_call4_audio_conf_window_ParamLimits

0xc989,	// (0x0001a999) popup_call4_audio_conf_window

0x439c,	// (0x000123ac) mup3_progress_pane_t1_ParamLimits

0x43bb,	// (0x000123cb) mup3_progress_pane_t2_ParamLimits

0xc148,	// (0x0001a158) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x0001d6a4) mup3_progress_pane_t_ParamLimits

0xc165,	// (0x0001a175) mup_progress_pane_cp03_ParamLimits

0xc17d,	// (0x0001a18d) mup3_control_keys_pane_g4_copy1

0xc882,	// (0x0001a892) mp4_rocker2_pane_ParamLimits

0xc882,	// (0x0001a892) mp4_rocker2_pane

0xc17d,	// (0x0001a18d) mp4_rocker2_pane_g1

0xc17d,	// (0x0001a18d) mp4_rocker2_pane_g2

0xc17d,	// (0x0001a18d) mp4_rocker2_pane_g3

0xc17d,	// (0x0001a18d) mp4_rocker2_pane_g4

0xc17d,	// (0x0001a18d) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x0001d7d3) mp4_rocker2_pane_g

0x91f5,	// (0x00017205) main_camera4_pane

0x91f5,	// (0x00017205) main_video4_pane

0x496e,	// (0x0001297e) main_video_tele_dialer_pane_t1_ParamLimits

0x496e,	// (0x0001297e) main_video_tele_dialer_pane_t1

0x4987,	// (0x00012997) main_video_tele_dialer_pane_t2_ParamLimits

0x4987,	// (0x00012997) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x0001d789) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x0001d789) main_video_tele_dialer_pane_t

0x4eba,	// (0x00012eca) cam4_autofocus_pane_ParamLimits

0x4eba,	// (0x00012eca) cam4_autofocus_pane

0x4ed0,	// (0x00012ee0) cam4_image_uncrop_pane_ParamLimits

0x4ed0,	// (0x00012ee0) cam4_image_uncrop_pane

0x4eea,	// (0x00012efa) cam4_indicators_pane_ParamLimits

0x4eea,	// (0x00012efa) cam4_indicators_pane

0x4f15,	// (0x00012f25) main_camera4_pane_g1_ParamLimits

0x4f15,	// (0x00012f25) main_camera4_pane_g1

0x4f27,	// (0x00012f37) main_camera4_pane_g2_ParamLimits

0x4f27,	// (0x00012f37) main_camera4_pane_g2

0x4f3a,	// (0x00012f4a) main_camera4_pane_g3_ParamLimits

0x4f3a,	// (0x00012f4a) main_camera4_pane_g3

0x4f4d,	// (0x00012f5d) main_camera4_pane_g4_ParamLimits

0x4f4d,	// (0x00012f5d) main_camera4_pane_g4

0x4f60,	// (0x00012f70) main_camera4_pane_g5_ParamLimits

0x4f60,	// (0x00012f70) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x0001d7de) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x0001d7de) main_camera4_pane_g

0x4f84,	// (0x00012f94) main_camera4_pane_t1_ParamLimits

0x4f84,	// (0x00012f94) main_camera4_pane_t1

0x995b,	// (0x0001796b) bg_tb_trans_pane_cp06

0xc9c1,	// (0x0001a9d1) cam4_indicators_pane_g1

0xc9d2,	// (0x0001a9e2) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x0001d7f9) cam4_indicators_pane_g

0xc9f0,	// (0x0001aa00) cam4_indicators_pane_t1

0x4fe8,	// (0x00012ff8) main_video4_pane_g1_ParamLimits

0x4fe8,	// (0x00012ff8) main_video4_pane_g1

0x4ff7,	// (0x00013007) main_video4_pane_g2_ParamLimits

0x4ff7,	// (0x00013007) main_video4_pane_g2

0x5006,	// (0x00013016) main_video4_pane_g3_ParamLimits

0x5006,	// (0x00013016) main_video4_pane_g3

0x5015,	// (0x00013025) main_video4_pane_g4_ParamLimits

0x5015,	// (0x00013025) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x0001d800) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x0001d800) main_video4_pane_g

0x5033,	// (0x00013043) vid4_indicators_pane_ParamLimits

0x5033,	// (0x00013043) vid4_indicators_pane

0x5061,	// (0x00013071) video4_image_uncrop_cif_pane_ParamLimits

0x5061,	// (0x00013071) video4_image_uncrop_cif_pane

0x507b,	// (0x0001308b) video4_image_uncrop_nhd_pane_ParamLimits

0x507b,	// (0x0001308b) video4_image_uncrop_nhd_pane

0x4ed0,	// (0x00012ee0) video4_image_uncrop_vga_pane_ParamLimits

0x4ed0,	// (0x00012ee0) video4_image_uncrop_vga_pane

0x9264,	// (0x00017274) bg_tb_trans_pane_cp07

0xca1c,	// (0x0001aa2c) vid4_indicators_pane_g1

0xca30,	// (0x0001aa40) vid4_indicators_pane_g2

0xca44,	// (0x0001aa54) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x0001d80b) vid4_indicators_pane_g

0xca73,	// (0x0001aa83) vid4_indicators_pane_t1

0x508f,	// (0x0001309f) cam4_autofocus_pane_g1

0x5097,	// (0x000130a7) cam4_autofocus_pane_g2

0x509f,	// (0x000130af) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x0001d816) cam4_autofocus_pane_g

0x50a7,	// (0x000130b7) cam4_autofocus_pane_g3_copy1

0x49b6,	// (0x000129c6) video_down_pane_cp_t1

0x49c4,	// (0x000129d4) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x0001d78e) video_down_pane_cp_t

0x9264,	// (0x00017274) popup_vitu2_window_ParamLimits

0x9264,	// (0x00017274) popup_vitu2_window

0x50af,	// (0x000130bf) aid_size_cell2_itu2_ParamLimits

0x50af,	// (0x000130bf) aid_size_cell2_itu2

0x50d5,	// (0x000130e5) aid_size_cell_itu2_ParamLimits

0x50d5,	// (0x000130e5) aid_size_cell_itu2

0x4419,	// (0x00012429) bg_popup_window_pane_cp09_ParamLimits

0x4419,	// (0x00012429) bg_popup_window_pane_cp09

0x5131,	// (0x00013141) field_vitu2_entry_pane_ParamLimits

0x5131,	// (0x00013141) field_vitu2_entry_pane

0x5157,	// (0x00013167) grid_vitu2_function_pane_ParamLimits

0x5157,	// (0x00013167) grid_vitu2_function_pane

0x51a8,	// (0x000131b8) grid_vitu2_itu_pane_ParamLimits

0x51a8,	// (0x000131b8) grid_vitu2_itu_pane

0x523e,	// (0x0001324e) cell_vitu2_itu_pane_ParamLimits

0x523e,	// (0x0001324e) cell_vitu2_itu_pane

0x526a,	// (0x0001327a) cell_vitu2_function_pane_ParamLimits

0x526a,	// (0x0001327a) cell_vitu2_function_pane

0xca8a,	// (0x0001aa9a) bg_popup_call_pane_cp08_ParamLimits

0xca8a,	// (0x0001aa9a) bg_popup_call_pane_cp08

0xcaa1,	// (0x0001aab1) field_vitu2_entry_pane_g1

0xcaad,	// (0x0001aabd) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x0001d81d) field_vitu2_entry_pane_g

0x52a9,	// (0x000132b9) field_vitu2_entry_pane_t1_ParamLimits

0x52a9,	// (0x000132b9) field_vitu2_entry_pane_t1

0xcab9,	// (0x0001aac9) field_vitu2_entry_pane_t2_ParamLimits

0xcab9,	// (0x0001aac9) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x0001d824) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x0001d824) field_vitu2_entry_pane_t

0x52d8,	// (0x000132e8) bg_button_pane_cp010_ParamLimits

0x52d8,	// (0x000132e8) bg_button_pane_cp010

0x52e6,	// (0x000132f6) cell_vitu2_itu_pane_g1

0x530c,	// (0x0001331c) cell_vitu2_itu_pane_t1_ParamLimits

0x530c,	// (0x0001331c) cell_vitu2_itu_pane_t1

0x536a,	// (0x0001337a) cell_vitu2_itu_pane_t2_ParamLimits

0x536a,	// (0x0001337a) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x0001d82e) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x0001d82e) cell_vitu2_itu_pane_t

0x9264,	// (0x00017274) bg_button_pane_cp011

0x5456,	// (0x00013466) cell_vitu2_function_pane_g1

0x91f5,	// (0x00017205) main_myfav_hc_pane

0x4ca9,	// (0x00012cb9) popup_image3_note_pane_ParamLimits

0x4ca9,	// (0x00012cb9) popup_image3_note_pane

0x4cc5,	// (0x00012cd5) popup_image3_tool_bar_pane_ParamLimits

0x4cc5,	// (0x00012cd5) popup_image3_tool_bar_pane

0x53f8,	// (0x00013408) cell_vitu2_itu_pane_t3_ParamLimits

0x53f8,	// (0x00013408) cell_vitu2_itu_pane_t3

0x91f5,	// (0x00017205) bg_popup_trans_pane

0xcade,	// (0x0001aaee) grid_image3_tool_bar_pane

0xcae8,	// (0x0001aaf8) bg_popup_trans_pane_g1

0x9e81,	// (0x00017e91) bg_popup_trans_pane_g2

0xcaf0,	// (0x0001ab00) bg_popup_trans_pane_g3

0xcaf8,	// (0x0001ab08) bg_popup_trans_pane_g4

0xcb00,	// (0x0001ab10) bg_popup_trans_pane_g5

0xcb08,	// (0x0001ab18) bg_popup_trans_pane_g6

0xcb10,	// (0x0001ab20) bg_popup_trans_pane_g7

0xcb18,	// (0x0001ab28) bg_popup_trans_pane_g8

0x9e61,	// (0x00017e71) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x0001d835) bg_popup_trans_pane_g

0xcb20,	// (0x0001ab30) cell_image3_tool_bar_pane_ParamLimits

0xcb20,	// (0x0001ab30) cell_image3_tool_bar_pane

0x99a1,	// (0x000179b1) cell_image3_tool_bar_pane_g1

0x91f5,	// (0x00017205) bg_popup_trans_pane_cp1

0xcb34,	// (0x0001ab44) popup_image3_note_pane_t1

0xcb42,	// (0x0001ab52) popup_image3_note_pane_t2

0xcb50,	// (0x0001ab60) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x0001d848) popup_image3_note_pane_t

0xcb5e,	// (0x0001ab6e) popup_image3_note_pane_t3_copy1

0x546a,	// (0x0001347a) bg_myfav_hc_instruction_pane_ParamLimits

0x546a,	// (0x0001347a) bg_myfav_hc_instruction_pane

0x547e,	// (0x0001348e) cell_myfav_contact_pane_ParamLimits

0x547e,	// (0x0001348e) cell_myfav_contact_pane

0x549c,	// (0x000134ac) cell_myfav_contact_pane_cp1_ParamLimits

0x549c,	// (0x000134ac) cell_myfav_contact_pane_cp1

0x54b4,	// (0x000134c4) cell_myfav_contact_pane_cp2_ParamLimits

0x54b4,	// (0x000134c4) cell_myfav_contact_pane_cp2

0x54cc,	// (0x000134dc) cell_myfav_contact_pane_cp3_ParamLimits

0x54cc,	// (0x000134dc) cell_myfav_contact_pane_cp3

0x54e3,	// (0x000134f3) cell_myfav_contact_pane_cp4_ParamLimits

0x54e3,	// (0x000134f3) cell_myfav_contact_pane_cp4

0x54fb,	// (0x0001350b) cell_myfav_contact_pane_cp5_ParamLimits

0x54fb,	// (0x0001350b) cell_myfav_contact_pane_cp5

0x550f,	// (0x0001351f) cell_myfav_contact_pane_cp6_ParamLimits

0x550f,	// (0x0001351f) cell_myfav_contact_pane_cp6

0x5525,	// (0x00013535) cell_myfav_contact_pane_cp7_ParamLimits

0x5525,	// (0x00013535) cell_myfav_contact_pane_cp7

0xcb6c,	// (0x0001ab7c) listscroll_gen_pane_cp05

0x553f,	// (0x0001354f) main_myfav_hc_pane_g1_ParamLimits

0x553f,	// (0x0001354f) main_myfav_hc_pane_g1

0x5559,	// (0x00013569) main_myfav_hc_pane_g2_ParamLimits

0x5559,	// (0x00013569) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x0001d84f) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x0001d84f) main_myfav_hc_pane_g

0x558b,	// (0x0001359b) main_myfav_hc_pane_t1_ParamLimits

0x558b,	// (0x0001359b) main_myfav_hc_pane_t1

0xcb75,	// (0x0001ab85) main_myfav_hc_pane_t2_ParamLimits

0xcb75,	// (0x0001ab85) main_myfav_hc_pane_t2

0xcb87,	// (0x0001ab97) main_myfav_hc_pane_t3_ParamLimits

0xcb87,	// (0x0001ab97) main_myfav_hc_pane_t3

0x55a2,	// (0x000135b2) main_myfav_hc_pane_t4_ParamLimits

0x55a2,	// (0x000135b2) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x0001d856) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x0001d856) main_myfav_hc_pane_t

0x99a1,	// (0x000179b1) bg_myfav_hc_instruction_pane_g1

0xcb99,	// (0x0001aba9) cell_myfav_contact_pane_g1_ParamLimits

0xcb99,	// (0x0001aba9) cell_myfav_contact_pane_g1

0xcb99,	// (0x0001aba9) cell_myfav_contact_pane_g2_ParamLimits

0xcb99,	// (0x0001aba9) cell_myfav_contact_pane_g2

0xcba5,	// (0x0001abb5) cell_myfav_contact_pane_g3_ParamLimits

0xcba5,	// (0x0001abb5) cell_myfav_contact_pane_g3

0x9969,	// (0x00017979) cell_myfav_contact_pane_g4_ParamLimits

0x9969,	// (0x00017979) cell_myfav_contact_pane_g4

0xcbb2,	// (0x0001abc2) cell_myfav_contact_pane_g5_ParamLimits

0xcbb2,	// (0x0001abc2) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x0001d861) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x0001d861) cell_myfav_contact_pane_g

0x5573,	// (0x00013583) main_myfav_hc_pane_g3_ParamLimits

0x5573,	// (0x00013583) main_myfav_hc_pane_g3

0x0b15,	// (0x0000eb25) popup_adpt_find_window

0x55ca,	// (0x000135da) afind_page_pane_ParamLimits

0x55ca,	// (0x000135da) afind_page_pane

0x55df,	// (0x000135ef) aid_size_cell_afind_ParamLimits

0x55df,	// (0x000135ef) aid_size_cell_afind

0x55fd,	// (0x0001360d) bg_popup_sub_pane_cp09_ParamLimits

0x55fd,	// (0x0001360d) bg_popup_sub_pane_cp09

0x560a,	// (0x0001361a) find_pane_cp01_ParamLimits

0x560a,	// (0x0001361a) find_pane_cp01

0xcbbe,	// (0x0001abce) grid_afind_control_pane_ParamLimits

0xcbbe,	// (0x0001abce) grid_afind_control_pane

0x5617,	// (0x00013627) grid_afind_pane_ParamLimits

0x5617,	// (0x00013627) grid_afind_pane

0x5639,	// (0x00013649) cell_afind_pane_ParamLimits

0x5639,	// (0x00013649) cell_afind_pane

0x99a1,	// (0x000179b1) afind_page_pane_g1

0x56a0,	// (0x000136b0) afind_page_pane_g2

0x56a8,	// (0x000136b8) afind_page_pane_g3

0x0002,

0xf85c,	// (0x0001d86c) afind_page_pane_g

0x56b0,	// (0x000136c0) afind_page_pane_t1

0xcbe4,	// (0x0001abf4) cell_afind_grid_control_pane_ParamLimits

0xcbe4,	// (0x0001abf4) cell_afind_grid_control_pane

0xcbf3,	// (0x0001ac03) bg_button_pane_cp69_ParamLimits

0xcbf3,	// (0x0001ac03) bg_button_pane_cp69

0x56be,	// (0x000136ce) cell_afind_pane_g1_ParamLimits

0x56be,	// (0x000136ce) cell_afind_pane_g1

0x56cb,	// (0x000136db) cell_afind_pane_t1_ParamLimits

0x56cb,	// (0x000136db) cell_afind_pane_t1

0xcbff,	// (0x0001ac0f) bg_button_pane_cp72

0xcc07,	// (0x0001ac17) cell_afind_grid_control_pane_g1

0x3043,	// (0x00011053) aid_image_placing_area_ParamLimits

0x3043,	// (0x00011053) aid_image_placing_area

0x995b,	// (0x0001796b) field_vitu_entry_pane_g1_ParamLimits

0x995b,	// (0x0001796b) field_vitu_entry_pane_g1

0x995b,	// (0x0001796b) field_vitu_entry_pane_g2_ParamLimits

0x995b,	// (0x0001796b) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0001d1a9) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0001d1a9) field_vitu_entry_pane_g

0xc46b,	// (0x0001a47b) cell_vitu_itu_pane_g1_ParamLimits

0xc44e,	// (0x0001a45e) cell_vitu_itu_pane_t3_ParamLimits

0xc44e,	// (0x0001a45e) cell_vitu_itu_pane_t3

0xc89e,	// (0x0001a8ae) mp4_progress_pane_t1_ParamLimits

0xc8bd,	// (0x0001a8cd) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x0001d7b2) mp4_progress_pane_t_ParamLimits

0xc8dc,	// (0x0001a8ec) mup_progress_pane_cp04_ParamLimits

0x55b6,	// (0x000135c6) main_myfav_hc_pane_t5_ParamLimits

0x55b6,	// (0x000135c6) main_myfav_hc_pane_t5

0x921b,	// (0x0001722b) aid_zoom_text_primary

0x0b15,	// (0x0000eb25) popup_adpt_find_window_ParamLimits

0x9264,	// (0x00017274) main_cam_set_pane

0x4f01,	// (0x00012f11) cam4_zoom_pane_ParamLimits

0x4f01,	// (0x00012f11) cam4_zoom_pane

0x56dd,	// (0x000136ed) main_cam_set_pane_g1_ParamLimits

0x56dd,	// (0x000136ed) main_cam_set_pane_g1

0x56eb,	// (0x000136fb) main_cam_set_pane_g2_ParamLimits

0x56eb,	// (0x000136fb) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x0001d873) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x0001d873) main_cam_set_pane_g

0x570c,	// (0x0001371c) main_cam_set_pane_t1_ParamLimits

0x570c,	// (0x0001371c) main_cam_set_pane_t1

0x5727,	// (0x00013737) main_cset_listscroll_pane_ParamLimits

0x5727,	// (0x00013737) main_cset_listscroll_pane

0x574d,	// (0x0001375d) main_cset_slider_pane_ParamLimits

0x574d,	// (0x0001375d) main_cset_slider_pane

0xcc18,	// (0x0001ac28) main_cset_list_pane_ParamLimits

0xcc18,	// (0x0001ac28) main_cset_list_pane

0xcc28,	// (0x0001ac38) scroll_pane_cp028

0x5773,	// (0x00013783) aid_area_touch_slider

0x578f,	// (0x0001379f) cset_slider_pane

0x57b2,	// (0x000137c2) main_cset_slider_pane_g1

0x57c7,	// (0x000137d7) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x0001d878) main_cset_slider_pane_g

0xcc79,	// (0x0001ac89) main_cset_slider_pane_t1

0x5883,	// (0x00013893) main_cset_slider_pane_t2

0x589d,	// (0x000138ad) main_cset_slider_pane_t3

0x58b7,	// (0x000138c7) main_cset_slider_pane_t4

0x58d1,	// (0x000138e1) main_cset_slider_pane_t5

0x58eb,	// (0x000138fb) main_cset_slider_pane_t6

0x5900,	// (0x00013910) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x0001d89d) main_cset_slider_pane_t

0x5a04,	// (0x00013a14) cset_list_set_pane_ParamLimits

0x5a04,	// (0x00013a14) cset_list_set_pane

0xcd13,	// (0x0001ad23) aid_position_infowindow_above

0xcd1b,	// (0x0001ad2b) aid_position_infowindow_below

0xcd23,	// (0x0001ad33) cset_list_set_pane_g1_ParamLimits

0xcd23,	// (0x0001ad33) cset_list_set_pane_g1

0xcd2f,	// (0x0001ad3f) cset_list_set_pane_g3_ParamLimits

0xcd2f,	// (0x0001ad3f) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x0001d8bc) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x0001d8bc) cset_list_set_pane_g

0xcd3e,	// (0x0001ad4e) cset_list_set_pane_t1_ParamLimits

0xcd3e,	// (0x0001ad4e) cset_list_set_pane_t1

0x9264,	// (0x00017274) list_highlight_pane_cp021_ParamLimits

0x9264,	// (0x00017274) list_highlight_pane_cp021

0xa84f,	// (0x0001885f) cset_slider_pane_g1

0xa861,	// (0x00018871) cset_slider_pane_g2

0xa858,	// (0x00018868) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x0001d8c1) cset_slider_pane_g

0xcd53,	// (0x0001ad63) aid_area_touch_cam4_zoom

0xcd5b,	// (0x0001ad6b) cam4_zoom_cont_pane

0xcd63,	// (0x0001ad73) cam4_zoom_pane_g1

0xcd6b,	// (0x0001ad7b) cam4_zoom_pane_g2

0x5a16,	// (0x00013a26) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x0001d8c8) cam4_zoom_pane_g

0xcd73,	// (0x0001ad83) cam4_zoom_cont_pane_g1

0xcd7c,	// (0x0001ad8c) cam4_zoom_cont_pane_g2

0xcd85,	// (0x0001ad95) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x0001d8cf) cam4_zoom_cont_pane_g

0x4d32,	// (0x00012d42) call4_image_pane_ParamLimits

0x4d32,	// (0x00012d42) call4_image_pane

0x4d99,	// (0x00012da9) call4_windows_conf_pane_ParamLimits

0x4dde,	// (0x00012dee) popup_call4_audio_in_window_ParamLimits

0x4dde,	// (0x00012dee) popup_call4_audio_in_window

0x91f5,	// (0x00017205) bg_popup_call2_act_pane_cp02

0xc981,	// (0x0001a991) call4_list_conf_pane

0x99a1,	// (0x000179b1) call4_image_pane_g1

0x99a1,	// (0x000179b1) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) call4_image_pane_g

0xcd8e,	// (0x0001ad9e) list_single_graphic_popup_conf4_pane_ParamLimits

0xcd8e,	// (0x0001ad9e) list_single_graphic_popup_conf4_pane

0x91f5,	// (0x00017205) list_highlight_pane_cp022

0xcda1,	// (0x0001adb1) list_single_graphic_popup_conf4_pane_g1

0xa401,	// (0x00018411) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x0001d8d6) list_single_graphic_popup_conf4_pane_g

0xcda9,	// (0x0001adb9) list_single_graphic_popup_conf4_pane_t1

0x177d,	// (0x0000f78d) popup_vtel_slider_window_ParamLimits

0x177d,	// (0x0000f78d) popup_vtel_slider_window

0xc8ef,	// (0x0001a8ff) dialer2_ne_pane_t2_ParamLimits

0xc8ef,	// (0x0001a8ff) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x0001d7b7) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x0001d7b7) dialer2_ne_pane_t

0xbb41,	// (0x00019b51) bg_popup_sub_pane_cp010_ParamLimits

0xbb41,	// (0x00019b51) bg_popup_sub_pane_cp010

0x5a1e,	// (0x00013a2e) popup_vtel_slider_window_g1_ParamLimits

0x5a1e,	// (0x00013a2e) popup_vtel_slider_window_g1

0x5a31,	// (0x00013a41) popup_vtel_slider_window_g2_ParamLimits

0x5a31,	// (0x00013a41) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x0001d8db) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x0001d8db) popup_vtel_slider_window_g

0x5a87,	// (0x00013a97) vtel_slider_pane_ParamLimits

0x5a87,	// (0x00013a97) vtel_slider_pane

0x5aa9,	// (0x00013ab9) vtel_slider_pane_g1_ParamLimits

0x5aa9,	// (0x00013ab9) vtel_slider_pane_g1

0x5abd,	// (0x00013acd) vtel_slider_pane_g2_ParamLimits

0x5abd,	// (0x00013acd) vtel_slider_pane_g2

0x5ad5,	// (0x00013ae5) vtel_slider_pane_g3_ParamLimits

0x5ad5,	// (0x00013ae5) vtel_slider_pane_g3

0x5aa9,	// (0x00013ab9) vtel_slider_pane_g4_ParamLimits

0x5aa9,	// (0x00013ab9) vtel_slider_pane_g4

0x5aeb,	// (0x00013afb) vtel_slider_pane_g5_ParamLimits

0x5aeb,	// (0x00013afb) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x0001d8e4) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x0001d8e4) vtel_slider_pane_g

0x9264,	// (0x00017274) main_gallery2_pane

0x5101,	// (0x00013111) aid_size_row_itut2_dropdow_list_ParamLimits

0x5101,	// (0x00013111) aid_size_row_itut2_dropdow_list

0x517f,	// (0x0001318f) grid_vitu2_function_top_pane_ParamLimits

0x517f,	// (0x0001318f) grid_vitu2_function_top_pane

0x51e9,	// (0x000131f9) popup_vitu2_dropdown_list_window_ParamLimits

0x51e9,	// (0x000131f9) popup_vitu2_dropdown_list_window

0x5210,	// (0x00013220) popup_vitu2_match_list_window

0x5b01,	// (0x00013b11) cell_vitu2_function_top_pane_ParamLimits

0x5b01,	// (0x00013b11) cell_vitu2_function_top_pane

0x5b19,	// (0x00013b29) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5b19,	// (0x00013b29) cell_vitu2_function_top_pane_cp01

0x5b35,	// (0x00013b45) cell_vitu2_function_top_wide_pane_ParamLimits

0x5b35,	// (0x00013b45) cell_vitu2_function_top_wide_pane

0x9264,	// (0x00017274) bg_button_pane_cp012

0x5b53,	// (0x00013b63) cell_vitu2_function_top_pane_g1

0xcdbf,	// (0x0001adcf) bg_button_pane_cp013_ParamLimits

0xcdbf,	// (0x0001adcf) bg_button_pane_cp013

0x5b67,	// (0x00013b77) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5b67,	// (0x00013b77) cell_vitu2_function_top_wide_pane_g1

0x9264,	// (0x00017274) bg_popup_sub_pane_cp20

0x5b7f,	// (0x00013b8f) list_vitu2_match_list_pane

0xcae8,	// (0x0001aaf8) bg_popup_sub_pane_cp20_g1

0xcaf0,	// (0x0001ab00) bg_popup_sub_pane_cp20_g2

0x9e81,	// (0x00017e91) bg_popup_sub_pane_cp20_g3

0xcaf8,	// (0x0001ab08) bg_popup_sub_pane_cp20_g4

0x9e61,	// (0x00017e71) bg_popup_sub_pane_cp20_g5

0xcddb,	// (0x0001adeb) bg_popup_sub_pane_cp20_g6

0xcb08,	// (0x0001ab18) bg_popup_sub_pane_cp20_g7

0xcb10,	// (0x0001ab20) bg_popup_sub_pane_cp20_g8

0xcb18,	// (0x0001ab28) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x0001d8ef) bg_popup_sub_pane_cp20_g

0xcde3,	// (0x0001adf3) list_vitu2_match_list_item_pane_ParamLimits

0xcde3,	// (0x0001adf3) list_vitu2_match_list_item_pane

0xcdf5,	// (0x0001ae05) list_vitu2_match_list_item_pane_t1

0x91f5,	// (0x00017205) bg_popup_sub_pane_cp21

0x9c5e,	// (0x00017c6e) grid_vitu2_dropdown_list_pane

0x5b97,	// (0x00013ba7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5b97,	// (0x00013ba7) cell_vitu2_dropdown_list_char_pane

0x5bb7,	// (0x00013bc7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5bb7,	// (0x00013bc7) cell_vitu2_dropdown_list_ctrl_pane

0xce03,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g1

0xce0c,	// (0x0001ae1c) cell_vitu2_dropdown_list_char_pane_g2

0xce15,	// (0x0001ae25) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x0001d902) cell_vitu2_dropdown_list_char_pane_g

0x5bdf,	// (0x00013bef) cell_vitu2_dropdown_list_char_pane_t1

0x5bed,	// (0x00013bfd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5bed,	// (0x00013bfd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5bfa,	// (0x00013c0a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5bfa,	// (0x00013c0a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5c07,	// (0x00013c17) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5c07,	// (0x00013c17) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5c14,	// (0x00013c24) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5c14,	// (0x00013c24) cell_vitu2_dropdown_list_ctrl_pane_g4

0x995b,	// (0x0001796b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x995b,	// (0x0001796b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x0001d909) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x0001d909) cell_vitu2_dropdown_list_ctrl_pane_g

0x5c30,	// (0x00013c40) aid_size_cell_gallery2_ParamLimits

0x5c30,	// (0x00013c40) aid_size_cell_gallery2

0x5c4e,	// (0x00013c5e) grid_gallery2_pane_ParamLimits

0x5c4e,	// (0x00013c5e) grid_gallery2_pane

0x5c68,	// (0x00013c78) scroll_pane_cp029_ParamLimits

0x5c68,	// (0x00013c78) scroll_pane_cp029

0x5c79,	// (0x00013c89) cell_gallery2_pane_ParamLimits

0x5c79,	// (0x00013c89) cell_gallery2_pane

0xce1e,	// (0x0001ae2e) cell_gallery2_pane_g2

0x5cd8,	// (0x00013ce8) cell_gallery2_pane_g3

0xce26,	// (0x0001ae36) cell_gallery2_pane_g4

0xce2e,	// (0x0001ae3e) cell_gallery2_pane_g5

0x9c5e,	// (0x00017c6e) grid_highlight_pane_cp10

0x5210,	// (0x00013220) popup_vitu2_match_list_window_ParamLimits

0x5225,	// (0x00013235) popup_vitu2_query_window_ParamLimits

0x5225,	// (0x00013235) popup_vitu2_query_window

0x91f5,	// (0x00017205) bg_vitu2_candi_button_pane

0xce03,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xce0c,	// (0x0001ae1c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xce15,	// (0x0001ae25) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5ce0,	// (0x00013cf0) bg_button_pane_cp015

0x5cf1,	// (0x00013d01) bg_button_pane_cp016

0x5cfd,	// (0x00013d0d) bg_button_pane_cp017

0xa7df,	// (0x000187ef) bg_popup_sub_pane_cp22

0xce36,	// (0x0001ae46) popup_vitu2_query_window_g1

0x5d3b,	// (0x00013d4b) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x0001d914) popup_vitu2_query_window_g

0x5d5d,	// (0x00013d6d) popup_vitu2_query_window_t1_ParamLimits

0x5d5d,	// (0x00013d6d) popup_vitu2_query_window_t1

0x5d90,	// (0x00013da0) popup_vitu2_query_window_t2_ParamLimits

0x5d90,	// (0x00013da0) popup_vitu2_query_window_t2

0x5da2,	// (0x00013db2) popup_vitu2_query_window_t3_ParamLimits

0x5da2,	// (0x00013db2) popup_vitu2_query_window_t3

0x5dca,	// (0x00013dda) popup_vitu2_query_window_t4_ParamLimits

0x5dca,	// (0x00013dda) popup_vitu2_query_window_t4

0x5dde,	// (0x00013dee) popup_vitu2_query_window_t5_ParamLimits

0x5dde,	// (0x00013dee) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x0001d91b) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x0001d91b) popup_vitu2_query_window_t

0xcc10,	// (0x0001ac20) main_cset_text_pane

0x5773,	// (0x00013783) aid_area_touch_slider_ParamLimits

0x578f,	// (0x0001379f) cset_slider_pane_ParamLimits

0x57b2,	// (0x000137c2) main_cset_slider_pane_g1_ParamLimits

0x57c7,	// (0x000137d7) main_cset_slider_pane_g2_ParamLimits

0xcc31,	// (0x0001ac41) main_cset_slider_pane_g3_ParamLimits

0xcc31,	// (0x0001ac41) main_cset_slider_pane_g3

0x57dc,	// (0x000137ec) main_cset_slider_pane_g4_ParamLimits

0x57dc,	// (0x000137ec) main_cset_slider_pane_g4

0x57eb,	// (0x000137fb) main_cset_slider_pane_g5_ParamLimits

0x57eb,	// (0x000137fb) main_cset_slider_pane_g5

0x57f7,	// (0x00013807) main_cset_slider_pane_g6_ParamLimits

0x57f7,	// (0x00013807) main_cset_slider_pane_g6

0xf868,	// (0x0001d878) main_cset_slider_pane_g_ParamLimits

0xcc79,	// (0x0001ac89) main_cset_slider_pane_t1_ParamLimits

0x5883,	// (0x00013893) main_cset_slider_pane_t2_ParamLimits

0x589d,	// (0x000138ad) main_cset_slider_pane_t3_ParamLimits

0x58b7,	// (0x000138c7) main_cset_slider_pane_t4_ParamLimits

0x58d1,	// (0x000138e1) main_cset_slider_pane_t5_ParamLimits

0x58eb,	// (0x000138fb) main_cset_slider_pane_t6_ParamLimits

0x5900,	// (0x00013910) main_cset_slider_pane_t7_ParamLimits

0x592a,	// (0x0001393a) main_cset_slider_pane_t8_ParamLimits

0x592a,	// (0x0001393a) main_cset_slider_pane_t8

0x5952,	// (0x00013962) main_cset_slider_pane_t9_ParamLimits

0x5952,	// (0x00013962) main_cset_slider_pane_t9

0x597a,	// (0x0001398a) main_cset_slider_pane_t10_ParamLimits

0x597a,	// (0x0001398a) main_cset_slider_pane_t10

0x59a2,	// (0x000139b2) main_cset_slider_pane_t11_ParamLimits

0x59a2,	// (0x000139b2) main_cset_slider_pane_t11

0x59ca,	// (0x000139da) main_cset_slider_pane_t12_ParamLimits

0x59ca,	// (0x000139da) main_cset_slider_pane_t12

0x59e7,	// (0x000139f7) main_cset_slider_pane_t13_ParamLimits

0x59e7,	// (0x000139f7) main_cset_slider_pane_t13

0xf88d,	// (0x0001d89d) main_cset_slider_pane_t_ParamLimits

0x91f5,	// (0x00017205) bg_popup_sub_pane_cp011

0xce42,	// (0x0001ae52) main_cset_text_pane_g1

0xce4a,	// (0x0001ae5a) main_cset_text_pane_t1

0xce58,	// (0x0001ae68) main_cset_text_pane_t2

0xce66,	// (0x0001ae76) main_cset_text_pane_t3

0xce74,	// (0x0001ae84) main_cset_text_pane_t4

0xce82,	// (0x0001ae92) main_cset_text_pane_t5

0xce90,	// (0x0001aea0) main_cset_text_pane_t6

0xce9e,	// (0x0001aeae) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x0001d92a) main_cset_text_pane_t

0x91f5,	// (0x00017205) main_cam4_burst_pane

0x91f5,	// (0x00017205) main_cam5_pane

0xcbd2,	// (0x0001abe2) bg_button_pane_cp019

0xcbdb,	// (0x0001abeb) bg_button_pane_cp020

0xcc3d,	// (0x0001ac4d) main_cset_slider_pane_g7_ParamLimits

0xcc3d,	// (0x0001ac4d) main_cset_slider_pane_g7

0xcc49,	// (0x0001ac59) main_cset_slider_pane_g8_ParamLimits

0xcc49,	// (0x0001ac59) main_cset_slider_pane_g8

0x580b,	// (0x0001381b) main_cset_slider_pane_g9_ParamLimits

0x580b,	// (0x0001381b) main_cset_slider_pane_g9

0x5817,	// (0x00013827) main_cset_slider_pane_g10_ParamLimits

0x5817,	// (0x00013827) main_cset_slider_pane_g10

0x5823,	// (0x00013833) main_cset_slider_pane_g11_ParamLimits

0x5823,	// (0x00013833) main_cset_slider_pane_g11

0x582f,	// (0x0001383f) main_cset_slider_pane_g12_ParamLimits

0x582f,	// (0x0001383f) main_cset_slider_pane_g12

0x583b,	// (0x0001384b) main_cset_slider_pane_g13_ParamLimits

0x583b,	// (0x0001384b) main_cset_slider_pane_g13

0x5847,	// (0x00013857) main_cset_slider_pane_g14_ParamLimits

0x5847,	// (0x00013857) main_cset_slider_pane_g14

0x5853,	// (0x00013863) main_cset_slider_pane_g15_ParamLimits

0x5853,	// (0x00013863) main_cset_slider_pane_g15

0xcca1,	// (0x0001acb1) main_cset_slider_pane_t14_ParamLimits

0xcca1,	// (0x0001acb1) main_cset_slider_pane_t14

0xccda,	// (0x0001acea) main_cset_slider_pane_t15_ParamLimits

0xccda,	// (0x0001acea) main_cset_slider_pane_t15

0x5e48,	// (0x00013e58) aid_cam4_burst_size_cell_ParamLimits

0x5e48,	// (0x00013e58) aid_cam4_burst_size_cell

0x5e68,	// (0x00013e78) grid_cam4_burst_pane_ParamLimits

0x5e68,	// (0x00013e78) grid_cam4_burst_pane

0x5ea0,	// (0x00013eb0) linegrid_cam4_burst_pane_ParamLimits

0x5ea0,	// (0x00013eb0) linegrid_cam4_burst_pane

0xceac,	// (0x0001aebc) scroll_pane_cp30_ParamLimits

0xceac,	// (0x0001aebc) scroll_pane_cp30

0x5ec4,	// (0x00013ed4) cell_cam4_burst_pane_ParamLimits

0x5ec4,	// (0x00013ed4) cell_cam4_burst_pane

0xceb8,	// (0x0001aec8) linegrid_cam4_burst_pane_g1_ParamLimits

0xceb8,	// (0x0001aec8) linegrid_cam4_burst_pane_g1

0x5f11,	// (0x00013f21) linegrid_cam4_burst_pane_g2_ParamLimits

0x5f11,	// (0x00013f21) linegrid_cam4_burst_pane_g2

0xcec5,	// (0x0001aed5) linegrid_cam4_burst_pane_g3_ParamLimits

0xcec5,	// (0x0001aed5) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x0001d939) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x0001d939) linegrid_cam4_burst_pane_g

0x5f22,	// (0x00013f32) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5f22,	// (0x00013f32) linegrid_cam4_burst_pane_g3_copy1

0xced2,	// (0x0001aee2) linegrid_cam4_burst_pane_g4_ParamLimits

0xced2,	// (0x0001aee2) linegrid_cam4_burst_pane_g4

0x5f3c,	// (0x00013f4c) linegrid_cam4_burst_pane_g5_ParamLimits

0x5f3c,	// (0x00013f4c) linegrid_cam4_burst_pane_g5

0x5f4d,	// (0x00013f5d) linegrid_cam4_burst_pane_g6_ParamLimits

0x5f4d,	// (0x00013f5d) linegrid_cam4_burst_pane_g6

0xcedf,	// (0x0001aeef) linegrid_cam4_burst_pane_g7_ParamLimits

0xcedf,	// (0x0001aeef) linegrid_cam4_burst_pane_g7

0x5f64,	// (0x00013f74) cell_cam4_burst_pane_g1

0xcef8,	// (0x0001af08) main_cam5_pane_t1_ParamLimits

0xcef8,	// (0x0001af08) main_cam5_pane_t1

0xcf0a,	// (0x0001af1a) main_cam5_pane_t2_ParamLimits

0xcf0a,	// (0x0001af1a) main_cam5_pane_t2

0xcf1c,	// (0x0001af2c) main_cam5_pane_t3_ParamLimits

0xcf1c,	// (0x0001af2c) main_cam5_pane_t3

0xcf2e,	// (0x0001af3e) main_cam5_pane_t4_ParamLimits

0xcf2e,	// (0x0001af3e) main_cam5_pane_t4

0xcf46,	// (0x0001af56) main_cam5_pane_t5_ParamLimits

0xcf46,	// (0x0001af56) main_cam5_pane_t5

0xcf5a,	// (0x0001af6a) main_cam5_pane_t6_ParamLimits

0xcf5a,	// (0x0001af6a) main_cam5_pane_t6

0xcf6e,	// (0x0001af7e) main_cam5_pane_t7_ParamLimits

0xcf6e,	// (0x0001af7e) main_cam5_pane_t7

0xcf80,	// (0x0001af90) main_cam5_pane_t8_ParamLimits

0xcf80,	// (0x0001af90) main_cam5_pane_t8

0xcf9c,	// (0x0001afac) main_cam5_pane_t9_ParamLimits

0xcf9c,	// (0x0001afac) main_cam5_pane_t9

0xcfae,	// (0x0001afbe) main_cam5_pane_t10_ParamLimits

0xcfae,	// (0x0001afbe) main_cam5_pane_t10

0xcfc0,	// (0x0001afd0) main_cam5_pane_t11_ParamLimits

0xcfc0,	// (0x0001afd0) main_cam5_pane_t11

0xcfd2,	// (0x0001afe2) main_cam5_pane_t12_ParamLimits

0xcfd2,	// (0x0001afe2) main_cam5_pane_t12

0xcfe7,	// (0x0001aff7) main_cam5_pane_t13_ParamLimits

0xcfe7,	// (0x0001aff7) main_cam5_pane_t13

0x000c,

0xf935,	// (0x0001d945) main_cam5_pane_t_ParamLimits

0xf935,	// (0x0001d945) main_cam5_pane_t

0x0b96,	// (0x0000eba6) popup_scut_keymap_window_ParamLimits

0x0b96,	// (0x0000eba6) popup_scut_keymap_window

0x5f77,	// (0x00013f87) aid_size_cell_brow_shortcut

0x9c5e,	// (0x00017c6e) bg_popup_window_pane_cp010

0x5f83,	// (0x00013f93) grid_scut_pane

0x5f8f,	// (0x00013f9f) cell_scut_pane_ParamLimits

0x5f8f,	// (0x00013f9f) cell_scut_pane

0x5fa6,	// (0x00013fb6) cell_scut_pane_g1

0xd004,	// (0x0001b014) cell_scut_pane_t1

0xd013,	// (0x0001b023) cell_scut_pane_t2

0x5faf,	// (0x00013fbf) cell_scut_pane_t3

0x0002,

0xf950,	// (0x0001d960) cell_scut_pane_t

0x3f4b,	// (0x00011f5b) main_mup3_pane_g8_ParamLimits

0x3f4b,	// (0x00011f5b) main_mup3_pane_g8

0x5119,	// (0x00013129) area_vitu2_query_pane_ParamLimits

0x5119,	// (0x00013129) area_vitu2_query_pane

0x5d09,	// (0x00013d19) input_focus_pane_cp08

0xd022,	// (0x0001b032) area_vitu2_query_pane_g1

0x5fbd,	// (0x00013fcd) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x0001d967) area_vitu2_query_pane_g

0x5fcc,	// (0x00013fdc) area_vitu2_query_pane_t1_ParamLimits

0x5fcc,	// (0x00013fdc) area_vitu2_query_pane_t1

0x5fe0,	// (0x00013ff0) area_vitu2_query_pane_t2_ParamLimits

0x5fe0,	// (0x00013ff0) area_vitu2_query_pane_t2

0x5ff4,	// (0x00014004) area_vitu2_query_pane_t3_ParamLimits

0x5ff4,	// (0x00014004) area_vitu2_query_pane_t3

0xd02e,	// (0x0001b03e) area_vitu2_query_pane_t4_ParamLimits

0xd02e,	// (0x0001b03e) area_vitu2_query_pane_t4

0xd056,	// (0x0001b066) area_vitu2_query_pane_t5_ParamLimits

0xd056,	// (0x0001b066) area_vitu2_query_pane_t5

0xd07e,	// (0x0001b08e) area_vitu2_query_pane_t6_ParamLimits

0xd07e,	// (0x0001b08e) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x0001d96c) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x0001d96c) area_vitu2_query_pane_t

0x601c,	// (0x0001402c) bg_button_pane_cp018

0x6028,	// (0x00014038) bg_button_pane_cp021

0x6034,	// (0x00014044) bg_button_pane_cp022

0x6053,	// (0x00014063) input_focus_pane_cp09

0xa53d,	// (0x0001854d) aid_size_touch_mv_arrow_left

0xa566,	// (0x00018576) aid_size_touch_mv_arrow_right

0x586b,	// (0x0001387b) main_cset_slider_pane_g16_ParamLimits

0x586b,	// (0x0001387b) main_cset_slider_pane_g16

0x5877,	// (0x00013887) main_cset_slider_pane_g17_ParamLimits

0x5877,	// (0x00013887) main_cset_slider_pane_g17

0x5f64,	// (0x00013f74) cell_cam4_burst_pane_g1_ParamLimits

0x91f5,	// (0x00017205) compa_mode_pane

0x5a41,	// (0x00013a51) popup_vtel_slider_window_g3_ParamLimits

0x5a41,	// (0x00013a51) popup_vtel_slider_window_g3

0x5a58,	// (0x00013a68) popup_vtel_slider_window_g4_ParamLimits

0x5a58,	// (0x00013a68) popup_vtel_slider_window_g4

0x5a6f,	// (0x00013a7f) popup_vtel_slider_window_t1_ParamLimits

0x5a6f,	// (0x00013a7f) popup_vtel_slider_window_t1

0x91f5,	// (0x00017205) main_cl_pane

0xb9d8,	// (0x000199e8) popup_imed_adjust2_window_ParamLimits

0xa7df,	// (0x000187ef) bg_tb_trans_pane_cp05_ParamLimits

0xc37b,	// (0x0001a38b) popup_imed_adjust2_window_g1_ParamLimits

0xc38a,	// (0x0001a39a) popup_imed_adjust2_window_g2_ParamLimits

0xc38a,	// (0x0001a39a) popup_imed_adjust2_window_g2

0xc396,	// (0x0001a3a6) popup_imed_adjust2_window_g3_ParamLimits

0xc396,	// (0x0001a3a6) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x0001d6e7) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x0001d6e7) popup_imed_adjust2_window_g

0xc3a2,	// (0x0001a3b2) popup_imed_adjust2_window_t1_ParamLimits

0xc3ba,	// (0x0001a3ca) slider_imed_adjust_pane_ParamLimits

0xc3ce,	// (0x0001a3de) slider_imed_adjust_pane_g1_ParamLimits

0xc3de,	// (0x0001a3ee) slider_imed_adjust_pane_g2_ParamLimits

0xc3ee,	// (0x0001a3fe) slider_imed_adjust_pane_g3_ParamLimits

0xc3ff,	// (0x0001a40f) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x0001d6ee) slider_imed_adjust_pane_g_ParamLimits

0x4ea2,	// (0x00012eb2) aid_touch_area_cam4_ParamLimits

0x4ea2,	// (0x00012eb2) aid_touch_area_cam4

0xc99d,	// (0x0001a9ad) battery_pane_cp01

0x4f71,	// (0x00012f81) main_camera4_pane_g6_ParamLimits

0x4f71,	// (0x00012f81) main_camera4_pane_g6

0x4f9b,	// (0x00012fab) main_camera4_pane_t2_ParamLimits

0x4f9b,	// (0x00012fab) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x0001d7eb) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x0001d7eb) main_camera4_pane_t

0x4fd0,	// (0x00012fe0) aid_touch_area_vid4_ParamLimits

0x4fd0,	// (0x00012fe0) aid_touch_area_vid4

0x5024,	// (0x00013034) main_video4_pane_g5_ParamLimits

0x5024,	// (0x00013034) main_video4_pane_g5

0x5049,	// (0x00013059) vid4_progress_pane_ParamLimits

0x5049,	// (0x00013059) vid4_progress_pane

0xcc6d,	// (0x0001ac7d) main_cset_slider_pane_g18_ParamLimits

0xcc6d,	// (0x0001ac7d) main_cset_slider_pane_g18

0xceec,	// (0x0001aefc) cell_cam4_burst_pane_g2_ParamLimits

0xceec,	// (0x0001aefc) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x0001d940) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x0001d940) cell_cam4_burst_pane_g

0x9a19,	// (0x00017a29) bg_cl_pane_ParamLimits

0x9a19,	// (0x00017a29) bg_cl_pane

0x6063,	// (0x00014073) cl_header_pane_ParamLimits

0x6063,	// (0x00014073) cl_header_pane

0x6077,	// (0x00014087) cl_listscroll_pane_ParamLimits

0x6077,	// (0x00014087) cl_listscroll_pane

0xd0ca,	// (0x0001b0da) bg_cl_pane_g1

0xd0d2,	// (0x0001b0e2) bg_cl_pane_g2

0xd0da,	// (0x0001b0ea) bg_cl_pane_g3

0xd0e2,	// (0x0001b0f2) bg_cl_pane_g4

0xd0ea,	// (0x0001b0fa) bg_cl_pane_g5

0xd0f2,	// (0x0001b102) bg_cl_pane_g6

0xd0fa,	// (0x0001b10a) bg_cl_pane_g7

0xd102,	// (0x0001b112) bg_cl_pane_g8

0xd10a,	// (0x0001b11a) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x0001d97b) bg_cl_pane_g

0x6087,	// (0x00014097) aid_height_cl_leading_ParamLimits

0x6087,	// (0x00014097) aid_height_cl_leading

0x6093,	// (0x000140a3) aid_height_cl_text_ParamLimits

0x6093,	// (0x000140a3) aid_height_cl_text

0x9264,	// (0x00017274) bg_cl_header_pane_ParamLimits

0x9264,	// (0x00017274) bg_cl_header_pane

0x60b2,	// (0x000140c2) cl_header_pane_g1_ParamLimits

0x60b2,	// (0x000140c2) cl_header_pane_g1

0x60c8,	// (0x000140d8) cl_header_pane_t1_ParamLimits

0x60c8,	// (0x000140d8) cl_header_pane_t1

0xd112,	// (0x0001b122) cl_list_pane

0xcc28,	// (0x0001ac38) hc_scroll_pane_cp01

0x9e61,	// (0x00017e71) bg_cl_header_pane_g1

0xcae8,	// (0x0001aaf8) bg_cl_header_pane_g2

0x9e81,	// (0x00017e91) bg_cl_header_pane_g3

0xcaf8,	// (0x0001ab08) bg_cl_header_pane_g4

0xcaf0,	// (0x0001ab00) bg_cl_header_pane_g5

0xcddb,	// (0x0001adeb) bg_cl_header_pane_g6

0xcb10,	// (0x0001ab20) bg_cl_header_pane_g7

0xcb18,	// (0x0001ab28) bg_cl_header_pane_g8

0xcb08,	// (0x0001ab18) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x0001d98e) bg_cl_header_pane_g

0x60e1,	// (0x000140f1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x60e1,	// (0x000140f1) hc_cl_list_double_graphic_heading_pane

0x60f2,	// (0x00014102) hc_cl_list_single_graphic_pane_ParamLimits

0x60f2,	// (0x00014102) hc_cl_list_single_graphic_pane

0x6108,	// (0x00014118) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6108,	// (0x00014118) hc_cl_list_single_graphic_pane_g1

0x6114,	// (0x00014124) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6114,	// (0x00014124) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x0001d9a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x0001d9a1) hc_cl_list_single_graphic_pane_g

0x6128,	// (0x00014138) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6128,	// (0x00014138) hc_cl_list_single_graphic_pane_t1

0x6108,	// (0x00014118) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6108,	// (0x00014118) hc_cl_list_double_graphic_heading_pane_g1

0x613d,	// (0x0001414d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x613d,	// (0x0001414d) hc_cl_list_double_graphic_heading_pane_g2

0x6151,	// (0x00014161) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6151,	// (0x00014161) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x0001d9a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x0001d9a6) hc_cl_list_double_graphic_heading_pane_g

0x6165,	// (0x00014175) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6165,	// (0x00014175) hc_cl_list_double_graphic_heading_pane_t1

0x617a,	// (0x0001418a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x617a,	// (0x0001418a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x0001d9ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x0001d9ad) hc_cl_list_double_graphic_heading_pane_t

0xd123,	// (0x0001b133) vid4_progress_pane_g1

0xd133,	// (0x0001b143) vid4_progress_pane_g2

0x618f,	// (0x0001419f) vid4_progress_pane_g3

0xd143,	// (0x0001b153) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x0001d9b2) vid4_progress_pane_g

0x61a1,	// (0x000141b1) vid4_progress_pane_t1

0xd15b,	// (0x0001b16b) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x0001d9bd) vid4_progress_pane_t

0x61b9,	// (0x000141c9) wait_bar_pane_cp07

0xbca4,	// (0x00019cb4) blid_firmament_pane_ParamLimits

0xbce7,	// (0x00019cf7) popup_blid_sat_info2_window_g1

0xbd0b,	// (0x00019d1b) popup_blid_sat_info2_window_t3

0xbd19,	// (0x00019d29) popup_blid_sat_info2_window_t4

0xbd27,	// (0x00019d37) popup_blid_sat_info2_window_t5

0xbd35,	// (0x00019d45) popup_blid_sat_info2_window_t6

0xbd45,	// (0x00019d55) popup_blid_sat_info2_window_t7

0xbd53,	// (0x00019d63) popup_blid_sat_info2_window_t8

0xbd61,	// (0x00019d71) popup_blid_sat_info2_window_t9

0xbd6f,	// (0x00019d7f) popup_blid_sat_info2_window_t10

0xbe30,	// (0x00019e40) aid_firma_cardinal_ParamLimits

0xbe44,	// (0x00019e54) blid_firmament_pane_t1_ParamLimits

0xbe5b,	// (0x00019e6b) blid_firmament_pane_t2_ParamLimits

0xbe72,	// (0x00019e82) blid_firmament_pane_t3_ParamLimits

0xbe89,	// (0x00019e99) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x0001d5e0) blid_firmament_pane_t_ParamLimits

0xbea0,	// (0x00019eb0) blid_sat_info_pane_ParamLimits

0x9264,	// (0x00017274) main_cam_set_pane_ParamLimits

0x470f,	// (0x0001271f) aid_size_cell_colour_35_ParamLimits

0x472f,	// (0x0001273f) aid_size_cell_colour_112_ParamLimits

0x474f,	// (0x0001275f) aid_size_cell_effect_ParamLimits

0xa7df,	// (0x000187ef) bg_tb_trans_pane_cp02_ParamLimits

0x476f,	// (0x0001277f) heading_imed_pane_ParamLimits

0x477b,	// (0x0001278b) listscroll_imed_pane_ParamLimits

0xb10f,	// (0x0001911f) popup_call2_audio_first_window_g5_ParamLimits

0xb10f,	// (0x0001911f) popup_call2_audio_first_window_g5

0x4ab0,	// (0x00012ac0) aid_size_touch_image3_arrow_left_ParamLimits

0x4ab0,	// (0x00012ac0) aid_size_touch_image3_arrow_left

0x4adc,	// (0x00012aec) aid_size_touch_image3_arrow_right_ParamLimits

0x4adc,	// (0x00012aec) aid_size_touch_image3_arrow_right

0xd170,	// (0x0001b180) vid4_progress_pane_t3

0x48f8,	// (0x00012908) main_hwr_training_symbol_option_pane_ParamLimits

0x48f8,	// (0x00012908) main_hwr_training_symbol_option_pane

0xc519,	// (0x0001a529) popup_hwr_training_preview_window_ParamLimits

0xc519,	// (0x0001a529) popup_hwr_training_preview_window

0x4918,	// (0x00012928) hwr_training_navi_pane_g5_ParamLimits

0x4918,	// (0x00012928) hwr_training_navi_pane_g5

0xcad6,	// (0x0001aae6) popup_char_count_window

0x9264,	// (0x00017274) bg_popup_sub_pane_cp20_ParamLimits

0x5b7f,	// (0x00013b8f) list_vitu2_match_list_pane_ParamLimits

0x5b8b,	// (0x00013b9b) vitu2_page_scroll_pane_ParamLimits

0x5b8b,	// (0x00013b9b) vitu2_page_scroll_pane

0xd1a7,	// (0x0001b1b7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd1a7,	// (0x0001b1b7) list_single_hwr_training_symbol_option_pane

0xd1ba,	// (0x0001b1ca) list_single_hwr_training_symbol_option_pane_g1

0xd1c2,	// (0x0001b1d2) list_single_hwr_training_symbol_option_pane_t1

0xd1d0,	// (0x0001b1e0) bg_button_pane_cp023

0xd1d9,	// (0x0001b1e9) bg_button_pane_cp024

0xd20c,	// (0x0001b21c) vitu2_page_scroll_pane_g1

0xd214,	// (0x0001b224) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x0001d9c4) vitu2_page_scroll_pane_g

0xd21c,	// (0x0001b22c) vitu2_page_scroll_pane_t1

0xbc1a,	// (0x00019c2a) popup_char_count_window_g1

0xd22b,	// (0x0001b23b) popup_char_count_window_g2

0xd234,	// (0x0001b244) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x0001d9c9) popup_char_count_window_g

0xd23d,	// (0x0001b24d) popup_char_count_window_t1

0x91f5,	// (0x00017205) main_vded2_pane

0xc367,	// (0x0001a377) aid_size_cell_imed_line

0xc371,	// (0x0001a381) grid_imed_line_width_pane

0xca55,	// (0x0001aa65) vid4_indicators_pane_g4

0xd24b,	// (0x0001b25b) cell_imed_line_width_pane_ParamLimits

0xd24b,	// (0x0001b25b) cell_imed_line_width_pane

0xd25f,	// (0x0001b26f) cell_imed_line_width_pane_g1

0xd268,	// (0x0001b278) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x0001d9d0) cell_imed_line_width_pane_g

0x61e0,	// (0x000141f0) main_vded2_pane_g1_ParamLimits

0x61e0,	// (0x000141f0) main_vded2_pane_g1

0x61f6,	// (0x00014206) main_vded2_pane_g2_ParamLimits

0x61f6,	// (0x00014206) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x0001d9d5) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x0001d9d5) main_vded2_pane_g

0x6208,	// (0x00014218) vded2_slider_pane_ParamLimits

0x6208,	// (0x00014218) vded2_slider_pane

0x6218,	// (0x00014228) aid_size_touch_vded2_end

0x6222,	// (0x00014232) aid_size_touch_vded2_playhead

0xd270,	// (0x0001b280) aid_size_touch_vded2_start

0xd278,	// (0x0001b288) vded2_slider_bg_pane

0xd281,	// (0x0001b291) vded2_slider_pane_g1

0xd28a,	// (0x0001b29a) vded2_slider_pane_g2

0x622c,	// (0x0001423c) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x0001d9da) vded2_slider_pane_g

0xd292,	// (0x0001b2a2) vded2_slider_bg_pane_g1

0xd29b,	// (0x0001b2ab) vded2_slider_bg_pane_g2

0xd2a4,	// (0x0001b2b4) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x0001d9e1) vded2_slider_bg_pane_g

0x2cd3,	// (0x00010ce3) aid_postcard_touch_down_pane_ParamLimits

0x2cd3,	// (0x00010ce3) aid_postcard_touch_down_pane

0x2ce9,	// (0x00010cf9) aid_postcard_touch_up_pane_ParamLimits

0x2ce9,	// (0x00010cf9) aid_postcard_touch_up_pane

0x91f5,	// (0x00017205) main_blid2_pane

0xb9be,	// (0x000199ce) popup_blid2_search_window

0x91f5,	// (0x00017205) blid2_gps_pane

0x91f5,	// (0x00017205) blid2_navig_pane

0x91f5,	// (0x00017205) blid2_search_pane

0x91f5,	// (0x00017205) blid2_tripm_pane

0x6237,	// (0x00014247) blid2_search_pane_g1_ParamLimits

0x6237,	// (0x00014247) blid2_search_pane_g1

0x6251,	// (0x00014261) blid2_search_pane_t1_ParamLimits

0x6251,	// (0x00014261) blid2_search_pane_t1

0x6263,	// (0x00014273) aid_size_cell_blid2_gps_ParamLimits

0x6263,	// (0x00014273) aid_size_cell_blid2_gps

0x627b,	// (0x0001428b) blid2_gps_pane_g1_ParamLimits

0x627b,	// (0x0001428b) blid2_gps_pane_g1

0x628f,	// (0x0001429f) grid_blid2_satellite_pane_ParamLimits

0x628f,	// (0x0001429f) grid_blid2_satellite_pane

0x62a9,	// (0x000142b9) blid2_navig_pane_g1_ParamLimits

0x62a9,	// (0x000142b9) blid2_navig_pane_g1

0x62b5,	// (0x000142c5) blid2_navig_pane_t1_ParamLimits

0x62b5,	// (0x000142c5) blid2_navig_pane_t1

0x62d0,	// (0x000142e0) blid2_navig_pane_t2_ParamLimits

0x62d0,	// (0x000142e0) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x0001d9e8) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x0001d9e8) blid2_navig_pane_t

0x62eb,	// (0x000142fb) blid2_navig_ring_pane_ParamLimits

0x62eb,	// (0x000142fb) blid2_navig_ring_pane

0x6304,	// (0x00014314) blid2_speed_pane_ParamLimits

0x6304,	// (0x00014314) blid2_speed_pane

0x6310,	// (0x00014320) blid2_tripm_pane_g1_ParamLimits

0x6310,	// (0x00014320) blid2_tripm_pane_g1

0x6329,	// (0x00014339) blid2_tripm_pane_g2_ParamLimits

0x6329,	// (0x00014339) blid2_tripm_pane_g2

0x633d,	// (0x0001434d) blid2_tripm_pane_g3_ParamLimits

0x633d,	// (0x0001434d) blid2_tripm_pane_g3

0x6351,	// (0x00014361) blid2_tripm_pane_g4_ParamLimits

0x6351,	// (0x00014361) blid2_tripm_pane_g4

0x6365,	// (0x00014375) blid2_tripm_pane_g5_ParamLimits

0x6365,	// (0x00014375) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x0001d9ed) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x0001d9ed) blid2_tripm_pane_g

0x638b,	// (0x0001439b) blid2_tripm_pane_t1_ParamLimits

0x638b,	// (0x0001439b) blid2_tripm_pane_t1

0x63a6,	// (0x000143b6) blid2_tripm_pane_t2_ParamLimits

0x63a6,	// (0x000143b6) blid2_tripm_pane_t2

0x63bf,	// (0x000143cf) blid2_tripm_pane_t3_ParamLimits

0x63bf,	// (0x000143cf) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x0001d9fa) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x0001d9fa) blid2_tripm_pane_t

0x6406,	// (0x00014416) cell_blid2_satellite_pane_ParamLimits

0x6406,	// (0x00014416) cell_blid2_satellite_pane

0x6424,	// (0x00014434) cell_blid2_satellite_pane_g1

0xd2ad,	// (0x0001b2bd) cell_blid2_satellite_pane_t1

0x99a1,	// (0x000179b1) blid2_speed_pane_g1

0xd2bb,	// (0x0001b2cb) blid2_speed_pane_t1

0xd2c9,	// (0x0001b2d9) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x0001da03) blid2_speed_pane_t

0x99a1,	// (0x000179b1) blid2_navig_ring_pane_g1

0x642d,	// (0x0001443d) blid2_navig_ring_pane_g2

0x6435,	// (0x00014445) blid2_navig_ring_pane_g3

0x643d,	// (0x0001444d) blid2_navig_ring_pane_g4

0x6445,	// (0x00014455) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x0001da08) blid2_navig_ring_pane_g

0x91f5,	// (0x00017205) bg_popup_window_pane_cp011

0xd2d7,	// (0x0001b2e7) popup_blid2_search_window_g1

0xd2df,	// (0x0001b2ef) popup_blid2_search_window_t1

0xd2ed,	// (0x0001b2fd) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x0001da13) popup_blid2_search_window_t

0x9d70,	// (0x00017d80) main_browser_pane_g1

0x9a19,	// (0x00017a29) main_browser_pane_ParamLimits

0x9264,	// (0x00017274) bg_button_pane_cp011_ParamLimits

0x5456,	// (0x00013466) cell_vitu2_function_pane_g1_ParamLimits

0xa7df,	// (0x000187ef) bg_popup_sub_pane_cp22_ParamLimits

0x5d09,	// (0x00013d19) input_focus_pane_cp08_ParamLimits

0x5d24,	// (0x00013d34) popup_vitu2_query_button_pane_ParamLimits

0x5d24,	// (0x00013d34) popup_vitu2_query_button_pane

0x5d33,	// (0x00013d43) popup_vitu2_query_input_button_pane

0xce36,	// (0x0001ae46) popup_vitu2_query_window_g1_ParamLimits

0x5d3b,	// (0x00013d4b) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x0001d914) popup_vitu2_query_window_g_ParamLimits

0x91f5,	// (0x00017205) bg_button_pane_cp026

0x644d,	// (0x0001445d) popup_vitu2_query_input_button_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp025

0xd2fb,	// (0x0001b30b) popup_vitu2_query_button_pane_t1

0x3b51,	// (0x00011b61) main_mp3_pane_t6

0x3b5f,	// (0x00011b6f) popup_slider_window_cp01

0xc9b9,	// (0x0001a9c9) cam4_battery_pane

0xca12,	// (0x0001aa22) cam4_battery_pane_cp02

0xd11b,	// (0x0001b12b) cam4_battery_pane_cp01

0xd11b,	// (0x0001b12b) cam4_battery_pane_cp03

0x99a1,	// (0x000179b1) cam4_battery_pane_g1

0xd309,	// (0x0001b319) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x0001da18) cam4_battery_pane_g

0xbd7d,	// (0x00019d8d) popup_blid_sat_info2_window_t11

0xa53d,	// (0x0001854d) aid_size_touch_mv_arrow_left_ParamLimits

0xa566,	// (0x00018576) aid_size_touch_mv_arrow_right_ParamLimits

0xa5c4,	// (0x000185d4) navi_pane_g1_ParamLimits

0xa5d0,	// (0x000185e0) navi_pane_g2_ParamLimits

0xa5fe,	// (0x0001860e) navi_pane_g3_ParamLimits

0xf30c,	// (0x0001d31c) navi_pane_g_ParamLimits

0x28f1,	// (0x00010901) navi_pane_mv_t1_ParamLimits

0x4787,	// (0x00012797) grid_imed_effect_pane_ParamLimits

0x167a,	// (0x0000f68a) aid_placing_vt_slider_lsc

0x9cbf,	// (0x00017ccf) aid_placing_vt_slider_prt

0x9264,	// (0x00017274) bg_tb_trans_pane_cp01_ParamLimits

0xbffd,	// (0x0001a00d) popup_image_details_window_g1_ParamLimits

0xc010,	// (0x0001a020) popup_image_details_window_g2_ParamLimits

0xc025,	// (0x0001a035) popup_image_details_window_g3_ParamLimits

0xc025,	// (0x0001a035) popup_image_details_window_g3

0xf610,	// (0x0001d620) popup_image_details_window_g_ParamLimits

0xc039,	// (0x0001a049) popup_image_details_window_t1_ParamLimits

0xc04b,	// (0x0001a05b) popup_image_details_window_t2_ParamLimits

0xc064,	// (0x0001a074) popup_image_details_window_t3_ParamLimits

0xc078,	// (0x0001a088) popup_image_details_window_t4_ParamLimits

0xc093,	// (0x0001a0a3) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x0001d627) popup_image_details_window_t_ParamLimits

0x609f,	// (0x000140af) cl_header_name_pane_ParamLimits

0x609f,	// (0x000140af) cl_header_name_pane

0x6455,	// (0x00014465) cl_header_name_pane_t1_ParamLimits

0x6455,	// (0x00014465) cl_header_name_pane_t1

0x6476,	// (0x00014486) cl_header_name_pane_t2_ParamLimits

0x6476,	// (0x00014486) cl_header_name_pane_t2

0x64b8,	// (0x000144c8) cl_header_name_pane_t3_ParamLimits

0x64b8,	// (0x000144c8) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x0001da1d) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x0001da1d) cl_header_name_pane_t

0xa68d,	// (0x0001869d) navi_pane_mv_g2_ParamLimits

0xcaa1,	// (0x0001aab1) field_vitu2_entry_pane_g1_ParamLimits

0xcaad,	// (0x0001aabd) field_vitu2_entry_pane_g2_ParamLimits

0xa7bd,	// (0x000187cd) field_vitu2_entry_pane_g3_ParamLimits

0xa7bd,	// (0x000187cd) field_vitu2_entry_pane_g3

0xf80d,	// (0x0001d81d) field_vitu2_entry_pane_g_ParamLimits

0x52e6,	// (0x000132f6) cell_vitu2_itu_pane_g1_ParamLimits

0x52fe,	// (0x0001330e) cell_vitu2_itu_pane_g2_ParamLimits

0x52fe,	// (0x0001330e) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x0001d829) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x0001d829) cell_vitu2_itu_pane_g

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp05_ParamLimits

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp05

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp03

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp04

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp10_ParamLimits

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp10

0x6043,	// (0x00014053) bg_vkb2_func_pane_cp08

0x601c,	// (0x0001402c) bg_vkb2_func_pane_cp06

0x6028,	// (0x00014038) bg_vkb2_func_pane_cp07

0xd1e2,	// (0x0001b1f2) bg_vkb2_func_pane_cp11_ParamLimits

0xd1e2,	// (0x0001b1f2) bg_vkb2_func_pane_cp11

0xd1f7,	// (0x0001b207) bg_vkb2_func_pane_cp12_ParamLimits

0xd1f7,	// (0x0001b207) bg_vkb2_func_pane_cp12

0x91f5,	// (0x00017205) bg_vkb2_func_pane_cp09

0xcae8,	// (0x0001aaf8) bg_vkb2_func_pane_g1

0x9e81,	// (0x00017e91) bg_vkb2_func_pane_g2

0xcaf0,	// (0x0001ab00) bg_vkb2_func_pane_g3

0xcaf8,	// (0x0001ab08) bg_vkb2_func_pane_g4

0xcddb,	// (0x0001adeb) bg_vkb2_func_pane_g5

0xcb10,	// (0x0001ab20) bg_vkb2_func_pane_g6

0xcb18,	// (0x0001ab28) bg_vkb2_func_pane_g7

0xcb08,	// (0x0001ab18) bg_vkb2_func_pane_g8

0x9e61,	// (0x00017e71) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x0001da24) bg_vkb2_func_pane_g

0x6379,	// (0x00014389) blid2_tripm_pane_g6_ParamLimits

0x6379,	// (0x00014389) blid2_tripm_pane_g6

0xc896,	// (0x0001a8a6) mp4_progress_pane_g1

0x63f2,	// (0x00014402) blid2_tripm_values_pane_ParamLimits

0x63f2,	// (0x00014402) blid2_tripm_values_pane

0x64e9,	// (0x000144f9) blid2_tripm_values_pane_t1

0x64f7,	// (0x00014507) blid2_tripm_values_pane_t2

0x6505,	// (0x00014515) blid2_tripm_values_pane_t3

0x6513,	// (0x00014523) blid2_tripm_values_pane_t4

0x6521,	// (0x00014531) blid2_tripm_values_pane_t5

0x652f,	// (0x0001453f) blid2_tripm_values_pane_t6

0x653d,	// (0x0001454d) blid2_tripm_values_pane_t7

0x654b,	// (0x0001455b) blid2_tripm_values_pane_t8

0x6559,	// (0x00014569) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x0001da37) blid2_tripm_values_pane_t

0x16bc,	// (0x0000f6cc) call_video_pane_t1_ParamLimits

0x16da,	// (0x0000f6ea) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0001d1ca) call_video_pane_t_ParamLimits

0x2bc0,	// (0x00010bd0) msg_header_pane_g1_ParamLimits

0xa8ab,	// (0x000188bb) msg_header_pane_g2_ParamLimits

0xa8ab,	// (0x000188bb) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0001d3ba) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0001d3ba) msg_header_pane_g

0x9a19,	// (0x00017a29) main_clock2_pane_ParamLimits

0x447c,	// (0x0001248c) grid_clock2_toolbar_pane_ParamLimits

0x447c,	// (0x0001248c) grid_clock2_toolbar_pane

0x447c,	// (0x0001248c) listscroll_clock2_pane_ParamLimits

0x447c,	// (0x0001248c) listscroll_clock2_pane

0x4560,	// (0x00012570) main_clock2_pane_t3_ParamLimits

0x4560,	// (0x00012570) main_clock2_pane_t3

0x4584,	// (0x00012594) main_clock2_pane_t4_ParamLimits

0x4584,	// (0x00012594) main_clock2_pane_t4

0xd313,	// (0x0001b323) cell_clock2_toolbar_pane

0xd31b,	// (0x0001b32b) cell_clock2_toolbar_pane_cp01

0xd31b,	// (0x0001b32b) cell_clock2_toolbar_pane_cp02

0xd323,	// (0x0001b333) cell_clock2_toolbar_pane_cp03

0xd32b,	// (0x0001b33b) list_clock2_pane

0xa4b3,	// (0x000184c3) scroll_pane_cp10

0xd333,	// (0x0001b343) list_single_clock2_pane_ParamLimits

0xd333,	// (0x0001b343) list_single_clock2_pane

0x9c5e,	// (0x00017c6e) list_highlight_pane_cp08

0xd340,	// (0x0001b350) list_single_clock2_pane_t1

0xd34e,	// (0x0001b35e) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x0001da4a) list_single_clock2_pane_t

0x91f5,	// (0x00017205) bg_button_pane_cp10

0xd35c,	// (0x0001b36c) cell_clock2_toolbar_pane_g1

0x2c5f,	// (0x00010c6f) aid_main_viewer_pane_g1_ParamLimits

0x2c5f,	// (0x00010c6f) aid_main_viewer_pane_g1

0x2c6d,	// (0x00010c7d) aid_main_viewer_pane_g2_ParamLimits

0x2c6d,	// (0x00010c7d) aid_main_viewer_pane_g2

0x2c7b,	// (0x00010c8b) aid_main_viewer_pane_g3_ParamLimits

0x2c7b,	// (0x00010c8b) aid_main_viewer_pane_g3

0x2c8a,	// (0x00010c9a) aid_main_viewer_pane_g4_ParamLimits

0x2c8a,	// (0x00010c9a) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0001d3cb) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0001d3cb) aid_main_viewer_pane_g

0x352e,	// (0x0001153e) main_calc_pane_ParamLimits

0x3542,	// (0x00011552) main_dialer2_pane_ParamLimits

0x91f5,	// (0x00017205) main_cam6_pane

0x91f5,	// (0x00017205) main_vid6_pane

0x4488,	// (0x00012498) listscroll_gen_pane_cp06_ParamLimits

0x4488,	// (0x00012498) listscroll_gen_pane_cp06

0x45a7,	// (0x000125b7) main_clock2_pane_t5_ParamLimits

0x45a7,	// (0x000125b7) main_clock2_pane_t5

0x4605,	// (0x00012615) aid_call2_pane_cp10_ParamLimits

0x4617,	// (0x00012627) aid_call_pane_cp10_ParamLimits

0xa531,	// (0x00018541) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa531,	// (0x00018541) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4629,	// (0x00012639) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4629,	// (0x00012639) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa531,	// (0x00018541) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x0001d6dc) popup_clock_analogue_window_cp10_g_ParamLimits

0x463f,	// (0x0001264f) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc901,	// (0x0001a911) cell_dialer2_keypad_pane_g2_ParamLimits

0xc901,	// (0x0001a911) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x0001d7bc) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x0001d7bc) cell_dialer2_keypad_pane_g

0x99ab,	// (0x000179bb) cell_dialer2_keypad_pane_t1

0x5765,	// (0x00013775) main_cset_text2_pane_ParamLimits

0x5765,	// (0x00013775) main_cset_text2_pane

0xd022,	// (0x0001b032) area_vitu2_query_pane_g1_ParamLimits

0x5fbd,	// (0x00013fcd) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x0001d967) area_vitu2_query_pane_g_ParamLimits

0xd0a6,	// (0x0001b0b6) area_vitu2_query_pane_t7_ParamLimits

0xd0a6,	// (0x0001b0b6) area_vitu2_query_pane_t7

0x601c,	// (0x0001402c) bg_button_pane_cp018_ParamLimits

0x6028,	// (0x00014038) bg_button_pane_cp021_ParamLimits

0x6034,	// (0x00014044) bg_button_pane_cp022_ParamLimits

0x6043,	// (0x00014053) bg_vkb2_func_pane_cp08_ParamLimits

0x601c,	// (0x0001402c) bg_vkb2_func_pane_cp06_ParamLimits

0x6028,	// (0x00014038) bg_vkb2_func_pane_cp07_ParamLimits

0x6053,	// (0x00014063) input_focus_pane_cp09_ParamLimits

0x6567,	// (0x00014577) cam6_autofocus_pane_ParamLimits

0x6567,	// (0x00014577) cam6_autofocus_pane

0x6573,	// (0x00014583) cam6_image_uncrop_pane_ParamLimits

0x6573,	// (0x00014583) cam6_image_uncrop_pane

0x6583,	// (0x00014593) cam6_indi_pane_ParamLimits

0x6583,	// (0x00014593) cam6_indi_pane

0x6599,	// (0x000145a9) cam6_mode_pane_ParamLimits

0x6599,	// (0x000145a9) cam6_mode_pane

0x65ab,	// (0x000145bb) cam6_timer_pane_ParamLimits

0x65ab,	// (0x000145bb) cam6_timer_pane

0x65b7,	// (0x000145c7) cam6_zoom_pane_ParamLimits

0x65b7,	// (0x000145c7) cam6_zoom_pane

0x65c4,	// (0x000145d4) cam6_mode_pane_g1_ParamLimits

0x65c4,	// (0x000145d4) cam6_mode_pane_g1

0x65d4,	// (0x000145e4) cam6_mode_pane_g2_ParamLimits

0x65d4,	// (0x000145e4) cam6_mode_pane_g2

0x65e4,	// (0x000145f4) cam6_mode_pane_g3_ParamLimits

0x65e4,	// (0x000145f4) cam6_mode_pane_g3

0x65f4,	// (0x00014604) cam6_mode_pane_g4_ParamLimits

0x65f4,	// (0x00014604) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x0001da4f) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x0001da4f) cam6_mode_pane_g

0xbb33,	// (0x00019b43) bg_tb_trans_pane_cp08_ParamLimits

0xbb33,	// (0x00019b43) bg_tb_trans_pane_cp08

0xd372,	// (0x0001b382) cam6_battery_pane_ParamLimits

0xd372,	// (0x0001b382) cam6_battery_pane

0xd388,	// (0x0001b398) cam6_indi_pane_g1_ParamLimits

0xd388,	// (0x0001b398) cam6_indi_pane_g1

0xd39a,	// (0x0001b3aa) cam6_indi_pane_g2_ParamLimits

0xd39a,	// (0x0001b3aa) cam6_indi_pane_g2

0xd3ac,	// (0x0001b3bc) cam6_indi_pane_g3_ParamLimits

0xd3ac,	// (0x0001b3bc) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x0001da58) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x0001da58) cam6_indi_pane_g

0xd3be,	// (0x0001b3ce) cam6_indi_pane_t1_ParamLimits

0xd3be,	// (0x0001b3ce) cam6_indi_pane_t1

0x508f,	// (0x0001309f) cam6_autofocus_pane_g1

0x5097,	// (0x000130a7) cam6_autofocus_pane_g2

0x509f,	// (0x000130af) cam6_autofocus_pane_g3

0x50a7,	// (0x000130b7) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x0001da5f) cam6_autofocus_pane_g

0xd3e4,	// (0x0001b3f4) cam6_timer_pane_g1

0xd3ec,	// (0x0001b3fc) cam6_timer_pane_t1

0xd3fa,	// (0x0001b40a) cam6_zoom_cont_pane

0xd402,	// (0x0001b412) cam6_zoom_pane_g1

0xd40b,	// (0x0001b41b) cam6_zoom_pane_g2

0x6604,	// (0x00014614) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x0001da68) cam6_zoom_pane_g

0x99a1,	// (0x000179b1) cam6_battery_pane_g1

0x99a1,	// (0x000179b1) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) cam6_battery_pane_g

0xd402,	// (0x0001b412) cam6_zoom_cont_pane_g1

0xd40b,	// (0x0001b41b) cam6_zoom_cont_pane_g2

0xd414,	// (0x0001b424) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x0001da6f) cam6_zoom_cont_pane_g

0x661f,	// (0x0001462f) cam6_mode_pane_cp_ParamLimits

0x661f,	// (0x0001462f) cam6_mode_pane_cp

0x6631,	// (0x00014641) cam6_zoom_pane_cp_ParamLimits

0x6631,	// (0x00014641) cam6_zoom_pane_cp

0x663d,	// (0x0001464d) vid6_image_uncrop_cif_pane_ParamLimits

0x663d,	// (0x0001464d) vid6_image_uncrop_cif_pane

0x664d,	// (0x0001465d) vid6_image_uncrop_nhd_pane_ParamLimits

0x664d,	// (0x0001465d) vid6_image_uncrop_nhd_pane

0x665c,	// (0x0001466c) vid6_image_uncrop_vga_pane_ParamLimits

0x665c,	// (0x0001466c) vid6_image_uncrop_vga_pane

0x666b,	// (0x0001467b) vid6_image_uncrop_wvga_pane_ParamLimits

0x666b,	// (0x0001467b) vid6_image_uncrop_wvga_pane

0x667a,	// (0x0001468a) vid6_indi_pane_ParamLimits

0x667a,	// (0x0001468a) vid6_indi_pane

0xbb33,	// (0x00019b43) bg_tb_trans_pane_cp09_ParamLimits

0xbb33,	// (0x00019b43) bg_tb_trans_pane_cp09

0xd42c,	// (0x0001b43c) cam6_battery_pane_cp_ParamLimits

0xd42c,	// (0x0001b43c) cam6_battery_pane_cp

0xd438,	// (0x0001b448) vid6_indi_pane_g1_ParamLimits

0xd438,	// (0x0001b448) vid6_indi_pane_g1

0xd44a,	// (0x0001b45a) vid6_indi_pane_g2_ParamLimits

0xd44a,	// (0x0001b45a) vid6_indi_pane_g2

0xd45c,	// (0x0001b46c) vid6_indi_pane_g3_ParamLimits

0xd45c,	// (0x0001b46c) vid6_indi_pane_g3

0xd471,	// (0x0001b481) vid6_indi_pane_g4_ParamLimits

0xd471,	// (0x0001b481) vid6_indi_pane_g4

0xd486,	// (0x0001b496) vid6_indi_pane_g5_ParamLimits

0xd486,	// (0x0001b496) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x0001da76) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x0001da76) vid6_indi_pane_g

0xd4a0,	// (0x0001b4b0) vid6_indi_pane_t1_ParamLimits

0xd4a0,	// (0x0001b4b0) vid6_indi_pane_t1

0xd4b6,	// (0x0001b4c6) vid6_indi_pane_t2_ParamLimits

0xd4b6,	// (0x0001b4c6) vid6_indi_pane_t2

0xd4de,	// (0x0001b4ee) vid6_indi_pane_t3_ParamLimits

0xd4de,	// (0x0001b4ee) vid6_indi_pane_t3

0xd506,	// (0x0001b516) vid6_indi_pane_t4_ParamLimits

0xd506,	// (0x0001b516) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x0001da81) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x0001da81) vid6_indi_pane_t

0xd52a,	// (0x0001b53a) wait_bar_pane_cp08

0x6692,	// (0x000146a2) main_cset_text2_pane_t1_ParamLimits

0x6692,	// (0x000146a2) main_cset_text2_pane_t1

0x660d,	// (0x0001461d) listscroll_gen_pane_cp06_t1_ParamLimits

0x660d,	// (0x0001461d) listscroll_gen_pane_cp06_t1

0x91f5,	// (0x00017205) main_cam6_set_pane

0x995b,	// (0x0001796b) bg_tb_trans_pane_cp06_ParamLimits

0xc9c1,	// (0x0001a9d1) cam4_indicators_pane_g1_ParamLimits

0xc9d2,	// (0x0001a9e2) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x0001d7f9) cam4_indicators_pane_g_ParamLimits

0xc9f0,	// (0x0001aa00) cam4_indicators_pane_t1_ParamLimits

0x9264,	// (0x00017274) bg_tb_trans_pane_cp07_ParamLimits

0xca1c,	// (0x0001aa2c) vid4_indicators_pane_g1_ParamLimits

0xca30,	// (0x0001aa40) vid4_indicators_pane_g2_ParamLimits

0xca44,	// (0x0001aa54) vid4_indicators_pane_g3_ParamLimits

0xca55,	// (0x0001aa65) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x0001d80b) vid4_indicators_pane_g_ParamLimits

0xca73,	// (0x0001aa83) vid4_indicators_pane_t1_ParamLimits

0xd123,	// (0x0001b133) vid4_progress_pane_g1_ParamLimits

0xd133,	// (0x0001b143) vid4_progress_pane_g2_ParamLimits

0x618f,	// (0x0001419f) vid4_progress_pane_g3_ParamLimits

0xd143,	// (0x0001b153) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x0001d9b2) vid4_progress_pane_g_ParamLimits

0x61a1,	// (0x000141b1) vid4_progress_pane_t1_ParamLimits

0xd15b,	// (0x0001b16b) vid4_progress_pane_t2_ParamLimits

0xd170,	// (0x0001b180) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x0001d9bd) vid4_progress_pane_t_ParamLimits

0x61b9,	// (0x000141c9) wait_bar_pane_cp07_ParamLimits

0x66af,	// (0x000146bf) main_cam6_set_pane_g2_ParamLimits

0x66af,	// (0x000146bf) main_cam6_set_pane_g2

0x66d3,	// (0x000146e3) main_cset6_listscroll_pane_ParamLimits

0x66d3,	// (0x000146e3) main_cset6_listscroll_pane

0x66f3,	// (0x00014703) main_cset6_slider_pane_ParamLimits

0x66f3,	// (0x00014703) main_cset6_slider_pane

0x6709,	// (0x00014719) main_cset6_text2_pane_ParamLimits

0x6709,	// (0x00014719) main_cset6_text2_pane

0xd539,	// (0x0001b549) main_cset6_text_pane

0xd541,	// (0x0001b551) main_cset_list_pane_copy1_ParamLimits

0xd541,	// (0x0001b551) main_cset_list_pane_copy1

0xd551,	// (0x0001b561) scroll_pane_cp028_copy1

0x6717,	// (0x00014727) cset_list_set_pane_copy1

0x6728,	// (0x00014738) aid_position_infowindow_above_copy1

0x6730,	// (0x00014740) aid_position_infowindow_below_copy1

0x6738,	// (0x00014748) cset_list_set_pane_g1_copy1

0x6740,	// (0x00014750) cset_list_set_pane_g3_copy1_ParamLimits

0x6740,	// (0x00014750) cset_list_set_pane_g3_copy1

0x674f,	// (0x0001475f) cset_list_set_pane_t1_copy1_ParamLimits

0x674f,	// (0x0001475f) cset_list_set_pane_t1_copy1

0x9264,	// (0x00017274) list_highlight_pane_cp021_copy1_ParamLimits

0x9264,	// (0x00017274) list_highlight_pane_cp021_copy1

0xd55a,	// (0x0001b56a) cset6_slider_pane_ParamLimits

0xd55a,	// (0x0001b56a) cset6_slider_pane

0xd586,	// (0x0001b596) main_cset6_slider_pane_g1_ParamLimits

0xd586,	// (0x0001b596) main_cset6_slider_pane_g1

0x6764,	// (0x00014774) main_cset6_slider_pane_g2_ParamLimits

0x6764,	// (0x00014774) main_cset6_slider_pane_g2

0xd5ae,	// (0x0001b5be) main_cset6_slider_pane_g3_ParamLimits

0xd5ae,	// (0x0001b5be) main_cset6_slider_pane_g3

0x678c,	// (0x0001479c) main_cset6_slider_pane_g4_ParamLimits

0x678c,	// (0x0001479c) main_cset6_slider_pane_g4

0x6798,	// (0x000147a8) main_cset6_slider_pane_g5_ParamLimits

0x6798,	// (0x000147a8) main_cset6_slider_pane_g5

0xcc3d,	// (0x0001ac4d) main_cset6_slider_pane_g7_ParamLimits

0xcc3d,	// (0x0001ac4d) main_cset6_slider_pane_g7

0xcc49,	// (0x0001ac59) main_cset6_slider_pane_g8_ParamLimits

0xcc49,	// (0x0001ac59) main_cset6_slider_pane_g8

0x580b,	// (0x0001381b) main_cset6_slider_pane_g9_ParamLimits

0x580b,	// (0x0001381b) main_cset6_slider_pane_g9

0x5817,	// (0x00013827) main_cset6_slider_pane_g10_ParamLimits

0x5817,	// (0x00013827) main_cset6_slider_pane_g10

0x5823,	// (0x00013833) main_cset6_slider_pane_g11_ParamLimits

0x5823,	// (0x00013833) main_cset6_slider_pane_g11

0x582f,	// (0x0001383f) main_cset6_slider_pane_g12_ParamLimits

0x582f,	// (0x0001383f) main_cset6_slider_pane_g12

0x583b,	// (0x0001384b) main_cset6_slider_pane_g13_ParamLimits

0x583b,	// (0x0001384b) main_cset6_slider_pane_g13

0x5847,	// (0x00013857) main_cset6_slider_pane_g14_ParamLimits

0x5847,	// (0x00013857) main_cset6_slider_pane_g14

0x67a4,	// (0x000147b4) main_cset6_slider_pane_g15_ParamLimits

0x67a4,	// (0x000147b4) main_cset6_slider_pane_g15

0x586b,	// (0x0001387b) main_cset6_slider_pane_g16_ParamLimits

0x586b,	// (0x0001387b) main_cset6_slider_pane_g16

0x5877,	// (0x00013887) main_cset6_slider_pane_g17_ParamLimits

0x5877,	// (0x00013887) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x0001da8a) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x0001da8a) main_cset6_slider_pane_g

0xd5ba,	// (0x0001b5ca) main_cset6_slider_pane_t1_ParamLimits

0xd5ba,	// (0x0001b5ca) main_cset6_slider_pane_t1

0x67d4,	// (0x000147e4) main_cset6_slider_pane_t2_ParamLimits

0x67d4,	// (0x000147e4) main_cset6_slider_pane_t2

0x67ff,	// (0x0001480f) main_cset6_slider_pane_t3_ParamLimits

0x67ff,	// (0x0001480f) main_cset6_slider_pane_t3

0x682a,	// (0x0001483a) main_cset6_slider_pane_t4_ParamLimits

0x682a,	// (0x0001483a) main_cset6_slider_pane_t4

0x6855,	// (0x00014865) main_cset6_slider_pane_t5_ParamLimits

0x6855,	// (0x00014865) main_cset6_slider_pane_t5

0xd5fb,	// (0x0001b60b) main_cset6_slider_pane_t7_ParamLimits

0xd5fb,	// (0x0001b60b) main_cset6_slider_pane_t7

0x6880,	// (0x00014890) main_cset6_slider_pane_t8_ParamLimits

0x6880,	// (0x00014890) main_cset6_slider_pane_t8

0x68a4,	// (0x000148b4) main_cset6_slider_pane_t9_ParamLimits

0x68a4,	// (0x000148b4) main_cset6_slider_pane_t9

0x68c8,	// (0x000148d8) main_cset6_slider_pane_t10_ParamLimits

0x68c8,	// (0x000148d8) main_cset6_slider_pane_t10

0x68ec,	// (0x000148fc) main_cset6_slider_pane_t11_ParamLimits

0x68ec,	// (0x000148fc) main_cset6_slider_pane_t11

0xd631,	// (0x0001b641) main_cset6_slider_pane_t14_ParamLimits

0xd631,	// (0x0001b641) main_cset6_slider_pane_t14

0xd66a,	// (0x0001b67a) main_cset6_slider_pane_t15_ParamLimits

0xd66a,	// (0x0001b67a) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x0001daaf) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x0001daaf) main_cset6_slider_pane_t

0xcd73,	// (0x0001ad83) cset_slider_pane_g1_copy1

0xcd7c,	// (0x0001ad8c) cset_slider_pane_g2_copy1

0xcd85,	// (0x0001ad95) cset_slider_pane_g3_copy1

0x91f5,	// (0x00017205) bg_popup_sub_pane_cp011_copy1

0xd6a3,	// (0x0001b6b3) main_cset_text_pane_g1_copy1

0xce4a,	// (0x0001ae5a) main_cset_text_pane_t1_copy1

0xce58,	// (0x0001ae68) main_cset_text_pane_t2_copy1

0xce66,	// (0x0001ae76) main_cset_text_pane_t3_copy1

0xce74,	// (0x0001ae84) main_cset_text_pane_t4_copy1

0xce82,	// (0x0001ae92) main_cset_text_pane_t5_copy1

0xd6ab,	// (0x0001b6bb) main_cset_text_pane_t6_copy1

0xd6b9,	// (0x0001b6c9) main_cset_text_pane_t7_copy1

0x6692,	// (0x000146a2) main_cset_text2_pane_t1_copy1

0x9264,	// (0x00017274) main_ncimui_pane

0x378c,	// (0x0001179c) popup_query_ncimui_window_ParamLimits

0x378c,	// (0x0001179c) popup_query_ncimui_window

0xc134,	// (0x0001a144) field_cale_ev2_pane_g4_ParamLimits

0xc134,	// (0x0001a144) field_cale_ev2_pane_g4

0x4a05,	// (0x00012a15) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4a05,	// (0x00012a15) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x0001d793) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x0001d793) cell_video_dialer_keypad_pane_g

0x4a1d,	// (0x00012a2d) cell_video_dialer_keypad_pane_t1

0x91f5,	// (0x00017205) bg_popup_window_pane_cp012

0xa38d,	// (0x0001839d) heading_pane_cp06

0xd6e5,	// (0x0001b6f5) ncim_query_content_pane

0x91f5,	// (0x00017205) bg_popup_heading_pane_cp01

0xd6ed,	// (0x0001b6fd) ncim_heading_pane_t1

0xd6fb,	// (0x0001b70b) ncim_indicator_popup_pane

0xd70d,	// (0x0001b71d) ncim_query_button_pane

0xd721,	// (0x0001b731) ncim_query_content_pane_t1

0xd733,	// (0x0001b743) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x0001daf3) ncim_query_content_pane_t

0xd76d,	// (0x0001b77d) ncim_query_list_pane

0xd77f,	// (0x0001b78f) ncim_query_popup_pane

0xd6fb,	// (0x0001b70b) ncim_indicator_popup_pane_ParamLimits

0x6a56,	// (0x00014a66) ncim_query_content_pane_g1_ParamLimits

0x6a56,	// (0x00014a66) ncim_query_content_pane_g1

0xd721,	// (0x0001b731) ncim_query_content_pane_t1_ParamLimits

0xd733,	// (0x0001b743) ncim_query_content_pane_t2_ParamLimits

0x6a62,	// (0x00014a72) ncim_query_content_pane_t3_ParamLimits

0x6a62,	// (0x00014a72) ncim_query_content_pane_t3

0x6a8a,	// (0x00014a9a) ncim_query_content_pane_t4_ParamLimits

0x6a8a,	// (0x00014a9a) ncim_query_content_pane_t4

0x6ab2,	// (0x00014ac2) ncim_query_content_pane_t5_ParamLimits

0x6ab2,	// (0x00014ac2) ncim_query_content_pane_t5

0xd745,	// (0x0001b755) ncim_query_content_pane_t6_ParamLimits

0xd745,	// (0x0001b755) ncim_query_content_pane_t6

0xfae3,	// (0x0001daf3) ncim_query_content_pane_t_ParamLimits

0xd76d,	// (0x0001b77d) ncim_query_list_pane_ParamLimits

0xd77f,	// (0x0001b78f) ncim_query_popup_pane_ParamLimits

0xd793,	// (0x0001b7a3) wait_bar_pane_cp04

0x91f5,	// (0x00017205) input_focus_pane_cp011

0xd79b,	// (0x0001b7ab) ncim_query_popup_pane_t1

0xd7a9,	// (0x0001b7b9) ncim_list_query_list_pane_ParamLimits

0xd7a9,	// (0x0001b7b9) ncim_list_query_list_pane

0x91f5,	// (0x00017205) bg_button_pane_cp027

0xd7b6,	// (0x0001b7c6) ncim_query_button_pane_g1

0x91f5,	// (0x00017205) list_highlight_pane_cp012

0xd7c0,	// (0x0001b7d0) ncim_list_query_list_pane_g1

0xd7c8,	// (0x0001b7d8) ncim_list_query_list_pane_t1

0xc9e1,	// (0x0001a9f1) cam4_indicators_pane_g3_ParamLimits

0xc9e1,	// (0x0001a9f1) cam4_indicators_pane_g3

0xca61,	// (0x0001aa71) vid4_indicators_pane_g5_ParamLimits

0xca61,	// (0x0001aa71) vid4_indicators_pane_g5

0xd14f,	// (0x0001b15f) vid4_progress_pane_g5_ParamLimits

0xd14f,	// (0x0001b15f) vid4_progress_pane_g5

0x6941,	// (0x00014951) main_ncimui_pane_g1

0x69aa,	// (0x000149ba) ncimui_group_query_pane_ParamLimits

0x69aa,	// (0x000149ba) ncimui_group_query_pane

0x69f2,	// (0x00014a02) ncimui_list_pane_ParamLimits

0x69f2,	// (0x00014a02) ncimui_list_pane

0x6a19,	// (0x00014a29) ncimui_text_pane_ParamLimits

0x6a19,	// (0x00014a29) ncimui_text_pane

0x6ada,	// (0x00014aea) ncimui_text_pane_t1_ParamLimits

0x6ada,	// (0x00014aea) ncimui_text_pane_t1

0xd7d6,	// (0x0001b7e6) ncimui_list_single_graphic_pane_ParamLimits

0xd7d6,	// (0x0001b7e6) ncimui_list_single_graphic_pane

0x6af8,	// (0x00014b08) ncimui_query_pane_ParamLimits

0x6af8,	// (0x00014b08) ncimui_query_pane

0x91f5,	// (0x00017205) list_highlight_pane_cp013

0xd7e6,	// (0x0001b7f6) ncim_list_query_list_pane_t1_copy1

0xd7c0,	// (0x0001b7d0) ncim_list_single_graphic_pane_g1

0x6b0b,	// (0x00014b1b) ncim_query_button_pane_cp01

0x6b17,	// (0x00014b27) ncim_query_entry_pane_ParamLimits

0x6b17,	// (0x00014b27) ncim_query_entry_pane

0x6b2a,	// (0x00014b3a) ncimui_query_pane_g1

0x6b36,	// (0x00014b46) ncimui_query_pane_t1_ParamLimits

0x6b36,	// (0x00014b46) ncimui_query_pane_t1

0x9264,	// (0x00017274) input_focus_pane_cp012

0xd7f4,	// (0x0001b804) ncim_query_entry_pane_t1

0x9a19,	// (0x00017a29) main_im_pane_ParamLimits

0x9264,	// (0x00017274) main_mobtv_pane_ParamLimits

0x9264,	// (0x00017274) main_mobtv_pane

0x67bc,	// (0x000147cc) main_cset6_slider_pane_g18_ParamLimits

0x67bc,	// (0x000147cc) main_cset6_slider_pane_g18

0x67c8,	// (0x000147d8) main_cset6_slider_pane_g19_ParamLimits

0x67c8,	// (0x000147d8) main_cset6_slider_pane_g19

0x9977,	// (0x00017987) bg_main_mobtv_pane_ParamLimits

0x9977,	// (0x00017987) bg_main_mobtv_pane

0x6b4f,	// (0x00014b5f) main_mobtv_info_pane

0x6b58,	// (0x00014b68) main_mobtv_loading_pane_ParamLimits

0x6b58,	// (0x00014b68) main_mobtv_loading_pane

0xd806,	// (0x0001b816) main_mobtv_pg_channel_list_pane

0xd810,	// (0x0001b820) main_mobtv_pg_hdr_pane

0x6b65,	// (0x00014b75) main_mobtv_programe_curr_pane_ParamLimits

0x6b65,	// (0x00014b75) main_mobtv_programe_curr_pane

0x6b72,	// (0x00014b82) main_mobtv_programe_next_pane_ParamLimits

0x6b72,	// (0x00014b82) main_mobtv_programe_next_pane

0xd819,	// (0x0001b829) popup_mobtv_noti_window

0x99a1,	// (0x000179b1) main_tv_pg_hdr_pane_g1

0xd821,	// (0x0001b831) main_tv_pg_hdr_pane_g2

0xd829,	// (0x0001b839) main_tv_pg_hdr_pane_g3

0xd831,	// (0x0001b841) main_tv_pg_hdr_pane_g4

0xd839,	// (0x0001b849) main_tv_pg_hdr_pane_g5

0xd843,	// (0x0001b853) main_tv_pg_hdr_pane_g6

0xd84d,	// (0x0001b85d) main_tv_pg_hdr_pane_g7

0xd857,	// (0x0001b867) main_tv_pg_hdr_pane_g8

0xd861,	// (0x0001b871) main_tv_pg_hdr_pane_g9

0xd86b,	// (0x0001b87b) main_tv_pg_hdr_pane_g10

0xd875,	// (0x0001b885) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x0001db00) main_tv_pg_hdr_pane_g

0xd87f,	// (0x0001b88f) main_tv_pg_hdr_pane_t1

0xd88d,	// (0x0001b89d) main_tv_pg_hdr_pane_t2

0xd89b,	// (0x0001b8ab) main_tv_pg_hdr_pane_t3

0xd8ab,	// (0x0001b8bb) main_tv_pg_hdr_pane_t4

0xd8bb,	// (0x0001b8cb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x0001db17) main_tv_pg_hdr_pane_t

0xd8cb,	// (0x0001b8db) single_mobtv_pg_channel_pane_ParamLimits

0xd8cb,	// (0x0001b8db) single_mobtv_pg_channel_pane

0xd8dd,	// (0x0001b8ed) single_mobtv_pg_channel_table_pane

0xd8e6,	// (0x0001b8f6) single_mobtv_pg_channel_thumb_pane

0xd8ef,	// (0x0001b8ff) single_tv_pg_channel_pane_g1

0xd8f8,	// (0x0001b908) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x0001db22) single_tv_pg_channel_pane_g

0x995b,	// (0x0001796b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x995b,	// (0x0001796b) bg_single_mobtv_pg_channel_thumb_pane

0xd901,	// (0x0001b911) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd901,	// (0x0001b911) single_mobtv_pg_channel_thumb_pane_g1

0xd90f,	// (0x0001b91f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd90f,	// (0x0001b91f) single_mobtv_pg_channel_thumb_pane_g2

0xd91b,	// (0x0001b92b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd91b,	// (0x0001b92b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x0001db27) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x0001db27) single_mobtv_pg_channel_thumb_pane_g

0xd927,	// (0x0001b937) single_mobtv_pg_channel_thumb_pane_t1

0xd935,	// (0x0001b945) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x0001db2e) single_mobtv_pg_channel_thumb_pane_t

0x99a1,	// (0x000179b1) bg_single_mobtv_pg_channel_table_pane_g1

0x99a1,	// (0x000179b1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0001d09c) bg_single_mobtv_pg_channel_table_pane_g

0xd943,	// (0x0001b953) single_mobtv_pg_channel_table_pane_t1

0xd951,	// (0x0001b961) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x0001db33) single_mobtv_pg_channel_table_pane_t

0x6b87,	// (0x00014b97) main_mobtv_info_pane_g1_ParamLimits

0x6b87,	// (0x00014b97) main_mobtv_info_pane_g1

0x6ba5,	// (0x00014bb5) main_mobtv_info_pane_t1_ParamLimits

0x6ba5,	// (0x00014bb5) main_mobtv_info_pane_t1

0x6c1d,	// (0x00014c2d) main_mobtv_info_pane_t2_ParamLimits

0x6c1d,	// (0x00014c2d) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x0001db3d) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x0001db3d) main_mobtv_info_pane_t

0x6cac,	// (0x00014cbc) wait_bar_pane_cp05

0x6cbe,	// (0x00014cce) main_mobtv_loading_pane_g1_ParamLimits

0x6cbe,	// (0x00014cce) main_mobtv_loading_pane_g1

0x6cd1,	// (0x00014ce1) main_mobtv_loading_pane_g2_ParamLimits

0x6cd1,	// (0x00014ce1) main_mobtv_loading_pane_g2

0x6cdd,	// (0x00014ced) main_mobtv_loading_pane_g3_ParamLimits

0x6cdd,	// (0x00014ced) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x0001db44) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x0001db44) main_mobtv_loading_pane_g

0xd95f,	// (0x0001b96f) main_mobtv_loading_pane_t1_ParamLimits

0xd95f,	// (0x0001b96f) main_mobtv_loading_pane_t1

0xd977,	// (0x0001b987) main_mobtv_loading_pane_t2_ParamLimits

0xd977,	// (0x0001b987) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x0001db4b) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x0001db4b) main_mobtv_loading_pane_t

0x6cf0,	// (0x00014d00) wait_bar_pane_cp06_ParamLimits

0x6cf0,	// (0x00014d00) wait_bar_pane_cp06

0xd99b,	// (0x0001b9ab) main_mobtv_programe_curr_pane_t1

0xd9a9,	// (0x0001b9b9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x0001db50) main_mobtv_programe_curr_pane_t

0xd9b7,	// (0x0001b9c7) main_mobtv_programe_next_pane_t1

0xd9c5,	// (0x0001b9d5) main_mobtv_programe_next_pane_t2

0xd9d3,	// (0x0001b9e3) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x0001db55) main_mobtv_programe_next_pane_t

0x91f5,	// (0x00017205) bg_popup_mobtv_noti_window_pane

0xd9e1,	// (0x0001b9f1) popup_mobtv_noti_window_g1

0xd9e9,	// (0x0001b9f9) popup_mobtv_noti_window_t1

0xd9f7,	// (0x0001ba07) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x0001db5c) popup_mobtv_noti_window_t

0x99a1,	// (0x000179b1) bg_popup_mobtv_noti_window_pane_g1

0x91f5,	// (0x00017205) sc_clock_pane

0x91f5,	// (0x00017205) main_fs_bigclock_pane

0x63dc,	// (0x000143ec) blid2_tripm_pane_t4_ParamLimits

0x63dc,	// (0x000143ec) blid2_tripm_pane_t4

0x995b,	// (0x0001796b) sc_clock_pane_g1_ParamLimits

0x995b,	// (0x0001796b) sc_clock_pane_g1

0x99ab,	// (0x000179bb) sc_clock_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) sc_clock_pane_t1

0x99ab,	// (0x000179bb) sc_clock_pane_t2_ParamLimits

0x99ab,	// (0x000179bb) sc_clock_pane_t2

0x99ab,	// (0x000179bb) sc_clock_pane_t3_ParamLimits

0x99ab,	// (0x000179bb) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x0001db61) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x0001db61) sc_clock_pane_t

0x77bb,	// (0x000157cb) main_fs_bigclock_indicator_pane_ParamLimits

0x77bb,	// (0x000157cb) main_fs_bigclock_indicator_pane

0x6d4e,	// (0x00014d5e) main_fs_bigclock_pane_g1_ParamLimits

0x6d4e,	// (0x00014d5e) main_fs_bigclock_pane_g1

0x77c7,	// (0x000157d7) main_fs_bigclock_pane_t1_ParamLimits

0x77c7,	// (0x000157d7) main_fs_bigclock_pane_t1

0x77d9,	// (0x000157e9) main_fs_bigclock_pane_t2_ParamLimits

0x77d9,	// (0x000157e9) main_fs_bigclock_pane_t2

0x77ed,	// (0x000157fd) main_fs_bigclock_pane_t3_ParamLimits

0x77ed,	// (0x000157fd) main_fs_bigclock_pane_t3

0x0002,

0xfccf,	// (0x0001dcdf) main_fs_bigclock_pane_t_ParamLimits

0xfccf,	// (0x0001dcdf) main_fs_bigclock_pane_t

0xe56a,	// (0x0001c57a) main_fs_bigclock_indicator_pane_g1

0xd715,	// (0x0001b725) ncim_query_content_pane_g2_ParamLimits

0xd715,	// (0x0001b725) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x0001daee) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x0001daee) ncim_query_content_pane_g

0x99ab,	// (0x000179bb) sc_clock_pane_t4_ParamLimits

0x99ab,	// (0x000179bb) sc_clock_pane_t4

0x9264,	// (0x00017274) main_radioblah_pane

0xc94f,	// (0x0001a95f) cell_call4_button_pane_t1_copy1_ParamLimits

0xc94f,	// (0x0001a95f) cell_call4_button_pane_t1_copy1

0x6959,	// (0x00014969) main_ncimui_pane_t1_ParamLimits

0x6959,	// (0x00014969) main_ncimui_pane_t1

0x6973,	// (0x00014983) main_ncimui_pane_t2_ParamLimits

0x6973,	// (0x00014983) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x0001dae7) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x0001dae7) main_ncimui_pane_t

0xa7df,	// (0x000187ef) main_radioblah_anim_pane_ParamLimits

0xa7df,	// (0x000187ef) main_radioblah_anim_pane

0xa7df,	// (0x000187ef) main_radioblah_info_pane_ParamLimits

0xa7df,	// (0x000187ef) main_radioblah_info_pane

0xa7cb,	// (0x000187db) main_radioblah_pane_t1_ParamLimits

0xa7cb,	// (0x000187db) main_radioblah_pane_t1

0xa7cb,	// (0x000187db) main_radioblah_pane_t2_ParamLimits

0xa7cb,	// (0x000187db) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x0001db82) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x0001db82) main_radioblah_pane_t

0x9264,	// (0x00017274) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9264,	// (0x00017274) main_radioblah_rocker_ctrl_pane

0xbb1f,	// (0x00019b2f) main_radioblah_info_pane_t1_ParamLimits

0xbb1f,	// (0x00019b2f) main_radioblah_info_pane_t1

0xdb6c,	// (0x0001bb7c) main_radioblah_info_pane_t2_ParamLimits

0xdb6c,	// (0x0001bb7c) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x0001db8b) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x0001db8b) main_radioblah_info_pane_t

0x99a1,	// (0x000179b1) main_radioblah_rocker_ctrl_pane_g1

0x99a1,	// (0x000179b1) main_radioblah_rocker_ctrl_pane_g2

0x99a1,	// (0x000179b1) main_radioblah_rocker_ctrl_pane_g3

0x99a1,	// (0x000179b1) main_radioblah_rocker_ctrl_pane_g4

0x99a1,	// (0x000179b1) main_radioblah_rocker_ctrl_pane_g5

0x99a1,	// (0x000179b1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x0001db94) main_radioblah_rocker_ctrl_pane_g

0x6692,	// (0x000146a2) main_cset_text2_pane_t1_copy1_ParamLimits

0xc9b1,	// (0x0001a9c1) cam4_image_uncrop_qvga_pane

0xca0a,	// (0x0001aa1a) vid4_image_uncrop_qcif_pane

0xd364,	// (0x0001b374) cam6_image_uncrop_qvga_pane_ParamLimits

0xd364,	// (0x0001b374) cam6_image_uncrop_qvga_pane

0xd41c,	// (0x0001b42c) vid6_image_uncrop_qcif_pane_ParamLimits

0xd41c,	// (0x0001b42c) vid6_image_uncrop_qcif_pane

0x91f5,	// (0x00017205) bg_popup_preview_window_pane_cp03

0xd6c7,	// (0x0001b6d7) list_cset_text2_pane

0xd6cf,	// (0x0001b6df) main_cset6_text2_pane_g1

0xd6d7,	// (0x0001b6e7) main_cset6_text2_pane_t1

0x6d9b,	// (0x00014dab) list_cset_text2_pane_t1_ParamLimits

0x6d9b,	// (0x00014dab) list_cset_text2_pane_t1

0x9264,	// (0x00017274) main_radioblah_pane_ParamLimits

0x6c98,	// (0x00014ca8) main_mobtv_info_pane_t3_ParamLimits

0x6c98,	// (0x00014ca8) main_mobtv_info_pane_t3

0xa7bd,	// (0x000187cd) main_radioblah_pane_g1

0xdb3c,	// (0x0001bb4c) main_radioblah_info_pane_g1

0x99bf,	// (0x000179cf) main_radioblah_info_pane_t3_ParamLimits

0x99bf,	// (0x000179cf) main_radioblah_info_pane_t3

0x252d,	// (0x0001053d) highlight_cell_cale_month_pane_ParamLimits

0x252d,	// (0x0001053d) highlight_cell_cale_month_pane

0x91f5,	// (0x00017205) main_phob_fisheye_pane

0xc1b9,	// (0x0001a1c9) scroll_pane_cp0031_ParamLimits

0xc1b9,	// (0x0001a1c9) scroll_pane_cp0031

0xd52a,	// (0x0001b53a) wait_bar_pane_cp08_ParamLimits

0x6717,	// (0x00014727) cset_list_set_pane_copy1_ParamLimits

0xdbbb,	// (0x0001bbcb) highlight_cell_cale_month_pane_g1

0x6db4,	// (0x00014dc4) highlight_cell_cale_month_pane_t1

0xd112,	// (0x0001b122) list_gen_pane_cp01

0xcc28,	// (0x0001ac38) scroll_pane_01

0x6dc2,	// (0x00014dd2) list_single_double_fisheye_pane

0x6dcb,	// (0x00014ddb) list_double_fisheye_pane_g1_ParamLimits

0x6dcb,	// (0x00014ddb) list_double_fisheye_pane_g1

0x6dd7,	// (0x00014de7) list_double_fisheye_pane_g2_ParamLimits

0x6dd7,	// (0x00014de7) list_double_fisheye_pane_g2

0x6deb,	// (0x00014dfb) list_double_fisheye_pane_g3_ParamLimits

0x6deb,	// (0x00014dfb) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x0001dba1) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x0001dba1) list_double_fisheye_pane_g

0x6e14,	// (0x00014e24) list_double_fisheye_pane_t1_ParamLimits

0x6e14,	// (0x00014e24) list_double_fisheye_pane_t1

0x6e2f,	// (0x00014e3f) list_double_fisheye_pane_t2_ParamLimits

0x6e2f,	// (0x00014e3f) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x0001dbac) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x0001dbac) list_double_fisheye_pane_t

0x91f5,	// (0x00017205) main_call5_pane

0x9264,	// (0x00017274) sc_swipe_pane_ParamLimits

0x9264,	// (0x00017274) sc_swipe_pane

0x6e64,	// (0x00014e74) call5_image_pane_ParamLimits

0x6e64,	// (0x00014e74) call5_image_pane

0x6e81,	// (0x00014e91) call5_swipe_1_pane_ParamLimits

0x6e81,	// (0x00014e91) call5_swipe_1_pane

0x6e94,	// (0x00014ea4) call5_swipe_2_pane_ParamLimits

0x6e94,	// (0x00014ea4) call5_swipe_2_pane

0x6ebf,	// (0x00014ecf) popup_call5_audio_first_window_ParamLimits

0x6ebf,	// (0x00014ecf) popup_call5_audio_first_window

0x995b,	// (0x0001796b) call5_swipe_1_pane_g1_ParamLimits

0x995b,	// (0x0001796b) call5_swipe_1_pane_g1

0xdbc3,	// (0x0001bbd3) call5_swipe_1_pane_g2_ParamLimits

0xdbc3,	// (0x0001bbd3) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x0001dbb1) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x0001dbb1) call5_swipe_1_pane_g

0xdbcf,	// (0x0001bbdf) call5_swipe_1_pane_t1_ParamLimits

0xdbcf,	// (0x0001bbdf) call5_swipe_1_pane_t1

0x995b,	// (0x0001796b) call5_swipe_2_pane_g1_ParamLimits

0x995b,	// (0x0001796b) call5_swipe_2_pane_g1

0xdbe4,	// (0x0001bbf4) call5_swipe_2_pane_g2_ParamLimits

0xdbe4,	// (0x0001bbf4) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x0001dbb6) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x0001dbb6) call5_swipe_2_pane_g

0xdbf0,	// (0x0001bc00) call5_swipe_2_pane_t1_ParamLimits

0xdbf0,	// (0x0001bc00) call5_swipe_2_pane_t1

0x995b,	// (0x0001796b) sc_swipe_pane_g1_ParamLimits

0x995b,	// (0x0001796b) sc_swipe_pane_g1

0x9969,	// (0x00017979) sc_swipe_pane_g2_ParamLimits

0x9969,	// (0x00017979) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x0001d72f) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x0001d72f) sc_swipe_pane_g

0x99ab,	// (0x000179bb) sc_swipe_pane_t1_ParamLimits

0x99ab,	// (0x000179bb) sc_swipe_pane_t1

0x91f5,	// (0x00017205) main_cmail_launcher_pane

0x6ed0,	// (0x00014ee0) aid_size_cell_cmail_l_ParamLimits

0x6ed0,	// (0x00014ee0) aid_size_cell_cmail_l

0x6ede,	// (0x00014eee) grid_cmail_l_pane_ParamLimits

0x6ede,	// (0x00014eee) grid_cmail_l_pane

0x6ef8,	// (0x00014f08) cell_cmail_l_pane_ParamLimits

0x6ef8,	// (0x00014f08) cell_cmail_l_pane

0xdc05,	// (0x0001bc15) cell_cmail_l_pane_g1_ParamLimits

0xdc05,	// (0x0001bc15) cell_cmail_l_pane_g1

0xdc11,	// (0x0001bc21) cell_cmail_l_pane_t1_ParamLimits

0xdc11,	// (0x0001bc21) cell_cmail_l_pane_t1

0xdc27,	// (0x0001bc37) cell_cmail_l_pane_t2_ParamLimits

0xdc27,	// (0x0001bc37) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x0001dbbb) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x0001dbbb) cell_cmail_l_pane_t

0x9264,	// (0x00017274) grid_highlight_pane_cp018_ParamLimits

0x9264,	// (0x00017274) grid_highlight_pane_cp018

0x0a7c,	// (0x0000ea8c) main2_pane_ParamLimits

0x0a7c,	// (0x0000ea8c) main2_pane

0x9ad5,	// (0x00017ae5) popup_sp_fs_action_menu_bg_pane_g1

0x9add,	// (0x00017aed) popup_sp_fs_action_menu_bg_pane_g2

0x9ae5,	// (0x00017af5) popup_sp_fs_action_menu_bg_pane_g3

0x9aed,	// (0x00017afd) popup_sp_fs_action_menu_bg_pane_g4

0x9af5,	// (0x00017b05) popup_sp_fs_action_menu_bg_pane_g5

0x9afd,	// (0x00017b0d) popup_sp_fs_action_menu_bg_pane_g6

0x9b05,	// (0x00017b15) popup_sp_fs_action_menu_bg_pane_g7

0x9b0d,	// (0x00017b1d) popup_sp_fs_action_menu_bg_pane_g8

0x9b15,	// (0x00017b25) popup_sp_fs_action_menu_bg_pane_g9

0x9b1d,	// (0x00017b2d) popup_sp_fs_action_menu_bg_pane_g10

0x9b1d,	// (0x00017b2d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0001d0ed) popup_sp_fs_action_menu_bg_pane_g

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g3_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g3_g2

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0001d19b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0001d19b) list_medium_line_x2_t3_g3_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g3_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g3_t2

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0001d1a2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0001d1a2) list_medium_line_x2_t3_g3_t

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g2_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_x2_t3_g2_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g2_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g2_t2

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0001d1a2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0001d1a2) list_medium_line_x2_t3_g2_t

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g2

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g3

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0001d1ae) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0001d1ae) list_medium_line_x2_t4_g4_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t2

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t3

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001d1b7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001d1b7) list_medium_line_x2_t4_g4_t

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g2

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g3

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0001d1ae) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0001d1ae) list_medium_line_x2_t2_g4_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g4_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0001d17e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0001d17e) list_medium_line_x2_t2_g4_t

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g3_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g3_g2

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0001d19b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0001d19b) list_medium_line_x2_t2_g3_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g3_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0001d17e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0001d17e) list_medium_line_x2_t2_g3_t

0x267f,	// (0x0001068f) main_sp_fs_list_pane_ParamLimits

0x267f,	// (0x0001068f) main_sp_fs_list_pane

0xcc61,	// (0x0001ac71) sp_fs_scroll_pane_ParamLimits

0xcc61,	// (0x0001ac71) sp_fs_scroll_pane

0xa193,	// (0x000181a3) list_medium_line_x2_t3_t1

0xa193,	// (0x000181a3) list_medium_line_x2_t3_t2

0xa193,	// (0x000181a3) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x0001d264) list_medium_line_x2_t3_t

0xa193,	// (0x000181a3) list_medium_line_x3_t4_t1

0xa193,	// (0x000181a3) list_medium_line_x3_t4_t2

0xa193,	// (0x000181a3) list_medium_line_x3_t4_t3

0xa193,	// (0x000181a3) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0001d26b) list_medium_line_x3_t4_t

0xa193,	// (0x000181a3) list_medium_line_x4_t5_t1

0xa193,	// (0x000181a3) list_medium_line_x4_t5_t2

0xa193,	// (0x000181a3) list_medium_line_x4_t5_t3

0xa193,	// (0x000181a3) list_medium_line_x4_t5_t4

0xa193,	// (0x000181a3) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0001d274) list_medium_line_x4_t5_t

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g1

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g2

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g3

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g4_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0001d1ae) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0001d1ae) list_medium_line_t4_g4_g

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t1

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t2

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t3

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t4_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001d1b7) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001d1b7) list_medium_line_t4_g4_t

0x271a,	// (0x0001072a) chi_dic_find_pane_g1

0x3556,	// (0x00011566) main_tport_pane

0xa193,	// (0x000181a3) list_medium_line_plain_t1

0x995b,	// (0x0001796b) list_medium_line_t2_g2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t2_g2_g1

0x995b,	// (0x0001796b) list_medium_line_t2_g2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_t2_g2_g

0x99ab,	// (0x000179bb) list_medium_line_t2_g2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t2_g2_t1

0x99ab,	// (0x000179bb) list_medium_line_t2_g2_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0001d17e) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0001d17e) list_medium_line_t2_g2_t

0xd185,	// (0x0001b195) aid_sp_fs_list_icon_a_sm

0xd18d,	// (0x0001b19d) aid_sp_fs_list_icon_d

0xd195,	// (0x0001b1a5) aid_sp_fs_text_primary

0xd19e,	// (0x0001b1ae) aid_sp_fs_text_secondary

0x91f5,	// (0x00017205) list_medium_line

0x91f5,	// (0x00017205) list_medium_line_g2

0x91f5,	// (0x00017205) list_medium_line_g3

0x91f5,	// (0x00017205) list_medium_line_plain

0x91f5,	// (0x00017205) list_medium_line_plain_t2

0x91f5,	// (0x00017205) list_medium_line_plain_t3

0x91f5,	// (0x00017205) list_medium_line_right_icon

0x91f5,	// (0x00017205) list_medium_line_right_iconx2

0x91f5,	// (0x00017205) list_medium_line_t2

0x91f5,	// (0x00017205) list_medium_line_t2_g2

0x91f5,	// (0x00017205) list_medium_line_t2_g3

0x91f5,	// (0x00017205) list_medium_line_t2_right_icon

0x91f5,	// (0x00017205) list_medium_line_t2_right_iconx2

0x91f5,	// (0x00017205) list_medium_line_t3

0x91f5,	// (0x00017205) list_medium_line_t3_g2

0x91f5,	// (0x00017205) list_medium_line_t3_g3

0x91f5,	// (0x00017205) list_medium_line_t3_right_iconx2

0x91f5,	// (0x00017205) list_medium_line_t4_g4

0x91f5,	// (0x00017205) list_medium_line_x2

0x91f5,	// (0x00017205) list_medium_line_x2_t2_g2

0x91f5,	// (0x00017205) list_medium_line_x2_t2_g3

0x91f5,	// (0x00017205) list_medium_line_x2_t2_g4

0x91f5,	// (0x00017205) list_medium_line_x2_t3

0x91f5,	// (0x00017205) list_medium_line_x2_t3_g2

0x91f5,	// (0x00017205) list_medium_line_x2_t3_g3

0x91f5,	// (0x00017205) list_medium_line_x2_t3_g4

0x91f5,	// (0x00017205) list_medium_line_x2_t4_g2

0x91f5,	// (0x00017205) list_medium_line_x2_t4_g4

0x91f5,	// (0x00017205) list_medium_line_x3

0x91f5,	// (0x00017205) list_medium_line_x3_t4

0x91f5,	// (0x00017205) list_medium_line_x3_t4_g4

0x91f5,	// (0x00017205) list_medium_line_x4_t4

0x91f5,	// (0x00017205) list_medium_line_x4_t4_g7

0x91f5,	// (0x00017205) list_medium_line_x4_t5

0x61cc,	// (0x000141dc) list_single_fs_dyc_pane_ParamLimits

0x61cc,	// (0x000141dc) list_single_fs_dyc_pane

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g1

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g2

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g3

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g4

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g5

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x4_t4_g7_g6

0x9969,	// (0x00017979) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9969,	// (0x00017979) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x0001dac8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x0001dac8) list_medium_line_x4_t4_g7_g

0x99ab,	// (0x000179bb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x4_t4_g7_t1

0x99ab,	// (0x000179bb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x4_t4_g7_t2

0x99ab,	// (0x000179bb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x4_t4_g7_t3

0x99bf,	// (0x000179cf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x99bf,	// (0x000179cf) list_medium_line_x4_t4_g7_t4

0x99bf,	// (0x000179cf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x99bf,	// (0x000179cf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x0001dad7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x0001dad7) list_medium_line_x4_t4_g7_t

0x6910,	// (0x00014920) list_single_dyc_row_pane_ParamLimits

0x6910,	// (0x00014920) list_single_dyc_row_pane

0x6e51,	// (0x00014e61) call5_gesture_pane_ParamLimits

0x6e51,	// (0x00014e61) call5_gesture_pane

0x6ea7,	// (0x00014eb7) call5_windows_pane_ParamLimits

0x6ea7,	// (0x00014eb7) call5_windows_pane

0x6f12,	// (0x00014f22) call5_swipe_1_pane_cp_ParamLimits

0x6f12,	// (0x00014f22) call5_swipe_1_pane_cp

0x6f1e,	// (0x00014f2e) call5_swipe_2_pane_cp_ParamLimits

0x6f1e,	// (0x00014f2e) call5_swipe_2_pane_cp

0x9c5e,	// (0x00017c6e) call5_image_pane_cp

0x6f2a,	// (0x00014f3a) popup_call5_audio_first_window_cp_ParamLimits

0x6f2a,	// (0x00014f3a) popup_call5_audio_first_window_cp

0xdc44,	// (0x0001bc54) call5_swipe_1_pane_g1_cp_ParamLimits

0xdc44,	// (0x0001bc54) call5_swipe_1_pane_g1_cp

0xdc51,	// (0x0001bc61) call5_swipe_1_pane_g2_cp

0xdc59,	// (0x0001bc69) call5_swipe_1_pane_t1_cp_ParamLimits

0xdc59,	// (0x0001bc69) call5_swipe_1_pane_t1_cp

0xdc44,	// (0x0001bc54) call5_swipe_2_pane_g1_cp_ParamLimits

0xdc44,	// (0x0001bc54) call5_swipe_2_pane_g1_cp

0xdc6e,	// (0x0001bc7e) call5_swipe_2_pane_g2_cp

0xdc76,	// (0x0001bc86) call5_swipe_2_pane_t1_cp_ParamLimits

0xdc76,	// (0x0001bc86) call5_swipe_2_pane_t1_cp

0x9264,	// (0x00017274) main_sp_fs_email_pane

0xdc8b,	// (0x0001bc9b) main_sp_fs_listscroll_pane_te

0xdc94,	// (0x0001bca4) popup_sp_fs_action_menu_pane_ParamLimits

0xdc94,	// (0x0001bca4) popup_sp_fs_action_menu_pane

0x99a1,	// (0x000179b1) bg_sp_fs_ctrlbar_pane_g1

0xdcd8,	// (0x0001bce8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdce1,	// (0x0001bcf1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdcea,	// (0x0001bcfa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x99a1,	// (0x000179b1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x0001dbc0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbb41,	// (0x00019b51) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbb41,	// (0x00019b51) bg_sp_fs_ctrlbar_ddmenu_pane

0xdcf3,	// (0x0001bd03) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdcf3,	// (0x0001bd03) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdcff,	// (0x0001bd0f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdcff,	// (0x0001bd0f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x0001dbc9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x0001dbc9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdd0b,	// (0x0001bd1b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdd0b,	// (0x0001bd1b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x99a1,	// (0x000179b1) list_medium_line_t2_right_icon_g1

0xa193,	// (0x000181a3) list_medium_line_t2_right_icon_t1

0xa193,	// (0x000181a3) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x0001dbce) list_medium_line_t2_right_icon_t

0xa7df,	// (0x000187ef) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa7df,	// (0x000187ef) bg_sp_fs_ctrlbar_pane

0x6f80,	// (0x00014f90) main_sp_fs_ctrlbar_button_pane_cp01

0x6f8a,	// (0x00014f9a) main_sp_fs_ctrlbar_ddmenu_pane

0xdd5d,	// (0x0001bd6d) main_sp_fs_ctrlbar_pane_g1

0xdd69,	// (0x0001bd79) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x0001dbd3) main_sp_fs_ctrlbar_pane_g

0x6fc8,	// (0x00014fd8) main_sp_fs_ctrlbar_pane_t1

0x7007,	// (0x00015017) main_sp_fs_ctrlbar_pane

0x702b,	// (0x0001503b) main_sp_fs_listscroll_pane_te_cp01

0x7055,	// (0x00015065) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7055,	// (0x00015065) popup_sp_fs_action_menu_pane_cp01

0x9264,	// (0x00017274) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9264,	// (0x00017274) bg_sp_fs_highlight_list_pane_cp01

0xdd90,	// (0x0001bda0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdd90,	// (0x0001bda0) sp_fs_action_menu_list_gene_pane_g1

0xdd9f,	// (0x0001bdaf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdd9f,	// (0x0001bdaf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x0001dbe1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x0001dbe1) sp_fs_action_menu_list_gene_pane_g

0xddac,	// (0x0001bdbc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xddac,	// (0x0001bdbc) sp_fs_action_menu_list_gene_pane_t1

0xddc4,	// (0x0001bdd4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xddc4,	// (0x0001bdd4) sp_fs_action_menu_list_gene_pane

0xdde3,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdde3,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane

0xddf1,	// (0x0001be01) sp_fs_action_menu_list_pane_ParamLimits

0xddf1,	// (0x0001be01) sp_fs_action_menu_list_pane

0xde11,	// (0x0001be21) sp_fs_scroll_pane_cp01_ParamLimits

0xde11,	// (0x0001be21) sp_fs_scroll_pane_cp01

0xa193,	// (0x000181a3) list_medium_line_plain_t2_t1

0xa193,	// (0x000181a3) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x0001dbce) list_medium_line_plain_t2_t

0xa193,	// (0x000181a3) list_medium_line_plain_t3_t1

0xa193,	// (0x000181a3) list_medium_line_plain_t3_t2

0xa193,	// (0x000181a3) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x0001d264) list_medium_line_plain_t3_t

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g2_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_x2_t2_g2_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g2_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0001d17e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0001d17e) list_medium_line_x2_t2_g2_t

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g2_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_x2_t4_g2_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t2

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t3

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0001d1b7) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0001d1b7) list_medium_line_x2_t4_g2_t

0x99a1,	// (0x000179b1) list_medium_line_t3_right_iconx2_g1

0x99a1,	// (0x000179b1) list_medium_line_t3_right_iconx2_g2

0x99a1,	// (0x000179b1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x0001d380) list_medium_line_t3_right_iconx2_g

0xa193,	// (0x000181a3) list_medium_line_t3_right_iconx2_t1

0xa193,	// (0x000181a3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0001dbce) list_medium_line_t3_right_iconx2_t

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g1

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g2

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g3

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0001d1ae) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0001d1ae) list_medium_line_x3_t4_g4_g

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t1

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t2

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t3

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001d1b7) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001d1b7) list_medium_line_x3_t4_g4_t

0x707a,	// (0x0001508a) list_single_dyc_row_text_pane_t1_ParamLimits

0x707a,	// (0x0001508a) list_single_dyc_row_text_pane_t1

0x70c3,	// (0x000150d3) list_single_dyc_row_text_pane_t2_ParamLimits

0x70c3,	// (0x000150d3) list_single_dyc_row_text_pane_t2

0xde37,	// (0x0001be47) list_single_dyc_row_text_pane_t3_ParamLimits

0xde37,	// (0x0001be47) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x0001dbe6) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x0001dbe6) list_single_dyc_row_text_pane_t

0xde5b,	// (0x0001be6b) list_single_dyc_row_pane_g1_ParamLimits

0xde5b,	// (0x0001be6b) list_single_dyc_row_pane_g1

0xde67,	// (0x0001be77) list_single_dyc_row_pane_g2_ParamLimits

0xde67,	// (0x0001be77) list_single_dyc_row_pane_g2

0xde73,	// (0x0001be83) list_single_dyc_row_pane_g3_ParamLimits

0xde73,	// (0x0001be83) list_single_dyc_row_pane_g3

0xde86,	// (0x0001be96) list_single_dyc_row_pane_g4_ParamLimits

0xde86,	// (0x0001be96) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x0001dbf3) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x0001dbf3) list_single_dyc_row_pane_g

0xded8,	// (0x0001bee8) list_single_dyc_row_text_pane_ParamLimits

0xded8,	// (0x0001bee8) list_single_dyc_row_text_pane

0x91f5,	// (0x00017205) bg_sp_fs_scroll_pane

0xdefd,	// (0x0001bf0d) thumb_sp_fs_scroll_pane

0x995b,	// (0x0001796b) list_medium_line_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_g1

0x99ab,	// (0x000179bb) list_medium_line_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t1

0x995b,	// (0x0001796b) list_medium_line_x2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_g1

0x995b,	// (0x0001796b) list_medium_line_x2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_x2_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t1

0x995b,	// (0x0001796b) list_medium_line_x3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x3_g1

0xdf06,	// (0x0001bf16) list_medium_line_x3_g2_ParamLimits

0xdf06,	// (0x0001bf16) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x0001dc02) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x0001dc02) list_medium_line_x3_g

0xdf14,	// (0x0001bf24) list_medium_line_x3_t1_ParamLimits

0xdf14,	// (0x0001bf24) list_medium_line_x3_t1

0xdf28,	// (0x0001bf38) thumb_sp_fs_scroll_pane_g1

0xdf31,	// (0x0001bf41) thumb_sp_fs_scroll_pane_g2

0xdf3a,	// (0x0001bf4a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0001dc07) thumb_sp_fs_scroll_pane_g

0xdf28,	// (0x0001bf38) bg_sp_fs_scroll_pane_g1

0xdf31,	// (0x0001bf41) bg_sp_fs_scroll_pane_g2

0xdf3a,	// (0x0001bf4a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x0001dc07) bg_sp_fs_scroll_pane_g

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g1

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g2

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g3

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0001d1ae) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0001d1ae) list_medium_line_x2_t3_g4_g

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g4_t1

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g4_t2

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0001d1a2) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0001d1a2) list_medium_line_x2_t3_g4_t

0x995b,	// (0x0001796b) list_medium_line_g2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_g2_g1

0x995b,	// (0x0001796b) list_medium_line_g2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_g2_g

0x99ab,	// (0x000179bb) list_medium_line_g2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_g2_t1

0x995b,	// (0x0001796b) list_medium_line_t3_g2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t3_g2_g1

0x995b,	// (0x0001796b) list_medium_line_t3_g2_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0001d1a9) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0001d1a9) list_medium_line_t3_g2_g

0x99ab,	// (0x000179bb) list_medium_line_t3_g2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_g2_t1

0x99ab,	// (0x000179bb) list_medium_line_t3_g2_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_g2_t2

0x99ab,	// (0x000179bb) list_medium_line_t3_g2_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0001d1a2) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0001d1a2) list_medium_line_t3_g2_t

0x99a1,	// (0x000179b1) list_medium_line_right_icon_g1

0xa193,	// (0x000181a3) list_medium_line_right_icon_t1

0x995b,	// (0x0001796b) list_medium_line_t2_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t2_g1

0x99ab,	// (0x000179bb) list_medium_line_t2_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t2_t1

0x99ab,	// (0x000179bb) list_medium_line_t2_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0001d17e) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0001d17e) list_medium_line_t2_t

0x995b,	// (0x0001796b) list_medium_line_t3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t3_g1

0x99ab,	// (0x000179bb) list_medium_line_t3_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_t1

0x99ab,	// (0x000179bb) list_medium_line_t3_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_t2

0x99ab,	// (0x000179bb) list_medium_line_t3_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0001d1a2) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0001d1a2) list_medium_line_t3_t

0x995b,	// (0x0001796b) list_medium_line_g3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_g3_g1

0x995b,	// (0x0001796b) list_medium_line_g3_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_g3_g2

0x995b,	// (0x0001796b) list_medium_line_g3_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0001d19b) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0001d19b) list_medium_line_g3_g

0x99ab,	// (0x000179bb) list_medium_line_g3_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_g3_t1

0x995b,	// (0x0001796b) list_medium_line_t2_g3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t2_g3_g1

0x995b,	// (0x0001796b) list_medium_line_t2_g3_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t2_g3_g2

0x995b,	// (0x0001796b) list_medium_line_t2_g3_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0001d19b) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0001d19b) list_medium_line_t2_g3_g

0x99ab,	// (0x000179bb) list_medium_line_t2_g3_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t2_g3_t1

0x99ab,	// (0x000179bb) list_medium_line_t2_g3_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0001d17e) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0001d17e) list_medium_line_t2_g3_t

0x995b,	// (0x0001796b) list_medium_line_t3_g3_g1_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t3_g3_g1

0x995b,	// (0x0001796b) list_medium_line_t3_g3_g2_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t3_g3_g2

0x995b,	// (0x0001796b) list_medium_line_t3_g3_g3_ParamLimits

0x995b,	// (0x0001796b) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0001d19b) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0001d19b) list_medium_line_t3_g3_g

0x99ab,	// (0x000179bb) list_medium_line_t3_g3_t1_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_g3_t1

0x99ab,	// (0x000179bb) list_medium_line_t3_g3_t2_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_g3_t2

0x99ab,	// (0x000179bb) list_medium_line_t3_g3_t3_ParamLimits

0x99ab,	// (0x000179bb) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0001d1a2) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0001d1a2) list_medium_line_t3_g3_t

0x99a1,	// (0x000179b1) list_medium_line_right_iconx2_g1

0x99a1,	// (0x000179b1) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0001d09c) list_medium_line_right_iconx2_g

0xa193,	// (0x000181a3) list_medium_line_right_iconx2_t1

0x99a1,	// (0x000179b1) list_medium_line_t2_right_iconx2_g1

0x99a1,	// (0x000179b1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0001d09c) list_medium_line_t2_right_iconx2_g

0xa193,	// (0x000181a3) list_medium_line_t2_right_iconx2_t1

0xa193,	// (0x000181a3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0001dbce) list_medium_line_t2_right_iconx2_t

0xa193,	// (0x000181a3) list_medium_line_x4_t4_t1

0xa193,	// (0x000181a3) list_medium_line_x4_t4_t2

0xa193,	// (0x000181a3) list_medium_line_x4_t4_t3

0xa193,	// (0x000181a3) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0001d26b) list_medium_line_x4_t4_t

0x723b,	// (0x0001524b) tport_appsw_pane_ParamLimits

0x723b,	// (0x0001524b) tport_appsw_pane

0x7253,	// (0x00015263) tport_contact_pane_ParamLimits

0x7253,	// (0x00015263) tport_contact_pane

0x726b,	// (0x0001527b) tport_listscroll_pane_ParamLimits

0x726b,	// (0x0001527b) tport_listscroll_pane

0x7285,	// (0x00015295) cell_tport_appsw_pane_ParamLimits

0x7285,	// (0x00015295) cell_tport_appsw_pane

0xa7bd,	// (0x000187cd) tport_appsw_pane_g1_ParamLimits

0xa7bd,	// (0x000187cd) tport_appsw_pane_g1

0xdf43,	// (0x0001bf53) tport_contact_pane_g1

0xd79b,	// (0x0001b7ab) tport_contact_pane_t1

0xdf4c,	// (0x0001bf5c) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x0001dc0e) tport_contact_pane_t

0xdf5a,	// (0x0001bf6a) list_tport_pane

0xdf63,	// (0x0001bf73) scroll_pane_cp_030

0x72cd,	// (0x000152dd) cell_tport_appsw_pane_g1

0x72dd,	// (0x000152ed) cell_tport_appsw_pane_t1

0x72eb,	// (0x000152fb) grid_highlight_pane_cp019

0x72f3,	// (0x00015303) list_tport_double_graphic_pane_ParamLimits

0x72f3,	// (0x00015303) list_tport_double_graphic_pane

0x9264,	// (0x00017274) list_highlight_pane_cp023_ParamLimits

0x9264,	// (0x00017274) list_highlight_pane_cp023

0x7300,	// (0x00015310) list_tport_double_graphic_pane_g1_ParamLimits

0x7300,	// (0x00015310) list_tport_double_graphic_pane_g1

0x730d,	// (0x0001531d) list_tport_double_graphic_pane_t1_ParamLimits

0x730d,	// (0x0001531d) list_tport_double_graphic_pane_t1

0x7322,	// (0x00015332) list_tport_double_graphic_pane_t2_ParamLimits

0x7322,	// (0x00015332) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x0001dc1a) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x0001dc1a) list_tport_double_graphic_pane_t

0x91f5,	// (0x00017205) main_cale_note_pane

0x528f,	// (0x0001329f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x528f,	// (0x0001329f) cell_vitu2_function_top_wide_pane_cp01

0x6cac,	// (0x00014cbc) wait_bar_pane_cp05_ParamLimits

0x9264,	// (0x00017274) listscroll_cmail_pane

0xdf74,	// (0x0001bf84) list_cmail_pane

0x7334,	// (0x00015344) list_cmail_body_pane

0x7349,	// (0x00015359) list_single_cmail_header_caption_pane

0x735f,	// (0x0001536f) list_single_cmail_header_detail_pane_ParamLimits

0x735f,	// (0x0001536f) list_single_cmail_header_detail_pane

0xdf8b,	// (0x0001bf9b) list_single_cmail_header_caption_pane_t1

0x738c,	// (0x0001539c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x738c,	// (0x0001539c) list_single_cmail_header_detail_pane_g1

0xdfa2,	// (0x0001bfb2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdfa2,	// (0x0001bfb2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x0001dc1f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x0001dc1f) list_single_cmail_header_detail_pane_g

0x73a4,	// (0x000153b4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x73a4,	// (0x000153b4) list_single_cmail_header_detail_pane_t1

0x73e2,	// (0x000153f2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x73e2,	// (0x000153f2) list_single_cmail_header_editor_pane_bg

0xd8f8,	// (0x0001b908) list_cmail_body_pane_g1

0xdfdf,	// (0x0001bfef) list_cmail_body_pane_t1

0xcae8,	// (0x0001aaf8) list_single_cmail_header_editor_pane_bg_g1

0x9e81,	// (0x00017e91) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcaf8,	// (0x0001ab08) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcaf0,	// (0x0001ab00) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcddb,	// (0x0001adeb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcb18,	// (0x0001ab28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcb08,	// (0x0001ab18) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcb10,	// (0x0001ab20) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9e61,	// (0x00017e71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x73fb,	// (0x0001540b) calenote_gesture_pane_ParamLimits

0x73fb,	// (0x0001540b) calenote_gesture_pane

0x741b,	// (0x0001542b) calenote_window_pane_ParamLimits

0x741b,	// (0x0001542b) calenote_window_pane

0xdfed,	// (0x0001bffd) popup_note_window_cp01

0x7437,	// (0x00015447) calenote_swipe_1_pane_ParamLimits

0x7437,	// (0x00015447) calenote_swipe_1_pane

0x6f1e,	// (0x00014f2e) calenote_swipe_2_pane_ParamLimits

0x6f1e,	// (0x00014f2e) calenote_swipe_2_pane

0xdc44,	// (0x0001bc54) calenote_swipe_1_pane_g1_ParamLimits

0xdc44,	// (0x0001bc54) calenote_swipe_1_pane_g1

0xdfff,	// (0x0001c00f) calenote_swipe_1_pane_g2_ParamLimits

0xdfff,	// (0x0001c00f) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x0001dc2b) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x0001dc2b) calenote_swipe_1_pane_g

0xe00b,	// (0x0001c01b) calenote_swipe_1_pane_t1_ParamLimits

0xe00b,	// (0x0001c01b) calenote_swipe_1_pane_t1

0xdc44,	// (0x0001bc54) calenote_swipe_2_pane_g1_ParamLimits

0xdc44,	// (0x0001bc54) calenote_swipe_2_pane_g1

0xe02a,	// (0x0001c03a) calenote_swipe_2_pane_g2_ParamLimits

0xe02a,	// (0x0001c03a) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x0001dc30) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x0001dc30) calenote_swipe_2_pane_g

0xe036,	// (0x0001c046) calenote_swipe_2_pane_t1_ParamLimits

0xe036,	// (0x0001c046) calenote_swipe_2_pane_t1

0x91f5,	// (0x00017205) main_mup_navstr_pane

0x4286,	// (0x00012296) main_mup3_pane_t7_ParamLimits

0x4286,	// (0x00012296) main_mup3_pane_t7

0xc68c,	// (0x0001a69c) main_mp4_pane_g6_ParamLimits

0xc68c,	// (0x0001a69c) main_mp4_pane_g6

0xc93d,	// (0x0001a94d) main_image3_pane_t4_ParamLimits

0xc93d,	// (0x0001a94d) main_image3_pane_t4

0x744c,	// (0x0001545c) popup_navstr_preview_pane_ParamLimits

0x744c,	// (0x0001545c) popup_navstr_preview_pane

0x7460,	// (0x00015470) scroll_navstr_pane_ParamLimits

0x7460,	// (0x00015470) scroll_navstr_pane

0x91f5,	// (0x00017205) bg_popup_preview_window_pane_cp04

0xe05d,	// (0x0001c06d) popup_navstr_preview_pane_t1

0x7474,	// (0x00015484) scroll_navstr_pane_g1_ParamLimits

0x7474,	// (0x00015484) scroll_navstr_pane_g1

0x7488,	// (0x00015498) scroll_navstr_pane_t1_ParamLimits

0x7488,	// (0x00015498) scroll_navstr_pane_t1

0xdff6,	// (0x0001c006) bg_button_pane_cp014

0xdff6,	// (0x0001c006) bg_button_pane_cp030

0x6df7,	// (0x00014e07) list_double_fisheye_pane_g4_ParamLimits

0x6df7,	// (0x00014e07) list_double_fisheye_pane_g4

0x6e03,	// (0x00014e13) list_double_fisheye_pane_g5_ParamLimits

0x6e03,	// (0x00014e13) list_double_fisheye_pane_g5

0xcc61,	// (0x0001ac71) sp_fs_scroll_pane_cp03

0xdd5d,	// (0x0001bd6d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdd69,	// (0x0001bd79) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x0001dbd3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6fc8,	// (0x00014fd8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdf83,	// (0x0001bf93) sp_fs_scroll_pane_cp02

0x9ba6,	// (0x00017bb6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ba6,	// (0x00017bb6) popup_sp_fs_calendar_preview_list_single_pane

0x91f5,	// (0x00017205) main_cam6_pano_pane

0x9264,	// (0x00017274) main_mup3_pane_ParamLimits

0x91f5,	// (0x00017205) main_phacti_pane

0x6b7f,	// (0x00014b8f) bg_button_pane_cp11

0x6b99,	// (0x00014ba9) main_mobtv_info_pane_g2_ParamLimits

0x6b99,	// (0x00014ba9) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x0001db38) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x0001db38) main_mobtv_info_pane_g

0x99ab,	// (0x000179bb) sc_clock_pane_t5_ParamLimits

0x99ab,	// (0x000179bb) sc_clock_pane_t5

0xa7bd,	// (0x000187cd) main_radioblah_pane_g1_ParamLimits

0xa7cb,	// (0x000187db) main_radioblah_pane_t3_ParamLimits

0xa7cb,	// (0x000187db) main_radioblah_pane_t3

0xa7cb,	// (0x000187db) main_radioblah_pane_t4_ParamLimits

0xa7cb,	// (0x000187db) main_radioblah_pane_t4

0x9264,	// (0x00017274) main_radioblah_text_pane_ParamLimits

0x9264,	// (0x00017274) main_radioblah_text_pane

0xdb3c,	// (0x0001bb4c) main_radioblah_info_pane_g1_ParamLimits

0xdb80,	// (0x0001bb90) main_radioblah_info_pane_t4_ParamLimits

0xdb80,	// (0x0001bb90) main_radioblah_info_pane_t4

0x9264,	// (0x00017274) main_sp_fs_calendar_pane

0x749f,	// (0x000154af) main_phacti_pane_g1

0x74a7,	// (0x000154b7) phacti_note_pane_ParamLimits

0x74a7,	// (0x000154b7) phacti_note_pane

0xe074,	// (0x0001c084) phacti_term_pane_ParamLimits

0xe074,	// (0x0001c084) phacti_term_pane

0xe089,	// (0x0001c099) phacti_note_pane_t1_ParamLimits

0xe089,	// (0x0001c099) phacti_note_pane_t1

0xe0a0,	// (0x0001c0b0) phacti_term_pane_g1

0xe0a8,	// (0x0001c0b8) phacti_term_pane_t1_ParamLimits

0xe0a8,	// (0x0001c0b8) phacti_term_pane_t1

0xe0d2,	// (0x0001c0e2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9c45,	// (0x00017c55) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x0001dc3a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe0da,	// (0x0001c0ea) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe0da,	// (0x0001c0ea) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe0f0,	// (0x0001c100) aid_popup_sp_fs_bg_corner_pane

0x99a1,	// (0x000179b1) popup_sp_fs_calendar_preview_bg_pane_g1

0x91f5,	// (0x00017205) popup_sp_fs_calendar_preview_bg_pane

0xe0f8,	// (0x0001c108) popup_sp_fs_calendar_preview_list_pane

0xe109,	// (0x0001c119) bg_main_sp_fs_cale_pane_ParamLimits

0xe109,	// (0x0001c119) bg_main_sp_fs_cale_pane

0xe121,	// (0x0001c131) listscroll_cale_mrui_pane_ParamLimits

0xe121,	// (0x0001c131) listscroll_cale_mrui_pane

0xc175,	// (0x0001a185) listscroll_sp_fs_schedule_track_pane

0xe139,	// (0x0001c149) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe139,	// (0x0001c149) main_sp_fs_ctrlbar_pane_cp01

0xc175,	// (0x0001a185) main_sp_fs_ribbon_pane

0xe14f,	// (0x0001c15f) popup_sp_fs_cale_preview_window

0xcc55,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcc55,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane

0xe6c4,	// (0x0001c6d4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe6c4,	// (0x0001c6d4) bg_sp_fs_highlight_list_pane_cp03

0xe6b8,	// (0x0001c6c8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe6b8,	// (0x0001c6c8) list_single_sp_fs_schedule_track_pane_g1

0xe6b8,	// (0x0001c6c8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe6b8,	// (0x0001c6c8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x0001dc3f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x0001dc3f) list_single_sp_fs_schedule_track_pane_g

0x74bb,	// (0x000154cb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x74bb,	// (0x000154cb) list_single_sp_fs_schedule_track_pane_t1

0x74cd,	// (0x000154dd) sp_fs_schedule_track_pane_ParamLimits

0x74cd,	// (0x000154dd) sp_fs_schedule_track_pane

0xc17d,	// (0x0001a18d) sp_fs_schedule_track_pane_g1

0xc17d,	// (0x0001a18d) sp_fs_schedule_track_pane_g2

0xc17d,	// (0x0001a18d) sp_fs_schedule_track_pane_g3

0xc17d,	// (0x0001a18d) sp_fs_schedule_track_pane_g4

0xc17d,	// (0x0001a18d) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c3,	// (0x0001d7d3) sp_fs_schedule_track_pane_g

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g1

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g2

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g3

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g4

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g5

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g6

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g7

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g8

0xc17d,	// (0x0001a18d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc34,	// (0x0001dc44) bg_sp_fs_schedule_viewer_highlight_g

0xc175,	// (0x0001a185) bg_main_sp_fs_ribbon_pane

0xc17d,	// (0x0001a18d) main_sp_fs_ribbon_pane_g1

0xe161,	// (0x0001c171) main_sp_fs_ribbon_pane_t1

0xe161,	// (0x0001c171) main_sp_fs_ribbon_pane_t2

0xe161,	// (0x0001c171) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc47,	// (0x0001dc57) main_sp_fs_ribbon_pane_t

0xc175,	// (0x0001a185) main_sp_fs_ribbon_scheduler_pane

0xc17d,	// (0x0001a18d) bg_main_sp_fs_ribbon_pane_g1

0xc17d,	// (0x0001a18d) bg_main_sp_fs_ribbon_pane_g2

0xc17d,	// (0x0001a18d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x0001d6ab) bg_main_sp_fs_ribbon_pane_g

0xc17d,	// (0x0001a18d) main_sp_fs_ribbon_scheduler_pane_g1

0xc17d,	// (0x0001a18d) main_sp_fs_ribbon_scheduler_pane_g2

0xc17d,	// (0x0001a18d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x0001d6ab) main_sp_fs_ribbon_scheduler_pane_g

0xe16f,	// (0x0001c17f) list_cale_mrui_pane

0x74d9,	// (0x000154e9) sp_fs_scroll_pane_cp07_ParamLimits

0x74d9,	// (0x000154e9) sp_fs_scroll_pane_cp07

0xe6c4,	// (0x0001c6d4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe6c4,	// (0x0001c6d4) bg_sp_fs_schedule_viewer_highlight

0xc175,	// (0x0001a185) list_single_sp_fs_schedule_track_pane_cp01

0xc175,	// (0x0001a185) list_sp_fs_schedule_track_pane

0xe17c,	// (0x0001c18c) sp_fs_scroll_pane_cp06_ParamLimits

0xe17c,	// (0x0001c18c) sp_fs_scroll_pane_cp06

0x99a1,	// (0x000179b1) bgmain_sp_fs_calendar_pane_g1

0x74f5,	// (0x00015505) list_single_cale_mrui_pane_ParamLimits

0x74f5,	// (0x00015505) list_single_cale_mrui_pane

0xe190,	// (0x0001c1a0) list_single_cale_mrui_row_pane_ParamLimits

0xe190,	// (0x0001c1a0) list_single_cale_mrui_row_pane

0xe19d,	// (0x0001c1ad) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe19d,	// (0x0001c1ad) list_single_cale_mrui_row_pane_g1

0xe1e2,	// (0x0001c1f2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe1e2,	// (0x0001c1f2) list_single_cale_mrui_row_pane_t1

0x7515,	// (0x00015525) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7515,	// (0x00015525) list_single_cale_mrui_row_pane_t2

0xe1f4,	// (0x0001c204) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe1f4,	// (0x0001c204) list_single_cale_mrui_row_pane_t3

0xe223,	// (0x0001c233) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe223,	// (0x0001c233) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc55,	// (0x0001dc65) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc55,	// (0x0001dc65) list_single_cale_mrui_row_pane_t

0x757d,	// (0x0001558d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x757d,	// (0x0001558d) list_single_cmail_header_editor_pane_bg_cp01

0x75ab,	// (0x000155bb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x75ab,	// (0x000155bb) list_single_cmail_header_editor_pane_bg_cp02

0xe252,	// (0x0001c262) main_radioblah_text_pane_t1_ParamLimits

0xe252,	// (0x0001c262) main_radioblah_text_pane_t1

0xe26c,	// (0x0001c27c) cam6_indi_pane_cp01

0xe274,	// (0x0001c284) cam6_mode_pane_cp01

0xe27c,	// (0x0001c28c) cam6_pano_pane

0xe285,	// (0x0001c295) cam6_zoom_pane_cp01

0xe28d,	// (0x0001c29d) cam6_pano_image_pane

0xe298,	// (0x0001c2a8) cam6_pano_pane_g1

0xd8f8,	// (0x0001b908) cam6_pano_pane_g2

0xe2a1,	// (0x0001c2b1) cam6_pano_pane_g3

0xe2aa,	// (0x0001c2ba) cam6_pano_pane_g4

0xc410,	// (0x0001a420) cam6_pano_pane_g5

0xe2b3,	// (0x0001c2c3) cam6_pano_pane_g6

0xe2bd,	// (0x0001c2cd) cam6_pano_pane_g7

0xe2c5,	// (0x0001c2d5) cam6_pano_pane_g8

0xe2ce,	// (0x0001c2de) cam6_pano_pane_g9

0x0008,

0xfc5e,	// (0x0001dc6e) cam6_pano_pane_g

0x91f5,	// (0x00017205) main_browser_tag_pane

0xe055,	// (0x0001c065) grid_navstr_albumart_pane

0xe2d9,	// (0x0001c2e9) cell_navstr_albumart_pane_ParamLimits

0xe2d9,	// (0x0001c2e9) cell_navstr_albumart_pane

0xe2f9,	// (0x0001c309) cell_navstr_albumart_pane_g1

0xe301,	// (0x0001c311) cell_navstr_albumart_pane_g2

0xe309,	// (0x0001c319) cell_navstr_albumart_pane_g3

0xe311,	// (0x0001c321) cell_navstr_albumart_pane_g4

0x0003,

0xfc71,	// (0x0001dc81) cell_navstr_albumart_pane_g

0x75cb,	// (0x000155db) bt_list_pane_ParamLimits

0x75cb,	// (0x000155db) bt_list_pane

0x75df,	// (0x000155ef) bt_list_pane_t1

0x75ee,	// (0x000155fe) bt_list_pane_t2

0x0001,

0xfc7a,	// (0x0001dc8a) bt_list_pane_t

0x91f5,	// (0x00017205) main_cale_prevew_pane

0x75fd,	// (0x0001560d) popup_cale_preview_window_ParamLimits

0x75fd,	// (0x0001560d) popup_cale_preview_window

0x9264,	// (0x00017274) bg_popup_preview_window_pane_cp05_ParamLimits

0x9264,	// (0x00017274) bg_popup_preview_window_pane_cp05

0xe319,	// (0x0001c329) list_cale_preview_pane_ParamLimits

0xe319,	// (0x0001c329) list_cale_preview_pane

0x7618,	// (0x00015628) list_double_cale_preview_pane_ParamLimits

0x7618,	// (0x00015628) list_double_cale_preview_pane

0x762a,	// (0x0001563a) list_single_cale_preview_pane_ParamLimits

0x762a,	// (0x0001563a) list_single_cale_preview_pane

0x7640,	// (0x00015650) list_single_cale_preview_pane_g1

0x7648,	// (0x00015658) list_single_cale_preview_pane_t1_ParamLimits

0x7648,	// (0x00015658) list_single_cale_preview_pane_t1

0x765d,	// (0x0001566d) list_double_cale_preview_pane_g1

0x7665,	// (0x00015675) list_double_cale_preview_pane_t1_ParamLimits

0x7665,	// (0x00015675) list_double_cale_preview_pane_t1

0x767a,	// (0x0001568a) list_double_cale_preview_pane_t2_ParamLimits

0x767a,	// (0x0001568a) list_double_cale_preview_pane_t2

0x0001,

0xfc7f,	// (0x0001dc8f) list_double_cale_preview_pane_t_ParamLimits

0xfc7f,	// (0x0001dc8f) list_double_cale_preview_pane_t

0x91f5,	// (0x00017205) main_ezdial_pane

0x9264,	// (0x00017274) main_sp_fs_email_pane_ParamLimits

0x6f38,	// (0x00014f48) cmail_ddmenu_btn01_pane_ParamLimits

0x6f38,	// (0x00014f48) cmail_ddmenu_btn01_pane

0x6f4b,	// (0x00014f5b) cmail_ddmenu_btn02_pane_ParamLimits

0x6f4b,	// (0x00014f5b) cmail_ddmenu_btn02_pane

0x6f6e,	// (0x00014f7e) cmail_ddmenu_btn03_pane_ParamLimits

0x6f6e,	// (0x00014f7e) cmail_ddmenu_btn03_pane

0x7007,	// (0x00015017) main_sp_fs_ctrlbar_pane_ParamLimits

0x702b,	// (0x0001503b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7334,	// (0x00015344) list_cmail_body_pane_ParamLimits

0xdf99,	// (0x0001bfa9) bg_button_pane_cp12

0xdfae,	// (0x0001bfbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdfae,	// (0x0001bfbe) list_single_cmail_header_detail_pane_g3

0xdfbb,	// (0x0001bfcb) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdfbb,	// (0x0001bfcb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x0001dc26) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x0001dc26) list_single_cmail_header_detail_pane_t

0xe0bd,	// (0x0001c0cd) phacti_term_pane_t2_ParamLimits

0xe0bd,	// (0x0001c0cd) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x0001dc35) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x0001dc35) phacti_term_pane_t

0xe325,	// (0x0001c335) aid_size_list_single_double

0x7692,	// (0x000156a2) popup_ezdial_listscroll_window

0xe331,	// (0x0001c341) popup_number_entry_window_cp01

0x9c5e,	// (0x00017c6e) bg_popup_call_pane_cp09

0xe33e,	// (0x0001c34e) ezdial_list_pane

0xe346,	// (0x0001c356) scroll_pane_cp23

0xa7df,	// (0x000187ef) bg_button_pane_cp028_ParamLimits

0xa7df,	// (0x000187ef) bg_button_pane_cp028

0x76a9,	// (0x000156b9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x76a9,	// (0x000156b9) cmail_ddmenu_btn01_pane_g1

0x76b5,	// (0x000156c5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x76b5,	// (0x000156c5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc84,	// (0x0001dc94) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc84,	// (0x0001dc94) cmail_ddmenu_btn01_pane_g

0xe34e,	// (0x0001c35e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe34e,	// (0x0001c35e) cmail_ddmenu_btn01_pane_t1

0xa7df,	// (0x000187ef) bg_button_pane_cp029_ParamLimits

0xa7df,	// (0x000187ef) bg_button_pane_cp029

0x76c9,	// (0x000156d9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x76c9,	// (0x000156d9) cmail_ddmenu_btn02_pane_g1

0x76e1,	// (0x000156f1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x76e1,	// (0x000156f1) cmail_ddmenu_btn02_pane_t1

0x9264,	// (0x00017274) bg_button_pane_cp031_ParamLimits

0x9264,	// (0x00017274) bg_button_pane_cp031

0x76c9,	// (0x000156d9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x76c9,	// (0x000156d9) cmail_ddmenu_btn03_pane_g1

0x76e1,	// (0x000156f1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x76e1,	// (0x000156f1) cmail_ddmenu_btn03_pane_t1

0x99ab,	// (0x000179bb) cell_dialer2_keypad_pane_t1_ParamLimits

0xc44e,	// (0x0001a45e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc44e,	// (0x0001a45e) cell_dialer2_keypad_pane_t1_copy1

0x69a2,	// (0x000149b2) ncimui_group_button_pane

0x9264,	// (0x00017274) main_sp_fs_calendar_pane_ParamLimits

0x7349,	// (0x00015359) list_single_cmail_header_caption_pane_ParamLimits

0xe100,	// (0x0001c110) aid_recal_txt_sm_pane

0x91f5,	// (0x00017205) mian_recal_day_pane

0xe14f,	// (0x0001c15f) popup_sp_fs_cale_preview_window_ParamLimits

0xe364,	// (0x0001c374) list_recal_day_pane

0xe3a6,	// (0x0001c3b6) list_single_recal_day_pane_ParamLimits

0xe3a6,	// (0x0001c3b6) list_single_recal_day_pane

0xe3b8,	// (0x0001c3c8) list_single_recal_day_pane_g1_ParamLimits

0xe3b8,	// (0x0001c3c8) list_single_recal_day_pane_g1

0xe3c4,	// (0x0001c3d4) list_single_recal_day_pane_g2_ParamLimits

0xe3c4,	// (0x0001c3d4) list_single_recal_day_pane_g2

0xe3d0,	// (0x0001c3e0) list_single_recal_day_pane_g3_ParamLimits

0xe3d0,	// (0x0001c3e0) list_single_recal_day_pane_g3

0x7705,	// (0x00015715) list_single_recal_day_pane_g4_ParamLimits

0x7705,	// (0x00015715) list_single_recal_day_pane_g4

0xe3dc,	// (0x0001c3ec) list_single_recal_day_pane_g5_ParamLimits

0xe3dc,	// (0x0001c3ec) list_single_recal_day_pane_g5

0xe3e8,	// (0x0001c3f8) list_single_recal_day_pane_g6_ParamLimits

0xe3e8,	// (0x0001c3f8) list_single_recal_day_pane_g6

0x0004,

0xfc93,	// (0x0001dca3) list_single_recal_day_pane_g_ParamLimits

0xfc93,	// (0x0001dca3) list_single_recal_day_pane_g

0xe3fc,	// (0x0001c40c) list_single_recal_day_pane_t1

0xe40e,	// (0x0001c41e) list_single_recal_day_pane_t2

0x0001,

0xfc9e,	// (0x0001dcae) list_single_recal_day_pane_t

0x771d,	// (0x0001572d) ncimui_query_button_pane_ParamLimits

0x771d,	// (0x0001572d) ncimui_query_button_pane

0x772d,	// (0x0001573d) ncimui_query_button_pane_t1_ParamLimits

0x772d,	// (0x0001573d) ncimui_query_button_pane_t1

0xe420,	// (0x0001c430) ncimui_query_button_pane_t2_ParamLimits

0xe420,	// (0x0001c430) ncimui_query_button_pane_t2

0x0001,

0xfca3,	// (0x0001dcb3) ncimui_query_button_pane_t_ParamLimits

0xfca3,	// (0x0001dcb3) ncimui_query_button_pane_t

0x7740,	// (0x00015750) query_button_pane_ParamLimits

0x7740,	// (0x00015750) query_button_pane

0x91f5,	// (0x00017205) bg_button_pane_cp0028

0xe433,	// (0x0001c443) query_button_pane_t1

0x3556,	// (0x00011566) main_tport_pane_ParamLimits

0x71f8,	// (0x00015208) bg_popup_window_pane_cp01_ParamLimits

0x71f8,	// (0x00015208) bg_popup_window_pane_cp01

0x7213,	// (0x00015223) heading_pane_cp08_ParamLimits

0x7213,	// (0x00015223) heading_pane_cp08

0x7226,	// (0x00015236) heading_pane_cp07_ParamLimits

0x7226,	// (0x00015236) heading_pane_cp07

0x72cd,	// (0x000152dd) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x0001dc13) cell_tport_appsw_pane_g

0x2b3e,	// (0x00010b4e) input_candi_list_open_g1

0xa032,	// (0x00018042) list_cale_time_pane_g6_ParamLimits

0xa032,	// (0x00018042) list_cale_time_pane_g6

0x3b69,	// (0x00011b79) aid_size_touch_calib_1_ParamLimits

0x3b69,	// (0x00011b79) aid_size_touch_calib_1

0x3b7b,	// (0x00011b8b) aid_size_touch_calib_2_ParamLimits

0x3b7b,	// (0x00011b8b) aid_size_touch_calib_2

0x3b93,	// (0x00011ba3) aid_size_touch_calib_3_ParamLimits

0x3b93,	// (0x00011ba3) aid_size_touch_calib_3

0x3bb1,	// (0x00011bc1) aid_size_touch_calib_4_ParamLimits

0x3bb1,	// (0x00011bc1) aid_size_touch_calib_4

0x3bc9,	// (0x00011bd9) main_touch_calib_button_group_pane_ParamLimits

0x3bc9,	// (0x00011bd9) main_touch_calib_button_group_pane

0x3be1,	// (0x00011bf1) main_touch_calib_pane_g1_ParamLimits

0x3bf3,	// (0x00011c03) main_touch_calib_pane_g2_ParamLimits

0x3c05,	// (0x00011c15) main_touch_calib_pane_g3_ParamLimits

0x3c17,	// (0x00011c27) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x0001d659) main_touch_calib_pane_g_ParamLimits

0x3c29,	// (0x00011c39) main_touch_calib_pane_t1_ParamLimits

0x3c43,	// (0x00011c53) main_touch_calib_pane_t2_ParamLimits

0x3c5d,	// (0x00011c6d) main_touch_calib_pane_t3_ParamLimits

0x3c71,	// (0x00011c81) main_touch_calib_pane_t4_ParamLimits

0x3c85,	// (0x00011c95) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x0001d662) main_touch_calib_pane_t_ParamLimits

0xc1dd,	// (0x0001a1ed) list_single_fp_cale_pane_g3_ParamLimits

0xc1dd,	// (0x0001a1ed) list_single_fp_cale_pane_g3

0x9264,	// (0x00017274) bg_button_pane_cp012_ParamLimits

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp03_ParamLimits

0x5b53,	// (0x00013b63) cell_vitu2_function_top_pane_g1_ParamLimits

0x9264,	// (0x00017274) bg_vkb2_func_pane_cp04_ParamLimits

0x692d,	// (0x0001493d) main_ncimui_button_group_pane_ParamLimits

0x692d,	// (0x0001493d) main_ncimui_button_group_pane

0x698d,	// (0x0001499d) main_ncimui_pane_t3_ParamLimits

0x698d,	// (0x0001499d) main_ncimui_pane_t3

0xe06b,	// (0x0001c07b) phacti_button_group_pane

0xe325,	// (0x0001c335) aid_size_list_single_double_ParamLimits

0x7692,	// (0x000156a2) popup_ezdial_listscroll_window_ParamLimits

0xe331,	// (0x0001c341) popup_number_entry_window_cp01_ParamLimits

0x7753,	// (0x00015763) phacti_button_pane_ParamLimits

0x7753,	// (0x00015763) phacti_button_pane

0x91f5,	// (0x00017205) bg_button_pane_cp14

0xe441,	// (0x0001c451) phacti_button_pane_t1

0x7764,	// (0x00015774) main_touch_calib_button_pane_ParamLimits

0x7764,	// (0x00015774) main_touch_calib_button_pane

0x9a19,	// (0x00017a29) bg_button_pane_cp18_ParamLimits

0x9a19,	// (0x00017a29) bg_button_pane_cp18

0xe44f,	// (0x0001c45f) main_touch_calib_button_pane_t1_ParamLimits

0xe44f,	// (0x0001c45f) main_touch_calib_button_pane_t1

0xe465,	// (0x0001c475) main_touch_calib_button_pane_t2_ParamLimits

0xe465,	// (0x0001c475) main_touch_calib_button_pane_t2

0x0001,

0xfca8,	// (0x0001dcb8) main_touch_calib_button_pane_t_ParamLimits

0xfca8,	// (0x0001dcb8) main_touch_calib_button_pane_t

0x91f5,	// (0x00017205) cell_ncimui_button_pane

0x91f5,	// (0x00017205) bg_button_pane_cp032

0xe483,	// (0x0001c493) cell_ncimui_button_pane_t1

0xc91d,	// (0x0001a92d) image3_infobar_pane_ParamLimits

0xc91d,	// (0x0001a92d) image3_infobar_pane

0x6cff,	// (0x00014d0f) fs_bigclock_status_pane_ParamLimits

0x6cff,	// (0x00014d0f) fs_bigclock_status_pane

0x6d0c,	// (0x00014d1c) main_fs_bigclock_clock_pane_ParamLimits

0x6d0c,	// (0x00014d1c) main_fs_bigclock_clock_pane

0x6d2a,	// (0x00014d3a) main_fs_bigclock_indi_pane_ParamLimits

0x6d2a,	// (0x00014d3a) main_fs_bigclock_indi_pane

0x6d5c,	// (0x00014d6c) main_fs_bigclock_swipe_pane_ParamLimits

0x6d5c,	// (0x00014d6c) main_fs_bigclock_swipe_pane

0x91f5,	// (0x00017205) main_fs_clock_dumped_data

0xda05,	// (0x0001ba15) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xda05,	// (0x0001ba15) list_single_fs_bigclock_indicator_pane_g1

0xda20,	// (0x0001ba30) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xda20,	// (0x0001ba30) list_single_fs_bigclock_indicator_pane_g2

0xda3a,	// (0x0001ba4a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xda3a,	// (0x0001ba4a) list_single_fs_bigclock_indicator_pane_g3

0xda54,	// (0x0001ba64) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xda54,	// (0x0001ba64) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x0001db6c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x0001db6c) list_single_fs_bigclock_indicator_pane_g

0xda7f,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xda7f,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_t1

0xdaa7,	// (0x0001bab7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdaa7,	// (0x0001bab7) list_single_fs_bigclock_indicator_pane_t2

0xdacf,	// (0x0001badf) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdacf,	// (0x0001badf) list_single_fs_bigclock_indicator_pane_t3

0xdaf7,	// (0x0001bb07) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdaf7,	// (0x0001bb07) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x0001db77) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x0001db77) list_single_fs_bigclock_indicator_pane_t

0xe491,	// (0x0001c4a1) image3_infobar_fav_pane_ParamLimits

0xe491,	// (0x0001c4a1) image3_infobar_fav_pane

0xe4a1,	// (0x0001c4b1) image3_infobar_loc_pane_ParamLimits

0xe4a1,	// (0x0001c4b1) image3_infobar_loc_pane

0xe4b5,	// (0x0001c4c5) image3_infobar_time_pane_ParamLimits

0xe4b5,	// (0x0001c4c5) image3_infobar_time_pane

0x99a1,	// (0x000179b1) image3_infobar_time_pane_g1

0xe4c5,	// (0x0001c4d5) image3_infobar_time_pane_t1

0x99a1,	// (0x000179b1) image3_infobar_loc_pane_g1

0xe4d3,	// (0x0001c4e3) image3_infobar_loc_pane_g2

0x0001,

0xfcad,	// (0x0001dcbd) image3_infobar_loc_pane_g

0xe4db,	// (0x0001c4eb) image3_infobar_loc_pane_t1

0x99a1,	// (0x000179b1) image3_infobar_fav_pane_g1

0xe4e9,	// (0x0001c4f9) image3_infobar_fav_pane_g2

0x0001,

0xfcb2,	// (0x0001dcc2) image3_infobar_fav_pane_g

0xe4f1,	// (0x0001c501) fs_bigclock_status_battery_pane

0xe4fa,	// (0x0001c50a) fs_bigclock_status_signal_pane

0xe503,	// (0x0001c513) fs_bigclock_status_title_pane

0xe50c,	// (0x0001c51c) fs_bigclock_status_signal_pane_g1

0xe515,	// (0x0001c525) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb7,	// (0x0001dcc7) fs_bigclock_status_signal_pane_g

0xe51d,	// (0x0001c52d) fs_bigclock_status_battery_pane_g1

0xe526,	// (0x0001c536) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcbc,	// (0x0001dccc) fs_bigclock_status_battery_pane_g

0xe52e,	// (0x0001c53e) fs_bigclock_status_title_pane_t1

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g1

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g2

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g3

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcc1,	// (0x0001dcd1) main_fs_bigclock_clock_pane_g

0x778c,	// (0x0001579c) main_fs_bigclock_clock_pane_t1

0x77a5,	// (0x000157b5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcca,	// (0x0001dcda) main_fs_bigclock_clock_pane_t

0xe53c,	// (0x0001c54c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe53c,	// (0x0001c54c) list_single_fs_bigclock_indicator_pane

0xe54d,	// (0x0001c55d) list_single_fs_bigclock_pane_ParamLimits

0xe54d,	// (0x0001c55d) list_single_fs_bigclock_pane

0xe573,	// (0x0001c583) main_fs_bigclock_indicator_pane_t1

0xe582,	// (0x0001c592) list_single_fs_bigclock_pane_g1

0xe58a,	// (0x0001c59a) list_single_fs_bigclock_pane_t1

0x99a1,	// (0x000179b1) main_fs_bigclock_swipe_pane_g1

0xe5cd,	// (0x0001c5dd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcdb,	// (0x0001dceb) main_fs_bigclock_swipe_pane_g

0xe5d5,	// (0x0001c5e5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe5d5,	// (0x0001c5e5) main_fs_bigclock_swipe_pane_t1

0x268b,	// (0x0001069b) call_type_pane_ParamLimits

0x91f5,	// (0x00017205) main_btmg_pane

0xe1c9,	// (0x0001c1d9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe1c9,	// (0x0001c1d9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc4e,	// (0x0001dc5e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc4e,	// (0x0001dc5e) list_single_cale_mrui_row_pane_g

0xe38d,	// (0x0001c39d) list_recal_vselct_arw_lo_pane

0xe395,	// (0x0001c3a5) list_recal_vselct_arw_up_pane

0xe39d,	// (0x0001c3ad) list_recal_vselct_pane

0x77ff,	// (0x0001580f) btmg_button_pane

0x7809,	// (0x00015819) main_btmg_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp044

0xe5f2,	// (0x0001c602) btmg_button_pane_t1

0xb9aa,	// (0x000199ba) aid_listscroll_gen

0x9264,	// (0x00017274) main_cntbar_detail_pane

0xdf6c,	// (0x0001bf7c) list_cmail_folder_pane

0xcc61,	// (0x0001ac71) sp_fs_scroll_pane_cp03_ParamLimits

0x7349,	// (0x00015359) list_single_fs_dyc_pane_cp01_ParamLimits

0x7349,	// (0x00015359) list_single_fs_dyc_pane_cp01

0xe600,	// (0x0001c610) aid_size_cmail_indent

0xe609,	// (0x0001c619) list_single_dyc_row_pane_cp01

0x783f,	// (0x0001584f) cntbar_detail_list_pane_ParamLimits

0x783f,	// (0x0001584f) cntbar_detail_list_pane

0x788b,	// (0x0001589b) main_cntbar_detail_cont_pane_ParamLimits

0x788b,	// (0x0001589b) main_cntbar_detail_cont_pane

0xcc61,	// (0x0001ac71) scroll_pane_cp032_ParamLimits

0xcc61,	// (0x0001ac71) scroll_pane_cp032

0x789f,	// (0x000158af) cntbar_detail_list_event_pane_ParamLimits

0x789f,	// (0x000158af) cntbar_detail_list_event_pane

0x784f,	// (0x0001585f) cntbar_detail_list_shct_pane

0x9ecf,	// (0x00017edf) aid_list_gen

0xe612,	// (0x0001c622) aid_scroll

0xe61b,	// (0x0001c62b) aid_size_touch_scroll_bar

0x6dc2,	// (0x00014dd2) aid_list_double

0xe624,	// (0x0001c634) aid_list_single

0xe624,	// (0x0001c634) aid_list_single_lg

0xe62d,	// (0x0001c63d) aid_list_z_g_a_sm

0xe635,	// (0x0001c645) aid_list_z_g_d

0xe63d,	// (0x0001c64d) aid_txt_z_prm

0x78af,	// (0x000158bf) aid_txt_z_prm_cp01

0x78bd,	// (0x000158cd) aid_txt_z_sec

0x78cb,	// (0x000158db) main_cntbar_detail_cont_pane_g1_ParamLimits

0x78cb,	// (0x000158db) main_cntbar_detail_cont_pane_g1

0x78df,	// (0x000158ef) main_cntbar_detail_cont_pane_g2_ParamLimits

0x78df,	// (0x000158ef) main_cntbar_detail_cont_pane_g2

0x0001,

0xfce0,	// (0x0001dcf0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfce0,	// (0x0001dcf0) main_cntbar_detail_cont_pane_g

0xe64b,	// (0x0001c65b) main_cntbar_detail_cont_pane_t1

0xe659,	// (0x0001c669) main_cntbar_detail_cont_pane_t2

0xe667,	// (0x0001c677) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce5,	// (0x0001dcf5) main_cntbar_detail_cont_pane_t

0x78ef,	// (0x000158ff) cell_cntbar_detail_list_shct_pane_ParamLimits

0x78ef,	// (0x000158ff) cell_cntbar_detail_list_shct_pane

0xe675,	// (0x0001c685) cntbar_detail_list_shct_pane_g1

0xe67e,	// (0x0001c68e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcec,	// (0x0001dcfc) cntbar_detail_list_shct_pane_g

0x7903,	// (0x00015913) cntbar_detail_list_event_pane_g1_ParamLimits

0x7903,	// (0x00015913) cntbar_detail_list_event_pane_g1

0x790f,	// (0x0001591f) cntbar_detail_list_event_pane_g2_ParamLimits

0x790f,	// (0x0001591f) cntbar_detail_list_event_pane_g2

0x0005,

0xfcf1,	// (0x0001dd01) cntbar_detail_list_event_pane_g_ParamLimits

0xfcf1,	// (0x0001dd01) cntbar_detail_list_event_pane_g

0x797b,	// (0x0001598b) cntbar_detail_list_event_pane_t1_ParamLimits

0x797b,	// (0x0001598b) cntbar_detail_list_event_pane_t1

0x7990,	// (0x000159a0) cntbar_detail_list_event_pane_t2_ParamLimits

0x7990,	// (0x000159a0) cntbar_detail_list_event_pane_t2

0x0002,

0xfcfe,	// (0x0001dd0e) cntbar_detail_list_event_pane_t_ParamLimits

0xfcfe,	// (0x0001dd0e) cntbar_detail_list_event_pane_t

0x99a1,	// (0x000179b1) cell_cntbar_detail_list_shct_pane_g1

0xa6ac,	// (0x000186bc) navi_pane_mv_g3

0x9264,	// (0x00017274) main_cntbar_detail_pane_ParamLimits

0x91f5,	// (0x00017205) main_notif_wgt_pane

0xc616,	// (0x0001a626) aid_tch_main_mp4_pane_g4

0xc88e,	// (0x0001a89e) popup_slider_window_cp02

0xe383,	// (0x0001c393) list_recal_day_event_pane

0x7813,	// (0x00015823) cntbar_detail_btn_pane_ParamLimits

0x7813,	// (0x00015823) cntbar_detail_btn_pane

0x7829,	// (0x00015839) cntbar_detail_btn_pane_cp01_ParamLimits

0x7829,	// (0x00015839) cntbar_detail_btn_pane_cp01

0x784f,	// (0x0001585f) cntbar_detail_list_shct_pane_ParamLimits

0x785f,	// (0x0001586f) cntbar_detail_pane_g1_ParamLimits

0x785f,	// (0x0001586f) cntbar_detail_pane_g1

0x786f,	// (0x0001587f) cntbar_detail_pane_t1_ParamLimits

0x786f,	// (0x0001587f) cntbar_detail_pane_t1

0x791b,	// (0x0001592b) cntbar_detail_list_event_pane_g3_ParamLimits

0x791b,	// (0x0001592b) cntbar_detail_list_event_pane_g3

0x7933,	// (0x00015943) cntbar_detail_list_event_pane_g4_ParamLimits

0x7933,	// (0x00015943) cntbar_detail_list_event_pane_g4

0x794b,	// (0x0001595b) cntbar_detail_list_event_pane_g5_ParamLimits

0x794b,	// (0x0001595b) cntbar_detail_list_event_pane_g5

0x7963,	// (0x00015973) cntbar_detail_list_event_pane_g6_ParamLimits

0x7963,	// (0x00015973) cntbar_detail_list_event_pane_g6

0x79a5,	// (0x000159b5) cntbar_detail_list_event_pane_t3_ParamLimits

0x79a5,	// (0x000159b5) cntbar_detail_list_event_pane_t3

0x79b7,	// (0x000159c7) popup_notif_wgt_window_ParamLimits

0x79b7,	// (0x000159c7) popup_notif_wgt_window

0x79d0,	// (0x000159e0) popup_submenu_window_cp01_ParamLimits

0x79d0,	// (0x000159e0) popup_submenu_window_cp01

0x9c5e,	// (0x00017c6e) bg_popup_window_pane_cp10

0xe687,	// (0x0001c697) listscroll_notif_wgt_pane

0xe699,	// (0x0001c6a9) list_notif_wgt_window

0xe6a2,	// (0x0001c6b2) scroll_pane_cp033

0x79e6,	// (0x000159f6) list_notif_wgt_row_pane_ParamLimits

0x79e6,	// (0x000159f6) list_notif_wgt_row_pane

0xe6ab,	// (0x0001c6bb) aid_size_list_notif_wgt_del

0xe6e2,	// (0x0001c6f2) list_notif_wgt_row_pane_g1

0xe6ee,	// (0x0001c6fe) list_notif_wgt_row_pane_g2

0xe6fd,	// (0x0001c70d) list_notif_wgt_row_pane_g3

0x0002,

0xfd05,	// (0x0001dd15) list_notif_wgt_row_pane_g

0xe70a,	// (0x0001c71a) list_notif_wgt_row_pane_t1

0xe720,	// (0x0001c730) list_notif_wgt_row_pane_t2

0xe732,	// (0x0001c742) list_notif_wgt_row_pane_t3

0x0002,

0xfd0c,	// (0x0001dd1c) list_notif_wgt_row_pane_t

0xce03,	// (0x0001ae13) list_recal_day_event_pane_g1

0xe744,	// (0x0001c754) list_recal_day_event_pane_t1

0x91f5,	// (0x00017205) bg_button_pane_cp045

0xe753,	// (0x0001c763) cntbar_detail_btn_pane_t1

0xa7df,	// (0x000187ef) main_callh_pane_ParamLimits

0xa7df,	// (0x000187ef) main_callh_pane

0x91f5,	// (0x00017205) main_coverflow0_pane

0x91f5,	// (0x00017205) main_wgtman_pane

0x6d74,	// (0x00014d84) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6d74,	// (0x00014d84) main_fs_bigclock_unlock_btn_pane

0x72c5,	// (0x000152d5) bg_button_pane_cp16

0x72d5,	// (0x000152e5) cell_tport_appsw_pane_g3

0x79f6,	// (0x00015a06) cf0_flow_pane_ParamLimits

0x79f6,	// (0x00015a06) cf0_flow_pane

0xe761,	// (0x0001c771) listscroll_cf0_pane

0xe76c,	// (0x0001c77c) main_cf0_pane_g1

0x7a0b,	// (0x00015a1b) main_cf0_pane_t1_ParamLimits

0x7a0b,	// (0x00015a1b) main_cf0_pane_t1

0x7a22,	// (0x00015a32) main_cf0_pane_t2_ParamLimits

0x7a22,	// (0x00015a32) main_cf0_pane_t2

0x0001,

0xfd18,	// (0x0001dd28) main_cf0_pane_t_ParamLimits

0xfd18,	// (0x0001dd28) main_cf0_pane_t

0xe77e,	// (0x0001c78e) scroll_pane_cp11

0x7a39,	// (0x00015a49) cf0_flow_pane_g1

0x7a41,	// (0x00015a51) cf0_flow_pane_g2

0x0001,

0xfd1d,	// (0x0001dd2d) cf0_flow_pane_g

0x7a49,	// (0x00015a59) cf0_flow_pane_t1

0x91f5,	// (0x00017205) main_call6_pane

0x91f5,	// (0x00017205) main_calllock_pane

0x7a57,	// (0x00015a67) call6_btn_grp_pane_ParamLimits

0x7a57,	// (0x00015a67) call6_btn_grp_pane

0x7a71,	// (0x00015a81) call6_pane_g1_ParamLimits

0x7a71,	// (0x00015a81) call6_pane_g1

0x7a87,	// (0x00015a97) popup_call6_1st_window_ParamLimits

0x7a87,	// (0x00015a97) popup_call6_1st_window

0x7a98,	// (0x00015aa8) popup_call6_2nd_window_ParamLimits

0x7a98,	// (0x00015aa8) popup_call6_2nd_window

0x7aa9,	// (0x00015ab9) cell_call6_btn_pane_ParamLimits

0x7aa9,	// (0x00015ab9) cell_call6_btn_pane

0x9c5e,	// (0x00017c6e) bg_popup_call2_in_pane_cp03

0xe789,	// (0x0001c799) popup_call6_1st_window_g1

0xe791,	// (0x0001c7a1) popup_call6_1st_window_g2

0xe799,	// (0x0001c7a9) popup_call6_1st_window_g3

0x0002,

0xfd22,	// (0x0001dd32) popup_call6_1st_window_g

0xe7a1,	// (0x0001c7b1) popup_call6_1st_window_t1

0xe7b0,	// (0x0001c7c0) popup_call6_1st_window_t2

0xe7be,	// (0x0001c7ce) popup_call6_1st_window_t3

0x0002,

0xfd29,	// (0x0001dd39) popup_call6_1st_window_t

0x9c5e,	// (0x00017c6e) bg_popup_call2_in_pane_cp04

0xe7cc,	// (0x0001c7dc) popup_call6_2nd_window_g1

0xe7d4,	// (0x0001c7e4) popup_call6_2nd_window_g2

0xe7dc,	// (0x0001c7ec) popup_call6_2nd_window_g3

0x0002,

0xfd30,	// (0x0001dd40) popup_call6_2nd_window_g

0xe7e4,	// (0x0001c7f4) popup_call6_2nd_window_t1

0x91f5,	// (0x00017205) bg_button_pane_cp15

0xe7f3,	// (0x0001c803) cell_call6_btn_pane_g1

0xe7fc,	// (0x0001c80c) cell_call6_btn_pane_t1

0x7abc,	// (0x00015acc) listscroll_wgtman_pane_ParamLimits

0x7abc,	// (0x00015acc) listscroll_wgtman_pane

0x7add,	// (0x00015aed) wgtman_btn_pane_ParamLimits

0x7add,	// (0x00015aed) wgtman_btn_pane

0xa4b3,	// (0x000184c3) aid_scroll_copy1

0xe80b,	// (0x0001c81b) list_wgtman_pane

0x7b20,	// (0x00015b30) wgtman_btn_pane_g1_ParamLimits

0x7b20,	// (0x00015b30) wgtman_btn_pane_g1

0x7b4c,	// (0x00015b5c) wgtman_btn_pane_t1_ParamLimits

0x7b4c,	// (0x00015b5c) wgtman_btn_pane_t1

0xe815,	// (0x0001c825) wgtman_btn_pane_t2_ParamLimits

0xe815,	// (0x0001c825) wgtman_btn_pane_t2

0x0001,

0xfd37,	// (0x0001dd47) wgtman_btn_pane_t_ParamLimits

0xfd37,	// (0x0001dd47) wgtman_btn_pane_t

0x7b89,	// (0x00015b99) listrow_wgtman_pane_ParamLimits

0x7b89,	// (0x00015b99) listrow_wgtman_pane

0x7b9b,	// (0x00015bab) listrow_wgtman_pane_g1

0x7ba8,	// (0x00015bb8) listrow_wgtman_pane_g2

0x0001,

0xfd3c,	// (0x0001dd4c) listrow_wgtman_pane_g

0x7bc6,	// (0x00015bd6) listrow_wgtman_pane_t1

0x7bde,	// (0x00015bee) listrow_wgtman_pane_t2

0x0001,

0xfd41,	// (0x0001dd51) listrow_wgtman_pane_t

0x7c04,	// (0x00015c14) wait_bar_pane_cp09

0xe82c,	// (0x0001c83c) main_calllock_btn_pane

0xe836,	// (0x0001c846) main_calllock_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp17

0xe7f3,	// (0x0001c803) main_calllock_btn_pane_g1

0xe83e,	// (0x0001c84e) main_calllock_btn_pane_t1

0x91f5,	// (0x00017205) main_dialer3_pane

0x91f5,	// (0x00017205) main_fmrd2_pane

0x99a1,	// (0x000179b1) main_fs_bigclock_unlock_btn_pane_g1

0x7c1e,	// (0x00015c2e) main_fs_bigclock_unlock_btn_pane_t1

0x7c2c,	// (0x00015c3c) area_fmrd2_info_pane_ParamLimits

0x7c2c,	// (0x00015c3c) area_fmrd2_info_pane

0x7c3d,	// (0x00015c4d) area_fmrd2_visual_pane_ParamLimits

0x7c3d,	// (0x00015c4d) area_fmrd2_visual_pane

0x7c4b,	// (0x00015c5b) fmrd2_indi_pane_ParamLimits

0x7c4b,	// (0x00015c5b) fmrd2_indi_pane

0x7c58,	// (0x00015c68) area_fmrd2_visual_pane_g1

0x7c60,	// (0x00015c70) area_fmrd2_visual_pane_t1

0x7c70,	// (0x00015c80) area_fmrd2_visual_pane_t2

0x7c80,	// (0x00015c90) area_fmrd2_visual_pane_t3

0x0002,

0xfd4b,	// (0x0001dd5b) area_fmrd2_visual_pane_t

0x7c90,	// (0x00015ca0) area_fmrd2_info_pane_g1

0x7c98,	// (0x00015ca8) area_fmrd2_info_pane_t1

0x7ca8,	// (0x00015cb8) area_fmrd2_info_pane_t2

0x7cb8,	// (0x00015cc8) area_fmrd2_info_pane_t3

0x7cc8,	// (0x00015cd8) area_fmrd2_info_pane_t4

0x0003,

0xfd52,	// (0x0001dd62) area_fmrd2_info_pane_t

0x7cd6,	// (0x00015ce6) fmrd2_indi_pane_t1

0x7ce6,	// (0x00015cf6) fmrd2_indi_pane_t2

0x7cf6,	// (0x00015d06) fmrd2_indi_pane_t3

0x0002,

0xfd5b,	// (0x0001dd6b) fmrd2_indi_pane_t

0xda63,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xda63,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g5

0xdb14,	// (0x0001bb24) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdb14,	// (0x0001bb24) list_single_fs_bigclock_indicator_pane_t5

0xc882,	// (0x0001a892) aid_cell_bcale_month_pane_ParamLimits

0xc882,	// (0x0001a892) aid_cell_bcale_month_pane

0xc882,	// (0x0001a892) bcale_month_pane_ParamLimits

0xc882,	// (0x0001a892) bcale_month_pane

0xe6c4,	// (0x0001c6d4) bcale_preview_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) bcale_preview_pane

0xe58a,	// (0x0001c59a) list_single_fs_bigclock_pane_t1_ParamLimits

0xe5a9,	// (0x0001c5b9) list_single_fs_bigclock_pane_t2_ParamLimits

0xe5a9,	// (0x0001c5b9) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd6,	// (0x0001dce6) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd6,	// (0x0001dce6) list_single_fs_bigclock_pane_t

0x7c16,	// (0x00015c26) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd46,	// (0x0001dd56) main_fs_bigclock_unlock_btn_pane_g

0x7d06,	// (0x00015d16) aid_dia3_key_size_ParamLimits

0x7d06,	// (0x00015d16) aid_dia3_key_size

0x7d15,	// (0x00015d25) aid_dia3_listrow_size_ParamLimits

0x7d15,	// (0x00015d25) aid_dia3_listrow_size

0x7d2a,	// (0x00015d3a) dia3_keypad_fun_pane_ParamLimits

0x7d2a,	// (0x00015d3a) dia3_keypad_fun_pane

0x7d46,	// (0x00015d56) dia3_keypad_num_pane_ParamLimits

0x7d46,	// (0x00015d56) dia3_keypad_num_pane

0x7d61,	// (0x00015d71) dia3_listscroll_pane_ParamLimits

0x7d61,	// (0x00015d71) dia3_listscroll_pane

0x7d74,	// (0x00015d84) dia3_numentry_pane_ParamLimits

0x7d74,	// (0x00015d84) dia3_numentry_pane

0xe84d,	// (0x0001c85d) dia3_list_pane

0xe858,	// (0x0001c868) scroll_pane_cp12

0x91f5,	// (0x00017205) bg_dia3_numentry_pane

0x7d8c,	// (0x00015d9c) dia3_numentry_pane_t1

0x7d9b,	// (0x00015dab) cell_dia3_key_num_pane

0x7da3,	// (0x00015db3) cell_dia3_key0_fun_pane_ParamLimits

0x7da3,	// (0x00015db3) cell_dia3_key0_fun_pane

0x7db7,	// (0x00015dc7) cell_dia3_key1_fun_pane_ParamLimits

0x7db7,	// (0x00015dc7) cell_dia3_key1_fun_pane

0x7dcf,	// (0x00015ddf) dia3_listrow_pane

0xd7b6,	// (0x0001b7c6) bg_dia3_numentry_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp21

0xe863,	// (0x0001c873) cell_dia3_key_num_pane_t1

0xe871,	// (0x0001c881) cell_dia3_key_num_pane_t2

0xe880,	// (0x0001c890) cell_dia3_key_num_pane_t3

0xe88f,	// (0x0001c89f) cell_dia3_key_num_pane_t4

0x0003,

0xfd62,	// (0x0001dd72) cell_dia3_key_num_pane_t

0x91f5,	// (0x00017205) bg_button_pane_cp19

0x7de1,	// (0x00015df1) cell_dia3_key0_fun_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp20

0x7de9,	// (0x00015df9) cell_dia3_key1_fun_pane_g1

0xe6c4,	// (0x0001c6d4) area_left_week_number_pane

0xe6c4,	// (0x0001c6d4) area_top_day_name_pane

0xe6c4,	// (0x0001c6d4) frame_month_view_pane

0xe6c4,	// (0x0001c6d4) grid_month_view_pane

0xe6c4,	// (0x0001c6d4) cell_top_day_name_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) cell_top_day_name_pane

0xe6c4,	// (0x0001c6d4) cell_area_left_week_number_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) cell_area_left_week_number_pane

0xe6c4,	// (0x0001c6d4) cell_month_view_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) cell_month_view_pane

0xe6b8,	// (0x0001c6c8) frm_month_g1

0xe6b8,	// (0x0001c6c8) frm_month_g2

0xe6b8,	// (0x0001c6c8) frm_month_g3

0xe6b8,	// (0x0001c6c8) frm_month_g4

0xe6b8,	// (0x0001c6c8) frm_month_g5

0xe6b8,	// (0x0001c6c8) frm_month_g6

0xe6b8,	// (0x0001c6c8) frm_month_g7

0xe6b8,	// (0x0001c6c8) frm_month_g8

0xe6b8,	// (0x0001c6c8) frm_month_g9

0xe6b8,	// (0x0001c6c8) frm_month_g10

0xe6b8,	// (0x0001c6c8) frm_month_g11

0xe6b8,	// (0x0001c6c8) frm_month_g12

0xe6b8,	// (0x0001c6c8) frm_month_g13

0xe6b8,	// (0x0001c6c8) frm_month_g14

0xe6b8,	// (0x0001c6c8) frm_month_g15

0xe6b8,	// (0x0001c6c8) frm_month_g16

0x000f,

0xfd6b,	// (0x0001dd7b) frm_month_g

0xe89e,	// (0x0001c8ae) cell_top_day_name_pane_t1

0xe6b8,	// (0x0001c6c8) cell_area_left_week_number_pane_g1

0xe89e,	// (0x0001c8ae) cell_area_left_week_number_pane_t1

0xe6b8,	// (0x0001c6c8) cell_month_view_pane_g1

0xe89e,	// (0x0001c8ae) cell_month_view_pane_t1

0x91f5,	// (0x00017205) main_fps_pane

0xdd25,	// (0x0001bd35) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdd25,	// (0x0001bd35) cmail_ddmenu_btn02_pane_cp1

0xdd41,	// (0x0001bd51) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdd41,	// (0x0001bd51) cmail_ddmenu_btn02_pane_cp2

0x76d5,	// (0x000156e5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x76d5,	// (0x000156e5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc89,	// (0x0001dc99) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc89,	// (0x0001dc99) cmail_ddmenu_btn02_pane_g

0x76f3,	// (0x00015703) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x76f3,	// (0x00015703) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc8e,	// (0x0001dc9e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc8e,	// (0x0001dc9e) cmail_ddmenu_btn02_pane_t

0x7df1,	// (0x00015e01) fps_text_pane_ParamLimits

0x7df1,	// (0x00015e01) fps_text_pane

0x7e08,	// (0x00015e18) main_fps_pane_g1_ParamLimits

0x7e08,	// (0x00015e18) main_fps_pane_g1

0x7e22,	// (0x00015e32) wait_bar_pane_cp010_ParamLimits

0x7e22,	// (0x00015e32) wait_bar_pane_cp010

0x7e33,	// (0x00015e43) fps_text_pane_t1_ParamLimits

0x7e33,	// (0x00015e43) fps_text_pane_t1

0xe6d0,	// (0x0001c6e0) cam4_image_uncrop_pane_g1

0xe6d9,	// (0x0001c6e9) cam4_image_uncrop_pane_g2

0x4fbc,	// (0x00012fcc) cam4_image_uncrop_pane_g3

0x4fc5,	// (0x00012fd5) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x0001d7f0) cam4_image_uncrop_pane_g

0x7dcf,	// (0x00015ddf) dia3_listrow_pane_ParamLimits

0x91f5,	// (0x00017205) main_phob2_pane

0x7296,	// (0x000152a6) cell_tport_appsw_pane_cp02_ParamLimits

0x7296,	// (0x000152a6) cell_tport_appsw_pane_cp02

0x72aa,	// (0x000152ba) cell_tport_appsw_pane_cp03_ParamLimits

0x72aa,	// (0x000152ba) cell_tport_appsw_pane_cp03

0x91f5,	// (0x00017205) phob2_contact_card_pane

0x91f5,	// (0x00017205) phob2_listscroll_pane

0xe8b0,	// (0x0001c8c0) phob2_list_pane

0xe346,	// (0x0001c356) scroll_pane_cp034

0x7e4b,	// (0x00015e5b) phob2_cc_data_pane_ParamLimits

0x7e4b,	// (0x00015e5b) phob2_cc_data_pane

0x7e6a,	// (0x00015e7a) phob2_cc_listscroll_pane_ParamLimits

0x7e6a,	// (0x00015e7a) phob2_cc_listscroll_pane

0x7e88,	// (0x00015e98) list_double_large_graphic_phob2_pane_ParamLimits

0x7e88,	// (0x00015e98) list_double_large_graphic_phob2_pane

0x7ea7,	// (0x00015eb7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7ea7,	// (0x00015eb7) list_double_large_graphic_phob2_pane_g1

0x7eb9,	// (0x00015ec9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7eb9,	// (0x00015ec9) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd8c,	// (0x0001dd9c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd8c,	// (0x0001dd9c) list_double_large_graphic_phob2_pane_g

0x7eed,	// (0x00015efd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7eed,	// (0x00015efd) list_double_large_graphic_phob2_pane_t1

0x7f11,	// (0x00015f21) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7f11,	// (0x00015f21) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd95,	// (0x0001dda5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd95,	// (0x0001dda5) list_double_large_graphic_phob2_pane_t

0x9264,	// (0x00017274) list_highlight_pane_cp024

0xe8b8,	// (0x0001c8c8) phob2_cc_button_pane

0x7f32,	// (0x00015f42) phob2_cc_data_pane_g1_ParamLimits

0x7f32,	// (0x00015f42) phob2_cc_data_pane_g1

0x7f49,	// (0x00015f59) phob2_cc_data_pane_g2_ParamLimits

0x7f49,	// (0x00015f59) phob2_cc_data_pane_g2

0x0001,

0xfd9a,	// (0x0001ddaa) phob2_cc_data_pane_g_ParamLimits

0xfd9a,	// (0x0001ddaa) phob2_cc_data_pane_g

0x7f5b,	// (0x00015f6b) phob2_cc_data_pane_t1_ParamLimits

0x7f5b,	// (0x00015f6b) phob2_cc_data_pane_t1

0x7f73,	// (0x00015f83) phob2_cc_data_pane_t2_ParamLimits

0x7f73,	// (0x00015f83) phob2_cc_data_pane_t2

0x7f8b,	// (0x00015f9b) phob2_cc_data_pane_t3_ParamLimits

0x7f8b,	// (0x00015f9b) phob2_cc_data_pane_t3

0x0002,

0xfd9f,	// (0x0001ddaf) phob2_cc_data_pane_t_ParamLimits

0xfd9f,	// (0x0001ddaf) phob2_cc_data_pane_t

0xe8c0,	// (0x0001c8d0) phob2_cc_list_pane_ParamLimits

0xe8c0,	// (0x0001c8d0) phob2_cc_list_pane

0xceac,	// (0x0001aebc) scroll_pane_cp035_ParamLimits

0xceac,	// (0x0001aebc) scroll_pane_cp035

0x9264,	// (0x00017274) bg_button_pane_cp033

0xe8cc,	// (0x0001c8dc) phob2_cc_button_pane_g1

0xe8d8,	// (0x0001c8e8) phob2_cc_button_pane_t1

0xe8ed,	// (0x0001c8fd) phob2_cc_button_pane_t2

0x0001,

0xfda6,	// (0x0001ddb6) phob2_cc_button_pane_t

0x7fa3,	// (0x00015fb3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x7fa3,	// (0x00015fb3) list_double_large_graphic_phob2_cc_pane

0x7fd3,	// (0x00015fe3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x7fd3,	// (0x00015fe3) list_double_large_graphic_phob2_cc_pane_g1

0x7fdf,	// (0x00015fef) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7fdf,	// (0x00015fef) list_double_large_graphic_phob2_cc_pane_g2

0x7feb,	// (0x00015ffb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7feb,	// (0x00015ffb) list_double_large_graphic_phob2_cc_pane_g3

0x7ff7,	// (0x00016007) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7ff7,	// (0x00016007) list_double_large_graphic_phob2_cc_pane_g4

0x8003,	// (0x00016013) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8003,	// (0x00016013) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdab,	// (0x0001ddbb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdab,	// (0x0001ddbb) list_double_large_graphic_phob2_cc_pane_g

0x800f,	// (0x0001601f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x800f,	// (0x0001601f) list_double_large_graphic_phob2_cc_pane_t1

0x8038,	// (0x00016048) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8038,	// (0x00016048) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb6,	// (0x0001ddc6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb6,	// (0x0001ddc6) list_double_large_graphic_phob2_cc_pane_t

0xe8ff,	// (0x0001c90f) list_highlight_pane_cp025_ParamLimits

0xe8ff,	// (0x0001c90f) list_highlight_pane_cp025

0x9264,	// (0x00017274) bg_button_pane_cp033_ParamLimits

0xe8cc,	// (0x0001c8dc) phob2_cc_button_pane_g1_ParamLimits

0xe8d8,	// (0x0001c8e8) phob2_cc_button_pane_t1_ParamLimits

0xe8ed,	// (0x0001c8fd) phob2_cc_button_pane_t2_ParamLimits

0xfda6,	// (0x0001ddb6) phob2_cc_button_pane_t_ParamLimits

0x0bd6,	// (0x0000ebe6) popup_wgtman_window

0xcc28,	// (0x0001ac38) scroll_pane_cp038

0x7b02,	// (0x00015b12) wgtman_btn_pane_cp_01_ParamLimits

0x7b02,	// (0x00015b12) wgtman_btn_pane_cp_01

0xe90d,	// (0x0001c91d) wgtman_content_pane

0xe916,	// (0x0001c926) wgtman_heading_pane

0x91f5,	// (0x00017205) bg_heading_pane_cp02

0xe91f,	// (0x0001c92f) wgtman_heading_pane_g1

0xe927,	// (0x0001c937) wgtman_heading_pane_t1

0xe935,	// (0x0001c945) scroll_pane_cp036

0xe93d,	// (0x0001c94d) wgtman_list_pane

0xe945,	// (0x0001c955) wgtman_list_pane_t1_ParamLimits

0xe945,	// (0x0001c955) wgtman_list_pane_t1

0xc9a5,	// (0x0001a9b5) cam4_grid_pane

0x5ce0,	// (0x00013cf0) bg_button_pane_cp015_ParamLimits

0x5cf1,	// (0x00013d01) bg_button_pane_cp016_ParamLimits

0x5cfd,	// (0x00013d0d) bg_button_pane_cp017_ParamLimits

0x5d51,	// (0x00013d61) popup_vitu2_query_window_g3_ParamLimits

0x5d51,	// (0x00013d61) popup_vitu2_query_window_g3

0x5df2,	// (0x00013e02) popup_vitu2_query_window_t6_ParamLimits

0x5df2,	// (0x00013e02) popup_vitu2_query_window_t6

0x5e1d,	// (0x00013e2d) popup_vitu2_query_window_t7_ParamLimits

0x5e1d,	// (0x00013e2d) popup_vitu2_query_window_t7

0xe6d0,	// (0x0001c6e0) cam4_grid_pane_g1

0xe6d9,	// (0x0001c6e9) cam4_grid_pane_g2

0xe95f,	// (0x0001c96f) cam4_grid_pane_g3

0xe968,	// (0x0001c978) cam4_grid_pane_g4

0x0003,

0xfdbb,	// (0x0001ddcb) cam4_grid_pane_g

0x167a,	// (0x0000f68a) aid_placing_vt_slider_lsc_ParamLimits

0x1985,	// (0x0000f995) vidtel_button_pane_ParamLimits

0x1985,	// (0x0000f995) vidtel_button_pane

0x91f5,	// (0x00017205) bg_button_pane_cp034

0xe973,	// (0x0001c983) vidtel_button_pane_g1

0xe97b,	// (0x0001c98b) vidtel_button_pane_t1

0xcdb7,	// (0x0001adc7) aid_size_vtel_slider_touch

0xceac,	// (0x0001aebc) scroll_pane_cp039

0x6b0b,	// (0x00014b1b) ncim_query_button_pane_cp01_ParamLimits

0x6b2a,	// (0x00014b3a) ncimui_query_pane_g1_ParamLimits

0x9264,	// (0x00017274) input_focus_pane_cp012_ParamLimits

0xd7f4,	// (0x0001b804) ncim_query_entry_pane_t1_ParamLimits

0xceac,	// (0x0001aebc) scroll_pane_cp039_ParamLimits

0xa597,	// (0x000185a7) navi_pane_bcale_mc_g1

0xa59f,	// (0x000185af) navi_pane_bcale_mc_t1

0xdd75,	// (0x0001bd85) main_sp_fs_email_pane_g1

0xdd81,	// (0x0001bd91) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x0001dbdc) main_sp_fs_email_pane_g

0xe1d5,	// (0x0001c1e5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe1d5,	// (0x0001c1e5) list_single_cale_mrui_row_pane_g3

0x7713,	// (0x00015723) list_single_recal_day_pane_g5_event_pane

0xe3f4,	// (0x0001c404) list_single_recal_day_pane_g7

0xe991,	// (0x0001c9a1) list_recal_day_event_pane_cp01

0xe99a,	// (0x0001c9aa) list_recal_vselct_arw_lo_pane_cp01

0xe9a2,	// (0x0001c9b2) list_recal_vselct_arw_up_pane_cp01

0xe9aa,	// (0x0001c9ba) list_recal_vselct_pane_cp01

0xce03,	// (0x0001ae13) list_recal_day_event_pane_cp01_g1

0xe9b4,	// (0x0001c9c4) list_recal_day_event_pane_cp01_t1

0xe3fc,	// (0x0001c40c) list_single_recal_day_pane_t1_ParamLimits

0xe40e,	// (0x0001c41e) list_single_recal_day_pane_t2_ParamLimits

0xfc9e,	// (0x0001dcae) list_single_recal_day_pane_t_ParamLimits

0x98e0,	// (0x000178f0) bg_notes_pane_ParamLimits

0x99dd,	// (0x000179ed) list_notes_pane_ParamLimits

0x0d20,	// (0x0000ed30) scroll_pane_cp06_ParamLimits

0x9a19,	// (0x00017a29) main_notes_pane_ParamLimits

0x9264,	// (0x00017274) main_welc_pane

0x809a,	// (0x000160aa) main_welc_body_pane_ParamLimits

0x809a,	// (0x000160aa) main_welc_body_pane

0x80b8,	// (0x000160c8) main_welc_opti_pane_ParamLimits

0x80b8,	// (0x000160c8) main_welc_opti_pane

0x8128,	// (0x00016138) main_welc_pane_t1_ParamLimits

0x8128,	// (0x00016138) main_welc_pane_t1

0x8328,	// (0x00016338) main_welc_body_row_pane_ParamLimits

0x8328,	// (0x00016338) main_welc_body_row_pane

0x994d,	// (0x0001795d) main_welc_opti_row_pane_ParamLimits

0x994d,	// (0x0001795d) main_welc_opti_row_pane

0xe9ca,	// (0x0001c9da) main_welc_opti_row_pane_g1

0x833c,	// (0x0001634c) main_welc_opti_row_pane_t1

0xe9d2,	// (0x0001c9e2) main_welc_body_row_pane_t1

0xe691,	// (0x0001c6a1) popup_notif_wgt_heading_pane

0xe6ab,	// (0x0001c6bb) aid_size_list_notif_wgt_del_ParamLimits

0xe6e2,	// (0x0001c6f2) list_notif_wgt_row_pane_g1_ParamLimits

0xe6ee,	// (0x0001c6fe) list_notif_wgt_row_pane_g2_ParamLimits

0xe6fd,	// (0x0001c70d) list_notif_wgt_row_pane_g3_ParamLimits

0xfd05,	// (0x0001dd15) list_notif_wgt_row_pane_g_ParamLimits

0xe70a,	// (0x0001c71a) list_notif_wgt_row_pane_t1_ParamLimits

0xe720,	// (0x0001c730) list_notif_wgt_row_pane_t2_ParamLimits

0xe732,	// (0x0001c742) list_notif_wgt_row_pane_t3_ParamLimits

0xfd0c,	// (0x0001dd1c) list_notif_wgt_row_pane_t_ParamLimits

0x7b9b,	// (0x00015bab) listrow_wgtman_pane_g1_ParamLimits

0x7ba8,	// (0x00015bb8) listrow_wgtman_pane_g2_ParamLimits

0xfd3c,	// (0x0001dd4c) listrow_wgtman_pane_g_ParamLimits

0x7bc6,	// (0x00015bd6) listrow_wgtman_pane_t1_ParamLimits

0x7bde,	// (0x00015bee) listrow_wgtman_pane_t2_ParamLimits

0xfd41,	// (0x0001dd51) listrow_wgtman_pane_t_ParamLimits

0x7c04,	// (0x00015c14) wait_bar_pane_cp09_ParamLimits

0x91f5,	// (0x00017205) bg_popup_heading_pane_cp02

0xe9e1,	// (0x0001c9f1) popup_notif_wgt_heading_pane_g1

0xe9e9,	// (0x0001c9f9) popup_notif_wgt_heading_pane_t1

0x91f5,	// (0x00017205) main_vids_pane

0x91f5,	// (0x00017205) vids_listscroll_pane

0x834b,	// (0x0001635b) scroll_pane_cp040

0x91f5,	// (0x00017205) vids_list_pane

0x8356,	// (0x00016366) vids_list_double_pane_ParamLimits

0x8356,	// (0x00016366) vids_list_double_pane

0x8367,	// (0x00016377) vids_list_double_pane_g1

0x8370,	// (0x00016380) vids_list_double_pane_t1

0x8380,	// (0x00016390) vids_list_double_pane_t2

0x0001,

0xfdda,	// (0x0001ddea) vids_list_double_pane_t

0x9264,	// (0x00017274) main_ncimui_pane_ParamLimits

0x6941,	// (0x00014951) main_ncimui_pane_g1_ParamLimits

0x694d,	// (0x0001495d) main_ncimui_pane_g2_ParamLimits

0x694d,	// (0x0001495d) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x0001dae2) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x0001dae2) main_ncimui_pane_g

0x80d3,	// (0x000160e3) main_welc_pane_g1_ParamLimits

0x80d3,	// (0x000160e3) main_welc_pane_g1

0x80e8,	// (0x000160f8) main_welc_pane_g2_ParamLimits

0x80e8,	// (0x000160f8) main_welc_pane_g2

0x0003,

0xfdc4,	// (0x0001ddd4) main_welc_pane_g_ParamLimits

0xfdc4,	// (0x0001ddd4) main_welc_pane_g

0x98e0,	// (0x000178f0) listscroll_mce_pane_ParamLimits

0xa6ec,	// (0x000186fc) wait_bar_pane_cp10

0xb9b2,	// (0x000199c2) main_cale_day_pane_ParamLimits

0xb9b2,	// (0x000199c2) main_cale_week_pane_ParamLimits

0x98e0,	// (0x000178f0) main_messa_pane_ParamLimits

0x44ad,	// (0x000124bd) main_clock2_btn_pane_ParamLimits

0x44ad,	// (0x000124bd) main_clock2_btn_pane

0xc257,	// (0x0001a267) main_clock2_btn_pane_cp01_ParamLimits

0xc257,	// (0x0001a267) main_clock2_btn_pane_cp01

0xe16f,	// (0x0001c17f) list_cale_mrui_pane_ParamLimits

0xe776,	// (0x0001c786) main_cf0_pane_g2

0x0001,

0xfd13,	// (0x0001dd23) main_cf0_pane_g

0xe6c4,	// (0x0001c6d4) area_left_week_number_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) area_top_day_name_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) frame_month_view_pane_ParamLimits

0xe6c4,	// (0x0001c6d4) grid_month_view_pane_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g1_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g2_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g3_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g4_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g5_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g6_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g7_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g8_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g9_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g10_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g11_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g12_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g13_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g14_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g15_ParamLimits

0xe6b8,	// (0x0001c6c8) frm_month_g16_ParamLimits

0xfd6b,	// (0x0001dd7b) frm_month_g_ParamLimits

0xe89e,	// (0x0001c8ae) cell_top_day_name_pane_t1_ParamLimits

0xe6b8,	// (0x0001c6c8) cell_area_left_week_number_pane_g1_ParamLimits

0xe89e,	// (0x0001c8ae) cell_area_left_week_number_pane_t1_ParamLimits

0xe6b8,	// (0x0001c6c8) cell_month_view_pane_g1_ParamLimits

0xe89e,	// (0x0001c8ae) cell_month_view_pane_t1_ParamLimits

0x98d8,	// (0x000178e8) main_clock2_btn_pane_g1

0xe9f7,	// (0x0001ca07) main_clock2_btn_pane_t1

0x9264,	// (0x00017274) listscroll_cmail_pane_ParamLimits

0xdd75,	// (0x0001bd85) main_sp_fs_email_pane_g1_ParamLimits

0xdd81,	// (0x0001bd91) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x0001dbdc) main_sp_fs_email_pane_g_ParamLimits

0xe364,	// (0x0001c374) list_recal_day_pane_ParamLimits

0xe375,	// (0x0001c385) mian_recal_day_pane_t1

0x7139,	// (0x00015149) list_single_dyc_row_text_pane_t4_ParamLimits

0x7139,	// (0x00015149) list_single_dyc_row_text_pane_t4

0x7182,	// (0x00015192) list_single_dyc_row_text_pane_t5_ParamLimits

0x7182,	// (0x00015192) list_single_dyc_row_text_pane_t5

0xde49,	// (0x0001be59) list_single_dyc_row_text_pane_t6_ParamLimits

0xde49,	// (0x0001be59) list_single_dyc_row_text_pane_t6

0xa011,	// (0x00018021) aid_mgn_list_cale_time_pane

0x9264,	// (0x00017274) main_gallery2_pane_ParamLimits

0xc26d,	// (0x0001a27d) main_clock2_pane_cp01_t1

0xc27d,	// (0x0001a28d) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x0001d6cc) main_clock2_pane_cp01_t

0x10bd,	// (0x0000f0cd) cale_week_scroll_pane_g16_ParamLimits

0x10bd,	// (0x0000f0cd) cale_week_scroll_pane_g16

0x9c5e,	// (0x00017c6e) vorec_slider_pane

0xe97b,	// (0x0001c98b) vidtel_button_pane_t1_ParamLimits

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7779,	// (0x00015789) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcc1,	// (0x0001dcd1) main_fs_bigclock_clock_pane_g_ParamLimits

0x778c,	// (0x0001579c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x77a5,	// (0x000157b5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcca,	// (0x0001dcda) main_fs_bigclock_clock_pane_t_ParamLimits

0x3d41,	// (0x00011d51) main_mup3_lyrics_pane_ParamLimits

0x3d41,	// (0x00011d51) main_mup3_lyrics_pane

0x83a8,	// (0x000163b8) main_mup3_lyrics_pane_t1_ParamLimits

0x83a8,	// (0x000163b8) main_mup3_lyrics_pane_t1

0xc600,	// (0x0001a610) aid_main_mp4_pane_t1_area

0xc60a,	// (0x0001a61a) aid_main_mp4_pane_t2_area

0xc6b4,	// (0x0001a6c4) main_mp4_pane_g7_ParamLimits

0xc6b4,	// (0x0001a6c4) main_mp4_pane_g7

0xc6c0,	// (0x0001a6d0) main_mp4_pane_g8_ParamLimits

0xc6c0,	// (0x0001a6d0) main_mp4_pane_g8

0x4d8f,	// (0x00012d9f) aid_call6_pane_g1_size

0x7fbd,	// (0x00015fcd) list_double_large_graphic_phob2_other_pane_ParamLimits

0x7fbd,	// (0x00015fcd) list_double_large_graphic_phob2_other_pane

0x9b65,	// (0x00017b75) list_double_large_graphic_phob2_other_pane_g1

0x91f5,	// (0x00017205) list_highlight_pane_cp026

0x9264,	// (0x00017274) main_welc_pane_ParamLimits

0x6f94,	// (0x00014fa4) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6f94,	// (0x00014fa4) main_sp_fs_ctrlbar_pane_g3

0x6fae,	// (0x00014fbe) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6fae,	// (0x00014fbe) main_sp_fs_ctrlbar_pane_g4

0x6fe2,	// (0x00014ff2) toolbar2_fixed_button_pane_cp01

0x6fed,	// (0x00014ffd) toolbar2_fixed_button_pane_cp02

0x6ffa,	// (0x0001500a) toolbar2_fixed_button_pane_cp03

0x8074,	// (0x00016084) list_welc_entry_pane_ParamLimits

0x8074,	// (0x00016084) list_welc_entry_pane

0x80fd,	// (0x0001610d) main_welc_pane_g3_ParamLimits

0x80fd,	// (0x0001610d) main_welc_pane_g3

0x8146,	// (0x00016156) main_welc_pane_t2_ParamLimits

0x8146,	// (0x00016156) main_welc_pane_t2

0x8161,	// (0x00016171) main_welc_pane_t3_ParamLimits

0x8161,	// (0x00016171) main_welc_pane_t3

0x0005,

0xfdcd,	// (0x0001dddd) main_welc_pane_t_ParamLimits

0xfdcd,	// (0x0001dddd) main_welc_pane_t

0x8299,	// (0x000162a9) welc_button_pane_ParamLimits

0x8299,	// (0x000162a9) welc_button_pane

0x8313,	// (0x00016323) welc_service_logo_pane_ParamLimits

0x8313,	// (0x00016323) welc_service_logo_pane

0x83c4,	// (0x000163d4) list_single_welc_entry_pane_ParamLimits

0x83c4,	// (0x000163d4) list_single_welc_entry_pane

0x83d5,	// (0x000163e5) list_single_welc_entry_pane_g1

0x83dd,	// (0x000163ed) list_single_welc_entry_pane_t1

0x83eb,	// (0x000163fb) list_single_welc_entry_pane_t2

0x0001,

0xfddf,	// (0x0001ddef) list_single_welc_entry_pane_t

0x91f5,	// (0x00017205) bg_button_pane_cp035

0x83f9,	// (0x00016409) welc_button_pane_t1

0xea13,	// (0x0001ca23) welc_service_logo_pane_g1

0xea1c,	// (0x0001ca2c) welc_service_logo_pane_g2

0x0001,

0xfde4,	// (0x0001ddf4) welc_service_logo_pane_g

0x91f5,	// (0x00017205) main_int_radio_pane

0x9ab4,	// (0x00017ac4) list_single_fs_dyc_pane_g1

0x7ec8,	// (0x00015ed8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7ec8,	// (0x00015ed8) list_double_large_graphic_phob2_pane_g3

0x7eda,	// (0x00015eea) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7eda,	// (0x00015eea) list_double_large_graphic_phob2_pane_g4

0x8407,	// (0x00016417) main_int_radio1_pane_ParamLimits

0x8407,	// (0x00016417) main_int_radio1_pane

0xea25,	// (0x0001ca35) find_pane_cp02

0x8424,	// (0x00016434) input_focus_pane_cp12_ParamLimits

0x8424,	// (0x00016434) input_focus_pane_cp12

0x8434,	// (0x00016444) input_focus_pane_cp13_ParamLimits

0x8434,	// (0x00016444) input_focus_pane_cp13

0x8448,	// (0x00016458) input_focus_pane_cp14_ParamLimits

0x8448,	// (0x00016458) input_focus_pane_cp14

0xea2e,	// (0x0001ca3e) int_radio1_listscroll_pane

0x845c,	// (0x0001646c) main_int_radio1_pane_g1_ParamLimits

0x845c,	// (0x0001646c) main_int_radio1_pane_g1

0x8474,	// (0x00016484) main_int_radio1_pane_t1_ParamLimits

0x8474,	// (0x00016484) main_int_radio1_pane_t1

0x848f,	// (0x0001649f) main_int_radio1_pane_t2_ParamLimits

0x848f,	// (0x0001649f) main_int_radio1_pane_t2

0x84aa,	// (0x000164ba) main_int_radio1_pane_t3_ParamLimits

0x84aa,	// (0x000164ba) main_int_radio1_pane_t3

0x84c5,	// (0x000164d5) main_int_radio1_pane_t4_ParamLimits

0x84c5,	// (0x000164d5) main_int_radio1_pane_t4

0xea38,	// (0x0001ca48) main_int_radio1_pane_t5_ParamLimits

0xea38,	// (0x0001ca48) main_int_radio1_pane_t5

0x84d7,	// (0x000164e7) main_int_radio1_pane_t6_ParamLimits

0x84d7,	// (0x000164e7) main_int_radio1_pane_t6

0x84ec,	// (0x000164fc) main_int_radio1_pane_t7_ParamLimits

0x84ec,	// (0x000164fc) main_int_radio1_pane_t7

0x8501,	// (0x00016511) main_int_radio1_pane_t8_ParamLimits

0x8501,	// (0x00016511) main_int_radio1_pane_t8

0x8520,	// (0x00016530) main_int_radio1_pane_t9_ParamLimits

0x8520,	// (0x00016530) main_int_radio1_pane_t9

0x8532,	// (0x00016542) main_int_radio1_pane_t10_ParamLimits

0x8532,	// (0x00016542) main_int_radio1_pane_t10

0x8558,	// (0x00016568) main_int_radio1_pane_t11_ParamLimits

0x8558,	// (0x00016568) main_int_radio1_pane_t11

0x857e,	// (0x0001658e) main_int_radio1_pane_t12_ParamLimits

0x857e,	// (0x0001658e) main_int_radio1_pane_t12

0x000b,

0xfde9,	// (0x0001ddf9) main_int_radio1_pane_t_ParamLimits

0xfde9,	// (0x0001ddf9) main_int_radio1_pane_t

0xea4a,	// (0x0001ca5a) int_radio_list_pane

0xe346,	// (0x0001c356) scroll_pane_cp037

0xea52,	// (0x0001ca62) list_double_large_graphic_int_radio_pane_ParamLimits

0xea52,	// (0x0001ca62) list_double_large_graphic_int_radio_pane

0xea6a,	// (0x0001ca7a) list_double_large_graphic_int_radio_pane_g1

0xea73,	// (0x0001ca83) list_double_large_graphic_int_radio_pane_t1

0xea81,	// (0x0001ca91) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe02,	// (0x0001de12) list_double_large_graphic_int_radio_pane_t

0x91f5,	// (0x00017205) list_highlight_pane_cp027

0xe9c2,	// (0x0001c9d2) main_button_pane_4

0x8110,	// (0x00016120) main_welc_pane_g4_ParamLimits

0x8110,	// (0x00016120) main_welc_pane_g4

0x817a,	// (0x0001618a) main_welc_pane_t4_ParamLimits

0x817a,	// (0x0001618a) main_welc_pane_t4

0x8195,	// (0x000161a5) main_welc_pane_t5_ParamLimits

0x8195,	// (0x000161a5) main_welc_pane_t5

0x81d6,	// (0x000161e6) main_welc_pane_t6_ParamLimits

0x81d6,	// (0x000161e6) main_welc_pane_t6

0x82b0,	// (0x000162c0) welc_button_pane_2_ParamLimits

0x82b0,	// (0x000162c0) welc_button_pane_2

0x82cc,	// (0x000162dc) welc_button_pane_3_ParamLimits

0x82cc,	// (0x000162dc) welc_button_pane_3

0xe9c2,	// (0x0001c9d2) welc_button_pane_4

0x82eb,	// (0x000162fb) welc_button_pane_5_ParamLimits

0x82eb,	// (0x000162fb) welc_button_pane_5

0x09da,	// (0x0000e9ea) main_popup_welc_pane

0xeaa7,	// (0x0001cab7) main_welc_sk_g3

0xeab1,	// (0x0001cac1) main_welc_sk_g4

0xeabb,	// (0x0001cacb) main_welc_sk_t3

0xeacb,	// (0x0001cadb) main_welc_sk_t4

0xeadb,	// (0x0001caeb) popup_welc_pane_t4

0xeae9,	// (0x0001caf9) popup_welc_pane_t5

0xeaf7,	// (0x0001cb07) popup_welc_pane_t6

0x91f5,	// (0x00017205) main_acti_pane

0x91f5,	// (0x00017205) main_sso_pane

0x8590,	// (0x000165a0) sso_body_pane_ParamLimits

0x8590,	// (0x000165a0) sso_body_pane

0x85b0,	// (0x000165c0) sso_logo_pane_ParamLimits

0x85b0,	// (0x000165c0) sso_logo_pane

0x85e9,	// (0x000165f9) sso_sk_pane_ParamLimits

0x85e9,	// (0x000165f9) sso_sk_pane

0xeb35,	// (0x0001cb45) main_sso_logo_pane_g1

0x85fb,	// (0x0001660b) sso_sk_pane_t1_ParamLimits

0x85fb,	// (0x0001660b) sso_sk_pane_t1

0x8615,	// (0x00016625) sso_sk_pane_t2_ParamLimits

0x8615,	// (0x00016625) sso_sk_pane_t2

0x0001,

0xfe07,	// (0x0001de17) sso_sk_pane_t_ParamLimits

0xfe07,	// (0x0001de17) sso_sk_pane_t

0xeb3e,	// (0x0001cb4e) aid_sso_gap

0xeb47,	// (0x0001cb57) aid_sso_txt1

0xeb51,	// (0x0001cb61) aid_sso_txt2

0xeb5b,	// (0x0001cb6b) aid_sso_txt3

0x0002,

0xfe0c,	// (0x0001de1c) aid_sso_txt

0xeb65,	// (0x0001cb75) aid_sso_widget

0x867f,	// (0x0001668f) sso_btn_pane_ParamLimits

0x867f,	// (0x0001668f) sso_btn_pane

0x8713,	// (0x00016723) sso_option_pane_ParamLimits

0x8713,	// (0x00016723) sso_option_pane

0x87c7,	// (0x000167d7) sso_query_pane_ParamLimits

0x87c7,	// (0x000167d7) sso_query_pane

0x881d,	// (0x0001682d) sso_query_pane_cp01_ParamLimits

0x881d,	// (0x0001682d) sso_query_pane_cp01

0x8875,	// (0x00016885) sso_t_hdr_pane_ParamLimits

0x8875,	// (0x00016885) sso_t_hdr_pane

0x889f,	// (0x000168af) sso_t_nml_pane_ParamLimits

0x889f,	// (0x000168af) sso_t_nml_pane

0x88f5,	// (0x00016905) sso_t_sub_pane

0x85bd,	// (0x000165cd) sso_popup_window_ParamLimits

0x85bd,	// (0x000165cd) sso_popup_window

0x862b,	// (0x0001663b) sso_apps_pane_ParamLimits

0x862b,	// (0x0001663b) sso_apps_pane

0x8655,	// (0x00016665) sso_body_pane_g1

0x865f,	// (0x0001666f) sso_body_pane_t1

0x866f,	// (0x0001667f) sso_body_pane_t2

0x0001,

0xfe13,	// (0x0001de23) sso_body_pane_t

0x86cb,	// (0x000166db) sso_btn_pane_cp01_ParamLimits

0x86cb,	// (0x000166db) sso_btn_pane_cp01

0x879b,	// (0x000167ab) sso_prog_pane_ParamLimits

0x879b,	// (0x000167ab) sso_prog_pane

0x8924,	// (0x00016934) sso_t_hdr_pane_t1_ParamLimits

0x8924,	// (0x00016934) sso_t_hdr_pane_t1

0xeb6f,	// (0x0001cb7f) input_focus_pane_cp10_ParamLimits

0xeb6f,	// (0x0001cb7f) input_focus_pane_cp10

0xeb83,	// (0x0001cb93) sso_query_pane_t1_ParamLimits

0xeb83,	// (0x0001cb93) sso_query_pane_t1

0xeb96,	// (0x0001cba6) sso_query_pane_t2_ParamLimits

0xeb96,	// (0x0001cba6) sso_query_pane_t2

0xebaf,	// (0x0001cbbf) sso_query_pane_t3_ParamLimits

0xebaf,	// (0x0001cbbf) sso_query_pane_t3

0xebd9,	// (0x0001cbe9) sso_query_pane_t4_ParamLimits

0xebd9,	// (0x0001cbe9) sso_query_pane_t4

0x0003,

0xfe18,	// (0x0001de28) sso_query_pane_t_ParamLimits

0xfe18,	// (0x0001de28) sso_query_pane_t

0xe624,	// (0x0001c634) bg_button_pane_cp22

0xea8f,	// (0x0001ca9f) sso_btn_pane_t1

0x8937,	// (0x00016947) sso_t_nml_pane_t1_ParamLimits

0x8937,	// (0x00016947) sso_t_nml_pane_t1

0xebfd,	// (0x0001cc0d) sso_option_row_pane_ParamLimits

0xebfd,	// (0x0001cc0d) sso_option_row_pane

0xec0a,	// (0x0001cc1a) sso_t_sub_pane_t1_ParamLimits

0xec0a,	// (0x0001cc1a) sso_t_sub_pane_t1

0x9264,	// (0x00017274) bg_popup_window_pane_cp11_ParamLimits

0x9264,	// (0x00017274) bg_popup_window_pane_cp11

0xec27,	// (0x0001cc37) popup_sk_window_cp01_ParamLimits

0xec27,	// (0x0001cc37) popup_sk_window_cp01

0xec34,	// (0x0001cc44) sso_popup_body_pane_ParamLimits

0xec34,	// (0x0001cc44) sso_popup_body_pane

0xec41,	// (0x0001cc51) scroll_pane_cp21_ParamLimits

0xec41,	// (0x0001cc51) scroll_pane_cp21

0xec4e,	// (0x0001cc5e) sso_popup_body_t_pane_ParamLimits

0xec4e,	// (0x0001cc5e) sso_popup_body_t_pane

0xec5b,	// (0x0001cc6b) sso_popup_body_t_hdr_pane_ParamLimits

0xec5b,	// (0x0001cc6b) sso_popup_body_t_hdr_pane

0x8952,	// (0x00016962) sso_popup_body_t_nml_pane_ParamLimits

0x8952,	// (0x00016962) sso_popup_body_t_nml_pane

0x8979,	// (0x00016989) sso_popup_body_t_sub_pane_ParamLimits

0x8979,	// (0x00016989) sso_popup_body_t_sub_pane

0xec6d,	// (0x0001cc7d) sso_popup_body_t_hdr_pane_t1

0x899c,	// (0x000169ac) sso_popup_body_t_nml_pane_t1_ParamLimits

0x899c,	// (0x000169ac) sso_popup_body_t_nml_pane_t1

0xec7d,	// (0x0001cc8d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xec7d,	// (0x0001cc8d) sso_popup_body_t_sub_pane_t1

0x99a1,	// (0x000179b1) sso_prog_pane_g1

0x89d4,	// (0x000169e4) sso_apps_pane_comp1_ParamLimits

0x89d4,	// (0x000169e4) sso_apps_pane_comp1

0xeca2,	// (0x0001ccb2) sso_apps_pane_comp1_g1

0xecaa,	// (0x0001ccba) sso_apps_pane_comp1_t1

0xecc6,	// (0x0001ccd6) sso_option_row_pane_g1

0xecde,	// (0x0001ccee) sso_option_row_pane_t1

0xdf74,	// (0x0001bf84) list_cmail_pane_ParamLimits

0x91f5,	// (0x00017205) main_call7_pane

0x8061,	// (0x00016071) bg_welc_area_ParamLimits

0x8061,	// (0x00016071) bg_welc_area

0x8214,	// (0x00016224) sso_t_hdr_pane_a_t1_ParamLimits

0x8214,	// (0x00016224) sso_t_hdr_pane_a_t1

0x822f,	// (0x0001623f) sso_t_nml_pane_a_t1_ParamLimits

0x822f,	// (0x0001623f) sso_t_nml_pane_a_t1

0x825e,	// (0x0001626e) sso_t_sub_pane_a_t1_ParamLimits

0x825e,	// (0x0001626e) sso_t_sub_pane_a_t1

0x8301,	// (0x00016311) welc_button_pane_cp01_ParamLimits

0x8301,	// (0x00016311) welc_button_pane_cp01

0xea8f,	// (0x0001ca9f) sso_btn_pane_t1_copy1

0xea9e,	// (0x0001caae) welc_button_pane_2_comp1

0xeb05,	// (0x0001cb15) sso_t_hdr_pane_p_t1

0xeb15,	// (0x0001cb25) sso_t_nml_pane_p_t1

0xeb25,	// (0x0001cb35) sso_t_sub_pane_p_t1

0x91f5,	// (0x00017205) main_att_pane

0x91f5,	// (0x00017205) main_vod_pane

0x88f5,	// (0x00016905) sso_t_sub_pane_ParamLimits

0xecb8,	// (0x0001ccc8) input_focus_pane_cp10_t1

0xecde,	// (0x0001ccee) sso_option_row_pane_t1_ParamLimits

0x89ee,	// (0x000169fe) main_att_body_pane_ParamLimits

0x89ee,	// (0x000169fe) main_att_body_pane

0x8a04,	// (0x00016a14) att_btn_emg_pane_ParamLimits

0x8a04,	// (0x00016a14) att_btn_emg_pane

0x8a23,	// (0x00016a33) att_btn_pane_ParamLimits

0x8a23,	// (0x00016a33) att_btn_pane

0x8a92,	// (0x00016aa2) att_btn_pane_cp01_ParamLimits

0x8a92,	// (0x00016aa2) att_btn_pane_cp01

0x8ad2,	// (0x00016ae2) att_li_srv_pane_ParamLimits

0x8ad2,	// (0x00016ae2) att_li_srv_pane

0x8aef,	// (0x00016aff) att_opt_pane_ParamLimits

0x8aef,	// (0x00016aff) att_opt_pane

0x8b39,	// (0x00016b49) att_query_pane_ParamLimits

0x8b39,	// (0x00016b49) att_query_pane

0x8bb2,	// (0x00016bc2) att_query_pane_cp01_ParamLimits

0x8bb2,	// (0x00016bc2) att_query_pane_cp01

0x8bfe,	// (0x00016c0e) att_t_hdr_pane_ParamLimits

0x8bfe,	// (0x00016c0e) att_t_hdr_pane

0x8c6a,	// (0x00016c7a) att_t_nml_pane_ParamLimits

0x8c6a,	// (0x00016c7a) att_t_nml_pane

0x8cda,	// (0x00016cea) att_t_nml_pane_cp01_ParamLimits

0x8cda,	// (0x00016cea) att_t_nml_pane_cp01

0x8d08,	// (0x00016d18) att_t_nmlb_pane_ParamLimits

0x8d08,	// (0x00016d18) att_t_nmlb_pane

0x8d75,	// (0x00016d85) att_term_pane_ParamLimits

0x8d75,	// (0x00016d85) att_term_pane

0x8dbf,	// (0x00016dcf) main_att_body_pane_g1_ParamLimits

0x8dbf,	// (0x00016dcf) main_att_body_pane_g1

0xecfa,	// (0x0001cd0a) att_t_hdr_pane_t1_ParamLimits

0xecfa,	// (0x0001cd0a) att_t_hdr_pane_t1

0xed13,	// (0x0001cd23) att_t_nml_pane_t1_ParamLimits

0xed13,	// (0x0001cd23) att_t_nml_pane_t1

0xed38,	// (0x0001cd48) att_btn_pane_t1

0xe624,	// (0x0001c634) bg_button_pane_cp23

0x8deb,	// (0x00016dfb) att_li_srv_row_pane_ParamLimits

0x8deb,	// (0x00016dfb) att_li_srv_row_pane

0xed47,	// (0x0001cd57) att_t_nmlb_pane_t1_ParamLimits

0xed47,	// (0x0001cd57) att_t_nmlb_pane_t1

0xed63,	// (0x0001cd73) att_query_pane_t1

0xed72,	// (0x0001cd82) att_query_pane_t2

0xed81,	// (0x0001cd91) att_query_pane_t3

0x0002,

0xfe26,	// (0x0001de36) att_query_pane_t

0xed90,	// (0x0001cda0) input_focus_pane_cp11

0xed99,	// (0x0001cda9) att_term_pane_t1_ParamLimits

0xed99,	// (0x0001cda9) att_term_pane_t1

0x91f5,	// (0x00017205) att_opt_row_pane

0xedb6,	// (0x0001cdc6) att_opt_row_pane_g1

0xedbe,	// (0x0001cdce) att_opt_row_pane_t1_ParamLimits

0xedbe,	// (0x0001cdce) att_opt_row_pane_t1

0x8dfb,	// (0x00016e0b) att_li_srv_row_pane_g1

0x8e03,	// (0x00016e13) att_li_srv_row_pane_t1_ParamLimits

0x8e03,	// (0x00016e13) att_li_srv_row_pane_t1

0x8e03,	// (0x00016e13) att_li_srv_row_pane_t2_ParamLimits

0x8e03,	// (0x00016e13) att_li_srv_row_pane_t2

0x0001,

0xfe2d,	// (0x0001de3d) att_li_srv_row_pane_t_ParamLimits

0xfe2d,	// (0x0001de3d) att_li_srv_row_pane_t

0xedd7,	// (0x0001cde7) att_btn_close_pane_g1

0x91f5,	// (0x00017205) bg_button_pane_cp24

0x8e18,	// (0x00016e28) main_vod_body_pane_ParamLimits

0x8e18,	// (0x00016e28) main_vod_body_pane

0x8e2c,	// (0x00016e3c) main_vod_body_pane_g1_ParamLimits

0x8e2c,	// (0x00016e3c) main_vod_body_pane_g1

0x8e60,	// (0x00016e70) scroll_pane_cp24_ParamLimits

0x8e60,	// (0x00016e70) scroll_pane_cp24

0x8eae,	// (0x00016ebe) vod_btn_pane_ParamLimits

0x8eae,	// (0x00016ebe) vod_btn_pane

0x8ef4,	// (0x00016f04) vod_det_pane_ParamLimits

0x8ef4,	// (0x00016f04) vod_det_pane

0x8f24,	// (0x00016f34) vod_logo_g1_ParamLimits

0x8f24,	// (0x00016f34) vod_logo_g1

0x8f62,	// (0x00016f72) vod_opt_pane_ParamLimits

0x8f62,	// (0x00016f72) vod_opt_pane

0x8f95,	// (0x00016fa5) vod_opt_pane_cp01_ParamLimits

0x8f95,	// (0x00016fa5) vod_opt_pane_cp01

0x8fc1,	// (0x00016fd1) vod_query_pane_ParamLimits

0x8fc1,	// (0x00016fd1) vod_query_pane

0x8fec,	// (0x00016ffc) vod_query_pane_cp01_ParamLimits

0x8fec,	// (0x00016ffc) vod_query_pane_cp01

0x8ff8,	// (0x00017008) vod_t_nml_pane_ParamLimits

0x8ff8,	// (0x00017008) vod_t_nml_pane

0x90a5,	// (0x000170b5) vod_t_nml_pane_cp01_ParamLimits

0x90a5,	// (0x000170b5) vod_t_nml_pane_cp01

0x90e1,	// (0x000170f1) vod_t_sub_pane_ParamLimits

0x90e1,	// (0x000170f1) vod_t_sub_pane

0x9112,	// (0x00017122) vod_t_sub_pane_cp01_ParamLimits

0x9112,	// (0x00017122) vod_t_sub_pane_cp01

0xed90,	// (0x0001cda0) vod_query_field_pane

0xeddf,	// (0x0001cdef) vod_query_pane_t1

0xedee,	// (0x0001cdfe) bg_button_pane_cp25

0xea8f,	// (0x0001ca9f) sso_btn_pane_t1_copy2

0x913e,	// (0x0001714e) vod_t_nml_pane_t1_ParamLimits

0x913e,	// (0x0001714e) vod_t_nml_pane_t1

0xedf7,	// (0x0001ce07) vod_opt_row_pane_ParamLimits

0xedf7,	// (0x0001ce07) vod_opt_row_pane

0xee09,	// (0x0001ce19) vod_t_sub_pane_t1_ParamLimits

0xee09,	// (0x0001ce19) vod_t_sub_pane_t1

0xee22,	// (0x0001ce32) vod_det_cell_pane_ParamLimits

0xee22,	// (0x0001ce32) vod_det_cell_pane

0x91f5,	// (0x00017205) input_focus_pane_cp15

0xee33,	// (0x0001ce43) vod_query_field_pane_t1

0xee41,	// (0x0001ce51) vod_opt_row_pane_g1_ParamLimits

0xee41,	// (0x0001ce51) vod_opt_row_pane_g1

0xee4d,	// (0x0001ce5d) vod_opt_row_pane_t1_ParamLimits

0xee4d,	// (0x0001ce5d) vod_opt_row_pane_t1

0xee6d,	// (0x0001ce7d) vod_det_cell_field_pane

0xee76,	// (0x0001ce86) vod_det_cell_pane_g1

0xee7e,	// (0x0001ce8e) vod_det_cell_pane_t1

0x91f5,	// (0x00017205) input_focus_pane_cp16

0xee8d,	// (0x0001ce9d) vod_det_cell_field_pane_t1

0x7a57,	// (0x00015a67) call7_btn_grp_pane_ParamLimits

0x7a57,	// (0x00015a67) call7_btn_grp_pane

0x916f,	// (0x0001717f) call7_bubble_pane_ParamLimits

0x916f,	// (0x0001717f) call7_bubble_pane

0x9186,	// (0x00017196) cell_call7_btn_pane_ParamLimits

0x9186,	// (0x00017196) cell_call7_btn_pane

0x9199,	// (0x000171a9) call7_pane_g1_ParamLimits

0x9199,	// (0x000171a9) call7_pane_g1

0x91a8,	// (0x000171b8) call7_windows_conf_pane_ParamLimits

0x91a8,	// (0x000171b8) call7_windows_conf_pane

0x91c2,	// (0x000171d2) popup_call7_1st_window_ParamLimits

0x91c2,	// (0x000171d2) popup_call7_1st_window

0x91d3,	// (0x000171e3) popup_call7_2nd_window_ParamLimits

0x91d3,	// (0x000171e3) popup_call7_2nd_window

0x91e4,	// (0x000171f4) popup_call7_3rd_window_ParamLimits

0x91e4,	// (0x000171f4) popup_call7_3rd_window

0x91f5,	// (0x00017205) bg_button_pane_cp26

0xe7f3,	// (0x0001c803) cell_call7_btn_pane_g1

0xe7fc,	// (0x0001c80c) cell_call7_btn_pane_t1

0x91f5,	// (0x00017205) bg_popup_window_pane_cp12

0xee9b,	// (0x0001ceab) popup_call7_1st_window_g1

0xeea3,	// (0x0001ceb3) popup_call7_1st_window_g2

0xeeab,	// (0x0001cebb) popup_call7_1st_window_g3

0x0002,

0xfe32,	// (0x0001de42) popup_call7_1st_window_g

0xeeb3,	// (0x0001cec3) popup_call7_1st_window_t1

0xeec2,	// (0x0001ced2) popup_call7_1st_window_t2

0xeed0,	// (0x0001cee0) popup_call7_1st_window_t3

0x0002,

0xfe39,	// (0x0001de49) popup_call7_1st_window_t

0x91f5,	// (0x00017205) bg_popup_window_pane_cp13

0xeede,	// (0x0001ceee) popup_call7_2nd_window_g1

0xeee6,	// (0x0001cef6) popup_call7_2nd_window_g2

0xeeee,	// (0x0001cefe) popup_call7_2nd_window_g3

0x0002,

0xfe40,	// (0x0001de50) popup_call7_2nd_window_g

0xeef6,	// (0x0001cf06) popup_call7_2nd_window_t1

0x91f5,	// (0x00017205) bg_popup_window_pane_cp14

0xef05,	// (0x0001cf15) call7_list_conf_pane

0xef0d,	// (0x0001cf1d) call7_list_conf_row_pane_ParamLimits

0xef0d,	// (0x0001cf1d) call7_list_conf_row_pane

0xef20,	// (0x0001cf30) call7_list_conf_row_pane_g1

0xef28,	// (0x0001cf38) call7_list_conf_row_pane_g2

0x0001,

0xfe47,	// (0x0001de57) call7_list_conf_row_pane_g

0xef30,	// (0x0001cf40) call7_list_conf_row_pane_t1

0x91f5,	// (0x00017205) list_highlight_pane_cp22

0x8767,	// (0x00016777) sso_option_pane_cp01_ParamLimits

0x8767,	// (0x00016777) sso_option_pane_cp01

0x98e0,	// (0x000178f0) msg_header_pane_ParamLimits

0xa882,	// (0x00018892) bg_button_pane_cp01_ParamLimits

0xa896,	// (0x000188a6) input_focus_pane_cp07_ParamLimits

0x704b,	// (0x0001505b) popup_email_progress_window

0x99a1,	// (0x000179b1) popup_email_progress_window_g1

0xef3e,	// (0x0001cf4e) popup_email_progress_window_g2

0x0001,

0xfe4c,	// (0x0001de5c) popup_email_progress_window_g

0xef46,	// (0x0001cf56) popup_email_progress_window_t1

0x91f5,	// (0x00017205) cmail_conv_pane

0xde9c,	// (0x0001beac) list_single_dyc_row_pane_g5_ParamLimits

0xde9c,	// (0x0001beac) list_single_dyc_row_pane_g5

0xdea8,	// (0x0001beb8) list_single_dyc_row_pane_g6_ParamLimits

0xdea8,	// (0x0001beb8) list_single_dyc_row_pane_g6

0xdec0,	// (0x0001bed0) list_single_dyc_row_pane_g7_ParamLimits

0xdec0,	// (0x0001bed0) list_single_dyc_row_pane_g7

0x808e,	// (0x0001609e) main_button_pane_5_ParamLimits

0x808e,	// (0x0001609e) main_button_pane_5

0x85a4,	// (0x000165b4) sso_emg_call_btn_pane_ParamLimits

0x85a4,	// (0x000165b4) sso_emg_call_btn_pane

0x890a,	// (0x0001691a) sso_t_sub_pane_cp01_ParamLimits

0x890a,	// (0x0001691a) sso_t_sub_pane_cp01

0xecc6,	// (0x0001ccd6) sso_option_row_pane_g1_ParamLimits

0xecd2,	// (0x0001cce2) sso_option_row_pane_g2_ParamLimits

0xecd2,	// (0x0001cce2) sso_option_row_pane_g2

0x0001,

0xfe21,	// (0x0001de31) sso_option_row_pane_g_ParamLimits

0xfe21,	// (0x0001de31) sso_option_row_pane_g

0x8ab0,	// (0x00016ac0) att_btn_pane_cp02_ParamLimits

0x8ab0,	// (0x00016ac0) att_btn_pane_cp02

0xef54,	// (0x0001cf64) cmail_conv_hdr_pane

0xef5d,	// (0x0001cf6d) list_cmail_conv_pane

0xef67,	// (0x0001cf77) scroll_pane_cp31

0xef6f,	// (0x0001cf7f) cmail_conv_hdr_pane_t1

0xef7d,	// (0x0001cf8d) cmail_conv_hdr_pane_t2

0x0001,

0xfe51,	// (0x0001de61) cmail_conv_hdr_pane_t

0xef8b,	// (0x0001cf9b) bubble_cmail_conv_pane_ParamLimits

0xef8b,	// (0x0001cf9b) bubble_cmail_conv_pane

0xefa3,	// (0x0001cfb3) aid_size_colorization_pane

0x9c5e,	// (0x00017c6e) bg_bubble_cmail_conv_pane

0xefab,	// (0x0001cfbb) body_bubble_cmail_conv_pane

0xefb3,	// (0x0001cfc3) bubble_cmail_conv_pane_g1

0xefbb,	// (0x0001cfcb) bubble_cmail_conv_pane_g2

0xefc3,	// (0x0001cfd3) bubble_cmail_conv_pane_g3

0x0002,

0xfe56,	// (0x0001de66) bubble_cmail_conv_pane_g

0xefcb,	// (0x0001cfdb) bubble_cmail_conv_pane_t1

0xefd9,	// (0x0001cfe9) bg_bubble_cmail_conv_pane_g1

0xefe2,	// (0x0001cff2) bg_bubble_cmail_conv_pane_g2

0xefeb,	// (0x0001cffb) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe5d,	// (0x0001de6d) bg_bubble_cmail_conv_pane_g

0xeff4,	// (0x0001d004) body_bubble_cmail_conv_pane_t1_ParamLimits

0xeff4,	// (0x0001d004) body_bubble_cmail_conv_pane_t1

0xf00b,	// (0x0001d01b) body_bubble_cmail_conv_pane_t2_ParamLimits

0xf00b,	// (0x0001d01b) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe64,	// (0x0001de74) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe64,	// (0x0001de74) body_bubble_cmail_conv_pane_t

0x9264,	// (0x00017274) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
