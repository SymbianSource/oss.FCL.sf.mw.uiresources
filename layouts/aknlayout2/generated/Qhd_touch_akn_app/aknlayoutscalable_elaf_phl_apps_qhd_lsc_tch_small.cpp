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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00047994 };

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
0x111a,	// (0x00048aae) Screen

0x1126,	// (0x00048aba) application_window

0x1162,	// (0x00048af6) area_bottom_pane_ParamLimits

0x1162,	// (0x00048af6) area_bottom_pane

0x119b,	// (0x00048b2f) area_top_pane_ParamLimits

0x119b,	// (0x00048b2f) area_top_pane

0xb288,	// (0x00052c1c) call_video_uplink_pane_ParamLimits

0xb288,	// (0x00052c1c) call_video_uplink_pane

0x1229,	// (0x00048bbd) main_pane_ParamLimits

0x1229,	// (0x00048bbd) main_pane

0xb9e0,	// (0x00053374) context_pane

0x61d4,	// (0x0004db68) navi_pane

0x6206,	// (0x0004db9a) popup_cale_events_window_ParamLimits

0x6206,	// (0x0004db9a) popup_cale_events_window

0xb9f3,	// (0x00053387) popup_mup_playback_window

0x621e,	// (0x0004dbb2) signal_pane

0x18ca,	// (0x0004925e) main_browser_pane

0x21a7,	// (0x00049b3b) main_burst_pane

0x5f34,	// (0x0004d8c8) main_calc_pane

0xb972,	// (0x00053306) main_cale_day_pane

0x1ba0,	// (0x00049534) main_cale_month_pane

0xb972,	// (0x00053306) main_cale_week_pane

0x21a7,	// (0x00049b3b) main_call_pane

0xeeee,	// (0x00056882) main_call_poc_pane

0x21a7,	// (0x00049b3b) main_camera_pane

0x21a7,	// (0x00049b3b) main_chi_dic_pane

0x3e0d,	// (0x0004b7a1) main_clock_pane

0xeeee,	// (0x00056882) main_fmradio_pane

0x21a7,	// (0x00049b3b) main_graph_messa_pane

0xeeee,	// (0x00056882) main_help_pane

0x18ca,	// (0x0004925e) main_im_pane

0x155e,	// (0x00048ef2) main_image_pane_ParamLimits

0x155e,	// (0x00048ef2) main_image_pane

0xeeee,	// (0x00056882) main_location2_pane

0x21a7,	// (0x00049b3b) main_location_pane

0x155e,	// (0x00048ef2) main_messa_pane

0xeeee,	// (0x00056882) main_mp2_pane

0x21a7,	// (0x00049b3b) main_mp_pane

0xeeee,	// (0x00056882) main_msg_pane

0xeeee,	// (0x00056882) main_mup_eq_pane

0xeeee,	// (0x00056882) main_mup_pane

0x18ca,	// (0x0004925e) main_notes_pane

0xeeee,	// (0x00056882) main_pec_pane

0xeeee,	// (0x00056882) main_phob_pane

0xeeee,	// (0x00056882) main_pinb_pane

0xeeee,	// (0x00056882) main_postcard_pane

0xeeee,	// (0x00056882) main_qdial_pane

0x21a7,	// (0x00049b3b) main_skin_pane

0xeeee,	// (0x00056882) main_smil2_pane

0x21a7,	// (0x00049b3b) main_smil_pane

0x21a7,	// (0x00049b3b) main_video_pane

0x21a7,	// (0x00049b3b) main_video_tele_pane

0x155e,	// (0x00048ef2) main_viewer_pane_ParamLimits

0x155e,	// (0x00048ef2) main_viewer_pane

0x21a7,	// (0x00049b3b) main_vorec_pane

0x5f88,	// (0x0004d91c) popup_blid_sat_info_window_ParamLimits

0x5f88,	// (0x0004d91c) popup_blid_sat_info_window

0x5fe0,	// (0x0004d974) popup_dyc_status_message_window_ParamLimits

0x5fe0,	// (0x0004d974) popup_dyc_status_message_window

0x5ffa,	// (0x0004d98e) popup_grid_large_graphic_window_ParamLimits

0x5ffa,	// (0x0004d98e) popup_grid_large_graphic_window

0x60b6,	// (0x0004da4a) popup_loc_request_window_ParamLimits

0x60b6,	// (0x0004da4a) popup_loc_request_window

0x61ac,	// (0x0004db40) popup_wml_address_window_ParamLimits

0x61ac,	// (0x0004db40) popup_wml_address_window

0x5d6e,	// (0x0004d702) call_muted_g1

0x4f82,	// (0x0004c916) popup_call_audio_conf_window_ParamLimits

0x4f82,	// (0x0004c916) popup_call_audio_conf_window

0x5d82,	// (0x0004d716) popup_call_audio_first_window_ParamLimits

0x5d82,	// (0x0004d716) popup_call_audio_first_window

0x5df8,	// (0x0004d78c) popup_call_audio_in_window_ParamLimits

0x5df8,	// (0x0004d78c) popup_call_audio_in_window

0x5e34,	// (0x0004d7c8) popup_call_audio_out_window_ParamLimits

0x5e34,	// (0x0004d7c8) popup_call_audio_out_window

0x5e6e,	// (0x0004d802) popup_call_audio_second_window_ParamLimits

0x5e6e,	// (0x0004d802) popup_call_audio_second_window

0x5ec4,	// (0x0004d858) popup_call_audio_wait_window_ParamLimits

0x5ec4,	// (0x0004d858) popup_call_audio_wait_window

0x5ef9,	// (0x0004d88d) popup_number_entry_window_ParamLimits

0x5ef9,	// (0x0004d88d) popup_number_entry_window

0xe11d,	// (0x00055ab1) bg_popup_call_pane_cp05_ParamLimits

0xe11d,	// (0x00055ab1) bg_popup_call_pane_cp05

0xe13d,	// (0x00055ad1) popup_number_entry_window_t1

0xe150,	// (0x00055ae4) popup_number_entry_window_t2

0xe162,	// (0x00055af6) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00056a5e) popup_number_entry_window_t

0xe174,	// (0x00055b08) text_title_cp2

0xe187,	// (0x00055b1b) bg_popup_call_pane_cp_ParamLimits

0xe187,	// (0x00055b1b) bg_popup_call_pane_cp

0xe195,	// (0x00055b29) call_thumbnail_pane

0xe19d,	// (0x00055b31) popup_call_audio_in_window_g1_ParamLimits

0xe19d,	// (0x00055b31) popup_call_audio_in_window_g1

0xe1a9,	// (0x00055b3d) popup_call_audio_in_window_g2_ParamLimits

0xe1a9,	// (0x00055b3d) popup_call_audio_in_window_g2

0xe1b5,	// (0x00055b49) popup_call_audio_in_window_g3_ParamLimits

0xe1b5,	// (0x00055b49) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00056a67) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00056a67) popup_call_audio_in_window_g

0xe1c1,	// (0x00055b55) popup_call_audio_in_window_t1_ParamLimits

0xe1c1,	// (0x00055b55) popup_call_audio_in_window_t1

0xe1dd,	// (0x00055b71) popup_call_audio_in_window_t2_ParamLimits

0xe1dd,	// (0x00055b71) popup_call_audio_in_window_t2

0xe1f9,	// (0x00055b8d) popup_call_audio_in_window_t3_ParamLimits

0xe1f9,	// (0x00055b8d) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00056a6e) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00056a6e) popup_call_audio_in_window_t

0xe187,	// (0x00055b1b) bg_popup_call_pane_cp01_ParamLimits

0xe187,	// (0x00055b1b) bg_popup_call_pane_cp01

0xe195,	// (0x00055b29) call_thumbnail_pane_cp02

0xe20c,	// (0x00055ba0) call_type_pane_cp022

0xe214,	// (0x00055ba8) popup_call_audio_out_window_g1_ParamLimits

0xe214,	// (0x00055ba8) popup_call_audio_out_window_g1

0xe226,	// (0x00055bba) popup_call_audio_out_window_g2_ParamLimits

0xe226,	// (0x00055bba) popup_call_audio_out_window_g2

0xe232,	// (0x00055bc6) popup_call_audio_out_window_g3_ParamLimits

0xe232,	// (0x00055bc6) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00056a75) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00056a75) popup_call_audio_out_window_g

0xe244,	// (0x00055bd8) popup_call_audio_out_window_t1_ParamLimits

0xe244,	// (0x00055bd8) popup_call_audio_out_window_t1

0xe25c,	// (0x00055bf0) popup_call_audio_out_window_t2_ParamLimits

0xe25c,	// (0x00055bf0) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00056a7c) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00056a7c) popup_call_audio_out_window_t

0xe271,	// (0x00055c05) bg_popup_call_pane_ParamLimits

0xe271,	// (0x00055c05) bg_popup_call_pane

0x13f3,	// (0x00048d87) call_thumbnail_pane_cp_ParamLimits

0x13f3,	// (0x00048d87) call_thumbnail_pane_cp

0xe2f5,	// (0x00055c89) call_type_pane_cp01_ParamLimits

0xe2f5,	// (0x00055c89) call_type_pane_cp01

0xe339,	// (0x00055ccd) popup_call_audio_first_window_g1_ParamLimits

0xe339,	// (0x00055ccd) popup_call_audio_first_window_g1

0xe385,	// (0x00055d19) popup_call_audio_first_window_g2_ParamLimits

0xe385,	// (0x00055d19) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00056a81) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00056a81) popup_call_audio_first_window_g

0xed87,	// (0x0005671b) popup_call_audio_first_window_t1_ParamLimits

0xed87,	// (0x0005671b) popup_call_audio_first_window_t1

0xee33,	// (0x000567c7) popup_call_audio_first_window_t4_ParamLimits

0xee33,	// (0x000567c7) popup_call_audio_first_window_t4

0xeebf,	// (0x00056853) popup_call_audio_first_window_t5_ParamLimits

0xeebf,	// (0x00056853) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00056a86) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00056a86) popup_call_audio_first_window_t

0xeeee,	// (0x00056882) bg_popup_call_pane_cp02

0xeef8,	// (0x0005688c) call_type_pane_cp023

0xef00,	// (0x00056894) popup_call_audio_wait_window_g1

0xef08,	// (0x0005689c) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00056a8d) popup_call_audio_wait_window_g

0xef10,	// (0x000568a4) popup_call_audio_wait_window_t3

0xef1e,	// (0x000568b2) bg_popup_call_pane_cp03_ParamLimits

0xef1e,	// (0x000568b2) bg_popup_call_pane_cp03

0xef7e,	// (0x00056912) call_thumbnail_pane_cp011_ParamLimits

0xef7e,	// (0x00056912) call_thumbnail_pane_cp011

0xef8a,	// (0x0005691e) call_type_pane_cp034_ParamLimits

0xef8a,	// (0x0005691e) call_type_pane_cp034

0xefc6,	// (0x0005695a) popup_call_audio_second_window_g1_ParamLimits

0xefc6,	// (0x0005695a) popup_call_audio_second_window_g1

0x1417,	// (0x00048dab) popup_call_audio_second_window_g2_ParamLimits

0x1417,	// (0x00048dab) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00056a92) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00056a92) popup_call_audio_second_window_g

0x1453,	// (0x00048de7) popup_call_audio_second_window_t1_ParamLimits

0x1453,	// (0x00048de7) popup_call_audio_second_window_t1

0x14d4,	// (0x00048e68) popup_call_audio_second_window_t2_ParamLimits

0x14d4,	// (0x00048e68) popup_call_audio_second_window_t2

0x150a,	// (0x00048e9e) popup_call_audio_second_window_t3_ParamLimits

0x150a,	// (0x00048e9e) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00056a97) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00056a97) popup_call_audio_second_window_t

0xeeee,	// (0x00056882) bg_popup_call_pane_cp04

0x1540,	// (0x00048ed4) list_conf_pane

0x1548,	// (0x00048edc) popup_call_audio_conf_window_t1

0x1556,	// (0x00048eea) call_thumbnail_pane_g1

0x155e,	// (0x00048ef2) bg_pinb_pane_ParamLimits

0x155e,	// (0x00048ef2) bg_pinb_pane

0x156c,	// (0x00048f00) find_pinb_pane

0x1575,	// (0x00048f09) listscroll_pinb_pane_ParamLimits

0x1575,	// (0x00048f09) listscroll_pinb_pane

0x1584,	// (0x00048f18) pinb_bg_pane_g1

0x158e,	// (0x00048f22) pinb_bg_pane_g2

0x159a,	// (0x00048f2e) pinb_bg_pane_g3

0x15a6,	// (0x00048f3a) pinb_bg_pane_g4

0x15b2,	// (0x00048f46) pinb_bg_pane_g5

0x15be,	// (0x00048f52) pinb_bg_pane_g6

0x15c9,	// (0x00048f5d) pinb_bg_pane_g7

0x15d4,	// (0x00048f68) pinb_bg_pane_g8

0x15df,	// (0x00048f73) pinb_bg_pane_g9

0x15e9,	// (0x00048f7d) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00056a9e) pinb_bg_pane_g

0x1606,	// (0x00048f9a) grid_pinb_pane

0x160f,	// (0x00048fa3) list_pinb_pane

0x1618,	// (0x00048fac) scroll_pane_cp01_ParamLimits

0x1618,	// (0x00048fac) scroll_pane_cp01

0x162a,	// (0x00048fbe) find_pinb_pane_g1_ParamLimits

0x162a,	// (0x00048fbe) find_pinb_pane_g1

0x1642,	// (0x00048fd6) find_pinb_pane_t1

0x1654,	// (0x00048fe8) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00056ab8) find_pinb_pane_t

0x1669,	// (0x00048ffd) input_focus_pane_cp01_ParamLimits

0x1669,	// (0x00048ffd) input_focus_pane_cp01

0x1675,	// (0x00049009) cell_pinb_pane_ParamLimits

0x1675,	// (0x00049009) cell_pinb_pane

0x169e,	// (0x00049032) cell_pinb_pane_g1_ParamLimits

0x169e,	// (0x00049032) cell_pinb_pane_g1

0x16ae,	// (0x00049042) cell_pinb_pane_g2_ParamLimits

0x16ae,	// (0x00049042) cell_pinb_pane_g2

0x16ba,	// (0x0004904e) cell_pinb_pane_g3_ParamLimits

0x16ba,	// (0x0004904e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00056abd) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00056abd) cell_pinb_pane_g

0xeeee,	// (0x00056882) grid_highlight_pane_cp01

0x16c6,	// (0x0004905a) list_pinb_item_pane_ParamLimits

0x16c6,	// (0x0004905a) list_pinb_item_pane

0xeeee,	// (0x00056882) list_highlight_pane_cp02

0x16d8,	// (0x0004906c) list_pinb_item_pane_g1_ParamLimits

0x16d8,	// (0x0004906c) list_pinb_item_pane_g1

0x16e5,	// (0x00049079) list_pinb_item_pane_g2_ParamLimits

0x16e5,	// (0x00049079) list_pinb_item_pane_g2

0x16f1,	// (0x00049085) list_pinb_item_pane_g3_ParamLimits

0x16f1,	// (0x00049085) list_pinb_item_pane_g3

0x1702,	// (0x00049096) list_pinb_item_pane_g4_ParamLimits

0x1702,	// (0x00049096) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00056ac4) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00056ac4) list_pinb_item_pane_g

0x170e,	// (0x000490a2) list_pinb_item_pane_t1_ParamLimits

0x170e,	// (0x000490a2) list_pinb_item_pane_t1

0x1743,	// (0x000490d7) calc_display_pane

0x176b,	// (0x000490ff) calc_paper_pane

0x178e,	// (0x00049122) grid_calc_pane

0xeeee,	// (0x00056882) bg_list_pane_cp01

0x17bc,	// (0x00049150) clock_g1

0x17c4,	// (0x00049158) clock_g2

0x0001,

0xf139,	// (0x00056acd) clock_g

0x17cc,	// (0x00049160) clock_t1_ParamLimits

0x17cc,	// (0x00049160) clock_t1

0x17e1,	// (0x00049175) clock_t2_ParamLimits

0x17e1,	// (0x00049175) clock_t2

0x17f3,	// (0x00049187) clock_t3_ParamLimits

0x17f3,	// (0x00049187) clock_t3

0x1805,	// (0x00049199) clock_t4_ParamLimits

0x1805,	// (0x00049199) clock_t4

0x1817,	// (0x000491ab) clock_t5_ParamLimits

0x1817,	// (0x000491ab) clock_t5

0x182c,	// (0x000491c0) clock_t6_ParamLimits

0x182c,	// (0x000491c0) clock_t6

0x183e,	// (0x000491d2) clock_t7_ParamLimits

0x183e,	// (0x000491d2) clock_t7

0x1850,	// (0x000491e4) clock_t8_ParamLimits

0x1850,	// (0x000491e4) clock_t8

0x1864,	// (0x000491f8) clock_t9_ParamLimits

0x1864,	// (0x000491f8) clock_t9

0x0008,

0xf13e,	// (0x00056ad2) clock_t_ParamLimits

0xf13e,	// (0x00056ad2) clock_t

0x1878,	// (0x0004920c) popup_clock_analogue_window_cp02

0x1878,	// (0x0004920c) popup_clock_digital_window_cp01

0x1880,	// (0x00049214) listscroll_help_pane

0xeeee,	// (0x00056882) phob_pre_status_pane

0x188a,	// (0x0004921e) grid_qdial_pane

0x155e,	// (0x00048ef2) listscroll_mce_pane

0x155e,	// (0x00048ef2) bg_notes_pane

0x1894,	// (0x00049228) list_notes_pane

0x18a2,	// (0x00049236) scroll_pane_cp06

0x18b6,	// (0x0004924a) bg_calc_paper_pane

0xb2ae,	// (0x00052c42) list_calc_pane

0x18ca,	// (0x0004925e) bg_calc_display_pane

0x18d6,	// (0x0004926a) calc_display_pane_t1

0x18e8,	// (0x0004927c) calc_display_pane_t2

0xb2c8,	// (0x00052c5c) calc_display_pane_t3

0x0002,

0xf151,	// (0x00056ae5) calc_display_pane_t

0x18fa,	// (0x0004928e) cell_calc_pane_ParamLimits

0x18fa,	// (0x0004928e) cell_calc_pane

0x192f,	// (0x000492c3) bg_calc_paper_pane_g1

0x193b,	// (0x000492cf) bg_calc_paper_pane_g2

0x1947,	// (0x000492db) bg_calc_paper_pane_g3

0x1953,	// (0x000492e7) bg_calc_paper_pane_g4

0x195f,	// (0x000492f3) bg_calc_paper_pane_g5

0x196b,	// (0x000492ff) bg_calc_paper_pane_g6

0x197a,	// (0x0004930e) bg_calc_paper_pane_g7

0x1989,	// (0x0004931d) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00056aec) bg_calc_paper_pane_g

0x199c,	// (0x00049330) calc_bg_paper_pane_g9

0x19af,	// (0x00049343) list_calc_item_pane_ParamLimits

0x19af,	// (0x00049343) list_calc_item_pane

0x19c4,	// (0x00049358) list_calc_item_pane_g1

0xb2da,	// (0x00052c6e) list_calc_item_pane_t1_ParamLimits

0xb2da,	// (0x00052c6e) list_calc_item_pane_t1

0x19d1,	// (0x00049365) list_calc_item_pane_t2_ParamLimits

0x19d1,	// (0x00049365) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00056afd) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00056afd) list_calc_item_pane_t

0x19eb,	// (0x0004937f) cell_calc_pane_g1

0x1a0d,	// (0x000493a1) grid_highlight_pane_cp02

0x1a2f,	// (0x000493c3) bg_calc_display_pane_g1

0x1a38,	// (0x000493cc) bg_calc_display_pane_g2

0x1a42,	// (0x000493d6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00056b07) bg_calc_display_pane_g

0x1a4b,	// (0x000493df) cell_qdial_pane_ParamLimits

0x1a4b,	// (0x000493df) cell_qdial_pane

0x1a5f,	// (0x000493f3) cell_qdial_pane_g1_ParamLimits

0x1a5f,	// (0x000493f3) cell_qdial_pane_g1

0x1a75,	// (0x00049409) cell_qdial_pane_g2_ParamLimits

0x1a75,	// (0x00049409) cell_qdial_pane_g2

0x1a86,	// (0x0004941a) cell_qdial_pane_g3_ParamLimits

0x1a86,	// (0x0004941a) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00056b0e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00056b0e) cell_qdial_pane_g

0x1aa8,	// (0x0004943c) cell_qdial_pane_t1_ParamLimits

0x1aa8,	// (0x0004943c) cell_qdial_pane_t1

0x1ac0,	// (0x00049454) cell_qdial_pane_t2_ParamLimits

0x1ac0,	// (0x00049454) cell_qdial_pane_t2

0x1ad3,	// (0x00049467) cell_qdial_pane_t3_ParamLimits

0x1ad3,	// (0x00049467) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00056b17) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00056b17) cell_qdial_pane_t

0xeeee,	// (0x00056882) grid_highlight_pane_cp04

0x1ae6,	// (0x0004947a) thumbnail_qdial_pane_ParamLimits

0x1ae6,	// (0x0004947a) thumbnail_qdial_pane

0x1b42,	// (0x000494d6) list_help_pane

0x1b4b,	// (0x000494df) scroll_pane_cp02

0x1b54,	// (0x000494e8) help_list_pane_t1_ParamLimits

0x1b54,	// (0x000494e8) help_list_pane_t1

0xb2ec,	// (0x00052c80) bg_notes_pane_g2

0xb2f4,	// (0x00052c88) bg_notes_pane_g3

0xb2fc,	// (0x00052c90) notes_bg_pane_g1

0xb304,	// (0x00052c98) notes_bg_pane_g4

0xb30c,	// (0x00052ca0) notes_bg_pane_g5

0xb314,	// (0x00052ca8) notes_bg_pane_g6

0xb31c,	// (0x00052cb0) notes_bg_pane_g7

0xb324,	// (0x00052cb8) notes_bg_pane_g8

0xb32c,	// (0x00052cc0) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00056b35) notes_bg_pane_g

0x1b71,	// (0x00049505) list_notes_text_pane_ParamLimits

0x1b71,	// (0x00049505) list_notes_text_pane

0x1b86,	// (0x0004951a) list_notes_text_pane_g1

0x0230,	// (0x00047bc4) list_notes_text_pane_t1

0x1ba0,	// (0x00049534) listscroll_cale_week_pane

0x1bd5,	// (0x00049569) bg_cale_heading_pane

0x1bed,	// (0x00049581) bg_cale_pane_cp01

0x1c0a,	// (0x0004959e) cale_week_corner_pane

0x1c29,	// (0x000495bd) cale_week_day_heading_pane

0x1c46,	// (0x000495da) cale_week_scroll_pane_g1

0x1c59,	// (0x000495ed) cale_week_scroll_pane_g2

0x1c71,	// (0x00049605) cale_week_scroll_pane_g3

0x1c89,	// (0x0004961d) cale_week_scroll_pane_g4

0x1ca1,	// (0x00049635) cale_week_scroll_pane_g5

0x1cc1,	// (0x00049655) cale_week_scroll_pane_g6

0x1ce1,	// (0x00049675) cale_week_scroll_pane_g7

0x1d01,	// (0x00049695) cale_week_scroll_pane_g8

0x1d25,	// (0x000496b9) cale_week_scroll_pane_g9

0x1d3d,	// (0x000496d1) cale_week_scroll_pane_g10

0x1d55,	// (0x000496e9) cale_week_scroll_pane_g11

0x1d6d,	// (0x00049701) cale_week_scroll_pane_g12

0x1d85,	// (0x00049719) cale_week_scroll_pane_g13

0x1d85,	// (0x00049719) cale_week_scroll_pane_g14

0x1d85,	// (0x00049719) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00056b44) cale_week_scroll_pane_g

0x1dc1,	// (0x00049755) cale_week_time_pane

0x1de5,	// (0x00049779) grid_cale_week_pane

0x1e1d,	// (0x000497b1) scroll_pane_cp08

0x1e3a,	// (0x000497ce) cell_cale_week_pane_ParamLimits

0x1e3a,	// (0x000497ce) cell_cale_week_pane

0x1ec8,	// (0x0004985c) cale_week_day_heading_pane_t1

0x1ef2,	// (0x00049886) cale_week_day_heading_pane_t2

0x1f21,	// (0x000498b5) cale_week_day_heading_pane_t3

0x1f50,	// (0x000498e4) cale_week_day_heading_pane_t4

0x1f7f,	// (0x00049913) cale_week_day_heading_pane_t5

0x1fb6,	// (0x0004994a) cale_week_day_heading_pane_t6

0x1fed,	// (0x00049981) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00056b65) cale_week_day_heading_pane_t

0x2017,	// (0x000499ab) bg_cale_side_pane

0x2025,	// (0x000499b9) cale_week_time_pane_t1

0x203f,	// (0x000499d3) cale_week_time_pane_t2

0x2059,	// (0x000499ed) cale_week_time_pane_t3

0x2073,	// (0x00049a07) cale_week_time_pane_t4

0x208d,	// (0x00049a21) cale_week_time_pane_t5

0x20a7,	// (0x00049a3b) cale_week_time_pane_t6

0x20c1,	// (0x00049a55) cale_week_time_pane_t7

0x20db,	// (0x00049a6f) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00056b74) cale_week_time_pane_t

0x20f5,	// (0x00049a89) cell_cale_week_pane_g2

0x2114,	// (0x00049aa8) cell_cale_week_pane_g3_ParamLimits

0x2114,	// (0x00049aa8) cell_cale_week_pane_g3

0x212c,	// (0x00049ac0) grid_highlight_pane_cp07

0x2134,	// (0x00049ac8) listscroll_gms_pane

0x213e,	// (0x00049ad2) grid_gms_pane

0x2147,	// (0x00049adb) listscroll_gms_pane_g1

0x214f,	// (0x00049ae3) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00056b85) listscroll_gms_pane_g

0x2157,	// (0x00049aeb) scroll_pane_cp010

0x2162,	// (0x00049af6) cell_gms_pane_ParamLimits

0x2162,	// (0x00049af6) cell_gms_pane

0x2175,	// (0x00049b09) cell_gms_pane_g1

0x217d,	// (0x00049b11) cell_gms_pane_g2

0x2185,	// (0x00049b19) cell_gms_pane_g3

0x218e,	// (0x00049b22) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00056b8a) cell_gms_pane_g

0x2197,	// (0x00049b2b) grid_highlight_pane_cp09

0x5d18,	// (0x0004d6ac) phob_pre_status_pane_g1

0x5d20,	// (0x0004d6b4) phob_pre_status_pane_g2

0x5d28,	// (0x0004d6bc) phob_pre_status_pane_g3

0x5d30,	// (0x0004d6c4) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00056f75) phob_pre_status_pane_g

0x5d40,	// (0x0004d6d4) phob_pre_status_pane_t1

0x5d4e,	// (0x0004d6e2) phob_pre_status_pane_t2

0x5d5e,	// (0x0004d6f2) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00056f80) phob_pre_status_pane_t

0x21a7,	// (0x00049b3b) bg_list_pane_cp05

0x21af,	// (0x00049b43) grid_vorec_pane

0x21b7,	// (0x00049b4b) vorec_t1

0x21c5,	// (0x00049b59) vorec_t2

0x21d3,	// (0x00049b67) vorec_t3

0x21e1,	// (0x00049b75) vorec_t4

0xb212,	// (0x00052ba6) vorec_t5

0xb220,	// (0x00052bb4) vorec_t6

0x0004,

0xf1ff,	// (0x00056b93) vorec_t

0xb22e,	// (0x00052bc2) wait_bar_pane_cp01

0x21fd,	// (0x00049b91) cell_vorec_pane_ParamLimits

0x21fd,	// (0x00049b91) cell_vorec_pane

0xb334,	// (0x00052cc8) cell_vorec_pane_g1

0xeeee,	// (0x00056882) grid_highlight_pane_cp05

0x2225,	// (0x00049bb9) cams_zoom_pane

0x2234,	// (0x00049bc8) image_vga_pane

0x224e,	// (0x00049be2) main_camera_pane_g1

0x2260,	// (0x00049bf4) main_camera_pane_g2

0x2270,	// (0x00049c04) main_camera_pane_g3

0x2280,	// (0x00049c14) main_camera_pane_g4

0x2290,	// (0x00049c24) main_camera_pane_g5

0x22a0,	// (0x00049c34) main_camera_pane_g6

0x22b2,	// (0x00049c46) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00056b9e) main_camera_pane_g

0x22ce,	// (0x00049c62) main_camera_pane_t1

0x22e4,	// (0x00049c78) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00056baf) main_camera_pane_t

0x231e,	// (0x00049cb2) cams_zoom_pane_cp_ParamLimits

0x231e,	// (0x00049cb2) cams_zoom_pane_cp

0x2346,	// (0x00049cda) image_cif_pane_ParamLimits

0x2346,	// (0x00049cda) image_cif_pane

0x237c,	// (0x00049d10) image_subqcif_pane

0x2384,	// (0x00049d18) main_video_pane_g1_ParamLimits

0x2384,	// (0x00049d18) main_video_pane_g1

0x23a8,	// (0x00049d3c) main_video_pane_g2_ParamLimits

0x23a8,	// (0x00049d3c) main_video_pane_g2

0x23dc,	// (0x00049d70) main_video_pane_g3_ParamLimits

0x23dc,	// (0x00049d70) main_video_pane_g3

0x240a,	// (0x00049d9e) main_video_pane_g4_ParamLimits

0x240a,	// (0x00049d9e) main_video_pane_g4

0x2438,	// (0x00049dcc) main_video_pane_g5_ParamLimits

0x2438,	// (0x00049dcc) main_video_pane_g5

0x2450,	// (0x00049de4) main_video_pane_g6_ParamLimits

0x2450,	// (0x00049de4) main_video_pane_g6

0x0006,

0xf220,	// (0x00056bb4) main_video_pane_g_ParamLimits

0xf220,	// (0x00056bb4) main_video_pane_g

0x247b,	// (0x00049e0f) main_video_pane_t1_ParamLimits

0x247b,	// (0x00049e0f) main_video_pane_t1

0x24c4,	// (0x00049e58) cams_zoom_pane_g1

0x24cd,	// (0x00049e61) cams_zoom_pane_g2

0x24d6,	// (0x00049e6a) cams_zoom_pane_g3

0x24df,	// (0x00049e73) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00056bc3) cams_zoom_pane_g

0x24fc,	// (0x00049e90) grid_cams_pane

0x2516,	// (0x00049eaa) linegrid_cams_pane

0x252a,	// (0x00049ebe) cell_cams_pane_ParamLimits

0x252a,	// (0x00049ebe) cell_cams_pane

0x254a,	// (0x00049ede) cams_burst_image_pane

0x2552,	// (0x00049ee6) cell_cams_pane_g1

0xeeee,	// (0x00056882) grid_highlight_pane_cp03

0x19eb,	// (0x0004937f) mp_bg_pane_g1

0xeeee,	// (0x00056882) bg_list_pane_cp03

0xb897,	// (0x0005322b) bg_mp_pane

0xb89f,	// (0x00053233) grid_mp_pane

0xb8a7,	// (0x0005323b) media_player_g1

0xb8af,	// (0x00053243) media_player_t1

0xb8bd,	// (0x00053251) media_player_t2

0xb8cb,	// (0x0005325f) media_player_t3

0xb8d9,	// (0x0005326d) media_player_t4

0xb8e7,	// (0x0005327b) media_player_t5

0xb8f5,	// (0x00053289) media_player_t6

0xb903,	// (0x00053297) media_player_t7

0x0006,

0xf5cb,	// (0x00056f5f) media_player_t

0xb911,	// (0x000532a5) wait_bar_pane_cp02

0xf5b0,	// (0x00056f44) main_usb_pane_t

0x5d0f,	// (0x0004d6a3) cell_mp_pane

0x19eb,	// (0x0004937f) cell_mp_pane_g1

0xeeee,	// (0x00056882) grid_highlight_pane_cp06

0x255a,	// (0x00049eee) grid_skin_colour_pane

0x2562,	// (0x00049ef6) list_highlight_pane_cp03

0x256a,	// (0x00049efe) skin_g1

0x2572,	// (0x00049f06) skin_t1

0x2581,	// (0x00049f15) skin_t2

0x0001,

0xf264,	// (0x00056bf8) skin_t

0x258f,	// (0x00049f23) cell_skin_colour_pane_ParamLimits

0x258f,	// (0x00049f23) cell_skin_colour_pane

0x25af,	// (0x00049f43) cell_skin_colour_pane_g1

0x261a,	// (0x00049fae) call_video_g1_ParamLimits

0x261a,	// (0x00049fae) call_video_g1

0x2636,	// (0x00049fca) call_video_g2_ParamLimits

0x2636,	// (0x00049fca) call_video_g2

0x0001,

0xf269,	// (0x00056bfd) call_video_g_ParamLimits

0xf269,	// (0x00056bfd) call_video_g

0x2688,	// (0x0004a01c) call_video_uplink_pane_cp1_ParamLimits

0x2688,	// (0x0004a01c) call_video_uplink_pane_cp1

0x26ed,	// (0x0004a081) call_video_uplink_pane_cp2

0x272f,	// (0x0004a0c3) video_down_crop_pane_ParamLimits

0x272f,	// (0x0004a0c3) video_down_crop_pane

0x2826,	// (0x0004a1ba) video_down_pane_ParamLimits

0x2826,	// (0x0004a1ba) video_down_pane

0x291d,	// (0x0004a2b1) video_down_subqcif_pane_ParamLimits

0x291d,	// (0x0004a2b1) video_down_subqcif_pane

0x2935,	// (0x0004a2c9) video_down_subqcif_pane_cp_ParamLimits

0x2935,	// (0x0004a2c9) video_down_subqcif_pane_cp

0x2972,	// (0x0004a306) im_reading_pane_ParamLimits

0x2972,	// (0x0004a306) im_reading_pane

0x2984,	// (0x0004a318) im_writing_pane_ParamLimits

0x2984,	// (0x0004a318) im_writing_pane

0x29a2,	// (0x0004a336) im_reading_pane_t1

0x29db,	// (0x0004a36f) list_im_pane

0x29ec,	// (0x0004a380) scroll_pane_cp07

0x2a05,	// (0x0004a399) im_writing_pane_t1_ParamLimits

0x2a05,	// (0x0004a399) im_writing_pane_t1

0x2a1a,	// (0x0004a3ae) im_writing_pane_t2_ParamLimits

0x2a1a,	// (0x0004a3ae) im_writing_pane_t2

0x0001,

0xf273,	// (0x00056c07) im_writing_pane_t_ParamLimits

0xf273,	// (0x00056c07) im_writing_pane_t

0xeeee,	// (0x00056882) input_focus_pane_cp04

0xeeee,	// (0x00056882) input_focus_pane_cp05

0x2a37,	// (0x0004a3cb) list_im_single_pane_ParamLimits

0x2a37,	// (0x0004a3cb) list_im_single_pane

0x2a4b,	// (0x0004a3df) list_single_im_pane_t1

0x5ccf,	// (0x0004d663) blid_accuracy_pane

0x5cd7,	// (0x0004d66b) blid_compass_pane

0x5ce1,	// (0x0004d675) main_location_t1

0x5cf1,	// (0x0004d685) main_location_t2

0x5d01,	// (0x0004d695) main_location_t3

0x0002,

0xf5da,	// (0x00056f6e) main_location_t

0xeeee,	// (0x00056882) aid_levels_location

0x19eb,	// (0x0004937f) blid_accuracy_pane_g1

0x19eb,	// (0x0004937f) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00056c69) blid_accuracy_pane_g

0x2a85,	// (0x0004a419) wml_content_pane

0x2ac3,	// (0x0004a457) wml_button_pane_ParamLimits

0x2ac3,	// (0x0004a457) wml_button_pane

0x2ad7,	// (0x0004a46b) wml_list_single_large_pane_ParamLimits

0x2ad7,	// (0x0004a46b) wml_list_single_large_pane

0x2aec,	// (0x0004a480) wml_list_single_medium_pane_ParamLimits

0x2aec,	// (0x0004a480) wml_list_single_medium_pane

0x2b02,	// (0x0004a496) wml_list_single_small_pane_ParamLimits

0x2b02,	// (0x0004a496) wml_list_single_small_pane

0x2b1a,	// (0x0004a4ae) wml_selection_box_pane_ParamLimits

0x2b1a,	// (0x0004a4ae) wml_selection_box_pane

0x2b2d,	// (0x0004a4c1) wml_list_single_pane_t1

0x2b3c,	// (0x0004a4d0) wml_list_single_medium_pane_t1

0x2b4b,	// (0x0004a4df) wml_list_single_large_pane_t1

0x2b5a,	// (0x0004a4ee) input_focus_pane_cp02_ParamLimits

0x2b5a,	// (0x0004a4ee) input_focus_pane_cp02

0x2b6d,	// (0x0004a501) wml_selection_box_pane_g1

0x2b76,	// (0x0004a50a) wml_selection_box_pane_t1_ParamLimits

0x2b76,	// (0x0004a50a) wml_selection_box_pane_t1

0x155e,	// (0x00048ef2) bg_wml_button_pane_ParamLimits

0x155e,	// (0x00048ef2) bg_wml_button_pane

0x2b8e,	// (0x0004a522) wml_button_pane_g1

0x2b96,	// (0x0004a52a) wml_button_pane_t1

0x2b8e,	// (0x0004a522) wml_button_bg_pane_g1

0x2ba6,	// (0x0004a53a) wml_button_bg_pane_g2

0x2bae,	// (0x0004a542) wml_button_bg_pane_g3

0x2bb6,	// (0x0004a54a) wml_button_bg_pane_g4

0x2bbe,	// (0x0004a552) wml_button_bg_pane_g5

0x2bc6,	// (0x0004a55a) wml_button_bg_pane_g6

0x2bce,	// (0x0004a562) wml_button_bg_pane_g7

0x2bd6,	// (0x0004a56a) wml_button_bg_pane_g8

0x2bde,	// (0x0004a572) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00056c0c) wml_button_bg_pane_g

0x2be6,	// (0x0004a57a) bg_list_pane_cp02

0x2bee,	// (0x0004a582) mce_header_pane_ParamLimits

0x2bee,	// (0x0004a582) mce_header_pane

0x2c04,	// (0x0004a598) mce_icon_pane

0x2c04,	// (0x0004a598) mce_image_pane

0x2c0d,	// (0x0004a5a1) mce_text_pane_ParamLimits

0x2c0d,	// (0x0004a5a1) mce_text_pane

0x2c20,	// (0x0004a5b4) scroll_pane_cp03

0x2abb,	// (0x0004a44f) scroll_pane_cp04

0x2c2a,	// (0x0004a5be) scroll_pane_cp05_ParamLimits

0x2c2a,	// (0x0004a5be) scroll_pane_cp05

0x2c36,	// (0x0004a5ca) mce_header_field_pane_ParamLimits

0x2c36,	// (0x0004a5ca) mce_header_field_pane

0x2c4d,	// (0x0004a5e1) mce_header_field_pane_2_ParamLimits

0x2c4d,	// (0x0004a5e1) mce_header_field_pane_2

0x2c63,	// (0x0004a5f7) mce_header_field_pane_3

0x2c6b,	// (0x0004a5ff) list_single_mce_message_pane_ParamLimits

0x2c6b,	// (0x0004a5ff) list_single_mce_message_pane

0x2c80,	// (0x0004a614) list_single_mce_smart_pane_ParamLimits

0x2c80,	// (0x0004a614) list_single_mce_smart_pane

0x2ca0,	// (0x0004a634) input_focus_pane_cp03

0x2ca9,	// (0x0004a63d) list_header_data_pane

0x2cb1,	// (0x0004a645) mce_header_field_pane_t1

0x2cc1,	// (0x0004a655) list_single_mce_header_pane_ParamLimits

0x2cc1,	// (0x0004a655) list_single_mce_header_pane

0x2cd5,	// (0x0004a669) list_single_mce_header_pane_t1

0x2ce4,	// (0x0004a678) list_single_mce_message_pane_g1

0x2cec,	// (0x0004a680) list_single_mce_message_pane_t1

0x2d20,	// (0x0004a6b4) bg_cale_heading_pane_cp01_ParamLimits

0x2d20,	// (0x0004a6b4) bg_cale_heading_pane_cp01

0x2d5a,	// (0x0004a6ee) bg_cale_pane_cp02_ParamLimits

0x2d5a,	// (0x0004a6ee) bg_cale_pane_cp02

0x2d87,	// (0x0004a71b) cale_month_corner_pane

0x2da6,	// (0x0004a73a) cale_month_day_heading_pane_ParamLimits

0x2da6,	// (0x0004a73a) cale_month_day_heading_pane

0x2df8,	// (0x0004a78c) cale_month_pane_g1_ParamLimits

0x2df8,	// (0x0004a78c) cale_month_pane_g1

0x2e27,	// (0x0004a7bb) cale_month_pane_g2_ParamLimits

0x2e27,	// (0x0004a7bb) cale_month_pane_g2

0x2e57,	// (0x0004a7eb) cale_month_pane_g3_ParamLimits

0x2e57,	// (0x0004a7eb) cale_month_pane_g3

0x2e93,	// (0x0004a827) cale_month_pane_g4_ParamLimits

0x2e93,	// (0x0004a827) cale_month_pane_g4

0x2ecf,	// (0x0004a863) cale_month_pane_g5_ParamLimits

0x2ecf,	// (0x0004a863) cale_month_pane_g5

0x2f17,	// (0x0004a8ab) cale_month_pane_g6_ParamLimits

0x2f17,	// (0x0004a8ab) cale_month_pane_g6

0x2f63,	// (0x0004a8f7) cale_month_pane_g7_ParamLimits

0x2f63,	// (0x0004a8f7) cale_month_pane_g7

0x2fb7,	// (0x0004a94b) cale_month_pane_g8_ParamLimits

0x2fb7,	// (0x0004a94b) cale_month_pane_g8

0x300b,	// (0x0004a99f) cale_month_pane_g9_ParamLimits

0x300b,	// (0x0004a99f) cale_month_pane_g9

0x305d,	// (0x0004a9f1) cale_month_pane_g10_ParamLimits

0x305d,	// (0x0004a9f1) cale_month_pane_g10

0x30af,	// (0x0004aa43) cale_month_pane_g11_ParamLimits

0x30af,	// (0x0004aa43) cale_month_pane_g11

0x3101,	// (0x0004aa95) cale_month_pane_g12_ParamLimits

0x3101,	// (0x0004aa95) cale_month_pane_g12

0x3153,	// (0x0004aae7) cale_month_pane_g13_ParamLimits

0x3153,	// (0x0004aae7) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00056c1f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00056c1f) cale_month_pane_g

0x31b7,	// (0x0004ab4b) cale_month_week_pane

0x31db,	// (0x0004ab6f) grid_cale_month_pane_ParamLimits

0x31db,	// (0x0004ab6f) grid_cale_month_pane

0x3224,	// (0x0004abb8) cale_month_day_heading_pane_t1

0x32aa,	// (0x0004ac3e) cale_month_day_heading_pane_t2

0x3323,	// (0x0004acb7) cale_month_day_heading_pane_t3

0x339c,	// (0x0004ad30) cale_month_day_heading_pane_t4

0x341d,	// (0x0004adb1) cale_month_day_heading_pane_t5

0x34a6,	// (0x0004ae3a) cale_month_day_heading_pane_t6

0x352f,	// (0x0004aec3) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00056c3a) cale_month_day_heading_pane_t

0x2017,	// (0x000499ab) bg_cale_side_pane_cp01

0x35c0,	// (0x0004af54) cale_month_week_pane_t1

0x35d9,	// (0x0004af6d) cale_month_week_pane_t2

0x35f2,	// (0x0004af86) cale_month_week_pane_t3

0x360b,	// (0x0004af9f) cale_month_week_pane_t4

0x3624,	// (0x0004afb8) cale_month_week_pane_t5

0x363d,	// (0x0004afd1) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00056c49) cale_month_week_pane_t

0x3656,	// (0x0004afea) cell_cale_month_pane_ParamLimits

0x3656,	// (0x0004afea) cell_cale_month_pane

0xb33e,	// (0x00052cd2) cell_cale_month_pane_g1

0x3784,	// (0x0004b118) cell_cale_month_pane_t1_ParamLimits

0x3784,	// (0x0004b118) cell_cale_month_pane_t1

0x212c,	// (0x00049ac0) grid_highlight_pane_cp08

0x19eb,	// (0x0004937f) main_smil_g1

0x37b0,	// (0x0004b144) smil_status_pane

0x37b9,	// (0x0004b14d) smil_text_pane

0xb7b7,	// (0x0005314b) bg_popup_call3_rect_pane_g8

0xb7bf,	// (0x00053153) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00056f02) bg_popup_call3_rect_pane_g

0xba5a,	// (0x000533ee) smil_status_volume_pane_g1

0x37cd,	// (0x0004b161) smil_status_pane_t1

0xba8d,	// (0x00053421) volume_smil_pane

0x37e4,	// (0x0004b178) list_smil_text_pane

0x37ee,	// (0x0004b182) scroll_pane_cp011

0x37f9,	// (0x0004b18d) smil_text_list_pane_t1_ParamLimits

0x37f9,	// (0x0004b18d) smil_text_list_pane_t1

0xb34a,	// (0x00052cde) aid_volume_smil_ParamLimits

0xb34a,	// (0x00052cde) aid_volume_smil

0x19eb,	// (0x0004937f) smil_volume_pane_g1

0x19eb,	// (0x0004937f) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00056c69) smil_volume_pane_g

0x1ba0,	// (0x00049534) listscroll_cale_day_pane

0x3835,	// (0x0004b1c9) bg_cale_pane

0x384d,	// (0x0004b1e1) list_cale_pane

0x3870,	// (0x0004b204) scroll_pane_cp09

0x3881,	// (0x0004b215) cale_bg_pane_g1

0x3889,	// (0x0004b21d) cale_bg_pane_g2

0x3891,	// (0x0004b225) cale_bg_pane_g3

0x3899,	// (0x0004b22d) cale_bg_pane_g4

0x38a1,	// (0x0004b235) cale_bg_pane_g5

0x38a9,	// (0x0004b23d) cale_bg_pane_g6

0x38b1,	// (0x0004b245) cale_bg_pane_g7

0x38b9,	// (0x0004b24d) cale_bg_pane_g8

0x38c1,	// (0x0004b255) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00056c6e) cale_bg_pane_g

0x38d1,	// (0x0004b265) list_cale_time_pane_ParamLimits

0x38d1,	// (0x0004b265) list_cale_time_pane

0x38e6,	// (0x0004b27a) list_cale_time_pane_g1_ParamLimits

0x38e6,	// (0x0004b27a) list_cale_time_pane_g1

0x38f2,	// (0x0004b286) list_cale_time_pane_g2_ParamLimits

0x38f2,	// (0x0004b286) list_cale_time_pane_g2

0x38ff,	// (0x0004b293) list_cale_time_pane_g3_ParamLimits

0x38ff,	// (0x0004b293) list_cale_time_pane_g3

0x390d,	// (0x0004b2a1) list_cale_time_pane_g4_ParamLimits

0x390d,	// (0x0004b2a1) list_cale_time_pane_g4

0x391b,	// (0x0004b2af) list_cale_time_pane_g5_ParamLimits

0x391b,	// (0x0004b2af) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00056c81) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00056c81) list_cale_time_pane_g

0x3936,	// (0x0004b2ca) list_cale_time_pane_t1_ParamLimits

0x3936,	// (0x0004b2ca) list_cale_time_pane_t1

0x395e,	// (0x0004b2f2) list_cale_time_pane_t2_ParamLimits

0x395e,	// (0x0004b2f2) list_cale_time_pane_t2

0x4028,	// (0x0004b9bc) aid_blid_cardinal_pane

0x4072,	// (0x0004ba06) compass_pane_t4

0x3986,	// (0x0004b31a) list_cale_time_pane_t4_ParamLimits

0x3986,	// (0x0004b31a) list_cale_time_pane_t4

0x4080,	// (0x0004ba14) compass_pane_t5

0x408e,	// (0x0004ba22) compass_pane_t6

0x409c,	// (0x0004ba30) compass_pane_t7

0x4132,	// (0x0004bac6) navi_pane_cc_t1

0x4351,	// (0x0004bce5) aid_phob_thumbnail_center_pane

0x498d,	// (0x0004c321) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00056c8e) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00056c8e) list_cale_time_pane_t

0xe187,	// (0x00055b1b) bg_popup_window_pane_cp02_ParamLimits

0xe187,	// (0x00055b1b) bg_popup_window_pane_cp02

0x39ae,	// (0x0004b342) heading_pane_cp01_ParamLimits

0x39ae,	// (0x0004b342) heading_pane_cp01

0x39ba,	// (0x0004b34e) loc_req_pane_ParamLimits

0x39ba,	// (0x0004b34e) loc_req_pane

0x39ca,	// (0x0004b35e) loc_type_pane_ParamLimits

0x39ca,	// (0x0004b35e) loc_type_pane

0x39dc,	// (0x0004b370) loc_type_pane_t1_ParamLimits

0x39dc,	// (0x0004b370) loc_type_pane_t1

0x39ee,	// (0x0004b382) loc_type_pane_t2_ParamLimits

0x39ee,	// (0x0004b382) loc_type_pane_t2

0x3a00,	// (0x0004b394) loc_type_pane_t3_ParamLimits

0x3a00,	// (0x0004b394) loc_type_pane_t3

0x0002,

0xf301,	// (0x00056c95) loc_type_pane_t_ParamLimits

0xf301,	// (0x00056c95) loc_type_pane_t

0x3a12,	// (0x0004b3a6) list_loc_req_pane

0x3a1c,	// (0x0004b3b0) scroll_pane_cp012

0x3a27,	// (0x0004b3bb) list_single_loc_request_popup_menu_pane_ParamLimits

0x3a27,	// (0x0004b3bb) list_single_loc_request_popup_menu_pane

0x3a34,	// (0x0004b3c8) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3a34,	// (0x0004b3c8) list_single_loc_request_popup_menu_pane_g1

0x3a40,	// (0x0004b3d4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3a40,	// (0x0004b3d4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00056c9c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00056c9c) list_single_loc_request_popup_menu_pane_g

0x3a4c,	// (0x0004b3e0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3a4c,	// (0x0004b3e0) list_single_loc_request_popup_menu_pane_t1

0x155e,	// (0x00048ef2) bg_popup_window_pane_cp03_ParamLimits

0x155e,	// (0x00048ef2) bg_popup_window_pane_cp03

0x3a62,	// (0x0004b3f6) heading_loc_req_pane_ParamLimits

0x3a62,	// (0x0004b3f6) heading_loc_req_pane

0x3a6e,	// (0x0004b402) popup_dyc_status_message_window_g1_ParamLimits

0x3a6e,	// (0x0004b402) popup_dyc_status_message_window_g1

0x3a82,	// (0x0004b416) popup_dyc_status_message_window_t1_ParamLimits

0x3a82,	// (0x0004b416) popup_dyc_status_message_window_t1

0x3a97,	// (0x0004b42b) popup_dyc_status_message_window_t2_ParamLimits

0x3a97,	// (0x0004b42b) popup_dyc_status_message_window_t2

0x3aac,	// (0x0004b440) popup_dyc_status_message_window_t3_ParamLimits

0x3aac,	// (0x0004b440) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00056ca1) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00056ca1) popup_dyc_status_message_window_t

0xeeee,	// (0x00056882) bg_heading_pane_cp01

0x3ac8,	// (0x0004b45c) heading_loc_req_pane_g1

0x3ad0,	// (0x0004b464) heading_loc_req_pane_g2

0x3ad8,	// (0x0004b46c) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00056ca8) heading_loc_req_pane_g

0x3ae0,	// (0x0004b474) heading_loc_req_pane_t1

0x3afb,	// (0x0004b48f) bg_popup_sub_pane_cp01_ParamLimits

0x3afb,	// (0x0004b48f) bg_popup_sub_pane_cp01

0x3b09,	// (0x0004b49d) popup_cale_events_window_g1_ParamLimits

0x3b09,	// (0x0004b49d) popup_cale_events_window_g1

0x3b29,	// (0x0004b4bd) popup_cale_events_window_g2_ParamLimits

0x3b29,	// (0x0004b4bd) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00056cdc) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00056cdc) popup_cale_events_window_g

0x3b49,	// (0x0004b4dd) popup_cale_events_window_t1_ParamLimits

0x3b49,	// (0x0004b4dd) popup_cale_events_window_t1

0x3b5b,	// (0x0004b4ef) popup_cale_events_window_t2_ParamLimits

0x3b5b,	// (0x0004b4ef) popup_cale_events_window_t2

0x3b99,	// (0x0004b52d) popup_cale_events_window_t3_ParamLimits

0x3b99,	// (0x0004b52d) popup_cale_events_window_t3

0x3bd3,	// (0x0004b567) popup_cale_events_window_t4_ParamLimits

0x3bd3,	// (0x0004b567) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00056ce1) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00056ce1) popup_cale_events_window_t

0x3c09,	// (0x0004b59d) call_type_pane

0x3c19,	// (0x0004b5ad) popup_call_status_window_g1

0x3c2d,	// (0x0004b5c1) popup_call_status_window_g2

0x3c41,	// (0x0004b5d5) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00056cea) popup_call_status_window_g

0x3c50,	// (0x0004b5e4) call_type_pane_g1

0x3c59,	// (0x0004b5ed) call_type_pane_g2

0x0001,

0xf35d,	// (0x00056cf1) call_type_pane_g

0xeeee,	// (0x00056882) bg_popup_sub_pane_cp02

0x3c62,	// (0x0004b5f6) listscroll_popup_wml_pane

0x3c6a,	// (0x0004b5fe) list_wml_pane

0x3c74,	// (0x0004b608) scroll_pane_cp013

0x3c7f,	// (0x0004b613) list_single_graphic_popup_wml_pane_ParamLimits

0x3c7f,	// (0x0004b613) list_single_graphic_popup_wml_pane

0x19eb,	// (0x0004937f) list_single_graphic_popup_wml_pane_g1

0x3c93,	// (0x0004b627) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00056cf6) list_single_graphic_popup_wml_pane_g

0x3c9b,	// (0x0004b62f) list_single_graphic_popup_wml_pane_t1

0x3cb1,	// (0x0004b645) aid_call_pane

0x1556,	// (0x00048eea) popup_clock_analogue_window_g1

0x1556,	// (0x00048eea) popup_clock_analogue_window_g2

0xb378,	// (0x00052d0c) popup_clock_analogue_window_g3

0xb378,	// (0x00052d0c) popup_clock_analogue_window_g4

0x19eb,	// (0x0004937f) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00056cfb) popup_clock_analogue_window_g

0xb380,	// (0x00052d14) popup_clock_analogue_window_t1

0xb38e,	// (0x00052d22) clock_digital_number_pane_ParamLimits

0xb38e,	// (0x00052d22) clock_digital_number_pane

0xb39a,	// (0x00052d2e) clock_digital_number_pane_cp02_ParamLimits

0xb39a,	// (0x00052d2e) clock_digital_number_pane_cp02

0xb3a6,	// (0x00052d3a) clock_digital_number_pane_cp03_ParamLimits

0xb3a6,	// (0x00052d3a) clock_digital_number_pane_cp03

0xb3b2,	// (0x00052d46) clock_digital_number_pane_cp04_ParamLimits

0xb3b2,	// (0x00052d46) clock_digital_number_pane_cp04

0xb3c2,	// (0x00052d56) clock_digital_separator_pane_ParamLimits

0xb3c2,	// (0x00052d56) clock_digital_separator_pane

0xb3ce,	// (0x00052d62) popup_clock_digital_window_t1

0x19eb,	// (0x0004937f) clock_digital_number_pane_g1

0x19eb,	// (0x0004937f) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00056c69) clock_digital_number_pane_g

0x19eb,	// (0x0004937f) clock_digital_separator_pane_g1

0x19eb,	// (0x0004937f) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00056c69) clock_digital_separator_pane_g

0xeeee,	// (0x00056882) bg_popup_window_pane_cp04

0x3cb9,	// (0x0004b64d) heading_pane_cp03

0x3cc1,	// (0x0004b655) listscroll_popup_gms_pane

0x3cc9,	// (0x0004b65d) grid_large_graphic_popup_pane

0x3cd3,	// (0x0004b667) listscroll_popup_gms_pane_g1

0x3cdb,	// (0x0004b66f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00056d06) listscroll_popup_gms_pane_g

0x2abb,	// (0x0004a44f) scroll_pane_cp014

0x3ce3,	// (0x0004b677) cell_large_graphic_popup_pane_ParamLimits

0x3ce3,	// (0x0004b677) cell_large_graphic_popup_pane

0x3cfb,	// (0x0004b68f) cell_large_graphic_popup_pane_g1_ParamLimits

0x3cfb,	// (0x0004b68f) cell_large_graphic_popup_pane_g1

0x3d07,	// (0x0004b69b) cell_large_graphic_popup_pane_g2_ParamLimits

0x3d07,	// (0x0004b69b) cell_large_graphic_popup_pane_g2

0x3d13,	// (0x0004b6a7) cell_large_graphic_popup_pane_g3_ParamLimits

0x3d13,	// (0x0004b6a7) cell_large_graphic_popup_pane_g3

0x3d20,	// (0x0004b6b4) cell_large_graphic_popup_pane_g4_ParamLimits

0x3d20,	// (0x0004b6b4) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00056d0b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00056d0b) cell_large_graphic_popup_pane_g

0x3d30,	// (0x0004b6c4) grid_highlight_pane_cp010

0x19eb,	// (0x0004937f) bg_popup_call_pane_g1

0x3d3a,	// (0x0004b6ce) list_single_graphic_popup_conf_pane_ParamLimits

0x3d3a,	// (0x0004b6ce) list_single_graphic_popup_conf_pane

0x3d4d,	// (0x0004b6e1) list_highlight_pane_cp01

0x3d56,	// (0x0004b6ea) list_single_graphic_popup_conf_pane_g1

0x3d5e,	// (0x0004b6f2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00056d14) list_single_graphic_popup_conf_pane_g

0x3d66,	// (0x0004b6fa) list_single_graphic_popup_conf_pane_t1

0x3d74,	// (0x0004b708) linegrid_cams_pane_g1

0x3d7d,	// (0x0004b711) linegrid_cams_pane_g2

0x2185,	// (0x00049b19) linegrid_cams_pane_g3

0x3d86,	// (0x0004b71a) linegrid_cams_pane_g4

0x3d8f,	// (0x0004b723) linegrid_cams_pane_g5

0x3d98,	// (0x0004b72c) linegrid_cams_pane_g6

0x218e,	// (0x00049b22) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00056d19) linegrid_cams_pane_g

0x3da3,	// (0x0004b737) popup_clock_analogue_window

0x3da3,	// (0x0004b737) popup_clock_digital_window

0xeeee,	// (0x00056882) popup_phob_thumbnail_window

0x19eb,	// (0x0004937f) call_video_uplink_pane_g1

0x3dac,	// (0x0004b740) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00056d28) call_video_uplink_pane_g

0x3db4,	// (0x0004b748) video_uplink_pane

0x3dbc,	// (0x0004b750) mce_image_pane_g1

0x3dc6,	// (0x0004b75a) mce_image_pane_g2

0x3dd0,	// (0x0004b764) mce_image_pane_g3

0x3dd8,	// (0x0004b76c) mce_image_pane_g4

0x3de0,	// (0x0004b774) mce_image_pane_g5

0x0004,

0xf399,	// (0x00056d2d) mce_image_pane_g

0x3de8,	// (0x0004b77c) control_top_pane_stacon_cp01_ParamLimits

0x3de8,	// (0x0004b77c) control_top_pane_stacon_cp01

0x3dfc,	// (0x0004b790) uni_indicator_pane_stacon_cp01_ParamLimits

0x3dfc,	// (0x0004b790) uni_indicator_pane_stacon_cp01

0x3e0d,	// (0x0004b7a1) bg_popup_sub_pane_cp03

0x3e17,	// (0x0004b7ab) chi_dic_find_pane

0x3e1f,	// (0x0004b7b3) listscroll_chi_dic_pane

0x3e28,	// (0x0004b7bc) main_pane_chidic_g1

0x3e3b,	// (0x0004b7cf) chi_dic_find_pane_t1

0x3e49,	// (0x0004b7dd) find_chidic_pane

0x3e52,	// (0x0004b7e6) chi_dic_list_pane_ParamLimits

0x3e52,	// (0x0004b7e6) chi_dic_list_pane

0x3e63,	// (0x0004b7f7) scroll_pane_cp020

0x3e6b,	// (0x0004b7ff) find_chidic_pane_t1

0xeeee,	// (0x00056882) input_focus_pane_cp06

0x3e7a,	// (0x0004b80e) list_chi_dic_pane_ParamLimits

0x3e7a,	// (0x0004b80e) list_chi_dic_pane

0x3e8c,	// (0x0004b820) list_chi_dic_pane_t1_ParamLimits

0x3e8c,	// (0x0004b820) list_chi_dic_pane_t1

0xeeee,	// (0x00056882) list_highlight_pane_cp020

0x3e9f,	// (0x0004b833) bg_cale_heading_pane_g1

0x3ea7,	// (0x0004b83b) bg_cale_heading_pane_g2

0x3eaf,	// (0x0004b843) bg_cale_heading_pane_g3

0x3eb7,	// (0x0004b84b) bg_cale_heading_pane_g4

0x3ec1,	// (0x0004b855) bg_cale_heading_pane_g5

0x3ecb,	// (0x0004b85f) bg_cale_heading_pane_g6

0x3ed3,	// (0x0004b867) bg_cale_heading_pane_g7

0x3edb,	// (0x0004b86f) bg_cale_heading_pane_g8

0x3ee5,	// (0x0004b879) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00056d38) bg_cale_heading_pane_g

0x3e9f,	// (0x0004b833) bg_cale_side_pane_g1

0x3eef,	// (0x0004b883) bg_cale_side_pane_g2

0x3ef7,	// (0x0004b88b) bg_cale_side_pane_g3

0x3eff,	// (0x0004b893) bg_cale_side_pane_g4

0x3f07,	// (0x0004b89b) bg_cale_side_pane_g5

0x3f0f,	// (0x0004b8a3) bg_cale_side_pane_g6

0x3f17,	// (0x0004b8ab) bg_cale_side_pane_g7

0x3f1f,	// (0x0004b8b3) bg_cale_side_pane_g8

0x3f27,	// (0x0004b8bb) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00056d4b) bg_cale_side_pane_g

0x3f2f,	// (0x0004b8c3) popup_call_status_window_ParamLimits

0x3f2f,	// (0x0004b8c3) popup_call_status_window

0x3f78,	// (0x0004b90c) stacon_top_pane

0x3f80,	// (0x0004b914) status_pane_ParamLimits

0x3f80,	// (0x0004b914) status_pane

0x3f95,	// (0x0004b929) status_small_pane

0x3f9d,	// (0x0004b931) control_pane

0xeeee,	// (0x00056882) stacon_bottom_pane

0x3fa5,	// (0x0004b939) list_single_mce_smart_pane_t1_ParamLimits

0x3fa5,	// (0x0004b939) list_single_mce_smart_pane_t1

0x3fb8,	// (0x0004b94c) list_single_mce_smart_pane_t2_ParamLimits

0x3fb8,	// (0x0004b94c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00056d5e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00056d5e) list_single_mce_smart_pane_t

0x3fd7,	// (0x0004b96b) compass_pane

0x3fe0,	// (0x0004b974) main_location2_pane_t1

0x3ff2,	// (0x0004b986) main_location2_pane_t2

0x4004,	// (0x0004b998) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00056d63) main_location2_pane_t

0x4048,	// (0x0004b9dc) compass_pane_g1_ParamLimits

0x4048,	// (0x0004b9dc) compass_pane_g1

0x4054,	// (0x0004b9e8) compass_pane_t1

0x4063,	// (0x0004b9f7) compass_pane_t2

0x0005,

0xf3d8,	// (0x00056d6c) compass_pane_t

0x40aa,	// (0x0004ba3e) text_secondary_cp61

0x4129,	// (0x0004babd) navi_pane_cams_g5

0x41a5,	// (0x0004bb39) navi_pane_im_t1

0x41b3,	// (0x0004bb47) navi_pane_mp_g1_ParamLimits

0x41b3,	// (0x0004bb47) navi_pane_mp_g1

0x41c7,	// (0x0004bb5b) navi_pane_mp_g2_ParamLimits

0x41c7,	// (0x0004bb5b) navi_pane_mp_g2

0x41d3,	// (0x0004bb67) navi_pane_mp_g3_ParamLimits

0x41d3,	// (0x0004bb67) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00056d80) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00056d80) navi_pane_mp_g

0x41df,	// (0x0004bb73) navi_pane_mp_t1

0x41ed,	// (0x0004bb81) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00056d87) navi_pane_mp_t

0x429a,	// (0x0004bc2e) navi_pane_vt_g1

0x41df,	// (0x0004bb73) navi_pane_vt_t1

0x42a2,	// (0x0004bc36) navi_slider_pane

0x21a7,	// (0x00049b3b) zooming_pane

0x42b2,	// (0x0004bc46) navi_slider_pane_g1

0xb3eb,	// (0x00052d7f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00056d8e) navi_slider_pane_g

0x42d6,	// (0x0004bc6a) aid_levels_zoom

0x42de,	// (0x0004bc72) zooming_pane_g1

0x42e6,	// (0x0004bc7a) zooming_pane_g2

0x42e6,	// (0x0004bc7a) zooming_pane_g3

0x0002,

0xf409,	// (0x00056d9d) zooming_pane_g

0x42ee,	// (0x0004bc82) level_10_zoom

0x42f7,	// (0x0004bc8b) level_11_zoom

0x4300,	// (0x0004bc94) level_1_zoom

0x4309,	// (0x0004bc9d) level_2_zoom

0x4312,	// (0x0004bca6) level_3_zoom

0x431b,	// (0x0004bcaf) level_4_zoom

0x4324,	// (0x0004bcb8) level_5_zoom

0x432d,	// (0x0004bcc1) level_6_zoom

0x4336,	// (0x0004bcca) level_7_zoom

0x433f,	// (0x0004bcd3) level_8_zoom

0x4348,	// (0x0004bcdc) level_9_zoom

0x4359,	// (0x0004bced) popup_phob_thumbnail_window_g1

0x4361,	// (0x0004bcf5) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00056da4) popup_phob_thumbnail_window_g

0xb919,	// (0x000532ad) level_1_location

0xb921,	// (0x000532b5) level_2_location

0xb929,	// (0x000532bd) level_3_location

0xb931,	// (0x000532c5) level_4_location

0x21a7,	// (0x00049b3b) level_5_location

0x4369,	// (0x0004bcfd) mce_icon_pane_g1

0x4373,	// (0x0004bd07) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00056da9) mce_icon_pane_g

0x437b,	// (0x0004bd0f) main_mup_pane_g1_ParamLimits

0x437b,	// (0x0004bd0f) main_mup_pane_g1

0x4391,	// (0x0004bd25) main_mup_pane_g2_ParamLimits

0x4391,	// (0x0004bd25) main_mup_pane_g2

0x43a9,	// (0x0004bd3d) main_mup_pane_g3_ParamLimits

0x43a9,	// (0x0004bd3d) main_mup_pane_g3

0x43c1,	// (0x0004bd55) main_mup_pane_g4_ParamLimits

0x43c1,	// (0x0004bd55) main_mup_pane_g4

0x43d9,	// (0x0004bd6d) main_mup_pane_g5_ParamLimits

0x43d9,	// (0x0004bd6d) main_mup_pane_g5

0x43f5,	// (0x0004bd89) main_mup_pane_g6_ParamLimits

0x43f5,	// (0x0004bd89) main_mup_pane_g6

0x440d,	// (0x0004bda1) main_mup_pane_g7_ParamLimits

0x440d,	// (0x0004bda1) main_mup_pane_g7

0x4425,	// (0x0004bdb9) main_mup_pane_g8_ParamLimits

0x4425,	// (0x0004bdb9) main_mup_pane_g8

0x443f,	// (0x0004bdd3) main_mup_pane_g9_ParamLimits

0x443f,	// (0x0004bdd3) main_mup_pane_g9

0x4459,	// (0x0004bded) main_mup_pane_g10_ParamLimits

0x4459,	// (0x0004bded) main_mup_pane_g10

0x4473,	// (0x0004be07) main_mup_pane_g11_ParamLimits

0x4473,	// (0x0004be07) main_mup_pane_g11

0x4487,	// (0x0004be1b) main_mup_pane_g12_ParamLimits

0x4487,	// (0x0004be1b) main_mup_pane_g12

0x449d,	// (0x0004be31) main_mup_pane_g13_ParamLimits

0x449d,	// (0x0004be31) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00056dae) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00056dae) main_mup_pane_g

0x44b1,	// (0x0004be45) main_mup_pane_t1_ParamLimits

0x44b1,	// (0x0004be45) main_mup_pane_t1

0x44cb,	// (0x0004be5f) main_mup_pane_t2_ParamLimits

0x44cb,	// (0x0004be5f) main_mup_pane_t2

0x44e3,	// (0x0004be77) main_mup_pane_t3_ParamLimits

0x44e3,	// (0x0004be77) main_mup_pane_t3

0x44fb,	// (0x0004be8f) main_mup_pane_t4_ParamLimits

0x44fb,	// (0x0004be8f) main_mup_pane_t4

0x4519,	// (0x0004bead) main_mup_pane_t5_ParamLimits

0x4519,	// (0x0004bead) main_mup_pane_t5

0x452e,	// (0x0004bec2) main_mup_pane_t6_ParamLimits

0x452e,	// (0x0004bec2) main_mup_pane_t6

0x0005,

0xf435,	// (0x00056dc9) main_mup_pane_t_ParamLimits

0xf435,	// (0x00056dc9) main_mup_pane_t

0x4540,	// (0x0004bed4) mup_progress_pane_ParamLimits

0x4540,	// (0x0004bed4) mup_progress_pane

0x454c,	// (0x0004bee0) mup_visualizer_pane_ParamLimits

0x454c,	// (0x0004bee0) mup_visualizer_pane

0x457c,	// (0x0004bf10) mup_volume_pane_ParamLimits

0x457c,	// (0x0004bf10) mup_volume_pane

0x459a,	// (0x0004bf2e) mup_visualizer_pane_g1_ParamLimits

0x459a,	// (0x0004bf2e) mup_visualizer_pane_g1

0x459a,	// (0x0004bf2e) mup_visualizer_pane_g2_ParamLimits

0x459a,	// (0x0004bf2e) mup_visualizer_pane_g2

0x4048,	// (0x0004b9dc) mup_visualizer_pane_g3_ParamLimits

0x4048,	// (0x0004b9dc) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00056dd6) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00056dd6) mup_visualizer_pane_g

0x19eb,	// (0x0004937f) mup_volume_pane_g1

0x45b0,	// (0x0004bf44) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00056ddd) mup_volume_pane_g

0x19eb,	// (0x0004937f) mup_progress_pane_g1

0x45b9,	// (0x0004bf4d) mup_progress_pane_g2

0x45c2,	// (0x0004bf56) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00056de2) mup_progress_pane_g

0xeeee,	// (0x00056882) bg_popup_window_pane_cp05

0x45cb,	// (0x0004bf5f) heading_pane_cp02_ParamLimits

0x45cb,	// (0x0004bf5f) heading_pane_cp02

0x45e5,	// (0x0004bf79) list_popup_blid_pane

0x45ed,	// (0x0004bf81) list_blid_sat_info_pane_ParamLimits

0x45ed,	// (0x0004bf81) list_blid_sat_info_pane

0x4600,	// (0x0004bf94) list_blid_sat_info_pane_g1

0x4608,	// (0x0004bf9c) list_blid_sat_info_pane_t1

0x470e,	// (0x0004c0a2) mup_equalizer_pane_ParamLimits

0x470e,	// (0x0004c0a2) mup_equalizer_pane

0x4727,	// (0x0004c0bb) mup_equalizer_pane_cp1_ParamLimits

0x4727,	// (0x0004c0bb) mup_equalizer_pane_cp1

0x4744,	// (0x0004c0d8) mup_equalizer_pane_cp2_ParamLimits

0x4744,	// (0x0004c0d8) mup_equalizer_pane_cp2

0x4761,	// (0x0004c0f5) mup_equalizer_pane_cp3_ParamLimits

0x4761,	// (0x0004c0f5) mup_equalizer_pane_cp3

0x4782,	// (0x0004c116) mup_equalizer_pane_cp4_ParamLimits

0x4782,	// (0x0004c116) mup_equalizer_pane_cp4

0x47a3,	// (0x0004c137) mup_equalizer_pane_cp5

0x47b7,	// (0x0004c14b) mup_equalizer_pane_cp6

0x47cb,	// (0x0004c15f) mup_equalizer_pane_cp7

0xb837,	// (0x000531cb) bg_popup_call_poc_act_pane_g9

0xb83f,	// (0x000531d3) bg_popup_call_poc_act_pane_g10

0xb847,	// (0x000531db) bg_popup_call_poc_act_pane_g11

0x000a,

0x155e,	// (0x00048ef2) mup_scale_pane

0x19eb,	// (0x0004937f) mup_scale_pane_g1

0x47df,	// (0x0004c173) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00056dfe) mup_scale_pane_g

0x4815,	// (0x0004c1a9) msg_data_pane

0x481d,	// (0x0004c1b1) scroll_pane_cp017

0x0459,	// (0x00047ded) bg_list_pane_cp04_ParamLimits

0x0459,	// (0x00047ded) bg_list_pane_cp04

0x4825,	// (0x0004c1b9) msg_data_pane_g1

0x482d,	// (0x0004c1c1) msg_data_pane_g2

0x4837,	// (0x0004c1cb) msg_data_pane_g3

0x483f,	// (0x0004c1d3) msg_data_pane_g4

0x4847,	// (0x0004c1db) msg_data_pane_g5

0x484f,	// (0x0004c1e3) msg_data_pane_g6

0x4857,	// (0x0004c1eb) msg_data_pane_g7

0x0006,

0xf479,	// (0x00056e0d) msg_data_pane_g

0x0471,	// (0x00047e05) msg_text_pane_ParamLimits

0x0471,	// (0x00047e05) msg_text_pane

0x485f,	// (0x0004c1f3) qrid_highlight_pane_cp011_ParamLimits

0x485f,	// (0x0004c1f3) qrid_highlight_pane_cp011

0xeeee,	// (0x00056882) msg_body_pane

0xeeee,	// (0x00056882) msg_header_pane

0x487e,	// (0x0004c212) input_focus_pane_cp07

0x04ac,	// (0x00047e40) msg_header_pane_t1_ParamLimits

0x04ac,	// (0x00047e40) msg_header_pane_t1

0xb405,	// (0x00052d99) msg_header_pane_t2_ParamLimits

0xb405,	// (0x00052d99) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00056e21) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00056e21) msg_header_pane_t

0x4893,	// (0x0004c227) msg_body_pane_g1

0x04be,	// (0x00047e52) msg_body_pane_t1_ParamLimits

0x04be,	// (0x00047e52) msg_body_pane_t1

0xb417,	// (0x00052dab) msg_body_pane_t2_ParamLimits

0xb417,	// (0x00052dab) msg_body_pane_t2

0xb429,	// (0x00052dbd) msg_body_pane_t3_ParamLimits

0xb429,	// (0x00052dbd) msg_body_pane_t3

0x0002,

0xf492,	// (0x00056e26) msg_body_pane_t_ParamLimits

0xf492,	// (0x00056e26) msg_body_pane_t

0x48d5,	// (0x0004c269) main_viewer_pane_g1_ParamLimits

0x48d5,	// (0x0004c269) main_viewer_pane_g1

0x48e3,	// (0x0004c277) main_viewer_pane_g2_ParamLimits

0x48e3,	// (0x0004c277) main_viewer_pane_g2

0x48f1,	// (0x0004c285) main_viewer_pane_g3_ParamLimits

0x48f1,	// (0x0004c285) main_viewer_pane_g3

0x4900,	// (0x0004c294) main_viewer_pane_g4_ParamLimits

0x4900,	// (0x0004c294) main_viewer_pane_g4

0xb453,	// (0x00052de7) main_viewer_pane_g5_ParamLimits

0xb453,	// (0x00052de7) main_viewer_pane_g5

0xb453,	// (0x00052de7) main_viewer_pane_g7_ParamLimits

0xb453,	// (0x00052de7) main_viewer_pane_g7

0xb465,	// (0x00052df9) main_viewer_pane_g8_ParamLimits

0xb465,	// (0x00052df9) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00056e36) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00056e36) main_viewer_pane_g

0x490f,	// (0x0004c2a3) viewer_content_pane_ParamLimits

0x490f,	// (0x0004c2a3) viewer_content_pane

0x494a,	// (0x0004c2de) main_postcard_pane_g1_ParamLimits

0x494a,	// (0x0004c2de) main_postcard_pane_g1

0x4960,	// (0x0004c2f4) main_postcard_pane_g2_ParamLimits

0x4960,	// (0x0004c2f4) main_postcard_pane_g2

0x4976,	// (0x0004c30a) main_postcard_pane_g3_ParamLimits

0x4976,	// (0x0004c30a) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00056e47) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00056e47) main_postcard_pane_g

0x498d,	// (0x0004c321) main_postcard_pane_g4

0xba6d,	// (0x00053401) smil_status_volume_pane_g2

0x49d0,	// (0x0004c364) postcard_pane_ParamLimits

0x49d0,	// (0x0004c364) postcard_pane

0x4a12,	// (0x0004c3a6) postcard_pane_g1_ParamLimits

0x4a12,	// (0x0004c3a6) postcard_pane_g1

0x4a20,	// (0x0004c3b4) postcard_pane_g2_ParamLimits

0x4a20,	// (0x0004c3b4) postcard_pane_g2

0x4a2c,	// (0x0004c3c0) postcard_pane_g3_ParamLimits

0x4a2c,	// (0x0004c3c0) postcard_pane_g3

0x4a38,	// (0x0004c3cc) postcard_pane_g4_ParamLimits

0x4a38,	// (0x0004c3cc) postcard_pane_g4

0x4a46,	// (0x0004c3da) postcard_pane_g5_ParamLimits

0x4a46,	// (0x0004c3da) postcard_pane_g5

0x4a5b,	// (0x0004c3ef) postcard_pane_g6_ParamLimits

0x4a5b,	// (0x0004c3ef) postcard_pane_g6

0x4a12,	// (0x0004c3a6) postcard_pane_g7_ParamLimits

0x4a12,	// (0x0004c3a6) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00056e54) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00056e54) postcard_pane_g

0x4a6f,	// (0x0004c403) main_mp2_pane_g1_ParamLimits

0x4a6f,	// (0x0004c403) main_mp2_pane_g1

0x4a7b,	// (0x0004c40f) main_mp2_pane_g2_ParamLimits

0x4a7b,	// (0x0004c40f) main_mp2_pane_g2

0x4a87,	// (0x0004c41b) main_mp2_pane_g3_ParamLimits

0x4a87,	// (0x0004c41b) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00056e63) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00056e63) main_mp2_pane_g

0x4a93,	// (0x0004c427) main_mp2_pane_t1_ParamLimits

0x4a93,	// (0x0004c427) main_mp2_pane_t1

0x4aa8,	// (0x0004c43c) main_mp2_pane_t2_ParamLimits

0x4aa8,	// (0x0004c43c) main_mp2_pane_t2

0x4aba,	// (0x0004c44e) main_mp2_pane_t3_ParamLimits

0x4aba,	// (0x0004c44e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00056e6a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00056e6a) main_mp2_pane_t

0x4acc,	// (0x0004c460) pec_content_pane_ParamLimits

0x4acc,	// (0x0004c460) pec_content_pane

0x2abb,	// (0x0004a44f) scroll_pane_cp015

0x4ade,	// (0x0004c472) pec_attribute_pane_ParamLimits

0x4ade,	// (0x0004c472) pec_attribute_pane

0x4aee,	// (0x0004c482) pec_content_pane_g1_ParamLimits

0x4aee,	// (0x0004c482) pec_content_pane_g1

0x4afa,	// (0x0004c48e) pec_content_pane_t1_ParamLimits

0x4afa,	// (0x0004c48e) pec_content_pane_t1

0x4b0c,	// (0x0004c4a0) pec_content_pane_t2_ParamLimits

0x4b0c,	// (0x0004c4a0) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00056e71) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00056e71) pec_content_pane_t

0x4b1e,	// (0x0004c4b2) list_single_graphic_pane_cp01_ParamLimits

0x4b1e,	// (0x0004c4b2) list_single_graphic_pane_cp01

0x155e,	// (0x00048ef2) bg_popup_sub_pane_cp04

0x4b33,	// (0x0004c4c7) popup_mup_playback_window_g1

0x4b3f,	// (0x0004c4d3) popup_mup_playback_window_t1

0x4b54,	// (0x0004c4e8) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00056e76) popup_mup_playback_window_t

0x4ba9,	// (0x0004c53d) main_image_pane_g1_ParamLimits

0x4ba9,	// (0x0004c53d) main_image_pane_g1

0x4c86,	// (0x0004c61a) scroll_pane_cp018_ParamLimits

0x4c86,	// (0x0004c61a) scroll_pane_cp018

0x4c9e,	// (0x0004c632) scroll_pane_cp016_ParamLimits

0x4c9e,	// (0x0004c632) scroll_pane_cp016

0x4cd2,	// (0x0004c666) smil2_image_pane_ParamLimits

0x4cd2,	// (0x0004c666) smil2_image_pane

0x4d02,	// (0x0004c696) smil2_root_pane_ParamLimits

0x4d02,	// (0x0004c696) smil2_root_pane

0x4d3a,	// (0x0004c6ce) smil2_text_pane_ParamLimits

0x4d3a,	// (0x0004c6ce) smil2_text_pane

0xeeee,	// (0x00056882) bg_list_pane_cp06

0x4dc2,	// (0x0004c756) grid_radio_pane

0xeeee,	// (0x00056882) bg_popup_window_pane_cp06

0x4dca,	// (0x0004c75e) main_fmradio_pane_t1

0x3cb9,	// (0x0004b64d) heading_pane_cp04

0x4dd8,	// (0x0004c76c) main_fmradio_pane_t2

0xb84f,	// (0x000531e3) popup_cale_lunar_info_window_g1

0x4de6,	// (0x0004c77a) main_fmradio_pane_t3

0xb857,	// (0x000531eb) popup_cale_lunar_info_window_g2

0x4df4,	// (0x0004c788) main_fmradio_pane_t4

0x0001,

0x4e02,	// (0x0004c796) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00056f51) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00056e8b) main_fmradio_pane_t

0x4e10,	// (0x0004c7a4) wait_bar_pane_cp03

0x4e18,	// (0x0004c7ac) cell_fmradio_pane_ParamLimits

0x4e18,	// (0x0004c7ac) cell_fmradio_pane

0x4a12,	// (0x0004c3a6) cell_fmradio_pane_g1_ParamLimits

0x4a12,	// (0x0004c3a6) cell_fmradio_pane_g1

0xeeee,	// (0x00056882) grid_highlight_pane_cp011

0x4e2b,	// (0x0004c7bf) poc_content_pane_ParamLimits

0x4e2b,	// (0x0004c7bf) poc_content_pane

0x4e3d,	// (0x0004c7d1) scroll_pane_cp019

0x4e45,	// (0x0004c7d9) popup_call_poc_act_window_ParamLimits

0x4e45,	// (0x0004c7d9) popup_call_poc_act_window

0x4e69,	// (0x0004c7fd) popup_call_poc_inact_window_ParamLimits

0x4e69,	// (0x0004c7fd) popup_call_poc_inact_window

0xf594,	// (0x00056f28) bg_popup_call_poc_act_pane_g

0xb7c7,	// (0x0005315b) bg_popup_call_poc_inact_pane_g1

0xb7cf,	// (0x00053163) bg_popup_call_poc_inact_pane_g2

0x4e82,	// (0x0004c816) popup_call_poc_act_window_g2

0xb7d7,	// (0x0005316b) bg_popup_call_poc_inact_pane_g3

0xb7df,	// (0x00053173) bg_popup_call_poc_inact_pane_g4

0xb7e7,	// (0x0005317b) bg_popup_call_poc_inact_pane_g5

0x4e8a,	// (0x0004c81e) popup_call_poc_act_window_t1_ParamLimits

0x4e8a,	// (0x0004c81e) popup_call_poc_act_window_t1

0x4eb2,	// (0x0004c846) popup_call_poc_act_window_t2_ParamLimits

0x4eb2,	// (0x0004c846) popup_call_poc_act_window_t2

0x4eda,	// (0x0004c86e) popup_call_poc_act_window_t3_ParamLimits

0x4eda,	// (0x0004c86e) popup_call_poc_act_window_t3

0x4f02,	// (0x0004c896) popup_call_poc_act_window_t4_ParamLimits

0x4f02,	// (0x0004c896) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00056e96) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00056e96) popup_call_poc_act_window_t

0xb7ef,	// (0x00053183) bg_popup_call_poc_inact_pane_g6

0xb7f7,	// (0x0005318b) bg_popup_call_poc_inact_pane_g7

0xb7ff,	// (0x00053193) bg_popup_call_poc_inact_pane_g8

0x4f14,	// (0x0004c8a8) popup_call_poc_inact_window_g2

0xb807,	// (0x0005319b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x00056f15) bg_popup_call_poc_inact_pane_g

0x4f1c,	// (0x0004c8b0) popup_call_poc_inact_window_t1_ParamLimits

0x4f1c,	// (0x0004c8b0) popup_call_poc_inact_window_t1

0x4f31,	// (0x0004c8c5) popup_call_poc_inact_window_t2_ParamLimits

0x4f31,	// (0x0004c8c5) popup_call_poc_inact_window_t2

0x4f46,	// (0x0004c8da) popup_call_poc_inact_window_t3_ParamLimits

0x4f46,	// (0x0004c8da) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00056e9f) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00056e9f) popup_call_poc_inact_window_t

0xb9e0,	// (0x00053374) context_pane_ParamLimits

0x621e,	// (0x0004dbb2) signal_pane_ParamLimits

0x21a7,	// (0x00049b3b) main_call2_pane

0xb9b9,	// (0x0005334d) popup_phob_thumbnail2_window_ParamLimits

0xb9b9,	// (0x0005334d) popup_phob_thumbnail2_window

0xb43b,	// (0x00052dcf) aid_hotspot_pointer_arrow_pane

0xb443,	// (0x00052dd7) aid_hotspot_pointer_hand_pane

0x5d38,	// (0x0004d6cc) phob_pre_status_pane_g5

0x2225,	// (0x00049bb9) cams_zoom_pane_ParamLimits

0x2234,	// (0x00049bc8) image_vga_pane_ParamLimits

0x224e,	// (0x00049be2) main_camera_pane_g1_ParamLimits

0x2260,	// (0x00049bf4) main_camera_pane_g2_ParamLimits

0x2270,	// (0x00049c04) main_camera_pane_g3_ParamLimits

0x2280,	// (0x00049c14) main_camera_pane_g4_ParamLimits

0x2290,	// (0x00049c24) main_camera_pane_g5_ParamLimits

0x22a0,	// (0x00049c34) main_camera_pane_g6_ParamLimits

0x22b2,	// (0x00049c46) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00056b9e) main_camera_pane_g_ParamLimits

0x22ce,	// (0x00049c62) main_camera_pane_t1_ParamLimits

0x22e4,	// (0x00049c78) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00056baf) main_camera_pane_t_ParamLimits

0x155e,	// (0x00048ef2) bg_popup_preview_window_pane_cp01_ParamLimits

0x155e,	// (0x00048ef2) bg_popup_preview_window_pane_cp01

0x4f5b,	// (0x0004c8ef) popup_phob_thumbnail2_window_g1_ParamLimits

0x4f5b,	// (0x0004c8ef) popup_phob_thumbnail2_window_g1

0xeeee,	// (0x00056882) call2_cli_visual_pane

0x4f82,	// (0x0004c916) popup_call2_audio_conf_window_ParamLimits

0x4f82,	// (0x0004c916) popup_call2_audio_conf_window

0x4fa2,	// (0x0004c936) popup_call2_audio_first_window_ParamLimits

0x4fa2,	// (0x0004c936) popup_call2_audio_first_window

0x5038,	// (0x0004c9cc) popup_call2_audio_in_window_ParamLimits

0x5038,	// (0x0004c9cc) popup_call2_audio_in_window

0x5080,	// (0x0004ca14) popup_call2_audio_out_window_ParamLimits

0x5080,	// (0x0004ca14) popup_call2_audio_out_window

0x50ea,	// (0x0004ca7e) popup_call2_audio_second_window_ParamLimits

0x50ea,	// (0x0004ca7e) popup_call2_audio_second_window

0x5150,	// (0x0004cae4) popup_call2_audio_wait_window_ParamLimits

0x5150,	// (0x0004cae4) popup_call2_audio_wait_window

0xeeee,	// (0x00056882) bg_popup_call2_act_pane_cp03

0x1540,	// (0x00048ed4) list_conf_pane_cp

0x518a,	// (0x0004cb1e) popup_call2_audio_conf_window_t1

0x3d3a,	// (0x0004b6ce) list_single_graphic_popup_conf2_pane_ParamLimits

0x3d3a,	// (0x0004b6ce) list_single_graphic_popup_conf2_pane

0x3d4d,	// (0x0004b6e1) list_highlight_pane_cp04

0x5198,	// (0x0004cb2c) list_single_graphic_popup_conf2_pane_g1

0x3d5e,	// (0x0004b6f2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00056ea6) list_single_graphic_popup_conf2_pane_g

0x51a2,	// (0x0004cb36) list_single_graphic_popup_conf2_pane_t1

0x51b0,	// (0x0004cb44) bg_popup_call2_act_pane_cp01_ParamLimits

0x51b0,	// (0x0004cb44) bg_popup_call2_act_pane_cp01

0x523a,	// (0x0004cbce) call_type_pane_cp05_ParamLimits

0x523a,	// (0x0004cbce) call_type_pane_cp05

0x528e,	// (0x0004cc22) popup_call2_audio_second_window_g1_ParamLimits

0x528e,	// (0x0004cc22) popup_call2_audio_second_window_g1

0x52e2,	// (0x0004cc76) popup_call2_audio_second_window_g2_ParamLimits

0x52e2,	// (0x0004cc76) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00056eab) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00056eab) popup_call2_audio_second_window_g

0x5347,	// (0x0004ccdb) popup_call2_audio_second_window_t1_ParamLimits

0x5347,	// (0x0004ccdb) popup_call2_audio_second_window_t1

0x5402,	// (0x0004cd96) popup_call2_audio_second_window_t2_ParamLimits

0x5402,	// (0x0004cd96) popup_call2_audio_second_window_t2

0x5455,	// (0x0004cde9) popup_call2_audio_second_window_t3_ParamLimits

0x5455,	// (0x0004cde9) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00056eb2) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00056eb2) popup_call2_audio_second_window_t

0xeeee,	// (0x00056882) bg_popup_call2_in_pane_cp02

0xeef8,	// (0x0005688c) call_type_pane_cp04

0xef00,	// (0x00056894) popup_call2_audio_wait_window_g1

0xef08,	// (0x0005689c) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00056a8d) popup_call2_audio_wait_window_g

0xef10,	// (0x000568a4) popup_call2_audio_wait_window_t3

0x5548,	// (0x0004cedc) bg_popup_call2_act_pane_ParamLimits

0x5548,	// (0x0004cedc) bg_popup_call2_act_pane

0x5608,	// (0x0004cf9c) call_type_pane_cp03_ParamLimits

0x5608,	// (0x0004cf9c) call_type_pane_cp03

0x566c,	// (0x0004d000) popup_call2_audio_first_window_g1_ParamLimits

0x566c,	// (0x0004d000) popup_call2_audio_first_window_g1

0x56dc,	// (0x0004d070) popup_call2_audio_first_window_g2_ParamLimits

0x56dc,	// (0x0004d070) popup_call2_audio_first_window_g2

0x459a,	// (0x0004bf2e) popup_call2_audio_first_window_g3_ParamLimits

0x459a,	// (0x0004bf2e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00056ebb) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00056ebb) popup_call2_audio_first_window_g

0x57ba,	// (0x0004d14e) popup_call2_audio_first_window_t1_ParamLimits

0x57ba,	// (0x0004d14e) popup_call2_audio_first_window_t1

0x58bd,	// (0x0004d251) popup_call2_audio_first_window_t4_ParamLimits

0x58bd,	// (0x0004d251) popup_call2_audio_first_window_t4

0x59a0,	// (0x0004d334) popup_call2_audio_first_window_t5_ParamLimits

0x59a0,	// (0x0004d334) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00056ec6) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00056ec6) popup_call2_audio_first_window_t

0x1556,	// (0x00048eea) bg_popup_call2_act_pane_g1

0xb85f,	// (0x000531f3) popup_cale_lunar_info_window_t1

0xb86d,	// (0x00053201) popup_cale_lunar_info_window_t2

0xb87b,	// (0x0005320f) popup_cale_lunar_info_window_t3

0xeeee,	// (0x00056882) bg_popup_call2_bubble_pane

0x5aa1,	// (0x0004d435) bg_popup_call2_in_pane_cp01_ParamLimits

0x5aa1,	// (0x0004d435) bg_popup_call2_in_pane_cp01

0xe20c,	// (0x00055ba0) call_type_pane_cp02

0x5ae9,	// (0x0004d47d) popup_call2_audio_out_window_g1_ParamLimits

0x5ae9,	// (0x0004d47d) popup_call2_audio_out_window_g1

0x5b15,	// (0x0004d4a9) popup_call2_audio_out_window_g2_ParamLimits

0x5b15,	// (0x0004d4a9) popup_call2_audio_out_window_g2

0x5b3d,	// (0x0004d4d1) popup_call2_audio_out_window_g3_ParamLimits

0x5b3d,	// (0x0004d4d1) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00056ecf) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00056ecf) popup_call2_audio_out_window_g

0x5b78,	// (0x0004d50c) popup_call2_audio_out_window_t1_ParamLimits

0x5b78,	// (0x0004d50c) popup_call2_audio_out_window_t1

0x5bd7,	// (0x0004d56b) popup_call2_audio_out_window_t2_ParamLimits

0x5bd7,	// (0x0004d56b) popup_call2_audio_out_window_t2

0xb47d,	// (0x00052e11) popup_call2_audio_out_window_t3_ParamLimits

0xb47d,	// (0x00052e11) popup_call2_audio_out_window_t3

0xb493,	// (0x00052e27) popup_call2_audio_out_window_t4_ParamLimits

0xb493,	// (0x00052e27) popup_call2_audio_out_window_t4

0xb4a9,	// (0x00052e3d) popup_call2_audio_out_window_t5_ParamLimits

0xb4a9,	// (0x00052e3d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00056ed8) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00056ed8) popup_call2_audio_out_window_t

0xb50d,	// (0x00052ea1) bg_popup_call2_in_pane_ParamLimits

0xb50d,	// (0x00052ea1) bg_popup_call2_in_pane

0xb569,	// (0x00052efd) popup_call2_audio_in_window_g1_ParamLimits

0xb569,	// (0x00052efd) popup_call2_audio_in_window_g1

0xb5a1,	// (0x00052f35) popup_call2_audio_in_window_g2_ParamLimits

0xb5a1,	// (0x00052f35) popup_call2_audio_in_window_g2

0xb5d9,	// (0x00052f6d) popup_call2_audio_in_window_g3_ParamLimits

0xb5d9,	// (0x00052f6d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00056ee5) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00056ee5) popup_call2_audio_in_window_g

0xb631,	// (0x00052fc5) popup_call2_audio_in_window_t1_ParamLimits

0xb631,	// (0x00052fc5) popup_call2_audio_in_window_t1

0xb6b1,	// (0x00053045) popup_call2_audio_in_window_t2_ParamLimits

0xb6b1,	// (0x00053045) popup_call2_audio_in_window_t2

0xb731,	// (0x000530c5) popup_call2_audio_in_window_t3_ParamLimits

0xb731,	// (0x000530c5) popup_call2_audio_in_window_t3

0xb74b,	// (0x000530df) popup_call2_audio_in_window_t4_ParamLimits

0xb74b,	// (0x000530df) popup_call2_audio_in_window_t4

0xb75d,	// (0x000530f1) popup_call2_audio_in_window_t5_ParamLimits

0xb75d,	// (0x000530f1) popup_call2_audio_in_window_t5

0xb772,	// (0x00053106) popup_call2_audio_in_window_t6_ParamLimits

0xb772,	// (0x00053106) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00056eee) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00056eee) popup_call2_audio_in_window_t

0x1556,	// (0x00048eea) bg_popup_call2_in_pane_g1

0xb889,	// (0x0005321d) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00056f56) popup_cale_lunar_info_window_t

0x155e,	// (0x00048ef2) bg_popup_call2_rect_pane_ParamLimits

0x155e,	// (0x00048ef2) bg_popup_call2_rect_pane

0xeeee,	// (0x00056882) call2_cli_visual_graphic_pane

0xeeee,	// (0x00056882) call2_cli_visual_text_pane

0xba80,	// (0x00053414) smil_status_volume_pane_g3

0x0002,

0x19eb,	// (0x0004937f) call2_cli_visual_graphic_pane_g1

0x19eb,	// (0x0004937f) call2_cli_visual_graphic_pane_g2

0x19eb,	// (0x0004937f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00056efb) call2_cli_visual_graphic_pane_g

0xb787,	// (0x0005311b) bg_popup_call2_rect_pane_g1

0x1b3a,	// (0x000494ce) bg_popup_call2_rect_pane_g2

0xb78f,	// (0x00053123) bg_popup_call2_rect_pane_g3

0xb797,	// (0x0005312b) bg_popup_call2_rect_pane_g4

0xb79f,	// (0x00053133) bg_popup_call2_rect_pane_g5

0xb7a7,	// (0x0005313b) bg_popup_call2_rect_pane_g6

0xb7af,	// (0x00053143) bg_popup_call2_rect_pane_g7

0xb7b7,	// (0x0005314b) bg_popup_call2_rect_pane_g8

0xb7bf,	// (0x00053153) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00056f02) bg_popup_call2_rect_pane_g

0xb7c7,	// (0x0005315b) bg_popup_call2_bubble_pane_g1

0xb7cf,	// (0x00053163) bg_popup_call2_bubble_pane_g2

0xb7d7,	// (0x0005316b) bg_popup_call2_bubble_pane_g3

0xb7df,	// (0x00053173) bg_popup_call2_bubble_pane_g4

0xb7e7,	// (0x0005317b) bg_popup_call2_bubble_pane_g5

0xb7ef,	// (0x00053183) bg_popup_call2_bubble_pane_g6

0xb7f7,	// (0x0005318b) bg_popup_call2_bubble_pane_g7

0xb7ff,	// (0x00053193) bg_popup_call2_bubble_pane_g8

0xb807,	// (0x0005319b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00056f15) bg_popup_call2_bubble_pane_g

0x1bbb,	// (0x0004954f) aid_cale_week_size_cell_pane

0x22fa,	// (0x00049c8e) aid_cams_cif_uncrop_pane_ParamLimits

0x22fa,	// (0x00049c8e) aid_cams_cif_uncrop_pane

0x24e8,	// (0x00049e7c) aid_cams_size_cell_ParamLimits

0x24e8,	// (0x00049e7c) aid_cams_size_cell

0x24fc,	// (0x00049e90) grid_cams_pane_ParamLimits

0x2516,	// (0x00049eaa) linegrid_cams_pane_ParamLimits

0x264c,	// (0x00049fe0) call_video_pane_t1

0x266a,	// (0x00049ffe) call_video_pane_t2

0x0001,

0xf26e,	// (0x00056c02) call_video_pane_t

0x2cfa,	// (0x0004a68e) aid_cale_month_size_cell_pane_ParamLimits

0x2cfa,	// (0x0004a68e) aid_cale_month_size_cell_pane

0xf60b,	// (0x00056f9f) smil_status_volume_pane_g

0xba8d,	// (0x00053421) volume_smil_pane_ParamLimits

0xb240,	// (0x00052bd4) aid_popup2_width_pane

0x1a92,	// (0x00049426) cell_qdial_pane_g4_ParamLimits

0x1a92,	// (0x00049426) cell_qdial_pane_g4

0x4028,	// (0x0004b9bc) aid_blid_cardinal_pane_ParamLimits

0x4034,	// (0x0004b9c8) aid_blid_destination_pane_ParamLimits

0x4034,	// (0x0004b9c8) aid_blid_destination_pane

0x155e,	// (0x00048ef2) bg_popup_call_poc_act_pane_ParamLimits

0x155e,	// (0x00048ef2) bg_popup_call_poc_act_pane

0x155e,	// (0x00048ef2) bg_popup_call_poc_inact_pane_ParamLimits

0x155e,	// (0x00048ef2) bg_popup_call_poc_inact_pane

0xb80f,	// (0x000531a3) bg_popup_call_poc_act_pane_g1

0xb817,	// (0x000531ab) bg_popup_call_poc_act_pane_g2

0xb81f,	// (0x000531b3) bg_popup_call_poc_act_pane_g3

0xb7df,	// (0x00053173) bg_popup_call_poc_act_pane_g4

0xb7e7,	// (0x0005317b) bg_popup_call_poc_act_pane_g5

0xb827,	// (0x000531bb) bg_popup_call_poc_act_pane_g6

0xb7f7,	// (0x0005318b) bg_popup_call_poc_act_pane_g7

0xb82f,	// (0x000531c3) bg_popup_call_poc_act_pane_g8

0xeeee,	// (0x00056882) main_usb_pane

0xb994,	// (0x00053328) popup_cale_lunar_info_window

0x29a2,	// (0x0004a336) im_reading_pane_t1_ParamLimits

0x29db,	// (0x0004a36f) list_im_pane_ParamLimits

0x29ec,	// (0x0004a380) scroll_pane_cp07_ParamLimits

0xeeee,	// (0x00056882) grid_highlight_pane_cp012

0x155e,	// (0x00048ef2) mup_scale_pane_ParamLimits

0x4a12,	// (0x0004c3a6) main_usb_pane_g1_ParamLimits

0x4a12,	// (0x0004c3a6) main_usb_pane_g1

0x5c4d,	// (0x0004d5e1) main_usb_pane_g2_ParamLimits

0x5c4d,	// (0x0004d5e1) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00056f3f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00056f3f) main_usb_pane_g

0x5c63,	// (0x0004d5f7) main_usb_pane_t1_ParamLimits

0x5c63,	// (0x0004d5f7) main_usb_pane_t1

0x5c75,	// (0x0004d609) main_usb_pane_t2_ParamLimits

0x5c75,	// (0x0004d609) main_usb_pane_t2

0x5c87,	// (0x0004d61b) main_usb_pane_t3_ParamLimits

0x5c87,	// (0x0004d61b) main_usb_pane_t3

0x5c99,	// (0x0004d62d) main_usb_pane_t4_ParamLimits

0x5c99,	// (0x0004d62d) main_usb_pane_t4

0x5cab,	// (0x0004d63f) main_usb_pane_t5_ParamLimits

0x5cab,	// (0x0004d63f) main_usb_pane_t5

0x5cbd,	// (0x0004d651) main_usb_pane_t6_ParamLimits

0x5cbd,	// (0x0004d651) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00056f44) main_usb_pane_t_ParamLimits

0x3fd7,	// (0x0004b96b) aid_text_placing

0x3fe0,	// (0x0004b974) main_location2_pane_t1_ParamLimits

0x3ff2,	// (0x0004b986) main_location2_pane_t2_ParamLimits

0x4004,	// (0x0004b998) main_location2_pane_t3_ParamLimits

0x4016,	// (0x0004b9aa) main_location2_pane_t4_ParamLimits

0x4016,	// (0x0004b9aa) main_location2_pane_t4

0xf3cf,	// (0x00056d63) main_location2_pane_t_ParamLimits

0x1636,	// (0x00048fca) find_pinb_pane_g2_ParamLimits

0x1636,	// (0x00048fca) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00056ab3) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00056ab3) find_pinb_pane_g

0x1642,	// (0x00048fd6) find_pinb_pane_t1_ParamLimits

0x1654,	// (0x00048fe8) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00056ab8) find_pinb_pane_t_ParamLimits

0xeeee,	// (0x00056882) main_call3_pane

0x3224,	// (0x0004abb8) cale_month_day_heading_pane_t1_ParamLimits

0x32aa,	// (0x0004ac3e) cale_month_day_heading_pane_t2_ParamLimits

0x3323,	// (0x0004acb7) cale_month_day_heading_pane_t3_ParamLimits

0x339c,	// (0x0004ad30) cale_month_day_heading_pane_t4_ParamLimits

0x341d,	// (0x0004adb1) cale_month_day_heading_pane_t5_ParamLimits

0x34a6,	// (0x0004ae3a) cale_month_day_heading_pane_t6_ParamLimits

0x352f,	// (0x0004aec3) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00056c3a) cale_month_day_heading_pane_t_ParamLimits

0x37db,	// (0x0004b16f) smil_status_volume_pane

0x49ee,	// (0x0004c382) postcard_address_pane_ParamLimits

0x49ee,	// (0x0004c382) postcard_address_pane

0x4a00,	// (0x0004c394) postcard_message_pane_ParamLimits

0x4a00,	// (0x0004c394) postcard_message_pane

0x5c2b,	// (0x0004d5bf) call2_cli_visual_pane_t1_ParamLimits

0x5c2b,	// (0x0004d5bf) call2_cli_visual_pane_t1

0x644b,	// (0x0004dddf) postcard_message_pane_t1_ParamLimits

0x644b,	// (0x0004dddf) postcard_message_pane_t1

0x6434,	// (0x0004ddc8) postcard_address_pane_t1_ParamLimits

0x6434,	// (0x0004ddc8) postcard_address_pane_t1

0x6420,	// (0x0004ddb4) popup_call3_audio_in_window_ParamLimits

0x6420,	// (0x0004ddb4) popup_call3_audio_in_window

0x62ab,	// (0x0004dc3f) bg_popup_call3_in_pane_ParamLimits

0x62ab,	// (0x0004dc3f) bg_popup_call3_in_pane

0x6321,	// (0x0004dcb5) popup_call3_audio_in_window_g1_ParamLimits

0x6321,	// (0x0004dcb5) popup_call3_audio_in_window_g1

0x6341,	// (0x0004dcd5) popup_call3_audio_in_window_g2_ParamLimits

0x6341,	// (0x0004dcd5) popup_call3_audio_in_window_g2

0x6361,	// (0x0004dcf5) popup_call3_audio_in_window_g3_ParamLimits

0x6361,	// (0x0004dcf5) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00056fa6) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00056fa6) popup_call3_audio_in_window_g

0x6392,	// (0x0004dd26) popup_call3_audio_in_window_t1_ParamLimits

0x6392,	// (0x0004dd26) popup_call3_audio_in_window_t1

0x63d0,	// (0x0004dd64) popup_call3_audio_in_window_t2_ParamLimits

0x63d0,	// (0x0004dd64) popup_call3_audio_in_window_t2

0x640e,	// (0x0004dda2) popup_call3_audio_in_window_t3_ParamLimits

0x640e,	// (0x0004dda2) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00056faf) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00056faf) popup_call3_audio_in_window_t

0x21a7,	// (0x00049b3b) bg_popup_call3_rect_pane

0xb787,	// (0x0005311b) bg_popup_call3_rect_pane_g1

0x1b3a,	// (0x000494ce) bg_popup_call3_rect_pane_g2

0xb78f,	// (0x00053123) bg_popup_call3_rect_pane_g3

0xb797,	// (0x0005312b) bg_popup_call3_rect_pane_g4

0xb79f,	// (0x00053133) bg_popup_call3_rect_pane_g5

0xb7a7,	// (0x0005313b) bg_popup_call3_rect_pane_g6

0xb7af,	// (0x00053143) bg_popup_call3_rect_pane_g7

0x4592,	// (0x0004bf26) mup_visualizer_osc_pane

0x45a8,	// (0x0004bf3c) mup_visualizer_spec_pane

0x62db,	// (0x0004dc6f) call3_video_qcif_pane_ParamLimits

0x62db,	// (0x0004dc6f) call3_video_qcif_pane

0x62ee,	// (0x0004dc82) call3_video_qcif_uncrop_pane_ParamLimits

0x62ee,	// (0x0004dc82) call3_video_qcif_uncrop_pane

0x62fc,	// (0x0004dc90) call3_video_subqcif_pane_ParamLimits

0x62fc,	// (0x0004dc90) call3_video_subqcif_pane

0x6310,	// (0x0004dca4) call3_video_subqcif_uncrop_pane_ParamLimits

0x6310,	// (0x0004dca4) call3_video_subqcif_uncrop_pane

0x6381,	// (0x0004dd15) popup_call3_audio_in_window_g4_ParamLimits

0x6381,	// (0x0004dd15) popup_call3_audio_in_window_g4

0x629a,	// (0x0004dc2e) mup_spec_half_pane

0x62a3,	// (0x0004dc37) mup_spec_half_pane_cp

0xba40,	// (0x000533d4) mup_osc_middle_pane

0xba49,	// (0x000533dd) mup_visualizer_osc_pane_g1

0x627a,	// (0x0004dc0e) mup_spec_bar_pane_ParamLimits

0x627a,	// (0x0004dc0e) mup_spec_bar_pane

0xba2d,	// (0x000533c1) mup_spec_bar_pane_g1

0xba37,	// (0x000533cb) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00056f9a) mup_spec_bar_pane_g

0x1bbb,	// (0x0004954f) aid_cale_week_size_cell_pane_ParamLimits

0x1bd5,	// (0x00049569) bg_cale_heading_pane_ParamLimits

0x1bed,	// (0x00049581) bg_cale_pane_cp01_ParamLimits

0x1c0a,	// (0x0004959e) cale_week_corner_pane_ParamLimits

0x1c29,	// (0x000495bd) cale_week_day_heading_pane_ParamLimits

0x1c46,	// (0x000495da) cale_week_scroll_pane_g1_ParamLimits

0x1c59,	// (0x000495ed) cale_week_scroll_pane_g2_ParamLimits

0x1c71,	// (0x00049605) cale_week_scroll_pane_g3_ParamLimits

0x1c89,	// (0x0004961d) cale_week_scroll_pane_g4_ParamLimits

0x1ca1,	// (0x00049635) cale_week_scroll_pane_g5_ParamLimits

0x1cc1,	// (0x00049655) cale_week_scroll_pane_g6_ParamLimits

0x1ce1,	// (0x00049675) cale_week_scroll_pane_g7_ParamLimits

0x1d01,	// (0x00049695) cale_week_scroll_pane_g8_ParamLimits

0x1d25,	// (0x000496b9) cale_week_scroll_pane_g9_ParamLimits

0x1d3d,	// (0x000496d1) cale_week_scroll_pane_g10_ParamLimits

0x1d55,	// (0x000496e9) cale_week_scroll_pane_g11_ParamLimits

0x1d6d,	// (0x00049701) cale_week_scroll_pane_g12_ParamLimits

0x1d85,	// (0x00049719) cale_week_scroll_pane_g13_ParamLimits

0x1d85,	// (0x00049719) cale_week_scroll_pane_g14_ParamLimits

0x1d85,	// (0x00049719) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00056b44) cale_week_scroll_pane_g_ParamLimits

0x1dc1,	// (0x00049755) cale_week_time_pane_ParamLimits

0x1de5,	// (0x00049779) grid_cale_week_pane_ParamLimits

0x1e0b,	// (0x0004979f) listscroll_cale_week_pane_t1

0x1e1d,	// (0x000497b1) scroll_pane_cp08_ParamLimits

0x2d87,	// (0x0004a71b) cale_month_corner_pane_ParamLimits

0x31a5,	// (0x0004ab39) cale_month_pane_t1

0x31b7,	// (0x0004ab4b) cale_month_week_pane_ParamLimits

0x3c19,	// (0x0004b5ad) popup_call_status_window_g1_ParamLimits

0x3c2d,	// (0x0004b5c1) popup_call_status_window_g2_ParamLimits

0x3c41,	// (0x0004b5d5) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00056cea) popup_call_status_window_g_ParamLimits

0x3ca9,	// (0x0004b63d) aid_call2_pane

0x049e,	// (0x00047e32) msg_header_pane_g1

0x49ee,	// (0x0004c382) postcard_address2_pane_ParamLimits

0x49ee,	// (0x0004c382) postcard_address2_pane

0x4a00,	// (0x0004c394) postcard_message2_pane_ParamLimits

0x4a00,	// (0x0004c394) postcard_message2_pane

0x622c,	// (0x0004dbc0) message2_row_pane_ParamLimits

0x622c,	// (0x0004dbc0) message2_row_pane

0x6248,	// (0x0004dbdc) address2_row_pane_ParamLimits

0x6248,	// (0x0004dbdc) address2_row_pane

0xb9fb,	// (0x0005338f) postcard_message2_row_pane_g1

0xba03,	// (0x00053397) postcard_message2_row_pane_t1

0xb9fb,	// (0x0005338f) address2_row_pane_g1

0xba03,	// (0x00053397) address2_row_pane_t1

0x219f,	// (0x00049b33) aid_size_cell_vorec

0xeeee,	// (0x00056882) main_rss_pane

0x625b,	// (0x0004dbef) rss_list_single_pane_ParamLimits

0x625b,	// (0x0004dbef) rss_list_single_pane

0xba11,	// (0x000533a5) rss_list_single_pane_t1

0xba1f,	// (0x000533b3) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00056f95) rss_list_single_pane_t

0xeeee,	// (0x00056882) main_camera2_pane

0xeeee,	// (0x00056882) main_video2_pane

0x64c4,	// (0x0004de58) cams_zoom_pane_cp2_ParamLimits

0x64c4,	// (0x0004de58) cams_zoom_pane_cp2

0x64e4,	// (0x0004de78) image2_vga_pane_ParamLimits

0x64e4,	// (0x0004de78) image2_vga_pane

0x6535,	// (0x0004dec9) main_camera2_pane_g1_ParamLimits

0x6535,	// (0x0004dec9) main_camera2_pane_g1

0x6555,	// (0x0004dee9) main_camera2_pane_g2_ParamLimits

0x6555,	// (0x0004dee9) main_camera2_pane_g2

0x6575,	// (0x0004df09) main_camera2_pane_g3_ParamLimits

0x6575,	// (0x0004df09) main_camera2_pane_g3

0x6595,	// (0x0004df29) main_camera2_pane_g4_ParamLimits

0x6595,	// (0x0004df29) main_camera2_pane_g4

0x65b5,	// (0x0004df49) main_camera2_pane_g5_ParamLimits

0x65b5,	// (0x0004df49) main_camera2_pane_g5

0x65d5,	// (0x0004df69) main_camera2_pane_g6_ParamLimits

0x65d5,	// (0x0004df69) main_camera2_pane_g6

0x65f5,	// (0x0004df89) main_camera2_pane_g7_ParamLimits

0x65f5,	// (0x0004df89) main_camera2_pane_g7

0x6615,	// (0x0004dfa9) main_camera2_pane_g8_ParamLimits

0x6615,	// (0x0004dfa9) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00056fb6) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00056fb6) main_camera2_pane_g

0x6655,	// (0x0004dfe9) main_camera2_pane_t1_ParamLimits

0x6655,	// (0x0004dfe9) main_camera2_pane_t1

0x668a,	// (0x0004e01e) main_camera2_pane_t2_ParamLimits

0x668a,	// (0x0004e01e) main_camera2_pane_t2

0x66b0,	// (0x0004e044) main_camera2_pane_t3_ParamLimits

0x66b0,	// (0x0004e044) main_camera2_pane_t3

0x670e,	// (0x0004e0a2) main_camera2_pane_t4_ParamLimits

0x670e,	// (0x0004e0a2) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00056fc9) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00056fc9) main_camera2_pane_t

0x67a0,	// (0x0004e134) cams_zoom_pane_cp4_ParamLimits

0x67a0,	// (0x0004e134) cams_zoom_pane_cp4

0x67b6,	// (0x0004e14a) image2_cif_pane_ParamLimits

0x67b6,	// (0x0004e14a) image2_cif_pane

0x67e1,	// (0x0004e175) image2_subqcif_pane_ParamLimits

0x67e1,	// (0x0004e175) image2_subqcif_pane

0x67fb,	// (0x0004e18f) main_video2_pane_g1_ParamLimits

0x67fb,	// (0x0004e18f) main_video2_pane_g1

0x6815,	// (0x0004e1a9) main_video2_pane_g2_ParamLimits

0x6815,	// (0x0004e1a9) main_video2_pane_g2

0x682b,	// (0x0004e1bf) main_video2_pane_g3_ParamLimits

0x682b,	// (0x0004e1bf) main_video2_pane_g3

0x6841,	// (0x0004e1d5) main_video2_pane_g4_ParamLimits

0x6841,	// (0x0004e1d5) main_video2_pane_g4

0x6857,	// (0x0004e1eb) main_video2_pane_g5_ParamLimits

0x6857,	// (0x0004e1eb) main_video2_pane_g5

0x686d,	// (0x0004e201) main_video2_pane_g6_ParamLimits

0x686d,	// (0x0004e201) main_video2_pane_g6

0x0005,

0xf644,	// (0x00056fd8) main_video2_pane_g_ParamLimits

0xf644,	// (0x00056fd8) main_video2_pane_g

0x6887,	// (0x0004e21b) main_video2_pane_t1_ParamLimits

0x6887,	// (0x0004e21b) main_video2_pane_t1

0x68ab,	// (0x0004e23f) main_video2_pane_t2_ParamLimits

0x68ab,	// (0x0004e23f) main_video2_pane_t2

0x68f9,	// (0x0004e28d) main_video2_pane_t3_ParamLimits

0x68f9,	// (0x0004e28d) main_video2_pane_t3

0x0002,

0xf651,	// (0x00056fe5) main_video2_pane_t_ParamLimits

0xf651,	// (0x00056fe5) main_video2_pane_t

0x5d78,	// (0x0004d70c) call_muted_g2

0x0001,

0xf5f3,	// (0x00056f87) call_muted_g

0xeeee,	// (0x00056882) main_mup2_pane

0x693d,	// (0x0004e2d1) main_mup2_pane_g1_ParamLimits

0x693d,	// (0x0004e2d1) main_mup2_pane_g1

0x6949,	// (0x0004e2dd) main_mup2_pane_g2_ParamLimits

0x6949,	// (0x0004e2dd) main_mup2_pane_g2

0xbbb1,	// (0x00053545) main_mup_pane_g13_cp1

0xbbb9,	// (0x0005354d) mup_volume_pane_cp1

0x6965,	// (0x0004e2f9) main_mup2_pane_g4_ParamLimits

0x6965,	// (0x0004e2f9) main_mup2_pane_g4

0x6977,	// (0x0004e30b) main_mup2_pane_g5_ParamLimits

0x6977,	// (0x0004e30b) main_mup2_pane_g5

0x6989,	// (0x0004e31d) main_mup2_pane_g6_ParamLimits

0x6989,	// (0x0004e31d) main_mup2_pane_g6

0x699b,	// (0x0004e32f) main_mup2_pane_g7_ParamLimits

0x699b,	// (0x0004e32f) main_mup2_pane_g7

0x0006,

0xf658,	// (0x00056fec) main_mup2_pane_g_ParamLimits

0xf658,	// (0x00056fec) main_mup2_pane_g

0x69b3,	// (0x0004e347) main_mup2_pane_t1_ParamLimits

0x69b3,	// (0x0004e347) main_mup2_pane_t1

0x69c9,	// (0x0004e35d) main_mup2_pane_t2_ParamLimits

0x69c9,	// (0x0004e35d) main_mup2_pane_t2

0x69df,	// (0x0004e373) main_mup2_pane_t3_ParamLimits

0x69df,	// (0x0004e373) main_mup2_pane_t3

0x69f5,	// (0x0004e389) main_mup2_pane_t4_ParamLimits

0x69f5,	// (0x0004e389) main_mup2_pane_t4

0x6a0d,	// (0x0004e3a1) main_mup2_pane_t5_ParamLimits

0x6a0d,	// (0x0004e3a1) main_mup2_pane_t5

0x6a25,	// (0x0004e3b9) main_mup2_pane_t6_ParamLimits

0x6a25,	// (0x0004e3b9) main_mup2_pane_t6

0x0005,

0xf667,	// (0x00056ffb) main_mup2_pane_t_ParamLimits

0xf667,	// (0x00056ffb) main_mup2_pane_t

0x6a55,	// (0x0004e3e9) mup2_visualizer_pane_ParamLimits

0x6a55,	// (0x0004e3e9) mup2_visualizer_pane

0x6a83,	// (0x0004e417) mup_progress_pane_cp_ParamLimits

0x6a83,	// (0x0004e417) mup_progress_pane_cp

0xbb93,	// (0x00053527) mup_volume_pane_cp_ParamLimits

0xbb93,	// (0x00053527) mup_volume_pane_cp

0x6a97,	// (0x0004e42b) mup2_visualizer_pane_g1_ParamLimits

0x6a97,	// (0x0004e42b) mup2_visualizer_pane_g1

0xbad2,	// (0x00053466) mup2_visualizer_pane_g2_ParamLimits

0xbad2,	// (0x00053466) mup2_visualizer_pane_g2

0x6aae,	// (0x0004e442) mup2_visualizer_pane_g3_ParamLimits

0x6aae,	// (0x0004e442) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x00057008) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x00057008) mup2_visualizer_pane_g

0x4dba,	// (0x0004c74e) aid_size_cell_fmradio

0x5f2a,	// (0x0004d8be) aid_height_parent_landcape

0x2aa2,	// (0x0004a436) wml_content_pane_cp

0x2aaa,	// (0x0004a43e) wml_tabs_pane

0x2ab3,	// (0x0004a447) popup_wml_miniature_window

0x2abb,	// (0x0004a44f) scroll_pane_cp021

0x2acf,	// (0x0004a463) wml_content_pane_comp8

0xeeee,	// (0x00056882) bg_popup_sub_pane_cp05

0xbaf0,	// (0x00053484) popup_wml_miniature_window_g1

0xbaf8,	// (0x0005348c) wml_miniature_view_pane

0x6aba,	// (0x0004e44e) aid_size_wml_view

0x6ac2,	// (0x0004e456) wml_miniature_view_pane_g1

0x6acb,	// (0x0004e45f) wml_miniature_view_pane_g2

0x6ad4,	// (0x0004e468) wml_miniature_view_pane_g3

0x6adc,	// (0x0004e470) wml_miniature_view_pane_g4

0x6ae4,	// (0x0004e478) wml_miniature_view_pane_g5

0x6aec,	// (0x0004e480) wml_miniature_view_pane_g6

0x6af4,	// (0x0004e488) wml_miniature_view_pane_g7

0x6afc,	// (0x0004e490) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005700f) wml_miniature_view_pane_g

0xbb00,	// (0x00053494) background_graphic_ParamLimits

0xbb00,	// (0x00053494) background_graphic

0xbb0c,	// (0x000534a0) wml_tabs_2_pane

0xbb15,	// (0x000534a9) wml_tabs_3_pane_ParamLimits

0xbb15,	// (0x000534a9) wml_tabs_3_pane

0xbb27,	// (0x000534bb) wml_tabs_4_pane_ParamLimits

0xbb27,	// (0x000534bb) wml_tabs_4_pane

0xbb3d,	// (0x000534d1) wml_tabs_5_pane_ParamLimits

0xbb3d,	// (0x000534d1) wml_tabs_5_pane

0xbb57,	// (0x000534eb) wml_tabs_pane_g2_ParamLimits

0xbb57,	// (0x000534eb) wml_tabs_pane_g2

0xbb6b,	// (0x000534ff) wml_tabs_pane_g3_ParamLimits

0xbb6b,	// (0x000534ff) wml_tabs_pane_g3

0x6b04,	// (0x0004e498) wml_tabs_2_active_pane_ParamLimits

0x6b04,	// (0x0004e498) wml_tabs_2_active_pane

0x6b18,	// (0x0004e4ac) wml_tabs_2_passive_pane_ParamLimits

0x6b18,	// (0x0004e4ac) wml_tabs_2_passive_pane

0x6b2c,	// (0x0004e4c0) wml_tabs_3_active_pane_cp_ParamLimits

0x6b2c,	// (0x0004e4c0) wml_tabs_3_active_pane_cp

0x6b41,	// (0x0004e4d5) wml_tabs_3_passive_pane_ParamLimits

0x6b41,	// (0x0004e4d5) wml_tabs_3_passive_pane

0x6b54,	// (0x0004e4e8) wml_tabs_3_passive_pane_cp_ParamLimits

0x6b54,	// (0x0004e4e8) wml_tabs_3_passive_pane_cp

0x6b6b,	// (0x0004e4ff) tabs_4_active_pane

0x6b73,	// (0x0004e507) tabs_4_passive_pane

0x6b7d,	// (0x0004e511) tabs_4_passive_pane_cp

0x6b85,	// (0x0004e519) tabs_4_passive_pane_cp2

0x5c45,	// (0x0004d5d9) aid_height_text

0x4568,	// (0x0004befc) mup_volume_cont_pane_ParamLimits

0x4568,	// (0x0004befc) mup_volume_cont_pane

0x15f4,	// (0x00048f88) aid_size_cell_pinb

0x15fe,	// (0x00048f92) aid_size_list_pinb

0x6a6f,	// (0x0004e403) mup2_volume_cont_pane_ParamLimits

0x6a6f,	// (0x0004e403) mup2_volume_cont_pane

0xbb7f,	// (0x00053513) mup2_volume_cont_pane_g1_ParamLimits

0xbb7f,	// (0x00053513) mup2_volume_cont_pane_g1

0x1132,	// (0x00048ac6) aid_size_cell_touch_ParamLimits

0x1132,	// (0x00048ac6) aid_size_cell_touch

0x136d,	// (0x00048d01) touch_pane_ParamLimits

0x136d,	// (0x00048d01) touch_pane

0xe113,	// (0x00055aa7) main_rss2_pane

0xbbc1,	// (0x00053555) listscroll_rss2_pane

0xbbca,	// (0x0005355e) rss2_navigation_pane

0xbbd2,	// (0x00053566) list_rss2_pane

0x3e63,	// (0x0004b7f7) scroll_pane_cp22

0xbbda,	// (0x0005356e) rss2_navigation_pane_g1

0xbbe3,	// (0x00053577) rss2_navigation_pane_g2

0xbbeb,	// (0x0005357f) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x00057020) rss2_navigation_pane_g

0xbbf3,	// (0x00053587) rss2_navigation_pane_t1

0x6b8f,	// (0x0004e523) rss2_list_single_pane_ParamLimits

0x6b8f,	// (0x0004e523) rss2_list_single_pane

0xbc01,	// (0x00053595) rss2_list_single_pane_t2

0xbc0f,	// (0x000535a3) rss2_list_single_pane_t3_ParamLimits

0xbc0f,	// (0x000535a3) rss2_list_single_pane_t3

0xbc2c,	// (0x000535c0) rss2_list_single_pane_t4

0x37c3,	// (0x0004b157) smil_status_pane_g1

0x1353,	// (0x00048ce7) main_image2_pane_ParamLimits

0x1353,	// (0x00048ce7) main_image2_pane

0x6635,	// (0x0004dfc9) main_camera2_pane_g9_ParamLimits

0x6635,	// (0x0004dfc9) main_camera2_pane_g9

0x6763,	// (0x0004e0f7) main_camera2_pane_t5_ParamLimits

0x6763,	// (0x0004e0f7) main_camera2_pane_t5

0xbaa2,	// (0x00053436) main_camera2_pane_t6_ParamLimits

0xbaa2,	// (0x00053436) main_camera2_pane_t6

0x6ba4,	// (0x0004e538) main_image2_pane_g1_ParamLimits

0x6ba4,	// (0x0004e538) main_image2_pane_g1

0x4d70,	// (0x0004c704) smil2_video_pane_ParamLimits

0x4d70,	// (0x0004c704) smil2_video_pane

0xb25c,	// (0x00052bf0) aid_zoom_text_primary_cp

0xb29c,	// (0x00052c30) popup_preview_fixed_window

0x299a,	// (0x0004a32e) im_reading_pane_g1

0x64ac,	// (0x0004de40) cams2_bc_adjust_pane_cp_ParamLimits

0x64ac,	// (0x0004de40) cams2_bc_adjust_pane_cp

0x6792,	// (0x0004e126) cams2_bc_adjust_pane_ParamLimits

0x6792,	// (0x0004e126) cams2_bc_adjust_pane

0xbc3a,	// (0x000535ce) cams2_bc_adjust_pane_g1

0xbc42,	// (0x000535d6) cams2_slider_pane

0xbc4b,	// (0x000535df) cams2_slider_pane_g1

0xbc54,	// (0x000535e8) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x00057027) cams2_slider_pane_g

0x1743,	// (0x000490d7) calc_display_pane_ParamLimits

0x176b,	// (0x000490ff) calc_paper_pane_ParamLimits

0x178e,	// (0x00049122) grid_calc_pane_ParamLimits

0xb3ce,	// (0x00052d62) popup_clock_digital_window_t1_ParamLimits

0x4bf7,	// (0x0004c58b) main_image_pane_t1

0x1725,	// (0x000490b9) aid_size_cell_calc_ParamLimits

0x1725,	// (0x000490b9) aid_size_cell_calc

0x5f70,	// (0x0004d904) popup_blid_sat_info2_window_ParamLimits

0x5f70,	// (0x0004d904) popup_blid_sat_info2_window

0xbc76,	// (0x0005360a) aid_size_cell_blid

0xbc7e,	// (0x00053612) bg_popup_window_pane_cp07

0xbca1,	// (0x00053635) grid_popup_blid_pane

0xbcab,	// (0x0005363f) heading_pane_cp05_ParamLimits

0xbcab,	// (0x0005363f) heading_pane_cp05

0xbd75,	// (0x00053709) cell_popup_blid_pane_ParamLimits

0xbd75,	// (0x00053709) cell_popup_blid_pane

0xbd99,	// (0x0005372d) cell_popup_blid_pane_g1

0xbda1,	// (0x00053735) cell_popup_blid_pane_t1

0x6a3f,	// (0x0004e3d3) mup2_indicator_pane_ParamLimits

0x6a3f,	// (0x0004e3d3) mup2_indicator_pane

0x21a7,	// (0x00049b3b) mup2_visualizer_osc_pane

0xbade,	// (0x00053472) mup2_visualizer_spec_pane_ParamLimits

0xbade,	// (0x00053472) mup2_visualizer_spec_pane

0x6bba,	// (0x0004e54e) mup2_spec_half_pane

0x6bc3,	// (0x0004e557) mup2_spec_half_pane_cp

0x6bcb,	// (0x0004e55f) mup2_spec_bar_pane_ParamLimits

0x6bcb,	// (0x0004e55f) mup2_spec_bar_pane

0xba2d,	// (0x000533c1) mup2_spec_bar_pane_g1

0xba37,	// (0x000533cb) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00056f9a) mup2_spec_bar_pane_g

0x6beb,	// (0x0004e57f) mup2_osc_middle_pane

0xba49,	// (0x000533dd) mup2_visualizer_osc_pane_g1

0xe13d,	// (0x00055ad1) popup_number_entry_window_t1_ParamLimits

0xe150,	// (0x00055ae4) popup_number_entry_window_t2_ParamLimits

0xe162,	// (0x00055af6) popup_number_entry_window_t3_ParamLimits

0x13bf,	// (0x00048d53) popup_number_entry_window_t5_ParamLimits

0x13bf,	// (0x00048d53) popup_number_entry_window_t5

0xf0ca,	// (0x00056a5e) popup_number_entry_window_t_ParamLimits

0xe174,	// (0x00055b08) text_title_cp2_ParamLimits

0xb44b,	// (0x00052ddf) aid_hotspot_pointer_text2_pane

0xb471,	// (0x00052e05) main_viewer_pane_g9_ParamLimits

0xb471,	// (0x00052e05) main_viewer_pane_g9

0x31a5,	// (0x0004ab39) cale_month_pane_t1_ParamLimits

0x3835,	// (0x0004b1c9) bg_cale_pane_ParamLimits

0x384d,	// (0x0004b1e1) list_cale_pane_ParamLimits

0x385e,	// (0x0004b1f2) listscroll_cale_day_pane_t1

0x3870,	// (0x0004b204) scroll_pane_cp09_ParamLimits

0x4616,	// (0x0004bfaa) main_mup_eq_pane_t1_ParamLimits

0x4616,	// (0x0004bfaa) main_mup_eq_pane_t1

0x4630,	// (0x0004bfc4) main_mup_eq_pane_t2_ParamLimits

0x4630,	// (0x0004bfc4) main_mup_eq_pane_t2

0x464a,	// (0x0004bfde) main_mup_eq_pane_t3_ParamLimits

0x464a,	// (0x0004bfde) main_mup_eq_pane_t3

0x4666,	// (0x0004bffa) main_mup_eq_pane_t4_ParamLimits

0x4666,	// (0x0004bffa) main_mup_eq_pane_t4

0x4682,	// (0x0004c016) main_mup_eq_pane_t5_ParamLimits

0x4682,	// (0x0004c016) main_mup_eq_pane_t5

0x469e,	// (0x0004c032) main_mup_eq_pane_t6_ParamLimits

0x469e,	// (0x0004c032) main_mup_eq_pane_t6

0x46b2,	// (0x0004c046) main_mup_eq_pane_t7_ParamLimits

0x46b2,	// (0x0004c046) main_mup_eq_pane_t7

0x46c6,	// (0x0004c05a) main_mup_eq_pane_t8_ParamLimits

0x46c6,	// (0x0004c05a) main_mup_eq_pane_t8

0x46da,	// (0x0004c06e) main_mup_eq_pane_t9_ParamLimits

0x46da,	// (0x0004c06e) main_mup_eq_pane_t9

0x46f4,	// (0x0004c088) main_mup_eq_pane_t10_ParamLimits

0x46f4,	// (0x0004c088) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00056de9) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00056de9) main_mup_eq_pane_t

0x47a3,	// (0x0004c137) mup_equalizer_pane_cp5_ParamLimits

0x47b7,	// (0x0004c14b) mup_equalizer_pane_cp6_ParamLimits

0x47cb,	// (0x0004c15f) mup_equalizer_pane_cp7_ParamLimits

0xe113,	// (0x00055aa7) main_gallery_pane

0xba52,	// (0x000533e6) smil2_volume_pane

0xba5a,	// (0x000533ee) smil_status_volume_pane_g1_ParamLimits

0xba6d,	// (0x00053401) smil_status_volume_pane_g2_ParamLimits

0xba80,	// (0x00053414) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00056f9f) smil_status_volume_pane_g_ParamLimits

0xbc7e,	// (0x00053612) bg_popup_window_pane_cp07_ParamLimits

0xbc8c,	// (0x00053620) blid_firmament_pane

0x6bf4,	// (0x0004e588) aid_size_cell_gallery_ParamLimits

0x6bf4,	// (0x0004e588) aid_size_cell_gallery

0x6c0a,	// (0x0004e59e) grid_gallery_pane_ParamLimits

0x6c0a,	// (0x0004e59e) grid_gallery_pane

0x6c23,	// (0x0004e5b7) cell_gallery_pane_ParamLimits

0x6c23,	// (0x0004e5b7) cell_gallery_pane

0xbdaf,	// (0x00053743) bg_cell_gallery_focus_pane_ParamLimits

0xbdaf,	// (0x00053743) bg_cell_gallery_focus_pane

0xbdc1,	// (0x00053755) cell_gallery_pane_g1_ParamLimits

0xbdc1,	// (0x00053755) cell_gallery_pane_g1

0x6c6c,	// (0x0004e600) cell_gallery_pane_g2_ParamLimits

0x6c6c,	// (0x0004e600) cell_gallery_pane_g2

0x6c79,	// (0x0004e60d) cell_gallery_pane_g3_ParamLimits

0x6c79,	// (0x0004e60d) cell_gallery_pane_g3

0xbdcd,	// (0x00053761) cell_gallery_pane_g4_ParamLimits

0xbdcd,	// (0x00053761) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005704d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005704d) cell_gallery_pane_g

0xbdd9,	// (0x0005376d) bg_cell_gallery_focus_pane_g1

0xbde1,	// (0x00053775) bg_cell_gallery_focus_pane_g2

0xbde9,	// (0x0005377d) bg_cell_gallery_focus_pane_g3

0xbdf1,	// (0x00053785) bg_cell_gallery_focus_pane_g4

0xbdf9,	// (0x0005378d) bg_cell_gallery_focus_pane_g5

0xbe01,	// (0x00053795) bg_cell_gallery_focus_pane_g6

0xbe09,	// (0x0005379d) bg_cell_gallery_focus_pane_g7

0xbe11,	// (0x000537a5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00057056) bg_cell_gallery_focus_pane_g

0xbe19,	// (0x000537ad) aid_firma_cardinal

0xbe2d,	// (0x000537c1) blid_firmament_pane_t1

0xbe44,	// (0x000537d8) blid_firmament_pane_t2

0xbe5b,	// (0x000537ef) blid_firmament_pane_t3

0xbe72,	// (0x00053806) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00057067) blid_firmament_pane_t

0xbe89,	// (0x0005381d) blid_sat_info_pane

0xbe99,	// (0x0005382d) blid_sat_info_pane_g1

0xbe99,	// (0x0005382d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00057070) blid_sat_info_pane_g

0xbea3,	// (0x00053837) blid_sat_info_pane_t1

0xbeb1,	// (0x00053845) smil2_volume_content_pane

0xbeba,	// (0x0005384e) smil2_volume_pane_g1

0xbec2,	// (0x00053856) smil2_volume_content_pane_g1

0xbecb,	// (0x0005385f) smil2_volume_content_pane_g2

0xbed4,	// (0x00053868) smil2_volume_content_pane_g3

0xbedd,	// (0x00053871) smil2_volume_content_pane_g4

0xbee6,	// (0x0005387a) smil2_volume_content_pane_g5

0xbeef,	// (0x00053883) smil2_volume_content_pane_g6

0xbef8,	// (0x0005388c) smil2_volume_content_pane_g7

0xbf01,	// (0x00053895) smil2_volume_content_pane_g8

0xbf0a,	// (0x0005389e) smil2_volume_content_pane_g9

0xbf13,	// (0x000538a7) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00057075) smil2_volume_content_pane_g

0x1ec8,	// (0x0004985c) cale_week_day_heading_pane_t1_ParamLimits

0x1ef2,	// (0x00049886) cale_week_day_heading_pane_t2_ParamLimits

0x1f21,	// (0x000498b5) cale_week_day_heading_pane_t3_ParamLimits

0x1f50,	// (0x000498e4) cale_week_day_heading_pane_t4_ParamLimits

0x1f7f,	// (0x00049913) cale_week_day_heading_pane_t5_ParamLimits

0x1fb6,	// (0x0004994a) cale_week_day_heading_pane_t6_ParamLimits

0x1fed,	// (0x00049981) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00056b65) cale_week_day_heading_pane_t_ParamLimits

0x2017,	// (0x000499ab) bg_cale_side_pane_ParamLimits

0x2025,	// (0x000499b9) cale_week_time_pane_t1_ParamLimits

0x203f,	// (0x000499d3) cale_week_time_pane_t2_ParamLimits

0x2059,	// (0x000499ed) cale_week_time_pane_t3_ParamLimits

0x2073,	// (0x00049a07) cale_week_time_pane_t4_ParamLimits

0x208d,	// (0x00049a21) cale_week_time_pane_t5_ParamLimits

0x20a7,	// (0x00049a3b) cale_week_time_pane_t6_ParamLimits

0x20c1,	// (0x00049a55) cale_week_time_pane_t7_ParamLimits

0x20db,	// (0x00049a6f) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00056b74) cale_week_time_pane_t_ParamLimits

0x20f5,	// (0x00049a89) cell_cale_week_pane_g2_ParamLimits

0x2017,	// (0x000499ab) bg_cale_side_pane_cp01_ParamLimits

0x35c0,	// (0x0004af54) cale_month_week_pane_t1_ParamLimits

0x35d9,	// (0x0004af6d) cale_month_week_pane_t2_ParamLimits

0x35f2,	// (0x0004af86) cale_month_week_pane_t3_ParamLimits

0x360b,	// (0x0004af9f) cale_month_week_pane_t4_ParamLimits

0x3624,	// (0x0004afb8) cale_month_week_pane_t5_ParamLimits

0x363d,	// (0x0004afd1) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00056c49) cale_month_week_pane_t_ParamLimits

0xb33e,	// (0x00052cd2) cell_cale_month_pane_g1_ParamLimits

0xe113,	// (0x00055aa7) main_cale_event_viewer_pane

0xe113,	// (0x00055aa7) listscroll_cale_event_viewer_pane

0xbf1c,	// (0x000538b0) list_cale_ev_pane

0xbf24,	// (0x000538b8) scroll_pane_cp023

0xbf30,	// (0x000538c4) field_cale_ev_pane_ParamLimits

0xbf30,	// (0x000538c4) field_cale_ev_pane

0xbf4e,	// (0x000538e2) field_cale_ev_content_pane_ParamLimits

0xbf4e,	// (0x000538e2) field_cale_ev_content_pane

0xbf5a,	// (0x000538ee) field_cale_ev_pane_g1_ParamLimits

0xbf5a,	// (0x000538ee) field_cale_ev_pane_g1

0xbf66,	// (0x000538fa) field_cale_ev_pane_g2_ParamLimits

0xbf66,	// (0x000538fa) field_cale_ev_pane_g2

0xbf7e,	// (0x00053912) field_cale_ev_pane_g3_ParamLimits

0xbf7e,	// (0x00053912) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005708a) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005708a) field_cale_ev_pane_g

0xbf96,	// (0x0005392a) field_cale_ev_pane_t1_ParamLimits

0xbf96,	// (0x0005392a) field_cale_ev_pane_t1

0xbfad,	// (0x00053941) field_cale_ev_content_pane_t1_ParamLimits

0xbfad,	// (0x00053941) field_cale_ev_content_pane_t1

0x4875,	// (0x0004c209) bg_button_pane_cp01

0x1ba0,	// (0x00049534) listscroll_cale_week_pane_ParamLimits

0x1bb2,	// (0x00049546) popup_toolbar_window_cp01

0x1e0b,	// (0x0004979f) listscroll_cale_week_pane_t1_ParamLimits

0x1ba0,	// (0x00049534) listscroll_cale_day_pane_ParamLimits

0x1bb2,	// (0x00049546) popup_toolbar_window_cp02

0x385e,	// (0x0004b1f2) listscroll_cale_day_pane_t1_ParamLimits

0x1ba0,	// (0x00049534) main_cale_month_pane_ParamLimits

0xb9cb,	// (0x0005335f) popup_toolbar_window_cp03_ParamLimits

0xb9cb,	// (0x0005335f) popup_toolbar_window_cp03

0x4bd5,	// (0x0004c569) main_image_pane_g2_ParamLimits

0x4bd5,	// (0x0004c569) main_image_pane_g2

0x4be6,	// (0x0004c57a) main_image_pane_g3_ParamLimits

0x4be6,	// (0x0004c57a) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00056e7b) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00056e7b) main_image_pane_g

0x4bf7,	// (0x0004c58b) main_image_pane_t1_ParamLimits

0x4c0e,	// (0x0004c5a2) main_image_pane_t2_ParamLimits

0x4c0e,	// (0x0004c5a2) main_image_pane_t2

0x4c20,	// (0x0004c5b4) main_image_pane_t3_ParamLimits

0x4c20,	// (0x0004c5b4) main_image_pane_t3

0x4c48,	// (0x0004c5dc) main_image_pane_t4_ParamLimits

0x4c48,	// (0x0004c5dc) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00056e82) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00056e82) main_image_pane_t

0x4c68,	// (0x0004c5fc) popup_image_details_window_cp01

0x4c72,	// (0x0004c606) popup_toobar_trans_pane_cp01_ParamLimits

0x4c72,	// (0x0004c606) popup_toobar_trans_pane_cp01

0x604f,	// (0x0004d9e3) popup_image_details_window_ParamLimits

0x604f,	// (0x0004d9e3) popup_image_details_window

0xb99e,	// (0x00053332) popup_image_focus_window

0x6466,	// (0x0004ddfa) camera2_autofocus_pane_ParamLimits

0x6466,	// (0x0004ddfa) camera2_autofocus_pane

0xe113,	// (0x00055aa7) bg_popup_sub_pane_cp06

0xbfcb,	// (0x0005395f) popup_image_focus_window_g1

0xbfd3,	// (0x00053967) popup_image_focus_window_g2

0xbfdb,	// (0x0005396f) popup_image_focus_window_g3

0xbfe3,	// (0x00053977) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00057091) popup_image_focus_window_g

0xbfeb,	// (0x0005397f) popup_image_focus_window_t1

0xbff9,	// (0x0005398d) popup_image_focus_window_t2

0xc009,	// (0x0005399d) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005709a) popup_image_focus_window_t

0xc017,	// (0x000539ab) camera2_autofocus_pane_g1

0x1353,	// (0x00048ce7) bg_tb_trans_pane_cp01

0xc025,	// (0x000539b9) popup_image_details_window_g1

0xc038,	// (0x000539cc) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000570ac) popup_image_details_window_g

0xc061,	// (0x000539f5) popup_image_details_window_t1

0xc073,	// (0x00053a07) popup_image_details_window_t2

0xc08c,	// (0x00053a20) popup_image_details_window_t3

0xc0a0,	// (0x00053a34) popup_image_details_window_t4

0xc0bb,	// (0x00053a4f) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000570b3) popup_image_details_window_t

0x18b6,	// (0x0004924a) bg_calc_paper_pane_ParamLimits

0xe113,	// (0x00055aa7) grid_highlight_pane_cp013

0xb2ae,	// (0x00052c42) list_calc_pane_ParamLimits

0xb2c0,	// (0x00052c54) scroll_pane_cp024

0x18ca,	// (0x0004925e) bg_calc_display_pane_ParamLimits

0x18d6,	// (0x0004926a) calc_display_pane_t1_ParamLimits

0x18e8,	// (0x0004927c) calc_display_pane_t2_ParamLimits

0xb2c8,	// (0x00052c5c) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00056ae5) calc_display_pane_t_ParamLimits

0x19f5,	// (0x00049389) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00056b02) cell_calc_pane_g

0x19fe,	// (0x00049392) cell_calc_pane_t1

0x1a0d,	// (0x000493a1) grid_highlight_pane_cp02_ParamLimits

0x1a23,	// (0x000493b7) toolbar_button_pane_cp01_ParamLimits

0x1a23,	// (0x000493b7) toolbar_button_pane_cp01

0x4cb4,	// (0x0004c648) temp_image_control_pane_ParamLimits

0x4cb4,	// (0x0004c648) temp_image_control_pane

0x1353,	// (0x00048ce7) main_mp3_pane

0xc0d5,	// (0x00053a69) temp_image_control_pane_g1_ParamLimits

0xc0d5,	// (0x00053a69) temp_image_control_pane_g1

0xc0e3,	// (0x00053a77) temp_image_control_pane_g2_ParamLimits

0xc0e3,	// (0x00053a77) temp_image_control_pane_g2

0xc0f5,	// (0x00053a89) temp_image_control_pane_g3_ParamLimits

0xc0f5,	// (0x00053a89) temp_image_control_pane_g3

0x6cb6,	// (0x0004e64a) temp_image_control_pane_g4_ParamLimits

0x6cb6,	// (0x0004e64a) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000570be) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000570be) temp_image_control_pane_g

0xc0d5,	// (0x00053a69) main_mp3_pane_g1

0x6cc9,	// (0x0004e65d) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000570c7) main_mp3_pane_g

0xc138,	// (0x00053acc) main_mp3_pane_t1

0x22c2,	// (0x00049c56) main_camera_pane_g8_ParamLimits

0x22c2,	// (0x00049c56) main_camera_pane_g8

0x246a,	// (0x00049dfe) main_video_pane_g7_ParamLimits

0x246a,	// (0x00049dfe) main_video_pane_g7

0xbac0,	// (0x00053454) main_camera2_pane_t7_ParamLimits

0xbac0,	// (0x00053454) main_camera2_pane_t7

0x2a62,	// (0x0004a3f6) scroll_pane_cp025_ParamLimits

0x2a62,	// (0x0004a3f6) scroll_pane_cp025

0x2a76,	// (0x0004a40a) scroll_pane_cp026_ParamLimits

0x2a76,	// (0x0004a40a) scroll_pane_cp026

0x2a85,	// (0x0004a419) wml_content_pane_ParamLimits

0xe113,	// (0x00055aa7) main_touch_calib_pane

0x6d9d,	// (0x0004e731) main_touch_calib_pane_g1

0x6daf,	// (0x0004e743) main_touch_calib_pane_g2

0x6dc1,	// (0x0004e755) main_touch_calib_pane_g3

0x6dd3,	// (0x0004e767) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000570e5) main_touch_calib_pane_g

0x6de5,	// (0x0004e779) main_touch_calib_pane_t1

0x6dff,	// (0x0004e793) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000570ee) main_touch_calib_pane_t

0x410b,	// (0x0004ba9f) mup_progress_pane_cp02

0x4140,	// (0x0004bad4) navi_pane_g1

0x41fb,	// (0x0004bb8f) navi_pane_mp_t3

0x1353,	// (0x00048ce7) main_mp3_pane_ParamLimits

0x61d4,	// (0x0004db68) navi_pane_ParamLimits

0xc0d5,	// (0x00053a69) main_mp3_pane_g1_ParamLimits

0x6cc9,	// (0x0004e65d) main_mp3_pane_g2_ParamLimits

0x6cd7,	// (0x0004e66b) main_mp3_pane_g3_ParamLimits

0x6cd7,	// (0x0004e66b) main_mp3_pane_g3

0x6ce5,	// (0x0004e679) main_mp3_pane_g4_ParamLimits

0x6ce5,	// (0x0004e679) main_mp3_pane_g4

0xc105,	// (0x00053a99) main_mp3_pane_g5_ParamLimits

0xc105,	// (0x00053a99) main_mp3_pane_g5

0xc113,	// (0x00053aa7) main_mp3_pane_g6_ParamLimits

0xc113,	// (0x00053aa7) main_mp3_pane_g6

0xc120,	// (0x00053ab4) main_mp3_pane_g7_ParamLimits

0xc120,	// (0x00053ab4) main_mp3_pane_g7

0xc12c,	// (0x00053ac0) main_mp3_pane_g8_ParamLimits

0xc12c,	// (0x00053ac0) main_mp3_pane_g8

0xf733,	// (0x000570c7) main_mp3_pane_g_ParamLimits

0x6cf1,	// (0x0004e685) main_mp3_pane_t2

0x6cff,	// (0x0004e693) main_mp3_pane_t3

0xc146,	// (0x00053ada) main_mp3_pane_t4

0xc154,	// (0x00053ae8) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000570d8) main_mp3_pane_t

0xc162,	// (0x00053af6) mup_progress_pane_cp01

0xb25c,	// (0x00052bf0) aid_zoom_text_secondary2

0xbf1c,	// (0x000538b0) list_cale_ev2_pane

0xbf24,	// (0x000538b8) scroll_pane_cp023_ParamLimits

0x6e55,	// (0x0004e7e9) field_cale_ev2_pane_ParamLimits

0x6e55,	// (0x0004e7e9) field_cale_ev2_pane

0xc16a,	// (0x00053afe) field_cale_ev2_pane_g1_ParamLimits

0xc16a,	// (0x00053afe) field_cale_ev2_pane_g1

0xc176,	// (0x00053b0a) field_cale_ev2_pane_g2_ParamLimits

0xc176,	// (0x00053b0a) field_cale_ev2_pane_g2

0xc18e,	// (0x00053b22) field_cale_ev2_pane_g3_ParamLimits

0xc18e,	// (0x00053b22) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000570f9) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000570f9) field_cale_ev2_pane_g

0x04ef,	// (0x00047e83) field_cale_ev2_pane_t1_ParamLimits

0x04ef,	// (0x00047e83) field_cale_ev2_pane_t1

0x0506,	// (0x00047e9a) field_cale_ev2_pane_t2_ParamLimits

0x0506,	// (0x00047e9a) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x00057102) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x00057102) field_cale_ev2_pane_t

0x49a4,	// (0x0004c338) main_postcard_pane_g5_ParamLimits

0x49a4,	// (0x0004c338) main_postcard_pane_g5

0x49ba,	// (0x0004c34e) main_postcard_pane_g6_ParamLimits

0x49ba,	// (0x0004c34e) main_postcard_pane_g6

0x2210,	// (0x00049ba4) camera2_autofocus_pane_cp_ParamLimits

0x2210,	// (0x00049ba4) camera2_autofocus_pane_cp

0x1353,	// (0x00048ce7) main_mup3_pane

0x6e75,	// (0x0004e809) main_mup3_pane_g1_ParamLimits

0x6e75,	// (0x0004e809) main_mup3_pane_g1

0x6e97,	// (0x0004e82b) main_mup3_pane_g2_ParamLimits

0x6e97,	// (0x0004e82b) main_mup3_pane_g2

0x6f15,	// (0x0004e8a9) main_mup3_pane_g3_ParamLimits

0x6f15,	// (0x0004e8a9) main_mup3_pane_g3

0x6f5b,	// (0x0004e8ef) main_mup3_pane_g4_ParamLimits

0x6f5b,	// (0x0004e8ef) main_mup3_pane_g4

0x6fa1,	// (0x0004e935) main_mup3_pane_g5_ParamLimits

0x6fa1,	// (0x0004e935) main_mup3_pane_g5

0x6fe7,	// (0x0004e97b) main_mup3_pane_g6_ParamLimits

0x6fe7,	// (0x0004e97b) main_mup3_pane_g6

0xc1d2,	// (0x00053b66) main_mup3_pane_g7_ParamLimits

0xc1d2,	// (0x00053b66) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x00057112) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x00057112) main_mup3_pane_g

0x7065,	// (0x0004e9f9) main_mup3_pane_t1_ParamLimits

0x7065,	// (0x0004e9f9) main_mup3_pane_t1

0x70d9,	// (0x0004ea6d) main_mup3_pane_t2_ParamLimits

0x70d9,	// (0x0004ea6d) main_mup3_pane_t2

0x71ad,	// (0x0004eb41) main_mup3_pane_t4_ParamLimits

0x71ad,	// (0x0004eb41) main_mup3_pane_t4

0x7203,	// (0x0004eb97) main_mup3_pane_t5_ParamLimits

0x7203,	// (0x0004eb97) main_mup3_pane_t5

0x72bf,	// (0x0004ec53) main_mup3_pane_t6_ParamLimits

0x72bf,	// (0x0004ec53) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x00057123) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x00057123) main_mup3_pane_t

0x7377,	// (0x0004ed0b) mup3_progress_pane_ParamLimits

0x7377,	// (0x0004ed0b) mup3_progress_pane

0x740d,	// (0x0004eda1) popup_mup3_control_window_ParamLimits

0x740d,	// (0x0004eda1) popup_mup3_control_window

0xc1e0,	// (0x00053b74) popup_mup3_text_window

0x743f,	// (0x0004edd3) mup3_progress_pane_t1

0x745e,	// (0x0004edf2) mup3_progress_pane_t2

0xc1e8,	// (0x00053b7c) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x00057130) mup3_progress_pane_t

0xc205,	// (0x00053b99) mup_progress_pane_cp03

0xe113,	// (0x00055aa7) bg_tb_trans_pane_cp04

0x747d,	// (0x0004ee11) mup3_volume_pane

0x7485,	// (0x0004ee19) popup_mup3_control_window_g1

0x748e,	// (0x0004ee22) mup3_volume_pane_g1

0x7497,	// (0x0004ee2b) mup3_volume_pane_g2

0x74a0,	// (0x0004ee34) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00057137) mup3_volume_pane_g

0xe113,	// (0x00055aa7) bg_tb_trans_pane_cp03

0xc215,	// (0x00053ba9) popup_mup3_text_window_g1

0xc21d,	// (0x00053bb1) popup_mup3_text_window_t1

0x19c4,	// (0x00049358) list_calc_item_pane_g1_ParamLimits

0xbba8,	// (0x0005353c) mup_volume_pane_cp_g1

0x6e19,	// (0x0004e7ad) main_touch_calib_pane_t3

0x6e2d,	// (0x0004e7c1) main_touch_calib_pane_t4

0x6e41,	// (0x0004e7d5) main_touch_calib_pane_t5

0xb238,	// (0x00052bcc) aid_cell_size_toolbar2

0xb240,	// (0x00052bd4) aid_popup3_width_pane

0xb24c,	// (0x00052be0) aid_zoom_text_msg_primary

0x21ef,	// (0x00049b83) vorec_t7

0x192f,	// (0x000492c3) bg_calc_paper_pane_g1_ParamLimits

0x193b,	// (0x000492cf) bg_calc_paper_pane_g2_ParamLimits

0x1947,	// (0x000492db) bg_calc_paper_pane_g3_ParamLimits

0x1953,	// (0x000492e7) bg_calc_paper_pane_g4_ParamLimits

0x195f,	// (0x000492f3) bg_calc_paper_pane_g5_ParamLimits

0x196b,	// (0x000492ff) bg_calc_paper_pane_g6_ParamLimits

0x197a,	// (0x0004930e) bg_calc_paper_pane_g7_ParamLimits

0x1989,	// (0x0004931d) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00056aec) bg_calc_paper_pane_g_ParamLimits

0x199c,	// (0x00049330) calc_bg_paper_pane_g9_ParamLimits

0x2367,	// (0x00049cfb) image_qvga_pane_ParamLimits

0x2367,	// (0x00049cfb) image_qvga_pane

0x155e,	// (0x00048ef2) bg_popup_sub_pane_cp04_ParamLimits

0x4b33,	// (0x0004c4c7) popup_mup_playback_window_g1_ParamLimits

0x4b3f,	// (0x0004c4d3) popup_mup_playback_window_t1_ParamLimits

0x4b54,	// (0x0004c4e8) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00056e76) popup_mup_playback_window_t_ParamLimits

0x6959,	// (0x0004e2ed) main_mup2_pane_g3_ParamLimits

0x6959,	// (0x0004e2ed) main_mup2_pane_g3

0x26f5,	// (0x0004a089) popup_toolbar_window_cp04

0x5336,	// (0x0004ccca) popup_call2_audio_second_window_g3_ParamLimits

0x5336,	// (0x0004ccca) popup_call2_audio_second_window_g3

0x5740,	// (0x0004d0d4) popup_call2_audio_first_window_g4_ParamLimits

0x5740,	// (0x0004d0d4) popup_call2_audio_first_window_g4

0xb611,	// (0x00052fa5) popup_call2_audio_in_window_g4_ParamLimits

0xb611,	// (0x00052fa5) popup_call2_audio_in_window_g4

0x4b69,	// (0x0004c4fd) aid_area_sk_bg_cut_ParamLimits

0x4b69,	// (0x0004c4fd) aid_area_sk_bg_cut

0x4b87,	// (0x0004c51b) aid_area_sk_bg_cut_2_ParamLimits

0x4b87,	// (0x0004c51b) aid_area_sk_bg_cut_2

0x6c5c,	// (0x0004e5f0) aid_placing_details_win

0x6c64,	// (0x0004e5f8) aid_placing_details_win_2

0xc017,	// (0x000539ab) camera2_autofocus_pane_g1_ParamLimits

0x12f8,	// (0x00048c8c) popup_fixed_preview_cale_window_ParamLimits

0x12f8,	// (0x00048c8c) popup_fixed_preview_cale_window

0x42bb,	// (0x0004bc4f) navi_slider_pane_g3

0x42c4,	// (0x0004bc58) navi_slider_pane_g4

0x42cd,	// (0x0004bc61) navi_slider_pane_g5

0x42bb,	// (0x0004bc4f) navi_slider_pane_g6

0xb3f4,	// (0x00052d88) navi_slider_pane_g7

0x47e8,	// (0x0004c17c) mup_scale_pane_g3

0x47f1,	// (0x0004c185) mup_scale_pane_g4

0x47fa,	// (0x0004c18e) mup_scale_pane_g5

0x4803,	// (0x0004c197) mup_scale_pane_g6

0x480c,	// (0x0004c1a0) mup_scale_pane_g7

0x42bb,	// (0x0004bc4f) cams2_slider_pane_g3

0xbc5d,	// (0x000535f1) cams2_slider_pane_g4

0xbc65,	// (0x000535f9) cams2_slider_pane_g5

0x42bb,	// (0x0004bc4f) cams2_slider_pane_g6

0xbc6d,	// (0x00053601) cams2_slider_pane_g7

0xbe99,	// (0x0005382d) camera2_autofocus_pane_cp_g1

0xb972,	// (0x00053306) bg_popup_preview_window_pane_cp02_ParamLimits

0xb972,	// (0x00053306) bg_popup_preview_window_pane_cp02

0xc22b,	// (0x00053bbf) list_fp_cale_pane_ParamLimits

0xc22b,	// (0x00053bbf) list_fp_cale_pane

0xc237,	// (0x00053bcb) popup_fixed_preview_cale_window_t1_ParamLimits

0xc237,	// (0x00053bcb) popup_fixed_preview_cale_window_t1

0x74a9,	// (0x0004ee3d) popup_fixed_preview_cale_window_t2_ParamLimits

0x74a9,	// (0x0004ee3d) popup_fixed_preview_cale_window_t2

0x74be,	// (0x0004ee52) popup_fixed_preview_cale_window_t3_ParamLimits

0x74be,	// (0x0004ee52) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005713e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005713e) popup_fixed_preview_cale_window_t

0x74d3,	// (0x0004ee67) list_single_fp_cale_pane_ParamLimits

0x74d3,	// (0x0004ee67) list_single_fp_cale_pane

0xc255,	// (0x00053be9) list_single_fp_cale_pane_g1_ParamLimits

0xc255,	// (0x00053be9) list_single_fp_cale_pane_g1

0xc261,	// (0x00053bf5) list_single_fp_cale_pane_g2_ParamLimits

0xc261,	// (0x00053bf5) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00057145) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00057145) list_single_fp_cale_pane_g

0xc27a,	// (0x00053c0e) list_single_fp_cale_pane_t1_ParamLimits

0xc27a,	// (0x00053c0e) list_single_fp_cale_pane_t1

0xc28c,	// (0x00053c20) list_single_fp_cale_pane_t2_ParamLimits

0xc28c,	// (0x00053c20) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005714c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005714c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe113,	// (0x00055aa7) main_dialer_pane

0x74e8,	// (0x0004ee7c) aid_cell_size_keypad

0x74f2,	// (0x0004ee86) dialer_ne_pane

0x74fa,	// (0x0004ee8e) grid_dialer_command_1_pane

0x7502,	// (0x0004ee96) grid_dialer_command_2_pane

0x750a,	// (0x0004ee9e) grid_dialer_keypad_pane

0x751c,	// (0x0004eeb0) bg_popup_call_pane_cp06_ParamLimits

0x751c,	// (0x0004eeb0) bg_popup_call_pane_cp06

0x7528,	// (0x0004eebc) dialer_ne_clear_pane_ParamLimits

0x7528,	// (0x0004eebc) dialer_ne_clear_pane

0xc2bf,	// (0x00053c53) dialer_ne_pane_g1

0xc2c7,	// (0x00053c5b) dialer_ne_pane_t1_ParamLimits

0xc2c7,	// (0x00053c5b) dialer_ne_pane_t1

0x7534,	// (0x0004eec8) dialer_ne_pane_t2_ParamLimits

0x7534,	// (0x0004eec8) dialer_ne_pane_t2

0x755e,	// (0x0004eef2) dialer_ne_pane_t3_ParamLimits

0x755e,	// (0x0004eef2) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00057151) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00057151) dialer_ne_pane_t

0x758e,	// (0x0004ef22) dialer_ne_pane_t3_copy1_ParamLimits

0x758e,	// (0x0004ef22) dialer_ne_pane_t3_copy1

0x75bd,	// (0x0004ef51) cell_dialer_keypad_pane_ParamLimits

0x75bd,	// (0x0004ef51) cell_dialer_keypad_pane

0x75d4,	// (0x0004ef68) cell_dialer_command_1_pane_ParamLimits

0x75d4,	// (0x0004ef68) cell_dialer_command_1_pane

0x75ea,	// (0x0004ef7e) cell_dialer_command_2_pane_ParamLimits

0x75ea,	// (0x0004ef7e) cell_dialer_command_2_pane

0xc2d9,	// (0x00053c6d) bg_button_pane_cp02_ParamLimits

0xc2d9,	// (0x00053c6d) bg_button_pane_cp02

0x75f9,	// (0x0004ef8d) cell_dialer_keypad_pane_g1_ParamLimits

0x75f9,	// (0x0004ef8d) cell_dialer_keypad_pane_g1

0xc2d9,	// (0x00053c6d) bg_button_pane_cp03_ParamLimits

0xc2d9,	// (0x00053c6d) bg_button_pane_cp03

0x760d,	// (0x0004efa1) cell_dialer_command_1_pane_g1_ParamLimits

0x760d,	// (0x0004efa1) cell_dialer_command_1_pane_g1

0xc2e5,	// (0x00053c79) bg_button_pane_cp04

0x7621,	// (0x0004efb5) cell_dialer_command_2_pane_g1

0x21a7,	// (0x00049b3b) bg_button_pane_cp06

0xc2ed,	// (0x00053c81) dialer_ne_clear_pane_g1

0x414c,	// (0x0004bae0) navi_pane_g2

0x417a,	// (0x0004bb0e) navi_pane_g3

0x0002,

0xf3e5,	// (0x00056d79) navi_pane_g

0x4209,	// (0x0004bb9d) navi_pane_mv_g2

0x4230,	// (0x0004bbc4) navi_pane_mv_g5

0x4238,	// (0x0004bbcc) navi_pane_mv_t1

0x18ca,	// (0x0004925e) main_clock2_pane

0x766e,	// (0x0004f002) main_clock2_list_pane_ParamLimits

0x766e,	// (0x0004f002) main_clock2_list_pane

0x76a6,	// (0x0004f03a) main_clock2_pane_t1_ParamLimits

0x76a6,	// (0x0004f03a) main_clock2_pane_t1

0x76e2,	// (0x0004f076) main_clock2_pane_t2_ParamLimits

0x76e2,	// (0x0004f076) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005715d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005715d) main_clock2_pane_t

0x7780,	// (0x0004f114) popup_clock_analogue_window_cp03_ParamLimits

0x7780,	// (0x0004f114) popup_clock_analogue_window_cp03

0x77a5,	// (0x0004f139) popup_clock_digital_window_cp02_ParamLimits

0x77a5,	// (0x0004f139) popup_clock_digital_window_cp02

0x7816,	// (0x0004f1aa) main_clock2_list_single_pane_ParamLimits

0x7816,	// (0x0004f1aa) main_clock2_list_single_pane

0x21a7,	// (0x00049b3b) list_highlight_pane_cp05

0xc32b,	// (0x00053cbf) main_clock2_list_single_pane_t1

0x26f5,	// (0x0004a089) popup_toolbar_window_cp04_ParamLimits

0x6c86,	// (0x0004e61a) camera2_autofocus_pane_g2_ParamLimits

0x6c86,	// (0x0004e61a) camera2_autofocus_pane_g2

0x6c92,	// (0x0004e626) camera2_autofocus_pane_g3_ParamLimits

0x6c92,	// (0x0004e626) camera2_autofocus_pane_g3

0x6c9e,	// (0x0004e632) camera2_autofocus_pane_g4_ParamLimits

0x6c9e,	// (0x0004e632) camera2_autofocus_pane_g4

0x6caa,	// (0x0004e63e) camera2_autofocus_pane_g5_ParamLimits

0x6caa,	// (0x0004e63e) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000570a1) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000570a1) camera2_autofocus_pane_g

0xc1b2,	// (0x00053b46) camera2_autofocus_pane_cp_g2

0xc1ba,	// (0x00053b4e) camera2_autofocus_pane_cp_g3

0xc1c2,	// (0x00053b56) camera2_autofocus_pane_cp_g4

0xc1ca,	// (0x00053b5e) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x00057107) camera2_autofocus_pane_cp_g

0x7514,	// (0x0004eea8) popup_dialer_spcha_window

0xe113,	// (0x00055aa7) bg_popup_sub_pane_cp07

0xc339,	// (0x00053ccd) list_spcha_pane

0xc341,	// (0x00053cd5) list_single_spcha_pane_ParamLimits

0xc341,	// (0x00053cd5) list_single_spcha_pane

0xe113,	// (0x00055aa7) list_highlight_pane_cp06

0xc352,	// (0x00053ce6) list_single_spcha_pane_t1

0x5b69,	// (0x0004d4fd) popup_call2_audio_out_window_g4_ParamLimits

0x5b69,	// (0x0004d4fd) popup_call2_audio_out_window_g4

0xe113,	// (0x00055aa7) main_imed2_pane

0xb9a6,	// (0x0005333a) popup_imed_adjust2_window

0x6067,	// (0x0004d9fb) popup_imed_trans_window_ParamLimits

0x6067,	// (0x0004d9fb) popup_imed_trans_window

0xbcd7,	// (0x0005366b) popup_blid_sat_info2_window_t1

0xbce5,	// (0x00053679) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00057036) popup_blid_sat_info2_window_t

0x78bf,	// (0x0004f253) aid_size_cell_colour_35

0x78df,	// (0x0004f273) aid_size_cell_colour_112

0x78ff,	// (0x0004f293) aid_size_cell_effect

0xb97e,	// (0x00053312) bg_tb_trans_pane_cp02

0x39ae,	// (0x0004b342) heading_imed_pane

0x791f,	// (0x0004f2b3) listscroll_imed_pane

0xc360,	// (0x00053cf4) heading_imed_pane_g1

0xc368,	// (0x00053cfc) heading_imed_pane_t1

0xc376,	// (0x00053d0a) grid_imed_colour_35_pane_ParamLimits

0xc376,	// (0x00053d0a) grid_imed_colour_35_pane

0x792b,	// (0x0004f2bf) grid_imed_effect_pane

0xc38d,	// (0x00053d21) list_imed_aspect_pane

0x7941,	// (0x0004f2d5) scroll_pane_cp027_ParamLimits

0x7941,	// (0x0004f2d5) scroll_pane_cp027

0x7952,	// (0x0004f2e6) cell_imed_effect_pane_ParamLimits

0x7952,	// (0x0004f2e6) cell_imed_effect_pane

0xc395,	// (0x00053d29) cell_imed_colour_pane_ParamLimits

0xc395,	// (0x00053d29) cell_imed_colour_pane

0xc3d7,	// (0x00053d6b) cell_imed_colour_pane_g1_ParamLimits

0xc3d7,	// (0x00053d6b) cell_imed_colour_pane_g1

0xc3e8,	// (0x00053d7c) hgihlgiht_grid_pane_cp016_ParamLimits

0xc3e8,	// (0x00053d7c) hgihlgiht_grid_pane_cp016

0x7979,	// (0x0004f30d) cell_imed_effect_pane_g1

0x7981,	// (0x0004f315) grid_highlight_pane_cp017

0xc3f9,	// (0x00053d8d) list_imed_single_pane_ParamLimits

0xc3f9,	// (0x00053d8d) list_imed_single_pane

0xe113,	// (0x00055aa7) list_highlight_pane_cp07

0xc40e,	// (0x00053da2) list_imed_aspect_pane_comp1_t1

0xb97e,	// (0x00053312) bg_tb_trans_pane_cp05

0xc430,	// (0x00053dc4) popup_imed_adjust2_window_g1

0xc457,	// (0x00053deb) popup_imed_adjust2_window_t1

0xc46f,	// (0x00053e03) slider_imed_adjust_pane

0xc483,	// (0x00053e17) slider_imed_adjust_pane_g1

0xc493,	// (0x00053e27) slider_imed_adjust_pane_g2

0xc4a3,	// (0x00053e37) slider_imed_adjust_pane_g3

0xc4b4,	// (0x00053e48) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005717a) slider_imed_adjust_pane_g

0x798a,	// (0x0004f31e) aid_size_cell_clipart2

0x7996,	// (0x0004f32a) grid_imed_clipart_pane

0xc4c5,	// (0x00053e59) scroll_pane_cp031

0x79a0,	// (0x0004f334) cell_imed_clipart_pane_ParamLimits

0x79a0,	// (0x0004f334) cell_imed_clipart_pane

0x79c2,	// (0x0004f356) cell_imed_clipart_pane_g1

0xe113,	// (0x00055aa7) grid_highlight_pane_cp014

0x7683,	// (0x0004f017) main_clock2_pane_g1_ParamLimits

0x7683,	// (0x0004f017) main_clock2_pane_g1

0x77c1,	// (0x0004f155) aid_call2_pane_cp10

0x77d3,	// (0x0004f167) aid_call_pane_cp10

0x4048,	// (0x0004b9dc) popup_clock_analogue_window_cp10_g1

0x4048,	// (0x0004b9dc) popup_clock_analogue_window_cp10_g2

0x77e5,	// (0x0004f179) popup_clock_analogue_window_cp10_g3

0x77e5,	// (0x0004f179) popup_clock_analogue_window_cp10_g4

0x4048,	// (0x0004b9dc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00057168) popup_clock_analogue_window_cp10_g

0x77f7,	// (0x0004f18b) popup_clock_analogue_window_cp10_t1

0x7828,	// (0x0004f1bc) clock_digital_number_pane_cp10_ParamLimits

0x7828,	// (0x0004f1bc) clock_digital_number_pane_cp10

0x7840,	// (0x0004f1d4) clock_digital_number_pane_cp11_ParamLimits

0x7840,	// (0x0004f1d4) clock_digital_number_pane_cp11

0x7858,	// (0x0004f1ec) clock_digital_number_pane_cp12_ParamLimits

0x7858,	// (0x0004f1ec) clock_digital_number_pane_cp12

0x7870,	// (0x0004f204) clock_digital_number_pane_cp13_ParamLimits

0x7870,	// (0x0004f204) clock_digital_number_pane_cp13

0x7888,	// (0x0004f21c) clock_digital_separator_pane_cp10_ParamLimits

0x7888,	// (0x0004f21c) clock_digital_separator_pane_cp10

0x78a0,	// (0x0004f234) popup_clock_digital_window_cp02_t1_ParamLimits

0x78a0,	// (0x0004f234) popup_clock_digital_window_cp02_t1

0x1556,	// (0x00048eea) clock_digital_number_pane_cp10_g1

0x1556,	// (0x00048eea) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00057183) clock_digital_number_pane_cp10_g

0x1556,	// (0x00048eea) clock_digital_separator_pane_cp10_g1

0x1556,	// (0x00048eea) clock_digital_separator_pane_g2_cp10

0x427a,	// (0x0004bc0e) navi_pane_vded_g4

0x4283,	// (0x0004bc17) navi_pane_vded_g5

0x428c,	// (0x0004bc20) navi_pane_vded_t1

0xe113,	// (0x00055aa7) main_vded_pane

0x79cb,	// (0x0004f35f) main_vded_pane_g1

0x79d5,	// (0x0004f369) main_vded_pane_g2

0x79df,	// (0x0004f373) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00057188) main_vded_pane_g

0x79e9,	// (0x0004f37d) main_vded_pane_t1

0x79f7,	// (0x0004f38b) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005718f) main_vded_pane_t

0x7a05,	// (0x0004f399) vded_slider_pane

0x7a0d,	// (0x0004f3a1) vded_video_pane

0xc4cd,	// (0x00053e61) vded_video_pane_g1

0x7a15,	// (0x0004f3a9) vded_video_pane_g2

0xbe99,	// (0x0005382d) vded_video_pane_g3

0x0002,

0xf800,	// (0x00057194) vded_video_pane_g

0xc4d7,	// (0x00053e6b) vded_slider_pane_g1

0xbba8,	// (0x0005353c) vded_slider_pane_g2

0xc4e0,	// (0x00053e74) vded_slider_pane_g3

0xc4e9,	// (0x00053e7d) vded_slider_pane_g4

0xc4f2,	// (0x00053e86) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005719b) vded_slider_pane_g

0x73f5,	// (0x0004ed89) mup3_rocker_pane_ParamLimits

0x73f5,	// (0x0004ed89) mup3_rocker_pane

0x7a1e,	// (0x0004f3b2) mup3_control_keys_pane_g1

0x7a26,	// (0x0004f3ba) mup3_control_keys_pane_g2

0x7a2e,	// (0x0004f3c2) mup3_control_keys_pane_g3

0x7a36,	// (0x0004f3ca) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000571a6) mup3_control_keys_pane_g

0x132f,	// (0x00048cc3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x132f,	// (0x00048cc3) popup_toolbar2_fixed_window_cp01

0x7429,	// (0x0004edbd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7429,	// (0x0004edbd) popup_toolbar2_fixed_window_cp02

0x54a8,	// (0x0004ce3c) popup_call2_audio_second_window_t4_ParamLimits

0x54a8,	// (0x0004ce3c) popup_call2_audio_second_window_t4

0x59d6,	// (0x0004d36a) popup_call2_audio_first_window_t6_ParamLimits

0x59d6,	// (0x0004d36a) popup_call2_audio_first_window_t6

0xb4be,	// (0x00052e52) popup_call2_audio_out_window_t6_ParamLimits

0xb4be,	// (0x00052e52) popup_call2_audio_out_window_t6

0xe113,	// (0x00055aa7) main_vitu_pane

0x7a46,	// (0x0004f3da) aid_size_cell_itu_ParamLimits

0x7a46,	// (0x0004f3da) aid_size_cell_itu

0x1353,	// (0x00048ce7) bg_popup_window_pane_cp08_ParamLimits

0x1353,	// (0x00048ce7) bg_popup_window_pane_cp08

0x7a5c,	// (0x0004f3f0) field_vitu_entry_pane_ParamLimits

0x7a5c,	// (0x0004f3f0) field_vitu_entry_pane

0x7a73,	// (0x0004f407) grid_vitu_function_pane_ParamLimits

0x7a73,	// (0x0004f407) grid_vitu_function_pane

0x7a8e,	// (0x0004f422) grid_vitu_itu_pane_ParamLimits

0x7a8e,	// (0x0004f422) grid_vitu_itu_pane

0x7aac,	// (0x0004f440) cell_vitu_itu_pane_ParamLimits

0x7aac,	// (0x0004f440) cell_vitu_itu_pane

0x7ace,	// (0x0004f462) cell_vitu_function_pane_ParamLimits

0x7ace,	// (0x0004f462) cell_vitu_function_pane

0x1353,	// (0x00048ce7) bg_popup_sub_pane_cp08_ParamLimits

0x1353,	// (0x00048ce7) bg_popup_sub_pane_cp08

0x7ae7,	// (0x0004f47b) field_vitu_entry_pane_t1_ParamLimits

0x7ae7,	// (0x0004f47b) field_vitu_entry_pane_t1

0xc513,	// (0x00053ea7) field_vitu_entry_pane_t2_ParamLimits

0xc513,	// (0x00053ea7) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000571b4) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000571b4) field_vitu_entry_pane_t

0xc530,	// (0x00053ec4) bg_button_pane_cp05_ParamLimits

0xc530,	// (0x00053ec4) bg_button_pane_cp05

0x7b05,	// (0x0004f499) cell_vitu_itu_pane_g1

0x7b1d,	// (0x0004f4b1) cell_vitu_itu_pane_t1_ParamLimits

0x7b1d,	// (0x0004f4b1) cell_vitu_itu_pane_t1

0x7b2f,	// (0x0004f4c3) cell_vitu_itu_pane_t2_ParamLimits

0x7b2f,	// (0x0004f4c3) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000571b9) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000571b9) cell_vitu_itu_pane_t

0xc53e,	// (0x00053ed2) bg_button_pane_cp07

0x7b64,	// (0x0004f4f8) cell_vitu_function_pane_g1

0xb2a6,	// (0x00052c3a) main_calc_pane_g1

0x1156,	// (0x00048aea) aid_visual_content_pane

0xe113,	// (0x00055aa7) main_vradio_pane

0x7b6d,	// (0x0004f501) main_vradio_pane_g1_ParamLimits

0x7b6d,	// (0x0004f501) main_vradio_pane_g1

0xc548,	// (0x00053edc) main_vradio_pane_g2_ParamLimits

0xc548,	// (0x00053edc) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000571c0) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000571c0) main_vradio_pane_g

0x7b86,	// (0x0004f51a) main_vradio_pane_t1_ParamLimits

0x7b86,	// (0x0004f51a) main_vradio_pane_t1

0x7b9b,	// (0x0004f52f) main_vradio_pane_t2_ParamLimits

0x7b9b,	// (0x0004f52f) main_vradio_pane_t2

0xc555,	// (0x00053ee9) main_vradio_pane_t3_ParamLimits

0xc555,	// (0x00053ee9) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000571c5) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000571c5) main_vradio_pane_t

0x7bb0,	// (0x0004f544) vradio_rocker_control_pane_ParamLimits

0x7bb0,	// (0x0004f544) vradio_rocker_control_pane

0x7bc2,	// (0x0004f556) vradio_station_info_pane_ParamLimits

0x7bc2,	// (0x0004f556) vradio_station_info_pane

0xc569,	// (0x00053efd) vradio_frequency_info_pane_ParamLimits

0xc569,	// (0x00053efd) vradio_frequency_info_pane

0xbe99,	// (0x0005382d) vradio_station_info_pane_g1

0xc578,	// (0x00053f0c) vradio_station_info_pane_t1_ParamLimits

0xc578,	// (0x00053f0c) vradio_station_info_pane_t1

0xc59a,	// (0x00053f2e) vradio_station_info_pane_t2_ParamLimits

0xc59a,	// (0x00053f2e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000571cc) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000571cc) vradio_station_info_pane_t

0xc5ac,	// (0x00053f40) vradio_tuning_pane

0xc5b4,	// (0x00053f48) vradio_rocker_control_pane_g1

0xc5bc,	// (0x00053f50) vradio_rocker_control_pane_g2

0xc5c4,	// (0x00053f58) vradio_rocker_control_pane_g3

0xc5cc,	// (0x00053f60) vradio_rocker_control_pane_g4

0xc5d4,	// (0x00053f68) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000571d1) vradio_rocker_control_pane_g

0x7bd4,	// (0x0004f568) vradio_frequency_info_pane_g1

0xc5dc,	// (0x00053f70) vradio_frequency_info_pane_t1_ParamLimits

0xc5dc,	// (0x00053f70) vradio_frequency_info_pane_t1

0x7bde,	// (0x0004f572) vradio_tuning_pane_g1

0x7be9,	// (0x0004f57d) vradio_tuning_pane_t1

0xb264,	// (0x00052bf8) area_side_right_pane_ParamLimits

0xb264,	// (0x00052bf8) area_side_right_pane

0xb939,	// (0x000532cd) status_small_pane_g1

0xb941,	// (0x000532d5) status_small_pane_g2

0xb94a,	// (0x000532de) status_small_pane_g3

0xb953,	// (0x000532e7) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00056f8c) status_small_pane_g

0xb95c,	// (0x000532f0) status_small_pane_t1

0xe113,	// (0x00055aa7) main_video3_pane

0xc5f0,	// (0x00053f84) cams_zoom_vslider_pane

0xc5f8,	// (0x00053f8c) image3_wide_pane_ParamLimits

0xc5f8,	// (0x00053f8c) image3_wide_pane

0xc612,	// (0x00053fa6) image3_wide_small_pane

0xc61e,	// (0x00053fb2) main_video3_pane_g1_ParamLimits

0xc61e,	// (0x00053fb2) main_video3_pane_g1

0xc63a,	// (0x00053fce) main_video3_pane_g2_ParamLimits

0xc63a,	// (0x00053fce) main_video3_pane_g2

0x0001,

0xf848,	// (0x000571dc) main_video3_pane_g_ParamLimits

0xf848,	// (0x000571dc) main_video3_pane_g

0xc656,	// (0x00053fea) main_video3_pane_t1_ParamLimits

0xc656,	// (0x00053fea) main_video3_pane_t1

0xc681,	// (0x00054015) main_video3_pane_t2_ParamLimits

0xc681,	// (0x00054015) main_video3_pane_t2

0xc6ac,	// (0x00054040) main_video3_pane_t3_ParamLimits

0xc6ac,	// (0x00054040) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000571e1) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000571e1) main_video3_pane_t

0xc6d9,	// (0x0005406d) cams_zoom_vslider_pane_g1

0xc6e2,	// (0x00054076) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000571e8) cams_zoom_vslider_pane_g

0xc6ea,	// (0x0005407e) small_slider_vertical_pane

0xbe99,	// (0x0005382d) small_slider_vertical_pane_g1

0xbe99,	// (0x0005382d) small_slider_vertical_pane_g2

0xc6f2,	// (0x00054086) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000571ed) small_slider_vertical_pane_g

0xe113,	// (0x00055aa7) main_hwr_training_pane

0xc6fb,	// (0x0005408f) hwr_training_instruct_pane_ParamLimits

0xc6fb,	// (0x0005408f) hwr_training_instruct_pane

0x7bf8,	// (0x0004f58c) hwr_training_navi_pane_ParamLimits

0x7bf8,	// (0x0004f58c) hwr_training_navi_pane

0x7c17,	// (0x0004f5ab) hwr_training_write_pane_ParamLimits

0x7c17,	// (0x0004f5ab) hwr_training_write_pane

0xe113,	// (0x00055aa7) bg_frame_shadow_pane

0xc732,	// (0x000540c6) hwr_training_write_pane_g1

0xc73a,	// (0x000540ce) hwr_training_write_pane_g2

0xc742,	// (0x000540d6) hwr_training_write_pane_g3

0xc74a,	// (0x000540de) hwr_training_write_pane_g4

0xc752,	// (0x000540e6) hwr_training_write_pane_g5

0xc75a,	// (0x000540ee) hwr_training_write_pane_g6

0xc762,	// (0x000540f6) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000571f4) hwr_training_write_pane_g

0xc76a,	// (0x000540fe) hwr_training_navi_pane_g1_ParamLimits

0xc76a,	// (0x000540fe) hwr_training_navi_pane_g1

0xc77c,	// (0x00054110) hwr_training_navi_pane_g2_ParamLimits

0xc77c,	// (0x00054110) hwr_training_navi_pane_g2

0xc78e,	// (0x00054122) hwr_training_navi_pane_g3_ParamLimits

0xc78e,	// (0x00054122) hwr_training_navi_pane_g3

0xc79e,	// (0x00054132) hwr_training_navi_pane_g4_ParamLimits

0xc79e,	// (0x00054132) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00057203) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00057203) hwr_training_navi_pane_g

0xc7ab,	// (0x0005413f) hwr_training_navi_pane_t1

0x7c5f,	// (0x0004f5f3) list_single_hwr_training_instruct_pane_ParamLimits

0x7c5f,	// (0x0004f5f3) list_single_hwr_training_instruct_pane

0xc7b9,	// (0x0005414d) list_single_hwr_training_instruct_pane_t1

0xbdd9,	// (0x0005376d) bg_frame_shadow_pane_g1

0xc7c8,	// (0x0005415c) bg_frame_shadow_pane_g2

0xc7d0,	// (0x00054164) bg_frame_shadow_pane_g3

0xc7d8,	// (0x0005416c) bg_frame_shadow_pane_g4

0xc7e0,	// (0x00054174) bg_frame_shadow_pane_g5

0xc7e8,	// (0x0005417c) bg_frame_shadow_pane_g6

0xc7f0,	// (0x00054184) bg_frame_shadow_pane_g7

0x1b12,	// (0x000494a6) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005720e) bg_frame_shadow_pane_g

0xe113,	// (0x00055aa7) main_video_tele_dialer_pane

0x7c74,	// (0x0004f608) aid_size_cell_video_keypad_ParamLimits

0x7c74,	// (0x0004f608) aid_size_cell_video_keypad

0x7c8e,	// (0x0004f622) grid_video_dialer_keypad_pane_ParamLimits

0x7c8e,	// (0x0004f622) grid_video_dialer_keypad_pane

0x7cda,	// (0x0004f66e) video_down_pane_cp_ParamLimits

0x7cda,	// (0x0004f66e) video_down_pane_cp

0x7d0c,	// (0x0004f6a0) cell_video_dialer_keypad_pane_ParamLimits

0x7d0c,	// (0x0004f6a0) cell_video_dialer_keypad_pane

0xc7f8,	// (0x0005418c) bg_button_pane_cp08_ParamLimits

0xc7f8,	// (0x0005418c) bg_button_pane_cp08

0x7d2e,	// (0x0004f6c2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d2e,	// (0x0004f6c2) cell_video_dialer_keypad_pane_g1

0x73df,	// (0x0004ed73) mup3_rocker2_pane_ParamLimits

0x73df,	// (0x0004ed73) mup3_rocker2_pane

0xbe99,	// (0x0005382d) mup3_rocker2_pane_g1

0x5f48,	// (0x0004d8dc) main_dialer2_pane

0xe113,	// (0x00055aa7) main_mp4_pane

0xc80c,	// (0x000541a0) main_mp4_pane_g1_ParamLimits

0xc80c,	// (0x000541a0) main_mp4_pane_g1

0xc80c,	// (0x000541a0) main_mp4_pane_g2_ParamLimits

0xc80c,	// (0x000541a0) main_mp4_pane_g2

0x7d65,	// (0x0004f6f9) main_mp4_pane_g3_ParamLimits

0x7d65,	// (0x0004f6f9) main_mp4_pane_g3

0xc81a,	// (0x000541ae) main_mp4_pane_g4_ParamLimits

0xc81a,	// (0x000541ae) main_mp4_pane_g4

0xc842,	// (0x000541d6) main_mp4_pane_g5_ParamLimits

0xc842,	// (0x000541d6) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005722e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005722e) main_mp4_pane_g

0xc892,	// (0x00054226) main_mp4_pane_t1_ParamLimits

0xc892,	// (0x00054226) main_mp4_pane_t1

0xc8ee,	// (0x00054282) main_mp4_pane_t2_ParamLimits

0xc8ee,	// (0x00054282) main_mp4_pane_t2

0xc940,	// (0x000542d4) main_mp4_pane_t3_ParamLimits

0xc940,	// (0x000542d4) main_mp4_pane_t3

0xc960,	// (0x000542f4) main_mp4_pane_t4_ParamLimits

0xc960,	// (0x000542f4) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005723b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005723b) main_mp4_pane_t

0xc9a4,	// (0x00054338) mp4_progress_pane_ParamLimits

0xc9a4,	// (0x00054338) mp4_progress_pane

0xc9ee,	// (0x00054382) mp4_rocker_pane_ParamLimits

0xc9ee,	// (0x00054382) mp4_rocker_pane

0xca16,	// (0x000543aa) mp4_progress_pane_t1

0xca2f,	// (0x000543c3) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00057244) mp4_progress_pane_t

0xca48,	// (0x000543dc) mup_progress_pane_cp04

0xbe99,	// (0x0005382d) mp4_rocker_pane_g1

0x7da1,	// (0x0004f735) aid_cell_size_keypad2_ParamLimits

0x7da1,	// (0x0004f735) aid_cell_size_keypad2

0x7db7,	// (0x0004f74b) dialer2_ne_pane_ParamLimits

0x7db7,	// (0x0004f74b) dialer2_ne_pane

0x7dd1,	// (0x0004f765) grid_dialer2_keypad_pane_ParamLimits

0x7dd1,	// (0x0004f765) grid_dialer2_keypad_pane

0xbc7e,	// (0x00053612) bg_popup_call_pane_cp07_ParamLimits

0xbc7e,	// (0x00053612) bg_popup_call_pane_cp07

0x7ded,	// (0x0004f781) dialer2_ne_pane_t1_ParamLimits

0x7ded,	// (0x0004f781) dialer2_ne_pane_t1

0x7e28,	// (0x0004f7bc) cell_dialer2_keypad_pane_ParamLimits

0x7e28,	// (0x0004f7bc) cell_dialer2_keypad_pane

0xca66,	// (0x000543fa) bg_button_pane_pane_cp04_ParamLimits

0xca66,	// (0x000543fa) bg_button_pane_pane_cp04

0x7e4a,	// (0x0004f7de) cell_dialer2_keypad_pane_g1_ParamLimits

0x7e4a,	// (0x0004f7de) cell_dialer2_keypad_pane_g1

0x25b7,	// (0x00049f4b) aid_placing_vt_set_content_ParamLimits

0x25b7,	// (0x00049f4b) aid_placing_vt_set_content

0x25df,	// (0x00049f73) aid_placing_vt_set_title_ParamLimits

0x25df,	// (0x00049f73) aid_placing_vt_set_title

0xe113,	// (0x00055aa7) main_image3_pane

0x7f10,	// (0x0004f8a4) area_side_right_pane_cp01_ParamLimits

0x7f10,	// (0x0004f8a4) area_side_right_pane_cp01

0xc80c,	// (0x000541a0) main_image3_pane_g1_ParamLimits

0xc80c,	// (0x000541a0) main_image3_pane_g1

0x7f27,	// (0x0004f8bb) main_image3_pane_g2_ParamLimits

0x7f27,	// (0x0004f8bb) main_image3_pane_g2

0x7f4f,	// (0x0004f8e3) main_image3_pane_g3_ParamLimits

0x7f4f,	// (0x0004f8e3) main_image3_pane_g3

0x7f79,	// (0x0004f90d) main_image3_pane_g4_ParamLimits

0x7f79,	// (0x0004f90d) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00057253) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00057253) main_image3_pane_g

0x7fa3,	// (0x0004f937) main_image3_pane_t1_ParamLimits

0x7fa3,	// (0x0004f937) main_image3_pane_t1

0x7ffb,	// (0x0004f98f) main_image3_pane_t2_ParamLimits

0x7ffb,	// (0x0004f98f) main_image3_pane_t2

0x804d,	// (0x0004f9e1) main_image3_pane_t3_ParamLimits

0x804d,	// (0x0004f9e1) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005725c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005725c) main_image3_pane_t

0x1353,	// (0x00048ce7) grid_sctrl_middle_pane_cp01_ParamLimits

0x1353,	// (0x00048ce7) grid_sctrl_middle_pane_cp01

0x80d5,	// (0x0004fa69) cell_sctrl_middle_pane_cp01_ParamLimits

0x80d5,	// (0x0004fa69) cell_sctrl_middle_pane_cp01

0x80f2,	// (0x0004fa86) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x80f2,	// (0x0004fa86) cell_sctrl_middle_pane_cp01_g1

0xe113,	// (0x00055aa7) main_call4_pane

0x8108,	// (0x0004fa9c) aid_size_button_call4_ParamLimits

0x8108,	// (0x0004fa9c) aid_size_button_call4

0x8139,	// (0x0004facd) call4_windows_pane_ParamLimits

0x8139,	// (0x0004facd) call4_windows_pane

0x8159,	// (0x0004faed) grid_call4_button_pane_ParamLimits

0x8159,	// (0x0004faed) grid_call4_button_pane

0xcaa4,	// (0x00054438) call4_windows_conf_pane

0xcabb,	// (0x0005444f) popup_call4_audio_first_window_ParamLimits

0xcabb,	// (0x0005444f) popup_call4_audio_first_window

0xcb07,	// (0x0005449b) popup_call4_audio_second_window_ParamLimits

0xcb07,	// (0x0005449b) popup_call4_audio_second_window

0xcb1b,	// (0x000544af) popup_call4_audio_wait_window_ParamLimits

0xcb1b,	// (0x000544af) popup_call4_audio_wait_window

0x8186,	// (0x0004fb1a) cell_call4_button_pane_ParamLimits

0x8186,	// (0x0004fb1a) cell_call4_button_pane

0x81af,	// (0x0004fb43) bg_button_pane_cp09_ParamLimits

0x81af,	// (0x0004fb43) bg_button_pane_cp09

0x81bb,	// (0x0004fb4f) cell_call4_button_pane_g1_ParamLimits

0x81bb,	// (0x0004fb4f) cell_call4_button_pane_g1

0x81e1,	// (0x0004fb75) cell_call4_button_pane_t1_ParamLimits

0x81e1,	// (0x0004fb75) cell_call4_button_pane_t1

0xcb63,	// (0x000544f7) popup_call4_audio_conf_window_ParamLimits

0xcb63,	// (0x000544f7) popup_call4_audio_conf_window

0x743f,	// (0x0004edd3) mup3_progress_pane_t1_ParamLimits

0x745e,	// (0x0004edf2) mup3_progress_pane_t2_ParamLimits

0xc1e8,	// (0x00053b7c) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x00057130) mup3_progress_pane_t_ParamLimits

0xc205,	// (0x00053b99) mup_progress_pane_cp03_ParamLimits

0x7a3e,	// (0x0004f3d2) mup3_control_keys_pane_g4_copy1

0xc9d2,	// (0x00054366) mp4_rocker2_pane_ParamLimits

0xc9d2,	// (0x00054366) mp4_rocker2_pane

0xcb77,	// (0x0005450b) mp4_rocker2_pane_g1

0xcb7f,	// (0x00054513) mp4_rocker2_pane_g2

0xcb87,	// (0x0005451b) mp4_rocker2_pane_g3

0xcb8f,	// (0x00054523) mp4_rocker2_pane_g4

0xcb97,	// (0x0005452b) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00057265) mp4_rocker2_pane_g

0xe113,	// (0x00055aa7) main_camera4_pane

0xe113,	// (0x00055aa7) main_video4_pane

0x7ca8,	// (0x0004f63c) main_video_tele_dialer_pane_t1_ParamLimits

0x7ca8,	// (0x0004f63c) main_video_tele_dialer_pane_t1

0x7cc1,	// (0x0004f655) main_video_tele_dialer_pane_t2_ParamLimits

0x7cc1,	// (0x0004f655) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005721f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005721f) main_video_tele_dialer_pane_t

0x821f,	// (0x0004fbb3) cam4_autofocus_pane_ParamLimits

0x821f,	// (0x0004fbb3) cam4_autofocus_pane

0x8235,	// (0x0004fbc9) cam4_image_uncrop_pane_ParamLimits

0x8235,	// (0x0004fbc9) cam4_image_uncrop_pane

0x824f,	// (0x0004fbe3) cam4_indicators_pane_ParamLimits

0x824f,	// (0x0004fbe3) cam4_indicators_pane

0x827a,	// (0x0004fc0e) main_camera4_pane_g1_ParamLimits

0x827a,	// (0x0004fc0e) main_camera4_pane_g1

0x828c,	// (0x0004fc20) main_camera4_pane_g2_ParamLimits

0x828c,	// (0x0004fc20) main_camera4_pane_g2

0x829f,	// (0x0004fc33) main_camera4_pane_g3_ParamLimits

0x829f,	// (0x0004fc33) main_camera4_pane_g3

0x82b2,	// (0x0004fc46) main_camera4_pane_g4_ParamLimits

0x82b2,	// (0x0004fc46) main_camera4_pane_g4

0x82c5,	// (0x0004fc59) main_camera4_pane_g5_ParamLimits

0x82c5,	// (0x0004fc59) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00057270) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00057270) main_camera4_pane_g

0x82e9,	// (0x0004fc7d) main_camera4_pane_t1_ParamLimits

0x82e9,	// (0x0004fc7d) main_camera4_pane_t1

0xc105,	// (0x00053a99) bg_tb_trans_pane_cp06

0xcbc3,	// (0x00054557) cam4_indicators_pane_g1

0xcbd4,	// (0x00054568) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005728b) cam4_indicators_pane_g

0xcbf2,	// (0x00054586) cam4_indicators_pane_t1

0x834d,	// (0x0004fce1) main_video4_pane_g1_ParamLimits

0x834d,	// (0x0004fce1) main_video4_pane_g1

0x835c,	// (0x0004fcf0) main_video4_pane_g2_ParamLimits

0x835c,	// (0x0004fcf0) main_video4_pane_g2

0x836b,	// (0x0004fcff) main_video4_pane_g3_ParamLimits

0x836b,	// (0x0004fcff) main_video4_pane_g3

0x837a,	// (0x0004fd0e) main_video4_pane_g4_ParamLimits

0x837a,	// (0x0004fd0e) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00057292) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00057292) main_video4_pane_g

0x8398,	// (0x0004fd2c) vid4_indicators_pane_ParamLimits

0x8398,	// (0x0004fd2c) vid4_indicators_pane

0x83c6,	// (0x0004fd5a) video4_image_uncrop_cif_pane_ParamLimits

0x83c6,	// (0x0004fd5a) video4_image_uncrop_cif_pane

0x83e0,	// (0x0004fd74) video4_image_uncrop_nhd_pane_ParamLimits

0x83e0,	// (0x0004fd74) video4_image_uncrop_nhd_pane

0x8235,	// (0x0004fbc9) video4_image_uncrop_vga_pane_ParamLimits

0x8235,	// (0x0004fbc9) video4_image_uncrop_vga_pane

0x1353,	// (0x00048ce7) bg_tb_trans_pane_cp07

0xcc1e,	// (0x000545b2) vid4_indicators_pane_g1

0xcc32,	// (0x000545c6) vid4_indicators_pane_g2

0xcc46,	// (0x000545da) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005729d) vid4_indicators_pane_g

0xcc75,	// (0x00054609) vid4_indicators_pane_t1

0x83f4,	// (0x0004fd88) cam4_autofocus_pane_g1

0x83fc,	// (0x0004fd90) cam4_autofocus_pane_g2

0x8404,	// (0x0004fd98) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000572a8) cam4_autofocus_pane_g

0x840c,	// (0x0004fda0) cam4_autofocus_pane_g3_copy1

0x7cf0,	// (0x0004f684) video_down_pane_cp_t1

0x7cfe,	// (0x0004f692) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00057224) video_down_pane_cp_t

0x1353,	// (0x00048ce7) popup_vitu2_window_ParamLimits

0x1353,	// (0x00048ce7) popup_vitu2_window

0x8414,	// (0x0004fda8) aid_size_cell2_itu2_ParamLimits

0x8414,	// (0x0004fda8) aid_size_cell2_itu2

0x843a,	// (0x0004fdce) aid_size_cell_itu2_ParamLimits

0x843a,	// (0x0004fdce) aid_size_cell_itu2

0x8496,	// (0x0004fe2a) bg_popup_window_pane_cp09_ParamLimits

0x8496,	// (0x0004fe2a) bg_popup_window_pane_cp09

0x84a4,	// (0x0004fe38) field_vitu2_entry_pane_ParamLimits

0x84a4,	// (0x0004fe38) field_vitu2_entry_pane

0x84ca,	// (0x0004fe5e) grid_vitu2_function_pane_ParamLimits

0x84ca,	// (0x0004fe5e) grid_vitu2_function_pane

0x851b,	// (0x0004feaf) grid_vitu2_itu_pane_ParamLimits

0x851b,	// (0x0004feaf) grid_vitu2_itu_pane

0x85b3,	// (0x0004ff47) cell_vitu2_itu_pane_ParamLimits

0x85b3,	// (0x0004ff47) cell_vitu2_itu_pane

0x85df,	// (0x0004ff73) cell_vitu2_function_pane_ParamLimits

0x85df,	// (0x0004ff73) cell_vitu2_function_pane

0xcc8c,	// (0x00054620) bg_popup_call_pane_cp08_ParamLimits

0xcc8c,	// (0x00054620) bg_popup_call_pane_cp08

0xcca3,	// (0x00054637) field_vitu2_entry_pane_g1

0xccaf,	// (0x00054643) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000572af) field_vitu2_entry_pane_g

0x051b,	// (0x00047eaf) field_vitu2_entry_pane_t1_ParamLimits

0x051b,	// (0x00047eaf) field_vitu2_entry_pane_t1

0xccc9,	// (0x0005465d) field_vitu2_entry_pane_t2_ParamLimits

0xccc9,	// (0x0005465d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000572b6) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000572b6) field_vitu2_entry_pane_t

0x861e,	// (0x0004ffb2) bg_button_pane_cp010_ParamLimits

0x861e,	// (0x0004ffb2) bg_button_pane_cp010

0xccee,	// (0x00054682) cell_vitu2_itu_pane_g1

0x863a,	// (0x0004ffce) cell_vitu2_itu_pane_t1_ParamLimits

0x863a,	// (0x0004ffce) cell_vitu2_itu_pane_t1

0x054b,	// (0x00047edf) cell_vitu2_itu_pane_t2_ParamLimits

0x054b,	// (0x00047edf) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000572c0) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000572c0) cell_vitu2_itu_pane_t

0x1353,	// (0x00048ce7) bg_button_pane_cp011

0x8698,	// (0x0005002c) cell_vitu2_function_pane_g1

0xe113,	// (0x00055aa7) main_myfav_hc_pane

0x809d,	// (0x0004fa31) popup_image3_note_pane_ParamLimits

0x809d,	// (0x0004fa31) popup_image3_note_pane

0x80b9,	// (0x0004fa4d) popup_image3_tool_bar_pane_ParamLimits

0x80b9,	// (0x0004fa4d) popup_image3_tool_bar_pane

0x05d9,	// (0x00047f6d) cell_vitu2_itu_pane_t3_ParamLimits

0x05d9,	// (0x00047f6d) cell_vitu2_itu_pane_t3

0xe113,	// (0x00055aa7) bg_popup_trans_pane

0xcd00,	// (0x00054694) grid_image3_tool_bar_pane

0xcd0a,	// (0x0005469e) bg_popup_trans_pane_g1

0x2bae,	// (0x0004a542) bg_popup_trans_pane_g2

0xcd12,	// (0x000546a6) bg_popup_trans_pane_g3

0xcd1a,	// (0x000546ae) bg_popup_trans_pane_g4

0xcd22,	// (0x000546b6) bg_popup_trans_pane_g5

0xcd2a,	// (0x000546be) bg_popup_trans_pane_g6

0xcd32,	// (0x000546c6) bg_popup_trans_pane_g7

0xcd3a,	// (0x000546ce) bg_popup_trans_pane_g8

0x2b8e,	// (0x0004a522) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000572c7) bg_popup_trans_pane_g

0xcd42,	// (0x000546d6) cell_image3_tool_bar_pane_ParamLimits

0xcd42,	// (0x000546d6) cell_image3_tool_bar_pane

0xbe99,	// (0x0005382d) cell_image3_tool_bar_pane_g1

0xe113,	// (0x00055aa7) bg_popup_trans_pane_cp1

0xcd56,	// (0x000546ea) popup_image3_note_pane_t1

0xcd64,	// (0x000546f8) popup_image3_note_pane_t2

0xcd72,	// (0x00054706) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000572da) popup_image3_note_pane_t

0xcd80,	// (0x00054714) popup_image3_note_pane_t3_copy1

0x86ac,	// (0x00050040) bg_myfav_hc_instruction_pane_ParamLimits

0x86ac,	// (0x00050040) bg_myfav_hc_instruction_pane

0x86c0,	// (0x00050054) cell_myfav_contact_pane_ParamLimits

0x86c0,	// (0x00050054) cell_myfav_contact_pane

0x86de,	// (0x00050072) cell_myfav_contact_pane_cp1_ParamLimits

0x86de,	// (0x00050072) cell_myfav_contact_pane_cp1

0x86f6,	// (0x0005008a) cell_myfav_contact_pane_cp2_ParamLimits

0x86f6,	// (0x0005008a) cell_myfav_contact_pane_cp2

0x870e,	// (0x000500a2) cell_myfav_contact_pane_cp3_ParamLimits

0x870e,	// (0x000500a2) cell_myfav_contact_pane_cp3

0x8725,	// (0x000500b9) cell_myfav_contact_pane_cp4_ParamLimits

0x8725,	// (0x000500b9) cell_myfav_contact_pane_cp4

0x873d,	// (0x000500d1) cell_myfav_contact_pane_cp5_ParamLimits

0x873d,	// (0x000500d1) cell_myfav_contact_pane_cp5

0x8751,	// (0x000500e5) cell_myfav_contact_pane_cp6_ParamLimits

0x8751,	// (0x000500e5) cell_myfav_contact_pane_cp6

0x8767,	// (0x000500fb) cell_myfav_contact_pane_cp7_ParamLimits

0x8767,	// (0x000500fb) cell_myfav_contact_pane_cp7

0xcd8e,	// (0x00054722) listscroll_gen_pane_cp05

0x8781,	// (0x00050115) main_myfav_hc_pane_g1_ParamLimits

0x8781,	// (0x00050115) main_myfav_hc_pane_g1

0x879b,	// (0x0005012f) main_myfav_hc_pane_g2_ParamLimits

0x879b,	// (0x0005012f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000572e1) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000572e1) main_myfav_hc_pane_g

0x87cd,	// (0x00050161) main_myfav_hc_pane_t1_ParamLimits

0x87cd,	// (0x00050161) main_myfav_hc_pane_t1

0xcd97,	// (0x0005472b) main_myfav_hc_pane_t2_ParamLimits

0xcd97,	// (0x0005472b) main_myfav_hc_pane_t2

0xcda9,	// (0x0005473d) main_myfav_hc_pane_t3_ParamLimits

0xcda9,	// (0x0005473d) main_myfav_hc_pane_t3

0x87e4,	// (0x00050178) main_myfav_hc_pane_t4_ParamLimits

0x87e4,	// (0x00050178) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000572e8) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000572e8) main_myfav_hc_pane_t

0xbe99,	// (0x0005382d) bg_myfav_hc_instruction_pane_g1

0xcdbb,	// (0x0005474f) cell_myfav_contact_pane_g1_ParamLimits

0xcdbb,	// (0x0005474f) cell_myfav_contact_pane_g1

0xcdbb,	// (0x0005474f) cell_myfav_contact_pane_g2_ParamLimits

0xcdbb,	// (0x0005474f) cell_myfav_contact_pane_g2

0xcdc7,	// (0x0005475b) cell_myfav_contact_pane_g3_ParamLimits

0xcdc7,	// (0x0005475b) cell_myfav_contact_pane_g3

0xc1d2,	// (0x00053b66) cell_myfav_contact_pane_g4_ParamLimits

0xc1d2,	// (0x00053b66) cell_myfav_contact_pane_g4

0xcdd4,	// (0x00054768) cell_myfav_contact_pane_g5_ParamLimits

0xcdd4,	// (0x00054768) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000572f3) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000572f3) cell_myfav_contact_pane_g

0x87b5,	// (0x00050149) main_myfav_hc_pane_g3_ParamLimits

0x87b5,	// (0x00050149) main_myfav_hc_pane_g3

0x1291,	// (0x00048c25) popup_adpt_find_window

0x880c,	// (0x000501a0) afind_page_pane_ParamLimits

0x880c,	// (0x000501a0) afind_page_pane

0x8821,	// (0x000501b5) aid_size_cell_afind_ParamLimits

0x8821,	// (0x000501b5) aid_size_cell_afind

0x883f,	// (0x000501d3) bg_popup_sub_pane_cp09_ParamLimits

0x883f,	// (0x000501d3) bg_popup_sub_pane_cp09

0x884c,	// (0x000501e0) find_pane_cp01_ParamLimits

0x884c,	// (0x000501e0) find_pane_cp01

0xcde0,	// (0x00054774) grid_afind_control_pane_ParamLimits

0xcde0,	// (0x00054774) grid_afind_control_pane

0x8859,	// (0x000501ed) grid_afind_pane_ParamLimits

0x8859,	// (0x000501ed) grid_afind_pane

0x887b,	// (0x0005020f) cell_afind_pane_ParamLimits

0x887b,	// (0x0005020f) cell_afind_pane

0xbe99,	// (0x0005382d) afind_page_pane_g1

0x88e2,	// (0x00050276) afind_page_pane_g2

0x88eb,	// (0x0005027f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000572fe) afind_page_pane_g

0x88f4,	// (0x00050288) afind_page_pane_t1

0xcdf4,	// (0x00054788) cell_afind_grid_control_pane_ParamLimits

0xcdf4,	// (0x00054788) cell_afind_grid_control_pane

0xca66,	// (0x000543fa) bg_button_pane_cp69_ParamLimits

0xca66,	// (0x000543fa) bg_button_pane_cp69

0x8914,	// (0x000502a8) cell_afind_pane_g1_ParamLimits

0x8914,	// (0x000502a8) cell_afind_pane_g1

0x8921,	// (0x000502b5) cell_afind_pane_t1_ParamLimits

0x8921,	// (0x000502b5) cell_afind_pane_t1

0x254a,	// (0x00049ede) bg_button_pane_cp72

0xce03,	// (0x00054797) cell_afind_grid_control_pane_g1

0x4f67,	// (0x0004c8fb) aid_image_placing_area_ParamLimits

0x4f67,	// (0x0004c8fb) aid_image_placing_area

0xc4fb,	// (0x00053e8f) field_vitu_entry_pane_g1_ParamLimits

0xc4fb,	// (0x00053e8f) field_vitu_entry_pane_g1

0xc507,	// (0x00053e9b) field_vitu_entry_pane_g2_ParamLimits

0xc507,	// (0x00053e9b) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000571af) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000571af) field_vitu_entry_pane_g

0x7b05,	// (0x0004f499) cell_vitu_itu_pane_g1_ParamLimits

0x7b47,	// (0x0004f4db) cell_vitu_itu_pane_t3_ParamLimits

0x7b47,	// (0x0004f4db) cell_vitu_itu_pane_t3

0xca16,	// (0x000543aa) mp4_progress_pane_t1_ParamLimits

0xca2f,	// (0x000543c3) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00057244) mp4_progress_pane_t_ParamLimits

0xca48,	// (0x000543dc) mup_progress_pane_cp04_ParamLimits

0x87f8,	// (0x0005018c) main_myfav_hc_pane_t5_ParamLimits

0x87f8,	// (0x0005018c) main_myfav_hc_pane_t5

0xb254,	// (0x00052be8) aid_zoom_text_primary

0x1291,	// (0x00048c25) popup_adpt_find_window_ParamLimits

0x1353,	// (0x00048ce7) main_cam_set_pane

0x8266,	// (0x0004fbfa) cam4_zoom_pane_ParamLimits

0x8266,	// (0x0004fbfa) cam4_zoom_pane

0x8933,	// (0x000502c7) main_cam_set_pane_g1_ParamLimits

0x8933,	// (0x000502c7) main_cam_set_pane_g1

0x8941,	// (0x000502d5) main_cam_set_pane_g2_ParamLimits

0x8941,	// (0x000502d5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00057305) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00057305) main_cam_set_pane_g

0x8962,	// (0x000502f6) main_cam_set_pane_t1_ParamLimits

0x8962,	// (0x000502f6) main_cam_set_pane_t1

0x897d,	// (0x00050311) main_cset_listscroll_pane_ParamLimits

0x897d,	// (0x00050311) main_cset_listscroll_pane

0x899d,	// (0x00050331) main_cset_slider_pane_ParamLimits

0x899d,	// (0x00050331) main_cset_slider_pane

0xce14,	// (0x000547a8) main_cset_list_pane_ParamLimits

0xce14,	// (0x000547a8) main_cset_list_pane

0xce24,	// (0x000547b8) scroll_pane_cp028

0x89c3,	// (0x00050357) aid_area_touch_slider

0x89df,	// (0x00050373) cset_slider_pane

0x8a09,	// (0x0005039d) main_cset_slider_pane_g1

0x8a1e,	// (0x000503b2) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005730a) main_cset_slider_pane_g

0xce5d,	// (0x000547f1) main_cset_slider_pane_t1

0x8ada,	// (0x0005046e) main_cset_slider_pane_t2

0x8af4,	// (0x00050488) main_cset_slider_pane_t3

0x8b0e,	// (0x000504a2) main_cset_slider_pane_t4

0x8b28,	// (0x000504bc) main_cset_slider_pane_t5

0x8b42,	// (0x000504d6) main_cset_slider_pane_t6

0x8b57,	// (0x000504eb) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005732f) main_cset_slider_pane_t

0x8c5b,	// (0x000505ef) cset_list_set_pane_ParamLimits

0x8c5b,	// (0x000505ef) cset_list_set_pane

0x8c6d,	// (0x00050601) aid_position_infowindow_above

0x8c75,	// (0x00050609) aid_position_infowindow_below

0xcefd,	// (0x00054891) cset_list_set_pane_g1_ParamLimits

0xcefd,	// (0x00054891) cset_list_set_pane_g1

0xcf09,	// (0x0005489d) cset_list_set_pane_g3_ParamLimits

0xcf09,	// (0x0005489d) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005734e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005734e) cset_list_set_pane_g

0xcf18,	// (0x000548ac) cset_list_set_pane_t1_ParamLimits

0xcf18,	// (0x000548ac) cset_list_set_pane_t1

0x1353,	// (0x00048ce7) list_highlight_pane_cp021_ParamLimits

0x1353,	// (0x00048ce7) list_highlight_pane_cp021

0x47e8,	// (0x0004c17c) cset_slider_pane_g1

0x47fa,	// (0x0004c18e) cset_slider_pane_g2

0x47f1,	// (0x0004c185) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00057353) cset_slider_pane_g

0xcf2d,	// (0x000548c1) aid_area_touch_cam4_zoom

0xcf35,	// (0x000548c9) cam4_zoom_cont_pane

0xcf3d,	// (0x000548d1) cam4_zoom_pane_g1

0xcf45,	// (0x000548d9) cam4_zoom_pane_g2

0x8c7d,	// (0x00050611) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005735a) cam4_zoom_pane_g

0xcf4d,	// (0x000548e1) cam4_zoom_cont_pane_g1

0xcf56,	// (0x000548ea) cam4_zoom_cont_pane_g2

0xcf5f,	// (0x000548f3) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00057361) cam4_zoom_cont_pane_g

0x8126,	// (0x0004faba) call4_image_pane_ParamLimits

0x8126,	// (0x0004faba) call4_image_pane

0xcaa4,	// (0x00054438) call4_windows_conf_pane_ParamLimits

0xcae5,	// (0x00054479) popup_call4_audio_in_window_ParamLimits

0xcae5,	// (0x00054479) popup_call4_audio_in_window

0xe113,	// (0x00055aa7) bg_popup_call2_act_pane_cp02

0xcb5b,	// (0x000544ef) call4_list_conf_pane

0xbe99,	// (0x0005382d) call4_image_pane_g1

0xbe99,	// (0x0005382d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00057070) call4_image_pane_g

0xcf68,	// (0x000548fc) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf68,	// (0x000548fc) list_single_graphic_popup_conf4_pane

0xe113,	// (0x00055aa7) list_highlight_pane_cp022

0xcf7b,	// (0x0005490f) list_single_graphic_popup_conf4_pane_g1

0x3d5e,	// (0x0004b6f2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00057368) list_single_graphic_popup_conf4_pane_g

0xcf83,	// (0x00054917) list_single_graphic_popup_conf4_pane_t1

0x2715,	// (0x0004a0a9) popup_vtel_slider_window_ParamLimits

0x2715,	// (0x0004a0a9) popup_vtel_slider_window

0xca54,	// (0x000543e8) dialer2_ne_pane_t2_ParamLimits

0xca54,	// (0x000543e8) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00057249) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00057249) dialer2_ne_pane_t

0xbc7e,	// (0x00053612) bg_popup_sub_pane_cp010_ParamLimits

0xbc7e,	// (0x00053612) bg_popup_sub_pane_cp010

0x8c85,	// (0x00050619) popup_vtel_slider_window_g1_ParamLimits

0x8c85,	// (0x00050619) popup_vtel_slider_window_g1

0x8c98,	// (0x0005062c) popup_vtel_slider_window_g2_ParamLimits

0x8c98,	// (0x0005062c) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005736d) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005736d) popup_vtel_slider_window_g

0x8cee,	// (0x00050682) vtel_slider_pane_ParamLimits

0x8cee,	// (0x00050682) vtel_slider_pane

0x8d10,	// (0x000506a4) vtel_slider_pane_g1_ParamLimits

0x8d10,	// (0x000506a4) vtel_slider_pane_g1

0x8d24,	// (0x000506b8) vtel_slider_pane_g2_ParamLimits

0x8d24,	// (0x000506b8) vtel_slider_pane_g2

0x8d3c,	// (0x000506d0) vtel_slider_pane_g3_ParamLimits

0x8d3c,	// (0x000506d0) vtel_slider_pane_g3

0x8d10,	// (0x000506a4) vtel_slider_pane_g4_ParamLimits

0x8d10,	// (0x000506a4) vtel_slider_pane_g4

0x8d52,	// (0x000506e6) vtel_slider_pane_g5_ParamLimits

0x8d52,	// (0x000506e6) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00057376) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00057376) vtel_slider_pane_g

0x1353,	// (0x00048ce7) main_gallery2_pane

0x8466,	// (0x0004fdfa) aid_size_row_itut2_dropdow_list_ParamLimits

0x8466,	// (0x0004fdfa) aid_size_row_itut2_dropdow_list

0x84f2,	// (0x0004fe86) grid_vitu2_function_top_pane_ParamLimits

0x84f2,	// (0x0004fe86) grid_vitu2_function_top_pane

0x855c,	// (0x0004fef0) popup_vitu2_dropdown_list_window_ParamLimits

0x855c,	// (0x0004fef0) popup_vitu2_dropdown_list_window

0x8585,	// (0x0004ff19) popup_vitu2_match_list_window

0x8d68,	// (0x000506fc) cell_vitu2_function_top_pane_ParamLimits

0x8d68,	// (0x000506fc) cell_vitu2_function_top_pane

0x8d80,	// (0x00050714) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8d80,	// (0x00050714) cell_vitu2_function_top_pane_cp01

0x8d9c,	// (0x00050730) cell_vitu2_function_top_wide_pane_ParamLimits

0x8d9c,	// (0x00050730) cell_vitu2_function_top_wide_pane

0x1353,	// (0x00048ce7) bg_button_pane_cp012

0x8db8,	// (0x0005074c) cell_vitu2_function_top_pane_g1

0xcf99,	// (0x0005492d) bg_button_pane_cp013_ParamLimits

0xcf99,	// (0x0005492d) bg_button_pane_cp013

0x8dcc,	// (0x00050760) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8dcc,	// (0x00050760) cell_vitu2_function_top_wide_pane_g1

0x1353,	// (0x00048ce7) bg_popup_sub_pane_cp20

0x8de4,	// (0x00050778) list_vitu2_match_list_pane

0xcd0a,	// (0x0005469e) bg_popup_sub_pane_cp20_g1

0xcd12,	// (0x000546a6) bg_popup_sub_pane_cp20_g2

0x2bae,	// (0x0004a542) bg_popup_sub_pane_cp20_g3

0xcd1a,	// (0x000546ae) bg_popup_sub_pane_cp20_g4

0x2b8e,	// (0x0004a522) bg_popup_sub_pane_cp20_g5

0xcfb5,	// (0x00054949) bg_popup_sub_pane_cp20_g6

0xcd2a,	// (0x000546be) bg_popup_sub_pane_cp20_g7

0xcd32,	// (0x000546c6) bg_popup_sub_pane_cp20_g8

0xcd3a,	// (0x000546ce) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00057381) bg_popup_sub_pane_cp20_g

0xcfbd,	// (0x00054951) list_vitu2_match_list_item_pane_ParamLimits

0xcfbd,	// (0x00054951) list_vitu2_match_list_item_pane

0xcfcf,	// (0x00054963) list_vitu2_match_list_item_pane_t1

0xe113,	// (0x00055aa7) bg_popup_sub_pane_cp21

0x3c62,	// (0x0004b5f6) grid_vitu2_dropdown_list_pane

0x8e02,	// (0x00050796) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8e02,	// (0x00050796) cell_vitu2_dropdown_list_char_pane

0x8e23,	// (0x000507b7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8e23,	// (0x000507b7) cell_vitu2_dropdown_list_ctrl_pane

0xd477,	// (0x00054e0b) cell_vitu2_dropdown_list_char_pane_g1

0xd480,	// (0x00054e14) cell_vitu2_dropdown_list_char_pane_g2

0xd489,	// (0x00054e1d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005739e) cell_vitu2_dropdown_list_char_pane_g

0x8e4f,	// (0x000507e3) cell_vitu2_dropdown_list_char_pane_t1

0x8e5d,	// (0x000507f1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8e5d,	// (0x000507f1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8e6a,	// (0x000507fe) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8e6a,	// (0x000507fe) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8e77,	// (0x0005080b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8e77,	// (0x0005080b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8e84,	// (0x00050818) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8e84,	// (0x00050818) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc105,	// (0x00053a99) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc105,	// (0x00053a99) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000573a5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000573a5) cell_vitu2_dropdown_list_ctrl_pane_g

0x8ea0,	// (0x00050834) aid_size_cell_gallery2_ParamLimits

0x8ea0,	// (0x00050834) aid_size_cell_gallery2

0x8ebe,	// (0x00050852) grid_gallery2_pane_ParamLimits

0x8ebe,	// (0x00050852) grid_gallery2_pane

0x8ed8,	// (0x0005086c) scroll_pane_cp029_ParamLimits

0x8ed8,	// (0x0005086c) scroll_pane_cp029

0x8ee4,	// (0x00050878) cell_gallery2_pane_ParamLimits

0x8ee4,	// (0x00050878) cell_gallery2_pane

0xd492,	// (0x00054e26) cell_gallery2_pane_g2

0x8f40,	// (0x000508d4) cell_gallery2_pane_g3

0xd49a,	// (0x00054e2e) cell_gallery2_pane_g4

0xd4a2,	// (0x00054e36) cell_gallery2_pane_g5

0x21a7,	// (0x00049b3b) grid_highlight_pane_cp10

0x8585,	// (0x0004ff19) popup_vitu2_match_list_window_ParamLimits

0x859c,	// (0x0004ff30) popup_vitu2_query_window_ParamLimits

0x859c,	// (0x0004ff30) popup_vitu2_query_window

0xe113,	// (0x00055aa7) bg_vitu2_candi_button_pane

0xd477,	// (0x00054e0b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd480,	// (0x00054e14) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd489,	// (0x00054e1d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0695,	// (0x00048029) bg_button_pane_cp015

0x8f48,	// (0x000508dc) bg_button_pane_cp016

0x8f5b,	// (0x000508ef) bg_button_pane_cp017

0xb97e,	// (0x00053312) bg_popup_sub_pane_cp22

0xd4aa,	// (0x00054e3e) popup_vitu2_query_window_g1

0x06c8,	// (0x0004805c) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000573b0) popup_vitu2_query_window_g

0x06e7,	// (0x0004807b) popup_vitu2_query_window_t1_ParamLimits

0x06e7,	// (0x0004807b) popup_vitu2_query_window_t1

0x071c,	// (0x000480b0) popup_vitu2_query_window_t2_ParamLimits

0x071c,	// (0x000480b0) popup_vitu2_query_window_t2

0x072e,	// (0x000480c2) popup_vitu2_query_window_t3_ParamLimits

0x072e,	// (0x000480c2) popup_vitu2_query_window_t3

0x8f7f,	// (0x00050913) popup_vitu2_query_window_t4_ParamLimits

0x8f7f,	// (0x00050913) popup_vitu2_query_window_t4

0x8fa0,	// (0x00050934) popup_vitu2_query_window_t5_ParamLimits

0x8fa0,	// (0x00050934) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000573b7) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000573b7) popup_vitu2_query_window_t

0xce0c,	// (0x000547a0) main_cset_text_pane

0x89c3,	// (0x00050357) aid_area_touch_slider_ParamLimits

0x89df,	// (0x00050373) cset_slider_pane_ParamLimits

0x8a09,	// (0x0005039d) main_cset_slider_pane_g1_ParamLimits

0x8a1e,	// (0x000503b2) main_cset_slider_pane_g2_ParamLimits

0xce2d,	// (0x000547c1) main_cset_slider_pane_g3_ParamLimits

0xce2d,	// (0x000547c1) main_cset_slider_pane_g3

0x8a33,	// (0x000503c7) main_cset_slider_pane_g4_ParamLimits

0x8a33,	// (0x000503c7) main_cset_slider_pane_g4

0x8a42,	// (0x000503d6) main_cset_slider_pane_g5_ParamLimits

0x8a42,	// (0x000503d6) main_cset_slider_pane_g5

0x8a4e,	// (0x000503e2) main_cset_slider_pane_g6_ParamLimits

0x8a4e,	// (0x000503e2) main_cset_slider_pane_g6

0xf976,	// (0x0005730a) main_cset_slider_pane_g_ParamLimits

0xce5d,	// (0x000547f1) main_cset_slider_pane_t1_ParamLimits

0x8ada,	// (0x0005046e) main_cset_slider_pane_t2_ParamLimits

0x8af4,	// (0x00050488) main_cset_slider_pane_t3_ParamLimits

0x8b0e,	// (0x000504a2) main_cset_slider_pane_t4_ParamLimits

0x8b28,	// (0x000504bc) main_cset_slider_pane_t5_ParamLimits

0x8b42,	// (0x000504d6) main_cset_slider_pane_t6_ParamLimits

0x8b57,	// (0x000504eb) main_cset_slider_pane_t7_ParamLimits

0x8b81,	// (0x00050515) main_cset_slider_pane_t8_ParamLimits

0x8b81,	// (0x00050515) main_cset_slider_pane_t8

0x8ba9,	// (0x0005053d) main_cset_slider_pane_t9_ParamLimits

0x8ba9,	// (0x0005053d) main_cset_slider_pane_t9

0x8bd1,	// (0x00050565) main_cset_slider_pane_t10_ParamLimits

0x8bd1,	// (0x00050565) main_cset_slider_pane_t10

0x8bf9,	// (0x0005058d) main_cset_slider_pane_t11_ParamLimits

0x8bf9,	// (0x0005058d) main_cset_slider_pane_t11

0x8c21,	// (0x000505b5) main_cset_slider_pane_t12_ParamLimits

0x8c21,	// (0x000505b5) main_cset_slider_pane_t12

0x8c3e,	// (0x000505d2) main_cset_slider_pane_t13_ParamLimits

0x8c3e,	// (0x000505d2) main_cset_slider_pane_t13

0xf99b,	// (0x0005732f) main_cset_slider_pane_t_ParamLimits

0xe113,	// (0x00055aa7) bg_popup_sub_pane_cp011

0xd4b6,	// (0x00054e4a) main_cset_text_pane_g1

0xd4be,	// (0x00054e52) main_cset_text_pane_t1

0xd4cc,	// (0x00054e60) main_cset_text_pane_t2

0xd4da,	// (0x00054e6e) main_cset_text_pane_t3

0xd4e8,	// (0x00054e7c) main_cset_text_pane_t4

0xd4f6,	// (0x00054e8a) main_cset_text_pane_t5

0xd504,	// (0x00054e98) main_cset_text_pane_t6

0xd512,	// (0x00054ea6) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000573c6) main_cset_text_pane_t

0xe113,	// (0x00055aa7) main_cam4_burst_pane

0xe113,	// (0x00055aa7) main_cam5_pane

0x8902,	// (0x00050296) bg_button_pane_cp019

0x890b,	// (0x0005029f) bg_button_pane_cp020

0xce39,	// (0x000547cd) main_cset_slider_pane_g7_ParamLimits

0xce39,	// (0x000547cd) main_cset_slider_pane_g7

0xce45,	// (0x000547d9) main_cset_slider_pane_g8_ParamLimits

0xce45,	// (0x000547d9) main_cset_slider_pane_g8

0x8a62,	// (0x000503f6) main_cset_slider_pane_g9_ParamLimits

0x8a62,	// (0x000503f6) main_cset_slider_pane_g9

0x8a6e,	// (0x00050402) main_cset_slider_pane_g10_ParamLimits

0x8a6e,	// (0x00050402) main_cset_slider_pane_g10

0x8a7a,	// (0x0005040e) main_cset_slider_pane_g11_ParamLimits

0x8a7a,	// (0x0005040e) main_cset_slider_pane_g11

0x8a86,	// (0x0005041a) main_cset_slider_pane_g12_ParamLimits

0x8a86,	// (0x0005041a) main_cset_slider_pane_g12

0x8a92,	// (0x00050426) main_cset_slider_pane_g13_ParamLimits

0x8a92,	// (0x00050426) main_cset_slider_pane_g13

0x8a9e,	// (0x00050432) main_cset_slider_pane_g14_ParamLimits

0x8a9e,	// (0x00050432) main_cset_slider_pane_g14

0x8aaa,	// (0x0005043e) main_cset_slider_pane_g15_ParamLimits

0x8aaa,	// (0x0005043e) main_cset_slider_pane_g15

0xce8b,	// (0x0005481f) main_cset_slider_pane_t14_ParamLimits

0xce8b,	// (0x0005481f) main_cset_slider_pane_t14

0xcec4,	// (0x00054858) main_cset_slider_pane_t15_ParamLimits

0xcec4,	// (0x00054858) main_cset_slider_pane_t15

0x8fc1,	// (0x00050955) aid_cam4_burst_size_cell_ParamLimits

0x8fc1,	// (0x00050955) aid_cam4_burst_size_cell

0x8fe1,	// (0x00050975) grid_cam4_burst_pane_ParamLimits

0x8fe1,	// (0x00050975) grid_cam4_burst_pane

0x9019,	// (0x000509ad) linegrid_cam4_burst_pane_ParamLimits

0x9019,	// (0x000509ad) linegrid_cam4_burst_pane

0xd520,	// (0x00054eb4) scroll_pane_cp30_ParamLimits

0xd520,	// (0x00054eb4) scroll_pane_cp30

0x903d,	// (0x000509d1) cell_cam4_burst_pane_ParamLimits

0x903d,	// (0x000509d1) cell_cam4_burst_pane

0xd52c,	// (0x00054ec0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd52c,	// (0x00054ec0) linegrid_cam4_burst_pane_g1

0x908a,	// (0x00050a1e) linegrid_cam4_burst_pane_g2_ParamLimits

0x908a,	// (0x00050a1e) linegrid_cam4_burst_pane_g2

0xd539,	// (0x00054ecd) linegrid_cam4_burst_pane_g3_ParamLimits

0xd539,	// (0x00054ecd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000573d5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000573d5) linegrid_cam4_burst_pane_g

0x909b,	// (0x00050a2f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x909b,	// (0x00050a2f) linegrid_cam4_burst_pane_g3_copy1

0xd546,	// (0x00054eda) linegrid_cam4_burst_pane_g4_ParamLimits

0xd546,	// (0x00054eda) linegrid_cam4_burst_pane_g4

0x90b5,	// (0x00050a49) linegrid_cam4_burst_pane_g5_ParamLimits

0x90b5,	// (0x00050a49) linegrid_cam4_burst_pane_g5

0x90c6,	// (0x00050a5a) linegrid_cam4_burst_pane_g6_ParamLimits

0x90c6,	// (0x00050a5a) linegrid_cam4_burst_pane_g6

0xd553,	// (0x00054ee7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd553,	// (0x00054ee7) linegrid_cam4_burst_pane_g7

0x90dd,	// (0x00050a71) cell_cam4_burst_pane_g1

0xd56c,	// (0x00054f00) main_cam5_pane_t1_ParamLimits

0xd56c,	// (0x00054f00) main_cam5_pane_t1

0xd57e,	// (0x00054f12) main_cam5_pane_t2_ParamLimits

0xd57e,	// (0x00054f12) main_cam5_pane_t2

0xd590,	// (0x00054f24) main_cam5_pane_t3_ParamLimits

0xd590,	// (0x00054f24) main_cam5_pane_t3

0xd5a2,	// (0x00054f36) main_cam5_pane_t4_ParamLimits

0xd5a2,	// (0x00054f36) main_cam5_pane_t4

0xd5ba,	// (0x00054f4e) main_cam5_pane_t5_ParamLimits

0xd5ba,	// (0x00054f4e) main_cam5_pane_t5

0xd5ce,	// (0x00054f62) main_cam5_pane_t6_ParamLimits

0xd5ce,	// (0x00054f62) main_cam5_pane_t6

0xd5e2,	// (0x00054f76) main_cam5_pane_t7_ParamLimits

0xd5e2,	// (0x00054f76) main_cam5_pane_t7

0xd5f4,	// (0x00054f88) main_cam5_pane_t8_ParamLimits

0xd5f4,	// (0x00054f88) main_cam5_pane_t8

0xd610,	// (0x00054fa4) main_cam5_pane_t9_ParamLimits

0xd610,	// (0x00054fa4) main_cam5_pane_t9

0xd622,	// (0x00054fb6) main_cam5_pane_t10_ParamLimits

0xd622,	// (0x00054fb6) main_cam5_pane_t10

0xd634,	// (0x00054fc8) main_cam5_pane_t11_ParamLimits

0xd634,	// (0x00054fc8) main_cam5_pane_t11

0xd646,	// (0x00054fda) main_cam5_pane_t12_ParamLimits

0xd646,	// (0x00054fda) main_cam5_pane_t12

0xd65b,	// (0x00054fef) main_cam5_pane_t13_ParamLimits

0xd65b,	// (0x00054fef) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000573e1) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000573e1) main_cam5_pane_t

0x1313,	// (0x00048ca7) popup_scut_keymap_window_ParamLimits

0x1313,	// (0x00048ca7) popup_scut_keymap_window

0x90f0,	// (0x00050a84) aid_size_cell_brow_shortcut

0x21a7,	// (0x00049b3b) bg_popup_window_pane_cp010

0x90fc,	// (0x00050a90) grid_scut_pane

0x9108,	// (0x00050a9c) cell_scut_pane_ParamLimits

0x9108,	// (0x00050a9c) cell_scut_pane

0x911f,	// (0x00050ab3) cell_scut_pane_g1

0xd678,	// (0x0005500c) cell_scut_pane_t1

0xd687,	// (0x0005501b) cell_scut_pane_t2

0x9128,	// (0x00050abc) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000573fc) cell_scut_pane_t

0x6ff8,	// (0x0004e98c) main_mup3_pane_g8_ParamLimits

0x6ff8,	// (0x0004e98c) main_mup3_pane_g8

0x847e,	// (0x0004fe12) area_vitu2_query_pane_ParamLimits

0x847e,	// (0x0004fe12) area_vitu2_query_pane

0x06a7,	// (0x0004803b) input_focus_pane_cp08

0xd696,	// (0x0005502a) area_vitu2_query_pane_g1

0x07ac,	// (0x00048140) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00057403) area_vitu2_query_pane_g

0x9136,	// (0x00050aca) area_vitu2_query_pane_t1_ParamLimits

0x9136,	// (0x00050aca) area_vitu2_query_pane_t1

0x914a,	// (0x00050ade) area_vitu2_query_pane_t2_ParamLimits

0x914a,	// (0x00050ade) area_vitu2_query_pane_t2

0x07bd,	// (0x00048151) area_vitu2_query_pane_t3_ParamLimits

0x07bd,	// (0x00048151) area_vitu2_query_pane_t3

0xcfdd,	// (0x00054971) area_vitu2_query_pane_t4_ParamLimits

0xcfdd,	// (0x00054971) area_vitu2_query_pane_t4

0xd005,	// (0x00054999) area_vitu2_query_pane_t5_ParamLimits

0xd005,	// (0x00054999) area_vitu2_query_pane_t5

0xd02d,	// (0x000549c1) area_vitu2_query_pane_t6_ParamLimits

0xd02d,	// (0x000549c1) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00057408) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00057408) area_vitu2_query_pane_t

0x915e,	// (0x00050af2) bg_button_pane_cp018

0x916c,	// (0x00050b00) bg_button_pane_cp021

0x07e5,	// (0x00048179) bg_button_pane_cp022

0x07f4,	// (0x00048188) input_focus_pane_cp09

0x40b9,	// (0x0004ba4d) aid_size_touch_mv_arrow_left

0x40e2,	// (0x0004ba76) aid_size_touch_mv_arrow_right

0x8ac2,	// (0x00050456) main_cset_slider_pane_g16_ParamLimits

0x8ac2,	// (0x00050456) main_cset_slider_pane_g16

0x8ace,	// (0x00050462) main_cset_slider_pane_g17_ParamLimits

0x8ace,	// (0x00050462) main_cset_slider_pane_g17

0x90dd,	// (0x00050a71) cell_cam4_burst_pane_g1_ParamLimits

0xe113,	// (0x00055aa7) compa_mode_pane

0x8ca8,	// (0x0005063c) popup_vtel_slider_window_g3_ParamLimits

0x8ca8,	// (0x0005063c) popup_vtel_slider_window_g3

0x8cbf,	// (0x00050653) popup_vtel_slider_window_g4_ParamLimits

0x8cbf,	// (0x00050653) popup_vtel_slider_window_g4

0x8cd6,	// (0x0005066a) popup_vtel_slider_window_t1_ParamLimits

0x8cd6,	// (0x0005066a) popup_vtel_slider_window_t1

0xe113,	// (0x00055aa7) main_cl_pane

0xb9a6,	// (0x0005333a) popup_imed_adjust2_window_ParamLimits

0xb97e,	// (0x00053312) bg_tb_trans_pane_cp05_ParamLimits

0xc430,	// (0x00053dc4) popup_imed_adjust2_window_g1_ParamLimits

0xc43f,	// (0x00053dd3) popup_imed_adjust2_window_g2_ParamLimits

0xc43f,	// (0x00053dd3) popup_imed_adjust2_window_g2

0xc44b,	// (0x00053ddf) popup_imed_adjust2_window_g3_ParamLimits

0xc44b,	// (0x00053ddf) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00057173) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00057173) popup_imed_adjust2_window_g

0xc457,	// (0x00053deb) popup_imed_adjust2_window_t1_ParamLimits

0xc46f,	// (0x00053e03) slider_imed_adjust_pane_ParamLimits

0xc483,	// (0x00053e17) slider_imed_adjust_pane_g1_ParamLimits

0xc493,	// (0x00053e27) slider_imed_adjust_pane_g2_ParamLimits

0xc4a3,	// (0x00053e37) slider_imed_adjust_pane_g3_ParamLimits

0xc4b4,	// (0x00053e48) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005717a) slider_imed_adjust_pane_g_ParamLimits

0x8207,	// (0x0004fb9b) aid_touch_area_cam4_ParamLimits

0x8207,	// (0x0004fb9b) aid_touch_area_cam4

0xcb9f,	// (0x00054533) battery_pane_cp01

0x82d6,	// (0x0004fc6a) main_camera4_pane_g6_ParamLimits

0x82d6,	// (0x0004fc6a) main_camera4_pane_g6

0x8300,	// (0x0004fc94) main_camera4_pane_t2_ParamLimits

0x8300,	// (0x0004fc94) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005727d) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005727d) main_camera4_pane_t

0x8335,	// (0x0004fcc9) aid_touch_area_vid4_ParamLimits

0x8335,	// (0x0004fcc9) aid_touch_area_vid4

0x8389,	// (0x0004fd1d) main_video4_pane_g5_ParamLimits

0x8389,	// (0x0004fd1d) main_video4_pane_g5

0x83ae,	// (0x0004fd42) vid4_progress_pane_ParamLimits

0x83ae,	// (0x0004fd42) vid4_progress_pane

0xce51,	// (0x000547e5) main_cset_slider_pane_g18_ParamLimits

0xce51,	// (0x000547e5) main_cset_slider_pane_g18

0xd560,	// (0x00054ef4) cell_cam4_burst_pane_g2_ParamLimits

0xd560,	// (0x00054ef4) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000573dc) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000573dc) cell_cam4_burst_pane_g

0x18ca,	// (0x0004925e) bg_cl_pane_ParamLimits

0x18ca,	// (0x0004925e) bg_cl_pane

0x9178,	// (0x00050b0c) cl_header_pane_ParamLimits

0x9178,	// (0x00050b0c) cl_header_pane

0x918c,	// (0x00050b20) cl_listscroll_pane_ParamLimits

0x918c,	// (0x00050b20) cl_listscroll_pane

0xd6a2,	// (0x00055036) bg_cl_pane_g1

0xd6aa,	// (0x0005503e) bg_cl_pane_g2

0xd6b2,	// (0x00055046) bg_cl_pane_g3

0xd6ba,	// (0x0005504e) bg_cl_pane_g4

0xd6c2,	// (0x00055056) bg_cl_pane_g5

0xd6ca,	// (0x0005505e) bg_cl_pane_g6

0xd6d2,	// (0x00055066) bg_cl_pane_g7

0xd6da,	// (0x0005506e) bg_cl_pane_g8

0xd6e2,	// (0x00055076) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00057417) bg_cl_pane_g

0x919c,	// (0x00050b30) aid_height_cl_leading_ParamLimits

0x919c,	// (0x00050b30) aid_height_cl_leading

0x91a8,	// (0x00050b3c) aid_height_cl_text_ParamLimits

0x91a8,	// (0x00050b3c) aid_height_cl_text

0x1353,	// (0x00048ce7) bg_cl_header_pane_ParamLimits

0x1353,	// (0x00048ce7) bg_cl_header_pane

0x91c7,	// (0x00050b5b) cl_header_pane_g1_ParamLimits

0x91c7,	// (0x00050b5b) cl_header_pane_g1

0x91dd,	// (0x00050b71) cl_header_pane_t1_ParamLimits

0x91dd,	// (0x00050b71) cl_header_pane_t1

0xd6ea,	// (0x0005507e) cl_list_pane

0xce24,	// (0x000547b8) hc_scroll_pane_cp01

0x2b8e,	// (0x0004a522) bg_cl_header_pane_g1

0xcd0a,	// (0x0005469e) bg_cl_header_pane_g2

0x2bae,	// (0x0004a542) bg_cl_header_pane_g3

0xcd1a,	// (0x000546ae) bg_cl_header_pane_g4

0xcd12,	// (0x000546a6) bg_cl_header_pane_g5

0xcfb5,	// (0x00054949) bg_cl_header_pane_g6

0xcd32,	// (0x000546c6) bg_cl_header_pane_g7

0xcd3a,	// (0x000546ce) bg_cl_header_pane_g8

0xcd2a,	// (0x000546be) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005742a) bg_cl_header_pane_g

0x91f6,	// (0x00050b8a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x91f6,	// (0x00050b8a) hc_cl_list_double_graphic_heading_pane

0x9207,	// (0x00050b9b) hc_cl_list_single_graphic_pane_ParamLimits

0x9207,	// (0x00050b9b) hc_cl_list_single_graphic_pane

0x921d,	// (0x00050bb1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x921d,	// (0x00050bb1) hc_cl_list_single_graphic_pane_g1

0x9229,	// (0x00050bbd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9229,	// (0x00050bbd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005743d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005743d) hc_cl_list_single_graphic_pane_g

0x923d,	// (0x00050bd1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x923d,	// (0x00050bd1) hc_cl_list_single_graphic_pane_t1

0x921d,	// (0x00050bb1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x921d,	// (0x00050bb1) hc_cl_list_double_graphic_heading_pane_g1

0x9252,	// (0x00050be6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9252,	// (0x00050be6) hc_cl_list_double_graphic_heading_pane_g2

0x9266,	// (0x00050bfa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9266,	// (0x00050bfa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00057442) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00057442) hc_cl_list_double_graphic_heading_pane_g

0x927a,	// (0x00050c0e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x927a,	// (0x00050c0e) hc_cl_list_double_graphic_heading_pane_t1

0x928f,	// (0x00050c23) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x928f,	// (0x00050c23) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00057449) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00057449) hc_cl_list_double_graphic_heading_pane_t

0xd081,	// (0x00054a15) vid4_progress_pane_g1

0xd091,	// (0x00054a25) vid4_progress_pane_g2

0x92a4,	// (0x00050c38) vid4_progress_pane_g3

0xd0a1,	// (0x00054a35) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005744e) vid4_progress_pane_g

0x92b6,	// (0x00050c4a) vid4_progress_pane_t1

0xd0b9,	// (0x00054a4d) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00057459) vid4_progress_pane_t

0x92ce,	// (0x00050c62) wait_bar_pane_cp07

0xbc8c,	// (0x00053620) blid_firmament_pane_ParamLimits

0xbccf,	// (0x00053663) popup_blid_sat_info2_window_g1

0xbcf3,	// (0x00053687) popup_blid_sat_info2_window_t3

0xbd01,	// (0x00053695) popup_blid_sat_info2_window_t4

0xbd0f,	// (0x000536a3) popup_blid_sat_info2_window_t5

0xbd1d,	// (0x000536b1) popup_blid_sat_info2_window_t6

0xbd2d,	// (0x000536c1) popup_blid_sat_info2_window_t7

0xbd3b,	// (0x000536cf) popup_blid_sat_info2_window_t8

0xbd49,	// (0x000536dd) popup_blid_sat_info2_window_t9

0xbd57,	// (0x000536eb) popup_blid_sat_info2_window_t10

0xbe19,	// (0x000537ad) aid_firma_cardinal_ParamLimits

0xbe2d,	// (0x000537c1) blid_firmament_pane_t1_ParamLimits

0xbe44,	// (0x000537d8) blid_firmament_pane_t2_ParamLimits

0xbe5b,	// (0x000537ef) blid_firmament_pane_t3_ParamLimits

0xbe72,	// (0x00053806) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00057067) blid_firmament_pane_t_ParamLimits

0xbe89,	// (0x0005381d) blid_sat_info_pane_ParamLimits

0x1353,	// (0x00048ce7) main_cam_set_pane_ParamLimits

0x78bf,	// (0x0004f253) aid_size_cell_colour_35_ParamLimits

0x78df,	// (0x0004f273) aid_size_cell_colour_112_ParamLimits

0x78ff,	// (0x0004f293) aid_size_cell_effect_ParamLimits

0xb97e,	// (0x00053312) bg_tb_trans_pane_cp02_ParamLimits

0x39ae,	// (0x0004b342) heading_imed_pane_ParamLimits

0x791f,	// (0x0004f2b3) listscroll_imed_pane_ParamLimits

0x5752,	// (0x0004d0e6) popup_call2_audio_first_window_g5_ParamLimits

0x5752,	// (0x0004d0e6) popup_call2_audio_first_window_g5

0x7eb2,	// (0x0004f846) aid_size_touch_image3_arrow_left_ParamLimits

0x7eb2,	// (0x0004f846) aid_size_touch_image3_arrow_left

0x7ede,	// (0x0004f872) aid_size_touch_image3_arrow_right_ParamLimits

0x7ede,	// (0x0004f872) aid_size_touch_image3_arrow_right

0xd0ce,	// (0x00054a62) vid4_progress_pane_t3

0x7c32,	// (0x0004f5c6) main_hwr_training_symbol_option_pane_ParamLimits

0x7c32,	// (0x0004f5c6) main_hwr_training_symbol_option_pane

0xc71d,	// (0x000540b1) popup_hwr_training_preview_window_ParamLimits

0xc71d,	// (0x000540b1) popup_hwr_training_preview_window

0x7c52,	// (0x0004f5e6) hwr_training_navi_pane_g5_ParamLimits

0x7c52,	// (0x0004f5e6) hwr_training_navi_pane_g5

0xcce6,	// (0x0005467a) popup_char_count_window

0x1353,	// (0x00048ce7) bg_popup_sub_pane_cp20_ParamLimits

0x8de4,	// (0x00050778) list_vitu2_match_list_pane_ParamLimits

0x8df3,	// (0x00050787) vitu2_page_scroll_pane_ParamLimits

0x8df3,	// (0x00050787) vitu2_page_scroll_pane

0xd6fc,	// (0x00055090) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6fc,	// (0x00055090) list_single_hwr_training_symbol_option_pane

0xd70f,	// (0x000550a3) list_single_hwr_training_symbol_option_pane_g1

0xd717,	// (0x000550ab) list_single_hwr_training_symbol_option_pane_t1

0xd725,	// (0x000550b9) bg_button_pane_cp023

0xd72e,	// (0x000550c2) bg_button_pane_cp024

0x9305,	// (0x00050c99) vitu2_page_scroll_pane_g1

0x930d,	// (0x00050ca1) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00057460) vitu2_page_scroll_pane_g

0x9315,	// (0x00050ca9) vitu2_page_scroll_pane_t1

0xbba8,	// (0x0005353c) popup_char_count_window_g1

0xd761,	// (0x000550f5) popup_char_count_window_g2

0xd76a,	// (0x000550fe) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00057465) popup_char_count_window_g

0xd773,	// (0x00055107) popup_char_count_window_t1

0xe113,	// (0x00055aa7) main_vded2_pane

0xc41c,	// (0x00053db0) aid_size_cell_imed_line

0xc426,	// (0x00053dba) grid_imed_line_width_pane

0xcc57,	// (0x000545eb) vid4_indicators_pane_g4

0xd781,	// (0x00055115) cell_imed_line_width_pane_ParamLimits

0xd781,	// (0x00055115) cell_imed_line_width_pane

0xd795,	// (0x00055129) cell_imed_line_width_pane_g1

0xd79e,	// (0x00055132) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005746c) cell_imed_line_width_pane_g

0x9324,	// (0x00050cb8) main_vded2_pane_g1_ParamLimits

0x9324,	// (0x00050cb8) main_vded2_pane_g1

0x933a,	// (0x00050cce) main_vded2_pane_g2_ParamLimits

0x933a,	// (0x00050cce) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00057471) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00057471) main_vded2_pane_g

0x934c,	// (0x00050ce0) vded2_slider_pane_ParamLimits

0x934c,	// (0x00050ce0) vded2_slider_pane

0x935c,	// (0x00050cf0) aid_size_touch_vded2_end

0x9366,	// (0x00050cfa) aid_size_touch_vded2_playhead

0xd7a6,	// (0x0005513a) aid_size_touch_vded2_start

0xd7ae,	// (0x00055142) vded2_slider_bg_pane

0xd7b7,	// (0x0005514b) vded2_slider_pane_g1

0xd7c0,	// (0x00055154) vded2_slider_pane_g2

0x9370,	// (0x00050d04) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00057476) vded2_slider_pane_g

0xd7c8,	// (0x0005515c) vded2_slider_bg_pane_g1

0xd7d1,	// (0x00055165) vded2_slider_bg_pane_g2

0xd7da,	// (0x0005516e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005747d) vded2_slider_bg_pane_g

0x491d,	// (0x0004c2b1) aid_postcard_touch_down_pane_ParamLimits

0x491d,	// (0x0004c2b1) aid_postcard_touch_down_pane

0x4933,	// (0x0004c2c7) aid_postcard_touch_up_pane_ParamLimits

0x4933,	// (0x0004c2c7) aid_postcard_touch_up_pane

0xe113,	// (0x00055aa7) main_blid2_pane

0xb98c,	// (0x00053320) popup_blid2_search_window

0xe113,	// (0x00055aa7) blid2_gps_pane

0xe113,	// (0x00055aa7) blid2_navig_pane

0xe113,	// (0x00055aa7) blid2_search_pane

0xe113,	// (0x00055aa7) blid2_tripm_pane

0x937b,	// (0x00050d0f) blid2_search_pane_g1_ParamLimits

0x937b,	// (0x00050d0f) blid2_search_pane_g1

0x9395,	// (0x00050d29) blid2_search_pane_t1_ParamLimits

0x9395,	// (0x00050d29) blid2_search_pane_t1

0x93a7,	// (0x00050d3b) aid_size_cell_blid2_gps_ParamLimits

0x93a7,	// (0x00050d3b) aid_size_cell_blid2_gps

0x93bf,	// (0x00050d53) blid2_gps_pane_g1_ParamLimits

0x93bf,	// (0x00050d53) blid2_gps_pane_g1

0x93d3,	// (0x00050d67) grid_blid2_satellite_pane_ParamLimits

0x93d3,	// (0x00050d67) grid_blid2_satellite_pane

0x93ed,	// (0x00050d81) blid2_navig_pane_g1_ParamLimits

0x93ed,	// (0x00050d81) blid2_navig_pane_g1

0x93f9,	// (0x00050d8d) blid2_navig_pane_t1_ParamLimits

0x93f9,	// (0x00050d8d) blid2_navig_pane_t1

0x9414,	// (0x00050da8) blid2_navig_pane_t2_ParamLimits

0x9414,	// (0x00050da8) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00057484) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00057484) blid2_navig_pane_t

0x942f,	// (0x00050dc3) blid2_navig_ring_pane_ParamLimits

0x942f,	// (0x00050dc3) blid2_navig_ring_pane

0x9448,	// (0x00050ddc) blid2_speed_pane_ParamLimits

0x9448,	// (0x00050ddc) blid2_speed_pane

0x9454,	// (0x00050de8) blid2_tripm_pane_g1_ParamLimits

0x9454,	// (0x00050de8) blid2_tripm_pane_g1

0x946d,	// (0x00050e01) blid2_tripm_pane_g2_ParamLimits

0x946d,	// (0x00050e01) blid2_tripm_pane_g2

0x9481,	// (0x00050e15) blid2_tripm_pane_g3_ParamLimits

0x9481,	// (0x00050e15) blid2_tripm_pane_g3

0x9495,	// (0x00050e29) blid2_tripm_pane_g4_ParamLimits

0x9495,	// (0x00050e29) blid2_tripm_pane_g4

0x94a9,	// (0x00050e3d) blid2_tripm_pane_g5_ParamLimits

0x94a9,	// (0x00050e3d) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00057489) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00057489) blid2_tripm_pane_g

0x94cf,	// (0x00050e63) blid2_tripm_pane_t1_ParamLimits

0x94cf,	// (0x00050e63) blid2_tripm_pane_t1

0x94ea,	// (0x00050e7e) blid2_tripm_pane_t2_ParamLimits

0x94ea,	// (0x00050e7e) blid2_tripm_pane_t2

0x9503,	// (0x00050e97) blid2_tripm_pane_t3_ParamLimits

0x9503,	// (0x00050e97) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00057496) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00057496) blid2_tripm_pane_t

0x954a,	// (0x00050ede) cell_blid2_satellite_pane_ParamLimits

0x954a,	// (0x00050ede) cell_blid2_satellite_pane

0x9568,	// (0x00050efc) cell_blid2_satellite_pane_g1

0xd7e3,	// (0x00055177) cell_blid2_satellite_pane_t1

0xbe99,	// (0x0005382d) blid2_speed_pane_g1

0xd7f1,	// (0x00055185) blid2_speed_pane_t1

0xd7ff,	// (0x00055193) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005749f) blid2_speed_pane_t

0xbe99,	// (0x0005382d) blid2_navig_ring_pane_g1

0x9571,	// (0x00050f05) blid2_navig_ring_pane_g2

0x9579,	// (0x00050f0d) blid2_navig_ring_pane_g3

0x9581,	// (0x00050f15) blid2_navig_ring_pane_g4

0x9589,	// (0x00050f1d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000574a4) blid2_navig_ring_pane_g

0xe113,	// (0x00055aa7) bg_popup_window_pane_cp011

0xd80d,	// (0x000551a1) popup_blid2_search_window_g1

0xd815,	// (0x000551a9) popup_blid2_search_window_t1

0xd823,	// (0x000551b7) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000574af) popup_blid2_search_window_t

0x2a5a,	// (0x0004a3ee) main_browser_pane_g1

0x18ca,	// (0x0004925e) main_browser_pane_ParamLimits

0x1353,	// (0x00048ce7) bg_button_pane_cp011_ParamLimits

0x8698,	// (0x0005002c) cell_vitu2_function_pane_g1_ParamLimits

0xb97e,	// (0x00053312) bg_popup_sub_pane_cp22_ParamLimits

0x06a7,	// (0x0004803b) input_focus_pane_cp08_ParamLimits

0x8f6e,	// (0x00050902) popup_vitu2_query_button_pane_ParamLimits

0x8f6e,	// (0x00050902) popup_vitu2_query_button_pane

0x06be,	// (0x00048052) popup_vitu2_query_input_button_pane

0xd4aa,	// (0x00054e3e) popup_vitu2_query_window_g1_ParamLimits

0x06c8,	// (0x0004805c) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000573b0) popup_vitu2_query_window_g_ParamLimits

0xe113,	// (0x00055aa7) bg_button_pane_cp026

0x9591,	// (0x00050f25) popup_vitu2_query_input_button_pane_g1

0xe113,	// (0x00055aa7) bg_button_pane_cp025

0xd831,	// (0x000551c5) popup_vitu2_query_button_pane_t1

0x6d0d,	// (0x0004e6a1) main_mp3_pane_t6

0x6d1b,	// (0x0004e6af) popup_slider_window_cp01

0xcbbb,	// (0x0005454f) cam4_battery_pane

0xcc14,	// (0x000545a8) cam4_battery_pane_cp02

0xd079,	// (0x00054a0d) cam4_battery_pane_cp01

0xd079,	// (0x00054a0d) cam4_battery_pane_cp03

0xbe99,	// (0x0005382d) cam4_battery_pane_g1

0xd83f,	// (0x000551d3) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000574b4) cam4_battery_pane_g

0xbd65,	// (0x000536f9) popup_blid_sat_info2_window_t11

0x40b9,	// (0x0004ba4d) aid_size_touch_mv_arrow_left_ParamLimits

0x40e2,	// (0x0004ba76) aid_size_touch_mv_arrow_right_ParamLimits

0x4140,	// (0x0004bad4) navi_pane_g1_ParamLimits

0x414c,	// (0x0004bae0) navi_pane_g2_ParamLimits

0x417a,	// (0x0004bb0e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00056d79) navi_pane_g_ParamLimits

0x4238,	// (0x0004bbcc) navi_pane_mv_t1_ParamLimits

0x792b,	// (0x0004f2bf) grid_imed_effect_pane_ParamLimits

0x2600,	// (0x00049f94) aid_placing_vt_slider_lsc

0x2610,	// (0x00049fa4) aid_placing_vt_slider_prt

0x1353,	// (0x00048ce7) bg_tb_trans_pane_cp01_ParamLimits

0xc025,	// (0x000539b9) popup_image_details_window_g1_ParamLimits

0xc038,	// (0x000539cc) popup_image_details_window_g2_ParamLimits

0xc04d,	// (0x000539e1) popup_image_details_window_g3_ParamLimits

0xc04d,	// (0x000539e1) popup_image_details_window_g3

0xf718,	// (0x000570ac) popup_image_details_window_g_ParamLimits

0xc061,	// (0x000539f5) popup_image_details_window_t1_ParamLimits

0xc073,	// (0x00053a07) popup_image_details_window_t2_ParamLimits

0xc08c,	// (0x00053a20) popup_image_details_window_t3_ParamLimits

0xc0a0,	// (0x00053a34) popup_image_details_window_t4_ParamLimits

0xc0bb,	// (0x00053a4f) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000570b3) popup_image_details_window_t_ParamLimits

0x91b4,	// (0x00050b48) cl_header_name_pane_ParamLimits

0x91b4,	// (0x00050b48) cl_header_name_pane

0x9599,	// (0x00050f2d) cl_header_name_pane_t1_ParamLimits

0x9599,	// (0x00050f2d) cl_header_name_pane_t1

0x95ba,	// (0x00050f4e) cl_header_name_pane_t2_ParamLimits

0x95ba,	// (0x00050f4e) cl_header_name_pane_t2

0x95fc,	// (0x00050f90) cl_header_name_pane_t3_ParamLimits

0x95fc,	// (0x00050f90) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000574b9) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000574b9) cl_header_name_pane_t

0x4209,	// (0x0004bb9d) navi_pane_mv_g2_ParamLimits

0xcca3,	// (0x00054637) field_vitu2_entry_pane_g1_ParamLimits

0xccaf,	// (0x00054643) field_vitu2_entry_pane_g2_ParamLimits

0xccbb,	// (0x0005464f) field_vitu2_entry_pane_g3_ParamLimits

0xccbb,	// (0x0005464f) field_vitu2_entry_pane_g3

0xf91b,	// (0x000572af) field_vitu2_entry_pane_g_ParamLimits

0xccee,	// (0x00054682) cell_vitu2_itu_pane_g1_ParamLimits

0x862c,	// (0x0004ffc0) cell_vitu2_itu_pane_g2_ParamLimits

0x862c,	// (0x0004ffc0) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000572bb) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000572bb) cell_vitu2_itu_pane_g

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp05_ParamLimits

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp05

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp03

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp04

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp10_ParamLimits

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp10

0x07e5,	// (0x00048179) bg_vkb2_func_pane_cp08

0x915e,	// (0x00050af2) bg_vkb2_func_pane_cp06

0x916c,	// (0x00050b00) bg_vkb2_func_pane_cp07

0xd737,	// (0x000550cb) bg_vkb2_func_pane_cp11_ParamLimits

0xd737,	// (0x000550cb) bg_vkb2_func_pane_cp11

0xd74c,	// (0x000550e0) bg_vkb2_func_pane_cp12_ParamLimits

0xd74c,	// (0x000550e0) bg_vkb2_func_pane_cp12

0xe113,	// (0x00055aa7) bg_vkb2_func_pane_cp09

0xcd0a,	// (0x0005469e) bg_vkb2_func_pane_g1

0x2bae,	// (0x0004a542) bg_vkb2_func_pane_g2

0xcd12,	// (0x000546a6) bg_vkb2_func_pane_g3

0xcd1a,	// (0x000546ae) bg_vkb2_func_pane_g4

0xcfb5,	// (0x00054949) bg_vkb2_func_pane_g5

0xcd32,	// (0x000546c6) bg_vkb2_func_pane_g6

0xcd3a,	// (0x000546ce) bg_vkb2_func_pane_g7

0xcd2a,	// (0x000546be) bg_vkb2_func_pane_g8

0x2b8e,	// (0x0004a522) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000574c0) bg_vkb2_func_pane_g

0x94bd,	// (0x00050e51) blid2_tripm_pane_g6_ParamLimits

0x94bd,	// (0x00050e51) blid2_tripm_pane_g6

0xca0e,	// (0x000543a2) mp4_progress_pane_g1

0x9536,	// (0x00050eca) blid2_tripm_values_pane_ParamLimits

0x9536,	// (0x00050eca) blid2_tripm_values_pane

0x962d,	// (0x00050fc1) blid2_tripm_values_pane_t1

0x963b,	// (0x00050fcf) blid2_tripm_values_pane_t2

0x9649,	// (0x00050fdd) blid2_tripm_values_pane_t3

0x9657,	// (0x00050feb) blid2_tripm_values_pane_t4

0x9665,	// (0x00050ff9) blid2_tripm_values_pane_t5

0x9673,	// (0x00051007) blid2_tripm_values_pane_t6

0x9681,	// (0x00051015) blid2_tripm_values_pane_t7

0x968f,	// (0x00051023) blid2_tripm_values_pane_t8

0x969d,	// (0x00051031) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000574d3) blid2_tripm_values_pane_t

0x264c,	// (0x00049fe0) call_video_pane_t1_ParamLimits

0x266a,	// (0x00049ffe) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00056c02) call_video_pane_t_ParamLimits

0x049e,	// (0x00047e32) msg_header_pane_g1_ParamLimits

0x4887,	// (0x0004c21b) msg_header_pane_g2_ParamLimits

0x4887,	// (0x0004c21b) msg_header_pane_g2

0x0001,

0xf488,	// (0x00056e1c) msg_header_pane_g_ParamLimits

0xf488,	// (0x00056e1c) msg_header_pane_g

0x18ca,	// (0x0004925e) main_clock2_pane_ParamLimits

0x7629,	// (0x0004efbd) grid_clock2_toolbar_pane_ParamLimits

0x7629,	// (0x0004efbd) grid_clock2_toolbar_pane

0x7629,	// (0x0004efbd) listscroll_clock2_pane_ParamLimits

0x7629,	// (0x0004efbd) listscroll_clock2_pane

0x7720,	// (0x0004f0b4) main_clock2_pane_t3_ParamLimits

0x7720,	// (0x0004f0b4) main_clock2_pane_t3

0x7744,	// (0x0004f0d8) main_clock2_pane_t4_ParamLimits

0x7744,	// (0x0004f0d8) main_clock2_pane_t4

0xd849,	// (0x000551dd) cell_clock2_toolbar_pane

0xd851,	// (0x000551e5) cell_clock2_toolbar_pane_cp01

0xd851,	// (0x000551e5) cell_clock2_toolbar_pane_cp02

0xd859,	// (0x000551ed) cell_clock2_toolbar_pane_cp03

0xd861,	// (0x000551f5) list_clock2_pane

0x3e63,	// (0x0004b7f7) scroll_pane_cp10

0xd869,	// (0x000551fd) list_single_clock2_pane_ParamLimits

0xd869,	// (0x000551fd) list_single_clock2_pane

0x21a7,	// (0x00049b3b) list_highlight_pane_cp08

0xd876,	// (0x0005520a) list_single_clock2_pane_t1

0xd884,	// (0x00055218) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000574e6) list_single_clock2_pane_t

0xe113,	// (0x00055aa7) bg_button_pane_cp10

0xd892,	// (0x00055226) cell_clock2_toolbar_pane_g1

0x489b,	// (0x0004c22f) aid_main_viewer_pane_g1_ParamLimits

0x489b,	// (0x0004c22f) aid_main_viewer_pane_g1

0x48a9,	// (0x0004c23d) aid_main_viewer_pane_g2_ParamLimits

0x48a9,	// (0x0004c23d) aid_main_viewer_pane_g2

0x48b7,	// (0x0004c24b) aid_main_viewer_pane_g3_ParamLimits

0x48b7,	// (0x0004c24b) aid_main_viewer_pane_g3

0x48c6,	// (0x0004c25a) aid_main_viewer_pane_g4_ParamLimits

0x48c6,	// (0x0004c25a) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00056e2d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00056e2d) aid_main_viewer_pane_g

0x5f34,	// (0x0004d8c8) main_calc_pane_ParamLimits

0x5f48,	// (0x0004d8dc) main_dialer2_pane_ParamLimits

0xe113,	// (0x00055aa7) main_cam6_pane

0xe113,	// (0x00055aa7) main_vid6_pane

0x7635,	// (0x0004efc9) listscroll_gen_pane_cp06_ParamLimits

0x7635,	// (0x0004efc9) listscroll_gen_pane_cp06

0x7767,	// (0x0004f0fb) main_clock2_pane_t5_ParamLimits

0x7767,	// (0x0004f0fb) main_clock2_pane_t5

0x77c1,	// (0x0004f155) aid_call2_pane_cp10_ParamLimits

0x77d3,	// (0x0004f167) aid_call_pane_cp10_ParamLimits

0x4048,	// (0x0004b9dc) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4048,	// (0x0004b9dc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x77e5,	// (0x0004f179) popup_clock_analogue_window_cp10_g3_ParamLimits

0x77e5,	// (0x0004f179) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4048,	// (0x0004b9dc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00057168) popup_clock_analogue_window_cp10_g_ParamLimits

0x77f7,	// (0x0004f18b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7e5f,	// (0x0004f7f3) cell_dialer2_keypad_pane_g2_ParamLimits

0x7e5f,	// (0x0004f7f3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005724e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005724e) cell_dialer2_keypad_pane_g

0x7e7b,	// (0x0004f80f) cell_dialer2_keypad_pane_t1

0x89b5,	// (0x00050349) main_cset_text2_pane_ParamLimits

0x89b5,	// (0x00050349) main_cset_text2_pane

0xd696,	// (0x0005502a) area_vitu2_query_pane_g1_ParamLimits

0x07ac,	// (0x00048140) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00057403) area_vitu2_query_pane_g_ParamLimits

0xd055,	// (0x000549e9) area_vitu2_query_pane_t7_ParamLimits

0xd055,	// (0x000549e9) area_vitu2_query_pane_t7

0x915e,	// (0x00050af2) bg_button_pane_cp018_ParamLimits

0x916c,	// (0x00050b00) bg_button_pane_cp021_ParamLimits

0x07e5,	// (0x00048179) bg_button_pane_cp022_ParamLimits

0x07e5,	// (0x00048179) bg_vkb2_func_pane_cp08_ParamLimits

0x915e,	// (0x00050af2) bg_vkb2_func_pane_cp06_ParamLimits

0x916c,	// (0x00050b00) bg_vkb2_func_pane_cp07_ParamLimits

0x07f4,	// (0x00048188) input_focus_pane_cp09_ParamLimits

0xd0fc,	// (0x00054a90) cam6_autofocus_pane_ParamLimits

0xd0fc,	// (0x00054a90) cam6_autofocus_pane

0x96ab,	// (0x0005103f) cam6_image_uncrop_pane_ParamLimits

0x96ab,	// (0x0005103f) cam6_image_uncrop_pane

0x96ba,	// (0x0005104e) cam6_indi_pane_ParamLimits

0x96ba,	// (0x0005104e) cam6_indi_pane

0x96d0,	// (0x00051064) cam6_mode_pane_ParamLimits

0x96d0,	// (0x00051064) cam6_mode_pane

0x96e2,	// (0x00051076) cam6_timer_pane_ParamLimits

0x96e2,	// (0x00051076) cam6_timer_pane

0x96ee,	// (0x00051082) cam6_zoom_pane_ParamLimits

0x96ee,	// (0x00051082) cam6_zoom_pane

0x96fa,	// (0x0005108e) cam6_mode_pane_g1_ParamLimits

0x96fa,	// (0x0005108e) cam6_mode_pane_g1

0x970a,	// (0x0005109e) cam6_mode_pane_g2_ParamLimits

0x970a,	// (0x0005109e) cam6_mode_pane_g2

0x971a,	// (0x000510ae) cam6_mode_pane_g3_ParamLimits

0x971a,	// (0x000510ae) cam6_mode_pane_g3

0x972a,	// (0x000510be) cam6_mode_pane_g4_ParamLimits

0x972a,	// (0x000510be) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000574eb) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000574eb) cam6_mode_pane_g

0xd10a,	// (0x00054a9e) bg_tb_trans_pane_cp08_ParamLimits

0xd10a,	// (0x00054a9e) bg_tb_trans_pane_cp08

0xd89a,	// (0x0005522e) cam6_battery_pane_ParamLimits

0xd89a,	// (0x0005522e) cam6_battery_pane

0xd8b0,	// (0x00055244) cam6_indi_pane_g1_ParamLimits

0xd8b0,	// (0x00055244) cam6_indi_pane_g1

0xd8c2,	// (0x00055256) cam6_indi_pane_g2_ParamLimits

0xd8c2,	// (0x00055256) cam6_indi_pane_g2

0xd8d4,	// (0x00055268) cam6_indi_pane_g3_ParamLimits

0xd8d4,	// (0x00055268) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000574f4) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000574f4) cam6_indi_pane_g

0xd8e6,	// (0x0005527a) cam6_indi_pane_t1_ParamLimits

0xd8e6,	// (0x0005527a) cam6_indi_pane_t1

0x973a,	// (0x000510ce) cam6_autofocus_pane_g1

0x9742,	// (0x000510d6) cam6_autofocus_pane_g2

0x974a,	// (0x000510de) cam6_autofocus_pane_g3

0x9752,	// (0x000510e6) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000574fb) cam6_autofocus_pane_g

0xd90c,	// (0x000552a0) cam6_timer_pane_g1

0xd914,	// (0x000552a8) cam6_timer_pane_t1

0xd922,	// (0x000552b6) cam6_zoom_cont_pane

0xd92a,	// (0x000552be) cam6_zoom_pane_g1

0xd932,	// (0x000552c6) cam6_zoom_pane_g2

0x975a,	// (0x000510ee) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00057504) cam6_zoom_pane_g

0xbe99,	// (0x0005382d) cam6_battery_pane_g1

0xbe99,	// (0x0005382d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00057070) cam6_battery_pane_g

0xd93a,	// (0x000552ce) cam6_zoom_cont_pane_g1

0xd943,	// (0x000552d7) cam6_zoom_cont_pane_g2

0xd94c,	// (0x000552e0) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005750b) cam6_zoom_cont_pane_g

0x9777,	// (0x0005110b) cam6_mode_pane_cp_ParamLimits

0x9777,	// (0x0005110b) cam6_mode_pane_cp

0x96ee,	// (0x00051082) cam6_zoom_pane_cp_ParamLimits

0x96ee,	// (0x00051082) cam6_zoom_pane_cp

0x9789,	// (0x0005111d) vid6_image_uncrop_cif_pane_ParamLimits

0x9789,	// (0x0005111d) vid6_image_uncrop_cif_pane

0x9799,	// (0x0005112d) vid6_image_uncrop_nhd_pane_ParamLimits

0x9799,	// (0x0005112d) vid6_image_uncrop_nhd_pane

0x96ab,	// (0x0005103f) vid6_image_uncrop_vga_pane_ParamLimits

0x96ab,	// (0x0005103f) vid6_image_uncrop_vga_pane

0x97a8,	// (0x0005113c) vid6_image_uncrop_wvga_pane_ParamLimits

0x97a8,	// (0x0005113c) vid6_image_uncrop_wvga_pane

0x97b7,	// (0x0005114b) vid6_indi_pane_ParamLimits

0x97b7,	// (0x0005114b) vid6_indi_pane

0xd10a,	// (0x00054a9e) bg_tb_trans_pane_cp09_ParamLimits

0xd10a,	// (0x00054a9e) bg_tb_trans_pane_cp09

0xd964,	// (0x000552f8) cam6_battery_pane_cp_ParamLimits

0xd964,	// (0x000552f8) cam6_battery_pane_cp

0xd970,	// (0x00055304) vid6_indi_pane_g1_ParamLimits

0xd970,	// (0x00055304) vid6_indi_pane_g1

0xd982,	// (0x00055316) vid6_indi_pane_g2_ParamLimits

0xd982,	// (0x00055316) vid6_indi_pane_g2

0xd994,	// (0x00055328) vid6_indi_pane_g3_ParamLimits

0xd994,	// (0x00055328) vid6_indi_pane_g3

0xd9a9,	// (0x0005533d) vid6_indi_pane_g4_ParamLimits

0xd9a9,	// (0x0005533d) vid6_indi_pane_g4

0xd9be,	// (0x00055352) vid6_indi_pane_g5_ParamLimits

0xd9be,	// (0x00055352) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00057512) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00057512) vid6_indi_pane_g

0xd9d8,	// (0x0005536c) vid6_indi_pane_t1_ParamLimits

0xd9d8,	// (0x0005536c) vid6_indi_pane_t1

0xd9ee,	// (0x00055382) vid6_indi_pane_t2_ParamLimits

0xd9ee,	// (0x00055382) vid6_indi_pane_t2

0xda16,	// (0x000553aa) vid6_indi_pane_t3_ParamLimits

0xda16,	// (0x000553aa) vid6_indi_pane_t3

0xda3e,	// (0x000553d2) vid6_indi_pane_t4_ParamLimits

0xda3e,	// (0x000553d2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005751d) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005751d) vid6_indi_pane_t

0xda62,	// (0x000553f6) wait_bar_pane_cp08

0x97cf,	// (0x00051163) main_cset_text2_pane_t1_ParamLimits

0x97cf,	// (0x00051163) main_cset_text2_pane_t1

0x9762,	// (0x000510f6) listscroll_gen_pane_cp06_t1_ParamLimits

0x9762,	// (0x000510f6) listscroll_gen_pane_cp06_t1

0xe113,	// (0x00055aa7) main_cam6_set_pane

0xc105,	// (0x00053a99) bg_tb_trans_pane_cp06_ParamLimits

0xcbc3,	// (0x00054557) cam4_indicators_pane_g1_ParamLimits

0xcbd4,	// (0x00054568) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005728b) cam4_indicators_pane_g_ParamLimits

0xcbf2,	// (0x00054586) cam4_indicators_pane_t1_ParamLimits

0x1353,	// (0x00048ce7) bg_tb_trans_pane_cp07_ParamLimits

0xcc1e,	// (0x000545b2) vid4_indicators_pane_g1_ParamLimits

0xcc32,	// (0x000545c6) vid4_indicators_pane_g2_ParamLimits

0xcc46,	// (0x000545da) vid4_indicators_pane_g3_ParamLimits

0xcc57,	// (0x000545eb) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005729d) vid4_indicators_pane_g_ParamLimits

0xcc75,	// (0x00054609) vid4_indicators_pane_t1_ParamLimits

0xd081,	// (0x00054a15) vid4_progress_pane_g1_ParamLimits

0xd091,	// (0x00054a25) vid4_progress_pane_g2_ParamLimits

0x92a4,	// (0x00050c38) vid4_progress_pane_g3_ParamLimits

0xd0a1,	// (0x00054a35) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005744e) vid4_progress_pane_g_ParamLimits

0x92b6,	// (0x00050c4a) vid4_progress_pane_t1_ParamLimits

0xd0b9,	// (0x00054a4d) vid4_progress_pane_t2_ParamLimits

0xd0ce,	// (0x00054a62) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00057459) vid4_progress_pane_t_ParamLimits

0x92ce,	// (0x00050c62) wait_bar_pane_cp07_ParamLimits

0x97ec,	// (0x00051180) main_cam6_set_pane_g2_ParamLimits

0x97ec,	// (0x00051180) main_cam6_set_pane_g2

0x9810,	// (0x000511a4) main_cset6_listscroll_pane_ParamLimits

0x9810,	// (0x000511a4) main_cset6_listscroll_pane

0x9830,	// (0x000511c4) main_cset6_slider_pane_ParamLimits

0x9830,	// (0x000511c4) main_cset6_slider_pane

0x9846,	// (0x000511da) main_cset6_text2_pane_ParamLimits

0x9846,	// (0x000511da) main_cset6_text2_pane

0xda71,	// (0x00055405) main_cset6_text_pane

0xda79,	// (0x0005540d) main_cset_list_pane_copy1_ParamLimits

0xda79,	// (0x0005540d) main_cset_list_pane_copy1

0xda89,	// (0x0005541d) scroll_pane_cp028_copy1

0x9854,	// (0x000511e8) cset_list_set_pane_copy1

0x9865,	// (0x000511f9) aid_position_infowindow_above_copy1

0x986d,	// (0x00051201) aid_position_infowindow_below_copy1

0x0817,	// (0x000481ab) cset_list_set_pane_g1_copy1

0x081f,	// (0x000481b3) cset_list_set_pane_g3_copy1_ParamLimits

0x081f,	// (0x000481b3) cset_list_set_pane_g3_copy1

0x082e,	// (0x000481c2) cset_list_set_pane_t1_copy1_ParamLimits

0x082e,	// (0x000481c2) cset_list_set_pane_t1_copy1

0x1353,	// (0x00048ce7) list_highlight_pane_cp021_copy1_ParamLimits

0x1353,	// (0x00048ce7) list_highlight_pane_cp021_copy1

0xda92,	// (0x00055426) cset6_slider_pane_ParamLimits

0xda92,	// (0x00055426) cset6_slider_pane

0xdabe,	// (0x00055452) main_cset6_slider_pane_g1_ParamLimits

0xdabe,	// (0x00055452) main_cset6_slider_pane_g1

0x9875,	// (0x00051209) main_cset6_slider_pane_g2_ParamLimits

0x9875,	// (0x00051209) main_cset6_slider_pane_g2

0xdae6,	// (0x0005547a) main_cset6_slider_pane_g3_ParamLimits

0xdae6,	// (0x0005547a) main_cset6_slider_pane_g3

0x989d,	// (0x00051231) main_cset6_slider_pane_g4_ParamLimits

0x989d,	// (0x00051231) main_cset6_slider_pane_g4

0x98a9,	// (0x0005123d) main_cset6_slider_pane_g5_ParamLimits

0x98a9,	// (0x0005123d) main_cset6_slider_pane_g5

0xce39,	// (0x000547cd) main_cset6_slider_pane_g7_ParamLimits

0xce39,	// (0x000547cd) main_cset6_slider_pane_g7

0xce45,	// (0x000547d9) main_cset6_slider_pane_g8_ParamLimits

0xce45,	// (0x000547d9) main_cset6_slider_pane_g8

0x8a62,	// (0x000503f6) main_cset6_slider_pane_g9_ParamLimits

0x8a62,	// (0x000503f6) main_cset6_slider_pane_g9

0x8a6e,	// (0x00050402) main_cset6_slider_pane_g10_ParamLimits

0x8a6e,	// (0x00050402) main_cset6_slider_pane_g10

0x8a7a,	// (0x0005040e) main_cset6_slider_pane_g11_ParamLimits

0x8a7a,	// (0x0005040e) main_cset6_slider_pane_g11

0x8a86,	// (0x0005041a) main_cset6_slider_pane_g12_ParamLimits

0x8a86,	// (0x0005041a) main_cset6_slider_pane_g12

0x8a92,	// (0x00050426) main_cset6_slider_pane_g13_ParamLimits

0x8a92,	// (0x00050426) main_cset6_slider_pane_g13

0x8a9e,	// (0x00050432) main_cset6_slider_pane_g14_ParamLimits

0x8a9e,	// (0x00050432) main_cset6_slider_pane_g14

0x98b5,	// (0x00051249) main_cset6_slider_pane_g15_ParamLimits

0x98b5,	// (0x00051249) main_cset6_slider_pane_g15

0x8ac2,	// (0x00050456) main_cset6_slider_pane_g16_ParamLimits

0x8ac2,	// (0x00050456) main_cset6_slider_pane_g16

0x8ace,	// (0x00050462) main_cset6_slider_pane_g17_ParamLimits

0x8ace,	// (0x00050462) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00057526) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00057526) main_cset6_slider_pane_g

0xdaf2,	// (0x00055486) main_cset6_slider_pane_t1_ParamLimits

0xdaf2,	// (0x00055486) main_cset6_slider_pane_t1

0x98e5,	// (0x00051279) main_cset6_slider_pane_t2_ParamLimits

0x98e5,	// (0x00051279) main_cset6_slider_pane_t2

0x9910,	// (0x000512a4) main_cset6_slider_pane_t3_ParamLimits

0x9910,	// (0x000512a4) main_cset6_slider_pane_t3

0x993b,	// (0x000512cf) main_cset6_slider_pane_t4_ParamLimits

0x993b,	// (0x000512cf) main_cset6_slider_pane_t4

0x9966,	// (0x000512fa) main_cset6_slider_pane_t5_ParamLimits

0x9966,	// (0x000512fa) main_cset6_slider_pane_t5

0xdb33,	// (0x000554c7) main_cset6_slider_pane_t7_ParamLimits

0xdb33,	// (0x000554c7) main_cset6_slider_pane_t7

0x9991,	// (0x00051325) main_cset6_slider_pane_t8_ParamLimits

0x9991,	// (0x00051325) main_cset6_slider_pane_t8

0x99b5,	// (0x00051349) main_cset6_slider_pane_t9_ParamLimits

0x99b5,	// (0x00051349) main_cset6_slider_pane_t9

0x99d9,	// (0x0005136d) main_cset6_slider_pane_t10_ParamLimits

0x99d9,	// (0x0005136d) main_cset6_slider_pane_t10

0x99fd,	// (0x00051391) main_cset6_slider_pane_t11_ParamLimits

0x99fd,	// (0x00051391) main_cset6_slider_pane_t11

0xdb69,	// (0x000554fd) main_cset6_slider_pane_t14_ParamLimits

0xdb69,	// (0x000554fd) main_cset6_slider_pane_t14

0xdba2,	// (0x00055536) main_cset6_slider_pane_t15_ParamLimits

0xdba2,	// (0x00055536) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005754b) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005754b) main_cset6_slider_pane_t

0xcf4d,	// (0x000548e1) cset_slider_pane_g1_copy1

0xcf56,	// (0x000548ea) cset_slider_pane_g2_copy1

0xcf5f,	// (0x000548f3) cset_slider_pane_g3_copy1

0xe113,	// (0x00055aa7) bg_popup_sub_pane_cp011_copy1

0xdbdb,	// (0x0005556f) main_cset_text_pane_g1_copy1

0xd4be,	// (0x00054e52) main_cset_text_pane_t1_copy1

0xd4cc,	// (0x00054e60) main_cset_text_pane_t2_copy1

0xd4da,	// (0x00054e6e) main_cset_text_pane_t3_copy1

0xd4e8,	// (0x00054e7c) main_cset_text_pane_t4_copy1

0xd4f6,	// (0x00054e8a) main_cset_text_pane_t5_copy1

0xdbe3,	// (0x00055577) main_cset_text_pane_t6_copy1

0xdbf1,	// (0x00055585) main_cset_text_pane_t7_copy1

0x97cf,	// (0x00051163) main_cset_text2_pane_t1_copy1

0x1353,	// (0x00048ce7) main_ncimui_pane

0x6192,	// (0x0004db26) popup_query_ncimui_window_ParamLimits

0x6192,	// (0x0004db26) popup_query_ncimui_window

0xc1a6,	// (0x00053b3a) field_cale_ev2_pane_g4_ParamLimits

0xc1a6,	// (0x00053b3a) field_cale_ev2_pane_g4

0x7d3f,	// (0x0004f6d3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7d3f,	// (0x0004f6d3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00057229) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00057229) cell_video_dialer_keypad_pane_g

0x7d57,	// (0x0004f6eb) cell_video_dialer_keypad_pane_t1

0xe113,	// (0x00055aa7) bg_popup_window_pane_cp012

0x3cb9,	// (0x0004b64d) heading_pane_cp06

0xdc1d,	// (0x000555b1) ncim_query_content_pane

0xe113,	// (0x00055aa7) bg_popup_heading_pane_cp01

0xdc25,	// (0x000555b9) ncim_heading_pane_t1

0xdc33,	// (0x000555c7) ncim_indicator_popup_pane

0xdc45,	// (0x000555d9) ncim_query_button_pane

0xdc59,	// (0x000555ed) ncim_query_content_pane_t1

0xdc6b,	// (0x000555ff) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005758f) ncim_query_content_pane_t

0xdca5,	// (0x00055639) ncim_query_list_pane

0xdcb7,	// (0x0005564b) ncim_query_popup_pane

0xdc33,	// (0x000555c7) ncim_indicator_popup_pane_ParamLimits

0x9b4a,	// (0x000514de) ncim_query_content_pane_g1_ParamLimits

0x9b4a,	// (0x000514de) ncim_query_content_pane_g1

0xdc59,	// (0x000555ed) ncim_query_content_pane_t1_ParamLimits

0xdc6b,	// (0x000555ff) ncim_query_content_pane_t2_ParamLimits

0x9b56,	// (0x000514ea) ncim_query_content_pane_t3_ParamLimits

0x9b56,	// (0x000514ea) ncim_query_content_pane_t3

0x9b7e,	// (0x00051512) ncim_query_content_pane_t4_ParamLimits

0x9b7e,	// (0x00051512) ncim_query_content_pane_t4

0x9ba6,	// (0x0005153a) ncim_query_content_pane_t5_ParamLimits

0x9ba6,	// (0x0005153a) ncim_query_content_pane_t5

0xdc7d,	// (0x00055611) ncim_query_content_pane_t6_ParamLimits

0xdc7d,	// (0x00055611) ncim_query_content_pane_t6

0xfbfb,	// (0x0005758f) ncim_query_content_pane_t_ParamLimits

0xdca5,	// (0x00055639) ncim_query_list_pane_ParamLimits

0xdcb7,	// (0x0005564b) ncim_query_popup_pane_ParamLimits

0xdccb,	// (0x0005565f) wait_bar_pane_cp04

0xe113,	// (0x00055aa7) input_focus_pane_cp011

0xdcd3,	// (0x00055667) ncim_query_popup_pane_t1

0xdce1,	// (0x00055675) ncim_list_query_list_pane_ParamLimits

0xdce1,	// (0x00055675) ncim_list_query_list_pane

0xe113,	// (0x00055aa7) bg_button_pane_cp027

0xdcee,	// (0x00055682) ncim_query_button_pane_g1

0xe113,	// (0x00055aa7) list_highlight_pane_cp012

0xdcf8,	// (0x0005568c) ncim_list_query_list_pane_g1

0xdd00,	// (0x00055694) ncim_list_query_list_pane_t1

0xcbe3,	// (0x00054577) cam4_indicators_pane_g3_ParamLimits

0xcbe3,	// (0x00054577) cam4_indicators_pane_g3

0xcc63,	// (0x000545f7) vid4_indicators_pane_g5_ParamLimits

0xcc63,	// (0x000545f7) vid4_indicators_pane_g5

0xd0ad,	// (0x00054a41) vid4_progress_pane_g5_ParamLimits

0xd0ad,	// (0x00054a41) vid4_progress_pane_g5

0x9a35,	// (0x000513c9) main_ncimui_pane_g1

0x9a9e,	// (0x00051432) ncimui_group_query_pane_ParamLimits

0x9a9e,	// (0x00051432) ncimui_group_query_pane

0x9ae6,	// (0x0005147a) ncimui_list_pane_ParamLimits

0x9ae6,	// (0x0005147a) ncimui_list_pane

0x9b0d,	// (0x000514a1) ncimui_text_pane_ParamLimits

0x9b0d,	// (0x000514a1) ncimui_text_pane

0x9bce,	// (0x00051562) ncimui_text_pane_t1_ParamLimits

0x9bce,	// (0x00051562) ncimui_text_pane_t1

0xdd0e,	// (0x000556a2) ncimui_list_single_graphic_pane_ParamLimits

0xdd0e,	// (0x000556a2) ncimui_list_single_graphic_pane

0x9bec,	// (0x00051580) ncimui_query_pane_ParamLimits

0x9bec,	// (0x00051580) ncimui_query_pane

0xe113,	// (0x00055aa7) list_highlight_pane_cp013

0xdd1e,	// (0x000556b2) ncim_list_query_list_pane_t1_copy1

0xdcf8,	// (0x0005568c) ncim_list_single_graphic_pane_g1

0x9bff,	// (0x00051593) ncim_query_button_pane_cp01

0x9c0b,	// (0x0005159f) ncim_query_entry_pane_ParamLimits

0x9c0b,	// (0x0005159f) ncim_query_entry_pane

0x9c1e,	// (0x000515b2) ncimui_query_pane_g1

0x9c2a,	// (0x000515be) ncimui_query_pane_t1_ParamLimits

0x9c2a,	// (0x000515be) ncimui_query_pane_t1

0x1353,	// (0x00048ce7) input_focus_pane_cp012

0xdd2c,	// (0x000556c0) ncim_query_entry_pane_t1

0x18ca,	// (0x0004925e) main_im_pane_ParamLimits

0x1353,	// (0x00048ce7) main_mobtv_pane_ParamLimits

0x1353,	// (0x00048ce7) main_mobtv_pane

0x98cd,	// (0x00051261) main_cset6_slider_pane_g18_ParamLimits

0x98cd,	// (0x00051261) main_cset6_slider_pane_g18

0x98d9,	// (0x0005126d) main_cset6_slider_pane_g19_ParamLimits

0x98d9,	// (0x0005126d) main_cset6_slider_pane_g19

0xdd3e,	// (0x000556d2) bg_main_mobtv_pane_ParamLimits

0xdd3e,	// (0x000556d2) bg_main_mobtv_pane

0x9c43,	// (0x000515d7) main_mobtv_info_pane

0x9c4c,	// (0x000515e0) main_mobtv_loading_pane_ParamLimits

0x9c4c,	// (0x000515e0) main_mobtv_loading_pane

0xdd4c,	// (0x000556e0) main_mobtv_pg_channel_list_pane

0xdd56,	// (0x000556ea) main_mobtv_pg_hdr_pane

0x9c59,	// (0x000515ed) main_mobtv_programe_curr_pane_ParamLimits

0x9c59,	// (0x000515ed) main_mobtv_programe_curr_pane

0x9c66,	// (0x000515fa) main_mobtv_programe_next_pane_ParamLimits

0x9c66,	// (0x000515fa) main_mobtv_programe_next_pane

0xdd5f,	// (0x000556f3) popup_mobtv_noti_window

0xbe99,	// (0x0005382d) main_tv_pg_hdr_pane_g1

0xdd67,	// (0x000556fb) main_tv_pg_hdr_pane_g2

0xdd6f,	// (0x00055703) main_tv_pg_hdr_pane_g3

0xdd77,	// (0x0005570b) main_tv_pg_hdr_pane_g4

0xdd7f,	// (0x00055713) main_tv_pg_hdr_pane_g5

0xdd89,	// (0x0005571d) main_tv_pg_hdr_pane_g6

0xdd93,	// (0x00055727) main_tv_pg_hdr_pane_g7

0xdd9d,	// (0x00055731) main_tv_pg_hdr_pane_g8

0xdda7,	// (0x0005573b) main_tv_pg_hdr_pane_g9

0xddb1,	// (0x00055745) main_tv_pg_hdr_pane_g10

0xddbb,	// (0x0005574f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005759c) main_tv_pg_hdr_pane_g

0xddc5,	// (0x00055759) main_tv_pg_hdr_pane_t1

0xddd3,	// (0x00055767) main_tv_pg_hdr_pane_t2

0xdde1,	// (0x00055775) main_tv_pg_hdr_pane_t3

0xddf1,	// (0x00055785) main_tv_pg_hdr_pane_t4

0xde01,	// (0x00055795) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000575b3) main_tv_pg_hdr_pane_t

0xde11,	// (0x000557a5) single_mobtv_pg_channel_pane_ParamLimits

0xde11,	// (0x000557a5) single_mobtv_pg_channel_pane

0xde23,	// (0x000557b7) single_mobtv_pg_channel_table_pane

0xde2c,	// (0x000557c0) single_mobtv_pg_channel_thumb_pane

0xde35,	// (0x000557c9) single_tv_pg_channel_pane_g1

0xde3e,	// (0x000557d2) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000575be) single_tv_pg_channel_pane_g

0xc105,	// (0x00053a99) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc105,	// (0x00053a99) bg_single_mobtv_pg_channel_thumb_pane

0xde47,	// (0x000557db) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde47,	// (0x000557db) single_mobtv_pg_channel_thumb_pane_g1

0xde55,	// (0x000557e9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde55,	// (0x000557e9) single_mobtv_pg_channel_thumb_pane_g2

0xde61,	// (0x000557f5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde61,	// (0x000557f5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000575c3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000575c3) single_mobtv_pg_channel_thumb_pane_g

0xde6d,	// (0x00055801) single_mobtv_pg_channel_thumb_pane_t1

0xde7b,	// (0x0005580f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000575ca) single_mobtv_pg_channel_thumb_pane_t

0xbe99,	// (0x0005382d) bg_single_mobtv_pg_channel_table_pane_g1

0xbe99,	// (0x0005382d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00057070) bg_single_mobtv_pg_channel_table_pane_g

0xde89,	// (0x0005581d) single_mobtv_pg_channel_table_pane_t1

0xde97,	// (0x0005582b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000575cf) single_mobtv_pg_channel_table_pane_t

0x9c7b,	// (0x0005160f) main_mobtv_info_pane_g1_ParamLimits

0x9c7b,	// (0x0005160f) main_mobtv_info_pane_g1

0x9c99,	// (0x0005162d) main_mobtv_info_pane_t1_ParamLimits

0x9c99,	// (0x0005162d) main_mobtv_info_pane_t1

0x9d11,	// (0x000516a5) main_mobtv_info_pane_t2_ParamLimits

0x9d11,	// (0x000516a5) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000575d9) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000575d9) main_mobtv_info_pane_t

0x9da0,	// (0x00051734) wait_bar_pane_cp05

0x9db2,	// (0x00051746) main_mobtv_loading_pane_g1_ParamLimits

0x9db2,	// (0x00051746) main_mobtv_loading_pane_g1

0x9dc5,	// (0x00051759) main_mobtv_loading_pane_g2_ParamLimits

0x9dc5,	// (0x00051759) main_mobtv_loading_pane_g2

0x9dd1,	// (0x00051765) main_mobtv_loading_pane_g3_ParamLimits

0x9dd1,	// (0x00051765) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000575e0) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000575e0) main_mobtv_loading_pane_g

0xdea5,	// (0x00055839) main_mobtv_loading_pane_t1_ParamLimits

0xdea5,	// (0x00055839) main_mobtv_loading_pane_t1

0xdebd,	// (0x00055851) main_mobtv_loading_pane_t2_ParamLimits

0xdebd,	// (0x00055851) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000575e7) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000575e7) main_mobtv_loading_pane_t

0x9de4,	// (0x00051778) wait_bar_pane_cp06_ParamLimits

0x9de4,	// (0x00051778) wait_bar_pane_cp06

0xdee1,	// (0x00055875) main_mobtv_programe_curr_pane_t1

0xdeef,	// (0x00055883) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000575ec) main_mobtv_programe_curr_pane_t

0xdefd,	// (0x00055891) main_mobtv_programe_next_pane_t1

0xdf0b,	// (0x0005589f) main_mobtv_programe_next_pane_t2

0xdf19,	// (0x000558ad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000575f1) main_mobtv_programe_next_pane_t

0xe113,	// (0x00055aa7) bg_popup_mobtv_noti_window_pane

0xdf27,	// (0x000558bb) popup_mobtv_noti_window_g1

0xdf2f,	// (0x000558c3) popup_mobtv_noti_window_t1

0xdf3d,	// (0x000558d1) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000575f8) popup_mobtv_noti_window_t

0xbe99,	// (0x0005382d) bg_popup_mobtv_noti_window_pane_g1

0xe113,	// (0x00055aa7) sc_clock_pane

0xe113,	// (0x00055aa7) main_fs_bigclock_pane

0x9520,	// (0x00050eb4) blid2_tripm_pane_t4_ParamLimits

0x9520,	// (0x00050eb4) blid2_tripm_pane_t4

0x9df3,	// (0x00051787) sc_clock_pane_g1_ParamLimits

0x9df3,	// (0x00051787) sc_clock_pane_g1

0x9e05,	// (0x00051799) sc_clock_pane_t1_ParamLimits

0x9e05,	// (0x00051799) sc_clock_pane_t1

0x9e27,	// (0x000517bb) sc_clock_pane_t2_ParamLimits

0x9e27,	// (0x000517bb) sc_clock_pane_t2

0x9e3f,	// (0x000517d3) sc_clock_pane_t3_ParamLimits

0x9e3f,	// (0x000517d3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000575fd) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000575fd) sc_clock_pane_t

0xa833,	// (0x000521c7) main_fs_bigclock_indicator_pane_ParamLimits

0xa833,	// (0x000521c7) main_fs_bigclock_indicator_pane

0x9ee5,	// (0x00051879) main_fs_bigclock_pane_g1_ParamLimits

0x9ee5,	// (0x00051879) main_fs_bigclock_pane_g1

0xa83f,	// (0x000521d3) main_fs_bigclock_pane_t1_ParamLimits

0xa83f,	// (0x000521d3) main_fs_bigclock_pane_t1

0xa851,	// (0x000521e5) main_fs_bigclock_pane_t2_ParamLimits

0xa851,	// (0x000521e5) main_fs_bigclock_pane_t2

0xa865,	// (0x000521f9) main_fs_bigclock_pane_t3_ParamLimits

0xa865,	// (0x000521f9) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00057807) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00057807) main_fs_bigclock_pane_t

0xea27,	// (0x000563bb) main_fs_bigclock_indicator_pane_g1

0xdc4d,	// (0x000555e1) ncim_query_content_pane_g2_ParamLimits

0xdc4d,	// (0x000555e1) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005758a) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005758a) ncim_query_content_pane_g

0x9e58,	// (0x000517ec) sc_clock_pane_t4_ParamLimits

0x9e58,	// (0x000517ec) sc_clock_pane_t4

0x1353,	// (0x00048ce7) main_radioblah_pane

0xcb29,	// (0x000544bd) cell_call4_button_pane_t1_copy1_ParamLimits

0xcb29,	// (0x000544bd) cell_call4_button_pane_t1_copy1

0x9a4d,	// (0x000513e1) main_ncimui_pane_t1_ParamLimits

0x9a4d,	// (0x000513e1) main_ncimui_pane_t1

0x9a67,	// (0x000513fb) main_ncimui_pane_t2_ParamLimits

0x9a67,	// (0x000513fb) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00057583) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00057583) main_ncimui_pane_t

0xe082,	// (0x00055a16) main_radioblah_anim_pane_ParamLimits

0xe082,	// (0x00055a16) main_radioblah_anim_pane

0xe093,	// (0x00055a27) main_radioblah_info_pane_ParamLimits

0xe093,	// (0x00055a27) main_radioblah_info_pane

0xe0a7,	// (0x00055a3b) main_radioblah_pane_t1_ParamLimits

0xe0a7,	// (0x00055a3b) main_radioblah_pane_t1

0xe0c3,	// (0x00055a57) main_radioblah_pane_t2_ParamLimits

0xe0c3,	// (0x00055a57) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005761e) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005761e) main_radioblah_pane_t

0x9f44,	// (0x000518d8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f44,	// (0x000518d8) main_radioblah_rocker_ctrl_pane

0xe3db,	// (0x00055d6f) main_radioblah_info_pane_t1_ParamLimits

0xe3db,	// (0x00055d6f) main_radioblah_info_pane_t1

0x9f9c,	// (0x00051930) main_radioblah_info_pane_t2_ParamLimits

0x9f9c,	// (0x00051930) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00057627) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00057627) main_radioblah_info_pane_t

0xbe99,	// (0x0005382d) main_radioblah_rocker_ctrl_pane_g1

0xa04c,	// (0x000519e0) main_radioblah_rocker_ctrl_pane_g2

0xa054,	// (0x000519e8) main_radioblah_rocker_ctrl_pane_g3

0xa05c,	// (0x000519f0) main_radioblah_rocker_ctrl_pane_g4

0xa064,	// (0x000519f8) main_radioblah_rocker_ctrl_pane_g5

0xa06c,	// (0x00051a00) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00057630) main_radioblah_rocker_ctrl_pane_g

0x97cf,	// (0x00051163) main_cset_text2_pane_t1_copy1_ParamLimits

0xcbb3,	// (0x00054547) cam4_image_uncrop_qvga_pane

0xcc0c,	// (0x000545a0) vid4_image_uncrop_qcif_pane

0xd0fc,	// (0x00054a90) cam6_image_uncrop_qvga_pane_ParamLimits

0xd0fc,	// (0x00054a90) cam6_image_uncrop_qvga_pane

0xd954,	// (0x000552e8) vid6_image_uncrop_qcif_pane_ParamLimits

0xd954,	// (0x000552e8) vid6_image_uncrop_qcif_pane

0xe113,	// (0x00055aa7) bg_popup_preview_window_pane_cp03

0xdbff,	// (0x00055593) list_cset_text2_pane

0xdc07,	// (0x0005559b) main_cset6_text2_pane_g1

0xdc0f,	// (0x000555a3) main_cset6_text2_pane_t1

0xa074,	// (0x00051a08) list_cset_text2_pane_t1_ParamLimits

0xa074,	// (0x00051a08) list_cset_text2_pane_t1

0x1353,	// (0x00048ce7) main_radioblah_pane_ParamLimits

0x9d8c,	// (0x00051720) main_mobtv_info_pane_t3_ParamLimits

0x9d8c,	// (0x00051720) main_mobtv_info_pane_t3

0x9f32,	// (0x000518c6) main_radioblah_pane_g1

0x9f6c,	// (0x00051900) main_radioblah_info_pane_g1

0x9ff1,	// (0x00051985) main_radioblah_info_pane_t3_ParamLimits

0x9ff1,	// (0x00051985) main_radioblah_info_pane_t3

0x375e,	// (0x0004b0f2) highlight_cell_cale_month_pane_ParamLimits

0x375e,	// (0x0004b0f2) highlight_cell_cale_month_pane

0xe113,	// (0x00055aa7) main_phob_fisheye_pane

0xc249,	// (0x00053bdd) scroll_pane_cp0031_ParamLimits

0xc249,	// (0x00053bdd) scroll_pane_cp0031

0xda62,	// (0x000553f6) wait_bar_pane_cp08_ParamLimits

0x9854,	// (0x000511e8) cset_list_set_pane_copy1_ParamLimits

0xe415,	// (0x00055da9) highlight_cell_cale_month_pane_g1

0xa08d,	// (0x00051a21) highlight_cell_cale_month_pane_t1

0xd6ea,	// (0x0005507e) list_gen_pane_cp01

0xce24,	// (0x000547b8) scroll_pane_01

0xa09b,	// (0x00051a2f) list_single_double_fisheye_pane

0x0914,	// (0x000482a8) list_double_fisheye_pane_g1_ParamLimits

0x0914,	// (0x000482a8) list_double_fisheye_pane_g1

0x0920,	// (0x000482b4) list_double_fisheye_pane_g2_ParamLimits

0x0920,	// (0x000482b4) list_double_fisheye_pane_g2

0xa0a4,	// (0x00051a38) list_double_fisheye_pane_g3_ParamLimits

0xa0a4,	// (0x00051a38) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005763d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005763d) list_double_fisheye_pane_g

0x0951,	// (0x000482e5) list_double_fisheye_pane_t1_ParamLimits

0x0951,	// (0x000482e5) list_double_fisheye_pane_t1

0x096c,	// (0x00048300) list_double_fisheye_pane_t2_ParamLimits

0x096c,	// (0x00048300) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00057648) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00057648) list_double_fisheye_pane_t

0xe113,	// (0x00055aa7) main_call5_pane

0x9e83,	// (0x00051817) sc_swipe_pane_ParamLimits

0x9e83,	// (0x00051817) sc_swipe_pane

0xa0c3,	// (0x00051a57) call5_image_pane_ParamLimits

0xa0c3,	// (0x00051a57) call5_image_pane

0xa0e0,	// (0x00051a74) call5_swipe_1_pane_ParamLimits

0xa0e0,	// (0x00051a74) call5_swipe_1_pane

0xa0f3,	// (0x00051a87) call5_swipe_2_pane_ParamLimits

0xa0f3,	// (0x00051a87) call5_swipe_2_pane

0xa11e,	// (0x00051ab2) popup_call5_audio_first_window_ParamLimits

0xa11e,	// (0x00051ab2) popup_call5_audio_first_window

0xc105,	// (0x00053a99) call5_swipe_1_pane_g1_ParamLimits

0xc105,	// (0x00053a99) call5_swipe_1_pane_g1

0xe41d,	// (0x00055db1) call5_swipe_1_pane_g2_ParamLimits

0xe41d,	// (0x00055db1) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005764d) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005764d) call5_swipe_1_pane_g

0xe429,	// (0x00055dbd) call5_swipe_1_pane_t1_ParamLimits

0xe429,	// (0x00055dbd) call5_swipe_1_pane_t1

0xc105,	// (0x00053a99) call5_swipe_2_pane_g1_ParamLimits

0xc105,	// (0x00053a99) call5_swipe_2_pane_g1

0xe43e,	// (0x00055dd2) call5_swipe_2_pane_g2_ParamLimits

0xe43e,	// (0x00055dd2) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00057652) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00057652) call5_swipe_2_pane_g

0xe44a,	// (0x00055dde) call5_swipe_2_pane_t1_ParamLimits

0xe44a,	// (0x00055dde) call5_swipe_2_pane_t1

0xe45f,	// (0x00055df3) sc_swipe_pane_g1_ParamLimits

0xe45f,	// (0x00055df3) sc_swipe_pane_g1

0xe46c,	// (0x00055e00) sc_swipe_pane_g2_ParamLimits

0xe46c,	// (0x00055e00) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00057657) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00057657) sc_swipe_pane_g

0xe478,	// (0x00055e0c) sc_swipe_pane_t1_ParamLimits

0xe478,	// (0x00055e0c) sc_swipe_pane_t1

0xe113,	// (0x00055aa7) main_cmail_launcher_pane

0xa12f,	// (0x00051ac3) aid_size_cell_cmail_l_ParamLimits

0xa12f,	// (0x00051ac3) aid_size_cell_cmail_l

0xa149,	// (0x00051add) grid_cmail_l_pane_ParamLimits

0xa149,	// (0x00051add) grid_cmail_l_pane

0xa164,	// (0x00051af8) cell_cmail_l_pane_ParamLimits

0xa164,	// (0x00051af8) cell_cmail_l_pane

0xa18a,	// (0x00051b1e) cell_cmail_l_pane_g1_ParamLimits

0xa18a,	// (0x00051b1e) cell_cmail_l_pane_g1

0xa196,	// (0x00051b2a) cell_cmail_l_pane_t1_ParamLimits

0xa196,	// (0x00051b2a) cell_cmail_l_pane_t1

0xe48d,	// (0x00055e21) cell_cmail_l_pane_t2_ParamLimits

0xe48d,	// (0x00055e21) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005765c) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005765c) cell_cmail_l_pane_t

0x1353,	// (0x00048ce7) grid_highlight_pane_cp018_ParamLimits

0x1353,	// (0x00048ce7) grid_highlight_pane_cp018

0x11f8,	// (0x00048b8c) main2_pane_ParamLimits

0x11f8,	// (0x00048b8c) main2_pane

0x1af2,	// (0x00049486) popup_sp_fs_action_menu_bg_pane_g1

0x1afa,	// (0x0004948e) popup_sp_fs_action_menu_bg_pane_g2

0x1b02,	// (0x00049496) popup_sp_fs_action_menu_bg_pane_g3

0x1b0a,	// (0x0004949e) popup_sp_fs_action_menu_bg_pane_g4

0x1b12,	// (0x000494a6) popup_sp_fs_action_menu_bg_pane_g5

0x1b1a,	// (0x000494ae) popup_sp_fs_action_menu_bg_pane_g6

0x1b22,	// (0x000494b6) popup_sp_fs_action_menu_bg_pane_g7

0x1b2a,	// (0x000494be) popup_sp_fs_action_menu_bg_pane_g8

0x1b32,	// (0x000494c6) popup_sp_fs_action_menu_bg_pane_g9

0x1b3a,	// (0x000494ce) popup_sp_fs_action_menu_bg_pane_g10

0x1b3a,	// (0x000494ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00056b1e) popup_sp_fs_action_menu_bg_pane_g

0x023e,	// (0x00047bd2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t3_g3_g1

0x024a,	// (0x00047bde) list_medium_line_x2_t3_g3_g2_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x2_t3_g3_g2

0x0256,	// (0x00047bea) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00056bcc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00056bcc) list_medium_line_x2_t3_g3_g

0x0262,	// (0x00047bf6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0262,	// (0x00047bf6) list_medium_line_x2_t3_g3_t1

0x0277,	// (0x00047c0b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0277,	// (0x00047c0b) list_medium_line_x2_t3_g3_t2

0x028b,	// (0x00047c1f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00056bd3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00056bd3) list_medium_line_x2_t3_g3_t

0x023e,	// (0x00047bd2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t3_g2_g1

0x0256,	// (0x00047bea) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00056bda) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00056bda) list_medium_line_x2_t3_g2_g

0x02a0,	// (0x00047c34) list_medium_line_x2_t3_g2_t1_ParamLimits

0x02a0,	// (0x00047c34) list_medium_line_x2_t3_g2_t1

0x02b6,	// (0x00047c4a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x02b6,	// (0x00047c4a) list_medium_line_x2_t3_g2_t2

0x02c8,	// (0x00047c5c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x02c8,	// (0x00047c5c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00056bdf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00056bdf) list_medium_line_x2_t3_g2_t

0x023e,	// (0x00047bd2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t4_g4_g1

0x02e5,	// (0x00047c79) list_medium_line_x2_t4_g4_g2_ParamLimits

0x02e5,	// (0x00047c79) list_medium_line_x2_t4_g4_g2

0x024a,	// (0x00047bde) list_medium_line_x2_t4_g4_g3_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x2_t4_g4_g3

0x02f1,	// (0x00047c85) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02f1,	// (0x00047c85) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00056be6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00056be6) list_medium_line_x2_t4_g4_g

0x02fd,	// (0x00047c91) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02fd,	// (0x00047c91) list_medium_line_x2_t4_g4_t1

0x0317,	// (0x00047cab) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0317,	// (0x00047cab) list_medium_line_x2_t4_g4_t2

0x032d,	// (0x00047cc1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x032d,	// (0x00047cc1) list_medium_line_x2_t4_g4_t3

0x0342,	// (0x00047cd6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0342,	// (0x00047cd6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00056bef) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00056bef) list_medium_line_x2_t4_g4_t

0x023e,	// (0x00047bd2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t2_g4_g1

0x02e5,	// (0x00047c79) list_medium_line_x2_t2_g4_g2_ParamLimits

0x02e5,	// (0x00047c79) list_medium_line_x2_t2_g4_g2

0x024a,	// (0x00047bde) list_medium_line_x2_t2_g4_g3_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x2_t2_g4_g3

0x0256,	// (0x00047bea) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00056c56) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00056c56) list_medium_line_x2_t2_g4_g

0x0354,	// (0x00047ce8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0354,	// (0x00047ce8) list_medium_line_x2_t2_g4_t1

0x028b,	// (0x00047c1f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00056c5f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00056c5f) list_medium_line_x2_t2_g4_t

0x023e,	// (0x00047bd2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t2_g3_g1

0x024a,	// (0x00047bde) list_medium_line_x2_t2_g3_g2_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x2_t2_g3_g2

0x0256,	// (0x00047bea) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00056bcc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00056bcc) list_medium_line_x2_t2_g3_g

0x0369,	// (0x00047cfd) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0369,	// (0x00047cfd) list_medium_line_x2_t2_g3_t1

0x028b,	// (0x00047c1f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00056c64) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00056c64) list_medium_line_x2_t2_g3_t

0x3aef,	// (0x0004b483) main_sp_fs_list_pane_ParamLimits

0x3aef,	// (0x0004b483) main_sp_fs_list_pane

0xb36c,	// (0x00052d00) sp_fs_scroll_pane_ParamLimits

0xb36c,	// (0x00052d00) sp_fs_scroll_pane

0x037e,	// (0x00047d12) list_medium_line_x2_t3_t1

0x038e,	// (0x00047d22) list_medium_line_x2_t3_t2

0x039c,	// (0x00047d30) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00056caf) list_medium_line_x2_t3_t

0x03aa,	// (0x00047d3e) list_medium_line_x3_t4_t1

0x03ba,	// (0x00047d4e) list_medium_line_x3_t4_t2

0x03c8,	// (0x00047d5c) list_medium_line_x3_t4_t3

0x039c,	// (0x00047d30) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00056cb6) list_medium_line_x3_t4_t

0x03d6,	// (0x00047d6a) list_medium_line_x4_t5_t1

0x03e6,	// (0x00047d7a) list_medium_line_x4_t5_t2

0x03c8,	// (0x00047d5c) list_medium_line_x4_t5_t3

0x03f4,	// (0x00047d88) list_medium_line_x4_t5_t4

0x039c,	// (0x00047d30) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00056cbf) list_medium_line_x4_t5_t

0x023e,	// (0x00047bd2) list_medium_line_t4_g4_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_t4_g4_g1

0x0402,	// (0x00047d96) list_medium_line_t4_g4_g2_ParamLimits

0x0402,	// (0x00047d96) list_medium_line_t4_g4_g2

0x040e,	// (0x00047da2) list_medium_line_t4_g4_g3_ParamLimits

0x040e,	// (0x00047da2) list_medium_line_t4_g4_g3

0x0256,	// (0x00047bea) list_medium_line_t4_g4_g4_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00056cca) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00056cca) list_medium_line_t4_g4_g

0x041a,	// (0x00047dae) list_medium_line_t4_g4_t1_ParamLimits

0x041a,	// (0x00047dae) list_medium_line_t4_g4_t1

0x042f,	// (0x00047dc3) list_medium_line_t4_g4_t2_ParamLimits

0x042f,	// (0x00047dc3) list_medium_line_t4_g4_t2

0x0444,	// (0x00047dd8) list_medium_line_t4_g4_t3_ParamLimits

0x0444,	// (0x00047dd8) list_medium_line_t4_g4_t3

0x028b,	// (0x00047c1f) list_medium_line_t4_g4_t4_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00056cd3) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00056cd3) list_medium_line_t4_g4_t

0x3e30,	// (0x0004b7c4) chi_dic_find_pane_g1

0x5f5c,	// (0x0004d8f0) main_tport_pane

0x0637,	// (0x00047fcb) list_medium_line_plain_t1

0x0645,	// (0x00047fd9) list_medium_line_t2_g2_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_t2_g2_g1

0x0651,	// (0x00047fe5) list_medium_line_t2_g2_g2_ParamLimits

0x0651,	// (0x00047fe5) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00057394) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00057394) list_medium_line_t2_g2_g

0x065d,	// (0x00047ff1) list_medium_line_t2_g2_t1_ParamLimits

0x065d,	// (0x00047ff1) list_medium_line_t2_g2_t1

0x0677,	// (0x0004800b) list_medium_line_t2_g2_t2_ParamLimits

0x0677,	// (0x0004800b) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00057399) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00057399) list_medium_line_t2_g2_t

0xd0e3,	// (0x00054a77) aid_sp_fs_list_icon_a_sm

0xd0eb,	// (0x00054a7f) aid_sp_fs_list_icon_d

0xd0f3,	// (0x00054a87) aid_sp_fs_text_primary

0xd6f3,	// (0x00055087) aid_sp_fs_text_secondary

0x92e1,	// (0x00050c75) list_medium_line

0x92e1,	// (0x00050c75) list_medium_line_g2

0x92e1,	// (0x00050c75) list_medium_line_g3

0x92e1,	// (0x00050c75) list_medium_line_plain

0x92e1,	// (0x00050c75) list_medium_line_plain_t2

0x92e1,	// (0x00050c75) list_medium_line_plain_t3

0x92e1,	// (0x00050c75) list_medium_line_right_icon

0x92e1,	// (0x00050c75) list_medium_line_right_iconx2

0x92e1,	// (0x00050c75) list_medium_line_t2

0x92e1,	// (0x00050c75) list_medium_line_t2_g2

0x92e1,	// (0x00050c75) list_medium_line_t2_g3

0x92e1,	// (0x00050c75) list_medium_line_t2_right_icon

0x92e1,	// (0x00050c75) list_medium_line_t2_right_iconx2

0x92e1,	// (0x00050c75) list_medium_line_t3

0x92e1,	// (0x00050c75) list_medium_line_t3_g2

0x92e1,	// (0x00050c75) list_medium_line_t3_g3

0x92e1,	// (0x00050c75) list_medium_line_t3_right_iconx2

0x92ea,	// (0x00050c7e) list_medium_line_t4_g4

0x92f3,	// (0x00050c87) list_medium_line_x2

0x92f3,	// (0x00050c87) list_medium_line_x2_t2_g2

0x92f3,	// (0x00050c87) list_medium_line_x2_t2_g3

0x92f3,	// (0x00050c87) list_medium_line_x2_t2_g4

0x92f3,	// (0x00050c87) list_medium_line_x2_t3

0x92f3,	// (0x00050c87) list_medium_line_x2_t3_g2

0x92f3,	// (0x00050c87) list_medium_line_x2_t3_g3

0x92f3,	// (0x00050c87) list_medium_line_x2_t3_g4

0x92f3,	// (0x00050c87) list_medium_line_x2_t4_g2

0x92f3,	// (0x00050c87) list_medium_line_x2_t4_g4

0x92fc,	// (0x00050c90) list_medium_line_x3

0x92fc,	// (0x00050c90) list_medium_line_x3_t4

0x92fc,	// (0x00050c90) list_medium_line_x3_t4_g4

0x92ea,	// (0x00050c7e) list_medium_line_x4_t4

0x92ea,	// (0x00050c7e) list_medium_line_x4_t4_g7

0x92ea,	// (0x00050c7e) list_medium_line_x4_t5

0x0803,	// (0x00048197) list_single_fs_dyc_pane_ParamLimits

0x0803,	// (0x00048197) list_single_fs_dyc_pane

0x023e,	// (0x00047bd2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x4_t4_g7_g1

0x0843,	// (0x000481d7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0843,	// (0x000481d7) list_medium_line_x4_t4_g7_g2

0x084f,	// (0x000481e3) list_medium_line_x4_t4_g7_g3_ParamLimits

0x084f,	// (0x000481e3) list_medium_line_x4_t4_g7_g3

0x085e,	// (0x000481f2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x085e,	// (0x000481f2) list_medium_line_x4_t4_g7_g4

0x086a,	// (0x000481fe) list_medium_line_x4_t4_g7_g5_ParamLimits

0x086a,	// (0x000481fe) list_medium_line_x4_t4_g7_g5

0x0879,	// (0x0004820d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0879,	// (0x0004820d) list_medium_line_x4_t4_g7_g6

0x0888,	// (0x0004821c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0888,	// (0x0004821c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00057564) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00057564) list_medium_line_x4_t4_g7_g

0x0894,	// (0x00048228) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0894,	// (0x00048228) list_medium_line_x4_t4_g7_t1

0x08a9,	// (0x0004823d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x08a9,	// (0x0004823d) list_medium_line_x4_t4_g7_t2

0x08be,	// (0x00048252) list_medium_line_x4_t4_g7_t3_ParamLimits

0x08be,	// (0x00048252) list_medium_line_x4_t4_g7_t3

0x08d3,	// (0x00048267) list_medium_line_x4_t4_g7_t4_ParamLimits

0x08d3,	// (0x00048267) list_medium_line_x4_t4_g7_t4

0x08e5,	// (0x00048279) list_medium_line_x4_t4_g7_t5_ParamLimits

0x08e5,	// (0x00048279) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00057573) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00057573) list_medium_line_x4_t4_g7_t

0x08f7,	// (0x0004828b) list_single_dyc_row_pane_ParamLimits

0x08f7,	// (0x0004828b) list_single_dyc_row_pane

0xa0b0,	// (0x00051a44) call5_gesture_pane_ParamLimits

0xa0b0,	// (0x00051a44) call5_gesture_pane

0xa106,	// (0x00051a9a) call5_windows_pane_ParamLimits

0xa106,	// (0x00051a9a) call5_windows_pane

0xa1ac,	// (0x00051b40) call5_swipe_1_pane_cp_ParamLimits

0xa1ac,	// (0x00051b40) call5_swipe_1_pane_cp

0xa1b8,	// (0x00051b4c) call5_swipe_2_pane_cp_ParamLimits

0xa1b8,	// (0x00051b4c) call5_swipe_2_pane_cp

0x21a7,	// (0x00049b3b) call5_image_pane_cp

0xa1c4,	// (0x00051b58) popup_call5_audio_first_window_cp_ParamLimits

0xa1c4,	// (0x00051b58) popup_call5_audio_first_window_cp

0xe45f,	// (0x00055df3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe45f,	// (0x00055df3) call5_swipe_1_pane_g1_cp

0xe49f,	// (0x00055e33) call5_swipe_1_pane_g2_cp

0xe478,	// (0x00055e0c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe478,	// (0x00055e0c) call5_swipe_1_pane_t1_cp

0xe45f,	// (0x00055df3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe45f,	// (0x00055df3) call5_swipe_2_pane_g1_cp

0xe4a7,	// (0x00055e3b) call5_swipe_2_pane_g2_cp

0xe4af,	// (0x00055e43) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4af,	// (0x00055e43) call5_swipe_2_pane_t1_cp

0x1353,	// (0x00048ce7) main_sp_fs_email_pane

0xe4c4,	// (0x00055e58) main_sp_fs_listscroll_pane_te

0xa1d2,	// (0x00051b66) popup_sp_fs_action_menu_pane_ParamLimits

0xa1d2,	// (0x00051b66) popup_sp_fs_action_menu_pane

0xbe99,	// (0x0005382d) bg_sp_fs_ctrlbar_pane_g1

0xe4cd,	// (0x00055e61) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4d6,	// (0x00055e6a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4df,	// (0x00055e73) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbe99,	// (0x0005382d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00057661) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc7e,	// (0x00053612) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc7e,	// (0x00053612) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4e8,	// (0x00055e7c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4e8,	// (0x00055e7c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4f4,	// (0x00055e88) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe4f4,	// (0x00055e88) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005766a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005766a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe500,	// (0x00055e94) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe500,	// (0x00055e94) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x098e,	// (0x00048322) list_medium_line_t2_right_icon_g1

0x0996,	// (0x0004832a) list_medium_line_t2_right_icon_t1

0x09a6,	// (0x0004833a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005766f) list_medium_line_t2_right_icon_t

0xb97e,	// (0x00053312) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb97e,	// (0x00053312) bg_sp_fs_ctrlbar_pane

0xa25e,	// (0x00051bf2) main_sp_fs_ctrlbar_button_pane_cp01

0xa268,	// (0x00051bfc) main_sp_fs_ctrlbar_ddmenu_pane

0xe552,	// (0x00055ee6) main_sp_fs_ctrlbar_pane_g1

0xe55e,	// (0x00055ef2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00057674) main_sp_fs_ctrlbar_pane_g

0xe56a,	// (0x00055efe) main_sp_fs_ctrlbar_pane_t1

0xa272,	// (0x00051c06) main_sp_fs_ctrlbar_pane

0xa296,	// (0x00051c2a) main_sp_fs_listscroll_pane_te_cp01

0x09b8,	// (0x0004834c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x09b8,	// (0x0004834c) popup_sp_fs_action_menu_pane_cp01

0x1353,	// (0x00048ce7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1353,	// (0x00048ce7) bg_sp_fs_highlight_list_pane_cp01

0xd118,	// (0x00054aac) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd118,	// (0x00054aac) sp_fs_action_menu_list_gene_pane_g1

0xe59a,	// (0x00055f2e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe59a,	// (0x00055f2e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005767e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005767e) sp_fs_action_menu_list_gene_pane_g

0xd127,	// (0x00054abb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd127,	// (0x00054abb) sp_fs_action_menu_list_gene_pane_t1

0xd13f,	// (0x00054ad3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd13f,	// (0x00054ad3) sp_fs_action_menu_list_gene_pane

0xe5a7,	// (0x00055f3b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5a7,	// (0x00055f3b) popup_sp_fs_action_menu_bg_pane

0xd15e,	// (0x00054af2) sp_fs_action_menu_list_pane_ParamLimits

0xd15e,	// (0x00054af2) sp_fs_action_menu_list_pane

0xa2b6,	// (0x00051c4a) sp_fs_scroll_pane_cp01_ParamLimits

0xa2b6,	// (0x00051c4a) sp_fs_scroll_pane_cp01

0x09e8,	// (0x0004837c) list_medium_line_plain_t2_t1

0x09f8,	// (0x0004838c) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00057683) list_medium_line_plain_t2_t

0x0a08,	// (0x0004839c) list_medium_line_plain_t3_t1

0x0a18,	// (0x000483ac) list_medium_line_plain_t3_t2

0x0a26,	// (0x000483ba) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00057688) list_medium_line_plain_t3_t

0x023e,	// (0x00047bd2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t2_g2_g1

0x0256,	// (0x00047bea) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00056bda) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00056bda) list_medium_line_x2_t2_g2_g

0x041a,	// (0x00047dae) list_medium_line_x2_t2_g2_t1_ParamLimits

0x041a,	// (0x00047dae) list_medium_line_x2_t2_g2_t1

0x028b,	// (0x00047c1f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005768f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005768f) list_medium_line_x2_t2_g2_t

0x023e,	// (0x00047bd2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t4_g2_g1

0x0a34,	// (0x000483c8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a34,	// (0x000483c8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00057694) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00057694) list_medium_line_x2_t4_g2_g

0x0a46,	// (0x000483da) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0a46,	// (0x000483da) list_medium_line_x2_t4_g2_t1

0x0a60,	// (0x000483f4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a60,	// (0x000483f4) list_medium_line_x2_t4_g2_t2

0x0a76,	// (0x0004840a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a76,	// (0x0004840a) list_medium_line_x2_t4_g2_t3

0x028b,	// (0x00047c1f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00057699) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00057699) list_medium_line_x2_t4_g2_t

0x0a8b,	// (0x0004841f) list_medium_line_t3_right_iconx2_g1

0x098e,	// (0x00048322) list_medium_line_t3_right_iconx2_g2

0x0a93,	// (0x00048427) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000576a2) list_medium_line_t3_right_iconx2_g

0x0a9d,	// (0x00048431) list_medium_line_t3_right_iconx2_t1

0x0aad,	// (0x00048441) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000576a9) list_medium_line_t3_right_iconx2_t

0x023e,	// (0x00047bd2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x3_t4_g4_g1

0x024a,	// (0x00047bde) list_medium_line_x3_t4_g4_g2_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x3_t4_g4_g2

0x0402,	// (0x00047d96) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0402,	// (0x00047d96) list_medium_line_x3_t4_g4_g3

0x0abb,	// (0x0004844f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0abb,	// (0x0004844f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000576ae) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000576ae) list_medium_line_x3_t4_g4_g

0x0ac7,	// (0x0004845b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ac7,	// (0x0004845b) list_medium_line_x3_t4_g4_t1

0x0ade,	// (0x00048472) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0ade,	// (0x00048472) list_medium_line_x3_t4_g4_t2

0x042f,	// (0x00047dc3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x042f,	// (0x00047dc3) list_medium_line_x3_t4_g4_t3

0x0af9,	// (0x0004848d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0af9,	// (0x0004848d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000576b7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000576b7) list_medium_line_x3_t4_g4_t

0x0b16,	// (0x000484aa) list_single_dyc_row_text_pane_t1_ParamLimits

0x0b16,	// (0x000484aa) list_single_dyc_row_text_pane_t1

0x0b5f,	// (0x000484f3) list_single_dyc_row_text_pane_t2_ParamLimits

0x0b5f,	// (0x000484f3) list_single_dyc_row_text_pane_t2

0xd17e,	// (0x00054b12) list_single_dyc_row_text_pane_t3_ParamLimits

0xd17e,	// (0x00054b12) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000576c0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000576c0) list_single_dyc_row_text_pane_t

0xd1a2,	// (0x00054b36) list_single_dyc_row_pane_g1_ParamLimits

0xd1a2,	// (0x00054b36) list_single_dyc_row_pane_g1

0xd1ae,	// (0x00054b42) list_single_dyc_row_pane_g2_ParamLimits

0xd1ae,	// (0x00054b42) list_single_dyc_row_pane_g2

0xd1ba,	// (0x00054b4e) list_single_dyc_row_pane_g3_ParamLimits

0xd1ba,	// (0x00054b4e) list_single_dyc_row_pane_g3

0xd1c6,	// (0x00054b5a) list_single_dyc_row_pane_g4_ParamLimits

0xd1c6,	// (0x00054b5a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000576cd) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000576cd) list_single_dyc_row_pane_g

0xd1d2,	// (0x00054b66) list_single_dyc_row_text_pane_ParamLimits

0xd1d2,	// (0x00054b66) list_single_dyc_row_text_pane

0xe113,	// (0x00055aa7) bg_sp_fs_scroll_pane

0xe5b5,	// (0x00055f49) thumb_sp_fs_scroll_pane

0x0645,	// (0x00047fd9) list_medium_line_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_g1

0x0c94,	// (0x00048628) list_medium_line_t1_ParamLimits

0x0c94,	// (0x00048628) list_medium_line_t1

0x023e,	// (0x00047bd2) list_medium_line_x2_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_g1

0x024a,	// (0x00047bde) list_medium_line_x2_g2_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000576d6) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000576d6) list_medium_line_x2_g

0xd1f1,	// (0x00054b85) list_medium_line_x2_t1_ParamLimits

0xd1f1,	// (0x00054b85) list_medium_line_x2_t1

0x023e,	// (0x00047bd2) list_medium_line_x3_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x3_g1

0x024a,	// (0x00047bde) list_medium_line_x3_g2_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000576d6) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000576d6) list_medium_line_x3_g

0xd1f1,	// (0x00054b85) list_medium_line_x3_t1_ParamLimits

0xd1f1,	// (0x00054b85) list_medium_line_x3_t1

0xe5be,	// (0x00055f52) thumb_sp_fs_scroll_pane_g1

0xe5c7,	// (0x00055f5b) thumb_sp_fs_scroll_pane_g2

0xe5d0,	// (0x00055f64) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000576db) thumb_sp_fs_scroll_pane_g

0xe5be,	// (0x00055f52) bg_sp_fs_scroll_pane_g1

0xe5c7,	// (0x00055f5b) bg_sp_fs_scroll_pane_g2

0xe5d0,	// (0x00055f64) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000576db) bg_sp_fs_scroll_pane_g

0x023e,	// (0x00047bd2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x023e,	// (0x00047bd2) list_medium_line_x2_t3_g4_g1

0x02e5,	// (0x00047c79) list_medium_line_x2_t3_g4_g2_ParamLimits

0x02e5,	// (0x00047c79) list_medium_line_x2_t3_g4_g2

0x024a,	// (0x00047bde) list_medium_line_x2_t3_g4_g3_ParamLimits

0x024a,	// (0x00047bde) list_medium_line_x2_t3_g4_g3

0x0256,	// (0x00047bea) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0256,	// (0x00047bea) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00056c56) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00056c56) list_medium_line_x2_t3_g4_g

0x0ca9,	// (0x0004863d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0ca9,	// (0x0004863d) list_medium_line_x2_t3_g4_t1

0x0cc3,	// (0x00048657) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0cc3,	// (0x00048657) list_medium_line_x2_t3_g4_t2

0x028b,	// (0x00047c1f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x028b,	// (0x00047c1f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000576e2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000576e2) list_medium_line_x2_t3_g4_t

0x0645,	// (0x00047fd9) list_medium_line_g2_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_g2_g1

0x0651,	// (0x00047fe5) list_medium_line_g2_g2_ParamLimits

0x0651,	// (0x00047fe5) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00057394) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00057394) list_medium_line_g2_g

0x0cdd,	// (0x00048671) list_medium_line_g2_t1_ParamLimits

0x0cdd,	// (0x00048671) list_medium_line_g2_t1

0x0645,	// (0x00047fd9) list_medium_line_t3_g2_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_t3_g2_g1

0x0651,	// (0x00047fe5) list_medium_line_t3_g2_g2_ParamLimits

0x0651,	// (0x00047fe5) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00057394) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00057394) list_medium_line_t3_g2_g

0x0cf2,	// (0x00048686) list_medium_line_t3_g2_t1_ParamLimits

0x0cf2,	// (0x00048686) list_medium_line_t3_g2_t1

0x0d0c,	// (0x000486a0) list_medium_line_t3_g2_t2_ParamLimits

0x0d0c,	// (0x000486a0) list_medium_line_t3_g2_t2

0x0d22,	// (0x000486b6) list_medium_line_t3_g2_t3_ParamLimits

0x0d22,	// (0x000486b6) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000576e9) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000576e9) list_medium_line_t3_g2_t

0x098e,	// (0x00048322) list_medium_line_right_icon_g1

0x0d3c,	// (0x000486d0) list_medium_line_right_icon_t1

0x0645,	// (0x00047fd9) list_medium_line_t2_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_t2_g1

0x0d4a,	// (0x000486de) list_medium_line_t2_t1_ParamLimits

0x0d4a,	// (0x000486de) list_medium_line_t2_t1

0x0d64,	// (0x000486f8) list_medium_line_t2_t2_ParamLimits

0x0d64,	// (0x000486f8) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000576f0) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000576f0) list_medium_line_t2_t

0x0645,	// (0x00047fd9) list_medium_line_t3_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_t3_g1

0x0d7d,	// (0x00048711) list_medium_line_t3_t1_ParamLimits

0x0d7d,	// (0x00048711) list_medium_line_t3_t1

0x0d97,	// (0x0004872b) list_medium_line_t3_t2_ParamLimits

0x0d97,	// (0x0004872b) list_medium_line_t3_t2

0x0dad,	// (0x00048741) list_medium_line_t3_t3_ParamLimits

0x0dad,	// (0x00048741) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000576f5) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000576f5) list_medium_line_t3_t

0x0645,	// (0x00047fd9) list_medium_line_g3_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_g3_g1

0x0dc2,	// (0x00048756) list_medium_line_g3_g2_ParamLimits

0x0dc2,	// (0x00048756) list_medium_line_g3_g2

0x0651,	// (0x00047fe5) list_medium_line_g3_g3_ParamLimits

0x0651,	// (0x00047fe5) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000576fc) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000576fc) list_medium_line_g3_g

0x0dce,	// (0x00048762) list_medium_line_g3_t1_ParamLimits

0x0dce,	// (0x00048762) list_medium_line_g3_t1

0x0645,	// (0x00047fd9) list_medium_line_t2_g3_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_t2_g3_g1

0x0dc2,	// (0x00048756) list_medium_line_t2_g3_g2_ParamLimits

0x0dc2,	// (0x00048756) list_medium_line_t2_g3_g2

0x0651,	// (0x00047fe5) list_medium_line_t2_g3_g3_ParamLimits

0x0651,	// (0x00047fe5) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000576fc) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000576fc) list_medium_line_t2_g3_g

0x0de3,	// (0x00048777) list_medium_line_t2_g3_t1_ParamLimits

0x0de3,	// (0x00048777) list_medium_line_t2_g3_t1

0x0dfd,	// (0x00048791) list_medium_line_t2_g3_t2_ParamLimits

0x0dfd,	// (0x00048791) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00057703) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00057703) list_medium_line_t2_g3_t

0x0645,	// (0x00047fd9) list_medium_line_t3_g3_g1_ParamLimits

0x0645,	// (0x00047fd9) list_medium_line_t3_g3_g1

0x0dc2,	// (0x00048756) list_medium_line_t3_g3_g2_ParamLimits

0x0dc2,	// (0x00048756) list_medium_line_t3_g3_g2

0x0651,	// (0x00047fe5) list_medium_line_t3_g3_g3_ParamLimits

0x0651,	// (0x00047fe5) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000576fc) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000576fc) list_medium_line_t3_g3_g

0x0e1b,	// (0x000487af) list_medium_line_t3_g3_t1_ParamLimits

0x0e1b,	// (0x000487af) list_medium_line_t3_g3_t1

0x0e34,	// (0x000487c8) list_medium_line_t3_g3_t2_ParamLimits

0x0e34,	// (0x000487c8) list_medium_line_t3_g3_t2

0x0e4a,	// (0x000487de) list_medium_line_t3_g3_t3_ParamLimits

0x0e4a,	// (0x000487de) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00057708) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00057708) list_medium_line_t3_g3_t

0x0a8b,	// (0x0004841f) list_medium_line_right_iconx2_g1

0x098e,	// (0x00048322) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005770f) list_medium_line_right_iconx2_g

0x0e64,	// (0x000487f8) list_medium_line_right_iconx2_t1

0x0a8b,	// (0x0004841f) list_medium_line_t2_right_iconx2_g1

0x098e,	// (0x00048322) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005770f) list_medium_line_t2_right_iconx2_g

0x0e72,	// (0x00048806) list_medium_line_t2_right_iconx2_t1

0x0e82,	// (0x00048816) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00057714) list_medium_line_t2_right_iconx2_t

0x0e94,	// (0x00048828) list_medium_line_x4_t4_t1

0x0ea2,	// (0x00048836) list_medium_line_x4_t4_t2

0x0eb2,	// (0x00048846) list_medium_line_x4_t4_t3

0x0ec2,	// (0x00048856) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00057719) list_medium_line_x4_t4_t

0xa31f,	// (0x00051cb3) tport_appsw_pane_ParamLimits

0xa31f,	// (0x00051cb3) tport_appsw_pane

0xa337,	// (0x00051ccb) tport_contact_pane_ParamLimits

0xa337,	// (0x00051ccb) tport_contact_pane

0xa34f,	// (0x00051ce3) tport_listscroll_pane_ParamLimits

0xa34f,	// (0x00051ce3) tport_listscroll_pane

0xa369,	// (0x00051cfd) cell_tport_appsw_pane_ParamLimits

0xa369,	// (0x00051cfd) cell_tport_appsw_pane

0xccbb,	// (0x0005464f) tport_appsw_pane_g1_ParamLimits

0xccbb,	// (0x0005464f) tport_appsw_pane_g1

0xe5d9,	// (0x00055f6d) tport_contact_pane_g1

0xdcd3,	// (0x00055667) tport_contact_pane_t1

0xe5e2,	// (0x00055f76) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00057722) tport_contact_pane_t

0xe5f0,	// (0x00055f84) list_tport_pane

0xe5f9,	// (0x00055f8d) scroll_pane_cp_030

0xa3b1,	// (0x00051d45) cell_tport_appsw_pane_g1

0xa3c1,	// (0x00051d55) cell_tport_appsw_pane_t1

0xa3cf,	// (0x00051d63) grid_highlight_pane_cp019

0xa3d7,	// (0x00051d6b) list_tport_double_graphic_pane_ParamLimits

0xa3d7,	// (0x00051d6b) list_tport_double_graphic_pane

0x1353,	// (0x00048ce7) list_highlight_pane_cp023_ParamLimits

0x1353,	// (0x00048ce7) list_highlight_pane_cp023

0xa3e4,	// (0x00051d78) list_tport_double_graphic_pane_g1_ParamLimits

0xa3e4,	// (0x00051d78) list_tport_double_graphic_pane_g1

0xa3f1,	// (0x00051d85) list_tport_double_graphic_pane_t1_ParamLimits

0xa3f1,	// (0x00051d85) list_tport_double_graphic_pane_t1

0xa406,	// (0x00051d9a) list_tport_double_graphic_pane_t2_ParamLimits

0xa406,	// (0x00051d9a) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005772e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005772e) list_tport_double_graphic_pane_t

0xe113,	// (0x00055aa7) main_cale_note_pane

0x8604,	// (0x0004ff98) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8604,	// (0x0004ff98) cell_vitu2_function_top_wide_pane_cp01

0x9da0,	// (0x00051734) wait_bar_pane_cp05_ParamLimits

0x1353,	// (0x00048ce7) listscroll_cmail_pane

0xe602,	// (0x00055f96) list_cmail_pane

0xa418,	// (0x00051dac) list_cmail_body_pane

0xa42d,	// (0x00051dc1) list_single_cmail_header_caption_pane

0xa443,	// (0x00051dd7) list_single_cmail_header_detail_pane_ParamLimits

0xa443,	// (0x00051dd7) list_single_cmail_header_detail_pane

0xe612,	// (0x00055fa6) list_single_cmail_header_caption_pane_t1

0x0ed2,	// (0x00048866) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ed2,	// (0x00048866) list_single_cmail_header_detail_pane_g1

0xd207,	// (0x00054b9b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd207,	// (0x00054b9b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00057733) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00057733) list_single_cmail_header_detail_pane_g

0xd213,	// (0x00054ba7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd213,	// (0x00054ba7) list_single_cmail_header_detail_pane_t1

0xd273,	// (0x00054c07) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd273,	// (0x00054c07) list_single_cmail_header_editor_pane_bg

0xde3e,	// (0x000557d2) list_cmail_body_pane_g1

0xe636,	// (0x00055fca) list_cmail_body_pane_t1

0xcd0a,	// (0x0005469e) list_single_cmail_header_editor_pane_bg_g1

0x2bae,	// (0x0004a542) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd1a,	// (0x000546ae) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd12,	// (0x000546a6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcfb5,	// (0x00054949) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd3a,	// (0x000546ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd2a,	// (0x000546be) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd32,	// (0x000546c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2b8e,	// (0x0004a522) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa46c,	// (0x00051e00) calenote_gesture_pane_ParamLimits

0xa46c,	// (0x00051e00) calenote_gesture_pane

0xa48c,	// (0x00051e20) calenote_window_pane_ParamLimits

0xa48c,	// (0x00051e20) calenote_window_pane

0xe644,	// (0x00055fd8) popup_note_window_cp01

0xa4a8,	// (0x00051e3c) calenote_swipe_1_pane_ParamLimits

0xa4a8,	// (0x00051e3c) calenote_swipe_1_pane

0xa1b8,	// (0x00051b4c) calenote_swipe_2_pane_ParamLimits

0xa1b8,	// (0x00051b4c) calenote_swipe_2_pane

0xe45f,	// (0x00055df3) calenote_swipe_1_pane_g1_ParamLimits

0xe45f,	// (0x00055df3) calenote_swipe_1_pane_g1

0xe46c,	// (0x00055e00) calenote_swipe_1_pane_g2_ParamLimits

0xe46c,	// (0x00055e00) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00057657) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00057657) calenote_swipe_1_pane_g

0xe656,	// (0x00055fea) calenote_swipe_1_pane_t1_ParamLimits

0xe656,	// (0x00055fea) calenote_swipe_1_pane_t1

0xe45f,	// (0x00055df3) calenote_swipe_2_pane_g1_ParamLimits

0xe45f,	// (0x00055df3) calenote_swipe_2_pane_g1

0xe675,	// (0x00056009) calenote_swipe_2_pane_g2_ParamLimits

0xe675,	// (0x00056009) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005773f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005773f) calenote_swipe_2_pane_g

0xe681,	// (0x00056015) calenote_swipe_2_pane_t1_ParamLimits

0xe681,	// (0x00056015) calenote_swipe_2_pane_t1

0xe113,	// (0x00055aa7) main_mup_navstr_pane

0x72d1,	// (0x0004ec65) main_mup3_pane_t7_ParamLimits

0x72d1,	// (0x0004ec65) main_mup3_pane_t7

0xc86a,	// (0x000541fe) main_mp4_pane_g6_ParamLimits

0xc86a,	// (0x000541fe) main_mp4_pane_g6

0xca92,	// (0x00054426) main_image3_pane_t4_ParamLimits

0xca92,	// (0x00054426) main_image3_pane_t4

0xa4bd,	// (0x00051e51) popup_navstr_preview_pane_ParamLimits

0xa4bd,	// (0x00051e51) popup_navstr_preview_pane

0xa4d1,	// (0x00051e65) scroll_navstr_pane_ParamLimits

0xa4d1,	// (0x00051e65) scroll_navstr_pane

0xe113,	// (0x00055aa7) bg_popup_preview_window_pane_cp04

0xe6a8,	// (0x0005603c) popup_navstr_preview_pane_t1

0xa4e5,	// (0x00051e79) scroll_navstr_pane_g1_ParamLimits

0xa4e5,	// (0x00051e79) scroll_navstr_pane_g1

0xa4f9,	// (0x00051e8d) scroll_navstr_pane_t1_ParamLimits

0xa4f9,	// (0x00051e8d) scroll_navstr_pane_t1

0xe64d,	// (0x00055fe1) bg_button_pane_cp014

0xe64d,	// (0x00055fe1) bg_button_pane_cp030

0x0934,	// (0x000482c8) list_double_fisheye_pane_g4_ParamLimits

0x0934,	// (0x000482c8) list_double_fisheye_pane_g4

0x0940,	// (0x000482d4) list_double_fisheye_pane_g5_ParamLimits

0x0940,	// (0x000482d4) list_double_fisheye_pane_g5

0xb36c,	// (0x00052d00) sp_fs_scroll_pane_cp03

0xe552,	// (0x00055ee6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe55e,	// (0x00055ef2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00057674) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe56a,	// (0x00055efe) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe60a,	// (0x00055f9e) sp_fs_scroll_pane_cp02

0x1b8f,	// (0x00049523) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1b8f,	// (0x00049523) popup_sp_fs_calendar_preview_list_single_pane

0xe113,	// (0x00055aa7) main_cam6_pano_pane

0x1353,	// (0x00048ce7) main_mup3_pane_ParamLimits

0xe113,	// (0x00055aa7) main_phacti_pane

0x9c73,	// (0x00051607) bg_button_pane_cp11

0x9c8d,	// (0x00051621) main_mobtv_info_pane_g2_ParamLimits

0x9c8d,	// (0x00051621) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000575d4) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000575d4) main_mobtv_info_pane_g

0x9e6a,	// (0x000517fe) sc_clock_pane_t5_ParamLimits

0x9e6a,	// (0x000517fe) sc_clock_pane_t5

0x9f32,	// (0x000518c6) main_radioblah_pane_g1_ParamLimits

0xe0db,	// (0x00055a6f) main_radioblah_pane_t3_ParamLimits

0xe0db,	// (0x00055a6f) main_radioblah_pane_t3

0xe0f3,	// (0x00055a87) main_radioblah_pane_t4_ParamLimits

0xe0f3,	// (0x00055a87) main_radioblah_pane_t4

0x9f5a,	// (0x000518ee) main_radioblah_text_pane_ParamLimits

0x9f5a,	// (0x000518ee) main_radioblah_text_pane

0x9f6c,	// (0x00051900) main_radioblah_info_pane_g1_ParamLimits

0xa005,	// (0x00051999) main_radioblah_info_pane_t4_ParamLimits

0xa005,	// (0x00051999) main_radioblah_info_pane_t4

0x1353,	// (0x00048ce7) main_sp_fs_calendar_pane

0xa510,	// (0x00051ea4) main_phacti_pane_g1

0xa518,	// (0x00051eac) phacti_note_pane_ParamLimits

0xa518,	// (0x00051eac) phacti_note_pane

0xe6bf,	// (0x00056053) phacti_term_pane_ParamLimits

0xe6bf,	// (0x00056053) phacti_term_pane

0xe6d4,	// (0x00056068) phacti_note_pane_t1_ParamLimits

0xe6d4,	// (0x00056068) phacti_note_pane_t1

0xd28a,	// (0x00054c1e) phacti_term_pane_g1

0xd292,	// (0x00054c26) phacti_term_pane_t1_ParamLimits

0xd292,	// (0x00054c26) phacti_term_pane_t1

0xe6eb,	// (0x0005607f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x217d,	// (0x00049b11) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00057749) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6f3,	// (0x00056087) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6f3,	// (0x00056087) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe709,	// (0x0005609d) aid_popup_sp_fs_bg_corner_pane

0xbe99,	// (0x0005382d) popup_sp_fs_calendar_preview_bg_pane_g1

0xe113,	// (0x00055aa7) popup_sp_fs_calendar_preview_bg_pane

0xe711,	// (0x000560a5) popup_sp_fs_calendar_preview_list_pane

0xb97e,	// (0x00053312) bg_main_sp_fs_cale_pane_ParamLimits

0xb97e,	// (0x00053312) bg_main_sp_fs_cale_pane

0xd2c5,	// (0x00054c59) listscroll_cale_mrui_pane_ParamLimits

0xd2c5,	// (0x00054c59) listscroll_cale_mrui_pane

0xd2da,	// (0x00054c6e) listscroll_sp_fs_schedule_track_pane

0xd2e3,	// (0x00054c77) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd2e3,	// (0x00054c77) main_sp_fs_ctrlbar_pane_cp01

0xe719,	// (0x000560ad) main_sp_fs_ribbon_pane

0xd2f6,	// (0x00054c8a) popup_sp_fs_cale_preview_window

0xa58d,	// (0x00051f21) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa58d,	// (0x00051f21) list_single_sp_fs_schedule_track_pane

0x1353,	// (0x00048ce7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1353,	// (0x00048ce7) bg_sp_fs_highlight_list_pane_cp03

0xa5a0,	// (0x00051f34) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa5a0,	// (0x00051f34) list_single_sp_fs_schedule_track_pane_g1

0xa5ac,	// (0x00051f40) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa5ac,	// (0x00051f40) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005774e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005774e) list_single_sp_fs_schedule_track_pane_g

0xa5b8,	// (0x00051f4c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa5b8,	// (0x00051f4c) list_single_sp_fs_schedule_track_pane_t1

0xa5d2,	// (0x00051f66) sp_fs_schedule_track_pane_ParamLimits

0xa5d2,	// (0x00051f66) sp_fs_schedule_track_pane

0xe721,	// (0x000560b5) sp_fs_schedule_track_pane_g1

0xe729,	// (0x000560bd) sp_fs_schedule_track_pane_g2

0xe731,	// (0x000560c5) sp_fs_schedule_track_pane_g3

0xe739,	// (0x000560cd) sp_fs_schedule_track_pane_g4

0xe741,	// (0x000560d5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00057753) sp_fs_schedule_track_pane_g

0xcd0a,	// (0x0005469e) bg_sp_fs_schedule_viewer_highlight_g1

0x2bae,	// (0x0004a542) bg_sp_fs_schedule_viewer_highlight_g2

0xcd12,	// (0x000546a6) bg_sp_fs_schedule_viewer_highlight_g3

0xcd1a,	// (0x000546ae) bg_sp_fs_schedule_viewer_highlight_g4

0xcfb5,	// (0x00054949) bg_sp_fs_schedule_viewer_highlight_g5

0xcd2a,	// (0x000546be) bg_sp_fs_schedule_viewer_highlight_g6

0xcd32,	// (0x000546c6) bg_sp_fs_schedule_viewer_highlight_g7

0xcd3a,	// (0x000546ce) bg_sp_fs_schedule_viewer_highlight_g8

0x2b8e,	// (0x0004a522) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005775e) bg_sp_fs_schedule_viewer_highlight_g

0xe113,	// (0x00055aa7) bg_main_sp_fs_ribbon_pane

0xa5e3,	// (0x00051f77) main_sp_fs_ribbon_pane_g1

0xe749,	// (0x000560dd) main_sp_fs_ribbon_pane_t1

0xa5ec,	// (0x00051f80) main_sp_fs_ribbon_pane_t2

0xe758,	// (0x000560ec) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00057771) main_sp_fs_ribbon_pane_t

0xe767,	// (0x000560fb) main_sp_fs_ribbon_scheduler_pane

0xe76f,	// (0x00056103) bg_main_sp_fs_ribbon_pane_g1

0xe778,	// (0x0005610c) bg_main_sp_fs_ribbon_pane_g2

0xe781,	// (0x00056115) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00057778) bg_main_sp_fs_ribbon_pane_g

0xe789,	// (0x0005611d) main_sp_fs_ribbon_scheduler_pane_g1

0xe792,	// (0x00056126) main_sp_fs_ribbon_scheduler_pane_g2

0xe79b,	// (0x0005612f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005777f) main_sp_fs_ribbon_scheduler_pane_g

0xe7a4,	// (0x00056138) list_cale_mrui_pane

0xa5fb,	// (0x00051f8f) sp_fs_scroll_pane_cp07_ParamLimits

0xa5fb,	// (0x00051f8f) sp_fs_scroll_pane_cp07

0xa617,	// (0x00051fab) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa617,	// (0x00051fab) bg_sp_fs_schedule_viewer_highlight

0xe7b1,	// (0x00056145) list_single_sp_fs_schedule_track_pane_cp01

0xe7b9,	// (0x0005614d) list_sp_fs_schedule_track_pane

0xe7c1,	// (0x00056155) sp_fs_scroll_pane_cp06_ParamLimits

0xe7c1,	// (0x00056155) sp_fs_scroll_pane_cp06

0xbe99,	// (0x0005382d) bgmain_sp_fs_calendar_pane_g1

0x0eea,	// (0x0004887e) list_single_cale_mrui_pane_ParamLimits

0x0eea,	// (0x0004887e) list_single_cale_mrui_pane

0xd308,	// (0x00054c9c) list_single_cale_mrui_row_pane_ParamLimits

0xd308,	// (0x00054c9c) list_single_cale_mrui_row_pane

0xd315,	// (0x00054ca9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd315,	// (0x00054ca9) list_single_cale_mrui_row_pane_g1

0xd34d,	// (0x00054ce1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd34d,	// (0x00054ce1) list_single_cale_mrui_row_pane_t1

0x0f0b,	// (0x0004889f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0f0b,	// (0x0004889f) list_single_cale_mrui_row_pane_t2

0xd35f,	// (0x00054cf3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd35f,	// (0x00054cf3) list_single_cale_mrui_row_pane_t3

0xd38e,	// (0x00054d22) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd38e,	// (0x00054d22) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005778d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005778d) list_single_cale_mrui_row_pane_t

0x0f73,	// (0x00048907) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f73,	// (0x00048907) list_single_cmail_header_editor_pane_bg_cp01

0x0f99,	// (0x0004892d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f99,	// (0x0004892d) list_single_cmail_header_editor_pane_bg_cp02

0xa627,	// (0x00051fbb) main_radioblah_text_pane_t1_ParamLimits

0xa627,	// (0x00051fbb) main_radioblah_text_pane_t1

0xe7e0,	// (0x00056174) cam6_indi_pane_cp01

0xe7e8,	// (0x0005617c) cam6_mode_pane_cp01

0xe7f0,	// (0x00056184) cam6_pano_pane

0xe7f9,	// (0x0005618d) cam6_zoom_pane_cp01

0xe801,	// (0x00056195) cam6_pano_image_pane

0xe80c,	// (0x000561a0) cam6_pano_pane_g1

0xde3e,	// (0x000557d2) cam6_pano_pane_g2

0xe815,	// (0x000561a9) cam6_pano_pane_g3

0xe81e,	// (0x000561b2) cam6_pano_pane_g4

0xc4cd,	// (0x00053e61) cam6_pano_pane_g5

0xe827,	// (0x000561bb) cam6_pano_pane_g6

0xe10b,	// (0x00055a9f) cam6_pano_pane_g7

0xe831,	// (0x000561c5) cam6_pano_pane_g8

0xe83a,	// (0x000561ce) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00057796) cam6_pano_pane_g

0xe113,	// (0x00055aa7) main_browser_tag_pane

0xe6a0,	// (0x00056034) grid_navstr_albumart_pane

0xe845,	// (0x000561d9) cell_navstr_albumart_pane_ParamLimits

0xe845,	// (0x000561d9) cell_navstr_albumart_pane

0xe865,	// (0x000561f9) cell_navstr_albumart_pane_g1

0xb78f,	// (0x00053123) cell_navstr_albumart_pane_g2

0xb79f,	// (0x00053133) cell_navstr_albumart_pane_g3

0xb797,	// (0x0005312b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000577a9) cell_navstr_albumart_pane_g

0xa641,	// (0x00051fd5) bt_list_pane_ParamLimits

0xa641,	// (0x00051fd5) bt_list_pane

0xa655,	// (0x00051fe9) bt_list_pane_t1

0xa664,	// (0x00051ff8) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000577b2) bt_list_pane_t

0xe113,	// (0x00055aa7) main_cale_prevew_pane

0xa673,	// (0x00052007) popup_cale_preview_window_ParamLimits

0xa673,	// (0x00052007) popup_cale_preview_window

0x1353,	// (0x00048ce7) bg_popup_preview_window_pane_cp05_ParamLimits

0x1353,	// (0x00048ce7) bg_popup_preview_window_pane_cp05

0xe86d,	// (0x00056201) list_cale_preview_pane_ParamLimits

0xe86d,	// (0x00056201) list_cale_preview_pane

0xa68e,	// (0x00052022) list_double_cale_preview_pane_ParamLimits

0xa68e,	// (0x00052022) list_double_cale_preview_pane

0xa6a0,	// (0x00052034) list_single_cale_preview_pane_ParamLimits

0xa6a0,	// (0x00052034) list_single_cale_preview_pane

0xa6b6,	// (0x0005204a) list_single_cale_preview_pane_g1

0xa6be,	// (0x00052052) list_single_cale_preview_pane_t1_ParamLimits

0xa6be,	// (0x00052052) list_single_cale_preview_pane_t1

0xa6d3,	// (0x00052067) list_double_cale_preview_pane_g1

0xa6db,	// (0x0005206f) list_double_cale_preview_pane_t1_ParamLimits

0xa6db,	// (0x0005206f) list_double_cale_preview_pane_t1

0xa6f0,	// (0x00052084) list_double_cale_preview_pane_t2_ParamLimits

0xa6f0,	// (0x00052084) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000577b7) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000577b7) list_double_cale_preview_pane_t

0xe113,	// (0x00055aa7) main_ezdial_pane

0x1353,	// (0x00048ce7) main_sp_fs_email_pane_ParamLimits

0xa216,	// (0x00051baa) cmail_ddmenu_btn01_pane_ParamLimits

0xa216,	// (0x00051baa) cmail_ddmenu_btn01_pane

0xa229,	// (0x00051bbd) cmail_ddmenu_btn02_pane_ParamLimits

0xa229,	// (0x00051bbd) cmail_ddmenu_btn02_pane

0xa24c,	// (0x00051be0) cmail_ddmenu_btn03_pane_ParamLimits

0xa24c,	// (0x00051be0) cmail_ddmenu_btn03_pane

0xa272,	// (0x00051c06) main_sp_fs_ctrlbar_pane_ParamLimits

0xa296,	// (0x00051c2a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa418,	// (0x00051dac) list_cmail_body_pane_ParamLimits

0xe620,	// (0x00055fb4) bg_button_pane_cp12

0xe629,	// (0x00055fbd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe629,	// (0x00055fbd) list_single_cmail_header_detail_pane_g3

0xd24f,	// (0x00054be3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd24f,	// (0x00054be3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005773a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005773a) list_single_cmail_header_detail_pane_t

0xd2a7,	// (0x00054c3b) phacti_term_pane_t2_ParamLimits

0xd2a7,	// (0x00054c3b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00057744) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00057744) phacti_term_pane_t

0xe879,	// (0x0005620d) aid_size_list_single_double

0xa708,	// (0x0005209c) popup_ezdial_listscroll_window

0xa724,	// (0x000520b8) popup_number_entry_window_cp01

0x21a7,	// (0x00049b3b) bg_popup_call_pane_cp09

0xe885,	// (0x00056219) ezdial_list_pane

0xe88d,	// (0x00056221) scroll_pane_cp23

0xb97e,	// (0x00053312) bg_button_pane_cp028_ParamLimits

0xb97e,	// (0x00053312) bg_button_pane_cp028

0xa732,	// (0x000520c6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa732,	// (0x000520c6) cmail_ddmenu_btn01_pane_g1

0xa73e,	// (0x000520d2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa73e,	// (0x000520d2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000577bc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000577bc) cmail_ddmenu_btn01_pane_g

0xe895,	// (0x00056229) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe895,	// (0x00056229) cmail_ddmenu_btn01_pane_t1

0xb97e,	// (0x00053312) bg_button_pane_cp029_ParamLimits

0xb97e,	// (0x00053312) bg_button_pane_cp029

0xa74a,	// (0x000520de) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa74a,	// (0x000520de) cmail_ddmenu_btn02_pane_g1

0xa763,	// (0x000520f7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa763,	// (0x000520f7) cmail_ddmenu_btn02_pane_t1

0x1353,	// (0x00048ce7) bg_button_pane_cp031_ParamLimits

0x1353,	// (0x00048ce7) bg_button_pane_cp031

0xa74a,	// (0x000520de) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa74a,	// (0x000520de) cmail_ddmenu_btn03_pane_g1

0xa763,	// (0x000520f7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa763,	// (0x000520f7) cmail_ddmenu_btn03_pane_t1

0x7e7b,	// (0x0004f80f) cell_dialer2_keypad_pane_t1_ParamLimits

0x7e95,	// (0x0004f829) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7e95,	// (0x0004f829) cell_dialer2_keypad_pane_t1_copy1

0x9a96,	// (0x0005142a) ncimui_group_button_pane

0x1353,	// (0x00048ce7) main_sp_fs_calendar_pane_ParamLimits

0xa42d,	// (0x00051dc1) list_single_cmail_header_caption_pane_ParamLimits

0xd2bc,	// (0x00054c50) aid_recal_txt_sm_pane

0xe113,	// (0x00055aa7) mian_recal_day_pane

0xd2f6,	// (0x00054c8a) popup_sp_fs_cale_preview_window_ParamLimits

0xe8aa,	// (0x0005623e) list_recal_day_pane

0xd3d8,	// (0x00054d6c) list_single_recal_day_pane_ParamLimits

0xd3d8,	// (0x00054d6c) list_single_recal_day_pane

0xe8d1,	// (0x00056265) list_single_recal_day_pane_g1_ParamLimits

0xe8d1,	// (0x00056265) list_single_recal_day_pane_g1

0xd3ea,	// (0x00054d7e) list_single_recal_day_pane_g2_ParamLimits

0xd3ea,	// (0x00054d7e) list_single_recal_day_pane_g2

0xd3f6,	// (0x00054d8a) list_single_recal_day_pane_g3_ParamLimits

0xd3f6,	// (0x00054d8a) list_single_recal_day_pane_g3

0x0fb9,	// (0x0004894d) list_single_recal_day_pane_g4_ParamLimits

0x0fb9,	// (0x0004894d) list_single_recal_day_pane_g4

0xd402,	// (0x00054d96) list_single_recal_day_pane_g5_ParamLimits

0xd402,	// (0x00054d96) list_single_recal_day_pane_g5

0xd40e,	// (0x00054da2) list_single_recal_day_pane_g6_ParamLimits

0xd40e,	// (0x00054da2) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000577cb) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000577cb) list_single_recal_day_pane_g

0xd422,	// (0x00054db6) list_single_recal_day_pane_t1

0xd434,	// (0x00054dc8) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000577d6) list_single_recal_day_pane_t

0xa787,	// (0x0005211b) ncimui_query_button_pane_ParamLimits

0xa787,	// (0x0005211b) ncimui_query_button_pane

0xa797,	// (0x0005212b) ncimui_query_button_pane_t1_ParamLimits

0xa797,	// (0x0005212b) ncimui_query_button_pane_t1

0xe8dd,	// (0x00056271) ncimui_query_button_pane_t2_ParamLimits

0xe8dd,	// (0x00056271) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000577db) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000577db) ncimui_query_button_pane_t

0xa7aa,	// (0x0005213e) query_button_pane_ParamLimits

0xa7aa,	// (0x0005213e) query_button_pane

0xe113,	// (0x00055aa7) bg_button_pane_cp0028

0xe8f0,	// (0x00056284) query_button_pane_t1

0x5f5c,	// (0x0004d8f0) main_tport_pane_ParamLimits

0xa2dc,	// (0x00051c70) bg_popup_window_pane_cp01_ParamLimits

0xa2dc,	// (0x00051c70) bg_popup_window_pane_cp01

0xa2f7,	// (0x00051c8b) heading_pane_cp08_ParamLimits

0xa2f7,	// (0x00051c8b) heading_pane_cp08

0xa30a,	// (0x00051c9e) heading_pane_cp07_ParamLimits

0xa30a,	// (0x00051c9e) heading_pane_cp07

0xa3b1,	// (0x00051d45) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00057727) cell_tport_appsw_pane_g

0xb3fd,	// (0x00052d91) input_candi_list_open_g1

0x3929,	// (0x0004b2bd) list_cale_time_pane_g6_ParamLimits

0x3929,	// (0x0004b2bd) list_cale_time_pane_g6

0x6d25,	// (0x0004e6b9) aid_size_touch_calib_1_ParamLimits

0x6d25,	// (0x0004e6b9) aid_size_touch_calib_1

0x6d37,	// (0x0004e6cb) aid_size_touch_calib_2_ParamLimits

0x6d37,	// (0x0004e6cb) aid_size_touch_calib_2

0x6d4f,	// (0x0004e6e3) aid_size_touch_calib_3_ParamLimits

0x6d4f,	// (0x0004e6e3) aid_size_touch_calib_3

0x6d6d,	// (0x0004e701) aid_size_touch_calib_4_ParamLimits

0x6d6d,	// (0x0004e701) aid_size_touch_calib_4

0x6d85,	// (0x0004e719) main_touch_calib_button_group_pane_ParamLimits

0x6d85,	// (0x0004e719) main_touch_calib_button_group_pane

0x6d9d,	// (0x0004e731) main_touch_calib_pane_g1_ParamLimits

0x6daf,	// (0x0004e743) main_touch_calib_pane_g2_ParamLimits

0x6dc1,	// (0x0004e755) main_touch_calib_pane_g3_ParamLimits

0x6dd3,	// (0x0004e767) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000570e5) main_touch_calib_pane_g_ParamLimits

0x6de5,	// (0x0004e779) main_touch_calib_pane_t1_ParamLimits

0x6dff,	// (0x0004e793) main_touch_calib_pane_t2_ParamLimits

0x6e19,	// (0x0004e7ad) main_touch_calib_pane_t3_ParamLimits

0x6e2d,	// (0x0004e7c1) main_touch_calib_pane_t4_ParamLimits

0x6e41,	// (0x0004e7d5) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000570ee) main_touch_calib_pane_t_ParamLimits

0xc26d,	// (0x00053c01) list_single_fp_cale_pane_g3_ParamLimits

0xc26d,	// (0x00053c01) list_single_fp_cale_pane_g3

0x1353,	// (0x00048ce7) bg_button_pane_cp012_ParamLimits

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp03_ParamLimits

0x8db8,	// (0x0005074c) cell_vitu2_function_top_pane_g1_ParamLimits

0x1353,	// (0x00048ce7) bg_vkb2_func_pane_cp04_ParamLimits

0x9a21,	// (0x000513b5) main_ncimui_button_group_pane_ParamLimits

0x9a21,	// (0x000513b5) main_ncimui_button_group_pane

0x9a81,	// (0x00051415) main_ncimui_pane_t3_ParamLimits

0x9a81,	// (0x00051415) main_ncimui_pane_t3

0xe6b6,	// (0x0005604a) phacti_button_group_pane

0xe879,	// (0x0005620d) aid_size_list_single_double_ParamLimits

0xa708,	// (0x0005209c) popup_ezdial_listscroll_window_ParamLimits

0xa724,	// (0x000520b8) popup_number_entry_window_cp01_ParamLimits

0xa7bd,	// (0x00052151) phacti_button_pane_ParamLimits

0xa7bd,	// (0x00052151) phacti_button_pane

0xe113,	// (0x00055aa7) bg_button_pane_cp14

0xe8fe,	// (0x00056292) phacti_button_pane_t1

0xa7ce,	// (0x00052162) main_touch_calib_button_pane_ParamLimits

0xa7ce,	// (0x00052162) main_touch_calib_button_pane

0x18ca,	// (0x0004925e) bg_button_pane_cp18_ParamLimits

0x18ca,	// (0x0004925e) bg_button_pane_cp18

0xe90c,	// (0x000562a0) main_touch_calib_button_pane_t1_ParamLimits

0xe90c,	// (0x000562a0) main_touch_calib_button_pane_t1

0xe922,	// (0x000562b6) main_touch_calib_button_pane_t2_ParamLimits

0xe922,	// (0x000562b6) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000577e0) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000577e0) main_touch_calib_button_pane_t

0xe113,	// (0x00055aa7) cell_ncimui_button_pane

0xe113,	// (0x00055aa7) bg_button_pane_cp032

0xe940,	// (0x000562d4) cell_ncimui_button_pane_t1

0xca72,	// (0x00054406) image3_infobar_pane_ParamLimits

0xca72,	// (0x00054406) image3_infobar_pane

0x9e96,	// (0x0005182a) fs_bigclock_status_pane_ParamLimits

0x9e96,	// (0x0005182a) fs_bigclock_status_pane

0x9ea3,	// (0x00051837) main_fs_bigclock_clock_pane_ParamLimits

0x9ea3,	// (0x00051837) main_fs_bigclock_clock_pane

0x9ec1,	// (0x00051855) main_fs_bigclock_indi_pane_ParamLimits

0x9ec1,	// (0x00051855) main_fs_bigclock_indi_pane

0x9ef3,	// (0x00051887) main_fs_bigclock_swipe_pane_ParamLimits

0x9ef3,	// (0x00051887) main_fs_bigclock_swipe_pane

0xe113,	// (0x00055aa7) main_fs_clock_dumped_data

0xdf4b,	// (0x000558df) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf4b,	// (0x000558df) list_single_fs_bigclock_indicator_pane_g1

0xdf66,	// (0x000558fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf66,	// (0x000558fa) list_single_fs_bigclock_indicator_pane_g2

0xdf80,	// (0x00055914) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf80,	// (0x00055914) list_single_fs_bigclock_indicator_pane_g3

0xdf9a,	// (0x0005592e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf9a,	// (0x0005592e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00057608) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00057608) list_single_fs_bigclock_indicator_pane_g

0xdfc5,	// (0x00055959) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfc5,	// (0x00055959) list_single_fs_bigclock_indicator_pane_t1

0xdfed,	// (0x00055981) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdfed,	// (0x00055981) list_single_fs_bigclock_indicator_pane_t2

0xe015,	// (0x000559a9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe015,	// (0x000559a9) list_single_fs_bigclock_indicator_pane_t3

0xe03d,	// (0x000559d1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe03d,	// (0x000559d1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00057613) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00057613) list_single_fs_bigclock_indicator_pane_t

0xe94e,	// (0x000562e2) image3_infobar_fav_pane_ParamLimits

0xe94e,	// (0x000562e2) image3_infobar_fav_pane

0xe95e,	// (0x000562f2) image3_infobar_loc_pane_ParamLimits

0xe95e,	// (0x000562f2) image3_infobar_loc_pane

0xe972,	// (0x00056306) image3_infobar_time_pane_ParamLimits

0xe972,	// (0x00056306) image3_infobar_time_pane

0xbe99,	// (0x0005382d) image3_infobar_time_pane_g1

0xe982,	// (0x00056316) image3_infobar_time_pane_t1

0xbe99,	// (0x0005382d) image3_infobar_loc_pane_g1

0xe990,	// (0x00056324) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000577e5) image3_infobar_loc_pane_g

0xe998,	// (0x0005632c) image3_infobar_loc_pane_t1

0xbe99,	// (0x0005382d) image3_infobar_fav_pane_g1

0xe9a6,	// (0x0005633a) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000577ea) image3_infobar_fav_pane_g

0xe9ae,	// (0x00056342) fs_bigclock_status_battery_pane

0xe9b7,	// (0x0005634b) fs_bigclock_status_signal_pane

0xe9c0,	// (0x00056354) fs_bigclock_status_title_pane

0xe9c9,	// (0x0005635d) fs_bigclock_status_signal_pane_g1

0xe9d2,	// (0x00056366) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000577ef) fs_bigclock_status_signal_pane_g

0xe9da,	// (0x0005636e) fs_bigclock_status_battery_pane_g1

0xe9e3,	// (0x00056377) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000577f4) fs_bigclock_status_battery_pane_g

0xe9eb,	// (0x0005637f) fs_bigclock_status_title_pane_t1

0xa7e3,	// (0x00052177) main_fs_bigclock_clock_pane_g1

0xa7e3,	// (0x00052177) main_fs_bigclock_clock_pane_g2

0xa7f4,	// (0x00052188) main_fs_bigclock_clock_pane_g3

0xa7f4,	// (0x00052188) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000577f9) main_fs_bigclock_clock_pane_g

0xa807,	// (0x0005219b) main_fs_bigclock_clock_pane_t1

0xa81d,	// (0x000521b1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00057802) main_fs_bigclock_clock_pane_t

0xe9f9,	// (0x0005638d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe9f9,	// (0x0005638d) list_single_fs_bigclock_indicator_pane

0xea0a,	// (0x0005639e) list_single_fs_bigclock_pane_ParamLimits

0xea0a,	// (0x0005639e) list_single_fs_bigclock_pane

0xea30,	// (0x000563c4) main_fs_bigclock_indicator_pane_t1

0xea3f,	// (0x000563d3) list_single_fs_bigclock_pane_g1

0xea47,	// (0x000563db) list_single_fs_bigclock_pane_t1

0xbe99,	// (0x0005382d) main_fs_bigclock_swipe_pane_g1

0xea8a,	// (0x0005641e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0005780e) main_fs_bigclock_swipe_pane_g

0xea92,	// (0x00056426) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xea92,	// (0x00056426) main_fs_bigclock_swipe_pane_t1

0x3c09,	// (0x0004b59d) call_type_pane_ParamLimits

0xe113,	// (0x00055aa7) main_btmg_pane

0xd341,	// (0x00054cd5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd341,	// (0x00054cd5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00057786) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00057786) list_single_cale_mrui_row_pane_g

0xd3c7,	// (0x00054d5b) list_recal_vselct_arw_lo_pane

0xe8c9,	// (0x0005625d) list_recal_vselct_arw_up_pane

0xd3cf,	// (0x00054d63) list_recal_vselct_pane

0xa877,	// (0x0005220b) btmg_button_pane

0xa881,	// (0x00052215) main_btmg_pane_g1

0xe113,	// (0x00055aa7) bg_button_pane_cp044

0xeaaf,	// (0x00056443) btmg_button_pane_t1

0xb96a,	// (0x000532fe) aid_listscroll_gen

0x1353,	// (0x00048ce7) main_cntbar_detail_pane

0xe602,	// (0x00055f96) list_cmail_folder_pane

0xb36c,	// (0x00052d00) sp_fs_scroll_pane_cp03_ParamLimits

0x0fd1,	// (0x00048965) list_single_fs_dyc_pane_cp01_ParamLimits

0x0fd1,	// (0x00048965) list_single_fs_dyc_pane_cp01

0xeabd,	// (0x00056451) aid_size_cmail_indent

0xd446,	// (0x00054dda) list_single_dyc_row_pane_cp01

0xa8bd,	// (0x00052251) cntbar_detail_list_pane_ParamLimits

0xa8bd,	// (0x00052251) cntbar_detail_list_pane

0xa909,	// (0x0005229d) main_cntbar_detail_cont_pane_ParamLimits

0xa909,	// (0x0005229d) main_cntbar_detail_cont_pane

0xb36c,	// (0x00052d00) scroll_pane_cp032_ParamLimits

0xb36c,	// (0x00052d00) scroll_pane_cp032

0xa91d,	// (0x000522b1) cntbar_detail_list_event_pane_ParamLimits

0xa91d,	// (0x000522b1) cntbar_detail_list_event_pane

0xa8cd,	// (0x00052261) cntbar_detail_list_shct_pane

0x2c04,	// (0x0004a598) aid_list_gen

0xeac6,	// (0x0005645a) aid_scroll

0xeacf,	// (0x00056463) aid_size_touch_scroll_bar

0x92f3,	// (0x00050c87) aid_list_double

0x92e1,	// (0x00050c75) aid_list_single

0x92e1,	// (0x00050c75) aid_list_single_lg

0x0fe7,	// (0x0004897b) aid_list_z_g_a_sm

0x0fef,	// (0x00048983) aid_list_z_g_d

0x0ff7,	// (0x0004898b) aid_txt_z_prm

0x1005,	// (0x00048999) aid_txt_z_prm_cp01

0x1013,	// (0x000489a7) aid_txt_z_sec

0xa92d,	// (0x000522c1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa92d,	// (0x000522c1) main_cntbar_detail_cont_pane_g1

0xa941,	// (0x000522d5) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa941,	// (0x000522d5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x00057813) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x00057813) main_cntbar_detail_cont_pane_g

0xead8,	// (0x0005646c) main_cntbar_detail_cont_pane_t1

0xeae6,	// (0x0005647a) main_cntbar_detail_cont_pane_t2

0xeaf4,	// (0x00056488) main_cntbar_detail_cont_pane_t3

0x0002,

0x0152,	// (0x00047ae6) main_cntbar_detail_cont_pane_t

0xa951,	// (0x000522e5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa951,	// (0x000522e5) cell_cntbar_detail_list_shct_pane

0xeb02,	// (0x00056496) cntbar_detail_list_shct_pane_g1

0xeb0b,	// (0x0005649f) cntbar_detail_list_shct_pane_g2

0x0001,

0x0159,	// (0x00047aed) cntbar_detail_list_shct_pane_g

0xa965,	// (0x000522f9) cntbar_detail_list_event_pane_g1_ParamLimits

0xa965,	// (0x000522f9) cntbar_detail_list_event_pane_g1

0xa971,	// (0x00052305) cntbar_detail_list_event_pane_g2_ParamLimits

0xa971,	// (0x00052305) cntbar_detail_list_event_pane_g2

0x0005,

0xfe84,	// (0x00057818) cntbar_detail_list_event_pane_g_ParamLimits

0xfe84,	// (0x00057818) cntbar_detail_list_event_pane_g

0xa9dd,	// (0x00052371) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9dd,	// (0x00052371) cntbar_detail_list_event_pane_t1

0xa9f2,	// (0x00052386) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9f2,	// (0x00052386) cntbar_detail_list_event_pane_t2

0x0002,

0xfe91,	// (0x00057825) cntbar_detail_list_event_pane_t_ParamLimits

0xfe91,	// (0x00057825) cntbar_detail_list_event_pane_t

0xbe99,	// (0x0005382d) cell_cntbar_detail_list_shct_pane_g1

0x4228,	// (0x0004bbbc) navi_pane_mv_g3

0x1353,	// (0x00048ce7) main_cntbar_detail_pane_ParamLimits

0xe113,	// (0x00055aa7) main_notif_wgt_pane

0xc804,	// (0x00054198) aid_tch_main_mp4_pane_g4

0xca06,	// (0x0005439a) popup_slider_window_cp02

0xd3bd,	// (0x00054d51) list_recal_day_event_pane

0xa88b,	// (0x0005221f) cntbar_detail_btn_pane_ParamLimits

0xa88b,	// (0x0005221f) cntbar_detail_btn_pane

0xa8a4,	// (0x00052238) cntbar_detail_btn_pane_cp01_ParamLimits

0xa8a4,	// (0x00052238) cntbar_detail_btn_pane_cp01

0xa8cd,	// (0x00052261) cntbar_detail_list_shct_pane_ParamLimits

0xa8dd,	// (0x00052271) cntbar_detail_pane_g1_ParamLimits

0xa8dd,	// (0x00052271) cntbar_detail_pane_g1

0xa8ed,	// (0x00052281) cntbar_detail_pane_t1_ParamLimits

0xa8ed,	// (0x00052281) cntbar_detail_pane_t1

0xa97d,	// (0x00052311) cntbar_detail_list_event_pane_g3_ParamLimits

0xa97d,	// (0x00052311) cntbar_detail_list_event_pane_g3

0xa995,	// (0x00052329) cntbar_detail_list_event_pane_g4_ParamLimits

0xa995,	// (0x00052329) cntbar_detail_list_event_pane_g4

0xa9ad,	// (0x00052341) cntbar_detail_list_event_pane_g5_ParamLimits

0xa9ad,	// (0x00052341) cntbar_detail_list_event_pane_g5

0xa9c5,	// (0x00052359) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9c5,	// (0x00052359) cntbar_detail_list_event_pane_g6

0xaa07,	// (0x0005239b) cntbar_detail_list_event_pane_t3_ParamLimits

0xaa07,	// (0x0005239b) cntbar_detail_list_event_pane_t3

0xaa19,	// (0x000523ad) popup_notif_wgt_window_ParamLimits

0xaa19,	// (0x000523ad) popup_notif_wgt_window

0xaa32,	// (0x000523c6) popup_submenu_window_cp01_ParamLimits

0xaa32,	// (0x000523c6) popup_submenu_window_cp01

0x21a7,	// (0x00049b3b) bg_popup_window_pane_cp10

0xeb14,	// (0x000564a8) listscroll_notif_wgt_pane

0xeb26,	// (0x000564ba) list_notif_wgt_window

0xeb2f,	// (0x000564c3) scroll_pane_cp033

0xaa48,	// (0x000523dc) list_notif_wgt_row_pane_ParamLimits

0xaa48,	// (0x000523dc) list_notif_wgt_row_pane

0xeb38,	// (0x000564cc) aid_size_list_notif_wgt_del

0xeb45,	// (0x000564d9) list_notif_wgt_row_pane_g1

0xeb51,	// (0x000564e5) list_notif_wgt_row_pane_g2

0xeb60,	// (0x000564f4) list_notif_wgt_row_pane_g3

0x0002,

0x0172,	// (0x00047b06) list_notif_wgt_row_pane_g

0xeb6d,	// (0x00056501) list_notif_wgt_row_pane_t1

0xeb83,	// (0x00056517) list_notif_wgt_row_pane_t2

0xeb95,	// (0x00056529) list_notif_wgt_row_pane_t3

0x0002,

0x0179,	// (0x00047b0d) list_notif_wgt_row_pane_t

0xd477,	// (0x00054e0b) list_recal_day_event_pane_g1

0xeba7,	// (0x0005653b) list_recal_day_event_pane_t1

0xe113,	// (0x00055aa7) bg_button_pane_cp045

0xaa58,	// (0x000523ec) cntbar_detail_btn_pane_t1

0xb97e,	// (0x00053312) main_callh_pane_ParamLimits

0xb97e,	// (0x00053312) main_callh_pane

0xe113,	// (0x00055aa7) main_coverflow0_pane

0xe113,	// (0x00055aa7) main_wgtman_pane

0x9f0b,	// (0x0005189f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f0b,	// (0x0005189f) main_fs_bigclock_unlock_btn_pane

0xa3a9,	// (0x00051d3d) bg_button_pane_cp16

0xa3b9,	// (0x00051d4d) cell_tport_appsw_pane_g3

0xaa66,	// (0x000523fa) cf0_flow_pane_ParamLimits

0xaa66,	// (0x000523fa) cf0_flow_pane

0xebb6,	// (0x0005654a) listscroll_cf0_pane

0xebc1,	// (0x00056555) main_cf0_pane_g1

0xaa7b,	// (0x0005240f) main_cf0_pane_t1_ParamLimits

0xaa7b,	// (0x0005240f) main_cf0_pane_t1

0xaa92,	// (0x00052426) main_cf0_pane_t2_ParamLimits

0xaa92,	// (0x00052426) main_cf0_pane_t2

0x0001,

0xfe98,	// (0x0005782c) main_cf0_pane_t_ParamLimits

0xfe98,	// (0x0005782c) main_cf0_pane_t

0xebd3,	// (0x00056567) scroll_pane_cp11

0xaaa9,	// (0x0005243d) cf0_flow_pane_g1

0xaab1,	// (0x00052445) cf0_flow_pane_g2

0x0001,

0xfe9d,	// (0x00057831) cf0_flow_pane_g

0xaab9,	// (0x0005244d) cf0_flow_pane_t1

0xe113,	// (0x00055aa7) main_call6_pane

0xe113,	// (0x00055aa7) main_calllock_pane

0xaac7,	// (0x0005245b) call6_btn_grp_pane_ParamLimits

0xaac7,	// (0x0005245b) call6_btn_grp_pane

0xaae1,	// (0x00052475) call6_pane_g1_ParamLimits

0xaae1,	// (0x00052475) call6_pane_g1

0xaaf6,	// (0x0005248a) popup_call6_1st_window_ParamLimits

0xaaf6,	// (0x0005248a) popup_call6_1st_window

0xab07,	// (0x0005249b) popup_call6_2nd_window_ParamLimits

0xab07,	// (0x0005249b) popup_call6_2nd_window

0xab18,	// (0x000524ac) cell_call6_btn_pane_ParamLimits

0xab18,	// (0x000524ac) cell_call6_btn_pane

0x21a7,	// (0x00049b3b) bg_popup_call2_in_pane_cp03

0xebde,	// (0x00056572) popup_call6_1st_window_g1

0xebe6,	// (0x0005657a) popup_call6_1st_window_g2

0xebee,	// (0x00056582) popup_call6_1st_window_g3

0x0002,

0x018f,	// (0x00047b23) popup_call6_1st_window_g

0xebf6,	// (0x0005658a) popup_call6_1st_window_t1

0xec05,	// (0x00056599) popup_call6_1st_window_t2

0xec15,	// (0x000565a9) popup_call6_1st_window_t3

0x0002,

0x0196,	// (0x00047b2a) popup_call6_1st_window_t

0x21a7,	// (0x00049b3b) bg_popup_call2_in_pane_cp04

0xebde,	// (0x00056572) popup_call6_2nd_window_g1

0xebe6,	// (0x0005657a) popup_call6_2nd_window_g2

0xebee,	// (0x00056582) popup_call6_2nd_window_g3

0x0002,

0x018f,	// (0x00047b23) popup_call6_2nd_window_g

0xebf6,	// (0x0005658a) popup_call6_2nd_window_t1

0xe113,	// (0x00055aa7) bg_button_pane_cp15

0xec25,	// (0x000565b9) cell_call6_btn_pane_g1

0xec2e,	// (0x000565c2) cell_call6_btn_pane_t1

0xab2c,	// (0x000524c0) listscroll_wgtman_pane_ParamLimits

0xab2c,	// (0x000524c0) listscroll_wgtman_pane

0xab4d,	// (0x000524e1) wgtman_btn_pane_ParamLimits

0xab4d,	// (0x000524e1) wgtman_btn_pane

0x3e63,	// (0x0004b7f7) aid_scroll_copy1

0xec3d,	// (0x000565d1) list_wgtman_pane

0xab90,	// (0x00052524) wgtman_btn_pane_g1_ParamLimits

0xab90,	// (0x00052524) wgtman_btn_pane_g1

0xabbc,	// (0x00052550) wgtman_btn_pane_t1_ParamLimits

0xabbc,	// (0x00052550) wgtman_btn_pane_t1

0xec47,	// (0x000565db) wgtman_btn_pane_t2_ParamLimits

0xec47,	// (0x000565db) wgtman_btn_pane_t2

0x0001,

0xfea2,	// (0x00057836) wgtman_btn_pane_t_ParamLimits

0xfea2,	// (0x00057836) wgtman_btn_pane_t

0xabf9,	// (0x0005258d) listrow_wgtman_pane_ParamLimits

0xabf9,	// (0x0005258d) listrow_wgtman_pane

0xac0b,	// (0x0005259f) listrow_wgtman_pane_g1

0xac18,	// (0x000525ac) listrow_wgtman_pane_g2

0x0001,

0xfea7,	// (0x0005783b) listrow_wgtman_pane_g

0x1021,	// (0x000489b5) listrow_wgtman_pane_t1

0x1039,	// (0x000489cd) listrow_wgtman_pane_t2

0x0001,

0xfeac,	// (0x00057840) listrow_wgtman_pane_t

0x105f,	// (0x000489f3) wait_bar_pane_cp09

0xec5e,	// (0x000565f2) main_calllock_btn_pane

0xec68,	// (0x000565fc) main_calllock_pane_g1

0xe113,	// (0x00055aa7) bg_button_pane_cp17

0xec74,	// (0x00056608) main_calllock_btn_pane_g1

0xec7d,	// (0x00056611) main_calllock_btn_pane_t1

0xe113,	// (0x00055aa7) main_dialer3_pane

0xe113,	// (0x00055aa7) main_fmrd2_pane

0xbe99,	// (0x0005382d) main_fs_bigclock_unlock_btn_pane_g1

0xac3e,	// (0x000525d2) main_fs_bigclock_unlock_btn_pane_t1

0xac4c,	// (0x000525e0) area_fmrd2_info_pane_ParamLimits

0xac4c,	// (0x000525e0) area_fmrd2_info_pane

0xac5d,	// (0x000525f1) area_fmrd2_visual_pane_ParamLimits

0xac5d,	// (0x000525f1) area_fmrd2_visual_pane

0xac6b,	// (0x000525ff) fmrd2_indi_pane_ParamLimits

0xac6b,	// (0x000525ff) fmrd2_indi_pane

0xac78,	// (0x0005260c) area_fmrd2_visual_pane_g1

0xac80,	// (0x00052614) area_fmrd2_visual_pane_t1

0xac90,	// (0x00052624) area_fmrd2_visual_pane_t2

0xaca0,	// (0x00052634) area_fmrd2_visual_pane_t3

0x0002,

0xfeb6,	// (0x0005784a) area_fmrd2_visual_pane_t

0xacb0,	// (0x00052644) area_fmrd2_info_pane_g1

0xacb8,	// (0x0005264c) area_fmrd2_info_pane_t1

0xacc8,	// (0x0005265c) area_fmrd2_info_pane_t2

0xacd8,	// (0x0005266c) area_fmrd2_info_pane_t3

0xace8,	// (0x0005267c) area_fmrd2_info_pane_t4

0x0003,

0xfebd,	// (0x00057851) area_fmrd2_info_pane_t

0xacf6,	// (0x0005268a) fmrd2_indi_pane_t1

0xad06,	// (0x0005269a) fmrd2_indi_pane_t2

0xad16,	// (0x000526aa) fmrd2_indi_pane_t3

0x0002,

0xfec6,	// (0x0005785a) fmrd2_indi_pane_t

0xdfa9,	// (0x0005593d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdfa9,	// (0x0005593d) list_single_fs_bigclock_indicator_pane_g5

0xe05a,	// (0x000559ee) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe05a,	// (0x000559ee) list_single_fs_bigclock_indicator_pane_t5

0xa52c,	// (0x00051ec0) aid_cell_bcale_month_pane_ParamLimits

0xa52c,	// (0x00051ec0) aid_cell_bcale_month_pane

0xa54a,	// (0x00051ede) bcale_month_pane_ParamLimits

0xa54a,	// (0x00051ede) bcale_month_pane

0xa56e,	// (0x00051f02) bcale_preview_pane_ParamLimits

0xa56e,	// (0x00051f02) bcale_preview_pane

0xea47,	// (0x000563db) list_single_fs_bigclock_pane_t1_ParamLimits

0xea66,	// (0x000563fa) list_single_fs_bigclock_pane_t2_ParamLimits

0xea66,	// (0x000563fa) list_single_fs_bigclock_pane_t2

0x0001,

0x0143,	// (0x00047ad7) list_single_fs_bigclock_pane_t_ParamLimits

0x0143,	// (0x00047ad7) list_single_fs_bigclock_pane_t

0xac36,	// (0x000525ca) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeb1,	// (0x00057845) main_fs_bigclock_unlock_btn_pane_g

0xad26,	// (0x000526ba) aid_dia3_key_size_ParamLimits

0xad26,	// (0x000526ba) aid_dia3_key_size

0xad35,	// (0x000526c9) aid_dia3_listrow_size_ParamLimits

0xad35,	// (0x000526c9) aid_dia3_listrow_size

0xad4a,	// (0x000526de) dia3_keypad_fun_pane_ParamLimits

0xad4a,	// (0x000526de) dia3_keypad_fun_pane

0xad66,	// (0x000526fa) dia3_keypad_num_pane_ParamLimits

0xad66,	// (0x000526fa) dia3_keypad_num_pane

0xad81,	// (0x00052715) dia3_listscroll_pane_ParamLimits

0xad81,	// (0x00052715) dia3_listscroll_pane

0xad94,	// (0x00052728) dia3_numentry_pane_ParamLimits

0xad94,	// (0x00052728) dia3_numentry_pane

0xec8c,	// (0x00056620) dia3_list_pane

0xec97,	// (0x0005662b) scroll_pane_cp12

0xe113,	// (0x00055aa7) bg_dia3_numentry_pane

0xada8,	// (0x0005273c) dia3_numentry_pane_t1

0xadb7,	// (0x0005274b) cell_dia3_key_num_pane

0xadbf,	// (0x00052753) cell_dia3_key0_fun_pane_ParamLimits

0xadbf,	// (0x00052753) cell_dia3_key0_fun_pane

0xadd3,	// (0x00052767) cell_dia3_key1_fun_pane_ParamLimits

0xadd3,	// (0x00052767) cell_dia3_key1_fun_pane

0xadeb,	// (0x0005277f) dia3_listrow_pane

0xdcee,	// (0x00055682) bg_dia3_numentry_pane_g1

0xe113,	// (0x00055aa7) bg_button_pane_cp21

0xeca2,	// (0x00056636) cell_dia3_key_num_pane_t1

0xecb0,	// (0x00056644) cell_dia3_key_num_pane_t2

0xecbf,	// (0x00056653) cell_dia3_key_num_pane_t3

0xecce,	// (0x00056662) cell_dia3_key_num_pane_t4

0x0003,

0x01c8,	// (0x00047b5c) cell_dia3_key_num_pane_t

0xe113,	// (0x00055aa7) bg_button_pane_cp19

0xadfd,	// (0x00052791) cell_dia3_key0_fun_pane_g1

0xe113,	// (0x00055aa7) bg_button_pane_cp20

0xae05,	// (0x00052799) cell_dia3_key1_fun_pane_g1

0xae0d,	// (0x000527a1) area_left_week_number_pane

0xae19,	// (0x000527ad) area_top_day_name_pane

0xae2c,	// (0x000527c0) frame_month_view_pane

0xecdd,	// (0x00056671) grid_month_view_pane

0xae3f,	// (0x000527d3) cell_top_day_name_pane_ParamLimits

0xae3f,	// (0x000527d3) cell_top_day_name_pane

0xae6c,	// (0x00052800) cell_area_left_week_number_pane_ParamLimits

0xae6c,	// (0x00052800) cell_area_left_week_number_pane

0xae80,	// (0x00052814) cell_month_view_pane_ParamLimits

0xae80,	// (0x00052814) cell_month_view_pane

0xeceb,	// (0x0005667f) frm_month_g1

0xaead,	// (0x00052841) frm_month_g2

0xaec0,	// (0x00052854) frm_month_g3

0xaed3,	// (0x00052867) frm_month_g4

0xaee6,	// (0x0005287a) frm_month_g5

0xaef9,	// (0x0005288d) frm_month_g6

0xaf0c,	// (0x000528a0) frm_month_g7

0xecf8,	// (0x0005668c) frm_month_g8

0xaf1f,	// (0x000528b3) frm_month_g9

0xaf2f,	// (0x000528c3) frm_month_g10

0xaf3f,	// (0x000528d3) frm_month_g11

0xaf4f,	// (0x000528e3) frm_month_g12

0xaf61,	// (0x000528f5) frm_month_g13

0xaf73,	// (0x00052907) frm_month_g14

0xaf87,	// (0x0005291b) frm_month_g15

0xaf9b,	// (0x0005292f) frm_month_g16

0x000f,

0xfecd,	// (0x00057861) frm_month_g

0xed05,	// (0x00056699) cell_top_day_name_pane_t1

0xafaf,	// (0x00052943) cell_area_left_week_number_pane_g1

0xafbb,	// (0x0005294f) cell_area_left_week_number_pane_t1

0xc105,	// (0x00053a99) cell_month_view_pane_g1

0xafce,	// (0x00052962) cell_month_view_pane_t1

0xe113,	// (0x00055aa7) main_fps_pane

0xe51a,	// (0x00055eae) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe51a,	// (0x00055eae) cmail_ddmenu_btn02_pane_cp1

0xe536,	// (0x00055eca) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe536,	// (0x00055eca) cmail_ddmenu_btn02_pane_cp2

0xa756,	// (0x000520ea) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa756,	// (0x000520ea) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000577c1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000577c1) cmail_ddmenu_btn02_pane_g

0xa775,	// (0x00052109) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa775,	// (0x00052109) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000577c6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000577c6) cmail_ddmenu_btn02_pane_t

0xafe1,	// (0x00052975) fps_text_pane_ParamLimits

0xafe1,	// (0x00052975) fps_text_pane

0xaff8,	// (0x0005298c) main_fps_pane_g1_ParamLimits

0xaff8,	// (0x0005298c) main_fps_pane_g1

0xb012,	// (0x000529a6) wait_bar_pane_cp010_ParamLimits

0xb012,	// (0x000529a6) wait_bar_pane_cp010

0xb023,	// (0x000529b7) fps_text_pane_t1_ParamLimits

0xb023,	// (0x000529b7) fps_text_pane_t1

0xe3c9,	// (0x00055d5d) cam4_image_uncrop_pane_g1

0xe3d2,	// (0x00055d66) cam4_image_uncrop_pane_g2

0x8321,	// (0x0004fcb5) cam4_image_uncrop_pane_g3

0x832a,	// (0x0004fcbe) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00057282) cam4_image_uncrop_pane_g

0xadeb,	// (0x0005277f) dia3_listrow_pane_ParamLimits

0xe113,	// (0x00055aa7) main_phob2_pane

0xa37a,	// (0x00051d0e) cell_tport_appsw_pane_cp02_ParamLimits

0xa37a,	// (0x00051d0e) cell_tport_appsw_pane_cp02

0xa38e,	// (0x00051d22) cell_tport_appsw_pane_cp03_ParamLimits

0xa38e,	// (0x00051d22) cell_tport_appsw_pane_cp03

0xe113,	// (0x00055aa7) phob2_contact_card_pane

0xe113,	// (0x00055aa7) phob2_listscroll_pane

0xed18,	// (0x000566ac) phob2_list_pane

0xed20,	// (0x000566b4) scroll_pane_cp034

0xb03b,	// (0x000529cf) phob2_cc_data_pane_ParamLimits

0xb03b,	// (0x000529cf) phob2_cc_data_pane

0xb05a,	// (0x000529ee) phob2_cc_listscroll_pane_ParamLimits

0xb05a,	// (0x000529ee) phob2_cc_listscroll_pane

0xabf9,	// (0x0005258d) list_double_large_graphic_phob2_pane_ParamLimits

0xabf9,	// (0x0005258d) list_double_large_graphic_phob2_pane

0xb078,	// (0x00052a0c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb078,	// (0x00052a0c) list_double_large_graphic_phob2_pane_g1

0x1071,	// (0x00048a05) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1071,	// (0x00048a05) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeee,	// (0x00057882) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeee,	// (0x00057882) list_double_large_graphic_phob2_pane_g

0x107d,	// (0x00048a11) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x107d,	// (0x00048a11) list_double_large_graphic_phob2_pane_t1

0x1092,	// (0x00048a26) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1092,	// (0x00048a26) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfef3,	// (0x00057887) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfef3,	// (0x00057887) list_double_large_graphic_phob2_pane_t

0xe113,	// (0x00055aa7) list_highlight_pane_cp024

0xb08e,	// (0x00052a22) phob2_cc_button_pane

0xb096,	// (0x00052a2a) phob2_cc_data_pane_g1_ParamLimits

0xb096,	// (0x00052a2a) phob2_cc_data_pane_g1

0xb0ab,	// (0x00052a3f) phob2_cc_data_pane_g2_ParamLimits

0xb0ab,	// (0x00052a3f) phob2_cc_data_pane_g2

0x0001,

0xfef8,	// (0x0005788c) phob2_cc_data_pane_g_ParamLimits

0xfef8,	// (0x0005788c) phob2_cc_data_pane_g

0xb0bb,	// (0x00052a4f) phob2_cc_data_pane_t1_ParamLimits

0xb0bb,	// (0x00052a4f) phob2_cc_data_pane_t1

0xb0d3,	// (0x00052a67) phob2_cc_data_pane_t2_ParamLimits

0xb0d3,	// (0x00052a67) phob2_cc_data_pane_t2

0xb0eb,	// (0x00052a7f) phob2_cc_data_pane_t3_ParamLimits

0xb0eb,	// (0x00052a7f) phob2_cc_data_pane_t3

0x0002,

0xfefd,	// (0x00057891) phob2_cc_data_pane_t_ParamLimits

0xfefd,	// (0x00057891) phob2_cc_data_pane_t

0xed28,	// (0x000566bc) phob2_cc_list_pane_ParamLimits

0xed28,	// (0x000566bc) phob2_cc_list_pane

0xd520,	// (0x00054eb4) scroll_pane_cp035_ParamLimits

0xd520,	// (0x00054eb4) scroll_pane_cp035

0x1353,	// (0x00048ce7) bg_button_pane_cp033

0xed34,	// (0x000566c8) phob2_cc_button_pane_g1

0xed40,	// (0x000566d4) phob2_cc_button_pane_t1

0xed55,	// (0x000566e9) phob2_cc_button_pane_t2

0x0001,

0x0208,	// (0x00047b9c) phob2_cc_button_pane_t

0xb103,	// (0x00052a97) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb103,	// (0x00052a97) list_double_large_graphic_phob2_cc_pane

0xb115,	// (0x00052aa9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb115,	// (0x00052aa9) list_double_large_graphic_phob2_cc_pane_g1

0x10a4,	// (0x00048a38) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x10a4,	// (0x00048a38) list_double_large_graphic_phob2_cc_pane_g2

0x10b0,	// (0x00048a44) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x10b0,	// (0x00048a44) list_double_large_graphic_phob2_cc_pane_g3

0x10bc,	// (0x00048a50) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x10bc,	// (0x00048a50) list_double_large_graphic_phob2_cc_pane_g4

0xd44f,	// (0x00054de3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd44f,	// (0x00054de3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff04,	// (0x00057898) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff04,	// (0x00057898) list_double_large_graphic_phob2_cc_pane_g

0x10c8,	// (0x00048a5c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x10c8,	// (0x00048a5c) list_double_large_graphic_phob2_cc_pane_t1

0x10f1,	// (0x00048a85) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10f1,	// (0x00048a85) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff0f,	// (0x000578a3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff0f,	// (0x000578a3) list_double_large_graphic_phob2_cc_pane_t

0xed67,	// (0x000566fb) list_highlight_pane_cp025_ParamLimits

0xed67,	// (0x000566fb) list_highlight_pane_cp025

0x1353,	// (0x00048ce7) bg_button_pane_cp033_ParamLimits

0xed34,	// (0x000566c8) phob2_cc_button_pane_g1_ParamLimits

0xed40,	// (0x000566d4) phob2_cc_button_pane_t1_ParamLimits

0xed55,	// (0x000566e9) phob2_cc_button_pane_t2_ParamLimits

0x0208,	// (0x00047b9c) phob2_cc_button_pane_t_ParamLimits

0x1361,	// (0x00048cf5) popup_wgtman_window

0xce24,	// (0x000547b8) scroll_pane_cp038

0xab72,	// (0x00052506) wgtman_btn_pane_cp_01_ParamLimits

0xab72,	// (0x00052506) wgtman_btn_pane_cp_01

0xed75,	// (0x00056709) wgtman_content_pane

0xed7e,	// (0x00056712) wgtman_heading_pane

0xe113,	// (0x00055aa7) bg_heading_pane_cp02

0xf002,	// (0x00056996) wgtman_heading_pane_g1

0xf00a,	// (0x0005699e) wgtman_heading_pane_t1

0xf018,	// (0x000569ac) scroll_pane_cp036

0xf020,	// (0x000569b4) wgtman_list_pane

0xf028,	// (0x000569bc) wgtman_list_pane_t1_ParamLimits

0xf028,	// (0x000569bc) wgtman_list_pane_t1

0xcba7,	// (0x0005453b) cam4_grid_pane

0x0695,	// (0x00048029) bg_button_pane_cp015_ParamLimits

0x8f48,	// (0x000508dc) bg_button_pane_cp016_ParamLimits

0x8f5b,	// (0x000508ef) bg_button_pane_cp017_ParamLimits

0x06db,	// (0x0004806f) popup_vitu2_query_window_g3_ParamLimits

0x06db,	// (0x0004806f) popup_vitu2_query_window_g3

0x0756,	// (0x000480ea) popup_vitu2_query_window_t6_ParamLimits

0x0756,	// (0x000480ea) popup_vitu2_query_window_t6

0x0781,	// (0x00048115) popup_vitu2_query_window_t7_ParamLimits

0x0781,	// (0x00048115) popup_vitu2_query_window_t7

0xe3c9,	// (0x00055d5d) cam4_grid_pane_g1

0xe3d2,	// (0x00055d66) cam4_grid_pane_g2

0xf042,	// (0x000569d6) cam4_grid_pane_g3

0xf04b,	// (0x000569df) cam4_grid_pane_g4

0x0003,

0xff14,	// (0x000578a8) cam4_grid_pane_g

0x2600,	// (0x00049f94) aid_placing_vt_slider_lsc_ParamLimits

0x295b,	// (0x0004a2ef) vidtel_button_pane_ParamLimits

0x295b,	// (0x0004a2ef) vidtel_button_pane

0xe113,	// (0x00055aa7) bg_button_pane_cp034

0xb121,	// (0x00052ab5) vidtel_button_pane_g1

0xf056,	// (0x000569ea) vidtel_button_pane_t1

0xcf91,	// (0x00054925) aid_size_vtel_slider_touch

0xd520,	// (0x00054eb4) scroll_pane_cp039

0x9bff,	// (0x00051593) ncim_query_button_pane_cp01_ParamLimits

0x9c1e,	// (0x000515b2) ncimui_query_pane_g1_ParamLimits

0x1353,	// (0x00048ce7) input_focus_pane_cp012_ParamLimits

0xdd2c,	// (0x000556c0) ncim_query_entry_pane_t1_ParamLimits

0xd520,	// (0x00054eb4) scroll_pane_cp039_ParamLimits

0x4113,	// (0x0004baa7) navi_pane_bcale_mc_g1

0x411b,	// (0x0004baaf) navi_pane_bcale_mc_t1

0xe57f,	// (0x00055f13) main_sp_fs_email_pane_g1

0xe58b,	// (0x00055f1f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00057679) main_sp_fs_email_pane_g

0xe7d3,	// (0x00056167) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe7d3,	// (0x00056167) list_single_cale_mrui_row_pane_g3

0x0fc7,	// (0x0004895b) list_single_recal_day_pane_g5_event_pane

0xd41a,	// (0x00054dae) list_single_recal_day_pane_g7

0xf06c,	// (0x00056a00) list_recal_day_event_pane_cp01

0xf075,	// (0x00056a09) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x00056a11) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x00056a19) list_recal_vselct_pane_cp01

0xd477,	// (0x00054e0b) list_recal_day_event_pane_cp01_g1

0xd45b,	// (0x00054def) list_recal_day_event_pane_cp01_t1

0xd422,	// (0x00054db6) list_single_recal_day_pane_t1_ParamLimits

0xd434,	// (0x00054dc8) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000577d6) list_single_recal_day_pane_t_ParamLimits

0x155e,	// (0x00048ef2) bg_notes_pane_ParamLimits

0x1894,	// (0x00049228) list_notes_pane_ParamLimits

0x18a2,	// (0x00049236) scroll_pane_cp06_ParamLimits

0x18ca,	// (0x0004925e) main_notes_pane_ParamLimits

0xe113,	// (0x00055aa7) main_welc_pane

0xb129,	// (0x00052abd) main_welc_body_pane_ParamLimits

0xb129,	// (0x00052abd) main_welc_body_pane

0xb147,	// (0x00052adb) main_welc_opti_pane_ParamLimits

0xb147,	// (0x00052adb) main_welc_opti_pane

0xb18c,	// (0x00052b20) main_welc_pane_t1_ParamLimits

0xb18c,	// (0x00052b20) main_welc_pane_t1

0xb1aa,	// (0x00052b3e) main_welc_body_row_pane_ParamLimits

0xb1aa,	// (0x00052b3e) main_welc_body_row_pane

0xd469,	// (0x00054dfd) main_welc_opti_row_pane_ParamLimits

0xd469,	// (0x00054dfd) main_welc_opti_row_pane

0xf08f,	// (0x00056a23) main_welc_opti_row_pane_g1

0xb1be,	// (0x00052b52) main_welc_opti_row_pane_t1

0xf097,	// (0x00056a2b) main_welc_body_row_pane_t1

0xeb1e,	// (0x000564b2) popup_notif_wgt_heading_pane

0xeb38,	// (0x000564cc) aid_size_list_notif_wgt_del_ParamLimits

0xeb45,	// (0x000564d9) list_notif_wgt_row_pane_g1_ParamLimits

0xeb51,	// (0x000564e5) list_notif_wgt_row_pane_g2_ParamLimits

0xeb60,	// (0x000564f4) list_notif_wgt_row_pane_g3_ParamLimits

0x0172,	// (0x00047b06) list_notif_wgt_row_pane_g_ParamLimits

0xeb6d,	// (0x00056501) list_notif_wgt_row_pane_t1_ParamLimits

0xeb83,	// (0x00056517) list_notif_wgt_row_pane_t2_ParamLimits

0xeb95,	// (0x00056529) list_notif_wgt_row_pane_t3_ParamLimits

0x0179,	// (0x00047b0d) list_notif_wgt_row_pane_t_ParamLimits

0xac0b,	// (0x0005259f) listrow_wgtman_pane_g1_ParamLimits

0xac18,	// (0x000525ac) listrow_wgtman_pane_g2_ParamLimits

0xfea7,	// (0x0005783b) listrow_wgtman_pane_g_ParamLimits

0x1021,	// (0x000489b5) listrow_wgtman_pane_t1_ParamLimits

0x1039,	// (0x000489cd) listrow_wgtman_pane_t2_ParamLimits

0xfeac,	// (0x00057840) listrow_wgtman_pane_t_ParamLimits

0x105f,	// (0x000489f3) wait_bar_pane_cp09_ParamLimits

0xe113,	// (0x00055aa7) bg_popup_heading_pane_cp02

0xf0a6,	// (0x00056a3a) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x00056a42) popup_notif_wgt_heading_pane_t1

0xe113,	// (0x00055aa7) main_vids_pane

0xe113,	// (0x00055aa7) vids_listscroll_pane

0xb1cd,	// (0x00052b61) scroll_pane_cp040

0xe113,	// (0x00055aa7) vids_list_pane

0xb1d8,	// (0x00052b6c) vids_list_double_pane_ParamLimits

0xb1d8,	// (0x00052b6c) vids_list_double_pane

0xb1e9,	// (0x00052b7d) vids_list_double_pane_g1

0xb1f2,	// (0x00052b86) vids_list_double_pane_t1

0xb202,	// (0x00052b96) vids_list_double_pane_t2

0x0001,

0xff22,	// (0x000578b6) vids_list_double_pane_t

0x1353,	// (0x00048ce7) main_ncimui_pane_ParamLimits

0x9a35,	// (0x000513c9) main_ncimui_pane_g1_ParamLimits

0x9a41,	// (0x000513d5) main_ncimui_pane_g2_ParamLimits

0x9a41,	// (0x000513d5) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005757e) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005757e) main_ncimui_pane_g

0xb162,	// (0x00052af6) main_welc_pane_g1_ParamLimits

0xb162,	// (0x00052af6) main_welc_pane_g1

0xb177,	// (0x00052b0b) main_welc_pane_g2_ParamLimits

0xb177,	// (0x00052b0b) main_welc_pane_g2

0x0001,

0xff1d,	// (0x000578b1) main_welc_pane_g_ParamLimits

0xff1d,	// (0x000578b1) main_welc_pane_g

0x155e,	// (0x00048ef2) listscroll_mce_pane_ParamLimits

0x42aa,	// (0x0004bc3e) wait_bar_pane_cp10

0xb972,	// (0x00053306) main_cale_day_pane_ParamLimits

0xb972,	// (0x00053306) main_cale_week_pane_ParamLimits

0x155e,	// (0x00048ef2) main_messa_pane_ParamLimits

0x765d,	// (0x0004eff1) main_clock2_btn_pane_ParamLimits

0x765d,	// (0x0004eff1) main_clock2_btn_pane

0xc2f5,	// (0x00053c89) main_clock2_btn_pane_cp01_ParamLimits

0xc2f5,	// (0x00053c89) main_clock2_btn_pane_cp01

0xe7a4,	// (0x00056138) list_cale_mrui_pane_ParamLimits

0xebcb,	// (0x0005655f) main_cf0_pane_g2

0x0001,

0x0180,	// (0x00047b14) main_cf0_pane_g

0xae0d,	// (0x000527a1) area_left_week_number_pane_ParamLimits

0xae19,	// (0x000527ad) area_top_day_name_pane_ParamLimits

0xae2c,	// (0x000527c0) frame_month_view_pane_ParamLimits

0xecdd,	// (0x00056671) grid_month_view_pane_ParamLimits

0xeceb,	// (0x0005667f) frm_month_g1_ParamLimits

0xaead,	// (0x00052841) frm_month_g2_ParamLimits

0xaec0,	// (0x00052854) frm_month_g3_ParamLimits

0xaed3,	// (0x00052867) frm_month_g4_ParamLimits

0xaee6,	// (0x0005287a) frm_month_g5_ParamLimits

0xaef9,	// (0x0005288d) frm_month_g6_ParamLimits

0xaf0c,	// (0x000528a0) frm_month_g7_ParamLimits

0xecf8,	// (0x0005668c) frm_month_g8_ParamLimits

0xaf1f,	// (0x000528b3) frm_month_g9_ParamLimits

0xaf2f,	// (0x000528c3) frm_month_g10_ParamLimits

0xaf3f,	// (0x000528d3) frm_month_g11_ParamLimits

0xaf4f,	// (0x000528e3) frm_month_g12_ParamLimits

0xaf61,	// (0x000528f5) frm_month_g13_ParamLimits

0xaf73,	// (0x00052907) frm_month_g14_ParamLimits

0xaf87,	// (0x0005291b) frm_month_g15_ParamLimits

0xaf9b,	// (0x0005292f) frm_month_g16_ParamLimits

0xfecd,	// (0x00057861) frm_month_g_ParamLimits

0xed05,	// (0x00056699) cell_top_day_name_pane_t1_ParamLimits

0xafaf,	// (0x00052943) cell_area_left_week_number_pane_g1_ParamLimits

0xafbb,	// (0x0005294f) cell_area_left_week_number_pane_t1_ParamLimits

0xc105,	// (0x00053a99) cell_month_view_pane_g1_ParamLimits

0xafce,	// (0x00052962) cell_month_view_pane_t1_ParamLimits

0x1556,	// (0x00048eea) main_clock2_btn_pane_g1

0xf0bc,	// (0x00056a50) main_clock2_btn_pane_t1

0x1353,	// (0x00048ce7) listscroll_cmail_pane_ParamLimits

0xe57f,	// (0x00055f13) main_sp_fs_email_pane_g1_ParamLimits

0xe58b,	// (0x00055f1f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00057679) main_sp_fs_email_pane_g_ParamLimits

0xe8aa,	// (0x0005623e) list_recal_day_pane_ParamLimits

0xe8bb,	// (0x0005624f) mian_recal_day_pane_t1

0x0bd5,	// (0x00048569) list_single_dyc_row_text_pane_t4_ParamLimits

0x0bd5,	// (0x00048569) list_single_dyc_row_text_pane_t4

0x0c1e,	// (0x000485b2) list_single_dyc_row_text_pane_t5_ParamLimits

0x0c1e,	// (0x000485b2) list_single_dyc_row_text_pane_t5

0xd190,	// (0x00054b24) list_single_dyc_row_text_pane_t6_ParamLimits

0xd190,	// (0x00054b24) list_single_dyc_row_text_pane_t6

0x38c9,	// (0x0004b25d) aid_mgn_list_cale_time_pane

0x1353,	// (0x00048ce7) main_gallery2_pane_ParamLimits

0xc30b,	// (0x00053c9f) main_clock2_pane_cp01_t1

0xc31b,	// (0x00053caf) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00057158) main_clock2_pane_cp01_t

0x1d9d,	// (0x00049731) cale_week_scroll_pane_g16_ParamLimits

0x1d9d,	// (0x00049731) cale_week_scroll_pane_g16

0x21a7,	// (0x00049b3b) vorec_slider_pane

0xf056,	// (0x000569ea) vidtel_button_pane_t1_ParamLimits

0xa7e3,	// (0x00052177) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa7e3,	// (0x00052177) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa7f4,	// (0x00052188) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa7f4,	// (0x00052188) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000577f9) main_fs_bigclock_clock_pane_g_ParamLimits

0xa807,	// (0x0005219b) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa81d,	// (0x000521b1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x00057802) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
