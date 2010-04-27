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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00085e36 };

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
0x1024,	// (0x00086e5a) Screen

0x1030,	// (0x00086e66) application_window

0x106c,	// (0x00086ea2) area_bottom_pane_ParamLimits

0x106c,	// (0x00086ea2) area_bottom_pane

0x10a5,	// (0x00086edb) area_top_pane_ParamLimits

0x10a5,	// (0x00086edb) area_top_pane

0xb276,	// (0x000910ac) call_video_uplink_pane_ParamLimits

0xb276,	// (0x000910ac) call_video_uplink_pane

0x1133,	// (0x00086f69) main_pane_ParamLimits

0x1133,	// (0x00086f69) main_pane

0xb6dc,	// (0x00091512) context_pane

0x6200,	// (0x0008c036) navi_pane

0x6232,	// (0x0008c068) popup_cale_events_window_ParamLimits

0x6232,	// (0x0008c068) popup_cale_events_window

0xb6ef,	// (0x00091525) popup_mup_playback_window

0x624a,	// (0x0008c080) signal_pane

0xef05,	// (0x00094d3b) main_browser_pane

0x1eb7,	// (0x00087ced) main_burst_pane

0x5f60,	// (0x0008bd96) main_calc_pane

0xb66e,	// (0x000914a4) main_cale_day_pane

0x17ed,	// (0x00087623) main_cale_month_pane

0xb66e,	// (0x000914a4) main_cale_week_pane

0x1eb7,	// (0x00087ced) main_call_pane

0xebe5,	// (0x00094a1b) main_call_poc_pane

0x1eb7,	// (0x00087ced) main_camera_pane

0x1eb7,	// (0x00087ced) main_chi_dic_pane

0x3b85,	// (0x000899bb) main_clock_pane

0xebe5,	// (0x00094a1b) main_fmradio_pane

0x1eb7,	// (0x00087ced) main_graph_messa_pane

0xebe5,	// (0x00094a1b) main_help_pane

0xef05,	// (0x00094d3b) main_im_pane

0xee40,	// (0x00094c76) main_image_pane_ParamLimits

0xee40,	// (0x00094c76) main_image_pane

0xebe5,	// (0x00094a1b) main_location2_pane

0x1eb7,	// (0x00087ced) main_location_pane

0xee40,	// (0x00094c76) main_messa_pane

0xebe5,	// (0x00094a1b) main_mp2_pane

0x1eb7,	// (0x00087ced) main_mp_pane

0xebe5,	// (0x00094a1b) main_msg_pane

0xebe5,	// (0x00094a1b) main_mup_eq_pane

0xebe5,	// (0x00094a1b) main_mup_pane

0xef05,	// (0x00094d3b) main_notes_pane

0xebe5,	// (0x00094a1b) main_pec_pane

0xebe5,	// (0x00094a1b) main_phob_pane

0xebe5,	// (0x00094a1b) main_pinb_pane

0xebe5,	// (0x00094a1b) main_postcard_pane

0xebe5,	// (0x00094a1b) main_qdial_pane

0x1eb7,	// (0x00087ced) main_skin_pane

0xebe5,	// (0x00094a1b) main_smil2_pane

0x1eb7,	// (0x00087ced) main_smil_pane

0x1eb7,	// (0x00087ced) main_video_pane

0x1eb7,	// (0x00087ced) main_video_tele_pane

0xee40,	// (0x00094c76) main_viewer_pane_ParamLimits

0xee40,	// (0x00094c76) main_viewer_pane

0x1eb7,	// (0x00087ced) main_vorec_pane

0x5fb4,	// (0x0008bdea) popup_blid_sat_info_window_ParamLimits

0x5fb4,	// (0x0008bdea) popup_blid_sat_info_window

0x600c,	// (0x0008be42) popup_dyc_status_message_window_ParamLimits

0x600c,	// (0x0008be42) popup_dyc_status_message_window

0x6026,	// (0x0008be5c) popup_grid_large_graphic_window_ParamLimits

0x6026,	// (0x0008be5c) popup_grid_large_graphic_window

0x60e2,	// (0x0008bf18) popup_loc_request_window_ParamLimits

0x60e2,	// (0x0008bf18) popup_loc_request_window

0x61d8,	// (0x0008c00e) popup_wml_address_window_ParamLimits

0x61d8,	// (0x0008c00e) popup_wml_address_window

0x5d9a,	// (0x0008bbd0) call_muted_g1

0x4cfa,	// (0x0008ab30) popup_call_audio_conf_window_ParamLimits

0x4cfa,	// (0x0008ab30) popup_call_audio_conf_window

0x5dae,	// (0x0008bbe4) popup_call_audio_first_window_ParamLimits

0x5dae,	// (0x0008bbe4) popup_call_audio_first_window

0x5e24,	// (0x0008bc5a) popup_call_audio_in_window_ParamLimits

0x5e24,	// (0x0008bc5a) popup_call_audio_in_window

0x5e60,	// (0x0008bc96) popup_call_audio_out_window_ParamLimits

0x5e60,	// (0x0008bc96) popup_call_audio_out_window

0x5e9a,	// (0x0008bcd0) popup_call_audio_second_window_ParamLimits

0x5e9a,	// (0x0008bcd0) popup_call_audio_second_window

0x5ef0,	// (0x0008bd26) popup_call_audio_wait_window_ParamLimits

0x5ef0,	// (0x0008bd26) popup_call_audio_wait_window

0x5f25,	// (0x0008bd5b) popup_number_entry_window_ParamLimits

0x5f25,	// (0x0008bd5b) popup_number_entry_window

0xe7d2,	// (0x00094608) bg_popup_call_pane_cp05_ParamLimits

0xe7d2,	// (0x00094608) bg_popup_call_pane_cp05

0xe7f2,	// (0x00094628) popup_number_entry_window_t1

0xe805,	// (0x0009463b) popup_number_entry_window_t2

0xe817,	// (0x0009464d) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00094f00) popup_number_entry_window_t

0xe829,	// (0x0009465f) text_title_cp2

0xe83c,	// (0x00094672) bg_popup_call_pane_cp_ParamLimits

0xe83c,	// (0x00094672) bg_popup_call_pane_cp

0xe84a,	// (0x00094680) call_thumbnail_pane

0xe852,	// (0x00094688) popup_call_audio_in_window_g1_ParamLimits

0xe852,	// (0x00094688) popup_call_audio_in_window_g1

0xe85e,	// (0x00094694) popup_call_audio_in_window_g2_ParamLimits

0xe85e,	// (0x00094694) popup_call_audio_in_window_g2

0xe86a,	// (0x000946a0) popup_call_audio_in_window_g3_ParamLimits

0xe86a,	// (0x000946a0) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00094f09) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00094f09) popup_call_audio_in_window_g

0xe876,	// (0x000946ac) popup_call_audio_in_window_t1_ParamLimits

0xe876,	// (0x000946ac) popup_call_audio_in_window_t1

0xe892,	// (0x000946c8) popup_call_audio_in_window_t2_ParamLimits

0xe892,	// (0x000946c8) popup_call_audio_in_window_t2

0xe8ae,	// (0x000946e4) popup_call_audio_in_window_t3_ParamLimits

0xe8ae,	// (0x000946e4) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00094f10) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00094f10) popup_call_audio_in_window_t

0xe83c,	// (0x00094672) bg_popup_call_pane_cp01_ParamLimits

0xe83c,	// (0x00094672) bg_popup_call_pane_cp01

0xe84a,	// (0x00094680) call_thumbnail_pane_cp02

0xe8c1,	// (0x000946f7) call_type_pane_cp022

0xe8c9,	// (0x000946ff) popup_call_audio_out_window_g1_ParamLimits

0xe8c9,	// (0x000946ff) popup_call_audio_out_window_g1

0xe8db,	// (0x00094711) popup_call_audio_out_window_g2_ParamLimits

0xe8db,	// (0x00094711) popup_call_audio_out_window_g2

0xe8e7,	// (0x0009471d) popup_call_audio_out_window_g3_ParamLimits

0xe8e7,	// (0x0009471d) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00094f17) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00094f17) popup_call_audio_out_window_g

0xe8f9,	// (0x0009472f) popup_call_audio_out_window_t1_ParamLimits

0xe8f9,	// (0x0009472f) popup_call_audio_out_window_t1

0xe911,	// (0x00094747) popup_call_audio_out_window_t2_ParamLimits

0xe911,	// (0x00094747) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00094f1e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00094f1e) popup_call_audio_out_window_t

0xe926,	// (0x0009475c) bg_popup_call_pane_ParamLimits

0xe926,	// (0x0009475c) bg_popup_call_pane

0x12fd,	// (0x00087133) call_thumbnail_pane_cp_ParamLimits

0x12fd,	// (0x00087133) call_thumbnail_pane_cp

0xe9aa,	// (0x000947e0) call_type_pane_cp01_ParamLimits

0xe9aa,	// (0x000947e0) call_type_pane_cp01

0xe9ee,	// (0x00094824) popup_call_audio_first_window_g1_ParamLimits

0xe9ee,	// (0x00094824) popup_call_audio_first_window_g1

0xea3a,	// (0x00094870) popup_call_audio_first_window_g2_ParamLimits

0xea3a,	// (0x00094870) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00094f23) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00094f23) popup_call_audio_first_window_g

0xea7e,	// (0x000948b4) popup_call_audio_first_window_t1_ParamLimits

0xea7e,	// (0x000948b4) popup_call_audio_first_window_t1

0xeb2a,	// (0x00094960) popup_call_audio_first_window_t4_ParamLimits

0xeb2a,	// (0x00094960) popup_call_audio_first_window_t4

0xebb6,	// (0x000949ec) popup_call_audio_first_window_t5_ParamLimits

0xebb6,	// (0x000949ec) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00094f28) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00094f28) popup_call_audio_first_window_t

0xebe5,	// (0x00094a1b) bg_popup_call_pane_cp02

0xebef,	// (0x00094a25) call_type_pane_cp023

0xebf7,	// (0x00094a2d) popup_call_audio_wait_window_g1

0xebff,	// (0x00094a35) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00094f2f) popup_call_audio_wait_window_g

0xec07,	// (0x00094a3d) popup_call_audio_wait_window_t3

0xec15,	// (0x00094a4b) bg_popup_call_pane_cp03_ParamLimits

0xec15,	// (0x00094a4b) bg_popup_call_pane_cp03

0xec75,	// (0x00094aab) call_thumbnail_pane_cp011_ParamLimits

0xec75,	// (0x00094aab) call_thumbnail_pane_cp011

0xec81,	// (0x00094ab7) call_type_pane_cp034_ParamLimits

0xec81,	// (0x00094ab7) call_type_pane_cp034

0xecbd,	// (0x00094af3) popup_call_audio_second_window_g1_ParamLimits

0xecbd,	// (0x00094af3) popup_call_audio_second_window_g1

0xecf9,	// (0x00094b2f) popup_call_audio_second_window_g2_ParamLimits

0xecf9,	// (0x00094b2f) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00094f34) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00094f34) popup_call_audio_second_window_g

0xed35,	// (0x00094b6b) popup_call_audio_second_window_t1_ParamLimits

0xed35,	// (0x00094b6b) popup_call_audio_second_window_t1

0xedb6,	// (0x00094bec) popup_call_audio_second_window_t2_ParamLimits

0xedb6,	// (0x00094bec) popup_call_audio_second_window_t2

0xedec,	// (0x00094c22) popup_call_audio_second_window_t3_ParamLimits

0xedec,	// (0x00094c22) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00094f39) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00094f39) popup_call_audio_second_window_t

0xebe5,	// (0x00094a1b) bg_popup_call_pane_cp04

0xee22,	// (0x00094c58) list_conf_pane

0xee2a,	// (0x00094c60) popup_call_audio_conf_window_t1

0xee38,	// (0x00094c6e) call_thumbnail_pane_g1

0xee40,	// (0x00094c76) bg_pinb_pane_ParamLimits

0xee40,	// (0x00094c76) bg_pinb_pane

0xee4e,	// (0x00094c84) find_pinb_pane

0xee57,	// (0x00094c8d) listscroll_pinb_pane_ParamLimits

0xee57,	// (0x00094c8d) listscroll_pinb_pane

0xee66,	// (0x00094c9c) pinb_bg_pane_g1

0x1321,	// (0x00087157) pinb_bg_pane_g2

0x132d,	// (0x00087163) pinb_bg_pane_g3

0x1339,	// (0x0008716f) pinb_bg_pane_g4

0x1345,	// (0x0008717b) pinb_bg_pane_g5

0x1351,	// (0x00087187) pinb_bg_pane_g6

0x135c,	// (0x00087192) pinb_bg_pane_g7

0x1367,	// (0x0008719d) pinb_bg_pane_g8

0x1372,	// (0x000871a8) pinb_bg_pane_g9

0x137c,	// (0x000871b2) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00094f40) pinb_bg_pane_g

0x1399,	// (0x000871cf) grid_pinb_pane

0x13a2,	// (0x000871d8) list_pinb_pane

0x13ab,	// (0x000871e1) scroll_pane_cp01_ParamLimits

0x13ab,	// (0x000871e1) scroll_pane_cp01

0xee70,	// (0x00094ca6) find_pinb_pane_g1_ParamLimits

0xee70,	// (0x00094ca6) find_pinb_pane_g1

0xee88,	// (0x00094cbe) find_pinb_pane_t1

0xee9a,	// (0x00094cd0) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00094f5a) find_pinb_pane_t

0xeeaf,	// (0x00094ce5) input_focus_pane_cp01_ParamLimits

0xeeaf,	// (0x00094ce5) input_focus_pane_cp01

0x13bd,	// (0x000871f3) cell_pinb_pane_ParamLimits

0x13bd,	// (0x000871f3) cell_pinb_pane

0x13e6,	// (0x0008721c) cell_pinb_pane_g1_ParamLimits

0x13e6,	// (0x0008721c) cell_pinb_pane_g1

0x13f6,	// (0x0008722c) cell_pinb_pane_g2_ParamLimits

0x13f6,	// (0x0008722c) cell_pinb_pane_g2

0xeebb,	// (0x00094cf1) cell_pinb_pane_g3_ParamLimits

0xeebb,	// (0x00094cf1) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00094f5f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00094f5f) cell_pinb_pane_g

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp01

0x1402,	// (0x00087238) list_pinb_item_pane_ParamLimits

0x1402,	// (0x00087238) list_pinb_item_pane

0xebe5,	// (0x00094a1b) list_highlight_pane_cp02

0x1414,	// (0x0008724a) list_pinb_item_pane_g1_ParamLimits

0x1414,	// (0x0008724a) list_pinb_item_pane_g1

0x1421,	// (0x00087257) list_pinb_item_pane_g2_ParamLimits

0x1421,	// (0x00087257) list_pinb_item_pane_g2

0x142d,	// (0x00087263) list_pinb_item_pane_g3_ParamLimits

0x142d,	// (0x00087263) list_pinb_item_pane_g3

0x143e,	// (0x00087274) list_pinb_item_pane_g4_ParamLimits

0x143e,	// (0x00087274) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00094f66) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00094f66) list_pinb_item_pane_g

0x144a,	// (0x00087280) list_pinb_item_pane_t1_ParamLimits

0x144a,	// (0x00087280) list_pinb_item_pane_t1

0x147f,	// (0x000872b5) calc_display_pane

0x14a7,	// (0x000872dd) calc_paper_pane

0x14ca,	// (0x00087300) grid_calc_pane

0xebe5,	// (0x00094a1b) bg_list_pane_cp01

0x14f8,	// (0x0008732e) clock_g1

0x1500,	// (0x00087336) clock_g2

0x0001,

0xf139,	// (0x00094f6f) clock_g

0x1508,	// (0x0008733e) clock_t1_ParamLimits

0x1508,	// (0x0008733e) clock_t1

0x151d,	// (0x00087353) clock_t2_ParamLimits

0x151d,	// (0x00087353) clock_t2

0x152f,	// (0x00087365) clock_t3_ParamLimits

0x152f,	// (0x00087365) clock_t3

0x1541,	// (0x00087377) clock_t4_ParamLimits

0x1541,	// (0x00087377) clock_t4

0x1553,	// (0x00087389) clock_t5_ParamLimits

0x1553,	// (0x00087389) clock_t5

0x1568,	// (0x0008739e) clock_t6_ParamLimits

0x1568,	// (0x0008739e) clock_t6

0x157a,	// (0x000873b0) clock_t7_ParamLimits

0x157a,	// (0x000873b0) clock_t7

0x158c,	// (0x000873c2) clock_t8_ParamLimits

0x158c,	// (0x000873c2) clock_t8

0x15a0,	// (0x000873d6) clock_t9_ParamLimits

0x15a0,	// (0x000873d6) clock_t9

0x0008,

0xf13e,	// (0x00094f74) clock_t_ParamLimits

0xf13e,	// (0x00094f74) clock_t

0xeec7,	// (0x00094cfd) popup_clock_analogue_window_cp02

0xeec7,	// (0x00094cfd) popup_clock_digital_window_cp01

0xeecf,	// (0x00094d05) listscroll_help_pane

0xebe5,	// (0x00094a1b) phob_pre_status_pane

0xeed9,	// (0x00094d0f) grid_qdial_pane

0xee40,	// (0x00094c76) listscroll_mce_pane

0xee40,	// (0x00094c76) bg_notes_pane

0xeee3,	// (0x00094d19) list_notes_pane

0x15b4,	// (0x000873ea) scroll_pane_cp06

0xeef1,	// (0x00094d27) bg_calc_paper_pane

0xb29c,	// (0x000910d2) list_calc_pane

0xef05,	// (0x00094d3b) bg_calc_display_pane

0x15c8,	// (0x000873fe) calc_display_pane_t1

0x15da,	// (0x00087410) calc_display_pane_t2

0xb2b6,	// (0x000910ec) calc_display_pane_t3

0x0002,

0xf151,	// (0x00094f87) calc_display_pane_t

0x15ec,	// (0x00087422) cell_calc_pane_ParamLimits

0x15ec,	// (0x00087422) cell_calc_pane

0xef11,	// (0x00094d47) bg_calc_paper_pane_g1

0xef1d,	// (0x00094d53) bg_calc_paper_pane_g2

0xef29,	// (0x00094d5f) bg_calc_paper_pane_g3

0xef35,	// (0x00094d6b) bg_calc_paper_pane_g4

0xef41,	// (0x00094d77) bg_calc_paper_pane_g5

0x1621,	// (0x00087457) bg_calc_paper_pane_g6

0x1630,	// (0x00087466) bg_calc_paper_pane_g7

0x163f,	// (0x00087475) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00094f8e) bg_calc_paper_pane_g

0x1652,	// (0x00087488) calc_bg_paper_pane_g9

0x1665,	// (0x0008749b) list_calc_item_pane_ParamLimits

0x1665,	// (0x0008749b) list_calc_item_pane

0xef4d,	// (0x00094d83) list_calc_item_pane_g1

0xb2c8,	// (0x000910fe) list_calc_item_pane_t1_ParamLimits

0xb2c8,	// (0x000910fe) list_calc_item_pane_t1

0x167a,	// (0x000874b0) list_calc_item_pane_t2_ParamLimits

0x167a,	// (0x000874b0) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00094f9f) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00094f9f) list_calc_item_pane_t

0xef5a,	// (0x00094d90) cell_calc_pane_g1

0xef64,	// (0x00094d9a) grid_highlight_pane_cp02

0x16ac,	// (0x000874e2) bg_calc_display_pane_g1

0x16b5,	// (0x000874eb) bg_calc_display_pane_g2

0x16bf,	// (0x000874f5) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00094fa9) bg_calc_display_pane_g

0x16c8,	// (0x000874fe) cell_qdial_pane_ParamLimits

0x16c8,	// (0x000874fe) cell_qdial_pane

0x16dc,	// (0x00087512) cell_qdial_pane_g1_ParamLimits

0x16dc,	// (0x00087512) cell_qdial_pane_g1

0x16f2,	// (0x00087528) cell_qdial_pane_g2_ParamLimits

0x16f2,	// (0x00087528) cell_qdial_pane_g2

0xef86,	// (0x00094dbc) cell_qdial_pane_g3_ParamLimits

0xef86,	// (0x00094dbc) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00094fb0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00094fb0) cell_qdial_pane_g

0x1719,	// (0x0008754f) cell_qdial_pane_t1_ParamLimits

0x1719,	// (0x0008754f) cell_qdial_pane_t1

0x1731,	// (0x00087567) cell_qdial_pane_t2_ParamLimits

0x1731,	// (0x00087567) cell_qdial_pane_t2

0x1744,	// (0x0008757a) cell_qdial_pane_t3_ParamLimits

0x1744,	// (0x0008757a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00094fb9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00094fb9) cell_qdial_pane_t

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp04

0xef92,	// (0x00094dc8) thumbnail_qdial_pane_ParamLimits

0xef92,	// (0x00094dc8) thumbnail_qdial_pane

0x178f,	// (0x000875c5) list_help_pane

0x1798,	// (0x000875ce) scroll_pane_cp02

0x17a1,	// (0x000875d7) help_list_pane_t1_ParamLimits

0x17a1,	// (0x000875d7) help_list_pane_t1

0xb2da,	// (0x00091110) bg_notes_pane_g2

0xb2e2,	// (0x00091118) bg_notes_pane_g3

0xb2ea,	// (0x00091120) notes_bg_pane_g1

0xb2f2,	// (0x00091128) notes_bg_pane_g4

0xb2fa,	// (0x00091130) notes_bg_pane_g5

0xb302,	// (0x00091138) notes_bg_pane_g6

0xb30a,	// (0x00091140) notes_bg_pane_g7

0xb312,	// (0x00091148) notes_bg_pane_g8

0xb31a,	// (0x00091150) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00094fd7) notes_bg_pane_g

0x17be,	// (0x000875f4) list_notes_text_pane_ParamLimits

0x17be,	// (0x000875f4) list_notes_text_pane

0x17d3,	// (0x00087609) list_notes_text_pane_g1

0x0197,	// (0x00085fcd) list_notes_text_pane_t1

0x17ed,	// (0x00087623) listscroll_cale_week_pane

0x1822,	// (0x00087658) bg_cale_heading_pane

0x183a,	// (0x00087670) bg_cale_pane_cp01

0x1857,	// (0x0008768d) cale_week_corner_pane

0x1876,	// (0x000876ac) cale_week_day_heading_pane

0x1893,	// (0x000876c9) cale_week_scroll_pane_g1

0x18a6,	// (0x000876dc) cale_week_scroll_pane_g2

0x18be,	// (0x000876f4) cale_week_scroll_pane_g3

0x18d6,	// (0x0008770c) cale_week_scroll_pane_g4

0x18ee,	// (0x00087724) cale_week_scroll_pane_g5

0x190e,	// (0x00087744) cale_week_scroll_pane_g6

0x192e,	// (0x00087764) cale_week_scroll_pane_g7

0x194e,	// (0x00087784) cale_week_scroll_pane_g8

0x1972,	// (0x000877a8) cale_week_scroll_pane_g9

0x198a,	// (0x000877c0) cale_week_scroll_pane_g10

0x19a2,	// (0x000877d8) cale_week_scroll_pane_g11

0x19ba,	// (0x000877f0) cale_week_scroll_pane_g12

0x19d2,	// (0x00087808) cale_week_scroll_pane_g13

0x19d2,	// (0x00087808) cale_week_scroll_pane_g14

0x19d2,	// (0x00087808) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00094fe6) cale_week_scroll_pane_g

0x1a0e,	// (0x00087844) cale_week_time_pane

0x1a32,	// (0x00087868) grid_cale_week_pane

0x1a6a,	// (0x000878a0) scroll_pane_cp08

0x1a87,	// (0x000878bd) cell_cale_week_pane_ParamLimits

0x1a87,	// (0x000878bd) cell_cale_week_pane

0x1b15,	// (0x0008794b) cale_week_day_heading_pane_t1

0x1b5a,	// (0x00087990) cale_week_day_heading_pane_t2

0x1ba4,	// (0x000879da) cale_week_day_heading_pane_t3

0x1bee,	// (0x00087a24) cale_week_day_heading_pane_t4

0x1c38,	// (0x00087a6e) cale_week_day_heading_pane_t5

0x1c8a,	// (0x00087ac0) cale_week_day_heading_pane_t6

0x1cdc,	// (0x00087b12) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00095007) cale_week_day_heading_pane_t

0x1d21,	// (0x00087b57) bg_cale_side_pane

0x1d2f,	// (0x00087b65) cale_week_time_pane_t1

0x1d49,	// (0x00087b7f) cale_week_time_pane_t2

0x1d63,	// (0x00087b99) cale_week_time_pane_t3

0x1d7d,	// (0x00087bb3) cale_week_time_pane_t4

0x1d97,	// (0x00087bcd) cale_week_time_pane_t5

0x1db1,	// (0x00087be7) cale_week_time_pane_t6

0x1dcb,	// (0x00087c01) cale_week_time_pane_t7

0x1de5,	// (0x00087c1b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00095016) cale_week_time_pane_t

0x1e05,	// (0x00087c3b) cell_cale_week_pane_g2

0x1e24,	// (0x00087c5a) cell_cale_week_pane_g3_ParamLimits

0x1e24,	// (0x00087c5a) cell_cale_week_pane_g3

0x1e3c,	// (0x00087c72) grid_highlight_pane_cp07

0x1e44,	// (0x00087c7a) listscroll_gms_pane

0x1e4e,	// (0x00087c84) grid_gms_pane

0x1e57,	// (0x00087c8d) listscroll_gms_pane_g1

0x1e5f,	// (0x00087c95) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00095027) listscroll_gms_pane_g

0x1e67,	// (0x00087c9d) scroll_pane_cp010

0x1e72,	// (0x00087ca8) cell_gms_pane_ParamLimits

0x1e72,	// (0x00087ca8) cell_gms_pane

0x1e85,	// (0x00087cbb) cell_gms_pane_g1

0x1e8d,	// (0x00087cc3) cell_gms_pane_g2

0x1e95,	// (0x00087ccb) cell_gms_pane_g3

0x1e9e,	// (0x00087cd4) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009502c) cell_gms_pane_g

0x1ea7,	// (0x00087cdd) grid_highlight_pane_cp09

0x5d44,	// (0x0008bb7a) phob_pre_status_pane_g1

0x5d4c,	// (0x0008bb82) phob_pre_status_pane_g2

0x5d54,	// (0x0008bb8a) phob_pre_status_pane_g3

0x5d5c,	// (0x0008bb92) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00095417) phob_pre_status_pane_g

0x5d6c,	// (0x0008bba2) phob_pre_status_pane_t1

0x5d7a,	// (0x0008bbb0) phob_pre_status_pane_t2

0x5d8a,	// (0x0008bbc0) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00095422) phob_pre_status_pane_t

0x1eb7,	// (0x00087ced) bg_list_pane_cp05

0x1ebf,	// (0x00087cf5) grid_vorec_pane

0x1ec7,	// (0x00087cfd) vorec_t1

0x1ed5,	// (0x00087d0b) vorec_t2

0x1ee3,	// (0x00087d19) vorec_t3

0x1ef1,	// (0x00087d27) vorec_t4

0xb200,	// (0x00091036) vorec_t5

0xb20e,	// (0x00091044) vorec_t6

0x0004,

0xf1ff,	// (0x00095035) vorec_t

0xb21c,	// (0x00091052) wait_bar_pane_cp01

0x1f0d,	// (0x00087d43) cell_vorec_pane_ParamLimits

0x1f0d,	// (0x00087d43) cell_vorec_pane

0xb322,	// (0x00091158) cell_vorec_pane_g1

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp05

0x1f35,	// (0x00087d6b) cams_zoom_pane

0x1f44,	// (0x00087d7a) image_vga_pane

0x1f5e,	// (0x00087d94) main_camera_pane_g1

0x1f70,	// (0x00087da6) main_camera_pane_g2

0x1f80,	// (0x00087db6) main_camera_pane_g3

0x1f90,	// (0x00087dc6) main_camera_pane_g4

0x1fa0,	// (0x00087dd6) main_camera_pane_g5

0x1fb0,	// (0x00087de6) main_camera_pane_g6

0x1fc2,	// (0x00087df8) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00095040) main_camera_pane_g

0x1fde,	// (0x00087e14) main_camera_pane_t1

0x1ff4,	// (0x00087e2a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00095051) main_camera_pane_t

0x202e,	// (0x00087e64) cams_zoom_pane_cp_ParamLimits

0x202e,	// (0x00087e64) cams_zoom_pane_cp

0x2056,	// (0x00087e8c) image_cif_pane_ParamLimits

0x2056,	// (0x00087e8c) image_cif_pane

0x208c,	// (0x00087ec2) image_subqcif_pane

0x2094,	// (0x00087eca) main_video_pane_g1_ParamLimits

0x2094,	// (0x00087eca) main_video_pane_g1

0x20b8,	// (0x00087eee) main_video_pane_g2_ParamLimits

0x20b8,	// (0x00087eee) main_video_pane_g2

0x20ec,	// (0x00087f22) main_video_pane_g3_ParamLimits

0x20ec,	// (0x00087f22) main_video_pane_g3

0x211a,	// (0x00087f50) main_video_pane_g4_ParamLimits

0x211a,	// (0x00087f50) main_video_pane_g4

0x2148,	// (0x00087f7e) main_video_pane_g5_ParamLimits

0x2148,	// (0x00087f7e) main_video_pane_g5

0x2160,	// (0x00087f96) main_video_pane_g6_ParamLimits

0x2160,	// (0x00087f96) main_video_pane_g6

0x0006,

0xf220,	// (0x00095056) main_video_pane_g_ParamLimits

0xf220,	// (0x00095056) main_video_pane_g

0x218b,	// (0x00087fc1) main_video_pane_t1_ParamLimits

0x218b,	// (0x00087fc1) main_video_pane_t1

0x21d4,	// (0x0008800a) cams_zoom_pane_g1

0x21dd,	// (0x00088013) cams_zoom_pane_g2

0x21e6,	// (0x0008801c) cams_zoom_pane_g3

0x21ef,	// (0x00088025) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00095065) cams_zoom_pane_g

0x220c,	// (0x00088042) grid_cams_pane

0x2226,	// (0x0008805c) linegrid_cams_pane

0x223a,	// (0x00088070) cell_cams_pane_ParamLimits

0x223a,	// (0x00088070) cell_cams_pane

0x225a,	// (0x00088090) cams_burst_image_pane

0x2262,	// (0x00088098) cell_cams_pane_g1

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp03

0xef5a,	// (0x00094d90) mp_bg_pane_g1

0xebe5,	// (0x00094a1b) bg_list_pane_cp03

0xb593,	// (0x000913c9) bg_mp_pane

0xb59b,	// (0x000913d1) grid_mp_pane

0xb5a3,	// (0x000913d9) media_player_g1

0xb5ab,	// (0x000913e1) media_player_t1

0xb5b9,	// (0x000913ef) media_player_t2

0xb5c7,	// (0x000913fd) media_player_t3

0xb5d5,	// (0x0009140b) media_player_t4

0xb5e3,	// (0x00091419) media_player_t5

0xb5f1,	// (0x00091427) media_player_t6

0xb5ff,	// (0x00091435) media_player_t7

0x0006,

0xf5cb,	// (0x00095401) media_player_t

0xb60d,	// (0x00091443) wait_bar_pane_cp02

0xf5b0,	// (0x000953e6) main_usb_pane_t

0x5d3b,	// (0x0008bb71) cell_mp_pane

0xef5a,	// (0x00094d90) cell_mp_pane_g1

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp06

0x2282,	// (0x000880b8) grid_skin_colour_pane

0x228a,	// (0x000880c0) list_highlight_pane_cp03

0x2292,	// (0x000880c8) skin_g1

0x229a,	// (0x000880d0) skin_t1

0x22a9,	// (0x000880df) skin_t2

0x0001,

0xf264,	// (0x0009509a) skin_t

0x22b7,	// (0x000880ed) cell_skin_colour_pane_ParamLimits

0x22b7,	// (0x000880ed) cell_skin_colour_pane

0x22d7,	// (0x0008810d) cell_skin_colour_pane_g1

0x2342,	// (0x00088178) call_video_g1_ParamLimits

0x2342,	// (0x00088178) call_video_g1

0x235e,	// (0x00088194) call_video_g2_ParamLimits

0x235e,	// (0x00088194) call_video_g2

0x0001,

0xf269,	// (0x0009509f) call_video_g_ParamLimits

0xf269,	// (0x0009509f) call_video_g

0x23b0,	// (0x000881e6) call_video_uplink_pane_cp1_ParamLimits

0x23b0,	// (0x000881e6) call_video_uplink_pane_cp1

0x2415,	// (0x0008824b) call_video_uplink_pane_cp2

0x2457,	// (0x0008828d) video_down_crop_pane_ParamLimits

0x2457,	// (0x0008828d) video_down_crop_pane

0x254e,	// (0x00088384) video_down_pane_ParamLimits

0x254e,	// (0x00088384) video_down_pane

0x2645,	// (0x0008847b) video_down_subqcif_pane_ParamLimits

0x2645,	// (0x0008847b) video_down_subqcif_pane

0x265d,	// (0x00088493) video_down_subqcif_pane_cp_ParamLimits

0x265d,	// (0x00088493) video_down_subqcif_pane_cp

0x269a,	// (0x000884d0) im_reading_pane_ParamLimits

0x269a,	// (0x000884d0) im_reading_pane

0x26ac,	// (0x000884e2) im_writing_pane_ParamLimits

0x26ac,	// (0x000884e2) im_writing_pane

0x26ca,	// (0x00088500) im_reading_pane_t1

0x2703,	// (0x00088539) list_im_pane

0x2714,	// (0x0008854a) scroll_pane_cp07

0x272d,	// (0x00088563) im_writing_pane_t1_ParamLimits

0x272d,	// (0x00088563) im_writing_pane_t1

0x2742,	// (0x00088578) im_writing_pane_t2_ParamLimits

0x2742,	// (0x00088578) im_writing_pane_t2

0x0001,

0xf273,	// (0x000950a9) im_writing_pane_t_ParamLimits

0xf273,	// (0x000950a9) im_writing_pane_t

0xebe5,	// (0x00094a1b) input_focus_pane_cp04

0xebe5,	// (0x00094a1b) input_focus_pane_cp05

0x275f,	// (0x00088595) list_im_single_pane_ParamLimits

0x275f,	// (0x00088595) list_im_single_pane

0x2773,	// (0x000885a9) list_single_im_pane_t1

0x5cfb,	// (0x0008bb31) blid_accuracy_pane

0x5d03,	// (0x0008bb39) blid_compass_pane

0x5d0d,	// (0x0008bb43) main_location_t1

0x5d1d,	// (0x0008bb53) main_location_t2

0x5d2d,	// (0x0008bb63) main_location_t3

0x0002,

0xf5da,	// (0x00095410) main_location_t

0xebe5,	// (0x00094a1b) aid_levels_location

0xef5a,	// (0x00094d90) blid_accuracy_pane_g1

0xef5a,	// (0x00094d90) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0009510b) blid_accuracy_pane_g

0x27ad,	// (0x000885e3) wml_content_pane

0x27eb,	// (0x00088621) wml_button_pane_ParamLimits

0x27eb,	// (0x00088621) wml_button_pane

0x27ff,	// (0x00088635) wml_list_single_large_pane_ParamLimits

0x27ff,	// (0x00088635) wml_list_single_large_pane

0x2814,	// (0x0008864a) wml_list_single_medium_pane_ParamLimits

0x2814,	// (0x0008864a) wml_list_single_medium_pane

0x282a,	// (0x00088660) wml_list_single_small_pane_ParamLimits

0x282a,	// (0x00088660) wml_list_single_small_pane

0x2842,	// (0x00088678) wml_selection_box_pane_ParamLimits

0x2842,	// (0x00088678) wml_selection_box_pane

0x2855,	// (0x0008868b) wml_list_single_pane_t1

0x2864,	// (0x0008869a) wml_list_single_medium_pane_t1

0x2873,	// (0x000886a9) wml_list_single_large_pane_t1

0x2882,	// (0x000886b8) input_focus_pane_cp02_ParamLimits

0x2882,	// (0x000886b8) input_focus_pane_cp02

0x2895,	// (0x000886cb) wml_selection_box_pane_g1

0x289e,	// (0x000886d4) wml_selection_box_pane_t1_ParamLimits

0x289e,	// (0x000886d4) wml_selection_box_pane_t1

0xee40,	// (0x00094c76) bg_wml_button_pane_ParamLimits

0xee40,	// (0x00094c76) bg_wml_button_pane

0x28b6,	// (0x000886ec) wml_button_pane_g1

0x28be,	// (0x000886f4) wml_button_pane_t1

0x28b6,	// (0x000886ec) wml_button_bg_pane_g1

0x28ce,	// (0x00088704) wml_button_bg_pane_g2

0x28d6,	// (0x0008870c) wml_button_bg_pane_g3

0x28de,	// (0x00088714) wml_button_bg_pane_g4

0x28e6,	// (0x0008871c) wml_button_bg_pane_g5

0x28ee,	// (0x00088724) wml_button_bg_pane_g6

0x28f6,	// (0x0008872c) wml_button_bg_pane_g7

0x28fe,	// (0x00088734) wml_button_bg_pane_g8

0x2906,	// (0x0008873c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000950ae) wml_button_bg_pane_g

0x290e,	// (0x00088744) bg_list_pane_cp02

0x2916,	// (0x0008874c) mce_header_pane_ParamLimits

0x2916,	// (0x0008874c) mce_header_pane

0x292c,	// (0x00088762) mce_icon_pane

0x292c,	// (0x00088762) mce_image_pane

0x2935,	// (0x0008876b) mce_text_pane_ParamLimits

0x2935,	// (0x0008876b) mce_text_pane

0x2948,	// (0x0008877e) scroll_pane_cp03

0x27e3,	// (0x00088619) scroll_pane_cp04

0x2952,	// (0x00088788) scroll_pane_cp05_ParamLimits

0x2952,	// (0x00088788) scroll_pane_cp05

0x295e,	// (0x00088794) mce_header_field_pane_ParamLimits

0x295e,	// (0x00088794) mce_header_field_pane

0x2975,	// (0x000887ab) mce_header_field_pane_2_ParamLimits

0x2975,	// (0x000887ab) mce_header_field_pane_2

0x298b,	// (0x000887c1) mce_header_field_pane_3

0x2993,	// (0x000887c9) list_single_mce_message_pane_ParamLimits

0x2993,	// (0x000887c9) list_single_mce_message_pane

0x29a8,	// (0x000887de) list_single_mce_smart_pane_ParamLimits

0x29a8,	// (0x000887de) list_single_mce_smart_pane

0x29c8,	// (0x000887fe) input_focus_pane_cp03

0x29d1,	// (0x00088807) list_header_data_pane

0x29d9,	// (0x0008880f) mce_header_field_pane_t1

0x29e9,	// (0x0008881f) list_single_mce_header_pane_ParamLimits

0x29e9,	// (0x0008881f) list_single_mce_header_pane

0x29fd,	// (0x00088833) list_single_mce_header_pane_t1

0x2a0c,	// (0x00088842) list_single_mce_message_pane_g1

0x2a14,	// (0x0008884a) list_single_mce_message_pane_t1

0x2a48,	// (0x0008887e) bg_cale_heading_pane_cp01_ParamLimits

0x2a48,	// (0x0008887e) bg_cale_heading_pane_cp01

0x2a77,	// (0x000888ad) bg_cale_pane_cp02_ParamLimits

0x2a77,	// (0x000888ad) bg_cale_pane_cp02

0x2aa4,	// (0x000888da) cale_month_corner_pane

0x2ac3,	// (0x000888f9) cale_month_day_heading_pane_ParamLimits

0x2ac3,	// (0x000888f9) cale_month_day_heading_pane

0x2b0a,	// (0x00088940) cale_month_pane_g1_ParamLimits

0x2b0a,	// (0x00088940) cale_month_pane_g1

0x2b2e,	// (0x00088964) cale_month_pane_g2_ParamLimits

0x2b2e,	// (0x00088964) cale_month_pane_g2

0x2b5e,	// (0x00088994) cale_month_pane_g3_ParamLimits

0x2b5e,	// (0x00088994) cale_month_pane_g3

0x2b9a,	// (0x000889d0) cale_month_pane_g4_ParamLimits

0x2b9a,	// (0x000889d0) cale_month_pane_g4

0x2bd6,	// (0x00088a0c) cale_month_pane_g5_ParamLimits

0x2bd6,	// (0x00088a0c) cale_month_pane_g5

0x2c1e,	// (0x00088a54) cale_month_pane_g6_ParamLimits

0x2c1e,	// (0x00088a54) cale_month_pane_g6

0x2c6a,	// (0x00088aa0) cale_month_pane_g7_ParamLimits

0x2c6a,	// (0x00088aa0) cale_month_pane_g7

0x2cbe,	// (0x00088af4) cale_month_pane_g8_ParamLimits

0x2cbe,	// (0x00088af4) cale_month_pane_g8

0x2d12,	// (0x00088b48) cale_month_pane_g9_ParamLimits

0x2d12,	// (0x00088b48) cale_month_pane_g9

0x2d64,	// (0x00088b9a) cale_month_pane_g10_ParamLimits

0x2d64,	// (0x00088b9a) cale_month_pane_g10

0x2db6,	// (0x00088bec) cale_month_pane_g11_ParamLimits

0x2db6,	// (0x00088bec) cale_month_pane_g11

0x2e08,	// (0x00088c3e) cale_month_pane_g12_ParamLimits

0x2e08,	// (0x00088c3e) cale_month_pane_g12

0x2e5a,	// (0x00088c90) cale_month_pane_g13_ParamLimits

0x2e5a,	// (0x00088c90) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000950c1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000950c1) cale_month_pane_g

0x2ebe,	// (0x00088cf4) cale_month_week_pane

0x2ee2,	// (0x00088d18) grid_cale_month_pane_ParamLimits

0x2ee2,	// (0x00088d18) grid_cale_month_pane

0x2f20,	// (0x00088d56) cale_month_day_heading_pane_t1

0x2fa6,	// (0x00088ddc) cale_month_day_heading_pane_t2

0x3037,	// (0x00088e6d) cale_month_day_heading_pane_t3

0x30c8,	// (0x00088efe) cale_month_day_heading_pane_t4

0x315d,	// (0x00088f93) cale_month_day_heading_pane_t5

0x31fe,	// (0x00089034) cale_month_day_heading_pane_t6

0x329f,	// (0x000890d5) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000950dc) cale_month_day_heading_pane_t

0x1d21,	// (0x00087b57) bg_cale_side_pane_cp01

0x3348,	// (0x0008917e) cale_month_week_pane_t1

0x3361,	// (0x00089197) cale_month_week_pane_t2

0x337a,	// (0x000891b0) cale_month_week_pane_t3

0x3393,	// (0x000891c9) cale_month_week_pane_t4

0x33ac,	// (0x000891e2) cale_month_week_pane_t5

0x33c5,	// (0x000891fb) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000950eb) cale_month_week_pane_t

0x33de,	// (0x00089214) cell_cale_month_pane_ParamLimits

0x33de,	// (0x00089214) cell_cale_month_pane

0xb32c,	// (0x00091162) cell_cale_month_pane_g1

0x3508,	// (0x0008933e) cell_cale_month_pane_t1_ParamLimits

0x3508,	// (0x0008933e) cell_cale_month_pane_t1

0x1e3c,	// (0x00087c72) grid_highlight_pane_cp08

0xef5a,	// (0x00094d90) main_smil_g1

0x3528,	// (0x0008935e) smil_status_pane

0x3531,	// (0x00089367) smil_text_pane

0xb4b3,	// (0x000912e9) bg_popup_call3_rect_pane_g8

0xb4bb,	// (0x000912f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000953a4) bg_popup_call3_rect_pane_g

0xb756,	// (0x0009158c) smil_status_volume_pane_g1

0x3545,	// (0x0008937b) smil_status_pane_t1

0xb789,	// (0x000915bf) volume_smil_pane

0x355c,	// (0x00089392) list_smil_text_pane

0x3566,	// (0x0008939c) scroll_pane_cp011

0x3571,	// (0x000893a7) smil_text_list_pane_t1_ParamLimits

0x3571,	// (0x000893a7) smil_text_list_pane_t1

0xb338,	// (0x0009116e) aid_volume_smil_ParamLimits

0xb338,	// (0x0009116e) aid_volume_smil

0xef5a,	// (0x00094d90) smil_volume_pane_g1

0xef5a,	// (0x00094d90) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0009510b) smil_volume_pane_g

0x17ed,	// (0x00087623) listscroll_cale_day_pane

0x35ad,	// (0x000893e3) bg_cale_pane

0x35c5,	// (0x000893fb) list_cale_pane

0x35e8,	// (0x0008941e) scroll_pane_cp09

0x35f9,	// (0x0008942f) cale_bg_pane_g1

0x3601,	// (0x00089437) cale_bg_pane_g2

0x3609,	// (0x0008943f) cale_bg_pane_g3

0x3611,	// (0x00089447) cale_bg_pane_g4

0x3619,	// (0x0008944f) cale_bg_pane_g5

0x3621,	// (0x00089457) cale_bg_pane_g6

0x3629,	// (0x0008945f) cale_bg_pane_g7

0x3631,	// (0x00089467) cale_bg_pane_g8

0x3639,	// (0x0008946f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00095110) cale_bg_pane_g

0x3649,	// (0x0008947f) list_cale_time_pane_ParamLimits

0x3649,	// (0x0008947f) list_cale_time_pane

0x365e,	// (0x00089494) list_cale_time_pane_g1_ParamLimits

0x365e,	// (0x00089494) list_cale_time_pane_g1

0x366a,	// (0x000894a0) list_cale_time_pane_g2_ParamLimits

0x366a,	// (0x000894a0) list_cale_time_pane_g2

0x3677,	// (0x000894ad) list_cale_time_pane_g3_ParamLimits

0x3677,	// (0x000894ad) list_cale_time_pane_g3

0x3685,	// (0x000894bb) list_cale_time_pane_g4_ParamLimits

0x3685,	// (0x000894bb) list_cale_time_pane_g4

0x3693,	// (0x000894c9) list_cale_time_pane_g5_ParamLimits

0x3693,	// (0x000894c9) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00095123) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00095123) list_cale_time_pane_g

0x36ae,	// (0x000894e4) list_cale_time_pane_t1_ParamLimits

0x36ae,	// (0x000894e4) list_cale_time_pane_t1

0x36d6,	// (0x0008950c) list_cale_time_pane_t2_ParamLimits

0x36d6,	// (0x0008950c) list_cale_time_pane_t2

0x3da0,	// (0x00089bd6) aid_blid_cardinal_pane

0x3dea,	// (0x00089c20) compass_pane_t4

0x36fe,	// (0x00089534) list_cale_time_pane_t4_ParamLimits

0x36fe,	// (0x00089534) list_cale_time_pane_t4

0x3df8,	// (0x00089c2e) compass_pane_t5

0x3e06,	// (0x00089c3c) compass_pane_t6

0x3e14,	// (0x00089c4a) compass_pane_t7

0x3eaa,	// (0x00089ce0) navi_pane_cc_t1

0x40c9,	// (0x00089eff) aid_phob_thumbnail_center_pane

0x4705,	// (0x0008a53b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00095130) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00095130) list_cale_time_pane_t

0xe83c,	// (0x00094672) bg_popup_window_pane_cp02_ParamLimits

0xe83c,	// (0x00094672) bg_popup_window_pane_cp02

0x3726,	// (0x0008955c) heading_pane_cp01_ParamLimits

0x3726,	// (0x0008955c) heading_pane_cp01

0x3732,	// (0x00089568) loc_req_pane_ParamLimits

0x3732,	// (0x00089568) loc_req_pane

0x3742,	// (0x00089578) loc_type_pane_ParamLimits

0x3742,	// (0x00089578) loc_type_pane

0x3754,	// (0x0008958a) loc_type_pane_t1_ParamLimits

0x3754,	// (0x0008958a) loc_type_pane_t1

0x3766,	// (0x0008959c) loc_type_pane_t2_ParamLimits

0x3766,	// (0x0008959c) loc_type_pane_t2

0x3778,	// (0x000895ae) loc_type_pane_t3_ParamLimits

0x3778,	// (0x000895ae) loc_type_pane_t3

0x0002,

0xf301,	// (0x00095137) loc_type_pane_t_ParamLimits

0xf301,	// (0x00095137) loc_type_pane_t

0x378a,	// (0x000895c0) list_loc_req_pane

0x3794,	// (0x000895ca) scroll_pane_cp012

0x379f,	// (0x000895d5) list_single_loc_request_popup_menu_pane_ParamLimits

0x379f,	// (0x000895d5) list_single_loc_request_popup_menu_pane

0x37ac,	// (0x000895e2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x37ac,	// (0x000895e2) list_single_loc_request_popup_menu_pane_g1

0x37b8,	// (0x000895ee) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x37b8,	// (0x000895ee) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0009513e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0009513e) list_single_loc_request_popup_menu_pane_g

0x37c4,	// (0x000895fa) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x37c4,	// (0x000895fa) list_single_loc_request_popup_menu_pane_t1

0xee40,	// (0x00094c76) bg_popup_window_pane_cp03_ParamLimits

0xee40,	// (0x00094c76) bg_popup_window_pane_cp03

0x37da,	// (0x00089610) heading_loc_req_pane_ParamLimits

0x37da,	// (0x00089610) heading_loc_req_pane

0x37e6,	// (0x0008961c) popup_dyc_status_message_window_g1_ParamLimits

0x37e6,	// (0x0008961c) popup_dyc_status_message_window_g1

0x37fa,	// (0x00089630) popup_dyc_status_message_window_t1_ParamLimits

0x37fa,	// (0x00089630) popup_dyc_status_message_window_t1

0x380f,	// (0x00089645) popup_dyc_status_message_window_t2_ParamLimits

0x380f,	// (0x00089645) popup_dyc_status_message_window_t2

0x3824,	// (0x0008965a) popup_dyc_status_message_window_t3_ParamLimits

0x3824,	// (0x0008965a) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00095143) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00095143) popup_dyc_status_message_window_t

0xebe5,	// (0x00094a1b) bg_heading_pane_cp01

0x3840,	// (0x00089676) heading_loc_req_pane_g1

0x3848,	// (0x0008967e) heading_loc_req_pane_g2

0x3850,	// (0x00089686) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0009514a) heading_loc_req_pane_g

0x3858,	// (0x0008968e) heading_loc_req_pane_t1

0x3873,	// (0x000896a9) bg_popup_sub_pane_cp01_ParamLimits

0x3873,	// (0x000896a9) bg_popup_sub_pane_cp01

0x3881,	// (0x000896b7) popup_cale_events_window_g1_ParamLimits

0x3881,	// (0x000896b7) popup_cale_events_window_g1

0x38a1,	// (0x000896d7) popup_cale_events_window_g2_ParamLimits

0x38a1,	// (0x000896d7) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0009517e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0009517e) popup_cale_events_window_g

0x38c1,	// (0x000896f7) popup_cale_events_window_t1_ParamLimits

0x38c1,	// (0x000896f7) popup_cale_events_window_t1

0x38d3,	// (0x00089709) popup_cale_events_window_t2_ParamLimits

0x38d3,	// (0x00089709) popup_cale_events_window_t2

0x3911,	// (0x00089747) popup_cale_events_window_t3_ParamLimits

0x3911,	// (0x00089747) popup_cale_events_window_t3

0x394b,	// (0x00089781) popup_cale_events_window_t4_ParamLimits

0x394b,	// (0x00089781) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00095183) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00095183) popup_cale_events_window_t

0x3981,	// (0x000897b7) call_type_pane

0x3991,	// (0x000897c7) popup_call_status_window_g1

0x39a5,	// (0x000897db) popup_call_status_window_g2

0x39b9,	// (0x000897ef) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009518c) popup_call_status_window_g

0x39c8,	// (0x000897fe) call_type_pane_g1

0x39d1,	// (0x00089807) call_type_pane_g2

0x0001,

0xf35d,	// (0x00095193) call_type_pane_g

0xebe5,	// (0x00094a1b) bg_popup_sub_pane_cp02

0x39da,	// (0x00089810) listscroll_popup_wml_pane

0x39e2,	// (0x00089818) list_wml_pane

0x39ec,	// (0x00089822) scroll_pane_cp013

0x39f7,	// (0x0008982d) list_single_graphic_popup_wml_pane_ParamLimits

0x39f7,	// (0x0008982d) list_single_graphic_popup_wml_pane

0xef5a,	// (0x00094d90) list_single_graphic_popup_wml_pane_g1

0x3a0b,	// (0x00089841) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00095198) list_single_graphic_popup_wml_pane_g

0x3a13,	// (0x00089849) list_single_graphic_popup_wml_pane_t1

0x3a29,	// (0x0008985f) aid_call_pane

0xee38,	// (0x00094c6e) popup_clock_analogue_window_g1

0xee38,	// (0x00094c6e) popup_clock_analogue_window_g2

0xb366,	// (0x0009119c) popup_clock_analogue_window_g3

0xb366,	// (0x0009119c) popup_clock_analogue_window_g4

0xef5a,	// (0x00094d90) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009519d) popup_clock_analogue_window_g

0xb36e,	// (0x000911a4) popup_clock_analogue_window_t1

0xb37c,	// (0x000911b2) clock_digital_number_pane_ParamLimits

0xb37c,	// (0x000911b2) clock_digital_number_pane

0xb388,	// (0x000911be) clock_digital_number_pane_cp02_ParamLimits

0xb388,	// (0x000911be) clock_digital_number_pane_cp02

0xb394,	// (0x000911ca) clock_digital_number_pane_cp03_ParamLimits

0xb394,	// (0x000911ca) clock_digital_number_pane_cp03

0xb3a0,	// (0x000911d6) clock_digital_number_pane_cp04_ParamLimits

0xb3a0,	// (0x000911d6) clock_digital_number_pane_cp04

0xb3b0,	// (0x000911e6) clock_digital_separator_pane_ParamLimits

0xb3b0,	// (0x000911e6) clock_digital_separator_pane

0xb3bc,	// (0x000911f2) popup_clock_digital_window_t1

0xef5a,	// (0x00094d90) clock_digital_number_pane_g1

0xef5a,	// (0x00094d90) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0009510b) clock_digital_number_pane_g

0xef5a,	// (0x00094d90) clock_digital_separator_pane_g1

0xef5a,	// (0x00094d90) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0009510b) clock_digital_separator_pane_g

0xebe5,	// (0x00094a1b) bg_popup_window_pane_cp04

0x3a31,	// (0x00089867) heading_pane_cp03

0x3a39,	// (0x0008986f) listscroll_popup_gms_pane

0x3a41,	// (0x00089877) grid_large_graphic_popup_pane

0x3a4b,	// (0x00089881) listscroll_popup_gms_pane_g1

0x3a53,	// (0x00089889) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000951a8) listscroll_popup_gms_pane_g

0x27e3,	// (0x00088619) scroll_pane_cp014

0x3a5b,	// (0x00089891) cell_large_graphic_popup_pane_ParamLimits

0x3a5b,	// (0x00089891) cell_large_graphic_popup_pane

0x3a73,	// (0x000898a9) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a73,	// (0x000898a9) cell_large_graphic_popup_pane_g1

0x3a7f,	// (0x000898b5) cell_large_graphic_popup_pane_g2_ParamLimits

0x3a7f,	// (0x000898b5) cell_large_graphic_popup_pane_g2

0x3a8b,	// (0x000898c1) cell_large_graphic_popup_pane_g3_ParamLimits

0x3a8b,	// (0x000898c1) cell_large_graphic_popup_pane_g3

0x3a98,	// (0x000898ce) cell_large_graphic_popup_pane_g4_ParamLimits

0x3a98,	// (0x000898ce) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000951ad) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000951ad) cell_large_graphic_popup_pane_g

0x3aa8,	// (0x000898de) grid_highlight_pane_cp010

0xef5a,	// (0x00094d90) bg_popup_call_pane_g1

0x3ab2,	// (0x000898e8) list_single_graphic_popup_conf_pane_ParamLimits

0x3ab2,	// (0x000898e8) list_single_graphic_popup_conf_pane

0x3ac5,	// (0x000898fb) list_highlight_pane_cp01

0x3ace,	// (0x00089904) list_single_graphic_popup_conf_pane_g1

0x3ad6,	// (0x0008990c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000951b6) list_single_graphic_popup_conf_pane_g

0x3ade,	// (0x00089914) list_single_graphic_popup_conf_pane_t1

0x3aec,	// (0x00089922) linegrid_cams_pane_g1

0x3af5,	// (0x0008992b) linegrid_cams_pane_g2

0x1e95,	// (0x00087ccb) linegrid_cams_pane_g3

0x3afe,	// (0x00089934) linegrid_cams_pane_g4

0x3b07,	// (0x0008993d) linegrid_cams_pane_g5

0x3b10,	// (0x00089946) linegrid_cams_pane_g6

0x1e9e,	// (0x00087cd4) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000951bb) linegrid_cams_pane_g

0x3b1b,	// (0x00089951) popup_clock_analogue_window

0x3b1b,	// (0x00089951) popup_clock_digital_window

0xebe5,	// (0x00094a1b) popup_phob_thumbnail_window

0xef5a,	// (0x00094d90) call_video_uplink_pane_g1

0x3b24,	// (0x0008995a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000951ca) call_video_uplink_pane_g

0x3b2c,	// (0x00089962) video_uplink_pane

0x3b34,	// (0x0008996a) mce_image_pane_g1

0x3b3e,	// (0x00089974) mce_image_pane_g2

0x3b48,	// (0x0008997e) mce_image_pane_g3

0x3b50,	// (0x00089986) mce_image_pane_g4

0x3b58,	// (0x0008998e) mce_image_pane_g5

0x0004,

0xf399,	// (0x000951cf) mce_image_pane_g

0x3b60,	// (0x00089996) control_top_pane_stacon_cp01_ParamLimits

0x3b60,	// (0x00089996) control_top_pane_stacon_cp01

0x3b74,	// (0x000899aa) uni_indicator_pane_stacon_cp01_ParamLimits

0x3b74,	// (0x000899aa) uni_indicator_pane_stacon_cp01

0x3b85,	// (0x000899bb) bg_popup_sub_pane_cp03

0x3b8f,	// (0x000899c5) chi_dic_find_pane

0x3b97,	// (0x000899cd) listscroll_chi_dic_pane

0x3ba0,	// (0x000899d6) main_pane_chidic_g1

0x3bb3,	// (0x000899e9) chi_dic_find_pane_t1

0x3bc1,	// (0x000899f7) find_chidic_pane

0x3bca,	// (0x00089a00) chi_dic_list_pane_ParamLimits

0x3bca,	// (0x00089a00) chi_dic_list_pane

0x3bdb,	// (0x00089a11) scroll_pane_cp020

0x3be3,	// (0x00089a19) find_chidic_pane_t1

0xebe5,	// (0x00094a1b) input_focus_pane_cp06

0x3bf2,	// (0x00089a28) list_chi_dic_pane_ParamLimits

0x3bf2,	// (0x00089a28) list_chi_dic_pane

0x3c04,	// (0x00089a3a) list_chi_dic_pane_t1_ParamLimits

0x3c04,	// (0x00089a3a) list_chi_dic_pane_t1

0xebe5,	// (0x00094a1b) list_highlight_pane_cp020

0x3c17,	// (0x00089a4d) bg_cale_heading_pane_g1

0x3c1f,	// (0x00089a55) bg_cale_heading_pane_g2

0x3c27,	// (0x00089a5d) bg_cale_heading_pane_g3

0x3c2f,	// (0x00089a65) bg_cale_heading_pane_g4

0x3c39,	// (0x00089a6f) bg_cale_heading_pane_g5

0x3c43,	// (0x00089a79) bg_cale_heading_pane_g6

0x3c4b,	// (0x00089a81) bg_cale_heading_pane_g7

0x3c53,	// (0x00089a89) bg_cale_heading_pane_g8

0x3c5d,	// (0x00089a93) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000951da) bg_cale_heading_pane_g

0x3c17,	// (0x00089a4d) bg_cale_side_pane_g1

0x3c67,	// (0x00089a9d) bg_cale_side_pane_g2

0x3c6f,	// (0x00089aa5) bg_cale_side_pane_g3

0x3c77,	// (0x00089aad) bg_cale_side_pane_g4

0x3c7f,	// (0x00089ab5) bg_cale_side_pane_g5

0x3c87,	// (0x00089abd) bg_cale_side_pane_g6

0x3c8f,	// (0x00089ac5) bg_cale_side_pane_g7

0x3c97,	// (0x00089acd) bg_cale_side_pane_g8

0x3c9f,	// (0x00089ad5) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000951ed) bg_cale_side_pane_g

0x3ca7,	// (0x00089add) popup_call_status_window_ParamLimits

0x3ca7,	// (0x00089add) popup_call_status_window

0x3cf0,	// (0x00089b26) stacon_top_pane

0x3cf8,	// (0x00089b2e) status_pane_ParamLimits

0x3cf8,	// (0x00089b2e) status_pane

0x3d0d,	// (0x00089b43) status_small_pane

0x3d15,	// (0x00089b4b) control_pane

0xebe5,	// (0x00094a1b) stacon_bottom_pane

0x3d1d,	// (0x00089b53) list_single_mce_smart_pane_t1_ParamLimits

0x3d1d,	// (0x00089b53) list_single_mce_smart_pane_t1

0x3d30,	// (0x00089b66) list_single_mce_smart_pane_t2_ParamLimits

0x3d30,	// (0x00089b66) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00095200) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00095200) list_single_mce_smart_pane_t

0x3d4f,	// (0x00089b85) compass_pane

0x3d58,	// (0x00089b8e) main_location2_pane_t1

0x3d6a,	// (0x00089ba0) main_location2_pane_t2

0x3d7c,	// (0x00089bb2) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00095205) main_location2_pane_t

0x3dc0,	// (0x00089bf6) compass_pane_g1_ParamLimits

0x3dc0,	// (0x00089bf6) compass_pane_g1

0x3dcc,	// (0x00089c02) compass_pane_t1

0x3ddb,	// (0x00089c11) compass_pane_t2

0x0005,

0xf3d8,	// (0x0009520e) compass_pane_t

0x3e22,	// (0x00089c58) text_secondary_cp61

0x3ea1,	// (0x00089cd7) navi_pane_cams_g5

0x3f1d,	// (0x00089d53) navi_pane_im_t1

0x3f2b,	// (0x00089d61) navi_pane_mp_g1_ParamLimits

0x3f2b,	// (0x00089d61) navi_pane_mp_g1

0x3f3f,	// (0x00089d75) navi_pane_mp_g2_ParamLimits

0x3f3f,	// (0x00089d75) navi_pane_mp_g2

0x3f4b,	// (0x00089d81) navi_pane_mp_g3_ParamLimits

0x3f4b,	// (0x00089d81) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00095222) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00095222) navi_pane_mp_g

0x3f57,	// (0x00089d8d) navi_pane_mp_t1

0x3f65,	// (0x00089d9b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00095229) navi_pane_mp_t

0x4012,	// (0x00089e48) navi_pane_vt_g1

0x3f57,	// (0x00089d8d) navi_pane_vt_t1

0x401a,	// (0x00089e50) navi_slider_pane

0x1eb7,	// (0x00087ced) zooming_pane

0x402a,	// (0x00089e60) navi_slider_pane_g1

0xb3d9,	// (0x0009120f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00095230) navi_slider_pane_g

0x404e,	// (0x00089e84) aid_levels_zoom

0x4056,	// (0x00089e8c) zooming_pane_g1

0x405e,	// (0x00089e94) zooming_pane_g2

0x405e,	// (0x00089e94) zooming_pane_g3

0x0002,

0xf409,	// (0x0009523f) zooming_pane_g

0x4066,	// (0x00089e9c) level_10_zoom

0x406f,	// (0x00089ea5) level_11_zoom

0x4078,	// (0x00089eae) level_1_zoom

0x4081,	// (0x00089eb7) level_2_zoom

0x408a,	// (0x00089ec0) level_3_zoom

0x4093,	// (0x00089ec9) level_4_zoom

0x409c,	// (0x00089ed2) level_5_zoom

0x40a5,	// (0x00089edb) level_6_zoom

0x40ae,	// (0x00089ee4) level_7_zoom

0x40b7,	// (0x00089eed) level_8_zoom

0x40c0,	// (0x00089ef6) level_9_zoom

0x40d1,	// (0x00089f07) popup_phob_thumbnail_window_g1

0x40d9,	// (0x00089f0f) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00095246) popup_phob_thumbnail_window_g

0xb615,	// (0x0009144b) level_1_location

0xb61d,	// (0x00091453) level_2_location

0xb625,	// (0x0009145b) level_3_location

0xb62d,	// (0x00091463) level_4_location

0x1eb7,	// (0x00087ced) level_5_location

0x40e1,	// (0x00089f17) mce_icon_pane_g1

0x40eb,	// (0x00089f21) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0009524b) mce_icon_pane_g

0x40f3,	// (0x00089f29) main_mup_pane_g1_ParamLimits

0x40f3,	// (0x00089f29) main_mup_pane_g1

0x4109,	// (0x00089f3f) main_mup_pane_g2_ParamLimits

0x4109,	// (0x00089f3f) main_mup_pane_g2

0x4121,	// (0x00089f57) main_mup_pane_g3_ParamLimits

0x4121,	// (0x00089f57) main_mup_pane_g3

0x4139,	// (0x00089f6f) main_mup_pane_g4_ParamLimits

0x4139,	// (0x00089f6f) main_mup_pane_g4

0x4151,	// (0x00089f87) main_mup_pane_g5_ParamLimits

0x4151,	// (0x00089f87) main_mup_pane_g5

0x416d,	// (0x00089fa3) main_mup_pane_g6_ParamLimits

0x416d,	// (0x00089fa3) main_mup_pane_g6

0x4185,	// (0x00089fbb) main_mup_pane_g7_ParamLimits

0x4185,	// (0x00089fbb) main_mup_pane_g7

0x419d,	// (0x00089fd3) main_mup_pane_g8_ParamLimits

0x419d,	// (0x00089fd3) main_mup_pane_g8

0x41b7,	// (0x00089fed) main_mup_pane_g9_ParamLimits

0x41b7,	// (0x00089fed) main_mup_pane_g9

0x41d1,	// (0x0008a007) main_mup_pane_g10_ParamLimits

0x41d1,	// (0x0008a007) main_mup_pane_g10

0x41eb,	// (0x0008a021) main_mup_pane_g11_ParamLimits

0x41eb,	// (0x0008a021) main_mup_pane_g11

0x41ff,	// (0x0008a035) main_mup_pane_g12_ParamLimits

0x41ff,	// (0x0008a035) main_mup_pane_g12

0x4215,	// (0x0008a04b) main_mup_pane_g13_ParamLimits

0x4215,	// (0x0008a04b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00095250) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00095250) main_mup_pane_g

0x4229,	// (0x0008a05f) main_mup_pane_t1_ParamLimits

0x4229,	// (0x0008a05f) main_mup_pane_t1

0x4243,	// (0x0008a079) main_mup_pane_t2_ParamLimits

0x4243,	// (0x0008a079) main_mup_pane_t2

0x425b,	// (0x0008a091) main_mup_pane_t3_ParamLimits

0x425b,	// (0x0008a091) main_mup_pane_t3

0x4273,	// (0x0008a0a9) main_mup_pane_t4_ParamLimits

0x4273,	// (0x0008a0a9) main_mup_pane_t4

0x4291,	// (0x0008a0c7) main_mup_pane_t5_ParamLimits

0x4291,	// (0x0008a0c7) main_mup_pane_t5

0x42a6,	// (0x0008a0dc) main_mup_pane_t6_ParamLimits

0x42a6,	// (0x0008a0dc) main_mup_pane_t6

0x0005,

0xf435,	// (0x0009526b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0009526b) main_mup_pane_t

0x42b8,	// (0x0008a0ee) mup_progress_pane_ParamLimits

0x42b8,	// (0x0008a0ee) mup_progress_pane

0x42c4,	// (0x0008a0fa) mup_visualizer_pane_ParamLimits

0x42c4,	// (0x0008a0fa) mup_visualizer_pane

0x42f4,	// (0x0008a12a) mup_volume_pane_ParamLimits

0x42f4,	// (0x0008a12a) mup_volume_pane

0x4312,	// (0x0008a148) mup_visualizer_pane_g1_ParamLimits

0x4312,	// (0x0008a148) mup_visualizer_pane_g1

0x4312,	// (0x0008a148) mup_visualizer_pane_g2_ParamLimits

0x4312,	// (0x0008a148) mup_visualizer_pane_g2

0x3dc0,	// (0x00089bf6) mup_visualizer_pane_g3_ParamLimits

0x3dc0,	// (0x00089bf6) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00095278) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00095278) mup_visualizer_pane_g

0xef5a,	// (0x00094d90) mup_volume_pane_g1

0x4328,	// (0x0008a15e) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0009527f) mup_volume_pane_g

0xef5a,	// (0x00094d90) mup_progress_pane_g1

0x4331,	// (0x0008a167) mup_progress_pane_g2

0x433a,	// (0x0008a170) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00095284) mup_progress_pane_g

0xebe5,	// (0x00094a1b) bg_popup_window_pane_cp05

0x4343,	// (0x0008a179) heading_pane_cp02_ParamLimits

0x4343,	// (0x0008a179) heading_pane_cp02

0x435d,	// (0x0008a193) list_popup_blid_pane

0x4365,	// (0x0008a19b) list_blid_sat_info_pane_ParamLimits

0x4365,	// (0x0008a19b) list_blid_sat_info_pane

0x4378,	// (0x0008a1ae) list_blid_sat_info_pane_g1

0x4380,	// (0x0008a1b6) list_blid_sat_info_pane_t1

0x4486,	// (0x0008a2bc) mup_equalizer_pane_ParamLimits

0x4486,	// (0x0008a2bc) mup_equalizer_pane

0x449f,	// (0x0008a2d5) mup_equalizer_pane_cp1_ParamLimits

0x449f,	// (0x0008a2d5) mup_equalizer_pane_cp1

0x44bc,	// (0x0008a2f2) mup_equalizer_pane_cp2_ParamLimits

0x44bc,	// (0x0008a2f2) mup_equalizer_pane_cp2

0x44d9,	// (0x0008a30f) mup_equalizer_pane_cp3_ParamLimits

0x44d9,	// (0x0008a30f) mup_equalizer_pane_cp3

0x44fa,	// (0x0008a330) mup_equalizer_pane_cp4_ParamLimits

0x44fa,	// (0x0008a330) mup_equalizer_pane_cp4

0x451b,	// (0x0008a351) mup_equalizer_pane_cp5

0x452f,	// (0x0008a365) mup_equalizer_pane_cp6

0x4543,	// (0x0008a379) mup_equalizer_pane_cp7

0xb533,	// (0x00091369) bg_popup_call_poc_act_pane_g9

0xb53b,	// (0x00091371) bg_popup_call_poc_act_pane_g10

0xb543,	// (0x00091379) bg_popup_call_poc_act_pane_g11

0x000a,

0xee40,	// (0x00094c76) mup_scale_pane

0xef5a,	// (0x00094d90) mup_scale_pane_g1

0x4557,	// (0x0008a38d) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000952a0) mup_scale_pane_g

0x458d,	// (0x0008a3c3) msg_data_pane

0x4595,	// (0x0008a3cb) scroll_pane_cp017

0x03a8,	// (0x000861de) bg_list_pane_cp04_ParamLimits

0x03a8,	// (0x000861de) bg_list_pane_cp04

0x459d,	// (0x0008a3d3) msg_data_pane_g1

0x45a5,	// (0x0008a3db) msg_data_pane_g2

0x45af,	// (0x0008a3e5) msg_data_pane_g3

0x45b7,	// (0x0008a3ed) msg_data_pane_g4

0x45bf,	// (0x0008a3f5) msg_data_pane_g5

0x45c7,	// (0x0008a3fd) msg_data_pane_g6

0x45cf,	// (0x0008a405) msg_data_pane_g7

0x0006,

0xf479,	// (0x000952af) msg_data_pane_g

0x03c8,	// (0x000861fe) msg_text_pane_ParamLimits

0x03c8,	// (0x000861fe) msg_text_pane

0x45d7,	// (0x0008a40d) qrid_highlight_pane_cp011_ParamLimits

0x45d7,	// (0x0008a40d) qrid_highlight_pane_cp011

0xebe5,	// (0x00094a1b) msg_body_pane

0xebe5,	// (0x00094a1b) msg_header_pane

0x45f6,	// (0x0008a42c) input_focus_pane_cp07

0x03f8,	// (0x0008622e) msg_header_pane_t1_ParamLimits

0x03f8,	// (0x0008622e) msg_header_pane_t1

0x040a,	// (0x00086240) msg_header_pane_t2_ParamLimits

0x040a,	// (0x00086240) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000952c3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000952c3) msg_header_pane_t

0x460b,	// (0x0008a441) msg_body_pane_g1

0x041c,	// (0x00086252) msg_body_pane_t1_ParamLimits

0x041c,	// (0x00086252) msg_body_pane_t1

0x044d,	// (0x00086283) msg_body_pane_t2_ParamLimits

0x044d,	// (0x00086283) msg_body_pane_t2

0x045f,	// (0x00086295) msg_body_pane_t3_ParamLimits

0x045f,	// (0x00086295) msg_body_pane_t3

0x0002,

0xf492,	// (0x000952c8) msg_body_pane_t_ParamLimits

0xf492,	// (0x000952c8) msg_body_pane_t

0x464d,	// (0x0008a483) main_viewer_pane_g1_ParamLimits

0x464d,	// (0x0008a483) main_viewer_pane_g1

0x465b,	// (0x0008a491) main_viewer_pane_g2_ParamLimits

0x465b,	// (0x0008a491) main_viewer_pane_g2

0x4669,	// (0x0008a49f) main_viewer_pane_g3_ParamLimits

0x4669,	// (0x0008a49f) main_viewer_pane_g3

0x4678,	// (0x0008a4ae) main_viewer_pane_g4_ParamLimits

0x4678,	// (0x0008a4ae) main_viewer_pane_g4

0xb403,	// (0x00091239) main_viewer_pane_g5_ParamLimits

0xb403,	// (0x00091239) main_viewer_pane_g5

0xb403,	// (0x00091239) main_viewer_pane_g7_ParamLimits

0xb403,	// (0x00091239) main_viewer_pane_g7

0xb415,	// (0x0009124b) main_viewer_pane_g8_ParamLimits

0xb415,	// (0x0009124b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000952d8) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000952d8) main_viewer_pane_g

0x4687,	// (0x0008a4bd) viewer_content_pane_ParamLimits

0x4687,	// (0x0008a4bd) viewer_content_pane

0x46c2,	// (0x0008a4f8) main_postcard_pane_g1_ParamLimits

0x46c2,	// (0x0008a4f8) main_postcard_pane_g1

0x46d8,	// (0x0008a50e) main_postcard_pane_g2_ParamLimits

0x46d8,	// (0x0008a50e) main_postcard_pane_g2

0x46ee,	// (0x0008a524) main_postcard_pane_g3_ParamLimits

0x46ee,	// (0x0008a524) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000952e9) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000952e9) main_postcard_pane_g

0x4705,	// (0x0008a53b) main_postcard_pane_g4

0xb769,	// (0x0009159f) smil_status_volume_pane_g2

0x4748,	// (0x0008a57e) postcard_pane_ParamLimits

0x4748,	// (0x0008a57e) postcard_pane

0x478a,	// (0x0008a5c0) postcard_pane_g1_ParamLimits

0x478a,	// (0x0008a5c0) postcard_pane_g1

0x4798,	// (0x0008a5ce) postcard_pane_g2_ParamLimits

0x4798,	// (0x0008a5ce) postcard_pane_g2

0x47a4,	// (0x0008a5da) postcard_pane_g3_ParamLimits

0x47a4,	// (0x0008a5da) postcard_pane_g3

0x47b0,	// (0x0008a5e6) postcard_pane_g4_ParamLimits

0x47b0,	// (0x0008a5e6) postcard_pane_g4

0x47be,	// (0x0008a5f4) postcard_pane_g5_ParamLimits

0x47be,	// (0x0008a5f4) postcard_pane_g5

0x47d3,	// (0x0008a609) postcard_pane_g6_ParamLimits

0x47d3,	// (0x0008a609) postcard_pane_g6

0x478a,	// (0x0008a5c0) postcard_pane_g7_ParamLimits

0x478a,	// (0x0008a5c0) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000952f6) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000952f6) postcard_pane_g

0x47e7,	// (0x0008a61d) main_mp2_pane_g1_ParamLimits

0x47e7,	// (0x0008a61d) main_mp2_pane_g1

0x47f3,	// (0x0008a629) main_mp2_pane_g2_ParamLimits

0x47f3,	// (0x0008a629) main_mp2_pane_g2

0x47ff,	// (0x0008a635) main_mp2_pane_g3_ParamLimits

0x47ff,	// (0x0008a635) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00095305) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00095305) main_mp2_pane_g

0x480b,	// (0x0008a641) main_mp2_pane_t1_ParamLimits

0x480b,	// (0x0008a641) main_mp2_pane_t1

0x4820,	// (0x0008a656) main_mp2_pane_t2_ParamLimits

0x4820,	// (0x0008a656) main_mp2_pane_t2

0x4832,	// (0x0008a668) main_mp2_pane_t3_ParamLimits

0x4832,	// (0x0008a668) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0009530c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0009530c) main_mp2_pane_t

0x4844,	// (0x0008a67a) pec_content_pane_ParamLimits

0x4844,	// (0x0008a67a) pec_content_pane

0x27e3,	// (0x00088619) scroll_pane_cp015

0x4856,	// (0x0008a68c) pec_attribute_pane_ParamLimits

0x4856,	// (0x0008a68c) pec_attribute_pane

0x4866,	// (0x0008a69c) pec_content_pane_g1_ParamLimits

0x4866,	// (0x0008a69c) pec_content_pane_g1

0x4872,	// (0x0008a6a8) pec_content_pane_t1_ParamLimits

0x4872,	// (0x0008a6a8) pec_content_pane_t1

0x4884,	// (0x0008a6ba) pec_content_pane_t2_ParamLimits

0x4884,	// (0x0008a6ba) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00095313) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00095313) pec_content_pane_t

0x4896,	// (0x0008a6cc) list_single_graphic_pane_cp01_ParamLimits

0x4896,	// (0x0008a6cc) list_single_graphic_pane_cp01

0xee40,	// (0x00094c76) bg_popup_sub_pane_cp04

0x48ab,	// (0x0008a6e1) popup_mup_playback_window_g1

0x48b7,	// (0x0008a6ed) popup_mup_playback_window_t1

0x48cc,	// (0x0008a702) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00095318) popup_mup_playback_window_t

0x4921,	// (0x0008a757) main_image_pane_g1_ParamLimits

0x4921,	// (0x0008a757) main_image_pane_g1

0x49fe,	// (0x0008a834) scroll_pane_cp018_ParamLimits

0x49fe,	// (0x0008a834) scroll_pane_cp018

0x4a16,	// (0x0008a84c) scroll_pane_cp016_ParamLimits

0x4a16,	// (0x0008a84c) scroll_pane_cp016

0x4a4a,	// (0x0008a880) smil2_image_pane_ParamLimits

0x4a4a,	// (0x0008a880) smil2_image_pane

0x4a7a,	// (0x0008a8b0) smil2_root_pane_ParamLimits

0x4a7a,	// (0x0008a8b0) smil2_root_pane

0x4ab2,	// (0x0008a8e8) smil2_text_pane_ParamLimits

0x4ab2,	// (0x0008a8e8) smil2_text_pane

0xebe5,	// (0x00094a1b) bg_list_pane_cp06

0x4b3a,	// (0x0008a970) grid_radio_pane

0xebe5,	// (0x00094a1b) bg_popup_window_pane_cp06

0x4b42,	// (0x0008a978) main_fmradio_pane_t1

0x3a31,	// (0x00089867) heading_pane_cp04

0x4b50,	// (0x0008a986) main_fmradio_pane_t2

0xb54b,	// (0x00091381) popup_cale_lunar_info_window_g1

0x4b5e,	// (0x0008a994) main_fmradio_pane_t3

0xb553,	// (0x00091389) popup_cale_lunar_info_window_g2

0x4b6c,	// (0x0008a9a2) main_fmradio_pane_t4

0x0001,

0x4b7a,	// (0x0008a9b0) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000953f3) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0009532d) main_fmradio_pane_t

0x4b88,	// (0x0008a9be) wait_bar_pane_cp03

0x4b90,	// (0x0008a9c6) cell_fmradio_pane_ParamLimits

0x4b90,	// (0x0008a9c6) cell_fmradio_pane

0x478a,	// (0x0008a5c0) cell_fmradio_pane_g1_ParamLimits

0x478a,	// (0x0008a5c0) cell_fmradio_pane_g1

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp011

0x4ba3,	// (0x0008a9d9) poc_content_pane_ParamLimits

0x4ba3,	// (0x0008a9d9) poc_content_pane

0x4bb5,	// (0x0008a9eb) scroll_pane_cp019

0x4bbd,	// (0x0008a9f3) popup_call_poc_act_window_ParamLimits

0x4bbd,	// (0x0008a9f3) popup_call_poc_act_window

0x4be1,	// (0x0008aa17) popup_call_poc_inact_window_ParamLimits

0x4be1,	// (0x0008aa17) popup_call_poc_inact_window

0xf594,	// (0x000953ca) bg_popup_call_poc_act_pane_g

0xb4c3,	// (0x000912f9) bg_popup_call_poc_inact_pane_g1

0xb4cb,	// (0x00091301) bg_popup_call_poc_inact_pane_g2

0x4bfa,	// (0x0008aa30) popup_call_poc_act_window_g2

0xb4d3,	// (0x00091309) bg_popup_call_poc_inact_pane_g3

0xb4db,	// (0x00091311) bg_popup_call_poc_inact_pane_g4

0xb4e3,	// (0x00091319) bg_popup_call_poc_inact_pane_g5

0x4c02,	// (0x0008aa38) popup_call_poc_act_window_t1_ParamLimits

0x4c02,	// (0x0008aa38) popup_call_poc_act_window_t1

0x4c2a,	// (0x0008aa60) popup_call_poc_act_window_t2_ParamLimits

0x4c2a,	// (0x0008aa60) popup_call_poc_act_window_t2

0x4c52,	// (0x0008aa88) popup_call_poc_act_window_t3_ParamLimits

0x4c52,	// (0x0008aa88) popup_call_poc_act_window_t3

0x4c7a,	// (0x0008aab0) popup_call_poc_act_window_t4_ParamLimits

0x4c7a,	// (0x0008aab0) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00095338) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00095338) popup_call_poc_act_window_t

0xb4eb,	// (0x00091321) bg_popup_call_poc_inact_pane_g6

0xb4f3,	// (0x00091329) bg_popup_call_poc_inact_pane_g7

0xb4fb,	// (0x00091331) bg_popup_call_poc_inact_pane_g8

0x4c8c,	// (0x0008aac2) popup_call_poc_inact_window_g2

0xb503,	// (0x00091339) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000953b7) bg_popup_call_poc_inact_pane_g

0x4c94,	// (0x0008aaca) popup_call_poc_inact_window_t1_ParamLimits

0x4c94,	// (0x0008aaca) popup_call_poc_inact_window_t1

0x4ca9,	// (0x0008aadf) popup_call_poc_inact_window_t2_ParamLimits

0x4ca9,	// (0x0008aadf) popup_call_poc_inact_window_t2

0x4cbe,	// (0x0008aaf4) popup_call_poc_inact_window_t3_ParamLimits

0x4cbe,	// (0x0008aaf4) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00095341) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00095341) popup_call_poc_inact_window_t

0xb6dc,	// (0x00091512) context_pane_ParamLimits

0x624a,	// (0x0008c080) signal_pane_ParamLimits

0x1eb7,	// (0x00087ced) main_call2_pane

0xb6b5,	// (0x000914eb) popup_phob_thumbnail2_window_ParamLimits

0xb6b5,	// (0x000914eb) popup_phob_thumbnail2_window

0xb3eb,	// (0x00091221) aid_hotspot_pointer_arrow_pane

0xb3f3,	// (0x00091229) aid_hotspot_pointer_hand_pane

0x5d64,	// (0x0008bb9a) phob_pre_status_pane_g5

0x1f35,	// (0x00087d6b) cams_zoom_pane_ParamLimits

0x1f44,	// (0x00087d7a) image_vga_pane_ParamLimits

0x1f5e,	// (0x00087d94) main_camera_pane_g1_ParamLimits

0x1f70,	// (0x00087da6) main_camera_pane_g2_ParamLimits

0x1f80,	// (0x00087db6) main_camera_pane_g3_ParamLimits

0x1f90,	// (0x00087dc6) main_camera_pane_g4_ParamLimits

0x1fa0,	// (0x00087dd6) main_camera_pane_g5_ParamLimits

0x1fb0,	// (0x00087de6) main_camera_pane_g6_ParamLimits

0x1fc2,	// (0x00087df8) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00095040) main_camera_pane_g_ParamLimits

0x1fde,	// (0x00087e14) main_camera_pane_t1_ParamLimits

0x1ff4,	// (0x00087e2a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00095051) main_camera_pane_t_ParamLimits

0xee40,	// (0x00094c76) bg_popup_preview_window_pane_cp01_ParamLimits

0xee40,	// (0x00094c76) bg_popup_preview_window_pane_cp01

0x4cd3,	// (0x0008ab09) popup_phob_thumbnail2_window_g1_ParamLimits

0x4cd3,	// (0x0008ab09) popup_phob_thumbnail2_window_g1

0xebe5,	// (0x00094a1b) call2_cli_visual_pane

0x4cfa,	// (0x0008ab30) popup_call2_audio_conf_window_ParamLimits

0x4cfa,	// (0x0008ab30) popup_call2_audio_conf_window

0x4d1a,	// (0x0008ab50) popup_call2_audio_first_window_ParamLimits

0x4d1a,	// (0x0008ab50) popup_call2_audio_first_window

0x4db0,	// (0x0008abe6) popup_call2_audio_in_window_ParamLimits

0x4db0,	// (0x0008abe6) popup_call2_audio_in_window

0x4df8,	// (0x0008ac2e) popup_call2_audio_out_window_ParamLimits

0x4df8,	// (0x0008ac2e) popup_call2_audio_out_window

0x4e62,	// (0x0008ac98) popup_call2_audio_second_window_ParamLimits

0x4e62,	// (0x0008ac98) popup_call2_audio_second_window

0x4ec8,	// (0x0008acfe) popup_call2_audio_wait_window_ParamLimits

0x4ec8,	// (0x0008acfe) popup_call2_audio_wait_window

0xebe5,	// (0x00094a1b) bg_popup_call2_act_pane_cp03

0xee22,	// (0x00094c58) list_conf_pane_cp

0x4f02,	// (0x0008ad38) popup_call2_audio_conf_window_t1

0x3ab2,	// (0x000898e8) list_single_graphic_popup_conf2_pane_ParamLimits

0x3ab2,	// (0x000898e8) list_single_graphic_popup_conf2_pane

0x3ac5,	// (0x000898fb) list_highlight_pane_cp04

0x4f10,	// (0x0008ad46) list_single_graphic_popup_conf2_pane_g1

0x3ad6,	// (0x0008990c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00095348) list_single_graphic_popup_conf2_pane_g

0x4f1a,	// (0x0008ad50) list_single_graphic_popup_conf2_pane_t1

0x4f28,	// (0x0008ad5e) bg_popup_call2_act_pane_cp01_ParamLimits

0x4f28,	// (0x0008ad5e) bg_popup_call2_act_pane_cp01

0x4fb2,	// (0x0008ade8) call_type_pane_cp05_ParamLimits

0x4fb2,	// (0x0008ade8) call_type_pane_cp05

0x5006,	// (0x0008ae3c) popup_call2_audio_second_window_g1_ParamLimits

0x5006,	// (0x0008ae3c) popup_call2_audio_second_window_g1

0x505a,	// (0x0008ae90) popup_call2_audio_second_window_g2_ParamLimits

0x505a,	// (0x0008ae90) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0009534d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0009534d) popup_call2_audio_second_window_g

0x50bf,	// (0x0008aef5) popup_call2_audio_second_window_t1_ParamLimits

0x50bf,	// (0x0008aef5) popup_call2_audio_second_window_t1

0x517a,	// (0x0008afb0) popup_call2_audio_second_window_t2_ParamLimits

0x517a,	// (0x0008afb0) popup_call2_audio_second_window_t2

0x51cd,	// (0x0008b003) popup_call2_audio_second_window_t3_ParamLimits

0x51cd,	// (0x0008b003) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00095354) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00095354) popup_call2_audio_second_window_t

0xebe5,	// (0x00094a1b) bg_popup_call2_in_pane_cp02

0xebef,	// (0x00094a25) call_type_pane_cp04

0xebf7,	// (0x00094a2d) popup_call2_audio_wait_window_g1

0xebff,	// (0x00094a35) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00094f2f) popup_call2_audio_wait_window_g

0xec07,	// (0x00094a3d) popup_call2_audio_wait_window_t3

0x52c0,	// (0x0008b0f6) bg_popup_call2_act_pane_ParamLimits

0x52c0,	// (0x0008b0f6) bg_popup_call2_act_pane

0x5380,	// (0x0008b1b6) call_type_pane_cp03_ParamLimits

0x5380,	// (0x0008b1b6) call_type_pane_cp03

0x53e4,	// (0x0008b21a) popup_call2_audio_first_window_g1_ParamLimits

0x53e4,	// (0x0008b21a) popup_call2_audio_first_window_g1

0x5454,	// (0x0008b28a) popup_call2_audio_first_window_g2_ParamLimits

0x5454,	// (0x0008b28a) popup_call2_audio_first_window_g2

0x4312,	// (0x0008a148) popup_call2_audio_first_window_g3_ParamLimits

0x4312,	// (0x0008a148) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0009535d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0009535d) popup_call2_audio_first_window_g

0x5532,	// (0x0008b368) popup_call2_audio_first_window_t1_ParamLimits

0x5532,	// (0x0008b368) popup_call2_audio_first_window_t1

0x5635,	// (0x0008b46b) popup_call2_audio_first_window_t4_ParamLimits

0x5635,	// (0x0008b46b) popup_call2_audio_first_window_t4

0x5718,	// (0x0008b54e) popup_call2_audio_first_window_t5_ParamLimits

0x5718,	// (0x0008b54e) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00095368) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00095368) popup_call2_audio_first_window_t

0xee38,	// (0x00094c6e) bg_popup_call2_act_pane_g1

0xb55b,	// (0x00091391) popup_cale_lunar_info_window_t1

0xb569,	// (0x0009139f) popup_cale_lunar_info_window_t2

0xb577,	// (0x000913ad) popup_cale_lunar_info_window_t3

0xebe5,	// (0x00094a1b) bg_popup_call2_bubble_pane

0x5819,	// (0x0008b64f) bg_popup_call2_in_pane_cp01_ParamLimits

0x5819,	// (0x0008b64f) bg_popup_call2_in_pane_cp01

0xe8c1,	// (0x000946f7) call_type_pane_cp02

0x5861,	// (0x0008b697) popup_call2_audio_out_window_g1_ParamLimits

0x5861,	// (0x0008b697) popup_call2_audio_out_window_g1

0x588d,	// (0x0008b6c3) popup_call2_audio_out_window_g2_ParamLimits

0x588d,	// (0x0008b6c3) popup_call2_audio_out_window_g2

0x58b5,	// (0x0008b6eb) popup_call2_audio_out_window_g3_ParamLimits

0x58b5,	// (0x0008b6eb) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00095371) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00095371) popup_call2_audio_out_window_g

0x58f0,	// (0x0008b726) popup_call2_audio_out_window_t1_ParamLimits

0x58f0,	// (0x0008b726) popup_call2_audio_out_window_t1

0x594f,	// (0x0008b785) popup_call2_audio_out_window_t2_ParamLimits

0x594f,	// (0x0008b785) popup_call2_audio_out_window_t2

0x59a3,	// (0x0008b7d9) popup_call2_audio_out_window_t3_ParamLimits

0x59a3,	// (0x0008b7d9) popup_call2_audio_out_window_t3

0x59b9,	// (0x0008b7ef) popup_call2_audio_out_window_t4_ParamLimits

0x59b9,	// (0x0008b7ef) popup_call2_audio_out_window_t4

0x59cf,	// (0x0008b805) popup_call2_audio_out_window_t5_ParamLimits

0x59cf,	// (0x0008b805) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0009537a) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0009537a) popup_call2_audio_out_window_t

0x5a33,	// (0x0008b869) bg_popup_call2_in_pane_ParamLimits

0x5a33,	// (0x0008b869) bg_popup_call2_in_pane

0x5a8f,	// (0x0008b8c5) popup_call2_audio_in_window_g1_ParamLimits

0x5a8f,	// (0x0008b8c5) popup_call2_audio_in_window_g1

0x5ac7,	// (0x0008b8fd) popup_call2_audio_in_window_g2_ParamLimits

0x5ac7,	// (0x0008b8fd) popup_call2_audio_in_window_g2

0x5aff,	// (0x0008b935) popup_call2_audio_in_window_g3_ParamLimits

0x5aff,	// (0x0008b935) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00095387) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00095387) popup_call2_audio_in_window_g

0x5b57,	// (0x0008b98d) popup_call2_audio_in_window_t1_ParamLimits

0x5b57,	// (0x0008b98d) popup_call2_audio_in_window_t1

0x5bd7,	// (0x0008ba0d) popup_call2_audio_in_window_t2_ParamLimits

0x5bd7,	// (0x0008ba0d) popup_call2_audio_in_window_t2

0xb42d,	// (0x00091263) popup_call2_audio_in_window_t3_ParamLimits

0xb42d,	// (0x00091263) popup_call2_audio_in_window_t3

0xb447,	// (0x0009127d) popup_call2_audio_in_window_t4_ParamLimits

0xb447,	// (0x0009127d) popup_call2_audio_in_window_t4

0xb459,	// (0x0009128f) popup_call2_audio_in_window_t5_ParamLimits

0xb459,	// (0x0009128f) popup_call2_audio_in_window_t5

0xb46e,	// (0x000912a4) popup_call2_audio_in_window_t6_ParamLimits

0xb46e,	// (0x000912a4) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00095390) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00095390) popup_call2_audio_in_window_t

0xee38,	// (0x00094c6e) bg_popup_call2_in_pane_g1

0xb585,	// (0x000913bb) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000953f8) popup_cale_lunar_info_window_t

0xee40,	// (0x00094c76) bg_popup_call2_rect_pane_ParamLimits

0xee40,	// (0x00094c76) bg_popup_call2_rect_pane

0xebe5,	// (0x00094a1b) call2_cli_visual_graphic_pane

0xebe5,	// (0x00094a1b) call2_cli_visual_text_pane

0xb77c,	// (0x000915b2) smil_status_volume_pane_g3

0x0002,

0xef5a,	// (0x00094d90) call2_cli_visual_graphic_pane_g1

0xef5a,	// (0x00094d90) call2_cli_visual_graphic_pane_g2

0xef5a,	// (0x00094d90) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009539d) call2_cli_visual_graphic_pane_g

0xb483,	// (0x000912b9) bg_popup_call2_rect_pane_g1

0x1787,	// (0x000875bd) bg_popup_call2_rect_pane_g2

0xb48b,	// (0x000912c1) bg_popup_call2_rect_pane_g3

0xb493,	// (0x000912c9) bg_popup_call2_rect_pane_g4

0xb49b,	// (0x000912d1) bg_popup_call2_rect_pane_g5

0xb4a3,	// (0x000912d9) bg_popup_call2_rect_pane_g6

0xb4ab,	// (0x000912e1) bg_popup_call2_rect_pane_g7

0xb4b3,	// (0x000912e9) bg_popup_call2_rect_pane_g8

0xb4bb,	// (0x000912f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000953a4) bg_popup_call2_rect_pane_g

0xb4c3,	// (0x000912f9) bg_popup_call2_bubble_pane_g1

0xb4cb,	// (0x00091301) bg_popup_call2_bubble_pane_g2

0xb4d3,	// (0x00091309) bg_popup_call2_bubble_pane_g3

0xb4db,	// (0x00091311) bg_popup_call2_bubble_pane_g4

0xb4e3,	// (0x00091319) bg_popup_call2_bubble_pane_g5

0xb4eb,	// (0x00091321) bg_popup_call2_bubble_pane_g6

0xb4f3,	// (0x00091329) bg_popup_call2_bubble_pane_g7

0xb4fb,	// (0x00091331) bg_popup_call2_bubble_pane_g8

0xb503,	// (0x00091339) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000953b7) bg_popup_call2_bubble_pane_g

0x1808,	// (0x0008763e) aid_cale_week_size_cell_pane

0x200a,	// (0x00087e40) aid_cams_cif_uncrop_pane_ParamLimits

0x200a,	// (0x00087e40) aid_cams_cif_uncrop_pane

0x21f8,	// (0x0008802e) aid_cams_size_cell_ParamLimits

0x21f8,	// (0x0008802e) aid_cams_size_cell

0x220c,	// (0x00088042) grid_cams_pane_ParamLimits

0x2226,	// (0x0008805c) linegrid_cams_pane_ParamLimits

0x2374,	// (0x000881aa) call_video_pane_t1

0x2392,	// (0x000881c8) call_video_pane_t2

0x0001,

0xf26e,	// (0x000950a4) call_video_pane_t

0x2a22,	// (0x00088858) aid_cale_month_size_cell_pane_ParamLimits

0x2a22,	// (0x00088858) aid_cale_month_size_cell_pane

0xf60b,	// (0x00095441) smil_status_volume_pane_g

0xb789,	// (0x000915bf) volume_smil_pane_ParamLimits

0xb22e,	// (0x00091064) aid_popup2_width_pane

0x1703,	// (0x00087539) cell_qdial_pane_g4_ParamLimits

0x1703,	// (0x00087539) cell_qdial_pane_g4

0x3da0,	// (0x00089bd6) aid_blid_cardinal_pane_ParamLimits

0x3dac,	// (0x00089be2) aid_blid_destination_pane_ParamLimits

0x3dac,	// (0x00089be2) aid_blid_destination_pane

0xee40,	// (0x00094c76) bg_popup_call_poc_act_pane_ParamLimits

0xee40,	// (0x00094c76) bg_popup_call_poc_act_pane

0xee40,	// (0x00094c76) bg_popup_call_poc_inact_pane_ParamLimits

0xee40,	// (0x00094c76) bg_popup_call_poc_inact_pane

0xb50b,	// (0x00091341) bg_popup_call_poc_act_pane_g1

0xb513,	// (0x00091349) bg_popup_call_poc_act_pane_g2

0xb51b,	// (0x00091351) bg_popup_call_poc_act_pane_g3

0xb4db,	// (0x00091311) bg_popup_call_poc_act_pane_g4

0xb4e3,	// (0x00091319) bg_popup_call_poc_act_pane_g5

0xb523,	// (0x00091359) bg_popup_call_poc_act_pane_g6

0xb4f3,	// (0x00091329) bg_popup_call_poc_act_pane_g7

0xb52b,	// (0x00091361) bg_popup_call_poc_act_pane_g8

0xebe5,	// (0x00094a1b) main_usb_pane

0xb690,	// (0x000914c6) popup_cale_lunar_info_window

0x26ca,	// (0x00088500) im_reading_pane_t1_ParamLimits

0x2703,	// (0x00088539) list_im_pane_ParamLimits

0x2714,	// (0x0008854a) scroll_pane_cp07_ParamLimits

0xebe5,	// (0x00094a1b) grid_highlight_pane_cp012

0xee40,	// (0x00094c76) mup_scale_pane_ParamLimits

0x478a,	// (0x0008a5c0) main_usb_pane_g1_ParamLimits

0x478a,	// (0x0008a5c0) main_usb_pane_g1

0x5c79,	// (0x0008baaf) main_usb_pane_g2_ParamLimits

0x5c79,	// (0x0008baaf) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000953e1) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000953e1) main_usb_pane_g

0x5c8f,	// (0x0008bac5) main_usb_pane_t1_ParamLimits

0x5c8f,	// (0x0008bac5) main_usb_pane_t1

0x5ca1,	// (0x0008bad7) main_usb_pane_t2_ParamLimits

0x5ca1,	// (0x0008bad7) main_usb_pane_t2

0x5cb3,	// (0x0008bae9) main_usb_pane_t3_ParamLimits

0x5cb3,	// (0x0008bae9) main_usb_pane_t3

0x5cc5,	// (0x0008bafb) main_usb_pane_t4_ParamLimits

0x5cc5,	// (0x0008bafb) main_usb_pane_t4

0x5cd7,	// (0x0008bb0d) main_usb_pane_t5_ParamLimits

0x5cd7,	// (0x0008bb0d) main_usb_pane_t5

0x5ce9,	// (0x0008bb1f) main_usb_pane_t6_ParamLimits

0x5ce9,	// (0x0008bb1f) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000953e6) main_usb_pane_t_ParamLimits

0x3d4f,	// (0x00089b85) aid_text_placing

0x3d58,	// (0x00089b8e) main_location2_pane_t1_ParamLimits

0x3d6a,	// (0x00089ba0) main_location2_pane_t2_ParamLimits

0x3d7c,	// (0x00089bb2) main_location2_pane_t3_ParamLimits

0x3d8e,	// (0x00089bc4) main_location2_pane_t4_ParamLimits

0x3d8e,	// (0x00089bc4) main_location2_pane_t4

0xf3cf,	// (0x00095205) main_location2_pane_t_ParamLimits

0xee7c,	// (0x00094cb2) find_pinb_pane_g2_ParamLimits

0xee7c,	// (0x00094cb2) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00094f55) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00094f55) find_pinb_pane_g

0xee88,	// (0x00094cbe) find_pinb_pane_t1_ParamLimits

0xee9a,	// (0x00094cd0) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00094f5a) find_pinb_pane_t_ParamLimits

0xebe5,	// (0x00094a1b) main_call3_pane

0x2f20,	// (0x00088d56) cale_month_day_heading_pane_t1_ParamLimits

0x2fa6,	// (0x00088ddc) cale_month_day_heading_pane_t2_ParamLimits

0x3037,	// (0x00088e6d) cale_month_day_heading_pane_t3_ParamLimits

0x30c8,	// (0x00088efe) cale_month_day_heading_pane_t4_ParamLimits

0x315d,	// (0x00088f93) cale_month_day_heading_pane_t5_ParamLimits

0x31fe,	// (0x00089034) cale_month_day_heading_pane_t6_ParamLimits

0x329f,	// (0x000890d5) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000950dc) cale_month_day_heading_pane_t_ParamLimits

0x3553,	// (0x00089389) smil_status_volume_pane

0x4766,	// (0x0008a59c) postcard_address_pane_ParamLimits

0x4766,	// (0x0008a59c) postcard_address_pane

0x4778,	// (0x0008a5ae) postcard_message_pane_ParamLimits

0x4778,	// (0x0008a5ae) postcard_message_pane

0x5c57,	// (0x0008ba8d) call2_cli_visual_pane_t1_ParamLimits

0x5c57,	// (0x0008ba8d) call2_cli_visual_pane_t1

0x6477,	// (0x0008c2ad) postcard_message_pane_t1_ParamLimits

0x6477,	// (0x0008c2ad) postcard_message_pane_t1

0x6460,	// (0x0008c296) postcard_address_pane_t1_ParamLimits

0x6460,	// (0x0008c296) postcard_address_pane_t1

0x644c,	// (0x0008c282) popup_call3_audio_in_window_ParamLimits

0x644c,	// (0x0008c282) popup_call3_audio_in_window

0x62d7,	// (0x0008c10d) bg_popup_call3_in_pane_ParamLimits

0x62d7,	// (0x0008c10d) bg_popup_call3_in_pane

0x634d,	// (0x0008c183) popup_call3_audio_in_window_g1_ParamLimits

0x634d,	// (0x0008c183) popup_call3_audio_in_window_g1

0x636d,	// (0x0008c1a3) popup_call3_audio_in_window_g2_ParamLimits

0x636d,	// (0x0008c1a3) popup_call3_audio_in_window_g2

0x638d,	// (0x0008c1c3) popup_call3_audio_in_window_g3_ParamLimits

0x638d,	// (0x0008c1c3) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00095448) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00095448) popup_call3_audio_in_window_g

0x63be,	// (0x0008c1f4) popup_call3_audio_in_window_t1_ParamLimits

0x63be,	// (0x0008c1f4) popup_call3_audio_in_window_t1

0x63fc,	// (0x0008c232) popup_call3_audio_in_window_t2_ParamLimits

0x63fc,	// (0x0008c232) popup_call3_audio_in_window_t2

0x643a,	// (0x0008c270) popup_call3_audio_in_window_t3_ParamLimits

0x643a,	// (0x0008c270) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00095451) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00095451) popup_call3_audio_in_window_t

0x1eb7,	// (0x00087ced) bg_popup_call3_rect_pane

0xb483,	// (0x000912b9) bg_popup_call3_rect_pane_g1

0x1787,	// (0x000875bd) bg_popup_call3_rect_pane_g2

0xb48b,	// (0x000912c1) bg_popup_call3_rect_pane_g3

0xb493,	// (0x000912c9) bg_popup_call3_rect_pane_g4

0xb49b,	// (0x000912d1) bg_popup_call3_rect_pane_g5

0xb4a3,	// (0x000912d9) bg_popup_call3_rect_pane_g6

0xb4ab,	// (0x000912e1) bg_popup_call3_rect_pane_g7

0x430a,	// (0x0008a140) mup_visualizer_osc_pane

0x4320,	// (0x0008a156) mup_visualizer_spec_pane

0x6307,	// (0x0008c13d) call3_video_qcif_pane_ParamLimits

0x6307,	// (0x0008c13d) call3_video_qcif_pane

0x631a,	// (0x0008c150) call3_video_qcif_uncrop_pane_ParamLimits

0x631a,	// (0x0008c150) call3_video_qcif_uncrop_pane

0x6328,	// (0x0008c15e) call3_video_subqcif_pane_ParamLimits

0x6328,	// (0x0008c15e) call3_video_subqcif_pane

0x633c,	// (0x0008c172) call3_video_subqcif_uncrop_pane_ParamLimits

0x633c,	// (0x0008c172) call3_video_subqcif_uncrop_pane

0x63ad,	// (0x0008c1e3) popup_call3_audio_in_window_g4_ParamLimits

0x63ad,	// (0x0008c1e3) popup_call3_audio_in_window_g4

0x62c6,	// (0x0008c0fc) mup_spec_half_pane

0x62cf,	// (0x0008c105) mup_spec_half_pane_cp

0xb73c,	// (0x00091572) mup_osc_middle_pane

0xb745,	// (0x0009157b) mup_visualizer_osc_pane_g1

0x62a6,	// (0x0008c0dc) mup_spec_bar_pane_ParamLimits

0x62a6,	// (0x0008c0dc) mup_spec_bar_pane

0xb729,	// (0x0009155f) mup_spec_bar_pane_g1

0xb733,	// (0x00091569) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009543c) mup_spec_bar_pane_g

0x1808,	// (0x0008763e) aid_cale_week_size_cell_pane_ParamLimits

0x1822,	// (0x00087658) bg_cale_heading_pane_ParamLimits

0x183a,	// (0x00087670) bg_cale_pane_cp01_ParamLimits

0x1857,	// (0x0008768d) cale_week_corner_pane_ParamLimits

0x1876,	// (0x000876ac) cale_week_day_heading_pane_ParamLimits

0x1893,	// (0x000876c9) cale_week_scroll_pane_g1_ParamLimits

0x18a6,	// (0x000876dc) cale_week_scroll_pane_g2_ParamLimits

0x18be,	// (0x000876f4) cale_week_scroll_pane_g3_ParamLimits

0x18d6,	// (0x0008770c) cale_week_scroll_pane_g4_ParamLimits

0x18ee,	// (0x00087724) cale_week_scroll_pane_g5_ParamLimits

0x190e,	// (0x00087744) cale_week_scroll_pane_g6_ParamLimits

0x192e,	// (0x00087764) cale_week_scroll_pane_g7_ParamLimits

0x194e,	// (0x00087784) cale_week_scroll_pane_g8_ParamLimits

0x1972,	// (0x000877a8) cale_week_scroll_pane_g9_ParamLimits

0x198a,	// (0x000877c0) cale_week_scroll_pane_g10_ParamLimits

0x19a2,	// (0x000877d8) cale_week_scroll_pane_g11_ParamLimits

0x19ba,	// (0x000877f0) cale_week_scroll_pane_g12_ParamLimits

0x19d2,	// (0x00087808) cale_week_scroll_pane_g13_ParamLimits

0x19d2,	// (0x00087808) cale_week_scroll_pane_g14_ParamLimits

0x19d2,	// (0x00087808) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00094fe6) cale_week_scroll_pane_g_ParamLimits

0x1a0e,	// (0x00087844) cale_week_time_pane_ParamLimits

0x1a32,	// (0x00087868) grid_cale_week_pane_ParamLimits

0x1a58,	// (0x0008788e) listscroll_cale_week_pane_t1

0x1a6a,	// (0x000878a0) scroll_pane_cp08_ParamLimits

0x2aa4,	// (0x000888da) cale_month_corner_pane_ParamLimits

0x2eac,	// (0x00088ce2) cale_month_pane_t1

0x2ebe,	// (0x00088cf4) cale_month_week_pane_ParamLimits

0x3991,	// (0x000897c7) popup_call_status_window_g1_ParamLimits

0x39a5,	// (0x000897db) popup_call_status_window_g2_ParamLimits

0x39b9,	// (0x000897ef) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009518c) popup_call_status_window_g_ParamLimits

0x3a21,	// (0x00089857) aid_call2_pane

0x03ea,	// (0x00086220) msg_header_pane_g1

0x4766,	// (0x0008a59c) postcard_address2_pane_ParamLimits

0x4766,	// (0x0008a59c) postcard_address2_pane

0x4778,	// (0x0008a5ae) postcard_message2_pane_ParamLimits

0x4778,	// (0x0008a5ae) postcard_message2_pane

0x6258,	// (0x0008c08e) message2_row_pane_ParamLimits

0x6258,	// (0x0008c08e) message2_row_pane

0x6274,	// (0x0008c0aa) address2_row_pane_ParamLimits

0x6274,	// (0x0008c0aa) address2_row_pane

0xb6f7,	// (0x0009152d) postcard_message2_row_pane_g1

0xb6ff,	// (0x00091535) postcard_message2_row_pane_t1

0xb6f7,	// (0x0009152d) address2_row_pane_g1

0xb6ff,	// (0x00091535) address2_row_pane_t1

0x1eaf,	// (0x00087ce5) aid_size_cell_vorec

0xebe5,	// (0x00094a1b) main_rss_pane

0x6287,	// (0x0008c0bd) rss_list_single_pane_ParamLimits

0x6287,	// (0x0008c0bd) rss_list_single_pane

0xb70d,	// (0x00091543) rss_list_single_pane_t1

0xb71b,	// (0x00091551) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00095437) rss_list_single_pane_t

0xebe5,	// (0x00094a1b) main_camera2_pane

0xebe5,	// (0x00094a1b) main_video2_pane

0x64f0,	// (0x0008c326) cams_zoom_pane_cp2_ParamLimits

0x64f0,	// (0x0008c326) cams_zoom_pane_cp2

0x6510,	// (0x0008c346) image2_vga_pane_ParamLimits

0x6510,	// (0x0008c346) image2_vga_pane

0x6561,	// (0x0008c397) main_camera2_pane_g1_ParamLimits

0x6561,	// (0x0008c397) main_camera2_pane_g1

0x6581,	// (0x0008c3b7) main_camera2_pane_g2_ParamLimits

0x6581,	// (0x0008c3b7) main_camera2_pane_g2

0x65a1,	// (0x0008c3d7) main_camera2_pane_g3_ParamLimits

0x65a1,	// (0x0008c3d7) main_camera2_pane_g3

0x65c1,	// (0x0008c3f7) main_camera2_pane_g4_ParamLimits

0x65c1,	// (0x0008c3f7) main_camera2_pane_g4

0x65e1,	// (0x0008c417) main_camera2_pane_g5_ParamLimits

0x65e1,	// (0x0008c417) main_camera2_pane_g5

0x6601,	// (0x0008c437) main_camera2_pane_g6_ParamLimits

0x6601,	// (0x0008c437) main_camera2_pane_g6

0x6621,	// (0x0008c457) main_camera2_pane_g7_ParamLimits

0x6621,	// (0x0008c457) main_camera2_pane_g7

0x6641,	// (0x0008c477) main_camera2_pane_g8_ParamLimits

0x6641,	// (0x0008c477) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00095458) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00095458) main_camera2_pane_g

0x6681,	// (0x0008c4b7) main_camera2_pane_t1_ParamLimits

0x6681,	// (0x0008c4b7) main_camera2_pane_t1

0x66b6,	// (0x0008c4ec) main_camera2_pane_t2_ParamLimits

0x66b6,	// (0x0008c4ec) main_camera2_pane_t2

0x66dc,	// (0x0008c512) main_camera2_pane_t3_ParamLimits

0x66dc,	// (0x0008c512) main_camera2_pane_t3

0x673a,	// (0x0008c570) main_camera2_pane_t4_ParamLimits

0x673a,	// (0x0008c570) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0009546b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0009546b) main_camera2_pane_t

0x67cc,	// (0x0008c602) cams_zoom_pane_cp4_ParamLimits

0x67cc,	// (0x0008c602) cams_zoom_pane_cp4

0x67e2,	// (0x0008c618) image2_cif_pane_ParamLimits

0x67e2,	// (0x0008c618) image2_cif_pane

0x680d,	// (0x0008c643) image2_subqcif_pane_ParamLimits

0x680d,	// (0x0008c643) image2_subqcif_pane

0x6827,	// (0x0008c65d) main_video2_pane_g1_ParamLimits

0x6827,	// (0x0008c65d) main_video2_pane_g1

0x6841,	// (0x0008c677) main_video2_pane_g2_ParamLimits

0x6841,	// (0x0008c677) main_video2_pane_g2

0x6857,	// (0x0008c68d) main_video2_pane_g3_ParamLimits

0x6857,	// (0x0008c68d) main_video2_pane_g3

0x686d,	// (0x0008c6a3) main_video2_pane_g4_ParamLimits

0x686d,	// (0x0008c6a3) main_video2_pane_g4

0x6883,	// (0x0008c6b9) main_video2_pane_g5_ParamLimits

0x6883,	// (0x0008c6b9) main_video2_pane_g5

0x6899,	// (0x0008c6cf) main_video2_pane_g6_ParamLimits

0x6899,	// (0x0008c6cf) main_video2_pane_g6

0x0005,

0xf644,	// (0x0009547a) main_video2_pane_g_ParamLimits

0xf644,	// (0x0009547a) main_video2_pane_g

0x68b3,	// (0x0008c6e9) main_video2_pane_t1_ParamLimits

0x68b3,	// (0x0008c6e9) main_video2_pane_t1

0x68d7,	// (0x0008c70d) main_video2_pane_t2_ParamLimits

0x68d7,	// (0x0008c70d) main_video2_pane_t2

0x6925,	// (0x0008c75b) main_video2_pane_t3_ParamLimits

0x6925,	// (0x0008c75b) main_video2_pane_t3

0x0002,

0xf651,	// (0x00095487) main_video2_pane_t_ParamLimits

0xf651,	// (0x00095487) main_video2_pane_t

0x5da4,	// (0x0008bbda) call_muted_g2

0x0001,

0xf5f3,	// (0x00095429) call_muted_g

0xebe5,	// (0x00094a1b) main_mup2_pane

0x6969,	// (0x0008c79f) main_mup2_pane_g1_ParamLimits

0x6969,	// (0x0008c79f) main_mup2_pane_g1

0x6975,	// (0x0008c7ab) main_mup2_pane_g2_ParamLimits

0x6975,	// (0x0008c7ab) main_mup2_pane_g2

0xb8ad,	// (0x000916e3) main_mup_pane_g13_cp1

0xb8b5,	// (0x000916eb) mup_volume_pane_cp1

0x6991,	// (0x0008c7c7) main_mup2_pane_g4_ParamLimits

0x6991,	// (0x0008c7c7) main_mup2_pane_g4

0x69a3,	// (0x0008c7d9) main_mup2_pane_g5_ParamLimits

0x69a3,	// (0x0008c7d9) main_mup2_pane_g5

0x69b5,	// (0x0008c7eb) main_mup2_pane_g6_ParamLimits

0x69b5,	// (0x0008c7eb) main_mup2_pane_g6

0x69c7,	// (0x0008c7fd) main_mup2_pane_g7_ParamLimits

0x69c7,	// (0x0008c7fd) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0009548e) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0009548e) main_mup2_pane_g

0x69df,	// (0x0008c815) main_mup2_pane_t1_ParamLimits

0x69df,	// (0x0008c815) main_mup2_pane_t1

0x69f5,	// (0x0008c82b) main_mup2_pane_t2_ParamLimits

0x69f5,	// (0x0008c82b) main_mup2_pane_t2

0x6a0b,	// (0x0008c841) main_mup2_pane_t3_ParamLimits

0x6a0b,	// (0x0008c841) main_mup2_pane_t3

0x6a21,	// (0x0008c857) main_mup2_pane_t4_ParamLimits

0x6a21,	// (0x0008c857) main_mup2_pane_t4

0x6a39,	// (0x0008c86f) main_mup2_pane_t5_ParamLimits

0x6a39,	// (0x0008c86f) main_mup2_pane_t5

0x6a51,	// (0x0008c887) main_mup2_pane_t6_ParamLimits

0x6a51,	// (0x0008c887) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0009549d) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0009549d) main_mup2_pane_t

0x6a81,	// (0x0008c8b7) mup2_visualizer_pane_ParamLimits

0x6a81,	// (0x0008c8b7) mup2_visualizer_pane

0x6aaf,	// (0x0008c8e5) mup_progress_pane_cp_ParamLimits

0x6aaf,	// (0x0008c8e5) mup_progress_pane_cp

0xb88f,	// (0x000916c5) mup_volume_pane_cp_ParamLimits

0xb88f,	// (0x000916c5) mup_volume_pane_cp

0x6ac3,	// (0x0008c8f9) mup2_visualizer_pane_g1_ParamLimits

0x6ac3,	// (0x0008c8f9) mup2_visualizer_pane_g1

0xb7ce,	// (0x00091604) mup2_visualizer_pane_g2_ParamLimits

0xb7ce,	// (0x00091604) mup2_visualizer_pane_g2

0x6ada,	// (0x0008c910) mup2_visualizer_pane_g3_ParamLimits

0x6ada,	// (0x0008c910) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000954aa) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000954aa) mup2_visualizer_pane_g

0x4b32,	// (0x0008a968) aid_size_cell_fmradio

0x5f56,	// (0x0008bd8c) aid_height_parent_landcape

0x27ca,	// (0x00088600) wml_content_pane_cp

0x27d2,	// (0x00088608) wml_tabs_pane

0x27db,	// (0x00088611) popup_wml_miniature_window

0x27e3,	// (0x00088619) scroll_pane_cp021

0x27f7,	// (0x0008862d) wml_content_pane_comp8

0xebe5,	// (0x00094a1b) bg_popup_sub_pane_cp05

0xb7ec,	// (0x00091622) popup_wml_miniature_window_g1

0xb7f4,	// (0x0009162a) wml_miniature_view_pane

0x6ae6,	// (0x0008c91c) aid_size_wml_view

0x6aee,	// (0x0008c924) wml_miniature_view_pane_g1

0x6af7,	// (0x0008c92d) wml_miniature_view_pane_g2

0x6b00,	// (0x0008c936) wml_miniature_view_pane_g3

0x6b08,	// (0x0008c93e) wml_miniature_view_pane_g4

0x6b10,	// (0x0008c946) wml_miniature_view_pane_g5

0x6b18,	// (0x0008c94e) wml_miniature_view_pane_g6

0x6b20,	// (0x0008c956) wml_miniature_view_pane_g7

0x6b28,	// (0x0008c95e) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000954b1) wml_miniature_view_pane_g

0xb7fc,	// (0x00091632) background_graphic_ParamLimits

0xb7fc,	// (0x00091632) background_graphic

0xb808,	// (0x0009163e) wml_tabs_2_pane

0xb811,	// (0x00091647) wml_tabs_3_pane_ParamLimits

0xb811,	// (0x00091647) wml_tabs_3_pane

0xb823,	// (0x00091659) wml_tabs_4_pane_ParamLimits

0xb823,	// (0x00091659) wml_tabs_4_pane

0xb839,	// (0x0009166f) wml_tabs_5_pane_ParamLimits

0xb839,	// (0x0009166f) wml_tabs_5_pane

0xb853,	// (0x00091689) wml_tabs_pane_g2_ParamLimits

0xb853,	// (0x00091689) wml_tabs_pane_g2

0xb867,	// (0x0009169d) wml_tabs_pane_g3_ParamLimits

0xb867,	// (0x0009169d) wml_tabs_pane_g3

0x6b30,	// (0x0008c966) wml_tabs_2_active_pane_ParamLimits

0x6b30,	// (0x0008c966) wml_tabs_2_active_pane

0x6b44,	// (0x0008c97a) wml_tabs_2_passive_pane_ParamLimits

0x6b44,	// (0x0008c97a) wml_tabs_2_passive_pane

0x6b58,	// (0x0008c98e) wml_tabs_3_active_pane_cp_ParamLimits

0x6b58,	// (0x0008c98e) wml_tabs_3_active_pane_cp

0x6b6d,	// (0x0008c9a3) wml_tabs_3_passive_pane_ParamLimits

0x6b6d,	// (0x0008c9a3) wml_tabs_3_passive_pane

0x6b80,	// (0x0008c9b6) wml_tabs_3_passive_pane_cp_ParamLimits

0x6b80,	// (0x0008c9b6) wml_tabs_3_passive_pane_cp

0x6b97,	// (0x0008c9cd) tabs_4_active_pane

0x6b9f,	// (0x0008c9d5) tabs_4_passive_pane

0x6ba9,	// (0x0008c9df) tabs_4_passive_pane_cp

0x6bb1,	// (0x0008c9e7) tabs_4_passive_pane_cp2

0x5c71,	// (0x0008baa7) aid_height_text

0x42e0,	// (0x0008a116) mup_volume_cont_pane_ParamLimits

0x42e0,	// (0x0008a116) mup_volume_cont_pane

0x1387,	// (0x000871bd) aid_size_cell_pinb

0x1391,	// (0x000871c7) aid_size_list_pinb

0x6a9b,	// (0x0008c8d1) mup2_volume_cont_pane_ParamLimits

0x6a9b,	// (0x0008c8d1) mup2_volume_cont_pane

0xb87b,	// (0x000916b1) mup2_volume_cont_pane_g1_ParamLimits

0xb87b,	// (0x000916b1) mup2_volume_cont_pane_g1

0x103c,	// (0x00086e72) aid_size_cell_touch_ParamLimits

0x103c,	// (0x00086e72) aid_size_cell_touch

0x1277,	// (0x000870ad) touch_pane_ParamLimits

0x1277,	// (0x000870ad) touch_pane

0xe7c8,	// (0x000945fe) main_rss2_pane

0xb8bd,	// (0x000916f3) listscroll_rss2_pane

0xb8c6,	// (0x000916fc) rss2_navigation_pane

0xb8ce,	// (0x00091704) list_rss2_pane

0x3bdb,	// (0x00089a11) scroll_pane_cp22

0xb8d6,	// (0x0009170c) rss2_navigation_pane_g1

0xb8df,	// (0x00091715) rss2_navigation_pane_g2

0xb8e7,	// (0x0009171d) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000954c2) rss2_navigation_pane_g

0xb8ef,	// (0x00091725) rss2_navigation_pane_t1

0x6bbb,	// (0x0008c9f1) rss2_list_single_pane_ParamLimits

0x6bbb,	// (0x0008c9f1) rss2_list_single_pane

0xb8fd,	// (0x00091733) rss2_list_single_pane_t2

0xb90b,	// (0x00091741) rss2_list_single_pane_t3_ParamLimits

0xb90b,	// (0x00091741) rss2_list_single_pane_t3

0xb928,	// (0x0009175e) rss2_list_single_pane_t4

0x353b,	// (0x00089371) smil_status_pane_g1

0x125d,	// (0x00087093) main_image2_pane_ParamLimits

0x125d,	// (0x00087093) main_image2_pane

0x6661,	// (0x0008c497) main_camera2_pane_g9_ParamLimits

0x6661,	// (0x0008c497) main_camera2_pane_g9

0x678f,	// (0x0008c5c5) main_camera2_pane_t5_ParamLimits

0x678f,	// (0x0008c5c5) main_camera2_pane_t5

0xb79e,	// (0x000915d4) main_camera2_pane_t6_ParamLimits

0xb79e,	// (0x000915d4) main_camera2_pane_t6

0x6bd0,	// (0x0008ca06) main_image2_pane_g1_ParamLimits

0x6bd0,	// (0x0008ca06) main_image2_pane_g1

0x4ae8,	// (0x0008a91e) smil2_video_pane_ParamLimits

0x4ae8,	// (0x0008a91e) smil2_video_pane

0xb24a,	// (0x00091080) aid_zoom_text_primary_cp

0xb28a,	// (0x000910c0) popup_preview_fixed_window

0x26c2,	// (0x000884f8) im_reading_pane_g1

0x64d8,	// (0x0008c30e) cams2_bc_adjust_pane_cp_ParamLimits

0x64d8,	// (0x0008c30e) cams2_bc_adjust_pane_cp

0x67be,	// (0x0008c5f4) cams2_bc_adjust_pane_ParamLimits

0x67be,	// (0x0008c5f4) cams2_bc_adjust_pane

0xb936,	// (0x0009176c) cams2_bc_adjust_pane_g1

0xb93e,	// (0x00091774) cams2_slider_pane

0xb947,	// (0x0009177d) cams2_slider_pane_g1

0xb950,	// (0x00091786) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000954c9) cams2_slider_pane_g

0x147f,	// (0x000872b5) calc_display_pane_ParamLimits

0x14a7,	// (0x000872dd) calc_paper_pane_ParamLimits

0x14ca,	// (0x00087300) grid_calc_pane_ParamLimits

0xb3bc,	// (0x000911f2) popup_clock_digital_window_t1_ParamLimits

0x496f,	// (0x0008a7a5) main_image_pane_t1

0x1461,	// (0x00087297) aid_size_cell_calc_ParamLimits

0x1461,	// (0x00087297) aid_size_cell_calc

0x5f9c,	// (0x0008bdd2) popup_blid_sat_info2_window_ParamLimits

0x5f9c,	// (0x0008bdd2) popup_blid_sat_info2_window

0xb972,	// (0x000917a8) aid_size_cell_blid

0xb97a,	// (0x000917b0) bg_popup_window_pane_cp07

0xb99d,	// (0x000917d3) grid_popup_blid_pane

0xb9a7,	// (0x000917dd) heading_pane_cp05_ParamLimits

0xb9a7,	// (0x000917dd) heading_pane_cp05

0xba71,	// (0x000918a7) cell_popup_blid_pane_ParamLimits

0xba71,	// (0x000918a7) cell_popup_blid_pane

0xba95,	// (0x000918cb) cell_popup_blid_pane_g1

0xba9d,	// (0x000918d3) cell_popup_blid_pane_t1

0x6a6b,	// (0x0008c8a1) mup2_indicator_pane_ParamLimits

0x6a6b,	// (0x0008c8a1) mup2_indicator_pane

0x1eb7,	// (0x00087ced) mup2_visualizer_osc_pane

0xb7da,	// (0x00091610) mup2_visualizer_spec_pane_ParamLimits

0xb7da,	// (0x00091610) mup2_visualizer_spec_pane

0x6be6,	// (0x0008ca1c) mup2_spec_half_pane

0x6bef,	// (0x0008ca25) mup2_spec_half_pane_cp

0x6bf7,	// (0x0008ca2d) mup2_spec_bar_pane_ParamLimits

0x6bf7,	// (0x0008ca2d) mup2_spec_bar_pane

0xb729,	// (0x0009155f) mup2_spec_bar_pane_g1

0xb733,	// (0x00091569) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009543c) mup2_spec_bar_pane_g

0x6c17,	// (0x0008ca4d) mup2_osc_middle_pane

0xb745,	// (0x0009157b) mup2_visualizer_osc_pane_g1

0xe7f2,	// (0x00094628) popup_number_entry_window_t1_ParamLimits

0xe805,	// (0x0009463b) popup_number_entry_window_t2_ParamLimits

0xe817,	// (0x0009464d) popup_number_entry_window_t3_ParamLimits

0x12c9,	// (0x000870ff) popup_number_entry_window_t5_ParamLimits

0x12c9,	// (0x000870ff) popup_number_entry_window_t5

0xf0ca,	// (0x00094f00) popup_number_entry_window_t_ParamLimits

0xe829,	// (0x0009465f) text_title_cp2_ParamLimits

0xb3fb,	// (0x00091231) aid_hotspot_pointer_text2_pane

0xb421,	// (0x00091257) main_viewer_pane_g9_ParamLimits

0xb421,	// (0x00091257) main_viewer_pane_g9

0x2eac,	// (0x00088ce2) cale_month_pane_t1_ParamLimits

0x35ad,	// (0x000893e3) bg_cale_pane_ParamLimits

0x35c5,	// (0x000893fb) list_cale_pane_ParamLimits

0x35d6,	// (0x0008940c) listscroll_cale_day_pane_t1

0x35e8,	// (0x0008941e) scroll_pane_cp09_ParamLimits

0x438e,	// (0x0008a1c4) main_mup_eq_pane_t1_ParamLimits

0x438e,	// (0x0008a1c4) main_mup_eq_pane_t1

0x43a8,	// (0x0008a1de) main_mup_eq_pane_t2_ParamLimits

0x43a8,	// (0x0008a1de) main_mup_eq_pane_t2

0x43c2,	// (0x0008a1f8) main_mup_eq_pane_t3_ParamLimits

0x43c2,	// (0x0008a1f8) main_mup_eq_pane_t3

0x43de,	// (0x0008a214) main_mup_eq_pane_t4_ParamLimits

0x43de,	// (0x0008a214) main_mup_eq_pane_t4

0x43fa,	// (0x0008a230) main_mup_eq_pane_t5_ParamLimits

0x43fa,	// (0x0008a230) main_mup_eq_pane_t5

0x4416,	// (0x0008a24c) main_mup_eq_pane_t6_ParamLimits

0x4416,	// (0x0008a24c) main_mup_eq_pane_t6

0x442a,	// (0x0008a260) main_mup_eq_pane_t7_ParamLimits

0x442a,	// (0x0008a260) main_mup_eq_pane_t7

0x443e,	// (0x0008a274) main_mup_eq_pane_t8_ParamLimits

0x443e,	// (0x0008a274) main_mup_eq_pane_t8

0x4452,	// (0x0008a288) main_mup_eq_pane_t9_ParamLimits

0x4452,	// (0x0008a288) main_mup_eq_pane_t9

0x446c,	// (0x0008a2a2) main_mup_eq_pane_t10_ParamLimits

0x446c,	// (0x0008a2a2) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0009528b) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0009528b) main_mup_eq_pane_t

0x451b,	// (0x0008a351) mup_equalizer_pane_cp5_ParamLimits

0x452f,	// (0x0008a365) mup_equalizer_pane_cp6_ParamLimits

0x4543,	// (0x0008a379) mup_equalizer_pane_cp7_ParamLimits

0xe7c8,	// (0x000945fe) main_gallery_pane

0xb74e,	// (0x00091584) smil2_volume_pane

0xb756,	// (0x0009158c) smil_status_volume_pane_g1_ParamLimits

0xb769,	// (0x0009159f) smil_status_volume_pane_g2_ParamLimits

0xb77c,	// (0x000915b2) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00095441) smil_status_volume_pane_g_ParamLimits

0xb97a,	// (0x000917b0) bg_popup_window_pane_cp07_ParamLimits

0xb988,	// (0x000917be) blid_firmament_pane

0x6c20,	// (0x0008ca56) aid_size_cell_gallery_ParamLimits

0x6c20,	// (0x0008ca56) aid_size_cell_gallery

0x6c36,	// (0x0008ca6c) grid_gallery_pane_ParamLimits

0x6c36,	// (0x0008ca6c) grid_gallery_pane

0x6c4f,	// (0x0008ca85) cell_gallery_pane_ParamLimits

0x6c4f,	// (0x0008ca85) cell_gallery_pane

0xbaab,	// (0x000918e1) bg_cell_gallery_focus_pane_ParamLimits

0xbaab,	// (0x000918e1) bg_cell_gallery_focus_pane

0xbabd,	// (0x000918f3) cell_gallery_pane_g1_ParamLimits

0xbabd,	// (0x000918f3) cell_gallery_pane_g1

0x6c98,	// (0x0008cace) cell_gallery_pane_g2_ParamLimits

0x6c98,	// (0x0008cace) cell_gallery_pane_g2

0x6ca5,	// (0x0008cadb) cell_gallery_pane_g3_ParamLimits

0x6ca5,	// (0x0008cadb) cell_gallery_pane_g3

0xbac9,	// (0x000918ff) cell_gallery_pane_g4_ParamLimits

0xbac9,	// (0x000918ff) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000954ef) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000954ef) cell_gallery_pane_g

0xbad5,	// (0x0009190b) bg_cell_gallery_focus_pane_g1

0xbadd,	// (0x00091913) bg_cell_gallery_focus_pane_g2

0xbae5,	// (0x0009191b) bg_cell_gallery_focus_pane_g3

0xbaed,	// (0x00091923) bg_cell_gallery_focus_pane_g4

0xbaf5,	// (0x0009192b) bg_cell_gallery_focus_pane_g5

0xbafd,	// (0x00091933) bg_cell_gallery_focus_pane_g6

0xbb05,	// (0x0009193b) bg_cell_gallery_focus_pane_g7

0xbb0d,	// (0x00091943) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000954f8) bg_cell_gallery_focus_pane_g

0xbb15,	// (0x0009194b) aid_firma_cardinal

0xbb29,	// (0x0009195f) blid_firmament_pane_t1

0xbb40,	// (0x00091976) blid_firmament_pane_t2

0xbb57,	// (0x0009198d) blid_firmament_pane_t3

0xbb6e,	// (0x000919a4) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00095509) blid_firmament_pane_t

0xbb85,	// (0x000919bb) blid_sat_info_pane

0xbb95,	// (0x000919cb) blid_sat_info_pane_g1

0xbb95,	// (0x000919cb) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00095512) blid_sat_info_pane_g

0xbb9f,	// (0x000919d5) blid_sat_info_pane_t1

0xbbad,	// (0x000919e3) smil2_volume_content_pane

0xbbb6,	// (0x000919ec) smil2_volume_pane_g1

0xbbbe,	// (0x000919f4) smil2_volume_content_pane_g1

0xbbc7,	// (0x000919fd) smil2_volume_content_pane_g2

0xbbd0,	// (0x00091a06) smil2_volume_content_pane_g3

0xbbd9,	// (0x00091a0f) smil2_volume_content_pane_g4

0xbbe2,	// (0x00091a18) smil2_volume_content_pane_g5

0xbbeb,	// (0x00091a21) smil2_volume_content_pane_g6

0xbbf4,	// (0x00091a2a) smil2_volume_content_pane_g7

0xbbfd,	// (0x00091a33) smil2_volume_content_pane_g8

0xbc06,	// (0x00091a3c) smil2_volume_content_pane_g9

0xbc0f,	// (0x00091a45) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00095517) smil2_volume_content_pane_g

0x1b15,	// (0x0008794b) cale_week_day_heading_pane_t1_ParamLimits

0x1b5a,	// (0x00087990) cale_week_day_heading_pane_t2_ParamLimits

0x1ba4,	// (0x000879da) cale_week_day_heading_pane_t3_ParamLimits

0x1bee,	// (0x00087a24) cale_week_day_heading_pane_t4_ParamLimits

0x1c38,	// (0x00087a6e) cale_week_day_heading_pane_t5_ParamLimits

0x1c8a,	// (0x00087ac0) cale_week_day_heading_pane_t6_ParamLimits

0x1cdc,	// (0x00087b12) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00095007) cale_week_day_heading_pane_t_ParamLimits

0x1d21,	// (0x00087b57) bg_cale_side_pane_ParamLimits

0x1d2f,	// (0x00087b65) cale_week_time_pane_t1_ParamLimits

0x1d49,	// (0x00087b7f) cale_week_time_pane_t2_ParamLimits

0x1d63,	// (0x00087b99) cale_week_time_pane_t3_ParamLimits

0x1d7d,	// (0x00087bb3) cale_week_time_pane_t4_ParamLimits

0x1d97,	// (0x00087bcd) cale_week_time_pane_t5_ParamLimits

0x1db1,	// (0x00087be7) cale_week_time_pane_t6_ParamLimits

0x1dcb,	// (0x00087c01) cale_week_time_pane_t7_ParamLimits

0x1de5,	// (0x00087c1b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00095016) cale_week_time_pane_t_ParamLimits

0x1e05,	// (0x00087c3b) cell_cale_week_pane_g2_ParamLimits

0x1d21,	// (0x00087b57) bg_cale_side_pane_cp01_ParamLimits

0x3348,	// (0x0008917e) cale_month_week_pane_t1_ParamLimits

0x3361,	// (0x00089197) cale_month_week_pane_t2_ParamLimits

0x337a,	// (0x000891b0) cale_month_week_pane_t3_ParamLimits

0x3393,	// (0x000891c9) cale_month_week_pane_t4_ParamLimits

0x33ac,	// (0x000891e2) cale_month_week_pane_t5_ParamLimits

0x33c5,	// (0x000891fb) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000950eb) cale_month_week_pane_t_ParamLimits

0xb32c,	// (0x00091162) cell_cale_month_pane_g1_ParamLimits

0xe7c8,	// (0x000945fe) main_cale_event_viewer_pane

0xe7c8,	// (0x000945fe) listscroll_cale_event_viewer_pane

0xbc18,	// (0x00091a4e) list_cale_ev_pane

0xbc20,	// (0x00091a56) scroll_pane_cp023

0xbc2c,	// (0x00091a62) field_cale_ev_pane_ParamLimits

0xbc2c,	// (0x00091a62) field_cale_ev_pane

0xbc4a,	// (0x00091a80) field_cale_ev_content_pane_ParamLimits

0xbc4a,	// (0x00091a80) field_cale_ev_content_pane

0xbc56,	// (0x00091a8c) field_cale_ev_pane_g1_ParamLimits

0xbc56,	// (0x00091a8c) field_cale_ev_pane_g1

0xbc62,	// (0x00091a98) field_cale_ev_pane_g2_ParamLimits

0xbc62,	// (0x00091a98) field_cale_ev_pane_g2

0xbc7a,	// (0x00091ab0) field_cale_ev_pane_g3_ParamLimits

0xbc7a,	// (0x00091ab0) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0009552c) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0009552c) field_cale_ev_pane_g

0xbc92,	// (0x00091ac8) field_cale_ev_pane_t1_ParamLimits

0xbc92,	// (0x00091ac8) field_cale_ev_pane_t1

0xbca9,	// (0x00091adf) field_cale_ev_content_pane_t1_ParamLimits

0xbca9,	// (0x00091adf) field_cale_ev_content_pane_t1

0x45ed,	// (0x0008a423) bg_button_pane_cp01

0x17ed,	// (0x00087623) listscroll_cale_week_pane_ParamLimits

0x17ff,	// (0x00087635) popup_toolbar_window_cp01

0x1a58,	// (0x0008788e) listscroll_cale_week_pane_t1_ParamLimits

0x17ed,	// (0x00087623) listscroll_cale_day_pane_ParamLimits

0x17ff,	// (0x00087635) popup_toolbar_window_cp02

0x35d6,	// (0x0008940c) listscroll_cale_day_pane_t1_ParamLimits

0x17ed,	// (0x00087623) main_cale_month_pane_ParamLimits

0xb6c7,	// (0x000914fd) popup_toolbar_window_cp03_ParamLimits

0xb6c7,	// (0x000914fd) popup_toolbar_window_cp03

0x494d,	// (0x0008a783) main_image_pane_g2_ParamLimits

0x494d,	// (0x0008a783) main_image_pane_g2

0x495e,	// (0x0008a794) main_image_pane_g3_ParamLimits

0x495e,	// (0x0008a794) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0009531d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0009531d) main_image_pane_g

0x496f,	// (0x0008a7a5) main_image_pane_t1_ParamLimits

0x4986,	// (0x0008a7bc) main_image_pane_t2_ParamLimits

0x4986,	// (0x0008a7bc) main_image_pane_t2

0x4998,	// (0x0008a7ce) main_image_pane_t3_ParamLimits

0x4998,	// (0x0008a7ce) main_image_pane_t3

0x49c0,	// (0x0008a7f6) main_image_pane_t4_ParamLimits

0x49c0,	// (0x0008a7f6) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00095324) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00095324) main_image_pane_t

0x49e0,	// (0x0008a816) popup_image_details_window_cp01

0x49ea,	// (0x0008a820) popup_toobar_trans_pane_cp01_ParamLimits

0x49ea,	// (0x0008a820) popup_toobar_trans_pane_cp01

0x607b,	// (0x0008beb1) popup_image_details_window_ParamLimits

0x607b,	// (0x0008beb1) popup_image_details_window

0xb69a,	// (0x000914d0) popup_image_focus_window

0x6492,	// (0x0008c2c8) camera2_autofocus_pane_ParamLimits

0x6492,	// (0x0008c2c8) camera2_autofocus_pane

0xe7c8,	// (0x000945fe) bg_popup_sub_pane_cp06

0xbcc7,	// (0x00091afd) popup_image_focus_window_g1

0xbccf,	// (0x00091b05) popup_image_focus_window_g2

0xbcd7,	// (0x00091b0d) popup_image_focus_window_g3

0xbcdf,	// (0x00091b15) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00095533) popup_image_focus_window_g

0xbce7,	// (0x00091b1d) popup_image_focus_window_t1

0xbcf5,	// (0x00091b2b) popup_image_focus_window_t2

0xbd05,	// (0x00091b3b) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0009553c) popup_image_focus_window_t

0xbd13,	// (0x00091b49) camera2_autofocus_pane_g1

0x125d,	// (0x00087093) bg_tb_trans_pane_cp01

0xbd21,	// (0x00091b57) popup_image_details_window_g1

0xbd34,	// (0x00091b6a) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0009554e) popup_image_details_window_g

0xbd5d,	// (0x00091b93) popup_image_details_window_t1

0xbd6f,	// (0x00091ba5) popup_image_details_window_t2

0xbd88,	// (0x00091bbe) popup_image_details_window_t3

0xbd9c,	// (0x00091bd2) popup_image_details_window_t4

0xbdb7,	// (0x00091bed) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x00095555) popup_image_details_window_t

0xeef1,	// (0x00094d27) bg_calc_paper_pane_ParamLimits

0xe7c8,	// (0x000945fe) grid_highlight_pane_cp013

0xb29c,	// (0x000910d2) list_calc_pane_ParamLimits

0xb2ae,	// (0x000910e4) scroll_pane_cp024

0xef05,	// (0x00094d3b) bg_calc_display_pane_ParamLimits

0x15c8,	// (0x000873fe) calc_display_pane_t1_ParamLimits

0x15da,	// (0x00087410) calc_display_pane_t2_ParamLimits

0xb2b6,	// (0x000910ec) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00094f87) calc_display_pane_t_ParamLimits

0x1694,	// (0x000874ca) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00094fa4) cell_calc_pane_g

0x169d,	// (0x000874d3) cell_calc_pane_t1

0xef64,	// (0x00094d9a) grid_highlight_pane_cp02_ParamLimits

0xef7a,	// (0x00094db0) toolbar_button_pane_cp01_ParamLimits

0xef7a,	// (0x00094db0) toolbar_button_pane_cp01

0x4a2c,	// (0x0008a862) temp_image_control_pane_ParamLimits

0x4a2c,	// (0x0008a862) temp_image_control_pane

0x125d,	// (0x00087093) main_mp3_pane

0xbdd1,	// (0x00091c07) temp_image_control_pane_g1_ParamLimits

0xbdd1,	// (0x00091c07) temp_image_control_pane_g1

0xbddf,	// (0x00091c15) temp_image_control_pane_g2_ParamLimits

0xbddf,	// (0x00091c15) temp_image_control_pane_g2

0xbdf1,	// (0x00091c27) temp_image_control_pane_g3_ParamLimits

0xbdf1,	// (0x00091c27) temp_image_control_pane_g3

0x6ce2,	// (0x0008cb18) temp_image_control_pane_g4_ParamLimits

0x6ce2,	// (0x0008cb18) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00095560) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00095560) temp_image_control_pane_g

0xbdd1,	// (0x00091c07) main_mp3_pane_g1

0x6cf5,	// (0x0008cb2b) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00095569) main_mp3_pane_g

0xbe34,	// (0x00091c6a) main_mp3_pane_t1

0x1fd2,	// (0x00087e08) main_camera_pane_g8_ParamLimits

0x1fd2,	// (0x00087e08) main_camera_pane_g8

0x217a,	// (0x00087fb0) main_video_pane_g7_ParamLimits

0x217a,	// (0x00087fb0) main_video_pane_g7

0xb7bc,	// (0x000915f2) main_camera2_pane_t7_ParamLimits

0xb7bc,	// (0x000915f2) main_camera2_pane_t7

0x278a,	// (0x000885c0) scroll_pane_cp025_ParamLimits

0x278a,	// (0x000885c0) scroll_pane_cp025

0x279e,	// (0x000885d4) scroll_pane_cp026_ParamLimits

0x279e,	// (0x000885d4) scroll_pane_cp026

0x27ad,	// (0x000885e3) wml_content_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_touch_calib_pane

0x6dc9,	// (0x0008cbff) main_touch_calib_pane_g1

0x6ddb,	// (0x0008cc11) main_touch_calib_pane_g2

0x6ded,	// (0x0008cc23) main_touch_calib_pane_g3

0x6dff,	// (0x0008cc35) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x00095587) main_touch_calib_pane_g

0x6e11,	// (0x0008cc47) main_touch_calib_pane_t1

0x6e2b,	// (0x0008cc61) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x00095590) main_touch_calib_pane_t

0x3e83,	// (0x00089cb9) mup_progress_pane_cp02

0x3eb8,	// (0x00089cee) navi_pane_g1

0x3f73,	// (0x00089da9) navi_pane_mp_t3

0x125d,	// (0x00087093) main_mp3_pane_ParamLimits

0x6200,	// (0x0008c036) navi_pane_ParamLimits

0xbdd1,	// (0x00091c07) main_mp3_pane_g1_ParamLimits

0x6cf5,	// (0x0008cb2b) main_mp3_pane_g2_ParamLimits

0x6d03,	// (0x0008cb39) main_mp3_pane_g3_ParamLimits

0x6d03,	// (0x0008cb39) main_mp3_pane_g3

0x6d11,	// (0x0008cb47) main_mp3_pane_g4_ParamLimits

0x6d11,	// (0x0008cb47) main_mp3_pane_g4

0xbe01,	// (0x00091c37) main_mp3_pane_g5_ParamLimits

0xbe01,	// (0x00091c37) main_mp3_pane_g5

0xbe0f,	// (0x00091c45) main_mp3_pane_g6_ParamLimits

0xbe0f,	// (0x00091c45) main_mp3_pane_g6

0xbe1c,	// (0x00091c52) main_mp3_pane_g7_ParamLimits

0xbe1c,	// (0x00091c52) main_mp3_pane_g7

0xbe28,	// (0x00091c5e) main_mp3_pane_g8_ParamLimits

0xbe28,	// (0x00091c5e) main_mp3_pane_g8

0xf733,	// (0x00095569) main_mp3_pane_g_ParamLimits

0x6d1d,	// (0x0008cb53) main_mp3_pane_t2

0x6d2b,	// (0x0008cb61) main_mp3_pane_t3

0xbe42,	// (0x00091c78) main_mp3_pane_t4

0xbe50,	// (0x00091c86) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0009557a) main_mp3_pane_t

0xbe5e,	// (0x00091c94) mup_progress_pane_cp01

0xb24a,	// (0x00091080) aid_zoom_text_secondary2

0xbc18,	// (0x00091a4e) list_cale_ev2_pane

0xbc20,	// (0x00091a56) scroll_pane_cp023_ParamLimits

0x6e81,	// (0x0008ccb7) field_cale_ev2_pane_ParamLimits

0x6e81,	// (0x0008ccb7) field_cale_ev2_pane

0x6ea1,	// (0x0008ccd7) field_cale_ev2_pane_g1_ParamLimits

0x6ea1,	// (0x0008ccd7) field_cale_ev2_pane_g1

0x6ead,	// (0x0008cce3) field_cale_ev2_pane_g2_ParamLimits

0x6ead,	// (0x0008cce3) field_cale_ev2_pane_g2

0x6ec5,	// (0x0008ccfb) field_cale_ev2_pane_g3_ParamLimits

0x6ec5,	// (0x0008ccfb) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0009559b) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0009559b) field_cale_ev2_pane_g

0xbe72,	// (0x00091ca8) field_cale_ev2_pane_t1_ParamLimits

0xbe72,	// (0x00091ca8) field_cale_ev2_pane_t1

0xbe89,	// (0x00091cbf) field_cale_ev2_pane_t2_ParamLimits

0xbe89,	// (0x00091cbf) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000955a4) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000955a4) field_cale_ev2_pane_t

0x471c,	// (0x0008a552) main_postcard_pane_g5_ParamLimits

0x471c,	// (0x0008a552) main_postcard_pane_g5

0x4732,	// (0x0008a568) main_postcard_pane_g6_ParamLimits

0x4732,	// (0x0008a568) main_postcard_pane_g6

0x1f20,	// (0x00087d56) camera2_autofocus_pane_cp_ParamLimits

0x1f20,	// (0x00087d56) camera2_autofocus_pane_cp

0x125d,	// (0x00087093) main_mup3_pane

0x6edd,	// (0x0008cd13) main_mup3_pane_g1_ParamLimits

0x6edd,	// (0x0008cd13) main_mup3_pane_g1

0x6eff,	// (0x0008cd35) main_mup3_pane_g2_ParamLimits

0x6eff,	// (0x0008cd35) main_mup3_pane_g2

0x6f7d,	// (0x0008cdb3) main_mup3_pane_g3_ParamLimits

0x6f7d,	// (0x0008cdb3) main_mup3_pane_g3

0x6fc3,	// (0x0008cdf9) main_mup3_pane_g4_ParamLimits

0x6fc3,	// (0x0008cdf9) main_mup3_pane_g4

0x7009,	// (0x0008ce3f) main_mup3_pane_g5_ParamLimits

0x7009,	// (0x0008ce3f) main_mup3_pane_g5

0x704f,	// (0x0008ce85) main_mup3_pane_g6_ParamLimits

0x704f,	// (0x0008ce85) main_mup3_pane_g6

0xbebe,	// (0x00091cf4) main_mup3_pane_g7_ParamLimits

0xbebe,	// (0x00091cf4) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000955b4) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000955b4) main_mup3_pane_g

0x70cd,	// (0x0008cf03) main_mup3_pane_t1_ParamLimits

0x70cd,	// (0x0008cf03) main_mup3_pane_t1

0x7141,	// (0x0008cf77) main_mup3_pane_t2_ParamLimits

0x7141,	// (0x0008cf77) main_mup3_pane_t2

0x7215,	// (0x0008d04b) main_mup3_pane_t4_ParamLimits

0x7215,	// (0x0008d04b) main_mup3_pane_t4

0x726b,	// (0x0008d0a1) main_mup3_pane_t5_ParamLimits

0x726b,	// (0x0008d0a1) main_mup3_pane_t5

0x7327,	// (0x0008d15d) main_mup3_pane_t6_ParamLimits

0x7327,	// (0x0008d15d) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000955c5) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000955c5) main_mup3_pane_t

0x73df,	// (0x0008d215) mup3_progress_pane_ParamLimits

0x73df,	// (0x0008d215) mup3_progress_pane

0x7475,	// (0x0008d2ab) popup_mup3_control_window_ParamLimits

0x7475,	// (0x0008d2ab) popup_mup3_control_window

0xbecc,	// (0x00091d02) popup_mup3_text_window

0x74a7,	// (0x0008d2dd) mup3_progress_pane_t1

0x74c6,	// (0x0008d2fc) mup3_progress_pane_t2

0xbed4,	// (0x00091d0a) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000955d2) mup3_progress_pane_t

0xbef1,	// (0x00091d27) mup_progress_pane_cp03

0xe7c8,	// (0x000945fe) bg_tb_trans_pane_cp04

0x74e5,	// (0x0008d31b) mup3_volume_pane

0x74ed,	// (0x0008d323) popup_mup3_control_window_g1

0x74f6,	// (0x0008d32c) mup3_volume_pane_g1

0x74ff,	// (0x0008d335) mup3_volume_pane_g2

0x7508,	// (0x0008d33e) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000955d9) mup3_volume_pane_g

0xe7c8,	// (0x000945fe) bg_tb_trans_pane_cp03

0xbf01,	// (0x00091d37) popup_mup3_text_window_g1

0xbf09,	// (0x00091d3f) popup_mup3_text_window_t1

0xef4d,	// (0x00094d83) list_calc_item_pane_g1_ParamLimits

0xb8a4,	// (0x000916da) mup_volume_pane_cp_g1

0x6e45,	// (0x0008cc7b) main_touch_calib_pane_t3

0x6e59,	// (0x0008cc8f) main_touch_calib_pane_t4

0x6e6d,	// (0x0008cca3) main_touch_calib_pane_t5

0xb226,	// (0x0009105c) aid_cell_size_toolbar2

0xb22e,	// (0x00091064) aid_popup3_width_pane

0xb23a,	// (0x00091070) aid_zoom_text_msg_primary

0x1eff,	// (0x00087d35) vorec_t7

0xef11,	// (0x00094d47) bg_calc_paper_pane_g1_ParamLimits

0xef1d,	// (0x00094d53) bg_calc_paper_pane_g2_ParamLimits

0xef29,	// (0x00094d5f) bg_calc_paper_pane_g3_ParamLimits

0xef35,	// (0x00094d6b) bg_calc_paper_pane_g4_ParamLimits

0xef41,	// (0x00094d77) bg_calc_paper_pane_g5_ParamLimits

0x1621,	// (0x00087457) bg_calc_paper_pane_g6_ParamLimits

0x1630,	// (0x00087466) bg_calc_paper_pane_g7_ParamLimits

0x163f,	// (0x00087475) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00094f8e) bg_calc_paper_pane_g_ParamLimits

0x1652,	// (0x00087488) calc_bg_paper_pane_g9_ParamLimits

0x2077,	// (0x00087ead) image_qvga_pane_ParamLimits

0x2077,	// (0x00087ead) image_qvga_pane

0xee40,	// (0x00094c76) bg_popup_sub_pane_cp04_ParamLimits

0x48ab,	// (0x0008a6e1) popup_mup_playback_window_g1_ParamLimits

0x48b7,	// (0x0008a6ed) popup_mup_playback_window_t1_ParamLimits

0x48cc,	// (0x0008a702) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00095318) popup_mup_playback_window_t_ParamLimits

0x6985,	// (0x0008c7bb) main_mup2_pane_g3_ParamLimits

0x6985,	// (0x0008c7bb) main_mup2_pane_g3

0x241d,	// (0x00088253) popup_toolbar_window_cp04

0x50ae,	// (0x0008aee4) popup_call2_audio_second_window_g3_ParamLimits

0x50ae,	// (0x0008aee4) popup_call2_audio_second_window_g3

0x54b8,	// (0x0008b2ee) popup_call2_audio_first_window_g4_ParamLimits

0x54b8,	// (0x0008b2ee) popup_call2_audio_first_window_g4

0x5b37,	// (0x0008b96d) popup_call2_audio_in_window_g4_ParamLimits

0x5b37,	// (0x0008b96d) popup_call2_audio_in_window_g4

0x48e1,	// (0x0008a717) aid_area_sk_bg_cut_ParamLimits

0x48e1,	// (0x0008a717) aid_area_sk_bg_cut

0x48ff,	// (0x0008a735) aid_area_sk_bg_cut_2_ParamLimits

0x48ff,	// (0x0008a735) aid_area_sk_bg_cut_2

0x6c88,	// (0x0008cabe) aid_placing_details_win

0x6c90,	// (0x0008cac6) aid_placing_details_win_2

0xbd13,	// (0x00091b49) camera2_autofocus_pane_g1_ParamLimits

0x1202,	// (0x00087038) popup_fixed_preview_cale_window_ParamLimits

0x1202,	// (0x00087038) popup_fixed_preview_cale_window

0x4033,	// (0x00089e69) navi_slider_pane_g3

0x403c,	// (0x00089e72) navi_slider_pane_g4

0x4045,	// (0x00089e7b) navi_slider_pane_g5

0x4033,	// (0x00089e69) navi_slider_pane_g6

0xb3e2,	// (0x00091218) navi_slider_pane_g7

0x4560,	// (0x0008a396) mup_scale_pane_g3

0x4569,	// (0x0008a39f) mup_scale_pane_g4

0x4572,	// (0x0008a3a8) mup_scale_pane_g5

0x457b,	// (0x0008a3b1) mup_scale_pane_g6

0x4584,	// (0x0008a3ba) mup_scale_pane_g7

0x4033,	// (0x00089e69) cams2_slider_pane_g3

0xb959,	// (0x0009178f) cams2_slider_pane_g4

0xb961,	// (0x00091797) cams2_slider_pane_g5

0x4033,	// (0x00089e69) cams2_slider_pane_g6

0xb969,	// (0x0009179f) cams2_slider_pane_g7

0xbb95,	// (0x000919cb) camera2_autofocus_pane_cp_g1

0xb66e,	// (0x000914a4) bg_popup_preview_window_pane_cp02_ParamLimits

0xb66e,	// (0x000914a4) bg_popup_preview_window_pane_cp02

0xbf17,	// (0x00091d4d) list_fp_cale_pane_ParamLimits

0xbf17,	// (0x00091d4d) list_fp_cale_pane

0xbf23,	// (0x00091d59) popup_fixed_preview_cale_window_t1_ParamLimits

0xbf23,	// (0x00091d59) popup_fixed_preview_cale_window_t1

0x7511,	// (0x0008d347) popup_fixed_preview_cale_window_t2_ParamLimits

0x7511,	// (0x0008d347) popup_fixed_preview_cale_window_t2

0x7526,	// (0x0008d35c) popup_fixed_preview_cale_window_t3_ParamLimits

0x7526,	// (0x0008d35c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000955e0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000955e0) popup_fixed_preview_cale_window_t

0x753b,	// (0x0008d371) list_single_fp_cale_pane_ParamLimits

0x753b,	// (0x0008d371) list_single_fp_cale_pane

0xbf41,	// (0x00091d77) list_single_fp_cale_pane_g1_ParamLimits

0xbf41,	// (0x00091d77) list_single_fp_cale_pane_g1

0xbf4d,	// (0x00091d83) list_single_fp_cale_pane_g2_ParamLimits

0xbf4d,	// (0x00091d83) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000955e7) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000955e7) list_single_fp_cale_pane_g

0xbf66,	// (0x00091d9c) list_single_fp_cale_pane_t1_ParamLimits

0xbf66,	// (0x00091d9c) list_single_fp_cale_pane_t1

0xbf78,	// (0x00091dae) list_single_fp_cale_pane_t2_ParamLimits

0xbf78,	// (0x00091dae) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000955ee) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000955ee) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe7c8,	// (0x000945fe) main_dialer_pane

0x7550,	// (0x0008d386) aid_cell_size_keypad

0x755a,	// (0x0008d390) dialer_ne_pane

0x7562,	// (0x0008d398) grid_dialer_command_1_pane

0x756a,	// (0x0008d3a0) grid_dialer_command_2_pane

0x7572,	// (0x0008d3a8) grid_dialer_keypad_pane

0x7584,	// (0x0008d3ba) bg_popup_call_pane_cp06_ParamLimits

0x7584,	// (0x0008d3ba) bg_popup_call_pane_cp06

0x7590,	// (0x0008d3c6) dialer_ne_clear_pane_ParamLimits

0x7590,	// (0x0008d3c6) dialer_ne_clear_pane

0xbfab,	// (0x00091de1) dialer_ne_pane_g1

0xbfb3,	// (0x00091de9) dialer_ne_pane_t1_ParamLimits

0xbfb3,	// (0x00091de9) dialer_ne_pane_t1

0x759c,	// (0x0008d3d2) dialer_ne_pane_t2_ParamLimits

0x759c,	// (0x0008d3d2) dialer_ne_pane_t2

0x75c6,	// (0x0008d3fc) dialer_ne_pane_t3_ParamLimits

0x75c6,	// (0x0008d3fc) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000955f3) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000955f3) dialer_ne_pane_t

0x75f6,	// (0x0008d42c) dialer_ne_pane_t3_copy1_ParamLimits

0x75f6,	// (0x0008d42c) dialer_ne_pane_t3_copy1

0x7625,	// (0x0008d45b) cell_dialer_keypad_pane_ParamLimits

0x7625,	// (0x0008d45b) cell_dialer_keypad_pane

0x763c,	// (0x0008d472) cell_dialer_command_1_pane_ParamLimits

0x763c,	// (0x0008d472) cell_dialer_command_1_pane

0x7652,	// (0x0008d488) cell_dialer_command_2_pane_ParamLimits

0x7652,	// (0x0008d488) cell_dialer_command_2_pane

0xbfc5,	// (0x00091dfb) bg_button_pane_cp02_ParamLimits

0xbfc5,	// (0x00091dfb) bg_button_pane_cp02

0x7661,	// (0x0008d497) cell_dialer_keypad_pane_g1_ParamLimits

0x7661,	// (0x0008d497) cell_dialer_keypad_pane_g1

0xbfc5,	// (0x00091dfb) bg_button_pane_cp03_ParamLimits

0xbfc5,	// (0x00091dfb) bg_button_pane_cp03

0x7675,	// (0x0008d4ab) cell_dialer_command_1_pane_g1_ParamLimits

0x7675,	// (0x0008d4ab) cell_dialer_command_1_pane_g1

0xbfd1,	// (0x00091e07) bg_button_pane_cp04

0x7689,	// (0x0008d4bf) cell_dialer_command_2_pane_g1

0x1eb7,	// (0x00087ced) bg_button_pane_cp06

0xbfd9,	// (0x00091e0f) dialer_ne_clear_pane_g1

0x3ec4,	// (0x00089cfa) navi_pane_g2

0x3ef2,	// (0x00089d28) navi_pane_g3

0x0002,

0xf3e5,	// (0x0009521b) navi_pane_g

0x3f81,	// (0x00089db7) navi_pane_mv_g2

0x3fa8,	// (0x00089dde) navi_pane_mv_g5

0x3fb0,	// (0x00089de6) navi_pane_mv_t1

0xef05,	// (0x00094d3b) main_clock2_pane

0x76d4,	// (0x0008d50a) main_clock2_list_pane_ParamLimits

0x76d4,	// (0x0008d50a) main_clock2_list_pane

0x770a,	// (0x0008d540) main_clock2_pane_t1_ParamLimits

0x770a,	// (0x0008d540) main_clock2_pane_t1

0x7746,	// (0x0008d57c) main_clock2_pane_t2_ParamLimits

0x7746,	// (0x0008d57c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000955ff) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000955ff) main_clock2_pane_t

0x77e4,	// (0x0008d61a) popup_clock_analogue_window_cp03_ParamLimits

0x77e4,	// (0x0008d61a) popup_clock_analogue_window_cp03

0x7809,	// (0x0008d63f) popup_clock_digital_window_cp02_ParamLimits

0x7809,	// (0x0008d63f) popup_clock_digital_window_cp02

0x787a,	// (0x0008d6b0) main_clock2_list_single_pane_ParamLimits

0x787a,	// (0x0008d6b0) main_clock2_list_single_pane

0x1eb7,	// (0x00087ced) list_highlight_pane_cp05

0xc017,	// (0x00091e4d) main_clock2_list_single_pane_t1

0x241d,	// (0x00088253) popup_toolbar_window_cp04_ParamLimits

0x6cb2,	// (0x0008cae8) camera2_autofocus_pane_g2_ParamLimits

0x6cb2,	// (0x0008cae8) camera2_autofocus_pane_g2

0x6cbe,	// (0x0008caf4) camera2_autofocus_pane_g3_ParamLimits

0x6cbe,	// (0x0008caf4) camera2_autofocus_pane_g3

0x6cca,	// (0x0008cb00) camera2_autofocus_pane_g4_ParamLimits

0x6cca,	// (0x0008cb00) camera2_autofocus_pane_g4

0x6cd6,	// (0x0008cb0c) camera2_autofocus_pane_g5_ParamLimits

0x6cd6,	// (0x0008cb0c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x00095543) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x00095543) camera2_autofocus_pane_g

0xbe9e,	// (0x00091cd4) camera2_autofocus_pane_cp_g2

0xbea6,	// (0x00091cdc) camera2_autofocus_pane_cp_g3

0xbeae,	// (0x00091ce4) camera2_autofocus_pane_cp_g4

0xbeb6,	// (0x00091cec) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000955a9) camera2_autofocus_pane_cp_g

0x757c,	// (0x0008d3b2) popup_dialer_spcha_window

0xe7c8,	// (0x000945fe) bg_popup_sub_pane_cp07

0xc025,	// (0x00091e5b) list_spcha_pane

0xc02d,	// (0x00091e63) list_single_spcha_pane_ParamLimits

0xc02d,	// (0x00091e63) list_single_spcha_pane

0xe7c8,	// (0x000945fe) list_highlight_pane_cp06

0xc03e,	// (0x00091e74) list_single_spcha_pane_t1

0x58e1,	// (0x0008b717) popup_call2_audio_out_window_g4_ParamLimits

0x58e1,	// (0x0008b717) popup_call2_audio_out_window_g4

0xe7c8,	// (0x000945fe) main_imed2_pane

0xb6a2,	// (0x000914d8) popup_imed_adjust2_window

0x6093,	// (0x0008bec9) popup_imed_trans_window_ParamLimits

0x6093,	// (0x0008bec9) popup_imed_trans_window

0xb9d3,	// (0x00091809) popup_blid_sat_info2_window_t1

0xb9e1,	// (0x00091817) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000954d8) popup_blid_sat_info2_window_t

0x7924,	// (0x0008d75a) aid_size_cell_colour_35

0x7944,	// (0x0008d77a) aid_size_cell_colour_112

0x7964,	// (0x0008d79a) aid_size_cell_effect

0xb67a,	// (0x000914b0) bg_tb_trans_pane_cp02

0x3726,	// (0x0008955c) heading_imed_pane

0x7984,	// (0x0008d7ba) listscroll_imed_pane

0xc04c,	// (0x00091e82) heading_imed_pane_g1

0xc054,	// (0x00091e8a) heading_imed_pane_t1

0xc062,	// (0x00091e98) grid_imed_colour_35_pane_ParamLimits

0xc062,	// (0x00091e98) grid_imed_colour_35_pane

0x7990,	// (0x0008d7c6) grid_imed_effect_pane

0xc079,	// (0x00091eaf) list_imed_aspect_pane

0x79a6,	// (0x0008d7dc) scroll_pane_cp027_ParamLimits

0x79a6,	// (0x0008d7dc) scroll_pane_cp027

0x79b7,	// (0x0008d7ed) cell_imed_effect_pane_ParamLimits

0x79b7,	// (0x0008d7ed) cell_imed_effect_pane

0xc081,	// (0x00091eb7) cell_imed_colour_pane_ParamLimits

0xc081,	// (0x00091eb7) cell_imed_colour_pane

0xc0c3,	// (0x00091ef9) cell_imed_colour_pane_g1_ParamLimits

0xc0c3,	// (0x00091ef9) cell_imed_colour_pane_g1

0xc0d4,	// (0x00091f0a) hgihlgiht_grid_pane_cp016_ParamLimits

0xc0d4,	// (0x00091f0a) hgihlgiht_grid_pane_cp016

0x79de,	// (0x0008d814) cell_imed_effect_pane_g1

0x79e6,	// (0x0008d81c) grid_highlight_pane_cp017

0xc0e5,	// (0x00091f1b) list_imed_single_pane_ParamLimits

0xc0e5,	// (0x00091f1b) list_imed_single_pane

0xe7c8,	// (0x000945fe) list_highlight_pane_cp07

0xc0fa,	// (0x00091f30) list_imed_aspect_pane_comp1_t1

0xb67a,	// (0x000914b0) bg_tb_trans_pane_cp05

0xc11c,	// (0x00091f52) popup_imed_adjust2_window_g1

0xc143,	// (0x00091f79) popup_imed_adjust2_window_t1

0xc15b,	// (0x00091f91) slider_imed_adjust_pane

0xc16f,	// (0x00091fa5) slider_imed_adjust_pane_g1

0xc17f,	// (0x00091fb5) slider_imed_adjust_pane_g2

0xc18f,	// (0x00091fc5) slider_imed_adjust_pane_g3

0xc1a0,	// (0x00091fd6) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009561c) slider_imed_adjust_pane_g

0x79ef,	// (0x0008d825) aid_size_cell_clipart2

0x79fb,	// (0x0008d831) grid_imed_clipart_pane

0xc1b1,	// (0x00091fe7) scroll_pane_cp031

0x7a05,	// (0x0008d83b) cell_imed_clipart_pane_ParamLimits

0x7a05,	// (0x0008d83b) cell_imed_clipart_pane

0x7a27,	// (0x0008d85d) cell_imed_clipart_pane_g1

0xe7c8,	// (0x000945fe) grid_highlight_pane_cp014

0x76e9,	// (0x0008d51f) main_clock2_pane_g1_ParamLimits

0x76e9,	// (0x0008d51f) main_clock2_pane_g1

0x7825,	// (0x0008d65b) aid_call2_pane_cp10

0x7837,	// (0x0008d66d) aid_call_pane_cp10

0x3dc0,	// (0x00089bf6) popup_clock_analogue_window_cp10_g1

0x3dc0,	// (0x00089bf6) popup_clock_analogue_window_cp10_g2

0x7849,	// (0x0008d67f) popup_clock_analogue_window_cp10_g3

0x7849,	// (0x0008d67f) popup_clock_analogue_window_cp10_g4

0x3dc0,	// (0x00089bf6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0009560a) popup_clock_analogue_window_cp10_g

0x785b,	// (0x0008d691) popup_clock_analogue_window_cp10_t1

0x788c,	// (0x0008d6c2) clock_digital_number_pane_cp10_ParamLimits

0x788c,	// (0x0008d6c2) clock_digital_number_pane_cp10

0x78a4,	// (0x0008d6da) clock_digital_number_pane_cp11_ParamLimits

0x78a4,	// (0x0008d6da) clock_digital_number_pane_cp11

0x78bc,	// (0x0008d6f2) clock_digital_number_pane_cp12_ParamLimits

0x78bc,	// (0x0008d6f2) clock_digital_number_pane_cp12

0x78d4,	// (0x0008d70a) clock_digital_number_pane_cp13_ParamLimits

0x78d4,	// (0x0008d70a) clock_digital_number_pane_cp13

0x78ec,	// (0x0008d722) clock_digital_separator_pane_cp10_ParamLimits

0x78ec,	// (0x0008d722) clock_digital_separator_pane_cp10

0x7904,	// (0x0008d73a) popup_clock_digital_window_cp02_t1_ParamLimits

0x7904,	// (0x0008d73a) popup_clock_digital_window_cp02_t1

0xee38,	// (0x00094c6e) clock_digital_number_pane_cp10_g1

0xee38,	// (0x00094c6e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00095625) clock_digital_number_pane_cp10_g

0xee38,	// (0x00094c6e) clock_digital_separator_pane_cp10_g1

0xee38,	// (0x00094c6e) clock_digital_separator_pane_g2_cp10

0x3ff2,	// (0x00089e28) navi_pane_vded_g4

0x3ffb,	// (0x00089e31) navi_pane_vded_g5

0x4004,	// (0x00089e3a) navi_pane_vded_t1

0xe7c8,	// (0x000945fe) main_vded_pane

0x7a30,	// (0x0008d866) main_vded_pane_g1

0x7a3a,	// (0x0008d870) main_vded_pane_g2

0x7a44,	// (0x0008d87a) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0009562a) main_vded_pane_g

0x7a4e,	// (0x0008d884) main_vded_pane_t1

0x7a5c,	// (0x0008d892) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00095631) main_vded_pane_t

0x7a6a,	// (0x0008d8a0) vded_slider_pane

0x7a72,	// (0x0008d8a8) vded_video_pane

0xc1b9,	// (0x00091fef) vded_video_pane_g1

0x7a7a,	// (0x0008d8b0) vded_video_pane_g2

0xbb95,	// (0x000919cb) vded_video_pane_g3

0x0002,

0xf800,	// (0x00095636) vded_video_pane_g

0xc1c3,	// (0x00091ff9) vded_slider_pane_g1

0xb8a4,	// (0x000916da) vded_slider_pane_g2

0xc1cc,	// (0x00092002) vded_slider_pane_g3

0xc1d5,	// (0x0009200b) vded_slider_pane_g4

0xc1de,	// (0x00092014) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0009563d) vded_slider_pane_g

0x745d,	// (0x0008d293) mup3_rocker_pane_ParamLimits

0x745d,	// (0x0008d293) mup3_rocker_pane

0x7a83,	// (0x0008d8b9) mup3_control_keys_pane_g1

0x7a8b,	// (0x0008d8c1) mup3_control_keys_pane_g2

0x7a93,	// (0x0008d8c9) mup3_control_keys_pane_g3

0x7a9b,	// (0x0008d8d1) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00095648) mup3_control_keys_pane_g

0x1239,	// (0x0008706f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1239,	// (0x0008706f) popup_toolbar2_fixed_window_cp01

0x7491,	// (0x0008d2c7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7491,	// (0x0008d2c7) popup_toolbar2_fixed_window_cp02

0x5220,	// (0x0008b056) popup_call2_audio_second_window_t4_ParamLimits

0x5220,	// (0x0008b056) popup_call2_audio_second_window_t4

0x574e,	// (0x0008b584) popup_call2_audio_first_window_t6_ParamLimits

0x574e,	// (0x0008b584) popup_call2_audio_first_window_t6

0x59e4,	// (0x0008b81a) popup_call2_audio_out_window_t6_ParamLimits

0x59e4,	// (0x0008b81a) popup_call2_audio_out_window_t6

0xe7c8,	// (0x000945fe) main_vitu_pane

0x7aab,	// (0x0008d8e1) aid_size_cell_itu_ParamLimits

0x7aab,	// (0x0008d8e1) aid_size_cell_itu

0x125d,	// (0x00087093) bg_popup_window_pane_cp08_ParamLimits

0x125d,	// (0x00087093) bg_popup_window_pane_cp08

0x7ac1,	// (0x0008d8f7) field_vitu_entry_pane_ParamLimits

0x7ac1,	// (0x0008d8f7) field_vitu_entry_pane

0x7ad8,	// (0x0008d90e) grid_vitu_function_pane_ParamLimits

0x7ad8,	// (0x0008d90e) grid_vitu_function_pane

0x7af3,	// (0x0008d929) grid_vitu_itu_pane_ParamLimits

0x7af3,	// (0x0008d929) grid_vitu_itu_pane

0x7b11,	// (0x0008d947) cell_vitu_itu_pane_ParamLimits

0x7b11,	// (0x0008d947) cell_vitu_itu_pane

0x7b33,	// (0x0008d969) cell_vitu_function_pane_ParamLimits

0x7b33,	// (0x0008d969) cell_vitu_function_pane

0x125d,	// (0x00087093) bg_popup_sub_pane_cp08_ParamLimits

0x125d,	// (0x00087093) bg_popup_sub_pane_cp08

0x7b4c,	// (0x0008d982) field_vitu_entry_pane_t1_ParamLimits

0x7b4c,	// (0x0008d982) field_vitu_entry_pane_t1

0xc1ff,	// (0x00092035) field_vitu_entry_pane_t2_ParamLimits

0xc1ff,	// (0x00092035) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00095656) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00095656) field_vitu_entry_pane_t

0xc21c,	// (0x00092052) bg_button_pane_cp05_ParamLimits

0xc21c,	// (0x00092052) bg_button_pane_cp05

0x7b6a,	// (0x0008d9a0) cell_vitu_itu_pane_g1

0x7b82,	// (0x0008d9b8) cell_vitu_itu_pane_t1_ParamLimits

0x7b82,	// (0x0008d9b8) cell_vitu_itu_pane_t1

0x7b94,	// (0x0008d9ca) cell_vitu_itu_pane_t2_ParamLimits

0x7b94,	// (0x0008d9ca) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0009565b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0009565b) cell_vitu_itu_pane_t

0xc22a,	// (0x00092060) bg_button_pane_cp07

0x7bc9,	// (0x0008d9ff) cell_vitu_function_pane_g1

0xb294,	// (0x000910ca) main_calc_pane_g1

0x1060,	// (0x00086e96) aid_visual_content_pane

0xe7c8,	// (0x000945fe) main_vradio_pane

0x7bd2,	// (0x0008da08) main_vradio_pane_g1_ParamLimits

0x7bd2,	// (0x0008da08) main_vradio_pane_g1

0xc234,	// (0x0009206a) main_vradio_pane_g2_ParamLimits

0xc234,	// (0x0009206a) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00095662) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00095662) main_vradio_pane_g

0x7beb,	// (0x0008da21) main_vradio_pane_t1_ParamLimits

0x7beb,	// (0x0008da21) main_vradio_pane_t1

0x7c00,	// (0x0008da36) main_vradio_pane_t2_ParamLimits

0x7c00,	// (0x0008da36) main_vradio_pane_t2

0xc241,	// (0x00092077) main_vradio_pane_t3_ParamLimits

0xc241,	// (0x00092077) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00095667) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00095667) main_vradio_pane_t

0x7c15,	// (0x0008da4b) vradio_rocker_control_pane_ParamLimits

0x7c15,	// (0x0008da4b) vradio_rocker_control_pane

0x7c27,	// (0x0008da5d) vradio_station_info_pane_ParamLimits

0x7c27,	// (0x0008da5d) vradio_station_info_pane

0xc255,	// (0x0009208b) vradio_frequency_info_pane_ParamLimits

0xc255,	// (0x0009208b) vradio_frequency_info_pane

0xbb95,	// (0x000919cb) vradio_station_info_pane_g1

0xc264,	// (0x0009209a) vradio_station_info_pane_t1_ParamLimits

0xc264,	// (0x0009209a) vradio_station_info_pane_t1

0xc286,	// (0x000920bc) vradio_station_info_pane_t2_ParamLimits

0xc286,	// (0x000920bc) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0009566e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0009566e) vradio_station_info_pane_t

0xc298,	// (0x000920ce) vradio_tuning_pane

0xc2a0,	// (0x000920d6) vradio_rocker_control_pane_g1

0xc2a8,	// (0x000920de) vradio_rocker_control_pane_g2

0xc2b0,	// (0x000920e6) vradio_rocker_control_pane_g3

0xc2b8,	// (0x000920ee) vradio_rocker_control_pane_g4

0xc2c0,	// (0x000920f6) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00095673) vradio_rocker_control_pane_g

0x7c39,	// (0x0008da6f) vradio_frequency_info_pane_g1

0xc2c8,	// (0x000920fe) vradio_frequency_info_pane_t1_ParamLimits

0xc2c8,	// (0x000920fe) vradio_frequency_info_pane_t1

0x7c43,	// (0x0008da79) vradio_tuning_pane_g1

0x7c4e,	// (0x0008da84) vradio_tuning_pane_t1

0xb252,	// (0x00091088) area_side_right_pane_ParamLimits

0xb252,	// (0x00091088) area_side_right_pane

0xb635,	// (0x0009146b) status_small_pane_g1

0xb63d,	// (0x00091473) status_small_pane_g2

0xb646,	// (0x0009147c) status_small_pane_g3

0xb64f,	// (0x00091485) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0009542e) status_small_pane_g

0xb658,	// (0x0009148e) status_small_pane_t1

0xe7c8,	// (0x000945fe) main_video3_pane

0xc2dc,	// (0x00092112) cams_zoom_vslider_pane

0xc2e4,	// (0x0009211a) image3_wide_pane_ParamLimits

0xc2e4,	// (0x0009211a) image3_wide_pane

0xc2fe,	// (0x00092134) image3_wide_small_pane

0xc30a,	// (0x00092140) main_video3_pane_g1_ParamLimits

0xc30a,	// (0x00092140) main_video3_pane_g1

0xc326,	// (0x0009215c) main_video3_pane_g2_ParamLimits

0xc326,	// (0x0009215c) main_video3_pane_g2

0x0001,

0xf848,	// (0x0009567e) main_video3_pane_g_ParamLimits

0xf848,	// (0x0009567e) main_video3_pane_g

0xc342,	// (0x00092178) main_video3_pane_t1_ParamLimits

0xc342,	// (0x00092178) main_video3_pane_t1

0xc36d,	// (0x000921a3) main_video3_pane_t2_ParamLimits

0xc36d,	// (0x000921a3) main_video3_pane_t2

0xc398,	// (0x000921ce) main_video3_pane_t3_ParamLimits

0xc398,	// (0x000921ce) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00095683) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00095683) main_video3_pane_t

0xc3c5,	// (0x000921fb) cams_zoom_vslider_pane_g1

0xc3ce,	// (0x00092204) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0009568a) cams_zoom_vslider_pane_g

0xc3d6,	// (0x0009220c) small_slider_vertical_pane

0xbb95,	// (0x000919cb) small_slider_vertical_pane_g1

0xbb95,	// (0x000919cb) small_slider_vertical_pane_g2

0xc3de,	// (0x00092214) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0009568f) small_slider_vertical_pane_g

0xe7c8,	// (0x000945fe) main_hwr_training_pane

0xc3e7,	// (0x0009221d) hwr_training_instruct_pane_ParamLimits

0xc3e7,	// (0x0009221d) hwr_training_instruct_pane

0x7c5d,	// (0x0008da93) hwr_training_navi_pane_ParamLimits

0x7c5d,	// (0x0008da93) hwr_training_navi_pane

0x7c7c,	// (0x0008dab2) hwr_training_write_pane_ParamLimits

0x7c7c,	// (0x0008dab2) hwr_training_write_pane

0xe7c8,	// (0x000945fe) bg_frame_shadow_pane

0xc41e,	// (0x00092254) hwr_training_write_pane_g1

0xc426,	// (0x0009225c) hwr_training_write_pane_g2

0xc42e,	// (0x00092264) hwr_training_write_pane_g3

0xc436,	// (0x0009226c) hwr_training_write_pane_g4

0xc43e,	// (0x00092274) hwr_training_write_pane_g5

0xc446,	// (0x0009227c) hwr_training_write_pane_g6

0xc44e,	// (0x00092284) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00095696) hwr_training_write_pane_g

0xc456,	// (0x0009228c) hwr_training_navi_pane_g1_ParamLimits

0xc456,	// (0x0009228c) hwr_training_navi_pane_g1

0xc468,	// (0x0009229e) hwr_training_navi_pane_g2_ParamLimits

0xc468,	// (0x0009229e) hwr_training_navi_pane_g2

0xc47a,	// (0x000922b0) hwr_training_navi_pane_g3_ParamLimits

0xc47a,	// (0x000922b0) hwr_training_navi_pane_g3

0xc48a,	// (0x000922c0) hwr_training_navi_pane_g4_ParamLimits

0xc48a,	// (0x000922c0) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000956a5) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000956a5) hwr_training_navi_pane_g

0xc497,	// (0x000922cd) hwr_training_navi_pane_t1

0x7cc4,	// (0x0008dafa) list_single_hwr_training_instruct_pane_ParamLimits

0x7cc4,	// (0x0008dafa) list_single_hwr_training_instruct_pane

0xc4a5,	// (0x000922db) list_single_hwr_training_instruct_pane_t1

0xbad5,	// (0x0009190b) bg_frame_shadow_pane_g1

0xc4b4,	// (0x000922ea) bg_frame_shadow_pane_g2

0xc4bc,	// (0x000922f2) bg_frame_shadow_pane_g3

0xc4c4,	// (0x000922fa) bg_frame_shadow_pane_g4

0xc4cc,	// (0x00092302) bg_frame_shadow_pane_g5

0xc4d4,	// (0x0009230a) bg_frame_shadow_pane_g6

0xc4dc,	// (0x00092312) bg_frame_shadow_pane_g7

0x175f,	// (0x00087595) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000956b0) bg_frame_shadow_pane_g

0xe7c8,	// (0x000945fe) main_video_tele_dialer_pane

0x7cd9,	// (0x0008db0f) aid_size_cell_video_keypad_ParamLimits

0x7cd9,	// (0x0008db0f) aid_size_cell_video_keypad

0x7cf3,	// (0x0008db29) grid_video_dialer_keypad_pane_ParamLimits

0x7cf3,	// (0x0008db29) grid_video_dialer_keypad_pane

0x7d3f,	// (0x0008db75) video_down_pane_cp_ParamLimits

0x7d3f,	// (0x0008db75) video_down_pane_cp

0x7d71,	// (0x0008dba7) cell_video_dialer_keypad_pane_ParamLimits

0x7d71,	// (0x0008dba7) cell_video_dialer_keypad_pane

0xc4e4,	// (0x0009231a) bg_button_pane_cp08_ParamLimits

0xc4e4,	// (0x0009231a) bg_button_pane_cp08

0x7d93,	// (0x0008dbc9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d93,	// (0x0008dbc9) cell_video_dialer_keypad_pane_g1

0x7447,	// (0x0008d27d) mup3_rocker2_pane_ParamLimits

0x7447,	// (0x0008d27d) mup3_rocker2_pane

0xbb95,	// (0x000919cb) mup3_rocker2_pane_g1

0x5f74,	// (0x0008bdaa) main_dialer2_pane

0xe7c8,	// (0x000945fe) main_mp4_pane

0xc4f8,	// (0x0009232e) main_mp4_pane_g1_ParamLimits

0xc4f8,	// (0x0009232e) main_mp4_pane_g1

0xc4f8,	// (0x0009232e) main_mp4_pane_g2_ParamLimits

0xc4f8,	// (0x0009232e) main_mp4_pane_g2

0x7dca,	// (0x0008dc00) main_mp4_pane_g3_ParamLimits

0x7dca,	// (0x0008dc00) main_mp4_pane_g3

0xc506,	// (0x0009233c) main_mp4_pane_g4_ParamLimits

0xc506,	// (0x0009233c) main_mp4_pane_g4

0xc52e,	// (0x00092364) main_mp4_pane_g5_ParamLimits

0xc52e,	// (0x00092364) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000956d0) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000956d0) main_mp4_pane_g

0xc57e,	// (0x000923b4) main_mp4_pane_t1_ParamLimits

0xc57e,	// (0x000923b4) main_mp4_pane_t1

0xc5da,	// (0x00092410) main_mp4_pane_t2_ParamLimits

0xc5da,	// (0x00092410) main_mp4_pane_t2

0xc62c,	// (0x00092462) main_mp4_pane_t3_ParamLimits

0xc62c,	// (0x00092462) main_mp4_pane_t3

0xc64c,	// (0x00092482) main_mp4_pane_t4_ParamLimits

0xc64c,	// (0x00092482) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000956dd) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000956dd) main_mp4_pane_t

0xc690,	// (0x000924c6) mp4_progress_pane_ParamLimits

0xc690,	// (0x000924c6) mp4_progress_pane

0xc6da,	// (0x00092510) mp4_rocker_pane_ParamLimits

0xc6da,	// (0x00092510) mp4_rocker_pane

0xc702,	// (0x00092538) mp4_progress_pane_t1

0xc71b,	// (0x00092551) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000956e6) mp4_progress_pane_t

0xc734,	// (0x0009256a) mup_progress_pane_cp04

0xbb95,	// (0x000919cb) mp4_rocker_pane_g1

0x7e06,	// (0x0008dc3c) aid_cell_size_keypad2_ParamLimits

0x7e06,	// (0x0008dc3c) aid_cell_size_keypad2

0x7e1c,	// (0x0008dc52) dialer2_ne_pane_ParamLimits

0x7e1c,	// (0x0008dc52) dialer2_ne_pane

0x7e36,	// (0x0008dc6c) grid_dialer2_keypad_pane_ParamLimits

0x7e36,	// (0x0008dc6c) grid_dialer2_keypad_pane

0xb97a,	// (0x000917b0) bg_popup_call_pane_cp07_ParamLimits

0xb97a,	// (0x000917b0) bg_popup_call_pane_cp07

0x7e52,	// (0x0008dc88) dialer2_ne_pane_t1_ParamLimits

0x7e52,	// (0x0008dc88) dialer2_ne_pane_t1

0x7e8d,	// (0x0008dcc3) cell_dialer2_keypad_pane_ParamLimits

0x7e8d,	// (0x0008dcc3) cell_dialer2_keypad_pane

0xc752,	// (0x00092588) bg_button_pane_pane_cp04_ParamLimits

0xc752,	// (0x00092588) bg_button_pane_pane_cp04

0x7eaf,	// (0x0008dce5) cell_dialer2_keypad_pane_g1_ParamLimits

0x7eaf,	// (0x0008dce5) cell_dialer2_keypad_pane_g1

0x22df,	// (0x00088115) aid_placing_vt_set_content_ParamLimits

0x22df,	// (0x00088115) aid_placing_vt_set_content

0x2307,	// (0x0008813d) aid_placing_vt_set_title_ParamLimits

0x2307,	// (0x0008813d) aid_placing_vt_set_title

0xe7c8,	// (0x000945fe) main_image3_pane

0x7f75,	// (0x0008ddab) area_side_right_pane_cp01_ParamLimits

0x7f75,	// (0x0008ddab) area_side_right_pane_cp01

0xc4f8,	// (0x0009232e) main_image3_pane_g1_ParamLimits

0xc4f8,	// (0x0009232e) main_image3_pane_g1

0x7f8c,	// (0x0008ddc2) main_image3_pane_g2_ParamLimits

0x7f8c,	// (0x0008ddc2) main_image3_pane_g2

0x7fb4,	// (0x0008ddea) main_image3_pane_g3_ParamLimits

0x7fb4,	// (0x0008ddea) main_image3_pane_g3

0x7fde,	// (0x0008de14) main_image3_pane_g4_ParamLimits

0x7fde,	// (0x0008de14) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000956f5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000956f5) main_image3_pane_g

0x8008,	// (0x0008de3e) main_image3_pane_t1_ParamLimits

0x8008,	// (0x0008de3e) main_image3_pane_t1

0x8060,	// (0x0008de96) main_image3_pane_t2_ParamLimits

0x8060,	// (0x0008de96) main_image3_pane_t2

0x80b2,	// (0x0008dee8) main_image3_pane_t3_ParamLimits

0x80b2,	// (0x0008dee8) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000956fe) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000956fe) main_image3_pane_t

0x125d,	// (0x00087093) grid_sctrl_middle_pane_cp01_ParamLimits

0x125d,	// (0x00087093) grid_sctrl_middle_pane_cp01

0x813a,	// (0x0008df70) cell_sctrl_middle_pane_cp01_ParamLimits

0x813a,	// (0x0008df70) cell_sctrl_middle_pane_cp01

0x8157,	// (0x0008df8d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8157,	// (0x0008df8d) cell_sctrl_middle_pane_cp01_g1

0xe7c8,	// (0x000945fe) main_call4_pane

0x816d,	// (0x0008dfa3) aid_size_button_call4_ParamLimits

0x816d,	// (0x0008dfa3) aid_size_button_call4

0x819e,	// (0x0008dfd4) call4_windows_pane_ParamLimits

0x819e,	// (0x0008dfd4) call4_windows_pane

0x81be,	// (0x0008dff4) grid_call4_button_pane_ParamLimits

0x81be,	// (0x0008dff4) grid_call4_button_pane

0xc790,	// (0x000925c6) call4_windows_conf_pane

0xc7a7,	// (0x000925dd) popup_call4_audio_first_window_ParamLimits

0xc7a7,	// (0x000925dd) popup_call4_audio_first_window

0xc7f3,	// (0x00092629) popup_call4_audio_second_window_ParamLimits

0xc7f3,	// (0x00092629) popup_call4_audio_second_window

0xc807,	// (0x0009263d) popup_call4_audio_wait_window_ParamLimits

0xc807,	// (0x0009263d) popup_call4_audio_wait_window

0x81eb,	// (0x0008e021) cell_call4_button_pane_ParamLimits

0x81eb,	// (0x0008e021) cell_call4_button_pane

0x8214,	// (0x0008e04a) bg_button_pane_cp09_ParamLimits

0x8214,	// (0x0008e04a) bg_button_pane_cp09

0x8220,	// (0x0008e056) cell_call4_button_pane_g1_ParamLimits

0x8220,	// (0x0008e056) cell_call4_button_pane_g1

0x8246,	// (0x0008e07c) cell_call4_button_pane_t1_ParamLimits

0x8246,	// (0x0008e07c) cell_call4_button_pane_t1

0xc84f,	// (0x00092685) popup_call4_audio_conf_window_ParamLimits

0xc84f,	// (0x00092685) popup_call4_audio_conf_window

0x74a7,	// (0x0008d2dd) mup3_progress_pane_t1_ParamLimits

0x74c6,	// (0x0008d2fc) mup3_progress_pane_t2_ParamLimits

0xbed4,	// (0x00091d0a) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000955d2) mup3_progress_pane_t_ParamLimits

0xbef1,	// (0x00091d27) mup_progress_pane_cp03_ParamLimits

0x7aa3,	// (0x0008d8d9) mup3_control_keys_pane_g4_copy1

0xc6be,	// (0x000924f4) mp4_rocker2_pane_ParamLimits

0xc6be,	// (0x000924f4) mp4_rocker2_pane

0xc863,	// (0x00092699) mp4_rocker2_pane_g1

0xc86b,	// (0x000926a1) mp4_rocker2_pane_g2

0xc873,	// (0x000926a9) mp4_rocker2_pane_g3

0xc87b,	// (0x000926b1) mp4_rocker2_pane_g4

0xc883,	// (0x000926b9) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00095707) mp4_rocker2_pane_g

0xe7c8,	// (0x000945fe) main_camera4_pane

0xe7c8,	// (0x000945fe) main_video4_pane

0x7d0d,	// (0x0008db43) main_video_tele_dialer_pane_t1_ParamLimits

0x7d0d,	// (0x0008db43) main_video_tele_dialer_pane_t1

0x7d26,	// (0x0008db5c) main_video_tele_dialer_pane_t2_ParamLimits

0x7d26,	// (0x0008db5c) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000956c1) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000956c1) main_video_tele_dialer_pane_t

0x8284,	// (0x0008e0ba) cam4_autofocus_pane_ParamLimits

0x8284,	// (0x0008e0ba) cam4_autofocus_pane

0x829a,	// (0x0008e0d0) cam4_image_uncrop_pane_ParamLimits

0x829a,	// (0x0008e0d0) cam4_image_uncrop_pane

0x82b4,	// (0x0008e0ea) cam4_indicators_pane_ParamLimits

0x82b4,	// (0x0008e0ea) cam4_indicators_pane

0x82df,	// (0x0008e115) main_camera4_pane_g1_ParamLimits

0x82df,	// (0x0008e115) main_camera4_pane_g1

0x82f1,	// (0x0008e127) main_camera4_pane_g2_ParamLimits

0x82f1,	// (0x0008e127) main_camera4_pane_g2

0x8304,	// (0x0008e13a) main_camera4_pane_g3_ParamLimits

0x8304,	// (0x0008e13a) main_camera4_pane_g3

0x8317,	// (0x0008e14d) main_camera4_pane_g4_ParamLimits

0x8317,	// (0x0008e14d) main_camera4_pane_g4

0x832a,	// (0x0008e160) main_camera4_pane_g5_ParamLimits

0x832a,	// (0x0008e160) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00095712) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00095712) main_camera4_pane_g

0x834e,	// (0x0008e184) main_camera4_pane_t1_ParamLimits

0x834e,	// (0x0008e184) main_camera4_pane_t1

0xbe01,	// (0x00091c37) bg_tb_trans_pane_cp06

0xc8c1,	// (0x000926f7) cam4_indicators_pane_g1

0xc8d2,	// (0x00092708) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0009572d) cam4_indicators_pane_g

0xc8f0,	// (0x00092726) cam4_indicators_pane_t1

0x83b2,	// (0x0008e1e8) main_video4_pane_g1_ParamLimits

0x83b2,	// (0x0008e1e8) main_video4_pane_g1

0x83c1,	// (0x0008e1f7) main_video4_pane_g2_ParamLimits

0x83c1,	// (0x0008e1f7) main_video4_pane_g2

0x83d0,	// (0x0008e206) main_video4_pane_g3_ParamLimits

0x83d0,	// (0x0008e206) main_video4_pane_g3

0x83df,	// (0x0008e215) main_video4_pane_g4_ParamLimits

0x83df,	// (0x0008e215) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00095734) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00095734) main_video4_pane_g

0x83fd,	// (0x0008e233) vid4_indicators_pane_ParamLimits

0x83fd,	// (0x0008e233) vid4_indicators_pane

0x842b,	// (0x0008e261) video4_image_uncrop_cif_pane_ParamLimits

0x842b,	// (0x0008e261) video4_image_uncrop_cif_pane

0x8445,	// (0x0008e27b) video4_image_uncrop_nhd_pane_ParamLimits

0x8445,	// (0x0008e27b) video4_image_uncrop_nhd_pane

0x829a,	// (0x0008e0d0) video4_image_uncrop_vga_pane_ParamLimits

0x829a,	// (0x0008e0d0) video4_image_uncrop_vga_pane

0x125d,	// (0x00087093) bg_tb_trans_pane_cp07

0xc91c,	// (0x00092752) vid4_indicators_pane_g1

0xc930,	// (0x00092766) vid4_indicators_pane_g2

0xc944,	// (0x0009277a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0009573f) vid4_indicators_pane_g

0xc973,	// (0x000927a9) vid4_indicators_pane_t1

0x8459,	// (0x0008e28f) cam4_autofocus_pane_g1

0x8461,	// (0x0008e297) cam4_autofocus_pane_g2

0x8469,	// (0x0008e29f) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0009574a) cam4_autofocus_pane_g

0x8471,	// (0x0008e2a7) cam4_autofocus_pane_g3_copy1

0x7d55,	// (0x0008db8b) video_down_pane_cp_t1

0x7d63,	// (0x0008db99) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000956c6) video_down_pane_cp_t

0x125d,	// (0x00087093) popup_vitu2_window_ParamLimits

0x125d,	// (0x00087093) popup_vitu2_window

0x8479,	// (0x0008e2af) aid_size_cell2_itu2_ParamLimits

0x8479,	// (0x0008e2af) aid_size_cell2_itu2

0x849f,	// (0x0008e2d5) aid_size_cell_itu2_ParamLimits

0x849f,	// (0x0008e2d5) aid_size_cell_itu2

0x84fb,	// (0x0008e331) bg_popup_window_pane_cp09_ParamLimits

0x84fb,	// (0x0008e331) bg_popup_window_pane_cp09

0x8509,	// (0x0008e33f) field_vitu2_entry_pane_ParamLimits

0x8509,	// (0x0008e33f) field_vitu2_entry_pane

0x852f,	// (0x0008e365) grid_vitu2_function_pane_ParamLimits

0x852f,	// (0x0008e365) grid_vitu2_function_pane

0x8580,	// (0x0008e3b6) grid_vitu2_itu_pane_ParamLimits

0x8580,	// (0x0008e3b6) grid_vitu2_itu_pane

0x8618,	// (0x0008e44e) cell_vitu2_itu_pane_ParamLimits

0x8618,	// (0x0008e44e) cell_vitu2_itu_pane

0x8644,	// (0x0008e47a) cell_vitu2_function_pane_ParamLimits

0x8644,	// (0x0008e47a) cell_vitu2_function_pane

0xc98a,	// (0x000927c0) bg_popup_call_pane_cp08_ParamLimits

0xc98a,	// (0x000927c0) bg_popup_call_pane_cp08

0xc9a1,	// (0x000927d7) field_vitu2_entry_pane_g1

0xc9ad,	// (0x000927e3) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00095751) field_vitu2_entry_pane_g

0x0471,	// (0x000862a7) field_vitu2_entry_pane_t1_ParamLimits

0x0471,	// (0x000862a7) field_vitu2_entry_pane_t1

0xc9c7,	// (0x000927fd) field_vitu2_entry_pane_t2_ParamLimits

0xc9c7,	// (0x000927fd) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00095758) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00095758) field_vitu2_entry_pane_t

0x8683,	// (0x0008e4b9) bg_button_pane_cp010_ParamLimits

0x8683,	// (0x0008e4b9) bg_button_pane_cp010

0xc9ec,	// (0x00092822) cell_vitu2_itu_pane_g1

0x869f,	// (0x0008e4d5) cell_vitu2_itu_pane_t1_ParamLimits

0x869f,	// (0x0008e4d5) cell_vitu2_itu_pane_t1

0x04a0,	// (0x000862d6) cell_vitu2_itu_pane_t2_ParamLimits

0x04a0,	// (0x000862d6) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00095762) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00095762) cell_vitu2_itu_pane_t

0x125d,	// (0x00087093) bg_button_pane_cp011

0x86fd,	// (0x0008e533) cell_vitu2_function_pane_g1

0xe7c8,	// (0x000945fe) main_myfav_hc_pane

0x8102,	// (0x0008df38) popup_image3_note_pane_ParamLimits

0x8102,	// (0x0008df38) popup_image3_note_pane

0x811e,	// (0x0008df54) popup_image3_tool_bar_pane_ParamLimits

0x811e,	// (0x0008df54) popup_image3_tool_bar_pane

0x052e,	// (0x00086364) cell_vitu2_itu_pane_t3_ParamLimits

0x052e,	// (0x00086364) cell_vitu2_itu_pane_t3

0xe7c8,	// (0x000945fe) bg_popup_trans_pane

0xc9fe,	// (0x00092834) grid_image3_tool_bar_pane

0xca08,	// (0x0009283e) bg_popup_trans_pane_g1

0x28d6,	// (0x0008870c) bg_popup_trans_pane_g2

0xca10,	// (0x00092846) bg_popup_trans_pane_g3

0xca18,	// (0x0009284e) bg_popup_trans_pane_g4

0xca20,	// (0x00092856) bg_popup_trans_pane_g5

0xca28,	// (0x0009285e) bg_popup_trans_pane_g6

0xca30,	// (0x00092866) bg_popup_trans_pane_g7

0xca38,	// (0x0009286e) bg_popup_trans_pane_g8

0x28b6,	// (0x000886ec) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00095769) bg_popup_trans_pane_g

0xca40,	// (0x00092876) cell_image3_tool_bar_pane_ParamLimits

0xca40,	// (0x00092876) cell_image3_tool_bar_pane

0xbb95,	// (0x000919cb) cell_image3_tool_bar_pane_g1

0xe7c8,	// (0x000945fe) bg_popup_trans_pane_cp1

0xca54,	// (0x0009288a) popup_image3_note_pane_t1

0xca62,	// (0x00092898) popup_image3_note_pane_t2

0xca70,	// (0x000928a6) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0009577c) popup_image3_note_pane_t

0xca7e,	// (0x000928b4) popup_image3_note_pane_t3_copy1

0x8711,	// (0x0008e547) bg_myfav_hc_instruction_pane_ParamLimits

0x8711,	// (0x0008e547) bg_myfav_hc_instruction_pane

0x8725,	// (0x0008e55b) cell_myfav_contact_pane_ParamLimits

0x8725,	// (0x0008e55b) cell_myfav_contact_pane

0x8743,	// (0x0008e579) cell_myfav_contact_pane_cp1_ParamLimits

0x8743,	// (0x0008e579) cell_myfav_contact_pane_cp1

0x875b,	// (0x0008e591) cell_myfav_contact_pane_cp2_ParamLimits

0x875b,	// (0x0008e591) cell_myfav_contact_pane_cp2

0x8773,	// (0x0008e5a9) cell_myfav_contact_pane_cp3_ParamLimits

0x8773,	// (0x0008e5a9) cell_myfav_contact_pane_cp3

0x878a,	// (0x0008e5c0) cell_myfav_contact_pane_cp4_ParamLimits

0x878a,	// (0x0008e5c0) cell_myfav_contact_pane_cp4

0x87a2,	// (0x0008e5d8) cell_myfav_contact_pane_cp5_ParamLimits

0x87a2,	// (0x0008e5d8) cell_myfav_contact_pane_cp5

0x87b6,	// (0x0008e5ec) cell_myfav_contact_pane_cp6_ParamLimits

0x87b6,	// (0x0008e5ec) cell_myfav_contact_pane_cp6

0x87cc,	// (0x0008e602) cell_myfav_contact_pane_cp7_ParamLimits

0x87cc,	// (0x0008e602) cell_myfav_contact_pane_cp7

0xca8c,	// (0x000928c2) listscroll_gen_pane_cp05

0x87e6,	// (0x0008e61c) main_myfav_hc_pane_g1_ParamLimits

0x87e6,	// (0x0008e61c) main_myfav_hc_pane_g1

0x8800,	// (0x0008e636) main_myfav_hc_pane_g2_ParamLimits

0x8800,	// (0x0008e636) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00095783) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00095783) main_myfav_hc_pane_g

0x8832,	// (0x0008e668) main_myfav_hc_pane_t1_ParamLimits

0x8832,	// (0x0008e668) main_myfav_hc_pane_t1

0xca95,	// (0x000928cb) main_myfav_hc_pane_t2_ParamLimits

0xca95,	// (0x000928cb) main_myfav_hc_pane_t2

0xcaa7,	// (0x000928dd) main_myfav_hc_pane_t3_ParamLimits

0xcaa7,	// (0x000928dd) main_myfav_hc_pane_t3

0x8849,	// (0x0008e67f) main_myfav_hc_pane_t4_ParamLimits

0x8849,	// (0x0008e67f) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0009578a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0009578a) main_myfav_hc_pane_t

0xbb95,	// (0x000919cb) bg_myfav_hc_instruction_pane_g1

0xcab9,	// (0x000928ef) cell_myfav_contact_pane_g1_ParamLimits

0xcab9,	// (0x000928ef) cell_myfav_contact_pane_g1

0xcab9,	// (0x000928ef) cell_myfav_contact_pane_g2_ParamLimits

0xcab9,	// (0x000928ef) cell_myfav_contact_pane_g2

0xcac5,	// (0x000928fb) cell_myfav_contact_pane_g3_ParamLimits

0xcac5,	// (0x000928fb) cell_myfav_contact_pane_g3

0xbebe,	// (0x00091cf4) cell_myfav_contact_pane_g4_ParamLimits

0xbebe,	// (0x00091cf4) cell_myfav_contact_pane_g4

0xcad2,	// (0x00092908) cell_myfav_contact_pane_g5_ParamLimits

0xcad2,	// (0x00092908) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00095795) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00095795) cell_myfav_contact_pane_g

0x881a,	// (0x0008e650) main_myfav_hc_pane_g3_ParamLimits

0x881a,	// (0x0008e650) main_myfav_hc_pane_g3

0x119b,	// (0x00086fd1) popup_adpt_find_window

0x8871,	// (0x0008e6a7) afind_page_pane_ParamLimits

0x8871,	// (0x0008e6a7) afind_page_pane

0x8886,	// (0x0008e6bc) aid_size_cell_afind_ParamLimits

0x8886,	// (0x0008e6bc) aid_size_cell_afind

0x88a4,	// (0x0008e6da) bg_popup_sub_pane_cp09_ParamLimits

0x88a4,	// (0x0008e6da) bg_popup_sub_pane_cp09

0x88b1,	// (0x0008e6e7) find_pane_cp01_ParamLimits

0x88b1,	// (0x0008e6e7) find_pane_cp01

0xcade,	// (0x00092914) grid_afind_control_pane_ParamLimits

0xcade,	// (0x00092914) grid_afind_control_pane

0x88be,	// (0x0008e6f4) grid_afind_pane_ParamLimits

0x88be,	// (0x0008e6f4) grid_afind_pane

0x88e0,	// (0x0008e716) cell_afind_pane_ParamLimits

0x88e0,	// (0x0008e716) cell_afind_pane

0xbb95,	// (0x000919cb) afind_page_pane_g1

0x8947,	// (0x0008e77d) afind_page_pane_g2

0x8950,	// (0x0008e786) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000957a0) afind_page_pane_g

0x8959,	// (0x0008e78f) afind_page_pane_t1

0xcaf2,	// (0x00092928) cell_afind_grid_control_pane_ParamLimits

0xcaf2,	// (0x00092928) cell_afind_grid_control_pane

0xc752,	// (0x00092588) bg_button_pane_cp69_ParamLimits

0xc752,	// (0x00092588) bg_button_pane_cp69

0x8979,	// (0x0008e7af) cell_afind_pane_g1_ParamLimits

0x8979,	// (0x0008e7af) cell_afind_pane_g1

0x8986,	// (0x0008e7bc) cell_afind_pane_t1_ParamLimits

0x8986,	// (0x0008e7bc) cell_afind_pane_t1

0x225a,	// (0x00088090) bg_button_pane_cp72

0xcb01,	// (0x00092937) cell_afind_grid_control_pane_g1

0x4cdf,	// (0x0008ab15) aid_image_placing_area_ParamLimits

0x4cdf,	// (0x0008ab15) aid_image_placing_area

0xc1e7,	// (0x0009201d) field_vitu_entry_pane_g1_ParamLimits

0xc1e7,	// (0x0009201d) field_vitu_entry_pane_g1

0xc1f3,	// (0x00092029) field_vitu_entry_pane_g2_ParamLimits

0xc1f3,	// (0x00092029) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00095651) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00095651) field_vitu_entry_pane_g

0x7b6a,	// (0x0008d9a0) cell_vitu_itu_pane_g1_ParamLimits

0x7bac,	// (0x0008d9e2) cell_vitu_itu_pane_t3_ParamLimits

0x7bac,	// (0x0008d9e2) cell_vitu_itu_pane_t3

0xc702,	// (0x00092538) mp4_progress_pane_t1_ParamLimits

0xc71b,	// (0x00092551) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000956e6) mp4_progress_pane_t_ParamLimits

0xc734,	// (0x0009256a) mup_progress_pane_cp04_ParamLimits

0x885d,	// (0x0008e693) main_myfav_hc_pane_t5_ParamLimits

0x885d,	// (0x0008e693) main_myfav_hc_pane_t5

0xb242,	// (0x00091078) aid_zoom_text_primary

0x119b,	// (0x00086fd1) popup_adpt_find_window_ParamLimits

0x125d,	// (0x00087093) main_cam_set_pane

0x82cb,	// (0x0008e101) cam4_zoom_pane_ParamLimits

0x82cb,	// (0x0008e101) cam4_zoom_pane

0x8998,	// (0x0008e7ce) main_cam_set_pane_g1_ParamLimits

0x8998,	// (0x0008e7ce) main_cam_set_pane_g1

0x89a6,	// (0x0008e7dc) main_cam_set_pane_g2_ParamLimits

0x89a6,	// (0x0008e7dc) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000957a7) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000957a7) main_cam_set_pane_g

0x89c7,	// (0x0008e7fd) main_cam_set_pane_t1_ParamLimits

0x89c7,	// (0x0008e7fd) main_cam_set_pane_t1

0x89e2,	// (0x0008e818) main_cset_listscroll_pane_ParamLimits

0x89e2,	// (0x0008e818) main_cset_listscroll_pane

0x8a02,	// (0x0008e838) main_cset_slider_pane_ParamLimits

0x8a02,	// (0x0008e838) main_cset_slider_pane

0xcb12,	// (0x00092948) main_cset_list_pane_ParamLimits

0xcb12,	// (0x00092948) main_cset_list_pane

0xcb22,	// (0x00092958) scroll_pane_cp028

0x8a28,	// (0x0008e85e) aid_area_touch_slider

0x8a44,	// (0x0008e87a) cset_slider_pane

0x8a6e,	// (0x0008e8a4) main_cset_slider_pane_g1

0x8a83,	// (0x0008e8b9) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000957ac) main_cset_slider_pane_g

0xcb5b,	// (0x00092991) main_cset_slider_pane_t1

0x8b3f,	// (0x0008e975) main_cset_slider_pane_t2

0x8b59,	// (0x0008e98f) main_cset_slider_pane_t3

0x8b73,	// (0x0008e9a9) main_cset_slider_pane_t4

0x8b8d,	// (0x0008e9c3) main_cset_slider_pane_t5

0x8ba7,	// (0x0008e9dd) main_cset_slider_pane_t6

0x8bbc,	// (0x0008e9f2) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000957d1) main_cset_slider_pane_t

0x8cc0,	// (0x0008eaf6) cset_list_set_pane_ParamLimits

0x8cc0,	// (0x0008eaf6) cset_list_set_pane

0x8cd2,	// (0x0008eb08) aid_position_infowindow_above

0x8cda,	// (0x0008eb10) aid_position_infowindow_below

0xefb6,	// (0x00094dec) cset_list_set_pane_g1_ParamLimits

0xefb6,	// (0x00094dec) cset_list_set_pane_g1

0xcbfb,	// (0x00092a31) cset_list_set_pane_g3_ParamLimits

0xcbfb,	// (0x00092a31) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000957f0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000957f0) cset_list_set_pane_g

0xcc0a,	// (0x00092a40) cset_list_set_pane_t1_ParamLimits

0xcc0a,	// (0x00092a40) cset_list_set_pane_t1

0x125d,	// (0x00087093) list_highlight_pane_cp021_ParamLimits

0x125d,	// (0x00087093) list_highlight_pane_cp021

0x4560,	// (0x0008a396) cset_slider_pane_g1

0x4572,	// (0x0008a3a8) cset_slider_pane_g2

0x4569,	// (0x0008a39f) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000957f5) cset_slider_pane_g

0xefc2,	// (0x00094df8) aid_area_touch_cam4_zoom

0xefca,	// (0x00094e00) cam4_zoom_cont_pane

0xefd2,	// (0x00094e08) cam4_zoom_pane_g1

0xefda,	// (0x00094e10) cam4_zoom_pane_g2

0x8ce2,	// (0x0008eb18) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000957fc) cam4_zoom_pane_g

0xcc1f,	// (0x00092a55) cam4_zoom_cont_pane_g1

0xcc28,	// (0x00092a5e) cam4_zoom_cont_pane_g2

0xcc31,	// (0x00092a67) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00095803) cam4_zoom_cont_pane_g

0x818b,	// (0x0008dfc1) call4_image_pane_ParamLimits

0x818b,	// (0x0008dfc1) call4_image_pane

0xc790,	// (0x000925c6) call4_windows_conf_pane_ParamLimits

0xc7d1,	// (0x00092607) popup_call4_audio_in_window_ParamLimits

0xc7d1,	// (0x00092607) popup_call4_audio_in_window

0xe7c8,	// (0x000945fe) bg_popup_call2_act_pane_cp02

0xc847,	// (0x0009267d) call4_list_conf_pane

0xbb95,	// (0x000919cb) call4_image_pane_g1

0xbb95,	// (0x000919cb) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00095512) call4_image_pane_g

0xcc3a,	// (0x00092a70) list_single_graphic_popup_conf4_pane_ParamLimits

0xcc3a,	// (0x00092a70) list_single_graphic_popup_conf4_pane

0xe7c8,	// (0x000945fe) list_highlight_pane_cp022

0xcc4d,	// (0x00092a83) list_single_graphic_popup_conf4_pane_g1

0x3ad6,	// (0x0008990c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0009580a) list_single_graphic_popup_conf4_pane_g

0xcc55,	// (0x00092a8b) list_single_graphic_popup_conf4_pane_t1

0x243d,	// (0x00088273) popup_vtel_slider_window_ParamLimits

0x243d,	// (0x00088273) popup_vtel_slider_window

0xc740,	// (0x00092576) dialer2_ne_pane_t2_ParamLimits

0xc740,	// (0x00092576) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000956eb) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000956eb) dialer2_ne_pane_t

0xb97a,	// (0x000917b0) bg_popup_sub_pane_cp010_ParamLimits

0xb97a,	// (0x000917b0) bg_popup_sub_pane_cp010

0x8cea,	// (0x0008eb20) popup_vtel_slider_window_g1_ParamLimits

0x8cea,	// (0x0008eb20) popup_vtel_slider_window_g1

0x8cfd,	// (0x0008eb33) popup_vtel_slider_window_g2_ParamLimits

0x8cfd,	// (0x0008eb33) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0009580f) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0009580f) popup_vtel_slider_window_g

0x8d53,	// (0x0008eb89) vtel_slider_pane_ParamLimits

0x8d53,	// (0x0008eb89) vtel_slider_pane

0x8d75,	// (0x0008ebab) vtel_slider_pane_g1_ParamLimits

0x8d75,	// (0x0008ebab) vtel_slider_pane_g1

0x8d89,	// (0x0008ebbf) vtel_slider_pane_g2_ParamLimits

0x8d89,	// (0x0008ebbf) vtel_slider_pane_g2

0x8da1,	// (0x0008ebd7) vtel_slider_pane_g3_ParamLimits

0x8da1,	// (0x0008ebd7) vtel_slider_pane_g3

0x8d75,	// (0x0008ebab) vtel_slider_pane_g4_ParamLimits

0x8d75,	// (0x0008ebab) vtel_slider_pane_g4

0x8db7,	// (0x0008ebed) vtel_slider_pane_g5_ParamLimits

0x8db7,	// (0x0008ebed) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00095818) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00095818) vtel_slider_pane_g

0x125d,	// (0x00087093) main_gallery2_pane

0x84cb,	// (0x0008e301) aid_size_row_itut2_dropdow_list_ParamLimits

0x84cb,	// (0x0008e301) aid_size_row_itut2_dropdow_list

0x8557,	// (0x0008e38d) grid_vitu2_function_top_pane_ParamLimits

0x8557,	// (0x0008e38d) grid_vitu2_function_top_pane

0x85c1,	// (0x0008e3f7) popup_vitu2_dropdown_list_window_ParamLimits

0x85c1,	// (0x0008e3f7) popup_vitu2_dropdown_list_window

0x85ea,	// (0x0008e420) popup_vitu2_match_list_window

0x8dcd,	// (0x0008ec03) cell_vitu2_function_top_pane_ParamLimits

0x8dcd,	// (0x0008ec03) cell_vitu2_function_top_pane

0x8de5,	// (0x0008ec1b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8de5,	// (0x0008ec1b) cell_vitu2_function_top_pane_cp01

0x8e01,	// (0x0008ec37) cell_vitu2_function_top_wide_pane_ParamLimits

0x8e01,	// (0x0008ec37) cell_vitu2_function_top_wide_pane

0x125d,	// (0x00087093) bg_button_pane_cp012

0x8e1d,	// (0x0008ec53) cell_vitu2_function_top_pane_g1

0xefe2,	// (0x00094e18) bg_button_pane_cp013_ParamLimits

0xefe2,	// (0x00094e18) bg_button_pane_cp013

0x8e31,	// (0x0008ec67) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8e31,	// (0x0008ec67) cell_vitu2_function_top_wide_pane_g1

0x125d,	// (0x00087093) bg_popup_sub_pane_cp20

0x8e49,	// (0x0008ec7f) list_vitu2_match_list_pane

0xca08,	// (0x0009283e) bg_popup_sub_pane_cp20_g1

0xca10,	// (0x00092846) bg_popup_sub_pane_cp20_g2

0x28d6,	// (0x0008870c) bg_popup_sub_pane_cp20_g3

0xca18,	// (0x0009284e) bg_popup_sub_pane_cp20_g4

0x28b6,	// (0x000886ec) bg_popup_sub_pane_cp20_g5

0xcc6b,	// (0x00092aa1) bg_popup_sub_pane_cp20_g6

0xca28,	// (0x0009285e) bg_popup_sub_pane_cp20_g7

0xca30,	// (0x00092866) bg_popup_sub_pane_cp20_g8

0xca38,	// (0x0009286e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00095823) bg_popup_sub_pane_cp20_g

0xeffe,	// (0x00094e34) list_vitu2_match_list_item_pane_ParamLimits

0xeffe,	// (0x00094e34) list_vitu2_match_list_item_pane

0xf010,	// (0x00094e46) list_vitu2_match_list_item_pane_t1

0xe7c8,	// (0x000945fe) bg_popup_sub_pane_cp21

0x39da,	// (0x00089810) grid_vitu2_dropdown_list_pane

0x8e67,	// (0x0008ec9d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8e67,	// (0x0008ec9d) cell_vitu2_dropdown_list_char_pane

0x8e88,	// (0x0008ecbe) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8e88,	// (0x0008ecbe) cell_vitu2_dropdown_list_ctrl_pane

0xcc73,	// (0x00092aa9) cell_vitu2_dropdown_list_char_pane_g1

0xcc7c,	// (0x00092ab2) cell_vitu2_dropdown_list_char_pane_g2

0xcc85,	// (0x00092abb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00095840) cell_vitu2_dropdown_list_char_pane_g

0x8eb4,	// (0x0008ecea) cell_vitu2_dropdown_list_char_pane_t1

0x8ec2,	// (0x0008ecf8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8ec2,	// (0x0008ecf8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8ecf,	// (0x0008ed05) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8ecf,	// (0x0008ed05) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8edc,	// (0x0008ed12) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8edc,	// (0x0008ed12) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8ee9,	// (0x0008ed1f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8ee9,	// (0x0008ed1f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbe01,	// (0x00091c37) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbe01,	// (0x00091c37) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00095847) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00095847) cell_vitu2_dropdown_list_ctrl_pane_g

0x8f05,	// (0x0008ed3b) aid_size_cell_gallery2_ParamLimits

0x8f05,	// (0x0008ed3b) aid_size_cell_gallery2

0x8f23,	// (0x0008ed59) grid_gallery2_pane_ParamLimits

0x8f23,	// (0x0008ed59) grid_gallery2_pane

0x8f3d,	// (0x0008ed73) scroll_pane_cp029_ParamLimits

0x8f3d,	// (0x0008ed73) scroll_pane_cp029

0x8f49,	// (0x0008ed7f) cell_gallery2_pane_ParamLimits

0x8f49,	// (0x0008ed7f) cell_gallery2_pane

0xcc8e,	// (0x00092ac4) cell_gallery2_pane_g2

0x8fa4,	// (0x0008edda) cell_gallery2_pane_g3

0xcc96,	// (0x00092acc) cell_gallery2_pane_g4

0xcc9e,	// (0x00092ad4) cell_gallery2_pane_g5

0x1eb7,	// (0x00087ced) grid_highlight_pane_cp10

0x85ea,	// (0x0008e420) popup_vitu2_match_list_window_ParamLimits

0x8601,	// (0x0008e437) popup_vitu2_query_window_ParamLimits

0x8601,	// (0x0008e437) popup_vitu2_query_window

0xe7c8,	// (0x000945fe) bg_vitu2_candi_button_pane

0xcc73,	// (0x00092aa9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcc7c,	// (0x00092ab2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcc85,	// (0x00092abb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05e4,	// (0x0008641a) bg_button_pane_cp015

0x8fac,	// (0x0008ede2) bg_button_pane_cp016

0x8fbf,	// (0x0008edf5) bg_button_pane_cp017

0xb67a,	// (0x000914b0) bg_popup_sub_pane_cp22

0xcca6,	// (0x00092adc) popup_vitu2_query_window_g1

0x0617,	// (0x0008644d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00095852) popup_vitu2_query_window_g

0x0636,	// (0x0008646c) popup_vitu2_query_window_t1_ParamLimits

0x0636,	// (0x0008646c) popup_vitu2_query_window_t1

0x066b,	// (0x000864a1) popup_vitu2_query_window_t2_ParamLimits

0x066b,	// (0x000864a1) popup_vitu2_query_window_t2

0x067d,	// (0x000864b3) popup_vitu2_query_window_t3_ParamLimits

0x067d,	// (0x000864b3) popup_vitu2_query_window_t3

0x8fe3,	// (0x0008ee19) popup_vitu2_query_window_t4_ParamLimits

0x8fe3,	// (0x0008ee19) popup_vitu2_query_window_t4

0x9004,	// (0x0008ee3a) popup_vitu2_query_window_t5_ParamLimits

0x9004,	// (0x0008ee3a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00095859) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00095859) popup_vitu2_query_window_t

0xcb0a,	// (0x00092940) main_cset_text_pane

0x8a28,	// (0x0008e85e) aid_area_touch_slider_ParamLimits

0x8a44,	// (0x0008e87a) cset_slider_pane_ParamLimits

0x8a6e,	// (0x0008e8a4) main_cset_slider_pane_g1_ParamLimits

0x8a83,	// (0x0008e8b9) main_cset_slider_pane_g2_ParamLimits

0xcb2b,	// (0x00092961) main_cset_slider_pane_g3_ParamLimits

0xcb2b,	// (0x00092961) main_cset_slider_pane_g3

0x8a98,	// (0x0008e8ce) main_cset_slider_pane_g4_ParamLimits

0x8a98,	// (0x0008e8ce) main_cset_slider_pane_g4

0x8aa7,	// (0x0008e8dd) main_cset_slider_pane_g5_ParamLimits

0x8aa7,	// (0x0008e8dd) main_cset_slider_pane_g5

0x8ab3,	// (0x0008e8e9) main_cset_slider_pane_g6_ParamLimits

0x8ab3,	// (0x0008e8e9) main_cset_slider_pane_g6

0xf976,	// (0x000957ac) main_cset_slider_pane_g_ParamLimits

0xcb5b,	// (0x00092991) main_cset_slider_pane_t1_ParamLimits

0x8b3f,	// (0x0008e975) main_cset_slider_pane_t2_ParamLimits

0x8b59,	// (0x0008e98f) main_cset_slider_pane_t3_ParamLimits

0x8b73,	// (0x0008e9a9) main_cset_slider_pane_t4_ParamLimits

0x8b8d,	// (0x0008e9c3) main_cset_slider_pane_t5_ParamLimits

0x8ba7,	// (0x0008e9dd) main_cset_slider_pane_t6_ParamLimits

0x8bbc,	// (0x0008e9f2) main_cset_slider_pane_t7_ParamLimits

0x8be6,	// (0x0008ea1c) main_cset_slider_pane_t8_ParamLimits

0x8be6,	// (0x0008ea1c) main_cset_slider_pane_t8

0x8c0e,	// (0x0008ea44) main_cset_slider_pane_t9_ParamLimits

0x8c0e,	// (0x0008ea44) main_cset_slider_pane_t9

0x8c36,	// (0x0008ea6c) main_cset_slider_pane_t10_ParamLimits

0x8c36,	// (0x0008ea6c) main_cset_slider_pane_t10

0x8c5e,	// (0x0008ea94) main_cset_slider_pane_t11_ParamLimits

0x8c5e,	// (0x0008ea94) main_cset_slider_pane_t11

0x8c86,	// (0x0008eabc) main_cset_slider_pane_t12_ParamLimits

0x8c86,	// (0x0008eabc) main_cset_slider_pane_t12

0x8ca3,	// (0x0008ead9) main_cset_slider_pane_t13_ParamLimits

0x8ca3,	// (0x0008ead9) main_cset_slider_pane_t13

0xf99b,	// (0x000957d1) main_cset_slider_pane_t_ParamLimits

0xe7c8,	// (0x000945fe) bg_popup_sub_pane_cp011

0xccb2,	// (0x00092ae8) main_cset_text_pane_g1

0xccba,	// (0x00092af0) main_cset_text_pane_t1

0xccc8,	// (0x00092afe) main_cset_text_pane_t2

0xccd6,	// (0x00092b0c) main_cset_text_pane_t3

0xcce4,	// (0x00092b1a) main_cset_text_pane_t4

0xccf2,	// (0x00092b28) main_cset_text_pane_t5

0xcd00,	// (0x00092b36) main_cset_text_pane_t6

0xcd0e,	// (0x00092b44) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00095868) main_cset_text_pane_t

0xe7c8,	// (0x000945fe) main_cam4_burst_pane

0xe7c8,	// (0x000945fe) main_cam5_pane

0x8967,	// (0x0008e79d) bg_button_pane_cp019

0x8970,	// (0x0008e7a6) bg_button_pane_cp020

0xcb37,	// (0x0009296d) main_cset_slider_pane_g7_ParamLimits

0xcb37,	// (0x0009296d) main_cset_slider_pane_g7

0xcb43,	// (0x00092979) main_cset_slider_pane_g8_ParamLimits

0xcb43,	// (0x00092979) main_cset_slider_pane_g8

0x8ac7,	// (0x0008e8fd) main_cset_slider_pane_g9_ParamLimits

0x8ac7,	// (0x0008e8fd) main_cset_slider_pane_g9

0x8ad3,	// (0x0008e909) main_cset_slider_pane_g10_ParamLimits

0x8ad3,	// (0x0008e909) main_cset_slider_pane_g10

0x8adf,	// (0x0008e915) main_cset_slider_pane_g11_ParamLimits

0x8adf,	// (0x0008e915) main_cset_slider_pane_g11

0x8aeb,	// (0x0008e921) main_cset_slider_pane_g12_ParamLimits

0x8aeb,	// (0x0008e921) main_cset_slider_pane_g12

0x8af7,	// (0x0008e92d) main_cset_slider_pane_g13_ParamLimits

0x8af7,	// (0x0008e92d) main_cset_slider_pane_g13

0x8b03,	// (0x0008e939) main_cset_slider_pane_g14_ParamLimits

0x8b03,	// (0x0008e939) main_cset_slider_pane_g14

0x8b0f,	// (0x0008e945) main_cset_slider_pane_g15_ParamLimits

0x8b0f,	// (0x0008e945) main_cset_slider_pane_g15

0xcb89,	// (0x000929bf) main_cset_slider_pane_t14_ParamLimits

0xcb89,	// (0x000929bf) main_cset_slider_pane_t14

0xcbc2,	// (0x000929f8) main_cset_slider_pane_t15_ParamLimits

0xcbc2,	// (0x000929f8) main_cset_slider_pane_t15

0x9025,	// (0x0008ee5b) aid_cam4_burst_size_cell_ParamLimits

0x9025,	// (0x0008ee5b) aid_cam4_burst_size_cell

0x9045,	// (0x0008ee7b) grid_cam4_burst_pane_ParamLimits

0x9045,	// (0x0008ee7b) grid_cam4_burst_pane

0x907d,	// (0x0008eeb3) linegrid_cam4_burst_pane_ParamLimits

0x907d,	// (0x0008eeb3) linegrid_cam4_burst_pane

0xcd1c,	// (0x00092b52) scroll_pane_cp30_ParamLimits

0xcd1c,	// (0x00092b52) scroll_pane_cp30

0x90a1,	// (0x0008eed7) cell_cam4_burst_pane_ParamLimits

0x90a1,	// (0x0008eed7) cell_cam4_burst_pane

0xcd28,	// (0x00092b5e) linegrid_cam4_burst_pane_g1_ParamLimits

0xcd28,	// (0x00092b5e) linegrid_cam4_burst_pane_g1

0x90ee,	// (0x0008ef24) linegrid_cam4_burst_pane_g2_ParamLimits

0x90ee,	// (0x0008ef24) linegrid_cam4_burst_pane_g2

0xcd35,	// (0x00092b6b) linegrid_cam4_burst_pane_g3_ParamLimits

0xcd35,	// (0x00092b6b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00095877) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00095877) linegrid_cam4_burst_pane_g

0x90ff,	// (0x0008ef35) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x90ff,	// (0x0008ef35) linegrid_cam4_burst_pane_g3_copy1

0xcd42,	// (0x00092b78) linegrid_cam4_burst_pane_g4_ParamLimits

0xcd42,	// (0x00092b78) linegrid_cam4_burst_pane_g4

0x9119,	// (0x0008ef4f) linegrid_cam4_burst_pane_g5_ParamLimits

0x9119,	// (0x0008ef4f) linegrid_cam4_burst_pane_g5

0x912a,	// (0x0008ef60) linegrid_cam4_burst_pane_g6_ParamLimits

0x912a,	// (0x0008ef60) linegrid_cam4_burst_pane_g6

0xcd4f,	// (0x00092b85) linegrid_cam4_burst_pane_g7_ParamLimits

0xcd4f,	// (0x00092b85) linegrid_cam4_burst_pane_g7

0x9141,	// (0x0008ef77) cell_cam4_burst_pane_g1

0xcd68,	// (0x00092b9e) main_cam5_pane_t1_ParamLimits

0xcd68,	// (0x00092b9e) main_cam5_pane_t1

0xcd7a,	// (0x00092bb0) main_cam5_pane_t2_ParamLimits

0xcd7a,	// (0x00092bb0) main_cam5_pane_t2

0xcd8c,	// (0x00092bc2) main_cam5_pane_t3_ParamLimits

0xcd8c,	// (0x00092bc2) main_cam5_pane_t3

0xcd9e,	// (0x00092bd4) main_cam5_pane_t4_ParamLimits

0xcd9e,	// (0x00092bd4) main_cam5_pane_t4

0xcdb6,	// (0x00092bec) main_cam5_pane_t5_ParamLimits

0xcdb6,	// (0x00092bec) main_cam5_pane_t5

0xcdca,	// (0x00092c00) main_cam5_pane_t6_ParamLimits

0xcdca,	// (0x00092c00) main_cam5_pane_t6

0xcdde,	// (0x00092c14) main_cam5_pane_t7_ParamLimits

0xcdde,	// (0x00092c14) main_cam5_pane_t7

0xcdf0,	// (0x00092c26) main_cam5_pane_t8_ParamLimits

0xcdf0,	// (0x00092c26) main_cam5_pane_t8

0xce0c,	// (0x00092c42) main_cam5_pane_t9_ParamLimits

0xce0c,	// (0x00092c42) main_cam5_pane_t9

0xce1e,	// (0x00092c54) main_cam5_pane_t10_ParamLimits

0xce1e,	// (0x00092c54) main_cam5_pane_t10

0xce30,	// (0x00092c66) main_cam5_pane_t11_ParamLimits

0xce30,	// (0x00092c66) main_cam5_pane_t11

0xce42,	// (0x00092c78) main_cam5_pane_t12_ParamLimits

0xce42,	// (0x00092c78) main_cam5_pane_t12

0xce57,	// (0x00092c8d) main_cam5_pane_t13_ParamLimits

0xce57,	// (0x00092c8d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00095883) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00095883) main_cam5_pane_t

0x121d,	// (0x00087053) popup_scut_keymap_window_ParamLimits

0x121d,	// (0x00087053) popup_scut_keymap_window

0x9154,	// (0x0008ef8a) aid_size_cell_brow_shortcut

0x1eb7,	// (0x00087ced) bg_popup_window_pane_cp010

0x9160,	// (0x0008ef96) grid_scut_pane

0x916c,	// (0x0008efa2) cell_scut_pane_ParamLimits

0x916c,	// (0x0008efa2) cell_scut_pane

0x9183,	// (0x0008efb9) cell_scut_pane_g1

0xce74,	// (0x00092caa) cell_scut_pane_t1

0xce83,	// (0x00092cb9) cell_scut_pane_t2

0x918c,	// (0x0008efc2) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0009589e) cell_scut_pane_t

0x7060,	// (0x0008ce96) main_mup3_pane_g8_ParamLimits

0x7060,	// (0x0008ce96) main_mup3_pane_g8

0x84e3,	// (0x0008e319) area_vitu2_query_pane_ParamLimits

0x84e3,	// (0x0008e319) area_vitu2_query_pane

0x05f6,	// (0x0008642c) input_focus_pane_cp08

0xce92,	// (0x00092cc8) area_vitu2_query_pane_g1

0x06fb,	// (0x00086531) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000958a5) area_vitu2_query_pane_g

0x919a,	// (0x0008efd0) area_vitu2_query_pane_t1_ParamLimits

0x919a,	// (0x0008efd0) area_vitu2_query_pane_t1

0x91ae,	// (0x0008efe4) area_vitu2_query_pane_t2_ParamLimits

0x91ae,	// (0x0008efe4) area_vitu2_query_pane_t2

0x070c,	// (0x00086542) area_vitu2_query_pane_t3_ParamLimits

0x070c,	// (0x00086542) area_vitu2_query_pane_t3

0xce9e,	// (0x00092cd4) area_vitu2_query_pane_t4_ParamLimits

0xce9e,	// (0x00092cd4) area_vitu2_query_pane_t4

0xcec6,	// (0x00092cfc) area_vitu2_query_pane_t5_ParamLimits

0xcec6,	// (0x00092cfc) area_vitu2_query_pane_t5

0xceee,	// (0x00092d24) area_vitu2_query_pane_t6_ParamLimits

0xceee,	// (0x00092d24) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000958aa) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000958aa) area_vitu2_query_pane_t

0x91c2,	// (0x0008eff8) bg_button_pane_cp018

0x91d0,	// (0x0008f006) bg_button_pane_cp021

0x0734,	// (0x0008656a) bg_button_pane_cp022

0x0743,	// (0x00086579) input_focus_pane_cp09

0x3e31,	// (0x00089c67) aid_size_touch_mv_arrow_left

0x3e5a,	// (0x00089c90) aid_size_touch_mv_arrow_right

0x8b27,	// (0x0008e95d) main_cset_slider_pane_g16_ParamLimits

0x8b27,	// (0x0008e95d) main_cset_slider_pane_g16

0x8b33,	// (0x0008e969) main_cset_slider_pane_g17_ParamLimits

0x8b33,	// (0x0008e969) main_cset_slider_pane_g17

0x9141,	// (0x0008ef77) cell_cam4_burst_pane_g1_ParamLimits

0xe7c8,	// (0x000945fe) compa_mode_pane

0x8d0d,	// (0x0008eb43) popup_vtel_slider_window_g3_ParamLimits

0x8d0d,	// (0x0008eb43) popup_vtel_slider_window_g3

0x8d24,	// (0x0008eb5a) popup_vtel_slider_window_g4_ParamLimits

0x8d24,	// (0x0008eb5a) popup_vtel_slider_window_g4

0x8d3b,	// (0x0008eb71) popup_vtel_slider_window_t1_ParamLimits

0x8d3b,	// (0x0008eb71) popup_vtel_slider_window_t1

0xe7c8,	// (0x000945fe) main_cl_pane

0xb6a2,	// (0x000914d8) popup_imed_adjust2_window_ParamLimits

0xb67a,	// (0x000914b0) bg_tb_trans_pane_cp05_ParamLimits

0xc11c,	// (0x00091f52) popup_imed_adjust2_window_g1_ParamLimits

0xc12b,	// (0x00091f61) popup_imed_adjust2_window_g2_ParamLimits

0xc12b,	// (0x00091f61) popup_imed_adjust2_window_g2

0xc137,	// (0x00091f6d) popup_imed_adjust2_window_g3_ParamLimits

0xc137,	// (0x00091f6d) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00095615) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00095615) popup_imed_adjust2_window_g

0xc143,	// (0x00091f79) popup_imed_adjust2_window_t1_ParamLimits

0xc15b,	// (0x00091f91) slider_imed_adjust_pane_ParamLimits

0xc16f,	// (0x00091fa5) slider_imed_adjust_pane_g1_ParamLimits

0xc17f,	// (0x00091fb5) slider_imed_adjust_pane_g2_ParamLimits

0xc18f,	// (0x00091fc5) slider_imed_adjust_pane_g3_ParamLimits

0xc1a0,	// (0x00091fd6) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009561c) slider_imed_adjust_pane_g_ParamLimits

0x826c,	// (0x0008e0a2) aid_touch_area_cam4_ParamLimits

0x826c,	// (0x0008e0a2) aid_touch_area_cam4

0xc88b,	// (0x000926c1) battery_pane_cp01

0x833b,	// (0x0008e171) main_camera4_pane_g6_ParamLimits

0x833b,	// (0x0008e171) main_camera4_pane_g6

0x8365,	// (0x0008e19b) main_camera4_pane_t2_ParamLimits

0x8365,	// (0x0008e19b) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009571f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009571f) main_camera4_pane_t

0x839a,	// (0x0008e1d0) aid_touch_area_vid4_ParamLimits

0x839a,	// (0x0008e1d0) aid_touch_area_vid4

0x83ee,	// (0x0008e224) main_video4_pane_g5_ParamLimits

0x83ee,	// (0x0008e224) main_video4_pane_g5

0x8413,	// (0x0008e249) vid4_progress_pane_ParamLimits

0x8413,	// (0x0008e249) vid4_progress_pane

0xcb4f,	// (0x00092985) main_cset_slider_pane_g18_ParamLimits

0xcb4f,	// (0x00092985) main_cset_slider_pane_g18

0xcd5c,	// (0x00092b92) cell_cam4_burst_pane_g2_ParamLimits

0xcd5c,	// (0x00092b92) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0009587e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009587e) cell_cam4_burst_pane_g

0xef05,	// (0x00094d3b) bg_cl_pane_ParamLimits

0xef05,	// (0x00094d3b) bg_cl_pane

0x91dc,	// (0x0008f012) cl_header_pane_ParamLimits

0x91dc,	// (0x0008f012) cl_header_pane

0x91f0,	// (0x0008f026) cl_listscroll_pane_ParamLimits

0x91f0,	// (0x0008f026) cl_listscroll_pane

0xcf3a,	// (0x00092d70) bg_cl_pane_g1

0xcf42,	// (0x00092d78) bg_cl_pane_g2

0xcf4a,	// (0x00092d80) bg_cl_pane_g3

0xcf52,	// (0x00092d88) bg_cl_pane_g4

0xcf5a,	// (0x00092d90) bg_cl_pane_g5

0xcf62,	// (0x00092d98) bg_cl_pane_g6

0xcf6a,	// (0x00092da0) bg_cl_pane_g7

0xcf72,	// (0x00092da8) bg_cl_pane_g8

0xcf7a,	// (0x00092db0) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000958b9) bg_cl_pane_g

0x9200,	// (0x0008f036) aid_height_cl_leading_ParamLimits

0x9200,	// (0x0008f036) aid_height_cl_leading

0x920c,	// (0x0008f042) aid_height_cl_text_ParamLimits

0x920c,	// (0x0008f042) aid_height_cl_text

0x125d,	// (0x00087093) bg_cl_header_pane_ParamLimits

0x125d,	// (0x00087093) bg_cl_header_pane

0x922b,	// (0x0008f061) cl_header_pane_g1_ParamLimits

0x922b,	// (0x0008f061) cl_header_pane_g1

0x9241,	// (0x0008f077) cl_header_pane_t1_ParamLimits

0x9241,	// (0x0008f077) cl_header_pane_t1

0xcf82,	// (0x00092db8) cl_list_pane

0xcb22,	// (0x00092958) hc_scroll_pane_cp01

0x28b6,	// (0x000886ec) bg_cl_header_pane_g1

0xca08,	// (0x0009283e) bg_cl_header_pane_g2

0x28d6,	// (0x0008870c) bg_cl_header_pane_g3

0xca18,	// (0x0009284e) bg_cl_header_pane_g4

0xca10,	// (0x00092846) bg_cl_header_pane_g5

0xcc6b,	// (0x00092aa1) bg_cl_header_pane_g6

0xca30,	// (0x00092866) bg_cl_header_pane_g7

0xca38,	// (0x0009286e) bg_cl_header_pane_g8

0xca28,	// (0x0009285e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000958cc) bg_cl_header_pane_g

0x925a,	// (0x0008f090) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x925a,	// (0x0008f090) hc_cl_list_double_graphic_heading_pane

0x926b,	// (0x0008f0a1) hc_cl_list_single_graphic_pane_ParamLimits

0x926b,	// (0x0008f0a1) hc_cl_list_single_graphic_pane

0x9281,	// (0x0008f0b7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9281,	// (0x0008f0b7) hc_cl_list_single_graphic_pane_g1

0x928d,	// (0x0008f0c3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x928d,	// (0x0008f0c3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000958df) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000958df) hc_cl_list_single_graphic_pane_g

0x92a1,	// (0x0008f0d7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x92a1,	// (0x0008f0d7) hc_cl_list_single_graphic_pane_t1

0x9281,	// (0x0008f0b7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9281,	// (0x0008f0b7) hc_cl_list_double_graphic_heading_pane_g1

0x92b6,	// (0x0008f0ec) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x92b6,	// (0x0008f0ec) hc_cl_list_double_graphic_heading_pane_g2

0x92ca,	// (0x0008f100) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x92ca,	// (0x0008f100) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000958e4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000958e4) hc_cl_list_double_graphic_heading_pane_g

0x92de,	// (0x0008f114) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x92de,	// (0x0008f114) hc_cl_list_double_graphic_heading_pane_t1

0x92f3,	// (0x0008f129) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x92f3,	// (0x0008f129) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000958eb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000958eb) hc_cl_list_double_graphic_heading_pane_t

0xf026,	// (0x00094e5c) vid4_progress_pane_g1

0xf036,	// (0x00094e6c) vid4_progress_pane_g2

0x9308,	// (0x0008f13e) vid4_progress_pane_g3

0xf046,	// (0x00094e7c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000958f0) vid4_progress_pane_g

0x931a,	// (0x0008f150) vid4_progress_pane_t1

0xf05e,	// (0x00094e94) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000958fb) vid4_progress_pane_t

0x9332,	// (0x0008f168) wait_bar_pane_cp07

0xb988,	// (0x000917be) blid_firmament_pane_ParamLimits

0xb9cb,	// (0x00091801) popup_blid_sat_info2_window_g1

0xb9ef,	// (0x00091825) popup_blid_sat_info2_window_t3

0xb9fd,	// (0x00091833) popup_blid_sat_info2_window_t4

0xba0b,	// (0x00091841) popup_blid_sat_info2_window_t5

0xba19,	// (0x0009184f) popup_blid_sat_info2_window_t6

0xba29,	// (0x0009185f) popup_blid_sat_info2_window_t7

0xba37,	// (0x0009186d) popup_blid_sat_info2_window_t8

0xba45,	// (0x0009187b) popup_blid_sat_info2_window_t9

0xba53,	// (0x00091889) popup_blid_sat_info2_window_t10

0xbb15,	// (0x0009194b) aid_firma_cardinal_ParamLimits

0xbb29,	// (0x0009195f) blid_firmament_pane_t1_ParamLimits

0xbb40,	// (0x00091976) blid_firmament_pane_t2_ParamLimits

0xbb57,	// (0x0009198d) blid_firmament_pane_t3_ParamLimits

0xbb6e,	// (0x000919a4) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00095509) blid_firmament_pane_t_ParamLimits

0xbb85,	// (0x000919bb) blid_sat_info_pane_ParamLimits

0x125d,	// (0x00087093) main_cam_set_pane_ParamLimits

0x7924,	// (0x0008d75a) aid_size_cell_colour_35_ParamLimits

0x7944,	// (0x0008d77a) aid_size_cell_colour_112_ParamLimits

0x7964,	// (0x0008d79a) aid_size_cell_effect_ParamLimits

0xb67a,	// (0x000914b0) bg_tb_trans_pane_cp02_ParamLimits

0x3726,	// (0x0008955c) heading_imed_pane_ParamLimits

0x7984,	// (0x0008d7ba) listscroll_imed_pane_ParamLimits

0x54ca,	// (0x0008b300) popup_call2_audio_first_window_g5_ParamLimits

0x54ca,	// (0x0008b300) popup_call2_audio_first_window_g5

0x7f17,	// (0x0008dd4d) aid_size_touch_image3_arrow_left_ParamLimits

0x7f17,	// (0x0008dd4d) aid_size_touch_image3_arrow_left

0x7f43,	// (0x0008dd79) aid_size_touch_image3_arrow_right_ParamLimits

0x7f43,	// (0x0008dd79) aid_size_touch_image3_arrow_right

0xf073,	// (0x00094ea9) vid4_progress_pane_t3

0x7c97,	// (0x0008dacd) main_hwr_training_symbol_option_pane_ParamLimits

0x7c97,	// (0x0008dacd) main_hwr_training_symbol_option_pane

0xc409,	// (0x0009223f) popup_hwr_training_preview_window_ParamLimits

0xc409,	// (0x0009223f) popup_hwr_training_preview_window

0x7cb7,	// (0x0008daed) hwr_training_navi_pane_g5_ParamLimits

0x7cb7,	// (0x0008daed) hwr_training_navi_pane_g5

0xc9e4,	// (0x0009281a) popup_char_count_window

0x125d,	// (0x00087093) bg_popup_sub_pane_cp20_ParamLimits

0x8e49,	// (0x0008ec7f) list_vitu2_match_list_pane_ParamLimits

0x8e58,	// (0x0008ec8e) vitu2_page_scroll_pane_ParamLimits

0x8e58,	// (0x0008ec8e) vitu2_page_scroll_pane

0xcfa5,	// (0x00092ddb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcfa5,	// (0x00092ddb) list_single_hwr_training_symbol_option_pane

0xcfb8,	// (0x00092dee) list_single_hwr_training_symbol_option_pane_g1

0xcfc0,	// (0x00092df6) list_single_hwr_training_symbol_option_pane_t1

0xcfce,	// (0x00092e04) bg_button_pane_cp023

0xcfd7,	// (0x00092e0d) bg_button_pane_cp024

0x9360,	// (0x0008f196) vitu2_page_scroll_pane_g1

0x9368,	// (0x0008f19e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00095902) vitu2_page_scroll_pane_g

0x9370,	// (0x0008f1a6) vitu2_page_scroll_pane_t1

0xb8a4,	// (0x000916da) popup_char_count_window_g1

0xd00a,	// (0x00092e40) popup_char_count_window_g2

0xd013,	// (0x00092e49) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00095907) popup_char_count_window_g

0xd01c,	// (0x00092e52) popup_char_count_window_t1

0xe7c8,	// (0x000945fe) main_vded2_pane

0xc108,	// (0x00091f3e) aid_size_cell_imed_line

0xc112,	// (0x00091f48) grid_imed_line_width_pane

0xc955,	// (0x0009278b) vid4_indicators_pane_g4

0xd02a,	// (0x00092e60) cell_imed_line_width_pane_ParamLimits

0xd02a,	// (0x00092e60) cell_imed_line_width_pane

0xd03e,	// (0x00092e74) cell_imed_line_width_pane_g1

0xd047,	// (0x00092e7d) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0009590e) cell_imed_line_width_pane_g

0x937f,	// (0x0008f1b5) main_vded2_pane_g1_ParamLimits

0x937f,	// (0x0008f1b5) main_vded2_pane_g1

0x9395,	// (0x0008f1cb) main_vded2_pane_g2_ParamLimits

0x9395,	// (0x0008f1cb) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00095913) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00095913) main_vded2_pane_g

0x93a7,	// (0x0008f1dd) vded2_slider_pane_ParamLimits

0x93a7,	// (0x0008f1dd) vded2_slider_pane

0x93b7,	// (0x0008f1ed) aid_size_touch_vded2_end

0x93c1,	// (0x0008f1f7) aid_size_touch_vded2_playhead

0xd04f,	// (0x00092e85) aid_size_touch_vded2_start

0xd057,	// (0x00092e8d) vded2_slider_bg_pane

0xd060,	// (0x00092e96) vded2_slider_pane_g1

0xd069,	// (0x00092e9f) vded2_slider_pane_g2

0x93cb,	// (0x0008f201) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00095918) vded2_slider_pane_g

0xd071,	// (0x00092ea7) vded2_slider_bg_pane_g1

0xd07a,	// (0x00092eb0) vded2_slider_bg_pane_g2

0xd083,	// (0x00092eb9) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0009591f) vded2_slider_bg_pane_g

0x4695,	// (0x0008a4cb) aid_postcard_touch_down_pane_ParamLimits

0x4695,	// (0x0008a4cb) aid_postcard_touch_down_pane

0x46ab,	// (0x0008a4e1) aid_postcard_touch_up_pane_ParamLimits

0x46ab,	// (0x0008a4e1) aid_postcard_touch_up_pane

0xe7c8,	// (0x000945fe) main_blid2_pane

0xb688,	// (0x000914be) popup_blid2_search_window

0xe7c8,	// (0x000945fe) blid2_gps_pane

0xe7c8,	// (0x000945fe) blid2_navig_pane

0xe7c8,	// (0x000945fe) blid2_search_pane

0xe7c8,	// (0x000945fe) blid2_tripm_pane

0x93d6,	// (0x0008f20c) blid2_search_pane_g1_ParamLimits

0x93d6,	// (0x0008f20c) blid2_search_pane_g1

0x93f0,	// (0x0008f226) blid2_search_pane_t1_ParamLimits

0x93f0,	// (0x0008f226) blid2_search_pane_t1

0x9402,	// (0x0008f238) aid_size_cell_blid2_gps_ParamLimits

0x9402,	// (0x0008f238) aid_size_cell_blid2_gps

0x941a,	// (0x0008f250) blid2_gps_pane_g1_ParamLimits

0x941a,	// (0x0008f250) blid2_gps_pane_g1

0x942e,	// (0x0008f264) grid_blid2_satellite_pane_ParamLimits

0x942e,	// (0x0008f264) grid_blid2_satellite_pane

0x9448,	// (0x0008f27e) blid2_navig_pane_g1_ParamLimits

0x9448,	// (0x0008f27e) blid2_navig_pane_g1

0x9454,	// (0x0008f28a) blid2_navig_pane_t1_ParamLimits

0x9454,	// (0x0008f28a) blid2_navig_pane_t1

0x946f,	// (0x0008f2a5) blid2_navig_pane_t2_ParamLimits

0x946f,	// (0x0008f2a5) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00095926) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00095926) blid2_navig_pane_t

0x948a,	// (0x0008f2c0) blid2_navig_ring_pane_ParamLimits

0x948a,	// (0x0008f2c0) blid2_navig_ring_pane

0x94a3,	// (0x0008f2d9) blid2_speed_pane_ParamLimits

0x94a3,	// (0x0008f2d9) blid2_speed_pane

0x94af,	// (0x0008f2e5) blid2_tripm_pane_g1_ParamLimits

0x94af,	// (0x0008f2e5) blid2_tripm_pane_g1

0x94c8,	// (0x0008f2fe) blid2_tripm_pane_g2_ParamLimits

0x94c8,	// (0x0008f2fe) blid2_tripm_pane_g2

0x94dc,	// (0x0008f312) blid2_tripm_pane_g3_ParamLimits

0x94dc,	// (0x0008f312) blid2_tripm_pane_g3

0x94f0,	// (0x0008f326) blid2_tripm_pane_g4_ParamLimits

0x94f0,	// (0x0008f326) blid2_tripm_pane_g4

0x9504,	// (0x0008f33a) blid2_tripm_pane_g5_ParamLimits

0x9504,	// (0x0008f33a) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0009592b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0009592b) blid2_tripm_pane_g

0x952a,	// (0x0008f360) blid2_tripm_pane_t1_ParamLimits

0x952a,	// (0x0008f360) blid2_tripm_pane_t1

0x9545,	// (0x0008f37b) blid2_tripm_pane_t2_ParamLimits

0x9545,	// (0x0008f37b) blid2_tripm_pane_t2

0x955e,	// (0x0008f394) blid2_tripm_pane_t3_ParamLimits

0x955e,	// (0x0008f394) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00095938) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00095938) blid2_tripm_pane_t

0x95a5,	// (0x0008f3db) cell_blid2_satellite_pane_ParamLimits

0x95a5,	// (0x0008f3db) cell_blid2_satellite_pane

0x95c3,	// (0x0008f3f9) cell_blid2_satellite_pane_g1

0xd08c,	// (0x00092ec2) cell_blid2_satellite_pane_t1

0xbb95,	// (0x000919cb) blid2_speed_pane_g1

0xd09a,	// (0x00092ed0) blid2_speed_pane_t1

0xd0a8,	// (0x00092ede) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00095941) blid2_speed_pane_t

0xbb95,	// (0x000919cb) blid2_navig_ring_pane_g1

0x95cc,	// (0x0008f402) blid2_navig_ring_pane_g2

0x95d4,	// (0x0008f40a) blid2_navig_ring_pane_g3

0x95dc,	// (0x0008f412) blid2_navig_ring_pane_g4

0x95e4,	// (0x0008f41a) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00095946) blid2_navig_ring_pane_g

0xe7c8,	// (0x000945fe) bg_popup_window_pane_cp011

0xd0b6,	// (0x00092eec) popup_blid2_search_window_g1

0xd0be,	// (0x00092ef4) popup_blid2_search_window_t1

0xd0cc,	// (0x00092f02) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00095951) popup_blid2_search_window_t

0x2782,	// (0x000885b8) main_browser_pane_g1

0xef05,	// (0x00094d3b) main_browser_pane_ParamLimits

0x125d,	// (0x00087093) bg_button_pane_cp011_ParamLimits

0x86fd,	// (0x0008e533) cell_vitu2_function_pane_g1_ParamLimits

0xb67a,	// (0x000914b0) bg_popup_sub_pane_cp22_ParamLimits

0x05f6,	// (0x0008642c) input_focus_pane_cp08_ParamLimits

0x8fd2,	// (0x0008ee08) popup_vitu2_query_button_pane_ParamLimits

0x8fd2,	// (0x0008ee08) popup_vitu2_query_button_pane

0x060d,	// (0x00086443) popup_vitu2_query_input_button_pane

0xcca6,	// (0x00092adc) popup_vitu2_query_window_g1_ParamLimits

0x0617,	// (0x0008644d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00095852) popup_vitu2_query_window_g_ParamLimits

0xe7c8,	// (0x000945fe) bg_button_pane_cp026

0x95ec,	// (0x0008f422) popup_vitu2_query_input_button_pane_g1

0xe7c8,	// (0x000945fe) bg_button_pane_cp025

0xd0da,	// (0x00092f10) popup_vitu2_query_button_pane_t1

0x6d39,	// (0x0008cb6f) main_mp3_pane_t6

0x6d47,	// (0x0008cb7d) popup_slider_window_cp01

0xc8b9,	// (0x000926ef) cam4_battery_pane

0xc912,	// (0x00092748) cam4_battery_pane_cp02

0xf01e,	// (0x00094e54) cam4_battery_pane_cp01

0xf01e,	// (0x00094e54) cam4_battery_pane_cp03

0xbb95,	// (0x000919cb) cam4_battery_pane_g1

0xd0e8,	// (0x00092f1e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00095956) cam4_battery_pane_g

0xba61,	// (0x00091897) popup_blid_sat_info2_window_t11

0x3e31,	// (0x00089c67) aid_size_touch_mv_arrow_left_ParamLimits

0x3e5a,	// (0x00089c90) aid_size_touch_mv_arrow_right_ParamLimits

0x3eb8,	// (0x00089cee) navi_pane_g1_ParamLimits

0x3ec4,	// (0x00089cfa) navi_pane_g2_ParamLimits

0x3ef2,	// (0x00089d28) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0009521b) navi_pane_g_ParamLimits

0x3fb0,	// (0x00089de6) navi_pane_mv_t1_ParamLimits

0x7990,	// (0x0008d7c6) grid_imed_effect_pane_ParamLimits

0x2328,	// (0x0008815e) aid_placing_vt_slider_lsc

0x2338,	// (0x0008816e) aid_placing_vt_slider_prt

0x125d,	// (0x00087093) bg_tb_trans_pane_cp01_ParamLimits

0xbd21,	// (0x00091b57) popup_image_details_window_g1_ParamLimits

0xbd34,	// (0x00091b6a) popup_image_details_window_g2_ParamLimits

0xbd49,	// (0x00091b7f) popup_image_details_window_g3_ParamLimits

0xbd49,	// (0x00091b7f) popup_image_details_window_g3

0xf718,	// (0x0009554e) popup_image_details_window_g_ParamLimits

0xbd5d,	// (0x00091b93) popup_image_details_window_t1_ParamLimits

0xbd6f,	// (0x00091ba5) popup_image_details_window_t2_ParamLimits

0xbd88,	// (0x00091bbe) popup_image_details_window_t3_ParamLimits

0xbd9c,	// (0x00091bd2) popup_image_details_window_t4_ParamLimits

0xbdb7,	// (0x00091bed) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x00095555) popup_image_details_window_t_ParamLimits

0x9218,	// (0x0008f04e) cl_header_name_pane_ParamLimits

0x9218,	// (0x0008f04e) cl_header_name_pane

0x95f4,	// (0x0008f42a) cl_header_name_pane_t1_ParamLimits

0x95f4,	// (0x0008f42a) cl_header_name_pane_t1

0x9615,	// (0x0008f44b) cl_header_name_pane_t2_ParamLimits

0x9615,	// (0x0008f44b) cl_header_name_pane_t2

0x9657,	// (0x0008f48d) cl_header_name_pane_t3_ParamLimits

0x9657,	// (0x0008f48d) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0009595b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0009595b) cl_header_name_pane_t

0x3f81,	// (0x00089db7) navi_pane_mv_g2_ParamLimits

0xc9a1,	// (0x000927d7) field_vitu2_entry_pane_g1_ParamLimits

0xc9ad,	// (0x000927e3) field_vitu2_entry_pane_g2_ParamLimits

0xc9b9,	// (0x000927ef) field_vitu2_entry_pane_g3_ParamLimits

0xc9b9,	// (0x000927ef) field_vitu2_entry_pane_g3

0xf91b,	// (0x00095751) field_vitu2_entry_pane_g_ParamLimits

0xc9ec,	// (0x00092822) cell_vitu2_itu_pane_g1_ParamLimits

0x8691,	// (0x0008e4c7) cell_vitu2_itu_pane_g2_ParamLimits

0x8691,	// (0x0008e4c7) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0009575d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0009575d) cell_vitu2_itu_pane_g

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp05_ParamLimits

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp05

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp03

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp04

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp10_ParamLimits

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp10

0x0734,	// (0x0008656a) bg_vkb2_func_pane_cp08

0x91c2,	// (0x0008eff8) bg_vkb2_func_pane_cp06

0x91d0,	// (0x0008f006) bg_vkb2_func_pane_cp07

0xcfe0,	// (0x00092e16) bg_vkb2_func_pane_cp11_ParamLimits

0xcfe0,	// (0x00092e16) bg_vkb2_func_pane_cp11

0xcff5,	// (0x00092e2b) bg_vkb2_func_pane_cp12_ParamLimits

0xcff5,	// (0x00092e2b) bg_vkb2_func_pane_cp12

0xe7c8,	// (0x000945fe) bg_vkb2_func_pane_cp09

0xca08,	// (0x0009283e) bg_vkb2_func_pane_g1

0x28d6,	// (0x0008870c) bg_vkb2_func_pane_g2

0xca10,	// (0x00092846) bg_vkb2_func_pane_g3

0xca18,	// (0x0009284e) bg_vkb2_func_pane_g4

0xcc6b,	// (0x00092aa1) bg_vkb2_func_pane_g5

0xca30,	// (0x00092866) bg_vkb2_func_pane_g6

0xca38,	// (0x0009286e) bg_vkb2_func_pane_g7

0xca28,	// (0x0009285e) bg_vkb2_func_pane_g8

0x28b6,	// (0x000886ec) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00095962) bg_vkb2_func_pane_g

0x9518,	// (0x0008f34e) blid2_tripm_pane_g6_ParamLimits

0x9518,	// (0x0008f34e) blid2_tripm_pane_g6

0xc6fa,	// (0x00092530) mp4_progress_pane_g1

0x9591,	// (0x0008f3c7) blid2_tripm_values_pane_ParamLimits

0x9591,	// (0x0008f3c7) blid2_tripm_values_pane

0x9688,	// (0x0008f4be) blid2_tripm_values_pane_t1

0x9696,	// (0x0008f4cc) blid2_tripm_values_pane_t2

0x96a4,	// (0x0008f4da) blid2_tripm_values_pane_t3

0x96b2,	// (0x0008f4e8) blid2_tripm_values_pane_t4

0x96c0,	// (0x0008f4f6) blid2_tripm_values_pane_t5

0x96ce,	// (0x0008f504) blid2_tripm_values_pane_t6

0x96dc,	// (0x0008f512) blid2_tripm_values_pane_t7

0x96ea,	// (0x0008f520) blid2_tripm_values_pane_t8

0x96f8,	// (0x0008f52e) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00095975) blid2_tripm_values_pane_t

0x2374,	// (0x000881aa) call_video_pane_t1_ParamLimits

0x2392,	// (0x000881c8) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000950a4) call_video_pane_t_ParamLimits

0x03ea,	// (0x00086220) msg_header_pane_g1_ParamLimits

0x45ff,	// (0x0008a435) msg_header_pane_g2_ParamLimits

0x45ff,	// (0x0008a435) msg_header_pane_g2

0x0001,

0xf488,	// (0x000952be) msg_header_pane_g_ParamLimits

0xf488,	// (0x000952be) msg_header_pane_g

0xef05,	// (0x00094d3b) main_clock2_pane_ParamLimits

0x7691,	// (0x0008d4c7) grid_clock2_toolbar_pane_ParamLimits

0x7691,	// (0x0008d4c7) grid_clock2_toolbar_pane

0x7691,	// (0x0008d4c7) listscroll_clock2_pane_ParamLimits

0x7691,	// (0x0008d4c7) listscroll_clock2_pane

0x7784,	// (0x0008d5ba) main_clock2_pane_t3_ParamLimits

0x7784,	// (0x0008d5ba) main_clock2_pane_t3

0x77a8,	// (0x0008d5de) main_clock2_pane_t4_ParamLimits

0x77a8,	// (0x0008d5de) main_clock2_pane_t4

0xd0f2,	// (0x00092f28) cell_clock2_toolbar_pane

0xd0fa,	// (0x00092f30) cell_clock2_toolbar_pane_cp01

0xd0fa,	// (0x00092f30) cell_clock2_toolbar_pane_cp02

0xd102,	// (0x00092f38) cell_clock2_toolbar_pane_cp03

0xd10a,	// (0x00092f40) list_clock2_pane

0x3bdb,	// (0x00089a11) scroll_pane_cp10

0xd112,	// (0x00092f48) list_single_clock2_pane_ParamLimits

0xd112,	// (0x00092f48) list_single_clock2_pane

0x1eb7,	// (0x00087ced) list_highlight_pane_cp08

0xd11f,	// (0x00092f55) list_single_clock2_pane_t1

0xd12d,	// (0x00092f63) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00095988) list_single_clock2_pane_t

0xe7c8,	// (0x000945fe) bg_button_pane_cp10

0xd13b,	// (0x00092f71) cell_clock2_toolbar_pane_g1

0x4613,	// (0x0008a449) aid_main_viewer_pane_g1_ParamLimits

0x4613,	// (0x0008a449) aid_main_viewer_pane_g1

0x4621,	// (0x0008a457) aid_main_viewer_pane_g2_ParamLimits

0x4621,	// (0x0008a457) aid_main_viewer_pane_g2

0x462f,	// (0x0008a465) aid_main_viewer_pane_g3_ParamLimits

0x462f,	// (0x0008a465) aid_main_viewer_pane_g3

0x463e,	// (0x0008a474) aid_main_viewer_pane_g4_ParamLimits

0x463e,	// (0x0008a474) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000952cf) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000952cf) aid_main_viewer_pane_g

0x5f60,	// (0x0008bd96) main_calc_pane_ParamLimits

0x5f74,	// (0x0008bdaa) main_dialer2_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_cam6_pane

0xe7c8,	// (0x000945fe) main_vid6_pane

0x769d,	// (0x0008d4d3) listscroll_gen_pane_cp06_ParamLimits

0x769d,	// (0x0008d4d3) listscroll_gen_pane_cp06

0x77cb,	// (0x0008d601) main_clock2_pane_t5_ParamLimits

0x77cb,	// (0x0008d601) main_clock2_pane_t5

0x7825,	// (0x0008d65b) aid_call2_pane_cp10_ParamLimits

0x7837,	// (0x0008d66d) aid_call_pane_cp10_ParamLimits

0x3dc0,	// (0x00089bf6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3dc0,	// (0x00089bf6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7849,	// (0x0008d67f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7849,	// (0x0008d67f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3dc0,	// (0x00089bf6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0009560a) popup_clock_analogue_window_cp10_g_ParamLimits

0x785b,	// (0x0008d691) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7ec4,	// (0x0008dcfa) cell_dialer2_keypad_pane_g2_ParamLimits

0x7ec4,	// (0x0008dcfa) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000956f0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000956f0) cell_dialer2_keypad_pane_g

0x7ee0,	// (0x0008dd16) cell_dialer2_keypad_pane_t1

0x8a1a,	// (0x0008e850) main_cset_text2_pane_ParamLimits

0x8a1a,	// (0x0008e850) main_cset_text2_pane

0xce92,	// (0x00092cc8) area_vitu2_query_pane_g1_ParamLimits

0x06fb,	// (0x00086531) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000958a5) area_vitu2_query_pane_g_ParamLimits

0xcf16,	// (0x00092d4c) area_vitu2_query_pane_t7_ParamLimits

0xcf16,	// (0x00092d4c) area_vitu2_query_pane_t7

0x91c2,	// (0x0008eff8) bg_button_pane_cp018_ParamLimits

0x91d0,	// (0x0008f006) bg_button_pane_cp021_ParamLimits

0x0734,	// (0x0008656a) bg_button_pane_cp022_ParamLimits

0x0734,	// (0x0008656a) bg_vkb2_func_pane_cp08_ParamLimits

0x91c2,	// (0x0008eff8) bg_vkb2_func_pane_cp06_ParamLimits

0x91d0,	// (0x0008f006) bg_vkb2_func_pane_cp07_ParamLimits

0x0743,	// (0x00086579) input_focus_pane_cp09_ParamLimits

0xf090,	// (0x00094ec6) cam6_autofocus_pane_ParamLimits

0xf090,	// (0x00094ec6) cam6_autofocus_pane

0x9706,	// (0x0008f53c) cam6_image_uncrop_pane_ParamLimits

0x9706,	// (0x0008f53c) cam6_image_uncrop_pane

0x9715,	// (0x0008f54b) cam6_indi_pane_ParamLimits

0x9715,	// (0x0008f54b) cam6_indi_pane

0x972b,	// (0x0008f561) cam6_mode_pane_ParamLimits

0x972b,	// (0x0008f561) cam6_mode_pane

0x973d,	// (0x0008f573) cam6_timer_pane_ParamLimits

0x973d,	// (0x0008f573) cam6_timer_pane

0x9749,	// (0x0008f57f) cam6_zoom_pane_ParamLimits

0x9749,	// (0x0008f57f) cam6_zoom_pane

0x9755,	// (0x0008f58b) cam6_mode_pane_g1_ParamLimits

0x9755,	// (0x0008f58b) cam6_mode_pane_g1

0x9765,	// (0x0008f59b) cam6_mode_pane_g2_ParamLimits

0x9765,	// (0x0008f59b) cam6_mode_pane_g2

0x9775,	// (0x0008f5ab) cam6_mode_pane_g3_ParamLimits

0x9775,	// (0x0008f5ab) cam6_mode_pane_g3

0x9785,	// (0x0008f5bb) cam6_mode_pane_g4_ParamLimits

0x9785,	// (0x0008f5bb) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0009598d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0009598d) cam6_mode_pane_g

0xd143,	// (0x00092f79) bg_tb_trans_pane_cp08_ParamLimits

0xd143,	// (0x00092f79) bg_tb_trans_pane_cp08

0xd151,	// (0x00092f87) cam6_battery_pane_ParamLimits

0xd151,	// (0x00092f87) cam6_battery_pane

0xd167,	// (0x00092f9d) cam6_indi_pane_g1_ParamLimits

0xd167,	// (0x00092f9d) cam6_indi_pane_g1

0xd179,	// (0x00092faf) cam6_indi_pane_g2_ParamLimits

0xd179,	// (0x00092faf) cam6_indi_pane_g2

0xd18b,	// (0x00092fc1) cam6_indi_pane_g3_ParamLimits

0xd18b,	// (0x00092fc1) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00095996) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00095996) cam6_indi_pane_g

0xd19d,	// (0x00092fd3) cam6_indi_pane_t1_ParamLimits

0xd19d,	// (0x00092fd3) cam6_indi_pane_t1

0x9795,	// (0x0008f5cb) cam6_autofocus_pane_g1

0x979d,	// (0x0008f5d3) cam6_autofocus_pane_g2

0x97a5,	// (0x0008f5db) cam6_autofocus_pane_g3

0x97ad,	// (0x0008f5e3) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0009599d) cam6_autofocus_pane_g

0xd1c3,	// (0x00092ff9) cam6_timer_pane_g1

0xd1cb,	// (0x00093001) cam6_timer_pane_t1

0xd1d9,	// (0x0009300f) cam6_zoom_cont_pane

0xd1e1,	// (0x00093017) cam6_zoom_pane_g1

0xd1e9,	// (0x0009301f) cam6_zoom_pane_g2

0x97b5,	// (0x0008f5eb) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000959a6) cam6_zoom_pane_g

0xbb95,	// (0x000919cb) cam6_battery_pane_g1

0xbb95,	// (0x000919cb) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00095512) cam6_battery_pane_g

0xd1f1,	// (0x00093027) cam6_zoom_cont_pane_g1

0xd1fa,	// (0x00093030) cam6_zoom_cont_pane_g2

0xd203,	// (0x00093039) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000959ad) cam6_zoom_cont_pane_g

0x97d2,	// (0x0008f608) cam6_mode_pane_cp_ParamLimits

0x97d2,	// (0x0008f608) cam6_mode_pane_cp

0x9749,	// (0x0008f57f) cam6_zoom_pane_cp_ParamLimits

0x9749,	// (0x0008f57f) cam6_zoom_pane_cp

0x97e4,	// (0x0008f61a) vid6_image_uncrop_cif_pane_ParamLimits

0x97e4,	// (0x0008f61a) vid6_image_uncrop_cif_pane

0x97f4,	// (0x0008f62a) vid6_image_uncrop_nhd_pane_ParamLimits

0x97f4,	// (0x0008f62a) vid6_image_uncrop_nhd_pane

0x9706,	// (0x0008f53c) vid6_image_uncrop_vga_pane_ParamLimits

0x9706,	// (0x0008f53c) vid6_image_uncrop_vga_pane

0x9803,	// (0x0008f639) vid6_image_uncrop_wvga_pane_ParamLimits

0x9803,	// (0x0008f639) vid6_image_uncrop_wvga_pane

0x9812,	// (0x0008f648) vid6_indi_pane_ParamLimits

0x9812,	// (0x0008f648) vid6_indi_pane

0xd143,	// (0x00092f79) bg_tb_trans_pane_cp09_ParamLimits

0xd143,	// (0x00092f79) bg_tb_trans_pane_cp09

0xd21b,	// (0x00093051) cam6_battery_pane_cp_ParamLimits

0xd21b,	// (0x00093051) cam6_battery_pane_cp

0xd227,	// (0x0009305d) vid6_indi_pane_g1_ParamLimits

0xd227,	// (0x0009305d) vid6_indi_pane_g1

0xd239,	// (0x0009306f) vid6_indi_pane_g2_ParamLimits

0xd239,	// (0x0009306f) vid6_indi_pane_g2

0xd24b,	// (0x00093081) vid6_indi_pane_g3_ParamLimits

0xd24b,	// (0x00093081) vid6_indi_pane_g3

0xd260,	// (0x00093096) vid6_indi_pane_g4_ParamLimits

0xd260,	// (0x00093096) vid6_indi_pane_g4

0xd275,	// (0x000930ab) vid6_indi_pane_g5_ParamLimits

0xd275,	// (0x000930ab) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000959b4) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000959b4) vid6_indi_pane_g

0xd28f,	// (0x000930c5) vid6_indi_pane_t1_ParamLimits

0xd28f,	// (0x000930c5) vid6_indi_pane_t1

0xd2a5,	// (0x000930db) vid6_indi_pane_t2_ParamLimits

0xd2a5,	// (0x000930db) vid6_indi_pane_t2

0xd2cd,	// (0x00093103) vid6_indi_pane_t3_ParamLimits

0xd2cd,	// (0x00093103) vid6_indi_pane_t3

0xd2f5,	// (0x0009312b) vid6_indi_pane_t4_ParamLimits

0xd2f5,	// (0x0009312b) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000959bf) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000959bf) vid6_indi_pane_t

0xd319,	// (0x0009314f) wait_bar_pane_cp08

0x982a,	// (0x0008f660) main_cset_text2_pane_t1_ParamLimits

0x982a,	// (0x0008f660) main_cset_text2_pane_t1

0x97bd,	// (0x0008f5f3) listscroll_gen_pane_cp06_t1_ParamLimits

0x97bd,	// (0x0008f5f3) listscroll_gen_pane_cp06_t1

0xe7c8,	// (0x000945fe) main_cam6_set_pane

0xbe01,	// (0x00091c37) bg_tb_trans_pane_cp06_ParamLimits

0xc8c1,	// (0x000926f7) cam4_indicators_pane_g1_ParamLimits

0xc8d2,	// (0x00092708) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0009572d) cam4_indicators_pane_g_ParamLimits

0xc8f0,	// (0x00092726) cam4_indicators_pane_t1_ParamLimits

0x125d,	// (0x00087093) bg_tb_trans_pane_cp07_ParamLimits

0xc91c,	// (0x00092752) vid4_indicators_pane_g1_ParamLimits

0xc930,	// (0x00092766) vid4_indicators_pane_g2_ParamLimits

0xc944,	// (0x0009277a) vid4_indicators_pane_g3_ParamLimits

0xc955,	// (0x0009278b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0009573f) vid4_indicators_pane_g_ParamLimits

0xc973,	// (0x000927a9) vid4_indicators_pane_t1_ParamLimits

0xf026,	// (0x00094e5c) vid4_progress_pane_g1_ParamLimits

0xf036,	// (0x00094e6c) vid4_progress_pane_g2_ParamLimits

0x9308,	// (0x0008f13e) vid4_progress_pane_g3_ParamLimits

0xf046,	// (0x00094e7c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000958f0) vid4_progress_pane_g_ParamLimits

0x931a,	// (0x0008f150) vid4_progress_pane_t1_ParamLimits

0xf05e,	// (0x00094e94) vid4_progress_pane_t2_ParamLimits

0xf073,	// (0x00094ea9) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000958fb) vid4_progress_pane_t_ParamLimits

0x9332,	// (0x0008f168) wait_bar_pane_cp07_ParamLimits

0x9847,	// (0x0008f67d) main_cam6_set_pane_g2_ParamLimits

0x9847,	// (0x0008f67d) main_cam6_set_pane_g2

0x986b,	// (0x0008f6a1) main_cset6_listscroll_pane_ParamLimits

0x986b,	// (0x0008f6a1) main_cset6_listscroll_pane

0x988b,	// (0x0008f6c1) main_cset6_slider_pane_ParamLimits

0x988b,	// (0x0008f6c1) main_cset6_slider_pane

0x98a1,	// (0x0008f6d7) main_cset6_text2_pane_ParamLimits

0x98a1,	// (0x0008f6d7) main_cset6_text2_pane

0xd328,	// (0x0009315e) main_cset6_text_pane

0xd330,	// (0x00093166) main_cset_list_pane_copy1_ParamLimits

0xd330,	// (0x00093166) main_cset_list_pane_copy1

0xd340,	// (0x00093176) scroll_pane_cp028_copy1

0x98af,	// (0x0008f6e5) cset_list_set_pane_copy1

0x98c0,	// (0x0008f6f6) aid_position_infowindow_above_copy1

0x98c8,	// (0x0008f6fe) aid_position_infowindow_below_copy1

0x98d0,	// (0x0008f706) cset_list_set_pane_g1_copy1

0x0766,	// (0x0008659c) cset_list_set_pane_g3_copy1_ParamLimits

0x0766,	// (0x0008659c) cset_list_set_pane_g3_copy1

0x0775,	// (0x000865ab) cset_list_set_pane_t1_copy1_ParamLimits

0x0775,	// (0x000865ab) cset_list_set_pane_t1_copy1

0x125d,	// (0x00087093) list_highlight_pane_cp021_copy1_ParamLimits

0x125d,	// (0x00087093) list_highlight_pane_cp021_copy1

0xd349,	// (0x0009317f) cset6_slider_pane_ParamLimits

0xd349,	// (0x0009317f) cset6_slider_pane

0xd375,	// (0x000931ab) main_cset6_slider_pane_g1_ParamLimits

0xd375,	// (0x000931ab) main_cset6_slider_pane_g1

0x98d8,	// (0x0008f70e) main_cset6_slider_pane_g2_ParamLimits

0x98d8,	// (0x0008f70e) main_cset6_slider_pane_g2

0xd39d,	// (0x000931d3) main_cset6_slider_pane_g3_ParamLimits

0xd39d,	// (0x000931d3) main_cset6_slider_pane_g3

0x9900,	// (0x0008f736) main_cset6_slider_pane_g4_ParamLimits

0x9900,	// (0x0008f736) main_cset6_slider_pane_g4

0x990c,	// (0x0008f742) main_cset6_slider_pane_g5_ParamLimits

0x990c,	// (0x0008f742) main_cset6_slider_pane_g5

0xcb37,	// (0x0009296d) main_cset6_slider_pane_g7_ParamLimits

0xcb37,	// (0x0009296d) main_cset6_slider_pane_g7

0xcb43,	// (0x00092979) main_cset6_slider_pane_g8_ParamLimits

0xcb43,	// (0x00092979) main_cset6_slider_pane_g8

0x8ac7,	// (0x0008e8fd) main_cset6_slider_pane_g9_ParamLimits

0x8ac7,	// (0x0008e8fd) main_cset6_slider_pane_g9

0x8ad3,	// (0x0008e909) main_cset6_slider_pane_g10_ParamLimits

0x8ad3,	// (0x0008e909) main_cset6_slider_pane_g10

0x8adf,	// (0x0008e915) main_cset6_slider_pane_g11_ParamLimits

0x8adf,	// (0x0008e915) main_cset6_slider_pane_g11

0x8aeb,	// (0x0008e921) main_cset6_slider_pane_g12_ParamLimits

0x8aeb,	// (0x0008e921) main_cset6_slider_pane_g12

0x8af7,	// (0x0008e92d) main_cset6_slider_pane_g13_ParamLimits

0x8af7,	// (0x0008e92d) main_cset6_slider_pane_g13

0x8b03,	// (0x0008e939) main_cset6_slider_pane_g14_ParamLimits

0x8b03,	// (0x0008e939) main_cset6_slider_pane_g14

0x9918,	// (0x0008f74e) main_cset6_slider_pane_g15_ParamLimits

0x9918,	// (0x0008f74e) main_cset6_slider_pane_g15

0x8b27,	// (0x0008e95d) main_cset6_slider_pane_g16_ParamLimits

0x8b27,	// (0x0008e95d) main_cset6_slider_pane_g16

0x8b33,	// (0x0008e969) main_cset6_slider_pane_g17_ParamLimits

0x8b33,	// (0x0008e969) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000959c8) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000959c8) main_cset6_slider_pane_g

0xd3a9,	// (0x000931df) main_cset6_slider_pane_t1_ParamLimits

0xd3a9,	// (0x000931df) main_cset6_slider_pane_t1

0x9948,	// (0x0008f77e) main_cset6_slider_pane_t2_ParamLimits

0x9948,	// (0x0008f77e) main_cset6_slider_pane_t2

0x9973,	// (0x0008f7a9) main_cset6_slider_pane_t3_ParamLimits

0x9973,	// (0x0008f7a9) main_cset6_slider_pane_t3

0x999e,	// (0x0008f7d4) main_cset6_slider_pane_t4_ParamLimits

0x999e,	// (0x0008f7d4) main_cset6_slider_pane_t4

0x99c9,	// (0x0008f7ff) main_cset6_slider_pane_t5_ParamLimits

0x99c9,	// (0x0008f7ff) main_cset6_slider_pane_t5

0xd3ea,	// (0x00093220) main_cset6_slider_pane_t7_ParamLimits

0xd3ea,	// (0x00093220) main_cset6_slider_pane_t7

0x99f4,	// (0x0008f82a) main_cset6_slider_pane_t8_ParamLimits

0x99f4,	// (0x0008f82a) main_cset6_slider_pane_t8

0x9a18,	// (0x0008f84e) main_cset6_slider_pane_t9_ParamLimits

0x9a18,	// (0x0008f84e) main_cset6_slider_pane_t9

0x9a3c,	// (0x0008f872) main_cset6_slider_pane_t10_ParamLimits

0x9a3c,	// (0x0008f872) main_cset6_slider_pane_t10

0x9a60,	// (0x0008f896) main_cset6_slider_pane_t11_ParamLimits

0x9a60,	// (0x0008f896) main_cset6_slider_pane_t11

0xd420,	// (0x00093256) main_cset6_slider_pane_t14_ParamLimits

0xd420,	// (0x00093256) main_cset6_slider_pane_t14

0xd459,	// (0x0009328f) main_cset6_slider_pane_t15_ParamLimits

0xd459,	// (0x0009328f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000959ed) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000959ed) main_cset6_slider_pane_t

0xcc1f,	// (0x00092a55) cset_slider_pane_g1_copy1

0xcc28,	// (0x00092a5e) cset_slider_pane_g2_copy1

0xcc31,	// (0x00092a67) cset_slider_pane_g3_copy1

0xe7c8,	// (0x000945fe) bg_popup_sub_pane_cp011_copy1

0xd492,	// (0x000932c8) main_cset_text_pane_g1_copy1

0xccba,	// (0x00092af0) main_cset_text_pane_t1_copy1

0xccc8,	// (0x00092afe) main_cset_text_pane_t2_copy1

0xccd6,	// (0x00092b0c) main_cset_text_pane_t3_copy1

0xcce4,	// (0x00092b1a) main_cset_text_pane_t4_copy1

0xccf2,	// (0x00092b28) main_cset_text_pane_t5_copy1

0xd49a,	// (0x000932d0) main_cset_text_pane_t6_copy1

0xcd0e,	// (0x00092b44) main_cset_text_pane_t7_copy1

0x982a,	// (0x0008f660) main_cset_text2_pane_t1_copy1

0x125d,	// (0x00087093) main_ncimui_pane

0x61be,	// (0x0008bff4) popup_query_ncimui_window_ParamLimits

0x61be,	// (0x0008bff4) popup_query_ncimui_window

0xbe66,	// (0x00091c9c) field_cale_ev2_pane_g4_ParamLimits

0xbe66,	// (0x00091c9c) field_cale_ev2_pane_g4

0x7da4,	// (0x0008dbda) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7da4,	// (0x0008dbda) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000956cb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000956cb) cell_video_dialer_keypad_pane_g

0x7dbc,	// (0x0008dbf2) cell_video_dialer_keypad_pane_t1

0xe7c8,	// (0x000945fe) bg_popup_window_pane_cp012

0x3a31,	// (0x00089867) heading_pane_cp06

0xd4c6,	// (0x000932fc) ncim_query_content_pane

0xe7c8,	// (0x000945fe) bg_popup_heading_pane_cp01

0xd4ce,	// (0x00093304) ncim_heading_pane_t1

0xd4dc,	// (0x00093312) ncim_indicator_popup_pane

0xd4ee,	// (0x00093324) ncim_query_button_pane

0xd502,	// (0x00093338) ncim_query_content_pane_t1

0xd514,	// (0x0009334a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00095a31) ncim_query_content_pane_t

0xd54e,	// (0x00093384) ncim_query_list_pane

0xd560,	// (0x00093396) ncim_query_popup_pane

0xd4dc,	// (0x00093312) ncim_indicator_popup_pane_ParamLimits

0x9bc5,	// (0x0008f9fb) ncim_query_content_pane_g1_ParamLimits

0x9bc5,	// (0x0008f9fb) ncim_query_content_pane_g1

0xd502,	// (0x00093338) ncim_query_content_pane_t1_ParamLimits

0xd514,	// (0x0009334a) ncim_query_content_pane_t2_ParamLimits

0x9bd1,	// (0x0008fa07) ncim_query_content_pane_t3_ParamLimits

0x9bd1,	// (0x0008fa07) ncim_query_content_pane_t3

0x9bf9,	// (0x0008fa2f) ncim_query_content_pane_t4_ParamLimits

0x9bf9,	// (0x0008fa2f) ncim_query_content_pane_t4

0x9c21,	// (0x0008fa57) ncim_query_content_pane_t5_ParamLimits

0x9c21,	// (0x0008fa57) ncim_query_content_pane_t5

0xd526,	// (0x0009335c) ncim_query_content_pane_t6_ParamLimits

0xd526,	// (0x0009335c) ncim_query_content_pane_t6

0xfbfb,	// (0x00095a31) ncim_query_content_pane_t_ParamLimits

0xd54e,	// (0x00093384) ncim_query_list_pane_ParamLimits

0xd560,	// (0x00093396) ncim_query_popup_pane_ParamLimits

0xd574,	// (0x000933aa) wait_bar_pane_cp04

0xe7c8,	// (0x000945fe) input_focus_pane_cp011

0xd57c,	// (0x000933b2) ncim_query_popup_pane_t1

0xd58a,	// (0x000933c0) ncim_list_query_list_pane_ParamLimits

0xd58a,	// (0x000933c0) ncim_list_query_list_pane

0xe7c8,	// (0x000945fe) bg_button_pane_cp027

0xd597,	// (0x000933cd) ncim_query_button_pane_g1

0xe7c8,	// (0x000945fe) list_highlight_pane_cp012

0xd5a1,	// (0x000933d7) ncim_list_query_list_pane_g1

0xd5a9,	// (0x000933df) ncim_list_query_list_pane_t1

0xc8e1,	// (0x00092717) cam4_indicators_pane_g3_ParamLimits

0xc8e1,	// (0x00092717) cam4_indicators_pane_g3

0xc961,	// (0x00092797) vid4_indicators_pane_g5_ParamLimits

0xc961,	// (0x00092797) vid4_indicators_pane_g5

0xf052,	// (0x00094e88) vid4_progress_pane_g5_ParamLimits

0xf052,	// (0x00094e88) vid4_progress_pane_g5

0x9ab3,	// (0x0008f8e9) main_ncimui_pane_g1

0x9b19,	// (0x0008f94f) ncimui_group_query_pane_ParamLimits

0x9b19,	// (0x0008f94f) ncimui_group_query_pane

0x9b61,	// (0x0008f997) ncimui_list_pane_ParamLimits

0x9b61,	// (0x0008f997) ncimui_list_pane

0x9b88,	// (0x0008f9be) ncimui_text_pane_ParamLimits

0x9b88,	// (0x0008f9be) ncimui_text_pane

0x9c49,	// (0x0008fa7f) ncimui_text_pane_t1_ParamLimits

0x9c49,	// (0x0008fa7f) ncimui_text_pane_t1

0xd5b7,	// (0x000933ed) ncimui_list_single_graphic_pane_ParamLimits

0xd5b7,	// (0x000933ed) ncimui_list_single_graphic_pane

0x9c67,	// (0x0008fa9d) ncimui_query_pane_ParamLimits

0x9c67,	// (0x0008fa9d) ncimui_query_pane

0xe7c8,	// (0x000945fe) list_highlight_pane_cp013

0xd5c7,	// (0x000933fd) ncim_list_query_list_pane_t1_copy1

0xd5a1,	// (0x000933d7) ncim_list_single_graphic_pane_g1

0xd5d5,	// (0x0009340b) ncim_query_button_pane_cp01

0xd5e1,	// (0x00093417) ncim_query_entry_pane_ParamLimits

0xd5e1,	// (0x00093417) ncim_query_entry_pane

0xd5f4,	// (0x0009342a) ncimui_query_pane_g1

0xd600,	// (0x00093436) ncimui_query_pane_t1_ParamLimits

0xd600,	// (0x00093436) ncimui_query_pane_t1

0x125d,	// (0x00087093) input_focus_pane_cp012

0xd619,	// (0x0009344f) ncim_query_entry_pane_t1

0xef05,	// (0x00094d3b) main_im_pane_ParamLimits

0x125d,	// (0x00087093) main_mobtv_pane_ParamLimits

0x125d,	// (0x00087093) main_mobtv_pane

0x9930,	// (0x0008f766) main_cset6_slider_pane_g18_ParamLimits

0x9930,	// (0x0008f766) main_cset6_slider_pane_g18

0x993c,	// (0x0008f772) main_cset6_slider_pane_g19_ParamLimits

0x993c,	// (0x0008f772) main_cset6_slider_pane_g19

0xf09e,	// (0x00094ed4) bg_main_mobtv_pane_ParamLimits

0xf09e,	// (0x00094ed4) bg_main_mobtv_pane

0x9c7a,	// (0x0008fab0) main_mobtv_info_pane

0x9c83,	// (0x0008fab9) main_mobtv_loading_pane_ParamLimits

0x9c83,	// (0x0008fab9) main_mobtv_loading_pane

0xd62b,	// (0x00093461) main_mobtv_pg_channel_list_pane

0xd635,	// (0x0009346b) main_mobtv_pg_hdr_pane

0x9c90,	// (0x0008fac6) main_mobtv_programe_curr_pane_ParamLimits

0x9c90,	// (0x0008fac6) main_mobtv_programe_curr_pane

0x9c9d,	// (0x0008fad3) main_mobtv_programe_next_pane_ParamLimits

0x9c9d,	// (0x0008fad3) main_mobtv_programe_next_pane

0xd63e,	// (0x00093474) popup_mobtv_noti_window

0xbb95,	// (0x000919cb) main_tv_pg_hdr_pane_g1

0xd646,	// (0x0009347c) main_tv_pg_hdr_pane_g2

0xd64e,	// (0x00093484) main_tv_pg_hdr_pane_g3

0xd656,	// (0x0009348c) main_tv_pg_hdr_pane_g4

0xd65e,	// (0x00093494) main_tv_pg_hdr_pane_g5

0xd668,	// (0x0009349e) main_tv_pg_hdr_pane_g6

0xd672,	// (0x000934a8) main_tv_pg_hdr_pane_g7

0xd67c,	// (0x000934b2) main_tv_pg_hdr_pane_g8

0xd686,	// (0x000934bc) main_tv_pg_hdr_pane_g9

0xd690,	// (0x000934c6) main_tv_pg_hdr_pane_g10

0xd69a,	// (0x000934d0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00095a3e) main_tv_pg_hdr_pane_g

0xd6a4,	// (0x000934da) main_tv_pg_hdr_pane_t1

0xd6b2,	// (0x000934e8) main_tv_pg_hdr_pane_t2

0xd6c0,	// (0x000934f6) main_tv_pg_hdr_pane_t3

0xd6d0,	// (0x00093506) main_tv_pg_hdr_pane_t4

0xd6e0,	// (0x00093516) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00095a55) main_tv_pg_hdr_pane_t

0xd6f0,	// (0x00093526) single_mobtv_pg_channel_pane_ParamLimits

0xd6f0,	// (0x00093526) single_mobtv_pg_channel_pane

0xd702,	// (0x00093538) single_mobtv_pg_channel_table_pane

0xd70b,	// (0x00093541) single_mobtv_pg_channel_thumb_pane

0xd714,	// (0x0009354a) single_tv_pg_channel_pane_g1

0xd71d,	// (0x00093553) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00095a60) single_tv_pg_channel_pane_g

0xbe01,	// (0x00091c37) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbe01,	// (0x00091c37) bg_single_mobtv_pg_channel_thumb_pane

0xd726,	// (0x0009355c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd726,	// (0x0009355c) single_mobtv_pg_channel_thumb_pane_g1

0xd734,	// (0x0009356a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd734,	// (0x0009356a) single_mobtv_pg_channel_thumb_pane_g2

0xd740,	// (0x00093576) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd740,	// (0x00093576) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00095a65) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00095a65) single_mobtv_pg_channel_thumb_pane_g

0xd74c,	// (0x00093582) single_mobtv_pg_channel_thumb_pane_t1

0xd75a,	// (0x00093590) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00095a6c) single_mobtv_pg_channel_thumb_pane_t

0xbb95,	// (0x000919cb) bg_single_mobtv_pg_channel_table_pane_g1

0xbb95,	// (0x000919cb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00095512) bg_single_mobtv_pg_channel_table_pane_g

0xd768,	// (0x0009359e) single_mobtv_pg_channel_table_pane_t1

0xd776,	// (0x000935ac) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00095a71) single_mobtv_pg_channel_table_pane_t

0x9cb2,	// (0x0008fae8) main_mobtv_info_pane_g1_ParamLimits

0x9cb2,	// (0x0008fae8) main_mobtv_info_pane_g1

0x9cd0,	// (0x0008fb06) main_mobtv_info_pane_t1_ParamLimits

0x9cd0,	// (0x0008fb06) main_mobtv_info_pane_t1

0x9d48,	// (0x0008fb7e) main_mobtv_info_pane_t2_ParamLimits

0x9d48,	// (0x0008fb7e) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00095a7b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00095a7b) main_mobtv_info_pane_t

0x9dd7,	// (0x0008fc0d) wait_bar_pane_cp05

0x9de9,	// (0x0008fc1f) main_mobtv_loading_pane_g1_ParamLimits

0x9de9,	// (0x0008fc1f) main_mobtv_loading_pane_g1

0x9dfc,	// (0x0008fc32) main_mobtv_loading_pane_g2_ParamLimits

0x9dfc,	// (0x0008fc32) main_mobtv_loading_pane_g2

0x9e08,	// (0x0008fc3e) main_mobtv_loading_pane_g3_ParamLimits

0x9e08,	// (0x0008fc3e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00095a82) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00095a82) main_mobtv_loading_pane_g

0xd784,	// (0x000935ba) main_mobtv_loading_pane_t1_ParamLimits

0xd784,	// (0x000935ba) main_mobtv_loading_pane_t1

0xd79c,	// (0x000935d2) main_mobtv_loading_pane_t2_ParamLimits

0xd79c,	// (0x000935d2) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00095a89) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00095a89) main_mobtv_loading_pane_t

0x9e1b,	// (0x0008fc51) wait_bar_pane_cp06_ParamLimits

0x9e1b,	// (0x0008fc51) wait_bar_pane_cp06

0xd7c0,	// (0x000935f6) main_mobtv_programe_curr_pane_t1

0xd7ce,	// (0x00093604) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00095a8e) main_mobtv_programe_curr_pane_t

0xd7dc,	// (0x00093612) main_mobtv_programe_next_pane_t1

0xd7ea,	// (0x00093620) main_mobtv_programe_next_pane_t2

0xd7f8,	// (0x0009362e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00095a93) main_mobtv_programe_next_pane_t

0xe7c8,	// (0x000945fe) bg_popup_mobtv_noti_window_pane

0xd806,	// (0x0009363c) popup_mobtv_noti_window_g1

0xd80e,	// (0x00093644) popup_mobtv_noti_window_t1

0xd81c,	// (0x00093652) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00095a9a) popup_mobtv_noti_window_t

0xbb95,	// (0x000919cb) bg_popup_mobtv_noti_window_pane_g1

0xe7c8,	// (0x000945fe) sc_clock_pane

0xe7c8,	// (0x000945fe) main_fs_bigclock_pane

0x957b,	// (0x0008f3b1) blid2_tripm_pane_t4_ParamLimits

0x957b,	// (0x0008f3b1) blid2_tripm_pane_t4

0x9e2a,	// (0x0008fc60) sc_clock_pane_g1_ParamLimits

0x9e2a,	// (0x0008fc60) sc_clock_pane_g1

0x9e3c,	// (0x0008fc72) sc_clock_pane_t1_ParamLimits

0x9e3c,	// (0x0008fc72) sc_clock_pane_t1

0x9e5e,	// (0x0008fc94) sc_clock_pane_t2_ParamLimits

0x9e5e,	// (0x0008fc94) sc_clock_pane_t2

0x9e76,	// (0x0008fcac) sc_clock_pane_t3_ParamLimits

0x9e76,	// (0x0008fcac) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00095a9f) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00095a9f) sc_clock_pane_t

0xa814,	// (0x0009064a) main_fs_bigclock_indicator_pane_ParamLimits

0xa814,	// (0x0009064a) main_fs_bigclock_indicator_pane

0x9f16,	// (0x0008fd4c) main_fs_bigclock_pane_g1_ParamLimits

0x9f16,	// (0x0008fd4c) main_fs_bigclock_pane_g1

0xa820,	// (0x00090656) main_fs_bigclock_pane_t1_ParamLimits

0xa820,	// (0x00090656) main_fs_bigclock_pane_t1

0xa832,	// (0x00090668) main_fs_bigclock_pane_t2_ParamLimits

0xa832,	// (0x00090668) main_fs_bigclock_pane_t2

0xa846,	// (0x0009067c) main_fs_bigclock_pane_t3_ParamLimits

0xa846,	// (0x0009067c) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00095ca9) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00095ca9) main_fs_bigclock_pane_t

0xe35e,	// (0x00094194) main_fs_bigclock_indicator_pane_g1

0xd4f6,	// (0x0009332c) ncim_query_content_pane_g2_ParamLimits

0xd4f6,	// (0x0009332c) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00095a2c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00095a2c) ncim_query_content_pane_g

0x9e8f,	// (0x0008fcc5) sc_clock_pane_t4_ParamLimits

0x9e8f,	// (0x0008fcc5) sc_clock_pane_t4

0x125d,	// (0x00087093) main_radioblah_pane

0xc815,	// (0x0009264b) cell_call4_button_pane_t1_copy1_ParamLimits

0xc815,	// (0x0009264b) cell_call4_button_pane_t1_copy1

0x9acb,	// (0x0008f901) main_ncimui_pane_t1_ParamLimits

0x9acb,	// (0x0008f901) main_ncimui_pane_t1

0x9ae5,	// (0x0008f91b) main_ncimui_pane_t2_ParamLimits

0x9ae5,	// (0x0008f91b) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00095a25) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00095a25) main_ncimui_pane_t

0xd960,	// (0x00093796) main_radioblah_anim_pane_ParamLimits

0xd960,	// (0x00093796) main_radioblah_anim_pane

0xd971,	// (0x000937a7) main_radioblah_info_pane_ParamLimits

0xd971,	// (0x000937a7) main_radioblah_info_pane

0xd985,	// (0x000937bb) main_radioblah_pane_t1_ParamLimits

0xd985,	// (0x000937bb) main_radioblah_pane_t1

0xd9a1,	// (0x000937d7) main_radioblah_pane_t2_ParamLimits

0xd9a1,	// (0x000937d7) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00095ac0) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00095ac0) main_radioblah_pane_t

0x9f6e,	// (0x0008fda4) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f6e,	// (0x0008fda4) main_radioblah_rocker_ctrl_pane

0xd9e9,	// (0x0009381f) main_radioblah_info_pane_t1_ParamLimits

0xd9e9,	// (0x0009381f) main_radioblah_info_pane_t1

0x9fc6,	// (0x0008fdfc) main_radioblah_info_pane_t2_ParamLimits

0x9fc6,	// (0x0008fdfc) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00095ac9) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00095ac9) main_radioblah_info_pane_t

0xbb95,	// (0x000919cb) main_radioblah_rocker_ctrl_pane_g1

0xa076,	// (0x0008feac) main_radioblah_rocker_ctrl_pane_g2

0xa07e,	// (0x0008feb4) main_radioblah_rocker_ctrl_pane_g3

0xa086,	// (0x0008febc) main_radioblah_rocker_ctrl_pane_g4

0xa08e,	// (0x0008fec4) main_radioblah_rocker_ctrl_pane_g5

0xa096,	// (0x0008fecc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00095ad2) main_radioblah_rocker_ctrl_pane_g

0x982a,	// (0x0008f660) main_cset_text2_pane_t1_copy1_ParamLimits

0xc89f,	// (0x000926d5) cam4_image_uncrop_qvga_pane

0xc90a,	// (0x00092740) vid4_image_uncrop_qcif_pane

0xf090,	// (0x00094ec6) cam6_image_uncrop_qvga_pane_ParamLimits

0xf090,	// (0x00094ec6) cam6_image_uncrop_qvga_pane

0xd20b,	// (0x00093041) vid6_image_uncrop_qcif_pane_ParamLimits

0xd20b,	// (0x00093041) vid6_image_uncrop_qcif_pane

0xe7c8,	// (0x000945fe) bg_popup_preview_window_pane_cp03

0xd4a8,	// (0x000932de) list_cset_text2_pane

0xd4b0,	// (0x000932e6) main_cset6_text2_pane_g1

0xd4b8,	// (0x000932ee) main_cset6_text2_pane_t1

0xa09e,	// (0x0008fed4) list_cset_text2_pane_t1_ParamLimits

0xa09e,	// (0x0008fed4) list_cset_text2_pane_t1

0x125d,	// (0x00087093) main_radioblah_pane_ParamLimits

0x9dc3,	// (0x0008fbf9) main_mobtv_info_pane_t3_ParamLimits

0x9dc3,	// (0x0008fbf9) main_mobtv_info_pane_t3

0x9f5c,	// (0x0008fd92) main_radioblah_pane_g1

0x9f96,	// (0x0008fdcc) main_radioblah_info_pane_g1

0xa01b,	// (0x0008fe51) main_radioblah_info_pane_t3_ParamLimits

0xa01b,	// (0x0008fe51) main_radioblah_info_pane_t3

0x34e2,	// (0x00089318) highlight_cell_cale_month_pane_ParamLimits

0x34e2,	// (0x00089318) highlight_cell_cale_month_pane

0xe7c8,	// (0x000945fe) main_phob_fisheye_pane

0xbf35,	// (0x00091d6b) scroll_pane_cp0031_ParamLimits

0xbf35,	// (0x00091d6b) scroll_pane_cp0031

0xd319,	// (0x0009314f) wait_bar_pane_cp08_ParamLimits

0x98af,	// (0x0008f6e5) cset_list_set_pane_copy1_ParamLimits

0xda23,	// (0x00093859) highlight_cell_cale_month_pane_g1

0xa0b7,	// (0x0008feed) highlight_cell_cale_month_pane_t1

0xcf82,	// (0x00092db8) list_gen_pane_cp01

0xcb22,	// (0x00092958) scroll_pane_01

0xf0ac,	// (0x00094ee2) list_single_double_fisheye_pane

0x0840,	// (0x00086676) list_double_fisheye_pane_g1_ParamLimits

0x0840,	// (0x00086676) list_double_fisheye_pane_g1

0x084c,	// (0x00086682) list_double_fisheye_pane_g2_ParamLimits

0x084c,	// (0x00086682) list_double_fisheye_pane_g2

0xa0c5,	// (0x0008fefb) list_double_fisheye_pane_g3_ParamLimits

0xa0c5,	// (0x0008fefb) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00095adf) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00095adf) list_double_fisheye_pane_g

0x087d,	// (0x000866b3) list_double_fisheye_pane_t1_ParamLimits

0x087d,	// (0x000866b3) list_double_fisheye_pane_t1

0x0898,	// (0x000866ce) list_double_fisheye_pane_t2_ParamLimits

0x0898,	// (0x000866ce) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00095aea) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00095aea) list_double_fisheye_pane_t

0xe7c8,	// (0x000945fe) main_call5_pane

0x9eba,	// (0x0008fcf0) sc_swipe_pane_ParamLimits

0x9eba,	// (0x0008fcf0) sc_swipe_pane

0xa0e4,	// (0x0008ff1a) call5_image_pane_ParamLimits

0xa0e4,	// (0x0008ff1a) call5_image_pane

0xa101,	// (0x0008ff37) call5_swipe_1_pane_ParamLimits

0xa101,	// (0x0008ff37) call5_swipe_1_pane

0xa114,	// (0x0008ff4a) call5_swipe_2_pane_ParamLimits

0xa114,	// (0x0008ff4a) call5_swipe_2_pane

0xa13f,	// (0x0008ff75) popup_call5_audio_first_window_ParamLimits

0xa13f,	// (0x0008ff75) popup_call5_audio_first_window

0xbe01,	// (0x00091c37) call5_swipe_1_pane_g1_ParamLimits

0xbe01,	// (0x00091c37) call5_swipe_1_pane_g1

0xda2b,	// (0x00093861) call5_swipe_1_pane_g2_ParamLimits

0xda2b,	// (0x00093861) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00095aef) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00095aef) call5_swipe_1_pane_g

0xda37,	// (0x0009386d) call5_swipe_1_pane_t1_ParamLimits

0xda37,	// (0x0009386d) call5_swipe_1_pane_t1

0xbe01,	// (0x00091c37) call5_swipe_2_pane_g1_ParamLimits

0xbe01,	// (0x00091c37) call5_swipe_2_pane_g1

0xda4c,	// (0x00093882) call5_swipe_2_pane_g2_ParamLimits

0xda4c,	// (0x00093882) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00095af4) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00095af4) call5_swipe_2_pane_g

0xda58,	// (0x0009388e) call5_swipe_2_pane_t1_ParamLimits

0xda58,	// (0x0009388e) call5_swipe_2_pane_t1

0xda6d,	// (0x000938a3) sc_swipe_pane_g1_ParamLimits

0xda6d,	// (0x000938a3) sc_swipe_pane_g1

0xda7a,	// (0x000938b0) sc_swipe_pane_g2_ParamLimits

0xda7a,	// (0x000938b0) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00095af9) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00095af9) sc_swipe_pane_g

0xda86,	// (0x000938bc) sc_swipe_pane_t1_ParamLimits

0xda86,	// (0x000938bc) sc_swipe_pane_t1

0xe7c8,	// (0x000945fe) main_cmail_launcher_pane

0xa150,	// (0x0008ff86) aid_size_cell_cmail_l_ParamLimits

0xa150,	// (0x0008ff86) aid_size_cell_cmail_l

0xa16a,	// (0x0008ffa0) grid_cmail_l_pane_ParamLimits

0xa16a,	// (0x0008ffa0) grid_cmail_l_pane

0xa185,	// (0x0008ffbb) cell_cmail_l_pane_ParamLimits

0xa185,	// (0x0008ffbb) cell_cmail_l_pane

0xa1ab,	// (0x0008ffe1) cell_cmail_l_pane_g1_ParamLimits

0xa1ab,	// (0x0008ffe1) cell_cmail_l_pane_g1

0xa1b7,	// (0x0008ffed) cell_cmail_l_pane_t1_ParamLimits

0xa1b7,	// (0x0008ffed) cell_cmail_l_pane_t1

0xda9b,	// (0x000938d1) cell_cmail_l_pane_t2_ParamLimits

0xda9b,	// (0x000938d1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00095afe) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00095afe) cell_cmail_l_pane_t

0x125d,	// (0x00087093) grid_highlight_pane_cp018_ParamLimits

0x125d,	// (0x00087093) grid_highlight_pane_cp018

0x1102,	// (0x00086f38) main2_pane_ParamLimits

0x1102,	// (0x00086f38) main2_pane

0xef9e,	// (0x00094dd4) popup_sp_fs_action_menu_bg_pane_g1

0xefa6,	// (0x00094ddc) popup_sp_fs_action_menu_bg_pane_g2

0xefae,	// (0x00094de4) popup_sp_fs_action_menu_bg_pane_g3

0x1757,	// (0x0008758d) popup_sp_fs_action_menu_bg_pane_g4

0x175f,	// (0x00087595) popup_sp_fs_action_menu_bg_pane_g5

0x1767,	// (0x0008759d) popup_sp_fs_action_menu_bg_pane_g6

0x176f,	// (0x000875a5) popup_sp_fs_action_menu_bg_pane_g7

0x1777,	// (0x000875ad) popup_sp_fs_action_menu_bg_pane_g8

0x177f,	// (0x000875b5) popup_sp_fs_action_menu_bg_pane_g9

0x1787,	// (0x000875bd) popup_sp_fs_action_menu_bg_pane_g10

0x1787,	// (0x000875bd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00094fc0) popup_sp_fs_action_menu_bg_pane_g

0x01a5,	// (0x00085fdb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t3_g3_g1

0x226a,	// (0x000880a0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x2_t3_g3_g2

0x01b1,	// (0x00085fe7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009506e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009506e) list_medium_line_x2_t3_g3_g

0x01bd,	// (0x00085ff3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01bd,	// (0x00085ff3) list_medium_line_x2_t3_g3_t1

0x01d2,	// (0x00086008) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01d2,	// (0x00086008) list_medium_line_x2_t3_g3_t2

0x01e6,	// (0x0008601c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00095075) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00095075) list_medium_line_x2_t3_g3_t

0x01a5,	// (0x00085fdb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t3_g2_g1

0x01b1,	// (0x00085fe7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009507c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009507c) list_medium_line_x2_t3_g2_g

0x01fb,	// (0x00086031) list_medium_line_x2_t3_g2_t1_ParamLimits

0x01fb,	// (0x00086031) list_medium_line_x2_t3_g2_t1

0x0211,	// (0x00086047) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0211,	// (0x00086047) list_medium_line_x2_t3_g2_t2

0x0223,	// (0x00086059) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0223,	// (0x00086059) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00095081) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00095081) list_medium_line_x2_t3_g2_t

0x01a5,	// (0x00085fdb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t4_g4_g1

0x2276,	// (0x000880ac) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2276,	// (0x000880ac) list_medium_line_x2_t4_g4_g2

0x226a,	// (0x000880a0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x2_t4_g4_g3

0x0240,	// (0x00086076) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0240,	// (0x00086076) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00095088) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00095088) list_medium_line_x2_t4_g4_g

0x024c,	// (0x00086082) list_medium_line_x2_t4_g4_t1_ParamLimits

0x024c,	// (0x00086082) list_medium_line_x2_t4_g4_t1

0x0266,	// (0x0008609c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0266,	// (0x0008609c) list_medium_line_x2_t4_g4_t2

0x027c,	// (0x000860b2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x027c,	// (0x000860b2) list_medium_line_x2_t4_g4_t3

0x0291,	// (0x000860c7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0291,	// (0x000860c7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00095091) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00095091) list_medium_line_x2_t4_g4_t

0x01a5,	// (0x00085fdb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t2_g4_g1

0x2276,	// (0x000880ac) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2276,	// (0x000880ac) list_medium_line_x2_t2_g4_g2

0x226a,	// (0x000880a0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x2_t2_g4_g3

0x01b1,	// (0x00085fe7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000950f8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000950f8) list_medium_line_x2_t2_g4_g

0x02a3,	// (0x000860d9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x02a3,	// (0x000860d9) list_medium_line_x2_t2_g4_t1

0x01e6,	// (0x0008601c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00095101) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00095101) list_medium_line_x2_t2_g4_t

0x01a5,	// (0x00085fdb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t2_g3_g1

0x226a,	// (0x000880a0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x2_t2_g3_g2

0x01b1,	// (0x00085fe7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0009506e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0009506e) list_medium_line_x2_t2_g3_g

0x02b8,	// (0x000860ee) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02b8,	// (0x000860ee) list_medium_line_x2_t2_g3_t1

0x01e6,	// (0x0008601c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00095106) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00095106) list_medium_line_x2_t2_g3_t

0x3867,	// (0x0008969d) main_sp_fs_list_pane_ParamLimits

0x3867,	// (0x0008969d) main_sp_fs_list_pane

0xb35a,	// (0x00091190) sp_fs_scroll_pane_ParamLimits

0xb35a,	// (0x00091190) sp_fs_scroll_pane

0x02cd,	// (0x00086103) list_medium_line_x2_t3_t1

0x02dd,	// (0x00086113) list_medium_line_x2_t3_t2

0x02eb,	// (0x00086121) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00095151) list_medium_line_x2_t3_t

0x02f9,	// (0x0008612f) list_medium_line_x3_t4_t1

0x0309,	// (0x0008613f) list_medium_line_x3_t4_t2

0x0317,	// (0x0008614d) list_medium_line_x3_t4_t3

0x02eb,	// (0x00086121) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00095158) list_medium_line_x3_t4_t

0x0325,	// (0x0008615b) list_medium_line_x4_t5_t1

0x0335,	// (0x0008616b) list_medium_line_x4_t5_t2

0x0317,	// (0x0008614d) list_medium_line_x4_t5_t3

0x0343,	// (0x00086179) list_medium_line_x4_t5_t4

0x02eb,	// (0x00086121) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00095161) list_medium_line_x4_t5_t

0x01a5,	// (0x00085fdb) list_medium_line_t4_g4_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_t4_g4_g1

0x0351,	// (0x00086187) list_medium_line_t4_g4_g2_ParamLimits

0x0351,	// (0x00086187) list_medium_line_t4_g4_g2

0x035d,	// (0x00086193) list_medium_line_t4_g4_g3_ParamLimits

0x035d,	// (0x00086193) list_medium_line_t4_g4_g3

0x01b1,	// (0x00085fe7) list_medium_line_t4_g4_g4_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0009516c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0009516c) list_medium_line_t4_g4_g

0x0369,	// (0x0008619f) list_medium_line_t4_g4_t1_ParamLimits

0x0369,	// (0x0008619f) list_medium_line_t4_g4_t1

0x037e,	// (0x000861b4) list_medium_line_t4_g4_t2_ParamLimits

0x037e,	// (0x000861b4) list_medium_line_t4_g4_t2

0x0393,	// (0x000861c9) list_medium_line_t4_g4_t3_ParamLimits

0x0393,	// (0x000861c9) list_medium_line_t4_g4_t3

0x01e6,	// (0x0008601c) list_medium_line_t4_g4_t4_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00095175) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00095175) list_medium_line_t4_g4_t

0x3ba8,	// (0x000899de) chi_dic_find_pane_g1

0x5f88,	// (0x0008bdbe) main_tport_pane

0x058c,	// (0x000863c2) list_medium_line_plain_t1

0x059a,	// (0x000863d0) list_medium_line_t2_g2_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_t2_g2_g1

0x05a6,	// (0x000863dc) list_medium_line_t2_g2_g2_ParamLimits

0x05a6,	// (0x000863dc) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00095836) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00095836) list_medium_line_t2_g2_g

0x05b2,	// (0x000863e8) list_medium_line_t2_g2_t1_ParamLimits

0x05b2,	// (0x000863e8) list_medium_line_t2_g2_t1

0x05c9,	// (0x000863ff) list_medium_line_t2_g2_t2_ParamLimits

0x05c9,	// (0x000863ff) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0009583b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0009583b) list_medium_line_t2_g2_t

0xcf8b,	// (0x00092dc1) aid_sp_fs_list_icon_a_sm

0xf088,	// (0x00094ebe) aid_sp_fs_list_icon_d

0xcf93,	// (0x00092dc9) aid_sp_fs_text_primary

0xcf9c,	// (0x00092dd2) aid_sp_fs_text_secondary

0x9345,	// (0x0008f17b) list_medium_line

0x9345,	// (0x0008f17b) list_medium_line_g2

0x9345,	// (0x0008f17b) list_medium_line_g3

0x9345,	// (0x0008f17b) list_medium_line_plain

0x9345,	// (0x0008f17b) list_medium_line_plain_t2

0x9345,	// (0x0008f17b) list_medium_line_plain_t3

0x9345,	// (0x0008f17b) list_medium_line_right_icon

0x9345,	// (0x0008f17b) list_medium_line_right_iconx2

0x9345,	// (0x0008f17b) list_medium_line_t2

0x9345,	// (0x0008f17b) list_medium_line_t2_g2

0x9345,	// (0x0008f17b) list_medium_line_t2_g3

0x9345,	// (0x0008f17b) list_medium_line_t2_right_icon

0x9345,	// (0x0008f17b) list_medium_line_t2_right_iconx2

0x9345,	// (0x0008f17b) list_medium_line_t3

0x9345,	// (0x0008f17b) list_medium_line_t3_g2

0x9345,	// (0x0008f17b) list_medium_line_t3_g3

0x9345,	// (0x0008f17b) list_medium_line_t3_right_iconx2

0x934e,	// (0x0008f184) list_medium_line_t4_g4

0x9345,	// (0x0008f17b) list_medium_line_x2

0x9345,	// (0x0008f17b) list_medium_line_x2_t2_g2

0x9345,	// (0x0008f17b) list_medium_line_x2_t2_g3

0x9345,	// (0x0008f17b) list_medium_line_x2_t2_g4

0x9345,	// (0x0008f17b) list_medium_line_x2_t3

0x9345,	// (0x0008f17b) list_medium_line_x2_t3_g2

0x9345,	// (0x0008f17b) list_medium_line_x2_t3_g3

0x9345,	// (0x0008f17b) list_medium_line_x2_t3_g4

0x9345,	// (0x0008f17b) list_medium_line_x2_t4_g2

0x9345,	// (0x0008f17b) list_medium_line_x2_t4_g4

0x9357,	// (0x0008f18d) list_medium_line_x3

0x9357,	// (0x0008f18d) list_medium_line_x3_t4

0x9357,	// (0x0008f18d) list_medium_line_x3_t4_g4

0x934e,	// (0x0008f184) list_medium_line_x4_t4

0x934e,	// (0x0008f184) list_medium_line_x4_t4_g7

0x934e,	// (0x0008f184) list_medium_line_x4_t5

0x0752,	// (0x00086588) list_single_fs_dyc_pane_ParamLimits

0x0752,	// (0x00086588) list_single_fs_dyc_pane

0x01a5,	// (0x00085fdb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x4_t4_g7_g1

0x078a,	// (0x000865c0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x078a,	// (0x000865c0) list_medium_line_x4_t4_g7_g2

0x9a84,	// (0x0008f8ba) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9a84,	// (0x0008f8ba) list_medium_line_x4_t4_g7_g3

0x9a93,	// (0x0008f8c9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9a93,	// (0x0008f8c9) list_medium_line_x4_t4_g7_g4

0x0796,	// (0x000865cc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0796,	// (0x000865cc) list_medium_line_x4_t4_g7_g5

0x07a5,	// (0x000865db) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07a5,	// (0x000865db) list_medium_line_x4_t4_g7_g6

0x07b4,	// (0x000865ea) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07b4,	// (0x000865ea) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00095a06) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00095a06) list_medium_line_x4_t4_g7_g

0x07c0,	// (0x000865f6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07c0,	// (0x000865f6) list_medium_line_x4_t4_g7_t1

0x07d5,	// (0x0008660b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07d5,	// (0x0008660b) list_medium_line_x4_t4_g7_t2

0x07ea,	// (0x00086620) list_medium_line_x4_t4_g7_t3_ParamLimits

0x07ea,	// (0x00086620) list_medium_line_x4_t4_g7_t3

0x07ff,	// (0x00086635) list_medium_line_x4_t4_g7_t4_ParamLimits

0x07ff,	// (0x00086635) list_medium_line_x4_t4_g7_t4

0x0811,	// (0x00086647) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0811,	// (0x00086647) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00095a15) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00095a15) list_medium_line_x4_t4_g7_t

0x0823,	// (0x00086659) list_single_dyc_row_pane_ParamLimits

0x0823,	// (0x00086659) list_single_dyc_row_pane

0xa0d1,	// (0x0008ff07) call5_gesture_pane_ParamLimits

0xa0d1,	// (0x0008ff07) call5_gesture_pane

0xa127,	// (0x0008ff5d) call5_windows_pane_ParamLimits

0xa127,	// (0x0008ff5d) call5_windows_pane

0xa1cd,	// (0x00090003) call5_swipe_1_pane_cp_ParamLimits

0xa1cd,	// (0x00090003) call5_swipe_1_pane_cp

0xa1d9,	// (0x0009000f) call5_swipe_2_pane_cp_ParamLimits

0xa1d9,	// (0x0009000f) call5_swipe_2_pane_cp

0x1eb7,	// (0x00087ced) call5_image_pane_cp

0xa1e5,	// (0x0009001b) popup_call5_audio_first_window_cp_ParamLimits

0xa1e5,	// (0x0009001b) popup_call5_audio_first_window_cp

0xda6d,	// (0x000938a3) call5_swipe_1_pane_g1_cp_ParamLimits

0xda6d,	// (0x000938a3) call5_swipe_1_pane_g1_cp

0xdaad,	// (0x000938e3) call5_swipe_1_pane_g2_cp

0xda86,	// (0x000938bc) call5_swipe_1_pane_t1_cp_ParamLimits

0xda86,	// (0x000938bc) call5_swipe_1_pane_t1_cp

0xda6d,	// (0x000938a3) call5_swipe_2_pane_g1_cp_ParamLimits

0xda6d,	// (0x000938a3) call5_swipe_2_pane_g1_cp

0xdab5,	// (0x000938eb) call5_swipe_2_pane_g2_cp

0xdabd,	// (0x000938f3) call5_swipe_2_pane_t1_cp_ParamLimits

0xdabd,	// (0x000938f3) call5_swipe_2_pane_t1_cp

0x125d,	// (0x00087093) main_sp_fs_email_pane

0xdad2,	// (0x00093908) main_sp_fs_listscroll_pane_te

0xa1f3,	// (0x00090029) popup_sp_fs_action_menu_pane_ParamLimits

0xa1f3,	// (0x00090029) popup_sp_fs_action_menu_pane

0xbb95,	// (0x000919cb) bg_sp_fs_ctrlbar_pane_g1

0xc1cc,	// (0x00092002) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc1de,	// (0x00092014) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc1d5,	// (0x0009200b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbb95,	// (0x000919cb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00095b03) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb97a,	// (0x000917b0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb97a,	// (0x000917b0) bg_sp_fs_ctrlbar_ddmenu_pane

0xdadb,	// (0x00093911) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdadb,	// (0x00093911) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdae7,	// (0x0009391d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdae7,	// (0x0009391d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00095b0c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00095b0c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdaf3,	// (0x00093929) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdaf3,	// (0x00093929) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08ba,	// (0x000866f0) list_medium_line_t2_right_icon_g1

0x08c2,	// (0x000866f8) list_medium_line_t2_right_icon_t1

0x08d2,	// (0x00086708) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00095b11) list_medium_line_t2_right_icon_t

0xb67a,	// (0x000914b0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb67a,	// (0x000914b0) bg_sp_fs_ctrlbar_pane

0xa27f,	// (0x000900b5) main_sp_fs_ctrlbar_button_pane_cp01

0xa289,	// (0x000900bf) main_sp_fs_ctrlbar_ddmenu_pane

0xdb45,	// (0x0009397b) main_sp_fs_ctrlbar_pane_g1

0xdb51,	// (0x00093987) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00095b16) main_sp_fs_ctrlbar_pane_g

0xdb5d,	// (0x00093993) main_sp_fs_ctrlbar_pane_t1

0xa293,	// (0x000900c9) main_sp_fs_ctrlbar_pane

0xa2b7,	// (0x000900ed) main_sp_fs_listscroll_pane_te_cp01

0x08e4,	// (0x0008671a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08e4,	// (0x0008671a) popup_sp_fs_action_menu_pane_cp01

0x125d,	// (0x00087093) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x125d,	// (0x00087093) bg_sp_fs_highlight_list_pane_cp01

0xdb8d,	// (0x000939c3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdb8d,	// (0x000939c3) sp_fs_action_menu_list_gene_pane_g1

0xdb9c,	// (0x000939d2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdb9c,	// (0x000939d2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00095b20) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00095b20) sp_fs_action_menu_list_gene_pane_g

0xdba9,	// (0x000939df) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdba9,	// (0x000939df) sp_fs_action_menu_list_gene_pane_t1

0xdbc1,	// (0x000939f7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdbc1,	// (0x000939f7) sp_fs_action_menu_list_gene_pane

0xdbe2,	// (0x00093a18) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdbe2,	// (0x00093a18) popup_sp_fs_action_menu_bg_pane

0xdbf0,	// (0x00093a26) sp_fs_action_menu_list_pane_ParamLimits

0xdbf0,	// (0x00093a26) sp_fs_action_menu_list_pane

0xa2d7,	// (0x0009010d) sp_fs_scroll_pane_cp01_ParamLimits

0xa2d7,	// (0x0009010d) sp_fs_scroll_pane_cp01

0x0914,	// (0x0008674a) list_medium_line_plain_t2_t1

0x0924,	// (0x0008675a) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00095b25) list_medium_line_plain_t2_t

0x0934,	// (0x0008676a) list_medium_line_plain_t3_t1

0x0944,	// (0x0008677a) list_medium_line_plain_t3_t2

0x0952,	// (0x00086788) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00095b2a) list_medium_line_plain_t3_t

0x01a5,	// (0x00085fdb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t2_g2_g1

0x01b1,	// (0x00085fe7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009507c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009507c) list_medium_line_x2_t2_g2_g

0x0369,	// (0x0008619f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0369,	// (0x0008619f) list_medium_line_x2_t2_g2_t1

0x01e6,	// (0x0008601c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00095b31) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00095b31) list_medium_line_x2_t2_g2_t

0x01a5,	// (0x00085fdb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t4_g2_g1

0x0960,	// (0x00086796) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0960,	// (0x00086796) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00095b36) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00095b36) list_medium_line_x2_t4_g2_g

0x0972,	// (0x000867a8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0972,	// (0x000867a8) list_medium_line_x2_t4_g2_t1

0x098c,	// (0x000867c2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x098c,	// (0x000867c2) list_medium_line_x2_t4_g2_t2

0x09a1,	// (0x000867d7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09a1,	// (0x000867d7) list_medium_line_x2_t4_g2_t3

0x01e6,	// (0x0008601c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00095b3b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00095b3b) list_medium_line_x2_t4_g2_t

0x09b6,	// (0x000867ec) list_medium_line_t3_right_iconx2_g1

0x08ba,	// (0x000866f0) list_medium_line_t3_right_iconx2_g2

0x09be,	// (0x000867f4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00095b44) list_medium_line_t3_right_iconx2_g

0x09c8,	// (0x000867fe) list_medium_line_t3_right_iconx2_t1

0x09d8,	// (0x0008680e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00095b4b) list_medium_line_t3_right_iconx2_t

0x01a5,	// (0x00085fdb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x3_t4_g4_g1

0x226a,	// (0x000880a0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x3_t4_g4_g2

0x0351,	// (0x00086187) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0351,	// (0x00086187) list_medium_line_x3_t4_g4_g3

0xa2fd,	// (0x00090133) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa2fd,	// (0x00090133) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00095b50) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00095b50) list_medium_line_x3_t4_g4_g

0x09e6,	// (0x0008681c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09e6,	// (0x0008681c) list_medium_line_x3_t4_g4_t1

0x09fd,	// (0x00086833) list_medium_line_x3_t4_g4_t2_ParamLimits

0x09fd,	// (0x00086833) list_medium_line_x3_t4_g4_t2

0x037e,	// (0x000861b4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x037e,	// (0x000861b4) list_medium_line_x3_t4_g4_t3

0x0a18,	// (0x0008684e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a18,	// (0x0008684e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00095b59) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00095b59) list_medium_line_x3_t4_g4_t

0x0a35,	// (0x0008686b) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a35,	// (0x0008686b) list_single_dyc_row_text_pane_t1

0x0a7e,	// (0x000868b4) list_single_dyc_row_text_pane_t2_ParamLimits

0x0a7e,	// (0x000868b4) list_single_dyc_row_text_pane_t2

0xdc12,	// (0x00093a48) list_single_dyc_row_text_pane_t3_ParamLimits

0xdc12,	// (0x00093a48) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00095b62) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00095b62) list_single_dyc_row_text_pane_t

0xdc36,	// (0x00093a6c) list_single_dyc_row_pane_g1_ParamLimits

0xdc36,	// (0x00093a6c) list_single_dyc_row_pane_g1

0xdc42,	// (0x00093a78) list_single_dyc_row_pane_g2_ParamLimits

0xdc42,	// (0x00093a78) list_single_dyc_row_pane_g2

0xdc4e,	// (0x00093a84) list_single_dyc_row_pane_g3_ParamLimits

0xdc4e,	// (0x00093a84) list_single_dyc_row_pane_g3

0xdc5a,	// (0x00093a90) list_single_dyc_row_pane_g4_ParamLimits

0xdc5a,	// (0x00093a90) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00095b6f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00095b6f) list_single_dyc_row_pane_g

0xdc66,	// (0x00093a9c) list_single_dyc_row_text_pane_ParamLimits

0xdc66,	// (0x00093a9c) list_single_dyc_row_text_pane

0xe7c8,	// (0x000945fe) bg_sp_fs_scroll_pane

0xdc85,	// (0x00093abb) thumb_sp_fs_scroll_pane

0x059a,	// (0x000863d0) list_medium_line_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_g1

0x0bb3,	// (0x000869e9) list_medium_line_t1_ParamLimits

0x0bb3,	// (0x000869e9) list_medium_line_t1

0x01a5,	// (0x00085fdb) list_medium_line_x2_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_g1

0x226a,	// (0x000880a0) list_medium_line_x2_g2_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00095b78) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00095b78) list_medium_line_x2_g

0xdc8e,	// (0x00093ac4) list_medium_line_x2_t1_ParamLimits

0xdc8e,	// (0x00093ac4) list_medium_line_x2_t1

0x01a5,	// (0x00085fdb) list_medium_line_x3_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x3_g1

0x226a,	// (0x000880a0) list_medium_line_x3_g2_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00095b78) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00095b78) list_medium_line_x3_g

0xdc8e,	// (0x00093ac4) list_medium_line_x3_t1_ParamLimits

0xdc8e,	// (0x00093ac4) list_medium_line_x3_t1

0xdca4,	// (0x00093ada) thumb_sp_fs_scroll_pane_g1

0xdcad,	// (0x00093ae3) thumb_sp_fs_scroll_pane_g2

0xdcb6,	// (0x00093aec) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095b7d) thumb_sp_fs_scroll_pane_g

0xdca4,	// (0x00093ada) bg_sp_fs_scroll_pane_g1

0xdcad,	// (0x00093ae3) bg_sp_fs_scroll_pane_g2

0xdcb6,	// (0x00093aec) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095b7d) bg_sp_fs_scroll_pane_g

0x01a5,	// (0x00085fdb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x01a5,	// (0x00085fdb) list_medium_line_x2_t3_g4_g1

0x2276,	// (0x000880ac) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2276,	// (0x000880ac) list_medium_line_x2_t3_g4_g2

0x226a,	// (0x000880a0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x226a,	// (0x000880a0) list_medium_line_x2_t3_g4_g3

0x01b1,	// (0x00085fe7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01b1,	// (0x00085fe7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000950f8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000950f8) list_medium_line_x2_t3_g4_g

0x0bc8,	// (0x000869fe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0bc8,	// (0x000869fe) list_medium_line_x2_t3_g4_t1

0x0be2,	// (0x00086a18) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0be2,	// (0x00086a18) list_medium_line_x2_t3_g4_t2

0x01e6,	// (0x0008601c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01e6,	// (0x0008601c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00095b84) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00095b84) list_medium_line_x2_t3_g4_t

0x059a,	// (0x000863d0) list_medium_line_g2_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_g2_g1

0x05a6,	// (0x000863dc) list_medium_line_g2_g2_ParamLimits

0x05a6,	// (0x000863dc) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00095836) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00095836) list_medium_line_g2_g

0x0bfc,	// (0x00086a32) list_medium_line_g2_t1_ParamLimits

0x0bfc,	// (0x00086a32) list_medium_line_g2_t1

0x059a,	// (0x000863d0) list_medium_line_t3_g2_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_t3_g2_g1

0x05a6,	// (0x000863dc) list_medium_line_t3_g2_g2_ParamLimits

0x05a6,	// (0x000863dc) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00095836) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00095836) list_medium_line_t3_g2_g

0x0c11,	// (0x00086a47) list_medium_line_t3_g2_t1_ParamLimits

0x0c11,	// (0x00086a47) list_medium_line_t3_g2_t1

0x0c28,	// (0x00086a5e) list_medium_line_t3_g2_t2_ParamLimits

0x0c28,	// (0x00086a5e) list_medium_line_t3_g2_t2

0x0c3d,	// (0x00086a73) list_medium_line_t3_g2_t3_ParamLimits

0x0c3d,	// (0x00086a73) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00095b8b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00095b8b) list_medium_line_t3_g2_t

0x08ba,	// (0x000866f0) list_medium_line_right_icon_g1

0x0c56,	// (0x00086a8c) list_medium_line_right_icon_t1

0x059a,	// (0x000863d0) list_medium_line_t2_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_t2_g1

0x0c64,	// (0x00086a9a) list_medium_line_t2_t1_ParamLimits

0x0c64,	// (0x00086a9a) list_medium_line_t2_t1

0x0c7e,	// (0x00086ab4) list_medium_line_t2_t2_ParamLimits

0x0c7e,	// (0x00086ab4) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00095b92) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00095b92) list_medium_line_t2_t

0x059a,	// (0x000863d0) list_medium_line_t3_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_t3_g1

0x0c97,	// (0x00086acd) list_medium_line_t3_t1_ParamLimits

0x0c97,	// (0x00086acd) list_medium_line_t3_t1

0x0cae,	// (0x00086ae4) list_medium_line_t3_t2_ParamLimits

0x0cae,	// (0x00086ae4) list_medium_line_t3_t2

0x0cc3,	// (0x00086af9) list_medium_line_t3_t3_ParamLimits

0x0cc3,	// (0x00086af9) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00095b97) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00095b97) list_medium_line_t3_t

0x059a,	// (0x000863d0) list_medium_line_g3_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_g3_g1

0x0cd5,	// (0x00086b0b) list_medium_line_g3_g2_ParamLimits

0x0cd5,	// (0x00086b0b) list_medium_line_g3_g2

0x05a6,	// (0x000863dc) list_medium_line_g3_g3_ParamLimits

0x05a6,	// (0x000863dc) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00095b9e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00095b9e) list_medium_line_g3_g

0x0ce1,	// (0x00086b17) list_medium_line_g3_t1_ParamLimits

0x0ce1,	// (0x00086b17) list_medium_line_g3_t1

0x059a,	// (0x000863d0) list_medium_line_t2_g3_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_t2_g3_g1

0x0cd5,	// (0x00086b0b) list_medium_line_t2_g3_g2_ParamLimits

0x0cd5,	// (0x00086b0b) list_medium_line_t2_g3_g2

0x05a6,	// (0x000863dc) list_medium_line_t2_g3_g3_ParamLimits

0x05a6,	// (0x000863dc) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00095b9e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00095b9e) list_medium_line_t2_g3_g

0x0cf6,	// (0x00086b2c) list_medium_line_t2_g3_t1_ParamLimits

0x0cf6,	// (0x00086b2c) list_medium_line_t2_g3_t1

0x0d0d,	// (0x00086b43) list_medium_line_t2_g3_t2_ParamLimits

0x0d0d,	// (0x00086b43) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00095ba5) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00095ba5) list_medium_line_t2_g3_t

0x059a,	// (0x000863d0) list_medium_line_t3_g3_g1_ParamLimits

0x059a,	// (0x000863d0) list_medium_line_t3_g3_g1

0x0cd5,	// (0x00086b0b) list_medium_line_t3_g3_g2_ParamLimits

0x0cd5,	// (0x00086b0b) list_medium_line_t3_g3_g2

0x05a6,	// (0x000863dc) list_medium_line_t3_g3_g3_ParamLimits

0x05a6,	// (0x000863dc) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00095b9e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00095b9e) list_medium_line_t3_g3_g

0x0d28,	// (0x00086b5e) list_medium_line_t3_g3_t1_ParamLimits

0x0d28,	// (0x00086b5e) list_medium_line_t3_g3_t1

0x0d3c,	// (0x00086b72) list_medium_line_t3_g3_t2_ParamLimits

0x0d3c,	// (0x00086b72) list_medium_line_t3_g3_t2

0x0d4e,	// (0x00086b84) list_medium_line_t3_g3_t3_ParamLimits

0x0d4e,	// (0x00086b84) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00095baa) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00095baa) list_medium_line_t3_g3_t

0x09b6,	// (0x000867ec) list_medium_line_right_iconx2_g1

0x08ba,	// (0x000866f0) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095bb1) list_medium_line_right_iconx2_g

0x0d62,	// (0x00086b98) list_medium_line_right_iconx2_t1

0x09b6,	// (0x000867ec) list_medium_line_t2_right_iconx2_g1

0x08ba,	// (0x000866f0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095bb1) list_medium_line_t2_right_iconx2_g

0x0d70,	// (0x00086ba6) list_medium_line_t2_right_iconx2_t1

0x0d80,	// (0x00086bb6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00095bb6) list_medium_line_t2_right_iconx2_t

0x0d92,	// (0x00086bc8) list_medium_line_x4_t4_t1

0x0da0,	// (0x00086bd6) list_medium_line_x4_t4_t2

0x0db0,	// (0x00086be6) list_medium_line_x4_t4_t3

0x0dc0,	// (0x00086bf6) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00095bbb) list_medium_line_x4_t4_t

0xa34c,	// (0x00090182) tport_appsw_pane_ParamLimits

0xa34c,	// (0x00090182) tport_appsw_pane

0xa364,	// (0x0009019a) tport_contact_pane_ParamLimits

0xa364,	// (0x0009019a) tport_contact_pane

0xa37c,	// (0x000901b2) tport_listscroll_pane_ParamLimits

0xa37c,	// (0x000901b2) tport_listscroll_pane

0xa396,	// (0x000901cc) cell_tport_appsw_pane_ParamLimits

0xa396,	// (0x000901cc) cell_tport_appsw_pane

0xc9b9,	// (0x000927ef) tport_appsw_pane_g1_ParamLimits

0xc9b9,	// (0x000927ef) tport_appsw_pane_g1

0xdcbf,	// (0x00093af5) tport_contact_pane_g1

0xd57c,	// (0x000933b2) tport_contact_pane_t1

0xdcc8,	// (0x00093afe) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00095bc4) tport_contact_pane_t

0xdcd6,	// (0x00093b0c) list_tport_pane

0xdcdf,	// (0x00093b15) scroll_pane_cp_030

0xa3de,	// (0x00090214) cell_tport_appsw_pane_g1

0xa3ee,	// (0x00090224) cell_tport_appsw_pane_t1

0xa3fc,	// (0x00090232) grid_highlight_pane_cp019

0xa404,	// (0x0009023a) list_tport_double_graphic_pane_ParamLimits

0xa404,	// (0x0009023a) list_tport_double_graphic_pane

0x125d,	// (0x00087093) list_highlight_pane_cp023_ParamLimits

0x125d,	// (0x00087093) list_highlight_pane_cp023

0xa411,	// (0x00090247) list_tport_double_graphic_pane_g1_ParamLimits

0xa411,	// (0x00090247) list_tport_double_graphic_pane_g1

0xa41e,	// (0x00090254) list_tport_double_graphic_pane_t1_ParamLimits

0xa41e,	// (0x00090254) list_tport_double_graphic_pane_t1

0xa433,	// (0x00090269) list_tport_double_graphic_pane_t2_ParamLimits

0xa433,	// (0x00090269) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00095bd0) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00095bd0) list_tport_double_graphic_pane_t

0xe7c8,	// (0x000945fe) main_cale_note_pane

0x8669,	// (0x0008e49f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8669,	// (0x0008e49f) cell_vitu2_function_top_wide_pane_cp01

0x9dd7,	// (0x0008fc0d) wait_bar_pane_cp05_ParamLimits

0x125d,	// (0x00087093) listscroll_cmail_pane

0xdce8,	// (0x00093b1e) list_cmail_pane

0xca40,	// (0x00092876) list_cmail_body_pane

0xa445,	// (0x0009027b) list_single_cmail_header_caption_pane

0xa45c,	// (0x00090292) list_single_cmail_header_detail_pane_ParamLimits

0xa45c,	// (0x00090292) list_single_cmail_header_detail_pane

0xdcf8,	// (0x00093b2e) list_single_cmail_header_caption_pane_t1

0x0dd0,	// (0x00086c06) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0dd0,	// (0x00086c06) list_single_cmail_header_detail_pane_g1

0xf0b5,	// (0x00094eeb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b5,	// (0x00094eeb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00095bd5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00095bd5) list_single_cmail_header_detail_pane_g

0xdd1c,	// (0x00093b52) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdd1c,	// (0x00093b52) list_single_cmail_header_detail_pane_t1

0xdd7c,	// (0x00093bb2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdd7c,	// (0x00093bb2) list_single_cmail_header_editor_pane_bg

0xd71d,	// (0x00093553) list_cmail_body_pane_g1

0xdd93,	// (0x00093bc9) list_cmail_body_pane_t1

0xca08,	// (0x0009283e) list_single_cmail_header_editor_pane_bg_g1

0x28d6,	// (0x0008870c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xca18,	// (0x0009284e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xca10,	// (0x00092846) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcc6b,	// (0x00092aa1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xca38,	// (0x0009286e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xca28,	// (0x0009285e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xca30,	// (0x00092866) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x28b6,	// (0x000886ec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa486,	// (0x000902bc) calenote_gesture_pane_ParamLimits

0xa486,	// (0x000902bc) calenote_gesture_pane

0xa4a6,	// (0x000902dc) calenote_window_pane_ParamLimits

0xa4a6,	// (0x000902dc) calenote_window_pane

0xdda1,	// (0x00093bd7) popup_note_window_cp01

0xa4c2,	// (0x000902f8) calenote_swipe_1_pane_ParamLimits

0xa4c2,	// (0x000902f8) calenote_swipe_1_pane

0xa1d9,	// (0x0009000f) calenote_swipe_2_pane_ParamLimits

0xa1d9,	// (0x0009000f) calenote_swipe_2_pane

0xda6d,	// (0x000938a3) calenote_swipe_1_pane_g1_ParamLimits

0xda6d,	// (0x000938a3) calenote_swipe_1_pane_g1

0xda7a,	// (0x000938b0) calenote_swipe_1_pane_g2_ParamLimits

0xda7a,	// (0x000938b0) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00095af9) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00095af9) calenote_swipe_1_pane_g

0xddb3,	// (0x00093be9) calenote_swipe_1_pane_t1_ParamLimits

0xddb3,	// (0x00093be9) calenote_swipe_1_pane_t1

0xda6d,	// (0x000938a3) calenote_swipe_2_pane_g1_ParamLimits

0xda6d,	// (0x000938a3) calenote_swipe_2_pane_g1

0xddd2,	// (0x00093c08) calenote_swipe_2_pane_g2_ParamLimits

0xddd2,	// (0x00093c08) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00095be1) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00095be1) calenote_swipe_2_pane_g

0xddde,	// (0x00093c14) calenote_swipe_2_pane_t1_ParamLimits

0xddde,	// (0x00093c14) calenote_swipe_2_pane_t1

0xe7c8,	// (0x000945fe) main_mup_navstr_pane

0x7339,	// (0x0008d16f) main_mup3_pane_t7_ParamLimits

0x7339,	// (0x0008d16f) main_mup3_pane_t7

0xc556,	// (0x0009238c) main_mp4_pane_g6_ParamLimits

0xc556,	// (0x0009238c) main_mp4_pane_g6

0xc77e,	// (0x000925b4) main_image3_pane_t4_ParamLimits

0xc77e,	// (0x000925b4) main_image3_pane_t4

0xa4d7,	// (0x0009030d) popup_navstr_preview_pane_ParamLimits

0xa4d7,	// (0x0009030d) popup_navstr_preview_pane

0xa4eb,	// (0x00090321) scroll_navstr_pane_ParamLimits

0xa4eb,	// (0x00090321) scroll_navstr_pane

0xe7c8,	// (0x000945fe) bg_popup_preview_window_pane_cp04

0xde05,	// (0x00093c3b) popup_navstr_preview_pane_t1

0xa4ff,	// (0x00090335) scroll_navstr_pane_g1_ParamLimits

0xa4ff,	// (0x00090335) scroll_navstr_pane_g1

0xa513,	// (0x00090349) scroll_navstr_pane_t1_ParamLimits

0xa513,	// (0x00090349) scroll_navstr_pane_t1

0xddaa,	// (0x00093be0) bg_button_pane_cp014

0xddaa,	// (0x00093be0) bg_button_pane_cp030

0x0860,	// (0x00086696) list_double_fisheye_pane_g4_ParamLimits

0x0860,	// (0x00086696) list_double_fisheye_pane_g4

0x086c,	// (0x000866a2) list_double_fisheye_pane_g5_ParamLimits

0x086c,	// (0x000866a2) list_double_fisheye_pane_g5

0xb35a,	// (0x00091190) sp_fs_scroll_pane_cp03

0xdb45,	// (0x0009397b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdb51,	// (0x00093987) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00095b16) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdb5d,	// (0x00093993) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdcf0,	// (0x00093b26) sp_fs_scroll_pane_cp02

0x17dc,	// (0x00087612) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x17dc,	// (0x00087612) popup_sp_fs_calendar_preview_list_single_pane

0xe7c8,	// (0x000945fe) main_cam6_pano_pane

0x125d,	// (0x00087093) main_mup3_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_phacti_pane

0x9caa,	// (0x0008fae0) bg_button_pane_cp11

0x9cc4,	// (0x0008fafa) main_mobtv_info_pane_g2_ParamLimits

0x9cc4,	// (0x0008fafa) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00095a76) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00095a76) main_mobtv_info_pane_g

0x9ea1,	// (0x0008fcd7) sc_clock_pane_t5_ParamLimits

0x9ea1,	// (0x0008fcd7) sc_clock_pane_t5

0x9f5c,	// (0x0008fd92) main_radioblah_pane_g1_ParamLimits

0xd9b9,	// (0x000937ef) main_radioblah_pane_t3_ParamLimits

0xd9b9,	// (0x000937ef) main_radioblah_pane_t3

0xd9d1,	// (0x00093807) main_radioblah_pane_t4_ParamLimits

0xd9d1,	// (0x00093807) main_radioblah_pane_t4

0x9f84,	// (0x0008fdba) main_radioblah_text_pane_ParamLimits

0x9f84,	// (0x0008fdba) main_radioblah_text_pane

0x9f96,	// (0x0008fdcc) main_radioblah_info_pane_g1_ParamLimits

0xa02f,	// (0x0008fe65) main_radioblah_info_pane_t4_ParamLimits

0xa02f,	// (0x0008fe65) main_radioblah_info_pane_t4

0x125d,	// (0x00087093) main_sp_fs_calendar_pane

0xa52a,	// (0x00090360) main_phacti_pane_g1

0xa532,	// (0x00090368) phacti_note_pane_ParamLimits

0xa532,	// (0x00090368) phacti_note_pane

0xde1c,	// (0x00093c52) phacti_term_pane_ParamLimits

0xde1c,	// (0x00093c52) phacti_term_pane

0xde31,	// (0x00093c67) phacti_note_pane_t1_ParamLimits

0xde31,	// (0x00093c67) phacti_note_pane_t1

0xde48,	// (0x00093c7e) phacti_term_pane_g1

0xde50,	// (0x00093c86) phacti_term_pane_t1_ParamLimits

0xde50,	// (0x00093c86) phacti_term_pane_t1

0xde7a,	// (0x00093cb0) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2262,	// (0x00088098) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00095beb) popup_sp_fs_calendar_preview_list_single_pane_g

0xde82,	// (0x00093cb8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde82,	// (0x00093cb8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde97,	// (0x00093ccd) aid_popup_sp_fs_bg_corner_pane

0xbb95,	// (0x000919cb) popup_sp_fs_calendar_preview_bg_pane_g1

0xe7c8,	// (0x000945fe) popup_sp_fs_calendar_preview_bg_pane

0xde9f,	// (0x00093cd5) popup_sp_fs_calendar_preview_list_pane

0xb67a,	// (0x000914b0) bg_main_sp_fs_cale_pane_ParamLimits

0xb67a,	// (0x000914b0) bg_main_sp_fs_cale_pane

0xdea7,	// (0x00093cdd) listscroll_cale_mrui_pane_ParamLimits

0xdea7,	// (0x00093cdd) listscroll_cale_mrui_pane

0xca8c,	// (0x000928c2) listscroll_sp_fs_schedule_track_pane

0xdebc,	// (0x00093cf2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdebc,	// (0x00093cf2) main_sp_fs_ctrlbar_pane_cp01

0xdecf,	// (0x00093d05) main_sp_fs_ribbon_pane

0xded7,	// (0x00093d0d) popup_sp_fs_cale_preview_window

0xa5a7,	// (0x000903dd) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa5a7,	// (0x000903dd) list_single_sp_fs_schedule_track_pane

0x125d,	// (0x00087093) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x125d,	// (0x00087093) bg_sp_fs_highlight_list_pane_cp03

0xa5bb,	// (0x000903f1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa5bb,	// (0x000903f1) list_single_sp_fs_schedule_track_pane_g1

0xa5c7,	// (0x000903fd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa5c7,	// (0x000903fd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00095bf0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00095bf0) list_single_sp_fs_schedule_track_pane_g

0xa5d3,	// (0x00090409) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa5d3,	// (0x00090409) list_single_sp_fs_schedule_track_pane_t1

0xa5ed,	// (0x00090423) sp_fs_schedule_track_pane_ParamLimits

0xa5ed,	// (0x00090423) sp_fs_schedule_track_pane

0xdee9,	// (0x00093d1f) sp_fs_schedule_track_pane_g1

0xdef1,	// (0x00093d27) sp_fs_schedule_track_pane_g2

0xdef9,	// (0x00093d2f) sp_fs_schedule_track_pane_g3

0xdf01,	// (0x00093d37) sp_fs_schedule_track_pane_g4

0xdf09,	// (0x00093d3f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00095bf5) sp_fs_schedule_track_pane_g

0xca08,	// (0x0009283e) bg_sp_fs_schedule_viewer_highlight_g1

0x28d6,	// (0x0008870c) bg_sp_fs_schedule_viewer_highlight_g2

0xca10,	// (0x00092846) bg_sp_fs_schedule_viewer_highlight_g3

0xca18,	// (0x0009284e) bg_sp_fs_schedule_viewer_highlight_g4

0xcc6b,	// (0x00092aa1) bg_sp_fs_schedule_viewer_highlight_g5

0xca28,	// (0x0009285e) bg_sp_fs_schedule_viewer_highlight_g6

0xca30,	// (0x00092866) bg_sp_fs_schedule_viewer_highlight_g7

0xca38,	// (0x0009286e) bg_sp_fs_schedule_viewer_highlight_g8

0x28b6,	// (0x000886ec) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00095c00) bg_sp_fs_schedule_viewer_highlight_g

0xe7c8,	// (0x000945fe) bg_main_sp_fs_ribbon_pane

0xa5fe,	// (0x00090434) main_sp_fs_ribbon_pane_g1

0xdf11,	// (0x00093d47) main_sp_fs_ribbon_pane_t1

0xa607,	// (0x0009043d) main_sp_fs_ribbon_pane_t2

0xdf20,	// (0x00093d56) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00095c13) main_sp_fs_ribbon_pane_t

0xdf2f,	// (0x00093d65) main_sp_fs_ribbon_scheduler_pane

0xdf37,	// (0x00093d6d) bg_main_sp_fs_ribbon_pane_g1

0xdf40,	// (0x00093d76) bg_main_sp_fs_ribbon_pane_g2

0xdf49,	// (0x00093d7f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00095c1a) bg_main_sp_fs_ribbon_pane_g

0xdf51,	// (0x00093d87) main_sp_fs_ribbon_scheduler_pane_g1

0xdf5a,	// (0x00093d90) main_sp_fs_ribbon_scheduler_pane_g2

0xdf63,	// (0x00093d99) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00095c21) main_sp_fs_ribbon_scheduler_pane_g

0xdf6c,	// (0x00093da2) list_cale_mrui_pane

0xa616,	// (0x0009044c) sp_fs_scroll_pane_cp07_ParamLimits

0xa616,	// (0x0009044c) sp_fs_scroll_pane_cp07

0xa632,	// (0x00090468) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa632,	// (0x00090468) bg_sp_fs_schedule_viewer_highlight

0xdf79,	// (0x00093daf) list_single_sp_fs_schedule_track_pane_cp01

0xdf81,	// (0x00093db7) list_sp_fs_schedule_track_pane

0xdf89,	// (0x00093dbf) sp_fs_scroll_pane_cp06_ParamLimits

0xdf89,	// (0x00093dbf) sp_fs_scroll_pane_cp06

0xbb95,	// (0x000919cb) bgmain_sp_fs_calendar_pane_g1

0x0de8,	// (0x00086c1e) list_single_cale_mrui_pane_ParamLimits

0x0de8,	// (0x00086c1e) list_single_cale_mrui_pane

0xdf9b,	// (0x00093dd1) list_single_cale_mrui_row_pane_ParamLimits

0xdf9b,	// (0x00093dd1) list_single_cale_mrui_row_pane

0xdfa8,	// (0x00093dde) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdfa8,	// (0x00093dde) list_single_cale_mrui_row_pane_g1

0xdfed,	// (0x00093e23) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdfed,	// (0x00093e23) list_single_cale_mrui_row_pane_t1

0x0e09,	// (0x00086c3f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e09,	// (0x00086c3f) list_single_cale_mrui_row_pane_t2

0xdfff,	// (0x00093e35) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdfff,	// (0x00093e35) list_single_cale_mrui_row_pane_t3

0xe02e,	// (0x00093e64) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe02e,	// (0x00093e64) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00095c2f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00095c2f) list_single_cale_mrui_row_pane_t

0x0e71,	// (0x00086ca7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e71,	// (0x00086ca7) list_single_cmail_header_editor_pane_bg_cp01

0x0e97,	// (0x00086ccd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0e97,	// (0x00086ccd) list_single_cmail_header_editor_pane_bg_cp02

0xa642,	// (0x00090478) main_radioblah_text_pane_t1_ParamLimits

0xa642,	// (0x00090478) main_radioblah_text_pane_t1

0xe05d,	// (0x00093e93) cam6_indi_pane_cp01

0xe065,	// (0x00093e9b) cam6_mode_pane_cp01

0xe06d,	// (0x00093ea3) cam6_pano_pane

0xe076,	// (0x00093eac) cam6_zoom_pane_cp01

0xe07e,	// (0x00093eb4) cam6_pano_image_pane

0xe089,	// (0x00093ebf) cam6_pano_pane_g1

0xd71d,	// (0x00093553) cam6_pano_pane_g2

0xe092,	// (0x00093ec8) cam6_pano_pane_g3

0xe09b,	// (0x00093ed1) cam6_pano_pane_g4

0xc1b9,	// (0x00091fef) cam6_pano_pane_g5

0xe0a4,	// (0x00093eda) cam6_pano_pane_g6

0xe0ae,	// (0x00093ee4) cam6_pano_pane_g7

0xe0b6,	// (0x00093eec) cam6_pano_pane_g8

0xe0bf,	// (0x00093ef5) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00095c38) cam6_pano_pane_g

0xe7c8,	// (0x000945fe) main_browser_tag_pane

0xddfd,	// (0x00093c33) grid_navstr_albumart_pane

0xe0ca,	// (0x00093f00) cell_navstr_albumart_pane_ParamLimits

0xe0ca,	// (0x00093f00) cell_navstr_albumart_pane

0xe0ea,	// (0x00093f20) cell_navstr_albumart_pane_g1

0xb48b,	// (0x000912c1) cell_navstr_albumart_pane_g2

0xb49b,	// (0x000912d1) cell_navstr_albumart_pane_g3

0xb493,	// (0x000912c9) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00095c4b) cell_navstr_albumart_pane_g

0xa65c,	// (0x00090492) bt_list_pane_ParamLimits

0xa65c,	// (0x00090492) bt_list_pane

0xa670,	// (0x000904a6) bt_list_pane_t1

0xa67f,	// (0x000904b5) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00095c54) bt_list_pane_t

0xe7c8,	// (0x000945fe) main_cale_prevew_pane

0xa68e,	// (0x000904c4) popup_cale_preview_window_ParamLimits

0xa68e,	// (0x000904c4) popup_cale_preview_window

0x125d,	// (0x00087093) bg_popup_preview_window_pane_cp05_ParamLimits

0x125d,	// (0x00087093) bg_popup_preview_window_pane_cp05

0xe0f2,	// (0x00093f28) list_cale_preview_pane_ParamLimits

0xe0f2,	// (0x00093f28) list_cale_preview_pane

0xa6a9,	// (0x000904df) list_double_cale_preview_pane_ParamLimits

0xa6a9,	// (0x000904df) list_double_cale_preview_pane

0xa6bb,	// (0x000904f1) list_single_cale_preview_pane_ParamLimits

0xa6bb,	// (0x000904f1) list_single_cale_preview_pane

0xa6d1,	// (0x00090507) list_single_cale_preview_pane_g1

0xa6d9,	// (0x0009050f) list_single_cale_preview_pane_t1_ParamLimits

0xa6d9,	// (0x0009050f) list_single_cale_preview_pane_t1

0xa6ee,	// (0x00090524) list_double_cale_preview_pane_g1

0xa6f6,	// (0x0009052c) list_double_cale_preview_pane_t1_ParamLimits

0xa6f6,	// (0x0009052c) list_double_cale_preview_pane_t1

0xa70b,	// (0x00090541) list_double_cale_preview_pane_t2_ParamLimits

0xa70b,	// (0x00090541) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00095c59) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00095c59) list_double_cale_preview_pane_t

0xe7c8,	// (0x000945fe) main_ezdial_pane

0x125d,	// (0x00087093) main_sp_fs_email_pane_ParamLimits

0xa237,	// (0x0009006d) cmail_ddmenu_btn01_pane_ParamLimits

0xa237,	// (0x0009006d) cmail_ddmenu_btn01_pane

0xa24a,	// (0x00090080) cmail_ddmenu_btn02_pane_ParamLimits

0xa24a,	// (0x00090080) cmail_ddmenu_btn02_pane

0xa26d,	// (0x000900a3) cmail_ddmenu_btn03_pane_ParamLimits

0xa26d,	// (0x000900a3) cmail_ddmenu_btn03_pane

0xa293,	// (0x000900c9) main_sp_fs_ctrlbar_pane_ParamLimits

0xa2b7,	// (0x000900ed) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xca40,	// (0x00092876) list_cmail_body_pane_ParamLimits

0xdd06,	// (0x00093b3c) bg_button_pane_cp12

0xdd0f,	// (0x00093b45) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdd0f,	// (0x00093b45) list_single_cmail_header_detail_pane_g3

0xdd58,	// (0x00093b8e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdd58,	// (0x00093b8e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00095bdc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00095bdc) list_single_cmail_header_detail_pane_t

0xde65,	// (0x00093c9b) phacti_term_pane_t2_ParamLimits

0xde65,	// (0x00093c9b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00095be6) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00095be6) phacti_term_pane_t

0xe0fe,	// (0x00093f34) aid_size_list_single_double

0xa723,	// (0x00090559) popup_ezdial_listscroll_window

0xa73f,	// (0x00090575) popup_number_entry_window_cp01

0x1eb7,	// (0x00087ced) bg_popup_call_pane_cp09

0xe10a,	// (0x00093f40) ezdial_list_pane

0xe112,	// (0x00093f48) scroll_pane_cp23

0xb67a,	// (0x000914b0) bg_button_pane_cp028_ParamLimits

0xb67a,	// (0x000914b0) bg_button_pane_cp028

0xa74d,	// (0x00090583) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa74d,	// (0x00090583) cmail_ddmenu_btn01_pane_g1

0xa759,	// (0x0009058f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa759,	// (0x0009058f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00095c5e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00095c5e) cmail_ddmenu_btn01_pane_g

0xe11a,	// (0x00093f50) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe11a,	// (0x00093f50) cmail_ddmenu_btn01_pane_t1

0xb67a,	// (0x000914b0) bg_button_pane_cp029_ParamLimits

0xb67a,	// (0x000914b0) bg_button_pane_cp029

0xa76d,	// (0x000905a3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa76d,	// (0x000905a3) cmail_ddmenu_btn02_pane_g1

0xa785,	// (0x000905bb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa785,	// (0x000905bb) cmail_ddmenu_btn02_pane_t1

0x125d,	// (0x00087093) bg_button_pane_cp031_ParamLimits

0x125d,	// (0x00087093) bg_button_pane_cp031

0xa76d,	// (0x000905a3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa76d,	// (0x000905a3) cmail_ddmenu_btn03_pane_g1

0xa785,	// (0x000905bb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa785,	// (0x000905bb) cmail_ddmenu_btn03_pane_t1

0x7ee0,	// (0x0008dd16) cell_dialer2_keypad_pane_t1_ParamLimits

0x7efa,	// (0x0008dd30) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7efa,	// (0x0008dd30) cell_dialer2_keypad_pane_t1_copy1

0x9b11,	// (0x0008f947) ncimui_group_button_pane

0x125d,	// (0x00087093) main_sp_fs_calendar_pane_ParamLimits

0xa445,	// (0x0009027b) list_single_cmail_header_caption_pane_ParamLimits

0xf0c1,	// (0x00094ef7) aid_recal_txt_sm_pane

0xe7c8,	// (0x000945fe) mian_recal_day_pane

0xded7,	// (0x00093d0d) popup_sp_fs_cale_preview_window_ParamLimits

0xe130,	// (0x00093f66) list_recal_day_pane

0xe173,	// (0x00093fa9) list_single_recal_day_pane_ParamLimits

0xe173,	// (0x00093fa9) list_single_recal_day_pane

0xe185,	// (0x00093fbb) list_single_recal_day_pane_g1_ParamLimits

0xe185,	// (0x00093fbb) list_single_recal_day_pane_g1

0xe191,	// (0x00093fc7) list_single_recal_day_pane_g2_ParamLimits

0xe191,	// (0x00093fc7) list_single_recal_day_pane_g2

0xe1a1,	// (0x00093fd7) list_single_recal_day_pane_g3_ParamLimits

0xe1a1,	// (0x00093fd7) list_single_recal_day_pane_g3

0x0eb7,	// (0x00086ced) list_single_recal_day_pane_g4_ParamLimits

0x0eb7,	// (0x00086ced) list_single_recal_day_pane_g4

0xe1ad,	// (0x00093fe3) list_single_recal_day_pane_g5_ParamLimits

0xe1ad,	// (0x00093fe3) list_single_recal_day_pane_g5

0xe1bd,	// (0x00093ff3) list_single_recal_day_pane_g6_ParamLimits

0xe1bd,	// (0x00093ff3) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00095c6d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00095c6d) list_single_recal_day_pane_g

0xe1d1,	// (0x00094007) list_single_recal_day_pane_t1

0xe1e3,	// (0x00094019) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00095c78) list_single_recal_day_pane_t

0xa7a9,	// (0x000905df) ncimui_query_button_pane_ParamLimits

0xa7a9,	// (0x000905df) ncimui_query_button_pane

0xa7b9,	// (0x000905ef) ncimui_query_button_pane_t1_ParamLimits

0xa7b9,	// (0x000905ef) ncimui_query_button_pane_t1

0xe1f5,	// (0x0009402b) ncimui_query_button_pane_t2_ParamLimits

0xe1f5,	// (0x0009402b) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00095c7d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00095c7d) ncimui_query_button_pane_t

0xa7cc,	// (0x00090602) query_button_pane_ParamLimits

0xa7cc,	// (0x00090602) query_button_pane

0xe7c8,	// (0x000945fe) bg_button_pane_cp0028

0xe208,	// (0x0009403e) query_button_pane_t1

0x5f88,	// (0x0008bdbe) main_tport_pane_ParamLimits

0xa309,	// (0x0009013f) bg_popup_window_pane_cp01_ParamLimits

0xa309,	// (0x0009013f) bg_popup_window_pane_cp01

0xa324,	// (0x0009015a) heading_pane_cp08_ParamLimits

0xa324,	// (0x0009015a) heading_pane_cp08

0xa337,	// (0x0009016d) heading_pane_cp07_ParamLimits

0xa337,	// (0x0009016d) heading_pane_cp07

0xa3de,	// (0x00090214) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00095bc9) cell_tport_appsw_pane_g

0x03c0,	// (0x000861f6) input_candi_list_open_g1

0x36a1,	// (0x000894d7) list_cale_time_pane_g6_ParamLimits

0x36a1,	// (0x000894d7) list_cale_time_pane_g6

0x6d51,	// (0x0008cb87) aid_size_touch_calib_1_ParamLimits

0x6d51,	// (0x0008cb87) aid_size_touch_calib_1

0x6d63,	// (0x0008cb99) aid_size_touch_calib_2_ParamLimits

0x6d63,	// (0x0008cb99) aid_size_touch_calib_2

0x6d7b,	// (0x0008cbb1) aid_size_touch_calib_3_ParamLimits

0x6d7b,	// (0x0008cbb1) aid_size_touch_calib_3

0x6d99,	// (0x0008cbcf) aid_size_touch_calib_4_ParamLimits

0x6d99,	// (0x0008cbcf) aid_size_touch_calib_4

0x6db1,	// (0x0008cbe7) main_touch_calib_button_group_pane_ParamLimits

0x6db1,	// (0x0008cbe7) main_touch_calib_button_group_pane

0x6dc9,	// (0x0008cbff) main_touch_calib_pane_g1_ParamLimits

0x6ddb,	// (0x0008cc11) main_touch_calib_pane_g2_ParamLimits

0x6ded,	// (0x0008cc23) main_touch_calib_pane_g3_ParamLimits

0x6dff,	// (0x0008cc35) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x00095587) main_touch_calib_pane_g_ParamLimits

0x6e11,	// (0x0008cc47) main_touch_calib_pane_t1_ParamLimits

0x6e2b,	// (0x0008cc61) main_touch_calib_pane_t2_ParamLimits

0x6e45,	// (0x0008cc7b) main_touch_calib_pane_t3_ParamLimits

0x6e59,	// (0x0008cc8f) main_touch_calib_pane_t4_ParamLimits

0x6e6d,	// (0x0008cca3) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x00095590) main_touch_calib_pane_t_ParamLimits

0xbf59,	// (0x00091d8f) list_single_fp_cale_pane_g3_ParamLimits

0xbf59,	// (0x00091d8f) list_single_fp_cale_pane_g3

0x125d,	// (0x00087093) bg_button_pane_cp012_ParamLimits

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp03_ParamLimits

0x8e1d,	// (0x0008ec53) cell_vitu2_function_top_pane_g1_ParamLimits

0x125d,	// (0x00087093) bg_vkb2_func_pane_cp04_ParamLimits

0x9a9f,	// (0x0008f8d5) main_ncimui_button_group_pane_ParamLimits

0x9a9f,	// (0x0008f8d5) main_ncimui_button_group_pane

0x9aff,	// (0x0008f935) main_ncimui_pane_t3_ParamLimits

0x9aff,	// (0x0008f935) main_ncimui_pane_t3

0xde13,	// (0x00093c49) phacti_button_group_pane

0xe0fe,	// (0x00093f34) aid_size_list_single_double_ParamLimits

0xa723,	// (0x00090559) popup_ezdial_listscroll_window_ParamLimits

0xa73f,	// (0x00090575) popup_number_entry_window_cp01_ParamLimits

0xa7df,	// (0x00090615) phacti_button_pane_ParamLimits

0xa7df,	// (0x00090615) phacti_button_pane

0xe7c8,	// (0x000945fe) bg_button_pane_cp14

0xe216,	// (0x0009404c) phacti_button_pane_t1

0xa7f0,	// (0x00090626) main_touch_calib_button_pane_ParamLimits

0xa7f0,	// (0x00090626) main_touch_calib_button_pane

0xef05,	// (0x00094d3b) bg_button_pane_cp18_ParamLimits

0xef05,	// (0x00094d3b) bg_button_pane_cp18

0xe224,	// (0x0009405a) main_touch_calib_button_pane_t1_ParamLimits

0xe224,	// (0x0009405a) main_touch_calib_button_pane_t1

0xe23a,	// (0x00094070) main_touch_calib_button_pane_t2_ParamLimits

0xe23a,	// (0x00094070) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00095c82) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00095c82) main_touch_calib_button_pane_t

0xe7c8,	// (0x000945fe) cell_ncimui_button_pane

0xe7c8,	// (0x000945fe) bg_button_pane_cp032

0xe258,	// (0x0009408e) cell_ncimui_button_pane_t1

0xc75e,	// (0x00092594) image3_infobar_pane_ParamLimits

0xc75e,	// (0x00092594) image3_infobar_pane

0x9ecd,	// (0x0008fd03) fs_bigclock_status_pane_ParamLimits

0x9ecd,	// (0x0008fd03) fs_bigclock_status_pane

0x9eda,	// (0x0008fd10) main_fs_bigclock_clock_pane_ParamLimits

0x9eda,	// (0x0008fd10) main_fs_bigclock_clock_pane

0x9efa,	// (0x0008fd30) main_fs_bigclock_indi_pane_ParamLimits

0x9efa,	// (0x0008fd30) main_fs_bigclock_indi_pane

0x9f24,	// (0x0008fd5a) main_fs_bigclock_swipe_pane_ParamLimits

0x9f24,	// (0x0008fd5a) main_fs_bigclock_swipe_pane

0xe7c8,	// (0x000945fe) main_fs_clock_dumped_data

0xd82a,	// (0x00093660) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd82a,	// (0x00093660) list_single_fs_bigclock_indicator_pane_g1

0xd845,	// (0x0009367b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd845,	// (0x0009367b) list_single_fs_bigclock_indicator_pane_g2

0xd85f,	// (0x00093695) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd85f,	// (0x00093695) list_single_fs_bigclock_indicator_pane_g3

0xd879,	// (0x000936af) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd879,	// (0x000936af) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00095aaa) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00095aaa) list_single_fs_bigclock_indicator_pane_g

0xd8a4,	// (0x000936da) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd8a4,	// (0x000936da) list_single_fs_bigclock_indicator_pane_t1

0xd8cc,	// (0x00093702) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd8cc,	// (0x00093702) list_single_fs_bigclock_indicator_pane_t2

0xd8f4,	// (0x0009372a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd8f4,	// (0x0009372a) list_single_fs_bigclock_indicator_pane_t3

0xd91c,	// (0x00093752) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd91c,	// (0x00093752) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00095ab5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00095ab5) list_single_fs_bigclock_indicator_pane_t

0xe266,	// (0x0009409c) image3_infobar_fav_pane_ParamLimits

0xe266,	// (0x0009409c) image3_infobar_fav_pane

0xe276,	// (0x000940ac) image3_infobar_loc_pane_ParamLimits

0xe276,	// (0x000940ac) image3_infobar_loc_pane

0xe28a,	// (0x000940c0) image3_infobar_time_pane_ParamLimits

0xe28a,	// (0x000940c0) image3_infobar_time_pane

0xbb95,	// (0x000919cb) image3_infobar_time_pane_g1

0xe29a,	// (0x000940d0) image3_infobar_time_pane_t1

0xbb95,	// (0x000919cb) image3_infobar_loc_pane_g1

0xe2a8,	// (0x000940de) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00095c87) image3_infobar_loc_pane_g

0xe2b0,	// (0x000940e6) image3_infobar_loc_pane_t1

0xbb95,	// (0x000919cb) image3_infobar_fav_pane_g1

0xe2be,	// (0x000940f4) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00095c8c) image3_infobar_fav_pane_g

0xe2c6,	// (0x000940fc) fs_bigclock_status_battery_pane

0xe2cf,	// (0x00094105) fs_bigclock_status_signal_pane

0xe2d8,	// (0x0009410e) fs_bigclock_status_title_pane

0xe2e1,	// (0x00094117) fs_bigclock_status_signal_pane_g1

0xe2ea,	// (0x00094120) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00095c91) fs_bigclock_status_signal_pane_g

0xe2f2,	// (0x00094128) fs_bigclock_status_battery_pane_g1

0xe2fb,	// (0x00094131) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00095c96) fs_bigclock_status_battery_pane_g

0xe303,	// (0x00094139) fs_bigclock_status_title_pane_t1

0xbb95,	// (0x000919cb) main_fs_bigclock_clock_pane_g1

0xe311,	// (0x00094147) main_fs_bigclock_clock_pane_g2

0xe31a,	// (0x00094150) main_fs_bigclock_clock_pane_g3

0xe31a,	// (0x00094150) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00095c9b) main_fs_bigclock_clock_pane_g

0xe322,	// (0x00094158) main_fs_bigclock_clock_pane_t1

0xa805,	// (0x0009063b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00095ca4) main_fs_bigclock_clock_pane_t

0xe330,	// (0x00094166) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe330,	// (0x00094166) list_single_fs_bigclock_indicator_pane

0xe341,	// (0x00094177) list_single_fs_bigclock_pane_ParamLimits

0xe341,	// (0x00094177) list_single_fs_bigclock_pane

0xe367,	// (0x0009419d) main_fs_bigclock_indicator_pane_t1

0xe376,	// (0x000941ac) list_single_fs_bigclock_pane_g1

0xe37e,	// (0x000941b4) list_single_fs_bigclock_pane_t1

0xbb95,	// (0x000919cb) main_fs_bigclock_swipe_pane_g1

0xe3c1,	// (0x000941f7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00095cb5) main_fs_bigclock_swipe_pane_g

0xe3c9,	// (0x000941ff) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe3c9,	// (0x000941ff) main_fs_bigclock_swipe_pane_t1

0x3981,	// (0x000897b7) call_type_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_btmg_pane

0xdfd4,	// (0x00093e0a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdfd4,	// (0x00093e0a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00095c28) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00095c28) list_single_cale_mrui_row_pane_g

0xe159,	// (0x00093f8f) list_recal_vselct_arw_lo_pane

0xe161,	// (0x00093f97) list_recal_vselct_arw_up_pane

0xe169,	// (0x00093f9f) list_recal_vselct_pane

0xa858,	// (0x0009068e) btmg_button_pane

0xa862,	// (0x00090698) main_btmg_pane_g1

0xe7c8,	// (0x000945fe) bg_button_pane_cp044

0xe3e6,	// (0x0009421c) btmg_button_pane_t1

0xb666,	// (0x0009149c) aid_listscroll_gen

0x125d,	// (0x00087093) main_cntbar_detail_pane

0xdce8,	// (0x00093b1e) list_cmail_folder_pane

0xb35a,	// (0x00091190) sp_fs_scroll_pane_cp03_ParamLimits

0x0ed7,	// (0x00086d0d) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ed7,	// (0x00086d0d) list_single_fs_dyc_pane_cp01

0xe3f4,	// (0x0009422a) aid_size_cmail_indent

0xe3fd,	// (0x00094233) list_single_dyc_row_pane_cp01

0xa89e,	// (0x000906d4) cntbar_detail_list_pane_ParamLimits

0xa89e,	// (0x000906d4) cntbar_detail_list_pane

0xa8ea,	// (0x00090720) main_cntbar_detail_cont_pane_ParamLimits

0xa8ea,	// (0x00090720) main_cntbar_detail_cont_pane

0xb35a,	// (0x00091190) scroll_pane_cp032_ParamLimits

0xb35a,	// (0x00091190) scroll_pane_cp032

0xa8fe,	// (0x00090734) cntbar_detail_list_event_pane_ParamLimits

0xa8fe,	// (0x00090734) cntbar_detail_list_event_pane

0xa8ae,	// (0x000906e4) cntbar_detail_list_shct_pane

0x292c,	// (0x00088762) aid_list_gen

0xe406,	// (0x0009423c) aid_scroll

0xe40f,	// (0x00094245) aid_size_touch_scroll_bar

0x9345,	// (0x0008f17b) aid_list_double

0xa90e,	// (0x00090744) aid_list_single

0x9345,	// (0x0008f17b) aid_list_single_lg

0x0eed,	// (0x00086d23) aid_list_z_g_a_sm

0xa917,	// (0x0009074d) aid_list_z_g_d

0x0ef5,	// (0x00086d2b) aid_txt_z_prm

0x0f03,	// (0x00086d39) aid_txt_z_prm_cp01

0x0f11,	// (0x00086d47) aid_txt_z_sec

0xa91f,	// (0x00090755) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa91f,	// (0x00090755) main_cntbar_detail_cont_pane_g1

0xa933,	// (0x00090769) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa933,	// (0x00090769) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00095cba) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00095cba) main_cntbar_detail_cont_pane_g

0xe418,	// (0x0009424e) main_cntbar_detail_cont_pane_t1

0xe426,	// (0x0009425c) main_cntbar_detail_cont_pane_t2

0xe434,	// (0x0009426a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00095cbf) main_cntbar_detail_cont_pane_t

0xa943,	// (0x00090779) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa943,	// (0x00090779) cell_cntbar_detail_list_shct_pane

0xe442,	// (0x00094278) cntbar_detail_list_shct_pane_g1

0xe44b,	// (0x00094281) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00095cc6) cntbar_detail_list_shct_pane_g

0xa957,	// (0x0009078d) cntbar_detail_list_event_pane_g1_ParamLimits

0xa957,	// (0x0009078d) cntbar_detail_list_event_pane_g1

0xa963,	// (0x00090799) cntbar_detail_list_event_pane_g2_ParamLimits

0xa963,	// (0x00090799) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00095ccb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00095ccb) cntbar_detail_list_event_pane_g

0xa9cf,	// (0x00090805) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9cf,	// (0x00090805) cntbar_detail_list_event_pane_t1

0xa9e4,	// (0x0009081a) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9e4,	// (0x0009081a) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00095cd8) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00095cd8) cntbar_detail_list_event_pane_t

0xbb95,	// (0x000919cb) cell_cntbar_detail_list_shct_pane_g1

0x3fa0,	// (0x00089dd6) navi_pane_mv_g3

0x125d,	// (0x00087093) main_cntbar_detail_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_notif_wgt_pane

0xc4f0,	// (0x00092326) aid_tch_main_mp4_pane_g4

0xc6f2,	// (0x00092528) popup_slider_window_cp02

0xe14f,	// (0x00093f85) list_recal_day_event_pane

0xa86c,	// (0x000906a2) cntbar_detail_btn_pane_ParamLimits

0xa86c,	// (0x000906a2) cntbar_detail_btn_pane

0xa885,	// (0x000906bb) cntbar_detail_btn_pane_cp01_ParamLimits

0xa885,	// (0x000906bb) cntbar_detail_btn_pane_cp01

0xa8ae,	// (0x000906e4) cntbar_detail_list_shct_pane_ParamLimits

0xa8be,	// (0x000906f4) cntbar_detail_pane_g1_ParamLimits

0xa8be,	// (0x000906f4) cntbar_detail_pane_g1

0xa8ce,	// (0x00090704) cntbar_detail_pane_t1_ParamLimits

0xa8ce,	// (0x00090704) cntbar_detail_pane_t1

0xa96f,	// (0x000907a5) cntbar_detail_list_event_pane_g3_ParamLimits

0xa96f,	// (0x000907a5) cntbar_detail_list_event_pane_g3

0xa987,	// (0x000907bd) cntbar_detail_list_event_pane_g4_ParamLimits

0xa987,	// (0x000907bd) cntbar_detail_list_event_pane_g4

0xa99f,	// (0x000907d5) cntbar_detail_list_event_pane_g5_ParamLimits

0xa99f,	// (0x000907d5) cntbar_detail_list_event_pane_g5

0xa9b7,	// (0x000907ed) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9b7,	// (0x000907ed) cntbar_detail_list_event_pane_g6

0xa9f9,	// (0x0009082f) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9f9,	// (0x0009082f) cntbar_detail_list_event_pane_t3

0xaa0b,	// (0x00090841) popup_notif_wgt_window_ParamLimits

0xaa0b,	// (0x00090841) popup_notif_wgt_window

0xaa24,	// (0x0009085a) popup_submenu_window_cp01_ParamLimits

0xaa24,	// (0x0009085a) popup_submenu_window_cp01

0x1eb7,	// (0x00087ced) bg_popup_window_pane_cp10

0xe454,	// (0x0009428a) listscroll_notif_wgt_pane

0xe466,	// (0x0009429c) list_notif_wgt_window

0xe46f,	// (0x000942a5) scroll_pane_cp033

0xaa3a,	// (0x00090870) list_notif_wgt_row_pane_ParamLimits

0xaa3a,	// (0x00090870) list_notif_wgt_row_pane

0xe478,	// (0x000942ae) aid_size_list_notif_wgt_del

0xe485,	// (0x000942bb) list_notif_wgt_row_pane_g1

0xe491,	// (0x000942c7) list_notif_wgt_row_pane_g2

0xe4a5,	// (0x000942db) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00095cdf) list_notif_wgt_row_pane_g

0xe4b2,	// (0x000942e8) list_notif_wgt_row_pane_t1

0xe4c8,	// (0x000942fe) list_notif_wgt_row_pane_t2

0xe4da,	// (0x00094310) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00095ce6) list_notif_wgt_row_pane_t

0xcc73,	// (0x00092aa9) list_recal_day_event_pane_g1

0xe4ec,	// (0x00094322) list_recal_day_event_pane_t1

0xe7c8,	// (0x000945fe) bg_button_pane_cp045

0xaa4a,	// (0x00090880) cntbar_detail_btn_pane_t1

0xb67a,	// (0x000914b0) main_callh_pane_ParamLimits

0xb67a,	// (0x000914b0) main_callh_pane

0xe7c8,	// (0x000945fe) main_coverflow0_pane

0xe7c8,	// (0x000945fe) main_wgtman_pane

0x9f3c,	// (0x0008fd72) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f3c,	// (0x0008fd72) main_fs_bigclock_unlock_btn_pane

0xa3d6,	// (0x0009020c) bg_button_pane_cp16

0xa3e6,	// (0x0009021c) cell_tport_appsw_pane_g3

0xaa58,	// (0x0009088e) cf0_flow_pane_ParamLimits

0xaa58,	// (0x0009088e) cf0_flow_pane

0xe4fb,	// (0x00094331) listscroll_cf0_pane

0xe506,	// (0x0009433c) main_cf0_pane_g1

0xaa6d,	// (0x000908a3) main_cf0_pane_t1_ParamLimits

0xaa6d,	// (0x000908a3) main_cf0_pane_t1

0xaa84,	// (0x000908ba) main_cf0_pane_t2_ParamLimits

0xaa84,	// (0x000908ba) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00095cf2) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00095cf2) main_cf0_pane_t

0xe518,	// (0x0009434e) scroll_pane_cp11

0xaa9b,	// (0x000908d1) cf0_flow_pane_g1

0xaaa3,	// (0x000908d9) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00095cf7) cf0_flow_pane_g

0xaaab,	// (0x000908e1) cf0_flow_pane_t1

0xe7c8,	// (0x000945fe) main_call6_pane

0xe7c8,	// (0x000945fe) main_calllock_pane

0xaab9,	// (0x000908ef) call6_btn_grp_pane_ParamLimits

0xaab9,	// (0x000908ef) call6_btn_grp_pane

0xaad3,	// (0x00090909) call6_pane_g1_ParamLimits

0xaad3,	// (0x00090909) call6_pane_g1

0xaae8,	// (0x0009091e) popup_call6_1st_window_ParamLimits

0xaae8,	// (0x0009091e) popup_call6_1st_window

0xaaf9,	// (0x0009092f) popup_call6_2nd_window_ParamLimits

0xaaf9,	// (0x0009092f) popup_call6_2nd_window

0xab0a,	// (0x00090940) cell_call6_btn_pane_ParamLimits

0xab0a,	// (0x00090940) cell_call6_btn_pane

0x1eb7,	// (0x00087ced) bg_popup_call2_in_pane_cp03

0xe523,	// (0x00094359) popup_call6_1st_window_g1

0xe52b,	// (0x00094361) popup_call6_1st_window_g2

0xe533,	// (0x00094369) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00095cfc) popup_call6_1st_window_g

0xe53b,	// (0x00094371) popup_call6_1st_window_t1

0xe54a,	// (0x00094380) popup_call6_1st_window_t2

0xe55a,	// (0x00094390) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00095d03) popup_call6_1st_window_t

0x1eb7,	// (0x00087ced) bg_popup_call2_in_pane_cp04

0xe523,	// (0x00094359) popup_call6_2nd_window_g1

0xe52b,	// (0x00094361) popup_call6_2nd_window_g2

0xe533,	// (0x00094369) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00095cfc) popup_call6_2nd_window_g

0xe53b,	// (0x00094371) popup_call6_2nd_window_t1

0xe7c8,	// (0x000945fe) bg_button_pane_cp15

0xe56a,	// (0x000943a0) cell_call6_btn_pane_g1

0xe573,	// (0x000943a9) cell_call6_btn_pane_t1

0xab1e,	// (0x00090954) listscroll_wgtman_pane_ParamLimits

0xab1e,	// (0x00090954) listscroll_wgtman_pane

0xab3f,	// (0x00090975) wgtman_btn_pane_ParamLimits

0xab3f,	// (0x00090975) wgtman_btn_pane

0x3bdb,	// (0x00089a11) aid_scroll_copy1

0xe582,	// (0x000943b8) list_wgtman_pane

0xab82,	// (0x000909b8) wgtman_btn_pane_g1_ParamLimits

0xab82,	// (0x000909b8) wgtman_btn_pane_g1

0xabae,	// (0x000909e4) wgtman_btn_pane_t1_ParamLimits

0xabae,	// (0x000909e4) wgtman_btn_pane_t1

0xe58c,	// (0x000943c2) wgtman_btn_pane_t2_ParamLimits

0xe58c,	// (0x000943c2) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00095d0a) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00095d0a) wgtman_btn_pane_t

0xabeb,	// (0x00090a21) listrow_wgtman_pane_ParamLimits

0xabeb,	// (0x00090a21) listrow_wgtman_pane

0xabfd,	// (0x00090a33) listrow_wgtman_pane_g1

0xac0a,	// (0x00090a40) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00095d0f) listrow_wgtman_pane_g

0x0f1f,	// (0x00086d55) listrow_wgtman_pane_t1

0x0f37,	// (0x00086d6d) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00095d14) listrow_wgtman_pane_t

0x0f5d,	// (0x00086d93) wait_bar_pane_cp09

0xe5a3,	// (0x000943d9) main_calllock_btn_pane

0xe5ad,	// (0x000943e3) main_calllock_pane_g1

0xe7c8,	// (0x000945fe) bg_button_pane_cp17

0xe5b9,	// (0x000943ef) main_calllock_btn_pane_g1

0xe5c2,	// (0x000943f8) main_calllock_btn_pane_t1

0xe7c8,	// (0x000945fe) main_dialer3_pane

0xe7c8,	// (0x000945fe) main_fmrd2_pane

0xbb95,	// (0x000919cb) main_fs_bigclock_unlock_btn_pane_g1

0xe5d9,	// (0x0009440f) main_fs_bigclock_unlock_btn_pane_t1

0xac28,	// (0x00090a5e) area_fmrd2_info_pane_ParamLimits

0xac28,	// (0x00090a5e) area_fmrd2_info_pane

0xac39,	// (0x00090a6f) area_fmrd2_visual_pane_ParamLimits

0xac39,	// (0x00090a6f) area_fmrd2_visual_pane

0xac47,	// (0x00090a7d) fmrd2_indi_pane_ParamLimits

0xac47,	// (0x00090a7d) fmrd2_indi_pane

0xac54,	// (0x00090a8a) area_fmrd2_visual_pane_g1

0xac5c,	// (0x00090a92) area_fmrd2_visual_pane_t1

0xac6c,	// (0x00090aa2) area_fmrd2_visual_pane_t2

0xac7c,	// (0x00090ab2) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00095d1e) area_fmrd2_visual_pane_t

0xac8c,	// (0x00090ac2) area_fmrd2_info_pane_g1

0xac94,	// (0x00090aca) area_fmrd2_info_pane_t1

0xaca4,	// (0x00090ada) area_fmrd2_info_pane_t2

0xacb4,	// (0x00090aea) area_fmrd2_info_pane_t3

0xacc4,	// (0x00090afa) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00095d25) area_fmrd2_info_pane_t

0xacd2,	// (0x00090b08) fmrd2_indi_pane_t1

0xace2,	// (0x00090b18) fmrd2_indi_pane_t2

0xacf2,	// (0x00090b28) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00095d2e) fmrd2_indi_pane_t

0xd888,	// (0x000936be) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd888,	// (0x000936be) list_single_fs_bigclock_indicator_pane_g5

0xd938,	// (0x0009376e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd938,	// (0x0009376e) list_single_fs_bigclock_indicator_pane_t5

0xa546,	// (0x0009037c) aid_cell_bcale_month_pane_ParamLimits

0xa546,	// (0x0009037c) aid_cell_bcale_month_pane

0xa564,	// (0x0009039a) bcale_month_pane_ParamLimits

0xa564,	// (0x0009039a) bcale_month_pane

0xa588,	// (0x000903be) bcale_preview_pane_ParamLimits

0xa588,	// (0x000903be) bcale_preview_pane

0xe37e,	// (0x000941b4) list_single_fs_bigclock_pane_t1_ParamLimits

0xe39d,	// (0x000941d3) list_single_fs_bigclock_pane_t2_ParamLimits

0xe39d,	// (0x000941d3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00095cb0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00095cb0) list_single_fs_bigclock_pane_t

0xe5d1,	// (0x00094407) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00095d19) main_fs_bigclock_unlock_btn_pane_g

0xad02,	// (0x00090b38) aid_dia3_key_size_ParamLimits

0xad02,	// (0x00090b38) aid_dia3_key_size

0xad11,	// (0x00090b47) aid_dia3_listrow_size_ParamLimits

0xad11,	// (0x00090b47) aid_dia3_listrow_size

0xad26,	// (0x00090b5c) dia3_keypad_fun_pane_ParamLimits

0xad26,	// (0x00090b5c) dia3_keypad_fun_pane

0xad42,	// (0x00090b78) dia3_keypad_num_pane_ParamLimits

0xad42,	// (0x00090b78) dia3_keypad_num_pane

0xad5d,	// (0x00090b93) dia3_listscroll_pane_ParamLimits

0xad5d,	// (0x00090b93) dia3_listscroll_pane

0xad70,	// (0x00090ba6) dia3_numentry_pane_ParamLimits

0xad70,	// (0x00090ba6) dia3_numentry_pane

0xe5e7,	// (0x0009441d) dia3_list_pane

0xe5f2,	// (0x00094428) scroll_pane_cp12

0xe7c8,	// (0x000945fe) bg_dia3_numentry_pane

0xad84,	// (0x00090bba) dia3_numentry_pane_t1

0xad93,	// (0x00090bc9) cell_dia3_key_num_pane

0xad9b,	// (0x00090bd1) cell_dia3_key0_fun_pane_ParamLimits

0xad9b,	// (0x00090bd1) cell_dia3_key0_fun_pane

0xadaf,	// (0x00090be5) cell_dia3_key1_fun_pane_ParamLimits

0xadaf,	// (0x00090be5) cell_dia3_key1_fun_pane

0xadc7,	// (0x00090bfd) dia3_listrow_pane

0xd597,	// (0x000933cd) bg_dia3_numentry_pane_g1

0xe7c8,	// (0x000945fe) bg_button_pane_cp21

0xe5fd,	// (0x00094433) cell_dia3_key_num_pane_t1

0xe60b,	// (0x00094441) cell_dia3_key_num_pane_t2

0xe61a,	// (0x00094450) cell_dia3_key_num_pane_t3

0xe629,	// (0x0009445f) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00095d35) cell_dia3_key_num_pane_t

0xe7c8,	// (0x000945fe) bg_button_pane_cp19

0xadd9,	// (0x00090c0f) cell_dia3_key0_fun_pane_g1

0xe7c8,	// (0x000945fe) bg_button_pane_cp20

0xade1,	// (0x00090c17) cell_dia3_key1_fun_pane_g1

0xade9,	// (0x00090c1f) area_left_week_number_pane

0xadf5,	// (0x00090c2b) area_top_day_name_pane

0xae08,	// (0x00090c3e) frame_month_view_pane

0xe638,	// (0x0009446e) grid_month_view_pane

0xae1b,	// (0x00090c51) cell_top_day_name_pane_ParamLimits

0xae1b,	// (0x00090c51) cell_top_day_name_pane

0xae48,	// (0x00090c7e) cell_area_left_week_number_pane_ParamLimits

0xae48,	// (0x00090c7e) cell_area_left_week_number_pane

0xae5c,	// (0x00090c92) cell_month_view_pane_ParamLimits

0xae5c,	// (0x00090c92) cell_month_view_pane

0xe646,	// (0x0009447c) frm_month_g1

0xae89,	// (0x00090cbf) frm_month_g2

0xae9c,	// (0x00090cd2) frm_month_g3

0xaeaf,	// (0x00090ce5) frm_month_g4

0xaec2,	// (0x00090cf8) frm_month_g5

0xaed5,	// (0x00090d0b) frm_month_g6

0xaee8,	// (0x00090d1e) frm_month_g7

0xe653,	// (0x00094489) frm_month_g8

0xaefb,	// (0x00090d31) frm_month_g9

0xaf0b,	// (0x00090d41) frm_month_g10

0xaf1b,	// (0x00090d51) frm_month_g11

0xaf2b,	// (0x00090d61) frm_month_g12

0xaf3d,	// (0x00090d73) frm_month_g13

0xaf4f,	// (0x00090d85) frm_month_g14

0xaf63,	// (0x00090d99) frm_month_g15

0xaf77,	// (0x00090dad) frm_month_g16

0x000f,

0xff08,	// (0x00095d3e) frm_month_g

0xe660,	// (0x00094496) cell_top_day_name_pane_t1

0xaf8b,	// (0x00090dc1) cell_area_left_week_number_pane_g1

0xaf97,	// (0x00090dcd) cell_area_left_week_number_pane_t1

0xbe01,	// (0x00091c37) cell_month_view_pane_g1

0xafaa,	// (0x00090de0) cell_month_view_pane_t1

0xe7c8,	// (0x000945fe) main_fps_pane

0xdb0d,	// (0x00093943) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdb0d,	// (0x00093943) cmail_ddmenu_btn02_pane_cp1

0xdb29,	// (0x0009395f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdb29,	// (0x0009395f) cmail_ddmenu_btn02_pane_cp2

0xa779,	// (0x000905af) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa779,	// (0x000905af) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00095c63) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00095c63) cmail_ddmenu_btn02_pane_g

0xa797,	// (0x000905cd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa797,	// (0x000905cd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00095c68) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00095c68) cmail_ddmenu_btn02_pane_t

0xafbd,	// (0x00090df3) fps_text_pane_ParamLimits

0xafbd,	// (0x00090df3) fps_text_pane

0xafd4,	// (0x00090e0a) main_fps_pane_g1_ParamLimits

0xafd4,	// (0x00090e0a) main_fps_pane_g1

0xafee,	// (0x00090e24) wait_bar_pane_cp010_ParamLimits

0xafee,	// (0x00090e24) wait_bar_pane_cp010

0xafff,	// (0x00090e35) fps_text_pane_t1_ParamLimits

0xafff,	// (0x00090e35) fps_text_pane_t1

0xc8a7,	// (0x000926dd) cam4_image_uncrop_pane_g1

0xc8b0,	// (0x000926e6) cam4_image_uncrop_pane_g2

0x8386,	// (0x0008e1bc) cam4_image_uncrop_pane_g3

0x838f,	// (0x0008e1c5) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00095724) cam4_image_uncrop_pane_g

0xadc7,	// (0x00090bfd) dia3_listrow_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_phob2_pane

0xa3a7,	// (0x000901dd) cell_tport_appsw_pane_cp02_ParamLimits

0xa3a7,	// (0x000901dd) cell_tport_appsw_pane_cp02

0xa3bb,	// (0x000901f1) cell_tport_appsw_pane_cp03_ParamLimits

0xa3bb,	// (0x000901f1) cell_tport_appsw_pane_cp03

0xe7c8,	// (0x000945fe) phob2_contact_card_pane

0xe7c8,	// (0x000945fe) phob2_listscroll_pane

0xe673,	// (0x000944a9) phob2_list_pane

0xe67b,	// (0x000944b1) scroll_pane_cp034

0xb017,	// (0x00090e4d) phob2_cc_data_pane_ParamLimits

0xb017,	// (0x00090e4d) phob2_cc_data_pane

0xb036,	// (0x00090e6c) phob2_cc_listscroll_pane_ParamLimits

0xb036,	// (0x00090e6c) phob2_cc_listscroll_pane

0xb054,	// (0x00090e8a) list_double_large_graphic_phob2_pane_ParamLimits

0xb054,	// (0x00090e8a) list_double_large_graphic_phob2_pane

0xb066,	// (0x00090e9c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb066,	// (0x00090e9c) list_double_large_graphic_phob2_pane_g1

0x0f6f,	// (0x00086da5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f6f,	// (0x00086da5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00095d5f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00095d5f) list_double_large_graphic_phob2_pane_g

0x0f7b,	// (0x00086db1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f7b,	// (0x00086db1) list_double_large_graphic_phob2_pane_t1

0x0f90,	// (0x00086dc6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0f90,	// (0x00086dc6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00095d64) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00095d64) list_double_large_graphic_phob2_pane_t

0xe7c8,	// (0x000945fe) list_highlight_pane_cp024

0xb07c,	// (0x00090eb2) phob2_cc_button_pane

0xb084,	// (0x00090eba) phob2_cc_data_pane_g1_ParamLimits

0xb084,	// (0x00090eba) phob2_cc_data_pane_g1

0xb099,	// (0x00090ecf) phob2_cc_data_pane_g2_ParamLimits

0xb099,	// (0x00090ecf) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00095d69) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00095d69) phob2_cc_data_pane_g

0xb0a9,	// (0x00090edf) phob2_cc_data_pane_t1_ParamLimits

0xb0a9,	// (0x00090edf) phob2_cc_data_pane_t1

0xb0c1,	// (0x00090ef7) phob2_cc_data_pane_t2_ParamLimits

0xb0c1,	// (0x00090ef7) phob2_cc_data_pane_t2

0xb0d9,	// (0x00090f0f) phob2_cc_data_pane_t3_ParamLimits

0xb0d9,	// (0x00090f0f) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00095d6e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00095d6e) phob2_cc_data_pane_t

0xe683,	// (0x000944b9) phob2_cc_list_pane_ParamLimits

0xe683,	// (0x000944b9) phob2_cc_list_pane

0xcd1c,	// (0x00092b52) scroll_pane_cp035_ParamLimits

0xcd1c,	// (0x00092b52) scroll_pane_cp035

0x125d,	// (0x00087093) bg_button_pane_cp033

0xe68f,	// (0x000944c5) phob2_cc_button_pane_g1

0xe69b,	// (0x000944d1) phob2_cc_button_pane_t1

0xe6b0,	// (0x000944e6) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00095d75) phob2_cc_button_pane_t

0xb0f1,	// (0x00090f27) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb0f1,	// (0x00090f27) list_double_large_graphic_phob2_cc_pane

0xb103,	// (0x00090f39) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb103,	// (0x00090f39) list_double_large_graphic_phob2_cc_pane_g1

0x0fa2,	// (0x00086dd8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fa2,	// (0x00086dd8) list_double_large_graphic_phob2_cc_pane_g2

0x0fae,	// (0x00086de4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0fae,	// (0x00086de4) list_double_large_graphic_phob2_cc_pane_g3

0x0fba,	// (0x00086df0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fba,	// (0x00086df0) list_double_large_graphic_phob2_cc_pane_g4

0x0fc6,	// (0x00086dfc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0fc6,	// (0x00086dfc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00095d7a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00095d7a) list_double_large_graphic_phob2_cc_pane_g

0x0fd2,	// (0x00086e08) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0fd2,	// (0x00086e08) list_double_large_graphic_phob2_cc_pane_t1

0x0ffb,	// (0x00086e31) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0ffb,	// (0x00086e31) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00095d85) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00095d85) list_double_large_graphic_phob2_cc_pane_t

0xe6c2,	// (0x000944f8) list_highlight_pane_cp025_ParamLimits

0xe6c2,	// (0x000944f8) list_highlight_pane_cp025

0x125d,	// (0x00087093) bg_button_pane_cp033_ParamLimits

0xe68f,	// (0x000944c5) phob2_cc_button_pane_g1_ParamLimits

0xe69b,	// (0x000944d1) phob2_cc_button_pane_t1_ParamLimits

0xe6b0,	// (0x000944e6) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00095d75) phob2_cc_button_pane_t_ParamLimits

0x126b,	// (0x000870a1) popup_wgtman_window

0xcb22,	// (0x00092958) scroll_pane_cp038

0xab64,	// (0x0009099a) wgtman_btn_pane_cp_01_ParamLimits

0xab64,	// (0x0009099a) wgtman_btn_pane_cp_01

0xe6d0,	// (0x00094506) wgtman_content_pane

0xe6d9,	// (0x0009450f) wgtman_heading_pane

0xe7c8,	// (0x000945fe) bg_heading_pane_cp02

0xe6e2,	// (0x00094518) wgtman_heading_pane_g1

0xe6ea,	// (0x00094520) wgtman_heading_pane_t1

0xe6f8,	// (0x0009452e) scroll_pane_cp036

0xe700,	// (0x00094536) wgtman_list_pane

0xe708,	// (0x0009453e) wgtman_list_pane_t1_ParamLimits

0xe708,	// (0x0009453e) wgtman_list_pane_t1

0xc893,	// (0x000926c9) cam4_grid_pane

0x05e4,	// (0x0008641a) bg_button_pane_cp015_ParamLimits

0x8fac,	// (0x0008ede2) bg_button_pane_cp016_ParamLimits

0x8fbf,	// (0x0008edf5) bg_button_pane_cp017_ParamLimits

0x062a,	// (0x00086460) popup_vitu2_query_window_g3_ParamLimits

0x062a,	// (0x00086460) popup_vitu2_query_window_g3

0x06a5,	// (0x000864db) popup_vitu2_query_window_t6_ParamLimits

0x06a5,	// (0x000864db) popup_vitu2_query_window_t6

0x06d0,	// (0x00086506) popup_vitu2_query_window_t7_ParamLimits

0x06d0,	// (0x00086506) popup_vitu2_query_window_t7

0xc8a7,	// (0x000926dd) cam4_grid_pane_g1

0xc8b0,	// (0x000926e6) cam4_grid_pane_g2

0xe722,	// (0x00094558) cam4_grid_pane_g3

0xe72b,	// (0x00094561) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00095d8a) cam4_grid_pane_g

0x2328,	// (0x0008815e) aid_placing_vt_slider_lsc_ParamLimits

0x2683,	// (0x000884b9) vidtel_button_pane_ParamLimits

0x2683,	// (0x000884b9) vidtel_button_pane

0xe736,	// (0x0009456c) bg_button_pane_cp034

0xb10f,	// (0x00090f45) vidtel_button_pane_g1

0xe740,	// (0x00094576) vidtel_button_pane_t1

0xcc63,	// (0x00092a99) aid_size_vtel_slider_touch

0xcd1c,	// (0x00092b52) scroll_pane_cp039

0xd5d5,	// (0x0009340b) ncim_query_button_pane_cp01_ParamLimits

0xd5f4,	// (0x0009342a) ncimui_query_pane_g1_ParamLimits

0x125d,	// (0x00087093) input_focus_pane_cp012_ParamLimits

0xd619,	// (0x0009344f) ncim_query_entry_pane_t1_ParamLimits

0xcd1c,	// (0x00092b52) scroll_pane_cp039_ParamLimits

0x3e8b,	// (0x00089cc1) navi_pane_bcale_mc_g1

0x3e93,	// (0x00089cc9) navi_pane_bcale_mc_t1

0xdb72,	// (0x000939a8) main_sp_fs_email_pane_g1

0xdb7e,	// (0x000939b4) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00095b1b) main_sp_fs_email_pane_g

0xdfe0,	// (0x00093e16) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdfe0,	// (0x00093e16) list_single_cale_mrui_row_pane_g3

0x0ecd,	// (0x00086d03) list_single_recal_day_pane_g5_event_pane

0xe1c9,	// (0x00093fff) list_single_recal_day_pane_g7

0xe74e,	// (0x00094584) list_recal_day_event_pane_cp01

0xe757,	// (0x0009458d) list_recal_vselct_arw_lo_pane_cp01

0xe75f,	// (0x00094595) list_recal_vselct_arw_up_pane_cp01

0xe767,	// (0x0009459d) list_recal_vselct_pane_cp01

0xcc73,	// (0x00092aa9) list_recal_day_event_pane_cp01_g1

0xe771,	// (0x000945a7) list_recal_day_event_pane_cp01_t1

0xe1d1,	// (0x00094007) list_single_recal_day_pane_t1_ParamLimits

0xe1e3,	// (0x00094019) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00095c78) list_single_recal_day_pane_t_ParamLimits

0xee40,	// (0x00094c76) bg_notes_pane_ParamLimits

0xeee3,	// (0x00094d19) list_notes_pane_ParamLimits

0x15b4,	// (0x000873ea) scroll_pane_cp06_ParamLimits

0xef05,	// (0x00094d3b) main_notes_pane_ParamLimits

0xe7c8,	// (0x000945fe) main_welc_pane

0xb117,	// (0x00090f4d) main_welc_body_pane_ParamLimits

0xb117,	// (0x00090f4d) main_welc_body_pane

0xb135,	// (0x00090f6b) main_welc_opti_pane_ParamLimits

0xb135,	// (0x00090f6b) main_welc_opti_pane

0xb17a,	// (0x00090fb0) main_welc_pane_t1_ParamLimits

0xb17a,	// (0x00090fb0) main_welc_pane_t1

0xb198,	// (0x00090fce) main_welc_body_row_pane_ParamLimits

0xb198,	// (0x00090fce) main_welc_body_row_pane

0xe77f,	// (0x000945b5) main_welc_opti_row_pane_ParamLimits

0xe77f,	// (0x000945b5) main_welc_opti_row_pane

0xe78d,	// (0x000945c3) main_welc_opti_row_pane_g1

0xb1ac,	// (0x00090fe2) main_welc_opti_row_pane_t1

0xe795,	// (0x000945cb) main_welc_body_row_pane_t1

0xe45e,	// (0x00094294) popup_notif_wgt_heading_pane

0xe478,	// (0x000942ae) aid_size_list_notif_wgt_del_ParamLimits

0xe485,	// (0x000942bb) list_notif_wgt_row_pane_g1_ParamLimits

0xe491,	// (0x000942c7) list_notif_wgt_row_pane_g2_ParamLimits

0xe4a5,	// (0x000942db) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00095cdf) list_notif_wgt_row_pane_g_ParamLimits

0xe4b2,	// (0x000942e8) list_notif_wgt_row_pane_t1_ParamLimits

0xe4c8,	// (0x000942fe) list_notif_wgt_row_pane_t2_ParamLimits

0xe4da,	// (0x00094310) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00095ce6) list_notif_wgt_row_pane_t_ParamLimits

0xabfd,	// (0x00090a33) listrow_wgtman_pane_g1_ParamLimits

0xac0a,	// (0x00090a40) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00095d0f) listrow_wgtman_pane_g_ParamLimits

0x0f1f,	// (0x00086d55) listrow_wgtman_pane_t1_ParamLimits

0x0f37,	// (0x00086d6d) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00095d14) listrow_wgtman_pane_t_ParamLimits

0x0f5d,	// (0x00086d93) wait_bar_pane_cp09_ParamLimits

0xe7c8,	// (0x000945fe) bg_popup_heading_pane_cp02

0xe7a4,	// (0x000945da) popup_notif_wgt_heading_pane_g1

0xe7ac,	// (0x000945e2) popup_notif_wgt_heading_pane_t1

0xe7c8,	// (0x000945fe) main_vids_pane

0xe7c8,	// (0x000945fe) vids_listscroll_pane

0xb1bb,	// (0x00090ff1) scroll_pane_cp040

0xe7c8,	// (0x000945fe) vids_list_pane

0xb1c6,	// (0x00090ffc) vids_list_double_pane_ParamLimits

0xb1c6,	// (0x00090ffc) vids_list_double_pane

0xb1d7,	// (0x0009100d) vids_list_double_pane_g1

0xb1e0,	// (0x00091016) vids_list_double_pane_t1

0xb1f0,	// (0x00091026) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00095d98) vids_list_double_pane_t

0x125d,	// (0x00087093) main_ncimui_pane_ParamLimits

0x9ab3,	// (0x0008f8e9) main_ncimui_pane_g1_ParamLimits

0x9abf,	// (0x0008f8f5) main_ncimui_pane_g2_ParamLimits

0x9abf,	// (0x0008f8f5) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00095a20) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00095a20) main_ncimui_pane_g

0xb150,	// (0x00090f86) main_welc_pane_g1_ParamLimits

0xb150,	// (0x00090f86) main_welc_pane_g1

0xb165,	// (0x00090f9b) main_welc_pane_g2_ParamLimits

0xb165,	// (0x00090f9b) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00095d93) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00095d93) main_welc_pane_g

0xee40,	// (0x00094c76) listscroll_mce_pane_ParamLimits

0x4022,	// (0x00089e58) wait_bar_pane_cp10

0xb66e,	// (0x000914a4) main_cale_day_pane_ParamLimits

0xb66e,	// (0x000914a4) main_cale_week_pane_ParamLimits

0xee40,	// (0x00094c76) main_messa_pane_ParamLimits

0x76c2,	// (0x0008d4f8) main_clock2_btn_pane_ParamLimits

0x76c2,	// (0x0008d4f8) main_clock2_btn_pane

0xbfe1,	// (0x00091e17) main_clock2_btn_pane_cp01_ParamLimits

0xbfe1,	// (0x00091e17) main_clock2_btn_pane_cp01

0xdf6c,	// (0x00093da2) list_cale_mrui_pane_ParamLimits

0xe510,	// (0x00094346) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00095ced) main_cf0_pane_g

0xade9,	// (0x00090c1f) area_left_week_number_pane_ParamLimits

0xadf5,	// (0x00090c2b) area_top_day_name_pane_ParamLimits

0xae08,	// (0x00090c3e) frame_month_view_pane_ParamLimits

0xe638,	// (0x0009446e) grid_month_view_pane_ParamLimits

0xe646,	// (0x0009447c) frm_month_g1_ParamLimits

0xae89,	// (0x00090cbf) frm_month_g2_ParamLimits

0xae9c,	// (0x00090cd2) frm_month_g3_ParamLimits

0xaeaf,	// (0x00090ce5) frm_month_g4_ParamLimits

0xaec2,	// (0x00090cf8) frm_month_g5_ParamLimits

0xaed5,	// (0x00090d0b) frm_month_g6_ParamLimits

0xaee8,	// (0x00090d1e) frm_month_g7_ParamLimits

0xe653,	// (0x00094489) frm_month_g8_ParamLimits

0xaefb,	// (0x00090d31) frm_month_g9_ParamLimits

0xaf0b,	// (0x00090d41) frm_month_g10_ParamLimits

0xaf1b,	// (0x00090d51) frm_month_g11_ParamLimits

0xaf2b,	// (0x00090d61) frm_month_g12_ParamLimits

0xaf3d,	// (0x00090d73) frm_month_g13_ParamLimits

0xaf4f,	// (0x00090d85) frm_month_g14_ParamLimits

0xaf63,	// (0x00090d99) frm_month_g15_ParamLimits

0xaf77,	// (0x00090dad) frm_month_g16_ParamLimits

0xff08,	// (0x00095d3e) frm_month_g_ParamLimits

0xe660,	// (0x00094496) cell_top_day_name_pane_t1_ParamLimits

0xaf8b,	// (0x00090dc1) cell_area_left_week_number_pane_g1_ParamLimits

0xaf97,	// (0x00090dcd) cell_area_left_week_number_pane_t1_ParamLimits

0xbe01,	// (0x00091c37) cell_month_view_pane_g1_ParamLimits

0xafaa,	// (0x00090de0) cell_month_view_pane_t1_ParamLimits

0xee38,	// (0x00094c6e) main_clock2_btn_pane_g1

0xe7ba,	// (0x000945f0) main_clock2_btn_pane_t1

0x125d,	// (0x00087093) listscroll_cmail_pane_ParamLimits

0xdb72,	// (0x000939a8) main_sp_fs_email_pane_g1_ParamLimits

0xdb7e,	// (0x000939b4) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00095b1b) main_sp_fs_email_pane_g_ParamLimits

0xe130,	// (0x00093f66) list_recal_day_pane_ParamLimits

0xe141,	// (0x00093f77) mian_recal_day_pane_t1

0x0af4,	// (0x0008692a) list_single_dyc_row_text_pane_t4_ParamLimits

0x0af4,	// (0x0008692a) list_single_dyc_row_text_pane_t4

0x0b3d,	// (0x00086973) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b3d,	// (0x00086973) list_single_dyc_row_text_pane_t5

0xdc24,	// (0x00093a5a) list_single_dyc_row_text_pane_t6_ParamLimits

0xdc24,	// (0x00093a5a) list_single_dyc_row_text_pane_t6

0x3641,	// (0x00089477) aid_mgn_list_cale_time_pane

0x125d,	// (0x00087093) main_gallery2_pane_ParamLimits

0xbff7,	// (0x00091e2d) main_clock2_pane_cp01_t1

0xc007,	// (0x00091e3d) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000955fa) main_clock2_pane_cp01_t

0x19ea,	// (0x00087820) cale_week_scroll_pane_g16_ParamLimits

0x19ea,	// (0x00087820) cale_week_scroll_pane_g16

0x1eb7,	// (0x00087ced) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
