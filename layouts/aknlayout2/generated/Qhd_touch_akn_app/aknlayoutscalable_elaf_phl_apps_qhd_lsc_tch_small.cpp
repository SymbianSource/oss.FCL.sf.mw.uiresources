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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003d20a };

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
0x318c,	// (0x00040396) Screen

0x3198,	// (0x000403a2) application_window

0x31d4,	// (0x000403de) area_bottom_pane_ParamLimits

0x31d4,	// (0x000403de) area_bottom_pane

0x320d,	// (0x00040417) area_top_pane_ParamLimits

0x320d,	// (0x00040417) area_top_pane

0x02d3,	// (0x0003d4dd) call_video_uplink_pane_ParamLimits

0x02d3,	// (0x0003d4dd) call_video_uplink_pane

0x3287,	// (0x00040491) main_pane_ParamLimits

0x3287,	// (0x00040491) main_pane

0x7099,	// (0x000442a3) context_pane

0x70ac,	// (0x000442b6) navi_pane

0x70d4,	// (0x000442de) popup_cale_events_window_ParamLimits

0x70d4,	// (0x000442de) popup_cale_events_window

0x70ec,	// (0x000442f6) popup_mup_playback_window

0x70f4,	// (0x000442fe) signal_pane

0x0a36,	// (0x0003dc40) main_browser_pane

0x151d,	// (0x0003e727) main_burst_pane

0x6d9e,	// (0x00043fa8) main_calc_pane

0x151d,	// (0x0003e727) main_cale_day_pane

0x0a36,	// (0x0003dc40) main_cale_month_pane

0x151d,	// (0x0003e727) main_cale_week_pane

0x151d,	// (0x0003e727) main_call_pane

0x0704,	// (0x0003d90e) main_call_poc_pane

0x151d,	// (0x0003e727) main_camera_pane

0x151d,	// (0x0003e727) main_chi_dic_pane

0x13a2,	// (0x0003e5ac) main_clock_pane

0x0704,	// (0x0003d90e) main_fmradio_pane

0x151d,	// (0x0003e727) main_graph_messa_pane

0x0704,	// (0x0003d90e) main_help_pane

0x0a36,	// (0x0003dc40) main_im_pane

0x095f,	// (0x0003db69) main_image_pane_ParamLimits

0x095f,	// (0x0003db69) main_image_pane

0x0704,	// (0x0003d90e) main_location2_pane

0x151d,	// (0x0003e727) main_location_pane

0x0704,	// (0x0003d90e) main_messa_pane

0x0704,	// (0x0003d90e) main_mp2_pane

0x151d,	// (0x0003e727) main_mp_pane

0x0704,	// (0x0003d90e) main_msg_pane

0x0704,	// (0x0003d90e) main_mup_eq_pane

0x0704,	// (0x0003d90e) main_mup_pane

0x151d,	// (0x0003e727) main_notes_pane

0x0704,	// (0x0003d90e) main_pec_pane

0x0704,	// (0x0003d90e) main_phob_pane

0x0704,	// (0x0003d90e) main_pinb_pane

0x0704,	// (0x0003d90e) main_postcard_pane

0x0704,	// (0x0003d90e) main_qdial_pane

0x151d,	// (0x0003e727) main_skin_pane

0x0704,	// (0x0003d90e) main_smil2_pane

0x151d,	// (0x0003e727) main_smil_pane

0x151d,	// (0x0003e727) main_video_pane

0x151d,	// (0x0003e727) main_video_tele_pane

0x095f,	// (0x0003db69) main_viewer_pane_ParamLimits

0x095f,	// (0x0003db69) main_viewer_pane

0x151d,	// (0x0003e727) main_vorec_pane

0x6e08,	// (0x00044012) popup_blid_sat_info_window_ParamLimits

0x6e08,	// (0x00044012) popup_blid_sat_info_window

0x6e6a,	// (0x00044074) popup_dyc_status_message_window_ParamLimits

0x6e6a,	// (0x00044074) popup_dyc_status_message_window

0x6e84,	// (0x0004408e) popup_grid_large_graphic_window_ParamLimits

0x6e84,	// (0x0004408e) popup_grid_large_graphic_window

0x6f5b,	// (0x00044165) popup_loc_request_window_ParamLimits

0x6f5b,	// (0x00044165) popup_loc_request_window

0x7071,	// (0x0004427b) popup_wml_address_window_ParamLimits

0x7071,	// (0x0004427b) popup_wml_address_window

0x6b9f,	// (0x00043da9) call_muted_g1

0x58f7,	// (0x00042b01) popup_call_audio_conf_window_ParamLimits

0x58f7,	// (0x00042b01) popup_call_audio_conf_window

0x6bb3,	// (0x00043dbd) popup_call_audio_first_window_ParamLimits

0x6bb3,	// (0x00043dbd) popup_call_audio_first_window

0x6c29,	// (0x00043e33) popup_call_audio_in_window_ParamLimits

0x6c29,	// (0x00043e33) popup_call_audio_in_window

0x6c65,	// (0x00043e6f) popup_call_audio_out_window_ParamLimits

0x6c65,	// (0x00043e6f) popup_call_audio_out_window

0x6c9f,	// (0x00043ea9) popup_call_audio_second_window_ParamLimits

0x6c9f,	// (0x00043ea9) popup_call_audio_second_window

0x6cf5,	// (0x00043eff) popup_call_audio_wait_window_ParamLimits

0x6cf5,	// (0x00043eff) popup_call_audio_wait_window

0x6d2a,	// (0x00043f34) popup_number_entry_window_ParamLimits

0x6d2a,	// (0x00043f34) popup_number_entry_window

0x02f1,	// (0x0003d4fb) bg_popup_call_pane_cp05_ParamLimits

0x02f1,	// (0x0003d4fb) bg_popup_call_pane_cp05

0x0311,	// (0x0003d51b) popup_number_entry_window_t1

0x0324,	// (0x0003d52e) popup_number_entry_window_t2

0x0336,	// (0x0003d540) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0004c305) popup_number_entry_window_t

0x0348,	// (0x0003d552) text_title_cp2

0x035b,	// (0x0003d565) bg_popup_call_pane_cp_ParamLimits

0x035b,	// (0x0003d565) bg_popup_call_pane_cp

0x0369,	// (0x0003d573) call_thumbnail_pane

0x0371,	// (0x0003d57b) popup_call_audio_in_window_g1_ParamLimits

0x0371,	// (0x0003d57b) popup_call_audio_in_window_g1

0x037d,	// (0x0003d587) popup_call_audio_in_window_g2_ParamLimits

0x037d,	// (0x0003d587) popup_call_audio_in_window_g2

0x0389,	// (0x0003d593) popup_call_audio_in_window_g3_ParamLimits

0x0389,	// (0x0003d593) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0004c30e) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0004c30e) popup_call_audio_in_window_g

0x0395,	// (0x0003d59f) popup_call_audio_in_window_t1_ParamLimits

0x0395,	// (0x0003d59f) popup_call_audio_in_window_t1

0x03b1,	// (0x0003d5bb) popup_call_audio_in_window_t2_ParamLimits

0x03b1,	// (0x0003d5bb) popup_call_audio_in_window_t2

0x03cd,	// (0x0003d5d7) popup_call_audio_in_window_t3_ParamLimits

0x03cd,	// (0x0003d5d7) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0004c315) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0004c315) popup_call_audio_in_window_t

0x035b,	// (0x0003d565) bg_popup_call_pane_cp01_ParamLimits

0x035b,	// (0x0003d565) bg_popup_call_pane_cp01

0x0369,	// (0x0003d573) call_thumbnail_pane_cp02

0x03e0,	// (0x0003d5ea) call_type_pane_cp022

0x03e8,	// (0x0003d5f2) popup_call_audio_out_window_g1_ParamLimits

0x03e8,	// (0x0003d5f2) popup_call_audio_out_window_g1

0x03fa,	// (0x0003d604) popup_call_audio_out_window_g2_ParamLimits

0x03fa,	// (0x0003d604) popup_call_audio_out_window_g2

0x0406,	// (0x0003d610) popup_call_audio_out_window_g3_ParamLimits

0x0406,	// (0x0003d610) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0004c31c) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0004c31c) popup_call_audio_out_window_g

0x0418,	// (0x0003d622) popup_call_audio_out_window_t1_ParamLimits

0x0418,	// (0x0003d622) popup_call_audio_out_window_t1

0x0430,	// (0x0003d63a) popup_call_audio_out_window_t2_ParamLimits

0x0430,	// (0x0003d63a) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0004c323) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0004c323) popup_call_audio_out_window_t

0x0445,	// (0x0003d64f) bg_popup_call_pane_ParamLimits

0x0445,	// (0x0003d64f) bg_popup_call_pane

0x3442,	// (0x0004064c) call_thumbnail_pane_cp_ParamLimits

0x3442,	// (0x0004064c) call_thumbnail_pane_cp

0x04c9,	// (0x0003d6d3) call_type_pane_cp01_ParamLimits

0x04c9,	// (0x0003d6d3) call_type_pane_cp01

0x050d,	// (0x0003d717) popup_call_audio_first_window_g1_ParamLimits

0x050d,	// (0x0003d717) popup_call_audio_first_window_g1

0x0559,	// (0x0003d763) popup_call_audio_first_window_g2_ParamLimits

0x0559,	// (0x0003d763) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0004c328) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0004c328) popup_call_audio_first_window_g

0x059d,	// (0x0003d7a7) popup_call_audio_first_window_t1_ParamLimits

0x059d,	// (0x0003d7a7) popup_call_audio_first_window_t1

0x0649,	// (0x0003d853) popup_call_audio_first_window_t4_ParamLimits

0x0649,	// (0x0003d853) popup_call_audio_first_window_t4

0x06d5,	// (0x0003d8df) popup_call_audio_first_window_t5_ParamLimits

0x06d5,	// (0x0003d8df) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0004c32d) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0004c32d) popup_call_audio_first_window_t

0x0704,	// (0x0003d90e) bg_popup_call_pane_cp02

0x070e,	// (0x0003d918) call_type_pane_cp023

0x0716,	// (0x0003d920) popup_call_audio_wait_window_g1

0x071e,	// (0x0003d928) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0004c334) popup_call_audio_wait_window_g

0x0726,	// (0x0003d930) popup_call_audio_wait_window_t3

0x0734,	// (0x0003d93e) bg_popup_call_pane_cp03_ParamLimits

0x0734,	// (0x0003d93e) bg_popup_call_pane_cp03

0x0794,	// (0x0003d99e) call_thumbnail_pane_cp011_ParamLimits

0x0794,	// (0x0003d99e) call_thumbnail_pane_cp011

0x07a0,	// (0x0003d9aa) call_type_pane_cp034_ParamLimits

0x07a0,	// (0x0003d9aa) call_type_pane_cp034

0x07dc,	// (0x0003d9e6) popup_call_audio_second_window_g1_ParamLimits

0x07dc,	// (0x0003d9e6) popup_call_audio_second_window_g1

0x0818,	// (0x0003da22) popup_call_audio_second_window_g2_ParamLimits

0x0818,	// (0x0003da22) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0004c339) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0004c339) popup_call_audio_second_window_g

0x0854,	// (0x0003da5e) popup_call_audio_second_window_t1_ParamLimits

0x0854,	// (0x0003da5e) popup_call_audio_second_window_t1

0x08d5,	// (0x0003dadf) popup_call_audio_second_window_t2_ParamLimits

0x08d5,	// (0x0003dadf) popup_call_audio_second_window_t2

0x090b,	// (0x0003db15) popup_call_audio_second_window_t3_ParamLimits

0x090b,	// (0x0003db15) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0004c33e) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0004c33e) popup_call_audio_second_window_t

0x0704,	// (0x0003d90e) bg_popup_call_pane_cp04

0x0941,	// (0x0003db4b) list_conf_pane

0x0949,	// (0x0003db53) popup_call_audio_conf_window_t1

0x0957,	// (0x0003db61) call_thumbnail_pane_g1

0x095f,	// (0x0003db69) bg_pinb_pane_ParamLimits

0x095f,	// (0x0003db69) bg_pinb_pane

0x096d,	// (0x0003db77) find_pinb_pane

0x0976,	// (0x0003db80) listscroll_pinb_pane_ParamLimits

0x0976,	// (0x0003db80) listscroll_pinb_pane

0x0985,	// (0x0003db8f) pinb_bg_pane_g1

0x3466,	// (0x00040670) pinb_bg_pane_g2

0x3472,	// (0x0004067c) pinb_bg_pane_g3

0x347e,	// (0x00040688) pinb_bg_pane_g4

0x348a,	// (0x00040694) pinb_bg_pane_g5

0x3496,	// (0x000406a0) pinb_bg_pane_g6

0x34a1,	// (0x000406ab) pinb_bg_pane_g7

0x34ac,	// (0x000406b6) pinb_bg_pane_g8

0x34b7,	// (0x000406c1) pinb_bg_pane_g9

0x34c1,	// (0x000406cb) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0004c345) pinb_bg_pane_g

0x34de,	// (0x000406e8) grid_pinb_pane

0x34e7,	// (0x000406f1) list_pinb_pane

0x34f0,	// (0x000406fa) scroll_pane_cp01_ParamLimits

0x34f0,	// (0x000406fa) scroll_pane_cp01

0x098f,	// (0x0003db99) find_pinb_pane_g1_ParamLimits

0x098f,	// (0x0003db99) find_pinb_pane_g1

0x09a7,	// (0x0003dbb1) find_pinb_pane_t1

0x09b9,	// (0x0003dbc3) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0004c35f) find_pinb_pane_t

0x09ce,	// (0x0003dbd8) input_focus_pane_cp01_ParamLimits

0x09ce,	// (0x0003dbd8) input_focus_pane_cp01

0x3502,	// (0x0004070c) cell_pinb_pane_ParamLimits

0x3502,	// (0x0004070c) cell_pinb_pane

0x352b,	// (0x00040735) cell_pinb_pane_g1_ParamLimits

0x352b,	// (0x00040735) cell_pinb_pane_g1

0x353b,	// (0x00040745) cell_pinb_pane_g2_ParamLimits

0x353b,	// (0x00040745) cell_pinb_pane_g2

0x09da,	// (0x0003dbe4) cell_pinb_pane_g3_ParamLimits

0x09da,	// (0x0003dbe4) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0004c364) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0004c364) cell_pinb_pane_g

0x0704,	// (0x0003d90e) grid_highlight_pane_cp01

0x3547,	// (0x00040751) list_pinb_item_pane_ParamLimits

0x3547,	// (0x00040751) list_pinb_item_pane

0x0704,	// (0x0003d90e) list_highlight_pane_cp02

0x3559,	// (0x00040763) list_pinb_item_pane_g1_ParamLimits

0x3559,	// (0x00040763) list_pinb_item_pane_g1

0x09e6,	// (0x0003dbf0) list_pinb_item_pane_g2_ParamLimits

0x09e6,	// (0x0003dbf0) list_pinb_item_pane_g2

0x3566,	// (0x00040770) list_pinb_item_pane_g3_ParamLimits

0x3566,	// (0x00040770) list_pinb_item_pane_g3

0x3577,	// (0x00040781) list_pinb_item_pane_g4_ParamLimits

0x3577,	// (0x00040781) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0004c36b) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0004c36b) list_pinb_item_pane_g

0x3583,	// (0x0004078d) list_pinb_item_pane_t1_ParamLimits

0x3583,	// (0x0004078d) list_pinb_item_pane_t1

0x35b8,	// (0x000407c2) calc_display_pane

0x35de,	// (0x000407e8) calc_paper_pane

0x35ff,	// (0x00040809) grid_calc_pane

0x0704,	// (0x0003d90e) bg_list_pane_cp01

0x3627,	// (0x00040831) clock_g1

0x362f,	// (0x00040839) clock_g2

0x0001,

0xf16a,	// (0x0004c374) clock_g

0x3637,	// (0x00040841) clock_t1_ParamLimits

0x3637,	// (0x00040841) clock_t1

0x364c,	// (0x00040856) clock_t2_ParamLimits

0x364c,	// (0x00040856) clock_t2

0x365e,	// (0x00040868) clock_t3_ParamLimits

0x365e,	// (0x00040868) clock_t3

0x3670,	// (0x0004087a) clock_t4_ParamLimits

0x3670,	// (0x0004087a) clock_t4

0x3682,	// (0x0004088c) clock_t5_ParamLimits

0x3682,	// (0x0004088c) clock_t5

0x3697,	// (0x000408a1) clock_t6_ParamLimits

0x3697,	// (0x000408a1) clock_t6

0x36a9,	// (0x000408b3) clock_t7_ParamLimits

0x36a9,	// (0x000408b3) clock_t7

0x36bb,	// (0x000408c5) clock_t8_ParamLimits

0x36bb,	// (0x000408c5) clock_t8

0x36cf,	// (0x000408d9) clock_t9_ParamLimits

0x36cf,	// (0x000408d9) clock_t9

0x0008,

0xf16f,	// (0x0004c379) clock_t_ParamLimits

0xf16f,	// (0x0004c379) clock_t

0x09f2,	// (0x0003dbfc) popup_clock_analogue_window_cp02

0x09f2,	// (0x0003dbfc) popup_clock_digital_window_cp01

0x09fa,	// (0x0003dc04) listscroll_help_pane

0x0704,	// (0x0003d90e) phob_pre_status_pane

0x0a04,	// (0x0003dc0e) grid_qdial_pane

0x0704,	// (0x0003d90e) listscroll_mce_pane

0x0a0e,	// (0x0003dc18) bg_notes_pane

0x0a18,	// (0x0003dc22) list_notes_pane

0x36e3,	// (0x000408ed) scroll_pane_cp06

0x0a22,	// (0x0003dc2c) bg_calc_paper_pane

0xc070,	// (0x0004927a) list_calc_pane

0x0a36,	// (0x0003dc40) bg_calc_display_pane

0x36ee,	// (0x000408f8) calc_display_pane_t1

0x3700,	// (0x0004090a) calc_display_pane_t2

0xc08a,	// (0x00049294) calc_display_pane_t3

0x0002,

0xf182,	// (0x0004c38c) calc_display_pane_t

0x3712,	// (0x0004091c) cell_calc_pane_ParamLimits

0x3712,	// (0x0004091c) cell_calc_pane

0x0a42,	// (0x0003dc4c) bg_calc_paper_pane_g1

0x0a4e,	// (0x0003dc58) bg_calc_paper_pane_g2

0x0a5a,	// (0x0003dc64) bg_calc_paper_pane_g3

0x0a66,	// (0x0003dc70) bg_calc_paper_pane_g4

0x0a72,	// (0x0003dc7c) bg_calc_paper_pane_g5

0x3747,	// (0x00040951) bg_calc_paper_pane_g6

0x3756,	// (0x00040960) bg_calc_paper_pane_g7

0x3765,	// (0x0004096f) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0004c393) bg_calc_paper_pane_g

0x3778,	// (0x00040982) calc_bg_paper_pane_g9

0x378b,	// (0x00040995) list_calc_item_pane_ParamLimits

0x378b,	// (0x00040995) list_calc_item_pane

0x0a7e,	// (0x0003dc88) list_calc_item_pane_g1

0xc09c,	// (0x000492a6) list_calc_item_pane_t1_ParamLimits

0xc09c,	// (0x000492a6) list_calc_item_pane_t1

0x379e,	// (0x000409a8) list_calc_item_pane_t2_ParamLimits

0x379e,	// (0x000409a8) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0004c3a4) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0004c3a4) list_calc_item_pane_t

0x0a8b,	// (0x0003dc95) cell_calc_pane_g1

0x0a95,	// (0x0003dc9f) grid_highlight_pane_cp02

0x37d2,	// (0x000409dc) bg_calc_display_pane_g1

0x37db,	// (0x000409e5) bg_calc_display_pane_g2

0x37e5,	// (0x000409ef) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0004c3ae) bg_calc_display_pane_g

0x37ee,	// (0x000409f8) cell_qdial_pane_ParamLimits

0x37ee,	// (0x000409f8) cell_qdial_pane

0x3802,	// (0x00040a0c) cell_qdial_pane_g1_ParamLimits

0x3802,	// (0x00040a0c) cell_qdial_pane_g1

0x3818,	// (0x00040a22) cell_qdial_pane_g2_ParamLimits

0x3818,	// (0x00040a22) cell_qdial_pane_g2

0x0ab7,	// (0x0003dcc1) cell_qdial_pane_g3_ParamLimits

0x0ab7,	// (0x0003dcc1) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0004c3b5) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0004c3b5) cell_qdial_pane_g

0x383f,	// (0x00040a49) cell_qdial_pane_t1_ParamLimits

0x383f,	// (0x00040a49) cell_qdial_pane_t1

0x3857,	// (0x00040a61) cell_qdial_pane_t2_ParamLimits

0x3857,	// (0x00040a61) cell_qdial_pane_t2

0x386a,	// (0x00040a74) cell_qdial_pane_t3_ParamLimits

0x386a,	// (0x00040a74) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0004c3be) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0004c3be) cell_qdial_pane_t

0x0704,	// (0x0003d90e) grid_highlight_pane_cp04

0x0ac3,	// (0x0003dccd) thumbnail_qdial_pane_ParamLimits

0x0ac3,	// (0x0003dccd) thumbnail_qdial_pane

0x0b1f,	// (0x0003dd29) list_help_pane

0x0b28,	// (0x0003dd32) scroll_pane_cp02

0x387d,	// (0x00040a87) help_list_pane_t1_ParamLimits

0x387d,	// (0x00040a87) help_list_pane_t1

0xc0ae,	// (0x000492b8) bg_notes_pane_g2

0xc0b6,	// (0x000492c0) bg_notes_pane_g3

0xc0be,	// (0x000492c8) notes_bg_pane_g1

0xc0c6,	// (0x000492d0) notes_bg_pane_g4

0xc0ce,	// (0x000492d8) notes_bg_pane_g5

0xc0d6,	// (0x000492e0) notes_bg_pane_g6

0xc0de,	// (0x000492e8) notes_bg_pane_g7

0xc0e6,	// (0x000492f0) notes_bg_pane_g8

0xc0ee,	// (0x000492f8) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0004c3dc) notes_bg_pane_g

0x389a,	// (0x00040aa4) list_notes_text_pane_ParamLimits

0x389a,	// (0x00040aa4) list_notes_text_pane

0x0b31,	// (0x0003dd3b) list_notes_text_pane_g1

0x276c,	// (0x0003f976) list_notes_text_pane_t1

0x0a36,	// (0x0003dc40) listscroll_cale_week_pane

0x38cc,	// (0x00040ad6) bg_cale_heading_pane

0x0b4b,	// (0x0003dd55) bg_cale_pane_cp01

0x38e0,	// (0x00040aea) cale_week_corner_pane

0x38f6,	// (0x00040b00) cale_week_day_heading_pane

0x390a,	// (0x00040b14) cale_week_scroll_pane_g1

0x391b,	// (0x00040b25) cale_week_scroll_pane_g2

0x392c,	// (0x00040b36) cale_week_scroll_pane_g3

0x393d,	// (0x00040b47) cale_week_scroll_pane_g4

0x394e,	// (0x00040b58) cale_week_scroll_pane_g5

0x395f,	// (0x00040b69) cale_week_scroll_pane_g6

0x3970,	// (0x00040b7a) cale_week_scroll_pane_g7

0x3981,	// (0x00040b8b) cale_week_scroll_pane_g8

0x3992,	// (0x00040b9c) cale_week_scroll_pane_g9

0x39a3,	// (0x00040bad) cale_week_scroll_pane_g10

0x39b4,	// (0x00040bbe) cale_week_scroll_pane_g11

0x39c5,	// (0x00040bcf) cale_week_scroll_pane_g12

0x39d6,	// (0x00040be0) cale_week_scroll_pane_g13

0x39e7,	// (0x00040bf1) cale_week_scroll_pane_g14

0x39f8,	// (0x00040c02) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0004c3eb) cale_week_scroll_pane_g

0x3a09,	// (0x00040c13) cale_week_time_pane

0x3a1a,	// (0x00040c24) grid_cale_week_pane

0x3a2d,	// (0x00040c37) scroll_pane_cp08

0x3a47,	// (0x00040c51) cell_cale_week_pane_ParamLimits

0x3a47,	// (0x00040c51) cell_cale_week_pane

0x3a83,	// (0x00040c8d) cale_week_day_heading_pane_t1

0x3ab0,	// (0x00040cba) cale_week_day_heading_pane_t2

0x3add,	// (0x00040ce7) cale_week_day_heading_pane_t3

0x3b0a,	// (0x00040d14) cale_week_day_heading_pane_t4

0x3b37,	// (0x00040d41) cale_week_day_heading_pane_t5

0x3b64,	// (0x00040d6e) cale_week_day_heading_pane_t6

0x3b91,	// (0x00040d9b) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0004c40a) cale_week_day_heading_pane_t

0x0b76,	// (0x0003dd80) bg_cale_side_pane

0x3bbe,	// (0x00040dc8) cale_week_time_pane_t1

0x3bd6,	// (0x00040de0) cale_week_time_pane_t2

0x3bee,	// (0x00040df8) cale_week_time_pane_t3

0x3c06,	// (0x00040e10) cale_week_time_pane_t4

0x3c1e,	// (0x00040e28) cale_week_time_pane_t5

0x3c36,	// (0x00040e40) cale_week_time_pane_t6

0x3c4e,	// (0x00040e58) cale_week_time_pane_t7

0x3c66,	// (0x00040e70) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0004c419) cale_week_time_pane_t

0x3c7e,	// (0x00040e88) cell_cale_week_pane_g2

0x3c97,	// (0x00040ea1) cell_cale_week_pane_g3_ParamLimits

0x3c97,	// (0x00040ea1) cell_cale_week_pane_g3

0x0b84,	// (0x0003dd8e) grid_highlight_pane_cp07

0x0b8c,	// (0x0003dd96) listscroll_gms_pane

0x0b96,	// (0x0003dda0) grid_gms_pane

0x0b9f,	// (0x0003dda9) listscroll_gms_pane_g1

0x0ba7,	// (0x0003ddb1) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0004c42a) listscroll_gms_pane_g

0x3caf,	// (0x00040eb9) scroll_pane_cp010

0x3cba,	// (0x00040ec4) cell_gms_pane_ParamLimits

0x3cba,	// (0x00040ec4) cell_gms_pane

0x3ccd,	// (0x00040ed7) cell_gms_pane_g1

0x0baf,	// (0x0003ddb9) cell_gms_pane_g2

0x0bb7,	// (0x0003ddc1) cell_gms_pane_g3

0x0bc0,	// (0x0003ddca) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0004c42f) cell_gms_pane_g

0x0bc9,	// (0x0003ddd3) grid_highlight_pane_cp09

0x6b29,	// (0x00043d33) phob_pre_status_pane_g1

0x6b31,	// (0x00043d3b) phob_pre_status_pane_g2

0x6b39,	// (0x00043d43) phob_pre_status_pane_g3

0x6b41,	// (0x00043d4b) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0004c81e) phob_pre_status_pane_g

0x6b51,	// (0x00043d5b) phob_pre_status_pane_t1

0x6b5f,	// (0x00043d69) phob_pre_status_pane_t2

0x6b6f,	// (0x00043d79) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0004c829) phob_pre_status_pane_t

0x0704,	// (0x0003d90e) bg_list_pane_cp05

0x3cdd,	// (0x00040ee7) grid_vorec_pane

0xc0f6,	// (0x00049300) vorec_t1

0xc104,	// (0x0004930e) vorec_t2

0xc112,	// (0x0004931c) vorec_t3

0xc120,	// (0x0004932a) vorec_t4

0xc12e,	// (0x00049338) vorec_t5

0xc13c,	// (0x00049346) vorec_t6

0x0006,

0xf22e,	// (0x0004c438) vorec_t

0xc158,	// (0x00049362) wait_bar_pane_cp01

0x3ce5,	// (0x00040eef) cell_vorec_pane_ParamLimits

0x3ce5,	// (0x00040eef) cell_vorec_pane

0x0bd1,	// (0x0003dddb) cell_vorec_pane_g1

0x0704,	// (0x0003d90e) grid_highlight_pane_cp05

0x3d10,	// (0x00040f1a) cams_zoom_pane

0x3d1f,	// (0x00040f29) image_vga_pane

0x3d39,	// (0x00040f43) main_camera_pane_g1

0x3d4b,	// (0x00040f55) main_camera_pane_g2

0x3d5b,	// (0x00040f65) main_camera_pane_g3

0x3d6b,	// (0x00040f75) main_camera_pane_g4

0x3d7b,	// (0x00040f85) main_camera_pane_g5

0x3d8b,	// (0x00040f95) main_camera_pane_g6

0x3d9d,	// (0x00040fa7) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0004c447) main_camera_pane_g

0x3dad,	// (0x00040fb7) main_camera_pane_t1

0x3dc3,	// (0x00040fcd) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0004c458) main_camera_pane_t

0x3dfd,	// (0x00041007) cams_zoom_pane_cp_ParamLimits

0x3dfd,	// (0x00041007) cams_zoom_pane_cp

0x3e25,	// (0x0004102f) image_cif_pane_ParamLimits

0x3e25,	// (0x0004102f) image_cif_pane

0x3e60,	// (0x0004106a) image_subqcif_pane

0x3e68,	// (0x00041072) main_video_pane_g1_ParamLimits

0x3e68,	// (0x00041072) main_video_pane_g1

0x3e8c,	// (0x00041096) main_video_pane_g2_ParamLimits

0x3e8c,	// (0x00041096) main_video_pane_g2

0x3ec0,	// (0x000410ca) main_video_pane_g3_ParamLimits

0x3ec0,	// (0x000410ca) main_video_pane_g3

0x3eee,	// (0x000410f8) main_video_pane_g4_ParamLimits

0x3eee,	// (0x000410f8) main_video_pane_g4

0x3f1c,	// (0x00041126) main_video_pane_g5_ParamLimits

0x3f1c,	// (0x00041126) main_video_pane_g5

0x0be7,	// (0x0003ddf1) main_video_pane_g6_ParamLimits

0x0be7,	// (0x0003ddf1) main_video_pane_g6

0x0006,

0xf253,	// (0x0004c45d) main_video_pane_g_ParamLimits

0xf253,	// (0x0004c45d) main_video_pane_g

0x3f49,	// (0x00041153) main_video_pane_t1_ParamLimits

0x3f49,	// (0x00041153) main_video_pane_t1

0x0c01,	// (0x0003de0b) cams_zoom_pane_g1

0x0c0a,	// (0x0003de14) cams_zoom_pane_g2

0x0c13,	// (0x0003de1d) cams_zoom_pane_g3

0x0c1c,	// (0x0003de26) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0004c46c) cams_zoom_pane_g

0x3fa6,	// (0x000411b0) grid_cams_pane

0x3fc0,	// (0x000411ca) linegrid_cams_pane

0x3fd4,	// (0x000411de) cell_cams_pane_ParamLimits

0x3fd4,	// (0x000411de) cell_cams_pane

0x0c25,	// (0x0003de2f) cams_burst_image_pane

0x0c2d,	// (0x0003de37) cell_cams_pane_g1

0x0704,	// (0x0003d90e) grid_highlight_pane_cp03

0x0a8b,	// (0x0003dc95) mp_bg_pane_g1

0x0704,	// (0x0003d90e) bg_list_pane_cp03

0x6a5e,	// (0x00043c68) bg_mp_pane

0x6a66,	// (0x00043c70) grid_mp_pane

0x6a6e,	// (0x00043c78) media_player_g1

0x6a76,	// (0x00043c80) media_player_t1

0x6a84,	// (0x00043c8e) media_player_t2

0x6a92,	// (0x00043c9c) media_player_t3

0x6aa0,	// (0x00043caa) media_player_t4

0x6aae,	// (0x00043cb8) media_player_t5

0x6abc,	// (0x00043cc6) media_player_t6

0x6aca,	// (0x00043cd4) media_player_t7

0x0006,

0xf5fe,	// (0x0004c808) media_player_t

0x6ad8,	// (0x00043ce2) wait_bar_pane_cp02

0xf5e3,	// (0x0004c7ed) main_usb_pane_t

0x6b20,	// (0x00043d2a) cell_mp_pane

0x0a8b,	// (0x0003dc95) cell_mp_pane_g1

0x0704,	// (0x0003d90e) grid_highlight_pane_cp06

0x0c35,	// (0x0003de3f) grid_skin_colour_pane

0x0c3d,	// (0x0003de47) list_highlight_pane_cp03

0x3ff4,	// (0x000411fe) skin_g1

0x0c45,	// (0x0003de4f) skin_t1

0x0c54,	// (0x0003de5e) skin_t2

0x0001,

0xf297,	// (0x0004c4a1) skin_t

0x3ffc,	// (0x00041206) cell_skin_colour_pane_ParamLimits

0x3ffc,	// (0x00041206) cell_skin_colour_pane

0x0c62,	// (0x0003de6c) cell_skin_colour_pane_g1

0x4058,	// (0x00041262) call_video_g1_ParamLimits

0x4058,	// (0x00041262) call_video_g1

0x4074,	// (0x0004127e) call_video_g2_ParamLimits

0x4074,	// (0x0004127e) call_video_g2

0x0001,

0xf29c,	// (0x0004c4a6) call_video_g_ParamLimits

0xf29c,	// (0x0004c4a6) call_video_g

0x40aa,	// (0x000412b4) call_video_uplink_pane_cp1_ParamLimits

0x40aa,	// (0x000412b4) call_video_uplink_pane_cp1

0x0c7c,	// (0x0003de86) call_video_uplink_pane_cp2

0x4128,	// (0x00041332) video_down_crop_pane_ParamLimits

0x4128,	// (0x00041332) video_down_crop_pane

0x41fc,	// (0x00041406) video_down_pane_ParamLimits

0x41fc,	// (0x00041406) video_down_pane

0x0c84,	// (0x0003de8e) video_down_subqcif_pane_ParamLimits

0x0c84,	// (0x0003de8e) video_down_subqcif_pane

0x0c9c,	// (0x0003dea6) video_down_subqcif_pane_cp_ParamLimits

0x0c9c,	// (0x0003dea6) video_down_subqcif_pane_cp

0x0cc0,	// (0x0003deca) im_reading_pane_ParamLimits

0x0cc0,	// (0x0003deca) im_reading_pane

0x42cd,	// (0x000414d7) im_writing_pane_ParamLimits

0x42cd,	// (0x000414d7) im_writing_pane

0x42e3,	// (0x000414ed) im_reading_pane_t1

0x0cda,	// (0x0003dee4) list_im_pane

0x0ceb,	// (0x0003def5) scroll_pane_cp07

0x431c,	// (0x00041526) im_writing_pane_t1_ParamLimits

0x431c,	// (0x00041526) im_writing_pane_t1

0x0d04,	// (0x0003df0e) im_writing_pane_t2_ParamLimits

0x0d04,	// (0x0003df0e) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0004c4b0) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0004c4b0) im_writing_pane_t

0x0704,	// (0x0003d90e) input_focus_pane_cp04

0x0704,	// (0x0003d90e) input_focus_pane_cp05

0x4331,	// (0x0004153b) list_im_single_pane_ParamLimits

0x4331,	// (0x0004153b) list_im_single_pane

0x4345,	// (0x0004154f) list_single_im_pane_t1

0x6ae0,	// (0x00043cea) blid_accuracy_pane

0x6ae8,	// (0x00043cf2) blid_compass_pane

0x6af2,	// (0x00043cfc) main_location_t1

0x6b02,	// (0x00043d0c) main_location_t2

0x6b12,	// (0x00043d1c) main_location_t3

0x0002,

0xf60d,	// (0x0004c817) main_location_t

0x0704,	// (0x0003d90e) aid_levels_location

0x0a8b,	// (0x0003dc95) blid_accuracy_pane_g1

0x0a8b,	// (0x0003dc95) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0004c512) blid_accuracy_pane_g

0x0d4c,	// (0x0003df56) wml_content_pane

0x0d8a,	// (0x0003df94) wml_button_pane_ParamLimits

0x0d8a,	// (0x0003df94) wml_button_pane

0x4354,	// (0x0004155e) wml_list_single_large_pane_ParamLimits

0x4354,	// (0x0004155e) wml_list_single_large_pane

0x4369,	// (0x00041573) wml_list_single_medium_pane_ParamLimits

0x4369,	// (0x00041573) wml_list_single_medium_pane

0x437f,	// (0x00041589) wml_list_single_small_pane_ParamLimits

0x437f,	// (0x00041589) wml_list_single_small_pane

0x0d9e,	// (0x0003dfa8) wml_selection_box_pane_ParamLimits

0x0d9e,	// (0x0003dfa8) wml_selection_box_pane

0x0db1,	// (0x0003dfbb) wml_list_single_pane_t1

0x0dc0,	// (0x0003dfca) wml_list_single_medium_pane_t1

0x0dcf,	// (0x0003dfd9) wml_list_single_large_pane_t1

0x0dde,	// (0x0003dfe8) input_focus_pane_cp02_ParamLimits

0x0dde,	// (0x0003dfe8) input_focus_pane_cp02

0x0df1,	// (0x0003dffb) wml_selection_box_pane_g1

0x0dfa,	// (0x0003e004) wml_selection_box_pane_t1_ParamLimits

0x0dfa,	// (0x0003e004) wml_selection_box_pane_t1

0x095f,	// (0x0003db69) bg_wml_button_pane_ParamLimits

0x095f,	// (0x0003db69) bg_wml_button_pane

0x0e12,	// (0x0003e01c) wml_button_pane_g1

0x0e1a,	// (0x0003e024) wml_button_pane_t1

0x0e12,	// (0x0003e01c) wml_button_bg_pane_g1

0x0e2a,	// (0x0003e034) wml_button_bg_pane_g2

0x0e32,	// (0x0003e03c) wml_button_bg_pane_g3

0x0e3a,	// (0x0003e044) wml_button_bg_pane_g4

0x0e42,	// (0x0003e04c) wml_button_bg_pane_g5

0x0e4a,	// (0x0003e054) wml_button_bg_pane_g6

0x0e52,	// (0x0003e05c) wml_button_bg_pane_g7

0x0e5a,	// (0x0003e064) wml_button_bg_pane_g8

0x0e62,	// (0x0003e06c) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0004c4b5) wml_button_bg_pane_g

0x4397,	// (0x000415a1) bg_list_pane_cp02

0x0e6a,	// (0x0003e074) mce_header_pane_ParamLimits

0x0e6a,	// (0x0003e074) mce_header_pane

0x0e80,	// (0x0003e08a) mce_icon_pane

0x0e80,	// (0x0003e08a) mce_image_pane

0x0e89,	// (0x0003e093) mce_text_pane_ParamLimits

0x0e89,	// (0x0003e093) mce_text_pane

0x439f,	// (0x000415a9) scroll_pane_cp03

0x0d82,	// (0x0003df8c) scroll_pane_cp04

0x0e9c,	// (0x0003e0a6) scroll_pane_cp05_ParamLimits

0x0e9c,	// (0x0003e0a6) scroll_pane_cp05

0x43a9,	// (0x000415b3) mce_header_field_pane_ParamLimits

0x43a9,	// (0x000415b3) mce_header_field_pane

0x43c0,	// (0x000415ca) mce_header_field_pane_2_ParamLimits

0x43c0,	// (0x000415ca) mce_header_field_pane_2

0x43d6,	// (0x000415e0) mce_header_field_pane_3

0x43de,	// (0x000415e8) list_single_mce_message_pane_ParamLimits

0x43de,	// (0x000415e8) list_single_mce_message_pane

0x43f3,	// (0x000415fd) list_single_mce_smart_pane_ParamLimits

0x43f3,	// (0x000415fd) list_single_mce_smart_pane

0x0ea8,	// (0x0003e0b2) input_focus_pane_cp03

0x0eb1,	// (0x0003e0bb) list_header_data_pane

0x4413,	// (0x0004161d) mce_header_field_pane_t1

0x4423,	// (0x0004162d) list_single_mce_header_pane_ParamLimits

0x4423,	// (0x0004162d) list_single_mce_header_pane

0x0eb9,	// (0x0003e0c3) list_single_mce_header_pane_t1

0x0ec8,	// (0x0003e0d2) list_single_mce_message_pane_g1

0x0ed0,	// (0x0003e0da) list_single_mce_message_pane_t1

0x4455,	// (0x0004165f) bg_cale_heading_pane_cp01_ParamLimits

0x4455,	// (0x0004165f) bg_cale_heading_pane_cp01

0x0ede,	// (0x0003e0e8) bg_cale_pane_cp02_ParamLimits

0x0ede,	// (0x0003e0e8) bg_cale_pane_cp02

0x4478,	// (0x00041682) cale_month_corner_pane

0x448e,	// (0x00041698) cale_month_day_heading_pane_ParamLimits

0x448e,	// (0x00041698) cale_month_day_heading_pane

0x44b9,	// (0x000416c3) cale_month_pane_g1_ParamLimits

0x44b9,	// (0x000416c3) cale_month_pane_g1

0x44d5,	// (0x000416df) cale_month_pane_g2_ParamLimits

0x44d5,	// (0x000416df) cale_month_pane_g2

0x44f0,	// (0x000416fa) cale_month_pane_g3_ParamLimits

0x44f0,	// (0x000416fa) cale_month_pane_g3

0x451c,	// (0x00041726) cale_month_pane_g4_ParamLimits

0x451c,	// (0x00041726) cale_month_pane_g4

0x4548,	// (0x00041752) cale_month_pane_g5_ParamLimits

0x4548,	// (0x00041752) cale_month_pane_g5

0x4574,	// (0x0004177e) cale_month_pane_g6_ParamLimits

0x4574,	// (0x0004177e) cale_month_pane_g6

0x45a0,	// (0x000417aa) cale_month_pane_g7_ParamLimits

0x45a0,	// (0x000417aa) cale_month_pane_g7

0x45cc,	// (0x000417d6) cale_month_pane_g8_ParamLimits

0x45cc,	// (0x000417d6) cale_month_pane_g8

0x4600,	// (0x0004180a) cale_month_pane_g9_ParamLimits

0x4600,	// (0x0004180a) cale_month_pane_g9

0x4632,	// (0x0004183c) cale_month_pane_g10_ParamLimits

0x4632,	// (0x0004183c) cale_month_pane_g10

0x4664,	// (0x0004186e) cale_month_pane_g11_ParamLimits

0x4664,	// (0x0004186e) cale_month_pane_g11

0x4696,	// (0x000418a0) cale_month_pane_g12_ParamLimits

0x4696,	// (0x000418a0) cale_month_pane_g12

0x46c8,	// (0x000418d2) cale_month_pane_g13_ParamLimits

0x46c8,	// (0x000418d2) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0004c4c8) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0004c4c8) cale_month_pane_g

0x46fa,	// (0x00041904) cale_month_week_pane

0x470d,	// (0x00041917) grid_cale_month_pane_ParamLimits

0x470d,	// (0x00041917) grid_cale_month_pane

0x4733,	// (0x0004193d) cale_month_day_heading_pane_t1

0x4791,	// (0x0004199b) cale_month_day_heading_pane_t2

0x47f6,	// (0x00041a00) cale_month_day_heading_pane_t3

0x485b,	// (0x00041a65) cale_month_day_heading_pane_t4

0x48c0,	// (0x00041aca) cale_month_day_heading_pane_t5

0x4925,	// (0x00041b2f) cale_month_day_heading_pane_t6

0x498a,	// (0x00041b94) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0004c4e3) cale_month_day_heading_pane_t

0x0b76,	// (0x0003dd80) bg_cale_side_pane_cp01

0x49ef,	// (0x00041bf9) cale_month_week_pane_t1

0x4a06,	// (0x00041c10) cale_month_week_pane_t2

0x4a1d,	// (0x00041c27) cale_month_week_pane_t3

0x4a34,	// (0x00041c3e) cale_month_week_pane_t4

0x4a4b,	// (0x00041c55) cale_month_week_pane_t5

0x4a62,	// (0x00041c6c) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0004c4f2) cale_month_week_pane_t

0x4a79,	// (0x00041c83) cell_cale_month_pane_ParamLimits

0x4a79,	// (0x00041c83) cell_cale_month_pane

0xc22a,	// (0x00049434) cell_cale_month_pane_g1

0x4b1f,	// (0x00041d29) cell_cale_month_pane_t1_ParamLimits

0x4b1f,	// (0x00041d29) cell_cale_month_pane_t1

0x0b84,	// (0x0003dd8e) grid_highlight_pane_cp08

0x0a8b,	// (0x0003dc95) main_smil_g1

0x4b3b,	// (0x00041d45) smil_status_pane

0x0f13,	// (0x0003e11d) smil_text_pane

0x68f4,	// (0x00043afe) bg_popup_call3_rect_pane_g8

0x68fc,	// (0x00043b06) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0004c7ab) bg_popup_call3_rect_pane_g

0x71e0,	// (0x000443ea) smil_status_volume_pane_g1

0x0f1d,	// (0x0003e127) smil_status_pane_t1

0xc3a1,	// (0x000495ab) volume_smil_pane

0x0f34,	// (0x0003e13e) list_smil_text_pane

0x4b4e,	// (0x00041d58) scroll_pane_cp011

0x4b59,	// (0x00041d63) smil_text_list_pane_t1_ParamLimits

0x4b59,	// (0x00041d63) smil_text_list_pane_t1

0xc236,	// (0x00049440) aid_volume_smil_ParamLimits

0xc236,	// (0x00049440) aid_volume_smil

0x0a8b,	// (0x0003dc95) smil_volume_pane_g1

0x0a8b,	// (0x0003dc95) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0004c512) smil_volume_pane_g

0x0a36,	// (0x0003dc40) listscroll_cale_day_pane

0x0f3e,	// (0x0003e148) bg_cale_pane

0x0f56,	// (0x0003e160) list_cale_pane

0x0f67,	// (0x0003e171) scroll_pane_cp09

0x0f78,	// (0x0003e182) cale_bg_pane_g1

0x0f80,	// (0x0003e18a) cale_bg_pane_g2

0x0f88,	// (0x0003e192) cale_bg_pane_g3

0x0f90,	// (0x0003e19a) cale_bg_pane_g4

0x0f98,	// (0x0003e1a2) cale_bg_pane_g5

0x0fa0,	// (0x0003e1aa) cale_bg_pane_g6

0x0fa8,	// (0x0003e1b2) cale_bg_pane_g7

0x0fb0,	// (0x0003e1ba) cale_bg_pane_g8

0x0fb8,	// (0x0003e1c2) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0004c517) cale_bg_pane_g

0x3ce5,	// (0x00040eef) list_cale_time_pane_ParamLimits

0x3ce5,	// (0x00040eef) list_cale_time_pane

0x0fc0,	// (0x0003e1ca) list_cale_time_pane_g1_ParamLimits

0x0fc0,	// (0x0003e1ca) list_cale_time_pane_g1

0x0fcc,	// (0x0003e1d6) list_cale_time_pane_g2_ParamLimits

0x0fcc,	// (0x0003e1d6) list_cale_time_pane_g2

0x4b9f,	// (0x00041da9) list_cale_time_pane_g3_ParamLimits

0x4b9f,	// (0x00041da9) list_cale_time_pane_g3

0x4bad,	// (0x00041db7) list_cale_time_pane_g4_ParamLimits

0x4bad,	// (0x00041db7) list_cale_time_pane_g4

0x4bbb,	// (0x00041dc5) list_cale_time_pane_g5_ParamLimits

0x4bbb,	// (0x00041dc5) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0004c52a) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0004c52a) list_cale_time_pane_g

0x0fe6,	// (0x0003e1f0) list_cale_time_pane_t1_ParamLimits

0x0fe6,	// (0x0003e1f0) list_cale_time_pane_t1

0x100e,	// (0x0003e218) list_cale_time_pane_t2_ParamLimits

0x100e,	// (0x0003e218) list_cale_time_pane_t2

0x4e5d,	// (0x00042067) aid_blid_cardinal_pane

0x4e9b,	// (0x000420a5) compass_pane_t4

0x1036,	// (0x0003e240) list_cale_time_pane_t4_ParamLimits

0x1036,	// (0x0003e240) list_cale_time_pane_t4

0x4ea9,	// (0x000420b3) compass_pane_t5

0x4eb7,	// (0x000420c1) compass_pane_t6

0x4ec5,	// (0x000420cf) compass_pane_t7

0x146f,	// (0x0003e679) navi_pane_cc_t1

0x15c4,	// (0x0003e7ce) aid_phob_thumbnail_center_pane

0x552e,	// (0x00042738) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0004c537) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0004c537) list_cale_time_pane_t

0x035b,	// (0x0003d565) bg_popup_window_pane_cp02_ParamLimits

0x035b,	// (0x0003d565) bg_popup_window_pane_cp02

0x105e,	// (0x0003e268) heading_pane_cp01_ParamLimits

0x105e,	// (0x0003e268) heading_pane_cp01

0x106a,	// (0x0003e274) loc_req_pane_ParamLimits

0x106a,	// (0x0003e274) loc_req_pane

0x107a,	// (0x0003e284) loc_type_pane_ParamLimits

0x107a,	// (0x0003e284) loc_type_pane

0x108c,	// (0x0003e296) loc_type_pane_t1_ParamLimits

0x108c,	// (0x0003e296) loc_type_pane_t1

0x109e,	// (0x0003e2a8) loc_type_pane_t2_ParamLimits

0x109e,	// (0x0003e2a8) loc_type_pane_t2

0x10b0,	// (0x0003e2ba) loc_type_pane_t3_ParamLimits

0x10b0,	// (0x0003e2ba) loc_type_pane_t3

0x0002,

0xf334,	// (0x0004c53e) loc_type_pane_t_ParamLimits

0xf334,	// (0x0004c53e) loc_type_pane_t

0x10c2,	// (0x0003e2cc) list_loc_req_pane

0x10cc,	// (0x0003e2d6) scroll_pane_cp012

0x4bc9,	// (0x00041dd3) list_single_loc_request_popup_menu_pane_ParamLimits

0x4bc9,	// (0x00041dd3) list_single_loc_request_popup_menu_pane

0x10d7,	// (0x0003e2e1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x10d7,	// (0x0003e2e1) list_single_loc_request_popup_menu_pane_g1

0x10e3,	// (0x0003e2ed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x10e3,	// (0x0003e2ed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0004c545) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0004c545) list_single_loc_request_popup_menu_pane_g

0x10ef,	// (0x0003e2f9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x10ef,	// (0x0003e2f9) list_single_loc_request_popup_menu_pane_t1

0x095f,	// (0x0003db69) bg_popup_window_pane_cp03_ParamLimits

0x095f,	// (0x0003db69) bg_popup_window_pane_cp03

0x18f4,	// (0x0003eafe) heading_loc_req_pane_ParamLimits

0x18f4,	// (0x0003eafe) heading_loc_req_pane

0x4bd6,	// (0x00041de0) popup_dyc_status_message_window_g1_ParamLimits

0x4bd6,	// (0x00041de0) popup_dyc_status_message_window_g1

0x4bea,	// (0x00041df4) popup_dyc_status_message_window_t1_ParamLimits

0x4bea,	// (0x00041df4) popup_dyc_status_message_window_t1

0x4bff,	// (0x00041e09) popup_dyc_status_message_window_t2_ParamLimits

0x4bff,	// (0x00041e09) popup_dyc_status_message_window_t2

0x4c14,	// (0x00041e1e) popup_dyc_status_message_window_t3_ParamLimits

0x4c14,	// (0x00041e1e) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0004c54a) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0004c54a) popup_dyc_status_message_window_t

0x0704,	// (0x0003d90e) bg_heading_pane_cp01

0x1105,	// (0x0003e30f) heading_loc_req_pane_g1

0x110d,	// (0x0003e317) heading_loc_req_pane_g2

0x1115,	// (0x0003e31f) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0004c551) heading_loc_req_pane_g

0x111d,	// (0x0003e327) heading_loc_req_pane_t1

0x112c,	// (0x0003e336) bg_popup_sub_pane_cp01_ParamLimits

0x112c,	// (0x0003e336) bg_popup_sub_pane_cp01

0x113a,	// (0x0003e344) popup_cale_events_window_g1_ParamLimits

0x113a,	// (0x0003e344) popup_cale_events_window_g1

0x115a,	// (0x0003e364) popup_cale_events_window_g2_ParamLimits

0x115a,	// (0x0003e364) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0004c585) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0004c585) popup_cale_events_window_g

0x117a,	// (0x0003e384) popup_cale_events_window_t1_ParamLimits

0x117a,	// (0x0003e384) popup_cale_events_window_t1

0x118c,	// (0x0003e396) popup_cale_events_window_t2_ParamLimits

0x118c,	// (0x0003e396) popup_cale_events_window_t2

0x11ca,	// (0x0003e3d4) popup_cale_events_window_t3_ParamLimits

0x11ca,	// (0x0003e3d4) popup_cale_events_window_t3

0x1204,	// (0x0003e40e) popup_cale_events_window_t4_ParamLimits

0x1204,	// (0x0003e40e) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0004c58a) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0004c58a) popup_cale_events_window_t

0x4c48,	// (0x00041e52) call_type_pane

0x4c58,	// (0x00041e62) popup_call_status_window_g1

0x4c6c,	// (0x00041e76) popup_call_status_window_g2

0x4c80,	// (0x00041e8a) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0004c593) popup_call_status_window_g

0x1248,	// (0x0003e452) call_type_pane_g1

0x1251,	// (0x0003e45b) call_type_pane_g2

0x0001,

0xf390,	// (0x0004c59a) call_type_pane_g

0x0704,	// (0x0003d90e) bg_popup_sub_pane_cp02

0x125a,	// (0x0003e464) listscroll_popup_wml_pane

0x1262,	// (0x0003e46c) list_wml_pane

0x126c,	// (0x0003e476) scroll_pane_cp013

0x1277,	// (0x0003e481) list_single_graphic_popup_wml_pane_ParamLimits

0x1277,	// (0x0003e481) list_single_graphic_popup_wml_pane

0x0a8b,	// (0x0003dc95) list_single_graphic_popup_wml_pane_g1

0x128b,	// (0x0003e495) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0004c59f) list_single_graphic_popup_wml_pane_g

0x1293,	// (0x0003e49d) list_single_graphic_popup_wml_pane_t1

0x12a9,	// (0x0003e4b3) aid_call_pane

0x0957,	// (0x0003db61) popup_clock_analogue_window_g1

0x0957,	// (0x0003db61) popup_clock_analogue_window_g2

0xc2cd,	// (0x000494d7) popup_clock_analogue_window_g3

0xc2cd,	// (0x000494d7) popup_clock_analogue_window_g4

0x0a8b,	// (0x0003dc95) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0004c5a4) popup_clock_analogue_window_g

0xc2d5,	// (0x000494df) popup_clock_analogue_window_t1

0xc2e3,	// (0x000494ed) clock_digital_number_pane_ParamLimits

0xc2e3,	// (0x000494ed) clock_digital_number_pane

0xc2ef,	// (0x000494f9) clock_digital_number_pane_cp02_ParamLimits

0xc2ef,	// (0x000494f9) clock_digital_number_pane_cp02

0xc2fb,	// (0x00049505) clock_digital_number_pane_cp03_ParamLimits

0xc2fb,	// (0x00049505) clock_digital_number_pane_cp03

0xc307,	// (0x00049511) clock_digital_number_pane_cp04_ParamLimits

0xc307,	// (0x00049511) clock_digital_number_pane_cp04

0xc317,	// (0x00049521) clock_digital_separator_pane_ParamLimits

0xc317,	// (0x00049521) clock_digital_separator_pane

0xc323,	// (0x0004952d) popup_clock_digital_window_t1

0x0a8b,	// (0x0003dc95) clock_digital_number_pane_g1

0x0a8b,	// (0x0003dc95) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0004c512) clock_digital_number_pane_g

0x0a8b,	// (0x0003dc95) clock_digital_separator_pane_g1

0x0a8b,	// (0x0003dc95) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0004c512) clock_digital_separator_pane_g

0x0704,	// (0x0003d90e) bg_popup_window_pane_cp04

0x12b1,	// (0x0003e4bb) heading_pane_cp03

0x12b9,	// (0x0003e4c3) listscroll_popup_gms_pane

0x12c1,	// (0x0003e4cb) grid_large_graphic_popup_pane

0x12cb,	// (0x0003e4d5) listscroll_popup_gms_pane_g1

0x12d3,	// (0x0003e4dd) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0004c5af) listscroll_popup_gms_pane_g

0x0d82,	// (0x0003df8c) scroll_pane_cp014

0x4c8f,	// (0x00041e99) cell_large_graphic_popup_pane_ParamLimits

0x4c8f,	// (0x00041e99) cell_large_graphic_popup_pane

0x4ca7,	// (0x00041eb1) cell_large_graphic_popup_pane_g1_ParamLimits

0x4ca7,	// (0x00041eb1) cell_large_graphic_popup_pane_g1

0x12db,	// (0x0003e4e5) cell_large_graphic_popup_pane_g2_ParamLimits

0x12db,	// (0x0003e4e5) cell_large_graphic_popup_pane_g2

0x12e7,	// (0x0003e4f1) cell_large_graphic_popup_pane_g3_ParamLimits

0x12e7,	// (0x0003e4f1) cell_large_graphic_popup_pane_g3

0x12f4,	// (0x0003e4fe) cell_large_graphic_popup_pane_g4_ParamLimits

0x12f4,	// (0x0003e4fe) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0004c5b4) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0004c5b4) cell_large_graphic_popup_pane_g

0x1304,	// (0x0003e50e) grid_highlight_pane_cp010

0x0a8b,	// (0x0003dc95) bg_popup_call_pane_g1

0x130e,	// (0x0003e518) list_single_graphic_popup_conf_pane_ParamLimits

0x130e,	// (0x0003e518) list_single_graphic_popup_conf_pane

0x1321,	// (0x0003e52b) list_highlight_pane_cp01

0x132a,	// (0x0003e534) list_single_graphic_popup_conf_pane_g1

0x1332,	// (0x0003e53c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0004c5bd) list_single_graphic_popup_conf_pane_g

0x133a,	// (0x0003e544) list_single_graphic_popup_conf_pane_t1

0x1348,	// (0x0003e552) linegrid_cams_pane_g1

0x4cb3,	// (0x00041ebd) linegrid_cams_pane_g2

0x0bb7,	// (0x0003ddc1) linegrid_cams_pane_g3

0x1351,	// (0x0003e55b) linegrid_cams_pane_g4

0x4cbc,	// (0x00041ec6) linegrid_cams_pane_g5

0x4cc5,	// (0x00041ecf) linegrid_cams_pane_g6

0x0bc0,	// (0x0003ddca) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0004c5c2) linegrid_cams_pane_g

0x135a,	// (0x0003e564) popup_clock_analogue_window

0x135a,	// (0x0003e564) popup_clock_digital_window

0x0704,	// (0x0003d90e) popup_phob_thumbnail_window

0x0a8b,	// (0x0003dc95) call_video_uplink_pane_g1

0x1363,	// (0x0003e56d) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0004c5d1) call_video_uplink_pane_g

0x136b,	// (0x0003e575) video_uplink_pane

0x1373,	// (0x0003e57d) mce_image_pane_g1

0x4cd0,	// (0x00041eda) mce_image_pane_g2

0x4cda,	// (0x00041ee4) mce_image_pane_g3

0x4ce2,	// (0x00041eec) mce_image_pane_g4

0x4cea,	// (0x00041ef4) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0004c5d6) mce_image_pane_g

0x137d,	// (0x0003e587) control_top_pane_stacon_cp01_ParamLimits

0x137d,	// (0x0003e587) control_top_pane_stacon_cp01

0x1391,	// (0x0003e59b) uni_indicator_pane_stacon_cp01_ParamLimits

0x1391,	// (0x0003e59b) uni_indicator_pane_stacon_cp01

0x13a2,	// (0x0003e5ac) bg_popup_sub_pane_cp03

0x4cf2,	// (0x00041efc) chi_dic_find_pane

0x4cfa,	// (0x00041f04) listscroll_chi_dic_pane

0x4d03,	// (0x00041f0d) main_pane_chidic_g1

0x13ac,	// (0x0003e5b6) chi_dic_find_pane_t1

0x13ba,	// (0x0003e5c4) find_chidic_pane

0x13c3,	// (0x0003e5cd) chi_dic_list_pane_ParamLimits

0x13c3,	// (0x0003e5cd) chi_dic_list_pane

0x13d4,	// (0x0003e5de) scroll_pane_cp020

0x13dc,	// (0x0003e5e6) find_chidic_pane_t1

0x0704,	// (0x0003d90e) input_focus_pane_cp06

0x4d16,	// (0x00041f20) list_chi_dic_pane_ParamLimits

0x4d16,	// (0x00041f20) list_chi_dic_pane

0x4d28,	// (0x00041f32) list_chi_dic_pane_t1_ParamLimits

0x4d28,	// (0x00041f32) list_chi_dic_pane_t1

0x0704,	// (0x0003d90e) list_highlight_pane_cp020

0x13eb,	// (0x0003e5f5) bg_cale_heading_pane_g1

0x4d3b,	// (0x00041f45) bg_cale_heading_pane_g2

0x4d43,	// (0x00041f4d) bg_cale_heading_pane_g3

0x4d4b,	// (0x00041f55) bg_cale_heading_pane_g4

0x4d55,	// (0x00041f5f) bg_cale_heading_pane_g5

0x4d5f,	// (0x00041f69) bg_cale_heading_pane_g6

0x4d67,	// (0x00041f71) bg_cale_heading_pane_g7

0x4d6f,	// (0x00041f79) bg_cale_heading_pane_g8

0x4d79,	// (0x00041f83) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0004c5e1) bg_cale_heading_pane_g

0x13eb,	// (0x0003e5f5) bg_cale_side_pane_g1

0x4d83,	// (0x00041f8d) bg_cale_side_pane_g2

0x4d8b,	// (0x00041f95) bg_cale_side_pane_g3

0x4d93,	// (0x00041f9d) bg_cale_side_pane_g4

0x4d9b,	// (0x00041fa5) bg_cale_side_pane_g5

0x4da3,	// (0x00041fad) bg_cale_side_pane_g6

0x4dab,	// (0x00041fb5) bg_cale_side_pane_g7

0x4db3,	// (0x00041fbd) bg_cale_side_pane_g8

0x4dbb,	// (0x00041fc5) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0004c5f4) bg_cale_side_pane_g

0x4dc3,	// (0x00041fcd) popup_call_status_window_ParamLimits

0x4dc3,	// (0x00041fcd) popup_call_status_window

0x13f3,	// (0x0003e5fd) stacon_top_pane

0x13fb,	// (0x0003e605) status_pane_ParamLimits

0x13fb,	// (0x0003e605) status_pane

0x1410,	// (0x0003e61a) status_small_pane

0x1418,	// (0x0003e622) control_pane

0x0704,	// (0x0003d90e) stacon_bottom_pane

0x1420,	// (0x0003e62a) list_single_mce_smart_pane_t1_ParamLimits

0x1420,	// (0x0003e62a) list_single_mce_smart_pane_t1

0x1433,	// (0x0003e63d) list_single_mce_smart_pane_t2_ParamLimits

0x1433,	// (0x0003e63d) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0004c607) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0004c607) list_single_mce_smart_pane_t

0x4e0c,	// (0x00042016) compass_pane

0x4e15,	// (0x0004201f) main_location2_pane_t1

0x4e27,	// (0x00042031) main_location2_pane_t2

0x4e39,	// (0x00042043) main_location2_pane_t3

0x0003,

0xf402,	// (0x0004c60c) main_location2_pane_t

0x1452,	// (0x0003e65c) compass_pane_g1_ParamLimits

0x1452,	// (0x0003e65c) compass_pane_g1

0x4e7d,	// (0x00042087) compass_pane_t1

0x4e8c,	// (0x00042096) compass_pane_t2

0x0005,

0xf40b,	// (0x0004c615) compass_pane_t

0x4ed3,	// (0x000420dd) text_secondary_cp61

0x1466,	// (0x0003e670) navi_pane_cams_g5

0x1489,	// (0x0003e693) navi_pane_im_t1

0x1497,	// (0x0003e6a1) navi_pane_mp_g1_ParamLimits

0x1497,	// (0x0003e6a1) navi_pane_mp_g1

0x14ab,	// (0x0003e6b5) navi_pane_mp_g2_ParamLimits

0x14ab,	// (0x0003e6b5) navi_pane_mp_g2

0x14b7,	// (0x0003e6c1) navi_pane_mp_g3_ParamLimits

0x14b7,	// (0x0003e6c1) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0004c629) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0004c629) navi_pane_mp_g

0x14c3,	// (0x0003e6cd) navi_pane_mp_t1

0x14d1,	// (0x0003e6db) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0004c630) navi_pane_mp_t

0x150d,	// (0x0003e717) navi_pane_vt_g1

0x14c3,	// (0x0003e6cd) navi_pane_vt_t1

0x1515,	// (0x0003e71f) navi_slider_pane

0x151d,	// (0x0003e727) zooming_pane

0x1525,	// (0x0003e72f) navi_slider_pane_g1

0xc340,	// (0x0004954a) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0004c637) navi_slider_pane_g

0x1549,	// (0x0003e753) aid_levels_zoom

0x1551,	// (0x0003e75b) zooming_pane_g1

0x1559,	// (0x0003e763) zooming_pane_g2

0x1559,	// (0x0003e763) zooming_pane_g3

0x0002,

0xf43c,	// (0x0004c646) zooming_pane_g

0x1561,	// (0x0003e76b) level_10_zoom

0x156a,	// (0x0003e774) level_11_zoom

0x1573,	// (0x0003e77d) level_1_zoom

0x157c,	// (0x0003e786) level_2_zoom

0x1585,	// (0x0003e78f) level_3_zoom

0x158e,	// (0x0003e798) level_4_zoom

0x1597,	// (0x0003e7a1) level_5_zoom

0x15a0,	// (0x0003e7aa) level_6_zoom

0x15a9,	// (0x0003e7b3) level_7_zoom

0x15b2,	// (0x0003e7bc) level_8_zoom

0x15bb,	// (0x0003e7c5) level_9_zoom

0x15cc,	// (0x0003e7d6) popup_phob_thumbnail_window_g1

0x15d4,	// (0x0003e7de) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0004c64d) popup_phob_thumbnail_window_g

0x6b7f,	// (0x00043d89) level_1_location

0x6b87,	// (0x00043d91) level_2_location

0x6b8f,	// (0x00043d99) level_3_location

0x6b97,	// (0x00043da1) level_4_location

0x151d,	// (0x0003e727) level_5_location

0x4ff8,	// (0x00042202) mce_icon_pane_g1

0x5000,	// (0x0004220a) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0004c652) mce_icon_pane_g

0x5008,	// (0x00042212) main_mup_pane_g1_ParamLimits

0x5008,	// (0x00042212) main_mup_pane_g1

0x501e,	// (0x00042228) main_mup_pane_g2_ParamLimits

0x501e,	// (0x00042228) main_mup_pane_g2

0x5036,	// (0x00042240) main_mup_pane_g3_ParamLimits

0x5036,	// (0x00042240) main_mup_pane_g3

0x504e,	// (0x00042258) main_mup_pane_g4_ParamLimits

0x504e,	// (0x00042258) main_mup_pane_g4

0x5066,	// (0x00042270) main_mup_pane_g5_ParamLimits

0x5066,	// (0x00042270) main_mup_pane_g5

0x5082,	// (0x0004228c) main_mup_pane_g6_ParamLimits

0x5082,	// (0x0004228c) main_mup_pane_g6

0x509a,	// (0x000422a4) main_mup_pane_g7_ParamLimits

0x509a,	// (0x000422a4) main_mup_pane_g7

0x50b2,	// (0x000422bc) main_mup_pane_g8_ParamLimits

0x50b2,	// (0x000422bc) main_mup_pane_g8

0x50cc,	// (0x000422d6) main_mup_pane_g9_ParamLimits

0x50cc,	// (0x000422d6) main_mup_pane_g9

0x50e6,	// (0x000422f0) main_mup_pane_g10_ParamLimits

0x50e6,	// (0x000422f0) main_mup_pane_g10

0x5100,	// (0x0004230a) main_mup_pane_g11_ParamLimits

0x5100,	// (0x0004230a) main_mup_pane_g11

0x5114,	// (0x0004231e) main_mup_pane_g12_ParamLimits

0x5114,	// (0x0004231e) main_mup_pane_g12

0x512a,	// (0x00042334) main_mup_pane_g13_ParamLimits

0x512a,	// (0x00042334) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0004c657) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0004c657) main_mup_pane_g

0x513e,	// (0x00042348) main_mup_pane_t1_ParamLimits

0x513e,	// (0x00042348) main_mup_pane_t1

0x5158,	// (0x00042362) main_mup_pane_t2_ParamLimits

0x5158,	// (0x00042362) main_mup_pane_t2

0x5170,	// (0x0004237a) main_mup_pane_t3_ParamLimits

0x5170,	// (0x0004237a) main_mup_pane_t3

0x5188,	// (0x00042392) main_mup_pane_t4_ParamLimits

0x5188,	// (0x00042392) main_mup_pane_t4

0x51a6,	// (0x000423b0) main_mup_pane_t5_ParamLimits

0x51a6,	// (0x000423b0) main_mup_pane_t5

0x51bb,	// (0x000423c5) main_mup_pane_t6_ParamLimits

0x51bb,	// (0x000423c5) main_mup_pane_t6

0x0005,

0xf468,	// (0x0004c672) main_mup_pane_t_ParamLimits

0xf468,	// (0x0004c672) main_mup_pane_t

0x51cd,	// (0x000423d7) mup_progress_pane_ParamLimits

0x51cd,	// (0x000423d7) mup_progress_pane

0x51d9,	// (0x000423e3) mup_visualizer_pane_ParamLimits

0x51d9,	// (0x000423e3) mup_visualizer_pane

0x5209,	// (0x00042413) mup_volume_pane_ParamLimits

0x5209,	// (0x00042413) mup_volume_pane

0x123a,	// (0x0003e444) mup_visualizer_pane_g1_ParamLimits

0x123a,	// (0x0003e444) mup_visualizer_pane_g1

0x123a,	// (0x0003e444) mup_visualizer_pane_g2_ParamLimits

0x123a,	// (0x0003e444) mup_visualizer_pane_g2

0x1452,	// (0x0003e65c) mup_visualizer_pane_g3_ParamLimits

0x1452,	// (0x0003e65c) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0004c67f) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0004c67f) mup_visualizer_pane_g

0x0a8b,	// (0x0003dc95) mup_volume_pane_g1

0x15e4,	// (0x0003e7ee) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0004c686) mup_volume_pane_g

0x0a8b,	// (0x0003dc95) mup_progress_pane_g1

0x15ed,	// (0x0003e7f7) mup_progress_pane_g2

0x15f6,	// (0x0003e800) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0004c68b) mup_progress_pane_g

0x0704,	// (0x0003d90e) bg_popup_window_pane_cp05

0x15ff,	// (0x0003e809) heading_pane_cp02_ParamLimits

0x15ff,	// (0x0003e809) heading_pane_cp02

0x1619,	// (0x0003e823) list_popup_blid_pane

0x1621,	// (0x0003e82b) list_blid_sat_info_pane_ParamLimits

0x1621,	// (0x0003e82b) list_blid_sat_info_pane

0x1634,	// (0x0003e83e) list_blid_sat_info_pane_g1

0x163c,	// (0x0003e846) list_blid_sat_info_pane_t1

0x531f,	// (0x00042529) mup_equalizer_pane_ParamLimits

0x531f,	// (0x00042529) mup_equalizer_pane

0x5338,	// (0x00042542) mup_equalizer_pane_cp1_ParamLimits

0x5338,	// (0x00042542) mup_equalizer_pane_cp1

0x5355,	// (0x0004255f) mup_equalizer_pane_cp2_ParamLimits

0x5355,	// (0x0004255f) mup_equalizer_pane_cp2

0x5372,	// (0x0004257c) mup_equalizer_pane_cp3_ParamLimits

0x5372,	// (0x0004257c) mup_equalizer_pane_cp3

0x5393,	// (0x0004259d) mup_equalizer_pane_cp4_ParamLimits

0x5393,	// (0x0004259d) mup_equalizer_pane_cp4

0x53b4,	// (0x000425be) mup_equalizer_pane_cp5

0x53c8,	// (0x000425d2) mup_equalizer_pane_cp6

0x53dc,	// (0x000425e6) mup_equalizer_pane_cp7

0x697c,	// (0x00043b86) bg_popup_call_poc_act_pane_g9

0x6984,	// (0x00043b8e) bg_popup_call_poc_act_pane_g10

0x698c,	// (0x00043b96) bg_popup_call_poc_act_pane_g11

0x000a,

0x095f,	// (0x0003db69) mup_scale_pane

0x0a8b,	// (0x0003dc95) mup_scale_pane_g1

0x164a,	// (0x0003e854) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0004c6a7) mup_scale_pane_g

0x166e,	// (0x0003e878) msg_data_pane

0x1676,	// (0x0003e880) scroll_pane_cp017

0x282d,	// (0x0003fa37) bg_list_pane_cp04_ParamLimits

0x282d,	// (0x0003fa37) bg_list_pane_cp04

0x167e,	// (0x0003e888) msg_data_pane_g1

0x5402,	// (0x0004260c) msg_data_pane_g2

0x540c,	// (0x00042616) msg_data_pane_g3

0x5414,	// (0x0004261e) msg_data_pane_g4

0x541c,	// (0x00042626) msg_data_pane_g5

0x5424,	// (0x0004262e) msg_data_pane_g6

0x542c,	// (0x00042636) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0004c6b6) msg_data_pane_g

0x284d,	// (0x0003fa57) msg_text_pane_ParamLimits

0x284d,	// (0x0003fa57) msg_text_pane

0x5434,	// (0x0004263e) qrid_highlight_pane_cp011_ParamLimits

0x5434,	// (0x0004263e) qrid_highlight_pane_cp011

0x0704,	// (0x0003d90e) msg_body_pane

0x0704,	// (0x0003d90e) msg_header_pane

0x168f,	// (0x0003e899) input_focus_pane_cp07

0x2880,	// (0x0003fa8a) msg_header_pane_t1_ParamLimits

0x2880,	// (0x0003fa8a) msg_header_pane_t1

0x2894,	// (0x0003fa9e) msg_header_pane_t2_ParamLimits

0x2894,	// (0x0003fa9e) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0004c6ca) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0004c6ca) msg_header_pane_t

0x16a4,	// (0x0003e8ae) msg_body_pane_g1

0x28a6,	// (0x0003fab0) msg_body_pane_t1_ParamLimits

0x28a6,	// (0x0003fab0) msg_body_pane_t1

0x28d7,	// (0x0003fae1) msg_body_pane_t2_ParamLimits

0x28d7,	// (0x0003fae1) msg_body_pane_t2

0x28e9,	// (0x0003faf3) msg_body_pane_t3_ParamLimits

0x28e9,	// (0x0003faf3) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0004c6cf) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0004c6cf) msg_body_pane_t

0x5484,	// (0x0004268e) main_viewer_pane_g1_ParamLimits

0x5484,	// (0x0004268e) main_viewer_pane_g1

0x5492,	// (0x0004269c) main_viewer_pane_g2_ParamLimits

0x5492,	// (0x0004269c) main_viewer_pane_g2

0x54a0,	// (0x000426aa) main_viewer_pane_g3_ParamLimits

0x54a0,	// (0x000426aa) main_viewer_pane_g3

0x54af,	// (0x000426b9) main_viewer_pane_g4_ParamLimits

0x54af,	// (0x000426b9) main_viewer_pane_g4

0xc36a,	// (0x00049574) main_viewer_pane_g5_ParamLimits

0xc36a,	// (0x00049574) main_viewer_pane_g5

0xc36a,	// (0x00049574) main_viewer_pane_g7_ParamLimits

0xc36a,	// (0x00049574) main_viewer_pane_g7

0xc37c,	// (0x00049586) main_viewer_pane_g8_ParamLimits

0xc37c,	// (0x00049586) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0004c6df) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0004c6df) main_viewer_pane_g

0x16ac,	// (0x0003e8b6) viewer_content_pane_ParamLimits

0x16ac,	// (0x0003e8b6) viewer_content_pane

0x54eb,	// (0x000426f5) main_postcard_pane_g1_ParamLimits

0x54eb,	// (0x000426f5) main_postcard_pane_g1

0x5501,	// (0x0004270b) main_postcard_pane_g2_ParamLimits

0x5501,	// (0x0004270b) main_postcard_pane_g2

0x5517,	// (0x00042721) main_postcard_pane_g3_ParamLimits

0x5517,	// (0x00042721) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0004c6f0) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0004c6f0) main_postcard_pane_g

0x552e,	// (0x00042738) main_postcard_pane_g4

0x71f3,	// (0x000443fd) smil_status_volume_pane_g2

0x5571,	// (0x0004277b) postcard_pane_ParamLimits

0x5571,	// (0x0004277b) postcard_pane

0x16c8,	// (0x0003e8d2) postcard_pane_g1_ParamLimits

0x16c8,	// (0x0003e8d2) postcard_pane_g1

0x55b3,	// (0x000427bd) postcard_pane_g2_ParamLimits

0x55b3,	// (0x000427bd) postcard_pane_g2

0x55bf,	// (0x000427c9) postcard_pane_g3_ParamLimits

0x55bf,	// (0x000427c9) postcard_pane_g3

0x16ba,	// (0x0003e8c4) postcard_pane_g4_ParamLimits

0x16ba,	// (0x0003e8c4) postcard_pane_g4

0x55cb,	// (0x000427d5) postcard_pane_g5_ParamLimits

0x55cb,	// (0x000427d5) postcard_pane_g5

0x55e0,	// (0x000427ea) postcard_pane_g6_ParamLimits

0x55e0,	// (0x000427ea) postcard_pane_g6

0x16c8,	// (0x0003e8d2) postcard_pane_g7_ParamLimits

0x16c8,	// (0x0003e8d2) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0004c6fd) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0004c6fd) postcard_pane_g

0x55f4,	// (0x000427fe) main_mp2_pane_g1_ParamLimits

0x55f4,	// (0x000427fe) main_mp2_pane_g1

0x5600,	// (0x0004280a) main_mp2_pane_g2_ParamLimits

0x5600,	// (0x0004280a) main_mp2_pane_g2

0x560c,	// (0x00042816) main_mp2_pane_g3_ParamLimits

0x560c,	// (0x00042816) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0004c70c) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0004c70c) main_mp2_pane_g

0x5618,	// (0x00042822) main_mp2_pane_t1_ParamLimits

0x5618,	// (0x00042822) main_mp2_pane_t1

0x562d,	// (0x00042837) main_mp2_pane_t2_ParamLimits

0x562d,	// (0x00042837) main_mp2_pane_t2

0x563f,	// (0x00042849) main_mp2_pane_t3_ParamLimits

0x563f,	// (0x00042849) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0004c713) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0004c713) main_mp2_pane_t

0x16d6,	// (0x0003e8e0) pec_content_pane_ParamLimits

0x16d6,	// (0x0003e8e0) pec_content_pane

0x0d82,	// (0x0003df8c) scroll_pane_cp015

0x16e8,	// (0x0003e8f2) pec_attribute_pane_ParamLimits

0x16e8,	// (0x0003e8f2) pec_attribute_pane

0x5651,	// (0x0004285b) pec_content_pane_g1_ParamLimits

0x5651,	// (0x0004285b) pec_content_pane_g1

0x16f8,	// (0x0003e902) pec_content_pane_t1_ParamLimits

0x16f8,	// (0x0003e902) pec_content_pane_t1

0x170a,	// (0x0003e914) pec_content_pane_t2_ParamLimits

0x170a,	// (0x0003e914) pec_content_pane_t2

0x0001,

0xf510,	// (0x0004c71a) pec_content_pane_t_ParamLimits

0xf510,	// (0x0004c71a) pec_content_pane_t

0x565d,	// (0x00042867) list_single_graphic_pane_cp01_ParamLimits

0x565d,	// (0x00042867) list_single_graphic_pane_cp01

0x095f,	// (0x0003db69) bg_popup_sub_pane_cp04

0x171c,	// (0x0003e926) popup_mup_playback_window_g1

0x1728,	// (0x0003e932) popup_mup_playback_window_t1

0x173d,	// (0x0003e947) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0004c71f) popup_mup_playback_window_t

0x1774,	// (0x0003e97e) main_image_pane_g1_ParamLimits

0x1774,	// (0x0003e97e) main_image_pane_g1

0x17b7,	// (0x0003e9c1) scroll_pane_cp018_ParamLimits

0x17b7,	// (0x0003e9c1) scroll_pane_cp018

0x17cf,	// (0x0003e9d9) scroll_pane_cp016_ParamLimits

0x17cf,	// (0x0003e9d9) scroll_pane_cp016

0x572a,	// (0x00042934) smil2_image_pane_ParamLimits

0x572a,	// (0x00042934) smil2_image_pane

0x575a,	// (0x00042964) smil2_root_pane_ParamLimits

0x575a,	// (0x00042964) smil2_root_pane

0x5792,	// (0x0004299c) smil2_text_pane_ParamLimits

0x5792,	// (0x0004299c) smil2_text_pane

0x0704,	// (0x0003d90e) bg_list_pane_cp06

0x180b,	// (0x0003ea15) grid_radio_pane

0x0704,	// (0x0003d90e) bg_popup_window_pane_cp06

0x1813,	// (0x0003ea1d) main_fmradio_pane_t1

0x12b1,	// (0x0003e4bb) heading_pane_cp04

0x1821,	// (0x0003ea2b) main_fmradio_pane_t2

0x6a16,	// (0x00043c20) popup_cale_lunar_info_window_g1

0x182f,	// (0x0003ea39) main_fmradio_pane_t3

0x6a1e,	// (0x00043c28) popup_cale_lunar_info_window_g2

0x183d,	// (0x0003ea47) main_fmradio_pane_t4

0x0001,

0x184b,	// (0x0003ea55) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0004c7fa) popup_cale_lunar_info_window_g

0xf52a,	// (0x0004c734) main_fmradio_pane_t

0x1859,	// (0x0003ea63) wait_bar_pane_cp03

0x1861,	// (0x0003ea6b) cell_fmradio_pane_ParamLimits

0x1861,	// (0x0003ea6b) cell_fmradio_pane

0x16c8,	// (0x0003e8d2) cell_fmradio_pane_g1_ParamLimits

0x16c8,	// (0x0003e8d2) cell_fmradio_pane_g1

0x0704,	// (0x0003d90e) grid_highlight_pane_cp011

0x1874,	// (0x0003ea7e) poc_content_pane_ParamLimits

0x1874,	// (0x0003ea7e) poc_content_pane

0x1886,	// (0x0003ea90) scroll_pane_cp019

0x5812,	// (0x00042a1c) popup_call_poc_act_window_ParamLimits

0x5812,	// (0x00042a1c) popup_call_poc_act_window

0x5836,	// (0x00042a40) popup_call_poc_inact_window_ParamLimits

0x5836,	// (0x00042a40) popup_call_poc_inact_window

0xf5c7,	// (0x0004c7d1) bg_popup_call_poc_act_pane_g

0x6904,	// (0x00043b0e) bg_popup_call_poc_inact_pane_g1

0x690c,	// (0x00043b16) bg_popup_call_poc_inact_pane_g2

0x188e,	// (0x0003ea98) popup_call_poc_act_window_g2

0x6914,	// (0x00043b1e) bg_popup_call_poc_inact_pane_g3

0x691c,	// (0x00043b26) bg_popup_call_poc_inact_pane_g4

0x6924,	// (0x00043b2e) bg_popup_call_poc_inact_pane_g5

0x1896,	// (0x0003eaa0) popup_call_poc_act_window_t1_ParamLimits

0x1896,	// (0x0003eaa0) popup_call_poc_act_window_t1

0x18be,	// (0x0003eac8) popup_call_poc_act_window_t2_ParamLimits

0x18be,	// (0x0003eac8) popup_call_poc_act_window_t2

0x584f,	// (0x00042a59) popup_call_poc_act_window_t3_ParamLimits

0x584f,	// (0x00042a59) popup_call_poc_act_window_t3

0x5877,	// (0x00042a81) popup_call_poc_act_window_t4_ParamLimits

0x5877,	// (0x00042a81) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0004c73f) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0004c73f) popup_call_poc_act_window_t

0x692c,	// (0x00043b36) bg_popup_call_poc_inact_pane_g6

0x6934,	// (0x00043b3e) bg_popup_call_poc_inact_pane_g7

0x693c,	// (0x00043b46) bg_popup_call_poc_inact_pane_g8

0x5889,	// (0x00042a93) popup_call_poc_inact_window_g2

0x6944,	// (0x00043b4e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0004c7be) bg_popup_call_poc_inact_pane_g

0x5891,	// (0x00042a9b) popup_call_poc_inact_window_t1_ParamLimits

0x5891,	// (0x00042a9b) popup_call_poc_inact_window_t1

0x58a6,	// (0x00042ab0) popup_call_poc_inact_window_t2_ParamLimits

0x58a6,	// (0x00042ab0) popup_call_poc_inact_window_t2

0x58bb,	// (0x00042ac5) popup_call_poc_inact_window_t3_ParamLimits

0x58bb,	// (0x00042ac5) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0004c748) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0004c748) popup_call_poc_inact_window_t

0x7099,	// (0x000442a3) context_pane_ParamLimits

0x70f4,	// (0x000442fe) signal_pane_ParamLimits

0x151d,	// (0x0003e727) main_call2_pane

0x702f,	// (0x00044239) popup_phob_thumbnail2_window_ParamLimits

0x702f,	// (0x00044239) popup_phob_thumbnail2_window

0xc352,	// (0x0004955c) aid_hotspot_pointer_arrow_pane

0xc35a,	// (0x00049564) aid_hotspot_pointer_hand_pane

0x6b49,	// (0x00043d53) phob_pre_status_pane_g5

0x3d10,	// (0x00040f1a) cams_zoom_pane_ParamLimits

0x3d1f,	// (0x00040f29) image_vga_pane_ParamLimits

0x3d39,	// (0x00040f43) main_camera_pane_g1_ParamLimits

0x3d4b,	// (0x00040f55) main_camera_pane_g2_ParamLimits

0x3d5b,	// (0x00040f65) main_camera_pane_g3_ParamLimits

0x3d6b,	// (0x00040f75) main_camera_pane_g4_ParamLimits

0x3d7b,	// (0x00040f85) main_camera_pane_g5_ParamLimits

0x3d8b,	// (0x00040f95) main_camera_pane_g6_ParamLimits

0x3d9d,	// (0x00040fa7) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0004c447) main_camera_pane_g_ParamLimits

0x3dad,	// (0x00040fb7) main_camera_pane_t1_ParamLimits

0x3dc3,	// (0x00040fcd) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0004c458) main_camera_pane_t_ParamLimits

0x095f,	// (0x0003db69) bg_popup_preview_window_pane_cp01_ParamLimits

0x095f,	// (0x0003db69) bg_popup_preview_window_pane_cp01

0x58d0,	// (0x00042ada) popup_phob_thumbnail2_window_g1_ParamLimits

0x58d0,	// (0x00042ada) popup_phob_thumbnail2_window_g1

0x0704,	// (0x0003d90e) call2_cli_visual_pane

0x58f7,	// (0x00042b01) popup_call2_audio_conf_window_ParamLimits

0x58f7,	// (0x00042b01) popup_call2_audio_conf_window

0x5917,	// (0x00042b21) popup_call2_audio_first_window_ParamLimits

0x5917,	// (0x00042b21) popup_call2_audio_first_window

0x59ad,	// (0x00042bb7) popup_call2_audio_in_window_ParamLimits

0x59ad,	// (0x00042bb7) popup_call2_audio_in_window

0x59f5,	// (0x00042bff) popup_call2_audio_out_window_ParamLimits

0x59f5,	// (0x00042bff) popup_call2_audio_out_window

0x5a5f,	// (0x00042c69) popup_call2_audio_second_window_ParamLimits

0x5a5f,	// (0x00042c69) popup_call2_audio_second_window

0x5ac5,	// (0x00042ccf) popup_call2_audio_wait_window_ParamLimits

0x5ac5,	// (0x00042ccf) popup_call2_audio_wait_window

0x0704,	// (0x0003d90e) bg_popup_call2_act_pane_cp03

0x0941,	// (0x0003db4b) list_conf_pane_cp

0x5aff,	// (0x00042d09) popup_call2_audio_conf_window_t1

0x130e,	// (0x0003e518) list_single_graphic_popup_conf2_pane_ParamLimits

0x130e,	// (0x0003e518) list_single_graphic_popup_conf2_pane

0x1321,	// (0x0003e52b) list_highlight_pane_cp04

0x5b0d,	// (0x00042d17) list_single_graphic_popup_conf2_pane_g1

0x1332,	// (0x0003e53c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0004c74f) list_single_graphic_popup_conf2_pane_g

0x5b17,	// (0x00042d21) list_single_graphic_popup_conf2_pane_t1

0x5b25,	// (0x00042d2f) bg_popup_call2_act_pane_cp01_ParamLimits

0x5b25,	// (0x00042d2f) bg_popup_call2_act_pane_cp01

0x5baf,	// (0x00042db9) call_type_pane_cp05_ParamLimits

0x5baf,	// (0x00042db9) call_type_pane_cp05

0x5c03,	// (0x00042e0d) popup_call2_audio_second_window_g1_ParamLimits

0x5c03,	// (0x00042e0d) popup_call2_audio_second_window_g1

0x5c57,	// (0x00042e61) popup_call2_audio_second_window_g2_ParamLimits

0x5c57,	// (0x00042e61) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0004c754) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0004c754) popup_call2_audio_second_window_g

0x5cbc,	// (0x00042ec6) popup_call2_audio_second_window_t1_ParamLimits

0x5cbc,	// (0x00042ec6) popup_call2_audio_second_window_t1

0x5d77,	// (0x00042f81) popup_call2_audio_second_window_t2_ParamLimits

0x5d77,	// (0x00042f81) popup_call2_audio_second_window_t2

0x5dca,	// (0x00042fd4) popup_call2_audio_second_window_t3_ParamLimits

0x5dca,	// (0x00042fd4) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0004c75b) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0004c75b) popup_call2_audio_second_window_t

0x0704,	// (0x0003d90e) bg_popup_call2_in_pane_cp02

0x070e,	// (0x0003d918) call_type_pane_cp04

0x0716,	// (0x0003d920) popup_call2_audio_wait_window_g1

0x071e,	// (0x0003d928) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0004c334) popup_call2_audio_wait_window_g

0x0726,	// (0x0003d930) popup_call2_audio_wait_window_t3

0x5ebd,	// (0x000430c7) bg_popup_call2_act_pane_ParamLimits

0x5ebd,	// (0x000430c7) bg_popup_call2_act_pane

0x5f7d,	// (0x00043187) call_type_pane_cp03_ParamLimits

0x5f7d,	// (0x00043187) call_type_pane_cp03

0x5fe1,	// (0x000431eb) popup_call2_audio_first_window_g1_ParamLimits

0x5fe1,	// (0x000431eb) popup_call2_audio_first_window_g1

0x6051,	// (0x0004325b) popup_call2_audio_first_window_g2_ParamLimits

0x6051,	// (0x0004325b) popup_call2_audio_first_window_g2

0x123a,	// (0x0003e444) popup_call2_audio_first_window_g3_ParamLimits

0x123a,	// (0x0003e444) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0004c764) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0004c764) popup_call2_audio_first_window_g

0x612f,	// (0x00043339) popup_call2_audio_first_window_t1_ParamLimits

0x612f,	// (0x00043339) popup_call2_audio_first_window_t1

0x6232,	// (0x0004343c) popup_call2_audio_first_window_t4_ParamLimits

0x6232,	// (0x0004343c) popup_call2_audio_first_window_t4

0x6315,	// (0x0004351f) popup_call2_audio_first_window_t5_ParamLimits

0x6315,	// (0x0004351f) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0004c76f) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0004c76f) popup_call2_audio_first_window_t

0x0957,	// (0x0003db61) bg_popup_call2_act_pane_g1

0x6a26,	// (0x00043c30) popup_cale_lunar_info_window_t1

0x6a34,	// (0x00043c3e) popup_cale_lunar_info_window_t2

0x6a42,	// (0x00043c4c) popup_cale_lunar_info_window_t3

0x0704,	// (0x0003d90e) bg_popup_call2_bubble_pane

0x6416,	// (0x00043620) bg_popup_call2_in_pane_cp01_ParamLimits

0x6416,	// (0x00043620) bg_popup_call2_in_pane_cp01

0x03e0,	// (0x0003d5ea) call_type_pane_cp02

0x645e,	// (0x00043668) popup_call2_audio_out_window_g1_ParamLimits

0x645e,	// (0x00043668) popup_call2_audio_out_window_g1

0x648a,	// (0x00043694) popup_call2_audio_out_window_g2_ParamLimits

0x648a,	// (0x00043694) popup_call2_audio_out_window_g2

0x64b2,	// (0x000436bc) popup_call2_audio_out_window_g3_ParamLimits

0x64b2,	// (0x000436bc) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0004c778) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0004c778) popup_call2_audio_out_window_g

0x64ed,	// (0x000436f7) popup_call2_audio_out_window_t1_ParamLimits

0x64ed,	// (0x000436f7) popup_call2_audio_out_window_t1

0x654c,	// (0x00043756) popup_call2_audio_out_window_t2_ParamLimits

0x654c,	// (0x00043756) popup_call2_audio_out_window_t2

0x65a0,	// (0x000437aa) popup_call2_audio_out_window_t3_ParamLimits

0x65a0,	// (0x000437aa) popup_call2_audio_out_window_t3

0x65b6,	// (0x000437c0) popup_call2_audio_out_window_t4_ParamLimits

0x65b6,	// (0x000437c0) popup_call2_audio_out_window_t4

0x65cc,	// (0x000437d6) popup_call2_audio_out_window_t5_ParamLimits

0x65cc,	// (0x000437d6) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0004c781) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0004c781) popup_call2_audio_out_window_t

0x6630,	// (0x0004383a) bg_popup_call2_in_pane_ParamLimits

0x6630,	// (0x0004383a) bg_popup_call2_in_pane

0x668c,	// (0x00043896) popup_call2_audio_in_window_g1_ParamLimits

0x668c,	// (0x00043896) popup_call2_audio_in_window_g1

0x66c4,	// (0x000438ce) popup_call2_audio_in_window_g2_ParamLimits

0x66c4,	// (0x000438ce) popup_call2_audio_in_window_g2

0x66fc,	// (0x00043906) popup_call2_audio_in_window_g3_ParamLimits

0x66fc,	// (0x00043906) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0004c78e) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0004c78e) popup_call2_audio_in_window_g

0x6754,	// (0x0004395e) popup_call2_audio_in_window_t1_ParamLimits

0x6754,	// (0x0004395e) popup_call2_audio_in_window_t1

0x67d4,	// (0x000439de) popup_call2_audio_in_window_t2_ParamLimits

0x67d4,	// (0x000439de) popup_call2_audio_in_window_t2

0x6854,	// (0x00043a5e) popup_call2_audio_in_window_t3_ParamLimits

0x6854,	// (0x00043a5e) popup_call2_audio_in_window_t3

0x686e,	// (0x00043a78) popup_call2_audio_in_window_t4_ParamLimits

0x686e,	// (0x00043a78) popup_call2_audio_in_window_t4

0x6880,	// (0x00043a8a) popup_call2_audio_in_window_t5_ParamLimits

0x6880,	// (0x00043a8a) popup_call2_audio_in_window_t5

0x6895,	// (0x00043a9f) popup_call2_audio_in_window_t6_ParamLimits

0x6895,	// (0x00043a9f) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0004c797) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0004c797) popup_call2_audio_in_window_t

0x0957,	// (0x0003db61) bg_popup_call2_in_pane_g1

0x6a50,	// (0x00043c5a) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0004c7ff) popup_cale_lunar_info_window_t

0x095f,	// (0x0003db69) bg_popup_call2_rect_pane_ParamLimits

0x095f,	// (0x0003db69) bg_popup_call2_rect_pane

0x0704,	// (0x0003d90e) call2_cli_visual_graphic_pane

0x0704,	// (0x0003d90e) call2_cli_visual_text_pane

0xc394,	// (0x0004959e) smil_status_volume_pane_g3

0x0002,

0x0a8b,	// (0x0003dc95) call2_cli_visual_graphic_pane_g1

0x0a8b,	// (0x0003dc95) call2_cli_visual_graphic_pane_g2

0x0a8b,	// (0x0003dc95) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0004c7a4) call2_cli_visual_graphic_pane_g

0x68c4,	// (0x00043ace) bg_popup_call2_rect_pane_g1

0x0b17,	// (0x0003dd21) bg_popup_call2_rect_pane_g2

0x68cc,	// (0x00043ad6) bg_popup_call2_rect_pane_g3

0x68d4,	// (0x00043ade) bg_popup_call2_rect_pane_g4

0x68dc,	// (0x00043ae6) bg_popup_call2_rect_pane_g5

0x68e4,	// (0x00043aee) bg_popup_call2_rect_pane_g6

0x68ec,	// (0x00043af6) bg_popup_call2_rect_pane_g7

0x68f4,	// (0x00043afe) bg_popup_call2_rect_pane_g8

0x68fc,	// (0x00043b06) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0004c7ab) bg_popup_call2_rect_pane_g

0x6904,	// (0x00043b0e) bg_popup_call2_bubble_pane_g1

0x690c,	// (0x00043b16) bg_popup_call2_bubble_pane_g2

0x6914,	// (0x00043b1e) bg_popup_call2_bubble_pane_g3

0x691c,	// (0x00043b26) bg_popup_call2_bubble_pane_g4

0x6924,	// (0x00043b2e) bg_popup_call2_bubble_pane_g5

0x692c,	// (0x00043b36) bg_popup_call2_bubble_pane_g6

0x6934,	// (0x00043b3e) bg_popup_call2_bubble_pane_g7

0x693c,	// (0x00043b46) bg_popup_call2_bubble_pane_g8

0x6944,	// (0x00043b4e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0004c7be) bg_popup_call2_bubble_pane_g

0x38b9,	// (0x00040ac3) aid_cale_week_size_cell_pane

0x3dd9,	// (0x00040fe3) aid_cams_cif_uncrop_pane_ParamLimits

0x3dd9,	// (0x00040fe3) aid_cams_cif_uncrop_pane

0x3f92,	// (0x0004119c) aid_cams_size_cell_ParamLimits

0x3f92,	// (0x0004119c) aid_cams_size_cell

0x3fa6,	// (0x000411b0) grid_cams_pane_ParamLimits

0x3fc0,	// (0x000411ca) linegrid_cams_pane_ParamLimits

0x4086,	// (0x00041290) call_video_pane_t1

0x4098,	// (0x000412a2) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0004c4ab) call_video_pane_t

0x4437,	// (0x00041641) aid_cale_month_size_cell_pane_ParamLimits

0x4437,	// (0x00041641) aid_cale_month_size_cell_pane

0xf63e,	// (0x0004c848) smil_status_volume_pane_g

0xc3a1,	// (0x000495ab) volume_smil_pane_ParamLimits

0x029b,	// (0x0003d4a5) aid_popup2_width_pane

0x3829,	// (0x00040a33) cell_qdial_pane_g4_ParamLimits

0x3829,	// (0x00040a33) cell_qdial_pane_g4

0x4e5d,	// (0x00042067) aid_blid_cardinal_pane_ParamLimits

0x4e69,	// (0x00042073) aid_blid_destination_pane_ParamLimits

0x4e69,	// (0x00042073) aid_blid_destination_pane

0x095f,	// (0x0003db69) bg_popup_call_poc_act_pane_ParamLimits

0x095f,	// (0x0003db69) bg_popup_call_poc_act_pane

0x095f,	// (0x0003db69) bg_popup_call_poc_inact_pane_ParamLimits

0x095f,	// (0x0003db69) bg_popup_call_poc_inact_pane

0x6954,	// (0x00043b5e) bg_popup_call_poc_act_pane_g1

0x695c,	// (0x00043b66) bg_popup_call_poc_act_pane_g2

0x6964,	// (0x00043b6e) bg_popup_call_poc_act_pane_g3

0x691c,	// (0x00043b26) bg_popup_call_poc_act_pane_g4

0x6924,	// (0x00043b2e) bg_popup_call_poc_act_pane_g5

0x696c,	// (0x00043b76) bg_popup_call_poc_act_pane_g6

0x6934,	// (0x00043b3e) bg_popup_call_poc_act_pane_g7

0x6974,	// (0x00043b7e) bg_popup_call_poc_act_pane_g8

0x0704,	// (0x0003d90e) main_usb_pane

0x6e60,	// (0x0004406a) popup_cale_lunar_info_window

0x42e3,	// (0x000414ed) im_reading_pane_t1_ParamLimits

0x0cda,	// (0x0003dee4) list_im_pane_ParamLimits

0x0ceb,	// (0x0003def5) scroll_pane_cp07_ParamLimits

0x0704,	// (0x0003d90e) grid_highlight_pane_cp012

0x095f,	// (0x0003db69) mup_scale_pane_ParamLimits

0x16c8,	// (0x0003e8d2) main_usb_pane_g1_ParamLimits

0x16c8,	// (0x0003e8d2) main_usb_pane_g1

0x6994,	// (0x00043b9e) main_usb_pane_g2_ParamLimits

0x6994,	// (0x00043b9e) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0004c7e8) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0004c7e8) main_usb_pane_g

0x69aa,	// (0x00043bb4) main_usb_pane_t1_ParamLimits

0x69aa,	// (0x00043bb4) main_usb_pane_t1

0x69bc,	// (0x00043bc6) main_usb_pane_t2_ParamLimits

0x69bc,	// (0x00043bc6) main_usb_pane_t2

0x69ce,	// (0x00043bd8) main_usb_pane_t3_ParamLimits

0x69ce,	// (0x00043bd8) main_usb_pane_t3

0x69e0,	// (0x00043bea) main_usb_pane_t4_ParamLimits

0x69e0,	// (0x00043bea) main_usb_pane_t4

0x69f2,	// (0x00043bfc) main_usb_pane_t5_ParamLimits

0x69f2,	// (0x00043bfc) main_usb_pane_t5

0x6a04,	// (0x00043c0e) main_usb_pane_t6_ParamLimits

0x6a04,	// (0x00043c0e) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0004c7ed) main_usb_pane_t_ParamLimits

0x4e0c,	// (0x00042016) aid_text_placing

0x4e15,	// (0x0004201f) main_location2_pane_t1_ParamLimits

0x4e27,	// (0x00042031) main_location2_pane_t2_ParamLimits

0x4e39,	// (0x00042043) main_location2_pane_t3_ParamLimits

0x4e4b,	// (0x00042055) main_location2_pane_t4_ParamLimits

0x4e4b,	// (0x00042055) main_location2_pane_t4

0xf402,	// (0x0004c60c) main_location2_pane_t_ParamLimits

0x099b,	// (0x0003dba5) find_pinb_pane_g2_ParamLimits

0x099b,	// (0x0003dba5) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0004c35a) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0004c35a) find_pinb_pane_g

0x09a7,	// (0x0003dbb1) find_pinb_pane_t1_ParamLimits

0x09b9,	// (0x0003dbc3) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0004c35f) find_pinb_pane_t_ParamLimits

0x0704,	// (0x0003d90e) main_call3_pane

0x4733,	// (0x0004193d) cale_month_day_heading_pane_t1_ParamLimits

0x4791,	// (0x0004199b) cale_month_day_heading_pane_t2_ParamLimits

0x47f6,	// (0x00041a00) cale_month_day_heading_pane_t3_ParamLimits

0x485b,	// (0x00041a65) cale_month_day_heading_pane_t4_ParamLimits

0x48c0,	// (0x00041aca) cale_month_day_heading_pane_t5_ParamLimits

0x4925,	// (0x00041b2f) cale_month_day_heading_pane_t6_ParamLimits

0x498a,	// (0x00041b94) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0004c4e3) cale_month_day_heading_pane_t_ParamLimits

0x0f2b,	// (0x0003e135) smil_status_volume_pane

0x558f,	// (0x00042799) postcard_address_pane_ParamLimits

0x558f,	// (0x00042799) postcard_address_pane

0x55a1,	// (0x000427ab) postcard_message_pane_ParamLimits

0x55a1,	// (0x000427ab) postcard_message_pane

0x68aa,	// (0x00043ab4) call2_cli_visual_pane_t1_ParamLimits

0x68aa,	// (0x00043ab4) call2_cli_visual_pane_t1

0x73a6,	// (0x000445b0) postcard_message_pane_t1_ParamLimits

0x73a6,	// (0x000445b0) postcard_message_pane_t1

0x738f,	// (0x00044599) postcard_address_pane_t1_ParamLimits

0x738f,	// (0x00044599) postcard_address_pane_t1

0x737b,	// (0x00044585) popup_call3_audio_in_window_ParamLimits

0x737b,	// (0x00044585) popup_call3_audio_in_window

0x7206,	// (0x00044410) bg_popup_call3_in_pane_ParamLimits

0x7206,	// (0x00044410) bg_popup_call3_in_pane

0x727c,	// (0x00044486) popup_call3_audio_in_window_g1_ParamLimits

0x727c,	// (0x00044486) popup_call3_audio_in_window_g1

0x729c,	// (0x000444a6) popup_call3_audio_in_window_g2_ParamLimits

0x729c,	// (0x000444a6) popup_call3_audio_in_window_g2

0x72bc,	// (0x000444c6) popup_call3_audio_in_window_g3_ParamLimits

0x72bc,	// (0x000444c6) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0004c84f) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0004c84f) popup_call3_audio_in_window_g

0x72ed,	// (0x000444f7) popup_call3_audio_in_window_t1_ParamLimits

0x72ed,	// (0x000444f7) popup_call3_audio_in_window_t1

0x732b,	// (0x00044535) popup_call3_audio_in_window_t2_ParamLimits

0x732b,	// (0x00044535) popup_call3_audio_in_window_t2

0x7369,	// (0x00044573) popup_call3_audio_in_window_t3_ParamLimits

0x7369,	// (0x00044573) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0004c858) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0004c858) popup_call3_audio_in_window_t

0x151d,	// (0x0003e727) bg_popup_call3_rect_pane

0x68c4,	// (0x00043ace) bg_popup_call3_rect_pane_g1

0x0b17,	// (0x0003dd21) bg_popup_call3_rect_pane_g2

0x68cc,	// (0x00043ad6) bg_popup_call3_rect_pane_g3

0x68d4,	// (0x00043ade) bg_popup_call3_rect_pane_g4

0x68dc,	// (0x00043ae6) bg_popup_call3_rect_pane_g5

0x68e4,	// (0x00043aee) bg_popup_call3_rect_pane_g6

0x68ec,	// (0x00043af6) bg_popup_call3_rect_pane_g7

0x521f,	// (0x00042429) mup_visualizer_osc_pane

0x15dc,	// (0x0003e7e6) mup_visualizer_spec_pane

0x7236,	// (0x00044440) call3_video_qcif_pane_ParamLimits

0x7236,	// (0x00044440) call3_video_qcif_pane

0x7249,	// (0x00044453) call3_video_qcif_uncrop_pane_ParamLimits

0x7249,	// (0x00044453) call3_video_qcif_uncrop_pane

0x7257,	// (0x00044461) call3_video_subqcif_pane_ParamLimits

0x7257,	// (0x00044461) call3_video_subqcif_pane

0x726b,	// (0x00044475) call3_video_subqcif_uncrop_pane_ParamLimits

0x726b,	// (0x00044475) call3_video_subqcif_uncrop_pane

0x72dc,	// (0x000444e6) popup_call3_audio_in_window_g4_ParamLimits

0x72dc,	// (0x000444e6) popup_call3_audio_in_window_g4

0x71c7,	// (0x000443d1) mup_spec_half_pane

0x71d0,	// (0x000443da) mup_spec_half_pane_cp

0x71b5,	// (0x000443bf) mup_osc_middle_pane

0x71be,	// (0x000443c8) mup_visualizer_osc_pane_g1

0x7195,	// (0x0004439f) mup_spec_bar_pane_ParamLimits

0x7195,	// (0x0004439f) mup_spec_bar_pane

0x7182,	// (0x0004438c) mup_spec_bar_pane_g1

0x718c,	// (0x00044396) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0004c843) mup_spec_bar_pane_g

0x38b9,	// (0x00040ac3) aid_cale_week_size_cell_pane_ParamLimits

0x38cc,	// (0x00040ad6) bg_cale_heading_pane_ParamLimits

0x0b4b,	// (0x0003dd55) bg_cale_pane_cp01_ParamLimits

0x38e0,	// (0x00040aea) cale_week_corner_pane_ParamLimits

0x38f6,	// (0x00040b00) cale_week_day_heading_pane_ParamLimits

0x390a,	// (0x00040b14) cale_week_scroll_pane_g1_ParamLimits

0x391b,	// (0x00040b25) cale_week_scroll_pane_g2_ParamLimits

0x392c,	// (0x00040b36) cale_week_scroll_pane_g3_ParamLimits

0x393d,	// (0x00040b47) cale_week_scroll_pane_g4_ParamLimits

0x394e,	// (0x00040b58) cale_week_scroll_pane_g5_ParamLimits

0x395f,	// (0x00040b69) cale_week_scroll_pane_g6_ParamLimits

0x3970,	// (0x00040b7a) cale_week_scroll_pane_g7_ParamLimits

0x3981,	// (0x00040b8b) cale_week_scroll_pane_g8_ParamLimits

0x3992,	// (0x00040b9c) cale_week_scroll_pane_g9_ParamLimits

0x39a3,	// (0x00040bad) cale_week_scroll_pane_g10_ParamLimits

0x39b4,	// (0x00040bbe) cale_week_scroll_pane_g11_ParamLimits

0x39c5,	// (0x00040bcf) cale_week_scroll_pane_g12_ParamLimits

0x39d6,	// (0x00040be0) cale_week_scroll_pane_g13_ParamLimits

0x39e7,	// (0x00040bf1) cale_week_scroll_pane_g14_ParamLimits

0x39f8,	// (0x00040c02) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0004c3eb) cale_week_scroll_pane_g_ParamLimits

0x3a09,	// (0x00040c13) cale_week_time_pane_ParamLimits

0x3a1a,	// (0x00040c24) grid_cale_week_pane_ParamLimits

0x0b64,	// (0x0003dd6e) listscroll_cale_week_pane_t1

0x3a2d,	// (0x00040c37) scroll_pane_cp08_ParamLimits

0x4478,	// (0x00041682) cale_month_corner_pane_ParamLimits

0x0f01,	// (0x0003e10b) cale_month_pane_t1

0x46fa,	// (0x00041904) cale_month_week_pane_ParamLimits

0x4c58,	// (0x00041e62) popup_call_status_window_g1_ParamLimits

0x4c6c,	// (0x00041e76) popup_call_status_window_g2_ParamLimits

0x4c80,	// (0x00041e8a) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0004c593) popup_call_status_window_g_ParamLimits

0x12a1,	// (0x0003e4ab) aid_call2_pane

0x2872,	// (0x0003fa7c) msg_header_pane_g1

0x558f,	// (0x00042799) postcard_address2_pane_ParamLimits

0x558f,	// (0x00042799) postcard_address2_pane

0x55a1,	// (0x000427ab) postcard_message2_pane_ParamLimits

0x55a1,	// (0x000427ab) postcard_message2_pane

0x7102,	// (0x0004430c) message2_row_pane_ParamLimits

0x7102,	// (0x0004430c) message2_row_pane

0x711e,	// (0x00044328) address2_row_pane_ParamLimits

0x711e,	// (0x00044328) address2_row_pane

0x7131,	// (0x0004433b) postcard_message2_row_pane_g1

0x7139,	// (0x00044343) postcard_message2_row_pane_t1

0x7131,	// (0x0004433b) address2_row_pane_g1

0x7139,	// (0x00044343) address2_row_pane_t1

0x3cd5,	// (0x00040edf) aid_size_cell_vorec

0x0704,	// (0x0003d90e) main_rss_pane

0x7147,	// (0x00044351) rss_list_single_pane_ParamLimits

0x7147,	// (0x00044351) rss_list_single_pane

0x7166,	// (0x00044370) rss_list_single_pane_t1

0x7174,	// (0x0004437e) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0004c83e) rss_list_single_pane_t

0x0704,	// (0x0003d90e) main_camera2_pane

0x0704,	// (0x0003d90e) main_video2_pane

0x741f,	// (0x00044629) cams_zoom_pane_cp2_ParamLimits

0x741f,	// (0x00044629) cams_zoom_pane_cp2

0x743f,	// (0x00044649) image2_vga_pane_ParamLimits

0x743f,	// (0x00044649) image2_vga_pane

0x7490,	// (0x0004469a) main_camera2_pane_g1_ParamLimits

0x7490,	// (0x0004469a) main_camera2_pane_g1

0x74b0,	// (0x000446ba) main_camera2_pane_g2_ParamLimits

0x74b0,	// (0x000446ba) main_camera2_pane_g2

0x74d0,	// (0x000446da) main_camera2_pane_g3_ParamLimits

0x74d0,	// (0x000446da) main_camera2_pane_g3

0x74f0,	// (0x000446fa) main_camera2_pane_g4_ParamLimits

0x74f0,	// (0x000446fa) main_camera2_pane_g4

0x7510,	// (0x0004471a) main_camera2_pane_g5_ParamLimits

0x7510,	// (0x0004471a) main_camera2_pane_g5

0x7530,	// (0x0004473a) main_camera2_pane_g6_ParamLimits

0x7530,	// (0x0004473a) main_camera2_pane_g6

0x7550,	// (0x0004475a) main_camera2_pane_g7_ParamLimits

0x7550,	// (0x0004475a) main_camera2_pane_g7

0x7570,	// (0x0004477a) main_camera2_pane_g8_ParamLimits

0x7570,	// (0x0004477a) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0004c85f) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0004c85f) main_camera2_pane_g

0x75b0,	// (0x000447ba) main_camera2_pane_t1_ParamLimits

0x75b0,	// (0x000447ba) main_camera2_pane_t1

0x75e5,	// (0x000447ef) main_camera2_pane_t2_ParamLimits

0x75e5,	// (0x000447ef) main_camera2_pane_t2

0x760b,	// (0x00044815) main_camera2_pane_t3_ParamLimits

0x760b,	// (0x00044815) main_camera2_pane_t3

0x7669,	// (0x00044873) main_camera2_pane_t4_ParamLimits

0x7669,	// (0x00044873) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0004c872) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0004c872) main_camera2_pane_t

0x76fb,	// (0x00044905) cams_zoom_pane_cp4_ParamLimits

0x76fb,	// (0x00044905) cams_zoom_pane_cp4

0x7711,	// (0x0004491b) image2_cif_pane_ParamLimits

0x7711,	// (0x0004491b) image2_cif_pane

0x773c,	// (0x00044946) image2_subqcif_pane_ParamLimits

0x773c,	// (0x00044946) image2_subqcif_pane

0x7756,	// (0x00044960) main_video2_pane_g1_ParamLimits

0x7756,	// (0x00044960) main_video2_pane_g1

0x7770,	// (0x0004497a) main_video2_pane_g2_ParamLimits

0x7770,	// (0x0004497a) main_video2_pane_g2

0x7786,	// (0x00044990) main_video2_pane_g3_ParamLimits

0x7786,	// (0x00044990) main_video2_pane_g3

0x779c,	// (0x000449a6) main_video2_pane_g4_ParamLimits

0x779c,	// (0x000449a6) main_video2_pane_g4

0x77b2,	// (0x000449bc) main_video2_pane_g5_ParamLimits

0x77b2,	// (0x000449bc) main_video2_pane_g5

0x77c8,	// (0x000449d2) main_video2_pane_g6_ParamLimits

0x77c8,	// (0x000449d2) main_video2_pane_g6

0x0005,

0xf677,	// (0x0004c881) main_video2_pane_g_ParamLimits

0xf677,	// (0x0004c881) main_video2_pane_g

0x77e2,	// (0x000449ec) main_video2_pane_t1_ParamLimits

0x77e2,	// (0x000449ec) main_video2_pane_t1

0x7806,	// (0x00044a10) main_video2_pane_t2_ParamLimits

0x7806,	// (0x00044a10) main_video2_pane_t2

0x7854,	// (0x00044a5e) main_video2_pane_t3_ParamLimits

0x7854,	// (0x00044a5e) main_video2_pane_t3

0x0002,

0xf684,	// (0x0004c88e) main_video2_pane_t_ParamLimits

0xf684,	// (0x0004c88e) main_video2_pane_t

0x6ba9,	// (0x00043db3) call_muted_g2

0x0001,

0xf626,	// (0x0004c830) call_muted_g

0x0704,	// (0x0003d90e) main_mup2_pane

0x7898,	// (0x00044aa2) main_mup2_pane_g1_ParamLimits

0x7898,	// (0x00044aa2) main_mup2_pane_g1

0x78a4,	// (0x00044aae) main_mup2_pane_g2_ParamLimits

0x78a4,	// (0x00044aae) main_mup2_pane_g2

0xc40f,	// (0x00049619) main_mup_pane_g13_cp1

0xc417,	// (0x00049621) mup_volume_pane_cp1

0x78c0,	// (0x00044aca) main_mup2_pane_g4_ParamLimits

0x78c0,	// (0x00044aca) main_mup2_pane_g4

0x78d2,	// (0x00044adc) main_mup2_pane_g5_ParamLimits

0x78d2,	// (0x00044adc) main_mup2_pane_g5

0x78e4,	// (0x00044aee) main_mup2_pane_g6_ParamLimits

0x78e4,	// (0x00044aee) main_mup2_pane_g6

0x78f6,	// (0x00044b00) main_mup2_pane_g7_ParamLimits

0x78f6,	// (0x00044b00) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0004c895) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0004c895) main_mup2_pane_g

0x790e,	// (0x00044b18) main_mup2_pane_t1_ParamLimits

0x790e,	// (0x00044b18) main_mup2_pane_t1

0x7924,	// (0x00044b2e) main_mup2_pane_t2_ParamLimits

0x7924,	// (0x00044b2e) main_mup2_pane_t2

0x793a,	// (0x00044b44) main_mup2_pane_t3_ParamLimits

0x793a,	// (0x00044b44) main_mup2_pane_t3

0x7950,	// (0x00044b5a) main_mup2_pane_t4_ParamLimits

0x7950,	// (0x00044b5a) main_mup2_pane_t4

0x7968,	// (0x00044b72) main_mup2_pane_t5_ParamLimits

0x7968,	// (0x00044b72) main_mup2_pane_t5

0x7980,	// (0x00044b8a) main_mup2_pane_t6_ParamLimits

0x7980,	// (0x00044b8a) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0004c8a4) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0004c8a4) main_mup2_pane_t

0x79b0,	// (0x00044bba) mup2_visualizer_pane_ParamLimits

0x79b0,	// (0x00044bba) mup2_visualizer_pane

0x79de,	// (0x00044be8) mup_progress_pane_cp_ParamLimits

0x79de,	// (0x00044be8) mup_progress_pane_cp

0xc3fa,	// (0x00049604) mup_volume_pane_cp_ParamLimits

0xc3fa,	// (0x00049604) mup_volume_pane_cp

0x79f2,	// (0x00044bfc) mup2_visualizer_pane_g1_ParamLimits

0x79f2,	// (0x00044bfc) mup2_visualizer_pane_g1

0x7a09,	// (0x00044c13) mup2_visualizer_pane_g2_ParamLimits

0x7a09,	// (0x00044c13) mup2_visualizer_pane_g2

0x7a15,	// (0x00044c1f) mup2_visualizer_pane_g3_ParamLimits

0x7a15,	// (0x00044c1f) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0004c8b1) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0004c8b1) mup2_visualizer_pane_g

0x1803,	// (0x0003ea0d) aid_size_cell_fmradio

0x6d8c,	// (0x00043f96) aid_height_parent_landcape

0x0d69,	// (0x0003df73) wml_content_pane_cp

0x0d71,	// (0x0003df7b) wml_tabs_pane

0x0d7a,	// (0x0003df84) popup_wml_miniature_window

0x0d82,	// (0x0003df8c) scroll_pane_cp021

0x0d96,	// (0x0003dfa0) wml_content_pane_comp8

0x0704,	// (0x0003d90e) bg_popup_sub_pane_cp05

0x7a33,	// (0x00044c3d) popup_wml_miniature_window_g1

0x7a3b,	// (0x00044c45) wml_miniature_view_pane

0x7a43,	// (0x00044c4d) aid_size_wml_view

0x7a4b,	// (0x00044c55) wml_miniature_view_pane_g1

0x7a54,	// (0x00044c5e) wml_miniature_view_pane_g2

0x7a5d,	// (0x00044c67) wml_miniature_view_pane_g3

0x7a65,	// (0x00044c6f) wml_miniature_view_pane_g4

0x7a6d,	// (0x00044c77) wml_miniature_view_pane_g5

0x7a75,	// (0x00044c7f) wml_miniature_view_pane_g6

0x7a7d,	// (0x00044c87) wml_miniature_view_pane_g7

0x7a85,	// (0x00044c8f) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0004c8b8) wml_miniature_view_pane_g

0x7a8d,	// (0x00044c97) background_graphic_ParamLimits

0x7a8d,	// (0x00044c97) background_graphic

0x7a99,	// (0x00044ca3) wml_tabs_2_pane

0x7aa2,	// (0x00044cac) wml_tabs_3_pane_ParamLimits

0x7aa2,	// (0x00044cac) wml_tabs_3_pane

0x7ab4,	// (0x00044cbe) wml_tabs_4_pane_ParamLimits

0x7ab4,	// (0x00044cbe) wml_tabs_4_pane

0x7aca,	// (0x00044cd4) wml_tabs_5_pane_ParamLimits

0x7aca,	// (0x00044cd4) wml_tabs_5_pane

0x7ae4,	// (0x00044cee) wml_tabs_pane_g2_ParamLimits

0x7ae4,	// (0x00044cee) wml_tabs_pane_g2

0x7af8,	// (0x00044d02) wml_tabs_pane_g3_ParamLimits

0x7af8,	// (0x00044d02) wml_tabs_pane_g3

0x7b0c,	// (0x00044d16) wml_tabs_2_active_pane_ParamLimits

0x7b0c,	// (0x00044d16) wml_tabs_2_active_pane

0x7b20,	// (0x00044d2a) wml_tabs_2_passive_pane_ParamLimits

0x7b20,	// (0x00044d2a) wml_tabs_2_passive_pane

0x7b34,	// (0x00044d3e) wml_tabs_3_active_pane_cp_ParamLimits

0x7b34,	// (0x00044d3e) wml_tabs_3_active_pane_cp

0x7b49,	// (0x00044d53) wml_tabs_3_passive_pane_ParamLimits

0x7b49,	// (0x00044d53) wml_tabs_3_passive_pane

0x7b5c,	// (0x00044d66) wml_tabs_3_passive_pane_cp_ParamLimits

0x7b5c,	// (0x00044d66) wml_tabs_3_passive_pane_cp

0x7b73,	// (0x00044d7d) tabs_4_active_pane

0x7b7b,	// (0x00044d85) tabs_4_passive_pane

0x7b85,	// (0x00044d8f) tabs_4_passive_pane_cp

0x7b8d,	// (0x00044d97) tabs_4_passive_pane_cp2

0x694c,	// (0x00043b56) aid_height_text

0x51f5,	// (0x000423ff) mup_volume_cont_pane_ParamLimits

0x51f5,	// (0x000423ff) mup_volume_cont_pane

0x34cc,	// (0x000406d6) aid_size_cell_pinb

0x34d6,	// (0x000406e0) aid_size_list_pinb

0x79ca,	// (0x00044bd4) mup2_volume_cont_pane_ParamLimits

0x79ca,	// (0x00044bd4) mup2_volume_cont_pane

0xc3e6,	// (0x000495f0) mup2_volume_cont_pane_g1_ParamLimits

0xc3e6,	// (0x000495f0) mup2_volume_cont_pane_g1

0x31a4,	// (0x000403ae) aid_size_cell_touch_ParamLimits

0x31a4,	// (0x000403ae) aid_size_cell_touch

0x33bc,	// (0x000405c6) touch_pane_ParamLimits

0x33bc,	// (0x000405c6) touch_pane

0x0289,	// (0x0003d493) main_rss2_pane

0x7ba0,	// (0x00044daa) listscroll_rss2_pane

0x7ba9,	// (0x00044db3) rss2_navigation_pane

0x7bb1,	// (0x00044dbb) list_rss2_pane

0x13d4,	// (0x0003e5de) scroll_pane_cp22

0x7bb9,	// (0x00044dc3) rss2_navigation_pane_g1

0x7bc2,	// (0x00044dcc) rss2_navigation_pane_g2

0x7bca,	// (0x00044dd4) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0004c8c9) rss2_navigation_pane_g

0x7bd2,	// (0x00044ddc) rss2_navigation_pane_t1

0x7be0,	// (0x00044dea) rss2_list_single_pane_ParamLimits

0x7be0,	// (0x00044dea) rss2_list_single_pane

0x7bf5,	// (0x00044dff) rss2_list_single_pane_t2

0x7c03,	// (0x00044e0d) rss2_list_single_pane_t3_ParamLimits

0x7c03,	// (0x00044e0d) rss2_list_single_pane_t3

0x7c20,	// (0x00044e2a) rss2_list_single_pane_t4

0x4b44,	// (0x00041d4e) smil_status_pane_g1

0x18e6,	// (0x0003eaf0) main_image2_pane_ParamLimits

0x18e6,	// (0x0003eaf0) main_image2_pane

0x7590,	// (0x0004479a) main_camera2_pane_g9_ParamLimits

0x7590,	// (0x0004479a) main_camera2_pane_g9

0x76be,	// (0x000448c8) main_camera2_pane_t5_ParamLimits

0x76be,	// (0x000448c8) main_camera2_pane_t5

0xc3b6,	// (0x000495c0) main_camera2_pane_t6_ParamLimits

0xc3b6,	// (0x000495c0) main_camera2_pane_t6

0x7c2e,	// (0x00044e38) main_image2_pane_g1_ParamLimits

0x7c2e,	// (0x00044e38) main_image2_pane_g1

0x57c8,	// (0x000429d2) smil2_video_pane_ParamLimits

0x57c8,	// (0x000429d2) smil2_video_pane

0xc060,	// (0x0004926a) aid_zoom_text_primary_cp

0x02e7,	// (0x0003d4f1) popup_preview_fixed_window

0x0cd2,	// (0x0003dedc) im_reading_pane_g1

0x7407,	// (0x00044611) cams2_bc_adjust_pane_cp_ParamLimits

0x7407,	// (0x00044611) cams2_bc_adjust_pane_cp

0x76ed,	// (0x000448f7) cams2_bc_adjust_pane_ParamLimits

0x76ed,	// (0x000448f7) cams2_bc_adjust_pane

0xc41f,	// (0x00049629) cams2_bc_adjust_pane_g1

0xc427,	// (0x00049631) cams2_slider_pane

0xc430,	// (0x0004963a) cams2_slider_pane_g1

0xc439,	// (0x00049643) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0004c8d0) cams2_slider_pane_g

0x35b8,	// (0x000407c2) calc_display_pane_ParamLimits

0x35de,	// (0x000407e8) calc_paper_pane_ParamLimits

0x35ff,	// (0x00040809) grid_calc_pane_ParamLimits

0xc323,	// (0x0004952d) popup_clock_digital_window_t1_ParamLimits

0x17a0,	// (0x0003e9aa) main_image_pane_t1

0x359a,	// (0x000407a4) aid_size_cell_calc_ParamLimits

0x359a,	// (0x000407a4) aid_size_cell_calc

0x6df0,	// (0x00043ffa) popup_blid_sat_info2_window_ParamLimits

0x6df0,	// (0x00043ffa) popup_blid_sat_info2_window

0x7c4c,	// (0x00044e56) aid_size_cell_blid

0x7c54,	// (0x00044e5e) bg_popup_window_pane_cp07

0x7c77,	// (0x00044e81) grid_popup_blid_pane

0x7c81,	// (0x00044e8b) heading_pane_cp05_ParamLimits

0x7c81,	// (0x00044e8b) heading_pane_cp05

0x7d4b,	// (0x00044f55) cell_popup_blid_pane_ParamLimits

0x7d4b,	// (0x00044f55) cell_popup_blid_pane

0x7d6f,	// (0x00044f79) cell_popup_blid_pane_g1

0x7d77,	// (0x00044f81) cell_popup_blid_pane_t1

0x799a,	// (0x00044ba4) mup2_indicator_pane_ParamLimits

0x799a,	// (0x00044ba4) mup2_indicator_pane

0x151d,	// (0x0003e727) mup2_visualizer_osc_pane

0x7a21,	// (0x00044c2b) mup2_visualizer_spec_pane_ParamLimits

0x7a21,	// (0x00044c2b) mup2_visualizer_spec_pane

0x7d85,	// (0x00044f8f) mup2_spec_half_pane

0x7d8e,	// (0x00044f98) mup2_spec_half_pane_cp

0x7d96,	// (0x00044fa0) mup2_spec_bar_pane_ParamLimits

0x7d96,	// (0x00044fa0) mup2_spec_bar_pane

0x7182,	// (0x0004438c) mup2_spec_bar_pane_g1

0x718c,	// (0x00044396) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0004c843) mup2_spec_bar_pane_g

0x7db6,	// (0x00044fc0) mup2_osc_middle_pane

0x71be,	// (0x000443c8) mup2_visualizer_osc_pane_g1

0x0311,	// (0x0003d51b) popup_number_entry_window_t1_ParamLimits

0x0324,	// (0x0003d52e) popup_number_entry_window_t2_ParamLimits

0x0336,	// (0x0003d540) popup_number_entry_window_t3_ParamLimits

0x340e,	// (0x00040618) popup_number_entry_window_t5_ParamLimits

0x340e,	// (0x00040618) popup_number_entry_window_t5

0xf0fb,	// (0x0004c305) popup_number_entry_window_t_ParamLimits

0x0348,	// (0x0003d552) text_title_cp2_ParamLimits

0xc362,	// (0x0004956c) aid_hotspot_pointer_text2_pane

0xc388,	// (0x00049592) main_viewer_pane_g9_ParamLimits

0xc388,	// (0x00049592) main_viewer_pane_g9

0x0f01,	// (0x0003e10b) cale_month_pane_t1_ParamLimits

0x0f3e,	// (0x0003e148) bg_cale_pane_ParamLimits

0x0f56,	// (0x0003e160) list_cale_pane_ParamLimits

0x0b64,	// (0x0003dd6e) listscroll_cale_day_pane_t1

0x0f67,	// (0x0003e171) scroll_pane_cp09_ParamLimits

0x5227,	// (0x00042431) main_mup_eq_pane_t1_ParamLimits

0x5227,	// (0x00042431) main_mup_eq_pane_t1

0x5241,	// (0x0004244b) main_mup_eq_pane_t2_ParamLimits

0x5241,	// (0x0004244b) main_mup_eq_pane_t2

0x525b,	// (0x00042465) main_mup_eq_pane_t3_ParamLimits

0x525b,	// (0x00042465) main_mup_eq_pane_t3

0x5277,	// (0x00042481) main_mup_eq_pane_t4_ParamLimits

0x5277,	// (0x00042481) main_mup_eq_pane_t4

0x5293,	// (0x0004249d) main_mup_eq_pane_t5_ParamLimits

0x5293,	// (0x0004249d) main_mup_eq_pane_t5

0x52af,	// (0x000424b9) main_mup_eq_pane_t6_ParamLimits

0x52af,	// (0x000424b9) main_mup_eq_pane_t6

0x52c3,	// (0x000424cd) main_mup_eq_pane_t7_ParamLimits

0x52c3,	// (0x000424cd) main_mup_eq_pane_t7

0x52d7,	// (0x000424e1) main_mup_eq_pane_t8_ParamLimits

0x52d7,	// (0x000424e1) main_mup_eq_pane_t8

0x52eb,	// (0x000424f5) main_mup_eq_pane_t9_ParamLimits

0x52eb,	// (0x000424f5) main_mup_eq_pane_t9

0x5305,	// (0x0004250f) main_mup_eq_pane_t10_ParamLimits

0x5305,	// (0x0004250f) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0004c692) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0004c692) main_mup_eq_pane_t

0x53b4,	// (0x000425be) mup_equalizer_pane_cp5_ParamLimits

0x53c8,	// (0x000425d2) mup_equalizer_pane_cp6_ParamLimits

0x53dc,	// (0x000425e6) mup_equalizer_pane_cp7_ParamLimits

0x0289,	// (0x0003d493) main_gallery_pane

0x71d8,	// (0x000443e2) smil2_volume_pane

0x71e0,	// (0x000443ea) smil_status_volume_pane_g1_ParamLimits

0x71f3,	// (0x000443fd) smil_status_volume_pane_g2_ParamLimits

0xc394,	// (0x0004959e) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0004c848) smil_status_volume_pane_g_ParamLimits

0x7c54,	// (0x00044e5e) bg_popup_window_pane_cp07_ParamLimits

0x7c62,	// (0x00044e6c) blid_firmament_pane

0x7dbf,	// (0x00044fc9) aid_size_cell_gallery_ParamLimits

0x7dbf,	// (0x00044fc9) aid_size_cell_gallery

0x7dd5,	// (0x00044fdf) grid_gallery_pane_ParamLimits

0x7dd5,	// (0x00044fdf) grid_gallery_pane

0x7dee,	// (0x00044ff8) cell_gallery_pane_ParamLimits

0x7dee,	// (0x00044ff8) cell_gallery_pane

0x7e37,	// (0x00045041) bg_cell_gallery_focus_pane_ParamLimits

0x7e37,	// (0x00045041) bg_cell_gallery_focus_pane

0x7e49,	// (0x00045053) cell_gallery_pane_g1_ParamLimits

0x7e49,	// (0x00045053) cell_gallery_pane_g1

0x7e55,	// (0x0004505f) cell_gallery_pane_g2_ParamLimits

0x7e55,	// (0x0004505f) cell_gallery_pane_g2

0x7e62,	// (0x0004506c) cell_gallery_pane_g3_ParamLimits

0x7e62,	// (0x0004506c) cell_gallery_pane_g3

0x7e6f,	// (0x00045079) cell_gallery_pane_g4_ParamLimits

0x7e6f,	// (0x00045079) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0004c8f6) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0004c8f6) cell_gallery_pane_g

0x7e7b,	// (0x00045085) bg_cell_gallery_focus_pane_g1

0x7e83,	// (0x0004508d) bg_cell_gallery_focus_pane_g2

0x7e8b,	// (0x00045095) bg_cell_gallery_focus_pane_g3

0x7e93,	// (0x0004509d) bg_cell_gallery_focus_pane_g4

0x7e9b,	// (0x000450a5) bg_cell_gallery_focus_pane_g5

0x7ea3,	// (0x000450ad) bg_cell_gallery_focus_pane_g6

0x7eab,	// (0x000450b5) bg_cell_gallery_focus_pane_g7

0x7eb3,	// (0x000450bd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0004c8ff) bg_cell_gallery_focus_pane_g

0x7ebb,	// (0x000450c5) aid_firma_cardinal

0x7ecf,	// (0x000450d9) blid_firmament_pane_t1

0x7ee6,	// (0x000450f0) blid_firmament_pane_t2

0x7efd,	// (0x00045107) blid_firmament_pane_t3

0x7f14,	// (0x0004511e) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0004c910) blid_firmament_pane_t

0x7f2b,	// (0x00045135) blid_sat_info_pane

0x7f3b,	// (0x00045145) blid_sat_info_pane_g1

0x7f3b,	// (0x00045145) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0004c919) blid_sat_info_pane_g

0x7f45,	// (0x0004514f) blid_sat_info_pane_t1

0x7f53,	// (0x0004515d) smil2_volume_content_pane

0x7f5c,	// (0x00045166) smil2_volume_pane_g1

0x7f64,	// (0x0004516e) smil2_volume_content_pane_g1

0x7f6d,	// (0x00045177) smil2_volume_content_pane_g2

0x7f76,	// (0x00045180) smil2_volume_content_pane_g3

0xc453,	// (0x0004965d) smil2_volume_content_pane_g4

0xc45c,	// (0x00049666) smil2_volume_content_pane_g5

0xc465,	// (0x0004966f) smil2_volume_content_pane_g6

0xc46e,	// (0x00049678) smil2_volume_content_pane_g7

0xc477,	// (0x00049681) smil2_volume_content_pane_g8

0xc480,	// (0x0004968a) smil2_volume_content_pane_g9

0xc489,	// (0x00049693) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0004c91e) smil2_volume_content_pane_g

0x3a83,	// (0x00040c8d) cale_week_day_heading_pane_t1_ParamLimits

0x3ab0,	// (0x00040cba) cale_week_day_heading_pane_t2_ParamLimits

0x3add,	// (0x00040ce7) cale_week_day_heading_pane_t3_ParamLimits

0x3b0a,	// (0x00040d14) cale_week_day_heading_pane_t4_ParamLimits

0x3b37,	// (0x00040d41) cale_week_day_heading_pane_t5_ParamLimits

0x3b64,	// (0x00040d6e) cale_week_day_heading_pane_t6_ParamLimits

0x3b91,	// (0x00040d9b) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0004c40a) cale_week_day_heading_pane_t_ParamLimits

0x0b76,	// (0x0003dd80) bg_cale_side_pane_ParamLimits

0x3bbe,	// (0x00040dc8) cale_week_time_pane_t1_ParamLimits

0x3bd6,	// (0x00040de0) cale_week_time_pane_t2_ParamLimits

0x3bee,	// (0x00040df8) cale_week_time_pane_t3_ParamLimits

0x3c06,	// (0x00040e10) cale_week_time_pane_t4_ParamLimits

0x3c1e,	// (0x00040e28) cale_week_time_pane_t5_ParamLimits

0x3c36,	// (0x00040e40) cale_week_time_pane_t6_ParamLimits

0x3c4e,	// (0x00040e58) cale_week_time_pane_t7_ParamLimits

0x3c66,	// (0x00040e70) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0004c419) cale_week_time_pane_t_ParamLimits

0x3c7e,	// (0x00040e88) cell_cale_week_pane_g2_ParamLimits

0x0b76,	// (0x0003dd80) bg_cale_side_pane_cp01_ParamLimits

0x49ef,	// (0x00041bf9) cale_month_week_pane_t1_ParamLimits

0x4a06,	// (0x00041c10) cale_month_week_pane_t2_ParamLimits

0x4a1d,	// (0x00041c27) cale_month_week_pane_t3_ParamLimits

0x4a34,	// (0x00041c3e) cale_month_week_pane_t4_ParamLimits

0x4a4b,	// (0x00041c55) cale_month_week_pane_t5_ParamLimits

0x4a62,	// (0x00041c6c) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0004c4f2) cale_month_week_pane_t_ParamLimits

0xc22a,	// (0x00049434) cell_cale_month_pane_g1_ParamLimits

0x0289,	// (0x0003d493) main_cale_event_viewer_pane

0x0289,	// (0x0003d493) listscroll_cale_event_viewer_pane

0xc492,	// (0x0004969c) list_cale_ev_pane

0xc49a,	// (0x000496a4) scroll_pane_cp023

0xc4a6,	// (0x000496b0) field_cale_ev_pane_ParamLimits

0xc4a6,	// (0x000496b0) field_cale_ev_pane

0xc4c4,	// (0x000496ce) field_cale_ev_content_pane_ParamLimits

0xc4c4,	// (0x000496ce) field_cale_ev_content_pane

0xc4d0,	// (0x000496da) field_cale_ev_pane_g1_ParamLimits

0xc4d0,	// (0x000496da) field_cale_ev_pane_g1

0xc4dc,	// (0x000496e6) field_cale_ev_pane_g2_ParamLimits

0xc4dc,	// (0x000496e6) field_cale_ev_pane_g2

0xc4f4,	// (0x000496fe) field_cale_ev_pane_g3_ParamLimits

0xc4f4,	// (0x000496fe) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0004c933) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0004c933) field_cale_ev_pane_g

0xc50c,	// (0x00049716) field_cale_ev_pane_t1_ParamLimits

0xc50c,	// (0x00049716) field_cale_ev_pane_t1

0xc523,	// (0x0004972d) field_cale_ev_content_pane_t1_ParamLimits

0xc523,	// (0x0004972d) field_cale_ev_content_pane_t1

0x1686,	// (0x0003e890) bg_button_pane_cp01

0x0a36,	// (0x0003dc40) listscroll_cale_week_pane_ParamLimits

0x38af,	// (0x00040ab9) popup_toolbar_window_cp01

0x0b64,	// (0x0003dd6e) listscroll_cale_week_pane_t1_ParamLimits

0x0a36,	// (0x0003dc40) listscroll_cale_day_pane_ParamLimits

0x4b95,	// (0x00041d9f) popup_toolbar_window_cp02

0x0b64,	// (0x0003dd6e) listscroll_cale_day_pane_t1_ParamLimits

0x0a36,	// (0x0003dc40) main_cale_month_pane_ParamLimits

0x705b,	// (0x00044265) popup_toolbar_window_cp03_ParamLimits

0x705b,	// (0x00044265) popup_toolbar_window_cp03

0x5690,	// (0x0004289a) main_image_pane_g2_ParamLimits

0x5690,	// (0x0004289a) main_image_pane_g2

0x56a1,	// (0x000428ab) main_image_pane_g3_ParamLimits

0x56a1,	// (0x000428ab) main_image_pane_g3

0x0002,

0xf51a,	// (0x0004c724) main_image_pane_g_ParamLimits

0xf51a,	// (0x0004c724) main_image_pane_g

0x17a0,	// (0x0003e9aa) main_image_pane_t1_ParamLimits

0x56b2,	// (0x000428bc) main_image_pane_t2_ParamLimits

0x56b2,	// (0x000428bc) main_image_pane_t2

0x56c4,	// (0x000428ce) main_image_pane_t3_ParamLimits

0x56c4,	// (0x000428ce) main_image_pane_t3

0x56ec,	// (0x000428f6) main_image_pane_t4_ParamLimits

0x56ec,	// (0x000428f6) main_image_pane_t4

0x0003,

0xf521,	// (0x0004c72b) main_image_pane_t_ParamLimits

0xf521,	// (0x0004c72b) main_image_pane_t

0x570c,	// (0x00042916) popup_image_details_window_cp01

0x5716,	// (0x00042920) popup_toobar_trans_pane_cp01_ParamLimits

0x5716,	// (0x00042920) popup_toobar_trans_pane_cp01

0x6ed9,	// (0x000440e3) popup_image_details_window_ParamLimits

0x6ed9,	// (0x000440e3) popup_image_details_window

0x6ef1,	// (0x000440fb) popup_image_focus_window

0x73c1,	// (0x000445cb) camera2_autofocus_pane_ParamLimits

0x73c1,	// (0x000445cb) camera2_autofocus_pane

0x0289,	// (0x0003d493) bg_popup_sub_pane_cp06

0xc541,	// (0x0004974b) popup_image_focus_window_g1

0xc549,	// (0x00049753) popup_image_focus_window_g2

0xc551,	// (0x0004975b) popup_image_focus_window_g3

0xc559,	// (0x00049763) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0004c93a) popup_image_focus_window_g

0xc561,	// (0x0004976b) popup_image_focus_window_t1

0xc56f,	// (0x00049779) popup_image_focus_window_t2

0xc57f,	// (0x00049789) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0004c943) popup_image_focus_window_t

0xc58d,	// (0x00049797) camera2_autofocus_pane_g1

0x18e6,	// (0x0003eaf0) bg_tb_trans_pane_cp01

0xc59b,	// (0x000497a5) popup_image_details_window_g1

0xc5ae,	// (0x000497b8) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0004c955) popup_image_details_window_g

0xc5d7,	// (0x000497e1) popup_image_details_window_t1

0xc5e9,	// (0x000497f3) popup_image_details_window_t2

0xc602,	// (0x0004980c) popup_image_details_window_t3

0xc616,	// (0x00049820) popup_image_details_window_t4

0xc631,	// (0x0004983b) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0004c95c) popup_image_details_window_t

0x0a22,	// (0x0003dc2c) bg_calc_paper_pane_ParamLimits

0x0289,	// (0x0003d493) grid_highlight_pane_cp013

0xc070,	// (0x0004927a) list_calc_pane_ParamLimits

0xc082,	// (0x0004928c) scroll_pane_cp024

0x0a36,	// (0x0003dc40) bg_calc_display_pane_ParamLimits

0x36ee,	// (0x000408f8) calc_display_pane_t1_ParamLimits

0x3700,	// (0x0004090a) calc_display_pane_t2_ParamLimits

0xc08a,	// (0x00049294) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0004c38c) calc_display_pane_t_ParamLimits

0x37ba,	// (0x000409c4) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0004c3a9) cell_calc_pane_g

0x37c3,	// (0x000409cd) cell_calc_pane_t1

0x0a95,	// (0x0003dc9f) grid_highlight_pane_cp02_ParamLimits

0x0aab,	// (0x0003dcb5) toolbar_button_pane_cp01_ParamLimits

0x0aab,	// (0x0003dcb5) toolbar_button_pane_cp01

0x17e5,	// (0x0003e9ef) temp_image_control_pane_ParamLimits

0x17e5,	// (0x0003e9ef) temp_image_control_pane

0x18e6,	// (0x0003eaf0) main_mp3_pane

0xc64b,	// (0x00049855) temp_image_control_pane_g1_ParamLimits

0xc64b,	// (0x00049855) temp_image_control_pane_g1

0xc659,	// (0x00049863) temp_image_control_pane_g2_ParamLimits

0xc659,	// (0x00049863) temp_image_control_pane_g2

0xc66b,	// (0x00049875) temp_image_control_pane_g3_ParamLimits

0xc66b,	// (0x00049875) temp_image_control_pane_g3

0x7faf,	// (0x000451b9) temp_image_control_pane_g4_ParamLimits

0x7faf,	// (0x000451b9) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0004c967) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0004c967) temp_image_control_pane_g

0xc64b,	// (0x00049855) main_mp3_pane_g1

0x7fc2,	// (0x000451cc) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0004c970) main_mp3_pane_g

0xc6ae,	// (0x000498b8) main_mp3_pane_t1

0x0bdb,	// (0x0003dde5) main_camera_pane_g8_ParamLimits

0x0bdb,	// (0x0003dde5) main_camera_pane_g8

0x3f38,	// (0x00041142) main_video_pane_g7_ParamLimits

0x3f38,	// (0x00041142) main_video_pane_g7

0xc3d4,	// (0x000495de) main_camera2_pane_t7_ParamLimits

0xc3d4,	// (0x000495de) main_camera2_pane_t7

0x0d29,	// (0x0003df33) scroll_pane_cp025_ParamLimits

0x0d29,	// (0x0003df33) scroll_pane_cp025

0x0d3d,	// (0x0003df47) scroll_pane_cp026_ParamLimits

0x0d3d,	// (0x0003df47) scroll_pane_cp026

0x0d4c,	// (0x0003df56) wml_content_pane_ParamLimits

0x0289,	// (0x0003d493) main_touch_calib_pane

0x808b,	// (0x00045295) main_touch_calib_pane_g1

0x8097,	// (0x000452a1) main_touch_calib_pane_g2

0x80a3,	// (0x000452ad) main_touch_calib_pane_g3

0x80af,	// (0x000452b9) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0004c98e) main_touch_calib_pane_g

0x80bb,	// (0x000452c5) main_touch_calib_pane_t1

0x80d5,	// (0x000452df) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0004c997) main_touch_calib_pane_t

0x145e,	// (0x0003e668) mup_progress_pane_cp02

0x147d,	// (0x0003e687) navi_pane_g1

0x14df,	// (0x0003e6e9) navi_pane_mp_t3

0x18e6,	// (0x0003eaf0) main_mp3_pane_ParamLimits

0x70ac,	// (0x000442b6) navi_pane_ParamLimits

0xc64b,	// (0x00049855) main_mp3_pane_g1_ParamLimits

0x7fc2,	// (0x000451cc) main_mp3_pane_g2_ParamLimits

0x7fd0,	// (0x000451da) main_mp3_pane_g3_ParamLimits

0x7fd0,	// (0x000451da) main_mp3_pane_g3

0x7fde,	// (0x000451e8) main_mp3_pane_g4_ParamLimits

0x7fde,	// (0x000451e8) main_mp3_pane_g4

0xc67b,	// (0x00049885) main_mp3_pane_g5_ParamLimits

0xc67b,	// (0x00049885) main_mp3_pane_g5

0xc689,	// (0x00049893) main_mp3_pane_g6_ParamLimits

0xc689,	// (0x00049893) main_mp3_pane_g6

0xc696,	// (0x000498a0) main_mp3_pane_g7_ParamLimits

0xc696,	// (0x000498a0) main_mp3_pane_g7

0xc6a2,	// (0x000498ac) main_mp3_pane_g8_ParamLimits

0xc6a2,	// (0x000498ac) main_mp3_pane_g8

0xf766,	// (0x0004c970) main_mp3_pane_g_ParamLimits

0x7fea,	// (0x000451f4) main_mp3_pane_t2

0x7ff8,	// (0x00045202) main_mp3_pane_t3

0xc6bc,	// (0x000498c6) main_mp3_pane_t4

0xc6ca,	// (0x000498d4) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0004c981) main_mp3_pane_t

0xc6d8,	// (0x000498e2) mup_progress_pane_cp01

0xc060,	// (0x0004926a) aid_zoom_text_secondary2

0xc492,	// (0x0004969c) list_cale_ev2_pane

0xc49a,	// (0x000496a4) scroll_pane_cp023_ParamLimits

0x812b,	// (0x00045335) field_cale_ev2_pane_ParamLimits

0x812b,	// (0x00045335) field_cale_ev2_pane

0xc6e0,	// (0x000498ea) field_cale_ev2_pane_g1_ParamLimits

0xc6e0,	// (0x000498ea) field_cale_ev2_pane_g1

0xc6ec,	// (0x000498f6) field_cale_ev2_pane_g2_ParamLimits

0xc6ec,	// (0x000498f6) field_cale_ev2_pane_g2

0xc704,	// (0x0004990e) field_cale_ev2_pane_g3_ParamLimits

0xc704,	// (0x0004990e) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0004c9a2) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0004c9a2) field_cale_ev2_pane_g

0x28fb,	// (0x0003fb05) field_cale_ev2_pane_t1_ParamLimits

0x28fb,	// (0x0003fb05) field_cale_ev2_pane_t1

0x2912,	// (0x0003fb1c) field_cale_ev2_pane_t2_ParamLimits

0x2912,	// (0x0003fb1c) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0004c9ab) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0004c9ab) field_cale_ev2_pane_t

0x5545,	// (0x0004274f) main_postcard_pane_g5_ParamLimits

0x5545,	// (0x0004274f) main_postcard_pane_g5

0x555b,	// (0x00042765) main_postcard_pane_g6_ParamLimits

0x555b,	// (0x00042765) main_postcard_pane_g6

0x3cf8,	// (0x00040f02) camera2_autofocus_pane_cp_ParamLimits

0x3cf8,	// (0x00040f02) camera2_autofocus_pane_cp

0x18e6,	// (0x0003eaf0) main_mup3_pane

0x816b,	// (0x00045375) main_mup3_pane_g1_ParamLimits

0x816b,	// (0x00045375) main_mup3_pane_g1

0x818d,	// (0x00045397) main_mup3_pane_g2_ParamLimits

0x818d,	// (0x00045397) main_mup3_pane_g2

0x820b,	// (0x00045415) main_mup3_pane_g3_ParamLimits

0x820b,	// (0x00045415) main_mup3_pane_g3

0x824d,	// (0x00045457) main_mup3_pane_g4_ParamLimits

0x824d,	// (0x00045457) main_mup3_pane_g4

0x828f,	// (0x00045499) main_mup3_pane_g5_ParamLimits

0x828f,	// (0x00045499) main_mup3_pane_g5

0x82d1,	// (0x000454db) main_mup3_pane_g6_ParamLimits

0x82d1,	// (0x000454db) main_mup3_pane_g6

0xc728,	// (0x00049932) main_mup3_pane_g7_ParamLimits

0xc728,	// (0x00049932) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0004c9bb) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0004c9bb) main_mup3_pane_g

0x834b,	// (0x00045555) main_mup3_pane_t1_ParamLimits

0x834b,	// (0x00045555) main_mup3_pane_t1

0x83bb,	// (0x000455c5) main_mup3_pane_t2_ParamLimits

0x83bb,	// (0x000455c5) main_mup3_pane_t2

0x848b,	// (0x00045695) main_mup3_pane_t4_ParamLimits

0x848b,	// (0x00045695) main_mup3_pane_t4

0x84e1,	// (0x000456eb) main_mup3_pane_t5_ParamLimits

0x84e1,	// (0x000456eb) main_mup3_pane_t5

0x8595,	// (0x0004579f) main_mup3_pane_t6_ParamLimits

0x8595,	// (0x0004579f) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0004c9cc) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0004c9cc) main_mup3_pane_t

0x8649,	// (0x00045853) mup3_progress_pane_ParamLimits

0x8649,	// (0x00045853) mup3_progress_pane

0x86cb,	// (0x000458d5) popup_mup3_control_window_ParamLimits

0x86cb,	// (0x000458d5) popup_mup3_control_window

0xc736,	// (0x00049940) popup_mup3_text_window

0x86fd,	// (0x00045907) mup3_progress_pane_t1

0x8714,	// (0x0004591e) mup3_progress_pane_t2

0xc73e,	// (0x00049948) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0004c9d9) mup3_progress_pane_t

0xc755,	// (0x0004995f) mup_progress_pane_cp03

0x0289,	// (0x0003d493) bg_tb_trans_pane_cp04

0x872b,	// (0x00045935) mup3_volume_pane

0x8733,	// (0x0004593d) popup_mup3_control_window_g1

0x873c,	// (0x00045946) mup3_volume_pane_g1

0x8745,	// (0x0004594f) mup3_volume_pane_g2

0x874e,	// (0x00045958) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0004c9e0) mup3_volume_pane_g

0x0289,	// (0x0003d493) bg_tb_trans_pane_cp03

0xc765,	// (0x0004996f) popup_mup3_text_window_g1

0xc76d,	// (0x00049977) popup_mup3_text_window_t1

0x0a7e,	// (0x0003dc88) list_calc_item_pane_g1_ParamLimits

0x7b97,	// (0x00044da1) mup_volume_pane_cp_g1

0x80ef,	// (0x000452f9) main_touch_calib_pane_t3

0x8103,	// (0x0004530d) main_touch_calib_pane_t4

0x8117,	// (0x00045321) main_touch_calib_pane_t5

0x0293,	// (0x0003d49d) aid_cell_size_toolbar2

0x029b,	// (0x0003d4a5) aid_popup3_width_pane

0xc058,	// (0x00049262) aid_zoom_text_msg_primary

0xc14a,	// (0x00049354) vorec_t7

0x0a42,	// (0x0003dc4c) bg_calc_paper_pane_g1_ParamLimits

0x0a4e,	// (0x0003dc58) bg_calc_paper_pane_g2_ParamLimits

0x0a5a,	// (0x0003dc64) bg_calc_paper_pane_g3_ParamLimits

0x0a66,	// (0x0003dc70) bg_calc_paper_pane_g4_ParamLimits

0x0a72,	// (0x0003dc7c) bg_calc_paper_pane_g5_ParamLimits

0x3747,	// (0x00040951) bg_calc_paper_pane_g6_ParamLimits

0x3756,	// (0x00040960) bg_calc_paper_pane_g7_ParamLimits

0x3765,	// (0x0004096f) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0004c393) bg_calc_paper_pane_g_ParamLimits

0x3778,	// (0x00040982) calc_bg_paper_pane_g9_ParamLimits

0x3e46,	// (0x00041050) image_qvga_pane_ParamLimits

0x3e46,	// (0x00041050) image_qvga_pane

0x095f,	// (0x0003db69) bg_popup_sub_pane_cp04_ParamLimits

0x171c,	// (0x0003e926) popup_mup_playback_window_g1_ParamLimits

0x1728,	// (0x0003e932) popup_mup_playback_window_t1_ParamLimits

0x173d,	// (0x0003e947) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0004c71f) popup_mup_playback_window_t_ParamLimits

0x78b4,	// (0x00044abe) main_mup2_pane_g3_ParamLimits

0x78b4,	// (0x00044abe) main_mup2_pane_g3

0x40ee,	// (0x000412f8) popup_toolbar_window_cp04

0x5cab,	// (0x00042eb5) popup_call2_audio_second_window_g3_ParamLimits

0x5cab,	// (0x00042eb5) popup_call2_audio_second_window_g3

0x60b5,	// (0x000432bf) popup_call2_audio_first_window_g4_ParamLimits

0x60b5,	// (0x000432bf) popup_call2_audio_first_window_g4

0x6734,	// (0x0004393e) popup_call2_audio_in_window_g4_ParamLimits

0x6734,	// (0x0004393e) popup_call2_audio_in_window_g4

0x5672,	// (0x0004287c) aid_area_sk_bg_cut_ParamLimits

0x5672,	// (0x0004287c) aid_area_sk_bg_cut

0x1752,	// (0x0003e95c) aid_area_sk_bg_cut_2_ParamLimits

0x1752,	// (0x0003e95c) aid_area_sk_bg_cut_2

0x7e27,	// (0x00045031) aid_placing_details_win

0x7e2f,	// (0x00045039) aid_placing_details_win_2

0xc58d,	// (0x00049797) camera2_autofocus_pane_g1_ParamLimits

0x335b,	// (0x00040565) popup_fixed_preview_cale_window_ParamLimits

0x335b,	// (0x00040565) popup_fixed_preview_cale_window

0x152e,	// (0x0003e738) navi_slider_pane_g3

0x1537,	// (0x0003e741) navi_slider_pane_g4

0x1540,	// (0x0003e74a) navi_slider_pane_g5

0x152e,	// (0x0003e738) navi_slider_pane_g6

0xc349,	// (0x00049553) navi_slider_pane_g7

0x1653,	// (0x0003e85d) mup_scale_pane_g3

0x165c,	// (0x0003e866) mup_scale_pane_g4

0x1665,	// (0x0003e86f) mup_scale_pane_g5

0x53f0,	// (0x000425fa) mup_scale_pane_g6

0x53f9,	// (0x00042603) mup_scale_pane_g7

0x152e,	// (0x0003e738) cams2_slider_pane_g3

0x7c44,	// (0x00044e4e) cams2_slider_pane_g4

0xc442,	// (0x0004964c) cams2_slider_pane_g5

0x152e,	// (0x0003e738) cams2_slider_pane_g6

0xc44a,	// (0x00049654) cams2_slider_pane_g7

0x7f3b,	// (0x00045145) camera2_autofocus_pane_cp_g1

0xc77b,	// (0x00049985) bg_popup_preview_window_pane_cp02_ParamLimits

0xc77b,	// (0x00049985) bg_popup_preview_window_pane_cp02

0xc787,	// (0x00049991) list_fp_cale_pane_ParamLimits

0xc787,	// (0x00049991) list_fp_cale_pane

0xc793,	// (0x0004999d) popup_fixed_preview_cale_window_t1_ParamLimits

0xc793,	// (0x0004999d) popup_fixed_preview_cale_window_t1

0x8757,	// (0x00045961) popup_fixed_preview_cale_window_t2_ParamLimits

0x8757,	// (0x00045961) popup_fixed_preview_cale_window_t2

0x876c,	// (0x00045976) popup_fixed_preview_cale_window_t3_ParamLimits

0x876c,	// (0x00045976) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0004c9e7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0004c9e7) popup_fixed_preview_cale_window_t

0x8781,	// (0x0004598b) list_single_fp_cale_pane_ParamLimits

0x8781,	// (0x0004598b) list_single_fp_cale_pane

0xc7b1,	// (0x000499bb) list_single_fp_cale_pane_g1_ParamLimits

0xc7b1,	// (0x000499bb) list_single_fp_cale_pane_g1

0xc7bd,	// (0x000499c7) list_single_fp_cale_pane_g2_ParamLimits

0xc7bd,	// (0x000499c7) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0004c9ee) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0004c9ee) list_single_fp_cale_pane_g

0xc7d6,	// (0x000499e0) list_single_fp_cale_pane_t1_ParamLimits

0xc7d6,	// (0x000499e0) list_single_fp_cale_pane_t1

0xc7e8,	// (0x000499f2) list_single_fp_cale_pane_t2_ParamLimits

0xc7e8,	// (0x000499f2) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0004c9f5) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0004c9f5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0289,	// (0x0003d493) main_dialer_pane

0x8796,	// (0x000459a0) aid_cell_size_keypad

0x87a0,	// (0x000459aa) dialer_ne_pane

0x87a8,	// (0x000459b2) grid_dialer_command_1_pane

0x87b0,	// (0x000459ba) grid_dialer_command_2_pane

0x87b8,	// (0x000459c2) grid_dialer_keypad_pane

0x87ca,	// (0x000459d4) bg_popup_call_pane_cp06_ParamLimits

0x87ca,	// (0x000459d4) bg_popup_call_pane_cp06

0x87d6,	// (0x000459e0) dialer_ne_clear_pane_ParamLimits

0x87d6,	// (0x000459e0) dialer_ne_clear_pane

0xc81b,	// (0x00049a25) dialer_ne_pane_g1

0xc823,	// (0x00049a2d) dialer_ne_pane_t1_ParamLimits

0xc823,	// (0x00049a2d) dialer_ne_pane_t1

0x87e2,	// (0x000459ec) dialer_ne_pane_t2_ParamLimits

0x87e2,	// (0x000459ec) dialer_ne_pane_t2

0x880c,	// (0x00045a16) dialer_ne_pane_t3_ParamLimits

0x880c,	// (0x00045a16) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0004c9fa) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0004c9fa) dialer_ne_pane_t

0x883c,	// (0x00045a46) dialer_ne_pane_t3_copy1_ParamLimits

0x883c,	// (0x00045a46) dialer_ne_pane_t3_copy1

0x886b,	// (0x00045a75) cell_dialer_keypad_pane_ParamLimits

0x886b,	// (0x00045a75) cell_dialer_keypad_pane

0x8882,	// (0x00045a8c) cell_dialer_command_1_pane_ParamLimits

0x8882,	// (0x00045a8c) cell_dialer_command_1_pane

0x8898,	// (0x00045aa2) cell_dialer_command_2_pane_ParamLimits

0x8898,	// (0x00045aa2) cell_dialer_command_2_pane

0xc835,	// (0x00049a3f) bg_button_pane_cp02_ParamLimits

0xc835,	// (0x00049a3f) bg_button_pane_cp02

0x88a7,	// (0x00045ab1) cell_dialer_keypad_pane_g1_ParamLimits

0x88a7,	// (0x00045ab1) cell_dialer_keypad_pane_g1

0xc835,	// (0x00049a3f) bg_button_pane_cp03_ParamLimits

0xc835,	// (0x00049a3f) bg_button_pane_cp03

0x88bb,	// (0x00045ac5) cell_dialer_command_1_pane_g1_ParamLimits

0x88bb,	// (0x00045ac5) cell_dialer_command_1_pane_g1

0xc841,	// (0x00049a4b) bg_button_pane_cp04

0x88cf,	// (0x00045ad9) cell_dialer_command_2_pane_g1

0x151d,	// (0x0003e727) bg_button_pane_cp06

0xc849,	// (0x00049a53) dialer_ne_clear_pane_g1

0x4f34,	// (0x0004213e) navi_pane_g2

0x4f62,	// (0x0004216c) navi_pane_g3

0x0002,

0xf418,	// (0x0004c622) navi_pane_g

0x4f8b,	// (0x00042195) navi_pane_mv_g2

0x4fb2,	// (0x000421bc) navi_pane_mv_g5

0x4fba,	// (0x000421c4) navi_pane_mv_t1

0x0a36,	// (0x0003dc40) main_clock2_pane

0x8903,	// (0x00045b0d) main_clock2_list_pane_ParamLimits

0x8903,	// (0x00045b0d) main_clock2_list_pane

0x8939,	// (0x00045b43) main_clock2_pane_t1_ParamLimits

0x8939,	// (0x00045b43) main_clock2_pane_t1

0x8975,	// (0x00045b7f) main_clock2_pane_t2_ParamLimits

0x8975,	// (0x00045b7f) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0004ca01) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0004ca01) main_clock2_pane_t

0x89ff,	// (0x00045c09) popup_clock_analogue_window_cp03_ParamLimits

0x89ff,	// (0x00045c09) popup_clock_analogue_window_cp03

0x8a24,	// (0x00045c2e) popup_clock_digital_window_cp02_ParamLimits

0x8a24,	// (0x00045c2e) popup_clock_digital_window_cp02

0x8a95,	// (0x00045c9f) main_clock2_list_single_pane_ParamLimits

0x8a95,	// (0x00045c9f) main_clock2_list_single_pane

0x151d,	// (0x0003e727) list_highlight_pane_cp05

0xc851,	// (0x00049a5b) main_clock2_list_single_pane_t1

0x40ee,	// (0x000412f8) popup_toolbar_window_cp04_ParamLimits

0x7f7f,	// (0x00045189) camera2_autofocus_pane_g2_ParamLimits

0x7f7f,	// (0x00045189) camera2_autofocus_pane_g2

0x7f8b,	// (0x00045195) camera2_autofocus_pane_g3_ParamLimits

0x7f8b,	// (0x00045195) camera2_autofocus_pane_g3

0x7f97,	// (0x000451a1) camera2_autofocus_pane_g4_ParamLimits

0x7f97,	// (0x000451a1) camera2_autofocus_pane_g4

0x7fa3,	// (0x000451ad) camera2_autofocus_pane_g5_ParamLimits

0x7fa3,	// (0x000451ad) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0004c94a) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0004c94a) camera2_autofocus_pane_g

0x814b,	// (0x00045355) camera2_autofocus_pane_cp_g2

0x8153,	// (0x0004535d) camera2_autofocus_pane_cp_g3

0x815b,	// (0x00045365) camera2_autofocus_pane_cp_g4

0x8163,	// (0x0004536d) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0004c9b0) camera2_autofocus_pane_cp_g

0x87c2,	// (0x000459cc) popup_dialer_spcha_window

0x0289,	// (0x0003d493) bg_popup_sub_pane_cp07

0xc85f,	// (0x00049a69) list_spcha_pane

0xc867,	// (0x00049a71) list_single_spcha_pane_ParamLimits

0xc867,	// (0x00049a71) list_single_spcha_pane

0x0289,	// (0x0003d493) list_highlight_pane_cp06

0xc878,	// (0x00049a82) list_single_spcha_pane_t1

0x64de,	// (0x000436e8) popup_call2_audio_out_window_g4_ParamLimits

0x64de,	// (0x000436e8) popup_call2_audio_out_window_g4

0x0289,	// (0x0003d493) main_imed2_pane

0x6ef9,	// (0x00044103) popup_imed_adjust2_window

0x6f0c,	// (0x00044116) popup_imed_trans_window_ParamLimits

0x6f0c,	// (0x00044116) popup_imed_trans_window

0x7cad,	// (0x00044eb7) popup_blid_sat_info2_window_t1

0x7cbb,	// (0x00044ec5) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0004c8df) popup_blid_sat_info2_window_t

0x8b3f,	// (0x00045d49) aid_size_cell_colour_35

0x8b5f,	// (0x00045d69) aid_size_cell_colour_112

0x8b7f,	// (0x00045d89) aid_size_cell_effect

0x6db2,	// (0x00043fbc) bg_tb_trans_pane_cp02

0x105e,	// (0x0003e268) heading_imed_pane

0x8b9f,	// (0x00045da9) listscroll_imed_pane

0xc886,	// (0x00049a90) heading_imed_pane_g1

0xc88e,	// (0x00049a98) heading_imed_pane_t1

0xc89c,	// (0x00049aa6) grid_imed_colour_35_pane_ParamLimits

0xc89c,	// (0x00049aa6) grid_imed_colour_35_pane

0x8bab,	// (0x00045db5) grid_imed_effect_pane

0xc8b3,	// (0x00049abd) list_imed_aspect_pane

0x8bc1,	// (0x00045dcb) scroll_pane_cp027_ParamLimits

0x8bc1,	// (0x00045dcb) scroll_pane_cp027

0x8bd2,	// (0x00045ddc) cell_imed_effect_pane_ParamLimits

0x8bd2,	// (0x00045ddc) cell_imed_effect_pane

0xc8bb,	// (0x00049ac5) cell_imed_colour_pane_ParamLimits

0xc8bb,	// (0x00049ac5) cell_imed_colour_pane

0xc8fd,	// (0x00049b07) cell_imed_colour_pane_g1_ParamLimits

0xc8fd,	// (0x00049b07) cell_imed_colour_pane_g1

0xc90e,	// (0x00049b18) hgihlgiht_grid_pane_cp016_ParamLimits

0xc90e,	// (0x00049b18) hgihlgiht_grid_pane_cp016

0x8bf9,	// (0x00045e03) cell_imed_effect_pane_g1

0x8c01,	// (0x00045e0b) grid_highlight_pane_cp017

0xc91f,	// (0x00049b29) list_imed_single_pane_ParamLimits

0xc91f,	// (0x00049b29) list_imed_single_pane

0x0289,	// (0x0003d493) list_highlight_pane_cp07

0xc934,	// (0x00049b3e) list_imed_aspect_pane_comp1_t1

0x6db2,	// (0x00043fbc) bg_tb_trans_pane_cp05

0xc956,	// (0x00049b60) popup_imed_adjust2_window_g1

0xc97d,	// (0x00049b87) popup_imed_adjust2_window_t1

0xc995,	// (0x00049b9f) slider_imed_adjust_pane

0xc9a9,	// (0x00049bb3) slider_imed_adjust_pane_g1

0xc9b9,	// (0x00049bc3) slider_imed_adjust_pane_g2

0xc9c9,	// (0x00049bd3) slider_imed_adjust_pane_g3

0xc9da,	// (0x00049be4) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0004ca1e) slider_imed_adjust_pane_g

0x8c0a,	// (0x00045e14) aid_size_cell_clipart2

0x8c16,	// (0x00045e20) grid_imed_clipart_pane

0xc9eb,	// (0x00049bf5) scroll_pane_cp031

0x8c20,	// (0x00045e2a) cell_imed_clipart_pane_ParamLimits

0x8c20,	// (0x00045e2a) cell_imed_clipart_pane

0x8c42,	// (0x00045e4c) cell_imed_clipart_pane_g1

0x0289,	// (0x0003d493) grid_highlight_pane_cp014

0x8918,	// (0x00045b22) main_clock2_pane_g1_ParamLimits

0x8918,	// (0x00045b22) main_clock2_pane_g1

0x8a40,	// (0x00045c4a) aid_call2_pane_cp10

0x8a52,	// (0x00045c5c) aid_call_pane_cp10

0x1452,	// (0x0003e65c) popup_clock_analogue_window_cp10_g1

0x1452,	// (0x0003e65c) popup_clock_analogue_window_cp10_g2

0x8a64,	// (0x00045c6e) popup_clock_analogue_window_cp10_g3

0x8a64,	// (0x00045c6e) popup_clock_analogue_window_cp10_g4

0x1452,	// (0x0003e65c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0004ca0c) popup_clock_analogue_window_cp10_g

0x8a76,	// (0x00045c80) popup_clock_analogue_window_cp10_t1

0x8aa7,	// (0x00045cb1) clock_digital_number_pane_cp10_ParamLimits

0x8aa7,	// (0x00045cb1) clock_digital_number_pane_cp10

0x8abf,	// (0x00045cc9) clock_digital_number_pane_cp11_ParamLimits

0x8abf,	// (0x00045cc9) clock_digital_number_pane_cp11

0x8ad7,	// (0x00045ce1) clock_digital_number_pane_cp12_ParamLimits

0x8ad7,	// (0x00045ce1) clock_digital_number_pane_cp12

0x8aef,	// (0x00045cf9) clock_digital_number_pane_cp13_ParamLimits

0x8aef,	// (0x00045cf9) clock_digital_number_pane_cp13

0x8b07,	// (0x00045d11) clock_digital_separator_pane_cp10_ParamLimits

0x8b07,	// (0x00045d11) clock_digital_separator_pane_cp10

0x8b1f,	// (0x00045d29) popup_clock_digital_window_cp02_t1_ParamLimits

0x8b1f,	// (0x00045d29) popup_clock_digital_window_cp02_t1

0x0957,	// (0x0003db61) clock_digital_number_pane_cp10_g1

0x0957,	// (0x0003db61) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0004ca27) clock_digital_number_pane_cp10_g

0x0957,	// (0x0003db61) clock_digital_separator_pane_cp10_g1

0x0957,	// (0x0003db61) clock_digital_separator_pane_g2_cp10

0x14ed,	// (0x0003e6f7) navi_pane_vded_g4

0x14f6,	// (0x0003e700) navi_pane_vded_g5

0x14ff,	// (0x0003e709) navi_pane_vded_t1

0x0289,	// (0x0003d493) main_vded_pane

0x8c4b,	// (0x00045e55) main_vded_pane_g1

0x8c55,	// (0x00045e5f) main_vded_pane_g2

0x8c5f,	// (0x00045e69) main_vded_pane_g3

0x0002,

0xf822,	// (0x0004ca2c) main_vded_pane_g

0x8c69,	// (0x00045e73) main_vded_pane_t1

0x8c77,	// (0x00045e81) main_vded_pane_t2

0x0001,

0xf829,	// (0x0004ca33) main_vded_pane_t

0x8c85,	// (0x00045e8f) vded_slider_pane

0x8c8d,	// (0x00045e97) vded_video_pane

0xc9f3,	// (0x00049bfd) vded_video_pane_g1

0x8c95,	// (0x00045e9f) vded_video_pane_g2

0x7f3b,	// (0x00045145) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0004ca38) vded_video_pane_g

0xc9fd,	// (0x00049c07) vded_slider_pane_g1

0x7b97,	// (0x00044da1) vded_slider_pane_g2

0xca06,	// (0x00049c10) vded_slider_pane_g3

0xca0f,	// (0x00049c19) vded_slider_pane_g4

0xca18,	// (0x00049c22) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0004ca3f) vded_slider_pane_g

0x86b3,	// (0x000458bd) mup3_rocker_pane_ParamLimits

0x86b3,	// (0x000458bd) mup3_rocker_pane

0x8c9e,	// (0x00045ea8) mup3_control_keys_pane_g1

0x8ca6,	// (0x00045eb0) mup3_control_keys_pane_g2

0x8cae,	// (0x00045eb8) mup3_control_keys_pane_g3

0x8cb6,	// (0x00045ec0) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0004ca4a) mup3_control_keys_pane_g

0x3392,	// (0x0004059c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3392,	// (0x0004059c) popup_toolbar2_fixed_window_cp01

0x86e7,	// (0x000458f1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x86e7,	// (0x000458f1) popup_toolbar2_fixed_window_cp02

0x5e1d,	// (0x00043027) popup_call2_audio_second_window_t4_ParamLimits

0x5e1d,	// (0x00043027) popup_call2_audio_second_window_t4

0x634b,	// (0x00043555) popup_call2_audio_first_window_t6_ParamLimits

0x634b,	// (0x00043555) popup_call2_audio_first_window_t6

0x65e1,	// (0x000437eb) popup_call2_audio_out_window_t6_ParamLimits

0x65e1,	// (0x000437eb) popup_call2_audio_out_window_t6

0x0289,	// (0x0003d493) main_vitu_pane

0x8cc6,	// (0x00045ed0) aid_size_cell_itu_ParamLimits

0x8cc6,	// (0x00045ed0) aid_size_cell_itu

0x18e6,	// (0x0003eaf0) bg_popup_window_pane_cp08_ParamLimits

0x18e6,	// (0x0003eaf0) bg_popup_window_pane_cp08

0x8cdc,	// (0x00045ee6) field_vitu_entry_pane_ParamLimits

0x8cdc,	// (0x00045ee6) field_vitu_entry_pane

0x8cf3,	// (0x00045efd) grid_vitu_function_pane_ParamLimits

0x8cf3,	// (0x00045efd) grid_vitu_function_pane

0x8d0e,	// (0x00045f18) grid_vitu_itu_pane_ParamLimits

0x8d0e,	// (0x00045f18) grid_vitu_itu_pane

0x8d2c,	// (0x00045f36) cell_vitu_itu_pane_ParamLimits

0x8d2c,	// (0x00045f36) cell_vitu_itu_pane

0x8d4e,	// (0x00045f58) cell_vitu_function_pane_ParamLimits

0x8d4e,	// (0x00045f58) cell_vitu_function_pane

0x18e6,	// (0x0003eaf0) bg_popup_sub_pane_cp08_ParamLimits

0x18e6,	// (0x0003eaf0) bg_popup_sub_pane_cp08

0x8d67,	// (0x00045f71) field_vitu_entry_pane_t1_ParamLimits

0x8d67,	// (0x00045f71) field_vitu_entry_pane_t1

0xca39,	// (0x00049c43) field_vitu_entry_pane_t2_ParamLimits

0xca39,	// (0x00049c43) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0004ca58) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0004ca58) field_vitu_entry_pane_t

0xca56,	// (0x00049c60) bg_button_pane_cp05_ParamLimits

0xca56,	// (0x00049c60) bg_button_pane_cp05

0x8d85,	// (0x00045f8f) cell_vitu_itu_pane_g1

0x8d9d,	// (0x00045fa7) cell_vitu_itu_pane_t1_ParamLimits

0x8d9d,	// (0x00045fa7) cell_vitu_itu_pane_t1

0x8daf,	// (0x00045fb9) cell_vitu_itu_pane_t2_ParamLimits

0x8daf,	// (0x00045fb9) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0004ca5d) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0004ca5d) cell_vitu_itu_pane_t

0xca64,	// (0x00049c6e) bg_button_pane_cp07

0x8de4,	// (0x00045fee) cell_vitu_function_pane_g1

0xc068,	// (0x00049272) main_calc_pane_g1

0x31c8,	// (0x000403d2) aid_visual_content_pane

0x0289,	// (0x0003d493) main_vradio_pane

0x8ded,	// (0x00045ff7) main_vradio_pane_g1_ParamLimits

0x8ded,	// (0x00045ff7) main_vradio_pane_g1

0xca6e,	// (0x00049c78) main_vradio_pane_g2_ParamLimits

0xca6e,	// (0x00049c78) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0004ca64) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0004ca64) main_vradio_pane_g

0x8e06,	// (0x00046010) main_vradio_pane_t1_ParamLimits

0x8e06,	// (0x00046010) main_vradio_pane_t1

0x8e1b,	// (0x00046025) main_vradio_pane_t2_ParamLimits

0x8e1b,	// (0x00046025) main_vradio_pane_t2

0xca7b,	// (0x00049c85) main_vradio_pane_t3_ParamLimits

0xca7b,	// (0x00049c85) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0004ca69) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0004ca69) main_vradio_pane_t

0x8e30,	// (0x0004603a) vradio_rocker_control_pane_ParamLimits

0x8e30,	// (0x0004603a) vradio_rocker_control_pane

0x8e42,	// (0x0004604c) vradio_station_info_pane_ParamLimits

0x8e42,	// (0x0004604c) vradio_station_info_pane

0xca8f,	// (0x00049c99) vradio_frequency_info_pane_ParamLimits

0xca8f,	// (0x00049c99) vradio_frequency_info_pane

0x7f3b,	// (0x00045145) vradio_station_info_pane_g1

0xca9e,	// (0x00049ca8) vradio_station_info_pane_t1_ParamLimits

0xca9e,	// (0x00049ca8) vradio_station_info_pane_t1

0xcac0,	// (0x00049cca) vradio_station_info_pane_t2_ParamLimits

0xcac0,	// (0x00049cca) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0004ca70) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0004ca70) vradio_station_info_pane_t

0xcad2,	// (0x00049cdc) vradio_tuning_pane

0xcada,	// (0x00049ce4) vradio_rocker_control_pane_g1

0xcae2,	// (0x00049cec) vradio_rocker_control_pane_g2

0xcaea,	// (0x00049cf4) vradio_rocker_control_pane_g3

0xcaf2,	// (0x00049cfc) vradio_rocker_control_pane_g4

0xcafa,	// (0x00049d04) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0004ca75) vradio_rocker_control_pane_g

0x8e54,	// (0x0004605e) vradio_frequency_info_pane_g1

0xcb02,	// (0x00049d0c) vradio_frequency_info_pane_t1_ParamLimits

0xcb02,	// (0x00049d0c) vradio_frequency_info_pane_t1

0x8e5e,	// (0x00046068) vradio_tuning_pane_g1

0x8e69,	// (0x00046073) vradio_tuning_pane_t1

0x02af,	// (0x0003d4b9) area_side_right_pane_ParamLimits

0x02af,	// (0x0003d4b9) area_side_right_pane

0x6d5b,	// (0x00043f65) status_small_pane_g1

0x6d63,	// (0x00043f6d) status_small_pane_g2

0x6d6c,	// (0x00043f76) status_small_pane_g3

0x6d75,	// (0x00043f7f) status_small_pane_g4

0x0003,

0xf62b,	// (0x0004c835) status_small_pane_g

0x6d7e,	// (0x00043f88) status_small_pane_t1

0x0289,	// (0x0003d493) main_video3_pane

0xcb16,	// (0x00049d20) cams_zoom_vslider_pane

0xcb1e,	// (0x00049d28) image3_wide_pane_ParamLimits

0xcb1e,	// (0x00049d28) image3_wide_pane

0xcb38,	// (0x00049d42) image3_wide_small_pane

0xcb44,	// (0x00049d4e) main_video3_pane_g1_ParamLimits

0xcb44,	// (0x00049d4e) main_video3_pane_g1

0xcb60,	// (0x00049d6a) main_video3_pane_g2_ParamLimits

0xcb60,	// (0x00049d6a) main_video3_pane_g2

0x0001,

0xf876,	// (0x0004ca80) main_video3_pane_g_ParamLimits

0xf876,	// (0x0004ca80) main_video3_pane_g

0xcb7c,	// (0x00049d86) main_video3_pane_t1_ParamLimits

0xcb7c,	// (0x00049d86) main_video3_pane_t1

0xcba7,	// (0x00049db1) main_video3_pane_t2_ParamLimits

0xcba7,	// (0x00049db1) main_video3_pane_t2

0xcbd2,	// (0x00049ddc) main_video3_pane_t3_ParamLimits

0xcbd2,	// (0x00049ddc) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0004ca85) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0004ca85) main_video3_pane_t

0xcbff,	// (0x00049e09) cams_zoom_vslider_pane_g1

0xcc08,	// (0x00049e12) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0004ca8c) cams_zoom_vslider_pane_g

0xcc10,	// (0x00049e1a) small_slider_vertical_pane

0x7f3b,	// (0x00045145) small_slider_vertical_pane_g1

0x7f3b,	// (0x00045145) small_slider_vertical_pane_g2

0xcc18,	// (0x00049e22) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0004ca91) small_slider_vertical_pane_g

0x0289,	// (0x0003d493) main_hwr_training_pane

0xcc21,	// (0x00049e2b) hwr_training_instruct_pane_ParamLimits

0xcc21,	// (0x00049e2b) hwr_training_instruct_pane

0x8e78,	// (0x00046082) hwr_training_navi_pane_ParamLimits

0x8e78,	// (0x00046082) hwr_training_navi_pane

0x8e97,	// (0x000460a1) hwr_training_write_pane_ParamLimits

0x8e97,	// (0x000460a1) hwr_training_write_pane

0x0289,	// (0x0003d493) bg_frame_shadow_pane

0xcc58,	// (0x00049e62) hwr_training_write_pane_g1

0xcc60,	// (0x00049e6a) hwr_training_write_pane_g2

0xcc68,	// (0x00049e72) hwr_training_write_pane_g3

0xcc70,	// (0x00049e7a) hwr_training_write_pane_g4

0xcc78,	// (0x00049e82) hwr_training_write_pane_g5

0xcc80,	// (0x00049e8a) hwr_training_write_pane_g6

0xcc88,	// (0x00049e92) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0004ca98) hwr_training_write_pane_g

0xed03,	// (0x0004bf0d) hwr_training_navi_pane_g1_ParamLimits

0xed03,	// (0x0004bf0d) hwr_training_navi_pane_g1

0xed15,	// (0x0004bf1f) hwr_training_navi_pane_g2_ParamLimits

0xed15,	// (0x0004bf1f) hwr_training_navi_pane_g2

0xed27,	// (0x0004bf31) hwr_training_navi_pane_g3_ParamLimits

0xed27,	// (0x0004bf31) hwr_training_navi_pane_g3

0xed37,	// (0x0004bf41) hwr_training_navi_pane_g4_ParamLimits

0xed37,	// (0x0004bf41) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0004caa7) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0004caa7) hwr_training_navi_pane_g

0xed44,	// (0x0004bf4e) hwr_training_navi_pane_t1

0x8edf,	// (0x000460e9) list_single_hwr_training_instruct_pane_ParamLimits

0x8edf,	// (0x000460e9) list_single_hwr_training_instruct_pane

0xcc90,	// (0x00049e9a) list_single_hwr_training_instruct_pane_t1

0x7e7b,	// (0x00045085) bg_frame_shadow_pane_g1

0xcc9f,	// (0x00049ea9) bg_frame_shadow_pane_g2

0xcca7,	// (0x00049eb1) bg_frame_shadow_pane_g3

0xccaf,	// (0x00049eb9) bg_frame_shadow_pane_g4

0xccb7,	// (0x00049ec1) bg_frame_shadow_pane_g5

0xccbf,	// (0x00049ec9) bg_frame_shadow_pane_g6

0xccc7,	// (0x00049ed1) bg_frame_shadow_pane_g7

0x0aef,	// (0x0003dcf9) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0004cab2) bg_frame_shadow_pane_g

0x0289,	// (0x0003d493) main_video_tele_dialer_pane

0x8ef4,	// (0x000460fe) aid_size_cell_video_keypad_ParamLimits

0x8ef4,	// (0x000460fe) aid_size_cell_video_keypad

0x8f0e,	// (0x00046118) grid_video_dialer_keypad_pane_ParamLimits

0x8f0e,	// (0x00046118) grid_video_dialer_keypad_pane

0x8f5a,	// (0x00046164) video_down_pane_cp_ParamLimits

0x8f5a,	// (0x00046164) video_down_pane_cp

0x8f8e,	// (0x00046198) cell_video_dialer_keypad_pane_ParamLimits

0x8f8e,	// (0x00046198) cell_video_dialer_keypad_pane

0xcccf,	// (0x00049ed9) bg_button_pane_cp08_ParamLimits

0xcccf,	// (0x00049ed9) bg_button_pane_cp08

0x8fb0,	// (0x000461ba) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8fb0,	// (0x000461ba) cell_video_dialer_keypad_pane_g1

0x869d,	// (0x000458a7) mup3_rocker2_pane_ParamLimits

0x869d,	// (0x000458a7) mup3_rocker2_pane

0x7f3b,	// (0x00045145) mup3_rocker2_pane_g1

0x6dc0,	// (0x00043fca) main_dialer2_pane

0x0289,	// (0x0003d493) main_mp4_pane

0xed5a,	// (0x0004bf64) main_mp4_pane_g1_ParamLimits

0xed5a,	// (0x0004bf64) main_mp4_pane_g1

0xed5a,	// (0x0004bf64) main_mp4_pane_g2_ParamLimits

0xed5a,	// (0x0004bf64) main_mp4_pane_g2

0x8fea,	// (0x000461f4) main_mp4_pane_g3_ParamLimits

0x8fea,	// (0x000461f4) main_mp4_pane_g3

0xed68,	// (0x0004bf72) main_mp4_pane_g4_ParamLimits

0xed68,	// (0x0004bf72) main_mp4_pane_g4

0xed90,	// (0x0004bf9a) main_mp4_pane_g5_ParamLimits

0xed90,	// (0x0004bf9a) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0004cad2) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0004cad2) main_mp4_pane_g

0xede0,	// (0x0004bfea) main_mp4_pane_t1_ParamLimits

0xede0,	// (0x0004bfea) main_mp4_pane_t1

0xee3c,	// (0x0004c046) main_mp4_pane_t2_ParamLimits

0xee3c,	// (0x0004c046) main_mp4_pane_t2

0xccdb,	// (0x00049ee5) main_mp4_pane_t3_ParamLimits

0xccdb,	// (0x00049ee5) main_mp4_pane_t3

0xee8e,	// (0x0004c098) main_mp4_pane_t4_ParamLimits

0xee8e,	// (0x0004c098) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0004cadf) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0004cadf) main_mp4_pane_t

0xeed2,	// (0x0004c0dc) mp4_progress_pane_ParamLimits

0xeed2,	// (0x0004c0dc) mp4_progress_pane

0xef1c,	// (0x0004c126) mp4_rocker_pane_ParamLimits

0xef1c,	// (0x0004c126) mp4_rocker_pane

0xcd03,	// (0x00049f0d) mp4_progress_pane_t1

0xcd1c,	// (0x00049f26) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0004cae8) mp4_progress_pane_t

0xcd35,	// (0x00049f3f) mup_progress_pane_cp04

0x7f3b,	// (0x00045145) mp4_rocker_pane_g1

0x9026,	// (0x00046230) aid_cell_size_keypad2_ParamLimits

0x9026,	// (0x00046230) aid_cell_size_keypad2

0x903c,	// (0x00046246) dialer2_ne_pane_ParamLimits

0x903c,	// (0x00046246) dialer2_ne_pane

0x9056,	// (0x00046260) grid_dialer2_keypad_pane_ParamLimits

0x9056,	// (0x00046260) grid_dialer2_keypad_pane

0x7c54,	// (0x00044e5e) bg_popup_call_pane_cp07_ParamLimits

0x7c54,	// (0x00044e5e) bg_popup_call_pane_cp07

0x9072,	// (0x0004627c) dialer2_ne_pane_t1_ParamLimits

0x9072,	// (0x0004627c) dialer2_ne_pane_t1

0x90ad,	// (0x000462b7) cell_dialer2_keypad_pane_ParamLimits

0x90ad,	// (0x000462b7) cell_dialer2_keypad_pane

0xcd53,	// (0x00049f5d) bg_button_pane_pane_cp04_ParamLimits

0xcd53,	// (0x00049f5d) bg_button_pane_pane_cp04

0x90cf,	// (0x000462d9) cell_dialer2_keypad_pane_g1_ParamLimits

0x90cf,	// (0x000462d9) cell_dialer2_keypad_pane_g1

0x401c,	// (0x00041226) aid_placing_vt_set_content_ParamLimits

0x401c,	// (0x00041226) aid_placing_vt_set_content

0x403c,	// (0x00041246) aid_placing_vt_set_title_ParamLimits

0x403c,	// (0x00041246) aid_placing_vt_set_title

0x0289,	// (0x0003d493) main_image3_pane

0x9195,	// (0x0004639f) area_side_right_pane_cp01_ParamLimits

0x9195,	// (0x0004639f) area_side_right_pane_cp01

0xed5a,	// (0x0004bf64) main_image3_pane_g1_ParamLimits

0xed5a,	// (0x0004bf64) main_image3_pane_g1

0x91ac,	// (0x000463b6) main_image3_pane_g2_ParamLimits

0x91ac,	// (0x000463b6) main_image3_pane_g2

0x91d4,	// (0x000463de) main_image3_pane_g3_ParamLimits

0x91d4,	// (0x000463de) main_image3_pane_g3

0x91fe,	// (0x00046408) main_image3_pane_g4_ParamLimits

0x91fe,	// (0x00046408) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0004caf7) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0004caf7) main_image3_pane_g

0x9228,	// (0x00046432) main_image3_pane_t1_ParamLimits

0x9228,	// (0x00046432) main_image3_pane_t1

0x9280,	// (0x0004648a) main_image3_pane_t2_ParamLimits

0x9280,	// (0x0004648a) main_image3_pane_t2

0x92d2,	// (0x000464dc) main_image3_pane_t3_ParamLimits

0x92d2,	// (0x000464dc) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0004cb00) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0004cb00) main_image3_pane_t

0x18e6,	// (0x0003eaf0) grid_sctrl_middle_pane_cp01_ParamLimits

0x18e6,	// (0x0003eaf0) grid_sctrl_middle_pane_cp01

0x935a,	// (0x00046564) cell_sctrl_middle_pane_cp01_ParamLimits

0x935a,	// (0x00046564) cell_sctrl_middle_pane_cp01

0x9377,	// (0x00046581) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9377,	// (0x00046581) cell_sctrl_middle_pane_cp01_g1

0x0289,	// (0x0003d493) main_call4_pane

0x938d,	// (0x00046597) aid_size_button_call4_ParamLimits

0x938d,	// (0x00046597) aid_size_button_call4

0x93be,	// (0x000465c8) call4_windows_pane_ParamLimits

0x93be,	// (0x000465c8) call4_windows_pane

0x93de,	// (0x000465e8) grid_call4_button_pane_ParamLimits

0x93de,	// (0x000465e8) grid_call4_button_pane

0xcd5f,	// (0x00049f69) call4_windows_conf_pane

0xcd76,	// (0x00049f80) popup_call4_audio_first_window_ParamLimits

0xcd76,	// (0x00049f80) popup_call4_audio_first_window

0xcdc2,	// (0x00049fcc) popup_call4_audio_second_window_ParamLimits

0xcdc2,	// (0x00049fcc) popup_call4_audio_second_window

0xcdd6,	// (0x00049fe0) popup_call4_audio_wait_window_ParamLimits

0xcdd6,	// (0x00049fe0) popup_call4_audio_wait_window

0x940b,	// (0x00046615) cell_call4_button_pane_ParamLimits

0x940b,	// (0x00046615) cell_call4_button_pane

0x9434,	// (0x0004663e) bg_button_pane_cp09_ParamLimits

0x9434,	// (0x0004663e) bg_button_pane_cp09

0x9440,	// (0x0004664a) cell_call4_button_pane_g1_ParamLimits

0x9440,	// (0x0004664a) cell_call4_button_pane_g1

0x9466,	// (0x00046670) cell_call4_button_pane_t1_ParamLimits

0x9466,	// (0x00046670) cell_call4_button_pane_t1

0xce1e,	// (0x0004a028) popup_call4_audio_conf_window_ParamLimits

0xce1e,	// (0x0004a028) popup_call4_audio_conf_window

0x86fd,	// (0x00045907) mup3_progress_pane_t1_ParamLimits

0x8714,	// (0x0004591e) mup3_progress_pane_t2_ParamLimits

0xc73e,	// (0x00049948) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0004c9d9) mup3_progress_pane_t_ParamLimits

0xc755,	// (0x0004995f) mup_progress_pane_cp03_ParamLimits

0x8cbe,	// (0x00045ec8) mup3_control_keys_pane_g4_copy1

0xef00,	// (0x0004c10a) mp4_rocker2_pane_ParamLimits

0xef00,	// (0x0004c10a) mp4_rocker2_pane

0xce32,	// (0x0004a03c) mp4_rocker2_pane_g1

0xce3a,	// (0x0004a044) mp4_rocker2_pane_g2

0xef6e,	// (0x0004c178) mp4_rocker2_pane_g3

0xef76,	// (0x0004c180) mp4_rocker2_pane_g4

0xef7e,	// (0x0004c188) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0004cb09) mp4_rocker2_pane_g

0x0289,	// (0x0003d493) main_camera4_pane

0x0289,	// (0x0003d493) main_video4_pane

0x8f28,	// (0x00046132) main_video_tele_dialer_pane_t1_ParamLimits

0x8f28,	// (0x00046132) main_video_tele_dialer_pane_t1

0x8f41,	// (0x0004614b) main_video_tele_dialer_pane_t2_ParamLimits

0x8f41,	// (0x0004614b) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0004cac3) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0004cac3) main_video_tele_dialer_pane_t

0x94a4,	// (0x000466ae) cam4_autofocus_pane_ParamLimits

0x94a4,	// (0x000466ae) cam4_autofocus_pane

0x94ba,	// (0x000466c4) cam4_image_uncrop_pane_ParamLimits

0x94ba,	// (0x000466c4) cam4_image_uncrop_pane

0x94d4,	// (0x000466de) cam4_indicators_pane_ParamLimits

0x94d4,	// (0x000466de) cam4_indicators_pane

0x94ff,	// (0x00046709) main_camera4_pane_g1_ParamLimits

0x94ff,	// (0x00046709) main_camera4_pane_g1

0x9512,	// (0x0004671c) main_camera4_pane_g2_ParamLimits

0x9512,	// (0x0004671c) main_camera4_pane_g2

0x9525,	// (0x0004672f) main_camera4_pane_g3_ParamLimits

0x9525,	// (0x0004672f) main_camera4_pane_g3

0x9538,	// (0x00046742) main_camera4_pane_g4_ParamLimits

0x9538,	// (0x00046742) main_camera4_pane_g4

0x954b,	// (0x00046755) main_camera4_pane_g5_ParamLimits

0x954b,	// (0x00046755) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0004cb14) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0004cb14) main_camera4_pane_g

0x956f,	// (0x00046779) main_camera4_pane_t1_ParamLimits

0x956f,	// (0x00046779) main_camera4_pane_t1

0xc67b,	// (0x00049885) bg_tb_trans_pane_cp06

0xef9e,	// (0x0004c1a8) cam4_indicators_pane_g1

0xefaf,	// (0x0004c1b9) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0004cb2f) cam4_indicators_pane_g

0xefcd,	// (0x0004c1d7) cam4_indicators_pane_t1

0x95e5,	// (0x000467ef) main_video4_pane_g1_ParamLimits

0x95e5,	// (0x000467ef) main_video4_pane_g1

0x95f8,	// (0x00046802) main_video4_pane_g2_ParamLimits

0x95f8,	// (0x00046802) main_video4_pane_g2

0x960c,	// (0x00046816) main_video4_pane_g3_ParamLimits

0x960c,	// (0x00046816) main_video4_pane_g3

0x9620,	// (0x0004682a) main_video4_pane_g4_ParamLimits

0x9620,	// (0x0004682a) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0004cb36) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0004cb36) main_video4_pane_g

0x9648,	// (0x00046852) vid4_indicators_pane_ParamLimits

0x9648,	// (0x00046852) vid4_indicators_pane

0x9678,	// (0x00046882) video4_image_uncrop_cif_pane_ParamLimits

0x9678,	// (0x00046882) video4_image_uncrop_cif_pane

0x9692,	// (0x0004689c) video4_image_uncrop_nhd_pane_ParamLimits

0x9692,	// (0x0004689c) video4_image_uncrop_nhd_pane

0x94ba,	// (0x000466c4) video4_image_uncrop_vga_pane_ParamLimits

0x94ba,	// (0x000466c4) video4_image_uncrop_vga_pane

0xce42,	// (0x0004a04c) bg_tb_trans_pane_cp07

0x96a6,	// (0x000468b0) vid4_indicators_pane_g1

0x96b3,	// (0x000468bd) vid4_indicators_pane_g2

0x96c0,	// (0x000468ca) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0004cb41) vid4_indicators_pane_g

0x96e5,	// (0x000468ef) vid4_indicators_pane_t1

0x96f7,	// (0x00046901) cam4_autofocus_pane_g1

0x96ff,	// (0x00046909) cam4_autofocus_pane_g2

0x9707,	// (0x00046911) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0004cb4c) cam4_autofocus_pane_g

0x970f,	// (0x00046919) cam4_autofocus_pane_g3_copy1

0x8f72,	// (0x0004617c) video_down_pane_cp_t1

0x8f80,	// (0x0004618a) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0004cac8) video_down_pane_cp_t

0x18e6,	// (0x0003eaf0) popup_vitu2_window_ParamLimits

0x18e6,	// (0x0003eaf0) popup_vitu2_window

0x9717,	// (0x00046921) aid_size_cell2_itu2_ParamLimits

0x9717,	// (0x00046921) aid_size_cell2_itu2

0x973d,	// (0x00046947) aid_size_cell_itu2_ParamLimits

0x973d,	// (0x00046947) aid_size_cell_itu2

0x9799,	// (0x000469a3) bg_popup_window_pane_cp09_ParamLimits

0x9799,	// (0x000469a3) bg_popup_window_pane_cp09

0x97a7,	// (0x000469b1) field_vitu2_entry_pane_ParamLimits

0x97a7,	// (0x000469b1) field_vitu2_entry_pane

0x97cd,	// (0x000469d7) grid_vitu2_function_pane_ParamLimits

0x97cd,	// (0x000469d7) grid_vitu2_function_pane

0x981e,	// (0x00046a28) grid_vitu2_itu_pane_ParamLimits

0x981e,	// (0x00046a28) grid_vitu2_itu_pane

0x98b1,	// (0x00046abb) cell_vitu2_itu_pane_ParamLimits

0x98b1,	// (0x00046abb) cell_vitu2_itu_pane

0x98d5,	// (0x00046adf) cell_vitu2_function_pane_ParamLimits

0x98d5,	// (0x00046adf) cell_vitu2_function_pane

0xce50,	// (0x0004a05a) bg_popup_call_pane_cp08_ParamLimits

0xce50,	// (0x0004a05a) bg_popup_call_pane_cp08

0xce69,	// (0x0004a073) field_vitu2_entry_pane_g1

0xce75,	// (0x0004a07f) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0004cb53) field_vitu2_entry_pane_g

0x2927,	// (0x0003fb31) field_vitu2_entry_pane_t1_ParamLimits

0x2927,	// (0x0003fb31) field_vitu2_entry_pane_t1

0xce8f,	// (0x0004a099) field_vitu2_entry_pane_t2_ParamLimits

0xce8f,	// (0x0004a099) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0004cb5a) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0004cb5a) field_vitu2_entry_pane_t

0x9914,	// (0x00046b1e) bg_button_pane_cp010_ParamLimits

0x9914,	// (0x00046b1e) bg_button_pane_cp010

0x9922,	// (0x00046b2c) cell_vitu2_itu_pane_g1

0x9940,	// (0x00046b4a) cell_vitu2_itu_pane_t1_ParamLimits

0x9940,	// (0x00046b4a) cell_vitu2_itu_pane_t1

0x2956,	// (0x0003fb60) cell_vitu2_itu_pane_t2_ParamLimits

0x2956,	// (0x0003fb60) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0004cb64) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0004cb64) cell_vitu2_itu_pane_t

0x18e6,	// (0x0003eaf0) bg_button_pane_cp011

0x99a6,	// (0x00046bb0) cell_vitu2_function_pane_g1

0x0289,	// (0x0003d493) main_myfav_hc_pane

0x9322,	// (0x0004652c) popup_image3_note_pane_ParamLimits

0x9322,	// (0x0004652c) popup_image3_note_pane

0x933e,	// (0x00046548) popup_image3_tool_bar_pane_ParamLimits

0x933e,	// (0x00046548) popup_image3_tool_bar_pane

0x29da,	// (0x0003fbe4) cell_vitu2_itu_pane_t3_ParamLimits

0x29da,	// (0x0003fbe4) cell_vitu2_itu_pane_t3

0x0289,	// (0x0003d493) bg_popup_trans_pane

0xceb4,	// (0x0004a0be) grid_image3_tool_bar_pane

0xcebe,	// (0x0004a0c8) bg_popup_trans_pane_g1

0x0e32,	// (0x0003e03c) bg_popup_trans_pane_g2

0xcec6,	// (0x0004a0d0) bg_popup_trans_pane_g3

0xcece,	// (0x0004a0d8) bg_popup_trans_pane_g4

0xced6,	// (0x0004a0e0) bg_popup_trans_pane_g5

0xcede,	// (0x0004a0e8) bg_popup_trans_pane_g6

0xcee6,	// (0x0004a0f0) bg_popup_trans_pane_g7

0xceee,	// (0x0004a0f8) bg_popup_trans_pane_g8

0x0e12,	// (0x0003e01c) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0004cb6b) bg_popup_trans_pane_g

0xcef6,	// (0x0004a100) cell_image3_tool_bar_pane_ParamLimits

0xcef6,	// (0x0004a100) cell_image3_tool_bar_pane

0x7f3b,	// (0x00045145) cell_image3_tool_bar_pane_g1

0x0289,	// (0x0003d493) bg_popup_trans_pane_cp1

0xcf0a,	// (0x0004a114) popup_image3_note_pane_t1

0xcf18,	// (0x0004a122) popup_image3_note_pane_t2

0xcf26,	// (0x0004a130) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0004cb7e) popup_image3_note_pane_t

0xcf34,	// (0x0004a13e) popup_image3_note_pane_t3_copy1

0x99ba,	// (0x00046bc4) bg_myfav_hc_instruction_pane_ParamLimits

0x99ba,	// (0x00046bc4) bg_myfav_hc_instruction_pane

0x99ce,	// (0x00046bd8) cell_myfav_contact_pane_ParamLimits

0x99ce,	// (0x00046bd8) cell_myfav_contact_pane

0x99ec,	// (0x00046bf6) cell_myfav_contact_pane_cp1_ParamLimits

0x99ec,	// (0x00046bf6) cell_myfav_contact_pane_cp1

0x9a04,	// (0x00046c0e) cell_myfav_contact_pane_cp2_ParamLimits

0x9a04,	// (0x00046c0e) cell_myfav_contact_pane_cp2

0x9a1c,	// (0x00046c26) cell_myfav_contact_pane_cp3_ParamLimits

0x9a1c,	// (0x00046c26) cell_myfav_contact_pane_cp3

0x9a33,	// (0x00046c3d) cell_myfav_contact_pane_cp4_ParamLimits

0x9a33,	// (0x00046c3d) cell_myfav_contact_pane_cp4

0x9a4b,	// (0x00046c55) cell_myfav_contact_pane_cp5_ParamLimits

0x9a4b,	// (0x00046c55) cell_myfav_contact_pane_cp5

0x9a5f,	// (0x00046c69) cell_myfav_contact_pane_cp6_ParamLimits

0x9a5f,	// (0x00046c69) cell_myfav_contact_pane_cp6

0x9a75,	// (0x00046c7f) cell_myfav_contact_pane_cp7_ParamLimits

0x9a75,	// (0x00046c7f) cell_myfav_contact_pane_cp7

0xcf42,	// (0x0004a14c) listscroll_gen_pane_cp05

0x9a8f,	// (0x00046c99) main_myfav_hc_pane_g1_ParamLimits

0x9a8f,	// (0x00046c99) main_myfav_hc_pane_g1

0x9aa9,	// (0x00046cb3) main_myfav_hc_pane_g2_ParamLimits

0x9aa9,	// (0x00046cb3) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0004cb85) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0004cb85) main_myfav_hc_pane_g

0x9adb,	// (0x00046ce5) main_myfav_hc_pane_t1_ParamLimits

0x9adb,	// (0x00046ce5) main_myfav_hc_pane_t1

0xcf4b,	// (0x0004a155) main_myfav_hc_pane_t2_ParamLimits

0xcf4b,	// (0x0004a155) main_myfav_hc_pane_t2

0xcf5d,	// (0x0004a167) main_myfav_hc_pane_t3_ParamLimits

0xcf5d,	// (0x0004a167) main_myfav_hc_pane_t3

0x9af2,	// (0x00046cfc) main_myfav_hc_pane_t4_ParamLimits

0x9af2,	// (0x00046cfc) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0004cb8c) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0004cb8c) main_myfav_hc_pane_t

0x7f3b,	// (0x00045145) bg_myfav_hc_instruction_pane_g1

0xcf6f,	// (0x0004a179) cell_myfav_contact_pane_g1_ParamLimits

0xcf6f,	// (0x0004a179) cell_myfav_contact_pane_g1

0xcf6f,	// (0x0004a179) cell_myfav_contact_pane_g2_ParamLimits

0xcf6f,	// (0x0004a179) cell_myfav_contact_pane_g2

0xcf7b,	// (0x0004a185) cell_myfav_contact_pane_g3_ParamLimits

0xcf7b,	// (0x0004a185) cell_myfav_contact_pane_g3

0xc728,	// (0x00049932) cell_myfav_contact_pane_g4_ParamLimits

0xc728,	// (0x00049932) cell_myfav_contact_pane_g4

0xcf88,	// (0x0004a192) cell_myfav_contact_pane_g5_ParamLimits

0xcf88,	// (0x0004a192) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0004cb97) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0004cb97) cell_myfav_contact_pane_g

0x9ac3,	// (0x00046ccd) main_myfav_hc_pane_g3_ParamLimits

0x9ac3,	// (0x00046ccd) main_myfav_hc_pane_g3

0x32f3,	// (0x000404fd) popup_adpt_find_window

0x9b1a,	// (0x00046d24) afind_page_pane_ParamLimits

0x9b1a,	// (0x00046d24) afind_page_pane

0x9b2f,	// (0x00046d39) aid_size_cell_afind_ParamLimits

0x9b2f,	// (0x00046d39) aid_size_cell_afind

0x9b4d,	// (0x00046d57) bg_popup_sub_pane_cp09_ParamLimits

0x9b4d,	// (0x00046d57) bg_popup_sub_pane_cp09

0x9b5a,	// (0x00046d64) find_pane_cp01_ParamLimits

0x9b5a,	// (0x00046d64) find_pane_cp01

0xcf94,	// (0x0004a19e) grid_afind_control_pane_ParamLimits

0xcf94,	// (0x0004a19e) grid_afind_control_pane

0x9b67,	// (0x00046d71) grid_afind_pane_ParamLimits

0x9b67,	// (0x00046d71) grid_afind_pane

0x9b89,	// (0x00046d93) cell_afind_pane_ParamLimits

0x9b89,	// (0x00046d93) cell_afind_pane

0x7f3b,	// (0x00045145) afind_page_pane_g1

0x9be6,	// (0x00046df0) afind_page_pane_g2

0x9bef,	// (0x00046df9) afind_page_pane_g3

0x0002,

0xf998,	// (0x0004cba2) afind_page_pane_g

0x9bf8,	// (0x00046e02) afind_page_pane_t1

0xcfa8,	// (0x0004a1b2) cell_afind_grid_control_pane_ParamLimits

0xcfa8,	// (0x0004a1b2) cell_afind_grid_control_pane

0xcd53,	// (0x00049f5d) bg_button_pane_cp69_ParamLimits

0xcd53,	// (0x00049f5d) bg_button_pane_cp69

0x9c18,	// (0x00046e22) cell_afind_pane_g1_ParamLimits

0x9c18,	// (0x00046e22) cell_afind_pane_g1

0x9c25,	// (0x00046e2f) cell_afind_pane_t1_ParamLimits

0x9c25,	// (0x00046e2f) cell_afind_pane_t1

0x0c25,	// (0x0003de2f) bg_button_pane_cp72

0xcfb7,	// (0x0004a1c1) cell_afind_grid_control_pane_g1

0x58dc,	// (0x00042ae6) aid_image_placing_area_ParamLimits

0x58dc,	// (0x00042ae6) aid_image_placing_area

0xca21,	// (0x00049c2b) field_vitu_entry_pane_g1_ParamLimits

0xca21,	// (0x00049c2b) field_vitu_entry_pane_g1

0xca2d,	// (0x00049c37) field_vitu_entry_pane_g2_ParamLimits

0xca2d,	// (0x00049c37) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0004ca53) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0004ca53) field_vitu_entry_pane_g

0x8d85,	// (0x00045f8f) cell_vitu_itu_pane_g1_ParamLimits

0x8dc7,	// (0x00045fd1) cell_vitu_itu_pane_t3_ParamLimits

0x8dc7,	// (0x00045fd1) cell_vitu_itu_pane_t3

0xcd03,	// (0x00049f0d) mp4_progress_pane_t1_ParamLimits

0xcd1c,	// (0x00049f26) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0004cae8) mp4_progress_pane_t_ParamLimits

0xcd35,	// (0x00049f3f) mup_progress_pane_cp04_ParamLimits

0x9b06,	// (0x00046d10) main_myfav_hc_pane_t5_ParamLimits

0x9b06,	// (0x00046d10) main_myfav_hc_pane_t5

0x02a7,	// (0x0003d4b1) aid_zoom_text_primary

0x32f3,	// (0x000404fd) popup_adpt_find_window_ParamLimits

0x18e6,	// (0x0003eaf0) main_cam_set_pane

0x94eb,	// (0x000466f5) cam4_zoom_pane_ParamLimits

0x94eb,	// (0x000466f5) cam4_zoom_pane

0x9c37,	// (0x00046e41) main_cam_set_pane_g1_ParamLimits

0x9c37,	// (0x00046e41) main_cam_set_pane_g1

0x9c45,	// (0x00046e4f) main_cam_set_pane_g2_ParamLimits

0x9c45,	// (0x00046e4f) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0004cba9) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0004cba9) main_cam_set_pane_g

0x9c66,	// (0x00046e70) main_cam_set_pane_t1_ParamLimits

0x9c66,	// (0x00046e70) main_cam_set_pane_t1

0x9c81,	// (0x00046e8b) main_cset_listscroll_pane_ParamLimits

0x9c81,	// (0x00046e8b) main_cset_listscroll_pane

0x9ca1,	// (0x00046eab) main_cset_slider_pane_ParamLimits

0x9ca1,	// (0x00046eab) main_cset_slider_pane

0xcfc8,	// (0x0004a1d2) main_cset_list_pane_ParamLimits

0xcfc8,	// (0x0004a1d2) main_cset_list_pane

0xcfd8,	// (0x0004a1e2) scroll_pane_cp028

0x9cc7,	// (0x00046ed1) aid_area_touch_slider

0x9ce3,	// (0x00046eed) cset_slider_pane

0x9d0d,	// (0x00046f17) main_cset_slider_pane_g1

0x9d22,	// (0x00046f2c) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0004cbae) main_cset_slider_pane_g

0xd011,	// (0x0004a21b) main_cset_slider_pane_t1

0x9dde,	// (0x00046fe8) main_cset_slider_pane_t2

0x9df8,	// (0x00047002) main_cset_slider_pane_t3

0x9e12,	// (0x0004701c) main_cset_slider_pane_t4

0x9e2c,	// (0x00047036) main_cset_slider_pane_t5

0x9e46,	// (0x00047050) main_cset_slider_pane_t6

0x9e5b,	// (0x00047065) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0004cbd3) main_cset_slider_pane_t

0x9f5f,	// (0x00047169) cset_list_set_pane_ParamLimits

0x9f5f,	// (0x00047169) cset_list_set_pane

0x9f71,	// (0x0004717b) aid_position_infowindow_above

0x9f79,	// (0x00047183) aid_position_infowindow_below

0xd0b1,	// (0x0004a2bb) cset_list_set_pane_g1_ParamLimits

0xd0b1,	// (0x0004a2bb) cset_list_set_pane_g1

0xd0bd,	// (0x0004a2c7) cset_list_set_pane_g3_ParamLimits

0xd0bd,	// (0x0004a2c7) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0004cbf2) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0004cbf2) cset_list_set_pane_g

0x2a32,	// (0x0003fc3c) cset_list_set_pane_t1_ParamLimits

0x2a32,	// (0x0003fc3c) cset_list_set_pane_t1

0x18e6,	// (0x0003eaf0) list_highlight_pane_cp021_ParamLimits

0x18e6,	// (0x0003eaf0) list_highlight_pane_cp021

0x1653,	// (0x0003e85d) cset_slider_pane_g1

0x1665,	// (0x0003e86f) cset_slider_pane_g2

0x165c,	// (0x0003e866) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0004cbf7) cset_slider_pane_g

0xeff9,	// (0x0004c203) aid_area_touch_cam4_zoom

0xf001,	// (0x0004c20b) cam4_zoom_cont_pane

0xf009,	// (0x0004c213) cam4_zoom_pane_g1

0xf011,	// (0x0004c21b) cam4_zoom_pane_g2

0x9f81,	// (0x0004718b) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0004cbfe) cam4_zoom_pane_g

0xd0cc,	// (0x0004a2d6) cam4_zoom_cont_pane_g1

0xd0d5,	// (0x0004a2df) cam4_zoom_cont_pane_g2

0xd0de,	// (0x0004a2e8) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0004cc05) cam4_zoom_cont_pane_g

0x93ab,	// (0x000465b5) call4_image_pane_ParamLimits

0x93ab,	// (0x000465b5) call4_image_pane

0xcd5f,	// (0x00049f69) call4_windows_conf_pane_ParamLimits

0xcda0,	// (0x00049faa) popup_call4_audio_in_window_ParamLimits

0xcda0,	// (0x00049faa) popup_call4_audio_in_window

0x0289,	// (0x0003d493) bg_popup_call2_act_pane_cp02

0xce16,	// (0x0004a020) call4_list_conf_pane

0x7f3b,	// (0x00045145) call4_image_pane_g1

0x7f3b,	// (0x00045145) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0004c919) call4_image_pane_g

0xd0e7,	// (0x0004a2f1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd0e7,	// (0x0004a2f1) list_single_graphic_popup_conf4_pane

0x0289,	// (0x0003d493) list_highlight_pane_cp022

0xd0fa,	// (0x0004a304) list_single_graphic_popup_conf4_pane_g1

0x1332,	// (0x0003e53c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0004cc0c) list_single_graphic_popup_conf4_pane_g

0xd102,	// (0x0004a30c) list_single_graphic_popup_conf4_pane_t1

0x410e,	// (0x00041318) popup_vtel_slider_window_ParamLimits

0x410e,	// (0x00041318) popup_vtel_slider_window

0xcd41,	// (0x00049f4b) dialer2_ne_pane_t2_ParamLimits

0xcd41,	// (0x00049f4b) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0004caed) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0004caed) dialer2_ne_pane_t

0x7c54,	// (0x00044e5e) bg_popup_sub_pane_cp010_ParamLimits

0x7c54,	// (0x00044e5e) bg_popup_sub_pane_cp010

0x9f89,	// (0x00047193) popup_vtel_slider_window_g1_ParamLimits

0x9f89,	// (0x00047193) popup_vtel_slider_window_g1

0x9f9c,	// (0x000471a6) popup_vtel_slider_window_g2_ParamLimits

0x9f9c,	// (0x000471a6) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0004cc11) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0004cc11) popup_vtel_slider_window_g

0x9ff2,	// (0x000471fc) vtel_slider_pane_ParamLimits

0x9ff2,	// (0x000471fc) vtel_slider_pane

0xa014,	// (0x0004721e) vtel_slider_pane_g1_ParamLimits

0xa014,	// (0x0004721e) vtel_slider_pane_g1

0xa028,	// (0x00047232) vtel_slider_pane_g2_ParamLimits

0xa028,	// (0x00047232) vtel_slider_pane_g2

0xa040,	// (0x0004724a) vtel_slider_pane_g3_ParamLimits

0xa040,	// (0x0004724a) vtel_slider_pane_g3

0xa014,	// (0x0004721e) vtel_slider_pane_g4_ParamLimits

0xa014,	// (0x0004721e) vtel_slider_pane_g4

0xa056,	// (0x00047260) vtel_slider_pane_g5_ParamLimits

0xa056,	// (0x00047260) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0004cc1a) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0004cc1a) vtel_slider_pane_g

0x0289,	// (0x0003d493) main_gallery2_pane

0x9769,	// (0x00046973) aid_size_row_itut2_dropdow_list_ParamLimits

0x9769,	// (0x00046973) aid_size_row_itut2_dropdow_list

0x97f5,	// (0x000469ff) grid_vitu2_function_top_pane_ParamLimits

0x97f5,	// (0x000469ff) grid_vitu2_function_top_pane

0x985a,	// (0x00046a64) popup_vitu2_dropdown_list_window_ParamLimits

0x985a,	// (0x00046a64) popup_vitu2_dropdown_list_window

0x9883,	// (0x00046a8d) popup_vitu2_match_list_window

0xa06c,	// (0x00047276) cell_vitu2_function_top_pane_ParamLimits

0xa06c,	// (0x00047276) cell_vitu2_function_top_pane

0xa08a,	// (0x00047294) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa08a,	// (0x00047294) cell_vitu2_function_top_pane_cp01

0xa0a8,	// (0x000472b2) cell_vitu2_function_top_wide_pane_ParamLimits

0xa0a8,	// (0x000472b2) cell_vitu2_function_top_wide_pane

0x18e6,	// (0x0003eaf0) bg_button_pane_cp012

0xa0c6,	// (0x000472d0) cell_vitu2_function_top_pane_g1

0xf019,	// (0x0004c223) bg_button_pane_cp013_ParamLimits

0xf019,	// (0x0004c223) bg_button_pane_cp013

0xa0da,	// (0x000472e4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa0da,	// (0x000472e4) cell_vitu2_function_top_wide_pane_g1

0x18e6,	// (0x0003eaf0) bg_popup_sub_pane_cp20

0xa0f2,	// (0x000472fc) list_vitu2_match_list_pane

0xcebe,	// (0x0004a0c8) bg_popup_sub_pane_cp20_g1

0xcec6,	// (0x0004a0d0) bg_popup_sub_pane_cp20_g2

0x0e32,	// (0x0003e03c) bg_popup_sub_pane_cp20_g3

0xcece,	// (0x0004a0d8) bg_popup_sub_pane_cp20_g4

0x0e12,	// (0x0003e01c) bg_popup_sub_pane_cp20_g5

0xd11e,	// (0x0004a328) bg_popup_sub_pane_cp20_g6

0xcede,	// (0x0004a0e8) bg_popup_sub_pane_cp20_g7

0xcee6,	// (0x0004a0f0) bg_popup_sub_pane_cp20_g8

0xceee,	// (0x0004a0f8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0004cc25) bg_popup_sub_pane_cp20_g

0xf035,	// (0x0004c23f) list_vitu2_match_list_item_pane_ParamLimits

0xf035,	// (0x0004c23f) list_vitu2_match_list_item_pane

0xf047,	// (0x0004c251) list_vitu2_match_list_item_pane_t1

0x0289,	// (0x0003d493) bg_popup_sub_pane_cp21

0x125a,	// (0x0003e464) grid_vitu2_dropdown_list_pane

0xa110,	// (0x0004731a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa110,	// (0x0004731a) cell_vitu2_dropdown_list_char_pane

0xa131,	// (0x0004733b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa131,	// (0x0004733b) cell_vitu2_dropdown_list_ctrl_pane

0xd13e,	// (0x0004a348) cell_vitu2_dropdown_list_char_pane_g1

0xd147,	// (0x0004a351) cell_vitu2_dropdown_list_char_pane_g2

0xd150,	// (0x0004a35a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0004cc42) cell_vitu2_dropdown_list_char_pane_g

0xa15d,	// (0x00047367) cell_vitu2_dropdown_list_char_pane_t1

0xa16b,	// (0x00047375) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa16b,	// (0x00047375) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa178,	// (0x00047382) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa178,	// (0x00047382) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa185,	// (0x0004738f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa185,	// (0x0004738f) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa192,	// (0x0004739c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa192,	// (0x0004739c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc67b,	// (0x00049885) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc67b,	// (0x00049885) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0004cc49) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0004cc49) cell_vitu2_dropdown_list_ctrl_pane_g

0xa1ae,	// (0x000473b8) aid_size_cell_gallery2_ParamLimits

0xa1ae,	// (0x000473b8) aid_size_cell_gallery2

0xa1c4,	// (0x000473ce) grid_gallery2_pane_ParamLimits

0xa1c4,	// (0x000473ce) grid_gallery2_pane

0xa1d8,	// (0x000473e2) scroll_pane_cp029_ParamLimits

0xa1d8,	// (0x000473e2) scroll_pane_cp029

0xa1e4,	// (0x000473ee) cell_gallery2_pane_ParamLimits

0xa1e4,	// (0x000473ee) cell_gallery2_pane

0xd159,	// (0x0004a363) cell_gallery2_pane_g2

0xa21a,	// (0x00047424) cell_gallery2_pane_g3

0xd163,	// (0x0004a36d) cell_gallery2_pane_g4

0xd16b,	// (0x0004a375) cell_gallery2_pane_g5

0x151d,	// (0x0003e727) grid_highlight_pane_cp10

0x9883,	// (0x00046a8d) popup_vitu2_match_list_window_ParamLimits

0x989a,	// (0x00046aa4) popup_vitu2_query_window_ParamLimits

0x989a,	// (0x00046aa4) popup_vitu2_query_window

0x0289,	// (0x0003d493) bg_vitu2_candi_button_pane

0xd13e,	// (0x0004a348) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd147,	// (0x0004a351) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd150,	// (0x0004a35a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2a78,	// (0x0003fc82) bg_button_pane_cp015

0xa222,	// (0x0004742c) bg_button_pane_cp016

0xa22c,	// (0x00047436) bg_button_pane_cp017

0x18e6,	// (0x0003eaf0) bg_popup_sub_pane_cp22

0xd173,	// (0x0004a37d) popup_vitu2_query_window_g1

0x2a8f,	// (0x0003fc99) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0004cc54) popup_vitu2_query_window_g

0x2a9d,	// (0x0003fca7) popup_vitu2_query_window_t1_ParamLimits

0x2a9d,	// (0x0003fca7) popup_vitu2_query_window_t1

0x2ac5,	// (0x0003fccf) popup_vitu2_query_window_t2_ParamLimits

0x2ac5,	// (0x0003fccf) popup_vitu2_query_window_t2

0x2ad7,	// (0x0003fce1) popup_vitu2_query_window_t3_ParamLimits

0x2ad7,	// (0x0003fce1) popup_vitu2_query_window_t3

0xa247,	// (0x00047451) popup_vitu2_query_window_t4_ParamLimits

0xa247,	// (0x00047451) popup_vitu2_query_window_t4

0xa25b,	// (0x00047465) popup_vitu2_query_window_t5_ParamLimits

0xa25b,	// (0x00047465) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0004cc59) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0004cc59) popup_vitu2_query_window_t

0xcfc0,	// (0x0004a1ca) main_cset_text_pane

0x9cc7,	// (0x00046ed1) aid_area_touch_slider_ParamLimits

0x9ce3,	// (0x00046eed) cset_slider_pane_ParamLimits

0x9d0d,	// (0x00046f17) main_cset_slider_pane_g1_ParamLimits

0x9d22,	// (0x00046f2c) main_cset_slider_pane_g2_ParamLimits

0xcfe1,	// (0x0004a1eb) main_cset_slider_pane_g3_ParamLimits

0xcfe1,	// (0x0004a1eb) main_cset_slider_pane_g3

0x9d37,	// (0x00046f41) main_cset_slider_pane_g4_ParamLimits

0x9d37,	// (0x00046f41) main_cset_slider_pane_g4

0x9d46,	// (0x00046f50) main_cset_slider_pane_g5_ParamLimits

0x9d46,	// (0x00046f50) main_cset_slider_pane_g5

0x9d52,	// (0x00046f5c) main_cset_slider_pane_g6_ParamLimits

0x9d52,	// (0x00046f5c) main_cset_slider_pane_g6

0xf9a4,	// (0x0004cbae) main_cset_slider_pane_g_ParamLimits

0xd011,	// (0x0004a21b) main_cset_slider_pane_t1_ParamLimits

0x9dde,	// (0x00046fe8) main_cset_slider_pane_t2_ParamLimits

0x9df8,	// (0x00047002) main_cset_slider_pane_t3_ParamLimits

0x9e12,	// (0x0004701c) main_cset_slider_pane_t4_ParamLimits

0x9e2c,	// (0x00047036) main_cset_slider_pane_t5_ParamLimits

0x9e46,	// (0x00047050) main_cset_slider_pane_t6_ParamLimits

0x9e5b,	// (0x00047065) main_cset_slider_pane_t7_ParamLimits

0x9e85,	// (0x0004708f) main_cset_slider_pane_t8_ParamLimits

0x9e85,	// (0x0004708f) main_cset_slider_pane_t8

0x9ead,	// (0x000470b7) main_cset_slider_pane_t9_ParamLimits

0x9ead,	// (0x000470b7) main_cset_slider_pane_t9

0x9ed5,	// (0x000470df) main_cset_slider_pane_t10_ParamLimits

0x9ed5,	// (0x000470df) main_cset_slider_pane_t10

0x9efd,	// (0x00047107) main_cset_slider_pane_t11_ParamLimits

0x9efd,	// (0x00047107) main_cset_slider_pane_t11

0x9f25,	// (0x0004712f) main_cset_slider_pane_t12_ParamLimits

0x9f25,	// (0x0004712f) main_cset_slider_pane_t12

0x9f42,	// (0x0004714c) main_cset_slider_pane_t13_ParamLimits

0x9f42,	// (0x0004714c) main_cset_slider_pane_t13

0xf9c9,	// (0x0004cbd3) main_cset_slider_pane_t_ParamLimits

0x0289,	// (0x0003d493) bg_popup_sub_pane_cp011

0xd17f,	// (0x0004a389) main_cset_text_pane_g1

0xd187,	// (0x0004a391) main_cset_text_pane_t1

0xd195,	// (0x0004a39f) main_cset_text_pane_t2

0xd1a3,	// (0x0004a3ad) main_cset_text_pane_t3

0xd1b1,	// (0x0004a3bb) main_cset_text_pane_t4

0xd1bf,	// (0x0004a3c9) main_cset_text_pane_t5

0xd1cd,	// (0x0004a3d7) main_cset_text_pane_t6

0xd1db,	// (0x0004a3e5) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0004cc64) main_cset_text_pane_t

0x0289,	// (0x0003d493) main_cam4_burst_pane

0x0289,	// (0x0003d493) main_cam5_pane

0x9c06,	// (0x00046e10) bg_button_pane_cp019

0x9c0f,	// (0x00046e19) bg_button_pane_cp020

0xcfed,	// (0x0004a1f7) main_cset_slider_pane_g7_ParamLimits

0xcfed,	// (0x0004a1f7) main_cset_slider_pane_g7

0xcff9,	// (0x0004a203) main_cset_slider_pane_g8_ParamLimits

0xcff9,	// (0x0004a203) main_cset_slider_pane_g8

0x9d66,	// (0x00046f70) main_cset_slider_pane_g9_ParamLimits

0x9d66,	// (0x00046f70) main_cset_slider_pane_g9

0x9d72,	// (0x00046f7c) main_cset_slider_pane_g10_ParamLimits

0x9d72,	// (0x00046f7c) main_cset_slider_pane_g10

0x9d7e,	// (0x00046f88) main_cset_slider_pane_g11_ParamLimits

0x9d7e,	// (0x00046f88) main_cset_slider_pane_g11

0x9d8a,	// (0x00046f94) main_cset_slider_pane_g12_ParamLimits

0x9d8a,	// (0x00046f94) main_cset_slider_pane_g12

0x9d96,	// (0x00046fa0) main_cset_slider_pane_g13_ParamLimits

0x9d96,	// (0x00046fa0) main_cset_slider_pane_g13

0x9da2,	// (0x00046fac) main_cset_slider_pane_g14_ParamLimits

0x9da2,	// (0x00046fac) main_cset_slider_pane_g14

0x9dae,	// (0x00046fb8) main_cset_slider_pane_g15_ParamLimits

0x9dae,	// (0x00046fb8) main_cset_slider_pane_g15

0xd03f,	// (0x0004a249) main_cset_slider_pane_t14_ParamLimits

0xd03f,	// (0x0004a249) main_cset_slider_pane_t14

0xd078,	// (0x0004a282) main_cset_slider_pane_t15_ParamLimits

0xd078,	// (0x0004a282) main_cset_slider_pane_t15

0xa26f,	// (0x00047479) aid_cam4_burst_size_cell_ParamLimits

0xa26f,	// (0x00047479) aid_cam4_burst_size_cell

0xa28f,	// (0x00047499) grid_cam4_burst_pane_ParamLimits

0xa28f,	// (0x00047499) grid_cam4_burst_pane

0xa2c7,	// (0x000474d1) linegrid_cam4_burst_pane_ParamLimits

0xa2c7,	// (0x000474d1) linegrid_cam4_burst_pane

0x01b2,	// (0x0003d3bc) scroll_pane_cp30_ParamLimits

0x01b2,	// (0x0003d3bc) scroll_pane_cp30

0xa2eb,	// (0x000474f5) cell_cam4_burst_pane_ParamLimits

0xa2eb,	// (0x000474f5) cell_cam4_burst_pane

0xd1e9,	// (0x0004a3f3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd1e9,	// (0x0004a3f3) linegrid_cam4_burst_pane_g1

0xa338,	// (0x00047542) linegrid_cam4_burst_pane_g2_ParamLimits

0xa338,	// (0x00047542) linegrid_cam4_burst_pane_g2

0xd1f6,	// (0x0004a400) linegrid_cam4_burst_pane_g3_ParamLimits

0xd1f6,	// (0x0004a400) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0004cc73) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0004cc73) linegrid_cam4_burst_pane_g

0xa349,	// (0x00047553) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa349,	// (0x00047553) linegrid_cam4_burst_pane_g3_copy1

0xd203,	// (0x0004a40d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd203,	// (0x0004a40d) linegrid_cam4_burst_pane_g4

0xa363,	// (0x0004756d) linegrid_cam4_burst_pane_g5_ParamLimits

0xa363,	// (0x0004756d) linegrid_cam4_burst_pane_g5

0xa374,	// (0x0004757e) linegrid_cam4_burst_pane_g6_ParamLimits

0xa374,	// (0x0004757e) linegrid_cam4_burst_pane_g6

0xd210,	// (0x0004a41a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd210,	// (0x0004a41a) linegrid_cam4_burst_pane_g7

0xa38b,	// (0x00047595) cell_cam4_burst_pane_g1

0xd229,	// (0x0004a433) main_cam5_pane_t1_ParamLimits

0xd229,	// (0x0004a433) main_cam5_pane_t1

0xd23b,	// (0x0004a445) main_cam5_pane_t2_ParamLimits

0xd23b,	// (0x0004a445) main_cam5_pane_t2

0xd24d,	// (0x0004a457) main_cam5_pane_t3_ParamLimits

0xd24d,	// (0x0004a457) main_cam5_pane_t3

0xd25f,	// (0x0004a469) main_cam5_pane_t4_ParamLimits

0xd25f,	// (0x0004a469) main_cam5_pane_t4

0xd277,	// (0x0004a481) main_cam5_pane_t5_ParamLimits

0xd277,	// (0x0004a481) main_cam5_pane_t5

0xd28b,	// (0x0004a495) main_cam5_pane_t6_ParamLimits

0xd28b,	// (0x0004a495) main_cam5_pane_t6

0xd29f,	// (0x0004a4a9) main_cam5_pane_t7_ParamLimits

0xd29f,	// (0x0004a4a9) main_cam5_pane_t7

0xd2b1,	// (0x0004a4bb) main_cam5_pane_t8_ParamLimits

0xd2b1,	// (0x0004a4bb) main_cam5_pane_t8

0xd2cd,	// (0x0004a4d7) main_cam5_pane_t9_ParamLimits

0xd2cd,	// (0x0004a4d7) main_cam5_pane_t9

0xd2df,	// (0x0004a4e9) main_cam5_pane_t10_ParamLimits

0xd2df,	// (0x0004a4e9) main_cam5_pane_t10

0xd2f1,	// (0x0004a4fb) main_cam5_pane_t11_ParamLimits

0xd2f1,	// (0x0004a4fb) main_cam5_pane_t11

0xd303,	// (0x0004a50d) main_cam5_pane_t12_ParamLimits

0xd303,	// (0x0004a50d) main_cam5_pane_t12

0xd318,	// (0x0004a522) main_cam5_pane_t13_ParamLimits

0xd318,	// (0x0004a522) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0004cc7f) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0004cc7f) main_cam5_pane_t

0x3376,	// (0x00040580) popup_scut_keymap_window_ParamLimits

0x3376,	// (0x00040580) popup_scut_keymap_window

0xa39e,	// (0x000475a8) aid_size_cell_brow_shortcut

0x151d,	// (0x0003e727) bg_popup_window_pane_cp010

0xa3aa,	// (0x000475b4) grid_scut_pane

0xa3b6,	// (0x000475c0) cell_scut_pane_ParamLimits

0xa3b6,	// (0x000475c0) cell_scut_pane

0xa3cd,	// (0x000475d7) cell_scut_pane_g1

0xd335,	// (0x0004a53f) cell_scut_pane_t1

0xd344,	// (0x0004a54e) cell_scut_pane_t2

0xa3d6,	// (0x000475e0) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0004cc9a) cell_scut_pane_t

0x82e2,	// (0x000454ec) main_mup3_pane_g8_ParamLimits

0x82e2,	// (0x000454ec) main_mup3_pane_g8

0x9781,	// (0x0004698b) area_vitu2_query_pane_ParamLimits

0x9781,	// (0x0004698b) area_vitu2_query_pane

0x2a82,	// (0x0003fc8c) input_focus_pane_cp08

0xd353,	// (0x0004a55d) area_vitu2_query_pane_g1

0x2aff,	// (0x0003fd09) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0004cca1) area_vitu2_query_pane_g

0xa3e4,	// (0x000475ee) area_vitu2_query_pane_t1_ParamLimits

0xa3e4,	// (0x000475ee) area_vitu2_query_pane_t1

0xa3f8,	// (0x00047602) area_vitu2_query_pane_t2_ParamLimits

0xa3f8,	// (0x00047602) area_vitu2_query_pane_t2

0x2b10,	// (0x0003fd1a) area_vitu2_query_pane_t3_ParamLimits

0x2b10,	// (0x0003fd1a) area_vitu2_query_pane_t3

0xd35f,	// (0x0004a569) area_vitu2_query_pane_t4_ParamLimits

0xd35f,	// (0x0004a569) area_vitu2_query_pane_t4

0xd387,	// (0x0004a591) area_vitu2_query_pane_t5_ParamLimits

0xd387,	// (0x0004a591) area_vitu2_query_pane_t5

0xd3af,	// (0x0004a5b9) area_vitu2_query_pane_t6_ParamLimits

0xd3af,	// (0x0004a5b9) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0004cca6) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0004cca6) area_vitu2_query_pane_t

0xa40c,	// (0x00047616) bg_button_pane_cp018

0xa41a,	// (0x00047624) bg_button_pane_cp021

0x2b38,	// (0x0003fd42) bg_button_pane_cp022

0x2b47,	// (0x0003fd51) input_focus_pane_cp09

0x4ee2,	// (0x000420ec) aid_size_touch_mv_arrow_left

0x4f0b,	// (0x00042115) aid_size_touch_mv_arrow_right

0x9dc6,	// (0x00046fd0) main_cset_slider_pane_g16_ParamLimits

0x9dc6,	// (0x00046fd0) main_cset_slider_pane_g16

0x9dd2,	// (0x00046fdc) main_cset_slider_pane_g17_ParamLimits

0x9dd2,	// (0x00046fdc) main_cset_slider_pane_g17

0xa38b,	// (0x00047595) cell_cam4_burst_pane_g1_ParamLimits

0x0289,	// (0x0003d493) compa_mode_pane

0x9fac,	// (0x000471b6) popup_vtel_slider_window_g3_ParamLimits

0x9fac,	// (0x000471b6) popup_vtel_slider_window_g3

0x9fc3,	// (0x000471cd) popup_vtel_slider_window_g4_ParamLimits

0x9fc3,	// (0x000471cd) popup_vtel_slider_window_g4

0x9fda,	// (0x000471e4) popup_vtel_slider_window_t1_ParamLimits

0x9fda,	// (0x000471e4) popup_vtel_slider_window_t1

0x0289,	// (0x0003d493) main_cl_pane

0x6ef9,	// (0x00044103) popup_imed_adjust2_window_ParamLimits

0x6db2,	// (0x00043fbc) bg_tb_trans_pane_cp05_ParamLimits

0xc956,	// (0x00049b60) popup_imed_adjust2_window_g1_ParamLimits

0xc965,	// (0x00049b6f) popup_imed_adjust2_window_g2_ParamLimits

0xc965,	// (0x00049b6f) popup_imed_adjust2_window_g2

0xc971,	// (0x00049b7b) popup_imed_adjust2_window_g3_ParamLimits

0xc971,	// (0x00049b7b) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0004ca17) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0004ca17) popup_imed_adjust2_window_g

0xc97d,	// (0x00049b87) popup_imed_adjust2_window_t1_ParamLimits

0xc995,	// (0x00049b9f) slider_imed_adjust_pane_ParamLimits

0xc9a9,	// (0x00049bb3) slider_imed_adjust_pane_g1_ParamLimits

0xc9b9,	// (0x00049bc3) slider_imed_adjust_pane_g2_ParamLimits

0xc9c9,	// (0x00049bd3) slider_imed_adjust_pane_g3_ParamLimits

0xc9da,	// (0x00049be4) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0004ca1e) slider_imed_adjust_pane_g_ParamLimits

0x948c,	// (0x00046696) aid_touch_area_cam4_ParamLimits

0x948c,	// (0x00046696) aid_touch_area_cam4

0xef86,	// (0x0004c190) battery_pane_cp01

0x955c,	// (0x00046766) main_camera4_pane_g6_ParamLimits

0x955c,	// (0x00046766) main_camera4_pane_g6

0x9586,	// (0x00046790) main_camera4_pane_t2_ParamLimits

0x9586,	// (0x00046790) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0004cb21) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0004cb21) main_camera4_pane_t

0x95cd,	// (0x000467d7) aid_touch_area_vid4_ParamLimits

0x95cd,	// (0x000467d7) aid_touch_area_vid4

0x9634,	// (0x0004683e) main_video4_pane_g5_ParamLimits

0x9634,	// (0x0004683e) main_video4_pane_g5

0x965f,	// (0x00046869) vid4_progress_pane_ParamLimits

0x965f,	// (0x00046869) vid4_progress_pane

0xd005,	// (0x0004a20f) main_cset_slider_pane_g18_ParamLimits

0xd005,	// (0x0004a20f) main_cset_slider_pane_g18

0xd21d,	// (0x0004a427) cell_cam4_burst_pane_g2_ParamLimits

0xd21d,	// (0x0004a427) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0004cc7a) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0004cc7a) cell_cam4_burst_pane_g

0x0a36,	// (0x0003dc40) bg_cl_pane_ParamLimits

0x0a36,	// (0x0003dc40) bg_cl_pane

0xa426,	// (0x00047630) cl_header_pane_ParamLimits

0xa426,	// (0x00047630) cl_header_pane

0xa43a,	// (0x00047644) cl_listscroll_pane_ParamLimits

0xa43a,	// (0x00047644) cl_listscroll_pane

0xd3fb,	// (0x0004a605) bg_cl_pane_g1

0xd403,	// (0x0004a60d) bg_cl_pane_g2

0xd40b,	// (0x0004a615) bg_cl_pane_g3

0xd413,	// (0x0004a61d) bg_cl_pane_g4

0xd41b,	// (0x0004a625) bg_cl_pane_g5

0xd423,	// (0x0004a62d) bg_cl_pane_g6

0xd42b,	// (0x0004a635) bg_cl_pane_g7

0xd433,	// (0x0004a63d) bg_cl_pane_g8

0xd43b,	// (0x0004a645) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0004ccb5) bg_cl_pane_g

0xa44a,	// (0x00047654) aid_height_cl_leading_ParamLimits

0xa44a,	// (0x00047654) aid_height_cl_leading

0xa456,	// (0x00047660) aid_height_cl_text_ParamLimits

0xa456,	// (0x00047660) aid_height_cl_text

0x18e6,	// (0x0003eaf0) bg_cl_header_pane_ParamLimits

0x18e6,	// (0x0003eaf0) bg_cl_header_pane

0xa475,	// (0x0004767f) cl_header_pane_g1_ParamLimits

0xa475,	// (0x0004767f) cl_header_pane_g1

0xa48b,	// (0x00047695) cl_header_pane_t1_ParamLimits

0xa48b,	// (0x00047695) cl_header_pane_t1

0xd443,	// (0x0004a64d) cl_list_pane

0xcfd8,	// (0x0004a1e2) hc_scroll_pane_cp01

0x0e12,	// (0x0003e01c) bg_cl_header_pane_g1

0xcebe,	// (0x0004a0c8) bg_cl_header_pane_g2

0x0e32,	// (0x0003e03c) bg_cl_header_pane_g3

0xcece,	// (0x0004a0d8) bg_cl_header_pane_g4

0xcec6,	// (0x0004a0d0) bg_cl_header_pane_g5

0xd11e,	// (0x0004a328) bg_cl_header_pane_g6

0xcee6,	// (0x0004a0f0) bg_cl_header_pane_g7

0xceee,	// (0x0004a0f8) bg_cl_header_pane_g8

0xcede,	// (0x0004a0e8) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0004ccc8) bg_cl_header_pane_g

0xa4a4,	// (0x000476ae) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa4a4,	// (0x000476ae) hc_cl_list_double_graphic_heading_pane

0xa4b5,	// (0x000476bf) hc_cl_list_single_graphic_pane_ParamLimits

0xa4b5,	// (0x000476bf) hc_cl_list_single_graphic_pane

0xa4cb,	// (0x000476d5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa4cb,	// (0x000476d5) hc_cl_list_single_graphic_pane_g1

0xa4d7,	// (0x000476e1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa4d7,	// (0x000476e1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0004ccdb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0004ccdb) hc_cl_list_single_graphic_pane_g

0xa4eb,	// (0x000476f5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa4eb,	// (0x000476f5) hc_cl_list_single_graphic_pane_t1

0xa4cb,	// (0x000476d5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa4cb,	// (0x000476d5) hc_cl_list_double_graphic_heading_pane_g1

0xa500,	// (0x0004770a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa500,	// (0x0004770a) hc_cl_list_double_graphic_heading_pane_g2

0xa514,	// (0x0004771e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa514,	// (0x0004771e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0004cce0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0004cce0) hc_cl_list_double_graphic_heading_pane_g

0xa528,	// (0x00047732) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa528,	// (0x00047732) hc_cl_list_double_graphic_heading_pane_t1

0xa53d,	// (0x00047747) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa53d,	// (0x00047747) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0004cce7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0004cce7) hc_cl_list_double_graphic_heading_pane_t

0xf05d,	// (0x0004c267) vid4_progress_pane_g1

0xf06d,	// (0x0004c277) vid4_progress_pane_g2

0xc37c,	// (0x00049586) vid4_progress_pane_g3

0xf07d,	// (0x0004c287) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0004ccec) vid4_progress_pane_g

0xf09b,	// (0x0004c2a5) vid4_progress_pane_t1

0xf0b0,	// (0x0004c2ba) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0004ccf7) vid4_progress_pane_t

0xf0db,	// (0x0004c2e5) wait_bar_pane_cp07

0x7c62,	// (0x00044e6c) blid_firmament_pane_ParamLimits

0x7ca5,	// (0x00044eaf) popup_blid_sat_info2_window_g1

0x7cc9,	// (0x00044ed3) popup_blid_sat_info2_window_t3

0x7cd7,	// (0x00044ee1) popup_blid_sat_info2_window_t4

0x7ce5,	// (0x00044eef) popup_blid_sat_info2_window_t5

0x7cf3,	// (0x00044efd) popup_blid_sat_info2_window_t6

0x7d03,	// (0x00044f0d) popup_blid_sat_info2_window_t7

0x7d11,	// (0x00044f1b) popup_blid_sat_info2_window_t8

0x7d1f,	// (0x00044f29) popup_blid_sat_info2_window_t9

0x7d2d,	// (0x00044f37) popup_blid_sat_info2_window_t10

0x7ebb,	// (0x000450c5) aid_firma_cardinal_ParamLimits

0x7ecf,	// (0x000450d9) blid_firmament_pane_t1_ParamLimits

0x7ee6,	// (0x000450f0) blid_firmament_pane_t2_ParamLimits

0x7efd,	// (0x00045107) blid_firmament_pane_t3_ParamLimits

0x7f14,	// (0x0004511e) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0004c910) blid_firmament_pane_t_ParamLimits

0x7f2b,	// (0x00045135) blid_sat_info_pane_ParamLimits

0x18e6,	// (0x0003eaf0) main_cam_set_pane_ParamLimits

0x8b3f,	// (0x00045d49) aid_size_cell_colour_35_ParamLimits

0x8b5f,	// (0x00045d69) aid_size_cell_colour_112_ParamLimits

0x8b7f,	// (0x00045d89) aid_size_cell_effect_ParamLimits

0x6db2,	// (0x00043fbc) bg_tb_trans_pane_cp02_ParamLimits

0x105e,	// (0x0003e268) heading_imed_pane_ParamLimits

0x8b9f,	// (0x00045da9) listscroll_imed_pane_ParamLimits

0x60c7,	// (0x000432d1) popup_call2_audio_first_window_g5_ParamLimits

0x60c7,	// (0x000432d1) popup_call2_audio_first_window_g5

0x9137,	// (0x00046341) aid_size_touch_image3_arrow_left_ParamLimits

0x9137,	// (0x00046341) aid_size_touch_image3_arrow_left

0x9163,	// (0x0004636d) aid_size_touch_image3_arrow_right_ParamLimits

0x9163,	// (0x0004636d) aid_size_touch_image3_arrow_right

0xf0c6,	// (0x0004c2d0) vid4_progress_pane_t3

0x8eb2,	// (0x000460bc) main_hwr_training_symbol_option_pane_ParamLimits

0x8eb2,	// (0x000460bc) main_hwr_training_symbol_option_pane

0xcc43,	// (0x00049e4d) popup_hwr_training_preview_window_ParamLimits

0xcc43,	// (0x00049e4d) popup_hwr_training_preview_window

0x8ed2,	// (0x000460dc) hwr_training_navi_pane_g5_ParamLimits

0x8ed2,	// (0x000460dc) hwr_training_navi_pane_g5

0xceac,	// (0x0004a0b6) popup_char_count_window

0x18e6,	// (0x0003eaf0) bg_popup_sub_pane_cp20_ParamLimits

0xa0f2,	// (0x000472fc) list_vitu2_match_list_pane_ParamLimits

0xa101,	// (0x0004730b) vitu2_page_scroll_pane_ParamLimits

0xa101,	// (0x0004730b) vitu2_page_scroll_pane

0xd4a6,	// (0x0004a6b0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd4a6,	// (0x0004a6b0) list_single_hwr_training_symbol_option_pane

0xd4b9,	// (0x0004a6c3) list_single_hwr_training_symbol_option_pane_g1

0xd4c1,	// (0x0004a6cb) list_single_hwr_training_symbol_option_pane_t1

0xd4cf,	// (0x0004a6d9) bg_button_pane_cp023

0xd4d8,	// (0x0004a6e2) bg_button_pane_cp024

0xa552,	// (0x0004775c) vitu2_page_scroll_pane_g1

0xa55a,	// (0x00047764) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0004ccfe) vitu2_page_scroll_pane_g

0xa562,	// (0x0004776c) vitu2_page_scroll_pane_t1

0xd50b,	// (0x0004a715) popup_char_count_window_g1

0xd514,	// (0x0004a71e) popup_char_count_window_g2

0xd51d,	// (0x0004a727) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0004cd03) popup_char_count_window_g

0xd526,	// (0x0004a730) popup_char_count_window_t1

0x0289,	// (0x0003d493) main_vded2_pane

0xc942,	// (0x00049b4c) aid_size_cell_imed_line

0xc94c,	// (0x00049b56) grid_imed_line_width_pane

0x96cd,	// (0x000468d7) vid4_indicators_pane_g4

0xd534,	// (0x0004a73e) cell_imed_line_width_pane_ParamLimits

0xd534,	// (0x0004a73e) cell_imed_line_width_pane

0xd548,	// (0x0004a752) cell_imed_line_width_pane_g1

0xa571,	// (0x0004777b) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0004cd0a) cell_imed_line_width_pane_g

0xa579,	// (0x00047783) main_vded2_pane_g1_ParamLimits

0xa579,	// (0x00047783) main_vded2_pane_g1

0xa58f,	// (0x00047799) main_vded2_pane_g2_ParamLimits

0xa58f,	// (0x00047799) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0004cd0f) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0004cd0f) main_vded2_pane_g

0xa5a1,	// (0x000477ab) vded2_slider_pane_ParamLimits

0xa5a1,	// (0x000477ab) vded2_slider_pane

0xa5b1,	// (0x000477bb) aid_size_touch_vded2_end

0xa5bb,	// (0x000477c5) aid_size_touch_vded2_playhead

0xd551,	// (0x0004a75b) aid_size_touch_vded2_start

0xd559,	// (0x0004a763) vded2_slider_bg_pane

0xd562,	// (0x0004a76c) vded2_slider_pane_g1

0xd56b,	// (0x0004a775) vded2_slider_pane_g2

0xa5c5,	// (0x000477cf) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0004cd14) vded2_slider_pane_g

0xd573,	// (0x0004a77d) vded2_slider_bg_pane_g1

0xd57c,	// (0x0004a786) vded2_slider_bg_pane_g2

0xd585,	// (0x0004a78f) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0004cd1b) vded2_slider_bg_pane_g

0x54be,	// (0x000426c8) aid_postcard_touch_down_pane_ParamLimits

0x54be,	// (0x000426c8) aid_postcard_touch_down_pane

0x54d4,	// (0x000426de) aid_postcard_touch_up_pane_ParamLimits

0x54d4,	// (0x000426de) aid_postcard_touch_up_pane

0x0289,	// (0x0003d493) main_blid2_pane

0x6de8,	// (0x00043ff2) popup_blid2_search_window

0x0289,	// (0x0003d493) blid2_gps_pane

0x0289,	// (0x0003d493) blid2_navig_pane

0x0289,	// (0x0003d493) blid2_search_pane

0x0289,	// (0x0003d493) blid2_tripm_pane

0xa5d0,	// (0x000477da) blid2_search_pane_g1_ParamLimits

0xa5d0,	// (0x000477da) blid2_search_pane_g1

0xa5ea,	// (0x000477f4) blid2_search_pane_t1_ParamLimits

0xa5ea,	// (0x000477f4) blid2_search_pane_t1

0xa5fc,	// (0x00047806) aid_size_cell_blid2_gps_ParamLimits

0xa5fc,	// (0x00047806) aid_size_cell_blid2_gps

0xa614,	// (0x0004781e) blid2_gps_pane_g1_ParamLimits

0xa614,	// (0x0004781e) blid2_gps_pane_g1

0xa628,	// (0x00047832) grid_blid2_satellite_pane_ParamLimits

0xa628,	// (0x00047832) grid_blid2_satellite_pane

0xa642,	// (0x0004784c) blid2_navig_pane_g1_ParamLimits

0xa642,	// (0x0004784c) blid2_navig_pane_g1

0xa64e,	// (0x00047858) blid2_navig_pane_t1_ParamLimits

0xa64e,	// (0x00047858) blid2_navig_pane_t1

0xa669,	// (0x00047873) blid2_navig_pane_t2_ParamLimits

0xa669,	// (0x00047873) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0004cd22) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0004cd22) blid2_navig_pane_t

0xa684,	// (0x0004788e) blid2_navig_ring_pane_ParamLimits

0xa684,	// (0x0004788e) blid2_navig_ring_pane

0xa69d,	// (0x000478a7) blid2_speed_pane_ParamLimits

0xa69d,	// (0x000478a7) blid2_speed_pane

0xa6a9,	// (0x000478b3) blid2_tripm_pane_g1_ParamLimits

0xa6a9,	// (0x000478b3) blid2_tripm_pane_g1

0xa6c2,	// (0x000478cc) blid2_tripm_pane_g2_ParamLimits

0xa6c2,	// (0x000478cc) blid2_tripm_pane_g2

0xa6d6,	// (0x000478e0) blid2_tripm_pane_g3_ParamLimits

0xa6d6,	// (0x000478e0) blid2_tripm_pane_g3

0xa6ea,	// (0x000478f4) blid2_tripm_pane_g4_ParamLimits

0xa6ea,	// (0x000478f4) blid2_tripm_pane_g4

0xa6fe,	// (0x00047908) blid2_tripm_pane_g5_ParamLimits

0xa6fe,	// (0x00047908) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0004cd27) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0004cd27) blid2_tripm_pane_g

0xa724,	// (0x0004792e) blid2_tripm_pane_t1_ParamLimits

0xa724,	// (0x0004792e) blid2_tripm_pane_t1

0xa73f,	// (0x00047949) blid2_tripm_pane_t2_ParamLimits

0xa73f,	// (0x00047949) blid2_tripm_pane_t2

0xa758,	// (0x00047962) blid2_tripm_pane_t3_ParamLimits

0xa758,	// (0x00047962) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0004cd34) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0004cd34) blid2_tripm_pane_t

0xa79f,	// (0x000479a9) cell_blid2_satellite_pane_ParamLimits

0xa79f,	// (0x000479a9) cell_blid2_satellite_pane

0xa7bd,	// (0x000479c7) cell_blid2_satellite_pane_g1

0xd58e,	// (0x0004a798) cell_blid2_satellite_pane_t1

0x7f3b,	// (0x00045145) blid2_speed_pane_g1

0xd59c,	// (0x0004a7a6) blid2_speed_pane_t1

0xd5aa,	// (0x0004a7b4) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0004cd3d) blid2_speed_pane_t

0x7f3b,	// (0x00045145) blid2_navig_ring_pane_g1

0xa7c6,	// (0x000479d0) blid2_navig_ring_pane_g2

0xa7ce,	// (0x000479d8) blid2_navig_ring_pane_g3

0xa7d6,	// (0x000479e0) blid2_navig_ring_pane_g4

0xa7de,	// (0x000479e8) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0004cd42) blid2_navig_ring_pane_g

0x0289,	// (0x0003d493) bg_popup_window_pane_cp011

0xd5b8,	// (0x0004a7c2) popup_blid2_search_window_g1

0xd5c0,	// (0x0004a7ca) popup_blid2_search_window_t1

0xd5ce,	// (0x0004a7d8) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0004cd4d) popup_blid2_search_window_t

0x0d21,	// (0x0003df2b) main_browser_pane_g1

0x0a36,	// (0x0003dc40) main_browser_pane_ParamLimits

0x18e6,	// (0x0003eaf0) bg_button_pane_cp011_ParamLimits

0x99a6,	// (0x00046bb0) cell_vitu2_function_pane_g1_ParamLimits

0x18e6,	// (0x0003eaf0) bg_popup_sub_pane_cp22_ParamLimits

0x2a82,	// (0x0003fc8c) input_focus_pane_cp08_ParamLimits

0xa236,	// (0x00047440) popup_vitu2_query_button_pane_ParamLimits

0xa236,	// (0x00047440) popup_vitu2_query_button_pane

0x2a78,	// (0x0003fc82) popup_vitu2_query_input_button_pane

0xd173,	// (0x0004a37d) popup_vitu2_query_window_g1_ParamLimits

0x2a8f,	// (0x0003fc99) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0004cc54) popup_vitu2_query_window_g_ParamLimits

0x0289,	// (0x0003d493) bg_button_pane_cp026

0xa7e6,	// (0x000479f0) popup_vitu2_query_input_button_pane_g1

0x0289,	// (0x0003d493) bg_button_pane_cp025

0xd5dc,	// (0x0004a7e6) popup_vitu2_query_button_pane_t1

0x8006,	// (0x00045210) main_mp3_pane_t6

0x8014,	// (0x0004521e) popup_slider_window_cp01

0xef96,	// (0x0004c1a0) cam4_battery_pane

0xefef,	// (0x0004c1f9) cam4_battery_pane_cp02

0xf055,	// (0x0004c25f) cam4_battery_pane_cp01

0xf055,	// (0x0004c25f) cam4_battery_pane_cp03

0x7f3b,	// (0x00045145) cam4_battery_pane_g1

0xd5ea,	// (0x0004a7f4) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0004cd52) cam4_battery_pane_g

0x7d3b,	// (0x00044f45) popup_blid_sat_info2_window_t11

0x4ee2,	// (0x000420ec) aid_size_touch_mv_arrow_left_ParamLimits

0x4f0b,	// (0x00042115) aid_size_touch_mv_arrow_right_ParamLimits

0x147d,	// (0x0003e687) navi_pane_g1_ParamLimits

0x4f34,	// (0x0004213e) navi_pane_g2_ParamLimits

0x4f62,	// (0x0004216c) navi_pane_g3_ParamLimits

0xf418,	// (0x0004c622) navi_pane_g_ParamLimits

0x4fba,	// (0x000421c4) navi_pane_mv_t1_ParamLimits

0x8bab,	// (0x00045db5) grid_imed_effect_pane_ParamLimits

0x0c6a,	// (0x0003de74) aid_placing_vt_slider_lsc

0x0c72,	// (0x0003de7c) aid_placing_vt_slider_prt

0x18e6,	// (0x0003eaf0) bg_tb_trans_pane_cp01_ParamLimits

0xc59b,	// (0x000497a5) popup_image_details_window_g1_ParamLimits

0xc5ae,	// (0x000497b8) popup_image_details_window_g2_ParamLimits

0xc5c3,	// (0x000497cd) popup_image_details_window_g3_ParamLimits

0xc5c3,	// (0x000497cd) popup_image_details_window_g3

0xf74b,	// (0x0004c955) popup_image_details_window_g_ParamLimits

0xc5d7,	// (0x000497e1) popup_image_details_window_t1_ParamLimits

0xc5e9,	// (0x000497f3) popup_image_details_window_t2_ParamLimits

0xc602,	// (0x0004980c) popup_image_details_window_t3_ParamLimits

0xc616,	// (0x00049820) popup_image_details_window_t4_ParamLimits

0xc631,	// (0x0004983b) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0004c95c) popup_image_details_window_t_ParamLimits

0xa462,	// (0x0004766c) cl_header_name_pane_ParamLimits

0xa462,	// (0x0004766c) cl_header_name_pane

0xa7ee,	// (0x000479f8) cl_header_name_pane_t1_ParamLimits

0xa7ee,	// (0x000479f8) cl_header_name_pane_t1

0xa80f,	// (0x00047a19) cl_header_name_pane_t2_ParamLimits

0xa80f,	// (0x00047a19) cl_header_name_pane_t2

0xa851,	// (0x00047a5b) cl_header_name_pane_t3_ParamLimits

0xa851,	// (0x00047a5b) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0004cd57) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0004cd57) cl_header_name_pane_t

0x4f8b,	// (0x00042195) navi_pane_mv_g2_ParamLimits

0xce69,	// (0x0004a073) field_vitu2_entry_pane_g1_ParamLimits

0xce75,	// (0x0004a07f) field_vitu2_entry_pane_g2_ParamLimits

0xce81,	// (0x0004a08b) field_vitu2_entry_pane_g3_ParamLimits

0xce81,	// (0x0004a08b) field_vitu2_entry_pane_g3

0xf949,	// (0x0004cb53) field_vitu2_entry_pane_g_ParamLimits

0x9922,	// (0x00046b2c) cell_vitu2_itu_pane_g1_ParamLimits

0x9932,	// (0x00046b3c) cell_vitu2_itu_pane_g2_ParamLimits

0x9932,	// (0x00046b3c) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0004cb5f) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0004cb5f) cell_vitu2_itu_pane_g

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp05_ParamLimits

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp05

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp03

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp04

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp10_ParamLimits

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp10

0x2b38,	// (0x0003fd42) bg_vkb2_func_pane_cp08

0xa40c,	// (0x00047616) bg_vkb2_func_pane_cp06

0xa41a,	// (0x00047624) bg_vkb2_func_pane_cp07

0xd4e1,	// (0x0004a6eb) bg_vkb2_func_pane_cp11_ParamLimits

0xd4e1,	// (0x0004a6eb) bg_vkb2_func_pane_cp11

0xd4f6,	// (0x0004a700) bg_vkb2_func_pane_cp12_ParamLimits

0xd4f6,	// (0x0004a700) bg_vkb2_func_pane_cp12

0x0289,	// (0x0003d493) bg_vkb2_func_pane_cp09

0xcebe,	// (0x0004a0c8) bg_vkb2_func_pane_g1

0x0e32,	// (0x0003e03c) bg_vkb2_func_pane_g2

0xcec6,	// (0x0004a0d0) bg_vkb2_func_pane_g3

0xcece,	// (0x0004a0d8) bg_vkb2_func_pane_g4

0xd11e,	// (0x0004a328) bg_vkb2_func_pane_g5

0xcee6,	// (0x0004a0f0) bg_vkb2_func_pane_g6

0xceee,	// (0x0004a0f8) bg_vkb2_func_pane_g7

0xcede,	// (0x0004a0e8) bg_vkb2_func_pane_g8

0x0e12,	// (0x0003e01c) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0004cd5e) bg_vkb2_func_pane_g

0xa712,	// (0x0004791c) blid2_tripm_pane_g6_ParamLimits

0xa712,	// (0x0004791c) blid2_tripm_pane_g6

0xccfb,	// (0x00049f05) mp4_progress_pane_g1

0xa78b,	// (0x00047995) blid2_tripm_values_pane_ParamLimits

0xa78b,	// (0x00047995) blid2_tripm_values_pane

0xa882,	// (0x00047a8c) blid2_tripm_values_pane_t1

0xa890,	// (0x00047a9a) blid2_tripm_values_pane_t2

0xa89e,	// (0x00047aa8) blid2_tripm_values_pane_t3

0xa8ac,	// (0x00047ab6) blid2_tripm_values_pane_t4

0xa8ba,	// (0x00047ac4) blid2_tripm_values_pane_t5

0xa8c8,	// (0x00047ad2) blid2_tripm_values_pane_t6

0xa8d6,	// (0x00047ae0) blid2_tripm_values_pane_t7

0xa8e4,	// (0x00047aee) blid2_tripm_values_pane_t8

0xa8f2,	// (0x00047afc) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0004cd71) blid2_tripm_values_pane_t

0x4086,	// (0x00041290) call_video_pane_t1_ParamLimits

0x4098,	// (0x000412a2) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0004c4ab) call_video_pane_t_ParamLimits

0x2872,	// (0x0003fa7c) msg_header_pane_g1_ParamLimits

0x1698,	// (0x0003e8a2) msg_header_pane_g2_ParamLimits

0x1698,	// (0x0003e8a2) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0004c6c5) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0004c6c5) msg_header_pane_g

0x0a36,	// (0x0003dc40) main_clock2_pane_ParamLimits

0x88d7,	// (0x00045ae1) grid_clock2_toolbar_pane_ParamLimits

0x88d7,	// (0x00045ae1) grid_clock2_toolbar_pane

0x88d7,	// (0x00045ae1) listscroll_clock2_pane_ParamLimits

0x88d7,	// (0x00045ae1) listscroll_clock2_pane

0x89b3,	// (0x00045bbd) main_clock2_pane_t3_ParamLimits

0x89b3,	// (0x00045bbd) main_clock2_pane_t3

0x89ce,	// (0x00045bd8) main_clock2_pane_t4_ParamLimits

0x89ce,	// (0x00045bd8) main_clock2_pane_t4

0xd5f4,	// (0x0004a7fe) cell_clock2_toolbar_pane

0xd5fc,	// (0x0004a806) cell_clock2_toolbar_pane_cp01

0xd5fc,	// (0x0004a806) cell_clock2_toolbar_pane_cp02

0xd604,	// (0x0004a80e) cell_clock2_toolbar_pane_cp03

0xd60c,	// (0x0004a816) list_clock2_pane

0x13d4,	// (0x0003e5de) scroll_pane_cp10

0xd614,	// (0x0004a81e) list_single_clock2_pane_ParamLimits

0xd614,	// (0x0004a81e) list_single_clock2_pane

0x151d,	// (0x0003e727) list_highlight_pane_cp08

0xd621,	// (0x0004a82b) list_single_clock2_pane_t1

0xd62f,	// (0x0004a839) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0004cd84) list_single_clock2_pane_t

0x0289,	// (0x0003d493) bg_button_pane_cp10

0xd63d,	// (0x0004a847) cell_clock2_toolbar_pane_g1

0x544a,	// (0x00042654) aid_main_viewer_pane_g1_ParamLimits

0x544a,	// (0x00042654) aid_main_viewer_pane_g1

0x5458,	// (0x00042662) aid_main_viewer_pane_g2_ParamLimits

0x5458,	// (0x00042662) aid_main_viewer_pane_g2

0x5466,	// (0x00042670) aid_main_viewer_pane_g3_ParamLimits

0x5466,	// (0x00042670) aid_main_viewer_pane_g3

0x5475,	// (0x0004267f) aid_main_viewer_pane_g4_ParamLimits

0x5475,	// (0x0004267f) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0004c6d6) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0004c6d6) aid_main_viewer_pane_g

0x6d9e,	// (0x00043fa8) main_calc_pane_ParamLimits

0x6dc0,	// (0x00043fca) main_dialer2_pane_ParamLimits

0x0289,	// (0x0003d493) main_cam6_pane

0x0289,	// (0x0003d493) main_vid6_pane

0x88e3,	// (0x00045aed) listscroll_gen_pane_cp06_ParamLimits

0x88e3,	// (0x00045aed) listscroll_gen_pane_cp06

0x89e9,	// (0x00045bf3) main_clock2_pane_t5_ParamLimits

0x89e9,	// (0x00045bf3) main_clock2_pane_t5

0x8a40,	// (0x00045c4a) aid_call2_pane_cp10_ParamLimits

0x8a52,	// (0x00045c5c) aid_call_pane_cp10_ParamLimits

0x1452,	// (0x0003e65c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1452,	// (0x0003e65c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8a64,	// (0x00045c6e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8a64,	// (0x00045c6e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1452,	// (0x0003e65c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0004ca0c) popup_clock_analogue_window_cp10_g_ParamLimits

0x8a76,	// (0x00045c80) popup_clock_analogue_window_cp10_t1_ParamLimits

0x90e4,	// (0x000462ee) cell_dialer2_keypad_pane_g2_ParamLimits

0x90e4,	// (0x000462ee) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0004caf2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0004caf2) cell_dialer2_keypad_pane_g

0x9100,	// (0x0004630a) cell_dialer2_keypad_pane_t1

0x9cb9,	// (0x00046ec3) main_cset_text2_pane_ParamLimits

0x9cb9,	// (0x00046ec3) main_cset_text2_pane

0xd353,	// (0x0004a55d) area_vitu2_query_pane_g1_ParamLimits

0x2aff,	// (0x0003fd09) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0004cca1) area_vitu2_query_pane_g_ParamLimits

0xd3d7,	// (0x0004a5e1) area_vitu2_query_pane_t7_ParamLimits

0xd3d7,	// (0x0004a5e1) area_vitu2_query_pane_t7

0xa40c,	// (0x00047616) bg_button_pane_cp018_ParamLimits

0xa41a,	// (0x00047624) bg_button_pane_cp021_ParamLimits

0x2b38,	// (0x0003fd42) bg_button_pane_cp022_ParamLimits

0x2b38,	// (0x0003fd42) bg_vkb2_func_pane_cp08_ParamLimits

0xa40c,	// (0x00047616) bg_vkb2_func_pane_cp06_ParamLimits

0xa41a,	// (0x00047624) bg_vkb2_func_pane_cp07_ParamLimits

0x2b47,	// (0x0003fd51) input_focus_pane_cp09_ParamLimits

0xf0ed,	// (0x0004c2f7) cam6_autofocus_pane_ParamLimits

0xf0ed,	// (0x0004c2f7) cam6_autofocus_pane

0xa900,	// (0x00047b0a) cam6_image_uncrop_pane_ParamLimits

0xa900,	// (0x00047b0a) cam6_image_uncrop_pane

0xa90f,	// (0x00047b19) cam6_indi_pane_ParamLimits

0xa90f,	// (0x00047b19) cam6_indi_pane

0xa925,	// (0x00047b2f) cam6_mode_pane_ParamLimits

0xa925,	// (0x00047b2f) cam6_mode_pane

0xa937,	// (0x00047b41) cam6_timer_pane_ParamLimits

0xa937,	// (0x00047b41) cam6_timer_pane

0xa943,	// (0x00047b4d) cam6_zoom_pane_ParamLimits

0xa943,	// (0x00047b4d) cam6_zoom_pane

0xa94f,	// (0x00047b59) cam6_mode_pane_g1_ParamLimits

0xa94f,	// (0x00047b59) cam6_mode_pane_g1

0xa95f,	// (0x00047b69) cam6_mode_pane_g2_ParamLimits

0xa95f,	// (0x00047b69) cam6_mode_pane_g2

0xa96f,	// (0x00047b79) cam6_mode_pane_g3_ParamLimits

0xa96f,	// (0x00047b79) cam6_mode_pane_g3

0xa97f,	// (0x00047b89) cam6_mode_pane_g4_ParamLimits

0xa97f,	// (0x00047b89) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0004cd89) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0004cd89) cam6_mode_pane_g

0xd645,	// (0x0004a84f) bg_tb_trans_pane_cp08_ParamLimits

0xd645,	// (0x0004a84f) bg_tb_trans_pane_cp08

0xd653,	// (0x0004a85d) cam6_battery_pane_ParamLimits

0xd653,	// (0x0004a85d) cam6_battery_pane

0xd669,	// (0x0004a873) cam6_indi_pane_g1_ParamLimits

0xd669,	// (0x0004a873) cam6_indi_pane_g1

0xd67b,	// (0x0004a885) cam6_indi_pane_g2_ParamLimits

0xd67b,	// (0x0004a885) cam6_indi_pane_g2

0xd68d,	// (0x0004a897) cam6_indi_pane_g3_ParamLimits

0xd68d,	// (0x0004a897) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0004cd92) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0004cd92) cam6_indi_pane_g

0xd69f,	// (0x0004a8a9) cam6_indi_pane_t1_ParamLimits

0xd69f,	// (0x0004a8a9) cam6_indi_pane_t1

0xa98f,	// (0x00047b99) cam6_autofocus_pane_g1

0xa997,	// (0x00047ba1) cam6_autofocus_pane_g2

0xa99f,	// (0x00047ba9) cam6_autofocus_pane_g3

0xa9a7,	// (0x00047bb1) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0004cd99) cam6_autofocus_pane_g

0xd6c5,	// (0x0004a8cf) cam6_timer_pane_g1

0xd6cd,	// (0x0004a8d7) cam6_timer_pane_t1

0xd6db,	// (0x0004a8e5) cam6_zoom_cont_pane

0xd6e3,	// (0x0004a8ed) cam6_zoom_pane_g1

0xd6eb,	// (0x0004a8f5) cam6_zoom_pane_g2

0xa9af,	// (0x00047bb9) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0004cda2) cam6_zoom_pane_g

0x7f3b,	// (0x00045145) cam6_battery_pane_g1

0x7f3b,	// (0x00045145) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0004c919) cam6_battery_pane_g

0xd6f3,	// (0x0004a8fd) cam6_zoom_cont_pane_g1

0xd6fc,	// (0x0004a906) cam6_zoom_cont_pane_g2

0xd705,	// (0x0004a90f) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0004cda9) cam6_zoom_cont_pane_g

0xa9cc,	// (0x00047bd6) cam6_mode_pane_cp_ParamLimits

0xa9cc,	// (0x00047bd6) cam6_mode_pane_cp

0xa943,	// (0x00047b4d) cam6_zoom_pane_cp_ParamLimits

0xa943,	// (0x00047b4d) cam6_zoom_pane_cp

0xa9de,	// (0x00047be8) vid6_image_uncrop_cif_pane_ParamLimits

0xa9de,	// (0x00047be8) vid6_image_uncrop_cif_pane

0xa9ee,	// (0x00047bf8) vid6_image_uncrop_nhd_pane_ParamLimits

0xa9ee,	// (0x00047bf8) vid6_image_uncrop_nhd_pane

0xa900,	// (0x00047b0a) vid6_image_uncrop_vga_pane_ParamLimits

0xa900,	// (0x00047b0a) vid6_image_uncrop_vga_pane

0xa9fd,	// (0x00047c07) vid6_image_uncrop_wvga_pane_ParamLimits

0xa9fd,	// (0x00047c07) vid6_image_uncrop_wvga_pane

0xaa0c,	// (0x00047c16) vid6_indi_pane_ParamLimits

0xaa0c,	// (0x00047c16) vid6_indi_pane

0xd645,	// (0x0004a84f) bg_tb_trans_pane_cp09_ParamLimits

0xd645,	// (0x0004a84f) bg_tb_trans_pane_cp09

0xd71d,	// (0x0004a927) cam6_battery_pane_cp_ParamLimits

0xd71d,	// (0x0004a927) cam6_battery_pane_cp

0xd729,	// (0x0004a933) vid6_indi_pane_g1_ParamLimits

0xd729,	// (0x0004a933) vid6_indi_pane_g1

0xd73b,	// (0x0004a945) vid6_indi_pane_g2_ParamLimits

0xd73b,	// (0x0004a945) vid6_indi_pane_g2

0xd74d,	// (0x0004a957) vid6_indi_pane_g3_ParamLimits

0xd74d,	// (0x0004a957) vid6_indi_pane_g3

0xd762,	// (0x0004a96c) vid6_indi_pane_g4_ParamLimits

0xd762,	// (0x0004a96c) vid6_indi_pane_g4

0xd777,	// (0x0004a981) vid6_indi_pane_g5_ParamLimits

0xd777,	// (0x0004a981) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0004cdb0) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0004cdb0) vid6_indi_pane_g

0xd791,	// (0x0004a99b) vid6_indi_pane_t1_ParamLimits

0xd791,	// (0x0004a99b) vid6_indi_pane_t1

0xd7a7,	// (0x0004a9b1) vid6_indi_pane_t2_ParamLimits

0xd7a7,	// (0x0004a9b1) vid6_indi_pane_t2

0xd7cf,	// (0x0004a9d9) vid6_indi_pane_t3_ParamLimits

0xd7cf,	// (0x0004a9d9) vid6_indi_pane_t3

0xd7f7,	// (0x0004aa01) vid6_indi_pane_t4_ParamLimits

0xd7f7,	// (0x0004aa01) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0004cdbb) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0004cdbb) vid6_indi_pane_t

0xd81b,	// (0x0004aa25) wait_bar_pane_cp08

0xaa24,	// (0x00047c2e) main_cset_text2_pane_t1_ParamLimits

0xaa24,	// (0x00047c2e) main_cset_text2_pane_t1

0xa9b7,	// (0x00047bc1) listscroll_gen_pane_cp06_t1_ParamLimits

0xa9b7,	// (0x00047bc1) listscroll_gen_pane_cp06_t1

0x0289,	// (0x0003d493) main_cam6_set_pane

0xc67b,	// (0x00049885) bg_tb_trans_pane_cp06_ParamLimits

0xef9e,	// (0x0004c1a8) cam4_indicators_pane_g1_ParamLimits

0xefaf,	// (0x0004c1b9) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0004cb2f) cam4_indicators_pane_g_ParamLimits

0xefcd,	// (0x0004c1d7) cam4_indicators_pane_t1_ParamLimits

0xce42,	// (0x0004a04c) bg_tb_trans_pane_cp07_ParamLimits

0x96a6,	// (0x000468b0) vid4_indicators_pane_g1_ParamLimits

0x96b3,	// (0x000468bd) vid4_indicators_pane_g2_ParamLimits

0x96c0,	// (0x000468ca) vid4_indicators_pane_g3_ParamLimits

0x96cd,	// (0x000468d7) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0004cb41) vid4_indicators_pane_g_ParamLimits

0x96e5,	// (0x000468ef) vid4_indicators_pane_t1_ParamLimits

0xf05d,	// (0x0004c267) vid4_progress_pane_g1_ParamLimits

0xf06d,	// (0x0004c277) vid4_progress_pane_g2_ParamLimits

0xc37c,	// (0x00049586) vid4_progress_pane_g3_ParamLimits

0xf07d,	// (0x0004c287) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0004ccec) vid4_progress_pane_g_ParamLimits

0xf09b,	// (0x0004c2a5) vid4_progress_pane_t1_ParamLimits

0xf0b0,	// (0x0004c2ba) vid4_progress_pane_t2_ParamLimits

0xf0c6,	// (0x0004c2d0) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0004ccf7) vid4_progress_pane_t_ParamLimits

0xf0db,	// (0x0004c2e5) wait_bar_pane_cp07_ParamLimits

0xaa41,	// (0x00047c4b) main_cam6_set_pane_g2_ParamLimits

0xaa41,	// (0x00047c4b) main_cam6_set_pane_g2

0xaa65,	// (0x00047c6f) main_cset6_listscroll_pane_ParamLimits

0xaa65,	// (0x00047c6f) main_cset6_listscroll_pane

0xaa85,	// (0x00047c8f) main_cset6_slider_pane_ParamLimits

0xaa85,	// (0x00047c8f) main_cset6_slider_pane

0xaa9b,	// (0x00047ca5) main_cset6_text2_pane_ParamLimits

0xaa9b,	// (0x00047ca5) main_cset6_text2_pane

0xd82a,	// (0x0004aa34) main_cset6_text_pane

0xd832,	// (0x0004aa3c) main_cset_list_pane_copy1_ParamLimits

0xd832,	// (0x0004aa3c) main_cset_list_pane_copy1

0xd842,	// (0x0004aa4c) scroll_pane_cp028_copy1

0xaaa9,	// (0x00047cb3) cset_list_set_pane_copy1

0xaaba,	// (0x00047cc4) aid_position_infowindow_above_copy1

0xaac2,	// (0x00047ccc) aid_position_infowindow_below_copy1

0x2b56,	// (0x0003fd60) cset_list_set_pane_g1_copy1

0x2b5e,	// (0x0003fd68) cset_list_set_pane_g3_copy1_ParamLimits

0x2b5e,	// (0x0003fd68) cset_list_set_pane_g3_copy1

0x2b6d,	// (0x0003fd77) cset_list_set_pane_t1_copy1_ParamLimits

0x2b6d,	// (0x0003fd77) cset_list_set_pane_t1_copy1

0x18e6,	// (0x0003eaf0) list_highlight_pane_cp021_copy1_ParamLimits

0x18e6,	// (0x0003eaf0) list_highlight_pane_cp021_copy1

0xd84b,	// (0x0004aa55) cset6_slider_pane_ParamLimits

0xd84b,	// (0x0004aa55) cset6_slider_pane

0xd877,	// (0x0004aa81) main_cset6_slider_pane_g1_ParamLimits

0xd877,	// (0x0004aa81) main_cset6_slider_pane_g1

0xaaca,	// (0x00047cd4) main_cset6_slider_pane_g2_ParamLimits

0xaaca,	// (0x00047cd4) main_cset6_slider_pane_g2

0xd89f,	// (0x0004aaa9) main_cset6_slider_pane_g3_ParamLimits

0xd89f,	// (0x0004aaa9) main_cset6_slider_pane_g3

0xaaf2,	// (0x00047cfc) main_cset6_slider_pane_g4_ParamLimits

0xaaf2,	// (0x00047cfc) main_cset6_slider_pane_g4

0xaafe,	// (0x00047d08) main_cset6_slider_pane_g5_ParamLimits

0xaafe,	// (0x00047d08) main_cset6_slider_pane_g5

0xcfed,	// (0x0004a1f7) main_cset6_slider_pane_g7_ParamLimits

0xcfed,	// (0x0004a1f7) main_cset6_slider_pane_g7

0xcff9,	// (0x0004a203) main_cset6_slider_pane_g8_ParamLimits

0xcff9,	// (0x0004a203) main_cset6_slider_pane_g8

0x9d66,	// (0x00046f70) main_cset6_slider_pane_g9_ParamLimits

0x9d66,	// (0x00046f70) main_cset6_slider_pane_g9

0x9d72,	// (0x00046f7c) main_cset6_slider_pane_g10_ParamLimits

0x9d72,	// (0x00046f7c) main_cset6_slider_pane_g10

0x9d7e,	// (0x00046f88) main_cset6_slider_pane_g11_ParamLimits

0x9d7e,	// (0x00046f88) main_cset6_slider_pane_g11

0x9d8a,	// (0x00046f94) main_cset6_slider_pane_g12_ParamLimits

0x9d8a,	// (0x00046f94) main_cset6_slider_pane_g12

0x9d96,	// (0x00046fa0) main_cset6_slider_pane_g13_ParamLimits

0x9d96,	// (0x00046fa0) main_cset6_slider_pane_g13

0x9da2,	// (0x00046fac) main_cset6_slider_pane_g14_ParamLimits

0x9da2,	// (0x00046fac) main_cset6_slider_pane_g14

0xab0a,	// (0x00047d14) main_cset6_slider_pane_g15_ParamLimits

0xab0a,	// (0x00047d14) main_cset6_slider_pane_g15

0x9dc6,	// (0x00046fd0) main_cset6_slider_pane_g16_ParamLimits

0x9dc6,	// (0x00046fd0) main_cset6_slider_pane_g16

0x9dd2,	// (0x00046fdc) main_cset6_slider_pane_g17_ParamLimits

0x9dd2,	// (0x00046fdc) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0004cdc4) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0004cdc4) main_cset6_slider_pane_g

0xd8ab,	// (0x0004aab5) main_cset6_slider_pane_t1_ParamLimits

0xd8ab,	// (0x0004aab5) main_cset6_slider_pane_t1

0xab3a,	// (0x00047d44) main_cset6_slider_pane_t2_ParamLimits

0xab3a,	// (0x00047d44) main_cset6_slider_pane_t2

0xab65,	// (0x00047d6f) main_cset6_slider_pane_t3_ParamLimits

0xab65,	// (0x00047d6f) main_cset6_slider_pane_t3

0xab90,	// (0x00047d9a) main_cset6_slider_pane_t4_ParamLimits

0xab90,	// (0x00047d9a) main_cset6_slider_pane_t4

0xabbb,	// (0x00047dc5) main_cset6_slider_pane_t5_ParamLimits

0xabbb,	// (0x00047dc5) main_cset6_slider_pane_t5

0xd8ec,	// (0x0004aaf6) main_cset6_slider_pane_t7_ParamLimits

0xd8ec,	// (0x0004aaf6) main_cset6_slider_pane_t7

0xabe6,	// (0x00047df0) main_cset6_slider_pane_t8_ParamLimits

0xabe6,	// (0x00047df0) main_cset6_slider_pane_t8

0xac0a,	// (0x00047e14) main_cset6_slider_pane_t9_ParamLimits

0xac0a,	// (0x00047e14) main_cset6_slider_pane_t9

0xac2e,	// (0x00047e38) main_cset6_slider_pane_t10_ParamLimits

0xac2e,	// (0x00047e38) main_cset6_slider_pane_t10

0xac52,	// (0x00047e5c) main_cset6_slider_pane_t11_ParamLimits

0xac52,	// (0x00047e5c) main_cset6_slider_pane_t11

0xd922,	// (0x0004ab2c) main_cset6_slider_pane_t14_ParamLimits

0xd922,	// (0x0004ab2c) main_cset6_slider_pane_t14

0xd95b,	// (0x0004ab65) main_cset6_slider_pane_t15_ParamLimits

0xd95b,	// (0x0004ab65) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0004cde9) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0004cde9) main_cset6_slider_pane_t

0xd0cc,	// (0x0004a2d6) cset_slider_pane_g1_copy1

0xd0d5,	// (0x0004a2df) cset_slider_pane_g2_copy1

0xd0de,	// (0x0004a2e8) cset_slider_pane_g3_copy1

0x0289,	// (0x0003d493) bg_popup_sub_pane_cp011_copy1

0xd17f,	// (0x0004a389) main_cset_text_pane_g1_copy1

0xd187,	// (0x0004a391) main_cset_text_pane_t1_copy1

0xd195,	// (0x0004a39f) main_cset_text_pane_t2_copy1

0xd1a3,	// (0x0004a3ad) main_cset_text_pane_t3_copy1

0xd1b1,	// (0x0004a3bb) main_cset_text_pane_t4_copy1

0xd1bf,	// (0x0004a3c9) main_cset_text_pane_t5_copy1

0xd1cd,	// (0x0004a3d7) main_cset_text_pane_t6_copy1

0xd1db,	// (0x0004a3e5) main_cset_text_pane_t7_copy1

0xac76,	// (0x00047e80) main_cset_text2_pane_t1_copy1

0x0289,	// (0x0003d493) main_ncimui_pane

0x7041,	// (0x0004424b) popup_query_ncimui_window_ParamLimits

0x7041,	// (0x0004424b) popup_query_ncimui_window

0xc71c,	// (0x00049926) field_cale_ev2_pane_g4_ParamLimits

0xc71c,	// (0x00049926) field_cale_ev2_pane_g4

0x8fc4,	// (0x000461ce) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8fc4,	// (0x000461ce) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0004cacd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0004cacd) cell_video_dialer_keypad_pane_g

0x8fdc,	// (0x000461e6) cell_video_dialer_keypad_pane_t1

0x0289,	// (0x0003d493) bg_popup_window_pane_cp012

0x12b1,	// (0x0003e4bb) heading_pane_cp06

0xda83,	// (0x0004ac8d) ncim_query_content_pane

0x0289,	// (0x0003d493) bg_popup_heading_pane_cp01

0xda8b,	// (0x0004ac95) ncim_heading_pane_t1

0xda99,	// (0x0004aca3) ncim_indicator_popup_pane

0xdaab,	// (0x0004acb5) ncim_query_button_pane

0xdabf,	// (0x0004acc9) ncim_query_content_pane_t1

0xdad1,	// (0x0004acdb) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0004ce28) ncim_query_content_pane_t

0xdb0b,	// (0x0004ad15) ncim_query_list_pane

0xdb1d,	// (0x0004ad27) ncim_query_popup_pane

0xda99,	// (0x0004aca3) ncim_indicator_popup_pane_ParamLimits

0xad58,	// (0x00047f62) ncim_query_content_pane_g1_ParamLimits

0xad58,	// (0x00047f62) ncim_query_content_pane_g1

0xdabf,	// (0x0004acc9) ncim_query_content_pane_t1_ParamLimits

0xdad1,	// (0x0004acdb) ncim_query_content_pane_t2_ParamLimits

0xad64,	// (0x00047f6e) ncim_query_content_pane_t3_ParamLimits

0xad64,	// (0x00047f6e) ncim_query_content_pane_t3

0xad8c,	// (0x00047f96) ncim_query_content_pane_t4_ParamLimits

0xad8c,	// (0x00047f96) ncim_query_content_pane_t4

0xadb4,	// (0x00047fbe) ncim_query_content_pane_t5_ParamLimits

0xadb4,	// (0x00047fbe) ncim_query_content_pane_t5

0xdae3,	// (0x0004aced) ncim_query_content_pane_t6_ParamLimits

0xdae3,	// (0x0004aced) ncim_query_content_pane_t6

0xfc1e,	// (0x0004ce28) ncim_query_content_pane_t_ParamLimits

0xdb0b,	// (0x0004ad15) ncim_query_list_pane_ParamLimits

0xdb1d,	// (0x0004ad27) ncim_query_popup_pane_ParamLimits

0xdb31,	// (0x0004ad3b) wait_bar_pane_cp04

0x0289,	// (0x0003d493) input_focus_pane_cp011

0xdb39,	// (0x0004ad43) ncim_query_popup_pane_t1

0xdb47,	// (0x0004ad51) ncim_list_query_list_pane_ParamLimits

0xdb47,	// (0x0004ad51) ncim_list_query_list_pane

0x0289,	// (0x0003d493) bg_button_pane_cp027

0xdb54,	// (0x0004ad5e) ncim_query_button_pane_g1

0x0289,	// (0x0003d493) list_highlight_pane_cp012

0xdb5e,	// (0x0004ad68) ncim_list_query_list_pane_g1

0xdb66,	// (0x0004ad70) ncim_list_query_list_pane_t1

0xefbe,	// (0x0004c1c8) cam4_indicators_pane_g3_ParamLimits

0xefbe,	// (0x0004c1c8) cam4_indicators_pane_g3

0x96d9,	// (0x000468e3) vid4_indicators_pane_g5_ParamLimits

0x96d9,	// (0x000468e3) vid4_indicators_pane_g5

0xf08c,	// (0x0004c296) vid4_progress_pane_g5_ParamLimits

0xf08c,	// (0x0004c296) vid4_progress_pane_g5

0xaca0,	// (0x00047eaa) main_ncimui_pane_g1

0xace6,	// (0x00047ef0) ncimui_group_query_pane_ParamLimits

0xace6,	// (0x00047ef0) ncimui_group_query_pane

0xad1a,	// (0x00047f24) ncimui_list_pane_ParamLimits

0xad1a,	// (0x00047f24) ncimui_list_pane

0xad34,	// (0x00047f3e) ncimui_text_pane_ParamLimits

0xad34,	// (0x00047f3e) ncimui_text_pane

0xaddc,	// (0x00047fe6) ncimui_text_pane_t1_ParamLimits

0xaddc,	// (0x00047fe6) ncimui_text_pane_t1

0xdb74,	// (0x0004ad7e) ncimui_list_single_graphic_pane_ParamLimits

0xdb74,	// (0x0004ad7e) ncimui_list_single_graphic_pane

0xae02,	// (0x0004800c) ncimui_query_pane_ParamLimits

0xae02,	// (0x0004800c) ncimui_query_pane

0x0289,	// (0x0003d493) list_highlight_pane_cp013

0xdb84,	// (0x0004ad8e) ncim_list_query_list_pane_t1_copy1

0xdb5e,	// (0x0004ad68) ncim_list_single_graphic_pane_g1

0xdb92,	// (0x0004ad9c) ncim_query_button_pane_cp01

0xdb9a,	// (0x0004ada4) ncim_query_entry_pane_ParamLimits

0xdb9a,	// (0x0004ada4) ncim_query_entry_pane

0xdbaa,	// (0x0004adb4) ncimui_query_pane_g1

0xdbb2,	// (0x0004adbc) ncimui_query_pane_t1_ParamLimits

0xdbb2,	// (0x0004adbc) ncimui_query_pane_t1

0x0289,	// (0x0003d493) input_focus_pane_cp012

0xdb39,	// (0x0004ad43) ncim_query_entry_pane_t1

0x0a36,	// (0x0003dc40) main_im_pane_ParamLimits

0x18e6,	// (0x0003eaf0) main_mobtv_pane_ParamLimits

0x18e6,	// (0x0003eaf0) main_mobtv_pane

0xab22,	// (0x00047d2c) main_cset6_slider_pane_g18_ParamLimits

0xab22,	// (0x00047d2c) main_cset6_slider_pane_g18

0xab2e,	// (0x00047d38) main_cset6_slider_pane_g19_ParamLimits

0xab2e,	// (0x00047d38) main_cset6_slider_pane_g19

0xdbc8,	// (0x0004add2) bg_main_mobtv_pane_ParamLimits

0xdbc8,	// (0x0004add2) bg_main_mobtv_pane

0xae12,	// (0x0004801c) main_mobtv_info_pane

0xae1b,	// (0x00048025) main_mobtv_loading_pane_ParamLimits

0xae1b,	// (0x00048025) main_mobtv_loading_pane

0xdbd6,	// (0x0004ade0) main_mobtv_pg_channel_list_pane

0xdbe0,	// (0x0004adea) main_mobtv_pg_hdr_pane

0xae28,	// (0x00048032) main_mobtv_programe_curr_pane_ParamLimits

0xae28,	// (0x00048032) main_mobtv_programe_curr_pane

0xae35,	// (0x0004803f) main_mobtv_programe_next_pane_ParamLimits

0xae35,	// (0x0004803f) main_mobtv_programe_next_pane

0xdbe9,	// (0x0004adf3) popup_mobtv_noti_window

0x7f3b,	// (0x00045145) main_tv_pg_hdr_pane_g1

0xdbf1,	// (0x0004adfb) main_tv_pg_hdr_pane_g2

0xdbf9,	// (0x0004ae03) main_tv_pg_hdr_pane_g3

0xdc01,	// (0x0004ae0b) main_tv_pg_hdr_pane_g4

0xdc09,	// (0x0004ae13) main_tv_pg_hdr_pane_g5

0xdc13,	// (0x0004ae1d) main_tv_pg_hdr_pane_g6

0xdc1d,	// (0x0004ae27) main_tv_pg_hdr_pane_g7

0xdc27,	// (0x0004ae31) main_tv_pg_hdr_pane_g8

0xdc31,	// (0x0004ae3b) main_tv_pg_hdr_pane_g9

0xdc3b,	// (0x0004ae45) main_tv_pg_hdr_pane_g10

0xdc45,	// (0x0004ae4f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0004ce35) main_tv_pg_hdr_pane_g

0xdc4f,	// (0x0004ae59) main_tv_pg_hdr_pane_t1

0xdc5d,	// (0x0004ae67) main_tv_pg_hdr_pane_t2

0xdc6b,	// (0x0004ae75) main_tv_pg_hdr_pane_t3

0xdc7b,	// (0x0004ae85) main_tv_pg_hdr_pane_t4

0xdc8b,	// (0x0004ae95) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0004ce4c) main_tv_pg_hdr_pane_t

0xdc9b,	// (0x0004aea5) single_mobtv_pg_channel_pane_ParamLimits

0xdc9b,	// (0x0004aea5) single_mobtv_pg_channel_pane

0xdcad,	// (0x0004aeb7) single_mobtv_pg_channel_table_pane

0xdcb6,	// (0x0004aec0) single_mobtv_pg_channel_thumb_pane

0xdcbf,	// (0x0004aec9) single_tv_pg_channel_pane_g1

0xdcc8,	// (0x0004aed2) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0004ce57) single_tv_pg_channel_pane_g

0xc67b,	// (0x00049885) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc67b,	// (0x00049885) bg_single_mobtv_pg_channel_thumb_pane

0xdcd1,	// (0x0004aedb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdcd1,	// (0x0004aedb) single_mobtv_pg_channel_thumb_pane_g1

0xdcdf,	// (0x0004aee9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdcdf,	// (0x0004aee9) single_mobtv_pg_channel_thumb_pane_g2

0xdceb,	// (0x0004aef5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdceb,	// (0x0004aef5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0004ce5c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0004ce5c) single_mobtv_pg_channel_thumb_pane_g

0xdcf7,	// (0x0004af01) single_mobtv_pg_channel_thumb_pane_t1

0xdd05,	// (0x0004af0f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0004ce63) single_mobtv_pg_channel_thumb_pane_t

0x7f3b,	// (0x00045145) bg_single_mobtv_pg_channel_table_pane_g1

0x7f3b,	// (0x00045145) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0004c919) bg_single_mobtv_pg_channel_table_pane_g

0xdd13,	// (0x0004af1d) single_mobtv_pg_channel_table_pane_t1

0xdd21,	// (0x0004af2b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0004ce68) single_mobtv_pg_channel_table_pane_t

0xae4a,	// (0x00048054) main_mobtv_info_pane_g1_ParamLimits

0xae4a,	// (0x00048054) main_mobtv_info_pane_g1

0xae68,	// (0x00048072) main_mobtv_info_pane_t1_ParamLimits

0xae68,	// (0x00048072) main_mobtv_info_pane_t1

0xaee0,	// (0x000480ea) main_mobtv_info_pane_t2_ParamLimits

0xaee0,	// (0x000480ea) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0004ce72) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0004ce72) main_mobtv_info_pane_t

0xaf6f,	// (0x00048179) wait_bar_pane_cp05

0xaf81,	// (0x0004818b) main_mobtv_loading_pane_g1_ParamLimits

0xaf81,	// (0x0004818b) main_mobtv_loading_pane_g1

0xaf94,	// (0x0004819e) main_mobtv_loading_pane_g2_ParamLimits

0xaf94,	// (0x0004819e) main_mobtv_loading_pane_g2

0xafa0,	// (0x000481aa) main_mobtv_loading_pane_g3_ParamLimits

0xafa0,	// (0x000481aa) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0004ce79) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0004ce79) main_mobtv_loading_pane_g

0xdd2f,	// (0x0004af39) main_mobtv_loading_pane_t1_ParamLimits

0xdd2f,	// (0x0004af39) main_mobtv_loading_pane_t1

0xdd47,	// (0x0004af51) main_mobtv_loading_pane_t2_ParamLimits

0xdd47,	// (0x0004af51) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0004ce80) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0004ce80) main_mobtv_loading_pane_t

0xafb3,	// (0x000481bd) wait_bar_pane_cp06_ParamLimits

0xafb3,	// (0x000481bd) wait_bar_pane_cp06

0xdd6b,	// (0x0004af75) main_mobtv_programe_curr_pane_t1

0xdd79,	// (0x0004af83) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0004ce85) main_mobtv_programe_curr_pane_t

0xdd87,	// (0x0004af91) main_mobtv_programe_next_pane_t1

0xdd95,	// (0x0004af9f) main_mobtv_programe_next_pane_t2

0xdda3,	// (0x0004afad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0004ce8a) main_mobtv_programe_next_pane_t

0x0289,	// (0x0003d493) bg_popup_mobtv_noti_window_pane

0xddb1,	// (0x0004afbb) popup_mobtv_noti_window_g1

0xddb9,	// (0x0004afc3) popup_mobtv_noti_window_t1

0xddc7,	// (0x0004afd1) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0004ce91) popup_mobtv_noti_window_t

0x7f3b,	// (0x00045145) bg_popup_mobtv_noti_window_pane_g1

0x0289,	// (0x0003d493) sc_clock_pane

0x0289,	// (0x0003d493) main_fs_bigclock_pane

0xa775,	// (0x0004797f) blid2_tripm_pane_t4_ParamLimits

0xa775,	// (0x0004797f) blid2_tripm_pane_t4

0xafc2,	// (0x000481cc) sc_clock_pane_g1_ParamLimits

0xafc2,	// (0x000481cc) sc_clock_pane_g1

0xafd4,	// (0x000481de) sc_clock_pane_t1_ParamLimits

0xafd4,	// (0x000481de) sc_clock_pane_t1

0xaff6,	// (0x00048200) sc_clock_pane_t2_ParamLimits

0xaff6,	// (0x00048200) sc_clock_pane_t2

0xb00e,	// (0x00048218) sc_clock_pane_t3_ParamLimits

0xb00e,	// (0x00048218) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0004ce96) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0004ce96) sc_clock_pane_t

0xb892,	// (0x00048a9c) main_fs_bigclock_indicator_pane_ParamLimits

0xb892,	// (0x00048a9c) main_fs_bigclock_indicator_pane

0xc64b,	// (0x00049855) main_fs_bigclock_pane_g1_ParamLimits

0xc64b,	// (0x00049855) main_fs_bigclock_pane_g1

0xb89e,	// (0x00048aa8) main_fs_bigclock_pane_t1_ParamLimits

0xb89e,	// (0x00048aa8) main_fs_bigclock_pane_t1

0xb8b0,	// (0x00048aba) main_fs_bigclock_pane_t2_ParamLimits

0xb8b0,	// (0x00048aba) main_fs_bigclock_pane_t2

0xb8c4,	// (0x00048ace) main_fs_bigclock_pane_t3_ParamLimits

0xb8c4,	// (0x00048ace) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0004d095) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0004d095) main_fs_bigclock_pane_t

0xe9d2,	// (0x0004bbdc) main_fs_bigclock_indicator_pane_g1

0xdab3,	// (0x0004acbd) ncim_query_content_pane_g2_ParamLimits

0xdab3,	// (0x0004acbd) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0004ce23) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0004ce23) ncim_query_content_pane_g

0xb025,	// (0x0004822f) sc_clock_pane_t4_ParamLimits

0xb025,	// (0x0004822f) sc_clock_pane_t4

0x18e6,	// (0x0003eaf0) main_radioblah_pane

0xcde4,	// (0x00049fee) cell_call4_button_pane_t1_copy1_ParamLimits

0xcde4,	// (0x00049fee) cell_call4_button_pane_t1_copy1

0xaca8,	// (0x00047eb2) main_ncimui_pane_t1_ParamLimits

0xaca8,	// (0x00047eb2) main_ncimui_pane_t1

0xacba,	// (0x00047ec4) main_ncimui_pane_t2_ParamLimits

0xacba,	// (0x00047ec4) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0004ce1c) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0004ce1c) main_ncimui_pane_t

0xdef5,	// (0x0004b0ff) main_radioblah_anim_pane_ParamLimits

0xdef5,	// (0x0004b0ff) main_radioblah_anim_pane

0xdf06,	// (0x0004b110) main_radioblah_info_pane_ParamLimits

0xdf06,	// (0x0004b110) main_radioblah_info_pane

0xdf1a,	// (0x0004b124) main_radioblah_pane_t1_ParamLimits

0xdf1a,	// (0x0004b124) main_radioblah_pane_t1

0xdf36,	// (0x0004b140) main_radioblah_pane_t2_ParamLimits

0xdf36,	// (0x0004b140) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0004ceb7) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0004ceb7) main_radioblah_pane_t

0xb0ce,	// (0x000482d8) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb0ce,	// (0x000482d8) main_radioblah_rocker_ctrl_pane

0xdf7e,	// (0x0004b188) main_radioblah_info_pane_t1_ParamLimits

0xdf7e,	// (0x0004b188) main_radioblah_info_pane_t1

0xb126,	// (0x00048330) main_radioblah_info_pane_t2_ParamLimits

0xb126,	// (0x00048330) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0004cec0) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0004cec0) main_radioblah_info_pane_t

0x7f3b,	// (0x00045145) main_radioblah_rocker_ctrl_pane_g1

0xb1d6,	// (0x000483e0) main_radioblah_rocker_ctrl_pane_g2

0xb1de,	// (0x000483e8) main_radioblah_rocker_ctrl_pane_g3

0xb1e6,	// (0x000483f0) main_radioblah_rocker_ctrl_pane_g4

0xb1ee,	// (0x000483f8) main_radioblah_rocker_ctrl_pane_g5

0xb1f6,	// (0x00048400) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0004cec9) main_radioblah_rocker_ctrl_pane_g

0xac76,	// (0x00047e80) main_cset_text2_pane_t1_copy1_ParamLimits

0xef8e,	// (0x0004c198) cam4_image_uncrop_qvga_pane

0xefe7,	// (0x0004c1f1) vid4_image_uncrop_qcif_pane

0xf0ed,	// (0x0004c2f7) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0ed,	// (0x0004c2f7) cam6_image_uncrop_qvga_pane

0xd70d,	// (0x0004a917) vid6_image_uncrop_qcif_pane_ParamLimits

0xd70d,	// (0x0004a917) vid6_image_uncrop_qcif_pane

0x0289,	// (0x0003d493) bg_popup_preview_window_pane_cp03

0xda65,	// (0x0004ac6f) list_cset_text2_pane

0xda6d,	// (0x0004ac77) main_cset6_text2_pane_g1

0xda75,	// (0x0004ac7f) main_cset6_text2_pane_t1

0xb1fe,	// (0x00048408) list_cset_text2_pane_t1_ParamLimits

0xb1fe,	// (0x00048408) list_cset_text2_pane_t1

0x18e6,	// (0x0003eaf0) main_radioblah_pane_ParamLimits

0xaf5b,	// (0x00048165) main_mobtv_info_pane_t3_ParamLimits

0xaf5b,	// (0x00048165) main_mobtv_info_pane_t3

0xb0bc,	// (0x000482c6) main_radioblah_pane_g1

0xb0f6,	// (0x00048300) main_radioblah_info_pane_g1

0xb17b,	// (0x00048385) main_radioblah_info_pane_t3_ParamLimits

0xb17b,	// (0x00048385) main_radioblah_info_pane_t3

0x4b01,	// (0x00041d0b) highlight_cell_cale_month_pane_ParamLimits

0x4b01,	// (0x00041d0b) highlight_cell_cale_month_pane

0x0289,	// (0x0003d493) main_phob_fisheye_pane

0xc7a5,	// (0x000499af) scroll_pane_cp0031_ParamLimits

0xc7a5,	// (0x000499af) scroll_pane_cp0031

0xd81b,	// (0x0004aa25) wait_bar_pane_cp08_ParamLimits

0xaaa9,	// (0x00047cb3) cset_list_set_pane_copy1_ParamLimits

0xdfb8,	// (0x0004b1c2) highlight_cell_cale_month_pane_g1

0xb217,	// (0x00048421) highlight_cell_cale_month_pane_t1

0xd443,	// (0x0004a64d) list_gen_pane_cp01

0xcfd8,	// (0x0004a1e2) scroll_pane_01

0xdfc0,	// (0x0004b1ca) list_single_double_fisheye_pane

0x2b82,	// (0x0003fd8c) list_double_fisheye_pane_g1_ParamLimits

0x2b82,	// (0x0003fd8c) list_double_fisheye_pane_g1

0x2b8e,	// (0x0003fd98) list_double_fisheye_pane_g2_ParamLimits

0x2b8e,	// (0x0003fd98) list_double_fisheye_pane_g2

0xb225,	// (0x0004842f) list_double_fisheye_pane_g3_ParamLimits

0xb225,	// (0x0004842f) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0004ced6) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0004ced6) list_double_fisheye_pane_g

0x2bbf,	// (0x0003fdc9) list_double_fisheye_pane_t1_ParamLimits

0x2bbf,	// (0x0003fdc9) list_double_fisheye_pane_t1

0x2bda,	// (0x0003fde4) list_double_fisheye_pane_t2_ParamLimits

0x2bda,	// (0x0003fde4) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0004cee1) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0004cee1) list_double_fisheye_pane_t

0x0289,	// (0x0003d493) main_call5_pane

0xb050,	// (0x0004825a) sc_swipe_pane_ParamLimits

0xb050,	// (0x0004825a) sc_swipe_pane

0xb244,	// (0x0004844e) call5_image_pane_ParamLimits

0xb244,	// (0x0004844e) call5_image_pane

0xb261,	// (0x0004846b) call5_swipe_1_pane_ParamLimits

0xb261,	// (0x0004846b) call5_swipe_1_pane

0xb274,	// (0x0004847e) call5_swipe_2_pane_ParamLimits

0xb274,	// (0x0004847e) call5_swipe_2_pane

0xb29f,	// (0x000484a9) popup_call5_audio_first_window_ParamLimits

0xb29f,	// (0x000484a9) popup_call5_audio_first_window

0xc67b,	// (0x00049885) call5_swipe_1_pane_g1_ParamLimits

0xc67b,	// (0x00049885) call5_swipe_1_pane_g1

0xdfc9,	// (0x0004b1d3) call5_swipe_1_pane_g2_ParamLimits

0xdfc9,	// (0x0004b1d3) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0004cee6) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0004cee6) call5_swipe_1_pane_g

0xdfd5,	// (0x0004b1df) call5_swipe_1_pane_t1_ParamLimits

0xdfd5,	// (0x0004b1df) call5_swipe_1_pane_t1

0xc67b,	// (0x00049885) call5_swipe_2_pane_g1_ParamLimits

0xc67b,	// (0x00049885) call5_swipe_2_pane_g1

0xdfea,	// (0x0004b1f4) call5_swipe_2_pane_g2_ParamLimits

0xdfea,	// (0x0004b1f4) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0004ceeb) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0004ceeb) call5_swipe_2_pane_g

0xdff6,	// (0x0004b200) call5_swipe_2_pane_t1_ParamLimits

0xdff6,	// (0x0004b200) call5_swipe_2_pane_t1

0xe00b,	// (0x0004b215) sc_swipe_pane_g1_ParamLimits

0xe00b,	// (0x0004b215) sc_swipe_pane_g1

0xe018,	// (0x0004b222) sc_swipe_pane_g2_ParamLimits

0xe018,	// (0x0004b222) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0004cef0) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0004cef0) sc_swipe_pane_g

0xe024,	// (0x0004b22e) sc_swipe_pane_t1_ParamLimits

0xe024,	// (0x0004b22e) sc_swipe_pane_t1

0x0289,	// (0x0003d493) main_cmail_launcher_pane

0xb2b0,	// (0x000484ba) aid_size_cell_cmail_l_ParamLimits

0xb2b0,	// (0x000484ba) aid_size_cell_cmail_l

0xb2ca,	// (0x000484d4) grid_cmail_l_pane_ParamLimits

0xb2ca,	// (0x000484d4) grid_cmail_l_pane

0xb2e5,	// (0x000484ef) cell_cmail_l_pane_ParamLimits

0xb2e5,	// (0x000484ef) cell_cmail_l_pane

0xb30b,	// (0x00048515) cell_cmail_l_pane_g1_ParamLimits

0xb30b,	// (0x00048515) cell_cmail_l_pane_g1

0xb317,	// (0x00048521) cell_cmail_l_pane_t1_ParamLimits

0xb317,	// (0x00048521) cell_cmail_l_pane_t1

0xe039,	// (0x0004b243) cell_cmail_l_pane_t2_ParamLimits

0xe039,	// (0x0004b243) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0004cef5) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0004cef5) cell_cmail_l_pane_t

0x18e6,	// (0x0003eaf0) grid_highlight_pane_cp018_ParamLimits

0x18e6,	// (0x0003eaf0) grid_highlight_pane_cp018

0x326a,	// (0x00040474) main2_pane_ParamLimits

0x326a,	// (0x00040474) main2_pane

0x0acf,	// (0x0003dcd9) popup_sp_fs_action_menu_bg_pane_g1

0x0ad7,	// (0x0003dce1) popup_sp_fs_action_menu_bg_pane_g2

0x0adf,	// (0x0003dce9) popup_sp_fs_action_menu_bg_pane_g3

0x0ae7,	// (0x0003dcf1) popup_sp_fs_action_menu_bg_pane_g4

0x0aef,	// (0x0003dcf9) popup_sp_fs_action_menu_bg_pane_g5

0x0af7,	// (0x0003dd01) popup_sp_fs_action_menu_bg_pane_g6

0x0aff,	// (0x0003dd09) popup_sp_fs_action_menu_bg_pane_g7

0x0b07,	// (0x0003dd11) popup_sp_fs_action_menu_bg_pane_g8

0x0b0f,	// (0x0003dd19) popup_sp_fs_action_menu_bg_pane_g9

0x0b17,	// (0x0003dd21) popup_sp_fs_action_menu_bg_pane_g10

0x0b17,	// (0x0003dd21) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0004c3c5) popup_sp_fs_action_menu_bg_pane_g

0xc160,	// (0x0004936a) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t3_g3_g1

0xc16c,	// (0x00049376) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x2_t3_g3_g2

0xc178,	// (0x00049382) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc178,	// (0x00049382) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0004c475) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0004c475) list_medium_line_x2_t3_g3_g

0xc184,	// (0x0004938e) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc184,	// (0x0004938e) list_medium_line_x2_t3_g3_t1

0x277a,	// (0x0003f984) list_medium_line_x2_t3_g3_t2_ParamLimits

0x277a,	// (0x0003f984) list_medium_line_x2_t3_g3_t2

0xc199,	// (0x000493a3) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0004c47c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0004c47c) list_medium_line_x2_t3_g3_t

0xc160,	// (0x0004936a) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t3_g2_g1

0xc178,	// (0x00049382) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc178,	// (0x00049382) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0004c483) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0004c483) list_medium_line_x2_t3_g2_g

0xc1ae,	// (0x000493b8) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc1ae,	// (0x000493b8) list_medium_line_x2_t3_g2_t1

0xc1c4,	// (0x000493ce) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc1c4,	// (0x000493ce) list_medium_line_x2_t3_g2_t2

0xc199,	// (0x000493a3) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0004c488) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0004c488) list_medium_line_x2_t3_g2_t

0xc160,	// (0x0004936a) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t4_g4_g1

0xc1d6,	// (0x000493e0) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc1d6,	// (0x000493e0) list_medium_line_x2_t4_g4_g2

0xc16c,	// (0x00049376) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x2_t4_g4_g3

0xc1e2,	// (0x000493ec) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc1e2,	// (0x000493ec) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0004c48f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0004c48f) list_medium_line_x2_t4_g4_g

0x278e,	// (0x0003f998) list_medium_line_x2_t4_g4_t1_ParamLimits

0x278e,	// (0x0003f998) list_medium_line_x2_t4_g4_t1

0x27a8,	// (0x0003f9b2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x27a8,	// (0x0003f9b2) list_medium_line_x2_t4_g4_t2

0x27be,	// (0x0003f9c8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x27be,	// (0x0003f9c8) list_medium_line_x2_t4_g4_t3

0xc1ee,	// (0x000493f8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc1ee,	// (0x000493f8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0004c498) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0004c498) list_medium_line_x2_t4_g4_t

0xc160,	// (0x0004936a) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t2_g4_g1

0xc1d6,	// (0x000493e0) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc1d6,	// (0x000493e0) list_medium_line_x2_t2_g4_g2

0xc16c,	// (0x00049376) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x2_t2_g4_g3

0xc178,	// (0x00049382) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc178,	// (0x00049382) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0004c4ff) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0004c4ff) list_medium_line_x2_t2_g4_g

0xc200,	// (0x0004940a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc200,	// (0x0004940a) list_medium_line_x2_t2_g4_t1

0xc199,	// (0x000493a3) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0004c508) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0004c508) list_medium_line_x2_t2_g4_t

0xc160,	// (0x0004936a) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t2_g3_g1

0xc16c,	// (0x00049376) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x2_t2_g3_g2

0xc178,	// (0x00049382) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc178,	// (0x00049382) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0004c475) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0004c475) list_medium_line_x2_t2_g3_g

0xc215,	// (0x0004941f) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc215,	// (0x0004941f) list_medium_line_x2_t2_g3_t1

0xc199,	// (0x000493a3) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0004c50d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0004c50d) list_medium_line_x2_t2_g3_t

0x4c30,	// (0x00041e3a) main_sp_fs_list_pane_ParamLimits

0x4c30,	// (0x00041e3a) main_sp_fs_list_pane

0x4c3c,	// (0x00041e46) sp_fs_scroll_pane_ParamLimits

0x4c3c,	// (0x00041e46) sp_fs_scroll_pane

0x27d3,	// (0x0003f9dd) list_medium_line_x2_t3_t1

0x27e3,	// (0x0003f9ed) list_medium_line_x2_t3_t2

0xc258,	// (0x00049462) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0004c558) list_medium_line_x2_t3_t

0x27f1,	// (0x0003f9fb) list_medium_line_x3_t4_t1

0x2801,	// (0x0003fa0b) list_medium_line_x3_t4_t2

0xc266,	// (0x00049470) list_medium_line_x3_t4_t3

0xc258,	// (0x00049462) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0004c55f) list_medium_line_x3_t4_t

0x280f,	// (0x0003fa19) list_medium_line_x4_t5_t1

0x281f,	// (0x0003fa29) list_medium_line_x4_t5_t2

0xc266,	// (0x00049470) list_medium_line_x4_t5_t3

0xc274,	// (0x0004947e) list_medium_line_x4_t5_t4

0xc258,	// (0x00049462) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0004c568) list_medium_line_x4_t5_t

0xc160,	// (0x0004936a) list_medium_line_t4_g4_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_t4_g4_g1

0xc1e2,	// (0x000493ec) list_medium_line_t4_g4_g2_ParamLimits

0xc1e2,	// (0x000493ec) list_medium_line_t4_g4_g2

0xc282,	// (0x0004948c) list_medium_line_t4_g4_g3_ParamLimits

0xc282,	// (0x0004948c) list_medium_line_t4_g4_g3

0xc178,	// (0x00049382) list_medium_line_t4_g4_g4_ParamLimits

0xc178,	// (0x00049382) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0004c573) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0004c573) list_medium_line_t4_g4_g

0xc28e,	// (0x00049498) list_medium_line_t4_g4_t1_ParamLimits

0xc28e,	// (0x00049498) list_medium_line_t4_g4_t1

0xc2a3,	// (0x000494ad) list_medium_line_t4_g4_t2_ParamLimits

0xc2a3,	// (0x000494ad) list_medium_line_t4_g4_t2

0xc2b8,	// (0x000494c2) list_medium_line_t4_g4_t3_ParamLimits

0xc2b8,	// (0x000494c2) list_medium_line_t4_g4_t3

0xc199,	// (0x000493a3) list_medium_line_t4_g4_t4_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0004c57c) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0004c57c) list_medium_line_t4_g4_t

0x4d0b,	// (0x00041f15) chi_dic_find_pane_g1

0x6dd4,	// (0x00043fde) main_tport_pane

0xd110,	// (0x0004a31a) list_medium_line_plain_t1

0xd126,	// (0x0004a330) list_medium_line_t2_g2_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_t2_g2_g1

0xd132,	// (0x0004a33c) list_medium_line_t2_g2_g2_ParamLimits

0xd132,	// (0x0004a33c) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0004cc38) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0004cc38) list_medium_line_t2_g2_g

0x2a47,	// (0x0003fc51) list_medium_line_t2_g2_t1_ParamLimits

0x2a47,	// (0x0003fc51) list_medium_line_t2_g2_t1

0x2a61,	// (0x0003fc6b) list_medium_line_t2_g2_t2_ParamLimits

0x2a61,	// (0x0003fc6b) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0004cc3d) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0004cc3d) list_medium_line_t2_g2_t

0xd44c,	// (0x0004a656) aid_sp_fs_list_icon_a_sm

0xd454,	// (0x0004a65e) aid_sp_fs_list_icon_d

0xd45c,	// (0x0004a666) aid_sp_fs_text_primary

0xd465,	// (0x0004a66f) aid_sp_fs_text_secondary

0xd46e,	// (0x0004a678) list_medium_line

0xd46e,	// (0x0004a678) list_medium_line_g2

0xd46e,	// (0x0004a678) list_medium_line_g3

0xd46e,	// (0x0004a678) list_medium_line_plain

0xd46e,	// (0x0004a678) list_medium_line_plain_t2

0xd46e,	// (0x0004a678) list_medium_line_plain_t3

0xd46e,	// (0x0004a678) list_medium_line_right_icon

0xd46e,	// (0x0004a678) list_medium_line_right_iconx2

0xd46e,	// (0x0004a678) list_medium_line_t2

0xd46e,	// (0x0004a678) list_medium_line_t2_g2

0xd46e,	// (0x0004a678) list_medium_line_t2_g3

0xd46e,	// (0x0004a678) list_medium_line_t2_right_icon

0xd46e,	// (0x0004a678) list_medium_line_t2_right_iconx2

0xd46e,	// (0x0004a678) list_medium_line_t3

0xd46e,	// (0x0004a678) list_medium_line_t3_g2

0xd46e,	// (0x0004a678) list_medium_line_t3_g3

0xd46e,	// (0x0004a678) list_medium_line_t3_right_iconx2

0xd477,	// (0x0004a681) list_medium_line_t4_g4

0xd480,	// (0x0004a68a) list_medium_line_x2

0xd480,	// (0x0004a68a) list_medium_line_x2_t2_g2

0xd480,	// (0x0004a68a) list_medium_line_x2_t2_g3

0xd480,	// (0x0004a68a) list_medium_line_x2_t2_g4

0xd480,	// (0x0004a68a) list_medium_line_x2_t3

0xd480,	// (0x0004a68a) list_medium_line_x2_t3_g2

0xd480,	// (0x0004a68a) list_medium_line_x2_t3_g3

0xd480,	// (0x0004a68a) list_medium_line_x2_t3_g4

0xd480,	// (0x0004a68a) list_medium_line_x2_t4_g2

0xd480,	// (0x0004a68a) list_medium_line_x2_t4_g4

0xd489,	// (0x0004a693) list_medium_line_x3

0xd489,	// (0x0004a693) list_medium_line_x3_t4

0xd489,	// (0x0004a693) list_medium_line_x3_t4_g4

0xd477,	// (0x0004a681) list_medium_line_x4_t4

0xd477,	// (0x0004a681) list_medium_line_x4_t4_g7

0xd477,	// (0x0004a681) list_medium_line_x4_t5

0xd492,	// (0x0004a69c) list_single_fs_dyc_pane_ParamLimits

0xd492,	// (0x0004a69c) list_single_fs_dyc_pane

0xc160,	// (0x0004936a) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x4_t4_g7_g1

0xd994,	// (0x0004ab9e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd994,	// (0x0004ab9e) list_medium_line_x4_t4_g7_g2

0xd9a0,	// (0x0004abaa) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd9a0,	// (0x0004abaa) list_medium_line_x4_t4_g7_g3

0xd9af,	// (0x0004abb9) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd9af,	// (0x0004abb9) list_medium_line_x4_t4_g7_g4

0xd9bb,	// (0x0004abc5) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd9bb,	// (0x0004abc5) list_medium_line_x4_t4_g7_g5

0xd9ca,	// (0x0004abd4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd9ca,	// (0x0004abd4) list_medium_line_x4_t4_g7_g6

0xd9d9,	// (0x0004abe3) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd9d9,	// (0x0004abe3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0004ce02) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0004ce02) list_medium_line_x4_t4_g7_g

0xd9e5,	// (0x0004abef) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd9e5,	// (0x0004abef) list_medium_line_x4_t4_g7_t1

0xd9fa,	// (0x0004ac04) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd9fa,	// (0x0004ac04) list_medium_line_x4_t4_g7_t2

0xda0f,	// (0x0004ac19) list_medium_line_x4_t4_g7_t3_ParamLimits

0xda0f,	// (0x0004ac19) list_medium_line_x4_t4_g7_t3

0xda24,	// (0x0004ac2e) list_medium_line_x4_t4_g7_t4_ParamLimits

0xda24,	// (0x0004ac2e) list_medium_line_x4_t4_g7_t4

0xda36,	// (0x0004ac40) list_medium_line_x4_t4_g7_t5_ParamLimits

0xda36,	// (0x0004ac40) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0004ce11) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0004ce11) list_medium_line_x4_t4_g7_t

0xda48,	// (0x0004ac52) list_single_dyc_row_pane_ParamLimits

0xda48,	// (0x0004ac52) list_single_dyc_row_pane

0xb231,	// (0x0004843b) call5_gesture_pane_ParamLimits

0xb231,	// (0x0004843b) call5_gesture_pane

0xb287,	// (0x00048491) call5_windows_pane_ParamLimits

0xb287,	// (0x00048491) call5_windows_pane

0xb32d,	// (0x00048537) call5_swipe_1_pane_cp_ParamLimits

0xb32d,	// (0x00048537) call5_swipe_1_pane_cp

0xb339,	// (0x00048543) call5_swipe_2_pane_cp_ParamLimits

0xb339,	// (0x00048543) call5_swipe_2_pane_cp

0x151d,	// (0x0003e727) call5_image_pane_cp

0xb345,	// (0x0004854f) popup_call5_audio_first_window_cp_ParamLimits

0xb345,	// (0x0004854f) popup_call5_audio_first_window_cp

0xe00b,	// (0x0004b215) call5_swipe_1_pane_g1_cp_ParamLimits

0xe00b,	// (0x0004b215) call5_swipe_1_pane_g1_cp

0xe04b,	// (0x0004b255) call5_swipe_1_pane_g2_cp

0xe024,	// (0x0004b22e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe024,	// (0x0004b22e) call5_swipe_1_pane_t1_cp

0xe00b,	// (0x0004b215) call5_swipe_2_pane_g1_cp_ParamLimits

0xe00b,	// (0x0004b215) call5_swipe_2_pane_g1_cp

0xe053,	// (0x0004b25d) call5_swipe_2_pane_g2_cp

0xe05b,	// (0x0004b265) call5_swipe_2_pane_t1_cp_ParamLimits

0xe05b,	// (0x0004b265) call5_swipe_2_pane_t1_cp

0x18e6,	// (0x0003eaf0) main_sp_fs_email_pane

0xe070,	// (0x0004b27a) main_sp_fs_listscroll_pane_te

0xe079,	// (0x0004b283) popup_sp_fs_action_menu_pane_ParamLimits

0xe079,	// (0x0004b283) popup_sp_fs_action_menu_pane

0x7f3b,	// (0x00045145) bg_sp_fs_ctrlbar_pane_g1

0xe0bd,	// (0x0004b2c7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe0c6,	// (0x0004b2d0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe0cf,	// (0x0004b2d9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x7f3b,	// (0x00045145) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0004cefa) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x7c54,	// (0x00044e5e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x7c54,	// (0x00044e5e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe0d8,	// (0x0004b2e2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe0d8,	// (0x0004b2e2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe0e4,	// (0x0004b2ee) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe0e4,	// (0x0004b2ee) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0004cf03) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0004cf03) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe0f0,	// (0x0004b2fa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe0f0,	// (0x0004b2fa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe10a,	// (0x0004b314) list_medium_line_t2_right_icon_g1

0x2bfc,	// (0x0003fe06) list_medium_line_t2_right_icon_t1

0x2c0c,	// (0x0003fe16) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0004cf08) list_medium_line_t2_right_icon_t

0x6db2,	// (0x00043fbc) bg_sp_fs_ctrlbar_pane_ParamLimits

0x6db2,	// (0x00043fbc) bg_sp_fs_ctrlbar_pane

0xb39b,	// (0x000485a5) main_sp_fs_ctrlbar_button_pane_cp01

0xb3a3,	// (0x000485ad) main_sp_fs_ctrlbar_ddmenu_pane

0xe14a,	// (0x0004b354) main_sp_fs_ctrlbar_pane_g1

0xe156,	// (0x0004b360) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0004cf0d) main_sp_fs_ctrlbar_pane_g

0xe162,	// (0x0004b36c) main_sp_fs_ctrlbar_pane_t1

0x2c1a,	// (0x0003fe24) main_sp_fs_ctrlbar_pane

0x2c3e,	// (0x0003fe48) main_sp_fs_listscroll_pane_te_cp01

0x2c5e,	// (0x0003fe68) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2c5e,	// (0x0003fe68) popup_sp_fs_action_menu_pane_cp01

0x18e6,	// (0x0003eaf0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x18e6,	// (0x0003eaf0) bg_sp_fs_highlight_list_pane_cp01

0xe177,	// (0x0004b381) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe177,	// (0x0004b381) sp_fs_action_menu_list_gene_pane_g1

0xe186,	// (0x0004b390) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe186,	// (0x0004b390) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0004cf12) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0004cf12) sp_fs_action_menu_list_gene_pane_g

0xe193,	// (0x0004b39d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe193,	// (0x0004b39d) sp_fs_action_menu_list_gene_pane_t1

0xe1ab,	// (0x0004b3b5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe1ab,	// (0x0004b3b5) sp_fs_action_menu_list_gene_pane

0xe1ca,	// (0x0004b3d4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe1ca,	// (0x0004b3d4) popup_sp_fs_action_menu_bg_pane

0xe1d8,	// (0x0004b3e2) sp_fs_action_menu_list_pane_ParamLimits

0xe1d8,	// (0x0004b3e2) sp_fs_action_menu_list_pane

0xe1f8,	// (0x0004b402) sp_fs_scroll_pane_cp01_ParamLimits

0xe1f8,	// (0x0004b402) sp_fs_scroll_pane_cp01

0x2c78,	// (0x0003fe82) list_medium_line_plain_t2_t1

0x2c88,	// (0x0003fe92) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0004cf17) list_medium_line_plain_t2_t

0x2c98,	// (0x0003fea2) list_medium_line_plain_t3_t1

0x2ca8,	// (0x0003feb2) list_medium_line_plain_t3_t2

0x2cb6,	// (0x0003fec0) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0004cf1c) list_medium_line_plain_t3_t

0xc160,	// (0x0004936a) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t2_g2_g1

0xc178,	// (0x00049382) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc178,	// (0x00049382) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0004c483) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0004c483) list_medium_line_x2_t2_g2_g

0xc28e,	// (0x00049498) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc28e,	// (0x00049498) list_medium_line_x2_t2_g2_t1

0xc199,	// (0x000493a3) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0004cf23) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0004cf23) list_medium_line_x2_t2_g2_t

0xc160,	// (0x0004936a) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t4_g2_g1

0xe21e,	// (0x0004b428) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe21e,	// (0x0004b428) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0004cf28) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0004cf28) list_medium_line_x2_t4_g2_g

0x2cc4,	// (0x0003fece) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2cc4,	// (0x0003fece) list_medium_line_x2_t4_g2_t1

0x2cdb,	// (0x0003fee5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2cdb,	// (0x0003fee5) list_medium_line_x2_t4_g2_t2

0x2cf0,	// (0x0003fefa) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2cf0,	// (0x0003fefa) list_medium_line_x2_t4_g2_t3

0xc199,	// (0x000493a3) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0004cf2d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0004cf2d) list_medium_line_x2_t4_g2_t

0xe230,	// (0x0004b43a) list_medium_line_t3_right_iconx2_g1

0xe10a,	// (0x0004b314) list_medium_line_t3_right_iconx2_g2

0x2d02,	// (0x0003ff0c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0004cf36) list_medium_line_t3_right_iconx2_g

0x2d0c,	// (0x0003ff16) list_medium_line_t3_right_iconx2_t1

0x2d1c,	// (0x0003ff26) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0004cf3d) list_medium_line_t3_right_iconx2_t

0xc160,	// (0x0004936a) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x3_t4_g4_g1

0xc16c,	// (0x00049376) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x3_t4_g4_g2

0xc1e2,	// (0x000493ec) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc1e2,	// (0x000493ec) list_medium_line_x3_t4_g4_g3

0xe238,	// (0x0004b442) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe238,	// (0x0004b442) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0004cf42) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0004cf42) list_medium_line_x3_t4_g4_g

0x2d2a,	// (0x0003ff34) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2d2a,	// (0x0003ff34) list_medium_line_x3_t4_g4_t1

0x2d41,	// (0x0003ff4b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2d41,	// (0x0003ff4b) list_medium_line_x3_t4_g4_t2

0xc2a3,	// (0x000494ad) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc2a3,	// (0x000494ad) list_medium_line_x3_t4_g4_t3

0xe244,	// (0x0004b44e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe244,	// (0x0004b44e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0004cf4b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0004cf4b) list_medium_line_x3_t4_g4_t

0x2d5a,	// (0x0003ff64) list_single_dyc_row_text_pane_t1_ParamLimits

0x2d5a,	// (0x0003ff64) list_single_dyc_row_text_pane_t1

0x2da3,	// (0x0003ffad) list_single_dyc_row_text_pane_t2_ParamLimits

0x2da3,	// (0x0003ffad) list_single_dyc_row_text_pane_t2

0xe261,	// (0x0004b46b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe261,	// (0x0004b46b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0004cf54) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0004cf54) list_single_dyc_row_text_pane_t

0xe273,	// (0x0004b47d) list_single_dyc_row_pane_g1_ParamLimits

0xe273,	// (0x0004b47d) list_single_dyc_row_pane_g1

0xe27f,	// (0x0004b489) list_single_dyc_row_pane_g2_ParamLimits

0xe27f,	// (0x0004b489) list_single_dyc_row_pane_g2

0xe28b,	// (0x0004b495) list_single_dyc_row_pane_g3_ParamLimits

0xe28b,	// (0x0004b495) list_single_dyc_row_pane_g3

0xe297,	// (0x0004b4a1) list_single_dyc_row_pane_g4_ParamLimits

0xe297,	// (0x0004b4a1) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0004cf5b) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0004cf5b) list_single_dyc_row_pane_g

0xe2a3,	// (0x0004b4ad) list_single_dyc_row_text_pane_ParamLimits

0xe2a3,	// (0x0004b4ad) list_single_dyc_row_text_pane

0x0289,	// (0x0003d493) bg_sp_fs_scroll_pane

0xe2c2,	// (0x0004b4cc) thumb_sp_fs_scroll_pane

0xd126,	// (0x0004a330) list_medium_line_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_g1

0xe2cb,	// (0x0004b4d5) list_medium_line_t1_ParamLimits

0xe2cb,	// (0x0004b4d5) list_medium_line_t1

0xc160,	// (0x0004936a) list_medium_line_x2_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_g1

0xc16c,	// (0x00049376) list_medium_line_x2_g2_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0004cf64) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0004cf64) list_medium_line_x2_g

0xe2e0,	// (0x0004b4ea) list_medium_line_x2_t1_ParamLimits

0xe2e0,	// (0x0004b4ea) list_medium_line_x2_t1

0xc160,	// (0x0004936a) list_medium_line_x3_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x3_g1

0xc16c,	// (0x00049376) list_medium_line_x3_g2_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0004cf64) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0004cf64) list_medium_line_x3_g

0xe2e0,	// (0x0004b4ea) list_medium_line_x3_t1_ParamLimits

0xe2e0,	// (0x0004b4ea) list_medium_line_x3_t1

0xe2f6,	// (0x0004b500) thumb_sp_fs_scroll_pane_g1

0xe2ff,	// (0x0004b509) thumb_sp_fs_scroll_pane_g2

0xe308,	// (0x0004b512) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0004cf69) thumb_sp_fs_scroll_pane_g

0xe2f6,	// (0x0004b500) bg_sp_fs_scroll_pane_g1

0xe2ff,	// (0x0004b509) bg_sp_fs_scroll_pane_g2

0xe308,	// (0x0004b512) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0004cf69) bg_sp_fs_scroll_pane_g

0xc160,	// (0x0004936a) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc160,	// (0x0004936a) list_medium_line_x2_t3_g4_g1

0xc1d6,	// (0x000493e0) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc1d6,	// (0x000493e0) list_medium_line_x2_t3_g4_g2

0xc16c,	// (0x00049376) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc16c,	// (0x00049376) list_medium_line_x2_t3_g4_g3

0xc178,	// (0x00049382) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc178,	// (0x00049382) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0004c4ff) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0004c4ff) list_medium_line_x2_t3_g4_g

0x2dfd,	// (0x00040007) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2dfd,	// (0x00040007) list_medium_line_x2_t3_g4_t1

0x2e13,	// (0x0004001d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2e13,	// (0x0004001d) list_medium_line_x2_t3_g4_t2

0xc199,	// (0x000493a3) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc199,	// (0x000493a3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0004cf70) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0004cf70) list_medium_line_x2_t3_g4_t

0xd126,	// (0x0004a330) list_medium_line_g2_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_g2_g1

0xd132,	// (0x0004a33c) list_medium_line_g2_g2_ParamLimits

0xd132,	// (0x0004a33c) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0004cc38) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0004cc38) list_medium_line_g2_g

0xe311,	// (0x0004b51b) list_medium_line_g2_t1_ParamLimits

0xe311,	// (0x0004b51b) list_medium_line_g2_t1

0xd126,	// (0x0004a330) list_medium_line_t3_g2_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_t3_g2_g1

0xd132,	// (0x0004a33c) list_medium_line_t3_g2_g2_ParamLimits

0xd132,	// (0x0004a33c) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0004cc38) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0004cc38) list_medium_line_t3_g2_g

0x2e2d,	// (0x00040037) list_medium_line_t3_g2_t1_ParamLimits

0x2e2d,	// (0x00040037) list_medium_line_t3_g2_t1

0x2e47,	// (0x00040051) list_medium_line_t3_g2_t2_ParamLimits

0x2e47,	// (0x00040051) list_medium_line_t3_g2_t2

0x2e5c,	// (0x00040066) list_medium_line_t3_g2_t3_ParamLimits

0x2e5c,	// (0x00040066) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0004cf77) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0004cf77) list_medium_line_t3_g2_t

0xe10a,	// (0x0004b314) list_medium_line_right_icon_g1

0xe326,	// (0x0004b530) list_medium_line_right_icon_t1

0xd126,	// (0x0004a330) list_medium_line_t2_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_t2_g1

0x2e76,	// (0x00040080) list_medium_line_t2_t1_ParamLimits

0x2e76,	// (0x00040080) list_medium_line_t2_t1

0x2e90,	// (0x0004009a) list_medium_line_t2_t2_ParamLimits

0x2e90,	// (0x0004009a) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0004cf7e) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0004cf7e) list_medium_line_t2_t

0xd126,	// (0x0004a330) list_medium_line_t3_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_t3_g1

0x2ea5,	// (0x000400af) list_medium_line_t3_t1_ParamLimits

0x2ea5,	// (0x000400af) list_medium_line_t3_t1

0x2ebc,	// (0x000400c6) list_medium_line_t3_t2_ParamLimits

0x2ebc,	// (0x000400c6) list_medium_line_t3_t2

0x2ed1,	// (0x000400db) list_medium_line_t3_t3_ParamLimits

0x2ed1,	// (0x000400db) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0004cf83) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0004cf83) list_medium_line_t3_t

0xd126,	// (0x0004a330) list_medium_line_g3_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_g3_g1

0xe334,	// (0x0004b53e) list_medium_line_g3_g2_ParamLimits

0xe334,	// (0x0004b53e) list_medium_line_g3_g2

0xd132,	// (0x0004a33c) list_medium_line_g3_g3_ParamLimits

0xd132,	// (0x0004a33c) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0004cf8a) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0004cf8a) list_medium_line_g3_g

0xe340,	// (0x0004b54a) list_medium_line_g3_t1_ParamLimits

0xe340,	// (0x0004b54a) list_medium_line_g3_t1

0xd126,	// (0x0004a330) list_medium_line_t2_g3_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_t2_g3_g1

0xe334,	// (0x0004b53e) list_medium_line_t2_g3_g2_ParamLimits

0xe334,	// (0x0004b53e) list_medium_line_t2_g3_g2

0xd132,	// (0x0004a33c) list_medium_line_t2_g3_g3_ParamLimits

0xd132,	// (0x0004a33c) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0004cf8a) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0004cf8a) list_medium_line_t2_g3_g

0x2ee3,	// (0x000400ed) list_medium_line_t2_g3_t1_ParamLimits

0x2ee3,	// (0x000400ed) list_medium_line_t2_g3_t1

0x2efd,	// (0x00040107) list_medium_line_t2_g3_t2_ParamLimits

0x2efd,	// (0x00040107) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0004cf91) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0004cf91) list_medium_line_t2_g3_t

0xd126,	// (0x0004a330) list_medium_line_t3_g3_g1_ParamLimits

0xd126,	// (0x0004a330) list_medium_line_t3_g3_g1

0xe334,	// (0x0004b53e) list_medium_line_t3_g3_g2_ParamLimits

0xe334,	// (0x0004b53e) list_medium_line_t3_g3_g2

0xd132,	// (0x0004a33c) list_medium_line_t3_g3_g3_ParamLimits

0xd132,	// (0x0004a33c) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0004cf8a) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0004cf8a) list_medium_line_t3_g3_g

0x2f12,	// (0x0004011c) list_medium_line_t3_g3_t1_ParamLimits

0x2f12,	// (0x0004011c) list_medium_line_t3_g3_t1

0x2f26,	// (0x00040130) list_medium_line_t3_g3_t2_ParamLimits

0x2f26,	// (0x00040130) list_medium_line_t3_g3_t2

0x2f38,	// (0x00040142) list_medium_line_t3_g3_t3_ParamLimits

0x2f38,	// (0x00040142) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0004cf96) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0004cf96) list_medium_line_t3_g3_t

0xe230,	// (0x0004b43a) list_medium_line_right_iconx2_g1

0xe10a,	// (0x0004b314) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0004cf9d) list_medium_line_right_iconx2_g

0xe355,	// (0x0004b55f) list_medium_line_right_iconx2_t1

0xe230,	// (0x0004b43a) list_medium_line_t2_right_iconx2_g1

0xe10a,	// (0x0004b314) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0004cf9d) list_medium_line_t2_right_iconx2_g

0x2f4c,	// (0x00040156) list_medium_line_t2_right_iconx2_t1

0x2f5c,	// (0x00040166) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0004cfa2) list_medium_line_t2_right_iconx2_t

0xe363,	// (0x0004b56d) list_medium_line_x4_t4_t1

0x2f6a,	// (0x00040174) list_medium_line_x4_t4_t2

0x2f7a,	// (0x00040184) list_medium_line_x4_t4_t3

0x2f8a,	// (0x00040194) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0004cfa7) list_medium_line_x4_t4_t

0xb3f0,	// (0x000485fa) tport_appsw_pane_ParamLimits

0xb3f0,	// (0x000485fa) tport_appsw_pane

0xb401,	// (0x0004860b) tport_contact_pane_ParamLimits

0xb401,	// (0x0004860b) tport_contact_pane

0xb41a,	// (0x00048624) tport_listscroll_pane_ParamLimits

0xb41a,	// (0x00048624) tport_listscroll_pane

0xb435,	// (0x0004863f) cell_tport_appsw_pane_ParamLimits

0xb435,	// (0x0004863f) cell_tport_appsw_pane

0xce81,	// (0x0004a08b) tport_appsw_pane_g1_ParamLimits

0xce81,	// (0x0004a08b) tport_appsw_pane_g1

0xe371,	// (0x0004b57b) tport_contact_pane_g1

0xdb39,	// (0x0004ad43) tport_contact_pane_t1

0xe37a,	// (0x0004b584) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0004cfb0) tport_contact_pane_t

0xe388,	// (0x0004b592) list_tport_pane

0xe391,	// (0x0004b59b) scroll_pane_cp_030

0xe3a2,	// (0x0004b5ac) cell_tport_appsw_pane_g1

0xe3b2,	// (0x0004b5bc) cell_tport_appsw_pane_t1

0x0289,	// (0x0003d493) grid_highlight_pane_cp019

0xb475,	// (0x0004867f) list_tport_double_graphic_pane_ParamLimits

0xb475,	// (0x0004867f) list_tport_double_graphic_pane

0x18e6,	// (0x0003eaf0) list_highlight_pane_cp023_ParamLimits

0x18e6,	// (0x0003eaf0) list_highlight_pane_cp023

0xb482,	// (0x0004868c) list_tport_double_graphic_pane_g1_ParamLimits

0xb482,	// (0x0004868c) list_tport_double_graphic_pane_g1

0xb48f,	// (0x00048699) list_tport_double_graphic_pane_t1_ParamLimits

0xb48f,	// (0x00048699) list_tport_double_graphic_pane_t1

0xb4a4,	// (0x000486ae) list_tport_double_graphic_pane_t2_ParamLimits

0xb4a4,	// (0x000486ae) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0004cfbc) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0004cfbc) list_tport_double_graphic_pane_t

0x0289,	// (0x0003d493) main_cale_note_pane

0x98fa,	// (0x00046b04) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x98fa,	// (0x00046b04) cell_vitu2_function_top_wide_pane_cp01

0xaf6f,	// (0x00048179) wait_bar_pane_cp05_ParamLimits

0x0289,	// (0x0003d493) listscroll_cmail_pane

0xe3c8,	// (0x0004b5d2) list_cmail_pane

0xb4c0,	// (0x000486ca) list_cmail_body_pane

0xe3e0,	// (0x0004b5ea) list_single_cmail_header_caption_pane

0xb4d4,	// (0x000486de) list_single_cmail_header_detail_pane_ParamLimits

0xb4d4,	// (0x000486de) list_single_cmail_header_detail_pane

0xb4fe,	// (0x00048708) list_single_cmail_header_caption_pane_t1

0x2f9a,	// (0x000401a4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2f9a,	// (0x000401a4) list_single_cmail_header_detail_pane_g1

0xe402,	// (0x0004b60c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe402,	// (0x0004b60c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0004cfc1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0004cfc1) list_single_cmail_header_detail_pane_g

0xe41b,	// (0x0004b625) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe41b,	// (0x0004b625) list_single_cmail_header_detail_pane_t1

0xe451,	// (0x0004b65b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe451,	// (0x0004b65b) list_single_cmail_header_editor_pane_bg

0xdcc8,	// (0x0004aed2) list_cmail_body_pane_g1

0xe463,	// (0x0004b66d) list_cmail_body_pane_t1

0xcebe,	// (0x0004a0c8) list_single_cmail_header_editor_pane_bg_g1

0x0e32,	// (0x0003e03c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcece,	// (0x0004a0d8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcec6,	// (0x0004a0d0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd11e,	// (0x0004a328) list_single_cmail_header_editor_pane_bg_g1_copy4

0xceee,	// (0x0004a0f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcede,	// (0x0004a0e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcee6,	// (0x0004a0f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0e12,	// (0x0003e01c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb50e,	// (0x00048718) calenote_gesture_pane_ParamLimits

0xb50e,	// (0x00048718) calenote_gesture_pane

0xb52e,	// (0x00048738) calenote_window_pane_ParamLimits

0xb52e,	// (0x00048738) calenote_window_pane

0xe471,	// (0x0004b67b) popup_note_window_cp01

0xb54a,	// (0x00048754) calenote_swipe_1_pane_ParamLimits

0xb54a,	// (0x00048754) calenote_swipe_1_pane

0xb339,	// (0x00048543) calenote_swipe_2_pane_ParamLimits

0xb339,	// (0x00048543) calenote_swipe_2_pane

0xe00b,	// (0x0004b215) calenote_swipe_1_pane_g1_ParamLimits

0xe00b,	// (0x0004b215) calenote_swipe_1_pane_g1

0xe018,	// (0x0004b222) calenote_swipe_1_pane_g2_ParamLimits

0xe018,	// (0x0004b222) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0004cef0) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0004cef0) calenote_swipe_1_pane_g

0xe483,	// (0x0004b68d) calenote_swipe_1_pane_t1_ParamLimits

0xe483,	// (0x0004b68d) calenote_swipe_1_pane_t1

0xe00b,	// (0x0004b215) calenote_swipe_2_pane_g1_ParamLimits

0xe00b,	// (0x0004b215) calenote_swipe_2_pane_g1

0xe4a2,	// (0x0004b6ac) calenote_swipe_2_pane_g2_ParamLimits

0xe4a2,	// (0x0004b6ac) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0004cfcd) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0004cfcd) calenote_swipe_2_pane_g

0xe4ae,	// (0x0004b6b8) calenote_swipe_2_pane_t1_ParamLimits

0xe4ae,	// (0x0004b6b8) calenote_swipe_2_pane_t1

0x0289,	// (0x0003d493) main_mup_navstr_pane

0x85a7,	// (0x000457b1) main_mup3_pane_t7_ParamLimits

0x85a7,	// (0x000457b1) main_mup3_pane_t7

0xedb8,	// (0x0004bfc2) main_mp4_pane_g6_ParamLimits

0xedb8,	// (0x0004bfc2) main_mp4_pane_g6

0xef5c,	// (0x0004c166) main_image3_pane_t4_ParamLimits

0xef5c,	// (0x0004c166) main_image3_pane_t4

0xb55f,	// (0x00048769) popup_navstr_preview_pane_ParamLimits

0xb55f,	// (0x00048769) popup_navstr_preview_pane

0xb573,	// (0x0004877d) scroll_navstr_pane_ParamLimits

0xb573,	// (0x0004877d) scroll_navstr_pane

0x0289,	// (0x0003d493) bg_popup_preview_window_pane_cp04

0xe4d5,	// (0x0004b6df) popup_navstr_preview_pane_t1

0xb587,	// (0x00048791) scroll_navstr_pane_g1_ParamLimits

0xb587,	// (0x00048791) scroll_navstr_pane_g1

0xb59b,	// (0x000487a5) scroll_navstr_pane_t1_ParamLimits

0xb59b,	// (0x000487a5) scroll_navstr_pane_t1

0xe47a,	// (0x0004b684) bg_button_pane_cp014

0xe47a,	// (0x0004b684) bg_button_pane_cp030

0x2ba2,	// (0x0003fdac) list_double_fisheye_pane_g4_ParamLimits

0x2ba2,	// (0x0003fdac) list_double_fisheye_pane_g4

0x2bae,	// (0x0003fdb8) list_double_fisheye_pane_g5_ParamLimits

0x2bae,	// (0x0003fdb8) list_double_fisheye_pane_g5

0xe3d0,	// (0x0004b5da) sp_fs_scroll_pane_cp03

0xe14a,	// (0x0004b354) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe156,	// (0x0004b360) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0004cf0d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe162,	// (0x0004b36c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb4b6,	// (0x000486c0) sp_fs_scroll_pane_cp02

0x0b3a,	// (0x0003dd44) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b3a,	// (0x0003dd44) popup_sp_fs_calendar_preview_list_single_pane

0x0289,	// (0x0003d493) main_cam6_pano_pane

0x18e6,	// (0x0003eaf0) main_mup3_pane_ParamLimits

0x0289,	// (0x0003d493) main_phacti_pane

0xae42,	// (0x0004804c) bg_button_pane_cp11

0xae5c,	// (0x00048066) main_mobtv_info_pane_g2_ParamLimits

0xae5c,	// (0x00048066) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0004ce6d) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0004ce6d) main_mobtv_info_pane_g

0xb037,	// (0x00048241) sc_clock_pane_t5_ParamLimits

0xb037,	// (0x00048241) sc_clock_pane_t5

0xb0bc,	// (0x000482c6) main_radioblah_pane_g1_ParamLimits

0xdf4e,	// (0x0004b158) main_radioblah_pane_t3_ParamLimits

0xdf4e,	// (0x0004b158) main_radioblah_pane_t3

0xdf66,	// (0x0004b170) main_radioblah_pane_t4_ParamLimits

0xdf66,	// (0x0004b170) main_radioblah_pane_t4

0xb0e4,	// (0x000482ee) main_radioblah_text_pane_ParamLimits

0xb0e4,	// (0x000482ee) main_radioblah_text_pane

0xb0f6,	// (0x00048300) main_radioblah_info_pane_g1_ParamLimits

0xb18f,	// (0x00048399) main_radioblah_info_pane_t4_ParamLimits

0xb18f,	// (0x00048399) main_radioblah_info_pane_t4

0x18e6,	// (0x0003eaf0) main_sp_fs_calendar_pane

0xb5b2,	// (0x000487bc) main_phacti_pane_g1

0xb5ba,	// (0x000487c4) phacti_note_pane_ParamLimits

0xb5ba,	// (0x000487c4) phacti_note_pane

0xe4ec,	// (0x0004b6f6) phacti_term_pane_ParamLimits

0xe4ec,	// (0x0004b6f6) phacti_term_pane

0xe501,	// (0x0004b70b) phacti_note_pane_t1_ParamLimits

0xe501,	// (0x0004b70b) phacti_note_pane_t1

0xe518,	// (0x0004b722) phacti_term_pane_g1

0xe520,	// (0x0004b72a) phacti_term_pane_t1_ParamLimits

0xe520,	// (0x0004b72a) phacti_term_pane_t1

0xe54a,	// (0x0004b754) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0c2d,	// (0x0003de37) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0004cfd7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe552,	// (0x0004b75c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe552,	// (0x0004b75c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe567,	// (0x0004b771) aid_popup_sp_fs_bg_corner_pane

0x7f3b,	// (0x00045145) popup_sp_fs_calendar_preview_bg_pane_g1

0x0289,	// (0x0003d493) popup_sp_fs_calendar_preview_bg_pane

0xe56f,	// (0x0004b779) popup_sp_fs_calendar_preview_list_pane

0x18e6,	// (0x0003eaf0) bg_main_sp_fs_cale_pane_ParamLimits

0x18e6,	// (0x0003eaf0) bg_main_sp_fs_cale_pane

0xe577,	// (0x0004b781) listscroll_cale_mrui_pane_ParamLimits

0xe577,	// (0x0004b781) listscroll_cale_mrui_pane

0xe58b,	// (0x0004b795) listscroll_sp_fs_schedule_track_pane

0xe594,	// (0x0004b79e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe594,	// (0x0004b79e) main_sp_fs_ctrlbar_pane_cp01

0xe5a5,	// (0x0004b7af) main_sp_fs_ribbon_pane

0xe5ad,	// (0x0004b7b7) popup_sp_fs_cale_preview_window

0xb611,	// (0x0004881b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb611,	// (0x0004881b) list_single_sp_fs_schedule_track_pane

0x18e6,	// (0x0003eaf0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x18e6,	// (0x0003eaf0) bg_sp_fs_highlight_list_pane_cp03

0xb624,	// (0x0004882e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb624,	// (0x0004882e) list_single_sp_fs_schedule_track_pane_g1

0xb630,	// (0x0004883a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb630,	// (0x0004883a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0004cfdc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0004cfdc) list_single_sp_fs_schedule_track_pane_g

0xb63c,	// (0x00048846) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb63c,	// (0x00048846) list_single_sp_fs_schedule_track_pane_t1

0xb656,	// (0x00048860) sp_fs_schedule_track_pane_ParamLimits

0xb656,	// (0x00048860) sp_fs_schedule_track_pane

0xe5bf,	// (0x0004b7c9) sp_fs_schedule_track_pane_g1

0xe5c7,	// (0x0004b7d1) sp_fs_schedule_track_pane_g2

0xe5cf,	// (0x0004b7d9) sp_fs_schedule_track_pane_g3

0xe5d7,	// (0x0004b7e1) sp_fs_schedule_track_pane_g4

0xe5df,	// (0x0004b7e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0004cfe1) sp_fs_schedule_track_pane_g

0xcebe,	// (0x0004a0c8) bg_sp_fs_schedule_viewer_highlight_g1

0x0e32,	// (0x0003e03c) bg_sp_fs_schedule_viewer_highlight_g2

0xcec6,	// (0x0004a0d0) bg_sp_fs_schedule_viewer_highlight_g3

0xcece,	// (0x0004a0d8) bg_sp_fs_schedule_viewer_highlight_g4

0xd11e,	// (0x0004a328) bg_sp_fs_schedule_viewer_highlight_g5

0xcede,	// (0x0004a0e8) bg_sp_fs_schedule_viewer_highlight_g6

0xcee6,	// (0x0004a0f0) bg_sp_fs_schedule_viewer_highlight_g7

0xceee,	// (0x0004a0f8) bg_sp_fs_schedule_viewer_highlight_g8

0x0e12,	// (0x0003e01c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0004cfec) bg_sp_fs_schedule_viewer_highlight_g

0x0289,	// (0x0003d493) bg_main_sp_fs_ribbon_pane

0xb667,	// (0x00048871) main_sp_fs_ribbon_pane_g1

0xe5e7,	// (0x0004b7f1) main_sp_fs_ribbon_pane_t1

0xb670,	// (0x0004887a) main_sp_fs_ribbon_pane_t2

0xe5f6,	// (0x0004b800) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0004cfff) main_sp_fs_ribbon_pane_t

0xe605,	// (0x0004b80f) main_sp_fs_ribbon_scheduler_pane

0xe60d,	// (0x0004b817) bg_main_sp_fs_ribbon_pane_g1

0xe616,	// (0x0004b820) bg_main_sp_fs_ribbon_pane_g2

0xe61f,	// (0x0004b829) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0004d006) bg_main_sp_fs_ribbon_pane_g

0xe627,	// (0x0004b831) main_sp_fs_ribbon_scheduler_pane_g1

0xe630,	// (0x0004b83a) main_sp_fs_ribbon_scheduler_pane_g2

0xe639,	// (0x0004b843) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0004d00d) main_sp_fs_ribbon_scheduler_pane_g

0xe642,	// (0x0004b84c) list_cale_mrui_pane

0xb67f,	// (0x00048889) sp_fs_scroll_pane_cp07_ParamLimits

0xb67f,	// (0x00048889) sp_fs_scroll_pane_cp07

0xb695,	// (0x0004889f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb695,	// (0x0004889f) bg_sp_fs_schedule_viewer_highlight

0xe64b,	// (0x0004b855) list_single_sp_fs_schedule_track_pane_cp01

0xe653,	// (0x0004b85d) list_sp_fs_schedule_track_pane

0xe65b,	// (0x0004b865) sp_fs_scroll_pane_cp06_ParamLimits

0xe65b,	// (0x0004b865) sp_fs_scroll_pane_cp06

0x7f3b,	// (0x00045145) bgmain_sp_fs_calendar_pane_g1

0x2fd8,	// (0x000401e2) list_single_cale_mrui_pane_ParamLimits

0x2fd8,	// (0x000401e2) list_single_cale_mrui_pane

0xe66d,	// (0x0004b877) list_single_cale_mrui_row_pane_ParamLimits

0xe66d,	// (0x0004b877) list_single_cale_mrui_row_pane

0xe67a,	// (0x0004b884) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe67a,	// (0x0004b884) list_single_cale_mrui_row_pane_g1

0xe6b2,	// (0x0004b8bc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe6b2,	// (0x0004b8bc) list_single_cale_mrui_row_pane_t1

0x2ff9,	// (0x00040203) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2ff9,	// (0x00040203) list_single_cale_mrui_row_pane_t2

0xe6c4,	// (0x0004b8ce) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe6c4,	// (0x0004b8ce) list_single_cale_mrui_row_pane_t3

0xe6f3,	// (0x0004b8fd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe6f3,	// (0x0004b8fd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0004d019) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0004d019) list_single_cale_mrui_row_pane_t

0x3061,	// (0x0004026b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3061,	// (0x0004026b) list_single_cmail_header_editor_pane_bg_cp01

0x3087,	// (0x00040291) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3087,	// (0x00040291) list_single_cmail_header_editor_pane_bg_cp02

0xb6a5,	// (0x000488af) main_radioblah_text_pane_t1_ParamLimits

0xb6a5,	// (0x000488af) main_radioblah_text_pane_t1

0xe722,	// (0x0004b92c) cam6_indi_pane_cp01

0xe72a,	// (0x0004b934) cam6_mode_pane_cp01

0xe732,	// (0x0004b93c) cam6_pano_pane

0xe73b,	// (0x0004b945) cam6_zoom_pane_cp01

0xe743,	// (0x0004b94d) cam6_pano_image_pane

0xe74e,	// (0x0004b958) cam6_pano_pane_g1

0xdcc8,	// (0x0004aed2) cam6_pano_pane_g2

0xe757,	// (0x0004b961) cam6_pano_pane_g3

0xe760,	// (0x0004b96a) cam6_pano_pane_g4

0xc9f3,	// (0x00049bfd) cam6_pano_pane_g5

0xe769,	// (0x0004b973) cam6_pano_pane_g6

0xe773,	// (0x0004b97d) cam6_pano_pane_g7

0xe77b,	// (0x0004b985) cam6_pano_pane_g8

0xe784,	// (0x0004b98e) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0004d022) cam6_pano_pane_g

0x0289,	// (0x0003d493) main_browser_tag_pane

0xe4cd,	// (0x0004b6d7) grid_navstr_albumart_pane

0xe78f,	// (0x0004b999) cell_navstr_albumart_pane_ParamLimits

0xe78f,	// (0x0004b999) cell_navstr_albumart_pane

0xe7b2,	// (0x0004b9bc) cell_navstr_albumart_pane_g1

0x68cc,	// (0x00043ad6) cell_navstr_albumart_pane_g2

0x68dc,	// (0x00043ae6) cell_navstr_albumart_pane_g3

0x68d4,	// (0x00043ade) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0004d035) cell_navstr_albumart_pane_g

0xb6bf,	// (0x000488c9) bt_list_pane_ParamLimits

0xb6bf,	// (0x000488c9) bt_list_pane

0xb6d3,	// (0x000488dd) bt_list_pane_t1

0xb6e2,	// (0x000488ec) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0004d03e) bt_list_pane_t

0x0289,	// (0x0003d493) main_cale_prevew_pane

0xb6f1,	// (0x000488fb) popup_cale_preview_window_ParamLimits

0xb6f1,	// (0x000488fb) popup_cale_preview_window

0x18e6,	// (0x0003eaf0) bg_popup_preview_window_pane_cp05_ParamLimits

0x18e6,	// (0x0003eaf0) bg_popup_preview_window_pane_cp05

0xe7ba,	// (0x0004b9c4) list_cale_preview_pane_ParamLimits

0xe7ba,	// (0x0004b9c4) list_cale_preview_pane

0xb70a,	// (0x00048914) list_double_cale_preview_pane_ParamLimits

0xb70a,	// (0x00048914) list_double_cale_preview_pane

0xb71c,	// (0x00048926) list_single_cale_preview_pane_ParamLimits

0xb71c,	// (0x00048926) list_single_cale_preview_pane

0xb732,	// (0x0004893c) list_single_cale_preview_pane_g1

0xb73a,	// (0x00048944) list_single_cale_preview_pane_t1_ParamLimits

0xb73a,	// (0x00048944) list_single_cale_preview_pane_t1

0xb74f,	// (0x00048959) list_double_cale_preview_pane_g1

0xb757,	// (0x00048961) list_double_cale_preview_pane_t1_ParamLimits

0xb757,	// (0x00048961) list_double_cale_preview_pane_t1

0xb76c,	// (0x00048976) list_double_cale_preview_pane_t2_ParamLimits

0xb76c,	// (0x00048976) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0004d043) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0004d043) list_double_cale_preview_pane_t

0x0289,	// (0x0003d493) main_ezdial_pane

0x18e6,	// (0x0003eaf0) main_sp_fs_email_pane_ParamLimits

0xb353,	// (0x0004855d) cmail_ddmenu_btn01_pane_ParamLimits

0xb353,	// (0x0004855d) cmail_ddmenu_btn01_pane

0xb366,	// (0x00048570) cmail_ddmenu_btn02_pane_ParamLimits

0xb366,	// (0x00048570) cmail_ddmenu_btn02_pane

0xb389,	// (0x00048593) cmail_ddmenu_btn03_pane_ParamLimits

0xb389,	// (0x00048593) cmail_ddmenu_btn03_pane

0x2c1a,	// (0x0003fe24) main_sp_fs_ctrlbar_pane_ParamLimits

0x2c3e,	// (0x0003fe48) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb4c0,	// (0x000486ca) list_cmail_body_pane_ParamLimits

0xe3f9,	// (0x0004b603) bg_button_pane_cp12

0xe40e,	// (0x0004b618) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe40e,	// (0x0004b618) list_single_cmail_header_detail_pane_g3

0x2fb2,	// (0x000401bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2fb2,	// (0x000401bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0004cfc8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0004cfc8) list_single_cmail_header_detail_pane_t

0xe535,	// (0x0004b73f) phacti_term_pane_t2_ParamLimits

0xe535,	// (0x0004b73f) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0004cfd2) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0004cfd2) phacti_term_pane_t

0xe7c6,	// (0x0004b9d0) aid_size_list_single_double

0xb784,	// (0x0004898e) popup_ezdial_listscroll_window

0xb7a0,	// (0x000489aa) popup_number_entry_window_cp01

0x151d,	// (0x0003e727) bg_popup_call_pane_cp09

0xe7d2,	// (0x0004b9dc) ezdial_list_pane

0xe7da,	// (0x0004b9e4) scroll_pane_cp23

0x6db2,	// (0x00043fbc) bg_button_pane_cp028_ParamLimits

0x6db2,	// (0x00043fbc) bg_button_pane_cp028

0xb7ae,	// (0x000489b8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb7ae,	// (0x000489b8) cmail_ddmenu_btn01_pane_g1

0xb7ba,	// (0x000489c4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb7ba,	// (0x000489c4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0004d048) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0004d048) cmail_ddmenu_btn01_pane_g

0xe7e2,	// (0x0004b9ec) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe7e2,	// (0x0004b9ec) cmail_ddmenu_btn01_pane_t1

0x6db2,	// (0x00043fbc) bg_button_pane_cp029_ParamLimits

0x6db2,	// (0x00043fbc) bg_button_pane_cp029

0xb7c6,	// (0x000489d0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb7c6,	// (0x000489d0) cmail_ddmenu_btn02_pane_g1

0xb7de,	// (0x000489e8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb7de,	// (0x000489e8) cmail_ddmenu_btn02_pane_t1

0x18e6,	// (0x0003eaf0) bg_button_pane_cp031_ParamLimits

0x18e6,	// (0x0003eaf0) bg_button_pane_cp031

0xb7c6,	// (0x000489d0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb7c6,	// (0x000489d0) cmail_ddmenu_btn03_pane_g1

0xb7de,	// (0x000489e8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb7de,	// (0x000489e8) cmail_ddmenu_btn03_pane_t1

0x9100,	// (0x0004630a) cell_dialer2_keypad_pane_t1_ParamLimits

0x911a,	// (0x00046324) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x911a,	// (0x00046324) cell_dialer2_keypad_pane_t1_copy1

0xacde,	// (0x00047ee8) ncimui_group_button_pane

0x18e6,	// (0x0003eaf0) main_sp_fs_calendar_pane_ParamLimits

0xe3e0,	// (0x0004b5ea) list_single_cmail_header_caption_pane_ParamLimits

0xd465,	// (0x0004a66f) aid_recal_txt_sm_pane

0x0289,	// (0x0003d493) mian_recal_day_pane

0xe5ad,	// (0x0004b7b7) popup_sp_fs_cale_preview_window_ParamLimits

0x0289,	// (0x0003d493) list_recal_day_pane

0xe810,	// (0x0004ba1a) list_single_recal_day_pane_ParamLimits

0xe810,	// (0x0004ba1a) list_single_recal_day_pane

0xe822,	// (0x0004ba2c) list_single_recal_day_pane_g1_ParamLimits

0xe822,	// (0x0004ba2c) list_single_recal_day_pane_g1

0xe82e,	// (0x0004ba38) list_single_recal_day_pane_g2_ParamLimits

0xe82e,	// (0x0004ba38) list_single_recal_day_pane_g2

0xe83d,	// (0x0004ba47) list_single_recal_day_pane_g3_ParamLimits

0xe83d,	// (0x0004ba47) list_single_recal_day_pane_g3

0xb802,	// (0x00048a0c) list_single_recal_day_pane_g4_ParamLimits

0xb802,	// (0x00048a0c) list_single_recal_day_pane_g4

0xe849,	// (0x0004ba53) list_single_recal_day_pane_g5_ParamLimits

0xe849,	// (0x0004ba53) list_single_recal_day_pane_g5

0xe858,	// (0x0004ba62) list_single_recal_day_pane_g6_ParamLimits

0xe858,	// (0x0004ba62) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0004d057) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0004d057) list_single_recal_day_pane_g

0xe864,	// (0x0004ba6e) list_single_recal_day_pane_t1

0xe872,	// (0x0004ba7c) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0004d064) list_single_recal_day_pane_t

0xb815,	// (0x00048a1f) ncimui_query_button_pane_ParamLimits

0xb815,	// (0x00048a1f) ncimui_query_button_pane

0xb825,	// (0x00048a2f) ncimui_query_button_pane_t1_ParamLimits

0xb825,	// (0x00048a2f) ncimui_query_button_pane_t1

0xe880,	// (0x0004ba8a) ncimui_query_button_pane_t2_ParamLimits

0xe880,	// (0x0004ba8a) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0004d069) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0004d069) ncimui_query_button_pane_t

0xb838,	// (0x00048a42) query_button_pane_ParamLimits

0xb838,	// (0x00048a42) query_button_pane

0x0289,	// (0x0003d493) bg_button_pane_cp0028

0xe893,	// (0x0004ba9d) query_button_pane_t1

0x6dd4,	// (0x00043fde) main_tport_pane_ParamLimits

0xb3ad,	// (0x000485b7) bg_popup_window_pane_cp01_ParamLimits

0xb3ad,	// (0x000485b7) bg_popup_window_pane_cp01

0xb3c7,	// (0x000485d1) heading_pane_cp08_ParamLimits

0xb3c7,	// (0x000485d1) heading_pane_cp08

0xb3db,	// (0x000485e5) heading_pane_cp07_ParamLimits

0xb3db,	// (0x000485e5) heading_pane_cp07

0xe3a2,	// (0x0004b5ac) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0004cfb5) cell_tport_appsw_pane_g

0x2845,	// (0x0003fa4f) input_candi_list_open_g1

0x0fd9,	// (0x0003e1e3) list_cale_time_pane_g6_ParamLimits

0x0fd9,	// (0x0003e1e3) list_cale_time_pane_g6

0x801e,	// (0x00045228) aid_size_touch_calib_1_ParamLimits

0x801e,	// (0x00045228) aid_size_touch_calib_1

0x802a,	// (0x00045234) aid_size_touch_calib_2_ParamLimits

0x802a,	// (0x00045234) aid_size_touch_calib_2

0x8040,	// (0x0004524a) aid_size_touch_calib_3_ParamLimits

0x8040,	// (0x0004524a) aid_size_touch_calib_3

0x805e,	// (0x00045268) aid_size_touch_calib_4_ParamLimits

0x805e,	// (0x00045268) aid_size_touch_calib_4

0x8074,	// (0x0004527e) main_touch_calib_button_group_pane_ParamLimits

0x8074,	// (0x0004527e) main_touch_calib_button_group_pane

0x808b,	// (0x00045295) main_touch_calib_pane_g1_ParamLimits

0x8097,	// (0x000452a1) main_touch_calib_pane_g2_ParamLimits

0x80a3,	// (0x000452ad) main_touch_calib_pane_g3_ParamLimits

0x80af,	// (0x000452b9) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0004c98e) main_touch_calib_pane_g_ParamLimits

0x80bb,	// (0x000452c5) main_touch_calib_pane_t1_ParamLimits

0x80d5,	// (0x000452df) main_touch_calib_pane_t2_ParamLimits

0x80ef,	// (0x000452f9) main_touch_calib_pane_t3_ParamLimits

0x8103,	// (0x0004530d) main_touch_calib_pane_t4_ParamLimits

0x8117,	// (0x00045321) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0004c997) main_touch_calib_pane_t_ParamLimits

0xc7c9,	// (0x000499d3) list_single_fp_cale_pane_g3_ParamLimits

0xc7c9,	// (0x000499d3) list_single_fp_cale_pane_g3

0x18e6,	// (0x0003eaf0) bg_button_pane_cp012_ParamLimits

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp03_ParamLimits

0xa0c6,	// (0x000472d0) cell_vitu2_function_top_pane_g1_ParamLimits

0x18e6,	// (0x0003eaf0) bg_vkb2_func_pane_cp04_ParamLimits

0xac92,	// (0x00047e9c) main_ncimui_button_group_pane_ParamLimits

0xac92,	// (0x00047e9c) main_ncimui_button_group_pane

0xaccc,	// (0x00047ed6) main_ncimui_pane_t3_ParamLimits

0xaccc,	// (0x00047ed6) main_ncimui_pane_t3

0xe4e3,	// (0x0004b6ed) phacti_button_group_pane

0xe7c6,	// (0x0004b9d0) aid_size_list_single_double_ParamLimits

0xb784,	// (0x0004898e) popup_ezdial_listscroll_window_ParamLimits

0xb7a0,	// (0x000489aa) popup_number_entry_window_cp01_ParamLimits

0xb84b,	// (0x00048a55) phacti_button_pane_ParamLimits

0xb84b,	// (0x00048a55) phacti_button_pane

0x0289,	// (0x0003d493) bg_button_pane_cp14

0xe8a1,	// (0x0004baab) phacti_button_pane_t1

0xb85c,	// (0x00048a66) main_touch_calib_button_pane_ParamLimits

0xb85c,	// (0x00048a66) main_touch_calib_button_pane

0x0a36,	// (0x0003dc40) bg_button_pane_cp18_ParamLimits

0x0a36,	// (0x0003dc40) bg_button_pane_cp18

0xe8af,	// (0x0004bab9) main_touch_calib_button_pane_t1_ParamLimits

0xe8af,	// (0x0004bab9) main_touch_calib_button_pane_t1

0xe8c5,	// (0x0004bacf) main_touch_calib_button_pane_t2_ParamLimits

0xe8c5,	// (0x0004bacf) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0004d06e) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0004d06e) main_touch_calib_button_pane_t

0x0289,	// (0x0003d493) cell_ncimui_button_pane

0x0289,	// (0x0003d493) bg_button_pane_cp032

0xe8e3,	// (0x0004baed) cell_ncimui_button_pane_t1

0xef3c,	// (0x0004c146) image3_infobar_pane_ParamLimits

0xef3c,	// (0x0004c146) image3_infobar_pane

0xb063,	// (0x0004826d) fs_bigclock_status_pane_ParamLimits

0xb063,	// (0x0004826d) fs_bigclock_status_pane

0xb070,	// (0x0004827a) main_fs_bigclock_clock_pane_ParamLimits

0xb070,	// (0x0004827a) main_fs_bigclock_clock_pane

0xb083,	// (0x0004828d) main_fs_bigclock_indi_pane_ParamLimits

0xb083,	// (0x0004828d) main_fs_bigclock_indi_pane

0xb09b,	// (0x000482a5) main_fs_bigclock_swipe_pane_ParamLimits

0xb09b,	// (0x000482a5) main_fs_bigclock_swipe_pane

0x0289,	// (0x0003d493) main_fs_clock_dumped_data

0xddd5,	// (0x0004afdf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xddd5,	// (0x0004afdf) list_single_fs_bigclock_indicator_pane_g1

0xddf1,	// (0x0004affb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddf1,	// (0x0004affb) list_single_fs_bigclock_indicator_pane_g2

0xde0b,	// (0x0004b015) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xde0b,	// (0x0004b015) list_single_fs_bigclock_indicator_pane_g3

0xde25,	// (0x0004b02f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xde25,	// (0x0004b02f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0004cea1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0004cea1) list_single_fs_bigclock_indicator_pane_g

0xde4b,	// (0x0004b055) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde4b,	// (0x0004b055) list_single_fs_bigclock_indicator_pane_t1

0xde73,	// (0x0004b07d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde73,	// (0x0004b07d) list_single_fs_bigclock_indicator_pane_t2

0xde9b,	// (0x0004b0a5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde9b,	// (0x0004b0a5) list_single_fs_bigclock_indicator_pane_t3

0xdec3,	// (0x0004b0cd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdec3,	// (0x0004b0cd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0004ceac) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0004ceac) list_single_fs_bigclock_indicator_pane_t

0xe8f1,	// (0x0004bafb) image3_infobar_fav_pane_ParamLimits

0xe8f1,	// (0x0004bafb) image3_infobar_fav_pane

0xe901,	// (0x0004bb0b) image3_infobar_loc_pane_ParamLimits

0xe901,	// (0x0004bb0b) image3_infobar_loc_pane

0xe915,	// (0x0004bb1f) image3_infobar_time_pane_ParamLimits

0xe915,	// (0x0004bb1f) image3_infobar_time_pane

0x7f3b,	// (0x00045145) image3_infobar_time_pane_g1

0xe925,	// (0x0004bb2f) image3_infobar_time_pane_t1

0x7f3b,	// (0x00045145) image3_infobar_loc_pane_g1

0xe933,	// (0x0004bb3d) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0004d073) image3_infobar_loc_pane_g

0xe93b,	// (0x0004bb45) image3_infobar_loc_pane_t1

0x7f3b,	// (0x00045145) image3_infobar_fav_pane_g1

0xe949,	// (0x0004bb53) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0004d078) image3_infobar_fav_pane_g

0xe951,	// (0x0004bb5b) fs_bigclock_status_battery_pane

0xe95a,	// (0x0004bb64) fs_bigclock_status_signal_pane

0xe963,	// (0x0004bb6d) fs_bigclock_status_title_pane

0xe96c,	// (0x0004bb76) fs_bigclock_status_signal_pane_g1

0xe975,	// (0x0004bb7f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0004d07d) fs_bigclock_status_signal_pane_g

0xe97d,	// (0x0004bb87) fs_bigclock_status_battery_pane_g1

0xe986,	// (0x0004bb90) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0004d082) fs_bigclock_status_battery_pane_g

0xe98e,	// (0x0004bb98) fs_bigclock_status_title_pane_t1

0x7f3b,	// (0x00045145) main_fs_bigclock_clock_pane_g1

0xe99c,	// (0x0004bba6) main_fs_bigclock_clock_pane_g2

0xe99c,	// (0x0004bba6) main_fs_bigclock_clock_pane_g3

0xe99c,	// (0x0004bba6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0004d087) main_fs_bigclock_clock_pane_g

0xe9a4,	// (0x0004bbae) main_fs_bigclock_clock_pane_t1

0xe9b2,	// (0x0004bbbc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0004d090) main_fs_bigclock_clock_pane_t

0xe9c1,	// (0x0004bbcb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe9c1,	// (0x0004bbcb) list_single_fs_bigclock_indicator_pane

0xb871,	// (0x00048a7b) list_single_fs_bigclock_pane_ParamLimits

0xb871,	// (0x00048a7b) list_single_fs_bigclock_pane

0xe9db,	// (0x0004bbe5) main_fs_bigclock_indicator_pane_t1

0xe9ea,	// (0x0004bbf4) list_single_fs_bigclock_pane_g1

0xe9f2,	// (0x0004bbfc) list_single_fs_bigclock_pane_t1

0x7f3b,	// (0x00045145) main_fs_bigclock_swipe_pane_g1

0xea30,	// (0x0004bc3a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0004d0a1) main_fs_bigclock_swipe_pane_g

0xea38,	// (0x0004bc42) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xea38,	// (0x0004bc42) main_fs_bigclock_swipe_pane_t1

0x4c48,	// (0x00041e52) call_type_pane_ParamLimits

0x0289,	// (0x0003d493) main_btmg_pane

0xe6a6,	// (0x0004b8b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe6a6,	// (0x0004b8b0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0004d014) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0004d014) list_single_cale_mrui_row_pane_g

0xe800,	// (0x0004ba0a) list_recal_vselct_arw_lo_pane

0xe808,	// (0x0004ba12) list_recal_vselct_arw_up_pane

0xd45c,	// (0x0004a666) list_recal_vselct_pane

0xea55,	// (0x0004bc5f) btmg_button_pane

0xb8d6,	// (0x00048ae0) main_btmg_pane_g1

0x0289,	// (0x0003d493) bg_button_pane_cp044

0xea5f,	// (0x0004bc69) btmg_button_pane_t1

0x6d96,	// (0x00043fa0) aid_listscroll_gen

0x18e6,	// (0x0003eaf0) main_cntbar_detail_pane

0xe3c0,	// (0x0004b5ca) list_cmail_folder_pane

0xe3d0,	// (0x0004b5da) sp_fs_scroll_pane_cp03_ParamLimits

0x30a7,	// (0x000402b1) list_single_fs_dyc_pane_cp01_ParamLimits

0x30a7,	// (0x000402b1) list_single_fs_dyc_pane_cp01

0xea6d,	// (0x0004bc77) aid_size_cmail_indent

0xea76,	// (0x0004bc80) list_single_dyc_row_pane_cp01

0xb90c,	// (0x00048b16) cntbar_detail_list_pane_ParamLimits

0xb90c,	// (0x00048b16) cntbar_detail_list_pane

0xb958,	// (0x00048b62) main_cntbar_detail_cont_pane_ParamLimits

0xb958,	// (0x00048b62) main_cntbar_detail_cont_pane

0x4c3c,	// (0x00041e46) scroll_pane_cp032_ParamLimits

0x4c3c,	// (0x00041e46) scroll_pane_cp032

0xb96c,	// (0x00048b76) cntbar_detail_list_event_pane_ParamLimits

0xb96c,	// (0x00048b76) cntbar_detail_list_event_pane

0xb91c,	// (0x00048b26) cntbar_detail_list_shct_pane

0x0e80,	// (0x0003e08a) aid_list_gen

0xea7f,	// (0x0004bc89) aid_scroll

0xea88,	// (0x0004bc92) aid_size_touch_scroll_bar

0xb97c,	// (0x00048b86) aid_list_double

0xea91,	// (0x0004bc9b) aid_list_single

0x30c1,	// (0x000402cb) aid_list_single_lg

0xea9a,	// (0x0004bca4) aid_list_z_g_a_sm

0xeaa2,	// (0x0004bcac) aid_list_z_g_d

0xeaaa,	// (0x0004bcb4) aid_txt_z_prm

0x30ca,	// (0x000402d4) aid_txt_z_prm_cp01

0x30d8,	// (0x000402e2) aid_txt_z_sec

0xb985,	// (0x00048b8f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb985,	// (0x00048b8f) main_cntbar_detail_cont_pane_g1

0xb999,	// (0x00048ba3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb999,	// (0x00048ba3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0004d0a6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0004d0a6) main_cntbar_detail_cont_pane_g

0xeab8,	// (0x0004bcc2) main_cntbar_detail_cont_pane_t1

0xeac6,	// (0x0004bcd0) main_cntbar_detail_cont_pane_t2

0xead4,	// (0x0004bcde) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0004d0ab) main_cntbar_detail_cont_pane_t

0xb9a9,	// (0x00048bb3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb9a9,	// (0x00048bb3) cell_cntbar_detail_list_shct_pane

0xeae2,	// (0x0004bcec) cntbar_detail_list_shct_pane_g1

0xeaeb,	// (0x0004bcf5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0004d0b2) cntbar_detail_list_shct_pane_g

0xb9bd,	// (0x00048bc7) cntbar_detail_list_event_pane_g1_ParamLimits

0xb9bd,	// (0x00048bc7) cntbar_detail_list_event_pane_g1

0xb9c9,	// (0x00048bd3) cntbar_detail_list_event_pane_g2_ParamLimits

0xb9c9,	// (0x00048bd3) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0004d0b7) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0004d0b7) cntbar_detail_list_event_pane_g

0xba35,	// (0x00048c3f) cntbar_detail_list_event_pane_t1_ParamLimits

0xba35,	// (0x00048c3f) cntbar_detail_list_event_pane_t1

0xba4a,	// (0x00048c54) cntbar_detail_list_event_pane_t2_ParamLimits

0xba4a,	// (0x00048c54) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0004d0c4) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0004d0c4) cntbar_detail_list_event_pane_t

0x7f3b,	// (0x00045145) cell_cntbar_detail_list_shct_pane_g1

0x4faa,	// (0x000421b4) navi_pane_mv_g3

0x18e6,	// (0x0003eaf0) main_cntbar_detail_pane_ParamLimits

0x0289,	// (0x0003d493) main_notif_wgt_pane

0xed52,	// (0x0004bf5c) aid_tch_main_mp4_pane_g4

0xef34,	// (0x0004c13e) popup_slider_window_cp02

0xe7f7,	// (0x0004ba01) list_recal_day_event_pane

0xb8e0,	// (0x00048aea) cntbar_detail_btn_pane_ParamLimits

0xb8e0,	// (0x00048aea) cntbar_detail_btn_pane

0xb8f6,	// (0x00048b00) cntbar_detail_btn_pane_cp01_ParamLimits

0xb8f6,	// (0x00048b00) cntbar_detail_btn_pane_cp01

0xb91c,	// (0x00048b26) cntbar_detail_list_shct_pane_ParamLimits

0xb92c,	// (0x00048b36) cntbar_detail_pane_g1_ParamLimits

0xb92c,	// (0x00048b36) cntbar_detail_pane_g1

0xb93c,	// (0x00048b46) cntbar_detail_pane_t1_ParamLimits

0xb93c,	// (0x00048b46) cntbar_detail_pane_t1

0xb9d5,	// (0x00048bdf) cntbar_detail_list_event_pane_g3_ParamLimits

0xb9d5,	// (0x00048bdf) cntbar_detail_list_event_pane_g3

0xb9ed,	// (0x00048bf7) cntbar_detail_list_event_pane_g4_ParamLimits

0xb9ed,	// (0x00048bf7) cntbar_detail_list_event_pane_g4

0xba05,	// (0x00048c0f) cntbar_detail_list_event_pane_g5_ParamLimits

0xba05,	// (0x00048c0f) cntbar_detail_list_event_pane_g5

0xba1d,	// (0x00048c27) cntbar_detail_list_event_pane_g6_ParamLimits

0xba1d,	// (0x00048c27) cntbar_detail_list_event_pane_g6

0xba5f,	// (0x00048c69) cntbar_detail_list_event_pane_t3_ParamLimits

0xba5f,	// (0x00048c69) cntbar_detail_list_event_pane_t3

0xba71,	// (0x00048c7b) popup_notif_wgt_window_ParamLimits

0xba71,	// (0x00048c7b) popup_notif_wgt_window

0xba8a,	// (0x00048c94) popup_submenu_window_cp01_ParamLimits

0xba8a,	// (0x00048c94) popup_submenu_window_cp01

0x151d,	// (0x0003e727) bg_popup_window_pane_cp10

0xeaf4,	// (0x0004bcfe) listscroll_notif_wgt_pane

0xeafe,	// (0x0004bd08) list_notif_wgt_window

0xeb07,	// (0x0004bd11) scroll_pane_cp033

0xeb10,	// (0x0004bd1a) list_notif_wgt_row_pane_ParamLimits

0xeb10,	// (0x0004bd1a) list_notif_wgt_row_pane

0xeb22,	// (0x0004bd2c) aid_size_list_notif_wgt_del

0xeb2b,	// (0x0004bd35) list_notif_wgt_row_pane_g1

0xeb33,	// (0x0004bd3d) list_notif_wgt_row_pane_g2

0xeb3b,	// (0x0004bd45) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0004d0cb) list_notif_wgt_row_pane_g

0xeb44,	// (0x0004bd4e) list_notif_wgt_row_pane_t1

0xeb52,	// (0x0004bd5c) list_notif_wgt_row_pane_t2

0xeb60,	// (0x0004bd6a) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0004d0d2) list_notif_wgt_row_pane_t

0xd13e,	// (0x0004a348) list_recal_day_event_pane_g1

0xeb6e,	// (0x0004bd78) list_recal_day_event_pane_t1

0x0289,	// (0x0003d493) bg_button_pane_cp045

0xeb7d,	// (0x0004bd87) cntbar_detail_btn_pane_t1

0x6db2,	// (0x00043fbc) main_callh_pane_ParamLimits

0x6db2,	// (0x00043fbc) main_callh_pane

0x0289,	// (0x0003d493) main_coverflow0_pane

0x0289,	// (0x0003d493) main_wgtman_pane

0xb0a9,	// (0x000482b3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb0a9,	// (0x000482b3) main_fs_bigclock_unlock_btn_pane

0xe39a,	// (0x0004b5a4) bg_button_pane_cp16

0xe3aa,	// (0x0004b5b4) cell_tport_appsw_pane_g3

0xba9c,	// (0x00048ca6) cf0_flow_pane_ParamLimits

0xba9c,	// (0x00048ca6) cf0_flow_pane

0xeb8b,	// (0x0004bd95) listscroll_cf0_pane

0xeb94,	// (0x0004bd9e) main_cf0_pane_g1

0xbab1,	// (0x00048cbb) main_cf0_pane_t1_ParamLimits

0xbab1,	// (0x00048cbb) main_cf0_pane_t1

0xbac9,	// (0x00048cd3) main_cf0_pane_t2_ParamLimits

0xbac9,	// (0x00048cd3) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0004d0d9) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0004d0d9) main_cf0_pane_t

0xeb9e,	// (0x0004bda8) scroll_pane_cp11

0xbae1,	// (0x00048ceb) cf0_flow_pane_g1

0xbae9,	// (0x00048cf3) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0004d0de) cf0_flow_pane_g

0xbaf1,	// (0x00048cfb) cf0_flow_pane_t1

0x0289,	// (0x0003d493) main_call6_pane

0x0289,	// (0x0003d493) main_calllock_pane

0xbaff,	// (0x00048d09) call6_btn_grp_pane_ParamLimits

0xbaff,	// (0x00048d09) call6_btn_grp_pane

0xbb19,	// (0x00048d23) call6_pane_g1_ParamLimits

0xbb19,	// (0x00048d23) call6_pane_g1

0xbb2e,	// (0x00048d38) popup_call6_1st_window_ParamLimits

0xbb2e,	// (0x00048d38) popup_call6_1st_window

0xbb3f,	// (0x00048d49) popup_call6_2nd_window_ParamLimits

0xbb3f,	// (0x00048d49) popup_call6_2nd_window

0xbb50,	// (0x00048d5a) cell_call6_btn_pane_ParamLimits

0xbb50,	// (0x00048d5a) cell_call6_btn_pane

0x151d,	// (0x0003e727) bg_popup_call2_in_pane_cp03

0xeba9,	// (0x0004bdb3) popup_call6_1st_window_g1

0xebb1,	// (0x0004bdbb) popup_call6_1st_window_g2

0xebb9,	// (0x0004bdc3) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0004d0e3) popup_call6_1st_window_g

0xebc1,	// (0x0004bdcb) popup_call6_1st_window_t1

0xebd0,	// (0x0004bdda) popup_call6_1st_window_t2

0xebe0,	// (0x0004bdea) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0004d0ea) popup_call6_1st_window_t

0x151d,	// (0x0003e727) bg_popup_call2_in_pane_cp04

0xeba9,	// (0x0004bdb3) popup_call6_2nd_window_g1

0xebb1,	// (0x0004bdbb) popup_call6_2nd_window_g2

0xebb9,	// (0x0004bdc3) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0004d0e3) popup_call6_2nd_window_g

0xebc1,	// (0x0004bdcb) popup_call6_2nd_window_t1

0x0289,	// (0x0003d493) bg_button_pane_cp15

0xebf0,	// (0x0004bdfa) cell_call6_btn_pane_g1

0xebf9,	// (0x0004be03) cell_call6_btn_pane_t1

0xbb64,	// (0x00048d6e) listscroll_wgtman_pane_ParamLimits

0xbb64,	// (0x00048d6e) listscroll_wgtman_pane

0xbb87,	// (0x00048d91) wgtman_btn_pane_ParamLimits

0xbb87,	// (0x00048d91) wgtman_btn_pane

0x13d4,	// (0x0003e5de) aid_scroll_copy1

0xec08,	// (0x0004be12) list_wgtman_pane

0xbbca,	// (0x00048dd4) wgtman_btn_pane_g1_ParamLimits

0xbbca,	// (0x00048dd4) wgtman_btn_pane_g1

0xbbf6,	// (0x00048e00) wgtman_btn_pane_t1_ParamLimits

0xbbf6,	// (0x00048e00) wgtman_btn_pane_t1

0xec12,	// (0x0004be1c) wgtman_btn_pane_t2_ParamLimits

0xec12,	// (0x0004be1c) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0004d0f1) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0004d0f1) wgtman_btn_pane_t

0xbc33,	// (0x00048e3d) listrow_wgtman_pane_ParamLimits

0xbc33,	// (0x00048e3d) listrow_wgtman_pane

0xbc45,	// (0x00048e4f) listrow_wgtman_pane_g1

0xbc4e,	// (0x00048e58) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0004d0f6) listrow_wgtman_pane_g

0x30e6,	// (0x000402f0) listrow_wgtman_pane_t1

0x30f4,	// (0x000402fe) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0004d0fb) listrow_wgtman_pane_t

0x3102,	// (0x0004030c) wait_bar_pane_cp09

0xec29,	// (0x0004be33) main_calllock_btn_pane

0xec33,	// (0x0004be3d) main_calllock_pane_g1

0x0289,	// (0x0003d493) bg_button_pane_cp17

0xec3f,	// (0x0004be49) main_calllock_btn_pane_g1

0xec48,	// (0x0004be52) main_calllock_btn_pane_t1

0x0289,	// (0x0003d493) main_dialer3_pane

0x0289,	// (0x0003d493) main_fmrd2_pane

0x7f3b,	// (0x00045145) main_fs_bigclock_unlock_btn_pane_g1

0xec5f,	// (0x0004be69) main_fs_bigclock_unlock_btn_pane_t1

0xbc58,	// (0x00048e62) area_fmrd2_info_pane_ParamLimits

0xbc58,	// (0x00048e62) area_fmrd2_info_pane

0xbc69,	// (0x00048e73) area_fmrd2_visual_pane_ParamLimits

0xbc69,	// (0x00048e73) area_fmrd2_visual_pane

0xbc77,	// (0x00048e81) fmrd2_indi_pane_ParamLimits

0xbc77,	// (0x00048e81) fmrd2_indi_pane

0xbc84,	// (0x00048e8e) area_fmrd2_visual_pane_g1

0xbc8c,	// (0x00048e96) area_fmrd2_visual_pane_t1

0xbc9c,	// (0x00048ea6) area_fmrd2_visual_pane_t2

0xbcac,	// (0x00048eb6) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0004d105) area_fmrd2_visual_pane_t

0xbcbc,	// (0x00048ec6) area_fmrd2_info_pane_g1

0xbcc4,	// (0x00048ece) area_fmrd2_info_pane_t1

0xbcd4,	// (0x00048ede) area_fmrd2_info_pane_t2

0xbce4,	// (0x00048eee) area_fmrd2_info_pane_t3

0xbcf4,	// (0x00048efe) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0004d10c) area_fmrd2_info_pane_t

0xbd02,	// (0x00048f0c) fmrd2_indi_pane_t1

0xbd12,	// (0x00048f1c) fmrd2_indi_pane_t2

0xbd22,	// (0x00048f2c) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0004d115) fmrd2_indi_pane_t

0xde34,	// (0x0004b03e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xde34,	// (0x0004b03e) list_single_fs_bigclock_indicator_pane_g5

0xded8,	// (0x0004b0e2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xded8,	// (0x0004b0e2) list_single_fs_bigclock_indicator_pane_t5

0xb5ce,	// (0x000487d8) aid_cell_bcale_month_pane_ParamLimits

0xb5ce,	// (0x000487d8) aid_cell_bcale_month_pane

0xb5e0,	// (0x000487ea) bcale_month_pane_ParamLimits

0xb5e0,	// (0x000487ea) bcale_month_pane

0xb5f8,	// (0x00048802) bcale_preview_pane_ParamLimits

0xb5f8,	// (0x00048802) bcale_preview_pane

0xe9f2,	// (0x0004bbfc) list_single_fs_bigclock_pane_t1_ParamLimits

0xea0c,	// (0x0004bc16) list_single_fs_bigclock_pane_t2_ParamLimits

0xea0c,	// (0x0004bc16) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0004d09c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0004d09c) list_single_fs_bigclock_pane_t

0xec57,	// (0x0004be61) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0004d100) main_fs_bigclock_unlock_btn_pane_g

0xbd32,	// (0x00048f3c) aid_dia3_key_size_ParamLimits

0xbd32,	// (0x00048f3c) aid_dia3_key_size

0xbd41,	// (0x00048f4b) aid_dia3_listrow_size_ParamLimits

0xbd41,	// (0x00048f4b) aid_dia3_listrow_size

0xbd56,	// (0x00048f60) dia3_keypad_fun_pane_ParamLimits

0xbd56,	// (0x00048f60) dia3_keypad_fun_pane

0xbd72,	// (0x00048f7c) dia3_keypad_num_pane_ParamLimits

0xbd72,	// (0x00048f7c) dia3_keypad_num_pane

0xbd8d,	// (0x00048f97) dia3_listscroll_pane_ParamLimits

0xbd8d,	// (0x00048f97) dia3_listscroll_pane

0xbda0,	// (0x00048faa) dia3_numentry_pane_ParamLimits

0xbda0,	// (0x00048faa) dia3_numentry_pane

0xec6d,	// (0x0004be77) dia3_list_pane

0xec78,	// (0x0004be82) scroll_pane_cp12

0x0289,	// (0x0003d493) bg_dia3_numentry_pane

0xbdb4,	// (0x00048fbe) dia3_numentry_pane_t1

0xbdc3,	// (0x00048fcd) cell_dia3_key_num_pane

0xbdcb,	// (0x00048fd5) cell_dia3_key0_fun_pane_ParamLimits

0xbdcb,	// (0x00048fd5) cell_dia3_key0_fun_pane

0xbddf,	// (0x00048fe9) cell_dia3_key1_fun_pane_ParamLimits

0xbddf,	// (0x00048fe9) cell_dia3_key1_fun_pane

0xbdf7,	// (0x00049001) dia3_listrow_pane

0xdb54,	// (0x0004ad5e) bg_dia3_numentry_pane_g1

0x0289,	// (0x0003d493) bg_button_pane_cp21

0xec83,	// (0x0004be8d) cell_dia3_key_num_pane_t1

0xec91,	// (0x0004be9b) cell_dia3_key_num_pane_t2

0xeca0,	// (0x0004beaa) cell_dia3_key_num_pane_t3

0xecaf,	// (0x0004beb9) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0004d11c) cell_dia3_key_num_pane_t

0x0289,	// (0x0003d493) bg_button_pane_cp19

0xbe09,	// (0x00049013) cell_dia3_key0_fun_pane_g1

0x0289,	// (0x0003d493) bg_button_pane_cp20

0xbe11,	// (0x0004901b) cell_dia3_key1_fun_pane_g1

0xbe19,	// (0x00049023) area_left_week_number_pane

0xbe22,	// (0x0004902c) area_top_day_name_pane

0xbe2b,	// (0x00049035) frame_month_view_pane

0xbe37,	// (0x00049041) grid_month_view_pane

0xbe41,	// (0x0004904b) cell_top_day_name_pane_ParamLimits

0xbe41,	// (0x0004904b) cell_top_day_name_pane

0xcef6,	// (0x0004a100) cell_area_left_week_number_pane_ParamLimits

0xcef6,	// (0x0004a100) cell_area_left_week_number_pane

0xbe59,	// (0x00049063) cell_month_view_pane_ParamLimits

0xbe59,	// (0x00049063) cell_month_view_pane

0xecbe,	// (0x0004bec8) frm_month_g1

0xbe74,	// (0x0004907e) frm_month_g2

0xbe7e,	// (0x00049088) frm_month_g3

0xbe88,	// (0x00049092) frm_month_g4

0xbe92,	// (0x0004909c) frm_month_g5

0xbe9c,	// (0x000490a6) frm_month_g6

0xbea6,	// (0x000490b0) frm_month_g7

0xecc7,	// (0x0004bed1) frm_month_g8

0xbeb2,	// (0x000490bc) frm_month_g9

0xbebb,	// (0x000490c5) frm_month_g10

0xbec4,	// (0x000490ce) frm_month_g11

0xbecd,	// (0x000490d7) frm_month_g12

0xbed6,	// (0x000490e0) frm_month_g13

0xbedf,	// (0x000490e9) frm_month_g14

0xbee8,	// (0x000490f2) frm_month_g15

0xbef1,	// (0x000490fb) frm_month_g16

0x000f,

0xff1b,	// (0x0004d125) frm_month_g

0xbefc,	// (0x00049106) cell_top_day_name_pane_t1

0xbf0b,	// (0x00049115) cell_area_left_week_number_pane_g1

0xbefc,	// (0x00049106) cell_area_left_week_number_pane_t1

0x7f3b,	// (0x00045145) cell_month_view_pane_g1

0xbf13,	// (0x0004911d) cell_month_view_pane_t1

0x0289,	// (0x0003d493) main_fps_pane

0xe112,	// (0x0004b31c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe112,	// (0x0004b31c) cmail_ddmenu_btn02_pane_cp1

0xe12e,	// (0x0004b338) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe12e,	// (0x0004b338) cmail_ddmenu_btn02_pane_cp2

0xb7d2,	// (0x000489dc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb7d2,	// (0x000489dc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0004d04d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0004d04d) cmail_ddmenu_btn02_pane_g

0xb7f0,	// (0x000489fa) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb7f0,	// (0x000489fa) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0004d052) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0004d052) cmail_ddmenu_btn02_pane_t

0xbf22,	// (0x0004912c) fps_text_pane_ParamLimits

0xbf22,	// (0x0004912c) fps_text_pane

0xbf39,	// (0x00049143) main_fps_pane_g1_ParamLimits

0xbf39,	// (0x00049143) main_fps_pane_g1

0xbf53,	// (0x0004915d) wait_bar_pane_cp010_ParamLimits

0xbf53,	// (0x0004915d) wait_bar_pane_cp010

0xbf64,	// (0x0004916e) fps_text_pane_t1_ParamLimits

0xbf64,	// (0x0004916e) fps_text_pane_t1

0x95a7,	// (0x000467b1) cam4_image_uncrop_pane_g1

0x95b0,	// (0x000467ba) cam4_image_uncrop_pane_g2

0x95b9,	// (0x000467c3) cam4_image_uncrop_pane_g3

0x95c2,	// (0x000467cc) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0004cb26) cam4_image_uncrop_pane_g

0xbdf7,	// (0x00049001) dia3_listrow_pane_ParamLimits

0x0289,	// (0x0003d493) main_phob2_pane

0xb446,	// (0x00048650) cell_tport_appsw_pane_cp02_ParamLimits

0xb446,	// (0x00048650) cell_tport_appsw_pane_cp02

0xb45a,	// (0x00048664) cell_tport_appsw_pane_cp03_ParamLimits

0xb45a,	// (0x00048664) cell_tport_appsw_pane_cp03

0x0289,	// (0x0003d493) phob2_contact_card_pane

0x0289,	// (0x0003d493) phob2_listscroll_pane

0x00e1,	// (0x0003d2eb) phob2_list_pane

0x00e9,	// (0x0003d2f3) scroll_pane_cp034

0xbf7c,	// (0x00049186) phob2_cc_data_pane_ParamLimits

0xbf7c,	// (0x00049186) phob2_cc_data_pane

0xbf9b,	// (0x000491a5) phob2_cc_listscroll_pane_ParamLimits

0xbf9b,	// (0x000491a5) phob2_cc_listscroll_pane

0xbfb9,	// (0x000491c3) list_double_large_graphic_phob2_pane_ParamLimits

0xbfb9,	// (0x000491c3) list_double_large_graphic_phob2_pane

0x0143,	// (0x0003d34d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x0143,	// (0x0003d34d) list_double_large_graphic_phob2_pane_g1

0xecd0,	// (0x0004beda) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xecd0,	// (0x0004beda) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0004d146) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0004d146) list_double_large_graphic_phob2_pane_g

0xecdc,	// (0x0004bee6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xecdc,	// (0x0004bee6) list_double_large_graphic_phob2_pane_t1

0xecf1,	// (0x0004befb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xecf1,	// (0x0004befb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0004d14b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0004d14b) list_double_large_graphic_phob2_pane_t

0x0289,	// (0x0003d493) list_highlight_pane_cp024

0x0150,	// (0x0003d35a) phob2_cc_button_pane

0xbfcb,	// (0x000491d5) phob2_cc_data_pane_g1_ParamLimits

0xbfcb,	// (0x000491d5) phob2_cc_data_pane_g1

0xbfe0,	// (0x000491ea) phob2_cc_data_pane_g2_ParamLimits

0xbfe0,	// (0x000491ea) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0004d150) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0004d150) phob2_cc_data_pane_g

0xbff2,	// (0x000491fc) phob2_cc_data_pane_t1_ParamLimits

0xbff2,	// (0x000491fc) phob2_cc_data_pane_t1

0xc00a,	// (0x00049214) phob2_cc_data_pane_t2_ParamLimits

0xc00a,	// (0x00049214) phob2_cc_data_pane_t2

0xc022,	// (0x0004922c) phob2_cc_data_pane_t3_ParamLimits

0xc022,	// (0x0004922c) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0004d155) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0004d155) phob2_cc_data_pane_t

0x01a6,	// (0x0003d3b0) phob2_cc_list_pane_ParamLimits

0x01a6,	// (0x0003d3b0) phob2_cc_list_pane

0x01b2,	// (0x0003d3bc) scroll_pane_cp035_ParamLimits

0x01b2,	// (0x0003d3bc) scroll_pane_cp035

0x18e6,	// (0x0003eaf0) bg_button_pane_cp033

0x01be,	// (0x0003d3c8) phob2_cc_button_pane_g1

0x01ca,	// (0x0003d3d4) phob2_cc_button_pane_t1

0x01df,	// (0x0003d3e9) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0004d15c) phob2_cc_button_pane_t

0xc03a,	// (0x00049244) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc03a,	// (0x00049244) list_double_large_graphic_phob2_cc_pane

0xc04c,	// (0x00049256) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc04c,	// (0x00049256) list_double_large_graphic_phob2_cc_pane_g1

0x310a,	// (0x00040314) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x310a,	// (0x00040314) list_double_large_graphic_phob2_cc_pane_g2

0x3116,	// (0x00040320) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3116,	// (0x00040320) list_double_large_graphic_phob2_cc_pane_g3

0x3122,	// (0x0004032c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x3122,	// (0x0004032c) list_double_large_graphic_phob2_cc_pane_g4

0x312e,	// (0x00040338) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x312e,	// (0x00040338) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0004d161) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0004d161) list_double_large_graphic_phob2_cc_pane_g

0x313a,	// (0x00040344) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x313a,	// (0x00040344) list_double_large_graphic_phob2_cc_pane_t1

0x3163,	// (0x0004036d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3163,	// (0x0004036d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0004d16c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0004d16c) list_double_large_graphic_phob2_cc_pane_t

0x0229,	// (0x0003d433) list_highlight_pane_cp025_ParamLimits

0x0229,	// (0x0003d433) list_highlight_pane_cp025

0x18e6,	// (0x0003eaf0) bg_button_pane_cp033_ParamLimits

0x01be,	// (0x0003d3c8) phob2_cc_button_pane_g1_ParamLimits

0x01ca,	// (0x0003d3d4) phob2_cc_button_pane_t1_ParamLimits

0x01df,	// (0x0003d3e9) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0004d15c) phob2_cc_button_pane_t_ParamLimits

0x33b0,	// (0x000405ba) popup_wgtman_window

0xcfd8,	// (0x0004a1e2) scroll_pane_cp038

0xbbac,	// (0x00048db6) wgtman_btn_pane_cp_01_ParamLimits

0xbbac,	// (0x00048db6) wgtman_btn_pane_cp_01

0x0237,	// (0x0003d441) wgtman_content_pane

0x0240,	// (0x0003d44a) wgtman_heading_pane

0x0289,	// (0x0003d493) bg_heading_pane_cp02

0x0249,	// (0x0003d453) wgtman_heading_pane_g1

0x0251,	// (0x0003d45b) wgtman_heading_pane_t1

0x025f,	// (0x0003d469) scroll_pane_cp036

0x0267,	// (0x0003d471) wgtman_list_pane

0x026f,	// (0x0003d479) wgtman_list_pane_t1_ParamLimits

0x026f,	// (0x0003d479) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
