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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006c09e };

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
0x0175,	// (0x0006c213) Screen

0x0181,	// (0x0006c21f) application_window

0x01bd,	// (0x0006c25b) area_bottom_pane_ParamLimits

0x01bd,	// (0x0006c25b) area_bottom_pane

0x01f6,	// (0x0006c294) area_top_pane_ParamLimits

0x01f6,	// (0x0006c294) area_top_pane

0x937f,	// (0x0007541d) call_video_uplink_pane_ParamLimits

0x937f,	// (0x0007541d) call_video_uplink_pane

0x0284,	// (0x0006c322) main_pane_ParamLimits

0x0284,	// (0x0006c322) main_pane

0xc85e,	// (0x000788fc) context_pane

0x389f,	// (0x0006f93d) navi_pane

0x38d1,	// (0x0006f96f) popup_cale_events_window_ParamLimits

0x38d1,	// (0x0006f96f) popup_cale_events_window

0xc871,	// (0x0007890f) popup_mup_playback_window

0x38e9,	// (0x0006f987) signal_pane

0xa21e,	// (0x000762bc) main_browser_pane

0xa413,	// (0x000764b1) main_burst_pane

0x35f5,	// (0x0006f693) main_calc_pane

0xc844,	// (0x000788e2) main_cale_day_pane

0x3609,	// (0x0006f6a7) main_cale_month_pane

0xc844,	// (0x000788e2) main_cale_week_pane

0xa413,	// (0x000764b1) main_call_pane

0x9ef2,	// (0x00075f90) main_call_poc_pane

0xa413,	// (0x000764b1) main_camera_pane

0xa413,	// (0x000764b1) main_chi_dic_pane

0xb1a7,	// (0x00077245) main_clock_pane

0x9ef2,	// (0x00075f90) main_fmradio_pane

0xa413,	// (0x000764b1) main_graph_messa_pane

0x9ef2,	// (0x00075f90) main_help_pane

0xa21e,	// (0x000762bc) main_im_pane

0xa14d,	// (0x000761eb) main_image_pane_ParamLimits

0xa14d,	// (0x000761eb) main_image_pane

0x9ef2,	// (0x00075f90) main_location2_pane

0xa413,	// (0x000764b1) main_location_pane

0xa14d,	// (0x000761eb) main_messa_pane

0x9ef2,	// (0x00075f90) main_mp2_pane

0xa413,	// (0x000764b1) main_mp_pane

0x9ef2,	// (0x00075f90) main_msg_pane

0x9ef2,	// (0x00075f90) main_mup_eq_pane

0x9ef2,	// (0x00075f90) main_mup_pane

0xa21e,	// (0x000762bc) main_notes_pane

0x9ef2,	// (0x00075f90) main_pec_pane

0x9ef2,	// (0x00075f90) main_phob_pane

0x9ef2,	// (0x00075f90) main_pinb_pane

0x9ef2,	// (0x00075f90) main_postcard_pane

0x9ef2,	// (0x00075f90) main_qdial_pane

0xa413,	// (0x000764b1) main_skin_pane

0x9ef2,	// (0x00075f90) main_smil2_pane

0xa413,	// (0x000764b1) main_smil_pane

0xa413,	// (0x000764b1) main_video_pane

0xa413,	// (0x000764b1) main_video_tele_pane

0xa14d,	// (0x000761eb) main_viewer_pane_ParamLimits

0xa14d,	// (0x000761eb) main_viewer_pane

0xa413,	// (0x000764b1) main_vorec_pane

0x365b,	// (0x0006f6f9) popup_blid_sat_info_window_ParamLimits

0x365b,	// (0x0006f6f9) popup_blid_sat_info_window

0x36b3,	// (0x0006f751) popup_dyc_status_message_window_ParamLimits

0x36b3,	// (0x0006f751) popup_dyc_status_message_window

0x36cb,	// (0x0006f769) popup_grid_large_graphic_window_ParamLimits

0x36cb,	// (0x0006f769) popup_grid_large_graphic_window

0x377b,	// (0x0006f819) popup_loc_request_window_ParamLimits

0x377b,	// (0x0006f819) popup_loc_request_window

0x3877,	// (0x0006f915) popup_wml_address_window_ParamLimits

0x3877,	// (0x0006f915) popup_wml_address_window

0x342f,	// (0x0006f4cd) call_muted_g1

0x30e3,	// (0x0006f181) popup_call_audio_conf_window_ParamLimits

0x30e3,	// (0x0006f181) popup_call_audio_conf_window

0x3443,	// (0x0006f4e1) popup_call_audio_first_window_ParamLimits

0x3443,	// (0x0006f4e1) popup_call_audio_first_window

0x34b9,	// (0x0006f557) popup_call_audio_in_window_ParamLimits

0x34b9,	// (0x0006f557) popup_call_audio_in_window

0x34f5,	// (0x0006f593) popup_call_audio_out_window_ParamLimits

0x34f5,	// (0x0006f593) popup_call_audio_out_window

0x352f,	// (0x0006f5cd) popup_call_audio_second_window_ParamLimits

0x352f,	// (0x0006f5cd) popup_call_audio_second_window

0x3585,	// (0x0006f623) popup_call_audio_wait_window_ParamLimits

0x3585,	// (0x0006f623) popup_call_audio_wait_window

0x35ba,	// (0x0006f658) popup_number_entry_window_ParamLimits

0x35ba,	// (0x0006f658) popup_number_entry_window

0x93b5,	// (0x00075453) bg_popup_call_pane_cp05_ParamLimits

0x93b5,	// (0x00075453) bg_popup_call_pane_cp05

0x93d5,	// (0x00075473) popup_number_entry_window_t1

0x93e8,	// (0x00075486) popup_number_entry_window_t2

0x93fa,	// (0x00075498) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007b168) popup_number_entry_window_t

0x940c,	// (0x000754aa) text_title_cp2

0x941f,	// (0x000754bd) bg_popup_call_pane_cp_ParamLimits

0x941f,	// (0x000754bd) bg_popup_call_pane_cp

0x942d,	// (0x000754cb) call_thumbnail_pane

0x9435,	// (0x000754d3) popup_call_audio_in_window_g1_ParamLimits

0x9435,	// (0x000754d3) popup_call_audio_in_window_g1

0x9441,	// (0x000754df) popup_call_audio_in_window_g2_ParamLimits

0x9441,	// (0x000754df) popup_call_audio_in_window_g2

0x944d,	// (0x000754eb) popup_call_audio_in_window_g3_ParamLimits

0x944d,	// (0x000754eb) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007b171) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007b171) popup_call_audio_in_window_g

0x9459,	// (0x000754f7) popup_call_audio_in_window_t1_ParamLimits

0x9459,	// (0x000754f7) popup_call_audio_in_window_t1

0x9475,	// (0x00075513) popup_call_audio_in_window_t2_ParamLimits

0x9475,	// (0x00075513) popup_call_audio_in_window_t2

0x9491,	// (0x0007552f) popup_call_audio_in_window_t3_ParamLimits

0x9491,	// (0x0007552f) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007b178) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007b178) popup_call_audio_in_window_t

0x941f,	// (0x000754bd) bg_popup_call_pane_cp01_ParamLimits

0x941f,	// (0x000754bd) bg_popup_call_pane_cp01

0x942d,	// (0x000754cb) call_thumbnail_pane_cp02

0x94a4,	// (0x00075542) call_type_pane_cp022

0x94ac,	// (0x0007554a) popup_call_audio_out_window_g1_ParamLimits

0x94ac,	// (0x0007554a) popup_call_audio_out_window_g1

0x94be,	// (0x0007555c) popup_call_audio_out_window_g2_ParamLimits

0x94be,	// (0x0007555c) popup_call_audio_out_window_g2

0x94ca,	// (0x00075568) popup_call_audio_out_window_g3_ParamLimits

0x94ca,	// (0x00075568) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007b17f) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007b17f) popup_call_audio_out_window_g

0x94dc,	// (0x0007557a) popup_call_audio_out_window_t1_ParamLimits

0x94dc,	// (0x0007557a) popup_call_audio_out_window_t1

0x94f4,	// (0x00075592) popup_call_audio_out_window_t2_ParamLimits

0x94f4,	// (0x00075592) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007b186) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007b186) popup_call_audio_out_window_t

0x9509,	// (0x000755a7) bg_popup_call_pane_ParamLimits

0x9509,	// (0x000755a7) bg_popup_call_pane

0x0441,	// (0x0006c4df) call_thumbnail_pane_cp_ParamLimits

0x0441,	// (0x0006c4df) call_thumbnail_pane_cp

0x958d,	// (0x0007562b) call_type_pane_cp01_ParamLimits

0x958d,	// (0x0007562b) call_type_pane_cp01

0x95d1,	// (0x0007566f) popup_call_audio_first_window_g1_ParamLimits

0x95d1,	// (0x0007566f) popup_call_audio_first_window_g1

0x961d,	// (0x000756bb) popup_call_audio_first_window_g2_ParamLimits

0x961d,	// (0x000756bb) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007b18b) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007b18b) popup_call_audio_first_window_g

0x9661,	// (0x000756ff) popup_call_audio_first_window_t1_ParamLimits

0x9661,	// (0x000756ff) popup_call_audio_first_window_t1

0x970d,	// (0x000757ab) popup_call_audio_first_window_t4_ParamLimits

0x970d,	// (0x000757ab) popup_call_audio_first_window_t4

0x9ec3,	// (0x00075f61) popup_call_audio_first_window_t5_ParamLimits

0x9ec3,	// (0x00075f61) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007b190) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007b190) popup_call_audio_first_window_t

0x9ef2,	// (0x00075f90) bg_popup_call_pane_cp02

0x9efc,	// (0x00075f9a) call_type_pane_cp023

0x9f04,	// (0x00075fa2) popup_call_audio_wait_window_g1

0x9f0c,	// (0x00075faa) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007b197) popup_call_audio_wait_window_g

0x9f14,	// (0x00075fb2) popup_call_audio_wait_window_t3

0x9f22,	// (0x00075fc0) bg_popup_call_pane_cp03_ParamLimits

0x9f22,	// (0x00075fc0) bg_popup_call_pane_cp03

0x9f82,	// (0x00076020) call_thumbnail_pane_cp011_ParamLimits

0x9f82,	// (0x00076020) call_thumbnail_pane_cp011

0x9f8e,	// (0x0007602c) call_type_pane_cp034_ParamLimits

0x9f8e,	// (0x0007602c) call_type_pane_cp034

0x9fca,	// (0x00076068) popup_call_audio_second_window_g1_ParamLimits

0x9fca,	// (0x00076068) popup_call_audio_second_window_g1

0xa006,	// (0x000760a4) popup_call_audio_second_window_g2_ParamLimits

0xa006,	// (0x000760a4) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007b19c) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007b19c) popup_call_audio_second_window_g

0xa042,	// (0x000760e0) popup_call_audio_second_window_t1_ParamLimits

0xa042,	// (0x000760e0) popup_call_audio_second_window_t1

0xa0c3,	// (0x00076161) popup_call_audio_second_window_t2_ParamLimits

0xa0c3,	// (0x00076161) popup_call_audio_second_window_t2

0xa0f9,	// (0x00076197) popup_call_audio_second_window_t3_ParamLimits

0xa0f9,	// (0x00076197) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007b1a1) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007b1a1) popup_call_audio_second_window_t

0x9ef2,	// (0x00075f90) bg_popup_call_pane_cp04

0xa12f,	// (0x000761cd) list_conf_pane

0xa137,	// (0x000761d5) popup_call_audio_conf_window_t1

0xa145,	// (0x000761e3) call_thumbnail_pane_g1

0xa14d,	// (0x000761eb) bg_pinb_pane_ParamLimits

0xa14d,	// (0x000761eb) bg_pinb_pane

0xa15b,	// (0x000761f9) find_pinb_pane

0xa164,	// (0x00076202) listscroll_pinb_pane_ParamLimits

0xa164,	// (0x00076202) listscroll_pinb_pane

0xa173,	// (0x00076211) pinb_bg_pane_g1

0x0465,	// (0x0006c503) pinb_bg_pane_g2

0x0471,	// (0x0006c50f) pinb_bg_pane_g3

0x047d,	// (0x0006c51b) pinb_bg_pane_g4

0x0489,	// (0x0006c527) pinb_bg_pane_g5

0x0495,	// (0x0006c533) pinb_bg_pane_g6

0x04a0,	// (0x0006c53e) pinb_bg_pane_g7

0x04ab,	// (0x0006c549) pinb_bg_pane_g8

0x04b6,	// (0x0006c554) pinb_bg_pane_g9

0x04c0,	// (0x0006c55e) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007b1a8) pinb_bg_pane_g

0x04dd,	// (0x0006c57b) grid_pinb_pane

0x04e6,	// (0x0006c584) list_pinb_pane

0x04ef,	// (0x0006c58d) scroll_pane_cp01_ParamLimits

0x04ef,	// (0x0006c58d) scroll_pane_cp01

0xa17d,	// (0x0007621b) find_pinb_pane_g1_ParamLimits

0xa17d,	// (0x0007621b) find_pinb_pane_g1

0xa195,	// (0x00076233) find_pinb_pane_t1

0xa1a7,	// (0x00076245) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007b1c2) find_pinb_pane_t

0xa1bc,	// (0x0007625a) input_focus_pane_cp01_ParamLimits

0xa1bc,	// (0x0007625a) input_focus_pane_cp01

0x0501,	// (0x0006c59f) cell_pinb_pane_ParamLimits

0x0501,	// (0x0006c59f) cell_pinb_pane

0x052c,	// (0x0006c5ca) cell_pinb_pane_g1_ParamLimits

0x052c,	// (0x0006c5ca) cell_pinb_pane_g1

0xa1c8,	// (0x00076266) cell_pinb_pane_g2_ParamLimits

0xa1c8,	// (0x00076266) cell_pinb_pane_g2

0xa1d4,	// (0x00076272) cell_pinb_pane_g3_ParamLimits

0xa1d4,	// (0x00076272) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007b1c7) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007b1c7) cell_pinb_pane_g

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp01

0x053f,	// (0x0006c5dd) list_pinb_item_pane_ParamLimits

0x053f,	// (0x0006c5dd) list_pinb_item_pane

0x9ef2,	// (0x00075f90) list_highlight_pane_cp02

0x0552,	// (0x0006c5f0) list_pinb_item_pane_g1_ParamLimits

0x0552,	// (0x0006c5f0) list_pinb_item_pane_g1

0x055f,	// (0x0006c5fd) list_pinb_item_pane_g2_ParamLimits

0x055f,	// (0x0006c5fd) list_pinb_item_pane_g2

0x056b,	// (0x0006c609) list_pinb_item_pane_g3_ParamLimits

0x056b,	// (0x0006c609) list_pinb_item_pane_g3

0x057c,	// (0x0006c61a) list_pinb_item_pane_g4_ParamLimits

0x057c,	// (0x0006c61a) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007b1ce) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007b1ce) list_pinb_item_pane_g

0x0588,	// (0x0006c626) list_pinb_item_pane_t1_ParamLimits

0x0588,	// (0x0006c626) list_pinb_item_pane_t1

0x05bd,	// (0x0006c65b) calc_display_pane

0x05e5,	// (0x0006c683) calc_paper_pane

0x0608,	// (0x0006c6a6) grid_calc_pane

0x9ef2,	// (0x00075f90) bg_list_pane_cp01

0x0636,	// (0x0006c6d4) clock_g1

0x063e,	// (0x0006c6dc) clock_g2

0x0001,

0xf139,	// (0x0007b1d7) clock_g

0x0646,	// (0x0006c6e4) clock_t1_ParamLimits

0x0646,	// (0x0006c6e4) clock_t1

0x065b,	// (0x0006c6f9) clock_t2_ParamLimits

0x065b,	// (0x0006c6f9) clock_t2

0x066d,	// (0x0006c70b) clock_t3_ParamLimits

0x066d,	// (0x0006c70b) clock_t3

0x067f,	// (0x0006c71d) clock_t4_ParamLimits

0x067f,	// (0x0006c71d) clock_t4

0x0691,	// (0x0006c72f) clock_t5_ParamLimits

0x0691,	// (0x0006c72f) clock_t5

0x06a6,	// (0x0006c744) clock_t6_ParamLimits

0x06a6,	// (0x0006c744) clock_t6

0x06b8,	// (0x0006c756) clock_t7_ParamLimits

0x06b8,	// (0x0006c756) clock_t7

0x06ca,	// (0x0006c768) clock_t8_ParamLimits

0x06ca,	// (0x0006c768) clock_t8

0x06de,	// (0x0006c77c) clock_t9_ParamLimits

0x06de,	// (0x0006c77c) clock_t9

0x0008,

0xf13e,	// (0x0007b1dc) clock_t_ParamLimits

0xf13e,	// (0x0007b1dc) clock_t

0xa1e0,	// (0x0007627e) popup_clock_analogue_window_cp02

0xa1e0,	// (0x0007627e) popup_clock_digital_window_cp01

0xa1e8,	// (0x00076286) listscroll_help_pane

0x9ef2,	// (0x00075f90) phob_pre_status_pane

0xa1f2,	// (0x00076290) grid_qdial_pane

0xa14d,	// (0x000761eb) listscroll_mce_pane

0xa14d,	// (0x000761eb) bg_notes_pane

0xa1fc,	// (0x0007629a) list_notes_pane

0x06f2,	// (0x0006c790) scroll_pane_cp06

0xa20a,	// (0x000762a8) bg_calc_paper_pane

0x97a1,	// (0x0007583f) list_calc_pane

0xa21e,	// (0x000762bc) bg_calc_display_pane

0x0706,	// (0x0006c7a4) calc_display_pane_t1

0x0718,	// (0x0006c7b6) calc_display_pane_t2

0x97bb,	// (0x00075859) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007b1ef) calc_display_pane_t

0x072a,	// (0x0006c7c8) cell_calc_pane_ParamLimits

0x072a,	// (0x0006c7c8) cell_calc_pane

0xa22a,	// (0x000762c8) bg_calc_paper_pane_g1

0xa236,	// (0x000762d4) bg_calc_paper_pane_g2

0xa242,	// (0x000762e0) bg_calc_paper_pane_g3

0xa24e,	// (0x000762ec) bg_calc_paper_pane_g4

0xa25a,	// (0x000762f8) bg_calc_paper_pane_g5

0x0761,	// (0x0006c7ff) bg_calc_paper_pane_g6

0x0770,	// (0x0006c80e) bg_calc_paper_pane_g7

0x077f,	// (0x0006c81d) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007b1f6) bg_calc_paper_pane_g

0x0792,	// (0x0006c830) calc_bg_paper_pane_g9

0x07a5,	// (0x0006c843) list_calc_item_pane_ParamLimits

0x07a5,	// (0x0006c843) list_calc_item_pane

0xa266,	// (0x00076304) list_calc_item_pane_g1

0x97cd,	// (0x0007586b) list_calc_item_pane_t1_ParamLimits

0x97cd,	// (0x0007586b) list_calc_item_pane_t1

0x07be,	// (0x0006c85c) list_calc_item_pane_t2_ParamLimits

0x07be,	// (0x0006c85c) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007b207) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007b207) list_calc_item_pane_t

0xa273,	// (0x00076311) cell_calc_pane_g1

0xa27d,	// (0x0007631b) grid_highlight_pane_cp02

0xa29f,	// (0x0007633d) bg_calc_display_pane_g1

0x97df,	// (0x0007587d) bg_calc_display_pane_g2

0xa2a8,	// (0x00076346) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007b211) bg_calc_display_pane_g

0x07f0,	// (0x0006c88e) cell_qdial_pane_ParamLimits

0x07f0,	// (0x0006c88e) cell_qdial_pane

0x0804,	// (0x0006c8a2) cell_qdial_pane_g1_ParamLimits

0x0804,	// (0x0006c8a2) cell_qdial_pane_g1

0x081a,	// (0x0006c8b8) cell_qdial_pane_g2_ParamLimits

0x081a,	// (0x0006c8b8) cell_qdial_pane_g2

0xa2b1,	// (0x0007634f) cell_qdial_pane_g3_ParamLimits

0xa2b1,	// (0x0007634f) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007b218) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007b218) cell_qdial_pane_g

0x0840,	// (0x0006c8de) cell_qdial_pane_t1_ParamLimits

0x0840,	// (0x0006c8de) cell_qdial_pane_t1

0x0858,	// (0x0006c8f6) cell_qdial_pane_t2_ParamLimits

0x0858,	// (0x0006c8f6) cell_qdial_pane_t2

0x086b,	// (0x0006c909) cell_qdial_pane_t3_ParamLimits

0x086b,	// (0x0006c909) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007b221) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007b221) cell_qdial_pane_t

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp04

0xa2bd,	// (0x0007635b) thumbnail_qdial_pane_ParamLimits

0xa2bd,	// (0x0007635b) thumbnail_qdial_pane

0xa319,	// (0x000763b7) list_help_pane

0xa322,	// (0x000763c0) scroll_pane_cp02

0xa32b,	// (0x000763c9) help_list_pane_t1_ParamLimits

0xa32b,	// (0x000763c9) help_list_pane_t1

0x97e9,	// (0x00075887) bg_notes_pane_g2

0x97f1,	// (0x0007588f) bg_notes_pane_g3

0x97f9,	// (0x00075897) notes_bg_pane_g1

0x9801,	// (0x0007589f) notes_bg_pane_g4

0x9809,	// (0x000758a7) notes_bg_pane_g5

0x9811,	// (0x000758af) notes_bg_pane_g6

0x9819,	// (0x000758b7) notes_bg_pane_g7

0x9821,	// (0x000758bf) notes_bg_pane_g8

0x9829,	// (0x000758c7) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007b23f) notes_bg_pane_g

0x087e,	// (0x0006c91c) list_notes_text_pane_ParamLimits

0x087e,	// (0x0006c91c) list_notes_text_pane

0xa349,	// (0x000763e7) list_notes_text_pane_g1

0x0894,	// (0x0006c932) list_notes_text_pane_t1

0x08a2,	// (0x0006c940) listscroll_cale_week_pane

0x08ce,	// (0x0006c96c) bg_cale_heading_pane

0xa36c,	// (0x0007640a) bg_cale_pane_cp01

0x08e6,	// (0x0006c984) cale_week_corner_pane

0x0905,	// (0x0006c9a3) cale_week_day_heading_pane

0x0922,	// (0x0006c9c0) cale_week_scroll_pane_g1

0x0935,	// (0x0006c9d3) cale_week_scroll_pane_g2

0x094d,	// (0x0006c9eb) cale_week_scroll_pane_g3

0x0965,	// (0x0006ca03) cale_week_scroll_pane_g4

0x097d,	// (0x0006ca1b) cale_week_scroll_pane_g5

0x099d,	// (0x0006ca3b) cale_week_scroll_pane_g6

0x09bd,	// (0x0006ca5b) cale_week_scroll_pane_g7

0x09dd,	// (0x0006ca7b) cale_week_scroll_pane_g8

0x0a01,	// (0x0006ca9f) cale_week_scroll_pane_g9

0x0a19,	// (0x0006cab7) cale_week_scroll_pane_g10

0x0a31,	// (0x0006cacf) cale_week_scroll_pane_g11

0x0a49,	// (0x0006cae7) cale_week_scroll_pane_g12

0x0a61,	// (0x0006caff) cale_week_scroll_pane_g13

0x0a61,	// (0x0006caff) cale_week_scroll_pane_g14

0x0a61,	// (0x0006caff) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007b24e) cale_week_scroll_pane_g

0x0a9d,	// (0x0006cb3b) cale_week_time_pane

0x0ac1,	// (0x0006cb5f) grid_cale_week_pane

0xa39b,	// (0x00076439) scroll_pane_cp08

0x0ae7,	// (0x0006cb85) cell_cale_week_pane_ParamLimits

0x0ae7,	// (0x0006cb85) cell_cale_week_pane

0x0b75,	// (0x0006cc13) cale_week_day_heading_pane_t1

0x0bbf,	// (0x0006cc5d) cale_week_day_heading_pane_t2

0x0c0e,	// (0x0006ccac) cale_week_day_heading_pane_t3

0x0c5d,	// (0x0006ccfb) cale_week_day_heading_pane_t4

0x0cac,	// (0x0006cd4a) cale_week_day_heading_pane_t5

0x0d03,	// (0x0006cda1) cale_week_day_heading_pane_t6

0x0d5a,	// (0x0006cdf8) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007b26f) cale_week_day_heading_pane_t

0xa3b8,	// (0x00076456) bg_cale_side_pane

0x0da4,	// (0x0006ce42) cale_week_time_pane_t1

0x0dbe,	// (0x0006ce5c) cale_week_time_pane_t2

0x0dd8,	// (0x0006ce76) cale_week_time_pane_t3

0x0df2,	// (0x0006ce90) cale_week_time_pane_t4

0x0e0c,	// (0x0006ceaa) cale_week_time_pane_t5

0x0e26,	// (0x0006cec4) cale_week_time_pane_t6

0x0e40,	// (0x0006cede) cale_week_time_pane_t7

0x0e5a,	// (0x0006cef8) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007b27e) cale_week_time_pane_t

0x0e7a,	// (0x0006cf18) cell_cale_week_pane_g2

0x0e9e,	// (0x0006cf3c) cell_cale_week_pane_g3_ParamLimits

0x0e9e,	// (0x0006cf3c) cell_cale_week_pane_g3

0xa3c6,	// (0x00076464) grid_highlight_pane_cp07

0xa3ce,	// (0x0007646c) listscroll_gms_pane

0xa3d8,	// (0x00076476) grid_gms_pane

0xa3e1,	// (0x0007647f) listscroll_gms_pane_g1

0xa3e9,	// (0x00076487) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007b28f) listscroll_gms_pane_g

0x0eb6,	// (0x0006cf54) scroll_pane_cp010

0x0ec1,	// (0x0006cf5f) cell_gms_pane_ParamLimits

0x0ec1,	// (0x0006cf5f) cell_gms_pane

0x0ed3,	// (0x0006cf71) cell_gms_pane_g1

0xa3f1,	// (0x0007648f) cell_gms_pane_g2

0xa3f9,	// (0x00076497) cell_gms_pane_g3

0xa402,	// (0x000764a0) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007b294) cell_gms_pane_g

0xa40b,	// (0x000764a9) grid_highlight_pane_cp09

0x33d9,	// (0x0006f477) phob_pre_status_pane_g1

0x33e1,	// (0x0006f47f) phob_pre_status_pane_g2

0x33e9,	// (0x0006f487) phob_pre_status_pane_g3

0x33f1,	// (0x0006f48f) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0007b692) phob_pre_status_pane_g

0x3401,	// (0x0006f49f) phob_pre_status_pane_t1

0x340f,	// (0x0006f4ad) phob_pre_status_pane_t2

0x341f,	// (0x0006f4bd) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0007b69d) phob_pre_status_pane_t

0xa413,	// (0x000764b1) bg_list_pane_cp05

0x0ee3,	// (0x0006cf81) grid_vorec_pane

0x0eeb,	// (0x0006cf89) vorec_t1

0x0ef9,	// (0x0006cf97) vorec_t2

0x0f07,	// (0x0006cfa5) vorec_t3

0x0f15,	// (0x0006cfb3) vorec_t4

0x92ff,	// (0x0007539d) vorec_t5

0x930d,	// (0x000753ab) vorec_t6

0x0004,

0xf1ff,	// (0x0007b29d) vorec_t

0x931b,	// (0x000753b9) wait_bar_pane_cp01

0x0f31,	// (0x0006cfcf) cell_vorec_pane_ParamLimits

0x0f31,	// (0x0006cfcf) cell_vorec_pane

0x9831,	// (0x000758cf) cell_vorec_pane_g1

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp05

0x0f5c,	// (0x0006cffa) cams_zoom_pane

0x0f6b,	// (0x0006d009) image_vga_pane

0x0f85,	// (0x0006d023) main_camera_pane_g1

0x0f97,	// (0x0006d035) main_camera_pane_g2

0x0fa7,	// (0x0006d045) main_camera_pane_g3

0x0fb7,	// (0x0006d055) main_camera_pane_g4

0x0fc7,	// (0x0006d065) main_camera_pane_g5

0x0fd7,	// (0x0006d075) main_camera_pane_g6

0x0fe7,	// (0x0006d085) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007b2a8) main_camera_pane_g

0x0ff7,	// (0x0006d095) main_camera_pane_t1

0x100d,	// (0x0006d0ab) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007b2b9) main_camera_pane_t

0x1047,	// (0x0006d0e5) cams_zoom_pane_cp_ParamLimits

0x1047,	// (0x0006d0e5) cams_zoom_pane_cp

0x106f,	// (0x0006d10d) image_cif_pane_ParamLimits

0x106f,	// (0x0006d10d) image_cif_pane

0x10aa,	// (0x0006d148) image_subqcif_pane

0x10b2,	// (0x0006d150) main_video_pane_g1_ParamLimits

0x10b2,	// (0x0006d150) main_video_pane_g1

0x10d6,	// (0x0006d174) main_video_pane_g2_ParamLimits

0x10d6,	// (0x0006d174) main_video_pane_g2

0x110a,	// (0x0006d1a8) main_video_pane_g3_ParamLimits

0x110a,	// (0x0006d1a8) main_video_pane_g3

0x1138,	// (0x0006d1d6) main_video_pane_g4_ParamLimits

0x1138,	// (0x0006d1d6) main_video_pane_g4

0x1166,	// (0x0006d204) main_video_pane_g5_ParamLimits

0x1166,	// (0x0006d204) main_video_pane_g5

0xa427,	// (0x000764c5) main_video_pane_g6_ParamLimits

0xa427,	// (0x000764c5) main_video_pane_g6

0x0006,

0xf220,	// (0x0007b2be) main_video_pane_g_ParamLimits

0xf220,	// (0x0007b2be) main_video_pane_g

0x118f,	// (0x0006d22d) main_video_pane_t1_ParamLimits

0x118f,	// (0x0006d22d) main_video_pane_t1

0xa441,	// (0x000764df) cams_zoom_pane_g1

0xa44a,	// (0x000764e8) cams_zoom_pane_g2

0xa453,	// (0x000764f1) cams_zoom_pane_g3

0xaa0d,	// (0x00076aab) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007b2cd) cams_zoom_pane_g

0x11ec,	// (0x0006d28a) grid_cams_pane

0x1206,	// (0x0006d2a4) linegrid_cams_pane

0x1219,	// (0x0006d2b7) cell_cams_pane_ParamLimits

0x1219,	// (0x0006d2b7) cell_cams_pane

0xaa16,	// (0x00076ab4) cams_burst_image_pane

0xaa1e,	// (0x00076abc) cell_cams_pane_g1

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp03

0xa273,	// (0x00076311) mp_bg_pane_g1

0x9ef2,	// (0x00075f90) bg_list_pane_cp03

0xc769,	// (0x00078807) bg_mp_pane

0xc771,	// (0x0007880f) grid_mp_pane

0xc779,	// (0x00078817) media_player_g1

0xc781,	// (0x0007881f) media_player_t1

0xc78f,	// (0x0007882d) media_player_t2

0xc79d,	// (0x0007883b) media_player_t3

0xc7ab,	// (0x00078849) media_player_t4

0xc7b9,	// (0x00078857) media_player_t5

0xc7c7,	// (0x00078865) media_player_t6

0xc7d5,	// (0x00078873) media_player_t7

0x0006,

0xf5de,	// (0x0007b67c) media_player_t

0xc7e3,	// (0x00078881) wait_bar_pane_cp02

0xf5c3,	// (0x0007b661) main_usb_pane_t

0x33d0,	// (0x0006f46e) cell_mp_pane

0xa273,	// (0x00076311) cell_mp_pane_g1

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp06

0xaa26,	// (0x00076ac4) grid_skin_colour_pane

0xaa2e,	// (0x00076acc) list_highlight_pane_cp03

0x1350,	// (0x0006d3ee) skin_g1

0xaa36,	// (0x00076ad4) skin_t1

0xaa45,	// (0x00076ae3) skin_t2

0x0001,

0xf264,	// (0x0007b302) skin_t

0x1358,	// (0x0006d3f6) cell_skin_colour_pane_ParamLimits

0x1358,	// (0x0006d3f6) cell_skin_colour_pane

0xaa53,	// (0x00076af1) cell_skin_colour_pane_g1

0x13d1,	// (0x0006d46f) call_video_g1_ParamLimits

0x13d1,	// (0x0006d46f) call_video_g1

0x13ed,	// (0x0006d48b) call_video_g2_ParamLimits

0x13ed,	// (0x0006d48b) call_video_g2

0x0001,

0xf269,	// (0x0007b307) call_video_g_ParamLimits

0xf269,	// (0x0007b307) call_video_g

0x143f,	// (0x0006d4dd) call_video_uplink_pane_cp1_ParamLimits

0x143f,	// (0x0006d4dd) call_video_uplink_pane_cp1

0xaa65,	// (0x00076b03) call_video_uplink_pane_cp2

0x14de,	// (0x0006d57c) video_down_crop_pane_ParamLimits

0x14de,	// (0x0006d57c) video_down_crop_pane

0x15c7,	// (0x0006d665) video_down_pane_ParamLimits

0x15c7,	// (0x0006d665) video_down_pane

0xaa6d,	// (0x00076b0b) video_down_subqcif_pane_ParamLimits

0xaa6d,	// (0x00076b0b) video_down_subqcif_pane

0xaa85,	// (0x00076b23) video_down_subqcif_pane_cp_ParamLimits

0xaa85,	// (0x00076b23) video_down_subqcif_pane_cp

0xaaab,	// (0x00076b49) im_reading_pane_ParamLimits

0xaaab,	// (0x00076b49) im_reading_pane

0x16d5,	// (0x0006d773) im_writing_pane_ParamLimits

0x16d5,	// (0x0006d773) im_writing_pane

0x16eb,	// (0x0006d789) im_reading_pane_t1

0xaac5,	// (0x00076b63) list_im_pane

0xaad6,	// (0x00076b74) scroll_pane_cp07

0x1725,	// (0x0006d7c3) im_writing_pane_t1_ParamLimits

0x1725,	// (0x0006d7c3) im_writing_pane_t1

0xaaef,	// (0x00076b8d) im_writing_pane_t2_ParamLimits

0xaaef,	// (0x00076b8d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007b311) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007b311) im_writing_pane_t

0x9ef2,	// (0x00075f90) input_focus_pane_cp04

0x9ef2,	// (0x00075f90) input_focus_pane_cp05

0x173a,	// (0x0006d7d8) list_im_single_pane_ParamLimits

0x173a,	// (0x0006d7d8) list_im_single_pane

0x174f,	// (0x0006d7ed) list_single_im_pane_t1

0x3390,	// (0x0006f42e) blid_accuracy_pane

0x3398,	// (0x0006f436) blid_compass_pane

0x33a2,	// (0x0006f440) main_location_t1

0x33b2,	// (0x0006f450) main_location_t2

0x33c2,	// (0x0006f460) main_location_t3

0x0002,

0xf5ed,	// (0x0007b68b) main_location_t

0x9ef2,	// (0x00075f90) aid_levels_location

0xa273,	// (0x00076311) blid_accuracy_pane_g1

0xa273,	// (0x00076311) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007b373) blid_accuracy_pane_g

0xab37,	// (0x00076bd5) wml_content_pane

0xab75,	// (0x00076c13) wml_button_pane_ParamLimits

0xab75,	// (0x00076c13) wml_button_pane

0x175e,	// (0x0006d7fc) wml_list_single_large_pane_ParamLimits

0x175e,	// (0x0006d7fc) wml_list_single_large_pane

0x1773,	// (0x0006d811) wml_list_single_medium_pane_ParamLimits

0x1773,	// (0x0006d811) wml_list_single_medium_pane

0x178a,	// (0x0006d828) wml_list_single_small_pane_ParamLimits

0x178a,	// (0x0006d828) wml_list_single_small_pane

0xab89,	// (0x00076c27) wml_selection_box_pane_ParamLimits

0xab89,	// (0x00076c27) wml_selection_box_pane

0xab9c,	// (0x00076c3a) wml_list_single_pane_t1

0xabab,	// (0x00076c49) wml_list_single_medium_pane_t1

0xabba,	// (0x00076c58) wml_list_single_large_pane_t1

0xabc9,	// (0x00076c67) input_focus_pane_cp02_ParamLimits

0xabc9,	// (0x00076c67) input_focus_pane_cp02

0xabdc,	// (0x00076c7a) wml_selection_box_pane_g1

0xabe5,	// (0x00076c83) wml_selection_box_pane_t1_ParamLimits

0xabe5,	// (0x00076c83) wml_selection_box_pane_t1

0xa14d,	// (0x000761eb) bg_wml_button_pane_ParamLimits

0xa14d,	// (0x000761eb) bg_wml_button_pane

0xabfd,	// (0x00076c9b) wml_button_pane_g1

0xac05,	// (0x00076ca3) wml_button_pane_t1

0xabfd,	// (0x00076c9b) wml_button_bg_pane_g1

0xac15,	// (0x00076cb3) wml_button_bg_pane_g2

0xac1d,	// (0x00076cbb) wml_button_bg_pane_g3

0xac25,	// (0x00076cc3) wml_button_bg_pane_g4

0xac2d,	// (0x00076ccb) wml_button_bg_pane_g5

0xac35,	// (0x00076cd3) wml_button_bg_pane_g6

0xac3d,	// (0x00076cdb) wml_button_bg_pane_g7

0xac45,	// (0x00076ce3) wml_button_bg_pane_g8

0xac4d,	// (0x00076ceb) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007b316) wml_button_bg_pane_g

0x17a3,	// (0x0006d841) bg_list_pane_cp02

0xac55,	// (0x00076cf3) mce_header_pane_ParamLimits

0xac55,	// (0x00076cf3) mce_header_pane

0xac6b,	// (0x00076d09) mce_icon_pane

0xac6b,	// (0x00076d09) mce_image_pane

0xac74,	// (0x00076d12) mce_text_pane_ParamLimits

0xac74,	// (0x00076d12) mce_text_pane

0x17ab,	// (0x0006d849) scroll_pane_cp03

0xab6d,	// (0x00076c0b) scroll_pane_cp04

0xac87,	// (0x00076d25) scroll_pane_cp05_ParamLimits

0xac87,	// (0x00076d25) scroll_pane_cp05

0x17b5,	// (0x0006d853) mce_header_field_pane_ParamLimits

0x17b5,	// (0x0006d853) mce_header_field_pane

0x17cc,	// (0x0006d86a) mce_header_field_pane_2_ParamLimits

0x17cc,	// (0x0006d86a) mce_header_field_pane_2

0x17e2,	// (0x0006d880) mce_header_field_pane_3

0x17ea,	// (0x0006d888) list_single_mce_message_pane_ParamLimits

0x17ea,	// (0x0006d888) list_single_mce_message_pane

0x1800,	// (0x0006d89e) list_single_mce_smart_pane_ParamLimits

0x1800,	// (0x0006d89e) list_single_mce_smart_pane

0xac93,	// (0x00076d31) input_focus_pane_cp03

0xac9c,	// (0x00076d3a) list_header_data_pane

0x1821,	// (0x0006d8bf) mce_header_field_pane_t1

0x1831,	// (0x0006d8cf) list_single_mce_header_pane_ParamLimits

0x1831,	// (0x0006d8cf) list_single_mce_header_pane

0xaca4,	// (0x00076d42) list_single_mce_header_pane_t1

0xacb3,	// (0x00076d51) list_single_mce_message_pane_g1

0xacbb,	// (0x00076d59) list_single_mce_message_pane_t1

0x186b,	// (0x0006d909) bg_cale_heading_pane_cp01_ParamLimits

0x186b,	// (0x0006d909) bg_cale_heading_pane_cp01

0xacc9,	// (0x00076d67) bg_cale_pane_cp02_ParamLimits

0xacc9,	// (0x00076d67) bg_cale_pane_cp02

0x189a,	// (0x0006d938) cale_month_corner_pane

0x18b9,	// (0x0006d957) cale_month_day_heading_pane_ParamLimits

0x18b9,	// (0x0006d957) cale_month_day_heading_pane

0x1900,	// (0x0006d99e) cale_month_pane_g1_ParamLimits

0x1900,	// (0x0006d99e) cale_month_pane_g1

0x1924,	// (0x0006d9c2) cale_month_pane_g2_ParamLimits

0x1924,	// (0x0006d9c2) cale_month_pane_g2

0x1954,	// (0x0006d9f2) cale_month_pane_g3_ParamLimits

0x1954,	// (0x0006d9f2) cale_month_pane_g3

0x1990,	// (0x0006da2e) cale_month_pane_g4_ParamLimits

0x1990,	// (0x0006da2e) cale_month_pane_g4

0x19cc,	// (0x0006da6a) cale_month_pane_g5_ParamLimits

0x19cc,	// (0x0006da6a) cale_month_pane_g5

0x1a14,	// (0x0006dab2) cale_month_pane_g6_ParamLimits

0x1a14,	// (0x0006dab2) cale_month_pane_g6

0x1a60,	// (0x0006dafe) cale_month_pane_g7_ParamLimits

0x1a60,	// (0x0006dafe) cale_month_pane_g7

0x1ab0,	// (0x0006db4e) cale_month_pane_g8_ParamLimits

0x1ab0,	// (0x0006db4e) cale_month_pane_g8

0x1b04,	// (0x0006dba2) cale_month_pane_g9_ParamLimits

0x1b04,	// (0x0006dba2) cale_month_pane_g9

0x1b56,	// (0x0006dbf4) cale_month_pane_g10_ParamLimits

0x1b56,	// (0x0006dbf4) cale_month_pane_g10

0x1ba8,	// (0x0006dc46) cale_month_pane_g11_ParamLimits

0x1ba8,	// (0x0006dc46) cale_month_pane_g11

0x1bfa,	// (0x0006dc98) cale_month_pane_g12_ParamLimits

0x1bfa,	// (0x0006dc98) cale_month_pane_g12

0x1c4c,	// (0x0006dcea) cale_month_pane_g13_ParamLimits

0x1c4c,	// (0x0006dcea) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007b329) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007b329) cale_month_pane_g

0x1c9e,	// (0x0006dd3c) cale_month_week_pane

0x1cc2,	// (0x0006dd60) grid_cale_month_pane_ParamLimits

0x1cc2,	// (0x0006dd60) grid_cale_month_pane

0x1d00,	// (0x0006dd9e) cale_month_day_heading_pane_t1

0x1d86,	// (0x0006de24) cale_month_day_heading_pane_t2

0x1e17,	// (0x0006deb5) cale_month_day_heading_pane_t3

0x1ea8,	// (0x0006df46) cale_month_day_heading_pane_t4

0x1f41,	// (0x0006dfdf) cale_month_day_heading_pane_t5

0x1fe2,	// (0x0006e080) cale_month_day_heading_pane_t6

0x2083,	// (0x0006e121) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007b344) cale_month_day_heading_pane_t

0xa3b8,	// (0x00076456) bg_cale_side_pane_cp01

0x212c,	// (0x0006e1ca) cale_month_week_pane_t1

0x2145,	// (0x0006e1e3) cale_month_week_pane_t2

0x215e,	// (0x0006e1fc) cale_month_week_pane_t3

0x2177,	// (0x0006e215) cale_month_week_pane_t4

0x2190,	// (0x0006e22e) cale_month_week_pane_t5

0x21a9,	// (0x0006e247) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007b353) cale_month_week_pane_t

0x21c2,	// (0x0006e260) cell_cale_month_pane_ParamLimits

0x21c2,	// (0x0006e260) cell_cale_month_pane

0x983b,	// (0x000758d9) cell_cale_month_pane_g1

0x231a,	// (0x0006e3b8) cell_cale_month_pane_t1_ParamLimits

0x231a,	// (0x0006e3b8) cell_cale_month_pane_t1

0xa3c6,	// (0x00076464) grid_highlight_pane_cp08

0xa273,	// (0x00076311) main_smil_g1

0x2346,	// (0x0006e3e4) smil_status_pane

0xad08,	// (0x00076da6) smil_text_pane

0xc649,	// (0x000786e7) bg_popup_call3_rect_pane_g8

0xc651,	// (0x000786ef) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007b60c) bg_popup_call3_rect_pane_g

0xc8d8,	// (0x00078976) smil_status_volume_pane_g1

0xad12,	// (0x00076db0) smil_status_pane_t1

0x999b,	// (0x00075a39) volume_smil_pane

0xad29,	// (0x00076dc7) list_smil_text_pane

0x235b,	// (0x0006e3f9) scroll_pane_cp011

0x2366,	// (0x0006e404) smil_text_list_pane_t1_ParamLimits

0x2366,	// (0x0006e404) smil_text_list_pane_t1

0x9861,	// (0x000758ff) aid_volume_smil_ParamLimits

0x9861,	// (0x000758ff) aid_volume_smil

0xa273,	// (0x00076311) smil_volume_pane_g1

0xa273,	// (0x00076311) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007b373) smil_volume_pane_g

0x08a2,	// (0x0006c940) listscroll_cale_day_pane

0xad33,	// (0x00076dd1) bg_cale_pane

0xad4b,	// (0x00076de9) list_cale_pane

0xad6e,	// (0x00076e0c) scroll_pane_cp09

0xad7f,	// (0x00076e1d) cale_bg_pane_g1

0xad87,	// (0x00076e25) cale_bg_pane_g2

0xad8f,	// (0x00076e2d) cale_bg_pane_g3

0xad97,	// (0x00076e35) cale_bg_pane_g4

0xad9f,	// (0x00076e3d) cale_bg_pane_g5

0xada7,	// (0x00076e45) cale_bg_pane_g6

0xadaf,	// (0x00076e4d) cale_bg_pane_g7

0xadb7,	// (0x00076e55) cale_bg_pane_g8

0xadbf,	// (0x00076e5d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007b378) cale_bg_pane_g

0x23b2,	// (0x0006e450) list_cale_time_pane_ParamLimits

0x23b2,	// (0x0006e450) list_cale_time_pane

0xadc7,	// (0x00076e65) list_cale_time_pane_g1_ParamLimits

0xadc7,	// (0x00076e65) list_cale_time_pane_g1

0xadd3,	// (0x00076e71) list_cale_time_pane_g2_ParamLimits

0xadd3,	// (0x00076e71) list_cale_time_pane_g2

0x23c8,	// (0x0006e466) list_cale_time_pane_g3_ParamLimits

0x23c8,	// (0x0006e466) list_cale_time_pane_g3

0x23d6,	// (0x0006e474) list_cale_time_pane_g4_ParamLimits

0x23d6,	// (0x0006e474) list_cale_time_pane_g4

0x23e4,	// (0x0006e482) list_cale_time_pane_g5_ParamLimits

0x23e4,	// (0x0006e482) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007b38b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007b38b) list_cale_time_pane_g

0xaded,	// (0x00076e8b) list_cale_time_pane_t1_ParamLimits

0xaded,	// (0x00076e8b) list_cale_time_pane_t1

0xae15,	// (0x00076eb3) list_cale_time_pane_t2_ParamLimits

0xae15,	// (0x00076eb3) list_cale_time_pane_t2

0x2766,	// (0x0006e804) aid_blid_cardinal_pane

0x27a4,	// (0x0006e842) compass_pane_t4

0xae3d,	// (0x00076edb) list_cale_time_pane_t4_ParamLimits

0xae3d,	// (0x00076edb) list_cale_time_pane_t4

0x27b2,	// (0x0006e850) compass_pane_t5

0x27c0,	// (0x0006e85e) compass_pane_t6

0x27ce,	// (0x0006e86c) compass_pane_t7

0xb2c1,	// (0x0007735f) navi_pane_cc_t1

0xb49e,	// (0x0007753c) aid_phob_thumbnail_center_pane

0x2da6,	// (0x0006ee44) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007b398) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007b398) list_cale_time_pane_t

0x941f,	// (0x000754bd) bg_popup_window_pane_cp02_ParamLimits

0x941f,	// (0x000754bd) bg_popup_window_pane_cp02

0xae65,	// (0x00076f03) heading_pane_cp01_ParamLimits

0xae65,	// (0x00076f03) heading_pane_cp01

0xae71,	// (0x00076f0f) loc_req_pane_ParamLimits

0xae71,	// (0x00076f0f) loc_req_pane

0xae81,	// (0x00076f1f) loc_type_pane_ParamLimits

0xae81,	// (0x00076f1f) loc_type_pane

0xae93,	// (0x00076f31) loc_type_pane_t1_ParamLimits

0xae93,	// (0x00076f31) loc_type_pane_t1

0xaea5,	// (0x00076f43) loc_type_pane_t2_ParamLimits

0xaea5,	// (0x00076f43) loc_type_pane_t2

0xaeb7,	// (0x00076f55) loc_type_pane_t3_ParamLimits

0xaeb7,	// (0x00076f55) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007b39f) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007b39f) loc_type_pane_t

0xaec9,	// (0x00076f67) list_loc_req_pane

0xaed3,	// (0x00076f71) scroll_pane_cp012

0x23f2,	// (0x0006e490) list_single_loc_request_popup_menu_pane_ParamLimits

0x23f2,	// (0x0006e490) list_single_loc_request_popup_menu_pane

0xaede,	// (0x00076f7c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaede,	// (0x00076f7c) list_single_loc_request_popup_menu_pane_g1

0xaeea,	// (0x00076f88) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeea,	// (0x00076f88) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007b3a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007b3a6) list_single_loc_request_popup_menu_pane_g

0xaef6,	// (0x00076f94) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaef6,	// (0x00076f94) list_single_loc_request_popup_menu_pane_t1

0xa14d,	// (0x000761eb) bg_popup_window_pane_cp03_ParamLimits

0xa14d,	// (0x000761eb) bg_popup_window_pane_cp03

0xaf0c,	// (0x00076faa) heading_loc_req_pane_ParamLimits

0xaf0c,	// (0x00076faa) heading_loc_req_pane

0x23ff,	// (0x0006e49d) popup_dyc_status_message_window_g1_ParamLimits

0x23ff,	// (0x0006e49d) popup_dyc_status_message_window_g1

0x2413,	// (0x0006e4b1) popup_dyc_status_message_window_t1_ParamLimits

0x2413,	// (0x0006e4b1) popup_dyc_status_message_window_t1

0x2428,	// (0x0006e4c6) popup_dyc_status_message_window_t2_ParamLimits

0x2428,	// (0x0006e4c6) popup_dyc_status_message_window_t2

0x243d,	// (0x0006e4db) popup_dyc_status_message_window_t3_ParamLimits

0x243d,	// (0x0006e4db) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007b3ab) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007b3ab) popup_dyc_status_message_window_t

0x9ef2,	// (0x00075f90) bg_heading_pane_cp01

0xaf18,	// (0x00076fb6) heading_loc_req_pane_g1

0xaf20,	// (0x00076fbe) heading_loc_req_pane_g2

0xaf28,	// (0x00076fc6) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007b3b2) heading_loc_req_pane_g

0xaf30,	// (0x00076fce) heading_loc_req_pane_t1

0xaf3f,	// (0x00076fdd) bg_popup_sub_pane_cp01_ParamLimits

0xaf3f,	// (0x00076fdd) bg_popup_sub_pane_cp01

0xaf4d,	// (0x00076feb) popup_cale_events_window_g1_ParamLimits

0xaf4d,	// (0x00076feb) popup_cale_events_window_g1

0xaf6d,	// (0x0007700b) popup_cale_events_window_g2_ParamLimits

0xaf6d,	// (0x0007700b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007b3e6) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007b3e6) popup_cale_events_window_g

0xaf8d,	// (0x0007702b) popup_cale_events_window_t1_ParamLimits

0xaf8d,	// (0x0007702b) popup_cale_events_window_t1

0xaf9f,	// (0x0007703d) popup_cale_events_window_t2_ParamLimits

0xaf9f,	// (0x0007703d) popup_cale_events_window_t2

0xafdd,	// (0x0007707b) popup_cale_events_window_t3_ParamLimits

0xafdd,	// (0x0007707b) popup_cale_events_window_t3

0xb017,	// (0x000770b5) popup_cale_events_window_t4_ParamLimits

0xb017,	// (0x000770b5) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007b3eb) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007b3eb) popup_cale_events_window_t

0x2536,	// (0x0006e5d4) call_type_pane

0x2546,	// (0x0006e5e4) popup_call_status_window_g1

0x255a,	// (0x0006e5f8) popup_call_status_window_g2

0x256e,	// (0x0006e60c) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007b3f4) popup_call_status_window_g

0xb04d,	// (0x000770eb) call_type_pane_g1

0xb056,	// (0x000770f4) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007b3fb) call_type_pane_g

0x9ef2,	// (0x00075f90) bg_popup_sub_pane_cp02

0xb05f,	// (0x000770fd) listscroll_popup_wml_pane

0xb067,	// (0x00077105) list_wml_pane

0xb071,	// (0x0007710f) scroll_pane_cp013

0xb07c,	// (0x0007711a) list_single_graphic_popup_wml_pane_ParamLimits

0xb07c,	// (0x0007711a) list_single_graphic_popup_wml_pane

0xa273,	// (0x00076311) list_single_graphic_popup_wml_pane_g1

0xb090,	// (0x0007712e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007b400) list_single_graphic_popup_wml_pane_g

0xb098,	// (0x00077136) list_single_graphic_popup_wml_pane_t1

0xb0ae,	// (0x0007714c) aid_call_pane

0xa145,	// (0x000761e3) popup_clock_analogue_window_g1

0xa145,	// (0x000761e3) popup_clock_analogue_window_g2

0x9883,	// (0x00075921) popup_clock_analogue_window_g3

0x9883,	// (0x00075921) popup_clock_analogue_window_g4

0xa273,	// (0x00076311) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007b405) popup_clock_analogue_window_g

0x988b,	// (0x00075929) popup_clock_analogue_window_t1

0x9899,	// (0x00075937) clock_digital_number_pane_ParamLimits

0x9899,	// (0x00075937) clock_digital_number_pane

0x98a5,	// (0x00075943) clock_digital_number_pane_cp02_ParamLimits

0x98a5,	// (0x00075943) clock_digital_number_pane_cp02

0x98b1,	// (0x0007594f) clock_digital_number_pane_cp03_ParamLimits

0x98b1,	// (0x0007594f) clock_digital_number_pane_cp03

0x98bd,	// (0x0007595b) clock_digital_number_pane_cp04_ParamLimits

0x98bd,	// (0x0007595b) clock_digital_number_pane_cp04

0x98c9,	// (0x00075967) clock_digital_separator_pane_ParamLimits

0x98c9,	// (0x00075967) clock_digital_separator_pane

0x98d5,	// (0x00075973) popup_clock_digital_window_t1

0xa273,	// (0x00076311) clock_digital_number_pane_g1

0xa273,	// (0x00076311) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007b373) clock_digital_number_pane_g

0xa273,	// (0x00076311) clock_digital_separator_pane_g1

0xa273,	// (0x00076311) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007b373) clock_digital_separator_pane_g

0x9ef2,	// (0x00075f90) bg_popup_window_pane_cp04

0xb0b6,	// (0x00077154) heading_pane_cp03

0xb0be,	// (0x0007715c) listscroll_popup_gms_pane

0xb0c6,	// (0x00077164) grid_large_graphic_popup_pane

0xb0d0,	// (0x0007716e) listscroll_popup_gms_pane_g1

0xb0d8,	// (0x00077176) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007b410) listscroll_popup_gms_pane_g

0xab6d,	// (0x00076c0b) scroll_pane_cp014

0x257d,	// (0x0006e61b) cell_large_graphic_popup_pane_ParamLimits

0x257d,	// (0x0006e61b) cell_large_graphic_popup_pane

0x2595,	// (0x0006e633) cell_large_graphic_popup_pane_g1_ParamLimits

0x2595,	// (0x0006e633) cell_large_graphic_popup_pane_g1

0xb0e0,	// (0x0007717e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0e0,	// (0x0007717e) cell_large_graphic_popup_pane_g2

0xb0ec,	// (0x0007718a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0ec,	// (0x0007718a) cell_large_graphic_popup_pane_g3

0xb0f9,	// (0x00077197) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0f9,	// (0x00077197) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007b415) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007b415) cell_large_graphic_popup_pane_g

0xb109,	// (0x000771a7) grid_highlight_pane_cp010

0xa273,	// (0x00076311) bg_popup_call_pane_g1

0xb113,	// (0x000771b1) list_single_graphic_popup_conf_pane_ParamLimits

0xb113,	// (0x000771b1) list_single_graphic_popup_conf_pane

0xb126,	// (0x000771c4) list_highlight_pane_cp01

0xb12f,	// (0x000771cd) list_single_graphic_popup_conf_pane_g1

0xb137,	// (0x000771d5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007b41e) list_single_graphic_popup_conf_pane_g

0xb13f,	// (0x000771dd) list_single_graphic_popup_conf_pane_t1

0xb14d,	// (0x000771eb) linegrid_cams_pane_g1

0x25a1,	// (0x0006e63f) linegrid_cams_pane_g2

0xa3f9,	// (0x00076497) linegrid_cams_pane_g3

0xb156,	// (0x000771f4) linegrid_cams_pane_g4

0x25aa,	// (0x0006e648) linegrid_cams_pane_g5

0x25b3,	// (0x0006e651) linegrid_cams_pane_g6

0xa402,	// (0x000764a0) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007b423) linegrid_cams_pane_g

0xb15f,	// (0x000771fd) popup_clock_analogue_window

0xb15f,	// (0x000771fd) popup_clock_digital_window

0x9ef2,	// (0x00075f90) popup_phob_thumbnail_window

0xa273,	// (0x00076311) call_video_uplink_pane_g1

0xb168,	// (0x00077206) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007b432) call_video_uplink_pane_g

0xb170,	// (0x0007720e) video_uplink_pane

0xb178,	// (0x00077216) mce_image_pane_g1

0x25be,	// (0x0006e65c) mce_image_pane_g2

0x25c6,	// (0x0006e664) mce_image_pane_g3

0x25ce,	// (0x0006e66c) mce_image_pane_g4

0x25d8,	// (0x0006e676) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007b437) mce_image_pane_g

0xb182,	// (0x00077220) control_top_pane_stacon_cp01_ParamLimits

0xb182,	// (0x00077220) control_top_pane_stacon_cp01

0xb196,	// (0x00077234) uni_indicator_pane_stacon_cp01_ParamLimits

0xb196,	// (0x00077234) uni_indicator_pane_stacon_cp01

0xb1a7,	// (0x00077245) bg_popup_sub_pane_cp03

0x25e0,	// (0x0006e67e) chi_dic_find_pane

0x25e8,	// (0x0006e686) listscroll_chi_dic_pane

0x25f1,	// (0x0006e68f) main_pane_chidic_g1

0x2604,	// (0x0006e6a2) chi_dic_find_pane_t1

0xb1b1,	// (0x0007724f) find_chidic_pane

0xb1ba,	// (0x00077258) chi_dic_list_pane_ParamLimits

0xb1ba,	// (0x00077258) chi_dic_list_pane

0xb1cb,	// (0x00077269) scroll_pane_cp020

0x2612,	// (0x0006e6b0) find_chidic_pane_t1

0x9ef2,	// (0x00075f90) input_focus_pane_cp06

0x2621,	// (0x0006e6bf) list_chi_dic_pane_ParamLimits

0x2621,	// (0x0006e6bf) list_chi_dic_pane

0x2633,	// (0x0006e6d1) list_chi_dic_pane_t1_ParamLimits

0x2633,	// (0x0006e6d1) list_chi_dic_pane_t1

0x9ef2,	// (0x00075f90) list_highlight_pane_cp020

0xb1d3,	// (0x00077271) bg_cale_heading_pane_g1

0x2646,	// (0x0006e6e4) bg_cale_heading_pane_g2

0x264e,	// (0x0006e6ec) bg_cale_heading_pane_g3

0x2656,	// (0x0006e6f4) bg_cale_heading_pane_g4

0x2660,	// (0x0006e6fe) bg_cale_heading_pane_g5

0x266a,	// (0x0006e708) bg_cale_heading_pane_g6

0x2672,	// (0x0006e710) bg_cale_heading_pane_g7

0x267a,	// (0x0006e718) bg_cale_heading_pane_g8

0x2684,	// (0x0006e722) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007b442) bg_cale_heading_pane_g

0xb1d3,	// (0x00077271) bg_cale_side_pane_g1

0x268e,	// (0x0006e72c) bg_cale_side_pane_g2

0x2696,	// (0x0006e734) bg_cale_side_pane_g3

0x269e,	// (0x0006e73c) bg_cale_side_pane_g4

0x26a6,	// (0x0006e744) bg_cale_side_pane_g5

0x26ae,	// (0x0006e74c) bg_cale_side_pane_g6

0x26b6,	// (0x0006e754) bg_cale_side_pane_g7

0x26be,	// (0x0006e75c) bg_cale_side_pane_g8

0x26c6,	// (0x0006e764) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007b455) bg_cale_side_pane_g

0x26ce,	// (0x0006e76c) popup_call_status_window_ParamLimits

0x26ce,	// (0x0006e76c) popup_call_status_window

0xb1db,	// (0x00077279) stacon_top_pane

0xb1e3,	// (0x00077281) status_pane_ParamLimits

0xb1e3,	// (0x00077281) status_pane

0xb1f8,	// (0x00077296) status_small_pane

0xb200,	// (0x0007729e) control_pane

0x9ef2,	// (0x00075f90) stacon_bottom_pane

0xb208,	// (0x000772a6) list_single_mce_smart_pane_t1_ParamLimits

0xb208,	// (0x000772a6) list_single_mce_smart_pane_t1

0xb21b,	// (0x000772b9) list_single_mce_smart_pane_t2_ParamLimits

0xb21b,	// (0x000772b9) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007b468) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007b468) list_single_mce_smart_pane_t

0x2715,	// (0x0006e7b3) compass_pane

0x271e,	// (0x0006e7bc) main_location2_pane_t1

0x2730,	// (0x0006e7ce) main_location2_pane_t2

0x2742,	// (0x0006e7e0) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007b46d) main_location2_pane_t

0xb23a,	// (0x000772d8) compass_pane_g1_ParamLimits

0xb23a,	// (0x000772d8) compass_pane_g1

0x2786,	// (0x0006e824) compass_pane_t1

0x2795,	// (0x0006e833) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007b476) compass_pane_t

0x27dc,	// (0x0006e87a) text_secondary_cp61

0xb2b8,	// (0x00077356) navi_pane_cams_g5

0xb334,	// (0x000773d2) navi_pane_im_t1

0xb342,	// (0x000773e0) navi_pane_mp_g1_ParamLimits

0xb342,	// (0x000773e0) navi_pane_mp_g1

0xb356,	// (0x000773f4) navi_pane_mp_g2_ParamLimits

0xb356,	// (0x000773f4) navi_pane_mp_g2

0xb362,	// (0x00077400) navi_pane_mp_g3_ParamLimits

0xb362,	// (0x00077400) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007b48a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007b48a) navi_pane_mp_g

0xb36e,	// (0x0007740c) navi_pane_mp_t1

0xb37c,	// (0x0007741a) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007b491) navi_pane_mp_t

0xb3e7,	// (0x00077485) navi_pane_vt_g1

0xb36e,	// (0x0007740c) navi_pane_vt_t1

0xb3ef,	// (0x0007748d) navi_slider_pane

0xa413,	// (0x000764b1) zooming_pane

0xb3ff,	// (0x0007749d) navi_slider_pane_g1

0x98f2,	// (0x00075990) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007b498) navi_slider_pane_g

0xb423,	// (0x000774c1) aid_levels_zoom

0xb42b,	// (0x000774c9) zooming_pane_g1

0xb433,	// (0x000774d1) zooming_pane_g2

0xb433,	// (0x000774d1) zooming_pane_g3

0x0002,

0xf409,	// (0x0007b4a7) zooming_pane_g

0xb43b,	// (0x000774d9) level_10_zoom

0xb444,	// (0x000774e2) level_11_zoom

0xb44d,	// (0x000774eb) level_1_zoom

0xb456,	// (0x000774f4) level_2_zoom

0xb45f,	// (0x000774fd) level_3_zoom

0xb468,	// (0x00077506) level_4_zoom

0xb471,	// (0x0007750f) level_5_zoom

0xb47a,	// (0x00077518) level_6_zoom

0xb483,	// (0x00077521) level_7_zoom

0xb48c,	// (0x0007752a) level_8_zoom

0xb495,	// (0x00077533) level_9_zoom

0xb4a6,	// (0x00077544) popup_phob_thumbnail_window_g1

0xb4ae,	// (0x0007754c) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007b4ae) popup_phob_thumbnail_window_g

0xc7eb,	// (0x00078889) level_1_location

0xc7f3,	// (0x00078891) level_2_location

0xc7fb,	// (0x00078899) level_3_location

0xc803,	// (0x000788a1) level_4_location

0xa413,	// (0x000764b1) level_5_location

0x282d,	// (0x0006e8cb) mce_icon_pane_g1

0x2837,	// (0x0006e8d5) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007b4b3) mce_icon_pane_g

0x283f,	// (0x0006e8dd) main_mup_pane_g1_ParamLimits

0x283f,	// (0x0006e8dd) main_mup_pane_g1

0x2855,	// (0x0006e8f3) main_mup_pane_g2_ParamLimits

0x2855,	// (0x0006e8f3) main_mup_pane_g2

0x2867,	// (0x0006e905) main_mup_pane_g3_ParamLimits

0x2867,	// (0x0006e905) main_mup_pane_g3

0x2879,	// (0x0006e917) main_mup_pane_g4_ParamLimits

0x2879,	// (0x0006e917) main_mup_pane_g4

0x2891,	// (0x0006e92f) main_mup_pane_g5_ParamLimits

0x2891,	// (0x0006e92f) main_mup_pane_g5

0x28ad,	// (0x0006e94b) main_mup_pane_g6_ParamLimits

0x28ad,	// (0x0006e94b) main_mup_pane_g6

0x28c5,	// (0x0006e963) main_mup_pane_g7_ParamLimits

0x28c5,	// (0x0006e963) main_mup_pane_g7

0x28dd,	// (0x0006e97b) main_mup_pane_g8_ParamLimits

0x28dd,	// (0x0006e97b) main_mup_pane_g8

0x28f5,	// (0x0006e993) main_mup_pane_g9_ParamLimits

0x28f5,	// (0x0006e993) main_mup_pane_g9

0x290f,	// (0x0006e9ad) main_mup_pane_g10_ParamLimits

0x290f,	// (0x0006e9ad) main_mup_pane_g10

0x2929,	// (0x0006e9c7) main_mup_pane_g11_ParamLimits

0x2929,	// (0x0006e9c7) main_mup_pane_g11

0x293d,	// (0x0006e9db) main_mup_pane_g12_ParamLimits

0x293d,	// (0x0006e9db) main_mup_pane_g12

0x2953,	// (0x0006e9f1) main_mup_pane_g13_ParamLimits

0x2953,	// (0x0006e9f1) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007b4b8) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007b4b8) main_mup_pane_g

0x2967,	// (0x0006ea05) main_mup_pane_t1_ParamLimits

0x2967,	// (0x0006ea05) main_mup_pane_t1

0x2981,	// (0x0006ea1f) main_mup_pane_t2_ParamLimits

0x2981,	// (0x0006ea1f) main_mup_pane_t2

0x2999,	// (0x0006ea37) main_mup_pane_t3_ParamLimits

0x2999,	// (0x0006ea37) main_mup_pane_t3

0x29b1,	// (0x0006ea4f) main_mup_pane_t4_ParamLimits

0x29b1,	// (0x0006ea4f) main_mup_pane_t4

0x29cf,	// (0x0006ea6d) main_mup_pane_t5_ParamLimits

0x29cf,	// (0x0006ea6d) main_mup_pane_t5

0x29e4,	// (0x0006ea82) main_mup_pane_t6_ParamLimits

0x29e4,	// (0x0006ea82) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007b4d3) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007b4d3) main_mup_pane_t

0x29f6,	// (0x0006ea94) mup_progress_pane_ParamLimits

0x29f6,	// (0x0006ea94) mup_progress_pane

0x2a02,	// (0x0006eaa0) mup_visualizer_pane_ParamLimits

0x2a02,	// (0x0006eaa0) mup_visualizer_pane

0x2a36,	// (0x0006ead4) mup_volume_pane_ParamLimits

0x2a36,	// (0x0006ead4) mup_volume_pane

0xb4b6,	// (0x00077554) mup_visualizer_pane_g1_ParamLimits

0xb4b6,	// (0x00077554) mup_visualizer_pane_g1

0xb4b6,	// (0x00077554) mup_visualizer_pane_g2_ParamLimits

0xb4b6,	// (0x00077554) mup_visualizer_pane_g2

0xb23a,	// (0x000772d8) mup_visualizer_pane_g3_ParamLimits

0xb23a,	// (0x000772d8) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007b4e0) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007b4e0) mup_visualizer_pane_g

0xa273,	// (0x00076311) mup_volume_pane_g1

0xb4cc,	// (0x0007756a) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007b4e7) mup_volume_pane_g

0xa273,	// (0x00076311) mup_progress_pane_g1

0xb4d5,	// (0x00077573) mup_progress_pane_g2

0xb4de,	// (0x0007757c) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007b4ec) mup_progress_pane_g

0x9ef2,	// (0x00075f90) bg_popup_window_pane_cp05

0xb4e7,	// (0x00077585) heading_pane_cp02_ParamLimits

0xb4e7,	// (0x00077585) heading_pane_cp02

0xb501,	// (0x0007759f) list_popup_blid_pane

0xb509,	// (0x000775a7) list_blid_sat_info_pane_ParamLimits

0xb509,	// (0x000775a7) list_blid_sat_info_pane

0xb51c,	// (0x000775ba) list_blid_sat_info_pane_g1

0xb524,	// (0x000775c2) list_blid_sat_info_pane_t1

0x2b4c,	// (0x0006ebea) mup_equalizer_pane_ParamLimits

0x2b4c,	// (0x0006ebea) mup_equalizer_pane

0x2b65,	// (0x0006ec03) mup_equalizer_pane_cp1_ParamLimits

0x2b65,	// (0x0006ec03) mup_equalizer_pane_cp1

0x2b82,	// (0x0006ec20) mup_equalizer_pane_cp2_ParamLimits

0x2b82,	// (0x0006ec20) mup_equalizer_pane_cp2

0x2b9f,	// (0x0006ec3d) mup_equalizer_pane_cp3_ParamLimits

0x2b9f,	// (0x0006ec3d) mup_equalizer_pane_cp3

0x2bc0,	// (0x0006ec5e) mup_equalizer_pane_cp4_ParamLimits

0x2bc0,	// (0x0006ec5e) mup_equalizer_pane_cp4

0x2be1,	// (0x0006ec7f) mup_equalizer_pane_cp5

0x2bf5,	// (0x0006ec93) mup_equalizer_pane_cp6

0x2c09,	// (0x0006eca7) mup_equalizer_pane_cp7

0xc6c9,	// (0x00078767) bg_popup_call_poc_act_pane_g9

0xc6d1,	// (0x0007876f) bg_popup_call_poc_act_pane_g10

0xc6d9,	// (0x00078777) bg_popup_call_poc_act_pane_g11

0x000a,

0xa14d,	// (0x000761eb) mup_scale_pane

0xa273,	// (0x00076311) mup_scale_pane_g1

0xb532,	// (0x000775d0) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007b508) mup_scale_pane_g

0xb556,	// (0x000775f4) msg_data_pane

0xb55e,	// (0x000775fc) scroll_pane_cp017

0x2c2f,	// (0x0006eccd) bg_list_pane_cp04_ParamLimits

0x2c2f,	// (0x0006eccd) bg_list_pane_cp04

0xb566,	// (0x00077604) msg_data_pane_g1

0x2c47,	// (0x0006ece5) msg_data_pane_g2

0x2c4f,	// (0x0006eced) msg_data_pane_g3

0x2c57,	// (0x0006ecf5) msg_data_pane_g4

0x2c5f,	// (0x0006ecfd) msg_data_pane_g5

0x2c67,	// (0x0006ed05) msg_data_pane_g6

0x2c6f,	// (0x0006ed0d) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007b517) msg_data_pane_g

0x2c77,	// (0x0006ed15) msg_text_pane_ParamLimits

0x2c77,	// (0x0006ed15) msg_text_pane

0x2c9e,	// (0x0006ed3c) qrid_highlight_pane_cp011_ParamLimits

0x2c9e,	// (0x0006ed3c) qrid_highlight_pane_cp011

0x9ef2,	// (0x00075f90) msg_body_pane

0x9ef2,	// (0x00075f90) msg_header_pane

0xb577,	// (0x00077615) input_focus_pane_cp07

0xa464,	// (0x00076502) msg_header_pane_t1_ParamLimits

0xa464,	// (0x00076502) msg_header_pane_t1

0xa476,	// (0x00076514) msg_header_pane_t2_ParamLimits

0xa476,	// (0x00076514) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007b52b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007b52b) msg_header_pane_t

0xb58c,	// (0x0007762a) msg_body_pane_g1

0xa488,	// (0x00076526) msg_body_pane_t1_ParamLimits

0xa488,	// (0x00076526) msg_body_pane_t1

0xa4b9,	// (0x00076557) msg_body_pane_t2_ParamLimits

0xa4b9,	// (0x00076557) msg_body_pane_t2

0xa4cb,	// (0x00076569) msg_body_pane_t3_ParamLimits

0xa4cb,	// (0x00076569) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007b530) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007b530) msg_body_pane_t

0x2cfc,	// (0x0006ed9a) main_viewer_pane_g1_ParamLimits

0x2cfc,	// (0x0006ed9a) main_viewer_pane_g1

0x2d0a,	// (0x0006eda8) main_viewer_pane_g2_ParamLimits

0x2d0a,	// (0x0006eda8) main_viewer_pane_g2

0x2d18,	// (0x0006edb6) main_viewer_pane_g3_ParamLimits

0x2d18,	// (0x0006edb6) main_viewer_pane_g3

0x2d27,	// (0x0006edc5) main_viewer_pane_g4_ParamLimits

0x2d27,	// (0x0006edc5) main_viewer_pane_g4

0x991c,	// (0x000759ba) main_viewer_pane_g5_ParamLimits

0x991c,	// (0x000759ba) main_viewer_pane_g5

0x991c,	// (0x000759ba) main_viewer_pane_g7_ParamLimits

0x991c,	// (0x000759ba) main_viewer_pane_g7

0xaede,	// (0x00076f7c) main_viewer_pane_g8_ParamLimits

0xaede,	// (0x00076f7c) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007b540) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007b540) main_viewer_pane_g

0xb594,	// (0x00077632) viewer_content_pane_ParamLimits

0xb594,	// (0x00077632) viewer_content_pane

0x2d63,	// (0x0006ee01) main_postcard_pane_g1_ParamLimits

0x2d63,	// (0x0006ee01) main_postcard_pane_g1

0x2d79,	// (0x0006ee17) main_postcard_pane_g2_ParamLimits

0x2d79,	// (0x0006ee17) main_postcard_pane_g2

0x2d8f,	// (0x0006ee2d) main_postcard_pane_g3_ParamLimits

0x2d8f,	// (0x0006ee2d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007b551) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007b551) main_postcard_pane_g

0x2da6,	// (0x0006ee44) main_postcard_pane_g4

0xc8eb,	// (0x00078989) smil_status_volume_pane_g2

0x2de9,	// (0x0006ee87) postcard_pane_ParamLimits

0x2de9,	// (0x0006ee87) postcard_pane

0xb5a2,	// (0x00077640) postcard_pane_g1_ParamLimits

0xb5a2,	// (0x00077640) postcard_pane_g1

0x2e2b,	// (0x0006eec9) postcard_pane_g2_ParamLimits

0x2e2b,	// (0x0006eec9) postcard_pane_g2

0x2e37,	// (0x0006eed5) postcard_pane_g3_ParamLimits

0x2e37,	// (0x0006eed5) postcard_pane_g3

0xb5b0,	// (0x0007764e) postcard_pane_g4_ParamLimits

0xb5b0,	// (0x0007764e) postcard_pane_g4

0x2e43,	// (0x0006eee1) postcard_pane_g5_ParamLimits

0x2e43,	// (0x0006eee1) postcard_pane_g5

0x2e58,	// (0x0006eef6) postcard_pane_g6_ParamLimits

0x2e58,	// (0x0006eef6) postcard_pane_g6

0xb5a2,	// (0x00077640) postcard_pane_g7_ParamLimits

0xb5a2,	// (0x00077640) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007b55e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007b55e) postcard_pane_g

0x2e6c,	// (0x0006ef0a) main_mp2_pane_g1_ParamLimits

0x2e6c,	// (0x0006ef0a) main_mp2_pane_g1

0x2e78,	// (0x0006ef16) main_mp2_pane_g2_ParamLimits

0x2e78,	// (0x0006ef16) main_mp2_pane_g2

0x2e84,	// (0x0006ef22) main_mp2_pane_g3_ParamLimits

0x2e84,	// (0x0006ef22) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007b56d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007b56d) main_mp2_pane_g

0x2e90,	// (0x0006ef2e) main_mp2_pane_t1_ParamLimits

0x2e90,	// (0x0006ef2e) main_mp2_pane_t1

0x2ea5,	// (0x0006ef43) main_mp2_pane_t2_ParamLimits

0x2ea5,	// (0x0006ef43) main_mp2_pane_t2

0x2eb7,	// (0x0006ef55) main_mp2_pane_t3_ParamLimits

0x2eb7,	// (0x0006ef55) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007b574) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007b574) main_mp2_pane_t

0xb5be,	// (0x0007765c) pec_content_pane_ParamLimits

0xb5be,	// (0x0007765c) pec_content_pane

0xab6d,	// (0x00076c0b) scroll_pane_cp015

0xb5d0,	// (0x0007766e) pec_attribute_pane_ParamLimits

0xb5d0,	// (0x0007766e) pec_attribute_pane

0x2ec9,	// (0x0006ef67) pec_content_pane_g1_ParamLimits

0x2ec9,	// (0x0006ef67) pec_content_pane_g1

0xb5e0,	// (0x0007767e) pec_content_pane_t1_ParamLimits

0xb5e0,	// (0x0007767e) pec_content_pane_t1

0xb5f2,	// (0x00077690) pec_content_pane_t2_ParamLimits

0xb5f2,	// (0x00077690) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007b57b) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007b57b) pec_content_pane_t

0x2ed5,	// (0x0006ef73) list_single_graphic_pane_cp01_ParamLimits

0x2ed5,	// (0x0006ef73) list_single_graphic_pane_cp01

0xa14d,	// (0x000761eb) bg_popup_sub_pane_cp04

0xb604,	// (0x000776a2) popup_mup_playback_window_g1

0xb610,	// (0x000776ae) popup_mup_playback_window_t1

0xb625,	// (0x000776c3) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007b580) popup_mup_playback_window_t

0xb65c,	// (0x000776fa) main_image_pane_g1_ParamLimits

0xb65c,	// (0x000776fa) main_image_pane_g1

0xb69f,	// (0x0007773d) scroll_pane_cp018_ParamLimits

0xb69f,	// (0x0007773d) scroll_pane_cp018

0xb6b7,	// (0x00077755) scroll_pane_cp016_ParamLimits

0xb6b7,	// (0x00077755) scroll_pane_cp016

0x2fa3,	// (0x0006f041) smil2_image_pane_ParamLimits

0x2fa3,	// (0x0006f041) smil2_image_pane

0x2fd3,	// (0x0006f071) smil2_root_pane_ParamLimits

0x2fd3,	// (0x0006f071) smil2_root_pane

0x300b,	// (0x0006f0a9) smil2_text_pane_ParamLimits

0x300b,	// (0x0006f0a9) smil2_text_pane

0x9ef2,	// (0x00075f90) bg_list_pane_cp06

0xb6f3,	// (0x00077791) grid_radio_pane

0x9ef2,	// (0x00075f90) bg_popup_window_pane_cp06

0xb6fb,	// (0x00077799) main_fmradio_pane_t1

0xb0b6,	// (0x00077154) heading_pane_cp04

0xb709,	// (0x000777a7) main_fmradio_pane_t2

0xc721,	// (0x000787bf) popup_cale_lunar_info_window_g1

0xb717,	// (0x000777b5) main_fmradio_pane_t3

0xc729,	// (0x000787c7) popup_cale_lunar_info_window_g2

0xb725,	// (0x000777c3) main_fmradio_pane_t4

0x0001,

0xb733,	// (0x000777d1) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0007b66e) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007b595) main_fmradio_pane_t

0xb741,	// (0x000777df) wait_bar_pane_cp03

0xb749,	// (0x000777e7) cell_fmradio_pane_ParamLimits

0xb749,	// (0x000777e7) cell_fmradio_pane

0xb5a2,	// (0x00077640) cell_fmradio_pane_g1_ParamLimits

0xb5a2,	// (0x00077640) cell_fmradio_pane_g1

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp011

0xb75c,	// (0x000777fa) poc_content_pane_ParamLimits

0xb75c,	// (0x000777fa) poc_content_pane

0xb76e,	// (0x0007780c) scroll_pane_cp019

0x308b,	// (0x0006f129) popup_call_poc_act_window_ParamLimits

0x308b,	// (0x0006f129) popup_call_poc_act_window

0x30af,	// (0x0006f14d) popup_call_poc_inact_window_ParamLimits

0x30af,	// (0x0006f14d) popup_call_poc_inact_window

0xf594,	// (0x0007b632) bg_popup_call_poc_act_pane_g

0xc6e1,	// (0x0007877f) bg_popup_call_poc_inact_pane_g1

0xc6e9,	// (0x00078787) bg_popup_call_poc_inact_pane_g2

0xb776,	// (0x00077814) popup_call_poc_act_window_g2

0xc6f1,	// (0x0007878f) bg_popup_call_poc_inact_pane_g3

0xc671,	// (0x0007870f) bg_popup_call_poc_inact_pane_g4

0xc6f9,	// (0x00078797) bg_popup_call_poc_inact_pane_g5

0xb77e,	// (0x0007781c) popup_call_poc_act_window_t1_ParamLimits

0xb77e,	// (0x0007781c) popup_call_poc_act_window_t1

0xb7a6,	// (0x00077844) popup_call_poc_act_window_t2_ParamLimits

0xb7a6,	// (0x00077844) popup_call_poc_act_window_t2

0xb7ce,	// (0x0007786c) popup_call_poc_act_window_t3_ParamLimits

0xb7ce,	// (0x0007786c) popup_call_poc_act_window_t3

0xb7f6,	// (0x00077894) popup_call_poc_act_window_t4_ParamLimits

0xb7f6,	// (0x00077894) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007b5a0) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007b5a0) popup_call_poc_act_window_t

0xc701,	// (0x0007879f) bg_popup_call_poc_inact_pane_g6

0xc709,	// (0x000787a7) bg_popup_call_poc_inact_pane_g7

0xc711,	// (0x000787af) bg_popup_call_poc_inact_pane_g8

0xb808,	// (0x000778a6) popup_call_poc_inact_window_g2

0xc719,	// (0x000787b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0007b649) bg_popup_call_poc_inact_pane_g

0xb810,	// (0x000778ae) popup_call_poc_inact_window_t1_ParamLimits

0xb810,	// (0x000778ae) popup_call_poc_inact_window_t1

0xb825,	// (0x000778c3) popup_call_poc_inact_window_t2_ParamLimits

0xb825,	// (0x000778c3) popup_call_poc_inact_window_t2

0xb83a,	// (0x000778d8) popup_call_poc_inact_window_t3_ParamLimits

0xb83a,	// (0x000778d8) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007b5a9) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007b5a9) popup_call_poc_inact_window_t

0xc85e,	// (0x000788fc) context_pane_ParamLimits

0x38e9,	// (0x0006f987) signal_pane_ParamLimits

0xa413,	// (0x000764b1) main_call2_pane

0x9967,	// (0x00075a05) popup_phob_thumbnail2_window_ParamLimits

0x9967,	// (0x00075a05) popup_phob_thumbnail2_window

0x9904,	// (0x000759a2) aid_hotspot_pointer_arrow_pane

0x990c,	// (0x000759aa) aid_hotspot_pointer_hand_pane

0x33f9,	// (0x0006f497) phob_pre_status_pane_g5

0x0f5c,	// (0x0006cffa) cams_zoom_pane_ParamLimits

0x0f6b,	// (0x0006d009) image_vga_pane_ParamLimits

0x0f85,	// (0x0006d023) main_camera_pane_g1_ParamLimits

0x0f97,	// (0x0006d035) main_camera_pane_g2_ParamLimits

0x0fa7,	// (0x0006d045) main_camera_pane_g3_ParamLimits

0x0fb7,	// (0x0006d055) main_camera_pane_g4_ParamLimits

0x0fc7,	// (0x0006d065) main_camera_pane_g5_ParamLimits

0x0fd7,	// (0x0006d075) main_camera_pane_g6_ParamLimits

0x0fe7,	// (0x0006d085) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007b2a8) main_camera_pane_g_ParamLimits

0x0ff7,	// (0x0006d095) main_camera_pane_t1_ParamLimits

0x100d,	// (0x0006d0ab) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007b2b9) main_camera_pane_t_ParamLimits

0xa14d,	// (0x000761eb) bg_popup_preview_window_pane_cp01_ParamLimits

0xa14d,	// (0x000761eb) bg_popup_preview_window_pane_cp01

0xb84f,	// (0x000778ed) popup_phob_thumbnail2_window_g1_ParamLimits

0xb84f,	// (0x000778ed) popup_phob_thumbnail2_window_g1

0x9ef2,	// (0x00075f90) call2_cli_visual_pane

0x30e3,	// (0x0006f181) popup_call2_audio_conf_window_ParamLimits

0x30e3,	// (0x0006f181) popup_call2_audio_conf_window

0x3103,	// (0x0006f1a1) popup_call2_audio_first_window_ParamLimits

0x3103,	// (0x0006f1a1) popup_call2_audio_first_window

0x3199,	// (0x0006f237) popup_call2_audio_in_window_ParamLimits

0x3199,	// (0x0006f237) popup_call2_audio_in_window

0x31e1,	// (0x0006f27f) popup_call2_audio_out_window_ParamLimits

0x31e1,	// (0x0006f27f) popup_call2_audio_out_window

0x324b,	// (0x0006f2e9) popup_call2_audio_second_window_ParamLimits

0x324b,	// (0x0006f2e9) popup_call2_audio_second_window

0x32b1,	// (0x0006f34f) popup_call2_audio_wait_window_ParamLimits

0x32b1,	// (0x0006f34f) popup_call2_audio_wait_window

0x9ef2,	// (0x00075f90) bg_popup_call2_act_pane_cp03

0xa12f,	// (0x000761cd) list_conf_pane_cp

0xb85b,	// (0x000778f9) popup_call2_audio_conf_window_t1

0xb869,	// (0x00077907) list_single_graphic_popup_conf2_pane_ParamLimits

0xb869,	// (0x00077907) list_single_graphic_popup_conf2_pane

0xb126,	// (0x000771c4) list_highlight_pane_cp04

0xb87c,	// (0x0007791a) list_single_graphic_popup_conf2_pane_g1

0xb137,	// (0x000771d5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007b5b0) list_single_graphic_popup_conf2_pane_g

0xb886,	// (0x00077924) list_single_graphic_popup_conf2_pane_t1

0xb894,	// (0x00077932) bg_popup_call2_act_pane_cp01_ParamLimits

0xb894,	// (0x00077932) bg_popup_call2_act_pane_cp01

0xb91e,	// (0x000779bc) call_type_pane_cp05_ParamLimits

0xb91e,	// (0x000779bc) call_type_pane_cp05

0xb972,	// (0x00077a10) popup_call2_audio_second_window_g1_ParamLimits

0xb972,	// (0x00077a10) popup_call2_audio_second_window_g1

0xb9c6,	// (0x00077a64) popup_call2_audio_second_window_g2_ParamLimits

0xb9c6,	// (0x00077a64) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007b5b5) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007b5b5) popup_call2_audio_second_window_g

0xba2b,	// (0x00077ac9) popup_call2_audio_second_window_t1_ParamLimits

0xba2b,	// (0x00077ac9) popup_call2_audio_second_window_t1

0xbae6,	// (0x00077b84) popup_call2_audio_second_window_t2_ParamLimits

0xbae6,	// (0x00077b84) popup_call2_audio_second_window_t2

0xbb39,	// (0x00077bd7) popup_call2_audio_second_window_t3_ParamLimits

0xbb39,	// (0x00077bd7) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007b5bc) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007b5bc) popup_call2_audio_second_window_t

0x9ef2,	// (0x00075f90) bg_popup_call2_in_pane_cp02

0x9efc,	// (0x00075f9a) call_type_pane_cp04

0x9f04,	// (0x00075fa2) popup_call2_audio_wait_window_g1

0x9f0c,	// (0x00075faa) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007b197) popup_call2_audio_wait_window_g

0x9f14,	// (0x00075fb2) popup_call2_audio_wait_window_t3

0xbc2c,	// (0x00077cca) bg_popup_call2_act_pane_ParamLimits

0xbc2c,	// (0x00077cca) bg_popup_call2_act_pane

0xbcec,	// (0x00077d8a) call_type_pane_cp03_ParamLimits

0xbcec,	// (0x00077d8a) call_type_pane_cp03

0xbd50,	// (0x00077dee) popup_call2_audio_first_window_g1_ParamLimits

0xbd50,	// (0x00077dee) popup_call2_audio_first_window_g1

0xbdc0,	// (0x00077e5e) popup_call2_audio_first_window_g2_ParamLimits

0xbdc0,	// (0x00077e5e) popup_call2_audio_first_window_g2

0xb4b6,	// (0x00077554) popup_call2_audio_first_window_g3_ParamLimits

0xb4b6,	// (0x00077554) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007b5c5) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007b5c5) popup_call2_audio_first_window_g

0xbe9e,	// (0x00077f3c) popup_call2_audio_first_window_t1_ParamLimits

0xbe9e,	// (0x00077f3c) popup_call2_audio_first_window_t1

0xbfa1,	// (0x0007803f) popup_call2_audio_first_window_t4_ParamLimits

0xbfa1,	// (0x0007803f) popup_call2_audio_first_window_t4

0xc084,	// (0x00078122) popup_call2_audio_first_window_t5_ParamLimits

0xc084,	// (0x00078122) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007b5d0) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007b5d0) popup_call2_audio_first_window_t

0xa145,	// (0x000761e3) bg_popup_call2_act_pane_g1

0xc731,	// (0x000787cf) popup_cale_lunar_info_window_t1

0xc73f,	// (0x000787dd) popup_cale_lunar_info_window_t2

0xc74d,	// (0x000787eb) popup_cale_lunar_info_window_t3

0x9ef2,	// (0x00075f90) bg_popup_call2_bubble_pane

0xc185,	// (0x00078223) bg_popup_call2_in_pane_cp01_ParamLimits

0xc185,	// (0x00078223) bg_popup_call2_in_pane_cp01

0x94a4,	// (0x00075542) call_type_pane_cp02

0xc1cd,	// (0x0007826b) popup_call2_audio_out_window_g1_ParamLimits

0xc1cd,	// (0x0007826b) popup_call2_audio_out_window_g1

0xc1f9,	// (0x00078297) popup_call2_audio_out_window_g2_ParamLimits

0xc1f9,	// (0x00078297) popup_call2_audio_out_window_g2

0xc221,	// (0x000782bf) popup_call2_audio_out_window_g3_ParamLimits

0xc221,	// (0x000782bf) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007b5d9) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007b5d9) popup_call2_audio_out_window_g

0xc25c,	// (0x000782fa) popup_call2_audio_out_window_t1_ParamLimits

0xc25c,	// (0x000782fa) popup_call2_audio_out_window_t1

0xc2bb,	// (0x00078359) popup_call2_audio_out_window_t2_ParamLimits

0xc2bb,	// (0x00078359) popup_call2_audio_out_window_t2

0xc30f,	// (0x000783ad) popup_call2_audio_out_window_t3_ParamLimits

0xc30f,	// (0x000783ad) popup_call2_audio_out_window_t3

0xc325,	// (0x000783c3) popup_call2_audio_out_window_t4_ParamLimits

0xc325,	// (0x000783c3) popup_call2_audio_out_window_t4

0xc33b,	// (0x000783d9) popup_call2_audio_out_window_t5_ParamLimits

0xc33b,	// (0x000783d9) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007b5e2) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007b5e2) popup_call2_audio_out_window_t

0xc39f,	// (0x0007843d) bg_popup_call2_in_pane_ParamLimits

0xc39f,	// (0x0007843d) bg_popup_call2_in_pane

0xc3fb,	// (0x00078499) popup_call2_audio_in_window_g1_ParamLimits

0xc3fb,	// (0x00078499) popup_call2_audio_in_window_g1

0xc433,	// (0x000784d1) popup_call2_audio_in_window_g2_ParamLimits

0xc433,	// (0x000784d1) popup_call2_audio_in_window_g2

0xc46b,	// (0x00078509) popup_call2_audio_in_window_g3_ParamLimits

0xc46b,	// (0x00078509) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007b5ef) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007b5ef) popup_call2_audio_in_window_g

0xc4c3,	// (0x00078561) popup_call2_audio_in_window_t1_ParamLimits

0xc4c3,	// (0x00078561) popup_call2_audio_in_window_t1

0xc543,	// (0x000785e1) popup_call2_audio_in_window_t2_ParamLimits

0xc543,	// (0x000785e1) popup_call2_audio_in_window_t2

0xc5c3,	// (0x00078661) popup_call2_audio_in_window_t3_ParamLimits

0xc5c3,	// (0x00078661) popup_call2_audio_in_window_t3

0xc5dd,	// (0x0007867b) popup_call2_audio_in_window_t4_ParamLimits

0xc5dd,	// (0x0007867b) popup_call2_audio_in_window_t4

0xc5ef,	// (0x0007868d) popup_call2_audio_in_window_t5_ParamLimits

0xc5ef,	// (0x0007868d) popup_call2_audio_in_window_t5

0xc604,	// (0x000786a2) popup_call2_audio_in_window_t6_ParamLimits

0xc604,	// (0x000786a2) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007b5f8) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007b5f8) popup_call2_audio_in_window_t

0xa145,	// (0x000761e3) bg_popup_call2_in_pane_g1

0xc75b,	// (0x000787f9) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0007b673) popup_cale_lunar_info_window_t

0xa14d,	// (0x000761eb) bg_popup_call2_rect_pane_ParamLimits

0xa14d,	// (0x000761eb) bg_popup_call2_rect_pane

0x9ef2,	// (0x00075f90) call2_cli_visual_graphic_pane

0x9ef2,	// (0x00075f90) call2_cli_visual_text_pane

0x998e,	// (0x00075a2c) smil_status_volume_pane_g3

0x0002,

0xa273,	// (0x00076311) call2_cli_visual_graphic_pane_g1

0xa273,	// (0x00076311) call2_cli_visual_graphic_pane_g2

0xa273,	// (0x00076311) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007b605) call2_cli_visual_graphic_pane_g

0xc619,	// (0x000786b7) bg_popup_call2_rect_pane_g1

0xa311,	// (0x000763af) bg_popup_call2_rect_pane_g2

0xc621,	// (0x000786bf) bg_popup_call2_rect_pane_g3

0xc629,	// (0x000786c7) bg_popup_call2_rect_pane_g4

0xc631,	// (0x000786cf) bg_popup_call2_rect_pane_g5

0xc639,	// (0x000786d7) bg_popup_call2_rect_pane_g6

0xc641,	// (0x000786df) bg_popup_call2_rect_pane_g7

0xc649,	// (0x000786e7) bg_popup_call2_rect_pane_g8

0xc651,	// (0x000786ef) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007b60c) bg_popup_call2_rect_pane_g

0xc659,	// (0x000786f7) bg_popup_call2_bubble_pane_g1

0xc661,	// (0x000786ff) bg_popup_call2_bubble_pane_g2

0xc669,	// (0x00078707) bg_popup_call2_bubble_pane_g3

0xc671,	// (0x0007870f) bg_popup_call2_bubble_pane_g4

0xc679,	// (0x00078717) bg_popup_call2_bubble_pane_g5

0xc681,	// (0x0007871f) bg_popup_call2_bubble_pane_g6

0xc689,	// (0x00078727) bg_popup_call2_bubble_pane_g7

0xc691,	// (0x0007872f) bg_popup_call2_bubble_pane_g8

0xc699,	// (0x00078737) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007b61f) bg_popup_call2_bubble_pane_g

0x08b4,	// (0x0006c952) aid_cale_week_size_cell_pane

0x1023,	// (0x0006d0c1) aid_cams_cif_uncrop_pane_ParamLimits

0x1023,	// (0x0006d0c1) aid_cams_cif_uncrop_pane

0x11d8,	// (0x0006d276) aid_cams_size_cell_ParamLimits

0x11d8,	// (0x0006d276) aid_cams_size_cell

0x11ec,	// (0x0006d28a) grid_cams_pane_ParamLimits

0x1206,	// (0x0006d2a4) linegrid_cams_pane_ParamLimits

0x1403,	// (0x0006d4a1) call_video_pane_t1

0x1421,	// (0x0006d4bf) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007b30c) call_video_pane_t

0x1845,	// (0x0006d8e3) aid_cale_month_size_cell_pane_ParamLimits

0x1845,	// (0x0006d8e3) aid_cale_month_size_cell_pane

0xf61e,	// (0x0007b6bc) smil_status_volume_pane_g

0x999b,	// (0x00075a39) volume_smil_pane_ParamLimits

0x9337,	// (0x000753d5) aid_popup2_width_pane

0x082a,	// (0x0006c8c8) cell_qdial_pane_g4_ParamLimits

0x082a,	// (0x0006c8c8) cell_qdial_pane_g4

0x2766,	// (0x0006e804) aid_blid_cardinal_pane_ParamLimits

0x2772,	// (0x0006e810) aid_blid_destination_pane_ParamLimits

0x2772,	// (0x0006e810) aid_blid_destination_pane

0xa14d,	// (0x000761eb) bg_popup_call_poc_act_pane_ParamLimits

0xa14d,	// (0x000761eb) bg_popup_call_poc_act_pane

0xa14d,	// (0x000761eb) bg_popup_call_poc_inact_pane_ParamLimits

0xa14d,	// (0x000761eb) bg_popup_call_poc_inact_pane

0xc6a1,	// (0x0007873f) bg_popup_call_poc_act_pane_g1

0xc6a9,	// (0x00078747) bg_popup_call_poc_act_pane_g2

0xc6b1,	// (0x0007874f) bg_popup_call_poc_act_pane_g3

0xc671,	// (0x0007870f) bg_popup_call_poc_act_pane_g4

0xc679,	// (0x00078717) bg_popup_call_poc_act_pane_g5

0xc6b9,	// (0x00078757) bg_popup_call_poc_act_pane_g6

0xc689,	// (0x00078727) bg_popup_call_poc_act_pane_g7

0xc6c1,	// (0x0007875f) bg_popup_call_poc_act_pane_g8

0x9ef2,	// (0x00075f90) main_usb_pane

0x9942,	// (0x000759e0) popup_cale_lunar_info_window

0x16eb,	// (0x0006d789) im_reading_pane_t1_ParamLimits

0xaac5,	// (0x00076b63) list_im_pane_ParamLimits

0xaad6,	// (0x00076b74) scroll_pane_cp07_ParamLimits

0x9ef2,	// (0x00075f90) grid_highlight_pane_cp012

0xa14d,	// (0x000761eb) mup_scale_pane_ParamLimits

0xb5a2,	// (0x00077640) main_usb_pane_g1_ParamLimits

0xb5a2,	// (0x00077640) main_usb_pane_g1

0x330e,	// (0x0006f3ac) main_usb_pane_g2_ParamLimits

0x330e,	// (0x0006f3ac) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0007b65c) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0007b65c) main_usb_pane_g

0x3324,	// (0x0006f3c2) main_usb_pane_t1_ParamLimits

0x3324,	// (0x0006f3c2) main_usb_pane_t1

0x3336,	// (0x0006f3d4) main_usb_pane_t2_ParamLimits

0x3336,	// (0x0006f3d4) main_usb_pane_t2

0x3348,	// (0x0006f3e6) main_usb_pane_t3_ParamLimits

0x3348,	// (0x0006f3e6) main_usb_pane_t3

0x335a,	// (0x0006f3f8) main_usb_pane_t4_ParamLimits

0x335a,	// (0x0006f3f8) main_usb_pane_t4

0x336c,	// (0x0006f40a) main_usb_pane_t5_ParamLimits

0x336c,	// (0x0006f40a) main_usb_pane_t5

0x337e,	// (0x0006f41c) main_usb_pane_t6_ParamLimits

0x337e,	// (0x0006f41c) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0007b661) main_usb_pane_t_ParamLimits

0x2715,	// (0x0006e7b3) aid_text_placing

0x271e,	// (0x0006e7bc) main_location2_pane_t1_ParamLimits

0x2730,	// (0x0006e7ce) main_location2_pane_t2_ParamLimits

0x2742,	// (0x0006e7e0) main_location2_pane_t3_ParamLimits

0x2754,	// (0x0006e7f2) main_location2_pane_t4_ParamLimits

0x2754,	// (0x0006e7f2) main_location2_pane_t4

0xf3cf,	// (0x0007b46d) main_location2_pane_t_ParamLimits

0xa189,	// (0x00076227) find_pinb_pane_g2_ParamLimits

0xa189,	// (0x00076227) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007b1bd) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007b1bd) find_pinb_pane_g

0xa195,	// (0x00076233) find_pinb_pane_t1_ParamLimits

0xa1a7,	// (0x00076245) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007b1c2) find_pinb_pane_t_ParamLimits

0x9ef2,	// (0x00075f90) main_call3_pane

0x1d00,	// (0x0006dd9e) cale_month_day_heading_pane_t1_ParamLimits

0x1d86,	// (0x0006de24) cale_month_day_heading_pane_t2_ParamLimits

0x1e17,	// (0x0006deb5) cale_month_day_heading_pane_t3_ParamLimits

0x1ea8,	// (0x0006df46) cale_month_day_heading_pane_t4_ParamLimits

0x1f41,	// (0x0006dfdf) cale_month_day_heading_pane_t5_ParamLimits

0x1fe2,	// (0x0006e080) cale_month_day_heading_pane_t6_ParamLimits

0x2083,	// (0x0006e121) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007b344) cale_month_day_heading_pane_t_ParamLimits

0xad20,	// (0x00076dbe) smil_status_volume_pane

0x2e07,	// (0x0006eea5) postcard_address_pane_ParamLimits

0x2e07,	// (0x0006eea5) postcard_address_pane

0x2e19,	// (0x0006eeb7) postcard_message_pane_ParamLimits

0x2e19,	// (0x0006eeb7) postcard_message_pane

0x32eb,	// (0x0006f389) call2_cli_visual_pane_t1_ParamLimits

0x32eb,	// (0x0006f389) call2_cli_visual_pane_t1

0x3b18,	// (0x0006fbb6) postcard_message_pane_t1_ParamLimits

0x3b18,	// (0x0006fbb6) postcard_message_pane_t1

0x3b01,	// (0x0006fb9f) postcard_address_pane_t1_ParamLimits

0x3b01,	// (0x0006fb9f) postcard_address_pane_t1

0x3aed,	// (0x0006fb8b) popup_call3_audio_in_window_ParamLimits

0x3aed,	// (0x0006fb8b) popup_call3_audio_in_window

0x3978,	// (0x0006fa16) bg_popup_call3_in_pane_ParamLimits

0x3978,	// (0x0006fa16) bg_popup_call3_in_pane

0x39ee,	// (0x0006fa8c) popup_call3_audio_in_window_g1_ParamLimits

0x39ee,	// (0x0006fa8c) popup_call3_audio_in_window_g1

0x3a0e,	// (0x0006faac) popup_call3_audio_in_window_g2_ParamLimits

0x3a0e,	// (0x0006faac) popup_call3_audio_in_window_g2

0x3a2e,	// (0x0006facc) popup_call3_audio_in_window_g3_ParamLimits

0x3a2e,	// (0x0006facc) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0007b6c3) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0007b6c3) popup_call3_audio_in_window_g

0x3a5f,	// (0x0006fafd) popup_call3_audio_in_window_t1_ParamLimits

0x3a5f,	// (0x0006fafd) popup_call3_audio_in_window_t1

0x3a9d,	// (0x0006fb3b) popup_call3_audio_in_window_t2_ParamLimits

0x3a9d,	// (0x0006fb3b) popup_call3_audio_in_window_t2

0x3adb,	// (0x0006fb79) popup_call3_audio_in_window_t3_ParamLimits

0x3adb,	// (0x0006fb79) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0007b6cc) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0007b6cc) popup_call3_audio_in_window_t

0xa413,	// (0x000764b1) bg_popup_call3_rect_pane

0xc619,	// (0x000786b7) bg_popup_call3_rect_pane_g1

0xa311,	// (0x000763af) bg_popup_call3_rect_pane_g2

0xc621,	// (0x000786bf) bg_popup_call3_rect_pane_g3

0xc629,	// (0x000786c7) bg_popup_call3_rect_pane_g4

0xc631,	// (0x000786cf) bg_popup_call3_rect_pane_g5

0xc639,	// (0x000786d7) bg_popup_call3_rect_pane_g6

0xc641,	// (0x000786df) bg_popup_call3_rect_pane_g7

0x2a4c,	// (0x0006eaea) mup_visualizer_osc_pane

0xb4c4,	// (0x00077562) mup_visualizer_spec_pane

0x39a8,	// (0x0006fa46) call3_video_qcif_pane_ParamLimits

0x39a8,	// (0x0006fa46) call3_video_qcif_pane

0x39bb,	// (0x0006fa59) call3_video_qcif_uncrop_pane_ParamLimits

0x39bb,	// (0x0006fa59) call3_video_qcif_uncrop_pane

0x39c9,	// (0x0006fa67) call3_video_subqcif_pane_ParamLimits

0x39c9,	// (0x0006fa67) call3_video_subqcif_pane

0x39dd,	// (0x0006fa7b) call3_video_subqcif_uncrop_pane_ParamLimits

0x39dd,	// (0x0006fa7b) call3_video_subqcif_uncrop_pane

0x3a4e,	// (0x0006faec) popup_call3_audio_in_window_g4_ParamLimits

0x3a4e,	// (0x0006faec) popup_call3_audio_in_window_g4

0x3967,	// (0x0006fa05) mup_spec_half_pane

0x3970,	// (0x0006fa0e) mup_spec_half_pane_cp

0xc8be,	// (0x0007895c) mup_osc_middle_pane

0xc8c7,	// (0x00078965) mup_visualizer_osc_pane_g1

0x3947,	// (0x0006f9e5) mup_spec_bar_pane_ParamLimits

0x3947,	// (0x0006f9e5) mup_spec_bar_pane

0xc8ab,	// (0x00078949) mup_spec_bar_pane_g1

0xc8b5,	// (0x00078953) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0007b6b7) mup_spec_bar_pane_g

0x08b4,	// (0x0006c952) aid_cale_week_size_cell_pane_ParamLimits

0x08ce,	// (0x0006c96c) bg_cale_heading_pane_ParamLimits

0xa36c,	// (0x0007640a) bg_cale_pane_cp01_ParamLimits

0x08e6,	// (0x0006c984) cale_week_corner_pane_ParamLimits

0x0905,	// (0x0006c9a3) cale_week_day_heading_pane_ParamLimits

0x0922,	// (0x0006c9c0) cale_week_scroll_pane_g1_ParamLimits

0x0935,	// (0x0006c9d3) cale_week_scroll_pane_g2_ParamLimits

0x094d,	// (0x0006c9eb) cale_week_scroll_pane_g3_ParamLimits

0x0965,	// (0x0006ca03) cale_week_scroll_pane_g4_ParamLimits

0x097d,	// (0x0006ca1b) cale_week_scroll_pane_g5_ParamLimits

0x099d,	// (0x0006ca3b) cale_week_scroll_pane_g6_ParamLimits

0x09bd,	// (0x0006ca5b) cale_week_scroll_pane_g7_ParamLimits

0x09dd,	// (0x0006ca7b) cale_week_scroll_pane_g8_ParamLimits

0x0a01,	// (0x0006ca9f) cale_week_scroll_pane_g9_ParamLimits

0x0a19,	// (0x0006cab7) cale_week_scroll_pane_g10_ParamLimits

0x0a31,	// (0x0006cacf) cale_week_scroll_pane_g11_ParamLimits

0x0a49,	// (0x0006cae7) cale_week_scroll_pane_g12_ParamLimits

0x0a61,	// (0x0006caff) cale_week_scroll_pane_g13_ParamLimits

0x0a61,	// (0x0006caff) cale_week_scroll_pane_g14_ParamLimits

0x0a61,	// (0x0006caff) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007b24e) cale_week_scroll_pane_g_ParamLimits

0x0a9d,	// (0x0006cb3b) cale_week_time_pane_ParamLimits

0x0ac1,	// (0x0006cb5f) grid_cale_week_pane_ParamLimits

0xa389,	// (0x00076427) listscroll_cale_week_pane_t1

0xa39b,	// (0x00076439) scroll_pane_cp08_ParamLimits

0x189a,	// (0x0006d938) cale_month_corner_pane_ParamLimits

0xacf6,	// (0x00076d94) cale_month_pane_t1

0x1c9e,	// (0x0006dd3c) cale_month_week_pane_ParamLimits

0x2546,	// (0x0006e5e4) popup_call_status_window_g1_ParamLimits

0x255a,	// (0x0006e5f8) popup_call_status_window_g2_ParamLimits

0x256e,	// (0x0006e60c) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007b3f4) popup_call_status_window_g_ParamLimits

0xb0a6,	// (0x00077144) aid_call2_pane

0x2cb4,	// (0x0006ed52) msg_header_pane_g1

0x2e07,	// (0x0006eea5) postcard_address2_pane_ParamLimits

0x2e07,	// (0x0006eea5) postcard_address2_pane

0x2e19,	// (0x0006eeb7) postcard_message2_pane_ParamLimits

0x2e19,	// (0x0006eeb7) postcard_message2_pane

0x38f7,	// (0x0006f995) message2_row_pane_ParamLimits

0x38f7,	// (0x0006f995) message2_row_pane

0x3914,	// (0x0006f9b2) address2_row_pane_ParamLimits

0x3914,	// (0x0006f9b2) address2_row_pane

0xc879,	// (0x00078917) postcard_message2_row_pane_g1

0xc881,	// (0x0007891f) postcard_message2_row_pane_t1

0xc879,	// (0x00078917) address2_row_pane_g1

0xc881,	// (0x0007891f) address2_row_pane_t1

0x0edb,	// (0x0006cf79) aid_size_cell_vorec

0x9ef2,	// (0x00075f90) main_rss_pane

0x3927,	// (0x0006f9c5) rss_list_single_pane_ParamLimits

0x3927,	// (0x0006f9c5) rss_list_single_pane

0xc88f,	// (0x0007892d) rss_list_single_pane_t1

0xc89d,	// (0x0007893b) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0007b6b2) rss_list_single_pane_t

0x9ef2,	// (0x00075f90) main_camera2_pane

0x9ef2,	// (0x00075f90) main_video2_pane

0x3b91,	// (0x0006fc2f) cams_zoom_pane_cp2_ParamLimits

0x3b91,	// (0x0006fc2f) cams_zoom_pane_cp2

0x3bb1,	// (0x0006fc4f) image2_vga_pane_ParamLimits

0x3bb1,	// (0x0006fc4f) image2_vga_pane

0x3c02,	// (0x0006fca0) main_camera2_pane_g1_ParamLimits

0x3c02,	// (0x0006fca0) main_camera2_pane_g1

0x3c22,	// (0x0006fcc0) main_camera2_pane_g2_ParamLimits

0x3c22,	// (0x0006fcc0) main_camera2_pane_g2

0x3c42,	// (0x0006fce0) main_camera2_pane_g3_ParamLimits

0x3c42,	// (0x0006fce0) main_camera2_pane_g3

0x3c62,	// (0x0006fd00) main_camera2_pane_g4_ParamLimits

0x3c62,	// (0x0006fd00) main_camera2_pane_g4

0x3c82,	// (0x0006fd20) main_camera2_pane_g5_ParamLimits

0x3c82,	// (0x0006fd20) main_camera2_pane_g5

0x3ca2,	// (0x0006fd40) main_camera2_pane_g6_ParamLimits

0x3ca2,	// (0x0006fd40) main_camera2_pane_g6

0x3cc2,	// (0x0006fd60) main_camera2_pane_g7_ParamLimits

0x3cc2,	// (0x0006fd60) main_camera2_pane_g7

0x3ce2,	// (0x0006fd80) main_camera2_pane_g8_ParamLimits

0x3ce2,	// (0x0006fd80) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0007b6d3) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0007b6d3) main_camera2_pane_g

0x3d22,	// (0x0006fdc0) main_camera2_pane_t1_ParamLimits

0x3d22,	// (0x0006fdc0) main_camera2_pane_t1

0x3d57,	// (0x0006fdf5) main_camera2_pane_t2_ParamLimits

0x3d57,	// (0x0006fdf5) main_camera2_pane_t2

0x3d7d,	// (0x0006fe1b) main_camera2_pane_t3_ParamLimits

0x3d7d,	// (0x0006fe1b) main_camera2_pane_t3

0x3ddb,	// (0x0006fe79) main_camera2_pane_t4_ParamLimits

0x3ddb,	// (0x0006fe79) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0007b6e6) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0007b6e6) main_camera2_pane_t

0x3e6d,	// (0x0006ff0b) cams_zoom_pane_cp4_ParamLimits

0x3e6d,	// (0x0006ff0b) cams_zoom_pane_cp4

0x3e83,	// (0x0006ff21) image2_cif_pane_ParamLimits

0x3e83,	// (0x0006ff21) image2_cif_pane

0x3eae,	// (0x0006ff4c) image2_subqcif_pane_ParamLimits

0x3eae,	// (0x0006ff4c) image2_subqcif_pane

0x3ec8,	// (0x0006ff66) main_video2_pane_g1_ParamLimits

0x3ec8,	// (0x0006ff66) main_video2_pane_g1

0x3ee2,	// (0x0006ff80) main_video2_pane_g2_ParamLimits

0x3ee2,	// (0x0006ff80) main_video2_pane_g2

0x3ef8,	// (0x0006ff96) main_video2_pane_g3_ParamLimits

0x3ef8,	// (0x0006ff96) main_video2_pane_g3

0x3f0e,	// (0x0006ffac) main_video2_pane_g4_ParamLimits

0x3f0e,	// (0x0006ffac) main_video2_pane_g4

0x3f24,	// (0x0006ffc2) main_video2_pane_g5_ParamLimits

0x3f24,	// (0x0006ffc2) main_video2_pane_g5

0x3f3a,	// (0x0006ffd8) main_video2_pane_g6_ParamLimits

0x3f3a,	// (0x0006ffd8) main_video2_pane_g6

0x0005,

0xf657,	// (0x0007b6f5) main_video2_pane_g_ParamLimits

0xf657,	// (0x0007b6f5) main_video2_pane_g

0x3f54,	// (0x0006fff2) main_video2_pane_t1_ParamLimits

0x3f54,	// (0x0006fff2) main_video2_pane_t1

0x3f78,	// (0x00070016) main_video2_pane_t2_ParamLimits

0x3f78,	// (0x00070016) main_video2_pane_t2

0x3fc6,	// (0x00070064) main_video2_pane_t3_ParamLimits

0x3fc6,	// (0x00070064) main_video2_pane_t3

0x0002,

0xf664,	// (0x0007b702) main_video2_pane_t_ParamLimits

0xf664,	// (0x0007b702) main_video2_pane_t

0x3439,	// (0x0006f4d7) call_muted_g2

0x0001,

0xf606,	// (0x0007b6a4) call_muted_g

0x9ef2,	// (0x00075f90) main_mup2_pane

0x400e,	// (0x000700ac) main_mup2_pane_g1_ParamLimits

0x400e,	// (0x000700ac) main_mup2_pane_g1

0x401a,	// (0x000700b8) main_mup2_pane_g2_ParamLimits

0x401a,	// (0x000700b8) main_mup2_pane_g2

0x9a09,	// (0x00075aa7) main_mup_pane_g13_cp1

0x9a11,	// (0x00075aaf) mup_volume_pane_cp1

0x4036,	// (0x000700d4) main_mup2_pane_g4_ParamLimits

0x4036,	// (0x000700d4) main_mup2_pane_g4

0x4048,	// (0x000700e6) main_mup2_pane_g5_ParamLimits

0x4048,	// (0x000700e6) main_mup2_pane_g5

0x405a,	// (0x000700f8) main_mup2_pane_g6_ParamLimits

0x405a,	// (0x000700f8) main_mup2_pane_g6

0x406c,	// (0x0007010a) main_mup2_pane_g7_ParamLimits

0x406c,	// (0x0007010a) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0007b709) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0007b709) main_mup2_pane_g

0x4084,	// (0x00070122) main_mup2_pane_t1_ParamLimits

0x4084,	// (0x00070122) main_mup2_pane_t1

0x409a,	// (0x00070138) main_mup2_pane_t2_ParamLimits

0x409a,	// (0x00070138) main_mup2_pane_t2

0x40b0,	// (0x0007014e) main_mup2_pane_t3_ParamLimits

0x40b0,	// (0x0007014e) main_mup2_pane_t3

0x40c6,	// (0x00070164) main_mup2_pane_t4_ParamLimits

0x40c6,	// (0x00070164) main_mup2_pane_t4

0x40de,	// (0x0007017c) main_mup2_pane_t5_ParamLimits

0x40de,	// (0x0007017c) main_mup2_pane_t5

0x40f6,	// (0x00070194) main_mup2_pane_t6_ParamLimits

0x40f6,	// (0x00070194) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0007b718) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0007b718) main_mup2_pane_t

0x4126,	// (0x000701c4) mup2_visualizer_pane_ParamLimits

0x4126,	// (0x000701c4) mup2_visualizer_pane

0x4154,	// (0x000701f2) mup_progress_pane_cp_ParamLimits

0x4154,	// (0x000701f2) mup_progress_pane_cp

0x99f4,	// (0x00075a92) mup_volume_pane_cp_ParamLimits

0x99f4,	// (0x00075a92) mup_volume_pane_cp

0x4168,	// (0x00070206) mup2_visualizer_pane_g1_ParamLimits

0x4168,	// (0x00070206) mup2_visualizer_pane_g1

0xc8fe,	// (0x0007899c) mup2_visualizer_pane_g2_ParamLimits

0xc8fe,	// (0x0007899c) mup2_visualizer_pane_g2

0x417f,	// (0x0007021d) mup2_visualizer_pane_g3_ParamLimits

0x417f,	// (0x0007021d) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0007b725) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0007b725) mup2_visualizer_pane_g

0xb6eb,	// (0x00077789) aid_size_cell_fmradio

0x35eb,	// (0x0006f689) aid_height_parent_landcape

0xab54,	// (0x00076bf2) wml_content_pane_cp

0xab5c,	// (0x00076bfa) wml_tabs_pane

0xab65,	// (0x00076c03) popup_wml_miniature_window

0xab6d,	// (0x00076c0b) scroll_pane_cp021

0xab81,	// (0x00076c1f) wml_content_pane_comp8

0x9ef2,	// (0x00075f90) bg_popup_sub_pane_cp05

0xc91c,	// (0x000789ba) popup_wml_miniature_window_g1

0xc924,	// (0x000789c2) wml_miniature_view_pane

0x418b,	// (0x00070229) aid_size_wml_view

0x4193,	// (0x00070231) wml_miniature_view_pane_g1

0x419c,	// (0x0007023a) wml_miniature_view_pane_g2

0x41a5,	// (0x00070243) wml_miniature_view_pane_g3

0x41ad,	// (0x0007024b) wml_miniature_view_pane_g4

0x41b5,	// (0x00070253) wml_miniature_view_pane_g5

0x41bd,	// (0x0007025b) wml_miniature_view_pane_g6

0x41c5,	// (0x00070263) wml_miniature_view_pane_g7

0x41cd,	// (0x0007026b) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0007b72c) wml_miniature_view_pane_g

0xc92c,	// (0x000789ca) background_graphic_ParamLimits

0xc92c,	// (0x000789ca) background_graphic

0xc938,	// (0x000789d6) wml_tabs_2_pane

0xc941,	// (0x000789df) wml_tabs_3_pane_ParamLimits

0xc941,	// (0x000789df) wml_tabs_3_pane

0xc953,	// (0x000789f1) wml_tabs_4_pane_ParamLimits

0xc953,	// (0x000789f1) wml_tabs_4_pane

0xc969,	// (0x00078a07) wml_tabs_5_pane_ParamLimits

0xc969,	// (0x00078a07) wml_tabs_5_pane

0xc983,	// (0x00078a21) wml_tabs_pane_g2_ParamLimits

0xc983,	// (0x00078a21) wml_tabs_pane_g2

0xc997,	// (0x00078a35) wml_tabs_pane_g3_ParamLimits

0xc997,	// (0x00078a35) wml_tabs_pane_g3

0x41d5,	// (0x00070273) wml_tabs_2_active_pane_ParamLimits

0x41d5,	// (0x00070273) wml_tabs_2_active_pane

0x41e9,	// (0x00070287) wml_tabs_2_passive_pane_ParamLimits

0x41e9,	// (0x00070287) wml_tabs_2_passive_pane

0x41fd,	// (0x0007029b) wml_tabs_3_active_pane_cp_ParamLimits

0x41fd,	// (0x0007029b) wml_tabs_3_active_pane_cp

0x4212,	// (0x000702b0) wml_tabs_3_passive_pane_ParamLimits

0x4212,	// (0x000702b0) wml_tabs_3_passive_pane

0x4225,	// (0x000702c3) wml_tabs_3_passive_pane_cp_ParamLimits

0x4225,	// (0x000702c3) wml_tabs_3_passive_pane_cp

0x423c,	// (0x000702da) tabs_4_active_pane

0x4244,	// (0x000702e2) tabs_4_passive_pane

0x424e,	// (0x000702ec) tabs_4_passive_pane_cp

0x4256,	// (0x000702f4) tabs_4_passive_pane_cp2

0x3306,	// (0x0006f3a4) aid_height_text

0x2a1e,	// (0x0006eabc) mup_volume_cont_pane_ParamLimits

0x2a1e,	// (0x0006eabc) mup_volume_cont_pane

0x04cb,	// (0x0006c569) aid_size_cell_pinb

0x04d5,	// (0x0006c573) aid_size_list_pinb

0x4140,	// (0x000701de) mup2_volume_cont_pane_ParamLimits

0x4140,	// (0x000701de) mup2_volume_cont_pane

0x99e0,	// (0x00075a7e) mup2_volume_cont_pane_g1_ParamLimits

0x99e0,	// (0x00075a7e) mup2_volume_cont_pane_g1

0x018d,	// (0x0006c22b) aid_size_cell_touch_ParamLimits

0x018d,	// (0x0006c22b) aid_size_cell_touch

0x03ba,	// (0x0006c458) touch_pane_ParamLimits

0x03ba,	// (0x0006c458) touch_pane

0x93ab,	// (0x00075449) main_rss2_pane

0xc9b4,	// (0x00078a52) listscroll_rss2_pane

0xc9bd,	// (0x00078a5b) rss2_navigation_pane

0xc9c5,	// (0x00078a63) list_rss2_pane

0xb1cb,	// (0x00077269) scroll_pane_cp22

0xc9cd,	// (0x00078a6b) rss2_navigation_pane_g1

0xc9d6,	// (0x00078a74) rss2_navigation_pane_g2

0xc9de,	// (0x00078a7c) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0007b73d) rss2_navigation_pane_g

0xc9e6,	// (0x00078a84) rss2_navigation_pane_t1

0x4260,	// (0x000702fe) rss2_list_single_pane_ParamLimits

0x4260,	// (0x000702fe) rss2_list_single_pane

0xc9f4,	// (0x00078a92) rss2_list_single_pane_t2

0xca02,	// (0x00078aa0) rss2_list_single_pane_t3_ParamLimits

0xca02,	// (0x00078aa0) rss2_list_single_pane_t3

0xca1f,	// (0x00078abd) rss2_list_single_pane_t4

0x2351,	// (0x0006e3ef) smil_status_pane_g1

0x939d,	// (0x0007543b) main_image2_pane_ParamLimits

0x939d,	// (0x0007543b) main_image2_pane

0x3d02,	// (0x0006fda0) main_camera2_pane_g9_ParamLimits

0x3d02,	// (0x0006fda0) main_camera2_pane_g9

0x3e30,	// (0x0006fece) main_camera2_pane_t5_ParamLimits

0x3e30,	// (0x0006fece) main_camera2_pane_t5

0x99b0,	// (0x00075a4e) main_camera2_pane_t6_ParamLimits

0x99b0,	// (0x00075a4e) main_camera2_pane_t6

0x4276,	// (0x00070314) main_image2_pane_g1_ParamLimits

0x4276,	// (0x00070314) main_image2_pane_g1

0x3041,	// (0x0006f0df) smil2_video_pane_ParamLimits

0x3041,	// (0x0006f0df) smil2_video_pane

0x9353,	// (0x000753f1) aid_zoom_text_primary_cp

0x9393,	// (0x00075431) popup_preview_fixed_window

0xaabd,	// (0x00076b5b) im_reading_pane_g1

0x3b79,	// (0x0006fc17) cams2_bc_adjust_pane_cp_ParamLimits

0x3b79,	// (0x0006fc17) cams2_bc_adjust_pane_cp

0x3e5f,	// (0x0006fefd) cams2_bc_adjust_pane_ParamLimits

0x3e5f,	// (0x0006fefd) cams2_bc_adjust_pane

0xd74c,	// (0x000797ea) cams2_bc_adjust_pane_g1

0x9a19,	// (0x00075ab7) cams2_slider_pane

0x9a22,	// (0x00075ac0) cams2_slider_pane_g1

0x9a2b,	// (0x00075ac9) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0007b744) cams2_slider_pane_g

0x05bd,	// (0x0006c65b) calc_display_pane_ParamLimits

0x05e5,	// (0x0006c683) calc_paper_pane_ParamLimits

0x0608,	// (0x0006c6a6) grid_calc_pane_ParamLimits

0x98d5,	// (0x00075973) popup_clock_digital_window_t1_ParamLimits

0xb688,	// (0x00077726) main_image_pane_t1

0x059f,	// (0x0006c63d) aid_size_cell_calc_ParamLimits

0x059f,	// (0x0006c63d) aid_size_cell_calc

0x3643,	// (0x0006f6e1) popup_blid_sat_info2_window_ParamLimits

0x3643,	// (0x0006f6e1) popup_blid_sat_info2_window

0xca35,	// (0x00078ad3) aid_size_cell_blid

0xca3d,	// (0x00078adb) bg_popup_window_pane_cp07

0xca60,	// (0x00078afe) grid_popup_blid_pane

0xca6a,	// (0x00078b08) heading_pane_cp05_ParamLimits

0xca6a,	// (0x00078b08) heading_pane_cp05

0xcb34,	// (0x00078bd2) cell_popup_blid_pane_ParamLimits

0xcb34,	// (0x00078bd2) cell_popup_blid_pane

0xcb58,	// (0x00078bf6) cell_popup_blid_pane_g1

0xcb60,	// (0x00078bfe) cell_popup_blid_pane_t1

0x4110,	// (0x000701ae) mup2_indicator_pane_ParamLimits

0x4110,	// (0x000701ae) mup2_indicator_pane

0xa413,	// (0x000764b1) mup2_visualizer_osc_pane

0xc90a,	// (0x000789a8) mup2_visualizer_spec_pane_ParamLimits

0xc90a,	// (0x000789a8) mup2_visualizer_spec_pane

0x428c,	// (0x0007032a) mup2_spec_half_pane

0x4295,	// (0x00070333) mup2_spec_half_pane_cp

0x429d,	// (0x0007033b) mup2_spec_bar_pane_ParamLimits

0x429d,	// (0x0007033b) mup2_spec_bar_pane

0xc8ab,	// (0x00078949) mup2_spec_bar_pane_g1

0xc8b5,	// (0x00078953) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0007b6b7) mup2_spec_bar_pane_g

0x42bd,	// (0x0007035b) mup2_osc_middle_pane

0xc8c7,	// (0x00078965) mup2_visualizer_osc_pane_g1

0x93d5,	// (0x00075473) popup_number_entry_window_t1_ParamLimits

0x93e8,	// (0x00075486) popup_number_entry_window_t2_ParamLimits

0x93fa,	// (0x00075498) popup_number_entry_window_t3_ParamLimits

0x040c,	// (0x0006c4aa) popup_number_entry_window_t5_ParamLimits

0x040c,	// (0x0006c4aa) popup_number_entry_window_t5

0xf0ca,	// (0x0007b168) popup_number_entry_window_t_ParamLimits

0x940c,	// (0x000754aa) text_title_cp2_ParamLimits

0x9914,	// (0x000759b2) aid_hotspot_pointer_text2_pane

0x992e,	// (0x000759cc) main_viewer_pane_g9_ParamLimits

0x992e,	// (0x000759cc) main_viewer_pane_g9

0xacf6,	// (0x00076d94) cale_month_pane_t1_ParamLimits

0xad33,	// (0x00076dd1) bg_cale_pane_ParamLimits

0xad4b,	// (0x00076de9) list_cale_pane_ParamLimits

0xad5c,	// (0x00076dfa) listscroll_cale_day_pane_t1

0xad6e,	// (0x00076e0c) scroll_pane_cp09_ParamLimits

0x2a54,	// (0x0006eaf2) main_mup_eq_pane_t1_ParamLimits

0x2a54,	// (0x0006eaf2) main_mup_eq_pane_t1

0x2a6e,	// (0x0006eb0c) main_mup_eq_pane_t2_ParamLimits

0x2a6e,	// (0x0006eb0c) main_mup_eq_pane_t2

0x2a88,	// (0x0006eb26) main_mup_eq_pane_t3_ParamLimits

0x2a88,	// (0x0006eb26) main_mup_eq_pane_t3

0x2aa4,	// (0x0006eb42) main_mup_eq_pane_t4_ParamLimits

0x2aa4,	// (0x0006eb42) main_mup_eq_pane_t4

0x2ac0,	// (0x0006eb5e) main_mup_eq_pane_t5_ParamLimits

0x2ac0,	// (0x0006eb5e) main_mup_eq_pane_t5

0x2adc,	// (0x0006eb7a) main_mup_eq_pane_t6_ParamLimits

0x2adc,	// (0x0006eb7a) main_mup_eq_pane_t6

0x2af0,	// (0x0006eb8e) main_mup_eq_pane_t7_ParamLimits

0x2af0,	// (0x0006eb8e) main_mup_eq_pane_t7

0x2b04,	// (0x0006eba2) main_mup_eq_pane_t8_ParamLimits

0x2b04,	// (0x0006eba2) main_mup_eq_pane_t8

0x2b18,	// (0x0006ebb6) main_mup_eq_pane_t9_ParamLimits

0x2b18,	// (0x0006ebb6) main_mup_eq_pane_t9

0x2b32,	// (0x0006ebd0) main_mup_eq_pane_t10_ParamLimits

0x2b32,	// (0x0006ebd0) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007b4f3) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007b4f3) main_mup_eq_pane_t

0x2be1,	// (0x0006ec7f) mup_equalizer_pane_cp5_ParamLimits

0x2bf5,	// (0x0006ec93) mup_equalizer_pane_cp6_ParamLimits

0x2c09,	// (0x0006eca7) mup_equalizer_pane_cp7_ParamLimits

0x93ab,	// (0x00075449) main_gallery_pane

0xc8d0,	// (0x0007896e) smil2_volume_pane

0xc8d8,	// (0x00078976) smil_status_volume_pane_g1_ParamLimits

0xc8eb,	// (0x00078989) smil_status_volume_pane_g2_ParamLimits

0x998e,	// (0x00075a2c) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0007b6bc) smil_status_volume_pane_g_ParamLimits

0xca3d,	// (0x00078adb) bg_popup_window_pane_cp07_ParamLimits

0xca4b,	// (0x00078ae9) blid_firmament_pane

0x42c6,	// (0x00070364) aid_size_cell_gallery_ParamLimits

0x42c6,	// (0x00070364) aid_size_cell_gallery

0x42dc,	// (0x0007037a) grid_gallery_pane_ParamLimits

0x42dc,	// (0x0007037a) grid_gallery_pane

0x42f5,	// (0x00070393) cell_gallery_pane_ParamLimits

0x42f5,	// (0x00070393) cell_gallery_pane

0xcb6e,	// (0x00078c0c) bg_cell_gallery_focus_pane_ParamLimits

0xcb6e,	// (0x00078c0c) bg_cell_gallery_focus_pane

0xcb80,	// (0x00078c1e) cell_gallery_pane_g1_ParamLimits

0xcb80,	// (0x00078c1e) cell_gallery_pane_g1

0x433e,	// (0x000703dc) cell_gallery_pane_g2_ParamLimits

0x433e,	// (0x000703dc) cell_gallery_pane_g2

0x434b,	// (0x000703e9) cell_gallery_pane_g3_ParamLimits

0x434b,	// (0x000703e9) cell_gallery_pane_g3

0xcb8c,	// (0x00078c2a) cell_gallery_pane_g4_ParamLimits

0xcb8c,	// (0x00078c2a) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0007b76a) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0007b76a) cell_gallery_pane_g

0xcb98,	// (0x00078c36) bg_cell_gallery_focus_pane_g1

0xcba0,	// (0x00078c3e) bg_cell_gallery_focus_pane_g2

0xcba8,	// (0x00078c46) bg_cell_gallery_focus_pane_g3

0xcbb0,	// (0x00078c4e) bg_cell_gallery_focus_pane_g4

0xcbb8,	// (0x00078c56) bg_cell_gallery_focus_pane_g5

0xcbc0,	// (0x00078c5e) bg_cell_gallery_focus_pane_g6

0xcbc8,	// (0x00078c66) bg_cell_gallery_focus_pane_g7

0xcbd0,	// (0x00078c6e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0007b773) bg_cell_gallery_focus_pane_g

0xcbd8,	// (0x00078c76) aid_firma_cardinal

0xcbec,	// (0x00078c8a) blid_firmament_pane_t1

0xcc0f,	// (0x00078cad) blid_firmament_pane_t2

0xcc26,	// (0x00078cc4) blid_firmament_pane_t3

0xcc3d,	// (0x00078cdb) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0007b784) blid_firmament_pane_t

0xcc54,	// (0x00078cf2) blid_sat_info_pane

0xcc64,	// (0x00078d02) blid_sat_info_pane_g1

0xcc64,	// (0x00078d02) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0007b78d) blid_sat_info_pane_g

0xcc6e,	// (0x00078d0c) blid_sat_info_pane_t1

0xcc7c,	// (0x00078d1a) smil2_volume_content_pane

0xcc85,	// (0x00078d23) smil2_volume_pane_g1

0xcc8d,	// (0x00078d2b) smil2_volume_content_pane_g1

0xcc96,	// (0x00078d34) smil2_volume_content_pane_g2

0xcc9f,	// (0x00078d3d) smil2_volume_content_pane_g3

0xcca8,	// (0x00078d46) smil2_volume_content_pane_g4

0xccb1,	// (0x00078d4f) smil2_volume_content_pane_g5

0xccba,	// (0x00078d58) smil2_volume_content_pane_g6

0xccc3,	// (0x00078d61) smil2_volume_content_pane_g7

0xcccc,	// (0x00078d6a) smil2_volume_content_pane_g8

0xccd5,	// (0x00078d73) smil2_volume_content_pane_g9

0xccde,	// (0x00078d7c) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0007b792) smil2_volume_content_pane_g

0x0b75,	// (0x0006cc13) cale_week_day_heading_pane_t1_ParamLimits

0x0bbf,	// (0x0006cc5d) cale_week_day_heading_pane_t2_ParamLimits

0x0c0e,	// (0x0006ccac) cale_week_day_heading_pane_t3_ParamLimits

0x0c5d,	// (0x0006ccfb) cale_week_day_heading_pane_t4_ParamLimits

0x0cac,	// (0x0006cd4a) cale_week_day_heading_pane_t5_ParamLimits

0x0d03,	// (0x0006cda1) cale_week_day_heading_pane_t6_ParamLimits

0x0d5a,	// (0x0006cdf8) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007b26f) cale_week_day_heading_pane_t_ParamLimits

0xa3b8,	// (0x00076456) bg_cale_side_pane_ParamLimits

0x0da4,	// (0x0006ce42) cale_week_time_pane_t1_ParamLimits

0x0dbe,	// (0x0006ce5c) cale_week_time_pane_t2_ParamLimits

0x0dd8,	// (0x0006ce76) cale_week_time_pane_t3_ParamLimits

0x0df2,	// (0x0006ce90) cale_week_time_pane_t4_ParamLimits

0x0e0c,	// (0x0006ceaa) cale_week_time_pane_t5_ParamLimits

0x0e26,	// (0x0006cec4) cale_week_time_pane_t6_ParamLimits

0x0e40,	// (0x0006cede) cale_week_time_pane_t7_ParamLimits

0x0e5a,	// (0x0006cef8) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007b27e) cale_week_time_pane_t_ParamLimits

0x0e7a,	// (0x0006cf18) cell_cale_week_pane_g2_ParamLimits

0xa3b8,	// (0x00076456) bg_cale_side_pane_cp01_ParamLimits

0x212c,	// (0x0006e1ca) cale_month_week_pane_t1_ParamLimits

0x2145,	// (0x0006e1e3) cale_month_week_pane_t2_ParamLimits

0x215e,	// (0x0006e1fc) cale_month_week_pane_t3_ParamLimits

0x2177,	// (0x0006e215) cale_month_week_pane_t4_ParamLimits

0x2190,	// (0x0006e22e) cale_month_week_pane_t5_ParamLimits

0x21a9,	// (0x0006e247) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007b353) cale_month_week_pane_t_ParamLimits

0x983b,	// (0x000758d9) cell_cale_month_pane_g1_ParamLimits

0x93ab,	// (0x00075449) main_cale_event_viewer_pane

0x9325,	// (0x000753c3) listscroll_cale_event_viewer_pane

0xcce7,	// (0x00078d85) list_cale_ev_pane

0xccef,	// (0x00078d8d) scroll_pane_cp023

0xccfb,	// (0x00078d99) field_cale_ev_pane_ParamLimits

0xccfb,	// (0x00078d99) field_cale_ev_pane

0xcd19,	// (0x00078db7) field_cale_ev_content_pane_ParamLimits

0xcd19,	// (0x00078db7) field_cale_ev_content_pane

0xcd25,	// (0x00078dc3) field_cale_ev_pane_g1_ParamLimits

0xcd25,	// (0x00078dc3) field_cale_ev_pane_g1

0xcd31,	// (0x00078dcf) field_cale_ev_pane_g2_ParamLimits

0xcd31,	// (0x00078dcf) field_cale_ev_pane_g2

0xcd49,	// (0x00078de7) field_cale_ev_pane_g3_ParamLimits

0xcd49,	// (0x00078de7) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0007b7a7) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0007b7a7) field_cale_ev_pane_g

0xcd61,	// (0x00078dff) field_cale_ev_pane_t1_ParamLimits

0xcd61,	// (0x00078dff) field_cale_ev_pane_t1

0xa32b,	// (0x000763c9) field_cale_ev_content_pane_t1_ParamLimits

0xa32b,	// (0x000763c9) field_cale_ev_content_pane_t1

0xb56e,	// (0x0007760c) bg_button_pane_cp01

0x08a2,	// (0x0006c940) listscroll_cale_week_pane_ParamLimits

0xa363,	// (0x00076401) popup_toolbar_window_cp01

0xa389,	// (0x00076427) listscroll_cale_week_pane_t1_ParamLimits

0x08a2,	// (0x0006c940) listscroll_cale_day_pane_ParamLimits

0xa363,	// (0x00076401) popup_toolbar_window_cp02

0xad5c,	// (0x00076dfa) listscroll_cale_day_pane_t1_ParamLimits

0x3609,	// (0x0006f6a7) main_cale_month_pane_ParamLimits

0x9979,	// (0x00075a17) popup_toolbar_window_cp03_ParamLimits

0x9979,	// (0x00075a17) popup_toolbar_window_cp03

0x2f09,	// (0x0006efa7) main_image_pane_g2_ParamLimits

0x2f09,	// (0x0006efa7) main_image_pane_g2

0x2f1a,	// (0x0006efb8) main_image_pane_g3_ParamLimits

0x2f1a,	// (0x0006efb8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007b585) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007b585) main_image_pane_g

0xb688,	// (0x00077726) main_image_pane_t1_ParamLimits

0x2f2b,	// (0x0006efc9) main_image_pane_t2_ParamLimits

0x2f2b,	// (0x0006efc9) main_image_pane_t2

0x2f3d,	// (0x0006efdb) main_image_pane_t3_ParamLimits

0x2f3d,	// (0x0006efdb) main_image_pane_t3

0x2f65,	// (0x0006f003) main_image_pane_t4_ParamLimits

0x2f65,	// (0x0006f003) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007b58c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007b58c) main_image_pane_t

0x2f85,	// (0x0006f023) popup_image_details_window_cp01

0x2f8f,	// (0x0006f02d) popup_toobar_trans_pane_cp01_ParamLimits

0x2f8f,	// (0x0006f02d) popup_toobar_trans_pane_cp01

0x3714,	// (0x0006f7b2) popup_image_details_window_ParamLimits

0x3714,	// (0x0006f7b2) popup_image_details_window

0x994c,	// (0x000759ea) popup_image_focus_window

0x3b33,	// (0x0006fbd1) camera2_autofocus_pane_ParamLimits

0x3b33,	// (0x0006fbd1) camera2_autofocus_pane

0x9325,	// (0x000753c3) bg_popup_sub_pane_cp06

0xcd78,	// (0x00078e16) popup_image_focus_window_g1

0xcd80,	// (0x00078e1e) popup_image_focus_window_g2

0xcd88,	// (0x00078e26) popup_image_focus_window_g3

0xcd90,	// (0x00078e2e) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0007b7ae) popup_image_focus_window_g

0xcd98,	// (0x00078e36) popup_image_focus_window_t1

0xcda6,	// (0x00078e44) popup_image_focus_window_t2

0xcdb6,	// (0x00078e54) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0007b7b7) popup_image_focus_window_t

0xcdc4,	// (0x00078e62) camera2_autofocus_pane_g1

0xa4dd,	// (0x0007657b) bg_tb_trans_pane_cp01

0xcdd2,	// (0x00078e70) popup_image_details_window_g1

0xcde5,	// (0x00078e83) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0007b7c9) popup_image_details_window_g

0xce0e,	// (0x00078eac) popup_image_details_window_t1

0xce20,	// (0x00078ebe) popup_image_details_window_t2

0xce39,	// (0x00078ed7) popup_image_details_window_t3

0xce4d,	// (0x00078eeb) popup_image_details_window_t4

0xce68,	// (0x00078f06) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0007b7d0) popup_image_details_window_t

0xa20a,	// (0x000762a8) bg_calc_paper_pane_ParamLimits

0x93ab,	// (0x00075449) grid_highlight_pane_cp013

0x97a1,	// (0x0007583f) list_calc_pane_ParamLimits

0x97b3,	// (0x00075851) scroll_pane_cp024

0xa21e,	// (0x000762bc) bg_calc_display_pane_ParamLimits

0x0706,	// (0x0006c7a4) calc_display_pane_t1_ParamLimits

0x0718,	// (0x0006c7b6) calc_display_pane_t2_ParamLimits

0x97bb,	// (0x00075859) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007b1ef) calc_display_pane_t_ParamLimits

0x07d8,	// (0x0006c876) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007b20c) cell_calc_pane_g

0x07e1,	// (0x0006c87f) cell_calc_pane_t1

0xa27d,	// (0x0007631b) grid_highlight_pane_cp02_ParamLimits

0xa293,	// (0x00076331) toolbar_button_pane_cp01_ParamLimits

0xa293,	// (0x00076331) toolbar_button_pane_cp01

0xb6cd,	// (0x0007776b) temp_image_control_pane_ParamLimits

0xb6cd,	// (0x0007776b) temp_image_control_pane

0x939d,	// (0x0007543b) main_mp3_pane

0xce82,	// (0x00078f20) temp_image_control_pane_g1_ParamLimits

0xce82,	// (0x00078f20) temp_image_control_pane_g1

0xce90,	// (0x00078f2e) temp_image_control_pane_g2_ParamLimits

0xce90,	// (0x00078f2e) temp_image_control_pane_g2

0xcea2,	// (0x00078f40) temp_image_control_pane_g3_ParamLimits

0xcea2,	// (0x00078f40) temp_image_control_pane_g3

0x4388,	// (0x00070426) temp_image_control_pane_g4_ParamLimits

0x4388,	// (0x00070426) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0007b7db) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0007b7db) temp_image_control_pane_g

0xce82,	// (0x00078f20) main_mp3_pane_g1

0x439b,	// (0x00070439) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0007b7e4) main_mp3_pane_g

0xcee5,	// (0x00078f83) main_mp3_pane_t1

0xa41b,	// (0x000764b9) main_camera_pane_g8_ParamLimits

0xa41b,	// (0x000764b9) main_camera_pane_g8

0x117e,	// (0x0006d21c) main_video_pane_g7_ParamLimits

0x117e,	// (0x0006d21c) main_video_pane_g7

0x99ce,	// (0x00075a6c) main_camera2_pane_t7_ParamLimits

0x99ce,	// (0x00075a6c) main_camera2_pane_t7

0xab14,	// (0x00076bb2) scroll_pane_cp025_ParamLimits

0xab14,	// (0x00076bb2) scroll_pane_cp025

0xab28,	// (0x00076bc6) scroll_pane_cp026_ParamLimits

0xab28,	// (0x00076bc6) scroll_pane_cp026

0xab37,	// (0x00076bd5) wml_content_pane_ParamLimits

0x93ab,	// (0x00075449) main_touch_calib_pane

0x446f,	// (0x0007050d) main_touch_calib_pane_g1

0x4481,	// (0x0007051f) main_touch_calib_pane_g2

0x4493,	// (0x00070531) main_touch_calib_pane_g3

0x44a5,	// (0x00070543) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0007b802) main_touch_calib_pane_g

0x44b7,	// (0x00070555) main_touch_calib_pane_t1

0x44d1,	// (0x0007056f) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0007b80b) main_touch_calib_pane_t

0xb29a,	// (0x00077338) mup_progress_pane_cp02

0xb2cf,	// (0x0007736d) navi_pane_g1

0xb38a,	// (0x00077428) navi_pane_mp_t3

0x939d,	// (0x0007543b) main_mp3_pane_ParamLimits

0x389f,	// (0x0006f93d) navi_pane_ParamLimits

0xce82,	// (0x00078f20) main_mp3_pane_g1_ParamLimits

0x439b,	// (0x00070439) main_mp3_pane_g2_ParamLimits

0x43a9,	// (0x00070447) main_mp3_pane_g3_ParamLimits

0x43a9,	// (0x00070447) main_mp3_pane_g3

0x43b7,	// (0x00070455) main_mp3_pane_g4_ParamLimits

0x43b7,	// (0x00070455) main_mp3_pane_g4

0xceb2,	// (0x00078f50) main_mp3_pane_g5_ParamLimits

0xceb2,	// (0x00078f50) main_mp3_pane_g5

0xcec0,	// (0x00078f5e) main_mp3_pane_g6_ParamLimits

0xcec0,	// (0x00078f5e) main_mp3_pane_g6

0xcecd,	// (0x00078f6b) main_mp3_pane_g7_ParamLimits

0xcecd,	// (0x00078f6b) main_mp3_pane_g7

0xced9,	// (0x00078f77) main_mp3_pane_g8_ParamLimits

0xced9,	// (0x00078f77) main_mp3_pane_g8

0xf746,	// (0x0007b7e4) main_mp3_pane_g_ParamLimits

0x43c3,	// (0x00070461) main_mp3_pane_t2

0x43d1,	// (0x0007046f) main_mp3_pane_t3

0xcef3,	// (0x00078f91) main_mp3_pane_t4

0xcf01,	// (0x00078f9f) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0007b7f5) main_mp3_pane_t

0xcf0f,	// (0x00078fad) mup_progress_pane_cp01

0x9353,	// (0x000753f1) aid_zoom_text_secondary2

0xcce7,	// (0x00078d85) list_cale_ev2_pane

0xccef,	// (0x00078d8d) scroll_pane_cp023_ParamLimits

0x4527,	// (0x000705c5) field_cale_ev2_pane_ParamLimits

0x4527,	// (0x000705c5) field_cale_ev2_pane

0xa4eb,	// (0x00076589) field_cale_ev2_pane_g1_ParamLimits

0xa4eb,	// (0x00076589) field_cale_ev2_pane_g1

0xa4f7,	// (0x00076595) field_cale_ev2_pane_g2_ParamLimits

0xa4f7,	// (0x00076595) field_cale_ev2_pane_g2

0xa50f,	// (0x000765ad) field_cale_ev2_pane_g3_ParamLimits

0xa50f,	// (0x000765ad) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0007b816) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0007b816) field_cale_ev2_pane_g

0xa533,	// (0x000765d1) field_cale_ev2_pane_t1_ParamLimits

0xa533,	// (0x000765d1) field_cale_ev2_pane_t1

0xa54a,	// (0x000765e8) field_cale_ev2_pane_t2_ParamLimits

0xa54a,	// (0x000765e8) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0007b81f) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0007b81f) field_cale_ev2_pane_t

0x2dbd,	// (0x0006ee5b) main_postcard_pane_g5_ParamLimits

0x2dbd,	// (0x0006ee5b) main_postcard_pane_g5

0x2dd3,	// (0x0006ee71) main_postcard_pane_g6_ParamLimits

0x2dd3,	// (0x0006ee71) main_postcard_pane_g6

0x0f44,	// (0x0006cfe2) camera2_autofocus_pane_cp_ParamLimits

0x0f44,	// (0x0006cfe2) camera2_autofocus_pane_cp

0x939d,	// (0x0007543b) main_mup3_pane

0x4568,	// (0x00070606) main_mup3_pane_g1_ParamLimits

0x4568,	// (0x00070606) main_mup3_pane_g1

0x458a,	// (0x00070628) main_mup3_pane_g2_ParamLimits

0x458a,	// (0x00070628) main_mup3_pane_g2

0x460a,	// (0x000706a8) main_mup3_pane_g3_ParamLimits

0x460a,	// (0x000706a8) main_mup3_pane_g3

0x4650,	// (0x000706ee) main_mup3_pane_g4_ParamLimits

0x4650,	// (0x000706ee) main_mup3_pane_g4

0x4696,	// (0x00070734) main_mup3_pane_g5_ParamLimits

0x4696,	// (0x00070734) main_mup3_pane_g5

0x46dc,	// (0x0007077a) main_mup3_pane_g6_ParamLimits

0x46dc,	// (0x0007077a) main_mup3_pane_g6

0xcf17,	// (0x00078fb5) main_mup3_pane_g7_ParamLimits

0xcf17,	// (0x00078fb5) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0007b82f) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0007b82f) main_mup3_pane_g

0x475a,	// (0x000707f8) main_mup3_pane_t1_ParamLimits

0x475a,	// (0x000707f8) main_mup3_pane_t1

0x47ce,	// (0x0007086c) main_mup3_pane_t2_ParamLimits

0x47ce,	// (0x0007086c) main_mup3_pane_t2

0x48a2,	// (0x00070940) main_mup3_pane_t4_ParamLimits

0x48a2,	// (0x00070940) main_mup3_pane_t4

0x48f8,	// (0x00070996) main_mup3_pane_t5_ParamLimits

0x48f8,	// (0x00070996) main_mup3_pane_t5

0x49b4,	// (0x00070a52) main_mup3_pane_t6_ParamLimits

0x49b4,	// (0x00070a52) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0007b840) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0007b840) main_mup3_pane_t

0x4a6c,	// (0x00070b0a) mup3_progress_pane_ParamLimits

0x4a6c,	// (0x00070b0a) mup3_progress_pane

0x4af8,	// (0x00070b96) popup_mup3_control_window_ParamLimits

0x4af8,	// (0x00070b96) popup_mup3_control_window

0xcf25,	// (0x00078fc3) popup_mup3_text_window

0x4b2a,	// (0x00070bc8) mup3_progress_pane_t1

0x4b49,	// (0x00070be7) mup3_progress_pane_t2

0xcf2d,	// (0x00078fcb) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0007b84d) mup3_progress_pane_t

0xcf4a,	// (0x00078fe8) mup_progress_pane_cp03

0x9325,	// (0x000753c3) bg_tb_trans_pane_cp04

0x4b68,	// (0x00070c06) mup3_volume_pane

0x4b70,	// (0x00070c0e) popup_mup3_control_window_g1

0x4b79,	// (0x00070c17) mup3_volume_pane_g1

0x4b82,	// (0x00070c20) mup3_volume_pane_g2

0x4b8b,	// (0x00070c29) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0007b854) mup3_volume_pane_g

0x9325,	// (0x000753c3) bg_tb_trans_pane_cp03

0xcf5a,	// (0x00078ff8) popup_mup3_text_window_g1

0xcf62,	// (0x00079000) popup_mup3_text_window_t1

0xa266,	// (0x00076304) list_calc_item_pane_g1_ParamLimits

0xc9ab,	// (0x00078a49) mup_volume_pane_cp_g1

0x44eb,	// (0x00070589) main_touch_calib_pane_t3

0x44ff,	// (0x0007059d) main_touch_calib_pane_t4

0x4513,	// (0x000705b1) main_touch_calib_pane_t5

0x932f,	// (0x000753cd) aid_cell_size_toolbar2

0x9337,	// (0x000753d5) aid_popup3_width_pane

0x9343,	// (0x000753e1) aid_zoom_text_msg_primary

0x0f23,	// (0x0006cfc1) vorec_t7

0xa22a,	// (0x000762c8) bg_calc_paper_pane_g1_ParamLimits

0xa236,	// (0x000762d4) bg_calc_paper_pane_g2_ParamLimits

0xa242,	// (0x000762e0) bg_calc_paper_pane_g3_ParamLimits

0xa24e,	// (0x000762ec) bg_calc_paper_pane_g4_ParamLimits

0xa25a,	// (0x000762f8) bg_calc_paper_pane_g5_ParamLimits

0x0761,	// (0x0006c7ff) bg_calc_paper_pane_g6_ParamLimits

0x0770,	// (0x0006c80e) bg_calc_paper_pane_g7_ParamLimits

0x077f,	// (0x0006c81d) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007b1f6) bg_calc_paper_pane_g_ParamLimits

0x0792,	// (0x0006c830) calc_bg_paper_pane_g9_ParamLimits

0x1090,	// (0x0006d12e) image_qvga_pane_ParamLimits

0x1090,	// (0x0006d12e) image_qvga_pane

0xa14d,	// (0x000761eb) bg_popup_sub_pane_cp04_ParamLimits

0xb604,	// (0x000776a2) popup_mup_playback_window_g1_ParamLimits

0xb610,	// (0x000776ae) popup_mup_playback_window_t1_ParamLimits

0xb625,	// (0x000776c3) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007b580) popup_mup_playback_window_t_ParamLimits

0x402a,	// (0x000700c8) main_mup2_pane_g3_ParamLimits

0x402a,	// (0x000700c8) main_mup2_pane_g3

0x14a4,	// (0x0006d542) popup_toolbar_window_cp04

0xba1a,	// (0x00077ab8) popup_call2_audio_second_window_g3_ParamLimits

0xba1a,	// (0x00077ab8) popup_call2_audio_second_window_g3

0xbe24,	// (0x00077ec2) popup_call2_audio_first_window_g4_ParamLimits

0xbe24,	// (0x00077ec2) popup_call2_audio_first_window_g4

0xc4a3,	// (0x00078541) popup_call2_audio_in_window_g4_ParamLimits

0xc4a3,	// (0x00078541) popup_call2_audio_in_window_g4

0x2eeb,	// (0x0006ef89) aid_area_sk_bg_cut_ParamLimits

0x2eeb,	// (0x0006ef89) aid_area_sk_bg_cut

0xb63a,	// (0x000776d8) aid_area_sk_bg_cut_2_ParamLimits

0xb63a,	// (0x000776d8) aid_area_sk_bg_cut_2

0x432e,	// (0x000703cc) aid_placing_details_win

0x4336,	// (0x000703d4) aid_placing_details_win_2

0xcdc4,	// (0x00078e62) camera2_autofocus_pane_g1_ParamLimits

0x0353,	// (0x0006c3f1) popup_fixed_preview_cale_window_ParamLimits

0x0353,	// (0x0006c3f1) popup_fixed_preview_cale_window

0xb408,	// (0x000774a6) navi_slider_pane_g3

0xb411,	// (0x000774af) navi_slider_pane_g4

0xb41a,	// (0x000774b8) navi_slider_pane_g5

0xb408,	// (0x000774a6) navi_slider_pane_g6

0x98fb,	// (0x00075999) navi_slider_pane_g7

0xb53b,	// (0x000775d9) mup_scale_pane_g3

0xb544,	// (0x000775e2) mup_scale_pane_g4

0xb54d,	// (0x000775eb) mup_scale_pane_g5

0x2c1d,	// (0x0006ecbb) mup_scale_pane_g6

0x2c26,	// (0x0006ecc4) mup_scale_pane_g7

0xb408,	// (0x000774a6) cams2_slider_pane_g3

0xca2d,	// (0x00078acb) cams2_slider_pane_g4

0x9a34,	// (0x00075ad2) cams2_slider_pane_g5

0xb408,	// (0x000774a6) cams2_slider_pane_g6

0x9a3c,	// (0x00075ada) cams2_slider_pane_g7

0xcc64,	// (0x00078d02) camera2_autofocus_pane_cp_g1

0xc844,	// (0x000788e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc844,	// (0x000788e2) bg_popup_preview_window_pane_cp02

0xcf70,	// (0x0007900e) list_fp_cale_pane_ParamLimits

0xcf70,	// (0x0007900e) list_fp_cale_pane

0xcf7c,	// (0x0007901a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf7c,	// (0x0007901a) popup_fixed_preview_cale_window_t1

0x4b94,	// (0x00070c32) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b94,	// (0x00070c32) popup_fixed_preview_cale_window_t2

0x4ba9,	// (0x00070c47) popup_fixed_preview_cale_window_t3_ParamLimits

0x4ba9,	// (0x00070c47) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0007b85b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0007b85b) popup_fixed_preview_cale_window_t

0x4bbe,	// (0x00070c5c) list_single_fp_cale_pane_ParamLimits

0x4bbe,	// (0x00070c5c) list_single_fp_cale_pane

0xcf9a,	// (0x00079038) list_single_fp_cale_pane_g1_ParamLimits

0xcf9a,	// (0x00079038) list_single_fp_cale_pane_g1

0xcfa6,	// (0x00079044) list_single_fp_cale_pane_g2_ParamLimits

0xcfa6,	// (0x00079044) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0007b862) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0007b862) list_single_fp_cale_pane_g

0xcfbf,	// (0x0007905d) list_single_fp_cale_pane_t1_ParamLimits

0xcfbf,	// (0x0007905d) list_single_fp_cale_pane_t1

0xcfd1,	// (0x0007906f) list_single_fp_cale_pane_t2_ParamLimits

0xcfd1,	// (0x0007906f) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0007b869) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0007b869) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93ab,	// (0x00075449) main_dialer_pane

0x4bd4,	// (0x00070c72) aid_cell_size_keypad

0x4bde,	// (0x00070c7c) dialer_ne_pane

0x4be6,	// (0x00070c84) grid_dialer_command_1_pane

0x4bee,	// (0x00070c8c) grid_dialer_command_2_pane

0x4bf6,	// (0x00070c94) grid_dialer_keypad_pane

0x4c08,	// (0x00070ca6) bg_popup_call_pane_cp06_ParamLimits

0x4c08,	// (0x00070ca6) bg_popup_call_pane_cp06

0x4c14,	// (0x00070cb2) dialer_ne_clear_pane_ParamLimits

0x4c14,	// (0x00070cb2) dialer_ne_clear_pane

0xd004,	// (0x000790a2) dialer_ne_pane_g1

0xd00c,	// (0x000790aa) dialer_ne_pane_t1_ParamLimits

0xd00c,	// (0x000790aa) dialer_ne_pane_t1

0x4c20,	// (0x00070cbe) dialer_ne_pane_t2_ParamLimits

0x4c20,	// (0x00070cbe) dialer_ne_pane_t2

0x4c4a,	// (0x00070ce8) dialer_ne_pane_t3_ParamLimits

0x4c4a,	// (0x00070ce8) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0007b86e) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0007b86e) dialer_ne_pane_t

0x4c7a,	// (0x00070d18) dialer_ne_pane_t3_copy1_ParamLimits

0x4c7a,	// (0x00070d18) dialer_ne_pane_t3_copy1

0x4ca9,	// (0x00070d47) cell_dialer_keypad_pane_ParamLimits

0x4ca9,	// (0x00070d47) cell_dialer_keypad_pane

0x4cc0,	// (0x00070d5e) cell_dialer_command_1_pane_ParamLimits

0x4cc0,	// (0x00070d5e) cell_dialer_command_1_pane

0x4cd6,	// (0x00070d74) cell_dialer_command_2_pane_ParamLimits

0x4cd6,	// (0x00070d74) cell_dialer_command_2_pane

0xd01e,	// (0x000790bc) bg_button_pane_cp02_ParamLimits

0xd01e,	// (0x000790bc) bg_button_pane_cp02

0x4ce5,	// (0x00070d83) cell_dialer_keypad_pane_g1_ParamLimits

0x4ce5,	// (0x00070d83) cell_dialer_keypad_pane_g1

0xd01e,	// (0x000790bc) bg_button_pane_cp03_ParamLimits

0xd01e,	// (0x000790bc) bg_button_pane_cp03

0x4cf9,	// (0x00070d97) cell_dialer_command_1_pane_g1_ParamLimits

0x4cf9,	// (0x00070d97) cell_dialer_command_1_pane_g1

0xd02a,	// (0x000790c8) bg_button_pane_cp04

0x4d0d,	// (0x00070dab) cell_dialer_command_2_pane_g1

0xa413,	// (0x000764b1) bg_button_pane_cp06

0xd032,	// (0x000790d0) dialer_ne_clear_pane_g1

0xb2db,	// (0x00077379) navi_pane_g2

0xb309,	// (0x000773a7) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007b483) navi_pane_g

0xb398,	// (0x00077436) navi_pane_mv_g2

0xb3bf,	// (0x0007745d) navi_pane_mv_g5

0x27eb,	// (0x0006e889) navi_pane_mv_t1

0xa21e,	// (0x000762bc) main_clock2_pane

0x4d58,	// (0x00070df6) main_clock2_list_pane_ParamLimits

0x4d58,	// (0x00070df6) main_clock2_list_pane

0x4d90,	// (0x00070e2e) main_clock2_pane_t1_ParamLimits

0x4d90,	// (0x00070e2e) main_clock2_pane_t1

0x4dce,	// (0x00070e6c) main_clock2_pane_t2_ParamLimits

0x4dce,	// (0x00070e6c) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0007b87a) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0007b87a) main_clock2_pane_t

0x4e6c,	// (0x00070f0a) popup_clock_analogue_window_cp03_ParamLimits

0x4e6c,	// (0x00070f0a) popup_clock_analogue_window_cp03

0x4e91,	// (0x00070f2f) popup_clock_digital_window_cp02_ParamLimits

0x4e91,	// (0x00070f2f) popup_clock_digital_window_cp02

0x4f02,	// (0x00070fa0) main_clock2_list_single_pane_ParamLimits

0x4f02,	// (0x00070fa0) main_clock2_list_single_pane

0xa413,	// (0x000764b1) list_highlight_pane_cp05

0xd06c,	// (0x0007910a) main_clock2_list_single_pane_t1

0x14a4,	// (0x0006d542) popup_toolbar_window_cp04_ParamLimits

0x4358,	// (0x000703f6) camera2_autofocus_pane_g2_ParamLimits

0x4358,	// (0x000703f6) camera2_autofocus_pane_g2

0x4364,	// (0x00070402) camera2_autofocus_pane_g3_ParamLimits

0x4364,	// (0x00070402) camera2_autofocus_pane_g3

0x4370,	// (0x0007040e) camera2_autofocus_pane_g4_ParamLimits

0x4370,	// (0x0007040e) camera2_autofocus_pane_g4

0x437c,	// (0x0007041a) camera2_autofocus_pane_g5_ParamLimits

0x437c,	// (0x0007041a) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0007b7be) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0007b7be) camera2_autofocus_pane_g

0x4548,	// (0x000705e6) camera2_autofocus_pane_cp_g2

0x4550,	// (0x000705ee) camera2_autofocus_pane_cp_g3

0x4558,	// (0x000705f6) camera2_autofocus_pane_cp_g4

0x4560,	// (0x000705fe) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0007b824) camera2_autofocus_pane_cp_g

0x4c00,	// (0x00070c9e) popup_dialer_spcha_window

0x9325,	// (0x000753c3) bg_popup_sub_pane_cp07

0xd07a,	// (0x00079118) list_spcha_pane

0xd082,	// (0x00079120) list_single_spcha_pane_ParamLimits

0xd082,	// (0x00079120) list_single_spcha_pane

0x9325,	// (0x000753c3) list_highlight_pane_cp06

0xd093,	// (0x00079131) list_single_spcha_pane_t1

0xc24d,	// (0x000782eb) popup_call2_audio_out_window_g4_ParamLimits

0xc24d,	// (0x000782eb) popup_call2_audio_out_window_g4

0x93ab,	// (0x00075449) main_imed2_pane

0x9954,	// (0x000759f2) popup_imed_adjust2_window

0x372c,	// (0x0006f7ca) popup_imed_trans_window_ParamLimits

0x372c,	// (0x0006f7ca) popup_imed_trans_window

0xca96,	// (0x00078b34) popup_blid_sat_info2_window_t1

0xcaa4,	// (0x00078b42) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0007b753) popup_blid_sat_info2_window_t

0x4fac,	// (0x0007104a) aid_size_cell_colour_35

0x4fcc,	// (0x0007106a) aid_size_cell_colour_112

0x4fec,	// (0x0007108a) aid_size_cell_effect

0xc850,	// (0x000788ee) bg_tb_trans_pane_cp02

0xae65,	// (0x00076f03) heading_imed_pane

0x500c,	// (0x000710aa) listscroll_imed_pane

0xd0a1,	// (0x0007913f) heading_imed_pane_g1

0xd0a9,	// (0x00079147) heading_imed_pane_t1

0xd0b7,	// (0x00079155) grid_imed_colour_35_pane_ParamLimits

0xd0b7,	// (0x00079155) grid_imed_colour_35_pane

0x5018,	// (0x000710b6) grid_imed_effect_pane

0xd0cf,	// (0x0007916d) list_imed_aspect_pane

0x502e,	// (0x000710cc) scroll_pane_cp027_ParamLimits

0x502e,	// (0x000710cc) scroll_pane_cp027

0x503f,	// (0x000710dd) cell_imed_effect_pane_ParamLimits

0x503f,	// (0x000710dd) cell_imed_effect_pane

0xd0d7,	// (0x00079175) cell_imed_colour_pane_ParamLimits

0xd0d7,	// (0x00079175) cell_imed_colour_pane

0xd119,	// (0x000791b7) cell_imed_colour_pane_g1_ParamLimits

0xd119,	// (0x000791b7) cell_imed_colour_pane_g1

0xd12a,	// (0x000791c8) hgihlgiht_grid_pane_cp016_ParamLimits

0xd12a,	// (0x000791c8) hgihlgiht_grid_pane_cp016

0x5066,	// (0x00071104) cell_imed_effect_pane_g1

0x506e,	// (0x0007110c) grid_highlight_pane_cp017

0xd13b,	// (0x000791d9) list_imed_single_pane_ParamLimits

0xd13b,	// (0x000791d9) list_imed_single_pane

0x9325,	// (0x000753c3) list_highlight_pane_cp07

0xd150,	// (0x000791ee) list_imed_aspect_pane_comp1_t1

0xc850,	// (0x000788ee) bg_tb_trans_pane_cp05

0xd172,	// (0x00079210) popup_imed_adjust2_window_g1

0xd199,	// (0x00079237) popup_imed_adjust2_window_t1

0xd1b1,	// (0x0007924f) slider_imed_adjust_pane

0xd1c5,	// (0x00079263) slider_imed_adjust_pane_g1

0xd1d5,	// (0x00079273) slider_imed_adjust_pane_g2

0xd1e5,	// (0x00079283) slider_imed_adjust_pane_g3

0xd1f6,	// (0x00079294) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0007b897) slider_imed_adjust_pane_g

0x5077,	// (0x00071115) aid_size_cell_clipart2

0x5083,	// (0x00071121) grid_imed_clipart_pane

0xd207,	// (0x000792a5) scroll_pane_cp031

0x508d,	// (0x0007112b) cell_imed_clipart_pane_ParamLimits

0x508d,	// (0x0007112b) cell_imed_clipart_pane

0x50af,	// (0x0007114d) cell_imed_clipart_pane_g1

0x9325,	// (0x000753c3) grid_highlight_pane_cp014

0x4d6d,	// (0x00070e0b) main_clock2_pane_g1_ParamLimits

0x4d6d,	// (0x00070e0b) main_clock2_pane_g1

0x4ead,	// (0x00070f4b) aid_call2_pane_cp10

0x4ebf,	// (0x00070f5d) aid_call_pane_cp10

0xb23a,	// (0x000772d8) popup_clock_analogue_window_cp10_g1

0xb23a,	// (0x000772d8) popup_clock_analogue_window_cp10_g2

0x4ed1,	// (0x00070f6f) popup_clock_analogue_window_cp10_g3

0x4ed1,	// (0x00070f6f) popup_clock_analogue_window_cp10_g4

0xb23a,	// (0x000772d8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0007b885) popup_clock_analogue_window_cp10_g

0x4ee3,	// (0x00070f81) popup_clock_analogue_window_cp10_t1

0x4f14,	// (0x00070fb2) clock_digital_number_pane_cp10_ParamLimits

0x4f14,	// (0x00070fb2) clock_digital_number_pane_cp10

0x4f2c,	// (0x00070fca) clock_digital_number_pane_cp11_ParamLimits

0x4f2c,	// (0x00070fca) clock_digital_number_pane_cp11

0x4f44,	// (0x00070fe2) clock_digital_number_pane_cp12_ParamLimits

0x4f44,	// (0x00070fe2) clock_digital_number_pane_cp12

0x4f5c,	// (0x00070ffa) clock_digital_number_pane_cp13_ParamLimits

0x4f5c,	// (0x00070ffa) clock_digital_number_pane_cp13

0x4f74,	// (0x00071012) clock_digital_separator_pane_cp10_ParamLimits

0x4f74,	// (0x00071012) clock_digital_separator_pane_cp10

0x4f8c,	// (0x0007102a) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f8c,	// (0x0007102a) popup_clock_digital_window_cp02_t1

0xa145,	// (0x000761e3) clock_digital_number_pane_cp10_g1

0xa145,	// (0x000761e3) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0007b8a0) clock_digital_number_pane_cp10_g

0xa145,	// (0x000761e3) clock_digital_separator_pane_cp10_g1

0xa145,	// (0x000761e3) clock_digital_separator_pane_g2_cp10

0xb3c7,	// (0x00077465) navi_pane_vded_g4

0xb3d0,	// (0x0007746e) navi_pane_vded_g5

0xb3d9,	// (0x00077477) navi_pane_vded_t1

0x93ab,	// (0x00075449) main_vded_pane

0x50b8,	// (0x00071156) main_vded_pane_g1

0x50c2,	// (0x00071160) main_vded_pane_g2

0x50cc,	// (0x0007116a) main_vded_pane_g3

0x0002,

0xf807,	// (0x0007b8a5) main_vded_pane_g

0x50d6,	// (0x00071174) main_vded_pane_t1

0x50e4,	// (0x00071182) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0007b8ac) main_vded_pane_t

0x50f2,	// (0x00071190) vded_slider_pane

0x50fa,	// (0x00071198) vded_video_pane

0xd20f,	// (0x000792ad) vded_video_pane_g1

0x5102,	// (0x000711a0) vded_video_pane_g2

0xcc64,	// (0x00078d02) vded_video_pane_g3

0x0002,

0xf813,	// (0x0007b8b1) vded_video_pane_g

0xd219,	// (0x000792b7) vded_slider_pane_g1

0xc9ab,	// (0x00078a49) vded_slider_pane_g2

0xd222,	// (0x000792c0) vded_slider_pane_g3

0xd22b,	// (0x000792c9) vded_slider_pane_g4

0xd234,	// (0x000792d2) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0007b8b8) vded_slider_pane_g

0x4ae0,	// (0x00070b7e) mup3_rocker_pane_ParamLimits

0x4ae0,	// (0x00070b7e) mup3_rocker_pane

0x510b,	// (0x000711a9) mup3_control_keys_pane_g1

0x5113,	// (0x000711b1) mup3_control_keys_pane_g2

0x511b,	// (0x000711b9) mup3_control_keys_pane_g3

0x5123,	// (0x000711c1) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0007b8c3) mup3_control_keys_pane_g

0x038a,	// (0x0006c428) popup_toolbar2_fixed_window_cp01_ParamLimits

0x038a,	// (0x0006c428) popup_toolbar2_fixed_window_cp01

0x4b14,	// (0x00070bb2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b14,	// (0x00070bb2) popup_toolbar2_fixed_window_cp02

0xbb8c,	// (0x00077c2a) popup_call2_audio_second_window_t4_ParamLimits

0xbb8c,	// (0x00077c2a) popup_call2_audio_second_window_t4

0xc0ba,	// (0x00078158) popup_call2_audio_first_window_t6_ParamLimits

0xc0ba,	// (0x00078158) popup_call2_audio_first_window_t6

0xc350,	// (0x000783ee) popup_call2_audio_out_window_t6_ParamLimits

0xc350,	// (0x000783ee) popup_call2_audio_out_window_t6

0x93ab,	// (0x00075449) main_vitu_pane

0x5133,	// (0x000711d1) aid_size_cell_itu_ParamLimits

0x5133,	// (0x000711d1) aid_size_cell_itu

0xa4dd,	// (0x0007657b) bg_popup_window_pane_cp08_ParamLimits

0xa4dd,	// (0x0007657b) bg_popup_window_pane_cp08

0x5149,	// (0x000711e7) field_vitu_entry_pane_ParamLimits

0x5149,	// (0x000711e7) field_vitu_entry_pane

0x5161,	// (0x000711ff) grid_vitu_function_pane_ParamLimits

0x5161,	// (0x000711ff) grid_vitu_function_pane

0x517c,	// (0x0007121a) grid_vitu_itu_pane_ParamLimits

0x517c,	// (0x0007121a) grid_vitu_itu_pane

0x519a,	// (0x00071238) cell_vitu_itu_pane_ParamLimits

0x519a,	// (0x00071238) cell_vitu_itu_pane

0x51bc,	// (0x0007125a) cell_vitu_function_pane_ParamLimits

0x51bc,	// (0x0007125a) cell_vitu_function_pane

0xa4dd,	// (0x0007657b) bg_popup_sub_pane_cp08_ParamLimits

0xa4dd,	// (0x0007657b) bg_popup_sub_pane_cp08

0x51d5,	// (0x00071273) field_vitu_entry_pane_t1_ParamLimits

0x51d5,	// (0x00071273) field_vitu_entry_pane_t1

0xd255,	// (0x000792f3) field_vitu_entry_pane_t2_ParamLimits

0xd255,	// (0x000792f3) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0007b8d1) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0007b8d1) field_vitu_entry_pane_t

0xd272,	// (0x00079310) bg_button_pane_cp05_ParamLimits

0xd272,	// (0x00079310) bg_button_pane_cp05

0x51f4,	// (0x00071292) cell_vitu_itu_pane_g1

0x520c,	// (0x000712aa) cell_vitu_itu_pane_t1_ParamLimits

0x520c,	// (0x000712aa) cell_vitu_itu_pane_t1

0x521e,	// (0x000712bc) cell_vitu_itu_pane_t2_ParamLimits

0x521e,	// (0x000712bc) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0007b8d6) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0007b8d6) cell_vitu_itu_pane_t

0xd280,	// (0x0007931e) bg_button_pane_cp07

0x5253,	// (0x000712f1) cell_vitu_function_pane_g1

0x9799,	// (0x00075837) main_calc_pane_g1

0x01b1,	// (0x0006c24f) aid_visual_content_pane

0x93ab,	// (0x00075449) main_vradio_pane

0x525c,	// (0x000712fa) main_vradio_pane_g1_ParamLimits

0x525c,	// (0x000712fa) main_vradio_pane_g1

0xd28a,	// (0x00079328) main_vradio_pane_g2_ParamLimits

0xd28a,	// (0x00079328) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0007b8dd) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0007b8dd) main_vradio_pane_g

0x5275,	// (0x00071313) main_vradio_pane_t1_ParamLimits

0x5275,	// (0x00071313) main_vradio_pane_t1

0x528a,	// (0x00071328) main_vradio_pane_t2_ParamLimits

0x528a,	// (0x00071328) main_vradio_pane_t2

0xd297,	// (0x00079335) main_vradio_pane_t3_ParamLimits

0xd297,	// (0x00079335) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0007b8e2) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0007b8e2) main_vradio_pane_t

0x529f,	// (0x0007133d) vradio_rocker_control_pane_ParamLimits

0x529f,	// (0x0007133d) vradio_rocker_control_pane

0x52b1,	// (0x0007134f) vradio_station_info_pane_ParamLimits

0x52b1,	// (0x0007134f) vradio_station_info_pane

0xd2ab,	// (0x00079349) vradio_frequency_info_pane_ParamLimits

0xd2ab,	// (0x00079349) vradio_frequency_info_pane

0xcc64,	// (0x00078d02) vradio_station_info_pane_g1

0xd2ba,	// (0x00079358) vradio_station_info_pane_t1_ParamLimits

0xd2ba,	// (0x00079358) vradio_station_info_pane_t1

0xd2dc,	// (0x0007937a) vradio_station_info_pane_t2_ParamLimits

0xd2dc,	// (0x0007937a) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0007b8e9) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0007b8e9) vradio_station_info_pane_t

0xd2ee,	// (0x0007938c) vradio_tuning_pane

0xd2f6,	// (0x00079394) vradio_rocker_control_pane_g1

0xd2fe,	// (0x0007939c) vradio_rocker_control_pane_g2

0xd306,	// (0x000793a4) vradio_rocker_control_pane_g3

0xd30e,	// (0x000793ac) vradio_rocker_control_pane_g4

0xd316,	// (0x000793b4) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0007b8ee) vradio_rocker_control_pane_g

0x52c3,	// (0x00071361) vradio_frequency_info_pane_g1

0xd31e,	// (0x000793bc) vradio_frequency_info_pane_t1_ParamLimits

0xd31e,	// (0x000793bc) vradio_frequency_info_pane_t1

0x52cd,	// (0x0007136b) vradio_tuning_pane_g1

0x52d8,	// (0x00071376) vradio_tuning_pane_t1

0x935b,	// (0x000753f9) area_side_right_pane_ParamLimits

0x935b,	// (0x000753f9) area_side_right_pane

0xc80b,	// (0x000788a9) status_small_pane_g1

0xc813,	// (0x000788b1) status_small_pane_g2

0xc81c,	// (0x000788ba) status_small_pane_g3

0xc825,	// (0x000788c3) status_small_pane_g4

0x0003,

0xf60b,	// (0x0007b6a9) status_small_pane_g

0xc82e,	// (0x000788cc) status_small_pane_t1

0x93ab,	// (0x00075449) main_video3_pane

0xd332,	// (0x000793d0) cams_zoom_vslider_pane

0xd33a,	// (0x000793d8) image3_wide_pane_ParamLimits

0xd33a,	// (0x000793d8) image3_wide_pane

0xd354,	// (0x000793f2) image3_wide_small_pane

0xd360,	// (0x000793fe) main_video3_pane_g1_ParamLimits

0xd360,	// (0x000793fe) main_video3_pane_g1

0xd37c,	// (0x0007941a) main_video3_pane_g2_ParamLimits

0xd37c,	// (0x0007941a) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0007b8f9) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0007b8f9) main_video3_pane_g

0xd398,	// (0x00079436) main_video3_pane_t1_ParamLimits

0xd398,	// (0x00079436) main_video3_pane_t1

0xd3c3,	// (0x00079461) main_video3_pane_t2_ParamLimits

0xd3c3,	// (0x00079461) main_video3_pane_t2

0xd3ee,	// (0x0007948c) main_video3_pane_t3_ParamLimits

0xd3ee,	// (0x0007948c) main_video3_pane_t3

0x0002,

0xf860,	// (0x0007b8fe) main_video3_pane_t_ParamLimits

0xf860,	// (0x0007b8fe) main_video3_pane_t

0xd41b,	// (0x000794b9) cams_zoom_vslider_pane_g1

0xd424,	// (0x000794c2) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0007b905) cams_zoom_vslider_pane_g

0xd42c,	// (0x000794ca) small_slider_vertical_pane

0xcc64,	// (0x00078d02) small_slider_vertical_pane_g1

0xcc64,	// (0x00078d02) small_slider_vertical_pane_g2

0xd434,	// (0x000794d2) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0007b90a) small_slider_vertical_pane_g

0x93ab,	// (0x00075449) main_hwr_training_pane

0xd43d,	// (0x000794db) hwr_training_instruct_pane_ParamLimits

0xd43d,	// (0x000794db) hwr_training_instruct_pane

0x52e7,	// (0x00071385) hwr_training_navi_pane_ParamLimits

0x52e7,	// (0x00071385) hwr_training_navi_pane

0x5306,	// (0x000713a4) hwr_training_write_pane_ParamLimits

0x5306,	// (0x000713a4) hwr_training_write_pane

0x9325,	// (0x000753c3) bg_frame_shadow_pane

0xd474,	// (0x00079512) hwr_training_write_pane_g1

0xd47c,	// (0x0007951a) hwr_training_write_pane_g2

0xd484,	// (0x00079522) hwr_training_write_pane_g3

0xd48c,	// (0x0007952a) hwr_training_write_pane_g4

0xd494,	// (0x00079532) hwr_training_write_pane_g5

0xd49c,	// (0x0007953a) hwr_training_write_pane_g6

0xd4a4,	// (0x00079542) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0007b911) hwr_training_write_pane_g

0x9a45,	// (0x00075ae3) hwr_training_navi_pane_g1_ParamLimits

0x9a45,	// (0x00075ae3) hwr_training_navi_pane_g1

0x9a57,	// (0x00075af5) hwr_training_navi_pane_g2_ParamLimits

0x9a57,	// (0x00075af5) hwr_training_navi_pane_g2

0x9a69,	// (0x00075b07) hwr_training_navi_pane_g3_ParamLimits

0x9a69,	// (0x00075b07) hwr_training_navi_pane_g3

0x9a79,	// (0x00075b17) hwr_training_navi_pane_g4_ParamLimits

0x9a79,	// (0x00075b17) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0007b920) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0007b920) hwr_training_navi_pane_g

0x9a86,	// (0x00075b24) hwr_training_navi_pane_t1

0x5350,	// (0x000713ee) list_single_hwr_training_instruct_pane_ParamLimits

0x5350,	// (0x000713ee) list_single_hwr_training_instruct_pane

0xd4ac,	// (0x0007954a) list_single_hwr_training_instruct_pane_t1

0xcb98,	// (0x00078c36) bg_frame_shadow_pane_g1

0xd4bb,	// (0x00079559) bg_frame_shadow_pane_g2

0xd4c3,	// (0x00079561) bg_frame_shadow_pane_g3

0xd4cb,	// (0x00079569) bg_frame_shadow_pane_g4

0xd4d3,	// (0x00079571) bg_frame_shadow_pane_g5

0xd4db,	// (0x00079579) bg_frame_shadow_pane_g6

0xd4e3,	// (0x00079581) bg_frame_shadow_pane_g7

0xa2e9,	// (0x00076387) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0007b92b) bg_frame_shadow_pane_g

0x93ab,	// (0x00075449) main_video_tele_dialer_pane

0x5366,	// (0x00071404) aid_size_cell_video_keypad_ParamLimits

0x5366,	// (0x00071404) aid_size_cell_video_keypad

0x5380,	// (0x0007141e) grid_video_dialer_keypad_pane_ParamLimits

0x5380,	// (0x0007141e) grid_video_dialer_keypad_pane

0x53ce,	// (0x0007146c) video_down_pane_cp_ParamLimits

0x53ce,	// (0x0007146c) video_down_pane_cp

0x5400,	// (0x0007149e) cell_video_dialer_keypad_pane_ParamLimits

0x5400,	// (0x0007149e) cell_video_dialer_keypad_pane

0xd4eb,	// (0x00079589) bg_button_pane_cp08_ParamLimits

0xd4eb,	// (0x00079589) bg_button_pane_cp08

0x5422,	// (0x000714c0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5422,	// (0x000714c0) cell_video_dialer_keypad_pane_g1

0x4aca,	// (0x00070b68) mup3_rocker2_pane_ParamLimits

0x4aca,	// (0x00070b68) mup3_rocker2_pane

0xcc64,	// (0x00078d02) mup3_rocker2_pane_g1

0x361b,	// (0x0006f6b9) main_dialer2_pane

0x93ab,	// (0x00075449) main_mp4_pane

0x9a9c,	// (0x00075b3a) main_mp4_pane_g1_ParamLimits

0x9a9c,	// (0x00075b3a) main_mp4_pane_g1

0x9a9c,	// (0x00075b3a) main_mp4_pane_g2_ParamLimits

0x9a9c,	// (0x00075b3a) main_mp4_pane_g2

0x545c,	// (0x000714fa) main_mp4_pane_g3_ParamLimits

0x545c,	// (0x000714fa) main_mp4_pane_g3

0x9aaa,	// (0x00075b48) main_mp4_pane_g4_ParamLimits

0x9aaa,	// (0x00075b48) main_mp4_pane_g4

0x9ad2,	// (0x00075b70) main_mp4_pane_g5_ParamLimits

0x9ad2,	// (0x00075b70) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0007b94b) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0007b94b) main_mp4_pane_g

0x9b22,	// (0x00075bc0) main_mp4_pane_t1_ParamLimits

0x9b22,	// (0x00075bc0) main_mp4_pane_t1

0x9b7e,	// (0x00075c1c) main_mp4_pane_t2_ParamLimits

0x9b7e,	// (0x00075c1c) main_mp4_pane_t2

0xd4f7,	// (0x00079595) main_mp4_pane_t3_ParamLimits

0xd4f7,	// (0x00079595) main_mp4_pane_t3

0x9bd0,	// (0x00075c6e) main_mp4_pane_t4_ParamLimits

0x9bd0,	// (0x00075c6e) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0007b958) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0007b958) main_mp4_pane_t

0x9c14,	// (0x00075cb2) mp4_progress_pane_ParamLimits

0x9c14,	// (0x00075cb2) mp4_progress_pane

0x9c5e,	// (0x00075cfc) mp4_rocker_pane_ParamLimits

0x9c5e,	// (0x00075cfc) mp4_rocker_pane

0xd51f,	// (0x000795bd) mp4_progress_pane_t1

0xd538,	// (0x000795d6) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0007b961) mp4_progress_pane_t

0xd551,	// (0x000795ef) mup_progress_pane_cp04

0xd754,	// (0x000797f2) mp4_rocker_pane_g1

0x5498,	// (0x00071536) aid_cell_size_keypad2_ParamLimits

0x5498,	// (0x00071536) aid_cell_size_keypad2

0x54ae,	// (0x0007154c) dialer2_ne_pane_ParamLimits

0x54ae,	// (0x0007154c) dialer2_ne_pane

0x54c8,	// (0x00071566) grid_dialer2_keypad_pane_ParamLimits

0x54c8,	// (0x00071566) grid_dialer2_keypad_pane

0xca3d,	// (0x00078adb) bg_popup_call_pane_cp07_ParamLimits

0xca3d,	// (0x00078adb) bg_popup_call_pane_cp07

0x54e4,	// (0x00071582) dialer2_ne_pane_t1_ParamLimits

0x54e4,	// (0x00071582) dialer2_ne_pane_t1

0x5520,	// (0x000715be) cell_dialer2_keypad_pane_ParamLimits

0x5520,	// (0x000715be) cell_dialer2_keypad_pane

0xd56f,	// (0x0007960d) bg_button_pane_pane_cp04_ParamLimits

0xd56f,	// (0x0007960d) bg_button_pane_pane_cp04

0x5542,	// (0x000715e0) cell_dialer2_keypad_pane_g1_ParamLimits

0x5542,	// (0x000715e0) cell_dialer2_keypad_pane_g1

0x1378,	// (0x0006d416) aid_placing_vt_set_content_ParamLimits

0x1378,	// (0x0006d416) aid_placing_vt_set_content

0x13a0,	// (0x0006d43e) aid_placing_vt_set_title_ParamLimits

0x13a0,	// (0x0006d43e) aid_placing_vt_set_title

0x93ab,	// (0x00075449) main_image3_pane

0x5608,	// (0x000716a6) area_side_right_pane_cp01_ParamLimits

0x5608,	// (0x000716a6) area_side_right_pane_cp01

0x9a9c,	// (0x00075b3a) main_image3_pane_g1_ParamLimits

0x9a9c,	// (0x00075b3a) main_image3_pane_g1

0x561f,	// (0x000716bd) main_image3_pane_g2_ParamLimits

0x561f,	// (0x000716bd) main_image3_pane_g2

0x5647,	// (0x000716e5) main_image3_pane_g3_ParamLimits

0x5647,	// (0x000716e5) main_image3_pane_g3

0x5671,	// (0x0007170f) main_image3_pane_g4_ParamLimits

0x5671,	// (0x0007170f) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0007b970) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0007b970) main_image3_pane_g

0x569b,	// (0x00071739) main_image3_pane_t1_ParamLimits

0x569b,	// (0x00071739) main_image3_pane_t1

0x56f3,	// (0x00071791) main_image3_pane_t2_ParamLimits

0x56f3,	// (0x00071791) main_image3_pane_t2

0x5745,	// (0x000717e3) main_image3_pane_t3_ParamLimits

0x5745,	// (0x000717e3) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0007b979) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0007b979) main_image3_pane_t

0xa4dd,	// (0x0007657b) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4dd,	// (0x0007657b) grid_sctrl_middle_pane_cp01

0x57cd,	// (0x0007186b) cell_sctrl_middle_pane_cp01_ParamLimits

0x57cd,	// (0x0007186b) cell_sctrl_middle_pane_cp01

0x57ea,	// (0x00071888) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57ea,	// (0x00071888) cell_sctrl_middle_pane_cp01_g1

0x93ab,	// (0x00075449) main_call4_pane

0x5800,	// (0x0007189e) aid_size_button_call4_ParamLimits

0x5800,	// (0x0007189e) aid_size_button_call4

0x5831,	// (0x000718cf) call4_windows_pane_ParamLimits

0x5831,	// (0x000718cf) call4_windows_pane

0x5851,	// (0x000718ef) grid_call4_button_pane_ParamLimits

0x5851,	// (0x000718ef) grid_call4_button_pane

0xd57b,	// (0x00079619) call4_windows_conf_pane

0xd592,	// (0x00079630) popup_call4_audio_first_window_ParamLimits

0xd592,	// (0x00079630) popup_call4_audio_first_window

0xd5de,	// (0x0007967c) popup_call4_audio_second_window_ParamLimits

0xd5de,	// (0x0007967c) popup_call4_audio_second_window

0xd5f2,	// (0x00079690) popup_call4_audio_wait_window_ParamLimits

0xd5f2,	// (0x00079690) popup_call4_audio_wait_window

0x587e,	// (0x0007191c) cell_call4_button_pane_ParamLimits

0x587e,	// (0x0007191c) cell_call4_button_pane

0x58a7,	// (0x00071945) bg_button_pane_cp09_ParamLimits

0x58a7,	// (0x00071945) bg_button_pane_cp09

0x58b3,	// (0x00071951) cell_call4_button_pane_g1_ParamLimits

0x58b3,	// (0x00071951) cell_call4_button_pane_g1

0x58d9,	// (0x00071977) cell_call4_button_pane_t1_ParamLimits

0x58d9,	// (0x00071977) cell_call4_button_pane_t1

0xd63a,	// (0x000796d8) popup_call4_audio_conf_window_ParamLimits

0xd63a,	// (0x000796d8) popup_call4_audio_conf_window

0x4b2a,	// (0x00070bc8) mup3_progress_pane_t1_ParamLimits

0x4b49,	// (0x00070be7) mup3_progress_pane_t2_ParamLimits

0xcf2d,	// (0x00078fcb) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0007b84d) mup3_progress_pane_t_ParamLimits

0xcf4a,	// (0x00078fe8) mup_progress_pane_cp03_ParamLimits

0x512b,	// (0x000711c9) mup3_control_keys_pane_g4_copy1

0x9c42,	// (0x00075ce0) mp4_rocker2_pane_ParamLimits

0x9c42,	// (0x00075ce0) mp4_rocker2_pane

0xd64e,	// (0x000796ec) mp4_rocker2_pane_g1

0xd656,	// (0x000796f4) mp4_rocker2_pane_g2

0x9cb0,	// (0x00075d4e) mp4_rocker2_pane_g3

0x9cb8,	// (0x00075d56) mp4_rocker2_pane_g4

0x9cc0,	// (0x00075d5e) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0007b982) mp4_rocker2_pane_g

0x93ab,	// (0x00075449) main_camera4_pane

0x93ab,	// (0x00075449) main_video4_pane

0x539c,	// (0x0007143a) main_video_tele_dialer_pane_t1_ParamLimits

0x539c,	// (0x0007143a) main_video_tele_dialer_pane_t1

0x53b5,	// (0x00071453) main_video_tele_dialer_pane_t2_ParamLimits

0x53b5,	// (0x00071453) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0007b93c) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0007b93c) main_video_tele_dialer_pane_t

0x591b,	// (0x000719b9) cam4_autofocus_pane_ParamLimits

0x591b,	// (0x000719b9) cam4_autofocus_pane

0x5931,	// (0x000719cf) cam4_image_uncrop_pane_ParamLimits

0x5931,	// (0x000719cf) cam4_image_uncrop_pane

0x594b,	// (0x000719e9) cam4_indicators_pane_ParamLimits

0x594b,	// (0x000719e9) cam4_indicators_pane

0x5976,	// (0x00071a14) main_camera4_pane_g1_ParamLimits

0x5976,	// (0x00071a14) main_camera4_pane_g1

0x5988,	// (0x00071a26) main_camera4_pane_g2_ParamLimits

0x5988,	// (0x00071a26) main_camera4_pane_g2

0x599b,	// (0x00071a39) main_camera4_pane_g3_ParamLimits

0x599b,	// (0x00071a39) main_camera4_pane_g3

0x59ae,	// (0x00071a4c) main_camera4_pane_g4_ParamLimits

0x59ae,	// (0x00071a4c) main_camera4_pane_g4

0x59c1,	// (0x00071a5f) main_camera4_pane_g5_ParamLimits

0x59c1,	// (0x00071a5f) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0007b98d) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0007b98d) main_camera4_pane_g

0x59e5,	// (0x00071a83) main_camera4_pane_t1_ParamLimits

0x59e5,	// (0x00071a83) main_camera4_pane_t1

0x9ce4,	// (0x00075d82) bg_tb_trans_pane_cp06

0x9cfa,	// (0x00075d98) cam4_indicators_pane_g1

0x9d0b,	// (0x00075da9) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0007b9a8) cam4_indicators_pane_g

0x9d23,	// (0x00075dc1) cam4_indicators_pane_t1

0x5a49,	// (0x00071ae7) main_video4_pane_g1_ParamLimits

0x5a49,	// (0x00071ae7) main_video4_pane_g1

0x5a58,	// (0x00071af6) main_video4_pane_g2_ParamLimits

0x5a58,	// (0x00071af6) main_video4_pane_g2

0x5a67,	// (0x00071b05) main_video4_pane_g3_ParamLimits

0x5a67,	// (0x00071b05) main_video4_pane_g3

0x5a76,	// (0x00071b14) main_video4_pane_g4_ParamLimits

0x5a76,	// (0x00071b14) main_video4_pane_g4

0x0004,

0xf911,	// (0x0007b9af) main_video4_pane_g_ParamLimits

0xf911,	// (0x0007b9af) main_video4_pane_g

0x5a94,	// (0x00071b32) vid4_indicators_pane_ParamLimits

0x5a94,	// (0x00071b32) vid4_indicators_pane

0x5ac2,	// (0x00071b60) video4_image_uncrop_cif_pane_ParamLimits

0x5ac2,	// (0x00071b60) video4_image_uncrop_cif_pane

0x5adc,	// (0x00071b7a) video4_image_uncrop_nhd_pane_ParamLimits

0x5adc,	// (0x00071b7a) video4_image_uncrop_nhd_pane

0x5931,	// (0x000719cf) video4_image_uncrop_vga_pane_ParamLimits

0x5931,	// (0x000719cf) video4_image_uncrop_vga_pane

0x939d,	// (0x0007543b) bg_tb_trans_pane_cp07

0x9d4d,	// (0x00075deb) vid4_indicators_pane_g1

0x9d61,	// (0x00075dff) vid4_indicators_pane_g2

0x9d75,	// (0x00075e13) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0007b9ba) vid4_indicators_pane_g

0x9da2,	// (0x00075e40) vid4_indicators_pane_t1

0x5af0,	// (0x00071b8e) cam4_autofocus_pane_g1

0x5af8,	// (0x00071b96) cam4_autofocus_pane_g2

0x5b00,	// (0x00071b9e) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0007b9c5) cam4_autofocus_pane_g

0x5b08,	// (0x00071ba6) cam4_autofocus_pane_g3_copy1

0x53e4,	// (0x00071482) video_down_pane_cp_t1

0x53f2,	// (0x00071490) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0007b941) video_down_pane_cp_t

0x939d,	// (0x0007543b) popup_vitu2_window_ParamLimits

0x939d,	// (0x0007543b) popup_vitu2_window

0x5b10,	// (0x00071bae) aid_size_cell2_itu2_ParamLimits

0x5b10,	// (0x00071bae) aid_size_cell2_itu2

0x5b36,	// (0x00071bd4) aid_size_cell_itu2_ParamLimits

0x5b36,	// (0x00071bd4) aid_size_cell_itu2

0x5b92,	// (0x00071c30) bg_popup_window_pane_cp09_ParamLimits

0x5b92,	// (0x00071c30) bg_popup_window_pane_cp09

0x5ba0,	// (0x00071c3e) field_vitu2_entry_pane_ParamLimits

0x5ba0,	// (0x00071c3e) field_vitu2_entry_pane

0x5bc6,	// (0x00071c64) grid_vitu2_function_pane_ParamLimits

0x5bc6,	// (0x00071c64) grid_vitu2_function_pane

0x5c17,	// (0x00071cb5) grid_vitu2_itu_pane_ParamLimits

0x5c17,	// (0x00071cb5) grid_vitu2_itu_pane

0x5cad,	// (0x00071d4b) cell_vitu2_itu_pane_ParamLimits

0x5cad,	// (0x00071d4b) cell_vitu2_itu_pane

0x5cd9,	// (0x00071d77) cell_vitu2_function_pane_ParamLimits

0x5cd9,	// (0x00071d77) cell_vitu2_function_pane

0xd65e,	// (0x000796fc) bg_popup_call_pane_cp08_ParamLimits

0xd65e,	// (0x000796fc) bg_popup_call_pane_cp08

0xd675,	// (0x00079713) field_vitu2_entry_pane_g1

0xd681,	// (0x0007971f) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0007b9cc) field_vitu2_entry_pane_g

0x5d18,	// (0x00071db6) field_vitu2_entry_pane_t1_ParamLimits

0x5d18,	// (0x00071db6) field_vitu2_entry_pane_t1

0xa55f,	// (0x000765fd) field_vitu2_entry_pane_t2_ParamLimits

0xa55f,	// (0x000765fd) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0007b9d3) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0007b9d3) field_vitu2_entry_pane_t

0x5d48,	// (0x00071de6) bg_button_pane_cp010_ParamLimits

0x5d48,	// (0x00071de6) bg_button_pane_cp010

0x9db9,	// (0x00075e57) cell_vitu2_itu_pane_g1

0x5d64,	// (0x00071e02) cell_vitu2_itu_pane_t1_ParamLimits

0x5d64,	// (0x00071e02) cell_vitu2_itu_pane_t1

0x0089,	// (0x0006c127) cell_vitu2_itu_pane_t2_ParamLimits

0x0089,	// (0x0006c127) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0007b9dd) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0007b9dd) cell_vitu2_itu_pane_t

0x939d,	// (0x0007543b) bg_button_pane_cp011

0x5dc2,	// (0x00071e60) cell_vitu2_function_pane_g1

0x93ab,	// (0x00075449) main_myfav_hc_pane

0x5795,	// (0x00071833) popup_image3_note_pane_ParamLimits

0x5795,	// (0x00071833) popup_image3_note_pane

0x57b1,	// (0x0007184f) popup_image3_tool_bar_pane_ParamLimits

0x57b1,	// (0x0007184f) popup_image3_tool_bar_pane

0x0117,	// (0x0006c1b5) cell_vitu2_itu_pane_t3_ParamLimits

0x0117,	// (0x0006c1b5) cell_vitu2_itu_pane_t3

0x9325,	// (0x000753c3) bg_popup_trans_pane

0xd6a3,	// (0x00079741) grid_image3_tool_bar_pane

0xd6ad,	// (0x0007974b) bg_popup_trans_pane_g1

0xac1d,	// (0x00076cbb) bg_popup_trans_pane_g2

0xd6b5,	// (0x00079753) bg_popup_trans_pane_g3

0xd6bd,	// (0x0007975b) bg_popup_trans_pane_g4

0xd6c5,	// (0x00079763) bg_popup_trans_pane_g5

0xd6cd,	// (0x0007976b) bg_popup_trans_pane_g6

0xd6d5,	// (0x00079773) bg_popup_trans_pane_g7

0xd6dd,	// (0x0007977b) bg_popup_trans_pane_g8

0xabfd,	// (0x00076c9b) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0007b9e4) bg_popup_trans_pane_g

0xd6e5,	// (0x00079783) cell_image3_tool_bar_pane_ParamLimits

0xd6e5,	// (0x00079783) cell_image3_tool_bar_pane

0xcc64,	// (0x00078d02) cell_image3_tool_bar_pane_g1

0x9325,	// (0x000753c3) bg_popup_trans_pane_cp1

0xd6f9,	// (0x00079797) popup_image3_note_pane_t1

0xd707,	// (0x000797a5) popup_image3_note_pane_t2

0xd715,	// (0x000797b3) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0007b9f7) popup_image3_note_pane_t

0xd723,	// (0x000797c1) popup_image3_note_pane_t3_copy1

0x5dd6,	// (0x00071e74) bg_myfav_hc_instruction_pane_ParamLimits

0x5dd6,	// (0x00071e74) bg_myfav_hc_instruction_pane

0x5dea,	// (0x00071e88) cell_myfav_contact_pane_ParamLimits

0x5dea,	// (0x00071e88) cell_myfav_contact_pane

0x5e08,	// (0x00071ea6) cell_myfav_contact_pane_cp1_ParamLimits

0x5e08,	// (0x00071ea6) cell_myfav_contact_pane_cp1

0x5e20,	// (0x00071ebe) cell_myfav_contact_pane_cp2_ParamLimits

0x5e20,	// (0x00071ebe) cell_myfav_contact_pane_cp2

0x5e38,	// (0x00071ed6) cell_myfav_contact_pane_cp3_ParamLimits

0x5e38,	// (0x00071ed6) cell_myfav_contact_pane_cp3

0x5e4f,	// (0x00071eed) cell_myfav_contact_pane_cp4_ParamLimits

0x5e4f,	// (0x00071eed) cell_myfav_contact_pane_cp4

0x5e67,	// (0x00071f05) cell_myfav_contact_pane_cp5_ParamLimits

0x5e67,	// (0x00071f05) cell_myfav_contact_pane_cp5

0x5e7b,	// (0x00071f19) cell_myfav_contact_pane_cp6_ParamLimits

0x5e7b,	// (0x00071f19) cell_myfav_contact_pane_cp6

0x5e91,	// (0x00071f2f) cell_myfav_contact_pane_cp7_ParamLimits

0x5e91,	// (0x00071f2f) cell_myfav_contact_pane_cp7

0xd731,	// (0x000797cf) listscroll_gen_pane_cp05

0x5eab,	// (0x00071f49) main_myfav_hc_pane_g1_ParamLimits

0x5eab,	// (0x00071f49) main_myfav_hc_pane_g1

0x5ec5,	// (0x00071f63) main_myfav_hc_pane_g2_ParamLimits

0x5ec5,	// (0x00071f63) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0007b9fe) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0007b9fe) main_myfav_hc_pane_g

0x5ef7,	// (0x00071f95) main_myfav_hc_pane_t1_ParamLimits

0x5ef7,	// (0x00071f95) main_myfav_hc_pane_t1

0xd73a,	// (0x000797d8) main_myfav_hc_pane_t2_ParamLimits

0xd73a,	// (0x000797d8) main_myfav_hc_pane_t2

0xd770,	// (0x0007980e) main_myfav_hc_pane_t3_ParamLimits

0xd770,	// (0x0007980e) main_myfav_hc_pane_t3

0x5f0e,	// (0x00071fac) main_myfav_hc_pane_t4_ParamLimits

0x5f0e,	// (0x00071fac) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0007ba05) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0007ba05) main_myfav_hc_pane_t

0xcc64,	// (0x00078d02) bg_myfav_hc_instruction_pane_g1

0xd782,	// (0x00079820) cell_myfav_contact_pane_g1_ParamLimits

0xd782,	// (0x00079820) cell_myfav_contact_pane_g1

0xd782,	// (0x00079820) cell_myfav_contact_pane_g2_ParamLimits

0xd782,	// (0x00079820) cell_myfav_contact_pane_g2

0xd78e,	// (0x0007982c) cell_myfav_contact_pane_g3_ParamLimits

0xd78e,	// (0x0007982c) cell_myfav_contact_pane_g3

0xcf17,	// (0x00078fb5) cell_myfav_contact_pane_g4_ParamLimits

0xcf17,	// (0x00078fb5) cell_myfav_contact_pane_g4

0xd79b,	// (0x00079839) cell_myfav_contact_pane_g5_ParamLimits

0xd79b,	// (0x00079839) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0007ba10) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0007ba10) cell_myfav_contact_pane_g

0x5edf,	// (0x00071f7d) main_myfav_hc_pane_g3_ParamLimits

0x5edf,	// (0x00071f7d) main_myfav_hc_pane_g3

0x02ec,	// (0x0006c38a) popup_adpt_find_window

0x5f36,	// (0x00071fd4) afind_page_pane_ParamLimits

0x5f36,	// (0x00071fd4) afind_page_pane

0x5f4b,	// (0x00071fe9) aid_size_cell_afind_ParamLimits

0x5f4b,	// (0x00071fe9) aid_size_cell_afind

0x5f69,	// (0x00072007) bg_popup_sub_pane_cp09_ParamLimits

0x5f69,	// (0x00072007) bg_popup_sub_pane_cp09

0x5f76,	// (0x00072014) find_pane_cp01_ParamLimits

0x5f76,	// (0x00072014) find_pane_cp01

0xd7a7,	// (0x00079845) grid_afind_control_pane_ParamLimits

0xd7a7,	// (0x00079845) grid_afind_control_pane

0x5f83,	// (0x00072021) grid_afind_pane_ParamLimits

0x5f83,	// (0x00072021) grid_afind_pane

0x5fa2,	// (0x00072040) cell_afind_pane_ParamLimits

0x5fa2,	// (0x00072040) cell_afind_pane

0xcc64,	// (0x00078d02) afind_page_pane_g1

0x6009,	// (0x000720a7) afind_page_pane_g2

0x6012,	// (0x000720b0) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0007ba1b) afind_page_pane_g

0x601b,	// (0x000720b9) afind_page_pane_t1

0xd7bb,	// (0x00079859) cell_afind_grid_control_pane_ParamLimits

0xd7bb,	// (0x00079859) cell_afind_grid_control_pane

0xd56f,	// (0x0007960d) bg_button_pane_cp69_ParamLimits

0xd56f,	// (0x0007960d) bg_button_pane_cp69

0x603b,	// (0x000720d9) cell_afind_pane_g1_ParamLimits

0x603b,	// (0x000720d9) cell_afind_pane_g1

0x6048,	// (0x000720e6) cell_afind_pane_t1_ParamLimits

0x6048,	// (0x000720e6) cell_afind_pane_t1

0xaa16,	// (0x00076ab4) bg_button_pane_cp72

0xd7ca,	// (0x00079868) cell_afind_grid_control_pane_g1

0x30c8,	// (0x0006f166) aid_image_placing_area_ParamLimits

0x30c8,	// (0x0006f166) aid_image_placing_area

0xd23d,	// (0x000792db) field_vitu_entry_pane_g1_ParamLimits

0xd23d,	// (0x000792db) field_vitu_entry_pane_g1

0xd249,	// (0x000792e7) field_vitu_entry_pane_g2_ParamLimits

0xd249,	// (0x000792e7) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0007b8cc) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0007b8cc) field_vitu_entry_pane_g

0x51f4,	// (0x00071292) cell_vitu_itu_pane_g1_ParamLimits

0x5236,	// (0x000712d4) cell_vitu_itu_pane_t3_ParamLimits

0x5236,	// (0x000712d4) cell_vitu_itu_pane_t3

0xd51f,	// (0x000795bd) mp4_progress_pane_t1_ParamLimits

0xd538,	// (0x000795d6) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0007b961) mp4_progress_pane_t_ParamLimits

0xd551,	// (0x000795ef) mup_progress_pane_cp04_ParamLimits

0x5f22,	// (0x00071fc0) main_myfav_hc_pane_t5_ParamLimits

0x5f22,	// (0x00071fc0) main_myfav_hc_pane_t5

0x934b,	// (0x000753e9) aid_zoom_text_primary

0x02ec,	// (0x0006c38a) popup_adpt_find_window_ParamLimits

0x939d,	// (0x0007543b) main_cam_set_pane

0x5962,	// (0x00071a00) cam4_zoom_pane_ParamLimits

0x5962,	// (0x00071a00) cam4_zoom_pane

0x605a,	// (0x000720f8) main_cam_set_pane_g1_ParamLimits

0x605a,	// (0x000720f8) main_cam_set_pane_g1

0x6068,	// (0x00072106) main_cam_set_pane_g2_ParamLimits

0x6068,	// (0x00072106) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0007ba22) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0007ba22) main_cam_set_pane_g

0x6089,	// (0x00072127) main_cam_set_pane_t1_ParamLimits

0x6089,	// (0x00072127) main_cam_set_pane_t1

0x60a4,	// (0x00072142) main_cset_listscroll_pane_ParamLimits

0x60a4,	// (0x00072142) main_cset_listscroll_pane

0x60c4,	// (0x00072162) main_cset_slider_pane_ParamLimits

0x60c4,	// (0x00072162) main_cset_slider_pane

0xd7db,	// (0x00079879) main_cset_list_pane_ParamLimits

0xd7db,	// (0x00079879) main_cset_list_pane

0xd7eb,	// (0x00079889) scroll_pane_cp028

0x60ea,	// (0x00072188) aid_area_touch_slider

0x6106,	// (0x000721a4) cset_slider_pane

0x6130,	// (0x000721ce) main_cset_slider_pane_g1

0x6145,	// (0x000721e3) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0007ba27) main_cset_slider_pane_g

0xd83c,	// (0x000798da) main_cset_slider_pane_t1

0x61e9,	// (0x00072287) main_cset_slider_pane_t2

0x6203,	// (0x000722a1) main_cset_slider_pane_t3

0x621d,	// (0x000722bb) main_cset_slider_pane_t4

0x6237,	// (0x000722d5) main_cset_slider_pane_t5

0x6251,	// (0x000722ef) main_cset_slider_pane_t6

0x6266,	// (0x00072304) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0007ba4c) main_cset_slider_pane_t

0x636a,	// (0x00072408) cset_list_set_pane_ParamLimits

0x636a,	// (0x00072408) cset_list_set_pane

0x637c,	// (0x0007241a) aid_position_infowindow_above

0x6384,	// (0x00072422) aid_position_infowindow_below

0x638c,	// (0x0007242a) cset_list_set_pane_g1_ParamLimits

0x638c,	// (0x0007242a) cset_list_set_pane_g1

0x6398,	// (0x00072436) cset_list_set_pane_g3_ParamLimits

0x6398,	// (0x00072436) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0007ba6b) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0007ba6b) cset_list_set_pane_g

0x63a7,	// (0x00072445) cset_list_set_pane_t1_ParamLimits

0x63a7,	// (0x00072445) cset_list_set_pane_t1

0xa4dd,	// (0x0007657b) list_highlight_pane_cp021_ParamLimits

0xa4dd,	// (0x0007657b) list_highlight_pane_cp021

0xb53b,	// (0x000775d9) cset_slider_pane_g1

0xb54d,	// (0x000775eb) cset_slider_pane_g2

0xb544,	// (0x000775e2) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0007ba70) cset_slider_pane_g

0x9dcb,	// (0x00075e69) aid_area_touch_cam4_zoom

0x9dd3,	// (0x00075e71) cam4_zoom_cont_pane

0x9ddb,	// (0x00075e79) cam4_zoom_pane_g1

0x9de3,	// (0x00075e81) cam4_zoom_pane_g2

0x63bc,	// (0x0007245a) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0007ba77) cam4_zoom_pane_g

0x9deb,	// (0x00075e89) cam4_zoom_cont_pane_g1

0x9df4,	// (0x00075e92) cam4_zoom_cont_pane_g2

0x9dfd,	// (0x00075e9b) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0007ba7e) cam4_zoom_cont_pane_g

0x581e,	// (0x000718bc) call4_image_pane_ParamLimits

0x581e,	// (0x000718bc) call4_image_pane

0xd57b,	// (0x00079619) call4_windows_conf_pane_ParamLimits

0xd5bc,	// (0x0007965a) popup_call4_audio_in_window_ParamLimits

0xd5bc,	// (0x0007965a) popup_call4_audio_in_window

0x9325,	// (0x000753c3) bg_popup_call2_act_pane_cp02

0xd632,	// (0x000796d0) call4_list_conf_pane

0xcc64,	// (0x00078d02) call4_image_pane_g1

0xcc64,	// (0x00078d02) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0007b78d) call4_image_pane_g

0xd8dc,	// (0x0007997a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8dc,	// (0x0007997a) list_single_graphic_popup_conf4_pane

0x9325,	// (0x000753c3) list_highlight_pane_cp022

0xd8ef,	// (0x0007998d) list_single_graphic_popup_conf4_pane_g1

0xb137,	// (0x000771d5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0007ba85) list_single_graphic_popup_conf4_pane_g

0xd8f7,	// (0x00079995) list_single_graphic_popup_conf4_pane_t1

0x14c4,	// (0x0006d562) popup_vtel_slider_window_ParamLimits

0x14c4,	// (0x0006d562) popup_vtel_slider_window

0xd55d,	// (0x000795fb) dialer2_ne_pane_t2_ParamLimits

0xd55d,	// (0x000795fb) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0007b966) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0007b966) dialer2_ne_pane_t

0xca3d,	// (0x00078adb) bg_popup_sub_pane_cp010_ParamLimits

0xca3d,	// (0x00078adb) bg_popup_sub_pane_cp010

0x63c4,	// (0x00072462) popup_vtel_slider_window_g1_ParamLimits

0x63c4,	// (0x00072462) popup_vtel_slider_window_g1

0x63d7,	// (0x00072475) popup_vtel_slider_window_g2_ParamLimits

0x63d7,	// (0x00072475) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0007ba8a) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0007ba8a) popup_vtel_slider_window_g

0x642d,	// (0x000724cb) vtel_slider_pane_ParamLimits

0x642d,	// (0x000724cb) vtel_slider_pane

0x644f,	// (0x000724ed) vtel_slider_pane_g1_ParamLimits

0x644f,	// (0x000724ed) vtel_slider_pane_g1

0x6463,	// (0x00072501) vtel_slider_pane_g2_ParamLimits

0x6463,	// (0x00072501) vtel_slider_pane_g2

0x647b,	// (0x00072519) vtel_slider_pane_g3_ParamLimits

0x647b,	// (0x00072519) vtel_slider_pane_g3

0x644f,	// (0x000724ed) vtel_slider_pane_g4_ParamLimits

0x644f,	// (0x000724ed) vtel_slider_pane_g4

0x6491,	// (0x0007252f) vtel_slider_pane_g5_ParamLimits

0x6491,	// (0x0007252f) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0007ba93) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0007ba93) vtel_slider_pane_g

0x939d,	// (0x0007543b) main_gallery2_pane

0x5b62,	// (0x00071c00) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b62,	// (0x00071c00) aid_size_row_itut2_dropdow_list

0x5bee,	// (0x00071c8c) grid_vitu2_function_top_pane_ParamLimits

0x5bee,	// (0x00071c8c) grid_vitu2_function_top_pane

0x5c58,	// (0x00071cf6) popup_vitu2_dropdown_list_window_ParamLimits

0x5c58,	// (0x00071cf6) popup_vitu2_dropdown_list_window

0x5c81,	// (0x00071d1f) popup_vitu2_match_list_window

0x64b5,	// (0x00072553) cell_vitu2_function_top_pane_ParamLimits

0x64b5,	// (0x00072553) cell_vitu2_function_top_pane

0x64cd,	// (0x0007256b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64cd,	// (0x0007256b) cell_vitu2_function_top_pane_cp01

0x64e9,	// (0x00072587) cell_vitu2_function_top_wide_pane_ParamLimits

0x64e9,	// (0x00072587) cell_vitu2_function_top_wide_pane

0x939d,	// (0x0007543b) bg_button_pane_cp012

0x6505,	// (0x000725a3) cell_vitu2_function_top_pane_g1

0x9e06,	// (0x00075ea4) bg_button_pane_cp013_ParamLimits

0x9e06,	// (0x00075ea4) bg_button_pane_cp013

0x6519,	// (0x000725b7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6519,	// (0x000725b7) cell_vitu2_function_top_wide_pane_g1

0x939d,	// (0x0007543b) bg_popup_sub_pane_cp20

0x6531,	// (0x000725cf) list_vitu2_match_list_pane

0xd6ad,	// (0x0007974b) bg_popup_sub_pane_cp20_g1

0xd6b5,	// (0x00079753) bg_popup_sub_pane_cp20_g2

0xac1d,	// (0x00076cbb) bg_popup_sub_pane_cp20_g3

0xd6bd,	// (0x0007975b) bg_popup_sub_pane_cp20_g4

0xabfd,	// (0x00076c9b) bg_popup_sub_pane_cp20_g5

0xd90d,	// (0x000799ab) bg_popup_sub_pane_cp20_g6

0xd6cd,	// (0x0007976b) bg_popup_sub_pane_cp20_g7

0xd6d5,	// (0x00079773) bg_popup_sub_pane_cp20_g8

0xd6dd,	// (0x0007977b) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0007ba9e) bg_popup_sub_pane_cp20_g

0x9e22,	// (0x00075ec0) list_vitu2_match_list_item_pane_ParamLimits

0x9e22,	// (0x00075ec0) list_vitu2_match_list_item_pane

0x9e34,	// (0x00075ed2) list_vitu2_match_list_item_pane_t1

0x93ab,	// (0x00075449) bg_popup_sub_pane_cp21

0x9e42,	// (0x00075ee0) grid_vitu2_dropdown_list_pane

0x659f,	// (0x0007263d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x659f,	// (0x0007263d) cell_vitu2_dropdown_list_char_pane

0x65c0,	// (0x0007265e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65c0,	// (0x0007265e) cell_vitu2_dropdown_list_ctrl_pane

0xd915,	// (0x000799b3) cell_vitu2_dropdown_list_char_pane_g1

0xd91e,	// (0x000799bc) cell_vitu2_dropdown_list_char_pane_g2

0xd927,	// (0x000799c5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0007babb) cell_vitu2_dropdown_list_char_pane_g

0x65ec,	// (0x0007268a) cell_vitu2_dropdown_list_char_pane_t1

0x65fa,	// (0x00072698) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65fa,	// (0x00072698) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6607,	// (0x000726a5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6607,	// (0x000726a5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6614,	// (0x000726b2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6614,	// (0x000726b2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6621,	// (0x000726bf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6621,	// (0x000726bf) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9ce4,	// (0x00075d82) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9ce4,	// (0x00075d82) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0007bac2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0007bac2) cell_vitu2_dropdown_list_ctrl_pane_g

0x663d,	// (0x000726db) aid_size_cell_gallery2_ParamLimits

0x663d,	// (0x000726db) aid_size_cell_gallery2

0x665b,	// (0x000726f9) grid_gallery2_pane_ParamLimits

0x665b,	// (0x000726f9) grid_gallery2_pane

0x6675,	// (0x00072713) scroll_pane_cp029_ParamLimits

0x6675,	// (0x00072713) scroll_pane_cp029

0x6681,	// (0x0007271f) cell_gallery2_pane_ParamLimits

0x6681,	// (0x0007271f) cell_gallery2_pane

0xd930,	// (0x000799ce) cell_gallery2_pane_g2

0x66dd,	// (0x0007277b) cell_gallery2_pane_g3

0xd938,	// (0x000799d6) cell_gallery2_pane_g4

0xd940,	// (0x000799de) cell_gallery2_pane_g5

0xa413,	// (0x000764b1) grid_highlight_pane_cp10

0x5c81,	// (0x00071d1f) popup_vitu2_match_list_window_ParamLimits

0x5c96,	// (0x00071d34) popup_vitu2_query_window_ParamLimits

0x5c96,	// (0x00071d34) popup_vitu2_query_window

0x93ab,	// (0x00075449) bg_vitu2_candi_button_pane

0xd915,	// (0x000799b3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91e,	// (0x000799bc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd927,	// (0x000799c5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66e5,	// (0x00072783) bg_button_pane_cp015

0x66f9,	// (0x00072797) bg_button_pane_cp016

0x670c,	// (0x000727aa) bg_button_pane_cp017

0xc850,	// (0x000788ee) bg_popup_sub_pane_cp22

0xd948,	// (0x000799e6) popup_vitu2_query_window_g1

0x6751,	// (0x000727ef) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0007bacd) popup_vitu2_query_window_g

0x6770,	// (0x0007280e) popup_vitu2_query_window_t1_ParamLimits

0x6770,	// (0x0007280e) popup_vitu2_query_window_t1

0x67a5,	// (0x00072843) popup_vitu2_query_window_t2_ParamLimits

0x67a5,	// (0x00072843) popup_vitu2_query_window_t2

0x67b7,	// (0x00072855) popup_vitu2_query_window_t3_ParamLimits

0x67b7,	// (0x00072855) popup_vitu2_query_window_t3

0x67df,	// (0x0007287d) popup_vitu2_query_window_t4_ParamLimits

0x67df,	// (0x0007287d) popup_vitu2_query_window_t4

0x6800,	// (0x0007289e) popup_vitu2_query_window_t5_ParamLimits

0x6800,	// (0x0007289e) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0007bad4) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0007bad4) popup_vitu2_query_window_t

0xd7d3,	// (0x00079871) main_cset_text_pane

0x60ea,	// (0x00072188) aid_area_touch_slider_ParamLimits

0x6106,	// (0x000721a4) cset_slider_pane_ParamLimits

0x6130,	// (0x000721ce) main_cset_slider_pane_g1_ParamLimits

0x6145,	// (0x000721e3) main_cset_slider_pane_g2_ParamLimits

0xd7f4,	// (0x00079892) main_cset_slider_pane_g3_ParamLimits

0xd7f4,	// (0x00079892) main_cset_slider_pane_g3

0x615a,	// (0x000721f8) main_cset_slider_pane_g4_ParamLimits

0x615a,	// (0x000721f8) main_cset_slider_pane_g4

0x6169,	// (0x00072207) main_cset_slider_pane_g5_ParamLimits

0x6169,	// (0x00072207) main_cset_slider_pane_g5

0x6175,	// (0x00072213) main_cset_slider_pane_g6_ParamLimits

0x6175,	// (0x00072213) main_cset_slider_pane_g6

0xf989,	// (0x0007ba27) main_cset_slider_pane_g_ParamLimits

0xd83c,	// (0x000798da) main_cset_slider_pane_t1_ParamLimits

0x61e9,	// (0x00072287) main_cset_slider_pane_t2_ParamLimits

0x6203,	// (0x000722a1) main_cset_slider_pane_t3_ParamLimits

0x621d,	// (0x000722bb) main_cset_slider_pane_t4_ParamLimits

0x6237,	// (0x000722d5) main_cset_slider_pane_t5_ParamLimits

0x6251,	// (0x000722ef) main_cset_slider_pane_t6_ParamLimits

0x6266,	// (0x00072304) main_cset_slider_pane_t7_ParamLimits

0x6290,	// (0x0007232e) main_cset_slider_pane_t8_ParamLimits

0x6290,	// (0x0007232e) main_cset_slider_pane_t8

0x62b8,	// (0x00072356) main_cset_slider_pane_t9_ParamLimits

0x62b8,	// (0x00072356) main_cset_slider_pane_t9

0x62e0,	// (0x0007237e) main_cset_slider_pane_t10_ParamLimits

0x62e0,	// (0x0007237e) main_cset_slider_pane_t10

0x6308,	// (0x000723a6) main_cset_slider_pane_t11_ParamLimits

0x6308,	// (0x000723a6) main_cset_slider_pane_t11

0x6330,	// (0x000723ce) main_cset_slider_pane_t12_ParamLimits

0x6330,	// (0x000723ce) main_cset_slider_pane_t12

0x634d,	// (0x000723eb) main_cset_slider_pane_t13_ParamLimits

0x634d,	// (0x000723eb) main_cset_slider_pane_t13

0xf9ae,	// (0x0007ba4c) main_cset_slider_pane_t_ParamLimits

0x9325,	// (0x000753c3) bg_popup_sub_pane_cp011

0xd954,	// (0x000799f2) main_cset_text_pane_g1

0xd95c,	// (0x000799fa) main_cset_text_pane_t1

0xd96a,	// (0x00079a08) main_cset_text_pane_t2

0xd978,	// (0x00079a16) main_cset_text_pane_t3

0xd986,	// (0x00079a24) main_cset_text_pane_t4

0xd994,	// (0x00079a32) main_cset_text_pane_t5

0xd9a2,	// (0x00079a40) main_cset_text_pane_t6

0xd9b0,	// (0x00079a4e) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0007bae3) main_cset_text_pane_t

0x93ab,	// (0x00075449) main_cam4_burst_pane

0x93ab,	// (0x00075449) main_cam5_pane

0x6029,	// (0x000720c7) bg_button_pane_cp019

0x6032,	// (0x000720d0) bg_button_pane_cp020

0xd800,	// (0x0007989e) main_cset_slider_pane_g7_ParamLimits

0xd800,	// (0x0007989e) main_cset_slider_pane_g7

0xd80c,	// (0x000798aa) main_cset_slider_pane_g8_ParamLimits

0xd80c,	// (0x000798aa) main_cset_slider_pane_g8

0x6189,	// (0x00072227) main_cset_slider_pane_g9_ParamLimits

0x6189,	// (0x00072227) main_cset_slider_pane_g9

0x6195,	// (0x00072233) main_cset_slider_pane_g10_ParamLimits

0x6195,	// (0x00072233) main_cset_slider_pane_g10

0x61a1,	// (0x0007223f) main_cset_slider_pane_g11_ParamLimits

0x61a1,	// (0x0007223f) main_cset_slider_pane_g11

0x61ad,	// (0x0007224b) main_cset_slider_pane_g12_ParamLimits

0x61ad,	// (0x0007224b) main_cset_slider_pane_g12

0x61b9,	// (0x00072257) main_cset_slider_pane_g13_ParamLimits

0x61b9,	// (0x00072257) main_cset_slider_pane_g13

0x61c5,	// (0x00072263) main_cset_slider_pane_g14_ParamLimits

0x61c5,	// (0x00072263) main_cset_slider_pane_g14

0x61d1,	// (0x0007226f) main_cset_slider_pane_g15_ParamLimits

0x61d1,	// (0x0007226f) main_cset_slider_pane_g15

0xd86a,	// (0x00079908) main_cset_slider_pane_t14_ParamLimits

0xd86a,	// (0x00079908) main_cset_slider_pane_t14

0xd8a3,	// (0x00079941) main_cset_slider_pane_t15_ParamLimits

0xd8a3,	// (0x00079941) main_cset_slider_pane_t15

0x6877,	// (0x00072915) aid_cam4_burst_size_cell_ParamLimits

0x6877,	// (0x00072915) aid_cam4_burst_size_cell

0x6897,	// (0x00072935) grid_cam4_burst_pane_ParamLimits

0x6897,	// (0x00072935) grid_cam4_burst_pane

0x68cf,	// (0x0007296d) linegrid_cam4_burst_pane_ParamLimits

0x68cf,	// (0x0007296d) linegrid_cam4_burst_pane

0xd9be,	// (0x00079a5c) scroll_pane_cp30_ParamLimits

0xd9be,	// (0x00079a5c) scroll_pane_cp30

0x68f3,	// (0x00072991) cell_cam4_burst_pane_ParamLimits

0x68f3,	// (0x00072991) cell_cam4_burst_pane

0xd9ca,	// (0x00079a68) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9ca,	// (0x00079a68) linegrid_cam4_burst_pane_g1

0x6940,	// (0x000729de) linegrid_cam4_burst_pane_g2_ParamLimits

0x6940,	// (0x000729de) linegrid_cam4_burst_pane_g2

0xd9d7,	// (0x00079a75) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d7,	// (0x00079a75) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0007baf2) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0007baf2) linegrid_cam4_burst_pane_g

0x6951,	// (0x000729ef) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6951,	// (0x000729ef) linegrid_cam4_burst_pane_g3_copy1

0xd9e4,	// (0x00079a82) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e4,	// (0x00079a82) linegrid_cam4_burst_pane_g4

0x696b,	// (0x00072a09) linegrid_cam4_burst_pane_g5_ParamLimits

0x696b,	// (0x00072a09) linegrid_cam4_burst_pane_g5

0x697c,	// (0x00072a1a) linegrid_cam4_burst_pane_g6_ParamLimits

0x697c,	// (0x00072a1a) linegrid_cam4_burst_pane_g6

0xd9f1,	// (0x00079a8f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f1,	// (0x00079a8f) linegrid_cam4_burst_pane_g7

0x6993,	// (0x00072a31) cell_cam4_burst_pane_g1

0xda0a,	// (0x00079aa8) main_cam5_pane_t1_ParamLimits

0xda0a,	// (0x00079aa8) main_cam5_pane_t1

0xda1c,	// (0x00079aba) main_cam5_pane_t2_ParamLimits

0xda1c,	// (0x00079aba) main_cam5_pane_t2

0xda2e,	// (0x00079acc) main_cam5_pane_t3_ParamLimits

0xda2e,	// (0x00079acc) main_cam5_pane_t3

0xda40,	// (0x00079ade) main_cam5_pane_t4_ParamLimits

0xda40,	// (0x00079ade) main_cam5_pane_t4

0xda58,	// (0x00079af6) main_cam5_pane_t5_ParamLimits

0xda58,	// (0x00079af6) main_cam5_pane_t5

0xda6c,	// (0x00079b0a) main_cam5_pane_t6_ParamLimits

0xda6c,	// (0x00079b0a) main_cam5_pane_t6

0xda80,	// (0x00079b1e) main_cam5_pane_t7_ParamLimits

0xda80,	// (0x00079b1e) main_cam5_pane_t7

0xda92,	// (0x00079b30) main_cam5_pane_t8_ParamLimits

0xda92,	// (0x00079b30) main_cam5_pane_t8

0xdaae,	// (0x00079b4c) main_cam5_pane_t9_ParamLimits

0xdaae,	// (0x00079b4c) main_cam5_pane_t9

0xdac0,	// (0x00079b5e) main_cam5_pane_t10_ParamLimits

0xdac0,	// (0x00079b5e) main_cam5_pane_t10

0xdad2,	// (0x00079b70) main_cam5_pane_t11_ParamLimits

0xdad2,	// (0x00079b70) main_cam5_pane_t11

0xdae4,	// (0x00079b82) main_cam5_pane_t12_ParamLimits

0xdae4,	// (0x00079b82) main_cam5_pane_t12

0xdaf9,	// (0x00079b97) main_cam5_pane_t13_ParamLimits

0xdaf9,	// (0x00079b97) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0007bafe) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0007bafe) main_cam5_pane_t

0x036e,	// (0x0006c40c) popup_scut_keymap_window_ParamLimits

0x036e,	// (0x0006c40c) popup_scut_keymap_window

0x69a6,	// (0x00072a44) aid_size_cell_brow_shortcut

0xa413,	// (0x000764b1) bg_popup_window_pane_cp010

0x69b2,	// (0x00072a50) grid_scut_pane

0x69be,	// (0x00072a5c) cell_scut_pane_ParamLimits

0x69be,	// (0x00072a5c) cell_scut_pane

0x69d5,	// (0x00072a73) cell_scut_pane_g1

0xdb16,	// (0x00079bb4) cell_scut_pane_t1

0xdb25,	// (0x00079bc3) cell_scut_pane_t2

0x69de,	// (0x00072a7c) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0007bb19) cell_scut_pane_t

0x46ed,	// (0x0007078b) main_mup3_pane_g8_ParamLimits

0x46ed,	// (0x0007078b) main_mup3_pane_g8

0x5b7a,	// (0x00071c18) area_vitu2_query_pane_ParamLimits

0x5b7a,	// (0x00071c18) area_vitu2_query_pane

0x671f,	// (0x000727bd) input_focus_pane_cp08

0xdb34,	// (0x00079bd2) area_vitu2_query_pane_g1

0x69ec,	// (0x00072a8a) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0007bb20) area_vitu2_query_pane_g

0x69fd,	// (0x00072a9b) area_vitu2_query_pane_t1_ParamLimits

0x69fd,	// (0x00072a9b) area_vitu2_query_pane_t1

0x6a11,	// (0x00072aaf) area_vitu2_query_pane_t2_ParamLimits

0x6a11,	// (0x00072aaf) area_vitu2_query_pane_t2

0x6a25,	// (0x00072ac3) area_vitu2_query_pane_t3_ParamLimits

0x6a25,	// (0x00072ac3) area_vitu2_query_pane_t3

0xa57c,	// (0x0007661a) area_vitu2_query_pane_t4_ParamLimits

0xa57c,	// (0x0007661a) area_vitu2_query_pane_t4

0xa5a4,	// (0x00076642) area_vitu2_query_pane_t5_ParamLimits

0xa5a4,	// (0x00076642) area_vitu2_query_pane_t5

0xa5cc,	// (0x0007666a) area_vitu2_query_pane_t6_ParamLimits

0xa5cc,	// (0x0007666a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0007bb25) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0007bb25) area_vitu2_query_pane_t

0x6a4d,	// (0x00072aeb) bg_button_pane_cp018

0x6a5b,	// (0x00072af9) bg_button_pane_cp021

0x6a67,	// (0x00072b05) bg_button_pane_cp022

0x6a78,	// (0x00072b16) input_focus_pane_cp09

0xb246,	// (0x000772e4) aid_size_touch_mv_arrow_left

0xb271,	// (0x0007730f) aid_size_touch_mv_arrow_right

0xd818,	// (0x000798b6) main_cset_slider_pane_g16_ParamLimits

0xd818,	// (0x000798b6) main_cset_slider_pane_g16

0xd824,	// (0x000798c2) main_cset_slider_pane_g17_ParamLimits

0xd824,	// (0x000798c2) main_cset_slider_pane_g17

0x6993,	// (0x00072a31) cell_cam4_burst_pane_g1_ParamLimits

0x9325,	// (0x000753c3) compa_mode_pane

0x63e7,	// (0x00072485) popup_vtel_slider_window_g3_ParamLimits

0x63e7,	// (0x00072485) popup_vtel_slider_window_g3

0x63fe,	// (0x0007249c) popup_vtel_slider_window_g4_ParamLimits

0x63fe,	// (0x0007249c) popup_vtel_slider_window_g4

0x6415,	// (0x000724b3) popup_vtel_slider_window_t1_ParamLimits

0x6415,	// (0x000724b3) popup_vtel_slider_window_t1

0x93ab,	// (0x00075449) main_cl_pane

0x9954,	// (0x000759f2) popup_imed_adjust2_window_ParamLimits

0xc850,	// (0x000788ee) bg_tb_trans_pane_cp05_ParamLimits

0xd172,	// (0x00079210) popup_imed_adjust2_window_g1_ParamLimits

0xd181,	// (0x0007921f) popup_imed_adjust2_window_g2_ParamLimits

0xd181,	// (0x0007921f) popup_imed_adjust2_window_g2

0xd18d,	// (0x0007922b) popup_imed_adjust2_window_g3_ParamLimits

0xd18d,	// (0x0007922b) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0007b890) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0007b890) popup_imed_adjust2_window_g

0xd199,	// (0x00079237) popup_imed_adjust2_window_t1_ParamLimits

0xd1b1,	// (0x0007924f) slider_imed_adjust_pane_ParamLimits

0xd1c5,	// (0x00079263) slider_imed_adjust_pane_g1_ParamLimits

0xd1d5,	// (0x00079273) slider_imed_adjust_pane_g2_ParamLimits

0xd1e5,	// (0x00079283) slider_imed_adjust_pane_g3_ParamLimits

0xd1f6,	// (0x00079294) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0007b897) slider_imed_adjust_pane_g_ParamLimits

0x5903,	// (0x000719a1) aid_touch_area_cam4_ParamLimits

0x5903,	// (0x000719a1) aid_touch_area_cam4

0x9cc8,	// (0x00075d66) battery_pane_cp01

0x59d2,	// (0x00071a70) main_camera4_pane_g6_ParamLimits

0x59d2,	// (0x00071a70) main_camera4_pane_g6

0x59fc,	// (0x00071a9a) main_camera4_pane_t2_ParamLimits

0x59fc,	// (0x00071a9a) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0007b99a) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0007b99a) main_camera4_pane_t

0x5a31,	// (0x00071acf) aid_touch_area_vid4_ParamLimits

0x5a31,	// (0x00071acf) aid_touch_area_vid4

0x5a85,	// (0x00071b23) main_video4_pane_g5_ParamLimits

0x5a85,	// (0x00071b23) main_video4_pane_g5

0x5aaa,	// (0x00071b48) vid4_progress_pane_ParamLimits

0x5aaa,	// (0x00071b48) vid4_progress_pane

0xd830,	// (0x000798ce) main_cset_slider_pane_g18_ParamLimits

0xd830,	// (0x000798ce) main_cset_slider_pane_g18

0xd9fe,	// (0x00079a9c) cell_cam4_burst_pane_g2_ParamLimits

0xd9fe,	// (0x00079a9c) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0007baf9) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0007baf9) cell_cam4_burst_pane_g

0xa21e,	// (0x000762bc) bg_cl_pane_ParamLimits

0xa21e,	// (0x000762bc) bg_cl_pane

0x6a89,	// (0x00072b27) cl_header_pane_ParamLimits

0x6a89,	// (0x00072b27) cl_header_pane

0x6a9d,	// (0x00072b3b) cl_listscroll_pane_ParamLimits

0x6a9d,	// (0x00072b3b) cl_listscroll_pane

0xdb40,	// (0x00079bde) bg_cl_pane_g1

0xdb48,	// (0x00079be6) bg_cl_pane_g2

0xdb50,	// (0x00079bee) bg_cl_pane_g3

0xdb58,	// (0x00079bf6) bg_cl_pane_g4

0xdb60,	// (0x00079bfe) bg_cl_pane_g5

0xdb68,	// (0x00079c06) bg_cl_pane_g6

0xdb70,	// (0x00079c0e) bg_cl_pane_g7

0xdb78,	// (0x00079c16) bg_cl_pane_g8

0xdb80,	// (0x00079c1e) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0007bb34) bg_cl_pane_g

0x6aad,	// (0x00072b4b) aid_height_cl_leading_ParamLimits

0x6aad,	// (0x00072b4b) aid_height_cl_leading

0x6ab9,	// (0x00072b57) aid_height_cl_text_ParamLimits

0x6ab9,	// (0x00072b57) aid_height_cl_text

0xa4dd,	// (0x0007657b) bg_cl_header_pane_ParamLimits

0xa4dd,	// (0x0007657b) bg_cl_header_pane

0x6ad8,	// (0x00072b76) cl_header_pane_g1_ParamLimits

0x6ad8,	// (0x00072b76) cl_header_pane_g1

0x6aee,	// (0x00072b8c) cl_header_pane_t1_ParamLimits

0x6aee,	// (0x00072b8c) cl_header_pane_t1

0xdb88,	// (0x00079c26) cl_list_pane

0xd7eb,	// (0x00079889) hc_scroll_pane_cp01

0xabfd,	// (0x00076c9b) bg_cl_header_pane_g1

0xd6ad,	// (0x0007974b) bg_cl_header_pane_g2

0xac1d,	// (0x00076cbb) bg_cl_header_pane_g3

0xd6bd,	// (0x0007975b) bg_cl_header_pane_g4

0xd6b5,	// (0x00079753) bg_cl_header_pane_g5

0xd90d,	// (0x000799ab) bg_cl_header_pane_g6

0xd6d5,	// (0x00079773) bg_cl_header_pane_g7

0xd6dd,	// (0x0007977b) bg_cl_header_pane_g8

0xd6cd,	// (0x0007976b) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0007bb47) bg_cl_header_pane_g

0x6b07,	// (0x00072ba5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b07,	// (0x00072ba5) hc_cl_list_double_graphic_heading_pane

0x6b18,	// (0x00072bb6) hc_cl_list_single_graphic_pane_ParamLimits

0x6b18,	// (0x00072bb6) hc_cl_list_single_graphic_pane

0x6b31,	// (0x00072bcf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b31,	// (0x00072bcf) hc_cl_list_single_graphic_pane_g1

0x6b3d,	// (0x00072bdb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b3d,	// (0x00072bdb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0007bb5a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0007bb5a) hc_cl_list_single_graphic_pane_g

0x6b51,	// (0x00072bef) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b51,	// (0x00072bef) hc_cl_list_single_graphic_pane_t1

0x6b31,	// (0x00072bcf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b31,	// (0x00072bcf) hc_cl_list_double_graphic_heading_pane_g1

0x6b66,	// (0x00072c04) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b66,	// (0x00072c04) hc_cl_list_double_graphic_heading_pane_g2

0x6b7a,	// (0x00072c18) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b7a,	// (0x00072c18) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0007bb5f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0007bb5f) hc_cl_list_double_graphic_heading_pane_g

0x6b8e,	// (0x00072c2c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b8e,	// (0x00072c2c) hc_cl_list_double_graphic_heading_pane_t1

0x6ba3,	// (0x00072c41) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ba3,	// (0x00072c41) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0007bb66) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0007bb66) hc_cl_list_double_graphic_heading_pane_t

0x9e52,	// (0x00075ef0) vid4_progress_pane_g1

0x9e62,	// (0x00075f00) vid4_progress_pane_g2

0x6bb8,	// (0x00072c56) vid4_progress_pane_g3

0x9e72,	// (0x00075f10) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0007bb6b) vid4_progress_pane_g

0x6bca,	// (0x00072c68) vid4_progress_pane_t1

0x9e8a,	// (0x00075f28) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0007bb76) vid4_progress_pane_t

0x6be0,	// (0x00072c7e) wait_bar_pane_cp07

0xca4b,	// (0x00078ae9) blid_firmament_pane_ParamLimits

0xca8e,	// (0x00078b2c) popup_blid_sat_info2_window_g1

0xcab2,	// (0x00078b50) popup_blid_sat_info2_window_t3

0xcac0,	// (0x00078b5e) popup_blid_sat_info2_window_t4

0xcace,	// (0x00078b6c) popup_blid_sat_info2_window_t5

0xcadc,	// (0x00078b7a) popup_blid_sat_info2_window_t6

0xcaec,	// (0x00078b8a) popup_blid_sat_info2_window_t7

0xcafa,	// (0x00078b98) popup_blid_sat_info2_window_t8

0xcb08,	// (0x00078ba6) popup_blid_sat_info2_window_t9

0xcb16,	// (0x00078bb4) popup_blid_sat_info2_window_t10

0xcbd8,	// (0x00078c76) aid_firma_cardinal_ParamLimits

0xcbec,	// (0x00078c8a) blid_firmament_pane_t1_ParamLimits

0xcc0f,	// (0x00078cad) blid_firmament_pane_t2_ParamLimits

0xcc26,	// (0x00078cc4) blid_firmament_pane_t3_ParamLimits

0xcc3d,	// (0x00078cdb) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0007b784) blid_firmament_pane_t_ParamLimits

0xcc54,	// (0x00078cf2) blid_sat_info_pane_ParamLimits

0x939d,	// (0x0007543b) main_cam_set_pane_ParamLimits

0x4fac,	// (0x0007104a) aid_size_cell_colour_35_ParamLimits

0x4fcc,	// (0x0007106a) aid_size_cell_colour_112_ParamLimits

0x4fec,	// (0x0007108a) aid_size_cell_effect_ParamLimits

0xc850,	// (0x000788ee) bg_tb_trans_pane_cp02_ParamLimits

0xae65,	// (0x00076f03) heading_imed_pane_ParamLimits

0x500c,	// (0x000710aa) listscroll_imed_pane_ParamLimits

0xbe36,	// (0x00077ed4) popup_call2_audio_first_window_g5_ParamLimits

0xbe36,	// (0x00077ed4) popup_call2_audio_first_window_g5

0x55aa,	// (0x00071648) aid_size_touch_image3_arrow_left_ParamLimits

0x55aa,	// (0x00071648) aid_size_touch_image3_arrow_left

0x55d6,	// (0x00071674) aid_size_touch_image3_arrow_right_ParamLimits

0x55d6,	// (0x00071674) aid_size_touch_image3_arrow_right

0x9e9f,	// (0x00075f3d) vid4_progress_pane_t3

0x5321,	// (0x000713bf) main_hwr_training_symbol_option_pane_ParamLimits

0x5321,	// (0x000713bf) main_hwr_training_symbol_option_pane

0xd45f,	// (0x000794fd) popup_hwr_training_preview_window_ParamLimits

0xd45f,	// (0x000794fd) popup_hwr_training_preview_window

0x5341,	// (0x000713df) hwr_training_navi_pane_g5_ParamLimits

0x5341,	// (0x000713df) hwr_training_navi_pane_g5

0xd69b,	// (0x00079739) popup_char_count_window

0x939d,	// (0x0007543b) bg_popup_sub_pane_cp20_ParamLimits

0x6531,	// (0x000725cf) list_vitu2_match_list_pane_ParamLimits

0x6540,	// (0x000725de) vitu2_page_scroll_pane_ParamLimits

0x6540,	// (0x000725de) vitu2_page_scroll_pane

0xdb9a,	// (0x00079c38) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb9a,	// (0x00079c38) list_single_hwr_training_symbol_option_pane

0xdbad,	// (0x00079c4b) list_single_hwr_training_symbol_option_pane_g1

0xdbb5,	// (0x00079c53) list_single_hwr_training_symbol_option_pane_t1

0xdbc3,	// (0x00079c61) bg_button_pane_cp023

0xdbcc,	// (0x00079c6a) bg_button_pane_cp024

0x6c20,	// (0x00072cbe) vitu2_page_scroll_pane_g1

0x6c28,	// (0x00072cc6) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0007bb7d) vitu2_page_scroll_pane_g

0x6c30,	// (0x00072cce) vitu2_page_scroll_pane_t1

0xcc8d,	// (0x00078d2b) popup_char_count_window_g1

0xdbff,	// (0x00079c9d) popup_char_count_window_g2

0xdc08,	// (0x00079ca6) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0007bb82) popup_char_count_window_g

0xdc11,	// (0x00079caf) popup_char_count_window_t1

0x93ab,	// (0x00075449) main_vded2_pane

0xd15e,	// (0x000791fc) aid_size_cell_imed_line

0xd168,	// (0x00079206) grid_imed_line_width_pane

0x9d86,	// (0x00075e24) vid4_indicators_pane_g4

0xdc1f,	// (0x00079cbd) cell_imed_line_width_pane_ParamLimits

0xdc1f,	// (0x00079cbd) cell_imed_line_width_pane

0xdc33,	// (0x00079cd1) cell_imed_line_width_pane_g1

0xd74c,	// (0x000797ea) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0007bb89) cell_imed_line_width_pane_g

0x6c3f,	// (0x00072cdd) main_vded2_pane_g1_ParamLimits

0x6c3f,	// (0x00072cdd) main_vded2_pane_g1

0x6c55,	// (0x00072cf3) main_vded2_pane_g2_ParamLimits

0x6c55,	// (0x00072cf3) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0007bb8e) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0007bb8e) main_vded2_pane_g

0x6c67,	// (0x00072d05) vded2_slider_pane_ParamLimits

0x6c67,	// (0x00072d05) vded2_slider_pane

0x6c77,	// (0x00072d15) aid_size_touch_vded2_end

0x6c81,	// (0x00072d1f) aid_size_touch_vded2_playhead

0xdc3c,	// (0x00079cda) aid_size_touch_vded2_start

0xdc44,	// (0x00079ce2) vded2_slider_bg_pane

0xdc4d,	// (0x00079ceb) vded2_slider_pane_g1

0xdc56,	// (0x00079cf4) vded2_slider_pane_g2

0x6c8b,	// (0x00072d29) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0007bb93) vded2_slider_pane_g

0xdc5e,	// (0x00079cfc) vded2_slider_bg_pane_g1

0xdc67,	// (0x00079d05) vded2_slider_bg_pane_g2

0xdc70,	// (0x00079d0e) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0007bb9a) vded2_slider_bg_pane_g

0x2d36,	// (0x0006edd4) aid_postcard_touch_down_pane_ParamLimits

0x2d36,	// (0x0006edd4) aid_postcard_touch_down_pane

0x2d4c,	// (0x0006edea) aid_postcard_touch_up_pane_ParamLimits

0x2d4c,	// (0x0006edea) aid_postcard_touch_up_pane

0x93ab,	// (0x00075449) main_blid2_pane

0x993a,	// (0x000759d8) popup_blid2_search_window

0x9325,	// (0x000753c3) blid2_gps_pane

0x9325,	// (0x000753c3) blid2_navig_pane

0x9325,	// (0x000753c3) blid2_search_pane

0x9325,	// (0x000753c3) blid2_tripm_pane

0x6c96,	// (0x00072d34) blid2_search_pane_g1_ParamLimits

0x6c96,	// (0x00072d34) blid2_search_pane_g1

0x6cae,	// (0x00072d4c) blid2_search_pane_t1_ParamLimits

0x6cae,	// (0x00072d4c) blid2_search_pane_t1

0x6cc0,	// (0x00072d5e) aid_size_cell_blid2_gps_ParamLimits

0x6cc0,	// (0x00072d5e) aid_size_cell_blid2_gps

0x6cd8,	// (0x00072d76) blid2_gps_pane_g1_ParamLimits

0x6cd8,	// (0x00072d76) blid2_gps_pane_g1

0x6cec,	// (0x00072d8a) grid_blid2_satellite_pane_ParamLimits

0x6cec,	// (0x00072d8a) grid_blid2_satellite_pane

0x6d06,	// (0x00072da4) blid2_navig_pane_g1_ParamLimits

0x6d06,	// (0x00072da4) blid2_navig_pane_g1

0x6d12,	// (0x00072db0) blid2_navig_pane_t1_ParamLimits

0x6d12,	// (0x00072db0) blid2_navig_pane_t1

0x6d2d,	// (0x00072dcb) blid2_navig_pane_t2_ParamLimits

0x6d2d,	// (0x00072dcb) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0007bba1) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0007bba1) blid2_navig_pane_t

0x6d48,	// (0x00072de6) blid2_navig_ring_pane_ParamLimits

0x6d48,	// (0x00072de6) blid2_navig_ring_pane

0x6d61,	// (0x00072dff) blid2_speed_pane_ParamLimits

0x6d61,	// (0x00072dff) blid2_speed_pane

0x6d6d,	// (0x00072e0b) blid2_tripm_pane_g1_ParamLimits

0x6d6d,	// (0x00072e0b) blid2_tripm_pane_g1

0x6d88,	// (0x00072e26) blid2_tripm_pane_g2_ParamLimits

0x6d88,	// (0x00072e26) blid2_tripm_pane_g2

0x6d9c,	// (0x00072e3a) blid2_tripm_pane_g3_ParamLimits

0x6d9c,	// (0x00072e3a) blid2_tripm_pane_g3

0x6db0,	// (0x00072e4e) blid2_tripm_pane_g4_ParamLimits

0x6db0,	// (0x00072e4e) blid2_tripm_pane_g4

0x6dc4,	// (0x00072e62) blid2_tripm_pane_g5_ParamLimits

0x6dc4,	// (0x00072e62) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0007bba6) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0007bba6) blid2_tripm_pane_g

0x6dea,	// (0x00072e88) blid2_tripm_pane_t1_ParamLimits

0x6dea,	// (0x00072e88) blid2_tripm_pane_t1

0x6e05,	// (0x00072ea3) blid2_tripm_pane_t2_ParamLimits

0x6e05,	// (0x00072ea3) blid2_tripm_pane_t2

0x6e1e,	// (0x00072ebc) blid2_tripm_pane_t3_ParamLimits

0x6e1e,	// (0x00072ebc) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0007bbb3) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0007bbb3) blid2_tripm_pane_t

0x6e65,	// (0x00072f03) cell_blid2_satellite_pane_ParamLimits

0x6e65,	// (0x00072f03) cell_blid2_satellite_pane

0x6e83,	// (0x00072f21) cell_blid2_satellite_pane_g1

0xdc79,	// (0x00079d17) cell_blid2_satellite_pane_t1

0xcc64,	// (0x00078d02) blid2_speed_pane_g1

0xdc87,	// (0x00079d25) blid2_speed_pane_t1

0xdc95,	// (0x00079d33) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0007bbbc) blid2_speed_pane_t

0xcc64,	// (0x00078d02) blid2_navig_ring_pane_g1

0x6e8c,	// (0x00072f2a) blid2_navig_ring_pane_g2

0x6e94,	// (0x00072f32) blid2_navig_ring_pane_g3

0x6e9c,	// (0x00072f3a) blid2_navig_ring_pane_g4

0x6ea4,	// (0x00072f42) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0007bbc1) blid2_navig_ring_pane_g

0x9325,	// (0x000753c3) bg_popup_window_pane_cp011

0xdca3,	// (0x00079d41) popup_blid2_search_window_g1

0xdcab,	// (0x00079d49) popup_blid2_search_window_t1

0xdcb9,	// (0x00079d57) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0007bbcc) popup_blid2_search_window_t

0xab0c,	// (0x00076baa) main_browser_pane_g1

0xa21e,	// (0x000762bc) main_browser_pane_ParamLimits

0x939d,	// (0x0007543b) bg_button_pane_cp011_ParamLimits

0x5dc2,	// (0x00071e60) cell_vitu2_function_pane_g1_ParamLimits

0xc850,	// (0x000788ee) bg_popup_sub_pane_cp22_ParamLimits

0x671f,	// (0x000727bd) input_focus_pane_cp08_ParamLimits

0x6736,	// (0x000727d4) popup_vitu2_query_button_pane_ParamLimits

0x6736,	// (0x000727d4) popup_vitu2_query_button_pane

0x6747,	// (0x000727e5) popup_vitu2_query_input_button_pane

0xd948,	// (0x000799e6) popup_vitu2_query_window_g1_ParamLimits

0x6751,	// (0x000727ef) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0007bacd) popup_vitu2_query_window_g_ParamLimits

0x9325,	// (0x000753c3) bg_button_pane_cp026

0x6eac,	// (0x00072f4a) popup_vitu2_query_input_button_pane_g1

0x9325,	// (0x000753c3) bg_button_pane_cp025

0xdcc7,	// (0x00079d65) popup_vitu2_query_button_pane_t1

0x43df,	// (0x0007047d) main_mp3_pane_t6

0x43ed,	// (0x0007048b) popup_slider_window_cp01

0x9cf2,	// (0x00075d90) cam4_battery_pane

0x9d45,	// (0x00075de3) cam4_battery_pane_cp02

0x9e4a,	// (0x00075ee8) cam4_battery_pane_cp01

0x9e4a,	// (0x00075ee8) cam4_battery_pane_cp03

0xd754,	// (0x000797f2) cam4_battery_pane_g1

0xcc64,	// (0x00078d02) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0007bbd1) cam4_battery_pane_g

0xcb24,	// (0x00078bc2) popup_blid_sat_info2_window_t11

0xb246,	// (0x000772e4) aid_size_touch_mv_arrow_left_ParamLimits

0xb271,	// (0x0007730f) aid_size_touch_mv_arrow_right_ParamLimits

0xb2cf,	// (0x0007736d) navi_pane_g1_ParamLimits

0xb2db,	// (0x00077379) navi_pane_g2_ParamLimits

0xb309,	// (0x000773a7) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007b483) navi_pane_g_ParamLimits

0x27eb,	// (0x0006e889) navi_pane_mv_t1_ParamLimits

0x5018,	// (0x000710b6) grid_imed_effect_pane_ParamLimits

0x13c1,	// (0x0006d45f) aid_placing_vt_slider_lsc

0xaa5b,	// (0x00076af9) aid_placing_vt_slider_prt

0xa4dd,	// (0x0007657b) bg_tb_trans_pane_cp01_ParamLimits

0xcdd2,	// (0x00078e70) popup_image_details_window_g1_ParamLimits

0xcde5,	// (0x00078e83) popup_image_details_window_g2_ParamLimits

0xcdfa,	// (0x00078e98) popup_image_details_window_g3_ParamLimits

0xcdfa,	// (0x00078e98) popup_image_details_window_g3

0xf72b,	// (0x0007b7c9) popup_image_details_window_g_ParamLimits

0xce0e,	// (0x00078eac) popup_image_details_window_t1_ParamLimits

0xce20,	// (0x00078ebe) popup_image_details_window_t2_ParamLimits

0xce39,	// (0x00078ed7) popup_image_details_window_t3_ParamLimits

0xce4d,	// (0x00078eeb) popup_image_details_window_t4_ParamLimits

0xce68,	// (0x00078f06) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0007b7d0) popup_image_details_window_t_ParamLimits

0x6ac5,	// (0x00072b63) cl_header_name_pane_ParamLimits

0x6ac5,	// (0x00072b63) cl_header_name_pane

0x6eb4,	// (0x00072f52) cl_header_name_pane_t1_ParamLimits

0x6eb4,	// (0x00072f52) cl_header_name_pane_t1

0x6ed5,	// (0x00072f73) cl_header_name_pane_t2_ParamLimits

0x6ed5,	// (0x00072f73) cl_header_name_pane_t2

0x6f17,	// (0x00072fb5) cl_header_name_pane_t3_ParamLimits

0x6f17,	// (0x00072fb5) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0007bbd6) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0007bbd6) cl_header_name_pane_t

0xb398,	// (0x00077436) navi_pane_mv_g2_ParamLimits

0xd675,	// (0x00079713) field_vitu2_entry_pane_g1_ParamLimits

0xd681,	// (0x0007971f) field_vitu2_entry_pane_g2_ParamLimits

0xd68d,	// (0x0007972b) field_vitu2_entry_pane_g3_ParamLimits

0xd68d,	// (0x0007972b) field_vitu2_entry_pane_g3

0xf92e,	// (0x0007b9cc) field_vitu2_entry_pane_g_ParamLimits

0x9db9,	// (0x00075e57) cell_vitu2_itu_pane_g1_ParamLimits

0x5d56,	// (0x00071df4) cell_vitu2_itu_pane_g2_ParamLimits

0x5d56,	// (0x00071df4) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0007b9d8) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0007b9d8) cell_vitu2_itu_pane_g

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp05_ParamLimits

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp05

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp03

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp04

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp10_ParamLimits

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp10

0x6a67,	// (0x00072b05) bg_vkb2_func_pane_cp08

0x6a4d,	// (0x00072aeb) bg_vkb2_func_pane_cp06

0x6a5b,	// (0x00072af9) bg_vkb2_func_pane_cp07

0xdbd5,	// (0x00079c73) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd5,	// (0x00079c73) bg_vkb2_func_pane_cp11

0xdbea,	// (0x00079c88) bg_vkb2_func_pane_cp12_ParamLimits

0xdbea,	// (0x00079c88) bg_vkb2_func_pane_cp12

0x9325,	// (0x000753c3) bg_vkb2_func_pane_cp09

0xd6ad,	// (0x0007974b) bg_vkb2_func_pane_g1

0xac1d,	// (0x00076cbb) bg_vkb2_func_pane_g2

0xd6b5,	// (0x00079753) bg_vkb2_func_pane_g3

0xd6bd,	// (0x0007975b) bg_vkb2_func_pane_g4

0xd90d,	// (0x000799ab) bg_vkb2_func_pane_g5

0xd6d5,	// (0x00079773) bg_vkb2_func_pane_g6

0xd6dd,	// (0x0007977b) bg_vkb2_func_pane_g7

0xd6cd,	// (0x0007976b) bg_vkb2_func_pane_g8

0xabfd,	// (0x00076c9b) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0007bbdd) bg_vkb2_func_pane_g

0x6dd8,	// (0x00072e76) blid2_tripm_pane_g6_ParamLimits

0x6dd8,	// (0x00072e76) blid2_tripm_pane_g6

0xd517,	// (0x000795b5) mp4_progress_pane_g1

0x6e51,	// (0x00072eef) blid2_tripm_values_pane_ParamLimits

0x6e51,	// (0x00072eef) blid2_tripm_values_pane

0x6f48,	// (0x00072fe6) blid2_tripm_values_pane_t1

0x6f56,	// (0x00072ff4) blid2_tripm_values_pane_t2

0x6f64,	// (0x00073002) blid2_tripm_values_pane_t3

0x6f72,	// (0x00073010) blid2_tripm_values_pane_t4

0x6f80,	// (0x0007301e) blid2_tripm_values_pane_t5

0x6f8e,	// (0x0007302c) blid2_tripm_values_pane_t6

0x6f9c,	// (0x0007303a) blid2_tripm_values_pane_t7

0x6faa,	// (0x00073048) blid2_tripm_values_pane_t8

0x6fb8,	// (0x00073056) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0007bbf0) blid2_tripm_values_pane_t

0x1403,	// (0x0006d4a1) call_video_pane_t1_ParamLimits

0x1421,	// (0x0006d4bf) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007b30c) call_video_pane_t_ParamLimits

0x2cb4,	// (0x0006ed52) msg_header_pane_g1_ParamLimits

0xb580,	// (0x0007761e) msg_header_pane_g2_ParamLimits

0xb580,	// (0x0007761e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007b526) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007b526) msg_header_pane_g

0xa21e,	// (0x000762bc) main_clock2_pane_ParamLimits

0x4d15,	// (0x00070db3) grid_clock2_toolbar_pane_ParamLimits

0x4d15,	// (0x00070db3) grid_clock2_toolbar_pane

0x4d15,	// (0x00070db3) listscroll_clock2_pane_ParamLimits

0x4d15,	// (0x00070db3) listscroll_clock2_pane

0x4e0c,	// (0x00070eaa) main_clock2_pane_t3_ParamLimits

0x4e0c,	// (0x00070eaa) main_clock2_pane_t3

0x4e30,	// (0x00070ece) main_clock2_pane_t4_ParamLimits

0x4e30,	// (0x00070ece) main_clock2_pane_t4

0xdcd5,	// (0x00079d73) cell_clock2_toolbar_pane

0xdcdd,	// (0x00079d7b) cell_clock2_toolbar_pane_cp01

0xdcdd,	// (0x00079d7b) cell_clock2_toolbar_pane_cp02

0xdce5,	// (0x00079d83) cell_clock2_toolbar_pane_cp03

0xdced,	// (0x00079d8b) list_clock2_pane

0xb1cb,	// (0x00077269) scroll_pane_cp10

0xdcf5,	// (0x00079d93) list_single_clock2_pane_ParamLimits

0xdcf5,	// (0x00079d93) list_single_clock2_pane

0xa413,	// (0x000764b1) list_highlight_pane_cp08

0xdd02,	// (0x00079da0) list_single_clock2_pane_t1

0xdd10,	// (0x00079dae) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0007bc03) list_single_clock2_pane_t

0x9325,	// (0x000753c3) bg_button_pane_cp10

0xdd1e,	// (0x00079dbc) cell_clock2_toolbar_pane_g1

0x2cc2,	// (0x0006ed60) aid_main_viewer_pane_g1_ParamLimits

0x2cc2,	// (0x0006ed60) aid_main_viewer_pane_g1

0x2cd0,	// (0x0006ed6e) aid_main_viewer_pane_g2_ParamLimits

0x2cd0,	// (0x0006ed6e) aid_main_viewer_pane_g2

0x2cde,	// (0x0006ed7c) aid_main_viewer_pane_g3_ParamLimits

0x2cde,	// (0x0006ed7c) aid_main_viewer_pane_g3

0x2ced,	// (0x0006ed8b) aid_main_viewer_pane_g4_ParamLimits

0x2ced,	// (0x0006ed8b) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007b537) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007b537) aid_main_viewer_pane_g

0x35f5,	// (0x0006f693) main_calc_pane_ParamLimits

0x361b,	// (0x0006f6b9) main_dialer2_pane_ParamLimits

0x93ab,	// (0x00075449) main_cam6_pane

0x93ab,	// (0x00075449) main_vid6_pane

0x4d21,	// (0x00070dbf) listscroll_gen_pane_cp06_ParamLimits

0x4d21,	// (0x00070dbf) listscroll_gen_pane_cp06

0x4e53,	// (0x00070ef1) main_clock2_pane_t5_ParamLimits

0x4e53,	// (0x00070ef1) main_clock2_pane_t5

0x4ead,	// (0x00070f4b) aid_call2_pane_cp10_ParamLimits

0x4ebf,	// (0x00070f5d) aid_call_pane_cp10_ParamLimits

0xb23a,	// (0x000772d8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb23a,	// (0x000772d8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ed1,	// (0x00070f6f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ed1,	// (0x00070f6f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb23a,	// (0x000772d8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0007b885) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ee3,	// (0x00070f81) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5557,	// (0x000715f5) cell_dialer2_keypad_pane_g2_ParamLimits

0x5557,	// (0x000715f5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0007b96b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0007b96b) cell_dialer2_keypad_pane_g

0x5573,	// (0x00071611) cell_dialer2_keypad_pane_t1

0x60dc,	// (0x0007217a) main_cset_text2_pane_ParamLimits

0x60dc,	// (0x0007217a) main_cset_text2_pane

0xdb34,	// (0x00079bd2) area_vitu2_query_pane_g1_ParamLimits

0x69ec,	// (0x00072a8a) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0007bb20) area_vitu2_query_pane_g_ParamLimits

0xa5f4,	// (0x00076692) area_vitu2_query_pane_t7_ParamLimits

0xa5f4,	// (0x00076692) area_vitu2_query_pane_t7

0x6a4d,	// (0x00072aeb) bg_button_pane_cp018_ParamLimits

0x6a5b,	// (0x00072af9) bg_button_pane_cp021_ParamLimits

0x6a67,	// (0x00072b05) bg_button_pane_cp022_ParamLimits

0x6a67,	// (0x00072b05) bg_vkb2_func_pane_cp08_ParamLimits

0x6a4d,	// (0x00072aeb) bg_vkb2_func_pane_cp06_ParamLimits

0x6a5b,	// (0x00072af9) bg_vkb2_func_pane_cp07_ParamLimits

0x6a78,	// (0x00072b16) input_focus_pane_cp09_ParamLimits

0x9eb5,	// (0x00075f53) cam6_autofocus_pane_ParamLimits

0x9eb5,	// (0x00075f53) cam6_autofocus_pane

0x6fc6,	// (0x00073064) cam6_image_uncrop_pane_ParamLimits

0x6fc6,	// (0x00073064) cam6_image_uncrop_pane

0x6fd5,	// (0x00073073) cam6_indi_pane_ParamLimits

0x6fd5,	// (0x00073073) cam6_indi_pane

0x6feb,	// (0x00073089) cam6_mode_pane_ParamLimits

0x6feb,	// (0x00073089) cam6_mode_pane

0x6ffd,	// (0x0007309b) cam6_timer_pane_ParamLimits

0x6ffd,	// (0x0007309b) cam6_timer_pane

0x700d,	// (0x000730ab) cam6_zoom_pane_ParamLimits

0x700d,	// (0x000730ab) cam6_zoom_pane

0x7019,	// (0x000730b7) cam6_mode_pane_g1_ParamLimits

0x7019,	// (0x000730b7) cam6_mode_pane_g1

0x7029,	// (0x000730c7) cam6_mode_pane_g2_ParamLimits

0x7029,	// (0x000730c7) cam6_mode_pane_g2

0x7039,	// (0x000730d7) cam6_mode_pane_g3_ParamLimits

0x7039,	// (0x000730d7) cam6_mode_pane_g3

0x7049,	// (0x000730e7) cam6_mode_pane_g4_ParamLimits

0x7049,	// (0x000730e7) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0007bc08) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0007bc08) cam6_mode_pane_g

0xdd26,	// (0x00079dc4) bg_tb_trans_pane_cp08_ParamLimits

0xdd26,	// (0x00079dc4) bg_tb_trans_pane_cp08

0xdd34,	// (0x00079dd2) cam6_battery_pane_ParamLimits

0xdd34,	// (0x00079dd2) cam6_battery_pane

0xdd4a,	// (0x00079de8) cam6_indi_pane_g1_ParamLimits

0xdd4a,	// (0x00079de8) cam6_indi_pane_g1

0xdd5c,	// (0x00079dfa) cam6_indi_pane_g2_ParamLimits

0xdd5c,	// (0x00079dfa) cam6_indi_pane_g2

0xdd6e,	// (0x00079e0c) cam6_indi_pane_g3_ParamLimits

0xdd6e,	// (0x00079e0c) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0007bc11) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0007bc11) cam6_indi_pane_g

0xdd80,	// (0x00079e1e) cam6_indi_pane_t1_ParamLimits

0xdd80,	// (0x00079e1e) cam6_indi_pane_t1

0x7059,	// (0x000730f7) cam6_autofocus_pane_g1

0x7061,	// (0x000730ff) cam6_autofocus_pane_g2

0x7069,	// (0x00073107) cam6_autofocus_pane_g3

0x7071,	// (0x0007310f) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0007bc18) cam6_autofocus_pane_g

0xdda6,	// (0x00079e44) cam6_timer_pane_g1

0xddae,	// (0x00079e4c) cam6_timer_pane_t1

0xddbc,	// (0x00079e5a) cam6_zoom_cont_pane

0xddc4,	// (0x00079e62) cam6_zoom_pane_g1

0xddcc,	// (0x00079e6a) cam6_zoom_pane_g2

0x7079,	// (0x00073117) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0007bc21) cam6_zoom_pane_g

0xcc64,	// (0x00078d02) cam6_battery_pane_g1

0xcc64,	// (0x00078d02) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0007b78d) cam6_battery_pane_g

0xddd4,	// (0x00079e72) cam6_zoom_cont_pane_g1

0xdddd,	// (0x00079e7b) cam6_zoom_cont_pane_g2

0xdde6,	// (0x00079e84) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0007bc28) cam6_zoom_cont_pane_g

0x7096,	// (0x00073134) cam6_mode_pane_cp_ParamLimits

0x7096,	// (0x00073134) cam6_mode_pane_cp

0x70a8,	// (0x00073146) cam6_zoom_pane_cp_ParamLimits

0x70a8,	// (0x00073146) cam6_zoom_pane_cp

0x70b4,	// (0x00073152) vid6_image_uncrop_cif_pane_ParamLimits

0x70b4,	// (0x00073152) vid6_image_uncrop_cif_pane

0x70c4,	// (0x00073162) vid6_image_uncrop_nhd_pane_ParamLimits

0x70c4,	// (0x00073162) vid6_image_uncrop_nhd_pane

0x70d3,	// (0x00073171) vid6_image_uncrop_vga_pane_ParamLimits

0x70d3,	// (0x00073171) vid6_image_uncrop_vga_pane

0x70e2,	// (0x00073180) vid6_image_uncrop_wvga_pane_ParamLimits

0x70e2,	// (0x00073180) vid6_image_uncrop_wvga_pane

0x70f1,	// (0x0007318f) vid6_indi_pane_ParamLimits

0x70f1,	// (0x0007318f) vid6_indi_pane

0xdd26,	// (0x00079dc4) bg_tb_trans_pane_cp09_ParamLimits

0xdd26,	// (0x00079dc4) bg_tb_trans_pane_cp09

0xddfe,	// (0x00079e9c) cam6_battery_pane_cp_ParamLimits

0xddfe,	// (0x00079e9c) cam6_battery_pane_cp

0xde0a,	// (0x00079ea8) vid6_indi_pane_g1_ParamLimits

0xde0a,	// (0x00079ea8) vid6_indi_pane_g1

0xde1c,	// (0x00079eba) vid6_indi_pane_g2_ParamLimits

0xde1c,	// (0x00079eba) vid6_indi_pane_g2

0xde2e,	// (0x00079ecc) vid6_indi_pane_g3_ParamLimits

0xde2e,	// (0x00079ecc) vid6_indi_pane_g3

0xde43,	// (0x00079ee1) vid6_indi_pane_g4_ParamLimits

0xde43,	// (0x00079ee1) vid6_indi_pane_g4

0xde58,	// (0x00079ef6) vid6_indi_pane_g5_ParamLimits

0xde58,	// (0x00079ef6) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0007bc2f) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0007bc2f) vid6_indi_pane_g

0xde72,	// (0x00079f10) vid6_indi_pane_t1_ParamLimits

0xde72,	// (0x00079f10) vid6_indi_pane_t1

0xde88,	// (0x00079f26) vid6_indi_pane_t2_ParamLimits

0xde88,	// (0x00079f26) vid6_indi_pane_t2

0xdeb0,	// (0x00079f4e) vid6_indi_pane_t3_ParamLimits

0xdeb0,	// (0x00079f4e) vid6_indi_pane_t3

0xded8,	// (0x00079f76) vid6_indi_pane_t4_ParamLimits

0xded8,	// (0x00079f76) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0007bc3a) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0007bc3a) vid6_indi_pane_t

0xdefc,	// (0x00079f9a) wait_bar_pane_cp08

0x7109,	// (0x000731a7) main_cset_text2_pane_t1_ParamLimits

0x7109,	// (0x000731a7) main_cset_text2_pane_t1

0x7081,	// (0x0007311f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7081,	// (0x0007311f) listscroll_gen_pane_cp06_t1

0x93ab,	// (0x00075449) main_cam6_set_pane

0x9ce4,	// (0x00075d82) bg_tb_trans_pane_cp06_ParamLimits

0x9cfa,	// (0x00075d98) cam4_indicators_pane_g1_ParamLimits

0x9d0b,	// (0x00075da9) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0007b9a8) cam4_indicators_pane_g_ParamLimits

0x9d23,	// (0x00075dc1) cam4_indicators_pane_t1_ParamLimits

0x939d,	// (0x0007543b) bg_tb_trans_pane_cp07_ParamLimits

0x9d4d,	// (0x00075deb) vid4_indicators_pane_g1_ParamLimits

0x9d61,	// (0x00075dff) vid4_indicators_pane_g2_ParamLimits

0x9d75,	// (0x00075e13) vid4_indicators_pane_g3_ParamLimits

0x9d86,	// (0x00075e24) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0007b9ba) vid4_indicators_pane_g_ParamLimits

0x9da2,	// (0x00075e40) vid4_indicators_pane_t1_ParamLimits

0x9e52,	// (0x00075ef0) vid4_progress_pane_g1_ParamLimits

0x9e62,	// (0x00075f00) vid4_progress_pane_g2_ParamLimits

0x6bb8,	// (0x00072c56) vid4_progress_pane_g3_ParamLimits

0x9e72,	// (0x00075f10) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0007bb6b) vid4_progress_pane_g_ParamLimits

0x6bca,	// (0x00072c68) vid4_progress_pane_t1_ParamLimits

0x9e8a,	// (0x00075f28) vid4_progress_pane_t2_ParamLimits

0x9e9f,	// (0x00075f3d) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0007bb76) vid4_progress_pane_t_ParamLimits

0x6be0,	// (0x00072c7e) wait_bar_pane_cp07_ParamLimits

0x7127,	// (0x000731c5) main_cam6_set_pane_g2_ParamLimits

0x7127,	// (0x000731c5) main_cam6_set_pane_g2

0x714b,	// (0x000731e9) main_cset6_listscroll_pane_ParamLimits

0x714b,	// (0x000731e9) main_cset6_listscroll_pane

0x7167,	// (0x00073205) main_cset6_slider_pane_ParamLimits

0x7167,	// (0x00073205) main_cset6_slider_pane

0x717d,	// (0x0007321b) main_cset6_text2_pane_ParamLimits

0x717d,	// (0x0007321b) main_cset6_text2_pane

0xdf0b,	// (0x00079fa9) main_cset6_text_pane

0xdf13,	// (0x00079fb1) main_cset_list_pane_copy1_ParamLimits

0xdf13,	// (0x00079fb1) main_cset_list_pane_copy1

0xdf23,	// (0x00079fc1) scroll_pane_cp028_copy1

0x718b,	// (0x00073229) cset_list_set_pane_copy1

0x719d,	// (0x0007323b) aid_position_infowindow_above_copy1

0x71a5,	// (0x00073243) aid_position_infowindow_below_copy1

0x71ad,	// (0x0007324b) cset_list_set_pane_g1_copy1

0x71b5,	// (0x00073253) cset_list_set_pane_g3_copy1_ParamLimits

0x71b5,	// (0x00073253) cset_list_set_pane_g3_copy1

0x71c4,	// (0x00073262) cset_list_set_pane_t1_copy1_ParamLimits

0x71c4,	// (0x00073262) cset_list_set_pane_t1_copy1

0xa4dd,	// (0x0007657b) list_highlight_pane_cp021_copy1_ParamLimits

0xa4dd,	// (0x0007657b) list_highlight_pane_cp021_copy1

0xdf2c,	// (0x00079fca) cset6_slider_pane_ParamLimits

0xdf2c,	// (0x00079fca) cset6_slider_pane

0xdf58,	// (0x00079ff6) main_cset6_slider_pane_g1_ParamLimits

0xdf58,	// (0x00079ff6) main_cset6_slider_pane_g1

0x71d9,	// (0x00073277) main_cset6_slider_pane_g2_ParamLimits

0x71d9,	// (0x00073277) main_cset6_slider_pane_g2

0xdf80,	// (0x0007a01e) main_cset6_slider_pane_g3_ParamLimits

0xdf80,	// (0x0007a01e) main_cset6_slider_pane_g3

0x7201,	// (0x0007329f) main_cset6_slider_pane_g4_ParamLimits

0x7201,	// (0x0007329f) main_cset6_slider_pane_g4

0xdf8c,	// (0x0007a02a) main_cset6_slider_pane_g5_ParamLimits

0xdf8c,	// (0x0007a02a) main_cset6_slider_pane_g5

0xd800,	// (0x0007989e) main_cset6_slider_pane_g7_ParamLimits

0xd800,	// (0x0007989e) main_cset6_slider_pane_g7

0xd80c,	// (0x000798aa) main_cset6_slider_pane_g8_ParamLimits

0xd80c,	// (0x000798aa) main_cset6_slider_pane_g8

0x6189,	// (0x00072227) main_cset6_slider_pane_g9_ParamLimits

0x6189,	// (0x00072227) main_cset6_slider_pane_g9

0x6195,	// (0x00072233) main_cset6_slider_pane_g10_ParamLimits

0x6195,	// (0x00072233) main_cset6_slider_pane_g10

0x61a1,	// (0x0007223f) main_cset6_slider_pane_g11_ParamLimits

0x61a1,	// (0x0007223f) main_cset6_slider_pane_g11

0x61ad,	// (0x0007224b) main_cset6_slider_pane_g12_ParamLimits

0x61ad,	// (0x0007224b) main_cset6_slider_pane_g12

0x61b9,	// (0x00072257) main_cset6_slider_pane_g13_ParamLimits

0x61b9,	// (0x00072257) main_cset6_slider_pane_g13

0x61c5,	// (0x00072263) main_cset6_slider_pane_g14_ParamLimits

0x61c5,	// (0x00072263) main_cset6_slider_pane_g14

0x720d,	// (0x000732ab) main_cset6_slider_pane_g15_ParamLimits

0x720d,	// (0x000732ab) main_cset6_slider_pane_g15

0xd818,	// (0x000798b6) main_cset6_slider_pane_g16_ParamLimits

0xd818,	// (0x000798b6) main_cset6_slider_pane_g16

0xd824,	// (0x000798c2) main_cset6_slider_pane_g17_ParamLimits

0xd824,	// (0x000798c2) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0007bc43) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0007bc43) main_cset6_slider_pane_g

0xdf98,	// (0x0007a036) main_cset6_slider_pane_t1_ParamLimits

0xdf98,	// (0x0007a036) main_cset6_slider_pane_t1

0x723d,	// (0x000732db) main_cset6_slider_pane_t2_ParamLimits

0x723d,	// (0x000732db) main_cset6_slider_pane_t2

0x7268,	// (0x00073306) main_cset6_slider_pane_t3_ParamLimits

0x7268,	// (0x00073306) main_cset6_slider_pane_t3

0x7293,	// (0x00073331) main_cset6_slider_pane_t4_ParamLimits

0x7293,	// (0x00073331) main_cset6_slider_pane_t4

0x72be,	// (0x0007335c) main_cset6_slider_pane_t5_ParamLimits

0x72be,	// (0x0007335c) main_cset6_slider_pane_t5

0xdfd9,	// (0x0007a077) main_cset6_slider_pane_t7_ParamLimits

0xdfd9,	// (0x0007a077) main_cset6_slider_pane_t7

0x72e9,	// (0x00073387) main_cset6_slider_pane_t8_ParamLimits

0x72e9,	// (0x00073387) main_cset6_slider_pane_t8

0x730d,	// (0x000733ab) main_cset6_slider_pane_t9_ParamLimits

0x730d,	// (0x000733ab) main_cset6_slider_pane_t9

0x7331,	// (0x000733cf) main_cset6_slider_pane_t10_ParamLimits

0x7331,	// (0x000733cf) main_cset6_slider_pane_t10

0x7355,	// (0x000733f3) main_cset6_slider_pane_t11_ParamLimits

0x7355,	// (0x000733f3) main_cset6_slider_pane_t11

0xe00f,	// (0x0007a0ad) main_cset6_slider_pane_t14_ParamLimits

0xe00f,	// (0x0007a0ad) main_cset6_slider_pane_t14

0xe048,	// (0x0007a0e6) main_cset6_slider_pane_t15_ParamLimits

0xe048,	// (0x0007a0e6) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0007bc68) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0007bc68) main_cset6_slider_pane_t

0xd434,	// (0x000794d2) cset_slider_pane_g1_copy1

0xe081,	// (0x0007a11f) cset_slider_pane_g2_copy1

0xe08a,	// (0x0007a128) cset_slider_pane_g3_copy1

0x9325,	// (0x000753c3) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x0007a131) main_cset_text_pane_g1_copy1

0xd95c,	// (0x000799fa) main_cset_text_pane_t1_copy1

0xd96a,	// (0x00079a08) main_cset_text_pane_t2_copy1

0xd978,	// (0x00079a16) main_cset_text_pane_t3_copy1

0xd986,	// (0x00079a24) main_cset_text_pane_t4_copy1

0xd994,	// (0x00079a32) main_cset_text_pane_t5_copy1

0xe09b,	// (0x0007a139) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x0007a147) main_cset_text_pane_t7_copy1

0x7109,	// (0x000731a7) main_cset_text2_pane_t1_copy1

0x939d,	// (0x0007543b) main_ncimui_pane

0x385f,	// (0x0006f8fd) popup_query_ncimui_window_ParamLimits

0x385f,	// (0x0006f8fd) popup_query_ncimui_window

0xa527,	// (0x000765c5) field_cale_ev2_pane_g4_ParamLimits

0xa527,	// (0x000765c5) field_cale_ev2_pane_g4

0x5436,	// (0x000714d4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5436,	// (0x000714d4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0007b946) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0007b946) cell_video_dialer_keypad_pane_g

0x544e,	// (0x000714ec) cell_video_dialer_keypad_pane_t1

0x9325,	// (0x000753c3) bg_popup_window_pane_cp012

0xb0b6,	// (0x00077154) heading_pane_cp06

0xe0d5,	// (0x0007a173) ncim_query_content_pane

0x9325,	// (0x000753c3) bg_popup_heading_pane_cp01

0xe0dd,	// (0x0007a17b) ncim_heading_pane_t1

0xe0eb,	// (0x0007a189) ncim_indicator_popup_pane

0xe0fd,	// (0x0007a19b) ncim_query_button_pane

0xe111,	// (0x0007a1af) ncim_query_content_pane_t1

0xe123,	// (0x0007a1c1) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0007bcac) ncim_query_content_pane_t

0xe15d,	// (0x0007a1fb) ncim_query_list_pane

0xe16f,	// (0x0007a20d) ncim_query_popup_pane

0xe0eb,	// (0x0007a189) ncim_indicator_popup_pane_ParamLimits

0x7569,	// (0x00073607) ncim_query_content_pane_g1_ParamLimits

0x7569,	// (0x00073607) ncim_query_content_pane_g1

0xe111,	// (0x0007a1af) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x0007a1c1) ncim_query_content_pane_t2_ParamLimits

0x7575,	// (0x00073613) ncim_query_content_pane_t3_ParamLimits

0x7575,	// (0x00073613) ncim_query_content_pane_t3

0x759d,	// (0x0007363b) ncim_query_content_pane_t4_ParamLimits

0x759d,	// (0x0007363b) ncim_query_content_pane_t4

0x75c5,	// (0x00073663) ncim_query_content_pane_t5_ParamLimits

0x75c5,	// (0x00073663) ncim_query_content_pane_t5

0xe135,	// (0x0007a1d3) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x0007a1d3) ncim_query_content_pane_t6

0xfc0e,	// (0x0007bcac) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x0007a1fb) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x0007a20d) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x0007a221) wait_bar_pane_cp04

0x9325,	// (0x000753c3) input_focus_pane_cp011

0xe18b,	// (0x0007a229) ncim_query_popup_pane_t1

0xe199,	// (0x0007a237) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x0007a237) ncim_list_query_list_pane

0x9325,	// (0x000753c3) bg_button_pane_cp027

0xe1a6,	// (0x0007a244) ncim_query_button_pane_g1

0x9325,	// (0x000753c3) list_highlight_pane_cp012

0xe1b0,	// (0x0007a24e) ncim_list_query_list_pane_g1

0xe1b8,	// (0x0007a256) ncim_list_query_list_pane_t1

0x9d17,	// (0x00075db5) cam4_indicators_pane_g3_ParamLimits

0x9d17,	// (0x00075db5) cam4_indicators_pane_g3

0x9d92,	// (0x00075e30) vid4_indicators_pane_g5_ParamLimits

0x9d92,	// (0x00075e30) vid4_indicators_pane_g5

0x9e7e,	// (0x00075f1c) vid4_progress_pane_g5_ParamLimits

0x9e7e,	// (0x00075f1c) vid4_progress_pane_g5

0x7457,	// (0x000734f5) main_ncimui_pane_g1

0x74bd,	// (0x0007355b) ncimui_group_query_pane_ParamLimits

0x74bd,	// (0x0007355b) ncimui_group_query_pane

0x7505,	// (0x000735a3) ncimui_list_pane_ParamLimits

0x7505,	// (0x000735a3) ncimui_list_pane

0x752c,	// (0x000735ca) ncimui_text_pane_ParamLimits

0x752c,	// (0x000735ca) ncimui_text_pane

0x75ed,	// (0x0007368b) ncimui_text_pane_t1_ParamLimits

0x75ed,	// (0x0007368b) ncimui_text_pane_t1

0xe1c6,	// (0x0007a264) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x0007a264) ncimui_list_single_graphic_pane

0x760b,	// (0x000736a9) ncimui_query_pane_ParamLimits

0x760b,	// (0x000736a9) ncimui_query_pane

0x9325,	// (0x000753c3) list_highlight_pane_cp013

0xe1d6,	// (0x0007a274) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x0007a282) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x0007a28a) ncim_query_button_pane_cp01

0xe1f8,	// (0x0007a296) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x0007a296) ncim_query_entry_pane

0xe20b,	// (0x0007a2a9) ncimui_query_pane_g1

0xe217,	// (0x0007a2b5) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x0007a2b5) ncimui_query_pane_t1

0xa4dd,	// (0x0007657b) input_focus_pane_cp012

0xe230,	// (0x0007a2ce) ncim_query_entry_pane_t1

0xa21e,	// (0x000762bc) main_im_pane_ParamLimits

0x939d,	// (0x0007543b) main_mobtv_pane_ParamLimits

0x939d,	// (0x0007543b) main_mobtv_pane

0x7225,	// (0x000732c3) main_cset6_slider_pane_g18_ParamLimits

0x7225,	// (0x000732c3) main_cset6_slider_pane_g18

0x7231,	// (0x000732cf) main_cset6_slider_pane_g19_ParamLimits

0x7231,	// (0x000732cf) main_cset6_slider_pane_g19

0x761e,	// (0x000736bc) bg_main_mobtv_pane_ParamLimits

0x761e,	// (0x000736bc) bg_main_mobtv_pane

0x762c,	// (0x000736ca) main_mobtv_info_pane

0x7635,	// (0x000736d3) main_mobtv_loading_pane_ParamLimits

0x7635,	// (0x000736d3) main_mobtv_loading_pane

0xe242,	// (0x0007a2e0) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x0007a2ea) main_mobtv_pg_hdr_pane

0x7642,	// (0x000736e0) main_mobtv_programe_curr_pane_ParamLimits

0x7642,	// (0x000736e0) main_mobtv_programe_curr_pane

0x764f,	// (0x000736ed) main_mobtv_programe_next_pane_ParamLimits

0x764f,	// (0x000736ed) main_mobtv_programe_next_pane

0xe255,	// (0x0007a2f3) popup_mobtv_noti_window

0xcc64,	// (0x00078d02) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x0007a2fb) main_tv_pg_hdr_pane_g2

0xe265,	// (0x0007a303) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x0007a30b) main_tv_pg_hdr_pane_g4

0xe275,	// (0x0007a313) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x0007a31d) main_tv_pg_hdr_pane_g6

0xe289,	// (0x0007a327) main_tv_pg_hdr_pane_g7

0xe293,	// (0x0007a331) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x0007a33b) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x0007a345) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x0007a34f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0007bcb9) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x0007a359) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x0007a367) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x0007a375) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x0007a385) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x0007a395) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0007bcd0) main_tv_pg_hdr_pane_t

0xe307,	// (0x0007a3a5) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x0007a3a5) single_mobtv_pg_channel_pane

0xe319,	// (0x0007a3b7) single_mobtv_pg_channel_table_pane

0xad20,	// (0x00076dbe) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x0007a3c0) single_tv_pg_channel_pane_g1

0xe32b,	// (0x0007a3c9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0007bcdb) single_tv_pg_channel_pane_g

0xceb2,	// (0x00078f50) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb2,	// (0x00078f50) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x0007a3d2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x0007a3d2) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x0007a3e0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x0007a3e0) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x0007a3ec) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x0007a3ec) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0007bce0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0007bce0) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x0007a3f8) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x0007a406) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0007bce7) single_mobtv_pg_channel_thumb_pane_t

0xcc64,	// (0x00078d02) bg_single_mobtv_pg_channel_table_pane_g1

0xcc64,	// (0x00078d02) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0007b78d) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x0007a414) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x0007a422) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0007bcec) single_mobtv_pg_channel_table_pane_t

0x7664,	// (0x00073702) main_mobtv_info_pane_g1_ParamLimits

0x7664,	// (0x00073702) main_mobtv_info_pane_g1

0x7682,	// (0x00073720) main_mobtv_info_pane_t1_ParamLimits

0x7682,	// (0x00073720) main_mobtv_info_pane_t1

0x76fa,	// (0x00073798) main_mobtv_info_pane_t2_ParamLimits

0x76fa,	// (0x00073798) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0007bcf6) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0007bcf6) main_mobtv_info_pane_t

0x7789,	// (0x00073827) wait_bar_pane_cp05

0x779b,	// (0x00073839) main_mobtv_loading_pane_g1_ParamLimits

0x779b,	// (0x00073839) main_mobtv_loading_pane_g1

0x77ae,	// (0x0007384c) main_mobtv_loading_pane_g2_ParamLimits

0x77ae,	// (0x0007384c) main_mobtv_loading_pane_g2

0x77ba,	// (0x00073858) main_mobtv_loading_pane_g3_ParamLimits

0x77ba,	// (0x00073858) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0007bcfd) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0007bcfd) main_mobtv_loading_pane_g

0xe392,	// (0x0007a430) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x0007a430) main_mobtv_loading_pane_t1

0xe3aa,	// (0x0007a448) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x0007a448) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0007bd04) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0007bd04) main_mobtv_loading_pane_t

0x77cd,	// (0x0007386b) wait_bar_pane_cp06_ParamLimits

0x77cd,	// (0x0007386b) wait_bar_pane_cp06

0xe3ce,	// (0x0007a46c) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x0007a47a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0007bd09) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x0007a488) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x0007a496) main_mobtv_programe_next_pane_t2

0xe406,	// (0x0007a4a4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0007bd0e) main_mobtv_programe_next_pane_t

0x9325,	// (0x000753c3) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x0007a4b2) popup_mobtv_noti_window_g1

0xe41c,	// (0x0007a4ba) popup_mobtv_noti_window_t1

0xe42a,	// (0x0007a4c8) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0007bd15) popup_mobtv_noti_window_t

0xcc64,	// (0x00078d02) bg_popup_mobtv_noti_window_pane_g1

0x93ab,	// (0x00075449) sc_clock_pane

0x93ab,	// (0x00075449) main_fs_bigclock_pane

0x6e3b,	// (0x00072ed9) blid2_tripm_pane_t4_ParamLimits

0x6e3b,	// (0x00072ed9) blid2_tripm_pane_t4

0x77dc,	// (0x0007387a) sc_clock_pane_g1_ParamLimits

0x77dc,	// (0x0007387a) sc_clock_pane_g1

0x77ee,	// (0x0007388c) sc_clock_pane_t1_ParamLimits

0x77ee,	// (0x0007388c) sc_clock_pane_t1

0x7810,	// (0x000738ae) sc_clock_pane_t2_ParamLimits

0x7810,	// (0x000738ae) sc_clock_pane_t2

0x7828,	// (0x000738c6) sc_clock_pane_t3_ParamLimits

0x7828,	// (0x000738c6) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0007bd1a) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0007bd1a) sc_clock_pane_t

0x87fd,	// (0x0007489b) main_fs_bigclock_indicator_pane_ParamLimits

0x87fd,	// (0x0007489b) main_fs_bigclock_indicator_pane

0x78c8,	// (0x00073966) main_fs_bigclock_pane_g1_ParamLimits

0x78c8,	// (0x00073966) main_fs_bigclock_pane_g1

0x8809,	// (0x000748a7) main_fs_bigclock_pane_t1_ParamLimits

0x8809,	// (0x000748a7) main_fs_bigclock_pane_t1

0x881b,	// (0x000748b9) main_fs_bigclock_pane_t2_ParamLimits

0x881b,	// (0x000748b9) main_fs_bigclock_pane_t2

0x882f,	// (0x000748cd) main_fs_bigclock_pane_t3_ParamLimits

0x882f,	// (0x000748cd) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0007bf24) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0007bf24) main_fs_bigclock_pane_t

0xec94,	// (0x0007ad32) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x0007a1a3) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x0007a1a3) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0007bca7) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0007bca7) ncim_query_content_pane_g

0x7841,	// (0x000738df) sc_clock_pane_t4_ParamLimits

0x7841,	// (0x000738df) sc_clock_pane_t4

0x939d,	// (0x0007543b) main_radioblah_pane

0xd600,	// (0x0007969e) cell_call4_button_pane_t1_copy1_ParamLimits

0xd600,	// (0x0007969e) cell_call4_button_pane_t1_copy1

0x746f,	// (0x0007350d) main_ncimui_pane_t1_ParamLimits

0x746f,	// (0x0007350d) main_ncimui_pane_t1

0x7489,	// (0x00073527) main_ncimui_pane_t2_ParamLimits

0x7489,	// (0x00073527) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0007bca0) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0007bca0) main_ncimui_pane_t

0xe56f,	// (0x0007a60d) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x0007a60d) main_radioblah_anim_pane

0xe580,	// (0x0007a61e) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x0007a61e) main_radioblah_info_pane

0xe594,	// (0x0007a632) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x0007a632) main_radioblah_pane_t1

0xe5b0,	// (0x0007a64e) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x0007a64e) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0007bd3b) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0007bd3b) main_radioblah_pane_t

0x7920,	// (0x000739be) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7920,	// (0x000739be) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x0007a696) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x0007a696) main_radioblah_info_pane_t1

0x7978,	// (0x00073a16) main_radioblah_info_pane_t2_ParamLimits

0x7978,	// (0x00073a16) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0007bd44) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0007bd44) main_radioblah_info_pane_t

0xcc64,	// (0x00078d02) main_radioblah_rocker_ctrl_pane_g1

0x7a28,	// (0x00073ac6) main_radioblah_rocker_ctrl_pane_g2

0x7a30,	// (0x00073ace) main_radioblah_rocker_ctrl_pane_g3

0x7a38,	// (0x00073ad6) main_radioblah_rocker_ctrl_pane_g4

0x7a40,	// (0x00073ade) main_radioblah_rocker_ctrl_pane_g5

0x7a48,	// (0x00073ae6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0007bd4d) main_radioblah_rocker_ctrl_pane_g

0x7109,	// (0x000731a7) main_cset_text2_pane_t1_copy1_ParamLimits

0x9cdc,	// (0x00075d7a) cam4_image_uncrop_qvga_pane

0x9d3d,	// (0x00075ddb) vid4_image_uncrop_qcif_pane

0x9eb5,	// (0x00075f53) cam6_image_uncrop_qvga_pane_ParamLimits

0x9eb5,	// (0x00075f53) cam6_image_uncrop_qvga_pane

0xddee,	// (0x00079e8c) vid6_image_uncrop_qcif_pane_ParamLimits

0xddee,	// (0x00079e8c) vid6_image_uncrop_qcif_pane

0x9325,	// (0x000753c3) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x0007a155) list_cset_text2_pane

0xe0bf,	// (0x0007a15d) main_cset6_text2_pane_g1

0xe0c7,	// (0x0007a165) main_cset6_text2_pane_t1

0xe632,	// (0x0007a6d0) list_cset_text2_pane_t1_ParamLimits

0xe632,	// (0x0007a6d0) list_cset_text2_pane_t1

0x939d,	// (0x0007543b) main_radioblah_pane_ParamLimits

0x7775,	// (0x00073813) main_mobtv_info_pane_t3_ParamLimits

0x7775,	// (0x00073813) main_mobtv_info_pane_t3

0x790e,	// (0x000739ac) main_radioblah_pane_g1

0x7948,	// (0x000739e6) main_radioblah_info_pane_g1

0x79cd,	// (0x00073a6b) main_radioblah_info_pane_t3_ParamLimits

0x79cd,	// (0x00073a6b) main_radioblah_info_pane_t3

0x22ca,	// (0x0006e368) highlight_cell_cale_month_pane_ParamLimits

0x22ca,	// (0x0006e368) highlight_cell_cale_month_pane

0x93ab,	// (0x00075449) main_phob_fisheye_pane

0xcf8e,	// (0x0007902c) scroll_pane_cp0031_ParamLimits

0xcf8e,	// (0x0007902c) scroll_pane_cp0031

0xdefc,	// (0x00079f9a) wait_bar_pane_cp08_ParamLimits

0x718b,	// (0x00073229) cset_list_set_pane_copy1_ParamLimits

0xe64d,	// (0x0007a6eb) highlight_cell_cale_month_pane_g1

0x7a50,	// (0x00073aee) highlight_cell_cale_month_pane_t1

0xdb88,	// (0x00079c26) list_gen_pane_cp01

0xd7eb,	// (0x00079889) scroll_pane_01

0x7a5e,	// (0x00073afc) list_single_double_fisheye_pane

0x7a67,	// (0x00073b05) list_double_fisheye_pane_g1_ParamLimits

0x7a67,	// (0x00073b05) list_double_fisheye_pane_g1

0x7a73,	// (0x00073b11) list_double_fisheye_pane_g2_ParamLimits

0x7a73,	// (0x00073b11) list_double_fisheye_pane_g2

0x7a87,	// (0x00073b25) list_double_fisheye_pane_g3_ParamLimits

0x7a87,	// (0x00073b25) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0007bd5a) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0007bd5a) list_double_fisheye_pane_g

0x7ab0,	// (0x00073b4e) list_double_fisheye_pane_t1_ParamLimits

0x7ab0,	// (0x00073b4e) list_double_fisheye_pane_t1

0x7acb,	// (0x00073b69) list_double_fisheye_pane_t2_ParamLimits

0x7acb,	// (0x00073b69) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0007bd65) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0007bd65) list_double_fisheye_pane_t

0x93ab,	// (0x00075449) main_call5_pane

0x786c,	// (0x0007390a) sc_swipe_pane_ParamLimits

0x786c,	// (0x0007390a) sc_swipe_pane

0x7b00,	// (0x00073b9e) call5_image_pane_ParamLimits

0x7b00,	// (0x00073b9e) call5_image_pane

0x7b1d,	// (0x00073bbb) call5_swipe_1_pane_ParamLimits

0x7b1d,	// (0x00073bbb) call5_swipe_1_pane

0x7b30,	// (0x00073bce) call5_swipe_2_pane_ParamLimits

0x7b30,	// (0x00073bce) call5_swipe_2_pane

0x7b5b,	// (0x00073bf9) popup_call5_audio_first_window_ParamLimits

0x7b5b,	// (0x00073bf9) popup_call5_audio_first_window

0xceb2,	// (0x00078f50) call5_swipe_1_pane_g1_ParamLimits

0xceb2,	// (0x00078f50) call5_swipe_1_pane_g1

0xe655,	// (0x0007a6f3) call5_swipe_1_pane_g2_ParamLimits

0xe655,	// (0x0007a6f3) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0007bd6a) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0007bd6a) call5_swipe_1_pane_g

0xe661,	// (0x0007a6ff) call5_swipe_1_pane_t1_ParamLimits

0xe661,	// (0x0007a6ff) call5_swipe_1_pane_t1

0xceb2,	// (0x00078f50) call5_swipe_2_pane_g1_ParamLimits

0xceb2,	// (0x00078f50) call5_swipe_2_pane_g1

0xe676,	// (0x0007a714) call5_swipe_2_pane_g2_ParamLimits

0xe676,	// (0x0007a714) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0007bd6f) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0007bd6f) call5_swipe_2_pane_g

0xe682,	// (0x0007a720) call5_swipe_2_pane_t1_ParamLimits

0xe682,	// (0x0007a720) call5_swipe_2_pane_t1

0xe697,	// (0x0007a735) sc_swipe_pane_g1_ParamLimits

0xe697,	// (0x0007a735) sc_swipe_pane_g1

0xe6a4,	// (0x0007a742) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x0007a742) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0007bd74) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0007bd74) sc_swipe_pane_g

0xe6b0,	// (0x0007a74e) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x0007a74e) sc_swipe_pane_t1

0x93ab,	// (0x00075449) main_cmail_launcher_pane

0x7b6c,	// (0x00073c0a) aid_size_cell_cmail_l_ParamLimits

0x7b6c,	// (0x00073c0a) aid_size_cell_cmail_l

0x7b86,	// (0x00073c24) grid_cmail_l_pane_ParamLimits

0x7b86,	// (0x00073c24) grid_cmail_l_pane

0x7ba0,	// (0x00073c3e) cell_cmail_l_pane_ParamLimits

0x7ba0,	// (0x00073c3e) cell_cmail_l_pane

0x7bc6,	// (0x00073c64) cell_cmail_l_pane_g1_ParamLimits

0x7bc6,	// (0x00073c64) cell_cmail_l_pane_g1

0x7bd7,	// (0x00073c75) cell_cmail_l_pane_t1_ParamLimits

0x7bd7,	// (0x00073c75) cell_cmail_l_pane_t1

0xe6c5,	// (0x0007a763) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x0007a763) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0007bd79) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0007bd79) cell_cmail_l_pane_t

0xa4dd,	// (0x0007657b) grid_highlight_pane_cp018_ParamLimits

0xa4dd,	// (0x0007657b) grid_highlight_pane_cp018

0x0253,	// (0x0006c2f1) main2_pane_ParamLimits

0x0253,	// (0x0006c2f1) main2_pane

0xa2c9,	// (0x00076367) popup_sp_fs_action_menu_bg_pane_g1

0xa2d1,	// (0x0007636f) popup_sp_fs_action_menu_bg_pane_g2

0xa2d9,	// (0x00076377) popup_sp_fs_action_menu_bg_pane_g3

0xa2e1,	// (0x0007637f) popup_sp_fs_action_menu_bg_pane_g4

0xa2e9,	// (0x00076387) popup_sp_fs_action_menu_bg_pane_g5

0xa2f1,	// (0x0007638f) popup_sp_fs_action_menu_bg_pane_g6

0xa2f9,	// (0x00076397) popup_sp_fs_action_menu_bg_pane_g7

0xa301,	// (0x0007639f) popup_sp_fs_action_menu_bg_pane_g8

0xa309,	// (0x000763a7) popup_sp_fs_action_menu_bg_pane_g9

0xa311,	// (0x000763af) popup_sp_fs_action_menu_bg_pane_g10

0xa311,	// (0x000763af) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007b228) popup_sp_fs_action_menu_bg_pane_g

0x1239,	// (0x0006d2d7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t3_g3_g1

0x1245,	// (0x0006d2e3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x2_t3_g3_g2

0x1251,	// (0x0006d2ef) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007b2d6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007b2d6) list_medium_line_x2_t3_g3_g

0x125d,	// (0x0006d2fb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x125d,	// (0x0006d2fb) list_medium_line_x2_t3_g3_t1

0x1272,	// (0x0006d310) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1272,	// (0x0006d310) list_medium_line_x2_t3_g3_t2

0x1286,	// (0x0006d324) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007b2dd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007b2dd) list_medium_line_x2_t3_g3_t

0x1239,	// (0x0006d2d7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t3_g2_g1

0x1251,	// (0x0006d2ef) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007b2e4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007b2e4) list_medium_line_x2_t3_g2_g

0x129b,	// (0x0006d339) list_medium_line_x2_t3_g2_t1_ParamLimits

0x129b,	// (0x0006d339) list_medium_line_x2_t3_g2_t1

0x12b1,	// (0x0006d34f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12b1,	// (0x0006d34f) list_medium_line_x2_t3_g2_t2

0x12c3,	// (0x0006d361) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12c3,	// (0x0006d361) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007b2e9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007b2e9) list_medium_line_x2_t3_g2_t

0x1239,	// (0x0006d2d7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t4_g4_g1

0x12e1,	// (0x0006d37f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12e1,	// (0x0006d37f) list_medium_line_x2_t4_g4_g2

0x1245,	// (0x0006d2e3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x2_t4_g4_g3

0x12ed,	// (0x0006d38b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12ed,	// (0x0006d38b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007b2f0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007b2f0) list_medium_line_x2_t4_g4_g

0x12f9,	// (0x0006d397) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12f9,	// (0x0006d397) list_medium_line_x2_t4_g4_t1

0x1313,	// (0x0006d3b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1313,	// (0x0006d3b1) list_medium_line_x2_t4_g4_t2

0x1329,	// (0x0006d3c7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1329,	// (0x0006d3c7) list_medium_line_x2_t4_g4_t3

0x133e,	// (0x0006d3dc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x133e,	// (0x0006d3dc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007b2f9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007b2f9) list_medium_line_x2_t4_g4_t

0x1239,	// (0x0006d2d7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t2_g4_g1

0x12e1,	// (0x0006d37f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12e1,	// (0x0006d37f) list_medium_line_x2_t2_g4_g2

0x1245,	// (0x0006d2e3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x2_t2_g4_g3

0x1251,	// (0x0006d2ef) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007b360) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007b360) list_medium_line_x2_t2_g4_g

0x22f0,	// (0x0006e38e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22f0,	// (0x0006e38e) list_medium_line_x2_t2_g4_t1

0x1286,	// (0x0006d324) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007b369) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007b369) list_medium_line_x2_t2_g4_t

0x1239,	// (0x0006d2d7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t2_g3_g1

0x1245,	// (0x0006d2e3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x2_t2_g3_g2

0x1251,	// (0x0006d2ef) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007b2d6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007b2d6) list_medium_line_x2_t2_g3_g

0x2305,	// (0x0006e3a3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2305,	// (0x0006e3a3) list_medium_line_x2_t2_g3_t1

0x1286,	// (0x0006d324) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007b36e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007b36e) list_medium_line_x2_t2_g3_t

0x2459,	// (0x0006e4f7) main_sp_fs_list_pane_ParamLimits

0x2459,	// (0x0006e4f7) main_sp_fs_list_pane

0xcc03,	// (0x00078ca1) sp_fs_scroll_pane_ParamLimits

0xcc03,	// (0x00078ca1) sp_fs_scroll_pane

0x2465,	// (0x0006e503) list_medium_line_x2_t3_t1

0x2475,	// (0x0006e513) list_medium_line_x2_t3_t2

0x2483,	// (0x0006e521) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007b3b9) list_medium_line_x2_t3_t

0x2491,	// (0x0006e52f) list_medium_line_x3_t4_t1

0x24a1,	// (0x0006e53f) list_medium_line_x3_t4_t2

0x24af,	// (0x0006e54d) list_medium_line_x3_t4_t3

0x2483,	// (0x0006e521) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007b3c0) list_medium_line_x3_t4_t

0x24bd,	// (0x0006e55b) list_medium_line_x4_t5_t1

0x24cd,	// (0x0006e56b) list_medium_line_x4_t5_t2

0x24af,	// (0x0006e54d) list_medium_line_x4_t5_t3

0x24db,	// (0x0006e579) list_medium_line_x4_t5_t4

0x2483,	// (0x0006e521) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007b3c9) list_medium_line_x4_t5_t

0x1239,	// (0x0006d2d7) list_medium_line_t4_g4_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_t4_g4_g1

0x12ed,	// (0x0006d38b) list_medium_line_t4_g4_g2_ParamLimits

0x12ed,	// (0x0006d38b) list_medium_line_t4_g4_g2

0x24e9,	// (0x0006e587) list_medium_line_t4_g4_g3_ParamLimits

0x24e9,	// (0x0006e587) list_medium_line_t4_g4_g3

0x1251,	// (0x0006d2ef) list_medium_line_t4_g4_g4_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007b3d4) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007b3d4) list_medium_line_t4_g4_g

0x24f5,	// (0x0006e593) list_medium_line_t4_g4_t1_ParamLimits

0x24f5,	// (0x0006e593) list_medium_line_t4_g4_t1

0x250a,	// (0x0006e5a8) list_medium_line_t4_g4_t2_ParamLimits

0x250a,	// (0x0006e5a8) list_medium_line_t4_g4_t2

0x2520,	// (0x0006e5be) list_medium_line_t4_g4_t3_ParamLimits

0x2520,	// (0x0006e5be) list_medium_line_t4_g4_t3

0x1286,	// (0x0006d324) list_medium_line_t4_g4_t4_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007b3dd) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007b3dd) list_medium_line_t4_g4_t

0x25f9,	// (0x0006e697) chi_dic_find_pane_g1

0x362f,	// (0x0006f6cd) main_tport_pane

0x64a7,	// (0x00072545) list_medium_line_plain_t1

0x654f,	// (0x000725ed) list_medium_line_t2_g2_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_t2_g2_g1

0x655b,	// (0x000725f9) list_medium_line_t2_g2_g2_ParamLimits

0x655b,	// (0x000725f9) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0007bab1) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0007bab1) list_medium_line_t2_g2_g

0x6567,	// (0x00072605) list_medium_line_t2_g2_t1_ParamLimits

0x6567,	// (0x00072605) list_medium_line_t2_g2_t1

0x6581,	// (0x0007261f) list_medium_line_t2_g2_t2_ParamLimits

0x6581,	// (0x0007261f) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0007bab6) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0007bab6) list_medium_line_t2_g2_t

0xa618,	// (0x000766b6) aid_sp_fs_list_icon_a_sm

0xa620,	// (0x000766be) aid_sp_fs_list_icon_d

0xa628,	// (0x000766c6) aid_sp_fs_text_primary

0xdb91,	// (0x00079c2f) aid_sp_fs_text_secondary

0x6bf1,	// (0x00072c8f) list_medium_line

0x6bf1,	// (0x00072c8f) list_medium_line_g2

0x6bf1,	// (0x00072c8f) list_medium_line_g3

0x6bf1,	// (0x00072c8f) list_medium_line_plain

0x6bf1,	// (0x00072c8f) list_medium_line_plain_t2

0x6bf1,	// (0x00072c8f) list_medium_line_plain_t3

0x6bf1,	// (0x00072c8f) list_medium_line_right_icon

0x6bf1,	// (0x00072c8f) list_medium_line_right_iconx2

0x6bf1,	// (0x00072c8f) list_medium_line_t2

0x6bf1,	// (0x00072c8f) list_medium_line_t2_g2

0x6bf1,	// (0x00072c8f) list_medium_line_t2_g3

0x6bf1,	// (0x00072c8f) list_medium_line_t2_right_icon

0x6bf1,	// (0x00072c8f) list_medium_line_t2_right_iconx2

0x6bf1,	// (0x00072c8f) list_medium_line_t3

0x6bf1,	// (0x00072c8f) list_medium_line_t3_g2

0x6bf1,	// (0x00072c8f) list_medium_line_t3_g3

0x6bf1,	// (0x00072c8f) list_medium_line_t3_right_iconx2

0x6bfa,	// (0x00072c98) list_medium_line_t4_g4

0x6bf1,	// (0x00072c8f) list_medium_line_x2

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t2_g2

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t2_g3

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t2_g4

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t3

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t3_g2

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t3_g3

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t3_g4

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t4_g2

0x6bf1,	// (0x00072c8f) list_medium_line_x2_t4_g4

0x6c03,	// (0x00072ca1) list_medium_line_x3

0x6c03,	// (0x00072ca1) list_medium_line_x3_t4

0x6c03,	// (0x00072ca1) list_medium_line_x3_t4_g4

0x6bfa,	// (0x00072c98) list_medium_line_x4_t4

0x6bfa,	// (0x00072c98) list_medium_line_x4_t4_g7

0x6bfa,	// (0x00072c98) list_medium_line_x4_t5

0x6c0c,	// (0x00072caa) list_single_fs_dyc_pane_ParamLimits

0x6c0c,	// (0x00072caa) list_single_fs_dyc_pane

0x1239,	// (0x0006d2d7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x4_t4_g7_g1

0x7379,	// (0x00073417) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7379,	// (0x00073417) list_medium_line_x4_t4_g7_g2

0x7385,	// (0x00073423) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7385,	// (0x00073423) list_medium_line_x4_t4_g7_g3

0x7394,	// (0x00073432) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7394,	// (0x00073432) list_medium_line_x4_t4_g7_g4

0x73a0,	// (0x0007343e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73a0,	// (0x0007343e) list_medium_line_x4_t4_g7_g5

0x73af,	// (0x0007344d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73af,	// (0x0007344d) list_medium_line_x4_t4_g7_g6

0x73be,	// (0x0007345c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73be,	// (0x0007345c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0007bc81) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0007bc81) list_medium_line_x4_t4_g7_g

0x73ca,	// (0x00073468) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73ca,	// (0x00073468) list_medium_line_x4_t4_g7_t1

0x73df,	// (0x0007347d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73df,	// (0x0007347d) list_medium_line_x4_t4_g7_t2

0x73f4,	// (0x00073492) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73f4,	// (0x00073492) list_medium_line_x4_t4_g7_t3

0x7409,	// (0x000734a7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7409,	// (0x000734a7) list_medium_line_x4_t4_g7_t4

0x741b,	// (0x000734b9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x741b,	// (0x000734b9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0007bc90) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0007bc90) list_medium_line_x4_t4_g7_t

0x742d,	// (0x000734cb) list_single_dyc_row_pane_ParamLimits

0x742d,	// (0x000734cb) list_single_dyc_row_pane

0x7aed,	// (0x00073b8b) call5_gesture_pane_ParamLimits

0x7aed,	// (0x00073b8b) call5_gesture_pane

0x7b43,	// (0x00073be1) call5_windows_pane_ParamLimits

0x7b43,	// (0x00073be1) call5_windows_pane

0x7bed,	// (0x00073c8b) call5_swipe_1_pane_cp_ParamLimits

0x7bed,	// (0x00073c8b) call5_swipe_1_pane_cp

0x7bf9,	// (0x00073c97) call5_swipe_2_pane_cp_ParamLimits

0x7bf9,	// (0x00073c97) call5_swipe_2_pane_cp

0xa413,	// (0x000764b1) call5_image_pane_cp

0x7c05,	// (0x00073ca3) popup_call5_audio_first_window_cp_ParamLimits

0x7c05,	// (0x00073ca3) popup_call5_audio_first_window_cp

0xe697,	// (0x0007a735) call5_swipe_1_pane_g1_cp_ParamLimits

0xe697,	// (0x0007a735) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x0007a775) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x0007a74e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x0007a74e) call5_swipe_1_pane_t1_cp

0xe697,	// (0x0007a735) call5_swipe_2_pane_g1_cp_ParamLimits

0xe697,	// (0x0007a735) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0007a77d) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x0007a785) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x0007a785) call5_swipe_2_pane_t1_cp

0xa4dd,	// (0x0007657b) main_sp_fs_email_pane

0xe6fc,	// (0x0007a79a) main_sp_fs_listscroll_pane_te

0xa631,	// (0x000766cf) popup_sp_fs_action_menu_pane_ParamLimits

0xa631,	// (0x000766cf) popup_sp_fs_action_menu_pane

0xcc64,	// (0x00078d02) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x0007a7a3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x0007a7ac) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x0007a7b5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc64,	// (0x00078d02) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0007bd7e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca3d,	// (0x00078adb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca3d,	// (0x00078adb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x0007a7be) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x0007a7be) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x0007a7ca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x0007a7ca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0007bd87) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0007bd87) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x0007a7d6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x0007a7d6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c13,	// (0x00073cb1) list_medium_line_t2_right_icon_g1

0x7c1b,	// (0x00073cb9) list_medium_line_t2_right_icon_t1

0x7c2b,	// (0x00073cc9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0007bd8c) list_medium_line_t2_right_icon_t

0xc850,	// (0x000788ee) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc850,	// (0x000788ee) bg_sp_fs_ctrlbar_pane

0x7c85,	// (0x00073d23) main_sp_fs_ctrlbar_button_pane_cp01

0x7c8f,	// (0x00073d2d) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x0007a828) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x0007a834) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0007bd91) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x0007a840) main_sp_fs_ctrlbar_pane_t1

0x7c99,	// (0x00073d37) main_sp_fs_ctrlbar_pane

0x7cbd,	// (0x00073d5b) main_sp_fs_listscroll_pane_te_cp01

0x7cdd,	// (0x00073d7b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7cdd,	// (0x00073d7b) popup_sp_fs_action_menu_pane_cp01

0xa4dd,	// (0x0007657b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4dd,	// (0x0007657b) bg_sp_fs_highlight_list_pane_cp01

0xa673,	// (0x00076711) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa673,	// (0x00076711) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x0007a870) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x0007a870) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0007bd9b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0007bd9b) sp_fs_action_menu_list_gene_pane_g

0xa682,	// (0x00076720) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa682,	// (0x00076720) sp_fs_action_menu_list_gene_pane_t1

0xa69a,	// (0x00076738) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa69a,	// (0x00076738) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x0007a87d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x0007a87d) popup_sp_fs_action_menu_bg_pane

0xa6b9,	// (0x00076757) sp_fs_action_menu_list_pane_ParamLimits

0xa6b9,	// (0x00076757) sp_fs_action_menu_list_pane

0xa6d9,	// (0x00076777) sp_fs_scroll_pane_cp01_ParamLimits

0xa6d9,	// (0x00076777) sp_fs_scroll_pane_cp01

0x7d0d,	// (0x00073dab) list_medium_line_plain_t2_t1

0x7d1d,	// (0x00073dbb) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0007bda0) list_medium_line_plain_t2_t

0x7d2d,	// (0x00073dcb) list_medium_line_plain_t3_t1

0x7d3d,	// (0x00073ddb) list_medium_line_plain_t3_t2

0x7d4b,	// (0x00073de9) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0007bda5) list_medium_line_plain_t3_t

0x1239,	// (0x0006d2d7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t2_g2_g1

0x1251,	// (0x0006d2ef) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007b2e4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007b2e4) list_medium_line_x2_t2_g2_g

0x24f5,	// (0x0006e593) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24f5,	// (0x0006e593) list_medium_line_x2_t2_g2_t1

0x1286,	// (0x0006d324) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0007bdac) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0007bdac) list_medium_line_x2_t2_g2_t

0x1239,	// (0x0006d2d7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t4_g2_g1

0x7d59,	// (0x00073df7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d59,	// (0x00073df7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0007bdb1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0007bdb1) list_medium_line_x2_t4_g2_g

0x7d6b,	// (0x00073e09) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7d6b,	// (0x00073e09) list_medium_line_x2_t4_g2_t1

0x7d82,	// (0x00073e20) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7d82,	// (0x00073e20) list_medium_line_x2_t4_g2_t2

0x7d97,	// (0x00073e35) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7d97,	// (0x00073e35) list_medium_line_x2_t4_g2_t3

0x1286,	// (0x0006d324) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0007bdb6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0007bdb6) list_medium_line_x2_t4_g2_t

0x7da9,	// (0x00073e47) list_medium_line_t3_right_iconx2_g1

0x7c13,	// (0x00073cb1) list_medium_line_t3_right_iconx2_g2

0x7db1,	// (0x00073e4f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0007bdbf) list_medium_line_t3_right_iconx2_g

0x7dbb,	// (0x00073e59) list_medium_line_t3_right_iconx2_t1

0x7dcb,	// (0x00073e69) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0007bdc6) list_medium_line_t3_right_iconx2_t

0x1239,	// (0x0006d2d7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x3_t4_g4_g1

0x1245,	// (0x0006d2e3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x3_t4_g4_g2

0x12ed,	// (0x0006d38b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x12ed,	// (0x0006d38b) list_medium_line_x3_t4_g4_g3

0x7dd9,	// (0x00073e77) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7dd9,	// (0x00073e77) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0007bdcb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0007bdcb) list_medium_line_x3_t4_g4_g

0x7de5,	// (0x00073e83) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7de5,	// (0x00073e83) list_medium_line_x3_t4_g4_t1

0x7dfc,	// (0x00073e9a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7dfc,	// (0x00073e9a) list_medium_line_x3_t4_g4_t2

0x7e17,	// (0x00073eb5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7e17,	// (0x00073eb5) list_medium_line_x3_t4_g4_t3

0x7e2c,	// (0x00073eca) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e2c,	// (0x00073eca) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0007bdd4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0007bdd4) list_medium_line_x3_t4_g4_t

0x7e49,	// (0x00073ee7) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e49,	// (0x00073ee7) list_single_dyc_row_text_pane_t1

0x7e92,	// (0x00073f30) list_single_dyc_row_text_pane_t2_ParamLimits

0x7e92,	// (0x00073f30) list_single_dyc_row_text_pane_t2

0xa6ff,	// (0x0007679d) list_single_dyc_row_text_pane_t3_ParamLimits

0xa6ff,	// (0x0007679d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0007bddd) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0007bddd) list_single_dyc_row_text_pane_t

0xa723,	// (0x000767c1) list_single_dyc_row_pane_g1_ParamLimits

0xa723,	// (0x000767c1) list_single_dyc_row_pane_g1

0xa72f,	// (0x000767cd) list_single_dyc_row_pane_g2_ParamLimits

0xa72f,	// (0x000767cd) list_single_dyc_row_pane_g2

0xa73b,	// (0x000767d9) list_single_dyc_row_pane_g3_ParamLimits

0xa73b,	// (0x000767d9) list_single_dyc_row_pane_g3

0xa747,	// (0x000767e5) list_single_dyc_row_pane_g4_ParamLimits

0xa747,	// (0x000767e5) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0007bdea) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0007bdea) list_single_dyc_row_pane_g

0xa753,	// (0x000767f1) list_single_dyc_row_text_pane_ParamLimits

0xa753,	// (0x000767f1) list_single_dyc_row_text_pane

0x9325,	// (0x000753c3) bg_sp_fs_scroll_pane

0xe7ed,	// (0x0007a88b) thumb_sp_fs_scroll_pane

0x654f,	// (0x000725ed) list_medium_line_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_g1

0x7fc7,	// (0x00074065) list_medium_line_t1_ParamLimits

0x7fc7,	// (0x00074065) list_medium_line_t1

0x1239,	// (0x0006d2d7) list_medium_line_x2_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_g1

0x1245,	// (0x0006d2e3) list_medium_line_x2_g2_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0007bdf3) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0007bdf3) list_medium_line_x2_g

0xa772,	// (0x00076810) list_medium_line_x2_t1_ParamLimits

0xa772,	// (0x00076810) list_medium_line_x2_t1

0x1239,	// (0x0006d2d7) list_medium_line_x3_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x3_g1

0x1245,	// (0x0006d2e3) list_medium_line_x3_g2_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0007bdf3) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0007bdf3) list_medium_line_x3_g

0xa772,	// (0x00076810) list_medium_line_x3_t1_ParamLimits

0xa772,	// (0x00076810) list_medium_line_x3_t1

0xe7f6,	// (0x0007a894) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0007a89d) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x0007a8a6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0007bdf8) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x0007a894) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0007a89d) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x0007a8a6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0007bdf8) bg_sp_fs_scroll_pane_g

0x1239,	// (0x0006d2d7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1239,	// (0x0006d2d7) list_medium_line_x2_t3_g4_g1

0x12e1,	// (0x0006d37f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12e1,	// (0x0006d37f) list_medium_line_x2_t3_g4_g2

0x1245,	// (0x0006d2e3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1245,	// (0x0006d2e3) list_medium_line_x2_t3_g4_g3

0x1251,	// (0x0006d2ef) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1251,	// (0x0006d2ef) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007b360) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007b360) list_medium_line_x2_t3_g4_g

0x7fdc,	// (0x0007407a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7fdc,	// (0x0007407a) list_medium_line_x2_t3_g4_t1

0x7ff6,	// (0x00074094) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7ff6,	// (0x00074094) list_medium_line_x2_t3_g4_t2

0x1286,	// (0x0006d324) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1286,	// (0x0006d324) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0007bdff) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0007bdff) list_medium_line_x2_t3_g4_t

0x654f,	// (0x000725ed) list_medium_line_g2_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_g2_g1

0x655b,	// (0x000725f9) list_medium_line_g2_g2_ParamLimits

0x655b,	// (0x000725f9) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0007bab1) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0007bab1) list_medium_line_g2_g

0x800f,	// (0x000740ad) list_medium_line_g2_t1_ParamLimits

0x800f,	// (0x000740ad) list_medium_line_g2_t1

0x654f,	// (0x000725ed) list_medium_line_t3_g2_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_t3_g2_g1

0x655b,	// (0x000725f9) list_medium_line_t3_g2_g2_ParamLimits

0x655b,	// (0x000725f9) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0007bab1) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0007bab1) list_medium_line_t3_g2_g

0x8024,	// (0x000740c2) list_medium_line_t3_g2_t1_ParamLimits

0x8024,	// (0x000740c2) list_medium_line_t3_g2_t1

0x803e,	// (0x000740dc) list_medium_line_t3_g2_t2_ParamLimits

0x803e,	// (0x000740dc) list_medium_line_t3_g2_t2

0x8054,	// (0x000740f2) list_medium_line_t3_g2_t3_ParamLimits

0x8054,	// (0x000740f2) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0007be06) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0007be06) list_medium_line_t3_g2_t

0x7c13,	// (0x00073cb1) list_medium_line_right_icon_g1

0x806b,	// (0x00074109) list_medium_line_right_icon_t1

0x654f,	// (0x000725ed) list_medium_line_t2_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_t2_g1

0x8079,	// (0x00074117) list_medium_line_t2_t1_ParamLimits

0x8079,	// (0x00074117) list_medium_line_t2_t1

0x8093,	// (0x00074131) list_medium_line_t2_t2_ParamLimits

0x8093,	// (0x00074131) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0007be0d) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0007be0d) list_medium_line_t2_t

0x654f,	// (0x000725ed) list_medium_line_t3_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_t3_g1

0x80ac,	// (0x0007414a) list_medium_line_t3_t1_ParamLimits

0x80ac,	// (0x0007414a) list_medium_line_t3_t1

0x80c3,	// (0x00074161) list_medium_line_t3_t2_ParamLimits

0x80c3,	// (0x00074161) list_medium_line_t3_t2

0x80d8,	// (0x00074176) list_medium_line_t3_t3_ParamLimits

0x80d8,	// (0x00074176) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0007be12) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0007be12) list_medium_line_t3_t

0x654f,	// (0x000725ed) list_medium_line_g3_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_g3_g1

0x80ea,	// (0x00074188) list_medium_line_g3_g2_ParamLimits

0x80ea,	// (0x00074188) list_medium_line_g3_g2

0x655b,	// (0x000725f9) list_medium_line_g3_g3_ParamLimits

0x655b,	// (0x000725f9) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0007be19) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0007be19) list_medium_line_g3_g

0x80f6,	// (0x00074194) list_medium_line_g3_t1_ParamLimits

0x80f6,	// (0x00074194) list_medium_line_g3_t1

0x654f,	// (0x000725ed) list_medium_line_t2_g3_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_t2_g3_g1

0x80ea,	// (0x00074188) list_medium_line_t2_g3_g2_ParamLimits

0x80ea,	// (0x00074188) list_medium_line_t2_g3_g2

0x655b,	// (0x000725f9) list_medium_line_t2_g3_g3_ParamLimits

0x655b,	// (0x000725f9) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0007be19) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0007be19) list_medium_line_t2_g3_g

0x810b,	// (0x000741a9) list_medium_line_t2_g3_t1_ParamLimits

0x810b,	// (0x000741a9) list_medium_line_t2_g3_t1

0x8122,	// (0x000741c0) list_medium_line_t2_g3_t2_ParamLimits

0x8122,	// (0x000741c0) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0007be20) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0007be20) list_medium_line_t2_g3_t

0x654f,	// (0x000725ed) list_medium_line_t3_g3_g1_ParamLimits

0x654f,	// (0x000725ed) list_medium_line_t3_g3_g1

0x80ea,	// (0x00074188) list_medium_line_t3_g3_g2_ParamLimits

0x80ea,	// (0x00074188) list_medium_line_t3_g3_g2

0x655b,	// (0x000725f9) list_medium_line_t3_g3_g3_ParamLimits

0x655b,	// (0x000725f9) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0007be19) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0007be19) list_medium_line_t3_g3_g

0x813d,	// (0x000741db) list_medium_line_t3_g3_t1_ParamLimits

0x813d,	// (0x000741db) list_medium_line_t3_g3_t1

0x8156,	// (0x000741f4) list_medium_line_t3_g3_t2_ParamLimits

0x8156,	// (0x000741f4) list_medium_line_t3_g3_t2

0x816c,	// (0x0007420a) list_medium_line_t3_g3_t3_ParamLimits

0x816c,	// (0x0007420a) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0007be25) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0007be25) list_medium_line_t3_g3_t

0x7da9,	// (0x00073e47) list_medium_line_right_iconx2_g1

0x7c13,	// (0x00073cb1) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0007be2c) list_medium_line_right_iconx2_g

0x8186,	// (0x00074224) list_medium_line_right_iconx2_t1

0x7da9,	// (0x00073e47) list_medium_line_t2_right_iconx2_g1

0x7c13,	// (0x00073cb1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0007be2c) list_medium_line_t2_right_iconx2_g

0x8194,	// (0x00074232) list_medium_line_t2_right_iconx2_t1

0x81a4,	// (0x00074242) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0007be31) list_medium_line_t2_right_iconx2_t

0x81b6,	// (0x00074254) list_medium_line_x4_t4_t1

0x81c4,	// (0x00074262) list_medium_line_x4_t4_t2

0x81d4,	// (0x00074272) list_medium_line_x4_t4_t3

0x81e4,	// (0x00074282) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0007be36) list_medium_line_x4_t4_t

0x8237,	// (0x000742d5) tport_appsw_pane_ParamLimits

0x8237,	// (0x000742d5) tport_appsw_pane

0x824f,	// (0x000742ed) tport_contact_pane_ParamLimits

0x824f,	// (0x000742ed) tport_contact_pane

0x8267,	// (0x00074305) tport_listscroll_pane_ParamLimits

0x8267,	// (0x00074305) tport_listscroll_pane

0x8281,	// (0x0007431f) cell_tport_appsw_pane_ParamLimits

0x8281,	// (0x0007431f) cell_tport_appsw_pane

0xd68d,	// (0x0007972b) tport_appsw_pane_g1_ParamLimits

0xd68d,	// (0x0007972b) tport_appsw_pane_g1

0xe811,	// (0x0007a8af) tport_contact_pane_g1

0xe81a,	// (0x0007a8b8) tport_contact_pane_t1

0xe828,	// (0x0007a8c6) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0007be3f) tport_contact_pane_t

0xe836,	// (0x0007a8d4) list_tport_pane

0xe83f,	// (0x0007a8dd) scroll_pane_cp_030

0x82c9,	// (0x00074367) cell_tport_appsw_pane_g1

0x82d9,	// (0x00074377) cell_tport_appsw_pane_t1

0x82e7,	// (0x00074385) grid_highlight_pane_cp019

0x82ef,	// (0x0007438d) list_tport_double_graphic_pane_ParamLimits

0x82ef,	// (0x0007438d) list_tport_double_graphic_pane

0xa4dd,	// (0x0007657b) list_highlight_pane_cp023_ParamLimits

0xa4dd,	// (0x0007657b) list_highlight_pane_cp023

0x82fc,	// (0x0007439a) list_tport_double_graphic_pane_g1_ParamLimits

0x82fc,	// (0x0007439a) list_tport_double_graphic_pane_g1

0x8309,	// (0x000743a7) list_tport_double_graphic_pane_t1_ParamLimits

0x8309,	// (0x000743a7) list_tport_double_graphic_pane_t1

0x831e,	// (0x000743bc) list_tport_double_graphic_pane_t2_ParamLimits

0x831e,	// (0x000743bc) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0007be4b) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0007be4b) list_tport_double_graphic_pane_t

0x9325,	// (0x000753c3) main_cale_note_pane

0x5cfe,	// (0x00071d9c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cfe,	// (0x00071d9c) cell_vitu2_function_top_wide_pane_cp01

0x7789,	// (0x00073827) wait_bar_pane_cp05_ParamLimits

0xa4dd,	// (0x0007657b) listscroll_cmail_pane

0xe848,	// (0x0007a8e6) list_cmail_pane

0x8330,	// (0x000743ce) list_cmail_body_pane

0x8344,	// (0x000743e2) list_single_cmail_header_caption_pane

0x835b,	// (0x000743f9) list_single_cmail_header_detail_pane_ParamLimits

0x835b,	// (0x000743f9) list_single_cmail_header_detail_pane

0xe858,	// (0x0007a8f6) list_single_cmail_header_caption_pane_t1

0x8385,	// (0x00074423) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8385,	// (0x00074423) list_single_cmail_header_detail_pane_g1

0xa788,	// (0x00076826) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa788,	// (0x00076826) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0007be50) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0007be50) list_single_cmail_header_detail_pane_g

0xa794,	// (0x00076832) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa794,	// (0x00076832) list_single_cmail_header_detail_pane_t1

0xa7f4,	// (0x00076892) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa7f4,	// (0x00076892) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x0007a3c9) list_cmail_body_pane_g1

0xe87c,	// (0x0007a91a) list_cmail_body_pane_t1

0xd6ad,	// (0x0007974b) list_single_cmail_header_editor_pane_bg_g1

0xac1d,	// (0x00076cbb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6bd,	// (0x0007975b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b5,	// (0x00079753) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90d,	// (0x000799ab) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6dd,	// (0x0007977b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6cd,	// (0x0007976b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d5,	// (0x00079773) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabfd,	// (0x00076c9b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x839d,	// (0x0007443b) calenote_gesture_pane_ParamLimits

0x839d,	// (0x0007443b) calenote_gesture_pane

0x83bd,	// (0x0007445b) calenote_window_pane_ParamLimits

0x83bd,	// (0x0007445b) calenote_window_pane

0xe88a,	// (0x0007a928) popup_note_window_cp01

0x83d9,	// (0x00074477) calenote_swipe_1_pane_ParamLimits

0x83d9,	// (0x00074477) calenote_swipe_1_pane

0x7bf9,	// (0x00073c97) calenote_swipe_2_pane_ParamLimits

0x7bf9,	// (0x00073c97) calenote_swipe_2_pane

0xe697,	// (0x0007a735) calenote_swipe_1_pane_g1_ParamLimits

0xe697,	// (0x0007a735) calenote_swipe_1_pane_g1

0xe6a4,	// (0x0007a742) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x0007a742) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0007bd74) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0007bd74) calenote_swipe_1_pane_g

0xe89c,	// (0x0007a93a) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x0007a93a) calenote_swipe_1_pane_t1

0xe697,	// (0x0007a735) calenote_swipe_2_pane_g1_ParamLimits

0xe697,	// (0x0007a735) calenote_swipe_2_pane_g1

0xe8bb,	// (0x0007a959) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x0007a959) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0007be5c) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0007be5c) calenote_swipe_2_pane_g

0xe8c7,	// (0x0007a965) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x0007a965) calenote_swipe_2_pane_t1

0x9325,	// (0x000753c3) main_mup_navstr_pane

0x49c6,	// (0x00070a64) main_mup3_pane_t7_ParamLimits

0x49c6,	// (0x00070a64) main_mup3_pane_t7

0x9afa,	// (0x00075b98) main_mp4_pane_g6_ParamLimits

0x9afa,	// (0x00075b98) main_mp4_pane_g6

0x9c9e,	// (0x00075d3c) main_image3_pane_t4_ParamLimits

0x9c9e,	// (0x00075d3c) main_image3_pane_t4

0x83ee,	// (0x0007448c) popup_navstr_preview_pane_ParamLimits

0x83ee,	// (0x0007448c) popup_navstr_preview_pane

0x8402,	// (0x000744a0) scroll_navstr_pane_ParamLimits

0x8402,	// (0x000744a0) scroll_navstr_pane

0x9325,	// (0x000753c3) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x0007a98c) popup_navstr_preview_pane_t1

0x8416,	// (0x000744b4) scroll_navstr_pane_g1_ParamLimits

0x8416,	// (0x000744b4) scroll_navstr_pane_g1

0x842a,	// (0x000744c8) scroll_navstr_pane_t1_ParamLimits

0x842a,	// (0x000744c8) scroll_navstr_pane_t1

0xe893,	// (0x0007a931) bg_button_pane_cp014

0xe893,	// (0x0007a931) bg_button_pane_cp030

0x7a93,	// (0x00073b31) list_double_fisheye_pane_g4_ParamLimits

0x7a93,	// (0x00073b31) list_double_fisheye_pane_g4

0x7a9f,	// (0x00073b3d) list_double_fisheye_pane_g5_ParamLimits

0x7a9f,	// (0x00073b3d) list_double_fisheye_pane_g5

0xcc03,	// (0x00078ca1) sp_fs_scroll_pane_cp03

0xe78a,	// (0x0007a828) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x0007a834) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0007bd91) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x0007a840) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x0007a8ee) sp_fs_scroll_pane_cp02

0xa352,	// (0x000763f0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa352,	// (0x000763f0) popup_sp_fs_calendar_preview_list_single_pane

0x9325,	// (0x000753c3) main_cam6_pano_pane

0x939d,	// (0x0007543b) main_mup3_pane_ParamLimits

0x9325,	// (0x000753c3) main_phacti_pane

0x765c,	// (0x000736fa) bg_button_pane_cp11

0x7676,	// (0x00073714) main_mobtv_info_pane_g2_ParamLimits

0x7676,	// (0x00073714) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0007bcf1) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0007bcf1) main_mobtv_info_pane_g

0x7853,	// (0x000738f1) sc_clock_pane_t5_ParamLimits

0x7853,	// (0x000738f1) sc_clock_pane_t5

0x790e,	// (0x000739ac) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x0007a666) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x0007a666) main_radioblah_pane_t3

0xe5e0,	// (0x0007a67e) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x0007a67e) main_radioblah_pane_t4

0x7936,	// (0x000739d4) main_radioblah_text_pane_ParamLimits

0x7936,	// (0x000739d4) main_radioblah_text_pane

0x7948,	// (0x000739e6) main_radioblah_info_pane_g1_ParamLimits

0x79e1,	// (0x00073a7f) main_radioblah_info_pane_t4_ParamLimits

0x79e1,	// (0x00073a7f) main_radioblah_info_pane_t4

0xa4dd,	// (0x0007657b) main_sp_fs_calendar_pane

0x8441,	// (0x000744df) main_phacti_pane_g1

0x8449,	// (0x000744e7) phacti_note_pane_ParamLimits

0x8449,	// (0x000744e7) phacti_note_pane

0xe905,	// (0x0007a9a3) phacti_term_pane_ParamLimits

0xe905,	// (0x0007a9a3) phacti_term_pane

0xe91a,	// (0x0007a9b8) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x0007a9b8) phacti_note_pane_t1

0xa80b,	// (0x000768a9) phacti_term_pane_g1

0xa813,	// (0x000768b1) phacti_term_pane_t1_ParamLimits

0xa813,	// (0x000768b1) phacti_term_pane_t1

0xe931,	// (0x0007a9cf) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x0007a9d7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0007be66) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x0007a9df) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x0007a9df) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x0007a9f5) aid_popup_sp_fs_bg_corner_pane

0xcc64,	// (0x00078d02) popup_sp_fs_calendar_preview_bg_pane_g1

0x9325,	// (0x000753c3) popup_sp_fs_calendar_preview_bg_pane

0x10c2,	// (0x0006d160) popup_sp_fs_calendar_preview_list_pane

0xc850,	// (0x000788ee) bg_main_sp_fs_cale_pane_ParamLimits

0xc850,	// (0x000788ee) bg_main_sp_fs_cale_pane

0xa846,	// (0x000768e4) listscroll_cale_mrui_pane_ParamLimits

0xa846,	// (0x000768e4) listscroll_cale_mrui_pane

0xa85b,	// (0x000768f9) listscroll_sp_fs_schedule_track_pane

0xa864,	// (0x00076902) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa864,	// (0x00076902) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x0007a9fd) main_sp_fs_ribbon_pane

0xa877,	// (0x00076915) popup_sp_fs_cale_preview_window

0x84be,	// (0x0007455c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84be,	// (0x0007455c) list_single_sp_fs_schedule_track_pane

0xa4dd,	// (0x0007657b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4dd,	// (0x0007657b) bg_sp_fs_highlight_list_pane_cp03

0x84d2,	// (0x00074570) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x84d2,	// (0x00074570) list_single_sp_fs_schedule_track_pane_g1

0x84de,	// (0x0007457c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x84de,	// (0x0007457c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0007be6b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0007be6b) list_single_sp_fs_schedule_track_pane_g

0x84ea,	// (0x00074588) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x84ea,	// (0x00074588) list_single_sp_fs_schedule_track_pane_t1

0x8504,	// (0x000745a2) sp_fs_schedule_track_pane_ParamLimits

0x8504,	// (0x000745a2) sp_fs_schedule_track_pane

0xe967,	// (0x0007aa05) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x0007aa0d) sp_fs_schedule_track_pane_g2

0xe977,	// (0x0007aa15) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x0007aa1d) sp_fs_schedule_track_pane_g4

0xe987,	// (0x0007aa25) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0007be70) sp_fs_schedule_track_pane_g

0xd6ad,	// (0x0007974b) bg_sp_fs_schedule_viewer_highlight_g1

0xac1d,	// (0x00076cbb) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b5,	// (0x00079753) bg_sp_fs_schedule_viewer_highlight_g3

0xd6bd,	// (0x0007975b) bg_sp_fs_schedule_viewer_highlight_g4

0xd90d,	// (0x000799ab) bg_sp_fs_schedule_viewer_highlight_g5

0xd6cd,	// (0x0007976b) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d5,	// (0x00079773) bg_sp_fs_schedule_viewer_highlight_g7

0xd6dd,	// (0x0007977b) bg_sp_fs_schedule_viewer_highlight_g8

0xabfd,	// (0x00076c9b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0007be7b) bg_sp_fs_schedule_viewer_highlight_g

0x9325,	// (0x000753c3) bg_main_sp_fs_ribbon_pane

0x8515,	// (0x000745b3) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x0007aa2d) main_sp_fs_ribbon_pane_t1

0x851e,	// (0x000745bc) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x0007aa3c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0007be8e) main_sp_fs_ribbon_pane_t

0xe9ad,	// (0x0007aa4b) main_sp_fs_ribbon_scheduler_pane

0xe9b5,	// (0x0007aa53) bg_main_sp_fs_ribbon_pane_g1

0xe9be,	// (0x0007aa5c) bg_main_sp_fs_ribbon_pane_g2

0xe9c7,	// (0x0007aa65) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0007be95) bg_main_sp_fs_ribbon_pane_g

0xe9cf,	// (0x0007aa6d) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d8,	// (0x0007aa76) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e1,	// (0x0007aa7f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0007be9c) main_sp_fs_ribbon_scheduler_pane_g

0xe9ea,	// (0x0007aa88) list_cale_mrui_pane

0x852d,	// (0x000745cb) sp_fs_scroll_pane_cp07_ParamLimits

0x852d,	// (0x000745cb) sp_fs_scroll_pane_cp07

0x8549,	// (0x000745e7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8549,	// (0x000745e7) bg_sp_fs_schedule_viewer_highlight

0xe9f7,	// (0x0007aa95) list_single_sp_fs_schedule_track_pane_cp01

0xe9ff,	// (0x0007aa9d) list_sp_fs_schedule_track_pane

0xea07,	// (0x0007aaa5) sp_fs_scroll_pane_cp06_ParamLimits

0xea07,	// (0x0007aaa5) sp_fs_scroll_pane_cp06

0xcc64,	// (0x00078d02) bgmain_sp_fs_calendar_pane_g1

0x8559,	// (0x000745f7) list_single_cale_mrui_pane_ParamLimits

0x8559,	// (0x000745f7) list_single_cale_mrui_pane

0xa889,	// (0x00076927) list_single_cale_mrui_row_pane_ParamLimits

0xa889,	// (0x00076927) list_single_cale_mrui_row_pane

0xa896,	// (0x00076934) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa896,	// (0x00076934) list_single_cale_mrui_row_pane_g1

0xa8ce,	// (0x0007696c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa8ce,	// (0x0007696c) list_single_cale_mrui_row_pane_t1

0x857b,	// (0x00074619) list_single_cale_mrui_row_pane_t2_ParamLimits

0x857b,	// (0x00074619) list_single_cale_mrui_row_pane_t2

0xa8e0,	// (0x0007697e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa8e0,	// (0x0007697e) list_single_cale_mrui_row_pane_t3

0xa90f,	// (0x000769ad) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa90f,	// (0x000769ad) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0007beaa) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0007beaa) list_single_cale_mrui_row_pane_t

0x85e3,	// (0x00074681) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x85e3,	// (0x00074681) list_single_cmail_header_editor_pane_bg_cp01

0x8609,	// (0x000746a7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8609,	// (0x000746a7) list_single_cmail_header_editor_pane_bg_cp02

0x8629,	// (0x000746c7) main_radioblah_text_pane_t1_ParamLimits

0x8629,	// (0x000746c7) main_radioblah_text_pane_t1

0xea26,	// (0x0007aac4) cam6_indi_pane_cp01

0xea2e,	// (0x0007aacc) cam6_mode_pane_cp01

0xea36,	// (0x0007aad4) cam6_pano_pane

0xea3f,	// (0x0007aadd) cam6_zoom_pane_cp01

0xea47,	// (0x0007aae5) cam6_pano_image_pane

0xea52,	// (0x0007aaf0) cam6_pano_pane_g1

0xe32b,	// (0x0007a3c9) cam6_pano_pane_g2

0xea5b,	// (0x0007aaf9) cam6_pano_pane_g3

0xea64,	// (0x0007ab02) cam6_pano_pane_g4

0xd20f,	// (0x000792ad) cam6_pano_pane_g5

0xea6d,	// (0x0007ab0b) cam6_pano_pane_g6

0xea77,	// (0x0007ab15) cam6_pano_pane_g7

0xea7f,	// (0x0007ab1d) cam6_pano_pane_g8

0xea88,	// (0x0007ab26) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0007beb3) cam6_pano_pane_g

0x9325,	// (0x000753c3) main_browser_tag_pane

0xe8e6,	// (0x0007a984) grid_navstr_albumart_pane

0xea93,	// (0x0007ab31) cell_navstr_albumart_pane_ParamLimits

0xea93,	// (0x0007ab31) cell_navstr_albumart_pane

0xeab3,	// (0x0007ab51) cell_navstr_albumart_pane_g1

0xc621,	// (0x000786bf) cell_navstr_albumart_pane_g2

0xc631,	// (0x000786cf) cell_navstr_albumart_pane_g3

0xc629,	// (0x000786c7) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0007bec6) cell_navstr_albumart_pane_g

0x8644,	// (0x000746e2) bt_list_pane_ParamLimits

0x8644,	// (0x000746e2) bt_list_pane

0x8658,	// (0x000746f6) bt_list_pane_t1

0x8667,	// (0x00074705) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0007becf) bt_list_pane_t

0x9325,	// (0x000753c3) main_cale_prevew_pane

0x8676,	// (0x00074714) popup_cale_preview_window_ParamLimits

0x8676,	// (0x00074714) popup_cale_preview_window

0xa4dd,	// (0x0007657b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4dd,	// (0x0007657b) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x0007ab59) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x0007ab59) list_cale_preview_pane

0x868f,	// (0x0007472d) list_double_cale_preview_pane_ParamLimits

0x868f,	// (0x0007472d) list_double_cale_preview_pane

0xd6e5,	// (0x00079783) list_single_cale_preview_pane_ParamLimits

0xd6e5,	// (0x00079783) list_single_cale_preview_pane

0x86a1,	// (0x0007473f) list_single_cale_preview_pane_g1

0x86a9,	// (0x00074747) list_single_cale_preview_pane_t1_ParamLimits

0x86a9,	// (0x00074747) list_single_cale_preview_pane_t1

0x86be,	// (0x0007475c) list_double_cale_preview_pane_g1

0x86c6,	// (0x00074764) list_double_cale_preview_pane_t1_ParamLimits

0x86c6,	// (0x00074764) list_double_cale_preview_pane_t1

0x86db,	// (0x00074779) list_double_cale_preview_pane_t2_ParamLimits

0x86db,	// (0x00074779) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0007bed4) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0007bed4) list_double_cale_preview_pane_t

0x9325,	// (0x000753c3) main_ezdial_pane

0xa4dd,	// (0x0007657b) main_sp_fs_email_pane_ParamLimits

0x7c3d,	// (0x00073cdb) cmail_ddmenu_btn01_pane_ParamLimits

0x7c3d,	// (0x00073cdb) cmail_ddmenu_btn01_pane

0x7c50,	// (0x00073cee) cmail_ddmenu_btn02_pane_ParamLimits

0x7c50,	// (0x00073cee) cmail_ddmenu_btn02_pane

0x7c73,	// (0x00073d11) cmail_ddmenu_btn03_pane_ParamLimits

0x7c73,	// (0x00073d11) cmail_ddmenu_btn03_pane

0x7c99,	// (0x00073d37) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cbd,	// (0x00073d5b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8330,	// (0x000743ce) list_cmail_body_pane_ParamLimits

0xe866,	// (0x0007a904) bg_button_pane_cp12

0xe86f,	// (0x0007a90d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x0007a90d) list_single_cmail_header_detail_pane_g3

0xa7d0,	// (0x0007686e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa7d0,	// (0x0007686e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0007be57) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0007be57) list_single_cmail_header_detail_pane_t

0xa828,	// (0x000768c6) phacti_term_pane_t2_ParamLimits

0xa828,	// (0x000768c6) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0007be61) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0007be61) phacti_term_pane_t

0xeac7,	// (0x0007ab65) aid_size_list_single_double

0x86f3,	// (0x00074791) popup_ezdial_listscroll_window

0x870f,	// (0x000747ad) popup_number_entry_window_cp01

0xa413,	// (0x000764b1) bg_popup_call_pane_cp09

0xead3,	// (0x0007ab71) ezdial_list_pane

0xeadb,	// (0x0007ab79) scroll_pane_cp23

0xc850,	// (0x000788ee) bg_button_pane_cp028_ParamLimits

0xc850,	// (0x000788ee) bg_button_pane_cp028

0x871d,	// (0x000747bb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x871d,	// (0x000747bb) cmail_ddmenu_btn01_pane_g1

0x8729,	// (0x000747c7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8729,	// (0x000747c7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0007bed9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0007bed9) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x0007ab81) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x0007ab81) cmail_ddmenu_btn01_pane_t1

0xc850,	// (0x000788ee) bg_button_pane_cp029_ParamLimits

0xc850,	// (0x000788ee) bg_button_pane_cp029

0x8735,	// (0x000747d3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8735,	// (0x000747d3) cmail_ddmenu_btn02_pane_g1

0x874e,	// (0x000747ec) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x874e,	// (0x000747ec) cmail_ddmenu_btn02_pane_t1

0xa4dd,	// (0x0007657b) bg_button_pane_cp031_ParamLimits

0xa4dd,	// (0x0007657b) bg_button_pane_cp031

0x8735,	// (0x000747d3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8735,	// (0x000747d3) cmail_ddmenu_btn03_pane_g1

0x874e,	// (0x000747ec) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x874e,	// (0x000747ec) cmail_ddmenu_btn03_pane_t1

0x5573,	// (0x00071611) cell_dialer2_keypad_pane_t1_ParamLimits

0x558d,	// (0x0007162b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x558d,	// (0x0007162b) cell_dialer2_keypad_pane_t1_copy1

0x74b5,	// (0x00073553) ncimui_group_button_pane

0xa4dd,	// (0x0007657b) main_sp_fs_calendar_pane_ParamLimits

0x8344,	// (0x000743e2) list_single_cmail_header_caption_pane_ParamLimits

0xa83d,	// (0x000768db) aid_recal_txt_sm_pane

0x9325,	// (0x000753c3) mian_recal_day_pane

0xa877,	// (0x00076915) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf8,	// (0x0007ab96) list_recal_day_pane

0xa959,	// (0x000769f7) list_single_recal_day_pane_ParamLimits

0xa959,	// (0x000769f7) list_single_recal_day_pane

0xeb1f,	// (0x0007abbd) list_single_recal_day_pane_g1_ParamLimits

0xeb1f,	// (0x0007abbd) list_single_recal_day_pane_g1

0xa96b,	// (0x00076a09) list_single_recal_day_pane_g2_ParamLimits

0xa96b,	// (0x00076a09) list_single_recal_day_pane_g2

0xa97b,	// (0x00076a19) list_single_recal_day_pane_g3_ParamLimits

0xa97b,	// (0x00076a19) list_single_recal_day_pane_g3

0x8772,	// (0x00074810) list_single_recal_day_pane_g4_ParamLimits

0x8772,	// (0x00074810) list_single_recal_day_pane_g4

0xa987,	// (0x00076a25) list_single_recal_day_pane_g5_ParamLimits

0xa987,	// (0x00076a25) list_single_recal_day_pane_g5

0xa997,	// (0x00076a35) list_single_recal_day_pane_g6_ParamLimits

0xa997,	// (0x00076a35) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0007bee8) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0007bee8) list_single_recal_day_pane_g

0xa9ab,	// (0x00076a49) list_single_recal_day_pane_t1

0xa9bd,	// (0x00076a5b) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0007bef3) list_single_recal_day_pane_t

0x8792,	// (0x00074830) ncimui_query_button_pane_ParamLimits

0x8792,	// (0x00074830) ncimui_query_button_pane

0x87a2,	// (0x00074840) ncimui_query_button_pane_t1_ParamLimits

0x87a2,	// (0x00074840) ncimui_query_button_pane_t1

0xeb2b,	// (0x0007abc9) ncimui_query_button_pane_t2_ParamLimits

0xeb2b,	// (0x0007abc9) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0007bef8) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0007bef8) ncimui_query_button_pane_t

0x87b5,	// (0x00074853) query_button_pane_ParamLimits

0x87b5,	// (0x00074853) query_button_pane

0x9325,	// (0x000753c3) bg_button_pane_cp0028

0xeb3e,	// (0x0007abdc) query_button_pane_t1

0x362f,	// (0x0006f6cd) main_tport_pane_ParamLimits

0x81f4,	// (0x00074292) bg_popup_window_pane_cp01_ParamLimits

0x81f4,	// (0x00074292) bg_popup_window_pane_cp01

0x820f,	// (0x000742ad) heading_pane_cp08_ParamLimits

0x820f,	// (0x000742ad) heading_pane_cp08

0x8222,	// (0x000742c0) heading_pane_cp07_ParamLimits

0x8222,	// (0x000742c0) heading_pane_cp07

0x82c9,	// (0x00074367) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0007be44) cell_tport_appsw_pane_g

0xa45c,	// (0x000764fa) input_candi_list_open_g1

0xade0,	// (0x00076e7e) list_cale_time_pane_g6_ParamLimits

0xade0,	// (0x00076e7e) list_cale_time_pane_g6

0x43f7,	// (0x00070495) aid_size_touch_calib_1_ParamLimits

0x43f7,	// (0x00070495) aid_size_touch_calib_1

0x4409,	// (0x000704a7) aid_size_touch_calib_2_ParamLimits

0x4409,	// (0x000704a7) aid_size_touch_calib_2

0x4421,	// (0x000704bf) aid_size_touch_calib_3_ParamLimits

0x4421,	// (0x000704bf) aid_size_touch_calib_3

0x443f,	// (0x000704dd) aid_size_touch_calib_4_ParamLimits

0x443f,	// (0x000704dd) aid_size_touch_calib_4

0x4457,	// (0x000704f5) main_touch_calib_button_group_pane_ParamLimits

0x4457,	// (0x000704f5) main_touch_calib_button_group_pane

0x446f,	// (0x0007050d) main_touch_calib_pane_g1_ParamLimits

0x4481,	// (0x0007051f) main_touch_calib_pane_g2_ParamLimits

0x4493,	// (0x00070531) main_touch_calib_pane_g3_ParamLimits

0x44a5,	// (0x00070543) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0007b802) main_touch_calib_pane_g_ParamLimits

0x44b7,	// (0x00070555) main_touch_calib_pane_t1_ParamLimits

0x44d1,	// (0x0007056f) main_touch_calib_pane_t2_ParamLimits

0x44eb,	// (0x00070589) main_touch_calib_pane_t3_ParamLimits

0x44ff,	// (0x0007059d) main_touch_calib_pane_t4_ParamLimits

0x4513,	// (0x000705b1) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0007b80b) main_touch_calib_pane_t_ParamLimits

0xcfb2,	// (0x00079050) list_single_fp_cale_pane_g3_ParamLimits

0xcfb2,	// (0x00079050) list_single_fp_cale_pane_g3

0x939d,	// (0x0007543b) bg_button_pane_cp012_ParamLimits

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp03_ParamLimits

0x6505,	// (0x000725a3) cell_vitu2_function_top_pane_g1_ParamLimits

0x939d,	// (0x0007543b) bg_vkb2_func_pane_cp04_ParamLimits

0x7443,	// (0x000734e1) main_ncimui_button_group_pane_ParamLimits

0x7443,	// (0x000734e1) main_ncimui_button_group_pane

0x74a3,	// (0x00073541) main_ncimui_pane_t3_ParamLimits

0x74a3,	// (0x00073541) main_ncimui_pane_t3

0xe8fc,	// (0x0007a99a) phacti_button_group_pane

0xeac7,	// (0x0007ab65) aid_size_list_single_double_ParamLimits

0x86f3,	// (0x00074791) popup_ezdial_listscroll_window_ParamLimits

0x870f,	// (0x000747ad) popup_number_entry_window_cp01_ParamLimits

0x87c8,	// (0x00074866) phacti_button_pane_ParamLimits

0x87c8,	// (0x00074866) phacti_button_pane

0x9325,	// (0x000753c3) bg_button_pane_cp14

0xeb4c,	// (0x0007abea) phacti_button_pane_t1

0x87d9,	// (0x00074877) main_touch_calib_button_pane_ParamLimits

0x87d9,	// (0x00074877) main_touch_calib_button_pane

0xa21e,	// (0x000762bc) bg_button_pane_cp18_ParamLimits

0xa21e,	// (0x000762bc) bg_button_pane_cp18

0xeb5a,	// (0x0007abf8) main_touch_calib_button_pane_t1_ParamLimits

0xeb5a,	// (0x0007abf8) main_touch_calib_button_pane_t1

0xeb70,	// (0x0007ac0e) main_touch_calib_button_pane_t2_ParamLimits

0xeb70,	// (0x0007ac0e) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0007befd) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0007befd) main_touch_calib_button_pane_t

0x9325,	// (0x000753c3) cell_ncimui_button_pane

0x9325,	// (0x000753c3) bg_button_pane_cp032

0xeb8e,	// (0x0007ac2c) cell_ncimui_button_pane_t1

0x9c7e,	// (0x00075d1c) image3_infobar_pane_ParamLimits

0x9c7e,	// (0x00075d1c) image3_infobar_pane

0x787f,	// (0x0007391d) fs_bigclock_status_pane_ParamLimits

0x787f,	// (0x0007391d) fs_bigclock_status_pane

0x788c,	// (0x0007392a) main_fs_bigclock_clock_pane_ParamLimits

0x788c,	// (0x0007392a) main_fs_bigclock_clock_pane

0x78ac,	// (0x0007394a) main_fs_bigclock_indi_pane_ParamLimits

0x78ac,	// (0x0007394a) main_fs_bigclock_indi_pane

0x78d6,	// (0x00073974) main_fs_bigclock_swipe_pane_ParamLimits

0x78d6,	// (0x00073974) main_fs_bigclock_swipe_pane

0x9325,	// (0x000753c3) main_fs_clock_dumped_data

0xe438,	// (0x0007a4d6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x0007a4d6) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x0007a4f2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x0007a4f2) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x0007a50c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x0007a50c) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x0007a526) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x0007a526) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0007bd25) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0007bd25) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x0007a551) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x0007a551) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x0007a579) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x0007a579) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x0007a5a1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x0007a5a1) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x0007a5c9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x0007a5c9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0007bd30) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0007bd30) list_single_fs_bigclock_indicator_pane_t

0xeb9c,	// (0x0007ac3a) image3_infobar_fav_pane_ParamLimits

0xeb9c,	// (0x0007ac3a) image3_infobar_fav_pane

0xebac,	// (0x0007ac4a) image3_infobar_loc_pane_ParamLimits

0xebac,	// (0x0007ac4a) image3_infobar_loc_pane

0xebc0,	// (0x0007ac5e) image3_infobar_time_pane_ParamLimits

0xebc0,	// (0x0007ac5e) image3_infobar_time_pane

0xcc64,	// (0x00078d02) image3_infobar_time_pane_g1

0xebd0,	// (0x0007ac6e) image3_infobar_time_pane_t1

0xcc64,	// (0x00078d02) image3_infobar_loc_pane_g1

0xebde,	// (0x0007ac7c) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0007bf02) image3_infobar_loc_pane_g

0xebe6,	// (0x0007ac84) image3_infobar_loc_pane_t1

0xcc64,	// (0x00078d02) image3_infobar_fav_pane_g1

0xebf4,	// (0x0007ac92) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0007bf07) image3_infobar_fav_pane_g

0xebfc,	// (0x0007ac9a) fs_bigclock_status_battery_pane

0xec05,	// (0x0007aca3) fs_bigclock_status_signal_pane

0xec0e,	// (0x0007acac) fs_bigclock_status_title_pane

0xec17,	// (0x0007acb5) fs_bigclock_status_signal_pane_g1

0xec20,	// (0x0007acbe) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0007bf0c) fs_bigclock_status_signal_pane_g

0xec28,	// (0x0007acc6) fs_bigclock_status_battery_pane_g1

0xec31,	// (0x0007accf) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0007bf11) fs_bigclock_status_battery_pane_g

0xec39,	// (0x0007acd7) fs_bigclock_status_title_pane_t1

0xcc64,	// (0x00078d02) main_fs_bigclock_clock_pane_g1

0xec47,	// (0x0007ace5) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x0007acee) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x0007acee) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0007bf16) main_fs_bigclock_clock_pane_g

0xec58,	// (0x0007acf6) main_fs_bigclock_clock_pane_t1

0x87ee,	// (0x0007488c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0007bf1f) main_fs_bigclock_clock_pane_t

0xec66,	// (0x0007ad04) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec66,	// (0x0007ad04) list_single_fs_bigclock_indicator_pane

0xec77,	// (0x0007ad15) list_single_fs_bigclock_pane_ParamLimits

0xec77,	// (0x0007ad15) list_single_fs_bigclock_pane

0xec9d,	// (0x0007ad3b) main_fs_bigclock_indicator_pane_t1

0xecac,	// (0x0007ad4a) list_single_fs_bigclock_pane_g1

0xecb4,	// (0x0007ad52) list_single_fs_bigclock_pane_t1

0xcc64,	// (0x00078d02) main_fs_bigclock_swipe_pane_g1

0xecf7,	// (0x0007ad95) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0007bf30) main_fs_bigclock_swipe_pane_g

0xecff,	// (0x0007ad9d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecff,	// (0x0007ad9d) main_fs_bigclock_swipe_pane_t1

0x2536,	// (0x0006e5d4) call_type_pane_ParamLimits

0x9325,	// (0x000753c3) main_btmg_pane

0xa8c2,	// (0x00076960) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8c2,	// (0x00076960) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0007bea3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0007bea3) list_single_cale_mrui_row_pane_g

0xa948,	// (0x000769e6) list_recal_vselct_arw_lo_pane

0xeb17,	// (0x0007abb5) list_recal_vselct_arw_up_pane

0xa950,	// (0x000769ee) list_recal_vselct_pane

0x8841,	// (0x000748df) btmg_button_pane

0x884b,	// (0x000748e9) main_btmg_pane_g1

0x9325,	// (0x000753c3) bg_button_pane_cp044

0xed1c,	// (0x0007adba) btmg_button_pane_t1

0xc83c,	// (0x000788da) aid_listscroll_gen

0xa4dd,	// (0x0007657b) main_cntbar_detail_pane

0xe848,	// (0x0007a8e6) list_cmail_folder_pane

0xcc03,	// (0x00078ca1) sp_fs_scroll_pane_cp03_ParamLimits

0x8855,	// (0x000748f3) list_single_fs_dyc_pane_cp01_ParamLimits

0x8855,	// (0x000748f3) list_single_fs_dyc_pane_cp01

0xed2a,	// (0x0007adc8) aid_size_cmail_indent

0xa9cf,	// (0x00076a6d) list_single_dyc_row_pane_cp01

0x889e,	// (0x0007493c) cntbar_detail_list_pane_ParamLimits

0x889e,	// (0x0007493c) cntbar_detail_list_pane

0x88ea,	// (0x00074988) main_cntbar_detail_cont_pane_ParamLimits

0x88ea,	// (0x00074988) main_cntbar_detail_cont_pane

0xcc03,	// (0x00078ca1) scroll_pane_cp032_ParamLimits

0xcc03,	// (0x00078ca1) scroll_pane_cp032

0x88fe,	// (0x0007499c) cntbar_detail_list_event_pane_ParamLimits

0x88fe,	// (0x0007499c) cntbar_detail_list_event_pane

0x88ae,	// (0x0007494c) cntbar_detail_list_shct_pane

0xac6b,	// (0x00076d09) aid_list_gen

0xed33,	// (0x0007add1) aid_scroll

0xed3c,	// (0x0007adda) aid_size_touch_scroll_bar

0x6bf1,	// (0x00072c8f) aid_list_double

0xa9d8,	// (0x00076a76) aid_list_single

0x6bf1,	// (0x00072c8f) aid_list_single_lg

0xa9e1,	// (0x00076a7f) aid_list_z_g_a_sm

0xa9e9,	// (0x00076a87) aid_list_z_g_d

0xa9f1,	// (0x00076a8f) aid_txt_z_prm

0x890e,	// (0x000749ac) aid_txt_z_prm_cp01

0x891c,	// (0x000749ba) aid_txt_z_sec

0x892a,	// (0x000749c8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x892a,	// (0x000749c8) main_cntbar_detail_cont_pane_g1

0x893e,	// (0x000749dc) main_cntbar_detail_cont_pane_g2_ParamLimits

0x893e,	// (0x000749dc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0007bf35) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0007bf35) main_cntbar_detail_cont_pane_g

0xed45,	// (0x0007ade3) main_cntbar_detail_cont_pane_t1

0xed53,	// (0x0007adf1) main_cntbar_detail_cont_pane_t2

0xed61,	// (0x0007adff) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0007bf3a) main_cntbar_detail_cont_pane_t

0x894e,	// (0x000749ec) cell_cntbar_detail_list_shct_pane_ParamLimits

0x894e,	// (0x000749ec) cell_cntbar_detail_list_shct_pane

0xed6f,	// (0x0007ae0d) cntbar_detail_list_shct_pane_g1

0xed78,	// (0x0007ae16) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0007bf41) cntbar_detail_list_shct_pane_g

0x8962,	// (0x00074a00) cntbar_detail_list_event_pane_g1_ParamLimits

0x8962,	// (0x00074a00) cntbar_detail_list_event_pane_g1

0x896e,	// (0x00074a0c) cntbar_detail_list_event_pane_g2_ParamLimits

0x896e,	// (0x00074a0c) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0007bf46) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0007bf46) cntbar_detail_list_event_pane_g

0x89da,	// (0x00074a78) cntbar_detail_list_event_pane_t1_ParamLimits

0x89da,	// (0x00074a78) cntbar_detail_list_event_pane_t1

0x89ef,	// (0x00074a8d) cntbar_detail_list_event_pane_t2_ParamLimits

0x89ef,	// (0x00074a8d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0007bf53) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0007bf53) cntbar_detail_list_event_pane_t

0xcc64,	// (0x00078d02) cell_cntbar_detail_list_shct_pane_g1

0xb3b7,	// (0x00077455) navi_pane_mv_g3

0xa4dd,	// (0x0007657b) main_cntbar_detail_pane_ParamLimits

0x9325,	// (0x000753c3) main_notif_wgt_pane

0x9a94,	// (0x00075b32) aid_tch_main_mp4_pane_g4

0x9c76,	// (0x00075d14) popup_slider_window_cp02

0xa93e,	// (0x000769dc) list_recal_day_event_pane

0x886c,	// (0x0007490a) cntbar_detail_btn_pane_ParamLimits

0x886c,	// (0x0007490a) cntbar_detail_btn_pane

0x8885,	// (0x00074923) cntbar_detail_btn_pane_cp01_ParamLimits

0x8885,	// (0x00074923) cntbar_detail_btn_pane_cp01

0x88ae,	// (0x0007494c) cntbar_detail_list_shct_pane_ParamLimits

0x88be,	// (0x0007495c) cntbar_detail_pane_g1_ParamLimits

0x88be,	// (0x0007495c) cntbar_detail_pane_g1

0x88ce,	// (0x0007496c) cntbar_detail_pane_t1_ParamLimits

0x88ce,	// (0x0007496c) cntbar_detail_pane_t1

0x897a,	// (0x00074a18) cntbar_detail_list_event_pane_g3_ParamLimits

0x897a,	// (0x00074a18) cntbar_detail_list_event_pane_g3

0x8992,	// (0x00074a30) cntbar_detail_list_event_pane_g4_ParamLimits

0x8992,	// (0x00074a30) cntbar_detail_list_event_pane_g4

0x89aa,	// (0x00074a48) cntbar_detail_list_event_pane_g5_ParamLimits

0x89aa,	// (0x00074a48) cntbar_detail_list_event_pane_g5

0x89c2,	// (0x00074a60) cntbar_detail_list_event_pane_g6_ParamLimits

0x89c2,	// (0x00074a60) cntbar_detail_list_event_pane_g6

0x8a04,	// (0x00074aa2) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a04,	// (0x00074aa2) cntbar_detail_list_event_pane_t3

0x8a16,	// (0x00074ab4) popup_notif_wgt_window_ParamLimits

0x8a16,	// (0x00074ab4) popup_notif_wgt_window

0x8a2f,	// (0x00074acd) popup_submenu_window_cp01_ParamLimits

0x8a2f,	// (0x00074acd) popup_submenu_window_cp01

0xa413,	// (0x000764b1) bg_popup_window_pane_cp10

0xed81,	// (0x0007ae1f) listscroll_notif_wgt_pane

0xed93,	// (0x0007ae31) list_notif_wgt_window

0xed9c,	// (0x0007ae3a) scroll_pane_cp033

0x8a41,	// (0x00074adf) list_notif_wgt_row_pane_ParamLimits

0x8a41,	// (0x00074adf) list_notif_wgt_row_pane

0xeda5,	// (0x0007ae43) aid_size_list_notif_wgt_del

0xedb2,	// (0x0007ae50) list_notif_wgt_row_pane_g1

0xedbe,	// (0x0007ae5c) list_notif_wgt_row_pane_g2

0xede0,	// (0x0007ae7e) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0007bf5a) list_notif_wgt_row_pane_g

0xeded,	// (0x0007ae8b) list_notif_wgt_row_pane_t1

0xee03,	// (0x0007aea1) list_notif_wgt_row_pane_t2

0xee15,	// (0x0007aeb3) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0007bf61) list_notif_wgt_row_pane_t

0xd927,	// (0x000799c5) list_recal_day_event_pane_g1

0xee27,	// (0x0007aec5) list_recal_day_event_pane_t1

0x9325,	// (0x000753c3) bg_button_pane_cp045

0x8a51,	// (0x00074aef) cntbar_detail_btn_pane_t1

0xc850,	// (0x000788ee) main_callh_pane_ParamLimits

0xc850,	// (0x000788ee) main_callh_pane

0x9325,	// (0x000753c3) main_coverflow0_pane

0x9325,	// (0x000753c3) main_wgtman_pane

0x78ee,	// (0x0007398c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x78ee,	// (0x0007398c) main_fs_bigclock_unlock_btn_pane

0x82c1,	// (0x0007435f) bg_button_pane_cp16

0x82d1,	// (0x0007436f) cell_tport_appsw_pane_g3

0x8a5f,	// (0x00074afd) cf0_flow_pane_ParamLimits

0x8a5f,	// (0x00074afd) cf0_flow_pane

0xee36,	// (0x0007aed4) listscroll_cf0_pane

0xee41,	// (0x0007aedf) main_cf0_pane_g1

0x8a74,	// (0x00074b12) main_cf0_pane_t1_ParamLimits

0x8a74,	// (0x00074b12) main_cf0_pane_t1

0x8a8b,	// (0x00074b29) main_cf0_pane_t2_ParamLimits

0x8a8b,	// (0x00074b29) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0007bf6d) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0007bf6d) main_cf0_pane_t

0xee53,	// (0x0007aef1) scroll_pane_cp11

0x8aa2,	// (0x00074b40) cf0_flow_pane_g1

0x8aaa,	// (0x00074b48) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0007bf72) cf0_flow_pane_g

0x8ab2,	// (0x00074b50) cf0_flow_pane_t1

0x9325,	// (0x000753c3) main_call6_pane

0x9325,	// (0x000753c3) main_calllock_pane

0x8ac0,	// (0x00074b5e) call6_btn_grp_pane_ParamLimits

0x8ac0,	// (0x00074b5e) call6_btn_grp_pane

0x8ada,	// (0x00074b78) call6_pane_g1_ParamLimits

0x8ada,	// (0x00074b78) call6_pane_g1

0x8aef,	// (0x00074b8d) popup_call6_1st_window_ParamLimits

0x8aef,	// (0x00074b8d) popup_call6_1st_window

0x8b00,	// (0x00074b9e) popup_call6_2nd_window_ParamLimits

0x8b00,	// (0x00074b9e) popup_call6_2nd_window

0x8b11,	// (0x00074baf) cell_call6_btn_pane_ParamLimits

0x8b11,	// (0x00074baf) cell_call6_btn_pane

0xa413,	// (0x000764b1) bg_popup_call2_in_pane_cp03

0xee5e,	// (0x0007aefc) popup_call6_1st_window_g1

0xee66,	// (0x0007af04) popup_call6_1st_window_g2

0xee6e,	// (0x0007af0c) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0007bf77) popup_call6_1st_window_g

0xee76,	// (0x0007af14) popup_call6_1st_window_t1

0xee85,	// (0x0007af23) popup_call6_1st_window_t2

0xee95,	// (0x0007af33) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0007bf7e) popup_call6_1st_window_t

0xa413,	// (0x000764b1) bg_popup_call2_in_pane_cp04

0xee5e,	// (0x0007aefc) popup_call6_2nd_window_g1

0xee66,	// (0x0007af04) popup_call6_2nd_window_g2

0xee6e,	// (0x0007af0c) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0007bf77) popup_call6_2nd_window_g

0xee76,	// (0x0007af14) popup_call6_2nd_window_t1

0x9325,	// (0x000753c3) bg_button_pane_cp15

0xeea5,	// (0x0007af43) cell_call6_btn_pane_g1

0xeeae,	// (0x0007af4c) cell_call6_btn_pane_t1

0x8b25,	// (0x00074bc3) listscroll_wgtman_pane_ParamLimits

0x8b25,	// (0x00074bc3) listscroll_wgtman_pane

0x8b46,	// (0x00074be4) wgtman_btn_pane_ParamLimits

0x8b46,	// (0x00074be4) wgtman_btn_pane

0xb1cb,	// (0x00077269) aid_scroll_copy1

0xeebd,	// (0x0007af5b) list_wgtman_pane

0x8b89,	// (0x00074c27) wgtman_btn_pane_g1_ParamLimits

0x8b89,	// (0x00074c27) wgtman_btn_pane_g1

0x8bb5,	// (0x00074c53) wgtman_btn_pane_t1_ParamLimits

0x8bb5,	// (0x00074c53) wgtman_btn_pane_t1

0xeec7,	// (0x0007af65) wgtman_btn_pane_t2_ParamLimits

0xeec7,	// (0x0007af65) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0007bf85) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0007bf85) wgtman_btn_pane_t

0x8bf2,	// (0x00074c90) listrow_wgtman_pane_ParamLimits

0x8bf2,	// (0x00074c90) listrow_wgtman_pane

0x8c04,	// (0x00074ca2) listrow_wgtman_pane_g1

0x8c11,	// (0x00074caf) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0007bf8a) listrow_wgtman_pane_g

0x8c2f,	// (0x00074ccd) listrow_wgtman_pane_t1

0x8c47,	// (0x00074ce5) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0007bf8f) listrow_wgtman_pane_t

0x8c6d,	// (0x00074d0b) wait_bar_pane_cp09

0xeede,	// (0x0007af7c) main_calllock_btn_pane

0xeee8,	// (0x0007af86) main_calllock_pane_g1

0x9325,	// (0x000753c3) bg_button_pane_cp17

0xeef3,	// (0x0007af91) main_calllock_btn_pane_g1

0xeefc,	// (0x0007af9a) main_calllock_btn_pane_t1

0x9325,	// (0x000753c3) main_dialer3_pane

0x9325,	// (0x000753c3) main_fmrd2_pane

0xcc64,	// (0x00078d02) main_fs_bigclock_unlock_btn_pane_g1

0xef13,	// (0x0007afb1) main_fs_bigclock_unlock_btn_pane_t1

0x8c7f,	// (0x00074d1d) area_fmrd2_info_pane_ParamLimits

0x8c7f,	// (0x00074d1d) area_fmrd2_info_pane

0x8c90,	// (0x00074d2e) area_fmrd2_visual_pane_ParamLimits

0x8c90,	// (0x00074d2e) area_fmrd2_visual_pane

0x8c9e,	// (0x00074d3c) fmrd2_indi_pane_ParamLimits

0x8c9e,	// (0x00074d3c) fmrd2_indi_pane

0x8cab,	// (0x00074d49) area_fmrd2_visual_pane_g1

0x8cb3,	// (0x00074d51) area_fmrd2_visual_pane_t1

0x8cc3,	// (0x00074d61) area_fmrd2_visual_pane_t2

0x8cd3,	// (0x00074d71) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0007bf99) area_fmrd2_visual_pane_t

0x8ce3,	// (0x00074d81) area_fmrd2_info_pane_g1

0x8ceb,	// (0x00074d89) area_fmrd2_info_pane_t1

0x8cfb,	// (0x00074d99) area_fmrd2_info_pane_t2

0x8d0b,	// (0x00074da9) area_fmrd2_info_pane_t3

0x8d1b,	// (0x00074db9) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0007bfa0) area_fmrd2_info_pane_t

0x8d29,	// (0x00074dc7) fmrd2_indi_pane_t1

0x8d39,	// (0x00074dd7) fmrd2_indi_pane_t2

0x8d49,	// (0x00074de7) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0007bfa9) fmrd2_indi_pane_t

0xe497,	// (0x0007a535) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x0007a535) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x0007a5e5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x0007a5e5) list_single_fs_bigclock_indicator_pane_t5

0x845d,	// (0x000744fb) aid_cell_bcale_month_pane_ParamLimits

0x845d,	// (0x000744fb) aid_cell_bcale_month_pane

0x847b,	// (0x00074519) bcale_month_pane_ParamLimits

0x847b,	// (0x00074519) bcale_month_pane

0x849f,	// (0x0007453d) bcale_preview_pane_ParamLimits

0x849f,	// (0x0007453d) bcale_preview_pane

0xecb4,	// (0x0007ad52) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd3,	// (0x0007ad71) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd3,	// (0x0007ad71) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0007bf2b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0007bf2b) list_single_fs_bigclock_pane_t

0xef0b,	// (0x0007afa9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0007bf94) main_fs_bigclock_unlock_btn_pane_g

0x8d59,	// (0x00074df7) aid_dia3_key_size_ParamLimits

0x8d59,	// (0x00074df7) aid_dia3_key_size

0x8d68,	// (0x00074e06) aid_dia3_listrow_size_ParamLimits

0x8d68,	// (0x00074e06) aid_dia3_listrow_size

0x8d7d,	// (0x00074e1b) dia3_keypad_fun_pane_ParamLimits

0x8d7d,	// (0x00074e1b) dia3_keypad_fun_pane

0x8d99,	// (0x00074e37) dia3_keypad_num_pane_ParamLimits

0x8d99,	// (0x00074e37) dia3_keypad_num_pane

0x8db4,	// (0x00074e52) dia3_listscroll_pane_ParamLimits

0x8db4,	// (0x00074e52) dia3_listscroll_pane

0x8dc7,	// (0x00074e65) dia3_numentry_pane_ParamLimits

0x8dc7,	// (0x00074e65) dia3_numentry_pane

0xef21,	// (0x0007afbf) dia3_list_pane

0xef2c,	// (0x0007afca) scroll_pane_cp12

0x9325,	// (0x000753c3) bg_dia3_numentry_pane

0x8ddb,	// (0x00074e79) dia3_numentry_pane_t1

0x8dea,	// (0x00074e88) cell_dia3_key_num_pane

0x8df2,	// (0x00074e90) cell_dia3_key0_fun_pane_ParamLimits

0x8df2,	// (0x00074e90) cell_dia3_key0_fun_pane

0x8e06,	// (0x00074ea4) cell_dia3_key1_fun_pane_ParamLimits

0x8e06,	// (0x00074ea4) cell_dia3_key1_fun_pane

0x8e1e,	// (0x00074ebc) dia3_listrow_pane

0xe1a6,	// (0x0007a244) bg_dia3_numentry_pane_g1

0x9325,	// (0x000753c3) bg_button_pane_cp21

0xef37,	// (0x0007afd5) cell_dia3_key_num_pane_t1

0xef45,	// (0x0007afe3) cell_dia3_key_num_pane_t2

0xef54,	// (0x0007aff2) cell_dia3_key_num_pane_t3

0xef63,	// (0x0007b001) cell_dia3_key_num_pane_t4

0x0003,

0x0021,	// (0x0006c0bf) cell_dia3_key_num_pane_t

0x9325,	// (0x000753c3) bg_button_pane_cp19

0x8e30,	// (0x00074ece) cell_dia3_key0_fun_pane_g1

0x9325,	// (0x000753c3) bg_button_pane_cp20

0x8e38,	// (0x00074ed6) cell_dia3_key1_fun_pane_g1

0x8e40,	// (0x00074ede) area_left_week_number_pane

0x8e4c,	// (0x00074eea) area_top_day_name_pane

0x8e5f,	// (0x00074efd) frame_month_view_pane

0xef72,	// (0x0007b010) grid_month_view_pane

0x8e72,	// (0x00074f10) cell_top_day_name_pane_ParamLimits

0x8e72,	// (0x00074f10) cell_top_day_name_pane

0x8e9f,	// (0x00074f3d) cell_area_left_week_number_pane_ParamLimits

0x8e9f,	// (0x00074f3d) cell_area_left_week_number_pane

0x8eb3,	// (0x00074f51) cell_month_view_pane_ParamLimits

0x8eb3,	// (0x00074f51) cell_month_view_pane

0xef80,	// (0x0007b01e) frm_month_g1

0x8ee0,	// (0x00074f7e) frm_month_g2

0x8ef3,	// (0x00074f91) frm_month_g3

0x8f06,	// (0x00074fa4) frm_month_g4

0x8f19,	// (0x00074fb7) frm_month_g5

0x8f2c,	// (0x00074fca) frm_month_g6

0x8f3f,	// (0x00074fdd) frm_month_g7

0xef8d,	// (0x0007b02b) frm_month_g8

0x8f52,	// (0x00074ff0) frm_month_g9

0x8f62,	// (0x00075000) frm_month_g10

0x8f72,	// (0x00075010) frm_month_g11

0x8f82,	// (0x00075020) frm_month_g12

0x8f94,	// (0x00075032) frm_month_g13

0x8fa6,	// (0x00075044) frm_month_g14

0x8fba,	// (0x00075058) frm_month_g15

0x8fce,	// (0x0007506c) frm_month_g16

0x000f,

0xff12,	// (0x0007bfb0) frm_month_g

0xef9a,	// (0x0007b038) cell_top_day_name_pane_t1

0x8fe2,	// (0x00075080) cell_area_left_week_number_pane_g1

0x8fee,	// (0x0007508c) cell_area_left_week_number_pane_t1

0xceb2,	// (0x00078f50) cell_month_view_pane_g1

0x9001,	// (0x0007509f) cell_month_view_pane_t1

0x9325,	// (0x000753c3) main_fps_pane

0xe752,	// (0x0007a7f0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x0007a7f0) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x0007a80c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x0007a80c) cmail_ddmenu_btn02_pane_cp2

0x8741,	// (0x000747df) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8741,	// (0x000747df) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0007bede) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0007bede) cmail_ddmenu_btn02_pane_g

0x8760,	// (0x000747fe) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8760,	// (0x000747fe) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0007bee3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0007bee3) cmail_ddmenu_btn02_pane_t

0x9014,	// (0x000750b2) fps_text_pane_ParamLimits

0x9014,	// (0x000750b2) fps_text_pane

0x902b,	// (0x000750c9) main_fps_pane_g1_ParamLimits

0x902b,	// (0x000750c9) main_fps_pane_g1

0x9045,	// (0x000750e3) wait_bar_pane_cp010_ParamLimits

0x9045,	// (0x000750e3) wait_bar_pane_cp010

0x9056,	// (0x000750f4) fps_text_pane_t1_ParamLimits

0x9056,	// (0x000750f4) fps_text_pane_t1

0xd75e,	// (0x000797fc) cam4_image_uncrop_pane_g1

0xd767,	// (0x00079805) cam4_image_uncrop_pane_g2

0x5a1d,	// (0x00071abb) cam4_image_uncrop_pane_g3

0x5a26,	// (0x00071ac4) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0007b99f) cam4_image_uncrop_pane_g

0x8e1e,	// (0x00074ebc) dia3_listrow_pane_ParamLimits

0x9325,	// (0x000753c3) main_phob2_pane

0x8292,	// (0x00074330) cell_tport_appsw_pane_cp02_ParamLimits

0x8292,	// (0x00074330) cell_tport_appsw_pane_cp02

0x82a6,	// (0x00074344) cell_tport_appsw_pane_cp03_ParamLimits

0x82a6,	// (0x00074344) cell_tport_appsw_pane_cp03

0x9325,	// (0x000753c3) phob2_contact_card_pane

0x9325,	// (0x000753c3) phob2_listscroll_pane

0xefad,	// (0x0007b04b) phob2_list_pane

0xefb5,	// (0x0007b053) scroll_pane_cp034

0x906e,	// (0x0007510c) phob2_cc_data_pane_ParamLimits

0x906e,	// (0x0007510c) phob2_cc_data_pane

0x908d,	// (0x0007512b) phob2_cc_listscroll_pane_ParamLimits

0x908d,	// (0x0007512b) phob2_cc_listscroll_pane

0x8bf2,	// (0x00074c90) list_double_large_graphic_phob2_pane_ParamLimits

0x8bf2,	// (0x00074c90) list_double_large_graphic_phob2_pane

0x90ab,	// (0x00075149) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90ab,	// (0x00075149) list_double_large_graphic_phob2_pane_g1

0x90c1,	// (0x0007515f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90c1,	// (0x0007515f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0007bfd1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0007bfd1) list_double_large_graphic_phob2_pane_g

0x90cd,	// (0x0007516b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90cd,	// (0x0007516b) list_double_large_graphic_phob2_pane_t1

0x90e3,	// (0x00075181) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x90e3,	// (0x00075181) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0007bfd6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0007bfd6) list_double_large_graphic_phob2_pane_t

0x9325,	// (0x000753c3) list_highlight_pane_cp024

0x90f8,	// (0x00075196) phob2_cc_button_pane

0x9100,	// (0x0007519e) phob2_cc_data_pane_g1_ParamLimits

0x9100,	// (0x0007519e) phob2_cc_data_pane_g1

0x9115,	// (0x000751b3) phob2_cc_data_pane_g2_ParamLimits

0x9115,	// (0x000751b3) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0007bfdb) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0007bfdb) phob2_cc_data_pane_g

0x9125,	// (0x000751c3) phob2_cc_data_pane_t1_ParamLimits

0x9125,	// (0x000751c3) phob2_cc_data_pane_t1

0x913d,	// (0x000751db) phob2_cc_data_pane_t2_ParamLimits

0x913d,	// (0x000751db) phob2_cc_data_pane_t2

0x9155,	// (0x000751f3) phob2_cc_data_pane_t3_ParamLimits

0x9155,	// (0x000751f3) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0007bfe0) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0007bfe0) phob2_cc_data_pane_t

0xefbd,	// (0x0007b05b) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0007b05b) phob2_cc_list_pane

0xd9be,	// (0x00079a5c) scroll_pane_cp035_ParamLimits

0xd9be,	// (0x00079a5c) scroll_pane_cp035

0xa4dd,	// (0x0007657b) bg_button_pane_cp033

0xefc9,	// (0x0007b067) phob2_cc_button_pane_g1

0xefd5,	// (0x0007b073) phob2_cc_button_pane_t1

0xefea,	// (0x0007b088) phob2_cc_button_pane_t2

0x0001,

0x0061,	// (0x0006c0ff) phob2_cc_button_pane_t

0x916d,	// (0x0007520b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x916d,	// (0x0007520b) list_double_large_graphic_phob2_cc_pane

0x9180,	// (0x0007521e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9180,	// (0x0007521e) list_double_large_graphic_phob2_cc_pane_g1

0x918c,	// (0x0007522a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x918c,	// (0x0007522a) list_double_large_graphic_phob2_cc_pane_g2

0x9198,	// (0x00075236) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9198,	// (0x00075236) list_double_large_graphic_phob2_cc_pane_g3

0x91a4,	// (0x00075242) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91a4,	// (0x00075242) list_double_large_graphic_phob2_cc_pane_g4

0x91b0,	// (0x0007524e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x91b0,	// (0x0007524e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0007bfe7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0007bfe7) list_double_large_graphic_phob2_cc_pane_g

0x91bc,	// (0x0007525a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x91bc,	// (0x0007525a) list_double_large_graphic_phob2_cc_pane_t1

0x91e5,	// (0x00075283) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x91e5,	// (0x00075283) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0007bff2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0007bff2) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0007b09a) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0007b09a) list_highlight_pane_cp025

0xa4dd,	// (0x0007657b) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0007b067) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0007b073) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0007b088) phob2_cc_button_pane_t2_ParamLimits

0x0061,	// (0x0006c0ff) phob2_cc_button_pane_t_ParamLimits

0x03ae,	// (0x0006c44c) popup_wgtman_window

0xd7eb,	// (0x00079889) scroll_pane_cp038

0x8b6b,	// (0x00074c09) wgtman_btn_pane_cp_01_ParamLimits

0x8b6b,	// (0x00074c09) wgtman_btn_pane_cp_01

0xf00a,	// (0x0007b0a8) wgtman_content_pane

0xf013,	// (0x0007b0b1) wgtman_heading_pane

0x9325,	// (0x000753c3) bg_heading_pane_cp02

0xf01c,	// (0x0007b0ba) wgtman_heading_pane_g1

0xf024,	// (0x0007b0c2) wgtman_heading_pane_t1

0xf032,	// (0x0007b0d0) scroll_pane_cp036

0xf03a,	// (0x0007b0d8) wgtman_list_pane

0xe632,	// (0x0007a6d0) wgtman_list_pane_t1_ParamLimits

0xe632,	// (0x0007a6d0) wgtman_list_pane_t1

0x9cd0,	// (0x00075d6e) cam4_grid_pane

0x66e5,	// (0x00072783) bg_button_pane_cp015_ParamLimits

0x66f9,	// (0x00072797) bg_button_pane_cp016_ParamLimits

0x670c,	// (0x000727aa) bg_button_pane_cp017_ParamLimits

0x6764,	// (0x00072802) popup_vitu2_query_window_g3_ParamLimits

0x6764,	// (0x00072802) popup_vitu2_query_window_g3

0x6821,	// (0x000728bf) popup_vitu2_query_window_t6_ParamLimits

0x6821,	// (0x000728bf) popup_vitu2_query_window_t6

0x684c,	// (0x000728ea) popup_vitu2_query_window_t7_ParamLimits

0x684c,	// (0x000728ea) popup_vitu2_query_window_t7

0xd75e,	// (0x000797fc) cam4_grid_pane_g1

0xd767,	// (0x00079805) cam4_grid_pane_g2

0xf042,	// (0x0007b0e0) cam4_grid_pane_g3

0xf04b,	// (0x0007b0e9) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0007bff7) cam4_grid_pane_g

0x13c1,	// (0x0006d45f) aid_placing_vt_slider_lsc_ParamLimits

0x16be,	// (0x0006d75c) vidtel_button_pane_ParamLimits

0x16be,	// (0x0006d75c) vidtel_button_pane

0x9325,	// (0x000753c3) bg_button_pane_cp034

0x920e,	// (0x000752ac) vidtel_button_pane_g1

0xf056,	// (0x0007b0f4) vidtel_button_pane_t1

0xd905,	// (0x000799a3) aid_size_vtel_slider_touch

0xd9be,	// (0x00079a5c) scroll_pane_cp039

0xe1ec,	// (0x0007a28a) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x0007a2a9) ncimui_query_pane_g1_ParamLimits

0xa4dd,	// (0x0007657b) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x0007a2ce) ncim_query_entry_pane_t1_ParamLimits

0xd9be,	// (0x00079a5c) scroll_pane_cp039_ParamLimits

0xb2a2,	// (0x00077340) navi_pane_bcale_mc_g1

0xb2aa,	// (0x00077348) navi_pane_bcale_mc_t1

0xe7b7,	// (0x0007a855) main_sp_fs_email_pane_g1

0xe7c3,	// (0x0007a861) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0007bd96) main_sp_fs_email_pane_g

0xea19,	// (0x0007aab7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea19,	// (0x0007aab7) list_single_cale_mrui_row_pane_g3

0x8788,	// (0x00074826) list_single_recal_day_pane_g5_event_pane

0xa9a3,	// (0x00076a41) list_single_recal_day_pane_g7

0xf06c,	// (0x0007b10a) list_recal_day_event_pane_cp01

0xf075,	// (0x0007b113) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0007b11b) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0007b123) list_recal_vselct_pane_cp01

0xd927,	// (0x000799c5) list_recal_day_event_pane_cp01_g1

0xa9ff,	// (0x00076a9d) list_recal_day_event_pane_cp01_t1

0xa9ab,	// (0x00076a49) list_single_recal_day_pane_t1_ParamLimits

0xa9bd,	// (0x00076a5b) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0007bef3) list_single_recal_day_pane_t_ParamLimits

0xa14d,	// (0x000761eb) bg_notes_pane_ParamLimits

0xa1fc,	// (0x0007629a) list_notes_pane_ParamLimits

0x06f2,	// (0x0006c790) scroll_pane_cp06_ParamLimits

0xa21e,	// (0x000762bc) main_notes_pane_ParamLimits

0x9325,	// (0x000753c3) main_welc_pane

0x9216,	// (0x000752b4) main_welc_body_pane_ParamLimits

0x9216,	// (0x000752b4) main_welc_body_pane

0x9233,	// (0x000752d1) main_welc_opti_pane_ParamLimits

0x9233,	// (0x000752d1) main_welc_opti_pane

0x9278,	// (0x00075316) main_welc_pane_t1_ParamLimits

0x9278,	// (0x00075316) main_welc_pane_t1

0x9296,	// (0x00075334) main_welc_body_row_pane_ParamLimits

0x9296,	// (0x00075334) main_welc_body_row_pane

0xedd2,	// (0x0007ae70) main_welc_opti_row_pane_ParamLimits

0xedd2,	// (0x0007ae70) main_welc_opti_row_pane

0xf08f,	// (0x0007b12d) main_welc_opti_row_pane_g1

0x92ab,	// (0x00075349) main_welc_opti_row_pane_t1

0xf097,	// (0x0007b135) main_welc_body_row_pane_t1

0xed8b,	// (0x0007ae29) popup_notif_wgt_heading_pane

0xeda5,	// (0x0007ae43) aid_size_list_notif_wgt_del_ParamLimits

0xedb2,	// (0x0007ae50) list_notif_wgt_row_pane_g1_ParamLimits

0xedbe,	// (0x0007ae5c) list_notif_wgt_row_pane_g2_ParamLimits

0xede0,	// (0x0007ae7e) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0007bf5a) list_notif_wgt_row_pane_g_ParamLimits

0xeded,	// (0x0007ae8b) list_notif_wgt_row_pane_t1_ParamLimits

0xee03,	// (0x0007aea1) list_notif_wgt_row_pane_t2_ParamLimits

0xee15,	// (0x0007aeb3) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0007bf61) list_notif_wgt_row_pane_t_ParamLimits

0x8c04,	// (0x00074ca2) listrow_wgtman_pane_g1_ParamLimits

0x8c11,	// (0x00074caf) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0007bf8a) listrow_wgtman_pane_g_ParamLimits

0x8c2f,	// (0x00074ccd) listrow_wgtman_pane_t1_ParamLimits

0x8c47,	// (0x00074ce5) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0007bf8f) listrow_wgtman_pane_t_ParamLimits

0x8c6d,	// (0x00074d0b) wait_bar_pane_cp09_ParamLimits

0x9325,	// (0x000753c3) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0007b144) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0007b14c) popup_notif_wgt_heading_pane_t1

0x9325,	// (0x000753c3) main_vids_pane

0x9325,	// (0x000753c3) vids_listscroll_pane

0x92ba,	// (0x00075358) scroll_pane_cp040

0x9325,	// (0x000753c3) vids_list_pane

0x92c5,	// (0x00075363) vids_list_double_pane_ParamLimits

0x92c5,	// (0x00075363) vids_list_double_pane

0x92d6,	// (0x00075374) vids_list_double_pane_g1

0x92df,	// (0x0007537d) vids_list_double_pane_t1

0x92ef,	// (0x0007538d) vids_list_double_pane_t2

0x0001,

0xff67,	// (0x0007c005) vids_list_double_pane_t

0x939d,	// (0x0007543b) main_ncimui_pane_ParamLimits

0x7457,	// (0x000734f5) main_ncimui_pane_g1_ParamLimits

0x7463,	// (0x00073501) main_ncimui_pane_g2_ParamLimits

0x7463,	// (0x00073501) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0007bc9b) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0007bc9b) main_ncimui_pane_g

0x924e,	// (0x000752ec) main_welc_pane_g1_ParamLimits

0x924e,	// (0x000752ec) main_welc_pane_g1

0x9263,	// (0x00075301) main_welc_pane_g2_ParamLimits

0x9263,	// (0x00075301) main_welc_pane_g2

0x0001,

0xff62,	// (0x0007c000) main_welc_pane_g_ParamLimits

0xff62,	// (0x0007c000) main_welc_pane_g

0xa14d,	// (0x000761eb) listscroll_mce_pane_ParamLimits

0xb3f7,	// (0x00077495) wait_bar_pane_cp10

0xc844,	// (0x000788e2) main_cale_day_pane_ParamLimits

0xc844,	// (0x000788e2) main_cale_week_pane_ParamLimits

0xa14d,	// (0x000761eb) main_messa_pane_ParamLimits

0x4d46,	// (0x00070de4) main_clock2_btn_pane_ParamLimits

0x4d46,	// (0x00070de4) main_clock2_btn_pane

0xd03a,	// (0x000790d8) main_clock2_btn_pane_cp01_ParamLimits

0xd03a,	// (0x000790d8) main_clock2_btn_pane_cp01

0xe9ea,	// (0x0007aa88) list_cale_mrui_pane_ParamLimits

0xee4b,	// (0x0007aee9) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0007bf68) main_cf0_pane_g

0x8e40,	// (0x00074ede) area_left_week_number_pane_ParamLimits

0x8e4c,	// (0x00074eea) area_top_day_name_pane_ParamLimits

0x8e5f,	// (0x00074efd) frame_month_view_pane_ParamLimits

0xef72,	// (0x0007b010) grid_month_view_pane_ParamLimits

0xef80,	// (0x0007b01e) frm_month_g1_ParamLimits

0x8ee0,	// (0x00074f7e) frm_month_g2_ParamLimits

0x8ef3,	// (0x00074f91) frm_month_g3_ParamLimits

0x8f06,	// (0x00074fa4) frm_month_g4_ParamLimits

0x8f19,	// (0x00074fb7) frm_month_g5_ParamLimits

0x8f2c,	// (0x00074fca) frm_month_g6_ParamLimits

0x8f3f,	// (0x00074fdd) frm_month_g7_ParamLimits

0xef8d,	// (0x0007b02b) frm_month_g8_ParamLimits

0x8f52,	// (0x00074ff0) frm_month_g9_ParamLimits

0x8f62,	// (0x00075000) frm_month_g10_ParamLimits

0x8f72,	// (0x00075010) frm_month_g11_ParamLimits

0x8f82,	// (0x00075020) frm_month_g12_ParamLimits

0x8f94,	// (0x00075032) frm_month_g13_ParamLimits

0x8fa6,	// (0x00075044) frm_month_g14_ParamLimits

0x8fba,	// (0x00075058) frm_month_g15_ParamLimits

0x8fce,	// (0x0007506c) frm_month_g16_ParamLimits

0xff12,	// (0x0007bfb0) frm_month_g_ParamLimits

0xef9a,	// (0x0007b038) cell_top_day_name_pane_t1_ParamLimits

0x8fe2,	// (0x00075080) cell_area_left_week_number_pane_g1_ParamLimits

0x8fee,	// (0x0007508c) cell_area_left_week_number_pane_t1_ParamLimits

0xceb2,	// (0x00078f50) cell_month_view_pane_g1_ParamLimits

0x9001,	// (0x0007509f) cell_month_view_pane_t1_ParamLimits

0xa145,	// (0x000761e3) main_clock2_btn_pane_g1

0xf0bc,	// (0x0007b15a) main_clock2_btn_pane_t1

0xa4dd,	// (0x0007657b) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x0007a855) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x0007a861) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0007bd96) main_sp_fs_email_pane_g_ParamLimits

0xeaf8,	// (0x0007ab96) list_recal_day_pane_ParamLimits

0xeb09,	// (0x0007aba7) mian_recal_day_pane_t1

0x7f08,	// (0x00073fa6) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f08,	// (0x00073fa6) list_single_dyc_row_text_pane_t4

0x7f51,	// (0x00073fef) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f51,	// (0x00073fef) list_single_dyc_row_text_pane_t5

0xa711,	// (0x000767af) list_single_dyc_row_text_pane_t6_ParamLimits

0xa711,	// (0x000767af) list_single_dyc_row_text_pane_t6

0x23aa,	// (0x0006e448) aid_mgn_list_cale_time_pane

0x939d,	// (0x0007543b) main_gallery2_pane_ParamLimits

0xd050,	// (0x000790ee) main_clock2_pane_cp01_t1

0xd05e,	// (0x000790fc) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0007b875) main_clock2_pane_cp01_t

0x0a79,	// (0x0006cb17) cale_week_scroll_pane_g16_ParamLimits

0x0a79,	// (0x0006cb17) cale_week_scroll_pane_g16

0xa413,	// (0x000764b1) vorec_slider_pane

0xf056,	// (0x0007b0f4) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
