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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004d2e4 };

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
0x10d7,	// (0x0004e3bb) Screen

0x10e3,	// (0x0004e3c7) application_window

0x112f,	// (0x0004e413) area_bottom_pane_ParamLimits

0x112f,	// (0x0004e413) area_bottom_pane

0x1168,	// (0x0004e44c) area_top_pane_ParamLimits

0x1168,	// (0x0004e44c) area_top_pane

0x98c0,	// (0x00056ba4) call_video_uplink_pane_ParamLimits

0x98c0,	// (0x00056ba4) call_video_uplink_pane

0x11f6,	// (0x0004e4da) main_pane_ParamLimits

0x11f6,	// (0x0004e4da) main_pane

0xc919,	// (0x00059bfd) context_pane

0x42f6,	// (0x000515da) navi_pane

0x4328,	// (0x0005160c) popup_cale_events_window_ParamLimits

0x4328,	// (0x0005160c) popup_cale_events_window

0xc92c,	// (0x00059c10) popup_mup_playback_window

0x4340,	// (0x00051624) signal_pane

0xa88b,	// (0x00057b6f) main_browser_pane

0xaa77,	// (0x00057d5b) main_burst_pane

0x405e,	// (0x00051342) main_calc_pane

0xc8ff,	// (0x00059be3) main_cale_day_pane

0x1807,	// (0x0004eaeb) main_cale_month_pane

0xc8ff,	// (0x00059be3) main_cale_week_pane

0xaa77,	// (0x00057d5b) main_call_pane

0xa55f,	// (0x00057843) main_call_poc_pane

0xaa77,	// (0x00057d5b) main_camera_pane

0xaa77,	// (0x00057d5b) main_chi_dic_pane

0xb276,	// (0x0005855a) main_clock_pane

0xa55f,	// (0x00057843) main_fmradio_pane

0xaa77,	// (0x00057d5b) main_graph_messa_pane

0xa55f,	// (0x00057843) main_help_pane

0xa88b,	// (0x00057b6f) main_im_pane

0xa7ba,	// (0x00057a9e) main_image_pane_ParamLimits

0xa7ba,	// (0x00057a9e) main_image_pane

0xa55f,	// (0x00057843) main_location2_pane

0xaa77,	// (0x00057d5b) main_location_pane

0xa7ba,	// (0x00057a9e) main_messa_pane

0xa55f,	// (0x00057843) main_mp2_pane

0xaa77,	// (0x00057d5b) main_mp_pane

0xa55f,	// (0x00057843) main_msg_pane

0xa55f,	// (0x00057843) main_mup_eq_pane

0xa55f,	// (0x00057843) main_mup_pane

0xa88b,	// (0x00057b6f) main_notes_pane

0xa55f,	// (0x00057843) main_pec_pane

0xa55f,	// (0x00057843) main_phob_pane

0xa55f,	// (0x00057843) main_pinb_pane

0xa55f,	// (0x00057843) main_postcard_pane

0xa55f,	// (0x00057843) main_qdial_pane

0xaa77,	// (0x00057d5b) main_skin_pane

0xa55f,	// (0x00057843) main_smil2_pane

0xaa77,	// (0x00057d5b) main_smil_pane

0xaa77,	// (0x00057d5b) main_video_pane

0xaa77,	// (0x00057d5b) main_video_tele_pane

0xa7ba,	// (0x00057a9e) main_viewer_pane_ParamLimits

0xa7ba,	// (0x00057a9e) main_viewer_pane

0xaa77,	// (0x00057d5b) main_vorec_pane

0x40b2,	// (0x00051396) popup_blid_sat_info_window_ParamLimits

0x40b2,	// (0x00051396) popup_blid_sat_info_window

0x410a,	// (0x000513ee) popup_dyc_status_message_window_ParamLimits

0x410a,	// (0x000513ee) popup_dyc_status_message_window

0x4122,	// (0x00051406) popup_grid_large_graphic_window_ParamLimits

0x4122,	// (0x00051406) popup_grid_large_graphic_window

0x41d2,	// (0x000514b6) popup_loc_request_window_ParamLimits

0x41d2,	// (0x000514b6) popup_loc_request_window

0x42ce,	// (0x000515b2) popup_wml_address_window_ParamLimits

0x42ce,	// (0x000515b2) popup_wml_address_window

0x3e98,	// (0x0005117c) call_muted_g1

0x3b4c,	// (0x00050e30) popup_call_audio_conf_window_ParamLimits

0x3b4c,	// (0x00050e30) popup_call_audio_conf_window

0x3eac,	// (0x00051190) popup_call_audio_first_window_ParamLimits

0x3eac,	// (0x00051190) popup_call_audio_first_window

0x3f22,	// (0x00051206) popup_call_audio_in_window_ParamLimits

0x3f22,	// (0x00051206) popup_call_audio_in_window

0x3f5e,	// (0x00051242) popup_call_audio_out_window_ParamLimits

0x3f5e,	// (0x00051242) popup_call_audio_out_window

0x3f98,	// (0x0005127c) popup_call_audio_second_window_ParamLimits

0x3f98,	// (0x0005127c) popup_call_audio_second_window

0x3fee,	// (0x000512d2) popup_call_audio_wait_window_ParamLimits

0x3fee,	// (0x000512d2) popup_call_audio_wait_window

0x4023,	// (0x00051307) popup_number_entry_window_ParamLimits

0x4023,	// (0x00051307) popup_number_entry_window

0x98de,	// (0x00056bc2) bg_popup_call_pane_cp05_ParamLimits

0x98de,	// (0x00056bc2) bg_popup_call_pane_cp05

0x98fe,	// (0x00056be2) popup_number_entry_window_t1

0x9911,	// (0x00056bf5) popup_number_entry_window_t2

0x9923,	// (0x00056c07) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0005c393) popup_number_entry_window_t

0x9935,	// (0x00056c19) text_title_cp2

0x9948,	// (0x00056c2c) bg_popup_call_pane_cp_ParamLimits

0x9948,	// (0x00056c2c) bg_popup_call_pane_cp

0x9956,	// (0x00056c3a) call_thumbnail_pane

0x995e,	// (0x00056c42) popup_call_audio_in_window_g1_ParamLimits

0x995e,	// (0x00056c42) popup_call_audio_in_window_g1

0x996a,	// (0x00056c4e) popup_call_audio_in_window_g2_ParamLimits

0x996a,	// (0x00056c4e) popup_call_audio_in_window_g2

0x9976,	// (0x00056c5a) popup_call_audio_in_window_g3_ParamLimits

0x9976,	// (0x00056c5a) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0005c39c) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0005c39c) popup_call_audio_in_window_g

0x9982,	// (0x00056c66) popup_call_audio_in_window_t1_ParamLimits

0x9982,	// (0x00056c66) popup_call_audio_in_window_t1

0x999e,	// (0x00056c82) popup_call_audio_in_window_t2_ParamLimits

0x999e,	// (0x00056c82) popup_call_audio_in_window_t2

0x99ba,	// (0x00056c9e) popup_call_audio_in_window_t3_ParamLimits

0x99ba,	// (0x00056c9e) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0005c3a3) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0005c3a3) popup_call_audio_in_window_t

0x9948,	// (0x00056c2c) bg_popup_call_pane_cp01_ParamLimits

0x9948,	// (0x00056c2c) bg_popup_call_pane_cp01

0x9956,	// (0x00056c3a) call_thumbnail_pane_cp02

0x99cd,	// (0x00056cb1) call_type_pane_cp022

0x99d5,	// (0x00056cb9) popup_call_audio_out_window_g1_ParamLimits

0x99d5,	// (0x00056cb9) popup_call_audio_out_window_g1

0x99e7,	// (0x00056ccb) popup_call_audio_out_window_g2_ParamLimits

0x99e7,	// (0x00056ccb) popup_call_audio_out_window_g2

0x99f3,	// (0x00056cd7) popup_call_audio_out_window_g3_ParamLimits

0x99f3,	// (0x00056cd7) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0005c3aa) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0005c3aa) popup_call_audio_out_window_g

0x9a05,	// (0x00056ce9) popup_call_audio_out_window_t1_ParamLimits

0x9a05,	// (0x00056ce9) popup_call_audio_out_window_t1

0x9a1d,	// (0x00056d01) popup_call_audio_out_window_t2_ParamLimits

0x9a1d,	// (0x00056d01) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0005c3b1) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0005c3b1) popup_call_audio_out_window_t

0x9a32,	// (0x00056d16) bg_popup_call_pane_ParamLimits

0x9a32,	// (0x00056d16) bg_popup_call_pane

0x13b3,	// (0x0004e697) call_thumbnail_pane_cp_ParamLimits

0x13b3,	// (0x0004e697) call_thumbnail_pane_cp

0x9ab6,	// (0x00056d9a) call_type_pane_cp01_ParamLimits

0x9ab6,	// (0x00056d9a) call_type_pane_cp01

0x9afa,	// (0x00056dde) popup_call_audio_first_window_g1_ParamLimits

0x9afa,	// (0x00056dde) popup_call_audio_first_window_g1

0x9b46,	// (0x00056e2a) popup_call_audio_first_window_g2_ParamLimits

0x9b46,	// (0x00056e2a) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0005c3b6) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0005c3b6) popup_call_audio_first_window_g

0x9b8a,	// (0x00056e6e) popup_call_audio_first_window_t1_ParamLimits

0x9b8a,	// (0x00056e6e) popup_call_audio_first_window_t1

0x9c36,	// (0x00056f1a) popup_call_audio_first_window_t4_ParamLimits

0x9c36,	// (0x00056f1a) popup_call_audio_first_window_t4

0x9cc2,	// (0x00056fa6) popup_call_audio_first_window_t5_ParamLimits

0x9cc2,	// (0x00056fa6) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0005c3bb) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0005c3bb) popup_call_audio_first_window_t

0xa55f,	// (0x00057843) bg_popup_call_pane_cp02

0xa569,	// (0x0005784d) call_type_pane_cp023

0xa571,	// (0x00057855) popup_call_audio_wait_window_g1

0xa579,	// (0x0005785d) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005c3c2) popup_call_audio_wait_window_g

0xa581,	// (0x00057865) popup_call_audio_wait_window_t3

0xa58f,	// (0x00057873) bg_popup_call_pane_cp03_ParamLimits

0xa58f,	// (0x00057873) bg_popup_call_pane_cp03

0xa5ef,	// (0x000578d3) call_thumbnail_pane_cp011_ParamLimits

0xa5ef,	// (0x000578d3) call_thumbnail_pane_cp011

0xa5fb,	// (0x000578df) call_type_pane_cp034_ParamLimits

0xa5fb,	// (0x000578df) call_type_pane_cp034

0xa637,	// (0x0005791b) popup_call_audio_second_window_g1_ParamLimits

0xa637,	// (0x0005791b) popup_call_audio_second_window_g1

0xa673,	// (0x00057957) popup_call_audio_second_window_g2_ParamLimits

0xa673,	// (0x00057957) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0005c3c7) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0005c3c7) popup_call_audio_second_window_g

0xa6af,	// (0x00057993) popup_call_audio_second_window_t1_ParamLimits

0xa6af,	// (0x00057993) popup_call_audio_second_window_t1

0xa730,	// (0x00057a14) popup_call_audio_second_window_t2_ParamLimits

0xa730,	// (0x00057a14) popup_call_audio_second_window_t2

0xa766,	// (0x00057a4a) popup_call_audio_second_window_t3_ParamLimits

0xa766,	// (0x00057a4a) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0005c3cc) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0005c3cc) popup_call_audio_second_window_t

0xa55f,	// (0x00057843) bg_popup_call_pane_cp04

0xa79c,	// (0x00057a80) list_conf_pane

0xa7a4,	// (0x00057a88) popup_call_audio_conf_window_t1

0xa7b2,	// (0x00057a96) call_thumbnail_pane_g1

0xa7ba,	// (0x00057a9e) bg_pinb_pane_ParamLimits

0xa7ba,	// (0x00057a9e) bg_pinb_pane

0xa7c8,	// (0x00057aac) find_pinb_pane

0xa7d1,	// (0x00057ab5) listscroll_pinb_pane_ParamLimits

0xa7d1,	// (0x00057ab5) listscroll_pinb_pane

0xa7e0,	// (0x00057ac4) pinb_bg_pane_g1

0x13d7,	// (0x0004e6bb) pinb_bg_pane_g2

0x13e3,	// (0x0004e6c7) pinb_bg_pane_g3

0x13ef,	// (0x0004e6d3) pinb_bg_pane_g4

0x13fb,	// (0x0004e6df) pinb_bg_pane_g5

0x1407,	// (0x0004e6eb) pinb_bg_pane_g6

0x1412,	// (0x0004e6f6) pinb_bg_pane_g7

0x141d,	// (0x0004e701) pinb_bg_pane_g8

0x1428,	// (0x0004e70c) pinb_bg_pane_g9

0x1432,	// (0x0004e716) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0005c3d3) pinb_bg_pane_g

0x144f,	// (0x0004e733) grid_pinb_pane

0x1458,	// (0x0004e73c) list_pinb_pane

0x1461,	// (0x0004e745) scroll_pane_cp01_ParamLimits

0x1461,	// (0x0004e745) scroll_pane_cp01

0xa7ea,	// (0x00057ace) find_pinb_pane_g1_ParamLimits

0xa7ea,	// (0x00057ace) find_pinb_pane_g1

0xa802,	// (0x00057ae6) find_pinb_pane_t1

0xa814,	// (0x00057af8) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0005c3ed) find_pinb_pane_t

0xa829,	// (0x00057b0d) input_focus_pane_cp01_ParamLimits

0xa829,	// (0x00057b0d) input_focus_pane_cp01

0x1473,	// (0x0004e757) cell_pinb_pane_ParamLimits

0x1473,	// (0x0004e757) cell_pinb_pane

0x149e,	// (0x0004e782) cell_pinb_pane_g1_ParamLimits

0x149e,	// (0x0004e782) cell_pinb_pane_g1

0xa835,	// (0x00057b19) cell_pinb_pane_g2_ParamLimits

0xa835,	// (0x00057b19) cell_pinb_pane_g2

0xa841,	// (0x00057b25) cell_pinb_pane_g3_ParamLimits

0xa841,	// (0x00057b25) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0005c3f2) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0005c3f2) cell_pinb_pane_g

0xa55f,	// (0x00057843) grid_highlight_pane_cp01

0x14b1,	// (0x0004e795) list_pinb_item_pane_ParamLimits

0x14b1,	// (0x0004e795) list_pinb_item_pane

0xa55f,	// (0x00057843) list_highlight_pane_cp02

0x14c4,	// (0x0004e7a8) list_pinb_item_pane_g1_ParamLimits

0x14c4,	// (0x0004e7a8) list_pinb_item_pane_g1

0x14d1,	// (0x0004e7b5) list_pinb_item_pane_g2_ParamLimits

0x14d1,	// (0x0004e7b5) list_pinb_item_pane_g2

0x14dd,	// (0x0004e7c1) list_pinb_item_pane_g3_ParamLimits

0x14dd,	// (0x0004e7c1) list_pinb_item_pane_g3

0x14ee,	// (0x0004e7d2) list_pinb_item_pane_g4_ParamLimits

0x14ee,	// (0x0004e7d2) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0005c3f9) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0005c3f9) list_pinb_item_pane_g

0x14fa,	// (0x0004e7de) list_pinb_item_pane_t1_ParamLimits

0x14fa,	// (0x0004e7de) list_pinb_item_pane_t1

0x152f,	// (0x0004e813) calc_display_pane

0x1554,	// (0x0004e838) calc_paper_pane

0x1577,	// (0x0004e85b) grid_calc_pane

0xa55f,	// (0x00057843) bg_list_pane_cp01

0x15a5,	// (0x0004e889) clock_g1

0x15ad,	// (0x0004e891) clock_g2

0x0001,

0xf11e,	// (0x0005c402) clock_g

0x15b5,	// (0x0004e899) clock_t1_ParamLimits

0x15b5,	// (0x0004e899) clock_t1

0x15ca,	// (0x0004e8ae) clock_t2_ParamLimits

0x15ca,	// (0x0004e8ae) clock_t2

0x15dc,	// (0x0004e8c0) clock_t3_ParamLimits

0x15dc,	// (0x0004e8c0) clock_t3

0x15ee,	// (0x0004e8d2) clock_t4_ParamLimits

0x15ee,	// (0x0004e8d2) clock_t4

0x1600,	// (0x0004e8e4) clock_t5_ParamLimits

0x1600,	// (0x0004e8e4) clock_t5

0x1615,	// (0x0004e8f9) clock_t6_ParamLimits

0x1615,	// (0x0004e8f9) clock_t6

0x1627,	// (0x0004e90b) clock_t7_ParamLimits

0x1627,	// (0x0004e90b) clock_t7

0x1639,	// (0x0004e91d) clock_t8_ParamLimits

0x1639,	// (0x0004e91d) clock_t8

0x164d,	// (0x0004e931) clock_t9_ParamLimits

0x164d,	// (0x0004e931) clock_t9

0x0008,

0xf123,	// (0x0005c407) clock_t_ParamLimits

0xf123,	// (0x0005c407) clock_t

0xa84d,	// (0x00057b31) popup_clock_analogue_window_cp02

0xa84d,	// (0x00057b31) popup_clock_digital_window_cp01

0xa855,	// (0x00057b39) listscroll_help_pane

0xa55f,	// (0x00057843) phob_pre_status_pane

0xa85f,	// (0x00057b43) grid_qdial_pane

0xa7ba,	// (0x00057a9e) listscroll_mce_pane

0xa7ba,	// (0x00057a9e) bg_notes_pane

0xa869,	// (0x00057b4d) list_notes_pane

0x1661,	// (0x0004e945) scroll_pane_cp06

0xa877,	// (0x00057b5b) bg_calc_paper_pane

0x9cf9,	// (0x00056fdd) list_calc_pane

0xa88b,	// (0x00057b6f) bg_calc_display_pane

0x1675,	// (0x0004e959) calc_display_pane_t1

0x1687,	// (0x0004e96b) calc_display_pane_t2

0x9d13,	// (0x00056ff7) calc_display_pane_t3

0x0002,

0xf136,	// (0x0005c41a) calc_display_pane_t

0x1699,	// (0x0004e97d) cell_calc_pane_ParamLimits

0x1699,	// (0x0004e97d) cell_calc_pane

0xa897,	// (0x00057b7b) bg_calc_paper_pane_g1

0xa8a3,	// (0x00057b87) bg_calc_paper_pane_g2

0xa8af,	// (0x00057b93) bg_calc_paper_pane_g3

0xa8bb,	// (0x00057b9f) bg_calc_paper_pane_g4

0xa8c7,	// (0x00057bab) bg_calc_paper_pane_g5

0x16ce,	// (0x0004e9b2) bg_calc_paper_pane_g6

0x16dd,	// (0x0004e9c1) bg_calc_paper_pane_g7

0x16ec,	// (0x0004e9d0) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0005c421) bg_calc_paper_pane_g

0x16ff,	// (0x0004e9e3) calc_bg_paper_pane_g9

0x1712,	// (0x0004e9f6) list_calc_item_pane_ParamLimits

0x1712,	// (0x0004e9f6) list_calc_item_pane

0xa8d3,	// (0x00057bb7) list_calc_item_pane_g1

0x9d25,	// (0x00057009) list_calc_item_pane_t1_ParamLimits

0x9d25,	// (0x00057009) list_calc_item_pane_t1

0x1727,	// (0x0004ea0b) list_calc_item_pane_t2_ParamLimits

0x1727,	// (0x0004ea0b) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0005c432) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0005c432) list_calc_item_pane_t

0xa8e0,	// (0x00057bc4) cell_calc_pane_g1

0xa8ea,	// (0x00057bce) grid_highlight_pane_cp02

0xa90c,	// (0x00057bf0) bg_calc_display_pane_g1

0x1759,	// (0x0004ea3d) bg_calc_display_pane_g2

0xd863,	// (0x0005ab47) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0005c43c) bg_calc_display_pane_g

0x1763,	// (0x0004ea47) cell_qdial_pane_ParamLimits

0x1763,	// (0x0004ea47) cell_qdial_pane

0x1777,	// (0x0004ea5b) cell_qdial_pane_g1_ParamLimits

0x1777,	// (0x0004ea5b) cell_qdial_pane_g1

0x178d,	// (0x0004ea71) cell_qdial_pane_g2_ParamLimits

0x178d,	// (0x0004ea71) cell_qdial_pane_g2

0xa915,	// (0x00057bf9) cell_qdial_pane_g3_ParamLimits

0xa915,	// (0x00057bf9) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0005c443) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0005c443) cell_qdial_pane_g

0x17b3,	// (0x0004ea97) cell_qdial_pane_t1_ParamLimits

0x17b3,	// (0x0004ea97) cell_qdial_pane_t1

0x17cb,	// (0x0004eaaf) cell_qdial_pane_t2_ParamLimits

0x17cb,	// (0x0004eaaf) cell_qdial_pane_t2

0x17de,	// (0x0004eac2) cell_qdial_pane_t3_ParamLimits

0x17de,	// (0x0004eac2) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0005c44c) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0005c44c) cell_qdial_pane_t

0xa55f,	// (0x00057843) grid_highlight_pane_cp04

0xa921,	// (0x00057c05) thumbnail_qdial_pane_ParamLimits

0xa921,	// (0x00057c05) thumbnail_qdial_pane

0xa97d,	// (0x00057c61) list_help_pane

0xa986,	// (0x00057c6a) scroll_pane_cp02

0xa98f,	// (0x00057c73) help_list_pane_t1_ParamLimits

0xa98f,	// (0x00057c73) help_list_pane_t1

0x9d37,	// (0x0005701b) bg_notes_pane_g2

0x9d3f,	// (0x00057023) bg_notes_pane_g3

0x9d47,	// (0x0005702b) notes_bg_pane_g1

0x9d4f,	// (0x00057033) notes_bg_pane_g4

0x9d57,	// (0x0005703b) notes_bg_pane_g5

0x9d5f,	// (0x00057043) notes_bg_pane_g6

0x9d67,	// (0x0005704b) notes_bg_pane_g7

0x9d6f,	// (0x00057053) notes_bg_pane_g8

0x9d77,	// (0x0005705b) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0005c46a) notes_bg_pane_g

0x17f1,	// (0x0004ead5) list_notes_text_pane_ParamLimits

0x17f1,	// (0x0004ead5) list_notes_text_pane

0xa9ad,	// (0x00057c91) list_notes_text_pane_g1

0x020e,	// (0x0004d4f2) list_notes_text_pane_t1

0x1807,	// (0x0004eaeb) listscroll_cale_week_pane

0x1833,	// (0x0004eb17) bg_cale_heading_pane

0xa9d0,	// (0x00057cb4) bg_cale_pane_cp01

0x184b,	// (0x0004eb2f) cale_week_corner_pane

0x186a,	// (0x0004eb4e) cale_week_day_heading_pane

0x1887,	// (0x0004eb6b) cale_week_scroll_pane_g1

0x189a,	// (0x0004eb7e) cale_week_scroll_pane_g2

0x18b2,	// (0x0004eb96) cale_week_scroll_pane_g3

0x18ca,	// (0x0004ebae) cale_week_scroll_pane_g4

0x18e2,	// (0x0004ebc6) cale_week_scroll_pane_g5

0x1902,	// (0x0004ebe6) cale_week_scroll_pane_g6

0x1922,	// (0x0004ec06) cale_week_scroll_pane_g7

0x1942,	// (0x0004ec26) cale_week_scroll_pane_g8

0x1966,	// (0x0004ec4a) cale_week_scroll_pane_g9

0x197e,	// (0x0004ec62) cale_week_scroll_pane_g10

0x1996,	// (0x0004ec7a) cale_week_scroll_pane_g11

0x19ae,	// (0x0004ec92) cale_week_scroll_pane_g12

0x19c6,	// (0x0004ecaa) cale_week_scroll_pane_g13

0x19c6,	// (0x0004ecaa) cale_week_scroll_pane_g14

0x19c6,	// (0x0004ecaa) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0005c479) cale_week_scroll_pane_g

0x1a02,	// (0x0004ece6) cale_week_time_pane

0x1a26,	// (0x0004ed0a) grid_cale_week_pane

0xa9ff,	// (0x00057ce3) scroll_pane_cp08

0x1a4c,	// (0x0004ed30) cell_cale_week_pane_ParamLimits

0x1a4c,	// (0x0004ed30) cell_cale_week_pane

0x1ada,	// (0x0004edbe) cale_week_day_heading_pane_t1

0x1b04,	// (0x0004ede8) cale_week_day_heading_pane_t2

0x1b33,	// (0x0004ee17) cale_week_day_heading_pane_t3

0x1b62,	// (0x0004ee46) cale_week_day_heading_pane_t4

0x1b91,	// (0x0004ee75) cale_week_day_heading_pane_t5

0x1bc8,	// (0x0004eeac) cale_week_day_heading_pane_t6

0x1bff,	// (0x0004eee3) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0005c49a) cale_week_day_heading_pane_t

0xaa1c,	// (0x00057d00) bg_cale_side_pane

0x1c29,	// (0x0004ef0d) cale_week_time_pane_t1

0x1c43,	// (0x0004ef27) cale_week_time_pane_t2

0x1c5d,	// (0x0004ef41) cale_week_time_pane_t3

0x1c77,	// (0x0004ef5b) cale_week_time_pane_t4

0x1c91,	// (0x0004ef75) cale_week_time_pane_t5

0x1cab,	// (0x0004ef8f) cale_week_time_pane_t6

0x1cc5,	// (0x0004efa9) cale_week_time_pane_t7

0x1cdf,	// (0x0004efc3) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0005c4a9) cale_week_time_pane_t

0x1cff,	// (0x0004efe3) cell_cale_week_pane_g2

0x1d23,	// (0x0004f007) cell_cale_week_pane_g3_ParamLimits

0x1d23,	// (0x0004f007) cell_cale_week_pane_g3

0xaa2a,	// (0x00057d0e) grid_highlight_pane_cp07

0xaa32,	// (0x00057d16) listscroll_gms_pane

0xaa3c,	// (0x00057d20) grid_gms_pane

0xaa45,	// (0x00057d29) listscroll_gms_pane_g1

0xaa4d,	// (0x00057d31) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0005c4ba) listscroll_gms_pane_g

0x1d3b,	// (0x0004f01f) scroll_pane_cp010

0x1d46,	// (0x0004f02a) cell_gms_pane_ParamLimits

0x1d46,	// (0x0004f02a) cell_gms_pane

0x1d58,	// (0x0004f03c) cell_gms_pane_g1

0xaa55,	// (0x00057d39) cell_gms_pane_g2

0xaa5d,	// (0x00057d41) cell_gms_pane_g3

0xaa66,	// (0x00057d4a) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0005c4bf) cell_gms_pane_g

0xaa6f,	// (0x00057d53) grid_highlight_pane_cp09

0x3e42,	// (0x00051126) phob_pre_status_pane_g1

0x3e4a,	// (0x0005112e) phob_pre_status_pane_g2

0x3e52,	// (0x00051136) phob_pre_status_pane_g3

0x3e5a,	// (0x0005113e) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0005c8bd) phob_pre_status_pane_g

0x3e6a,	// (0x0005114e) phob_pre_status_pane_t1

0x3e78,	// (0x0005115c) phob_pre_status_pane_t2

0x3e88,	// (0x0005116c) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0005c8c8) phob_pre_status_pane_t

0xaa77,	// (0x00057d5b) bg_list_pane_cp05

0x1d68,	// (0x0004f04c) grid_vorec_pane

0x1d70,	// (0x0004f054) vorec_t1

0x1d7e,	// (0x0004f062) vorec_t2

0x1d8c,	// (0x0004f070) vorec_t3

0x1d9a,	// (0x0004f07e) vorec_t4

0x9834,	// (0x00056b18) vorec_t5

0x9842,	// (0x00056b26) vorec_t6

0x0004,

0xf1e4,	// (0x0005c4c8) vorec_t

0x9850,	// (0x00056b34) wait_bar_pane_cp01

0x1db6,	// (0x0004f09a) cell_vorec_pane_ParamLimits

0x1db6,	// (0x0004f09a) cell_vorec_pane

0x9d7f,	// (0x00057063) cell_vorec_pane_g1

0xa55f,	// (0x00057843) grid_highlight_pane_cp05

0x1de1,	// (0x0004f0c5) cams_zoom_pane

0x1df0,	// (0x0004f0d4) image_vga_pane

0x1e0a,	// (0x0004f0ee) main_camera_pane_g1

0x1e1c,	// (0x0004f100) main_camera_pane_g2

0x1e2c,	// (0x0004f110) main_camera_pane_g3

0x1e3c,	// (0x0004f120) main_camera_pane_g4

0x1e4c,	// (0x0004f130) main_camera_pane_g5

0x1e5c,	// (0x0004f140) main_camera_pane_g6

0x1e6c,	// (0x0004f150) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0005c4d3) main_camera_pane_g

0x1e7c,	// (0x0004f160) main_camera_pane_t1

0x1e92,	// (0x0004f176) main_camera_pane_t2

0x0001,

0xf200,	// (0x0005c4e4) main_camera_pane_t

0x1ecc,	// (0x0004f1b0) cams_zoom_pane_cp_ParamLimits

0x1ecc,	// (0x0004f1b0) cams_zoom_pane_cp

0x1ef4,	// (0x0004f1d8) image_cif_pane_ParamLimits

0x1ef4,	// (0x0004f1d8) image_cif_pane

0x1f2f,	// (0x0004f213) image_subqcif_pane

0x1f37,	// (0x0004f21b) main_video_pane_g1_ParamLimits

0x1f37,	// (0x0004f21b) main_video_pane_g1

0x1f5b,	// (0x0004f23f) main_video_pane_g2_ParamLimits

0x1f5b,	// (0x0004f23f) main_video_pane_g2

0x1f8f,	// (0x0004f273) main_video_pane_g3_ParamLimits

0x1f8f,	// (0x0004f273) main_video_pane_g3

0x1fbd,	// (0x0004f2a1) main_video_pane_g4_ParamLimits

0x1fbd,	// (0x0004f2a1) main_video_pane_g4

0x1feb,	// (0x0004f2cf) main_video_pane_g5_ParamLimits

0x1feb,	// (0x0004f2cf) main_video_pane_g5

0xaa8b,	// (0x00057d6f) main_video_pane_g6_ParamLimits

0xaa8b,	// (0x00057d6f) main_video_pane_g6

0x0006,

0xf205,	// (0x0005c4e9) main_video_pane_g_ParamLimits

0xf205,	// (0x0005c4e9) main_video_pane_g

0x2014,	// (0x0004f2f8) main_video_pane_t1_ParamLimits

0x2014,	// (0x0004f2f8) main_video_pane_t1

0xaaa5,	// (0x00057d89) cams_zoom_pane_g1

0xaaae,	// (0x00057d92) cams_zoom_pane_g2

0xaab7,	// (0x00057d9b) cams_zoom_pane_g3

0xaac0,	// (0x00057da4) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0005c4f8) cams_zoom_pane_g

0x2071,	// (0x0004f355) grid_cams_pane

0x208b,	// (0x0004f36f) linegrid_cams_pane

0x209e,	// (0x0004f382) cell_cams_pane_ParamLimits

0x209e,	// (0x0004f382) cell_cams_pane

0xaac9,	// (0x00057dad) cams_burst_image_pane

0xaad1,	// (0x00057db5) cell_cams_pane_g1

0xa55f,	// (0x00057843) grid_highlight_pane_cp03

0xa8e0,	// (0x00057bc4) mp_bg_pane_g1

0xa55f,	// (0x00057843) bg_list_pane_cp03

0xc824,	// (0x00059b08) bg_mp_pane

0xc82c,	// (0x00059b10) grid_mp_pane

0xc834,	// (0x00059b18) media_player_g1

0xc83c,	// (0x00059b20) media_player_t1

0xc84a,	// (0x00059b2e) media_player_t2

0xc858,	// (0x00059b3c) media_player_t3

0xc866,	// (0x00059b4a) media_player_t4

0xc874,	// (0x00059b58) media_player_t5

0xc882,	// (0x00059b66) media_player_t6

0xc890,	// (0x00059b74) media_player_t7

0x0006,

0xf5c3,	// (0x0005c8a7) media_player_t

0xc89e,	// (0x00059b82) wait_bar_pane_cp02

0xf5a8,	// (0x0005c88c) main_usb_pane_t

0x3e39,	// (0x0005111d) cell_mp_pane

0xa8e0,	// (0x00057bc4) cell_mp_pane_g1

0xa55f,	// (0x00057843) grid_highlight_pane_cp06

0xaad9,	// (0x00057dbd) grid_skin_colour_pane

0xaae1,	// (0x00057dc5) list_highlight_pane_cp03

0x20be,	// (0x0004f3a2) skin_g1

0xaae9,	// (0x00057dcd) skin_t1

0xaaf8,	// (0x00057ddc) skin_t2

0x0001,

0xf249,	// (0x0005c52d) skin_t

0x20c6,	// (0x0004f3aa) cell_skin_colour_pane_ParamLimits

0x20c6,	// (0x0004f3aa) cell_skin_colour_pane

0xab06,	// (0x00057dea) cell_skin_colour_pane_g1

0x213f,	// (0x0004f423) call_video_g1_ParamLimits

0x213f,	// (0x0004f423) call_video_g1

0x215b,	// (0x0004f43f) call_video_g2_ParamLimits

0x215b,	// (0x0004f43f) call_video_g2

0x0001,

0xf24e,	// (0x0005c532) call_video_g_ParamLimits

0xf24e,	// (0x0005c532) call_video_g

0x21ad,	// (0x0004f491) call_video_uplink_pane_cp1_ParamLimits

0x21ad,	// (0x0004f491) call_video_uplink_pane_cp1

0xab18,	// (0x00057dfc) call_video_uplink_pane_cp2

0x224c,	// (0x0004f530) video_down_crop_pane_ParamLimits

0x224c,	// (0x0004f530) video_down_crop_pane

0x2335,	// (0x0004f619) video_down_pane_ParamLimits

0x2335,	// (0x0004f619) video_down_pane

0xab20,	// (0x00057e04) video_down_subqcif_pane_ParamLimits

0xab20,	// (0x00057e04) video_down_subqcif_pane

0xab38,	// (0x00057e1c) video_down_subqcif_pane_cp_ParamLimits

0xab38,	// (0x00057e1c) video_down_subqcif_pane_cp

0xab5e,	// (0x00057e42) im_reading_pane_ParamLimits

0xab5e,	// (0x00057e42) im_reading_pane

0x2445,	// (0x0004f729) im_writing_pane_ParamLimits

0x2445,	// (0x0004f729) im_writing_pane

0x245b,	// (0x0004f73f) im_reading_pane_t1

0xab78,	// (0x00057e5c) list_im_pane

0xab89,	// (0x00057e6d) scroll_pane_cp07

0x2495,	// (0x0004f779) im_writing_pane_t1_ParamLimits

0x2495,	// (0x0004f779) im_writing_pane_t1

0xaba2,	// (0x00057e86) im_writing_pane_t2_ParamLimits

0xaba2,	// (0x00057e86) im_writing_pane_t2

0x0001,

0xf258,	// (0x0005c53c) im_writing_pane_t_ParamLimits

0xf258,	// (0x0005c53c) im_writing_pane_t

0xa55f,	// (0x00057843) input_focus_pane_cp04

0xa55f,	// (0x00057843) input_focus_pane_cp05

0x24aa,	// (0x0004f78e) list_im_single_pane_ParamLimits

0x24aa,	// (0x0004f78e) list_im_single_pane

0x24bf,	// (0x0004f7a3) list_single_im_pane_t1

0x3df9,	// (0x000510dd) blid_accuracy_pane

0x3e01,	// (0x000510e5) blid_compass_pane

0x3e0b,	// (0x000510ef) main_location_t1

0x3e1b,	// (0x000510ff) main_location_t2

0x3e2b,	// (0x0005110f) main_location_t3

0x0002,

0xf5d2,	// (0x0005c8b6) main_location_t

0xa55f,	// (0x00057843) aid_levels_location

0xa8e0,	// (0x00057bc4) blid_accuracy_pane_g1

0xa8e0,	// (0x00057bc4) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0005c59e) blid_accuracy_pane_g

0xabea,	// (0x00057ece) wml_content_pane

0xac28,	// (0x00057f0c) wml_button_pane_ParamLimits

0xac28,	// (0x00057f0c) wml_button_pane

0x24ce,	// (0x0004f7b2) wml_list_single_large_pane_ParamLimits

0x24ce,	// (0x0004f7b2) wml_list_single_large_pane

0x24e3,	// (0x0004f7c7) wml_list_single_medium_pane_ParamLimits

0x24e3,	// (0x0004f7c7) wml_list_single_medium_pane

0x24fa,	// (0x0004f7de) wml_list_single_small_pane_ParamLimits

0x24fa,	// (0x0004f7de) wml_list_single_small_pane

0xac3c,	// (0x00057f20) wml_selection_box_pane_ParamLimits

0xac3c,	// (0x00057f20) wml_selection_box_pane

0xac4f,	// (0x00057f33) wml_list_single_pane_t1

0xac5e,	// (0x00057f42) wml_list_single_medium_pane_t1

0xac6d,	// (0x00057f51) wml_list_single_large_pane_t1

0xac7c,	// (0x00057f60) input_focus_pane_cp02_ParamLimits

0xac7c,	// (0x00057f60) input_focus_pane_cp02

0xac8f,	// (0x00057f73) wml_selection_box_pane_g1

0xac98,	// (0x00057f7c) wml_selection_box_pane_t1_ParamLimits

0xac98,	// (0x00057f7c) wml_selection_box_pane_t1

0xa7ba,	// (0x00057a9e) bg_wml_button_pane_ParamLimits

0xa7ba,	// (0x00057a9e) bg_wml_button_pane

0xacb0,	// (0x00057f94) wml_button_pane_g1

0xacb8,	// (0x00057f9c) wml_button_pane_t1

0xacb0,	// (0x00057f94) wml_button_bg_pane_g1

0xacc8,	// (0x00057fac) wml_button_bg_pane_g2

0xacd0,	// (0x00057fb4) wml_button_bg_pane_g3

0xacd8,	// (0x00057fbc) wml_button_bg_pane_g4

0xace0,	// (0x00057fc4) wml_button_bg_pane_g5

0xace8,	// (0x00057fcc) wml_button_bg_pane_g6

0xacf0,	// (0x00057fd4) wml_button_bg_pane_g7

0xacf8,	// (0x00057fdc) wml_button_bg_pane_g8

0xad00,	// (0x00057fe4) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0005c541) wml_button_bg_pane_g

0x2513,	// (0x0004f7f7) bg_list_pane_cp02

0xad08,	// (0x00057fec) mce_header_pane_ParamLimits

0xad08,	// (0x00057fec) mce_header_pane

0xad1e,	// (0x00058002) mce_icon_pane

0xad1e,	// (0x00058002) mce_image_pane

0xad27,	// (0x0005800b) mce_text_pane_ParamLimits

0xad27,	// (0x0005800b) mce_text_pane

0x251b,	// (0x0004f7ff) scroll_pane_cp03

0xac20,	// (0x00057f04) scroll_pane_cp04

0xad3a,	// (0x0005801e) scroll_pane_cp05_ParamLimits

0xad3a,	// (0x0005801e) scroll_pane_cp05

0x2525,	// (0x0004f809) mce_header_field_pane_ParamLimits

0x2525,	// (0x0004f809) mce_header_field_pane

0x253c,	// (0x0004f820) mce_header_field_pane_2_ParamLimits

0x253c,	// (0x0004f820) mce_header_field_pane_2

0x2552,	// (0x0004f836) mce_header_field_pane_3

0x255a,	// (0x0004f83e) list_single_mce_message_pane_ParamLimits

0x255a,	// (0x0004f83e) list_single_mce_message_pane

0x2570,	// (0x0004f854) list_single_mce_smart_pane_ParamLimits

0x2570,	// (0x0004f854) list_single_mce_smart_pane

0xad46,	// (0x0005802a) input_focus_pane_cp03

0xad4f,	// (0x00058033) list_header_data_pane

0x2591,	// (0x0004f875) mce_header_field_pane_t1

0x25a1,	// (0x0004f885) list_single_mce_header_pane_ParamLimits

0x25a1,	// (0x0004f885) list_single_mce_header_pane

0xad57,	// (0x0005803b) list_single_mce_header_pane_t1

0xad66,	// (0x0005804a) list_single_mce_message_pane_g1

0xad6e,	// (0x00058052) list_single_mce_message_pane_t1

0x25db,	// (0x0004f8bf) bg_cale_heading_pane_cp01_ParamLimits

0x25db,	// (0x0004f8bf) bg_cale_heading_pane_cp01

0xad7c,	// (0x00058060) bg_cale_pane_cp02_ParamLimits

0xad7c,	// (0x00058060) bg_cale_pane_cp02

0x2615,	// (0x0004f8f9) cale_month_corner_pane

0x2634,	// (0x0004f918) cale_month_day_heading_pane_ParamLimits

0x2634,	// (0x0004f918) cale_month_day_heading_pane

0x2686,	// (0x0004f96a) cale_month_pane_g1_ParamLimits

0x2686,	// (0x0004f96a) cale_month_pane_g1

0x26b5,	// (0x0004f999) cale_month_pane_g2_ParamLimits

0x26b5,	// (0x0004f999) cale_month_pane_g2

0x26e5,	// (0x0004f9c9) cale_month_pane_g3_ParamLimits

0x26e5,	// (0x0004f9c9) cale_month_pane_g3

0x2721,	// (0x0004fa05) cale_month_pane_g4_ParamLimits

0x2721,	// (0x0004fa05) cale_month_pane_g4

0x275d,	// (0x0004fa41) cale_month_pane_g5_ParamLimits

0x275d,	// (0x0004fa41) cale_month_pane_g5

0x27a5,	// (0x0004fa89) cale_month_pane_g6_ParamLimits

0x27a5,	// (0x0004fa89) cale_month_pane_g6

0x27f1,	// (0x0004fad5) cale_month_pane_g7_ParamLimits

0x27f1,	// (0x0004fad5) cale_month_pane_g7

0x2841,	// (0x0004fb25) cale_month_pane_g8_ParamLimits

0x2841,	// (0x0004fb25) cale_month_pane_g8

0x2895,	// (0x0004fb79) cale_month_pane_g9_ParamLimits

0x2895,	// (0x0004fb79) cale_month_pane_g9

0x28e7,	// (0x0004fbcb) cale_month_pane_g10_ParamLimits

0x28e7,	// (0x0004fbcb) cale_month_pane_g10

0x2939,	// (0x0004fc1d) cale_month_pane_g11_ParamLimits

0x2939,	// (0x0004fc1d) cale_month_pane_g11

0x298b,	// (0x0004fc6f) cale_month_pane_g12_ParamLimits

0x298b,	// (0x0004fc6f) cale_month_pane_g12

0x29dd,	// (0x0004fcc1) cale_month_pane_g13_ParamLimits

0x29dd,	// (0x0004fcc1) cale_month_pane_g13

0x000c,

0xf270,	// (0x0005c554) cale_month_pane_g_ParamLimits

0xf270,	// (0x0005c554) cale_month_pane_g

0x2a2f,	// (0x0004fd13) cale_month_week_pane

0x2a53,	// (0x0004fd37) grid_cale_month_pane_ParamLimits

0x2a53,	// (0x0004fd37) grid_cale_month_pane

0x2a9c,	// (0x0004fd80) cale_month_day_heading_pane_t1

0x2ade,	// (0x0004fdc2) cale_month_day_heading_pane_t2

0x2b13,	// (0x0004fdf7) cale_month_day_heading_pane_t3

0x2b48,	// (0x0004fe2c) cale_month_day_heading_pane_t4

0x2b85,	// (0x0004fe69) cale_month_day_heading_pane_t5

0x2bca,	// (0x0004feae) cale_month_day_heading_pane_t6

0x2c0f,	// (0x0004fef3) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0005c56f) cale_month_day_heading_pane_t

0xaa1c,	// (0x00057d00) bg_cale_side_pane_cp01

0x2c5c,	// (0x0004ff40) cale_month_week_pane_t1

0x2c75,	// (0x0004ff59) cale_month_week_pane_t2

0x2c8e,	// (0x0004ff72) cale_month_week_pane_t3

0x2ca7,	// (0x0004ff8b) cale_month_week_pane_t4

0x2cc0,	// (0x0004ffa4) cale_month_week_pane_t5

0x2cd9,	// (0x0004ffbd) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0005c57e) cale_month_week_pane_t

0x2cf2,	// (0x0004ffd6) cell_cale_month_pane_ParamLimits

0x2cf2,	// (0x0004ffd6) cell_cale_month_pane

0x9d89,	// (0x0005706d) cell_cale_month_pane_g1

0x2e20,	// (0x00050104) cell_cale_month_pane_t1_ParamLimits

0x2e20,	// (0x00050104) cell_cale_month_pane_t1

0xaa2a,	// (0x00057d0e) grid_highlight_pane_cp08

0xa8e0,	// (0x00057bc4) main_smil_g1

0x2e4c,	// (0x00050130) smil_status_pane

0xadbb,	// (0x0005809f) smil_text_pane

0xc704,	// (0x000599e8) bg_popup_call3_rect_pane_g8

0xc70c,	// (0x000599f0) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0005c837) bg_popup_call3_rect_pane_g

0xc993,	// (0x00059c77) smil_status_volume_pane_g1

0xadc5,	// (0x000580a9) smil_status_pane_t1

0x9edb,	// (0x000571bf) volume_smil_pane

0xaddc,	// (0x000580c0) list_smil_text_pane

0x2e61,	// (0x00050145) scroll_pane_cp011

0x2e6c,	// (0x00050150) smil_text_list_pane_t1_ParamLimits

0x2e6c,	// (0x00050150) smil_text_list_pane_t1

0x9d95,	// (0x00057079) aid_volume_smil_ParamLimits

0x9d95,	// (0x00057079) aid_volume_smil

0xa8e0,	// (0x00057bc4) smil_volume_pane_g1

0xa8e0,	// (0x00057bc4) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0005c59e) smil_volume_pane_g

0x1807,	// (0x0004eaeb) listscroll_cale_day_pane

0xade6,	// (0x000580ca) bg_cale_pane

0xadfe,	// (0x000580e2) list_cale_pane

0xae21,	// (0x00058105) scroll_pane_cp09

0xae32,	// (0x00058116) cale_bg_pane_g1

0xae3a,	// (0x0005811e) cale_bg_pane_g2

0xae42,	// (0x00058126) cale_bg_pane_g3

0xae4a,	// (0x0005812e) cale_bg_pane_g4

0xae52,	// (0x00058136) cale_bg_pane_g5

0xae5a,	// (0x0005813e) cale_bg_pane_g6

0xae62,	// (0x00058146) cale_bg_pane_g7

0xae6a,	// (0x0005814e) cale_bg_pane_g8

0xae72,	// (0x00058156) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0005c5a3) cale_bg_pane_g

0x2eb8,	// (0x0005019c) list_cale_time_pane_ParamLimits

0x2eb8,	// (0x0005019c) list_cale_time_pane

0xae7a,	// (0x0005815e) list_cale_time_pane_g1_ParamLimits

0xae7a,	// (0x0005815e) list_cale_time_pane_g1

0xae86,	// (0x0005816a) list_cale_time_pane_g2_ParamLimits

0xae86,	// (0x0005816a) list_cale_time_pane_g2

0x2ece,	// (0x000501b2) list_cale_time_pane_g3_ParamLimits

0x2ece,	// (0x000501b2) list_cale_time_pane_g3

0x2edc,	// (0x000501c0) list_cale_time_pane_g4_ParamLimits

0x2edc,	// (0x000501c0) list_cale_time_pane_g4

0x2eea,	// (0x000501ce) list_cale_time_pane_g5_ParamLimits

0x2eea,	// (0x000501ce) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0005c5b6) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0005c5b6) list_cale_time_pane_g

0xaea0,	// (0x00058184) list_cale_time_pane_t1_ParamLimits

0xaea0,	// (0x00058184) list_cale_time_pane_t1

0xaec8,	// (0x000581ac) list_cale_time_pane_t2_ParamLimits

0xaec8,	// (0x000581ac) list_cale_time_pane_t2

0x319b,	// (0x0005047f) aid_blid_cardinal_pane

0x31d9,	// (0x000504bd) compass_pane_t4

0xaef0,	// (0x000581d4) list_cale_time_pane_t4_ParamLimits

0xaef0,	// (0x000581d4) list_cale_time_pane_t4

0x31e7,	// (0x000504cb) compass_pane_t5

0x31f5,	// (0x000504d9) compass_pane_t6

0x3203,	// (0x000504e7) compass_pane_t7

0xb390,	// (0x00058674) navi_pane_cc_t1

0xb56d,	// (0x00058851) aid_phob_thumbnail_center_pane

0x380f,	// (0x00050af3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0005c5c3) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0005c5c3) list_cale_time_pane_t

0x9948,	// (0x00056c2c) bg_popup_window_pane_cp02_ParamLimits

0x9948,	// (0x00056c2c) bg_popup_window_pane_cp02

0xaf18,	// (0x000581fc) heading_pane_cp01_ParamLimits

0xaf18,	// (0x000581fc) heading_pane_cp01

0xaf24,	// (0x00058208) loc_req_pane_ParamLimits

0xaf24,	// (0x00058208) loc_req_pane

0xaf34,	// (0x00058218) loc_type_pane_ParamLimits

0xaf34,	// (0x00058218) loc_type_pane

0xaf46,	// (0x0005822a) loc_type_pane_t1_ParamLimits

0xaf46,	// (0x0005822a) loc_type_pane_t1

0xaf58,	// (0x0005823c) loc_type_pane_t2_ParamLimits

0xaf58,	// (0x0005823c) loc_type_pane_t2

0xaf6a,	// (0x0005824e) loc_type_pane_t3_ParamLimits

0xaf6a,	// (0x0005824e) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0005c5ca) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0005c5ca) loc_type_pane_t

0xaf7c,	// (0x00058260) list_loc_req_pane

0xaf86,	// (0x0005826a) scroll_pane_cp012

0x2ef8,	// (0x000501dc) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ef8,	// (0x000501dc) list_single_loc_request_popup_menu_pane

0xaf91,	// (0x00058275) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf91,	// (0x00058275) list_single_loc_request_popup_menu_pane_g1

0xaf9d,	// (0x00058281) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf9d,	// (0x00058281) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0005c5d1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0005c5d1) list_single_loc_request_popup_menu_pane_g

0xafa9,	// (0x0005828d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafa9,	// (0x0005828d) list_single_loc_request_popup_menu_pane_t1

0xa7ba,	// (0x00057a9e) bg_popup_window_pane_cp03_ParamLimits

0xa7ba,	// (0x00057a9e) bg_popup_window_pane_cp03

0xafbf,	// (0x000582a3) heading_loc_req_pane_ParamLimits

0xafbf,	// (0x000582a3) heading_loc_req_pane

0x2f05,	// (0x000501e9) popup_dyc_status_message_window_g1_ParamLimits

0x2f05,	// (0x000501e9) popup_dyc_status_message_window_g1

0x2f19,	// (0x000501fd) popup_dyc_status_message_window_t1_ParamLimits

0x2f19,	// (0x000501fd) popup_dyc_status_message_window_t1

0x2f2e,	// (0x00050212) popup_dyc_status_message_window_t2_ParamLimits

0x2f2e,	// (0x00050212) popup_dyc_status_message_window_t2

0x2f43,	// (0x00050227) popup_dyc_status_message_window_t3_ParamLimits

0x2f43,	// (0x00050227) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0005c5d6) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0005c5d6) popup_dyc_status_message_window_t

0xa55f,	// (0x00057843) bg_heading_pane_cp01

0xafcb,	// (0x000582af) heading_loc_req_pane_g1

0xafd3,	// (0x000582b7) heading_loc_req_pane_g2

0xafdb,	// (0x000582bf) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0005c5dd) heading_loc_req_pane_g

0xafe3,	// (0x000582c7) heading_loc_req_pane_t1

0xaff2,	// (0x000582d6) bg_popup_sub_pane_cp01_ParamLimits

0xaff2,	// (0x000582d6) bg_popup_sub_pane_cp01

0xb000,	// (0x000582e4) popup_cale_events_window_g1_ParamLimits

0xb000,	// (0x000582e4) popup_cale_events_window_g1

0xb020,	// (0x00058304) popup_cale_events_window_g2_ParamLimits

0xb020,	// (0x00058304) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0005c611) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0005c611) popup_cale_events_window_g

0xb040,	// (0x00058324) popup_cale_events_window_t1_ParamLimits

0xb040,	// (0x00058324) popup_cale_events_window_t1

0xb052,	// (0x00058336) popup_cale_events_window_t2_ParamLimits

0xb052,	// (0x00058336) popup_cale_events_window_t2

0xb090,	// (0x00058374) popup_cale_events_window_t3_ParamLimits

0xb090,	// (0x00058374) popup_cale_events_window_t3

0xb0ca,	// (0x000583ae) popup_cale_events_window_t4_ParamLimits

0xb0ca,	// (0x000583ae) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0005c616) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0005c616) popup_cale_events_window_t

0x2f6b,	// (0x0005024f) call_type_pane

0x2f7b,	// (0x0005025f) popup_call_status_window_g1

0x2f8f,	// (0x00050273) popup_call_status_window_g2

0x2fa3,	// (0x00050287) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0005c61f) popup_call_status_window_g

0xb100,	// (0x000583e4) call_type_pane_g1

0xb109,	// (0x000583ed) call_type_pane_g2

0x0001,

0xf342,	// (0x0005c626) call_type_pane_g

0xa55f,	// (0x00057843) bg_popup_sub_pane_cp02

0xb112,	// (0x000583f6) listscroll_popup_wml_pane

0xb11a,	// (0x000583fe) list_wml_pane

0xb124,	// (0x00058408) scroll_pane_cp013

0xb12f,	// (0x00058413) list_single_graphic_popup_wml_pane_ParamLimits

0xb12f,	// (0x00058413) list_single_graphic_popup_wml_pane

0xa8e0,	// (0x00057bc4) list_single_graphic_popup_wml_pane_g1

0xb143,	// (0x00058427) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0005c62b) list_single_graphic_popup_wml_pane_g

0xb14b,	// (0x0005842f) list_single_graphic_popup_wml_pane_t1

0xb161,	// (0x00058445) aid_call_pane

0xa7b2,	// (0x00057a96) popup_clock_analogue_window_g1

0xa7b2,	// (0x00057a96) popup_clock_analogue_window_g2

0x9db7,	// (0x0005709b) popup_clock_analogue_window_g3

0x9db7,	// (0x0005709b) popup_clock_analogue_window_g4

0xa8e0,	// (0x00057bc4) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0005c630) popup_clock_analogue_window_g

0x9dbf,	// (0x000570a3) popup_clock_analogue_window_t1

0x9dcd,	// (0x000570b1) clock_digital_number_pane_ParamLimits

0x9dcd,	// (0x000570b1) clock_digital_number_pane

0x9dd9,	// (0x000570bd) clock_digital_number_pane_cp02_ParamLimits

0x9dd9,	// (0x000570bd) clock_digital_number_pane_cp02

0x9de5,	// (0x000570c9) clock_digital_number_pane_cp03_ParamLimits

0x9de5,	// (0x000570c9) clock_digital_number_pane_cp03

0x9df1,	// (0x000570d5) clock_digital_number_pane_cp04_ParamLimits

0x9df1,	// (0x000570d5) clock_digital_number_pane_cp04

0x9dfd,	// (0x000570e1) clock_digital_separator_pane_ParamLimits

0x9dfd,	// (0x000570e1) clock_digital_separator_pane

0x9e09,	// (0x000570ed) popup_clock_digital_window_t1

0xa8e0,	// (0x00057bc4) clock_digital_number_pane_g1

0xa8e0,	// (0x00057bc4) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0005c59e) clock_digital_number_pane_g

0xa8e0,	// (0x00057bc4) clock_digital_separator_pane_g1

0xa8e0,	// (0x00057bc4) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0005c59e) clock_digital_separator_pane_g

0xa55f,	// (0x00057843) bg_popup_window_pane_cp04

0xb169,	// (0x0005844d) heading_pane_cp03

0xb171,	// (0x00058455) listscroll_popup_gms_pane

0xb179,	// (0x0005845d) grid_large_graphic_popup_pane

0xb183,	// (0x00058467) listscroll_popup_gms_pane_g1

0xb18b,	// (0x0005846f) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0005c63b) listscroll_popup_gms_pane_g

0xac20,	// (0x00057f04) scroll_pane_cp014

0x2fb2,	// (0x00050296) cell_large_graphic_popup_pane_ParamLimits

0x2fb2,	// (0x00050296) cell_large_graphic_popup_pane

0x2fca,	// (0x000502ae) cell_large_graphic_popup_pane_g1_ParamLimits

0x2fca,	// (0x000502ae) cell_large_graphic_popup_pane_g1

0xb193,	// (0x00058477) cell_large_graphic_popup_pane_g2_ParamLimits

0xb193,	// (0x00058477) cell_large_graphic_popup_pane_g2

0xb19f,	// (0x00058483) cell_large_graphic_popup_pane_g3_ParamLimits

0xb19f,	// (0x00058483) cell_large_graphic_popup_pane_g3

0xb1ac,	// (0x00058490) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ac,	// (0x00058490) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0005c640) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0005c640) cell_large_graphic_popup_pane_g

0xb1bc,	// (0x000584a0) grid_highlight_pane_cp010

0xa8e0,	// (0x00057bc4) bg_popup_call_pane_g1

0xb1c6,	// (0x000584aa) list_single_graphic_popup_conf_pane_ParamLimits

0xb1c6,	// (0x000584aa) list_single_graphic_popup_conf_pane

0xb1d9,	// (0x000584bd) list_highlight_pane_cp01

0xb1e2,	// (0x000584c6) list_single_graphic_popup_conf_pane_g1

0xb206,	// (0x000584ea) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0005c649) list_single_graphic_popup_conf_pane_g

0xb20e,	// (0x000584f2) list_single_graphic_popup_conf_pane_t1

0xb21c,	// (0x00058500) linegrid_cams_pane_g1

0x2fd6,	// (0x000502ba) linegrid_cams_pane_g2

0xaa5d,	// (0x00057d41) linegrid_cams_pane_g3

0xb225,	// (0x00058509) linegrid_cams_pane_g4

0x2fdf,	// (0x000502c3) linegrid_cams_pane_g5

0x2fe8,	// (0x000502cc) linegrid_cams_pane_g6

0xaa66,	// (0x00057d4a) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0005c64e) linegrid_cams_pane_g

0xb22e,	// (0x00058512) popup_clock_analogue_window

0xb22e,	// (0x00058512) popup_clock_digital_window

0xa55f,	// (0x00057843) popup_phob_thumbnail_window

0xa8e0,	// (0x00057bc4) call_video_uplink_pane_g1

0xb237,	// (0x0005851b) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0005c65d) call_video_uplink_pane_g

0xb23f,	// (0x00058523) video_uplink_pane

0xb247,	// (0x0005852b) mce_image_pane_g1

0x2ff3,	// (0x000502d7) mce_image_pane_g2

0x2ffb,	// (0x000502df) mce_image_pane_g3

0x3003,	// (0x000502e7) mce_image_pane_g4

0x300d,	// (0x000502f1) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0005c662) mce_image_pane_g

0xb251,	// (0x00058535) control_top_pane_stacon_cp01_ParamLimits

0xb251,	// (0x00058535) control_top_pane_stacon_cp01

0xb265,	// (0x00058549) uni_indicator_pane_stacon_cp01_ParamLimits

0xb265,	// (0x00058549) uni_indicator_pane_stacon_cp01

0xb276,	// (0x0005855a) bg_popup_sub_pane_cp03

0x3015,	// (0x000502f9) chi_dic_find_pane

0x301d,	// (0x00050301) listscroll_chi_dic_pane

0x3026,	// (0x0005030a) main_pane_chidic_g1

0x3039,	// (0x0005031d) chi_dic_find_pane_t1

0xb280,	// (0x00058564) find_chidic_pane

0xb289,	// (0x0005856d) chi_dic_list_pane_ParamLimits

0xb289,	// (0x0005856d) chi_dic_list_pane

0xb29a,	// (0x0005857e) scroll_pane_cp020

0x3047,	// (0x0005032b) find_chidic_pane_t1

0xa55f,	// (0x00057843) input_focus_pane_cp06

0x3056,	// (0x0005033a) list_chi_dic_pane_ParamLimits

0x3056,	// (0x0005033a) list_chi_dic_pane

0x3068,	// (0x0005034c) list_chi_dic_pane_t1_ParamLimits

0x3068,	// (0x0005034c) list_chi_dic_pane_t1

0xa55f,	// (0x00057843) list_highlight_pane_cp020

0xb2a2,	// (0x00058586) bg_cale_heading_pane_g1

0x307b,	// (0x0005035f) bg_cale_heading_pane_g2

0x3083,	// (0x00050367) bg_cale_heading_pane_g3

0x308b,	// (0x0005036f) bg_cale_heading_pane_g4

0x3095,	// (0x00050379) bg_cale_heading_pane_g5

0x309f,	// (0x00050383) bg_cale_heading_pane_g6

0x30a7,	// (0x0005038b) bg_cale_heading_pane_g7

0x30af,	// (0x00050393) bg_cale_heading_pane_g8

0x30b9,	// (0x0005039d) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0005c66d) bg_cale_heading_pane_g

0xb2a2,	// (0x00058586) bg_cale_side_pane_g1

0x30c3,	// (0x000503a7) bg_cale_side_pane_g2

0x30cb,	// (0x000503af) bg_cale_side_pane_g3

0x30d3,	// (0x000503b7) bg_cale_side_pane_g4

0x30db,	// (0x000503bf) bg_cale_side_pane_g5

0x30e3,	// (0x000503c7) bg_cale_side_pane_g6

0x30eb,	// (0x000503cf) bg_cale_side_pane_g7

0x30f3,	// (0x000503d7) bg_cale_side_pane_g8

0x30fb,	// (0x000503df) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0005c680) bg_cale_side_pane_g

0x3103,	// (0x000503e7) popup_call_status_window_ParamLimits

0x3103,	// (0x000503e7) popup_call_status_window

0xb2aa,	// (0x0005858e) stacon_top_pane

0xb2b2,	// (0x00058596) status_pane_ParamLimits

0xb2b2,	// (0x00058596) status_pane

0xb2c7,	// (0x000585ab) status_small_pane

0xb2cf,	// (0x000585b3) control_pane

0xa55f,	// (0x00057843) stacon_bottom_pane

0xb2d7,	// (0x000585bb) list_single_mce_smart_pane_t1_ParamLimits

0xb2d7,	// (0x000585bb) list_single_mce_smart_pane_t1

0xb2ea,	// (0x000585ce) list_single_mce_smart_pane_t2_ParamLimits

0xb2ea,	// (0x000585ce) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0005c693) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0005c693) list_single_mce_smart_pane_t

0x314a,	// (0x0005042e) compass_pane

0x3153,	// (0x00050437) main_location2_pane_t1

0x3165,	// (0x00050449) main_location2_pane_t2

0x3177,	// (0x0005045b) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0005c698) main_location2_pane_t

0xb309,	// (0x000585ed) compass_pane_g1_ParamLimits

0xb309,	// (0x000585ed) compass_pane_g1

0x31bb,	// (0x0005049f) compass_pane_t1

0x31ca,	// (0x000504ae) compass_pane_t2

0x0005,

0xf3bd,	// (0x0005c6a1) compass_pane_t

0x3211,	// (0x000504f5) text_secondary_cp61

0xb387,	// (0x0005866b) navi_pane_cams_g5

0xb403,	// (0x000586e7) navi_pane_im_t1

0xb411,	// (0x000586f5) navi_pane_mp_g1_ParamLimits

0xb411,	// (0x000586f5) navi_pane_mp_g1

0xb425,	// (0x00058709) navi_pane_mp_g2_ParamLimits

0xb425,	// (0x00058709) navi_pane_mp_g2

0xb431,	// (0x00058715) navi_pane_mp_g3_ParamLimits

0xb431,	// (0x00058715) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0005c6b5) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0005c6b5) navi_pane_mp_g

0xb43d,	// (0x00058721) navi_pane_mp_t1

0xb44b,	// (0x0005872f) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0005c6bc) navi_pane_mp_t

0xb4b6,	// (0x0005879a) navi_pane_vt_g1

0xb43d,	// (0x00058721) navi_pane_vt_t1

0xb4be,	// (0x000587a2) navi_slider_pane

0xaa77,	// (0x00057d5b) zooming_pane

0xb4ce,	// (0x000587b2) navi_slider_pane_g1

0x9e26,	// (0x0005710a) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0005c6c3) navi_slider_pane_g

0xb4f2,	// (0x000587d6) aid_levels_zoom

0xb4fa,	// (0x000587de) zooming_pane_g1

0xb502,	// (0x000587e6) zooming_pane_g2

0xb502,	// (0x000587e6) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0005c6d2) zooming_pane_g

0xb50a,	// (0x000587ee) level_10_zoom

0xb513,	// (0x000587f7) level_11_zoom

0xb51c,	// (0x00058800) level_1_zoom

0xb525,	// (0x00058809) level_2_zoom

0xb52e,	// (0x00058812) level_3_zoom

0xb537,	// (0x0005881b) level_4_zoom

0xb540,	// (0x00058824) level_5_zoom

0xb549,	// (0x0005882d) level_6_zoom

0xb552,	// (0x00058836) level_7_zoom

0xb55b,	// (0x0005883f) level_8_zoom

0xb564,	// (0x00058848) level_9_zoom

0xb575,	// (0x00058859) popup_phob_thumbnail_window_g1

0xb57d,	// (0x00058861) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0005c6d9) popup_phob_thumbnail_window_g

0xc8a6,	// (0x00059b8a) level_1_location

0xc8ae,	// (0x00059b92) level_2_location

0xc8b6,	// (0x00059b9a) level_3_location

0xc8be,	// (0x00059ba2) level_4_location

0xaa77,	// (0x00057d5b) level_5_location

0x3262,	// (0x00050546) mce_icon_pane_g1

0x326c,	// (0x00050550) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0005c6de) mce_icon_pane_g

0x3274,	// (0x00050558) main_mup_pane_g1_ParamLimits

0x3274,	// (0x00050558) main_mup_pane_g1

0x328a,	// (0x0005056e) main_mup_pane_g2_ParamLimits

0x328a,	// (0x0005056e) main_mup_pane_g2

0x329c,	// (0x00050580) main_mup_pane_g3_ParamLimits

0x329c,	// (0x00050580) main_mup_pane_g3

0x32ae,	// (0x00050592) main_mup_pane_g4_ParamLimits

0x32ae,	// (0x00050592) main_mup_pane_g4

0x32c6,	// (0x000505aa) main_mup_pane_g5_ParamLimits

0x32c6,	// (0x000505aa) main_mup_pane_g5

0x32e2,	// (0x000505c6) main_mup_pane_g6_ParamLimits

0x32e2,	// (0x000505c6) main_mup_pane_g6

0x32fa,	// (0x000505de) main_mup_pane_g7_ParamLimits

0x32fa,	// (0x000505de) main_mup_pane_g7

0x3312,	// (0x000505f6) main_mup_pane_g8_ParamLimits

0x3312,	// (0x000505f6) main_mup_pane_g8

0x332a,	// (0x0005060e) main_mup_pane_g9_ParamLimits

0x332a,	// (0x0005060e) main_mup_pane_g9

0x3344,	// (0x00050628) main_mup_pane_g10_ParamLimits

0x3344,	// (0x00050628) main_mup_pane_g10

0x335e,	// (0x00050642) main_mup_pane_g11_ParamLimits

0x335e,	// (0x00050642) main_mup_pane_g11

0x3372,	// (0x00050656) main_mup_pane_g12_ParamLimits

0x3372,	// (0x00050656) main_mup_pane_g12

0x3388,	// (0x0005066c) main_mup_pane_g13_ParamLimits

0x3388,	// (0x0005066c) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0005c6e3) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0005c6e3) main_mup_pane_g

0x339c,	// (0x00050680) main_mup_pane_t1_ParamLimits

0x339c,	// (0x00050680) main_mup_pane_t1

0x33b6,	// (0x0005069a) main_mup_pane_t2_ParamLimits

0x33b6,	// (0x0005069a) main_mup_pane_t2

0x33ce,	// (0x000506b2) main_mup_pane_t3_ParamLimits

0x33ce,	// (0x000506b2) main_mup_pane_t3

0x33e6,	// (0x000506ca) main_mup_pane_t4_ParamLimits

0x33e6,	// (0x000506ca) main_mup_pane_t4

0x3404,	// (0x000506e8) main_mup_pane_t5_ParamLimits

0x3404,	// (0x000506e8) main_mup_pane_t5

0x3419,	// (0x000506fd) main_mup_pane_t6_ParamLimits

0x3419,	// (0x000506fd) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0005c6fe) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0005c6fe) main_mup_pane_t

0x342b,	// (0x0005070f) mup_progress_pane_ParamLimits

0x342b,	// (0x0005070f) mup_progress_pane

0x3437,	// (0x0005071b) mup_visualizer_pane_ParamLimits

0x3437,	// (0x0005071b) mup_visualizer_pane

0x346b,	// (0x0005074f) mup_volume_pane_ParamLimits

0x346b,	// (0x0005074f) mup_volume_pane

0xb1ea,	// (0x000584ce) mup_visualizer_pane_g1_ParamLimits

0xb1ea,	// (0x000584ce) mup_visualizer_pane_g1

0xb1ea,	// (0x000584ce) mup_visualizer_pane_g2_ParamLimits

0xb1ea,	// (0x000584ce) mup_visualizer_pane_g2

0xb309,	// (0x000585ed) mup_visualizer_pane_g3_ParamLimits

0xb309,	// (0x000585ed) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0005c70b) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0005c70b) mup_visualizer_pane_g

0xa8e0,	// (0x00057bc4) mup_volume_pane_g1

0xb58d,	// (0x00058871) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0005c712) mup_volume_pane_g

0xa8e0,	// (0x00057bc4) mup_progress_pane_g1

0xb596,	// (0x0005887a) mup_progress_pane_g2

0xb59f,	// (0x00058883) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0005c717) mup_progress_pane_g

0xa55f,	// (0x00057843) bg_popup_window_pane_cp05

0xb5a8,	// (0x0005888c) heading_pane_cp02_ParamLimits

0xb5a8,	// (0x0005888c) heading_pane_cp02

0xb5c2,	// (0x000588a6) list_popup_blid_pane

0xb5ca,	// (0x000588ae) list_blid_sat_info_pane_ParamLimits

0xb5ca,	// (0x000588ae) list_blid_sat_info_pane

0xb5dd,	// (0x000588c1) list_blid_sat_info_pane_g1

0xb5e5,	// (0x000588c9) list_blid_sat_info_pane_t1

0x3581,	// (0x00050865) mup_equalizer_pane_ParamLimits

0x3581,	// (0x00050865) mup_equalizer_pane

0x359a,	// (0x0005087e) mup_equalizer_pane_cp1_ParamLimits

0x359a,	// (0x0005087e) mup_equalizer_pane_cp1

0x35b7,	// (0x0005089b) mup_equalizer_pane_cp2_ParamLimits

0x35b7,	// (0x0005089b) mup_equalizer_pane_cp2

0x35d4,	// (0x000508b8) mup_equalizer_pane_cp3_ParamLimits

0x35d4,	// (0x000508b8) mup_equalizer_pane_cp3

0x35f5,	// (0x000508d9) mup_equalizer_pane_cp4_ParamLimits

0x35f5,	// (0x000508d9) mup_equalizer_pane_cp4

0x3616,	// (0x000508fa) mup_equalizer_pane_cp5

0x362a,	// (0x0005090e) mup_equalizer_pane_cp6

0x363e,	// (0x00050922) mup_equalizer_pane_cp7

0xc784,	// (0x00059a68) bg_popup_call_poc_act_pane_g9

0xc78c,	// (0x00059a70) bg_popup_call_poc_act_pane_g10

0xc794,	// (0x00059a78) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7ba,	// (0x00057a9e) mup_scale_pane

0xa8e0,	// (0x00057bc4) mup_scale_pane_g1

0xb5f3,	// (0x000588d7) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0005c733) mup_scale_pane_g

0xb617,	// (0x000588fb) msg_data_pane

0xb61f,	// (0x00058903) scroll_pane_cp017

0x042d,	// (0x0004d711) bg_list_pane_cp04_ParamLimits

0x042d,	// (0x0004d711) bg_list_pane_cp04

0xb627,	// (0x0005890b) msg_data_pane_g1

0x366c,	// (0x00050950) msg_data_pane_g2

0x3674,	// (0x00050958) msg_data_pane_g3

0x367c,	// (0x00050960) msg_data_pane_g4

0x3684,	// (0x00050968) msg_data_pane_g5

0x368c,	// (0x00050970) msg_data_pane_g6

0x3694,	// (0x00050978) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0005c742) msg_data_pane_g

0x0445,	// (0x0004d729) msg_text_pane_ParamLimits

0x0445,	// (0x0004d729) msg_text_pane

0x369c,	// (0x00050980) qrid_highlight_pane_cp011_ParamLimits

0x369c,	// (0x00050980) qrid_highlight_pane_cp011

0xa55f,	// (0x00057843) msg_body_pane

0xa55f,	// (0x00057843) msg_header_pane

0xb638,	// (0x0005891c) input_focus_pane_cp07

0x36b2,	// (0x00050996) msg_header_pane_t1_ParamLimits

0x36b2,	// (0x00050996) msg_header_pane_t1

0x36c4,	// (0x000509a8) msg_header_pane_t2_ParamLimits

0x36c4,	// (0x000509a8) msg_header_pane_t2

0x0001,

0xf472,	// (0x0005c756) msg_header_pane_t_ParamLimits

0xf472,	// (0x0005c756) msg_header_pane_t

0xb64d,	// (0x00058931) msg_body_pane_g1

0x36d6,	// (0x000509ba) msg_body_pane_t1_ParamLimits

0x36d6,	// (0x000509ba) msg_body_pane_t1

0x3707,	// (0x000509eb) msg_body_pane_t2_ParamLimits

0x3707,	// (0x000509eb) msg_body_pane_t2

0x3719,	// (0x000509fd) msg_body_pane_t3_ParamLimits

0x3719,	// (0x000509fd) msg_body_pane_t3

0x0002,

0xf477,	// (0x0005c75b) msg_body_pane_t_ParamLimits

0xf477,	// (0x0005c75b) msg_body_pane_t

0x3765,	// (0x00050a49) main_viewer_pane_g1_ParamLimits

0x3765,	// (0x00050a49) main_viewer_pane_g1

0x3773,	// (0x00050a57) main_viewer_pane_g2_ParamLimits

0x3773,	// (0x00050a57) main_viewer_pane_g2

0x3781,	// (0x00050a65) main_viewer_pane_g3_ParamLimits

0x3781,	// (0x00050a65) main_viewer_pane_g3

0x3790,	// (0x00050a74) main_viewer_pane_g4_ParamLimits

0x3790,	// (0x00050a74) main_viewer_pane_g4

0x9e50,	// (0x00057134) main_viewer_pane_g5_ParamLimits

0x9e50,	// (0x00057134) main_viewer_pane_g5

0x9e50,	// (0x00057134) main_viewer_pane_g7_ParamLimits

0x9e50,	// (0x00057134) main_viewer_pane_g7

0x9e62,	// (0x00057146) main_viewer_pane_g8_ParamLimits

0x9e62,	// (0x00057146) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0005c76b) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0005c76b) main_viewer_pane_g

0xb655,	// (0x00058939) viewer_content_pane_ParamLimits

0xb655,	// (0x00058939) viewer_content_pane

0x37cc,	// (0x00050ab0) main_postcard_pane_g1_ParamLimits

0x37cc,	// (0x00050ab0) main_postcard_pane_g1

0x37e2,	// (0x00050ac6) main_postcard_pane_g2_ParamLimits

0x37e2,	// (0x00050ac6) main_postcard_pane_g2

0x37f8,	// (0x00050adc) main_postcard_pane_g3_ParamLimits

0x37f8,	// (0x00050adc) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0005c77c) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0005c77c) main_postcard_pane_g

0x380f,	// (0x00050af3) main_postcard_pane_g4

0xc9a6,	// (0x00059c8a) smil_status_volume_pane_g2

0x3852,	// (0x00050b36) postcard_pane_ParamLimits

0x3852,	// (0x00050b36) postcard_pane

0xb663,	// (0x00058947) postcard_pane_g1_ParamLimits

0xb663,	// (0x00058947) postcard_pane_g1

0x3894,	// (0x00050b78) postcard_pane_g2_ParamLimits

0x3894,	// (0x00050b78) postcard_pane_g2

0x38a0,	// (0x00050b84) postcard_pane_g3_ParamLimits

0x38a0,	// (0x00050b84) postcard_pane_g3

0xb671,	// (0x00058955) postcard_pane_g4_ParamLimits

0xb671,	// (0x00058955) postcard_pane_g4

0x38ac,	// (0x00050b90) postcard_pane_g5_ParamLimits

0x38ac,	// (0x00050b90) postcard_pane_g5

0x38c1,	// (0x00050ba5) postcard_pane_g6_ParamLimits

0x38c1,	// (0x00050ba5) postcard_pane_g6

0xb663,	// (0x00058947) postcard_pane_g7_ParamLimits

0xb663,	// (0x00058947) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0005c789) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0005c789) postcard_pane_g

0x38d5,	// (0x00050bb9) main_mp2_pane_g1_ParamLimits

0x38d5,	// (0x00050bb9) main_mp2_pane_g1

0x38e1,	// (0x00050bc5) main_mp2_pane_g2_ParamLimits

0x38e1,	// (0x00050bc5) main_mp2_pane_g2

0x38ed,	// (0x00050bd1) main_mp2_pane_g3_ParamLimits

0x38ed,	// (0x00050bd1) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0005c798) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0005c798) main_mp2_pane_g

0x38f9,	// (0x00050bdd) main_mp2_pane_t1_ParamLimits

0x38f9,	// (0x00050bdd) main_mp2_pane_t1

0x390e,	// (0x00050bf2) main_mp2_pane_t2_ParamLimits

0x390e,	// (0x00050bf2) main_mp2_pane_t2

0x3920,	// (0x00050c04) main_mp2_pane_t3_ParamLimits

0x3920,	// (0x00050c04) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0005c79f) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0005c79f) main_mp2_pane_t

0xb67f,	// (0x00058963) pec_content_pane_ParamLimits

0xb67f,	// (0x00058963) pec_content_pane

0xac20,	// (0x00057f04) scroll_pane_cp015

0xb691,	// (0x00058975) pec_attribute_pane_ParamLimits

0xb691,	// (0x00058975) pec_attribute_pane

0x3932,	// (0x00050c16) pec_content_pane_g1_ParamLimits

0x3932,	// (0x00050c16) pec_content_pane_g1

0xb6a1,	// (0x00058985) pec_content_pane_t1_ParamLimits

0xb6a1,	// (0x00058985) pec_content_pane_t1

0xb6b3,	// (0x00058997) pec_content_pane_t2_ParamLimits

0xb6b3,	// (0x00058997) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0005c7a6) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0005c7a6) pec_content_pane_t

0x393e,	// (0x00050c22) list_single_graphic_pane_cp01_ParamLimits

0x393e,	// (0x00050c22) list_single_graphic_pane_cp01

0xa7ba,	// (0x00057a9e) bg_popup_sub_pane_cp04

0xb6c5,	// (0x000589a9) popup_mup_playback_window_g1

0xb6d1,	// (0x000589b5) popup_mup_playback_window_t1

0xb6e6,	// (0x000589ca) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0005c7ab) popup_mup_playback_window_t

0xb71d,	// (0x00058a01) main_image_pane_g1_ParamLimits

0xb71d,	// (0x00058a01) main_image_pane_g1

0xb760,	// (0x00058a44) scroll_pane_cp018_ParamLimits

0xb760,	// (0x00058a44) scroll_pane_cp018

0xb778,	// (0x00058a5c) scroll_pane_cp016_ParamLimits

0xb778,	// (0x00058a5c) scroll_pane_cp016

0x3a0c,	// (0x00050cf0) smil2_image_pane_ParamLimits

0x3a0c,	// (0x00050cf0) smil2_image_pane

0x3a3c,	// (0x00050d20) smil2_root_pane_ParamLimits

0x3a3c,	// (0x00050d20) smil2_root_pane

0x3a74,	// (0x00050d58) smil2_text_pane_ParamLimits

0x3a74,	// (0x00050d58) smil2_text_pane

0xa55f,	// (0x00057843) bg_list_pane_cp06

0xb7b4,	// (0x00058a98) grid_radio_pane

0xa55f,	// (0x00057843) bg_popup_window_pane_cp06

0xb7bc,	// (0x00058aa0) main_fmradio_pane_t1

0xb169,	// (0x0005844d) heading_pane_cp04

0xb7ca,	// (0x00058aae) main_fmradio_pane_t2

0xc7dc,	// (0x00059ac0) popup_cale_lunar_info_window_g1

0xb7d8,	// (0x00058abc) main_fmradio_pane_t3

0xc7e4,	// (0x00059ac8) popup_cale_lunar_info_window_g2

0xb7e6,	// (0x00058aca) main_fmradio_pane_t4

0x0001,

0xb7f4,	// (0x00058ad8) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0005c899) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0005c7c0) main_fmradio_pane_t

0xb802,	// (0x00058ae6) wait_bar_pane_cp03

0xb80a,	// (0x00058aee) cell_fmradio_pane_ParamLimits

0xb80a,	// (0x00058aee) cell_fmradio_pane

0xb663,	// (0x00058947) cell_fmradio_pane_g1_ParamLimits

0xb663,	// (0x00058947) cell_fmradio_pane_g1

0xa55f,	// (0x00057843) grid_highlight_pane_cp011

0xb81d,	// (0x00058b01) poc_content_pane_ParamLimits

0xb81d,	// (0x00058b01) poc_content_pane

0xb82f,	// (0x00058b13) scroll_pane_cp019

0x3af4,	// (0x00050dd8) popup_call_poc_act_window_ParamLimits

0x3af4,	// (0x00050dd8) popup_call_poc_act_window

0x3b18,	// (0x00050dfc) popup_call_poc_inact_window_ParamLimits

0x3b18,	// (0x00050dfc) popup_call_poc_inact_window

0xf579,	// (0x0005c85d) bg_popup_call_poc_act_pane_g

0xc79c,	// (0x00059a80) bg_popup_call_poc_inact_pane_g1

0xc7a4,	// (0x00059a88) bg_popup_call_poc_inact_pane_g2

0xb837,	// (0x00058b1b) popup_call_poc_act_window_g2

0xc7ac,	// (0x00059a90) bg_popup_call_poc_inact_pane_g3

0xc72c,	// (0x00059a10) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x00059a98) bg_popup_call_poc_inact_pane_g5

0xb83f,	// (0x00058b23) popup_call_poc_act_window_t1_ParamLimits

0xb83f,	// (0x00058b23) popup_call_poc_act_window_t1

0xb867,	// (0x00058b4b) popup_call_poc_act_window_t2_ParamLimits

0xb867,	// (0x00058b4b) popup_call_poc_act_window_t2

0xb88f,	// (0x00058b73) popup_call_poc_act_window_t3_ParamLimits

0xb88f,	// (0x00058b73) popup_call_poc_act_window_t3

0xb8b7,	// (0x00058b9b) popup_call_poc_act_window_t4_ParamLimits

0xb8b7,	// (0x00058b9b) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0005c7cb) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0005c7cb) popup_call_poc_act_window_t

0xc7bc,	// (0x00059aa0) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x00059aa8) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x00059ab0) bg_popup_call_poc_inact_pane_g8

0xb8c9,	// (0x00058bad) popup_call_poc_inact_window_g2

0xc7d4,	// (0x00059ab8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0005c874) bg_popup_call_poc_inact_pane_g

0xb8d1,	// (0x00058bb5) popup_call_poc_inact_window_t1_ParamLimits

0xb8d1,	// (0x00058bb5) popup_call_poc_inact_window_t1

0xb8e6,	// (0x00058bca) popup_call_poc_inact_window_t2_ParamLimits

0xb8e6,	// (0x00058bca) popup_call_poc_inact_window_t2

0xb8fb,	// (0x00058bdf) popup_call_poc_inact_window_t3_ParamLimits

0xb8fb,	// (0x00058bdf) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0005c7d4) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0005c7d4) popup_call_poc_inact_window_t

0xc919,	// (0x00059bfd) context_pane_ParamLimits

0x4340,	// (0x00051624) signal_pane_ParamLimits

0xaa77,	// (0x00057d5b) main_call2_pane

0x9ea7,	// (0x0005718b) popup_phob_thumbnail2_window_ParamLimits

0x9ea7,	// (0x0005718b) popup_phob_thumbnail2_window

0x9e38,	// (0x0005711c) aid_hotspot_pointer_arrow_pane

0x9e40,	// (0x00057124) aid_hotspot_pointer_hand_pane

0x3e62,	// (0x00051146) phob_pre_status_pane_g5

0x1de1,	// (0x0004f0c5) cams_zoom_pane_ParamLimits

0x1df0,	// (0x0004f0d4) image_vga_pane_ParamLimits

0x1e0a,	// (0x0004f0ee) main_camera_pane_g1_ParamLimits

0x1e1c,	// (0x0004f100) main_camera_pane_g2_ParamLimits

0x1e2c,	// (0x0004f110) main_camera_pane_g3_ParamLimits

0x1e3c,	// (0x0004f120) main_camera_pane_g4_ParamLimits

0x1e4c,	// (0x0004f130) main_camera_pane_g5_ParamLimits

0x1e5c,	// (0x0004f140) main_camera_pane_g6_ParamLimits

0x1e6c,	// (0x0004f150) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0005c4d3) main_camera_pane_g_ParamLimits

0x1e7c,	// (0x0004f160) main_camera_pane_t1_ParamLimits

0x1e92,	// (0x0004f176) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0005c4e4) main_camera_pane_t_ParamLimits

0xa7ba,	// (0x00057a9e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7ba,	// (0x00057a9e) bg_popup_preview_window_pane_cp01

0xb910,	// (0x00058bf4) popup_phob_thumbnail2_window_g1_ParamLimits

0xb910,	// (0x00058bf4) popup_phob_thumbnail2_window_g1

0xa55f,	// (0x00057843) call2_cli_visual_pane

0x3b4c,	// (0x00050e30) popup_call2_audio_conf_window_ParamLimits

0x3b4c,	// (0x00050e30) popup_call2_audio_conf_window

0x3b6c,	// (0x00050e50) popup_call2_audio_first_window_ParamLimits

0x3b6c,	// (0x00050e50) popup_call2_audio_first_window

0x3c02,	// (0x00050ee6) popup_call2_audio_in_window_ParamLimits

0x3c02,	// (0x00050ee6) popup_call2_audio_in_window

0x3c4a,	// (0x00050f2e) popup_call2_audio_out_window_ParamLimits

0x3c4a,	// (0x00050f2e) popup_call2_audio_out_window

0x3cb4,	// (0x00050f98) popup_call2_audio_second_window_ParamLimits

0x3cb4,	// (0x00050f98) popup_call2_audio_second_window

0x3d1a,	// (0x00050ffe) popup_call2_audio_wait_window_ParamLimits

0x3d1a,	// (0x00050ffe) popup_call2_audio_wait_window

0xa55f,	// (0x00057843) bg_popup_call2_act_pane_cp03

0xa79c,	// (0x00057a80) list_conf_pane_cp

0xb91c,	// (0x00058c00) popup_call2_audio_conf_window_t1

0xb92a,	// (0x00058c0e) list_single_graphic_popup_conf2_pane_ParamLimits

0xb92a,	// (0x00058c0e) list_single_graphic_popup_conf2_pane

0xb1d9,	// (0x000584bd) list_highlight_pane_cp04

0xb93d,	// (0x00058c21) list_single_graphic_popup_conf2_pane_g1

0xb206,	// (0x000584ea) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0005c7db) list_single_graphic_popup_conf2_pane_g

0xb947,	// (0x00058c2b) list_single_graphic_popup_conf2_pane_t1

0xb955,	// (0x00058c39) bg_popup_call2_act_pane_cp01_ParamLimits

0xb955,	// (0x00058c39) bg_popup_call2_act_pane_cp01

0xb9df,	// (0x00058cc3) call_type_pane_cp05_ParamLimits

0xb9df,	// (0x00058cc3) call_type_pane_cp05

0xba33,	// (0x00058d17) popup_call2_audio_second_window_g1_ParamLimits

0xba33,	// (0x00058d17) popup_call2_audio_second_window_g1

0xba87,	// (0x00058d6b) popup_call2_audio_second_window_g2_ParamLimits

0xba87,	// (0x00058d6b) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0005c7e0) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0005c7e0) popup_call2_audio_second_window_g

0xbaec,	// (0x00058dd0) popup_call2_audio_second_window_t1_ParamLimits

0xbaec,	// (0x00058dd0) popup_call2_audio_second_window_t1

0xbba7,	// (0x00058e8b) popup_call2_audio_second_window_t2_ParamLimits

0xbba7,	// (0x00058e8b) popup_call2_audio_second_window_t2

0xbbfa,	// (0x00058ede) popup_call2_audio_second_window_t3_ParamLimits

0xbbfa,	// (0x00058ede) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0005c7e7) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0005c7e7) popup_call2_audio_second_window_t

0xa55f,	// (0x00057843) bg_popup_call2_in_pane_cp02

0xa569,	// (0x0005784d) call_type_pane_cp04

0xa571,	// (0x00057855) popup_call2_audio_wait_window_g1

0xa579,	// (0x0005785d) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0005c3c2) popup_call2_audio_wait_window_g

0xa581,	// (0x00057865) popup_call2_audio_wait_window_t3

0xbced,	// (0x00058fd1) bg_popup_call2_act_pane_ParamLimits

0xbced,	// (0x00058fd1) bg_popup_call2_act_pane

0xbdad,	// (0x00059091) call_type_pane_cp03_ParamLimits

0xbdad,	// (0x00059091) call_type_pane_cp03

0xbe11,	// (0x000590f5) popup_call2_audio_first_window_g1_ParamLimits

0xbe11,	// (0x000590f5) popup_call2_audio_first_window_g1

0xbe81,	// (0x00059165) popup_call2_audio_first_window_g2_ParamLimits

0xbe81,	// (0x00059165) popup_call2_audio_first_window_g2

0xb1ea,	// (0x000584ce) popup_call2_audio_first_window_g3_ParamLimits

0xb1ea,	// (0x000584ce) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0005c7f0) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0005c7f0) popup_call2_audio_first_window_g

0xbf5f,	// (0x00059243) popup_call2_audio_first_window_t1_ParamLimits

0xbf5f,	// (0x00059243) popup_call2_audio_first_window_t1

0xc062,	// (0x00059346) popup_call2_audio_first_window_t4_ParamLimits

0xc062,	// (0x00059346) popup_call2_audio_first_window_t4

0xc145,	// (0x00059429) popup_call2_audio_first_window_t5_ParamLimits

0xc145,	// (0x00059429) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0005c7fb) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0005c7fb) popup_call2_audio_first_window_t

0xa7b2,	// (0x00057a96) bg_popup_call2_act_pane_g1

0xc7ec,	// (0x00059ad0) popup_cale_lunar_info_window_t1

0xc7fa,	// (0x00059ade) popup_cale_lunar_info_window_t2

0xc808,	// (0x00059aec) popup_cale_lunar_info_window_t3

0xa55f,	// (0x00057843) bg_popup_call2_bubble_pane

0xc246,	// (0x0005952a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc246,	// (0x0005952a) bg_popup_call2_in_pane_cp01

0x99cd,	// (0x00056cb1) call_type_pane_cp02

0xc28e,	// (0x00059572) popup_call2_audio_out_window_g1_ParamLimits

0xc28e,	// (0x00059572) popup_call2_audio_out_window_g1

0xc2ba,	// (0x0005959e) popup_call2_audio_out_window_g2_ParamLimits

0xc2ba,	// (0x0005959e) popup_call2_audio_out_window_g2

0xc2e2,	// (0x000595c6) popup_call2_audio_out_window_g3_ParamLimits

0xc2e2,	// (0x000595c6) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0005c804) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0005c804) popup_call2_audio_out_window_g

0xc31d,	// (0x00059601) popup_call2_audio_out_window_t1_ParamLimits

0xc31d,	// (0x00059601) popup_call2_audio_out_window_t1

0xc37c,	// (0x00059660) popup_call2_audio_out_window_t2_ParamLimits

0xc37c,	// (0x00059660) popup_call2_audio_out_window_t2

0xc3d0,	// (0x000596b4) popup_call2_audio_out_window_t3_ParamLimits

0xc3d0,	// (0x000596b4) popup_call2_audio_out_window_t3

0xc3e6,	// (0x000596ca) popup_call2_audio_out_window_t4_ParamLimits

0xc3e6,	// (0x000596ca) popup_call2_audio_out_window_t4

0xc3fc,	// (0x000596e0) popup_call2_audio_out_window_t5_ParamLimits

0xc3fc,	// (0x000596e0) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0005c80d) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0005c80d) popup_call2_audio_out_window_t

0xc460,	// (0x00059744) bg_popup_call2_in_pane_ParamLimits

0xc460,	// (0x00059744) bg_popup_call2_in_pane

0xc4bc,	// (0x000597a0) popup_call2_audio_in_window_g1_ParamLimits

0xc4bc,	// (0x000597a0) popup_call2_audio_in_window_g1

0xc4f4,	// (0x000597d8) popup_call2_audio_in_window_g2_ParamLimits

0xc4f4,	// (0x000597d8) popup_call2_audio_in_window_g2

0xc52c,	// (0x00059810) popup_call2_audio_in_window_g3_ParamLimits

0xc52c,	// (0x00059810) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0005c81a) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0005c81a) popup_call2_audio_in_window_g

0xc584,	// (0x00059868) popup_call2_audio_in_window_t1_ParamLimits

0xc584,	// (0x00059868) popup_call2_audio_in_window_t1

0xc604,	// (0x000598e8) popup_call2_audio_in_window_t2_ParamLimits

0xc604,	// (0x000598e8) popup_call2_audio_in_window_t2

0xc684,	// (0x00059968) popup_call2_audio_in_window_t3_ParamLimits

0xc684,	// (0x00059968) popup_call2_audio_in_window_t3

0xc69e,	// (0x00059982) popup_call2_audio_in_window_t4_ParamLimits

0xc69e,	// (0x00059982) popup_call2_audio_in_window_t4

0xc6b0,	// (0x00059994) popup_call2_audio_in_window_t5_ParamLimits

0xc6b0,	// (0x00059994) popup_call2_audio_in_window_t5

0xc6c2,	// (0x000599a6) popup_call2_audio_in_window_t6_ParamLimits

0xc6c2,	// (0x000599a6) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0005c823) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0005c823) popup_call2_audio_in_window_t

0xa7b2,	// (0x00057a96) bg_popup_call2_in_pane_g1

0xc816,	// (0x00059afa) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0005c89e) popup_cale_lunar_info_window_t

0xa7ba,	// (0x00057a9e) bg_popup_call2_rect_pane_ParamLimits

0xa7ba,	// (0x00057a9e) bg_popup_call2_rect_pane

0xa55f,	// (0x00057843) call2_cli_visual_graphic_pane

0xa55f,	// (0x00057843) call2_cli_visual_text_pane

0x9ece,	// (0x000571b2) smil_status_volume_pane_g3

0x0002,

0xa8e0,	// (0x00057bc4) call2_cli_visual_graphic_pane_g1

0xa8e0,	// (0x00057bc4) call2_cli_visual_graphic_pane_g2

0xa8e0,	// (0x00057bc4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0005c830) call2_cli_visual_graphic_pane_g

0xc6d4,	// (0x000599b8) bg_popup_call2_rect_pane_g1

0xa975,	// (0x00057c59) bg_popup_call2_rect_pane_g2

0xc6dc,	// (0x000599c0) bg_popup_call2_rect_pane_g3

0xc6e4,	// (0x000599c8) bg_popup_call2_rect_pane_g4

0xc6ec,	// (0x000599d0) bg_popup_call2_rect_pane_g5

0xc6f4,	// (0x000599d8) bg_popup_call2_rect_pane_g6

0xc6fc,	// (0x000599e0) bg_popup_call2_rect_pane_g7

0xc704,	// (0x000599e8) bg_popup_call2_rect_pane_g8

0xc70c,	// (0x000599f0) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0005c837) bg_popup_call2_rect_pane_g

0xc714,	// (0x000599f8) bg_popup_call2_bubble_pane_g1

0xc71c,	// (0x00059a00) bg_popup_call2_bubble_pane_g2

0xc724,	// (0x00059a08) bg_popup_call2_bubble_pane_g3

0xc72c,	// (0x00059a10) bg_popup_call2_bubble_pane_g4

0xc734,	// (0x00059a18) bg_popup_call2_bubble_pane_g5

0xc73c,	// (0x00059a20) bg_popup_call2_bubble_pane_g6

0xc744,	// (0x00059a28) bg_popup_call2_bubble_pane_g7

0xc74c,	// (0x00059a30) bg_popup_call2_bubble_pane_g8

0xc754,	// (0x00059a38) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0005c84a) bg_popup_call2_bubble_pane_g

0x1819,	// (0x0004eafd) aid_cale_week_size_cell_pane

0x1ea8,	// (0x0004f18c) aid_cams_cif_uncrop_pane_ParamLimits

0x1ea8,	// (0x0004f18c) aid_cams_cif_uncrop_pane

0x205d,	// (0x0004f341) aid_cams_size_cell_ParamLimits

0x205d,	// (0x0004f341) aid_cams_size_cell

0x2071,	// (0x0004f355) grid_cams_pane_ParamLimits

0x208b,	// (0x0004f36f) linegrid_cams_pane_ParamLimits

0x2171,	// (0x0004f455) call_video_pane_t1

0x218f,	// (0x0004f473) call_video_pane_t2

0x0001,

0xf253,	// (0x0005c537) call_video_pane_t

0x25b5,	// (0x0004f899) aid_cale_month_size_cell_pane_ParamLimits

0x25b5,	// (0x0004f899) aid_cale_month_size_cell_pane

0xf603,	// (0x0005c8e7) smil_status_volume_pane_g

0x9edb,	// (0x000571bf) volume_smil_pane_ParamLimits

0x9888,	// (0x00056b6c) aid_popup2_width_pane

0x179d,	// (0x0004ea81) cell_qdial_pane_g4_ParamLimits

0x179d,	// (0x0004ea81) cell_qdial_pane_g4

0x319b,	// (0x0005047f) aid_blid_cardinal_pane_ParamLimits

0x31a7,	// (0x0005048b) aid_blid_destination_pane_ParamLimits

0x31a7,	// (0x0005048b) aid_blid_destination_pane

0xa7ba,	// (0x00057a9e) bg_popup_call_poc_act_pane_ParamLimits

0xa7ba,	// (0x00057a9e) bg_popup_call_poc_act_pane

0xa7ba,	// (0x00057a9e) bg_popup_call_poc_inact_pane_ParamLimits

0xa7ba,	// (0x00057a9e) bg_popup_call_poc_inact_pane

0xc75c,	// (0x00059a40) bg_popup_call_poc_act_pane_g1

0xc764,	// (0x00059a48) bg_popup_call_poc_act_pane_g2

0xc76c,	// (0x00059a50) bg_popup_call_poc_act_pane_g3

0xc72c,	// (0x00059a10) bg_popup_call_poc_act_pane_g4

0xc734,	// (0x00059a18) bg_popup_call_poc_act_pane_g5

0xc774,	// (0x00059a58) bg_popup_call_poc_act_pane_g6

0xc744,	// (0x00059a28) bg_popup_call_poc_act_pane_g7

0xc77c,	// (0x00059a60) bg_popup_call_poc_act_pane_g8

0xa55f,	// (0x00057843) main_usb_pane

0x9e82,	// (0x00057166) popup_cale_lunar_info_window

0x245b,	// (0x0004f73f) im_reading_pane_t1_ParamLimits

0xab78,	// (0x00057e5c) list_im_pane_ParamLimits

0xab89,	// (0x00057e6d) scroll_pane_cp07_ParamLimits

0xa55f,	// (0x00057843) grid_highlight_pane_cp012

0xa7ba,	// (0x00057a9e) mup_scale_pane_ParamLimits

0xb663,	// (0x00058947) main_usb_pane_g1_ParamLimits

0xb663,	// (0x00058947) main_usb_pane_g1

0x3d77,	// (0x0005105b) main_usb_pane_g2_ParamLimits

0x3d77,	// (0x0005105b) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0005c887) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0005c887) main_usb_pane_g

0x3d8d,	// (0x00051071) main_usb_pane_t1_ParamLimits

0x3d8d,	// (0x00051071) main_usb_pane_t1

0x3d9f,	// (0x00051083) main_usb_pane_t2_ParamLimits

0x3d9f,	// (0x00051083) main_usb_pane_t2

0x3db1,	// (0x00051095) main_usb_pane_t3_ParamLimits

0x3db1,	// (0x00051095) main_usb_pane_t3

0x3dc3,	// (0x000510a7) main_usb_pane_t4_ParamLimits

0x3dc3,	// (0x000510a7) main_usb_pane_t4

0x3dd5,	// (0x000510b9) main_usb_pane_t5_ParamLimits

0x3dd5,	// (0x000510b9) main_usb_pane_t5

0x3de7,	// (0x000510cb) main_usb_pane_t6_ParamLimits

0x3de7,	// (0x000510cb) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0005c88c) main_usb_pane_t_ParamLimits

0x314a,	// (0x0005042e) aid_text_placing

0x3153,	// (0x00050437) main_location2_pane_t1_ParamLimits

0x3165,	// (0x00050449) main_location2_pane_t2_ParamLimits

0x3177,	// (0x0005045b) main_location2_pane_t3_ParamLimits

0x3189,	// (0x0005046d) main_location2_pane_t4_ParamLimits

0x3189,	// (0x0005046d) main_location2_pane_t4

0xf3b4,	// (0x0005c698) main_location2_pane_t_ParamLimits

0xa7f6,	// (0x00057ada) find_pinb_pane_g2_ParamLimits

0xa7f6,	// (0x00057ada) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0005c3e8) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0005c3e8) find_pinb_pane_g

0xa802,	// (0x00057ae6) find_pinb_pane_t1_ParamLimits

0xa814,	// (0x00057af8) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0005c3ed) find_pinb_pane_t_ParamLimits

0xa55f,	// (0x00057843) main_call3_pane

0x2a9c,	// (0x0004fd80) cale_month_day_heading_pane_t1_ParamLimits

0x2ade,	// (0x0004fdc2) cale_month_day_heading_pane_t2_ParamLimits

0x2b13,	// (0x0004fdf7) cale_month_day_heading_pane_t3_ParamLimits

0x2b48,	// (0x0004fe2c) cale_month_day_heading_pane_t4_ParamLimits

0x2b85,	// (0x0004fe69) cale_month_day_heading_pane_t5_ParamLimits

0x2bca,	// (0x0004feae) cale_month_day_heading_pane_t6_ParamLimits

0x2c0f,	// (0x0004fef3) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0005c56f) cale_month_day_heading_pane_t_ParamLimits

0xadd3,	// (0x000580b7) smil_status_volume_pane

0x3870,	// (0x00050b54) postcard_address_pane_ParamLimits

0x3870,	// (0x00050b54) postcard_address_pane

0x3882,	// (0x00050b66) postcard_message_pane_ParamLimits

0x3882,	// (0x00050b66) postcard_message_pane

0x3d54,	// (0x00051038) call2_cli_visual_pane_t1_ParamLimits

0x3d54,	// (0x00051038) call2_cli_visual_pane_t1

0x456f,	// (0x00051853) postcard_message_pane_t1_ParamLimits

0x456f,	// (0x00051853) postcard_message_pane_t1

0x4558,	// (0x0005183c) postcard_address_pane_t1_ParamLimits

0x4558,	// (0x0005183c) postcard_address_pane_t1

0x4544,	// (0x00051828) popup_call3_audio_in_window_ParamLimits

0x4544,	// (0x00051828) popup_call3_audio_in_window

0x43cf,	// (0x000516b3) bg_popup_call3_in_pane_ParamLimits

0x43cf,	// (0x000516b3) bg_popup_call3_in_pane

0x4445,	// (0x00051729) popup_call3_audio_in_window_g1_ParamLimits

0x4445,	// (0x00051729) popup_call3_audio_in_window_g1

0x4465,	// (0x00051749) popup_call3_audio_in_window_g2_ParamLimits

0x4465,	// (0x00051749) popup_call3_audio_in_window_g2

0x4485,	// (0x00051769) popup_call3_audio_in_window_g3_ParamLimits

0x4485,	// (0x00051769) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0005c8ee) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0005c8ee) popup_call3_audio_in_window_g

0x44b6,	// (0x0005179a) popup_call3_audio_in_window_t1_ParamLimits

0x44b6,	// (0x0005179a) popup_call3_audio_in_window_t1

0x44f4,	// (0x000517d8) popup_call3_audio_in_window_t2_ParamLimits

0x44f4,	// (0x000517d8) popup_call3_audio_in_window_t2

0x4532,	// (0x00051816) popup_call3_audio_in_window_t3_ParamLimits

0x4532,	// (0x00051816) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0005c8f7) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0005c8f7) popup_call3_audio_in_window_t

0xaa77,	// (0x00057d5b) bg_popup_call3_rect_pane

0xc6d4,	// (0x000599b8) bg_popup_call3_rect_pane_g1

0xa975,	// (0x00057c59) bg_popup_call3_rect_pane_g2

0xc6dc,	// (0x000599c0) bg_popup_call3_rect_pane_g3

0xc6e4,	// (0x000599c8) bg_popup_call3_rect_pane_g4

0xc6ec,	// (0x000599d0) bg_popup_call3_rect_pane_g5

0xc6f4,	// (0x000599d8) bg_popup_call3_rect_pane_g6

0xc6fc,	// (0x000599e0) bg_popup_call3_rect_pane_g7

0x3481,	// (0x00050765) mup_visualizer_osc_pane

0xb585,	// (0x00058869) mup_visualizer_spec_pane

0x43ff,	// (0x000516e3) call3_video_qcif_pane_ParamLimits

0x43ff,	// (0x000516e3) call3_video_qcif_pane

0x4412,	// (0x000516f6) call3_video_qcif_uncrop_pane_ParamLimits

0x4412,	// (0x000516f6) call3_video_qcif_uncrop_pane

0x4420,	// (0x00051704) call3_video_subqcif_pane_ParamLimits

0x4420,	// (0x00051704) call3_video_subqcif_pane

0x4434,	// (0x00051718) call3_video_subqcif_uncrop_pane_ParamLimits

0x4434,	// (0x00051718) call3_video_subqcif_uncrop_pane

0x44a5,	// (0x00051789) popup_call3_audio_in_window_g4_ParamLimits

0x44a5,	// (0x00051789) popup_call3_audio_in_window_g4

0x43be,	// (0x000516a2) mup_spec_half_pane

0x43c7,	// (0x000516ab) mup_spec_half_pane_cp

0xc979,	// (0x00059c5d) mup_osc_middle_pane

0xc982,	// (0x00059c66) mup_visualizer_osc_pane_g1

0x439e,	// (0x00051682) mup_spec_bar_pane_ParamLimits

0x439e,	// (0x00051682) mup_spec_bar_pane

0xc966,	// (0x00059c4a) mup_spec_bar_pane_g1

0xc970,	// (0x00059c54) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0005c8e2) mup_spec_bar_pane_g

0x1819,	// (0x0004eafd) aid_cale_week_size_cell_pane_ParamLimits

0x1833,	// (0x0004eb17) bg_cale_heading_pane_ParamLimits

0xa9d0,	// (0x00057cb4) bg_cale_pane_cp01_ParamLimits

0x184b,	// (0x0004eb2f) cale_week_corner_pane_ParamLimits

0x186a,	// (0x0004eb4e) cale_week_day_heading_pane_ParamLimits

0x1887,	// (0x0004eb6b) cale_week_scroll_pane_g1_ParamLimits

0x189a,	// (0x0004eb7e) cale_week_scroll_pane_g2_ParamLimits

0x18b2,	// (0x0004eb96) cale_week_scroll_pane_g3_ParamLimits

0x18ca,	// (0x0004ebae) cale_week_scroll_pane_g4_ParamLimits

0x18e2,	// (0x0004ebc6) cale_week_scroll_pane_g5_ParamLimits

0x1902,	// (0x0004ebe6) cale_week_scroll_pane_g6_ParamLimits

0x1922,	// (0x0004ec06) cale_week_scroll_pane_g7_ParamLimits

0x1942,	// (0x0004ec26) cale_week_scroll_pane_g8_ParamLimits

0x1966,	// (0x0004ec4a) cale_week_scroll_pane_g9_ParamLimits

0x197e,	// (0x0004ec62) cale_week_scroll_pane_g10_ParamLimits

0x1996,	// (0x0004ec7a) cale_week_scroll_pane_g11_ParamLimits

0x19ae,	// (0x0004ec92) cale_week_scroll_pane_g12_ParamLimits

0x19c6,	// (0x0004ecaa) cale_week_scroll_pane_g13_ParamLimits

0x19c6,	// (0x0004ecaa) cale_week_scroll_pane_g14_ParamLimits

0x19c6,	// (0x0004ecaa) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0005c479) cale_week_scroll_pane_g_ParamLimits

0x1a02,	// (0x0004ece6) cale_week_time_pane_ParamLimits

0x1a26,	// (0x0004ed0a) grid_cale_week_pane_ParamLimits

0xa9ed,	// (0x00057cd1) listscroll_cale_week_pane_t1

0xa9ff,	// (0x00057ce3) scroll_pane_cp08_ParamLimits

0x2615,	// (0x0004f8f9) cale_month_corner_pane_ParamLimits

0xada9,	// (0x0005808d) cale_month_pane_t1

0x2a2f,	// (0x0004fd13) cale_month_week_pane_ParamLimits

0x2f7b,	// (0x0005025f) popup_call_status_window_g1_ParamLimits

0x2f8f,	// (0x00050273) popup_call_status_window_g2_ParamLimits

0x2fa3,	// (0x00050287) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0005c61f) popup_call_status_window_g_ParamLimits

0xb159,	// (0x0005843d) aid_call2_pane

0x0474,	// (0x0004d758) msg_header_pane_g1

0x3870,	// (0x00050b54) postcard_address2_pane_ParamLimits

0x3870,	// (0x00050b54) postcard_address2_pane

0x3882,	// (0x00050b66) postcard_message2_pane_ParamLimits

0x3882,	// (0x00050b66) postcard_message2_pane

0x434e,	// (0x00051632) message2_row_pane_ParamLimits

0x434e,	// (0x00051632) message2_row_pane

0x436b,	// (0x0005164f) address2_row_pane_ParamLimits

0x436b,	// (0x0005164f) address2_row_pane

0xc934,	// (0x00059c18) postcard_message2_row_pane_g1

0xc93c,	// (0x00059c20) postcard_message2_row_pane_t1

0xc934,	// (0x00059c18) address2_row_pane_g1

0xc93c,	// (0x00059c20) address2_row_pane_t1

0x1d60,	// (0x0004f044) aid_size_cell_vorec

0xa55f,	// (0x00057843) main_rss_pane

0x437e,	// (0x00051662) rss_list_single_pane_ParamLimits

0x437e,	// (0x00051662) rss_list_single_pane

0xc94a,	// (0x00059c2e) rss_list_single_pane_t1

0xc958,	// (0x00059c3c) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0005c8dd) rss_list_single_pane_t

0xa55f,	// (0x00057843) main_camera2_pane

0xa55f,	// (0x00057843) main_video2_pane

0x45e8,	// (0x000518cc) cams_zoom_pane_cp2_ParamLimits

0x45e8,	// (0x000518cc) cams_zoom_pane_cp2

0x4608,	// (0x000518ec) image2_vga_pane_ParamLimits

0x4608,	// (0x000518ec) image2_vga_pane

0x4659,	// (0x0005193d) main_camera2_pane_g1_ParamLimits

0x4659,	// (0x0005193d) main_camera2_pane_g1

0x4679,	// (0x0005195d) main_camera2_pane_g2_ParamLimits

0x4679,	// (0x0005195d) main_camera2_pane_g2

0x4699,	// (0x0005197d) main_camera2_pane_g3_ParamLimits

0x4699,	// (0x0005197d) main_camera2_pane_g3

0x46b9,	// (0x0005199d) main_camera2_pane_g4_ParamLimits

0x46b9,	// (0x0005199d) main_camera2_pane_g4

0x46d9,	// (0x000519bd) main_camera2_pane_g5_ParamLimits

0x46d9,	// (0x000519bd) main_camera2_pane_g5

0x46f9,	// (0x000519dd) main_camera2_pane_g6_ParamLimits

0x46f9,	// (0x000519dd) main_camera2_pane_g6

0x4719,	// (0x000519fd) main_camera2_pane_g7_ParamLimits

0x4719,	// (0x000519fd) main_camera2_pane_g7

0x4739,	// (0x00051a1d) main_camera2_pane_g8_ParamLimits

0x4739,	// (0x00051a1d) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0005c8fe) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0005c8fe) main_camera2_pane_g

0x4779,	// (0x00051a5d) main_camera2_pane_t1_ParamLimits

0x4779,	// (0x00051a5d) main_camera2_pane_t1

0x47ae,	// (0x00051a92) main_camera2_pane_t2_ParamLimits

0x47ae,	// (0x00051a92) main_camera2_pane_t2

0x47d4,	// (0x00051ab8) main_camera2_pane_t3_ParamLimits

0x47d4,	// (0x00051ab8) main_camera2_pane_t3

0x4832,	// (0x00051b16) main_camera2_pane_t4_ParamLimits

0x4832,	// (0x00051b16) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0005c911) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0005c911) main_camera2_pane_t

0x48c4,	// (0x00051ba8) cams_zoom_pane_cp4_ParamLimits

0x48c4,	// (0x00051ba8) cams_zoom_pane_cp4

0x48da,	// (0x00051bbe) image2_cif_pane_ParamLimits

0x48da,	// (0x00051bbe) image2_cif_pane

0x4905,	// (0x00051be9) image2_subqcif_pane_ParamLimits

0x4905,	// (0x00051be9) image2_subqcif_pane

0x491f,	// (0x00051c03) main_video2_pane_g1_ParamLimits

0x491f,	// (0x00051c03) main_video2_pane_g1

0x4939,	// (0x00051c1d) main_video2_pane_g2_ParamLimits

0x4939,	// (0x00051c1d) main_video2_pane_g2

0x494f,	// (0x00051c33) main_video2_pane_g3_ParamLimits

0x494f,	// (0x00051c33) main_video2_pane_g3

0x4965,	// (0x00051c49) main_video2_pane_g4_ParamLimits

0x4965,	// (0x00051c49) main_video2_pane_g4

0x497b,	// (0x00051c5f) main_video2_pane_g5_ParamLimits

0x497b,	// (0x00051c5f) main_video2_pane_g5

0x4991,	// (0x00051c75) main_video2_pane_g6_ParamLimits

0x4991,	// (0x00051c75) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0005c920) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0005c920) main_video2_pane_g

0x49ab,	// (0x00051c8f) main_video2_pane_t1_ParamLimits

0x49ab,	// (0x00051c8f) main_video2_pane_t1

0x49cf,	// (0x00051cb3) main_video2_pane_t2_ParamLimits

0x49cf,	// (0x00051cb3) main_video2_pane_t2

0x4a1d,	// (0x00051d01) main_video2_pane_t3_ParamLimits

0x4a1d,	// (0x00051d01) main_video2_pane_t3

0x0002,

0xf649,	// (0x0005c92d) main_video2_pane_t_ParamLimits

0xf649,	// (0x0005c92d) main_video2_pane_t

0x3ea2,	// (0x00051186) call_muted_g2

0x0001,

0xf5eb,	// (0x0005c8cf) call_muted_g

0xa55f,	// (0x00057843) main_mup2_pane

0x4a65,	// (0x00051d49) main_mup2_pane_g1_ParamLimits

0x4a65,	// (0x00051d49) main_mup2_pane_g1

0x4a71,	// (0x00051d55) main_mup2_pane_g2_ParamLimits

0x4a71,	// (0x00051d55) main_mup2_pane_g2

0x9f49,	// (0x0005722d) main_mup_pane_g13_cp1

0x9f51,	// (0x00057235) mup_volume_pane_cp1

0x4a8d,	// (0x00051d71) main_mup2_pane_g4_ParamLimits

0x4a8d,	// (0x00051d71) main_mup2_pane_g4

0x4a9f,	// (0x00051d83) main_mup2_pane_g5_ParamLimits

0x4a9f,	// (0x00051d83) main_mup2_pane_g5

0x4ab1,	// (0x00051d95) main_mup2_pane_g6_ParamLimits

0x4ab1,	// (0x00051d95) main_mup2_pane_g6

0x4ac3,	// (0x00051da7) main_mup2_pane_g7_ParamLimits

0x4ac3,	// (0x00051da7) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0005c934) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0005c934) main_mup2_pane_g

0x4adb,	// (0x00051dbf) main_mup2_pane_t1_ParamLimits

0x4adb,	// (0x00051dbf) main_mup2_pane_t1

0x4af1,	// (0x00051dd5) main_mup2_pane_t2_ParamLimits

0x4af1,	// (0x00051dd5) main_mup2_pane_t2

0x4b07,	// (0x00051deb) main_mup2_pane_t3_ParamLimits

0x4b07,	// (0x00051deb) main_mup2_pane_t3

0x4b1d,	// (0x00051e01) main_mup2_pane_t4_ParamLimits

0x4b1d,	// (0x00051e01) main_mup2_pane_t4

0x4b35,	// (0x00051e19) main_mup2_pane_t5_ParamLimits

0x4b35,	// (0x00051e19) main_mup2_pane_t5

0x4b4d,	// (0x00051e31) main_mup2_pane_t6_ParamLimits

0x4b4d,	// (0x00051e31) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0005c943) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0005c943) main_mup2_pane_t

0x4b7d,	// (0x00051e61) mup2_visualizer_pane_ParamLimits

0x4b7d,	// (0x00051e61) mup2_visualizer_pane

0x4bab,	// (0x00051e8f) mup_progress_pane_cp_ParamLimits

0x4bab,	// (0x00051e8f) mup_progress_pane_cp

0x9f34,	// (0x00057218) mup_volume_pane_cp_ParamLimits

0x9f34,	// (0x00057218) mup_volume_pane_cp

0x4bbf,	// (0x00051ea3) mup2_visualizer_pane_g1_ParamLimits

0x4bbf,	// (0x00051ea3) mup2_visualizer_pane_g1

0xc9b9,	// (0x00059c9d) mup2_visualizer_pane_g2_ParamLimits

0xc9b9,	// (0x00059c9d) mup2_visualizer_pane_g2

0x4bd6,	// (0x00051eba) mup2_visualizer_pane_g3_ParamLimits

0x4bd6,	// (0x00051eba) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0005c950) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0005c950) mup2_visualizer_pane_g

0xb7ac,	// (0x00058a90) aid_size_cell_fmradio

0x4054,	// (0x00051338) aid_height_parent_landcape

0xac07,	// (0x00057eeb) wml_content_pane_cp

0xac0f,	// (0x00057ef3) wml_tabs_pane

0xac18,	// (0x00057efc) popup_wml_miniature_window

0xac20,	// (0x00057f04) scroll_pane_cp021

0xac34,	// (0x00057f18) wml_content_pane_comp8

0xa55f,	// (0x00057843) bg_popup_sub_pane_cp05

0xc9d7,	// (0x00059cbb) popup_wml_miniature_window_g1

0xc9df,	// (0x00059cc3) wml_miniature_view_pane

0x4be2,	// (0x00051ec6) aid_size_wml_view

0x4bea,	// (0x00051ece) wml_miniature_view_pane_g1

0x4bf3,	// (0x00051ed7) wml_miniature_view_pane_g2

0x4bfc,	// (0x00051ee0) wml_miniature_view_pane_g3

0x4c04,	// (0x00051ee8) wml_miniature_view_pane_g4

0x4c0c,	// (0x00051ef0) wml_miniature_view_pane_g5

0x4c14,	// (0x00051ef8) wml_miniature_view_pane_g6

0x4c1c,	// (0x00051f00) wml_miniature_view_pane_g7

0x4c24,	// (0x00051f08) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0005c957) wml_miniature_view_pane_g

0xc9e7,	// (0x00059ccb) background_graphic_ParamLimits

0xc9e7,	// (0x00059ccb) background_graphic

0xc9f3,	// (0x00059cd7) wml_tabs_2_pane

0xc9fc,	// (0x00059ce0) wml_tabs_3_pane_ParamLimits

0xc9fc,	// (0x00059ce0) wml_tabs_3_pane

0xca0e,	// (0x00059cf2) wml_tabs_4_pane_ParamLimits

0xca0e,	// (0x00059cf2) wml_tabs_4_pane

0xca24,	// (0x00059d08) wml_tabs_5_pane_ParamLimits

0xca24,	// (0x00059d08) wml_tabs_5_pane

0xca3e,	// (0x00059d22) wml_tabs_pane_g2_ParamLimits

0xca3e,	// (0x00059d22) wml_tabs_pane_g2

0xca52,	// (0x00059d36) wml_tabs_pane_g3_ParamLimits

0xca52,	// (0x00059d36) wml_tabs_pane_g3

0x4c2c,	// (0x00051f10) wml_tabs_2_active_pane_ParamLimits

0x4c2c,	// (0x00051f10) wml_tabs_2_active_pane

0x4c40,	// (0x00051f24) wml_tabs_2_passive_pane_ParamLimits

0x4c40,	// (0x00051f24) wml_tabs_2_passive_pane

0x4c54,	// (0x00051f38) wml_tabs_3_active_pane_cp_ParamLimits

0x4c54,	// (0x00051f38) wml_tabs_3_active_pane_cp

0x4c69,	// (0x00051f4d) wml_tabs_3_passive_pane_ParamLimits

0x4c69,	// (0x00051f4d) wml_tabs_3_passive_pane

0x4c7c,	// (0x00051f60) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c7c,	// (0x00051f60) wml_tabs_3_passive_pane_cp

0x4c93,	// (0x00051f77) tabs_4_active_pane

0x4c9b,	// (0x00051f7f) tabs_4_passive_pane

0x4ca5,	// (0x00051f89) tabs_4_passive_pane_cp

0x4cad,	// (0x00051f91) tabs_4_passive_pane_cp2

0x3d6f,	// (0x00051053) aid_height_text

0x3453,	// (0x00050737) mup_volume_cont_pane_ParamLimits

0x3453,	// (0x00050737) mup_volume_cont_pane

0x143d,	// (0x0004e721) aid_size_cell_pinb

0x1447,	// (0x0004e72b) aid_size_list_pinb

0x4b97,	// (0x00051e7b) mup2_volume_cont_pane_ParamLimits

0x4b97,	// (0x00051e7b) mup2_volume_cont_pane

0x9f20,	// (0x00057204) mup2_volume_cont_pane_g1_ParamLimits

0x9f20,	// (0x00057204) mup2_volume_cont_pane_g1

0x10ef,	// (0x0004e3d3) aid_size_cell_touch_ParamLimits

0x10ef,	// (0x0004e3d3) aid_size_cell_touch

0x132c,	// (0x0004e610) touch_pane_ParamLimits

0x132c,	// (0x0004e610) touch_pane

0x9876,	// (0x00056b5a) main_rss2_pane

0xca6f,	// (0x00059d53) listscroll_rss2_pane

0xca78,	// (0x00059d5c) rss2_navigation_pane

0xca80,	// (0x00059d64) list_rss2_pane

0xb29a,	// (0x0005857e) scroll_pane_cp22

0xca88,	// (0x00059d6c) rss2_navigation_pane_g1

0xca91,	// (0x00059d75) rss2_navigation_pane_g2

0xca99,	// (0x00059d7d) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0005c968) rss2_navigation_pane_g

0xcaa1,	// (0x00059d85) rss2_navigation_pane_t1

0x4cb7,	// (0x00051f9b) rss2_list_single_pane_ParamLimits

0x4cb7,	// (0x00051f9b) rss2_list_single_pane

0xcaaf,	// (0x00059d93) rss2_list_single_pane_t2

0xcabd,	// (0x00059da1) rss2_list_single_pane_t3_ParamLimits

0xcabd,	// (0x00059da1) rss2_list_single_pane_t3

0xcada,	// (0x00059dbe) rss2_list_single_pane_t4

0x2e57,	// (0x0005013b) smil_status_pane_g1

0xa551,	// (0x00057835) main_image2_pane_ParamLimits

0xa551,	// (0x00057835) main_image2_pane

0x4759,	// (0x00051a3d) main_camera2_pane_g9_ParamLimits

0x4759,	// (0x00051a3d) main_camera2_pane_g9

0x4887,	// (0x00051b6b) main_camera2_pane_t5_ParamLimits

0x4887,	// (0x00051b6b) main_camera2_pane_t5

0x9ef0,	// (0x000571d4) main_camera2_pane_t6_ParamLimits

0x9ef0,	// (0x000571d4) main_camera2_pane_t6

0x4ccd,	// (0x00051fb1) main_image2_pane_g1_ParamLimits

0x4ccd,	// (0x00051fb1) main_image2_pane_g1

0x3aaa,	// (0x00050d8e) smil2_video_pane_ParamLimits

0x3aaa,	// (0x00050d8e) smil2_video_pane

0x1127,	// (0x0004e40b) aid_zoom_text_primary_cp

0x98d4,	// (0x00056bb8) popup_preview_fixed_window

0xab70,	// (0x00057e54) im_reading_pane_g1

0x45d0,	// (0x000518b4) cams2_bc_adjust_pane_cp_ParamLimits

0x45d0,	// (0x000518b4) cams2_bc_adjust_pane_cp

0x48b6,	// (0x00051b9a) cams2_bc_adjust_pane_ParamLimits

0x48b6,	// (0x00051b9a) cams2_bc_adjust_pane

0x9f59,	// (0x0005723d) cams2_bc_adjust_pane_g1

0x9f61,	// (0x00057245) cams2_slider_pane

0x9f6a,	// (0x0005724e) cams2_slider_pane_g1

0x9f73,	// (0x00057257) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0005c96f) cams2_slider_pane_g

0x152f,	// (0x0004e813) calc_display_pane_ParamLimits

0x1554,	// (0x0004e838) calc_paper_pane_ParamLimits

0x1577,	// (0x0004e85b) grid_calc_pane_ParamLimits

0x9e09,	// (0x000570ed) popup_clock_digital_window_t1_ParamLimits

0xb749,	// (0x00058a2d) main_image_pane_t1

0x1511,	// (0x0004e7f5) aid_size_cell_calc_ParamLimits

0x1511,	// (0x0004e7f5) aid_size_cell_calc

0x409a,	// (0x0005137e) popup_blid_sat_info2_window_ParamLimits

0x409a,	// (0x0005137e) popup_blid_sat_info2_window

0xcaf0,	// (0x00059dd4) aid_size_cell_blid

0xcaf8,	// (0x00059ddc) bg_popup_window_pane_cp07

0xcb1b,	// (0x00059dff) grid_popup_blid_pane

0xcb25,	// (0x00059e09) heading_pane_cp05_ParamLimits

0xcb25,	// (0x00059e09) heading_pane_cp05

0xcbef,	// (0x00059ed3) cell_popup_blid_pane_ParamLimits

0xcbef,	// (0x00059ed3) cell_popup_blid_pane

0xcc13,	// (0x00059ef7) cell_popup_blid_pane_g1

0xcc1b,	// (0x00059eff) cell_popup_blid_pane_t1

0x4b67,	// (0x00051e4b) mup2_indicator_pane_ParamLimits

0x4b67,	// (0x00051e4b) mup2_indicator_pane

0xaa77,	// (0x00057d5b) mup2_visualizer_osc_pane

0xc9c5,	// (0x00059ca9) mup2_visualizer_spec_pane_ParamLimits

0xc9c5,	// (0x00059ca9) mup2_visualizer_spec_pane

0x4ce3,	// (0x00051fc7) mup2_spec_half_pane

0x4cec,	// (0x00051fd0) mup2_spec_half_pane_cp

0x4cf4,	// (0x00051fd8) mup2_spec_bar_pane_ParamLimits

0x4cf4,	// (0x00051fd8) mup2_spec_bar_pane

0xc966,	// (0x00059c4a) mup2_spec_bar_pane_g1

0xc970,	// (0x00059c54) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0005c8e2) mup2_spec_bar_pane_g

0x4d14,	// (0x00051ff8) mup2_osc_middle_pane

0xc982,	// (0x00059c66) mup2_visualizer_osc_pane_g1

0x98fe,	// (0x00056be2) popup_number_entry_window_t1_ParamLimits

0x9911,	// (0x00056bf5) popup_number_entry_window_t2_ParamLimits

0x9923,	// (0x00056c07) popup_number_entry_window_t3_ParamLimits

0x137e,	// (0x0004e662) popup_number_entry_window_t5_ParamLimits

0x137e,	// (0x0004e662) popup_number_entry_window_t5

0xf0af,	// (0x0005c393) popup_number_entry_window_t_ParamLimits

0x9935,	// (0x00056c19) text_title_cp2_ParamLimits

0x9e48,	// (0x0005712c) aid_hotspot_pointer_text2_pane

0x9e6e,	// (0x00057152) main_viewer_pane_g9_ParamLimits

0x9e6e,	// (0x00057152) main_viewer_pane_g9

0xada9,	// (0x0005808d) cale_month_pane_t1_ParamLimits

0xade6,	// (0x000580ca) bg_cale_pane_ParamLimits

0xadfe,	// (0x000580e2) list_cale_pane_ParamLimits

0xae0f,	// (0x000580f3) listscroll_cale_day_pane_t1

0xae21,	// (0x00058105) scroll_pane_cp09_ParamLimits

0x3489,	// (0x0005076d) main_mup_eq_pane_t1_ParamLimits

0x3489,	// (0x0005076d) main_mup_eq_pane_t1

0x34a3,	// (0x00050787) main_mup_eq_pane_t2_ParamLimits

0x34a3,	// (0x00050787) main_mup_eq_pane_t2

0x34bd,	// (0x000507a1) main_mup_eq_pane_t3_ParamLimits

0x34bd,	// (0x000507a1) main_mup_eq_pane_t3

0x34d9,	// (0x000507bd) main_mup_eq_pane_t4_ParamLimits

0x34d9,	// (0x000507bd) main_mup_eq_pane_t4

0x34f5,	// (0x000507d9) main_mup_eq_pane_t5_ParamLimits

0x34f5,	// (0x000507d9) main_mup_eq_pane_t5

0x3511,	// (0x000507f5) main_mup_eq_pane_t6_ParamLimits

0x3511,	// (0x000507f5) main_mup_eq_pane_t6

0x3525,	// (0x00050809) main_mup_eq_pane_t7_ParamLimits

0x3525,	// (0x00050809) main_mup_eq_pane_t7

0x3539,	// (0x0005081d) main_mup_eq_pane_t8_ParamLimits

0x3539,	// (0x0005081d) main_mup_eq_pane_t8

0x354d,	// (0x00050831) main_mup_eq_pane_t9_ParamLimits

0x354d,	// (0x00050831) main_mup_eq_pane_t9

0x3567,	// (0x0005084b) main_mup_eq_pane_t10_ParamLimits

0x3567,	// (0x0005084b) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0005c71e) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0005c71e) main_mup_eq_pane_t

0x3616,	// (0x000508fa) mup_equalizer_pane_cp5_ParamLimits

0x362a,	// (0x0005090e) mup_equalizer_pane_cp6_ParamLimits

0x363e,	// (0x00050922) mup_equalizer_pane_cp7_ParamLimits

0x9876,	// (0x00056b5a) main_gallery_pane

0xc98b,	// (0x00059c6f) smil2_volume_pane

0xc993,	// (0x00059c77) smil_status_volume_pane_g1_ParamLimits

0xc9a6,	// (0x00059c8a) smil_status_volume_pane_g2_ParamLimits

0x9ece,	// (0x000571b2) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0005c8e7) smil_status_volume_pane_g_ParamLimits

0xcaf8,	// (0x00059ddc) bg_popup_window_pane_cp07_ParamLimits

0xcb06,	// (0x00059dea) blid_firmament_pane

0x4d1d,	// (0x00052001) aid_size_cell_gallery_ParamLimits

0x4d1d,	// (0x00052001) aid_size_cell_gallery

0x4d33,	// (0x00052017) grid_gallery_pane_ParamLimits

0x4d33,	// (0x00052017) grid_gallery_pane

0x4d4c,	// (0x00052030) cell_gallery_pane_ParamLimits

0x4d4c,	// (0x00052030) cell_gallery_pane

0xcc29,	// (0x00059f0d) bg_cell_gallery_focus_pane_ParamLimits

0xcc29,	// (0x00059f0d) bg_cell_gallery_focus_pane

0xcc3b,	// (0x00059f1f) cell_gallery_pane_g1_ParamLimits

0xcc3b,	// (0x00059f1f) cell_gallery_pane_g1

0x4d95,	// (0x00052079) cell_gallery_pane_g2_ParamLimits

0x4d95,	// (0x00052079) cell_gallery_pane_g2

0x4da2,	// (0x00052086) cell_gallery_pane_g3_ParamLimits

0x4da2,	// (0x00052086) cell_gallery_pane_g3

0xcc47,	// (0x00059f2b) cell_gallery_pane_g4_ParamLimits

0xcc47,	// (0x00059f2b) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0005c995) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0005c995) cell_gallery_pane_g

0xcc53,	// (0x00059f37) bg_cell_gallery_focus_pane_g1

0xcc5b,	// (0x00059f3f) bg_cell_gallery_focus_pane_g2

0xcc63,	// (0x00059f47) bg_cell_gallery_focus_pane_g3

0xcc6b,	// (0x00059f4f) bg_cell_gallery_focus_pane_g4

0xcc73,	// (0x00059f57) bg_cell_gallery_focus_pane_g5

0xcc7b,	// (0x00059f5f) bg_cell_gallery_focus_pane_g6

0xcc83,	// (0x00059f67) bg_cell_gallery_focus_pane_g7

0xcc8b,	// (0x00059f6f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0005c99e) bg_cell_gallery_focus_pane_g

0xcc93,	// (0x00059f77) aid_firma_cardinal

0xcca7,	// (0x00059f8b) blid_firmament_pane_t1

0xccbe,	// (0x00059fa2) blid_firmament_pane_t2

0xccd5,	// (0x00059fb9) blid_firmament_pane_t3

0xccec,	// (0x00059fd0) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0005c9af) blid_firmament_pane_t

0xcd03,	// (0x00059fe7) blid_sat_info_pane

0xcd13,	// (0x00059ff7) blid_sat_info_pane_g1

0xcd13,	// (0x00059ff7) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0005c9b8) blid_sat_info_pane_g

0xcd1d,	// (0x0005a001) blid_sat_info_pane_t1

0xcd2b,	// (0x0005a00f) smil2_volume_content_pane

0xcd34,	// (0x0005a018) smil2_volume_pane_g1

0xa90c,	// (0x00057bf0) smil2_volume_content_pane_g1

0xcd3c,	// (0x0005a020) smil2_volume_content_pane_g2

0xcd45,	// (0x0005a029) smil2_volume_content_pane_g3

0xcd4e,	// (0x0005a032) smil2_volume_content_pane_g4

0xcd57,	// (0x0005a03b) smil2_volume_content_pane_g5

0xcd60,	// (0x0005a044) smil2_volume_content_pane_g6

0xcd69,	// (0x0005a04d) smil2_volume_content_pane_g7

0xcd72,	// (0x0005a056) smil2_volume_content_pane_g8

0xcd7b,	// (0x0005a05f) smil2_volume_content_pane_g9

0xcd84,	// (0x0005a068) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0005c9bd) smil2_volume_content_pane_g

0x1ada,	// (0x0004edbe) cale_week_day_heading_pane_t1_ParamLimits

0x1b04,	// (0x0004ede8) cale_week_day_heading_pane_t2_ParamLimits

0x1b33,	// (0x0004ee17) cale_week_day_heading_pane_t3_ParamLimits

0x1b62,	// (0x0004ee46) cale_week_day_heading_pane_t4_ParamLimits

0x1b91,	// (0x0004ee75) cale_week_day_heading_pane_t5_ParamLimits

0x1bc8,	// (0x0004eeac) cale_week_day_heading_pane_t6_ParamLimits

0x1bff,	// (0x0004eee3) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0005c49a) cale_week_day_heading_pane_t_ParamLimits

0xaa1c,	// (0x00057d00) bg_cale_side_pane_ParamLimits

0x1c29,	// (0x0004ef0d) cale_week_time_pane_t1_ParamLimits

0x1c43,	// (0x0004ef27) cale_week_time_pane_t2_ParamLimits

0x1c5d,	// (0x0004ef41) cale_week_time_pane_t3_ParamLimits

0x1c77,	// (0x0004ef5b) cale_week_time_pane_t4_ParamLimits

0x1c91,	// (0x0004ef75) cale_week_time_pane_t5_ParamLimits

0x1cab,	// (0x0004ef8f) cale_week_time_pane_t6_ParamLimits

0x1cc5,	// (0x0004efa9) cale_week_time_pane_t7_ParamLimits

0x1cdf,	// (0x0004efc3) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0005c4a9) cale_week_time_pane_t_ParamLimits

0x1cff,	// (0x0004efe3) cell_cale_week_pane_g2_ParamLimits

0xaa1c,	// (0x00057d00) bg_cale_side_pane_cp01_ParamLimits

0x2c5c,	// (0x0004ff40) cale_month_week_pane_t1_ParamLimits

0x2c75,	// (0x0004ff59) cale_month_week_pane_t2_ParamLimits

0x2c8e,	// (0x0004ff72) cale_month_week_pane_t3_ParamLimits

0x2ca7,	// (0x0004ff8b) cale_month_week_pane_t4_ParamLimits

0x2cc0,	// (0x0004ffa4) cale_month_week_pane_t5_ParamLimits

0x2cd9,	// (0x0004ffbd) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0005c57e) cale_month_week_pane_t_ParamLimits

0x9d89,	// (0x0005706d) cell_cale_month_pane_g1_ParamLimits

0x9876,	// (0x00056b5a) main_cale_event_viewer_pane

0x9876,	// (0x00056b5a) listscroll_cale_event_viewer_pane

0xcd8d,	// (0x0005a071) list_cale_ev_pane

0xcd95,	// (0x0005a079) scroll_pane_cp023

0xcda1,	// (0x0005a085) field_cale_ev_pane_ParamLimits

0xcda1,	// (0x0005a085) field_cale_ev_pane

0xcdbf,	// (0x0005a0a3) field_cale_ev_content_pane_ParamLimits

0xcdbf,	// (0x0005a0a3) field_cale_ev_content_pane

0xcdcb,	// (0x0005a0af) field_cale_ev_pane_g1_ParamLimits

0xcdcb,	// (0x0005a0af) field_cale_ev_pane_g1

0xcdd7,	// (0x0005a0bb) field_cale_ev_pane_g2_ParamLimits

0xcdd7,	// (0x0005a0bb) field_cale_ev_pane_g2

0xcdef,	// (0x0005a0d3) field_cale_ev_pane_g3_ParamLimits

0xcdef,	// (0x0005a0d3) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0005c9d2) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0005c9d2) field_cale_ev_pane_g

0xce07,	// (0x0005a0eb) field_cale_ev_pane_t1_ParamLimits

0xce07,	// (0x0005a0eb) field_cale_ev_pane_t1

0xa98f,	// (0x00057c73) field_cale_ev_content_pane_t1_ParamLimits

0xa98f,	// (0x00057c73) field_cale_ev_content_pane_t1

0xb62f,	// (0x00058913) bg_button_pane_cp01

0x1807,	// (0x0004eaeb) listscroll_cale_week_pane_ParamLimits

0xa9c7,	// (0x00057cab) popup_toolbar_window_cp01

0xa9ed,	// (0x00057cd1) listscroll_cale_week_pane_t1_ParamLimits

0x1807,	// (0x0004eaeb) listscroll_cale_day_pane_ParamLimits

0xa9c7,	// (0x00057cab) popup_toolbar_window_cp02

0xae0f,	// (0x000580f3) listscroll_cale_day_pane_t1_ParamLimits

0x1807,	// (0x0004eaeb) main_cale_month_pane_ParamLimits

0x9eb9,	// (0x0005719d) popup_toolbar_window_cp03_ParamLimits

0x9eb9,	// (0x0005719d) popup_toolbar_window_cp03

0x3972,	// (0x00050c56) main_image_pane_g2_ParamLimits

0x3972,	// (0x00050c56) main_image_pane_g2

0x3983,	// (0x00050c67) main_image_pane_g3_ParamLimits

0x3983,	// (0x00050c67) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0005c7b0) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0005c7b0) main_image_pane_g

0xb749,	// (0x00058a2d) main_image_pane_t1_ParamLimits

0x3994,	// (0x00050c78) main_image_pane_t2_ParamLimits

0x3994,	// (0x00050c78) main_image_pane_t2

0x39a6,	// (0x00050c8a) main_image_pane_t3_ParamLimits

0x39a6,	// (0x00050c8a) main_image_pane_t3

0x39ce,	// (0x00050cb2) main_image_pane_t4_ParamLimits

0x39ce,	// (0x00050cb2) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0005c7b7) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0005c7b7) main_image_pane_t

0x39ee,	// (0x00050cd2) popup_image_details_window_cp01

0x39f8,	// (0x00050cdc) popup_toobar_trans_pane_cp01_ParamLimits

0x39f8,	// (0x00050cdc) popup_toobar_trans_pane_cp01

0x416b,	// (0x0005144f) popup_image_details_window_ParamLimits

0x416b,	// (0x0005144f) popup_image_details_window

0x9e8c,	// (0x00057170) popup_image_focus_window

0x458a,	// (0x0005186e) camera2_autofocus_pane_ParamLimits

0x458a,	// (0x0005186e) camera2_autofocus_pane

0x9876,	// (0x00056b5a) bg_popup_sub_pane_cp06

0xce1e,	// (0x0005a102) popup_image_focus_window_g1

0xce26,	// (0x0005a10a) popup_image_focus_window_g2

0xce2e,	// (0x0005a112) popup_image_focus_window_g3

0xce36,	// (0x0005a11a) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0005c9d9) popup_image_focus_window_g

0xce3e,	// (0x0005a122) popup_image_focus_window_t1

0xce4c,	// (0x0005a130) popup_image_focus_window_t2

0xce5c,	// (0x0005a140) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0005c9e2) popup_image_focus_window_t

0xce6a,	// (0x0005a14e) camera2_autofocus_pane_g1

0xa551,	// (0x00057835) bg_tb_trans_pane_cp01

0xce78,	// (0x0005a15c) popup_image_details_window_g1

0xce8b,	// (0x0005a16f) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0005c9f4) popup_image_details_window_g

0xceb4,	// (0x0005a198) popup_image_details_window_t1

0xcec6,	// (0x0005a1aa) popup_image_details_window_t2

0xcedf,	// (0x0005a1c3) popup_image_details_window_t3

0xcef3,	// (0x0005a1d7) popup_image_details_window_t4

0xcf0e,	// (0x0005a1f2) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0005c9fb) popup_image_details_window_t

0xa877,	// (0x00057b5b) bg_calc_paper_pane_ParamLimits

0x9876,	// (0x00056b5a) grid_highlight_pane_cp013

0x9cf9,	// (0x00056fdd) list_calc_pane_ParamLimits

0x9d0b,	// (0x00056fef) scroll_pane_cp024

0xa88b,	// (0x00057b6f) bg_calc_display_pane_ParamLimits

0x1675,	// (0x0004e959) calc_display_pane_t1_ParamLimits

0x1687,	// (0x0004e96b) calc_display_pane_t2_ParamLimits

0x9d13,	// (0x00056ff7) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0005c41a) calc_display_pane_t_ParamLimits

0x1741,	// (0x0004ea25) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0005c437) cell_calc_pane_g

0x174a,	// (0x0004ea2e) cell_calc_pane_t1

0xa8ea,	// (0x00057bce) grid_highlight_pane_cp02_ParamLimits

0xa900,	// (0x00057be4) toolbar_button_pane_cp01_ParamLimits

0xa900,	// (0x00057be4) toolbar_button_pane_cp01

0xb78e,	// (0x00058a72) temp_image_control_pane_ParamLimits

0xb78e,	// (0x00058a72) temp_image_control_pane

0xa551,	// (0x00057835) main_mp3_pane

0xcf28,	// (0x0005a20c) temp_image_control_pane_g1_ParamLimits

0xcf28,	// (0x0005a20c) temp_image_control_pane_g1

0xcf36,	// (0x0005a21a) temp_image_control_pane_g2_ParamLimits

0xcf36,	// (0x0005a21a) temp_image_control_pane_g2

0xcf48,	// (0x0005a22c) temp_image_control_pane_g3_ParamLimits

0xcf48,	// (0x0005a22c) temp_image_control_pane_g3

0x4ddf,	// (0x000520c3) temp_image_control_pane_g4_ParamLimits

0x4ddf,	// (0x000520c3) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0005ca06) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0005ca06) temp_image_control_pane_g

0xcf28,	// (0x0005a20c) main_mp3_pane_g1

0x4df2,	// (0x000520d6) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0005ca0f) main_mp3_pane_g

0xcf8b,	// (0x0005a26f) main_mp3_pane_t1

0xaa7f,	// (0x00057d63) main_camera_pane_g8_ParamLimits

0xaa7f,	// (0x00057d63) main_camera_pane_g8

0x2003,	// (0x0004f2e7) main_video_pane_g7_ParamLimits

0x2003,	// (0x0004f2e7) main_video_pane_g7

0x9f0e,	// (0x000571f2) main_camera2_pane_t7_ParamLimits

0x9f0e,	// (0x000571f2) main_camera2_pane_t7

0xabc7,	// (0x00057eab) scroll_pane_cp025_ParamLimits

0xabc7,	// (0x00057eab) scroll_pane_cp025

0xabdb,	// (0x00057ebf) scroll_pane_cp026_ParamLimits

0xabdb,	// (0x00057ebf) scroll_pane_cp026

0xabea,	// (0x00057ece) wml_content_pane_ParamLimits

0x9876,	// (0x00056b5a) main_touch_calib_pane

0x4ec6,	// (0x000521aa) main_touch_calib_pane_g1

0x4ed8,	// (0x000521bc) main_touch_calib_pane_g2

0x4eea,	// (0x000521ce) main_touch_calib_pane_g3

0x4efc,	// (0x000521e0) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0005ca2d) main_touch_calib_pane_g

0x4f0e,	// (0x000521f2) main_touch_calib_pane_t1

0x4f28,	// (0x0005220c) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0005ca36) main_touch_calib_pane_t

0xb369,	// (0x0005864d) mup_progress_pane_cp02

0xb39e,	// (0x00058682) navi_pane_g1

0xb459,	// (0x0005873d) navi_pane_mp_t3

0xa551,	// (0x00057835) main_mp3_pane_ParamLimits

0x42f6,	// (0x000515da) navi_pane_ParamLimits

0xcf28,	// (0x0005a20c) main_mp3_pane_g1_ParamLimits

0x4df2,	// (0x000520d6) main_mp3_pane_g2_ParamLimits

0x4e00,	// (0x000520e4) main_mp3_pane_g3_ParamLimits

0x4e00,	// (0x000520e4) main_mp3_pane_g3

0x4e0e,	// (0x000520f2) main_mp3_pane_g4_ParamLimits

0x4e0e,	// (0x000520f2) main_mp3_pane_g4

0xcf58,	// (0x0005a23c) main_mp3_pane_g5_ParamLimits

0xcf58,	// (0x0005a23c) main_mp3_pane_g5

0xcf66,	// (0x0005a24a) main_mp3_pane_g6_ParamLimits

0xcf66,	// (0x0005a24a) main_mp3_pane_g6

0xcf73,	// (0x0005a257) main_mp3_pane_g7_ParamLimits

0xcf73,	// (0x0005a257) main_mp3_pane_g7

0xcf7f,	// (0x0005a263) main_mp3_pane_g8_ParamLimits

0xcf7f,	// (0x0005a263) main_mp3_pane_g8

0xf72b,	// (0x0005ca0f) main_mp3_pane_g_ParamLimits

0x4e1a,	// (0x000520fe) main_mp3_pane_t2

0x4e28,	// (0x0005210c) main_mp3_pane_t3

0xcf99,	// (0x0005a27d) main_mp3_pane_t4

0xcfa7,	// (0x0005a28b) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0005ca20) main_mp3_pane_t

0xcfb5,	// (0x0005a299) mup_progress_pane_cp01

0x1127,	// (0x0004e40b) aid_zoom_text_secondary2

0xcd8d,	// (0x0005a071) list_cale_ev2_pane

0xcd95,	// (0x0005a079) scroll_pane_cp023_ParamLimits

0x4f7e,	// (0x00052262) field_cale_ev2_pane_ParamLimits

0x4f7e,	// (0x00052262) field_cale_ev2_pane

0x4f9f,	// (0x00052283) field_cale_ev2_pane_g1_ParamLimits

0x4f9f,	// (0x00052283) field_cale_ev2_pane_g1

0x4fab,	// (0x0005228f) field_cale_ev2_pane_g2_ParamLimits

0x4fab,	// (0x0005228f) field_cale_ev2_pane_g2

0x4fc3,	// (0x000522a7) field_cale_ev2_pane_g3_ParamLimits

0x4fc3,	// (0x000522a7) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0005ca41) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0005ca41) field_cale_ev2_pane_g

0x4fe7,	// (0x000522cb) field_cale_ev2_pane_t1_ParamLimits

0x4fe7,	// (0x000522cb) field_cale_ev2_pane_t1

0x4ffe,	// (0x000522e2) field_cale_ev2_pane_t2_ParamLimits

0x4ffe,	// (0x000522e2) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0005ca4a) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0005ca4a) field_cale_ev2_pane_t

0x3826,	// (0x00050b0a) main_postcard_pane_g5_ParamLimits

0x3826,	// (0x00050b0a) main_postcard_pane_g5

0x383c,	// (0x00050b20) main_postcard_pane_g6_ParamLimits

0x383c,	// (0x00050b20) main_postcard_pane_g6

0x1dc9,	// (0x0004f0ad) camera2_autofocus_pane_cp_ParamLimits

0x1dc9,	// (0x0004f0ad) camera2_autofocus_pane_cp

0xa551,	// (0x00057835) main_mup3_pane

0x5057,	// (0x0005233b) main_mup3_pane_g1_ParamLimits

0x5057,	// (0x0005233b) main_mup3_pane_g1

0x5079,	// (0x0005235d) main_mup3_pane_g2_ParamLimits

0x5079,	// (0x0005235d) main_mup3_pane_g2

0x50f9,	// (0x000523dd) main_mup3_pane_g3_ParamLimits

0x50f9,	// (0x000523dd) main_mup3_pane_g3

0x513f,	// (0x00052423) main_mup3_pane_g4_ParamLimits

0x513f,	// (0x00052423) main_mup3_pane_g4

0x5185,	// (0x00052469) main_mup3_pane_g5_ParamLimits

0x5185,	// (0x00052469) main_mup3_pane_g5

0x51cb,	// (0x000524af) main_mup3_pane_g6_ParamLimits

0x51cb,	// (0x000524af) main_mup3_pane_g6

0xcfbd,	// (0x0005a2a1) main_mup3_pane_g7_ParamLimits

0xcfbd,	// (0x0005a2a1) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0005ca5a) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0005ca5a) main_mup3_pane_g

0x5249,	// (0x0005252d) main_mup3_pane_t1_ParamLimits

0x5249,	// (0x0005252d) main_mup3_pane_t1

0x52bd,	// (0x000525a1) main_mup3_pane_t2_ParamLimits

0x52bd,	// (0x000525a1) main_mup3_pane_t2

0x5391,	// (0x00052675) main_mup3_pane_t4_ParamLimits

0x5391,	// (0x00052675) main_mup3_pane_t4

0x53e7,	// (0x000526cb) main_mup3_pane_t5_ParamLimits

0x53e7,	// (0x000526cb) main_mup3_pane_t5

0x54a3,	// (0x00052787) main_mup3_pane_t6_ParamLimits

0x54a3,	// (0x00052787) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0005ca6b) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0005ca6b) main_mup3_pane_t

0x555b,	// (0x0005283f) mup3_progress_pane_ParamLimits

0x555b,	// (0x0005283f) mup3_progress_pane

0x55e7,	// (0x000528cb) popup_mup3_control_window_ParamLimits

0x55e7,	// (0x000528cb) popup_mup3_control_window

0xcfcb,	// (0x0005a2af) popup_mup3_text_window

0x5619,	// (0x000528fd) mup3_progress_pane_t1

0x5638,	// (0x0005291c) mup3_progress_pane_t2

0xcfd3,	// (0x0005a2b7) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0005ca78) mup3_progress_pane_t

0xcff0,	// (0x0005a2d4) mup_progress_pane_cp03

0x9876,	// (0x00056b5a) bg_tb_trans_pane_cp04

0x5657,	// (0x0005293b) mup3_volume_pane

0x565f,	// (0x00052943) popup_mup3_control_window_g1

0x5668,	// (0x0005294c) mup3_volume_pane_g1

0x5671,	// (0x00052955) mup3_volume_pane_g2

0x567a,	// (0x0005295e) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0005ca7f) mup3_volume_pane_g

0x9876,	// (0x00056b5a) bg_tb_trans_pane_cp03

0xd000,	// (0x0005a2e4) popup_mup3_text_window_g1

0xd008,	// (0x0005a2ec) popup_mup3_text_window_t1

0xa8d3,	// (0x00057bb7) list_calc_item_pane_g1_ParamLimits

0xca66,	// (0x00059d4a) mup_volume_pane_cp_g1

0x4f42,	// (0x00052226) main_touch_calib_pane_t3

0x4f56,	// (0x0005223a) main_touch_calib_pane_t4

0x4f6a,	// (0x0005224e) main_touch_calib_pane_t5

0x9880,	// (0x00056b64) aid_cell_size_toolbar2

0x9888,	// (0x00056b6c) aid_popup3_width_pane

0x111f,	// (0x0004e403) aid_zoom_text_msg_primary

0x1da8,	// (0x0004f08c) vorec_t7

0xa897,	// (0x00057b7b) bg_calc_paper_pane_g1_ParamLimits

0xa8a3,	// (0x00057b87) bg_calc_paper_pane_g2_ParamLimits

0xa8af,	// (0x00057b93) bg_calc_paper_pane_g3_ParamLimits

0xa8bb,	// (0x00057b9f) bg_calc_paper_pane_g4_ParamLimits

0xa8c7,	// (0x00057bab) bg_calc_paper_pane_g5_ParamLimits

0x16ce,	// (0x0004e9b2) bg_calc_paper_pane_g6_ParamLimits

0x16dd,	// (0x0004e9c1) bg_calc_paper_pane_g7_ParamLimits

0x16ec,	// (0x0004e9d0) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0005c421) bg_calc_paper_pane_g_ParamLimits

0x16ff,	// (0x0004e9e3) calc_bg_paper_pane_g9_ParamLimits

0x1f15,	// (0x0004f1f9) image_qvga_pane_ParamLimits

0x1f15,	// (0x0004f1f9) image_qvga_pane

0xa7ba,	// (0x00057a9e) bg_popup_sub_pane_cp04_ParamLimits

0xb6c5,	// (0x000589a9) popup_mup_playback_window_g1_ParamLimits

0xb6d1,	// (0x000589b5) popup_mup_playback_window_t1_ParamLimits

0xb6e6,	// (0x000589ca) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0005c7ab) popup_mup_playback_window_t_ParamLimits

0x4a81,	// (0x00051d65) main_mup2_pane_g3_ParamLimits

0x4a81,	// (0x00051d65) main_mup2_pane_g3

0x2212,	// (0x0004f4f6) popup_toolbar_window_cp04

0xbadb,	// (0x00058dbf) popup_call2_audio_second_window_g3_ParamLimits

0xbadb,	// (0x00058dbf) popup_call2_audio_second_window_g3

0xbee5,	// (0x000591c9) popup_call2_audio_first_window_g4_ParamLimits

0xbee5,	// (0x000591c9) popup_call2_audio_first_window_g4

0xc564,	// (0x00059848) popup_call2_audio_in_window_g4_ParamLimits

0xc564,	// (0x00059848) popup_call2_audio_in_window_g4

0x3954,	// (0x00050c38) aid_area_sk_bg_cut_ParamLimits

0x3954,	// (0x00050c38) aid_area_sk_bg_cut

0xb6fb,	// (0x000589df) aid_area_sk_bg_cut_2_ParamLimits

0xb6fb,	// (0x000589df) aid_area_sk_bg_cut_2

0x4d85,	// (0x00052069) aid_placing_details_win

0x4d8d,	// (0x00052071) aid_placing_details_win_2

0xce6a,	// (0x0005a14e) camera2_autofocus_pane_g1_ParamLimits

0x12c5,	// (0x0004e5a9) popup_fixed_preview_cale_window_ParamLimits

0x12c5,	// (0x0004e5a9) popup_fixed_preview_cale_window

0xb4d7,	// (0x000587bb) navi_slider_pane_g3

0xb4e0,	// (0x000587c4) navi_slider_pane_g4

0xb4e9,	// (0x000587cd) navi_slider_pane_g5

0xb4d7,	// (0x000587bb) navi_slider_pane_g6

0x9e2f,	// (0x00057113) navi_slider_pane_g7

0xb5fc,	// (0x000588e0) mup_scale_pane_g3

0xb605,	// (0x000588e9) mup_scale_pane_g4

0xb60e,	// (0x000588f2) mup_scale_pane_g5

0x3652,	// (0x00050936) mup_scale_pane_g6

0x365b,	// (0x0005093f) mup_scale_pane_g7

0xb4d7,	// (0x000587bb) cams2_slider_pane_g3

0xcae8,	// (0x00059dcc) cams2_slider_pane_g4

0x9f7c,	// (0x00057260) cams2_slider_pane_g5

0xb4d7,	// (0x000587bb) cams2_slider_pane_g6

0x9f84,	// (0x00057268) cams2_slider_pane_g7

0xcd13,	// (0x00059ff7) camera2_autofocus_pane_cp_g1

0xc8ff,	// (0x00059be3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8ff,	// (0x00059be3) bg_popup_preview_window_pane_cp02

0xd016,	// (0x0005a2fa) list_fp_cale_pane_ParamLimits

0xd016,	// (0x0005a2fa) list_fp_cale_pane

0xd022,	// (0x0005a306) popup_fixed_preview_cale_window_t1_ParamLimits

0xd022,	// (0x0005a306) popup_fixed_preview_cale_window_t1

0x5683,	// (0x00052967) popup_fixed_preview_cale_window_t2_ParamLimits

0x5683,	// (0x00052967) popup_fixed_preview_cale_window_t2

0x5698,	// (0x0005297c) popup_fixed_preview_cale_window_t3_ParamLimits

0x5698,	// (0x0005297c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0005ca86) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0005ca86) popup_fixed_preview_cale_window_t

0x56ad,	// (0x00052991) list_single_fp_cale_pane_ParamLimits

0x56ad,	// (0x00052991) list_single_fp_cale_pane

0xd040,	// (0x0005a324) list_single_fp_cale_pane_g1_ParamLimits

0xd040,	// (0x0005a324) list_single_fp_cale_pane_g1

0xd04c,	// (0x0005a330) list_single_fp_cale_pane_g2_ParamLimits

0xd04c,	// (0x0005a330) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0005ca8d) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0005ca8d) list_single_fp_cale_pane_g

0xd065,	// (0x0005a349) list_single_fp_cale_pane_t1_ParamLimits

0xd065,	// (0x0005a349) list_single_fp_cale_pane_t1

0xd077,	// (0x0005a35b) list_single_fp_cale_pane_t2_ParamLimits

0xd077,	// (0x0005a35b) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0005ca94) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0005ca94) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9876,	// (0x00056b5a) main_dialer_pane

0x56c3,	// (0x000529a7) aid_cell_size_keypad

0x56cd,	// (0x000529b1) dialer_ne_pane

0x56d5,	// (0x000529b9) grid_dialer_command_1_pane

0x56dd,	// (0x000529c1) grid_dialer_command_2_pane

0x56e5,	// (0x000529c9) grid_dialer_keypad_pane

0x56f7,	// (0x000529db) bg_popup_call_pane_cp06_ParamLimits

0x56f7,	// (0x000529db) bg_popup_call_pane_cp06

0x5703,	// (0x000529e7) dialer_ne_clear_pane_ParamLimits

0x5703,	// (0x000529e7) dialer_ne_clear_pane

0xd0aa,	// (0x0005a38e) dialer_ne_pane_g1

0xd0b2,	// (0x0005a396) dialer_ne_pane_t1_ParamLimits

0xd0b2,	// (0x0005a396) dialer_ne_pane_t1

0x570f,	// (0x000529f3) dialer_ne_pane_t2_ParamLimits

0x570f,	// (0x000529f3) dialer_ne_pane_t2

0x5739,	// (0x00052a1d) dialer_ne_pane_t3_ParamLimits

0x5739,	// (0x00052a1d) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0005ca99) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0005ca99) dialer_ne_pane_t

0x5769,	// (0x00052a4d) dialer_ne_pane_t3_copy1_ParamLimits

0x5769,	// (0x00052a4d) dialer_ne_pane_t3_copy1

0x5798,	// (0x00052a7c) cell_dialer_keypad_pane_ParamLimits

0x5798,	// (0x00052a7c) cell_dialer_keypad_pane

0x57af,	// (0x00052a93) cell_dialer_command_1_pane_ParamLimits

0x57af,	// (0x00052a93) cell_dialer_command_1_pane

0x57c5,	// (0x00052aa9) cell_dialer_command_2_pane_ParamLimits

0x57c5,	// (0x00052aa9) cell_dialer_command_2_pane

0xd0c4,	// (0x0005a3a8) bg_button_pane_cp02_ParamLimits

0xd0c4,	// (0x0005a3a8) bg_button_pane_cp02

0x57d4,	// (0x00052ab8) cell_dialer_keypad_pane_g1_ParamLimits

0x57d4,	// (0x00052ab8) cell_dialer_keypad_pane_g1

0xd0c4,	// (0x0005a3a8) bg_button_pane_cp03_ParamLimits

0xd0c4,	// (0x0005a3a8) bg_button_pane_cp03

0x57e8,	// (0x00052acc) cell_dialer_command_1_pane_g1_ParamLimits

0x57e8,	// (0x00052acc) cell_dialer_command_1_pane_g1

0xd0d0,	// (0x0005a3b4) bg_button_pane_cp04

0x57fc,	// (0x00052ae0) cell_dialer_command_2_pane_g1

0xaa77,	// (0x00057d5b) bg_button_pane_cp06

0xd0d8,	// (0x0005a3bc) dialer_ne_clear_pane_g1

0xb3aa,	// (0x0005868e) navi_pane_g2

0xb3d8,	// (0x000586bc) navi_pane_g3

0x0002,

0xf3ca,	// (0x0005c6ae) navi_pane_g

0xb467,	// (0x0005874b) navi_pane_mv_g2

0xb48e,	// (0x00058772) navi_pane_mv_g5

0x3220,	// (0x00050504) navi_pane_mv_t1

0xa88b,	// (0x00057b6f) main_clock2_pane

0xa551,	// (0x00057835) main_clock2_list_pane_ParamLimits

0xa551,	// (0x00057835) main_clock2_list_pane

0x586d,	// (0x00052b51) main_clock2_pane_t1_ParamLimits

0x586d,	// (0x00052b51) main_clock2_pane_t1

0x58a8,	// (0x00052b8c) main_clock2_pane_t2_ParamLimits

0x58a8,	// (0x00052b8c) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0005caa5) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0005caa5) main_clock2_pane_t

0x5948,	// (0x00052c2c) popup_clock_analogue_window_cp03_ParamLimits

0x5948,	// (0x00052c2c) popup_clock_analogue_window_cp03

0x596d,	// (0x00052c51) popup_clock_digital_window_cp02_ParamLimits

0x596d,	// (0x00052c51) popup_clock_digital_window_cp02

0x59e6,	// (0x00052cca) main_clock2_list_single_pane_ParamLimits

0x59e6,	// (0x00052cca) main_clock2_list_single_pane

0xaa77,	// (0x00057d5b) list_highlight_pane_cp05

0xd112,	// (0x0005a3f6) main_clock2_list_single_pane_t1

0x2212,	// (0x0004f4f6) popup_toolbar_window_cp04_ParamLimits

0x4daf,	// (0x00052093) camera2_autofocus_pane_g2_ParamLimits

0x4daf,	// (0x00052093) camera2_autofocus_pane_g2

0x4dbb,	// (0x0005209f) camera2_autofocus_pane_g3_ParamLimits

0x4dbb,	// (0x0005209f) camera2_autofocus_pane_g3

0x4dc7,	// (0x000520ab) camera2_autofocus_pane_g4_ParamLimits

0x4dc7,	// (0x000520ab) camera2_autofocus_pane_g4

0x4dd3,	// (0x000520b7) camera2_autofocus_pane_g5_ParamLimits

0x4dd3,	// (0x000520b7) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0005c9e9) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0005c9e9) camera2_autofocus_pane_g

0x5013,	// (0x000522f7) camera2_autofocus_pane_cp_g2

0x501b,	// (0x000522ff) camera2_autofocus_pane_cp_g3

0x5023,	// (0x00052307) camera2_autofocus_pane_cp_g4

0x502b,	// (0x0005230f) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0005ca4f) camera2_autofocus_pane_cp_g

0x56ef,	// (0x000529d3) popup_dialer_spcha_window

0x9876,	// (0x00056b5a) bg_popup_sub_pane_cp07

0xd120,	// (0x0005a404) list_spcha_pane

0xd128,	// (0x0005a40c) list_single_spcha_pane_ParamLimits

0xd128,	// (0x0005a40c) list_single_spcha_pane

0x9876,	// (0x00056b5a) list_highlight_pane_cp06

0xd139,	// (0x0005a41d) list_single_spcha_pane_t1

0xc30e,	// (0x000595f2) popup_call2_audio_out_window_g4_ParamLimits

0xc30e,	// (0x000595f2) popup_call2_audio_out_window_g4

0x9876,	// (0x00056b5a) main_imed2_pane

0x9e94,	// (0x00057178) popup_imed_adjust2_window

0x4183,	// (0x00051467) popup_imed_trans_window_ParamLimits

0x4183,	// (0x00051467) popup_imed_trans_window

0xcb51,	// (0x00059e35) popup_blid_sat_info2_window_t1

0xcb5f,	// (0x00059e43) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0005c97e) popup_blid_sat_info2_window_t

0x5a97,	// (0x00052d7b) aid_size_cell_colour_35

0x5ab7,	// (0x00052d9b) aid_size_cell_colour_112

0x5ad7,	// (0x00052dbb) aid_size_cell_effect

0xc90b,	// (0x00059bef) bg_tb_trans_pane_cp02

0xaf18,	// (0x000581fc) heading_imed_pane

0x5af7,	// (0x00052ddb) listscroll_imed_pane

0xd147,	// (0x0005a42b) heading_imed_pane_g1

0xd14f,	// (0x0005a433) heading_imed_pane_t1

0xd15d,	// (0x0005a441) grid_imed_colour_35_pane_ParamLimits

0xd15d,	// (0x0005a441) grid_imed_colour_35_pane

0x5b03,	// (0x00052de7) grid_imed_effect_pane

0xd175,	// (0x0005a459) list_imed_aspect_pane

0x5b19,	// (0x00052dfd) scroll_pane_cp027_ParamLimits

0x5b19,	// (0x00052dfd) scroll_pane_cp027

0x5b2a,	// (0x00052e0e) cell_imed_effect_pane_ParamLimits

0x5b2a,	// (0x00052e0e) cell_imed_effect_pane

0xd17d,	// (0x0005a461) cell_imed_colour_pane_ParamLimits

0xd17d,	// (0x0005a461) cell_imed_colour_pane

0xd1bf,	// (0x0005a4a3) cell_imed_colour_pane_g1_ParamLimits

0xd1bf,	// (0x0005a4a3) cell_imed_colour_pane_g1

0xd1d0,	// (0x0005a4b4) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d0,	// (0x0005a4b4) hgihlgiht_grid_pane_cp016

0x5b51,	// (0x00052e35) cell_imed_effect_pane_g1

0x5b59,	// (0x00052e3d) grid_highlight_pane_cp017

0xd1e1,	// (0x0005a4c5) list_imed_single_pane_ParamLimits

0xd1e1,	// (0x0005a4c5) list_imed_single_pane

0x9876,	// (0x00056b5a) list_highlight_pane_cp07

0xd1f6,	// (0x0005a4da) list_imed_aspect_pane_comp1_t1

0xc90b,	// (0x00059bef) bg_tb_trans_pane_cp05

0xd218,	// (0x0005a4fc) popup_imed_adjust2_window_g1

0xd23f,	// (0x0005a523) popup_imed_adjust2_window_t1

0xd257,	// (0x0005a53b) slider_imed_adjust_pane

0xd26b,	// (0x0005a54f) slider_imed_adjust_pane_g1

0xd27b,	// (0x0005a55f) slider_imed_adjust_pane_g2

0xd28b,	// (0x0005a56f) slider_imed_adjust_pane_g3

0xd29c,	// (0x0005a580) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0005cac2) slider_imed_adjust_pane_g

0x5b62,	// (0x00052e46) aid_size_cell_clipart2

0x5b6e,	// (0x00052e52) grid_imed_clipart_pane

0xd2ad,	// (0x0005a591) scroll_pane_cp031

0x5b78,	// (0x00052e5c) cell_imed_clipart_pane_ParamLimits

0x5b78,	// (0x00052e5c) cell_imed_clipart_pane

0x5b9a,	// (0x00052e7e) cell_imed_clipart_pane_g1

0x9876,	// (0x00056b5a) grid_highlight_pane_cp014

0x5849,	// (0x00052b2d) main_clock2_pane_g1_ParamLimits

0x5849,	// (0x00052b2d) main_clock2_pane_g1

0x598d,	// (0x00052c71) aid_call2_pane_cp10

0x599f,	// (0x00052c83) aid_call_pane_cp10

0xb309,	// (0x000585ed) popup_clock_analogue_window_cp10_g1

0xb309,	// (0x000585ed) popup_clock_analogue_window_cp10_g2

0x59b1,	// (0x00052c95) popup_clock_analogue_window_cp10_g3

0x59b1,	// (0x00052c95) popup_clock_analogue_window_cp10_g4

0xb309,	// (0x000585ed) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0005cab0) popup_clock_analogue_window_cp10_g

0x59c7,	// (0x00052cab) popup_clock_analogue_window_cp10_t1

0x59f8,	// (0x00052cdc) clock_digital_number_pane_cp10_ParamLimits

0x59f8,	// (0x00052cdc) clock_digital_number_pane_cp10

0x5a10,	// (0x00052cf4) clock_digital_number_pane_cp11_ParamLimits

0x5a10,	// (0x00052cf4) clock_digital_number_pane_cp11

0x5a28,	// (0x00052d0c) clock_digital_number_pane_cp12_ParamLimits

0x5a28,	// (0x00052d0c) clock_digital_number_pane_cp12

0x5a42,	// (0x00052d26) clock_digital_number_pane_cp13_ParamLimits

0x5a42,	// (0x00052d26) clock_digital_number_pane_cp13

0x5a5c,	// (0x00052d40) clock_digital_separator_pane_cp10_ParamLimits

0x5a5c,	// (0x00052d40) clock_digital_separator_pane_cp10

0x5a76,	// (0x00052d5a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a76,	// (0x00052d5a) popup_clock_digital_window_cp02_t1

0xa7b2,	// (0x00057a96) clock_digital_number_pane_cp10_g1

0xa7b2,	// (0x00057a96) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0005cacb) clock_digital_number_pane_cp10_g

0xa7b2,	// (0x00057a96) clock_digital_separator_pane_cp10_g1

0xa7b2,	// (0x00057a96) clock_digital_separator_pane_g2_cp10

0xb496,	// (0x0005877a) navi_pane_vded_g4

0xb49f,	// (0x00058783) navi_pane_vded_g5

0xb4a8,	// (0x0005878c) navi_pane_vded_t1

0x9876,	// (0x00056b5a) main_vded_pane

0x5ba3,	// (0x00052e87) main_vded_pane_g1

0x5bad,	// (0x00052e91) main_vded_pane_g2

0x5bb7,	// (0x00052e9b) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0005cad0) main_vded_pane_g

0x5bc1,	// (0x00052ea5) main_vded_pane_t1

0x5bcf,	// (0x00052eb3) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0005cad7) main_vded_pane_t

0x5bdd,	// (0x00052ec1) vded_slider_pane

0x5be5,	// (0x00052ec9) vded_video_pane

0xd2b5,	// (0x0005a599) vded_video_pane_g1

0x5bed,	// (0x00052ed1) vded_video_pane_g2

0xcd13,	// (0x00059ff7) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0005cadc) vded_video_pane_g

0xd2bf,	// (0x0005a5a3) vded_slider_pane_g1

0xca66,	// (0x00059d4a) vded_slider_pane_g2

0xd2c8,	// (0x0005a5ac) vded_slider_pane_g3

0xd2d1,	// (0x0005a5b5) vded_slider_pane_g4

0xd2da,	// (0x0005a5be) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0005cae3) vded_slider_pane_g

0x55cf,	// (0x000528b3) mup3_rocker_pane_ParamLimits

0x55cf,	// (0x000528b3) mup3_rocker_pane

0x5bf6,	// (0x00052eda) mup3_control_keys_pane_g1

0x5bfe,	// (0x00052ee2) mup3_control_keys_pane_g2

0x5c06,	// (0x00052eea) mup3_control_keys_pane_g3

0x5c0e,	// (0x00052ef2) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0005caee) mup3_control_keys_pane_g

0x12fc,	// (0x0004e5e0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12fc,	// (0x0004e5e0) popup_toolbar2_fixed_window_cp01

0x5603,	// (0x000528e7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5603,	// (0x000528e7) popup_toolbar2_fixed_window_cp02

0xbc4d,	// (0x00058f31) popup_call2_audio_second_window_t4_ParamLimits

0xbc4d,	// (0x00058f31) popup_call2_audio_second_window_t4

0xc17b,	// (0x0005945f) popup_call2_audio_first_window_t6_ParamLimits

0xc17b,	// (0x0005945f) popup_call2_audio_first_window_t6

0xc411,	// (0x000596f5) popup_call2_audio_out_window_t6_ParamLimits

0xc411,	// (0x000596f5) popup_call2_audio_out_window_t6

0x9876,	// (0x00056b5a) main_vitu_pane

0x5c1e,	// (0x00052f02) aid_size_cell_itu_ParamLimits

0x5c1e,	// (0x00052f02) aid_size_cell_itu

0xa551,	// (0x00057835) bg_popup_window_pane_cp08_ParamLimits

0xa551,	// (0x00057835) bg_popup_window_pane_cp08

0x5c34,	// (0x00052f18) field_vitu_entry_pane_ParamLimits

0x5c34,	// (0x00052f18) field_vitu_entry_pane

0x5c4c,	// (0x00052f30) grid_vitu_function_pane_ParamLimits

0x5c4c,	// (0x00052f30) grid_vitu_function_pane

0x5c67,	// (0x00052f4b) grid_vitu_itu_pane_ParamLimits

0x5c67,	// (0x00052f4b) grid_vitu_itu_pane

0x5c85,	// (0x00052f69) cell_vitu_itu_pane_ParamLimits

0x5c85,	// (0x00052f69) cell_vitu_itu_pane

0x5ca7,	// (0x00052f8b) cell_vitu_function_pane_ParamLimits

0x5ca7,	// (0x00052f8b) cell_vitu_function_pane

0xa551,	// (0x00057835) bg_popup_sub_pane_cp08_ParamLimits

0xa551,	// (0x00057835) bg_popup_sub_pane_cp08

0x5cc0,	// (0x00052fa4) field_vitu_entry_pane_t1_ParamLimits

0x5cc0,	// (0x00052fa4) field_vitu_entry_pane_t1

0xd2fb,	// (0x0005a5df) field_vitu_entry_pane_t2_ParamLimits

0xd2fb,	// (0x0005a5df) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0005cafc) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0005cafc) field_vitu_entry_pane_t

0xd318,	// (0x0005a5fc) bg_button_pane_cp05_ParamLimits

0xd318,	// (0x0005a5fc) bg_button_pane_cp05

0x5cdf,	// (0x00052fc3) cell_vitu_itu_pane_g1

0x5cf7,	// (0x00052fdb) cell_vitu_itu_pane_t1_ParamLimits

0x5cf7,	// (0x00052fdb) cell_vitu_itu_pane_t1

0x5d09,	// (0x00052fed) cell_vitu_itu_pane_t2_ParamLimits

0x5d09,	// (0x00052fed) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0005cb01) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0005cb01) cell_vitu_itu_pane_t

0xd326,	// (0x0005a60a) bg_button_pane_cp07

0x5d3e,	// (0x00053022) cell_vitu_function_pane_g1

0x9cf1,	// (0x00056fd5) main_calc_pane_g1

0x1113,	// (0x0004e3f7) aid_visual_content_pane

0x9876,	// (0x00056b5a) main_vradio_pane

0x5d47,	// (0x0005302b) main_vradio_pane_g1_ParamLimits

0x5d47,	// (0x0005302b) main_vradio_pane_g1

0xd330,	// (0x0005a614) main_vradio_pane_g2_ParamLimits

0xd330,	// (0x0005a614) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0005cb08) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0005cb08) main_vradio_pane_g

0x5d60,	// (0x00053044) main_vradio_pane_t1_ParamLimits

0x5d60,	// (0x00053044) main_vradio_pane_t1

0x5d75,	// (0x00053059) main_vradio_pane_t2_ParamLimits

0x5d75,	// (0x00053059) main_vradio_pane_t2

0xd33d,	// (0x0005a621) main_vradio_pane_t3_ParamLimits

0xd33d,	// (0x0005a621) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0005cb0d) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0005cb0d) main_vradio_pane_t

0x5d8a,	// (0x0005306e) vradio_rocker_control_pane_ParamLimits

0x5d8a,	// (0x0005306e) vradio_rocker_control_pane

0x5d9c,	// (0x00053080) vradio_station_info_pane_ParamLimits

0x5d9c,	// (0x00053080) vradio_station_info_pane

0xd351,	// (0x0005a635) vradio_frequency_info_pane_ParamLimits

0xd351,	// (0x0005a635) vradio_frequency_info_pane

0xcd13,	// (0x00059ff7) vradio_station_info_pane_g1

0xd360,	// (0x0005a644) vradio_station_info_pane_t1_ParamLimits

0xd360,	// (0x0005a644) vradio_station_info_pane_t1

0xd382,	// (0x0005a666) vradio_station_info_pane_t2_ParamLimits

0xd382,	// (0x0005a666) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0005cb14) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0005cb14) vradio_station_info_pane_t

0xd394,	// (0x0005a678) vradio_tuning_pane

0xd39c,	// (0x0005a680) vradio_rocker_control_pane_g1

0xd3a4,	// (0x0005a688) vradio_rocker_control_pane_g2

0xd3ac,	// (0x0005a690) vradio_rocker_control_pane_g3

0xd3b4,	// (0x0005a698) vradio_rocker_control_pane_g4

0xd3bc,	// (0x0005a6a0) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0005cb19) vradio_rocker_control_pane_g

0x5dae,	// (0x00053092) vradio_frequency_info_pane_g1

0xd3c4,	// (0x0005a6a8) vradio_frequency_info_pane_t1_ParamLimits

0xd3c4,	// (0x0005a6a8) vradio_frequency_info_pane_t1

0x5db8,	// (0x0005309c) vradio_tuning_pane_g1

0x5dc3,	// (0x000530a7) vradio_tuning_pane_t1

0x989c,	// (0x00056b80) area_side_right_pane_ParamLimits

0x989c,	// (0x00056b80) area_side_right_pane

0xc8c6,	// (0x00059baa) status_small_pane_g1

0xc8ce,	// (0x00059bb2) status_small_pane_g2

0xc8d7,	// (0x00059bbb) status_small_pane_g3

0xc8e0,	// (0x00059bc4) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0005c8d4) status_small_pane_g

0xc8e9,	// (0x00059bcd) status_small_pane_t1

0x9876,	// (0x00056b5a) main_video3_pane

0xd3d8,	// (0x0005a6bc) cams_zoom_vslider_pane

0xd3e0,	// (0x0005a6c4) image3_wide_pane_ParamLimits

0xd3e0,	// (0x0005a6c4) image3_wide_pane

0xd3fa,	// (0x0005a6de) image3_wide_small_pane

0xd406,	// (0x0005a6ea) main_video3_pane_g1_ParamLimits

0xd406,	// (0x0005a6ea) main_video3_pane_g1

0xd422,	// (0x0005a706) main_video3_pane_g2_ParamLimits

0xd422,	// (0x0005a706) main_video3_pane_g2

0x0001,

0xf840,	// (0x0005cb24) main_video3_pane_g_ParamLimits

0xf840,	// (0x0005cb24) main_video3_pane_g

0xd43e,	// (0x0005a722) main_video3_pane_t1_ParamLimits

0xd43e,	// (0x0005a722) main_video3_pane_t1

0xd469,	// (0x0005a74d) main_video3_pane_t2_ParamLimits

0xd469,	// (0x0005a74d) main_video3_pane_t2

0xd494,	// (0x0005a778) main_video3_pane_t3_ParamLimits

0xd494,	// (0x0005a778) main_video3_pane_t3

0x0002,

0xf845,	// (0x0005cb29) main_video3_pane_t_ParamLimits

0xf845,	// (0x0005cb29) main_video3_pane_t

0xd4c1,	// (0x0005a7a5) cams_zoom_vslider_pane_g1

0xd4ca,	// (0x0005a7ae) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0005cb30) cams_zoom_vslider_pane_g

0xd4d2,	// (0x0005a7b6) small_slider_vertical_pane

0xcd13,	// (0x00059ff7) small_slider_vertical_pane_g1

0xcd13,	// (0x00059ff7) small_slider_vertical_pane_g2

0xd4da,	// (0x0005a7be) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0005cb35) small_slider_vertical_pane_g

0x9876,	// (0x00056b5a) main_hwr_training_pane

0xd4e3,	// (0x0005a7c7) hwr_training_instruct_pane_ParamLimits

0xd4e3,	// (0x0005a7c7) hwr_training_instruct_pane

0x5dd2,	// (0x000530b6) hwr_training_navi_pane_ParamLimits

0x5dd2,	// (0x000530b6) hwr_training_navi_pane

0x5df1,	// (0x000530d5) hwr_training_write_pane_ParamLimits

0x5df1,	// (0x000530d5) hwr_training_write_pane

0x9876,	// (0x00056b5a) bg_frame_shadow_pane

0xd51a,	// (0x0005a7fe) hwr_training_write_pane_g1

0xd522,	// (0x0005a806) hwr_training_write_pane_g2

0xd52a,	// (0x0005a80e) hwr_training_write_pane_g3

0xd532,	// (0x0005a816) hwr_training_write_pane_g4

0xd53a,	// (0x0005a81e) hwr_training_write_pane_g5

0xd542,	// (0x0005a826) hwr_training_write_pane_g6

0xd54a,	// (0x0005a82e) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0005cb3c) hwr_training_write_pane_g

0x9f8d,	// (0x00057271) hwr_training_navi_pane_g1_ParamLimits

0x9f8d,	// (0x00057271) hwr_training_navi_pane_g1

0x9f9f,	// (0x00057283) hwr_training_navi_pane_g2_ParamLimits

0x9f9f,	// (0x00057283) hwr_training_navi_pane_g2

0x9fb1,	// (0x00057295) hwr_training_navi_pane_g3_ParamLimits

0x9fb1,	// (0x00057295) hwr_training_navi_pane_g3

0x9fc1,	// (0x000572a5) hwr_training_navi_pane_g4_ParamLimits

0x9fc1,	// (0x000572a5) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0005cb4b) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0005cb4b) hwr_training_navi_pane_g

0x9fce,	// (0x000572b2) hwr_training_navi_pane_t1

0x5e3b,	// (0x0005311f) list_single_hwr_training_instruct_pane_ParamLimits

0x5e3b,	// (0x0005311f) list_single_hwr_training_instruct_pane

0xd552,	// (0x0005a836) list_single_hwr_training_instruct_pane_t1

0xcc53,	// (0x00059f37) bg_frame_shadow_pane_g1

0xd561,	// (0x0005a845) bg_frame_shadow_pane_g2

0xd569,	// (0x0005a84d) bg_frame_shadow_pane_g3

0xd571,	// (0x0005a855) bg_frame_shadow_pane_g4

0xd579,	// (0x0005a85d) bg_frame_shadow_pane_g5

0xd581,	// (0x0005a865) bg_frame_shadow_pane_g6

0xd589,	// (0x0005a86d) bg_frame_shadow_pane_g7

0xa94d,	// (0x00057c31) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0005cb56) bg_frame_shadow_pane_g

0x9876,	// (0x00056b5a) main_video_tele_dialer_pane

0x5e51,	// (0x00053135) aid_size_cell_video_keypad_ParamLimits

0x5e51,	// (0x00053135) aid_size_cell_video_keypad

0x5e6b,	// (0x0005314f) grid_video_dialer_keypad_pane_ParamLimits

0x5e6b,	// (0x0005314f) grid_video_dialer_keypad_pane

0x5eb9,	// (0x0005319d) video_down_pane_cp_ParamLimits

0x5eb9,	// (0x0005319d) video_down_pane_cp

0x5eeb,	// (0x000531cf) cell_video_dialer_keypad_pane_ParamLimits

0x5eeb,	// (0x000531cf) cell_video_dialer_keypad_pane

0xd591,	// (0x0005a875) bg_button_pane_cp08_ParamLimits

0xd591,	// (0x0005a875) bg_button_pane_cp08

0x5f0d,	// (0x000531f1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f0d,	// (0x000531f1) cell_video_dialer_keypad_pane_g1

0x55b9,	// (0x0005289d) mup3_rocker2_pane_ParamLimits

0x55b9,	// (0x0005289d) mup3_rocker2_pane

0xcd13,	// (0x00059ff7) mup3_rocker2_pane_g1

0x4072,	// (0x00051356) main_dialer2_pane

0x9876,	// (0x00056b5a) main_mp4_pane

0x9ffa,	// (0x000572de) main_mp4_pane_g1_ParamLimits

0x9ffa,	// (0x000572de) main_mp4_pane_g1

0x9ffa,	// (0x000572de) main_mp4_pane_g2_ParamLimits

0x9ffa,	// (0x000572de) main_mp4_pane_g2

0x5f47,	// (0x0005322b) main_mp4_pane_g3_ParamLimits

0x5f47,	// (0x0005322b) main_mp4_pane_g3

0xa008,	// (0x000572ec) main_mp4_pane_g4_ParamLimits

0xa008,	// (0x000572ec) main_mp4_pane_g4

0xa036,	// (0x0005731a) main_mp4_pane_g5_ParamLimits

0xa036,	// (0x0005731a) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0005cb76) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0005cb76) main_mp4_pane_g

0xa0aa,	// (0x0005738e) main_mp4_pane_t1_ParamLimits

0xa0aa,	// (0x0005738e) main_mp4_pane_t1

0xa106,	// (0x000573ea) main_mp4_pane_t2_ParamLimits

0xa106,	// (0x000573ea) main_mp4_pane_t2

0xd59d,	// (0x0005a881) main_mp4_pane_t3_ParamLimits

0xd59d,	// (0x0005a881) main_mp4_pane_t3

0xa158,	// (0x0005743c) main_mp4_pane_t4_ParamLimits

0xa158,	// (0x0005743c) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0005cb87) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0005cb87) main_mp4_pane_t

0xa19c,	// (0x00057480) mp4_progress_pane_ParamLimits

0xa19c,	// (0x00057480) mp4_progress_pane

0xa1e6,	// (0x000574ca) mp4_rocker_pane_ParamLimits

0xa1e6,	// (0x000574ca) mp4_rocker_pane

0xd5cb,	// (0x0005a8af) mp4_progress_pane_t1

0xd5e4,	// (0x0005a8c8) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0005cb90) mp4_progress_pane_t

0xd5fd,	// (0x0005a8e1) mup_progress_pane_cp04

0xcd13,	// (0x00059ff7) mp4_rocker_pane_g1

0x5f83,	// (0x00053267) aid_cell_size_keypad2_ParamLimits

0x5f83,	// (0x00053267) aid_cell_size_keypad2

0x5f99,	// (0x0005327d) dialer2_ne_pane_ParamLimits

0x5f99,	// (0x0005327d) dialer2_ne_pane

0x5fb3,	// (0x00053297) grid_dialer2_keypad_pane_ParamLimits

0x5fb3,	// (0x00053297) grid_dialer2_keypad_pane

0xcaf8,	// (0x00059ddc) bg_popup_call_pane_cp07_ParamLimits

0xcaf8,	// (0x00059ddc) bg_popup_call_pane_cp07

0x5fcf,	// (0x000532b3) dialer2_ne_pane_t1_ParamLimits

0x5fcf,	// (0x000532b3) dialer2_ne_pane_t1

0x600b,	// (0x000532ef) cell_dialer2_keypad_pane_ParamLimits

0x600b,	// (0x000532ef) cell_dialer2_keypad_pane

0xd622,	// (0x0005a906) bg_button_pane_pane_cp04_ParamLimits

0xd622,	// (0x0005a906) bg_button_pane_pane_cp04

0x602d,	// (0x00053311) cell_dialer2_keypad_pane_g1_ParamLimits

0x602d,	// (0x00053311) cell_dialer2_keypad_pane_g1

0x20e6,	// (0x0004f3ca) aid_placing_vt_set_content_ParamLimits

0x20e6,	// (0x0004f3ca) aid_placing_vt_set_content

0x210e,	// (0x0004f3f2) aid_placing_vt_set_title_ParamLimits

0x210e,	// (0x0004f3f2) aid_placing_vt_set_title

0x9876,	// (0x00056b5a) main_image3_pane

0x60f3,	// (0x000533d7) area_side_right_pane_cp01_ParamLimits

0x60f3,	// (0x000533d7) area_side_right_pane_cp01

0x9ffa,	// (0x000572de) main_image3_pane_g1_ParamLimits

0x9ffa,	// (0x000572de) main_image3_pane_g1

0x610a,	// (0x000533ee) main_image3_pane_g2_ParamLimits

0x610a,	// (0x000533ee) main_image3_pane_g2

0x6132,	// (0x00053416) main_image3_pane_g3_ParamLimits

0x6132,	// (0x00053416) main_image3_pane_g3

0x615c,	// (0x00053440) main_image3_pane_g4_ParamLimits

0x615c,	// (0x00053440) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0005cb9f) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0005cb9f) main_image3_pane_g

0x6186,	// (0x0005346a) main_image3_pane_t1_ParamLimits

0x6186,	// (0x0005346a) main_image3_pane_t1

0x61de,	// (0x000534c2) main_image3_pane_t2_ParamLimits

0x61de,	// (0x000534c2) main_image3_pane_t2

0x6230,	// (0x00053514) main_image3_pane_t3_ParamLimits

0x6230,	// (0x00053514) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0005cba8) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0005cba8) main_image3_pane_t

0xa551,	// (0x00057835) grid_sctrl_middle_pane_cp01_ParamLimits

0xa551,	// (0x00057835) grid_sctrl_middle_pane_cp01

0x62b8,	// (0x0005359c) cell_sctrl_middle_pane_cp01_ParamLimits

0x62b8,	// (0x0005359c) cell_sctrl_middle_pane_cp01

0x62d5,	// (0x000535b9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62d5,	// (0x000535b9) cell_sctrl_middle_pane_cp01_g1

0x9876,	// (0x00056b5a) main_call4_pane

0x62eb,	// (0x000535cf) aid_size_button_call4_ParamLimits

0x62eb,	// (0x000535cf) aid_size_button_call4

0x631e,	// (0x00053602) call4_windows_pane_ParamLimits

0x631e,	// (0x00053602) call4_windows_pane

0x633d,	// (0x00053621) grid_call4_button_pane_ParamLimits

0x633d,	// (0x00053621) grid_call4_button_pane

0x6370,	// (0x00053654) call4_windows_conf_pane

0x6387,	// (0x0005366b) popup_call4_audio_first_window_ParamLimits

0x6387,	// (0x0005366b) popup_call4_audio_first_window

0x63d7,	// (0x000536bb) popup_call4_audio_second_window_ParamLimits

0x63d7,	// (0x000536bb) popup_call4_audio_second_window

0x63ee,	// (0x000536d2) popup_call4_audio_wait_window_ParamLimits

0x63ee,	// (0x000536d2) popup_call4_audio_wait_window

0x63fc,	// (0x000536e0) cell_call4_button_pane_ParamLimits

0x63fc,	// (0x000536e0) cell_call4_button_pane

0x6421,	// (0x00053705) bg_button_pane_cp09_ParamLimits

0x6421,	// (0x00053705) bg_button_pane_cp09

0x642d,	// (0x00053711) cell_call4_button_pane_g1_ParamLimits

0x642d,	// (0x00053711) cell_call4_button_pane_g1

0x6453,	// (0x00053737) cell_call4_button_pane_t1_ParamLimits

0x6453,	// (0x00053737) cell_call4_button_pane_t1

0xd636,	// (0x0005a91a) popup_call4_audio_conf_window_ParamLimits

0xd636,	// (0x0005a91a) popup_call4_audio_conf_window

0x5619,	// (0x000528fd) mup3_progress_pane_t1_ParamLimits

0x5638,	// (0x0005291c) mup3_progress_pane_t2_ParamLimits

0xcfd3,	// (0x0005a2b7) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0005ca78) mup3_progress_pane_t_ParamLimits

0xcff0,	// (0x0005a2d4) mup_progress_pane_cp03_ParamLimits

0x5c16,	// (0x00052efa) mup3_control_keys_pane_g4_copy1

0xa1ca,	// (0x000574ae) mp4_rocker2_pane_ParamLimits

0xa1ca,	// (0x000574ae) mp4_rocker2_pane

0xd64a,	// (0x0005a92e) mp4_rocker2_pane_g1

0xd652,	// (0x0005a936) mp4_rocker2_pane_g2

0xa26a,	// (0x0005754e) mp4_rocker2_pane_g3

0xa272,	// (0x00057556) mp4_rocker2_pane_g4

0xa27a,	// (0x0005755e) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0005cbb1) mp4_rocker2_pane_g

0x9876,	// (0x00056b5a) main_camera4_pane

0x9876,	// (0x00056b5a) main_video4_pane

0x5e87,	// (0x0005316b) main_video_tele_dialer_pane_t1_ParamLimits

0x5e87,	// (0x0005316b) main_video_tele_dialer_pane_t1

0x5ea0,	// (0x00053184) main_video_tele_dialer_pane_t2_ParamLimits

0x5ea0,	// (0x00053184) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0005cb67) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0005cb67) main_video_tele_dialer_pane_t

0x6495,	// (0x00053779) cam4_autofocus_pane_ParamLimits

0x6495,	// (0x00053779) cam4_autofocus_pane

0x64ab,	// (0x0005378f) cam4_image_uncrop_pane_ParamLimits

0x64ab,	// (0x0005378f) cam4_image_uncrop_pane

0x64c5,	// (0x000537a9) cam4_indicators_pane_ParamLimits

0x64c5,	// (0x000537a9) cam4_indicators_pane

0x64f0,	// (0x000537d4) main_camera4_pane_g1_ParamLimits

0x64f0,	// (0x000537d4) main_camera4_pane_g1

0x6502,	// (0x000537e6) main_camera4_pane_g2_ParamLimits

0x6502,	// (0x000537e6) main_camera4_pane_g2

0x6515,	// (0x000537f9) main_camera4_pane_g3_ParamLimits

0x6515,	// (0x000537f9) main_camera4_pane_g3

0x6528,	// (0x0005380c) main_camera4_pane_g4_ParamLimits

0x6528,	// (0x0005380c) main_camera4_pane_g4

0x653b,	// (0x0005381f) main_camera4_pane_g5_ParamLimits

0x653b,	// (0x0005381f) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0005cbbc) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0005cbbc) main_camera4_pane_g

0x655f,	// (0x00053843) main_camera4_pane_t1_ParamLimits

0x655f,	// (0x00053843) main_camera4_pane_t1

0xcf58,	// (0x0005a23c) bg_tb_trans_pane_cp06

0xa2a6,	// (0x0005758a) cam4_indicators_pane_g1

0xa2b7,	// (0x0005759b) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0005cbd7) cam4_indicators_pane_g

0xa2cf,	// (0x000575b3) cam4_indicators_pane_t1

0x65c3,	// (0x000538a7) main_video4_pane_g1_ParamLimits

0x65c3,	// (0x000538a7) main_video4_pane_g1

0x65d2,	// (0x000538b6) main_video4_pane_g2_ParamLimits

0x65d2,	// (0x000538b6) main_video4_pane_g2

0x65e1,	// (0x000538c5) main_video4_pane_g3_ParamLimits

0x65e1,	// (0x000538c5) main_video4_pane_g3

0x65f0,	// (0x000538d4) main_video4_pane_g4_ParamLimits

0x65f0,	// (0x000538d4) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0005cbde) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0005cbde) main_video4_pane_g

0x660e,	// (0x000538f2) vid4_indicators_pane_ParamLimits

0x660e,	// (0x000538f2) vid4_indicators_pane

0x663c,	// (0x00053920) video4_image_uncrop_cif_pane_ParamLimits

0x663c,	// (0x00053920) video4_image_uncrop_cif_pane

0x6656,	// (0x0005393a) video4_image_uncrop_nhd_pane_ParamLimits

0x6656,	// (0x0005393a) video4_image_uncrop_nhd_pane

0x64ab,	// (0x0005378f) video4_image_uncrop_vga_pane_ParamLimits

0x64ab,	// (0x0005378f) video4_image_uncrop_vga_pane

0xa551,	// (0x00057835) bg_tb_trans_pane_cp07

0xa2f9,	// (0x000575dd) vid4_indicators_pane_g1

0xa30d,	// (0x000575f1) vid4_indicators_pane_g2

0xa321,	// (0x00057605) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0005cbe9) vid4_indicators_pane_g

0xa34e,	// (0x00057632) vid4_indicators_pane_t1

0x666a,	// (0x0005394e) cam4_autofocus_pane_g1

0x6672,	// (0x00053956) cam4_autofocus_pane_g2

0x667a,	// (0x0005395e) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0005cbf4) cam4_autofocus_pane_g

0x6682,	// (0x00053966) cam4_autofocus_pane_g3_copy1

0x5ecf,	// (0x000531b3) video_down_pane_cp_t1

0x5edd,	// (0x000531c1) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0005cb6c) video_down_pane_cp_t

0xa551,	// (0x00057835) popup_vitu2_window_ParamLimits

0xa551,	// (0x00057835) popup_vitu2_window

0x668a,	// (0x0005396e) aid_size_cell2_itu2_ParamLimits

0x668a,	// (0x0005396e) aid_size_cell2_itu2

0x66b0,	// (0x00053994) aid_size_cell_itu2_ParamLimits

0x66b0,	// (0x00053994) aid_size_cell_itu2

0x670c,	// (0x000539f0) bg_popup_window_pane_cp09_ParamLimits

0x670c,	// (0x000539f0) bg_popup_window_pane_cp09

0x671a,	// (0x000539fe) field_vitu2_entry_pane_ParamLimits

0x671a,	// (0x000539fe) field_vitu2_entry_pane

0x6740,	// (0x00053a24) grid_vitu2_function_pane_ParamLimits

0x6740,	// (0x00053a24) grid_vitu2_function_pane

0x6791,	// (0x00053a75) grid_vitu2_itu_pane_ParamLimits

0x6791,	// (0x00053a75) grid_vitu2_itu_pane

0x6827,	// (0x00053b0b) cell_vitu2_itu_pane_ParamLimits

0x6827,	// (0x00053b0b) cell_vitu2_itu_pane

0x6853,	// (0x00053b37) cell_vitu2_function_pane_ParamLimits

0x6853,	// (0x00053b37) cell_vitu2_function_pane

0xd65a,	// (0x0005a93e) bg_popup_call_pane_cp08_ParamLimits

0xd65a,	// (0x0005a93e) bg_popup_call_pane_cp08

0xd671,	// (0x0005a955) field_vitu2_entry_pane_g1

0xd67d,	// (0x0005a961) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0005cbfb) field_vitu2_entry_pane_g

0x0482,	// (0x0004d766) field_vitu2_entry_pane_t1_ParamLimits

0x0482,	// (0x0004d766) field_vitu2_entry_pane_t1

0x6892,	// (0x00053b76) field_vitu2_entry_pane_t2_ParamLimits

0x6892,	// (0x00053b76) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0005cc02) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0005cc02) field_vitu2_entry_pane_t

0x68af,	// (0x00053b93) bg_button_pane_cp010_ParamLimits

0x68af,	// (0x00053b93) bg_button_pane_cp010

0xa365,	// (0x00057649) cell_vitu2_itu_pane_g1

0x68cb,	// (0x00053baf) cell_vitu2_itu_pane_t1_ParamLimits

0x68cb,	// (0x00053baf) cell_vitu2_itu_pane_t1

0x04b2,	// (0x0004d796) cell_vitu2_itu_pane_t2_ParamLimits

0x04b2,	// (0x0004d796) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0005cc0c) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0005cc0c) cell_vitu2_itu_pane_t

0xa551,	// (0x00057835) bg_button_pane_cp011

0x6929,	// (0x00053c0d) cell_vitu2_function_pane_g1

0x9876,	// (0x00056b5a) main_myfav_hc_pane

0x6280,	// (0x00053564) popup_image3_note_pane_ParamLimits

0x6280,	// (0x00053564) popup_image3_note_pane

0x629c,	// (0x00053580) popup_image3_tool_bar_pane_ParamLimits

0x629c,	// (0x00053580) popup_image3_tool_bar_pane

0x0540,	// (0x0004d824) cell_vitu2_itu_pane_t3_ParamLimits

0x0540,	// (0x0004d824) cell_vitu2_itu_pane_t3

0x9876,	// (0x00056b5a) bg_popup_trans_pane

0xd69f,	// (0x0005a983) grid_image3_tool_bar_pane

0xd6a9,	// (0x0005a98d) bg_popup_trans_pane_g1

0xacd0,	// (0x00057fb4) bg_popup_trans_pane_g2

0xd6b1,	// (0x0005a995) bg_popup_trans_pane_g3

0xd6b9,	// (0x0005a99d) bg_popup_trans_pane_g4

0xd6c1,	// (0x0005a9a5) bg_popup_trans_pane_g5

0xd6c9,	// (0x0005a9ad) bg_popup_trans_pane_g6

0xd6d1,	// (0x0005a9b5) bg_popup_trans_pane_g7

0xd6d9,	// (0x0005a9bd) bg_popup_trans_pane_g8

0xacb0,	// (0x00057f94) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0005cc13) bg_popup_trans_pane_g

0xd6e1,	// (0x0005a9c5) cell_image3_tool_bar_pane_ParamLimits

0xd6e1,	// (0x0005a9c5) cell_image3_tool_bar_pane

0xcd13,	// (0x00059ff7) cell_image3_tool_bar_pane_g1

0x9876,	// (0x00056b5a) bg_popup_trans_pane_cp1

0xd6f5,	// (0x0005a9d9) popup_image3_note_pane_t1

0xd703,	// (0x0005a9e7) popup_image3_note_pane_t2

0xd711,	// (0x0005a9f5) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0005cc26) popup_image3_note_pane_t

0xd71f,	// (0x0005aa03) popup_image3_note_pane_t3_copy1

0x693d,	// (0x00053c21) bg_myfav_hc_instruction_pane_ParamLimits

0x693d,	// (0x00053c21) bg_myfav_hc_instruction_pane

0x6951,	// (0x00053c35) cell_myfav_contact_pane_ParamLimits

0x6951,	// (0x00053c35) cell_myfav_contact_pane

0x696f,	// (0x00053c53) cell_myfav_contact_pane_cp1_ParamLimits

0x696f,	// (0x00053c53) cell_myfav_contact_pane_cp1

0x6987,	// (0x00053c6b) cell_myfav_contact_pane_cp2_ParamLimits

0x6987,	// (0x00053c6b) cell_myfav_contact_pane_cp2

0x699f,	// (0x00053c83) cell_myfav_contact_pane_cp3_ParamLimits

0x699f,	// (0x00053c83) cell_myfav_contact_pane_cp3

0x69b6,	// (0x00053c9a) cell_myfav_contact_pane_cp4_ParamLimits

0x69b6,	// (0x00053c9a) cell_myfav_contact_pane_cp4

0x69ce,	// (0x00053cb2) cell_myfav_contact_pane_cp5_ParamLimits

0x69ce,	// (0x00053cb2) cell_myfav_contact_pane_cp5

0x69e2,	// (0x00053cc6) cell_myfav_contact_pane_cp6_ParamLimits

0x69e2,	// (0x00053cc6) cell_myfav_contact_pane_cp6

0x69f8,	// (0x00053cdc) cell_myfav_contact_pane_cp7_ParamLimits

0x69f8,	// (0x00053cdc) cell_myfav_contact_pane_cp7

0xd72d,	// (0x0005aa11) listscroll_gen_pane_cp05

0x6a12,	// (0x00053cf6) main_myfav_hc_pane_g1_ParamLimits

0x6a12,	// (0x00053cf6) main_myfav_hc_pane_g1

0x6a2c,	// (0x00053d10) main_myfav_hc_pane_g2_ParamLimits

0x6a2c,	// (0x00053d10) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0005cc2d) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0005cc2d) main_myfav_hc_pane_g

0x6a5e,	// (0x00053d42) main_myfav_hc_pane_t1_ParamLimits

0x6a5e,	// (0x00053d42) main_myfav_hc_pane_t1

0xd736,	// (0x0005aa1a) main_myfav_hc_pane_t2_ParamLimits

0xd736,	// (0x0005aa1a) main_myfav_hc_pane_t2

0xd748,	// (0x0005aa2c) main_myfav_hc_pane_t3_ParamLimits

0xd748,	// (0x0005aa2c) main_myfav_hc_pane_t3

0x6a75,	// (0x00053d59) main_myfav_hc_pane_t4_ParamLimits

0x6a75,	// (0x00053d59) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0005cc34) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0005cc34) main_myfav_hc_pane_t

0xcd13,	// (0x00059ff7) bg_myfav_hc_instruction_pane_g1

0xd75a,	// (0x0005aa3e) cell_myfav_contact_pane_g1_ParamLimits

0xd75a,	// (0x0005aa3e) cell_myfav_contact_pane_g1

0xd75a,	// (0x0005aa3e) cell_myfav_contact_pane_g2_ParamLimits

0xd75a,	// (0x0005aa3e) cell_myfav_contact_pane_g2

0xd766,	// (0x0005aa4a) cell_myfav_contact_pane_g3_ParamLimits

0xd766,	// (0x0005aa4a) cell_myfav_contact_pane_g3

0xcfbd,	// (0x0005a2a1) cell_myfav_contact_pane_g4_ParamLimits

0xcfbd,	// (0x0005a2a1) cell_myfav_contact_pane_g4

0xd773,	// (0x0005aa57) cell_myfav_contact_pane_g5_ParamLimits

0xd773,	// (0x0005aa57) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0005cc3f) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0005cc3f) cell_myfav_contact_pane_g

0x6a46,	// (0x00053d2a) main_myfav_hc_pane_g3_ParamLimits

0x6a46,	// (0x00053d2a) main_myfav_hc_pane_g3

0x125e,	// (0x0004e542) popup_adpt_find_window

0x6a9d,	// (0x00053d81) afind_page_pane_ParamLimits

0x6a9d,	// (0x00053d81) afind_page_pane

0x6ab2,	// (0x00053d96) aid_size_cell_afind_ParamLimits

0x6ab2,	// (0x00053d96) aid_size_cell_afind

0x6ad0,	// (0x00053db4) bg_popup_sub_pane_cp09_ParamLimits

0x6ad0,	// (0x00053db4) bg_popup_sub_pane_cp09

0x6add,	// (0x00053dc1) find_pane_cp01_ParamLimits

0x6add,	// (0x00053dc1) find_pane_cp01

0xd77f,	// (0x0005aa63) grid_afind_control_pane_ParamLimits

0xd77f,	// (0x0005aa63) grid_afind_control_pane

0x6aea,	// (0x00053dce) grid_afind_pane_ParamLimits

0x6aea,	// (0x00053dce) grid_afind_pane

0x6b09,	// (0x00053ded) cell_afind_pane_ParamLimits

0x6b09,	// (0x00053ded) cell_afind_pane

0xcd13,	// (0x00059ff7) afind_page_pane_g1

0x6b70,	// (0x00053e54) afind_page_pane_g2

0x6b79,	// (0x00053e5d) afind_page_pane_g3

0x0002,

0xf966,	// (0x0005cc4a) afind_page_pane_g

0x6b82,	// (0x00053e66) afind_page_pane_t1

0xd793,	// (0x0005aa77) cell_afind_grid_control_pane_ParamLimits

0xd793,	// (0x0005aa77) cell_afind_grid_control_pane

0xd622,	// (0x0005a906) bg_button_pane_cp69_ParamLimits

0xd622,	// (0x0005a906) bg_button_pane_cp69

0x6ba2,	// (0x00053e86) cell_afind_pane_g1_ParamLimits

0x6ba2,	// (0x00053e86) cell_afind_pane_g1

0x6baf,	// (0x00053e93) cell_afind_pane_t1_ParamLimits

0x6baf,	// (0x00053e93) cell_afind_pane_t1

0xaac9,	// (0x00057dad) bg_button_pane_cp72

0xd7a2,	// (0x0005aa86) cell_afind_grid_control_pane_g1

0x3b31,	// (0x00050e15) aid_image_placing_area_ParamLimits

0x3b31,	// (0x00050e15) aid_image_placing_area

0xd2e3,	// (0x0005a5c7) field_vitu_entry_pane_g1_ParamLimits

0xd2e3,	// (0x0005a5c7) field_vitu_entry_pane_g1

0xd2ef,	// (0x0005a5d3) field_vitu_entry_pane_g2_ParamLimits

0xd2ef,	// (0x0005a5d3) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0005caf7) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0005caf7) field_vitu_entry_pane_g

0x5cdf,	// (0x00052fc3) cell_vitu_itu_pane_g1_ParamLimits

0x5d21,	// (0x00053005) cell_vitu_itu_pane_t3_ParamLimits

0x5d21,	// (0x00053005) cell_vitu_itu_pane_t3

0xd5cb,	// (0x0005a8af) mp4_progress_pane_t1_ParamLimits

0xd5e4,	// (0x0005a8c8) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0005cb90) mp4_progress_pane_t_ParamLimits

0xd5fd,	// (0x0005a8e1) mup_progress_pane_cp04_ParamLimits

0x6a89,	// (0x00053d6d) main_myfav_hc_pane_t5_ParamLimits

0x6a89,	// (0x00053d6d) main_myfav_hc_pane_t5

0x9894,	// (0x00056b78) aid_zoom_text_primary

0x125e,	// (0x0004e542) popup_adpt_find_window_ParamLimits

0xa551,	// (0x00057835) main_cam_set_pane

0x64dc,	// (0x000537c0) cam4_zoom_pane_ParamLimits

0x64dc,	// (0x000537c0) cam4_zoom_pane

0x6bc1,	// (0x00053ea5) main_cam_set_pane_g1_ParamLimits

0x6bc1,	// (0x00053ea5) main_cam_set_pane_g1

0x6bcf,	// (0x00053eb3) main_cam_set_pane_g2_ParamLimits

0x6bcf,	// (0x00053eb3) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0005cc51) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0005cc51) main_cam_set_pane_g

0x6bf0,	// (0x00053ed4) main_cam_set_pane_t1_ParamLimits

0x6bf0,	// (0x00053ed4) main_cam_set_pane_t1

0x6c0b,	// (0x00053eef) main_cset_listscroll_pane_ParamLimits

0x6c0b,	// (0x00053eef) main_cset_listscroll_pane

0x6c2b,	// (0x00053f0f) main_cset_slider_pane_ParamLimits

0x6c2b,	// (0x00053f0f) main_cset_slider_pane

0xd7b3,	// (0x0005aa97) main_cset_list_pane_ParamLimits

0xd7b3,	// (0x0005aa97) main_cset_list_pane

0xd7c3,	// (0x0005aaa7) scroll_pane_cp028

0x6c51,	// (0x00053f35) aid_area_touch_slider

0x6c6d,	// (0x00053f51) cset_slider_pane

0x6c97,	// (0x00053f7b) main_cset_slider_pane_g1

0x6cac,	// (0x00053f90) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0005cc56) main_cset_slider_pane_g

0xd7fc,	// (0x0005aae0) main_cset_slider_pane_t1

0x6d50,	// (0x00054034) main_cset_slider_pane_t2

0x6d6a,	// (0x0005404e) main_cset_slider_pane_t3

0x6d84,	// (0x00054068) main_cset_slider_pane_t4

0x6d9e,	// (0x00054082) main_cset_slider_pane_t5

0x6db8,	// (0x0005409c) main_cset_slider_pane_t6

0x6dcd,	// (0x000540b1) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0005cc7b) main_cset_slider_pane_t

0x6ed1,	// (0x000541b5) cset_list_set_pane_ParamLimits

0x6ed1,	// (0x000541b5) cset_list_set_pane

0x6ee3,	// (0x000541c7) aid_position_infowindow_above

0x6eeb,	// (0x000541cf) aid_position_infowindow_below

0x059e,	// (0x0004d882) cset_list_set_pane_g1_ParamLimits

0x059e,	// (0x0004d882) cset_list_set_pane_g1

0x05aa,	// (0x0004d88e) cset_list_set_pane_g3_ParamLimits

0x05aa,	// (0x0004d88e) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0005cc9a) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0005cc9a) cset_list_set_pane_g

0x05b9,	// (0x0004d89d) cset_list_set_pane_t1_ParamLimits

0x05b9,	// (0x0004d89d) cset_list_set_pane_t1

0xa551,	// (0x00057835) list_highlight_pane_cp021_ParamLimits

0xa551,	// (0x00057835) list_highlight_pane_cp021

0xb5fc,	// (0x000588e0) cset_slider_pane_g1

0xb60e,	// (0x000588f2) cset_slider_pane_g2

0xb605,	// (0x000588e9) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0005cc9f) cset_slider_pane_g

0xa377,	// (0x0005765b) aid_area_touch_cam4_zoom

0xa37f,	// (0x00057663) cam4_zoom_cont_pane

0xa387,	// (0x0005766b) cam4_zoom_pane_g1

0xa38f,	// (0x00057673) cam4_zoom_pane_g2

0x6ef3,	// (0x000541d7) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0005cca6) cam4_zoom_pane_g

0xd4da,	// (0x0005a7be) cam4_zoom_cont_pane_g1

0xd8c9,	// (0x0005abad) cam4_zoom_cont_pane_g2

0xd8d2,	// (0x0005abb6) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0005ccad) cam4_zoom_cont_pane_g

0x6309,	// (0x000535ed) call4_image_pane_ParamLimits

0x6309,	// (0x000535ed) call4_image_pane

0x6370,	// (0x00053654) call4_windows_conf_pane_ParamLimits

0x63b5,	// (0x00053699) popup_call4_audio_in_window_ParamLimits

0x63b5,	// (0x00053699) popup_call4_audio_in_window

0x9876,	// (0x00056b5a) bg_popup_call2_act_pane_cp02

0xd62e,	// (0x0005a912) call4_list_conf_pane

0xcd13,	// (0x00059ff7) call4_image_pane_g1

0xcd13,	// (0x00059ff7) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0005c9b8) call4_image_pane_g

0xd8db,	// (0x0005abbf) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8db,	// (0x0005abbf) list_single_graphic_popup_conf4_pane

0x9876,	// (0x00056b5a) list_highlight_pane_cp022

0xd8ee,	// (0x0005abd2) list_single_graphic_popup_conf4_pane_g1

0xb206,	// (0x000584ea) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0005ccb4) list_single_graphic_popup_conf4_pane_g

0xd8f6,	// (0x0005abda) list_single_graphic_popup_conf4_pane_t1

0x2232,	// (0x0004f516) popup_vtel_slider_window_ParamLimits

0x2232,	// (0x0004f516) popup_vtel_slider_window

0xd610,	// (0x0005a8f4) dialer2_ne_pane_t2_ParamLimits

0xd610,	// (0x0005a8f4) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0005cb95) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0005cb95) dialer2_ne_pane_t

0xcaf8,	// (0x00059ddc) bg_popup_sub_pane_cp010_ParamLimits

0xcaf8,	// (0x00059ddc) bg_popup_sub_pane_cp010

0x6efb,	// (0x000541df) popup_vtel_slider_window_g1_ParamLimits

0x6efb,	// (0x000541df) popup_vtel_slider_window_g1

0x6f0e,	// (0x000541f2) popup_vtel_slider_window_g2_ParamLimits

0x6f0e,	// (0x000541f2) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0005ccb9) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0005ccb9) popup_vtel_slider_window_g

0x6f64,	// (0x00054248) vtel_slider_pane_ParamLimits

0x6f64,	// (0x00054248) vtel_slider_pane

0x6f86,	// (0x0005426a) vtel_slider_pane_g1_ParamLimits

0x6f86,	// (0x0005426a) vtel_slider_pane_g1

0x6f9a,	// (0x0005427e) vtel_slider_pane_g2_ParamLimits

0x6f9a,	// (0x0005427e) vtel_slider_pane_g2

0x6fb2,	// (0x00054296) vtel_slider_pane_g3_ParamLimits

0x6fb2,	// (0x00054296) vtel_slider_pane_g3

0x6f86,	// (0x0005426a) vtel_slider_pane_g4_ParamLimits

0x6f86,	// (0x0005426a) vtel_slider_pane_g4

0x6fc8,	// (0x000542ac) vtel_slider_pane_g5_ParamLimits

0x6fc8,	// (0x000542ac) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0005ccc2) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0005ccc2) vtel_slider_pane_g

0xa551,	// (0x00057835) main_gallery2_pane

0x66dc,	// (0x000539c0) aid_size_row_itut2_dropdow_list_ParamLimits

0x66dc,	// (0x000539c0) aid_size_row_itut2_dropdow_list

0x6768,	// (0x00053a4c) grid_vitu2_function_top_pane_ParamLimits

0x6768,	// (0x00053a4c) grid_vitu2_function_top_pane

0x67d2,	// (0x00053ab6) popup_vitu2_dropdown_list_window_ParamLimits

0x67d2,	// (0x00053ab6) popup_vitu2_dropdown_list_window

0x67fb,	// (0x00053adf) popup_vitu2_match_list_window

0x6fde,	// (0x000542c2) cell_vitu2_function_top_pane_ParamLimits

0x6fde,	// (0x000542c2) cell_vitu2_function_top_pane

0x6ff6,	// (0x000542da) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ff6,	// (0x000542da) cell_vitu2_function_top_pane_cp01

0x7012,	// (0x000542f6) cell_vitu2_function_top_wide_pane_ParamLimits

0x7012,	// (0x000542f6) cell_vitu2_function_top_wide_pane

0xa551,	// (0x00057835) bg_button_pane_cp012

0x702e,	// (0x00054312) cell_vitu2_function_top_pane_g1

0xa397,	// (0x0005767b) bg_button_pane_cp013_ParamLimits

0xa397,	// (0x0005767b) bg_button_pane_cp013

0x7042,	// (0x00054326) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7042,	// (0x00054326) cell_vitu2_function_top_wide_pane_g1

0xa551,	// (0x00057835) bg_popup_sub_pane_cp20

0x705a,	// (0x0005433e) list_vitu2_match_list_pane

0xd6a9,	// (0x0005a98d) bg_popup_sub_pane_cp20_g1

0xd6b1,	// (0x0005a995) bg_popup_sub_pane_cp20_g2

0xacd0,	// (0x00057fb4) bg_popup_sub_pane_cp20_g3

0xd6b9,	// (0x0005a99d) bg_popup_sub_pane_cp20_g4

0xacb0,	// (0x00057f94) bg_popup_sub_pane_cp20_g5

0xd90c,	// (0x0005abf0) bg_popup_sub_pane_cp20_g6

0xd6c9,	// (0x0005a9ad) bg_popup_sub_pane_cp20_g7

0xd6d1,	// (0x0005a9b5) bg_popup_sub_pane_cp20_g8

0xd6d9,	// (0x0005a9bd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0005cccd) bg_popup_sub_pane_cp20_g

0xa3b3,	// (0x00057697) list_vitu2_match_list_item_pane_ParamLimits

0xa3b3,	// (0x00057697) list_vitu2_match_list_item_pane

0xa3c5,	// (0x000576a9) list_vitu2_match_list_item_pane_t1

0x9876,	// (0x00056b5a) bg_popup_sub_pane_cp21

0xb112,	// (0x000583f6) grid_vitu2_dropdown_list_pane

0x7078,	// (0x0005435c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7078,	// (0x0005435c) cell_vitu2_dropdown_list_char_pane

0x7099,	// (0x0005437d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7099,	// (0x0005437d) cell_vitu2_dropdown_list_ctrl_pane

0xd914,	// (0x0005abf8) cell_vitu2_dropdown_list_char_pane_g1

0xd91d,	// (0x0005ac01) cell_vitu2_dropdown_list_char_pane_g2

0xd926,	// (0x0005ac0a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0005ccea) cell_vitu2_dropdown_list_char_pane_g

0x70c5,	// (0x000543a9) cell_vitu2_dropdown_list_char_pane_t1

0x70d3,	// (0x000543b7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70d3,	// (0x000543b7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70e0,	// (0x000543c4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70e0,	// (0x000543c4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70ed,	// (0x000543d1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70ed,	// (0x000543d1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70fa,	// (0x000543de) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70fa,	// (0x000543de) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf58,	// (0x0005a23c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf58,	// (0x0005a23c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0005ccf1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0005ccf1) cell_vitu2_dropdown_list_ctrl_pane_g

0x7116,	// (0x000543fa) aid_size_cell_gallery2_ParamLimits

0x7116,	// (0x000543fa) aid_size_cell_gallery2

0x7134,	// (0x00054418) grid_gallery2_pane_ParamLimits

0x7134,	// (0x00054418) grid_gallery2_pane

0x714e,	// (0x00054432) scroll_pane_cp029_ParamLimits

0x714e,	// (0x00054432) scroll_pane_cp029

0x715f,	// (0x00054443) cell_gallery2_pane_ParamLimits

0x715f,	// (0x00054443) cell_gallery2_pane

0xd92f,	// (0x0005ac13) cell_gallery2_pane_g2

0x71be,	// (0x000544a2) cell_gallery2_pane_g3

0xd937,	// (0x0005ac1b) cell_gallery2_pane_g4

0xd93f,	// (0x0005ac23) cell_gallery2_pane_g5

0xaa77,	// (0x00057d5b) grid_highlight_pane_cp10

0x67fb,	// (0x00053adf) popup_vitu2_match_list_window_ParamLimits

0x6810,	// (0x00053af4) popup_vitu2_query_window_ParamLimits

0x6810,	// (0x00053af4) popup_vitu2_query_window

0x9876,	// (0x00056b5a) bg_vitu2_candi_button_pane

0xd914,	// (0x0005abf8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91d,	// (0x0005ac01) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd926,	// (0x0005ac0a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x062c,	// (0x0004d910) bg_button_pane_cp015

0x71c6,	// (0x000544aa) bg_button_pane_cp016

0x71d9,	// (0x000544bd) bg_button_pane_cp017

0xc90b,	// (0x00059bef) bg_popup_sub_pane_cp22

0xd947,	// (0x0005ac2b) popup_vitu2_query_window_g1

0x0661,	// (0x0004d945) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0005ccfc) popup_vitu2_query_window_g

0x0680,	// (0x0004d964) popup_vitu2_query_window_t1_ParamLimits

0x0680,	// (0x0004d964) popup_vitu2_query_window_t1

0x06b5,	// (0x0004d999) popup_vitu2_query_window_t2_ParamLimits

0x06b5,	// (0x0004d999) popup_vitu2_query_window_t2

0x06c7,	// (0x0004d9ab) popup_vitu2_query_window_t3_ParamLimits

0x06c7,	// (0x0004d9ab) popup_vitu2_query_window_t3

0x71fd,	// (0x000544e1) popup_vitu2_query_window_t4_ParamLimits

0x71fd,	// (0x000544e1) popup_vitu2_query_window_t4

0x721e,	// (0x00054502) popup_vitu2_query_window_t5_ParamLimits

0x721e,	// (0x00054502) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0005cd03) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0005cd03) popup_vitu2_query_window_t

0xd7ab,	// (0x0005aa8f) main_cset_text_pane

0x6c51,	// (0x00053f35) aid_area_touch_slider_ParamLimits

0x6c6d,	// (0x00053f51) cset_slider_pane_ParamLimits

0x6c97,	// (0x00053f7b) main_cset_slider_pane_g1_ParamLimits

0x6cac,	// (0x00053f90) main_cset_slider_pane_g2_ParamLimits

0xd7cc,	// (0x0005aab0) main_cset_slider_pane_g3_ParamLimits

0xd7cc,	// (0x0005aab0) main_cset_slider_pane_g3

0x6cc1,	// (0x00053fa5) main_cset_slider_pane_g4_ParamLimits

0x6cc1,	// (0x00053fa5) main_cset_slider_pane_g4

0x6cd0,	// (0x00053fb4) main_cset_slider_pane_g5_ParamLimits

0x6cd0,	// (0x00053fb4) main_cset_slider_pane_g5

0x6cdc,	// (0x00053fc0) main_cset_slider_pane_g6_ParamLimits

0x6cdc,	// (0x00053fc0) main_cset_slider_pane_g6

0xf972,	// (0x0005cc56) main_cset_slider_pane_g_ParamLimits

0xd7fc,	// (0x0005aae0) main_cset_slider_pane_t1_ParamLimits

0x6d50,	// (0x00054034) main_cset_slider_pane_t2_ParamLimits

0x6d6a,	// (0x0005404e) main_cset_slider_pane_t3_ParamLimits

0x6d84,	// (0x00054068) main_cset_slider_pane_t4_ParamLimits

0x6d9e,	// (0x00054082) main_cset_slider_pane_t5_ParamLimits

0x6db8,	// (0x0005409c) main_cset_slider_pane_t6_ParamLimits

0x6dcd,	// (0x000540b1) main_cset_slider_pane_t7_ParamLimits

0x6df7,	// (0x000540db) main_cset_slider_pane_t8_ParamLimits

0x6df7,	// (0x000540db) main_cset_slider_pane_t8

0x6e1f,	// (0x00054103) main_cset_slider_pane_t9_ParamLimits

0x6e1f,	// (0x00054103) main_cset_slider_pane_t9

0x6e47,	// (0x0005412b) main_cset_slider_pane_t10_ParamLimits

0x6e47,	// (0x0005412b) main_cset_slider_pane_t10

0x6e6f,	// (0x00054153) main_cset_slider_pane_t11_ParamLimits

0x6e6f,	// (0x00054153) main_cset_slider_pane_t11

0x6e97,	// (0x0005417b) main_cset_slider_pane_t12_ParamLimits

0x6e97,	// (0x0005417b) main_cset_slider_pane_t12

0x6eb4,	// (0x00054198) main_cset_slider_pane_t13_ParamLimits

0x6eb4,	// (0x00054198) main_cset_slider_pane_t13

0xf997,	// (0x0005cc7b) main_cset_slider_pane_t_ParamLimits

0x9876,	// (0x00056b5a) bg_popup_sub_pane_cp011

0xd953,	// (0x0005ac37) main_cset_text_pane_g1

0xd95b,	// (0x0005ac3f) main_cset_text_pane_t1

0xd969,	// (0x0005ac4d) main_cset_text_pane_t2

0xd977,	// (0x0005ac5b) main_cset_text_pane_t3

0xd985,	// (0x0005ac69) main_cset_text_pane_t4

0xd993,	// (0x0005ac77) main_cset_text_pane_t5

0xd9a1,	// (0x0005ac85) main_cset_text_pane_t6

0xd9af,	// (0x0005ac93) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0005cd12) main_cset_text_pane_t

0x9876,	// (0x00056b5a) main_cam4_burst_pane

0x9876,	// (0x00056b5a) main_cam5_pane

0x6b90,	// (0x00053e74) bg_button_pane_cp019

0x6b99,	// (0x00053e7d) bg_button_pane_cp020

0xd7d8,	// (0x0005aabc) main_cset_slider_pane_g7_ParamLimits

0xd7d8,	// (0x0005aabc) main_cset_slider_pane_g7

0xd7e4,	// (0x0005aac8) main_cset_slider_pane_g8_ParamLimits

0xd7e4,	// (0x0005aac8) main_cset_slider_pane_g8

0x6cf0,	// (0x00053fd4) main_cset_slider_pane_g9_ParamLimits

0x6cf0,	// (0x00053fd4) main_cset_slider_pane_g9

0x6cfc,	// (0x00053fe0) main_cset_slider_pane_g10_ParamLimits

0x6cfc,	// (0x00053fe0) main_cset_slider_pane_g10

0x6d08,	// (0x00053fec) main_cset_slider_pane_g11_ParamLimits

0x6d08,	// (0x00053fec) main_cset_slider_pane_g11

0x6d14,	// (0x00053ff8) main_cset_slider_pane_g12_ParamLimits

0x6d14,	// (0x00053ff8) main_cset_slider_pane_g12

0x6d20,	// (0x00054004) main_cset_slider_pane_g13_ParamLimits

0x6d20,	// (0x00054004) main_cset_slider_pane_g13

0x6d2c,	// (0x00054010) main_cset_slider_pane_g14_ParamLimits

0x6d2c,	// (0x00054010) main_cset_slider_pane_g14

0x6d38,	// (0x0005401c) main_cset_slider_pane_g15_ParamLimits

0x6d38,	// (0x0005401c) main_cset_slider_pane_g15

0xd82a,	// (0x0005ab0e) main_cset_slider_pane_t14_ParamLimits

0xd82a,	// (0x0005ab0e) main_cset_slider_pane_t14

0xd890,	// (0x0005ab74) main_cset_slider_pane_t15_ParamLimits

0xd890,	// (0x0005ab74) main_cset_slider_pane_t15

0x723f,	// (0x00054523) aid_cam4_burst_size_cell_ParamLimits

0x723f,	// (0x00054523) aid_cam4_burst_size_cell

0x725f,	// (0x00054543) grid_cam4_burst_pane_ParamLimits

0x725f,	// (0x00054543) grid_cam4_burst_pane

0x7297,	// (0x0005457b) linegrid_cam4_burst_pane_ParamLimits

0x7297,	// (0x0005457b) linegrid_cam4_burst_pane

0xd9bd,	// (0x0005aca1) scroll_pane_cp30_ParamLimits

0xd9bd,	// (0x0005aca1) scroll_pane_cp30

0x72bb,	// (0x0005459f) cell_cam4_burst_pane_ParamLimits

0x72bb,	// (0x0005459f) cell_cam4_burst_pane

0xd9c9,	// (0x0005acad) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c9,	// (0x0005acad) linegrid_cam4_burst_pane_g1

0x7308,	// (0x000545ec) linegrid_cam4_burst_pane_g2_ParamLimits

0x7308,	// (0x000545ec) linegrid_cam4_burst_pane_g2

0xd9d6,	// (0x0005acba) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d6,	// (0x0005acba) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0005cd21) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0005cd21) linegrid_cam4_burst_pane_g

0x7319,	// (0x000545fd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7319,	// (0x000545fd) linegrid_cam4_burst_pane_g3_copy1

0xd9e3,	// (0x0005acc7) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e3,	// (0x0005acc7) linegrid_cam4_burst_pane_g4

0x7333,	// (0x00054617) linegrid_cam4_burst_pane_g5_ParamLimits

0x7333,	// (0x00054617) linegrid_cam4_burst_pane_g5

0x7344,	// (0x00054628) linegrid_cam4_burst_pane_g6_ParamLimits

0x7344,	// (0x00054628) linegrid_cam4_burst_pane_g6

0xd9f0,	// (0x0005acd4) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f0,	// (0x0005acd4) linegrid_cam4_burst_pane_g7

0x735b,	// (0x0005463f) cell_cam4_burst_pane_g1

0xda09,	// (0x0005aced) main_cam5_pane_t1_ParamLimits

0xda09,	// (0x0005aced) main_cam5_pane_t1

0xda1b,	// (0x0005acff) main_cam5_pane_t2_ParamLimits

0xda1b,	// (0x0005acff) main_cam5_pane_t2

0xda2d,	// (0x0005ad11) main_cam5_pane_t3_ParamLimits

0xda2d,	// (0x0005ad11) main_cam5_pane_t3

0xda3f,	// (0x0005ad23) main_cam5_pane_t4_ParamLimits

0xda3f,	// (0x0005ad23) main_cam5_pane_t4

0xda57,	// (0x0005ad3b) main_cam5_pane_t5_ParamLimits

0xda57,	// (0x0005ad3b) main_cam5_pane_t5

0xda6b,	// (0x0005ad4f) main_cam5_pane_t6_ParamLimits

0xda6b,	// (0x0005ad4f) main_cam5_pane_t6

0xda7f,	// (0x0005ad63) main_cam5_pane_t7_ParamLimits

0xda7f,	// (0x0005ad63) main_cam5_pane_t7

0xda91,	// (0x0005ad75) main_cam5_pane_t8_ParamLimits

0xda91,	// (0x0005ad75) main_cam5_pane_t8

0xdaad,	// (0x0005ad91) main_cam5_pane_t9_ParamLimits

0xdaad,	// (0x0005ad91) main_cam5_pane_t9

0xdabf,	// (0x0005ada3) main_cam5_pane_t10_ParamLimits

0xdabf,	// (0x0005ada3) main_cam5_pane_t10

0xdad1,	// (0x0005adb5) main_cam5_pane_t11_ParamLimits

0xdad1,	// (0x0005adb5) main_cam5_pane_t11

0xdae3,	// (0x0005adc7) main_cam5_pane_t12_ParamLimits

0xdae3,	// (0x0005adc7) main_cam5_pane_t12

0xdaf8,	// (0x0005addc) main_cam5_pane_t13_ParamLimits

0xdaf8,	// (0x0005addc) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0005cd2d) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0005cd2d) main_cam5_pane_t

0x12e0,	// (0x0004e5c4) popup_scut_keymap_window_ParamLimits

0x12e0,	// (0x0004e5c4) popup_scut_keymap_window

0x736e,	// (0x00054652) aid_size_cell_brow_shortcut

0xaa77,	// (0x00057d5b) bg_popup_window_pane_cp010

0x737a,	// (0x0005465e) grid_scut_pane

0x7386,	// (0x0005466a) cell_scut_pane_ParamLimits

0x7386,	// (0x0005466a) cell_scut_pane

0x739d,	// (0x00054681) cell_scut_pane_g1

0xdb15,	// (0x0005adf9) cell_scut_pane_t1

0xdb24,	// (0x0005ae08) cell_scut_pane_t2

0x73a6,	// (0x0005468a) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0005cd48) cell_scut_pane_t

0x51dc,	// (0x000524c0) main_mup3_pane_g8_ParamLimits

0x51dc,	// (0x000524c0) main_mup3_pane_g8

0x66f4,	// (0x000539d8) area_vitu2_query_pane_ParamLimits

0x66f4,	// (0x000539d8) area_vitu2_query_pane

0x0640,	// (0x0004d924) input_focus_pane_cp08

0xdb33,	// (0x0005ae17) area_vitu2_query_pane_g1

0x0745,	// (0x0004da29) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0005cd4f) area_vitu2_query_pane_g

0x73b4,	// (0x00054698) area_vitu2_query_pane_t1_ParamLimits

0x73b4,	// (0x00054698) area_vitu2_query_pane_t1

0x73c8,	// (0x000546ac) area_vitu2_query_pane_t2_ParamLimits

0x73c8,	// (0x000546ac) area_vitu2_query_pane_t2

0x0756,	// (0x0004da3a) area_vitu2_query_pane_t3_ParamLimits

0x0756,	// (0x0004da3a) area_vitu2_query_pane_t3

0x73dc,	// (0x000546c0) area_vitu2_query_pane_t4_ParamLimits

0x73dc,	// (0x000546c0) area_vitu2_query_pane_t4

0x7404,	// (0x000546e8) area_vitu2_query_pane_t5_ParamLimits

0x7404,	// (0x000546e8) area_vitu2_query_pane_t5

0x742c,	// (0x00054710) area_vitu2_query_pane_t6_ParamLimits

0x742c,	// (0x00054710) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0005cd54) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0005cd54) area_vitu2_query_pane_t

0x7478,	// (0x0005475c) bg_button_pane_cp018

0x7486,	// (0x0005476a) bg_button_pane_cp021

0x077e,	// (0x0004da62) bg_button_pane_cp022

0x078f,	// (0x0004da73) input_focus_pane_cp09

0xb315,	// (0x000585f9) aid_size_touch_mv_arrow_left

0xb340,	// (0x00058624) aid_size_touch_mv_arrow_right

0xd878,	// (0x0005ab5c) main_cset_slider_pane_g16_ParamLimits

0xd878,	// (0x0005ab5c) main_cset_slider_pane_g16

0xd884,	// (0x0005ab68) main_cset_slider_pane_g17_ParamLimits

0xd884,	// (0x0005ab68) main_cset_slider_pane_g17

0x735b,	// (0x0005463f) cell_cam4_burst_pane_g1_ParamLimits

0x9876,	// (0x00056b5a) compa_mode_pane

0x6f1e,	// (0x00054202) popup_vtel_slider_window_g3_ParamLimits

0x6f1e,	// (0x00054202) popup_vtel_slider_window_g3

0x6f35,	// (0x00054219) popup_vtel_slider_window_g4_ParamLimits

0x6f35,	// (0x00054219) popup_vtel_slider_window_g4

0x6f4c,	// (0x00054230) popup_vtel_slider_window_t1_ParamLimits

0x6f4c,	// (0x00054230) popup_vtel_slider_window_t1

0x9876,	// (0x00056b5a) main_cl_pane

0x9e94,	// (0x00057178) popup_imed_adjust2_window_ParamLimits

0xc90b,	// (0x00059bef) bg_tb_trans_pane_cp05_ParamLimits

0xd218,	// (0x0005a4fc) popup_imed_adjust2_window_g1_ParamLimits

0xd227,	// (0x0005a50b) popup_imed_adjust2_window_g2_ParamLimits

0xd227,	// (0x0005a50b) popup_imed_adjust2_window_g2

0xd233,	// (0x0005a517) popup_imed_adjust2_window_g3_ParamLimits

0xd233,	// (0x0005a517) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0005cabb) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0005cabb) popup_imed_adjust2_window_g

0xd23f,	// (0x0005a523) popup_imed_adjust2_window_t1_ParamLimits

0xd257,	// (0x0005a53b) slider_imed_adjust_pane_ParamLimits

0xd26b,	// (0x0005a54f) slider_imed_adjust_pane_g1_ParamLimits

0xd27b,	// (0x0005a55f) slider_imed_adjust_pane_g2_ParamLimits

0xd28b,	// (0x0005a56f) slider_imed_adjust_pane_g3_ParamLimits

0xd29c,	// (0x0005a580) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0005cac2) slider_imed_adjust_pane_g_ParamLimits

0x647d,	// (0x00053761) aid_touch_area_cam4_ParamLimits

0x647d,	// (0x00053761) aid_touch_area_cam4

0xa282,	// (0x00057566) battery_pane_cp01

0x654c,	// (0x00053830) main_camera4_pane_g6_ParamLimits

0x654c,	// (0x00053830) main_camera4_pane_g6

0x6576,	// (0x0005385a) main_camera4_pane_t2_ParamLimits

0x6576,	// (0x0005385a) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0005cbc9) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0005cbc9) main_camera4_pane_t

0x65ab,	// (0x0005388f) aid_touch_area_vid4_ParamLimits

0x65ab,	// (0x0005388f) aid_touch_area_vid4

0x65ff,	// (0x000538e3) main_video4_pane_g5_ParamLimits

0x65ff,	// (0x000538e3) main_video4_pane_g5

0x6624,	// (0x00053908) vid4_progress_pane_ParamLimits

0x6624,	// (0x00053908) vid4_progress_pane

0xd7f0,	// (0x0005aad4) main_cset_slider_pane_g18_ParamLimits

0xd7f0,	// (0x0005aad4) main_cset_slider_pane_g18

0xd9fd,	// (0x0005ace1) cell_cam4_burst_pane_g2_ParamLimits

0xd9fd,	// (0x0005ace1) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0005cd28) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0005cd28) cell_cam4_burst_pane_g

0xa88b,	// (0x00057b6f) bg_cl_pane_ParamLimits

0xa88b,	// (0x00057b6f) bg_cl_pane

0x7492,	// (0x00054776) cl_header_pane_ParamLimits

0x7492,	// (0x00054776) cl_header_pane

0x74a6,	// (0x0005478a) cl_listscroll_pane_ParamLimits

0x74a6,	// (0x0005478a) cl_listscroll_pane

0xdb3f,	// (0x0005ae23) bg_cl_pane_g1

0xdb47,	// (0x0005ae2b) bg_cl_pane_g2

0xdb4f,	// (0x0005ae33) bg_cl_pane_g3

0xdb57,	// (0x0005ae3b) bg_cl_pane_g4

0xdb5f,	// (0x0005ae43) bg_cl_pane_g5

0xdb67,	// (0x0005ae4b) bg_cl_pane_g6

0xdb6f,	// (0x0005ae53) bg_cl_pane_g7

0xdb77,	// (0x0005ae5b) bg_cl_pane_g8

0xdb7f,	// (0x0005ae63) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0005cd63) bg_cl_pane_g

0x74b6,	// (0x0005479a) aid_height_cl_leading_ParamLimits

0x74b6,	// (0x0005479a) aid_height_cl_leading

0x74c2,	// (0x000547a6) aid_height_cl_text_ParamLimits

0x74c2,	// (0x000547a6) aid_height_cl_text

0xa551,	// (0x00057835) bg_cl_header_pane_ParamLimits

0xa551,	// (0x00057835) bg_cl_header_pane

0x74e1,	// (0x000547c5) cl_header_pane_g1_ParamLimits

0x74e1,	// (0x000547c5) cl_header_pane_g1

0x74f7,	// (0x000547db) cl_header_pane_t1_ParamLimits

0x74f7,	// (0x000547db) cl_header_pane_t1

0xdb87,	// (0x0005ae6b) cl_list_pane

0xd7c3,	// (0x0005aaa7) hc_scroll_pane_cp01

0xacb0,	// (0x00057f94) bg_cl_header_pane_g1

0xd6a9,	// (0x0005a98d) bg_cl_header_pane_g2

0xacd0,	// (0x00057fb4) bg_cl_header_pane_g3

0xd6b9,	// (0x0005a99d) bg_cl_header_pane_g4

0xd6b1,	// (0x0005a995) bg_cl_header_pane_g5

0xd90c,	// (0x0005abf0) bg_cl_header_pane_g6

0xd6d1,	// (0x0005a9b5) bg_cl_header_pane_g7

0xd6d9,	// (0x0005a9bd) bg_cl_header_pane_g8

0xd6c9,	// (0x0005a9ad) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0005cd76) bg_cl_header_pane_g

0x7510,	// (0x000547f4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7510,	// (0x000547f4) hc_cl_list_double_graphic_heading_pane

0x7521,	// (0x00054805) hc_cl_list_single_graphic_pane_ParamLimits

0x7521,	// (0x00054805) hc_cl_list_single_graphic_pane

0x753a,	// (0x0005481e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x753a,	// (0x0005481e) hc_cl_list_single_graphic_pane_g1

0x7546,	// (0x0005482a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7546,	// (0x0005482a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0005cd89) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0005cd89) hc_cl_list_single_graphic_pane_g

0x755a,	// (0x0005483e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x755a,	// (0x0005483e) hc_cl_list_single_graphic_pane_t1

0x753a,	// (0x0005481e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x753a,	// (0x0005481e) hc_cl_list_double_graphic_heading_pane_g1

0x756f,	// (0x00054853) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x756f,	// (0x00054853) hc_cl_list_double_graphic_heading_pane_g2

0x7583,	// (0x00054867) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7583,	// (0x00054867) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0005cd8e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0005cd8e) hc_cl_list_double_graphic_heading_pane_g

0x7597,	// (0x0005487b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7597,	// (0x0005487b) hc_cl_list_double_graphic_heading_pane_t1

0x75ac,	// (0x00054890) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75ac,	// (0x00054890) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0005cd95) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0005cd95) hc_cl_list_double_graphic_heading_pane_t

0xa3db,	// (0x000576bf) vid4_progress_pane_g1

0xa3eb,	// (0x000576cf) vid4_progress_pane_g2

0x75c1,	// (0x000548a5) vid4_progress_pane_g3

0xa3fb,	// (0x000576df) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0005cd9a) vid4_progress_pane_g

0x75d3,	// (0x000548b7) vid4_progress_pane_t1

0xa413,	// (0x000576f7) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0005cda5) vid4_progress_pane_t

0x75e9,	// (0x000548cd) wait_bar_pane_cp07

0xcb06,	// (0x00059dea) blid_firmament_pane_ParamLimits

0xcb49,	// (0x00059e2d) popup_blid_sat_info2_window_g1

0xcb6d,	// (0x00059e51) popup_blid_sat_info2_window_t3

0xcb7b,	// (0x00059e5f) popup_blid_sat_info2_window_t4

0xcb89,	// (0x00059e6d) popup_blid_sat_info2_window_t5

0xcb97,	// (0x00059e7b) popup_blid_sat_info2_window_t6

0xcba7,	// (0x00059e8b) popup_blid_sat_info2_window_t7

0xcbb5,	// (0x00059e99) popup_blid_sat_info2_window_t8

0xcbc3,	// (0x00059ea7) popup_blid_sat_info2_window_t9

0xcbd1,	// (0x00059eb5) popup_blid_sat_info2_window_t10

0xcc93,	// (0x00059f77) aid_firma_cardinal_ParamLimits

0xcca7,	// (0x00059f8b) blid_firmament_pane_t1_ParamLimits

0xccbe,	// (0x00059fa2) blid_firmament_pane_t2_ParamLimits

0xccd5,	// (0x00059fb9) blid_firmament_pane_t3_ParamLimits

0xccec,	// (0x00059fd0) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0005c9af) blid_firmament_pane_t_ParamLimits

0xcd03,	// (0x00059fe7) blid_sat_info_pane_ParamLimits

0xa551,	// (0x00057835) main_cam_set_pane_ParamLimits

0x5a97,	// (0x00052d7b) aid_size_cell_colour_35_ParamLimits

0x5ab7,	// (0x00052d9b) aid_size_cell_colour_112_ParamLimits

0x5ad7,	// (0x00052dbb) aid_size_cell_effect_ParamLimits

0xc90b,	// (0x00059bef) bg_tb_trans_pane_cp02_ParamLimits

0xaf18,	// (0x000581fc) heading_imed_pane_ParamLimits

0x5af7,	// (0x00052ddb) listscroll_imed_pane_ParamLimits

0xbef7,	// (0x000591db) popup_call2_audio_first_window_g5_ParamLimits

0xbef7,	// (0x000591db) popup_call2_audio_first_window_g5

0x6095,	// (0x00053379) aid_size_touch_image3_arrow_left_ParamLimits

0x6095,	// (0x00053379) aid_size_touch_image3_arrow_left

0x60c1,	// (0x000533a5) aid_size_touch_image3_arrow_right_ParamLimits

0x60c1,	// (0x000533a5) aid_size_touch_image3_arrow_right

0xa428,	// (0x0005770c) vid4_progress_pane_t3

0x5e0c,	// (0x000530f0) main_hwr_training_symbol_option_pane_ParamLimits

0x5e0c,	// (0x000530f0) main_hwr_training_symbol_option_pane

0xd505,	// (0x0005a7e9) popup_hwr_training_preview_window_ParamLimits

0xd505,	// (0x0005a7e9) popup_hwr_training_preview_window

0x5e2c,	// (0x00053110) hwr_training_navi_pane_g5_ParamLimits

0x5e2c,	// (0x00053110) hwr_training_navi_pane_g5

0xd697,	// (0x0005a97b) popup_char_count_window

0xa551,	// (0x00057835) bg_popup_sub_pane_cp20_ParamLimits

0x705a,	// (0x0005433e) list_vitu2_match_list_pane_ParamLimits

0x7069,	// (0x0005434d) vitu2_page_scroll_pane_ParamLimits

0x7069,	// (0x0005434d) vitu2_page_scroll_pane

0xdb90,	// (0x0005ae74) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb90,	// (0x0005ae74) list_single_hwr_training_symbol_option_pane

0xdba3,	// (0x0005ae87) list_single_hwr_training_symbol_option_pane_g1

0xdbab,	// (0x0005ae8f) list_single_hwr_training_symbol_option_pane_t1

0xdbb9,	// (0x0005ae9d) bg_button_pane_cp023

0xdbc2,	// (0x0005aea6) bg_button_pane_cp024

0x761c,	// (0x00054900) vitu2_page_scroll_pane_g1

0x7624,	// (0x00054908) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0005cdac) vitu2_page_scroll_pane_g

0x762c,	// (0x00054910) vitu2_page_scroll_pane_t1

0xa90c,	// (0x00057bf0) popup_char_count_window_g1

0xdbf5,	// (0x0005aed9) popup_char_count_window_g2

0xd863,	// (0x0005ab47) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0005cdb1) popup_char_count_window_g

0xdbfe,	// (0x0005aee2) popup_char_count_window_t1

0x9876,	// (0x00056b5a) main_vded2_pane

0xd204,	// (0x0005a4e8) aid_size_cell_imed_line

0xd20e,	// (0x0005a4f2) grid_imed_line_width_pane

0xa332,	// (0x00057616) vid4_indicators_pane_g4

0xdc0c,	// (0x0005aef0) cell_imed_line_width_pane_ParamLimits

0xdc0c,	// (0x0005aef0) cell_imed_line_width_pane

0xdc20,	// (0x0005af04) cell_imed_line_width_pane_g1

0xdc29,	// (0x0005af0d) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0005cdb8) cell_imed_line_width_pane_g

0x763b,	// (0x0005491f) main_vded2_pane_g1_ParamLimits

0x763b,	// (0x0005491f) main_vded2_pane_g1

0x7651,	// (0x00054935) main_vded2_pane_g2_ParamLimits

0x7651,	// (0x00054935) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0005cdbd) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0005cdbd) main_vded2_pane_g

0x7663,	// (0x00054947) vded2_slider_pane_ParamLimits

0x7663,	// (0x00054947) vded2_slider_pane

0x7673,	// (0x00054957) aid_size_touch_vded2_end

0x767d,	// (0x00054961) aid_size_touch_vded2_playhead

0xdc31,	// (0x0005af15) aid_size_touch_vded2_start

0xdc39,	// (0x0005af1d) vded2_slider_bg_pane

0xdc42,	// (0x0005af26) vded2_slider_pane_g1

0xdc4b,	// (0x0005af2f) vded2_slider_pane_g2

0x7687,	// (0x0005496b) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0005cdc2) vded2_slider_pane_g

0xdc53,	// (0x0005af37) vded2_slider_bg_pane_g1

0xdc5c,	// (0x0005af40) vded2_slider_bg_pane_g2

0xdc65,	// (0x0005af49) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0005cdc9) vded2_slider_bg_pane_g

0x379f,	// (0x00050a83) aid_postcard_touch_down_pane_ParamLimits

0x379f,	// (0x00050a83) aid_postcard_touch_down_pane

0x37b5,	// (0x00050a99) aid_postcard_touch_up_pane_ParamLimits

0x37b5,	// (0x00050a99) aid_postcard_touch_up_pane

0x9876,	// (0x00056b5a) main_blid2_pane

0x9e7a,	// (0x0005715e) popup_blid2_search_window

0x9876,	// (0x00056b5a) blid2_gps_pane

0x9876,	// (0x00056b5a) blid2_navig_pane

0x9876,	// (0x00056b5a) blid2_search_pane

0x9876,	// (0x00056b5a) blid2_tripm_pane

0x7692,	// (0x00054976) blid2_search_pane_g1_ParamLimits

0x7692,	// (0x00054976) blid2_search_pane_g1

0x76aa,	// (0x0005498e) blid2_search_pane_t1_ParamLimits

0x76aa,	// (0x0005498e) blid2_search_pane_t1

0x76bc,	// (0x000549a0) aid_size_cell_blid2_gps_ParamLimits

0x76bc,	// (0x000549a0) aid_size_cell_blid2_gps

0x76d4,	// (0x000549b8) blid2_gps_pane_g1_ParamLimits

0x76d4,	// (0x000549b8) blid2_gps_pane_g1

0x76e8,	// (0x000549cc) grid_blid2_satellite_pane_ParamLimits

0x76e8,	// (0x000549cc) grid_blid2_satellite_pane

0x7702,	// (0x000549e6) blid2_navig_pane_g1_ParamLimits

0x7702,	// (0x000549e6) blid2_navig_pane_g1

0x770e,	// (0x000549f2) blid2_navig_pane_t1_ParamLimits

0x770e,	// (0x000549f2) blid2_navig_pane_t1

0x7729,	// (0x00054a0d) blid2_navig_pane_t2_ParamLimits

0x7729,	// (0x00054a0d) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0005cdd0) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0005cdd0) blid2_navig_pane_t

0x7744,	// (0x00054a28) blid2_navig_ring_pane_ParamLimits

0x7744,	// (0x00054a28) blid2_navig_ring_pane

0x775d,	// (0x00054a41) blid2_speed_pane_ParamLimits

0x775d,	// (0x00054a41) blid2_speed_pane

0x7769,	// (0x00054a4d) blid2_tripm_pane_g1_ParamLimits

0x7769,	// (0x00054a4d) blid2_tripm_pane_g1

0x7784,	// (0x00054a68) blid2_tripm_pane_g2_ParamLimits

0x7784,	// (0x00054a68) blid2_tripm_pane_g2

0x7798,	// (0x00054a7c) blid2_tripm_pane_g3_ParamLimits

0x7798,	// (0x00054a7c) blid2_tripm_pane_g3

0x77ac,	// (0x00054a90) blid2_tripm_pane_g4_ParamLimits

0x77ac,	// (0x00054a90) blid2_tripm_pane_g4

0x77c0,	// (0x00054aa4) blid2_tripm_pane_g5_ParamLimits

0x77c0,	// (0x00054aa4) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0005cdd5) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0005cdd5) blid2_tripm_pane_g

0x77e6,	// (0x00054aca) blid2_tripm_pane_t1_ParamLimits

0x77e6,	// (0x00054aca) blid2_tripm_pane_t1

0x7801,	// (0x00054ae5) blid2_tripm_pane_t2_ParamLimits

0x7801,	// (0x00054ae5) blid2_tripm_pane_t2

0x781a,	// (0x00054afe) blid2_tripm_pane_t3_ParamLimits

0x781a,	// (0x00054afe) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0005cde2) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0005cde2) blid2_tripm_pane_t

0x7861,	// (0x00054b45) cell_blid2_satellite_pane_ParamLimits

0x7861,	// (0x00054b45) cell_blid2_satellite_pane

0x787f,	// (0x00054b63) cell_blid2_satellite_pane_g1

0xdc6e,	// (0x0005af52) cell_blid2_satellite_pane_t1

0xcd13,	// (0x00059ff7) blid2_speed_pane_g1

0xdc7c,	// (0x0005af60) blid2_speed_pane_t1

0xdc8a,	// (0x0005af6e) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0005cdeb) blid2_speed_pane_t

0xcd13,	// (0x00059ff7) blid2_navig_ring_pane_g1

0x7888,	// (0x00054b6c) blid2_navig_ring_pane_g2

0x7890,	// (0x00054b74) blid2_navig_ring_pane_g3

0x7898,	// (0x00054b7c) blid2_navig_ring_pane_g4

0x78a0,	// (0x00054b84) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0005cdf0) blid2_navig_ring_pane_g

0x9876,	// (0x00056b5a) bg_popup_window_pane_cp011

0xdc98,	// (0x0005af7c) popup_blid2_search_window_g1

0xdca0,	// (0x0005af84) popup_blid2_search_window_t1

0xdcae,	// (0x0005af92) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0005cdfb) popup_blid2_search_window_t

0xabbf,	// (0x00057ea3) main_browser_pane_g1

0xa88b,	// (0x00057b6f) main_browser_pane_ParamLimits

0xa551,	// (0x00057835) bg_button_pane_cp011_ParamLimits

0x6929,	// (0x00053c0d) cell_vitu2_function_pane_g1_ParamLimits

0xc90b,	// (0x00059bef) bg_popup_sub_pane_cp22_ParamLimits

0x0640,	// (0x0004d924) input_focus_pane_cp08_ParamLimits

0x71ec,	// (0x000544d0) popup_vitu2_query_button_pane_ParamLimits

0x71ec,	// (0x000544d0) popup_vitu2_query_button_pane

0x0657,	// (0x0004d93b) popup_vitu2_query_input_button_pane

0xd947,	// (0x0005ac2b) popup_vitu2_query_window_g1_ParamLimits

0x0661,	// (0x0004d945) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0005ccfc) popup_vitu2_query_window_g_ParamLimits

0x9876,	// (0x00056b5a) bg_button_pane_cp026

0x78a8,	// (0x00054b8c) popup_vitu2_query_input_button_pane_g1

0x9876,	// (0x00056b5a) bg_button_pane_cp025

0xdcbc,	// (0x0005afa0) popup_vitu2_query_button_pane_t1

0x4e36,	// (0x0005211a) main_mp3_pane_t6

0x4e44,	// (0x00052128) popup_slider_window_cp01

0xa29e,	// (0x00057582) cam4_battery_pane

0xa2f1,	// (0x000575d5) cam4_battery_pane_cp02

0xa3d3,	// (0x000576b7) cam4_battery_pane_cp01

0xa3d3,	// (0x000576b7) cam4_battery_pane_cp03

0xcd13,	// (0x00059ff7) cam4_battery_pane_g1

0xdcca,	// (0x0005afae) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0005ce00) cam4_battery_pane_g

0xcbdf,	// (0x00059ec3) popup_blid_sat_info2_window_t11

0xb315,	// (0x000585f9) aid_size_touch_mv_arrow_left_ParamLimits

0xb340,	// (0x00058624) aid_size_touch_mv_arrow_right_ParamLimits

0xb39e,	// (0x00058682) navi_pane_g1_ParamLimits

0xb3aa,	// (0x0005868e) navi_pane_g2_ParamLimits

0xb3d8,	// (0x000586bc) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0005c6ae) navi_pane_g_ParamLimits

0x3220,	// (0x00050504) navi_pane_mv_t1_ParamLimits

0x5b03,	// (0x00052de7) grid_imed_effect_pane_ParamLimits

0x212f,	// (0x0004f413) aid_placing_vt_slider_lsc

0xab0e,	// (0x00057df2) aid_placing_vt_slider_prt

0xa551,	// (0x00057835) bg_tb_trans_pane_cp01_ParamLimits

0xce78,	// (0x0005a15c) popup_image_details_window_g1_ParamLimits

0xce8b,	// (0x0005a16f) popup_image_details_window_g2_ParamLimits

0xcea0,	// (0x0005a184) popup_image_details_window_g3_ParamLimits

0xcea0,	// (0x0005a184) popup_image_details_window_g3

0xf710,	// (0x0005c9f4) popup_image_details_window_g_ParamLimits

0xceb4,	// (0x0005a198) popup_image_details_window_t1_ParamLimits

0xcec6,	// (0x0005a1aa) popup_image_details_window_t2_ParamLimits

0xcedf,	// (0x0005a1c3) popup_image_details_window_t3_ParamLimits

0xcef3,	// (0x0005a1d7) popup_image_details_window_t4_ParamLimits

0xcf0e,	// (0x0005a1f2) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0005c9fb) popup_image_details_window_t_ParamLimits

0x74ce,	// (0x000547b2) cl_header_name_pane_ParamLimits

0x74ce,	// (0x000547b2) cl_header_name_pane

0x78b0,	// (0x00054b94) cl_header_name_pane_t1_ParamLimits

0x78b0,	// (0x00054b94) cl_header_name_pane_t1

0x78d1,	// (0x00054bb5) cl_header_name_pane_t2_ParamLimits

0x78d1,	// (0x00054bb5) cl_header_name_pane_t2

0x7913,	// (0x00054bf7) cl_header_name_pane_t3_ParamLimits

0x7913,	// (0x00054bf7) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0005ce05) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0005ce05) cl_header_name_pane_t

0xb467,	// (0x0005874b) navi_pane_mv_g2_ParamLimits

0xd671,	// (0x0005a955) field_vitu2_entry_pane_g1_ParamLimits

0xd67d,	// (0x0005a961) field_vitu2_entry_pane_g2_ParamLimits

0xd689,	// (0x0005a96d) field_vitu2_entry_pane_g3_ParamLimits

0xd689,	// (0x0005a96d) field_vitu2_entry_pane_g3

0xf917,	// (0x0005cbfb) field_vitu2_entry_pane_g_ParamLimits

0xa365,	// (0x00057649) cell_vitu2_itu_pane_g1_ParamLimits

0x68bd,	// (0x00053ba1) cell_vitu2_itu_pane_g2_ParamLimits

0x68bd,	// (0x00053ba1) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0005cc07) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0005cc07) cell_vitu2_itu_pane_g

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp05_ParamLimits

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp05

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp03

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp04

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp10_ParamLimits

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp10

0x077e,	// (0x0004da62) bg_vkb2_func_pane_cp08

0x7478,	// (0x0005475c) bg_vkb2_func_pane_cp06

0x7486,	// (0x0005476a) bg_vkb2_func_pane_cp07

0xdbcb,	// (0x0005aeaf) bg_vkb2_func_pane_cp11_ParamLimits

0xdbcb,	// (0x0005aeaf) bg_vkb2_func_pane_cp11

0xdbe0,	// (0x0005aec4) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe0,	// (0x0005aec4) bg_vkb2_func_pane_cp12

0x9876,	// (0x00056b5a) bg_vkb2_func_pane_cp09

0xd6a9,	// (0x0005a98d) bg_vkb2_func_pane_g1

0xacd0,	// (0x00057fb4) bg_vkb2_func_pane_g2

0xd6b1,	// (0x0005a995) bg_vkb2_func_pane_g3

0xd6b9,	// (0x0005a99d) bg_vkb2_func_pane_g4

0xd90c,	// (0x0005abf0) bg_vkb2_func_pane_g5

0xd6d1,	// (0x0005a9b5) bg_vkb2_func_pane_g6

0xd6d9,	// (0x0005a9bd) bg_vkb2_func_pane_g7

0xd6c9,	// (0x0005a9ad) bg_vkb2_func_pane_g8

0xacb0,	// (0x00057f94) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0005ce0c) bg_vkb2_func_pane_g

0x77d4,	// (0x00054ab8) blid2_tripm_pane_g6_ParamLimits

0x77d4,	// (0x00054ab8) blid2_tripm_pane_g6

0xd5c3,	// (0x0005a8a7) mp4_progress_pane_g1

0x784d,	// (0x00054b31) blid2_tripm_values_pane_ParamLimits

0x784d,	// (0x00054b31) blid2_tripm_values_pane

0x7944,	// (0x00054c28) blid2_tripm_values_pane_t1

0x7952,	// (0x00054c36) blid2_tripm_values_pane_t2

0x7960,	// (0x00054c44) blid2_tripm_values_pane_t3

0x796e,	// (0x00054c52) blid2_tripm_values_pane_t4

0x797c,	// (0x00054c60) blid2_tripm_values_pane_t5

0x798a,	// (0x00054c6e) blid2_tripm_values_pane_t6

0x7998,	// (0x00054c7c) blid2_tripm_values_pane_t7

0x79a6,	// (0x00054c8a) blid2_tripm_values_pane_t8

0x79b4,	// (0x00054c98) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0005ce1f) blid2_tripm_values_pane_t

0x2171,	// (0x0004f455) call_video_pane_t1_ParamLimits

0x218f,	// (0x0004f473) call_video_pane_t2_ParamLimits

0xf253,	// (0x0005c537) call_video_pane_t_ParamLimits

0x0474,	// (0x0004d758) msg_header_pane_g1_ParamLimits

0xb641,	// (0x00058925) msg_header_pane_g2_ParamLimits

0xb641,	// (0x00058925) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0005c751) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0005c751) msg_header_pane_g

0xa88b,	// (0x00057b6f) main_clock2_pane_ParamLimits

0x5804,	// (0x00052ae8) grid_clock2_toolbar_pane_ParamLimits

0x5804,	// (0x00052ae8) grid_clock2_toolbar_pane

0x5804,	// (0x00052ae8) listscroll_clock2_pane_ParamLimits

0x5804,	// (0x00052ae8) listscroll_clock2_pane

0x58e8,	// (0x00052bcc) main_clock2_pane_t3_ParamLimits

0x58e8,	// (0x00052bcc) main_clock2_pane_t3

0x590c,	// (0x00052bf0) main_clock2_pane_t4_ParamLimits

0x590c,	// (0x00052bf0) main_clock2_pane_t4

0xdcd4,	// (0x0005afb8) cell_clock2_toolbar_pane

0xdcdc,	// (0x0005afc0) cell_clock2_toolbar_pane_cp01

0xdcdc,	// (0x0005afc0) cell_clock2_toolbar_pane_cp02

0xdce4,	// (0x0005afc8) cell_clock2_toolbar_pane_cp03

0xdcec,	// (0x0005afd0) list_clock2_pane

0xb29a,	// (0x0005857e) scroll_pane_cp10

0xdcf4,	// (0x0005afd8) list_single_clock2_pane_ParamLimits

0xdcf4,	// (0x0005afd8) list_single_clock2_pane

0xaa77,	// (0x00057d5b) list_highlight_pane_cp08

0xdd01,	// (0x0005afe5) list_single_clock2_pane_t1

0xdd0f,	// (0x0005aff3) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0005ce32) list_single_clock2_pane_t

0x9876,	// (0x00056b5a) bg_button_pane_cp10

0xdd1d,	// (0x0005b001) cell_clock2_toolbar_pane_g1

0x372b,	// (0x00050a0f) aid_main_viewer_pane_g1_ParamLimits

0x372b,	// (0x00050a0f) aid_main_viewer_pane_g1

0x3739,	// (0x00050a1d) aid_main_viewer_pane_g2_ParamLimits

0x3739,	// (0x00050a1d) aid_main_viewer_pane_g2

0x3747,	// (0x00050a2b) aid_main_viewer_pane_g3_ParamLimits

0x3747,	// (0x00050a2b) aid_main_viewer_pane_g3

0x3756,	// (0x00050a3a) aid_main_viewer_pane_g4_ParamLimits

0x3756,	// (0x00050a3a) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0005c762) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0005c762) aid_main_viewer_pane_g

0x405e,	// (0x00051342) main_calc_pane_ParamLimits

0x4072,	// (0x00051356) main_dialer2_pane_ParamLimits

0x9876,	// (0x00056b5a) main_cam6_pane

0x9876,	// (0x00056b5a) main_vid6_pane

0x5810,	// (0x00052af4) listscroll_gen_pane_cp06_ParamLimits

0x5810,	// (0x00052af4) listscroll_gen_pane_cp06

0x592f,	// (0x00052c13) main_clock2_pane_t5_ParamLimits

0x592f,	// (0x00052c13) main_clock2_pane_t5

0x598d,	// (0x00052c71) aid_call2_pane_cp10_ParamLimits

0x599f,	// (0x00052c83) aid_call_pane_cp10_ParamLimits

0xb309,	// (0x000585ed) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb309,	// (0x000585ed) popup_clock_analogue_window_cp10_g2_ParamLimits

0x59b1,	// (0x00052c95) popup_clock_analogue_window_cp10_g3_ParamLimits

0x59b1,	// (0x00052c95) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb309,	// (0x000585ed) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0005cab0) popup_clock_analogue_window_cp10_g_ParamLimits

0x59c7,	// (0x00052cab) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6042,	// (0x00053326) cell_dialer2_keypad_pane_g2_ParamLimits

0x6042,	// (0x00053326) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0005cb9a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0005cb9a) cell_dialer2_keypad_pane_g

0x605e,	// (0x00053342) cell_dialer2_keypad_pane_t1

0x6c43,	// (0x00053f27) main_cset_text2_pane_ParamLimits

0x6c43,	// (0x00053f27) main_cset_text2_pane

0xdb33,	// (0x0005ae17) area_vitu2_query_pane_g1_ParamLimits

0x0745,	// (0x0004da29) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0005cd4f) area_vitu2_query_pane_g_ParamLimits

0x7454,	// (0x00054738) area_vitu2_query_pane_t7_ParamLimits

0x7454,	// (0x00054738) area_vitu2_query_pane_t7

0x7478,	// (0x0005475c) bg_button_pane_cp018_ParamLimits

0x7486,	// (0x0005476a) bg_button_pane_cp021_ParamLimits

0x077e,	// (0x0004da62) bg_button_pane_cp022_ParamLimits

0x077e,	// (0x0004da62) bg_vkb2_func_pane_cp08_ParamLimits

0x7478,	// (0x0005475c) bg_vkb2_func_pane_cp06_ParamLimits

0x7486,	// (0x0005476a) bg_vkb2_func_pane_cp07_ParamLimits

0x078f,	// (0x0004da73) input_focus_pane_cp09_ParamLimits

0xa43e,	// (0x00057722) cam6_autofocus_pane_ParamLimits

0xa43e,	// (0x00057722) cam6_autofocus_pane

0x79c2,	// (0x00054ca6) cam6_image_uncrop_pane_ParamLimits

0x79c2,	// (0x00054ca6) cam6_image_uncrop_pane

0x79d1,	// (0x00054cb5) cam6_indi_pane_ParamLimits

0x79d1,	// (0x00054cb5) cam6_indi_pane

0x79e7,	// (0x00054ccb) cam6_mode_pane_ParamLimits

0x79e7,	// (0x00054ccb) cam6_mode_pane

0x79f9,	// (0x00054cdd) cam6_timer_pane_ParamLimits

0x79f9,	// (0x00054cdd) cam6_timer_pane

0x7a09,	// (0x00054ced) cam6_zoom_pane_ParamLimits

0x7a09,	// (0x00054ced) cam6_zoom_pane

0x7a15,	// (0x00054cf9) cam6_mode_pane_g1_ParamLimits

0x7a15,	// (0x00054cf9) cam6_mode_pane_g1

0x7a25,	// (0x00054d09) cam6_mode_pane_g2_ParamLimits

0x7a25,	// (0x00054d09) cam6_mode_pane_g2

0x7a35,	// (0x00054d19) cam6_mode_pane_g3_ParamLimits

0x7a35,	// (0x00054d19) cam6_mode_pane_g3

0x7a45,	// (0x00054d29) cam6_mode_pane_g4_ParamLimits

0x7a45,	// (0x00054d29) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0005ce37) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0005ce37) cam6_mode_pane_g

0xdd25,	// (0x0005b009) bg_tb_trans_pane_cp08_ParamLimits

0xdd25,	// (0x0005b009) bg_tb_trans_pane_cp08

0xdd33,	// (0x0005b017) cam6_battery_pane_ParamLimits

0xdd33,	// (0x0005b017) cam6_battery_pane

0xdd49,	// (0x0005b02d) cam6_indi_pane_g1_ParamLimits

0xdd49,	// (0x0005b02d) cam6_indi_pane_g1

0xdd5b,	// (0x0005b03f) cam6_indi_pane_g2_ParamLimits

0xdd5b,	// (0x0005b03f) cam6_indi_pane_g2

0xdd6d,	// (0x0005b051) cam6_indi_pane_g3_ParamLimits

0xdd6d,	// (0x0005b051) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0005ce40) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0005ce40) cam6_indi_pane_g

0xdd7f,	// (0x0005b063) cam6_indi_pane_t1_ParamLimits

0xdd7f,	// (0x0005b063) cam6_indi_pane_t1

0x7a55,	// (0x00054d39) cam6_autofocus_pane_g1

0x7a5d,	// (0x00054d41) cam6_autofocus_pane_g2

0x7a65,	// (0x00054d49) cam6_autofocus_pane_g3

0x7a6d,	// (0x00054d51) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0005ce47) cam6_autofocus_pane_g

0xdda5,	// (0x0005b089) cam6_timer_pane_g1

0xddad,	// (0x0005b091) cam6_timer_pane_t1

0xddbb,	// (0x0005b09f) cam6_zoom_cont_pane

0xddc3,	// (0x0005b0a7) cam6_zoom_pane_g1

0xddcb,	// (0x0005b0af) cam6_zoom_pane_g2

0x7a75,	// (0x00054d59) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0005ce50) cam6_zoom_pane_g

0xcd13,	// (0x00059ff7) cam6_battery_pane_g1

0xcd13,	// (0x00059ff7) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0005c9b8) cam6_battery_pane_g

0xddd3,	// (0x0005b0b7) cam6_zoom_cont_pane_g1

0xdddc,	// (0x0005b0c0) cam6_zoom_cont_pane_g2

0xdde5,	// (0x0005b0c9) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0005ce57) cam6_zoom_cont_pane_g

0x7a92,	// (0x00054d76) cam6_mode_pane_cp_ParamLimits

0x7a92,	// (0x00054d76) cam6_mode_pane_cp

0x7a09,	// (0x00054ced) cam6_zoom_pane_cp_ParamLimits

0x7a09,	// (0x00054ced) cam6_zoom_pane_cp

0x7aa4,	// (0x00054d88) vid6_image_uncrop_cif_pane_ParamLimits

0x7aa4,	// (0x00054d88) vid6_image_uncrop_cif_pane

0x7ab4,	// (0x00054d98) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ab4,	// (0x00054d98) vid6_image_uncrop_nhd_pane

0x79c2,	// (0x00054ca6) vid6_image_uncrop_vga_pane_ParamLimits

0x79c2,	// (0x00054ca6) vid6_image_uncrop_vga_pane

0x7ac3,	// (0x00054da7) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ac3,	// (0x00054da7) vid6_image_uncrop_wvga_pane

0x7ad2,	// (0x00054db6) vid6_indi_pane_ParamLimits

0x7ad2,	// (0x00054db6) vid6_indi_pane

0xdd25,	// (0x0005b009) bg_tb_trans_pane_cp09_ParamLimits

0xdd25,	// (0x0005b009) bg_tb_trans_pane_cp09

0xddfd,	// (0x0005b0e1) cam6_battery_pane_cp_ParamLimits

0xddfd,	// (0x0005b0e1) cam6_battery_pane_cp

0xde09,	// (0x0005b0ed) vid6_indi_pane_g1_ParamLimits

0xde09,	// (0x0005b0ed) vid6_indi_pane_g1

0xde1b,	// (0x0005b0ff) vid6_indi_pane_g2_ParamLimits

0xde1b,	// (0x0005b0ff) vid6_indi_pane_g2

0xde2d,	// (0x0005b111) vid6_indi_pane_g3_ParamLimits

0xde2d,	// (0x0005b111) vid6_indi_pane_g3

0xde42,	// (0x0005b126) vid6_indi_pane_g4_ParamLimits

0xde42,	// (0x0005b126) vid6_indi_pane_g4

0xde57,	// (0x0005b13b) vid6_indi_pane_g5_ParamLimits

0xde57,	// (0x0005b13b) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0005ce5e) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0005ce5e) vid6_indi_pane_g

0xde71,	// (0x0005b155) vid6_indi_pane_t1_ParamLimits

0xde71,	// (0x0005b155) vid6_indi_pane_t1

0xde87,	// (0x0005b16b) vid6_indi_pane_t2_ParamLimits

0xde87,	// (0x0005b16b) vid6_indi_pane_t2

0xdeaf,	// (0x0005b193) vid6_indi_pane_t3_ParamLimits

0xdeaf,	// (0x0005b193) vid6_indi_pane_t3

0xded7,	// (0x0005b1bb) vid6_indi_pane_t4_ParamLimits

0xded7,	// (0x0005b1bb) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0005ce69) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0005ce69) vid6_indi_pane_t

0xdefb,	// (0x0005b1df) wait_bar_pane_cp08

0x7aea,	// (0x00054dce) main_cset_text2_pane_t1_ParamLimits

0x7aea,	// (0x00054dce) main_cset_text2_pane_t1

0x7a7d,	// (0x00054d61) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a7d,	// (0x00054d61) listscroll_gen_pane_cp06_t1

0x9876,	// (0x00056b5a) main_cam6_set_pane

0xcf58,	// (0x0005a23c) bg_tb_trans_pane_cp06_ParamLimits

0xa2a6,	// (0x0005758a) cam4_indicators_pane_g1_ParamLimits

0xa2b7,	// (0x0005759b) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0005cbd7) cam4_indicators_pane_g_ParamLimits

0xa2cf,	// (0x000575b3) cam4_indicators_pane_t1_ParamLimits

0xa551,	// (0x00057835) bg_tb_trans_pane_cp07_ParamLimits

0xa2f9,	// (0x000575dd) vid4_indicators_pane_g1_ParamLimits

0xa30d,	// (0x000575f1) vid4_indicators_pane_g2_ParamLimits

0xa321,	// (0x00057605) vid4_indicators_pane_g3_ParamLimits

0xa332,	// (0x00057616) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0005cbe9) vid4_indicators_pane_g_ParamLimits

0xa34e,	// (0x00057632) vid4_indicators_pane_t1_ParamLimits

0xa3db,	// (0x000576bf) vid4_progress_pane_g1_ParamLimits

0xa3eb,	// (0x000576cf) vid4_progress_pane_g2_ParamLimits

0x75c1,	// (0x000548a5) vid4_progress_pane_g3_ParamLimits

0xa3fb,	// (0x000576df) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0005cd9a) vid4_progress_pane_g_ParamLimits

0x75d3,	// (0x000548b7) vid4_progress_pane_t1_ParamLimits

0xa413,	// (0x000576f7) vid4_progress_pane_t2_ParamLimits

0xa428,	// (0x0005770c) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0005cda5) vid4_progress_pane_t_ParamLimits

0x75e9,	// (0x000548cd) wait_bar_pane_cp07_ParamLimits

0x7b08,	// (0x00054dec) main_cam6_set_pane_g2_ParamLimits

0x7b08,	// (0x00054dec) main_cam6_set_pane_g2

0x7b2c,	// (0x00054e10) main_cset6_listscroll_pane_ParamLimits

0x7b2c,	// (0x00054e10) main_cset6_listscroll_pane

0x7b48,	// (0x00054e2c) main_cset6_slider_pane_ParamLimits

0x7b48,	// (0x00054e2c) main_cset6_slider_pane

0x7b5e,	// (0x00054e42) main_cset6_text2_pane_ParamLimits

0x7b5e,	// (0x00054e42) main_cset6_text2_pane

0xdf0a,	// (0x0005b1ee) main_cset6_text_pane

0xdf12,	// (0x0005b1f6) main_cset_list_pane_copy1_ParamLimits

0xdf12,	// (0x0005b1f6) main_cset_list_pane_copy1

0xdf22,	// (0x0005b206) scroll_pane_cp028_copy1

0x7b6c,	// (0x00054e50) cset_list_set_pane_copy1

0x7b7e,	// (0x00054e62) aid_position_infowindow_above_copy1

0x7b86,	// (0x00054e6a) aid_position_infowindow_below_copy1

0x07c6,	// (0x0004daaa) cset_list_set_pane_g1_copy1

0x07ce,	// (0x0004dab2) cset_list_set_pane_g3_copy1_ParamLimits

0x07ce,	// (0x0004dab2) cset_list_set_pane_g3_copy1

0x07dd,	// (0x0004dac1) cset_list_set_pane_t1_copy1_ParamLimits

0x07dd,	// (0x0004dac1) cset_list_set_pane_t1_copy1

0xa551,	// (0x00057835) list_highlight_pane_cp021_copy1_ParamLimits

0xa551,	// (0x00057835) list_highlight_pane_cp021_copy1

0xdf2b,	// (0x0005b20f) cset6_slider_pane_ParamLimits

0xdf2b,	// (0x0005b20f) cset6_slider_pane

0xdf57,	// (0x0005b23b) main_cset6_slider_pane_g1_ParamLimits

0xdf57,	// (0x0005b23b) main_cset6_slider_pane_g1

0x7b8e,	// (0x00054e72) main_cset6_slider_pane_g2_ParamLimits

0x7b8e,	// (0x00054e72) main_cset6_slider_pane_g2

0xdf7f,	// (0x0005b263) main_cset6_slider_pane_g3_ParamLimits

0xdf7f,	// (0x0005b263) main_cset6_slider_pane_g3

0x7bb6,	// (0x00054e9a) main_cset6_slider_pane_g4_ParamLimits

0x7bb6,	// (0x00054e9a) main_cset6_slider_pane_g4

0xdf8b,	// (0x0005b26f) main_cset6_slider_pane_g5_ParamLimits

0xdf8b,	// (0x0005b26f) main_cset6_slider_pane_g5

0xd7d8,	// (0x0005aabc) main_cset6_slider_pane_g7_ParamLimits

0xd7d8,	// (0x0005aabc) main_cset6_slider_pane_g7

0xd7e4,	// (0x0005aac8) main_cset6_slider_pane_g8_ParamLimits

0xd7e4,	// (0x0005aac8) main_cset6_slider_pane_g8

0x6cf0,	// (0x00053fd4) main_cset6_slider_pane_g9_ParamLimits

0x6cf0,	// (0x00053fd4) main_cset6_slider_pane_g9

0x6cfc,	// (0x00053fe0) main_cset6_slider_pane_g10_ParamLimits

0x6cfc,	// (0x00053fe0) main_cset6_slider_pane_g10

0x6d08,	// (0x00053fec) main_cset6_slider_pane_g11_ParamLimits

0x6d08,	// (0x00053fec) main_cset6_slider_pane_g11

0x6d14,	// (0x00053ff8) main_cset6_slider_pane_g12_ParamLimits

0x6d14,	// (0x00053ff8) main_cset6_slider_pane_g12

0x6d20,	// (0x00054004) main_cset6_slider_pane_g13_ParamLimits

0x6d20,	// (0x00054004) main_cset6_slider_pane_g13

0x6d2c,	// (0x00054010) main_cset6_slider_pane_g14_ParamLimits

0x6d2c,	// (0x00054010) main_cset6_slider_pane_g14

0x7bc2,	// (0x00054ea6) main_cset6_slider_pane_g15_ParamLimits

0x7bc2,	// (0x00054ea6) main_cset6_slider_pane_g15

0xd878,	// (0x0005ab5c) main_cset6_slider_pane_g16_ParamLimits

0xd878,	// (0x0005ab5c) main_cset6_slider_pane_g16

0xd884,	// (0x0005ab68) main_cset6_slider_pane_g17_ParamLimits

0xd884,	// (0x0005ab68) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0005ce72) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0005ce72) main_cset6_slider_pane_g

0xdf97,	// (0x0005b27b) main_cset6_slider_pane_t1_ParamLimits

0xdf97,	// (0x0005b27b) main_cset6_slider_pane_t1

0x7bf2,	// (0x00054ed6) main_cset6_slider_pane_t2_ParamLimits

0x7bf2,	// (0x00054ed6) main_cset6_slider_pane_t2

0x7c1d,	// (0x00054f01) main_cset6_slider_pane_t3_ParamLimits

0x7c1d,	// (0x00054f01) main_cset6_slider_pane_t3

0x7c48,	// (0x00054f2c) main_cset6_slider_pane_t4_ParamLimits

0x7c48,	// (0x00054f2c) main_cset6_slider_pane_t4

0x7c73,	// (0x00054f57) main_cset6_slider_pane_t5_ParamLimits

0x7c73,	// (0x00054f57) main_cset6_slider_pane_t5

0xdfd8,	// (0x0005b2bc) main_cset6_slider_pane_t7_ParamLimits

0xdfd8,	// (0x0005b2bc) main_cset6_slider_pane_t7

0x7c9e,	// (0x00054f82) main_cset6_slider_pane_t8_ParamLimits

0x7c9e,	// (0x00054f82) main_cset6_slider_pane_t8

0x7cc2,	// (0x00054fa6) main_cset6_slider_pane_t9_ParamLimits

0x7cc2,	// (0x00054fa6) main_cset6_slider_pane_t9

0x7ce6,	// (0x00054fca) main_cset6_slider_pane_t10_ParamLimits

0x7ce6,	// (0x00054fca) main_cset6_slider_pane_t10

0x7d0a,	// (0x00054fee) main_cset6_slider_pane_t11_ParamLimits

0x7d0a,	// (0x00054fee) main_cset6_slider_pane_t11

0xe00e,	// (0x0005b2f2) main_cset6_slider_pane_t14_ParamLimits

0xe00e,	// (0x0005b2f2) main_cset6_slider_pane_t14

0xe047,	// (0x0005b32b) main_cset6_slider_pane_t15_ParamLimits

0xe047,	// (0x0005b32b) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0005ce97) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0005ce97) main_cset6_slider_pane_t

0xd4da,	// (0x0005a7be) cset_slider_pane_g1_copy1

0xd8c9,	// (0x0005abad) cset_slider_pane_g2_copy1

0xd8d2,	// (0x0005abb6) cset_slider_pane_g3_copy1

0x9876,	// (0x00056b5a) bg_popup_sub_pane_cp011_copy1

0xe080,	// (0x0005b364) main_cset_text_pane_g1_copy1

0xd95b,	// (0x0005ac3f) main_cset_text_pane_t1_copy1

0xd969,	// (0x0005ac4d) main_cset_text_pane_t2_copy1

0xd977,	// (0x0005ac5b) main_cset_text_pane_t3_copy1

0xd985,	// (0x0005ac69) main_cset_text_pane_t4_copy1

0xd993,	// (0x0005ac77) main_cset_text_pane_t5_copy1

0xe088,	// (0x0005b36c) main_cset_text_pane_t6_copy1

0xe096,	// (0x0005b37a) main_cset_text_pane_t7_copy1

0x7aea,	// (0x00054dce) main_cset_text2_pane_t1_copy1

0xa551,	// (0x00057835) main_ncimui_pane

0x42b6,	// (0x0005159a) popup_query_ncimui_window_ParamLimits

0x42b6,	// (0x0005159a) popup_query_ncimui_window

0x4fdb,	// (0x000522bf) field_cale_ev2_pane_g4_ParamLimits

0x4fdb,	// (0x000522bf) field_cale_ev2_pane_g4

0x5f21,	// (0x00053205) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f21,	// (0x00053205) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0005cb71) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0005cb71) cell_video_dialer_keypad_pane_g

0x5f39,	// (0x0005321d) cell_video_dialer_keypad_pane_t1

0x9876,	// (0x00056b5a) bg_popup_window_pane_cp012

0xb169,	// (0x0005844d) heading_pane_cp06

0xe0c2,	// (0x0005b3a6) ncim_query_content_pane

0x9876,	// (0x00056b5a) bg_popup_heading_pane_cp01

0xe0ca,	// (0x0005b3ae) ncim_heading_pane_t1

0xe0d8,	// (0x0005b3bc) ncim_indicator_popup_pane

0xe0ea,	// (0x0005b3ce) ncim_query_button_pane

0xe0fe,	// (0x0005b3e2) ncim_query_content_pane_t1

0xe110,	// (0x0005b3f4) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0005cedb) ncim_query_content_pane_t

0xe14a,	// (0x0005b42e) ncim_query_list_pane

0xe15c,	// (0x0005b440) ncim_query_popup_pane

0xe0d8,	// (0x0005b3bc) ncim_indicator_popup_pane_ParamLimits

0x7e57,	// (0x0005513b) ncim_query_content_pane_g1_ParamLimits

0x7e57,	// (0x0005513b) ncim_query_content_pane_g1

0xe0fe,	// (0x0005b3e2) ncim_query_content_pane_t1_ParamLimits

0xe110,	// (0x0005b3f4) ncim_query_content_pane_t2_ParamLimits

0x7e63,	// (0x00055147) ncim_query_content_pane_t3_ParamLimits

0x7e63,	// (0x00055147) ncim_query_content_pane_t3

0x7e8b,	// (0x0005516f) ncim_query_content_pane_t4_ParamLimits

0x7e8b,	// (0x0005516f) ncim_query_content_pane_t4

0x7eb3,	// (0x00055197) ncim_query_content_pane_t5_ParamLimits

0x7eb3,	// (0x00055197) ncim_query_content_pane_t5

0xe122,	// (0x0005b406) ncim_query_content_pane_t6_ParamLimits

0xe122,	// (0x0005b406) ncim_query_content_pane_t6

0xfbf7,	// (0x0005cedb) ncim_query_content_pane_t_ParamLimits

0xe14a,	// (0x0005b42e) ncim_query_list_pane_ParamLimits

0xe15c,	// (0x0005b440) ncim_query_popup_pane_ParamLimits

0xe170,	// (0x0005b454) wait_bar_pane_cp04

0x9876,	// (0x00056b5a) input_focus_pane_cp011

0xe178,	// (0x0005b45c) ncim_query_popup_pane_t1

0xe186,	// (0x0005b46a) ncim_list_query_list_pane_ParamLimits

0xe186,	// (0x0005b46a) ncim_list_query_list_pane

0x9876,	// (0x00056b5a) bg_button_pane_cp027

0xe193,	// (0x0005b477) ncim_query_button_pane_g1

0x9876,	// (0x00056b5a) list_highlight_pane_cp012

0xe19d,	// (0x0005b481) ncim_list_query_list_pane_g1

0xe1a5,	// (0x0005b489) ncim_list_query_list_pane_t1

0xa2c3,	// (0x000575a7) cam4_indicators_pane_g3_ParamLimits

0xa2c3,	// (0x000575a7) cam4_indicators_pane_g3

0xa33e,	// (0x00057622) vid4_indicators_pane_g5_ParamLimits

0xa33e,	// (0x00057622) vid4_indicators_pane_g5

0xa407,	// (0x000576eb) vid4_progress_pane_g5_ParamLimits

0xa407,	// (0x000576eb) vid4_progress_pane_g5

0x7d42,	// (0x00055026) main_ncimui_pane_g1

0x7dab,	// (0x0005508f) ncimui_group_query_pane_ParamLimits

0x7dab,	// (0x0005508f) ncimui_group_query_pane

0x7df3,	// (0x000550d7) ncimui_list_pane_ParamLimits

0x7df3,	// (0x000550d7) ncimui_list_pane

0x7e1a,	// (0x000550fe) ncimui_text_pane_ParamLimits

0x7e1a,	// (0x000550fe) ncimui_text_pane

0x7edb,	// (0x000551bf) ncimui_text_pane_t1_ParamLimits

0x7edb,	// (0x000551bf) ncimui_text_pane_t1

0xe1b3,	// (0x0005b497) ncimui_list_single_graphic_pane_ParamLimits

0xe1b3,	// (0x0005b497) ncimui_list_single_graphic_pane

0x7ef9,	// (0x000551dd) ncimui_query_pane_ParamLimits

0x7ef9,	// (0x000551dd) ncimui_query_pane

0x9876,	// (0x00056b5a) list_highlight_pane_cp013

0xe1c3,	// (0x0005b4a7) ncim_list_query_list_pane_t1_copy1

0xe1d1,	// (0x0005b4b5) ncim_list_single_graphic_pane_g1

0x7f0c,	// (0x000551f0) ncim_query_button_pane_cp01

0x7f18,	// (0x000551fc) ncim_query_entry_pane_ParamLimits

0x7f18,	// (0x000551fc) ncim_query_entry_pane

0x7f2b,	// (0x0005520f) ncimui_query_pane_g1

0x7f37,	// (0x0005521b) ncimui_query_pane_t1_ParamLimits

0x7f37,	// (0x0005521b) ncimui_query_pane_t1

0xa551,	// (0x00057835) input_focus_pane_cp012

0xe1d9,	// (0x0005b4bd) ncim_query_entry_pane_t1

0xa88b,	// (0x00057b6f) main_im_pane_ParamLimits

0xa551,	// (0x00057835) main_mobtv_pane_ParamLimits

0xa551,	// (0x00057835) main_mobtv_pane

0x7bda,	// (0x00054ebe) main_cset6_slider_pane_g18_ParamLimits

0x7bda,	// (0x00054ebe) main_cset6_slider_pane_g18

0x7be6,	// (0x00054eca) main_cset6_slider_pane_g19_ParamLimits

0x7be6,	// (0x00054eca) main_cset6_slider_pane_g19

0xb1f8,	// (0x000584dc) bg_main_mobtv_pane_ParamLimits

0xb1f8,	// (0x000584dc) bg_main_mobtv_pane

0x7f50,	// (0x00055234) main_mobtv_info_pane

0x7f59,	// (0x0005523d) main_mobtv_loading_pane_ParamLimits

0x7f59,	// (0x0005523d) main_mobtv_loading_pane

0xe1eb,	// (0x0005b4cf) main_mobtv_pg_channel_list_pane

0xe1f5,	// (0x0005b4d9) main_mobtv_pg_hdr_pane

0x7f66,	// (0x0005524a) main_mobtv_programe_curr_pane_ParamLimits

0x7f66,	// (0x0005524a) main_mobtv_programe_curr_pane

0x7f73,	// (0x00055257) main_mobtv_programe_next_pane_ParamLimits

0x7f73,	// (0x00055257) main_mobtv_programe_next_pane

0xe1fe,	// (0x0005b4e2) popup_mobtv_noti_window

0xcd13,	// (0x00059ff7) main_tv_pg_hdr_pane_g1

0xe206,	// (0x0005b4ea) main_tv_pg_hdr_pane_g2

0xe20e,	// (0x0005b4f2) main_tv_pg_hdr_pane_g3

0xe216,	// (0x0005b4fa) main_tv_pg_hdr_pane_g4

0xe21e,	// (0x0005b502) main_tv_pg_hdr_pane_g5

0xe228,	// (0x0005b50c) main_tv_pg_hdr_pane_g6

0xe232,	// (0x0005b516) main_tv_pg_hdr_pane_g7

0xe23c,	// (0x0005b520) main_tv_pg_hdr_pane_g8

0xe246,	// (0x0005b52a) main_tv_pg_hdr_pane_g9

0xe250,	// (0x0005b534) main_tv_pg_hdr_pane_g10

0xe25a,	// (0x0005b53e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0005cee8) main_tv_pg_hdr_pane_g

0xe264,	// (0x0005b548) main_tv_pg_hdr_pane_t1

0xe272,	// (0x0005b556) main_tv_pg_hdr_pane_t2

0xe280,	// (0x0005b564) main_tv_pg_hdr_pane_t3

0xe290,	// (0x0005b574) main_tv_pg_hdr_pane_t4

0xe2a0,	// (0x0005b584) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0005ceff) main_tv_pg_hdr_pane_t

0xe2b0,	// (0x0005b594) single_mobtv_pg_channel_pane_ParamLimits

0xe2b0,	// (0x0005b594) single_mobtv_pg_channel_pane

0xe2c2,	// (0x0005b5a6) single_mobtv_pg_channel_table_pane

0xadd3,	// (0x000580b7) single_mobtv_pg_channel_thumb_pane

0xe2cb,	// (0x0005b5af) single_tv_pg_channel_pane_g1

0xe2d4,	// (0x0005b5b8) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0005cf0a) single_tv_pg_channel_pane_g

0xcf58,	// (0x0005a23c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf58,	// (0x0005a23c) bg_single_mobtv_pg_channel_thumb_pane

0xe2dd,	// (0x0005b5c1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2dd,	// (0x0005b5c1) single_mobtv_pg_channel_thumb_pane_g1

0xe2eb,	// (0x0005b5cf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2eb,	// (0x0005b5cf) single_mobtv_pg_channel_thumb_pane_g2

0xe2f7,	// (0x0005b5db) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f7,	// (0x0005b5db) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0005cf0f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0005cf0f) single_mobtv_pg_channel_thumb_pane_g

0xe303,	// (0x0005b5e7) single_mobtv_pg_channel_thumb_pane_t1

0xe311,	// (0x0005b5f5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0005cf16) single_mobtv_pg_channel_thumb_pane_t

0xcd13,	// (0x00059ff7) bg_single_mobtv_pg_channel_table_pane_g1

0xcd13,	// (0x00059ff7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0005c9b8) bg_single_mobtv_pg_channel_table_pane_g

0xe31f,	// (0x0005b603) single_mobtv_pg_channel_table_pane_t1

0xe32d,	// (0x0005b611) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0005cf1b) single_mobtv_pg_channel_table_pane_t

0x7f88,	// (0x0005526c) main_mobtv_info_pane_g1_ParamLimits

0x7f88,	// (0x0005526c) main_mobtv_info_pane_g1

0x7fa6,	// (0x0005528a) main_mobtv_info_pane_t1_ParamLimits

0x7fa6,	// (0x0005528a) main_mobtv_info_pane_t1

0x801e,	// (0x00055302) main_mobtv_info_pane_t2_ParamLimits

0x801e,	// (0x00055302) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0005cf25) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0005cf25) main_mobtv_info_pane_t

0x80ad,	// (0x00055391) wait_bar_pane_cp05

0x80bf,	// (0x000553a3) main_mobtv_loading_pane_g1_ParamLimits

0x80bf,	// (0x000553a3) main_mobtv_loading_pane_g1

0x80d2,	// (0x000553b6) main_mobtv_loading_pane_g2_ParamLimits

0x80d2,	// (0x000553b6) main_mobtv_loading_pane_g2

0x80de,	// (0x000553c2) main_mobtv_loading_pane_g3_ParamLimits

0x80de,	// (0x000553c2) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0005cf2c) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0005cf2c) main_mobtv_loading_pane_g

0xe33b,	// (0x0005b61f) main_mobtv_loading_pane_t1_ParamLimits

0xe33b,	// (0x0005b61f) main_mobtv_loading_pane_t1

0xe353,	// (0x0005b637) main_mobtv_loading_pane_t2_ParamLimits

0xe353,	// (0x0005b637) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0005cf33) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0005cf33) main_mobtv_loading_pane_t

0x80f1,	// (0x000553d5) wait_bar_pane_cp06_ParamLimits

0x80f1,	// (0x000553d5) wait_bar_pane_cp06

0xe377,	// (0x0005b65b) main_mobtv_programe_curr_pane_t1

0xe385,	// (0x0005b669) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0005cf38) main_mobtv_programe_curr_pane_t

0xe393,	// (0x0005b677) main_mobtv_programe_next_pane_t1

0xe3a1,	// (0x0005b685) main_mobtv_programe_next_pane_t2

0xe3af,	// (0x0005b693) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0005cf3d) main_mobtv_programe_next_pane_t

0x9876,	// (0x00056b5a) bg_popup_mobtv_noti_window_pane

0xe3bd,	// (0x0005b6a1) popup_mobtv_noti_window_g1

0xe3c5,	// (0x0005b6a9) popup_mobtv_noti_window_t1

0xe3d3,	// (0x0005b6b7) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0005cf44) popup_mobtv_noti_window_t

0xcd13,	// (0x00059ff7) bg_popup_mobtv_noti_window_pane_g1

0x9876,	// (0x00056b5a) sc_clock_pane

0x9876,	// (0x00056b5a) main_fs_bigclock_pane

0x7837,	// (0x00054b1b) blid2_tripm_pane_t4_ParamLimits

0x7837,	// (0x00054b1b) blid2_tripm_pane_t4

0x8100,	// (0x000553e4) sc_clock_pane_g1_ParamLimits

0x8100,	// (0x000553e4) sc_clock_pane_g1

0x8112,	// (0x000553f6) sc_clock_pane_t1_ParamLimits

0x8112,	// (0x000553f6) sc_clock_pane_t1

0x8134,	// (0x00055418) sc_clock_pane_t2_ParamLimits

0x8134,	// (0x00055418) sc_clock_pane_t2

0x814c,	// (0x00055430) sc_clock_pane_t3_ParamLimits

0x814c,	// (0x00055430) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0005cf49) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0005cf49) sc_clock_pane_t

0x8dbe,	// (0x000560a2) main_fs_bigclock_indicator_pane_ParamLimits

0x8dbe,	// (0x000560a2) main_fs_bigclock_indicator_pane

0x81f2,	// (0x000554d6) main_fs_bigclock_pane_g1_ParamLimits

0x81f2,	// (0x000554d6) main_fs_bigclock_pane_g1

0x8dca,	// (0x000560ae) main_fs_bigclock_pane_t1_ParamLimits

0x8dca,	// (0x000560ae) main_fs_bigclock_pane_t1

0x8ddc,	// (0x000560c0) main_fs_bigclock_pane_t2_ParamLimits

0x8ddc,	// (0x000560c0) main_fs_bigclock_pane_t2

0x8df0,	// (0x000560d4) main_fs_bigclock_pane_t3_ParamLimits

0x8df0,	// (0x000560d4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0005d157) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0005d157) main_fs_bigclock_pane_t

0xec60,	// (0x0005bf44) main_fs_bigclock_indicator_pane_g1

0xe0f2,	// (0x0005b3d6) ncim_query_content_pane_g2_ParamLimits

0xe0f2,	// (0x0005b3d6) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0005ced6) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0005ced6) ncim_query_content_pane_g

0x8165,	// (0x00055449) sc_clock_pane_t4_ParamLimits

0x8165,	// (0x00055449) sc_clock_pane_t4

0xa551,	// (0x00057835) main_radioblah_pane

0xa238,	// (0x0005751c) cell_call4_button_pane_t1_copy1_ParamLimits

0xa238,	// (0x0005751c) cell_call4_button_pane_t1_copy1

0x7d5a,	// (0x0005503e) main_ncimui_pane_t1_ParamLimits

0x7d5a,	// (0x0005503e) main_ncimui_pane_t1

0x7d74,	// (0x00055058) main_ncimui_pane_t2_ParamLimits

0x7d74,	// (0x00055058) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0005cecf) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0005cecf) main_ncimui_pane_t

0xe542,	// (0x0005b826) main_radioblah_anim_pane_ParamLimits

0xe542,	// (0x0005b826) main_radioblah_anim_pane

0xe553,	// (0x0005b837) main_radioblah_info_pane_ParamLimits

0xe553,	// (0x0005b837) main_radioblah_info_pane

0xe567,	// (0x0005b84b) main_radioblah_pane_t1_ParamLimits

0xe567,	// (0x0005b84b) main_radioblah_pane_t1

0xe583,	// (0x0005b867) main_radioblah_pane_t2_ParamLimits

0xe583,	// (0x0005b867) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0005cf6a) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0005cf6a) main_radioblah_pane_t

0x8251,	// (0x00055535) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8251,	// (0x00055535) main_radioblah_rocker_ctrl_pane

0xe5cb,	// (0x0005b8af) main_radioblah_info_pane_t1_ParamLimits

0xe5cb,	// (0x0005b8af) main_radioblah_info_pane_t1

0x82a9,	// (0x0005558d) main_radioblah_info_pane_t2_ParamLimits

0x82a9,	// (0x0005558d) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0005cf73) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0005cf73) main_radioblah_info_pane_t

0xcd13,	// (0x00059ff7) main_radioblah_rocker_ctrl_pane_g1

0x8359,	// (0x0005563d) main_radioblah_rocker_ctrl_pane_g2

0x8361,	// (0x00055645) main_radioblah_rocker_ctrl_pane_g3

0x8369,	// (0x0005564d) main_radioblah_rocker_ctrl_pane_g4

0x8371,	// (0x00055655) main_radioblah_rocker_ctrl_pane_g5

0x8379,	// (0x0005565d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0005cf7c) main_radioblah_rocker_ctrl_pane_g

0x7aea,	// (0x00054dce) main_cset_text2_pane_t1_copy1_ParamLimits

0xa296,	// (0x0005757a) cam4_image_uncrop_qvga_pane

0xa2e9,	// (0x000575cd) vid4_image_uncrop_qcif_pane

0xa43e,	// (0x00057722) cam6_image_uncrop_qvga_pane_ParamLimits

0xa43e,	// (0x00057722) cam6_image_uncrop_qvga_pane

0xdded,	// (0x0005b0d1) vid6_image_uncrop_qcif_pane_ParamLimits

0xdded,	// (0x0005b0d1) vid6_image_uncrop_qcif_pane

0x9876,	// (0x00056b5a) bg_popup_preview_window_pane_cp03

0xe0a4,	// (0x0005b388) list_cset_text2_pane

0xe0ac,	// (0x0005b390) main_cset6_text2_pane_g1

0xe0b4,	// (0x0005b398) main_cset6_text2_pane_t1

0xe605,	// (0x0005b8e9) list_cset_text2_pane_t1_ParamLimits

0xe605,	// (0x0005b8e9) list_cset_text2_pane_t1

0xa551,	// (0x00057835) main_radioblah_pane_ParamLimits

0x8099,	// (0x0005537d) main_mobtv_info_pane_t3_ParamLimits

0x8099,	// (0x0005537d) main_mobtv_info_pane_t3

0x823f,	// (0x00055523) main_radioblah_pane_g1

0x8279,	// (0x0005555d) main_radioblah_info_pane_g1

0x82fe,	// (0x000555e2) main_radioblah_info_pane_t3_ParamLimits

0x82fe,	// (0x000555e2) main_radioblah_info_pane_t3

0x2dfa,	// (0x000500de) highlight_cell_cale_month_pane_ParamLimits

0x2dfa,	// (0x000500de) highlight_cell_cale_month_pane

0x9876,	// (0x00056b5a) main_phob_fisheye_pane

0xd034,	// (0x0005a318) scroll_pane_cp0031_ParamLimits

0xd034,	// (0x0005a318) scroll_pane_cp0031

0xdefb,	// (0x0005b1df) wait_bar_pane_cp08_ParamLimits

0x7b6c,	// (0x00054e50) cset_list_set_pane_copy1_ParamLimits

0xe620,	// (0x0005b904) highlight_cell_cale_month_pane_g1

0x8381,	// (0x00055665) highlight_cell_cale_month_pane_t1

0xdb87,	// (0x0005ae6b) list_gen_pane_cp01

0xd7c3,	// (0x0005aaa7) scroll_pane_01

0x838f,	// (0x00055673) list_single_double_fisheye_pane

0x08c8,	// (0x0004dbac) list_double_fisheye_pane_g1_ParamLimits

0x08c8,	// (0x0004dbac) list_double_fisheye_pane_g1

0x08d4,	// (0x0004dbb8) list_double_fisheye_pane_g2_ParamLimits

0x08d4,	// (0x0004dbb8) list_double_fisheye_pane_g2

0x8398,	// (0x0005567c) list_double_fisheye_pane_g3_ParamLimits

0x8398,	// (0x0005567c) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0005cf89) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0005cf89) list_double_fisheye_pane_g

0x0905,	// (0x0004dbe9) list_double_fisheye_pane_t1_ParamLimits

0x0905,	// (0x0004dbe9) list_double_fisheye_pane_t1

0x0920,	// (0x0004dc04) list_double_fisheye_pane_t2_ParamLimits

0x0920,	// (0x0004dc04) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0005cf94) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0005cf94) list_double_fisheye_pane_t

0x9876,	// (0x00056b5a) main_call5_pane

0x8190,	// (0x00055474) sc_swipe_pane_ParamLimits

0x8190,	// (0x00055474) sc_swipe_pane

0x83b7,	// (0x0005569b) call5_image_pane_ParamLimits

0x83b7,	// (0x0005569b) call5_image_pane

0x83d4,	// (0x000556b8) call5_swipe_1_pane_ParamLimits

0x83d4,	// (0x000556b8) call5_swipe_1_pane

0x83e7,	// (0x000556cb) call5_swipe_2_pane_ParamLimits

0x83e7,	// (0x000556cb) call5_swipe_2_pane

0x8412,	// (0x000556f6) popup_call5_audio_first_window_ParamLimits

0x8412,	// (0x000556f6) popup_call5_audio_first_window

0xcf58,	// (0x0005a23c) call5_swipe_1_pane_g1_ParamLimits

0xcf58,	// (0x0005a23c) call5_swipe_1_pane_g1

0xe628,	// (0x0005b90c) call5_swipe_1_pane_g2_ParamLimits

0xe628,	// (0x0005b90c) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0005cf99) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0005cf99) call5_swipe_1_pane_g

0xe634,	// (0x0005b918) call5_swipe_1_pane_t1_ParamLimits

0xe634,	// (0x0005b918) call5_swipe_1_pane_t1

0xcf58,	// (0x0005a23c) call5_swipe_2_pane_g1_ParamLimits

0xcf58,	// (0x0005a23c) call5_swipe_2_pane_g1

0xe649,	// (0x0005b92d) call5_swipe_2_pane_g2_ParamLimits

0xe649,	// (0x0005b92d) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0005cf9e) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0005cf9e) call5_swipe_2_pane_g

0xe655,	// (0x0005b939) call5_swipe_2_pane_t1_ParamLimits

0xe655,	// (0x0005b939) call5_swipe_2_pane_t1

0xe66a,	// (0x0005b94e) sc_swipe_pane_g1_ParamLimits

0xe66a,	// (0x0005b94e) sc_swipe_pane_g1

0xe677,	// (0x0005b95b) sc_swipe_pane_g2_ParamLimits

0xe677,	// (0x0005b95b) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0005cfa3) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0005cfa3) sc_swipe_pane_g

0xe683,	// (0x0005b967) sc_swipe_pane_t1_ParamLimits

0xe683,	// (0x0005b967) sc_swipe_pane_t1

0x9876,	// (0x00056b5a) main_cmail_launcher_pane

0x8423,	// (0x00055707) aid_size_cell_cmail_l_ParamLimits

0x8423,	// (0x00055707) aid_size_cell_cmail_l

0x8431,	// (0x00055715) grid_cmail_l_pane_ParamLimits

0x8431,	// (0x00055715) grid_cmail_l_pane

0x844b,	// (0x0005572f) cell_cmail_l_pane_ParamLimits

0x844b,	// (0x0005572f) cell_cmail_l_pane

0xe698,	// (0x0005b97c) cell_cmail_l_pane_g1_ParamLimits

0xe698,	// (0x0005b97c) cell_cmail_l_pane_g1

0xe6a4,	// (0x0005b988) cell_cmail_l_pane_t1_ParamLimits

0xe6a4,	// (0x0005b988) cell_cmail_l_pane_t1

0xe6ba,	// (0x0005b99e) cell_cmail_l_pane_t2_ParamLimits

0xe6ba,	// (0x0005b99e) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0005cfa8) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0005cfa8) cell_cmail_l_pane_t

0xa551,	// (0x00057835) grid_highlight_pane_cp018_ParamLimits

0xa551,	// (0x00057835) grid_highlight_pane_cp018

0x11c5,	// (0x0004e4a9) main2_pane_ParamLimits

0x11c5,	// (0x0004e4a9) main2_pane

0xa92d,	// (0x00057c11) popup_sp_fs_action_menu_bg_pane_g1

0xa935,	// (0x00057c19) popup_sp_fs_action_menu_bg_pane_g2

0xa93d,	// (0x00057c21) popup_sp_fs_action_menu_bg_pane_g3

0xa945,	// (0x00057c29) popup_sp_fs_action_menu_bg_pane_g4

0xa94d,	// (0x00057c31) popup_sp_fs_action_menu_bg_pane_g5

0xa955,	// (0x00057c39) popup_sp_fs_action_menu_bg_pane_g6

0xa95d,	// (0x00057c41) popup_sp_fs_action_menu_bg_pane_g7

0xa965,	// (0x00057c49) popup_sp_fs_action_menu_bg_pane_g8

0xa96d,	// (0x00057c51) popup_sp_fs_action_menu_bg_pane_g9

0xa975,	// (0x00057c59) popup_sp_fs_action_menu_bg_pane_g10

0xa975,	// (0x00057c59) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0005c453) popup_sp_fs_action_menu_bg_pane_g

0x021c,	// (0x0004d500) list_medium_line_x2_t3_g3_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t3_g3_g1

0x0228,	// (0x0004d50c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x2_t3_g3_g2

0x0234,	// (0x0004d518) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0005c501) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0005c501) list_medium_line_x2_t3_g3_g

0x0240,	// (0x0004d524) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0240,	// (0x0004d524) list_medium_line_x2_t3_g3_t1

0x0255,	// (0x0004d539) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0255,	// (0x0004d539) list_medium_line_x2_t3_g3_t2

0x0269,	// (0x0004d54d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0005c508) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0005c508) list_medium_line_x2_t3_g3_t

0x021c,	// (0x0004d500) list_medium_line_x2_t3_g2_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t3_g2_g1

0x0234,	// (0x0004d518) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0005c50f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0005c50f) list_medium_line_x2_t3_g2_g

0x027e,	// (0x0004d562) list_medium_line_x2_t3_g2_t1_ParamLimits

0x027e,	// (0x0004d562) list_medium_line_x2_t3_g2_t1

0x0293,	// (0x0004d577) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0293,	// (0x0004d577) list_medium_line_x2_t3_g2_t2

0x02a5,	// (0x0004d589) list_medium_line_x2_t3_g2_t3_ParamLimits

0x02a5,	// (0x0004d589) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0005c514) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0005c514) list_medium_line_x2_t3_g2_t

0x021c,	// (0x0004d500) list_medium_line_x2_t4_g4_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t4_g4_g1

0x02c3,	// (0x0004d5a7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x02c3,	// (0x0004d5a7) list_medium_line_x2_t4_g4_g2

0x0228,	// (0x0004d50c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x2_t4_g4_g3

0x02cf,	// (0x0004d5b3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02cf,	// (0x0004d5b3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0005c51b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0005c51b) list_medium_line_x2_t4_g4_g

0x02db,	// (0x0004d5bf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02db,	// (0x0004d5bf) list_medium_line_x2_t4_g4_t1

0x02f5,	// (0x0004d5d9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02f5,	// (0x0004d5d9) list_medium_line_x2_t4_g4_t2

0x030b,	// (0x0004d5ef) list_medium_line_x2_t4_g4_t3_ParamLimits

0x030b,	// (0x0004d5ef) list_medium_line_x2_t4_g4_t3

0x0320,	// (0x0004d604) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0320,	// (0x0004d604) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0005c524) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0005c524) list_medium_line_x2_t4_g4_t

0x021c,	// (0x0004d500) list_medium_line_x2_t2_g4_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t2_g4_g1

0x02c3,	// (0x0004d5a7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x02c3,	// (0x0004d5a7) list_medium_line_x2_t2_g4_g2

0x0228,	// (0x0004d50c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x2_t2_g4_g3

0x0234,	// (0x0004d518) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0005c58b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0005c58b) list_medium_line_x2_t2_g4_g

0x0332,	// (0x0004d616) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0332,	// (0x0004d616) list_medium_line_x2_t2_g4_t1

0x0269,	// (0x0004d54d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0005c594) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0005c594) list_medium_line_x2_t2_g4_t

0x021c,	// (0x0004d500) list_medium_line_x2_t2_g3_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t2_g3_g1

0x0228,	// (0x0004d50c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x2_t2_g3_g2

0x0234,	// (0x0004d518) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0005c501) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0005c501) list_medium_line_x2_t2_g3_g

0x0347,	// (0x0004d62b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0347,	// (0x0004d62b) list_medium_line_x2_t2_g3_t1

0x0269,	// (0x0004d54d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0005c599) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0005c599) list_medium_line_x2_t2_g3_t

0x2f5f,	// (0x00050243) main_sp_fs_list_pane_ParamLimits

0x2f5f,	// (0x00050243) main_sp_fs_list_pane

0xd86c,	// (0x0005ab50) sp_fs_scroll_pane_ParamLimits

0xd86c,	// (0x0005ab50) sp_fs_scroll_pane

0x035c,	// (0x0004d640) list_medium_line_x2_t3_t1

0x036c,	// (0x0004d650) list_medium_line_x2_t3_t2

0x037a,	// (0x0004d65e) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0005c5e4) list_medium_line_x2_t3_t

0x0388,	// (0x0004d66c) list_medium_line_x3_t4_t1

0x0398,	// (0x0004d67c) list_medium_line_x3_t4_t2

0x03a6,	// (0x0004d68a) list_medium_line_x3_t4_t3

0x037a,	// (0x0004d65e) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0005c5eb) list_medium_line_x3_t4_t

0x03b4,	// (0x0004d698) list_medium_line_x4_t5_t1

0x03c4,	// (0x0004d6a8) list_medium_line_x4_t5_t2

0x03a6,	// (0x0004d68a) list_medium_line_x4_t5_t3

0x03d2,	// (0x0004d6b6) list_medium_line_x4_t5_t4

0x037a,	// (0x0004d65e) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0005c5f4) list_medium_line_x4_t5_t

0x021c,	// (0x0004d500) list_medium_line_t4_g4_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_t4_g4_g1

0x02cf,	// (0x0004d5b3) list_medium_line_t4_g4_g2_ParamLimits

0x02cf,	// (0x0004d5b3) list_medium_line_t4_g4_g2

0x03e0,	// (0x0004d6c4) list_medium_line_t4_g4_g3_ParamLimits

0x03e0,	// (0x0004d6c4) list_medium_line_t4_g4_g3

0x0234,	// (0x0004d518) list_medium_line_t4_g4_g4_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0005c5ff) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0005c5ff) list_medium_line_t4_g4_g

0x03ec,	// (0x0004d6d0) list_medium_line_t4_g4_t1_ParamLimits

0x03ec,	// (0x0004d6d0) list_medium_line_t4_g4_t1

0x0401,	// (0x0004d6e5) list_medium_line_t4_g4_t2_ParamLimits

0x0401,	// (0x0004d6e5) list_medium_line_t4_g4_t2

0x0417,	// (0x0004d6fb) list_medium_line_t4_g4_t3_ParamLimits

0x0417,	// (0x0004d6fb) list_medium_line_t4_g4_t3

0x0269,	// (0x0004d54d) list_medium_line_t4_g4_t4_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0005c608) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0005c608) list_medium_line_t4_g4_t

0x302e,	// (0x00050312) chi_dic_find_pane_g1

0x4086,	// (0x0005136a) main_tport_pane

0x05ce,	// (0x0004d8b2) list_medium_line_plain_t1

0x05dc,	// (0x0004d8c0) list_medium_line_t2_g2_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_t2_g2_g1

0x05e8,	// (0x0004d8cc) list_medium_line_t2_g2_g2_ParamLimits

0x05e8,	// (0x0004d8cc) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0005cce0) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0005cce0) list_medium_line_t2_g2_g

0x05f4,	// (0x0004d8d8) list_medium_line_t2_g2_t1_ParamLimits

0x05f4,	// (0x0004d8d8) list_medium_line_t2_g2_t1

0x060e,	// (0x0004d8f2) list_medium_line_t2_g2_t2_ParamLimits

0x060e,	// (0x0004d8f2) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0005cce5) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0005cce5) list_medium_line_t2_g2_t

0x75fa,	// (0x000548de) aid_sp_fs_list_icon_a_sm

0x7602,	// (0x000548e6) aid_sp_fs_list_icon_d

0x760a,	// (0x000548ee) aid_sp_fs_text_primary

0xe539,	// (0x0005b81d) aid_sp_fs_text_secondary

0x7613,	// (0x000548f7) list_medium_line

0x7613,	// (0x000548f7) list_medium_line_g2

0x7613,	// (0x000548f7) list_medium_line_g3

0x7613,	// (0x000548f7) list_medium_line_plain

0x7613,	// (0x000548f7) list_medium_line_plain_t2

0x7613,	// (0x000548f7) list_medium_line_plain_t3

0x7613,	// (0x000548f7) list_medium_line_right_icon

0x7613,	// (0x000548f7) list_medium_line_right_iconx2

0x7613,	// (0x000548f7) list_medium_line_t2

0x7613,	// (0x000548f7) list_medium_line_t2_g2

0x7613,	// (0x000548f7) list_medium_line_t2_g3

0x7613,	// (0x000548f7) list_medium_line_t2_right_icon

0x7613,	// (0x000548f7) list_medium_line_t2_right_iconx2

0x7613,	// (0x000548f7) list_medium_line_t3

0x7613,	// (0x000548f7) list_medium_line_t3_g2

0x7613,	// (0x000548f7) list_medium_line_t3_g3

0x7613,	// (0x000548f7) list_medium_line_t3_right_iconx2

0x07a0,	// (0x0004da84) list_medium_line_t4_g4

0x7613,	// (0x000548f7) list_medium_line_x2

0x7613,	// (0x000548f7) list_medium_line_x2_t2_g2

0x7613,	// (0x000548f7) list_medium_line_x2_t2_g3

0x7613,	// (0x000548f7) list_medium_line_x2_t2_g4

0x7613,	// (0x000548f7) list_medium_line_x2_t3

0x7613,	// (0x000548f7) list_medium_line_x2_t3_g2

0x7613,	// (0x000548f7) list_medium_line_x2_t3_g3

0x7613,	// (0x000548f7) list_medium_line_x2_t3_g4

0x7613,	// (0x000548f7) list_medium_line_x2_t4_g2

0x7613,	// (0x000548f7) list_medium_line_x2_t4_g4

0x07a9,	// (0x0004da8d) list_medium_line_x3

0x07a9,	// (0x0004da8d) list_medium_line_x3_t4

0x07a9,	// (0x0004da8d) list_medium_line_x3_t4_g4

0x07a0,	// (0x0004da84) list_medium_line_x4_t4

0x07a0,	// (0x0004da84) list_medium_line_x4_t4_g7

0x07a0,	// (0x0004da84) list_medium_line_x4_t5

0x07b2,	// (0x0004da96) list_single_fs_dyc_pane_ParamLimits

0x07b2,	// (0x0004da96) list_single_fs_dyc_pane

0x021c,	// (0x0004d500) list_medium_line_x4_t4_g7_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x4_t4_g7_g1

0x07f2,	// (0x0004dad6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x07f2,	// (0x0004dad6) list_medium_line_x4_t4_g7_g2

0x07fe,	// (0x0004dae2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07fe,	// (0x0004dae2) list_medium_line_x4_t4_g7_g3

0x080d,	// (0x0004daf1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x080d,	// (0x0004daf1) list_medium_line_x4_t4_g7_g4

0x0819,	// (0x0004dafd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0819,	// (0x0004dafd) list_medium_line_x4_t4_g7_g5

0x0828,	// (0x0004db0c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0828,	// (0x0004db0c) list_medium_line_x4_t4_g7_g6

0x0837,	// (0x0004db1b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0837,	// (0x0004db1b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0005ceb0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0005ceb0) list_medium_line_x4_t4_g7_g

0x0843,	// (0x0004db27) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0843,	// (0x0004db27) list_medium_line_x4_t4_g7_t1

0x0858,	// (0x0004db3c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0858,	// (0x0004db3c) list_medium_line_x4_t4_g7_t2

0x086d,	// (0x0004db51) list_medium_line_x4_t4_g7_t3_ParamLimits

0x086d,	// (0x0004db51) list_medium_line_x4_t4_g7_t3

0x0882,	// (0x0004db66) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0882,	// (0x0004db66) list_medium_line_x4_t4_g7_t4

0x0894,	// (0x0004db78) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0894,	// (0x0004db78) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0005cebf) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0005cebf) list_medium_line_x4_t4_g7_t

0x08a6,	// (0x0004db8a) list_single_dyc_row_pane_ParamLimits

0x08a6,	// (0x0004db8a) list_single_dyc_row_pane

0x83a4,	// (0x00055688) call5_gesture_pane_ParamLimits

0x83a4,	// (0x00055688) call5_gesture_pane

0x83fa,	// (0x000556de) call5_windows_pane_ParamLimits

0x83fa,	// (0x000556de) call5_windows_pane

0x8465,	// (0x00055749) call5_swipe_1_pane_cp_ParamLimits

0x8465,	// (0x00055749) call5_swipe_1_pane_cp

0x8471,	// (0x00055755) call5_swipe_2_pane_cp_ParamLimits

0x8471,	// (0x00055755) call5_swipe_2_pane_cp

0xaa77,	// (0x00057d5b) call5_image_pane_cp

0x847d,	// (0x00055761) popup_call5_audio_first_window_cp_ParamLimits

0x847d,	// (0x00055761) popup_call5_audio_first_window_cp

0xe66a,	// (0x0005b94e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66a,	// (0x0005b94e) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x0005b9bb) call5_swipe_1_pane_g2_cp

0xe683,	// (0x0005b967) call5_swipe_1_pane_t1_cp_ParamLimits

0xe683,	// (0x0005b967) call5_swipe_1_pane_t1_cp

0xe66a,	// (0x0005b94e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66a,	// (0x0005b94e) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0005b9c3) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x0005b9cb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x0005b9cb) call5_swipe_2_pane_t1_cp

0xa551,	// (0x00057835) main_sp_fs_email_pane

0xe6fc,	// (0x0005b9e0) main_sp_fs_listscroll_pane_te

0x848b,	// (0x0005576f) popup_sp_fs_action_menu_pane_ParamLimits

0x848b,	// (0x0005576f) popup_sp_fs_action_menu_pane

0xcd13,	// (0x00059ff7) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x0005b9e9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x0005b9f2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x0005b9fb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd13,	// (0x00059ff7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0005cfad) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf8,	// (0x00059ddc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf8,	// (0x00059ddc) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x0005ba04) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x0005ba04) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x0005ba10) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x0005ba10) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0005cfb6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0005cfb6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x0005ba1c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x0005ba1c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0942,	// (0x0004dc26) list_medium_line_t2_right_icon_g1

0x094a,	// (0x0004dc2e) list_medium_line_t2_right_icon_t1

0x095a,	// (0x0004dc3e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0005cfbb) list_medium_line_t2_right_icon_t

0xc90b,	// (0x00059bef) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc90b,	// (0x00059bef) bg_sp_fs_ctrlbar_pane

0x8515,	// (0x000557f9) main_sp_fs_ctrlbar_button_pane_cp01

0x851f,	// (0x00055803) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x0005ba6e) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x0005ba7a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0005cfc0) main_sp_fs_ctrlbar_pane_g

0x855d,	// (0x00055841) main_sp_fs_ctrlbar_pane_t1

0x859c,	// (0x00055880) main_sp_fs_ctrlbar_pane

0x85c0,	// (0x000558a4) main_sp_fs_listscroll_pane_te_cp01

0x096c,	// (0x0004dc50) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x096c,	// (0x0004dc50) popup_sp_fs_action_menu_pane_cp01

0xa551,	// (0x00057835) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa551,	// (0x00057835) bg_sp_fs_highlight_list_pane_cp01

0x85e0,	// (0x000558c4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x85e0,	// (0x000558c4) sp_fs_action_menu_list_gene_pane_g1

0xe7bd,	// (0x0005baa1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7bd,	// (0x0005baa1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005cfce) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005cfce) sp_fs_action_menu_list_gene_pane_g

0x85ef,	// (0x000558d3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x85ef,	// (0x000558d3) sp_fs_action_menu_list_gene_pane_t1

0x8607,	// (0x000558eb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8607,	// (0x000558eb) sp_fs_action_menu_list_gene_pane

0xe7ca,	// (0x0005baae) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7ca,	// (0x0005baae) popup_sp_fs_action_menu_bg_pane

0x8626,	// (0x0005590a) sp_fs_action_menu_list_pane_ParamLimits

0x8626,	// (0x0005590a) sp_fs_action_menu_list_pane

0x8646,	// (0x0005592a) sp_fs_scroll_pane_cp01_ParamLimits

0x8646,	// (0x0005592a) sp_fs_scroll_pane_cp01

0x099c,	// (0x0004dc80) list_medium_line_plain_t2_t1

0x09ac,	// (0x0004dc90) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005cfd3) list_medium_line_plain_t2_t

0x09bc,	// (0x0004dca0) list_medium_line_plain_t3_t1

0x09cc,	// (0x0004dcb0) list_medium_line_plain_t3_t2

0x09da,	// (0x0004dcbe) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005cfd8) list_medium_line_plain_t3_t

0x021c,	// (0x0004d500) list_medium_line_x2_t2_g2_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t2_g2_g1

0x0234,	// (0x0004d518) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0005c50f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0005c50f) list_medium_line_x2_t2_g2_g

0x03ec,	// (0x0004d6d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03ec,	// (0x0004d6d0) list_medium_line_x2_t2_g2_t1

0x0269,	// (0x0004d54d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005cfdf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005cfdf) list_medium_line_x2_t2_g2_t

0x021c,	// (0x0004d500) list_medium_line_x2_t4_g2_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t4_g2_g1

0x09e8,	// (0x0004dccc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x09e8,	// (0x0004dccc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005cfe4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005cfe4) list_medium_line_x2_t4_g2_g

0x09fa,	// (0x0004dcde) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09fa,	// (0x0004dcde) list_medium_line_x2_t4_g2_t1

0x0a14,	// (0x0004dcf8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a14,	// (0x0004dcf8) list_medium_line_x2_t4_g2_t2

0x0a2a,	// (0x0004dd0e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a2a,	// (0x0004dd0e) list_medium_line_x2_t4_g2_t3

0x0269,	// (0x0004d54d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005cfe9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005cfe9) list_medium_line_x2_t4_g2_t

0x0a3f,	// (0x0004dd23) list_medium_line_t3_right_iconx2_g1

0x0942,	// (0x0004dc26) list_medium_line_t3_right_iconx2_g2

0x0a47,	// (0x0004dd2b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005cff2) list_medium_line_t3_right_iconx2_g

0x0a51,	// (0x0004dd35) list_medium_line_t3_right_iconx2_t1

0x0a61,	// (0x0004dd45) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005cff9) list_medium_line_t3_right_iconx2_t

0x021c,	// (0x0004d500) list_medium_line_x3_t4_g4_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x3_t4_g4_g1

0x0228,	// (0x0004d50c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x3_t4_g4_g2

0x02cf,	// (0x0004d5b3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x02cf,	// (0x0004d5b3) list_medium_line_x3_t4_g4_g3

0x0a6f,	// (0x0004dd53) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a6f,	// (0x0004dd53) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005cffe) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005cffe) list_medium_line_x3_t4_g4_g

0x0a7b,	// (0x0004dd5f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a7b,	// (0x0004dd5f) list_medium_line_x3_t4_g4_t1

0x0a92,	// (0x0004dd76) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a92,	// (0x0004dd76) list_medium_line_x3_t4_g4_t2

0x0aad,	// (0x0004dd91) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0aad,	// (0x0004dd91) list_medium_line_x3_t4_g4_t3

0x0ac2,	// (0x0004dda6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ac2,	// (0x0004dda6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005d007) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005d007) list_medium_line_x3_t4_g4_t

0x0adf,	// (0x0004ddc3) list_single_dyc_row_text_pane_t1_ParamLimits

0x0adf,	// (0x0004ddc3) list_single_dyc_row_text_pane_t1

0x0b28,	// (0x0004de0c) list_single_dyc_row_text_pane_t2_ParamLimits

0x0b28,	// (0x0004de0c) list_single_dyc_row_text_pane_t2

0x866c,	// (0x00055950) list_single_dyc_row_text_pane_t3_ParamLimits

0x866c,	// (0x00055950) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005d010) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005d010) list_single_dyc_row_text_pane_t

0x8690,	// (0x00055974) list_single_dyc_row_pane_g1_ParamLimits

0x8690,	// (0x00055974) list_single_dyc_row_pane_g1

0x869c,	// (0x00055980) list_single_dyc_row_pane_g2_ParamLimits

0x869c,	// (0x00055980) list_single_dyc_row_pane_g2

0x86a8,	// (0x0005598c) list_single_dyc_row_pane_g3_ParamLimits

0x86a8,	// (0x0005598c) list_single_dyc_row_pane_g3

0x86b4,	// (0x00055998) list_single_dyc_row_pane_g4_ParamLimits

0x86b4,	// (0x00055998) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005d01d) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005d01d) list_single_dyc_row_pane_g

0x86c0,	// (0x000559a4) list_single_dyc_row_text_pane_ParamLimits

0x86c0,	// (0x000559a4) list_single_dyc_row_text_pane

0x9876,	// (0x00056b5a) bg_sp_fs_scroll_pane

0xe7d8,	// (0x0005babc) thumb_sp_fs_scroll_pane

0x05dc,	// (0x0004d8c0) list_medium_line_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_g1

0x0c5d,	// (0x0004df41) list_medium_line_t1_ParamLimits

0x0c5d,	// (0x0004df41) list_medium_line_t1

0x021c,	// (0x0004d500) list_medium_line_x2_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_g1

0x0228,	// (0x0004d50c) list_medium_line_x2_g2_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005d026) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005d026) list_medium_line_x2_g

0x86df,	// (0x000559c3) list_medium_line_x2_t1_ParamLimits

0x86df,	// (0x000559c3) list_medium_line_x2_t1

0x021c,	// (0x0004d500) list_medium_line_x3_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x3_g1

0x0228,	// (0x0004d50c) list_medium_line_x3_g2_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005d026) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005d026) list_medium_line_x3_g

0x86df,	// (0x000559c3) list_medium_line_x3_t1_ParamLimits

0x86df,	// (0x000559c3) list_medium_line_x3_t1

0xe7e1,	// (0x0005bac5) thumb_sp_fs_scroll_pane_g1

0xe7ea,	// (0x0005bace) thumb_sp_fs_scroll_pane_g2

0xe7f3,	// (0x0005bad7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005d02b) thumb_sp_fs_scroll_pane_g

0xe7e1,	// (0x0005bac5) bg_sp_fs_scroll_pane_g1

0xe7ea,	// (0x0005bace) bg_sp_fs_scroll_pane_g2

0xe7f3,	// (0x0005bad7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005d02b) bg_sp_fs_scroll_pane_g

0x021c,	// (0x0004d500) list_medium_line_x2_t3_g4_g1_ParamLimits

0x021c,	// (0x0004d500) list_medium_line_x2_t3_g4_g1

0x02c3,	// (0x0004d5a7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x02c3,	// (0x0004d5a7) list_medium_line_x2_t3_g4_g2

0x0228,	// (0x0004d50c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0228,	// (0x0004d50c) list_medium_line_x2_t3_g4_g3

0x0234,	// (0x0004d518) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0234,	// (0x0004d518) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0005c58b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0005c58b) list_medium_line_x2_t3_g4_g

0x0c72,	// (0x0004df56) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c72,	// (0x0004df56) list_medium_line_x2_t3_g4_t1

0x0c8c,	// (0x0004df70) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c8c,	// (0x0004df70) list_medium_line_x2_t3_g4_t2

0x0269,	// (0x0004d54d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0269,	// (0x0004d54d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005d032) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005d032) list_medium_line_x2_t3_g4_t

0x05dc,	// (0x0004d8c0) list_medium_line_g2_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_g2_g1

0x05e8,	// (0x0004d8cc) list_medium_line_g2_g2_ParamLimits

0x05e8,	// (0x0004d8cc) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0005cce0) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0005cce0) list_medium_line_g2_g

0x0ca6,	// (0x0004df8a) list_medium_line_g2_t1_ParamLimits

0x0ca6,	// (0x0004df8a) list_medium_line_g2_t1

0x05dc,	// (0x0004d8c0) list_medium_line_t3_g2_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_t3_g2_g1

0x05e8,	// (0x0004d8cc) list_medium_line_t3_g2_g2_ParamLimits

0x05e8,	// (0x0004d8cc) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0005cce0) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0005cce0) list_medium_line_t3_g2_g

0x0cbb,	// (0x0004df9f) list_medium_line_t3_g2_t1_ParamLimits

0x0cbb,	// (0x0004df9f) list_medium_line_t3_g2_t1

0x0cd5,	// (0x0004dfb9) list_medium_line_t3_g2_t2_ParamLimits

0x0cd5,	// (0x0004dfb9) list_medium_line_t3_g2_t2

0x0ceb,	// (0x0004dfcf) list_medium_line_t3_g2_t3_ParamLimits

0x0ceb,	// (0x0004dfcf) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005d039) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005d039) list_medium_line_t3_g2_t

0x0942,	// (0x0004dc26) list_medium_line_right_icon_g1

0x0d05,	// (0x0004dfe9) list_medium_line_right_icon_t1

0x05dc,	// (0x0004d8c0) list_medium_line_t2_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_t2_g1

0x0d13,	// (0x0004dff7) list_medium_line_t2_t1_ParamLimits

0x0d13,	// (0x0004dff7) list_medium_line_t2_t1

0x0d2d,	// (0x0004e011) list_medium_line_t2_t2_ParamLimits

0x0d2d,	// (0x0004e011) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005d040) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005d040) list_medium_line_t2_t

0x05dc,	// (0x0004d8c0) list_medium_line_t3_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_t3_g1

0x0d46,	// (0x0004e02a) list_medium_line_t3_t1_ParamLimits

0x0d46,	// (0x0004e02a) list_medium_line_t3_t1

0x0d60,	// (0x0004e044) list_medium_line_t3_t2_ParamLimits

0x0d60,	// (0x0004e044) list_medium_line_t3_t2

0x0d76,	// (0x0004e05a) list_medium_line_t3_t3_ParamLimits

0x0d76,	// (0x0004e05a) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005d045) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005d045) list_medium_line_t3_t

0x05dc,	// (0x0004d8c0) list_medium_line_g3_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_g3_g1

0x0d8b,	// (0x0004e06f) list_medium_line_g3_g2_ParamLimits

0x0d8b,	// (0x0004e06f) list_medium_line_g3_g2

0x05e8,	// (0x0004d8cc) list_medium_line_g3_g3_ParamLimits

0x05e8,	// (0x0004d8cc) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005d04c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005d04c) list_medium_line_g3_g

0x0d97,	// (0x0004e07b) list_medium_line_g3_t1_ParamLimits

0x0d97,	// (0x0004e07b) list_medium_line_g3_t1

0x05dc,	// (0x0004d8c0) list_medium_line_t2_g3_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_t2_g3_g1

0x0d8b,	// (0x0004e06f) list_medium_line_t2_g3_g2_ParamLimits

0x0d8b,	// (0x0004e06f) list_medium_line_t2_g3_g2

0x05e8,	// (0x0004d8cc) list_medium_line_t2_g3_g3_ParamLimits

0x05e8,	// (0x0004d8cc) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005d04c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005d04c) list_medium_line_t2_g3_g

0x0dac,	// (0x0004e090) list_medium_line_t2_g3_t1_ParamLimits

0x0dac,	// (0x0004e090) list_medium_line_t2_g3_t1

0x0dc6,	// (0x0004e0aa) list_medium_line_t2_g3_t2_ParamLimits

0x0dc6,	// (0x0004e0aa) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005d053) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005d053) list_medium_line_t2_g3_t

0x05dc,	// (0x0004d8c0) list_medium_line_t3_g3_g1_ParamLimits

0x05dc,	// (0x0004d8c0) list_medium_line_t3_g3_g1

0x0d8b,	// (0x0004e06f) list_medium_line_t3_g3_g2_ParamLimits

0x0d8b,	// (0x0004e06f) list_medium_line_t3_g3_g2

0x05e8,	// (0x0004d8cc) list_medium_line_t3_g3_g3_ParamLimits

0x05e8,	// (0x0004d8cc) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005d04c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005d04c) list_medium_line_t3_g3_g

0x0de4,	// (0x0004e0c8) list_medium_line_t3_g3_t1_ParamLimits

0x0de4,	// (0x0004e0c8) list_medium_line_t3_g3_t1

0x0dfd,	// (0x0004e0e1) list_medium_line_t3_g3_t2_ParamLimits

0x0dfd,	// (0x0004e0e1) list_medium_line_t3_g3_t2

0x0e13,	// (0x0004e0f7) list_medium_line_t3_g3_t3_ParamLimits

0x0e13,	// (0x0004e0f7) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005d058) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005d058) list_medium_line_t3_g3_t

0x0a3f,	// (0x0004dd23) list_medium_line_right_iconx2_g1

0x0942,	// (0x0004dc26) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d05f) list_medium_line_right_iconx2_g

0x0e2d,	// (0x0004e111) list_medium_line_right_iconx2_t1

0x0a3f,	// (0x0004dd23) list_medium_line_t2_right_iconx2_g1

0x0942,	// (0x0004dc26) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d05f) list_medium_line_t2_right_iconx2_g

0x0e3b,	// (0x0004e11f) list_medium_line_t2_right_iconx2_t1

0x0e4b,	// (0x0004e12f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005d064) list_medium_line_t2_right_iconx2_t

0x0e5d,	// (0x0004e141) list_medium_line_x4_t4_t1

0x0e6b,	// (0x0004e14f) list_medium_line_x4_t4_t2

0x0e7b,	// (0x0004e15f) list_medium_line_x4_t4_t3

0x0e8b,	// (0x0004e16f) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005d069) list_medium_line_x4_t4_t

0x8738,	// (0x00055a1c) tport_appsw_pane_ParamLimits

0x8738,	// (0x00055a1c) tport_appsw_pane

0x8750,	// (0x00055a34) tport_contact_pane_ParamLimits

0x8750,	// (0x00055a34) tport_contact_pane

0x8768,	// (0x00055a4c) tport_listscroll_pane_ParamLimits

0x8768,	// (0x00055a4c) tport_listscroll_pane

0x8782,	// (0x00055a66) cell_tport_appsw_pane_ParamLimits

0x8782,	// (0x00055a66) cell_tport_appsw_pane

0xd689,	// (0x0005a96d) tport_appsw_pane_g1_ParamLimits

0xd689,	// (0x0005a96d) tport_appsw_pane_g1

0xe7fc,	// (0x0005bae0) tport_contact_pane_g1

0xe805,	// (0x0005bae9) tport_contact_pane_t1

0xe813,	// (0x0005baf7) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005d072) tport_contact_pane_t

0xe821,	// (0x0005bb05) list_tport_pane

0xe82a,	// (0x0005bb0e) scroll_pane_cp_030

0x87ca,	// (0x00055aae) cell_tport_appsw_pane_g1

0x87da,	// (0x00055abe) cell_tport_appsw_pane_t1

0x87e8,	// (0x00055acc) grid_highlight_pane_cp019

0x87f0,	// (0x00055ad4) list_tport_double_graphic_pane_ParamLimits

0x87f0,	// (0x00055ad4) list_tport_double_graphic_pane

0xa551,	// (0x00057835) list_highlight_pane_cp023_ParamLimits

0xa551,	// (0x00057835) list_highlight_pane_cp023

0x87fd,	// (0x00055ae1) list_tport_double_graphic_pane_g1_ParamLimits

0x87fd,	// (0x00055ae1) list_tport_double_graphic_pane_g1

0x880a,	// (0x00055aee) list_tport_double_graphic_pane_t1_ParamLimits

0x880a,	// (0x00055aee) list_tport_double_graphic_pane_t1

0x881f,	// (0x00055b03) list_tport_double_graphic_pane_t2_ParamLimits

0x881f,	// (0x00055b03) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005d07e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005d07e) list_tport_double_graphic_pane_t

0x9876,	// (0x00056b5a) main_cale_note_pane

0x6878,	// (0x00053b5c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6878,	// (0x00053b5c) cell_vitu2_function_top_wide_pane_cp01

0x80ad,	// (0x00055391) wait_bar_pane_cp05_ParamLimits

0xa551,	// (0x00057835) listscroll_cmail_pane

0xe833,	// (0x0005bb17) list_cmail_pane

0x8831,	// (0x00055b15) list_cmail_body_pane

0x8846,	// (0x00055b2a) list_single_cmail_header_caption_pane

0x885d,	// (0x00055b41) list_single_cmail_header_detail_pane_ParamLimits

0x885d,	// (0x00055b41) list_single_cmail_header_detail_pane

0xe843,	// (0x0005bb27) list_single_cmail_header_caption_pane_t1

0x0e9b,	// (0x0004e17f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e9b,	// (0x0004e17f) list_single_cmail_header_detail_pane_g1

0x8887,	// (0x00055b6b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8887,	// (0x00055b6b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005d083) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005d083) list_single_cmail_header_detail_pane_g

0x8893,	// (0x00055b77) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8893,	// (0x00055b77) list_single_cmail_header_detail_pane_t1

0x88f3,	// (0x00055bd7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x88f3,	// (0x00055bd7) list_single_cmail_header_editor_pane_bg

0xe2d4,	// (0x0005b5b8) list_cmail_body_pane_g1

0xe867,	// (0x0005bb4b) list_cmail_body_pane_t1

0xd6a9,	// (0x0005a98d) list_single_cmail_header_editor_pane_bg_g1

0xacd0,	// (0x00057fb4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b9,	// (0x0005a99d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b1,	// (0x0005a995) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90c,	// (0x0005abf0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d9,	// (0x0005a9bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c9,	// (0x0005a9ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d1,	// (0x0005a9b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb0,	// (0x00057f94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x890a,	// (0x00055bee) calenote_gesture_pane_ParamLimits

0x890a,	// (0x00055bee) calenote_gesture_pane

0x892a,	// (0x00055c0e) calenote_window_pane_ParamLimits

0x892a,	// (0x00055c0e) calenote_window_pane

0xe875,	// (0x0005bb59) popup_note_window_cp01

0x8946,	// (0x00055c2a) calenote_swipe_1_pane_ParamLimits

0x8946,	// (0x00055c2a) calenote_swipe_1_pane

0x8471,	// (0x00055755) calenote_swipe_2_pane_ParamLimits

0x8471,	// (0x00055755) calenote_swipe_2_pane

0xe66a,	// (0x0005b94e) calenote_swipe_1_pane_g1_ParamLimits

0xe66a,	// (0x0005b94e) calenote_swipe_1_pane_g1

0xe677,	// (0x0005b95b) calenote_swipe_1_pane_g2_ParamLimits

0xe677,	// (0x0005b95b) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0005cfa3) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0005cfa3) calenote_swipe_1_pane_g

0xe887,	// (0x0005bb6b) calenote_swipe_1_pane_t1_ParamLimits

0xe887,	// (0x0005bb6b) calenote_swipe_1_pane_t1

0xe66a,	// (0x0005b94e) calenote_swipe_2_pane_g1_ParamLimits

0xe66a,	// (0x0005b94e) calenote_swipe_2_pane_g1

0xe8a6,	// (0x0005bb8a) calenote_swipe_2_pane_g2_ParamLimits

0xe8a6,	// (0x0005bb8a) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005d08f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005d08f) calenote_swipe_2_pane_g

0xe8b2,	// (0x0005bb96) calenote_swipe_2_pane_t1_ParamLimits

0xe8b2,	// (0x0005bb96) calenote_swipe_2_pane_t1

0x9876,	// (0x00056b5a) main_mup_navstr_pane

0x54b5,	// (0x00052799) main_mup3_pane_t7_ParamLimits

0x54b5,	// (0x00052799) main_mup3_pane_t7

0xa064,	// (0x00057348) main_mp4_pane_g6_ParamLimits

0xa064,	// (0x00057348) main_mp4_pane_g6

0xa226,	// (0x0005750a) main_image3_pane_t4_ParamLimits

0xa226,	// (0x0005750a) main_image3_pane_t4

0x895b,	// (0x00055c3f) popup_navstr_preview_pane_ParamLimits

0x895b,	// (0x00055c3f) popup_navstr_preview_pane

0x896f,	// (0x00055c53) scroll_navstr_pane_ParamLimits

0x896f,	// (0x00055c53) scroll_navstr_pane

0x9876,	// (0x00056b5a) bg_popup_preview_window_pane_cp04

0xe8d9,	// (0x0005bbbd) popup_navstr_preview_pane_t1

0x8983,	// (0x00055c67) scroll_navstr_pane_g1_ParamLimits

0x8983,	// (0x00055c67) scroll_navstr_pane_g1

0x8997,	// (0x00055c7b) scroll_navstr_pane_t1_ParamLimits

0x8997,	// (0x00055c7b) scroll_navstr_pane_t1

0xe87e,	// (0x0005bb62) bg_button_pane_cp014

0xe87e,	// (0x0005bb62) bg_button_pane_cp030

0x08e8,	// (0x0004dbcc) list_double_fisheye_pane_g4_ParamLimits

0x08e8,	// (0x0004dbcc) list_double_fisheye_pane_g4

0x08f4,	// (0x0004dbd8) list_double_fisheye_pane_g5_ParamLimits

0x08f4,	// (0x0004dbd8) list_double_fisheye_pane_g5

0xd86c,	// (0x0005ab50) sp_fs_scroll_pane_cp03

0xe78a,	// (0x0005ba6e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x0005ba7a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0005cfc0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x855d,	// (0x00055841) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe83b,	// (0x0005bb1f) sp_fs_scroll_pane_cp02

0xa9b6,	// (0x00057c9a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9b6,	// (0x00057c9a) popup_sp_fs_calendar_preview_list_single_pane

0x9876,	// (0x00056b5a) main_cam6_pano_pane

0xa551,	// (0x00057835) main_mup3_pane_ParamLimits

0x9876,	// (0x00056b5a) main_phacti_pane

0x7f80,	// (0x00055264) bg_button_pane_cp11

0x7f9a,	// (0x0005527e) main_mobtv_info_pane_g2_ParamLimits

0x7f9a,	// (0x0005527e) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0005cf20) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0005cf20) main_mobtv_info_pane_g

0x8177,	// (0x0005545b) sc_clock_pane_t5_ParamLimits

0x8177,	// (0x0005545b) sc_clock_pane_t5

0x823f,	// (0x00055523) main_radioblah_pane_g1_ParamLimits

0xe59b,	// (0x0005b87f) main_radioblah_pane_t3_ParamLimits

0xe59b,	// (0x0005b87f) main_radioblah_pane_t3

0xe5b3,	// (0x0005b897) main_radioblah_pane_t4_ParamLimits

0xe5b3,	// (0x0005b897) main_radioblah_pane_t4

0x8267,	// (0x0005554b) main_radioblah_text_pane_ParamLimits

0x8267,	// (0x0005554b) main_radioblah_text_pane

0x8279,	// (0x0005555d) main_radioblah_info_pane_g1_ParamLimits

0x8312,	// (0x000555f6) main_radioblah_info_pane_t4_ParamLimits

0x8312,	// (0x000555f6) main_radioblah_info_pane_t4

0xa551,	// (0x00057835) main_sp_fs_calendar_pane

0x89ae,	// (0x00055c92) main_phacti_pane_g1

0x89b6,	// (0x00055c9a) phacti_note_pane_ParamLimits

0x89b6,	// (0x00055c9a) phacti_note_pane

0xe8f0,	// (0x0005bbd4) phacti_term_pane_ParamLimits

0xe8f0,	// (0x0005bbd4) phacti_term_pane

0xe905,	// (0x0005bbe9) phacti_note_pane_t1_ParamLimits

0xe905,	// (0x0005bbe9) phacti_note_pane_t1

0x89ca,	// (0x00055cae) phacti_term_pane_g1

0x89d2,	// (0x00055cb6) phacti_term_pane_t1_ParamLimits

0x89d2,	// (0x00055cb6) phacti_term_pane_t1

0xe91c,	// (0x0005bc00) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe924,	// (0x0005bc08) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005d099) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0005bc10) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0005bc10) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0005bc26) aid_popup_sp_fs_bg_corner_pane

0xcd13,	// (0x00059ff7) popup_sp_fs_calendar_preview_bg_pane_g1

0x9876,	// (0x00056b5a) popup_sp_fs_calendar_preview_bg_pane

0x1f47,	// (0x0004f22b) popup_sp_fs_calendar_preview_list_pane

0xc90b,	// (0x00059bef) bg_main_sp_fs_cale_pane_ParamLimits

0xc90b,	// (0x00059bef) bg_main_sp_fs_cale_pane

0x8a66,	// (0x00055d4a) listscroll_cale_mrui_pane_ParamLimits

0x8a66,	// (0x00055d4a) listscroll_cale_mrui_pane

0x8a7b,	// (0x00055d5f) listscroll_sp_fs_schedule_track_pane

0x8a84,	// (0x00055d68) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a84,	// (0x00055d68) main_sp_fs_ctrlbar_pane_cp01

0xe94a,	// (0x0005bc2e) main_sp_fs_ribbon_pane

0x8a97,	// (0x00055d7b) popup_sp_fs_cale_preview_window

0x8aa9,	// (0x00055d8d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8aa9,	// (0x00055d8d) list_single_sp_fs_schedule_track_pane

0xa551,	// (0x00057835) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa551,	// (0x00057835) bg_sp_fs_highlight_list_pane_cp03

0x8abd,	// (0x00055da1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8abd,	// (0x00055da1) list_single_sp_fs_schedule_track_pane_g1

0x8ac9,	// (0x00055dad) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ac9,	// (0x00055dad) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005d09e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005d09e) list_single_sp_fs_schedule_track_pane_g

0x8ad5,	// (0x00055db9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ad5,	// (0x00055db9) list_single_sp_fs_schedule_track_pane_t1

0x8aef,	// (0x00055dd3) sp_fs_schedule_track_pane_ParamLimits

0x8aef,	// (0x00055dd3) sp_fs_schedule_track_pane

0xe952,	// (0x0005bc36) sp_fs_schedule_track_pane_g1

0xe95a,	// (0x0005bc3e) sp_fs_schedule_track_pane_g2

0xe962,	// (0x0005bc46) sp_fs_schedule_track_pane_g3

0xe96a,	// (0x0005bc4e) sp_fs_schedule_track_pane_g4

0xe972,	// (0x0005bc56) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005d0a3) sp_fs_schedule_track_pane_g

0xd6a9,	// (0x0005a98d) bg_sp_fs_schedule_viewer_highlight_g1

0xacd0,	// (0x00057fb4) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b1,	// (0x0005a995) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b9,	// (0x0005a99d) bg_sp_fs_schedule_viewer_highlight_g4

0xd90c,	// (0x0005abf0) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c9,	// (0x0005a9ad) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d1,	// (0x0005a9b5) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d9,	// (0x0005a9bd) bg_sp_fs_schedule_viewer_highlight_g8

0xacb0,	// (0x00057f94) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005d0ae) bg_sp_fs_schedule_viewer_highlight_g

0x9876,	// (0x00056b5a) bg_main_sp_fs_ribbon_pane

0x8b00,	// (0x00055de4) main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x0005bc5e) main_sp_fs_ribbon_pane_t1

0x8b09,	// (0x00055ded) main_sp_fs_ribbon_pane_t2

0xe989,	// (0x0005bc6d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005d0c1) main_sp_fs_ribbon_pane_t

0xe998,	// (0x0005bc7c) main_sp_fs_ribbon_scheduler_pane

0xe9a0,	// (0x0005bc84) bg_main_sp_fs_ribbon_pane_g1

0xe9a9,	// (0x0005bc8d) bg_main_sp_fs_ribbon_pane_g2

0xe9b2,	// (0x0005bc96) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0005d0c8) bg_main_sp_fs_ribbon_pane_g

0xe9ba,	// (0x0005bc9e) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c3,	// (0x0005bca7) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cc,	// (0x0005bcb0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005d0cf) main_sp_fs_ribbon_scheduler_pane_g

0xe9d5,	// (0x0005bcb9) list_cale_mrui_pane

0x8b18,	// (0x00055dfc) sp_fs_scroll_pane_cp07_ParamLimits

0x8b18,	// (0x00055dfc) sp_fs_scroll_pane_cp07

0x8b34,	// (0x00055e18) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b34,	// (0x00055e18) bg_sp_fs_schedule_viewer_highlight

0xe9e2,	// (0x0005bcc6) list_single_sp_fs_schedule_track_pane_cp01

0xe9ea,	// (0x0005bcce) list_sp_fs_schedule_track_pane

0xe9f2,	// (0x0005bcd6) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f2,	// (0x0005bcd6) sp_fs_scroll_pane_cp06

0xcd13,	// (0x00059ff7) bgmain_sp_fs_calendar_pane_g1

0x0eb3,	// (0x0004e197) list_single_cale_mrui_pane_ParamLimits

0x0eb3,	// (0x0004e197) list_single_cale_mrui_pane

0x8b44,	// (0x00055e28) list_single_cale_mrui_row_pane_ParamLimits

0x8b44,	// (0x00055e28) list_single_cale_mrui_row_pane

0x8b51,	// (0x00055e35) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b51,	// (0x00055e35) list_single_cale_mrui_row_pane_g1

0x8b89,	// (0x00055e6d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b89,	// (0x00055e6d) list_single_cale_mrui_row_pane_t1

0x0ed5,	// (0x0004e1b9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ed5,	// (0x0004e1b9) list_single_cale_mrui_row_pane_t2

0x8b9b,	// (0x00055e7f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8b9b,	// (0x00055e7f) list_single_cale_mrui_row_pane_t3

0xa44c,	// (0x00057730) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa44c,	// (0x00057730) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005d0dd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005d0dd) list_single_cale_mrui_row_pane_t

0x0f3d,	// (0x0004e221) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f3d,	// (0x0004e221) list_single_cmail_header_editor_pane_bg_cp01

0x0f63,	// (0x0004e247) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f63,	// (0x0004e247) list_single_cmail_header_editor_pane_bg_cp02

0x8bca,	// (0x00055eae) main_radioblah_text_pane_t1_ParamLimits

0x8bca,	// (0x00055eae) main_radioblah_text_pane_t1

0xea11,	// (0x0005bcf5) cam6_indi_pane_cp01

0xea19,	// (0x0005bcfd) cam6_mode_pane_cp01

0xea21,	// (0x0005bd05) cam6_pano_pane

0xea2a,	// (0x0005bd0e) cam6_zoom_pane_cp01

0xea32,	// (0x0005bd16) cam6_pano_image_pane

0xea3d,	// (0x0005bd21) cam6_pano_pane_g1

0xe2d4,	// (0x0005b5b8) cam6_pano_pane_g2

0xea46,	// (0x0005bd2a) cam6_pano_pane_g3

0xea4f,	// (0x0005bd33) cam6_pano_pane_g4

0xd2b5,	// (0x0005a599) cam6_pano_pane_g5

0xea58,	// (0x0005bd3c) cam6_pano_pane_g6

0xea62,	// (0x0005bd46) cam6_pano_pane_g7

0xea6a,	// (0x0005bd4e) cam6_pano_pane_g8

0xea73,	// (0x0005bd57) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0005d0e6) cam6_pano_pane_g

0x9876,	// (0x00056b5a) main_browser_tag_pane

0xe8d1,	// (0x0005bbb5) grid_navstr_albumart_pane

0xea7e,	// (0x0005bd62) cell_navstr_albumart_pane_ParamLimits

0xea7e,	// (0x0005bd62) cell_navstr_albumart_pane

0xea9e,	// (0x0005bd82) cell_navstr_albumart_pane_g1

0xc6dc,	// (0x000599c0) cell_navstr_albumart_pane_g2

0xc6ec,	// (0x000599d0) cell_navstr_albumart_pane_g3

0xc6e4,	// (0x000599c8) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0005d0f9) cell_navstr_albumart_pane_g

0x8be5,	// (0x00055ec9) bt_list_pane_ParamLimits

0x8be5,	// (0x00055ec9) bt_list_pane

0x8bf9,	// (0x00055edd) bt_list_pane_t1

0x8c08,	// (0x00055eec) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0005d102) bt_list_pane_t

0x9876,	// (0x00056b5a) main_cale_prevew_pane

0x8c17,	// (0x00055efb) popup_cale_preview_window_ParamLimits

0x8c17,	// (0x00055efb) popup_cale_preview_window

0xa551,	// (0x00057835) bg_popup_preview_window_pane_cp05_ParamLimits

0xa551,	// (0x00057835) bg_popup_preview_window_pane_cp05

0xeaa6,	// (0x0005bd8a) list_cale_preview_pane_ParamLimits

0xeaa6,	// (0x0005bd8a) list_cale_preview_pane

0x8c30,	// (0x00055f14) list_double_cale_preview_pane_ParamLimits

0x8c30,	// (0x00055f14) list_double_cale_preview_pane

0xd6e1,	// (0x0005a9c5) list_single_cale_preview_pane_ParamLimits

0xd6e1,	// (0x0005a9c5) list_single_cale_preview_pane

0x8c42,	// (0x00055f26) list_single_cale_preview_pane_g1

0x8c4a,	// (0x00055f2e) list_single_cale_preview_pane_t1_ParamLimits

0x8c4a,	// (0x00055f2e) list_single_cale_preview_pane_t1

0x8c5f,	// (0x00055f43) list_double_cale_preview_pane_g1

0x8c67,	// (0x00055f4b) list_double_cale_preview_pane_t1_ParamLimits

0x8c67,	// (0x00055f4b) list_double_cale_preview_pane_t1

0x8c7c,	// (0x00055f60) list_double_cale_preview_pane_t2_ParamLimits

0x8c7c,	// (0x00055f60) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0005d107) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0005d107) list_double_cale_preview_pane_t

0x9876,	// (0x00056b5a) main_ezdial_pane

0xa551,	// (0x00057835) main_sp_fs_email_pane_ParamLimits

0x84cd,	// (0x000557b1) cmail_ddmenu_btn01_pane_ParamLimits

0x84cd,	// (0x000557b1) cmail_ddmenu_btn01_pane

0x84e0,	// (0x000557c4) cmail_ddmenu_btn02_pane_ParamLimits

0x84e0,	// (0x000557c4) cmail_ddmenu_btn02_pane

0x8503,	// (0x000557e7) cmail_ddmenu_btn03_pane_ParamLimits

0x8503,	// (0x000557e7) cmail_ddmenu_btn03_pane

0x859c,	// (0x00055880) main_sp_fs_ctrlbar_pane_ParamLimits

0x85c0,	// (0x000558a4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8831,	// (0x00055b15) list_cmail_body_pane_ParamLimits

0xe851,	// (0x0005bb35) bg_button_pane_cp12

0xe85a,	// (0x0005bb3e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85a,	// (0x0005bb3e) list_single_cmail_header_detail_pane_g3

0x88cf,	// (0x00055bb3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x88cf,	// (0x00055bb3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005d08a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005d08a) list_single_cmail_header_detail_pane_t

0x89e7,	// (0x00055ccb) phacti_term_pane_t2_ParamLimits

0x89e7,	// (0x00055ccb) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005d094) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005d094) phacti_term_pane_t

0xeab2,	// (0x0005bd96) aid_size_list_single_double

0x8c94,	// (0x00055f78) popup_ezdial_listscroll_window

0x8cb0,	// (0x00055f94) popup_number_entry_window_cp01

0xaa77,	// (0x00057d5b) bg_popup_call_pane_cp09

0xeabe,	// (0x0005bda2) ezdial_list_pane

0xeac6,	// (0x0005bdaa) scroll_pane_cp23

0xc90b,	// (0x00059bef) bg_button_pane_cp028_ParamLimits

0xc90b,	// (0x00059bef) bg_button_pane_cp028

0x8cbe,	// (0x00055fa2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8cbe,	// (0x00055fa2) cmail_ddmenu_btn01_pane_g1

0x8cca,	// (0x00055fae) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8cca,	// (0x00055fae) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0005d10c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0005d10c) cmail_ddmenu_btn01_pane_g

0xeace,	// (0x0005bdb2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeace,	// (0x0005bdb2) cmail_ddmenu_btn01_pane_t1

0xc90b,	// (0x00059bef) bg_button_pane_cp029_ParamLimits

0xc90b,	// (0x00059bef) bg_button_pane_cp029

0x8cd6,	// (0x00055fba) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cd6,	// (0x00055fba) cmail_ddmenu_btn02_pane_g1

0x8cee,	// (0x00055fd2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cee,	// (0x00055fd2) cmail_ddmenu_btn02_pane_t1

0xa551,	// (0x00057835) bg_button_pane_cp031_ParamLimits

0xa551,	// (0x00057835) bg_button_pane_cp031

0x8cd6,	// (0x00055fba) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cd6,	// (0x00055fba) cmail_ddmenu_btn03_pane_g1

0x8cee,	// (0x00055fd2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cee,	// (0x00055fd2) cmail_ddmenu_btn03_pane_t1

0x605e,	// (0x00053342) cell_dialer2_keypad_pane_t1_ParamLimits

0x6078,	// (0x0005335c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6078,	// (0x0005335c) cell_dialer2_keypad_pane_t1_copy1

0x7da3,	// (0x00055087) ncimui_group_button_pane

0xa551,	// (0x00057835) main_sp_fs_calendar_pane_ParamLimits

0x8846,	// (0x00055b2a) list_single_cmail_header_caption_pane_ParamLimits

0x8a1a,	// (0x00055cfe) aid_recal_txt_sm_pane

0x9876,	// (0x00056b5a) mian_recal_day_pane

0x8a97,	// (0x00055d7b) popup_sp_fs_cale_preview_window_ParamLimits

0xeae3,	// (0x0005bdc7) list_recal_day_pane

0xa496,	// (0x0005777a) list_single_recal_day_pane_ParamLimits

0xa496,	// (0x0005777a) list_single_recal_day_pane

0xeb0a,	// (0x0005bdee) list_single_recal_day_pane_g1_ParamLimits

0xeb0a,	// (0x0005bdee) list_single_recal_day_pane_g1

0xa4a8,	// (0x0005778c) list_single_recal_day_pane_g2_ParamLimits

0xa4a8,	// (0x0005778c) list_single_recal_day_pane_g2

0xa4b4,	// (0x00057798) list_single_recal_day_pane_g3_ParamLimits

0xa4b4,	// (0x00057798) list_single_recal_day_pane_g3

0x0f83,	// (0x0004e267) list_single_recal_day_pane_g4_ParamLimits

0x0f83,	// (0x0004e267) list_single_recal_day_pane_g4

0xa4c0,	// (0x000577a4) list_single_recal_day_pane_g5_ParamLimits

0xa4c0,	// (0x000577a4) list_single_recal_day_pane_g5

0xa4cc,	// (0x000577b0) list_single_recal_day_pane_g6_ParamLimits

0xa4cc,	// (0x000577b0) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0005d11b) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0005d11b) list_single_recal_day_pane_g

0xa4e0,	// (0x000577c4) list_single_recal_day_pane_t1

0xa4f2,	// (0x000577d6) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0005d126) list_single_recal_day_pane_t

0x8d12,	// (0x00055ff6) ncimui_query_button_pane_ParamLimits

0x8d12,	// (0x00055ff6) ncimui_query_button_pane

0x8d22,	// (0x00056006) ncimui_query_button_pane_t1_ParamLimits

0x8d22,	// (0x00056006) ncimui_query_button_pane_t1

0xeb16,	// (0x0005bdfa) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x0005bdfa) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0005d12b) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0005d12b) ncimui_query_button_pane_t

0x8d35,	// (0x00056019) query_button_pane_ParamLimits

0x8d35,	// (0x00056019) query_button_pane

0x9876,	// (0x00056b5a) bg_button_pane_cp0028

0xeb29,	// (0x0005be0d) query_button_pane_t1

0x4086,	// (0x0005136a) main_tport_pane_ParamLimits

0x86f5,	// (0x000559d9) bg_popup_window_pane_cp01_ParamLimits

0x86f5,	// (0x000559d9) bg_popup_window_pane_cp01

0x8710,	// (0x000559f4) heading_pane_cp08_ParamLimits

0x8710,	// (0x000559f4) heading_pane_cp08

0x8723,	// (0x00055a07) heading_pane_cp07_ParamLimits

0x8723,	// (0x00055a07) heading_pane_cp07

0x87ca,	// (0x00055aae) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005d077) cell_tport_appsw_pane_g

0x3664,	// (0x00050948) input_candi_list_open_g1

0xae93,	// (0x00058177) list_cale_time_pane_g6_ParamLimits

0xae93,	// (0x00058177) list_cale_time_pane_g6

0x4e4e,	// (0x00052132) aid_size_touch_calib_1_ParamLimits

0x4e4e,	// (0x00052132) aid_size_touch_calib_1

0x4e60,	// (0x00052144) aid_size_touch_calib_2_ParamLimits

0x4e60,	// (0x00052144) aid_size_touch_calib_2

0x4e78,	// (0x0005215c) aid_size_touch_calib_3_ParamLimits

0x4e78,	// (0x0005215c) aid_size_touch_calib_3

0x4e96,	// (0x0005217a) aid_size_touch_calib_4_ParamLimits

0x4e96,	// (0x0005217a) aid_size_touch_calib_4

0x4eae,	// (0x00052192) main_touch_calib_button_group_pane_ParamLimits

0x4eae,	// (0x00052192) main_touch_calib_button_group_pane

0x4ec6,	// (0x000521aa) main_touch_calib_pane_g1_ParamLimits

0x4ed8,	// (0x000521bc) main_touch_calib_pane_g2_ParamLimits

0x4eea,	// (0x000521ce) main_touch_calib_pane_g3_ParamLimits

0x4efc,	// (0x000521e0) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0005ca2d) main_touch_calib_pane_g_ParamLimits

0x4f0e,	// (0x000521f2) main_touch_calib_pane_t1_ParamLimits

0x4f28,	// (0x0005220c) main_touch_calib_pane_t2_ParamLimits

0x4f42,	// (0x00052226) main_touch_calib_pane_t3_ParamLimits

0x4f56,	// (0x0005223a) main_touch_calib_pane_t4_ParamLimits

0x4f6a,	// (0x0005224e) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0005ca36) main_touch_calib_pane_t_ParamLimits

0xd058,	// (0x0005a33c) list_single_fp_cale_pane_g3_ParamLimits

0xd058,	// (0x0005a33c) list_single_fp_cale_pane_g3

0xa551,	// (0x00057835) bg_button_pane_cp012_ParamLimits

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp03_ParamLimits

0x702e,	// (0x00054312) cell_vitu2_function_top_pane_g1_ParamLimits

0xa551,	// (0x00057835) bg_vkb2_func_pane_cp04_ParamLimits

0x7d2e,	// (0x00055012) main_ncimui_button_group_pane_ParamLimits

0x7d2e,	// (0x00055012) main_ncimui_button_group_pane

0x7d8e,	// (0x00055072) main_ncimui_pane_t3_ParamLimits

0x7d8e,	// (0x00055072) main_ncimui_pane_t3

0xe8e7,	// (0x0005bbcb) phacti_button_group_pane

0xeab2,	// (0x0005bd96) aid_size_list_single_double_ParamLimits

0x8c94,	// (0x00055f78) popup_ezdial_listscroll_window_ParamLimits

0x8cb0,	// (0x00055f94) popup_number_entry_window_cp01_ParamLimits

0x8d48,	// (0x0005602c) phacti_button_pane_ParamLimits

0x8d48,	// (0x0005602c) phacti_button_pane

0x9876,	// (0x00056b5a) bg_button_pane_cp14

0xeb37,	// (0x0005be1b) phacti_button_pane_t1

0x8d59,	// (0x0005603d) main_touch_calib_button_pane_ParamLimits

0x8d59,	// (0x0005603d) main_touch_calib_button_pane

0xa88b,	// (0x00057b6f) bg_button_pane_cp18_ParamLimits

0xa88b,	// (0x00057b6f) bg_button_pane_cp18

0xeb45,	// (0x0005be29) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x0005be29) main_touch_calib_button_pane_t1

0xeb5b,	// (0x0005be3f) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x0005be3f) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0005d130) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0005d130) main_touch_calib_button_pane_t

0x9876,	// (0x00056b5a) cell_ncimui_button_pane

0x9876,	// (0x00056b5a) bg_button_pane_cp032

0xeb79,	// (0x0005be5d) cell_ncimui_button_pane_t1

0xa206,	// (0x000574ea) image3_infobar_pane_ParamLimits

0xa206,	// (0x000574ea) image3_infobar_pane

0x81a3,	// (0x00055487) fs_bigclock_status_pane_ParamLimits

0x81a3,	// (0x00055487) fs_bigclock_status_pane

0x81b0,	// (0x00055494) main_fs_bigclock_clock_pane_ParamLimits

0x81b0,	// (0x00055494) main_fs_bigclock_clock_pane

0x81ce,	// (0x000554b2) main_fs_bigclock_indi_pane_ParamLimits

0x81ce,	// (0x000554b2) main_fs_bigclock_indi_pane

0x8200,	// (0x000554e4) main_fs_bigclock_swipe_pane_ParamLimits

0x8200,	// (0x000554e4) main_fs_bigclock_swipe_pane

0x9876,	// (0x00056b5a) main_fs_clock_dumped_data

0xe3e1,	// (0x0005b6c5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3e1,	// (0x0005b6c5) list_single_fs_bigclock_indicator_pane_g1

0xe3fd,	// (0x0005b6e1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3fd,	// (0x0005b6e1) list_single_fs_bigclock_indicator_pane_g2

0xe417,	// (0x0005b6fb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe417,	// (0x0005b6fb) list_single_fs_bigclock_indicator_pane_g3

0xe431,	// (0x0005b715) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe431,	// (0x0005b715) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0005cf54) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0005cf54) list_single_fs_bigclock_indicator_pane_g

0xe45c,	// (0x0005b740) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe45c,	// (0x0005b740) list_single_fs_bigclock_indicator_pane_t1

0xe484,	// (0x0005b768) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe484,	// (0x0005b768) list_single_fs_bigclock_indicator_pane_t2

0xe4ac,	// (0x0005b790) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4ac,	// (0x0005b790) list_single_fs_bigclock_indicator_pane_t3

0xe4d4,	// (0x0005b7b8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4d4,	// (0x0005b7b8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0005cf5f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0005cf5f) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x0005be6b) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x0005be6b) image3_infobar_fav_pane

0xeb97,	// (0x0005be7b) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x0005be7b) image3_infobar_loc_pane

0xebab,	// (0x0005be8f) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0005be8f) image3_infobar_time_pane

0xcd13,	// (0x00059ff7) image3_infobar_time_pane_g1

0xebbb,	// (0x0005be9f) image3_infobar_time_pane_t1

0xcd13,	// (0x00059ff7) image3_infobar_loc_pane_g1

0xebc9,	// (0x0005bead) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0005d135) image3_infobar_loc_pane_g

0xebd1,	// (0x0005beb5) image3_infobar_loc_pane_t1

0xcd13,	// (0x00059ff7) image3_infobar_fav_pane_g1

0xebdf,	// (0x0005bec3) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0005d13a) image3_infobar_fav_pane_g

0xebe7,	// (0x0005becb) fs_bigclock_status_battery_pane

0xebf0,	// (0x0005bed4) fs_bigclock_status_signal_pane

0xebf9,	// (0x0005bedd) fs_bigclock_status_title_pane

0xec02,	// (0x0005bee6) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0005beef) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0005d13f) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0005bef7) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0005bf00) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0005d144) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0005bf08) fs_bigclock_status_title_pane_t1

0x8d6e,	// (0x00056052) main_fs_bigclock_clock_pane_g1

0x8d6e,	// (0x00056052) main_fs_bigclock_clock_pane_g2

0x8d7f,	// (0x00056063) main_fs_bigclock_clock_pane_g3

0x8d7f,	// (0x00056063) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0005d149) main_fs_bigclock_clock_pane_g

0x8d92,	// (0x00056076) main_fs_bigclock_clock_pane_t1

0x8da8,	// (0x0005608c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0005d152) main_fs_bigclock_clock_pane_t

0xec32,	// (0x0005bf16) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec32,	// (0x0005bf16) list_single_fs_bigclock_indicator_pane

0xec43,	// (0x0005bf27) list_single_fs_bigclock_pane_ParamLimits

0xec43,	// (0x0005bf27) list_single_fs_bigclock_pane

0xec69,	// (0x0005bf4d) main_fs_bigclock_indicator_pane_t1

0xec78,	// (0x0005bf5c) list_single_fs_bigclock_pane_g1

0xec80,	// (0x0005bf64) list_single_fs_bigclock_pane_t1

0xcd13,	// (0x00059ff7) main_fs_bigclock_swipe_pane_g1

0xecc3,	// (0x0005bfa7) main_fs_bigclock_swipe_pane_g2

0x0001,

0x011d,	// (0x0004d401) main_fs_bigclock_swipe_pane_g

0xeccb,	// (0x0005bfaf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccb,	// (0x0005bfaf) main_fs_bigclock_swipe_pane_t1

0x2f6b,	// (0x0005024f) call_type_pane_ParamLimits

0x9876,	// (0x00056b5a) main_btmg_pane

0x8b7d,	// (0x00055e61) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b7d,	// (0x00055e61) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0005d0d6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0005d0d6) list_single_cale_mrui_row_pane_g

0xa485,	// (0x00057769) list_recal_vselct_arw_lo_pane

0xeb02,	// (0x0005bde6) list_recal_vselct_arw_up_pane

0xa48d,	// (0x00057771) list_recal_vselct_pane

0x8e02,	// (0x000560e6) btmg_button_pane

0x8e0c,	// (0x000560f0) main_btmg_pane_g1

0x9876,	// (0x00056b5a) bg_button_pane_cp044

0xece8,	// (0x0005bfcc) btmg_button_pane_t1

0xc8f7,	// (0x00059bdb) aid_listscroll_gen

0xa551,	// (0x00057835) main_cntbar_detail_pane

0xe833,	// (0x0005bb17) list_cmail_folder_pane

0xd86c,	// (0x0005ab50) sp_fs_scroll_pane_cp03_ParamLimits

0x0f9b,	// (0x0004e27f) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f9b,	// (0x0004e27f) list_single_fs_dyc_pane_cp01

0xecf6,	// (0x0005bfda) aid_size_cmail_indent

0xa504,	// (0x000577e8) list_single_dyc_row_pane_cp01

0x8e48,	// (0x0005612c) cntbar_detail_list_pane_ParamLimits

0x8e48,	// (0x0005612c) cntbar_detail_list_pane

0x8e94,	// (0x00056178) main_cntbar_detail_cont_pane_ParamLimits

0x8e94,	// (0x00056178) main_cntbar_detail_cont_pane

0xd86c,	// (0x0005ab50) scroll_pane_cp032_ParamLimits

0xd86c,	// (0x0005ab50) scroll_pane_cp032

0x8ea8,	// (0x0005618c) cntbar_detail_list_event_pane_ParamLimits

0x8ea8,	// (0x0005618c) cntbar_detail_list_event_pane

0x8e58,	// (0x0005613c) cntbar_detail_list_shct_pane

0xad1e,	// (0x00058002) aid_list_gen

0xecff,	// (0x0005bfe3) aid_scroll

0xed08,	// (0x0005bfec) aid_size_touch_scroll_bar

0x7613,	// (0x000548f7) aid_list_double

0xa50d,	// (0x000577f1) aid_list_single

0x7613,	// (0x000548f7) aid_list_single_lg

0xa516,	// (0x000577fa) aid_list_z_g_a_sm

0xa51e,	// (0x00057802) aid_list_z_g_d

0xa526,	// (0x0005780a) aid_txt_z_prm

0x0fb2,	// (0x0004e296) aid_txt_z_prm_cp01

0x0fc0,	// (0x0004e2a4) aid_txt_z_sec

0x8eb8,	// (0x0005619c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8eb8,	// (0x0005619c) main_cntbar_detail_cont_pane_g1

0x8ecc,	// (0x000561b0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ecc,	// (0x000561b0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7a,	// (0x0005d15e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7a,	// (0x0005d15e) main_cntbar_detail_cont_pane_g

0xed11,	// (0x0005bff5) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x0005c003) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x0005c011) main_cntbar_detail_cont_pane_t3

0x0002,

0x0127,	// (0x0004d40b) main_cntbar_detail_cont_pane_t

0x8edc,	// (0x000561c0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8edc,	// (0x000561c0) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x0005c01f) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x0005c028) cntbar_detail_list_shct_pane_g2

0x0001,

0x012e,	// (0x0004d412) cntbar_detail_list_shct_pane_g

0x8ef0,	// (0x000561d4) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ef0,	// (0x000561d4) cntbar_detail_list_event_pane_g1

0x8efc,	// (0x000561e0) cntbar_detail_list_event_pane_g2_ParamLimits

0x8efc,	// (0x000561e0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7f,	// (0x0005d163) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7f,	// (0x0005d163) cntbar_detail_list_event_pane_g

0x8f68,	// (0x0005624c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f68,	// (0x0005624c) cntbar_detail_list_event_pane_t1

0x8f7d,	// (0x00056261) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f7d,	// (0x00056261) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8c,	// (0x0005d170) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8c,	// (0x0005d170) cntbar_detail_list_event_pane_t

0xcd13,	// (0x00059ff7) cell_cntbar_detail_list_shct_pane_g1

0xb486,	// (0x0005876a) navi_pane_mv_g3

0xa551,	// (0x00057835) main_cntbar_detail_pane_ParamLimits

0x9876,	// (0x00056b5a) main_notif_wgt_pane

0x9ff2,	// (0x000572d6) aid_tch_main_mp4_pane_g4

0xa1fe,	// (0x000574e2) popup_slider_window_cp02

0xa47b,	// (0x0005775f) list_recal_day_event_pane

0x8e16,	// (0x000560fa) cntbar_detail_btn_pane_ParamLimits

0x8e16,	// (0x000560fa) cntbar_detail_btn_pane

0x8e2f,	// (0x00056113) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e2f,	// (0x00056113) cntbar_detail_btn_pane_cp01

0x8e58,	// (0x0005613c) cntbar_detail_list_shct_pane_ParamLimits

0x8e68,	// (0x0005614c) cntbar_detail_pane_g1_ParamLimits

0x8e68,	// (0x0005614c) cntbar_detail_pane_g1

0x8e78,	// (0x0005615c) cntbar_detail_pane_t1_ParamLimits

0x8e78,	// (0x0005615c) cntbar_detail_pane_t1

0x8f08,	// (0x000561ec) cntbar_detail_list_event_pane_g3_ParamLimits

0x8f08,	// (0x000561ec) cntbar_detail_list_event_pane_g3

0x8f20,	// (0x00056204) cntbar_detail_list_event_pane_g4_ParamLimits

0x8f20,	// (0x00056204) cntbar_detail_list_event_pane_g4

0x8f38,	// (0x0005621c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f38,	// (0x0005621c) cntbar_detail_list_event_pane_g5

0x8f50,	// (0x00056234) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f50,	// (0x00056234) cntbar_detail_list_event_pane_g6

0x8f92,	// (0x00056276) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f92,	// (0x00056276) cntbar_detail_list_event_pane_t3

0x8fa4,	// (0x00056288) popup_notif_wgt_window_ParamLimits

0x8fa4,	// (0x00056288) popup_notif_wgt_window

0x8fbd,	// (0x000562a1) popup_submenu_window_cp01_ParamLimits

0x8fbd,	// (0x000562a1) popup_submenu_window_cp01

0xaa77,	// (0x00057d5b) bg_popup_window_pane_cp10

0xed4d,	// (0x0005c031) listscroll_notif_wgt_pane

0xed5f,	// (0x0005c043) list_notif_wgt_window

0xed68,	// (0x0005c04c) scroll_pane_cp033

0x8fcf,	// (0x000562b3) list_notif_wgt_row_pane_ParamLimits

0x8fcf,	// (0x000562b3) list_notif_wgt_row_pane

0xed71,	// (0x0005c055) aid_size_list_notif_wgt_del

0xed7e,	// (0x0005c062) list_notif_wgt_row_pane_g1

0xed8a,	// (0x0005c06e) list_notif_wgt_row_pane_g2

0xed99,	// (0x0005c07d) list_notif_wgt_row_pane_g3

0x0002,

0x0147,	// (0x0004d42b) list_notif_wgt_row_pane_g

0xeda6,	// (0x0005c08a) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0005c0a0) list_notif_wgt_row_pane_t2

0xedce,	// (0x0005c0b2) list_notif_wgt_row_pane_t3

0x0002,

0x014e,	// (0x0004d432) list_notif_wgt_row_pane_t

0xd914,	// (0x0005abf8) list_recal_day_event_pane_g1

0xede0,	// (0x0005c0c4) list_recal_day_event_pane_t1

0x9876,	// (0x00056b5a) bg_button_pane_cp045

0x8fdf,	// (0x000562c3) cntbar_detail_btn_pane_t1

0xc90b,	// (0x00059bef) main_callh_pane_ParamLimits

0xc90b,	// (0x00059bef) main_callh_pane

0x9876,	// (0x00056b5a) main_coverflow0_pane

0x9876,	// (0x00056b5a) main_wgtman_pane

0x8218,	// (0x000554fc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8218,	// (0x000554fc) main_fs_bigclock_unlock_btn_pane

0x87c2,	// (0x00055aa6) bg_button_pane_cp16

0x87d2,	// (0x00055ab6) cell_tport_appsw_pane_g3

0x8fed,	// (0x000562d1) cf0_flow_pane_ParamLimits

0x8fed,	// (0x000562d1) cf0_flow_pane

0xedef,	// (0x0005c0d3) listscroll_cf0_pane

0xedfa,	// (0x0005c0de) main_cf0_pane_g1

0x9002,	// (0x000562e6) main_cf0_pane_t1_ParamLimits

0x9002,	// (0x000562e6) main_cf0_pane_t1

0x9019,	// (0x000562fd) main_cf0_pane_t2_ParamLimits

0x9019,	// (0x000562fd) main_cf0_pane_t2

0x0001,

0xfe93,	// (0x0005d177) main_cf0_pane_t_ParamLimits

0xfe93,	// (0x0005d177) main_cf0_pane_t

0xee0c,	// (0x0005c0f0) scroll_pane_cp11

0x9030,	// (0x00056314) cf0_flow_pane_g1

0x9038,	// (0x0005631c) cf0_flow_pane_g2

0x0001,

0xfe98,	// (0x0005d17c) cf0_flow_pane_g

0x9040,	// (0x00056324) cf0_flow_pane_t1

0x9876,	// (0x00056b5a) main_call6_pane

0x9876,	// (0x00056b5a) main_calllock_pane

0x904e,	// (0x00056332) call6_btn_grp_pane_ParamLimits

0x904e,	// (0x00056332) call6_btn_grp_pane

0x9068,	// (0x0005634c) call6_pane_g1_ParamLimits

0x9068,	// (0x0005634c) call6_pane_g1

0x907e,	// (0x00056362) popup_call6_1st_window_ParamLimits

0x907e,	// (0x00056362) popup_call6_1st_window

0x908f,	// (0x00056373) popup_call6_2nd_window_ParamLimits

0x908f,	// (0x00056373) popup_call6_2nd_window

0x90a0,	// (0x00056384) cell_call6_btn_pane_ParamLimits

0x90a0,	// (0x00056384) cell_call6_btn_pane

0xaa77,	// (0x00057d5b) bg_popup_call2_in_pane_cp03

0xee17,	// (0x0005c0fb) popup_call6_1st_window_g1

0xee1f,	// (0x0005c103) popup_call6_1st_window_g2

0xee27,	// (0x0005c10b) popup_call6_1st_window_g3

0x0002,

0x0164,	// (0x0004d448) popup_call6_1st_window_g

0xee2f,	// (0x0005c113) popup_call6_1st_window_t1

0xee3e,	// (0x0005c122) popup_call6_1st_window_t2

0xee4c,	// (0x0005c130) popup_call6_1st_window_t3

0x0002,

0x016b,	// (0x0004d44f) popup_call6_1st_window_t

0xaa77,	// (0x00057d5b) bg_popup_call2_in_pane_cp04

0xee17,	// (0x0005c0fb) popup_call6_2nd_window_g1

0xee1f,	// (0x0005c103) popup_call6_2nd_window_g2

0xee27,	// (0x0005c10b) popup_call6_2nd_window_g3

0x0002,

0x0164,	// (0x0004d448) popup_call6_2nd_window_g

0xee2f,	// (0x0005c113) popup_call6_2nd_window_t1

0x9876,	// (0x00056b5a) bg_button_pane_cp15

0xee5a,	// (0x0005c13e) cell_call6_btn_pane_g1

0xa534,	// (0x00057818) cell_call6_btn_pane_t1

0x90b4,	// (0x00056398) listscroll_wgtman_pane_ParamLimits

0x90b4,	// (0x00056398) listscroll_wgtman_pane

0x90d5,	// (0x000563b9) wgtman_btn_pane_ParamLimits

0x90d5,	// (0x000563b9) wgtman_btn_pane

0xb29a,	// (0x0005857e) aid_scroll_copy1

0xee63,	// (0x0005c147) list_wgtman_pane

0x9118,	// (0x000563fc) wgtman_btn_pane_g1_ParamLimits

0x9118,	// (0x000563fc) wgtman_btn_pane_g1

0x9144,	// (0x00056428) wgtman_btn_pane_t1_ParamLimits

0x9144,	// (0x00056428) wgtman_btn_pane_t1

0xee6d,	// (0x0005c151) wgtman_btn_pane_t2_ParamLimits

0xee6d,	// (0x0005c151) wgtman_btn_pane_t2

0x0001,

0xfe9d,	// (0x0005d181) wgtman_btn_pane_t_ParamLimits

0xfe9d,	// (0x0005d181) wgtman_btn_pane_t

0x9181,	// (0x00056465) listrow_wgtman_pane_ParamLimits

0x9181,	// (0x00056465) listrow_wgtman_pane

0x9193,	// (0x00056477) listrow_wgtman_pane_g1

0x91a0,	// (0x00056484) listrow_wgtman_pane_g2

0x0001,

0xfea2,	// (0x0005d186) listrow_wgtman_pane_g

0x0fce,	// (0x0004e2b2) listrow_wgtman_pane_t1

0x0fe6,	// (0x0004e2ca) listrow_wgtman_pane_t2

0x0001,

0xfea7,	// (0x0005d18b) listrow_wgtman_pane_t

0x100c,	// (0x0004e2f0) wait_bar_pane_cp09

0xee84,	// (0x0005c168) main_calllock_btn_pane

0xee8e,	// (0x0005c172) main_calllock_pane_g1

0x9876,	// (0x00056b5a) bg_button_pane_cp17

0xee5a,	// (0x0005c13e) main_calllock_btn_pane_g1

0xee9a,	// (0x0005c17e) main_calllock_btn_pane_t1

0x9876,	// (0x00056b5a) main_dialer3_pane

0x9876,	// (0x00056b5a) main_fmrd2_pane

0xcd13,	// (0x00059ff7) main_fs_bigclock_unlock_btn_pane_g1

0x91c6,	// (0x000564aa) main_fs_bigclock_unlock_btn_pane_t1

0x91d4,	// (0x000564b8) area_fmrd2_info_pane_ParamLimits

0x91d4,	// (0x000564b8) area_fmrd2_info_pane

0x91e5,	// (0x000564c9) area_fmrd2_visual_pane_ParamLimits

0x91e5,	// (0x000564c9) area_fmrd2_visual_pane

0x91f3,	// (0x000564d7) fmrd2_indi_pane_ParamLimits

0x91f3,	// (0x000564d7) fmrd2_indi_pane

0x9200,	// (0x000564e4) area_fmrd2_visual_pane_g1

0x9208,	// (0x000564ec) area_fmrd2_visual_pane_t1

0x9218,	// (0x000564fc) area_fmrd2_visual_pane_t2

0x9228,	// (0x0005650c) area_fmrd2_visual_pane_t3

0x0002,

0xfeb1,	// (0x0005d195) area_fmrd2_visual_pane_t

0x9238,	// (0x0005651c) area_fmrd2_info_pane_g1

0x9240,	// (0x00056524) area_fmrd2_info_pane_t1

0x9250,	// (0x00056534) area_fmrd2_info_pane_t2

0x9260,	// (0x00056544) area_fmrd2_info_pane_t3

0x9270,	// (0x00056554) area_fmrd2_info_pane_t4

0x0003,

0xfeb8,	// (0x0005d19c) area_fmrd2_info_pane_t

0x927e,	// (0x00056562) fmrd2_indi_pane_t1

0x928e,	// (0x00056572) fmrd2_indi_pane_t2

0x929e,	// (0x00056582) fmrd2_indi_pane_t3

0x0002,

0xfec1,	// (0x0005d1a5) fmrd2_indi_pane_t

0xe440,	// (0x0005b724) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe440,	// (0x0005b724) list_single_fs_bigclock_indicator_pane_g5

0xe4f1,	// (0x0005b7d5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4f1,	// (0x0005b7d5) list_single_fs_bigclock_indicator_pane_t5

0x89fc,	// (0x00055ce0) aid_cell_bcale_month_pane_ParamLimits

0x89fc,	// (0x00055ce0) aid_cell_bcale_month_pane

0x8a23,	// (0x00055d07) bcale_month_pane_ParamLimits

0x8a23,	// (0x00055d07) bcale_month_pane

0x8a47,	// (0x00055d2b) bcale_preview_pane_ParamLimits

0x8a47,	// (0x00055d2b) bcale_preview_pane

0xec80,	// (0x0005bf64) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9f,	// (0x0005bf83) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9f,	// (0x0005bf83) list_single_fs_bigclock_pane_t2

0x0001,

0x0118,	// (0x0004d3fc) list_single_fs_bigclock_pane_t_ParamLimits

0x0118,	// (0x0004d3fc) list_single_fs_bigclock_pane_t

0x91be,	// (0x000564a2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeac,	// (0x0005d190) main_fs_bigclock_unlock_btn_pane_g

0x92ae,	// (0x00056592) aid_dia3_key_size_ParamLimits

0x92ae,	// (0x00056592) aid_dia3_key_size

0x92bd,	// (0x000565a1) aid_dia3_listrow_size_ParamLimits

0x92bd,	// (0x000565a1) aid_dia3_listrow_size

0x92d2,	// (0x000565b6) dia3_keypad_fun_pane_ParamLimits

0x92d2,	// (0x000565b6) dia3_keypad_fun_pane

0x92ee,	// (0x000565d2) dia3_keypad_num_pane_ParamLimits

0x92ee,	// (0x000565d2) dia3_keypad_num_pane

0x9309,	// (0x000565ed) dia3_listscroll_pane_ParamLimits

0x9309,	// (0x000565ed) dia3_listscroll_pane

0x931c,	// (0x00056600) dia3_numentry_pane_ParamLimits

0x931c,	// (0x00056600) dia3_numentry_pane

0xeea9,	// (0x0005c18d) dia3_list_pane

0xeeb4,	// (0x0005c198) scroll_pane_cp12

0x9876,	// (0x00056b5a) bg_dia3_numentry_pane

0x9330,	// (0x00056614) dia3_numentry_pane_t1

0x933f,	// (0x00056623) cell_dia3_key_num_pane

0x9347,	// (0x0005662b) cell_dia3_key0_fun_pane_ParamLimits

0x9347,	// (0x0005662b) cell_dia3_key0_fun_pane

0x935b,	// (0x0005663f) cell_dia3_key1_fun_pane_ParamLimits

0x935b,	// (0x0005663f) cell_dia3_key1_fun_pane

0x9373,	// (0x00056657) dia3_listrow_pane

0xe193,	// (0x0005b477) bg_dia3_numentry_pane_g1

0x9876,	// (0x00056b5a) bg_button_pane_cp21

0xeebf,	// (0x0005c1a3) cell_dia3_key_num_pane_t1

0xeecd,	// (0x0005c1b1) cell_dia3_key_num_pane_t2

0xeedc,	// (0x0005c1c0) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x0005c1cf) cell_dia3_key_num_pane_t4

0x0003,

0x019d,	// (0x0004d481) cell_dia3_key_num_pane_t

0x9876,	// (0x00056b5a) bg_button_pane_cp19

0x9385,	// (0x00056669) cell_dia3_key0_fun_pane_g1

0x9876,	// (0x00056b5a) bg_button_pane_cp20

0x938d,	// (0x00056671) cell_dia3_key1_fun_pane_g1

0x9395,	// (0x00056679) area_left_week_number_pane

0x93a1,	// (0x00056685) area_top_day_name_pane

0x93b4,	// (0x00056698) frame_month_view_pane

0xeefa,	// (0x0005c1de) grid_month_view_pane

0x93c7,	// (0x000566ab) cell_top_day_name_pane_ParamLimits

0x93c7,	// (0x000566ab) cell_top_day_name_pane

0x93f4,	// (0x000566d8) cell_area_left_week_number_pane_ParamLimits

0x93f4,	// (0x000566d8) cell_area_left_week_number_pane

0x9408,	// (0x000566ec) cell_month_view_pane_ParamLimits

0x9408,	// (0x000566ec) cell_month_view_pane

0xef08,	// (0x0005c1ec) frm_month_g1

0x9435,	// (0x00056719) frm_month_g2

0x9448,	// (0x0005672c) frm_month_g3

0x945b,	// (0x0005673f) frm_month_g4

0x946e,	// (0x00056752) frm_month_g5

0x9481,	// (0x00056765) frm_month_g6

0x9494,	// (0x00056778) frm_month_g7

0xef15,	// (0x0005c1f9) frm_month_g8

0x94a7,	// (0x0005678b) frm_month_g9

0x94b7,	// (0x0005679b) frm_month_g10

0x94c7,	// (0x000567ab) frm_month_g11

0x94d7,	// (0x000567bb) frm_month_g12

0x94e9,	// (0x000567cd) frm_month_g13

0x94fb,	// (0x000567df) frm_month_g14

0x950f,	// (0x000567f3) frm_month_g15

0x9523,	// (0x00056807) frm_month_g16

0x000f,

0xfec8,	// (0x0005d1ac) frm_month_g

0xef22,	// (0x0005c206) cell_top_day_name_pane_t1

0x9537,	// (0x0005681b) cell_area_left_week_number_pane_g1

0x9543,	// (0x00056827) cell_area_left_week_number_pane_t1

0xcf58,	// (0x0005a23c) cell_month_view_pane_g1

0x9556,	// (0x0005683a) cell_month_view_pane_t1

0x9876,	// (0x00056b5a) main_fps_pane

0xe752,	// (0x0005ba36) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x0005ba36) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x0005ba52) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x0005ba52) cmail_ddmenu_btn02_pane_cp2

0x8ce2,	// (0x00055fc6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ce2,	// (0x00055fc6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0005d111) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0005d111) cmail_ddmenu_btn02_pane_g

0x8d00,	// (0x00055fe4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d00,	// (0x00055fe4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0005d116) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0005d116) cmail_ddmenu_btn02_pane_t

0x9569,	// (0x0005684d) fps_text_pane_ParamLimits

0x9569,	// (0x0005684d) fps_text_pane

0x9580,	// (0x00056864) main_fps_pane_g1_ParamLimits

0x9580,	// (0x00056864) main_fps_pane_g1

0x959a,	// (0x0005687e) wait_bar_pane_cp010_ParamLimits

0x959a,	// (0x0005687e) wait_bar_pane_cp010

0x95ab,	// (0x0005688f) fps_text_pane_t1_ParamLimits

0x95ab,	// (0x0005688f) fps_text_pane_t1

0xe527,	// (0x0005b80b) cam4_image_uncrop_pane_g1

0xe530,	// (0x0005b814) cam4_image_uncrop_pane_g2

0x6597,	// (0x0005387b) cam4_image_uncrop_pane_g3

0x65a0,	// (0x00053884) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0005cbce) cam4_image_uncrop_pane_g

0x9373,	// (0x00056657) dia3_listrow_pane_ParamLimits

0x9876,	// (0x00056b5a) main_phob2_pane

0x8793,	// (0x00055a77) cell_tport_appsw_pane_cp02_ParamLimits

0x8793,	// (0x00055a77) cell_tport_appsw_pane_cp02

0x87a7,	// (0x00055a8b) cell_tport_appsw_pane_cp03_ParamLimits

0x87a7,	// (0x00055a8b) cell_tport_appsw_pane_cp03

0x9876,	// (0x00056b5a) phob2_contact_card_pane

0x9876,	// (0x00056b5a) phob2_listscroll_pane

0xef35,	// (0x0005c219) phob2_list_pane

0xef3d,	// (0x0005c221) scroll_pane_cp034

0x95c3,	// (0x000568a7) phob2_cc_data_pane_ParamLimits

0x95c3,	// (0x000568a7) phob2_cc_data_pane

0x95e2,	// (0x000568c6) phob2_cc_listscroll_pane_ParamLimits

0x95e2,	// (0x000568c6) phob2_cc_listscroll_pane

0x9181,	// (0x00056465) list_double_large_graphic_phob2_pane_ParamLimits

0x9181,	// (0x00056465) list_double_large_graphic_phob2_pane

0x9600,	// (0x000568e4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9600,	// (0x000568e4) list_double_large_graphic_phob2_pane_g1

0x101e,	// (0x0004e302) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x101e,	// (0x0004e302) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee9,	// (0x0005d1cd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee9,	// (0x0005d1cd) list_double_large_graphic_phob2_pane_g

0x102a,	// (0x0004e30e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x102a,	// (0x0004e30e) list_double_large_graphic_phob2_pane_t1

0x1040,	// (0x0004e324) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1040,	// (0x0004e324) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeee,	// (0x0005d1d2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeee,	// (0x0005d1d2) list_double_large_graphic_phob2_pane_t

0x9876,	// (0x00056b5a) list_highlight_pane_cp024

0x9616,	// (0x000568fa) phob2_cc_button_pane

0x961e,	// (0x00056902) phob2_cc_data_pane_g1_ParamLimits

0x961e,	// (0x00056902) phob2_cc_data_pane_g1

0x9633,	// (0x00056917) phob2_cc_data_pane_g2_ParamLimits

0x9633,	// (0x00056917) phob2_cc_data_pane_g2

0x0001,

0xfef3,	// (0x0005d1d7) phob2_cc_data_pane_g_ParamLimits

0xfef3,	// (0x0005d1d7) phob2_cc_data_pane_g

0x9643,	// (0x00056927) phob2_cc_data_pane_t1_ParamLimits

0x9643,	// (0x00056927) phob2_cc_data_pane_t1

0x965b,	// (0x0005693f) phob2_cc_data_pane_t2_ParamLimits

0x965b,	// (0x0005693f) phob2_cc_data_pane_t2

0x9673,	// (0x00056957) phob2_cc_data_pane_t3_ParamLimits

0x9673,	// (0x00056957) phob2_cc_data_pane_t3

0x0002,

0xfef8,	// (0x0005d1dc) phob2_cc_data_pane_t_ParamLimits

0xfef8,	// (0x0005d1dc) phob2_cc_data_pane_t

0xef45,	// (0x0005c229) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x0005c229) phob2_cc_list_pane

0xd9bd,	// (0x0005aca1) scroll_pane_cp035_ParamLimits

0xd9bd,	// (0x0005aca1) scroll_pane_cp035

0xa551,	// (0x00057835) bg_button_pane_cp033

0xef51,	// (0x0005c235) phob2_cc_button_pane_g1

0xef5d,	// (0x0005c241) phob2_cc_button_pane_t1

0xef72,	// (0x0005c256) phob2_cc_button_pane_t2

0x0001,

0x01dd,	// (0x0004d4c1) phob2_cc_button_pane_t

0x968b,	// (0x0005696f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x968b,	// (0x0005696f) list_double_large_graphic_phob2_cc_pane

0x96bd,	// (0x000569a1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x96bd,	// (0x000569a1) list_double_large_graphic_phob2_cc_pane_g1

0x1055,	// (0x0004e339) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1055,	// (0x0004e339) list_double_large_graphic_phob2_cc_pane_g2

0x1061,	// (0x0004e345) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1061,	// (0x0004e345) list_double_large_graphic_phob2_cc_pane_g3

0x106d,	// (0x0004e351) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x106d,	// (0x0004e351) list_double_large_graphic_phob2_cc_pane_g4

0x1079,	// (0x0004e35d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1079,	// (0x0004e35d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeff,	// (0x0005d1e3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeff,	// (0x0005d1e3) list_double_large_graphic_phob2_cc_pane_g

0x1085,	// (0x0004e369) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1085,	// (0x0004e369) list_double_large_graphic_phob2_cc_pane_t1

0x10ae,	// (0x0004e392) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10ae,	// (0x0004e392) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff0a,	// (0x0005d1ee) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff0a,	// (0x0005d1ee) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x0005c268) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x0005c268) list_highlight_pane_cp025

0xa551,	// (0x00057835) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x0005c235) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x0005c241) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x0005c256) phob2_cc_button_pane_t2_ParamLimits

0x01dd,	// (0x0004d4c1) phob2_cc_button_pane_t_ParamLimits

0x1320,	// (0x0004e604) popup_wgtman_window

0xd7c3,	// (0x0005aaa7) scroll_pane_cp038

0x90fa,	// (0x000563de) wgtman_btn_pane_cp_01_ParamLimits

0x90fa,	// (0x000563de) wgtman_btn_pane_cp_01

0xef92,	// (0x0005c276) wgtman_content_pane

0xef9b,	// (0x0005c27f) wgtman_heading_pane

0x9876,	// (0x00056b5a) bg_heading_pane_cp02

0xefa4,	// (0x0005c288) wgtman_heading_pane_g1

0xefac,	// (0x0005c290) wgtman_heading_pane_t1

0xefba,	// (0x0005c29e) scroll_pane_cp036

0xefc2,	// (0x0005c2a6) wgtman_list_pane

0xe605,	// (0x0005b8e9) wgtman_list_pane_t1_ParamLimits

0xe605,	// (0x0005b8e9) wgtman_list_pane_t1

0xa28a,	// (0x0005756e) cam4_grid_pane

0x062c,	// (0x0004d910) bg_button_pane_cp015_ParamLimits

0x71c6,	// (0x000544aa) bg_button_pane_cp016_ParamLimits

0x71d9,	// (0x000544bd) bg_button_pane_cp017_ParamLimits

0x0674,	// (0x0004d958) popup_vitu2_query_window_g3_ParamLimits

0x0674,	// (0x0004d958) popup_vitu2_query_window_g3

0x06ef,	// (0x0004d9d3) popup_vitu2_query_window_t6_ParamLimits

0x06ef,	// (0x0004d9d3) popup_vitu2_query_window_t6

0x071a,	// (0x0004d9fe) popup_vitu2_query_window_t7_ParamLimits

0x071a,	// (0x0004d9fe) popup_vitu2_query_window_t7

0xe527,	// (0x0005b80b) cam4_grid_pane_g1

0xe530,	// (0x0005b814) cam4_grid_pane_g2

0xefca,	// (0x0005c2ae) cam4_grid_pane_g3

0xefd3,	// (0x0005c2b7) cam4_grid_pane_g4

0x0003,

0xff0f,	// (0x0005d1f3) cam4_grid_pane_g

0x212f,	// (0x0004f413) aid_placing_vt_slider_lsc_ParamLimits

0x242c,	// (0x0004f710) vidtel_button_pane_ParamLimits

0x242c,	// (0x0004f710) vidtel_button_pane

0x9876,	// (0x00056b5a) bg_button_pane_cp034

0xefde,	// (0x0005c2c2) vidtel_button_pane_g1

0xefe6,	// (0x0005c2ca) vidtel_button_pane_t1

0xd904,	// (0x0005abe8) aid_size_vtel_slider_touch

0xd9bd,	// (0x0005aca1) scroll_pane_cp039

0x7f0c,	// (0x000551f0) ncim_query_button_pane_cp01_ParamLimits

0x7f2b,	// (0x0005520f) ncimui_query_pane_g1_ParamLimits

0xa551,	// (0x00057835) input_focus_pane_cp012_ParamLimits

0xe1d9,	// (0x0005b4bd) ncim_query_entry_pane_t1_ParamLimits

0xd9bd,	// (0x0005aca1) scroll_pane_cp039_ParamLimits

0xb371,	// (0x00058655) navi_pane_bcale_mc_g1

0xb379,	// (0x0005865d) navi_pane_bcale_mc_t1

0xe7a2,	// (0x0005ba86) main_sp_fs_email_pane_g1

0xe7ae,	// (0x0005ba92) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005cfc9) main_sp_fs_email_pane_g

0xea04,	// (0x0005bce8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea04,	// (0x0005bce8) list_single_cale_mrui_row_pane_g3

0x0f91,	// (0x0004e275) list_single_recal_day_pane_g5_event_pane

0xa4d8,	// (0x000577bc) list_single_recal_day_pane_g7

0xeffc,	// (0x0005c2e0) list_recal_day_event_pane_cp01

0xf005,	// (0x0005c2e9) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0005c2f1) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0005c2f9) list_recal_vselct_pane_cp01

0xd914,	// (0x0005abf8) list_recal_day_event_pane_cp01_g1

0xa543,	// (0x00057827) list_recal_day_event_pane_cp01_t1

0xa4e0,	// (0x000577c4) list_single_recal_day_pane_t1_ParamLimits

0xa4f2,	// (0x000577d6) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0005d126) list_single_recal_day_pane_t_ParamLimits

0xa7ba,	// (0x00057a9e) bg_notes_pane_ParamLimits

0xa869,	// (0x00057b4d) list_notes_pane_ParamLimits

0x1661,	// (0x0004e945) scroll_pane_cp06_ParamLimits

0xa88b,	// (0x00057b6f) main_notes_pane_ParamLimits

0xa551,	// (0x00057835) main_welc_pane

0x96e0,	// (0x000569c4) main_welc_body_pane_ParamLimits

0x96e0,	// (0x000569c4) main_welc_body_pane

0x96fd,	// (0x000569e1) main_welc_opti_pane_ParamLimits

0x96fd,	// (0x000569e1) main_welc_opti_pane

0x9751,	// (0x00056a35) main_welc_pane_t1_ParamLimits

0x9751,	// (0x00056a35) main_welc_pane_t1

0x97cb,	// (0x00056aaf) main_welc_body_row_pane_ParamLimits

0x97cb,	// (0x00056aaf) main_welc_body_row_pane

0xe519,	// (0x0005b7fd) main_welc_opti_row_pane_ParamLimits

0xe519,	// (0x0005b7fd) main_welc_opti_row_pane

0xf01f,	// (0x0005c303) main_welc_opti_row_pane_g1

0x97e0,	// (0x00056ac4) main_welc_opti_row_pane_t1

0xf027,	// (0x0005c30b) main_welc_body_row_pane_t1

0xed57,	// (0x0005c03b) popup_notif_wgt_heading_pane

0xed71,	// (0x0005c055) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x0005c062) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x0005c06e) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x0005c07d) list_notif_wgt_row_pane_g3_ParamLimits

0x0147,	// (0x0004d42b) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x0005c08a) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0005c0a0) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0005c0b2) list_notif_wgt_row_pane_t3_ParamLimits

0x014e,	// (0x0004d432) list_notif_wgt_row_pane_t_ParamLimits

0x9193,	// (0x00056477) listrow_wgtman_pane_g1_ParamLimits

0x91a0,	// (0x00056484) listrow_wgtman_pane_g2_ParamLimits

0xfea2,	// (0x0005d186) listrow_wgtman_pane_g_ParamLimits

0x0fce,	// (0x0004e2b2) listrow_wgtman_pane_t1_ParamLimits

0x0fe6,	// (0x0004e2ca) listrow_wgtman_pane_t2_ParamLimits

0xfea7,	// (0x0005d18b) listrow_wgtman_pane_t_ParamLimits

0x100c,	// (0x0004e2f0) wait_bar_pane_cp09_ParamLimits

0x9876,	// (0x00056b5a) bg_popup_heading_pane_cp02

0xf036,	// (0x0005c31a) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0005c322) popup_notif_wgt_heading_pane_t1

0x9876,	// (0x00056b5a) main_vids_pane

0x9876,	// (0x00056b5a) vids_listscroll_pane

0x97ef,	// (0x00056ad3) scroll_pane_cp040

0x9876,	// (0x00056b5a) vids_list_pane

0x97fa,	// (0x00056ade) vids_list_double_pane_ParamLimits

0x97fa,	// (0x00056ade) vids_list_double_pane

0x980b,	// (0x00056aef) vids_list_double_pane_g1

0x9814,	// (0x00056af8) vids_list_double_pane_t1

0x9824,	// (0x00056b08) vids_list_double_pane_t2

0x0001,

0xff26,	// (0x0005d20a) vids_list_double_pane_t

0xa551,	// (0x00057835) main_ncimui_pane_ParamLimits

0x7d42,	// (0x00055026) main_ncimui_pane_g1_ParamLimits

0x7d4e,	// (0x00055032) main_ncimui_pane_g2_ParamLimits

0x7d4e,	// (0x00055032) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0005ceca) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0005ceca) main_ncimui_pane_g

0x9718,	// (0x000569fc) main_welc_pane_g1_ParamLimits

0x9718,	// (0x000569fc) main_welc_pane_g1

0x972d,	// (0x00056a11) main_welc_pane_g2_ParamLimits

0x972d,	// (0x00056a11) main_welc_pane_g2

0x0002,

0xff18,	// (0x0005d1fc) main_welc_pane_g_ParamLimits

0xff18,	// (0x0005d1fc) main_welc_pane_g

0xa7ba,	// (0x00057a9e) listscroll_mce_pane_ParamLimits

0xb4c6,	// (0x000587aa) wait_bar_pane_cp10

0xc8ff,	// (0x00059be3) main_cale_day_pane_ParamLimits

0xc8ff,	// (0x00059be3) main_cale_week_pane_ParamLimits

0xa7ba,	// (0x00057a9e) main_messa_pane_ParamLimits

0x5835,	// (0x00052b19) main_clock2_btn_pane_ParamLimits

0x5835,	// (0x00052b19) main_clock2_btn_pane

0xd0e0,	// (0x0005a3c4) main_clock2_btn_pane_cp01_ParamLimits

0xd0e0,	// (0x0005a3c4) main_clock2_btn_pane_cp01

0xe9d5,	// (0x0005bcb9) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x0005c0e8) main_cf0_pane_g2

0x0001,

0x0155,	// (0x0004d439) main_cf0_pane_g

0x9395,	// (0x00056679) area_left_week_number_pane_ParamLimits

0x93a1,	// (0x00056685) area_top_day_name_pane_ParamLimits

0x93b4,	// (0x00056698) frame_month_view_pane_ParamLimits

0xeefa,	// (0x0005c1de) grid_month_view_pane_ParamLimits

0xef08,	// (0x0005c1ec) frm_month_g1_ParamLimits

0x9435,	// (0x00056719) frm_month_g2_ParamLimits

0x9448,	// (0x0005672c) frm_month_g3_ParamLimits

0x945b,	// (0x0005673f) frm_month_g4_ParamLimits

0x946e,	// (0x00056752) frm_month_g5_ParamLimits

0x9481,	// (0x00056765) frm_month_g6_ParamLimits

0x9494,	// (0x00056778) frm_month_g7_ParamLimits

0xef15,	// (0x0005c1f9) frm_month_g8_ParamLimits

0x94a7,	// (0x0005678b) frm_month_g9_ParamLimits

0x94b7,	// (0x0005679b) frm_month_g10_ParamLimits

0x94c7,	// (0x000567ab) frm_month_g11_ParamLimits

0x94d7,	// (0x000567bb) frm_month_g12_ParamLimits

0x94e9,	// (0x000567cd) frm_month_g13_ParamLimits

0x94fb,	// (0x000567df) frm_month_g14_ParamLimits

0x950f,	// (0x000567f3) frm_month_g15_ParamLimits

0x9523,	// (0x00056807) frm_month_g16_ParamLimits

0xfec8,	// (0x0005d1ac) frm_month_g_ParamLimits

0xef22,	// (0x0005c206) cell_top_day_name_pane_t1_ParamLimits

0x9537,	// (0x0005681b) cell_area_left_week_number_pane_g1_ParamLimits

0x9543,	// (0x00056827) cell_area_left_week_number_pane_t1_ParamLimits

0xcf58,	// (0x0005a23c) cell_month_view_pane_g1_ParamLimits

0x9556,	// (0x0005683a) cell_month_view_pane_t1_ParamLimits

0xa7b2,	// (0x00057a96) main_clock2_btn_pane_g1

0xf04c,	// (0x0005c330) main_clock2_btn_pane_t1

0xa551,	// (0x00057835) listscroll_cmail_pane_ParamLimits

0xe7a2,	// (0x0005ba86) main_sp_fs_email_pane_g1_ParamLimits

0xe7ae,	// (0x0005ba92) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005cfc9) main_sp_fs_email_pane_g_ParamLimits

0xeae3,	// (0x0005bdc7) list_recal_day_pane_ParamLimits

0xeaf4,	// (0x0005bdd8) mian_recal_day_pane_t1

0x0b9e,	// (0x0004de82) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b9e,	// (0x0004de82) list_single_dyc_row_text_pane_t4

0x0be7,	// (0x0004decb) list_single_dyc_row_text_pane_t5_ParamLimits

0x0be7,	// (0x0004decb) list_single_dyc_row_text_pane_t5

0x867e,	// (0x00055962) list_single_dyc_row_text_pane_t6_ParamLimits

0x867e,	// (0x00055962) list_single_dyc_row_text_pane_t6

0x2eb0,	// (0x00050194) aid_mgn_list_cale_time_pane

0xa551,	// (0x00057835) main_gallery2_pane_ParamLimits

0xd0f6,	// (0x0005a3da) main_clock2_pane_cp01_t1

0xd104,	// (0x0005a3e8) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0005caa0) main_clock2_pane_cp01_t

0x19de,	// (0x0004ecc2) cale_week_scroll_pane_g16_ParamLimits

0x19de,	// (0x0004ecc2) cale_week_scroll_pane_g16

0xaa77,	// (0x00057d5b) vorec_slider_pane

0xefe6,	// (0x0005c2ca) vidtel_button_pane_t1_ParamLimits

0x8d6e,	// (0x00056052) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d6e,	// (0x00056052) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d7f,	// (0x00056063) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d7f,	// (0x00056063) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0005d149) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d92,	// (0x00056076) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8da8,	// (0x0005608c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0005d152) main_fs_bigclock_clock_pane_t_ParamLimits

0x5033,	// (0x00052317) main_mup3_lyrics_pane_ParamLimits

0x5033,	// (0x00052317) main_mup3_lyrics_pane

0x985a,	// (0x00056b3e) main_mup3_lyrics_pane_t1_ParamLimits

0x985a,	// (0x00056b3e) main_mup3_lyrics_pane_t1

0x9fdc,	// (0x000572c0) aid_main_mp4_pane_t1_area

0x9fe6,	// (0x000572ca) aid_main_mp4_pane_t2_area

0xa092,	// (0x00057376) main_mp4_pane_g7_ParamLimits

0xa092,	// (0x00057376) main_mp4_pane_g7

0xa09e,	// (0x00057382) main_mp4_pane_g8_ParamLimits

0xa09e,	// (0x00057382) main_mp4_pane_g8

0x6366,	// (0x0005364a) aid_call6_pane_g1_size

0x96a6,	// (0x0005698a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x96a6,	// (0x0005698a) list_double_large_graphic_phob2_other_pane

0xb2a2,	// (0x00058586) list_double_large_graphic_phob2_other_pane_g1

0x9876,	// (0x00056b5a) list_highlight_pane_cp026

0xa551,	// (0x00057835) main_welc_pane_ParamLimits

0x8529,	// (0x0005580d) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8529,	// (0x0005580d) main_sp_fs_ctrlbar_pane_g3

0x8543,	// (0x00055827) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8543,	// (0x00055827) main_sp_fs_ctrlbar_pane_g4

0x8577,	// (0x0005585b) toolbar2_fixed_button_pane_cp01

0x8582,	// (0x00055866) toolbar2_fixed_button_pane_cp02

0x858f,	// (0x00055873) toolbar2_fixed_button_pane_cp03

0x96c9,	// (0x000569ad) list_welc_entry_pane_ParamLimits

0x96c9,	// (0x000569ad) list_welc_entry_pane

0x9742,	// (0x00056a26) main_welc_pane_g3_ParamLimits

0x9742,	// (0x00056a26) main_welc_pane_g3

0x976f,	// (0x00056a53) main_welc_pane_t2_ParamLimits

0x976f,	// (0x00056a53) main_welc_pane_t2

0x9789,	// (0x00056a6d) main_welc_pane_t3_ParamLimits

0x9789,	// (0x00056a6d) main_welc_pane_t3

0x0002,

0xff1f,	// (0x0005d203) main_welc_pane_t_ParamLimits

0xff1f,	// (0x0005d203) main_welc_pane_t

0x97a0,	// (0x00056a84) welc_button_pane_ParamLimits

0x97a0,	// (0x00056a84) welc_button_pane

0x97b7,	// (0x00056a9b) welc_service_logo_pane_ParamLimits

0x97b7,	// (0x00056a9b) welc_service_logo_pane

0xf05a,	// (0x0005c33e) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0005c33e) list_single_welc_entry_pane

0xf06b,	// (0x0005c34f) list_single_welc_entry_pane_g1

0xf073,	// (0x0005c357) list_single_welc_entry_pane_t1

0xf081,	// (0x0005c365) list_single_welc_entry_pane_t2

0x0001,

0xff2b,	// (0x0005d20f) list_single_welc_entry_pane_t

0x9876,	// (0x00056b5a) bg_button_pane_cp035

0xf08f,	// (0x0005c373) welc_button_pane_t1

0xf09d,	// (0x0005c381) welc_service_logo_pane_g1

0xf0a6,	// (0x0005c38a) welc_service_logo_pane_g2

0x0001,

0xff30,	// (0x0005d214) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
